// Created by BlueFire1337
// Updated 2021-11-26
// Generated 2022-01-23

namespace off {
	constexpr auto GNames = 0x51e3440;
	constexpr auto GObjects = 0x51fb9e8;
	constexpr auto GWorld = 0x5335d50;
}

struct UEngine : UObject {
	UFont* TinyFont; // 0x30
	FSoftObjectPath TinyFontName; // 0x38
	UFont* SmallFont; // 0x50
	FSoftObjectPath SmallFontName; // 0x58
	UFont* MediumFont; // 0x70
	FSoftObjectPath MediumFontName; // 0x78
	UFont* LargeFont; // 0x90
	FSoftObjectPath LargeFontName; // 0x98
	UFont* SubtitleFont; // 0xb0
	FSoftObjectPath SubtitleFontName; // 0xb8
	TArray<UFont*> AdditionalFonts; // 0xd0
	TArray<FString> AdditionalFontNames; // 0xe0
	UConsole* ConsoleClass; // 0xf0
	FSoftClassPath ConsoleClassName; // 0xf8
	UGameViewportClient* GameViewportClientClass; // 0x110
	FSoftClassPath GameViewportClientClassName; // 0x118
	ULocalPlayer* LocalPlayerClass; // 0x130
	FSoftClassPath LocalPlayerClassName; // 0x138
	AWorldSettings* WorldSettingsClass; // 0x150
	FSoftClassPath WorldSettingsClassName; // 0x158
	FSoftClassPath NavigationSystemClassName; // 0x170
	UNavigationSystemBase* NavigationSystemClass; // 0x188
	FSoftClassPath NavigationSystemConfigClassName; // 0x190
	UNavigationSystemConfig* NavigationSystemConfigClass; // 0x1a8
	FSoftClassPath AvoidanceManagerClassName; // 0x1b0
	UAvoidanceManager* AvoidanceManagerClass; // 0x1c8
	FSoftClassPath AIControllerClassName; // 0x1d0
	UPhysicsCollisionHandler* PhysicsCollisionHandlerClass; // 0x1e8
	FSoftClassPath PhysicsCollisionHandlerClassName; // 0x1f0
	FSoftClassPath GameUserSettingsClassName; // 0x208
	UGameUserSettings* GameUserSettingsClass; // 0x220
	UGameUserSettings* GameUserSettings; // 0x228
	ALevelScriptActor* LevelScriptActorClass; // 0x230
	FSoftClassPath LevelScriptActorClassName; // 0x238
	FSoftClassPath DefaultBlueprintBaseClassName; // 0x250
	FSoftClassPath GameSingletonClassName; // 0x268
	UObject* GameSingleton; // 0x280
	FSoftClassPath AssetManagerClassName; // 0x288
	UAssetManager* AssetManager; // 0x2a0
	UTexture2D* DefaultTexture; // 0x2a8
	FSoftObjectPath DefaultTextureName; // 0x2b0
	UTexture* DefaultDiffuseTexture; // 0x2c8
	FSoftObjectPath DefaultDiffuseTextureName; // 0x2d0
	UTexture2D* DefaultBSPVertexTexture; // 0x2e8
	FSoftObjectPath DefaultBSPVertexTextureName; // 0x2f0
	UTexture2D* HighFrequencyNoiseTexture; // 0x308
	FSoftObjectPath HighFrequencyNoiseTextureName; // 0x310
	UTexture2D* DefaultBokehTexture; // 0x328
	FSoftObjectPath DefaultBokehTextureName; // 0x330
	UTexture2D* DefaultBloomKernelTexture; // 0x348
	FSoftObjectPath DefaultBloomKernelTextureName; // 0x350
	UMaterial* WireframeMaterial; // 0x368
	FString WireframeMaterialName; // 0x370
	UMaterial* DebugMeshMaterial; // 0x380
	FSoftObjectPath DebugMeshMaterialName; // 0x388
	UMaterial* EmissiveMeshMaterial; // 0x3a0
	FSoftObjectPath EmissiveMeshMaterialName; // 0x3a8
	UMaterial* LevelColorationLitMaterial; // 0x3c0
	FString LevelColorationLitMaterialName; // 0x3c8
	UMaterial* LevelColorationUnlitMaterial; // 0x3d8
	FString LevelColorationUnlitMaterialName; // 0x3e0
	UMaterial* LightingTexelDensityMaterial; // 0x3f0
	FString LightingTexelDensityName; // 0x3f8
	UMaterial* ShadedLevelColorationLitMaterial; // 0x408
	FString ShadedLevelColorationLitMaterialName; // 0x410
	UMaterial* ShadedLevelColorationUnlitMaterial; // 0x420
	FString ShadedLevelColorationUnlitMaterialName; // 0x428
	UMaterial* RemoveSurfaceMaterial; // 0x438
	FSoftObjectPath RemoveSurfaceMaterialName; // 0x440
	UMaterial* VertexColorMaterial; // 0x458
	FString VertexColorMaterialName; // 0x460
	UMaterial* VertexColorViewModeMaterial_ColorOnly; // 0x470
	FString VertexColorViewModeMaterialName_ColorOnly; // 0x478
	UMaterial* VertexColorViewModeMaterial_AlphaAsColor; // 0x488
	FString VertexColorViewModeMaterialName_AlphaAsColor; // 0x490
	UMaterial* VertexColorViewModeMaterial_RedOnly; // 0x4a0
	FString VertexColorViewModeMaterialName_RedOnly; // 0x4a8
	UMaterial* VertexColorViewModeMaterial_GreenOnly; // 0x4b8
	FString VertexColorViewModeMaterialName_GreenOnly; // 0x4c0
	UMaterial* VertexColorViewModeMaterial_BlueOnly; // 0x4d0
	FString VertexColorViewModeMaterialName_BlueOnly; // 0x4d8
	FSoftObjectPath DebugEditorMaterialName; // 0x4e8
	UMaterial* ConstraintLimitMaterial; // 0x500
	UMaterialInstanceDynamic* ConstraintLimitMaterialX; // 0x508
	UMaterialInstanceDynamic* ConstraintLimitMaterialXAxis; // 0x510
	UMaterialInstanceDynamic* ConstraintLimitMaterialY; // 0x518
	UMaterialInstanceDynamic* ConstraintLimitMaterialYAxis; // 0x520
	UMaterialInstanceDynamic* ConstraintLimitMaterialZ; // 0x528
	UMaterialInstanceDynamic* ConstraintLimitMaterialZAxis; // 0x530
	UMaterialInstanceDynamic* ConstraintLimitMaterialPrismatic; // 0x538
	UMaterial* InvalidLightmapSettingsMaterial; // 0x540
	FSoftObjectPath InvalidLightmapSettingsMaterialName; // 0x548
	UMaterial* PreviewShadowsIndicatorMaterial; // 0x560
	FSoftObjectPath PreviewShadowsIndicatorMaterialName; // 0x568
	UMaterial* ArrowMaterial; // 0x580
	UMaterialInstanceDynamic* ArrowMaterialYellow; // 0x588
	FSoftObjectPath ArrowMaterialName; // 0x590
	FLinearColor LightingOnlyBrightness; // 0x5a8
	TArray<FLinearColor> ShaderComplexityColors; // 0x5b8
	TArray<FLinearColor> QuadComplexityColors; // 0x5c8
	TArray<FLinearColor> LightComplexityColors; // 0x5d8
	TArray<FLinearColor> StationaryLightOverlapColors; // 0x5e8
	TArray<FLinearColor> LODColorationColors; // 0x5f8
	TArray<FLinearColor> HLODColorationColors; // 0x608
	TArray<FLinearColor> StreamingAccuracyColors; // 0x618
	float MaxPixelShaderAdditiveComplexityCount; // 0x628
	float MaxES3PixelShaderAdditiveComplexityCount; // 0x62c
	float MinLightMapDensity; // 0x630
	float IdealLightMapDensity; // 0x634
	float MaxLightMapDensity; // 0x638
	char bRenderLightMapDensityGrayscale : 1; // 0x63c
	float RenderLightMapDensityGrayscaleScale; // 0x640
	float RenderLightMapDensityColorScale; // 0x644
	FLinearColor LightMapDensityVertexMappedColor; // 0x648
	FLinearColor LightMapDensitySelectedColor; // 0x658
	TArray<FStatColorMapping> StatColorMappings; // 0x668
	UPhysicalMaterial* DefaultPhysMaterial; // 0x678
	FSoftObjectPath DefaultPhysMaterialName; // 0x680
	TArray<FGameNameRedirect> ActiveGameNameRedirects; // 0x698
	TArray<FClassRedirect> ActiveClassRedirects; // 0x6a8
	TArray<FPluginRedirect> ActivePluginRedirects; // 0x6b8
	TArray<FStructRedirect> ActiveStructRedirects; // 0x6c8
	UTexture2D* PreIntegratedSkinBRDFTexture; // 0x6d8
	FSoftObjectPath PreIntegratedSkinBRDFTextureName; // 0x6e0
	UTexture2D* BlueNoiseTexture; // 0x6f8
	FSoftObjectPath BlueNoiseTextureName; // 0x700
	UTexture2D* MiniFontTexture; // 0x718
	FSoftObjectPath MiniFontTextureName; // 0x720
	UTexture* WeightMapPlaceholderTexture; // 0x738
	FSoftObjectPath WeightMapPlaceholderTextureName; // 0x740
	UTexture2D* LightMapDensityTexture; // 0x758
	FSoftObjectPath LightMapDensityTextureName; // 0x760
	UGameViewportClient* GameViewport; // 0x780
	TArray<FString> DeferredCommands; // 0x788
	float NearClipPlane; // 0x798
	char bSubtitlesEnabled : 1; // 0x79c
	char bSubtitlesForcedOff : 1; // 0x79c
	int32_t MaximumLoopIterationCount; // 0x7a0
	char bCanBlueprintsTickByDefault : 1; // 0x7a4
	char bOptimizeAnimBlueprintMemberVariableAccess : 1; // 0x7a4
	char bAllowMultiThreadedAnimationUpdate : 1; // 0x7a4
	char bEnableEditorPSysRealtimeLOD : 1; // 0x7a4
	char bSmoothFrameRate : 1; // 0x7a4
	char bUseFixedFrameRate : 1; // 0x7a4
	float FixedFrameRate; // 0x7a8
	FFloatRange SmoothedFrameRateRange; // 0x7ac
	UEngineCustomTimeStep* CustomTimeStep; // 0x7c0
	FSoftClassPath CustomTimeStepClassName; // 0x7e8
	UTimecodeProvider* TimecodeProvider; // 0x800
	FSoftClassPath TimecodeProviderClassName; // 0x828
	bool bGenerateDefaultTimecode; // 0x840
	FFrameRate GenerateDefaultTimecodeFrameRate; // 0x844
	float GenerateDefaultTimecodeFrameDelay; // 0x84c
	char bCheckForMultiplePawnsSpawnedInAFrame : 1; // 0x850
	int32_t NumPawnsAllowedToBeSpawnedInAFrame; // 0x854
	char bShouldGenerateLowQualityLightmaps : 1; // 0x858
	FColor C_WorldBox; // 0x85c
	FColor C_BrushWire; // 0x860
	FColor C_AddWire; // 0x864
	FColor C_SubtractWire; // 0x868
	FColor C_SemiSolidWire; // 0x86c
	FColor C_NonSolidWire; // 0x870
	FColor C_WireBackground; // 0x874
	FColor C_ScaleBoxHi; // 0x878
	FColor C_VolumeCollision; // 0x87c
	FColor C_BSPCollision; // 0x880
	FColor C_OrthoBackground; // 0x884
	FColor C_Volume; // 0x888
	FColor C_BrushShape; // 0x88c
	float StreamingDistanceFactor; // 0x890
	FDirectoryPath GameScreenshotSaveDirectory; // 0x898
	ETransitionType TransitionType; // 0x8a8
	FString TransitionDescription; // 0x8b0
	FString TransitionGameMode; // 0x8c0
	char bAllowMatureLanguage : 1; // 0x8d0
	float CameraRotationThreshold; // 0x8d4
	float CameraTranslationThreshold; // 0x8d8
	float PrimitiveProbablyVisibleTime; // 0x8dc
	float MaxOcclusionPixelsFraction; // 0x8e0
	char bPauseOnLossOfFocus : 1; // 0x8e4
	int32_t MaxParticleResize; // 0x8e8
	int32_t MaxParticleResizeWarn; // 0x8ec
	TArray<FDropNoteInfo> PendingDroppedNotes; // 0x8f0
	float NetClientTicksPerSecond; // 0x900
	float DisplayGamma; // 0x904
	float MinDesiredFrameRate; // 0x908
	FLinearColor DefaultSelectedMaterialColor; // 0x90c
	FLinearColor SelectedMaterialColor; // 0x91c
	FLinearColor SelectionOutlineColor; // 0x92c
	FLinearColor SubduedSelectionOutlineColor; // 0x93c
	FLinearColor SelectedMaterialColorOverride; // 0x94c
	bool bIsOverridingSelectedColor; // 0x95c
	char bEnableOnScreenDebugMessages : 1; // 0x960
	char bEnableOnScreenDebugMessagesDisplay : 1; // 0x960
	char bSuppressMapWarnings : 1; // 0x960
	char bDisableAILogging : 1; // 0x960
	uint32_t bEnableVisualLogRecordingOnStart; // 0x964
	int32_t ScreenSaverInhibitorSemaphore; // 0x968
	char bLockReadOnlyLevels : 1; // 0x96c
	FString ParticleEventManagerClassPath; // 0x970
	float SelectionHighlightIntensity; // 0x980
	float BSPSelectionHighlightIntensity; // 0x984
	float SelectionHighlightIntensityBillboards; // 0x988
	TArray<FNetDriverDefinition> NetDriverDefinitions; // 0xbf8
	TArray<FString> ServerActors; // 0xc08
	TArray<FString> RuntimeServerActors; // 0xc18
	float NetErrorLogInterval; // 0xc28
	char bStartedLoadMapMovie : 1; // 0xc2c
	int32_t NextWorldContextHandle; // 0xc48
};

struct UBTTask_FlyTo : UBTTaskNode {
	FBlackboardKeySelector FlightLocationKey; // 0x70
	FBlackboardKeySelector FlightResultKey; // 0x98
	FBlackboardKeySelector KeyToFlipFlopWhenTaskExits; // 0xc0
	float MinimumProximityRequired; // 0xe8
	char bRecalcPathOnDestinationChanged : 1; // 0xec
	float RecalculatePathTolerance; // 0xf0
	FDoNNavigationQueryParams queryParams; // 0xf8
	FBT_FlyToTarget_DebugParams DebugParams; // 0x118
	ADonNavigationManager* NavigationManager; // 0x128
	bool bTeleportToDestinationUponFailure; // 0x130
	float MaxTimeBeforeTeleport; // 0x134
};

struct UMovieSceneAkAudioRTPCSection : UMovieSceneSection {
	UAkRtpc* RTPC; // 0xe8
	FString Name; // 0xf0
	FRichCurve FloatCurve; // 0x100
	FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper; // 0x180
	FMovieSceneFloatChannel RTPCChannel; // 0x1b0
};

struct UAsyncTaskDownloadImage : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFail; // 0x40
};

struct UMotionControllerComponent : UPrimitiveComponent {
	int32_t PlayerIndex; // 0x440
	EControllerHand hand; // 0x444
	FName MotionSource; // 0x448
	char bDisableLowLatencyUpdate : 1; // 0x450
	ETrackingStatus CurrentTrackingStatus; // 0x454
	bool bDisplayDeviceModel; // 0x455
	FName DisplayModelSource; // 0x458
	UStaticMesh* CustomDisplayMesh; // 0x460
	TArray<UMaterialInterface*> DisplayMeshMaterialOverrides; // 0x468
	UPrimitiveComponent* DisplayComponent; // 0x4e0
};

struct UMaterialExpressionTextureSampleParameter : UMaterialExpressionTextureSample {
	FName ParameterName; // 0x60
	FGuid ExpressionGUID; // 0x68
	FName Group; // 0x78
};

struct UBP_GameSettingsWrapper_C : UObject {
	FPointerToUberGraphFrame UberGraphFrame; // 0x28
	UBP_GameSettings_C* Game Settings; // 0x30
};

struct UMaterialParameterCollection : UObject {
	FGuid StateId; // 0x28
	TArray<FCollectionScalarParameter> ScalarParameters; // 0x38
	TArray<FCollectionVectorParameter> VectorParameters; // 0x48
};

struct UParticleModuleTypeDataAnimTrail : UParticleModuleTypeDataBase {
	char bDeadTrailsOnDeactivate : 1; // 0x30
	char bEnablePreviousTangentRecalculation : 1; // 0x30
	char bTangentRecalculationEveryFrame : 1; // 0x30
	float TilingDistance; // 0x34
	float DistanceTessellationStepSize; // 0x38
	float TangentTessellationStepSize; // 0x3c
	float WidthTessellationStepSize; // 0x40
};

struct UMovieSceneEventSection : UMovieSceneSection {
	FNameCurve Events; // 0xe8
	FMovieSceneEventSectionData EventData; // 0x160
};

struct ABP_CeilingBuildPartBase1_C : ABP_StaticMeshBuildPartBase_C {
	UBoxComponent* WeatherProof; // 0x860
	UStaticMeshComponent* Cube_StabilityWarning; // 0x868
	float StabilityMulitplyByWall; // 0x870
	float StabilityMulitplyByHasPillarCeiling; // 0x874
	bool HasPillar; // 0x878
	float InnerSideDamageMultiplier; // 0x87c
	float StabilityMultiplyByPillar; // 0x880
	float StabilityMultiplyByCenterPillar; // 0x884
};

struct UMaterialExpressionStaticBoolParameter : UMaterialExpressionParameter {
	char DefaultValue : 1; // 0x58
};

struct UPoseWatch : UObject {
	UEdGraphNode* Node; // 0x28
	FColor PoseWatchColour; // 0x30
};

struct UMovieSceneMediaSection : UMovieSceneSection {
	UMediaSource* MediaSource; // 0xe8
	bool bLooping; // 0xf0
	FFrameNumber StartFrameOffset; // 0xf4
	UMediaTexture* MediaTexture; // 0xf8
	UMediaSoundComponent* MediaSoundComponent; // 0x100
	bool bUseExternalMediaPlayer; // 0x108
	UMediaPlayer* ExternalMediaPlayer; // 0x110
};

struct UInterpTrackAnimControl : UInterpTrackFloatBase {
	FName SlotName; // 0x90
	TArray<FAnimControlTrackKey> AnimSeqs; // 0x98
	char bSkipAnimNotifiers : 1; // 0xa8
};

struct UMovieSceneCameraShakeSourceTriggerTrack : UMovieSceneTrack {
	TArray<UMovieSceneSection*> Sections; // 0x80
};

struct ULandscapeComponent : UPrimitiveComponent {
	int32_t SectionBaseX; // 0x440
	int32_t SectionBaseY; // 0x444
	int32_t ComponentSizeQuads; // 0x448
	int32_t SubsectionSizeQuads; // 0x44c
	int32_t NumSubsections; // 0x450
	UMaterialInterface* OverrideMaterial; // 0x458
	UMaterialInterface* OverrideHoleMaterial; // 0x460
	TArray<FLandscapeComponentMaterialOverride> OverrideMaterials; // 0x468
	TArray<UMaterialInstanceConstant*> MaterialInstances; // 0x478
	TArray<UMaterialInstanceDynamic*> MaterialInstancesDynamic; // 0x488
	TArray<int8_t> LODIndexToMaterialIndex; // 0x498
	TArray<int8_t> MaterialIndexToDisabledTessellationMaterial; // 0x4a8
	UTexture2D* XYOffsetmapTexture; // 0x4b8
	FVector4 WeightmapScaleBias; // 0x4c0
	float WeightmapSubsectionOffset; // 0x4d0
	FVector4 HeightmapScaleBias; // 0x4e0
	FBox CachedLocalBox; // 0x4f0
	LazyObjectProperty CollisionComponent; // 0x50c
	UTexture2D* HeightmapTexture; // 0x528
	TArray<FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x530
	TArray<UTexture2D*> WeightmapTextures; // 0x540
	ULandscapeLODStreamingProxy* LODStreamingProxy; // 0x550
	FGuid MapBuildDataId; // 0x558
	TArray<FGuid> IrrelevantLights; // 0x568
	int32_t CollisionMipLevel; // 0x578
	int32_t SimpleCollisionMipLevel; // 0x57c
	float NegativeZBoundsExtension; // 0x580
	float PositiveZBoundsExtension; // 0x584
	float StaticLightingResolution; // 0x588
	int32_t ForcedLOD; // 0x58c
	int32_t LODBias; // 0x590
	FGuid StateId; // 0x594
	FGuid BakedTextureMaterialGuid; // 0x5a4
	UTexture2D* GIBakedBaseColorTexture; // 0x5b8
	char MobileBlendableLayerMask; // 0x5c0
	UMaterialInterface* MobileMaterialInterface; // 0x5c8
	TArray<UMaterialInterface*> MobileMaterialInterfaces; // 0x5d0
	TArray<UTexture2D*> MobileWeightmapTextures; // 0x5e0
};

struct ABP_WaterGenerator_C : ABP_FunctionalityBuildPartBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x890
	UBP_StorageInventoryComponent_C* WaterSupply; // 0x898
	UWaterStorageComponentBase* WaterStorageComponentBase; // 0x8a0
	FTimerHandle WorkingTimer; // 0x8a8
	float DefaultGenerateWaterPerSec; // 0x8b0
	float RainyGenerateWaterMultiply; // 0x8b4
	float InnerBoundaryReduceMultiply; // 0x8b8
	bool bHasWeatherProofComp; // 0x8bc
	float WeatherProofCheckInterval; // 0x8c0
	FTimerHandle WeatherProofCheckTimer; // 0x8c8
	float EnergyCostPerTime; // 0x8d0
	float WaterGenerateInterval; // 0x8d4
};

struct ANavigationObjectBase : AActor {
	UCapsuleComponent* CapsuleComponent; // 0x228
	UBillboardComponent* GoodSprite; // 0x230
	UBillboardComponent* BadSprite; // 0x238
	char bIsPIEPlayerStart : 1; // 0x240
};

struct UWBP_HUD_ActionMain_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_78; // 0x268
	UImage* Mode; // 0x270
	TMap<E_MechanicArmMode, FSlateBrush> Icon; // 0x278
};

struct UEditableMesh : UObject {
	TArray<UEditableMeshAdapter*> Adapters; // 0x3b8
	int32_t TextureCoordinateCount; // 0x3d0
	int32_t PendingCompactCounter; // 0x51c
	int32_t SubdivisionCount; // 0x520
};

struct UIFO_SG_Goofy_SK_Skeleton_AnimBlueprint_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x340
};

struct UBP_AbnormalStateComponent_C : UCustomReplicationActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb8
	TArray<float> AbnormalState; // 0xc0
	TMap<E_AbnormalStateType, UCurveFloat*> AbnormalLevelInfo; // 0xd0
	TMap<E_AbnormalStateType, float> RecoveryPerSec; // 0x120
	TArray<float> AccumulatedTime; // 0x170
	TMap<E_AbnormalStateType, FS_IntFloatMap> Interval; // 0x180
	TMap<E_AbnormalStateType, int32_t> LastSendLevel; // 0x1d0
};

struct UBTTask_RangeAttack_Juggernaut_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	float DelayTime; // 0xb0
	FBlackboardKeySelector IsRangeAttack; // 0xb8
	FBlackboardKeySelector TargetActor; // 0xe0
	FVector BackMoveLocation; // 0x108
	FBlackboardKeySelector Aggro; // 0x118
	FBlackboardKeySelector IsSelectAttackType; // 0x140
	FBlackboardKeySelector IsRangeAttackOther; // 0x168
	FBlackboardKeySelector IsMeleeAttack; // 0x190
	FBlackboardKeySelector IsWalkingAttack; // 0x1b8
	FBlackboardKeySelector IsExecutionAttack; // 0x1e0
};

struct UCloudWatchDeleteAnomalyDetector : UAwsCloudWatchAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UCanvasPanelSlot : UPanelSlot {
	FAnchorData LayoutData; // 0x38
	bool bAutoSize; // 0x60
	int32_t ZOrder; // 0x64
};

struct UWBP_Main_MachineArm_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_S_List; // 0x268
	UWidgetAnimation* Anim_M_List; // 0x270
	UHorizontalBox* HorizontalBox_332; // 0x278
	UImage* Image_106; // 0x280
	UVerticalBox* SubCategoryList; // 0x288
	UWBP_Main_MachineArmListing_L_C* WBP_Main_MachineArmListing_L; // 0x290
	UWBP_Main_MachineArmListing_M_C* WBP_Main_MachineArmListing_M; // 0x298
	UWBP_Main_MachineArmListing_S_C* WBP_Main_MachineArmListing_S; // 0x2a0
	UWBP_MainFrame_C* WBP_MainFrame; // 0x2a8
	UWBP_MainFrame_Header_C* WBP_MainFrame_Header; // 0x2b0
	UWrapBox* WrapBox_Large; // 0x2b8
	UWBP_Main_MachineArmListing_M_C* PrevSelectedSubCategory; // 0x2c0
	TMap<int32_t, UWBP_Main_MachineArmListing_L_C*> CategoryMap; // 0x2c8
	TMap<int32_t, UWBP_Main_MachineArmListing_M_C*> SubMap; // 0x318
};

struct UParticleModuleRotation : UParticleModuleRotationBase {
	FRawDistributionFloat StartRotation; // 0x30
};

struct UInterpTrack : UObject {
	TArray<UInterpTrack*> SubTracks; // 0x38
	UInterpTrackInst* TrackInstClass; // 0x48
	ETrackActiveCondition ActiveCondition; // 0x50
	FString TrackTitle; // 0x58
	char bOnePerGroup : 1; // 0x68
	char bDirGroupOnly : 1; // 0x68
	char bDisableTrack : 1; // 0x68
	char bIsSelected : 1; // 0x68
	char bIsAnimControlTrack : 1; // 0x68
	char bSubTrackOnly : 1; // 0x68
	char bVisible : 1; // 0x68
	char bIsRecording : 1; // 0x68
};

struct UMovieSceneMarginSection : UMovieSceneSection {
	FMovieSceneFloatChannel TopCurve; // 0xe8
	FMovieSceneFloatChannel LeftCurve; // 0x188
	FMovieSceneFloatChannel RightCurve; // 0x228
	FMovieSceneFloatChannel BottomCurve; // 0x2c8
};

struct UPhononGeometryComponent : USceneComponent {
	bool ExportAllChildren; // 0x1f8
	uint32_t NumVertices; // 0x1fc
	uint32_t NumTriangles; // 0x200
};

struct USQSCreateQueue : UAwsSQSAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UWBP_Radiogram_6010103_C : UWBP_radiogram_CustomBase_C {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x298
	UTextBlock* TextBlock; // 0x2a0
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x2a8
	UWBP_RadiogramListing_C* WBP_RadiogramListing_2; // 0x2b0
	UWBP_RadiogramListing_C* WBP_RadiogramListing_3; // 0x2b8
};

struct ABP_Cyclops_Type00_C : ACommonAI_BaseAICharacter_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xe28
	bool IsAlert; // 0xe30
};

struct UWBP_CraftingCostListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* Amount; // 0x268
	UWBP_Button_UI_C* ButtonTo; // 0x270
	UImage* Image_54; // 0x278
	UTextBlock* Name; // 0x280
	UWBP_Slot_Display_C* WBP_Slot_Display; // 0x288
	UBP_PlayerInventoryComponent_C* PlayerInv; // 0x290
	E_CraftingType CraftingCategoryType; // 0x298
	int32_t Item ID; // 0x29c
	int32_t AmountCount; // 0x2a0
	int32_t Product; // 0x2a4
};

struct USpotEventTypeData_SupplyDrop_C : USpotEventTypeData_Base_C {
	TArray<FItemCodeValue> RandItemGenerate; // 0xc8
	float LifetimeAfterDrop; // 0xd8
};

struct USupplyTurret_SK_Skeleton_AnimBlueprint_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x2c8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x3d0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x3f0
	FAnimNode_Root AnimGraphNode_Root; // 0x4f8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x528
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x570
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x5f0
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x620
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x6d0
	float Yaw; // 0x6f0
	float Pitch; // 0x6f4
	FRotator ActorRot; // 0x6f8
	ABP_TurretBase_C* Turret; // 0x708
	bool IsFolded; // 0x710
};

struct UVehicleWheel : UObject {
	UStaticMesh* CollisionMesh; // 0x28
	bool bDontCreateShape; // 0x30
	bool bAutoAdjustCollisionSize; // 0x31
	FVector Offset; // 0x34
	float ShapeRadius; // 0x40
	float ShapeWidth; // 0x44
	float Mass; // 0x48
	float DampingRate; // 0x4c
	float SteerAngle; // 0x50
	bool bAffectedByHandbrake; // 0x54
	UTireType* TireType; // 0x58
	UTireConfig* TireConfig; // 0x60
	float LatStiffMaxLoad; // 0x68
	float LatStiffValue; // 0x6c
	float LongStiffValue; // 0x70
	float SuspensionForceOffset; // 0x74
	float SuspensionMaxRaise; // 0x78
	float SuspensionMaxDrop; // 0x7c
	float SuspensionNaturalFrequency; // 0x80
	float SuspensionDampingRatio; // 0x84
	EWheelSweepType SweepType; // 0x88
	float MaxBrakeTorque; // 0x8c
	float MaxHandBrakeTorque; // 0x90
	UWheeledVehicleMovementComponent* VehicleSim; // 0x98
	int32_t WheelIndex; // 0xa0
	float DebugLongSlip; // 0xa4
	float DebugLatSlip; // 0xa8
	float DebugNormalizedTireLoad; // 0xac
	float DebugWheelTorque; // 0xb4
	float DebugLongForce; // 0xb8
	float DebugLatForce; // 0xbc
	FVector Location; // 0xc0
	FVector OldLocation; // 0xcc
	FVector Velocity; // 0xd8
};

struct UAISenseEvent_Hearing : UAISenseEvent {
	FAINoiseEvent Event; // 0x28
};

struct ABP_ThrownFragGrenade_C : ABP_ThrownGrenade_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3c8
	float BombDamage; // 0x3d0
	float BombMinimalDamage; // 0x3d4
	float InnerRadius; // 0x3d8
	float OuterRadius; // 0x3dc
};

struct UARSessionConfig : UDataAsset {
	bool bGenerateMeshDataFromTrackedGeometry; // 0x30
	bool bGenerateCollisionForMeshData; // 0x31
	bool bGenerateNavMeshForMeshData; // 0x32
	bool bUseMeshDataForOcclusion; // 0x33
	bool bRenderMeshDataInWireframe; // 0x34
	bool bTrackSceneObjects; // 0x35
	bool bUsePersonSegmentationForOcclusion; // 0x36
	bool bUseSceneDepthForOcclusion; // 0x37
	bool bUseAutomaticImageScaleEstimation; // 0x38
	bool bUseStandardOnboardingUX; // 0x39
	EARWorldAlignment WorldAlignment; // 0x3a
	EARSessionType SessionType; // 0x3b
	EARPlaneDetectionMode PlaneDetectionMode; // 0x3c
	bool bHorizontalPlaneDetection; // 0x3d
	bool bVerticalPlaneDetection; // 0x3e
	bool bEnableAutoFocus; // 0x3f
	EARLightEstimationMode LightEstimationMode; // 0x40
	EARFrameSyncMode FrameSyncMode; // 0x41
	bool bEnableAutomaticCameraOverlay; // 0x42
	bool bEnableAutomaticCameraTracking; // 0x43
	bool bResetCameraTracking; // 0x44
	bool bResetTrackedObjects; // 0x45
	TArray<UARCandidateImage*> CandidateImages; // 0x48
	int32_t MaxNumSimultaneousImagesTracked; // 0x58
	EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType; // 0x5c
	TArray<char> WorldMapData; // 0x60
	TArray<UARCandidateObject*> CandidateObjects; // 0x70
	FARVideoFormat DesiredVideoFormat; // 0x80
	bool bUseOptimalVideoFormat; // 0x8c
	EARFaceTrackingDirection FaceTrackingDirection; // 0x8d
	EARFaceTrackingUpdate FaceTrackingUpdate; // 0x8e
	int32_t MaxNumberOfTrackedFaces; // 0x90
	TArray<char> SerializedARCandidateImageDatabase; // 0x98
	EARSessionTrackingFeature EnabledSessionTrackingFeature; // 0xa8
	EARSceneReconstruction SceneReconstructionMethod; // 0xa9
	UARPlaneComponent* PlaneComponentClass; // 0xb0
	UARPointComponent* PointComponentClass; // 0xb8
	UARFaceComponent* FaceComponentClass; // 0xc0
	UARImageComponent* ImageComponentClass; // 0xc8
	UARQRCodeComponent* QRCodeComponentClass; // 0xd0
	UARPoseComponent* PoseComponentClass; // 0xd8
	UAREnvironmentProbeComponent* EnvironmentProbeComponentClass; // 0xe0
	UARObjectComponent* ObjectComponentClass; // 0xe8
	UARMeshComponent* MeshComponentClass; // 0xf0
	UARGeoAnchorComponent* GeoAnchorComponentClass; // 0xf8
	UMaterialInterface* DefaultMeshMaterial; // 0x100
	UMaterialInterface* DefaultWireframeMeshMaterial; // 0x108
};

struct UARImageComponent : UARComponent {
	FARImageUpdatePayload ReplicatedPayload; // 0x280
};

struct UMovieSceneCameraAnimSection : UMovieSceneSection {
	FMovieSceneCameraAnimSectionData AnimData; // 0xe8
	UCameraAnim* CameraAnim; // 0x108
	float PlayRate; // 0x110
	float PlayScale; // 0x114
	float BlendInTime; // 0x118
	float BlendOutTime; // 0x11c
	bool bLooping; // 0x120
};

struct UMutableMaskOutCache : UObject {
	TMap<FString, FString> Materials; // 0x28
	TMap<FString, FMaskOutTexture> Textures; // 0x78
};

struct UGizmoRectangleComponent : UGizmoBaseComponent {
	FVector DirectionX; // 0x460
	FVector DirectionY; // 0x46c
	float OffsetX; // 0x478
	float OffsetY; // 0x47c
	float LengthX; // 0x480
	float LengthY; // 0x484
	float Thickness; // 0x488
	char SegmentFlags; // 0x48c
};

struct UAvfMediaSettings : UObject {
	bool NativeAudioOut; // 0x28
};

struct UNavigationQueryFilter : UObject {
	TArray<FNavigationFilterArea> Areas; // 0x28
	FNavigationFilterFlags IncludeFlags; // 0x38
	FNavigationFilterFlags ExcludeFlags; // 0x3c
};

struct UAxisPositionGizmo : UInteractiveGizmo {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48
	TScriptInterface<IGizmoFloatParameterSource> ParameterSource; // 0x58
	TScriptInterface<IGizmoClickTarget> HitTarget; // 0x68
	TScriptInterface<IGizmoStateTarget> StateTarget; // 0x78
	bool bEnableSignedAxis; // 0x88
	bool bInInteraction; // 0x89
	FVector InteractionOrigin; // 0x8c
	FVector InteractionAxis; // 0x98
	FVector InteractionStartPoint; // 0xa4
	FVector InteractionCurPoint; // 0xb0
	float InteractionStartParameter; // 0xbc
	float InteractionCurParameter; // 0xc0
	float ParameterSign; // 0xc4
};

struct UDatasmithCineCameraComponentTemplate : UDatasmithObjectTemplate {
	FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings; // 0x30
	FDatasmithCameraLensSettingsTemplate LensSettings; // 0x38
	FDatasmithCameraFocusSettingsTemplate FocusSettings; // 0x3c
	float CurrentFocalLength; // 0x44
	float CurrentAperture; // 0x48
	FDatasmithPostProcessSettingsTemplate PostProcessSettings; // 0x50
};

struct UMovieSceneCameraShakeSection : UMovieSceneSection {
	FMovieSceneCameraShakeSectionData ShakeData; // 0xe8
	UMatineeCameraShake* ShakeClass; // 0x108
	float PlayScale; // 0x110
	ECameraShakePlaySpace PlaySpace; // 0x114
	FRotator UserDefinedPlaySpace; // 0x118
};

struct USQSGetQueueAttributes : UAwsSQSAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UARTrackedGeometry : UObject {
	FGuid UniqueId; // 0x28
	FTransform LocalToTrackingTransform; // 0x40
	FTransform LocalToAlignedTrackingTransform; // 0x70
	EARTrackingState TrackingState; // 0xa0
	UMRMeshComponent* UnderlyingMesh; // 0xb0
	EARObjectClassification ObjectClassification; // 0xb8
	int32_t LastUpdateFrameNumber; // 0xd0
	FName DebugName; // 0xe0
};

struct UParticleModuleAttractorLine : UParticleModuleAttractorBase {
	FVector EndPoint0; // 0x30
	FVector EndPoint1; // 0x3c
	FRawDistributionFloat Range; // 0x48
	FRawDistributionFloat Strength; // 0x78
};

struct AAkReverbVolume : AVolume {
	char bEnabled : 1; // 0x258
	UAkAuxBus* AuxBus; // 0x260
	FString AuxBusName; // 0x268
	float SendLevel; // 0x278
	float FadeRate; // 0x27c
	float Priority; // 0x280
	UAkLateReverbComponent* LateReverbComponent; // 0x288
};

struct UAkCallbackInfo : UObject {
	UAkComponent* AkComponent; // 0x28
};

struct UBaseMediaSource : UMediaSource {
	FName PlayerName; // 0x80
};

struct UParticleModuleEventReceiverSpawn : UParticleModuleEventReceiverBase {
	FRawDistributionFloat SpawnCount; // 0x40
	char bUseParticleTime : 1; // 0x70
	char bUsePSysLocation : 1; // 0x70
	char bInheritVelocity : 1; // 0x70
	FRawDistributionVector InheritVelocityScale; // 0x78
	TArray<UPhysicalMaterial*> PhysicalMaterials; // 0xc0
	char bBanPhysicalMaterials : 1; // 0xd0
};

struct UMovieSceneCameraShakeSourceShakeSection : UMovieSceneSection {
	FMovieSceneCameraShakeSectionData ShakeData; // 0xe8
};

struct ABP_NPCSpawnLooper_C : ABP_NPCSpawnerBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x398
	TMap<FName, int32_t> CurrentSpawnInfo; // 0x3a0
	int32_t CurrentNPCTypeIndex; // 0x3f0
	TArray<FName> CurrentSpawnUIDs; // 0x3f8
	int32_t RemainSpawnNPCs; // 0x408
	float SpawnTime; // 0x40c
	bool ActiveKeepSpawn; // 0x410
	float RespawnTime; // 0x414
	bool SpawnByDead; // 0x418
	TArray<int32_t> RespawnUIDs; // 0x420
	FTimerHandle RespawnByDeadHandler; // 0x430
	TArray<float> SpawnTimeByDead; // 0x438
	FFloatValueFromDataTable NPCCountMultiply; // 0x448
};

struct UDeviceProfile : UTextureLODSettings {
	FString DeviceType; // 0x38
	FString BaseProfileName; // 0x48
	UObject* Parent; // 0x58
	TArray<FString> CVars; // 0x88
};

struct UToFloatField : UFieldNodeFloat {
	UFieldNodeInt* IntField; // 0xb0
};

struct UWBP_WorldMap_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border; // 0x268
	UCanvasPanel* Canvas_Respawn; // 0x270
	UGamepadCursor_C* GamepadCursor; // 0x278
	UWBP_MapMarker_DeadPlayer_C* Marker_DeadPlayer; // 0x280
	UOverlay* Overlay_DeadMarker; // 0x288
	UOverlay* Overlay_Landmark; // 0x290
	UOverlay* Overlay_Team; // 0x298
	UWBP_MapMarker_Player_C* PlayerMarker; // 0x2a0
	UOverlay* Scale; // 0x2a8
	UOverlay* Translation; // 0x2b0
	UWBP_MapMarker_Waypoint_C* WaypointMarker; // 0x2b8
	UWorldMap_Image_C* WorldMap_Image; // 0x2c0
	UOverlay* WorldMarkers; // 0x2c8
	FVector2D ClampedPosition; // 0x2d0
	float LerpSpeed; // 0x2d8
	float NewZoom; // 0x2dc
	FTimerHandle TimerChangeZoomHandler; // 0x2e0
	FVector2D TempPivot; // 0x2e8
	FVector2D NewPivot; // 0x2f0
	TArray<UWBP_MapMarker_EventPoint_C*> SpotEvents; // 0x2f8
	TArray<UWBP_MapMarker_RespawnPoint_C*> RespawnPoint; // 0x308
	TArray<UWBP_MapMarker_LandmarkEffect_C*> LandmarkEffects; // 0x318
	TArray<UWBP_MapMarker_LandmarkEffectCauser_C*> LandmarkEffectCausers; // 0x328
	float Lerp; // 0x338
	FVector2D Scaled; // 0x33c
	bool IsRespawnMap; // 0x344
	bool bScaleChanging; // 0x345
	bool bPivotChanging; // 0x346
	bool bDrag; // 0x347
};

struct ULevelVariantSets : UObject {
	UObject* DirectorClass; // 0x28
	TArray<UVariantSet*> VariantSets; // 0x30
};

struct UDecalComponent : USceneComponent {
	UMaterialInterface* DecalMaterial; // 0x1f8
	int32_t sortOrder; // 0x200
	float FadeScreenSize; // 0x204
	float FadeStartDelay; // 0x208
	float FadeDuration; // 0x20c
	float FadeInDuration; // 0x210
	float FadeInStartDelay; // 0x214
	char bDestroyOwnerAfterFade : 1; // 0x218
	FVector DecalSize; // 0x21c
};

struct UVRNotificationsComponent : UActorComponent {
	FMulticastInlineDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0xb0
	FMulticastInlineDelegate HMDTrackingInitializedDelegate; // 0xc0
	FMulticastInlineDelegate HMDRecenteredDelegate; // 0xd0
	FMulticastInlineDelegate HMDLostDelegate; // 0xe0
	FMulticastInlineDelegate HMDReconnectedDelegate; // 0xf0
	FMulticastInlineDelegate HMDConnectCanceledDelegate; // 0x100
	FMulticastInlineDelegate HMDPutOnHeadDelegate; // 0x110
	FMulticastInlineDelegate HMDRemovedFromHeadDelegate; // 0x120
	FMulticastInlineDelegate VRControllerRecenteredDelegate; // 0x130
};

struct UBTTask_MoveToLocation_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	FBlackboardKeySelector KEYTargetActorOrLocation; // 0xb0
	float LimitTime; // 0xd8
};

struct UNavAreaMeta_SwitchByAgent : UNavAreaMeta {
	UNavArea* Agent0Area; // 0x48
	UNavArea* Agent1Area; // 0x50
	UNavArea* Agent2Area; // 0x58
	UNavArea* Agent3Area; // 0x60
	UNavArea* Agent4Area; // 0x68
	UNavArea* Agent5Area; // 0x70
	UNavArea* Agent6Area; // 0x78
	UNavArea* Agent7Area; // 0x80
	UNavArea* Agent8Area; // 0x88
	UNavArea* Agent9Area; // 0x90
	UNavArea* Agent10Area; // 0x98
	UNavArea* Agent11Area; // 0xa0
	UNavArea* Agent12Area; // 0xa8
	UNavArea* Agent13Area; // 0xb0
	UNavArea* Agent14Area; // 0xb8
	UNavArea* Agent15Area; // 0xc0
};

struct UNetDriver : UObject {
	FString NetConnectionClassName; // 0x30
	FString ReplicationDriverClassName; // 0x40
	int32_t MaxDownloadSize; // 0x50
	char bClampListenServerTickRate : 1; // 0x54
	int32_t NetServerMaxTickRate; // 0x58
	int32_t MaxNetTickRate; // 0x5c
	int32_t MaxInternetClientRate; // 0x60
	int32_t MaxClientRate; // 0x64
	float ServerTravelPause; // 0x68
	float SpawnPrioritySeconds; // 0x6c
	float RelevantTimeout; // 0x70
	float KeepAliveTime; // 0x74
	float InitialConnectTimeout; // 0x78
	float ConnectionTimeout; // 0x7c
	float TimeoutMultiplierForUnoptimizedBuilds; // 0x80
	bool bNoTimeouts; // 0x84
	bool bNeverApplyNetworkEmulationSettings; // 0x85
	UNetConnection* ServerConnection; // 0x88
	TArray<UNetConnection*> ClientConnections; // 0x90
	int32_t RecentlyDisconnectedTrackingTime; // 0x100
	UWorld* World; // 0x140
	UPackage* WorldPackage; // 0x148
	UObject* NetConnectionClass; // 0x170
	UObject* ReplicationDriverClass; // 0x178
	FName NetDriverName; // 0x190
	TArray<FChannelDefinition> ChannelDefinitions; // 0x198
	TMap<FName, FChannelDefinition> ChannelDefinitionMap; // 0x1a8
	TArray<UChannel*> ActorChannelPool; // 0x1f8
	float Time; // 0x238
	UReplicationDriver* ReplicationDriver; // 0x710
};

struct UMaterialExpressionInverseLinearInterpolate : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	FExpressionInput Value; // 0x68
	float ConstA; // 0x7c
	float ConstB; // 0x80
	float ConstValue; // 0x84
	bool bClampResult; // 0x88
};

struct UStereoLayerShapeCylinder : UStereoLayerShape {
	float Radius; // 0x28
	float OverlayArc; // 0x2c
	int32_t Height; // 0x30
};

struct UCustomizableObjectSystem : UObject {
	TArray<FPendingReleaseSkeletalMeshInfo> PendingReleaseSkeletalMesh; // 0x28
	UCustomizableObjectImageProviderArray* PreviewExternalImageProvider; // 0x38
	TArray<UTexture2D*> ProtectedCachedTextures; // 0x140
	UCustomizableInstanceLODManagementBase* DefaultInstanceLODManagement; // 0x160
	UCustomizableInstanceLODManagementBase* CurrentInstanceLODManagement; // 0x168
};

struct UAnimNotify_SpawnAKForRangeWeapon_C : UAnimNotify {
	FName BoneName; // 0x38
	bool NeedAttached; // 0x40
	UAkAudioEvent* AKEventType; // 0x48
	UAkSwitchValue* SoundType; // 0x50
};

struct UWBP_Key_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Img; // 0x268
	USizeBox* SizeBox_2; // 0x270
	UTextBlock* Text_Hold; // 0x278
	UTextBlock* Text_Key; // 0x280
	UWidgetSwitcher* WidgetSwitcher_1; // 0x288
	FString Key; // 0x290
	EnumKeyInputType KeyInputType; // 0x2a0
	bool SkipButtonBind; // 0x2a1
	bool bHold; // 0x2a2
};

struct UAIPerceptionStimuliSourceComponent : UActorComponent {
	char bAutoRegisterAsSource : 1; // 0xb0
	TArray<UAISense*> RegisterAsSourceForSenses; // 0xb8
};

struct ABP_BuildingBlockZone_C : AActor {
	UBoxComponent* Building Block Zone; // 0x220
	USceneComponent* DefaultSceneRoot; // 0x228
};

struct UMaterialExpressionArcsineFast : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UPhysicsThrusterComponent : USceneComponent {
	float ThrustStrength; // 0x1f8
};

struct ULoginUserCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct AWorldLocation_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	USphereComponent* AreaSphere; // 0x228
	UBoxComponent* AreaCube; // 0x230
	USceneComponent* DefaultSceneRoot; // 0x238
	FText LocationName; // 0x240
	bool UseCubeCollision; // 0x258
	float TriggerSize; // 0x25c
	bool IsDiscovered; // 0x260
	AQuestMapController_C* Controller; // 0x268
	UTexture2D* Icon; // 0x270
	FLinearColor UndiscoveredTint; // 0x278
	FLinearColor DiscoveredTint; // 0x288
	bool HasLocalMap; // 0x298
	UTexture2D* LocalMap; // 0x2a0
	bool TravelAllowedFrom; // 0x2a8
	bool TravelAllowedTo; // 0x2a9
	bool Display; // 0x2aa
	ATravelPoint_C* TravelPoint; // 0x2b0
	APawn* Pawn; // 0x2b8
	UC_Manager-LocalMap_C* LocalMapManager; // 0x2c0
	UC_Manager-WorldMap_C* WorldMapManager; // 0x2c8
};

struct ABP_ElectricFenceGate_C : ABP_FunctionalityBuildPartBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x890
	UBP_BuildJointComponent_C* BP_BuildJointComponent; // 0x898
	UBP_BuildJointComponent_C* BP_BuildJointComponent1; // 0x8a0
	USkeletalMeshComponent* SkeletalMesh; // 0x8a8
};

struct UEditableGeometryCollectionAdapter : UEditableMeshAdapter {
	UGeometryCollection* GeometryCollection; // 0x28
	UGeometryCollection* OriginalGeometryCollection; // 0x30
	int32_t GeometryCollectionLODIndex; // 0x38
};

struct UParticleModuleAccelerationDrag : UParticleModuleAccelerationBase {
	UDistributionFloat* DragCoefficient; // 0x38
	FRawDistributionFloat DragCoefficientRaw; // 0x40
};

struct UNavigationPath : UObject {
	FMulticastInlineDelegate PathUpdatedNotifier; // 0x28
	TArray<FVector> PathPoints; // 0x38
	ENavigationOptionFlag RecalculateOnInvalidation; // 0x48
};

struct UNiagaraSettings : UDeveloperSettings {
	FSoftObjectPath DefaultEffectType; // 0x38
	TArray<FText> QualityLevels; // 0x50
	TMap<FString, FText> ComponentRendererWarningsPerClass; // 0x60
	ETextureRenderTargetFormat DefaultRenderTargetFormat; // 0xb0
	ENiagaraGpuBufferFormat DefaultGridFormat; // 0xb1
	UNiagaraEffectType* DefaultEffectTypePtr; // 0xb8
};

struct UAkAssetDataSwitchContainerData : UObject {
	TSoftObjectPtr<UAkGroupValue> GroupValue; // 0x28
	UAkGroupValue* DefaultGroupValue; // 0x50
	TArray<UAkMediaAsset*> MediaList; // 0x58
	TArray<UAkAssetDataSwitchContainerData*> Children; // 0x68
};

struct URichTextBlock : UTextLayoutWidget {
	FText Text; // 0x128
	UDataTable* TextStyleSet; // 0x140
	TArray<URichTextBlockDecorator*> DecoratorClasses; // 0x148
	bool bOverrideDefaultStyle; // 0x158
	FTextBlockStyle DefaultTextStyleOverride; // 0x160
	float MinDesiredWidth; // 0x3d0
	ETextTransformPolicy TextTransformPolicy; // 0x3d4
	FTextBlockStyle DefaultTextStyle; // 0x3d8
	TArray<URichTextBlockDecorator*> InstanceDecorators; // 0x648
};

struct UWBP_Radiogram_Crafting_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UVerticalBox* list; // 0x268
	TArray<FS_CraftingRecipeData> Crafting Recipe Data; // 0x270
	UWBP_Main_Radiogram_C* Radiogram Main; // 0x280
	int32_t UID; // 0x288
};

struct UPaperSpriteComponent : UMeshComponent {
	UPaperSprite* SourceSprite; // 0x468
	UMaterialInterface* MaterialOverride; // 0x470
	FLinearColor SpriteColor; // 0x478
};

struct UNiagaraScript : UNiagaraScriptBase {
	ENiagaraScriptUsage Usage; // 0x28
	int32_t UsageIndex; // 0x2c
	FGuid UsageId; // 0x30
	FNiagaraParameterStore RapidIterationParameters; // 0x40
	FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore; // 0xb8
	TArray<FNiagaraBoundParameter> ScriptExecutionBoundParameters; // 0x150
	FNiagaraVMExecutableDataId CachedScriptVMId; // 0x160
	FNiagaraVMExecutableData CachedScriptVM; // 0x1b8
	TArray<UNiagaraParameterCollection*> CachedParameterCollectionReferences; // 0x298
	TArray<FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces; // 0x2a8
};

struct UCloudWatchLogsDescribeLogStreams : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct ABP_OccupyZone_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UBillboardComponent* Billboard; // 0x228
	USceneComponent* Scene; // 0x230
	float CurrentOccupyPercent; // 0x238
	float ServerOccupyPercent; // 0x23c
	ABP_LandmarkZone_C* LandmarkRef; // 0x240
	TArray<BP_SurvivalCharacter_C*> OccupyPlayers; // 0x248
	bool IsIn; // 0x258
	float OccupyRate; // 0x25c
	float DecreaseOccupyRate; // 0x260
	bool Conflict; // 0x264
	bool IsStartOccupy; // 0x265
};

struct ULocationInfo_Gamepad_C : UUserWidget {
	ULocationInfo_C* LocationInfo; // 0x260
};

struct UNiagaraDataInterfaceChaosDestruction : UNiagaraDataInterface {
	TSet<AChaosSolverActor*> ChaosSolverActorSet; // 0x38
	EDataSourceTypeEnum DataSourceType; // 0x88
	int32_t DataProcessFrequency; // 0x8c
	int32_t MaxNumberOfDataEntriesToSpawn; // 0x90
	bool DoSpawn; // 0x94
	FVector2D SpawnMultiplierMinMax; // 0x98
	float SpawnChance; // 0xa0
	FVector2D ImpulseToSpawnMinMax; // 0xa4
	FVector2D SpeedToSpawnMinMax; // 0xac
	FVector2D MassToSpawnMinMax; // 0xb4
	FVector2D ExtentMinToSpawnMinMax; // 0xbc
	FVector2D ExtentMaxToSpawnMinMax; // 0xc4
	FVector2D VolumeToSpawnMinMax; // 0xcc
	FVector2D SolverTimeToSpawnMinMax; // 0xd4
	int32_t SurfaceTypeToSpawn; // 0xdc
	ELocationFilteringModeEnum LocationFilteringMode; // 0xe0
	ELocationXToSpawnEnum LocationXToSpawn; // 0xe1
	FVector2D LocationXToSpawnMinMax; // 0xe4
	ELocationYToSpawnEnum LocationYToSpawn; // 0xec
	FVector2D LocationYToSpawnMinMax; // 0xf0
	ELocationZToSpawnEnum LocationZToSpawn; // 0xf8
	FVector2D LocationZToSpawnMinMax; // 0xfc
	EDataSortTypeEnum DataSortingType; // 0x104
	bool bGetExternalCollisionData; // 0x105
	bool DoSpatialHash; // 0x106
	FVector SpatialHashVolumeMin; // 0x108
	FVector SpatialHashVolumeMax; // 0x114
	FVector SpatialHashVolumeCellSize; // 0x120
	int32_t MaxDataPerCell; // 0x12c
	bool bApplyMaterialsFilter; // 0x130
	TSet<UPhysicalMaterial*> ChaosBreakingMaterialSet; // 0x138
	bool bGetExternalBreakingData; // 0x188
	bool bGetExternalTrailingData; // 0x189
	FVector2D RandomPositionMagnitudeMinMax; // 0x18c
	float InheritedVelocityMultiplier; // 0x194
	ERandomVelocityGenerationTypeEnum RandomVelocityGenerationType; // 0x198
	FVector2D RandomVelocityMagnitudeMinMax; // 0x19c
	float SpreadAngleMax; // 0x1a4
	FVector VelocityOffsetMin; // 0x1a8
	FVector VelocityOffsetMax; // 0x1b4
	FVector2D FinalVelocityMagnitudeMinMax; // 0x1c0
	float MaxLatency; // 0x1c8
	EDebugTypeEnum DebugType; // 0x1cc
	int32_t LastSpawnedPointID; // 0x1d0
	float LastSpawnTime; // 0x1d4
	float SolverTime; // 0x1e8
	float TimeStampOfLastProcessedData; // 0x1ec
};

struct UMaterialExpressionLightmassReplace : UMaterialExpression {
	FExpressionInput RealTime; // 0x40
	FExpressionInput Lightmass; // 0x54
};

struct UMachineArmAbilityBase : UObject {
	FText Description; // 0x28
};

struct UWBP_Main_Crafting_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Listing; // 0x268
	UBorder* Border_1; // 0x270
	UButton* Button_111; // 0x278
	UScrollBox* CraftingScrollList; // 0x280
	UEditableTextBox* EditableTextBox_Search; // 0x288
	UUniformGridPanel* UniformGridPanel_1; // 0x290
	UWBP_Button_UI_C* WBP_Button_All; // 0x298
	UWBP_Button_UI_C* WBP_Button_Ammunition; // 0x2a0
	UWBP_Button_UI_C* WBP_Button_Consumable; // 0x2a8
	UWBP_Button_UI_C* WBP_Button_Equipment; // 0x2b0
	UWBP_Button_UI_C* WBP_Button_Installation; // 0x2b8
	UWBP_Button_UI_C* WBP_Button_Memorycard; // 0x2c0
	UWBP_Button_UI_C* WBP_Button_Resource; // 0x2c8
	UWBP_Button_UI_C* WBP_Button_Weapon; // 0x2d0
	UWBP_MainFrame_Toolbar_C* WBP_MainFrame_Toolbar; // 0x2d8
	UWBP_Toolbar_Dropdown_C* WBP_Toolbar_Dropdown; // 0x2e0
	bool DragEnabled; // 0x2e8
	bool IsMouseButtonDown; // 0x2e9
	FVector2D LastMousePosition; // 0x2ec
	bool IsDrag; // 0x2f4
	UCanvasPanelSlot* ParentSlot; // 0x2f8
	float SafetyZoneX; // 0x300
	float SafetyZoneY; // 0x304
	int32_t Colums; // 0x308
	bool List View; // 0x30c
	E_CraftingCatergoryType Category Fillter; // 0x30d
	UBP_PlayerInventoryComponent_C* Inventory Component; // 0x310
	TArray<UWBP_Slot_Inventory_C*> Inventory Slots; // 0x318
	int32_t Horizontal; // 0x328
	FVector2D Inventory Slots Size; // 0x32c
	bool Inventory; // 0x334
	bool Crafting; // 0x335
	TArray<int32_t> AvailableRecipes; // 0x338
	UBP_CraftingComponent_C* TargetCraftingComponent; // 0x348
	bool bDropdown; // 0x350
};

struct UMaterialExpressionArccosineFast : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UWBP_RadiogramImage_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWBP_Button_UI_C* ButtonTo; // 0x268
	UImage* Image_124; // 0x270
	FSlateBrush Custom Image; // 0x278
	int32_t UID; // 0x300
	bool Custom Size; // 0x304
	FText HoverText; // 0x308
	E_RadiogramDetailType RadiogramRefrenceType; // 0x320
};

struct UCloudWatchPutMetricData : UAwsCloudWatchAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UInterpTrackInstMove : UInterpTrackInst {
	FVector ResetLocation; // 0x28
	FRotator ResetRotation; // 0x34
};

struct USurvivalGameViewportClient : URMGameViewportClient {
	FSoftObjectPath AkMasterVolumeRTPCName; // 0x380
	UAkRtpc* AkMasterVolumeRTPC; // 0x398
};

struct UMaterialExpressionRotator : UMaterialExpression {
	FExpressionInput Coordinate; // 0x40
	FExpressionInput Time; // 0x54
	float CenterX; // 0x68
	float CenterY; // 0x6c
	float Speed; // 0x70
	uint32_t ConstCoordinate; // 0x74
};

struct UFAI_BTTask_SetFlyLocationByAttackRange_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	FBlackboardKeySelector KEYTargetActor; // 0xb0
	FBlackboardKeySelector KEYTargetLocation; // 0xd8
	AAIController* OwnerController; // 0x100
	APawn* ControlledPawn; // 0x108
	float MaxRange; // 0x110
	float MinRange; // 0x114
};

struct UMovieScene2DTransformSection : UMovieSceneSection {
	FMovieScene2DTransformMask TransformMask; // 0xf0
	FMovieSceneFloatChannel Translation[0x2]; // 0xf8
	FMovieSceneFloatChannel Rotation; // 0x238
	FMovieSceneFloatChannel Scale[0x2]; // 0x2d8
	FMovieSceneFloatChannel Shear[0x2]; // 0x418
};

struct UBTTask_FocusRandomLocationNearMe_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
};

struct UTexture2DArray : UTexture {
	TextureAddress AddressX; // 0x130
	TextureAddress AddressY; // 0x131
	TextureAddress AddressZ; // 0x132
};

struct UVectorFieldStatic : UVectorField {
	int32_t SizeX; // 0x48
	int32_t SizeY; // 0x4c
	int32_t SizeZ; // 0x50
	bool bAllowCPUAccess; // 0x54
};

struct UNavigationDataChunk : UObject {
	FName NavigationDataName; // 0x28
};

struct UDatasmithLightComponentTemplate : UDatasmithObjectTemplate {
	char bVisible : 1; // 0x30
	char CastShadows : 1; // 0x34
	char bUseTemperature : 1; // 0x34
	char bUseIESBrightness : 1; // 0x34
	float Intensity; // 0x38
	float Temperature; // 0x3c
	float IESBrightnessScale; // 0x40
	FLinearColor LightColor; // 0x44
	UMaterialInterface* LightFunctionMaterial; // 0x58
	UTextureLightProfile* IESTexture; // 0x60
};

struct USteamRequestGroupOfficersCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UMovieSceneObjectPropertyTrack : UMovieScenePropertyTrack {
	UObject* PropertyClass; // 0xb0
};

struct ACameraActor : AActor {
	EAutoReceiveInput AutoActivateForPlayer; // 0x220
	UCameraComponent* CameraComponent; // 0x228
	USceneComponent* SceneComponent; // 0x230
	char bConstrainAspectRatio : 1; // 0x240
	float AspectRatio; // 0x244
	float FOVAngle; // 0x248
	float PostProcessBlendWeight; // 0x24c
	FPostProcessSettings PostProcessSettings; // 0x250
};

struct UARBasicLightEstimate : UARLightEstimate {
	float AmbientIntensityLumens; // 0x28
	float AmbientColorTemperatureKelvin; // 0x2c
	FLinearColor AmbientColor; // 0x30
};

struct UWBP_Main_Crafting_InfoV2_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_1; // 0x268
	UButton* Button_Craft; // 0x270
	UButton* Button_Dec1; // 0x278
	UButton* Button_Dec10; // 0x280
	UButton* Button_Inc1; // 0x288
	UButton* Button_Inc10; // 0x290
	UButton* Button_Max; // 0x298
	UEditableTextBox* EditableTextBoxAmount; // 0x2a0
	UImage* Image_334; // 0x2a8
	UImage* Image_704; // 0x2b0
	UImage* Image_Craftable; // 0x2b8
	UImage* Image_Icon; // 0x2c0
	UVerticalBox* Panel_CommonStats; // 0x2c8
	URichTextBlock* RichTextBlock_67; // 0x2d0
	UTextBlock* Text_Name; // 0x2d8
	UTextBlock* TimeCost; // 0x2e0
	UWBP_MainFrame_C* WBP_MainFrame; // 0x2e8
	UWBP_MainFrame_C* WBP_MainFrame_2; // 0x2f0
	UWrapBox* WrapBox_Requirement; // 0x2f8
	UBP_PlayerInventoryComponent_C* TargetPlayerInventoryComponent; // 0x300
	UBP_CraftingComponent_C* TargetCraftingComponent; // 0x308
	UWBP_CraftingV2_C* MainWidget; // 0x310
	int32_t CraftingCount; // 0x318
	FS_CraftingRecipeData CurrentSelectRecipe; // 0x320
	FItemInventory Item; // 0x360
	FText Amount; // 0x398
};

struct UOnlineBeaconSubsystem : UWorldSubsystem {
	TMap<AOnlineBeaconClient*, AOnlineBeaconHostObjectDynamic*> HostingBeacons; // 0x30
	AOnlineBeaconHost* HostBeacon; // 0x80
};

struct URMHttpRequest_Get_Op_Info : URMHttpRequestBase {
	FMulticastInlineDelegate OnSuccess; // 0x48
	FMulticastInlineDelegate OnFailure; // 0x58
};

struct UBP_SkillAcitvationConditionBase_C : UObject {
	FS_ConditionParam Param; // 0x28
};

struct UBST_Stealth_C : UBP_SkillActionTaskBase_C {
	FTimerHandle EndedTimer; // 0xc8
};

struct UModularSynthPresetBank : UObject {
	TArray<FModularSynthPresetBankEntry> Presets; // 0x28
};

struct UTF-RIFLE_Anim_BP_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x340
};

struct ABP_BigStorageBox_C : ABP_MasterStorage_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3c8
};

struct UMaterialExpressionTextureSampleParameterSubUV : UMaterialExpressionTextureSampleParameter2D {
	char bBlend : 1; // 0x80
};

struct UPlatformInterfaceWebResponse : UObject {
	FString OriginalURL; // 0x28
	int32_t ResponseCode; // 0x38
	int32_t Tag; // 0x3c
	FString StringResponse; // 0x40
	TArray<char> BinaryResponse; // 0x50
};

struct UPawnAction_Wait : UPawnAction {
	float TimeToWait; // 0x98
};

struct UScrollBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UInputKeyDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputKeyDelegateBinding> InputKeyDelegateBindings; // 0x28
};

struct UClothingAssetCommon : UClothingAssetBase {
	UPhysicsAsset* PhysicsAsset; // 0x48
	TMap<FName, UClothConfigBase*> ClothConfigs; // 0x50
	UClothConfigBase* ClothSharedSimConfig; // 0xa0
	UClothConfigBase* ClothSimConfig; // 0xa8
	UClothConfigBase* ChaosClothSimConfig; // 0xb0
	TArray<UClothLODDataCommon_Legacy*> ClothLODData; // 0xb8
	TArray<FClothLODDataCommon> LODData; // 0xc8
	TArray<int32_t> LodMap; // 0xd8
	TArray<FName> UsedBoneNames; // 0xe8
	TArray<int32_t> UsedBoneIndices; // 0xf8
	int32_t ReferenceBoneIndex; // 0x108
	UClothingAssetCustomData* CustomData; // 0x110
	FClothConfig_Legacy ClothConfig; // 0x118
};

struct UShadowMapTexture2D : UTexture2D {
	EShadowMapFlags ShadowmapFlags; // 0x100
};

struct ULeaderBoard : UObject {
	TArray<FPlayerScore> Scores; // 0x28
	int32_t NumAccumulatedPlayers; // 0x38
};

struct UWBP_Main_TeamLog_C : UUserWidget {
	UScrollBox* ScrollBox_TeamLog; // 0x260
	UWBP_MainFrame_C* WBP_MainFrame; // 0x268
	UWBP_MainFrame_Header_C* WBP_MainFrame_Header; // 0x270
	bool Find State; // 0x278
};

struct UDistributionVectorUniform : UDistributionVector {
	FVector Max; // 0x38
	FVector Min; // 0x44
	char bLockAxes : 1; // 0x50
	EDistributionVectorLockFlags LockedAxes; // 0x54
	EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x55
	char bUseExtremes : 1; // 0x58
};

struct ATransformGizmoActor : AGizmoActor {
	UPrimitiveComponent* TranslateX; // 0x220
	UPrimitiveComponent* TranslateY; // 0x228
	UPrimitiveComponent* TranslateZ; // 0x230
	UPrimitiveComponent* TranslateYZ; // 0x238
	UPrimitiveComponent* TranslateXZ; // 0x240
	UPrimitiveComponent* TranslateXY; // 0x248
	UPrimitiveComponent* RotateX; // 0x250
	UPrimitiveComponent* RotateY; // 0x258
	UPrimitiveComponent* RotateZ; // 0x260
	UPrimitiveComponent* UniformScale; // 0x268
	UPrimitiveComponent* AxisScaleX; // 0x270
	UPrimitiveComponent* AxisScaleY; // 0x278
	UPrimitiveComponent* AxisScaleZ; // 0x280
	UPrimitiveComponent* PlaneScaleYZ; // 0x288
	UPrimitiveComponent* PlaneScaleXZ; // 0x290
	UPrimitiveComponent* PlaneScaleXY; // 0x298
};

struct UAkFolder : UAkAudioType {
	FString UnrealFolderPath; // 0x40
	FString WwiseFolderPath; // 0x50
};

struct UInterpGroup : UObject {
	TArray<UInterpTrack*> InterpTracks; // 0x30
	FName GroupName; // 0x40
	FColor GroupColor; // 0x48
	char bCollapsed : 1; // 0x4c
	char bVisible : 1; // 0x4c
	char bIsFolder : 1; // 0x4c
	char bIsParented : 1; // 0x4c
	char bIsSelected : 1; // 0x4c
};

struct ABP_ProcessingFacilityBase_C : ABP_FacilityBaseBuildPart_C {
	UBP_BuildJointComponent_C* Socekt3; // 0x860
	UBP_BuildJointComponent_C* Socekt2; // 0x868
	UBP_BuildJointComponent_C* Socekt1; // 0x870
	UBP_BuildJointComponent_C* Socekt; // 0x878
	UBP_BuildJointComponent_C* Bolt; // 0x880
};

struct UChaosSolverSettings : UDeveloperSettings {
	FSoftClassPath DefaultChaosSolverActorClass; // 0x40
};

struct UFAI_BTDecorator_CheckTooFarFromHome_C : UBTDecorator_BlueprintBase {
	FBlackboardKeySelector KEYSpawner; // 0xa0
	float Limit; // 0xc8
	float FarLimit; // 0xcc
	FVector CenterLocation; // 0xd0
	float Bound; // 0xdc
	TScriptInterface<IBPI_NPCSpawnerInterface_C> As BPI NPCSpawner Interface; // 0xe0
};

struct UBrushComponent : UPrimitiveComponent {
	UModel* Brush; // 0x440
	UBodySetup* BrushBodySetup; // 0x448
};

struct UInfinite_Compound : USceneComponent {
	bool RealTime; // 0x1f8
	float TimeJump; // 0x1fc
	EInfinityCategory InfinityCategory; // 0x200
};

struct UARPin : UObject {
	UARTrackedGeometry* TrackedGeometry; // 0x28
	USceneComponent* PinnedComponent; // 0x30
	FTransform LocalToTrackingTransform; // 0x40
	FTransform LocalToAlignedTrackingTransform; // 0x70
	EARTrackingState TrackingState; // 0xa0
	FMulticastInlineDelegate OnARTrackingStateChanged; // 0xc0
	FMulticastInlineDelegate OnARTransformUpdated; // 0xd0
};

struct UEditableGameplayTagQueryExpression_AllExprMatch : UEditableGameplayTagQueryExpression {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
};

struct UBTCompositeNode : UBTNode {
	TArray<FBTCompositeChild> Children; // 0x58
	TArray<UBTService*> Services; // 0x68
	char bApplyDecoratorScope : 1; // 0x88
};

struct UMaterialExpressionConstant3Vector : UMaterialExpression {
	FLinearColor Constant; // 0x40
};

struct UGizmoWorldAxisSource : UObject {
	FVector Origin; // 0x30
	int32_t AxisIndex; // 0x3c
};

struct AFieldSystemActor : AActor {
	UFieldSystemComponent* FieldSystemComponent; // 0x220
};

struct UWBP_WorldMapPanel_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Open; // 0x268
	UTextBlock* Text_Timer; // 0x270
	UWBP_PlayerInfo_C* WBP_PlayerInfo; // 0x278
	UWBP_ShortRanking_C* WBP_Ranking_Simple; // 0x280
	UWBP_WorldMap_C* WBP_WorldMap; // 0x288
	UWidgetSwitcher* WidgetSwitcher_56; // 0x290
	USizeBox* WS_DDay; // 0x298
	USizeBox* WS_PlayerInfo; // 0x2a0
	FVector2D ClampedPosition; // 0x2a8
	float LerpSpeed; // 0x2b0
	float NewZoom; // 0x2b4
	FTimerHandle TimerChangeZoomHandler; // 0x2b8
	bool NeedClampLocation; // 0x2c0
	FVector2D NewPivot; // 0x2c4
	TArray<UWBP_MapMarker_EventPoint_C*> SpotEvents; // 0x2d0
	TArray<UWBP_MapMarker_RespawnPoint_C*> RespawnPoint; // 0x2e0
	TArray<UWBP_MapMarker_C*> AttackedAlert; // 0x2f0
	TArray<UWBP_MapMarker_C*> DeadOthers; // 0x300
	FFloatValueFromDataTable GameTimeMultiflyByConfig; // 0x310
	FString TimerText; // 0x338
	ABP_ModelViewer_C* SummaryModel; // 0x348
};

struct UBTTask_FinishWithResult : UBTTaskNode {
	EBTNodeResult Result; // 0x70
};

struct UPhononReverbSourceSettings : UReverbPluginSourceSettingsBase {
	EIplSimulationType SourceReverbSimulationType; // 0x28
	float SourceReverbContribution; // 0x2c
};

struct USoundfieldEffectBase : UObject {
	USoundfieldEffectSettingsBase* Settings; // 0x28
};

struct AShooterTargetPoint : ATargetPoint {
	bool bTeleportTarget; // 0x220
	int32_t UsableTeamID; // 0x224
	int32_t UsablePlayerOrder; // 0x228
};

struct UMediaComponent : UActorComponent {
	UMediaTexture* MediaTexture; // 0xb0
	UMediaPlayer* MediaPlayer; // 0xb8
};

struct UWBP_Main_MailSystem_C : UUserWidget {
	UWBP_MainFrame_C* BP_UI_Frame; // 0x260
	UWidgetSwitcher* DetailPanel; // 0x268
	UImage* Image_94; // 0x270
	UImage* Image_164; // 0x278
	UImage* Image_314; // 0x280
	UScrollBox* MailList; // 0x288
	UWBP_MailDetail_C* WBP_MailDetail; // 0x290
	UWBP_MainFrame_Header_C* WBP_MainFrame_Header; // 0x298
	float LastRefreshTime; // 0x2a0
	bool IsFirstCreated; // 0x2a4
};

struct UCloudWatchLogsPutLogEvents : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UPhysicsSettings : UPhysicsSettingsCore {
	FRigidBodyErrorCorrection PhysicErrorCorrection; // 0xe0
	ESettingsLockedAxis LockedAxis; // 0x114
	ESettingsDOF DefaultDegreesOfFreedom; // 0x115
	bool bSuppressFaceRemapTable; // 0x116
	bool bSupportUVFromHitResults; // 0x117
	bool bDisableActiveActors; // 0x118
	bool bDisableKinematicStaticPairs; // 0x119
	bool bDisableKinematicKinematicPairs; // 0x11a
	bool bDisableCCD; // 0x11b
	bool bEnableEnhancedDeterminism; // 0x11c
	float AnimPhysicsMinDeltaTime; // 0x120
	bool bSimulateAnimPhysicsAfterReset; // 0x124
	float MaxPhysicsDeltaTime; // 0x128
	bool bSubstepping; // 0x12c
	bool bSubsteppingAsync; // 0x12d
	float MaxSubstepDeltaTime; // 0x130
	int32_t MaxSubsteps; // 0x134
	float SyncSceneSmoothingFactor; // 0x138
	float InitialAverageFrameRate; // 0x13c
	int32_t PhysXTreeRebuildRate; // 0x140
	TArray<FPhysicalSurfaceName> PhysicalSurfaces; // 0x148
	FBroadphaseSettings DefaultBroadphaseSettings; // 0x158
	float MinDeltaVelocityForHitEvents; // 0x198
	FChaosPhysicsSettings ChaosSettings; // 0x19c
};

struct UABP_Drone_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2f8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x378
};

struct UMaterialExpressionConstant2Vector : UMaterialExpression {
	float R; // 0x40
	float G; // 0x44
};

struct USubmixEffectFilterPreset : USoundEffectSubmixPreset {
	FSubmixEffectFilterSettings Settings; // 0x9c
};

struct UWBP_Toolbar_Dropdown_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Dropdown; // 0x268
	UButton* Button_Category; // 0x270
	UImage* Image_Category; // 0x278
	UNamedSlot* NamedSlot_82; // 0x280
	UTextBlock* Text_Category; // 0x288
	UVerticalBox* VerticalBox_Dropdown; // 0x290
	UObject* Resource Object; // 0x298
	FText In Text; // 0x2a0
	FMulticastInlineDelegate OnClicked; // 0x2b8
	bool bDropdown; // 0x2c8
};

struct UPostProcessComponent : USceneComponent {
	FPostProcessSettings Settings; // 0x200
	float Priority; // 0x750
	float BlendRadius; // 0x754
	float BlendWeight; // 0x758
	char bEnabled : 1; // 0x75c
	char bUnbound : 1; // 0x75c
};

struct ABP_Afterimage2_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UPoseableMeshComponent* PoseableMesh; // 0x228
	USceneComponent* DefaultSceneRoot; // 0x230
	float AtferImage_Timeline_Refraction_F9891ED745C5E1BBAA3B34A7F0BC19B8; // 0x238
	float AtferImage_Timeline_ColorPower_F9891ED745C5E1BBAA3B34A7F0BC19B8; // 0x23c
	float AtferImage_Timeline_Opacity_F9891ED745C5E1BBAA3B34A7F0BC19B8; // 0x240
	ETimelineDirection AtferImage_Timeline__Direction_F9891ED745C5E1BBAA3B34A7F0BC19B8; // 0x244
	UTimelineComponent* AtferImage Timeline; // 0x248
	UMaterialInstanceDynamic* Afterimage Material; // 0x250
	USkeletalMeshComponent* ModelRef; // 0x258
};

struct UWBP_MachineArm_CostListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image_54; // 0x268
	UTextBlock* Name; // 0x270
	UTextBlock* Text_Amount; // 0x278
	UWBP_Slot_Display_C* WBP_Slot_Display; // 0x280
	UBP_PlayerInventoryComponent_C* Player Inventory Component; // 0x288
	int32_t Item ID; // 0x290
	bool TraceResouceCount; // 0x294
	int32_t Amount; // 0x298
};

struct UMaterialExpressionAdd : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UAnimSequenceBase : UAnimationAsset {
	TArray<FAnimNotifyEvent> Notifies; // 0x80
	float SequenceLength; // 0x90
	float RateScale; // 0x94
	FRawCurveTracks RawCurveData; // 0x98
};

struct UNiagaraDataInterfaceArrayFloat3 : UNiagaraDataInterfaceArray {
	TArray<FVector> FloatData; // 0x50
};

struct UComboBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FComboBoxStyle ComboBoxStyle; // 0x30
};

struct UInteractiveGizmoManager : UObject {
	TArray<FActiveGizmo> ActiveGizmos; // 0x30
	TMap<FString, UInteractiveGizmoBuilder*> GizmoBuilders; // 0x58
};

struct URepair_Table_SK_Skeleton_AnimBlueprint_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x2f8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x398
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3e8
	ABP_RepairTable_C* Repair Table; // 0x468
	bool IsWorking; // 0x470
};

struct UMaterialExpressionQualitySwitch : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput Inputs[0x4]; // 0x54
};

struct UMovieSceneSequence : UMovieSceneSignedObject {
	UMovieSceneCompiledData* CompiledData; // 0x50
	EMovieSceneCompletionMode DefaultCompletionMode; // 0x58
	bool bParentContextsAreSignificant; // 0x59
	bool bPlayableDirectly; // 0x5a
	EMovieSceneSequenceFlags SequenceFlags; // 0x5b
};

struct UUdpMessagingSettings : UObject {
	bool EnabledByDefault; // 0x28
	bool EnableTransport; // 0x29
	bool bAutoRepair; // 0x2a
	bool bStopServiceWhenAppDeactivates; // 0x2b
	FString UnicastEndpoint; // 0x30
	FString MulticastEndpoint; // 0x40
	EUdpMessageFormat MessageFormat; // 0x50
	char MulticastTimeToLive; // 0x51
	TArray<FString> StaticEndpoints; // 0x58
	bool EnableTunnel; // 0x68
	FString TunnelUnicastEndpoint; // 0x70
	FString TunnelMulticastEndpoint; // 0x80
	TArray<FString> RemoteTunnelEndpoints; // 0x90
};

struct UMapBuildDataRegistry : UObject {
	ELightingBuildQuality LevelLightingQuality; // 0x28
};

struct ABP_Juggernaut_Ridable_C : ACharacter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4c0
	USceneComponent* Scene; // 0x4c8
	USpringArmComponent* SpringArm; // 0x4d0
	UCameraComponent* Camera; // 0x4d8
	BP_MasterCharacter_C* Rider; // 0x4e0
	float SpringArmRotationYaw; // 0x4e8
	float SpringArmRotationPitch; // 0x4ec
	FVector ForwardVector; // 0x4f0
	FVector RightVector; // 0x4fc
	bool IsTurn; // 0x508
	float TurnRate; // 0x50c
	FRotator PreviousRotation; // 0x510
	float TurnSpeedSmooth; // 0x51c
	bool IsPlayingLaser; // 0x520
	float CameraLagLength; // 0x524
};

struct UDistributionVectorConstant : UDistributionVector {
	FVector Constant; // 0x38
	char bLockAxes : 1; // 0x44
	EDistributionVectorLockFlags LockedAxes; // 0x48
};

struct UMovieSceneSignedObject : UObject {
	FGuid Signature; // 0x28
};

struct UAISystem : UAISystemBase {
	FSoftClassPath PerceptionSystemClassName; // 0x58
	FSoftClassPath HotSpotManagerClassName; // 0x70
	float AcceptanceRadius; // 0x88
	float PathfollowingRegularPathPointAcceptanceRadius; // 0x8c
	float PathfollowingNavLinkAcceptanceRadius; // 0x90
	bool bFinishMoveOnGoalOverlap; // 0x94
	bool bAcceptPartialPaths; // 0x95
	bool bAllowStrafing; // 0x96
	bool bEnableBTAITasks; // 0x97
	bool bAllowControllersAsEQSQuerier; // 0x98
	bool bEnableDebuggerPlugin; // 0x99
	bool bForgetStaleActors; // 0x9a
	bool bAddBlackboardSelfKey; // 0x9b
	ECollisionChannel DefaultSightCollisionChannel; // 0x9c
	UBehaviorTreeManager* BehaviorTreeManager; // 0xa0
	UEnvQueryManager* EnvironmentQueryManager; // 0xa8
	UAIPerceptionSystem* PerceptionSystem; // 0xb0
	TArray<UAIAsyncTaskBlueprintProxy*> AllProxyObjects; // 0xb8
	UAIHotSpotManager* HotSpotManager; // 0xc8
	UNavLocalGridManager* NavLocalGrids; // 0xd0
};

struct UInputAxisDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputAxisDelegateBinding> InputAxisDelegateBindings; // 0x28
};

struct UNiagaraDataInterfaceSpline : UNiagaraDataInterface {
	AActor* Source; // 0x38
};

struct UMultiLineEditableTextBox : UTextLayoutWidget {
	FText Text; // 0x128
	FText HintText; // 0x140
	FDelegate HintTextDelegate; // 0x158
	FEditableTextBoxStyle WidgetStyle; // 0x168
	FTextBlockStyle TextStyle; // 0x960
	bool bIsReadOnly; // 0xbd0
	bool AllowContextMenu; // 0xbd1
	FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xbd2
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xbd3
	USlateWidgetStyleAsset* Style; // 0xbd8
	FSlateFontInfo Font; // 0xbe0
	FLinearColor ForegroundColor; // 0xc38
	FLinearColor BackgroundColor; // 0xc48
	FLinearColor ReadOnlyForegroundColor; // 0xc58
	FMulticastInlineDelegate OnTextChanged; // 0xc68
	FMulticastInlineDelegate OnTextCommitted; // 0xc78
};

struct UBTTask_CheckJuniorSpawner_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	FBlackboardKeySelector spawner; // 0xb0
	float FarLimit; // 0xd8
};

struct UWBP_ObjectiveCheckbox_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Checked; // 0x268
	UWidgetAnimation* Anim_Attention; // 0x270
	UCheckBox* CheckBox_80; // 0x278
	UImage* Image_60; // 0x280
	UImage* Image_143; // 0x288
	UImage* Image_209; // 0x290
	UImage* Image_284; // 0x298
	USizeBox* SizeBox_1; // 0x2a0
	UTextBlock* TB_Do; // 0x2a8
};

struct AOnlineBeacon : AActor {
	float BeaconConnectionInitialTimeout; // 0x228
	float BeaconConnectionTimeout; // 0x22c
	UNetDriver* NetDriver; // 0x230
};

struct UParticleModuleCameraOffset : UParticleModuleCameraBase {
	FRawDistributionFloat CameraOffset; // 0x30
	char bSpawnTimeOnly : 1; // 0x60
	EParticleCameraOffsetUpdateMethod UpdateMethod; // 0x64
};

struct UArrowComponent : UPrimitiveComponent {
	FColor ArrowColor; // 0x440
	float ArrowSize; // 0x444
	float ArrowLength; // 0x448
	float ScreenSize; // 0x44c
	char bIsScreenSizeScaled : 1; // 0x450
	char bTreatAsASprite : 1; // 0x450
};

struct UInterpTrackInstSound : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
	UAudioComponent* PlayAudioComp; // 0x30
};

struct UAnimNotify_CameraShake_C : UAnimNotify {
	USVCameraShake* CameraShake; // 0x38
	bool bPlayOnlyOwner; // 0x40
};

struct ABP_ConcreteResource_C : ABP_BreakableResource_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x460
};

struct ULowEntryLong : UObject {
	TArray<char> Bytes; // 0x28
};

struct UParticleModuleAttractorParticle : UParticleModuleAttractorBase {
	FName EmitterName; // 0x30
	FRawDistributionFloat Range; // 0x38
	char bStrengthByDistance : 1; // 0x68
	FRawDistributionFloat Strength; // 0x70
	char bAffectBaseVelocity : 1; // 0xa0
	EAttractorParticleSelectionMethod SelectionMethod; // 0xa4
	char bRenewSource : 1; // 0xa8
	char bInheritSourceVel : 1; // 0xa8
	int32_t LastSelIndex; // 0xac
};

struct USequenceCameraShake : UCameraShakeBase {
	UCameraAnimationSequence* Sequence; // 0x98
	float PlayRate; // 0xa0
	float Scale; // 0xa4
	float BlendInTime; // 0xa8
	float BlendOutTime; // 0xac
	float RandomSegmentDuration; // 0xb0
	bool bRandomSegment; // 0xb4
	USequenceCameraShakeSequencePlayer* Player; // 0xb8
	USequenceCameraShakeCameraStandIn* CameraStandIn; // 0xc0
};

struct ASceneCapture : AActor {
	UStaticMeshComponent* MeshComp; // 0x220
	USceneComponent* SceneComponent; // 0x228
};

struct UVehicleAnimInstance : UAnimInstance {
	UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent; // 0xa40
};

struct UGameSessionSettings : UObject {
	int32_t MaxSpectators; // 0x28
	int32_t MaxPlayers; // 0x2c
	char bRequiresPushToTalk : 1; // 0x30
};

struct UNiagaraDataInterfaceGrid2DCollectionReader : UNiagaraDataInterfaceGrid2D {
	FString EmitterName; // 0xf8
	FString DIName; // 0x108
};

struct UComboBoxString : UWidget {
	TArray<FString> DefaultOptions; // 0x108
	FString SelectedOption; // 0x118
	FComboBoxStyle WidgetStyle; // 0x128
	FTableRowStyle ItemStyle; // 0x518
	FMargin ContentPadding; // 0xce0
	float MaxListHeight; // 0xcf0
	bool HasDownArrow; // 0xcf4
	bool EnableGamepadNavigationMode; // 0xcf5
	FSlateFontInfo Font; // 0xcf8
	FSlateColor ForegroundColor; // 0xd50
	bool bIsFocusable; // 0xd78
	FDelegate OnGenerateWidgetEvent; // 0xd7c
	FMulticastInlineDelegate OnSelectionChanged; // 0xd90
	FMulticastInlineDelegate OnOpening; // 0xda0
};

struct UBuildJointComponent : UBoxComponent {
	EBuildJointType BuildJointType; // 0x468
	TArray<EBuildLayoutType> BuildLayoutList; // 0x470
	int32_t sortOrder; // 0x480
	TArray<ABuildPartBase*> IgnoreClassArray; // 0x488
};

struct UTreeView : UListView {
	FDelegate BP_OnGetItemChildren; // 0x378
	FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0x388
};

struct UWBP_FunctionalityMainButton_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* Button_124; // 0x268
	UImage* Image_51; // 0x270
	UImage* Image_UX; // 0x278
	UTextBlock* TextBlock_533; // 0x280
	UWBP_UI_SlotHovering_C* WBP_UI_SlotHovering; // 0x288
	FText Text; // 0x290
	FMulticastInlineDelegate OnClicked; // 0x2a8
};

struct ULeaderboardQueryCallbackProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct ADecalActor : AActor {
	UDecalComponent* Decal; // 0x220
};

struct UVehicleAKData : UDataAsset {
	UAkAudioEvent* AkCrashEvent; // 0x30
	TArray<UAkGroupValue*> AKCrashSwitchValue; // 0x38
	TArray<float> AKCrashSwitchSpeed; // 0x48
	bool IsPlaySound_Claxon; // 0x58
	UAkAudioEvent* AkClaxonEvent; // 0x60
	TArray<UAkGroupValue*> AKClaxonSwitchValue; // 0x68
	bool IsPlaySound_Skid; // 0x78
	UAkAudioEvent* AkSkidEvent; // 0x80
	TArray<UAkGroupValue*> AKSkidSwitchValue; // 0x88
	bool IsPlaySound_NotEnoughBattery; // 0x98
	UAkAudioEvent* AkNotEnoughBatteryEvent; // 0xa0
	TArray<UAkGroupValue*> AKNotEnoughBatterySwitchValue; // 0xa8
	bool IsPlaySound_Jump; // 0xb8
	UAkAudioEvent* AkJumpEvent; // 0xc0
	TArray<UAkGroupValue*> AKJumpSwitchValue; // 0xc8
	UAkAudioEvent* AkLandEvent; // 0xd8
	TArray<UAkGroupValue*> AKLandSwitchValue; // 0xe0
};

struct UVariantObjectBinding : UObject {
	FString CachedActorLabel; // 0x28
	FSoftObjectPath ObjectPtr; // 0x38
	LazyObjectProperty LazyObjectPtr; // 0x50
	TArray<UPropertyValue*> CapturedProperties; // 0x70
	TArray<FFunctionCaller> FunctionCallers; // 0x80
};

struct UAudioImpulseResponse : UObject {
	TArray<float> ImpulseResponse; // 0x28
	int32_t NumChannels; // 0x38
	int32_t SampleRate; // 0x3c
	float NormalizationVolumeDb; // 0x40
	bool bTrueStereo; // 0x44
	TArray<float> IRData; // 0x48
};

struct UInterpTrackLinearColorProp : UInterpTrackLinearColorBase {
	FName PropertyName; // 0x90
};

struct UBP_OccupyFunctionComponent_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	bool IsIn; // 0xb8
	FMulticastInlineDelegate OnChangeIsIn; // 0xc0
	FMulticastInlineDelegate OnChangeStartOccupy; // 0xd0
	FMulticastInlineDelegate WhenChangeOccupyPlayers; // 0xe0
	TArray<BP_SurvivalCharacter_C*> OccupyPlayers; // 0xf0
	FMulticastInlineDelegate OnOccupyed; // 0x100
	FMulticastInlineDelegate OnResetOccupyed; // 0x110
	FMulticastInlineDelegate OnFailOccupy; // 0x120
	float OccupyRateMultiply; // 0x130
	float DecreaseOccupyRateMultiply; // 0x134
	bool CanOccupyFail; // 0x138
	bool IsOccupyed; // 0x139
	float IncreaseTime; // 0x13c
	float DecreaseTime; // 0x140
	float ServerCompleteTime; // 0x144
	FMulticastInlineDelegate OnComplete; // 0x148
	bool RequestReset; // 0x158
	float OldOccupyRateMultiply; // 0x15c
	float OldDecreaseOccupyRateMultiply; // 0x160
	bool OccupyComplete; // 0x164
};

struct ULocalLightComponent : ULightComponent {
	ELightUnits IntensityUnits; // 0x328
	float Radius; // 0x32c
	float AttenuationRadius; // 0x330
	FLightmassPointLightSettings LightmassSettings; // 0x334
};

struct USpotEventCondition_Periodic_C : UEventActivationCondition {
	FPointerToUberGraphFrame UberGraphFrame; // 0x28
	FFloatRange StartTime; // 0x30
	FFloatRange ActivationSpan; // 0x40
	bool Active; // 0x50
};

struct AScoreActor : AActor {
	UWidgetComponent* Widget; // 0x220
};

struct UScrollBar : UWidget {
	FScrollBarStyle WidgetStyle; // 0x108
	USlateWidgetStyleAsset* Style; // 0x5d8
	bool bAlwaysShowScrollbar; // 0x5e0
	bool bAlwaysShowScrollbarTrack; // 0x5e1
	EOrientation Orientation; // 0x5e2
	FVector2D Thickness; // 0x5e4
	FMargin Padding; // 0x5ec
};

struct AMatineeActorCameraAnim : AMatineeActor {
	UCameraAnim* CameraAnim; // 0x2c8
};

struct UNiagaraEffectType : UObject {
	ENiagaraScalabilityUpdateFrequency UpdateFrequency; // 0x28
	ENiagaraCullReaction CullReaction; // 0x2c
	UNiagaraSignificanceHandler* SignificanceHandler; // 0x30
	TArray<FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings; // 0x38
	FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings; // 0x48
	FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings; // 0x58
};

struct UReflectionCaptureComponent : USceneComponent {
	UBillboardComponent* CaptureOffsetComponent; // 0x1f8
	EReflectionSourceType ReflectionSourceType; // 0x200
	EMobileReflectionCompression MobileReflectionCompression; // 0x201
	UTextureCube* Cubemap; // 0x208
	float SourceCubemapAngle; // 0x210
	float Brightness; // 0x214
	bool bModifyMaxValueRGBM; // 0x218
	float MaxValueRGBM; // 0x21c
	FVector CaptureOffset; // 0x220
	FGuid MapBuildDataId; // 0x22c
	UTextureCube* CachedEncodedHDRCubemap; // 0x250
};

struct UInAppPurchaseRestoreCallbackProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct ABP_ActorSpawnManager_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	USceneComponent* DefaultSceneRoot; // 0x228
	TMap<FName, ABP_ActorSpawner_C*> ActorSpawnerMap; // 0x230
	UDataTable* ActorSpawnGroupInfo; // 0x280
	bool bIsInitBySimulated; // 0x288
};

struct URMHttpRequest : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFail; // 0x40
};

struct ABP_LightDrone_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UStaticMeshComponent* Drone_LightCone; // 0x228
	USpotLightComponent* SpotLight; // 0x230
	USkeletalMeshComponent* SkeletalMesh; // 0x238
	USceneComponent* DefaultSceneRoot; // 0x240
	float _____0_Amount_D0846B9D48B890304515C2BD214CE06A; // 0x248
	ETimelineDirection _____0__Direction_D0846B9D48B890304515C2BD214CE06A; // 0x24c
	UTimelineComponent*   _1; // 0x250
	float Intensity; // 0x258
	float AttenuationRadius; // 0x25c
	float OuterConeAngle; // 0x260
	float InnerConeAngle; // 0x264
	BP_SV_Ultra_Dynamic_Sky_C* LightSky; // 0x268
};

struct UParticleModuleLocation : UParticleModuleLocationBase {
	FRawDistributionVector StartLocation; // 0x30
	float DistributeOverNPoints; // 0x78
	float DistributeThreshold; // 0x7c
};

struct UMovieSceneMaterialTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
};

struct ABP_RetrieveSystemDesc_C : ABP_FunctionalityBuildPartBase_C {
	UParticleSystemComponent* P_Facility_Receiver; // 0x890
};

struct UWBP_AdminConsole_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* Button; // 0x268
	UButton* Button_2; // 0x270
	UButton* Button_3; // 0x278
	UButton* Button_4; // 0x280
	UButton* Button_5; // 0x288
	UButton* Button_6; // 0x290
	UButton* Button_7; // 0x298
	UButton* Button_11; // 0x2a0
	UButton* Button_62; // 0x2a8
	UButton* Button_101; // 0x2b0
	UButton* Button_145; // 0x2b8
	UButton* Button_346; // 0x2c0
	UButton* Button123; // 0x2c8
	UButton* Button123_2; // 0x2d0
	UButton* Button123_3; // 0x2d8
	UButton* Button123_4; // 0x2e0
	UButton* Button234; // 0x2e8
	UButton* Button234_2; // 0x2f0
	UButton* Button_Get; // 0x2f8
	UButton* Button_Get_2; // 0x300
	UButton* Button_History; // 0x308
	UButton* Button_KillActor; // 0x310
	UButton* Button_Spawn; // 0x318
	UButton* Button_SpawnAllItems; // 0x320
	UButton* Button_Tab_Cheat; // 0x328
	UButton* Button_Tab_PlayerList; // 0x330
	UButton* Button_Tap_AdminTools; // 0x338
	UButton* Button_Tap_Graphic_2; // 0x340
	UEditableTextBox* EditableTextBox_Amount; // 0x348
	UEditableTextBox* EditableTextBox_Name; // 0x350
	UButton* Exit; // 0x358
	UImage* Image; // 0x360
	UImage* Image_84; // 0x368
	UImage* Image_169; // 0x370
	UImage* Image_Fly; // 0x378
	UImage* Image_Fly_2; // 0x380
	UImage* Image_God; // 0x388
	UImage* Image_hp; // 0x390
	UImage* Image_Nocost; // 0x398
	UImage* Image_Trace; // 0x3a0
	UImage* Image_Trace_2; // 0x3a8
	UWrapBox* list; // 0x3b0
	UVerticalBox* ScrollBox_Quick; // 0x3b8
	USlider* Slider_220; // 0x3c0
	UTextBlock* Text_Time; // 0x3c8
	UImage* Unlock; // 0x3d0
	UWB_AdminTools_C* WB_AdminTools; // 0x3d8
	UWB_ClassicSettingsDev_C* WB_ClassicSettingsDev; // 0x3e0
	UWBP_AdminConsole_QuickListing_C* WBP_AdminConsole_QuickListing; // 0x3e8
	UWBP_AdminUserManagement_C* WBP_AdminUserManagement; // 0x3f0
	UWBP_AdminConsole_ItemListing_C* WBP_CheatItemList; // 0x3f8
	UWidgetSwitcher* WidgetSwitcher_1; // 0x400
	FText PreviewNum; // 0x408
	int32_t CreateCount; // 0x420
	UWBP_AdminConsole_ItemListing_C* CurrentSeletedItem; // 0x428
	bool PrevMouseState; // 0x430
	TArray<UWBP_AdminConsole_ItemListing_C*> WidgetArray; // 0x438
	UBP_QuickGen_C* QuickGenSave; // 0x448
};

struct UScaleBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UGizmoBaseComponent : UPrimitiveComponent {
	FLinearColor Color; // 0x440
	float HoverSizeMultiplier; // 0x450
	float PixelHitDistanceThreshold; // 0x454
};

struct UPlatformEventsComponent : UActorComponent {
	FMulticastInlineDelegate PlatformChangedToLaptopModeDelegate; // 0xb0
	FMulticastInlineDelegate PlatformChangedToTabletModeDelegate; // 0xc0
};

struct ABP_MasterRangeWeapon_C : ASVProjectileWeapon {
	FPointerToUberGraphFrame UberGraphFrame; // 0x750
	UStaticMeshComponent* Display; // 0x758
	UAkComponent* AkFireHole; // 0x760
	bool Can Reload; // 0x768
	FDataTableRowHandle Ammo Item; // 0x770
	bool Single Shot Trace; // 0x780
	float Auto Fire Rate; // 0x784
	int32_t Multi Shot Count; // 0x788
	int32_t Burst Fire Count; // 0x78c
	float BurstFireDelay; // 0x790
	FS_WeaponRecoil Per Shot Recoil; // 0x798
	USoundBase* Fire Sound; // 0x7d0
	UAkSwitchValue* AKWeaponSwitch; // 0x7d8
	USoundBase* Empty Fire Sound; // 0x7e0
	float Min Spread; // 0x7e8
	float Max Spread; // 0x7ec
	float Idle Spread; // 0x7f0
	float Jog Spread; // 0x7f4
	float Aim Spread; // 0x7f8
	float Aim Walk Spread; // 0x7fc
	float Sprint Spread; // 0x800
	float Jump Spread; // 0x804
	float Crouch Spread; // 0x808
	float Crouch Walking Spread; // 0x80c
	float Crouch Aimed Spread; // 0x810
	float Crouch Aimed Walking Spread; // 0x814
	float Spread Increase Per Shot; // 0x818
	float Spread Reduction Rate; // 0x81c
	FS_RangeWeaponAnims Range Weapon Animations; // 0x820
	float Current Spread; // 0x8a8
	int32_t Fire Count; // 0x8ac
	bool Left Mouse Down; // 0x8b0
	bool Allow Fire; // 0x8b1
	FItemInventory Loading Ammo Item; // 0x8b8
	FName Muzzle Flash Effect Socket Name; // 0x8f0
	UParticleSystemComponent* Muzzle Effect; // 0x8f8
	USoundBase* Default Sound; // 0x900
	ABP_MasterProjectile_C* ProjectileClass; // 0x908
	UCurveFloat* DropRateCurve; // 0x910
	UCurveFloat* MultifleDamageCurve; // 0x918
	float IdleSpreadMax; // 0x920
	float JogSpreadMax; // 0x924
	float AimSpreadMax; // 0x928
	float AimWalkSpreadMax; // 0x92c
	float SprintSpreadMax; // 0x930
	float JumpSpreadMax; // 0x934
	float CrouchSpreadMax; // 0x938
	float CrouchWalkingSpreadMax; // 0x93c
	float CrouchAimedSpreadMax; // 0x940
	float CrouchAimedWalkingSpreadMax; // 0x944
	bool ClientIsReloading; // 0x948
	UMatineeCameraShake* CameraShakeClass; // 0x950
	UBP_PlayerInventoryComponent_C* Player Inventory Component; // 0x958
	FS_WeaponRecoil Zoom Per Shot Recoil; // 0x960
	bool bCanReduceSpread; // 0x998
	float AgainReduceSpreadTime; // 0x99c
	FRandomStream RandomStream; // 0x9a0
	FS_WeaponRecoil Crouch Per Shot Recoil; // 0x9a8
	float Operability; // 0x9e0
	float CurrentOperabilityValue; // 0x9e4
	float AimRange; // 0x9e8
	bool FireLockForBurst; // 0x9ec
	bool bPressedADS; // 0x9ed
	int32_t BeginAKSoundFireCount; // 0x9f0
	float HideMeshPoint; // 0x9f4
	int32_t ClientAmmo; // 0x9f8
	bool bNeedFireSound; // 0x9fc
	float Damage; // 0xa00
	TMap<EPlayerMoveState, float> MinSpread; // 0xa08
	TMap<EPlayerMoveState, float> MaxSpread; // 0xa58
	FDamageStruct DTDamageStruct; // 0xaa8
	bool BoltAction; // 0xae0
	bool Bolting; // 0xae1
	FMulticastInlineDelegate OnFIreProjectile; // 0xae8
	float BurstCoolTime; // 0xaf8
	float ProjectileSpeedMultiply; // 0xafc
	float DamageMultiply; // 0xb00
	float FireSoundMultipy; // 0xb04
	float EffectLightMultiply; // 0xb08
	float RecoilMultiply; // 0xb0c
	float ReloadSpeedMultiply; // 0xb10
	UAkSwitchValue* MuzzleAKSwitch; // 0xb18
	TArray<FAttachmentSlot> Attachments; // 0xb20
	TArray<FName> HideMeshTagsWhenADS; // 0xb30
	bool IsActivated; // 0xb40
	FMulticastInlineDelegate OnChangeClientAmmo; // 0xb48
	UMaterialInstanceDynamic* MI_Display; // 0xb58
	TArray<UPrimitiveComponent*> StealthMeshes; // 0xb60
	bool Pressed; // 0xb70
};

struct UNiagaraPreviewAxis_InterpParamFloat : UNiagaraPreviewAxis_InterpParamBase {
	float Min; // 0x38
	float Max; // 0x3c
};

struct UChaosClothConfig : UClothConfigCommon {
	EClothMassMode MassMode; // 0x28
	float UniformMass; // 0x2c
	float TotalMass; // 0x30
	float Density; // 0x34
	float MinPerParticleMass; // 0x38
	float EdgeStiffness; // 0x3c
	float BendingStiffness; // 0x40
	bool bUseBendingElements; // 0x44
	float AreaStiffness; // 0x48
	float VolumeStiffness; // 0x4c
	float StrainLimitingStiffness; // 0x50
	float LimitScale; // 0x54
	EChaosClothTetherMode TetherMode; // 0x58
	bool bUseGeodesicDistance; // 0x59
	float ShapeTargetStiffness; // 0x5c
	float CollisionThickness; // 0x60
	float FrictionCoefficient; // 0x64
	bool bUseSelfCollisions; // 0x68
	float SelfCollisionThickness; // 0x6c
	bool bUseLegacyBackstop; // 0x70
	float DampingCoefficient; // 0x74
	bool bUsePointBasedWindModel; // 0x78
	float DragCoefficient; // 0x7c
	float LiftCoefficient; // 0x80
	bool bUseGravityOverride; // 0x84
	float GravityScale; // 0x88
	FVector Gravity; // 0x8c
	float AnimDriveSpringStiffness; // 0x98
	FVector LinearVelocityScale; // 0x9c
	float AngularVelocityScale; // 0xa8
	bool bUseTetrahedralConstraints; // 0xac
	bool bUseThinShellVolumeConstraints; // 0xad
	bool bUseContinuousCollisionDetection; // 0xae
};

struct UNiagaraDataInterfaceSkeletalMesh : UNiagaraDataInterface {
	ENDISkeletalMesh_SourceMode SourceMode; // 0x38
	AActor* Source; // 0x40
	FNiagaraUserParameterBinding MeshUserParameter; // 0x48
	USkeletalMeshComponent* SourceComponent; // 0x68
	ENDISkeletalMesh_SkinningMode SkinningMode; // 0x70
	TArray<FName> SamplingRegions; // 0x78
	int32_t WholeMeshLOD; // 0x88
	TArray<FName> FilteredBones; // 0x90
	TArray<FName> FilteredSockets; // 0xa0
	FName ExcludeBoneName; // 0xb0
	char bExcludeBone : 1; // 0xb8
	bool bRequireCurrentFrameData; // 0xb9
};

struct UBTTask_MoveBackFromTarget_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	bool bForceMoveBack; // 0xb0
	FBlackboardKeySelector TargetActor; // 0xb8
	FBlackboardKeySelector TargetLocation; // 0xe0
	float HealthChance; // 0x108
	float Chance; // 0x10c
	float MoveBackChance; // 0x110
	float MaxNearFriendCount; // 0x114
	float MoveBackChanceByFriend; // 0x118
	float MoveBackDistance; // 0x11c
	float MoveBackDistanceInterval; // 0x120
	float Max Health; // 0x124
	ACommonAI_BaseAICharacter_C* MyCharacter; // 0x128
};

struct UInterpFilter : UObject {
	FString Caption; // 0x28
};

struct AWorldSettings : AInfo {
	int32_t VisibilityCellSize; // 0x228
	EVisibilityAggressiveness VisibilityAggressiveness; // 0x22c
	char bPrecomputeVisibility : 1; // 0x22d
	char bPlaceCellsOnlyAlongCameraTracks : 1; // 0x22d
	char bEnableWorldBoundsChecks : 1; // 0x22d
	char bEnableNavigationSystem : 1; // 0x22d
	char bEnableAISystem : 1; // 0x22d
	char bEnableWorldComposition : 1; // 0x22d
	char bUseClientSideLevelStreamingVolumes : 1; // 0x22d
	char bEnableWorldOriginRebasing : 1; // 0x22d
	char bWorldGravitySet : 1; // 0x22e
	char bGlobalGravitySet : 1; // 0x22e
	char bMinimizeBSPSections : 1; // 0x22e
	char bForceNoPrecomputedLighting : 1; // 0x22e
	char bHighPriorityLoading : 1; // 0x22e
	char bHighPriorityLoadingLocal : 1; // 0x22e
	char bOverrideDefaultBroadphaseSettings : 1; // 0x22e
	UNavigationSystemConfig* NavigationSystemConfig; // 0x230
	UNavigationSystemConfig* NavigationSystemConfigOverride; // 0x238
	float WorldToMeters; // 0x240
	float KillZ; // 0x244
	UDamageType* KillZDamageType; // 0x248
	float WorldGravityZ; // 0x250
	float GlobalGravityZ; // 0x254
	ADefaultPhysicsVolume* DefaultPhysicsVolumeClass; // 0x258
	UPhysicsCollisionHandler* PhysicsCollisionHandlerClass; // 0x260
	AGameModeBase* DefaultGameMode; // 0x268
	AGameNetworkManager* GameNetworkManagerClass; // 0x270
	int32_t PackedLightAndShadowMapTextureSize; // 0x278
	FVector DefaultColorScale; // 0x27c
	float DefaultMaxDistanceFieldOcclusionDistance; // 0x288
	float GlobalDistanceFieldViewDistance; // 0x28c
	float DynamicIndirectShadowsSelfShadowingIntensity; // 0x290
	FReverbSettings DefaultReverbSettings; // 0x298
	FInteriorSettings DefaultAmbientZoneSettings; // 0x2b8
	float MonoCullingDistance; // 0x2dc
	USoundMix* DefaultBaseSoundMix; // 0x2e0
	float TimeDilation; // 0x2e8
	float MatineeTimeDilation; // 0x2ec
	float DemoPlayTimeDilation; // 0x2f0
	float MinGlobalTimeDilation; // 0x2f4
	float MaxGlobalTimeDilation; // 0x2f8
	float MinUndilatedFrameTime; // 0x2fc
	float MaxUndilatedFrameTime; // 0x300
	FBroadphaseSettings BroadphaseSettings; // 0x304
	APlayerState* Pauser; // 0x348
	TArray<FNetViewer> ReplicationViewers; // 0x350
	TArray<UAssetUserData*> AssetUserData; // 0x360
	APlayerState* PauserPlayerState; // 0x370
	int32_t MaxNumberOfBookmarks; // 0x378
	UBookmarkBase* DefaultBookmarkClass; // 0x380
	TArray<UBookmarkBase*> BookmarkArray; // 0x388
	UBookmarkBase* LastBookmarkClass; // 0x398
};

struct ABP_OceanologyAdvanced_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UStaticMeshComponent* Distance; // 0x228
	UInfinite_Compound* Infinite_Compound; // 0x230
	USceneComponent* Scene; // 0x238
	UStaticMeshComponent* Ocean; // 0x240
	USphereComponent* Caustics Level ; // 0x248
	float Ocean Level; // 0x250
	FGlobal_Displacement GlobalDisplacement; // 0x254
	FBaseOffset BaseOffset; // 0x268
	Max_Waves Max_Waves; // 0x284
	FVector World Position; // 0x288
	FVector Height; // 0x294
	ShadingMode Shading Mode; // 0x2a0
	UMaterialInstanceDynamic* Ocean surface; // 0x2a8
	FWave_2  ; // 0x2b0
	FWave_3  ; // 0x2c4
	FWave_4  ; // 0x2d8
	FWave_5  ; // 0x2ec
	bool Use Distance Field; // 0x300
	FDistance_Field Distance_Field; // 0x304
	FTessellation Tessellation; // 0x314
	FSurface_Light Surface_Light; // 0x320
	FFoam_Generator Foam_Generator; // 0x350
	FRefraction Refraction; // 0x3b8
	UMaterialInstance* Custom_01; // 0x3d0
	UMaterialInstance* Custom_02; // 0x3d8
};

struct UPawnAction_Move : UPawnAction {
	AActor* GoalActor; // 0x98
	FVector GoalLocation; // 0xa0
	float AcceptableRadius; // 0xac
	UNavigationQueryFilter* FilterClass; // 0xb0
	char bAllowStrafe : 1; // 0xb8
	char bFinishOnOverlap : 1; // 0xb8
	char bUsePathfinding : 1; // 0xb8
	char bAllowPartialPath : 1; // 0xb8
	char bProjectGoalToNavigation : 1; // 0xb8
	char bUpdatePathToGoal : 1; // 0xb8
	char bAbortChildActionOnPathChange : 1; // 0xb8
};

struct UCloudWatchLogsDeleteLogGroup : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct AMagicLeapARPinInfoActorBase : AActor {
	FGuid PinId; // 0x220
	bool bVisibilityOverride; // 0x230
};

struct UBlackboardComponent : UActorComponent {
	UBrainComponent* BrainComp; // 0xb0
	UBlackboardData* DefaultBlackboardAsset; // 0xb8
	UBlackboardData* BlackboardAsset; // 0xc0
	TArray<UBlackboardKeyType*> KeyInstances; // 0xe8
};

struct UParticleModuleColorOverLife : UParticleModuleColorBase {
	FRawDistributionVector ColorOverLife; // 0x30
	FRawDistributionFloat AlphaOverLife; // 0x78
	char bClampAlpha : 1; // 0xa8
};

struct UMovieSceneEnumSection : UMovieSceneSection {
	FMovieSceneByteChannel EnumCurve; // 0xe8
};

struct UBTDecorator_BlackboardBase : UBTDecorator {
	FBlackboardKeySelector BlackboardKey; // 0x68
};

struct UMaterialExpressionDistance : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UActorSequenceComponent : UActorComponent {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0xb0
	UActorSequence* Sequence; // 0xc8
	UActorSequencePlayer* SequencePlayer; // 0xd0
};

struct UGizmoAxisRotationParameterSource : UGizmoBaseFloatParameterSource {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90
	TScriptInterface<IGizmoTransformSource> TransformSource; // 0xa0
	float Angle; // 0xb0
	FGizmoFloatParameterChange LastChange; // 0xb4
	FVector CurRotationAxis; // 0xbc
	FVector CurRotationOrigin; // 0xc8
	FTransform InitialTransform; // 0xe0
};

struct ABP_WindowFrameWallBase_C : ABP_WallBuildPartBase_C {
	UBP_BuildJointComponent_C* WindowSocket; // 0x8e0
};

struct UAISenseConfig_Sight : UAISenseConfig {
	UAISense_Sight* Implementation; // 0x48
	float SightRadius; // 0x50
	float LoseSightRadius; // 0x54
	float PeripheralVisionAngleDegrees; // 0x58
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x5c
	float AutoSuccessRangeFromLastSeenLocation; // 0x60
	float PointOfViewBackwardOffset; // 0x64
	float NearClippingRadius; // 0x68
};

struct UImgMediaSource : UBaseMediaSource {
	FFrameRate FrameRateOverride; // 0x88
	FString ProxyOverride; // 0x90
	FDirectoryPath SequencePath; // 0xa0
};

struct UParticleModuleVelocityOverLifetime : UParticleModuleVelocityBase {
	FRawDistributionVector VelOverLife; // 0x38
	char Absolute : 1; // 0x80
};

struct APrecomputedVisibilityOverrideVolume : AVolume {
	TArray<AActor*> OverrideVisibleActors; // 0x258
	TArray<AActor*> OverrideInvisibleActors; // 0x268
	TArray<FName> OverrideInvisibleLevels; // 0x278
};

struct UWBP_Button_Menu_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* Button; // 0x268
	UImage* Image_Cover; // 0x270
	UImage* Image_Cover_2; // 0x278
	UTextBlock* Text; // 0x280
	UTextBlock* Text_2; // 0x288
	FMulticastInlineDelegate OnButtonClicked; // 0x290
	FText Name; // 0x2a0
	FString Key; // 0x2b8
	FString Additional Key; // 0x2c8
};

struct UUserDefinedEnum : UEnum {
	TMap<FName, FText> DisplayNameMap; // 0x60
};

struct AItemPickup : AActor {
	UCapsuleComponent* CapsuleComponent; // 0x220
};

struct UButton : UContentWidget {
	USlateWidgetStyleAsset* Style; // 0x120
	FButtonStyle WidgetStyle; // 0x128
	FLinearColor ColorAndOpacity; // 0x3a0
	FLinearColor BackgroundColor; // 0x3b0
	EButtonClickMethod ClickMethod; // 0x3c0
	EButtonTouchMethod TouchMethod; // 0x3c1
	EButtonPressMethod PressMethod; // 0x3c2
	bool IsFocusable; // 0x3c3
	FMulticastInlineDelegate OnClicked; // 0x3c8
	FMulticastInlineDelegate OnPressed; // 0x3d8
	FMulticastInlineDelegate OnReleased; // 0x3e8
	FMulticastInlineDelegate OnHovered; // 0x3f8
	FMulticastInlineDelegate OnUnhovered; // 0x408
};

struct UWBP_Radiogram_4020303_C : UUserWidget {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x260
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x268
	UWBP_RadiogramListing_C* WBP_RadiogramListing_2; // 0x270
	UWBP_RadiogramListing_C* WBP_RadiogramListing_3; // 0x278
	UWBP_RadiogramListing_C* WBP_RadiogramListing_4; // 0x280
};

struct ACineCameraActor : ACameraActor {
	FCameraLookatTrackingSettings LookatTrackingSettings; // 0x7a0
};

struct UXRVisualizationFunctionLibrary : UBlueprintFunctionLibrary {
	UXRVisualizationLoadHelper* LoadHelper; // 0x28
};

struct UNavigationGraphNodeComponent : USceneComponent {
	FNavGraphNode Node; // 0x1f8
	UNavigationGraphNodeComponent* NextNodeComponent; // 0x210
	UNavigationGraphNodeComponent* PrevNodeComponent; // 0x218
};

struct ABP_Flare_NPCDrone_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UMaterialBillboardComponent* Flare; // 0x228
	UTexture* SubFlareTexture; // 0x230
	FLinearColor SubFlareColor; // 0x238
	float SubFlareIntensity; // 0x248
	float SubFlarePowExp; // 0x24c
	float SubFlareSize; // 0x250
	UTexture* SubFlare2Texture; // 0x258
	FLinearColor SubFlare2Color; // 0x260
	float SubFlare2Intensity; // 0x270
	float SubFlare2Size; // 0x274
	float SubFlare2PowExp; // 0x278
	UTexture* AnamorphicTexture; // 0x280
	float AnamorphicFlareInnerRadius; // 0x288
	float AnamorphicFlareInnerDensity; // 0x28c
	float AnamorphicFlareIntensity; // 0x290
	FLinearColor AnamorphicFlareInnerColor; // 0x294
	float AnamorphicFlarePowExp; // 0x2a4
	float AnamorphicFlareSizeFactor; // 0x2a8
	UTexture* HaloTexture; // 0x2b0
	float HaloInnerRadius; // 0x2b8
	float HaloIntensity; // 0x2bc
	float HaloPowExp; // 0x2c0
	FLinearColor HaloInnerColor; // 0x2c4
	FLinearColor HaloOuterColor; // 0x2d4
	UTexture* SubHaloTexture; // 0x2e8
	float SubHaloInnerRadius; // 0x2f0
	float SubHaloIntensity; // 0x2f4
	FLinearColor SubHaloColor; // 0x2f8
	float SubHaloPowExp; // 0x308
	FLinearColor AnamorphicFlareOuterColor; // 0x30c
	float FadeDistance; // 0x31c
};

struct UWBP_HUD_Action_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Refresh; // 0x268
	UWidgetAnimation* Anim_Vehicle_Empty; // 0x270
	UImage* FireType; // 0x278
	UImage* Image_9; // 0x280
	UImage* Image_13; // 0x288
	UImage* Image_86; // 0x290
	UImage* Image_90; // 0x298
	UImage* Image_162; // 0x2a0
	UImage* Image_228; // 0x2a8
	UImage* Image_347; // 0x2b0
	UImage* Image_Seat_2; // 0x2b8
	UImage* Image_Seat_3; // 0x2c0
	UImage* Image_Seat_4; // 0x2c8
	UImage* Image_Seat_5; // 0x2d0
	UImage* State; // 0x2d8
	UTextBlock* Text_Ammo; // 0x2e0
	UTextBlock* Text_AmmoTotal; // 0x2e8
	UTextBlock* Text_VehicleSpeed; // 0x2f0
	UProgressBar* VehicleHP; // 0x2f8
	UProgressBar* VehicleHP_2; // 0x300
	UVerticalBox* VerticalBox_ActionGuide; // 0x308
	UWBP_HUD_ActionMain_C* WBP_HUD_ActionMain; // 0x310
	UWBP_HUD_ActionSub_C* WBP_HUD_ActionSub; // 0x318
	UWBP_HUD_Held_InteractionListing_C* WBP_HUD_Held_InteractionListing_Hand; // 0x320
	UWBP_Key_C* WBP_Key_FireMode; // 0x328
	UWidgetSwitcher* WidgetSwitcher_Action; // 0x330
	UWidgetSwitcher* WidgetSwitcher_Held; // 0x338
	UWidgetSwitcher* WidgetSwitcher_Vehicle; // 0x340
	UCanvasPanel* WS_Action_Hand; // 0x348
	UCanvasPanel* WS_Action_Holdable; // 0x350
	UCanvasPanel* WS_Action_Vehicle; // 0x358
	UGridPanel* WS_Held_Empty; // 0x360
	UGridPanel* WS_Held_RangeWeapon; // 0x368
	UGridPanel* WS_Vehicle_Dynamo; // 0x370
	UBP_PlayerInventoryComponent_C* Player Inventory Component; // 0x378
	UWidget* ActiveWidget; // 0x380
	int32_t TempVehicleBattery; // 0x388
	int32_t TempVehicleHealth; // 0x38c
	int32_t TempVehicleSpeed; // 0x390
	int32_t TempAmmo; // 0x394
	UWBP_HoldableGuideUIBase_C* HoldableGuideUI; // 0x398
	bool bIsLMBWidgetDefault; // 0x3a0
	E_MechanicArmMode Mechanic Arm Mode; // 0x3a1
	AHoldableBase* Current Holdable; // 0x3a8
	int32_t CurrentAmmo_Total; // 0x3b0
};

struct USoundWave : USoundBase {
	int32_t CompressionQuality; // 0x1b8
	int32_t StreamingPriority; // 0x1bc
	ESoundwaveSampleRateSettings SampleRateQuality; // 0x1c0
	ESoundGroup SoundGroup; // 0x1c2
	char bLooping : 1; // 0x1c3
	char bStreaming : 1; // 0x1c3
	char bSeekableStreaming : 1; // 0x1c3
	ESoundWaveLoadingBehavior LoadingBehavior; // 0x1c4
	char bMature : 1; // 0x1c5
	char bManualWordWrap : 1; // 0x1c5
	char bSingleLine : 1; // 0x1c6
	char bIsAmbisonics : 1; // 0x1c6
	TArray<float> FrequenciesToAnalyze; // 0x1c8
	TArray<FSoundWaveSpectralTimeData> CookedSpectralTimeData; // 0x1d8
	TArray<FSoundWaveEnvelopeTimeData> CookedEnvelopeTimeData; // 0x1e8
	int32_t InitialChunkSize; // 0x1f8
	FString SpokenText; // 0x240
	float SubtitlePriority; // 0x250
	float Volume; // 0x254
	float Pitch; // 0x258
	int32_t NumChannels; // 0x25c
	int32_t SampleRate; // 0x260
	TArray<FSubtitleCue> Subtitles; // 0x270
	UCurveTable* Curves; // 0x280
	UCurveTable* InternalCurves; // 0x288
};

struct UOnlineBeaconsSettings : UObject {
	int32_t ListenPort; // 0x28
	float InitialTimeout; // 0x2c
	float Timeout; // 0x30
	FName NetDriverClass; // 0x34
	FName NetDriverFallbackClass; // 0x3c
};

struct UMovieSceneCinematicShotSection : UMovieSceneSubSection {
	FString ShotDisplayName; // 0x160
	FText DisplayName; // 0x170
};

struct UGetUserPrivilegeCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct USurvivalCharacterMovementComponent : UCharacterMovementComponent {
	bool bStopTickComponent; // 0xb04
};

struct USpotLightComponent : UPointLightComponent {
	float InnerConeAngle; // 0x358
	float OuterConeAngle; // 0x35c
};

struct UParticleModuleParameterDynamic : UParticleModuleParameterBase {
	TArray<FEmitterDynamicParameter> DynamicParams; // 0x30
	int32_t UpdateFlags; // 0x40
	char bUsesVelocity : 1; // 0x44
};

struct UStaticMesh : UStreamableRenderAsset {
	FPerPlatformInt MinLOD; // 0x80
	float LpvBiasMultiplier; // 0x84
	TArray<FStaticMaterial> StaticMaterials; // 0x88
	float LightmapUVDensity; // 0x98
	int32_t LightMapResolution; // 0x9c
	int32_t LightMapCoordinateIndex; // 0xa0
	float DistanceFieldSelfShadowBias; // 0xa4
	UBodySetup* BodySetup; // 0xa8
	int32_t LODForCollision; // 0xb0
	char bGenerateMeshDistanceField : 1; // 0xb4
	char bStripComplexCollisionForConsole : 1; // 0xb4
	char bHasNavigationData : 1; // 0xb4
	char bSupportUniformlyDistributedSampling : 1; // 0xb4
	char bSupportPhysicalMaterialMasks : 1; // 0xb4
	char bIsBuiltAtRuntime : 1; // 0xb4
	char bAllowCPUAccess : 1; // 0xb4
	char bSharedCookedData : 1; // 0xb5
	char bSupportGpuUniformlyDistributedSampling : 1; // 0xb5
	TArray<UStaticMeshSocket*> Sockets; // 0xd8
	FVector PositiveBoundsExtension; // 0xf8
	FVector NegativeBoundsExtension; // 0x104
	FBoxSphereBounds ExtendedBounds; // 0x110
	int32_t ElementToIgnoreForTexFactor; // 0x12c
	TArray<UAssetUserData*> AssetUserData; // 0x130
	UObject* EditableMesh; // 0x140
	UNavCollisionBase* NavCollision; // 0x148
};

struct UWBP_Radiogram_6010105_C : UWBP_radiogram_CustomBase_C {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x298
	UTextBlock* TextBlock; // 0x2a0
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x2a8
	UWBP_RadiogramListing_C* WBP_RadiogramListing_2; // 0x2b0
	UWBP_RadiogramListing_C* WBP_RadiogramListing_3; // 0x2b8
	UWBP_RadiogramListing_C* WBP_RadiogramListing_4; // 0x2c0
	UWBP_RadiogramListing_C* WBP_RadiogramListing_5; // 0x2c8
	UWBP_RadiogramListing_C* WBP_RadiogramListing_6; // 0x2d0
};

struct UActorComponent : UObject {
	FActorComponentTickFunction PrimaryComponentTick; // 0x30
	TArray<FName> ComponentTags; // 0x60
	TArray<UAssetUserData*> AssetUserData; // 0x70
	int32_t UCSSerializationIndex; // 0x84
	char bNetAddressable : 1; // 0x88
	char bReplicates : 1; // 0x88
	char bAutoActivate : 1; // 0x89
	char bIsActive : 1; // 0x8a
	char bEditableWhenInherited : 1; // 0x8a
	char bCanEverAffectNavigation : 1; // 0x8a
	char bIsEditorOnly : 1; // 0x8a
	EComponentCreationMethod CreationMethod; // 0x8c
	FMulticastSparseDelegate OnComponentActivated; // 0x8d
	FMulticastSparseDelegate OnComponentDeactivated; // 0x8e
	TArray<FSimpleMemberReference> UCSModifiedProperties; // 0x90
};

struct ULayer : UObject {
	FName LayerName; // 0x28
	char bIsVisible : 1; // 0x30
	TArray<FLayerActorStats> ActorStats; // 0x38
};

struct UIntervalGizmo : UInteractiveGizmo {
	UGizmoTransformChangeStateTarget* StateTarget; // 0x38
	UTransformProxy* TransformProxy; // 0x50
	TArray<UPrimitiveComponent*> ActiveComponents; // 0x58
	TArray<UInteractiveGizmo*> ActiveGizmos; // 0x68
	UGizmoComponentAxisSource* AxisYSource; // 0x90
	UGizmoComponentAxisSource* AxisZSource; // 0x98
};

struct UWBP_HUD_Notice_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Play; // 0x268
	UTextBlock* Text_Notice; // 0x270
	FText NoticeText; // 0x278
	bool ApearAnim; // 0x290
	bool DoCountDown; // 0x291
	float EndTime; // 0x294
	FFloatValueFromDataTable GameTimeMultiplier; // 0x298
	FTimerHandle TimerCountDown; // 0x2c0
};

struct ABP_ConsumeHoldable_C : AConsumeHoldableBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4a0
	float CastStartTime_Local; // 0x4a8
	bool CanUnheldBySameItem; // 0x4ac
};

struct URig : UObject {
	TArray<FTransformBase> TransformBases; // 0x30
	TArray<FNode> Nodes; // 0x40
};

struct UTexture2D : UTexture {
	int32_t LevelIndex; // 0xd8
	int32_t FirstResourceMemMip; // 0xdc
	char bTemporarilyDisableStreaming : 1; // 0xe0
	TextureAddress AddressX; // 0xe1
	TextureAddress AddressY; // 0xe2
	FIntPoint ImportedSize; // 0xe4
};

struct APlayerCameraManager : AActor {
	APlayerController* PCOwner; // 0x220
	USceneComponent* TransformComponent; // 0x228
	float DefaultFOV; // 0x238
	float DefaultOrthoWidth; // 0x240
	float DefaultAspectRatio; // 0x248
	FCameraCacheEntry CameraCache; // 0x290
	FCameraCacheEntry LastFrameCameraCache; // 0x880
	FTViewTarget ViewTarget; // 0xe70
	FTViewTarget PendingViewTarget; // 0x1470
	FCameraCacheEntry CameraCachePrivate; // 0x1aa0
	FCameraCacheEntry LastFrameCameraCachePrivate; // 0x2090
	TArray<UCameraModifier*> ModifierList; // 0x2680
	TArray<UCameraModifier*> DefaultModifiers; // 0x2690
	float FreeCamDistance; // 0x26a0
	FVector FreeCamOffset; // 0x26a4
	FVector ViewTargetOffset; // 0x26b0
	FMulticastInlineDelegate OnAudioFadeChangeEvent; // 0x26c0
	TArray<AEmitterCameraLensEffectBase*> CameraLensEffects; // 0x26e0
	UCameraModifier_CameraShake* CachedCameraShakeMod; // 0x26f0
	UCameraAnimInst* AnimInstPool[0x8]; // 0x26f8
	TArray<FPostProcessSettings> PostProcessBlendCache; // 0x2738
	TArray<UCameraAnimInst*> ActiveAnims; // 0x2758
	TArray<UCameraAnimInst*> FreeAnims; // 0x2768
	ACameraActor* AnimCameraActor; // 0x2778
	char bIsOrthographic : 1; // 0x2780
	char bDefaultConstrainAspectRatio : 1; // 0x2780
	char bClientSimulatingViewTarget : 1; // 0x2780
	char bUseClientSideCameraUpdates : 1; // 0x2780
	char bGameCameraCutThisFrame : 1; // 0x2781
	float ViewPitchMin; // 0x2784
	float ViewPitchMax; // 0x2788
	float ViewYawMin; // 0x278c
	float ViewYawMax; // 0x2790
	float ViewRollMin; // 0x2794
	float ViewRollMax; // 0x2798
	float ServerUpdateCameraTimeout; // 0x27a0
};

struct ABP_SkillBase_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	USceneComponent* DefaultSceneRoot; // 0x228
	float CoolTime; // 0x230
	FS_SkillStruct Skill; // 0x238
	float LastActivationTime; // 0x268
	BP_SurvivalCharacter_C* Character; // 0x270
	int32_t Idx; // 0x278
	TArray<UBP_SkillAcitvationConditionBase_C*> ConditionList; // 0x280
	bool IsActivation; // 0x290
	TArray<UBP_SkillActionTaskBase_C*> SkillTasks; // 0x298
	float StartEnergyCost; // 0x2a8
	int32_t UID; // 0x2ac
};

struct UImage : UWidget {
	FSlateBrush Brush; // 0x108
	FDelegate BrushDelegate; // 0x190
	FLinearColor ColorAndOpacity; // 0x1a0
	FDelegate ColorAndOpacityDelegate; // 0x1b0
	bool bFlipForRightToLeftFlowDirection; // 0x1c0
	FDelegate OnMouseButtonDownEvent; // 0x1c4
};

struct UMovieSceneEventTrack : UMovieSceneNameableTrack {
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	EFireEventsAtPosition EventPosition; // 0x84
	TArray<UMovieSceneSection*> Sections; // 0x88
};

struct UGetRecentPlayersCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct AOnlineBeaconHost : AOnlineBeacon {
	int32_t ListenPort; // 0x250
	TArray<AOnlineBeaconClient*> ClientActors; // 0x258
};

struct UCloudWatchLogsDeleteLogStream : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct ABP_StairLBuildPart_C : ABP_StaticMeshBuildPartBase_C {
	UBP_BuildJointComponent_C* Bolt; // 0x860
};

struct UWBP_Slot_Inventory_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border; // 0x268
	UCanvasPanel* CanvasPanel_Slot; // 0x270
	UHorizontalBox* HorizontalBox_Attachment; // 0x278
	UImage* Image_Able; // 0x280
	UImage* Image_AttachmentGrip; // 0x288
	UImage* Image_AttachmentMagazine; // 0x290
	UImage* Image_AttachmentMuzzle; // 0x298
	UImage* Image_AttachmentSight; // 0x2a0
	UImage* Image_Broken; // 0x2a8
	UImage* Image_Item; // 0x2b0
	UImage* Image_Selected; // 0x2b8
	UImage* Image_Tier; // 0x2c0
	UImage* Image_Unique; // 0x2c8
	UProgressBar* ProgressBar_Condition; // 0x2d0
	USizeBox* SizeBox_1; // 0x2d8
	UImage* State_EMP; // 0x2e0
	UTextBlock* Text_Amount; // 0x2e8
	UTextBlock* Text_Slot; // 0x2f0
	UWBP_UI_SlotHovering_C* WBP_UI_SlotHovering; // 0x2f8
	bool Mouse Over; // 0x300
	FItemInventory Item; // 0x308
	UBP_PlayerInventoryComponent_C* Inventory Component; // 0x340
	FVector2D Slot Size; // 0x348
	float Tooltip Delay; // 0x350
	bool Selected; // 0x354
	bool Allow Selection; // 0x355
	int32_t Slot Number; // 0x358
	bool UseInGameUI; // 0x35c
	bool IsDoubleClick; // 0x35d
	FItemGeneralInfo generalinfo; // 0x360
	bool bInteraction; // 0x4b0
	bool bBreakable; // 0x4b1
	FProgressBarStyle ConditionStyle_Default; // 0x4b8
	FProgressBarStyle ConidtionStyle_Consumable; // 0x658
	bool bUseCondition; // 0x7f8
	FTimerHandle StateOverlayTimer; // 0x800
	bool UseArchiveItem; // 0x808
	FArchiveItemInfo ArchiveItem; // 0x810
	float TempCondition; // 0x878
	float CurrentCondition; // 0x87c
	TArray<FDataTableRowHandle> HighlightUIDArray; // 0x880
};

struct ABP_Survival_Sky_Sphere_C : AActor {
	UStaticMeshComponent* SkySphereMesh; // 0x220
	USceneComponent* Base; // 0x228
	UMaterialInstanceDynamic* Sky material; // 0x230
	bool Refresh material; // 0x238
	ADirectionalLight* Directional light actor; // 0x240
	bool Colors determined by sun position; // 0x248
	float Sun height; // 0x24c
	float Sun brightness; // 0x250
	float Horizon falloff; // 0x254
	FLinearColor Zenith Color; // 0x258
	FLinearColor Horizon color; // 0x268
	FLinearColor Cloud color; // 0x278
	FLinearColor Overall Color; // 0x288
	float Cloud speed; // 0x298
	float Cloud opacity; // 0x29c
	float Stars brightness; // 0x2a0
	UCurveLinearColor* Horizon color curve; // 0x2a8
	UCurveLinearColor* Zenith color curve; // 0x2b0
	UCurveLinearColor* Cloud color curve; // 0x2b8
};

struct UWBP_Radiogram_6010210_C : UWBP_radiogram_CustomBase_C {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x298
	UTextBlock* TextBlock; // 0x2a0
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x2a8
	UWBP_RadiogramListing_C* WBP_RadiogramListing_2; // 0x2b0
	UWBP_RadiogramListing_C* WBP_RadiogramListing_3; // 0x2b8
};

struct UWBP_HUD_Event_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Notification; // 0x268
	UWidgetAnimation* Anim_Alarm; // 0x270
	UBorder* Border_Alarm; // 0x278
	UTextBlock* Count; // 0x280
	UImage* dot1; // 0x288
	UImage* dot2; // 0x290
	UImage* Image_2; // 0x298
	UImage* Image_3; // 0x2a0
	UImage* Image_63; // 0x2a8
	UImage* Image_110; // 0x2b0
	UImage* Image_293; // 0x2b8
	UImage* Image_Tint; // 0x2c0
	UVerticalBox* RadiogramObjectiveList; // 0x2c8
	UTextBlock* TextBlock; // 0x2d0
	UTextBlock* TextBlock_Name; // 0x2d8
	UVerticalBox* VerticalBox; // 0x2e0
	UWBP_Key_C* WBP_Key; // 0x2e8
	TMap<UWBP_ObjectiveBase_C*, int32_t> RememberdIndex; // 0x2f0
	TMap<AActor*, UWBP_ObjectiveBase_C*> ObjectRefs; // 0x340
	FIntPair NewestRadiorgam; // 0x390
	UWBP_RadiogramObjectiveMain_C* RadiogramMenu; // 0x398
	UWBP_TutorialQuestMain_C* TutorialObjective; // 0x3a0
};

struct USVCH_Male_TP_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_34; // 0x2c8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_17; // 0x2f0
	FAnimNode_Slot AnimGraphNode_Slot_10; // 0x3b0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_14; // 0x3f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_33; // 0x550
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_13; // 0x5d0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_33; // 0x728
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_4; // 0x750
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_8; // 0x8e0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_8; // 0x900
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_32; // 0x920
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_3; // 0x9c0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_31; // 0xb50
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_12; // 0xbf0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_30; // 0xd48
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_23; // 0xde8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_22; // 0xe10
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_21; // 0xe38
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_20; // 0xe60
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_19; // 0xe88
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18; // 0xeb0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17; // 0xed8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0xf00
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0xf28
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0xf50
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0xf78
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0xfa0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0xfc8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0xff0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x1018
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x1040
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x1068
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x1090
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x10b8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x10e0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x1108
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x1130
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1158
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_32; // 0x1180
	FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x1200
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_31; // 0x1230
	FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x12b0
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x12e0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_16; // 0x1330
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x13f0
	FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x1440
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_7; // 0x1470
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_7; // 0x1490
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x14b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_30; // 0x15b8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_15; // 0x1638
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_8; // 0x16f8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_29; // 0x17e0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_7; // 0x1880
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_28; // 0x1968
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_6; // 0x1a08
	FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x1af0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_6; // 0x1b20
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6; // 0x1b40
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x1b60
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_29; // 0x1c68
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_14; // 0x1ce8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_28; // 0x1da8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_27; // 0x1e28
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_27; // 0x1ec8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_26; // 0x1f48
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_26; // 0x1fe8
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x2068
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_13; // 0x2098
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_25; // 0x2158
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_25; // 0x21d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_24; // 0x2278
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_24; // 0x22f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_23; // 0x2398
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_22; // 0x2418
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_23; // 0x2498
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_21; // 0x2538
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x25b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_20; // 0x25e8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_12; // 0x2668
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_19; // 0x2728
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_22; // 0x27a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_18; // 0x2848
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x28c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_17; // 0x28f8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_11; // 0x2978
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_16; // 0x2a38
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_21; // 0x2ab8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15; // 0x2b58
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x2bd8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14; // 0x2c08
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_20; // 0x2c88
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5; // 0x2d28
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_5; // 0x2d48
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x2d68
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_10; // 0x2e70
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13; // 0x2f30
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0x2fb0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0x3030
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_19; // 0x30b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x3150
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_18; // 0x31d0
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x3270
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5; // 0x32a0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_17; // 0x3388
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4; // 0x3428
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4; // 0x3448
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x3468
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x3570
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_9; // 0x35f0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4; // 0x36b0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; // 0x3798
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_16; // 0x3880
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x3920
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_15; // 0x3a08
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3aa8
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x3ad8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x3b88
	FAnimNode_Slot AnimGraphNode_Slot_9; // 0x3c08
	FAnimNode_Slot AnimGraphNode_Slot_8; // 0x3c50
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_32; // 0x3c98
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_11; // 0x3cc0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_8; // 0x3e18
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_31; // 0x3ed8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_30; // 0x3f00
	FAnimNode_Slot AnimGraphNode_Slot_7; // 0x3f28
	FAnimNode_Slot AnimGraphNode_Slot_6; // 0x3f70
	FAnimNode_Fabrik AnimGraphNode_Fabrik_3; // 0x3fc0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_10; // 0x4150
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_29; // 0x42a8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_28; // 0x42d0
	FAnimNode_Slot AnimGraphNode_Slot_5; // 0x42f8
	FAnimNode_Root AnimGraphNode_Root_2; // 0x4340
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_27; // 0x4370
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_26; // 0x4398
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_25; // 0x43c0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_9; // 0x43e8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_8; // 0x4540
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_24; // 0x4698
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_14; // 0x46c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_23; // 0x4760
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_22; // 0x4788
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_7; // 0x47b0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_7; // 0x4908
	FAnimNode_Slot AnimGraphNode_Slot_4; // 0x49c8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_13; // 0x4a10
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_21; // 0x4ab0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_6; // 0x4ad8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_20; // 0x4b98
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_12; // 0x4bc0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x4c60
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_11; // 0x4ce0
	FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x4d80
	FAnimNode_Slot AnimGraphNode_Slot_3; // 0x4e98
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_19; // 0x4ee0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_18; // 0x4f08
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_17; // 0x4f30
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_6; // 0x4f58
	FAnimNode_DragonFeetSolver AnimGraphNode_DragonFeetSolver; // 0x50b0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5; // 0x5700
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_10; // 0x5858
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_16; // 0x58f8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_15; // 0x5920
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_14; // 0x5948
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x5970
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_13; // 0x59b8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_5; // 0x59e0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_12; // 0x5aa0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_9; // 0x5ac8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x5b68
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_11; // 0x5bb0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0x5bd8
	FAnimNode_DragonSpineSolver AnimGraphNode_DragonSpineSolver; // 0x5d30
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x6510
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_8; // 0x6668
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_10; // 0x6708
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_9; // 0x6730
	FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer; // 0x6758
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_7; // 0x6808
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_4; // 0x68a8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3; // 0x6968
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x6988
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6; // 0x6a08
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8; // 0x6aa8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3; // 0x6ad0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x6b90
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_3; // 0x6c10
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3; // 0x6cd8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0x6cf8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; // 0x6d20
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x6dc0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x6e60
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_2; // 0x6fb8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x7088
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x7108
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x71f0
	FAnimNode_Fabrik AnimGraphNode_Fabrik_2; // 0x7290
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x7420
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x7440
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_2; // 0x7460
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x7528
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x7680
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x76a8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x76d0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x7770
	FAnimNode_Fabrik AnimGraphNode_Fabrik; // 0x77a0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x7930
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x7950
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x7970
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x7a38
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x7ad8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x7b00
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x7b28
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x7be8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_2; // 0x7c68
	FAnimNode_Root AnimGraphNode_Root; // 0x7df8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x7e28
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive; // 0x7e50
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x7f20
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x7fa0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x8060
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x80e0
	float Forward; // 0x8270
	bool NowInDediSvr; // 0x8274
	bool Player Dead; // 0x8275
	TArray<FDragonData_FootData> FootIKInfo; // 0x8278
	bool Is In Air; // 0x8288
	float FootIKBlendingAlpha; // 0x828c
	bool UseFookIK; // 0x8290
	bool Equipping; // 0x8291
	bool IsCasting; // 0x8292
	bool bIsPlayingSkillTasking; // 0x8293
	bool Reloading; // 0x8294
	bool bIsVault; // 0x8295
	FHoldableAnimation Holdable Animation; // 0x8298
	FS_RangeWeaponAnims Ranage Weapon Animations; // 0x8420
	float Yaw; // 0x84a8
	float Pitch; // 0x84ac
	bool bIsRangedWeaponAimed; // 0x84b0
	bool bPlayerWakeUp; // 0x84b1
	bool bIsRiding; // 0x84b2
	UAnimSequence* ThrowHoldingAnim; // 0x84b8
	bool Aimed; // 0x84c0
	bool bIsThrowWeapon; // 0x84c1
	UBlendSpaceBase* Empty Hands Aim Offset; // 0x84c8
	FTransform Left Hand Transform; // 0x84d0
	bool Holding Item; // 0x8500
	bool Use Left Hand Socket; // 0x8501
	float Direction; // 0x8504
	float Speed; // 0x8508
	float ADSSpeed; // 0x850c
	UBlendSpaceBase* Jog Character Blend Space; // 0x8510
	UAnimSequenceBase* Idle Character Animation; // 0x8518
	UAnimSequenceBase* Jump Start Character Animation; // 0x8520
	UAnimSequenceBase* Jump Loop Character Animation; // 0x8528
	UAnimSequenceBase* Jump Land Character Animation; // 0x8530
	UAnimSequenceBase* Crouch Idle Character Animation; // 0x8538
	UBlendSpaceBase* Crouch Character Blend Space; // 0x8540
	bool Jump Start End; // 0x8548
	bool Jump Land End; // 0x8549
	BP_MasterCharacter_C* Character; // 0x8550
	bool DoJump; // 0x8558
	AHoldableBase* Held Actor; // 0x8560
	bool Crouching; // 0x8568
	float Base Pitch; // 0x856c
	float Base Yaw; // 0x8570
	AWeaponBase* Master Weapon; // 0x8578
	bool bPlayerSleep; // 0x8580
	bool WithoutBlend; // 0x8581
	UBST_AnimationTask_C* AnimationTask; // 0x8588
	FString SkillAnimTaskName; // 0x8590
	float MaxJumpHight; // 0x85a0
	float LandingHight; // 0x85a4
	UCurveFloat* LandingSoundVolumeCurve; // 0x85a8
	bool bPlayerLieDown; // 0x85b0
	bool Enable Jump; // 0x85b1
	FMulticastInlineDelegate OnNotifyVaultJumpStarted; // 0x85b8
	FMulticastInlineDelegate OnNotifyVaultJumpEnded; // 0x85c8
	bool bCriticalLanding; // 0x85d8
	FName LeftHandSocketName; // 0x85dc
	bool bHasRangeWeaponAttachment; // 0x85e4
	UAnimSequenceBase* ForeGripHandAnimation; // 0x85e8
	float LeftHandMultifly; // 0x85f0
	float LeftHandAlpha; // 0x85f4
	bool IsMyCharacter; // 0x85f8
	AWeaponBase* Target Weapon; // 0x8600
	USkeletalMeshComponent* TargetSkelMesh; // 0x8608
	bool RightLean; // 0x8610
	bool LeftLean; // 0x8611
	bool NearWallHandUp; // 0x8612
	bool BlendNearWallAnimSeq; // 0x8613
	float DestBlandRatio; // 0x8614
	float HandUpBlendRatio; // 0x8618
	bool IsSwim; // 0x861c
};

struct UNiagaraDataInterfaceAudioSubmix : UNiagaraDataInterface {
	USoundSubmix* Submix; // 0x38
};

struct UNiagaraDataInterfaceGrid3D : UNiagaraDataInterfaceRWBase {
	FIntVector NumCells; // 0xd8
	float CellSize; // 0xe4
	int32_t NumCellsMaxAxis; // 0xe8
	ESetResolutionMethod SetResolutionMethod; // 0xec
	FVector WorldBBoxSize; // 0xf0
};

struct UWBP_DebugWidget_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* TextBlock_135; // 0x268
	BP_SurvivalCharacter_C* TSVC; // 0x270
};

struct ABP_WaterPoolBase_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UBoxComponent* WaterVolume; // 0x228
	UStaticMeshComponent* WaterSurface; // 0x230
	USceneComponent* Scene; // 0x238
	UMaterialInterface* Ocean Material; // 0x240
	float Water Scale X; // 0x248
	float Water Scale Y; // 0x24c
	float Wave Speed; // 0x250
	UMaterialInstanceDynamic* Water Material; // 0x258
	float Overall Water Scale; // 0x260
	float Variation Amount; // 0x264
	FLinearColor Primary Water Color; // 0x268
	FLinearColor Secondary Water Color; // 0x278
	float Base Opacity; // 0x288
	float Shore Depth; // 0x28c
	float Depth Scale; // 0x290
	FLinearColor Deep Water Color; // 0x294
	FLinearColor Shallow Water Color; // 0x2a4
	float RemainWater; // 0x2b4
	FVector EndLocation; // 0x2b8
	float TotalWater; // 0x2c4
	float InteractionDistance; // 0x2c8
	float RefillPerSecond; // 0x2cc
	FFloatValueFromDataTable ThirstGainRatioByWater; // 0x2d0
	float DrinkAmount; // 0x2f8
};

struct UCloudWatchLogsDescribeSubscriptionFilters : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UAssetExportTask : UObject {
	UObject* Object; // 0x28
	UExporter* Exporter; // 0x30
	FString Filename; // 0x38
	bool bSelected; // 0x48
	bool bReplaceIdentical; // 0x49
	bool bPrompt; // 0x4a
	bool bAutomated; // 0x4b
	bool bUseFileArchive; // 0x4c
	bool bWriteEmptyFiles; // 0x4d
	TArray<UObject*> IgnoreObjectList; // 0x50
	UObject* Options; // 0x60
	TArray<FString> Errors; // 0x68
};

struct UMaterialExpressionDistanceToNearestSurface : UMaterialExpression {
	FExpressionInput Position; // 0x40
};

struct UNiagaraDataInterfaceArrayFloat2 : UNiagaraDataInterfaceArray {
	TArray<FVector2D> FloatData; // 0x50
};

struct UResourceBatchData : UDataAsset {
	TMap<FString, FResourceBatchGroupData> Groups; // 0x30
	FString PreviewMapTexturePath; // 0x80
};

struct UWBP_Function_Crafting_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWBP_Button_Function_C* Button_Radiogram; // 0x268
	UVerticalBox* OptionBox; // 0x270
	UWBP_Button_Function_C* WBP_Button_Max; // 0x278
	UWBP_Button_Function_C* WBP_Button_x10; // 0x280
	UWBP_Button_Function_C* WBP_Button_x5; // 0x288
	bool Item Droppable; // 0x290
	E_ItemCategorys Item Category; // 0x291
	bool Item Stackable; // 0x292
	UBP_PlayerInventoryComponent_C* Inventory Component; // 0x298
	UWBP_InGameUI_C* InGameUI; // 0x2a0
	UWBP_Slot_Inventory_C* Slot Reference; // 0x2a8
	FS_CraftingRecipeData Crafting Recipe; // 0x2b0
	UBP_CraftingComponent_C* TargetCraftingComponent; // 0x2f0
};

struct APointLight : ALight {
	UPointLightComponent* PointLightComponent; // 0x230
};

struct UMaterialExpressionGIReplace : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput StaticIndirect; // 0x54
	FExpressionInput DynamicIndirect; // 0x68
};

struct UWBP_HUD_Interaction_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UOverlay* Overlay_Cursor; // 0x268
	UWBP_HUD_InteractionListing_C* WBP_HUD_InteractionListing_Build; // 0x270
	UWBP_HUD_InteractionListing_C* WBP_HUD_InteractionListing_Cancel; // 0x278
	UWBP_HUD_InteractionListing_C* WBP_HUD_InteractionListing_OpenRingUI; // 0x280
	UWBP_HUD_InteractionListing_C* WBP_HUD_InteractionListing_Rotate; // 0x288
	UWBP_HUD_Interaction_Target_C* WBP_InteractionGuideWidget; // 0x290
	UBP_PlayerInventoryComponent_C* Player Inventory Component; // 0x298
	AActor* TargetedActor; // 0x2a0
	UBP_PlayerBuildingComponent_C* Player Building Component; // 0x2a8
	FText TempTargetName; // 0x2b0
	FText CurrentTargetName; // 0x2c8
	bool bTempAble; // 0x2e0
	bool bCurrentAble; // 0x2e1
	bool bRotate; // 0x2e2
	bool bRide; // 0x2e3
	ESlateVisibility In Visibility; // 0x2e4
	E_MechanicArmMode Mechanic Arm Mode; // 0x2e5
	E_InteractionType CurrentAction; // 0x2e6
	ABP_BuildPartBase_C* As BP Build Part Base; // 0x2e8
};

struct ASurvivalGameMode : AGameMode {
	ASessionDataManager* SessionDataManager_Native; // 0x308
	bool NeedCustomize; // 0x310
	int32_t AdminPlayerSessionSlot; // 0x314
	UDataTable* BanNickNameDataTable; // 0x318
	UDataTable* BlackListUIDDataTable; // 0x320
	TArray<FString> BanNickNames; // 0x328
	TArray<FString> BlackListUIDs; // 0x338
	FSurvivalWorldSettings WorldSettings; // 0x348
	ASVTeamInfo* TeamClass; // 0x3e0
	TArray<ASVTeamInfo*> Teams; // 0x3e8
	float CheckInvaildTeamMemberInterval; // 0x3f8
};

struct USceneCaptureComponentCube : USceneCaptureComponent {
	UTextureRenderTargetCube* TextureTarget; // 0x2b0
	bool bCaptureRotation; // 0x2b8
	UTextureRenderTargetCube* TextureTargetLeft; // 0x2c0
	UTextureRenderTargetCube* TextureTargetRight; // 0x2c8
	UTextureRenderTarget2D* TextureTargetODS; // 0x2d0
	float IPD; // 0x2d8
};

struct USourceEffectEQPreset : USoundEffectSourcePreset {
	FSourceEffectEQSettings Settings; // 0xa0
};

struct USequenceCameraShakeCameraStandIn : UObject {
	float FieldOfView; // 0x30
};

struct USVWeaponPartsContent : USVItemPartsContent {
	EWeaponPartsType WeaponPartsType; // 0x48
};

struct UWBP_HUD_Casting_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UInvalidationBox* InvalidationBox_4; // 0x268
	UProgressBar* Progress_Casting; // 0x270
	UTextBlock* TB_Function; // 0x278
	UTextBlock* Text_CastingItem; // 0x280
	UTextBlock* Text_CastingTime; // 0x288
	UWBP_Key_C* WBP_Key; // 0x290
	UBP_PlayerInventoryComponent_C* Player Inventory Component; // 0x298
	AConsumeHoldableBase* Consume Holdable Base; // 0x2a0
	bool bCasting; // 0x2a8
	AHoldableBase* CurrentHoldable; // 0x2b0
};

struct ARecastNavMesh : ANavigationData {
	char bDrawTriangleEdges : 1; // 0x428
	char bDrawPolyEdges : 1; // 0x428
	char bDrawFilledPolys : 1; // 0x428
	char bDrawNavMeshEdges : 1; // 0x428
	char bDrawTileBounds : 1; // 0x428
	char bDrawPathCollidingGeometry : 1; // 0x428
	char bDrawTileLabels : 1; // 0x428
	char bDrawPolygonLabels : 1; // 0x428
	char bDrawDefaultPolygonCost : 1; // 0x429
	char bDrawLabelsOnPathNodes : 1; // 0x429
	char bDrawNavLinks : 1; // 0x429
	char bDrawFailedNavLinks : 1; // 0x429
	char bDrawClusters : 1; // 0x429
	char bDrawOctree : 1; // 0x429
	char bDrawOctreeDetails : 1; // 0x429
	char bDrawMarkedForbiddenPolys : 1; // 0x429
	char bDistinctlyDrawTilesBeingBuilt : 1; // 0x42a
	float DrawOffset; // 0x42c
	char bFixedTilePoolSize : 1; // 0x430
	int32_t TilePoolSize; // 0x434
	float TileSizeUU; // 0x438
	float CellSize; // 0x43c
	float CellHeight; // 0x440
	float AgentRadius; // 0x444
	float AgentHeight; // 0x448
	float AgentMaxSlope; // 0x44c
	float AgentMaxStepHeight; // 0x450
	float MinRegionArea; // 0x454
	float MergeRegionSize; // 0x458
	float MaxSimplificationError; // 0x45c
	int32_t MaxSimultaneousTileGenerationJobsCount; // 0x460
	int32_t TileNumberHardLimit; // 0x464
	int32_t PolyRefTileBits; // 0x468
	int32_t PolyRefNavPolyBits; // 0x46c
	int32_t PolyRefSaltBits; // 0x470
	FVector NavMeshOriginOffset; // 0x474
	float DefaultDrawDistance; // 0x480
	float DefaultMaxSearchNodes; // 0x484
	float DefaultMaxHierarchicalSearchNodes; // 0x488
	ERecastPartitioning RegionPartitioning; // 0x48c
	ERecastPartitioning LayerPartitioning; // 0x48d
	int32_t RegionChunkSplits; // 0x490
	int32_t LayerChunkSplits; // 0x494
	char bSortNavigationAreasByCost : 1; // 0x498
	char bPerformVoxelFiltering : 1; // 0x498
	char bMarkLowHeightAreas : 1; // 0x498
	char bUseExtraTopCellWhenMarkingAreas : 1; // 0x498
	char bFilterLowSpanSequences : 1; // 0x498
	char bFilterLowSpanFromTileCache : 1; // 0x498
	char bDoFullyAsyncNavDataGathering : 1; // 0x498
	char bUseBetterOffsetsFromCorners : 1; // 0x498
	char bStoreEmptyTileLayers : 1; // 0x499
	char bUseVirtualFilters : 1; // 0x499
	char bAllowNavLinkAsPathEnd : 1; // 0x499
	char bUseVoxelCache : 1; // 0x499
	float TileSetUpdateInterval; // 0x49c
	float HeuristicScale; // 0x4a0
	float VerticalDeviationFromGroundCompensation; // 0x4a4
};

struct UPaperSprite : UObject {
	TArray<UTexture*> AdditionalSourceTextures; // 0x38
	FVector2D BakedSourceUV; // 0x48
	FVector2D BakedSourceDimension; // 0x50
	UTexture2D* BakedSourceTexture; // 0x58
	UMaterialInterface* DefaultMaterial; // 0x60
	UMaterialInterface* AlternateMaterial; // 0x68
	TArray<FPaperSpriteSocket> Sockets; // 0x70
	ESpriteCollisionMode SpriteCollisionDomain; // 0x80
	float PixelsPerUnrealUnit; // 0x84
	UBodySetup* BodySetup; // 0x88
	int32_t AlternateMaterialSplitIndex; // 0x90
	TArray<FVector4> BakedRenderData; // 0x98
};

struct USAC_CompareHP_C : UBP_SkillAcitvationConditionBase_C {
	float CompareHealth; // 0x98
	bool IsLarger; // 0x9c
};

struct UAnimNotify_LungeToTarget_C : UAnimNotifyState {
	float JumpHeight; // 0x30
	float JumpTime; // 0x34
	float Accupy; // 0x38
};

struct AMaterialInstanceActor : AActor {
	TArray<AActor*> TargetActors; // 0x220
};

struct UMovieSceneAudioTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> AudioSections; // 0x80
};

struct UWB_ClassicComboBoxItem_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* TextComboBoxItem; // 0x268
	UWB_ClassicComboBoxButton_C* WB_ClassicComboBoxButton; // 0x270
	FString ItemOption; // 0x278
	FSVideoResolution Resolution; // 0x288
};

struct UMaterialExpressionCustom : UMaterialExpression {
	FString Code; // 0x40
	ECustomMaterialOutputType OutputType; // 0x50
	FString Description; // 0x58
	TArray<FCustomInput> Inputs; // 0x68
	TArray<FCustomOutput> AdditionalOutputs; // 0x78
	TArray<FCustomDefine> AdditionalDefines; // 0x88
	TArray<FString> IncludeFilePaths; // 0x98
};

struct UWidgetAnimation : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x60
	TArray<FWidgetAnimationBinding> AnimationBindings; // 0x68
	bool bLegacyFinishOnStop; // 0x78
	FString DisplayLabel; // 0x80
};

struct UBP_GameSettings_C : USaveGame {
	float Look General Horizontal Sensitivity; // 0x28
	float Look General Vertical Sensitivity; // 0x2c
	bool Look Horizontal Invert; // 0x30
	bool Look Vertical Invert; // 0x31
	TScriptInterface<IBPI_GameSettingsInterface_C> Game Settings Interface; // 0x38
	FString Save File Name; // 0x48
	int32_t Save File User Index; // 0x58
	TArray<FSAudioUpdateStruct> AudioEmittors; // 0x60
	float Audio Multiplier Master; // 0x70
	float Audio Multiplier Music; // 0x74
	float Audio Multiplier Effect; // 0x78
	float Audio Multiplier Ambient; // 0x7c
	float Audio Multiplier UI; // 0x80
	float Audio Multiplier World Voice; // 0x84
	float Audio Multiplier Team Voice; // 0x88
	float Volume Master; // 0x8c
	float Volume Music; // 0x90
	float Volume Effect; // 0x94
	float Volume Ambient; // 0x98
	int32_t Video X Resolution; // 0x9c
	int32_t Video Y Resolution; // 0xa0
	TArray<UCameraComponent*> Camera List; // 0xa8
	EWindowMode Screen Mode; // 0xb8
	int32_t Resolution Scale Quality; // 0xbc
	float View Distance Scale; // 0xc0
	int32_t Anti Aliasing Quality; // 0xc4
	int32_t Post Processing Quality; // 0xc8
	int32_t Shadow Quality; // 0xcc
	int32_t Texture Quality; // 0xd0
	int32_t Effect Quality; // 0xd4
	int32_t Foliage Quality; // 0xd8
	float Field Of View FOV; // 0xdc
	float Motion Blur Strength; // 0xe0
	bool VSync Enabled; // 0xe4
	bool My Custom Checkbox; // 0xe5
	int32_t My Custom RadioBox; // 0xe8
	float My Custom Slider; // 0xec
	float Bloom Intensity; // 0xf0
	float Gamma Intensity; // 0xf4
	float Gain Intensity; // 0xf8
	UBP_GameSettings_C* Previous Setting State; // 0x100
	FString My Custom Combobox; // 0x108
	float Current Frame Time; // 0x118
	TArray<UBP_KeyAction_C*> Key Actions; // 0x120
	TArray<UBP_KeyInput_C*> Input Float Axis List; // 0x130
	TArray<FSKeyActionSave> Saved Key Inputs; // 0x140
	float Volume UI; // 0x150
	float Volume World Voice; // 0x154
	float Volume Team Voice; // 0x158
	float Volume Mic; // 0x15c
	EWindowMode Old ScreenMode State; // 0x160
	bool ChatWindowed; // 0x161
	float ChatOpacity; // 0x164
	bool HUDGuide; // 0x168
	float Look ADS Vertical Sensitivity; // 0x16c
	float Look Vertical Sensitivity Multiplier; // 0x170
	float Look ADS Horizontal Sensitivity; // 0x174
	FMulticastInlineDelegate OnKeyBindChanged; // 0x178
	E_FSRQualityMode FSR Quality Mode; // 0x188
	bool HUDCoordinate; // 0x189
	FMulticastInlineDelegate OnSettingsChanged; // 0x190
	bool PendingTutorial; // 0x1a0
	FMulticastInlineDelegate OnTutorialEnableStateChanged; // 0x1a8
	E_VoiceInputMode VoiceInputMode; // 0x1b8
};

struct UMovieSceneAudioSection : UMovieSceneSection {
	USoundBase* Sound; // 0xe8
	FFrameNumber StartFrameOffset; // 0xf0
	float StartOffset; // 0xf4
	float AudioStartTime; // 0xf8
	float AudioDilationFactor; // 0xfc
	float AudioVolume; // 0x100
	FMovieSceneFloatChannel SoundVolume; // 0x108
	FMovieSceneFloatChannel PitchMultiplier; // 0x1a8
	FMovieSceneActorReferenceData AttachActorData; // 0x248
	bool bLooping; // 0x2f8
	bool bSuppressSubtitles; // 0x2f9
	bool bOverrideAttenuation; // 0x2fa
	USoundAttenuation* AttenuationSettings; // 0x300
	FDelegate OnQueueSubtitles; // 0x308
	FMulticastInlineDelegate OnAudioFinished; // 0x318
	FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x328
};

struct UWBP_Slot_Functionality_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Activated; // 0x268
	UBorder* Border; // 0x270
	UImage* Image_Default; // 0x278
	UImage* Image_Disabled; // 0x280
	UImage* Image_HoverTint; // 0x288
	UImage* Image_Item; // 0x290
	UProgressBar* ProgressBar_Condition; // 0x298
	E_EquipmentCategorys Equipment Type; // 0x2a0
	FS_EquipmentSlot Equipment Item; // 0x2a8
	UTexture2D* Empty Slot Image; // 0x2e8
	UBP_PlayerInventoryComponent_C* Inventory Component; // 0x2f0
	float ConditionPercent; // 0x2f8
	bool IsOtherPlayerSlot; // 0x2fc
	UBP_PlayerInventoryComponent_C* OtherPlayerInventory Component; // 0x300
	FItemGeneralInfo generalinfo; // 0x310
	int32_t WeaponIndex; // 0x460
};

struct UChaosGameplayEventDispatcher : UChaosEventListenerComponent {
	TMap<UPrimitiveComponent*, FChaosHandlerSet> CollisionEventRegistrations; // 0x1c8
	TMap<UPrimitiveComponent*, FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x218
};

struct UUniformGridSlot : UPanelSlot {
	EHorizontalAlignment HorizontalAlignment; // 0x38
	EVerticalAlignment VerticalAlignment; // 0x39
	int32_t Row; // 0x3c
	int32_t Column; // 0x40
};

struct USynthComponentToneGenerator : USynthComponent {
	float Frequency; // 0x6c0
	float Volume; // 0x6c4
};

struct USK_Electronic_Fence_Door_02_Skeleton_AnimBlueprint_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x2f8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x398
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x3e8
	bool IsOpen; // 0x438
};

struct ABP_ThrownGrenade_C : ABP_ThrowItem_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x378
	float DelayTime; // 0x380
	USoundBase* EffectBombSound; // 0x388
	float DestroyTime; // 0x390
	ABP_EffectActor_C* EffectActorRef; // 0x398
	ABP_EffectActor_C* EffectActorClass; // 0x3a0
	UParticleSystem* EffectBombParticle; // 0x3a8
	TArray<UAkSwitchValue*> EffectAKSwitches; // 0x3b0
	float EffectDestroyTime; // 0x3c0
	float EffectDeactiveTime; // 0x3c4
};

struct USpotEventTypeData_Base_C : USpotEventTypeData {
	float ActivationDelay; // 0x30
	FSlateBrush SpotIcon; // 0x38
	bool ShowRange; // 0xc0
};

struct ACommonAI_BaseAICharacter_C : ASurvivalAICharacterBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x940
	UCapsuleComponent* SimpleHitComponent; // 0x948
	UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource; // 0x950
	UBillboardComponent* Billboard; // 0x958
	UBP_HitCapsule_Compoent_C* BP_HitCapsule_Compoent; // 0x960
	UCapsuleComponent* MeleeAttackCollision; // 0x968
	UBP_StorageInventoryComponent_C* BP_StorageInventoryComponent; // 0x970
	UBP_HitNotifyComponent_C* BP_HitNotifyComponent; // 0x978
	float _____1_Opacity_9190C77946D7CC74125AA3A3325D4D5F; // 0x980
	ETimelineDirection _____1__Direction_9190C77946D7CC74125AA3A3325D4D5F; // 0x984
	UTimelineComponent*   _2; // 0x988
	float _____0_Opacity_54AB039447F5F247E8F46C8DA204F220; // 0x990
	float _____0_DisappearZ_54AB039447F5F247E8F46C8DA204F220; // 0x994
	ETimelineDirection _____0__Direction_54AB039447F5F247E8F46C8DA204F220; // 0x998
	UTimelineComponent*   _1; // 0x9a0
	int32_t Resources; // 0x9a8
	TMap<AActor*, USoundBase*> HarvestSound; // 0x9b0
	TMap<E_AbnormalStateType, float> GivenAbnormalCondition; // 0xa00
	FVector MeshOriginalRelativeLoc; // 0xa50
	bool UseRagdoll; // 0xa5c
	float DestroyTime; // 0xa60
	FMulticastInlineDelegate OnDead; // 0xa68
	FDataTableRowHandle DropItemTable; // 0xa78
	int32_t InitUID; // 0xa88
	FResourceInfo ResourceData; // 0xa90
	bool IsImmediatleyHarvesting; // 0xb08
	UAssetUserDataBlueprintable* AssetUserDataInSpawnActor; // 0xb10
	TMap<FName, float> PartDamage; // 0xb18
	UAkAudioEvent* DeadSoundEvent; // 0xb68
	TSet<UObject*> BoneUpdateRequestors; // 0xb70
	TSet<UObject*> MeleeAttackTargets; // 0xbc0
	float FallingStartTime; // 0xc10
	bool AutoPlayDamageAnim; // 0xc14
	TMap<float, FName> DetachableBones; // 0xc18
	float LastStunTime; // 0xc68
	float StunCoolTime; // 0xc6c
	float StunDuration; // 0xc70
	EVisibilityBasedAnimTickOption ServerDefaultAnimTickOption; // 0xc74
	bool prevWasRecentrlyRendered; // 0xc75
	bool IsStunned; // 0xc76
	bool IsPlayingAttackAnimation; // 0xc77
	float TurnSpeedSmooth; // 0xc78
	FRotator PreviousRotation; // 0xc7c
	float OriginalMaxSpeed; // 0xc88
	float OriginalAcceleration; // 0xc8c
	UObject* PlayerExistenceCheckerVolume; // 0xc90
	TMap<int32_t, UCapsuleComponent*> MeleeAttackCollisions; // 0xc98
	TSet<UObject*> TurnLockers; // 0xce8
	UAkSwitchValue* NPCTypeSwitch; // 0xd38
	bool ExistAnyPlayersNearby; // 0xd40
	bool OpenInventory; // 0xd41
	float InteractionDistance; // 0xd44
	char NPCHitCount; // 0xd48
	bool IsSpawnAnimation; // 0xd49
	bool InitBy; // 0xd4a
	TArray<UTexture2D*> AlertIcons; // 0xd50
	bool IsInventoryEmpty; // 0xd60
	float CurrentMonsterSpeedRatio; // 0xd64
	TMap<FName, USceneComponent*> RangeAttackSocket; // 0xd68
	TArray<int32_t> AttackWeights; // 0xdb8
	int32_t TotalAttackWeight; // 0xdc8
	int32_t TotalMeleeAttackWeight; // 0xdcc
	int32_t TotalRangeAttackWeight; // 0xdd0
	TArray<int32_t> TutorialIndicatorVisibleStep; // 0xdd8
	UBP_WidgetIndicatorComponent_C* TutorialIndicator; // 0xde8
	bool bHealthEffectCheck; // 0xdf0
	bool IsDefender; // 0xdf1
	TArray<int32_t> MeleeAttackIndex_Defender; // 0xdf8
	TArray<int32_t> RangeAttackIndex_Defender; // 0xe08
	float HitRotationYaw; // 0xe18
	bool IsBeginDisappear; // 0xe1c
	bool IsDamagedRight; // 0xe1d
	bool IsNoSpawner; // 0xe1e
	float RepTimeAfterDead; // 0xe20
};

struct USynthComponent : USceneComponent {
	char bAutoDestroy : 1; // 0x1f8
	char bStopWhenOwnerDestroyed : 1; // 0x1f8
	char bAllowSpatialization : 1; // 0x1f8
	char bOverrideAttenuation : 1; // 0x1f8
	char bOutputToBusOnly : 1; // 0x1fc
	USoundAttenuation* AttenuationSettings; // 0x200
	FSoundAttenuationSettings AttenuationOverrides; // 0x208
	USoundConcurrency* ConcurrencySettings; // 0x5a8
	TSet<USoundConcurrency*> ConcurrencySet; // 0x5b0
	USoundClass* SoundClass; // 0x600
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x608
	USoundSubmixBase* SoundSubmix; // 0x610
	TArray<FSoundSubmixSendInfo> SoundSubmixSends; // 0x618
	TArray<FSoundSourceBusSendInfo> BusSends; // 0x628
	TArray<FSoundSourceBusSendInfo> PreEffectBusSends; // 0x638
	char bIsUISound : 1; // 0x648
	char bIsPreviewSound : 1; // 0x648
	int32_t EnvelopeFollowerAttackTime; // 0x64c
	int32_t EnvelopeFollowerReleaseTime; // 0x650
	FMulticastInlineDelegate OnAudioEnvelopeValue; // 0x658
	USynthSound* Synth; // 0x688
	UAudioComponent* AudioComponent; // 0x690
};

struct UMovieSceneCapture : UObject {
	FSoftClassPath ImageCaptureProtocolType; // 0x38
	FSoftClassPath AudioCaptureProtocolType; // 0x50
	UMovieSceneImageCaptureProtocolBase* ImageCaptureProtocol; // 0x68
	UMovieSceneAudioCaptureProtocolBase* AudioCaptureProtocol; // 0x70
	FMovieSceneCaptureSettings Settings; // 0x78
	bool bUseSeparateProcess; // 0xe8
	bool bCloseEditorWhenCaptureStarts; // 0xe9
	FString AdditionalCommandLineArguments; // 0xf0
	FString InheritedCommandLineArguments; // 0x100
};

struct UTextureRenderTarget2D : UTextureRenderTarget {
	int32_t SizeX; // 0xe0
	int32_t SizeY; // 0xe4
	FLinearColor ClearColor; // 0xe8
	TextureAddress AddressX; // 0xf8
	TextureAddress AddressY; // 0xf9
	char bForceLinearGamma : 1; // 0xfa
	char bHDR : 1; // 0xfa
	char bGPUSharedFlag : 1; // 0xfa
	ETextureRenderTargetFormat RenderTargetFormat; // 0xfb
	char bAutoGenerateMips : 1; // 0xfc
	TextureFilter MipsSamplerFilter; // 0xfd
	TextureAddress MipsAddressU; // 0xfe
	TextureAddress MipsAddressV; // 0xff
	EPixelFormat OverrideFormat; // 0x100
};

struct UMovieSceneEventTriggerSection : UMovieSceneEventSectionBase {
	FMovieSceneEventChannel EventChannel; // 0xf0
};

struct ACameraRig_Crane : AActor {
	float CranePitch; // 0x220
	float CraneYaw; // 0x224
	float CraneArmLength; // 0x228
	bool bLockMountPitch; // 0x22c
	bool bLockMountYaw; // 0x22d
	USceneComponent* TransformComponent; // 0x230
	USceneComponent* CraneYawControl; // 0x238
	USceneComponent* CranePitchControl; // 0x240
	USceneComponent* CraneCameraMount; // 0x248
};

struct UWBP_RingFrame_C : UUserWidget {
	UWidgetAnimation* Anim_Open; // 0x260
	UNamedSlot* CustomPanel; // 0x268
	UHorizontalBox* HorizontalBox_Resource; // 0x270
	UImage* Image_Background; // 0x278
	UImage* Image_Icon; // 0x280
	URetainerBox* RetainerBox_198; // 0x288
	UOverlay* SegmentPanel; // 0x290
	UTextBlock* Text_Description; // 0x298
	UTextBlock* Text_Name; // 0x2a0
};

struct UGameViewportClient : UScriptViewportClient {
	UConsole* ViewportConsole; // 0x40
	TArray<FDebugDisplayProperty> DebugProperties; // 0x48
	int32_t MaxSplitscreenPlayers; // 0x68
	UWorld* World; // 0x78
	UGameInstance* GameInstance; // 0x80
};

struct AAIController_Robot_C : ACommonAI_BaseAIController_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x498
	AActor* EnumyActor; // 0x4a0
	AActor* FriendlyActor; // 0x4a8
	AActor* CurrentActor; // 0x4b0
	AActor* PlayerActor; // 0x4b8
	AActor* DamageCauser; // 0x4c0
	bool IsDamaged; // 0x4c8
	float DamagedTime; // 0x4cc
};

struct UWBP_HUD_Team_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UVerticalBox* VerticalBox_Team; // 0x268
	UWBP_HUD_TeamListing_C* WBP_HUD_TeamListing; // 0x270
	UBP_PlayerInventoryComponent_C* PlayerInventoryComponent; // 0x278
	TMap<FString, UWBP_HUD_TeamListing_C*> CachedTeamMemberWidget; // 0x280
};

struct USequenceCameraShakeSequencePlayer : UObject {
	UObject* BoundObjectOverride; // 0x480
	UMovieSceneSequence* Sequence; // 0x488
	FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x490
};

struct UPhysicsAsset : UObject {
	TArray<int32_t> BoundsBodies; // 0x30
	TArray<USkeletalBodySetup*> SkeletalBodySetups; // 0x40
	TArray<UPhysicsConstraintTemplate*> ConstraintSetup; // 0x50
	FSolverIterations SolverIterations; // 0x60
	char bNotForDedicatedServer : 1; // 0x7c
	UThumbnailInfo* ThumbnailInfo; // 0x120
	TArray<UBodySetup*> BodySetup; // 0x128
};

struct UNiagaraDataInterfaceArrayColor : UNiagaraDataInterfaceArray {
	TArray<FLinearColor> ColorData; // 0x50
};

struct UMenuItems : UObject {
	TArray<FMenuItem> items; // 0x28
	FMulticastInlineDelegate OnMenuOpen; // 0x40
	FMulticastInlineDelegate OnMenuClose; // 0x50
};

struct UParticleEventReceiverAkPostEvent : UParticleModuleEventReceiverBase {
	UAkAudioEvent* AkEvent; // 0x40
};

struct UMaterialExpressionMin : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UTextureRenderTarget2DArray : UTextureRenderTarget {
	int32_t SizeX; // 0xe0
	int32_t SizeY; // 0xe4
	int32_t Slices; // 0xe8
	FLinearColor ClearColor; // 0xec
	EPixelFormat OverrideFormat; // 0xfc
	char bHDR : 1; // 0xfd
	char bForceLinearGamma : 1; // 0xfd
};

struct USQSTagQueue : UAwsSQSAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct USoundBase : UObject {
	USoundClass* SoundClassObject; // 0x30
	char bDebug : 1; // 0x38
	char bOverrideConcurrency : 1; // 0x38
	char bOutputToBusOnly : 1; // 0x38
	char bHasDelayNode : 1; // 0x38
	char bHasConcatenatorNode : 1; // 0x38
	char bBypassVolumeScaleForPriority : 1; // 0x38
	EVirtualizationMode VirtualizationMode; // 0x39
	TSet<USoundConcurrency*> ConcurrencySet; // 0x90
	FSoundConcurrencySettings ConcurrencyOverrides; // 0xe0
	float Duration; // 0x108
	float MaxDistance; // 0x10c
	float TotalSamples; // 0x110
	float Priority; // 0x114
	USoundAttenuation* AttenuationSettings; // 0x118
	FSoundModulationDefaultRoutingSettings ModulationSettings; // 0x120
	USoundSubmixBase* SoundSubmixObject; // 0x168
	TArray<FSoundSubmixSendInfo> SoundSubmixSends; // 0x170
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x180
	TArray<FSoundSourceBusSendInfo> BusSends; // 0x188
	TArray<FSoundSourceBusSendInfo> PreEffectBusSends; // 0x198
	TArray<UAssetUserData*> AssetUserData; // 0x1a8
};

struct UBodySetup : UBodySetupCore {
	FKAggregateGeom AggGeom; // 0x48
	char bAlwaysFullAnimWeight : 1; // 0xa8
	char bConsiderForBounds : 1; // 0xa8
	char bMeshCollideAll : 1; // 0xa8
	char bDoubleSidedGeometry : 1; // 0xa8
	char bGenerateNonMirroredCollision : 1; // 0xa8
	char bSharedCookedData : 1; // 0xa8
	char bGenerateMirroredCollision : 1; // 0xa8
	char bSupportUVsAndFaceRemap : 1; // 0xa8
	UPhysicalMaterial* PhysMaterial; // 0xb0
	FWalkableSlopeOverride WalkableSlopeOverride; // 0xb8
	FBodyInstance DefaultInstance; // 0x130
	FVector BuildScale3D; // 0x290
};

struct UWaterStorageComponentBase : UActorComponent {
	float MaxStorage; // 0xb0
	float WaterPushAmountPerSec; // 0xb4
	float WaterPullAmountPerSec; // 0xb8
	int32_t InPipeCount; // 0xbc
	int32_t OutPipeCount; // 0xc0
	float Current; // 0xc4
	float PollutedRatio; // 0xc8
	bool bIsWorkingWaterTransform; // 0xcc
	TMap<UWaterStorageComponentBase*, bool> ConnectState; // 0xd0
	TArray<UWaterStorageComponentBase*> InPipeArray; // 0x120
	TArray<UWaterStorageComponentBase*> OutPipeArray; // 0x130
	TMap<UWaterStorageComponentBase*, float> PullingAmountAvgPerSec; // 0x140
};

struct UPhysicsConstraintComponent : USceneComponent {
	AActor* ConstraintActor1; // 0x1f8
	FConstrainComponentPropName ComponentName1; // 0x200
	AActor* ConstraintActor2; // 0x208
	FConstrainComponentPropName ComponentName2; // 0x210
	UPhysicsConstraintTemplate* ConstraintSetup; // 0x228
	FMulticastInlineDelegate OnConstraintBroken; // 0x230
	FConstraintInstance ConstraintInstance; // 0x240
};

struct UAIPerceptionComponent : UActorComponent {
	TArray<UAISenseConfig*> SensesConfig; // 0xb0
	UAISense* DominantSense; // 0xc0
	AAIController* AIOwner; // 0xd8
	FMulticastInlineDelegate OnPerceptionUpdated; // 0x160
	FMulticastInlineDelegate OnTargetPerceptionUpdated; // 0x170
	FMulticastInlineDelegate OnTargetPerceptionInfoUpdated; // 0x180
};

struct UWBP_RadiogramBase_C : UUserWidget {
	UNamedSlot* Canvas; // 0x260
};

struct UBPANS_JuggernautMeleeAttack_C : USVAnimNotifyState {
	UAkAudioEvent* HitAkEvent; // 0x30
	UAkSwitchValue* HitAkSwitch; // 0x38
	int32_t SpecialAttackIndex; // 0x40
	float MultiplyLaunchVelocity; // 0x44
	float MultiplyAirborne; // 0x48
	float InnerRadius; // 0x4c
	float OutterRadius; // 0x50
	float IgnoreZone; // 0x54
	float NPCHeight; // 0x58
};

struct AInfinityFireProjectileBase : AActor {
	TArray<FWeaponHitSetting> HitSetting; // 0x220
	AWeapon* OwnerWeapon; // 0x230
	bool bDontShowHitEffectOnPlayer; // 0x238
	bool bWaitParticlesOnDestroy; // 0x239
	bool bTakeDownable; // 0x23a
	float Health; // 0x23c
	int32_t TakeDownScore; // 0x240
	bool bDestroyPending; // 0x244
	EBulletType BulletType; // 0x245
};

struct UFindSessionsCallbackProxyAdvanced : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UEditableGameplayTagQuery : UObject {
	FString UserDescription; // 0x28
	UEditableGameplayTagQueryExpression* RootExpression; // 0x48
	FGameplayTagQuery TagQueryExportText_Helper; // 0x50
};

struct UGizmoUniformScaleParameterSource : UGizmoBaseVec2ParameterSource {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48
	TScriptInterface<IGizmoTransformSource> TransformSource; // 0x58
	float ScaleMultiplier; // 0x68
	FVector2D Parameter; // 0x6c
	FGizmoVec2ParameterChange LastChange; // 0x74
	FVector CurScaleOrigin; // 0x84
	FVector CurScaleNormal; // 0x90
	FVector CurScaleAxisX; // 0x9c
	FVector CurScaleAxisY; // 0xa8
	FTransform InitialTransform; // 0xc0
};

struct UObjectLibrary : UObject {
	UObject* ObjectBaseClass; // 0x28
	bool bHasBlueprintClasses; // 0x30
	TArray<UObject*> Objects; // 0x38
	TArray<TWeakObjectPtr<UObject>> WeakObjects; // 0x48
	bool bUseWeakReferences; // 0x58
	bool bIsFullyLoaded; // 0x59
};

struct UBTDecorator_CheckGameplayTagsOnActor : UBTDecorator {
	FBlackboardKeySelector ActorToCheck; // 0x68
	EGameplayContainerMatchType TagsToMatch; // 0x90
	FGameplayTagContainer GameplayTags; // 0x98
	FString CachedDescription; // 0xb8
};

struct UMaterialExpressionPanner : UMaterialExpression {
	FExpressionInput Coordinate; // 0x40
	FExpressionInput Time; // 0x54
	FExpressionInput Speed; // 0x68
	float SpeedX; // 0x7c
	float SpeedY; // 0x80
	uint32_t ConstCoordinate; // 0x84
	bool bFractionalPart; // 0x88
};

struct UWBP_Function_Equipment_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWBP_Button_Function_C* Button_Radiogram; // 0x268
	UWBP_Button_Function_C* Button_Unequip; // 0x270
	UVerticalBox* OptionBox; // 0x278
	FS_EquipmentSlot Equipment Item; // 0x280
	UBP_PlayerInventoryComponent_C* Inventory Component; // 0x2c0
	UWBP_InGameUI_C* InGameUI; // 0x2c8
	UWBP_Slot_Inventory_C* Slot Reference; // 0x2d0
};

struct USQSListDeadLetterSourceQueues : UAwsSQSAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UWBP_ObjectiveListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Attention; // 0x268
	UImage* Image_38; // 0x270
	UImage* Image_106; // 0x278
	UImage* Image_Icon; // 0x280
	UWidgetSwitcher* Switch; // 0x288
	UTextBlock* Text_Distance; // 0x290
	UWBP_ObjectiveCheckbox_C* WBP_HUD_ObjectDoSomething; // 0x298
	UWBP_ObjectiveProgress_C* WBP_HUD_ObjectProgress; // 0x2a0
	UWBP_ObjectiveTime_C* WBP_HUD_ObjectTimer; // 0x2a8
	FVector TargetLocation; // 0x2b0
	float TargetTime; // 0x2bc
	bool DistanceEnabled; // 0x2c0
	int32_t PrevDistance; // 0x2c4
	ECheckBoxState Current Check State; // 0x2c8
};

struct UNiagaraDataInterfaceExport : UNiagaraDataInterface {
	FNiagaraUserParameterBinding CallbackHandlerParameter; // 0x38
	ENDIExport_GPUAllocationMode GPUAllocationMode; // 0x58
	int32_t GPUAllocationFixedSize; // 0x5c
	float GPUAllocationPerParticleSize; // 0x60
};

struct UMaterialExpressionTangent : UMaterialExpression {
	FExpressionInput Input; // 0x40
	float Period; // 0x54
};

struct UAISense_Blueprint : UAISense {
	UUserDefinedStruct* ListenerDataType; // 0x80
	TArray<UAIPerceptionComponent*> ListenerContainer; // 0x88
	TArray<UAISenseEvent*> UnprocessedEvents; // 0x98
};

struct AInfinityFireProjectile_Bullet : AInfinityFireProjectileBase {
	UParticleSystemComponent* TrailParticleComp; // 0x248
	float TravelDistance; // 0x250
	USoundBase* WhipSound; // 0x258
};

struct UEnvQueryGenerator_OnCircle : UEnvQueryGenerator_ProjectedPoints {
	FAIDataProviderFloatValue CircleRadius; // 0x80
	FAIDataProviderFloatValue SpaceBetween; // 0xb8
	FAIDataProviderIntValue NumberOfPoints; // 0xf0
	EPointOnCircleSpacingMethod PointOnCircleSpacingMethod; // 0x128
	FEnvDirection ArcDirection; // 0x130
	FAIDataProviderFloatValue ArcAngle; // 0x150
	float AngleRadians; // 0x188
	UEnvQueryContext* CircleCenter; // 0x190
	bool bIgnoreAnyContextActorsWhenGeneratingCircle; // 0x198
	FAIDataProviderFloatValue CircleCenterZOffset; // 0x1a0
	FEnvTraceData TraceData; // 0x1d8
	char bDefineArc : 1; // 0x208
};

struct USurvivalAIStateMachine : UObject {
	ASurvivalAICharacterBase* SVAICharacter; // 0x28
	ASurvivalAIController* SVAIController; // 0x30
	USurvivalAIStateMachine* CurrentState; // 0x38
	FVector SpawnLocation; // 0x40
	FVector GoalLocation; // 0x4c
	FVector ViaLocation; // 0x58
	FVector NewMoveLocation; // 0x64
	FVector OldMoveLocation; // 0x70
	bool IsMoveTo; // 0x7c
	bool IsMoveToVia; // 0x7d
	TArray<AActor*> ActorsToIgnore_LandmarkBase; // 0x80
	TArray<AActor*> ActorsToIgnore_SpotEvent; // 0x90
	float Timer_StopAMove; // 0xa0
};

struct UCloudWatchLogsFilterLogEvents : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UCallbackProxyCreateWorkshopItem : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
	FMulticastInlineDelegate OnSteamInitFailure; // 0x50
};

struct ABP_FunctionHoldable_C : AFunctionalHoldableBase {
	UStaticMeshComponent* StaticMesh; // 0x508
};

struct UPreviewMeshCollection : UDataAsset {
	USkeleton* Skeleton; // 0x38
	TArray<FPreviewMeshCollectionEntry> SkeletalMeshes; // 0x40
};

struct UAutoResizedWidgetComponent_C : UWidgetComponentEx {
	FPointerToUberGraphFrame UberGraphFrame; // 0x5a0
	bool bAutoResizeToFullScreen; // 0x5a8
	float WidgetScale; // 0x5ac
};

struct UBP_ScreenIndicator_C : UWidgetComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x590
	UTexture2D* Icon; // 0x598
	FSlateColor Slate Color; // 0x5a0
	int32_t TempDistance; // 0x5c8
	UWBP_Objective_Indicator_C* WBP_Indicator; // 0x5d0
	FString String; // 0x5d8
	bool bPlayer; // 0x5e8
};

struct ABP_RespawnBuildPartBase_C : ABP_StaticMeshBuildPartBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x860
	UCapsuleComponent* Respawn Location; // 0x868
	float LastUseTime; // 0x870
	float CoolTime; // 0x874
	float CoolTimeShareDistance; // 0x878
};

struct UNPCAnimInstance : UAnimInstance {
	bool NowInDediSvr; // 0x2b8
	bool StopAllForOptimization; // 0x2b9
	float SpeedX; // 0x2bc
	float SpeedY; // 0x2c0
	float IdleWalkX; // 0x2c4
	float IdleWalkY; // 0x2c8
	float TurnSpeed; // 0x2cc
	float SpineRotationYaw; // 0x2d0
	float SpineRotationPitch; // 0x2d4
	FVector TargetActorLocation; // 0x2d8
	FVector TargetLocation; // 0x2e4
	bool FocusTargetActor; // 0x2f0
	bool ClientHit; // 0x2f1
	bool CriticalHit; // 0x2f2
	float DamagedWeight; // 0x2f4
	bool Damaged; // 0x2f8
	bool DamagedHead; // 0x2f9
	bool DamagedFront; // 0x2fa
	bool DamagedRight; // 0x2fb
	bool Dead; // 0x2fc
	int32_t Stress; // 0x300
};

struct ULevelActorContainer : UObject {
	TArray<AActor*> Actors; // 0x28
};

struct UBP_KeyAction_C : UObject {
	FString Action Name; // 0x28
	bool IsMultipleKeys; // 0x38
	FString Category; // 0x40
	TArray<UBP_KeyMapping_C*> Key Mappings; // 0x50
};

struct UBP_SkillActionTaskBase_C : UObject {
	FString TaskName; // 0x28
	FMulticastInlineDelegate TaskTriger; // 0x38
	FS_ConditionParam Param; // 0x48
	ABP_SkillBase_C* Skill; // 0xb8
	bool TaskFinished; // 0xc0
};

struct ULevelStreamingDynamic : ULevelStreaming {
	char bInitiallyLoaded : 1; // 0x148
	char bInitiallyVisible : 1; // 0x148
};

struct UMovieSceneBoolSection : UMovieSceneSection {
	bool DefaultValue; // 0xe8
	FMovieSceneBoolChannel BoolCurve; // 0xf0
};

struct USlateWidgetStyleAsset : UObject {
	USlateWidgetStyleContainerBase* CustomStyle; // 0x28
};

struct UDamageType : UObject {
	char bCausedByWorld : 1; // 0x28
	char bScaleMomentumByMass : 1; // 0x28
	char bRadialDamageVelChange : 1; // 0x28
	float DamageImpulse; // 0x2c
	float DestructibleImpulse; // 0x30
	float DestructibleDamageSpreadScale; // 0x34
	float DamageFalloff; // 0x38
};

struct UVOIPTalker : UActorComponent {
	FVoiceSettings Settings; // 0xb0
};

struct UMaterialExpressionArctangent : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UEdGraph : UObject {
	UEdGraphSchema* Schema; // 0x28
	TArray<UEdGraphNode*> Nodes; // 0x30
	char bEditable : 1; // 0x40
	char bAllowDeletion : 1; // 0x40
	char bAllowRenaming : 1; // 0x40
};

struct UGizmoComponentHitTarget : UObject {
	UPrimitiveComponent* Component; // 0x30
};

struct UNetReplicationGraphConnection : UReplicationConnectionDriver {
	UNetConnection* NetConnection; // 0x28
	AReplicationGraphDebugActor* DebugActor; // 0x170
	TArray<FLastLocationGatherInfo> LastGatherLocations; // 0x188
	TArray<UReplicationGraphNode*> ConnectionGraphNodes; // 0x1a0
	UReplicationGraphNode_TearOff_ForConnection* TearOffNode; // 0x1b0
};

struct UC_Manager-LocalMap_C : UQuestMapComponent_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	AWorldLocation_C* ActiveLocation; // 0xb8
	UWBP_HUD_Compass_C* CompassWidget; // 0xc0
	ULocalMap_C* LocalMapWidget; // 0xc8
	UMaterialInstanceDynamic* LocalMap; // 0xd0
	UWBP_MapMarker_Player_C* PlayerMarker; // 0xd8
	UMaterialInstanceDynamic* PlayerMarkerMaterial; // 0xe0
	bool Initialized?; // 0xe8
	bool IsOpen; // 0xe9
};

struct UAssetManagerSettings : UDeveloperSettings {
	TArray<FPrimaryAssetTypeInfo> PrimaryAssetTypesToScan; // 0x38
	TArray<FDirectoryPath> DirectoriesToExclude; // 0x48
	TArray<FPrimaryAssetRulesOverride> PrimaryAssetRules; // 0x58
	TArray<FPrimaryAssetRulesCustomOverride> CustomPrimaryAssetRules; // 0x68
	bool bOnlyCookProductionAssets; // 0x78
	bool bShouldManagerDetermineTypeAndName; // 0x79
	bool bShouldGuessTypeAndNameInEditor; // 0x7a
	bool bShouldAcquireMissingChunksOnLoad; // 0x7b
	TArray<FAssetManagerRedirect> PrimaryAssetIdRedirects; // 0x80
	TArray<FAssetManagerRedirect> PrimaryAssetTypeRedirects; // 0x90
	TArray<FAssetManagerRedirect> AssetPathRedirects; // 0xa0
	TSet<FName> MetaDataTagsForAssetRegistry; // 0xb0
};

struct UWBP_HoldableGuideUIBase_C : UUserWidget {
	AHoldableBase* TargetHoldable; // 0x260
};

struct UBPANS_PlayAKSound_C : UAnimNotifyState {
	FName SocketName; // 0x30
	bool Attach; // 0x38
	UAkAudioEvent* AkEvent; // 0x40
	TArray<UAkSwitchValue*> Switches; // 0x48
	TMap<UAkRtpc*, float> RTPCs; // 0x58
	TMap<USkeletalMeshComponent*, UAkComponent*> OwnerComponents; // 0xa8
	UAkAudioEvent* AKStopEvent; // 0xf8
};

struct ABP_WaterPurifier_C : ABP_MaintainConvertBuildParts_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x8d0
};

struct UWBP_ObjectiveFrame_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Open; // 0x268
	UImage* Image_47; // 0x270
	UImage* Image_Icon; // 0x278
	UNamedSlot* NamedSlot_Desc; // 0x280
	UNamedSlot* NamedSlot_Objectives; // 0x288
	UTextBlock* Text_Name; // 0x290
	UVerticalBox* VerticalBox_1; // 0x298
	FVector2D Image Size; // 0x2a0
	UObject* Image; // 0x2a8
	UObject* Image_1; // 0x2b0
	UObject* Image_2; // 0x2b8
};

struct ABP_CraftingFunctionalityBase_C : ABP_FunctionalityBuildPartBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x890
	UBP_StorageInventoryComponent_C* BP_StorageInventoryComponent; // 0x898
	UBP_CraftingComponent_C* BP_CraftingComponent; // 0x8a0
	bool IsWorking; // 0x8a8
	int32_t CurrentCraftingItem; // 0x8ac
	float EnergyCostPerMin; // 0x8b0
};

struct UNavigationSystemV1 : UNavigationSystemBase {
	ANavigationData* MainNavData; // 0x28
	ANavigationData* AbstractNavData; // 0x30
	FName DefaultAgentName; // 0x38
	TSoftClassPtr<UObject> CrowdManagerClass; // 0x40
	char bAutoCreateNavigationData : 1; // 0x68
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x68
	char bAllowClientSideNavigation : 1; // 0x68
	char bShouldDiscardSubLevelNavData : 1; // 0x68
	char bTickWhilePaused : 1; // 0x68
	char bSupportRebuilding : 1; // 0x68
	char bInitialBuildingLocked : 1; // 0x68
	char bSkipAgentHeightCheckWhenPickingNavData : 1; // 0x69
	char bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x69
	float ActiveTilesUpdateInterval; // 0x6c
	ENavDataGatheringModeConfig DataGatheringMode; // 0x70
	float DirtyAreaWarningSizeThreshold; // 0x74
	TArray<FNavDataConfig> SupportedAgents; // 0x78
	FNavAgentSelector SupportedAgentsMask; // 0x88
	TArray<ANavigationData*> NavDataSet; // 0x90
	TArray<ANavigationData*> NavDataRegistrationQueue; // 0xa0
	FMulticastInlineDelegate OnNavDataRegisteredEvent; // 0xc0
	FMulticastInlineDelegate OnNavigationGenerationFinishedDelegate; // 0xd0
	FNavigationSystemRunMode OperationMode; // 0x1c8
	float DirtyAreasUpdateFreq; // 0x15cc
};

struct UParticleModuleLocation_Seeded : UParticleModuleLocation {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct UWBP_Toolbar_Close_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* Button_Close; // 0x268
	FMulticastInlineDelegate OnClicked; // 0x270
};

struct UWBP_Radiogram_6010106_C : UWBP_radiogram_CustomBase_C {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x298
	UTextBlock* TextBlock; // 0x2a0
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x2a8
	UWBP_RadiogramListing_C* WBP_RadiogramListing_49; // 0x2b0
};

struct UBTTask_ReloadRangeWeapon_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
};

struct ABP_ReleaseStealth_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UAkComponent* Ak; // 0x228
	UParticleSystemComponent* ParticleSystem; // 0x230
	USceneComponent* DefaultSceneRoot; // 0x238
};

struct UAkSettings : UObject {
	char MaxSimultaneousReverbVolumes; // 0x28
	FFilePath WwiseProjectPath; // 0x30
	FDirectoryPath WwiseSoundDataFolder; // 0x40
	bool bAutoConnectToWAAPI; // 0x50
	ECollisionChannel DefaultOcclusionCollisionChannel; // 0x51
	ECollisionChannel DefaultFitToGeometryCollisionChannel; // 0x52
	TMap<TSoftObjectPtr<UPhysicalMaterial>, FAkGeometrySurfacePropertiesToMap> AkGeometryMap; // 0x58
	float GlobalDecayAbsorption; // 0xa8
	TSoftObjectPtr<UAkAuxBus> DefaultReverbAuxBus; // 0xb0
	TMap<float, TSoftObjectPtr<UAkAuxBus>> EnvironmentDecayAuxBusMap; // 0xd8
	FString HFDampingName; // 0x128
	FString DecayEstimateName; // 0x138
	FString TimeToFirstReflectionName; // 0x148
	TSoftObjectPtr<UAkRtpc> HFDampingRTPC; // 0x158
	TSoftObjectPtr<UAkRtpc> DecayEstimateRTPC; // 0x180
	TSoftObjectPtr<UAkRtpc> TimeToFirstReflectionRTPC; // 0x1a8
	TMap<FGuid, FAkAcousticTextureParams> AcousticTextureParamsMap; // 0x1d0
	bool SplitSwitchContainerMedia; // 0x220
	bool SplitMediaPerFolder; // 0x221
	bool UseEventBasedPackaging; // 0x222
	bool EnableAutomaticAssetSynchronization; // 0x223
	FString CommandletCommitMessage; // 0x228
	TMap<FString, FString> UnrealCultureToWwiseCulture; // 0x238
	bool AskedToUseNewAssetManagement; // 0x288
	bool bEnableMultiCoreRendering; // 0x289
	bool MigratedEnableMultiCoreRendering; // 0x28a
	bool FixupRedirectorsDuringMigration; // 0x28b
	FDirectoryPath WwiseWindowsInstallationPath; // 0x290
	FFilePath WwiseMacInstallationPath; // 0x2a0
};

struct UMaterialExpressionMaterialFunctionCall : UMaterialExpression {
	UMaterialFunctionInterface* MaterialFunction; // 0x40
	FMaterialParameterInfo FunctionParameterInfo; // 0x48
};

struct UMaterialExpressionLandscapePhysicalMaterialOutput : UMaterialExpressionCustomOutput {
	TArray<FPhysicalMaterialInput> Inputs; // 0x40
};

struct UWBP_Functionality_TransferTerrasite_C : UWBP_FunctionalityBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	UWBP_PopUp_Button_C* Convert; // 0x278
	UImage* Image; // 0x280
	UImage* Image_2; // 0x288
	UImage* Image_75; // 0x290
	UImage* Image_86; // 0x298
	UTextBlock* TerraPointChargeText; // 0x2a0
	UTextBlock* TerraPointText; // 0x2a8
	UWBP_Slot_Inventory_C* TerraSite_2; // 0x2b0
	UWBP_Slot_Inventory_C* TerraSite_3; // 0x2b8
	UWBP_Slot_Inventory_C* TerraSite_4; // 0x2c0
	UUniformGridPanel* UniformGridPanel_97; // 0x2c8
	UWBP_Functionality_TransferTerrasiteMenu_C* WBP_Functionality_TransferTerrasiteMenu; // 0x2d0
	UWBP_FunctionalityInfo_C* WBP_FunctionalityInfo; // 0x2d8
	UWBP_Toolbar_Dropdown_C* WBP_Toolbar_Dropdown; // 0x2e0
	TArray<UWBP_Slot_Inventory_C*> TransInventorySlots; // 0x2e8
	ABP_TerrasiteTransfter_C* TransferTerrasite; // 0x2f8
	int32_t TerraPointCharge; // 0x300
	int32_t TerraPoint; // 0x304
	TArray<FDataTableRowHandle> ItemToTerraPointList; // 0x308
};

struct UDatasmithSceneComponentTemplate : UDatasmithObjectTemplate {
	FTransform RelativeTransform; // 0x30
	EComponentMobility Mobility; // 0x60
	TSoftObjectPtr<USceneComponent> AttachParent; // 0x68
	bool bVisible; // 0x90
	TSet<FName> Tags; // 0x98
};

struct UAkGroupValue : UAkAudioType {
	TArray<TSoftObjectPtr<UAkMediaAsset>> MediaDependencies; // 0x40
	uint32_t GroupShortID; // 0x50
};

struct UCloudWatchLogsGetLogRecord : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct ABP_FunctionalityBuildPartBase_C : ABP_StaticMeshBuildPartBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x860
	UWBP_FunctionalityBase_C* FunctionalityInteractionlWidgetClass; // 0x868
	bool IsSwitchedOn; // 0x870
	FMulticastInlineDelegate OnChangedSwitchState; // 0x878
	float ReserveSwitchOnTime; // 0x888
	bool IsControlableByRMC; // 0x88c
};

struct UUserWidget : UWidget {
	FLinearColor ColorAndOpacity; // 0x110
	FDelegate ColorAndOpacityDelegate; // 0x120
	FSlateColor ForegroundColor; // 0x130
	FDelegate ForegroundColorDelegate; // 0x158
	FMulticastInlineDelegate OnVisibilityChanged; // 0x168
	FMargin Padding; // 0x190
	TArray<UUMGSequencePlayer*> ActiveSequencePlayers; // 0x1a0
	UUMGSequenceTickManager* AnimationTickManager; // 0x1b0
	TArray<UUMGSequencePlayer*> StoppedSequencePlayers; // 0x1b8
	TArray<FNamedSlotBinding> NamedSlotBindings; // 0x1c8
	UWidgetTree* WidgetTree; // 0x1d8
	int32_t Priority; // 0x1e0
	char bSupportsKeyboardFocus : 1; // 0x1e4
	char bIsFocusable : 1; // 0x1e4
	char bStopAction : 1; // 0x1e4
	char bHasScriptImplementedTick : 1; // 0x1e4
	char bHasScriptImplementedPaint : 1; // 0x1e4
	EWidgetTickFrequency TickFrequency; // 0x1f0
	UInputComponent* InputComponent; // 0x1f8
	TArray<FAnimationEventBinding> AnimationCallbacks; // 0x200
};

struct UWBP_HUD_Stats_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image; // 0x268
	UImage* Image_98; // 0x270
	UImage* Image_Energy; // 0x278
	UImage* Image_Health; // 0x280
	UImage* Image_Hunger; // 0x288
	UImage* Image_Stamina; // 0x290
	UImage* Image_Thirst; // 0x298
	UTextBlock* Text_Energy; // 0x2a0
	UTextBlock* Text_Health; // 0x2a8
	UTextBlock* Text_Hunger; // 0x2b0
	UTextBlock* Text_Stamina; // 0x2b8
	UTextBlock* Text_Thirst; // 0x2c0
	UBP_PlayerInventoryComponent_C* Player Inventory Component; // 0x2c8
	UMaterialInstanceDynamic* MI_Health; // 0x2d0
	UMaterialInstanceDynamic* MI_Stamina; // 0x2d8
	UMaterialInstanceDynamic* MI_Energy; // 0x2e0
	UMaterialInstanceDynamic* MI_Hunger; // 0x2e8
	UMaterialInstanceDynamic* MI_Thirst; // 0x2f0
	int32_t CurrentHealth; // 0x2f8
	float MaxHealth; // 0x2fc
	int32_t CurrentEnergy; // 0x300
	float MaxEnergy; // 0x304
	int32_t CurrentStamina; // 0x308
	float MaxStamina; // 0x30c
	int32_t CurrentHunger; // 0x310
	int32_t CurrentThirsty; // 0x314
};

struct USkeletalMeshLODSettings : UDataAsset {
	FPerPlatformInt MinLOD; // 0x30
	FPerPlatformBool DisableBelowMinLodStripping; // 0x34
	bool bOverrideLODStreamingSettings; // 0x35
	FPerPlatformBool bSupportLODStreaming; // 0x36
	FPerPlatformInt MaxNumStreamedLODs; // 0x38
	FPerPlatformInt MaxNumOptionalLODs; // 0x3c
	TArray<FSkeletalMeshLODGroupSettings> LODGroups; // 0x40
};

struct UWBP_Main_MachineArmListing_M_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_1; // 0x268
	UTextBlock* GradeText; // 0x270
	UImage* Image_39; // 0x278
	UImage* Image_Blink; // 0x280
	UImage* Image_Selected; // 0x288
	UBorder* ListReady; // 0x290
	UTextBlock* TextBlock_47; // 0x298
	UTextBlock* TextBlock_177; // 0x2a0
	UWBP_UI_ListingHovering_C* WBP_UI_ListingHovering; // 0x2a8
	FMachinArmAbilitySub Data; // 0x2b0
	FMulticastInlineDelegate OnClicked; // 0x2f0
	int32_t SubIdx; // 0x300
	int32_t MainIdx; // 0x304
	int32_t CurrentGrade; // 0x308
};

struct UEndpointSubmix : USoundSubmixBase {
	FName EndpointType; // 0x38
	UAudioEndpointSettingsBase* EndpointSettingsClass; // 0x40
	UAudioEndpointSettingsBase* EndpointSettings; // 0x48
};

struct UMovieSceneAkTrack : UMovieSceneTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
	char bIsAMasterTrack : 1; // 0x88
};

struct UBP_FunctionalityHandleComponent_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	FFloatValueFromDataTable ThirstGainRatioByWater; // 0xb8
	float DrinkAmount; // 0xe0
	TArray<FBPItemAmountPair> BPItemAmountPair; // 0xe8
};

struct UBoss_Spider_Move_AnimBP_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x2c8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x2f0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x318
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x340
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x368
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x390
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x3b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x3e0
	FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x460
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x490
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x510
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x540
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x5c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x5f0
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x670
	FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x6a0
	FAnimNode_Slot AnimGraphNode_Slot; // 0x750
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; // 0x798
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x838
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x8d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x978
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x9a0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x9c8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x9f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0xa18
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0xa98
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0xac8
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xb48
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0xb78
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0xbf8
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xc28
	FAnimNode_Root AnimGraphNode_Root; // 0xcd8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0xd08
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xda8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0xe28
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xf30
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xf50
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1058
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1078
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1118
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1198
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x1280
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x13d8
	char CCState; // 0x1400
	UObject* Character; // 0x1408
	bool bMeleeAttack; // 0x1410
	bool Stunned; // 0x1411
	bool Enable Jump; // 0x1412
	float Speed; // 0x1414
	float Direction; // 0x1418
	bool Crouching; // 0x141c
	FRotator SpineRotation; // 0x1420
	FName AttackType; // 0x142c
	FMulticastInlineDelegate OnRocketFired; // 0x1438
	bool bShootRocketLaunch; // 0x1448
	FMulticastInlineDelegate OnAttackAnimFinished; // 0x1450
	float RocketFirePlayRate; // 0x1460
	bool NowInDediSvr; // 0x1464
};

struct UAkSettingsPerUser : UObject {
	FDirectoryPath WwiseWindowsInstallationPath; // 0x28
	FFilePath WwiseMacInstallationPath; // 0x38
	bool EnableAutomaticAssetSynchronization; // 0x48
	FString WaapiIPAddress; // 0x50
	uint32_t WaapiPort; // 0x60
	bool bAutoConnectToWAAPI; // 0x64
	bool AutoSyncSelection; // 0x65
	bool SuppressWwiseProjectPathWarnings; // 0x66
	bool SoundDataGenerationSkipLanguage; // 0x67
};

struct AActor : UObject {
	FActorTickFunction PrimaryActorTick; // 0x28
	char bNetTemporary : 1; // 0x58
	char bNetStartup : 1; // 0x58
	char bOnlyRelevantToOwner : 1; // 0x58
	char bAlwaysRelevant : 1; // 0x58
	char bReplicateMovement : 1; // 0x58
	char bHidden : 1; // 0x58
	char bTearOff : 1; // 0x58
	char bExchangedRoles : 1; // 0x58
	char bNetLoadOnClient : 1; // 0x59
	char bNetUseOwnerRelevancy : 1; // 0x59
	char bRelevantForNetworkReplays : 1; // 0x59
	char bRelevantForLevelBounds : 1; // 0x59
	char bReplayRewindable : 1; // 0x59
	char bAllowTickBeforeBeginPlay : 1; // 0x59
	char bAutoDestroyWhenFinished : 1; // 0x59
	char bCanBeDamaged : 1; // 0x59
	char bBlockInput : 1; // 0x5a
	char bCollideWhenPlacing : 1; // 0x5a
	char bFindCameraComponentWhenViewTarget : 1; // 0x5a
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x5a
	char bIgnoresOriginShifting : 1; // 0x5a
	char bEnableAutoLODGeneration : 1; // 0x5a
	char bIsEditorOnlyActor : 1; // 0x5a
	char bActorSeamlessTraveled : 1; // 0x5a
	char bReplicates : 1; // 0x5b
	char bCanBeInCluster : 1; // 0x5b
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x5b
	char bActorEnableCollision : 1; // 0x5c
	char bActorIsBeingDestroyed : 1; // 0x5c
	EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x5d
	EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x5e
	ENetRole RemoteRole; // 0x5f
	FRepMovement ReplicatedMovement; // 0x60
	float InitialLifeSpan; // 0x94
	float CustomTimeDilation; // 0x98
	FRepAttachment AttachmentReplication; // 0xa0
	AActor* Owner; // 0xe0
	FName NetDriverName; // 0xe8
	ENetRole Role; // 0xf0
	ENetDormancy NetDormancy; // 0xf1
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0xf2
	EAutoReceiveInput AutoReceiveInput; // 0xf3
	int32_t InputPriority; // 0xf4
	UInputComponent* InputComponent; // 0xf8
	float NetCullDistanceSquared; // 0x100
	int32_t NetTag; // 0x104
	float NetUpdateFrequency; // 0x108
	float MinNetUpdateFrequency; // 0x10c
	float NetPriority; // 0x110
	APawn* Instigator; // 0x118
	TArray<AActor*> Children; // 0x120
	USceneComponent* RootComponent; // 0x130
	TArray<AMatineeActor*> ControllingMatineeActors; // 0x138
	TArray<FName> Layers; // 0x150
	TWeakObjectPtr<UChildActorComponent> ParentComponent; // 0x160
	TArray<FName> Tags; // 0x170
	FMulticastSparseDelegate OnTakeAnyDamage; // 0x180
	FMulticastSparseDelegate OnTakePointDamage; // 0x181
	FMulticastSparseDelegate OnTakeRadialDamage; // 0x182
	FMulticastSparseDelegate OnActorBeginOverlap; // 0x183
	FMulticastSparseDelegate OnActorEndOverlap; // 0x184
	FMulticastSparseDelegate OnBeginCursorOver; // 0x185
	FMulticastSparseDelegate OnEndCursorOver; // 0x186
	FMulticastSparseDelegate OnClicked; // 0x187
	FMulticastSparseDelegate OnReleased; // 0x188
	FMulticastSparseDelegate OnInputTouchBegin; // 0x189
	FMulticastSparseDelegate OnInputTouchEnd; // 0x18a
	FMulticastSparseDelegate OnInputTouchEnter; // 0x18b
	FMulticastSparseDelegate OnInputTouchLeave; // 0x18c
	FMulticastSparseDelegate OnActorHit; // 0x18d
	FMulticastSparseDelegate OnDestroyed; // 0x18e
	FMulticastSparseDelegate OnEndPlay; // 0x18f
	TArray<UActorComponent*> InstanceComponents; // 0x1f0
	TArray<UActorComponent*> BlueprintCreatedComponents; // 0x200
};

struct UWBP_ChatCategoryButtons_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* Button_Category; // 0x268
	UImage* Image_Anim; // 0x270
	UImage* Image_Icon; // 0x278
	UOverlay* Overlay_Selected; // 0x280
	UWBP_Tooltip_UI_C* WBP_Tooltip_UI; // 0x288
	E_ChatCategory Category; // 0x290
	UWBP_MainChatWindow_C* MainChatRef; // 0x298
	FText Button Name; // 0x2a0
	FSlateBrush Icon; // 0x2b8
};

struct UClothConfigNv : UClothConfigCommon {
	EClothingWindMethodNv ClothingWindMethod; // 0x28
	FClothConstraintSetupNv VerticalConstraint; // 0x2c
	FClothConstraintSetupNv HorizontalConstraint; // 0x3c
	FClothConstraintSetupNv BendConstraint; // 0x4c
	FClothConstraintSetupNv ShearConstraint; // 0x5c
	float SelfCollisionRadius; // 0x6c
	float SelfCollisionStiffness; // 0x70
	float SelfCollisionCullScale; // 0x74
	FVector Damping; // 0x78
	float Friction; // 0x84
	float WindDragCoefficient; // 0x88
	float WindLiftCoefficient; // 0x8c
	FVector LinearDrag; // 0x90
	FVector AngularDrag; // 0x9c
	FVector LinearInertiaScale; // 0xa8
	FVector AngularInertiaScale; // 0xb4
	FVector CentrifugalInertiaScale; // 0xc0
	float SolverFrequency; // 0xcc
	float StiffnessFrequency; // 0xd0
	float GravityScale; // 0xd4
	FVector GravityOverride; // 0xd8
	bool bUseGravityOverride; // 0xe4
	float TetherStiffness; // 0xe8
	float TetherLimit; // 0xec
	float CollisionThickness; // 0xf0
	float AnimDriveSpringStiffness; // 0xf4
	float AnimDriveDamperStiffness; // 0xf8
	EClothingWindMethod_Legacy WindMethod; // 0xfc
	FClothConstraintSetup_Legacy VerticalConstraintConfig; // 0x100
	FClothConstraintSetup_Legacy HorizontalConstraintConfig; // 0x110
	FClothConstraintSetup_Legacy BendConstraintConfig; // 0x120
	FClothConstraintSetup_Legacy ShearConstraintConfig; // 0x130
};

struct UDatasmithStaticMeshIFCImportData : UDatasmithStaticMeshImportData {
	FString SourceGlobalId; // 0x28
};

struct UFacility_Pannel_SK_Skeleton_AnimBlueprint_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8
	bool Connect; // 0x340
};

struct UMaterialExpressionCeil : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct USubmixEffectReverbPreset : USoundEffectSubmixPreset {
	FSubmixEffectReverbSettings Settings; // 0xd0
};

struct UDistributionFloat : UDistribution {
	char bCanBeBaked : 1; // 0x30
	char bBakedDataSuccesfully : 1; // 0x30
};

struct UNetworkSettings : UDeveloperSettings {
	char bVerifyPeer : 1; // 0x38
	char bEnableMultiplayerWorldOriginRebasing : 1; // 0x38
	int32_t MaxRepArraySize; // 0x3c
	int32_t MaxRepArrayMemory; // 0x40
	TArray<FNetworkEmulationProfileDescription> NetworkEmulationProfiles; // 0x48
};

struct USoundSourceBus : USoundWave {
	ESourceBusChannels SourceBusChannels; // 0x370
	float SourceBusDuration; // 0x374
	UAudioBus* AudioBus; // 0x378
	char bAutoDeactivateWhenSilent : 1; // 0x380
};

struct UMovieSceneComponentMaterialTrack : UMovieSceneMaterialTrack {
	int32_t MaterialIndex; // 0x90
};

struct UWBP_UI_ListingHovering_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Hovered; // 0x268
	bool Mouse Over; // 0x270
	FItemInventory Item; // 0x278
	UBP_PlayerInventoryComponent_C* Inventory Component; // 0x2b0
	FVector2D Icon Image Size; // 0x2b8
	float Tooltip Delay; // 0x2c0
	bool Selected; // 0x2c4
	bool Allow Selection; // 0x2c5
	UWBP_Tooltip_C* Tooltip Widget; // 0x2c8
	bool Convert Slot; // 0x2d0
	int32_t Slot Number; // 0x2d4
	bool UseInGameUI; // 0x2d8
	FItemGeneralInfo generalinfo; // 0x2e0
	bool bClickSound; // 0x430
};

struct UBreakableTreeCollisionComponent : UShapeComponent {
	UPrimitiveComponent* OriginalPrimitiveComp; // 0x458
};

struct UAISense_Damage : UAISense {
	TArray<FAIDamageEvent> RegisteredEvents; // 0x80
};

struct UWBP_UI_Tooltip_TextOnly_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* Text_Tooltip; // 0x268
	UTextBlock* Text_Tooltip_Desc; // 0x270
	FText In Text; // 0x278
	FText In Desc; // 0x290
};

struct UWBP_HUD_Dialogue_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Disappear; // 0x268
	UWidgetAnimation* Appear; // 0x270
	UGridPanel* GridPanel_40; // 0x278
	UImage* Image_Portrait; // 0x280
	UTextBlock* Text_Dialogue; // 0x288
	UTextBlock* Text_Name; // 0x290
	bool bOpened; // 0x298
	float WaitTime; // 0x29c
};

struct UWBP_Radiogram_4010104_C : UUserWidget {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x260
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x268
	UWBP_RadiogramListing_C* WBP_RadiogramListing_2; // 0x270
	UWBP_RadiogramListing_C* WBP_RadiogramListing_3; // 0x278
	UWBP_RadiogramListing_C* WBP_RadiogramListing_4; // 0x280
	UWBP_RadiogramListing_C* WBP_RadiogramListing_5; // 0x288
};

struct ABP_StickyBomb_C : ABP_MineBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x8c0
};

struct UWBP_Radiogram_6010110_C : UWBP_radiogram_CustomBase_C {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x298
	UTextBlock* TextBlock; // 0x2a0
	UWBP_RadiogramListing_C* WBP_RadiogramListing_2; // 0x2a8
};

struct UBTService_StressReducer_C : UBTService_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x98
	float ReduceStressInterval; // 0xa0
	FTimerHandle ReduceStressTimerHandler; // 0xa8
	FBlackboardKeySelector KEYTargetActor; // 0xb0
	FBlackboardKeySelector KEYStress; // 0xd8
};

struct AEmitter : AActor {
	UParticleSystemComponent* ParticleSystemComponent; // 0x220
	char bDestroyOnSystemFinish : 1; // 0x228
	char bPostUpdateTickGroup : 1; // 0x228
	char bCurrentlyActive : 1; // 0x228
	FMulticastInlineDelegate OnParticleSpawn; // 0x230
	FMulticastInlineDelegate OnParticleBurst; // 0x240
	FMulticastInlineDelegate OnParticleDeath; // 0x250
	FMulticastInlineDelegate OnParticleCollide; // 0x260
};

struct USourceEffectStereoDelayPreset : USoundEffectSourcePreset {
	FSourceEffectStereoDelaySettings Settings; // 0xb4
};

struct UBasicReplicationGraph : UReplicationGraph {
	UReplicationGraphNode_GridSpatialization2D* GridNode; // 0x498
	UReplicationGraphNode_ActorList* AlwaysRelevantNode; // 0x4a0
	TArray<FConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList; // 0x4a8
	TArray<AActor*> ActorsWithoutNetConnection; // 0x4b8
};

struct UButtonStyleAsset : UObject {
	FButtonStyle ButtonStyle; // 0x28
};

struct UParticleModuleRotationRate_Seeded : UParticleModuleRotationRate {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x60
};

struct AARSharedWorldGameMode : AGameMode {
	int32_t BufferSizePerChunk; // 0x308
};

struct UABP_SupplyDrop_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x320
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x348
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x370
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x3f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x420
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x4a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4d0
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x550
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x580
	bool IsOpen; // 0x630
};

struct ABuildPartBase : AActor {
	TArray<EBuildLayoutType> BuildLayoutList; // 0x220
	bool bIsTickable; // 0x230
	bool bClientIgnoreTickableOptimize; // 0x231
	TArray<FString> Owners_Internal; // 0x238
	bool bNeedOwnersReliable; // 0x248
};

struct ALevelScriptActor : AActor {
	char bInputEnabled : 1; // 0x220
};

struct UEditableTextBox : UWidget {
	FText Text; // 0x108
	FDelegate TextDelegate; // 0x120
	FEditableTextBoxStyle WidgetStyle; // 0x130
	USlateWidgetStyleAsset* Style; // 0x928
	FText HintText; // 0x930
	FDelegate HintTextDelegate; // 0x948
	FSlateFontInfo Font; // 0x958
	FLinearColor ForegroundColor; // 0x9b0
	FLinearColor BackgroundColor; // 0x9c0
	FLinearColor ReadOnlyForegroundColor; // 0x9d0
	bool IsReadOnly; // 0x9e0
	bool IsPassword; // 0x9e1
	float MinimumDesiredWidth; // 0x9e4
	FMargin Padding; // 0x9e8
	bool IsCaretMovedWhenGainFocus; // 0x9f8
	bool SelectAllTextWhenFocused; // 0x9f9
	bool RevertTextOnEscape; // 0x9fa
	bool ClearKeyboardFocusOnCommit; // 0x9fb
	bool SelectAllTextOnCommit; // 0x9fc
	bool AllowContextMenu; // 0x9fd
	EVirtualKeyboardType KeyboardType; // 0x9fe
	FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x9ff
	EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0xa00
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xa01
	ETextJustify Justification; // 0xa02
	FShapedTextOptions ShapedTextOptions; // 0xa03
	FMulticastInlineDelegate OnTextChanged; // 0xa08
	FMulticastInlineDelegate OnTextCommitted; // 0xa18
};

struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	ETerrainCoordMappingType MappingType; // 0x40
	ELandscapeCustomizedCoordType CustomUVType; // 0x41
	float MappingScale; // 0x44
	float MappingRotation; // 0x48
	float MappingPanU; // 0x4c
	float MappingPanV; // 0x50
};

struct UAnimationSettings : UDeveloperSettings {
	int32_t CompressCommandletVersion; // 0x38
	TArray<FString> KeyEndEffectorsMatchNameArray; // 0x40
	bool ForceRecompression; // 0x50
	bool bForceBelowThreshold; // 0x51
	bool bFirstRecompressUsingCurrentOrDefault; // 0x52
	bool bRaiseMaxErrorToExisting; // 0x53
	bool bEnablePerformanceLog; // 0x54
	bool bStripAnimationDataOnDedicatedServer; // 0x55
	bool bTickAnimationOnSkeletalMeshInit; // 0x56
	TArray<FCustomAttributeSetting> BoneCustomAttributesNames; // 0x58
	TArray<FString> BoneNamesWithCustomAttributes; // 0x68
	TMap<FName, ECustomAttributeBlendType> AttributeBlendModes; // 0x78
	ECustomAttributeBlendType DefaultAttributeBlendMode; // 0xc8
};

struct UARTrackableNotifyComponent : UActorComponent {
	FMulticastInlineDelegate OnAddTrackedGeometry; // 0xb0
	FMulticastInlineDelegate OnUpdateTrackedGeometry; // 0xc0
	FMulticastInlineDelegate OnRemoveTrackedGeometry; // 0xd0
	FMulticastInlineDelegate OnAddTrackedPlane; // 0xe0
	FMulticastInlineDelegate OnUpdateTrackedPlane; // 0xf0
	FMulticastInlineDelegate OnRemoveTrackedPlane; // 0x100
	FMulticastInlineDelegate OnAddTrackedPoint; // 0x110
	FMulticastInlineDelegate OnUpdateTrackedPoint; // 0x120
	FMulticastInlineDelegate OnRemoveTrackedPoint; // 0x130
	FMulticastInlineDelegate OnAddTrackedImage; // 0x140
	FMulticastInlineDelegate OnUpdateTrackedImage; // 0x150
	FMulticastInlineDelegate OnRemoveTrackedImage; // 0x160
	FMulticastInlineDelegate OnAddTrackedFace; // 0x170
	FMulticastInlineDelegate OnUpdateTrackedFace; // 0x180
	FMulticastInlineDelegate OnRemoveTrackedFace; // 0x190
	FMulticastInlineDelegate OnAddTrackedEnvProbe; // 0x1a0
	FMulticastInlineDelegate OnUpdateTrackedEnvProbe; // 0x1b0
	FMulticastInlineDelegate OnRemoveTrackedEnvProbe; // 0x1c0
	FMulticastInlineDelegate OnAddTrackedObject; // 0x1d0
	FMulticastInlineDelegate OnUpdateTrackedObject; // 0x1e0
	FMulticastInlineDelegate OnRemoveTrackedObject; // 0x1f0
};

struct UMovieSceneEntitySystem : UObject {
	UMovieSceneEntitySystemLinker* Linker; // 0x28
};

struct UBlackboardKeyType_String : UBlackboardKeyType {
	FString StringValue; // 0x30
};

struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
	FAppleImageUtilsImageConversionResult ConversionResult; // 0x60
};

struct UAISenseConfig_Damage : UAISenseConfig {
	UAISense_Damage* Implementation; // 0x48
};

struct UAkIOSInitializationSettings : UObject {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkAudioSession AudioSession; // 0x90
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0
	FAkAdvancedInitializationSettings AdvancedSettings; // 0xc8
};

struct UUserInterfaceSettings : UDeveloperSettings {
	ERenderFocusRule RenderFocusRule; // 0x38
	TMap<EMouseCursor, FHardwareCursorReference> HardwareCursors; // 0x40
	TMap<EMouseCursor, FSoftClassPath> SoftwareCursors; // 0x90
	FSoftClassPath DefaultCursor; // 0xe0
	FSoftClassPath TextEditBeamCursor; // 0xf8
	FSoftClassPath CrosshairsCursor; // 0x110
	FSoftClassPath HandCursor; // 0x128
	FSoftClassPath GrabHandCursor; // 0x140
	FSoftClassPath GrabHandClosedCursor; // 0x158
	FSoftClassPath SlashedCircleCursor; // 0x170
	float ApplicationScale; // 0x188
	EUIScalingRule UIScaleRule; // 0x18c
	FSoftClassPath CustomScalingRuleClass; // 0x190
	FRuntimeFloatCurve UIScaleCurve; // 0x1a8
	bool bAllowHighDPIInGameMode; // 0x230
	FIntPoint DesignScreenSize; // 0x234
	bool bLoadWidgetsOnDedicatedServer; // 0x23c
	TArray<UObject*> CursorClasses; // 0x240
	UObject* CustomScalingRuleClassInstance; // 0x250
	UDPICustomScalingRule* CustomScalingRule; // 0x258
};

struct UMaterialExpressionClearCoatNormalCustomOutput : UMaterialExpressionCustomOutput {
	FExpressionInput Input; // 0x40
};

struct UAnimationSharingStateProcessor : UObject {
	TSoftObjectPtr<UEnum> AnimationStateEnum; // 0x28
};

struct UMovieSceneByteTrack : UMovieScenePropertyTrack {
	UEnum* Enum; // 0xb0
};

struct UMovieSceneMediaPlayerPropertySection : UMovieSceneSection {
	UMediaSource* MediaSource; // 0xe8
	bool bLoop; // 0xf0
};

struct ALandscapeProxy : AActor {
	ULandscapeSplinesComponent* SplineComponent; // 0x220
	FGuid LandscapeGuid; // 0x228
	FIntPoint LandscapeSectionOffset; // 0x238
	int32_t MaxLODLevel; // 0x240
	float LODDistanceFactor; // 0x244
	ELandscapeLODFalloff LODFalloff; // 0x248
	float ComponentScreenSizeToUseSubSections; // 0x24c
	float LOD0ScreenSize; // 0x250
	float LOD0DistributionSetting; // 0x254
	float LODDistributionSetting; // 0x258
	float TessellationComponentScreenSize; // 0x25c
	bool UseTessellationComponentScreenSizeFalloff; // 0x260
	float TessellationComponentScreenSizeFalloff; // 0x264
	int32_t OccluderGeometryLOD; // 0x268
	int32_t StaticLightingLOD; // 0x26c
	UPhysicalMaterial* DefaultPhysMaterial; // 0x270
	float StreamingDistanceMultiplier; // 0x278
	UMaterialInterface* LandscapeMaterial; // 0x280
	UMaterialInterface* LandscapeHoleMaterial; // 0x2a8
	TArray<FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride; // 0x2b0
	bool bMeshHoles; // 0x2c0
	char MeshHolesMaxLod; // 0x2c1
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x2c8
	int32_t VirtualTextureNumLods; // 0x2d8
	int32_t VirtualTextureLodBias; // 0x2dc
	ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x2e0
	float NegativeZBoundsExtension; // 0x2e4
	float PositiveZBoundsExtension; // 0x2e8
	TArray<ULandscapeComponent*> LandscapeComponents; // 0x2f0
	TArray<ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x300
	TArray<UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x310
	bool bHasLandscapeGrass; // 0x384
	float StaticLightingResolution; // 0x388
	char CastShadow : 1; // 0x38c
	char bCastDynamicShadow : 1; // 0x38c
	char bCastStaticShadow : 1; // 0x38c
	char bCastFarShadow : 1; // 0x390
	char bCastHiddenShadow : 1; // 0x394
	char bCastShadowAsTwoSided : 1; // 0x398
	char bAffectDistanceFieldLighting : 1; // 0x39c
	FLightingChannels LightingChannels; // 0x39d
	char bUseMaterialPositionOffsetInStaticLighting : 1; // 0x3a0
	char bRenderCustomDepth : 1; // 0x3a0
	ERendererStencilMask CustomDepthStencilWriteMask; // 0x3a4
	int32_t CustomDepthStencilValue; // 0x3a8
	float LDMaxDrawDistance; // 0x3ac
	FLightmassPrimitiveSettings LightmassSettings; // 0x3b0
	int32_t CollisionMipLevel; // 0x3c8
	int32_t SimpleCollisionMipLevel; // 0x3cc
	float CollisionThickness; // 0x3d0
	FBodyInstance BodyInstance; // 0x3d8
	char bGenerateOverlapEvents : 1; // 0x530
	char bBakeMaterialPositionOffsetIntoCollision : 1; // 0x530
	int32_t ComponentSizeQuads; // 0x534
	int32_t SubsectionSizeQuads; // 0x538
	int32_t NumSubsections; // 0x53c
	char bUsedForNavigation : 1; // 0x540
	char bFillCollisionUnderLandscapeForNavmesh : 1; // 0x540
	bool bUseDynamicMaterialInstance; // 0x544
	ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x545
	bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x546
	bool bHasLayersContent; // 0x547
	TMap<UTexture2D*, ULandscapeWeightmapUsage*> WeightmapUsageMap; // 0x548
};

struct UMovieSceneTrackInstanceSystem : UMovieSceneEntitySystem {
	UMovieSceneTrackInstanceInstantiator* Instantiator; // 0x40
};

struct UWBP_Objective_LM3_C : UWBP_ObjectiveBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	UTextBlock* Text_Objective; // 0x278
	UWBP_ObjectiveFrame_C* WBP_ObjectiveFrame; // 0x280
	UWBP_ObjectiveListing_C* WBP_ObjectiveListing; // 0x288
	UWBP_ObjectiveListing_C* WBP_ObjectiveListing_Air; // 0x290
	UWBP_ObjectiveListing_C* WBP_ObjectiveListing_Humid; // 0x298
	UWBP_ObjectiveListing_C* WBP_ObjectiveListing_Soil; // 0x2a0
	UWBP_ObjectiveListing_C* WBP_ObjectiveListing_Solar; // 0x2a8
	UWidgetSwitcher* WS_Objectives; // 0x2b0
	bool IsAllOccupyed; // 0x2b8
	bool bElevatorCall; // 0x2b9
};

struct ANavMeshBoundsVolume : AVolume {
	FNavAgentSelector SupportedAgents; // 0x258
};

struct UWBP_RingSegmentBase_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Hovered; // 0x268
	UWidgetAnimation* Anim_Open; // 0x270
	UImage* Background; // 0x278
	UImage* Image_Icon; // 0x280
	UOverlay* Overlay_Column; // 0x288
	int32_t Equal Parts; // 0x290
	int32_t Row; // 0x294
	int32_t Column; // 0x298
	int32_t UID; // 0x29c
	FText Segment Name; // 0x2a0
	FText Segment Description; // 0x2b8
	UTexture2D* Icon; // 0x2d0
	FSlateColor Base Color; // 0x2d8
	E_SegmentType Segment Type; // 0x300
	USoundBase* Hover Sound; // 0x308
	bool bSelected; // 0x310
	bool Enabled; // 0x311
	FS_BuildPartInfo Build Part Info; // 0x318
	float Degree Low; // 0x518
	float Degree High; // 0x51c
};

struct UOperatorField : UFieldNodeBase {
	float Magnitude; // 0xb0
	UFieldNodeBase* RightField; // 0xb8
	UFieldNodeBase* LeftField; // 0xc0
	EFieldOperationType Operation; // 0xc8
};

struct UAnimNotifyState_TimedNiagaraEffect : UAnimNotifyState {
	UNiagaraSystem* Template; // 0x30
	FName SocketName; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	bool bDestroyAtEnd; // 0x58
};

struct UCloudWatchLogsAssociateKmsKey : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct ARectLight : ALight {
	URectLightComponent* RectLightComponent; // 0x230
};

struct USynthComponentMonoWaveTable : USynthComponent {
	FMulticastInlineDelegate OnTableAltered; // 0x6c0
	FMulticastInlineDelegate OnNumTablesChanged; // 0x6d0
	UMonoWaveTableSynthPreset* CurrentPreset; // 0x6e0
};

struct UChaosClothSharedSimConfig : UClothSharedConfigCommon {
	int32_t IterationCount; // 0x28
	int32_t SubdivisionCount; // 0x2c
	float SelfCollisionThickness; // 0x30
	float CollisionThickness; // 0x34
	bool bUseDampingOverride; // 0x38
	float Damping; // 0x3c
	bool bUseGravityOverride; // 0x40
	float GravityScale; // 0x44
	FVector Gravity; // 0x48
	bool bUseLocalSpaceSimulation; // 0x54
	bool bUseXPBDConstraints; // 0x55
};

struct UWBP_Main_Radiogram_TreeListing_S_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_1; // 0x268
	UCanvasPanel* CanvasPanel_Tree; // 0x270
	UImage* Image_30; // 0x278
	UImage* Image_Icon; // 0x280
	UImage* Image_Locked; // 0x288
	UImage* Image_Tree; // 0x290
	UImage* New; // 0x298
	UTextBlock* Text_Title; // 0x2a0
	UImage* TutorialTint; // 0x2a8
	UWBP_UI_SlotHovering_C* WBP_UI_SlotHovering; // 0x2b0
	FS_RadiogramGuide RadiogramGuide; // 0x2b8
	UObjectiveSystemManagerComponent_C* ObjectiveComponent; // 0x398
	int32_t QuestIdx; // 0x3a0
	int32_t GroupID; // 0x3a4
	UWBP_Main_Radiogram_Description_C* RadiogramDescription; // 0x3a8
	FMulticastInlineDelegate OnSublistClicked; // 0x3b0
	bool bInitialized; // 0x3c0
	UWBP_Main_RadiogramListing_L_C* MainCategory; // 0x3c8
	bool bUnlocked; // 0x3d0
};

struct AAkAmbientSound : AActor {
	UAkAudioEvent* AkAudioEvent; // 0x220
	UAkComponent* AkComponent; // 0x228
	bool StopWhenOwnerIsDestroyed; // 0x230
	bool AutoPost; // 0x231
};

struct UPostEventAtLocationAsync : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate Completed; // 0x30
};

struct UWBP_HUD_Guide_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Open; // 0x268
	UWBP_Key_C* A; // 0x270
	UWBP_Key_C* D; // 0x278
	UInvalidationBox* InvalidationBox_1; // 0x280
	UOverlay* Overlay_Move; // 0x288
	UWBP_Key_C* S; // 0x290
	UVerticalBox* verticalBox_Default; // 0x298
	UVerticalBox* VerticalBox_Vehicle; // 0x2a0
	UWBP_Key_C* W; // 0x2a8
	UWBP_HUD_GuideListing_C* WBP_HUD_GuideListing_Accel; // 0x2b0
	UWBP_HUD_GuideListing_C* WBP_HUD_GuideListing_AutoRun; // 0x2b8
	UWBP_HUD_GuideListing_C* WBP_HUD_GuideListing_Backward; // 0x2c0
	UWBP_HUD_GuideListing_C* WBP_HUD_GuideListing_Brake; // 0x2c8
	UWBP_HUD_GuideListing_C* WBP_HUD_GuideListing_Crafting; // 0x2d0
	UWBP_HUD_GuideListing_C* WBP_HUD_GuideListing_Dismount; // 0x2d8
	UWBP_HUD_GuideListing_C* WBP_HUD_GuideListing_FreeView; // 0x2e0
	UWBP_HUD_GuideListing_C* WBP_HUD_GuideListing_Headlight; // 0x2e8
	UWBP_HUD_GuideListing_C* WBP_HUD_GuideListing_Honk; // 0x2f0
	UWBP_HUD_GuideListing_C* WBP_HUD_GuideListing_Inventory; // 0x2f8
	UWBP_HUD_GuideListing_C* WBP_HUD_GuideListing_Landmark; // 0x300
	UWBP_HUD_GuideListing_C* WBP_HUD_GuideListing_MachineArm; // 0x308
	UWBP_HUD_GuideListing_C* WBP_HUD_GuideListing_Mail; // 0x310
	UWBP_HUD_GuideListing_C* WBP_HUD_GuideListing_map; // 0x318
	UWBP_HUD_GuideListing_C* WBP_HUD_GuideListing_Marker; // 0x320
	UWBP_HUD_GuideListing_C* WBP_HUD_GuideListing_Mode_Build; // 0x328
	UWBP_HUD_GuideListing_C* WBP_HUD_GuideListing_Mode_Manage; // 0x330
	UWBP_HUD_GuideListing_C* WBP_HUD_GuideListing_Mouse; // 0x338
	UWBP_HUD_GuideListing_C* WBP_HUD_GuideListing_Radiogram; // 0x340
	UWBP_HUD_GuideListing_C* WBP_HUD_GuideListing_Seat; // 0x348
	UWBP_HUD_GuideListing_C* WBP_HUD_GuideListing_Sprint; // 0x350
	UWBP_HUD_GuideListing_C* WBP_HUD_GuideListing_Survivor; // 0x358
	UWBP_HUD_GuideListing_C* WBP_HUD_GuideListing_Vision; // 0x360
	UWidgetSwitcher* WidgetSwitcher_Guide; // 0x368
	int32_t LastExecTutorialStep; // 0x370
	TArray<UWBP_HUD_GuideListing_C*> VisibleList; // 0x378
	TArray<UWBP_HUD_GuideListing_C*> HighlightList; // 0x388
	UBP_GameSettings_C* Game Settings; // 0x398
};

struct UWBP_MainFrame_Toolbar_Checkbox_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UCheckBox* CheckBox_273; // 0x268
	UImage* Image_202; // 0x270
	UWBP_Tooltip_UI_C* WBP_Tooltip_UI; // 0x278
	FMulticastInlineDelegate OnCheckStateChanged; // 0x280
	UObject* Icon; // 0x290
	bool Tooltip; // 0x298
	FText Name; // 0x2a0
};

struct UAnimNotify_PlayMontageNotify : UAnimNotify {
	FName NotifyName; // 0x38
};

struct UAnimBP_TF-Rifle_R_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x2f8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x340
};

struct AGeometryCacheActor : AActor {
	UGeometryCacheComponent* GeometryCacheComponent; // 0x220
};

struct USkeletalBodySetup : UBodySetup {
	bool bSkipScaleFromAnimation; // 0x2a8
	TArray<FPhysicalAnimationProfile> PhysicalAnimationData; // 0x2b0
};

struct UMaterialExpressionFunctionInput : UMaterialExpression {
	FExpressionInput Preview; // 0x40
	FName InputName; // 0x54
	FString Description; // 0x60
	FGuid ID; // 0x70
	EFunctionInputType InputType; // 0x80
	FVector4 PreviewValue; // 0x90
	char bUsePreviewValueAsDefault : 1; // 0xa0
	int32_t SortPriority; // 0xa4
	char bCompilingFunctionPreview : 1; // 0xa8
};

struct UAnimBP_Jetcharger_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x340
};

struct UGameplayTask_TimeLimitedExecution : UGameplayTask {
	FMulticastInlineDelegate OnFinished; // 0x68
	FMulticastInlineDelegate OnTimeExpired; // 0x78
};

struct UWBP_Main_Inventory_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWBP_MainFrame_C* BP_UI_Frame; // 0x268
	UUniformGridPanel* InventoryGrid; // 0x270
	UWBP_MainFrame_Header_C* WBP_MainFrame_Header; // 0x278
	bool DragEnabled; // 0x280
	bool IsMouseButtonDown; // 0x281
	FVector2D LastMousePosition; // 0x284
	bool IsDrag; // 0x28c
	UCanvasPanelSlot* ParentSlot; // 0x290
	float SafetyZoneY; // 0x298
	float SafetyZoneX; // 0x29c
	UBP_PlayerInventoryComponent_C* Inventory Component; // 0x2a0
	TArray<UWBP_Slot_Inventory_C*> Inventory Slots; // 0x2a8
	int32_t Colums; // 0x2b8
	UWBP_HUD_C* Parent Widget; // 0x2c0
};

struct UCloudWatchLogsCreateLogGroup : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct ABP_InsertBatteryPackBase_C : ABP_ConsumeHoldable_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4b0
	UStaticMeshComponent* StaticMesh; // 0x4b8
	float ChargedAmount; // 0x4c0
};

struct UParticleModuleLifetime : UParticleModuleLifetimeBase {
	FRawDistributionFloat LifeTime; // 0x30
};

struct AReflectionCapture : AActor {
	UReflectionCaptureComponent* CaptureComponent; // 0x220
};

struct USQSListQueueTags : UAwsSQSAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UBP_SurvivalGameSave_C : USaveGame {
	TArray<FS_PlayerSave> PlayerCharacterSaves; // 0x28
	TArray<FS_SaveItem> Item Saves; // 0x38
	TArray<FS_SaveStorage> Storage Component Saves; // 0x48
	TArray<FS_ItemSpawnerSave> Item Spawners Items; // 0x58
	TArray<FS_BuildingSave> Build Part Saves; // 0x68
	TArray<FS_DeadPlayerSave> DeadPlayerSaves; // 0x78
	float ServerGameTimeOffset; // 0x88
	TMap<FString, FS_VehicleSpawner> VehicleSpawnerSaveData; // 0x90
	int32_t ResetCount; // 0xe0
	TArray<FS_LandmarkSaveInfo> LandmarkInfos; // 0xe8
	TMap<FString, float> BanList; // 0xf8
	TMap<FString, float> ChatBlockList; // 0x148
	TArray<FS_ServerNotice> ServerNotice; // 0x198
	TMap<FString, FS_RetrieveSystemInfo> RetrieveSystemInfo; // 0x1a8
	TMap<FString, FMailDataArray> UserMailSystem; // 0x1f8
	TMap<FString, FS_MachineArmAbilitySave> MachineArmInfo; // 0x248
	TMap<FString, FS_UserCustomizeInfo> UserCustomizeInfo; // 0x298
	TMap<FString, FUserSessionInfo> UserSessionInfo; // 0x2e8
	TMap<FString, FIntArray> UserCraftNotifyList; // 0x338
	TMap<FString, int32_t> UserCurrentTutorialStepMap; // 0x388
	TMap<FString, FS_TutorialGoalDataArray> UserTutorialProgressData; // 0x3d8
	bool Restart; // 0x428
	TArray<FS_SurvivalRank> SummaryRank; // 0x430
	TArray<FS_SurvivalRank> rank; // 0x440
	TMap<FString, FS_SurvivalRank> RankMap; // 0x450
	TArray<FS_SaveTeamInfo> TeamsInfo; // 0x4a0
	TMap<FString, FUserTerraPointInfo> UserTerraShopInfo; // 0x4b0
	float EndTime; // 0x500
	bool PrepareEnd; // 0x504
};

struct UEnvQueryGenerator_Cone : UEnvQueryGenerator_ProjectedPoints {
	FAIDataProviderFloatValue AlignedPointsDistance; // 0x80
	FAIDataProviderFloatValue ConeDegrees; // 0xb8
	FAIDataProviderFloatValue AngleStep; // 0xf0
	FAIDataProviderFloatValue Range; // 0x128
	UEnvQueryContext* CenterActor; // 0x160
	char bIncludeContextLocation : 1; // 0x168
};

struct UARCandidateImage : UDataAsset {
	UTexture2D* CandidateTexture; // 0x30
	FString FriendlyName; // 0x38
	float Width; // 0x48
	float Height; // 0x4c
	EARCandidateImageOrientation Orientation; // 0x50
};

struct USourceEffectFilterPreset : USoundEffectSourcePreset {
	FSourceEffectFilterSettings Settings; // 0xb0
};

struct UCloudWatchLogsTagLogGroup : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UWBP_HoldableKeyGuide_C : UWBP_HoldableGuideUIBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UVerticalBox* GuideList; // 0x270
	TArray<FS_InteractionKeyGuide> PrevKeyGuide; // 0x278
};

struct UBP_SkillSystemComponent_C : USkillSystemComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xe8
	TArray<ABP_SkillBase_C*> ProtocolInstance; // 0xf0
	TMap<E_MemoryCardAbilityType, float> TotalAbility; // 0x100
};

struct ULocalPlayer : UPlayer {
	UGameViewportClient* ViewportClient; // 0x70
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x94
	APlayerController* PendingLevelPlayerControllerClass; // 0x98
	char bSentSplitJoin : 1; // 0xa0
	int32_t ControllerId; // 0xb8
};

struct UNiagaraSystem : UFXSystemAsset {
	bool bDumpDebugSystemInfo; // 0x30
	bool bDumpDebugEmitterInfo; // 0x31
	bool bRequireCurrentFrameData; // 0x32
	char bFixedBounds : 1; // 0x34
	UNiagaraEffectType* EffectType; // 0x38
	bool bOverrideScalabilitySettings; // 0x40
	TArray<FNiagaraSystemScalabilityOverride> ScalabilityOverrides; // 0x48
	FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides; // 0x58
	TArray<FNiagaraEmitterHandle> EmitterHandles; // 0x68
	TArray<UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides; // 0x78
	UNiagaraScript* SystemSpawnScript; // 0x88
	UNiagaraScript* SystemUpdateScript; // 0x90
	FNiagaraSystemCompiledData SystemCompiledData; // 0xa8
	FNiagaraUserRedirectionParameterStore ExposedParameters; // 0x2c0
	FBox FixedBounds; // 0x388
	bool bAutoDeactivate; // 0x3a4
	float WarmupTime; // 0x3a8
	int32_t WarmupTickCount; // 0x3ac
	float WarmupTickDelta; // 0x3b0
	bool bHasSystemScriptDIsWithPerInstanceData; // 0x3b4
	TArray<FName> UserDINamesReadInSystemScripts; // 0x3b8
};

struct UBuildPatchManifest : UObject {
	char ManifestFileVersion; // 0x28
	bool bIsFileData; // 0x29
	uint32_t appId; // 0x2c
	FString AppName; // 0x30
	FString BuildVersion; // 0x40
	FString LaunchExe; // 0x50
	FString LaunchCommand; // 0x60
	TSet<FString> PrereqIds; // 0x70
	FString PrereqName; // 0xc0
	FString PrereqPath; // 0xd0
	FString PrereqArgs; // 0xe0
	TArray<FFileManifestData> FileManifestList; // 0xf0
	TArray<FChunkInfoData> ChunkList; // 0x100
	TArray<FCustomFieldData> CustomFields; // 0x110
};

struct UWBP_Functionality_TransferTerrasiteMenu_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UUniformGridPanel* UniformGridPanel; // 0x268
	UUniformGridPanel* UniformGridPanel_39; // 0x270
	FTerraShopMerchandise TerraShopMerchandise; // 0x278
	int32_t GridInRow; // 0x2b8
	int32_t GridInColumn; // 0x2bc
	int32_t MerchandiesIdx; // 0x2c0
	UWBP_PopUp_TransferTerrasite_C* WBP_PopUpTransferTerrasite; // 0x2c8
	float DailyRecvTime; // 0x2d0
	float EndTime; // 0x2d4
	float StandardSecond; // 0x2d8
	bool IsOutOfDate; // 0x2dc
	TArray<UWBP_Functionality_TransferTerrasiteList_C*> WBP_Functionality_TransferTerrasiteDailyList_Arry; // 0x2e0
	float StartTime; // 0x2f0
	bool IsResetDailyMerchandise; // 0x2f4
	bool IsInitDailiyExpireTime; // 0x2f5
};

struct UFindTurnBasedMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct ULocalMap_Image_C : UUserWidget {
	UImage* Map; // 0x260
};

struct UWBP_Radiogram_6010211_C : UWBP_radiogram_CustomBase_C {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x298
	UTextBlock* TextBlock; // 0x2a0
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x2a8
	UWBP_RadiogramListing_C* WBP_RadiogramListing_2; // 0x2b0
	UWBP_RadiogramListing_C* WBP_RadiogramListing_3; // 0x2b8
	UWBP_RadiogramListing_C* WBP_RadiogramListing_4; // 0x2c0
	UWBP_RadiogramListing_C* WBP_RadiogramListing_5; // 0x2c8
};

struct AAIController : AController {
	char bStartAILogicOnPossess : 1; // 0x2d0
	char bStopAILogicOnUnposses : 1; // 0x2d0
	char bLOSflag : 1; // 0x2d0
	char bSkipExtraLOSChecks : 1; // 0x2d0
	char bAllowStrafe : 1; // 0x2d0
	char bWantsPlayerState : 1; // 0x2d0
	char bSetControlRotationFromPawnOrientation : 1; // 0x2d0
	UPathFollowingComponent* PathFollowingComponent; // 0x2d8
	UBrainComponent* BrainComponent; // 0x2e0
	UAIPerceptionComponent* PerceptionComponent; // 0x2e8
	UPawnActionsComponent* ActionsComp; // 0x2f0
	UBlackboardComponent* Blackboard; // 0x2f8
	UGameplayTasksComponent* CachedGameplayTasksComponent; // 0x300
	UNavigationQueryFilter* DefaultNavigationFilterClass; // 0x308
	FMulticastInlineDelegate ReceiveMoveCompleted; // 0x310
};

struct UDragDropOperation : UObject {
	FString Tag; // 0x28
	UObject* Payload; // 0x38
	UWidget* DefaultDragVisual; // 0x40
	EDragPivot Pivot; // 0x48
	FVector2D Offset; // 0x4c
	FMulticastInlineDelegate OnDrop; // 0x58
	FMulticastInlineDelegate OnDragCancelled; // 0x68
	FMulticastInlineDelegate OnDragged; // 0x78
};

struct UNiagaraSimulationStageGeneric : UNiagaraSimulationStageBase {
	ENiagaraIterationSource IterationSource; // 0x40
	int32_t Iterations; // 0x44
	char bSpawnOnly : 1; // 0x48
	char bDisablePartialParticleUpdate : 1; // 0x48
	FNiagaraVariableDataInterfaceBinding DataInterface; // 0x50
};

struct ABP_MasterStorage_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UBP_CollisionByDistanceComponent_C* BP_CollisionByDistanceComponent; // 0x228
	UStaticMeshComponent* BoxBody; // 0x230
	USceneComponent* Scene; // 0x238
	UBP_StorageInventoryComponent_C* BP_StorageInventoryComponent; // 0x240
	float Timeline_Destroy_Opacity_3D0FB81844B98952311F7CBC787DA0C0; // 0x248
	ETimelineDirection Timeline_Destroy__Direction_3D0FB81844B98952311F7CBC787DA0C0; // 0x24c
	UTimelineComponent* Timeline_Destroy; // 0x250
	bool Use Interact Time; // 0x258
	float Time To Interact; // 0x25c
	FText Interact Action Text; // 0x260
	FText Interact Timer Text; // 0x278
	FSlateBrush Interact Brush; // 0x290
	UAudioComponent* Interact Sound; // 0x318
	USoundBase* Interact Timer Sound; // 0x320
	bool IsOpened; // 0x328
	float InteractableDistance; // 0x32c
	FText Name; // 0x330
	FMulticastInlineDelegate OnInteract; // 0x348
	USoundBase* OpenSound; // 0x358
	USoundBase* CloseSound; // 0x360
	TArray<UMaterialInstanceDynamic*> BoxDynamicMaterials; // 0x368
	FDataTableRowHandle DropItemTable; // 0x378
	TArray<FItemCodeValue> WeightTable; // 0x388
	UBP_WidgetIndicatorComponent_C* TutorialIndicator; // 0x398
	TArray<int32_t> TutorialIndicatorVisibleStep; // 0x3a0
	FName CollisionProfileName; // 0x3b0
	FVector WidgetIndicatorOffset; // 0x3b8
};

struct UAssetManager : UObject {
	TArray<UObject*> ObjectReferenceList; // 0x2c0
	bool bIsGlobalAsyncScanEnvironment; // 0x2d0
	bool bShouldGuessTypeAndName; // 0x2d1
	bool bShouldUseSynchronousLoad; // 0x2d2
	bool bIsLoadingFromPakFiles; // 0x2d3
	bool bShouldAcquireMissingChunksOnLoad; // 0x2d4
	bool bOnlyCookProductionAssets; // 0x2d5
	bool bIsBulkScanning; // 0x2d6
	bool bIsPrimaryAssetDirectoryCurrent; // 0x2d7
	bool bIsManagementDatabaseCurrent; // 0x2d8
	bool bUpdateManagementDatabaseAfterScan; // 0x2d9
	bool bIncludeOnlyOnDiskAssets; // 0x2da
	bool bHasCompletedInitialScan; // 0x2db
	int32_t NumberOfSpawnedNotifications; // 0x2dc
};

struct UParticleSystemReplay : UObject {
	int32_t ClipIDNumber; // 0x28
};

struct AGameMode : AGameModeBase {
	FName MatchState; // 0x2c0
	char bDelayedStart : 1; // 0x2c8
	int32_t NumSpectators; // 0x2cc
	int32_t NumPlayers; // 0x2d0
	int32_t NumBots; // 0x2d4
	float MinRespawnDelay; // 0x2d8
	int32_t NumTravellingPlayers; // 0x2dc
	ULocalMessage* EngineMessageClass; // 0x2e0
	TArray<APlayerState*> InactivePlayerArray; // 0x2e8
	float InactivePlayerStateLifeSpan; // 0x2f8
	int32_t MaxInactivePlayers; // 0x2fc
	bool bHandleDedicatedServerReplays; // 0x300
};

struct UPhononOcclusionSourceSettings : UOcclusionPluginSourceSettingsBase {
	EIplDirectOcclusionMode DirectOcclusionMode; // 0x28
	EIplDirectOcclusionMethod DirectOcclusionMethod; // 0x29
	float DirectOcclusionSourceRadius; // 0x2c
	bool DirectAttenuation; // 0x30
	bool AirAbsorption; // 0x31
};

struct ULevelStreaming : UObject {
	TSoftObjectPtr<UWorld> WorldAsset; // 0x28
	FName PackageNameToLoad; // 0x50
	TArray<FName> LODPackageNames; // 0x58
	FTransform LevelTransform; // 0x80
	int32_t LevelLODIndex; // 0xb0
	int32_t StreamingPriority; // 0xb4
	char bShouldBeVisible : 1; // 0xba
	char bShouldBeLoaded : 1; // 0xba
	char bLocked : 1; // 0xba
	char bIsStatic : 1; // 0xba
	char bShouldBlockOnLoad : 1; // 0xba
	char bShouldBlockOnUnload : 1; // 0xbb
	char bDisableDistanceStreaming : 1; // 0xbb
	char bDrawOnLevelStatusMap : 1; // 0xbb
	FLinearColor LevelColor; // 0xbc
	TArray<ALevelStreamingVolume*> EditorStreamingVolumes; // 0xd0
	float MinTimeBetweenVolumeUnloadRequests; // 0xe0
	FMulticastInlineDelegate OnLevelLoaded; // 0xe8
	FMulticastInlineDelegate OnLevelUnloaded; // 0xf8
	FMulticastInlineDelegate OnLevelShown; // 0x108
	FMulticastInlineDelegate OnLevelHidden; // 0x118
	ULevel* LoadedLevel; // 0x128
	ULevel* PendingUnloadLevel; // 0x130
};

struct UCurveLinearColorAtlas : UTexture2D {
	uint32_t TextureSize; // 0x100
	TArray<UCurveLinearColor*> GradientCurves; // 0x108
};

struct UMaterialExpressionScalarParameter : UMaterialExpressionParameter {
	float DefaultValue; // 0x58
	bool bUseCustomPrimitiveData; // 0x5c
	char PrimitiveDataIndex; // 0x5d
};

struct UMaterialExpressionFresnel : UMaterialExpression {
	FExpressionInput ExponentIn; // 0x40
	float Exponent; // 0x54
	FExpressionInput BaseReflectFractionIn; // 0x58
	float BaseReflectFraction; // 0x6c
	FExpressionInput Normal; // 0x70
};

struct UNiagaraDataInterfaceParticleRead : UNiagaraDataInterfaceRWBase {
	FString EmitterName; // 0xd8
};

struct UAkAssetDataSwitchContainer : UAkAssetDataWithMedia {
	TArray<UAkAssetDataSwitchContainerData*> SwitchContainers; // 0x78
	UAkGroupValue* DefaultGroupValue; // 0x88
};

struct UParticleModuleLocationPrimitiveCylinder : UParticleModuleLocationPrimitiveBase {
	char RadialVelocity : 1; // 0xb0
	FRawDistributionFloat StartRadius; // 0xb8
	FRawDistributionFloat StartHeight; // 0xe8
	CylinderHeightAxis HeightAxis; // 0x118
};

struct UParticleModuleSizeScale : UParticleModuleSizeBase {
	FRawDistributionVector SizeScale; // 0x30
	char EnableX : 1; // 0x78
	char EnableY : 1; // 0x78
	char EnableZ : 1; // 0x78
};

struct URotatingMovementComponent : UMovementComponent {
	FRotator RotationRate; // 0xf0
	FVector PivotTranslation; // 0xfc
	char bRotationInLocalSpace : 1; // 0x108
};

struct UExtCharacterMovementComponent : UCharacterMovementComponent {
	bool MirrorRootMotion; // 0xb00
	EAxis MirrorAxis; // 0xb01
	EAxis FlipAxis; // 0xb02
};

struct UWBP_HUD_TeamListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_Frame; // 0x268
	UImage* Image; // 0x270
	UImage* Image_2; // 0x278
	UImage* Image_87; // 0x280
	UImage* Image_111; // 0x288
	UImage* Image_Voice; // 0x290
	UProgressBar* ProgressBar_TeamHealth; // 0x298
	UTextBlock* Text_Index; // 0x2a0
	UTextBlock* Text_TeamName; // 0x2a8
	UBP_PlayerInventoryComponent_C* PlayerInventoryComponent; // 0x2b0
	FTeamMemberInfo Team Member Info; // 0x2b8
	ASurvivalPlayerState* Member PS; // 0x2d8
	float Health; // 0x2e0
	int32_t Index; // 0x2e4
};

struct ABP_RayProjectile_C : ABP_MasterProjectile_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3b8
	TSet<AActor*> DamagedActors; // 0x3c0
};

struct ULoudnessNRTSettings : UAudioSynesthesiaNRTSettings {
	float AnalysisPeriod; // 0x28
	float MinimumFrequency; // 0x2c
	float MaximumFrequency; // 0x30
	ELoudnessNRTCurveTypeEnum CurveType; // 0x34
	float NoiseFloorDb; // 0x38
};

struct ULoadingScreenSettings : UDeveloperSettings {
	FALoadingScreenSettings StartupLoadingScreen; // 0x38
	FALoadingScreenSettings DefaultLoadingScreen; // 0x478
	FClassicLayoutSettings Classic; // 0x8b8
	FCenterLayoutSettings Center; // 0x960
	FLetterboxLayoutSettings Letterbox; // 0xa00
	FSidebarLayoutSettings Sidebar; // 0xb38
	FDualSidebarLayoutSettings DualSidebar; // 0xbe8
};

struct UBP_KeyInput_C : UObject {
	FKey Key Input; // 0x28
	bool Analog Use Negative Axis; // 0x40
	float Analog Previous Axis Value; // 0x44
	float Analog Current Axis Value; // 0x48
	float World Delta Seconds; // 0x4c
	bool Input is Using Delta; // 0x50
	FString Display Name; // 0x58
};

struct UAkMediaAssetData : UObject {
	bool IsStreamed; // 0x28
	bool UseDeviceMemory; // 0x29
};

struct UParticleModuleSizeMultiplyLife : UParticleModuleSizeBase {
	FRawDistributionVector LifeMultiplier; // 0x30
	char MultiplyX : 1; // 0x78
	char MultiplyY : 1; // 0x78
	char MultiplyZ : 1; // 0x78
};

struct UInheritableComponentHandler : UObject {
	TArray<FComponentOverrideRecord> Records; // 0x28
	TArray<UActorComponent*> UnnecessaryComponents; // 0x38
};

struct UParticleModuleRequired : UParticleModule {
	UMaterialInterface* Material; // 0x30
	float MinFacingCameraBlendDistance; // 0x38
	float MaxFacingCameraBlendDistance; // 0x3c
	FVector EmitterOrigin; // 0x40
	FRotator EmitterRotation; // 0x4c
	EParticleScreenAlignment ScreenAlignment; // 0x58
	char bUseLocalSpace : 1; // 0x59
	char bKillOnDeactivate : 1; // 0x59
	char bKillOnCompleted : 1; // 0x59
	EParticleSortMode SortMode; // 0x5a
	char bUseLegacyEmitterTime : 1; // 0x5b
	char bRemoveHMDRoll : 1; // 0x5b
	char bEmitterDurationUseRange : 1; // 0x5b
	float EmitterDuration; // 0x5c
	FRawDistributionFloat SpawnRate; // 0x60
	TArray<FParticleBurst> BurstList; // 0x90
	float EmitterDelay; // 0xa0
	float EmitterDelayLow; // 0xa4
	char bDelayFirstLoopOnly : 1; // 0xa8
	EParticleSubUVInterpMethod InterpolationMethod; // 0xa9
	char bScaleUV : 1; // 0xaa
	char bEmitterDelayUseRange : 1; // 0xaa
	EParticleBurstMethod ParticleBurstMethod; // 0xab
	char bOverrideSystemMacroUV : 1; // 0xac
	char bUseMaxDrawCount : 1; // 0xac
	EOpacitySourceMode OpacitySourceMode; // 0xad
	EEmitterNormalsMode EmitterNormalsMode; // 0xae
	char bOrbitModuleAffectsVelocityAlignment : 1; // 0xaf
	int32_t SubImages_Horizontal; // 0xb0
	int32_t SubImages_Vertical; // 0xb4
	float RandomImageTime; // 0xb8
	int32_t RandomImageChanges; // 0xbc
	FVector MacroUVPosition; // 0xc0
	float MacroUVRadius; // 0xcc
	EParticleUVFlipMode UVFlippingMode; // 0xd0
	ESubUVBoundingVertexCount BoundingMode; // 0xd1
	char bDurationRecalcEachLoop : 1; // 0xd2
	FVector NormalsSphereCenter; // 0xd4
	float AlphaThreshold; // 0xe0
	int32_t EmitterLoops; // 0xe4
	UTexture2D* CutoutTexture; // 0xe8
	int32_t MaxDrawCount; // 0xf0
	float EmitterDurationLow; // 0xf4
	FVector NormalsCylinderDirection; // 0xf8
	TArray<FName> NamedMaterialOverrides; // 0x108
};

struct UWBP_Popup_ForbiddenNick_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWBP_MainFrame_C* BP_UI_Frame; // 0x268
	UImage* Image; // 0x270
	UImage* Image_92; // 0x278
	UImage* Image_164; // 0x280
	UTextBlock* TextBlock_4; // 0x288
	UWBP_PopUp_Button_C* WBP_PopUp_Button; // 0x290
	bool DragEnabled; // 0x298
	bool IsMouseButtonDown; // 0x299
	FVector2D LastMousePosition; // 0x29c
	bool IsDrag; // 0x2a4
	UCanvasPanelSlot* ParentSlot; // 0x2a8
	float SafetyZoneY; // 0x2b0
	float SafetyZoneX; // 0x2b4
	UBP_PlayerInventoryComponent_C* Inventory Component; // 0x2b8
	UWBP_HUD_C* Parent Widget; // 0x2c0
	bool Name Error; // 0x2c8
	ABP_BuildPartBase_C* Building; // 0x2d0
};

struct UCompositeCurveTable : UCurveTable {
	TArray<UCurveTable*> ParentTables; // 0xa0
	TArray<UCurveTable*> OldParentTables; // 0xb0
};

struct UGameplayTask_WaitDelay : UGameplayTask {
	FMulticastInlineDelegate OnFinish; // 0x68
};

struct UWBP_Radiogram_4020302_C : UUserWidget {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x260
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x268
	UWBP_RadiogramListing_C* WBP_RadiogramListing_2; // 0x270
	UWBP_RadiogramListing_C* WBP_RadiogramListing_3; // 0x278
	UWBP_RadiogramListing_C* WBP_RadiogramListing_4; // 0x280
};

struct UBTService_DefaultFocus : UBTService_BlackboardBase {
	char FocusPriority; // 0x98
};

struct UMovieSceneNiagaraTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
};

struct UNiagaraDataInterfaceCurve : UNiagaraDataInterfaceCurveBase {
	FRichCurve Curve; // 0x70
};

struct UAgon_SK_Skeleton_AnimBlueprint_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8
};

struct UAnimBlueprint : UBlueprint {
	USkeleton* TargetSkeleton; // 0xa8
	TArray<FAnimGroupInfo> Groups; // 0xb0
	bool bUseMultiThreadedAnimationUpdate; // 0xc0
	bool bWarnAboutBlueprintUsage; // 0xc1
};

struct UInterpTrackInstAkAudioEvent : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
};

struct UMaterialExpressionSpriteTextureSampler : UMaterialExpressionTextureSampleParameter2D {
	bool bSampleAdditionalTextures; // 0x80
	int32_t AdditionalSlotIndex; // 0x84
	FText SlotDisplayName; // 0x88
};

struct USurvivalReplicationGraphNode_AlwaysRelevant_ForConnection : UReplicationGraphNode {
	AActor* LastPawn; // 0x278
	TArray<FAlwaysRelevantActorInfo> PastRelevantActors; // 0x280
};

struct UEnvQueryGenerator : UEnvQueryNode {
	FString OptionName; // 0x30
	UEnvQueryItemType* itemType; // 0x40
	char bAutoSortTests : 1; // 0x48
};

struct UPawnMovementComponent : UNavMovementComponent {
	APawn* PawnOwner; // 0x130
};

struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	FGuid MeshGuid; // 0x520
};

struct ULevelSequenceAnimSequenceLink : UAssetUserData {
	TArray<FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks; // 0x28
};

struct USteamVRChaperoneComponent : UActorComponent {
	FMulticastInlineDelegate OnLeaveBounds; // 0xb0
	FMulticastInlineDelegate OnReturnToBounds; // 0xc0
};

struct ULandscapeSplinesComponent : UPrimitiveComponent {
	TArray<ULandscapeSplineControlPoint*> ControlPoints; // 0x440
	TArray<ULandscapeSplineSegment*> Segments; // 0x450
	TArray<UMeshComponent*> CookedForeignMeshComponents; // 0x460
};

struct USoundNodeWavePlayer : USoundNodeAssetReferencer {
	TSoftObjectPtr<USoundWave> SoundWaveAssetPtr; // 0x48
	USoundWave* SoundWave; // 0x70
	char bLooping : 1; // 0x80
};

struct UBlackboardKeyType_Class : UBlackboardKeyType {
	UObject* BaseClass; // 0x30
};

struct UBTDecorator_Loop : UBTDecorator {
	int32_t NumLoops; // 0x68
	bool bInfiniteLoop; // 0x6c
	float InfiniteLoopTimeoutTime; // 0x70
};

struct UNavArea : UNavAreaBase {
	float DefaultCost; // 0x30
	float FixedAreaEnteringCost; // 0x34
	FColor DrawColor; // 0x38
	FNavAgentSelector SupportedAgents; // 0x3c
	char bSupportsAgent0 : 1; // 0x40
	char bSupportsAgent1 : 1; // 0x40
	char bSupportsAgent2 : 1; // 0x40
	char bSupportsAgent3 : 1; // 0x40
	char bSupportsAgent4 : 1; // 0x40
	char bSupportsAgent5 : 1; // 0x40
	char bSupportsAgent6 : 1; // 0x40
	char bSupportsAgent7 : 1; // 0x40
	char bSupportsAgent8 : 1; // 0x41
	char bSupportsAgent9 : 1; // 0x41
	char bSupportsAgent10 : 1; // 0x41
	char bSupportsAgent11 : 1; // 0x41
	char bSupportsAgent12 : 1; // 0x41
	char bSupportsAgent13 : 1; // 0x41
	char bSupportsAgent14 : 1; // 0x41
	char bSupportsAgent15 : 1; // 0x41
};

struct ABP_LandingPOD_C : ABP_MasterResource_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x440
	UParticleSystemComponent* P_SmokePuff1; // 0x448
	UParticleSystemComponent* P_SmokePuff2; // 0x450
	USkeletalMeshComponent* SkeletalMesh; // 0x458
	float TimeToDestroy; // 0x460
	FString OwningUserId; // 0x468
	BP_SurvivalCharacter_C* Character; // 0x478
	FTimerHandle CharacterDistanceCheckTimer; // 0x480
	bool ReadyToDestroy; // 0x488
};

struct URadialVector : UFieldNodeVector {
	float Magnitude; // 0xb0
	FVector Position; // 0xb4
};

struct ABP_SessionDataManager_C : ASessionDataManager {
	FPointerToUberGraphFrame UberGraphFrame; // 0x360
	USceneComponent* DefaultSceneRoot; // 0x368
	TMap<FString, FS_DeadPlayerSave> DeadPlayerInfo; // 0x370
	FIntValueFromDataTable RetrieveSystemDefaultSlotCount; // 0x3c0
	TMap<FString, FS_RetrieveSystemInfo> RetrieveSystemInfo; // 0x3e8
	TMap<FString, FS_UserCustomizeInfo> UserCustomizeInfo; // 0x438
	TMap<FString, FS_MachineArmAbilitySave> MachineArmAbilityInfo; // 0x488
	TMap<FString, ABP_BuildPartBase_C*> SessionBuildPartList; // 0x4d8
	FIntValueFromDataTable DailyItemCount; // 0x528
	TMap<FString, ABP_MasterItem_C*> SessionItemList; // 0x550
	TMap<FString, ABP_CarSpawner_C*> CarSpawnerList; // 0x5a0
	TMap<FString, ABP_LandingPOD_C*> LandingPODList; // 0x5f0
};

struct UCollisionProfile : UDeveloperSettings {
	TArray<FCollisionResponseTemplate> Profiles; // 0x38
	TArray<FCustomChannelSetup> DefaultChannelResponses; // 0x48
	TArray<FCustomProfile> EditProfiles; // 0x58
	TArray<FRedirector> ProfileRedirects; // 0x68
	TArray<FRedirector> CollisionChannelRedirects; // 0x78
};

struct UAnimCompress_RemoveLinearKeys : UAnimCompress {
	float MaxPosDiff; // 0x40
	float MaxAngleDiff; // 0x44
	float MaxScaleDiff; // 0x48
	float MaxEffectorDiff; // 0x4c
	float MinEffectorDiff; // 0x50
	float EffectorDiffSocket; // 0x54
	float ParentKeyScale; // 0x58
	char bRetarget : 1; // 0x5c
	char bActuallyFilterLinearKeys : 1; // 0x5c
};

struct USQSUntagQueue : UAwsSQSAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct ABP_LandmarkZone_C : ALandmarkBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x378
	USceneComponent* SceneRoot; // 0x380
	UBillboardComponent* Icon; // 0x388
	UBP_WidgetIndicatorComponent_C* MainIndicator; // 0x390
	UBP_ObjectiveBroadcaster_C* ObjectiveWidget; // 0x398
	UBoxComponent* RadiogramBroadcaster; // 0x3a0
	UBoxComponent* DialogMessageVolume; // 0x3a8
	UBP_PlayerInventoryComponent_C* CurrentPlayerInventoryComponent; // 0x3b0
	FText ActionText; // 0x3b8
	float InteractTime; // 0x3d0
	FText InteractActionText; // 0x3d8
	bool bCanInteractable; // 0x3f0
	FTimerHandle CountDownTimerHandler; // 0x3f8
	FMulticastInlineDelegate CountDownDone; // 0x400
	TArray<FS_LandmarkDialogueByState> blueDialogues; // 0x410
	E_UserActionOverlapZoneType RadioOverlap; // 0x420
	bool EnterObjective; // 0x421
	FVector ScaleByDistance; // 0x424
	TArray<FS_Dialogue> DialogueMessage; // 0x430
	int32_t DialogueIndex; // 0x440
	UAkAudioEvent* BGMPlayEvent; // 0x448
	UAkAudioEvent* BGMStopEvent; // 0x450
	bool IndicatorOn; // 0x458
	FVector MainIndicatorLocation; // 0x45c
	float CloseTime; // 0x468
	float ServerCloseTime; // 0x46c
	FMulticastInlineDelegate OnLandmarkSkillActivated; // 0x470
	FMulticastInlineDelegate OnUpdatedIndicator; // 0x480
};

struct UWBP_MapMarker_RespawnPoint_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Disabled; // 0x268
	UWidgetAnimation* Anim_Hovered; // 0x270
	UWidgetAnimation* Anim_Activated; // 0x278
	UBorder* Border; // 0x280
	UC_Manager-RespawnMap_C* RespawnMapManager; // 0x288
	ABP_RespawnBuildPartBase_C* RespawnBuildPart; // 0x290
	UMaterialInstanceDynamic* MI_RespawnGauge; // 0x298
	bool IsActivated; // 0x2a0
	UWBP_MapMarkerTooltip_C* TooltipRef; // 0x2a8
	FVector Player Dead Loc; // 0x2b0
	FMulticastInlineDelegate OnDoubleClicked; // 0x2c0
	bool bSpawnable; // 0x2d0
	UC_Manager-WorldMap_C* WorldMapManager; // 0x2d8
	bool bLeftMouseDown; // 0x2e0
	bool bDragged; // 0x2e1
	FMulticastInlineDelegate OnHoveredRespawnMarker; // 0x2e8
};

struct UAIDataProvider_Random : UAIDataProvider_QueryParams {
	float Min; // 0x40
	float Max; // 0x44
	char bInteger : 1; // 0x48
};

struct UOnsetNRTSettings : UAudioSynesthesiaNRTSettings {
	bool bDownmixToMono; // 0x28
	float GranularityInSeconds; // 0x2c
	float Sensitivity; // 0x30
	float MinimumFrequency; // 0x34
	float MaximumFrequency; // 0x38
};

struct UMovieSceneVectorSection : UMovieSceneSection {
	FMovieSceneFloatChannel Curves[0x4]; // 0xe8
	int32_t ChannelsUsed; // 0x368
};

struct UAnimSequence : UAnimSequenceBase {
	int32_t NumFrames; // 0xa8
	TArray<FTrackToSkeletonMap> TrackToSkeletonMapTable; // 0xb0
	UAnimBoneCompressionSettings* BoneCompressionSettings; // 0xd0
	UAnimCurveCompressionSettings* CurveCompressionSettings; // 0xd8
	EAdditiveAnimationType AdditiveAnimType; // 0x150
	EAdditiveBasePoseType RefPoseType; // 0x151
	UAnimSequence* RefPoseSeq; // 0x158
	int32_t RefFrameIndex; // 0x160
	FName RetargetSource; // 0x164
	EAnimInterpolationType Interpolation; // 0x16c
	bool bEnableRootMotion; // 0x16d
	ERootMotionRootLock RootMotionRootLock; // 0x16e
	bool bForceRootLock; // 0x16f
	bool bUseNormalizedRootMotionScale; // 0x170
	bool bRootMotionSettingsCopiedFromMontage; // 0x171
	TArray<FAnimSyncMarker> AuthoredSyncMarkers; // 0x178
	TArray<FBakedCustomAttributePerBoneData> BakedPerBoneCustomAttributeData; // 0x1a0
};

struct UAsyncActionLoadPrimaryAssetClassList : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UMagicLeapARPinSaveGame : USaveGame {
	FGuid PinnedID; // 0x28
	FTransform ComponentWorldTransform; // 0x40
	FTransform PinTransform; // 0x70
	bool bShouldPinActor; // 0xa0
};

struct UWBP_Main_Radiogram_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UVerticalBox* VerticalBox_List; // 0x268
	UWBP_Button_UI_C* WBP_Button_UI; // 0x270
	UWBP_Main_Radiogram_Description_C* WBP_Main_Radiogram_Description; // 0x278
	UObjectiveSystemManagerComponent_C* ObjectiveSystem; // 0x280
	UWBP_Main_Radiogram_Description_C* RadiogramDescrioption; // 0x288
	UWBP_Main_RadiogramListing_S_C* PrevWidget; // 0x290
	bool FirstCreated; // 0x298
	TArray<UWBP_Main_RadiogramListing_L_C*> RadiogramMainCategoryList; // 0x2a0
	UWBP_Main_RadiogramListing_L_C* TutorialMain; // 0x2b0
	TMap<int32_t, FS_RadiogramGuide> CachedTutorialRadiogram; // 0x2b8
	TMap<int32_t, FIntPair> CachedDefaultIdentifier; // 0x308
	TMap<int32_t, FIntPair> CachedCustomIdentifier; // 0x358
};

struct UBP_ConvertInventoryComponent_C : UBP_InventoryComponentBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x138
	UBP_InventoryComponentBase_C* OutputInventory; // 0x140
	bool bIsWorking; // 0x148
	float ConvertInterval; // 0x14c
	FTimerHandle ConvertTimer; // 0x150
	bool HasWorkingSlot; // 0x158
	float ConvertValuePerTime; // 0x15c
	E_ConvertType Convert Type; // 0x160
	float TransMultiply; // 0x164
	E_ConvertStopType ConvertStopReason; // 0x168
	FMulticastInlineDelegate StopReasonDispatcher; // 0x170
};

struct UInterpTrackVectorProp : UInterpTrackVectorBase {
	FName PropertyName; // 0x90
};

struct UDatasmithStaticMeshGLTFImportData : UDatasmithStaticMeshImportData {
	FString SourceMeshName; // 0x28
};

struct AAkSpotReflector : AActor {
	UAkAuxBus* EarlyReflectionAuxBus; // 0x220
	FString EarlyReflectionAuxBusName; // 0x228
	UAkAcousticTexture* AcousticTexture; // 0x238
	float DistanceScalingFactor; // 0x240
	float Level; // 0x244
};

struct AWeaponBase : AHoldableBase {
	ESVWeaponType WeaponType; // 0x478
	float CumulativeFireInterval; // 0x47c
	int32_t FireCountForIntervalCheck; // 0x480
	int32_t FireCountMax; // 0x484
	int32_t MultiShotCount_Native; // 0x488
	USkeletalMeshComponent* WeaponMesh; // 0x490
	float CoolTime; // 0x498
	float WeaponFireAnimTime; // 0x49c
	float FireAnimTime; // 0x4a0
	bool IsPlayingFireAnim; // 0x4a4
	bool bAutoFire; // 0x4a5
	bool FirePressed; // 0x4a6
	FTransform AimCameraTransform; // 0x4b0
	UAnimMontage* TP_FireAnimation; // 0x4e0
	UAnimMontage* FP_FireAnimation; // 0x4e8
	UAnimMontage* Weapon_FireAnimation; // 0x4f0
	bool bClientPrecedingProduction; // 0x4f8
	float ADSSpeed; // 0x4fc
	float ADSAdditionalSpeedMultiply; // 0x500
	float ADSFOV; // 0x504
	float ADSDoF; // 0x508
	TArray<FHitEffectInfo> HitEffects; // 0x510
	TMap<EAttachmentType, int32_t> EquipedAttachments; // 0x520
	TArray<float> CustomFOVs; // 0x570
	TArray<float> CustomDoFs; // 0x580
	TArray<FTransform> CustomFoVTransforms; // 0x590
	int32_t SelectedCustomFoVIndex; // 0x5a0
	float LastFireTime; // 0x5a4
	float OldLastFireTime; // 0x5a8
};

struct ABP_SVWeatherTool_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UPostProcessComponent* RainDropPP; // 0x228
	UAkComponent* AkWindSound; // 0x230
	UDecalComponent* SnowySurfaceDecal; // 0x238
	UDecalComponent* WetSurfaceDecal; // 0x240
	UDecalComponent* WetRippleDecal; // 0x248
	UDirectionalLightComponent* LightningDirectionalLight; // 0x250
	UStaticMeshComponent* CloudsMesh; // 0x258
	UPostProcessComponent* ScreenPostProcess; // 0x260
	UParticleSystemComponent* LightningBolts_Part; // 0x268
	UParticleSystemComponent* SheetLightning_Part; // 0x270
	UParticleSystemComponent* Rain_GPU; // 0x278
	UParticleSystemComponent* Snow; // 0x280
	UParticleSystemComponent* RainWind; // 0x288
	UParticleSystemComponent* Hail; // 0x290
	UParticleSystemComponent* Rain; // 0x298
	USceneComponent* Scene; // 0x2a0
	bool Enable Rain; // 0x2a8
	E_RainStyle Rain Style; // 0x2a9
	bool Enable Hail; // 0x2aa
	FLinearColor Rain Color; // 0x2ac
	float Rain Brightness; // 0x2bc
	float Rain Density; // 0x2c0
	float Rain Impact Density; // 0x2c4
	FVector Rain Velocity; // 0x2c8
	bool Lock To Player Camera; // 0x2d4
	AActor* Actor To Lock To; // 0x2d8
	float Hail Density; // 0x2e0
	bool Enable Mist; // 0x2e4
	float Mist Density; // 0x2e8
	FVector Mist Velocity; // 0x2ec
	float Hail Scale; // 0x2f8
	bool Enable Snow; // 0x2fc
	E_SnowStyle Snow Style; // 0x2fd
	float Rain Ground Intensity; // 0x300
	USoundBase* Rain Loop SFX; // 0x308
	bool Enable PostProcess; // 0x310
	bool Enable Clouds; // 0x311
	float Cloud Morph Speed; // 0x314
	bool Enable Sheet Lightning; // 0x318
	float Sheet Lightning Intensity; // 0x31c
	FLinearColor Fog Near Color; // 0x320
	FLinearColor Fog Medium Color; // 0x330
	FLinearColor Fog Far Color; // 0x340
	float Fog Density; // 0x350
	float Fog Start Distance; // 0x354
	float Fog Medium Blend Distance; // 0x358
	float Fog Far Blend Distance; // 0x35c
	float Sheet Lightning Delay Min; // 0x360
	float Sheet Lightning Delay Max; // 0x364
	float Sheet Lightning Flash Intensity Min; // 0x368
	float Sheet Lightning Flash Intensity Max; // 0x36c
	USoundBase* Sheet Lightning SFX; // 0x370
	float Sheet Lightning SFX Volume; // 0x378
	float Sheet Lightning SFX Delay; // 0x37c
	float Sheet Lightning SFX Pitch Min; // 0x380
	float Sheet Lightning SFX Pitch Max; // 0x384
	bool Enable Bolt Lightning; // 0x388
	float Bolt Lightning Delay Min; // 0x38c
	float Bolt Lightning Delay Max; // 0x390
	float Bolt Lightning Flash Intensity Min; // 0x394
	float Bolt Lightning Flash Intensity Max; // 0x398
	USoundBase* Bolt Lightning SFX; // 0x3a0
	float Bolt Lightning SFX Volume; // 0x3a8
	float Bolt Lightning SFX Delay; // 0x3ac
	float Bolt Lightning SFX Pitch Min; // 0x3b0
	float Bolt Lightning SFX Pitch Max; // 0x3b4
	float Cloud Intensity Tangent 1; // 0x3b8
	float Cloud Intensity Tangent 2; // 0x3bc
	float Snow Density; // 0x3c0
	FVector Snow Velocity Min; // 0x3c4
	FVector Snow Velocity Max; // 0x3d0
	float Snow Ground Intensity; // 0x3dc
	float Screen Rain Effects Intensity; // 0x3e0
	bool Screen Rain Effects Cull Center; // 0x3e4
	float Screen Frost Effects Intensity; // 0x3e8
	USoundBase* Snow Wind Loop SFX; // 0x3f0
	float Snow Wind SFX Volume; // 0x3f8
	float Rain Loop SFX Volume; // 0x3fc
	float Snow Wind SFX Pitch; // 0x400
	float Rain Loop SFX Pitch; // 0x404
	FVector  Speed; // 0x408
	bool Enable Runtime Edit; // 0x414
	FMulticastInlineDelegate OnPropertyChanged; // 0x418
	float Rain Light Scale; // 0x428
	float Snow Light Scale; // 0x42c
	FFloatValueFromDataTable Rain Temperature Increase; // 0x430
	FFloatValueFromDataTable Snow Temperature Increase; // 0x458
	float Bolt Lightning SFX Volume Interpolated; // 0x480
	bool WaitingForBoltLightning; // 0x484
	float Rain Change Interpolator; // 0x488
	float Weather Proof Factor; // 0x48c
	float Wind Speed; // 0x490
	UMaterialInstanceDynamic* MI_Rain; // 0x498
	UMaterialInstanceDynamic* MI_Snow; // 0x4a0
	float Wind Speed from Sequencer; // 0x4a8
	float LastWindSoundUpdateTime; // 0x4ac
	FVector WindDirection; // 0x4b0
	float EffectAlpha; // 0x4bc
	float Height; // 0x4c0
	float DropletTime; // 0x4c4
	float TrailAlpha; // 0x4c8
	float Volume; // 0x4cc
	bool bWindSoundActive; // 0x4d0
};

struct ABP_ModelViewer_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	USkeletalMeshComponent* Face; // 0x228
	USceneCaptureComponent2D* CaptureComponent; // 0x230
	UPointLightComponent* PointLight7; // 0x238
	UPointLightComponent* PointLight6; // 0x240
	UPointLightComponent* PointLight5; // 0x248
	UPointLightComponent* PointLight4; // 0x250
	UPointLightComponent* PointLight3; // 0x258
	UPointLightComponent* PointLight2; // 0x260
	UPointLightComponent* PointLight1; // 0x268
	UPointLightComponent* PointLight; // 0x270
	USkeletalMeshComponent* Arm; // 0x278
	USkeletalMeshComponent* Feet; // 0x280
	USkeletalMeshComponent* Legs; // 0x288
	USkeletalMeshComponent* Chest; // 0x290
	USkeletalMeshComponent* Head; // 0x298
	USkeletalMeshComponent* SkeletalMesh; // 0x2a0
	USceneComponent* DefaultSceneRoot1; // 0x2a8
	bool Preformance Mode; // 0x2b0
};

struct USceneComponent : UActorComponent {
	TWeakObjectPtr<APhysicsVolume> PhysicsVolume; // 0xb8
	USceneComponent* AttachParent; // 0xc0
	FName AttachSocketName; // 0xc8
	TArray<USceneComponent*> AttachChildren; // 0xd0
	TArray<USceneComponent*> ClientAttachedChildren; // 0xe0
	FVector RelativeLocation; // 0x11c
	FRotator RelativeRotation; // 0x128
	FVector RelativeScale3D; // 0x134
	FVector ComponentVelocity; // 0x140
	char bComponentToWorldUpdated : 1; // 0x14c
	char bAbsoluteLocation : 1; // 0x14c
	char bAbsoluteRotation : 1; // 0x14c
	char bAbsoluteScale : 1; // 0x14c
	char bVisible : 1; // 0x14c
	char bShouldBeAttached : 1; // 0x14c
	char bShouldSnapLocationWhenAttached : 1; // 0x14c
	char bShouldSnapRotationWhenAttached : 1; // 0x14d
	char bShouldUpdatePhysicsVolume : 1; // 0x14d
	char bHiddenInGame : 1; // 0x14d
	char bBoundsChangeTriggersStreamingDataRebuild : 1; // 0x14d
	char bUseAttachParentBound : 1; // 0x14d
	EComponentMobility Mobility; // 0x14f
	EDetailMode DetailMode; // 0x150
	FMulticastSparseDelegate PhysicsVolumeChangedDelegate; // 0x151
};

struct UMaterial : UMaterialInterface {
	UPhysicalMaterial* PhysMaterial; // 0x88
	UPhysicalMaterialMask* PhysMaterialMask; // 0x90
	UPhysicalMaterial* PhysicalMaterialMap[0x8]; // 0x98
	FScalarMaterialInput Metallic; // 0xd8
	FScalarMaterialInput Specular; // 0xec
	FScalarMaterialInput Anisotropy; // 0x100
	FVectorMaterialInput Normal; // 0x114
	FVectorMaterialInput Tangent; // 0x128
	FColorMaterialInput EmissiveColor; // 0x13c
	EMaterialDomain MaterialDomain; // 0x150
	EBlendMode BlendMode; // 0x151
	EDecalBlendMode DecalBlendMode; // 0x152
	EMaterialDecalResponse MaterialDecalResponse; // 0x153
	EMaterialShadingModel ShadingModel; // 0x154
	char bCastDynamicShadowAsMasked : 1; // 0x155
	FMaterialShadingModelField ShadingModels; // 0x156
	float OpacityMaskClipValue; // 0x158
	FVectorMaterialInput WorldPositionOffset; // 0x15c
	FScalarMaterialInput Refraction; // 0x170
	FMaterialAttributesInput MaterialAttributes; // 0x184
	FScalarMaterialInput PixelDepthOffset; // 0x19c
	FShadingModelMaterialInput ShadingModelFromMaterialExpression; // 0x1b0
	char bEnableSeparateTranslucency : 1; // 0x1c4
	char bEnableResponsiveAA : 1; // 0x1c4
	char bScreenSpaceReflections : 1; // 0x1c4
	char bContactShadows : 1; // 0x1c4
	char TwoSided : 1; // 0x1c4
	char DitheredLODTransition : 1; // 0x1c4
	char DitherOpacityMask : 1; // 0x1c4
	char bAllowNegativeEmissiveColor : 1; // 0x1c4
	ETranslucencyLightingMode TranslucencyLightingMode; // 0x1c5
	char bEnableMobileSeparateTranslucency : 1; // 0x1c6
	int32_t NumCustomizedUVs; // 0x1c8
	float TranslucencyDirectionalLightingIntensity; // 0x1cc
	float TranslucentShadowDensityScale; // 0x1d0
	float TranslucentSelfShadowDensityScale; // 0x1d4
	float TranslucentSelfShadowSecondDensityScale; // 0x1d8
	float TranslucentSelfShadowSecondOpacity; // 0x1dc
	float TranslucentBackscatteringExponent; // 0x1e0
	FLinearColor TranslucentMultipleScatteringExtinction; // 0x1e4
	float TranslucentShadowStartOffset; // 0x1f4
	char bDisableDepthTest : 1; // 0x1f8
	char bWriteOnlyAlpha : 1; // 0x1f8
	char bGenerateSphericalParticleNormals : 1; // 0x1f8
	char bTangentSpaceNormal : 1; // 0x1f8
	char bUseEmissiveForDynamicAreaLighting : 1; // 0x1f8
	char bBlockGI : 1; // 0x1f8
	char bUsedAsSpecialEngineMaterial : 1; // 0x1f8
	char bUsedWithSkeletalMesh : 1; // 0x1f8
	char bUsedWithEditorCompositing : 1; // 0x1f9
	char bUsedWithParticleSprites : 1; // 0x1f9
	char bUsedWithBeamTrails : 1; // 0x1f9
	char bUsedWithMeshParticles : 1; // 0x1f9
	char bUsedWithNiagaraSprites : 1; // 0x1f9
	char bUsedWithNiagaraRibbons : 1; // 0x1f9
	char bUsedWithNiagaraMeshParticles : 1; // 0x1f9
	char bUsedWithGeometryCache : 1; // 0x1f9
	char bUsedWithStaticLighting : 1; // 0x1fa
	char bUsedWithMorphTargets : 1; // 0x1fa
	char bUsedWithSplineMeshes : 1; // 0x1fa
	char bUsedWithInstancedStaticMeshes : 1; // 0x1fa
	char bUsedWithGeometryCollections : 1; // 0x1fa
	char bUsesDistortion : 1; // 0x1fa
	char bUsedWithClothing : 1; // 0x1fa
	char bUsedWithWater : 1; // 0x1fc
	char bUsedWithHairStrands : 1; // 0x1fc
	char bUsedWithLidarPointCloud : 1; // 0x1fc
	char bUsedWithVirtualHeightfieldMesh : 1; // 0x1fc
	char bUsedWithUI : 1; // 0x200
	char bAutomaticallySetUsageInEditor : 1; // 0x200
	char bFullyRough : 1; // 0x200
	char bUseFullPrecision : 1; // 0x200
	char bUseLightmapDirectionality : 1; // 0x200
	char bUseAlphaToCoverage : 1; // 0x200
	char bForwardRenderUsePreintegratedGFForSimpleIBL : 1; // 0x204
	char bUseHQForwardReflections : 1; // 0x208
	char bUsePlanarForwardReflections : 1; // 0x208
	char bNormalCurvatureToRoughness : 1; // 0x208
	EMaterialTessellationMode D3D11TessellationMode; // 0x209
	char bEnableCrackFreeDisplacement : 1; // 0x20a
	char bEnableAdaptiveTessellation : 1; // 0x20a
	char AllowTranslucentCustomDepthWrites : 1; // 0x20a
	char Wireframe : 1; // 0x20a
	EMaterialShadingRate ShadingRate; // 0x20b
	char bCanMaskedBeAssumedOpaque : 1; // 0x20c
	char bIsMasked : 1; // 0x20c
	char bIsPreviewMaterial : 1; // 0x20c
	char bIsFunctionPreviewMaterial : 1; // 0x20c
	char bUseMaterialAttributes : 1; // 0x20c
	char bCastRayTracedShadows : 1; // 0x20c
	char bUseTranslucencyVertexFog : 1; // 0x20c
	char bApplyCloudFogging : 1; // 0x20c
	char bIsSky : 1; // 0x20d
	char bComputeFogPerPixel : 1; // 0x20d
	char bOutputTranslucentVelocity : 1; // 0x20d
	char bAllowDevelopmentShaderCompile : 1; // 0x20d
	char bIsMaterialEditorStatsMaterial : 1; // 0x20d
	EBlendableLocation BlendableLocation; // 0x20e
	char BlendableOutputAlpha : 1; // 0x20f
	char bEnableStencilTest : 1; // 0x20f
	EMaterialStencilCompare StencilCompare; // 0x210
	char StencilRefValue; // 0x211
	ERefractionMode RefractionMode; // 0x212
	int32_t BlendablePriority; // 0x214
	char bIsBlendable : 1; // 0x218
	uint32_t UsageFlagWarnings; // 0x21c
	float RefractionDepthBias; // 0x220
	FGuid StateId; // 0x224
	float MaxDisplacement; // 0x234
	FMaterialCachedExpressionData CachedExpressionData; // 0x268
};

struct UGetGeoLocationAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct UBTTaskNode : UBTNode {
	TArray<UBTService*> Services; // 0x58
	char bIgnoreRestartSelf : 1; // 0x68
};

struct UMagicLeapTouchpadGesturesComponent : UActorComponent {
	FMulticastInlineDelegate OnTouchpadGestureStart; // 0xb8
	FMulticastInlineDelegate OnTouchpadGestureContinue; // 0xc8
	FMulticastInlineDelegate OnTouchpadGestureEnd; // 0xd8
};

struct UBoxComponent : UShapeComponent {
	FVector BoxExtent; // 0x458
	float LineThickness; // 0x464
};

struct UWBP_HUD_CompassMarker_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image_Marker; // 0x268
	UScaleBox* ScaleBox_Marker; // 0x270
	UObject* MarkerIcon; // 0x278
	UMaterialInstanceDynamic* MI; // 0x280
};

struct AGeometryCollectionActor : AActor {
	UGeometryCollectionComponent* GeometryCollectionComponent; // 0x220
	UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x228
};

struct UBTTask_FireWeapon_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	float Duration; // 0xb0
	BP_PlayerAI_C* MyPawn; // 0xb8
};

struct UWBP_Main_Description_Attachment_C : UUserWidget {
	UWBP_MainFrame_C* BP_UI_Frame; // 0x260
	UWBP_Slot_Equipment_C* ForeGrip; // 0x268
	UImage* Image_Foregrip; // 0x270
	UImage* Image_Magazine; // 0x278
	UImage* Image_Muzzle; // 0x280
	UImage* Image_Scope; // 0x288
	UWBP_Slot_Equipment_C* Magazine; // 0x290
	UWBP_Slot_Equipment_C* Muzzle; // 0x298
	UWBP_Slot_Equipment_C* Scope; // 0x2a0
};

struct UVehicleSkidData : UDataAsset {
	UParticleSystem* WaterFX; // 0x30
	UParticleSystem* DirtFX; // 0x38
	UParticleSystem* AsphaltFX; // 0x40
	float WaterMinSpeed; // 0x48
	float WaterMaxSpeed; // 0x4c
	float DirtMinSpeed; // 0x50
	float DirtMaxSpeed; // 0x54
	float AsphaltMinSpeed; // 0x58
	float AsphaltMaxSpeed; // 0x5c
	float WaterMinSpawn; // 0x60
	float WaterMaxSpawn; // 0x64
	float DirtMinSpawn; // 0x68
	float DirtMaxSpawn; // 0x6c
	float AsphaltMinSpawn; // 0x70
	float AsphaltMaxSpawn; // 0x74
	float WaterMinLifeTime; // 0x78
	float WaterMaxLifeTime; // 0x7c
	float DirtMinLifeTime; // 0x80
	float DirtMaxLifeTime; // 0x84
	float AsphaltMinLifeTime; // 0x88
	float AsphaltMaxLifeTime; // 0x8c
	FVector WaterMinInitSize; // 0x90
	FVector WaterMaxInitSize; // 0x9c
	FVector DirtMinInitSize; // 0xa8
	FVector DirtMaxInitSize; // 0xb4
	FVector AsphaltMinInitSize; // 0xc0
	FVector AsphaltMaxInitSize; // 0xcc
};

struct UImageSequenceProtocol_EXR : UImageSequenceProtocol {
	bool bCompressed; // 0xd8
	EHDRCaptureGamut CaptureGamut; // 0xd9
};

struct UNetConnection : UPlayer {
	TArray<UChildConnection*> Children; // 0x48
	UNetDriver* Driver; // 0x58
	UPackageMap* PackageMapClass; // 0x60
	UPackageMap* PackageMap; // 0x68
	TArray<UChannel*> OpenChannels; // 0x70
	TArray<AActor*> SentTemporaries; // 0x80
	AActor* ViewTarget; // 0x90
	AActor* OwningActor; // 0x98
	int32_t MaxPacket; // 0xa0
	char InternalAck : 1; // 0xa4
	FUniqueNetIdRepl PlayerId; // 0x160
	double LastReceiveTime; // 0x1d0
	TArray<UChannel*> ChannelsToTick; // 0x1518
};

struct USoundfieldSubmix : USoundSubmixWithParentBase {
	FName SoundfieldEncodingFormat; // 0x40
	USoundfieldEncodingSettingsBase* EncodingSettings; // 0x48
	TArray<USoundfieldEffectBase*> SoundfieldEffectChain; // 0x50
	USoundfieldEncodingSettingsBase* EncodingSettingsClass; // 0x60
};

struct UOnlinePIESettings : UDeveloperSettings {
	bool bOnlinePIEEnabled; // 0x38
	TArray<FPIELoginSettingsInternal> Logins; // 0x40
};

struct UBP_CraftingComponent_C : UCustomReplicationActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb8
	TArray<FS_CraftingSlot> CraftingListing; // 0xc0
	float CraftTime; // 0xd0
	float CurrentCraftFinshTime; // 0xd4
	FTimerHandle Crafting Timer; // 0xd8
	UBP_InventoryComponentBase_C* TargetInventory; // 0xe0
	bool bCraftingPaused; // 0xe8
	TArray<UBP_PlayerInventoryComponent_C*> ConnectedPlayerArray; // 0xf0
	FMulticastInlineDelegate OnUpdateCraftingSlot; // 0x100
	int32_t MaxCraftQueue; // 0x110
	float LocalCraftFinishTime; // 0x114
	int32_t TempIdx; // 0x118
	E_CraftingType CraftingType; // 0x11c
	FMulticastInlineDelegate OnIdxChanged; // 0x120
	USoundBase* CraftFinishSound; // 0x130
	USoundBase* CraftingStartSound; // 0x138
	AActor* CommandActor; // 0x140
	bool IsWorking; // 0x148
	bool bCraftStop; // 0x149
	E_CraftingPauseType Stop Reason; // 0x14a
};

struct UParticleModuleTypeDataRibbon : UParticleModuleTypeDataBase {
	int32_t MaxTessellationBetweenParticles; // 0x30
	int32_t SheetsPerTrail; // 0x34
	int32_t MaxTrailCount; // 0x38
	int32_t MaxParticleInTrailCount; // 0x3c
	char bDeadTrailsOnDeactivate : 1; // 0x40
	char bDeadTrailsOnSourceLoss : 1; // 0x40
	char bClipSourceSegement : 1; // 0x40
	char bEnablePreviousTangentRecalculation : 1; // 0x40
	char bTangentRecalculationEveryFrame : 1; // 0x40
	char bSpawnInitialParticle : 1; // 0x40
	ETrailsRenderAxisOption RenderAxis; // 0x44
	float TangentSpawningScalar; // 0x48
	char bRenderGeometry : 1; // 0x4c
	char bRenderSpawnPoints : 1; // 0x4c
	char bRenderTangents : 1; // 0x4c
	char bRenderTessellation : 1; // 0x4c
	float TilingDistance; // 0x50
	float DistanceTessellationStepSize; // 0x54
	char bEnableTangentDiffInterpScale : 1; // 0x58
	float TangentTessellationScalar; // 0x5c
};

struct ABP_ActorSpawnSpot_C : AActorSpawnSpotBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	USceneComponent* SceneRoot; // 0x228
	USphereComponent* EditorOnly_BatchCollision; // 0x230
	USceneComponent* Relative; // 0x238
	USceneComponent* RandomYawCheck; // 0x240
	UBillboardComponent* Billboard; // 0x248
	FName ResourceGroup; // 0x250
	ABP_ActorSpawner_C* ActorSpawner; // 0x258
	AActor* ManagedActor; // 0x260
	AActor* SnapShotActorClass; // 0x268
	TMap<AActor*, FTransform> TransformOffsetSnapShot; // 0x270
	TMap<AActor*, E_ActorSpawnRotRule> SpawnRotRule; // 0x2c0
	FVector DrawBoxSize; // 0x310
	float HeightOffset; // 0x31c
	float LastDestroyTime; // 0x320
	bool Initialized; // 0x324
};

struct UTurret_SK_Skeleton_AnimBlueprint_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x2c8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x3d0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x3f0
	FAnimNode_Root AnimGraphNode_Root; // 0x4f8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x528
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x570
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x598
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x5c0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x5e8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x610
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x638
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x6b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x6e8
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x768
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x798
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x818
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x848
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x8c8
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x8f8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x9a8
	float Yaw; // 0x9c8
	float Pitch; // 0x9cc
	FRotator ActorRot; // 0x9d0
	ABP_TurretBase_C* Turret; // 0x9e0
	bool IsFolded; // 0x9e8
};

struct UMaterialExpressionNormalize : UMaterialExpression {
	FExpressionInput VectorInput; // 0x40
};

struct UCompositeDataTable : UDataTable {
	TArray<UDataTable*> ParentTables; // 0xc8
	TArray<UDataTable*> OldParentTables; // 0xd8
};

struct UMaterialExpressionTemporalSobol : UMaterialExpression {
	FExpressionInput Index; // 0x40
	FExpressionInput Seed; // 0x54
	uint32_t ConstIndex; // 0x68
	FVector2D ConstSeed; // 0x6c
};

struct UMaterialExpressionSphericalParticleOpacity : UMaterialExpression {
	FExpressionInput Density; // 0x40
	float ConstantDensity; // 0x54
};

struct USpotEventTypeData_IncomingDropship_C : USpotEventTypeData_Base_C {
	TArray<FItemCodeValue> RandItemGenerate; // 0xc8
	FDataTableRowHandle NeedItem; // 0xd8
	TMap<int32_t, int32_t> InnerMonster; // 0xe8
	TMap<int32_t, int32_t> OuterMonster; // 0x138
	float MinSpawnTime; // 0x188
	float MaxSpawnTime; // 0x18c
	float TimeComeShip; // 0x190
	float TimeBeforeEnd; // 0x194
	float TimeBeforeEscape; // 0x198
};

struct UMachineArmAbilityComponent : UCustomReplicationActorComponent {
	float HealingHealthFactor; // 0xb8
	float RecoverEnergyFactor; // 0xbc
	float AdditiveMaxHealth; // 0xc0
	float AdditiveMaxEnergy; // 0xc4
	float SurvivalStatEffectMultiply; // 0xc8
	TArray<float> ResourceGatherSpeedMultiply; // 0xd0
	TArray<float> ResourceGatherAmountMultiply; // 0xe0
	TArray<float> CastConsumeSpeedMultiply; // 0xf0
	bool bLearnGliding; // 0x100
	bool bLearnChargePunch; // 0x101
	int32_t AISepcViewer; // 0x104
};

struct USurvivalGameInstance : UGameInstance {
	UGameDataManager* GameDataManager; // 0x1a8
	UGameDataManager* GameDataManagerClass; // 0x1b0
	USVVoiceInterface* VoiceInterface; // 0x1c0
	USVVoiceInterface* VoiceInterfaceClass; // 0x1c8
	FMulticastInlineDelegate OnSystemResolutionChanged; // 0x1d0
};

struct UAnimationDataSourceRegistry : UObject {
	TMap<FName, TWeakObjectPtr<UObject>> DataSources; // 0x28
};

struct UPhysicsConstraintTemplate : UObject {
	FConstraintInstance DefaultInstance; // 0x28
	TArray<FPhysicsConstraintProfileHandle> ProfileHandles; // 0x1e8
	FConstraintProfileProperties DefaultProfile; // 0x1f8
};

struct UAISense_Hearing : UAISense {
	TArray<FAINoiseEvent> NoiseEvents; // 0x80
	float SpeedOfSoundSq; // 0x90
};

struct UCloudWatchLogsPutQueryDefinition : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UEnvQueryGenerator_ActorsOfClass : UEnvQueryGenerator {
	AActor* SearchedActorClass; // 0x50
	FAIDataProviderBoolValue GenerateOnlyActorsInRadius; // 0x58
	FAIDataProviderFloatValue SearchRadius; // 0x90
	UEnvQueryContext* SearchCenter; // 0xc8
};

struct ULowEntryLatentActionObject : UObject {
	bool Finished; // 0x28
	UObject* Result; // 0x30
	int32_t KeepAliveCount; // 0x38
};

struct UNavLinkComponent : UPrimitiveComponent {
	TArray<FNavigationLink> Links; // 0x448
};

struct UMaterialExpressionArctangent2Fast : UMaterialExpression {
	FExpressionInput Y; // 0x40
	FExpressionInput X; // 0x54
};

struct UUniformVector : UFieldNodeVector {
	float Magnitude; // 0xb0
	FVector Direction; // 0xb4
};

struct UAnimClassData : UObject {
	TArray<FBakedAnimationStateMachine> BakedStateMachines; // 0x30
	USkeleton* TargetSkeleton; // 0x40
	TArray<FAnimNotifyEvent> AnimNotifies; // 0x48
	TMap<FName, FCachedPoseIndices> OrderedSavedPoseIndicesMap; // 0x58
	TArray<FAnimBlueprintFunction> AnimBlueprintFunctions; // 0xa8
	TArray<FAnimBlueprintFunctionData> AnimBlueprintFunctionData; // 0xb8
	TArray<TFieldPath<FStructProperty>> AnimNodeProperties; // 0xc8
	TArray<TFieldPath<FStructProperty>> LinkedAnimGraphNodeProperties; // 0xe8
	TArray<TFieldPath<FStructProperty>> LinkedAnimLayerNodeProperties; // 0x108
	TArray<TFieldPath<FStructProperty>> PreUpdateNodeProperties; // 0x128
	TArray<TFieldPath<FStructProperty>> DynamicResetNodeProperties; // 0x148
	TArray<TFieldPath<FStructProperty>> StateMachineNodeProperties; // 0x168
	TArray<TFieldPath<FStructProperty>> InitializationNodeProperties; // 0x188
	TMap<FName, FGraphAssetPlayerInformation> GraphNameAssetPlayers; // 0x1a8
	TArray<FName> SyncGroupNames; // 0x1f8
	TArray<FExposedValueHandler> EvaluateGraphExposedInputs; // 0x208
	TMap<FName, FAnimGraphBlendOptions> GraphBlendOptions; // 0x218
	FPropertyAccessLibrary PropertyAccessLibrary; // 0x268
};

struct UWB_ClassicComboBoxButton_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* VisualNoninteractButton; // 0x268
	FButtonStyle Original Style; // 0x270
};

struct USlateBrushAsset : UObject {
	FSlateBrush Brush; // 0x28
};

struct UInterpTrackInstDirector : UInterpTrackInst {
	AActor* OldViewTarget; // 0x28
};

struct UMeshSelectionSet : USelectionSet {
	TArray<int32_t> Vertices; // 0x40
	TArray<int32_t> Edges; // 0x50
	TArray<int32_t> Faces; // 0x60
	TArray<int32_t> Groups; // 0x70
};

struct ASkeletalMeshActor : AActor {
	char bShouldDoAnimNotifies : 1; // 0x228
	char bWakeOnLevelStart : 1; // 0x228
	USkeletalMeshComponent* SkeletalMeshComponent; // 0x230
	USkeletalMesh* ReplicatedMesh; // 0x238
	UPhysicsAsset* ReplicatedPhysAsset; // 0x240
	UMaterialInterface* ReplicatedMaterial0; // 0x248
	UMaterialInterface* ReplicatedMaterial1; // 0x250
};

struct UAISenseConfig : UObject {
	FColor DebugColor; // 0x28
	float MaxAge; // 0x2c
	char bStartsEnabled : 1; // 0x30
};

struct UNiagaraDataInterfaceAudioOscilloscope : UNiagaraDataInterface {
	USoundSubmix* Submix; // 0x38
	int32_t Resolution; // 0x40
	float ScopeInMilliseconds; // 0x44
};

struct AInfinityFireProjectile : AInfinityFireProjectileBase {
	UCapsuleComponent* CollisionComp; // 0x248
	UProjectileMovementComponent* ProjectileMovement; // 0x250
	TSet<AActor*> HitActors; // 0x260
};

struct USoundNodeSoundClass : USoundNode {
	USoundClass* SoundClassOverride; // 0x48
};

struct UAchievementQueryCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UMaterialExpressionTextureSample : UMaterialExpressionTextureBase {
	FExpressionInput Coordinates; // 0x48
};

struct UGridPathFollowingComponent : UPathFollowingComponent {
	UNavLocalGridManager* GridManager; // 0x250
};

struct USubmixEffectTapDelayPreset : USoundEffectSubmixPreset {
	FSubmixEffectTapDelaySettings Settings; // 0xa8
};

struct UWBP_Functionality_Hologram_C : UWBP_FunctionalityBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	UButton* Button_153; // 0x278
	UButton* Button_155; // 0x280
	UButton* Button_156; // 0x288
	UImage* Image1; // 0x290
	UImage* Image2; // 0x298
	UImage* Image3; // 0x2a0
	UTextBlock* Text_2; // 0x2a8
	UTextBlock* Text_3; // 0x2b0
	UTextBlock* Text_4; // 0x2b8
	UWBP_FunctionalityInfo_C* WBP_FunctionalityInfo; // 0x2c0
	UWBP_FunctionalityMainButton_C* WBP_FunctionalityMainButton; // 0x2c8
	UWBP_Slot_Display_C* WBP_Slot_Display; // 0x2d0
	UWBP_Slot_Display_C* WBP_Slot_Display_2; // 0x2d8
	UWBP_Slot_Display_C* WBP_Slot_Display_3; // 0x2e0
	ABP_HologramTrapBuildPartBase_C* Hologram Build Part Base; // 0x2e8
};

struct UBTTask_ResetAIPerception_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
};

struct UWBP_Main_Mail_Listing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_1; // 0x268
	UBorder* Border_Ring; // 0x270
	UImage* Image_Item; // 0x278
	UImage* Image_New; // 0x280
	UImage* Image_Selected; // 0x288
	UTextBlock* title; // 0x290
	UWBP_UI_ListingHovering_C* WBP_UI_ListingHovering; // 0x298
	FMulticastInlineDelegate OnMailClicked; // 0x2a0
	FMailData MailMessage; // 0x2b0
	int32_t Index; // 0x338
	UWBP_Main_MailSystem_C* MailSystem; // 0x340
	bool bItem; // 0x348
	bool bUnopened; // 0x349
};

struct UWBP_RetrieverRegisterSlot_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border; // 0x268
	UImage* Image_HoverTint; // 0x270
	UImage* Image_Item; // 0x278
	UTextBlock* Text_Index; // 0x280
	UBP_PlayerInventoryComponent_C* Inventory Component; // 0x288
	int32_t UID; // 0x290
	int32_t SlotIndex; // 0x294
	FMulticastInlineDelegate DragItem; // 0x298
	bool bInteractionSlot; // 0x2a8
};

struct UBrushBuilder : UObject {
	FString BitmapFilename; // 0x28
	FString Tooltip; // 0x38
	char NotifyBadParams : 1; // 0x48
	TArray<FVector> Vertices; // 0x50
	TArray<FBuilderPoly> Polys; // 0x60
	FName Layer; // 0x70
	char MergeCoplanars : 1; // 0x78
};

struct UStereoLayerComponent : USceneComponent {
	char bLiveTexture : 1; // 0x1f8
	char bSupportsDepth : 1; // 0x1f8
	char bNoAlphaChannel : 1; // 0x1f8
	UTexture* Texture; // 0x200
	UTexture* LeftTexture; // 0x208
	char bQuadPreserveTextureRatio : 1; // 0x210
	FVector2D QuadSize; // 0x214
	FBox2D UVRect; // 0x21c
	float CylinderRadius; // 0x230
	float CylinderOverlayArc; // 0x234
	int32_t CylinderHeight; // 0x238
	FEquirectProps EquirectProps; // 0x23c
	EStereoLayerType StereoLayerType; // 0x284
	EStereoLayerShape StereoLayerShape; // 0x285
	UStereoLayerShape* Shape; // 0x288
	int32_t Priority; // 0x290
};

struct UParticleModuleLight : UParticleModuleLightBase {
	bool bUseInverseSquaredFalloff; // 0x30
	bool bAffectsTranslucency; // 0x31
	bool bPreviewLightRadius; // 0x32
	float SpawnFraction; // 0x34
	FRawDistributionVector ColorScaleOverLife; // 0x38
	FRawDistributionFloat BrightnessOverLife; // 0x80
	FRawDistributionFloat RadiusScale; // 0xb0
	FRawDistributionFloat LightExponent; // 0xe0
	FLightingChannels LightingChannels; // 0x110
	float VolumetricScatteringIntensity; // 0x114
	bool bHighQualityLights; // 0x118
	bool bShadowCastingLights; // 0x119
};

struct UBlueprint : UBlueprintCore {
	UObject* ParentClass; // 0x50
	EBlueprintType BlueprintType; // 0x58
	char bRecompileOnLoad : 1; // 0x59
	char bHasBeenRegenerated : 1; // 0x59
	char bIsRegeneratingOnLoad : 1; // 0x59
	int32_t BlueprintSystemVersion; // 0x5c
	USimpleConstructionScript* SimpleConstructionScript; // 0x60
	TArray<UActorComponent*> ComponentTemplates; // 0x68
	TArray<UTimelineTemplate*> Timelines; // 0x78
	TArray<FBPComponentClassOverride> ComponentClassOverrides; // 0x88
	UInheritableComponentHandler* InheritableComponentHandler; // 0x98
};

struct UAsyncActionHandleSaveGame : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate Completed; // 0x30
	USaveGame* SaveGameObject; // 0x60
};

struct UGeometryCollectionComponent : UMeshComponent {
	AChaosSolverActor* ChaosSolverActor; // 0x470
	UGeometryCollection* RestCollection; // 0x558
	TArray<AFieldSystemActor*> InitializationFields; // 0x560
	bool Simulating; // 0x570
	EObjectStateTypeEnum ObjectType; // 0x578
	bool EnableClustering; // 0x579
	int32_t ClusterGroupIndex; // 0x57c
	int32_t MaxClusterLevel; // 0x580
	TArray<float> DamageThreshold; // 0x588
	EClusterConnectionTypeEnum ClusterConnectionType; // 0x598
	int32_t CollisionGroup; // 0x59c
	float CollisionSampleFraction; // 0x5a0
	float LinearEtherDrag; // 0x5a4
	float AngularEtherDrag; // 0x5a8
	UChaosPhysicalMaterial* PhysicalMaterial; // 0x5b0
	EInitialVelocityTypeEnum InitialVelocityType; // 0x5b8
	FVector InitialLinearVelocity; // 0x5bc
	FVector InitialAngularVelocity; // 0x5c8
	UPhysicalMaterial* PhysicalMaterialOverride; // 0x5d8
	FGeomComponentCacheParameters CacheParameters; // 0x5e0
	FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x630
	FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x640
	FMulticastInlineDelegate OnChaosBreakEvent; // 0x668
	float DesiredCacheTime; // 0x678
	bool CachePlayback; // 0x67c
	FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x680
	bool bNotifyBreaks; // 0x690
	bool bNotifyCollisions; // 0x691
	bool bEnableReplication; // 0x692
	bool bEnableAbandonAfterLevel; // 0x693
	int32_t ReplicationAbandonClusterLevel; // 0x694
	FGeometryCollectionRepData RepData; // 0x698
	UBodySetup* DummyBodySetup; // 0x8c8
};

struct ABP_SurvivalPlayerController_C : ABP_SVChatController_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x610
	UWorldCollisionToggleByDistanceComponent* WorldCollisionToggleByDistance; // 0x618
	UBP_WidgetIndicatorManager_C* BP_WidgetIndicatorManager; // 0x620
	UBP_VehicleHandleComponent_C* BP_VehicleHandleComponent; // 0x628
	UBP_TutorialHandler_C* BP_TutorialHandler; // 0x630
	UBP_IngamePopupUIManager_C* BP_IngamePopupUIManager; // 0x638
	UAkComponent* BGMObject; // 0x640
	UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource; // 0x648
	UObjectiveSystemManagerComponent_C* ObjectiveComponent; // 0x650
	UBP_FunctionalityHandleComponent_C* BP_FunctionalityHandleComponent; // 0x658
	UBP_LandmarkHandleComponent_C* BP_LandmarkHandleComponent; // 0x660
	UC_Manager-RespawnMap_C* C_Manager-RespawnMap; // 0x668
	UC_Manager-Compass_C* C_Manager-Compass; // 0x670
	UC_Manager-WorldMap_C* C_Manager-WorldMap; // 0x678
	UC_Manager-LocalMap_C* C_Manager-LocalMap; // 0x680
	UQuestMapManager_C* QuestMapManager; // 0x688
	bool IsCharacterInitLoadingFinished; // 0x690
	int32_t TimeOutCount; // 0x694
	UBP_PlayerInventoryComponent_C* PlayerInventoryComponent; // 0x698
	int32_t MouseVisibilityStack; // 0x6a0
	FString CachedNickName; // 0x6a8
	UWBP_AdminConsole_C* AdminConsoleUI; // 0x6b8
	FTimerHandle JumpTimerHandle; // 0x6c0
	BP_SV_Ultra_Dynamic_Sky_C* UltraDynamicSky; // 0x6c8
	bool IsShowPremissionArea; // 0x6d0
	bool bShowOtherPlayerHP; // 0x6d1
	bool bShowBulletTrace; // 0x6d2
	bool RecievePossesedLoc; // 0x6d3
	UWBP_System_C* SystemUI; // 0x6d8
	bool IsShowSystemMenu; // 0x6e0
	FVector PossesLoc; // 0x6e4
	bool ShowAIStateMark; // 0x6f0
	TArray<FS_SurvivalRank> SavedRank; // 0x6f8
	FMulticastInlineDelegate OnNotifyRankInfoUpdate; // 0x708
	bool IsFirstJoin; // 0x718
	float LastRecieveRefreshRankTime; // 0x71c
	bool EnableSaveDummyData; // 0x720
	bool LoadedDummyData; // 0x721
	FString SaveDataName; // 0x728
	int32_t NumDummyMovementSeq; // 0x738
	int32_t NumDummyOtherSeq; // 0x73c
	int32_t SaveDummyHoldable; // 0x740
	UDummySequenceAsset* DummyDataAsset; // 0x748
	UAkAudioEvent* CurrentBGMStopEvent; // 0x750
	UAkAudioEvent* CurrentBGMPlayEvent; // 0x758
	TArray<FS_BGMInfo> BGMQueue; // 0x760
	bool SUPERPOWER; // 0x770
	FMulticastInlineDelegate OnDummyPlayComplete; // 0x778
	bool ShowRadiogramIdx; // 0x788
	float LastJoinTime; // 0x78c
	TArray<ABP_LandmarkZone_C*> LastBGMZones; // 0x790
	UWBP_HUD_WakeUp_C* WakeupWidget; // 0x7a0
	float DamageMultiplier; // 0x7a8
	TMap<FString, float> RequestTime; // 0x7b0
	FMulticastInlineDelegate OnNotifyReceivePlayerSummaryInfo; // 0x800
	float RequestInterval; // 0x810
	TMap<FString, FS_PlayerInfoSummary> CachedPlayerSummary; // 0x818
	bool IsCtrlMouseVisible; // 0x868
	FMulticastInlineDelegate GetAllUserNickWithUIDFromServer; // 0x870
	ABP_WorldMapPivot_C* WorldPivotActor; // 0x880
	bool bIsShowStability; // 0x888
	UWBP_Popup_ForbiddenNick_C* BanNickWidget; // 0x890
	bool GodPierce; // 0x898
	bool TestEndSequence; // 0x899
	FMulticastInlineDelegate OnRecvNickname; // 0x8a0
	UWBP_EscapeNotifcation_C* EscapeWidget; // 0x8b0
	float LastEscapeTime; // 0x8b8
	FFloatValueFromDataTable EscapeCoolTime; // 0x8c0
	FS_RetrieveSystemInfo RetrieveRegisterInfo; // 0x8e8
	FMulticastInlineDelegate OnRecvRetrieveSystem; // 0x900
	FS_MachineArmAbilitySave MachineArmAbilitySave; // 0x910
	FMulticastInlineDelegate OnUpdateMachineArmAbilityInfo; // 0x960
	APawn* PrevPawn; // 0x970
	FS_SurvivalRank My Rank; // 0x978
	BP_MasterCharacter_C* LogoutCharacter; // 0x9b8
	TArray<int32_t> CraftNotifyList; // 0x9c0
	TArray<int32_t> ReserveCraftNotifyList; // 0x9d0
	TArray<E_DummyClientSupportFeature> DummyClientPendingJobQueue; // 0x9e0
	E_DummyClientSupportFeature CurrentDummyClientJob; // 0x9f0
	int32_t CurrentDummyClientJobIdx; // 0x9f4
	int32_t QualityIndex; // 0x9f8
	int32_t ForceLODIndex; // 0x9fc
	TArray<int32_t> TempArray; // 0xa00
	int32_t Idx; // 0xa10
	float TempAmbient; // 0xa14
	float TempEffect; // 0xa18
	float TempMusic; // 0xa1c
	float TempUI; // 0xa20
	float TempVoice; // 0xa24
	int32_t MuteSoundCallCount; // 0xa28
	FUserTerraPointInfo UserTerraPointInfo; // 0xa30
	FMulticastInlineDelegate OnNotifyTerraPointChanged; // 0xa58
	FMulticastInlineDelegate OnResponseBuyMerchandise; // 0xa68
	FMulticastInlineDelegate OnNotifyRecvTerraPointInfo; // 0xa78
	FMulticastInlineDelegate OnCallPossess; // 0xa88
	FMulticastInlineDelegate OnCallUnPossess; // 0xa98
	FMulticastInlineDelegate OnNotifyEnableJointCollision; // 0xaa8
	bool IsReceiveDailyMerchandise; // 0xab8
	FMulticastInlineDelegate OnNotifyRecvNewDailyInfo; // 0xac0
	bool IsTalking; // 0xad0
	FMulticastInlineDelegate OnVoiceInputMuted; // 0xad8
	FMulticastInlineDelegate OnVivoxUserTalkingStateChanged_TeamChannel; // 0xae8
	FMulticastInlineDelegate OnVivoxUserTalkingStateChanged_AreaChannel; // 0xaf8
	FMulticastInlineDelegate OnUnlockAreaVoice; // 0xb08
	int32_t RemoveTeamIndex; // 0xb18
	FIntValueFromDataTable MaxTeamSize; // 0xb20
	FS_SaveTeamInfo EmptyTeamsInfo; // 0xb48
	FTeamMemberInfo EmptyTeamMemberInfo; // 0xb88
};

struct ABP_MasterResource_C : AResourceBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278
	UBP_CollisionByDistanceComponent_C* BP_CollisionByDistanceComponent; // 0x280
	USceneComponent* SceneRoot; // 0x288
	UAkComponent* ImmediatleyGatherSound; // 0x290
	UStaticMeshComponent* Resource Mesh; // 0x298
	float DisappearTimeline_Opacity_5D78CA5847C6324F263A1CB4E77FAF2C; // 0x2a0
	ETimelineDirection DisappearTimeline__Direction_5D78CA5847C6324F263A1CB4E77FAF2C; // 0x2a4
	UTimelineComponent* DisappearTimeline; // 0x2a8
	float AppearTimeline_Opacity_948F1DD1431C6446E142E9AE23C0966A; // 0x2b0
	ETimelineDirection AppearTimeline__Direction_948F1DD1431C6446E142E9AE23C0966A; // 0x2b4
	UTimelineComponent* AppearTimeline; // 0x2b8
	int32_t Resources; // 0x2c0
	float Respawn Time; // 0x2c4
	bool No Respawn; // 0x2c8
	bool Resource Can Respawn; // 0x2c9
	FText Name; // 0x2d0
	UStaticMesh* ChildActorComponentMesh; // 0x2e8
	bool bUsedChildActorComponent; // 0x2f0
	bool bPlacedLevel; // 0x2f1
	TArray<FS_ResourceVisibleComponents> VisibleComponentsForResources; // 0x2f8
	TArray<UPrimitiveComponent*> CurrentVisibleMeshes; // 0x308
	bool SmoothAppear; // 0x318
	FResourceInfo ResourceData; // 0x320
	bool IsImmediatleyHarvesting; // 0x398
	float HarvestableDistance; // 0x39c
	bool Initialized; // 0x3a0
	ABP_ActorSpawnManager_C* ActorSpawnManager; // 0x3a8
	ABP_ActorSpawnSpot_C* TargetActorSpot; // 0x3b0
	UTexture* Value; // 0x3b8
	bool ApplyUnderSurfaceMaterial; // 0x3c0
	UBP_WidgetIndicatorComponent_C* TutorialIndicator; // 0x3c8
	TArray<int32_t> TutorialIndicatorVisibleStep; // 0x3d0
	FVector TutorialWidgetIndicatorRelativeLoc; // 0x3e0
	TMap<FString, int32_t> GatherData; // 0x3f0
};

struct UBP_WidgetIndicatorComponentHasIndex_C : UBP_WidgetIndicatorComponent_C {
	int32_t CustomIndex; // 0x618
};

struct UParticleModuleSizeScaleBySpeed : UParticleModuleSizeBase {
	FVector2D SpeedScale; // 0x30
	FVector2D MaxScale; // 0x38
};

struct UMaterialExpressionPower : UMaterialExpression {
	FExpressionInput Base; // 0x40
	FExpressionInput Exponent; // 0x54
	float ConstExponent; // 0x68
};

struct UAssetMappingTable : UObject {
	TArray<FAssetMapping> MappedAssets; // 0x28
};

struct UParticleModuleVectorFieldScale : UParticleModuleVectorFieldBase {
	UDistributionFloat* VectorFieldScale; // 0x30
	FRawDistributionFloat VectorFieldScaleRaw; // 0x38
};

struct UBTTask_RunEQSQuery : UBTTask_BlackboardBase {
	UEnvQuery* QueryTemplate; // 0x98
	TArray<FEnvNamedValue> queryParams; // 0xa0
	TArray<FAIDynamicParam> QueryConfig; // 0xb0
	EEnvQueryRunMode RunMode; // 0xc0
	FBlackboardKeySelector EQSQueryBlackboardKey; // 0xc8
	bool bUseBBKey; // 0xf0
	FEQSParametrizedQueryExecutionRequest EQSRequest; // 0xf8
};

struct APlayerStart : ANavigationObjectBase {
	FName PlayerStartTag; // 0x248
};

struct USourceEffectChorusPreset : USoundEffectSourcePreset {
	FSourceEffectChorusSettings Settings; // 0x108
};

struct ULocalizedOverlays : UOverlays {
	UBasicOverlays* DefaultOverlays; // 0x28
	TMap<FString, UBasicOverlays*> LocaleToOverlaysMap; // 0x30
};

struct ABP_TurretBase_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UCapsuleComponent* CollisionCapsule; // 0x228
	UBP_HitNotifyComponent_C* BP_HitNotifyComponent; // 0x230
	USceneComponent* FireOffset; // 0x238
	USphereComponent* DetectRange; // 0x240
	UParticleSystemComponent* DestroyParticle; // 0x248
	USkeletalMeshComponent* TurretSkelMesh; // 0x250
	USceneComponent* Scene; // 0x258
	TArray<ASurvivalCharacterBase*> InCharacter; // 0x260
	FRotator NewTargetRotation; // 0x270
	TArray<ASurvivalCharacterBase*> ExcutionTarget; // 0x280
	ASurvivalCharacterBase* CurrentTarget; // 0x290
	bool CanShoot; // 0x298
	FText TurretName; // 0x2a0
	E_TurretAttackMode TurretAttackMode; // 0x2b8
	bool IsSwitchedOn; // 0x2b9
	TArray<FString> AllyUID; // 0x2c0
	AActor* CommandActor; // 0x2d0
	ABP_MasterProjectile_C* ProjectileClass; // 0x2d8
	float FireDelay; // 0x2e0
	FMulticastInlineDelegate OnFire; // 0x2e8
	UCurveFloat* DropCurve; // 0x2f8
	UCurveFloat* DamageCurve; // 0x300
	FRotator RotateOffset; // 0x308
	float TargetYaw; // 0x314
	float TargetPitch; // 0x318
	bool bUseAnimBP; // 0x31c
	FFloatRange PitchClamp; // 0x320
	float DetectRangeValue; // 0x330
	float Deviation; // 0x334
	TSet<E_HitboxType> TracableHitBox; // 0x338
	bool IsFirstShoot; // 0x388
	float FirstTraceShootDelay; // 0x38c
	float RotationAlpha; // 0x390
	FDamageStruct DamageStruct; // 0x398
	int32_t ShotCountForOne; // 0x3d0
	float HP; // 0x3d4
	bool Dead; // 0x3d8
	FMulticastInlineDelegate OnDead; // 0x3e0
	float DestroyTime; // 0x3f0
	bool bAttackAI; // 0x3f4
	bool TempHasWeapon; // 0x3f5
	UAnimMontage* FireAnimMontage; // 0x3f8
};

struct UMaterialExpressionArccosine : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UWBP_Radiogram_1010105_C : UUserWidget {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x260
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x268
	UWBP_RadiogramListing_C* WBP_RadiogramListing_2; // 0x270
};

struct UPhysicsSpringComponent : USceneComponent {
	float SpringStiffness; // 0x1f8
	float SpringDamping; // 0x1fc
	float SpringLengthAtRest; // 0x200
	float SpringRadius; // 0x204
	ECollisionChannel SpringChannel; // 0x208
	bool bIgnoreSelf; // 0x209
	float SpringCompression; // 0x20c
};

struct UWBP_Slot_Quick_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border; // 0x268
	UBorder* Border_Index; // 0x270
	UImage* Image_Selected; // 0x278
	UImage* Image_Selected_2; // 0x280
	UTextBlock* Text_Index; // 0x288
	UWBP_UI_SlotHovering_C* WBP_UI_SlotHovering; // 0x290
	bool Mouse Over; // 0x298
	FItemInventory Item; // 0x2a0
	UBP_PlayerInventoryComponent_C* Inventory Component; // 0x2d8
	FVector2D Icon Image Size; // 0x2e0
	float Tooltip Delay; // 0x2e8
	bool Selected; // 0x2ec
	bool Allow Selection; // 0x2ed
	UWBP_Tooltip_C* Tooltip Widget; // 0x2f0
	int32_t Slot Number; // 0x2f8
	bool IsDoubleClick; // 0x2fc
	EQuickSlotType Type; // 0x2fd
	int32_t RegisterNum; // 0x300
	UWBP_Slot_Inventory_C* InventorySlot; // 0x308
	UWBP_Slot_Equipment_C* ProtocolSlot; // 0x310
	int32_t MyPresetIdx; // 0x318
	UBP_GameSettings_C* Game Settings; // 0x320
};

struct UWBP_Main_MachineArmListing_L_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* Button; // 0x268
	UImage* Image_Blink; // 0x270
	UImage* Image_Selected; // 0x278
	UTextBlock* TextBlock_40; // 0x280
	UWBP_UI_Alert_C* WBP_UI_Alert; // 0x288
	FS_MachineArmAbilityInfo Data; // 0x290
	FMulticastInlineDelegate OnClickedTopCategory; // 0x2c0
	int32_t MainIdx; // 0x2d0
	bool bAlert; // 0x2d4
};

struct UGameNetworkManagerSettings : UObject {
	int32_t MinDynamicBandwidth; // 0x28
	int32_t MaxDynamicBandwidth; // 0x2c
	int32_t TotalNetBandwidth; // 0x30
	int32_t BadPingThreshold; // 0x34
	char bIsStandbyCheckingEnabled : 1; // 0x38
	float StandbyRxCheatTime; // 0x3c
	float StandbyTxCheatTime; // 0x40
	float PercentMissingForRxStandby; // 0x44
	float PercentMissingForTxStandby; // 0x48
	float PercentForBadPing; // 0x4c
	float JoinInProgressStandbyWaitTime; // 0x50
};

struct USpotEventsAsset : UDataAsset {
	FText Description; // 0x30
	TArray<FSpotEventData> Events; // 0x48
};

struct UAkWwiseTreeSelector : UWidget {
	FMulticastInlineDelegate OnSelectionChanged; // 0x108
	FMulticastInlineDelegate OnItemDragged; // 0x118
};

struct UBehaviorTree : UObject {
	UBTCompositeNode* RootNode; // 0x30
	UBlackboardData* BlackboardAsset; // 0x38
	TArray<UBTDecorator*> RootDecorators; // 0x40
	TArray<FBTDecoratorLogic> RootDecoratorOps; // 0x50
};

struct UMaterialExpressionAntialiasedTextureMask : UMaterialExpressionTextureSampleParameter2D {
	float Threshold; // 0x80
	ETextureColorChannel Channel; // 0x84
};

struct UBlueprintCore : UObject {
	UObject* SkeletonGeneratedClass; // 0x28
	UObject* GeneratedClass; // 0x30
	bool bLegacyNeedToPurgeSkelRefs; // 0x38
	FGuid BlueprintGuid; // 0x3c
};

struct UParticleModuleLocationPrimitiveSphere : UParticleModuleLocationPrimitiveBase {
	FRawDistributionFloat StartRadius; // 0xb0
};

struct UCloudWatchEnableAlarmActions : UAwsCloudWatchAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct USoundfieldEndpointSubmix : USoundSubmixBase {
	FName SoundfieldEndpointType; // 0x38
	UAudioEndpointSettingsBase* EndpointSettingsClass; // 0x40
	USoundfieldEndpointSettingsBase* EndpointSettings; // 0x48
	USoundfieldEncodingSettingsBase* EncodingSettingsClass; // 0x50
	USoundfieldEncodingSettingsBase* EncodingSettings; // 0x58
	TArray<USoundfieldEffectBase*> SoundfieldEffectChain; // 0x60
};

struct UDataAsset : UObject {
	UDataAsset* NativeClass; // 0x28
};

struct UHapticFeedbackEffect_Buffer : UHapticFeedbackEffect_Base {
	TArray<char> Amplitudes; // 0x28
	int32_t SampleRate; // 0x38
};

struct UGizmoArrowComponent : UGizmoBaseComponent {
	FVector Direction; // 0x460
	float Gap; // 0x46c
	float Length; // 0x470
	float Thickness; // 0x474
};

struct UMaterialExpressionFeatureLevelSwitch : UMaterialExpression {
	FExpressionInput Default; // 0x40
};

struct UMovementComponent : UActorComponent {
	USceneComponent* UpdatedComponent; // 0xb0
	UPrimitiveComponent* UpdatedPrimitive; // 0xb8
	FVector Velocity; // 0xc4
	FVector PlaneConstraintNormal; // 0xd0
	FVector PlaneConstraintOrigin; // 0xdc
	char bUpdateOnlyIfRendered : 1; // 0xe8
	char bAutoUpdateTickRegistration : 1; // 0xe8
	char bTickBeforeOwner : 1; // 0xe8
	char bAutoRegisterUpdatedComponent : 1; // 0xe8
	char bConstrainToPlane : 1; // 0xe8
	char bSnapToPlaneAtStart : 1; // 0xe8
	char bAutoRegisterPhysicsVolumeUpdates : 1; // 0xe8
	char bComponentShouldUpdatePhysicsVolume : 1; // 0xe8
	EPlaneConstraintAxisSetting PlaneConstraintAxisSetting; // 0xeb
};

struct ABP_ActorSpawner_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	USceneComponent* DefaultSceneRoot; // 0x228
	FName GroupName; // 0x230
	FS_ResourceGroup SpawnerInfo; // 0x238
	TArray<float> RequestQueue; // 0x260
	bool IsTimerWorking; // 0x270
	TArray<ABP_ActorSpawnSpot_C*> ResourceSpotArray; // 0x278
	TMap<ABP_ActorSpawnSpot_C*, AActor*> WorkingSpot; // 0x288
	TMap<AActor*, int32_t> SpawnCount; // 0x2d8
	ABP_ActorSpawnManager_C* Manager; // 0x328
	int32_t DelayedCount; // 0x330
	UCurveFloat* RespawnMultiplyByPlayerCount; // 0x338
	bool BeingRespawn; // 0x340
	FTimerHandle TimerHandle; // 0x348
	FVector TotalLoc; // 0x350
	FFloatValueFromDataTable ResourceRegenMultiplier; // 0x360
	float CurrentTimerTime; // 0x388
	bool FirstSpawning; // 0x38c
};

struct UDatasmithStaticMeshTemplate : UDatasmithObjectTemplate {
	FDatasmithMeshSectionInfoMapTemplate SectionInfoMap; // 0x30
	int32_t LightMapCoordinateIndex; // 0x80
	int32_t LightMapResolution; // 0x84
	TArray<FDatasmithMeshBuildSettingsTemplate> BuildSettings; // 0x88
	TArray<FDatasmithStaticMaterialTemplate> StaticMaterials; // 0x98
};

struct UMagicLeapMeshTrackerComponent : USceneComponent {
	FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x200
	bool ScanWorld; // 0x210
	EMagicLeapMeshType MeshType; // 0x211
	UBoxComponent* BoundingVolume; // 0x218
	EMagicLeapMeshLOD LevelOfDetail; // 0x220
	float PerimeterOfGapsToFill; // 0x224
	bool Planarize; // 0x228
	float DisconnectedSectionArea; // 0x22c
	bool RequestNormals; // 0x230
	bool RequestVertexConfidence; // 0x231
	EMagicLeapMeshVertexColorMode VertexColorMode; // 0x232
	TArray<FColor> BlockVertexColors; // 0x238
	FLinearColor VertexColorFromConfidenceZero; // 0x248
	FLinearColor VertexColorFromConfidenceOne; // 0x258
	bool RemoveOverlappingTriangles; // 0x268
	UMRMeshComponent* MRMesh; // 0x270
	int32_t BricksPerFrame; // 0x278
};

struct UPartyBeaconState : UObject {
	FName SessionName; // 0x28
	int32_t NumConsumedReservations; // 0x30
	int32_t MaxReservations; // 0x34
	int32_t NumTeams; // 0x38
	int32_t NumPlayersPerTeam; // 0x3c
	FName TeamAssignmentMethod; // 0x40
	int32_t ReservedHostTeamNum; // 0x48
	int32_t ForceTeamNum; // 0x4c
	bool bRestrictCrossConsole; // 0x50
	bool bEnableRemovalRequests; // 0x51
	TArray<FPartyReservation> Reservations; // 0x58
};

struct USVCH_Male_ModelViewer_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2c8
	FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer; // 0x348
	FAnimNode_Root AnimGraphNode_Root; // 0x3c0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3f0
	bool IsActionState; // 0x490
	bool IsFocusingParts; // 0x491
};

struct ABP_Juggernaut_Hover_C : ACommonAI_BaseAICharacter_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xe28
	UParticleSystemComponent* DeathEffect; // 0xe30
	UArrowComponent* Arrow3; // 0xe38
	bool IsPlaySpawnAnimation; // 0xe40
	bool IsHovering; // 0xe41
	bool IsPlayDeathEffect; // 0xe42
	bool IsReturnToSpawnPoint; // 0xe43
	bool IsArriveToSpawnPoint; // 0xe44
	AActor* spawner; // 0xe48
	bool IsVisibility; // 0xe50
};

struct USQSAddPermission : UAwsSQSAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UBST_CharacterActionNotifyTask_C : UBP_SkillActionTaskBase_C {
	int32_t TriggerRepeatCount; // 0xc4
	TArray<E_EventNotifyList> DispatchEvent; // 0xc8
	int32_t TriggerCount; // 0xd8
};

struct UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator_SimpleGrid {
	FAIDataProviderBoolValue PathToItem; // 0xf8
	UNavigationQueryFilter* NavigationFilter; // 0x130
	FAIDataProviderFloatValue ScanRangeMultiplier; // 0x138
};

struct UWBP_Main_Inventory_External_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWBP_MainFrame_C* BP_UI_Inventory; // 0x268
	UWBP_MainFrame_C* BP_UI_Player; // 0x270
	UWBP_Slot_Equipment_C* ChestEquipmentSlot; // 0x278
	UWBP_Slot_Equipment_C* FeetEquipmentSlot; // 0x280
	UWBP_Slot_Equipment_C* HeadEquipmentSlot; // 0x288
	UImage* Image_50; // 0x290
	UUniformGridPanel* InventoryGrid; // 0x298
	UWBP_Slot_Equipment_C* LegsEquipmentSlot; // 0x2a0
	UWBP_Slot_Equipment_C* Memory1EquipmentSlot; // 0x2a8
	UWBP_Slot_Equipment_C* Memory2EquipmentSlot; // 0x2b0
	UWBP_Slot_Equipment_C* Memory3EquipmentSlot; // 0x2b8
	UWBP_Slot_Equipment_C* Memory4EquipmentSlot; // 0x2c0
	UWBP_Slot_Equipment_C* Protocol1EquipmentSlot; // 0x2c8
	UWBP_Slot_Equipment_C* Protocol2EquipmentSlot; // 0x2d0
	UScrollBox* ScrollBox_Log; // 0x2d8
	UTextBlock* Text_SurvivalDays; // 0x2e0
	UTextBlock* TextBlock_76; // 0x2e8
	UWBP_Button_UI_C* WBP_Button_UI; // 0x2f0
	UWBP_Functionality_ItemLogListing_C* WBP_Functionality_ItemLogListing_2; // 0x2f8
	UWBP_FunctionalityInfo_C* WBP_FunctionalityInfo; // 0x300
	UWBP_MainFrame_Header_C* WBP_MainFrame_Header; // 0x308
	UWBP_MainFrame_Header_C* WBP_MainFrame_Header_118; // 0x310
	UWidgetSwitcher* WidgetSwitcher_Info; // 0x318
	UWrapBox* WrapBox_Storage; // 0x320
	USpacer* WS_Info_Empty; // 0x328
	UOverlay* WS_Info_Player; // 0x330
	UOverlay* WS_Info_StorageBuildPart; // 0x338
	bool DragEnabled; // 0x340
	bool IsMouseButtonDown; // 0x341
	FVector2D LastMousePosition; // 0x344
	bool IsDrag; // 0x34c
	UCanvasPanelSlot* ParentSlot; // 0x350
	float SafetyZoneY; // 0x358
	float SafetyZoneX; // 0x35c
	UBP_PlayerInventoryComponent_C* Inventory Component; // 0x360
	UWBP_HUD_C* Parent Widget; // 0x368
	TArray<UWBP_Slot_Inventory_C*> Inventory Slots; // 0x370
	int32_t Colums; // 0x380
	UBP_InventoryComponentBase_C* ConnectedInven; // 0x388
	FS_EquipmentSlot New Equipment; // 0x390
	TMap<UWBP_Slot_Equipment_C*, FS_EquipmentSlot> OccupationSlotList; // 0x3d0
};

struct UDatasmithMaterialInstanceTemplate : UDatasmithObjectTemplate {
	TSoftObjectPtr<UMaterialInterface> ParentMaterial; // 0x30
	TMap<FName, float> ScalarParameterValues; // 0x58
	TMap<FName, FLinearColor> VectorParameterValues; // 0xa8
	TMap<FName, TSoftObjectPtr<UTexture>> TextureParameterValues; // 0xf8
	FDatasmithStaticParameterSetTemplate StaticParameters; // 0x148
};

struct UMovieScenePrimitiveMaterialSection : UMovieSceneSection {
	FMovieSceneObjectPathChannel MaterialChannel; // 0xe8
};

struct UInterpTrackMove : UInterpTrack {
	FInterpCurveVector PosTrack; // 0x70
	FInterpCurveVector EulerTrack; // 0x88
	FInterpLookupTrack LookupTrack; // 0xa0
	FName LookAtGroupName; // 0xb0
	float LinCurveTension; // 0xb8
	float AngCurveTension; // 0xbc
	char bUseQuatInterpolation : 1; // 0xc0
	char bShowArrowAtKeys : 1; // 0xc0
	char bDisableMovement : 1; // 0xc0
	char bShowTranslationOnCurveEd : 1; // 0xc0
	char bShowRotationOnCurveEd : 1; // 0xc0
	char bHide3DTrack : 1; // 0xc0
	EInterpTrackMoveRotMode RotMode; // 0xc4
};

struct UAnimCompress_RemoveEverySecondKey : UAnimCompress {
	int32_t MinKeys; // 0x40
	char bStartAtSecondKey : 1; // 0x44
};

struct UWBP_Main_Landmark_RewardListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image; // 0x268
	UImage* Image_Tier; // 0x270
	int32_t Item ID; // 0x278
};

struct UChildConnection : UNetConnection {
	UNetConnection* Parent; // 0x1af0
};

struct UParticleModuleRotation_Seeded : UParticleModuleRotation {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x60
};

struct UTestMovieSceneSubTrack : UMovieSceneSubTrack {
	TArray<UMovieSceneSection*> SectionArray; // 0x88
};

struct UBTDecorator_IsBBEntryOfClass : UBTDecorator_BlackboardBase {
	UObject* TestClass; // 0x90
};

struct URMHttpRequest_Put_Client_Name : URMHttpRequestBase {
	FMulticastInlineDelegate OnSuccess; // 0x48
	FMulticastInlineDelegate OnFailure; // 0x58
};

struct ABP_LandmarkMonster_C : ACommonAI_BaseAICharacter_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xe28
	float Time_LungeTarget_JumpHeight_7ECFC6164963E248D2D7CC95E033DD99; // 0xe30
	float Time_LungeTarget_MoveAlpha_7ECFC6164963E248D2D7CC95E033DD99; // 0xe34
	ETimelineDirection Time_LungeTarget__Direction_7ECFC6164963E248D2D7CC95E033DD99; // 0xe38
	UTimelineComponent* Time_LungeTarget; // 0xe40
	TArray<BP_SurvivalCharacter_C*> AttackedCharacter; // 0xe48
	FTimerHandle AttackStateTimer; // 0xe58
	FVector HitLocation; // 0xe60
	FVector CurrentLocationForLunge; // 0xe6c
	FVector TempLocation; // 0xe78
	AController* KillerController; // 0xe88
	bool bIgnoreNearPlayer; // 0xe90
	TArray<BP_SurvivalCharacter_C*> NearPlayers; // 0xe98
};

struct UCustomizableSkeletalComponent : USceneComponent {
	float SkippedLastRenderTime; // 0x1fc
	UCustomizableObjectInstance* CustomizableObjectInstance; // 0x200
};

struct UBP_UnlcokEscapeCode_C : UBP_MachineArmAbilityObjectBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x40
};

struct ABP_WorldEndDust_fx_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UParticleSystemComponent* P_WorldEnd_Dust2; // 0x228
	USphereComponent* Sphere; // 0x230
	bool FollowPlayer; // 0x238
	float Height; // 0x23c
	float DropletTime; // 0x240
	float EffectAlpha; // 0x244
	float TrailAlpha; // 0x248
	float Volume; // 0x24c
	BP_SurvivalCharacter_C* FollowCharacter; // 0x250
	FVector CentralLocation; // 0x258
	float Radius; // 0x264
};

struct ULowEntryBitDataReader : UObject {
	TArray<char> Bytes; // 0x28
	int32_t Position; // 0x38
	char CurrentByte; // 0x3c
	int32_t CurrentBytePosition; // 0x40
};

struct UFieldSystemMetaDataIteration : UFieldSystemMetaData {
	int32_t Iterations; // 0xb0
};

struct UGeometryCacheComponent : UMeshComponent {
	UGeometryCache* GeometryCache; // 0x468
	bool bRunning; // 0x470
	bool bLooping; // 0x471
	float StartTimeOffset; // 0x474
	float PlaybackSpeed; // 0x478
	int32_t NumTracks; // 0x47c
	float ElapsedTime; // 0x480
	float Duration; // 0x4b4
	bool bManualTick; // 0x4b8
};

struct APainCausingVolume : APhysicsVolume {
	char bPainCausing : 1; // 0x268
	float DamagePerSec; // 0x26c
	UDamageType* DamageType; // 0x270
	float PainInterval; // 0x278
	char bEntryPain : 1; // 0x27c
	char BACKUP_bPainCausing : 1; // 0x27c
	AController* DamageInstigator; // 0x280
};

struct UNiagaraEmitter : UObject {
	bool bLocalSpace; // 0x28
	bool bDeterminism; // 0x29
	int32_t RandomSeed; // 0x2c
	EParticleAllocationMode AllocationMode; // 0x30
	int32_t PreAllocationCount; // 0x34
	FNiagaraEmitterScriptProperties UpdateScriptProps; // 0x38
	FNiagaraEmitterScriptProperties SpawnScriptProps; // 0x60
	ENiagaraSimTarget SimTarget; // 0x88
	FBox FixedBounds; // 0x8c
	int32_t MinDetailLevel; // 0xa8
	int32_t MaxDetailLevel; // 0xac
	FNiagaraDetailsLevelScaleOverrides GlobalSpawnCountScaleOverrides; // 0xb0
	FNiagaraPlatformSet Platforms; // 0xc8
	FNiagaraEmitterScalabilityOverrides ScalabilityOverrides; // 0xf8
	char bInterpolatedSpawning : 1; // 0x108
	char bFixedBounds : 1; // 0x108
	char bUseMinDetailLevel : 1; // 0x108
	char bUseMaxDetailLevel : 1; // 0x108
	char bOverrideGlobalSpawnCountScale : 1; // 0x108
	char bRequiresPersistentIDs : 1; // 0x108
	char bCombineEventSpawn : 1; // 0x108
	float MaxDeltaTimePerTick; // 0x10c
	uint32_t DefaultShaderStageIndex; // 0x110
	uint32_t MaxUpdateIterations; // 0x114
	TSet<uint32_t> SpawnStages; // 0x118
	char bSimulationStagesEnabled : 1; // 0x168
	char bDeprecatedShaderStagesEnabled : 1; // 0x168
	char bLimitDeltaTime : 1; // 0x168
	FString UniqueEmitterName; // 0x170
	TArray<UNiagaraRendererProperties*> RendererProperties; // 0x180
	TArray<FNiagaraEventScriptProperties> EventHandlerScriptProps; // 0x190
	TArray<UNiagaraSimulationStageBase*> SimulationStages; // 0x1a0
	UNiagaraScript* GPUComputeScript; // 0x1b0
	TArray<FName> SharedEventGeneratorIds; // 0x1b8
};

struct UWBP_HUD_Fake_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* InventorySlotBorder; // 0x268
	bool Mouse Over; // 0x270
	FItemInventory Item; // 0x278
	UBP_PlayerInventoryComponent_C* Inventory Component; // 0x2b0
	float Tooltip Delay; // 0x2b8
	UWBP_Tooltip_C* Tooltip Widget; // 0x2c0
	bool Controllable; // 0x2c8
	FText TextTooltip; // 0x2d0
	bool Is Text Only; // 0x2e8
};

struct UPaperTileMap : UObject {
	int32_t MapWidth; // 0x28
	int32_t MapHeight; // 0x2c
	int32_t TileWidth; // 0x30
	int32_t TileHeight; // 0x34
	float PixelsPerUnrealUnit; // 0x38
	float SeparationPerTileX; // 0x3c
	float SeparationPerTileY; // 0x40
	float SeparationPerLayer; // 0x44
	TSoftObjectPtr<UPaperTileSet> SelectedTileSet; // 0x48
	UMaterialInterface* Material; // 0x70
	TArray<UPaperTileLayer*> TileLayers; // 0x78
	float CollisionThickness; // 0x88
	ESpriteCollisionMode SpriteCollisionDomain; // 0x8c
	ETileMapProjectionMode ProjectionMode; // 0x8d
	int32_t HexSideLength; // 0x90
	UBodySetup* BodySetup; // 0x98
	int32_t LayerNameIndex; // 0xa0
};

struct UBTTask_RangeAttackOther_Juggernaut_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	float DelayTime; // 0xb0
	FBlackboardKeySelector IsRangeAttackOther; // 0xb8
	FBlackboardKeySelector TargetActor; // 0xe0
	FVector BackMoveLocation; // 0x108
	FBlackboardKeySelector IsSelectAttackType; // 0x118
	FBlackboardKeySelector IsRangeAttack; // 0x140
	FBlackboardKeySelector IsMeleeAttack; // 0x168
	FBlackboardKeySelector IsWalkingAttack; // 0x190
	FBlackboardKeySelector IsExecutionAttack; // 0x1b8
};

struct UNPCTeamComponent : UActorComponent {
	bool Friendly_Player; // 0xb0
	bool Friendly_Robot; // 0xb1
	bool Friendly_Askr; // 0xb2
	bool Friendly_Pioneer; // 0xb3
	bool Friendly_Hyena; // 0xb4
	bool Friendly_Helbine; // 0xb5
	bool Friendly_Creature; // 0xb6
	bool Friendly_Union; // 0xb7
	char MyTeam; // 0xb8
};

struct UInputAxisKeyDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputAxisKeyDelegateBinding> InputAxisKeyDelegateBindings; // 0x28
};

struct USoundNodeDelay : USoundNode {
	float DelayMin; // 0x48
	float DelayMax; // 0x4c
};

struct UHLODProxy : UObject {
	TArray<FHLODProxyMesh> ProxyMeshes; // 0x28
	TMap<UHLODProxyDesc*, FHLODProxyMesh> HLODActors; // 0x38
};

struct UAnimationAsset : UObject {
	USkeleton* Skeleton; // 0x38
	TArray<UAnimMetaData*> MetaData; // 0x60
	TArray<UAssetUserData*> AssetUserData; // 0x70
};

struct USurvivalVehicleSyncComponent : UActorComponent {
	float MinReliableCorrectionInterval; // 0xb8
	float MinCorrectionInterval; // 0xc0
	float SendingToServerIntervalAtClient; // 0xc8
	float CorrectionIntervalAtClient; // 0xd0
	float FrameLimit_CorrectionIntervalAtClient; // 0x170
};

struct UWB_AdminTools_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* Button; // 0x268
	UButton* Button_ApplyNotice; // 0x270
	UButton* Button_CopyUserID; // 0x278
	UButton* Button_PVEDamage; // 0x280
	UButton* Button_PVP; // 0x288
	UButton* Button_Rain; // 0x290
	UButton* Button_Tag_Change; // 0x298
	UButton* Button_Tag_Toggle; // 0x2a0
	UButton* Button_User_Chat_1; // 0x2a8
	UButton* Button_User_Chat_2; // 0x2b0
	UButton* Button_User_Chat_11; // 0x2b8
	UButton* Button_User_Chat_61; // 0x2c0
	UButton* Button_User_Chat_Ban; // 0x2c8
	UButton* Button_User_ChatLog; // 0x2d0
	UButton* Button_User_CheatTerget; // 0x2d8
	UButton* Button_User_Delete; // 0x2e0
	UButton* Button_User_Server_1; // 0x2e8
	UButton* Button_User_Server_2; // 0x2f0
	UButton* Button_User_Server_11; // 0x2f8
	UButton* Button_User_Server_61; // 0x300
	UButton* Button_User_Server_Ban; // 0x308
	UButton* Button_User_ToMe; // 0x310
	UButton* Button_User_ToUser; // 0x318
	UButton* Button_User_ToUser_2; // 0x320
	UComboBoxString* ComboBox_NoticeIndex; // 0x328
	UEditableText* EditableText_NameTag; // 0x330
	UEditableTextBox* EditableTextBox_ChatMins; // 0x338
	UEditableTextBox* EditableTextBox_ServerMins; // 0x340
	UImage* Image_4; // 0x348
	UImage* Image_5; // 0x350
	UImage* Image_6; // 0x358
	UImage* Image_48; // 0x360
	UImage* Image_131; // 0x368
	UImage* Image_PVPDisabled; // 0x370
	UImage* Image_PVPDisabled_2; // 0x378
	UEditableText* NoticeCycleTime; // 0x380
	UMultiLineEditableText* NoticeText; // 0x388
	UEditableText* PVEDamageMultiplier; // 0x390
	UTextBlock* Text_Time; // 0x398
	UTextBlock* Text_Time_3; // 0x3a0
	USlider* TimeSlider; // 0x3a8
	UVerticalBox* VerticalBox_UserCheat; // 0x3b0
	FMulticastInlineDelegate Settings File Deleted; // 0x3b8
	FMulticastInlineDelegate Pause Game When Menu Open; // 0x3c8
	int32_t AddedMin; // 0x3d8
	FText Text; // 0x3e0
};

struct UCloudWatchLogsDescribeQueries : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UMaterialExpressionDivide : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UNiagaraPreviewAxis_InterpParamVector4 : UNiagaraPreviewAxis_InterpParamBase {
	FVector4 Min; // 0x40
	FVector4 Max; // 0x50
};

struct ULightPropagationVolumeBlendable : UObject {
	FLightPropagationVolumeSettings Settings; // 0x30
	float BlendWeight; // 0x70
};

struct ABP_HologramTrap_SquareCeiling_C : ABP_HologramTrap_CeilingBase_C {
	UBoxComponent* StabilityCheck4; // 0x950
	UBoxComponent* StabilityCheck3; // 0x958
	UBoxComponent* StabilityCheck2; // 0x960
	UBoxComponent* StabilityCheck1; // 0x968
};

struct USurvivalGameUserSettings : UGameUserSettings {
	bool bDidBenchMark; // 0x120
	bool bHUDGuide; // 0x121
	bool bLookVerticalInvert; // 0x122
	bool bLookHorizontalInvert; // 0x123
	float LookVerticalSensitivity; // 0x124
	float LookHorizontalSensitivity; // 0x128
	float FieldOfView; // 0x12c
	int32_t FSR_QualityMode; // 0x130
};

struct UEnvQueryGenerator_CurrentLocation : UEnvQueryGenerator {
	UEnvQueryContext* QueryContext; // 0x50
};

struct UPhysicsCollisionHandler : UObject {
	float ImpactThreshold; // 0x28
	float ImpactReFireDelay; // 0x2c
	USoundBase* DefaultImpactSound; // 0x30
	float LastImpactSoundTime; // 0x38
};

struct UAkGeometryComponent : UAkAcousticTextureSetComponent {
	AkMeshType MeshType; // 0x210
	int32_t LOD; // 0x214
	float WeldingThreshold; // 0x218
	TMap<UMaterialInterface*, FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride; // 0x220
	FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride; // 0x270
	char bEnableDiffraction : 1; // 0x288
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x288
	AActor* AssociatedRoom; // 0x290
	FAkGeometryData GeometryData; // 0x2a8
	TMap<int32_t, float> SurfaceAreas; // 0x2f8
};

struct UAnimNotify_FireHomingMissileToNearPlayer_C : USVAnimNotify {
	FName EffectSocketName; // 0x38
	float NearRange; // 0x40
};

struct UDistributionVectorUniformParam : UDistributionVector {
	FName MaxParameterName; // 0x38
	FName MinParameterName; // 0x40
	FVector DefaultMax; // 0x48
	FVector DefaultMin; // 0x54
};

struct UMaterialExpressionRound : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UTextBlock : UTextLayoutWidget {
	FText Text; // 0x128
	FDelegate TextDelegate; // 0x140
	FSlateColor ColorAndOpacity; // 0x150
	FDelegate ColorAndOpacityDelegate; // 0x178
	FSlateFontInfo Font; // 0x188
	FSlateBrush StrikeBrush; // 0x1e0
	FVector2D ShadowOffset; // 0x268
	FLinearColor ShadowColorAndOpacity; // 0x270
	FDelegate ShadowColorAndOpacityDelegate; // 0x280
	float MinDesiredWidth; // 0x290
	bool bWrapWithInvalidationPanel; // 0x294
	bool bAutoWrapText; // 0x295
	ETextTransformPolicy TextTransformPolicy; // 0x296
	bool bSimpleTextMode; // 0x297
};

struct ULiveLinkVirtualSubject : UObject {
	ULiveLinkRole* Role; // 0x30
	TArray<FLiveLinkSubjectName> Subjects; // 0x38
	TArray<ULiveLinkFrameTranslator*> FrameTranslators; // 0x48
};

struct UWorldMap_Image_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UCustomShapeButton* CustomShapeButton_2; // 0x268
	UCustomShapeButton* CustomShapeButton_3; // 0x270
	UCustomShapeButton* CustomShapeButton_4; // 0x278
	UCustomShapeButton* CustomShapeButton_5; // 0x280
	UImage* Hovered_2; // 0x288
	UImage* Hovered_3; // 0x290
	UImage* Hovered_4; // 0x298
	UImage* Image_3_2; // 0x2a0
	UImage* Image_4_2; // 0x2a8
	UImage* Map; // 0x2b0
	UImage* Selected_2; // 0x2b8
	UImage* Selected_3; // 0x2c0
	UImage* Selected_4; // 0x2c8
	UC_Manager-WorldMap_C* WorldMapManager; // 0x2d0
	bool Dragged; // 0x2d8
	bool LeftMouseDown; // 0x2d9
	FVector2D CurrentMousePosition; // 0x2dc
	FMulticastInlineDelegate OnMouseButtonDownOnMap; // 0x2e8
	FMulticastInlineDelegate OnMouseButtonUpOnMap; // 0x2f8
	UWBP_Tooltip_C* Tooltip Widget; // 0x308
	bool IsMouseEnter; // 0x310
	UWBP_MapCoordinate_C* Tooltip; // 0x318
	UC_Manager-RespawnMap_C* RespawnMapManager; // 0x320
	UWBP_WorldMap_C* WorldMapWidget; // 0x328
	bool bRespawnUI; // 0x330
	bool bHovered; // 0x331
	bool UsingFirstSpawn; // 0x332
	FVector2D MousePivot; // 0x334
};

struct UDebugCameraControllerSettings : UDeveloperSettings {
	TArray<FDebugCameraControllerSettingsViewModeIndex> CycleViewModes; // 0x38
};

struct USQSChangeMessageVisibilityBatch : UAwsSQSAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UNetAnalyticsAggregatorConfig : UObject {
	TArray<FNetAnalyticsDataConfig> NetAnalyticsData; // 0x28
};

struct UCallbackProxyAddRemoveWorkshopItemFavorite : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
	FMulticastInlineDelegate OnSteamInitFailure; // 0x50
};

struct USkillSystemComponent : UCustomReplicationActorComponent {
	int32_t ProtocolSlotCount; // 0xb8
	TArray<FItemInventory> ProtocolSlotArray; // 0xc0
	int32_t MemoryChipSlotCount; // 0xd0
	TArray<FItemInventory> MemoryChipSlotArray; // 0xd8
};

struct UPawnSensingComponent : UActorComponent {
	float HearingThreshold; // 0xb0
	float LOSHearingThreshold; // 0xb4
	float SightRadius; // 0xb8
	float SensingInterval; // 0xbc
	float HearingMaxSoundAge; // 0xc0
	char bEnableSensingUpdates : 1; // 0xc4
	char bOnlySensePlayers : 1; // 0xc4
	char bSeePawns : 1; // 0xc4
	char bHearNoises : 1; // 0xc4
	FMulticastInlineDelegate OnSeePawn; // 0xd0
	FMulticastInlineDelegate OnHearNoise; // 0xe0
	float PeripheralVisionAngle; // 0xf0
	float PeripheralVisionCosine; // 0xf4
};

struct UCloudWatchLogsGetQueryResults : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UMaterialExpressionOneMinus : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UPaperTileLayer : UObject {
	FText LayerName; // 0x28
	int32_t LayerWidth; // 0x40
	int32_t LayerHeight; // 0x44
	char bHiddenInGame : 1; // 0x48
	char bLayerCollides : 1; // 0x48
	char bOverrideCollisionThickness : 1; // 0x48
	char bOverrideCollisionOffset : 1; // 0x48
	float CollisionThicknessOverride; // 0x4c
	float CollisionOffsetOverride; // 0x50
	FLinearColor LayerColor; // 0x54
	int32_t AllocatedWidth; // 0x64
	int32_t AllocatedHeight; // 0x68
	TArray<FPaperTileInfo> AllocatedCells; // 0x70
	UPaperTileSet* TileSet; // 0x80
	TArray<int32_t> AllocatedGrid; // 0x88
};

struct UPhysicsSettingsCore : UDeveloperSettings {
	float DefaultGravityZ; // 0x38
	float DefaultTerminalVelocity; // 0x3c
	float DefaultFluidFriction; // 0x40
	int32_t SimulateScratchMemorySize; // 0x44
	int32_t RagdollAggregateThreshold; // 0x48
	float TriangleMeshTriangleMinAreaThreshold; // 0x4c
	bool bEnableShapeSharing; // 0x50
	bool bEnablePCM; // 0x51
	bool bEnableStabilization; // 0x52
	bool bWarnMissingLocks; // 0x53
	bool bEnable2DPhysics; // 0x54
	bool bDefaultHasComplexCollision; // 0x55
	float BounceThresholdVelocity; // 0x58
	EFrictionCombineMode FrictionCombineMode; // 0x5c
	EFrictionCombineMode RestitutionCombineMode; // 0x5d
	float MaxAngularVelocity; // 0x60
	float MaxDepenetrationVelocity; // 0x64
	float ContactOffsetMultiplier; // 0x68
	float MinContactOffset; // 0x6c
	float MaxContactOffset; // 0x70
	bool bSimulateSkeletalMeshOnDedicatedServer; // 0x74
	ECollisionTraceFlag DefaultShapeComplexity; // 0x75
	FChaosSolverConfiguration SolverOptions; // 0x78
};

struct ULowEntryByteArray : UObject {
	TArray<char> ByteArray; // 0x28
};

struct USubmixEffectFlexiverbPreset : USoundEffectSubmixPreset {
	FSubmixEffectFlexiverbSettings Settings; // 0xa0
};

struct UFAI_BTTask_SetRandomPointFromSpawner_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	FBlackboardKeySelector KEYBound; // 0xb0
	FBlackboardKeySelector KEYTargetLocation; // 0xd8
	FVector RandomPosition; // 0x100
	bool UsePositionOnGround; // 0x10c
	bool DebugPosition; // 0x10d
};

struct UWBP_Tooltip_DescriptionListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* Text_IsPercent; // 0x268
	UTextBlock* Text_Name; // 0x270
	UTextBlock* Text_Type; // 0x278
	UTextBlock* Text_Value; // 0x280
	FText Name; // 0x288
	E_DamageType Type; // 0x2a0
	FText Value; // 0x2a8
	bool bUseSign; // 0x2c0
	bool bUseColorEffect; // 0x2c1
	bool bUsePercent; // 0x2c2
	float CustomZero; // 0x2c4
};

struct ULowEntryParsedHashcash : UObject {
	bool Valid; // 0x28
	FString Resource; // 0x30
	FDateTime Date; // 0x40
	int32_t Bits; // 0x48
};

struct UCreateSessionCallbackProxyAdvanced : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UNiagaraLightRendererProperties : UNiagaraRendererProperties {
	char bUseInverseSquaredFalloff : 1; // 0x80
	char bAffectsTranslucency : 1; // 0x80
	float RadiusScale; // 0x84
	FVector ColorAdd; // 0x88
	FNiagaraVariableAttributeBinding LightRenderingEnabledBinding; // 0x98
	FNiagaraVariableAttributeBinding LightExponentBinding; // 0xf0
	FNiagaraVariableAttributeBinding PositionBinding; // 0x148
	FNiagaraVariableAttributeBinding ColorBinding; // 0x1a0
	FNiagaraVariableAttributeBinding RadiusBinding; // 0x1f8
	FNiagaraVariableAttributeBinding VolumetricScatteringBinding; // 0x250
};

struct USQSSendMessage : UAwsSQSAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UCloudWatchLogsPutRetentionPolicy : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UDatasmithPointLightComponentTemplate : UDatasmithObjectTemplate {
	ELightUnits IntensityUnits; // 0x30
	float SourceRadius; // 0x34
	float SourceLength; // 0x38
	float AttenuationRadius; // 0x3c
};

struct UDatasmithAssetUserData : UAssetUserData {
	TMap<FName, FString> MetaData; // 0x28
};

struct UARGetCandidateObjectAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct UMaterialExpressionDecalMipmapLevel : UMaterialExpression {
	FExpressionInput TextureSize; // 0x40
	float ConstWidth; // 0x54
	float ConstHeight; // 0x58
};

struct UWBP_Radiogram_6010215_C : UWBP_radiogram_CustomBase_C {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x298
	UTextBlock* TextBlock; // 0x2a0
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x2a8
};

struct UGeometryCacheTrack : UObject {
	float Duration; // 0x28
};

struct ADefaultPawn : APawn {
	float BaseTurnRate; // 0x280
	float BaseLookUpRate; // 0x284
	UPawnMovementComponent* MovementComponent; // 0x288
	USphereComponent* CollisionComponent; // 0x290
	UStaticMeshComponent* MeshComponent; // 0x298
	char bAddDefaultMovementBindings : 1; // 0x2a0
};

struct ABP_EscapeRocketInnerDoor_C : ABP_InteractionableActor_C {
	UBoxComponent* Box; // 0x268
};

struct ABP_TerrasiteTransfter_C : ABP_FunctionalityBuildPartBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x890
	USkeletalMeshComponent* SkeletalMesh; // 0x898
	UBP_StorageInventoryComponent_C* BP_StorageInventoryComponent; // 0x8a0
};

struct UObjectReferencer : UObject {
	TArray<UObject*> ReferencedObjects; // 0x28
};

struct AExternalDisplay : AActor {
	TArray<UTextureRenderTarget2D*> RenderTargetArray; // 0x220
	ADisplayDeviceInterface* DisplayDevice; // 0x230
};

struct URadialForceComponent : USceneComponent {
	float Radius; // 0x1f8
	ERadialImpulseFalloff Falloff; // 0x1fc
	float ImpulseStrength; // 0x200
	char bImpulseVelChange : 1; // 0x204
	char bIgnoreOwningActor : 1; // 0x204
	float ForceStrength; // 0x208
	float DestructibleDamage; // 0x20c
	TArray<EObjectTypeQuery> ObjectTypesToAffect; // 0x210
};

struct USoundNodeDistanceCrossFade : USoundNode {
	TArray<FDistanceDatum> CrossFadeInput; // 0x48
};

struct UWidgetSwitcher : UPanelWidget {
	int32_t ActiveWidgetIndex; // 0x120
};

struct ABP_DoorBuildPartBase_C : ABP_FunctionalityBuildPartBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x890
	UStaticMeshComponent* Left; // 0x898
	UBP_BuildJointComponent_C* BP_BuildJointComponent; // 0x8a0
	float Swing_Closed_Rotation_10B53FDF43BFD9FA9B55D781490BA620; // 0x8a8
	ETimelineDirection Swing_Closed__Direction_10B53FDF43BFD9FA9B55D781490BA620; // 0x8ac
	UTimelineComponent* Swing Closed; // 0x8b0
	float Swing_Open_Alpha_C3CAB34E41DC30039BFD22B65E5F29FA; // 0x8b8
	ETimelineDirection Swing_Open__Direction_C3CAB34E41DC30039BFD22B65E5F29FA; // 0x8bc
	UTimelineComponent* Swing Open; // 0x8c0
	E_DoorState DoorState; // 0x8c8
	FText Interaction Text; // 0x8d0
	bool Open direction; // 0x8e8
	UBP_PlayerInventoryComponent_C* Interacted Player Inventory; // 0x8f0
	bool Door Open; // 0x8f8
	FVector Location; // 0x8fc
	float AutoCloseDoorTime; // 0x908
	bool bMoving; // 0x90c
};

struct UInterpTrackInstColorProp : UInterpTrackInstProperty {
	FColor ResetColor; // 0x58
};

struct UParticleModuleLocationEmitter : UParticleModuleLocationBase {
	FName EmitterName; // 0x30
	ELocationEmitterSelectionMethod SelectionMethod; // 0x38
	char InheritSourceVelocity : 1; // 0x3c
	float InheritSourceVelocityScale; // 0x40
	char bInheritSourceRotation : 1; // 0x44
	float InheritSourceRotationScale; // 0x48
};

struct UBTTask_MoveDirectlyToward : UBTTask_MoveTo {
	char bDisablePathUpdateOnGoalLocationChange : 1; // 0xb0
	char bProjectVectorGoalToNavigation : 1; // 0xb0
	char bUpdatedDeprecatedProperties : 1; // 0xb0
};

struct UPawnAction : UObject {
	UPawnAction* ChildAction; // 0x28
	UPawnAction* ParentAction; // 0x30
	UPawnActionsComponent* OwnerComponent; // 0x38
	UObject* Instigator; // 0x40
	UBrainComponent* BrainComp; // 0x48
	char bAllowNewSameClassInstance : 1; // 0x80
	char bReplaceActiveSameClassInstance : 1; // 0x80
	char bShouldPauseMovement : 1; // 0x80
	char bAlwaysNotifyOnFinished : 1; // 0x80
};

struct URokita_AnimBlueprint_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x340
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3c0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x440
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x4e0
	bool IsADS; // 0x5a0
};

struct UMaterialExpressionLogarithm2 : UMaterialExpression {
	FExpressionInput X; // 0x40
};

struct UNiagaraDataInterfaceCurlNoise : UNiagaraDataInterface {
	uint32_t Seed; // 0x38
};

struct UProgressBar : UWidget {
	FProgressBarStyle WidgetStyle; // 0x108
	USlateWidgetStyleAsset* Style; // 0x2a8
	USlateBrushAsset* BackgroundImage; // 0x2b0
	USlateBrushAsset* FillImage; // 0x2b8
	USlateBrushAsset* MarqueeImage; // 0x2c0
	float Percent; // 0x2c8
	EProgressBarFillType BarFillType; // 0x2cc
	bool bIsMarquee; // 0x2cd
	FVector2D BorderPadding; // 0x2d0
	FDelegate PercentDelegate; // 0x2d8
	FLinearColor FillColorAndOpacity; // 0x2e8
	FDelegate FillColorAndOpacityDelegate; // 0x2f8
};

struct UAkLinuxInitializationSettings : UObject {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xb8
};

struct UParticleModuleAttractorPoint : UParticleModuleAttractorBase {
	FRawDistributionVector Position; // 0x30
	FRawDistributionFloat Range; // 0x78
	FRawDistributionFloat Strength; // 0xa8
	char StrengthByDistance : 1; // 0xd8
	char bAffectBaseVelocity : 1; // 0xd8
	char bOverrideVelocity : 1; // 0xd8
	char bUseWorldSpacePosition : 1; // 0xd8
	char Positive_X : 1; // 0xd8
	char Positive_Y : 1; // 0xd8
	char Positive_Z : 1; // 0xd8
	char Negative_X : 1; // 0xd8
	char Negative_Y : 1; // 0xd9
	char Negative_Z : 1; // 0xd9
};

struct UPaperRuntimeSettings : UObject {
	bool bEnableSpriteAtlasGroups; // 0x28
	bool bEnableTerrainSplineEditing; // 0x29
	bool bResizeSpriteDataToMatchTextures; // 0x2a
};

struct UGameplayTagsList : UObject {
	FString ConfigFileName; // 0x28
	TArray<FGameplayTagTableRow> GameplayTagList; // 0x38
};

struct USVCameraShake : UMatineeCameraShake {
	int32_t Priority; // 0x178
	char bSingleInstanceIgnoreRestart : 1; // 0x17c
};

struct UUMGSequenceTickManager : UObject {
	TSet<TWeakObjectPtr<UUserWidget>> WeakUserWidgets; // 0x28
	UMovieSceneEntitySystemLinker* Linker; // 0x78
};

struct ABP_SquareFoundationBase_C : ABP_FoundationBuildPartBase_C {
	UBoxComponent* PulseCheck8; // 0x870
	UBoxComponent* PulseCheck1; // 0x878
	UBoxComponent* PulseCheck7; // 0x880
	UBoxComponent* PulseCheck6; // 0x888
	UBoxComponent* PulseCheck5; // 0x890
	USceneComponent* Pillar; // 0x898
	UBP_BuildJointComponent_C* PillarSocket4; // 0x8a0
	UBP_BuildJointComponent_C* PillarSocket1; // 0x8a8
	UBP_BuildJointComponent_C* PillarSocket3; // 0x8b0
	UBP_BuildJointComponent_C* PillarSocket2; // 0x8b8
	UBP_BuildJointComponent_C* PillarSocket; // 0x8c0
	USceneComponent* Socket_Pillar; // 0x8c8
	UBoxComponent* Checker_Tri_3; // 0x8d0
	UBoxComponent* Checker_Tri_5; // 0x8d8
	UBoxComponent* Checker_Tri_4; // 0x8e0
	UBoxComponent* Checker_Tri_2; // 0x8e8
	UBoxComponent* Checker2; // 0x8f0
	UBoxComponent* Checker1; // 0x8f8
	UBoxComponent* Checker4; // 0x900
	UBoxComponent* Checker3; // 0x908
	USceneComponent* LandscapeCheck; // 0x910
	UBP_BuildJointComponent_C* FoundationJoint4_3; // 0x918
	UBP_BuildJointComponent_C* FoundationJoint2_3; // 0x920
	UBP_BuildJointComponent_C* FoundationJoint1_3; // 0x928
	UBP_BuildJointComponent_C* FoundationJoint3_3; // 0x930
	USceneComponent* Pulse; // 0x938
	UBoxComponent* PulseCheck4; // 0x940
	UBoxComponent* PulseCheck3; // 0x948
	UBoxComponent* PulseCheck2; // 0x950
	UBoxComponent* PulseCheck; // 0x958
	UBP_BuildJointComponent_C* FoundationJoint2_2; // 0x960
	UBP_BuildJointComponent_C* FoundationJoint1_2; // 0x968
	UBP_BuildJointComponent_C* FoundationJoint4_2; // 0x970
	UBP_BuildJointComponent_C* FoundationJoint3_2; // 0x978
	USceneComponent* Socket_Foundation_Tri; // 0x980
	USceneComponent* Socket_Ramp; // 0x988
	UBP_BuildJointComponent_C* WallSocket3_1; // 0x990
	UBP_BuildJointComponent_C* WallSocket2_1; // 0x998
	UBP_BuildJointComponent_C* WallSocket1_1; // 0x9a0
	UBP_BuildJointComponent_C* WallSocket4_1; // 0x9a8
	USceneComponent* Socket_Wall; // 0x9b0
	UBP_BuildJointComponent_C* FoundationJoint1_1; // 0x9b8
	UBP_BuildJointComponent_C* FoundationJoint4_1; // 0x9c0
	UBP_BuildJointComponent_C* FoundationJoint3_1; // 0x9c8
	UBP_BuildJointComponent_C* FoundationJoint2_1; // 0x9d0
	USceneComponent* Socket_Foundation; // 0x9d8
	UBP_BuildJointComponent_C* StairSocket1; // 0x9e0
	UBP_BuildJointComponent_C* Bolt_1; // 0x9e8
};

struct UTileView : UListView {
	float EntryHeight; // 0x368
	float EntryWidth; // 0x36c
	EListItemAlignment TileAlignment; // 0x370
	bool bWrapHorizontalNavigation; // 0x371
};

struct UDistributionVectorParameterBase : UDistributionVectorConstant {
	FName ParameterName; // 0x50
	FVector MinInput; // 0x58
	FVector MaxInput; // 0x64
	FVector MinOutput; // 0x70
	FVector MaxOutput; // 0x7c
	DistributionParamMode ParamModes[0x3]; // 0x88
};

struct UMovieSceneStringSection : UMovieSceneSection {
	FMovieSceneStringChannel StringCurve; // 0xe8
};

struct UCloudWatchLogsCreateExportTask : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UBookMark : UBookmarkBase {
	FVector Location; // 0x28
	FRotator Rotation; // 0x34
	TArray<FString> HiddenLevels; // 0x40
};

struct UGameplayTaskResource : UObject {
	int32_t ManualResourceID; // 0x28
	int8_t AutoResourceID; // 0x2c
	char bManuallySetID : 1; // 0x30
};

struct UInAppPurchaseRestoreCallbackProxy2 : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UWBP_Functionality_Console_C : UWBP_FunctionalityBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	UGridPanel* Panel_Romote; // 0x278
	UScrollBox* ScrollBox_Category; // 0x280
	UScrollBox* ScrollBox_Facility; // 0x288
	UHorizontalBox* Toolbar; // 0x290
	UVerticalBox* VerticalBox_Console; // 0x298
	UWBP_Button_UI_C* WBP_Button_UI; // 0x2a0
	UWBP_Button_UI_C* WBP_Button_UI_2; // 0x2a8
	UWBP_Button_UI_C* WBP_Button_UI_3; // 0x2b0
	UWBP_Button_UI_C* WBP_Button_UI_55; // 0x2b8
	UWBP_FunctionalityInfo_C* WBP_FunctionalityInfo; // 0x2c0
	UWBP_FunctionalityMainButton_C* WBP_FunctionalityMainButton; // 0x2c8
	UWBP_FunctionalityMainButton_C* WBP_FunctionalityMainButton_48; // 0x2d0
	UWBP_FunctionalityMainButton_C* WBP_FunctionalityMainButton_88; // 0x2d8
	UWBP_MainFrame_C* WBP_MainFrame; // 0x2e0
	UWBP_MainFrame_Toolbar_C* WBP_MainFrame_Toolbar; // 0x2e8
	UWBP_MainFrame_Toolbar_C* WBP_MainFrame_Toolbar_100; // 0x2f0
	TMap<AActor*, FS_BuildPartArray> ClassMap; // 0x2f8
	UUserWidget* CurrentRemoteWidget; // 0x348
	AActor* CurrentKey; // 0x350
};

struct UMaterialExpressionSobol : UMaterialExpression {
	FExpressionInput Cell; // 0x40
	FExpressionInput Index; // 0x54
	FExpressionInput Seed; // 0x68
	uint32_t ConstIndex; // 0x7c
	FVector2D ConstSeed; // 0x80
};

struct ASVProjectileWeapon : ARangeWeaponBase {
	FClientSideProjectileData ClientSideProjectileData; // 0x698
	TSoftObjectPtr<USVWeaponContent> WeaponData; // 0x6a8
	TArray<TSoftObjectPtr<USVWeaponPartsContent>> WeaponPartsData; // 0x6d0
	USVWeaponStateMachineBase* CurrentState; // 0x6e0
	EWeaponStateMachine CurrentStateIndex; // 0x6e8
	USVWeaponStateMachineBase* ActiveState; // 0x6f0
	USVWeaponStateMachineBase* InactiveState; // 0x6f8
	USVWeaponStateMachineBase* FiringState; // 0x700
	USVWeaponStateMachineBase* EquippingState; // 0x708
	USVWeaponStateMachineBase* UnequippingState; // 0x710
	USVWeaponStateMachineBase* ZoomingState; // 0x718
	USVWeaponStateMachineBase* SpiningUpState; // 0x720
	USVWeaponStateMachineBase* SpiningDownState; // 0x728
	float SpiningUpTime; // 0x730
	float SpiningDownTime; // 0x734
	float BarrelRotRateFiringThreshold; // 0x738
	float MaxBarrelRotRate; // 0x73c
	float CurrentBarrelRotAccel; // 0x740
	float CurrentBarrelRotRate; // 0x744
};

struct UNiagaraPreviewAxis_InterpParamLinearColor : UNiagaraPreviewAxis_InterpParamBase {
	FLinearColor Min; // 0x38
	FLinearColor Max; // 0x48
};

struct UAIDataProvider_QueryParams : UAIDataProvider {
	FName ParamName; // 0x28
	float FloatValue; // 0x30
	int32_t IntValue; // 0x34
	bool BoolValue; // 0x38
};

struct UTransformGizmo : UInteractiveGizmo {
	UTransformProxy* ActiveTarget; // 0x40
	bool bSnapToWorldGrid; // 0x48
	bool bGridSizeIsExplicit; // 0x49
	FVector ExplicitGridSize; // 0x4c
	bool bRotationGridSizeIsExplicit; // 0x58
	FRotator ExplicitRotationGridSize; // 0x5c
	bool bSnapToWorldRotGrid; // 0x68
	bool bUseContextCoordinateSystem; // 0x69
	EToolContextCoordinateSystem CurrentCoordinateSystem; // 0x6c
	TArray<UPrimitiveComponent*> ActiveComponents; // 0x100
	TArray<UPrimitiveComponent*> NonuniformScaleComponents; // 0x110
	TArray<UInteractiveGizmo*> ActiveGizmos; // 0x120
	UGizmoConstantFrameAxisSource* CameraAxisSource; // 0x140
	UGizmoComponentAxisSource* AxisXSource; // 0x148
	UGizmoComponentAxisSource* AxisYSource; // 0x150
	UGizmoComponentAxisSource* AxisZSource; // 0x158
	UGizmoComponentAxisSource* UnitAxisXSource; // 0x160
	UGizmoComponentAxisSource* UnitAxisYSource; // 0x168
	UGizmoComponentAxisSource* UnitAxisZSource; // 0x170
	UGizmoTransformChangeStateTarget* StateTarget; // 0x178
	UGizmoScaledTransformSource* ScaledTransformSource; // 0x180
};

struct UEnvQueryTest_Project : UEnvQueryTest {
	FEnvTraceData ProjectionData; // 0x1f8
};

struct Ux_WBP_Functionality_WaterPurifier_C : UWBP_FunctionalityBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	UWBP_Functionality_ConversionSlot_C* BP_ConvertContainer; // 0x278
	UWBP_Slot_Inventory_C* BP_InventorySlot; // 0x280
	UWBP_MainFrame_C* BP_UI_Frame; // 0x288
	UUniformGridPanel* ContentsGrid; // 0x290
	UUniformGridPanel* ConvertingGrid; // 0x298
	UImage* Image_2; // 0x2a0
	UImage* Image_82; // 0x2a8
	UImage* Image_162; // 0x2b0
	UImage* Image_224; // 0x2b8
	UWBP_Dropdown_C* WBP_Dropdown_Conversion; // 0x2c0
	UWBP_FunctionalityInfo_C* WBP_FunctionalityInfo; // 0x2c8
	UWBP_MainFrame_C* WBP_MainFrame; // 0x2d0
	UWBP_MainFrame_Toolbar_C* WBP_MainFrame_Toolbar; // 0x2d8
	ABP_MaintainConvertBuildParts_C* TargetMaintainConvertBuildparts; // 0x2e0
	TArray<UWBP_Slot_Inventory_C*> Trans Inventory Slots; // 0x2e8
	TArray<UWBP_Slot_Inventory_C*> Contents Inventory Slots; // 0x2f8
	TArray<UWBP_Functionality_ConversionSlot_C*> Convert Slots; // 0x308
};

struct UWBP_Radiogram_4020206_C : UUserWidget {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x260
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x268
	UWBP_RadiogramListing_C* WBP_RadiogramListing_2; // 0x270
	UWBP_RadiogramListing_C* WBP_RadiogramListing_3; // 0x278
};

struct ABP_MasterItemSpawner_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UTextRenderComponent* Spawner Type Text; // 0x228
	USceneComponent* DefaultSceneRoot; // 0x230
	float Spawn Timer; // 0x238
	bool Spawn Item On Start; // 0x23c
	bool Spawn Item On Timer; // 0x23d
	bool Allow Multipule Items; // 0x23e
	bool Always Spawn Item; // 0x23f
	bool Replace Old Item; // 0x240
	TSet<E_LootType> Spawner Types; // 0x248
	ABP_MasterItem_C* Item Referance; // 0x298
	bool Attach To Parant Component; // 0x2a0
	AActor* Attached Actor; // 0x2a8
};

struct UEditableGameplayTagQueryExpression_AllTagsMatch : UEditableGameplayTagQueryExpression {
	FGameplayTagContainer Tags; // 0x28
};

struct UWBP_RespawnPanel_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Menus; // 0x268
	UWidgetAnimation* Anim_Open; // 0x270
	UButton* Button_Respawn; // 0x278
	UButton* Button_ToRespawnMenu; // 0x280
	UTextBlock* Cause; // 0x288
	UTextBlock* Days; // 0x290
	UScrollBox* HPHistoryScroll; // 0x298
	UImage* Image; // 0x2a0
	UImage* Image_3; // 0x2a8
	UImage* Image_4; // 0x2b0
	UImage* Image_5; // 0x2b8
	UImage* Image_46; // 0x2c0
	UImage* Image_60; // 0x2c8
	UImage* Image_74; // 0x2d0
	UImage* Image_112; // 0x2d8
	UVerticalBox* VerticalBox_DeathRecap; // 0x2e0
	UVerticalBox* VerticalBox_RespawnArea; // 0x2e8
	UVerticalBox* VerticalBox_RespawnPoint; // 0x2f0
	UWBP_Button_OutGame_C* WBP_Button_OutGame; // 0x2f8
	UWBP_Button_OutGame_C* WBP_Button_OutGame_2; // 0x300
	UWBP_DeathRecapListing_C* WBP_DeathRecapListing; // 0x308
	UWBP_GCRBInfo_C* WBP_GCRBInfo; // 0x310
	UWBP_MainFrame_C* WBP_MainFrame; // 0x318
	UWBP_PlayerInfo_C* WBP_PlayerInfo; // 0x320
	UWBP_Scene_Landing_LocationButton_C* WBP_Scene_Landing_Arphaxad; // 0x328
	UWBP_Scene_Landing_LocationButton_C* WBP_Scene_Landing_Ashur; // 0x330
	UWBP_Scene_Landing_LocationButton_C* WBP_Scene_Landing_Elam; // 0x338
	UWBP_WorldMap_C* WBP_WorldMap; // 0x340
	UWidgetSwitcher* WidgetSwitcher_1; // 0x348
	UWidgetSwitcher* WidgetSwitcher_DeadMenus; // 0x350
	UWidgetSwitcher* WidgetSwitcher_Enemy; // 0x358
	TArray<UWBP_MapMarker_RespawnPoint_C*> RespawnPointMarker; // 0x360
	FText reason; // 0x370
	float AliveTime; // 0x388
	float NewZoom; // 0x38c
	FVector2D NewPivot; // 0x390
	FTimerHandle TimerChangeZoomHandler; // 0x398
	ABP_RespawnBuildPartBase_C* RespawnPoint; // 0x3a0
	E_SpawnArea RespawnArea; // 0x3a8
	TArray<UWBP_RespawnListing_C*> RespawnPointListing; // 0x3b0
	bool bDoubleClicked; // 0x3c0
	TArray<FS_HealthChangeSummary> OnHealthSummary; // 0x3c8
	FS_PlayerInfoSummary KillerInfo; // 0x3d8
	ABP_ModelViewer_C* Killer Model Viewer; // 0x458
	int32_t SummaryBundleInterval; // 0x460
	UTextBlock* Days_1; // 0x468
	FFloatValueFromDataTable NewVar_1; // 0x470
};

struct ABP_SVChatController_C : ASurvivalPlayerController {
	FPointerToUberGraphFrame UberGraphFrame; // 0x5d8
	float MaxProximityDistance; // 0x5e0
	UWBP_MainChatWindow_C* MainChatRef; // 0x5e8
	int32_t PlayerId; // 0x5f0
	int32_t Attempt; // 0x5f4
	FString TeamID; // 0x5f8
	bool IsHideUI; // 0x608
	float WindowDuration; // 0x60c
};

struct UWBP_Radiogram_4010103_C : UUserWidget {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x260
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x268
	UWBP_RadiogramListing_C* WBP_RadiogramListing_2; // 0x270
	UWBP_RadiogramListing_C* WBP_RadiogramListing_3; // 0x278
	UWBP_RadiogramListing_C* WBP_RadiogramListing_4; // 0x280
};

struct UInterpTrackVectorMaterialParam : UInterpTrackVectorBase {
	TArray<UMaterialInterface*> TargetMaterials; // 0x90
	FName ParamName; // 0xa0
};

struct UWBP_Objective_LM2_C : UWBP_ObjectiveBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	UWBP_ObjectiveListing_C* OL_MainBox; // 0x278
	UWBP_ObjectiveListing_C* OL_Valve1; // 0x280
	UWBP_ObjectiveListing_C* OL_Valve2; // 0x288
	UWBP_ObjectiveListing_C* OL_Valve3; // 0x290
	UWBP_ObjectiveListing_C* OL_Valve4; // 0x298
	UTextBlock* Text_Objective; // 0x2a0
	UVerticalBox* VerticalBox_Valves; // 0x2a8
	UWBP_ObjectiveFrame_C* WBP_ObjectiveFrame; // 0x2b0
	TMap<UWBP_ObjectiveListing_C*, FVector> Valves; // 0x2b8
};

struct UMaterialExpressionSetMaterialAttributes : UMaterialExpression {
	TArray<FExpressionInput> Inputs; // 0x40
	TArray<FGuid> AttributeSetTypes; // 0x50
};

struct URuntimeVirtualTexture : UObject {
	int32_t TileCount; // 0x28
	int32_t TileSize; // 0x2c
	int32_t TileBorderSize; // 0x30
	ERuntimeVirtualTextureMaterialType MaterialType; // 0x34
	bool bCompressTextures; // 0x35
	bool bClearTextures; // 0x36
	bool bSinglePhysicalSpace; // 0x37
	bool bPrivateSpace; // 0x38
	bool bAdaptive; // 0x39
	bool bContinuousUpdate; // 0x3a
	int32_t RemoveLowMips; // 0x3c
	TextureGroup LODGroup; // 0x40
	int32_t Size; // 0x44
	URuntimeVirtualTextureStreamingProxy* StreamingTexture; // 0x48
};

struct UInterpTrackInstToggle : UInterpTrackInst {
	ETrackToggleAction Action; // 0x28
	float LastUpdatePosition; // 0x2c
	char bSavedActiveState : 1; // 0x30
};

struct UDestructibleFractureSettings : UObject {
	int32_t CellSiteCount; // 0x28
	FFractureMaterial FractureMaterialDesc; // 0x2c
	int32_t RandomSeed; // 0x50
	TArray<FVector> VoronoiSites; // 0x58
	int32_t OriginalSubmeshCount; // 0x68
	TArray<UMaterialInterface*> Materials; // 0x70
	TArray<FDestructibleChunkParameters> ChunkParameters; // 0x80
};

struct UUserDefinedImageCaptureProtocol : UUserDefinedCaptureProtocol {
	EDesiredImageFormat Format; // 0xd8
	bool bEnableCompression; // 0xd9
	int32_t CompressionQuality; // 0xdc
};

struct ANiagaraActor : AActor {
	UNiagaraComponent* NiagaraComponent; // 0x220
	char bDestroyOnSystemFinish : 1; // 0x228
};

struct UConstantQNRT : UAudioSynesthesiaNRT {
	UConstantQNRTSettings* Settings; // 0x78
};

struct UPlaneFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb0
	float MinRange; // 0xb4
	float MaxRange; // 0xb8
	float Default; // 0xbc
	float Distance; // 0xc0
	FVector Position; // 0xc4
	FVector Normal; // 0xd0
	EFieldFalloffType Falloff; // 0xdc
};

struct UAkWwiseTree : UWidget {
	FMulticastInlineDelegate OnSelectionChanged; // 0x108
	FMulticastInlineDelegate OnItemDragged; // 0x118
};

struct UBlackboardKeyType_Enum : UBlackboardKeyType {
	UEnum* EnumType; // 0x30
	FString EnumName; // 0x38
	char bIsEnumNameValid : 1; // 0x48
};

struct UBTTask_WaitRespawn_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
};

struct UWBP_Radiogram_6010107_C : UWBP_radiogram_CustomBase_C {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x298
	UTextBlock* TextBlock; // 0x2a0
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x2a8
};

struct UBTDecorator_Blackboard : UBTDecorator_BlackboardBase {
	int32_t IntValue; // 0x90
	float FloatValue; // 0x94
	FString StringValue; // 0x98
	FString CachedDescription; // 0xa8
	char OperationType; // 0xb8
	EBTBlackboardRestart NotifyObserver; // 0xb9
};

struct ABP_StartingPawn_C : ASpectatorPawn {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2a8
	FTransform CharacterSpawnTransform; // 0x2b0
	FTransform PODSpawnTransform; // 0x2e0
	E_SpawnArea TargetSpawnArea; // 0x310
	UWBP_Scene_Landing_C* SelectLandingPoint_Widget; // 0x318
	UBP_GameSettings_C* Game Settings; // 0x320
	float TempAmbient; // 0x328
	float TempEffect; // 0x32c
	float TempUI; // 0x330
	float TempMusic; // 0x334
	float TempVoice; // 0x338
};

struct UWBP_FunctionalityBase_C : UUserWidget {
	ABP_FunctionalityBuildPartBase_C* TargetFunctionality; // 0x260
	UBP_PlayerInventoryComponent_C* Inventory Component; // 0x268
};

struct UBlackboardData : UDataAsset {
	UBlackboardData* Parent; // 0x30
	TArray<FBlackboardEntry> Keys; // 0x38
	char bHasSynchronizedKeys : 1; // 0x48
};

struct UAnimSet : UObject {
	char bAnimRotationOnly : 1; // 0x28
	TArray<FName> TrackBoneNames; // 0x30
	TArray<FAnimSetMeshLinkup> LinkupCache; // 0x40
	TArray<char> BoneUseAnimTranslation; // 0x50
	TArray<char> ForceUseMeshTranslation; // 0x60
	TArray<FName> UseTranslationBoneNames; // 0x70
	TArray<FName> ForceMeshTranslationBoneNames; // 0x80
	FName PreviewSkelMeshName; // 0x90
	FName BestRatioSkelMeshName; // 0x98
};

struct USourceEffectFoldbackDistortionPreset : USoundEffectSourcePreset {
	FSourceEffectFoldbackDistortionSettings Settings; // 0x9c
};

struct UCameraShakeSourceComponent : USceneComponent {
	ECameraShakeAttenuation Attenuation; // 0x1f8
	float InnerAttenuationRadius; // 0x1fc
	float OuterAttenuationRadius; // 0x200
	UCameraShakeBase* CameraShake; // 0x208
	bool bAutoStart; // 0x210
};

struct UWidgetInteractionComponent : USceneComponent {
	FMulticastInlineDelegate OnHoveredWidgetChanged; // 0x1f8
	int32_t VirtualUserIndex; // 0x218
	int32_t PointerIndex; // 0x21c
	ECollisionChannel TraceChannel; // 0x220
	float InteractionDistance; // 0x224
	EWidgetInteractionSource InteractionSource; // 0x228
	bool bEnableHitTesting; // 0x229
	bool bShowDebug; // 0x22a
	float DebugSphereLineThickness; // 0x22c
	float DebugLineThickness; // 0x230
	FLinearColor DebugColor; // 0x234
	FHitResult CustomHitResult; // 0x2c0
	FVector2D LocalHitLocation; // 0x34c
	FVector2D LastLocalHitLocation; // 0x354
	UWidgetComponent* HoveredWidgetComponent; // 0x360
	FHitResult LastHitResult; // 0x368
	bool bIsHoveredWidgetInteractable; // 0x3f4
	bool bIsHoveredWidgetFocusable; // 0x3f5
	bool bIsHoveredWidgetHitTestVisible; // 0x3f6
};

struct USoundNodeModulator : USoundNode {
	float PitchMin; // 0x48
	float PitchMax; // 0x4c
	float VolumeMin; // 0x50
	float VolumeMax; // 0x54
};

struct ABP_BreakableResource_C : ABP_MasterResource_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x440
	UDestructibleComponent* BreakableDM; // 0x448
	UDestructibleMesh* Destructible Mesh; // 0x450
	UDestructibleComponent* NewVar_1; // 0x458
};

struct UExponentialHeightFogComponent : USceneComponent {
	float FogDensity; // 0x1f8
	float FogHeightFalloff; // 0x1fc
	FExponentialHeightFogData SecondFogData; // 0x200
	FLinearColor FogInscatteringColor; // 0x20c
	UTextureCube* InscatteringColorCubemap; // 0x220
	float InscatteringColorCubemapAngle; // 0x228
	FLinearColor InscatteringTextureTint; // 0x22c
	float FullyDirectionalInscatteringColorDistance; // 0x23c
	float NonDirectionalInscatteringColorDistance; // 0x240
	float DirectionalInscatteringExponent; // 0x244
	float DirectionalInscatteringStartDistance; // 0x248
	FLinearColor DirectionalInscatteringColor; // 0x24c
	float FogMaxOpacity; // 0x25c
	float StartDistance; // 0x260
	float FogCutoffDistance; // 0x264
	bool bEnableVolumetricFog; // 0x268
	float VolumetricFogScatteringDistribution; // 0x26c
	FColor VolumetricFogAlbedo; // 0x270
	FLinearColor VolumetricFogEmissive; // 0x274
	float VolumetricFogExtinctionScale; // 0x284
	float VolumetricFogDistance; // 0x288
	float VolumetricFogStaticLightingScatteringIntensity; // 0x28c
	bool bOverrideLightColorsWithFogInscatteringColors; // 0x290
};

struct UTextPropertyTestObject : UObject {
	FText DefaultedText; // 0x28
	FText UndefaultedText; // 0x40
	FText TransientText; // 0x58
};

struct UEnvQueryGenerator_BlueprintBase : UEnvQueryGenerator {
	FText GeneratorsActionDescription; // 0x50
	UEnvQueryContext* Context; // 0x68
	UEnvQueryItemType* GeneratedItemType; // 0x70
};

struct UMovieSceneCameraShakeSourceTriggerSection : UMovieSceneSection {
	FMovieSceneCameraShakeSourceTriggerChannel Channel; // 0xe8
};

struct UWBP_Main_Landmark_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Open_R; // 0x268
	UWidgetAnimation* Anim_Open_L; // 0x270
	UScrollBox* ScrollBox_1; // 0x278
	WBP_Main_Landmark_Description_C* WBP_LandmarkDescription; // 0x280
	WBP_LandmarkMap_C* WBP_LandmarkMap; // 0x288
	UBP_PlayerInventoryComponent_C* Player Inventory Component; // 0x290
	ALandmarkManager* LMManager; // 0x298
	UWBP_Main_LandmarkListing_C* Current Landmark Listing; // 0x2a0
};

struct UBP_ResourceGatherAmountFactor_C : UBP_MachineArmAbilityObjectBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x40
	EResourceGroupType Group; // 0x48
	float Multiply Amount; // 0x4c
};

struct UBTTask_ExecutionAttack_Juggernaut_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	float DelayTime; // 0xb0
	FBlackboardKeySelector IsExecutionAttack; // 0xb8
	FBlackboardKeySelector TargetActor; // 0xe0
	FVector BackMoveLocation; // 0x108
	FBlackboardKeySelector Aggro; // 0x118
	FBlackboardKeySelector IsSelectAttackType; // 0x140
	FBlackboardKeySelector IsRangeAttack; // 0x168
	FBlackboardKeySelector IsRangeAttackOther; // 0x190
	FBlackboardKeySelector IsMeleeAttack; // 0x1b8
	FBlackboardKeySelector IsWalkingAttack; // 0x1e0
};

struct ABP_WorldEndPP_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UPostProcessComponent* PostProcess; // 0x228
	USceneComponent* DefaultSceneRoot; // 0x230
};

struct UGizmoComponentWorldTransformSource : UGizmoBaseTransformSource {
	USceneComponent* Component; // 0x48
	bool bModifyComponentOnTransform; // 0x50
};

struct ACommonAI_BaseAIController_C : ASurvivalAIController {
	FPointerToUberGraphFrame UberGraphFrame; // 0x428
	UAIPerceptionComponent* AIPerception; // 0x430
	AActor* PerceptionUpdatedActor; // 0x438
	FAIStimulus PerceptionUpdatedStimulus; // 0x440
	FMulticastInlineDelegate OnForgetAll; // 0x480
	UBehaviorTree* BTAsset; // 0x490
};

struct UWBP_UI_SlotHovering_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Hovering; // 0x268
	UWidgetAnimation* Anim_Hovered; // 0x270
	UImage* Image_Fill; // 0x278
	bool Mouse Over; // 0x280
	FItemInventory Item; // 0x288
	UBP_PlayerInventoryComponent_C* Inventory Component; // 0x2c0
	FVector2D Icon Image Size; // 0x2c8
	float Tooltip Delay; // 0x2d0
	bool Selected; // 0x2d4
	bool Allow Selection; // 0x2d5
	UWBP_Tooltip_C* Tooltip Widget; // 0x2d8
	bool Convert Slot; // 0x2e0
	int32_t Slot Number; // 0x2e4
	bool UseInGameUI; // 0x2e8
	bool IsDoubleClick; // 0x2e9
	FItemGeneralInfo generalinfo; // 0x2f0
};

struct UParticleModuleLocationPrimitiveBase : UParticleModuleLocationBase {
	char Positive_X : 1; // 0x30
	char Positive_Y : 1; // 0x30
	char Positive_Z : 1; // 0x30
	char Negative_X : 1; // 0x30
	char Negative_Y : 1; // 0x30
	char Negative_Z : 1; // 0x30
	char SurfaceOnly : 1; // 0x30
	char Velocity : 1; // 0x30
	FRawDistributionFloat VelocityScale; // 0x38
	FRawDistributionVector StartLocation; // 0x68
};

struct UAISense_Team : UAISense {
	TArray<FAITeamStimulusEvent> RegisteredEvents; // 0x80
};

struct Ualloy_FoldingDoor_SK_Skeleton_AnimBlueprint_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x2f8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x348
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x398
	bool bIsOpen; // 0x438
	float MoveTime; // 0x43c
};

struct UMediaPlayer : UObject {
	FMulticastInlineDelegate OnEndReached; // 0x28
	FMulticastInlineDelegate OnMediaClosed; // 0x38
	FMulticastInlineDelegate OnMediaOpened; // 0x48
	FMulticastInlineDelegate OnMediaOpenFailed; // 0x58
	FMulticastInlineDelegate OnPlaybackResumed; // 0x68
	FMulticastInlineDelegate OnPlaybackSuspended; // 0x78
	FMulticastInlineDelegate OnSeekCompleted; // 0x88
	FMulticastInlineDelegate OnTracksChanged; // 0x98
	FTimespan CacheAhead; // 0xa8
	FTimespan CacheBehind; // 0xb0
	FTimespan CacheBehindGame; // 0xb8
	bool NativeAudioOut; // 0xc0
	bool PlayOnOpen; // 0xc1
	char Shuffle : 1; // 0xc4
	char Loop : 1; // 0xc4
	UMediaPlaylist* Playlist; // 0xc8
	int32_t PlaylistIndex; // 0xd0
	FTimespan TimeDelay; // 0xd8
	float HorizontalFieldOfView; // 0xe0
	float VerticalFieldOfView; // 0xe4
	FRotator ViewRotation; // 0xe8
	FGuid PlayerGuid; // 0x120
};

struct USoundNodeAttenuation : USoundNode {
	USoundAttenuation* AttenuationSettings; // 0x48
	FSoundAttenuationSettings AttenuationOverrides; // 0x50
	char bOverrideAttenuation : 1; // 0x3f0
};

struct UBrainComponent : UActorComponent {
	UBlackboardComponent* BlackboardComp; // 0xb8
	AAIController* AIOwner; // 0xc0
};

struct ASceneCapture2D : ASceneCapture {
	USceneCaptureComponent2D* CaptureComponent2D; // 0x230
};

struct UAnimBP_Talon_C : UNPCAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x310
	FAnimNode_Root AnimGraphNode_Root_2; // 0x318
	FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x348
	FAnimNode_DragonSpineSolver AnimGraphNode_DragonSpineSolver; // 0x460
	FAnimNode_DragonFeetSolver AnimGraphNode_DragonFeetSolver; // 0xc40
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1290
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x12b0
	FAnimNode_Root AnimGraphNode_Root; // 0x12d0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x1300
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1328
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x1350
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x13d0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1400
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x14e8
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1518
	FAnimNode_Slot AnimGraphNode_Slot; // 0x15c8
	FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer; // 0x1610
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x16c0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6; // 0x1818
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; // 0x18b8
	FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x1958
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x1b30
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x1b58
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x1cb0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x1cd8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x1d78
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x1df8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x1eb8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x1f58
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x1fd8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x2058
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x2080
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x2120
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x21e0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x2280
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x22a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2328
	TArray<FDragonData_FootData> FootIKInfo_B; // 0x23a8
	BP_Enum_AnimType AnimType; // 0x23b8
	UAnimSequenceBase* DeadAnim; // 0x23c0
	bool IsBoss; // 0x23c8
};

struct ABP_LandmarkActionActor_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	USceneComponent* DefaultSceneRoot; // 0x228
	bool IsActionActivate; // 0x230
};

struct UDialogueWave : UObject {
	char bMature : 1; // 0x28
	char bOverride_SubtitleOverride : 1; // 0x28
	FString SpokenText; // 0x30
	FString SubtitleOverride; // 0x40
	TArray<FDialogueContextMapping> ContextMappings; // 0x50
	FGuid LocalizationGUID; // 0x60
};

struct UParticleModuleLight_Seeded : UParticleModuleLight {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x120
};

struct UTimelineTemplate : UObject {
	float TimelineLength; // 0x28
	ETimelineLengthMode LengthMode; // 0x2c
	char bAutoPlay : 1; // 0x2d
	char bLoop : 1; // 0x2d
	char bReplicated : 1; // 0x2d
	char bIgnoreTimeDilation : 1; // 0x2d
	TArray<FTTEventTrack> EventTracks; // 0x30
	TArray<FTTFloatTrack> FloatTracks; // 0x40
	TArray<FTTVectorTrack> VectorTracks; // 0x50
	TArray<FTTLinearColorTrack> LinearColorTracks; // 0x60
	TArray<FBPVariableMetaDataEntry> MetaDataArray; // 0x70
	FGuid TimelineGuid; // 0x80
	FName VariableName; // 0x90
	FName DirectionPropertyName; // 0x98
	FName UpdateFunctionName; // 0xa0
	FName FinishedFunctionName; // 0xa8
};

struct UVectorFieldAnimated : UVectorField {
	UTexture2D* Texture; // 0x48
	EVectorFieldConstructionOp ConstructionOp; // 0x50
	int32_t VolumeSizeX; // 0x54
	int32_t VolumeSizeY; // 0x58
	int32_t VolumeSizeZ; // 0x5c
	int32_t SubImagesX; // 0x60
	int32_t SubImagesY; // 0x64
	int32_t FrameCount; // 0x68
	float FramesPerSecond; // 0x6c
	char bLoop : 1; // 0x70
	UVectorFieldStatic* NoiseField; // 0x78
	float NoiseScale; // 0x80
	float NoiseMax; // 0x84
};

struct UNiagaraDataInterfaceCurveBase : UNiagaraDataInterface {
	TArray<float> ShaderLUT; // 0x38
	float LUTMinTime; // 0x48
	float LUTMaxTime; // 0x4c
	float LUTInvTimeRange; // 0x50
	float LUTNumSamplesMinusOne; // 0x54
	char bUseLUT : 1; // 0x58
	char bExposeCurve : 1; // 0x58
	FName ExposedName; // 0x5c
	UTexture2D* ExposedTexture; // 0x68
};

struct UBlackboardKeyType_Object : UBlackboardKeyType {
	UObject* BaseClass; // 0x30
};

struct UCloudWatchLogsDeleteMetricFilter : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UMagicLeapLightingTrackingComponent : UActorComponent {
	bool UseGlobalAmbience; // 0xb0
	bool UseColorTemp; // 0xb1
};

struct UMovieSceneEventRepeaterSection : UMovieSceneEventSectionBase {
	FMovieSceneEvent Event; // 0xf0
};

struct ULevelSequenceBurnIn : UUserWidget {
	FLevelSequencePlayerSnapshot FrameInformation; // 0x260
	ALevelSequenceActor* LevelSequenceActor; // 0x318
};

struct UClickDragInputBehavior : UAnyButtonInputBehavior {
	bool bUpdateModifiersDuringDrag; // 0x120
};

struct UNiagaraPrecompileContainer : UObject {
	TArray<UNiagaraScript*> Scripts; // 0x28
	UNiagaraSystem* System; // 0x38
};

struct UMaterialInstance : UMaterialInterface {
	UPhysicalMaterial* PhysMaterial; // 0x88
	UPhysicalMaterial* PhysicalMaterialMap[0x8]; // 0x90
	UMaterialInterface* Parent; // 0xd0
	char bHasStaticPermutationResource : 1; // 0xd8
	char bOverrideSubsurfaceProfile : 1; // 0xd8
	TArray<FScalarParameterValue> ScalarParameterValues; // 0xe0
	TArray<FVectorParameterValue> VectorParameterValues; // 0xf0
	TArray<FTextureParameterValue> TextureParameterValues; // 0x100
	TArray<FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues; // 0x110
	TArray<FFontParameterValue> FontParameterValues; // 0x120
	FMaterialInstanceBasePropertyOverrides BasePropertyOverrides; // 0x130
	FStaticParameterSet StaticParameters; // 0x148
	FMaterialCachedParameters CachedLayerParameters; // 0x188
	TArray<UObject*> CachedReferencedTextures; // 0x328
};

struct ABP_HologramTrapBuildPartBase_C : ABP_FunctionalityBuildPartBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x890
	UStaticMeshComponent* Frame; // 0x898
	TMap<EItemGrade, UStaticMesh*> TierHologram; // 0x8a0
	EItemGrade HologramTier; // 0x8f0
	TMap<EItemGrade, int32_t> CopyInfoByTier; // 0x8f8
};

struct UWheeledVehicleMovementComponent4W : UWheeledVehicleMovementComponent {
	FVehicleEngineData EngineSetup; // 0x290
	FVehicleDifferential4WData DifferentialSetup; // 0x330
	float AckermannAccuracy; // 0x34c
	FVehicleTransmissionData TransmissionSetup; // 0x350
	FRuntimeFloatCurve SteeringCurve; // 0x380
};

struct UWBP_HUD_Durability_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image_Durability; // 0x268
	UBP_PlayerInventoryComponent_C* Player Inventory Component; // 0x270
	UMaterialInstanceDynamic* MI_Durability; // 0x278
};

struct UCallbackProxySetUserVoteOnWorkshopItem : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
	FMulticastInlineDelegate OnSteamInitFailure; // 0x50
};

struct UMultiLineEditableText : UTextLayoutWidget {
	FText Text; // 0x128
	FText HintText; // 0x140
	FDelegate HintTextDelegate; // 0x158
	FTextBlockStyle WidgetStyle; // 0x168
	bool bIsReadOnly; // 0x3d8
	FSlateFontInfo Font; // 0x3e0
	bool SelectAllTextWhenFocused; // 0x438
	bool ClearTextSelectionOnFocusLoss; // 0x439
	bool RevertTextOnEscape; // 0x43a
	bool ClearKeyboardFocusOnCommit; // 0x43b
	bool AllowContextMenu; // 0x43c
	FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x43d
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x43e
	FMulticastInlineDelegate OnTextChanged; // 0x440
	FMulticastInlineDelegate OnTextCommitted; // 0x450
};

struct UWBP_Main_Survivor_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* Button_Clan; // 0x268
	UButton* Button_Rank; // 0x270
	UButton* Button_Team; // 0x278
	UImage* Image_85; // 0x280
	UImage* Image_Selected; // 0x288
	UImage* Image_Selected_2; // 0x290
	UImage* Image_Selected_3; // 0x298
	UVerticalBox* VerticalBox_Invite; // 0x2a0
	UVerticalBox* VerticalBox_Join; // 0x2a8
	UVerticalBox* VerticalBox_Queue_Inv; // 0x2b0
	UVerticalBox* VerticalBox_Queue_Join; // 0x2b8
	UVerticalBox* VerticalBox_Team; // 0x2c0
	UWBP_Button_Function_C* WBP_Button_Invitation; // 0x2c8
	UWBP_Button_Function_C* WBP_Button_TeamCreate; // 0x2d0
	UWBP_Main_TeamListing_C* WBP_Main_TeamListing; // 0x2d8
	UWBP_Main_TeamLog_C* WBP_Main_TeamLog; // 0x2e0
	UWBP_MainFrame_C* WBP_MainFrame; // 0x2e8
	UWBP_MainFrame_C* WBP_MainFrame_49; // 0x2f0
	UWBP_MainFrame_Header_C* WBP_MainFrame_Header; // 0x2f8
	UWBP_MainFrame_Header_C* WBP_MainFrame_Header_62; // 0x300
	UWBP_Main_Ranking_C* WBP_Ranking; // 0x308
	UWBP_Main_Ranking_Description_C* WBP_Ranking_Description; // 0x310
	UWidgetSwitcher* WidgetSwitcher_1; // 0x318
	UWidgetSwitcher* WidgetSwitcher_TeamTools; // 0x320
	UGridPanel* WS_Rank; // 0x328
	UGridPanel* WS_Team; // 0x330
	UBP_PlayerInventoryComponent_C* Inventory Component; // 0x338
	int32_t NewVar_1; // 0x340
	FIntValueFromDataTable MaxTeamSize; // 0x348
};

struct UBTTask_FindAttackTarget_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	AAIController* OwnerController; // 0xb0
	APawn* ControlledPawn; // 0xb8
	FBlackboardKeySelector TargetActor; // 0xc0
	FBlackboardKeySelector TargetLocation; // 0xe8
	FBlackboardKeySelector IsBackStep; // 0x110
};

struct UForceFeedbackComponent : USceneComponent {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x1f8
	char bAutoDestroy : 1; // 0x200
	char bStopWhenOwnerDestroyed : 1; // 0x200
	char bLooping : 1; // 0x200
	char bIgnoreTimeDilation : 1; // 0x200
	char bOverrideAttenuation : 1; // 0x200
	float IntensityMultiplier; // 0x204
	UForceFeedbackAttenuation* AttenuationSettings; // 0x208
	FForceFeedbackAttenuationSettings AttenuationOverrides; // 0x210
	FMulticastInlineDelegate OnForceFeedbackFinished; // 0x2c0
};

struct UDrescher_SK_Skeleton_AnimBlueprint_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8
};

struct UMaterialExpressionStep : UMaterialExpression {
	FExpressionInput Y; // 0x40
	FExpressionInput X; // 0x54
	float ConstY; // 0x68
	float ConstX; // 0x6c
};

struct UShowLoginUICallbackProxy : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct ULightmassPrimitiveSettingsObject : UObject {
	FLightmassPrimitiveSettings LightmassSettings; // 0x28
};

struct UCommandlet : UObject {
	FString HelpDescription; // 0x28
	FString HelpUsage; // 0x38
	FString HelpWebLink; // 0x48
	TArray<FString> HelpParamNames; // 0x58
	TArray<FString> HelpParamDescriptions; // 0x68
	char IsServer : 1; // 0x78
	char IsClient : 1; // 0x78
	char IsEditor : 1; // 0x78
	char LogToConsole : 1; // 0x78
	char ShowErrorCount : 1; // 0x78
	char ShowProgress : 1; // 0x78
};

struct UWBP_radiogram_CustomBase_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	FText Text; // 0x268
	FText Decorated Text; // 0x280
};

struct UWBP_Functionality_TransferTerrasiteList_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* Button_112; // 0x268
	UImage* Image_31; // 0x270
	UImage* Image_266; // 0x278
	UImage* Image_Tier; // 0x280
	UInvalidationBox* InvalidationBox_114; // 0x288
	UBorder* Limit_Time; // 0x290
	UTextBlock* ShopItemAmount; // 0x298
	UTextBlock* ShopItemCost; // 0x2a0
	UTextBlock* ShopItemTime; // 0x2a8
	UImage* ShopListingIcon; // 0x2b0
	ETerraShopMerchandiseType MerchandiesType; // 0x2b8
	int32_t ItemId; // 0x2bc
	int32_t TerraPoint; // 0x2c0
	int32_t PurchasedItemAmount; // 0x2c4
	FTerraShopMerchandise TerraShopMerchandise; // 0x2c8
	int32_t TotalItemAmount; // 0x308
	int32_t MerchandieseIdx; // 0x30c
	UWBP_Functionality_TransferTerrasiteMenu_C* WBP_Functionality_TransferTerrasiteMenu; // 0x310
};

struct UPathFollowingComponent : UActorComponent {
	UNavMovementComponent* MovementComp; // 0xe8
	ANavigationData* MyNavData; // 0xf8
};

struct ABP_RampBuildPartBase_C : ABP_FoundationBuildPartBase_C {
	UBoxComponent* Checker_Tri_5; // 0x870
	UBoxComponent* Checker_Tri_2; // 0x878
	UBoxComponent* Checker_Tri_4; // 0x880
	UBoxComponent* Checker_Tri_3; // 0x888
	USceneComponent* LandscapeCheck; // 0x890
	UBP_BuildJointComponent_C* FoundationJoint4_2; // 0x898
	UBP_BuildJointComponent_C* FoundationJoint2_2; // 0x8a0
	UBP_BuildJointComponent_C* FoundationJoint1_2; // 0x8a8
	UBP_BuildJointComponent_C* FoundationJoint3_2; // 0x8b0
	USceneComponent* Socket_Foundation_Tri; // 0x8b8
	UBP_BuildJointComponent_C* FoundationJoint3_5; // 0x8c0
	UBoxComponent* PulseCheck5; // 0x8c8
	UBoxComponent* PulseCheck4; // 0x8d0
	UBoxComponent* PulseCheck3; // 0x8d8
	UBoxComponent* PulseCheck2; // 0x8e0
	UBoxComponent* PulseCheck; // 0x8e8
	USceneComponent* Pulse; // 0x8f0
	UBoxComponent* Checker3; // 0x8f8
	UBoxComponent* Checker2; // 0x900
	UBoxComponent* Checker1; // 0x908
	UBoxComponent* Checker4; // 0x910
	USceneComponent* LandscapeCheck1; // 0x918
	UBP_BuildJointComponent_C* WallSocket1_2; // 0x920
	USceneComponent* Socket_Wall; // 0x928
	UBP_BuildJointComponent_C* WallSocket4_1; // 0x930
	UBP_BuildJointComponent_C* WallSocket3_1; // 0x938
	UBP_BuildJointComponent_C* WallSocket2_1; // 0x940
	UBP_BuildJointComponent_C* WallSocket1_1; // 0x948
	UBP_BuildJointComponent_C* Bolt_Ramp; // 0x950
	UBP_BuildJointComponent_C* FoundationJoint3_3; // 0x958
	UBP_BuildJointComponent_C* RampJoint; // 0x960
	USceneComponent* LowerSocket; // 0x968
	UBP_BuildJointComponent_C* FoundationJoint3_4; // 0x970
	UBP_BuildJointComponent_C* RampJoint3; // 0x978
	USceneComponent* UpperSocket; // 0x980
	UBP_BuildJointComponent_C* Bolt_Foundation; // 0x988
};

struct UMagicLeapARPinComponent : USceneComponent {
	FString ObjectUID; // 0x1f8
	int32_t UserIndex; // 0x208
	EMagicLeapAutoPinType AutoPinType; // 0x20c
	bool bShouldPinActor; // 0x20d
	UMagicLeapARPinSaveGame* PinDataClass; // 0x210
	TSet<EMagicLeapARPinType> SearchPinTypes; // 0x218
	USphereComponent* SearchVolume; // 0x268
	FMulticastInlineDelegate OnPersistentEntityPinned; // 0x270
	FMulticastInlineDelegate OnPersistentEntityPinLost; // 0x280
	FMulticastInlineDelegate OnPinDataLoadAttemptCompleted; // 0x290
	FGuid PinnedCFUID; // 0x2a0
	USceneComponent* PinnedSceneComponent; // 0x2b0
	UMagicLeapARPinSaveGame* PinData; // 0x2b8
};

struct ABP_ThrownSmokeGrenade_C : ABP_ThrownGrenade_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3c8
	int32_t SoundLoopCount; // 0x3d0
};

struct UNiagaraDataInterfaceNeighborGrid3D : UNiagaraDataInterfaceGrid3D {
	uint32_t MaxNeighborsPerCell; // 0x100
};

struct UCommonAI_BTTask_ReportNoise_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	FName ReportTag; // 0xb0
	float Loudness; // 0xb8
	float MaxRange; // 0xbc
	int32_t CurrentStress; // 0xc0
	FBlackboardKeySelector KEYStress; // 0xc8
	bool ForceNoise; // 0xf0
};

struct UCloudWatchLogsPutResourcePolicy : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UDynamicEntryBox : UDynamicEntryBoxBase {
	UUserWidget* EntryWidgetClass; // 0x1d8
};

struct UWidgetComponentEx : UWidgetComponent {
	TextureFilter RenderTargetFilter; // 0x590
};

struct UAnimMontage : UAnimCompositeBase {
	FAlphaBlend BlendIn; // 0xa8
	float BlendInTime; // 0xd8
	FAlphaBlend BlendOut; // 0xe0
	float BlendOutTime; // 0x110
	float BlendOutTriggerTime; // 0x114
	FName SyncGroup; // 0x118
	int32_t SyncSlotIndex; // 0x120
	FMarkerSyncData MarkerData; // 0x128
	TArray<FCompositeSection> CompositeSections; // 0x148
	TArray<FSlotAnimationTrack> SlotAnimTracks; // 0x158
	TArray<FBranchingPoint> BranchingPoints; // 0x168
	bool bEnableRootMotionTranslation; // 0x178
	bool bEnableRootMotionRotation; // 0x179
	bool bEnableAutoBlendOut; // 0x17a
	ERootMotionRootLock RootMotionRootLock; // 0x17b
	TArray<FBranchingPointMarker> BranchingPointMarkers; // 0x180
	TArray<int32_t> BranchingPointStateNotifyIndices; // 0x190
	FTimeStretchCurve TimeStretchCurve; // 0x1a0
	FName TimeStretchCurveName; // 0x1c8
};

struct UCompositionGraphCaptureProtocol : UMovieSceneImageCaptureProtocolBase {
	FCompositionGraphCapturePasses IncludeRenderPasses; // 0x58
	bool bCaptureFramesInHDR; // 0x68
	int32_t HDRCompressionQuality; // 0x6c
	EHDRCaptureGamut CaptureGamut; // 0x70
	FSoftObjectPath PostProcessingMaterial; // 0x78
	bool bDisableScreenPercentage; // 0x90
	UMaterialInterface* PostProcessingMaterialPtr; // 0x98
};

struct UWBP_Radiogram_4020205_C : UUserWidget {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x260
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x268
	UWBP_RadiogramListing_C* WBP_RadiogramListing_2; // 0x270
	UWBP_RadiogramListing_C* WBP_RadiogramListing_3; // 0x278
};

struct UCameraModifier_CameraShake : UCameraModifier {
	TArray<FActiveCameraShakeInfo> ActiveShakes; // 0x48
	TMap<UCameraShakeBase*, FPooledCameraShakes> ExpiredPooledShakesMap; // 0x58
	float SplitScreenShakeScale; // 0xa8
};

struct UBTTask_RunBehavior : UBTTaskNode {
	UBehaviorTree* BehaviorAsset; // 0x70
};

struct UBTTask_PlayAnimation : UBTTaskNode {
	UAnimationAsset* AnimationToPlay; // 0x70
	char bLooping : 1; // 0x78
	char bNonBlocking : 1; // 0x78
	UBehaviorTreeComponent* MyOwnerComp; // 0x80
	USkeletalMeshComponent* CachedSkelMesh; // 0x88
};

struct ALandscapeMeshProxyActor : AActor {
	ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x220
};

struct UCloudWatchLogsDisassociateKmsKey : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UMaterialExpressionFmod : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct ABP_EnergyCoreBuildPart_C : ABP_FunctionalityBuildPartBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x890
	UParticleSystemComponent* P_Facility_TerraCore; // 0x898
	UStaticMeshComponent* effect; // 0x8a0
	UCapsuleComponent* BuildPermission; // 0x8a8
	UBP_StorageInventoryComponent_C* EnergyTrans; // 0x8b0
	UBP_StorageInventoryComponent_C* Output; // 0x8b8
	BP_ConvertInventoryComponent_C* Convert; // 0x8c0
	bool bEnable; // 0x8c8
	TArray<ABP_BuildPartBase_C*> ManagementBuildPartsList; // 0x8d0
	float ChargedMaxShield; // 0x8e0
	float EnergyShieldTransferInterval; // 0x8e4
	float ChargedEnergy; // 0x8e8
	FTimerHandle EnergyShieldTimer; // 0x8f0
	float MaxEnergy; // 0x8f8
	FMulticastInlineDelegate OnChargedEnergyChanged; // 0x900
	FMulticastInlineDelegate OnSwitchStateChanged; // 0x910
	float TotalDecayPreventEnergyPerMin; // 0x920
	int32_t TotalUnits; // 0x924
	TArray<ABP_BuildPartBase_C*> ReserveDeleteArray; // 0x928
	float BuildPermissionRadius; // 0x938
	bool IsShowPermissionArea; // 0x93c
	UMaterialInstanceDynamic* MI_Area; // 0x940
	TArray<FString> RequestShareAuthList; // 0x948
	FMulticastInlineDelegate OnShareCoreRequestChanged; // 0x958
	int32_t MaxAuthSharePlayerCount; // 0x968
	float LastTakeDamageNotificationTime; // 0x96c
	float TransformMultiplier; // 0x970
	float EMPShockReleaseTime; // 0x974
	float MaintainTimeByEMPAmount; // 0x978
	FTimerHandle EMPEndTimer; // 0x980
	bool bEnableAutoTransform; // 0x988
	float AutoTransformMaintainEnergyCostPerMin; // 0x98c
	bool bCanAutoTransform; // 0x990
	FMulticastInlineDelegate OnAutoTransformStateChanged; // 0x998
	TArray<ABP_FunctionalityBuildPartBase_C*> FunctionalityList; // 0x9a8
	int32_t FunctionalityCount; // 0x9b8
	FMulticastInlineDelegate OnFunctionalityCountChanged; // 0x9c0
	float AutoTransformMultiplier; // 0x9d0
};

struct UMyPluginObject : UObject {
	FMyPluginStruct MyStruct; // 0x28
};

struct ANavigationData : AActor {
	UPrimitiveComponent* RenderingComp; // 0x228
	FNavDataConfig NavDataConfig; // 0x230
	char bEnableDrawing : 1; // 0x2a8
	char bForceRebuildOnLoad : 1; // 0x2a8
	char bAutoDestroyWhenNoNavigation : 1; // 0x2a8
	char bCanBeMainNavData : 1; // 0x2a8
	char bCanSpawnOnRebuild : 1; // 0x2a8
	char bRebuildAtRuntime : 1; // 0x2a8
	ERuntimeGenerationType RuntimeGeneration; // 0x2ac
	float ObservedPathsTickInterval; // 0x2b0
	uint32_t DataVersion; // 0x2b4
	TArray<FSupportedAreaData> SupportedAreas; // 0x3c0
};

struct UAnimCompress_PerTrackCompression : UAnimCompress_RemoveLinearKeys {
	float MaxZeroingThreshold; // 0x60
	float MaxPosDiffBitwise; // 0x64
	float MaxAngleDiffBitwise; // 0x68
	float MaxScaleDiffBitwise; // 0x6c
	TArray<AnimationCompressionFormat> AllowedRotationFormats; // 0x70
	TArray<AnimationCompressionFormat> AllowedTranslationFormats; // 0x80
	TArray<AnimationCompressionFormat> AllowedScaleFormats; // 0x90
	char bResampleAnimation : 1; // 0xa0
	float ResampledFramerate; // 0xa4
	int32_t MinKeysForResampling; // 0xa8
	char bUseAdaptiveError : 1; // 0xac
	char bUseOverrideForEndEffectors : 1; // 0xac
	int32_t TrackHeightBias; // 0xb0
	float ParentingDivisor; // 0xb4
	float ParentingDivisorExponent; // 0xb8
	char bUseAdaptiveError2 : 1; // 0xbc
	float RotationErrorSourceRatio; // 0xc0
	float TranslationErrorSourceRatio; // 0xc4
	float ScaleErrorSourceRatio; // 0xc8
	float MaxErrorPerTrackRatio; // 0xcc
	float PerturbationProbeSize; // 0xd0
};

struct UEdGraphNode : UObject {
	TArray<UEdGraphPin_Deprecated*> DeprecatedPins; // 0x38
	int32_t NodePosX; // 0x48
	int32_t NodePosY; // 0x4c
	int32_t NodeWidth; // 0x50
	int32_t NodeHeight; // 0x54
	ENodeAdvancedPins AdvancedPinDisplay; // 0x58
	ENodeEnabledState EnabledState; // 0x59
	char bDisplayAsDisabled : 1; // 0x5b
	char bUserSetEnabledState : 1; // 0x5b
	char bIsNodeEnabled : 1; // 0x5b
	char bHasCompilerMessage : 1; // 0x5b
	FString NodeComment; // 0x60
	int32_t errorType; // 0x70
	FString ErrorMsg; // 0x78
	FGuid NodeGuid; // 0x88
};

struct UARFaceGeometry : UARTrackedGeometry {
	FVector LookAtTarget; // 0xf8
	bool bIsTracked; // 0x104
	TMap<EARFaceBlendShape, float> BlendShapes; // 0x108
	FTransform LeftEyeTransform; // 0x190
	FTransform RightEyeTransform; // 0x1c0
};

struct UWBP_Functionality_WaterGenerator_C : UWBP_FunctionalityBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	UTextBlock* AtmosphereState; // 0x278
	UTextBlock* AtmosphereState_4; // 0x280
	UTextBlock* AtmosphereState_5; // 0x288
	UWBP_Slot_Inventory_C* BP_InventorySlot; // 0x290
	UButton* Button_Conversion; // 0x298
	UUniformGridPanel* ContentsGrid_In; // 0x2a0
	UUniformGridPanel* ContentsGrid_Out; // 0x2a8
	UTextBlock* GeneratePerSec; // 0x2b0
	UImage* Image_2; // 0x2b8
	UImage* Image_3; // 0x2c0
	UImage* Image_4; // 0x2c8
	UImage* Image_5; // 0x2d0
	UImage* Image_6; // 0x2d8
	UImage* Image_7; // 0x2e0
	UImage* Image_148; // 0x2e8
	UImage* Image_255; // 0x2f0
	UImage* Image_315; // 0x2f8
	UImage* Image_385; // 0x300
	UImage* Image_UX_Fuel; // 0x308
	UTextBlock* Text_Input; // 0x310
	UImage* WaterAmount; // 0x318
	UTextBlock* WaterStorageAmount; // 0x320
	UWBP_FunctionalityInfo_C* WBP_FunctionalityInfo; // 0x328
	UWBP_FunctionalityMainButton_C* WBP_FunctionalityMainButton; // 0x330
	UWBP_MainFrame_Header_C* WBP_MainFrame_Header; // 0x338
	UWBP_Slot_Functionality_C* WBP_Slot_Functionality; // 0x340
	UWBP_Slot_Functionality_C* WBP_Slot_Functionality_2; // 0x348
	UWBP_Slot_Functionality_C* WBP_Slot_Functionality_3; // 0x350
	UWBP_Slot_Functionality_C* WBP_Slot_Functionality_4; // 0x358
	UWBP_Slot_Functionality_C* WBP_Slot_Functionality_5; // 0x360
	UWBP_Slot_Functionality_C* WBP_Slot_Functionality_6; // 0x368
	UWrapBox* WrapBox_Slot; // 0x370
	ABP_WaterGenerator_C* TargetWaterGenerator; // 0x378
	TArray<UWBP_Slot_Inventory_C*> Trans Inventory Slots; // 0x380
	TArray<UWBP_Slot_Inventory_C*> Contents Inventory Slots; // 0x390
	TArray<UWBP_Functionality_ConversionSlot_C*> Convert Slots; // 0x3a0
	bool Requestable; // 0x3b0
	float CurrentQuantity; // 0x3b4
	UMaterialInstanceDynamic* MI; // 0x3b8
};

struct UInterpTrackEvent : UInterpTrack {
	TArray<FEventTrackKey> EventTrack; // 0x70
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	char bFireEventsWhenJumpingForwards : 1; // 0x80
	char bUseCustomEventName : 1; // 0x80
};

struct UAnimBP_Juggernaut_Ridable_C : UNPCAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x310
	FAnimNode_Root AnimGraphNode_Root; // 0x318
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x348
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x430
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x460
	FAnimNode_Slot AnimGraphNode_Slot; // 0x510
};

struct ASkyLight : AInfo {
	USkyLightComponent* LightComponent; // 0x220
	char bEnabled : 1; // 0x228
};

struct UParticleModuleVectorFieldScaleOverLife : UParticleModuleVectorFieldBase {
	UDistributionFloat* VectorFieldScaleOverLife; // 0x30
	FRawDistributionFloat VectorFieldScaleOverLifeRaw; // 0x38
};

struct UParticleModuleSize : UParticleModuleSizeBase {
	FRawDistributionVector StartSize; // 0x30
};

struct UProceduralMeshComponent : UMeshComponent {
	bool bUseComplexAsSimpleCollision; // 0x470
	bool bUseAsyncCooking; // 0x471
	UBodySetup* ProcMeshBodySetup; // 0x478
	TArray<FProcMeshSection> ProcMeshSections; // 0x480
	TArray<FKConvexElem> CollisionConvexElems; // 0x490
	FBoxSphereBounds LocalBounds; // 0x4a0
	TArray<UBodySetup*> AsyncBodySetupQueue; // 0x4c0
};

struct APhysicsVolume : AVolume {
	float TerminalVelocity; // 0x258
	int32_t Priority; // 0x25c
	float FluidFriction; // 0x260
	char bWaterVolume : 1; // 0x264
	char bPhysicsOnContact : 1; // 0x264
};

struct UMicroTransactionBase : UPlatformInterfaceBase {
	TArray<FPurchaseInfo> AvailableProducts; // 0x38
	FString LastError; // 0x48
	FString LastErrorSolution; // 0x58
};

struct UWBP_HUD_Notification_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UVerticalBox* NotificationVerticalBox; // 0x268
};

struct UInputKeySelector : UWidget {
	FButtonStyle WidgetStyle; // 0x108
	FTextBlockStyle TextStyle; // 0x380
	FInputChord SelectedKey; // 0x5f0
	FSlateFontInfo Font; // 0x610
	FMargin Margin; // 0x668
	FLinearColor ColorAndOpacity; // 0x678
	FText KeySelectionText; // 0x688
	FText NoKeySpecifiedText; // 0x6a0
	bool bAllowModifierKeys; // 0x6b8
	bool bAllowGamepadKeys; // 0x6b9
	TArray<FKey> EscapeKeys; // 0x6c0
	FMulticastInlineDelegate OnKeySelected; // 0x6d0
	FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x6e0
};

struct UArchVisCharMovementComponent : UCharacterMovementComponent {
	FRotator RotationalAcceleration; // 0xb00
	FRotator RotationalDeceleration; // 0xb0c
	FRotator MaxRotationalVelocity; // 0xb18
	float MinPitch; // 0xb24
	float MaxPitch; // 0xb28
	float WalkingFriction; // 0xb2c
	float WalkingSpeed; // 0xb30
	float WalkingAcceleration; // 0xb34
};

struct UWBP_Button_UI_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* Button; // 0x268
	UImage* Image_Icon; // 0x270
	UTextBlock* Text_InButton; // 0x278
	UWBP_Tooltip_UI_C* WBP_Tooltip_UI; // 0x280
	UObject* Icon; // 0x288
	FMulticastInlineDelegate OnButtonClicked; // 0x290
	FText InButton; // 0x2a0
	bool Tooltip; // 0x2b8
	FText Name; // 0x2c0
	FText Desc; // 0x2d8
};

struct ABP_FoldingDoorBuildPartBase_C : ABP_SkeletalMeshBuildPartBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x860
	UBoxComponent* VehicleOverlapVolume; // 0x868
	UBP_BuildJointComponent_C* BP_BuildJointComponent; // 0x870
	bool Is Open; // 0x878
	float OpenDuration; // 0x87c
	UBP_PlayerInventoryComponent_C* Interacted Player Inventory; // 0x880
};

struct ULuminARSessionConfig : UARSessionConfig {
	FMagicLeapPlanesQuery PlanesQuery; // 0x110
	int32_t MaxPlaneQueryResults; // 0x170
	int32_t MinPlaneArea; // 0x174
	bool bArbitraryOrientationPlaneDetection; // 0x178
	FVector PlaneSearchExtents; // 0x17c
	TArray<EMagicLeapPlaneQueryFlags> PlaneQueryFlags; // 0x188
	bool bDiscardZeroExtentPlanes; // 0x198
	bool bDefaultUseUnreliablePose; // 0x199
};

struct UExporter : UObject {
	UObject* SupportedClass; // 0x28
	UObject* ExportRootScope; // 0x30
	TArray<FString> FormatExtension; // 0x38
	TArray<FString> FormatDescription; // 0x48
	int32_t PreferredFormatIndex; // 0x58
	int32_t TextIndent; // 0x5c
	char bText : 1; // 0x60
	char bSelectedOnly : 1; // 0x60
	char bForceFileOperations : 1; // 0x60
	UAssetExportTask* ExportTask; // 0x68
};

struct ABP_MasterProjectile_C : ASurvivalProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338
	UParticleSystemComponent* Bullet; // 0x340
	UParticleSystemComponent* Trail; // 0x348
	UArrowComponent* Arrow; // 0x350
	bool DoesBleedDamage; // 0x358
	float BleedRepeatTime; // 0x35c
	float BleedLength; // 0x360
	int32_t BleedDamage; // 0x364
	float FiredTime; // 0x368
	TArray<BP_SurvivalCharacter_C*> PassCharacters; // 0x370
	AHoldableBase* WeaponClass; // 0x380
	TArray<BP_SurvivalCharacter_C*> WhippingListener; // 0x388
	bool CanDestroyByProjectile; // 0x398
	float TrailAppearChance; // 0x39c
	bool DoGoZero; // 0x3a0
	UCurveFloat* ProjectileScaleCurve; // 0x3a8
	bool ChangeableBullet; // 0x3b0
};

struct UMaterialExpressionPreviousFrameSwitch : UMaterialExpression {
	FExpressionInput CurrentFrame; // 0x40
	FExpressionInput PreviousFrame; // 0x54
};

struct ARadialForceActor : ARigidBodyBase {
	URadialForceComponent* ForceComponent; // 0x220
};

struct AGameStateBase : AInfo {
	AGameModeBase* GameModeClass; // 0x220
	AGameModeBase* AuthorityGameMode; // 0x228
	ASpectatorPawn* SpectatorClass; // 0x230
	TArray<APlayerState*> PlayerArray; // 0x238
	bool bReplicatedHasBegunPlay; // 0x248
	float ReplicatedWorldTimeSeconds; // 0x24c
	float ServerWorldTimeSecondsDelta; // 0x250
	float ServerWorldTimeSecondsUpdateFrequency; // 0x254
};

struct USteamWSRequestUGCDetailsCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UWBP_Tag_C : UUserWidget {
	UImage* Image_86; // 0x260
	UTextBlock* Text; // 0x268
};

struct UWBP_Radiogram_3020313_C : UUserWidget {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x260
	UWBP_RadiogramImage_C* Radiogram_Image; // 0x268
	UWBP_RadiogramImage_C* Radiogram_Image_2; // 0x270
	UWBP_RadiogramImage_C* Radiogram_Image_7; // 0x278
};

struct UBottle_SK_Skeleton_AnimBlueprint_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8
};

struct UNiagaraEventReceiverEmitterAction_SpawnParticles : UNiagaraEventReceiverEmitterAction {
	uint32_t NumParticles; // 0x28
};

struct UMaterialExpressionSceneDepth : UMaterialExpression {
	EMaterialSceneAttributeInputMode InputMode; // 0x40
	FExpressionInput Input; // 0x44
	FExpressionInput Coordinates; // 0x58
	FVector2D ConstInput; // 0x6c
};

struct UAkDurationCallbackInfo : UAkEventCallbackInfo {
	float Duration; // 0x38
	float EstimatedDuration; // 0x3c
	int32_t AudioNodeID; // 0x40
	int32_t MediaID; // 0x44
	bool bStreaming; // 0x48
};

struct UBP_SurvivalSteamConnectorDediServer_C : USurvivalWebsocketConnectorBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x90
	FString OwningId; // 0x98
	FWebsocketDedicatedServerConnectionInfo ConnectionInfo; // 0xa8
};

struct UWBP_MainFrame_Toolbar_C : UUserWidget {
	UNamedSlot* NamedSlot_Toolbar; // 0x260
};

struct UCloudWatchLogsPutMetricFilter : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UParticleModuleLocationPrimitiveSphere_Seeded : UParticleModuleLocationPrimitiveSphere {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xe0
};

struct UAkMusicSyncCallbackInfo : UAkCallbackInfo {
	int32_t PlayingID; // 0x30
	FAkSegmentInfo SegmentInfo; // 0x34
	EAkCallbackType MusicSyncType; // 0x58
	FString UserCueName; // 0x60
};

struct UBP_LearnGliding_C : UBP_MachineArmAbilityObjectBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x40
};

struct UInAppPurchaseQueryCallbackProxy2 : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct ALandmarkManager : AActor {
	TArray<FLMInfo> LandmarkInfos; // 0x220
	TSet<ALandmarkBase*> Landmarks; // 0x230
	FMulticastInlineDelegate OnLandmarkInfosUpdated; // 0x280
};

struct UWBP_Radiogram_1010101_C : UUserWidget {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x260
	UWBP_RadiogramImage_C* Radiogram_Image; // 0x268
	UWBP_RadiogramImage_C* Radiogram_Image_2; // 0x270
	UWBP_RadiogramImage_C* Radiogram_Image_3; // 0x278
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x280
	UWBP_RadiogramListing_C* WBP_RadiogramListing_2; // 0x288
	UWBP_RadiogramListing_C* WBP_RadiogramListing_3; // 0x290
};

struct UInterpTrackInstFloatMaterialParam : UInterpTrackInst {
	TArray<UMaterialInstanceDynamic*> MaterialInstances; // 0x28
	TArray<float> ResetFloats; // 0x38
	TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x48
	UInterpTrackFloatMaterialParam* InstancedTrack; // 0x58
};

struct UMasterAudioSubmixCaptureProtocol : UMovieSceneAudioCaptureProtocolBase {
	FString Filename; // 0x58
};

struct USpotEventTypeData_SpawnFieldNPC_C : USpotEventTypeData_Base_C {
	FS_FieldNPCInfo DetailInfo; // 0xc8
};

struct ULocationMarker_C : UUserWidget {
	UImage* Marker; // 0x260
	AWorldLocation_C* LocationActor; // 0x268
	UC_Manager-WorldMap_C* WorldMapManager; // 0x270
};

struct UAnimNotify_PlayMontageNotifyWindow : UAnimNotifyState {
	FName NotifyName; // 0x30
};

struct AMeleeWeaponBase : ASVWeaponBase {
	float Range; // 0x5b8
	float Distance; // 0x5bc
};

struct UDistributionVectorConstantCurve : UDistributionVector {
	FInterpCurveVector ConstantCurve; // 0x38
	char bLockAxes : 1; // 0x50
	EDistributionVectorLockFlags LockedAxes; // 0x54
};

struct ABP_TriangleCeilingBuildPartBase_C : ABP_CeilingBuildPartBase1_C {
	UBP_BuildJointComponent_C* ElectricFloor; // 0x888
	USceneComponent* Socket_ElectricFloor; // 0x890
	UBP_BuildJointComponent_C* UnderWallJoint3; // 0x898
	UBP_BuildJointComponent_C* UnderWallJoint2; // 0x8a0
	UBP_BuildJointComponent_C* UnderWallJoint; // 0x8a8
	USceneComponent* Socket_UnderWall; // 0x8b0
	UBP_BuildJointComponent_C* PillarSocket1; // 0x8b8
	UBP_BuildJointComponent_C* PillarSocket2; // 0x8c0
	UBP_BuildJointComponent_C* PillarSocket; // 0x8c8
	UBP_BuildJointComponent_C* PillarSocket4; // 0x8d0
	USceneComponent* Socket_Pillar; // 0x8d8
	UBoxComponent* CenterPulse; // 0x8e0
	UBoxComponent* PulseCheck8; // 0x8e8
	UBoxComponent* PulseCheck1; // 0x8f0
	UBoxComponent* PulseCheck7; // 0x8f8
	USceneComponent* Pillar; // 0x900
	UBoxComponent* PulseCheck3; // 0x908
	UBoxComponent* PulseCheck2; // 0x910
	UBP_BuildJointComponent_C* CeilingJoint3; // 0x918
	UBP_BuildJointComponent_C* CeilingJoint2; // 0x920
	UBP_BuildJointComponent_C* WallJoint1; // 0x928
	UBP_BuildJointComponent_C* WallJoint3; // 0x930
	UBP_BuildJointComponent_C* WallJoint2; // 0x938
	USceneComponent* Socket_Wall1; // 0x940
	UBoxComponent* PulseCheck; // 0x948
	USceneComponent* Pulse; // 0x950
	UBP_BuildJointComponent_C* CeilingJoint1; // 0x958
	USceneComponent* Socket_Ceiling; // 0x960
	UBP_BuildJointComponent_C* Bolt; // 0x968
};

struct UMovieSceneTrack : UMovieSceneSignedObject {
	FMovieSceneTrackEvalOptions EvalOptions; // 0x50
	bool bIsEvalDisabled; // 0x55
	FGuid EvaluationFieldGuid; // 0x58
	FMovieSceneTrackEvaluationField EvaluationField; // 0x68
};

struct UParticleModuleSourceMovement : UParticleModuleLocationBase {
	FRawDistributionVector SourceMovementScale; // 0x30
};

struct UWBP_Popup_UserSearch_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* Button_ClearText; // 0x268
	UEditableTextBox* EditableTextBox_Search; // 0x270
	UImage* Image_158; // 0x278
	UScrollBox* ScrollBox_UserList; // 0x280
	UTextBlock* Text_Players; // 0x288
	UWBP_Button_UI_C* WBP_Button_Refresh; // 0x290
	UWBP_MainFrame_C* WBP_MainFrame; // 0x298
	UWBP_PopUp_Button_C* WBP_PopUp_Button; // 0x2a0
	UWBP_Popup_UserSearchListing_C* WBP_Popup_UserserchList_2; // 0x2a8
	UWBP_Toolbar_Close_C* WBP_Toolbar_Close; // 0x2b0
	UUserWidget* TargetWidget; // 0x2b8
	TArray<FS_UserUIDWithNick> User Array; // 0x2c0
	FString Searching; // 0x2d0
	APlayerState* Target Player State; // 0x2e0
	FString Target UID; // 0x2e8
	FMulticastInlineDelegate OnNotifySelectUser; // 0x2f8
	bool bJoinCharacterOnly; // 0x308
	int32_t UserCount; // 0x30c
};

struct ABP_ScreenIndicatorActor_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UBP_ScreenIndicator_C* ScreenIndicator; // 0x228
	USceneComponent* DefaultSceneRoot; // 0x230
	float Limit; // 0x238
	UBP_WidgetIndicatorComponent_C* SourceIndicator; // 0x240
	UCurveFloat* ScreenCurve; // 0x248
	bool bInScreen; // 0x250
};

struct UGizmoPlaneTranslationParameterSource : UGizmoBaseVec2ParameterSource {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90
	TScriptInterface<IGizmoTransformSource> TransformSource; // 0xa0
	FVector2D Parameter; // 0xb0
	FGizmoVec2ParameterChange LastChange; // 0xb8
	FVector CurTranslationOrigin; // 0xc8
	FVector CurTranslationNormal; // 0xd4
	FVector CurTranslationAxisX; // 0xe0
	FVector CurTranslationAxisY; // 0xec
	FTransform InitialTransform; // 0x100
};

struct UWBP_DescRadiogramGroup_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_Group; // 0x268
	UVerticalBox* Contents; // 0x270
	UTextBlock* TextBlock_96; // 0x278
};

struct UFileMediaSource : UBaseMediaSource {
	FString FilePath; // 0x88
	bool PrecacheFile; // 0x98
};

struct UWBP_Radiogram_MachineArmAbility_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image_46; // 0x268
	FText HoverText; // 0x270
	int32_t MainIdx; // 0x288
	int32_t SubIdx; // 0x28c
};

struct ABP_LM2_C : ABP_LandmarkZone_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x490
	float OccupyTime; // 0x498
	TArray<UBP_ObjectiveSupporter_C*> ConnectedPlayers; // 0x4a0
	TMap<ABP_LM2Valve_C*, bool> Valves; // 0x4b0
	FMulticastInlineDelegate OnCheckValves; // 0x500
	TArray<FVector> ValveLocations; // 0x510
	TArray<FVector> PipeLocations; // 0x520
	TArray<UBP_WidgetIndicatorComponent_C*> ValveIndicators; // 0x530
	TArray<UBP_WidgetIndicatorComponent_C*> PipeIndicators; // 0x540
	TArray<bool> ValveActivated; // 0x550
	TArray<UTexture2D*> ValveIcons; // 0x560
	TArray<UTexture2D*> PipeIcons; // 0x570
	bool LocalIn; // 0x580
	TArray<float> ValveTimes; // 0x588
};

struct UWBP_ChatMessage_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Disappear; // 0x268
	UButton* Button_Username; // 0x270
	UImage* Image_34; // 0x278
	UImage* Image_48; // 0x280
	UOverlay* Overlay_Chat; // 0x288
	UTextBlock* TextBlock_Heure; // 0x290
	UTextBlock* TextBlock_Message; // 0x298
	UTextBlock* TextBlock_Prefix; // 0x2a0
	UTextBlock* TextBlock_Username; // 0x2a8
	bool ShowTime?; // 0x2b0
	UWBP_MainChatWindow_C* MainChatRef; // 0x2b8
	E_ChatCategory MessageCategory; // 0x2c0
	int32_t PlayerId; // 0x2c4
	FText Prefix; // 0x2c8
	FText Username; // 0x2e0
	FText Message; // 0x2f8
	FSlateColor PrefixColor; // 0x310
	FSlateColor UsernameColor; // 0x338
	FSlateColor MessageColor; // 0x360
	bool AlreadySpawn?; // 0x388
	bool DisappearEnabled; // 0x389
};

struct UCameraShakeBase : UObject {
	bool bSingleInstance; // 0x28
	float ShakeScale; // 0x2c
	APlayerCameraManager* CameraManager; // 0x30
};

struct AAdvancedGameSession : AGameSession {
	TMap<FUniqueNetIdRepl, FText> BanList; // 0x238
};

struct UVariant : UObject {
	TArray<FVariantDependency> Dependencies; // 0x28
	FText DisplayText; // 0x38
	TArray<UVariantObjectBinding*> ObjectBindings; // 0x68
	UTexture2D* Thumbnail; // 0x78
};

struct UAdvancedFriendsGameInstance : UGameInstance {
	bool bCallFriendInterfaceEventsOnPlayerControllers; // 0x1a8
	bool bCallIdentityInterfaceEventsOnPlayerControllers; // 0x1a9
	bool bCallVoiceInterfaceEventsOnPlayerControllers; // 0x1aa
	bool bEnableTalkingStatusDelegate; // 0x1ab
};

struct USoundNodeModulatorContinuous : USoundNode {
	FModulatorContinuousParams PitchModulationParams; // 0x48
	FModulatorContinuousParams VolumeModulationParams; // 0x68
};

struct UAISenseEvent_Damage : UAISenseEvent {
	FAIDamageEvent Event; // 0x28
};

struct UCallbackProxyUpdateWorkshopItem : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnUpdateComplete; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
	FMulticastInlineDelegate OnSteamInitFailure; // 0x50
};

struct UMaterialExpressionArcsine : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UEnvQueryOption : UObject {
	UEnvQueryGenerator* Generator; // 0x28
	TArray<UEnvQueryTest*> Tests; // 0x30
};

struct ANavModifierVolume : AVolume {
	UNavArea* AreaClass; // 0x260
	bool bMaskFillCollisionUnderneathForNavmesh; // 0x268
};

struct UBTTask_ChooseAttackTypeByDistance_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	FBlackboardKeySelector KEYTargetActor; // 0xb0
	FBlackboardKeySelector KEYTargetLocation; // 0xd8
	float Distance; // 0x100
};

struct UMaterialExpressionMapARPassthroughCameraUV : UMaterialExpression {
	FExpressionInput Coordinates; // 0x40
};

struct USynthSound : USoundWaveProcedural {
	USynthComponent* OwningSynthComponent; // 0x3c0
};

struct UMaterialExpressionSpeedTree : UMaterialExpression {
	FExpressionInput GeometryInput; // 0x40
	FExpressionInput WindInput; // 0x54
	FExpressionInput LODInput; // 0x68
	FExpressionInput ExtraBendWS; // 0x7c
	ESpeedTreeGeometryType GeometryType; // 0x90
	ESpeedTreeWindType WindType; // 0x91
	ESpeedTreeLODType LODType; // 0x92
	float BillboardThreshold; // 0x94
	bool bAccurateWindVelocities; // 0x98
};

struct USurvivalWebsocketConnectionDedicatedServer : USurvivalWebsocketConnectionBase {
	FWebsocketDedicatedServerConnectionInfo ConnectionInfo; // 0x98
	USQSClientObject* SQSClientObj; // 0xe8
};

struct UEditableTextWidgetStyle : USlateWidgetStyleContainerBase {
	FEditableTextStyle EditableTextStyle; // 0x30
};

struct UMaterialExpressionSubtract : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UCloudWatchLogsStartQuery : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct USkeletalMeshSimulationComponent : UActorComponent {
	UChaosPhysicalMaterial* PhysicalMaterial; // 0xb8
	AChaosSolverActor* ChaosSolverActor; // 0xc0
	UPhysicsAsset* OverridePhysicsAsset; // 0xc8
	bool bSimulating; // 0xd0
	bool bNotifyCollisions; // 0xd1
	EObjectStateTypeEnum ObjectType; // 0xd2
	float Density; // 0xd4
	float MinMass; // 0xd8
	float MaxMass; // 0xdc
	ECollisionTypeEnum CollisionType; // 0xe0
	float ImplicitShapeParticlesPerUnitArea; // 0xe4
	int32_t ImplicitShapeMinNumParticles; // 0xe8
	int32_t ImplicitShapeMaxNumParticles; // 0xec
	int32_t MinLevelSetResolution; // 0xf0
	int32_t MaxLevelSetResolution; // 0xf4
	int32_t CollisionGroup; // 0xf8
	EInitialVelocityTypeEnum InitialVelocityType; // 0xfc
	FVector InitialLinearVelocity; // 0x100
	FVector InitialAngularVelocity; // 0x10c
	FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x118
};

struct UBTDecorator : UBTAuxiliaryNode {
	char bInverseCondition : 1; // 0x60
	EBTFlowAbortMode FlowAbortMode; // 0x64
};

struct UPanelWidget : UWidget {
	TArray<UPanelSlot*> Slots; // 0x108
};

struct UInterpTrackDirector : UInterpTrack {
	TArray<FDirectorTrackCut> CutTrack; // 0x70
	char bSimulateCameraCutsOnClients : 1; // 0x80
};

struct UDatasmithPostProcessVolumeTemplate : UDatasmithObjectTemplate {
	FDatasmithPostProcessSettingsTemplate Settings; // 0x30
	char bEnabled : 1; // 0x70
	char bUnbound : 1; // 0x70
};

struct UWBP_Radiogram_1010102_C : UUserWidget {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x260
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x268
	UWBP_RadiogramListing_C* WBP_RadiogramListing_58; // 0x270
};

struct UCurveVector : UCurveBase {
	FRichCurve FloatCurves[0x3]; // 0x30
};

struct ABP_MineBase_C : ABP_StaticMeshBuildPartBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x860
	UBoxComponent* DecalTransform; // 0x868
	UAkComponent* Ak; // 0x870
	USkeletalMeshComponent* SK_MouseOfSpace; // 0x878
	UCapsuleComponent* CheckRange; // 0x880
	USphereComponent* ExplodeDamageRange; // 0x888
	bool ReadToExplode; // 0x890
	float ExplodeDamage; // 0x894
	bool bReadyToOverlapExplode; // 0x898
	UMaterialInterface* Decal Material; // 0x8a0
	float Life Span; // 0x8a8
	UDamageType* Damage Type Class; // 0x8b0
	UParticleSystem* ExplodeParticle; // 0x8b8
};

struct ABlinkStick : ADisplayDeviceInterface {
	int32_t LedCount; // 0x240
};

struct ABP_InteractionGauge_C : ABP_InteractionableActor_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UBP_OccupyFunctionComponent_C* BP_OccupyFunctionComponent; // 0x270
	float MaxGauge; // 0x278
	float CurrentGauge; // 0x27c
	bool IsGaugeFull; // 0x280
	bool IsActivateGauge; // 0x281
};

struct UGameplayTagsDeveloperSettings : UDeveloperSettings {
	FString DeveloperConfigName; // 0x38
	FName FavoriteTagSource; // 0x48
};

struct UPlayMontageCallbackProxy : UObject {
	FMulticastInlineDelegate OnCompleted; // 0x28
	FMulticastInlineDelegate OnBlendOut; // 0x38
	FMulticastInlineDelegate OnInterrupted; // 0x48
	FMulticastInlineDelegate OnNotifyBegin; // 0x58
	FMulticastInlineDelegate OnNotifyEnd; // 0x68
};

struct UParticleModuleEventReceiverBase : UParticleModuleEventBase {
	EParticleEventType EventGeneratorType; // 0x30
	FName EventName; // 0x34
};

struct UParticleModuleLocationDirect : UParticleModuleLocationBase {
	FRawDistributionVector Location; // 0x30
	FRawDistributionVector LocationOffset; // 0x78
	FRawDistributionVector ScaleFactor; // 0xc0
	FRawDistributionVector Direction; // 0x108
};

struct UMovieSceneSection : UMovieSceneSignedObject {
	FMovieSceneSectionEvalOptions EvalOptions; // 0x50
	FMovieSceneEasingSettings Easing; // 0x58
	FMovieSceneFrameRange SectionRange; // 0x90
	FFrameNumber PreRollFrames; // 0xa0
	FFrameNumber PostRollFrames; // 0xa4
	int32_t RowIndex; // 0xa8
	int32_t OverlapPriority; // 0xac
	char bIsActive : 1; // 0xb0
	char bIsLocked : 1; // 0xb0
	float StartTime; // 0xb4
	float EndTime; // 0xb8
	float PrerollTime; // 0xbc
	float PostrollTime; // 0xc0
	char bIsInfinite : 1; // 0xc4
	bool bSupportsInfiniteRange; // 0xc8
	FOptionalMovieSceneBlendType BlendType; // 0xc9
};

struct UBTTask_HitAndRun_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	AAIController* OwnerController; // 0xb0
	APawn* ControlledPawn; // 0xb8
	FBlackboardKeySelector TargetActor; // 0xc0
	FBlackboardKeySelector TargetLocation; // 0xe8
	FBlackboardKeySelector IsSideStep; // 0x110
};

struct UMaterialExpressionMax : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct ABP_DialogueSphere_C : ABP_DialogueActor_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250
	USphereComponent* Sphere; // 0x258
	float Radius; // 0x260
};

struct UGameUserSettings : UObject {
	bool bUseVSync; // 0x28
	bool bUseDynamicResolution; // 0x29
	uint32_t ResolutionSizeX; // 0x80
	uint32_t ResolutionSizeY; // 0x84
	uint32_t LastUserConfirmedResolutionSizeX; // 0x88
	uint32_t LastUserConfirmedResolutionSizeY; // 0x8c
	int32_t WindowPosX; // 0x90
	int32_t WindowPosY; // 0x94
	int32_t FullscreenMode; // 0x98
	int32_t LastConfirmedFullscreenMode; // 0x9c
	int32_t PreferredFullscreenMode; // 0xa0
	uint32_t Version; // 0xa4
	int32_t AudioQualityLevel; // 0xa8
	int32_t LastConfirmedAudioQualityLevel; // 0xac
	float FrameRateLimit; // 0xb0
	int32_t DesiredScreenWidth; // 0xb8
	bool bUseDesiredScreenHeight; // 0xbc
	int32_t DesiredScreenHeight; // 0xc0
	int32_t LastUserConfirmedDesiredScreenWidth; // 0xc4
	int32_t LastUserConfirmedDesiredScreenHeight; // 0xc8
	float LastRecommendedScreenWidth; // 0xcc
	float LastRecommendedScreenHeight; // 0xd0
	float LastCPUBenchmarkResult; // 0xd4
	float LastGPUBenchmarkResult; // 0xd8
	TArray<float> LastCPUBenchmarkSteps; // 0xe0
	TArray<float> LastGPUBenchmarkSteps; // 0xf0
	float LastGPUBenchmarkMultiplier; // 0x100
	bool bUseHDRDisplayOutput; // 0x104
	int32_t HDRDisplayOutputNits; // 0x108
	FMulticastInlineDelegate OnGameUserSettingsUINeedsUpdate; // 0x110
};

struct APaperFlipbookActor : AActor {
	UPaperFlipbookComponent* RenderComponent; // 0x220
};

struct UWBP_Main_RadiogramListing_L_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_Group; // 0x268
	UTextBlock* TextBlock_96; // 0x270
	UVerticalBox* VerticalBox_List_Medium; // 0x278
	UObjectiveSystemManagerComponent_C* ObjectiveSystemComponent; // 0x280
	bool IsMinimum; // 0x288
	FS_RadiogramInfo RadiogramInfo; // 0x290
	UWBP_Main_Radiogram_Description_C* RadiogramDescription; // 0x2f0
	int32_t GroupID; // 0x2f8
	UWBP_Main_Radiogram_C* RadiogramMenu; // 0x300
	TMap<FString, UWBP_Main_RadiogramListing_M_C*> RadiogramMainCategoryList; // 0x308
	TMap<FString, UWBP_Main_RadiogramListing_M_C*> RadiogramMainCategoryHorizonList; // 0x358
	UWBP_DescRadiogramGroup_C* DescMainGroup; // 0x3a8
	UWBP_Main_RadiogramListing_S_C* SelectedWidget; // 0x3b0
	bool TutorialWidgetCreated; // 0x3b8
	bool IsItemCollectionGroup; // 0x3b9
	int32_t CollectionMaxCount; // 0x3bc
	int32_t CurrentCreateCollectionIdx; // 0x3c0
	int32_t LoopCount; // 0x3c4
};

struct UAITask : UGameplayTask {
	AAIController* OwnerController; // 0x68
};

struct UMaterialExpressionDistanceFieldGradient : UMaterialExpression {
	FExpressionInput Position; // 0x40
};

struct UMaterialExpressionFloor : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UMaterialParameterCollectionInstance : UObject {
	UMaterialParameterCollection* Collection; // 0x30
};

struct UAsyncActionLoadPrimaryAssetList : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UWheeledVehicleMovementComponent : UPawnMovementComponent {
	char bDeprecatedSpringOffsetMode : 1; // 0x140
	char bReverseAsBrake : 1; // 0x140
	char bUseRVOAvoidance : 1; // 0x140
	char bRawHandbrakeInput : 1; // 0x140
	char bRawGearUpInput : 1; // 0x140
	char bRawGearDownInput : 1; // 0x140
	char bWasAvoidanceUpdated : 1; // 0x144
	float Mass; // 0x148
	TArray<FWheelSetup> WheelSetups; // 0x150
	float DragCoefficient; // 0x160
	float ChassisWidth; // 0x164
	float ChassisHeight; // 0x168
	float DragArea; // 0x16c
	float EstimatedMaxEngineSpeed; // 0x170
	float MaxEngineRPM; // 0x174
	float DebugDragMagnitude; // 0x178
	FVector InertiaTensorScale; // 0x17c
	float MinNormalizedTireLoad; // 0x188
	float MinNormalizedTireLoadFiltered; // 0x18c
	float MaxNormalizedTireLoad; // 0x190
	float MaxNormalizedTireLoadFiltered; // 0x194
	float ThresholdLongitudinalSpeed; // 0x198
	int32_t LowForwardSpeedSubStepCount; // 0x19c
	int32_t HighForwardSpeedSubStepCount; // 0x1a0
	TArray<UVehicleWheel*> Wheels; // 0x1a8
	float RVOAvoidanceRadius; // 0x1d0
	float RVOAvoidanceHeight; // 0x1d4
	float AvoidanceConsiderationRadius; // 0x1d8
	float RVOSteeringStep; // 0x1dc
	float RVOThrottleStep; // 0x1e0
	int32_t AvoidanceUID; // 0x1e4
	FNavAvoidanceMask AvoidanceGroup; // 0x1e8
	FNavAvoidanceMask GroupsToAvoid; // 0x1ec
	FNavAvoidanceMask GroupsToIgnore; // 0x1f0
	float AvoidanceWeight; // 0x1f4
	FVector PendingLaunchVelocity; // 0x1f8
	FReplicatedVehicleState ReplicatedState; // 0x204
	float RawSteeringInput; // 0x21c
	float RawThrottleInput; // 0x220
	float RawBrakeInput; // 0x224
	float SteeringInput; // 0x228
	float ThrottleInput; // 0x22c
	float BrakeInput; // 0x230
	float HandbrakeInput; // 0x234
	float IdleBrakeInput; // 0x238
	float StopThreshold; // 0x23c
	float WrongDirectionThreshold; // 0x240
	FVehicleInputRate ThrottleInputRate; // 0x244
	FVehicleInputRate BrakeInputRate; // 0x24c
	FVehicleInputRate HandbrakeInputRate; // 0x254
	FVehicleInputRate SteeringInputRate; // 0x25c
	AController* OverrideController; // 0x288
};

struct UBlendSpace1D : UBlendSpaceBase {
	bool bScaleAnimation; // 0x148
};

struct UC_Manager-Compass_C : UQuestMapComponent_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	UWBP_HUD_Compass_C* CompassWidget; // 0xb8
	UMaterialInstanceDynamic* CompassMaterial; // 0xc0
	float DirectionOffset; // 0xc8
	UWBP_WorldMapPanel_C* WorldMapWidget; // 0xd0
	UQuestMapComponent_C* Manager-WorldMap; // 0xd8
	bool Initialized?; // 0xe0
	TArray<AActor*> SpotEventRefs; // 0xe8
	TMap<AActor*, UWBP_HUD_CompassMarker_C*> SpotWidget; // 0xf8
	FMulticastInlineDelegate OnSpotEventDisappear; // 0x148
	float RotationYaw; // 0x158
	TArray<AActor*> ScanEventRefs; // 0x160
	TMap<AActor*, UWBP_HUD_CompassMarker_C*> ScanWidget; // 0x170
	FMulticastInlineDelegate OnScanEventDisappear; // 0x1c0
	bool bVisionEnabled; // 0x1d0
	float ScanRadius; // 0x1d4
};

struct UWBP_RespawnListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UCheckBox* CheckBox_Respawn; // 0x268
	UTextBlock* Text_Distance; // 0x270
	UTextBlock* Text_Name; // 0x278
	UTextBlock* Text_RemainTime; // 0x280
	UTextBlock* Text_X; // 0x288
	UTextBlock* Text_Y; // 0x290
	UWBP_UI_ListingHovering_C* WBP_UI_ListingHovering; // 0x298
	ABP_RespawnBuildPartBase_C* RespawnBuildPart; // 0x2a0
	UC_Manager-RespawnMap_C* RespawnMapManager; // 0x2a8
	bool bDoubleClicked; // 0x2b0
	FMulticastInlineDelegate OnEnter; // 0x2b8
	FMulticastInlineDelegate OnLeave; // 0x2c8
};

struct UMaterialExpressionDotProduct : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UPhysicalAnimationComponent : UActorComponent {
	float StrengthMultiplyer; // 0xb0
	USkeletalMeshComponent* SkeletalMeshComponent; // 0xb8
};

struct UCustomizableInstancePrivateData : UObject {
	TArray<FGeneratedMaterial> GeneratedMaterials; // 0x30
	TArray<FGeneratedMesh> GeneratedMeshes; // 0x40
	TArray<FGeneratedTexture> GeneratedTextures; // 0x50
	TArray<FParameterDecorations> ParameterDecorations; // 0xe8
	TMap<FString, TWeakObjectPtr<UTexture2D>> TextureReuseCache; // 0x108
	TArray<UMaterialInterface*> ReferencedMaterials; // 0x320
	TArray<UPhysicsAsset*> PhysicsAssetsToMerge; // 0x3d0
};

struct AFunctionalHoldableBase : AHoldableBase {
	EFunctionalHoldableAnimState AnimState; // 0x478
	float SingleActionCoolTime; // 0x47c
	bool bUsePrepareAnimation; // 0x480
	float UsingAnimTime; // 0x484
	float UsingPrepareAnimTime; // 0x488
	float UsingEndAnimTime; // 0x48c
	bool IsPlayingUsingAnim; // 0x490
	bool IsPlayingUsingPrepareAnim; // 0x491
	bool bAutoUsing; // 0x493
	bool UsingButtonPressed; // 0x494
	UAnimMontage* TP_UsingAnimation; // 0x498
	UAnimMontage* FP_UsingAnimation; // 0x4a0
	UAnimMontage* Hodable_UsingAnimation; // 0x4a8
	UAnimMontage* TP_UsingPrepareAnimation; // 0x4b0
	UAnimMontage* FP_UsingPrepareAnimation; // 0x4b8
	UAnimMontage* Hodable_UsingPrepareAnimation; // 0x4c0
	UAnimMontage* TP_UsingEndAnimation; // 0x4c8
	UAnimMontage* FP_UsingEndAnimation; // 0x4d0
	UAnimMontage* Hodable_UsingEndAnimation; // 0x4d8
	bool bClientPrecedingProduction; // 0x4f8
	float LastUsingTime; // 0x4fc
};

struct UMaterialExpressionBumpOffset : UMaterialExpression {
	FExpressionInput Coordinate; // 0x40
	FExpressionInput Height; // 0x54
	FExpressionInput HeightRatioInput; // 0x68
	float HeightRatio; // 0x7c
	float ReferencePlane; // 0x80
	uint32_t ConstCoordinate; // 0x84
};

struct ABP_NPCSpawnArea_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	USphereComponent* RoamBoundVisualizer; // 0x228
	USphereComponent* CollisionComponent; // 0x230
	USphereComponent* PlayerChecker; // 0x238
	USphereComponent* AreaVisualizer; // 0x240
	UBillboardComponent* Billboard; // 0x248
	USceneComponent* DefaultSceneRoot; // 0x250
	float RoamRadius; // 0x258
	float SpawnRadius; // 0x25c
	bool bUsePlayerExistanceCheck; // 0x260
	float PlayerExistanceCheckRadius; // 0x264
	float PlayerExistanceCheckDelayTime; // 0x268
	float RespawnDelayTime; // 0x26c
	TMap<APawn*, int32_t> NPCSpawnInfos; // 0x270
	TArray<APawn*> SpawnedNPCs; // 0x2c0
	TArray<FS_NPCSpawnCmd> NPCSpawnQueue; // 0x2d0
	bool bRespawn; // 0x2e0
	FMulticastInlineDelegate NPCDead; // 0x2e8
	bool bShowDebug; // 0x2f8
	float LastPawnSensingTime; // 0x2fc
	int32_t CurrPawnSensingCount; // 0x300
	TArray<BP_SurvivalCharacter_C*> IncomePlayers; // 0x308
};

struct UNiagaraDataInterfaceGrid3DCollection : UNiagaraDataInterfaceGrid3D {
	int32_t NumAttributes; // 0x100
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x108
	ENiagaraGpuBufferFormat BufferFormat; // 0x128
};

struct ACompositeMenu : AActor {
	USceneComponent* Root; // 0x220
	UMenuItems* CurrentMenu; // 0x230
	TArray<UMenuItems*> MenuStack; // 0x238
};

struct UNiagaraDataInterfaceAudioPlayer : UNiagaraDataInterface {
	USoundBase* SoundToPlay; // 0x38
	USoundAttenuation* Attenuation; // 0x40
	USoundConcurrency* Concurrency; // 0x48
	TArray<FName> ParameterNames; // 0x50
	bool bLimitPlaysPerTick; // 0x60
	int32_t MaxPlaysPerTick; // 0x64
	bool bStopWhenComponentIsDestroyed; // 0x68
};

struct APlayerState : AInfo {
	float score; // 0x220
	int32_t PlayerId; // 0x224
	char Ping; // 0x228
	char bShouldUpdateReplicatedPing : 1; // 0x22a
	char bIsSpectator : 1; // 0x22a
	char bOnlySpectator : 1; // 0x22a
	char bIsABot : 1; // 0x22a
	char bIsInactive : 1; // 0x22a
	char bFromPreviousLevel : 1; // 0x22a
	int32_t StartTime; // 0x22c
	ULocalMessage* EngineMessageClass; // 0x230
	FString SavedNetworkAddress; // 0x240
	FUniqueNetIdRepl UniqueId; // 0x250
	APawn* PawnPrivate; // 0x280
	FString PlayerNamePrivate; // 0x300
};

struct UMaterialExpressionRuntimeVirtualTextureReplace : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput VirtualTextureOutput; // 0x54
};

struct UUserDefinedCaptureProtocol : UMovieSceneImageCaptureProtocolBase {
	UWorld* World; // 0x58
};

struct ULightComponentBase : USceneComponent {
	FGuid LightGuid; // 0x1f8
	float Brightness; // 0x208
	float Intensity; // 0x20c
	FColor LightColor; // 0x210
	char bAffectsWorld : 1; // 0x214
	char CastShadows : 1; // 0x214
	char CastStaticShadows : 1; // 0x214
	char CastDynamicShadows : 1; // 0x214
	char bAffectTranslucentLighting : 1; // 0x214
	char bTransmission : 1; // 0x214
	char bCastVolumetricShadow : 1; // 0x214
	char bCastDeepShadow : 1; // 0x214
	char bCastRaytracedShadow : 1; // 0x215
	char bAffectReflection : 1; // 0x215
	char bAffectGlobalIllumination : 1; // 0x215
	float DeepShadowLayerDistribution; // 0x218
	float IndirectLightingIntensity; // 0x21c
	float VolumetricScatteringIntensity; // 0x220
	int32_t SamplesPerPixel; // 0x224
};

struct UInterpTrackFade : UInterpTrackFloatBase {
	char bPersistFade : 1; // 0x90
	char bFadeAudio : 1; // 0x90
	FLinearColor FadeColor; // 0x94
};

struct USynthKnob : UWidget {
	float Value; // 0x108
	float StepSize; // 0x10c
	float MouseSpeed; // 0x110
	float MouseFineTuneSpeed; // 0x114
	char ShowTooltipInfo : 1; // 0x118
	FText ParameterName; // 0x120
	FText ParameterUnits; // 0x138
	FDelegate ValueDelegate; // 0x150
	FSynthKnobStyle WidgetStyle; // 0x160
	bool Locked; // 0x398
	bool IsFocusable; // 0x399
	FMulticastInlineDelegate OnMouseCaptureBegin; // 0x3a0
	FMulticastInlineDelegate OnMouseCaptureEnd; // 0x3b0
	FMulticastInlineDelegate OnControllerCaptureBegin; // 0x3c0
	FMulticastInlineDelegate OnControllerCaptureEnd; // 0x3d0
	FMulticastInlineDelegate OnValueChanged; // 0x3e0
};

struct ASurvivalCharacterBase : ACharacter {
	float Health; // 0x4bc
	float MaxHealth; // 0x4c0
	float HealthRegenPerSec; // 0x4c4
	EWeightDivision WeightDivision; // 0x4c8
	bool Dead; // 0x4c9
	float ForceAfterDeadMinDamage; // 0x4cc
	float ForceAfterDeadMaxDamage; // 0x4d0
	float ForceAfterDeadMultiply; // 0x4d4
	FVector DeadForce; // 0x4d8
	FName DeadHitBone; // 0x4e4
	float WorldShiftDistanceOffset; // 0x4ec
	float BaseTurnRate; // 0x4f8
	float BaseLookUpRate; // 0x4fc
	TArray<UActorComponent*> TickActivationComponents; // 0x500
	bool bServerSkipOptimizingAnimTick; // 0x511
	bool bServerAlwaysSkipInSightCheck; // 0x512
	bool bServerAlwaysSkipTickOptimizerCheck; // 0x513
	bool IsRider; // 0x529
	bool IsDriver; // 0x52a
	char MySeatNumber; // 0x52b
	char PassengersSeatNumber; // 0x52c
	ASurvivalVehicle* RideVehicle; // 0x530
	ASurvivalVehicle* ExitVehicle; // 0x538
	char PassengerInfo; // 0x540
	FTakeHitInfo LastTakeHitInfo; // 0x548
	float DamageIntervalThreshold; // 0x67c
	bool bUseSimpleCollsion; // 0x680
	FName CollisionProfileName; // 0x684
	UCapsuleComponent* SimpleHitComponent_Native; // 0x690
};

struct USynthComponentMoto : USynthComponent {
	UMotoSynthPreset* MotoSynthPreset; // 0x6c0
	float RPM; // 0x6c8
};

struct UCheckBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FCheckBoxStyle CheckBoxStyle; // 0x30
};

struct AQuestMapController_C : APlayerController {
	FPointerToUberGraphFrame UberGraphFrame; // 0x570
	UC_Manager-Compass_C* C_Manager-Compass; // 0x578
	UC_Manager-LocalMap_C* C_Manager-LocalMap; // 0x580
	UC_Manager-WorldMap_C* C_Manager-WorldMap; // 0x588
	UQuestMapManager_C* QuestMapManager; // 0x590
	float ForwardScale; // 0x598
	float RightScale; // 0x59c
};

struct UDestructibleMesh : USkeletalMesh {
	FDestructibleParameters DefaultDestructibleParameters; // 0x398
	TArray<FFractureEffect> FractureEffects; // 0x420
};

struct UParticleModuleVelocityBase : UParticleModule {
	char bInWorldSpace : 1; // 0x30
	char bApplyOwnerScale : 1; // 0x30
};

struct UGeometryCacheTrackStreamable : UGeometryCacheTrack {
	UGeometryCacheCodecBase* Codec; // 0x58
	float StartSampleTime; // 0xc8
};

struct USkyAtmosphereComponent : USceneComponent {
	ESkyAtmosphereTransformMode TransformMode; // 0x1f8
	float BottomRadius; // 0x1fc
	FColor GroundAlbedo; // 0x200
	float AtmosphereHeight; // 0x204
	float MultiScatteringFactor; // 0x208
	float TraceSampleCountScale; // 0x20c
	float RayleighScatteringScale; // 0x210
	FLinearColor RayleighScattering; // 0x214
	float RayleighExponentialDistribution; // 0x224
	float MieScatteringScale; // 0x228
	FLinearColor MieScattering; // 0x22c
	float MieAbsorptionScale; // 0x23c
	FLinearColor MieAbsorption; // 0x240
	float MieAnisotropy; // 0x250
	float MieExponentialDistribution; // 0x254
	float OtherAbsorptionScale; // 0x258
	FLinearColor OtherAbsorption; // 0x25c
	FTentDistribution OtherTentDistribution; // 0x26c
	FLinearColor SkyLuminanceFactor; // 0x278
	float AerialPespectiveViewDistanceScale; // 0x288
	float HeightFogContribution; // 0x28c
	float TransmittanceMinLightElevationAngle; // 0x290
	float AerialPerspectiveStartDepth; // 0x294
	FGuid bStaticLightingBuiltGUID; // 0x2bc
};

struct ADesertCar_C : ASurvivalVehicle {
	FPointerToUberGraphFrame UberGraphFrame; // 0x6c8
	UStaticMeshComponent* WindowFrame; // 0x6d0
	UStaticMeshComponent* WheelFL; // 0x6d8
	UStaticMeshComponent* WheelBR; // 0x6e0
	UStaticMeshComponent* WheelBL; // 0x6e8
	UStaticMeshComponent* WheelFR; // 0x6f0
	UCameraComponent* Camera1; // 0x6f8
	USceneComponent* Light; // 0x700
	UParticleSystemComponent* P_Explode1; // 0x708
	UParticleSystemComponent* Effect_ExhaustSmoke; // 0x710
	UTextRenderComponent* TextRender; // 0x718
	UPointLightComponent* PointLight4; // 0x720
	UPointLightComponent* PointLight3; // 0x728
	USpotLightComponent* RearLight2; // 0x730
	USpotLightComponent* RearLight1; // 0x738
	UPointLightComponent* PointLight2; // 0x740
	UPointLightComponent* PointLight1; // 0x748
	USpotLightComponent* SpotLight2; // 0x750
	USpotLightComponent* SpotLight1; // 0x758
	UBP_HitNotifyComponent_C* BP_HitNotifyComponent; // 0x760
	bool bIsLowFriction; // 0x768
	UCurveFloat* CurveHitDamage; // 0x770
	bool bReadyToDestroy; // 0x778
	float OverturnDamage; // 0x77c
	float OverturnDamageRate; // 0x780
	float ExplodeBaseDamage; // 0x784
	FVector TemporalLocation; // 0x788
	EDrawDebugTrace DebugDraw; // 0x794
	bool TemporalResult; // 0x795
	bool IsVisible_SpotLight; // 0x796
	bool IsVisible_RearLight; // 0x797
	char Interaction00_Level; // 0x798
	bool Interaction00_FP; // 0x799
	float WaterDamagedTime; // 0x79c
	float TimeLimit_DamagedVehicle; // 0x7a0
	bool IsDamagedVehicle; // 0x7a4
	float OldPitch; // 0x7a8
	float OldRoll; // 0x7ac
	ASurvivalCharacterBase* DieDriver; // 0x7b0
	FDataTableRowHandle NeedItem_Battery; // 0x7b8
	AActor* spawner; // 0x7c8
	bool BrakeLight; // 0x7d0
	float MorphValue; // 0x7d4
	int32_t OldHealth; // 0x7d8
	TMap<FName, FDataTableRowHandle> NeedItem_Batteries; // 0x7e0
	int32_t InitUID; // 0x830
	float LastEngineRPM; // 0x834
	FMulticastInlineDelegate OnNotifyHealthChanged; // 0x838
	FFloatValueFromDataTable VehiclePlayerDamageMultiplier; // 0x848
	FMulticastInlineDelegate OnNotifyBatteryChanged; // 0x870
	E_VehicleInteractionType VehicleInteractionType; // 0x880
	FMulticastInlineDelegate OnNotifyIsActivateVehicle; // 0x888
	TArray<UMaterialInstanceDynamic*> MaterialInstanceDynamics; // 0x898
	TArray<float> SimpleEmissivePow; // 0x8a8
};

struct UCloudWatchLogsPutDestination : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct ULogoutUserCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UAkAssetData : UObject {
	uint32_t CachedHash; // 0x28
};

struct UMaterialExpressionTextureBase : UMaterialExpression {
	UTexture* Texture; // 0x40
};

struct UInGameAdManager : UPlatformInterfaceBase {
	char bShouldPauseWhileAdOpen : 1; // 0x38
	TArray<FDelegate> ClickedBannerDelegates; // 0x40
	TArray<FDelegate> ClosedAdDelegates; // 0x50
};

struct UMaterialExpressionDeriveNormalZ : UMaterialExpression {
	FExpressionInput InXY; // 0x40
};

struct UPaperGroupedSpriteComponent : UMeshComponent {
	TArray<UMaterialInterface*> InstanceMaterials; // 0x468
	TArray<FSpriteInstanceData> PerInstanceSpriteData; // 0x478
};

struct UStaticMeshSocket : UObject {
	FName SocketName; // 0x28
	FVector RelativeLocation; // 0x30
	FRotator RelativeRotation; // 0x3c
	FVector RelativeScale; // 0x48
	FString Tag; // 0x58
};

struct UNiagaraPreviewAxis_InterpParamBase : UNiagaraPreviewAxis {
	FName Param; // 0x28
	int32_t Count; // 0x30
};

struct UCharacterMovementComponent : UPawnMovementComponent {
	ACharacter* CharacterOwner; // 0x148
	float GravityScale; // 0x150
	float MaxStepHeight; // 0x154
	float JumpZVelocity; // 0x158
	float JumpOffJumpZFactor; // 0x15c
	float WalkableFloorAngle; // 0x160
	float WalkableFloorZ; // 0x164
	EMovementMode MovementMode; // 0x168
	char CustomMovementMode; // 0x169
	ENetworkSmoothingMode NetworkSmoothingMode; // 0x16a
	float GroundFriction; // 0x16c
	float MaxWalkSpeed; // 0x18c
	float MaxWalkSpeedCrouched; // 0x190
	float MaxSwimSpeed; // 0x194
	float MaxFlySpeed; // 0x198
	float MaxCustomMovementSpeed; // 0x19c
	float MaxAcceleration; // 0x1a0
	float MinAnalogWalkSpeed; // 0x1a4
	float BrakingFrictionFactor; // 0x1a8
	float BrakingFriction; // 0x1ac
	float BrakingSubStepTime; // 0x1b0
	float BrakingDecelerationWalking; // 0x1b4
	float BrakingDecelerationFalling; // 0x1b8
	float BrakingDecelerationSwimming; // 0x1bc
	float BrakingDecelerationFlying; // 0x1c0
	float AirControl; // 0x1c4
	float AirControlBoostMultiplier; // 0x1c8
	float AirControlBoostVelocityThreshold; // 0x1cc
	float FallingLateralFriction; // 0x1d0
	float CrouchedHalfHeight; // 0x1d4
	float Buoyancy; // 0x1d8
	float PerchRadiusThreshold; // 0x1dc
	float PerchAdditionalHeight; // 0x1e0
	FRotator RotationRate; // 0x1e4
	char bUseSeparateBrakingFriction : 1; // 0x1f0
	char bApplyGravityWhileJumping : 1; // 0x1f0
	char bUseControllerDesiredRotation : 1; // 0x1f0
	char bOrientRotationToMovement : 1; // 0x1f0
	char bSweepWhileNavWalking : 1; // 0x1f0
	char bMovementInProgress : 1; // 0x1f0
	char bEnableScopedMovementUpdates : 1; // 0x1f0
	char bEnableServerDualMoveScopedMovementUpdates : 1; // 0x1f1
	char bForceMaxAccel : 1; // 0x1f1
	char bRunPhysicsWithNoController : 1; // 0x1f1
	char bForceNextFloorCheck : 1; // 0x1f1
	char bShrinkProxyCapsule : 1; // 0x1f1
	char bCanWalkOffLedges : 1; // 0x1f1
	char bCanWalkOffLedgesWhenCrouching : 1; // 0x1f1
	char bNetworkSkipProxyPredictionOnNetUpdate : 1; // 0x1f2
	char bNetworkAlwaysReplicateTransformUpdateTimestamp : 1; // 0x1f2
	char bDeferUpdateMoveComponent : 1; // 0x1f2
	char bEnablePhysicsInteraction : 1; // 0x1f2
	char bTouchForceScaledToMass : 1; // 0x1f2
	char bPushForceScaledToMass : 1; // 0x1f2
	char bPushForceUsingZOffset : 1; // 0x1f2
	char bScalePushForceToVelocity : 1; // 0x1f3
	USceneComponent* DeferredUpdatedMoveComponent; // 0x1f8
	float MaxOutOfWaterStepHeight; // 0x200
	float OutofWaterZ; // 0x204
	float Mass; // 0x208
	float StandingDownwardForceScale; // 0x20c
	float InitialPushForceFactor; // 0x210
	float PushForceFactor; // 0x214
	float PushForcePointZOffsetFactor; // 0x218
	float TouchForceFactor; // 0x21c
	float MinTouchForce; // 0x220
	float MaxTouchForce; // 0x224
	float RepulsionForce; // 0x228
	FVector Acceleration; // 0x22c
	FQuat LastUpdateRotation; // 0x240
	FVector LastUpdateLocation; // 0x250
	FVector LastUpdateVelocity; // 0x25c
	float ServerLastTransformUpdateTimeStamp; // 0x268
	float ServerLastClientGoodMoveAckTime; // 0x26c
	float ServerLastClientAdjustmentTime; // 0x270
	FVector PendingImpulseToApply; // 0x274
	FVector PendingForceToApply; // 0x280
	float AnalogInputModifier; // 0x28c
	float MaxSimulationTimeStep; // 0x29c
	int32_t MaxSimulationIterations; // 0x2a0
	int32_t MaxJumpApexAttemptsPerSimulation; // 0x2a4
	float MaxDepenetrationWithGeometry; // 0x2a8
	float MaxDepenetrationWithGeometryAsProxy; // 0x2ac
	float MaxDepenetrationWithPawn; // 0x2b0
	float MaxDepenetrationWithPawnAsProxy; // 0x2b4
	float NetworkSimulatedSmoothLocationTime; // 0x2b8
	float NetworkSimulatedSmoothRotationTime; // 0x2bc
	float ListenServerNetworkSimulatedSmoothLocationTime; // 0x2c0
	float ListenServerNetworkSimulatedSmoothRotationTime; // 0x2c4
	float NetProxyShrinkRadius; // 0x2c8
	float NetProxyShrinkHalfHeight; // 0x2cc
	float NetworkMaxSmoothUpdateDistance; // 0x2d0
	float NetworkNoSmoothUpdateDistance; // 0x2d4
	float NetworkMinTimeBetweenClientAckGoodMoves; // 0x2d8
	float NetworkMinTimeBetweenClientAdjustments; // 0x2dc
	float NetworkMinTimeBetweenClientAdjustmentsLargeCorrection; // 0x2e0
	float NetworkLargeClientCorrectionDistance; // 0x2e4
	float LedgeCheckThreshold; // 0x2e8
	float JumpOutOfWaterPitch; // 0x2ec
	FFindFloorResult CurrentFloor; // 0x2f0
	EMovementMode DefaultLandMovementMode; // 0x388
	EMovementMode DefaultWaterMovementMode; // 0x389
	EMovementMode GroundMovementMode; // 0x38a
	char bMaintainHorizontalGroundVelocity : 1; // 0x38b
	char bImpartBaseVelocityX : 1; // 0x38b
	char bImpartBaseVelocityY : 1; // 0x38b
	char bImpartBaseVelocityZ : 1; // 0x38b
	char bImpartBaseAngularVelocity : 1; // 0x38b
	char bJustTeleported : 1; // 0x38b
	char bNetworkUpdateReceived : 1; // 0x38b
	char bNetworkMovementModeChanged : 1; // 0x38b
	char bIgnoreClientMovementErrorChecksAndCorrection : 1; // 0x38c
	char bServerAcceptClientAuthoritativePosition : 1; // 0x38c
	char bNotifyApex : 1; // 0x38c
	char bCheatFlying : 1; // 0x38c
	char bWantsToCrouch : 1; // 0x38c
	char bCrouchMaintainsBaseLocation : 1; // 0x38c
	char bIgnoreBaseRotation : 1; // 0x38c
	char bFastAttachedMove : 1; // 0x38c
	char bAlwaysCheckFloor : 1; // 0x38d
	char bUseFlatBaseForFloorChecks : 1; // 0x38d
	char bPerformingJumpOff : 1; // 0x38d
	char bWantsToLeaveNavWalking : 1; // 0x38d
	char bUseRVOAvoidance : 1; // 0x38d
	char bRequestedMoveUseAcceleration : 1; // 0x38d
	char bWasSimulatingRootMotion : 1; // 0x38d
	char bAllowPhysicsRotationDuringAnimRootMotion : 1; // 0x38e
	char bHasRequestedVelocity : 1; // 0x38e
	char bRequestedMoveWithMaxSpeed : 1; // 0x38e
	char bWasAvoidanceUpdated : 1; // 0x38e
	char bProjectNavMeshWalking : 1; // 0x38e
	char bProjectNavMeshOnBothWorldChannels : 1; // 0x38e
	float AvoidanceConsiderationRadius; // 0x3a0
	FVector RequestedVelocity; // 0x3a4
	int32_t AvoidanceUID; // 0x3b0
	FNavAvoidanceMask AvoidanceGroup; // 0x3b4
	FNavAvoidanceMask GroupsToAvoid; // 0x3b8
	FNavAvoidanceMask GroupsToIgnore; // 0x3bc
	float AvoidanceWeight; // 0x3c0
	FVector PendingLaunchVelocity; // 0x3c4
	float NavMeshProjectionInterval; // 0x474
	float NavMeshProjectionTimer; // 0x478
	float NavMeshProjectionInterpSpeed; // 0x47c
	float NavMeshProjectionHeightScaleUp; // 0x480
	float NavMeshProjectionHeightScaleDown; // 0x484
	float NavWalkingFloorDistTolerance; // 0x488
	FCharacterMovementComponentPostPhysicsTickFunction PostPhysicsTickFunction; // 0x490
	float MinTimeBetweenTimeStampResets; // 0x4d8
	FRootMotionSourceGroup CurrentRootMotion; // 0x988
	FRootMotionSourceGroup ServerCorrectionRootMotion; // 0x9c0
	FRootMotionMovementParams RootMotionParams; // 0xa90
	FVector AnimRootMotionVelocity; // 0xad0
};

struct UWBP_Arm_Casting_C : UUserWidget {
	UTextBlock* TextBlock_39; // 0x260
};

struct UNavigationSystemConfig : UObject {
	FSoftClassPath NavigationSystemClass; // 0x28
	FNavAgentSelector SupportedAgentsMask; // 0x40
	FName DefaultAgentName; // 0x44
	char bIsOverriden : 1; // 0x4c
};

struct UReverbEffect : UObject {
	bool bBypassEarlyReflections; // 0x28
	float ReflectionsDelay; // 0x2c
	float GainHF; // 0x30
	float ReflectionsGain; // 0x34
	bool bBypassLateReflections; // 0x38
	float LateDelay; // 0x3c
	float DecayTime; // 0x40
	float Density; // 0x44
	float Diffusion; // 0x48
	float AirAbsorptionGainHF; // 0x4c
	float DecayHFRatio; // 0x50
	float LateGain; // 0x54
	float Gain; // 0x58
	float RoomRolloffFactor; // 0x5c
};

struct UWidgetTree : UObject {
	UWidget* RootWidget; // 0x28
};

struct ALandmarkBase : AActor {
	FLMInfo LMInfo; // 0x220
	TArray<FLandmarkDialogueByStatus> LMDialogue; // 0x340
	ELMStatus OldStatus; // 0x350
	int32_t OldPhase; // 0x354
	TArray<AActor*> ActionActors; // 0x358
	FMulticastInlineDelegate OnLandmarkStatusPhaseUpdated; // 0x368
};

struct URMHttpRequest_Post_Client_Name : URMHttpRequestBase {
	FMulticastInlineDelegate OnSuccess; // 0x48
	FMulticastInlineDelegate OnFailure; // 0x58
};

struct UCanvas : UObject {
	float OrgX; // 0x28
	float OrgY; // 0x2c
	float ClipX; // 0x30
	float ClipY; // 0x34
	FColor DrawColor; // 0x38
	char bCenterX : 1; // 0x3c
	char bCenterY : 1; // 0x3c
	char bNoSmooth : 1; // 0x3c
	int32_t SizeX; // 0x40
	int32_t SizeY; // 0x44
	FPlane ColorModulate; // 0x50
	UTexture2D* DefaultTexture; // 0x60
	UTexture2D* GradientTexture0; // 0x68
	UReporterGraph* ReporterGraph; // 0x70
};

struct UPlayerInfo_C : UUserWidget {
	UTextBlock* HoverName; // 0x260
};

struct UEnvQueryTest_Overlap : UEnvQueryTest {
	FEnvOverlapData OverlapData; // 0x1f8
};

struct UAmbisonicsEncodingSettings : USoundfieldEncodingSettingsBase {
	int32_t AmbisonicsOrder; // 0x28
};

struct UNPCData : UDataAsset {
	ENPCAttackType MyAttackType; // 0x30
	float MyPhysical; // 0x34
	ENPCGroup MyGroup; // 0x38
	bool FreeForAll; // 0x39
	bool Friendly_Beast; // 0x3a
	bool Friendly_Orbis; // 0x3b
	bool Friendly_Pioneer; // 0x3c
	bool Friendly_Helbine; // 0x3d
	bool Friendly_Creature; // 0x3e
	bool Friendly_Player; // 0x3f
	bool Friendly_UnKnown00; // 0x40
	bool Friendly_UnKnown01; // 0x41
	float MaxStamina; // 0x44
	float Speed_Relax; // 0x48
	float Speed_RunAway; // 0x4c
	float Speed_Battle; // 0x50
	float AggroStep_Alert; // 0x54
	float AggroStep_Battle; // 0x58
	TArray<float> AISense_SightDistance; // 0x60
	TArray<float> AISense_SightAggro; // 0x70
	TArray<float> AISense_HearingDistance; // 0x80
	TArray<float> AISense_HearingAggro; // 0x90
	TArray<float> AISense_Damage; // 0xa0
	TArray<float> AISense_DamageAggro; // 0xb0
};

struct UMaterialExpressionSquareRoot : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UBehaviorTreeManager : UObject {
	int32_t MaxDebuggerSteps; // 0x28
	TArray<FBehaviorTreeTemplateInfo> LoadedTemplates; // 0x30
	TArray<UBehaviorTreeComponent*> ActiveComponents; // 0x40
};

struct APlayerController : AController {
	UPlayer* Player; // 0x298
	APawn* AcknowledgedPawn; // 0x2a0
	UInterpTrackInstDirector* ControllingDirTrackInst; // 0x2a8
	AHUD* MyHUD; // 0x2b0
	APlayerCameraManager* PlayerCameraManager; // 0x2b8
	APlayerCameraManager* PlayerCameraManagerClass; // 0x2c0
	bool bAutoManageActiveCameraTarget; // 0x2c8
	FRotator TargetViewRotation; // 0x2cc
	float SmoothTargetViewRotationSpeed; // 0x2e4
	TArray<AActor*> HiddenActors; // 0x2f0
	TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenPrimitiveComponents; // 0x300
	float LastSpectatorStateSynchTime; // 0x314
	FVector LastSpectatorSyncLocation; // 0x318
	FRotator LastSpectatorSyncRotation; // 0x324
	int32_t ClientCap; // 0x330
	UCheatManager* CheatManager; // 0x338
	UCheatManager* CheatClass; // 0x340
	UPlayerInput* PlayerInput; // 0x348
	TArray<FActiveForceFeedbackEffect> ActiveForceFeedbackEffects; // 0x350
	char bPlayerIsWaiting : 1; // 0x3d0
	char NetPlayerIndex; // 0x3d4
	UNetConnection* PendingSwapConnection; // 0x410
	UNetConnection* NetConnection; // 0x418
	float InputYawScale; // 0x42c
	float InputPitchScale; // 0x430
	float InputRollScale; // 0x434
	char bShowMouseCursor : 1; // 0x438
	char bEnableClickEvents : 1; // 0x438
	char bEnableTouchEvents : 1; // 0x438
	char bEnableMouseOverEvents : 1; // 0x438
	char bEnableTouchOverEvents : 1; // 0x438
	char bForceFeedbackEnabled : 1; // 0x438
	float ForceFeedbackScale; // 0x43c
	TArray<FKey> ClickEventKeys; // 0x440
	EMouseCursor DefaultMouseCursor; // 0x450
	EMouseCursor CurrentMouseCursor; // 0x451
	ECollisionChannel DefaultClickTraceChannel; // 0x452
	ECollisionChannel CurrentClickTraceChannel; // 0x453
	float HitResultTraceDistance; // 0x454
	uint16_t SeamlessTravelCount; // 0x458
	uint16_t LastCompletedSeamlessTravelCount; // 0x45a
	UInputComponent* InactiveStateInputComponent; // 0x4d0
	char bShouldPerformFullTickWhenPaused : 1; // 0x4d8
	UTouchInterface* CurrentTouchInterface; // 0x4f0
	ASpectatorPawn* SpectatorPawn; // 0x548
	bool bIsLocalPlayerController; // 0x554
	FVector SpawnLocation; // 0x558
};

struct UBP_IndicatorHelper_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	TMap<FString, FS_IndicatorInfos> Infos; // 0xb8
	int32_t VisibleCount; // 0x108
};

struct ABP_WindowBuildPartBase_C : ABP_StaticMeshBuildPartBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x860
	UStaticMeshComponent* E; // 0x868
	UBP_BuildJointComponent_C* BP_BuildJointComponent; // 0x870
	FVector OpenRelatvieLoc; // 0x878
	bool IsOpened; // 0x884
	bool bMoving; // 0x885
};

struct UMovieSceneFloatSection : UMovieSceneSection {
	FMovieSceneFloatChannel FloatCurve; // 0xf0
};

struct URetainerBox : UContentWidget {
	bool bRetainRender; // 0x120
	bool RenderOnInvalidation; // 0x121
	bool RenderOnPhase; // 0x122
	int32_t Phase; // 0x124
	int32_t PhaseCount; // 0x128
	UMaterialInterface* EffectMaterial; // 0x130
	FName TextureParameter; // 0x138
};

struct UWBP_Functionality_Refinery_C : UWBP_FunctionalityBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	UBorder* Border_2; // 0x278
	UBorder* Border_3; // 0x280
	UWBP_Slot_Inventory_C* BP_InventorySlot; // 0x288
	UImage* Image_3; // 0x290
	UImage* Image_4; // 0x298
	UImage* Image_46; // 0x2a0
	UImage* Image_60; // 0x2a8
	UImage* Image_61; // 0x2b0
	UImage* Image_EnergyGauge; // 0x2b8
	UImage* Image_UX_Gauge; // 0x2c0
	UImage* Image_UX_Power; // 0x2c8
	UImage* Image_UX_Resource; // 0x2d0
	UWBP_Slot_Inventory_C* Input; // 0x2d8
	UOverlay* Overlay_SliderText; // 0x2e0
	UTextBlock* Preview1Text; // 0x2e8
	UTextBlock* Preview2Text; // 0x2f0
	UProgressBar* Progress; // 0x2f8
	USlider* Slider; // 0x300
	UTextBlock* Text_CurrentEnergy; // 0x308
	UTextBlock* Text_Maximum; // 0x310
	UWBP_Button_UI_C* WBP_Button_Switch; // 0x318
	UWBP_FunctionalityInfo_C* WBP_FunctionalityInfo; // 0x320
	UWBP_MainFrame_Header_C* WBP_MainFrame_Header; // 0x328
	UWBP_Slot_Display_C* WBP_Slot_Display_2; // 0x330
	UWBP_Slot_Display_C* WBP_Slot_Display_3; // 0x338
	UWidgetSwitcher* WidgetSwitcher_1; // 0x340
	UWrapBox* WrapBox_Conversion; // 0x348
	UWrapBox* WrapBox_Storage; // 0x350
	BP_RefineryBuildPart_C* TargetRefinery; // 0x358
	TArray<UWBP_Slot_Inventory_C*> Trans Inventory Slots; // 0x360
	TArray<UWBP_Slot_Inventory_C*> Contents Inventory Slots; // 0x370
	TArray<UWBP_Slot_Inventory_C*> Convert Slots; // 0x380
	UMaterialInstanceDynamic* MI_RefineryEnergy; // 0x390
	float Prev; // 0x398
	float Charged Energy; // 0x39c
	float CoreChargedEnergy; // 0x3a0
	bool bProgressAnimEnd; // 0x3a4
	bool bResource; // 0x3a5
	bool transable; // 0x3a6
};

struct UMeshComponent : UPrimitiveComponent {
	TArray<UMaterialInterface*> OverrideMaterials; // 0x440
	char bEnableMaterialParameterCaching : 1; // 0x460
};

struct ABP_CostButton_C : ABP_InteractionableActor_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	FItemCodeValue NeedItem; // 0x270
	FText Notification_Success; // 0x288
	FText Notification_Failed; // 0x2a0
};

struct UBTTask_MoveToAround_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	AAIController* OwnerController; // 0xb0
	APawn* ControlledPawn; // 0xb8
	FBlackboardKeySelector TargetActor; // 0xc0
	FBlackboardKeySelector TargetLocation; // 0xe8
};

struct UBP_HealingFactor_C : UBP_MachineArmAbilityObjectBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x40
	float HealingFactor; // 0x48
};

struct AGameModeBase : AInfo {
	FString OptionsString; // 0x220
	AGameSession* GameSessionClass; // 0x230
	AGameStateBase* GameStateClass; // 0x238
	APlayerController* PlayerControllerClass; // 0x240
	APlayerState* PlayerStateClass; // 0x248
	AHUD* HUDClass; // 0x250
	APawn* DefaultPawnClass; // 0x258
	ASpectatorPawn* SpectatorClass; // 0x260
	APlayerController* ReplaySpectatorPlayerControllerClass; // 0x268
	AServerStatReplicator* ServerStatReplicatorClass; // 0x270
	AGameSession* GameSession; // 0x278
	AGameStateBase* GameState; // 0x280
	AServerStatReplicator* ServerStatReplicator; // 0x288
	FText DefaultPlayerName; // 0x290
	char bUseSeamlessTravel : 1; // 0x2a8
	char bStartPlayersAsSpectators : 1; // 0x2a8
	char bPauseable : 1; // 0x2a8
};

struct UMovieSceneCompiledData : UObject {
	FMovieSceneEvaluationTemplate EvaluationTemplate; // 0x28
	FMovieSceneSequenceHierarchy Hierarchy; // 0x188
	FMovieSceneEntityComponentField EntityComponentField; // 0x2a0
	FMovieSceneEvaluationField TrackTemplateField; // 0x390
	TArray<FFrameTime> DeterminismFences; // 0x3c0
	FGuid CompiledSignature; // 0x3d0
	FGuid CompilerVersion; // 0x3e0
	FMovieSceneSequenceCompilerMaskStruct AccumulatedMask; // 0x3f0
	FMovieSceneSequenceCompilerMaskStruct AllocatedMask; // 0x3f1
	EMovieSceneSequenceFlags AccumulatedFlags; // 0x3f2
};

struct ADebugCameraController : APlayerController {
	char bShowSelectedInfo : 1; // 0x570
	char bIsFrozenRendering : 1; // 0x570
	char bIsOrbitingSelectedActor : 1; // 0x570
	char bOrbitPivotUseCenter : 1; // 0x570
	char bEnableBufferVisualization : 1; // 0x570
	char bEnableBufferVisualizationFullMode : 1; // 0x570
	char bIsBufferVisualizationInputSetup : 1; // 0x570
	char bLastDisplayEnabled : 1; // 0x570
	UDrawFrustumComponent* DrawFrustum; // 0x578
	AActor* SelectedActor; // 0x580
	UPrimitiveComponent* SelectedComponent; // 0x588
	FHitResult SelectedHitPoint; // 0x590
	APlayerController* OriginalControllerRef; // 0x620
	UPlayer* OriginalPlayer; // 0x628
	float SpeedScale; // 0x630
	float InitialMaxSpeed; // 0x634
	float InitialAccel; // 0x638
	float InitialDecel; // 0x63c
};

struct ULeaderboardFlushCallbackProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UPlayerInput : UObject {
	TArray<FKeyBind> DebugExecBindings; // 0x120
	TArray<FName> InvertedAxis; // 0x160
};

struct UMovieSceneFolder : UObject {
	FName FolderName; // 0x28
	TArray<UMovieSceneFolder*> ChildFolders; // 0x30
	TArray<UMovieSceneTrack*> ChildMasterTracks; // 0x40
	TArray<FString> ChildObjectBindingStrings; // 0x50
};

struct UUniformGridPanel : UPanelWidget {
	FMargin SlotPadding; // 0x120
	float MinDesiredSlotWidth; // 0x130
	float MinDesiredSlotHeight; // 0x134
};

struct UCustomizableObjectInstance : UObject {
	UCustomizableObject* CustomizableObject; // 0x28
	USkeletalMesh* SkeletalMesh; // 0x30
	TArray<FCustomizableObjectBoolParameterValue> BoolParameters; // 0x38
	TArray<FCustomizableObjectIntParameterValue> IntParameters; // 0x48
	TArray<FCustomizableObjectFloatParameterValue> FloatParameters; // 0x58
	TArray<FCustomizableObjectTextureParameterValue> TextureParameters; // 0x68
	TArray<FCustomizableObjectVectorParameterValue> VectorParameters; // 0x78
	TArray<FCustomizableObjectProjectorParameterValue> ProjectorParameters; // 0x88
	bool bBuildParameterDecorations; // 0x98
	FMulticastInlineDelegate UpdatedDelegate; // 0xa0
	FString SkeletalMeshStatus; // 0x110
	UCustomizableInstancePrivateData* PrivateData; // 0x1b8
};

struct UVariantSet : UObject {
	FText DisplayText; // 0x28
	bool bExpanded; // 0x58
	TArray<UVariant*> Variants; // 0x60
	UTexture2D* Thumbnail; // 0x70
};

struct UMovieScenePrimitiveMaterialTrack : UMovieScenePropertyTrack {
	int32_t MaterialIndex; // 0xb0
};

struct UNiagaraDataInterfaceArrayFloat : UNiagaraDataInterfaceArray {
	TArray<float> FloatData; // 0x50
};

struct UNiagaraPreviewAxis_InterpParamVector : UNiagaraPreviewAxis_InterpParamBase {
	FVector Min; // 0x38
	FVector Max; // 0x44
};

struct UInterpTrackFloatAnimBPParam : UInterpTrackFloatBase {
	UObject* AnimBlueprintClass; // 0x90
	UAnimInstance* AnimClass; // 0x98
	FName ParamName; // 0xa0
};

struct UCloudWatchDescribeAlarms : UAwsCloudWatchAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UFieldSystemComponent : UPrimitiveComponent {
	UFieldSystem* FieldSystem; // 0x440
	TArray<TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers; // 0x458
};

struct ABP_BreakableTree_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UBreakableTreeCollisionComponent* OverlapCollision; // 0x228
	UProceduralMeshComponent* ProceduralMesh; // 0x230
	USceneComponent* Scene; // 0x238
	UProceduralMeshComponent* ProceduralMeshOther; // 0x240
	UStaticMeshComponent* OriginalStaticMeshCollision; // 0x248
	float MeshFadeOut_Opacity_15013EAA47A0E20666ED17B69317E7A3; // 0x250
	ETimelineDirection MeshFadeOut__Direction_15013EAA47A0E20666ED17B69317E7A3; // 0x254
	UTimelineComponent* MeshFadeOut; // 0x258
	float MeshFadeIn______0_6576B7AC44472E262B29DE97865634F3; // 0x260
	ETimelineDirection MeshFadeIn__Direction_6576B7AC44472E262B29DE97865634F3; // 0x264
	UTimelineComponent* MeshFadeIn; // 0x268
	bool Broken; // 0x270
	FFloatValueFromDataTable Tree_HP; // 0x278
	float MeshDisappearBeginTimeAfterDestruction; // 0x2a0
	float ActorDestoryBeginTimeAfterDestruction; // 0x2a4
	float ActorDestroyCheckTimeInterval; // 0x2a8
	USoundCue* BreakSound; // 0x2b0
	UStaticMesh* Mesh; // 0x2b8
	UBreakableTreeMetadata* MetaData; // 0x2c0
	UMaterialInstance* CapMaterial; // 0x2c8
	float DamagePushImpulseMultiplier; // 0x2d0
	FRepBreakableTreeData RepBreakableTreeData; // 0x2d4
	TArray<UPrimitiveComponent*> BranchCollisions; // 0x308
	FTimerHandle MeshDisappearTimerHandle; // 0x318
	FTimerHandle ActorTimerHandle; // 0x320
	int32_t BodySectionIdx; // 0x328
	bool IsDestoryedFoliageInstance; // 0x32c
	UFoliageInstancedStaticMeshComponent* FoliageInstancedComponent; // 0x330
	FVector RepBrokenBodyLocation; // 0x338
	FVector RepBrokenBodyVelocity; // 0x344
	FRotator RepBrokenBodyRotator; // 0x350
	FFloatValueFromDataTable TreeHitDamageMultiplier; // 0x360
	FFloatValueFromDataTable DamageCooldownTime; // 0x388
	TMap<AActor*, float> DamageHistroy; // 0x3b0
	FVector RepBrokenBodyAngularVelocity; // 0x400
};

struct URectLightComponent : ULocalLightComponent {
	float SourceWidth; // 0x340
	float SourceHeight; // 0x344
	float BarnDoorAngle; // 0x348
	float BarnDoorLength; // 0x34c
	UTexture* SourceTexture; // 0x350
};

struct UNiagaraDataInterfaceRWBase : UNiagaraDataInterface {
	TSet<int32_t> OutputShaderStages; // 0x38
	TSet<int32_t> IterationShaderStages; // 0x88
};

struct UAkRoomComponent : UAkGameObject {
	char bEnable : 1; // 0x218
	bool bDynamic; // 0x21c
	float Priority; // 0x220
	float WallOcclusion; // 0x224
	float AuxSendLevel; // 0x228
	bool AutoPost; // 0x22c
	UAkAcousticTextureSetComponent* GeometryComponent; // 0x238
};

struct UMaterialExpressionStaticBool : UMaterialExpression {
	char Value : 1; // 0x40
};

struct ABP_WallBuildPartBase_C : ABP_StaticMeshBuildPartBase_C {
	UWidgetComponent* Widget1; // 0x860
	UWidgetComponent* Widget; // 0x868
	UStaticMeshComponent* Wall_Direction; // 0x870
	UStaticMeshComponent* Cube_StabilityWarning; // 0x878
	UBP_BuildJointComponent_C* WallSocket; // 0x880
	UBoxComponent* StabilityCheck_Upper; // 0x888
	UBoxComponent* StabilityCheck_L; // 0x890
	UBoxComponent* StabilityCheck_R; // 0x898
	UBoxComponent* StabilityCheck_Lower; // 0x8a0
	USceneComponent* Stability; // 0x8a8
	UBP_BuildJointComponent_C* CeilingSocket1; // 0x8b0
	UBP_BuildJointComponent_C* CeilingSocket2; // 0x8b8
	USceneComponent* Socket_Ceiling; // 0x8c0
	UBP_BuildJointComponent_C* Bolt; // 0x8c8
	float StabilityMultiplyByWall; // 0x8d0
	float StabilityAddtiveVauleByWallCountOver; // 0x8d4
	float StabilityMultiplyByBase; // 0x8d8
	float InnerSideDamageMultiplier; // 0x8dc
};

struct UNodeMappingContainer : UObject {
	TMap<FName, FNodeItem> SourceItems; // 0x28
	TMap<FName, FNodeItem> TargetItems; // 0x78
	TMap<FName, FName> SourceToTarget; // 0xc8
	TSoftObjectPtr<UObject> SourceAsset; // 0x118
	TSoftObjectPtr<UObject> TargetAsset; // 0x140
};

struct UBP_HitNotifyComponent_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	bool Dead; // 0xb8
	FMulticastInlineDelegate OnDead; // 0xc0
	BP_SurvivalCharacter_C* causer; // 0xd0
	bool CanDamage; // 0xd8
};

struct UEnvelopeFollowerListener : UActorComponent {
	FMulticastInlineDelegate OnEnvelopeFollowerUpdate; // 0xb0
};

struct UAnimSingleNodeInstance : UAnimInstance {
	UAnimationAsset* CurrentAsset; // 0x2b8
	FDelegate PostEvaluateAnimEvent; // 0x2c0
};

struct UAudioComponent : USceneComponent {
	USoundBase* Sound; // 0x1f8
	TArray<FAudioComponentParam> InstanceParameters; // 0x200
	USoundClass* SoundClassOverride; // 0x210
	char bAutoDestroy : 1; // 0x218
	char bStopWhenOwnerDestroyed : 1; // 0x218
	char bShouldRemainActiveIfDropped : 1; // 0x218
	char bAllowSpatialization : 1; // 0x218
	char bOverrideAttenuation : 1; // 0x218
	char bOverrideSubtitlePriority : 1; // 0x218
	char bIsUISound : 1; // 0x218
	char bEnableLowPassFilter : 1; // 0x218
	char bOverridePriority : 1; // 0x219
	char bSuppressSubtitles : 1; // 0x219
	char bAutoManageAttachment : 1; // 0x21a
	FName AudioComponentUserID; // 0x220
	float PitchModulationMin; // 0x228
	float PitchModulationMax; // 0x22c
	float VolumeModulationMin; // 0x230
	float VolumeModulationMax; // 0x234
	float VolumeMultiplier; // 0x238
	int32_t EnvelopeFollowerAttackTime; // 0x23c
	int32_t EnvelopeFollowerReleaseTime; // 0x240
	float Priority; // 0x244
	float SubtitlePriority; // 0x248
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x250
	float PitchMultiplier; // 0x258
	float LowPassFilterFrequency; // 0x25c
	USoundAttenuation* AttenuationSettings; // 0x268
	FSoundAttenuationSettings AttenuationOverrides; // 0x270
	USoundConcurrency* ConcurrencySettings; // 0x610
	TSet<USoundConcurrency*> ConcurrencySet; // 0x618
	EAttachmentRule AutoAttachLocationRule; // 0x674
	EAttachmentRule AutoAttachRotationRule; // 0x675
	EAttachmentRule AutoAttachScaleRule; // 0x676
	FSoundModulationDefaultRoutingSettings ModulationRouting; // 0x678
	FMulticastInlineDelegate OnAudioPlayStateChanged; // 0x6c0
	FMulticastInlineDelegate OnAudioVirtualizationChanged; // 0x6e8
	FMulticastInlineDelegate OnAudioFinished; // 0x710
	FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x738
	FMulticastInlineDelegate OnAudioSingleEnvelopeValue; // 0x760
	FMulticastInlineDelegate OnAudioMultiEnvelopeValue; // 0x788
	FDelegate OnQueueSubtitles; // 0x7b0
	TWeakObjectPtr<USceneComponent> AutoAttachParent; // 0x7c0
	FName AutoAttachSocketName; // 0x7c8
};

struct UMaterialExpressionFunctionOutput : UMaterialExpression {
	FName OutputName; // 0x40
	FString Description; // 0x48
	int32_t SortPriority; // 0x58
	FExpressionInput A; // 0x5c
	char bLastPreviewed : 1; // 0x70
	FGuid ID; // 0x74
};

struct UMaterialExpressionSkyAtmosphereLightDirection : UMaterialExpression {
	int32_t LightIndex; // 0x40
};

struct ABP_LM2ExitPipe_C : ABP_InteractionableActor_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UStaticMeshComponent* SM_WarpMirror_01; // 0x270
	UStaticMeshComponent* SM_Pipe_Thick_Stand_Str_h; // 0x278
	UStaticMeshComponent* SM_Pipe_Thick_Insul_Crn_c; // 0x280
	bool ActivatePipe; // 0x288
	FVector ExitPosition; // 0x28c
};

struct UStaticMeshComponent : UMeshComponent {
	int32_t ForcedLodModel; // 0x468
	int32_t PreviousLODLevel; // 0x46c
	int32_t MinLOD; // 0x470
	int32_t SubDivisionStepSize; // 0x474
	UStaticMesh* StaticMesh; // 0x478
	FColor WireframeColorOverride; // 0x480
	char bEvaluateWorldPositionOffset : 1; // 0x484
	char bOverrideWireframeColor : 1; // 0x484
	char bOverrideMinLod : 1; // 0x484
	char bOverrideNavigationExport : 1; // 0x484
	char bForceNavigationObstacle : 1; // 0x484
	char bDisallowMeshPaintPerInstance : 1; // 0x484
	char bIgnoreInstanceForTextureStreaming : 1; // 0x484
	char bOverrideLightMapRes : 1; // 0x484
	char bCastDistanceFieldIndirectShadow : 1; // 0x485
	char bOverrideDistanceFieldSelfShadowBias : 1; // 0x485
	char bUseSubDivisions : 1; // 0x485
	char bUseDefaultCollision : 1; // 0x485
	char bReverseCulling : 1; // 0x485
	int32_t OverriddenLightMapRes; // 0x488
	float DistanceFieldIndirectShadowMinVisibility; // 0x48c
	float DistanceFieldSelfShadowBias; // 0x490
	float StreamingDistanceMultiplier; // 0x494
	TArray<FStaticMeshComponentLODInfo> LODData; // 0x498
	TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x4a8
	FLightmassPrimitiveSettings LightmassSettings; // 0x4b8
};

struct UHapticFeedbackEffect_Curve : UHapticFeedbackEffect_Base {
	FHapticFeedbackDetails_Curve HapticDetails; // 0x28
};

struct UEndTurnCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UWBP_Functionality_CarManage_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UHorizontalBox* HorizontalBox_BatteryChargeMaterial; // 0x268
	UHorizontalBox* HorizontalBox_RepairMaterial; // 0x270
	UImage* Image; // 0x278
	UImage* Image_2; // 0x280
	UImage* Image_3; // 0x288
	UImage* Image_4; // 0x290
	UImage* Image_87; // 0x298
	UImage* Image_204; // 0x2a0
	UImage* Image_Condition; // 0x2a8
	UImage* Image_Condition_2; // 0x2b0
	UTextBlock* TextBlock_BatteryFull; // 0x2b8
	UTextBlock* TextBlock_DurabilityFull; // 0x2c0
	UTextBlock* TextBox; // 0x2c8
	UTextBlock* TextBox_2; // 0x2d0
	UTextBlock* VechicleCurrentEnergy; // 0x2d8
	UTextBlock* VechicleMaxEnergy; // 0x2e0
	UTextBlock* VechicleMaxHP; // 0x2e8
	UTextBlock* VehicleCurrentHP; // 0x2f0
	UWBP_MainFrame_C* WBP_MainFrame; // 0x2f8
	UWBP_MainFrame_Header_C* WBP_MainFrame_Header; // 0x300
	UWBP_MainFrame_Header_C* WBP_MainFrame_Header_59; // 0x308
	UWBP_PopUp_Button_C* WBP_PopUp_Button_Charge; // 0x310
	UWBP_PopUp_Button_C* WBP_PopUp_Button_Repair; // 0x318
	UWBP_ResourceListing_C* WBP_ResourceListing_140; // 0x320
	ADesertCar_C* Desert Car; // 0x328
	int32_t ItemResourceAmount; // 0x330
	UMaterialInstanceDynamic* MI_RepairCondition; // 0x338
	UMaterialInstanceDynamic* MI_BatteryCondition; // 0x340
};

struct UForceFeedbackAttenuation : UObject {
	FForceFeedbackAttenuationSettings Attenuation; // 0x28
};

struct UCommonAI_BTTask_GetNearLocation_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	FBlackboardKeySelector KEYTargetLocation; // 0xb0
	float NearRange; // 0xd8
	float MinLength; // 0xdc
	float ForwardRange; // 0xe0
	bool UseGround; // 0xe4
	float FloatingHight; // 0xe8
	FBlackboardKeySelector KEYMoveLocation; // 0xf0
};

struct UWBP_MainFrame_Header_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_137; // 0x268
	UTextBlock* TextBlock_46; // 0x270
	FText Header; // 0x278
};

struct UBlendSpace : UBlendSpaceBase {
	EBlendSpaceAxis AxisToScaleAnimation; // 0x148
};

struct ADonNavigationManager : AActor {
	bool bIsUnbound; // 0x414
	USceneComponent* SceneComponent; // 0x418
	UBillboardComponent* Billboard; // 0x420
	float VoxelSize; // 0x438
	int32_t XGridSize; // 0x43c
	int32_t YGridSize; // 0x440
	int32_t ZGridSize; // 0x444
	ECollisionChannel CollisionQueryChannel; // 0x448
	TArray<AActor*> ActorsToIgnoreForCollision; // 0x450
	TArray<float> AutoCorrectionGuessList; // 0x460
	float UnrealPhyxPenetrationDepth; // 0x470
	bool PerformCollisionChecksOnStartup; // 0x474
	bool bMultiThreadingEnabled; // 0x475
	int32_t MaxPathSolverIterationsPerTick; // 0x478
	int32_t MaxCollisionSolverIterationsPerTick; // 0x47c
	int32_t MaxPathSolverIterationsOnThread; // 0x480
	int32_t MaxCollisionSolverIterationsOnThread; // 0x484
	int32_t MaxPathSolverIterationsPerTick_Unbound; // 0x488
	int32_t MaxCollisionSolverIterationsPerTick_Unbound; // 0x48c
	int32_t MaxPathSolverIterationsOnThread_Unbound; // 0x490
	int32_t MaxCollisionSolverIterationsOnThread_Unbound; // 0x494
	UBoxComponent* WorldBoundaryVisualizer; // 0x498
	bool bDisplayWorldBoundary; // 0x4a0
	bool bDisplayWorldBoundaryInGame; // 0x4a1
	float DebugVoxelsLineThickness; // 0x4a4
	bool bRunDebugValidationsForDynamicCollisions; // 0x4a8
	TSet<AActor*> ActiveNavigationTaskOwners; // 0x69e8
	TSet<UPrimitiveComponent*> ActiveCollisionTaskOwners; // 0x6a38
};

struct ULevelSequenceBurnInOptions : UObject {
	bool bUseBurnIn; // 0x28
	FSoftClassPath BurnInClass; // 0x30
	ULevelSequenceBurnInInitSettings* Settings; // 0x48
};

struct UWBP_InGameUI_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_UIOpen; // 0x268
	UCanvasPanel* CanvasPanel_1; // 0x270
	UBorder* DropZone; // 0x278
	UWBP_Main_Equipment_C* EquipmentMenu; // 0x280
	UGridPanel* GridPanel_Description; // 0x288
	UGridPanel* GridPanel_External; // 0x290
	UImage* Image_304; // 0x298
	UWBP_Main_Inventory_C* InventoryWidget; // 0x2a0
	UGridPanel* MainInventory; // 0x2a8
	UWBP_Main_Description_C* WBP_ItemDescription; // 0x2b0
	UWBP_CraftingV2_C* WBP_Main_Crafting; // 0x2b8
	UWBP_Main_Landmark_C* WBP_Main_Landmark; // 0x2c0
	UWBP_Main_MailSystem_C* WBP_Main_Mail; // 0x2c8
	UWBP_Main_Radiogram_C* WBP_Main_Radiogram; // 0x2d0
	UWBP_Main_MachineArm_C* WBP_Main_Skill; // 0x2d8
	UWBP_Main_Survivor_C* WBP_Main_Survivor; // 0x2e0
	UWidgetSwitcher* WidgetSwitcher_Index; // 0x2e8
	UWidgetSwitcher* WS_Left; // 0x2f0
	UWBP_Slot_Inventory_C* Last Inventory Reference; // 0x2f8
	UBP_PlayerInventoryComponent_C* Player Inventory Component; // 0x300
	UWBP_Slot_Equipment_C* Last Equipment Reference; // 0x308
	UBP_PlayerBuildingComponent_C* Player Building Component; // 0x310
	UWBP_Slot_Inventory_C* Current Inventory Slot Reference; // 0x318
	UWBP_Slot_Inventory_C* End Inventory Reference; // 0x320
	UWBP_Slot_Inventory_C* Left Mouse Inventory Reference; // 0x328
	UWBP_Slot_Inventory_C* Right Mouse Inventory Reference; // 0x330
	UWBP_Function_Equipment_C* Equipment Options Widget; // 0x338
	UWBP_Slot_Inventory_C* Selected Slot; // 0x340
	UWBP_Slot_Equipment_C* End Equipment Reference; // 0x348
	UWBP_Slot_Equipment_C* Left Mouse Equipment Reference; // 0x350
	UWBP_Function_Inventory_C* Inventory Options Widget; // 0x358
	WBP_RingBase_C*  Radial Menu; // 0x360
	UWBP_Slot_Equipment_C* Right Mouse Equipment Reference; // 0x368
	UWBP_Slot_Equipment_C* Current Equipment Reference; // 0x370
	UWBP_Handled_Item_C* Move Item Widget; // 0x378
	bool Moving Item; // 0x380
	FTimerHandle Moving Item Timer; // 0x388
	bool Spliting Stack; // 0x390
	FVector2D Move Widget Size; // 0x394
	FLinearColor Enable Attachment Color; // 0x39c
	FLinearColor Disable Attachment Color; // 0x3ac
	bool bOpenOhterPlayerInventory; // 0x3bc
	E_MainUIState UIState; // 0x3bd
	bool bIsInit; // 0x3be
	UMaterialInstanceDynamic* MI_Background; // 0x3c0
	TArray<UWBP_Main_Description_C*> AdditiveSettingItemDescriptionList; // 0x3c8
	FMulticastInlineDelegate OnRefreshDescription; // 0x3d8
	ABP_ModelViewer_C* SummaryModel; // 0x3e8
	UUserWidget* CurrentExternalUI; // 0x3f0
};

struct UInterpTrackAkAudioRTPC : UInterpTrackFloatBase {
	FString Param; // 0x90
	char bPlayOnReverse : 1; // 0xa0
	char bContinueRTPCOnMatineeEnd : 1; // 0xa0
};

struct UBP_RecoilComponent_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	float RecoilOverheatingCount; // 0xb8
	float WeaponRecoilYaw; // 0xbc
	float WeaponRecoilPitch; // 0xc0
	float AimRecoveryOffset; // 0xc4
	float TotalWeaponRecoilYaw; // 0xc8
	float TotalWeaponRecoilPitch; // 0xcc
	UTimelineComponent* Timeline_Cooldown; // 0xd0
	float TotalRecoilOverheatingCount; // 0xd8
	float RecoveryRateWeaponRecoilYaw; // 0xdc
	float RecoveryRateWeaponRecoilPitch; // 0xe0
	float CurrentLookUp; // 0xe4
	float CurrentTurn; // 0xe8
	float RecoilDeltaTime; // 0xec
	float BeforeRecoilYaw; // 0xf0
	float BeforeRecoilPitch; // 0xf4
	FS_WeaponRecoil DefaultRecoilCurve; // 0xf8
	bool CanRecovory; // 0x130
	float RecoveryDeltaTime; // 0x134
	float AimPunchDeltaTime; // 0x138
};

struct USubmixEffectStereoDelayPreset : USoundEffectSubmixPreset {
	FSubmixEffectStereoDelaySettings Settings; // 0xb4
};

struct AEQSTestingPawn : ACharacter {
	UEnvQuery* QueryTemplate; // 0x4c0
	TArray<FEnvNamedValue> queryParams; // 0x4c8
	TArray<FAIDynamicParam> QueryConfig; // 0x4d8
	float TimeLimitPerStep; // 0x4e8
	int32_t StepToDebugDraw; // 0x4ec
	EEnvQueryHightlightMode HighlightMode; // 0x4f0
	char bDrawLabels : 1; // 0x4f4
	char bDrawFailedItems : 1; // 0x4f4
	char bReRunQueryOnlyOnFinishedMove : 1; // 0x4f4
	char bShouldBeVisibleInGame : 1; // 0x4f4
	char bTickDuringGame : 1; // 0x4f4
	EEnvQueryRunMode QueryingMode; // 0x4f8
	FNavAgentProperties NavAgentProperties; // 0x500
};

struct UNavMovementComponent : UMovementComponent {
	FNavAgentProperties NavAgentProps; // 0xf0
	float FixedPathBrakingDistance; // 0x120
	char bUpdateNavAgentWithOwnersCollision : 1; // 0x124
	char bUseAccelerationForPaths : 1; // 0x124
	char bUseFixedBrakingDistanceForPaths : 1; // 0x124
	FMovementProperties MovementState; // 0x125
	UObject* PathFollowingComp; // 0x128
};

struct UCommonAI_BTDecorator_CheckTargetSurvivalCharacterDead_C : UBTDecorator_BlueprintBase {
	FBlackboardKeySelector KEYTargetActor; // 0xa0
	FBlackboardKeySelector KEYStress; // 0xc8
	bool IsAggro; // 0xf0
};

struct ULevelSequencePlayer : UMovieSceneSequencePlayer {
	FMulticastInlineDelegate OnCameraCut; // 0x680
};

struct UWBP_Functionality_ElectricTrap_C : UWBP_FunctionalityBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	UImage* Image_5; // 0x278
	UImage* Image_7; // 0x280
	UImage* Image_66; // 0x288
	UImage* Image_315; // 0x290
	UImage* Image_EnergyGauge; // 0x298
	UImage* Image_UX_Gauge; // 0x2a0
	USlider* Slider; // 0x2a8
	UTextBlock* Text_Cost; // 0x2b0
	UTextBlock* Text_Damage; // 0x2b8
	UTextBlock* Text_State; // 0x2c0
	UWBP_FunctionalityInfo_C* WBP_FunctionalityInfo; // 0x2c8
	UWBP_FunctionalityMainButton_C* WBP_FunctionalityMainButton; // 0x2d0
	ABP_ElectricTrap_C*  Electric Trap; // 0x2d8
	UMaterialInstanceDynamic* MI_Gauge; // 0x2e0
};

struct UAnimNotify_Lunge_C : USVAnimNotify {
	float LungeForce; // 0x38
	float LungeHight; // 0x3c
};

struct ABP_CorePermissionRepeater_C : ABP_StaticMeshBuildPartBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x860
	UParticleSystemComponent* P_Facility_Repeater; // 0x868
	UStaticMeshComponent* effect; // 0x870
	UCapsuleComponent* BuildPermission; // 0x878
	bool IsShowPermissionArea; // 0x880
	UMaterialInstanceDynamic* MI_Area; // 0x888
	ABP_EnergyCoreBuildPart_C* TempConnectedEnergyCore; // 0x890
	ABP_EnergyCoreBuildPart_C* PrevConnected Energy Core; // 0x898
};

struct UHudSettings : UObject {
	char bShowHUD : 1; // 0x28
	TArray<FName> DebugDisplay; // 0x30
};

struct UPaperFlipbookComponent : UMeshComponent {
	UPaperFlipbook* SourceFlipbook; // 0x468
	UMaterialInterface* Material; // 0x470
	float PlayRate; // 0x478
	char bLooping : 1; // 0x47c
	char bReversePlayback : 1; // 0x47c
	char bPlaying : 1; // 0x47c
	float AccumulatedTime; // 0x480
	int32_t CachedFrameIndex; // 0x484
	FLinearColor SpriteColor; // 0x488
	UBodySetup* CachedBodySetup; // 0x498
	FMulticastInlineDelegate OnFinishedPlaying; // 0x4a0
};

struct UMagicLeapARPinSettings : UObject {
	float UpdateCheckFrequency; // 0x28
	FMagicLeapARPinState OnUpdatedEventTriggerDelta; // 0x2c
};

struct UWBP_MainChatWindow_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border; // 0x268
	UBorder* Border_3; // 0x270
	UBorder* Border_8; // 0x278
	UBorder* Border_Windowed; // 0x280
	UButton* Button_Commit; // 0x288
	UButton* Button_Fond; // 0x290
	UButton* Button_Prefix; // 0x298
	UMultiLineEditableText* EditableText_ChatEntry; // 0x2a0
	UHorizontalBox* HorizontalBox_Categories; // 0x2a8
	UImage* Image_72; // 0x2b0
	UImage* Image_73; // 0x2b8
	UImage* Image_BG; // 0x2c0
	UImage* Image_Bg_Large; // 0x2c8
	UOverlay* Overlay_Large; // 0x2d0
	UOverlay* Overlay_PM; // 0x2d8
	UOverlay* Overlay_Windowed; // 0x2e0
	UScrollBox* ScrollBox_Messages; // 0x2e8
	UScrollBox* ScrollBox_Messages_Large; // 0x2f0
	USlider* Slider_76; // 0x2f8
	UTextBlock* Text_Prefix; // 0x300
	UTextBlock* TextBlock_ActualTeam; // 0x308
	UTextBlock* TextBlock_PM; // 0x310
	UVerticalBox* VerticalBox_Chat_L; // 0x318
	UVerticalBox* VerticalBox_Chat_S; // 0x320
	UVerticalBox* VerticalBox_Prefix; // 0x328
	UWBP_ChatCategoryButtons_C* W_CategoryButtons_Dialogue; // 0x330
	UWBP_ChatCategoryButtons_C* W_CategoryButtons_Global; // 0x338
	UWBP_ChatCategoryButtons_C* W_CategoryButtons_Log; // 0x340
	UWBP_ChatCategoryButtons_C* W_CategoryButtons_Proximity; // 0x348
	UWBP_ChatCategoryButtons_C* W_CategoryButtons_System; // 0x350
	UWBP_ChatCategoryButtons_C* W_CategoryButtons_Team; // 0x358
	UWBP_Chat_Prefix_C* WBP_Chat_Prefix_Admin; // 0x360
	UWBP_Chat_Prefix_C* WBP_Chat_Prefix_Global; // 0x368
	UWBP_Chat_Prefix_C* WBP_Chat_Prefix_Proximity; // 0x370
	UWBP_Chat_Prefix_C* WBP_Chat_Prefix_Team; // 0x378
	UWBP_MainFrame_Toolbar_Checkbox_C* WBP_MainFrame_Toolbar_Checkbox_; // 0x380
	bool ChatOpen?; // 0x388
	E_ChatCategory OnMessageCategory; // 0x389
	TArray<FText> IgnoreUsername; // 0x390
	TArray<UWBP_ChatMessage_C*> AllMessages; // 0x3a0
	int32_t PlayerId; // 0x3b0
	APlayerController* ControllerRef; // 0x3b8
	bool ShowHideMouse?; // 0x3c0
	bool ResetFocus?; // 0x3c1
	int32_t ToPlayerID; // 0x3c4
	FText CurrentPMUsername; // 0x3c8
	FText CurrentMessage; // 0x3e0
	bool CloseOnCommit?; // 0x3f8
	int32_t Attempt; // 0x3fc
	bool ShowTime?; // 0x400
	bool NeedHideMouse; // 0x401
	float UserFocusLostTime; // 0x404
	UScrollBox* CurrentScrollBox; // 0x408
	UVerticalBox* CurrentVerticalBox; // 0x410
	UBP_GameSettings_C* Game Settings; // 0x418
	float Retrigger; // 0x420
	int32_t MessageMaximum; // 0x424
	bool bOpened; // 0x428
	bool bWindowed; // 0x429
	bool bLocked; // 0x42a
	bool bAdmin; // 0x42b
	bool bPrefixDropdown; // 0x42c
	bool bCategoryGlobal; // 0x42d
	bool bCategoryProximity; // 0x42e
	bool bCategoryTeam; // 0x42f
	bool bCategorySystem; // 0x430
	bool bCategoryDialogue; // 0x431
	bool bCategoryLog; // 0x432
	bool bReceived; // 0x433
};

struct UWBP_MapMarker_LandmarkEffect_C : UWBP_MapMarker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4a8
	UWidgetAnimation* Appear; // 0x4b0
	ABP_LandmarkEffectRangeActor_C* MyLandmarkEffectRef; // 0x4b8
	FLandmarkEffectInfo EffectInfo; // 0x4c0
};

struct UAnimNotify_FireMonsterProjectile_C : USVAnimNotify {
	bool CheckActorDirection; // 0x38
	FName EffectSocketName; // 0x3c
	USoundBase* Sound; // 0x48
	UParticleSystem* Emitter; // 0x50
	FRotator FixParticleRotation; // 0x58
	float AssistPower; // 0x64
};

struct AMagicLeapARPinInfoActor_C : AMagicLeapARPinInfoActorBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x238
	UStaticMeshComponent* Right; // 0x240
	UStaticMeshComponent* Forward; // 0x248
	UStaticMeshComponent* Up; // 0x250
	USphereComponent* ValidRadiusVisualizer; // 0x258
	USceneComponent* AxisRoot; // 0x260
	USceneComponent* VisualizerRoot; // 0x268
	UTextRenderComponent* TypeValue; // 0x270
	UTextRenderComponent* TransErrValue; // 0x278
	UTextRenderComponent* RotErrValue; // 0x280
	UTextRenderComponent* ConfidenceValue; // 0x288
	UTextRenderComponent* TransErrLabel; // 0x290
	UTextRenderComponent* RotErrLabel; // 0x298
	UTextRenderComponent* ConfidenceLabel; // 0x2a0
	UTextRenderComponent* PinIDValue; // 0x2a8
	USceneComponent* InfoRoot; // 0x2b0
	USceneComponent* Root; // 0x2b8
	float RotationSmoothSpeed; // 0x2c0
};

struct UWBP_TutorialObjectiveListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Check; // 0x268
	UImage* Image_106; // 0x270
	UImage* Image_Icon; // 0x278
	UWBP_ObjectiveCheckbox_C* WBP_ObjectiveCheckbox; // 0x280
	FS_TutorialGoalData TutorialGoalData; // 0x288
	bool Finished; // 0x2b8
};

struct UAREnvironmentProbeComponent : UARComponent {
	FAREnvironmentProbeUpdatePayload ReplicatedPayload; // 0x280
};

struct UPaperTileSet : UObject {
	FIntPoint TileSize; // 0x28
	UTexture2D* TileSheet; // 0x30
	TArray<UTexture*> AdditionalSourceTextures; // 0x38
	FIntMargin BorderMargin; // 0x48
	FIntPoint PerTileSpacing; // 0x58
	FIntPoint DrawingOffset; // 0x60
	int32_t WidthInTiles; // 0x68
	int32_t HeightInTiles; // 0x6c
	int32_t AllocatedWidth; // 0x70
	int32_t AllocatedHeight; // 0x74
	TArray<FPaperTileMetadata> PerTileData; // 0x78
	TArray<FPaperTileSetTerrain> Terrains; // 0x88
	int32_t TileWidth; // 0x98
	int32_t TileHeight; // 0x9c
	int32_t Margin; // 0xa0
	int32_t Spacing; // 0xa4
};

struct UMovieSceneAkAudioEventSection : UMovieSceneSection {
	UAkAudioEvent* Event; // 0x128
	bool RetriggerEvent; // 0x130
	int32_t ScrubTailLengthMs; // 0x134
	bool StopAtSectionEnd; // 0x138
	FString EventName; // 0x140
	float MaxSourceDuration; // 0x170
	FString MaxDurationSourceID; // 0x178
};

struct UVehicleBurstData : UDataAsset {
	UParticleSystem* WaterFX; // 0x30
	UParticleSystem* MetalFX; // 0x38
	UParticleSystem* ConcreteFX; // 0x40
	UParticleSystem* CommonFX; // 0x48
	float WaterMinSpeed; // 0x50
	float WaterMaxSpeed; // 0x54
	float MetalMinSpeed; // 0x58
	float MetalMaxSpeed; // 0x5c
	float ConcreteMinSpeed; // 0x60
	float ConcreteMaxSpeed; // 0x64
	float CommonMinSpeed; // 0x68
	float CommonMaxSpeed; // 0x6c
	float WaterMinSpawn; // 0x70
	float WaterMaxSpawn; // 0x74
	float MetalMinSpawn; // 0x78
	float MetalMaxSpawn; // 0x7c
	float ConcreteMinSpawn; // 0x80
	float ConcreteMaxSpawn; // 0x84
	float CommonMinSpawn; // 0x88
	float CommonMaxSpawn; // 0x8c
	float WaterMinLifeTime; // 0x90
	float WaterMaxLifeTime; // 0x94
	float MetalMinLifeTime; // 0x98
	float MetalMaxLifeTime; // 0x9c
	float ConcreteMinLifeTime; // 0xa0
	float ConcreteMaxLifeTime; // 0xa4
	float CommonMinLifeTime; // 0xa8
	float CommonMaxLifeTime; // 0xac
	FVector WaterMinPower; // 0xb0
	FVector WaterMaxPower; // 0xbc
	FVector MetalMinPower; // 0xc8
	FVector MetalMaxPower; // 0xd4
	FVector ConcreteMinPower; // 0xe0
	FVector ConcreteMaxPower; // 0xec
	FVector CommonMinPower; // 0xf8
	FVector CommonMaxPower; // 0x104
};

struct UCloudStorageBase : UPlatformInterfaceBase {
	TArray<FString> LocalCloudFiles; // 0x38
	char bSuppressDelegateCalls : 1; // 0x48
};

struct AAtmosphericFog : AInfo {
	UAtmosphericFogComponent* AtmosphericFogComponent; // 0x220
};

struct UInterpTrackInstVectorMaterialParam : UInterpTrackInst {
	TArray<UMaterialInstanceDynamic*> MaterialInstances; // 0x28
	TArray<FVector> ResetVectors; // 0x38
	TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x48
	UInterpTrackVectorMaterialParam* InstancedTrack; // 0x58
};

struct AAIContoller_Juggernaut_Hover_C : ACommonAI_BaseAIController_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x498
};

struct UBP_IngamePopupUIManager_C : UActorComponent {
	TMap<int32_t, UUserWidget*> IngameLayer; // 0xb0
	int32_t CurrentTopZOrder; // 0x100
};

struct UGameplayTasksComponent : UActorComponent {
	char bIsNetDirty : 1; // 0xbc
	TArray<UGameplayTask*> SimulatedTasks; // 0xc0
	TArray<UGameplayTask*> TaskPriorityQueue; // 0xd0
	TArray<UGameplayTask*> TickingTasks; // 0xf0
	TArray<UGameplayTask*> KnownTasks; // 0x100
	FMulticastInlineDelegate OnClaimedResourcesChange; // 0x110
};

struct UBrushBaseProperties : UInteractiveToolPropertySet {
	float BrushSize; // 0x60
	bool bSpecifyRadius; // 0x64
	float BrushRadius; // 0x68
	float BrushStrength; // 0x6c
	float BrushFalloffAmount; // 0x70
	bool bShowStrength; // 0x74
	bool bShowFalloff; // 0x75
};

struct AARSharedWorldGameState : AGameState {
	TArray<char> PreviewImageData; // 0x290
	TArray<char> ARWorldData; // 0x2a0
	int32_t PreviewImageBytesTotal; // 0x2b0
	int32_t ARWorldBytesTotal; // 0x2b4
	int32_t PreviewImageBytesDelivered; // 0x2b8
	int32_t ARWorldBytesDelivered; // 0x2bc
};

struct UAnimSharingTransitionInstance : UAnimInstance {
	TWeakObjectPtr<USkeletalMeshComponent> FromComponent; // 0x2b8
	TWeakObjectPtr<USkeletalMeshComponent> ToComponent; // 0x2c0
	float BlendTime; // 0x2c8
	bool bBlendBool; // 0x2cc
};

struct USynth2DSlider : UWidget {
	float ValueX; // 0x108
	float ValueY; // 0x10c
	FDelegate ValueXDelegate; // 0x110
	FDelegate ValueYDelegate; // 0x120
	FSynth2DSliderStyle WidgetStyle; // 0x130
	FLinearColor SliderHandleColor; // 0x3e8
	bool IndentHandle; // 0x3f8
	bool Locked; // 0x3f9
	float StepSize; // 0x3fc
	bool IsFocusable; // 0x400
	FMulticastInlineDelegate OnMouseCaptureBegin; // 0x408
	FMulticastInlineDelegate OnMouseCaptureEnd; // 0x418
	FMulticastInlineDelegate OnControllerCaptureBegin; // 0x428
	FMulticastInlineDelegate OnControllerCaptureEnd; // 0x438
	FMulticastInlineDelegate OnValueChangedX; // 0x448
	FMulticastInlineDelegate OnValueChangedY; // 0x458
};

struct UAnimBoneCompressionCodec : UObject {
	FString Description; // 0x28
};

struct UAnimNotify_AkEvent_C : UAnimNotify {
	FString Attach Name; // 0x38
	UAkAudioEvent* Event; // 0x48
	bool Follow; // 0x50
	FString EventName; // 0x58
};

struct UBTTask_MoveToForward_Juggernaut_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	AAIController* OwnerController; // 0xb0
	APawn* ControlledPawn; // 0xb8
	FBlackboardKeySelector MoveLocation; // 0xc0
	FBlackboardKeySelector IsMoveLocation; // 0xe8
	FBlackboardKeySelector IsLookAround; // 0x110
	FBlackboardKeySelector MoveFailedCount; // 0x138
};

struct UWBP_Functionality_Turret_C : UWBP_FunctionalityBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	UWBP_Slot_Inventory_C* BP_InventorySlot; // 0x278
	UWBP_Slot_Inventory_C* BP_InventorySlot_2; // 0x280
	UWBP_Slot_Inventory_C* BP_InventorySlot_3; // 0x288
	UWBP_Slot_Inventory_C* BP_InventorySlot_4; // 0x290
	UWBP_Slot_Inventory_C* BP_InventorySlot_6; // 0x298
	UImage* Image_5; // 0x2a0
	UImage* Image_6; // 0x2a8
	UImage* Image_7; // 0x2b0
	UImage* Image_315; // 0x2b8
	UTextBlock* Text_AmmoType; // 0x2c0
	UTextBlock* Text_Damage; // 0x2c8
	UTextBlock* Text_EnergyCost; // 0x2d0
	UTextBlock* Text_Range; // 0x2d8
	UWBP_FunctionalityInfo_C* WBP_FunctionalityInfo; // 0x2e0
	UWBP_FunctionalityMainButton_C* WBP_FunctionalityMainButton; // 0x2e8
	UWBP_MainFrame_C* WBP_MainFrame; // 0x2f0
	UWBP_MainFrame_Header_C* WBP_MainFrame_Header; // 0x2f8
	UWBP_MainFrame_Header_C* WBP_MainFrame_Header_2; // 0x300
	UWrapBox* WrapBox_Slot; // 0x308
	ABP_TurretBuildPart_C* TargetTurret; // 0x310
	TArray<UWBP_Slot_Inventory_C*> Trans Inventory Slots; // 0x318
	TArray<UWBP_Slot_Inventory_C*> Contents Inventory Slots; // 0x328
	TArray<UWBP_Functionality_ConversionSlot_C*> Convert Slots; // 0x338
};

struct APawn : AActor {
	char bUseControllerRotationPitch : 1; // 0x228
	char bUseControllerRotationYaw : 1; // 0x228
	char bUseControllerRotationRoll : 1; // 0x228
	char bCanAffectNavigationGeneration : 1; // 0x228
	float BaseEyeHeight; // 0x22c
	EAutoReceiveInput AutoPossessPlayer; // 0x230
	EAutoPossessAI AutoPossessAI; // 0x231
	char RemoteViewPitch; // 0x232
	AController* AIControllerClass; // 0x238
	APlayerState* PlayerState; // 0x240
	AController* LastHitBy; // 0x250
	AController* Controller; // 0x258
	FVector ControlInputVector; // 0x264
	FVector LastControlInputVector; // 0x270
};

struct UBP_EnvironmentEffectComponent_C : UEnvironmentEffectComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x460
	E_EnviromentEffectType Type; // 0x468
	float CenterValue; // 0x46c
	float Falloff; // 0x470
	bool CalcIgnore; // 0x474
	bool bComfortable; // 0x475
	float InnerRadius; // 0x478
};

struct USkeletalMeshSimplificationSettings : UDeveloperSettings {
	FName SkeletalMeshReductionModuleName; // 0x38
};

struct UAnimationSharingSetup : UObject {
	TArray<FPerSkeletonAnimationSharingSetup> SkeletonSetups; // 0x28
	FAnimationSharingScalability ScalabilitySettings; // 0x38
};

struct UApplicationLifecycleComponent : UActorComponent {
	FMulticastInlineDelegate ApplicationWillDeactivateDelegate; // 0xb0
	FMulticastInlineDelegate ApplicationHasReactivatedDelegate; // 0xc0
	FMulticastInlineDelegate ApplicationWillEnterBackgroundDelegate; // 0xd0
	FMulticastInlineDelegate ApplicationHasEnteredForegroundDelegate; // 0xe0
	FMulticastInlineDelegate ApplicationWillTerminateDelegate; // 0xf0
	FMulticastInlineDelegate ApplicationShouldUnloadResourcesDelegate; // 0x100
	FMulticastInlineDelegate ApplicationReceivedStartupArgumentsDelegate; // 0x110
	FMulticastInlineDelegate OnTemperatureChangeDelegate; // 0x120
	FMulticastInlineDelegate OnLowPowerModeDelegate; // 0x130
};

struct UReplicationGraphNode_AlwaysRelevant_ForConnection : UReplicationGraphNode_ActorList {
	TArray<FAlwaysRelevantActorInfo> PastRelevantActors; // 0x110
};

struct UMaterialFunctionInterface : UObject {
	FGuid StateId; // 0x28
	EMaterialFunctionUsage MaterialFunctionUsage; // 0x38
};

struct USurvivalOutgameSubsystem : UGameInstanceSubsystem {
	FString AccessKey; // 0x38
	FString SecretKey; // 0x48
	FString SQSUrl; // 0x58
	FOutgameCoordinatorUrl CoordinatorUrl; // 0x68
	TMap<FString, FString> OutgameUrls; // 0xf8
	USurvivalWebsocketConnectionClient* WebsocketClient; // 0x148
	USurvivalWebsocketConnectionDedicatedServer* WebsocketDedicatedServer; // 0x150
	USurvivalWebsocketConnectionBase* WebsocketKakaoChatSystem; // 0x158
	UOutgameRemoteCallbackContainer* RemoteCallbackContainer; // 0x160
	FPBUF_sv_OperationInfoRes Client_OpInfo; // 0x168
	FMulticastInlineDelegate Client_OpInfo_Callback; // 0x180
	FPBUF_sv_UserInfoRes Client_ClientInfo; // 0x190
	FMulticastInlineDelegate Client_ClientInfo_Callback; // 0x1c8
	FMulticastInlineDelegate Client_Init_Ok; // 0x1d8
	FPBUF_sv_DediListInfosRes Client_DediListInfo; // 0x1e8
	FMulticastInlineDelegate Client_DediListInfo_Callback; // 0x1f8
	FMulticastInlineDelegate Client_ChangeName_Callback; // 0x208
	FString ServerEndingTimeString; // 0x218
	int32_t AdminSlotCount; // 0x228
	TMap<FString, FDateTime> Client_LastPlayedDediList; // 0x230
};

struct UNiagaraDataInterfaceAudioSpectrum : UNiagaraDataInterfaceAudioSubmix {
	int32_t Resolution; // 0x40
	float MinimumFrequency; // 0x44
	float MaximumFrequency; // 0x48
	float NoiseFloorDb; // 0x4c
};

struct UPlanePositionGizmo : UInteractiveGizmo {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48
	TScriptInterface<IGizmoVec2ParameterSource> ParameterSource; // 0x58
	TScriptInterface<IGizmoClickTarget> HitTarget; // 0x68
	TScriptInterface<IGizmoStateTarget> StateTarget; // 0x78
	bool bEnableSignedAxis; // 0x88
	bool bFlipX; // 0x89
	bool bFlipY; // 0x8a
	bool bInInteraction; // 0x8b
	FVector InteractionOrigin; // 0x8c
	FVector InteractionNormal; // 0x98
	FVector InteractionAxisX; // 0xa4
	FVector InteractionAxisY; // 0xb0
	FVector InteractionStartPoint; // 0xbc
	FVector InteractionCurPoint; // 0xc8
	FVector2D InteractionStartParameter; // 0xd4
	FVector2D InteractionCurParameter; // 0xdc
	FVector2D ParameterSigns; // 0xe4
};

struct UBTTask_PlaySound : UBTTaskNode {
	USoundCue* SoundToPlay; // 0x70
};

struct APartyBeaconClient : AOnlineBeaconClient {
	FString DestSessionId; // 0x2e0
	FPartyReservation PendingReservation; // 0x2f0
	EClientRequestType RequestType; // 0x340
	bool bPendingReservationSent; // 0x341
	bool bCancelReservation; // 0x342
};

struct UDatasmithStaticMeshComponentTemplate : UDatasmithObjectTemplate {
	UStaticMesh* StaticMesh; // 0x30
	TArray<UMaterialInterface*> OverrideMaterials; // 0x38
};

struct UReplicationGraphNode : UObject {
	TArray<UReplicationGraphNode*> AllChildNodes; // 0x28
};

struct UWBP_PlayerInfo_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWBP_MainFrame_C* BP_UI_Player; // 0x268
	UImage* CharacterImage; // 0x270
	UWBP_Slot_Equipment_C* ChestEquipmentSlot; // 0x278
	UWBP_Slot_Equipment_C* FeetEquipmentSlot; // 0x280
	UWBP_Slot_Equipment_C* HeadEquipmentSlot; // 0x288
	UWBP_Slot_Equipment_C* LegsEquipmentSlot; // 0x290
	UWBP_Slot_Equipment_C* Memory1EquipmentSlot; // 0x298
	UWBP_Slot_Equipment_C* Memory2EquipmentSlot; // 0x2a0
	UWBP_Slot_Equipment_C* Memory3EquipmentSlot; // 0x2a8
	UWBP_Slot_Equipment_C* Memory4EquipmentSlot; // 0x2b0
	UWBP_Slot_Equipment_C* Protocol1EquipmentSlot; // 0x2b8
	UWBP_Slot_Equipment_C* Protocol2EquipmentSlot; // 0x2c0
	UTextBlock* Text_SurvivalDays; // 0x2c8
	UWBP_MainFrame_Header_C* WBP_MainFrame_Header; // 0x2d0
	FS_PlayerInfoSummary PlayerInfo; // 0x2d8
	ABP_ModelViewer_C* ModelViewer; // 0x358
	TArray<UMaterialInterface*> TempMaterial; // 0x360
	TMap<UWBP_Slot_Equipment_C*, FS_EquipmentSlot> OccupationSlotList; // 0x370
};

struct UARCandidateObject : UDataAsset {
	TArray<char> CandidateObjectData; // 0x30
	FString FriendlyName; // 0x40
	FBox BoundingBox; // 0x50
};

struct ULandscapeWeightmapUsage : UObject {
	ULandscapeComponent* ChannelUsage[0x4]; // 0x28
	FGuid LayerGuid; // 0x48
};

struct UNiagaraDataInterfaceLandscape : UNiagaraDataInterface {
	AActor* SourceLandscape; // 0x38
};

struct UCloudWatchLogsDeleteQueryDefinition : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UDatasmithCineCameraActorTemplate : UDatasmithObjectTemplate {
	FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings; // 0x30
};

struct UAkPortalComponent : USceneComponent {
	bool bDynamic; // 0x1f8
	AkAcousticPortalState InitialState; // 0x1f9
	float ObstructionRefreshInterval; // 0x1fc
	ECollisionChannel ObstructionCollisionChannel; // 0x200
};

struct ULowEntryLatentActionFloat : UObject {
	bool Finished; // 0x28
	float Result; // 0x2c
	int32_t KeepAliveCount; // 0x30
};

struct ALevelSequenceActor : AActor {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x230
	ULevelSequencePlayer* SequencePlayer; // 0x248
	FSoftObjectPath LevelSequence; // 0x250
	FLevelSequenceCameraSettings CameraSettings; // 0x268
	ULevelSequenceBurnInOptions* BurnInOptions; // 0x270
	UMovieSceneBindingOverrides* BindingOverrides; // 0x278
	char bAutoPlay : 1; // 0x280
	char bOverrideInstanceData : 1; // 0x280
	char bReplicatePlayback : 1; // 0x280
	UObject* DefaultInstanceData; // 0x288
	ULevelSequenceBurnIn* BurnInInstance; // 0x290
	bool bShowBurnin; // 0x298
};

struct UWBP_Main_RadiogramListing_S_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_1; // 0x268
	UBorder* Border_Ring; // 0x270
	UImage* Image_New; // 0x278
	UImage* Image_Selected; // 0x280
	UTextBlock* TextBlock_76; // 0x288
	UWBP_UI_ListingHovering_C* WBP_UI_ListingHovering; // 0x290
	FS_RadiogramGuide RadiogramGuide; // 0x298
	UObjectiveSystemManagerComponent_C* ObjectiveComponent; // 0x378
	int32_t QuestIdx; // 0x380
	int32_t GroupID; // 0x384
	UWBP_Main_Radiogram_Description_C* RadiogramDescription; // 0x388
	FMulticastInlineDelegate OnSublistClicked; // 0x390
	bool bInitialized; // 0x3a0
	UWBP_Main_RadiogramListing_L_C* MainCategory; // 0x3a8
	bool bUnlocked; // 0x3b0
};

struct ABP_NPCSpawnerBase_C : ANPCSpawnerActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UChildActorComponent* NavInvoker; // 0x228
	USceneComponent* SceneRoot; // 0x230
	UCapsuleComponent* SpawnPointChecker; // 0x238
	USphereComponent* NearPlayerChecker; // 0x240
	TSet<ACommonAI_BaseAICharacter_C*> SpawnedNPCs; // 0x248
	float FloorSenceRange; // 0x298
	int32_t NearPlayerCount; // 0x29c
	TMap<FVector, FName> SpawnedNPCData; // 0x2a0
	TArray<FItemCodeValue> WeightTable; // 0x2f0
	bool CanSpawnItem; // 0x300
	bool ClientDestroy; // 0x301
	bool OverlapCheck; // 0x302
	FMulticastInlineDelegate OnCallSpawnNPC; // 0x308
	FMulticastInlineDelegate OnCallSpawnNPCDead; // 0x318
	FTimerHandle DoSaveSpawnNPCTimerHandler; // 0x328
	float DisappearDelayByNearPlayer; // 0x330
	TSet<FString> DelayedDebugStrings; // 0x338
	int32_t NavSpawnFailCount; // 0x388
	bool CheckNavigationWhenSpawn; // 0x38c
	bool CheckNearPlayer; // 0x38d
	float SpawnZ; // 0x390
};

struct UWBP_Functionality_Conversion_C : UWBP_FunctionalityBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	UWBP_Functionality_ConversionSlot_C* BP_ConvertContainer; // 0x278
	UWBP_Functionality_ConversionSlot_C* BP_ConvertContainer_2; // 0x280
	UWBP_Functionality_ConversionSlot_C* BP_ConvertContainer_3; // 0x288
	UWBP_Functionality_ConversionSlot_C* BP_ConvertContainer_4; // 0x290
	UWBP_Functionality_ConversionSlot_C* BP_ConvertContainer_5; // 0x298
	UWBP_Slot_Inventory_C* BP_InventorySlot; // 0x2a0
	UWBP_Slot_Inventory_C* BP_InventorySlot_2; // 0x2a8
	UWBP_Slot_Inventory_C* BP_InventorySlot_3; // 0x2b0
	UWBP_Slot_Inventory_C* BP_InventorySlot_4; // 0x2b8
	UWBP_Slot_Inventory_C* BP_InventorySlot_5; // 0x2c0
	UUniformGridPanel* ContentsGrid; // 0x2c8
	UUniformGridPanel* ConvertingGrid; // 0x2d0
	UImage* Image; // 0x2d8
	UImage* Image_2; // 0x2e0
	UImage* Image_86; // 0x2e8
	UImage* Image_Background; // 0x2f0
	UImage* Image_UX_Fuel; // 0x2f8
	UProgressBar* ProgressBar_Fuel; // 0x300
	UTextBlock* Text_Fuel; // 0x308
	UUniformGridPanel* TransGrid; // 0x310
	UWBP_FunctionalityInfo_C* WBP_FunctionalityInfo; // 0x318
	UWBP_FunctionalityMainButton_C* WBP_FunctionalityMainButton; // 0x320
	UWBP_MainFrame_Header_C* WBP_MainFrame_Header_2; // 0x328
	UWBP_MainFrame_Toolbar_C* WBP_MainFrame_Toolbar; // 0x330
	UWBP_Toolbar_Dropdown_C* WBP_Toolbar_Dropdown; // 0x338
	ABP_MaintainConvertBuildParts_C* TargetMaintainConvertBuildparts; // 0x340
	TArray<UWBP_Slot_Inventory_C*> Trans Inventory Slots; // 0x348
	TArray<UWBP_Slot_Inventory_C*> Contents Inventory Slots; // 0x358
	TArray<UWBP_Functionality_ConversionSlot_C*> Convert Slots; // 0x368
	UMaterialInstanceDynamic* MI_Background; // 0x378
	FText Result; // 0x380
};

struct UBTTask_WalkingAttack_Juggernaut_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	float DelayTime; // 0xb0
	FBlackboardKeySelector IsRangeAttack; // 0xb8
	FBlackboardKeySelector IsRangeAttackOther; // 0xe0
	FBlackboardKeySelector IsWalkingAttack; // 0x108
	FBlackboardKeySelector IsMeleeAttack; // 0x130
	FBlackboardKeySelector IsExecutionAttack; // 0x158
	FBlackboardKeySelector IsSelectAttackType; // 0x180
	FBlackboardKeySelector TargetActor; // 0x1a8
	FVector BackMoveLocation; // 0x1d0
};

struct UTexture : UStreamableRenderAsset {
	FGuid LightingGuid; // 0x68
	int32_t LODBias; // 0x78
	TextureCompressionSettings CompressionSettings; // 0x7c
	TextureFilter Filter; // 0x7d
	ETextureMipLoadOptions MipLoadOptions; // 0x7e
	TextureGroup LODGroup; // 0x7f
	FPerPlatformFloat Downscale; // 0x80
	ETextureDownscaleOptions DownscaleOptions; // 0x84
	char SRGB : 1; // 0x85
	char bNoTiling : 1; // 0x85
	char VirtualTextureStreaming : 1; // 0x85
	char CompressionYCoCg : 1; // 0x85
	char bNotOfflineProcessed : 1; // 0x85
	char bAsyncResourceReleaseHasBeenStarted : 1; // 0x85
	TArray<UAssetUserData*> AssetUserData; // 0x88
};

struct UInterpCurveEdSetup : UObject {
	TArray<FCurveEdTab> Tabs; // 0x28
	int32_t ActiveTab; // 0x38
};

struct UWBP_Tooltip_UI_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* Text_Description; // 0x268
	UTextBlock* Text_Name; // 0x270
	FText Name; // 0x278
	FText Description; // 0x290
};

struct UWBP_Radiogram_4020203_C : UUserWidget {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x260
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x268
	UWBP_RadiogramListing_C* WBP_RadiogramListing_2; // 0x270
	UWBP_RadiogramListing_C* WBP_RadiogramListing_3; // 0x278
};

struct UCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UCheckBoxStyleAsset : UObject {
	FCheckBoxStyle CheckBoxStyle; // 0x28
};

struct UInterpData : UObject {
	float InterpLength; // 0x28
	float PathBuildTime; // 0x2c
	TArray<UInterpGroup*> InterpGroups; // 0x30
	UInterpCurveEdSetup* CurveEdSetup; // 0x40
	float EdSectionStart; // 0x48
	float EdSectionEnd; // 0x4c
	char bShouldBakeAndPrune : 1; // 0x50
	UInterpGroupDirector* CachedDirectorGroup; // 0x58
	TArray<FName> AllEventNames; // 0x60
};

struct UCloudWatchLogsGetLogEvents : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UAkAudioType : UObject {
	uint32_t ShortID; // 0x28
	TArray<UObject*> UserData; // 0x30
};

struct UNiagaraDataInterfaceVector4Curve : UNiagaraDataInterfaceCurveBase {
	FRichCurve XCurve; // 0x70
	FRichCurve YCurve; // 0xf0
	FRichCurve ZCurve; // 0x170
	FRichCurve WCurve; // 0x1f0
};

struct UInterpTrackInstSlomo : UInterpTrackInst {
	float OldTimeDilation; // 0x28
};

struct UScaleBox : UContentWidget {
	EStretch Stretch; // 0x120
	EStretchDirection StretchDirection; // 0x121
	float UserSpecifiedScale; // 0x124
	bool IgnoreInheritedScale; // 0x128
};

struct UMovieSceneEnumTrack : UMovieScenePropertyTrack {
	UEnum* Enum; // 0xb0
};

struct AHoldableBase : AStaticMeshActor {
	int32_t UID; // 0x230
	FItemInventory InventoryItem; // 0x238
	bool bUseConditionSystem; // 0x270
	float ConditionCostPerHit; // 0x274
	float Condition; // 0x278
	bool bIsActivated; // 0x27c
	FHoldableAnimation HoldableAnimation; // 0x280
	UAnimMontage* EquipAnimation; // 0x408
	FName AttachedSocketName; // 0x410
	ASurvivalCharacter* Holder; // 0x418
	TMap<EPlayerMoveState, float> MovementSpeeds; // 0x420
	bool bCanLean; // 0x470
	float SimulatedProxyNetUpdateFrequencyRate; // 0x474
};

struct UInteractiveToolsContext : UObject {
	UInputRouter* InputRouter; // 0x58
	UInteractiveToolManager* ToolManager; // 0x60
	UInteractiveGizmoManager* GizmoManager; // 0x68
	TSoftClassPtr<UObject> ToolManagerClass; // 0x70
};

struct UPrimitiveComponent : USceneComponent {
	float MinDrawDistance; // 0x200
	float LDMaxDrawDistance; // 0x204
	float CachedMaxDrawDistance; // 0x208
	ESceneDepthPriorityGroup DepthPriorityGroup; // 0x20c
	ESceneDepthPriorityGroup ViewOwnerDepthPriorityGroup; // 0x20d
	EIndirectLightingCacheQuality IndirectLightingCacheQuality; // 0x20e
	ELightmapType LightmapType; // 0x20f
	char bUseMaxLODAsImposter : 1; // 0x210
	char bBatchImpostersAsInstances : 1; // 0x210
	char bNeverDistanceCull : 1; // 0x210
	char bAlwaysCreatePhysicsState : 1; // 0x210
	char bGenerateOverlapEvents : 1; // 0x211
	char bMultiBodyOverlap : 1; // 0x211
	char bTraceComplexOnMove : 1; // 0x211
	char bReturnMaterialOnMove : 1; // 0x211
	char bUseViewOwnerDepthPriorityGroup : 1; // 0x211
	char bAllowCullDistanceVolume : 1; // 0x211
	char bHasMotionBlurVelocityMeshes : 1; // 0x211
	char bVisibleInReflectionCaptures : 1; // 0x211
	char bVisibleInRealTimeSkyCaptures : 1; // 0x212
	char bVisibleInRayTracing : 1; // 0x212
	char bRenderInMainPass : 1; // 0x212
	char bRenderInDepthPass : 1; // 0x212
	char bReceivesDecals : 1; // 0x212
	char bOwnerNoSee : 1; // 0x212
	char bOnlyOwnerSee : 1; // 0x212
	char bTreatAsBackgroundForOcclusion : 1; // 0x212
	char bUseAsOccluder : 1; // 0x213
	char bSelectable : 1; // 0x213
	char bForceMipStreaming : 1; // 0x213
	char bHasPerInstanceHitProxies : 1; // 0x213
	char CastShadow : 1; // 0x213
	char bAffectDynamicIndirectLighting : 1; // 0x213
	char bAffectDistanceFieldLighting : 1; // 0x213
	char bCastDynamicShadow : 1; // 0x213
	char bCastStaticShadow : 1; // 0x214
	char bCastVolumetricTranslucentShadow : 1; // 0x214
	char bCastContactShadow : 1; // 0x214
	char bSelfShadowOnly : 1; // 0x214
	char bCastFarShadow : 1; // 0x214
	char bCastInsetShadow : 1; // 0x214
	char bCastCinematicShadow : 1; // 0x214
	char bCastHiddenShadow : 1; // 0x214
	char bCastShadowAsTwoSided : 1; // 0x215
	char bLightAsIfStatic : 1; // 0x215
	char bLightAttachmentsAsGroup : 1; // 0x215
	char bExcludeFromLightAttachmentGroup : 1; // 0x215
	char bReceiveMobileCSMShadows : 1; // 0x215
	char bSingleSampleShadowFromStationaryLights : 1; // 0x215
	char bIgnoreRadialImpulse : 1; // 0x215
	char bIgnoreRadialForce : 1; // 0x215
	char bApplyImpulseOnDamage : 1; // 0x216
	char bReplicatePhysicsToAutonomousProxy : 1; // 0x216
	char bFillCollisionUnderneathForNavmesh : 1; // 0x216
	char AlwaysLoadOnClient : 1; // 0x216
	char AlwaysLoadOnServer : 1; // 0x216
	char bUseEditorCompositing : 1; // 0x216
	char bRenderCustomDepth : 1; // 0x216
	EHasCustomNavigableGeometry bHasCustomNavigableGeometry; // 0x217
	ECanBeCharacterBase CanCharacterStepUpOn; // 0x219
	FLightingChannels LightingChannels; // 0x21a
	ERendererStencilMask CustomDepthStencilWriteMask; // 0x21b
	int32_t CustomDepthStencilValue; // 0x21c
	FCustomPrimitiveData CustomPrimitiveData; // 0x220
	FCustomPrimitiveData CustomPrimitiveDataInternal; // 0x230
	int32_t TranslucencySortPriority; // 0x248
	int32_t VisibilityId; // 0x24c
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x250
	int8_t VirtualTextureLodBias; // 0x260
	int8_t VirtualTextureCullMips; // 0x261
	int8_t VirtualTextureMinCoverage; // 0x262
	ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x263
	float LpvBiasMultiplier; // 0x268
	float BoundsScale; // 0x274
	TArray<AActor*> MoveIgnoreActors; // 0x288
	TArray<UPrimitiveComponent*> MoveIgnoreComponents; // 0x298
	FBodyInstance BodyInstance; // 0x2b8
	FMulticastSparseDelegate OnComponentHit; // 0x410
	FMulticastSparseDelegate OnComponentBeginOverlap; // 0x411
	FMulticastSparseDelegate OnComponentEndOverlap; // 0x412
	FMulticastSparseDelegate OnComponentWake; // 0x413
	FMulticastSparseDelegate OnComponentSleep; // 0x414
	FMulticastSparseDelegate OnBeginCursorOver; // 0x416
	FMulticastSparseDelegate OnEndCursorOver; // 0x417
	FMulticastSparseDelegate OnClicked; // 0x418
	FMulticastSparseDelegate OnReleased; // 0x419
	FMulticastSparseDelegate OnInputTouchBegin; // 0x41a
	FMulticastSparseDelegate OnInputTouchEnd; // 0x41b
	FMulticastSparseDelegate OnInputTouchEnter; // 0x41c
	FMulticastSparseDelegate OnInputTouchLeave; // 0x41d
	UPrimitiveComponent* LODParentPrimitive; // 0x438
};

struct UMaterialExpressionSceneDepthWithoutWater : UMaterialExpression {
	EMaterialSceneAttributeInputMode InputMode; // 0x40
	FExpressionInput Input; // 0x44
	FVector2D ConstInput; // 0x58
	float FallbackDepth; // 0x60
};

struct AAmbientSound : AActor {
	UAudioComponent* AudioComponent; // 0x220
};

struct UCloudWatchPutDashboard : UAwsCloudWatchAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UWidgetSwitcherSlot : UPanelSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct UGameplayTask : UObject {
	FName InstanceName; // 0x30
	ETaskResourceOverlapPolicy ResourceOverlapPolicy; // 0x3a
	UGameplayTask* ChildTask; // 0x60
};

struct UMaterialExpressionParameter : UMaterialExpression {
	FName ParameterName; // 0x40
	FGuid ExpressionGUID; // 0x48
};

struct UWBP_Radiogram_4010101_C : UUserWidget {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x260
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x268
	UWBP_RadiogramListing_C* WBP_RadiogramListing_2; // 0x270
	UWBP_RadiogramListing_C* WBP_RadiogramListing_3; // 0x278
	UWBP_RadiogramListing_C* WBP_RadiogramListing_4; // 0x280
};

struct UParticleModuleLocationPrimitiveCylinder_Seeded : UParticleModuleLocationPrimitiveCylinder {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x120
};

struct UMediaSoundComponent : USynthComponent {
	EMediaSoundChannels Channels; // 0x6c0
	bool DynamicRateAdjustment; // 0x6c4
	float RateAdjustmentFactor; // 0x6c8
	FFloatRange RateAdjustmentRange; // 0x6cc
	UMediaPlayer* MediaPlayer; // 0x6e0
};

struct UBTDecorator_KeepInCone : UBTDecorator {
	float ConeHalfAngle; // 0x68
	FBlackboardKeySelector ConeOrigin; // 0x70
	FBlackboardKeySelector Observed; // 0x98
	char bUseSelfAsOrigin : 1; // 0xc0
	char bUseSelfAsObserved : 1; // 0xc0
};

struct USoundNode : UObject {
	TArray<USoundNode*> ChildNodes; // 0x28
};

struct UInterpGroupInst : UObject {
	UInterpGroup* Group; // 0x28
	AActor* GroupActor; // 0x30
	TArray<UInterpTrackInst*> TrackInst; // 0x38
};

struct UEndMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UParticleModuleVectorFieldLocal : UParticleModuleVectorFieldBase {
	UVectorField* VectorField; // 0x30
	FVector RelativeTranslation; // 0x38
	FRotator RelativeRotation; // 0x44
	FVector RelativeScale3D; // 0x50
	float Intensity; // 0x5c
	float Tightness; // 0x60
	char bIgnoreComponentTransform : 1; // 0x64
	char bTileX : 1; // 0x64
	char bTileY : 1; // 0x64
	char bTileZ : 1; // 0x64
	char bUseFixDT : 1; // 0x64
};

struct USurvivalWebsocketConnectorBase : UObject {
	USurvivalWebsocketConnectionBase* WebsocketConnection; // 0x28
	FString URL; // 0x30
	TMap<FString, FString> WebsocketConnectionHeaders; // 0x40
};

struct UOnsetNRT : UAudioSynesthesiaNRT {
	UOnsetNRTSettings* Settings; // 0x78
};

struct URMNPC_AnimBP_BlackBear_C : UNPCAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x310
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x318
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x338
	FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2; // 0x358
	FAnimNode_Root AnimGraphNode_Root_3; // 0x470
	FAnimNode_LookAt AnimGraphNode_LookAt; // 0x4a0
	FAnimNode_Root AnimGraphNode_Root_2; // 0x650
	FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x680
	FAnimNode_DragonSpineSolver AnimGraphNode_DragonSpineSolver; // 0x7a0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xf80
	FAnimNode_DragonFeetSolver AnimGraphNode_DragonFeetSolver; // 0xfa0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x15f0
	FAnimNode_Root AnimGraphNode_Root; // 0x1610
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18; // 0x1640
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17; // 0x1668
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0x1690
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0x16b8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x16e0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x1708
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x1730
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x1758
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x1780
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x17a8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x17d0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x17f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x1820
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x1848
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x1870
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x1898
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x18c0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x18e8
	FAnimNode_StateResult AnimGraphNode_StateResult_11; // 0x1910
	FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x1940
	FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x1970
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0x19a0
	FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x1a20
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0x1a50
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6; // 0x1ad0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x1b70
	FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x1bf0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x1c20
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x1ca0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x1cd0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x1d50
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2; // 0x1dd0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x1e98
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1f60
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x2048
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x2078
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x20f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x2128
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x21a8
	FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer_2; // 0x21d8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; // 0x2250
	FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer; // 0x22f0
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x2368
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x2398
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2418
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x2448
	FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer_2; // 0x24f8
	FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer; // 0x25a8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2658
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x26a0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x2740
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x2898
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x2938
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x2960
	FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x2a00
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x2bd8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x2c58
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x2d18
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x2dd8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x2e00
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x2e80
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2ea8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x2f28
	float Speed; // 0x2fc8
	TArray<FDragonData_FootData> FootIKInfo; // 0x2fd0
	bool IsStand; // 0x2fe0
	bool IsRest; // 0x2fe1
	bool IsDead; // 0x2fe2
	int32_t Random4LegWalkAttackIndex; // 0x2fe4
	int32_t Random2LegAttackIndex; // 0x2fe8
	int32_t Random4LegAttackIndex; // 0x2fec
	FVector CurrWorldLocationForLookAt; // 0x2ff0
	bool CanFootIK; // 0x2ffc
	bool CanLookAt; // 0x2ffd
	AActor* TargetActor; // 0x3000
	bool ServerDead; // 0x3008
	float NewRotationYaw; // 0x300c
};

struct UDialogueVoice : UObject {
	EGrammaticalGender Gender; // 0x28
	EGrammaticalNumber Plurality; // 0x29
	FGuid LocalizationGUID; // 0x2c
};

struct UPostEventAsync : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate Completed; // 0x30
};

struct UCloudWatchDescribeInsightRules : UAwsCloudWatchAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UAPB_IFO_AR_Dustin_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x340
};

struct UCallbackProxyQueryWorkshopForAllItems : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
	FMulticastInlineDelegate OnSteamInitFailure; // 0x50
};

struct UParticleModuleLocationWorldOffset_Seeded : UParticleModuleLocationWorldOffset {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct UScrollBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FScrollBoxStyle ScrollBoxStyle; // 0x30
};

struct UEnvQueryTest_GameplayTags : UEnvQueryTest {
	FGameplayTagQuery TagQueryToMatch; // 0x1f8
	bool bUpdatedToUseQuery; // 0x240
	EGameplayContainerMatchType TagsToMatch; // 0x241
	FGameplayTagContainer GameplayTags; // 0x248
};

struct UDatasmithLandscapeTemplate : UDatasmithObjectTemplate {
	UMaterialInterface* LandscapeMaterial; // 0x30
	int32_t StaticLightingLOD; // 0x38
};

struct UTireConfig : UDataAsset {
	float FrictionScale; // 0x30
	TArray<FTireConfigMaterialFriction> TireFrictionScales; // 0x38
};

struct UInterpTrackVectorBase : UInterpTrack {
	FInterpCurveVector VectorTrack; // 0x70
	float CurveTension; // 0x88
};

struct UFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UBTTask_CheckJuggernautSpawner_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	float FarLimit; // 0xb0
	FBlackboardKeySelector SpawnPoint; // 0xb8
	FBlackboardKeySelector IsReturnToSpawnPoint; // 0xe0
	FBlackboardKeySelector IsMeleeAttack; // 0x108
	FBlackboardKeySelector IsRangeAttack; // 0x130
	FBlackboardKeySelector IsRangeAttackOther; // 0x158
	FBlackboardKeySelector IsWalkingAttack; // 0x180
	FBlackboardKeySelector Aggro; // 0x1a8
	FBlackboardKeySelector IsSelectAttackType; // 0x1d0
	FBlackboardKeySelector TargetActor; // 0x1f8
	FBlackboardKeySelector FarDistanceTarget; // 0x220
};

struct ADatasmithImportedSequencesActor : AActor {
	TArray<ULevelSequence*> ImportedSequences; // 0x220
};

struct ACameraShakeSourceActor : AActor {
	UCameraShakeSourceComponent* CameraShakeSourceComponent; // 0x220
};

struct UBTDecorator_SetTagCooldown : UBTDecorator {
	FGameplayTag CooldownTag; // 0x68
	float CooldownDuration; // 0x70
	bool bAddToExistingDuration; // 0x74
};

struct UCompressedImageSequenceProtocol : UImageSequenceProtocol {
	int32_t CompressionQuality; // 0xd8
};

struct UWBP_Main_RadiogramListing_M_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_Group; // 0x268
	UImage* Image_53; // 0x270
	UImage* Image_Bar; // 0x278
	UImage* Image_Bar_2; // 0x280
	UTextBlock* TextBlock_96; // 0x288
	UVerticalBox* VerticalBox_List_Small; // 0x290
	UWBP_UI_ListingHovering_C* WBP_UI_ListingHovering; // 0x298
	UObjectiveSystemManagerComponent_C* ObjectiveSystemComponent; // 0x2a0
	bool IsMinimum; // 0x2a8
	int32_t GroupID; // 0x2ac
	UWBP_Main_Radiogram_C* RadiogramMenu; // 0x2b0
	FText MediumCategory; // 0x2b8
	UWBP_Main_RadiogramListing_L_C* MainRadiogram_MainCategory; // 0x2d0
	bool IsVertical; // 0x2d8
	TMap<FString, UWBP_Main_Radiogram_TreeListing_M_C*> SubCategoryMap; // 0x2e0
	FString MediumCategoryKey; // 0x330
	TMap<int32_t, UWBP_Main_Radiogram_TreeListing_S_C*> RadiogramHorizonListing; // 0x340
	FLinearColor GroupColor; // 0x390
	bool bHovered; // 0x3a0
	UWBP_Main_Radiogram_Description_C* Radiogram Desc; // 0x3a8
};

struct USpinBox : UWidget {
	float Value; // 0x108
	FDelegate ValueDelegate; // 0x10c
	FSpinBoxStyle WidgetStyle; // 0x120
	USlateWidgetStyleAsset* Style; // 0x408
	int32_t MinFractionalDigits; // 0x410
	int32_t MaxFractionalDigits; // 0x414
	bool bAlwaysUsesDeltaSnap; // 0x418
	float Delta; // 0x41c
	float SliderExponent; // 0x420
	FSlateFontInfo Font; // 0x428
	ETextJustify Justification; // 0x480
	float MinDesiredWidth; // 0x484
	bool ClearKeyboardFocusOnCommit; // 0x488
	bool SelectAllTextOnCommit; // 0x489
	FSlateColor ForegroundColor; // 0x490
	FMulticastInlineDelegate OnValueChanged; // 0x4b8
	FMulticastInlineDelegate OnValueCommitted; // 0x4c8
	FMulticastInlineDelegate OnBeginSliderMovement; // 0x4d8
	FMulticastInlineDelegate OnEndSliderMovement; // 0x4e8
	char bOverride_MinValue : 1; // 0x4f8
	char bOverride_MaxValue : 1; // 0x4f8
	char bOverride_MinSliderValue : 1; // 0x4f8
	char bOverride_MaxSliderValue : 1; // 0x4f8
	float MinValue; // 0x4fc
	float MaxValue; // 0x500
	float MinSliderValue; // 0x504
	float MaxSliderValue; // 0x508
};

struct UBP_VaultComponent_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	ACharacter* Character; // 0xb8
	bool bIsVaulting; // 0xc0
	float TraceDistance; // 0xc4
	EDrawDebugTrace DrawDebug; // 0xc8
	TMap<E_VaultType, FVector> AnimLocOffset; // 0xd0
	TMap<E_VaultType, UAnimMontage*> VaultAnimMontage; // 0x120
	float StartLocCheckDistance; // 0x170
	TMap<E_VaultType, FS_FloatRange> DistanceMinMaxByVaultType; // 0x178
	TMap<E_VaultType, FS_FloatRange> HeightMinMaxByVaultType; // 0x1c8
	TMap<E_VaultType, float> CheckDestDistance; // 0x218
	TMap<E_VaultType, UAnimMontage*> FP_VaultAnimMontage; // 0x268
	TMap<E_VaultType, UAnimMontage*> FP_VaultAnimMontage_Holdable; // 0x2b8
	TMap<E_VaultType, float> DestCheckDistance; // 0x308
	bool NeedCrouch; // 0x358
};

struct UTcpMessagingSettings : UObject {
	bool EnableTransport; // 0x28
	FString ListenEndpoint; // 0x30
	TArray<FString> ConnectToEndpoints; // 0x40
	int32_t ConnectionRetryDelay; // 0x50
	bool bStopServiceWhenAppDeactivates; // 0x54
};

struct UAnimNotify_PlayParticleEffect : UAnimNotify {
	UParticleSystem* PSTemplate; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	FVector Scale; // 0x58
	char Attached : 1; // 0x80
	FName SocketName; // 0x84
};

struct UWrapBox : UPanelWidget {
	FVector2D InnerSlotPadding; // 0x120
	float WrapWidth; // 0x128
	float WrapSize; // 0x12c
	bool bExplicitWrapWidth; // 0x130
	bool bExplicitWrapSize; // 0x131
	EOrientation Orientation; // 0x132
};

struct UAREnvironmentCaptureProbeTexture : UTextureCube {
	EARTextureType TextureType; // 0x130
	float Timestamp; // 0x134
	FGuid ExternalTextureGuid; // 0x138
	FVector2D Size; // 0x148
};

struct UGameDataManager : UObject {
	FString JsonString; // 0x28
	UDataTable* ItemGeneralDataTable; // 0x38
	UDataTable* ConsumableGeneralDataTable; // 0x40
	UDataTable* HoldableGeneralDataTable; // 0x48
	UDataTable* EquipmentGeneralDataTable; // 0x50
	UDataTable* MeleeWeaponDataTable; // 0x58
	UDataTable* RangeWeaponDataTable; // 0x60
	UDataTable* NewRangeWeaponDataTable; // 0x68
};

struct UStreamMediaSource : UBaseMediaSource {
	FString StreamUrl; // 0x88
};

struct UFAI_BTTask_SpecialAttackStateRandomly_C : UFAI_BTTask_SpecialAttackState_C {
	int32_t MaxIndex; // 0x110
	int32_t MinIndex; // 0x114
};

struct UMaterialExpressionCosine : UMaterialExpression {
	FExpressionInput Input; // 0x40
	float Period; // 0x54
};

struct UBTTask_SetTagCooldown : UBTTaskNode {
	FGameplayTag CooldownTag; // 0x70
	bool bAddToExistingDuration; // 0x78
	float CooldownDuration; // 0x7c
};

struct UBoundsCopyComponent : UActorComponent {
	TSoftObjectPtr<AActor> BoundsSourceActor; // 0xb0
	bool bUseCollidingComponentsForSourceBounds; // 0xd8
	bool bKeepOwnBoundsScale; // 0xd9
	bool bUseCollidingComponentsForOwnBounds; // 0xda
	FTransform PostTransform; // 0xe0
	bool bCopyXBounds; // 0x110
	bool bCopyYBounds; // 0x111
	bool bCopyZBounds; // 0x112
};

struct USizeBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
};

struct UDirectionalLightComponent : ULightComponent {
	float ShadowCascadeBiasDistribution; // 0x328
	char bEnableLightShaftOcclusion : 1; // 0x32c
	float OcclusionMaskDarkness; // 0x330
	float OcclusionDepthRange; // 0x334
	FVector LightShaftOverrideDirection; // 0x338
	float WholeSceneDynamicShadowRadius; // 0x344
	float DynamicShadowDistanceMovableLight; // 0x348
	float DynamicShadowDistanceStationaryLight; // 0x34c
	int32_t DynamicShadowCascades; // 0x350
	float CascadeDistributionExponent; // 0x354
	float CascadeTransitionFraction; // 0x358
	float ShadowDistanceFadeoutFraction; // 0x35c
	char bUseInsetShadowsForMovableObjects : 1; // 0x360
	int32_t FarShadowCascadeCount; // 0x364
	float FarShadowDistance; // 0x368
	float DistanceFieldShadowDistance; // 0x36c
	float LightSourceAngle; // 0x370
	float LightSourceSoftAngle; // 0x374
	float ShadowSourceAngleFactor; // 0x378
	float TraceDistance; // 0x37c
	char bUsedAsAtmosphereSunLight : 1; // 0x380
	int32_t AtmosphereSunLightIndex; // 0x384
	FLinearColor AtmosphereSunDiskColorScale; // 0x388
	char bPerPixelAtmosphereTransmittance : 1; // 0x398
	char bCastShadowsOnClouds : 1; // 0x398
	char bCastShadowsOnAtmosphere : 1; // 0x398
	char bCastCloudShadows : 1; // 0x398
	float CloudShadowStrength; // 0x39c
	float CloudShadowOnAtmosphereStrength; // 0x3a0
	float CloudShadowOnSurfaceStrength; // 0x3a4
	float CloudShadowDepthBias; // 0x3a8
	float CloudShadowExtent; // 0x3ac
	float CloudShadowMapResolutionScale; // 0x3b0
	float CloudShadowRaySampleCountScale; // 0x3b4
	FLinearColor CloudScatteredLuminanceScale; // 0x3b8
	FLightmassDirectionalLightSettings LightmassSettings; // 0x3c8
	char bCastModulatedShadows : 1; // 0x3d8
	FColor ModulatedShadowColor; // 0x3dc
	float ShadowAmount; // 0x3e0
};

struct UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> CameraShakeSections; // 0x80
};

struct URMHttpRequest_Get_Client_Info : URMHttpRequestBase {
	FMulticastInlineDelegate OnSuccess; // 0x48
	FMulticastInlineDelegate OnFailure; // 0x58
};

struct ULoudnessNRT : UAudioSynesthesiaNRT {
	ULoudnessNRTSettings* Settings; // 0x78
};

struct UGeometryCollection : UObject {
	TArray<FGeometryCollectionSource> GeometrySource; // 0x30
	TArray<UMaterialInterface*> Materials; // 0x40
	ECollisionTypeEnum CollisionType; // 0x50
	EImplicitTypeEnum ImplicitType; // 0x51
	int32_t MinLevelSetResolution; // 0x54
	int32_t MaxLevelSetResolution; // 0x58
	int32_t MinClusterLevelSetResolution; // 0x5c
	int32_t MaxClusterLevelSetResolution; // 0x60
	float CollisionObjectReductionPercentage; // 0x64
	bool bMassAsDensity; // 0x68
	float Mass; // 0x6c
	float MinimumMassClamp; // 0x70
	float CollisionParticlesFraction; // 0x74
	int32_t MaximumCollisionParticles; // 0x78
	TArray<FGeometryCollectionSizeSpecificData> SizeSpecificData; // 0x80
	bool EnableRemovePiecesOnFracture; // 0x90
	TArray<UMaterialInterface*> RemoveOnFractureMaterials; // 0x98
	FGuid PersistentGuid; // 0xa8
	FGuid StateGuid; // 0xb8
	int32_t BoneSelectedMaterialIndex; // 0xc8
};

struct USynthSamplePlayer : USynthComponent {
	USoundWave* SoundWave; // 0x6c0
	FMulticastInlineDelegate OnSampleLoaded; // 0x6c8
	FMulticastInlineDelegate OnSamplePlaybackProgress; // 0x6d8
};

struct UPoseAsset : UAnimationAsset {
	FPoseDataContainer PoseContainer; // 0x80
	bool bAdditivePose; // 0x110
	int32_t BasePoseIndex; // 0x114
	FName RetargetSource; // 0x118
};

struct UWBP_HUD_Resource_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Open; // 0x268
	UHorizontalBox* HorizontalBox_Resource; // 0x270
	UInvalidationBox* InvalidationBox_1; // 0x278
	UBP_PlayerInventoryComponent_C* Player Inventory Component; // 0x280
	AActor* TargetedActor; // 0x288
	UBP_PlayerBuildingComponent_C* Player Building Component; // 0x290
	FText TempBuildName; // 0x298
	FText CurrentBuildName; // 0x2b0
	ESlateVisibility WidgetVisibility; // 0x2c8
	TArray<FItemCodeValue> ResourceArray; // 0x2d0
	ABP_BuildPartBase_C* As BP Build Part Base; // 0x2e0
};

struct UWBP_Main_QueueListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* CraftingCount; // 0x268
	UImage* CraftingListingImage; // 0x270
	UImage* Image_64; // 0x278
	UOverlay* Overlay_HUD; // 0x280
	UProgressBar* ProgressBar_61; // 0x288
	FS_CraftingSlot Crafting Queue; // 0x290
	float Timer; // 0x2e0
	UBP_PlayerInventoryComponent_C* Inventory Component; // 0x2e8
	bool bHUD; // 0x2f0
};

struct UNiagaraDataInterfaceVector2DCurve : UNiagaraDataInterfaceCurveBase {
	FRichCurve XCurve; // 0x70
	FRichCurve YCurve; // 0xf0
};

struct UEdGraphPin_Deprecated : UObject {
	FString PinName; // 0x28
	FString PinToolTip; // 0x38
	EEdGraphPinDirection Direction; // 0x48
	FEdGraphPinType PinType; // 0x50
	FString DefaultValue; // 0xa8
	FString AutogeneratedDefaultValue; // 0xb8
	UObject* DefaultObject; // 0xc8
	FText DefaultTextValue; // 0xd0
	TArray<UEdGraphPin_Deprecated*> LinkedTo; // 0xe8
	TArray<UEdGraphPin_Deprecated*> SubPins; // 0xf8
	UEdGraphPin_Deprecated* ParentPin; // 0x108
	UEdGraphPin_Deprecated* ReferencePassThroughConnection; // 0x110
};

struct UBTDecorator_TimeLimit : UBTDecorator {
	float TimeLimit; // 0x68
};

struct UGameInstance : UObject {
	TArray<ULocalPlayer*> LocalPlayers; // 0x38
	UOnlineSession* OnlineSession; // 0x48
	TArray<UObject*> ReferencedObjects; // 0x50
	FMulticastInlineDelegate OnPawnControllerChangedDelegates; // 0x78
};

struct UNavCollision : UNavCollisionBase {
	TArray<FNavCollisionCylinder> CylinderCollision; // 0x80
	TArray<FNavCollisionBox> BoxCollision; // 0x90
	UNavArea* AreaClass; // 0xa0
	char bGatherConvexGeometry : 1; // 0xa8
	char bCreateOnClient : 1; // 0xa8
};

struct UGizmoLocalVec2ParameterSource : UGizmoBaseVec2ParameterSource {
	FVector2D Value; // 0x48
	FGizmoVec2ParameterChange LastChange; // 0x50
};

struct ULightMapVirtualTexture2D : UTexture2D {
	TArray<int8_t> TypeToLayer; // 0x100
};

struct ABP_LandmarkManager_C : ALandmarkManager {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290
	USceneComponent* DefaultSceneRoot; // 0x298
	int32_t AcculumatedOccupation; // 0x2a0
	FFloatValueFromDataTable World_Lifetime; // 0x2a8
	FFloatValueFromDataTable World_MinLifetime; // 0x2d0
	FFloatValueFromDataTable World_FinalCountdownTime; // 0x2f8
	float EndTime; // 0x320
	bool PrepareEnd; // 0x324
	FFloatValueFromDataTable GameTimeMultiflyByConfig; // 0x328
	TMap<float, bool> EndNotiTiming; // 0x350
	bool IsWorldCollapsed; // 0x3a0
	TSet<ABP_LandmarkEffectRangeActor_C*> LandmarkEffects; // 0x3a8
	FMulticastInlineDelegate OnPrepareEnd; // 0x3f8
	float CurrentEndTime; // 0x408
	FFloatValueFromDataTable GameStartTime; // 0x410
};

struct UBTDecorator_IsFalling_C : UBTDecorator_BlueprintBase {
	bool HaveToFalling; // 0xa0
};

struct UPaperTerrainMaterial : UDataAsset {
	TArray<FPaperTerrainMaterialRule> Rules; // 0x30
	UPaperSprite* InteriorFill; // 0x40
};

struct UHierarchicalLODSetup : UObject {
	TArray<FHierarchicalSimplification> HierarchicalLODSetup; // 0x28
	TSoftObjectPtr<UMaterialInterface> OverrideBaseMaterial; // 0x38
};

struct AStaticMeshActor : AActor {
	UStaticMeshComponent* StaticMeshComponent; // 0x220
	bool bStaticMeshReplicateMovement; // 0x228
	ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x229
};

struct USoundSubmixWithParentBase : USoundSubmixBase {
	USoundSubmixBase* ParentSubmix; // 0x38
};

struct UMagicLeapPlanesComponent : USceneComponent {
	TArray<EMagicLeapPlaneQueryFlags> QueryFlags; // 0x1f8
	UBoxComponent* SearchVolume; // 0x208
	int32_t MaxResults; // 0x210
	float MinHolePerimeter; // 0x214
	float MinPlaneArea; // 0x218
	EMagicLeapPlaneQueryType queryType; // 0x21c
	float SimilarityThreshold; // 0x220
	FMulticastInlineDelegate OnPlanesQueryResult; // 0x228
	FMulticastInlineDelegate OnPersistentPlanesQueryResult; // 0x238
};

struct UMovieSceneCameraCutSection : UMovieSceneSection {
	bool bLockPreviousCamera; // 0xf0
	FGuid CameraGuid; // 0xf4
	FMovieSceneObjectBindingID CameraBindingID; // 0x104
	FTransform InitialCameraCutTransform; // 0x120
	bool bHasInitialCameraCutTransform; // 0x150
};

struct UAkComponent : UAkGameObject {
	bool bUseSpatialAudio; // 0x218
	ECollisionChannel OcclusionCollisionChannel; // 0x220
	char EnableSpotReflectors : 1; // 0x224
	float OuterRadius; // 0x228
	float InnerRadius; // 0x22c
	UAkAuxBus* EarlyReflectionAuxBus; // 0x230
	FString EarlyReflectionAuxBusName; // 0x238
	int32_t EarlyReflectionOrder; // 0x248
	float EarlyReflectionBusSendGain; // 0x24c
	float EarlyReflectionMaxPathLength; // 0x250
	float roomReverbAuxBusGain; // 0x254
	int32_t diffractionMaxEdges; // 0x258
	int32_t diffractionMaxPaths; // 0x25c
	float diffractionMaxPathLength; // 0x260
	char DrawFirstOrderReflections : 1; // 0x264
	char DrawSecondOrderReflections : 1; // 0x264
	char DrawHigherOrderReflections : 1; // 0x264
	char DrawDiffraction : 1; // 0x264
	bool StopWhenOwnerDestroyed; // 0x268
	float AttenuationScalingFactor; // 0x26c
	float OcclusionRefreshInterval; // 0x270
	bool bUseReverbVolumes; // 0x274
};

struct ALevelStreamingVolume : AVolume {
	TArray<FName> StreamingLevelNames; // 0x258
	char bEditorPreVisOnly : 1; // 0x268
	char bDisabled : 1; // 0x268
	EStreamingVolumeUsage StreamingUsage; // 0x26c
};

struct UTextureRenderTargetVolume : UTextureRenderTarget {
	int32_t SizeX; // 0xe0
	int32_t SizeY; // 0xe4
	int32_t SizeZ; // 0xe8
	FLinearColor ClearColor; // 0xec
	EPixelFormat OverrideFormat; // 0xfc
	char bHDR : 1; // 0xfd
	char bForceLinearGamma : 1; // 0xfd
};

struct UInAppPurchaseCallbackProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UDatasmithSkyLightComponentTemplate : UDatasmithObjectTemplate {
	ESkyLightSourceType SourceType; // 0x30
	int32_t CubemapResolution; // 0x34
	UTextureCube* Cubemap; // 0x38
};

struct UBTTask_SetIgnoreNearPlayer_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	bool bForceMove; // 0xb0
	bool NeedSucces; // 0xb1
};

struct USurvivalWebsocketConnectionBase : UObject {
	USurvivalWebsocketConnectorBase* Connector; // 0x28
	USurvivalOutgameSubsystem* OutgameSubsystem; // 0x30
	FString SessionKey; // 0x38
};

struct UMenuAnchor : UContentWidget {
	UUserWidget* MenuClass; // 0x120
	FDelegate OnGetMenuContentEvent; // 0x128
	FDelegate OnGetUserMenuContentEvent; // 0x138
	EMenuPlacement Placement; // 0x148
	bool bFitInWindow; // 0x149
	bool ShouldDeferPaintingAfterWindowContent; // 0x14a
	bool UseApplicationMenuStack; // 0x14b
	FMulticastInlineDelegate OnMenuOpenChanged; // 0x150
};

struct UBTService_DetactingTarget_C : UBTService_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x98
	AAIController* OwnerController; // 0xa0
	APawn* ControlledPawn; // 0xa8
	FBlackboardKeySelector TargetActor; // 0xb0
};

struct UAITask_MoveTo : UAITask {
	FMulticastInlineDelegate OnRequestFailed; // 0x70
	FMulticastInlineDelegate OnMoveFinished; // 0x80
	FAIMoveRequest MoveRequest; // 0x90
};

struct UBP_Timer_C : UBP_SkillActionTaskBase_C {
	FTimerHandle Timer; // 0xc8
};

struct UABP_Smite_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2f8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x378
};

struct UVirtualTextureBuilder : UObject {
	UVirtualTexture2D* Texture; // 0x28
	uint64_t BuildHash; // 0x30
};

struct UFlare_Disc_SK_Skeleton_AnimBlueprint_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x2f8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x398
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x438
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x4b8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x538
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x5d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x658
	bool IsThrown; // 0x6d8
	bool IsOpen; // 0x6d9
	bool IsAimPressed; // 0x6da
	ABP_FlareDisc_C* Flare Disc; // 0x6e0
	ABP_FlareDisc_C* As BP Flare Disc; // 0x6e8
};

struct UParticleModuleSubUVMovie : UParticleModuleSubUV {
	char bUseEmitterTime : 1; // 0x70
	FRawDistributionFloat FrameRate; // 0x78
	int32_t StartingFrame; // 0xa8
};

struct ASpectatorBeaconClient : AOnlineBeaconClient {
	FString DestSessionId; // 0x2e0
	FSpectatorReservation PendingReservation; // 0x2f0
	ESpectatorClientRequestType RequestType; // 0x368
	bool bPendingReservationSent; // 0x369
	bool bCancelReservation; // 0x36a
};

struct UWBP_MapMarkerTooltip_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Open; // 0x268
	UTextBlock* HoverName; // 0x270
	UImage* Image_157; // 0x278
	UImage* Image_161; // 0x280
	UImage* Image_283; // 0x288
	UTextBlock* Text_Distance; // 0x290
	UTextBlock* Text_Seconds; // 0x298
	UTextBlock* Text_State; // 0x2a0
	UTextBlock* Text_Time; // 0x2a8
	FText Name; // 0x2b0
	float LeftTime; // 0x2c8
	FText State; // 0x2d0
	bool bEnable; // 0x2e8
	FVector TargetLocation; // 0x2ec
	FVector DeadLocation; // 0x2f8
};

struct ULevelCapture : UMovieSceneCapture {
	bool bAutoStartCapture; // 0x220
	FGuid PrerequisiteActorId; // 0x22c
};

struct UFoliageInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent {
	FMulticastInlineDelegate OnInstanceTakePointDamage; // 0x668
	FMulticastInlineDelegate OnInstanceTakeRadialDamage; // 0x678
	FGuid GenerationGuid; // 0x688
};

struct UEngineMessage : ULocalMessage {
	FString FailedPlaceMessage; // 0x28
	FString MaxedOutMessage; // 0x38
	FString EnteredMessage; // 0x48
	FString LeftMessage; // 0x58
	FString GlobalNameChange; // 0x68
	FString SpecEnteredMessage; // 0x78
	FString NewPlayerMessage; // 0x88
	FString NewSpecMessage; // 0x98
};

struct UWBP_Objective_Indicator_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image_Icon; // 0x268
	UImage* Image_Voice; // 0x270
	UOverlay* Overlay_1; // 0x278
	UCanvasPanel* Panel_Direction; // 0x280
	UTextBlock* Text_Distance; // 0x288
	UTextBlock* Text_Nickname; // 0x290
	UWidgetSwitcher* WidgetSwitcher_Type; // 0x298
};

struct UBoneMaskFilter : UObject {
	TArray<FInputBlendPose> BlendPoses; // 0x28
};

struct ABP_WorldMapPivot_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UBillboardComponent* RightBottom; // 0x228
	UBillboardComponent* LeftTop; // 0x230
	USceneComponent* DefaultSceneRoot; // 0x238
	FVector2D WorldSize; // 0x240
};

struct UWBP_RadiogramObjectiveListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_ObjectSlot; // 0x268
	UHorizontalBox* HorizontalBox_22; // 0x270
	UImage* Image_106; // 0x278
	UImage* Image_Icon; // 0x280
	UWidgetSwitcher* Switch; // 0x288
	UWBP_ObjectiveCheckbox_C* WBP_HUD_ObjectDoSomething; // 0x290
	FS_RadiogramUnlockCondition Unlock Condition; // 0x298
};

struct UMaterialExpressionLinearInterpolate : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	FExpressionInput Alpha; // 0x68
	float ConstA; // 0x7c
	float ConstB; // 0x80
	float ConstAlpha; // 0x84
};

struct AController : AActor {
	APlayerState* PlayerState; // 0x228
	FMulticastInlineDelegate OnInstigatedAnyDamage; // 0x238
	FName StateName; // 0x248
	APawn* Pawn; // 0x250
	ACharacter* Character; // 0x260
	USceneComponent* TransformComponent; // 0x268
	FRotator ControlRotation; // 0x288
	char bAttachToPawn : 1; // 0x294
};

struct UMovieSceneSubTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
};

struct UIntSerialization : UObject {
	uint16_t UnsignedInt16Variable; // 0x28
	uint32_t UnsignedInt32Variable; // 0x2c
	uint64_t UnsignedInt64Variable; // 0x30
	int8_t SignedInt8Variable; // 0x38
	int16_t SignedInt16Variable; // 0x3a
	int64_t SignedInt64Variable; // 0x40
	char UnsignedInt8Variable; // 0x48
	int32_t SignedInt32Variable; // 0x4c
};

struct APostProcessVolume : AVolume {
	FPostProcessSettings Settings; // 0x260
	float Priority; // 0x7b0
	float BlendRadius; // 0x7b4
	float BlendWeight; // 0x7b8
	char bEnabled : 1; // 0x7bc
	char bUnbound : 1; // 0x7bc
};

struct UEnvQueryGenerator_Composite : UEnvQueryGenerator {
	TArray<UEnvQueryGenerator*> Generators; // 0x50
	char bAllowDifferentItemTypes : 1; // 0x60
	char bHasMatchingItemType : 1; // 0x60
	UEnvQueryItemType* ForcedItemType; // 0x68
};

struct UCloudWatchLogsPutDestinationPolicy : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct USQSGetQueueUrl : UAwsSQSAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UMotoSynthPreset : UObject {
	FMotoSynthRuntimeSettings Settings; // 0x28
};

struct UNiagaraDataInterface2DArrayTexture : UNiagaraDataInterface {
	UTexture2DArray* Texture; // 0x38
};

struct UGizmoPlaneScaleParameterSource : UGizmoBaseVec2ParameterSource {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90
	TScriptInterface<IGizmoTransformSource> TransformSource; // 0xa0
	float ScaleMultiplier; // 0xb0
	FVector2D Parameter; // 0xb4
	FGizmoVec2ParameterChange LastChange; // 0xbc
	FVector CurScaleOrigin; // 0xcc
	FVector CurScaleNormal; // 0xd8
	FVector CurScaleAxisX; // 0xe4
	FVector CurScaleAxisY; // 0xf0
	FTransform InitialTransform; // 0x100
};

struct ASurvivalVehicle : APawn {
	USkeletalMeshComponent* SkeletalMesh; // 0x280
	USurvivalVehicleMovementComponent4W* VehicleMovementComponent; // 0x288
	USurvivalVehicleSyncComponent* VehicleSyncComponent; // 0x290
	UVehicleWheel* VehicleWheelFL; // 0x298
	UVehicleWheel* VehicleWheelFR; // 0x2a0
	UVehicleWheel* VehicleWheelBL; // 0x2a8
	UVehicleWheel* VehicleWheelBR; // 0x2b0
	UVehicleAKData* Audio_AKData; // 0x2b8
	UVehicleWheelData* WheelSetup; // 0x2c0
	UVehicleDustData* Particle_DustType; // 0x2c8
	UVehicleImpactData* Particle_ImpactType; // 0x2d0
	UVehicleSkidData* Particle_SkidType; // 0x2d8
	UVehicleBurstData* Particle_BurstType; // 0x2e0
	USceneComponent* CenterPosition; // 0x2e8
	USpringArmComponent* SpringArm; // 0x2f0
	UCameraComponent* Camera; // 0x2f8
	UCameraComponent* FirstCamera; // 0x300
	UStaticMeshComponent* MeshComp_ImpactZone; // 0x308
	USceneComponent* RootAKComponent; // 0x310
	UAkComponent* AkEngineSound; // 0x318
	UAkSwitchValue* EngineRPM_GroundSwitch; // 0x320
	UAkSwitchValue* EngineRPM_AirSwitch; // 0x328
	UAkComponent* AkNotEnoughBatterySound; // 0x330
	UAkComponent* AkSkidSound; // 0x338
	UAkComponent* AkClaxonSound; // 0x340
	USceneComponent* RootWheel; // 0x348
	UBoxComponent* BoxComp_WheelFL; // 0x350
	UBoxComponent* BoxComp_WheelFR; // 0x358
	UBoxComponent* BoxComp_WheelBL; // 0x360
	UBoxComponent* BoxComp_WheelBR; // 0x368
	bool IsInitSpawn; // 0x370
	bool IsReadyToDestroy; // 0x371
	bool IsHover; // 0x372
	float MaxHoverHeight; // 0x374
	bool IsActivateVehicle; // 0x378
	FVector DestroyPhysicsLocation; // 0x37c
	FVector OldActorLocation; // 0x388
	FRotator OldActorRotation; // 0x394
	float FrameLimit_DestroyPhysicsLocation; // 0x3a0
	float FrameLimit_CorrectTransform; // 0x3a4
	float PreSimulRotationDampFactor; // 0x3a8
	int32_t MaxSeatNumber; // 0x3ac
	int32_t MaxHealth; // 0x3b0
	int32_t MaxHealth_Variable; // 0x3b4
	float MaxHealth_DecreaseTime; // 0x3b8
	int32_t MaxHealth_DecreaseValue; // 0x3bc
	int32_t Health; // 0x3c0
	int32_t MaxBattery; // 0x3c4
	int32_t Battery; // 0x3c8
	FVector CenterOfMass; // 0x3cc
	float MultiplyMass; // 0x3d8
	float BrakePower; // 0x3dc
	bool DrawExitLocation; // 0x3e0
	float ExitDistance_Side; // 0x3e4
	float ExitDistance_Back; // 0x3e8
	float ExitDistance_Up; // 0x3ec
	UPhysicsAsset* PhysicsAsset_None; // 0x3f0
	UPhysicsAsset* PhysicsAsset_All; // 0x3f8
	UPhysicsAsset* PhysicsAsset_Left; // 0x400
	UPhysicsAsset* PhysicsAsset_Right; // 0x408
	AActor* DamagedActor; // 0x410
	FHitResult DamagedHitResult; // 0x418
	float IgnoreDamageForTime; // 0x4a4
	float IgnoreDamageForSpeed; // 0x4a8
	float MultiplyDamageForWeapon; // 0x4ac
	float MultiplyDamageForSpeed; // 0x4b0
	float SpringArmPitchMin; // 0x4b4
	float SpringArmPitchMax; // 0x4b8
	float SpringArmPitchMoving; // 0x4bc
	float SpringArmYawSpeed; // 0x4c0
	float SpringArmPitchSpeed; // 0x4c4
	ASurvivalCharacterBase* CurrentDriver; // 0x4d0
	TMap<char, ASurvivalCharacterBase*> Map_Passenger; // 0x4d8
	bool IsBeginDestroyedPhysics; // 0x528
	bool IsActivePhysics; // 0x529
	bool BrakeRate; // 0x534
	float LateSpeedABS; // 0x56c
	float OceanHeight; // 0x570
	bool IsInWater; // 0x574
	bool IsInAir; // 0x5a0
	float RTPCValue_Air; // 0x5a4
	UPhysicalMaterial* PM_Water; // 0x5d0
	UParticleSystemComponent* DustPSC[0x4]; // 0x5d8
	UParticleSystemComponent* WaterPSC[0x4]; // 0x5f8
	UParticleSystemComponent* SkidPSC[0x4]; // 0x618
	FVector ServerLocation; // 0x694
	bool IsDestroyedVehicle; // 0x6a0
	bool IsDestroyedAccelerator; // 0x6a1
	bool IsDestroyedHandle; // 0x6a2
	bool IsDestroyedBrake; // 0x6a3
	bool IsDestroyedGear; // 0x6a4
	TArray<float> MovementTickIntervalsForSignificance; // 0x6a8
	TArray<int32_t> AnimationURO; // 0x6b8
};

struct ACullDistanceVolume : AVolume {
	TArray<FCullDistanceSizePair> CullDistances; // 0x258
	char bEnabled : 1; // 0x268
};

struct UBTTask_WaitBlackboardTime : UBTTask_Wait {
	FBlackboardKeySelector BlackboardKey; // 0x78
};

struct AWheeledVehicle : APawn {
	USkeletalMeshComponent* Mesh; // 0x280
	UWheeledVehicleMovementComponent* VehicleMovement; // 0x288
};

struct UAsyncActionLoadPrimaryAsset : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78
};

struct USubmixEffectConvolutionReverbPreset : USoundEffectSubmixPreset {
	UAudioImpulseResponse* ImpulseResponse; // 0x68
	FSubmixEffectConvolutionReverbSettings Settings; // 0x70
	ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0x98
	bool bEnableHardwareAcceleration; // 0x99
};

struct UProgressWidgetStyle : USlateWidgetStyleContainerBase {
	FProgressBarStyle ProgressBarStyle; // 0x30
};

struct UWBP_Radiogram_6010219_C : UWBP_radiogram_CustomBase_C {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x298
	UTextBlock* TextBlock; // 0x2a0
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x2a8
	UWBP_RadiogramListing_C* WBP_RadiogramListing_2; // 0x2b0
};

struct UWBP_PopUp_Button_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* Button; // 0x268
	UTextBlock* Text; // 0x270
	FText In Text; // 0x278
	FMulticastInlineDelegate OnButtonClick; // 0x290
};

struct UMapDrag_C : UDragDropOperation {
	FPointerToUberGraphFrame UberGraphFrame; // 0x88
};

struct ULightComponent : ULightComponentBase {
	float Temperature; // 0x228
	float MaxDrawDistance; // 0x22c
	float MaxDistanceFadeRange; // 0x230
	char bUseTemperature : 1; // 0x234
	int32_t ShadowMapChannel; // 0x238
	float MinRoughness; // 0x240
	float SpecularScale; // 0x244
	float ShadowResolutionScale; // 0x248
	float ShadowBias; // 0x24c
	float ShadowSlopeBias; // 0x250
	float ShadowSharpen; // 0x254
	float ContactShadowLength; // 0x258
	char ContactShadowLengthInWS : 1; // 0x25c
	char InverseSquaredFalloff : 1; // 0x25c
	char CastTranslucentShadows : 1; // 0x25c
	char bCastShadowsFromCinematicObjectsOnly : 1; // 0x25c
	char bAffectDynamicIndirectLighting : 1; // 0x25c
	char bForceCachedShadowsForMovablePrimitives : 1; // 0x25c
	FLightingChannels LightingChannels; // 0x260
	UMaterialInterface* LightFunctionMaterial; // 0x268
	FVector LightFunctionScale; // 0x270
	UTextureLightProfile* IESTexture; // 0x280
	char bUseIESBrightness : 1; // 0x288
	float IESBrightnessScale; // 0x28c
	float LightFunctionFadeDistance; // 0x290
	float DisabledBrightness; // 0x294
	char bEnableLightShaftBloom : 1; // 0x298
	float BloomScale; // 0x29c
	float BloomThreshold; // 0x2a0
	float BloomMaxBrightness; // 0x2a4
	FColor BloomTint; // 0x2a8
	bool bUseRayTracedDistanceFieldShadows; // 0x2ac
	float RayStartOffsetDepthScale; // 0x2b0
};

struct UVectorField : UObject {
	FBox Bounds; // 0x28
	float Intensity; // 0x44
};

struct UParticleModuleLocationEmitterDirect : UParticleModuleLocationBase {
	FName EmitterName; // 0x30
};

struct UBTService_RunEQS : UBTService_BlackboardBase {
	FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x98
};

struct UGranularSynth : USynthComponent {
	USoundWave* GranulatedSoundWave; // 0x6c0
};

struct UFoliageType_InstancedStaticMesh : UFoliageType {
	UStaticMesh* Mesh; // 0x3a8
	TArray<UMaterialInterface*> OverrideMaterials; // 0x3b0
	UFoliageInstancedStaticMeshComponent* ComponentClass; // 0x3c0
};

struct UMaterialInstanceConstant : UMaterialInstance {
	UPhysicalMaterialMask* PhysMaterialMask; // 0x360
};

struct UWBP_AdminUserManagement_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* Button_2; // 0x268
	UButton* Button_11; // 0x270
	UButton* Button_101; // 0x278
	UButton* Button_Get; // 0x280
	UButton* Button_Get_2; // 0x288
	UButton* DeleteUserInfo; // 0x290
	UEditableTextBox* EditableTextBox_Amount; // 0x298
	UEditableTextBox* EditableTextBox_Name; // 0x2a0
	UButton* Follow; // 0x2a8
	UButton* RefreshUserList; // 0x2b0
	UEditableTextBox* SelectUID; // 0x2b8
	UButton* Summon; // 0x2c0
	UVerticalBox* VerticalBox_UserList; // 0x2c8
	int32_t AddedMin; // 0x2d0
	FString UID; // 0x2d8
	UWBP_AdminConsole_UserListing_C* CurrentSeletedItem; // 0x2e8
	TArray<FS_UserUIDWithNick> User Array; // 0x2f0
	FString Searching; // 0x300
};

struct UPawnNoiseEmitterComponent : UActorComponent {
	char bAIPerceptionSystemCompatibilityMode : 1; // 0xb0
	FVector LastRemoteNoisePosition; // 0xb4
	float NoiseLifetime; // 0xc0
	float LastRemoteNoiseVolume; // 0xc4
	float LastRemoteNoiseTime; // 0xc8
	float LastLocalNoiseVolume; // 0xcc
	float LastLocalNoiseTime; // 0xd0
};

struct UCloudWatchUntagResource : UAwsCloudWatchAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UCommonAI_BTTask_LookTargetByAttackIndex_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	FBlackboardKeySelector KEYTargetActorOrLocation; // 0xb0
	bool Reset; // 0xd8
	FVector TargetLocation; // 0xdc
	bool NeedLookAtTarget; // 0xe8
	float DotValue; // 0xec
	AAIController* OwnerController; // 0xf0
	APawn* ControlledPawn; // 0xf8
	bool DoWaitForLook; // 0x100
};

struct UInputComponent : UActorComponent {
	TArray<FCachedKeyToActionInfo> CachedKeyToActionInfo; // 0x120
};

struct AAkAcousticPortal : AVolume {
	UAkPortalComponent* Portal; // 0x258
	AkAcousticPortalState InitialState; // 0x260
	bool bRequiresStateMigration; // 0x261
};

struct UAudioSettings : UDeveloperSettings {
	FSoftObjectPath DefaultSoundClassName; // 0x38
	FSoftObjectPath DefaultMediaSoundClassName; // 0x50
	FSoftObjectPath DefaultSoundConcurrencyName; // 0x68
	FSoftObjectPath DefaultBaseSoundMix; // 0x80
	FSoftObjectPath VoiPSoundClass; // 0x98
	FSoftObjectPath MasterSubmix; // 0xb0
	FSoftObjectPath ReverbSubmix; // 0xc8
	FSoftObjectPath EQSubmix; // 0xe0
	EVoiceSampleRate VoiPSampleRate; // 0xf8
	float DefaultReverbSendLevel; // 0xfc
	int32_t MaximumConcurrentStreams; // 0x100
	float GlobalMinPitchScale; // 0x104
	float GlobalMaxPitchScale; // 0x108
	TArray<FAudioQualitySettings> QualityLevels; // 0x110
	char bAllowPlayWhenSilent : 1; // 0x120
	char bDisableMasterEQ : 1; // 0x120
	char bAllowCenterChannel3DPanning : 1; // 0x120
	uint32_t NumStoppingSources; // 0x124
	EPanningMethod PanningMethod; // 0x128
	EMonoChannelUpmixMethod MonoChannelUpmixMethod; // 0x129
	FString DialogueFilenameFormat; // 0x130
};

struct UGeometryCache : UObject {
	TArray<UMaterialInterface*> Materials; // 0x30
	TArray<UGeometryCacheTrack*> Tracks; // 0x40
	int32_t StartFrame; // 0x60
	int32_t EndFrame; // 0x64
};

struct ABP_BeckenRangeAttackActor_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UAkComponent* Ak; // 0x228
	UBillboardComponent* Billboard; // 0x230
	USphereComponent* Sphere; // 0x238
	UParticleSystemComponent* P_Boss_Becken_Missile_Explosion; // 0x240
	UDecalComponent* Decal; // 0x248
	float Timeline_ShowRange______0_06009FFF49538CFA762A59952DAA51E1; // 0x250
	ETimelineDirection Timeline_ShowRange__Direction_06009FFF49538CFA762A59952DAA51E1; // 0x254
	UTimelineComponent* Timeline_ShowRange; // 0x258
	UMaterialInstanceDynamic* DecalDynamicMaterial; // 0x260
	float Damage; // 0x268
};

struct UNiagaraDataInterfaceArrayBool : UNiagaraDataInterfaceArray {
	TArray<bool> BoolData; // 0x50
};

struct UInterpTrackColorProp : UInterpTrackVectorBase {
	FName PropertyName; // 0x90
};

struct UViewport : UContentWidget {
	FLinearColor BackgroundColor; // 0x120
};

struct UModularSynthComponent : USynthComponent {
	int32_t VoiceCount; // 0x6c0
};

struct UEnvQueryTest : UEnvQueryNode {
	int32_t TestOrder; // 0x30
	EEnvTestPurpose TestPurpose; // 0x34
	FString TestComment; // 0x38
	EEnvTestFilterOperator MultipleContextFilterOp; // 0x48
	EEnvTestScoreOperator MultipleContextScoreOp; // 0x49
	EEnvTestFilterType FilterType; // 0x4a
	FAIDataProviderBoolValue BoolValue; // 0x50
	FAIDataProviderFloatValue FloatValueMin; // 0x88
	FAIDataProviderFloatValue FloatValueMax; // 0xc0
	EEnvTestScoreEquation ScoringEquation; // 0xf9
	EEnvQueryTestClamping ClampMinType; // 0xfa
	EEnvQueryTestClamping ClampMaxType; // 0xfb
	EEQSNormalizationType NormalizationType; // 0xfc
	FAIDataProviderFloatValue ScoreClampMin; // 0x100
	FAIDataProviderFloatValue ScoreClampMax; // 0x138
	FAIDataProviderFloatValue ScoringFactor; // 0x170
	FAIDataProviderFloatValue ReferenceValue; // 0x1a8
	bool bDefineReferenceValue; // 0x1e0
	char bWorkOnFloatValues : 1; // 0x1f0
};

struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	FExpressionInput Base; // 0x40
	FExpressionInput Layer; // 0x54
	FName ParameterName; // 0x68
	float PreviewWeight; // 0x70
	FVector ConstBase; // 0x74
	FGuid ExpressionGUID; // 0x80
};

struct UBTService_KeepControllerLookAtTargetOrLocation_C : UBTService_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x98
	FBlackboardKeySelector KEYTargetActorOrLocation; // 0xa0
};

struct UWBP_Popup_Naming_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWBP_MainFrame_C* BP_UI_Frame; // 0x268
	UEditableTextBox* EditableTextBox_1; // 0x270
	UImage* Image; // 0x278
	UImage* Image_126; // 0x280
	UImage* Image_200; // 0x288
	UTextBlock* TextBlock_4; // 0x290
	UWBP_PopUp_Button_C* WBP_PopUp_Button; // 0x298
	UWBP_Toolbar_Close_C* WBP_Toolbar_Close; // 0x2a0
	bool DragEnabled; // 0x2a8
	bool IsMouseButtonDown; // 0x2a9
	FVector2D LastMousePosition; // 0x2ac
	bool IsDrag; // 0x2b4
	UCanvasPanelSlot* ParentSlot; // 0x2b8
	float SafetyZoneY; // 0x2c0
	float SafetyZoneX; // 0x2c4
	UBP_PlayerInventoryComponent_C* Inventory Component; // 0x2c8
	UWBP_HUD_C* Parent Widget; // 0x2d0
	bool Name Error; // 0x2d8
	ABP_BuildPartBase_C* Building; // 0x2e0
};

struct UBTTask_BossGrogging_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
};

struct ASkyAtmosphere : AInfo {
	USkyAtmosphereComponent* SkyAtmosphereComponent; // 0x220
};

struct USteamAudioSettings : UObject {
	FSoftObjectPath OutputSubmix; // 0x28
	EIplAudioEngine AudioEngine; // 0x40
	EIplRayTracerType RayTracer; // 0x41
	EIplConvolutionType ConvolutionType; // 0x42
	bool ExportBSPGeometry; // 0x43
	bool ExportLandscapeGeometry; // 0x44
	EPhononMaterial StaticMeshMaterialPreset; // 0x45
	float StaticMeshLowFreqAbsorption; // 0x48
	float StaticMeshMidFreqAbsorption; // 0x4c
	float StaticMeshHighFreqAbsorption; // 0x50
	float StaticMeshLowFreqTransmission; // 0x54
	float StaticMeshMidFreqTransmission; // 0x58
	float StaticMeshHighFreqTransmission; // 0x5c
	float StaticMeshScattering; // 0x60
	EPhononMaterial BSPMaterialPreset; // 0x64
	float BSPLowFreqAbsorption; // 0x68
	float BSPMidFreqAbsorption; // 0x6c
	float BSPHighFreqAbsorption; // 0x70
	float BSPLowFreqTransmission; // 0x74
	float BSPMidFreqTransmission; // 0x78
	float BSPHighFreqTransmission; // 0x7c
	float BSPScattering; // 0x80
	EPhononMaterial LandscapeMaterialPreset; // 0x84
	float LandscapeLowFreqAbsorption; // 0x88
	float LandscapeMidFreqAbsorption; // 0x8c
	float LandscapeHighFreqAbsorption; // 0x90
	float LandscapeLowFreqTransmission; // 0x94
	float LandscapeMidFreqTransmission; // 0x98
	float LandscapeHighFreqTransmission; // 0x9c
	float LandscapeScattering; // 0xa0
	int32_t OcclusionSampleCount; // 0xa4
	EIplSimulationType ListenerReverbSimulationType; // 0xa8
	float ListenerReverbContribution; // 0xac
	int32_t IndirectImpulseResponseOrder; // 0xb0
	float IndirectImpulseResponseDuration; // 0xb4
	EIplSpatializationMethod IndirectSpatializationMethod; // 0xb8
	float IrradianceMinDistance; // 0xbc
	uint32_t MaxSources; // 0xc0
	EQualitySettings RealtimeQualityPreset; // 0xc4
	int32_t RealTimeCPUCoresPercentage; // 0xc8
	int32_t RealtimeBounces; // 0xcc
	int32_t RealtimeRays; // 0xd0
	int32_t RealtimeSecondaryRays; // 0xd4
	EQualitySettings BakedQualityPreset; // 0xd8
	int32_t BakingCPUCoresPercentage; // 0xdc
	int32_t BakedBounces; // 0xe0
	int32_t BakedRays; // 0xe4
	int32_t BakedSecondaryRays; // 0xe8
	int32_t MaxComputeUnits; // 0xec
	float FractionComputeUnitsForIRUpdate; // 0xf0
	int32_t TANIndirectImpulseResponseOrder; // 0xf4
	float TANIndirectImpulseResponseDuration; // 0xf8
	uint32_t TANMaxSources; // 0xfc
	int32_t RadeonRaysBakingBatchSize; // 0x100
};

struct UGizmoLocalFloatParameterSource : UGizmoBaseFloatParameterSource {
	float Value; // 0x48
	FGizmoFloatParameterChange LastChange; // 0x4c
};

struct UWBP_FunctionalityInfo_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_114; // 0x268
	UWBP_MainFrame_C* BP_UI_Frame; // 0x270
	UEditableTextBox* EditableTextBox_Header; // 0x278
	UTextBlock* EMP; // 0x280
	UImage* EnergyGaugeBar; // 0x288
	UHorizontalBox* HorizontalBox_Toolbar; // 0x290
	UImage* Image_91; // 0x298
	USizeBox* SizeBox_1; // 0x2a0
	UTextBlock* Text_Energy; // 0x2a8
	UTextBlock* Text_EnergyTotal; // 0x2b0
	UTextBlock* Text_EnergyTotal_2; // 0x2b8
	UWBP_MainFrame_Toolbar_C* WBP_MainFrame_Toolbar_115; // 0x2c0
	UWidgetSwitcher* WidgetSwitcher_CoreState; // 0x2c8
	UBorder* WS_CoreState_Connected; // 0x2d0
	UBorder* WS_CoreState_EMP; // 0x2d8
	UBorder* WS_CoreState_Null; // 0x2e0
	ABP_BuildPartBase_C* BuildPartBase; // 0x2e8
	ABP_EnergyCoreBuildPart_C* ConnectedCore; // 0x2f0
	float CoreChargedEnergy; // 0x2f8
	bool bCoreRequired; // 0x2fc
	FText Tag; // 0x300
};

struct UCustomShapeButton : UButton {
	FDelegate OnMouseButtonDownEvent; // 0x428
	FDelegate OnMouseButtonUpEvent; // 0x438
	FDelegate OnMouseMoveEvent; // 0x448
	FDelegate OnMouseDoubleClickEvent; // 0x458
	UTexture2D* MaskTexture; // 0x468
	int32_t Value; // 0x470
	EMaskColorChannel MaskChannel; // 0x474
	EMaskColorCompare CompareOP; // 0x475
};

struct AMatineeActor : AActor {
	UInterpData* MatineeData; // 0x220
	FName MatineeControllerName; // 0x228
	float PlayRate; // 0x230
	char bPlayOnLevelLoad : 1; // 0x234
	char bForceStartPos : 1; // 0x234
	float ForceStartPosition; // 0x238
	char bLooping : 1; // 0x23c
	char bRewindOnPlay : 1; // 0x23c
	char bNoResetOnRewind : 1; // 0x23c
	char bRewindIfAlreadyPlaying : 1; // 0x23c
	char bDisableRadioFilter : 1; // 0x23c
	char bClientSideOnly : 1; // 0x23c
	char bSkipUpdateIfNotVisible : 1; // 0x23c
	char bIsSkippable : 1; // 0x23c
	int32_t PreferredSplitScreenNum; // 0x240
	char bDisableMovementInput : 1; // 0x244
	char bDisableLookAtInput : 1; // 0x244
	char bHidePlayer : 1; // 0x244
	char bHideHud : 1; // 0x244
	TArray<FInterpGroupActorInfo> GroupActorInfos; // 0x248
	char bShouldShowGore : 1; // 0x258
	TArray<UInterpGroupInst*> GroupInst; // 0x260
	TArray<FCameraCutInfo> CameraCuts; // 0x270
	char bIsPlaying : 1; // 0x280
	char bReversePlayback : 1; // 0x280
	char bPaused : 1; // 0x280
	char bPendingStop : 1; // 0x280
	float InterpPosition; // 0x284
	char ReplicationForceIsPlaying; // 0x28c
	FMulticastInlineDelegate OnPlay; // 0x290
	FMulticastInlineDelegate OnStop; // 0x2a0
	FMulticastInlineDelegate OnPause; // 0x2b0
};

struct UMovieSceneGeometryCollectionSection : UMovieSceneSection {
	FMovieSceneGeometryCollectionParams Params; // 0xe8
};

struct ALight : AActor {
	ULightComponent* LightComponent; // 0x220
	char bEnabled : 1; // 0x228
};

struct UWBP_MailDetail_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Open; // 0x268
	UImage* Image_2; // 0x270
	UImage* Image_310; // 0x278
	UImage* Image_440; // 0x280
	UScrollBox* ScrollBox_2; // 0x288
	UTextBlock* TextBlock; // 0x290
	UTextBlock* TextBlock_3; // 0x298
	UTextBlock* TextBlock_61; // 0x2a0
	UWBP_Button_UI_C* WBP_Button_Upgrade; // 0x2a8
	UWBP_MainFrame_Toolbar_C* WBP_MainFrame_Toolbar; // 0x2b0
	UWrapBox* WrapBox_124; // 0x2b8
	UObjectiveSystemManagerComponent_C* ObjectiveSystem; // 0x2c0
	E_RadiogramHologramType HologramType; // 0x2c8
	FMailData Message; // 0x2d0
	int32_t Index; // 0x358
};

struct UStreamableRenderAsset : UObject {
	double ForceMipLevelsToBeResidentTimestamp; // 0x40
	int32_t NumCinematicMipLevels; // 0x48
	int32_t StreamingIndex; // 0x4c
	int32_t CachedCombinedLODBias; // 0x50
	char NeverStream : 1; // 0x54
	char bGlobalForceMipLevelsToBeResident : 1; // 0x54
	char bHasStreamingUpdatePending : 1; // 0x54
	char bForceMiplevelsToBeResident : 1; // 0x54
	char bIgnoreStreamingMipBias : 1; // 0x54
	char bUseCinematicMipLevels : 1; // 0x54
};

struct UNiagaraRibbonRendererProperties : UNiagaraRendererProperties {
	UMaterialInterface* Material; // 0x80
	FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x88
	ENiagaraRibbonFacingMode FacingMode; // 0xa8
	FNiagaraRibbonUVSettings UV0Settings; // 0xac
	FNiagaraRibbonUVSettings UV1Settings; // 0xd0
	ENiagaraRibbonDrawDirection DrawDirection; // 0xf4
	float CurveTension; // 0xf8
	ENiagaraRibbonTessellationMode TessellationMode; // 0xfc
	int32_t TessellationFactor; // 0x100
	bool bUseConstantFactor; // 0x104
	float TessellationAngle; // 0x108
	bool bScreenSpaceTessellation; // 0x10c
	FNiagaraVariableAttributeBinding PositionBinding; // 0x110
	FNiagaraVariableAttributeBinding ColorBinding; // 0x168
	FNiagaraVariableAttributeBinding VelocityBinding; // 0x1c0
	FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x218
	FNiagaraVariableAttributeBinding RibbonTwistBinding; // 0x270
	FNiagaraVariableAttributeBinding RibbonWidthBinding; // 0x2c8
	FNiagaraVariableAttributeBinding RibbonFacingBinding; // 0x320
	FNiagaraVariableAttributeBinding RibbonIdBinding; // 0x378
	FNiagaraVariableAttributeBinding RibbonLinkOrderBinding; // 0x3d0
	FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x428
	FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x480
	FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x4d8
	FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x530
	FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x588
	FNiagaraVariableAttributeBinding U0OverrideBinding; // 0x5e0
	FNiagaraVariableAttributeBinding V0RangeOverrideBinding; // 0x638
	FNiagaraVariableAttributeBinding U1OverrideBinding; // 0x690
	FNiagaraVariableAttributeBinding V1RangeOverrideBinding; // 0x6e8
};

struct UCloudWatchLogsUntagLogGroup : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct AProceduralFoliageVolume : AVolume {
	UProceduralFoliageComponent* ProceduralComponent; // 0x258
};

struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression {
	FName ParameterName; // 0x40
	float PreviewWeight; // 0x48
	FGuid ExpressionGUID; // 0x4c
};

struct UMovieSceneCameraShakeSourceShakeTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> CameraShakeSections; // 0x80
};

struct USpitter_SK_Skeleton_AnimBlueprint_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8
};

struct ABP_LM2Valve_C : ABP_InteractionableActor_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UStaticMeshComponent* StaticMesh; // 0x270
	UStaticMeshComponent* SM_WarpMirror_02; // 0x278
	UStaticMeshComponent* SM_Pipe_Thick_Stand_Str_d; // 0x280
	UStaticMeshComponent* SM_Pipe_Thick_Stand_Crn_a1; // 0x288
	UStaticMeshComponent* SM_Pipe_Thick_Stand_Crn_a; // 0x290
	USceneComponent* Valve; // 0x298
	USceneComponent* OutPos; // 0x2a0
	UStaticMeshComponent* SM_Valve_a; // 0x2a8
	UBP_OccupyFunctionComponent_C* BP_OccupyFunctionComponent; // 0x2b0
	ABP_LM2ExitPipe_C* ExitPipe; // 0x2b8
	bool ActivePipe; // 0x2c0
	ALandmarkBase* LandmarkRef; // 0x2c8
};

struct UMovieSceneSequencePlayer : UObject {
	FMulticastInlineDelegate OnPlay; // 0x410
	FMulticastInlineDelegate OnPlayReverse; // 0x420
	FMulticastInlineDelegate OnStop; // 0x430
	FMulticastInlineDelegate OnPause; // 0x440
	FMulticastInlineDelegate OnFinished; // 0x450
	EMovieScenePlayerStatus Status; // 0x460
	char bReversePlayback : 1; // 0x464
	UMovieSceneSequence* Sequence; // 0x468
	FFrameNumber StartTime; // 0x470
	int32_t DurationFrames; // 0x474
	float DurationSubFrames; // 0x478
	int32_t CurrentNumLoops; // 0x47c
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x480
	FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x498
	FMovieSceneSequenceReplProperties NetSyncProps; // 0x5e8
	TScriptInterface<IMovieScenePlaybackClient> PlaybackClient; // 0x5f8
	UMovieSceneSequenceTickManager* TickManager; // 0x608
};

struct ABP_ThermalEquilibration_C : ABP_LandmarkEffectRangeActor_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x368
	UParticleSystemComponent* P_ThermalEquilibration; // 0x370
	UStaticMeshComponent* Sphere1; // 0x378
	UPostProcessComponent* PostProcess1; // 0x380
	USphereComponent* Sphere; // 0x388
	UBP_EnvironmentEffectComponent_C* BP_EnvironmentEffectComponent; // 0x390
	UMaterialInstanceDynamic* SphereDM; // 0x398
};

struct UOnlineEngineInterfaceImpl : UOnlineEngineInterface {
	FName VoiceSubsystemNameOverride; // 0x28
};

struct USphereReflectionCaptureComponent : UReflectionCaptureComponent {
	float InfluenceRadius; // 0x270
	float CaptureDistanceScale; // 0x274
	UDrawSphereComponent* PreviewInfluenceRadius; // 0x278
};

struct UInterpGroupCamera : UInterpGroup {
	UCameraAnim* CameraAnimInst; // 0x50
	float CompressTolerance; // 0x58
};

struct UMovieSceneMaterialParameterCollectionTrack : UMovieSceneMaterialTrack {
	UMaterialParameterCollection* MPC; // 0x90
};

struct UParticleModuleMeshRotationRateMultiplyLife : UParticleModuleRotationRateBase {
	FRawDistributionVector LifeMultiplier; // 0x30
};

struct UCrowdFollowingComponent : UPathFollowingComponent {
	FVector CrowdAgentMoveDirection; // 0x268
};

struct UParticleModuleMeshRotationRateOverLife : UParticleModuleRotationRateBase {
	FRawDistributionVector RotRate; // 0x30
	char bScaleRotRate : 1; // 0x78
};

struct AInteractiveFoliageActor : AStaticMeshActor {
	UCapsuleComponent* CapsuleComponent; // 0x230
	FVector TouchingActorEntryPosition; // 0x238
	FVector FoliageVelocity; // 0x244
	FVector FoliageForce; // 0x250
	FVector FoliagePosition; // 0x25c
	float FoliageDamageImpulseScale; // 0x268
	float FoliageTouchImpulseScale; // 0x26c
	float FoliageStiffness; // 0x270
	float FoliageStiffnessQuadratic; // 0x274
	float FoliageDamping; // 0x278
	float MaxDamageImpulse; // 0x27c
	float MaxTouchImpulse; // 0x280
	float MaxForce; // 0x284
	float Mass; // 0x288
};

struct USpinBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FSpinBoxStyle SpinBoxStyle; // 0x30
};

struct UBTTask_SetFocus_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	FBlackboardKeySelector KEYTargetActorOrLocation; // 0xb0
	bool ResetFocus; // 0xd8
	bool InverseResult; // 0xd9
	bool WaitFocus; // 0xda
};

struct UNavLinkDefinition : UObject {
	TArray<FNavigationLink> Links; // 0x28
	TArray<FNavigationSegmentLink> SegmentLinks; // 0x38
};

struct UDrawFrustumComponent : UPrimitiveComponent {
	FColor FrustumColor; // 0x440
	float FrustumAngle; // 0x444
	float FrustumAspectRatio; // 0x448
	float FrustumStartDist; // 0x44c
	float FrustumEndDist; // 0x450
	UTexture* Texture; // 0x458
};

struct UMovieSceneSlomoSection : UMovieSceneSection {
	FMovieSceneFloatChannel FloatCurve; // 0xe8
};

struct UEditableGameplayTagQueryExpression_AnyTagsMatch : UEditableGameplayTagQueryExpression {
	FGameplayTagContainer Tags; // 0x28
};

struct UMaterialExpressionVirtualTextureFeatureSwitch : UMaterialExpression {
	FExpressionInput No; // 0x40
	FExpressionInput Yes; // 0x54
};

struct UPlatformMediaSource : UMediaSource {
	UMediaSource* MediaSource; // 0x80
};

struct UDonEnvQueryTest_Navigation : UEnvQueryTest {
	char bSearchRandomLocation : 1; // 0x1f8
	int32_t RandomLocationMaxAttempts; // 0x1fc
	float RandomLocationRadius; // 0x200
};

struct UCloudWatchDescribeAlarmHistory : UAwsCloudWatchAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UWBP_MapMarker_Waypoint_C : UWBP_MapMarker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4a8
	int32_t Temp Distance; // 0x4b0
};

struct UGarbageCollectionSettings : UDeveloperSettings {
	float TimeBetweenPurgingPendingKillObjects; // 0x38
	char FlushStreamingOnGC : 1; // 0x3c
	char AllowParallelGC : 1; // 0x3c
	char IncrementalBeginDestroyEnabled : 1; // 0x3c
	char MultithreadedDestructionEnabled : 1; // 0x3c
	char CreateGCClusters : 1; // 0x3c
	char AssetClusteringEnabled : 1; // 0x3c
	char ActorClusteringEnabled : 1; // 0x3c
	char BlueprintClusteringEnabled : 1; // 0x3c
	char UseDisregardForGCOnDedicatedServers : 1; // 0x3d
	int32_t MinGCClusterSize; // 0x40
	int32_t NumRetriesBeforeForcingGC; // 0x44
	int32_t MaxObjectsNotConsideredByGC; // 0x48
	int32_t SizeOfPermanentObjectPool; // 0x4c
	int32_t MaxObjectsInGame; // 0x50
	int32_t MaxObjectsInEditor; // 0x54
};

struct UVideoCaptureProtocol : UFrameGrabberProtocol {
	bool bUseCompression; // 0x68
	float CompressionQuality; // 0x6c
};

struct UAISenseConfig_Hearing : UAISenseConfig {
	UAISense_Hearing* Implementation; // 0x48
	float HearingRange; // 0x50
	float LoSHearingRange; // 0x54
	char bUseLoSHearing : 1; // 0x58
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x5c
};

struct ALightmassPortal : AActor {
	ULightmassPortalComponent* PortalComponent; // 0x220
};

struct UBTTask_RunBehaviorDynamic : UBTTaskNode {
	FGameplayTag InjectionTag; // 0x70
	UBehaviorTree* DefaultBehaviorAsset; // 0x78
	UBehaviorTree* BehaviorAsset; // 0x80
};

struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	TArray<FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x368
	char bIsLayerThumbnail : 1; // 0x378
	char bDisableTessellation : 1; // 0x378
	char bMobile : 1; // 0x378
	char bEditorToolUsage : 1; // 0x378
};

struct UInputActionDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputActionDelegateBinding> InputActionDelegateBindings; // 0x28
};

struct UAudioCurveSourceComponent : UAudioComponent {
	FName CurveSourceBindingName; // 0x868
	float CurveSyncOffset; // 0x870
};

struct ABP_NavigationInvoker_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	USphereComponent* GenerationRadiusVisualizer; // 0x228
	UCapsuleComponent* CenterLocationVisualizer; // 0x230
	URMNavigationInvokerComponent* RMNavigationInvoker; // 0x238
	USceneComponent* DefaultSceneRoot; // 0x240
	float GenerationRadius; // 0x248
	TSet<APawn*> PlayerCounter; // 0x250
};

struct UBTDecorator_IsTargetClosedEnough_C : UBTDecorator_BlueprintBase {
	FBlackboardKeySelector KEYTargetActorOrLocation; // 0xa0
	FBlackboardKeySelector KEYDistance; // 0xc8
	float CloseDistance; // 0xf0
	FVector TargetLocation; // 0xf4
};

struct UBTService_FriendReaction_C : UBTService_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x98
	FBlackboardKeySelector KEYTargetActor; // 0xa0
	FBlackboardKeySelector KEYStress; // 0xc8
	FBlackboardKeySelector KEYTargetLocation; // 0xf0
	APawn* MyPawn; // 0x118
	FBlackboardKeySelector KEYFloorSenceRange; // 0x120
	bool UseFloatingLocation; // 0x148
	float FloatingHight; // 0x14c
};

struct UGameEngine : UEngine {
	float MaxDeltaTime; // 0xde0
	float ServerFlushLogInterval; // 0xde4
	UGameInstance* GameInstance; // 0xde8
};

struct UWBP_HUD_NotificationListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_FadeIn; // 0x268
	UWidgetAnimation* Anim_Update; // 0x270
	UWidgetAnimation* Anim_FadeOut; // 0x278
	UBorder* Border_1; // 0x280
	UImage* Image_BG; // 0x288
	UImage* Image_Item; // 0x290
	UTextBlock* Text_Amount; // 0x298
	UTextBlock* Text_Item; // 0x2a0
	float Notification Time Out; // 0x2a8
	E_NotificationType Notification Type; // 0x2ac
	FText Warning Text; // 0x2b0
	FItemInventory Item; // 0x2c8
	bool StartFadeout; // 0x300
};

struct UWBP_RadiogramObjectiveMain_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Open; // 0x268
	UImage* Image_120; // 0x270
	UImage* Image_139; // 0x278
	UImage* Image_Icon; // 0x280
	UVerticalBox* list; // 0x288
	UTextBlock* Text_Name; // 0x290
	FS_RadiogramInfo RadiogramObjDisp; // 0x298
	int32_t DisplayIdx; // 0x2f8
};

struct AInfinityFireAIController : AAIController {
	int32_t Difficulty; // 0x328
	TArray<FVector> ReservedWaypoints; // 0x330
	FMulticastInlineDelegate OnHearSound; // 0x350
	UBlackboardComponent* BlackboardComp; // 0x360
	UBehaviorTreeComponent* BehaviorComp; // 0x368
};

struct UWBP_Slot_Equipment_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border; // 0x268
	UImage* Image_Cooldown; // 0x270
	UImage* Image_Equipable; // 0x278
	UImage* Image_EquipBackgound; // 0x280
	UImage* Image_EquipBackgound_2; // 0x288
	UImage* Image_Item; // 0x290
	UImage* Image_MemoryChipType; // 0x298
	UImage* Image_Tier; // 0x2a0
	UProgressBar* ProgressBar_Condition; // 0x2a8
	USizeBox* SizeBox_1; // 0x2b0
	UTextBlock* Text_Cooldown; // 0x2b8
	UTextBlock* Text_Cost; // 0x2c0
	UTextBlock* Text_MemoryChipIndex; // 0x2c8
	UTextBlock* Text_ProtocolIndex; // 0x2d0
	UWBP_UI_SlotHovering_C* WBP_UI_SlotHovering; // 0x2d8
	UWidgetSwitcher* WidgetSwitcher_SlotType; // 0x2e0
	UCanvasPanel* WS_Panel_MemoryChip; // 0x2e8
	UCanvasPanel* WS_Panel_Protocol; // 0x2f0
	E_EquipmentCategorys EquipmentSlot Type; // 0x2f8
	FS_EquipmentSlot Equipment Item; // 0x300
	int32_t EquipmentSlot Index; // 0x340
	UTexture2D* Slot Default Image; // 0x348
	UBP_PlayerInventoryComponent_C* Player Inventory Component; // 0x350
	FVector2D Size; // 0x358
	bool bUsable; // 0x360
	bool bOccupied; // 0x361
	bool IsOtherPlayerSlot; // 0x362
	float CurrentCondition; // 0x364
	UBP_PlayerInventoryComponent_C* OtherPlayerInventory Component; // 0x368
	float CurrentCost; // 0x370
	FItemGeneralInfo generalinfo; // 0x380
	int32_t WeaponIndex; // 0x4d0
};

struct UWBP_Radiogram_6010108_C : UWBP_radiogram_CustomBase_C {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x298
	UTextBlock* TextBlock; // 0x2a0
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x2a8
};

struct UVehicleWheelData : UDataAsset {
	FVector Front_Offset; // 0x30
	float Front_ShapeRadius; // 0x3c
	float Front_ShapeWidth; // 0x40
	float Front_Mass; // 0x44
	float Front_DampingRate; // 0x48
	bool Front_bAffectedByHandbrake; // 0x4c
	float Front_SteerAngle; // 0x50
	float Front_FrictionScale; // 0x54
	float Front_LatStiffMaxLoad; // 0x58
	float Front_LatStiffValue; // 0x5c
	float Front_LongStiffValue; // 0x60
	float Front_SuspensionForceOffset; // 0x64
	float Front_SuspensionMaxRaise; // 0x68
	float Front_SuspensionMaxDrop; // 0x6c
	float Front_SuspensionNaturalFrequency; // 0x70
	float Front_SuspensionDampingRatio; // 0x74
	float Front_MaxBrakeTorque; // 0x78
	float Front_MaxHandBrakeTorque; // 0x7c
	FString Front_BoneNameLeft; // 0x80
	FString Front_BoneNameRight; // 0x90
	FVector Back_Offset; // 0xa0
	float Back_ShapeRadius; // 0xac
	float Back_ShapeWidth; // 0xb0
	float Back_Mass; // 0xb4
	float Back_DampingRate; // 0xb8
	bool Back_bAffectedByHandbrake; // 0xbc
	float Back_SteerAngle; // 0xc0
	float Back_FrictionScale; // 0xc4
	float Back_LatStiffMaxLoad; // 0xc8
	float Back_LatStiffValue; // 0xcc
	float Back_LongStiffValue; // 0xd0
	float Back_SuspensionForceOffset; // 0xd4
	float Back_SuspensionMaxRaise; // 0xd8
	float Back_SuspensionMaxDrop; // 0xdc
	float Back_SuspensionNaturalFrequency; // 0xe0
	float Back_SuspensionDampingRatio; // 0xe4
	float Back_MaxBrakeTorque; // 0xe8
	float Back_MaxHandBrakeTorque; // 0xec
	FString Back_BoneNameLeft; // 0xf0
	FString Back_BoneNameRight; // 0x100
};

struct USceneCaptureComponent : USceneComponent {
	ESceneCapturePrimitiveRenderMode PrimitiveRenderMode; // 0x1f8
	ESceneCaptureSource CaptureSource; // 0x1f9
	char bCaptureEveryFrame : 1; // 0x1fa
	char bCaptureOnMovement : 1; // 0x1fa
	bool bAlwaysPersistRenderingState; // 0x1fb
	TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenComponents; // 0x200
	TArray<AActor*> HiddenActors; // 0x210
	TArray<TWeakObjectPtr<UPrimitiveComponent>> ShowOnlyComponents; // 0x220
	TArray<AActor*> ShowOnlyActors; // 0x230
	float LODDistanceFactor; // 0x240
	float MaxViewDistanceOverride; // 0x244
	int32_t CaptureSortPriority; // 0x248
	bool bUseRayTracingIfEnabled; // 0x24c
	TArray<FEngineShowFlagsSetting> ShowFlagSettings; // 0x250
	FString ProfilingEventName; // 0x290
};

struct UBTNode : UObject {
	FString NodeName; // 0x30
	UBehaviorTree* TreeAsset; // 0x40
	UBTCompositeNode* ParentNode; // 0x48
};

struct UMovieSceneByteSection : UMovieSceneSection {
	FMovieSceneByteChannel ByteCurve; // 0xe8
};

struct UWBP_HUD_Target_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image; // 0x268
	UImage* Image_2; // 0x270
	UImage* Image_39; // 0x278
	UImage* Image_135; // 0x280
	UImage* Image_432; // 0x288
	UImage* Image_Stability; // 0x290
	UOverlay* Overlay_Stability; // 0x298
	UOverlay* Overlay_Tag; // 0x2a0
	UOverlay* Overlay_TargetHealth; // 0x2a8
	UProgressBar* Progress_Target; // 0x2b0
	UTextBlock* Text_Tag; // 0x2b8
	UTextBlock* Text_TargetHealth; // 0x2c0
	UTextBlock* Text_TargetName; // 0x2c8
	ESlateVisibility WidgetVisibility; // 0x2d0
	AActor* TargetedActor; // 0x2d8
	UMaterialInstanceDynamic* MI_Stability; // 0x2e0
	float Character Nickname Distance Squared; // 0x2e8
	FString TargetName; // 0x2f0
	FString TargetTag; // 0x300
	int32_t TargetHealthCurrent; // 0x310
	int32_t TargetHealthMax; // 0x314
	float TargetShield; // 0x318
	ABP_BuildPartBase_C* TargetBuildPart; // 0x320
	float TargetStability; // 0x328
	FString TempNameText; // 0x330
	FString TempHealthText; // 0x340
	FString TempTagText; // 0x350
	bool bTeam; // 0x360
};

struct UMovieSceneVectorTrack : UMovieScenePropertyTrack {
	int32_t NumChannelsUsed; // 0xb0
};

struct UBTTask_Juggernaut_Barrier_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	FBlackboardKeySelector IsBarrier; // 0xb0
};

struct UBP_EnergyRecoverFactor_C : UBP_MachineArmAbilityObjectBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x40
	float EnergyRecoverFactor; // 0x48
	bool NewVar_1; // 0x4c
};

struct UAnimNotify_MuzzleParticleRangeWeapon_C : UAnimNotify {
	FName SocketName; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	FVector Scale; // 0x58
	UParticleSystem* DebugParticle; // 0x68
};

struct ABP_SurvivalGameMode_C : ABP_SVChatGameMode_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x478
	TArray<FTransform> Deleted Foliage Instances; // 0x480
	FMulticastInlineDelegate Update Resources; // 0x490
	ABP_SessionDataManager_C* SessionDataManager; // 0x4a0
	ABP_InventorySaveSystem_C* SaveManager; // 0x4a8
	TArray<FSpotEventData> AvailableEvents; // 0x4b0
	bool InitializedFinished; // 0x4c0
	FMulticastInlineDelegate NecessaryLevelLoadCompleteDispatch; // 0x4c8
	bool IsNecessaryLevelLoadComplete; // 0x4d8
	TMap<FName, AActor*> FindActorCache; // 0x4e0
	ABP_ActorSpawnManager_C* ActorSpawManager; // 0x530
	float SpawnableOtherCharaterDistance; // 0x538
	ABP_SV_Oceanology_C* MainOcean; // 0x540
	TMap<FString, BP_SurvivalCharacter_C*> CachedPlayerCharacter; // 0x548
	TMap<FString, float> BanUserList; // 0x598
	TMap<E_SpawnArea, FS_PlayerSpawnPointInfoArray> CachedSpawnPoint; // 0x5e8
	FMulticastInlineDelegate OnSessionVisible; // 0x638
	BP_SpotEvent_SpawnFieldNPC_C* FieldNPCSpawnInfo; // 0x648
	int32_t CurrentNPCSpawnCountPerFrame; // 0x650
	int32_t NPCSpawnLimitperFrame; // 0x654
	bool bServerIsEnded; // 0x658
	int32_t PrevPlayerCount; // 0x65c
	FIntValueFromDataTable NotificationOtherPlayerDead; // 0x660
	TMap<FString, int32_t> CheatersTrials; // 0x688
};

struct UChannel : UObject {
	UNetConnection* Connection; // 0x28
};

struct UQuestMapManager_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	APlayerController* PlayerController; // 0xb8
	UWBP_HUD_Compass_C* Compass; // 0xc0
	ULocalMap_C* LocalMap; // 0xc8
	UWBP_WorldMapPanel_C* WorldMap; // 0xd0
	UWBP_RespawnPanel_C* RespawnMap; // 0xd8
};

struct UAkAudioEvent : UAkAssetBase {
	TMap<FString, TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap; // 0x50
	UAkAudioBank* RequiredBank; // 0xa0
	UAkAssetPlatformData* CurrentLocalizedPlatformData; // 0xb0
	float MaxAttenuationRadius; // 0xb8
	bool IsInfinite; // 0xbc
	float MinimumDuration; // 0xc0
	float MaximumDuration; // 0xc4
};

struct ULowEntryBitDataWriter : UObject {
	TArray<char> Bytes; // 0x28
	char CurrentByte; // 0x38
	int32_t CurrentBytePosition; // 0x3c
};

struct UMaterialExpressionBreakMaterialAttributes : UMaterialExpression {
	FMaterialAttributesInput MaterialAttributes; // 0x40
};

struct UCloudWatchListMetrics : UAwsCloudWatchAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct USphereComponent : UShapeComponent {
	float SphereRadius; // 0x458
};

struct UMovieSceneBindingOverrides : UObject {
	TArray<FMovieSceneBindingOverrideData> BindingData; // 0x28
};

struct UWBP_Radiogram_4020204_C : UUserWidget {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x260
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x268
	UWBP_RadiogramListing_C* WBP_RadiogramListing_2; // 0x270
	UWBP_RadiogramListing_C* WBP_RadiogramListing_3; // 0x278
	UWBP_RadiogramListing_C* WBP_RadiogramListing_4; // 0x280
};

struct UBP_HitCapsule_Compoent_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	TArray<FBP_Struct_CharacterHitCapsule> HitCapsules; // 0xb8
	int32_t MaxCapsuleCount; // 0xc8
	float HitCapsuleRadiusRatio; // 0xcc
	float HitCapsuleHeightRatio; // 0xd0
	int32_t MaxFlexibility; // 0xd4
	int32_t MinFlexibility; // 0xd8
};

struct UPaperFlipbook : UObject {
	float FramesPerSecond; // 0x28
	TArray<FPaperFlipbookKeyFrame> KeyFrames; // 0x30
	UMaterialInterface* DefaultMaterial; // 0x40
	EFlipbookCollisionMode CollisionSource; // 0x48
};

struct USoundNodeRandom : USoundNode {
	TArray<float> Weights; // 0x48
	TArray<bool> HasBeenUsed; // 0x58
	int32_t NumRandomUsed; // 0x68
	int32_t PreselectAtLevelLoad; // 0x6c
	char bShouldExcludeFromBranchCulling : 1; // 0x70
	char bSoundCueExcludedFromBranchCulling : 1; // 0x70
	char bRandomizeWithoutReplacement : 1; // 0x70
};

struct UInteractiveTool : UObject {
	UInputBehaviorSet* InputBehaviors; // 0x48
	TArray<UObject*> ToolPropertyObjects; // 0x50
};

struct USlateAccessibleWidgetData : UObject {
	bool bCanChildrenBeAccessible; // 0x28
	ESlateAccessibleBehavior AccessibleBehavior; // 0x29
	ESlateAccessibleBehavior AccessibleSummaryBehavior; // 0x2a
	FText AccessibleText; // 0x30
	FDelegate AccessibleTextDelegate; // 0x48
	FText AccessibleSummaryText; // 0x58
	FDelegate AccessibleSummaryTextDelegate; // 0x70
};

struct UAkItemProperties : UWidget {
	FMulticastInlineDelegate OnSelectionChanged; // 0x108
	FMulticastInlineDelegate OnPropertyDragged; // 0x118
};

struct UGridPanel : UPanelWidget {
	TArray<float> ColumnFill; // 0x120
	TArray<float> RowFill; // 0x130
};

struct UBTDecorator_CompareBBEntries : UBTDecorator {
	EBlackBoardEntryComparison Operator; // 0x68
	FBlackboardKeySelector BlackboardKeyA; // 0x70
	FBlackboardKeySelector BlackboardKeyB; // 0x98
};

struct UMovieScene3DTransformSection : UMovieSceneSection {
	FMovieSceneTransformMask TransformMask; // 0xf0
	FMovieSceneFloatChannel Translation[0x3]; // 0xf8
	FMovieSceneFloatChannel Rotation[0x3]; // 0x2d8
	FMovieSceneFloatChannel Scale[0x3]; // 0x4b8
	FMovieSceneFloatChannel ManualWeight; // 0x698
	bool bUseQuaternionInterpolation; // 0x738
};

struct UParticleModuleVectorFieldRotationRate : UParticleModuleVectorFieldBase {
	FVector RotationRate; // 0x30
};

struct UCameraComponent : USceneComponent {
	float FieldOfView; // 0x1f8
	float OrthoWidth; // 0x1fc
	float OrthoNearClipPlane; // 0x200
	float OrthoFarClipPlane; // 0x204
	float AspectRatio; // 0x208
	char bConstrainAspectRatio : 1; // 0x20c
	char bUseFieldOfViewForLOD : 1; // 0x20c
	char bLockToHmd : 1; // 0x20c
	char bUsePawnControlRotation : 1; // 0x20c
	ECameraProjectionMode ProjectionMode; // 0x20d
	float PostProcessBlendWeight; // 0x240
	FPostProcessSettings PostProcessSettings; // 0x270
};

struct UParticleModuleVectorFieldRotation : UParticleModuleVectorFieldBase {
	FVector MinInitialRotation; // 0x30
	FVector MaxInitialRotation; // 0x3c
};

struct UDistributionFloatUniform : UDistributionFloat {
	float Min; // 0x38
	float Max; // 0x3c
};

struct UMaterialExpressionAppendVector : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UExpandableArea : UWidget {
	FExpandableAreaStyle Style; // 0x110
	FSlateBrush BorderBrush; // 0x230
	FSlateColor BorderColor; // 0x2b8
	bool bIsExpanded; // 0x2e0
	float MaxHeight; // 0x2e4
	FMargin HeaderPadding; // 0x2e8
	FMargin AreaPadding; // 0x2f8
	FMulticastInlineDelegate OnExpansionChanged; // 0x308
	UWidget* HeaderContent; // 0x318
	UWidget* BodyContent; // 0x320
};

struct UAnimComposite : UAnimCompositeBase {
	FAnimTrack AnimationTrack; // 0xa8
};

struct ULandscapeSplineControlPoint : UObject {
	FVector Location; // 0x28
	FRotator Rotation; // 0x34
	float Width; // 0x40
	float LayerWidthRatio; // 0x44
	float SideFalloff; // 0x48
	float LeftSideFalloffFactor; // 0x4c
	float RightSideFalloffFactor; // 0x50
	float LeftSideLayerFalloffFactor; // 0x54
	float RightSideLayerFalloffFactor; // 0x58
	float EndFalloff; // 0x5c
	TArray<FLandscapeSplineConnection> ConnectedSegments; // 0x60
	TArray<FLandscapeSplineInterpPoint> Points; // 0x70
	FBox Bounds; // 0x80
	UControlPointMeshComponent* LocalMeshComponent; // 0xa0
};

struct UUniformScalar : UFieldNodeFloat {
	float Magnitude; // 0xb0
};

struct AGameState : AGameStateBase {
	FName MatchState; // 0x270
	FName PreviousMatchState; // 0x278
	int32_t ElapsedTime; // 0x280
};

struct UParticleModuleEventGenerator : UParticleModuleEventBase {
	TArray<FParticleEvent_GenerateInfo> Events; // 0x30
};

struct UWBP_Main_Ranking_Description_C : UUserWidget {
	UWBP_MainFrame_C* BP_UI_Frame; // 0x260
	UImage* Image; // 0x268
	UImage* Image_3; // 0x270
	UImage* Image_4; // 0x278
	UImage* Image_5; // 0x280
	UImage* Image_9; // 0x288
	UImage* Image_10; // 0x290
	UImage* Image_154; // 0x298
	UImage* Image_376; // 0x2a0
	UWBP_MainFrame_Header_C* WBP_MainFrame_Header; // 0x2a8
};

struct UBlueprintGeneratedClass : UClass {
	int32_t NumReplicatedProperties; // 0x230
	char bHasNativizedParent : 1; // 0x234
	char bHasCookedComponentInstancingData : 1; // 0x234
	TArray<UDynamicBlueprintBinding*> DynamicBindingObjects; // 0x238
	TArray<UActorComponent*> ComponentTemplates; // 0x248
	TArray<UTimelineTemplate*> Timelines; // 0x258
	TArray<FBPComponentClassOverride> ComponentClassOverrides; // 0x268
	USimpleConstructionScript* SimpleConstructionScript; // 0x278
	UInheritableComponentHandler* InheritableComponentHandler; // 0x280
	UStructProperty* UberGraphFramePointerProperty; // 0x288
	UFunction* UberGraphFunction; // 0x298
	TMap<FName, FBlueprintCookedComponentInstancingData> CookedComponentInstancingData; // 0x2a0
};

struct UToIntegerField : UFieldNodeInt {
	UFieldNodeFloat* FloatField; // 0xb0
};

struct UBoxReflectionCaptureComponent : UReflectionCaptureComponent {
	float BoxTransitionDistance; // 0x270
	UBoxComponent* PreviewInfluenceBox; // 0x278
	UBoxComponent* PreviewCaptureBox; // 0x280
};

struct UFAI_BTTask_SpecialAttackState_C : UFAI_BTTask_AttackState_C {
	int32_t AttackIndex; // 0x10c
};

struct UPacketHandlerProfileConfig : UObject {
	TArray<FString> Components; // 0x28
};

struct USpectatorBeaconState : UObject {
	FName SessionName; // 0x28
	int32_t NumConsumedReservations; // 0x30
	int32_t MaxReservations; // 0x34
	bool bRestrictCrossConsole; // 0x38
	TArray<FSpectatorReservation> Reservations; // 0x40
};

struct ANiagaraPreviewGrid : AActor {
	UNiagaraSystem* System; // 0x220
	ENiagaraPreviewGridResetMode ResetMode; // 0x228
	UNiagaraPreviewAxis* PreviewAxisX; // 0x230
	UNiagaraPreviewAxis* PreviewAxisY; // 0x238
	ANiagaraPreviewBase* PreviewClass; // 0x240
	float SpacingX; // 0x248
	float SpacingY; // 0x24c
	int32_t NumX; // 0x250
	int32_t NumY; // 0x254
	TArray<UChildActorComponent*> PreviewComponents; // 0x258
};

struct UGeometryCacheCodecBase : UObject {
	TArray<int32_t> TopologyRanges; // 0x28
};

struct ULODSyncComponent : UActorComponent {
	int32_t NumLODs; // 0xb0
	int32_t ForcedLOD; // 0xb4
	TArray<FComponentSync> ComponentsToSync; // 0xb8
	TMap<FName, FLODMappingData> CustomLODMapping; // 0xc8
	int32_t CurrentLOD; // 0x118
	int32_t CurrentNumLODs; // 0x11c
	TArray<UPrimitiveComponent*> DriveComponents; // 0x120
	TArray<UPrimitiveComponent*> SubComponents; // 0x130
};

struct UARQRCodeComponent : UARComponent {
	FARQRCodeUpdatePayload ReplicatedPayload; // 0x280
};

struct UParticleModuleVelocityCone : UParticleModuleVelocityBase {
	FRawDistributionFloat Angle; // 0x38
	FRawDistributionFloat Velocity; // 0x68
	FVector Direction; // 0x98
};

struct UCloudWatchLogsListTagsLogGroup : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UMaterialExpressionHairColor : UMaterialExpression {
	FExpressionInput Melanin; // 0x40
	FExpressionInput Redness; // 0x54
	FExpressionInput DyeColor; // 0x68
};

struct UWBP_Radiogram_6010100_C : UWBP_radiogram_CustomBase_C {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x298
	UTextBlock* TextBlock; // 0x2a0
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x2a8
};

struct UATV_Bugler_AnimBP_C : UVehicleAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa50
	FAnimNode_Root AnimGraphNode_Root; // 0xa58
	FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0xa88
	FAnimNode_WheelHandler AnimGraphNode_WheelHandler; // 0xa98
	FAnimNode_LookAt AnimGraphNode_LookAt_4; // 0xb80
	FAnimNode_LookAt AnimGraphNode_LookAt_3; // 0xd30
	FAnimNode_LookAt AnimGraphNode_LookAt_2; // 0xee0
	FAnimNode_LookAt AnimGraphNode_LookAt; // 0x1090
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1240
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1260
	float RotateHandle; // 0x1368
};

struct AARSkyLight : ASkyLight {
	UAREnvironmentCaptureProbe* CaptureProbe; // 0x230
};

struct ATemplateSequenceActor : AActor {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x228
	UTemplateSequencePlayer* SequencePlayer; // 0x240
	FSoftObjectPath TemplateSequence; // 0x248
	FTemplateSequenceBindingOverrideData BindingOverride; // 0x260
};

struct UMaterialExpressionNoise : UMaterialExpression {
	FExpressionInput Position; // 0x40
	FExpressionInput FilterWidth; // 0x54
	float Scale; // 0x68
	int32_t Quality; // 0x6c
	ENoiseFunction NoiseFunction; // 0x70
	char bTurbulence : 1; // 0x74
	int32_t Levels; // 0x78
	float OutputMin; // 0x7c
	float OutputMax; // 0x80
	float LevelScale; // 0x84
	char bTiling : 1; // 0x88
	uint32_t RepeatSize; // 0x8c
};

struct UGetFriendsCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UGizmoScaledTransformSource : UGizmoBaseTransformSource {
	TScriptInterface<IGizmoTransformSource> ChildTransformSource; // 0x48
};

struct ABP_CharacterDecoy_C : ABP_StaticMeshBuildPartBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x860
	USkeletalMeshComponent* CharacterPreviewMesh; // 0x868
	UStaticMeshComponent* SM_MERGED_SM_LightN_27; // 0x870
	USkeletalMeshComponent* CharacterDeployedMesh; // 0x878
	UAkComponent* Ak; // 0x880
	float AppearTimeline_Scale_AA329F2E471EACB72C1762869285A67C; // 0x888
	ETimelineDirection AppearTimeline__Direction_AA329F2E471EACB72C1762869285A67C; // 0x88c
	UTimelineComponent* AppearTimeline; // 0x890
	float DisappearTimeline_Opacity_AE037D05412E23EAA8FCB6AFC0D3A981; // 0x898
	ETimelineDirection DisappearTimeline__Direction_AE037D05412E23EAA8FCB6AFC0D3A981; // 0x89c
	UTimelineComponent* DisappearTimeline; // 0x8a0
	float LifeTime; // 0x8a8
	float TargetRotation; // 0x8ac
};

struct UConsole : UObject {
	ULocalPlayer* ConsoleTargetPlayer; // 0x38
	UTexture2D* DefaultTexture_Black; // 0x40
	UTexture2D* DefaultTexture_White; // 0x48
	TArray<FString> HistoryBuffer; // 0x68
};

struct UParticleLODLevel : UObject {
	int32_t Level; // 0x28
	char bEnabled : 1; // 0x2c
	UParticleModuleRequired* RequiredModule; // 0x30
	TArray<UParticleModule*> Modules; // 0x38
	UParticleModuleTypeDataBase* TypeDataModule; // 0x48
	UParticleModuleSpawn* SpawnModule; // 0x50
	UParticleModuleEventGenerator* EventGenerator; // 0x58
	TArray<UParticleModuleSpawnBase*> SpawningModules; // 0x60
	TArray<UParticleModule*> SpawnModules; // 0x70
	TArray<UParticleModule*> UpdateModules; // 0x80
	TArray<UParticleModuleOrbit*> OrbitModules; // 0x90
	TArray<UParticleModuleEventReceiverBase*> EventReceiverModules; // 0xa0
	char ConvertedModules : 1; // 0xb0
	int32_t PeakActiveParticles; // 0xb4
};

struct UUserDefinedStruct : UScriptStruct {
	EUserDefinedStructureStatus Status; // 0xc0
	FGuid Guid; // 0xc4
};

struct AShooterPlayerController : APlayerController {
	AActor* CurrentBasePlayerStart; // 0x570
	int32_t LifeCount; // 0x588
	float MinTimeToPlay; // 0x58c
	bool HUDVisible; // 0x590
	float GameStartTime; // 0x594
};

struct UAnimBP_Bayonet_C : UNPCAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x310
	FAnimNode_Root AnimGraphNode_Root_2; // 0x318
	FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x348
	FAnimNode_DragonSpineSolver AnimGraphNode_DragonSpineSolver; // 0x460
	FAnimNode_DragonFeetSolver AnimGraphNode_DragonFeetSolver; // 0xc40
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x1290
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x12b0
	FAnimNode_Root AnimGraphNode_Root; // 0x12d0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x1300
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x1328
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; // 0x1350
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x1438
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x1468
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_8; // 0x1550
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x15f0
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x16d8
	FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x1708
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x17b8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x1800
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1958
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1a60
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1a80
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_9; // 0x1aa0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8; // 0x1ac8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x1af0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_8; // 0x1b38
	FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer; // 0x1bf8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x1ca8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_7; // 0x1e00
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6; // 0x1ea0
	FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x1f40
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; // 0x2118
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x21b8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x21e0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x2208
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x2288
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x2308
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x23a8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0x23d8
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2400
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x2430
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x24e0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_7; // 0x2508
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x25c8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_6; // 0x2648
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x2708
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x2788
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x27b0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_5; // 0x27d8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_4; // 0x2898
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x2958
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x29d8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3; // 0x2a58
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x2b18
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x2bd8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2c58
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x2cd8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x2d00
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x2d28
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x2dc8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x2e68
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x2f08
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x2f30
	float Speed; // 0x2ff0
	float Direction; // 0x2ff4
	bool bMeleeAttack; // 0x2ff8
	TArray<FDragonData_FootData> FootIKInfo; // 0x3000
	bool SwitchPose; // 0x3010
	ACommonAI_BaseAICharacter_C* ControlledPawn; // 0x3018
	float LimitSpineRotationPitch; // 0x3020
};

struct UBP_DialogueReceiver_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	int32_t DialogueIndex; // 0xb8
	int32_t CurrentOrder; // 0xbc
	UAudioComponent* CurrentPlayingVoice; // 0xc0
	float WaitTime; // 0xc8
	FName CurrentPlayingDialog; // 0xcc
	int32_t ReserveSendTutorialUID; // 0xd4
	FDialogueTable CurrentPlayDialogData; // 0xd8
};

struct USoundGroups : UObject {
	TArray<FSoundGroup> SoundGroupProfiles; // 0x28
};

struct AWindDirectionalSource : AInfo {
	UWindDirectionalSourceComponent* Component; // 0x220
};

struct USQSListQueues : UAwsSQSAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct USimpleConstructionScript : UObject {
	TArray<USCS_Node*> RootNodes; // 0x28
	TArray<USCS_Node*> AllNodes; // 0x38
	USCS_Node* DefaultSceneRootNode; // 0x48
};

struct UMaterialExpressionSkyAtmosphereAerialPerspective : UMaterialExpression {
	FExpressionInput WorldPosition; // 0x40
};

struct USubmixEffectDynamicsProcessorPreset : USoundEffectSubmixPreset {
	FSubmixEffectDynamicsProcessorSettings Settings; // 0xe0
};

struct UMaterialExpressionDepthOfFieldFunction : UMaterialExpression {
	EDepthOfFieldFunctionValue FunctionValue; // 0x40
	FExpressionInput Depth; // 0x44
};

struct UCloudWatchLogsStopQuery : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct USourceEffectDynamicsProcessorPreset : USoundEffectSourcePreset {
	FSourceEffectDynamicsProcessorSettings Settings; // 0xb8
};

struct UMaterialExpressionRotateAboutAxis : UMaterialExpression {
	FExpressionInput NormalizedRotationAxis; // 0x40
	FExpressionInput RotationAngle; // 0x54
	FExpressionInput PivotPoint; // 0x68
	FExpressionInput Position; // 0x7c
	float Period; // 0x90
};

struct UAkMacInitializationSettings : UObject {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xb8
};

struct USQSDeleteMessage : UAwsSQSAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct AServerStatReplicator : AInfo {
	bool bUpdateStatNet; // 0x220
	bool bOverwriteClientStats; // 0x221
	uint32_t Channels; // 0x224
	uint32_t InRate; // 0x228
	uint32_t OutRate; // 0x22c
	uint32_t MaxPacketOverhead; // 0x234
	uint32_t InRateClientMax; // 0x238
	uint32_t InRateClientMin; // 0x23c
	uint32_t InRateClientAvg; // 0x240
	uint32_t InPacketsClientMax; // 0x244
	uint32_t InPacketsClientMin; // 0x248
	uint32_t InPacketsClientAvg; // 0x24c
	uint32_t OutRateClientMax; // 0x250
	uint32_t OutRateClientMin; // 0x254
	uint32_t OutRateClientAvg; // 0x258
	uint32_t OutPacketsClientMax; // 0x25c
	uint32_t OutPacketsClientMin; // 0x260
	uint32_t OutPacketsClientAvg; // 0x264
	uint32_t NetNumClients; // 0x268
	uint32_t InPackets; // 0x26c
	uint32_t OutPackets; // 0x270
	uint32_t InBunches; // 0x274
	uint32_t OutBunches; // 0x278
	uint32_t OutLoss; // 0x27c
	uint32_t InLoss; // 0x280
	uint32_t VoiceBytesSent; // 0x284
	uint32_t VoiceBytesRecv; // 0x288
	uint32_t VoicePacketsSent; // 0x28c
	uint32_t VoicePacketsRecv; // 0x290
	uint32_t PercentInVoice; // 0x294
	uint32_t PercentOutVoice; // 0x298
	uint32_t NumActorChannels; // 0x29c
	uint32_t NumConsideredActors; // 0x2a0
	uint32_t PrioritizedActors; // 0x2a4
	uint32_t NumRelevantActors; // 0x2a8
	uint32_t NumRelevantDeletedActors; // 0x2ac
	uint32_t NumReplicatedActorAttempts; // 0x2b0
	uint32_t NumReplicatedActors; // 0x2b4
	uint32_t NumActors; // 0x2b8
	uint32_t NumNetActors; // 0x2bc
	uint32_t NumDormantActors; // 0x2c0
	uint32_t NumInitiallyDormantActors; // 0x2c4
	uint32_t NumNetGUIDsAckd; // 0x2c8
	uint32_t NumNetGUIDsPending; // 0x2cc
	uint32_t NumNetGUIDsUnAckd; // 0x2d0
	uint32_t ObjPathBytes; // 0x2d4
	uint32_t NetGUIDOutRate; // 0x2d8
	uint32_t NetGUIDInRate; // 0x2dc
	uint32_t NetSaturated; // 0x2e0
};

struct UWBP_Main_Queue_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image_NoEnergy; // 0x268
	UWrapBox* InventoryGrid; // 0x270
	UTextBlock* RemainTime; // 0x278
	UProgressBar* StatsBar; // 0x280
	UWBP_Button_UI_C* WBP_Button_UI; // 0x288
	UWBP_Button_UI_C* WBP_Button_UI_2; // 0x290
	UWBP_Button_UI_C* WBP_Button_UI_3; // 0x298
	UWBP_Button_UI_C* WBP_Button_UI_4; // 0x2a0
	UWBP_Button_UI_C* WBP_Button_UI_5; // 0x2a8
	bool DragEnabled; // 0x2b0
	bool IsMouseButtonDown; // 0x2b1
	FVector2D LastMousePosition; // 0x2b4
	bool IsDrag; // 0x2bc
	UCanvasPanelSlot* ParentSlot; // 0x2c0
	float SafetyZoneY; // 0x2c8
	float SafetyZoneX; // 0x2cc
	UBP_PlayerInventoryComponent_C* Inventory Component; // 0x2d0
	TArray<UWBP_Slot_Inventory_C*> Inventory Slots; // 0x2d8
	UWBP_HUD_C* Parent Widget; // 0x2e8
	TArray<UWBP_Main_QueueListing_C*> Crafting Queue Listing; // 0x2f0
	UBP_CraftingComponent_C* CraftingComponent; // 0x300
	int32_t Index; // 0x308
	TArray<UWBP_Button_UI_C*> CancelButtonArray; // 0x310
	UWBP_Button_UI_C* Button UI; // 0x320
};

struct UWBP_Button_OutGame_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* Button; // 0x268
	UImage* Image; // 0x270
	UImage* Image_48; // 0x278
	UImage* Image_125; // 0x280
	UImage* Image_Cover; // 0x288
	UTextBlock* Text; // 0x290
	UTextBlock* Text_2; // 0x298
	FMulticastInlineDelegate OnButtonClicked; // 0x2a0
	FText Name; // 0x2b0
	FText Key; // 0x2c8
};

struct ULevel : UObject {
	UWorld* OwningWorld; // 0xb8
	UModel* Model; // 0xc0
	TArray<UModelComponent*> ModelComponents; // 0xc8
	ULevelActorContainer* ActorCluster; // 0xd8
	int32_t NumTextureStreamingUnbuiltComponents; // 0xe0
	int32_t NumTextureStreamingDirtyResources; // 0xe4
	ALevelScriptActor* LevelScriptActor; // 0xe8
	ANavigationObjectBase* NavListStart; // 0xf0
	ANavigationObjectBase* NavListEnd; // 0xf8
	TArray<UNavigationDataChunk*> NavDataChunks; // 0x100
	float LightmapTotalSize; // 0x110
	float ShadowmapTotalSize; // 0x114
	TArray<FVector> StaticNavigableGeometry; // 0x118
	TArray<FGuid> StreamingTextureGuids; // 0x128
	FGuid LevelBuildDataId; // 0x1d0
	UMapBuildDataRegistry* MapBuildData; // 0x1e0
	FIntVector LightBuildLevelOffset; // 0x1e8
	char bIsLightingScenario : 1; // 0x1f4
	char bTextureStreamingRotationChanged : 1; // 0x1f4
	char bStaticComponentsRegisteredInStreamingManager : 1; // 0x1f4
	char bIsVisible : 1; // 0x1f4
	AWorldSettings* WorldSettings; // 0x258
	TArray<UAssetUserData*> AssetUserData; // 0x268
	TArray<FReplicatedStaticActorDestructionInfo> DestroyedReplicatedStaticActors; // 0x288
};

struct UMovieSceneSkeletalAnimationSection : UMovieSceneSection {
	FMovieSceneSkeletalAnimationParams Params; // 0xe8
	UAnimSequence* AnimSequence; // 0x1c0
	UAnimSequenceBase* Animation; // 0x1c8
	float StartOffset; // 0x1d0
	float EndOffset; // 0x1d4
	float PlayRate; // 0x1d8
	char bReverse : 1; // 0x1dc
	FName SlotName; // 0x1e0
	FVector StartLocationOffset; // 0x1e8
	FRotator StartRotationOffset; // 0x1f4
	bool bMatchWithPrevious; // 0x200
	FName MatchedBoneName; // 0x204
	FVector MatchedLocationOffset; // 0x20c
	FRotator MatchedRotationOffset; // 0x218
	bool bMatchTranslation; // 0x224
	bool bMatchIncludeZHeight; // 0x225
	bool bMatchRotationYaw; // 0x226
	bool bMatchRotationPitch; // 0x227
	bool bMatchRotationRoll; // 0x228
};

struct UDatasmithFBXSceneImportData : UDatasmithSceneImportData {
	bool bGenerateLightmapUVs; // 0x28
	FString TexturesDir; // 0x30
	char IntermediateSerialization; // 0x40
	bool bColorizeMaterials; // 0x41
};

struct UAN_BeckenPatternAttack_C : USVAnimNotify {
	FName PatternTag; // 0x38
};

struct UBPANS_BossSpecialAttack_C : UBPANS_LandmarkMonsterMeleeAttack_C {
	int32_t SpecialDamageIndex; // 0x44
};

struct UMaterialExpressionSkyAtmosphereLightIlluminance : UMaterialExpression {
	int32_t LightIndex; // 0x40
	FExpressionInput WorldPosition; // 0x44
};

struct UPaperTileMapComponent : UMeshComponent {
	int32_t MapWidth; // 0x468
	int32_t MapHeight; // 0x46c
	int32_t TileWidth; // 0x470
	int32_t TileHeight; // 0x474
	UPaperTileSet* DefaultLayerTileSet; // 0x478
	UMaterialInterface* Material; // 0x480
	TArray<UPaperTileLayer*> TileLayers; // 0x488
	FLinearColor TileMapColor; // 0x498
	int32_t UseSingleLayerIndex; // 0x4a8
	bool bUseSingleLayer; // 0x4ac
	UPaperTileMap* TileMap; // 0x4b0
};

struct USoundSubmix : USoundSubmixWithParentBase {
	char bMuteWhenBackgrounded : 1; // 0x40
	TArray<USoundEffectSubmixPreset*> SubmixEffectChain; // 0x48
	USoundfieldEncodingSettingsBase* AmbisonicsPluginSettings; // 0x58
	int32_t EnvelopeFollowerAttackTime; // 0x60
	int32_t EnvelopeFollowerReleaseTime; // 0x64
	EGainParamMode GainMode; // 0x68
	float OutputVolume; // 0x6c
	float WetLevel; // 0x70
	float DryLevel; // 0x74
	FMulticastInlineDelegate OnSubmixRecordedFileDone; // 0x78
};

struct UCloudWatchPutMetricAlarm : UAwsCloudWatchAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UNiagaraDataInterfaceVolumeTexture : UNiagaraDataInterface {
	UVolumeTexture* Texture; // 0x38
};

struct UMaterialExpressionConstant4Vector : UMaterialExpression {
	FLinearColor Constant; // 0x40
};

struct APaperGroupedSpriteActor : AActor {
	UPaperGroupedSpriteComponent* RenderComponent; // 0x220
};

struct UMoviePlayerSettings : UObject {
	bool bWaitForMoviesToComplete; // 0x28
	bool bMoviesAreSkippable; // 0x29
	TArray<FString> StartupMovies; // 0x30
};

struct UBP_PlayerBuildingComponent_C : UCustomReplicationActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb8
	bool Option Key Down; // 0xc0
	FString PlayerUID; // 0xc8
	FS_BuildPartInfo Build Type; // 0xd8
	ACharacter* Owning Player; // 0x2d8
	UObject* Delete Actor; // 0x2e0
	UBP_PlayerInventoryComponent_C* Player Inventory Component; // 0x2e8
	float Interaction Range; // 0x2f0
	WBP_RingBase_C* Build Menu Widget; // 0x2f8
	E_BuildManagementMode CurrentBuildManagementMode; // 0x300
	ABP_BuildPartBase_C* CurrentPreviewActor; // 0x308
	int32_t CurrentBoltIndex; // 0x310
	float Preview Rotation; // 0x314
	FHitResult ClinetHitInfo; // 0x318
	ABP_BuildPartBase_C* CurrentSelectBuildPart; // 0x3a8
	float HeightOffsetMin; // 0x3b0
	float HeightOffsetMax; // 0x3b4
	E_BuildFailedType BuildFailedReason; // 0x3b8
	ABP_BuildPartBase_C* TempDependancyBuildPart; // 0x3c0
	UBuildJointComponent* LastCalcJoint; // 0x3c8
	FMulticastInlineDelegate CheckPasswordConfirm; // 0x3d0
	bool IsShowDebugMsg; // 0x3e0
	ABP_BuildPartBase_C* Temp Build Part Base; // 0x3e8
	FFloatValueFromDataTable DemolishRefundMultiply; // 0x3f0
	TArray<E_BuildJointType> CurrentActiveBoltList; // 0x418
	bool HasValidBuildType; // 0x428
};

struct USQSReceiveMessage : UAwsSQSAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UReplicationGraphNode_TearOff_ForConnection : UReplicationGraphNode {
	TArray<FTearOffActorInfo> TearOffActors; // 0x50
};

struct UMaterialExpressionDynamicParameter : UMaterialExpression {
	TArray<FString> ParamNames; // 0x40
	FLinearColor DefaultValue; // 0x50
	uint32_t ParameterIndex; // 0x60
};

struct UBreakpoint : UObject {
	char bEnabled : 1; // 0x28
	UEdGraphNode* Node; // 0x30
	char bStepOnce : 1; // 0x38
	char bStepOnce_WasPreviouslyDisabled : 1; // 0x38
	char bStepOnce_RemoveAfterHit : 1; // 0x38
};

struct UMovieSceneSpawnTrack : UMovieSceneTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
	FGuid ObjectGuid; // 0x88
};

struct UMaterialExpressionBlendMaterialAttributes : UMaterialExpression {
	FMaterialAttributesInput A; // 0x40
	FMaterialAttributesInput B; // 0x58
	FExpressionInput Alpha; // 0x70
	EMaterialAttributeBlend PixelAttributeBlendType; // 0x84
	EMaterialAttributeBlend VertexAttributeBlendType; // 0x85
};

struct UParticleModuleSubUV : UParticleModuleSubUVBase {
	USubUVAnimation* Animation; // 0x30
	FRawDistributionFloat SubImageIndex; // 0x38
	char bUseRealTime : 1; // 0x68
};

struct UPhononSpatializationSourceSettings : USpatializationPluginSourceSettingsBase {
	EIplSpatializationMethod SpatializationMethod; // 0x28
	EIplHrtfInterpolationMethod HrtfInterpolationMethod; // 0x29
};

struct UMaterialExpression : UObject {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	char bIsParameterExpression : 1; // 0x38
};

struct UMaterialExpressionDDX : UMaterialExpression {
	FExpressionInput Value; // 0x40
};

struct UReplicationGraphNode_GridCell : UReplicationGraphNode_ActorList {
	UReplicationGraphNode* DynamicNode; // 0x140
	UReplicationGraphNode_DormancyNode* DormancyNode; // 0x148
};

struct UInAppPurchaseCallbackProxy2 : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct USoundNodeDoppler : USoundNode {
	float DopplerIntensity; // 0x48
	bool bUseSmoothing; // 0x4c
	float SmoothingInterpSpeed; // 0x50
};

struct UDRM : UObject {
	FString Serial; // 0x28
};

struct UMovieSceneObjectPropertySection : UMovieSceneSection {
	FMovieSceneObjectPathChannel ObjectChannel; // 0xe8
};

struct UMaterialExpressionMaterialProxyReplace : UMaterialExpression {
	FExpressionInput RealTime; // 0x40
	FExpressionInput MaterialProxy; // 0x54
};

struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	FGuid ExpressionGUID; // 0x40
};

struct APaperCharacter : ACharacter {
	UPaperFlipbookComponent* Sprite; // 0x4b8
};

struct ABP_BuildPartBase_C : ABuildPartBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250
	UBoxComponent* RemoveFoliageShape; // 0x258
	UBoxComponent* SafeArea; // 0x260
	USceneComponent* DefaultSceneRoot; // 0x268
	float ConstructionEffect______0_80F2F1624C97FBBA656177BFDE068E79; // 0x270
	ETimelineDirection ConstructionEffect__Direction_80F2F1624C97FBBA656177BFDE068E79; // 0x274
	UTimelineComponent* ConstructionEffect; // 0x278
	bool bPreviewBuildParts; // 0x280
	float DistanceByPlayer; // 0x284
	UMaterialInstanceDynamic* Disabled Material; // 0x288
	UMaterialInstanceDynamic* Enabled Material; // 0x290
	bool IsPlacement; // 0x298
	TArray<E_BuildJointType> BuildBoltList; // 0x2a0
	FS_BuildPartInfo BuildTypeInfo; // 0x2b0
	int32_t UID; // 0x4b0
	float CurrentHP; // 0x4b4
	TArray<FString> Owners; // 0x4b8
	float DecayProtectReleaseTime; // 0x4c8
	bool bIsDecayProtected; // 0x4cc
	ABP_EnergyCoreBuildPart_C* ConnectedEnergyCore; // 0x4d0
	FTimerHandle DecayIntervalTimer; // 0x4d8
	float LastDecayTime; // 0x4e0
	float InteractableDistance; // 0x4e4
	TMap<FString, FS_MaterialArray> TempMaterial; // 0x4e8
	TMap<FString, UCurveFloat*> ConstructionEffectCurve; // 0x538
	TMap<FString, FS_MaterialArray> SpawningMaterial; // 0x588
	FText CustomName; // 0x5d8
	int32_t MeshIdx; // 0x5f0
	bool Pending Destroy; // 0x5f4
	FString PreviewRequestPlayerUID; // 0x5f8
	FString OriginalOwner; // 0x608
	TArray<FBP_TransformOfInstancedFoliageActors> RemovedFoliageActors; // 0x618
	TArray<FTransform> TemporalTransformArray; // 0x628
	AActor* LastBuildCheckOverlapActor; // 0x638
	float OriginalStability; // 0x640
	TArray<ABP_BuildPartBase_C*> DestroyDependancyChildBuildParts; // 0x648
	ABP_BuildPartBase_C* DependancyParentBuildPart; // 0x658
	float AdditiveStability; // 0x660
	float TotalStability; // 0x664
	float DestructionStability; // 0x668
	TMap<UBoxComponent*, FS_BuildPartArray> CachePulseBuildPartMap; // 0x670
	TMap<UBoxComponent*, FS_BuildPartArray> CacheOriginalBuildPartMap; // 0x6c0
	TMap<UBoxComponent*, FS_BuildPartArray> CacheAdditiveBuildPartMap; // 0x710
	float DecayMultiply; // 0x760
	FText AdjustLocationNotify; // 0x768
	E_SecurityType SecurityMode; // 0x780
	FString Password; // 0x788
	bool IsReadyToDestroyByStability; // 0x798
	bool ReserveNeed Refresh Cache; // 0x799
	bool ChangeMeshFinished; // 0x79a
	bool RecvMulticastOnspawn; // 0x79b
	FMulticastInlineDelegate OnOwnerListChanged; // 0x7a0
	FFloatValueFromDataTable BuildPartDamageMulitplier; // 0x7b0
	TArray<FString> RegisterUsers; // 0x7d8
	bool bAlreadyRefundByDemolish; // 0x7e8
	float LastRepairTime; // 0x7ec
	FMulticastInlineDelegate OnNotifyEnergyCoreConnectedStateChange; // 0x7f0
	TArray<AActor*> SafeCheckIgnoreClasses; // 0x800
	FTimerHandle ConstructionEffectTimer; // 0x810
	FIntValueFromDataTable OnlyOwnerUsingBuildPart; // 0x818
};

struct UForceFeedbackEffect : UObject {
	TArray<FForceFeedbackChannelDetails> ChannelDetails; // 0x28
	float Duration; // 0x38
};

struct UDatasmithDecalComponentTemplate : UDatasmithObjectTemplate {
	int32_t sortOrder; // 0x30
	FVector DecalSize; // 0x34
	UMaterialInterface* Material; // 0x40
};

struct UMaterialInterface : UObject {
	USubsurfaceProfile* SubsurfaceProfile; // 0x38
	FLightmassMaterialInterfaceSettings LightmassSettings; // 0x50
	TArray<FMaterialTextureInfo> TextureStreamingData; // 0x60
	TArray<UAssetUserData*> AssetUserData; // 0x70
};

struct UNavCollisionBase : UObject {
	char bIsDynamicObstacle : 1; // 0x28
};

struct UNiagaraSpriteRendererProperties : UNiagaraRendererProperties {
	UMaterialInterface* Material; // 0x80
	ENiagaraRendererSourceDataMode SourceMode; // 0x88
	FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x90
	ENiagaraSpriteAlignment Alignment; // 0xb0
	ENiagaraSpriteFacingMode FacingMode; // 0xb1
	FVector2D PivotInUVSpace; // 0xb4
	ENiagaraSortMode SortMode; // 0xbc
	FVector2D SubImageSize; // 0xc0
	char bSubImageBlend : 1; // 0xc8
	char bRemoveHMDRollInVR : 1; // 0xc8
	char bSortOnlyWhenTranslucent : 1; // 0xc8
	char bGpuLowLatencyTranslucency : 1; // 0xc8
	float MinFacingCameraBlendDistance; // 0xcc
	float MaxFacingCameraBlendDistance; // 0xd0
	char bEnableCameraDistanceCulling : 1; // 0xd4
	float MinCameraDistance; // 0xd8
	float MaxCameraDistance; // 0xdc
	uint32_t RendererVisibility; // 0xe0
	FNiagaraVariableAttributeBinding PositionBinding; // 0xe8
	FNiagaraVariableAttributeBinding ColorBinding; // 0x140
	FNiagaraVariableAttributeBinding VelocityBinding; // 0x198
	FNiagaraVariableAttributeBinding SpriteRotationBinding; // 0x1f0
	FNiagaraVariableAttributeBinding SpriteSizeBinding; // 0x248
	FNiagaraVariableAttributeBinding SpriteFacingBinding; // 0x2a0
	FNiagaraVariableAttributeBinding SpriteAlignmentBinding; // 0x2f8
	FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x350
	FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x3a8
	FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x400
	FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x458
	FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x4b0
	FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x508
	FNiagaraVariableAttributeBinding UVScaleBinding; // 0x560
	FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x5b8
	FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x610
	FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x668
	FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x6c0
	TArray<FNiagaraMaterialAttributeBinding> MaterialParameterBindings; // 0x718
};

struct UEnvQueryTest_Dot : UEnvQueryTest {
	FEnvDirection LineA; // 0x1f8
	FEnvDirection LineB; // 0x218
	EEnvTestDot TestMode; // 0x238
	bool bAbsoluteValue; // 0x239
};

struct UCloudWatchGetMetricData : UAwsCloudWatchAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UCheckBox : UContentWidget {
	ECheckBoxState CheckedState; // 0x120
	FDelegate CheckedStateDelegate; // 0x124
	FCheckBoxStyle WidgetStyle; // 0x138
	USlateWidgetStyleAsset* Style; // 0x6b8
	USlateBrushAsset* UncheckedImage; // 0x6c0
	USlateBrushAsset* UncheckedHoveredImage; // 0x6c8
	USlateBrushAsset* UncheckedPressedImage; // 0x6d0
	USlateBrushAsset* CheckedImage; // 0x6d8
	USlateBrushAsset* CheckedHoveredImage; // 0x6e0
	USlateBrushAsset* CheckedPressedImage; // 0x6e8
	USlateBrushAsset* UndeterminedImage; // 0x6f0
	USlateBrushAsset* UndeterminedHoveredImage; // 0x6f8
	USlateBrushAsset* UndeterminedPressedImage; // 0x700
	EHorizontalAlignment HorizontalAlignment; // 0x708
	FMargin Padding; // 0x70c
	FSlateColor BorderBackgroundColor; // 0x720
	EButtonClickMethod ClickMethod; // 0x748
	EButtonTouchMethod TouchMethod; // 0x749
	EButtonPressMethod PressMethod; // 0x74a
	bool IsFocusable; // 0x74b
	FMulticastInlineDelegate OnCheckStateChanged; // 0x750
};

struct USkeleton : UObject {
	TArray<FBoneNode> BoneTree; // 0x38
	TArray<FTransform> RefLocalPoses; // 0x48
	FGuid VirtualBoneGuid; // 0x170
	TArray<FVirtualBone> VirtualBones; // 0x180
	TArray<USkeletalMeshSocket*> Sockets; // 0x190
	FSmartNameContainer SmartNames; // 0x1f0
	TArray<UBlendProfile*> BlendProfiles; // 0x270
	TArray<FAnimSlotGroup> SlotGroups; // 0x280
	TArray<UAssetUserData*> AssetUserData; // 0x358
};

struct ABP_StairUBuildPart_C : ABP_StaticMeshBuildPartBase_C {
	UBP_BuildJointComponent_C* Bolt; // 0x860
};

struct AMagicLeapSharedWorldGameState : AGameState {
	FMagicLeapSharedWorldSharedData SharedWorldData; // 0x290
	FMagicLeapSharedWorldAlignmentTransforms AlignmentTransforms; // 0x2a0
	FMulticastInlineDelegate OnSharedWorldDataUpdated; // 0x2b0
	FMulticastInlineDelegate OnAlignmentTransformsUpdated; // 0x2c0
};

struct UInAppPurchaseQueryCallbackProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct AResourceBase : AActor {
	TMap<FString, FGatherLogCachedData> GatherLogCachedDataMap; // 0x220
	int32_t UID; // 0x270
};

struct AAIController_Mutation_C : ACommonAI_BaseAIController_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x498
	AActor* EnumyActor; // 0x4a0
	AActor* FriendlyActor; // 0x4a8
	AActor* CurrentActor; // 0x4b0
	AActor* PlayerActor; // 0x4b8
	FName PlayerTag; // 0x4c0
	AActor* DamageCauser; // 0x4c8
	bool IsDamaged; // 0x4d0
	float DamagedTime; // 0x4d4
};

struct UChildActorComponent : USceneComponent {
	AActor* ChildActorClass; // 0x1f8
	AActor* ChildActor; // 0x200
	AActor* ChildActorTemplate; // 0x208
};

struct UCloudWatchSetAlarmState : UAwsCloudWatchAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UMaterialExpressionShadingPathSwitch : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput Inputs[0x3]; // 0x54
};

struct UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
};

struct UWBP_Functionality_Craft_C : UWBP_FunctionalityBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	UWBP_Main_Queue_C* BP_CraftingQueue; // 0x278
	UButton* Button_Craft; // 0x280
	UButton* Button_Dec1; // 0x288
	UButton* Button_Dec10; // 0x290
	UButton* Button_Inc1; // 0x298
	UButton* Button_Inc10; // 0x2a0
	UButton* Button_Max; // 0x2a8
	UWBP_Main_Crafting_C* CraftingMenu; // 0x2b0
	UEditableTextBox* EditableTextBox_Amount; // 0x2b8
	UImage* Image_115; // 0x2c0
	UTextBlock* Text_Time; // 0x2c8
	UUniformGridPanel* UniformGridPanel_65; // 0x2d0
	UWBP_FunctionalityInfo_C* WBP_FunctionalityInfo; // 0x2d8
	UWBP_Main_Description_C* WBP_ItemDescription; // 0x2e0
	UWBP_MainFrame_Header_C* WBP_MainFrame_Header; // 0x2e8
	UWBP_MainFrame_Header_C* WBP_MainFrame_Header_2; // 0x2f0
	UWBP_ResourceListing_C* WBP_ResourceListing; // 0x2f8
	UWBP_Slot_Inventory_C* WBP_Slot_Inventory; // 0x300
	UWBP_Slot_Display_C* WBP_Slot_Result; // 0x308
	UWrapBox* WrapBox_1; // 0x310
	UWidgetSwitcher* WS_Detail; // 0x318
	ABP_CraftingFunctionalityBase_C* CraftingFunctionality; // 0x320
	TArray<UWBP_Slot_Inventory_C*> Storage Inventory Slots; // 0x328
	int32_t CraftingCount; // 0x338
	FS_CraftingRecipeData CraftingRecipeData; // 0x340
};

struct USplineComponent : UPrimitiveComponent {
	FSplineCurves SplineCurves; // 0x440
	FInterpCurveVector SplineInfo; // 0x4b0
	FInterpCurveQuat SplineRotInfo; // 0x4c8
	FInterpCurveVector SplineScaleInfo; // 0x4e0
	FInterpCurveFloat SplineReparamTable; // 0x4f8
	bool bAllowSplineEditingPerInstance; // 0x510
	int32_t ReparamStepsPerSegment; // 0x514
	float Duration; // 0x518
	bool bStationaryEndpoints; // 0x51c
	bool bSplineHasBeenEdited; // 0x51d
	bool bModifiedByConstructionScript; // 0x51e
	bool bInputSplinePointsToConstructionScript; // 0x51f
	bool bDrawDebug; // 0x520
	bool bClosedLoop; // 0x521
	bool bLoopPositionOverride; // 0x522
	float LoopPosition; // 0x524
	FVector DefaultUpVector; // 0x528
};

struct UCustomizableObject : UObject {
	USkeletalMesh* ReferenceSkeletalMesh; // 0x28
	UStaticMesh* ReferenceStaticMesh; // 0x30
	ECustomizableObjectRelevancy Relevancy; // 0x38
	bool bDisableTextureLayoutManagement; // 0x39
	TArray<TSoftObjectPtr<UMaterialInterface>> ReferencedMaterials; // 0x40
	TArray<FMutableModelImageProperties> ImageProperties; // 0x50
	TMap<FString, FCustomizableObjectIdPair> GroupNodeMap; // 0x60
	TArray<UMorphTarget*> ContributingMorphTargets; // 0xb0
	TArray<FMorphTargetVertexIndex> MorphTargetReconstructionInfo; // 0xc0
	TMap<FName, UClothSharedConfigCommon*> ClothSharedConfigs; // 0xd0
	TArray<UClothingAssetCommon*> ContributingClothingAssets; // 0x120
	TArray<FCustomizableObjectMeshToMeshVertData> ClothMeshToMeshVertData; // 0x130
	FGuid VersionId; // 0x140
	TArray<FMutableModelParameterProperties> ParameterProperties; // 0x150
	TMap<FString, FParameterUIData> ParameterUIDataMap; // 0x1b0
	TMap<FString, FParameterUIData> StateUIDataMap; // 0x200
	TMap<FString, TSoftObjectPtr<UPhysicsAsset>> PhysicsAssetsMap; // 0x250
	TSoftObjectPtr<UMutableMaskOutCache> MaskOutCache; // 0x2a0
	bool bIsChildObject; // 0x2c8
	UMutableMaskOutCache* MaskOutCache_HardRef; // 0x2d0
};

struct USteamVRHQStereoLayerShape : UStereoLayerShapeQuad {
	bool bCurved; // 0x28
	bool bAntiAlias; // 0x29
	float AutoCurveMinDistance; // 0x2c
	float AutoCurveMaxDistance; // 0x30
};

struct ULevelSequenceDirector : UObject {
	ULevelSequencePlayer* Player; // 0x28
};

struct UNiagaraParameterCollection : UObject {
	FName Namespace; // 0x28
	TArray<FNiagaraVariable> Parameters; // 0x30
	UMaterialParameterCollection* SourceMaterialCollection; // 0x40
	UNiagaraParameterCollectionInstance* DefaultInstance; // 0x48
	FGuid CompileId; // 0x50
};

struct ABP_SurvivalBeforeIngameBeaconClient_C : AOnlineBeaconBlueprint {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	USceneComponent* DefaultSceneRoot; // 0x2c8
};

struct UDatasmithAreaLightActorTemplate : UDatasmithObjectTemplate {
	EDatasmithAreaLightActorType LightType; // 0x30
	EDatasmithAreaLightActorShape LightShape; // 0x31
	FVector2D Dimensions; // 0x34
	FLinearColor Color; // 0x3c
	float Intensity; // 0x4c
	ELightUnits IntensityUnits; // 0x50
	float Temperature; // 0x54
	TSoftObjectPtr<UTextureLightProfile> IESTexture; // 0x58
	bool bUseIESBrightness; // 0x80
	float IESBrightnessScale; // 0x84
	FRotator Rotation; // 0x88
	float SourceRadius; // 0x94
	float SourceLength; // 0x98
	float AttenuationRadius; // 0x9c
};

struct USignificanceManager : UObject {
	FSoftClassPath SignificanceManagerClassName; // 0x108
};

struct UClothPhysicalMeshDataBase_Legacy : UObject {
	TArray<FVector> Vertices; // 0x28
	TArray<FVector> Normals; // 0x38
	TArray<uint32_t> Indices; // 0x48
	TArray<float> InverseMasses; // 0x58
	TArray<FClothVertBoneData> BoneData; // 0x68
	int32_t NumFixedVerts; // 0x78
	int32_t MaxBoneWeights; // 0x7c
	TArray<uint32_t> SelfCollisionIndices; // 0x80
};

struct UMaterialExpressionMakeMaterialAttributes : UMaterialExpression {
	FExpressionInput BaseColor; // 0x40
	FExpressionInput Metallic; // 0x54
	FExpressionInput Specular; // 0x68
	FExpressionInput Roughness; // 0x7c
	FExpressionInput Anisotropy; // 0x90
	FExpressionInput EmissiveColor; // 0xa4
	FExpressionInput Opacity; // 0xb8
	FExpressionInput OpacityMask; // 0xcc
	FExpressionInput Normal; // 0xe0
	FExpressionInput Tangent; // 0xf4
	FExpressionInput WorldPositionOffset; // 0x108
	FExpressionInput WorldDisplacement; // 0x11c
	FExpressionInput TessellationMultiplier; // 0x130
	FExpressionInput SubsurfaceColor; // 0x144
	FExpressionInput ClearCoat; // 0x158
	FExpressionInput ClearCoatRoughness; // 0x16c
	FExpressionInput AmbientOcclusion; // 0x180
	FExpressionInput Refraction; // 0x194
	FExpressionInput CustomizedUVs[0x8]; // 0x1a8
	FExpressionInput PixelDepthOffset; // 0x248
	FExpressionInput ShadingModel; // 0x25c
};

struct UMaterialExpressionTime : UMaterialExpression {
	char bIgnorePause : 1; // 0x40
	char bOverride_Period : 1; // 0x40
	float Period; // 0x44
};

struct UParticleModuleAccelerationBase : UParticleModule {
	char bAlwaysInWorldSpace : 1; // 0x30
};

struct UParticleModuleColor_Seeded : UParticleModuleColor {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xb0
};

struct UMaterialExpressionSine : UMaterialExpression {
	FExpressionInput Input; // 0x40
	float Period; // 0x54
};

struct UIpNetDriver : UNetDriver {
	char LogPortUnreach : 1; // 0x770
	char AllowPlayerPortUnreach : 1; // 0x770
	uint32_t MaxPortCountToTry; // 0x774
	uint32_t ServerDesiredSocketReceiveBufferBytes; // 0x784
	uint32_t ServerDesiredSocketSendBufferBytes; // 0x788
	uint32_t ClientDesiredSocketReceiveBufferBytes; // 0x78c
	uint32_t ClientDesiredSocketSendBufferBytes; // 0x790
	double MaxSecondsInReceive; // 0x798
	int32_t NbPacketsBetweenReceiveTimeTest; // 0x7a0
	float ResolutionConnectionTimeout; // 0x7a4
};

struct UGridSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
	int32_t Row; // 0x4c
	int32_t RowSpan; // 0x50
	int32_t Column; // 0x54
	int32_t ColumnSpan; // 0x58
	int32_t Layer; // 0x5c
	FVector2D Nudge; // 0x60
};

struct ULocationInfo_C : UUserWidget {
	UTextBlock* DiscoveredText; // 0x260
	UTextBlock* FastTravelText; // 0x268
	UTextBlock* HoverName; // 0x270
	FText NameText; // 0x278
	FText Discovered; // 0x290
	FText FastTravel; // 0x2a8
};

struct UDistributionVector : UDistribution {
	char bCanBeBaked : 1; // 0x30
	char bIsDirty : 1; // 0x30
	char bBakedDataSuccesfully : 1; // 0x30
};

struct UMovieSceneActorReferenceSection : UMovieSceneSection {
	FMovieSceneActorReferenceData ActorReferenceData; // 0xe8
	FIntegralCurve ActorGuidIndexCurve; // 0x198
	TArray<FString> ActorGuidStrings; // 0x218
};

struct UAkSwitchInitializationSettings : UObject {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkCommunicationSettingsWithCommSelection CommunicationSettings; // 0x90
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xb8
};

struct USubmixEffectDelayPreset : USoundEffectSubmixPreset {
	FSubmixEffectDelaySettings Settings; // 0x9c
	FSubmixEffectDelaySettings DynamicSettings; // 0xa8
};

struct UGeometryCollectionDebugDrawComponent : UActorComponent {
	AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0xb0
	AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0xb8
};

struct UFoliageType_Actor : UFoliageType {
	AActor* ActorClass; // 0x3a8
	bool bShouldAttachToBaseComponent; // 0x3b0
};

struct UBTDecorator_TagCooldown : UBTDecorator {
	FGameplayTag CooldownTag; // 0x68
	float CooldownDuration; // 0x70
	bool bAddToExistingDuration; // 0x74
	bool bActivatesCooldown; // 0x75
};

struct UInteractiveGizmo : UObject {
	UInputBehaviorSet* InputBehaviors; // 0x30
};

struct UCloudWatchLogsDescribeExportTasks : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UWBP_HUD_GuideListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Play; // 0x268
	UImage* Image_Blink; // 0x270
	UTextBlock* Text_Guide; // 0x278
	UWBP_Key_C* WBP_HeldGuide_3; // 0x280
	FText In Text; // 0x288
	FString Key; // 0x2a0
	EnumKeyInputType KeyInputType; // 0x2b0
	FString BindKeyString; // 0x2b8
	UBP_GameSettings_C* Game Settings; // 0x2c8
};

struct UAkWindowsInitializationSettings : UObject {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
	FAkWindowsAdvancedInitializationSettings AdvancedSettings; // 0xb8
};

struct ACustomizableSkeletalMeshActor : ASkeletalMeshActor {
	UCustomizableSkeletalComponent* CustomizableSkeletalComponent; // 0x2a8
};

struct UTemplateSequence : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x60
	TSoftClassPtr<UObject> BoundActorClass; // 0x68
	TSoftObjectPtr<AActor> BoundPreviewActor; // 0x90
	TMap<FGuid, FName> BoundActorComponents; // 0xb8
};

struct USkeletalMeshComponent : USkinnedMeshComponent {
	UObject* AnimBlueprintGeneratedClass; // 0x690
	UAnimInstance* AnimClass; // 0x698
	UAnimInstance* AnimScriptInstance; // 0x6a0
	UAnimInstance* PostProcessAnimInstance; // 0x6a8
	FSingleAnimationPlayData AnimationData; // 0x6b0
	FVector RootBoneTranslation; // 0x6d8
	FVector LineCheckBoundsScale; // 0x6e4
	TArray<UAnimInstance*> LinkedInstances; // 0x720
	TArray<FTransform> CachedBoneSpaceTransforms; // 0x730
	TArray<FTransform> CachedComponentSpaceTransforms; // 0x740
	float GlobalAnimRateScale; // 0x8a0
	EKinematicBonesUpdateToPhysics KinematicBonesUpdateType; // 0x8a4
	EPhysicsTransformUpdateMode PhysicsTransformUpdateMode; // 0x8a5
	EAnimationMode AnimationMode; // 0x8a7
	char bDisablePostProcessBlueprint : 1; // 0x8a9
	char bUpdateOverlapsOnAnimationFinalize : 1; // 0x8a9
	char bHasValidBodies : 1; // 0x8a9
	char bBlendPhysics : 1; // 0x8a9
	char bEnablePhysicsOnDedicatedServer : 1; // 0x8a9
	char bUpdateJointsFromAnimation : 1; // 0x8a9
	char bDisableClothSimulation : 1; // 0x8aa
	char bDisableRigidBodyAnimNode : 1; // 0x8b0
	char bAllowAnimCurveEvaluation : 1; // 0x8b0
	char bDisableAnimCurves : 1; // 0x8b0
	char bCollideWithEnvironment : 1; // 0x8b0
	char bCollideWithAttachedChildren : 1; // 0x8b1
	char bLocalSpaceSimulation : 1; // 0x8b1
	char bResetAfterTeleport : 1; // 0x8b1
	char bDeferKinematicBoneUpdate : 1; // 0x8b1
	char bNoSkeletonUpdate : 1; // 0x8b1
	char bPauseAnims : 1; // 0x8b1
	char bUseRefPoseOnInitAnim : 1; // 0x8b1
	char bEnablePerPolyCollision : 1; // 0x8b2
	char bForceRefpose : 1; // 0x8b2
	char bOnlyAllowAutonomousTickPose : 1; // 0x8b2
	char bIsAutonomousTickPose : 1; // 0x8b2
	char bOldForceRefPose : 1; // 0x8b2
	char bShowPrePhysBones : 1; // 0x8b2
	char bRequiredBonesUpToDate : 1; // 0x8b2
	char bAnimTreeInitialised : 1; // 0x8b2
	char bIncludeComponentLocationIntoBounds : 1; // 0x8b3
	char bEnableLineCheckWithBounds : 1; // 0x8b3
	char bUseBendingElements : 1; // 0x8b3
	char bUseTetrahedralConstraints : 1; // 0x8b3
	char bUseThinShellVolumeConstraints : 1; // 0x8b3
	char bUseSelfCollisions : 1; // 0x8b3
	char bUseContinuousCollisionDetection : 1; // 0x8b3
	char bPropagateCurvesToSlaves : 1; // 0x8b3
	char bSkipKinematicUpdateWhenInterpolating : 1; // 0x8b4
	char bSkipBoundsUpdateWhenInterpolating : 1; // 0x8b4
	char bNeedsQueuedAnimEventsDispatched : 1; // 0x8b4
	uint16_t CachedAnimCurveUidVersion; // 0x8b6
	EClothMassMode MassMode; // 0x8b8
	float UniformMass; // 0x8bc
	float TotalMass; // 0x8c0
	float Density; // 0x8c4
	float MinPerParticleMass; // 0x8c8
	float ClothBlendWeight; // 0x8cc
	float EdgeStiffness; // 0x8d0
	float BendingStiffness; // 0x8d4
	float AreaStiffness; // 0x8d8
	float VolumeStiffness; // 0x8dc
	float StrainLimitingStiffness; // 0x8e0
	float ShapeTargetStiffness; // 0x8e4
	bool bWaitForParallelClothTask; // 0x8e8
	TArray<FName> DisallowedAnimCurves; // 0x8f0
	UBodySetup* BodySetup; // 0x900
	FMulticastInlineDelegate OnConstraintBroken; // 0x910
	UClothingSimulationFactory* ClothingSimulationFactory; // 0x920
	float TeleportDistanceThreshold; // 0x9f8
	float TeleportRotationThreshold; // 0x9fc
	uint32_t LastPoseTickFrame; // 0xa08
	UClothingSimulationInteractor* ClothingInteractor; // 0xa60
	FMulticastInlineDelegate OnAnimInitialized; // 0xb30
};

struct UDatasmithDeltaGenSceneImportData : UDatasmithFBXSceneImportData {
	bool bMergeNodes; // 0x48
	bool bOptimizeDuplicatedNodes; // 0x49
	bool bRemoveInvisibleNodes; // 0x4a
	bool bSimplifyNodeHierarchy; // 0x4b
	bool bImportVar; // 0x4c
	FString VarPath; // 0x50
	bool bImportPos; // 0x60
	FString PosPath; // 0x68
	bool bImportTml; // 0x78
	FString TmlPath; // 0x80
};

struct ABP_MasterThrowWeapon_C : AThrowWeaponBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x5c0
	ABP_ThrowItem_C* ThrownitemClass; // 0x5c8
	float ThrowVelocity; // 0x5d0
	UAnimMontage* FP Throw Anim; // 0x5d8
	UAnimMontage* TP Throw Anim; // 0x5e0
	UAnimSequence* TP_ThrowHoldingAnim; // 0x5e8
	UAnimSequence* FP_ThrowHoldingAnim; // 0x5f0
	AActor* ThrowItemPrototype; // 0x5f8
	bool AleardyThrow; // 0x600
	float ThrowAngle; // 0x604
	float ThrowGravity; // 0x608
};

struct UBP_AvgFrameCheckComponent_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	TArray<float> FrameArray; // 0xb8
	float LatestAvgFrame; // 0xc8
	TArray<float> FrameResultArray; // 0xd0
	TArray<float> ServerFrameResultArray; // 0xe0
	float Temp; // 0xf0
	FString RMVisURL; // 0xf8
	TArray<FBlueprintJsonValue> ClientFrameJsonArray; // 0x108
	TArray<FBlueprintJsonValue> ServerFrameJsonArray; // 0x118
};

struct UCloudWatchPutCompositeAlarm : UAwsCloudWatchAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UInterpTrackFloatMaterialParam : UInterpTrackFloatBase {
	TArray<UMaterialInterface*> TargetMaterials; // 0x90
	FName ParamName; // 0xa0
};

struct UStreamingSettings : UDeveloperSettings {
	char AsyncLoadingThreadEnabled : 1; // 0x38
	char WarnIfTimeLimitExceeded : 1; // 0x38
	float TimeLimitExceededMultiplier; // 0x3c
	float TimeLimitExceededMinTime; // 0x40
	int32_t MinBulkDataSizeForAsyncLoading; // 0x44
	char UseBackgroundLevelStreaming : 1; // 0x48
	char AsyncLoadingUseFullTimeLimit : 1; // 0x48
	float AsyncLoadingTimeLimit; // 0x4c
	float PriorityAsyncLoadingExtraTime; // 0x50
	float LevelStreamingActorsUpdateTimeLimit; // 0x54
	float PriorityLevelStreamingActorsUpdateExtraTime; // 0x58
	int32_t LevelStreamingComponentsRegistrationGranularity; // 0x5c
	float LevelStreamingUnregisterComponentsTimeLimit; // 0x60
	int32_t LevelStreamingComponentsUnregistrationGranularity; // 0x64
	char FlushStreamingOnExit : 1; // 0x68
	char EventDrivenLoaderEnabled : 1; // 0x68
};

struct UWmfMediaSettings : UObject {
	bool AllowNonStandardCodecs; // 0x28
	bool LowLatency; // 0x29
	bool NativeAudioOut; // 0x2a
	bool HardwareAcceleratedVideoDecoding; // 0x2b
};

struct ABP_DialogueActor_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	USceneComponent* DefaultSceneRoot; // 0x228
	int32_t DialogueIndex; // 0x230
	bool Playing; // 0x234
	FName InDIalogueUID; // 0x238
	FName OutDIalogueUID; // 0x240
	FTimerHandle EndOverlapTimer; // 0x248
};

struct UMaterialExpressionClamp : UMaterialExpression {
	FExpressionInput Input; // 0x40
	FExpressionInput Min; // 0x54
	FExpressionInput Max; // 0x68
	EClampMode ClampMode; // 0x7c
	float MinDefault; // 0x80
	float MaxDefault; // 0x84
};

struct UMaterialExpressionComponentMask : UMaterialExpression {
	FExpressionInput Input; // 0x40
	char R : 1; // 0x54
	char G : 1; // 0x54
	char B : 1; // 0x54
	char A : 1; // 0x54
};

struct UWBP_PopUp_TransferTerrasite_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* Button_Dec1; // 0x268
	UButton* Button_Inc1; // 0x270
	UCanvasPanel* CanvasPanel_759; // 0x278
	UEditableTextBox* EditableTextBox_Split; // 0x280
	UImage* Image; // 0x288
	UImage* Image_119; // 0x290
	UTextBlock* MailNotice; // 0x298
	UScaleBox* ScaleBox_103; // 0x2a0
	URichTextBlock* Text_Desc; // 0x2a8
	UTextBlock* Text_Name; // 0x2b0
	UWBP_Functionality_TransferTerrasiteList_C* WBP_Functionality_TransferTerrasiteList_PopUpViewer; // 0x2b8
	UWBP_MainFrame_C* WBP_MainFrame; // 0x2c0
	UWBP_PopUp_Button_C* WBP_PopUp_Button; // 0x2c8
	UWBP_Toolbar_Close_C* WBP_Toolbar_Close; // 0x2d0
	UWBP_Functionality_TransferTerrasiteList_C* WBP_Functionality_TransferTerrasiteList; // 0x2d8
	int32_t MerchandiseCount; // 0x2e0
	int32_t MerchandisePurchasableCount; // 0x2e4
};

struct UVehicleDustData : UDataAsset {
	UParticleSystem* WaterFX; // 0x30
	UParticleSystem* DirtFX; // 0x38
	UParticleSystem* AsphaltFX; // 0x40
	float WaterMinSpeed; // 0x48
	float WaterMaxSpeed; // 0x4c
	float DirtMinSpeed; // 0x50
	float DirtMaxSpeed; // 0x54
	float AsphaltMinSpeed; // 0x58
	float AsphaltMaxSpeed; // 0x5c
	bool WaterSpawnReverse; // 0x60
	float WaterMinSpawn; // 0x64
	float WaterMaxSpawn; // 0x68
	bool DirtSpawnReverse; // 0x6c
	float DirtMinSpawn; // 0x70
	float DirtMaxSpawn; // 0x74
	bool AsphaltSpawnReverse; // 0x78
	float AsphaltMinSpawn; // 0x7c
	float AsphaltMaxSpawn; // 0x80
	bool WaterLifeTimeReverse; // 0x84
	float WaterMinLifeTime; // 0x88
	float WaterMaxLifeTime; // 0x8c
	bool DirtLifeTimeReverse; // 0x90
	float DirtMinLifeTime; // 0x94
	float DirtMaxLifeTime; // 0x98
	bool AsphaltLifeTimeReverse; // 0x9c
	float AsphaltMinLifeTime; // 0xa0
	float AsphaltMaxLifeTime; // 0xa4
	FVector WaterMinInitSize; // 0xa8
	FVector WaterMaxInitSize; // 0xb4
	FVector DirtMinInitSize; // 0xc0
	FVector DirtMaxInitSize; // 0xcc
	FVector AsphaltMinInitSize; // 0xd8
	FVector AsphaltMaxInitSize; // 0xe4
};

struct UParticleModuleEventReceiverPlaySound : UParticleModuleEventReceiverBase {
	USoundBase* Sound; // 0x40
};

struct ULogoutCallbackProxy : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UParticleModuleLocationBoneSocket : UParticleModuleLocationBase {
	ELocationBoneSocketSource SourceType; // 0x30
	FVector UniversalOffset; // 0x34
	TArray<FLocationBoneSocketInfo> SourceLocations; // 0x40
	ELocationBoneSocketSelectionMethod SelectionMethod; // 0x50
	char bUpdatePositionEachFrame : 1; // 0x54
	char bOrientMeshEmitters : 1; // 0x54
	char bInheritBoneVelocity : 1; // 0x54
	float InheritVelocityScale; // 0x58
	FName SkelMeshActorParamName; // 0x5c
	int32_t NumPreSelectedIndices; // 0x64
};

struct UInterpTrackFloatParticleParam : UInterpTrackFloatBase {
	FName ParamName; // 0x90
};

struct ANavLinkProxy : AActor {
	TArray<FNavigationLink> PointLinks; // 0x230
	TArray<FNavigationSegmentLink> SegmentLinks; // 0x240
	UNavLinkCustomComponent* SmartLinkComp; // 0x250
	bool bSmartLinkIsRelevant; // 0x258
	FMulticastInlineDelegate OnSmartLinkReached; // 0x260
};

struct UMonoWaveTableSynthPreset : UObject {
	FString PresetName; // 0x28
	char bLockKeyframesToGridBool : 1; // 0x38
	int32_t LockKeyframesToGrid; // 0x3c
	int32_t WaveTableResolution; // 0x40
	TArray<FRuntimeFloatCurve> WaveTable; // 0x48
	char bNormalizeWaveTables : 1; // 0x58
};

struct UARPlaneComponent : UARComponent {
	FARPlaneUpdatePayload ReplicatedPayload; // 0x280
};

struct UBTTask_MeleeAttack_JuggernautJunior_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	float DelayTime; // 0xb0
	FBlackboardKeySelector IsMeleeAttack; // 0xb8
	FBlackboardKeySelector TargetActor; // 0xe0
	FVector FrontMoveLocation; // 0x108
	APawn* Controlled Pawn; // 0x118
};

struct UBP_SurvivalSteamConnectorClient_C : USurvivalWebsocketConnectorBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x90
	int32_t SteamAuthSessionTicketHandle; // 0x98
	FString ticket; // 0xa0
	FWebsocketClientConnectionInfo ConnectionInfo; // 0xb0
};

struct UWBP_Radiogram_6010218_C : UWBP_radiogram_CustomBase_C {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x298
	UTextBlock* TextBlock; // 0x2a0
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x2a8
	UWBP_RadiogramListing_C* WBP_RadiogramListing_2; // 0x2b0
	UWBP_RadiogramListing_C* WBP_RadiogramListing_3; // 0x2b8
	UWBP_RadiogramListing_C* WBP_RadiogramListing_4; // 0x2c0
};

struct UPhononSourceComponent : USceneComponent {
	float BakingRadius; // 0x1f8
	FName UniqueIdentifier; // 0x1fc
};

struct UARTrackedImage : UARTrackedGeometry {
	UARCandidateImage* DetectedImage; // 0xf8
	FVector2D EstimatedSize; // 0x100
};

struct UWBP_Radiogram_6010216_C : UWBP_radiogram_CustomBase_C {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x298
	UTextBlock* TextBlock; // 0x2a0
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x2a8
};

struct AHUD : AActor {
	APlayerController* PlayerOwner; // 0x220
	char bLostFocusPaused : 1; // 0x228
	char bShowHUD : 1; // 0x228
	char bShowDebugInfo : 1; // 0x228
	int32_t CurrentTargetIndex; // 0x22c
	char bShowHitBoxDebugInfo : 1; // 0x230
	char bShowOverlays : 1; // 0x230
	char bEnableDebugTextShadow : 1; // 0x230
	TArray<AActor*> PostRenderedActors; // 0x238
	TArray<FName> DebugDisplay; // 0x250
	TArray<FName> ToggledDebugCategories; // 0x260
	UCanvas* Canvas; // 0x270
	UCanvas* DebugCanvas; // 0x278
	TArray<FDebugTextInfo> DebugTextList; // 0x280
	AActor* ShowDebugTargetDesiredClass; // 0x290
	AActor* ShowDebugTargetActor; // 0x298
};

struct UNiagaraComponentRendererProperties : UNiagaraRendererProperties {
	USceneComponent* ComponentType; // 0x80
	uint32_t ComponentCountLimit; // 0x88
	FNiagaraVariableAttributeBinding EnabledBinding; // 0x90
	bool bAssignComponentsOnParticleID; // 0xe8
	bool bOnlyCreateComponentsOnParticleSpawn; // 0xe9
	USceneComponent* TemplateComponent; // 0xf0
	TArray<FNiagaraComponentPropertyBinding> PropertyBindings; // 0xf8
};

struct UWBP_HackingBox_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image_53; // 0x268
	UImage* Image_122; // 0x270
	UImage* Image_239; // 0x278
	UImage* Image_317; // 0x280
	UTextBlock* TB_Discription; // 0x288
	UTextBlock* Text_Time; // 0x290
	UMaterialInstanceDynamic* NewVar_1; // 0x298
	float Progress; // 0x2a0
};

struct UAsyncTask_LoadXRDeviceVisComponent : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnModelLoaded; // 0x30
	FMulticastInlineDelegate OnLoadFailure; // 0x40
	UPrimitiveComponent* SpawnedComponent; // 0x58
};

struct UEnvQueryTest_Volume : UEnvQueryTest {
	UEnvQueryContext* VolumeContext; // 0x1f8
	AVolume* VolumeClass; // 0x200
	char bDoComplexVolumeTest : 1; // 0x208
};

struct UWBP_ResourceListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* Button_To; // 0x268
	UImage* Image_92; // 0x270
	UTextBlock* Onhand; // 0x278
	UTextBlock* Required; // 0x280
	UWBP_Slot_Display_C* WBP_Slot_Display; // 0x288
	int32_t Item ID; // 0x290
	UBP_PlayerInventoryComponent_C* Inventory Component; // 0x298
	E_CraftingType CraftingCatergoryType; // 0x2a0
	bool TraceResouceCount; // 0x2a1
	int32_t Amount; // 0x2a4
	int32_t Product; // 0x2a8
};

struct AOnlineBeaconHostObject : AActor {
	FString BeaconTypeName; // 0x220
	AOnlineBeaconClient* ClientBeaconActorClass; // 0x230
	TArray<AOnlineBeaconClient*> ClientActors; // 0x238
};

struct USurvivalReplicationGraphConnection : UNetReplicationGraphConnection {
	USurvivalReplicationGraphNode_AlwaysRelevant_ForConnection* AlwaysRelevantForConnectionNode; // 0x238
	USurvivalReplicationGraphNode_TeamRelevant_ForConnection* TeamRelevant_ForConnectionNode; // 0x240
	USurvivalReplicationGraphNode_BuildPartsOwnerRelevant_ForConnection* BuildPartsOwnerRelevant_ForConnectionNode; // 0x248
};

struct UShaderPlatformQualitySettings : UObject {
	FMaterialQualityOverrides QualityOverrides[0x4]; // 0x28
};

struct UCineCameraComponent : UCameraComponent {
	FCameraFilmbackSettings FilmbackSettings; // 0x7c0
	FCameraFilmbackSettings Filmback; // 0x7cc
	FCameraLensSettings LensSettings; // 0x7d8
	FCameraFocusSettings FocusSettings; // 0x7f0
	float CurrentFocalLength; // 0x848
	float CurrentAperture; // 0x84c
	float CurrentFocusDistance; // 0x850
	TArray<FNamedFilmbackPreset> FilmbackPresets; // 0x860
	TArray<FNamedLensPreset> LensPresets; // 0x870
	FString DefaultFilmbackPresetName; // 0x880
	FString DefaultFilmbackPreset; // 0x890
	FString DefaultLensPresetName; // 0x8a0
	float DefaultLensFocalLength; // 0x8b0
	float DefaultLensFStop; // 0x8b4
};

struct UWorldComposition : UObject {
	TArray<ULevelStreaming*> TilesStreaming; // 0x48
	double TilesStreamingTimeThreshold; // 0x58
	bool bLoadAllTilesDuringCinematic; // 0x60
	bool bRebaseOriginIn3DSpace; // 0x61
	float RebaseOriginDistance; // 0x64
};

struct AReplicationGraphDebugActor : AActor {
	UReplicationGraph* ReplicationGraph; // 0x220
	UNetReplicationGraphConnection* ConnectionManager; // 0x228
};

struct UDatasmithCommonTessellationOptions : UDatasmithOptionsBase {
	FDatasmithTessellationOptions Options; // 0x28
};

struct USourceEffectWaveShaperPreset : USoundEffectSourcePreset {
	FSourceEffectWaveShaperSettings Settings; // 0x98
};

struct UAnimationSharingManager : UObject {
	TArray<USkeleton*> Skeletons; // 0x28
	TArray<UAnimSharingInstance*> PerSkeletonData; // 0x38
};

struct UDistributionFloatConstantCurve : UDistributionFloat {
	FInterpCurveFloat ConstantCurve; // 0x38
};

struct ALuminAROrigin : AAROriginActor {
	UMRMeshComponent* MRMeshComponent; // 0x220
	UMaterialInterface* PlaneSurfaceMaterial; // 0x228
	UMaterialInterface* WireframeMaterial; // 0x230
};

struct ABP_HologramTrap_CeilingBase_TriangleCeiling_C : ABP_HologramTrap_CeilingBase_C {
	UBoxComponent* PulseCheck; // 0x950
	UBoxComponent* PulseCheck3; // 0x958
	UBoxComponent* PulseCheck2; // 0x960
	USceneComponent* Pulse; // 0x968
};

struct UMaterialExpressionWorldPosition : UMaterialExpression {
	EWorldPositionIncludedOffsets WorldPositionShaderOffset; // 0x40
};

struct UGameplayTagsManager : UObject {
	TArray<FGameplayTagSource> TagSources; // 0xc0
	TArray<UDataTable*> GameplayTagTables; // 0x1b0
};

struct UWBP_Slot_Attachment_C : UWBP_Slot_Equipment_C {
	int32_t InventoryIndex; // 0x4d4
};

struct ABP_LandmarkAIControellr_C : ACommonAI_BaseAIController_C {
	float ForgettingTargetTime; // 0x498
};

struct UWBP_Main_TeamListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image_55; // 0x268
	UImage* Image_Leader; // 0x270
	UProgressBar* ProgressBar_Timer; // 0x278
	UScaleBox* ScaleBox_Cancel; // 0x280
	UScaleBox* ScaleBox_Confirm; // 0x288
	UScaleBox* ScaleBox_HandOver; // 0x290
	UScaleBox* ScaleBox_Mic; // 0x298
	UScaleBox* ScaleBox_Quit; // 0x2a0
	UScaleBox* ScaleBox_Sound; // 0x2a8
	UTextBlock* Text_TeamName; // 0x2b0
	UWBP_Button_UI_C* WBP_Button_Cancel; // 0x2b8
	UWBP_Button_UI_C* WBP_Button_Confirm; // 0x2c0
	UWBP_Button_UI_C* WBP_Button_HandOver; // 0x2c8
	UWBP_Button_UI_C* WBP_Button_Mic; // 0x2d0
	UWBP_Button_UI_C* WBP_Button_Quit; // 0x2d8
	UWBP_Button_UI_C* WBP_Button_Sound; // 0x2e0
	FTeamMemberInfo TeamMemberInfo; // 0x2e8
	bool bRequest; // 0x308
	bool bSender; // 0x309
	bool bIntive; // 0x30a
	bool bQuit; // 0x30b
	float WorldTime; // 0x30c
	float ExpireTime; // 0x310
	FString Name; // 0x318
	FIntValueFromDataTable MaxTeamSize; // 0x328
};

struct UAnimBP_Juggernaut_Type00_C : UNPCAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x310
	FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x318
	FAnimNode_DragonSpineSolver AnimGraphNode_DragonSpineSolver; // 0x430
	FAnimNode_DragonFeetSolver AnimGraphNode_DragonFeetSolver; // 0xc10
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x1260
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x1280
	FAnimNode_Root AnimGraphNode_Root_2; // 0x12a0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x12d0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x12f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x1320
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x1348
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x1370
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x1398
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x13c0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x13e8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x1410
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x1438
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1460
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x1488
	FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x1508
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x1538
	FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x15b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x15e8
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x1668
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x1698
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x1718
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x1748
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x17c8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x17f8
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x18e0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x1910
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6; // 0x1990
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x1a30
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x1ab0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1ae0
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1bc8
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1bf8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x1ca8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; // 0x1cf0
	FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x1d90
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x1f68
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x20c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x2160
	FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer; // 0x2188
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x2238
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x22d8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x2358
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2460
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x2480
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x24a0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x2560
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x2600
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x2628
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x2650
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x26d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2770
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x27f0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x28b0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x2a08
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x2a30
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x2a58
	FAnimNode_Root AnimGraphNode_Root; // 0x2b60
	bool IsSpawnAnimation; // 0x2b90
	bool StopAllForOptimization_1; // 0x2b91
	bool IsServer; // 0x2b92
	bool IsTurnAnimation; // 0x2b93
	float TurnDirection; // 0x2b94
	float TurnAngle; // 0x2b98
	TArray<FDragonData_FootData> FootIKInfo; // 0x2ba0
	bool IsHoverAnimation; // 0x2bb0
	float WingRotationYaw; // 0x2bb4
	float WingRotationPitch; // 0x2bb8
	bool IsReturnToSpawnPoint; // 0x2bbc
	bool IsArriveToSpawnPoint; // 0x2bbd
	bool IsGroggy; // 0x2bbe
	bool IsWalkingAttack; // 0x2bbf
	bool IsExecutionAnimation; // 0x2bc0
	float PelvisPitch; // 0x2bc4
};

struct UMeshSimplificationSettings : UDeveloperSettings {
	FName MeshReductionModuleName; // 0x38
};

struct ABP_SkeletalMeshBuildPartBase_C : ABP_BuildPartBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x840
	USkeletalMeshComponent* SkeletalMesh; // 0x848
	UDestructibleComponent* Destructible; // 0x850
	float Destructible Damage Amount; // 0x858
};

struct UWBP_Handled_Item_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* ItemCount; // 0x268
	UImage* ItemImage; // 0x270
	FItemInventory Item; // 0x278
};

struct UInterpTrackInstAnimControl : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
};

struct UMaterialExpressionSceneColor : UMaterialExpression {
	EMaterialSceneAttributeInputMode InputMode; // 0x40
	FExpressionInput Input; // 0x44
	FExpressionInput OffsetFraction; // 0x58
	FVector2D ConstInput; // 0x6c
};

struct UInterpTrackLinearColorBase : UInterpTrack {
	FInterpCurveLinearColor LinearColorTrack; // 0x70
	float CurveTension; // 0x88
};

struct UParticleModuleTypeDataGpu : UParticleModuleTypeDataBase {
	FGPUSpriteEmitterInfo EmitterInfo; // 0x30
	FGPUSpriteResourceData ResourceData; // 0x2b0
	float CameraMotionBlurAmount; // 0x410
	char bClearExistingParticlesOnInit : 1; // 0x414
};

struct ACharacter : APawn {
	USkeletalMeshComponent* Mesh; // 0x280
	UCharacterMovementComponent* CharacterMovement; // 0x288
	UCapsuleComponent* CapsuleComponent; // 0x290
	FBasedMovementInfo BasedMovement; // 0x298
	FBasedMovementInfo ReplicatedBasedMovement; // 0x2c8
	float AnimRootMotionTranslationScale; // 0x2f8
	FVector BaseTranslationOffset; // 0x2fc
	FQuat BaseRotationOffset; // 0x310
	float ReplicatedServerLastTransformUpdateTimeStamp; // 0x320
	float ReplayLastTransformUpdateTimeStamp; // 0x324
	char ReplicatedMovementMode; // 0x328
	bool bInBaseReplication; // 0x329
	float CrouchedEyeHeight; // 0x32c
	char bIsCrouched : 1; // 0x330
	char bProxyIsJumpForceApplied : 1; // 0x330
	char bPressedJump : 1; // 0x330
	char bClientUpdating : 1; // 0x330
	char bClientWasFalling : 1; // 0x330
	char bClientResimulateRootMotion : 1; // 0x330
	char bClientResimulateRootMotionSources : 1; // 0x330
	char bSimGravityDisabled : 1; // 0x330
	char bClientCheckEncroachmentOnNetUpdate : 1; // 0x331
	char bServerMoveIgnoreRootMotion : 1; // 0x331
	char bWasJumping : 1; // 0x331
	float JumpKeyHoldTime; // 0x334
	float JumpForceTimeRemaining; // 0x338
	float ProxyJumpForceStartedTime; // 0x33c
	float JumpMaxHoldTime; // 0x340
	int32_t JumpMaxCount; // 0x344
	int32_t JumpCurrentCount; // 0x348
	int32_t JumpCurrentCountPreJump; // 0x34c
	FMulticastInlineDelegate OnReachedJumpApex; // 0x358
	FMulticastInlineDelegate MovementModeChangedDelegate; // 0x378
	FMulticastInlineDelegate OnCharacterMovementUpdated; // 0x388
	FRootMotionSourceGroup SavedRootMotion; // 0x398
	FRootMotionMovementParams ClientRootMotionParams; // 0x3d0
	TArray<FSimulatedRootMotionReplicatedMove> RootMotionRepMoves; // 0x410
	FRepRootMotionMontage RepRootMotion; // 0x420
};

struct UGizmoTransformProxyTransformSource : UGizmoBaseTransformSource {
	UTransformProxy* Proxy; // 0x48
};

struct UWBP_HUD_Condition_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWBP_HUD_ConditionListing_C* Condition_Bleed; // 0x268
	UWBP_HUD_ConditionListing_C* Condition_Cold; // 0x270
	UWBP_HUD_ConditionListing_C* Condition_Fever; // 0x278
	UWBP_HUD_ConditionListing_C* Condition_Fracture; // 0x280
	UWBP_HUD_ConditionListing_C* Condition_Heat; // 0x288
	UWBP_HUD_ConditionListing_C* Condition_Hungry; // 0x290
	UWBP_HUD_ConditionListing_C* Condition_Hungry_2; // 0x298
	UWBP_HUD_ConditionListing_C* Condition_Hypothermia; // 0x2a0
	UWBP_HUD_ConditionListing_C* Condition_Radioactive; // 0x2a8
	UWBP_HUD_ConditionListing_C* Condition_SafetyZone; // 0x2b0
	UWBP_HUD_ConditionListing_C* Condition_Scan; // 0x2b8
	UWBP_HUD_ConditionListing_C* Condition_Stealth; // 0x2c0
	UWBP_HUD_ConditionListing_C* Condition_Thirsty; // 0x2c8
	UWBP_HUD_ConditionListing_C* Condition_Thirsty_2; // 0x2d0
	UHorizontalBox* ConditionPanel; // 0x2d8
	UBP_PlayerInventoryComponent_C* Player Inventory Component; // 0x2e0
	float CurrentBodyTemperature; // 0x2e8
	UWBP_HUD_ConditionListing_C* WBP Condition; // 0x2f0
	UInvalidationBox* Invalidation Box; // 0x2f8
	FTimerHandle TickEventHandle; // 0x300
};

struct AUltra_Dynamic_Sky_BP_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UExponentialHeightFogComponent* HeightFog_Cloudy; // 0x228
	UPostProcessComponent* Exposure; // 0x230
	UExponentialHeightFogComponent* HeightFog; // 0x238
	USkyLightComponent* SkyLight; // 0x240
	UDirectionalLightComponent* Moon; // 0x248
	UDirectionalLightComponent* Sun; // 0x250
	USkyAtmosphereComponent* SkyAtmosphere; // 0x258
	UArrowComponent* Moon_Root; // 0x260
	UArrowComponent* Sun_Root; // 0x268
	UStaticMeshComponent* Ultra_Dynamic_Sky_Sphere; // 0x270
	USceneComponent* DefaultSceneRoot; // 0x278
	UDS_FeatureToggle Sun Light; // 0x280
	ADirectionalLight* Custom Sun Light Actor; // 0x288
	EComponentMobility Sun_Mobility; // 0x290
	UMaterialInstanceDynamic* Sky_MID; // 0x298
	bool Refresh Settings; // 0x2a0
	float Cloud speed; // 0x2a4
	float Cloud Density; // 0x2a8
	float Cloud Wisps Opacity; // 0x2ac
	TArray<UCurveLinearColor*> Horizon Base Color Curve; // 0x2b0
	TArray<UCurveLinearColor*> Zenith Base Color Curve; // 0x2c0
	TArray<UCurveLinearColor*> Cloud Light Color Curve; // 0x2d0
	TArray<UCurveLinearColor*> Cloud Dark Color Curve; // 0x2e0
	float Time of Day; // 0x2f0
	TArray<UCurveLinearColor*> Sun Color Curve; // 0x2f8
	UCurveFloat* Shine Intensity Curve; // 0x308
	float Saturation; // 0x310
	UCurveLinearColor* Sun Cloudy Color Curve; // 0x318
	UCurveFloat* Stars Intensity Curve; // 0x320
	float Cloud Phase; // 0x328
	bool Moon Casts Shadows; // 0x32c
	float Moon Scale; // 0x330
	float Moon Inclination; // 0x334
	float Moon Phase; // 0x338
	bool Automatically Set Advanced Settings using Time of Day; // 0x33c
	float Stars Visibility; // 0x340
	float Moon Intensity; // 0x344
	float Moon Position; // 0x348
	float Sun Angle; // 0x34c
	FLinearColor Horizon Base Color; // 0x350
	FLinearColor Zenith Base Color; // 0x360
	FLinearColor Cloud Light Color; // 0x370
	FLinearColor Cloud Dark Color; // 0x380
	FLinearColor Sun color; // 0x390
	float Cloud Shine Intensity; // 0x3a0
	FLinearColor Sun Light Color; // 0x3a4
	bool Animate Time of Day; // 0x3b4
	float Day Length; // 0x3b8
	UCurveFloat* Moon Position Curve; // 0x3c0
	float Night Length; // 0x3c8
	float Cloud Density_target; // 0x3cc
	float Cloud opacity; // 0x3d0
	float Overall Intensity; // 0x3d4
	bool Sun Casts Shadows; // 0x3d8
	float Sun Shader Intensity; // 0x3dc
	FLinearColor Moon Color; // 0x3e0
	float Shine Variation; // 0x3f0
	float Sun Lighting Intensity; // 0x3f4
	UCurveFloat* Sun Highlight Radius_curve; // 0x3f8
	float Sun Highlight Radius; // 0x400
	bool First Day; // 0x404
	bool Simulate Moon Phase Changes; // 0x405
	float Stars_Intensity; // 0x408
	FLinearColor Stars_Color; // 0x40c
	FLinearColor Starlight_Glow; // 0x41c
	float Moon Orbit Offset; // 0x42c
	FRotator Sun Rotation; // 0x430
	float Sun Radius; // 0x43c
	UMaterialInstanceDynamic* Cloud Shadows MID; // 0x440
	bool Use Cloud Shadows; // 0x448
	float Cloud Shadows Scale; // 0x44c
	float Cloud Shadows Intensity; // 0x450
	UDS_FeatureToggle Moon Light; // 0x454
	ADirectionalLight* Custom Moon Light Actor; // 0x458
	bool Manually Select Sun Color; // 0x460
	bool Automatically Set Moon Light Rotation; // 0x461
	bool Automatically Set Sun Light Rotation; // 0x462
	float Moonlight Intensity; // 0x464
	float Stars Speed; // 0x468
	float Sun Inclination; // 0x46c
	float Sun Yaw; // 0x470
	float Moon Rotation; // 0x474
	UTexture2D* Custom Moon Texture; // 0x478
	bool Use Custom Moon Texture; // 0x480
	EComponentMobility Moon_Mobility; // 0x481
	UDS_FeatureToggle Sky_Light; // 0x482
	ASkyLight* Custom Sky Light Actor; // 0x488
	EComponentMobility Sky_Light_Mobility; // 0x490
	UDS_FeatureToggle Height Fog; // 0x491
	AExponentialHeightFog* Custom Height Fog Actor; // 0x498
	bool Recapture Sky light periodically; // 0x4a0
	float Sky Light recapture period; // 0x4a4
	UCurveFloat* Night Filter Curve; // 0x4a8
	bool Stationary_Lights; // 0x4b0
	float Night brightness; // 0x4b4
	float Moon Glow Intensity; // 0x4b8
	UCurveFloat* Directional_Intensity_Curve; // 0x4c0
	float Sun_Light_Intensity; // 0x4c8
	float Aurora Intensity; // 0x4cc
	float Aurora Speed; // 0x4d0
	bool Use Fast Skylight; // 0x4d4
	bool Use Auroras; // 0x4d5
	UTexture* Clouds Base Texture; // 0x4d8
	float Cloud Tiling; // 0x4e0
	float Cloud Direction; // 0x4e4
	bool One cloud layer; // 0x4e8
	float Cloud Height 1; // 0x4ec
	float Cloud Height 2; // 0x4f0
	bool Animate Cloud Density; // 0x4f4
	float Cloud Density Change Speed (When Animated); // 0x4f8
	float Minimum Cloud Density (When Animated); // 0x4fc
	float Maximum Cloud Density (When Animated); // 0x500
	bool Use Sky Atmosphere to Determine Colors; // 0x504
	int32_t color_scheme (If Using Legacy Coloring); // 0x508
	float Moon Angle; // 0x50c
	float Sun_Volumetric_Scattering_Intensity; // 0x510
	float Moon_Volumetric_Scattering_Intensity; // 0x514
	float Aurora Phase; // 0x518
	float Stars Phase; // 0x51c
	FString Readme; // 0x520
	UCurveLinearColor* Horizon Base Color Curve_SA; // 0x530
	ULightComponent* Sun_LightComponent; // 0x538
	ULightComponent* Moon_LightComponent; // 0x540
	USkyLightComponent* SkyLightComponent; // 0x548
	UExponentialHeightFogComponent* Height Fog Component; // 0x550
	bool Use_Exposure_Range; // 0x558
	float Exposure_Min; // 0x55c
	float Exposure_Max; // 0x560
	float TimeRandomOffset; // 0x564
	float Extend Dawn and Dusk; // 0x568
	bool Stationary_Lights; // 0x56c
	FMulticastInlineDelegate Start_Raining; // 0x570
	FMulticastInlineDelegate Stop_Raining; // 0x580
	bool Raining; // 0x590
	float Rain_Event_Threshold; // 0x594
	float Sky Light Intensity; // 0x598
	float Cloud Density Interpolated; // 0x59c
	UExponentialHeightFogComponent* HeightFogOverlay; // 0x5a0
	float HeightFogOverlayAlpha; // 0x5a8
	FFloatValueFromDataTable TOD_SunSetTime; // 0x5b0
	FFloatValueFromDataTable TOD_SunRiseTime; // 0x5d8
	UCurveFloat* Sun Direction Curve by Time; // 0x600
	FFloatRange CloudDensity Range for HeightFog Change; // 0x608
	bool bHasBegunPlay; // 0x618
};

struct ABP_LevelTimeOfDayManager_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	USceneComponent* DefaultSceneRoot; // 0x228
	ABP_TimeOfDayManager_C* TODManager; // 0x230
	FTimecode VisibleTimeStart; // 0x238
	FTimecode VisibleTimeEnd; // 0x24c
};

struct UMaverick_SK_Skeleton_AnimBlueprint_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8
};

struct UBaseBrushTool : UMeshSurfacePointTool {
	UBrushBaseProperties* BrushProperties; // 0xc0
	bool bInBrushStroke; // 0xc8
	float WorldToLocalScale; // 0xcc
	FBrushStampData LastBrushStamp; // 0xd0
	TSoftClassPtr<UObject> PropertyClass; // 0x190
	UBrushStampIndicator* BrushStampIndicator; // 0x1b8
};

struct UParticleModuleOrbit : UParticleModuleOrbitBase {
	EOrbitChainMode ChainMode; // 0x38
	FRawDistributionVector OffsetAmount; // 0x40
	FOrbitOptions OffsetOptions; // 0x88
	FRawDistributionVector RotationAmount; // 0x90
	FOrbitOptions RotationOptions; // 0xd8
	FRawDistributionVector RotationRateAmount; // 0xe0
	FOrbitOptions RotationRateOptions; // 0x128
};

struct UAREnvironmentCaptureProbe : UARTrackedGeometry {
	FVector Extent; // 0xf8
	UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture; // 0x108
};

struct ULocalMap_C : UUserWidget {
	UImage* BorderImage; // 0x260
	ULocalMap_Image_C* LocalMap_Image; // 0x268
	UWBP_MapMarker_Player_C* PlayerMarker; // 0x270
};

struct UParticleModuleBeamSource : UParticleModuleBeamBase {
	Beam2SourceTargetMethod SourceMethod; // 0x30
	FName SourceName; // 0x34
	char bSourceAbsolute : 1; // 0x3c
	FRawDistributionVector Source; // 0x40
	char bLockSource : 1; // 0x88
	Beam2SourceTargetTangentMethod SourceTangentMethod; // 0x8c
	FRawDistributionVector SourceTangent; // 0x90
	char bLockSourceTangent : 1; // 0xd8
	FRawDistributionFloat SourceStrength; // 0xe0
	char bLockSourceStength : 1; // 0x110
};

struct UMovieSceneWidgetMaterialTrack : UMovieSceneMaterialTrack {
	TArray<FName> BrushPropertyNamePath; // 0x90
	FName TrackName; // 0xa0
};

struct USQSPurgeQueue : UAwsSQSAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct AShooterPlayerState : APlayerState {
	int32_t PlayerOrderID; // 0x320
	int32_t TeamID; // 0x324
	int32_t MachineID; // 0x328
	int32_t Kills; // 0x32c
	int32_t Deaths; // 0x330
	int32_t Assists; // 0x334
	FLinearColor Color; // 0x338
	int32_t HeadShotCount; // 0x348
	int32_t TotalDamage; // 0x34c
	int32_t RankIndex; // 0x350
	APawn* CharacterClass; // 0x358
	int32_t CharacterCode; // 0x360
	int32_t MainWeaponCode; // 0x364
	int32_t SubWeaponCode; // 0x368
	int32_t GranadeCode; // 0x36c
	EControllerHand MainHand; // 0x370
};

struct ACableActor : AActor {
	UCableComponent* CableComponent; // 0x220
};

struct UMaterialExpressionRayTracingQualitySwitch : UMaterialExpression {
	FExpressionInput Normal; // 0x40
	FExpressionInput RayTraced; // 0x54
};

struct UCrowdManager : UCrowdManagerBase {
	ANavigationData* MyNavData; // 0x28
	TArray<FCrowdAvoidanceConfig> AvoidanceConfig; // 0x30
	TArray<FCrowdAvoidanceSamplingPattern> SamplingPatterns; // 0x40
	int32_t MaxAgents; // 0x50
	float MaxAgentRadius; // 0x54
	int32_t MaxAvoidedAgents; // 0x58
	int32_t MaxAvoidedWalls; // 0x5c
	float NavmeshCheckInterval; // 0x60
	float PathOptimizationInterval; // 0x64
	float SeparationDirClamp; // 0x68
	float PathOffsetRadiusMultiplier; // 0x6c
	char bResolveCollisions : 1; // 0x70
};

struct ULandscapeSettings : UDeveloperSettings {
	int32_t MaxNumberOfLayers; // 0x38
};

struct UAsyncActionChangePrimaryAssetBundles : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UComboBox : UWidget {
	TArray<UObject*> items; // 0x108
	FDelegate OnGenerateWidgetEvent; // 0x118
	bool bIsFocusable; // 0x128
};

struct UWBP_Main_RankingListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_1; // 0x268
	UImage* Image_69; // 0x270
	UTextBlock* TextBlock; // 0x278
	UTextBlock* TextBlock_2; // 0x280
	UTextBlock* TextBlock_3; // 0x288
	UTextBlock* TextBlock_4; // 0x290
	UTextBlock* TextBlock_64; // 0x298
	UWBP_UI_ListingHovering_C* WBP_UI_ListingHovering; // 0x2a0
	FS_SurvivalRank rank; // 0x2a8
};

struct UEnvQueryInstanceBlueprintWrapper : UObject {
	int32_t QueryID; // 0x30
	UEnvQueryItemType* itemType; // 0x58
	int32_t OptionIndex; // 0x60
	FMulticastInlineDelegate OnQueryFinishedEvent; // 0x68
};

struct UVirtualTexture2D : UTexture2D {
	FVirtualTextureBuildSettings Settings; // 0x100
	bool bContinuousUpdate; // 0x10c
	bool bSinglePhysicalSpace; // 0x10d
};

struct UInterpTrackInstVectorProp : UInterpTrackInstProperty {
	FVector ResetVector; // 0x58
};

struct UWindowTitleBarAreaSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct USourceEffectSimpleDelayPreset : USoundEffectSourcePreset {
	FSourceEffectSimpleDelaySettings Settings; // 0xa8
};

struct ASVTeamInfo : AInfo {
	FString TeamName; // 0x228
	FString TeamID; // 0x238
	char TeamIndex; // 0x248
	FLinearColor TeamColor; // 0x24c
	char MaxTeamSize; // 0x25c
	TArray<FTeamMemberInfo> TeamMemberInfos; // 0x260
};

struct UBodySetupCore : UObject {
	FName BoneName; // 0x28
	EPhysicsType PhysicsType; // 0x30
	ECollisionTraceFlag CollisionTraceFlag; // 0x31
	EBodyCollisionResponse CollisionReponse; // 0x32
};

struct USlateSettings : UObject {
	bool bExplicitCanvasChildZOrder; // 0x28
};

struct USoundNodeOscillator : USoundNode {
	char bModulateVolume : 1; // 0x48
	char bModulatePitch : 1; // 0x48
	float AmplitudeMin; // 0x4c
	float AmplitudeMax; // 0x50
	float FrequencyMin; // 0x54
	float FrequencyMax; // 0x58
	float OffsetMin; // 0x5c
	float OffsetMax; // 0x60
	float CenterMin; // 0x64
	float CenterMax; // 0x68
};

struct UDatasmithImportOptions : UDatasmithOptionsBase {
	EDatasmithImportSearchPackagePolicy SearchPackagePolicy; // 0x28
	EDatasmithImportAssetConflictPolicy MaterialConflictPolicy; // 0x29
	EDatasmithImportAssetConflictPolicy TextureConflictPolicy; // 0x2a
	EDatasmithImportActorPolicy StaticMeshActorImportPolicy; // 0x2b
	EDatasmithImportActorPolicy LightImportPolicy; // 0x2c
	EDatasmithImportActorPolicy CameraImportPolicy; // 0x2d
	EDatasmithImportActorPolicy OtherActorImportPolicy; // 0x2e
	EDatasmithImportMaterialQuality MaterialQuality; // 0x2f
	FDatasmithImportBaseOptions BaseOptions; // 0x34
	FDatasmithReimportOptions ReimportOptions; // 0x48
	FString Filename; // 0x50
	FString FilePath; // 0x60
};

struct UTimeSynchronizableMediaSource : UBaseMediaSource {
	bool bUseTimeSynchronization; // 0x88
	int32_t FrameDelay; // 0x8c
	double TimeDelay; // 0x90
};

struct UTimeSynchronizationSource : UObject {
	bool bUseForSynchronization; // 0x28
	int32_t FrameOffset; // 0x2c
};

struct ULuminARCandidateImage : UARCandidateImage {
	bool bUseUnreliablePose; // 0x58
	bool bImageIsStationary; // 0x59
	EMagicLeapImageTargetOrientation AxisOrientation; // 0x5a
};

struct UInputBehaviorSet : UObject {
	TArray<FBehaviorInfo> Behaviors; // 0x28
};

struct UMaterialExpressionFontSample : UMaterialExpression {
	UFont* Font; // 0x40
	int32_t FontTexturePage; // 0x48
};

struct UPlatformInterfaceBase : UObject {
	TArray<FDelegateArray> AllDelegates; // 0x28
};

struct ASwitchActor : AActor {
	USceneComponent* SceneComponent; // 0x238
	int32_t LastSelectedOption; // 0x240
};

struct UWBP_EscapeNotifcation_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWBP_Confirm_C* WBP_Confirm; // 0x268
};

struct UAnimCompress : UAnimBoneCompressionCodec {
	char bNeedsSkeleton : 1; // 0x38
	AnimationCompressionFormat TranslationCompressionFormat; // 0x3c
	AnimationCompressionFormat RotationCompressionFormat; // 0x3d
	AnimationCompressionFormat ScaleCompressionFormat; // 0x3e
};

struct UBTTask_WaitByStress_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	FBlackboardKeySelector KEYStress; // 0xb0
	float WaitTime; // 0xd8
	float RandomDeviation; // 0xdc
	int32_t Stress; // 0xe0
};

struct UMaterialExpressionCollectionParameter : UMaterialExpression {
	UMaterialParameterCollection* Collection; // 0x40
	FName ParameterName; // 0x48
	FGuid ParameterId; // 0x50
};

struct ABP_GeometryDamageZone_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	USceneComponent* DefaultSceneRoot; // 0x228
	FTimerHandle Damage Timer; // 0x230
	TSet<AActor*> Actors; // 0x238
	int32_t Damage Per Sec; // 0x288
	TArray<ATriggerVolume*> TriggerVolume; // 0x290
	bool DamageZoneActivate; // 0x2a0
	UDamageType* DamageType; // 0x2a8
};

struct AShooterGameState : AGameState {
	int32_t GamePartyLifeCount; // 0x290
	float GameEndTimeSeconds; // 0x294
	int32_t ATeamScore; // 0x298
	int32_t BTeamScore; // 0x29c
	int32_t GameId; // 0x2a0
};

struct UCloudWatchLogsDescribeLogGroups : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UProjectileMovementComponent : UMovementComponent {
	float InitialSpeed; // 0xf0
	float MaxSpeed; // 0xf4
	char bRotationFollowsVelocity : 1; // 0xf8
	char bRotationRemainsVertical : 1; // 0xf8
	char bShouldBounce : 1; // 0xf8
	char bInitialVelocityInLocalSpace : 1; // 0xf8
	char bForceSubStepping : 1; // 0xf8
	char bSimulationEnabled : 1; // 0xf8
	char bSweepCollision : 1; // 0xf8
	char bIsHomingProjectile : 1; // 0xf8
	char bBounceAngleAffectsFriction : 1; // 0xf9
	char bIsSliding : 1; // 0xf9
	char bInterpMovement : 1; // 0xf9
	char bInterpRotation : 1; // 0xf9
	float PreviousHitTime; // 0xfc
	FVector PreviousHitNormal; // 0x100
	float ProjectileGravityScale; // 0x10c
	float Buoyancy; // 0x110
	float Bounciness; // 0x114
	float Friction; // 0x118
	float BounceVelocityStopSimulatingThreshold; // 0x11c
	float MinFrictionFraction; // 0x120
	FMulticastInlineDelegate OnProjectileBounce; // 0x128
	FMulticastInlineDelegate OnProjectileStop; // 0x138
	float HomingAccelerationMagnitude; // 0x148
	TWeakObjectPtr<USceneComponent> HomingTargetComponent; // 0x14c
	float MaxSimulationTimeStep; // 0x154
	int32_t MaxSimulationIterations; // 0x158
	int32_t BounceAdditionalIterations; // 0x15c
	float InterpLocationTime; // 0x160
	float InterpRotationTime; // 0x164
	float InterpLocationMaxLagDistance; // 0x168
	float InterpLocationSnapToTargetDistance; // 0x16c
	bool bUseBouceCount; // 0x1cc
	int32_t BouceCountLimit; // 0x1d0
};

struct UCloudWatchLogsDescribeMetricFilters : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct ULuminARLightEstimate : UARBasicLightEstimate {
	TArray<float> AmbientIntensityNits; // 0x40
};

struct UTimelineComponent : UActorComponent {
	FTimeline TheTimeline; // 0xb0
	char bIgnoreTimeDilation : 1; // 0x148
};

struct UBTDecorator_ConeCheck : UBTDecorator {
	float ConeHalfAngle; // 0x68
	FBlackboardKeySelector ConeOrigin; // 0x70
	FBlackboardKeySelector ConeDirection; // 0x98
	FBlackboardKeySelector Observed; // 0xc0
};

struct UC_Manager-WorldMap_C : UQuestMapComponent_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	bool MouseWithinBounds; // 0xb8
	FVector2D MouseHitCoords; // 0xbc
	APlayerController* Controller; // 0xc8
	AWaypoint_C* waypointActor; // 0xd0
	UWBP_HUD_Compass_C* CompassWidget; // 0xd8
	UWBP_WorldMapPanel_C* WorldMapWidget; // 0xe0
	UOverlay* MapMarkersOverlay; // 0xe8
	UMaterialInstanceDynamic* WorldMap; // 0xf0
	bool StartZoomedIn; // 0xf8
	float ZoomStep; // 0xfc
	float CurrentZoom; // 0x100
	float ZoomDeadZone; // 0x104
	float MousePanRate; // 0x108
	float GamepadPanRate; // 0x10c
	int32_t GamepadCursorSpeed; // 0x110
	FVector2D WorldCenter; // 0x114
	FVector2D WorldDimensions; // 0x11c
	TArray<AWorldLocation_C*> DiscoveredLocations; // 0x128
	TArray<AWorldLocation_C*> DisplayedLocations; // 0x138
	float MapSizeOffset; // 0x148
	TArray<AActor*> ActorsToIgnore; // 0x150
	float BaseX; // 0x160
	float BaseY; // 0x164
	float UseX; // 0x168
	float UseY; // 0x16c
	float DeadzoneX; // 0x170
	float DeadzoneY; // 0x174
	FTimerHandle CursorUpdateLoop; // 0x178
	ULocationInfo_Gamepad_C* GamepadTooltip; // 0x180
	bool MapOpen; // 0x188
	bool MouseDown; // 0x189
	UWBP_MapMarker_C* PlayerMarker; // 0x190
	UWBP_MapMarker_Waypoint_C* WaypointMarker; // 0x198
	UWBP_MapMarker_C* LastDeadLocationMarker; // 0x1a0
	float MaximumZoom; // 0x1a8
	TSet<BP_SpotEventBase_C*> SpotEventsRef; // 0x1b0
	FMulticastInlineDelegate OnSpotEventDisappear; // 0x200
	ABP_WorldMapPivot_C* WorldMapPivot; // 0x210
	bool IsInitialized; // 0x218
	bool ReserveOpenPlayerSummary; // 0x219
	TSet<ABP_LandmarkEffectRangeActor_C*> LandmarkEffectActorRef; // 0x220
	FMulticastInlineDelegate OnLandmarkEffectDestroy; // 0x270
	TMap<FString, UWBP_MapMarker_Team_C*> CachedMarker; // 0x280
	float UpdateTime; // 0x2d0
	FTimerHandle TimerCauserLocation; // 0x2d8
	int32_t CurrentIndex; // 0x2e0
	FMulticastInlineDelegate OnLandmarkEffectAppear; // 0x2e8
};

struct ULowEntryDouble : UObject {
	TArray<char> Bytes; // 0x28
};

struct UTestMovieSceneTrack : UMovieSceneTrack {
	bool bHighPassFilter; // 0x80
	TArray<UMovieSceneSection*> SectionArray; // 0x88
};

struct UParticleModuleVelocity : UParticleModuleVelocityBase {
	FRawDistributionVector StartVelocity; // 0x38
	FRawDistributionFloat StartVelocityRadial; // 0x80
};

struct UEnvQueryTest_PathfindingBatch : UEnvQueryTest_Pathfinding {
	FAIDataProviderFloatValue ScanRangeMultiplier; // 0x280
};

struct UGizmoTransformChangeStateTarget : UObject {
	TScriptInterface<IToolContextTransactionProvider> TransactionManager; // 0x50
};

struct UAkInitBankAssetData : UAkAssetDataWithMedia {
	TArray<FAkPluginInfo> PluginInfos; // 0x78
};

struct UAnimNotifyState_Trail : UAnimNotifyState {
	UParticleSystem* PSTemplate; // 0x30
	FName FirstSocketName; // 0x38
	FName SecondSocketName; // 0x40
	ETrailWidthMode WidthScaleMode; // 0x48
	FName WidthScaleCurve; // 0x4c
	char bRecycleSpawnedSystems : 1; // 0x54
};

struct USoundEffectSourcePresetChain : UObject {
	TArray<FSourceEffectChainEntry> Chain; // 0x28
	char bPlayEffectChainTails : 1; // 0x38
};

struct UCameraModifier : UObject {
	char bDebug : 1; // 0x28
	char bExclusive : 1; // 0x28
	char Priority; // 0x2c
	APlayerCameraManager* CameraOwner; // 0x30
	float AlphaInTime; // 0x38
	float AlphaOutTime; // 0x3c
	float Alpha; // 0x40
};

struct UWidget : UVisual {
	UPanelSlot* Slot; // 0x28
	FDelegate bIsEnabledDelegate; // 0x30
	FText ToolTipText; // 0x40
	FDelegate ToolTipTextDelegate; // 0x58
	UWidget* ToolTipWidget; // 0x68
	FDelegate ToolTipWidgetDelegate; // 0x70
	FDelegate VisibilityDelegate; // 0x80
	FWidgetTransform RenderTransform; // 0x90
	FVector2D RenderTransformPivot; // 0xac
	char bIsVariable : 1; // 0xb4
	char bCreatedByConstructionScript : 1; // 0xb4
	char bIsEnabled : 1; // 0xb4
	char bOverride_Cursor : 1; // 0xb4
	USlateAccessibleWidgetData* AccessibleWidgetData; // 0xb8
	char bIsVolatile : 1; // 0xc0
	EMouseCursor Cursor; // 0xc1
	EWidgetClipping Clipping; // 0xc2
	ESlateVisibility Visibility; // 0xc3
	float RenderOpacity; // 0xc4
	UWidgetNavigation* Navigation; // 0xc8
	EFlowDirectionPreference FlowDirectionPreference; // 0xd0
	TArray<UPropertyBinding*> NativeBindings; // 0xf8
};

struct UInterpTrackInstAkAudioRTPC : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
};

struct UMaterialExpressionSign : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UParticleModuleRotationOverLifetime : UParticleModuleRotationBase {
	FRawDistributionFloat RotationOverLife; // 0x30
	char Scale : 1; // 0x60
};

struct UPawnActionsComponent : UActorComponent {
	APawn* ControlledPawn; // 0xb0
	TArray<FPawnActionStack> ActionStacks; // 0xb8
	TArray<FPawnActionEvent> ActionEvents; // 0xc8
	UPawnAction* CurrentAction; // 0xd8
};

struct UAkHololensInitializationSettings : UObject {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
	FAkHololensAdvancedInitializationSettings AdvancedSettings; // 0xb8
};

struct UAnimSequenceLevelSequenceLink : UAssetUserData {
	FGuid SkelTrackGuid; // 0x28
	FSoftObjectPath PathToLevelSequence; // 0x38
};

struct ABP_FlareDisc_C : ABP_MasterThrowWeapon_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x610
};

struct UBTDecorator_BlueprintBase : UBTDecorator {
	AAIController* AIOwner; // 0x68
	AActor* ActorOwner; // 0x70
	TArray<FName> ObservedKeyNames; // 0x78
	char bShowPropertyDetails : 1; // 0x98
	char bCheckConditionOnlyBlackBoardChanges : 1; // 0x98
	char bIsObservingBB : 1; // 0x98
};

struct UDynamicEntryBoxBase : UWidget {
	EDynamicBoxType EntryBoxType; // 0x108
	FVector2D EntrySpacing; // 0x10c
	TArray<FVector2D> SpacingPattern; // 0x118
	FSlateChildSize EntrySizeRule; // 0x128
	EHorizontalAlignment EntryHorizontalAlignment; // 0x130
	EVerticalAlignment EntryVerticalAlignment; // 0x131
	int32_t MaxElementSize; // 0x134
	FRadialBoxSettings RadialBoxSettings; // 0x138
	FUserWidgetPool EntryWidgetPool; // 0x158
};

struct ULowEntryExecutionQueue : UObject {
	int32_t Count; // 0x28
	bool Next; // 0x2c
};

struct UAkAssetDataWithMedia : UAkAssetData {
	TArray<UAkMediaAsset*> MediaList; // 0x68
};

struct UCommonAI_BTTask_SetWalkSpeed_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	float SpeedRatio; // 0xb0
};

struct UPhysicsHandleComponent : UActorComponent {
	UPrimitiveComponent* GrabbedComponent; // 0xb0
	char bSoftAngularConstraint : 1; // 0xc0
	char bSoftLinearConstraint : 1; // 0xc0
	char bInterpolateTarget : 1; // 0xc0
	float LinearDamping; // 0xc4
	float LinearStiffness; // 0xc8
	float AngularDamping; // 0xcc
	float AngularStiffness; // 0xd0
	float InterpolationSpeed; // 0x140
};

struct USoundNodeWaveParam : USoundNode {
	FName WaveParameterName; // 0x48
};

struct UInputTouchDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputTouchDelegateBinding> InputTouchDelegateBindings; // 0x28
};

struct UInterpTrackMoveAxis : UInterpTrackFloatBase {
	EInterpMoveAxis MoveAxis; // 0x90
	FInterpLookupTrack LookupTrack; // 0x98
};

struct ULuminApplicationLifecycleComponent : UApplicationLifecycleComponent {
	FMulticastInlineDelegate DeviceHasReactivatedDelegate; // 0x140
	FMulticastInlineDelegate DeviceWillEnterRealityModeDelegate; // 0x150
	FMulticastInlineDelegate DeviceWillGoInStandbyDelegate; // 0x160
	FMulticastInlineDelegate FocusLostDelegate; // 0x170
	FMulticastInlineDelegate FocusGainedDelegate; // 0x180
};

struct AGameNetworkManager : AInfo {
	float BadPacketLossThreshold; // 0x220
	float SeverePacketLossThreshold; // 0x224
	int32_t BadPingThreshold; // 0x228
	int32_t SeverePingThreshold; // 0x22c
	int32_t AdjustedNetSpeed; // 0x230
	float LastNetSpeedUpdateTime; // 0x234
	int32_t TotalNetBandwidth; // 0x238
	int32_t MinDynamicBandwidth; // 0x23c
	int32_t MaxDynamicBandwidth; // 0x240
	char bIsStandbyCheckingEnabled : 1; // 0x244
	char bHasStandbyCheatTriggered : 1; // 0x244
	float StandbyRxCheatTime; // 0x248
	float StandbyTxCheatTime; // 0x24c
	float PercentMissingForRxStandby; // 0x250
	float PercentMissingForTxStandby; // 0x254
	float PercentForBadPing; // 0x258
	float JoinInProgressStandbyWaitTime; // 0x25c
	float MoveRepSize; // 0x260
	float MAXPOSITIONERRORSQUARED; // 0x264
	float MAXNEARZEROVELOCITYSQUARED; // 0x268
	float CLIENTADJUSTUPDATECOST; // 0x26c
	float MAXCLIENTUPDATEINTERVAL; // 0x270
	float MaxClientForcedUpdateDuration; // 0x274
	float ServerForcedUpdateHitchThreshold; // 0x278
	float ServerForcedUpdateHitchCooldown; // 0x27c
	float MaxMoveDeltaTime; // 0x280
	float MaxClientSmoothingDeltaTime; // 0x284
	float ClientNetSendMoveDeltaTime; // 0x288
	float ClientNetSendMoveDeltaTimeThrottled; // 0x28c
	float ClientNetSendMoveDeltaTimeStationary; // 0x290
	int32_t ClientNetSendMoveThrottleAtNetSpeed; // 0x294
	int32_t ClientNetSendMoveThrottleOverPlayerCount; // 0x298
	bool ClientAuthorativePosition; // 0x29c
	float ClientErrorUpdateRateLimit; // 0x2a0
	float ClientNetCamUpdateDeltaTime; // 0x2a4
	float ClientNetCamUpdatePositionLimit; // 0x2a8
	bool bMovementTimeDiscrepancyDetection; // 0x2ac
	bool bMovementTimeDiscrepancyResolution; // 0x2ad
	float MovementTimeDiscrepancyMaxTimeMargin; // 0x2b0
	float MovementTimeDiscrepancyMinTimeMargin; // 0x2b4
	float MovementTimeDiscrepancyResolutionRate; // 0x2b8
	float MovementTimeDiscrepancyDriftAllowance; // 0x2bc
	bool bMovementTimeDiscrepancyForceCorrectionsDuringResolution; // 0x2c0
	bool bUseDistanceBasedRelevancy; // 0x2c1
};

struct UBTComposite_SimpleParallel : UBTCompositeNode {
	EBTParallelMode FinishMode; // 0x90
};

struct UCloudWatchPutAnomalyDetector : UAwsCloudWatchAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UParticleModuleBeamNoise : UParticleModuleBeamBase {
	char bLowFreq_Enabled : 1; // 0x30
	int32_t Frequency; // 0x34
	int32_t Frequency_LowRange; // 0x38
	FRawDistributionVector NoiseRange; // 0x40
	FRawDistributionFloat NoiseRangeScale; // 0x88
	char bNRScaleEmitterTime : 1; // 0xb8
	FRawDistributionVector NoiseSpeed; // 0xc0
	char bSmooth : 1; // 0x108
	float NoiseLockRadius; // 0x10c
	char bNoiseLock : 1; // 0x110
	char bOscillate : 1; // 0x110
	float NoiseLockTime; // 0x114
	float NoiseTension; // 0x118
	char bUseNoiseTangents : 1; // 0x11c
	FRawDistributionFloat NoiseTangentStrength; // 0x120
	int32_t NoiseTessellation; // 0x150
	char bTargetNoise : 1; // 0x154
	float FrequencyDistance; // 0x158
	char bApplyNoiseScale : 1; // 0x15c
	FRawDistributionFloat NoiseScale; // 0x160
};

struct UParticleModuleTrailSource : UParticleModuleTrailBase {
	ETrail2SourceMethod SourceMethod; // 0x30
	FName SourceName; // 0x34
	FRawDistributionFloat SourceStrength; // 0x40
	char bLockSourceStength : 1; // 0x70
	int32_t SourceOffsetCount; // 0x74
	TArray<FVector> SourceOffsetDefaults; // 0x78
	EParticleSourceSelectionMethod SelectionMethod; // 0x88
	char bInheritRotation : 1; // 0x8c
};

struct UMaterialShaderQualitySettings : UObject {
	TMap<FName, UShaderPlatformQualitySettings*> ForwardSettingMap; // 0x28
};

struct UParticleModuleLocationSkelVertSurface : UParticleModuleLocationBase {
	ELocationSkelVertSurfaceSource SourceType; // 0x30
	FVector UniversalOffset; // 0x34
	char bUpdatePositionEachFrame : 1; // 0x40
	char bOrientMeshEmitters : 1; // 0x40
	char bInheritBoneVelocity : 1; // 0x40
	float InheritVelocityScale; // 0x44
	FName SkelMeshActorParamName; // 0x48
	TArray<FName> ValidAssociatedBones; // 0x50
	char bEnforceNormalCheck : 1; // 0x60
	FVector NormalToCompare; // 0x64
	float NormalCheckToleranceDegrees; // 0x70
	float NormalCheckTolerance; // 0x74
	TArray<int32_t> ValidMaterialIndices; // 0x78
	char bInheritVertexColor : 1; // 0x88
	char bInheritUV : 1; // 0x88
	uint32_t InheritUVChannel; // 0x8c
};

struct ARangeWeaponBase : ASVWeaponBase {
	float ForwardRange; // 0x5b8
	bool bIsReloading; // 0x5bc
	int32_t Ammo; // 0x5c0
	int32_t MaxAmmo; // 0x5c4
	int32_t AdditionalMagazine; // 0x5c8
	float ReloadTime; // 0x5cc
	UAnimMontage* WeaponReload; // 0x5d0
	UAnimMontage* TP_Reload; // 0x5d8
	UAnimMontage* FP_Reload; // 0x5e0
	UAnimMontage* FP_ADSFireAnimation; // 0x5e8
	TSet<EFireMode> FireModes; // 0x5f8
	EFireMode SelectedFireMode; // 0x648
	USkeletalMeshComponent* ScopeMesh; // 0x650
	USkeletalMeshComponent* ForeGripMesh; // 0x658
	USkeletalMeshComponent* MagazineMesh; // 0x660
	USkeletalMesh* DefaultMagazineMesh; // 0x668
	USkeletalMeshComponent* MuzzleMesh; // 0x670
	UStaticMeshComponent* ScopeLens; // 0x678
	UParticleSystem* OriginalMuzzleParticle; // 0x680
	UParticleSystem* MuzzlePartParticle; // 0x688
	bool bUseClientSideProjectile; // 0x690
};

struct UMRMeshComponent : UPrimitiveComponent {
	UMaterialInterface* Material; // 0x450
	UMaterialInterface* WireframeMaterial; // 0x458
	bool bCreateMeshProxySections; // 0x460
	bool bUpdateNavMeshOnMeshUpdate; // 0x461
	bool bNeverCreateCollisionMesh; // 0x462
	UBodySetup* CachedBodySetup; // 0x468
	TArray<UBodySetup*> BodySetups; // 0x470
};

struct UWBP_Radiogram_4020301_C : UUserWidget {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x260
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x268
	UWBP_RadiogramListing_C* WBP_RadiogramListing_2; // 0x270
	UWBP_RadiogramListing_C* WBP_RadiogramListing_3; // 0x278
	UWBP_RadiogramListing_C* WBP_RadiogramListing_4; // 0x280
	UWBP_RadiogramListing_C* WBP_RadiogramListing_5; // 0x288
};

struct USendFriendInviteCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct ATravelPoint_C : AActor {
	UArrowComponent* Arrow; // 0x220
	UCapsuleComponent* Capsule; // 0x228
	USceneComponent* DefaultSceneRoot; // 0x230
};

struct ABP_ThermalShock_C : ABP_LandmarkEffectRangeActor_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x368
	UParticleSystemComponent* P_SnowStorm_breath; // 0x370
	UParticleSystemComponent* P_SnowStorm; // 0x378
	UParticleSystemComponent* P_ThermalShock; // 0x380
	UStaticMeshComponent* Sphere1; // 0x388
	UPostProcessComponent* PostProcess1; // 0x390
	USphereComponent* Sphere; // 0x398
	UBP_EnvironmentEffectComponent_C* BP_EnvironmentEffectComponent; // 0x3a0
	UMaterialInstanceDynamic* SphereDM; // 0x3a8
	BP_SurvivalCharacter_C* FollowCharacter; // 0x3b0
	bool FollowPlayer; // 0x3b8
};

struct URMHttpRequest_Get_Client_VivoxToken : URMHttpRequestBase {
	FMulticastInlineDelegate OnReceiveResult; // 0x48
};

struct UAssetUserData_FieldNPCSpawner_C : UAssetUserDataBlueprintable {
	AActor* Owner; // 0x28
	int32_t NearPlayerNum; // 0x30
	FS_FieldNPCInfo FieldNPCInfo; // 0x38
	bool AlreadyRemoveAllNPC; // 0xb0
	TArray<FS_FieldNPC_SpawnQueueInfo> SpawnQueue; // 0xb8
	TMap<AActor*, int32_t> CurrSplineIndexMap; // 0xc8
	TSoftObjectPtr<USplineComponent> TargetSplineComp; // 0x118
	bool UseAutoDestroyByDistanceToPlayer; // 0x140
	int32_t TotalNPCNum; // 0x144
	int32_t AccumulatedSpawnedNum; // 0x148
	FFloatValueFromDataTable NPCCountMultiply; // 0x150
};

struct UDestructibleComponent : USkinnedMeshComponent {
	char bFractureEffectOverride : 1; // 0x690
	TArray<FFractureEffect> FractureEffects; // 0x698
	bool bEnableHardSleeping; // 0x6a8
	float LargeChunkThreshold; // 0x6ac
	FMulticastInlineDelegate OnComponentFracture; // 0x6c0
};

struct UAtmosphericFogComponent : USceneComponent {
	float SunMultiplier; // 0x1f8
	float FogMultiplier; // 0x1fc
	float DensityMultiplier; // 0x200
	float DensityOffset; // 0x204
	float DistanceScale; // 0x208
	float AltitudeScale; // 0x20c
	float DistanceOffset; // 0x210
	float GroundOffset; // 0x214
	float StartDistance; // 0x218
	float SunDiscScale; // 0x21c
	float DefaultBrightness; // 0x220
	FColor DefaultLightColor; // 0x224
	char bDisableSunDisk : 1; // 0x228
	char bAtmosphereAffectsSunIlluminance : 1; // 0x228
	char bDisableGroundScattering : 1; // 0x228
	FAtmospherePrecomputeParameters PrecomputeParams; // 0x22c
	UTexture2D* TransmittanceTexture; // 0x258
	UTexture2D* IrradianceTexture; // 0x260
};

struct UParticleModuleMeshRotationRate_Seeded : UParticleModuleMeshRotationRate {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x78
};

struct USoundMix : UObject {
	char bApplyEQ : 1; // 0x28
	float EQPriority; // 0x2c
	FAudioEQEffect EQSettings; // 0x30
	TArray<FSoundClassAdjuster> SoundClassEffects; // 0x70
	float InitialDelay; // 0x80
	float FadeInTime; // 0x84
	float Duration; // 0x88
	float FadeOutTime; // 0x8c
};

struct UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData {
	EFieldResolutionType ResolutionType; // 0xb0
};

struct UFontImportOptions : UObject {
	FFontImportOptionsData Data; // 0x28
};

struct UCloudWatchLogsDescribeResourcePolicies : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UMovieSceneNiagaraParameterTrack : UMovieSceneNiagaraTrack {
	FNiagaraVariable Parameter; // 0x88
};

struct ABP_ThrowItem_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UAkComponent* AkFlying; // 0x228
	UArrowComponent* ThrowDirection; // 0x230
	UCapsuleComponent* Collision; // 0x238
	UStaticMeshComponent* Mesh; // 0x240
	URotatingMovementComponent* RotatingMovement; // 0x248
	UProjectileMovementComponent* ProjectileMovement; // 0x250
	FItemInventory Item; // 0x258
	TArray<AActor*> DamagedActor; // 0x290
	BP_SurvivalCharacter_C* Character; // 0x2a0
	TMap<E_HitboxType, int32_t> Damage Values; // 0x2a8
	UCurveFloat* DamgeMultiply; // 0x2f8
	UMasterDamageType_C* DamageType; // 0x300
	float Condition; // 0x308
	FVector InitVelocity; // 0x30c
	FVector RepLocation; // 0x318
	FVector RepVelocity; // 0x324
	bool bAutoRotateIntoMovingDirection; // 0x330
	bool bIsExplodeMine; // 0x331
	UAkSwitchValue* SoundType; // 0x338
	UAkSwitchValue* HitSoundType; // 0x340
	float SpinY; // 0x348
	float SpinSpeed; // 0x34c
	FVector SpawnLoc; // 0x350
	TArray<AActor*> Actors to Ignore; // 0x360
	E_HitboxType HitBox; // 0x370
};

struct UCallbackProxySubscribeUnsubscribeWorkshopItem : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
	FMulticastInlineDelegate OnSteamInitFailure; // 0x50
};

struct UAISense_Prediction : UAISense {
	TArray<FAIPredictionEvent> RegisteredEvents; // 0x80
};

struct UMovieSceneCameraAnimTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> CameraAnimSections; // 0x80
};

struct UBTService_BossPhaseUpdator_C : UBTService_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x98
	APawn* MyPawn; // 0xa0
	FBlackboardKeySelector KEYPhase; // 0xa8
	TMap<float, int32_t> PhaseMap; // 0xd0
	int32_t Phase; // 0x120
	float PhaseInitTime; // 0x124
	FBlackboardKeySelector KEYMeleeAttackCount; // 0x128
	FBlackboardKeySelector KEYRangeAttackCount; // 0x150
};

struct UAISystemBase : UObject {
	FSoftClassPath AISystemClassName; // 0x28
	FName AISystemModuleName; // 0x40
	bool bInstantiateAISystemOnClient; // 0x50
};

struct UWBP_Radiogram_Drops_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWBP_MainFrame_C* WBP_MainFrame; // 0x268
	UWrapBox* WrapBox_List; // 0x270
	int32_t UID; // 0x278
	bool bIsResource; // 0x27c
	UWBP_Main_Radiogram_C* MainRadiogram; // 0x280
};

struct ABP_Afterimage_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UPoseableMeshComponent* PoseableMesh; // 0x228
	USceneComponent* DefaultSceneRoot; // 0x230
	float AtferImage_Timeline_Opacity_3D2C5D634DD8FE528AEEED97F381183C; // 0x238
	ETimelineDirection AtferImage_Timeline__Direction_3D2C5D634DD8FE528AEEED97F381183C; // 0x23c
	UTimelineComponent* AtferImage Timeline; // 0x240
	UMaterialInstanceDynamic* Afterimage Material; // 0x248
	USkeletalMeshComponent* ModelRef; // 0x250
};

struct UCustomReplicationActorComponent : UActorComponent {
	bool IsOnlyReplicateAutonomousProxy; // 0xb0
};

struct UAnimBoneCompressionSettings : UObject {
	TArray<UAnimBoneCompressionCodec*> Codecs; // 0x28
};

struct UIpConnection : UNetConnection {
	float SocketErrorDisconnectDelay; // 0x1b40
};

struct UWBP_Functionality_Core_C : UWBP_FunctionalityBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	UBorder* Border_AutoConverting; // 0x278
	UWBP_Slot_Inventory_C* BP_InventorySlot; // 0x280
	UButton* Button_AutoConverting; // 0x288
	UButton* Button_Conversion; // 0x290
	UUniformGridPanel* ContentsGrid; // 0x298
	UUniformGridPanel* ConvertingGrid; // 0x2a0
	UImage* EnergyGaugeBar; // 0x2a8
	UImage* Image_91; // 0x2b0
	UImage* Image_248; // 0x2b8
	UImage* Image_Auto; // 0x2c0
	UImage* Image_UX_Fuel; // 0x2c8
	UTextBlock* Text_Energy; // 0x2d0
	UTextBlock* Text_EnergyCharge; // 0x2d8
	UTextBlock* Text_EnergyTotal; // 0x2e0
	UTextBlock* Text_Epm; // 0x2e8
	UTextBlock* Text_Epm_2; // 0x2f0
	UTextBlock* TextBlock_Required; // 0x2f8
	UUniformGridPanel* TransGrid; // 0x300
	UVerticalBox* VerticalBox_Admin; // 0x308
	UVerticalBox* VerticalBox_Confirm; // 0x310
	UWBP_Button_UI_C* WBP_Button_Invite; // 0x318
	UWBP_FunctionalityInfo_C* WBP_FunctionalityInfo; // 0x320
	UWBP_FunctionalityMainButton_C* WBP_FunctionalityMainButton; // 0x328
	UWBP_MainFrame_C* WBP_MainFrame; // 0x330
	UWBP_MainFrame_Toolbar_C* WBP_MainFrame_Toolbar; // 0x338
	ABP_EnergyCoreBuildPart_C* TargetEnergyCore; // 0x340
	TArray<UWBP_Slot_Inventory_C*> Trans Inventory Slots; // 0x348
	TArray<UWBP_Slot_Inventory_C*> Contents Inventory Slots; // 0x358
	TArray<UWBP_Functionality_ConversionSlot_C*> Convert Slots; // 0x368
	bool bEMP; // 0x378
};

struct UInterpTrackInstProperty : UInterpTrackInst {
	TFieldPath<FProperty> InterpProperty; // 0x28
	UObject* PropertyOuterObjectInst; // 0x48
};

struct UInterpTrackInstLinearColorProp : UInterpTrackInstProperty {
	FLinearColor ResetColor; // 0x58
};

struct UWBP_DeathRecapListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_Frame; // 0x268
	UImage* Image_Dead; // 0x270
	UImage* Image_Head_2; // 0x278
	UImage* Image_Health; // 0x280
	UImage* Image_Icon; // 0x288
	UTextBlock* Te; // 0x290
	UTextBlock* Text_Count; // 0x298
	UTextBlock* Text_Dtime; // 0x2a0
	UTextBlock* Text_Health; // 0x2a8
	UTextBlock* Text_PlayerName; // 0x2b0
	UTextBlock* Text_Value; // 0x2b8
	UWidgetSwitcher* WidgetSwitcher_1; // 0x2c0
	bool bOpponent; // 0x2c8
	UMaterialInstanceDynamic* MI_HealthGauge; // 0x2d0
	FS_HealthChangeSummary HealthChangeInfo; // 0x2d8
	float LastDeadTime; // 0x300
	int32_t AccumulatedCount; // 0x304
};

struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct ALevelBounds : AActor {
	UBoxComponent* BoxComponent; // 0x220
	bool bAutoUpdateBounds; // 0x228
};

struct UAxisAngleGizmo : UInteractiveGizmo {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48
	TScriptInterface<IGizmoFloatParameterSource> AngleSource; // 0x58
	TScriptInterface<IGizmoClickTarget> HitTarget; // 0x68
	TScriptInterface<IGizmoStateTarget> StateTarget; // 0x78
	bool bInInteraction; // 0x88
	FVector RotationOrigin; // 0x8c
	FVector RotationAxis; // 0x98
	FVector RotationPlaneX; // 0xa4
	FVector RotationPlaneY; // 0xb0
	FVector InteractionStartPoint; // 0xbc
	FVector InteractionCurPoint; // 0xc8
	float InteractionStartAngle; // 0xd4
	float InteractionCurAngle; // 0xd8
};

struct UListView : UListViewBase {
	EOrientation Orientation; // 0x2d8
	ESelectionMode SelectionMode; // 0x2d9
	EConsumeMouseWheel ConsumeMouseWheel; // 0x2da
	bool bClearSelectionOnClick; // 0x2db
	bool bIsFocusable; // 0x2dc
	float EntrySpacing; // 0x2e0
	bool bReturnFocusToSelection; // 0x2e4
	TArray<UObject*> ListItems; // 0x2e8
	FMulticastInlineDelegate BP_OnEntryInitialized; // 0x308
	FMulticastInlineDelegate BP_OnItemClicked; // 0x318
	FMulticastInlineDelegate BP_OnItemDoubleClicked; // 0x328
	FMulticastInlineDelegate BP_OnItemIsHoveredChanged; // 0x338
	FMulticastInlineDelegate BP_OnItemSelectionChanged; // 0x348
	FMulticastInlineDelegate BP_OnItemScrolledIntoView; // 0x358
};

struct UMaterialExpressionAbs : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UInterpTrackAkAudioEvent : UInterpTrackVectorBase {
	TArray<FAkAudioEventTrackKey> Events; // 0x90
	char bContinueEventOnMatineeEnd : 1; // 0xa0
};

struct UProceduralFoliageSpawner : UObject {
	int32_t RandomSeed; // 0x28
	float TileSize; // 0x2c
	int32_t NumUniqueTiles; // 0x30
	float MinimumQuadTreeSize; // 0x34
	TArray<FFoliageTypeObject> FoliageTypes; // 0x40
};

struct UGeometryCacheCodecRaw : UGeometryCacheCodecBase {
	int32_t DummyProperty; // 0x38
};

struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	TArray<ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x440
	int32_t SectionBaseX; // 0x450
	int32_t SectionBaseY; // 0x454
	int32_t CollisionSizeQuads; // 0x458
	float CollisionScale; // 0x45c
	int32_t SimpleCollisionSizeQuads; // 0x460
	TArray<char> CollisionQuadFlags; // 0x468
	FGuid HeightfieldGuid; // 0x478
	FBox CachedLocalBox; // 0x488
	LazyObjectProperty RenderComponent; // 0x4a4
	TArray<UPhysicalMaterial*> CookedPhysicalMaterials; // 0x4d0
};

struct UParticleModuleSize_Seeded : UParticleModuleSize {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x78
};

struct UCloudWatchGetDashboard : UAwsCloudWatchAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints {
	FAIDataProviderFloatValue GridSize; // 0x80
	FAIDataProviderFloatValue SpaceBetween; // 0xb8
	UEnvQueryContext* GenerateAround; // 0xf0
};

struct UWBP_WaitSaveGame_C : UUserWidget {
	UImage* Image_187; // 0x260
	UTextBlock* TextBlock_28; // 0x268
	FMulticastInlineDelegate OnButtonClick_OK; // 0x270
	FMulticastInlineDelegate OnButtonClick_Cancel; // 0x280
	int32_t Delay; // 0x290
};

struct UWBP_Function_Inventory_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWBP_Button_Function_C* Button_Drop; // 0x268
	UWBP_Button_Function_C* Button_Equip; // 0x270
	UWBP_Button_Function_C* Button_Radiogram; // 0x278
	UWBP_Button_Function_C* Button_Send; // 0x280
	UWBP_Button_Function_C* Button_Split; // 0x288
	UWBP_Button_Function_C* Button_Use; // 0x290
	UVerticalBox* OptionBox; // 0x298
	bool bDroppable; // 0x2a0
	bool bStackable; // 0x2a1
	UWBP_Slot_Inventory_C* Slot Reference; // 0x2a8
	UWBP_HUD_C* Inventory HUD; // 0x2b0
	FItemInventory Item; // 0x2b8
	UBP_PlayerInventoryComponent_C* Player Inventory Component; // 0x2f0
};

struct UMovieScene3DAttachSection : UMovieScene3DConstraintSection {
	FName AttachSocketName; // 0x118
	FName AttachComponentName; // 0x120
	EAttachmentRule AttachmentLocationRule; // 0x128
	EAttachmentRule AttachmentRotationRule; // 0x129
	EAttachmentRule AttachmentScaleRule; // 0x12a
	EDetachmentRule DetachmentLocationRule; // 0x12b
	EDetachmentRule DetachmentRotationRule; // 0x12c
	EDetachmentRule DetachmentScaleRule; // 0x12d
};

struct UCloudWatchGetInsightRuleReport : UAwsCloudWatchAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct USkeletalMeshSocket : UObject {
	FName SocketName; // 0x28
	FName BoneName; // 0x30
	FVector RelativeLocation; // 0x38
	FRotator RelativeRotation; // 0x44
	FVector RelativeScale; // 0x50
	bool bForceAlwaysAnimated; // 0x5c
};

struct UAnimCompress_RemoveTrivialKeys : UAnimCompress {
	float MaxPosDiff; // 0x40
	float MaxAngleDiff; // 0x44
	float MaxScaleDiff; // 0x48
};

struct UWBP_Scene_Landing_LocationButton_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Checked; // 0x268
	UBorder* Border_2; // 0x270
	UCheckBox* CheckBox; // 0x278
	UImage* Image; // 0x280
	UImage* Image_58; // 0x288
	UImage* Image_Background; // 0x290
	UImage* Image_Hovered; // 0x298
	UImage* Image_NPC; // 0x2a0
	UTextBlock* Text_Description; // 0x2a8
	UTextBlock* Text_Title; // 0x2b0
	FMulticastInlineDelegate OnCheckStateChanged; // 0x2b8
	FText title; // 0x2c8
	FText Description; // 0x2e0
	UTexture2D* Background; // 0x2f8
	UTexture2D* NPC; // 0x300
	FMulticastInlineDelegate OnEnter; // 0x308
	FMulticastInlineDelegate OnLeave; // 0x318
	FSlateColor In Color and Opacity; // 0x328
};

struct UMovieSceneGeometryCacheTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x80
};

struct UParticleModuleSpawnPerUnit : UParticleModuleSpawnBase {
	float UnitScalar; // 0x38
	float MovementTolerance; // 0x3c
	FRawDistributionFloat SpawnPerUnit; // 0x40
	float MaxFrameDistance; // 0x70
	char bIgnoreSpawnRateWhenMoving : 1; // 0x74
	char bIgnoreMovementAlongX : 1; // 0x74
	char bIgnoreMovementAlongY : 1; // 0x74
	char bIgnoreMovementAlongZ : 1; // 0x74
};

struct UCloudWatchDeleteAlarms : UAwsCloudWatchAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UWBP_Main_CraftingV2_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_1; // 0x268
	UButton* Button_111; // 0x270
	UScrollBox* CraftListScrollBox; // 0x278
	UEditableTextBox* EditableTextBox_Search; // 0x280
	UWBP_MainFrame_C* WBP_MainFrame; // 0x288
	UWBP_MainFrame_Header_C* WBP_MainFrame_Header; // 0x290
	UWPB_Crafting_Toggle_C* WPB_Togle_ALL; // 0x298
	UWPB_Crafting_Toggle_C* WPB_Togle_Ammunition; // 0x2a0
	UWPB_Crafting_Toggle_C* WPB_Togle_Consumable; // 0x2a8
	UWPB_Crafting_Toggle_C* WPB_Togle_DataChip; // 0x2b0
	UWPB_Crafting_Toggle_C* WPB_Togle_Equipment; // 0x2b8
	UWPB_Crafting_Toggle_C* WPB_Togle_Installize; // 0x2c0
	UWPB_Crafting_Toggle_C* WPB_Togle_ToolWeapon; // 0x2c8
	UBP_PlayerInventoryComponent_C* TargetPlayerInv; // 0x2d0
	UBP_CraftingComponent_C* TargetCraftingComp; // 0x2d8
	UWBP_CraftingV2_C* MainWidget; // 0x2e0
	E_CraftingCatergoryType Category Fillter; // 0x2e8
};

struct UAkItemBoolProperties : UWidget {
	FMulticastInlineDelegate OnSelectionChanged; // 0x108
	FMulticastInlineDelegate OnPropertyDragged; // 0x118
};

struct AEmitterCameraLensEffectBase : AEmitter {
	UParticleSystem* PS_CameraEffect; // 0x270
	UParticleSystem* PS_CameraEffectNonExtremeContent; // 0x278
	APlayerCameraManager* BaseCamera; // 0x280
	FTransform RelativeTransform; // 0x290
	float BaseFOV; // 0x2c0
	char bAllowMultipleInstances : 1; // 0x2c4
	char bResetWhenRetriggered : 1; // 0x2c4
	TArray<AEmitterCameraLensEffectBase*> EmittersToTreatAsSame; // 0x2c8
	float DistFromCamera; // 0x2d8
};

struct UConnectionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UMaterialExpressionTextureProperty : UMaterialExpression {
	FExpressionInput TextureObject; // 0x40
	EMaterialExposedTextureProperty Property; // 0x54
};

struct UBasicOverlays : UOverlays {
	TArray<FOverlayItem> Overlays; // 0x28
};

struct USourceEffectMidSideSpreaderPreset : USoundEffectSourcePreset {
	FSourceEffectMidSideSpreaderSettings Settings; // 0x98
};

struct UVolumetricCloudComponent : USceneComponent {
	float LayerBottomAltitude; // 0x1f8
	float LayerHeight; // 0x1fc
	float TracingStartMaxDistance; // 0x200
	float TracingMaxDistance; // 0x204
	float PlanetRadius; // 0x208
	FColor GroundAlbedo; // 0x20c
	UMaterialInterface* Material; // 0x210
	char bUsePerSampleAtmosphericLightTransmittance : 1; // 0x218
	float SkyLightCloudBottomOcclusion; // 0x21c
	float ViewSampleCountScale; // 0x220
	float ReflectionSampleCountScale; // 0x224
	float ShadowViewSampleCountScale; // 0x228
	float ShadowReflectionSampleCountScale; // 0x22c
	float ShadowTracingDistance; // 0x230
};

struct USQSDeleteMessageBatch : UAwsSQSAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UNavigationSystemModuleConfig : UNavigationSystemConfig {
	char bStrictlyStatic : 1; // 0x50
	char bCreateOnClient : 1; // 0x50
	char bAutoSpawnMissingNavData : 1; // 0x50
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x50
};

struct UMaterialExpressionSaturate : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UParticleModuleCollisionGPU : UParticleModuleCollisionBase {
	FRawDistributionFloat Resilience; // 0x30
	FRawDistributionFloat ResilienceScaleOverLife; // 0x60
	float Friction; // 0x90
	float RandomSpread; // 0x94
	float RandomDistribution; // 0x98
	float RadiusScale; // 0x9c
	float RadiusBias; // 0xa0
	EParticleCollisionResponse Response; // 0xa4
	EParticleCollisionMode CollisionMode; // 0xa5
};

struct UPawnAction_Sequence : UPawnAction {
	TArray<UPawnAction*> ActionSequence; // 0x98
	EPawnActionFailHandling ChildFailureHandlingMode; // 0xa8
	UPawnAction* RecentActionCopy; // 0xb0
};

struct UBP_DeathRecapComponent_C : UActorComponent {
	float RecordResetTime; // 0xb0
	float LastRecordTime; // 0xb4
	TArray<FS_HealthChangeSummary> DeathRecap Analysis; // 0xb8
	FS_PlayerInfoSummary KillerInfo; // 0xc8
};

struct UBTTask_BlueprintBase : UBTTaskNode {
	AAIController* AIOwner; // 0x70
	AActor* ActorOwner; // 0x78
	FIntervalCountdown TickInterval; // 0x80
	char bShowPropertyDetails : 1; // 0xa0
};

struct UBP_SVGameInstanceWithSettings_C : USurvivalGameInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x208
	UBP_GameSettingsWrapper_C* Game Settings Wrapper; // 0x210
};

struct UWBP_Slot_Display_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image_Item; // 0x268
	UImage* Image_Tier; // 0x270
	USizeBox* SizeBox_1; // 0x278
	UTextBlock* Text_Amount; // 0x280
	UWBP_UI_SlotHovering_C* WBP_UI_SlotHovering; // 0x288
	FItemInventory Item; // 0x290
	UBP_PlayerInventoryComponent_C* Inventory Component; // 0x2c8
	FVector2D Slot Size; // 0x2d0
	UWBP_Tooltip_C* Tooltip Widget; // 0x2d8
};

struct UMaterialExpressionSingleLayerWaterMaterialOutput : UMaterialExpressionCustomOutput {
	FExpressionInput ScatteringCoefficients; // 0x40
	FExpressionInput AbsorptionCoefficients; // 0x54
	FExpressionInput PhaseG; // 0x68
	FExpressionInput ColorScaleBehindWater; // 0x7c
};

struct UWBP_RadiogramCraftingListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWBP_RadiogramListing_C* CraftPlace; // 0x268
	UImage* Image; // 0x270
	UImage* Image_46; // 0x278
	UOverlay* Overlay_Hand; // 0x280
	UOverlay* Overlay_Required; // 0x288
	UOverlay* Overlay_Result; // 0x290
	UTextBlock* Text_Time; // 0x298
	UWBP_Button_UI_C* WBP_Button_UI; // 0x2a0
	UWidgetSwitcher* WidgetSwitcher_65; // 0x2a8
	UWrapBox* WrapBox_Requirement; // 0x2b0
	FS_CraftingRecipeData Crafting Recipe Data; // 0x2b8
	UWBP_Main_Radiogram_C* Radiogram Main; // 0x2f8
	int32_t UID; // 0x300
};

struct UTextLayoutWidget : UWidget {
	FShapedTextOptions ShapedTextOptions; // 0x108
	ETextJustify Justification; // 0x10b
	ETextWrappingPolicy WrappingPolicy; // 0x10c
	char AutoWrapText : 1; // 0x10d
	float WrapTextAt; // 0x110
	FMargin Margin; // 0x114
	float LineHeightPercentage; // 0x124
};

struct UInterpTrackBoolProp : UInterpTrack {
	TArray<FBoolTrackKey> BoolTrack; // 0x70
	FName PropertyName; // 0x80
};

struct UFindFriendSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UMovieSceneFadeSection : UMovieSceneSection {
	FMovieSceneFloatChannel FloatCurve; // 0xe8
	FLinearColor FadeColor; // 0x188
	char bFadeAudio : 1; // 0x198
};

struct ABP_ToggleSkill_C : ABP_SkillBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b0
};

struct UWBP_Radiogram_Convert_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UVerticalBox* list; // 0x268
	int32_t UID; // 0x270
	UWBP_Main_Radiogram_C* RadiogramMain; // 0x278
	TArray<UWBP_RadiogramConvertListing_C*> WidgetArray; // 0x280
};

struct UWBP_System_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Settings; // 0x268
	UWidgetAnimation* Anim_Open; // 0x270
	UBorder* Border_System; // 0x278
	UButton* Button_Exit; // 0x280
	UButton* Button_Lobby; // 0x288
	UButton* Button_Resume; // 0x290
	UButton* Button_Settings; // 0x298
	UWBP_Confirm_C* WBP_Confirm; // 0x2a0
	WBP_Settings_C* WBP_Settings; // 0x2a8
	UWBP_WaitSaveGame_C* WBP_WaitSaveGame; // 0x2b0
	bool NewVar_1; // 0x2b8
};

struct UNamedInterfaces : UObject {
	TArray<FNamedInterface> NamedInterfaces; // 0x28
	TArray<FNamedInterfaceDef> NamedInterfaceDefs; // 0x38
};

struct UCloudWatchLogsCreateLogStream : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UImgMediaSettings : UObject {
	FFrameRate DefaultFrameRate; // 0x28
	float CacheBehindPercentage; // 0x30
	float CacheSizeGB; // 0x34
	int32_t CacheThreads; // 0x38
	int32_t CacheThreadStackSizeKB; // 0x3c
	float GlobalCacheSizeGB; // 0x40
	bool UseGlobalCache; // 0x44
	uint32_t ExrDecoderThreads; // 0x48
	FString DefaultProxy; // 0x50
	bool UseDefaultProxy; // 0x60
};

struct UOnlineSessionClient : UOnlineSession {
	bool bIsFromInvite; // 0x1d8
	bool bHandlingDisconnect; // 0x1d9
};

struct UAN_CameraShakeAtLocation_C : UAnimNotify {
	UMatineeCameraShake* CameraShakeClass; // 0x38
	FName SocketName; // 0x40
	float InnerRadius; // 0x48
	float OuterRadius; // 0x4c
	float Falloff; // 0x50
};

struct ABP_DisplayManagementBuildPart_C : ABP_FunctionalityBuildPartBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x890
	USkeletalMeshComponent* Facility_Pannel_SK; // 0x898
	UParticleSystemComponent* P_Facility_Pannel; // 0x8a0
	UStaticMeshComponent* pannel_hologram_SM; // 0x8a8
};

struct UMovieSceneGeometryCacheSection : UMovieSceneSection {
	FMovieSceneGeometryCacheParams Params; // 0xe8
};

struct ABP_EscapeRocket_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UBoxComponent* weather proof1; // 0x228
	UStaticMeshComponent* BG_SpaceShip_in_Display_SM_02; // 0x230
	UStaticMeshComponent* BG_SpaceShip_in_Display_SM_01; // 0x238
	UPointLightComponent* PointLight5; // 0x240
	UPointLightComponent* PointLight4; // 0x248
	UPointLightComponent* PointLight3; // 0x250
	UPointLightComponent* PointLight2; // 0x258
	UPointLightComponent* PointLight1; // 0x260
	UPointLightComponent* PointLight; // 0x268
	UBP_WidgetIndicatorComponent_C* Indicator; // 0x270
	UChildActorComponent* EnterConsoleR; // 0x278
	UChildActorComponent* EnterConsoleL; // 0x280
	UChildActorComponent* NonPVPZone; // 0x288
	UChildActorComponent* InnerDoor; // 0x290
	UStaticMeshComponent* InnerRoom; // 0x298
	UStaticMeshComponent* BG_S_launch_pad_Ring_F_01; // 0x2a0
	UStaticMeshComponent* BG_S_launch_pad_Ring_B_01; // 0x2a8
	UStaticMeshComponent* BG_S_launch_pad_Main_03; // 0x2b0
	UStaticMeshComponent* BG_S_launch_pad_Main_02; // 0x2b8
	UStaticMeshComponent* BG_S_launch_pad_Main_01; // 0x2c0
	UStaticMeshComponent* BG_S_launch_pad_Top_01; // 0x2c8
	USceneComponent* SpawnLocation; // 0x2d0
	UStaticMeshComponent* Rocket; // 0x2d8
	USceneComponent* DefaultSceneRoot; // 0x2e0
	TArray<FVector> OutLocations; // 0x2e8
	bool bIsWorldEnded; // 0x2f8
	bool PrepareEnd; // 0x2f9
};

struct UBTTask_GetFarLocationFromTarget_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	FBlackboardKeySelector KEYTargetActorOrLocation; // 0xb0
	FBlackboardKeySelector KEYFarLocation; // 0xd8
	FVector TargetLocation; // 0x100
	float FarDistance; // 0x10c
	FVector MyLocation; // 0x110
	FVector BoundRange; // 0x11c
	FVector FinalLocatoin; // 0x128
};

struct UBTService_PlayerReaction_C : UBTService_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x98
	FBlackboardKeySelector KEYTargetActor; // 0xa0
	FBlackboardKeySelector KEYTargetLocation; // 0xc8
	FBlackboardKeySelector KEYStress; // 0xf0
	TSet<ASurvivalCharacterBase*> Targets; // 0x118
	APawn* MyPawn; // 0x168
	FBlackboardKeySelector KEYFloorSenceRange; // 0x170
	ASurvivalCharacterBase* CurrentTarget; // 0x198
	bool UseFloatingLocation; // 0x1a0
	float FloatingHight; // 0x1a4
};

struct UParticleModuleBeamTarget : UParticleModuleBeamBase {
	Beam2SourceTargetMethod TargetMethod; // 0x30
	FName TargetName; // 0x34
	FRawDistributionVector Target; // 0x40
	char bTargetAbsolute : 1; // 0x88
	char bLockTarget : 1; // 0x88
	Beam2SourceTargetTangentMethod TargetTangentMethod; // 0x8c
	FRawDistributionVector TargetTangent; // 0x90
	char bLockTargetTangent : 1; // 0xd8
	FRawDistributionFloat TargetStrength; // 0xe0
	char bLockTargetStength : 1; // 0x110
	float LockRadius; // 0x114
};

struct UBP_BuildJointComponent_C : UBuildJointComponent {
	FTransform MeshOffset; // 0x4a0
	TArray<E_BuildJointType> BuildJointTypeList; // 0x4d0
};

struct ABP_EffectActor_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UAkComponent* Ak; // 0x228
	UAudioComponent* Audio; // 0x230
	UParticleSystemComponent* ParticleSystem; // 0x238
	USceneComponent* DefaultSceneRoot; // 0x240
	UParticleSystem* Particle; // 0x248
	USoundBase* Sound; // 0x250
	float DestroyTime; // 0x258
	bool Activated; // 0x25c
	UAkAudioEvent* AkEvent; // 0x260
	TArray<UAkSwitchValue*> AkSwitches; // 0x268
	float DeactiveTime; // 0x278
	float DeactiveEmmiterTime; // 0x27c
};

struct ULowEntryByteDataReader : UObject {
	TArray<char> Bytes; // 0x28
	int32_t Position; // 0x38
};

struct USurvivalRankStructWrapper_C : UObject {
	FS_SurvivalRank Struct; // 0x28
};

struct UBlackboardKeyType_NativeEnum : UBlackboardKeyType {
	FString EnumName; // 0x30
	UEnum* EnumType; // 0x40
};

struct UAnimCurveCompressionSettings : UObject {
	UAnimCurveCompressionCodec* Codec; // 0x28
};

struct UBTTask_SetRandomFloat_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	FBlackboardKeySelector KEYPercent; // 0xb0
};

struct AVectorFieldVolume : AActor {
	UVectorFieldComponent* VectorFieldComponent; // 0x220
};

struct UHorizontalBoxSlot : UPanelSlot {
	FMargin Padding; // 0x40
	FSlateChildSize Size; // 0x50
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
};

struct URMGameViewportClient : UGameViewportClient {
	bool bEnableQuickExit; // 0x360
	FVector2D SubtitleRegionMin; // 0x368
	FVector2D SubtitleRegionMax; // 0x370
};

struct ABP_PillarBuildPartBase_C : ABP_StaticMeshBuildPartBase_C {
	UBP_BuildJointComponent_C* Bolt; // 0x860
	UBP_BuildJointComponent_C* TriCeiling; // 0x868
	UBP_BuildJointComponent_C* CeilingSocket5; // 0x870
	UBP_BuildJointComponent_C* CeilingSocket4; // 0x878
	UBP_BuildJointComponent_C* CeilingSocket3; // 0x880
	UBP_BuildJointComponent_C* CeilingSocket2; // 0x888
	USceneComponent* Socket_Ceiling; // 0x890
	UBoxComponent* StabilityCheck_Lower; // 0x898
	UBoxComponent* StabilityCheck_Upper; // 0x8a0
	USceneComponent* Stability; // 0x8a8
	float StabilityMultiplyByLower; // 0x8b0
	float StabilityAddtiveVaule; // 0x8b4
};

struct UParticleSystem : UFXSystemAsset {
	float UpdateTime_FPS; // 0x30
	float UpdateTime_Delta; // 0x34
	float WarmupTime; // 0x38
	float WarmupTickRate; // 0x3c
	TArray<UParticleEmitter*> Emitters; // 0x40
	UParticleSystemComponent* PreviewComponent; // 0x50
	UInterpCurveEdSetup* CurveEdSetup; // 0x58
	float LODDistanceCheckTime; // 0x60
	float MacroUVRadius; // 0x64
	TArray<float> LODDistances; // 0x68
	TArray<FParticleSystemLOD> LODSettings; // 0x78
	FBox FixedRelativeBoundingBox; // 0x88
	float SecondsBeforeInactive; // 0xa4
	float Delay; // 0xa8
	float DelayLow; // 0xac
	char bOrientZAxisTowardCamera : 1; // 0xb0
	char bUseFixedRelativeBoundingBox : 1; // 0xb0
	char bShouldResetPeakCounts : 1; // 0xb0
	char bHasPhysics : 1; // 0xb0
	char bUseRealtimeThumbnail : 1; // 0xb0
	char ThumbnailImageOutOfDate : 1; // 0xb0
	char bUseDelayRange : 1; // 0xb1
	char bAllowManagedTicking : 1; // 0xb1
	char bAutoDeactivate : 1; // 0xb1
	char bRegenerateLODDuplicate : 1; // 0xb1
	EParticleSystemUpdateMode SystemUpdateMode; // 0xb2
	ParticleSystemLODMethod LODMethod; // 0xb3
	EParticleSystemInsignificanceReaction InsignificantReaction; // 0xb4
	EParticleSystemOcclusionBoundsMethod OcclusionBoundsMethod; // 0xb5
	EParticleSignificanceLevel MaxSignificanceLevel; // 0xb7
	uint32_t MinTimeBetweenTicks; // 0xb8
	float InsignificanceDelay; // 0xbc
	FVector MacroUVPosition; // 0xc0
	FBox CustomOcclusionBounds; // 0xcc
	TArray<FLODSoloTrack> SoloTracking; // 0xe8
	TArray<FNamedEmitterMaterial> NamedMaterialSlots; // 0xf8
};

struct UCloudWatchLogsDeleteSubscriptionFilter : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UInterpTrackInstVisibility : UInterpTrackInst {
	EVisibilityTrackAction Action; // 0x28
	float LastUpdatePosition; // 0x2c
};

struct USubmixEffectMultibandCompressorPreset : USoundEffectSubmixPreset {
	FSubmixEffectMultibandCompressorSettings Settings; // 0xb0
};

struct UDatasmithSpotLightComponentTemplate : UDatasmithObjectTemplate {
	float InnerConeAngle; // 0x30
	float OuterConeAngle; // 0x34
};

struct UNiagaraDataInterfaceGrid2DCollection : UNiagaraDataInterfaceGrid2D {
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xf8
	ENiagaraGpuBufferFormat OverrideBufferFormat; // 0x118
	char bOverrideFormat : 1; // 0x119
	TMap<uint64_t, UTextureRenderTarget2DArray*> ManagedRenderTargets; // 0x170
};

struct USubsurfaceProfile : UObject {
	FSubsurfaceProfileStruct Settings; // 0x28
};

struct AOnlineBeaconHostObjectDynamic : AOnlineBeaconHostObject {
	UChildActorComponent* Relay; // 0x248
};

struct USubmixEffectReverbPluginPreset : USoundEffectSubmixPreset {
	FSubmixEffectReverbPluginSettings Settings; // 0x91
};

struct UEnvQueryTest_Distance : UEnvQueryTest {
	EEnvTestDistance TestMode; // 0x1f8
	UEnvQueryContext* DistanceTo; // 0x200
};

struct AWeapon : AActor {
	bool bActive; // 0x220
	float CriticalDamageMultiplier; // 0x224
	USkeletalMeshComponent* Mesh; // 0x228
	UCapsuleComponent* FistCapsuleCollision; // 0x230
	UWidgetComponent* Widget; // 0x238
	EWeaponType WeaponType; // 0x240
	bool bTwoHandedWeapon; // 0x241
	bool UnlimitedAmmo; // 0x242
	int32_t Ammo; // 0x244
	int32_t RoundAmmo; // 0x248
	int32_t AmmoMax; // 0x24c
	int32_t RoundAmmoMax; // 0x250
	int32_t NumProjectiles; // 0x254
	float DamageRange; // 0x258
	bool bIgnoreCharacterBlocked; // 0x25c
	float Damage; // 0x260
	float DamageImpulse; // 0x264
	float MultipleDamageToShieldForEnergyWeapon; // 0x268
	float MultipleDamageToShieldForKineticWeapon; // 0x26c
	float MultipleDamageToHealthForEnergyWeapon; // 0x270
	float MultipleDamageToHealthForKineticWeapon; // 0x274
	float FriendlyDamageMultiplier; // 0x278
	FRuntimeFloatCurve DamageScaleByDistanceCurve; // 0x280
	float FistDamage; // 0x308
	float FistDamageSpeedThreshold; // 0x30c
	float FistDamageCoolTime; // 0x310
	TArray<FWeaponHitSetting> FistHitSetting; // 0x318
	UDamageType* FistDamageType; // 0x328
	UHapticFeedbackEffect_Base* FistHapticEffect; // 0x330
	FName FistEffectSocket; // 0x338
	bool FireByAnimation; // 0x340
	float CoolTime; // 0x344
	bool bAutoFire; // 0x348
	float ReloadTime; // 0x34c
	USkeletalMesh* Mesh1P; // 0x350
	UParticleSystem* MuzzleFireFx; // 0x358
	AInfinityFireProjectileBase* ProjectileClass; // 0x360
	USoundBase* FireSound; // 0x368
	float FireSoundRange; // 0x370
	UAnimMontage* FireAnimation; // 0x378
	UHapticFeedbackEffect_Base* FireHapticEffect; // 0x380
	UAnimMontage* ReloadAnimation; // 0x388
	UAnimMontage* HandIdleAnimation_R; // 0x390
	UAnimMontage* HandIdleAnimation_L; // 0x398
	UAnimMontage* HandFireAnimation_R; // 0x3a0
	UAnimMontage* HandFireAnimation_L; // 0x3a8
	UAnimMontage* HandReloadAnimation_R; // 0x3b0
	UAnimMontage* HandReloadAnimation_L; // 0x3b8
	AShooterCharacter* Pawn; // 0x3c0
	float AimingDeviation; // 0x3c8
	float AimDeviationAccumPerFire; // 0x3cc
	float MaxAimingDeviation; // 0x3d0
	float CurrentAimingDeviation; // 0x3d4
	bool bShield; // 0x3d8
	int32_t ShieldBlockScore; // 0x3dc
	UHapticFeedbackEffect_Base* ShieldBlockHapticEffect; // 0x3e0
	EControllerHand hand; // 0x3e8
	AActor* WeaponPickupClass; // 0x3f0
	ADecalActor* DotSightClass; // 0x3f8
	float DotSightDistance; // 0x400
	FName MuzzleSocketName; // 0x404
	bool bFixedFireDirection; // 0x40c
	AActor* DesiredTarget; // 0x410
	FVector DesiredTargetLocation; // 0x418
	float MinSlashDistance; // 0x424
	float MinSlashSpeed; // 0x428
	bool Firing; // 0x42c
	ADecalActor* DotSightActor; // 0x430
	bool Reloading; // 0x438
	bool bForceUseReloadTime; // 0x439
	bool IsRegistered; // 0x4e0
};

struct AControlPointMeshActor : AActor {
	UControlPointMeshComponent* ControlPointMeshComponent; // 0x220
};

struct UFixedFrameRateCustomTimeStep : UEngineCustomTimeStep {
	FFrameRate FixedFrameRate; // 0x28
};

struct UBP_SurvivalGameInstance_C : UBP_SVGameInstanceWithSettings_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x218
	FString Dedisvr_Title; // 0x220
	FString dedisvr_guid; // 0x230
	FString Dedisvr_Branch; // 0x240
	FTimerHandle StatLogTimerHandle; // 0x250
	FString BranchNameOnEditor; // 0x258
	bool SendingHttpRequestDediList; // 0x268
	float AWSCloudwatchAgentTime; // 0x26c
	bool NeedPlayingToPrologue; // 0x270
	FString MapToLoad; // 0x278
	TArray<FS_SurvivalRank> SurvivalRank; // 0x288
	bool SendingHttpRequestOperationInfo; // 0x298
	FPBUF_sv_OperationInfoRes OperationInfo; // 0x2a0
	ABP_SurvivalBeforeIngameBeaconClient_C* BeforeIngameBeaconClient; // 0x2b8
	TArray<UDataTable*> ItemTables; // 0x2c0
	TArray<UDataTable*> ItemTables_Original; // 0x2d0
	FMulticastInlineDelegate OnBeforeIngameBeaconDataRecv; // 0x2e0
	E_UserKickType KickType; // 0x2f0
	FString CachedNickName; // 0x2f8
	FString AWSAccessKey; // 0x308
	FString AWSSecretKey; // 0x318
	FString AWSRegion; // 0x328
	UCloudWatchClientObject* CWObject; // 0x338
	FTimerHandle AWSMetricTimerHandle; // 0x340
	bool ShutdownDedisvrWhenSaveFinished; // 0x348
	FS_SurvivalRank My Rank; // 0x350
	EEndingType EndingType; // 0x390
	TArray<UObject*> AlwaysLoadedClasses; // 0x398
	bool NowConnectingOnlineBeacon; // 0x3a8
};

struct UWaypointMarkerInfo_C : UUserWidget {
	UTextBlock* HoverName; // 0x260
};

struct UWBP_HUD_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Recorvered; // 0x268
	UWidgetAnimation* PresetChange; // 0x270
	UWidgetAnimation* Anim_Radiorgam; // 0x278
	UWidgetAnimation* Anim_Damaged; // 0x280
	UWidgetAnimation* Anim_HUD_Filter; // 0x288
	UBorder* Border_Dropzone; // 0x290
	UBorder* Border_IngameUIMenus; // 0x298
	UWBP_HUD_Fake_C* BP_Fake; // 0x2a0
	UCanvasPanel* CanvasPanel_3; // 0x2a8
	UHorizontalBox* HorizontalBox_QuickSlot; // 0x2b0
	UHorizontalBox* HorizontalBox_QuickSlot2; // 0x2b8
	UWBP_HUD_Crosshair_C* HUDCrosshair; // 0x2c0
	UImage* Image_143; // 0x2c8
	UImage* Image1; // 0x2d0
	UImage* Image2; // 0x2d8
	UImage* Image_DebugCrosshair; // 0x2e0
	UImage* Image_HUD; // 0x2e8
	UImage* Image_NonPVP; // 0x2f0
	UInvalidationBox* InvalidationBox_2; // 0x2f8
	UInvalidationBox* InvalidationBox_Temperature; // 0x300
	UInvalidationBox* InvalidationBox_Time; // 0x308
	UWBP_HUD_Notification_C* NotificationListPanel; // 0x310
	UOverlay* Overlay_Compass; // 0x318
	UOverlay* Overlay_DamagedDirection; // 0x320
	UOverlay* Overlay_Notice; // 0x328
	UOverlay* Overlay_Queue; // 0x330
	UOverlay* Overlay_WorldStats; // 0x338
	UCanvasPanel* Panel_Debug; // 0x340
	UCanvasPanel* Panel_InventoryHUD; // 0x348
	UWBP_Slot_Quick_C* QuickSlot1; // 0x350
	UWBP_Slot_Quick_C* QuickSlot1_2; // 0x358
	UWBP_Slot_Quick_C* QuickSlot2; // 0x360
	UWBP_Slot_Quick_C* QuickSlot2_2; // 0x368
	UWBP_Slot_Quick_C* QuickSlot3; // 0x370
	UWBP_Slot_Quick_C* QuickSlot3_2; // 0x378
	UWBP_Slot_Quick_C* QuickSlot4; // 0x380
	UWBP_Slot_Quick_C* QuickSlot4_2; // 0x388
	UWBP_Slot_Quick_C* QuickSlot5; // 0x390
	UWBP_Slot_Quick_C* QuickSlot5_2; // 0x398
	UWBP_Slot_Quick_C* QuickSlot6; // 0x3a0
	UWBP_Slot_Quick_C* QuickSlot6_2; // 0x3a8
	UWBP_Slot_Quick_C* QuickSlot7; // 0x3b0
	UWBP_Slot_Quick_C* QuickSlot7_2; // 0x3b8
	UWBP_Slot_Quick_C* QuickSlot8; // 0x3c0
	UWBP_Slot_Quick_C* QuickSlot8_2; // 0x3c8
	URetainerBox* RetainerBox_Curved; // 0x3d0
	UTextBlock* ServerFPS; // 0x3d8
	UTextBlock* Text_Client; // 0x3e0
	UTextBlock* Text_Temperature; // 0x3e8
	UTextBlock* Text_Time; // 0x3f0
	UTextBlock* TextBlock_Distance; // 0x3f8
	UTextBlock* TextBlock_TargetName; // 0x400
	UTextBlock* TextBlock_X; // 0x408
	UTextBlock* TextBlock_X_2; // 0x410
	UTextBlock* TextBlock_X_3; // 0x418
	UTextBlock* TextBlock_Y; // 0x420
	UTextBlock* TextBlock_Z; // 0x428
	UVerticalBox* VerticalBox_Notice; // 0x430
	UWBP_HUD_Casting_C* WBP_Aim_Casting; // 0x438
	UWBP_Button_Menu_C* WBP_Button_Menu_Crafting; // 0x440
	UWBP_Button_Menu_C* WBP_Button_Menu_Inventory; // 0x448
	UWBP_Button_Menu_C* WBP_Button_Menu_Landmark; // 0x450
	UWBP_Button_Menu_C* WBP_Button_Menu_MachineArm; // 0x458
	UWBP_Button_Menu_C* WBP_Button_Menu_Mail; // 0x460
	UWBP_Button_Menu_C* WBP_Button_Menu_Radiogram; // 0x468
	UWBP_Button_Menu_C* WBP_Button_Menu_Ranking; // 0x470
	UWBP_HUD_Dialogue_C* WBP_Dialogue; // 0x478
	UWBP_Popup_Password_C* WBP_EnterPassword; // 0x480
	UWBP_HUD_Action_C* WBP_HUD_Action; // 0x488
	UWBP_HUD_Casting_C* WBP_HUD_Casting; // 0x490
	UWBP_HUD_Condition_C* WBP_HUD_Condition; // 0x498
	UWBP_HUD_Coordinate_C* WBP_HUD_Coordinate; // 0x4a0
	UWBP_HUD_Durability_C* WBP_HUD_Durability; // 0x4a8
	UWBP_HUD_Event_C* WBP_HUD_Event; // 0x4b0
	UWBP_HUD_Guide_C* WBP_HUD_Guide; // 0x4b8
	UWBP_HUD_Interaction_C* WBP_HUD_Interaction; // 0x4c0
	UWBP_Main_QueueListing_C* WBP_HUD_QueueListing; // 0x4c8
	UWBP_HUD_Resource_C* WBP_HUD_Resource; // 0x4d0
	UWBP_HUD_Stats_C* WBP_HUD_Stats; // 0x4d8
	UWBP_HUD_Target_C* WBP_HUD_Target; // 0x4e0
	UWBP_HUD_Team_C* WBP_HUD_Team; // 0x4e8
	UWBP_HUD_Voice_C* WBP_HUD_Voice; // 0x4f0
	UWBP_Key_C* WBP_Key_145; // 0x4f8
	UWBP_Popup_Naming_C* WBP_NamingUI; // 0x500
	UWBP_Popup_UserSearch_C* WBP_Popup_UserSearch; // 0x508
	UWBP_Popup_Split_C* WBP_SplitUI; // 0x510
	UBP_PlayerInventoryComponent_C* Player Inventory Component; // 0x518
	UBP_PlayerBuildingComponent_C* Player Building Component; // 0x520
	UWBP_Slot_Inventory_C* Current Inventory Slot Reference; // 0x528
	UWBP_Slot_Equipment_C* Current Equipment Reference; // 0x530
	UWBP_Slot_Inventory_C* Last Inventory Reference; // 0x538
	UWBP_Slot_Equipment_C* Last Equipment Reference; // 0x540
	UWBP_Slot_Inventory_C* End Inventory Reference; // 0x548
	UWBP_Slot_Equipment_C* End Equipment Reference; // 0x550
	UWBP_Slot_Equipment_C* Left Mouse Equipment Reference; // 0x558
	UWBP_Slot_Inventory_C* Left Mouse Inventory Reference; // 0x560
	UWBP_Slot_Display_C* Right Mouse Display; // 0x568
	UWBP_Slot_Inventory_C* Right Mouse Inventory Reference; // 0x570
	UWBP_Slot_Equipment_C* Right Mouse Equipment Reference; // 0x578
	UBP_MasterCraftingListing_C* Right Mouse Crafting Listing Reference; // 0x580
	UWBP_Function_Display_C* Display Options Widget; // 0x588
	UWBP_Function_Inventory_C* Inventory Options Widget; // 0x590
	UWBP_Function_Equipment_C* Equipment Options Widget; // 0x598
	UWBP_Function_Crafting_C* Crafting Listing Options; // 0x5a0
	UWBP_Handled_Item_C* Move Item Widget; // 0x5a8
	UWBP_Slot_Inventory_C* Selected Slot; // 0x5b0
	WBP_RingBase_C*  Radial Menu; // 0x5b8
	bool Moving Item; // 0x5c0
	FTimerHandle Moving Item Timer; // 0x5c8
	bool Spliting Stack; // 0x5d0
	ESlateVisibility Forget Widget Visibility; // 0x5d1
	ESlateVisibility Crosshair Visibility; // 0x5d2
	FVector2D Move Widget Size; // 0x5d4
	FLinearColor Enable Attachment Color; // 0x5dc
	FLinearColor Disable Attachment Color; // 0x5ec
	float Timer Current Time; // 0x5fc
	bool Hovered On Drop; // 0x600
	bool bOpenOhterPlayerInventory; // 0x601
	FRotator OldRotation; // 0x604
	FRotator Rotation; // 0x610
	float RotationVelocityPower; // 0x61c
	UMaterialInstanceDynamic* MI_CurvedHUD; // 0x620
	E_MainUIState UIState; // 0x628
	float OldVelocity; // 0x62c
	float Velocity; // 0x630
	FS_BuildPartInfo BuildModeInfo; // 0x638
	bool bIsLMBWidgetDefault; // 0x838
	float WorldRadiation; // 0x83c
	TArray<UWBP_Slot_Quick_C*> QuickSlotArray_Preset1; // 0x840
	TArray<UWBP_Slot_Quick_C*> QuickSlotArray_Preset2; // 0x850
	bool Inited; // 0x860
	AActor* TargetedActor; // 0x868
	UWBP_Slot_Quick_C* Left Quick Slot; // 0x870
	UWBP_Slot_Quick_C* CurrentQuickSlotRef; // 0x878
	float CharacterNicknameDistanceSquared; // 0x880
	int32_t WorldTemperature; // 0x884
	int32_t WorldTime; // 0x888
	int32_t WorldDday; // 0x88c
	bool bUIOpened; // 0x890
	bool bBlockingHit; // 0x891
	E_MechanicArmMode CurrentHUD; // 0x892
	UWBP_Slot_Attachment_C* CurrentAttachmentRef; // 0x898
	int32_t CurrentWeaponIndex; // 0x8a0
	UWBP_Slot_Equipment_C* EndAttachmentReference; // 0x8a8
	FTimerHandle ShowInfoTimer; // 0x8b0
	bool bDoubleClicked; // 0x8b8
	FFloatValueFromDataTable GameTimeMultiflyByConfig; // 0x8c0
	bool bShowSeverStat; // 0x8e8
	int32_t Split Amount; // 0x8ec
	bool bSplitOne; // 0x8f0
	UWBP_RetrieverRegisterSlot_C* Current Retrieve Slot; // 0x8f8
	UBP_GameSettings_C* Game Settings; // 0x900
	UWBP_HoldableGuideUIBase_C* HoldableGuideUI; // 0x908
	int32_t LastExecTutorialStep; // 0x910
	bool ForceShowGuide; // 0x914
	float LastIteractTargetUpdateTime; // 0x918
	FMulticastInlineDelegate OnItemDragged; // 0x920
	FMulticastInlineDelegate OnLeftItemReleased; // 0x930
};

struct UTextBlockWidgetStyle : USlateWidgetStyleContainerBase {
	FTextBlockStyle TextBlockStyle; // 0x30
};

struct AUIPawn : APawn {
	USceneComponent* CameraParent; // 0x280
	UCameraComponent* CameraComponent; // 0x288
	UMotionControllerComponent* R_MotionController; // 0x290
	UMotionControllerComponent* L_MotionController; // 0x298
	USkeletalMeshComponent* VR_Hand_R; // 0x2a0
	USkeletalMeshComponent* VR_Hand_L; // 0x2a8
	UWidgetInteractionWithRay* R_WidgetInteraction; // 0x2b0
	UWidgetInteractionWithRay* L_WidgetInteraction; // 0x2b8
	bool bAlignToPlayerStart; // 0x2c0
	bool bRecenterZByCurrentHMDHeight; // 0x2c1
	bool bUsingMotionControllers; // 0x2c2
	bool bHMDEnabled; // 0x2c3
};

struct UWBP_Popup_Split_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_Slider; // 0x268
	UWBP_MainFrame_C* BP_UI_Frame; // 0x270
	UEditableTextBox* EditableTextBox_Split; // 0x278
	UImage* Image; // 0x280
	UImage* Image_119; // 0x288
	UImage* Image_Item; // 0x290
	USlider* Slider_Split; // 0x298
	UTextBlock* Text_Maximum; // 0x2a0
	UTextBlock* Text_Minimum; // 0x2a8
	UWBP_PopUp_Button_C* WBP_PopUp_Button; // 0x2b0
	UWBP_Toolbar_Close_C* WBP_Toolbar_Close; // 0x2b8
	UBP_PlayerInventoryComponent_C* PlayerInventoryComponent; // 0x2c0
	UMaterialInstanceDynamic* MI_Slider; // 0x2c8
	bool bIsValueChanging; // 0x2d0
	int32_t Maximum; // 0x2d4
	float Value; // 0x2d8
	float Step; // 0x2dc
	FItemInventory Item; // 0x2e0
};

struct ULandscapeSplineSegment : UObject {
	FLandscapeSplineSegmentConnection Connections[0x2]; // 0x28
	FInterpCurveVector SplineInfo; // 0x58
	TArray<FLandscapeSplineInterpPoint> Points; // 0x70
	FBox Bounds; // 0x80
	TArray<USplineMeshComponent*> LocalMeshComponents; // 0xa0
};

struct AProceduralFoliageBlockingVolume : AVolume {
	AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x258
};

struct UMovieSceneParameterSection : UMovieSceneSection {
	TArray<FBoolParameterNameAndCurve> BoolParameterNamesAndCurves; // 0xe8
	TArray<FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // 0xf8
	TArray<FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves; // 0x108
	TArray<FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // 0x118
	TArray<FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // 0x128
	TArray<FTransformParameterNameAndCurves> TransformParameterNamesAndCurves; // 0x138
};

struct UMaterialExpressionGetMaterialAttributes : UMaterialExpression {
	FMaterialAttributesInput MaterialAttributes; // 0x40
	TArray<FGuid> AttributeGetTypes; // 0x58
};

struct UMediaTexture : UTexture {
	TextureAddress AddressX; // 0xd8
	TextureAddress AddressY; // 0xd9
	bool AutoClear; // 0xda
	FLinearColor ClearColor; // 0xdc
	bool EnableGenMips; // 0xec
	char NumMips; // 0xed
	bool NewStyleOutput; // 0xee
	MediaTextureOutputFormat OutputFormat; // 0xef
	float CurrentAspectRatio; // 0xf0
	MediaTextureOrientation CurrentOrientation; // 0xf4
	UMediaPlayer* MediaPlayer; // 0xf8
};

struct UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput {
	TArray<FGrassInput> GrassTypes; // 0x40
};

struct ABP_EnterEscapeRocketConsole_C : ABP_InteractionableActor_C {
	USceneComponent* OutPos; // 0x268
	UStaticMeshComponent* BG_S_launch_pad_Gate_Door_01_SM; // 0x270
};

struct ALandmarkEffectBase : AActor {
	FText effectname; // 0x220
	FText Discription; // 0x238
	FSlateBrush Icon; // 0x250
	float TerraPower; // 0x2d8
	float EffectTime; // 0x2dc
	float WaitTime; // 0x2e0
	ELandmarkEffectState EffectState; // 0x2e4
	float ServerDestroyTime; // 0x2e8
	float ServerWaitTime; // 0x2ec
};

struct UParticleModuleAcceleration : UParticleModuleAccelerationBase {
	FRawDistributionVector Acceleration; // 0x38
	char bApplyOwnerScale : 1; // 0x80
};

struct UNiagaraPreviewAxis_InterpParamInt32 : UNiagaraPreviewAxis_InterpParamBase {
	int32_t Min; // 0x38
	int32_t Max; // 0x3c
};

struct UBTDecorator_IsAtLocation : UBTDecorator_BlackboardBase {
	float AcceptableRadius; // 0x90
	FAIDataProviderFloatValue ParametrizedAcceptableRadius; // 0x98
	FAIDistanceType GeometricDistanceType; // 0xd0
	char bUseParametrizedRadius : 1; // 0xd4
	char bUseNavAgentGoalLocation : 1; // 0xd4
	char bPathFindingBasedTest : 1; // 0xd4
};

struct UAISense_Touch : UAISense {
	TArray<FAITouchEvent> RegisteredEvents; // 0x80
};

struct UEnvQuery : UDataAsset {
	FName QueryName; // 0x30
	TArray<UEnvQueryOption*> Options; // 0x38
};

struct UCircularThrobber : UWidget {
	int32_t NumberOfPieces; // 0x108
	float Period; // 0x10c
	float Radius; // 0x110
	USlateBrushAsset* PieceImage; // 0x118
	FSlateBrush Image; // 0x120
	bool bEnableRadius; // 0x1a8
};

struct USafeZoneSlot : UPanelSlot {
	bool bIsTitleSafe; // 0x38
	FMargin SafeAreaScale; // 0x3c
	EHorizontalAlignment HAlign; // 0x4c
	EVerticalAlignment VAlign; // 0x4d
	FMargin Padding; // 0x50
};

struct UWBP_Main_Equipment_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWBP_MainFrame_C* BP_UI_Frame; // 0x268
	UWBP_Slot_Equipment_C* ChestEquipmentSlot; // 0x270
	UImage* ChracterImage; // 0x278
	UWBP_Slot_Equipment_C* FeetEquipmentSlot; // 0x280
	UWBP_Slot_Equipment_C* HeadEquipmentSlot; // 0x288
	UWBP_Slot_Equipment_C* LegsEquipmentSlot; // 0x290
	UTextBlock* Text_Energy; // 0x298
	UTextBlock* Text_Health; // 0x2a0
	UTextBlock* Text_Hunger; // 0x2a8
	UTextBlock* Text_Resist_Bleeding; // 0x2b0
	UTextBlock* Text_Resist_Cold; // 0x2b8
	UTextBlock* Text_Resist_Heat; // 0x2c0
	UTextBlock* Text_Resist_Radiation; // 0x2c8
	UTextBlock* Text_Rssist_Fracture; // 0x2d0
	UTextBlock* Text_SurvivalDays; // 0x2d8
	UTextBlock* Text_Temperature; // 0x2e0
	UTextBlock* Text_Thirst; // 0x2e8
	UWBP_MainFrame_Header_C* WBP_MainFrame_Header; // 0x2f0
	UWBP_Slot_Equipment_C* WBP_Slot_Equipment_Memory1; // 0x2f8
	UWBP_Slot_Equipment_C* WBP_Slot_Equipment_Memory2; // 0x300
	UWBP_Slot_Equipment_C* WBP_Slot_Equipment_Memory3; // 0x308
	UWBP_Slot_Equipment_C* WBP_Slot_Equipment_Memory4; // 0x310
	UWBP_Slot_Equipment_C* WBP_Slot_Equipment_Protocol1; // 0x318
	UWBP_Slot_Equipment_C* WBP_Slot_Equipment_Protocol2; // 0x320
	bool DragEnabled; // 0x328
	FVector2D LastMousePosition; // 0x32c
	bool IsMouseButtonDown; // 0x334
	bool IsDrag; // 0x335
	UCanvasPanelSlot* ParentSlot; // 0x338
	float SafetyZoneY; // 0x340
	float SafetyZoneX; // 0x344
	UBP_PlayerInventoryComponent_C* Inventory Component; // 0x348
	UWBP_HUD_C* Parent Widget; // 0x350
	FS_EquipmentSlot New Equipment; // 0x358
	bool Inventory; // 0x398
	bool Crafting; // 0x399
	FString StatsHealth; // 0x3a0
	FString StatsHunger; // 0x3b0
	FString StatsThirst; // 0x3c0
	FString StatsEnergy; // 0x3d0
	float StatsTemperature; // 0x3e0
	int32_t Hour; // 0x3e4
	UObject* Protocol 1Equipment Slot; // 0x3e8
	TMap<UWBP_Slot_Equipment_C*, FS_EquipmentSlot> OccupationSlotList; // 0x3f0
	FS_EquipmentSlot Current Equipment; // 0x440
};

struct UPhononProbeComponent : USceneComponent {
	TArray<FVector> ProbeLocations; // 0x1f8
};

struct UTransformProxy : UObject {
	bool bRotatePerObject; // 0x70
	bool bSetPivotMode; // 0x71
	FTransform SharedTransform; // 0x90
	FTransform InitialSharedTransform; // 0xc0
};

struct UGlee_SK_Skeleton_AnimBlueprint_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8
};

struct ABP_SV_Oceanology_C : ABP_OceanologyAdvanced_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3e0
	USceneCaptureComponent2D* OceanHeightCapture; // 0x3e8
	UPostProcessComponent* PostProcess_Underwater; // 0x3f0
	UBoxComponent* PostProcessCollision; // 0x3f8
	bool Enable Underwater; // 0x400
	bool Update Location; // 0x401
	UMaterialInstanceDynamic* PostProcessMaterialInst; // 0x408
	UMaterialInstance* PostProcessMaterial; // 0x410
	TArray<AVolumetricCloud*> VolumetricClouds; // 0x418
	float InteractionDistance; // 0x428
	bool EnableHeightCapture; // 0x42c
};

struct USQSDeleteQueue : UAwsSQSAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UUMGSequencePlayer : UObject {
	UWidgetAnimation* Animation; // 0x410
	FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x420
};

struct UGeneralProjectSettings : UObject {
	FString CompanyName; // 0x28
	FString CompanyDistinguishedName; // 0x38
	FString CopyrightNotice; // 0x48
	FString Description; // 0x58
	FString Homepage; // 0x68
	FString LicensingTerms; // 0x78
	FString PrivacyPolicy; // 0x88
	FGuid ProjectID; // 0x98
	FString ProjectName; // 0xa8
	FString ProjectVersion; // 0xb8
	FString SupportContact; // 0xc8
	FText ProjectDisplayedTitle; // 0xd8
	FText ProjectDebugTitleInfo; // 0xf0
	bool bShouldWindowPreserveAspectRatio; // 0x108
	bool bUseBorderlessWindow; // 0x109
	bool bStartInVR; // 0x10a
	bool bAllowWindowResize; // 0x10b
	bool bAllowClose; // 0x10c
	bool bAllowMaximize; // 0x10d
	bool bAllowMinimize; // 0x10e
};

struct AMagicLeapARPinRenderer : AActor {
	bool bInfoActorsVisibilityOverride; // 0x220
	TMap<FGuid, AMagicLeapARPinInfoActorBase*> AllInfoActors; // 0x228
	AMagicLeapARPinInfoActorBase* ClassToSpawn; // 0x280
};

struct UARGeoAnchorComponent : UARComponent {
	FARGeoAnchorUpdatePayload ReplicatedPayload; // 0x280
};

struct UGoofy_S_SK_Skeleton_AnimBlueprint_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8
};

struct ABP_WreckedCarResource_C : ABP_MasterResource_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x440
	USkeletalMeshComponent* SkeletalMesh; // 0x448
	TArray<USkeletalMesh*> CarVariationsHatchback; // 0x450
	TArray<USkeletalMesh*> CarVariationsPickup; // 0x460
	TArray<USkeletalMesh*> CarVariationsWagon; // 0x470
	TArray<USkeletalMesh*> ActiveArray; // 0x480
	VehicleType CarType; // 0x490
	UMaterialInstanceDynamic* CarBodyMatInst; // 0x498
	int32_t MeshIndex; // 0x4a0
	bool RandomColor; // 0x4a4
	FLinearColor CarPaintColor; // 0x4a8
	TArray<FLinearColor> CarColors; // 0x4b8
	TArray<FS_ResourceBreakablePart> BreakableBones; // 0x4c8
	TSet<FName> BonesToDisappear; // 0x4d8
};

struct ABP_SM_Pipe17_C : AActor {
	USplineComponent* Spline; // 0x220
	USceneComponent* TopScene; // 0x228
	USceneComponent* DefaultSceneRoot; // 0x230
};

struct UGizmoCircleComponent : UGizmoBaseComponent {
	FVector Normal; // 0x460
	float Radius; // 0x46c
	float Thickness; // 0x470
	int32_t NumSides; // 0x474
	bool bViewAligned; // 0x478
	bool bOnlyAllowFrontFacingHits; // 0x479
};

struct UMaterialExpressionCurveAtlasRowParameter : UMaterialExpressionScalarParameter {
	UCurveLinearColor* Curve; // 0x60
	UCurveLinearColorAtlas* Atlas; // 0x68
	FExpressionInput InputTime; // 0x70
};

struct UBlendSpaceBase : UAnimationAsset {
	bool bRotationBlendInMeshSpace; // 0x88
	float AnimLength; // 0x8c
	FInterpolationParameter InterpolationParam[0x3]; // 0x90
	float TargetWeightInterpolationSpeedPerSec; // 0xa8
	ENotifyTriggerMode NotifyTriggerMode; // 0xac
	TArray<FPerBoneInterpolation> PerBoneBlend; // 0xb0
	int32_t SampleIndexWithMarkers; // 0xc0
	TArray<FBlendSample> SampleData; // 0xc8
	TArray<FEditorElement> GridSamples; // 0xd8
	FBlendParameter BlendParameters[0x3]; // 0xe8
};

struct UNiagaraDataInterfaceRenderTarget2D : UNiagaraDataInterfaceRWBase {
	FIntPoint Size; // 0xd8
	ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe0
	char bOverrideFormat : 1; // 0xe1
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8
	TMap<uint64_t, UTextureRenderTarget2D*> ManagedRenderTargets; // 0x108
};

struct ABP_MasterMeleeWeapon_C : AMeleeWeaponBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x5c0
	UAkComponent* Ak; // 0x5c8
	TMap<ABP_MasterResource_C*, FS_MinMax> Harvestable Items; // 0x5d0
	TArray<UAnimMontage*> FP Melee Montage; // 0x620
	TArray<UAnimMontage*> TP Melee Montage; // 0x630
	TArray<UAnimMontage*> FP Resource Hit Montage; // 0x640
	TArray<UAnimMontage*> TP Resource Hit Montage; // 0x650
	float Current Spread (UI Only); // 0x660
	AActor* Hit Actor; // 0x668
	UPrimitiveComponent* Hit Component; // 0x670
	bool Is Attacking; // 0x678
	TArray<AActor*> Ht Actors; // 0x680
	bool Only Hit One Resource Per Swing; // 0x690
	bool One Resource Hit; // 0x691
	bool bRepeatAttack; // 0x692
	ABP_ThrowItem_C* ThrownitemClass; // 0x698
	float ThrowVelocity; // 0x6a0
	UAnimMontage* FP Throw Anim; // 0x6a8
	UAnimMontage* TP Throw Anim; // 0x6b0
	UAnimSequence* TP_ThrowHoldingAnim; // 0x6b8
	UAnimSequence* FP_ThrowHoldingAnim; // 0x6c0
	int32_t RepeatCount; // 0x6c8
	bool bIsHoldingAttackWeapon; // 0x6cc
	float HoldingAttackTick; // 0x6d0
	FTimerHandle HoldingAttackTickTimer; // 0x6d8
	bool LastTraceResourceHit; // 0x6e0
	AActor* LastTraceHitResourceActor; // 0x6e8
	UBP_PlayerInventoryComponent_C* Player Inventory Component; // 0x6f0
	FDamageStruct DamageInfo; // 0x6f8
	FVector Decal Size; // 0x730
	float Decal Life Span; // 0x73c
	float Decal Fade Distance; // 0x740
	float HarvestDistance; // 0x744
	float HarvestRange; // 0x748
	TArray<AActor*> AlreadyDamagedActor; // 0x750
	bool bCheckDamage; // 0x760
	float HitCheckRadius; // 0x764
	UAkSwitchValue* FireSoundSwitch; // 0x768
	UCameraShakeBase* Hit Shake Class; // 0x770
};

struct ABP_TutorialManager_C : AActor {
	USceneComponent* DefaultSceneRoot; // 0x220
	TArray<UObject*> TutorialObject; // 0x228
	FMulticastInlineDelegate OnTutorialProgressChanged; // 0x238
	TMap<FString, int32_t> UserCurrentTutorialStepMap; // 0x248
	TMap<FString, FS_TutorialGoalDataArray> UserTutorialProgressData; // 0x298
};

struct UAutomationTestSettings : UObject {
	TArray<FString> EngineTestModules; // 0x28
	TArray<FString> EditorTestModules; // 0x38
	FSoftObjectPath AutomationTestmap; // 0x48
	TArray<FEditorMapPerformanceTestDefinition> EditorPerformanceTestMaps; // 0x60
	TArray<FSoftObjectPath> AssetsToOpen; // 0x70
	TArray<FString> MapsToPIETest; // 0x80
	FBuildPromotionTestSettings BuildPromotionTest; // 0x90
	FMaterialEditorPromotionSettings MaterialEditorPromotionTest; // 0x280
	FParticleEditorPromotionSettings ParticleEditorPromotionTest; // 0x2b0
	FBlueprintEditorPromotionSettings BlueprintEditorPromotionTest; // 0x2c0
	TArray<FString> TestLevelFolders; // 0x2f0
	TArray<FExternalToolDefinition> ExternalTools; // 0x300
	TArray<FEditorImportExportTestDefinition> ImportExportTestDefinitions; // 0x310
	TArray<FLaunchOnTestSettings> LaunchOnSettings; // 0x320
	FIntPoint DefaultScreenshotResolution; // 0x330
	float PIETestDuration; // 0x338
};

struct UWBP_Functionality_Retriever_C : UWBP_FunctionalityBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	UUniformGridPanel* ContentsGrid; // 0x278
	UImage* Image; // 0x280
	UImage* Image_2; // 0x288
	UImage* Image_56; // 0x290
	UImage* Image_86; // 0x298
	UImage* Image_111; // 0x2a0
	UWBP_RetrieverRegisterSlot_C* Next; // 0x2a8
	UOverlay* Overlay_After; // 0x2b0
	UOverlay* Overlay_Before; // 0x2b8
	UWBP_RetrieverRegisterSlot_C* Prev; // 0x2c0
	UWBP_FunctionalityInfo_C* WBP_FunctionalityInfo; // 0x2c8
	UWBP_FunctionalityMainButton_C* WBP_FunctionalityMainButton; // 0x2d0
	UWBP_MainFrame_Header_C* WBP_MainFrame_Header; // 0x2d8
	UWBP_MainFrame_Header_C* WBP_MainFrame_Header_2; // 0x2e0
	UWBP_ResourceListing_C* WBP_ResourceListing; // 0x2e8
	UWBP_RetrieverRegisterSlot_C* WBP_RetrieverRegisterSlot_C_1; // 0x2f0
	UWBP_RetrieverRegisterSlot_C* WBP_RetrieverRegisterSlot_C_2; // 0x2f8
	UWBP_RetrieverRegisterSlot_C* WBP_RetrieverRegisterSlot_C_3; // 0x300
	UWidgetSwitcher* WidgetSwitcher_1; // 0x308
	UWrapBox* WrapBox_Respurce; // 0x310
	TArray<FItemCodeValue> Register Cost; // 0x318
	int32_t RegisterSlot Idx; // 0x328
	int32_t RegisterUID; // 0x32c
};

struct UConstantQNRTSettings : UAudioSynesthesiaNRTSettings {
	float StartingFrequency; // 0x28
	int32_t NumBands; // 0x2c
	float NumBandsPerOctave; // 0x30
	float AnalysisPeriod; // 0x34
	bool bDownmixToMono; // 0x38
	EConstantQFFTSizeEnum FFTSize; // 0x39
	EFFTWindowType WindowType; // 0x3a
	EAudioSpectrumType SpectrumType; // 0x3b
	float BandWidthStretch; // 0x3c
	EConstantQNormalizationEnum CQTNormalization; // 0x40
	float NoiseFloorDb; // 0x44
};

struct UBTTask_RangeAttack_Hover_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	float DelayTime; // 0xb0
	FBlackboardKeySelector TargetActor; // 0xb8
	FVector BackMoveLocation; // 0xe0
};

struct UAsyncActionLoadPrimaryAssetClass : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UMovieSceneMediaTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> MediaSections; // 0x80
};

struct UMaterialExpressionAtmosphericFogColor : UMaterialExpression {
	FExpressionInput WorldPosition; // 0x40
};

struct UMaterialExpressionVectorNoise : UMaterialExpression {
	FExpressionInput Position; // 0x40
	EVectorNoiseFunction NoiseFunction; // 0x54
	int32_t Quality; // 0x58
	char bTiling : 1; // 0x5c
	uint32_t TileSize; // 0x60
};

struct UWBP_Radiogram_4020304_C : UUserWidget {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x260
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x268
	UWBP_RadiogramListing_C* WBP_RadiogramListing_2; // 0x270
	UWBP_RadiogramListing_C* WBP_RadiogramListing_3; // 0x278
};

struct UWBP_Popup_Password_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWBP_MainFrame_C* BP_UI_Frame; // 0x268
	UButton* Button_1; // 0x270
	UButton* Button_2; // 0x278
	UEditableTextBox* EditableTextBox_Password; // 0x280
	UTextBlock* ErrorText; // 0x288
	UImage* Image_158; // 0x290
	UWBP_PopUp_Button_C* WBP_PopUp_Button; // 0x298
	UWBP_PopUp_Button_C* WBP_PopUp_Button_2; // 0x2a0
	UWBP_PopUp_Button_C* WBP_PopUp_Button_3; // 0x2a8
	UWBP_PopUp_Button_C* WBP_PopUp_Button_4; // 0x2b0
	UWBP_PopUp_Button_C* WBP_PopUp_Button_5; // 0x2b8
	UWBP_PopUp_Button_C* WBP_PopUp_Button_6; // 0x2c0
	UWBP_PopUp_Button_C* WBP_PopUp_Button_7; // 0x2c8
	UWBP_PopUp_Button_C* WBP_PopUp_Button_8; // 0x2d0
	UWBP_PopUp_Button_C* WBP_PopUp_Button_9; // 0x2d8
	UWBP_PopUp_Button_C* WBP_PopUp_Button_10; // 0x2e0
	UWBP_Toolbar_Close_C* WBP_Toolbar_Close; // 0x2e8
	ABP_BuildPartBase_C* TargetBuildPart; // 0x2f0
	UBP_PlayerInventoryComponent_C* PlayerInventoryComponent; // 0x2f8
	bool CheckPrevPassword; // 0x300
	FSlateColor DefaultInformationColor; // 0x308
	FSlateColor ErrorInformationColor; // 0x330
	FMulticastInlineDelegate PasswordResult; // 0x358
	E_PasswordMode Mode; // 0x368
	bool ReserveOnSecurityMode; // 0x369
	FString DisplayPassword; // 0x370
	int32_t PasswordLength; // 0x380
	bool bFocus; // 0x384
};

struct UWBP_LandmarkTargetPoint_C : UUserWidget {
	UWidgetAnimation* Anim_Click; // 0x260
	UImage* Image_57; // 0x268
};

struct UButtonSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct ABP_ResultBox_C : ABP_MasterStorage_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3c8
	USceneComponent* BoxCap; // 0x3d0
	UWidgetComponent* Tag; // 0x3d8
	UArrowComponent* Arrow; // 0x3e0
	UStaticMeshComponent* BoxCapMesh; // 0x3e8
	float Timeline_Open_Alpha_9A9AA0A64C2C2F58C4872D8A656E150A; // 0x3f0
	ETimelineDirection Timeline_Open__Direction_9A9AA0A64C2C2F58C4872D8A656E150A; // 0x3f4
	UTimelineComponent* Timeline_Open; // 0x3f8
	bool CanOpen; // 0x400
	ABP_LandmarkZone_C* LandmarkRef; // 0x408
	FRotator OpenRotation; // 0x410
	FRotator CloseRotation; // 0x41c
};

struct ABP_Syringe_C : ABP_ConsumeHoldable_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4b0
	USkeletalMeshComponent* SkeletalMesh; // 0x4b8
	UStaticMeshComponent* StaticMesh; // 0x4c0
};

struct UMaterialExpressionMultiply : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UMaterialExpressionTangentOutput : UMaterialExpressionCustomOutput {
	FExpressionInput Input; // 0x40
};

struct UNiagaraDataInterfaceColorCurve : UNiagaraDataInterfaceCurveBase {
	FRichCurve RedCurve; // 0x70
	FRichCurve GreenCurve; // 0xf0
	FRichCurve BlueCurve; // 0x170
	FRichCurve AlphaCurve; // 0x1f0
};

struct UAkAuxBus : UAkAssetBase {
	UAkAudioBank* RequiredBank; // 0x50
};

struct UWBP_Radiogram_6010109_C : UWBP_radiogram_CustomBase_C {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x298
	UTextBlock* TextBlock; // 0x2a0
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x2a8
	UWBP_RadiogramListing_C* WBP_RadiogramListing_2; // 0x2b0
};

struct ASurvivalCharacter : ASurvivalCharacterBase {
	FMulticastInlineDelegate WeaponFired; // 0x698
	EPlayerMoveState PlayerMoveState; // 0x6a8
	bool bInGliding; // 0x6a9
	float GlidingMaintainEnergyCostPerSec; // 0x6ac
	float GlidingZVelocity; // 0x6b0
	float SpeedMultiply; // 0x6b4
	float ExceedHungerRegenPerSec; // 0x6b8
	float Hunger; // 0x6bc
	float MaxHunger; // 0x6c0
	float MaxExceedHunger; // 0x6c4
	TMap<EPlayerMoveState, float> DecreaseHungerPerSecond; // 0x6c8
	float HungerAffectionInterval; // 0x718
	float Thirst; // 0x71c
	float MaxThirst; // 0x720
	float MaxExceedThirst; // 0x724
	float ThirstAffectionInterval; // 0x728
	TMap<EPlayerMoveState, float> DecreaseThirstPerSecond; // 0x730
	float Stamina; // 0x780
	float MaxStamina; // 0x784
	FFloatValueFromDataTable JumpStaminaCost; // 0x788
	FIntValueFromDataTable AllowJumpWhenEmptyStamina; // 0x7b0
	TMap<EPlayerMoveState, float> DecreaseStaminaPerSecond; // 0x7d8
	TMap<EPlayerMoveState, float> RecoverStaminaPerSecond; // 0x828
	bool IsAIControlled; // 0x87c
	bool bIsEquipping; // 0x87d
	bool bReloadReserved; // 0x87e
	TWeakObjectPtr<AHoldableBase> CurrentHoldable; // 0x880
	TWeakObjectPtr<AHoldableBase> PrevHoldable; // 0x888
	TMap<EPlayerMoveState, float> MovementSpeeds; // 0x890
	float WorldShiftCheckInterval; // 0x8e0
	float DormancyConditionMultiply; // 0x8e4
	USoundBase* ShootHitSound; // 0x8e8
	USoundBase* WhipSound; // 0x8f0
	UAkComponent* AkShootHitSoundComponent; // 0x8f8
	UAkAudioEvent* AkShootHitEvent; // 0x900
	UAkAudioEvent* AkWhipEvent; // 0x908
	bool bSameTeamWithPlayer; // 0x922
	UVOIPTalker* VOIPTalker; // 0x928
};

struct USourceEffectPannerPreset : USoundEffectSourcePreset {
	FSourceEffectPannerSettings Settings; // 0x98
};

struct UUpdateSessionCallbackProxyAdvanced : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UReplicationGraphNode_AlwaysRelevant : UReplicationGraphNode {
	UReplicationGraphNode* ChildNode; // 0x50
};

struct UBP_CollisionByDistanceComponent_C : USceneComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x200
	FName NearCollisionProfileName; // 0x208
	float CollisionEnabledMaxDistance; // 0x210
};

struct UAkPS4InitializationSettings : UObject {
	FAkCommonInitializationSettings CommonSettings; // 0x28
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x88
	FAkPS4AdvancedInitializationSettings AdvancedSettings; // 0xb0
};

struct ADestructibleActor : AActor {
	UDestructibleComponent* DestructibleComponent; // 0x220
	FMulticastInlineDelegate OnActorFracture; // 0x228
};

struct UBP_ConditionBase_C : UObject {
	float MaintainTime; // 0x28
	bool IsDuplicatable; // 0x2c
	float FinishTime; // 0x30
	bool IsParentOverride; // 0x34
	BP_SurvivalCharacter_C* Target; // 0x38
};

struct UWBP_Confirm_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image_383; // 0x268
	UImage* Image_430; // 0x270
	UImage* Image_541; // 0x278
	UTextBlock* TextBlock_28; // 0x280
	UWBP_PopUp_Button_C* WBP_PopUp_Button_Cancel; // 0x288
	UWBP_PopUp_Button_C* WBP_PopUp_Button_OK; // 0x290
	FMulticastInlineDelegate OnButtonClick_OK; // 0x298
	FMulticastInlineDelegate OnButtonClick_Cancel; // 0x2a8
	int32_t Delay; // 0x2b8
};

struct UMaterialExpressionSceneTexture : UMaterialExpression {
	FExpressionInput Coordinates; // 0x40
	ESceneTextureId SceneTextureId; // 0x54
	bool bFiltered; // 0x55
};

struct UCurveFloat : UCurveBase {
	FRichCurve FloatCurve; // 0x30
	bool bIsEventCurve; // 0xb0
};

struct UMaterialExpressionMaterialAttributeLayers : UMaterialExpression {
	FName ParameterName; // 0x40
	FGuid ExpressionGUID; // 0x48
	FMaterialAttributesInput Input; // 0x58
	FMaterialLayersFunctions DefaultLayers; // 0x70
	TArray<UMaterialExpressionMaterialFunctionCall*> LayerCallers; // 0xb0
	int32_t NumActiveLayerCallers; // 0xc0
	TArray<UMaterialExpressionMaterialFunctionCall*> BlendCallers; // 0xc8
	int32_t NumActiveBlendCallers; // 0xd8
	bool bIsLayerGraphBuilt; // 0xdc
};

struct APaperTileMapActor : AActor {
	UPaperTileMapComponent* RenderComponent; // 0x220
};

struct USourceEffectBitCrusherPreset : USoundEffectSourcePreset {
	FSourceEffectBitCrusherSettings Settings; // 0xc0
};

struct USourceEffectRingModulationPreset : USoundEffectSourcePreset {
	FSourceEffectRingModulationSettings Settings; // 0xb0
};

struct UWBP_Radiogram_6010101_C : UWBP_radiogram_CustomBase_C {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x298
	UTextBlock* TextBlock; // 0x2a0
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x2a8
	UWBP_RadiogramListing_C* WBP_RadiogramListing_49; // 0x2b0
};

struct UNiagaraMeshRendererProperties : UNiagaraRendererProperties {
	UStaticMesh* ParticleMesh; // 0x80
	ENiagaraSortMode SortMode; // 0x88
	char bOverrideMaterials : 1; // 0x8c
	char bSortOnlyWhenTranslucent : 1; // 0x8c
	TArray<FNiagaraMeshMaterialOverride> OverrideMaterials; // 0x90
	FVector2D SubImageSize; // 0xa0
	char bSubImageBlend : 1; // 0xa8
	ENiagaraMeshFacingMode FacingMode; // 0xac
	char bLockedAxisEnable : 1; // 0xb0
	FVector LockedAxis; // 0xb4
	ENiagaraMeshLockedAxisSpace LockedAxisSpace; // 0xc0
	FVector PivotOffset; // 0xc4
	ENiagaraMeshPivotOffsetSpace PivotOffsetSpace; // 0xd0
	char bEnableFrustumCulling : 1; // 0xd4
	char bEnableCameraDistanceCulling : 1; // 0xd4
	float MinCameraDistance; // 0xd8
	float MaxCameraDistance; // 0xdc
	uint32_t RendererVisibility; // 0xe0
	FNiagaraVariableAttributeBinding PositionBinding; // 0xe8
	FNiagaraVariableAttributeBinding ColorBinding; // 0x140
	FNiagaraVariableAttributeBinding VelocityBinding; // 0x198
	FNiagaraVariableAttributeBinding MeshOrientationBinding; // 0x1f0
	FNiagaraVariableAttributeBinding ScaleBinding; // 0x248
	FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x2a0
	FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x2f8
	FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x350
	FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x3a8
	FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x400
	FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x458
	FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x4b0
	FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x508
	FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x560
	FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x5b8
};

struct AGameSession : AInfo {
	int32_t MaxSpectators; // 0x220
	int32_t MaxPlayers; // 0x224
	int32_t MaxPartySize; // 0x228
	char MaxSplitscreensPerConnection; // 0x22c
	bool bRequiresPushToTalk; // 0x22d
	FName SessionName; // 0x230
};

struct ASpectatorBeaconHost : AOnlineBeaconHostObject {
	USpectatorBeaconState* State; // 0x248
	bool bLogoutOnSessionTimeout; // 0x2b0
	float SessionTimeoutSecs; // 0x2b4
	float TravelSessionTimeoutSecs; // 0x2b8
};

struct UWBP_ArchieveItem_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWBP_PopUp_Button_C* WBP_PopUp_Button; // 0x268
	UWBP_Slot_Inventory_C* WBP_Slot_Inventory; // 0x270
	FItemInventory Item; // 0x278
	int32_t ItemIdx; // 0x2b0
	FMulticastInlineDelegate OnClickRecv; // 0x2b8
};

struct UMediaPlaylist : UObject {
	TArray<UMediaSource*> items; // 0x28
};

struct USpectatorPawnMovement : UFloatingPawnMovement {
	char bIgnoreTimeDilation : 1; // 0x150
};

struct UParticleModuleRotationRateMultiplyLife : UParticleModuleRotationRateBase {
	FRawDistributionFloat LifeMultiplier; // 0x30
};

struct ADatasmithSceneActor : AActor {
	UDatasmithScene* Scene; // 0x220
	TMap<FName, TSoftObjectPtr<AActor>> RelatedActors; // 0x228
};

struct UGizmoConstantFrameAxisSource : UObject {
	FVector Origin; // 0x30
	FVector Direction; // 0x3c
	FVector TangentX; // 0x48
	FVector TangentY; // 0x54
};

struct UWBP_Dropdown_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Open; // 0x268
	UButton* Button; // 0x270
	UImage* Image; // 0x278
	UImage* Image_158; // 0x280
	UTextBlock* TextName; // 0x288
	UVerticalBox* VerticalBox_Listing; // 0x290
	UWBP_Functionality_ConversionListing_C* WBP_ConvertListing; // 0x298
	FMulticastInlineDelegate OnButtonClicked; // 0x2a0
	FText ButtonName; // 0x2b0
};

struct UInterpTrackVisibility : UInterpTrack {
	TArray<FVisibilityTrackKey> VisibilityTrack; // 0x70
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	char bFireEventsWhenJumpingForwards : 1; // 0x80
};

struct USystemTimeTimecodeProvider : UTimecodeProvider {
	FFrameRate FrameRate; // 0x30
	bool bGenerateFullFrame; // 0x38
	bool bUseHighPerformanceClock; // 0x39
};

struct UWBP_Main_Ranking_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UScrollBox* ScrollBox_Leaderboard; // 0x268
	UWBP_MainFrame_C* WBP_MainFrame; // 0x270
	UWBP_MainFrame_Header_C* WBP_MainFrame_Header; // 0x278
	UWBP_Main_RankingListing_C* WBP_Ranking_Listing_My; // 0x280
};

struct UInterpTrackInstFloatAnimBPParam : UInterpTrackInst {
	UAnimInstance* AnimScriptInstance; // 0x28
	float ResetFloat; // 0x30
};

struct UAkAssetBase : UAkAudioType {
	UAkAssetPlatformData* PlatformAssetData; // 0x40
};

struct UWBP_Main_Description_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_2; // 0x268
	UBorder* Border_AttachmentGrip; // 0x270
	UBorder* Border_AttachmentMagazine; // 0x278
	UBorder* Border_AttachmentMuzzle; // 0x280
	UBorder* Border_AttachmentSight; // 0x288
	UWBP_MainFrame_C* BP_UI_Frame; // 0x290
	UButton* Button_Craft; // 0x298
	UButton* Button_Dec1; // 0x2a0
	UButton* Button_Dec10; // 0x2a8
	UButton* Button_Inc1; // 0x2b0
	UButton* Button_Inc10; // 0x2b8
	UButton* Button_Max; // 0x2c0
	UEditableTextBox* EditableTextBox_Amount; // 0x2c8
	UVerticalBox* HintSlot; // 0x2d0
	UHorizontalBox* HorizontalBox_Attachment; // 0x2d8
	UHorizontalBox* HorizontalBox_Resource; // 0x2e0
	UImage* Image_115; // 0x2e8
	UImage* Image_AttachmentGrip; // 0x2f0
	UImage* Image_AttachmentMagazine; // 0x2f8
	UImage* Image_AttachmentMuzzle; // 0x300
	UImage* Image_AttachmentSight; // 0x308
	UImage* Image_Category_Grip; // 0x310
	UImage* Image_Category_Magazine; // 0x318
	UImage* Image_Category_Muzzle; // 0x320
	UImage* Image_Category_Sight; // 0x328
	UImage* Image_Chest; // 0x330
	UImage* Image_Feet; // 0x338
	UImage* Image_Head; // 0x340
	UImage* Image_Icon; // 0x348
	UImage* Image_Legs; // 0x350
	UImage* Image_MemoryChip; // 0x358
	UImage* Image_Protocol; // 0x360
	UVerticalBox* Panel_CommonStats; // 0x368
	UGridPanel* Panel_Crafting_Requirement; // 0x370
	UVerticalBox* Panel_Equip_Protection; // 0x378
	UVerticalBox* Panel_Equip_Resistance; // 0x380
	UHorizontalBox* Panel_SubCategory; // 0x388
	UVerticalBox* ProtectionStats; // 0x390
	UVerticalBox* RequirementsVerricalBox; // 0x398
	UVerticalBox* ResistanceStats; // 0x3a0
	UTextBlock* Text_Category; // 0x3a8
	UTextBlock* Text_CraftingTime; // 0x3b0
	URichTextBlock* Text_Description; // 0x3b8
	UTextBlock* Text_Name; // 0x3c0
	UTextBlock* Text_Rarity; // 0x3c8
	UWBP_Main_Description_Attachment_C* WBP_ItemDescription_Attachment; // 0x3d0
	UWBP_MainFrame_Header_C* WBP_MainFrame_Header; // 0x3d8
	UWBP_ResourceListing_C* WBP_ResourceListing; // 0x3e0
	UWBP_Toolbar_Close_C* WBP_Toolbar_Close; // 0x3e8
	UWidgetSwitcher* WidgetSwitcher_ItemDesc; // 0x3f0
	FItemInventory Item; // 0x3f8
	UBP_PlayerInventoryComponent_C* Player Inventory Component; // 0x430
	FItemGeneralInfo ItemGeneralInfo; // 0x440
	int32_t CraftingCount; // 0x590
	FText PreviewNum; // 0x598
	bool IsCrafting; // 0x5b0
	FS_CraftingRecipeData CraftingRecipeData; // 0x5b8
	UBP_CraftingComponent_C* TargetCraftingComponent; // 0x5f8
	FMulticastInlineDelegate OnClickedClose; // 0x600
	bool bCloseButton; // 0x610
	UWBP_Main_DescriptionListing_C* CurerntExpired; // 0x618
};

struct UBTTask_MeleeAttack_Juggernaut_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	float DelayTime; // 0xb0
	FBlackboardKeySelector IsMeleeAttack; // 0xb8
	FBlackboardKeySelector TargetActor; // 0xe0
	FVector FrontMoveLocation; // 0x108
	APawn* Controlled Pawn; // 0x118
	FBlackboardKeySelector IsSelectAttackType; // 0x120
	FBlackboardKeySelector IsRangeAttackOther; // 0x148
};

struct ULiveLinkSubjectSettings : UObject {
	TArray<ULiveLinkFramePreProcessor*> PreProcessors; // 0x28
	ULiveLinkFrameInterpolationProcessor* InterpolationProcessor; // 0x38
	TArray<ULiveLinkFrameTranslator*> Translators; // 0x40
	ULiveLinkRole* Role; // 0x50
	FFrameRate FrameRate; // 0x58
	bool bRebroadcastSubject; // 0x60
};

struct UWidgetComponent : UMeshComponent {
	bool bRenderAfterPostProcess; // 0x468
	EWidgetSpace Space; // 0x469
	EWidgetTimingPolicy TimingPolicy; // 0x46a
	UUserWidget* WidgetClass; // 0x470
	FIntPoint DrawSize; // 0x478
	bool bManuallyRedraw; // 0x480
	bool bRedrawRequested; // 0x481
	float RedrawTime; // 0x484
	FIntPoint CurrentDrawSize; // 0x490
	bool bDrawAtDesiredSize; // 0x498
	FVector2D Pivot; // 0x49c
	bool bReceiveHardwareInput; // 0x4a4
	bool bWindowFocusable; // 0x4a5
	EWindowVisibility WindowVisibility; // 0x4a6
	bool bApplyGammaCorrection; // 0x4a7
	ULocalPlayer* OwnerPlayer; // 0x4a8
	FLinearColor BackgroundColor; // 0x4b0
	FLinearColor TintColorAndOpacity; // 0x4c0
	float OpacityFromTexture; // 0x4d0
	EWidgetBlendMode BlendMode; // 0x4d4
	bool bIsTwoSided; // 0x4d5
	bool TickWhenOffscreen; // 0x4d6
	UBodySetup* BodySetup; // 0x4d8
	UMaterialInterface* TranslucentMaterial; // 0x4e0
	UMaterialInterface* TranslucentMaterial_OneSided; // 0x4e8
	UMaterialInterface* OpaqueMaterial; // 0x4f0
	UMaterialInterface* OpaqueMaterial_OneSided; // 0x4f8
	UMaterialInterface* MaskedMaterial; // 0x500
	UMaterialInterface* MaskedMaterial_OneSided; // 0x508
	UTextureRenderTarget2D* RenderTarget; // 0x510
	UMaterialInstanceDynamic* MaterialInstance; // 0x518
	bool bAddedToScreen; // 0x520
	bool bEditTimeUsable; // 0x521
	FName SharedLayerName; // 0x524
	int32_t LayerZOrder; // 0x52c
	EWidgetGeometryMode GeometryMode; // 0x530
	float CylinderArcAngle; // 0x534
	ETickMode TickMode; // 0x538
	UUserWidget* Widget; // 0x560
};

struct AInfinityFireProjectile_Homing : AInfinityFireProjectile {
	float TraceableAngle; // 0x2b0
	float SteerAngleSpeed; // 0x2b4
	FVector TargetLocation; // 0x2b8
};

struct UNavLinkCustomComponent : UNavRelevantComponent {
	uint32_t NavLinkUserId; // 0xe8
	UNavArea* EnabledAreaClass; // 0xf0
	UNavArea* DisabledAreaClass; // 0xf8
	FNavAgentSelector SupportedAgents; // 0x100
	FVector LinkRelativeStart; // 0x104
	FVector LinkRelativeEnd; // 0x110
	ENavLinkDirection LinkDirection; // 0x11c
	char bLinkEnabled : 1; // 0x120
	char bNotifyWhenEnabled : 1; // 0x120
	char bNotifyWhenDisabled : 1; // 0x120
	char bCreateBoxObstacle : 1; // 0x120
	FVector ObstacleOffset; // 0x124
	FVector ObstacleExtent; // 0x130
	UNavArea* ObstacleAreaClass; // 0x140
	float BroadcastRadius; // 0x148
	float BroadcastInterval; // 0x14c
	ECollisionChannel BroadcastChannel; // 0x150
};

struct UCapsuleComponent : UShapeComponent {
	float CapsuleHalfHeight; // 0x458
	float CapsuleRadius; // 0x45c
};

struct UGraphNodeContextMenuContext : UObject {
	UBlueprint* Blueprint; // 0x28
	UEdGraph* Graph; // 0x30
	UEdGraphNode* Node; // 0x38
	bool bIsDebugging; // 0x48
};

struct UMaterialExpressionFrac : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UDatasmithActorTemplate : UDatasmithObjectTemplate {
	TSet<FName> Layers; // 0x30
	TSet<FName> Tags; // 0x80
};

struct USceneCaptureComponent2D : USceneCaptureComponent {
	ECameraProjectionMode ProjectionType; // 0x2b0
	float FOVAngle; // 0x2b4
	float OrthoWidth; // 0x2b8
	UTextureRenderTarget2D* TextureTarget; // 0x2c0
	ESceneCaptureCompositeMode CompositeMode; // 0x2c8
	FPostProcessSettings PostProcessSettings; // 0x2d0
	float PostProcessBlendWeight; // 0x820
	char bOverride_CustomNearClippingPlane : 1; // 0x824
	float CustomNearClippingPlane; // 0x828
	bool bUseCustomProjectionMatrix; // 0x82c
	FMatrix CustomProjectionMatrix; // 0x830
	bool bEnableClipPlane; // 0x870
	FVector ClipPlaneBase; // 0x874
	FVector ClipPlaneNormal; // 0x880
	char bCameraCutThisFrame : 1; // 0x88c
	char bConsiderUnrenderedOpaquePixelAsFullyTranslucent : 1; // 0x88c
	bool bDisableFlipCopyGLES; // 0x890
};

struct USVWeaponContent : UPrimaryDataAsset {
	FText WeaponName; // 0x30
	TArray<TSoftObjectPtr<USVWeaponPartsContent>> WeaponParts; // 0x48
	TArray<FString> WeaponPartsIDs; // 0x58
};

struct UInteractiveToolPropertySet : UObject {
	UInteractiveToolPropertySet* CachedProperties; // 0x38
	bool bIsPropertySetEnabled; // 0x40
};

struct UBTDecorator_DoesPathExist : UBTDecorator {
	FBlackboardKeySelector BlackboardKeyA; // 0x68
	FBlackboardKeySelector BlackboardKeyB; // 0x90
	char bUseSelf : 1; // 0xb8
	EPathExistanceQueryType PathQueryType; // 0xbc
	UNavigationQueryFilter* FilterClass; // 0xc0
};

struct UWBP_GCRBInfo_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* RatingInfo; // 0x268
	UImage* RatingReason; // 0x270
};

struct UParticleModuleVelocityInheritParent : UParticleModuleVelocityBase {
	FRawDistributionVector Scale; // 0x38
};

struct UWidgetAnimationPlayCallbackProxy : UObject {
	FMulticastInlineDelegate Finished; // 0x28
};

struct UActorSequence : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x60
	FActorSequenceObjectReferenceMap ObjectReferences; // 0x68
};

struct UWBP_Chat_Prefix_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* Button_Prefix_Global; // 0x268
	UImage* Image_Selected; // 0x270
	UTextBlock* Text_Prefix; // 0x278
	UWBP_Tooltip_UI_C* WBP_Tooltip_UI; // 0x280
	FLinearColor Specified Color; // 0x288
	FText In Text; // 0x298
	UWBP_MainChatWindow_C* MainChatRef; // 0x2b0
	E_ChatCategory Category; // 0x2b8
	FText Desc; // 0x2c0
};

struct UWBP_HUD_Coordinate_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* Text_Coordinate; // 0x268
	int32_t WorldCoordinateY; // 0x270
	int32_t WorldCoordinateX; // 0x274
	FVector2D LeftTop; // 0x278
	FVector2D RightDown; // 0x280
	FVector2D World Size; // 0x288
	FVector Offset; // 0x290
};

struct UMaterialExpressionSmoothStep : UMaterialExpression {
	FExpressionInput Min; // 0x40
	FExpressionInput Max; // 0x54
	FExpressionInput Value; // 0x68
	float ConstMin; // 0x7c
	float ConstMax; // 0x80
	float ConstValue; // 0x84
};

struct UArmor_Crafting_Table_SK_Skeleton_AnimBlueprint_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x2f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x378
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x3f8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x498
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x538
	bool IsCoreConnected; // 0x5b8
	bool IsWorking; // 0x5b9
	BP_ArmorTable_C* Armor Table; // 0x5c0
};

struct ABP_PlayerAIController_C : ABP_LandmarkAIControellr_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4a0
	float Duration; // 0x4a8
	UBehaviorTree* Behavior Tree; // 0x4b0
};

struct AAIContoller_Juggernaut_Junior_C : ACommonAI_BaseAIController_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x498
};

struct UComboButtonWidgetStyle : USlateWidgetStyleContainerBase {
	FComboButtonStyle ComboButtonStyle; // 0x30
};

struct UUniformInteger : UFieldNodeInt {
	int32_t Magnitude; // 0xb0
};

struct UBST_SpawnActor_C : UBP_SkillActionTaskBase_C {
	bool DeactiveWithDestroy; // 0xc1
	FString AttachBoneSocket; // 0xc8
	bool OwnerAttached; // 0xd8
	AActor* SpawnedActor; // 0xe0
};

struct UMaterialExpressionDesaturation : UMaterialExpression {
	FExpressionInput Input; // 0x40
	FExpressionInput Fraction; // 0x54
	FLinearColor LuminanceFactors; // 0x68
};

struct APlanarReflection : ASceneCapture {
	UPlanarReflectionComponent* PlanarReflectionComponent; // 0x230
	bool bShowPreviewPlane; // 0x238
};

struct UAudioAnalyzerNRT : UAudioAnalyzerAsset {
	USoundWave* Sound; // 0x28
	float DurationInSeconds; // 0x30
};

struct ABP_StaticMeshBuildPartBase_C : ABP_BuildPartBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x840
	UDestructibleComponent* Destructible; // 0x848
	UStaticMeshComponent* StaticMesh; // 0x850
	float Destructible Damage Amount; // 0x858
};

struct UPanelSlot : UVisual {
	UPanelWidget* Parent; // 0x28
	UWidget* Content; // 0x30
};

struct UARTrackedPose : UARTrackedGeometry {
	FARPose3D TrackedPose; // 0xf8
};

struct ABP_MaintainConvertBuildParts_C : ABP_FunctionalityBuildPartBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x890
	UBP_StorageInventoryComponent_C* Fuel; // 0x898
	UBP_StorageInventoryComponent_C* Output; // 0x8a0
	UBP_ConvertInventoryComponent_C* Convert; // 0x8a8
	TArray<FS_ItemFloat> MaintainTimeInfo; // 0x8b0
	FTimerHandle FuelTimer; // 0x8c0
	float FuelEndTime; // 0x8c8
};

struct UBP_ObjectiveSupporter_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	TArray<UBP_ObjectiveBroadcaster_C*> Objectives; // 0xb8
	TArray<UBP_ObjectiveBroadcaster_C*> ActivatedObjects; // 0xc8
};

struct UCloudWatchListDashboards : UAwsCloudWatchAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UBP_QuickGen_C : USaveGame {
	TArray<FItemInventory> History; // 0x28
};

struct UWBP_UserBan_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* Button_1; // 0x268
	UImage* Image_56; // 0x270
	UTextBlock* LeftTime; // 0x278
	float BanTime; // 0x280
};

struct URuntimeVirtualTextureComponent : USceneComponent {
	TSoftObjectPtr<AActor> BoundsAlignActor; // 0x1f8
	bool bSetBoundsButton; // 0x220
	bool bSnapBoundsToLandscape; // 0x221
	URuntimeVirtualTexture* VirtualTexture; // 0x228
	bool bEnableScalability; // 0x230
	uint32_t ScalabilityGroup; // 0x234
	bool bHidePrimitives; // 0x238
	UVirtualTextureBuilder* StreamingTexture; // 0x240
	int32_t StreamLowMips; // 0x248
	bool bBuildStreamingMipsButton; // 0x24c
	bool bEnableCompressCrunch; // 0x24d
	bool bUseStreamingLowMipsInEditor; // 0x24e
	bool bBuildDebugStreamingMips; // 0x24f
};

struct UMaterialBillboardComponent : UPrimitiveComponent {
	TArray<FMaterialSpriteElement> Elements; // 0x440
};

struct UEditableStaticMeshAdapter : UEditableMeshAdapter {
	UStaticMesh* StaticMesh; // 0x28
	UStaticMesh* OriginalStaticMesh; // 0x30
	int32_t StaticMeshLODIndex; // 0x38
};

struct UAvoidanceManager : UObject {
	float DefaultTimeToLive; // 0x30
	float LockTimeAfterAvoid; // 0x34
	float LockTimeAfterClean; // 0x38
	float DeltaTimeToPredict; // 0x3c
	float ArtificialRadiusExpansion; // 0x40
	float TestHeightDifference; // 0x44
	float HeightCheckMargin; // 0x48
};

struct UARPointComponent : UARComponent {
	FARPointUpdatePayload ReplicatedPayload; // 0x278
};

struct UCloudWatchLogsDescribeDestinations : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UCustomizableObjectImageProviderArray : UCustomizableSystemImageProvider {
	TArray<UTexture2D*> Textures; // 0x28
};

struct ABP_SmallStorageBoxBuildPart_C : ABP_StorageBoxBuildPartBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x890
};

struct UWBP_Functionality_Repair_C : UWBP_FunctionalityBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	UTextBlock* BreakingPercentage; // 0x278
	UTextBlock* CurrentCondtion; // 0x280
	UTextBlock* CurrentCondtion_2; // 0x288
	UTextBlock* CurrentMaxCondition; // 0x290
	UTextBlock* EnergyCost; // 0x298
	UImage* Image; // 0x2a0
	UImage* Image_2; // 0x2a8
	UImage* Image_5; // 0x2b0
	UImage* Image_6; // 0x2b8
	UImage* Image_7; // 0x2c0
	UImage* Image_8; // 0x2c8
	UImage* Image_66; // 0x2d0
	UImage* Image_86; // 0x2d8
	UImage* Image_414; // 0x2e0
	UImage* Image_618; // 0x2e8
	UImage* Image_Condition; // 0x2f0
	UTextBlock* OrginMaxCondition; // 0x2f8
	UTextBlock* PerfectRepairPercent; // 0x300
	UTextBlock* PerfectRepairPercent_2; // 0x308
	UWBP_Slot_Inventory_C* RepairTarget; // 0x310
	UTextBlock* ResultMaxCondition; // 0x318
	UVerticalBox* VerticalBox_7; // 0x320
	UWBP_FunctionalityInfo_C* WBP_FunctionalityInfo; // 0x328
	UWBP_FunctionalityMainButton_C* WBP_FunctionalityMainButton; // 0x330
	UWBP_MainFrame_Header_C* WBP_MainFrame_Header; // 0x338
	UWBP_MainFrame_Header_C* WBP_MainFrame_Header_2; // 0x340
	UWBP_MainFrame_Header_C* WBP_MainFrame_Header_3; // 0x348
	UWBP_ResourceListing_C* WBP_ResourceListing; // 0x350
	UWrapBox* WrapBox_79; // 0x358
	ABP_RepairTable_C* RepairTable; // 0x360
	UMaterialInstanceDynamic* MI_Condition; // 0x368
	bool bExist; // 0x370
};

struct USessionManager : UObject {
	FName GameName; // 0x28
};

struct AMagicLeapSharedWorldGameMode : AGameMode {
	FMagicLeapSharedWorldSharedData SharedWorldData; // 0x308
	FMulticastInlineDelegate OnNewLocalDataFromClients; // 0x318
	float PinSelectionConfidenceThreshold; // 0x328
	AMagicLeapSharedWorldPlayerController* ChosenOne; // 0x3d0
};

struct UWBP_ObjectiveProgress_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Attention; // 0x268
	UImage* Image_60; // 0x270
	UImage* Image_136; // 0x278
	UProgressBar* ProgressBar_223; // 0x280
	UTextBlock* TB_Do; // 0x288
	float TempFloat; // 0x290
};

struct UNiagaraDataInterfaceFieldSystem : UNiagaraDataInterface {
	UBlueprint* BlueprintSource; // 0x38
	AActor* SourceActor; // 0x40
	FIntVector FieldDimensions; // 0x48
	FVector MinBounds; // 0x54
	FVector MaxBounds; // 0x60
};

struct UPhononMaterialComponent : UActorComponent {
	int32_t MaterialIndex; // 0xb0
	EPhononMaterial MaterialPreset; // 0xb4
	float LowFreqAbsorption; // 0xb8
	float MidFreqAbsorption; // 0xbc
	float HighFreqAbsorption; // 0xc0
	float LowFreqTransmission; // 0xc4
	float MidFreqTransmission; // 0xc8
	float HighFreqTransmission; // 0xcc
	float Scattering; // 0xd0
};

struct UFAI_BTTask_AttackState_Bear_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	FBlackboardKeySelector KEYTargetActor; // 0xb0
	FBlackboardKeySelector KEYTargetLocation; // 0xd8
	float PlayRate; // 0x100
	float DotValue; // 0x104
};

struct UNiagaraDataInterfaceArrayInt32 : UNiagaraDataInterfaceArray {
	TArray<int32_t> IntData; // 0x50
};

struct UMaterialExpressionReflectionCapturePassSwitch : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput Reflection; // 0x54
};

struct UParticleModuleMeshRotationRate : UParticleModuleRotationRateBase {
	FRawDistributionVector StartRotationRate; // 0x30
};

struct USoundNodeConcatenator : USoundNode {
	TArray<float> InputVolume; // 0x48
};

struct UMirrorTable : UDataAsset {
	TArray<FMirrorBone> MirrorBones; // 0x30
};

struct UTextureLODSettings : UObject {
	TArray<FTextureLODGroup> TextureLODGroups; // 0x28
};

struct UInstancedStaticMeshComponent : UStaticMeshComponent {
	TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x4d0
	int32_t NumCustomDataFloats; // 0x4e0
	TArray<float> PerInstanceSMCustomData; // 0x4e8
	int32_t InstancingRandomSeed; // 0x4f8
	int32_t InstanceStartCullDistance; // 0x4fc
	int32_t InstanceEndCullDistance; // 0x500
	TArray<int32_t> InstanceReorderTable; // 0x508
	int32_t NumPendingLightmaps; // 0x560
	TArray<FInstancedStaticMeshMappingInfo> CachedMappings; // 0x568
};

struct ASpotEventBase : AActor {
	ESpotEventState EventState; // 0x220
};

struct UMaterialExpressionShadowReplace : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput Shadow; // 0x54
};

struct UAnimInstance : UObject {
	USkeleton* CurrentSkeleton; // 0x28
	ERootMotionMode RootMotionMode; // 0x30
	char bUseMultiThreadedAnimationUpdate : 1; // 0x31
	char bUsingCopyPoseFromMesh : 1; // 0x31
	char bReceiveNotifiesFromLinkedInstances : 1; // 0x31
	char bPropagateNotifiesToLinkedInstances : 1; // 0x31
	char bQueueMontageEvents : 1; // 0x31
	FMulticastInlineDelegate OnMontageBlendingOut; // 0x38
	FMulticastInlineDelegate OnMontageStarted; // 0x48
	FMulticastInlineDelegate OnMontageEnded; // 0x58
	FMulticastInlineDelegate OnAllMontageInstancesEnded; // 0x68
	FAnimNotifyQueue NotifyQueue; // 0x100
	TArray<FAnimNotifyEvent> ActiveAnimNotifyState; // 0x170
};

struct UBP_MasterCraftingListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	FS_CraftingRecipeData Crafting Recipe; // 0x268
	UBP_PlayerInventoryComponent_C* Player Inventory Component; // 0x2a8
};

struct USoundNodeQualityLevel : USoundNode {
	int32_t CookedQualityLevelIndex; // 0x48
};

struct UChaosDestructionListener : USceneComponent {
	char bIsCollisionEventListeningEnabled : 1; // 0x1f8
	char bIsBreakingEventListeningEnabled : 1; // 0x1f8
	char bIsTrailingEventListeningEnabled : 1; // 0x1f8
	FChaosCollisionEventRequestSettings CollisionEventRequestSettings; // 0x1fc
	FChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x214
	FChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x22c
	TSet<AChaosSolverActor*> ChaosSolverActors; // 0x248
	TSet<AGeometryCollectionActor*> GeometryCollectionActors; // 0x298
	FMulticastInlineDelegate OnCollisionEvents; // 0x2e8
	FMulticastInlineDelegate OnBreakingEvents; // 0x2f8
	FMulticastInlineDelegate OnTrailingEvents; // 0x308
};

struct URandomVector : UFieldNodeVector {
	float Magnitude; // 0xb0
};

struct URestrictedGameplayTagsList : UObject {
	FString ConfigFileName; // 0x28
	TArray<FRestrictedGameplayTagTableRow> RestrictedGameplayTagList; // 0x38
};

struct ULuminRuntimeSettings : UObject {
	FString PackageName; // 0x28
	FString ApplicationDisplayName; // 0x38
	ELuminFrameTimingHint FrameTimingHint; // 0x48
	bool bProtectedContent; // 0x49
	bool bManualCallToAppReady; // 0x4a
	bool bUseMobileRendering; // 0x4b
	bool bUseVulkan; // 0x4c
	FFilePath Certificate; // 0x50
	FDirectoryPath IconModelPath; // 0x60
	FDirectoryPath IconPortalPath; // 0x70
	FLocalizedIconInfos LocalizedIconInfos; // 0x80
	int32_t VersionCode; // 0x90
	int32_t MinimumAPILevel; // 0x94
	TArray<ELuminPrivilege> AppPrivileges; // 0x98
	TArray<FLuminComponentSubElement> ExtraComponentSubElements; // 0xa8
	TArray<FLuminComponentElement> ExtraComponentElements; // 0xb8
	FString SpatializationPlugin; // 0xc8
	FString ReverbPlugin; // 0xd8
	FString OcclusionPlugin; // 0xe8
	int32_t SoundCueCookQualityIndex; // 0xf8
	bool bRemoveDebugInfo; // 0xfc
	FDirectoryPath VulkanValidationLayerLibs; // 0x100
	bool bFrameVignette; // 0x110
	TArray<FLocalizedAppName> LocalizedAppNames; // 0x118
};

struct UWBP_Popup_UserSearchListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image_159; // 0x268
	UBorder* Select; // 0x270
	UTextBlock* TextBlock_110; // 0x278
	UWBP_Button_UI_C* WBP_Button_Invite; // 0x280
	FS_UserUIDWithNick S User UIDWith Nick; // 0x288
	FString NickName; // 0x2a8
	FString UID; // 0x2b8
	bool success; // 0x2c8
	FMulticastInlineDelegate OnClickedButton; // 0x2d0
};

struct UParticleModuleCollision : UParticleModuleCollisionBase {
	FRawDistributionVector DampingFactor; // 0x30
	FRawDistributionVector DampingFactorRotation; // 0x78
	FRawDistributionFloat MaxCollisions; // 0xc0
	EParticleCollisionComplete CollisionCompletionOption; // 0xf0
	TArray<EObjectTypeQuery> CollisionTypes; // 0xf8
	char bApplyPhysics : 1; // 0x110
	char bIgnoreTriggerVolumes : 1; // 0x110
	FRawDistributionFloat ParticleMass; // 0x118
	float DirScalar; // 0x148
	char bPawnsDoNotDecrementCount : 1; // 0x14c
	char bOnlyVerticalNormalsDecrementCount : 1; // 0x14c
	float VerticalFudgeFactor; // 0x150
	FRawDistributionFloat DelayAmount; // 0x158
	char bDropDetail : 1; // 0x188
	char bCollideOnlyIfVisible : 1; // 0x188
	char bIgnoreSourceActor : 1; // 0x188
	float MaxCollisionDistance; // 0x18c
};

struct UMagicLeapImageTrackerComponent : USceneComponent {
	UTexture2D* TargetImageTexture; // 0x1f8
	FString Name; // 0x200
	float LongerDimension; // 0x210
	bool bIsStationary; // 0x214
	bool bUseUnreliablePose; // 0x215
	EMagicLeapImageTargetOrientation AxisOrientation; // 0x216
	FMulticastInlineDelegate OnSetImageTargetSucceeded; // 0x218
	FMulticastInlineDelegate OnSetImageTargetFailed; // 0x228
	FMulticastInlineDelegate OnImageTargetFound; // 0x238
	FMulticastInlineDelegate OnImageTargetLost; // 0x248
	FMulticastInlineDelegate OnImageTargetUnreliableTracking; // 0x258
};

struct UWBP_ObjectiveTime_C : UUserWidget {
	UImage* Image_60; // 0x260
	UImage* Image_109; // 0x268
	UTextBlock* TB_Do; // 0x270
	UTextBlock* TB_Time; // 0x278
	int32_t TempTime; // 0x280
};

struct ABP_ElectricTrap_C : ABP_FunctionalityBuildPartBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x890
	UBoxComponent* HumanBlock; // 0x898
	UAkComponent* WorkingSound; // 0x8a0
	UParticleSystemComponent* OnOffParticle; // 0x8a8
	UBoxComponent* ElectricShockVolume; // 0x8b0
	float _____0______0_D973997A46389F4746FFFEAA6F0F3F23; // 0x8b8
	ETimelineDirection _____0__Direction_D973997A46389F4746FFFEAA6F0F3F23; // 0x8bc
	UTimelineComponent*   _1; // 0x8c0
	float EnergyCostPerSecond; // 0x8c8
	FTimerHandle ElectircTimer; // 0x8d0
	float MeleeWeaponDamageMultply; // 0x8d8
	UMaterialInstanceDynamic* ElectircMaterial; // 0x8e0
	TMap<ASurvivalCharacterBase*, float> LastDamagedTime; // 0x8e8
	TMap<ASurvivalCharacterBase*, float> DelayRemoveActor; // 0x938
	float DamageInterval; // 0x988
	UDamageType* Damage Type Class; // 0x990
	float EnergyCostMin; // 0x998
	float EnergyCostMax; // 0x99c
	UCurveFloat* DamageCurve; // 0x9a0
};

struct ABP_RepairTable_C : ABP_FunctionalityBuildPartBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x890
	USkeletalMeshComponent* SkeletalMesh; // 0x898
	UBP_BuildJointComponent_C* BP_BuildJointComponent; // 0x8a0
	UBP_StorageInventoryComponent_C* BP_StorageInventoryComponent; // 0x8a8
	float RepairCostMultiply; // 0x8b0
	TArray<FItemCodeValue> RepairCost; // 0x8b8
};

struct UHapticFeedbackEffect_SoundWave : UHapticFeedbackEffect_Base {
	USoundWave* SoundWave; // 0x28
};

struct UInAppPurchaseComponent : UActorComponent {
	FMulticastInlineDelegate InAppPurchaseLogMessage; // 0xb0
	FMulticastInlineDelegate GetItemsDetailsSuccess; // 0xc0
	FMulticastInlineDelegate GetItemsDetailsFailure; // 0xd0
	FMulticastInlineDelegate PurchaseConfirmationSuccess; // 0xe0
	FMulticastInlineDelegate PurchaseConfirmationFailure; // 0xf0
	FMulticastInlineDelegate GetPurchaseHistorySuccess; // 0x100
	FMulticastInlineDelegate GetPurchaseHistoryFailure; // 0x110
};

struct UWBP_RadiogramListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWBP_Button_UI_C* ButtonTo; // 0x268
	UImage* Image_Custom; // 0x270
	UWBP_Slot_Display_C* WBP_Slot_Display; // 0x278
	UWidgetSwitcher* WidgetSwitcher_1; // 0x280
	int32_t Item ID; // 0x288
	int32_t AmountCount; // 0x28c
	E_RadiogramDetailType Radiogram Type; // 0x290
	bool bUseCustomImage; // 0x291
	UObject* CustomImage; // 0x298
	bool bUseCustomTooltip; // 0x2a0
	FText CustomTooltip; // 0x2a8
	bool bUseLink; // 0x2c0
	UWBP_Main_Radiogram_C* RadiogramMain; // 0x2c8
};

struct UNiagaraDataInterfaceArray : UNiagaraDataInterface {
	int32_t MaxElements; // 0x40
};

struct UAISense_Sight : UAISense {
	int32_t MaxTracesPerTick; // 0x148
	int32_t MinQueriesPerTimeSliceCheck; // 0x14c
	double MaxTimeSlicePerTick; // 0x150
	float HighImportanceQueryDistanceThreshold; // 0x158
	float MaxQueryImportance; // 0x160
	float SightLimitQueryImportance; // 0x164
};

struct UNavigationInvokerComponent : UActorComponent {
	float TileGenerationRadius; // 0xb0
	float TileRemovalRadius; // 0xb4
};

struct UBP_ObjectiveBroadcaster_C : UObjectiveBroadcaster {
	FPointerToUberGraphFrame UberGraphFrame; // 0x460
	UWBP_ObjectiveBase_C* ObjectiveWidget; // 0x468
	FMulticastInlineDelegate OnBeginOverlapObjectWidget; // 0x470
	FMulticastInlineDelegate OnEndOverlapObjectWidget; // 0x480
	FMulticastInlineDelegate OnCreateMyObjectWidget; // 0x490
	FMulticastInlineDelegate OnRemoveMyObjectWidget; // 0x4a0
	FTimerHandle RemoveWidgetTimer; // 0x4b0
	BP_SurvivalCharacter_C* Target Player; // 0x4b8
};

struct UGizmoConstantAxisSource : UObject {
	FVector Origin; // 0x30
	FVector Direction; // 0x3c
};

struct UCallbackProxyQueryWorkshopForItemDetails : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
	FMulticastInlineDelegate OnSteamInitFailure; // 0x50
};

struct AAIController_Juggernaut_Type00_C : ACommonAI_BaseAIController_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x498
};

struct UWBP_HUD_DamagedDirection_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Play; // 0x268
	UImage* Image_32; // 0x270
	float Angle; // 0x278
};

struct ABP_EarthDecreaseDecayEffect_C : ABP_LandmarkEffectRangeActor_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x368
	USphereComponent* Sphere; // 0x370
	UMatineeCameraShake* ShakeClass; // 0x378
	TArray<AActor*> OverlapingBuildings; // 0x380
	float DamageInterval; // 0x390
	float AddOuterRadius; // 0x394
	float DamagePercent; // 0x398
	float DamagePercentRandomRange; // 0x39c
	float EffectInterval; // 0x3a0
	FTimerHandle TimerSetDecay; // 0x3a8
};

struct UEditableGameplayTagQueryExpression_AnyExprMatch : UEditableGameplayTagQueryExpression {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
};

struct UBillboardComponent : UPrimitiveComponent {
	UTexture2D* Sprite; // 0x440
	char bIsScreenSizeScaled : 1; // 0x448
	float ScreenSize; // 0x44c
	float U; // 0x450
	float UL; // 0x454
	float V; // 0x458
	float VL; // 0x45c
};

struct UDistributionFloatConstant : UDistributionFloat {
	float Constant; // 0x38
};

struct UBTTask_FindLocationToMoveForward_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	AAIController* OwnerController; // 0xb0
	APawn* ControlledPawn; // 0xb8
	FBlackboardKeySelector MoveLocation; // 0xc0
	FBlackboardKeySelector IsMoveLocation; // 0xe8
	float CheckHeight; // 0x110
	float CheckBlockingHeight; // 0x114
};

struct UMaterialExpressionVertexInterpolator : UMaterialExpressionCustomOutput {
	FExpressionInput Input; // 0x40
};

struct UMovieScene3DPathSection : UMovieScene3DConstraintSection {
	FMovieSceneFloatChannel TimingCurve; // 0x110
	MovieScene3DPathSection_Axis FrontAxisEnum; // 0x1b0
	MovieScene3DPathSection_Axis UpAxisEnum; // 0x1b1
	char bFollow : 1; // 0x1b4
	char bReverse : 1; // 0x1b4
	char bForceUpright : 1; // 0x1b4
};

struct UAkXboxOneInitializationSettings : UObject {
	FAkCommonInitializationSettings CommonSettings; // 0x28
	FAkXboxOneApuHeapInitializationSettings ApuHeapSettings; // 0x88
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
	FAkXboxOneAdvancedInitializationSettings AdvancedSettings; // 0xb8
};

struct UAnimBP_Boss_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root_2; // 0x2c8
	FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x2f8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x410
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x430
	FAnimNode_DragonSpineSolver AnimGraphNode_DragonSpineSolver; // 0x450
	FAnimNode_DragonFeetSolver AnimGraphNode_DragonFeetSolver; // 0xc30
	FAnimNode_Root AnimGraphNode_Root; // 0x1280
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x12b0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x12d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x1300
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1328
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1350
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x13d0
	FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer; // 0x1400
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x1478
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x14a8
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1590
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x15c0
	FAnimNode_Slot AnimGraphNode_Slot; // 0x1670
	FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer; // 0x16b8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x1768
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x18c0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x18e8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1988
	float Speed; // 0x19b0
	float TurnSpeed; // 0x19b4
	TArray<FDragonData_FootData> FootIKInfo; // 0x19b8
	BP_Enum_AnimType AnimType; // 0x19c8
	bool NowInDediSvr; // 0x19c9
	bool IsDead; // 0x19ca
};

struct UModelComponent : UPrimitiveComponent {
	UBodySetup* ModelBodySetup; // 0x458
};

struct UDefaultLevelSequenceInstanceData : UObject {
	AActor* TransformOriginActor; // 0x30
	FTransform TransformOrigin; // 0x40
};

struct UMaterialExpressionSphereMask : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	FExpressionInput Radius; // 0x68
	FExpressionInput Hardness; // 0x7c
	float AttenuationRadius; // 0x90
	float HardnessPercent; // 0x94
};

struct USafeZone : UContentWidget {
	bool PadLeft; // 0x120
	bool PadRight; // 0x121
	bool PadTop; // 0x122
	bool PadBottom; // 0x123
};

struct UMovieSceneParticleSection : UMovieSceneSection {
	FMovieSceneParticleChannel ParticleKeys; // 0xe8
};

struct ABP_MasterGrid_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	USceneComponent* SelectionGrid; // 0x228
	E_BuildTypes Grid Type; // 0x230
	bool Show Grids; // 0x231
	TArray<AActor*> Ignore Grids; // 0x238
	TMap<UBoxComponent*, int32_t> GridId; // 0x248
	TArray<int32_t> ReserveGridIDs; // 0x298
};

struct USoundNodeDialoguePlayer : USoundNode {
	FDialogueWaveParameter DialogueWaveParameter; // 0x48
	char bLooping : 1; // 0x68
};

struct UMovieSceneCaptureProtocolBase : UObject {
	EMovieSceneCaptureProtocolState State; // 0x50
};

struct ABP_HologramTrap_CeilingBase_C : ABP_HologramTrapBuildPartBase_C {
	UBP_BuildJointComponent_C* Bolt1; // 0x948
};

struct UParticleModuleAccelerationOverLifetime : UParticleModuleAccelerationBase {
	FRawDistributionVector AccelOverLife; // 0x38
};

struct UARObjectComponent : UARComponent {
	FARObjectUpdatePayload ReplicatedPayload; // 0x280
};

struct USubUVAnimation : UObject {
	UTexture2D* SubUVTexture; // 0x28
	int32_t SubImages_Horizontal; // 0x30
	int32_t SubImages_Vertical; // 0x34
	ESubUVBoundingVertexCount BoundingMode; // 0x38
	EOpacitySourceMode OpacitySourceMode; // 0x39
	float AlphaThreshold; // 0x3c
};

struct UBP_WoodResourceFoliageComponent_C : UFoliageInstancedStaticMeshComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x6a0
	FFloatValueFromDataTable Tree_HP; // 0x6a8
	TMap<int32_t, float> TreeInstanceHPs; // 0x6d0
	ABP_BreakableTree_C* Resource; // 0x720
	bool SpawnBreakableTree; // 0x728
};

struct UNiagaraRendererProperties : UNiagaraMergeable {
	FNiagaraPlatformSet Platforms; // 0x28
	int32_t SortOrderHint; // 0x58
	bool bIsEnabled; // 0x5c
	bool bMotionBlurEnabled; // 0x5d
};

struct ABP_StorageBoxBuildPartBase_C : ABP_StaticMeshBuildPartBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x860
	UBP_StorageInventoryComponent_C* StorageComponent; // 0x868
	bool IsOpened; // 0x870
	UBP_PlayerInventoryComponent_C* Interacted Player Inventory; // 0x878
	USoundBase* OpenSound; // 0x880
	USoundBase* CloseSound; // 0x888
};

struct UAudioBus : UObject {
	EAudioBusChannels AudioBusChannels; // 0x28
	bool bIsAutomatic; // 0x29
};

struct ULightmappedSurfaceCollection : UObject {
	UModel* SourceModel; // 0x28
	TArray<int32_t> Surfaces; // 0x30
};

struct UMagicLeapSettings : UObject {
	bool bEnableZI; // 0x28
	bool bUseVulkanForZI; // 0x29
	bool bUseMLAudioForZI; // 0x2a
};

struct UMachineArm_01_SK_Skeleton_AnimBlueprint_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x2c8
	FAnimNode_Slot AnimGraphNode_Slot_4; // 0x388
	FAnimNode_Slot AnimGraphNode_Slot_3; // 0x3d0
	FAnimNode_Root AnimGraphNode_Root; // 0x418
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x448
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x490
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_4; // 0x530
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3; // 0x580
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x5d0
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x670
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x6c0
	FAnimNode_Slot AnimGraphNode_Slot; // 0x710
	E_ArmAttachmentType ArmAttachmentType; // 0x758
	E_MechanicArmMode ArmMode; // 0x759
	BP_Fist_C* MechineArm; // 0x760
	bool bOpenHologram; // 0x768
	bool bIsSameSlot; // 0x769
	TMap<E_ArmAttachmentType, E_MachineArmSlot> Slot; // 0x770
	bool bFrontOpened; // 0x7c0
	bool bTopOpened; // 0x7c1
	FMulticastInlineDelegate OnCloseTopGate; // 0x7c8
};

struct UGizmoLineHandleComponent : UGizmoBaseComponent {
	FVector Normal; // 0x460
	float HandleSize; // 0x46c
	float Thickness; // 0x470
	FVector Direction; // 0x474
	float Length; // 0x480
	bool bImageScale; // 0x484
};

struct UParticleModule : UObject {
	char bSpawnModule : 1; // 0x28
	char bUpdateModule : 1; // 0x28
	char bFinalUpdateModule : 1; // 0x28
	char bUpdateForGPUEmitter : 1; // 0x28
	char bCurvesAsColor : 1; // 0x28
	char b3DDrawMode : 1; // 0x28
	char bSupported3DDrawMode : 1; // 0x28
	char bEnabled : 1; // 0x28
	char bEditable : 1; // 0x29
	char LODDuplicate : 1; // 0x29
	char bSupportsRandomSeed : 1; // 0x29
	char bRequiresLoopingNotification : 1; // 0x29
	char LODValidity; // 0x2a
};

struct ABP_NPCSpawnerByLandmarkStatus_C : ABP_NPCSpawnLooper_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x470
	UArrowComponent* SpawnDirection; // 0x478
	UBillboardComponent* SpawnPoint; // 0x480
	ALandmarkBase* LandmarkRef; // 0x488
	TArray<FS_NPCSpawnInfoLandmarkStatus> SpawnInfo; // 0x490
	bool SpawnOnStand; // 0x4a0
};

struct AArchVisCharacter : ACharacter {
	FString LookUpAxisName; // 0x4b8
	FString LookUpAtRateAxisName; // 0x4c8
	FString TurnAxisName; // 0x4d8
	FString TurnAtRateAxisName; // 0x4e8
	FString MoveForwardAxisName; // 0x4f8
	FString MoveRightAxisName; // 0x508
	float MouseSensitivityScale_Pitch; // 0x518
	float MouseSensitivityScale_Yaw; // 0x51c
};

struct UMaterialExpressionArctangentFast : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct ASplineMeshActor : AActor {
	USplineMeshComponent* SplineMeshComponent; // 0x220
};

struct ULowEntryLatentActionInteger : UObject {
	bool Finished; // 0x28
	int32_t Result; // 0x2c
	int32_t KeepAliveCount; // 0x30
};

struct ANavSystemConfigOverride : AActor {
	UNavigationSystemConfig* NavigationSystemConfig; // 0x220
	ENavSystemOverridePolicy OverridePolicy; // 0x228
	char bLoadOnClient : 1; // 0x229
};

struct UParticleModuleMeshRotation_Seeded : UParticleModuleMeshRotation {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct UFXSystemAsset : UObject {
	uint32_t MaxPoolSize; // 0x28
	uint32_t PoolPrimeSize; // 0x2c
};

struct UBTService : UBTAuxiliaryNode {
	float Interval; // 0x60
	float RandomDeviation; // 0x64
	char bCallTickOnSearchStart : 1; // 0x68
	char bRestartTimerOnEachActivation : 1; // 0x68
};

struct UGizmoAxisTranslationParameterSource : UGizmoBaseFloatParameterSource {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90
	TScriptInterface<IGizmoTransformSource> TransformSource; // 0xa0
	float Parameter; // 0xb0
	FGizmoFloatParameterChange LastChange; // 0xb4
	FVector CurTranslationAxis; // 0xbc
	FVector CurTranslationOrigin; // 0xc8
	FTransform InitialTransform; // 0xe0
};

struct ABP_ElectricTrap_AttachFloorBuildPart_C : ABP_ElectricTrap_C {
	UBP_BuildJointComponent_C* Bolt; // 0x9a8
};

struct USoundAttenuation : UObject {
	FSoundAttenuationSettings Attenuation; // 0x28
};

struct UObjectiveSystemManagerComponent_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	TMap<int32_t, Fs_RadioGramSave> DisplayRadiogramList; // 0xb8
	TArray<FIntPair> NewRadiogramList; // 0x108
	TArray<FIntPair> UnlockedRadiogramList; // 0x118
	bool NeedRefreshList; // 0x128
	int32_t RowAsyncLoopIdx; // 0x12c
	int32_t ObjectAsyncLoopIdx; // 0x130
	bool AlreadyUnlocked; // 0x134
	TMap<char, FIntPairArray> UserHistory; // 0x138
	bool CanUnlock; // 0x188
	bool FindUserAction; // 0x189
	bool IsChecking; // 0x18a
	int32_t CheckCount; // 0x18c
	int32_t RowNameToInteger; // 0x190
	bool IsServerInit; // 0x194
	FMulticastInlineDelegate OnNotifyUnlockNewRadiogram; // 0x198
	FIntPair CurrentRadiogramObjective; // 0x1a8
	bool Show Objective; // 0x1b0
	bool SavedNextRadiogramObjective; // 0x1b1
	FMulticastInlineDelegate OnClientUserHistoryUpdate; // 0x1b8
	TArray<FS_RadiogramUnlockCondition> RadiogramObjectiveUnlockList; // 0x1c8
	TArray<E_UserActionType> CachedUserActionList; // 0x1d8
	ABP_TutorialManager_C* TutorialManager; // 0x1e8
};

struct UWBP_Main_CraftingV2_Queue_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UScrollBox* CraftListScrollBox; // 0x268
	UWBP_MainFrame_C* WBP_MainFrame; // 0x270
	UWBP_MainFrame_Header_C* WBP_MainFrame_Header; // 0x278
	UBP_PlayerInventoryComponent_C* TargetPlayerInventory; // 0x280
	UBP_CraftingComponent_C* TargetCraftingComponent; // 0x288
	UWBP_CraftingV2_C* MainWidget; // 0x290
	TArray<UWBP_Main_Crafting_ListingV2_C*> Crafting Queue Listing; // 0x298
};

struct USoundNodeParamCrossFade : USoundNodeDistanceCrossFade {
	FName ParamName; // 0x58
};

struct UAkInitBank : UAkAssetBase {
	TArray<FString> AvailableAudioCultures; // 0x50
	FString DefaultLanguage; // 0x60
};

struct UAnimStreamable : UAnimSequenceBase {
	int32_t NumFrames; // 0xa8
	EAnimInterpolationType Interpolation; // 0xac
	FName RetargetSource; // 0xb0
	UAnimBoneCompressionSettings* BoneCompressionSettings; // 0xc8
	UAnimCurveCompressionSettings* CurveCompressionSettings; // 0xd0
	bool bEnableRootMotion; // 0xd8
	ERootMotionRootLock RootMotionRootLock; // 0xd9
	bool bForceRootLock; // 0xda
	bool bUseNormalizedRootMotionScale; // 0xdb
};

struct UDatasmithGLTFSceneImportData : UDatasmithSceneImportData {
	FString Generator; // 0x28
	float Version; // 0x38
	FString Author; // 0x40
	FString License; // 0x50
	FString Source; // 0x60
};

struct UMovieSceneCameraCutTrack : UMovieSceneNameableTrack {
	bool bCanBlend; // 0x78
	TArray<UMovieSceneSection*> Sections; // 0x80
};

struct UParticleModuleKillBox : UParticleModuleKillBase {
	FRawDistributionVector LowerLeftCorner; // 0x30
	FRawDistributionVector UpperRightCorner; // 0x78
	char bAbsolute : 1; // 0xc0
	char bKillInside : 1; // 0xc0
	char bAxisAlignedAndFixedSize : 1; // 0xc0
};

struct ULightmassPortalComponent : USceneComponent {
	UBoxComponent* PreviewBox; // 0x1f8
};

struct UProxyLODMeshSimplificationSettings : UDeveloperSettings {
	FName ProxyLODMeshReductionModuleName; // 0x38
};

struct UInterpTrackInstParticleReplay : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
};

struct ABP_Throw_Aegis_Wall_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UAkComponent* SoundComponent; // 0x228
	UStaticMeshComponent* StaticMesh; // 0x230
	USceneComponent* Scene; // 0x238
	FVector Timeline_Activate_AlphaVector_C834B3C14C7A1DE2EF29C2A6C31CCC5C; // 0x240
	ETimelineDirection Timeline_Activate__Direction_C834B3C14C7A1DE2EF29C2A6C31CCC5C; // 0x24c
	UTimelineComponent* Timeline_Activate; // 0x250
	float ActivateTime; // 0x258
	FVector OriginScale; // 0x25c
	float AppearTime; // 0x268
	float ShieldHealth; // 0x26c
};

struct UPlaneReflectionCaptureComponent : UReflectionCaptureComponent {
	float InfluenceRadiusScale; // 0x270
	UDrawSphereComponent* PreviewInfluenceRadius; // 0x278
	UBoxComponent* PreviewCaptureBox; // 0x280
};

struct UBreakableTreeMetadata : UObject {
	TArray<FMeshSectionTextureData> SectionivotPosAndIndexTextures; // 0x28
	UStaticMesh* PreComputeStaticMesh; // 0x38
	int32_t PreComputeLODIndex; // 0x40
	char PreComputeOption; // 0x44
	TArray<FMeshSectionBulkTextureData> SectionBulkPivotPosAndIndexDatas; // 0x48
	TArray<FProcMeshSection> CachedProcMeshSections; // 0x58
};

struct UWBP_Radiogram_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UGridPanel* GridPanel_Distribution; // 0x268
	UImage* Image_Icon; // 0x270
	UVerticalBox* Panel_CommonStats; // 0x278
	URichTextBlock* RichTextBlock_67; // 0x280
	UScrollBox* ScrollBox_Detail; // 0x288
	UTextBlock* Text_Name; // 0x290
	int32_t UID; // 0x298
	FItemInventory Item; // 0x2a0
	UWBP_Main_Radiogram_C* RadiogramMain; // 0x2d8
};

struct UParticleModuleAttractorPointGravity : UParticleModuleAttractorBase {
	FVector Position; // 0x30
	float Radius; // 0x3c
	UDistributionFloat* Strength; // 0x40
	FRawDistributionFloat StrengthRaw; // 0x48
};

struct UBookMark2D : UBookmarkBase {
	float Zoom2D; // 0x28
	FIntPoint Location; // 0x2c
};

struct URMHttpRequest_Post_Dedi_ListInfos : URMHttpRequestBase {
	FMulticastInlineDelegate OnSuccess; // 0x48
	FMulticastInlineDelegate OnFailure; // 0x58
};

struct UNiagaraDataInterfaceStaticMesh : UNiagaraDataInterface {
	ENDIStaticMesh_SourceMode SourceMode; // 0x38
	UStaticMesh* DefaultMesh; // 0x40
	AActor* Source; // 0x48
	UStaticMeshComponent* SourceComponent; // 0x50
	FNDIStaticMeshSectionFilter SectionFilter; // 0x58
	bool bUsePhysicsBodyVelocity; // 0x68
	TArray<FName> FilteredSockets; // 0x70
};

struct UCloudWatchDescribeAnomalyDetectors : UAwsCloudWatchAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct ASurvivalPlayerController : ASurvivalPlayerControllerBase {
	UInventoryComponentBase* PlayerInventory_Ref_Native; // 0x578
	FString UserNickname; // 0x588
	TArray<FMailData> MailSystemClientOnly; // 0x598
	FMulticastInlineDelegate OnRecvMail; // 0x5a8
	FMulticastInlineDelegate OnUpdateMail; // 0x5b8
	FMulticastInlineDelegate OnWorldShifted; // 0x5c8
};

struct ULiveLinkCurveRemapSettings : ULiveLinkSourceSettings {
	FLiveLinkCurveConversionSettings CurveConversionSettings; // 0xa0
};

struct UMaterialExpressionComment : UMaterialExpression {
	int32_t SizeX; // 0x40
	int32_t SizeY; // 0x44
	FString Text; // 0x48
	FLinearColor CommentColor; // 0x58
	int32_t FontSize; // 0x68
};

struct UMovieSceneEntitySystemLinker : UObject {
	FMovieSceneEntitySystemGraph SystemGraph; // 0x238
};

struct AVolumetricCloud : AInfo {
	UVolumetricCloudComponent* VolumetricCloudComponent; // 0x220
};

struct UCloudWatchLogsTestMetricFilter : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UCloudWatchGetMetricStatistics : UAwsCloudWatchAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UAkCheckBox : UContentWidget {
	ECheckBoxState CheckedState; // 0x4b8
	FDelegate CheckedStateDelegate; // 0x4bc
	FCheckBoxStyle WidgetStyle; // 0x4d0
	EHorizontalAlignment HorizontalAlignment; // 0xa50
	bool IsFocusable; // 0xa51
	FAkBoolPropertyToControl ThePropertyToControl; // 0xa58
	FAkWwiseItemToControl ItemToControl; // 0xa68
	FMulticastInlineDelegate AkOnCheckStateChanged; // 0xaa8
	FMulticastInlineDelegate OnItemDropped; // 0xab8
	FMulticastInlineDelegate OnPropertyDropped; // 0xac8
};

struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0x468
	bool bAttachEnd; // 0x469
	FComponentReference AttachEndTo; // 0x470
	FName AttachEndToSocketName; // 0x498
	FVector EndLocation; // 0x4a0
	float CableLength; // 0x4ac
	int32_t NumSegments; // 0x4b0
	float SubstepTime; // 0x4b4
	int32_t SolverIterations; // 0x4b8
	bool bEnableStiffness; // 0x4bc
	bool bUseSubstepping; // 0x4bd
	bool bSkipCableUpdateWhenNotVisible; // 0x4be
	bool bSkipCableUpdateWhenNotOwnerRecentlyRendered; // 0x4bf
	bool bEnableCollision; // 0x4c0
	float CollisionFriction; // 0x4c4
	FVector CableForce; // 0x4c8
	float CableGravityScale; // 0x4d4
	float CableWidth; // 0x4d8
	int32_t NumSides; // 0x4dc
	float TileMaterial; // 0x4e0
};

struct URadialFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb0
	float MinRange; // 0xb4
	float MaxRange; // 0xb8
	float Default; // 0xbc
	float Radius; // 0xc0
	FVector Position; // 0xc4
	EFieldFalloffType Falloff; // 0xd0
};

struct USoundNodeBranch : USoundNode {
	FName BoolParameterName; // 0x48
};

struct UCallbackProxyStartStopWorkshopItemsPlaytimeTracking : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
	FMulticastInlineDelegate OnSteamInitFailure; // 0x50
};

struct UAIAsyncTaskBlueprintProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFail; // 0x38
};

struct UProceduralFoliageTile : UObject {
	UProceduralFoliageSpawner* FoliageSpawner; // 0x28
	TArray<FProceduralFoliageInstance> InstancesArray; // 0xd0
};

struct UWrapBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38
	bool bFillEmptySpace; // 0x48
	float FillSpanWhenLessThan; // 0x4c
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct UParticleModuleOrientationAxisLock : UParticleModuleOrientationBase {
	EParticleAxisLock LockAxisFlags; // 0x30
};

struct UWBP_MapMarker_Landmark_C : UWBP_MapMarker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4a8
	UMaterialInstanceDynamic* MI_Icon; // 0x4b0
	FLMInfo Info; // 0x4b8
	FLMInfo LandmarkInfo; // 0x5d8
	ELMStatus TempStatus; // 0x6f8
	float MapImageSize; // 0x6fc
};

struct UNiagaraDataInterfaceCamera : UNiagaraDataInterface {
	int32_t PlayerControllerIndex; // 0x38
	bool bRequireCurrentFrameData; // 0x3c
};

struct UListViewBase : UWidget {
	UUserWidget* EntryWidgetClass; // 0x108
	float WheelScrollMultiplier; // 0x110
	bool bEnableScrollAnimation; // 0x114
	bool bEnableFixedLineOffset; // 0x115
	float FixedLineScrollOffset; // 0x118
	FMulticastInlineDelegate BP_OnEntryGenerated; // 0x120
	FMulticastInlineDelegate BP_OnEntryReleased; // 0x130
	FUserWidgetPool EntryWidgetPool; // 0x140
};

struct UGizmoComponentAxisSource : UObject {
	USceneComponent* Component; // 0x30
	int32_t AxisIndex; // 0x38
	bool bLocalAxes; // 0x3c
};

struct ABP_MasterHoldable_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	USceneComponent* Attach Component; // 0x228
	USceneComponent* DefaultSceneRoot; // 0x230
	FS_HoldableAnims Holdable Animations; // 0x238
	bool Play Equip Animation; // 0x2b0
	FS_ItemInventory Item; // 0x2b8
	float Condition; // 0x2e8
	int32_t Ammo; // 0x2ec
	UBP_PlayerInventoryComponent_C* Player Inventory Component; // 0x2f0
	TMap<E_CharacterState, float> Movement Speeds; // 0x2f8
	FS_WeaponAttachements Attachments; // 0x348
	FName Socket Name; // 0x390
	UAnimMontage* FP Unequip Animation; // 0x398
	UAnimMontage* TP Unequip Animation; // 0x3a0
	bool Use Condition; // 0x3a8
	float Condition Cost Per Hit; // 0x3ac
	bool Can Be Repaired; // 0x3b0
	TArray<AActor*> Repair Actors; // 0x3b8
	FString Name; // 0x3c8
	UAnimMontage* FP_CastingAnim; // 0x3d8
	UAnimMontage* TP_CastingAnim; // 0x3e0
	float CastingAnimPlayTime; // 0x3e8
};

struct ULiveLinkSourceSettings : UObject {
	ELiveLinkSourceMode Mode; // 0x28
	FLiveLinkSourceBufferManagementSettings BufferSettings; // 0x30
	FString ConnectionString; // 0x88
	ULiveLinkSourceFactory* Factory; // 0x98
};

struct UWBP_Radiogram_4010100_C : UUserWidget {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x260
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x268
	UWBP_RadiogramListing_C* WBP_RadiogramListing_2; // 0x270
};

struct UMaterialExpressionPerInstanceCustomData : UMaterialExpression {
	FExpressionInput DefaultValue; // 0x40
	float ConstDefaultValue; // 0x54
	uint32_t DataIndex; // 0x58
};

struct UEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator {
	FEnvTraceData ProjectionData; // 0x50
};

struct UActorChannel : UChannel {
	AActor* Actor; // 0x70
	TArray<UObject*> CreateSubObjects; // 0x160
};

struct UGizmoAxisScaleParameterSource : UGizmoBaseFloatParameterSource {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48
	TScriptInterface<IGizmoTransformSource> TransformSource; // 0x58
	float ScaleMultiplier; // 0x68
	float Parameter; // 0x6c
	FGizmoFloatParameterChange LastChange; // 0x70
	FVector CurScaleAxis; // 0x78
	FVector CurScaleOrigin; // 0x84
	FTransform InitialTransform; // 0x90
};

struct UChaosPhysicalMaterial : UObject {
	float Friction; // 0x28
	float StaticFriction; // 0x2c
	float Restitution; // 0x30
	float LinearEtherDrag; // 0x34
	float AngularEtherDrag; // 0x38
	float SleepingLinearVelocityThreshold; // 0x3c
	float SleepingAngularVelocityThreshold; // 0x40
};

struct UDataTable : UObject {
	UScriptStruct* RowStruct; // 0x28
	char bStripFromClientBuilds : 1; // 0x80
	char bIgnoreExtraFields : 1; // 0x80
	char bIgnoreMissingFields : 1; // 0x80
	FString ImportKeyField; // 0x88
	TWeakObjectPtr<UDataTable> RefrenceDataTable; // 0x98
	FString UserFrendlyRowPropertyName; // 0xa0
};

struct UCallbackProxyQueryWorkshopForUserItems : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
	FMulticastInlineDelegate OnSteamInitFailure; // 0x50
};

struct UCloudWatchDeleteDashboards : UAwsCloudWatchAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct AShooterCharacter : ACharacter {
	USkeletalMeshComponent* TP_Gun; // 0x4b8
	FVector GunOffset; // 0x4c0
	TArray<AWeapon*> WeaponClasses; // 0x4d0
	TArray<AWeapon*> Weapons; // 0x4e0
	AWeapon* CurrentWeapon_R; // 0x4f0
	AWeapon* CurrentWeapon_L; // 0x4f8
	bool Dead; // 0x510
	TMap<AController*, float> AssistRecordMap; // 0x518
	TArray<FCharacterDamageSetting> DamageSettings; // 0x568
	TArray<FName> CriticalShotBoneNames; // 0x578
	bool bShowCriticalEffectWhenOnlykill; // 0x588
	float ScorePerDamage; // 0x58c
	int32_t KillScore; // 0x590
	int32_t AssistScore; // 0x594
	int32_t CriticalShotScore; // 0x598
	USoundBase* DeathSound; // 0x5a0
	float Health; // 0x5a8
	float MaxHealth; // 0x5ac
	bool bHealthRegenEnable; // 0x5b0
	float HealthRegenRate; // 0x5b4
	float Shield; // 0x5b8
	float MaxShield; // 0x5bc
	bool bShieldRegenEnable; // 0x5c0
	float ShieldRegenRate; // 0x5c4
	FMulticastInlineDelegate WeaponActivated; // 0x5c8
	FMulticastInlineDelegate WeaponBeginFire; // 0x5d8
	FMulticastInlineDelegate WeaponFired; // 0x5e8
	float MeleeAttackRange; // 0x5f8
	float MeleeAttackDegree; // 0x5fc
	TArray<FWeaponHitSetting> MeleeAttackHitSetting; // 0x600
	USkeletalMesh* DeadMesh; // 0x610
	bool UseDeadAnimation; // 0x618
	bool bBlockAttack; // 0x619
	AController* OldController; // 0x620
	bool bDoingMeleeAttack; // 0x628
	bool bIsPlayingMontageAnim; // 0x680
};

struct AFieldNPC_BaseCharacter_C : ACommonAI_BaseAICharacter_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xe28
	float MeleeAttackDistance; // 0xe30
	ABP_NPCSpawnArea_C* NPCSpawnAreaObject; // 0xe38
	float CurrMeleeAttackMontageFinishTime; // 0xe40
};

struct UMaterialExpressionShaderStageSwitch : UMaterialExpression {
	FExpressionInput PixelShader; // 0x40
	FExpressionInput VertexShader; // 0x54
};

struct UMotoSynthSource : UObject {
	bool bConvertTo8Bit; // 0x28
	float DownSampleFactor; // 0x2c
	FRuntimeFloatCurve RPMCurve; // 0x30
	TArray<float> SourceData; // 0xb8
	TArray<int16_t> SourceDataPCM; // 0xc8
	int32_t SourceSampleRate; // 0xd8
	TArray<FGrainTableEntry> GrainTable; // 0xe0
};

struct USCS_Node : UObject {
	UObject* ComponentClass; // 0x28
	UActorComponent* ComponentTemplate; // 0x30
	FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x38
	FName AttachToName; // 0x80
	FName ParentComponentOrVariableName; // 0x88
	FName ParentComponentOwnerClassName; // 0x90
	bool bIsParentComponentNative; // 0x98
	TArray<USCS_Node*> ChildNodes; // 0xa0
	TArray<FBPVariableMetaDataEntry> MetaDataArray; // 0xb0
	FGuid VariableGuid; // 0xc0
	FName InternalVariableName; // 0xd0
};

struct UWBP_HUD_WakeUp_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Open; // 0x268
	UWidgetAnimation* FadeOut; // 0x270
	UImage* Image_48; // 0x278
	UImage* Image_68; // 0x280
	UImage* Image_123; // 0x288
};

struct UMovieSceneIntegerSection : UMovieSceneSection {
	FMovieSceneIntegerChannel IntegerCurve; // 0xe8
};

struct UMagicLeapARPinContentBindings : USaveGame {
	TMap<FGuid, FMagicLeapARPinObjectIdList> AllContentBindings; // 0x28
};

struct AGeometryCollectionRenderLevelSetActor : AActor {
	UVolumeTexture* TargetVolumeTexture; // 0x220
	UMaterial* RayMarchMaterial; // 0x228
	float SurfaceTolerance; // 0x230
	float Isovalue; // 0x234
	bool Enabled; // 0x238
	bool RenderVolumeBoundingBox; // 0x239
};

struct APhysicsConstraintActor : ARigidBodyBase {
	UPhysicsConstraintComponent* ConstraintComp; // 0x220
	AActor* ConstraintActor1; // 0x228
	AActor* ConstraintActor2; // 0x230
	char bDisableCollision : 1; // 0x238
};

struct UNPCStaminaComponent : UActorComponent {
	float MaxStamina; // 0xb0
};

struct UParticleModuleTypeDataBeam2 : UParticleModuleTypeDataBase {
	EBeam2Method BeamMethod; // 0x30
	int32_t TextureTile; // 0x34
	float TextureTileDistance; // 0x38
	int32_t Sheets; // 0x3c
	int32_t MaxBeamCount; // 0x40
	float Speed; // 0x44
	int32_t InterpolationPoints; // 0x48
	char bAlwaysOn : 1; // 0x4c
	int32_t UpVectorStepSize; // 0x50
	FName BranchParentName; // 0x54
	FRawDistributionFloat Distance; // 0x60
	EBeamTaperMethod TaperMethod; // 0x90
	FRawDistributionFloat TaperFactor; // 0x98
	FRawDistributionFloat TaperScale; // 0xc8
	char RenderGeometry : 1; // 0xf8
	char RenderDirectLine : 1; // 0xf8
	char RenderLines : 1; // 0xf8
	char RenderTessellation : 1; // 0xf8
};

struct UAIPerceptionSystem : UAISubsystem {
	TArray<UAISense*> Senses; // 0x88
	float PerceptionAgingRate; // 0x98
};

struct UAkAudioEventData : UAkAssetDataSwitchContainer {
	float MaxAttenuationRadius; // 0x90
	bool IsInfinite; // 0x94
	float MinimumDuration; // 0x98
	float MaximumDuration; // 0x9c
	TMap<FString, UAkAssetDataSwitchContainer*> LocalizedMedia; // 0xa0
	TSet<UAkAudioEvent*> PostedEvents; // 0xf0
	TSet<UAkAuxBus*> UserDefinedSends; // 0x140
	TSet<UAkTrigger*> PostedTriggers; // 0x190
	TSet<UAkGroupValue*> GroupValues; // 0x1e0
};

struct AWaypoint_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UStaticMeshComponent* LightPillar; // 0x228
	UArrowComponent* Arrow; // 0x230
	USceneComponent* Scene; // 0x238
	FVector ScaleByDistance; // 0x240
};

struct UMaterialExpressionVolumetricAdvancedMaterialOutput : UMaterialExpressionCustomOutput {
	FExpressionInput PhaseG; // 0x40
	FExpressionInput PhaseG2; // 0x54
	FExpressionInput PhaseBlend; // 0x68
	FExpressionInput MultiScatteringContribution; // 0x7c
	FExpressionInput MultiScatteringOcclusion; // 0x90
	FExpressionInput MultiScatteringEccentricity; // 0xa4
	FExpressionInput ConservativeDensity; // 0xb8
	float ConstPhaseG; // 0xcc
	float ConstPhaseG2; // 0xd0
	float ConstPhaseBlend; // 0xd4
	bool PerSamplePhaseEvaluation; // 0xd8
	uint32_t MultiScatteringApproximationOctaveCount; // 0xdc
	float ConstMultiScatteringContribution; // 0xe0
	float ConstMultiScatteringOcclusion; // 0xe4
	float ConstMultiScatteringEccentricity; // 0xe8
	bool bGroundContribution; // 0xec
	bool bGrayScaleMaterial; // 0xed
	bool bRayMarchVolumeShadow; // 0xee
};

struct UAkAssetPlatformData : UObject {
	UAkAssetData* CurrentAssetData; // 0x28
};

struct UCloudWatchListTagsForResource : UAwsCloudWatchAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UBackgroundBlur : UContentWidget {
	FMargin Padding; // 0x120
	EHorizontalAlignment HorizontalAlignment; // 0x130
	EVerticalAlignment VerticalAlignment; // 0x131
	bool bApplyAlphaToBlur; // 0x132
	float BlurStrength; // 0x134
	bool bOverrideAutoRadiusCalculation; // 0x138
	int32_t BlurRadius; // 0x13c
	FSlateBrush LowQualityFallbackBrush; // 0x140
};

struct UARSaveWorldAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct UWBP_Radiogram_6010102_C : UWBP_radiogram_CustomBase_C {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x298
	UTextBlock* TextBlock; // 0x2a0
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x2a8
	UWBP_RadiogramListing_C* WBP_RadiogramListing_2; // 0x2b0
	UWBP_RadiogramListing_C* WBP_RadiogramListing_3; // 0x2b8
	UWBP_RadiogramListing_C* WBP_RadiogramListing_4; // 0x2c0
	UWBP_RadiogramListing_C* WBP_RadiogramListing_5; // 0x2c8
	UWBP_RadiogramListing_C* WBP_RadiogramListing_6; // 0x2d0
};

struct UWBP_WeaponInterfaceMaster_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBP_PlayerInventoryComponent_C* Player Inventory Component; // 0x268
	int32_t Ammo; // 0x270
	int32_t MaxAmmo; // 0x274
	int32_t TotalAmmo; // 0x278
	float StartBootAmmo; // 0x27c
	float Multiply; // 0x280
	bool IsBooting; // 0x284
};

struct UTireType : UDataAsset {
	float FrictionScale; // 0x30
};

struct UNiagaraDataInterfaceGrid2D : UNiagaraDataInterfaceRWBase {
	int32_t NumCellsX; // 0xd8
	int32_t NumCellsY; // 0xdc
	int32_t NumCellsMaxAxis; // 0xe0
	int32_t NumAttributes; // 0xe4
	bool SetGridFromMaxAxis; // 0xe8
	FVector2D WorldBBoxSize; // 0xec
};

struct ABP_NPCSpawnLooperBox_C : ABP_NPCSpawnLooper_C {
	UBoxComponent* RoamBound; // 0x470
	UArrowComponent* SpawnDirection; // 0x478
	UBillboardComponent* SpawnPoint; // 0x480
	bool SpawnOnStand; // 0x488
	TMap<FName, int32_t> Spawn Info; // 0x490
};

struct AAkSpatialAudioVolume : AVolume {
	UAkSurfaceReflectorSetComponent* SurfaceReflectorSet; // 0x258
	UAkLateReverbComponent* LateReverb; // 0x260
	UAkRoomComponent* Room; // 0x268
};

struct UBP_VehicleHandleComponent_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	bool Notification; // 0xb8
	TArray<FItemCodeValue> ItemList; // 0xc0
};

struct UBTTask_RotateToFaceBBEntry : UBTTask_BlackboardBase {
	float Precision; // 0x98
};

struct UAnimBlueprintGeneratedClass : UBlueprintGeneratedClass {
	TArray<FBakedAnimationStateMachine> BakedStateMachines; // 0x330
	USkeleton* TargetSkeleton; // 0x340
	TArray<FAnimNotifyEvent> AnimNotifies; // 0x348
	TMap<FName, FCachedPoseIndices> OrderedSavedPoseIndicesMap; // 0x358
	TArray<FName> SyncGroupNames; // 0x428
	TArray<FExposedValueHandler> EvaluateGraphExposedInputs; // 0x438
	TMap<FName, FGraphAssetPlayerInformation> GraphAssetPlayerInformation; // 0x448
	TMap<FName, FAnimGraphBlendOptions> GraphBlendOptions; // 0x498
	FPropertyAccessLibrary PropertyAccessLibrary; // 0x4e8
};

struct UWBP_MapCoordinate_C : UUserWidget {
	UImage* Image_157; // 0x260
	UTextBlock* Text_X; // 0x268
	UTextBlock* Text_Y; // 0x270
	FVector2D WorldCenter; // 0x278
	FVector2D WorldDimemtion; // 0x280
	FVector2D CurrentMousePosition; // 0x288
};

struct UAkAndroidInitializationSettings : UObject {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
	FAkAndroidAdvancedInitializationSettings AdvancedSettings; // 0xb8
};

struct ABP_WorkTable_C : ABP_CraftingFunctionalityBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x8b8
	USkeletalMeshComponent* SkeletalMesh; // 0x8c0
	UParticleSystemComponent* P_Facility_ProductionTable; // 0x8c8
	UBP_BuildJointComponent_C* BP_BuildJointComponent; // 0x8d0
	UStaticMeshComponent* CraftingItem; // 0x8d8
};

struct UCloudWatchLogsPutSubscriptionFilter : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct ABP_LandmarkAIControellr_Boss_C : ABP_LandmarkAIControellr_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4a0
};

struct ABP_SVChatGameMode_C : ASurvivalGameMode {
	FPointerToUberGraphFrame UberGraphFrame; // 0x400
	USceneComponent* DefaultSceneRoot; // 0x408
	TArray<AController*> ConnectedPlayers; // 0x410
	int32_t UniquePlayerID; // 0x420
	TMap<FString, float> ChatBlockUserList; // 0x428
};

struct UAnimNotify_PlayNiagaraEffect : UAnimNotify {
	UNiagaraSystem* Template; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	FVector Scale; // 0x58
	bool bAbsoluteScale; // 0x64
	char Attached : 1; // 0x80
	FName SocketName; // 0x84
};

struct USkyLightComponent : ULightComponentBase {
	bool bRealTimeCapture; // 0x228
	ESkyLightSourceType SourceType; // 0x229
	UTextureCube* Cubemap; // 0x230
	float SourceCubemapAngle; // 0x238
	int32_t CubemapResolution; // 0x23c
	float SkyDistanceThreshold; // 0x240
	bool bCaptureEmissiveOnly; // 0x244
	bool bLowerHemisphereIsBlack; // 0x245
	FLinearColor LowerHemisphereColor; // 0x248
	float OcclusionMaxDistance; // 0x258
	float Contrast; // 0x25c
	float OcclusionExponent; // 0x260
	float MinOcclusion; // 0x264
	FColor OcclusionTint; // 0x268
	char bCloudAmbientOcclusion : 1; // 0x26c
	float CloudAmbientOcclusionStrength; // 0x270
	float CloudAmbientOcclusionExtent; // 0x274
	float CloudAmbientOcclusionMapResolutionScale; // 0x278
	float CloudAmbientOcclusionApertureScale; // 0x27c
	EOcclusionCombineMode OcclusionCombineMode; // 0x280
	UTextureCube* BlendDestinationCubemap; // 0x338
};

struct UProceduralFoliageComponent : UActorComponent {
	UProceduralFoliageSpawner* FoliageSpawner; // 0xb0
	float TileOverlap; // 0xb8
	AVolume* SpawningVolume; // 0xc0
	FGuid ProceduralGuid; // 0xc8
};

struct UFont : UObject {
	EFontCacheType FontCacheType; // 0x30
	TArray<FFontCharacter> Characters; // 0x38
	TArray<UTexture2D*> Textures; // 0x48
	int32_t IsRemapped; // 0x58
	float EmScale; // 0x5c
	float Ascent; // 0x60
	float Descent; // 0x64
	float Leading; // 0x68
	int32_t Kerning; // 0x6c
	FFontImportOptionsData ImportOptions; // 0x70
	int32_t NumCharacters; // 0x120
	TArray<int32_t> MaxCharHeight; // 0x128
	float ScalingFactor; // 0x138
	int32_t LegacyFontSize; // 0x13c
	FName LegacyFontName; // 0x140
	FCompositeFont CompositeFont; // 0x148
};

struct UInterpTrackInstBoolProp : UInterpTrackInstProperty {
	bool ResetBool; // 0x60
};

struct UAISenseConfig_Blueprint : UAISenseConfig {
	UAISense_Blueprint* Implementation; // 0x48
};

struct UGizmoAxisIntervalParameterSource : UGizmoBaseFloatParameterSource {
	TScriptInterface<IGizmoFloatParameterSource> FloatParameterSource; // 0x48
	float MinParameter; // 0x58
	float MaxParameter; // 0x5c
};

struct ATriggerBase : AActor {
	UShapeComponent* CollisionComponent; // 0x220
};

struct UBP_SurvivalGameViewportClient_C : USurvivalGameViewportClient {
	float TempAmbient; // 0x3a0
	float TempEffect; // 0x3a4
	float TempMusic; // 0x3a8
	float TempUI; // 0x3ac
	float TempWorldVoice; // 0x3b0
	float TempTeamVoice; // 0x3b4
	int32_t MuteSoundCallCount; // 0x3b8
	UWidget* LoadingScreen; // 0x3c0
	APlayerController* LoadingScreenOwner; // 0x3c8
};

struct UWBP_AdminConsole_ItemListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_1; // 0x268
	UImage* Image_142; // 0x270
	UImage* Image_Selected; // 0x278
	UTextBlock* TextBlock_200; // 0x280
	UWBP_UI_ListingHovering_C* WBP_UI_ListingHovering; // 0x288
	FItemGeneralInfo Item; // 0x290
	FMulticastInlineDelegate ItemClicked; // 0x3e0
	FName TableName; // 0x3f0
	FMulticastInlineDelegate ItemDoubleClicked; // 0x3f8
	bool Mouse Over; // 0x408
};

struct UEditableTextBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x30
};

struct UWBP_HUD_Compass_C : UUserWidget {
	UImage* Compass; // 0x260
	UTextBlock* Distance; // 0x268
	UImage* Image_80; // 0x270
	UImage* Image_202; // 0x278
	UOverlay* Overlay_Scan; // 0x280
	UOverlay* Overlay_Spot; // 0x288
	UOverlay* Overlay_WayPoint; // 0x290
	UTextBlock* Text_Degree; // 0x298
	int32_t Degrees; // 0x2a0
};

struct UDistributionVectorUniformCurve : UDistributionVector {
	FInterpCurveTwoVectors ConstantCurve; // 0x38
	char bLockAxes1 : 1; // 0x50
	char bLockAxes2 : 1; // 0x50
	EDistributionVectorLockFlags LockedAxes[0x2]; // 0x54
	EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x56
	char bUseExtremes : 1; // 0x5c
};

struct UCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
	FMulticastInlineDelegate OnSteamInitFailure; // 0x50
};

struct UBlendProfile : UObject {
	USkeleton* OwningSkeleton; // 0x30
	TArray<FBlendProfileBoneEntry> ProfileEntries; // 0x38
};

struct UParticleSystemComponent : UFXSystemComponent {
	UParticleSystem* Template; // 0x440
	TArray<UMaterialInterface*> EmitterMaterials; // 0x448
	TArray<USkeletalMeshComponent*> SkelMeshComponents; // 0x458
	char bResetOnDetach : 1; // 0x469
	char bUpdateOnDedicatedServer : 1; // 0x469
	char bAllowRecycling : 1; // 0x469
	char bAutoManageAttachment : 1; // 0x469
	char bAutoAttachWeldSimulatedBodies : 1; // 0x469
	char bWarmingUp : 1; // 0x46a
	char bOverrideLODMethod : 1; // 0x46a
	char bSkipUpdateDynamicDataDuringTick : 1; // 0x46a
	ParticleSystemLODMethod LODMethod; // 0x475
	EParticleSignificanceLevel RequiredSignificance; // 0x476
	TArray<FParticleSysParam> InstanceParameters; // 0x478
	FMulticastInlineDelegate OnParticleSpawn; // 0x488
	FMulticastInlineDelegate OnParticleBurst; // 0x498
	FMulticastInlineDelegate OnParticleDeath; // 0x4a8
	FMulticastInlineDelegate OnParticleCollide; // 0x4b8
	bool bOldPositionValid; // 0x4c8
	FVector OldPosition; // 0x4cc
	FVector PartSysVelocity; // 0x4d8
	float WarmupTime; // 0x4e4
	float WarmupTickRate; // 0x4e8
	float SecondsBeforeInactive; // 0x4f0
	float MaxTimeBeforeForceUpdateTransform; // 0x4f8
	TArray<UParticleSystemReplay*> ReplayClips; // 0x518
	float CustomTimeDilation; // 0x530
	TWeakObjectPtr<USceneComponent> AutoAttachParent; // 0x588
	FName AutoAttachSocketName; // 0x590
	EAttachmentRule AutoAttachLocationRule; // 0x598
	EAttachmentRule AutoAttachRotationRule; // 0x599
	EAttachmentRule AutoAttachScaleRule; // 0x59a
	FMulticastInlineDelegate OnSystemFinished; // 0x5c8
};

struct UMaterialExpressionShadingModel : UMaterialExpression {
	EMaterialShadingModel ShadingModel; // 0x40
};

struct ULowEntryByteDataEntry : UObject {
	char Type; // 0x28
	char ByteValue; // 0x29
	int32_t IntegerValue; // 0x2c
	ULowEntryLong* LongBytesValue; // 0x30
	float FloatValue; // 0x38
	ULowEntryDouble* DoubleBytesValue; // 0x40
	bool BooleanValue; // 0x48
	FString StringUtf8Value; // 0x50
	TArray<char> ByteArrayValue; // 0x60
	TArray<int32_t> IntegerArrayValue; // 0x70
	TArray<ULowEntryLong*> LongBytesArrayValue; // 0x80
	TArray<float> FloatArrayValue; // 0x90
	TArray<ULowEntryDouble*> DoubleBytesArrayValue; // 0xa0
	TArray<bool> BooleanArrayValue; // 0xb0
	TArray<FString> StringUtf8ArrayValue; // 0xc0
};

struct UDistributionFloatParameterBase : UDistributionFloatConstant {
	FName ParameterName; // 0x40
	float MinInput; // 0x48
	float MaxInput; // 0x4c
	float MinOutput; // 0x50
	float MaxOutput; // 0x54
	DistributionParamMode ParamMode; // 0x58
};

struct UBP_LandmarkHandleComponent_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	ABP_LandmarkManager_C* LandmarkManager; // 0xb8
};

struct USpotEventTypeData_SpawnNPC_C : USpotEventTypeData_Base_C {
	ACommonAI_BaseAICharacter_C* NPCType; // 0xc8
	int32_t UID; // 0xd0
};

struct ASpotLight : ALight {
	USpotLightComponent* SpotLightComponent; // 0x230
};

struct UInterpTrackInstFloatParticleParam : UInterpTrackInst {
	float ResetFloat; // 0x28
};

struct UNavRelevantComponent : UActorComponent {
	char bAttachToOwnersRoot : 1; // 0xd4
	UObject* CachedNavParent; // 0xd8
};

struct UAkMarkerCallbackInfo : UAkEventCallbackInfo {
	int32_t Identifier; // 0x38
	int32_t Position; // 0x3c
	FString Label; // 0x40
};

struct ULowEntryLatentActionBoolean : UObject {
	bool Finished; // 0x28
	bool Result; // 0x29
	int32_t KeepAliveCount; // 0x2c
};

struct UTestMovieSceneSequence : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x60
};

struct UEnvQueryNode : UObject {
	int32_t VerNum; // 0x28
};

struct UMovieScenePropertySystem : UMovieSceneEntitySystem {
	UMovieScenePropertyInstantiatorSystem* InstantiatorSystem; // 0x40
};

struct ASurvivalGameState : AGameState {
	FText WorldName; // 0x290
	FText WorldInfo; // 0x2a8
	bool bAllowWorldVoiceChat; // 0x2c0
	TArray<ASVTeamInfo*> Teams; // 0x2c8
	char bTeamProjHits : 1; // 0x2d8
	ALandmarkManager* LMManager; // 0x2e0
	FMulticastInlineDelegate OnRepLMManager; // 0x2e8
	ALandmarkManager* LandmarkManagerClass; // 0x2f8
	bool bSinglePlay; // 0x300
	float WorldTimeOffset; // 0x304
	float RefGameTimeMultiplier; // 0x308
	FFloatValueFromDataTable GameStartTime; // 0x310
	FFloatValueFromDataTable GameTimeMultiplier; // 0x338
	float LocalWorldTimeOffset; // 0x360
};

struct UMovieSceneColorTrack : UMovieScenePropertyTrack {
	bool bIsSlateColor; // 0xb0
};

struct AGeometryCollectionDebugDrawActor : AActor {
	FGeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x220
	FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; // 0x228
	bool bDebugDrawWholeCollection; // 0x240
	bool bDebugDrawHierarchy; // 0x241
	bool bDebugDrawClustering; // 0x242
	EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; // 0x243
	bool bShowRigidBodyId; // 0x244
	bool bShowRigidBodyCollision; // 0x245
	bool bCollisionAtOrigin; // 0x246
	bool bShowRigidBodyTransform; // 0x247
	bool bShowRigidBodyInertia; // 0x248
	bool bShowRigidBodyVelocity; // 0x249
	bool bShowRigidBodyForce; // 0x24a
	bool bShowRigidBodyInfos; // 0x24b
	bool bShowTransformIndex; // 0x24c
	bool bShowTransform; // 0x24d
	bool bShowParent; // 0x24e
	bool bShowLevel; // 0x24f
	bool bShowConnectivityEdges; // 0x250
	bool bShowGeometryIndex; // 0x251
	bool bShowGeometryTransform; // 0x252
	bool bShowBoundingBox; // 0x253
	bool bShowFaces; // 0x254
	bool bShowFaceIndices; // 0x255
	bool bShowFaceNormals; // 0x256
	bool bShowSingleFace; // 0x257
	int32_t SingleFaceIndex; // 0x258
	bool bShowVertices; // 0x25c
	bool bShowVertexIndices; // 0x25d
	bool bShowVertexNormals; // 0x25e
	bool bUseActiveVisualization; // 0x25f
	float PointThickness; // 0x260
	float LineThickness; // 0x264
	bool bTextShadow; // 0x268
	float TextScale; // 0x26c
	float NormalScale; // 0x270
	float AxisScale; // 0x274
	float ArrowScale; // 0x278
	FColor RigidBodyIdColor; // 0x27c
	float RigidBodyTransformScale; // 0x280
	FColor RigidBodyCollisionColor; // 0x284
	FColor RigidBodyInertiaColor; // 0x288
	FColor RigidBodyVelocityColor; // 0x28c
	FColor RigidBodyForceColor; // 0x290
	FColor RigidBodyInfoColor; // 0x294
	FColor TransformIndexColor; // 0x298
	float TransformScale; // 0x29c
	FColor LevelColor; // 0x2a0
	FColor ParentColor; // 0x2a4
	float ConnectivityEdgeThickness; // 0x2a8
	FColor GeometryIndexColor; // 0x2ac
	float GeometryTransformScale; // 0x2b0
	FColor BoundingBoxColor; // 0x2b4
	FColor FaceColor; // 0x2b8
	FColor FaceIndexColor; // 0x2bc
	FColor FaceNormalColor; // 0x2c0
	FColor SingleFaceColor; // 0x2c4
	FColor VertexColor; // 0x2c8
	FColor VertexIndexColor; // 0x2cc
	FColor VertexNormalColor; // 0x2d0
	UBillboardComponent* SpriteComponent; // 0x2d8
};

struct UMaterialExpressionCrossProduct : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UMaterialExpressionTruncate : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UMaterialExpressionDDY : UMaterialExpression {
	FExpressionInput Value; // 0x40
};

struct USpringArmComponent : USceneComponent {
	float TargetArmLength; // 0x1f8
	FVector SocketOffset; // 0x1fc
	FVector TargetOffset; // 0x208
	float ProbeSize; // 0x214
	ECollisionChannel ProbeChannel; // 0x218
	char bDoCollisionTest : 1; // 0x21c
	char bUsePawnControlRotation : 1; // 0x21c
	char bInheritPitch : 1; // 0x21c
	char bInheritYaw : 1; // 0x21c
	char bInheritRoll : 1; // 0x21c
	char bEnableCameraLag : 1; // 0x21c
	char bEnableCameraRotationLag : 1; // 0x21c
	char bUseCameraLagSubstepping : 1; // 0x21c
	char bDrawDebugLagMarkers : 1; // 0x21d
	float CameraLagSpeed; // 0x220
	float CameraRotationLagSpeed; // 0x224
	float CameraLagMaxTimeStep; // 0x228
	float CameraLagMaxDistance; // 0x22c
};

struct UVehicleImpactData : UDataAsset {
	UParticleSystem* WaterFX; // 0x30
	UParticleSystem* MetalFX; // 0x38
	UParticleSystem* ConcreteFX; // 0x40
	UParticleSystem* CommonFX; // 0x48
	float WaterMinSpeed; // 0x50
	float WaterMaxSpeed; // 0x54
	float MetalMinSpeed; // 0x58
	float MetalMaxSpeed; // 0x5c
	float ConcreteMinSpeed; // 0x60
	float ConcreteMaxSpeed; // 0x64
	float CommonMinSpeed; // 0x68
	float CommonMaxSpeed; // 0x6c
	float WaterMinSpawn; // 0x70
	float WaterMaxSpawn; // 0x74
	float MetalMinSpawn; // 0x78
	float MetalMaxSpawn; // 0x7c
	float ConcreteMinSpawn; // 0x80
	float ConcreteMaxSpawn; // 0x84
	float CommonMinSpawn; // 0x88
	float CommonMaxSpawn; // 0x8c
	float WaterMinLifeTime; // 0x90
	float WaterMaxLifeTime; // 0x94
	float MetalMinLifeTime; // 0x98
	float MetalMaxLifeTime; // 0x9c
	float ConcreteMinLifeTime; // 0xa0
	float ConcreteMaxLifeTime; // 0xa4
	float CommonMinLifeTime; // 0xa8
	float CommonMaxLifeTime; // 0xac
};

struct UPrimaryAssetLabel : UPrimaryDataAsset {
	FPrimaryAssetRules Rules; // 0x30
	char bLabelAssetsInMyDirectory : 1; // 0x3c
	char bIsRuntimeLabel : 1; // 0x3c
	TArray<TSoftObjectPtr<UObject>> ExplicitAssets; // 0x40
	TArray<TSoftClassPtr<UObject>> ExplicitBlueprints; // 0x50
	FCollectionReference AssetCollection; // 0x60
};

struct UNiagaraDataInterfaceVectorCurve : UNiagaraDataInterfaceCurveBase {
	FRichCurve XCurve; // 0x70
	FRichCurve YCurve; // 0xf0
	FRichCurve ZCurve; // 0x170
};

struct UMaterialExpressionDepthFade : UMaterialExpression {
	FExpressionInput InOpacity; // 0x40
	FExpressionInput FadeDistance; // 0x54
	float OpacityDefault; // 0x68
	float FadeDistanceDefault; // 0x6c
};

struct USQSSendMessageBatch : UAwsSQSAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UBTTask_MoveTo : UBTTask_BlackboardBase {
	float AcceptableRadius; // 0x98
	UNavigationQueryFilter* FilterClass; // 0xa0
	float ObservedBlackboardValueTolerance; // 0xa8
	char bObserveBlackboardValue : 1; // 0xac
	char bAllowStrafe : 1; // 0xac
	char bAllowPartialPath : 1; // 0xac
	char bTrackMovingGoal : 1; // 0xac
	char bProjectGoalLocation : 1; // 0xac
	char bReachTestIncludesAgentRadius : 1; // 0xac
	char bReachTestIncludesGoalRadius : 1; // 0xac
	char bStopOnOverlap : 1; // 0xac
	char bStopOnOverlapNeedsUpdate : 1; // 0xad
};

struct UGeometryCacheTrack_FlipbookAnimation : UGeometryCacheTrack {
	uint32_t NumMeshSamples; // 0x58
};

struct UCloudWatchPutInsightRule : UAwsCloudWatchAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UFontFace : UObject {
	FString SourceFilename; // 0x30
	EFontHinting Hinting; // 0x40
	EFontLoadingPolicy LoadingPolicy; // 0x41
	EFontLayoutMethod LayoutMethod; // 0x42
};

struct UWBP_Functionality_ConversionListing_C : UUserWidget {
	UWBP_Slot_Display_C* WBP_Slot_Display_After; // 0x260
	UWBP_Slot_Display_C* WBP_Slot_Display_Before; // 0x268
	UBP_PlayerInventoryComponent_C* InventoryComponent; // 0x270
};

struct UBP_WidgetIndicatorManager_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	TMap<UBP_WidgetIndicatorComponent_C*, ABP_ScreenIndicatorActor_C*> Indicators; // 0xb8
};

struct ARuntimeVirtualTextureVolume : AActor {
	URuntimeVirtualTextureComponent* VirtualTextureComponent; // 0x220
};

struct UOverlaySlot : UPanelSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct USlateVectorArtData : UObject {
	TArray<FSlateMeshVertex> VertexData; // 0x28
	TArray<uint32_t> IndexData; // 0x38
	UMaterialInterface* Material; // 0x48
	FVector2D ExtentMin; // 0x50
	FVector2D ExtentMax; // 0x58
};

struct UBP_WidgetIndicatorComponent_C : UWidgetComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x590
	UTexture2D* Icon; // 0x598
	FSlateColor Slate Color; // 0x5a0
	int32_t TempDistance; // 0x5c8
	UWBP_Objective_Indicator_C* WBP_Indicator; // 0x5d0
	FString String; // 0x5d8
	bool bPlayer; // 0x5e8
	FMulticastInlineDelegate OnUpdateInfos; // 0x5f0
	bool FadeOutByDistance; // 0x600
	FString CategoryString; // 0x608
};

struct UBTTask_MakeNoise : UBTTaskNode {
	float Loudnes; // 0x70
};

struct UParticleModuleMeshMaterial : UParticleModuleMaterialBase {
	TArray<UMaterialInterface*> MeshMaterials; // 0x30
};

struct ABandwidthTestActor : AActor {
	FBandwidthTestGenerator BandwidthGenerator; // 0x220
};

struct UMovieSceneColorSection : UMovieSceneSection {
	FMovieSceneFloatChannel RedCurve; // 0xe8
	FMovieSceneFloatChannel GreenCurve; // 0x188
	FMovieSceneFloatChannel BlueCurve; // 0x228
	FMovieSceneFloatChannel AlphaCurve; // 0x2c8
};

struct AUe4ASP_Character_C : ACharacter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4c0
	UCameraComponent* PlayerCamera; // 0x4c8
	USpringArmComponent* CameraBoom; // 0x4d0
	bool Jump Button Down; // 0x4d8
	bool Crouch Button Down; // 0x4d9
};

struct UMovieSceneTrackInstance : UObject {
	UObject* AnimatedObject; // 0x28
	bool bIsMasterTrackInstance; // 0x30
	UMovieSceneEntitySystemLinker* Linker; // 0x38
	TArray<FMovieSceneTrackInstanceInput> Inputs; // 0x40
};

struct AOnlineBeaconClient : AOnlineBeacon {
	AOnlineBeaconHostObject* BeaconOwner; // 0x250
	UNetConnection* BeaconConnection; // 0x258
	EBeaconConnectionState ConnectionState; // 0x260
};

struct URendererOverrideSettings : UDeveloperSettings {
	char bSupportAllShaderPermutations : 1; // 0x38
	char bForceRecomputeTangents : 1; // 0x38
};

struct USoundNodeSwitch : USoundNode {
	FName IntParameterName; // 0x48
};

struct UBTTask_GameplayTaskBase : UBTTaskNode {
	char bWaitForGameplayTask : 1; // 0x70
};

struct APaperTerrainActor : AActor {
	USceneComponent* DummyRoot; // 0x220
	UPaperTerrainSplineComponent* SplineComponent; // 0x228
	UPaperTerrainComponent* RenderComponent; // 0x230
};

struct UComponentDelegateBinding : UDynamicBlueprintBinding {
	TArray<FBlueprintComponentDelegateBinding> ComponentDelegateBindings; // 0x28
};

struct UCloudWatchDescribeAlarmsForMetric : UAwsCloudWatchAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UMaterialExpressionHairAttributes : UMaterialExpression {
	char bUseTangentSpace : 1; // 0x40
};

struct ANavigationTestingActor : AActor {
	UCapsuleComponent* CapsuleComponent; // 0x230
	UNavigationInvokerComponent* InvokerComponent; // 0x238
	char bActAsNavigationInvoker : 1; // 0x240
	FNavAgentProperties NavAgentProps; // 0x248
	FVector QueryingExtent; // 0x278
	ANavigationData* MyNavData; // 0x288
	FVector ProjectedLocation; // 0x290
	char bProjectedLocationValid : 1; // 0x29c
	char bSearchStart : 1; // 0x29c
	float CostLimitFactor; // 0x2a0
	float MinimumCostLimit; // 0x2a4
	char bBacktracking : 1; // 0x2a8
	char bUseHierarchicalPathfinding : 1; // 0x2a8
	char bGatherDetailedInfo : 1; // 0x2a8
	char bDrawDistanceToWall : 1; // 0x2a8
	char bShowNodePool : 1; // 0x2a8
	char bShowBestPath : 1; // 0x2a8
	char bShowDiffWithPreviousStep : 1; // 0x2a8
	char bShouldBeVisibleInGame : 1; // 0x2a8
	ENavCostDisplay CostDisplayMode; // 0x2ac
	FVector2D TextCanvasOffset; // 0x2b0
	char bPathExist : 1; // 0x2b8
	char bPathIsPartial : 1; // 0x2b8
	char bPathSearchOutOfNodes : 1; // 0x2b8
	float PathfindingTime; // 0x2bc
	float PathCost; // 0x2c0
	int32_t PathfindingSteps; // 0x2c4
	ANavigationTestingActor* OtherActor; // 0x2c8
	UNavigationQueryFilter* FilterClass; // 0x2d0
	int32_t ShowStepIndex; // 0x2d8
	float OffsetFromCornersDistance; // 0x2dc
};

struct UNiagaraComponentSettings : UObject {
	TSet<FName> SuppressActivationList; // 0x28
	TSet<FName> ForceAutoPooolingList; // 0x78
	TSet<FNiagaraEmitterNameSettingsRef> SuppressEmitterList; // 0xc8
};

struct USoundClass : UObject {
	FSoundClassProperties Properties; // 0x28
	TArray<USoundClass*> ChildClasses; // 0xa8
	TArray<FPassiveSoundMixModifier> PassiveSoundMixModifiers; // 0xb8
	USoundClass* ParentClass; // 0xc8
};

struct ULowEntryBitDataEntry : UObject {
	char Type; // 0x28
	char ByteValue; // 0x29
	int32_t IntegerValue; // 0x2c
	ULowEntryLong* LongBytesValue; // 0x30
	float FloatValue; // 0x38
	ULowEntryDouble* DoubleBytesValue; // 0x40
	bool BooleanValue; // 0x48
	FString StringUtf8Value; // 0x50
	TArray<char> ByteArrayValue; // 0x60
	TArray<int32_t> IntegerArrayValue; // 0x70
	TArray<ULowEntryLong*> LongBytesArrayValue; // 0x80
	TArray<float> FloatArrayValue; // 0x90
	TArray<ULowEntryDouble*> DoubleBytesArrayValue; // 0xa0
	TArray<bool> BooleanArrayValue; // 0xb0
	TArray<FString> StringUtf8ArrayValue; // 0xc0
};

struct UInterpTrackParticleReplay : UInterpTrack {
	TArray<FParticleReplayTrackKey> TrackKeys; // 0x70
};

struct UScrollBox : UPanelWidget {
	FScrollBoxStyle WidgetStyle; // 0x120
	FScrollBarStyle WidgetBarStyle; // 0x348
	USlateWidgetStyleAsset* Style; // 0x818
	USlateWidgetStyleAsset* BarStyle; // 0x820
	EOrientation Orientation; // 0x828
	ESlateVisibility ScrollBarVisibility; // 0x829
	EConsumeMouseWheel ConsumeMouseWheel; // 0x82a
	FVector2D ScrollbarThickness; // 0x82c
	FMargin ScrollbarPadding; // 0x834
	bool AlwaysShowScrollbar; // 0x844
	bool AlwaysShowScrollbarTrack; // 0x845
	bool AllowOverscroll; // 0x846
	bool bAnimateWheelScrolling; // 0x847
	EDescendantScrollDestination NavigationDestination; // 0x848
	float NavigationScrollPadding; // 0x84c
	EScrollWhenFocusChanges ScrollWhenFocusChanges; // 0x850
	bool bAllowRightClickDragScrolling; // 0x851
	float WheelScrollMultiplier; // 0x854
	FMulticastInlineDelegate OnUserScrolled; // 0x858
};

struct UMagicLeapHeadTrackingNotificationsComponent : UVRNotificationsComponent {
	FMulticastInlineDelegate OnHeadTrackingLost; // 0x140
	FMulticastInlineDelegate OnHeadTrackingRecovered; // 0x150
	FMulticastInlineDelegate OnHeadTrackingRecoveryFailed; // 0x160
	FMulticastInlineDelegate OnHeadTrackingNewSessionStarted; // 0x170
};

struct ALevelSequenceMediaController : AActor {
	ALevelSequenceActor* Sequence; // 0x228
	UMediaComponent* MediaComponent; // 0x230
	float ServerStartTimeSeconds; // 0x238
};

struct UGeometryCollectionCache : UObject {
	FRecordedTransformTrack RecordedData; // 0x28
	UGeometryCollection* SupportedCollection; // 0x38
	FGuid CompatibleCollectionState; // 0x40
};

struct UParticleModuleBeamModifier : UParticleModuleBeamBase {
	BeamModifierType ModifierType; // 0x30
	FBeamModifierOptions PositionOptions; // 0x34
	FRawDistributionVector Position; // 0x38
	FBeamModifierOptions TangentOptions; // 0x80
	FRawDistributionVector Tangent; // 0x88
	char bAbsoluteTangent : 1; // 0xd0
	FBeamModifierOptions StrengthOptions; // 0xd4
	FRawDistributionFloat Strength; // 0xd8
};

struct UARTextureCameraDepth : UARTexture {
	EARDepthQuality DepthQuality; // 0xf8
	EARDepthAccuracy DepthAccuracy; // 0xf9
	bool bIsTemporallySmoothed; // 0xfa
};

struct UBP_RadiogramSortObject_C : UObject {
	FItemGeneralInfo ItemInfo; // 0x30
	int32_t UID; // 0x180
};

struct UWBP_Tooltip_C : UUserWidget {
	UWidgetAnimation* Anim_Open; // 0x260
	UWBP_Tooltip_FunctionListing_C* Guide_Drop; // 0x268
	UWBP_Tooltip_FunctionListing_C* Guide_Move; // 0x270
	UWBP_Tooltip_FunctionListing_C* Guide_QuickSlot; // 0x278
	UWBP_Tooltip_FunctionListing_C* Guide_RClick; // 0x280
	UWBP_Tooltip_FunctionListing_C* Guide_Split_Half; // 0x288
	UWBP_Tooltip_FunctionListing_C* Guide_Split_One; // 0x290
	UImage* Image_161; // 0x298
	UImage* Image_Category_Grip; // 0x2a0
	UImage* Image_Category_Magazine; // 0x2a8
	UImage* Image_Category_Muzzle; // 0x2b0
	UImage* Image_Category_Sight; // 0x2b8
	UImage* Image_Chest; // 0x2c0
	UImage* Image_Feet; // 0x2c8
	UImage* Image_Head; // 0x2d0
	UImage* Image_Legs; // 0x2d8
	UImage* Image_MemoryChip; // 0x2e0
	UImage* Image_Plate; // 0x2e8
	UImage* Image_Protocol; // 0x2f0
	UVerticalBox* Panel_CommonStats; // 0x2f8
	UVerticalBox* Panel_Keyguide; // 0x300
	UTextBlock* Text_Category; // 0x308
	URichTextBlock* Text_Description; // 0x310
	UTextBlock* Text_Name; // 0x318
	UTextBlock* Text_Rarity; // 0x320
	UTextBlock* Text_Stack; // 0x328
	UTextBlock* Text_TextOnly; // 0x330
	UWidgetSwitcher* WidgetSwitcher_TooltipType; // 0x338
	FWeaponInventory Weapon Item; // 0x340
	FItemInventory Item; // 0x368
	UBP_PlayerInventoryComponent_C* Player Inventory Component; // 0x3a0
	FItemGeneralInfo generalinfo; // 0x3b0
	bool Controllable; // 0x500
};

struct UWBP_Radiogram_Story_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	URichTextBlock* RichTextBlock_67; // 0x268
};

struct URadialIntMask : UFieldNodeInt {
	float Radius; // 0xb0
	FVector Position; // 0xb4
	int32_t InteriorValue; // 0xc0
	int32_t ExteriorValue; // 0xc4
	ESetMaskConditionType SetMaskCondition; // 0xc8
};

struct UNoiseField : UFieldNodeFloat {
	float MinRange; // 0xb0
	float MaxRange; // 0xb4
	FTransform Transform; // 0xc0
};

struct UAchievementWriteCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct USizeBox : UContentWidget {
	float WidthOverride; // 0x130
	float HeightOverride; // 0x134
	float MinDesiredWidth; // 0x138
	float MinDesiredHeight; // 0x13c
	float MaxDesiredWidth; // 0x140
	float MaxDesiredHeight; // 0x144
	float MinAspectRatio; // 0x148
	float MaxAspectRatio; // 0x14c
	char bOverride_WidthOverride : 1; // 0x150
	char bOverride_HeightOverride : 1; // 0x150
	char bOverride_MinDesiredWidth : 1; // 0x150
	char bOverride_MinDesiredHeight : 1; // 0x150
	char bOverride_MaxDesiredWidth : 1; // 0x150
	char bOverride_MaxDesiredHeight : 1; // 0x150
	char bOverride_MinAspectRatio : 1; // 0x150
	char bOverride_MaxAspectRatio : 1; // 0x150
};

struct UCanvasRenderTarget2D : UTextureRenderTarget2D {
	FMulticastInlineDelegate OnCanvasRenderTargetUpdate; // 0x108
	TWeakObjectPtr<UWorld> World; // 0x118
	bool bShouldClearRenderTargetOnReceiveUpdate; // 0x120
};

struct UCloudWatchDeleteInsightRules : UAwsCloudWatchAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct ABP_SupplyDropPod_C : ABP_MasterStorage_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3c8
	USkeletalMeshComponent* SkeletalMesh; // 0x3d0
	bool IsOpenPod; // 0x3d8
};

struct UMovieScene : UMovieSceneSignedObject {
	TArray<FMovieSceneSpawnable> Spawnables; // 0x50
	TArray<FMovieScenePossessable> Possessables; // 0x60
	TArray<FMovieSceneBinding> ObjectBindings; // 0x70
	TMap<FName, FMovieSceneObjectBindingIDs> BindingGroups; // 0x80
	TArray<UMovieSceneTrack*> MasterTracks; // 0xd0
	UMovieSceneTrack* CameraCutTrack; // 0xe0
	FMovieSceneFrameRange SelectionRange; // 0xe8
	FMovieSceneFrameRange PlaybackRange; // 0xf8
	FFrameRate TickResolution; // 0x108
	FFrameRate DisplayRate; // 0x110
	EMovieSceneEvaluationType EvaluationType; // 0x118
	EUpdateClockSource ClockSource; // 0x119
	FSoftObjectPath CustomClockSourcePath; // 0x120
	TArray<FMovieSceneMarkedFrame> MarkedFrames; // 0x138
};

struct UMovieSceneParticleTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> ParticleSections; // 0x80
};

struct UMovieSceneBuiltInEasingFunction : UObject {
	EMovieSceneBuiltInEasing Type; // 0x30
};

struct UMovieSceneLevelVisibilitySection : UMovieSceneSection {
	ELevelVisibility Visibility; // 0xf0
	TArray<FName> LevelNames; // 0xf8
};

struct UTextureRenderTarget : UTexture {
	float TargetGamma; // 0xd8
};

struct USurvivalAIStateMachine_Relax : USurvivalAIStateMachine {
	float Timer_Relax; // 0xa8
};

struct UInterpTrackFloatBase : UInterpTrack {
	FInterpCurveFloat FloatTrack; // 0x70
	float CurveTension; // 0x88
};

struct UInputRouter : UObject {
	bool bAutoInvalidateOnHover; // 0x28
	bool bAutoInvalidateOnCapture; // 0x29
	UInputBehaviorSet* ActiveInputBehaviors; // 0x38
};

struct USoundSubmixBase : UObject {
	TArray<USoundSubmixBase*> ChildSubmixes; // 0x28
};

struct UBoxFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb0
	float MinRange; // 0xb4
	float MaxRange; // 0xb8
	float Default; // 0xbc
	FTransform Transform; // 0xc0
	EFieldFalloffType Falloff; // 0xf0
};

struct UAnimBP_JetVolve_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8
};

struct UVectorFieldComponent : UPrimitiveComponent {
	UVectorField* VectorField; // 0x440
	float Intensity; // 0x448
	float Tightness; // 0x44c
	char bPreviewVectorField : 1; // 0x450
};

struct UAnimSharingAdditiveInstance : UAnimInstance {
	TWeakObjectPtr<USkeletalMeshComponent> BaseComponent; // 0x2b8
	TWeakObjectPtr<UAnimSequence> AdditiveAnimation; // 0x2c0
	float Alpha; // 0x2c8
	bool bStateBool; // 0x2cc
};

struct UMockDataMeshTrackerComponent : USceneComponent {
	FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x1f8
	bool ScanWorld; // 0x208
	bool RequestNormals; // 0x209
	bool RequestVertexConfidence; // 0x20a
	EMeshTrackerVertexColorMode VertexColorMode; // 0x20b
	TArray<FColor> BlockVertexColors; // 0x210
	FLinearColor VertexColorFromConfidenceZero; // 0x220
	FLinearColor VertexColorFromConfidenceOne; // 0x230
	float UpdateInterval; // 0x240
	UMRMeshComponent* MRMesh; // 0x248
};

struct USplineMeshComponent : UStaticMeshComponent {
	FSplineMeshParams SplineParams; // 0x4d8
	FVector SplineUpDir; // 0x530
	float SplineBoundaryMin; // 0x53c
	FGuid CachedMeshBodySetupGuid; // 0x540
	UBodySetup* BodySetup; // 0x550
	float SplineBoundaryMax; // 0x558
	char bAllowSplineEditingPerInstance : 1; // 0x55c
	char bSmoothInterpRollScale : 1; // 0x55c
	char bMeshDirty : 1; // 0x55c
	ESplineMeshAxis ForwardAxis; // 0x55d
	float VirtualTextureMainPassMaxDrawDistance; // 0x560
};

struct UMaterialExpressionParticleSubUV : UMaterialExpressionTextureSample {
	char bBlend : 1; // 0x60
};

struct USVItemParts : UPrimaryDataAsset {
	FText PartsName; // 0x30
};

struct UBPANS_LandmarkMonsterMeleeAttack_C : USVAnimNotifyState {
	UAkAudioEvent* HitAkEvent; // 0x30
	UAkSwitchValue* HitAkSwitch; // 0x38
	int32_t SpecialAttackIndex; // 0x40
};

struct UFAI_BTTask_AttackState_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	FBlackboardKeySelector KEYTargetActor; // 0xb0
	FBlackboardKeySelector KEYTargetLocation; // 0xd8
	float PlayRate; // 0x100
	float DotValue; // 0x104
	float DelayTime; // 0x108
};

struct UARTexture : UTexture {
	EARTextureType TextureType; // 0xd8
	float Timestamp; // 0xdc
	FGuid ExternalTextureGuid; // 0xe0
	FVector2D Size; // 0xf0
};

struct UCloudWatchDisableAlarmActions : UAwsCloudWatchAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UWBP_MainFrame_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_FrameBlocker; // 0x268
	UBorder* Border_Header; // 0x270
	UNamedSlot* NamedSlot; // 0x278
	UNamedSlot* NamedSlot_Head; // 0x280
	UTextBlock* Text; // 0x288
	FText UIName; // 0x290
	bool bDrag; // 0x2a8
	FVector2D LastMousePosition; // 0x2ac
	bool IsMouseButtonDown; // 0x2b4
	bool IsDrag; // 0x2b5
	FGeometry LocalGeometry; // 0x2b8
	FPointerEvent LocalMouseEvent; // 0x2f0
	float SafetyZoneX; // 0x360
	float SafetyZoneY; // 0x364
	FVector2D MouseDelta; // 0x368
	FEventReply DetectDragReturnValue; // 0x370
	UCanvasPanelSlot* ParentSlot; // 0x428
	UWBP_MainFrame_C* Self_1; // 0x430
};

struct UInterpToMovementComponent : UMovementComponent {
	float Duration; // 0xf0
	char bPauseOnImpact : 1; // 0xf4
	bool bSweep; // 0xf8
	ETeleportType TeleportType; // 0xf9
	EInterpToBehaviourType BehaviourType; // 0xfa
	bool bCheckIfStillInWorld; // 0xfb
	char bForceSubStepping : 1; // 0xfc
	FMulticastInlineDelegate OnInterpToReverse; // 0x100
	FMulticastInlineDelegate OnInterpToStop; // 0x110
	FMulticastInlineDelegate OnWaitBeginDelegate; // 0x120
	FMulticastInlineDelegate OnWaitEndDelegate; // 0x130
	FMulticastInlineDelegate OnResetDelegate; // 0x140
	float MaxSimulationTimeStep; // 0x150
	int32_t MaxSimulationIterations; // 0x154
	TArray<FInterpControlPoint> ControlPoints; // 0x158
};

struct UWBP_MapMarker_LandmarkEffectCauser_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Noti; // 0x268
	UBorder* Border; // 0x270
	UImage* RangeImage; // 0x278
};

struct UWBP_Main_DescriptionListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_Progress; // 0x268
	UImage* Image_63; // 0x270
	UProgressBar* ProgressBar_Stat; // 0x278
	UTextBlock* StatIsPercent; // 0x280
	UTextBlock* StatName; // 0x288
	UTextBlock* StatValue; // 0x290
	FText Name; // 0x298
	E_DamageType Type; // 0x2b0
	FText Value; // 0x2b8
	bool bUseProgressBar; // 0x2d0
	bool bUseSign; // 0x2d1
	bool bUseColorEffect; // 0x2d2
	bool bUsePercent; // 0x2d3
	float CustomZero; // 0x2d4
};

struct UWBP_Scene_Landing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Open; // 0x268
	UButton* Button_Respawn; // 0x270
	UWBP_Scene_Landing_LocationButton_C* WBP_Scene_Landing_Arphaxad; // 0x278
	UWBP_Scene_Landing_LocationButton_C* WBP_Scene_Landing_LocationButton_1; // 0x280
	UWBP_Scene_Landing_LocationButton_C* WBP_Scene_Landing_LocationButton_2; // 0x288
	UWBP_WorldMap_C* WBP_WorldMap; // 0x290
	float NewZoom; // 0x298
	FVector2D NewPivot; // 0x29c
	FTimerHandle TimerChangeZoomHandler; // 0x2a8
	E_SpawnArea RespawnArea; // 0x2b0
	int32_t SummaryBundleInterval; // 0x2b4
	bool bDoubleClicked; // 0x2b8
};

struct UBTService_Juggernaut_Junior_C : UBTService_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x98
	FBlackboardKeySelector TargetActor; // 0xa0
	FBlackboardKeySelector Aggro; // 0xc8
	FBlackboardKeySelector IsRangeAttack; // 0xf0
	FBlackboardKeySelector IsMeleeAttack; // 0x118
	FBlackboardKeySelector SpawnPoint; // 0x140
	FBlackboardKeySelector IsInitData; // 0x168
	float FarLimit; // 0x190
	FBlackboardKeySelector IsGroggy; // 0x198
};

struct UMovieSceneEasingExternalCurve : UObject {
	UCurveFloat* Curve; // 0x30
};

struct UAkMediaAsset : UObject {
	uint32_t ID; // 0x28
	bool AutoLoad; // 0x2c
	TArray<UObject*> UserData; // 0x30
	UAkMediaAssetData* CurrentMediaAssetData; // 0x40
};

struct UQuitMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UBP_KeyConflict_C : UObject {
	UBP_KeyCombination_C* Conflicting Combination; // 0x28
	EKeyConflict Conflict Type; // 0x30
};

struct ABP_MasterItem_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UStaticMeshComponent* Static World Mesh; // 0x228
	USceneComponent* DefaultSceneRoot; // 0x230
	FItemInventory Item; // 0x238
	int32_t Count; // 0x270
	float Condition; // 0x274
	FS_WeaponAttachements Attachmentssss; // 0x278
	int32_t Ammo; // 0x2c0
	BP_MasterAttachment_C* Front Grip; // 0x2c8
	BP_MasterAttachment_C* Magazine; // 0x2d0
	BP_MasterAttachment_C* Stock; // 0x2d8
	BP_MasterAttachment_C* Trigger; // 0x2e0
	BP_MasterAttachment_C* Underbarrel; // 0x2e8
	BP_MasterAttachment_C* Handguard; // 0x2f0
	BP_MasterAttachment_C* Wrap; // 0x2f8
	BP_MasterAttachment_C* Muzzle; // 0x300
	BP_MasterAttachment_C* Sight; // 0x308
	bool Player Dropped; // 0x310
	bool Saved Loaded; // 0x311
	bool Spawner Dropped; // 0x312
	float Destroy Time; // 0x314
	bool Use Destroy Time; // 0x318
	float InteractableDistance; // 0x31c
	TArray<FAttachmentSlot> Attachments; // 0x320
	float Item Max Condition; // 0x330
};

struct UWidgetNavigation : UObject {
	FWidgetNavigationData Up; // 0x28
	FWidgetNavigationData Down; // 0x4c
	FWidgetNavigationData Left; // 0x70
	FWidgetNavigationData Right; // 0x94
	FWidgetNavigationData Next; // 0xb8
	FWidgetNavigationData Previous; // 0xdc
};

struct UWBP_Functionality_Core_OwnerListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image_67; // 0x268
	UImage* Image_Blink; // 0x270
	UScaleBox* ScaleBox_O; // 0x278
	UScaleBox* ScaleBox_Quit; // 0x280
	UScaleBox* ScaleBox_X; // 0x288
	UTextBlock* TextBlock_33; // 0x290
	UWBP_Button_UI_C* WBP_Button_O; // 0x298
	UWBP_Button_UI_C* WBP_Button_Quit; // 0x2a0
	UWBP_Button_UI_C* WBP_Button_X; // 0x2a8
	ABP_EnergyCoreBuildPart_C* Energycore; // 0x2b0
	FString UID; // 0x2b8
	bool bAdminSlot; // 0x2c8
	bool bOnly; // 0x2c9
};

struct UWBP_ShortRanking_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UScrollBox* ScrollBox_Leaderboard; // 0x268
	UWBP_MainFrame_C* WBP_MainFrame; // 0x270
	UWBP_MainFrame_Header_C* WBP_MainFrame_Header; // 0x278
	UWBP_ShortRankingListing_C* WBP_ShortRankingListing; // 0x280
	FS_SurvivalRank CurrentRank; // 0x288
	bool bFindMyRank; // 0x2c8
	bool bIsResultUI; // 0x2c9
};

struct UWorld : UObject {
	ULevel* PersistentLevel; // 0x30
	UNetDriver* NetDriver; // 0x38
	ULineBatchComponent* LineBatcher; // 0x40
	ULineBatchComponent* PersistentLineBatcher; // 0x48
	ULineBatchComponent* ForegroundLineBatcher; // 0x50
	AGameNetworkManager* NetworkManager; // 0x58
	UPhysicsCollisionHandler* PhysicsCollisionHandler; // 0x60
	TArray<UObject*> ExtraReferencedObjects; // 0x68
	TArray<UObject*> PerModuleDataObjects; // 0x78
	TArray<ULevelStreaming*> StreamingLevels; // 0x88
	FStreamingLevelsToConsider StreamingLevelsToConsider; // 0x98
	FString StreamingLevelsPrefix; // 0xc0
	ULevel* CurrentLevelPendingVisibility; // 0xd0
	ULevel* CurrentLevelPendingInvisibility; // 0xd8
	UDemoNetDriver* DemoNetDriver; // 0xe0
	AParticleEventManager* MyParticleEventManager; // 0xe8
	APhysicsVolume* DefaultPhysicsVolume; // 0xf0
	char bAreConstraintsDirty : 1; // 0x10e
	UNavigationSystemBase* NavigationSystem; // 0x110
	AGameModeBase* AuthorityGameMode; // 0x118
	AGameStateBase* GameState; // 0x120
	UAISystemBase* AISystem; // 0x128
	UAvoidanceManager* AvoidanceManager; // 0x130
	TArray<ULevel*> Levels; // 0x138
	TArray<FLevelCollection> LevelCollections; // 0x148
	UGameInstance* OwningGameInstance; // 0x180
	TArray<UMaterialParameterCollectionInstance*> ParameterCollectionInstances; // 0x188
	UCanvas* CanvasForRenderingToTarget; // 0x198
	UCanvas* CanvasForDrawMaterialToRenderTarget; // 0x1a0
	TSet<UActorComponent*> ComponentsThatNeedPreEndOfFrameSync; // 0x1f8
	TArray<UActorComponent*> ComponentsThatNeedEndOfFrameUpdate; // 0x248
	TArray<UActorComponent*> ComponentsThatNeedEndOfFrameUpdate_OnGameThread; // 0x258
	UWorldComposition* WorldComposition; // 0x5d8
	FWorldPSCPool PSCPool; // 0x668
};

struct UARFaceComponent : UARComponent {
	EARFaceTransformMixing TransformSetting; // 0x278
	bool bUpdateVertexNormal; // 0x279
	bool bFaceOutOfScreen; // 0x27a
	FARFaceUpdatePayload ReplicatedPayload; // 0x280
};

struct AConsumeHoldableBase : AHoldableBase {
	UAnimMontage* FP_CastingAnimation; // 0x478
	UAnimMontage* TP_CastingAnimation; // 0x480
	float CastTime; // 0x488
	float CastFinishTime; // 0x48c
	bool bIsPlayingCastingAnim; // 0x498
};

struct ULandscapeGrassType : UObject {
	TArray<FGrassVariety> GrassVarieties; // 0x28
	char bEnableDensityScaling : 1; // 0x38
	UStaticMesh* GrassMesh; // 0x40
	float GrassDensity; // 0x48
	float PlacementJitter; // 0x4c
	int32_t StartCullDistance; // 0x50
	int32_t EndCullDistance; // 0x54
	bool RandomRotation; // 0x58
	bool AlignToSurface; // 0x59
};

struct ABP_ThrownFlareDisc_C : ABP_ThrowItem_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x378
	USkeletalMeshComponent* FlyingFlashMesh; // 0x380
	UParticleSystemComponent* P_FlareDisc_Idle; // 0x388
	float _____0______0_42EE0A754C18F2C8324426A699D394D9; // 0x390
	ETimelineDirection _____0__Direction_42EE0A754C18F2C8324426A699D394D9; // 0x394
	UTimelineComponent*   _1; // 0x398
	bool IsFlaring; // 0x3a0
	float FlyUpTime; // 0x3a4
	float FlareTime; // 0x3a8
};

struct UGamepadCursor_C : UUserWidget {
	UImage* CursorImage; // 0x260
};

struct UCallbackProxyGetUserVoteOnWorkshopItem : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
	FMulticastInlineDelegate OnSteamInitFailure; // 0x50
};

struct UBP_InventoryComponentBase_C : UInventoryComponentBase {
	TArray<UBP_PlayerInventoryComponent_C*> Connected Player Array; // 0xe8
	FMulticastInlineDelegate OnInventorySlotChanged; // 0xf8
	bool FirstPriorityInventory; // 0x108
	UUserWidget* ExternalUIClass; // 0x110
	FMulticastInlineDelegate OnChangedInventoryArray_Server; // 0x118
	FMulticastInlineDelegate OnConnectedPlayerChanged; // 0x128
};

struct UNiagaraPreviewAxis_InterpParamVector2D : UNiagaraPreviewAxis_InterpParamBase {
	FVector2D Min; // 0x38
	FVector2D Max; // 0x40
};

struct UButtonWidgetStyle : USlateWidgetStyleContainerBase {
	FButtonStyle ButtonStyle; // 0x30
};

struct UClothingAssetBase : UObject {
	FString ImportedFilePath; // 0x28
	FGuid AssetGuid; // 0x38
};

struct UCancelFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UMovieSceneParticleParameterTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x80
};

struct UAudioCaptureComponent : USynthComponent {
	int32_t JitterLatencyFrames; // 0x6c0
};

struct ABP_SVSpectatorPawn_C : ASpectatorPawn {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2a8
};

struct UCloudWatchLogsCancelExportTask : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct ALODActor : AActor {
	UStaticMeshComponent* StaticMeshComponent; // 0x220
	TMap<UMaterialInterface*, UInstancedStaticMeshComponent*> ImpostersStaticMeshComponents; // 0x228
	UHLODProxy* Proxy; // 0x278
	FName Key; // 0x280
	float LODDrawDistance; // 0x288
	int32_t LODLevel; // 0x28c
	TArray<AActor*> SubActors; // 0x290
	char CachedNumHLODLevels; // 0x2a0
};

struct UPhysicalMaterialMask : UObject {
	int32_t UVChannelIndex; // 0x28
	TextureAddress AddressX; // 0x2c
	TextureAddress AddressY; // 0x2d
};

struct UWBP_Radiogram_6010217_C : UWBP_radiogram_CustomBase_C {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x298
	UTextBlock* TextBlock; // 0x2a0
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x2a8
	UWBP_RadiogramListing_C* WBP_RadiogramListing_2; // 0x2b0
	UWBP_RadiogramListing_C* WBP_RadiogramListing_3; // 0x2b8
	UWBP_RadiogramListing_C* WBP_RadiogramListing_4; // 0x2c0
	UWBP_RadiogramListing_C* WBP_RadiogramListing_5; // 0x2c8
};

struct UWPB_Crafting_Toggle_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* Button; // 0x268
	UImage* Image_Icon; // 0x270
	UImage* Image_Selected; // 0x278
	UWBP_Tooltip_UI_C* WBP_Tooltip_UI; // 0x280
	FMulticastInlineDelegate ToggleClick; // 0x288
	UObject* In Brush Image; // 0x298
	FText In Text; // 0x2a0
};

struct UCloudWatchGetMetricWidgetImage : UAwsCloudWatchAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UMaterialExpressionRuntimeVirtualTextureSample : UMaterialExpression {
	FExpressionInput Coordinates; // 0x40
	FExpressionInput WorldPosition; // 0x54
	FExpressionInput MipValue; // 0x68
	URuntimeVirtualTexture* VirtualTexture; // 0x80
	ERuntimeVirtualTextureMaterialType MaterialType; // 0x88
	bool bSinglePhysicalSpace; // 0x89
	bool bAdaptive; // 0x8a
	ERuntimeVirtualTextureMipValueMode MipValueMode; // 0x8b
	ERuntimeVirtualTextureTextureAddressMode TextureAddressMode; // 0x8c
};

struct UTextureLightProfile : UTexture2D {
	float Brightness; // 0x100
	float TextureMultiplier; // 0x104
};

struct USVVoiceInterface : UObject {
	FMulticastInlineDelegate OnVivoxLoginStateChaged; // 0x40
	FMulticastInlineDelegate OnVivoxVolumeSetting; // 0x50
	FMulticastInlineDelegate OnVivoxInputChannelChanged; // 0x60
	FMulticastInlineDelegate OnVivoxChannelJoinStateChanged; // 0x70
	FMulticastInlineDelegate OnVivoxChannelParticipantUpdated; // 0x80
};

struct AShooterPlayerStart : APlayerStart {
	int32_t TeamID; // 0x250
	int32_t PlayerId; // 0x254
	bool bTeleportTarget; // 0x258
};

struct UMovieSceneCompiledDataManager : UObject {
	TMap<int32_t, FMovieSceneSequenceHierarchy> Hierarchies; // 0xd8
	TMap<int32_t, FMovieSceneEvaluationTemplate> TrackTemplates; // 0x128
	TMap<int32_t, FMovieSceneEvaluationField> TrackTemplateFields; // 0x178
	TMap<int32_t, FMovieSceneEntityComponentField> EntityComponentFields; // 0x1c8
};

struct UFoliageType : UObject {
	FGuid UpdateGuid; // 0x28
	float Density; // 0x38
	float DensityAdjustmentFactor; // 0x3c
	float Radius; // 0x40
	bool bSingleInstanceModeOverrideRadius; // 0x44
	float SingleInstanceModeRadius; // 0x48
	EFoliageScaling Scaling; // 0x4c
	FFloatInterval ScaleX; // 0x50
	FFloatInterval ScaleY; // 0x58
	FFloatInterval ScaleZ; // 0x60
	FFoliageVertexColorChannelMask VertexColorMaskByChannel[0x4]; // 0x68
	FoliageVertexColorMask VertexColorMask; // 0x98
	float VertexColorMaskThreshold; // 0x9c
	char VertexColorMaskInvert : 1; // 0xa0
	FFloatInterval ZOffset; // 0xa4
	char AlignToNormal : 1; // 0xac
	float AlignMaxAngle; // 0xb0
	char RandomYaw : 1; // 0xb4
	float RandomPitchAngle; // 0xb8
	FFloatInterval GroundSlopeAngle; // 0xbc
	FFloatInterval Height; // 0xc4
	TArray<FName> LandscapeLayers; // 0xd0
	float MinimumLayerWeight; // 0xe0
	TArray<FName> ExclusionLandscapeLayers; // 0xe8
	float MinimumExclusionLayerWeight; // 0xf8
	FName LandscapeLayer; // 0xfc
	char CollisionWithWorld : 1; // 0x104
	FVector CollisionScale; // 0x108
	FBoxSphereBounds MeshBounds; // 0x114
	FVector LowBoundOriginRadius; // 0x130
	EComponentMobility Mobility; // 0x13c
	FInt32Interval CullDistance; // 0x140
	char bEnableStaticLighting : 1; // 0x148
	char CastShadow : 1; // 0x148
	char bAffectDynamicIndirectLighting : 1; // 0x148
	char bAffectDistanceFieldLighting : 1; // 0x148
	char bCastDynamicShadow : 1; // 0x148
	char bCastStaticShadow : 1; // 0x148
	char bCastShadowAsTwoSided : 1; // 0x148
	char bReceivesDecals : 1; // 0x148
	char bOverrideLightMapRes : 1; // 0x149
	int32_t OverriddenLightMapRes; // 0x14c
	ELightmapType LightmapType; // 0x150
	char bUseAsOccluder : 1; // 0x154
	FBodyInstance BodyInstance; // 0x158
	EHasCustomNavigableGeometry CustomNavigableGeometry; // 0x2b0
	FLightingChannels LightingChannels; // 0x2b1
	char bRenderCustomDepth : 1; // 0x2b4
	ERendererStencilMask CustomDepthStencilWriteMask; // 0x2b8
	int32_t CustomDepthStencilValue; // 0x2bc
	int32_t TranslucencySortPriority; // 0x2c0
	float CollisionRadius; // 0x2c4
	float ShadeRadius; // 0x2c8
	int32_t NumSteps; // 0x2cc
	float InitialSeedDensity; // 0x2d0
	float AverageSpreadDistance; // 0x2d4
	float SpreadVariance; // 0x2d8
	int32_t SeedsPerStep; // 0x2dc
	int32_t DistributionSeed; // 0x2e0
	float MaxInitialSeedOffset; // 0x2e4
	bool bCanGrowInShade; // 0x2e8
	bool bSpawnsInShade; // 0x2e9
	float MaxInitialAge; // 0x2ec
	float MaxAge; // 0x2f0
	float OverlapPriority; // 0x2f4
	FFloatInterval ProceduralScale; // 0x2f8
	FRuntimeFloatCurve ScaleCurve; // 0x300
	int32_t ChangeCount; // 0x388
	char ReapplyDensity : 1; // 0x38c
	char ReapplyRadius : 1; // 0x38c
	char ReapplyAlignToNormal : 1; // 0x38c
	char ReapplyRandomYaw : 1; // 0x38c
	char ReapplyScaling : 1; // 0x38c
	char ReapplyScaleX : 1; // 0x38c
	char ReapplyScaleY : 1; // 0x38c
	char ReapplyScaleZ : 1; // 0x38c
	char ReapplyRandomPitchAngle : 1; // 0x38d
	char ReapplyGroundSlope : 1; // 0x38d
	char ReapplyHeight : 1; // 0x38d
	char ReapplyLandscapeLayers : 1; // 0x38d
	char ReapplyZOffset : 1; // 0x38d
	char ReapplyCollisionWithWorld : 1; // 0x38d
	char ReapplyVertexColorMask : 1; // 0x38d
	char bEnableDensityScaling : 1; // 0x38d
	char bEnableDiscardOnLoad : 1; // 0x38e
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x390
	int32_t VirtualTextureCullMips; // 0x3a0
	ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x3a4
};

struct UParticleModuleEventReceiverKillParticles : UParticleModuleEventReceiverBase {
	char bStopSpawning : 1; // 0x40
};

struct UCloudWatchLogsDeleteResourcePolicy : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UAnimSharingStateInstance : UAnimInstance {
	UAnimSequence* AnimationToPlay; // 0x2b8
	float PermutationTimeOffset; // 0x2c0
	float PlayRate; // 0x2c4
	bool bStateBool; // 0x2c8
	UAnimSharingInstance* Instance; // 0x2d0
};

struct UMaterialExpressionViewProperty : UMaterialExpression {
	EMaterialExposedViewProperty Property; // 0x40
};

struct UParticleModuleAccelerationConstant : UParticleModuleAccelerationBase {
	FVector Acceleration; // 0x38
};

struct UMaterialExpressionTransform : UMaterialExpression {
	FExpressionInput Input; // 0x40
	EMaterialVectorCoordTransformSource TransformSourceType; // 0x54
	EMaterialVectorCoordTransform TransformType; // 0x55
};

struct UARPoseComponent : UARComponent {
	FARPoseUpdatePayload ReplicatedPayload; // 0x280
};

struct UInteractiveToolManager : UObject {
	UInteractiveTool* ActiveLeftTool; // 0x30
	UInteractiveTool* ActiveRightTool; // 0x38
	TMap<FString, UInteractiveToolBuilder*> ToolBuilders; // 0x90
};

struct UConsoleSettings : UObject {
	int32_t MaxScrollbackSize; // 0x28
	TArray<FAutoCompleteCommand> ManualAutoCompleteList; // 0x30
	TArray<FString> AutoCompleteMapPaths; // 0x40
	float BackgroundOpacityPercentage; // 0x50
	bool bOrderTopToBottom; // 0x54
	bool bDisplayHelpInAutoComplete; // 0x55
	FColor InputColor; // 0x58
	FColor HistoryColor; // 0x5c
	FColor AutoCompleteCommandColor; // 0x60
	FColor AutoCompleteCVarColor; // 0x64
	FColor AutoCompleteFadedColor; // 0x68
};

struct USurvivalReplicationGraph : UReplicationGraph {
	TArray<FSurvivalReplicationGraph_GridSpatialization2DConfiguration> GridSpatialization2DSettings; // 0x498
	TArray<UObject*> SpatializedClasses; // 0x4a8
	TArray<UObject*> NonSpatializedChildClasses; // 0x4b8
	TArray<UObject*> AlwaysRelevantClasses; // 0x4c8
	TArray<USurvivalReplicationGraphNode_GridSpatialization2D*> GridNodes; // 0x4d8
	UReplicationGraphNode_ActorList* AlwaysRelevantNode; // 0x4e8
	USurvivalReplicationGraphNode_ActorTickOptimizer* PlayerAnimationTickOptimizerNode; // 0x4f0
};

struct UBP_PlayerInventoryComponent_C : UBP_InventoryComponentBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x138
	int32_t Health; // 0x140
	float Stamina; // 0x144
	float Recharge Stamina Rate; // 0x148
	float Recharge Stamina Amount; // 0x14c
	float Sprint Stamina Reduction; // 0x150
	bool Use Thirst System; // 0x154
	float Thirst; // 0x158
	float Running Thirst Reduction; // 0x15c
	float Sprint Thirst Reduction; // 0x160
	int32_t Dehydration Damage; // 0x164
	int32_t Dehydration Damage Timer; // 0x168
	bool Auto Equip On Pickup; // 0x16c
	int32_t Quick Slot Count; // 0x170
	float Interaction Range; // 0x174
	FTimerHandle Running State Timer; // 0x178
	ABP_MasterItem_C* Item Hit; // 0x180
	bool Sprinting; // 0x188
	FTimerHandle Starvation Timer; // 0x190
	bool bIsInGameUIOpened; // 0x198
	bool Listing Found; // 0x199
	FS_CraftingSlot Found Listing; // 0x1a0
	bool Shift Down; // 0x1f0
	FTimerHandle Dehydration Handle; // 0x1f8
	FItemInventory Item Dropping; // 0x200
	UWBP_HUD_C* Inventory HUD; // 0x238
	FTimerHandle Idle State Timer; // 0x240
	EPlayerMoveState PlayerMoveState; // 0x248
	FTimerHandle Sprinting State Timer; // 0x250
	FHitResult Server Hit Result; // 0x258
	TArray<UBP_InventoryComponentBase_C*> Connected Inventory Componenet; // 0x2e8
	FS_EquipmentSlot Chest Equipment Slot; // 0x2f8
	FS_EquipmentSlot Legs Equipment Slot; // 0x338
	FS_EquipmentSlot Feet Equipment Slot; // 0x378
	FS_EquipmentSlot Head Equipment Slot; // 0x3b8
	bool Storage Actor Hit; // 0x3f8
	FHitResult Client Hit; // 0x3fc
	FMulticastInlineDelegate Left Mouse Button Released; // 0x488
	bool Use Total Armor; // 0x498
	BP_MasterCharacter_C* Master Character; // 0x4a0
	ABP_ModelViewer_C* Model Viewer; // 0x4a8
	float Forward; // 0x4b0
	float Right; // 0x4b4
	bool Can Sprint; // 0x4b8
	FTimerHandle Current Stamina Timer; // 0x4c0
	BP_MasterCharacter_C* Respawned Character; // 0x4c8
	AController* Controller; // 0x4d0
	FHoldableAnimation Held Actor; // 0x4d8
	FItemInventory Held Item; // 0x660
	E_CameraView Camera View; // 0x698
	FItemInventory Used Item; // 0x6a0
	bool Holding Item; // 0x6d8
	bool Inventory initialized; // 0x6d9
	UBP_PlayerBuildingComponent_C* Player Building Component; // 0x6e0
	bool Block Mouse; // 0x6e8
	bool Crouching; // 0x6e9
	bool Was Third Person; // 0x6ea
	bool Movement Key Down; // 0x6eb
	FVector Screen Center Location; // 0x6ec
	FVector Screen Center Direction; // 0x6f8
	bool Reloading; // 0x704
	bool Right Mouse Input; // 0x705
	TArray<AActor*> Ignore Actors; // 0x708
	AActor* Last Hit; // 0x718
	bool ADS; // 0x720
	bool Use Interact Highlight; // 0x721
	bool IsOpendSubHUDUI; // 0x722
	bool Block Equipping; // 0x723
	FTimerHandle Interact Timer Handle; // 0x728
	bool Respawned; // 0x730
	AActor* Interacted Actor; // 0x738
	int32_t Hands Harvest Amount; // 0x740
	float TP ADS Camera Zoom; // 0x744
	float Interaction Time; // 0x748
	float Destroy Character Timer; // 0x74c
	bool Allow Consumables To Kill Player; // 0x750
	bool Block Damage; // 0x751
	int32_t Max Health; // 0x754
	float Max Thirst; // 0x758
	float Max Stamina; // 0x75c
	bool Allow FP ADS From TP; // 0x760
	bool Interact Key Down; // 0x761
	bool Adding Slots; // 0x762
	bool bIsGod; // 0x763
	UWBP_InGameUI_C* InGameUI; // 0x768
	UWidgetComponent* InGameUIWidgetComponent; // 0x770
	bool bThrow; // 0x778
	bool bIgnoreBuildCost; // 0x779
	FItemInventory PrevHeldItem; // 0x780
	E_ArmAttachmentType RevertArmAttachmentMode; // 0x7b8
	float CraftTime; // 0x7bc
	bool IsServerInited; // 0x7c0
	bool PlacedItem; // 0x7c1
	bool SkipServerReleased; // 0x7c2
	bool bCraftingPaused; // 0x7c3
	FVector LastDeadLocation; // 0x7c4
	FMulticastInlineDelegate OnPlayerDead; // 0x7d0
	float CharacterCreationTime; // 0x7e0
	TArray<float> AffectingEnvironmentEffects; // 0x7e8
	UCurveFloat* TemperatureDamageCurve; // 0x7f8
	float EnvUpdateInterval; // 0x800
	TArray<float> ResistAmount; // 0x808
	float SpeedMultiply; // 0x818
	float HeatRecover; // 0x81c
	float ColdRecover; // 0x820
	TMap<E_AbnormalStateType, float> AbnormalStateSpeedMultiply; // 0x828
	bool IsLastHitActorInteractable; // 0x878
	TMap<E_EquipmentCategorys, FS_ItemInventory> PrevEquipment; // 0x880
	FMulticastInlineDelegate OnEquipmentChanged; // 0x8d0
	bool ServerInitializeFinished; // 0x8e0
	FItemInventory InstallationItem; // 0x8e8
	TArray<int32_t> CraftableList; // 0x920
	bool RequestServerInteraction; // 0x930
	bool bIsFlyCheatMode; // 0x931
	TArray<FQuickSlotInfo> QuickSlotInfo_Preset1; // 0x938
	bool bRecieveFirstFullRefresh; // 0x948
	FTimerHandle EquipTimer; // 0x950
	FItemInventory ReserveHeldItem; // 0x958
	bool bClientInitializeComponent; // 0x990
	TArray<UBP_CraftingComponent_C*> ConnectedCraftingComponentList; // 0x998
	FVector HitLocation; // 0x9a8
	FTimerHandle InteractionHoldTimer; // 0x9b8
	WBP_RingBase_C* LastTargetHoldedUI; // 0x9c0
	bool CreatedMenu; // 0x9c8
	bool bUnlockedAllCraftList; // 0x9c9
	bool bReserveShowPlayerSummary; // 0x9ca
	bool TraceUnlimitWater; // 0x9cb
	UPrimitiveComponent* LastHit Component; // 0x9d0
	FMulticastInlineDelegate OnEquipmentDamaged; // 0x9d8
	FMulticastInlineDelegate OnRefreshSkillComponent; // 0x9e8
	TArray<ABP_SV_Oceanology_C*> TargetOcean; // 0x9f8
	int32_t QuickslotPresetIdx; // 0xa08
	TArray<FQuickSlotInfo> QuickSlotInfo_Preset2; // 0xa10
	FTimerHandle InteractionLineTraceTimer; // 0xa20
	FTimerHandle IgnoreLineTraceActorTimer; // 0xa28
	TArray<E_MainUIState> BlockUIStateArray; // 0xa30
	bool bUsingRemoteManagementSystem; // 0xa40
	FFloatValueFromDataTable CharacterMeshDestroyTime; // 0xa48
	FMulticastInlineDelegate OnNotifyQuickSlotUpdate; // 0xa70
	int32_t SaveHoldableIdentifierNum; // 0xa80
	bool IsInNonPVPZone; // 0xa84
	TArray<E_EquipmentCategorys> ReserveUpdateEquipmentQueue; // 0xa88
};

struct USkeletalMesh : UStreamableRenderAsset {
	USkeleton* Skeleton; // 0x80
	FBoxSphereBounds ImportedBounds; // 0x88
	FBoxSphereBounds ExtendedBounds; // 0xa4
	FVector PositiveBoundsExtension; // 0xc0
	FVector NegativeBoundsExtension; // 0xcc
	TArray<FSkeletalMaterial> Materials; // 0xd8
	TArray<FBoneMirrorInfo> SkelMirrorTable; // 0xe8
	TArray<FSkeletalMeshLODInfo> LODInfo; // 0xf8
	FPerPlatformInt MinLOD; // 0x158
	FPerPlatformBool DisableBelowMinLodStripping; // 0x15c
	EAxis SkelMirrorAxis; // 0x15d
	EAxis SkelMirrorFlipAxis; // 0x15e
	char bUseFullPrecisionUVs : 1; // 0x15f
	char bUseHighPrecisionTangentBasis : 1; // 0x15f
	char bHasBeenSimplified : 1; // 0x15f
	char bHasVertexColors : 1; // 0x15f
	char bEnablePerPolyCollision : 1; // 0x15f
	UBodySetup* BodySetup; // 0x160
	UPhysicsAsset* PhysicsAsset; // 0x168
	UPhysicsAsset* ShadowPhysicsAsset; // 0x170
	TArray<UNodeMappingContainer*> NodeMappingData; // 0x178
	TArray<UMorphTarget*> MorphTargets; // 0x188
	UAnimInstance* PostProcessAnimBlueprint; // 0x310
	TArray<UClothingAssetBase*> MeshClothingAssets; // 0x318
	FSkeletalMeshSamplingInfo SamplingInfo; // 0x328
	TArray<UAssetUserData*> AssetUserData; // 0x358
	TArray<USkeletalMeshSocket*> Sockets; // 0x368
	TArray<FSkinWeightProfileInfo> SkinWeightProfiles; // 0x388
};

struct ASurvivalAIController : AAIController {
	ASurvivalAICharacterBase* SVAICharacter; // 0x328
	TMap<AActor*, float> Map_PercepcivedActors; // 0x330
	TArray<AActor*> PercepcivedActors; // 0x380
	TArray<AActor*> PercepcivedActors_Sight; // 0x390
	AActor* PercepcivedActor_RunAway; // 0x3a0
	int32_t NPCTeamID; // 0x3a8
	float Timer_PercivedActors_Sight; // 0x3ac
	FVector SpawnLocation; // 0x3b0
	FVector GoalLocation; // 0x3bc
	FVector ViaLocation; // 0x3c8
	FVector NewMoveLocation; // 0x3d4
	FVector OldMoveLocation; // 0x3e0
	bool IsMoveTo; // 0x3ec
	bool IsMoveToVia; // 0x3ed
	TArray<AActor*> ActorsToIgnore_LandmarkBase; // 0x3f0
	TArray<AActor*> ActorsToIgnore_SpotEvent; // 0x400
	TArray<AActor*> ActorsToIgnore_LandScape; // 0x410
	float Timer_StopAMove; // 0x420
};

struct UBTTask_BeckenReturnToCenter_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
};

struct UTouchInterface : UObject {
	TArray<FTouchInputControl> Controls; // 0x28
	float ActiveOpacity; // 0x38
	float InactiveOpacity; // 0x3c
	float TimeUntilDeactive; // 0x40
	float TimeUntilReset; // 0x44
	float ActivationDelay; // 0x48
	bool bPreventRecenter; // 0x4c
	float StartupDelay; // 0x50
};

struct UEnvQueryManager : UAISubsystem {
	TArray<FEnvQueryInstanceCache> InstanceCache; // 0xa8
	TArray<UEnvQueryContext*> LocalContexts; // 0xb8
	TArray<UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers; // 0xc8
	float MaxAllowedTestingTime; // 0x12c
	bool bTestQueriesUsingBreadth; // 0x130
	int32_t QueryCountWarningThreshold; // 0x134
	double QueryCountWarningInterval; // 0x138
};

struct UBTService_BlackboardBase : UBTService {
	FBlackboardKeySelector BlackboardKey; // 0x70
};

struct UMaterialExpressionChannelMaskParameter : UMaterialExpressionVectorParameter {
	EChannelMaskParameterColor MaskChannel; // 0x70
};

struct ULowEntryLatentActionString : UObject {
	bool Finished; // 0x28
	FString Result; // 0x30
	int32_t KeepAliveCount; // 0x40
};

struct UThumper_AnimBlueprint_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x340
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x400
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x428
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x450
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x478
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x4a0
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x520
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x550
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x5d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x600
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x680
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x6b0
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x730
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x760
	bool IsADS; // 0x810
};

struct ABP_CarSpawner_C : AAutoShapeRemoverInEditorActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x228
	UBoxComponent* Box; // 0x230
	USceneComponent* DefaultSceneRoot; // 0x238
	TMap<APawn*, int32_t> SpawnInfo; // 0x240
	TArray<ASurvivalVehicle*> SpawnedCars; // 0x290
	int32_t CurrentNPCTypeIndex; // 0x2a0
	int32_t NPCCounter; // 0x2a4
	int32_t CurrentNPCCountIndex; // 0x2a8
	float RespawnTime; // 0x2ac
	float SpawnTime; // 0x2b0
	TArray<FS_SaveVehicle> SavedVehicle; // 0x2b8
};

struct UMaterialExpressionBentNormalCustomOutput : UMaterialExpressionCustomOutput {
	FExpressionInput Input; // 0x40
};

struct UWBP_Radiogram_Distribution_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image_Distribution; // 0x268
	UTexture2DDynamic* Texture2D; // 0x270
};

struct UAnimNotifyState_TimedParticleEffect : UAnimNotifyState {
	UParticleSystem* PSTemplate; // 0x30
	FName SocketName; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	bool bDestroyAtEnd; // 0x58
};

struct ABP_SurvivalGameModeForWorldTutorial_C : ABP_SurvivalGameMode_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x6d8
};

struct USoundNodeLooping : USoundNode {
	int32_t LoopCount; // 0x48
	char bLoopIndefinitely : 1; // 0x4c
};

struct UWBP_HUD_ActionSub_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_78; // 0x268
	UImage* Image_Sub; // 0x270
	UWBP_Key_C* WBP_Key; // 0x278
	UBP_PlayerInventoryComponent_C* PlayerInventoryComponent; // 0x280
	FSlateBrush DefaultMode; // 0x288
	TMap<E_BuildManagementMode, FSlateBrush> ManagementModeIcon; // 0x310
	TMap<E_MechanicArmMode, FSlateBrush> Icon; // 0x360
};

struct ASurvivalPlayerState : APlayerState {
	bool bAdmin; // 0x320
	bool bIsTeamLeader; // 0x338
	ASVTeamInfo* Team; // 0x340
	FInvitedTeamInfo InvitedTeamInfo; // 0x348
	float InvitedTeamLimitTime; // 0x360
	TArray<FTeamMemberInfo> InvitationInfos; // 0x368
	FJoiningTeamInfo JoiningTeamInfo; // 0x378
	float JoiningTeamLimitTime; // 0x390
	TArray<FTeamMemberInfo> JoiningInfos; // 0x398
	char bPendingTeamSwitch : 1; // 0x3a8
	bool IsPreviousTeam; // 0x3ac
	TArray<FTeamMemberInfo> TeamMemberInfos; // 0x3b0
	FString OutgameUserId; // 0x3c0
};

struct UMovieSceneSequenceTickManager : UObject {
	TArray<AActor*> SequenceActors; // 0x28
	UMovieSceneEntitySystemLinker* Linker; // 0x38
};

struct UMaterialExpressionBlackBody : UMaterialExpression {
	FExpressionInput Temp; // 0x40
};

struct USubmixEffectSubmixEQPreset : USoundEffectSubmixPreset {
	FSubmixEffectSubmixEQSettings Settings; // 0xa0
};

struct AExponentialHeightFog : AInfo {
	UExponentialHeightFogComponent* Component; // 0x220
	char bEnabled : 1; // 0x228
};

struct UCurveLinearColor : UCurveBase {
	FRichCurve FloatCurves[0x4]; // 0x30
	float AdjustHue; // 0x230
	float AdjustSaturation; // 0x234
	float AdjustBrightness; // 0x238
	float AdjustBrightnessCurve; // 0x23c
	float AdjustVibrance; // 0x240
	float AdjustMinAlpha; // 0x244
	float AdjustMaxAlpha; // 0x248
};

struct UBP_SurvivalStatFactor_C : UBP_MachineArmAbilityObjectBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x40
	float Factor; // 0x48
};

struct UWBP_HUD_ConditionListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image_Condition; // 0x268
	UInvalidationBox* InvalidationBox_1; // 0x270
	UTextBlock* Text_Value; // 0x278
	UWBP_Tooltip_UI_C* WBP_Tooltip_UI; // 0x280
	TMap<E_AbnormalStateType, UTexture*> Material Instance Map; // 0x288
	FText DisplayName; // 0x2d8
	UMaterialInstanceDynamic* MIDynamic; // 0x2f0
	FText Description; // 0x2f8
	E_AbnormalStateType ConditionType; // 0x310
	UMaterialInstance* Custom MI; // 0x318
	float Value; // 0x320
};

struct UAkAudioBank : UAkAssetBase {
	bool AutoLoad; // 0x50
	TMap<FString, TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap; // 0x58
	TSet<TSoftObjectPtr<UAkAudioEvent>> LinkedAkEvents; // 0xa8
	UAkAssetPlatformData* CurrentLocalizedPlatformAssetData; // 0xf8
};

struct UARTrackedObject : UARTrackedGeometry {
	UARCandidateObject* DetectedObject; // 0xf8
};

struct UWBP_Radiogram_6010212_C : UWBP_radiogram_CustomBase_C {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x298
	UTextBlock* TextBlock; // 0x2a0
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x2a8
	UWBP_RadiogramListing_C* WBP_RadiogramListing_2; // 0x2b0
	UWBP_RadiogramListing_C* WBP_RadiogramListing_3; // 0x2b8
};

struct ASurvivalProjectile : AActor {
	UCapsuleComponent* Capsule; // 0x220
	float ProjectileSpeed; // 0x228
	FVector StartLocation; // 0x22c
	FVector NextLocation; // 0x238
	UCurveFloat* DamageCurve; // 0x248
	UCurveFloat* DropCurve; // 0x250
	FDamageStruct DamageStruct; // 0x258
	TArray<FHitEffectInfo> HitEffects; // 0x290
	UAkAudioEvent* HitEvent; // 0x2a0
	UCurveFloat* ParticleSizeByDistance; // 0x2a8
	UAkSwitchValue* DefaultHitSwitch; // 0x2b0
	TMap<EPhysicalSurface, UAkSwitchValue*> SwitchBySurface; // 0x2b8
	bool bAlreadyHearingWhipping; // 0x308
	float TraceableAngle; // 0x30c
	float SteerAngleSpeed; // 0x310
	FVector StartForwardVector; // 0x314
	bool bIgnoreDamage; // 0x320
	bool IsPeaceDamage; // 0x321
	float ProjectileRadius; // 0x324
	EDrawDebugTrace LineDebugMode; // 0x328
	bool IsSetNextLocation; // 0x329
	bool DoProjectileCheck; // 0x32a
	bool IsExplodingProjectile; // 0x32b
	float DamageMultiplier; // 0x32c
	bool bExploded; // 0x330
};

struct ABP_Footprint_C : AActor {
	UStaticMeshComponent* Plane; // 0x220
	UDecalComponent* Decal; // 0x228
	USceneComponent* DefaultSceneRoot; // 0x230
};

struct UEdGraphNode_Documentation : UEdGraphNode {
	FString Link; // 0x98
	FString Excerpt; // 0xa8
};

struct APaperSpriteActor : AActor {
	UPaperSpriteComponent* RenderComponent; // 0x220
};

struct UGameplayTask_SpawnActor : UGameplayTask {
	FMulticastInlineDelegate success; // 0x68
	FMulticastInlineDelegate DidNotSpawn; // 0x78
	AActor* ClassToSpawn; // 0xa0
};

struct UEnvQueryTest_Pathfinding : UEnvQueryTest {
	EEnvTestPathfinding TestMode; // 0x1f8
	UEnvQueryContext* Context; // 0x200
	FAIDataProviderBoolValue PathFromContext; // 0x208
	FAIDataProviderBoolValue SkipUnreachable; // 0x240
	UNavigationQueryFilter* FilterClass; // 0x278
};

struct UValueFromDataTableRepository : UObject {
	FSoftObjectPath DataTable; // 0x78
	UDataTable* SourceDataTable; // 0x90
};

struct UWBP_Button_Function_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* Button; // 0x268
	UTextBlock* Text_Shortcut; // 0x270
	UTextBlock* Text_Text; // 0x278
	FMulticastInlineDelegate OnButtonClicked; // 0x280
	FText Function; // 0x290
	FText Shortcut; // 0x2a8
};

struct UInputSettings : UObject {
	TArray<FInputAxisConfigEntry> AxisConfig; // 0x28
	char bAltEnterTogglesFullscreen : 1; // 0x38
	char bF11TogglesFullscreen : 1; // 0x38
	char bUseMouseForTouch : 1; // 0x38
	char bEnableMouseSmoothing : 1; // 0x38
	char bEnableFOVScaling : 1; // 0x38
	char bCaptureMouseOnLaunch : 1; // 0x38
	char bDefaultViewportMouseLock : 1; // 0x38
	char bAlwaysShowTouchInterface : 1; // 0x38
	char bShowConsoleOnFourFingerTap : 1; // 0x39
	char bEnableGestureRecognizer : 1; // 0x39
	bool bUseAutocorrect; // 0x3a
	TArray<FString> ExcludedAutocorrectOS; // 0x40
	TArray<FString> ExcludedAutocorrectCultures; // 0x50
	TArray<FString> ExcludedAutocorrectDeviceModels; // 0x60
	EMouseCaptureMode DefaultViewportMouseCaptureMode; // 0x70
	EMouseLockMode DefaultViewportMouseLockMode; // 0x71
	float FOVScale; // 0x74
	float DoubleClickTime; // 0x78
	TArray<FInputActionKeyMapping> ActionMappings; // 0x80
	TArray<FInputAxisKeyMapping> AxisMappings; // 0x90
	TArray<FInputActionSpeechMapping> SpeechMappings; // 0xa0
	TSoftClassPtr<UObject> DefaultPlayerInputClass; // 0xb0
	TSoftClassPtr<UObject> DefaultInputComponentClass; // 0xd8
	FSoftObjectPath DefaultTouchInterface; // 0x100
	FKey ConsoleKey; // 0x118
	TArray<FKey> ConsoleKeys; // 0x130
};

struct UParticleModuleLifetime_Seeded : UParticleModuleLifetime {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x60
};

struct UARMeshComponent : UARComponent {
	FARMeshUpdatePayload ReplicatedPayload; // 0x280
};

struct UBTService_UnderAttackCheck_C : UBTService_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x98
	FBlackboardKeySelector KEYTargetActor; // 0xa0
	FBlackboardKeySelector KEYTargetLocation; // 0xc8
	FBlackboardKeySelector KEYStress; // 0xf0
	APawn* MyPawn; // 0x118
	bool UseFloatingLocation; // 0x120
	float FloatingHight; // 0x124
};

struct UTimecodeProvider : UObject {
	float FrameDelay; // 0x28
};

struct UParticleModuleVelocity_Seeded : UParticleModuleVelocity {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xb0
};

struct UParticleModuleOrbitBase : UParticleModule {
	char bUseEmitterTime : 1; // 0x30
};

struct UAnimNotify_PlayAKSound_C : UAnimNotify {
	FName SocketName; // 0x38
	bool Attach; // 0x40
	UAkAudioEvent* AkEvent; // 0x48
	TArray<UAkSwitchValue*> Switches; // 0x50
	TMap<UAkRtpc*, float> RTPCs; // 0x60
	bool bIgnoreOwner; // 0xb0
};

struct UMaterialExpressionReroute : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UAkGameObject : USceneComponent {
	UAkAudioEvent* AkAudioEvent; // 0x1f8
	FString EventName; // 0x200
};

struct UBTTask_InitData_Juggernaut_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	FBlackboardKeySelector SpawnPoint; // 0xb0
	FBlackboardKeySelector MaxMoveDistance; // 0xd8
	FBlackboardKeySelector IsInitData; // 0x100
	FBlackboardKeySelector spawner; // 0x128
};

struct UWBP_Functionality_ItemLogListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_New; // 0x268
	UBorder* Border_2; // 0x270
	UImage* Icon; // 0x278
	UImage* Image_Flow; // 0x280
	UTextBlock* Text_Amount; // 0x288
	UTextBlock* Text_Item; // 0x290
	UTextBlock* Text_Player; // 0x298
	UTextBlock* Text_Time; // 0x2a0
	FS_StorageInventoryLog StorageLog; // 0x2a8
	FDateTime Date Time; // 0x2e0
	int32_t TempTime; // 0x2e8
	int32_t CurrentTime; // 0x2ec
	bool bHour; // 0x2f0
};

struct UWBP_Functionality_ConsoleListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Clicked; // 0x268
	UBorder* Border_1; // 0x270
	UImage* CraftingListingIcon; // 0x278
	UImage* Image_102; // 0x280
	UImage* Image_Tier; // 0x288
	UInvalidationBox* InvalidationBox_7; // 0x290
	UImage* PowerState; // 0x298
	UImage* Selected; // 0x2a0
	UTextBlock* Text_Name; // 0x2a8
	UImage* Tint; // 0x2b0
	UWBP_UI_ListingHovering_C* WBP_UI_ListingHovering; // 0x2b8
	UWBP_Functionality_Console_C* DisplayConsole; // 0x2c0
	ABP_BuildPartBase_C* TargetBuildPart; // 0x2c8
	AActor* Class; // 0x2d0
	bool bUsedCategory; // 0x2d8
	bool CheckPower; // 0x2d9
	bool Is Switched On; // 0x2da
};

struct UMaterialExpressionFontSampleParameter : UMaterialExpressionFontSample {
	FName ParameterName; // 0x50
	FGuid ExpressionGUID; // 0x58
	FName Group; // 0x68
};

struct APhysicsThruster : ARigidBodyBase {
	UPhysicsThrusterComponent* ThrusterComponent; // 0x220
};

struct UBP_KeyCombination_C : UObject {
	FString Name; // 0x28
	TArray<UBP_KeyInput_C*> Key Inputs; // 0x38
	TArray<FSKeyInput> Default Combination; // 0x48
	bool Can't Be None; // 0x58
	TArray<UBP_KeyConflict_C*> Conflicting Mappings Blocked; // 0x60
	TArray<UBP_KeyConflict_C*> Conflicting Mappings Info; // 0x70
	FMulticastInlineDelegate Combination Updated; // 0x80
	UBP_KeyMapping_C* Parent Mapping; // 0x90
};

struct UClothLODDataCommon_Legacy : UObject {
	UClothPhysicalMeshDataBase_Legacy* PhysicalMeshData; // 0x28
	FClothPhysicalMeshData ClothPhysicalMeshData; // 0x30
	FClothCollisionData CollisionData; // 0x128
};

struct ALandscapeStreamingProxy : ALandscapeProxy {
	LazyObjectProperty LandscapeActor; // 0x598
};

struct USQSRemovePermission : UAwsSQSAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UMaterialExpressionConstant : UMaterialExpression {
	float R; // 0x40
};

struct UAnimNotify_PlaySound : UAnimNotify {
	USoundBase* Sound; // 0x38
	float VolumeMultiplier; // 0x40
	float PitchMultiplier; // 0x44
	char bFollow : 1; // 0x48
	FName AttachName; // 0x4c
};

struct APhononProbeVolume : AVolume {
	EPhononProbePlacementStrategy PlacementStrategy; // 0x258
	float HorizontalSpacing; // 0x25c
	float HeightAboveFloor; // 0x260
	int32_t NumProbes; // 0x264
	int32_t ProbeDataSize; // 0x268
	TArray<FBakedDataInfo> BakedDataInfo; // 0x270
	UPhononProbeComponent* PhononProbeComponent; // 0x280
	FString ProbeBoxFileName; // 0x288
	FString ProbeBatchFileName; // 0x298
};

struct UAkLateReverbComponent : USceneComponent {
	char bEnable : 1; // 0x1f8
	float SendLevel; // 0x1fc
	float FadeRate; // 0x200
	float Priority; // 0x204
	bool AutoAssignAuxBus; // 0x208
	UAkAuxBus* AuxBus; // 0x210
	FString AuxBusName; // 0x218
	UAkAuxBus* AuxBusManual; // 0x230
};

struct UWBP_Function_Display_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWBP_Button_Function_C* Button_Radiogram; // 0x268
	UVerticalBox* OptionBox; // 0x270
	UBP_PlayerInventoryComponent_C* Player Inventory Component; // 0x278
	int32_t UID; // 0x280
};

struct USVItemPartsContent : UPrimaryDataAsset {
	FText PartsName; // 0x30
};

struct UMaterialExpressionStaticComponentMaskParameter : UMaterialExpressionParameter {
	char DefaultR : 1; // 0x58
	char DefaultG : 1; // 0x58
	char DefaultB : 1; // 0x58
	char DefaultA : 1; // 0x58
};

struct UM4A1_SK_Skeleton_AnimBlueprint_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x2c8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x310
	FAnimNode_Root AnimGraphNode_Root; // 0x358
};

struct UCloudWatchLogsDeleteDestination : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct ABP_LandmarkEffectRangeActor_C : ALandmarkEffectBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0
	USceneComponent* DefaultSceneRoot; // 0x2f8
	float Timeline_Effect_EffectAlpha_C9CEEACB4D8B4AC8DF84D9A786F02304; // 0x300
	ETimelineDirection Timeline_Effect__Direction_C9CEEACB4D8B4AC8DF84D9A786F02304; // 0x304
	UTimelineComponent* Timeline_Effect; // 0x308
	FFloatValueFromDataTable GameTimeMultiflyByConfig; // 0x310
	UBP_PlayerInventoryComponent_C* CauserInventory; // 0x338
	FTimerHandle TimerUpdatePlayerLocation; // 0x340
	FVector CauserNearLocation; // 0x348
	FVector CauserNearLocationRange; // 0x354
	float LocationUpdateInterval; // 0x360
};

struct UThrobber : UWidget {
	int32_t NumberOfPieces; // 0x108
	bool bAnimateHorizontally; // 0x10c
	bool bAnimateVertically; // 0x10d
	bool bAnimateOpacity; // 0x10e
	USlateBrushAsset* PieceImage; // 0x110
	FSlateBrush Image; // 0x118
};

struct USlider : UWidget {
	float Value; // 0x108
	FDelegate ValueDelegate; // 0x10c
	float MinValue; // 0x11c
	float MaxValue; // 0x120
	FSliderStyle WidgetStyle; // 0x128
	EOrientation Orientation; // 0x468
	FLinearColor SliderBarColor; // 0x46c
	FLinearColor SliderHandleColor; // 0x47c
	bool IndentHandle; // 0x48c
	bool Locked; // 0x48d
	bool MouseUsesStep; // 0x48e
	bool RequiresControllerLock; // 0x48f
	float StepSize; // 0x490
	bool IsFocusable; // 0x494
	FMulticastInlineDelegate OnMouseCaptureBegin; // 0x498
	FMulticastInlineDelegate OnMouseCaptureEnd; // 0x4a8
	FMulticastInlineDelegate OnControllerCaptureBegin; // 0x4b8
	FMulticastInlineDelegate OnControllerCaptureEnd; // 0x4c8
	FMulticastInlineDelegate OnValueChanged; // 0x4d8
};

struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	TArray<FLayerBlendInput> Layers; // 0x40
	FGuid ExpressionGUID; // 0x50
};

struct UMovieScenePropertyTrack : UMovieSceneNameableTrack {
	UMovieSceneSection* SectionToKey; // 0x78
	FMovieScenePropertyBinding PropertyBinding; // 0x80
	TArray<UMovieSceneSection*> Sections; // 0x98
};

struct UWBP_Objective_SupplyDrop_C : UWBP_ObjectiveBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	UWBP_ObjectiveListing_C* WBP_HUD_ObjectiveListing; // 0x278
	UWBP_ObjectiveFrame_C* WBP_Objective_Frame; // 0x280
	UWBP_ObjectiveListing_C* NewVar_1; // 0x288
};

struct ABP_NPCSpawnerByLandmarkStatusBoxBound_C : ABP_NPCSpawnerByLandmarkStatus_C {
	UBoxComponent* RoamBound; // 0x4a8
};

struct UParticleModuleParameterDynamic_Seeded : UParticleModuleParameterDynamic {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x48
};

struct UNiagaraDataInterfaceRenderTarget2DArray : UNiagaraDataInterfaceRWBase {
	FIntVector Size; // 0xd8
	ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe4
	char bOverrideFormat : 1; // 0xe5
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8
	TMap<uint64_t, UTextureRenderTarget2DArray*> ManagedRenderTargets; // 0x108
};

struct UMediaTimeStampInfo : UObject {
	FTimespan Time; // 0x28
	int64_t SequenceIndex; // 0x30
};

struct UNiagaraDataInterfaceArrayQuat : UNiagaraDataInterfaceArray {
	TArray<FQuat> QuatData; // 0x50
};

struct ABP_SquareCeilingBuildPartBase_C : ABP_CeilingBuildPartBase1_C {
	UBP_BuildJointComponent_C* UnderWallSocket4; // 0x888
	UBP_BuildJointComponent_C* UnderWallSocket3; // 0x890
	UBP_BuildJointComponent_C* UnderWallSocket2; // 0x898
	UBP_BuildJointComponent_C* UnderWallSocket1; // 0x8a0
	USceneComponent* Socket_UnderWall; // 0x8a8
	UBP_BuildJointComponent_C* PillarSocket; // 0x8b0
	UBP_BuildJointComponent_C* PillarSocket4; // 0x8b8
	UBP_BuildJointComponent_C* PillarSocket1; // 0x8c0
	UBP_BuildJointComponent_C* PillarSocket3; // 0x8c8
	UBP_BuildJointComponent_C* PillarSocket2; // 0x8d0
	USceneComponent* Socket_Pillar; // 0x8d8
	UBoxComponent* PiilarPulse4; // 0x8e0
	UBoxComponent* PiilarPulse3; // 0x8e8
	UBoxComponent* PiilarPulse2; // 0x8f0
	UBoxComponent* PiilarPulse1; // 0x8f8
	UBoxComponent* PiilarPulse; // 0x900
	USceneComponent* PillarPulse; // 0x908
	UBP_BuildJointComponent_C* CeilingSocket8; // 0x910
	UBP_BuildJointComponent_C* CeilingSocket4; // 0x918
	UBP_BuildJointComponent_C* CeilingSocket3; // 0x920
	UBP_BuildJointComponent_C* CeilingSocket2; // 0x928
	USceneComponent* Socket_Ceiling; // 0x930
	UBP_BuildJointComponent_C* WallSocket4_1; // 0x938
	UBP_BuildJointComponent_C* WallSocket3_1; // 0x940
	UBP_BuildJointComponent_C* WallSocket2_1; // 0x948
	UBP_BuildJointComponent_C* WallSocket1_1; // 0x950
	USceneComponent* Socket_Wall; // 0x958
	UBoxComponent* StabilityCheck4; // 0x960
	UBoxComponent* StabilityCheck3; // 0x968
	UBoxComponent* StabilityCheck2; // 0x970
	UBoxComponent* StabilityCheck1; // 0x978
	UBP_BuildJointComponent_C* StairSocket1; // 0x980
	UBP_BuildJointComponent_C* Bolt1; // 0x988
};

struct UMaterialExpressionThinTranslucentMaterialOutput : UMaterialExpressionCustomOutput {
	FExpressionInput TransmittanceColor; // 0x40
};

struct ABP_NonPVPZone_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UBoxComponent* Box; // 0x228
	USceneComponent* DefaultSceneRoot; // 0x230
	FVector BoxBound; // 0x238
	bool ActivatedNonPVPZone; // 0x244
};

struct UParticleModuleSpawnBase : UParticleModule {
	char bProcessSpawnRate : 1; // 0x30
	char bProcessBurstList : 1; // 0x30
};

struct USoundNodeMixer : USoundNode {
	TArray<float> InputVolume; // 0x48
};

struct AVolumetricLightmapDensityVolume : AVolume {
	FInt32Interval AllowedMipLevelRange; // 0x258
};

struct URMIcmpPing : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnPingResult; // 0x30
};

struct UPlanarReflectionComponent : USceneCaptureComponent {
	UBoxComponent* PreviewBox; // 0x2b0
	float NormalDistortionStrength; // 0x2b8
	float PrefilterRoughness; // 0x2bc
	float PrefilterRoughnessDistance; // 0x2c0
	int32_t ScreenPercentage; // 0x2c4
	float ExtraFOV; // 0x2c8
	float DistanceFromPlaneFadeStart; // 0x2cc
	float DistanceFromPlaneFadeEnd; // 0x2d0
	float DistanceFromPlaneFadeoutStart; // 0x2d4
	float DistanceFromPlaneFadeoutEnd; // 0x2d8
	float AngleFromPlaneFadeStart; // 0x2dc
	float AngleFromPlaneFadeEnd; // 0x2e0
	bool bShowPreviewPlane; // 0x2e4
	bool bRenderSceneTwoSided; // 0x2e5
};

struct APartyBeaconHost : AOnlineBeaconHostObject {
	UPartyBeaconState* State; // 0x248
	bool bLogoutOnSessionTimeout; // 0x2b0
	float SessionTimeoutSecs; // 0x2b4
	float TravelSessionTimeoutSecs; // 0x2b8
};

struct ABP_SurvivalPlayerState_C : ASurvivalPlayerState {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3d0
	USceneComponent* DefaultSceneRoot; // 0x3d8
	FString PlayerNickname; // 0x3e0
	E_UserKickType KickedType; // 0x3f0
	TMap<FString, ASurvivalPlayerState*> TeamMemberStates; // 0x3f8
};

struct UNiagaraDataInterfacePlatformSet : UNiagaraDataInterface {
	FNiagaraPlatformSet Platforms; // 0x38
};

struct UBTService_Juggernaut_C : UBTService_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x98
	FBlackboardKeySelector TargetActor; // 0xa0
	FBlackboardKeySelector Aggro; // 0xc8
	FBlackboardKeySelector IsRangeAttack; // 0xf0
	FBlackboardKeySelector IsMeleeAttack; // 0x118
	FBlackboardKeySelector SpawnPoint; // 0x140
	FBlackboardKeySelector IsInitData; // 0x168
	FBlackboardKeySelector IsGroggy; // 0x190
	FBlackboardKeySelector IsRangeAttackOther; // 0x1b8
	FBlackboardKeySelector IsWalkingAttack; // 0x1e0
	FBlackboardKeySelector IsSelectAttackType; // 0x208
	float TargetDistance; // 0x230
	int32_t LaserAttackCount; // 0x234
	FBlackboardKeySelector IsExecutionAttack; // 0x238
	float SelectAttackTimer; // 0x260
	FBlackboardKeySelector FarDistanceTarget; // 0x268
	float CheckFarDistanceTargetTime; // 0x290
};

struct UARTrackedQRCode : UARTrackedImage {
	FString QRCode; // 0x108
	int32_t Version; // 0x118
};

struct UEnvQueryGenerator_Donut : UEnvQueryGenerator_ProjectedPoints {
	FAIDataProviderFloatValue InnerRadius; // 0x80
	FAIDataProviderFloatValue OuterRadius; // 0xb8
	FAIDataProviderIntValue NumberOfRings; // 0xf0
	FAIDataProviderIntValue PointsPerRing; // 0x128
	FEnvDirection ArcDirection; // 0x160
	FAIDataProviderFloatValue ArcAngle; // 0x180
	bool bUseSpiralPattern; // 0x1b8
	UEnvQueryContext* Center; // 0x1c0
	char bDefineArc : 1; // 0x1c8
};

struct ABP_FoundationBuildPartBase_C : ABP_StaticMeshBuildPartBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x860
	float DefaultStability; // 0x868
	float InnerSideDamageMultiplier; // 0x86c
};

struct UWBP_HUD_Interaction_Target_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UVerticalBox* GuideList; // 0x268
	UBP_PlayerInventoryComponent_C* PlayerInventoryComponent; // 0x270
	TArray<FS_InteractionKeyGuide> PrevKeyGuide; // 0x278
};

struct USteamNetConnection : UIpConnection {
	bool bIsPassthrough; // 0x1b90
};

struct ASceneCaptureCube : ASceneCapture {
	USceneCaptureComponentCube* CaptureComponentCube; // 0x230
};

struct USingleClickInputBehavior : UAnyButtonInputBehavior {
	bool HitTestOnRelease; // 0xc0
};

struct UBTTask_Wait : UBTTaskNode {
	float WaitTime; // 0x70
	float RandomDeviation; // 0x74
};

struct UDeviceProfileManager : UObject {
	TArray<UObject*> Profiles; // 0x28
};

struct ABP_InteractionableActor_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	USceneComponent* SceneRoot; // 0x228
	FText InteractText; // 0x230
	float InteractDistance; // 0x248
	bool CanShowKeyGuide; // 0x24c
	FMulticastInlineDelegate OnInteract; // 0x250
	EnumKeyInputType Key Input Type; // 0x260
};

struct UPawnAction_Repeat : UPawnAction {
	UPawnAction* ActionToRepeat; // 0x98
	UPawnAction* RecentActionCopy; // 0xa0
	EPawnActionFailHandling ChildFailureHandlingMode; // 0xa8
};

struct UInvalidationBox : UContentWidget {
	bool bCanCache; // 0x120
	bool CacheRelativeTransforms; // 0x121
};

struct UMatineeCameraShake : UCameraShakeBase {
	float OscillationDuration; // 0x98
	float OscillationBlendInTime; // 0x9c
	float OscillationBlendOutTime; // 0xa0
	FROscillator RotOscillation; // 0xa4
	FVOscillator LocOscillation; // 0xc8
	FFOscillator FOVOscillation; // 0xec
	float AnimPlayRate; // 0xf8
	float AnimScale; // 0xfc
	float AnimBlendInTime; // 0x100
	float AnimBlendOutTime; // 0x104
	float RandomAnimSegmentDuration; // 0x108
	UCameraAnim* Anim; // 0x110
	char bRandomAnimSegment : 1; // 0x118
	float OscillatorTimeRemaining; // 0x11c
	UCameraAnimInst* AnimInst; // 0x120
};

struct UBorderSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UCloudWatchLogsDeleteRetentionPolicy : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct USoundNodeGroupControl : USoundNode {
	TArray<int32_t> GroupSizes; // 0x48
};

struct UWBP_Tooltip_FunctionListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UHorizontalBox* HorizontalBox_Special; // 0x268
	UTextBlock* TextBlock_124; // 0x270
	UWBP_Key_C* WBP_Key; // 0x278
	UWBP_Key_C* WBP_Key_Special; // 0x280
	EnumKeyInputType Type; // 0x288
	FString Key; // 0x290
	FText Function; // 0x2a0
	bool bSpecial; // 0x2b8
	FString SpecialKey; // 0x2c0
};

struct AChaosSolverActor : AActor {
	FChaosSolverConfiguration Properties; // 0x220
	float TimeStepMultiplier; // 0x288
	int32_t CollisionIterations; // 0x28c
	int32_t PushOutIterations; // 0x290
	int32_t PushOutPairIterations; // 0x294
	float ClusterConnectionFactor; // 0x298
	EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x29c
	bool DoGenerateCollisionData; // 0x29d
	FSolverCollisionFilterSettings CollisionFilterSettings; // 0x2a0
	bool DoGenerateBreakingData; // 0x2b0
	FSolverBreakingFilterSettings BreakingFilterSettings; // 0x2b4
	bool DoGenerateTrailingData; // 0x2c4
	FSolverTrailingFilterSettings TrailingFilterSettings; // 0x2c8
	float MassScale; // 0x2d8
	bool bGenerateContactGraph; // 0x2dc
	bool bHasFloor; // 0x2dd
	float FloorHeight; // 0x2e0
	FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x2e4
	UBillboardComponent* SpriteComponent; // 0x2e8
	UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x308
};

struct UNiagaraDataInterfaceVectorField : UNiagaraDataInterface {
	UVectorField* Field; // 0x38
	bool bTileX; // 0x40
	bool bTileY; // 0x41
	bool bTileZ; // 0x42
};

struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x220
	bool bLockOrientationToRail; // 0x224
	USceneComponent* TransformComponent; // 0x228
	USplineComponent* RailSplineComponent; // 0x230
	USceneComponent* RailCameraMount; // 0x238
};

struct UMaterialExpressionRuntimeVirtualTextureSampleParameter : UMaterialExpressionRuntimeVirtualTextureSample {
	FName ParameterName; // 0x90
	FGuid ExpressionGUID; // 0x98
	FName Group; // 0xa8
};

struct UWBP_TutorialQuestMain_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Open; // 0x268
	UImage* Image; // 0x270
	UVerticalBox* list; // 0x278
	UTextBlock* Text_Name; // 0x280
	UImage* TutorialIcon; // 0x288
	FS_TutorialData TutorialInfo; // 0x290
	int32_t CurrentTutorialStep; // 0x2e8
	TArray<UWBP_TutorialObjectiveListing_C*> TutorialGoalList; // 0x2f0
};

struct UVirtualTexturePoolConfig : UObject {
	int32_t DefaultSizeInMegabyte; // 0x28
	TArray<FVirtualTextureSpacePoolConfig> Pools; // 0x30
};

struct UParticleModuleColorScaleOverLife : UParticleModuleColorBase {
	FRawDistributionVector ColorScaleOverLife; // 0x30
	FRawDistributionFloat AlphaScaleOverLife; // 0x78
	char bEmitterTime : 1; // 0xa8
};

struct UCloudWatchTagResource : UAwsCloudWatchAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UMovieSceneSubSection : UMovieSceneSection {
	FMovieSceneSectionParameters Parameters; // 0xe8
	float StartOffset; // 0x10c
	float TimeScale; // 0x110
	float PrerollTime; // 0x114
	UMovieSceneSequence* SubSequence; // 0x118
	LazyObjectProperty ActorToRecord; // 0x120
	FString TargetSequenceName; // 0x140
	FDirectoryPath TargetPathToRecordTo; // 0x150
};

struct UVerticalBoxSlot : UPanelSlot {
	FSlateChildSize Size; // 0x38
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
};

struct ABP_BreakableSpruceTree_F_C : ABP_BreakableTree_C {
	UCapsuleComponent* Capsule12; // 0x410
	UCapsuleComponent* Capsule11; // 0x418
	UCapsuleComponent* Capsule10; // 0x420
	UCapsuleComponent* Capsule9; // 0x428
	UCapsuleComponent* Capsule8; // 0x430
	UCapsuleComponent* Capsule7; // 0x438
	UCapsuleComponent* Capsule6; // 0x440
	UCapsuleComponent* Capsule5; // 0x448
	UCapsuleComponent* Capsule4; // 0x450
	UCapsuleComponent* Capsule3; // 0x458
	UCapsuleComponent* Capsule2; // 0x460
	UCapsuleComponent* Capsule1; // 0x468
	UCapsuleComponent* Capsule; // 0x470
};

struct UMovieSceneGeometryCollectionTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x80
};

struct UParticleModuleKillHeight : UParticleModuleKillBase {
	FRawDistributionFloat Height; // 0x30
	char bAbsolute : 1; // 0x60
	char bFloor : 1; // 0x60
	char bApplyPSysScale : 1; // 0x60
};

struct UMovieSceneNiagaraSystemSpawnSection : UMovieSceneSection {
	ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior; // 0xe8
	ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior; // 0xec
	ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior; // 0xf0
	ENiagaraAgeUpdateMode AgeUpdateMode; // 0xf4
};

struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	FExpressionInput LayerUsed; // 0x40
	FExpressionInput LayerNotUsed; // 0x54
	FName ParameterName; // 0x68
	char PreviewUsed : 1; // 0x70
	FGuid ExpressionGUID; // 0x74
};

struct UWBP_Main_CraftingListing_C : UBP_MasterCraftingListing_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b0
	UWidgetAnimation* Anim_Selected; // 0x2b8
	UBorder* Border_1; // 0x2c0
	UTextBlock* CraftingAmount; // 0x2c8
	UTextBlock* CraftingItemName; // 0x2d0
	UImage* CraftingListingIcon; // 0x2d8
	UImage* Image_Tier; // 0x2e0
	UInvalidationBox* InvalidationBox_7; // 0x2e8
	UImage* Selected; // 0x2f0
	UWBP_Button_UI_C* WBP_Button_Craft; // 0x2f8
	UWBP_UI_ListingHovering_C* WBP_UI_ListingHovering; // 0x300
	UWBP_InGameUI_C* InGameUI; // 0x308
	bool Mouse Over; // 0x310
	bool IsDoubleClick; // 0x311
	UBP_CraftingComponent_C* TargetCraftingComponent; // 0x318
	bool bCraftingAvailable; // 0x320
	FMulticastInlineDelegate RequestRefreshList; // 0x328
	FNone* TargetFunctionalityWidget; // 0x338
};

struct UARPlaneGeometry : UARTrackedGeometry {
	EARPlaneOrientation Orientation; // 0xf8
	FVector Center; // 0xfc
	FVector Extent; // 0x108
	TArray<FVector> BoundaryPolygon; // 0x118
	UARPlaneGeometry* SubsumedBy; // 0x128
};

struct ABotCharacter : AShooterCharacter {
	AItemPickup* CarryingItemClass; // 0x688
	float MinStunDamage; // 0x690
	float DamageStunTime; // 0x694
	float StunCoolTime; // 0x698
	bool bStunned; // 0x69c
	bool bIsStunable; // 0x69d
	float LifetimeAfterDead; // 0x6a0
	float HealthMultiplierByNumPlayers; // 0x6a4
	float TurnSpeed; // 0x6a8
	bool bIsTurnning; // 0x6ac
	TMap<CrowdControlType, int32_t> CrowdControlSustainmentTime; // 0x6b0
	CrowdControlType CrowdControlState; // 0x700
};

struct UBTService_PlayerReactionForBoss_C : UBTService_PlayerReaction_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1a8
	FBlackboardKeySelector KEYPhase; // 0x1b0
};

struct UWBP_Main_Radiogram_Description_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Open; // 0x268
	UGridPanel* Custom; // 0x270
	UWBP_Radiogram_C* DefaultSummary; // 0x278
	UHorizontalBox* HorizontalBox_Toolbar; // 0x280
	UImage* Image_2; // 0x288
	UImage* Image_310; // 0x290
	UImage* Image_Portrait; // 0x298
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x2a0
	UScrollBox* ScrollBox_2; // 0x2a8
	UScrollBox* ScrollBox_Radiogram; // 0x2b0
	UTextBlock* TextBlock; // 0x2b8
	UTextBlock* TextBlock_3; // 0x2c0
	UTextBlock* TextBlock_61; // 0x2c8
	UWBP_Button_UI_C* WBP_Button_Back; // 0x2d0
	UWBP_Button_UI_C* WBP_Button_Close; // 0x2d8
	UWBP_MainFrame_C* WBP_MainFrame; // 0x2e0
	UWidgetSwitcher* WidgetSwitcher_Radiogram; // 0x2e8
	UOverlay* WS_Radiogram_FrontPage; // 0x2f0
	UObjectiveSystemManagerComponent_C* ObjectiveSystem; // 0x2f8
	FS_RadiogramGuide CurrentRadiogramGuide; // 0x300
	FText FromText; // 0x3e0
	bool bFrontPage; // 0x3f8
	TArray<FS_TutorialShowingRadiogram> StackSummary; // 0x400
};

struct UInterpTrackSound : UInterpTrackVectorBase {
	TArray<FSoundTrackKey> Sounds; // 0x90
	char bPlayOnReverse : 1; // 0xa0
	char bContinueSoundOnMatineeEnd : 1; // 0xa0
	char bSuppressSubtitles : 1; // 0xa0
	char bTreatAsDialogue : 1; // 0xa0
	char bAttach : 1; // 0xa0
};

struct UTexture2DDynamic : UTexture {
	EPixelFormat Format; // 0xe0
};

struct UWBP_HUD_Voice_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Talking; // 0x268
	UBorder* Border_1; // 0x270
	UImage* Image_Disabled; // 0x278
	UImage* Image_Mic; // 0x280
	UImage* Image_On; // 0x288
	UThrobber* Throbber_107; // 0x290
	UWBP_Key_C* WBP_Key_72; // 0x298
	EVivoxChannel VoiceInputChannel; // 0x2a0
	bool bMuted; // 0x2a1
	bool bAttempting; // 0x2a2
	FText Tooltip; // 0x2a8
	UWBP_UI_Tooltip_TextOnly_C* WBP_Tooltip; // 0x2c0
};

struct UGizmoBoxComponent : UGizmoBaseComponent {
	FVector Origin; // 0x460
	FQuat Rotation; // 0x470
	FVector Dimensions; // 0x480
	float LineThickness; // 0x48c
	bool bRemoveHiddenLines; // 0x490
	bool bEnableAxisFlip; // 0x491
};

struct UFAI_BTDecorator_CanAttack_C : UBTDecorator_BlueprintBase {
	FBlackboardKeySelector KEYTargetActor; // 0xa0
};

struct UDemoNetDriver : UNetDriver {
	TMap<FString, FRollbackNetStartupActorInfo> RollbackNetStartupActors; // 0x868
	float CheckpointSaveMaxMSPerFrame; // 0xa14
	TArray<FMulticastRecordOptions> MulticastRecordOptions; // 0xa38
	bool bIsLocalReplay; // 0xa48
	TArray<APlayerController*> SpectatorControllers; // 0xa50
};

struct ULowEntryByteDataWriter : UObject {
	TArray<char> Bytes; // 0x28
};

struct UBP_KeyMapping_C : UObject {
	FString Name; // 0x28
	float Scale; // 0x38
	UBP_KeyCombination_C* Primary Combination; // 0x40
	UBP_KeyCombination_C* Secondary Combination; // 0x48
	UBP_KeyAction_C* Parent Action; // 0x50
	FText Display Name; // 0x58
	FText Display Description; // 0x70
};

struct UWBP_Functionality_TransferTerrasite_Resource_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* TextBlock_198; // 0x268
	UWBP_Slot_Display_C* WBP_Slot_Display; // 0x270
	UWBP_UI_SlotHovering_C* WBP_UI_SlotHovering; // 0x278
	UBP_PlayerInventoryComponent_C* InventoryComponent; // 0x280
	FItemInventory Item; // 0x288
};

struct UWBP_MapMarker_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Hovered; // 0x268
	UBorder* Border; // 0x270
	UImage* Image; // 0x278
	UImage* RangeImage; // 0x280
	UTextBlock* Text; // 0x288
	bool bInteraction; // 0x290
	bool bTooltip; // 0x291
	FSlateBrush Image Brush; // 0x298
	FWidgetTransform Image Transform; // 0x320
	UC_Manager-WorldMap_C* WorldMapManager; // 0x340
	FSlateFontInfo Text Font; // 0x348
	FWidgetTransform Text Transform; // 0x3a0
	FSlateColor Text Color and Opacity; // 0x3c0
	bool bRange; // 0x3e8
	FSlateBrush Range Brush; // 0x3f0
	UWBP_MapMarkerTooltip_C* TooltipRef; // 0x478
	bool bHovering; // 0x480
	bool bDragged; // 0x481
	bool bLeftMouseDown; // 0x482
	FMulticastInlineDelegate OnMouseButtonUpOnMap; // 0x488
	FMulticastInlineDelegate OnMouseButtonDownOnMap; // 0x498
};

struct UCameraAnim : UObject {
	UInterpGroup* CameraInterpGroup; // 0x28
	float AnimLength; // 0x30
	FBox BoundingBox; // 0x34
	char bRelativeToInitialTransform : 1; // 0x50
	char bRelativeToInitialFOV : 1; // 0x50
	float BaseFOV; // 0x54
	FPostProcessSettings BasePostProcessSettings; // 0x60
	float BasePostProcessBlendWeight; // 0x5b0
};

struct UAKData : UDataAsset {
	UAkSwitchValue* SwitchValue; // 0x30
};

struct UWBP_RadiogramConvertListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWBP_RadiogramListing_C* ConvertPlace; // 0x268
	UImage* Image_46; // 0x270
	UOverlay* Overlay_Required; // 0x278
	UOverlay* Overlay_Result; // 0x280
	UWidgetSwitcher* WidgetSwitcher_65; // 0x288
	UWrapBox* WrapBox_Requirement; // 0x290
	UWBP_Main_Radiogram_C* Radiogram Main; // 0x298
	int32_t MaterialUID; // 0x2a0
	int32_t targetuid; // 0x2a4
	int32_t ConvertUID; // 0x2a8
};

struct UCheatManager : UObject {
	ADebugCameraController* DebugCameraControllerRef; // 0x28
	ADebugCameraController* DebugCameraControllerClass; // 0x30
};

struct AAutoShapeRemoverInEditorActor : AActor {
	char bIsVisibleInEditor : 1; // 0x220
};

struct UTextRenderComponent : UPrimitiveComponent {
	FText Text; // 0x440
	UMaterialInterface* TextMaterial; // 0x458
	UFont* Font; // 0x460
	EHorizTextAligment HorizontalAlignment; // 0x468
	EVerticalTextAligment VerticalAlignment; // 0x469
	FColor TextRenderColor; // 0x46c
	float XScale; // 0x470
	float YScale; // 0x474
	float WorldSize; // 0x478
	float InvDefaultSize; // 0x47c
	float HorizSpacingAdjust; // 0x480
	float VertSpacingAdjust; // 0x484
	char bAlwaysRenderAsText : 1; // 0x488
};

struct UMaterialExpressionReflectionVectorWS : UMaterialExpression {
	FExpressionInput CustomWorldNormal; // 0x40
	char bNormalizeCustomWorldNormal : 1; // 0x54
};

struct UInventoryComponentBase : UActorComponent {
	bool ArrayCreated; // 0xb0
	int32_t InventorySlotCount; // 0xb4
	TArray<FItemInventory> ItemInventoryArray; // 0xb8
	TArray<FWeaponInventory> WeaponInventoryArray; // 0xc8
	TArray<FConvertInventory> ConvertInventoryArray; // 0xd8
};

struct UDummySequenceAsset : UDataAsset {
	FText Description; // 0x30
	TArray<FDummySequenceMovment> MovementSequence; // 0x48
	TArray<FDummySequenceAction> ActionSequence; // 0x58
};

struct UClothPhysicalMeshDataNv_Legacy : UClothPhysicalMeshDataBase_Legacy {
	TArray<float> MaxDistances; // 0xe0
	TArray<float> BackstopDistances; // 0xf0
	TArray<float> BackstopRadiuses; // 0x100
	TArray<float> AnimDriveMultipliers; // 0x110
};

struct UBP_LearnChargePunch_C : UBP_MachineArmAbilityObjectBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x40
};

struct ULevelSequence : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x68
	FLevelSequenceObjectReferenceMap ObjectReferences; // 0x70
	FLevelSequenceBindingReferences BindingReferences; // 0xc0
	TMap<FString, FLevelSequenceObject> PossessedObjects; // 0x160
	UObject* DirectorClass; // 0x1b0
	TArray<UAssetUserData*> AssetUserData; // 0x1b8
};

struct UDestroySessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UWBP_Functionality_ConversionSlot_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWBP_Slot_Inventory_C* InventorySlot; // 0x268
	UTextBlock* SmeltingText; // 0x270
	UBP_PlayerInventoryComponent_C* Player Inventory Component; // 0x278
	float Timer Length; // 0x280
	float Current Time; // 0x284
	FTimerHandle Timer Handle; // 0x288
	float Resume Timer Length; // 0x290
	UBP_ConvertInventoryComponent_C* TargetConvertInventory; // 0x298
	int32_t SlotIdx; // 0x2a0
	E_ConvertType ConvertType; // 0x2a4
};

struct UMasterDamageType_C : UDamageType {
	FText Name; // 0x40
	E_DamageType Type; // 0x58
	FText DeadTextFormat; // 0x60
	FText DeadTextFormat_ThirdPerson; // 0x78
	float BuildPartDamageMultiply; // 0x90
	UTexture2D* Icon; // 0x98
	UAkAudioEvent* CharacterHurtSound; // 0xa0
	bool bStaticCameraShake; // 0xa8
	float StaticCameraShakeForce; // 0xac
};

struct UWBP_Radiogram_4010102_C : UUserWidget {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x260
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x268
	UWBP_RadiogramListing_C* WBP_RadiogramListing_2; // 0x270
};

struct UWBP_CraftingV2_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Open; // 0x268
	UWBP_Main_Crafting_InfoV2_C* WBP_Main_Crafting_InfoV2; // 0x270
	UWBP_Main_CraftingV2_C* WBP_Main_CraftingV2; // 0x278
	UWBP_Main_CraftingV2_Queue_C* WBP_Main_CraftingV2_Queue; // 0x280
	UBP_PlayerInventoryComponent_C* TargetPlayerInventory; // 0x288
	UBP_CraftingComponent_C* TargetCraftingComponent; // 0x290
	UWBP_Main_Crafting_ListingV2_C* CurrentCraftingListing; // 0x298
	FS_CraftingRecipeData Crafting Recipe In; // 0x2a0
};

struct UMaterialExpressionRuntimeVirtualTextureOutput : UMaterialExpressionCustomOutput {
	FExpressionInput BaseColor; // 0x40
	FExpressionInput Specular; // 0x54
	FExpressionInput Roughness; // 0x68
	FExpressionInput Normal; // 0x7c
	FExpressionInput WorldHeight; // 0x90
	FExpressionInput Opacity; // 0xa4
	FExpressionInput Mask; // 0xb8
};

struct UBTService_BlueprintBase : UBTService {
	AAIController* AIOwner; // 0x70
	AActor* ActorOwner; // 0x78
	char bShowPropertyDetails : 1; // 0x90
	char bShowEventDetails : 1; // 0x90
};

struct ULocationServicesImpl : UObject {
	FMulticastInlineDelegate OnLocationChanged; // 0x28
};

struct ABP_SupplyDrop_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UChildActorComponent* SpotEventDialogue; // 0x228
	USphereComponent* Sphere; // 0x230
	UParticleSystemComponent* DropEffect; // 0x238
	UChildActorComponent* Turret; // 0x240
	UChildActorComponent* SupplyBox; // 0x248
	UAudioComponent* smoking_Cue; // 0x250
	UParticleSystemComponent* Smoke; // 0x258
	UBP_WidgetIndicatorComponent_C* BP_WidgetIndicatorComponent; // 0x260
	UBoxComponent* RootBox; // 0x268
	float Timeline_Drop_DropAlpha_2975E7FF4DE41B197FB45CB13DC7DFE5; // 0x270
	ETimelineDirection Timeline_Drop__Direction_2975E7FF4DE41B197FB45CB13DC7DFE5; // 0x274
	UTimelineComponent* Timeline_Drop; // 0x278
	float LifetimeAfterDrop; // 0x280
	FMulticastInlineDelegate OnDroped; // 0x288
	FMulticastInlineDelegate OnOpen; // 0x298
	FSupplyDropInfo DropInfo; // 0x2a8
	FVector StartLocation; // 0x2c4
	float ServerEndTime; // 0x2d0
	float CurrentVelocity; // 0x2d4
	FVector OldLocation; // 0x2d8
};

struct USurvivalVehicleMovementComponent4W : UWheeledVehicleMovementComponent4W {
	int32_t WheelsCount; // 0x408
	bool IsHover; // 0x40c
	TArray<float> WheelShapeRadius; // 0x410
};

struct UParticleModuleLocationPrimitiveTriangle : UParticleModuleLocationBase {
	FRawDistributionVector StartOffset; // 0x30
	FRawDistributionFloat Height; // 0x78
	FRawDistributionFloat Angle; // 0xa8
	FRawDistributionFloat Thickness; // 0xd8
};

struct UCloudWatchDisableInsightRules : UAwsCloudWatchAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UAkSlider : UWidget {
	float Value; // 0x108
	FDelegate ValueDelegate; // 0x10c
	FSliderStyle WidgetStyle; // 0x120
	EOrientation Orientation; // 0x460
	FLinearColor SliderBarColor; // 0x464
	FLinearColor SliderHandleColor; // 0x474
	bool IndentHandle; // 0x484
	bool Locked; // 0x485
	float StepSize; // 0x488
	bool IsFocusable; // 0x48c
	FAkPropertyToControl ThePropertyToControl; // 0x490
	FAkWwiseItemToControl ItemToControl; // 0x4a0
	FMulticastInlineDelegate OnValueChanged; // 0x4e0
	FMulticastInlineDelegate OnItemDropped; // 0x4f0
	FMulticastInlineDelegate OnPropertyDropped; // 0x500
};

struct UNiagaraParameterCollectionInstance : UObject {
	UNiagaraParameterCollection* Collection; // 0x28
	TArray<FNiagaraVariable> OverridenParameters; // 0x30
	FNiagaraParameterStore ParameterStorage; // 0x40
};

struct UBP_MachineArmAbilityComponent_C : UMachineArmAbilityComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x108
	FString UID; // 0x110
	bool CachedUnlockedEscapeCode; // 0x120
};

struct ALevelVariantSetsActor : AActor {
	FSoftObjectPath LevelVariantSets; // 0x220
};

struct UMaterialExpressionTransformPosition : UMaterialExpression {
	FExpressionInput Input; // 0x40
	EMaterialPositionTransformSource TransformSourceType; // 0x54
	EMaterialPositionTransformSource TransformType; // 0x55
};

struct UNiagaraComponentPool : UObject {
	TMap<UNiagaraSystem*, FNCPool> WorldParticleSystemPools; // 0x28
};

struct UMovieScene3DConstraintTrack : UMovieSceneTrack {
	TArray<UMovieSceneSection*> ConstraintSections; // 0x78
};

struct ULandscapeLayerInfoObject : UObject {
	FName LayerName; // 0x28
	UPhysicalMaterial* PhysMaterial; // 0x30
	float Hardness; // 0x38
	FLinearColor LayerUsageDebugColor; // 0x3c
};

struct UPropertyValue : UObject {
	TArray<TFieldPath<FProperty>> Properties; // 0x88
	TArray<int32_t> PropertyIndices; // 0x98
	TArray<FCapturedPropSegment> CapturedPropSegments; // 0xa8
	FString FullDisplayString; // 0xb8
	FName PropertySetterName; // 0xc8
	TMap<FString, FString> PropertySetterParameterDefaults; // 0xd0
	bool bHasRecordedData; // 0x120
	UObject* LeafPropertyClass; // 0x128
	TArray<char> ValueBytes; // 0x138
	EPropertyValueCategory PropCategory; // 0x148
};

struct UMaterialExpressionIf : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	FExpressionInput AGreaterThanB; // 0x68
	FExpressionInput AEqualsB; // 0x7c
	FExpressionInput ALessThanB; // 0x90
	float EqualsThreshold; // 0xa4
	float ConstB; // 0xa8
	float ConstAEqualsB; // 0xac
};

struct UNavModifierComponent : UNavRelevantComponent {
	UNavArea* AreaClass; // 0xe0
	FVector FailsafeExtent; // 0xe8
	char bIncludeAgentHeight : 1; // 0xf4
};

struct UBP_GameDataManager_C : UGameDataManager {
	FPointerToUberGraphFrame UberGraphFrame; // 0x70
	UDataTable* ConsumeDataTable; // 0x78
	UDataTable* ConvertDataTable; // 0x80
	UDataTable* CraftRecipeDataTable; // 0x88
	UDataTable* ResourceDataTable; // 0x90
	UDataTable* ProtocolDataTable; // 0x98
	UDataTable* MemoryCardAbilityDataTable; // 0xa0
	UDataTable* RangeWeaponDatatTable; // 0xa8
	UDataTable* MeleeWeaponDatatTable; // 0xb0
	UDataTable* AttachmentScopeDT; // 0xb8
	UDataTable* AttachmentMagazineDT; // 0xc0
	UDataTable* AttachmentForeGripDT; // 0xc8
	UDataTable* AttachmentMuzzleDT; // 0xd0
	FIntValueFromDataTable RuntimeResourceMultiply; // 0xd8
	FFloatValueFromDataTable RuntimePVPDamageMultiply; // 0x100
	FFloatValueFromDataTable RuntimePVEDamageMultiply; // 0x128
	UDataTable* RepairInfoDataTable; // 0x150
	UDataTable* NPCDataTable; // 0x158
	UDataTable* RetrieveRegisterDataTable; // 0x160
	UDataTable* MachineArmAbilityDT; // 0x168
	UDataTable* RadiogramDataTable; // 0x170
	TMap<int32_t, FIntArray> ItemGatherRefrenceData; // 0x178
	TMap<int32_t, FIntArray> ItemDropRefrenceData; // 0x1c8
	UDataTable* VehicleInfoDataTable; // 0x218
	UDataTable* ConvertSourceDataTable; // 0x220
	TMap<int32_t, FS_VectorArray> ResourceSpawnData; // 0x228
	TMap<int32_t, FIntArray> SpawnArray; // 0x278
	TMap<int32_t, UTexture2DDynamic*> ResourceSpawnSummaryTexture; // 0x2c8
	int32_t MapSize; // 0x318
	int32_t Grid Size; // 0x31c
	bool InitJSON; // 0x320
	TMap<int32_t, FIntArray> ConvertSummaryData; // 0x328
	TMap<E_ConvertType, FIntArray> ConvertBuildpartSummaryData; // 0x378
	TMap<int32_t, FS_VectorArray> NPCSpawnDataMap; // 0x3c8
	UDataTable* TerraShopDataTable; // 0x418
	TArray<FTerraShopDataInfo> DailyMerchandiseCandidateList; // 0x420
	TArray<FTerraShopMerchandise> SessionMerchandiseList; // 0x430
};

struct UWBP_AdminConsole_UserListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_1; // 0x268
	UImage* Image_Selected; // 0x270
	UTextBlock* NickName; // 0x278
	UTextBlock* UIDText; // 0x280
	UWBP_UI_ListingHovering_C* WBP_UI_ListingHovering; // 0x288
	FMulticastInlineDelegate ItemClicked; // 0x290
	FString UID; // 0x2a0
	FString LastNickname; // 0x2b0
};

struct UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x80
	bool bUseLegacySectionIndexBlend; // 0x90
	FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams; // 0x98
	bool bBlendFirstChildOfRoot; // 0xc8
};

struct ASessionDataManager : AActor {
	TMap<FString, FMailDataArray> UserMailDataMap; // 0x220
	TMap<FString, FUserSessionInfo> UserSessionInfoMap; // 0x270
	TMap<FString, FIntArray> UserCraftNotifyList; // 0x2c0
	TMap<FString, FUserTerraPointInfo> UserTerraPointInfoList; // 0x310
};

struct UBTTask_LookAround_Juggernaut_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	FBlackboardKeySelector IsLookAround; // 0xb0
};

struct UAISubsystem : UObject {
	UAISystem* AISystem; // 0x30
};

struct UCameraAnimInst : UObject {
	UCameraAnim* CamAnim; // 0x28
	UInterpGroupInst* InterpGroupInst; // 0x30
	float PlayRate; // 0x50
	UInterpTrackMove* MoveTrack; // 0x68
	UInterpTrackInstMove* MoveInst; // 0x70
	ECameraShakePlaySpace PlaySpace; // 0x78
};

struct ASphereReflectionCapture : AReflectionCapture {
	UDrawSphereComponent* DrawCaptureRadius; // 0x228
};

struct ULandscapeMeshProxyComponent : UStaticMeshComponent {
	FGuid LandscapeGuid; // 0x4d0
	TArray<FIntPoint> ProxyComponentBases; // 0x4e0
	int8_t ProxyLOD; // 0x4f0
};

struct ABP_lantern_landBuildpart_C : ABP_StaticMeshBuildPartBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x860
	UPointLightComponent* PointLight; // 0x868
	bool SwichOn; // 0x870
};

struct UNiagaraDataInterfaceArrayFloat4 : UNiagaraDataInterfaceArray {
	TArray<FVector4> FloatData; // 0x50
};

struct ARMNavMeshPreviewInvoker : AActor {
	UCapsuleComponent* CapsuleComponent; // 0x220
	URMNavigationInvokerComponent* InvokerComponent; // 0x228
};

struct USurvivalWebsocketConnectionClient : USurvivalWebsocketConnectionProto {
	FWebsocketClientConnectionInfo ConnectionInfo; // 0x238
};

struct ABP_RockyElk_C : AFieldNPC_BaseCharacter_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xe48
	USkeletalMeshComponent* Antlers; // 0xe50
	UCapsuleComponent* Capsule_1; // 0xe58
	USphereComponent* HitCollision; // 0xe60
	FVector LookAtLocation; // 0xe68
};

struct UWBP_Main_MachineArmListing_S_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_Base; // 0x268
	UImage* Grade_Color; // 0x270
	UImage* Image_Next; // 0x278
	UVerticalBox* MaterialList; // 0x280
	UImage* PassiveIcon; // 0x288
	URichTextBlock* Text_Description; // 0x290
	UTextBlock* TextBlock_80; // 0x298
	UButton* Upgrade; // 0x2a0
	UTextBlock* UpgradeText; // 0x2a8
	FMachinArmAbilityItem Data; // 0x2b0
	bool IsLastItem; // 0x2f8
	int32_t Grade; // 0x2fc
	FText Description; // 0x300
	int32_t MainKey; // 0x318
	int32_t SubKey; // 0x31c
	bool IsLocked; // 0x320
	E_MachineArmAbilityItemUIState State; // 0x321
};

struct UMovieScene3DConstraintSection : UMovieSceneSection {
	FGuid ConstraintId; // 0xe8
	FMovieSceneObjectBindingID ConstraintBindingID; // 0xf8
};

struct UScrollBarWidgetStyle : USlateWidgetStyleContainerBase {
	FScrollBarStyle ScrollBarStyle; // 0x30
};

struct UStaticMeshSimulationComponent : UActorComponent {
	bool Simulating; // 0xb8
	bool bNotifyCollisions; // 0xb9
	EObjectStateTypeEnum ObjectType; // 0xba
	float Mass; // 0xbc
	ECollisionTypeEnum CollisionType; // 0xc0
	EImplicitTypeEnum ImplicitType; // 0xc1
	int32_t MinLevelSetResolution; // 0xc4
	int32_t MaxLevelSetResolution; // 0xc8
	EInitialVelocityTypeEnum InitialVelocityType; // 0xcc
	FVector InitialLinearVelocity; // 0xd0
	FVector InitialAngularVelocity; // 0xdc
	float DamageThreshold; // 0xe8
	UChaosPhysicalMaterial* PhysicalMaterial; // 0xf0
	AChaosSolverActor* ChaosSolverActor; // 0xf8
	FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x100
	TArray<UPrimitiveComponent*> SimulatedComponents; // 0x120
};

struct UMovieSceneNiagaraVectorParameterTrack : UMovieSceneNiagaraParameterTrack {
	int32_t ChannelsUsed; // 0xb0
};

struct UBTDecorator_Cooldown : UBTDecorator {
	float CoolDownTime; // 0x68
};

struct UBP_TutorialHandler_C : UCustomReplicationActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb8
	TArray<FS_TutorialGoalData> CurrentTutorialGoal; // 0xc0
	int32_t CurrentTutorialStep; // 0xd0
	TArray<FS_TutorialGoalData> CurrentTutorialProgress; // 0xd8
	ABP_TutorialManager_C* Tutorial Manager; // 0xe8
	bool TutorialSystemBegin; // 0xf0
	bool TutorialFinished; // 0xf1
	bool InitTutorialHandler; // 0xf2
	bool PendingTutorial; // 0xf3
	float EndDuration; // 0xf4
	bool Waiting; // 0xf8
};

struct UInterpTrackInstEvent : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
};

struct USoundConcurrency : UObject {
	FSoundConcurrencySettings Concurrency; // 0x28
};

struct UNiagaraDataInterfaceRenderTargetVolume : UNiagaraDataInterfaceRWBase {
	FIntVector Size; // 0xd8
	ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe4
	char bOverrideFormat : 1; // 0xe5
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8
	TMap<uint64_t, UTextureRenderTargetVolume*> ManagedRenderTargets; // 0x108
};

struct UMorphTarget : UObject {
	USkeletalMesh* BaseSkelMesh; // 0x28
};

struct UCloudWatchEnableInsightRules : UAwsCloudWatchAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UAndroidPermissionCallbackProxy : UObject {
	FMulticastInlineDelegate OnPermissionsGrantedDynamicDelegate; // 0x28
};

struct UWBP_HUD_Held_InteractionListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_1; // 0x268
	UInvalidationBox* InvalidationBox_1; // 0x270
	UTextBlock* Text_Text; // 0x278
	UWBP_Key_C* WBP_Key; // 0x280
	FText Text; // 0x288
	bool Enabled; // 0x2a0
	EnumKeyInputType KeyInputType; // 0x2a1
	FString Key; // 0x2a8
};

struct UAISense : UObject {
	float DefaultExpirationAge; // 0x28
	EAISenseNotifyType NotifyType; // 0x2c
	char bWantsNewPawnNotification : 1; // 0x30
	char bAutoRegisterAllPawnsAsSources : 1; // 0x30
	UAIPerceptionSystem* PerceptionSystemInstance; // 0x38
};

struct ABrush : AActor {
	EBrushType BrushType; // 0x220
	FColor BrushColor; // 0x224
	int32_t PolyFlags; // 0x228
	char bColored : 1; // 0x22c
	char bSolidWhenSelected : 1; // 0x22c
	char bPlaceableFromClassBrowser : 1; // 0x22c
	char bNotForClientOrServer : 1; // 0x22c
	UModel* Brush; // 0x230
	UBrushComponent* BrushComponent; // 0x238
	char bInManipulation : 1; // 0x240
	TArray<FGeomSelection> SavedSelections; // 0x248
};

struct UTextureRenderTargetCube : UTextureRenderTarget {
	int32_t SizeX; // 0xe0
	FLinearColor ClearColor; // 0xe4
	EPixelFormat OverrideFormat; // 0xf4
	char bHDR : 1; // 0xf5
	char bForceLinearGamma : 1; // 0xf5
};

struct UBTTask_BlackboardBase : UBTTaskNode {
	FBlackboardKeySelector BlackboardKey; // 0x70
};

struct UMaterialFunction : UMaterialFunctionInterface {
	FString Description; // 0x40
	char bExposeToLibrary : 1; // 0x50
	char bPrefixParameterNames : 1; // 0x50
};

struct ABP_HousingTurret_C : ABP_TurretBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x400
	FFloatValueFromDataTable PVPDamageMultiplier; // 0x408
};

struct UShapeComponent : UPrimitiveComponent {
	UBodySetup* ShapeBodySetup; // 0x440
	UNavAreaBase* AreaClass; // 0x448
	FColor ShapeColor; // 0x450
	char bDrawOnlyIfSelected : 1; // 0x454
	char bShouldCollideWhenPlacing : 1; // 0x454
	char bDynamicObstacle : 1; // 0x454
};

struct UParticleModuleVectorFieldGlobal : UParticleModuleVectorFieldBase {
	char bOverrideGlobalVectorFieldTightness : 1; // 0x30
	float GlobalVectorFieldScale; // 0x34
	float GlobalVectorFieldTightness; // 0x38
};

struct UMaterialExpressionTextureCoordinate : UMaterialExpression {
	int32_t CoordinateIndex; // 0x40
	float UTiling; // 0x44
	float VTiling; // 0x48
	char UnMirrorU : 1; // 0x4c
	char UnMirrorV : 1; // 0x4c
};

struct ADatasmithAreaLightActor : AActor {
	EDatasmithAreaLightActorType LightType; // 0x220
	EDatasmithAreaLightActorShape LightShape; // 0x221
	FVector2D Dimensions; // 0x224
	float Intensity; // 0x22c
	ELightUnits IntensityUnits; // 0x230
	FLinearColor Color; // 0x234
	float Temperature; // 0x244
	UTextureLightProfile* IESTexture; // 0x248
	bool bUseIESBrightness; // 0x250
	float IESBrightnessScale; // 0x254
	FRotator Rotation; // 0x258
	float SourceRadius; // 0x264
	float SourceLength; // 0x268
	float AttenuationRadius; // 0x26c
	float SpotlightInnerAngle; // 0x270
	float SpotlightOuterAngle; // 0x274
};

struct UWindowTitleBarArea : UContentWidget {
	bool bWindowButtonsEnabled; // 0x120
	bool bDoubleClickTogglesFullscreen; // 0x121
};

struct UGameMapsSettings : UObject {
	FString LocalMapOptions; // 0x28
	FSoftObjectPath TransitionMap; // 0x38
	bool bUseSplitscreen; // 0x50
	ETwoPlayerSplitScreenType TwoPlayerSplitscreenLayout; // 0x51
	EThreePlayerSplitScreenType ThreePlayerSplitscreenLayout; // 0x52
	EFourPlayerSplitScreenType FourPlayerSplitscreenLayout; // 0x53
	bool bOffsetPlayerGamepadIds; // 0x54
	FSoftClassPath GameInstanceClass; // 0x58
	FSoftObjectPath GameDefaultMap; // 0x70
	FSoftObjectPath ServerDefaultMap; // 0x88
	FSoftClassPath GlobalDefaultGameMode; // 0xa0
	FSoftClassPath GlobalDefaultServerGameMode; // 0xb8
	TArray<FGameModeName> GameModeMapPrefixes; // 0xd0
	TArray<FGameModeName> GameModeClassAliases; // 0xe0
};

struct UCloudWatchLogsDescribeQueryDefinitions : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UEnvQueryTest_Trace : UEnvQueryTest {
	FEnvTraceData TraceData; // 0x1f8
	FAIDataProviderBoolValue TraceFromContext; // 0x228
	FAIDataProviderFloatValue ItemHeightOffset; // 0x260
	FAIDataProviderFloatValue ContextHeightOffset; // 0x298
	UEnvQueryContext* Context; // 0x2d0
};

struct ABP_Juggernaut_Type00_C : ACommonAI_BaseAICharacter_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xe28
	UArrowComponent* Arrow7; // 0xe30
	UArrowComponent* Arrow6; // 0xe38
	UArrowComponent* Arrow5; // 0xe40
	UArrowComponent* Arrow4; // 0xe48
	UParticleSystemComponent* DamagedFx_4; // 0xe50
	UParticleSystemComponent* DamagedFx_3; // 0xe58
	UParticleSystemComponent* DamagedFx_2; // 0xe60
	UArrowComponent* Arrow3; // 0xe68
	UArrowComponent* Point3; // 0xe70
	UArrowComponent* Point2; // 0xe78
	UArrowComponent* Point1; // 0xe80
	UArrowComponent* Point0; // 0xe88
	USceneComponent* JuniorSpawner; // 0xe90
	UCapsuleComponent* JumpAttackCollision; // 0xe98
	UArrowComponent* Arrow1; // 0xea0
	UArrowComponent* Arrow2; // 0xea8
	USphereComponent* Barrier; // 0xeb0
	float Timeline_LookAround_Opacity_68D410C342179F17B84CA28F30AD58DD; // 0xeb8
	ETimelineDirection Timeline_LookAround__Direction_68D410C342179F17B84CA28F30AD58DD; // 0xebc
	UTimelineComponent* Timeline_LookAround; // 0xec0
	UAnimMontage* SpawnAnimation; // 0xec8
	bool IsPlayTurnAnimation; // 0xed0
	AActor* TargetActor; // 0xed8
	bool IsPlayBarrierAnimation; // 0xee0
	bool IsHoverAnimation; // 0xee1
	bool IsPlaySpawnAnimation; // 0xee2
	bool IsRep_Dead; // 0xee3
	bool IsReturnToSpawnPoint; // 0xee4
	bool IsArriveToSpawnPoint; // 0xee5
	bool IsVisibility; // 0xee6
	bool IsGroggy; // 0xee7
	int32_t GroggyCount; // 0xee8
	TArray<UArrowComponent*> JuniorSpawnPoint; // 0xef0
	float JuniorSpawnDelay; // 0xf00
	TArray<float> GroggyHPCondition; // 0xf08
	bool IsSpawnJunior; // 0xf18
	TArray<ABP_Juggernaut_Junior_C*> JuniorActors; // 0xf20
	bool IsPlayDeadEvent; // 0xf30
	FDamageEvent DamageEvent; // 0xf38
	AController* killer; // 0xf48
	AActor* DamageCauser; // 0xf50
	TArray<ABP_Juggernaut_Hover_C*> HoverActors; // 0xf58
	UParticleSystem* JuniorDeadEffect; // 0xf68
	TArray<float> AddFractureCondition; // 0xf70
	bool IsWalkingAttack; // 0xf80
	float DelayBattleCondition; // 0xf84
	bool IsBattleCondition; // 0xf88
	TArray<FTransform> RespawnJuniorLocation; // 0xf90
	bool DebugAttackDistance; // 0xfa0
	float AttackDistance_Near; // 0xfa4
	float AttackDistance_Middle; // 0xfa8
	float AttackDistance_Far; // 0xfac
	bool IsExecutionAnimation; // 0xfb0
	float AddMeshLocationZ; // 0xfb4
	bool IsPlayJumpAnimation; // 0xfb8
};

struct UBP_StorageInventoryComponent_C : UBP_InventoryComponentBase_C {
	TArray<FDataTableRowHandle> AllowItemList; // 0x138
	FRandomItemGenerate RandomItemGenerate; // 0x148
	bool AllowGetAllItemShortcut; // 0x180
	TArray<FS_StorageInventoryLog> LogArray; // 0x188
	int32_t MaximumLogCount; // 0x198
	FMulticastInlineDelegate OnUpdateLog; // 0x1a0
	bool bUseLogSystem; // 0x1b0
};

struct ABP_PlayerSpawnPoint_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UChildActorComponent* BP_BuildingBlockZone; // 0x228
	UBillboardComponent* Billboard; // 0x230
	USkeletalMeshComponent* pod; // 0x238
	UCapsuleComponent* Capsule; // 0x240
	USceneComponent* DefaultSceneRoot; // 0x248
	E_SpawnArea SpawnZone; // 0x250
	FTransform PODSpawnTransform; // 0x260
};

struct URichTextBlockImageDecorator : URichTextBlockDecorator {
	UDataTable* ImageSet; // 0x28
};

struct UWBP_HUD_Crosshair_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Crosshair; // 0x268
	float Current Spread; // 0x270
	UBP_PlayerInventoryComponent_C* Player Inventory Component; // 0x278
	UMaterialInstanceDynamic* MI_Crosshair; // 0x280
	ESlateVisibility In Visibility; // 0x288
	bool Aimed; // 0x289
};

struct ATextRenderActor : AActor {
	UTextRenderComponent* TextRender; // 0x220
};

struct UPlayer : UObject {
	APlayerController* PlayerController; // 0x30
	int32_t CurrentNetSpeed; // 0x38
	int32_t ConfiguredInternetSpeed; // 0x3c
	int32_t ConfiguredLanSpeed; // 0x40
};

struct ABP_Juggernaut_Junior_C : ACommonAI_BaseAICharacter_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xe28
	UParticleSystemComponent* DeathEffect; // 0xe30
	UCapsuleComponent* JumpAttackCollision; // 0xe38
	bool IsPlaySpawnAnimation; // 0xe40
	bool IsPlayDeathEffect; // 0xe41
	TArray<float> AddFractureCondition; // 0xe48
	bool IsReturnToSpawnPoint; // 0xe58
	bool IsArriveToSpawnPoint; // 0xe59
	AActor* spawner; // 0xe60
	bool IsVisibility; // 0xe68
	bool IsJumpAttack; // 0xe69
};

struct UNiagaraDataInterfaceTexture : UNiagaraDataInterface {
	UTexture* Texture; // 0x38
};

struct UCloudWatchLogsGetLogGroupFields : UAwsCloudWatchLogsAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UBackgroundBlurSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UBrushStampIndicator : UInteractiveGizmo {
	float BrushRadius; // 0x38
	float BrushFalloff; // 0x3c
	FVector BrushPosition; // 0x40
	FVector BrushNormal; // 0x4c
	bool bDrawIndicatorLines; // 0x58
	bool bDrawRadiusCircle; // 0x59
	int32_t SampleStepCount; // 0x5c
	FLinearColor LineColor; // 0x60
	float LineThickness; // 0x70
	bool bDepthTested; // 0x74
	bool bDrawSecondaryLines; // 0x75
	float SecondaryLineThickness; // 0x78
	FLinearColor SecondaryLineColor; // 0x7c
	UPrimitiveComponent* AttachedComponent; // 0x90
};

struct UWBP_Main_Radiogram_TreeListing_M_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_Ring; // 0x268
	UImage* Image_39; // 0x270
	UImage* Image_Children; // 0x278
	UImage* Image_Children_2; // 0x280
	UOverlay* Overlay_1; // 0x288
	UTextBlock* SubName; // 0x290
	UTextBlock* SubName_2; // 0x298
	UWrapBox* WrapBox_List_Small_2; // 0x2a0
	UObjectiveSystemManagerComponent_C* ObjectiveSystemComponent; // 0x2a8
	FText SubcategoryName; // 0x2b0
};

struct USQSChangeMessageVisibility : UAwsSQSAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UParticleEmitter : UObject {
	FName EmitterName; // 0x28
	int32_t SubUVDataOffset; // 0x30
	EEmitterRenderMode EmitterRenderMode; // 0x34
	EParticleSignificanceLevel SignificanceLevel; // 0x35
	char bUseLegacySpawningBehavior : 1; // 0x37
	char ConvertedModules : 1; // 0x37
	char bIsSoloing : 1; // 0x37
	char bCookedOut : 1; // 0x37
	char bDisabledLODsKeepEmitterAlive : 1; // 0x37
	char bDisableWhenInsignficant : 1; // 0x38
	TArray<UParticleLODLevel*> LODLevels; // 0x40
	int32_t PeakActiveParticles; // 0x50
	int32_t InitialAllocationCount; // 0x54
	float QualityLevelSpawnRateScale; // 0x58
	uint32_t DetailModeBitmask; // 0x5c
};

struct UXRVisualizationLoadHelper : UObject {
	UStaticMesh* GenericHMD; // 0x28
	UStaticMesh* OculusControllerMesh; // 0x30
	UStaticMesh* ViveControllerMesh; // 0x38
	UStaticMesh* STEMControllerMesh; // 0x40
};

struct UBP_IncreaseMaxHP_C : UBP_MachineArmAbilityObjectBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x40
	float HPAmount; // 0x48
};

struct URMNPC_AnimBP_Elk_M_C : UNPCAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x310
	FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2; // 0x318
	FAnimNode_LookAt AnimGraphNode_LookAt; // 0x430
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x5e0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x600
	FAnimNode_Root AnimGraphNode_Root_3; // 0x620
	FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x650
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x768
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x788
	FAnimNode_DragonSpineSolver AnimGraphNode_DragonSpineSolver; // 0x7b0
	FAnimNode_DragonFeetSolver AnimGraphNode_DragonFeetSolver; // 0xf90
	FAnimNode_Root AnimGraphNode_Root_2; // 0x15e0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x1610
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x1638
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x1660
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x1688
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x16b0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x16d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x1700
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x1728
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x1750
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2; // 0x17d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x1898
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x1918
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x19e0
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x1ac8
	FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt; // 0x1af8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x1b98
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x1c18
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x1c98
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1cc8
	FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer_4; // 0x1cf0
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x1d68
	FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer_3; // 0x1d98
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1e10
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1e40
	FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer_2; // 0x1ef0
	FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer; // 0x1fa0
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2050
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x2098
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x2138
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x21d8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x2330
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x2358
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x2380
	FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x2420
	FAnimNode_Root AnimGraphNode_Root; // 0x25f8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x2628
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x26e8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x27a8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x2900
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x2928
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2950
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x29d0
	FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer_2; // 0x2a70
	FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer; // 0x2ae8
	float Speed; // 0x2b60
	TArray<FDragonData_FootData> FootIKInfo; // 0x2b68
	int32_t AnimIdleIndex; // 0x2b78
	bool IsRest; // 0x2b7c
	bool IsDead; // 0x2b7d
	FVector CurrWorldLocationForLookAt; // 0x2b80
	bool CanLookAt; // 0x2b8c
	AActor* TargetActor; // 0x2b90
	bool ServerDead; // 0x2b98
	int32_t DeathAniBlending; // 0x2b9c
};

struct UAkTVOSInitializationSettings : UObject {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkAudioSession AudioSession; // 0x90
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0
	FAkAdvancedInitializationSettings AdvancedSettings; // 0xc8
};

struct USurvivalOutgameSubsystemInitializer : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFail; // 0x40
};

struct USourceEffectPhaserPreset : USoundEffectSourcePreset {
	FSourceEffectPhaserSettings Settings; // 0xa0
};

struct ABP_WaterBottle_C : ABP_FunctionHoldable_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x510
	USkeletalMeshComponent* SkeletalMesh; // 0x518
	float OnceDrinkAmount; // 0x520
	FFloatValueFromDataTable ThirstGainRatioByWater; // 0x528
	bool bIsPolluted; // 0x550
	bool bDropWater; // 0x551
	FTimerHandle DropTimer; // 0x558
	float DropWaterInterval; // 0x560
	float OnceDropAmount; // 0x564
	float DrinkPollutedWaterDamage; // 0x568
	FTimerHandle DropWaterSoundTImer; // 0x570
	EItemOptionType WaterRatioOption; // 0x578
	UMaterialInstanceDynamic* Material; // 0x580
	float PuttingAnimationTime; // 0x588
	UAnimMontage* TP_PuttingAnimation; // 0x590
	UAnimMontage* FP_PuttingAnimation; // 0x598
	float DropAnimation Time; // 0x5a0
	UAnimMontage* TP_DropAnimation; // 0x5a8
	UAnimMontage* FP_DropAnimation; // 0x5b0
	UAnimMontage* Holdable_PuttingAnimation; // 0x5b8
	UAnimMontage* Holdable_DropAnimation; // 0x5c0
	FFloatValueFromDataTable RadiationReduceByWater; // 0x5c8
};

struct UBTTask_PushPawnAction : UBTTask_PawnActionBase {
	UPawnAction* Action; // 0x70
};

struct UWBP_Main_Crafting_ListingV2_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Selected; // 0x268
	UImage* Image_86; // 0x270
	UImage* Image_250; // 0x278
	UImage* Image_Background; // 0x280
	UImage* Image_Icon; // 0x288
	UImage* Image_ItemBG; // 0x290
	UTextBlock* ItemName; // 0x298
	UOverlay* Overlay_Craft; // 0x2a0
	UOverlay* Overlay_Queue; // 0x2a8
	UImage* Selected; // 0x2b0
	UTextBlock* Text_Amount; // 0x2b8
	UTextBlock* Text_Possession; // 0x2c0
	UTextBlock* Text_Progress; // 0x2c8
	UTextBlock* Text_Queue; // 0x2d0
	UTextBlock* Text_State; // 0x2d8
	UTextBlock* Text_Timer; // 0x2e0
	UWBP_Button_UI_C* WBP_Button_Cancel; // 0x2e8
	UWBP_Button_UI_C* WBP_Button_Crafting; // 0x2f0
	UWBP_UI_ListingHovering_C* WBP_UI_ListingHovering; // 0x2f8
	UWidgetSwitcher* WidgetSwitcher_1; // 0x300
	UGridPanel* WS_Craft; // 0x308
	UGridPanel* WS_Queue; // 0x310
	FS_CraftingSlot CraftingQueue; // 0x318
	UBP_PlayerInventoryComponent_C* TargetPlayerInventory; // 0x368
	bool bUseByQueue; // 0x370
	UBP_CraftingComponent_C* TargetCraftingComponent; // 0x378
	FS_CraftingRecipeData CraftingRecipe; // 0x380
	bool IsDoubleClick; // 0x3c0
	bool bCraftingAvailable; // 0x3c1
	FMulticastInlineDelegate RequestRefreshList; // 0x3c8
	UWBP_CraftingV2_C* MainWidget; // 0x3d8
};

struct UPendingNetGame : UObject {
	UNetDriver* NetDriver; // 0x30
	UDemoNetDriver* DemoNetDriver; // 0x38
};

struct UAkSurfaceReflectorSetComponent : UAkAcousticTextureSetComponent {
	char bEnableSurfaceReflectors : 1; // 0x210
	TArray<FAkPoly> AcousticPolys; // 0x218
	char bEnableDiffraction : 1; // 0x228
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x228
	AActor* AssociatedRoom; // 0x230
};

struct UC_Manager-RespawnMap_C : UQuestMapComponent_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	bool MouseWithinBounds; // 0xb8
	FVector2D MouseHitCoords; // 0xbc
	APlayerController* Controller; // 0xc8
	UWBP_HUD_Compass_C* CompassWidget; // 0xd0
	UWBP_RespawnPanel_C* RespawnMapWidget; // 0xd8
	UMaterialInstanceDynamic* WorldMap; // 0xe0
	bool StartZoomedIn; // 0xe8
	float ZoomStep; // 0xec
	float CurrentZoom; // 0xf0
	float ZoomDeadZone; // 0xf4
	float MousePanRate; // 0xf8
	float GamepadPanRate; // 0xfc
	int32_t GamepadCursorSpeed; // 0x100
	FVector2D WorldCenter; // 0x104
	FVector2D WorldDimensions; // 0x10c
	UWBP_MapMarker_Player_C* PlayerMarker; // 0x118
	TArray<AWorldLocation_C*> DiscoveredLocations; // 0x120
	TArray<AWorldLocation_C*> DisplayedLocations; // 0x130
	float MapSizeOffset; // 0x140
	TArray<AActor*> ActorsToIgnore; // 0x148
	float BaseX; // 0x158
	float BaseY; // 0x15c
	float UseX; // 0x160
	float UseY; // 0x164
	float DeadzoneX; // 0x168
	float DeadzoneY; // 0x16c
	FTimerHandle CursorUpdateLoop; // 0x170
	ULocationInfo_Gamepad_C* GamepadTooltip; // 0x178
	bool MapOpen; // 0x180
	bool MouseDown; // 0x181
	bool IsInitialized; // 0x182
	FText reason; // 0x188
	FVector PlayerDeadLocation; // 0x1a0
	float AliveTime; // 0x1ac
	float MaximumZoom; // 0x1b0
	ABP_WorldMapPivot_C* WorldMapPivot; // 0x1b8
	UWBP_MapMarker_C* LastDeadLocationMarker; // 0x1c0
	UWBP_MapMarker_Waypoint_C* WaypointMarker; // 0x1c8
	UOverlay* MapMarkersOverlay; // 0x1d0
	TArray<FS_HealthChangeSummary> DeathRecap; // 0x1d8
};

struct UWBP_Radiogram_6010104_C : UWBP_radiogram_CustomBase_C {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x298
	UTextBlock* TextBlock; // 0x2a0
	UWBP_RadiogramListing_C* WBP_RadiogramListing_2; // 0x2a8
	UWBP_RadiogramListing_C* WBP_RadiogramListing_3; // 0x2b0
	UWBP_RadiogramListing_C* WBP_RadiogramListing_4; // 0x2b8
	UWBP_RadiogramListing_C* WBP_RadiogramListing_5; // 0x2c0
};

struct UReplicationGraph : UReplicationDriver {
	UNetReplicationGraphConnection* ReplicationConnectionManagerClass; // 0x28
	UNetDriver* NetDriver; // 0x30
	TArray<UNetReplicationGraphConnection*> Connections; // 0x38
	TArray<UNetReplicationGraphConnection*> PendingConnections; // 0x48
	TArray<UReplicationGraphNode*> GlobalGraphNodes; // 0x98
	TArray<UReplicationGraphNode*> PrepareForReplicationNodes; // 0xa8
};

struct UHierarchicalInstancedStaticMeshComponent : UInstancedStaticMeshComponent {
	TArray<int32_t> SortedInstances; // 0x588
	int32_t NumBuiltInstances; // 0x598
	FBox BuiltInstanceBounds; // 0x5a0
	FBox UnbuiltInstanceBounds; // 0x5bc
	TArray<FBox> UnbuiltInstanceBoundsList; // 0x5d8
	char bEnableDensityScaling : 1; // 0x5e8
	int32_t OcclusionLayerNumNodes; // 0x5f0
	FBoxSphereBounds CacheMeshExtendedBounds; // 0x5f4
	bool bDisableCollision; // 0x610
	int32_t InstanceCountToRender; // 0x614
};

struct AAudioVolume : AVolume {
	float Priority; // 0x258
	char bEnabled : 1; // 0x25c
	FReverbSettings Settings; // 0x260
	FInteriorSettings AmbientZoneSettings; // 0x280
	TArray<FAudioVolumeSubmixSendSettings> SubmixSendSettings; // 0x2a8
	TArray<FAudioVolumeSubmixOverrideSettings> SubmixOverrideSettings; // 0x2b8
};

struct UFloatingPawnMovement : UPawnMovementComponent {
	float MaxSpeed; // 0x138
	float Acceleration; // 0x13c
	float Deceleration; // 0x140
	float TurningBoost; // 0x144
	char bPositionCorrected : 1; // 0x148
};

struct UParticleModuleMeshRotation : UParticleModuleRotationBase {
	FRawDistributionVector StartRotation; // 0x30
	char bInheritParent : 1; // 0x78
};

struct UNiagaraComponent : UFXSystemComponent {
	UNiagaraSystem* Asset; // 0x440
	ENiagaraTickBehavior TickBehavior; // 0x448
	FNiagaraUserRedirectionParameterStore OverrideParameters; // 0x450
	char bForceSolo : 1; // 0x518
	char bEnableGpuComputeDebug : 1; // 0x518
	char bAutoDestroy : 1; // 0x544
	char bRenderingEnabled : 1; // 0x544
	char bAutoManageAttachment : 1; // 0x544
	char bAutoAttachWeldSimulatedBodies : 1; // 0x544
	float MaxTimeBeforeForceUpdateTransform; // 0x548
	TArray<FNiagaraMaterialOverride> EmitterMaterials; // 0x550
	FMulticastInlineDelegate OnSystemFinished; // 0x568
	TWeakObjectPtr<USceneComponent> AutoAttachParent; // 0x578
	FName AutoAttachSocketName; // 0x580
	EAttachmentRule AutoAttachLocationRule; // 0x588
	EAttachmentRule AutoAttachRotationRule; // 0x589
	EAttachmentRule AutoAttachScaleRule; // 0x58a
};

struct UPropertyBinding : UObject {
	TWeakObjectPtr<UObject> SourceObject; // 0x28
	FDynamicPropertyPath SourcePath; // 0x30
	FName DestinationProperty; // 0x58
};

struct UBorder : UContentWidget {
	EHorizontalAlignment HorizontalAlignment; // 0x120
	EVerticalAlignment VerticalAlignment; // 0x121
	char bShowEffectWhenDisabled : 1; // 0x122
	FLinearColor ContentColorAndOpacity; // 0x124
	FDelegate ContentColorAndOpacityDelegate; // 0x134
	FMargin Padding; // 0x144
	FSlateBrush Background; // 0x158
	FDelegate BackgroundDelegate; // 0x1e0
	FLinearColor BrushColor; // 0x1f0
	FDelegate BrushColorDelegate; // 0x200
	FVector2D DesiredSizeScale; // 0x210
	bool bFlipForRightToLeftFlowDirection; // 0x218
	FDelegate OnMouseButtonDownEvent; // 0x21c
	FDelegate OnMouseButtonUpEvent; // 0x22c
	FDelegate OnMouseMoveEvent; // 0x23c
	FDelegate OnMouseDoubleClickEvent; // 0x24c
};

struct USoundNodeEnveloper : USoundNode {
	float LoopStart; // 0x48
	float LoopEnd; // 0x4c
	float DurationAfterLoop; // 0x50
	int32_t LoopCount; // 0x54
	char bLoopIndefinitely : 1; // 0x58
	char bLoop : 1; // 0x58
	UDistributionFloatConstantCurve* VolumeInterpCurve; // 0x60
	UDistributionFloatConstantCurve* PitchInterpCurve; // 0x68
	FRuntimeFloatCurve VolumeCurve; // 0x70
	FRuntimeFloatCurve PitchCurve; // 0xf8
	float PitchMin; // 0x180
	float PitchMax; // 0x184
	float VolumeMin; // 0x188
	float VolumeMax; // 0x18c
};

struct UWidgetInteractionWithRay : UWidgetInteractionComponent {
	USplineMeshComponent* SplineMeshComponent; // 0x3f8
	UStaticMesh* SplineMesh; // 0x400
	FTransform SplineMeshTransform; // 0x410
	ESplineMeshAxis MeshAxis; // 0x440
	UStaticMeshComponent* DotMeshComponent; // 0x448
	UStaticMesh* DotMesh; // 0x450
	FTransform DotMeshTransform; // 0x460
	int32_t MeshsTranslucencySort; // 0x490
	FHitResult CurrentHitResult; // 0x494
};

struct USpacer : UWidget {
	FVector2D Size; // 0x108
};

struct UPhysicalMaterial : UObject {
	float Friction; // 0x28
	float StaticFriction; // 0x2c
	EFrictionCombineMode FrictionCombineMode; // 0x30
	bool bOverrideFrictionCombineMode; // 0x31
	float Restitution; // 0x34
	EFrictionCombineMode RestitutionCombineMode; // 0x38
	bool bOverrideRestitutionCombineMode; // 0x39
	float Density; // 0x3c
	float SleepLinearVelocityThreshold; // 0x40
	float SleepAngularVelocityThreshold; // 0x44
	int32_t SleepCounterThreshold; // 0x48
	float RaiseMassToPower; // 0x4c
	float DestructibleDamageThresholdScale; // 0x50
	UPhysicalMaterialPropertyBase* PhysicalMaterialProperty; // 0x58
	EPhysicalSurface SurfaceType; // 0x60
};

struct UParticleModuleAccelerationDragScaleOverLife : UParticleModuleAccelerationBase {
	UDistributionFloat* DragScale; // 0x38
	FRawDistributionFloat DragScaleRaw; // 0x40
};

struct UWBP_AdminConsole_QuickListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_73; // 0x268
	UButton* Button_Close; // 0x270
	UImage* Image_142; // 0x278
	UTextBlock* Text_Count; // 0x280
	UTextBlock* Text_Name; // 0x288
	UTextBlock* TextBlock_63; // 0x290
	UWBP_UI_ListingHovering_C* WBP_UI_ListingHovering; // 0x298
	UWBP_AdminConsole_C* AdminConsole; // 0x2a0
	int32_t Index; // 0x2a8
	FItemGeneralInfo Item; // 0x2b0
	FName TableName; // 0x400
	int32_t Count; // 0x408
	FMulticastInlineDelegate NewEventDispatcher_1; // 0x410
};

struct UWB_ClassicSettingsDev_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* Button; // 0x268
	UButton* Button_2; // 0x270
	UButton* Button_3; // 0x278
	UButton* Button_4; // 0x280
	UButton* Button_116; // 0x288
	UButton* ButtonClearStats; // 0x290
	UButton* ButtonEngine; // 0x298
	UButton* ButtonFPS; // 0x2a0
	UButton* ButtonGameplayTick; // 0x2a8
	UButton* ButtonMemory; // 0x2b0
	UButton* ButtonNetwork; // 0x2b8
	UButton* ButtonParticles; // 0x2c0
	UButton* ButtonSceneRendering; // 0x2c8
	UButton* ButtonServerStat; // 0x2d0
	UButton* ButtonStatSlow; // 0x2d8
	UButton* ButtonUnitGraph; // 0x2e0
	UComboBoxString* ComboBoxViewModes; // 0x2e8
	UButton* DeleteSettingsSaveFile; // 0x2f0
	UEditableText* EditableText_X; // 0x2f8
	UEditableText* EditableText_Y; // 0x300
	UEditableText* EditableText_Z; // 0x308
	USlider* GameSpeed; // 0x310
	UEditableText* GameSpeedEdit; // 0x318
	UCheckBox* PauseGame; // 0x320
	UHorizontalBox* ToolTip_DeleteSettings; // 0x328
	UHorizontalBox* ToolTip_GameSpeed; // 0x330
	UHorizontalBox* ToolTip_PauseGame; // 0x338
	UBP_GameSettings_C* Game Settings; // 0x340
	float Time Dilation Value Binding; // 0x348
	FText Time Dilation Text Binding; // 0x350
	FMulticastInlineDelegate Settings File Deleted; // 0x368
	FMulticastInlineDelegate Pause Game When Menu Open; // 0x378
};

struct UWBP_Main_LandmarkListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image_BG; // 0x268
	UImage* Image_Cornor; // 0x270
	UImage* Image_Logo; // 0x278
	UImage* Image_Select; // 0x280
	UImage* Image_State; // 0x288
	UTextBlock* LandmarkCoolDown; // 0x290
	UTextBlock* LandmarkDistance; // 0x298
	UTextBlock* LandmarkLocationX; // 0x2a0
	UTextBlock* LandmarkLocationY; // 0x2a8
	UTextBlock* LandmarkName; // 0x2b0
	UWBP_UI_ListingHovering_C* WBP_UI_ListingHovering; // 0x2b8
	FLMInfo LMInfo; // 0x2c0
	TMap<E_LandmarkState, FSlateBrush> ImageByState; // 0x3e0
	FSlateBrush LM3; // 0x430
	FSlateBrush LM1; // 0x4b8
	FSlateBrush LM2; // 0x540
	FSlateBrush LM4; // 0x5c8
	FString CurrentDistance; // 0x650
	int32_t CurrentSec; // 0x660
	ELMStatus CurrentStatus; // 0x664
	UWBP_Main_Landmark_C* WBP Main Landmark; // 0x668
};

struct UStereoLayerShapeEquirect : UStereoLayerShape {
	FBox2D LeftUVRect; // 0x28
	FBox2D RightUVRect; // 0x3c
	FVector2D LeftScale; // 0x50
	FVector2D RightScale; // 0x58
	FVector2D LeftBias; // 0x60
	FVector2D RightBias; // 0x68
};

struct USpotEventTypeData : UObject {
	ASpotEventBase* SpotEventClass; // 0x28
};

struct UAnimSharingInstance : UObject {
	TArray<AActor*> RegisteredActors; // 0x28
	UAnimationSharingStateProcessor* StateProcessor; // 0x88
	TArray<UAnimSequence*> UsedAnimationSequences; // 0xc8
	UEnum* StateEnum; // 0xe8
	AActor* SharingActor; // 0xf0
};

struct UWindDirectionalSourceComponent : USceneComponent {
	float Strength; // 0x1f8
	float Speed; // 0x1fc
	float MinGustAmount; // 0x200
	float MaxGustAmount; // 0x204
	float Radius; // 0x208
	char bPointWind : 1; // 0x20c
};

struct UEditableGameplayTagQueryExpression_NoTagsMatch : UEditableGameplayTagQueryExpression {
	FGameplayTagContainer Tags; // 0x28
};

struct UInterpTrackInstFloatProp : UInterpTrackInstProperty {
	float ResetFloat; // 0x58
};

struct UWidgetAnimationDelegateBinding : UDynamicBlueprintBinding {
	TArray<FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x28
};

struct UWBP_MapMarker_EventPoint_C : UWBP_MapMarker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4a8
	UWidgetAnimation* Appear; // 0x4b0
	BP_SpotEventBase_C* MySpotRef; // 0x4b8
};

struct UWBP_NameTag_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* TextBlock_135; // 0x268
	BP_SurvivalCharacter_C* TSVC; // 0x270
};

struct UBehaviorTreeComponent : UBrainComponent {
	TArray<UBTNode*> NodeInstances; // 0x128
	UBehaviorTree* DefaultBehaviorTreeAsset; // 0x278
};

struct ABP_BeckenSpawnArea_C : ABP_NPCSpawnLooperBox_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4e0
	TArray<ABP_BeckenRangeAttackActor_C*> RangeAttackRef; // 0x4e8
	AActor* BeckenCenter; // 0x4f8
	ABP_LandmarkZone_C* LandmarkRef; // 0x500
	BP_Becken_C* Becken; // 0x508
};

struct UEditableGameplayTagQueryExpression_NoExprMatch : UEditableGameplayTagQueryExpression {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
};

struct UPointLightComponent : ULocalLightComponent {
	char bUseInverseSquaredFalloff : 1; // 0x340
	float LightFalloffExponent; // 0x344
	float SourceRadius; // 0x348
	float SoftSourceRadius; // 0x34c
	float SourceLength; // 0x350
};

struct UARLifeCycleComponent : USceneComponent {
	FMulticastInlineDelegate OnARActorSpawnedDelegate; // 0x1f8
	FMulticastInlineDelegate OnARActorToBeDestroyedDelegate; // 0x208
};

struct UWBP_Arm_Mode_C : UUserWidget {
	UImage* Image_46; // 0x260
};

struct UEditableText : UWidget {
	FText Text; // 0x108
	FDelegate TextDelegate; // 0x120
	FText HintText; // 0x130
	FDelegate HintTextDelegate; // 0x148
	FEditableTextStyle WidgetStyle; // 0x158
	USlateWidgetStyleAsset* Style; // 0x378
	USlateBrushAsset* BackgroundImageSelected; // 0x380
	USlateBrushAsset* BackgroundImageComposing; // 0x388
	USlateBrushAsset* CaretImage; // 0x390
	FSlateFontInfo Font; // 0x398
	FSlateColor ColorAndOpacity; // 0x3f0
	bool IsReadOnly; // 0x418
	bool IsPassword; // 0x419
	float MinimumDesiredWidth; // 0x41c
	bool IsCaretMovedWhenGainFocus; // 0x420
	bool SelectAllTextWhenFocused; // 0x421
	bool RevertTextOnEscape; // 0x422
	bool ClearKeyboardFocusOnCommit; // 0x423
	bool SelectAllTextOnCommit; // 0x424
	bool AllowContextMenu; // 0x425
	EVirtualKeyboardType KeyboardType; // 0x426
	FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x427
	EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x428
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x429
	ETextJustify Justification; // 0x42a
	FShapedTextOptions ShapedTextOptions; // 0x42b
	FMulticastInlineDelegate OnTextChanged; // 0x430
	FMulticastInlineDelegate OnTextCommitted; // 0x440
};

struct UWBP_ObjectiveBase_C : UUserWidget {
	AActor* ObjectSourceRef; // 0x260
	int32_t MyIndex; // 0x268
};

struct UNiagaraSimulationStageBase : UNiagaraMergeable {
	UNiagaraScript* Script; // 0x28
	FName SimulationStageName; // 0x30
	char bEnabled : 1; // 0x38
};

struct UGenlockedTimecodeProvider : UTimecodeProvider {
	bool bUseGenlockToCount; // 0x30
};

struct UBP_MasterResourceFoliageComponent_C : UFoliageInstancedStaticMeshComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x6a0
	bool Interactable; // 0x6a8
	ABP_MasterResource_C* Resource; // 0x6b0
	FText Interaction Timer Text; // 0x6b8
};

struct UWBP_ShortRankingListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_Frame; // 0x268
	UImage* Image_124; // 0x270
	UTextBlock* Text_Fame; // 0x278
	UTextBlock* Text_Player; // 0x280
	UTextBlock* Text_Rank; // 0x288
	UWBP_UI_ListingHovering_C* WBP_UI_ListingHovering; // 0x290
	FS_SurvivalRank rank; // 0x298
	bool bIsResultUI; // 0x2d8
};

struct UPaperTerrainComponent : UPrimitiveComponent {
	UPaperTerrainMaterial* TerrainMaterial; // 0x440
	bool bClosedSpline; // 0x448
	bool bFilledSpline; // 0x449
	UPaperTerrainSplineComponent* AssociatedSpline; // 0x450
	int32_t RandomSeed; // 0x458
	float SegmentOverlapAmount; // 0x45c
	FLinearColor TerrainColor; // 0x460
	int32_t ReparamStepsPerSegment; // 0x470
	ESpriteCollisionMode SpriteCollisionDomain; // 0x474
	float CollisionThickness; // 0x478
	UBodySetup* CachedBodySetup; // 0x480
};

struct UWBP_Radiogram_6010213_C : UWBP_radiogram_CustomBase_C {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x298
	UTextBlock* TextBlock; // 0x2a0
	UWBP_Radiogram_MachineArmAbility_C* WBP_Radiogram_MachineArmAbility; // 0x2a8
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x2b0
	UWBP_RadiogramListing_C* WBP_RadiogramListing_2; // 0x2b8
};

struct UNPCAggroComponent : UActorComponent {
	AActor* TargetActor; // 0xb0
	TArray<AActor*> AggroActors; // 0xb8
	TArray<float> AggroDPS; // 0xc8
	char Aggro; // 0xd8
	float DecreaseAggroInterval; // 0xdc
};

struct UGameplayTagsSettings : UGameplayTagsList {
	bool ImportTagsFromConfig; // 0x48
	bool WarnOnInvalidTags; // 0x49
	bool FastReplication; // 0x4a
	FString InvalidTagCharacters; // 0x50
	TArray<FGameplayTagCategoryRemap> CategoryRemapping; // 0x60
	TArray<FSoftObjectPath> GameplayTagTableList; // 0x70
	TArray<FGameplayTagRedirect> GameplayTagRedirects; // 0x80
	TArray<FName> CommonlyReplicatedTags; // 0x90
	int32_t NumBitsForContainerSize; // 0xa0
	int32_t NetIndexFirstBitSegment; // 0xa4
	TArray<FRestrictedConfigInfo> RestrictedConfigFiles; // 0xa8
};

struct UWBP_Radiogram_6010214_C : UWBP_radiogram_CustomBase_C {
	UWBP_RadiogramBase_C* Radiogram_Base; // 0x298
	UTextBlock* TextBlock; // 0x2a0
	UWBP_RadiogramListing_C* WBP_RadiogramListing; // 0x2a8
	UWBP_RadiogramListing_C* WBP_RadiogramListing_2; // 0x2b0
	UWBP_RadiogramListing_C* WBP_RadiogramListing_3; // 0x2b8
};

struct UMaterialExpressionSkyAtmosphereLightDiskLuminance : UMaterialExpression {
	int32_t LightIndex; // 0x40
};

struct UParticleModuleRotationRate : UParticleModuleRotationRateBase {
	FRawDistributionFloat StartRotationRate; // 0x30
};

struct UAkEventCallbackInfo : UAkCallbackInfo {
	int32_t PlayingID; // 0x30
	int32_t EventId; // 0x34
};

struct ABP_DashEffect_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UParticleSystemComponent* ParticleSystem; // 0x228
	USceneComponent* DefaultSceneRoot; // 0x230
};

struct ULandscapeInfo : UObject {
	LazyObjectProperty LandscapeActor; // 0x28
	FGuid LandscapeGuid; // 0x44
	int32_t ComponentSizeQuads; // 0x54
	int32_t SubsectionSizeQuads; // 0x58
	int32_t ComponentNumSubsections; // 0x5c
	FVector DrawScale; // 0x60
	TArray<ALandscapeStreamingProxy*> Proxies; // 0x110
};

struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	UWidgetTree* WidgetTree; // 0x328
	char bClassRequiresNativeTick : 1; // 0x330
	TArray<FDelegateRuntimeBinding> Bindings; // 0x338
	TArray<UWidgetAnimation*> Animations; // 0x348
	TArray<FName> NamedSlots; // 0x358
};

struct UEndSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct USourceEffectEnvelopeFollowerPreset : USoundEffectSourcePreset {
	FSourceEffectEnvelopeFollowerSettings Settings; // 0x9c
};

struct USQSSetQueueAttributes : UAwsSQSAsync {
	FMulticastInlineDelegate Callback; // 0x30
};

struct UMaterialExpressionLogarithm10 : UMaterialExpression {
	FExpressionInput X; // 0x40
};

struct USkinnedMeshComponent : UMeshComponent {
	USkeletalMesh* SkeletalMesh; // 0x470
	TWeakObjectPtr<USkinnedMeshComponent> MasterPoseComponent; // 0x478
	TArray<ESkinCacheUsage> SkinCacheUsage; // 0x480
	TArray<FVertexOffsetUsage> VertexOffsetUsage; // 0x490
	UPhysicsAsset* PhysicsAssetOverride; // 0x598
	int32_t ForcedLodModel; // 0x5a0
	int32_t MinLodModel; // 0x5a4
	float StreamingDistanceMultiplier; // 0x5b0
	TArray<FSkelMeshComponentLODInfo> LODInfo; // 0x5c0
	EVisibilityBasedAnimTickOption VisibilityBasedAnimTickOption; // 0x5f4
	char bOverrideMinLod : 1; // 0x5f6
	char bUseBoundsFromMasterPoseComponent : 1; // 0x5f6
	char bForceWireframe : 1; // 0x5f6
	char bDisplayBones : 1; // 0x5f6
	char bDisableMorphTarget : 1; // 0x5f6
	char bHideSkin : 1; // 0x5f7
	char bPerBoneMotionBlur : 1; // 0x5f7
	char bComponentUseFixedSkelBounds : 1; // 0x5f7
	char bConsiderAllBodiesForBounds : 1; // 0x5f7
	char bSyncAttachParentLOD : 1; // 0x5f7
	char bCanHighlightSelectedSections : 1; // 0x5f7
	char bRecentlyRendered : 1; // 0x5f7
	char bCastCapsuleDirectShadow : 1; // 0x5f7
	char bCastCapsuleIndirectShadow : 1; // 0x5f8
	char bCPUSkinning : 1; // 0x5f8
	char bEnableUpdateRateOptimizations : 1; // 0x5f8
	char bDisplayDebugUpdateRateOptimizations : 1; // 0x5f8
	char bRenderStatic : 1; // 0x5f8
	char bIgnoreMasterPoseComponentLOD : 1; // 0x5f8
	char bCachedLocalBoundsUpToDate : 1; // 0x5f9
	char bForceMeshObjectUpdate : 1; // 0x5f9
	float CapsuleIndirectShadowMinVisibility; // 0x5fc
	FBoxSphereBounds CachedWorldSpaceBounds; // 0x610
	FMatrix CachedWorldToLocalTransform; // 0x630
};

struct UMaterialExpressionStaticSwitch : UMaterialExpression {
	char DefaultValue : 1; // 0x40
	FExpressionInput A; // 0x44
	FExpressionInput B; // 0x58
	FExpressionInput Value; // 0x6c
};

struct UDistributionFloatUniformCurve : UDistributionFloat {
	FInterpCurveVector2D ConstantCurve; // 0x38
};

struct UPlatformGameInstance : UGameInstance {
	FMulticastInlineDelegate ApplicationWillDeactivateDelegate; // 0x1a8
	FMulticastInlineDelegate ApplicationHasReactivatedDelegate; // 0x1b8
	FMulticastInlineDelegate ApplicationWillEnterBackgroundDelegate; // 0x1c8
	FMulticastInlineDelegate ApplicationHasEnteredForegroundDelegate; // 0x1d8
	FMulticastInlineDelegate ApplicationWillTerminateDelegate; // 0x1e8
	FMulticastInlineDelegate ApplicationShouldUnloadResourcesDelegate; // 0x1f8
	FMulticastInlineDelegate ApplicationReceivedStartupArgumentsDelegate; // 0x208
	FMulticastInlineDelegate ApplicationRegisteredForRemoteNotificationsDelegate; // 0x218
	FMulticastInlineDelegate ApplicationRegisteredForUserNotificationsDelegate; // 0x228
	FMulticastInlineDelegate ApplicationFailedToRegisterForRemoteNotificationsDelegate; // 0x238
	FMulticastInlineDelegate ApplicationReceivedRemoteNotificationDelegate; // 0x248
	FMulticastInlineDelegate ApplicationReceivedLocalNotificationDelegate; // 0x258
	FMulticastInlineDelegate ApplicationReceivedScreenOrientationChangedNotificationDelegate; // 0x268
};

struct USoundCue : USoundBase {
	char bPrimeOnLoad : 1; // 0x1b8
	USoundNode* FirstNode; // 0x1c0
	float VolumeMultiplier; // 0x1c8
	float PitchMultiplier; // 0x1cc
	FSoundAttenuationSettings AttenuationOverrides; // 0x1d0
	float SubtitlePriority; // 0x570
	char bOverrideAttenuation : 1; // 0x578
	char bExcludeFromRandomNodeBranchCulling : 1; // 0x578
	int32_t CookedQualityIndex; // 0x57c
	char bHasPlayWhenSilent : 1; // 0x580
};

struct UMaterialExpressionConstantBiasScale : UMaterialExpression {
	FExpressionInput Input; // 0x40
	float Bias; // 0x54
	float Scale; // 0x58
};

struct UParticleModuleTypeDataMesh : UParticleModuleTypeDataBase {
	UStaticMesh* Mesh; // 0x30
	float LODSizeScale; // 0x40
	char bUseStaticMeshLODs : 1; // 0x44
	char CastShadows : 1; // 0x44
	char DoCollisions : 1; // 0x44
	EMeshScreenAlignment MeshAlignment; // 0x45
	char bOverrideMaterial : 1; // 0x46
	char bOverrideDefaultMotionBlurSettings : 1; // 0x46
	char bEnableMotionBlur : 1; // 0x46
	FRawDistributionVector RollPitchYawRange; // 0x48
	EParticleAxisLock AxisLockOption; // 0x90
	char bCameraFacing : 1; // 0x91
	EMeshCameraFacingUpAxis CameraFacingUpAxisOption; // 0x92
	EMeshCameraFacingOptions CameraFacingOption; // 0x93
	char bApplyParticleRotationAsSpin : 1; // 0x94
	char bFaceCameraDirectionRatherThanPosition : 1; // 0x94
	char bCollisionsConsiderPartilceSize : 1; // 0x94
};

struct UMaterialExpressionVectorParameter : UMaterialExpressionParameter {
	FLinearColor DefaultValue; // 0x58
	bool bUseCustomPrimitiveData; // 0x68
	char PrimitiveDataIndex; // 0x69
};

struct UControlPointMeshComponent : UStaticMeshComponent {
	float VirtualTextureMainPassMaxDrawDistance; // 0x4d0
};

struct ASurvivalAICharacterBase : ASurvivalCharacterBase {
	float OceanHeight; // 0x698
	ASurvivalAIController* SVAIController; // 0x6a0
	USurvivalCharacterMovementComponent* SVAIMovement; // 0x6a8
	UNPCAnimInstance* SVNPCAnimInstance; // 0x6b0
	TArray<USkinnedMeshComponent*> SVSkinnedMeshComp; // 0x6b8
	UNPCData* NPCData; // 0x6c8
	bool DebugMessage_Sight; // 0x6d0
	bool DebugMessage_Hearing; // 0x6d1
	bool DebugMessage_Damage; // 0x6d2
	AActor* FocusActor; // 0x6d8
	FVector FocusLocation; // 0x6e0
	int32_t Stress; // 0x6ec
	float EyeLocation; // 0x6f0
	bool UsingTwoLegsAnimation; // 0x6f4
	char TeamID; // 0x6f5
	float CheckObstructedDistance; // 0x6f8
	int32_t AIUID; // 0x6fc
	bool Groggy; // 0x700
	FNPCSpec NPCSpecInfo; // 0x708
	int32_t CurrentAttackIndex; // 0x890
	TArray<FAnimNotifyInfo> CurrentAnimNotifies; // 0x898
	TArray<FAnimNotifyStateInfo> CurrentAnimNotifyStates; // 0x8a8
	float AnimStartServerTime; // 0x8b8
	TMap<FString, FGatherLogCachedData> GatherLogCachedDataMap; // 0x8c0
	char MyFriendly; // 0x910
	TArray<float> MovementTickIntervalsForSignificance; // 0x918
	TArray<int32_t> AnimationURO; // 0x928
};

struct AIntervalGizmoActor : AGizmoActor {
	UGizmoLineHandleComponent* UpIntervalComponent; // 0x220
	UGizmoLineHandleComponent* DownIntervalComponent; // 0x228
	UGizmoLineHandleComponent* ForwardIntervalComponent; // 0x230
};

struct UWBP_HUD_InteractionListing_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image_Disabled; // 0x268
	UOverlay* Overlay_Target; // 0x270
	UTextBlock* Text_Action; // 0x278
	UTextBlock* Text_Text; // 0x280
	UWBP_Key_C* WBP_Key; // 0x288
	E_InteractionType Action; // 0x290
	FText Text; // 0x298
	float Progress; // 0x2b0
	bool IsProgress; // 0x2b4
	EnumKeyInputType KeyInputType; // 0x2b5
	FString Key; // 0x2b8
	bool bHold; // 0x2c8
	bool bEnabled; // 0x2c9
};

struct ASurvivalVRCharacter : ASurvivalCharacter {
	USkeletalMeshComponent* Mesh1P; // 0x938
	USkeletalMeshComponent* FP_Gun; // 0x940
	USceneComponent* FP_MuzzleLocation; // 0x948
	USkeletalMeshComponent* VR_Gun; // 0x950
	USceneComponent* VR_MuzzleLocation; // 0x958
	UCameraComponent* FirstPersonCameraComponent; // 0x960
	UMotionControllerComponent* R_MotionController; // 0x968
	UMotionControllerComponent* L_MotionController; // 0x970
	FVector GunOffset; // 0x978
	ASurvivalProjectile* ProjectileClass; // 0x988
	USoundBase* FireSound; // 0x990
	UAnimMontage* FireAnimation; // 0x998
	char bUsingMotionControllers : 1; // 0x9a0
};

struct UInterpTrackFloatProp : UInterpTrackFloatBase {
	FName PropertyName; // 0x90
};

struct UARComponent : USceneComponent {
	FGuid NativeID; // 0x1f8
	bool bUseDefaultReplication; // 0x238
	UMaterialInterface* DefaultMeshMaterial; // 0x240
	UMaterialInterface* DefaultWireframeMeshMaterial; // 0x248
	UMRMeshComponent* MRMeshComponent; // 0x250
	UARTrackedGeometry* MyTrackedGeometry; // 0x258
};

struct ULowEntryLatentActionNone : UObject {
	bool Finished; // 0x28
	int32_t KeepAliveCount; // 0x2c
};

struct UParticleModuleSpawn : UParticleModuleSpawnBase {
	FRawDistributionFloat Rate; // 0x38
	FRawDistributionFloat RateScale; // 0x68
	EParticleBurstMethod ParticleBurstMethod; // 0x98
	TArray<FParticleBurst> BurstList; // 0xa0
	FRawDistributionFloat BurstScale; // 0xb0
	char bApplyGlobalSpawnRateScale : 1; // 0xe0
};

struct UAutoDestroySubsystem : UWorldSubsystem {
	TArray<AActor*> ActorsToPoll; // 0x38
};

struct UMaterialFunctionInstance : UMaterialFunctionInterface {
	UMaterialFunctionInterface* Parent; // 0x40
	UMaterialFunctionInterface* Base; // 0x48
	TArray<FScalarParameterValue> ScalarParameterValues; // 0x50
	TArray<FVectorParameterValue> VectorParameterValues; // 0x60
	TArray<FTextureParameterValue> TextureParameterValues; // 0x70
	TArray<FFontParameterValue> FontParameterValues; // 0x80
	TArray<FStaticSwitchParameter> StaticSwitchParameterValues; // 0x90
	TArray<FStaticComponentMaskParameter> StaticComponentMaskParameterValues; // 0xa0
	TArray<FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues; // 0xb0
};

struct UCullingField : UFieldNodeBase {
	UFieldNodeBase* Culling; // 0xb0
	UFieldNodeBase* Field; // 0xb8
	EFieldCullingOperationType Operation; // 0xc0
};

struct ABP_LM3_C : ABP_LandmarkZone_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x490
	UBP_WidgetIndicatorComponent_C* Indi_ElevatorButton; // 0x498
	UBP_WidgetIndicatorComponent_C* Indi_ElevatorCaller; // 0x4a0
	UBP_WidgetIndicatorComponent_C* Indi_Dirt; // 0x4a8
	UBP_WidgetIndicatorComponent_C* Indi_Wind; // 0x4b0
	UBP_WidgetIndicatorComponent_C* Indi_Fire; // 0x4b8
	UBP_WidgetIndicatorComponent_C* Indi_Water; // 0x4c0
	TArray<bool> OccupyRep; // 0x4c8
	ABP_GeometryDamageZone_C* DamageActor; // 0x4d8
	TArray<BP_LM3OccupyZone_C*> OccupyZoneRef; // 0x4e0
	FMulticastInlineDelegate OnUpdateOccupyState; // 0x4f0
	float OccupyTime; // 0x500
	float ServerOccupyTime; // 0x504
	float OccupyingTime; // 0x508
	float ServerOccupyingTime; // 0x50c
	TArray<FVector> OccupyLoc; // 0x510
	FVector ElevatorCallerLoc; // 0x520
	FVector ElevatorButtonLoc; // 0x52c
	TArray<FMetOccupyInfo> MetOccupyInfos; // 0x538
	TMap<EMetSign, bool> MetOccupyZones; // 0x548
	FMulticastInlineDelegate OnUpdateOccupyInfos; // 0x598
};

struct UParticleModulePivotOffset : UParticleModuleLocationBase {
	FVector2D PivotOffset; // 0x30
};

struct UInterpTrackToggle : UInterpTrack {
	TArray<FToggleTrackKey> ToggleTrack; // 0x70
	char bActivateSystemEachUpdate : 1; // 0x80
	char bActivateWithJustAttachedFlag : 1; // 0x80
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	char bFireEventsWhenJumpingForwards : 1; // 0x80
};

struct UParticleModuleColor : UParticleModuleColorBase {
	FRawDistributionVector StartColor; // 0x30
	FRawDistributionFloat StartAlpha; // 0x78
	char bClampAlpha : 1; // 0xa8
};

struct UDatasmithVREDSceneImportData : UDatasmithFBXSceneImportData {
	bool bMergeNodes; // 0x48
	bool bOptimizeDuplicatedNodes; // 0x49
	bool bImportMats; // 0x4a
	FString MatsPath; // 0x50
	bool bImportVar; // 0x60
	bool bCleanVar; // 0x61
	FString VarPath; // 0x68
	bool bImportLightInfo; // 0x78
	FString LightInfoPath; // 0x80
	bool bImportClipInfo; // 0x90
	FString ClipInfoPath; // 0x98
};

struct URendererSettings : UDeveloperSettings {
	char bMobileDisableVertexFog : 1; // 0x38
	int32_t MaxMobileCascades; // 0x3c
	EMobileMSAASampleCount MobileMSAASampleCount; // 0x40
	char bMobileAllowDitheredLODTransition : 1; // 0x44
	char bMobileAllowSoftwareOcclusionCulling : 1; // 0x44
	char bMobileVirtualTextures : 1; // 0x44
	char bDiscardUnusedQualityLevels : 1; // 0x44
	char bOcclusionCulling : 1; // 0x44
	float MinScreenRadiusForLights; // 0x48
	float MinScreenRadiusForEarlyZPass; // 0x4c
	float MinScreenRadiusForCSMdepth; // 0x50
	char bPrecomputedVisibilityWarning : 1; // 0x54
	char bTextureStreaming : 1; // 0x54
	char bUseDXT5NormalMaps : 1; // 0x54
	char bVirtualTextures : 1; // 0x54
	char bVirtualTexturedLightmaps : 1; // 0x54
	uint32_t VirtualTextureTileSize; // 0x58
	uint32_t VirtualTextureTileBorderSize; // 0x5c
	uint32_t VirtualTextureFeedbackFactor; // 0x60
	char bVirtualTextureEnableCompressZlib : 1; // 0x64
	char bVirtualTextureEnableCompressCrunch : 1; // 0x64
	char bClearCoatEnableSecondNormal : 1; // 0x64
	int32_t ReflectionCaptureResolution; // 0x68
	char bReflectionCaptureCompression : 1; // 0x6c
	char ReflectionEnvironmentLightmapMixBasedOnRoughness : 1; // 0x6c
	char bForwardShading : 1; // 0x6c
	char bVertexFoggingForOpaque : 1; // 0x6c
	char bAllowStaticLighting : 1; // 0x6c
	char bUseNormalMapsForStaticLighting : 1; // 0x6c
	char bGenerateMeshDistanceFields : 1; // 0x6c
	char bEightBitMeshDistanceFields : 1; // 0x6c
	char bGenerateLandscapeGIData : 1; // 0x6d
	char bCompressMeshDistanceFields : 1; // 0x6d
	float TessellationAdaptivePixelsPerTriangle; // 0x70
	char bSeparateTranslucency : 1; // 0x74
	ETranslucentSortPolicy TranslucentSortPolicy; // 0x78
	FVector TranslucentSortAxis; // 0x7c
	ECustomDepthStencil CustomDepthStencil; // 0x88
	char bCustomDepthTaaJitter : 1; // 0x8c
	EAlphaChannelMode bEnableAlphaChannelInPostProcessing; // 0x90
	char bDefaultFeatureBloom : 1; // 0x94
	char bDefaultFeatureAmbientOcclusion : 1; // 0x94
	char bDefaultFeatureAmbientOcclusionStaticFraction : 1; // 0x94
	char bDefaultFeatureAutoExposure : 1; // 0x94
	EAutoExposureMethodUI DefaultFeatureAutoExposure; // 0x98
	float DefaultFeatureAutoExposureBias; // 0x9c
	char bExtendDefaultLuminanceRangeInAutoExposureSettings : 1; // 0xa0
	char bUsePreExposure : 1; // 0xa0
	char bEnablePreExposureOnlyInTheEditor : 1; // 0xa0
	char bDefaultFeatureMotionBlur : 1; // 0xa0
	char bDefaultFeatureLensFlare : 1; // 0xa0
	char bTemporalUpsampling : 1; // 0xa0
	char bSSGI : 1; // 0xa0
	EAntiAliasingMethod DefaultFeatureAntiAliasing; // 0xa4
	ELightUnits DefaultLightUnits; // 0xa5
	EDefaultBackBufferPixelFormat DefaultBackBufferPixelFormat; // 0xa6
	char bRenderUnbuiltPreviewShadowsInGame : 1; // 0xa8
	char bStencilForLODDither : 1; // 0xa8
	EEarlyZPass EarlyZPass; // 0xac
	char bEarlyZPassOnlyMaterialMasking : 1; // 0xb0
	char bDBuffer : 1; // 0xb0
	EClearSceneOptions ClearSceneMethod; // 0xb4
	char bBasePassOutputsVelocity : 1; // 0xb8
	char bVertexDeformationOutputsVelocity : 1; // 0xb8
	char bSelectiveBasePassOutputs : 1; // 0xb8
	char bDefaultParticleCutouts : 1; // 0xb8
	int32_t GPUSimulationTextureSizeX; // 0xbc
	int32_t GPUSimulationTextureSizeY; // 0xc0
	char bGlobalClipPlane : 1; // 0xc4
	EGBufferFormat GBufferFormat; // 0xc8
	char bUseGPUMorphTargets : 1; // 0xcc
	char bNvidiaAftermathEnabled : 1; // 0xcc
	char bMultiView : 1; // 0xcc
	char bMobilePostProcessing : 1; // 0xcc
	char bMobileMultiView : 1; // 0xcc
	char bMobileUseHWsRGBEncoding : 1; // 0xcc
	char bRoundRobinOcclusion : 1; // 0xcc
	char bODSCapture : 1; // 0xcc
	char bMeshStreaming : 1; // 0xcd
	float WireframeCullThreshold; // 0xd0
	char bEnableRayTracing : 1; // 0xd4
	char bEnableRayTracingTextureLOD : 1; // 0xd4
	char bSupportStationarySkylight : 1; // 0xd4
	char bSupportLowQualityLightmaps : 1; // 0xd4
	char bSupportPointLightWholeSceneShadows : 1; // 0xd4
	char bSupportAtmosphericFog : 1; // 0xd4
	char bSupportSkyAtmosphere : 1; // 0xd4
	char bSupportSkyAtmosphereAffectsHeightFog : 1; // 0xd4
	char bSupportSkinCacheShaders : 1; // 0xd5
	ESkinCacheDefaultBehavior DefaultSkinCacheBehavior; // 0xd8
	float SkinCacheSceneMemoryLimitInMB; // 0xdc
	char bMobileEnableStaticAndCSMShadowReceivers : 1; // 0xe0
	char bMobileEnableMovableLightCSMShaderCulling : 1; // 0xe0
	char bMobileAllowDistanceFieldShadows : 1; // 0xe0
	char bMobileAllowMovableDirectionalLights : 1; // 0xe0
	uint32_t MobileNumDynamicPointLights; // 0xe4
	char bMobileDynamicPointLightsUseStaticBranch : 1; // 0xe8
	char bMobileAllowMovableSpotlights : 1; // 0xe8
	char bMobileAllowMovableSpotlightShadows : 1; // 0xe8
	char bSupport16BitBoneIndex : 1; // 0xe8
	char bGPUSkinLimit2BoneInfluences : 1; // 0xe8
	char bSupportDepthOnlyIndexBuffers : 1; // 0xe8
	char bSupportReversedIndexBuffers : 1; // 0xe8
	char bLPV : 1; // 0xe8
	char bMobileAmbientOcclusion : 1; // 0xe9
	char bUseUnlimitedBoneInfluences : 1; // 0xe9
	int32_t UnlimitedBonInfluencesThreshold; // 0xec
	EMobilePlanarReflectionMode MobilePlanarReflectionMode; // 0xf0
	FPerPlatformBool bStreamSkeletalMeshLODs; // 0xf1
	FPerPlatformBool bDiscardSkeletalMeshOptionalLODs; // 0xf2
	FSoftObjectPath VisualizeCalibrationColorMaterialPath; // 0xf8
	FSoftObjectPath VisualizeCalibrationCustomMaterialPath; // 0x110
	FSoftObjectPath VisualizeCalibrationGrayscaleMaterialPath; // 0x128
};

struct UMaterialExpressionArctangent2 : UMaterialExpression {
	FExpressionInput Y; // 0x40
	FExpressionInput X; // 0x54
};

struct ABP_InventorySaveSystem_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UBillboardComponent* Billboard; // 0x228
	UInstancedStaticMeshComponent* InstancedStaticMesh; // 0x230
	bool Auto Save; // 0x238
	float Auto Save Timer; // 0x23c
	bool Load Save; // 0x240
	FString Save Name; // 0x248
	bool Show Debug Text; // 0x258
	float Debug Text Time; // 0x25c
	FS_WeaponAttachements Weapon Attach Classes L; // 0x260
	FS_SaveWeaponInvs Item Weapon Info; // 0x2a8
	bool ShowFirstCinematic; // 0x2c0
	FMulticastInlineDelegate OnSaveFileLoadFinished; // 0x2c8
	UBP_SurvivalGameSave_C* GameSaveFile; // 0x2d8
	FMulticastInlineDelegate OnAsyncSaveFinished; // 0x2e0
	TMap<FString, FS_RetrieveSystemInfo> RetrieveSystemInfo; // 0x2f0
	bool NowSaving; // 0x340
	FTimerHandle AutSaveTimer; // 0x348
	int32_t Count; // 0x350
	float SaveStartTime; // 0x354
};

