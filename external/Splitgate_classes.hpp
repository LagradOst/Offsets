namespace off {
	constexpr auto GNames = 0x52607c0;
	constexpr auto GObjects = 0x529ccf0;
	constexpr auto GWorld = 0x53e10f0;

	namespace n_UAISystem {
		constexpr auto PerceptionSystemClassName = 0x58; // FSoftClassPath
		constexpr auto HotSpotManagerClassName = 0x70; // FSoftClassPath
		constexpr auto AcceptanceRadius = 0x88; // float
		constexpr auto PathfollowingRegularPathPointAcceptanceRadius = 0x8c; // float
		constexpr auto PathfollowingNavLinkAcceptanceRadius = 0x90; // float
		constexpr auto bFinishMoveOnGoalOverlap = 0x94; // bool
		constexpr auto bAcceptPartialPaths = 0x95; // bool
		constexpr auto bAllowStrafing = 0x96; // bool
		constexpr auto bEnableBTAITasks = 0x97; // bool
		constexpr auto bAllowControllersAsEQSQuerier = 0x98; // bool
		constexpr auto bEnableDebuggerPlugin = 0x99; // bool
		constexpr auto bForgetStaleActors = 0x9a; // bool
		constexpr auto bAddBlackboardSelfKey = 0x9b; // bool
		constexpr auto DefaultSightCollisionChannel = 0x9c; // ECollisionChannel
		constexpr auto BehaviorTreeManager = 0xa0; // UBehaviorTreeManager*
		constexpr auto EnvironmentQueryManager = 0xa8; // UEnvQueryManager*
		constexpr auto PerceptionSystem = 0xb0; // UAIPerceptionSystem*
		constexpr auto AllProxyObjects = 0xb8; // TArray<UAIAsyncTaskBlueprintProxy*>
		constexpr auto HotSpotManager = 0xc8; // UAIHotSpotManager*
		constexpr auto NavLocalGrids = 0xd0; // UNavLocalGridManager*
	}

	namespace n_UCameraAnimInst {
		constexpr auto CamAnim = 0x28; // UCameraAnim*
		constexpr auto InterpGroupInst = 0x30; // UInterpGroupInst*
		constexpr auto PlayRate = 0x50; // float
		constexpr auto MoveTrack = 0x68; // UInterpTrackMove*
		constexpr auto MoveInst = 0x70; // UInterpTrackInstMove*
		constexpr auto PlaySpace = 0x78; // ECameraShakePlaySpace
	}

	namespace n_UInputActionDelegateBinding {
		constexpr auto InputActionDelegateBindings = 0x28; // TArray<FBlueprintInputActionDelegateBinding>
	}

	namespace n_UPortalWarsInviteMenuWidget {
		constexpr auto InviteEntryWidgetClass = 0x338; // UPortalWarsInviteEntryWidget*
		constexpr auto NotificationPanel = 0x340; // UPanelWidget*
		constexpr auto NotificationSwitcher = 0x348; // UWidgetSwitcher*
	}

	namespace n_UPortalWarsRaceMatchResultWidget {
		constexpr auto FinalTimeText = 0x2a8; // UTextBlock*
		constexpr auto MapNameText = 0x2b0; // UTextBlock*
	}

	namespace n_UScrollBox {
		constexpr auto WidgetStyle = 0x120; // FScrollBoxStyle
		constexpr auto WidgetBarStyle = 0x348; // FScrollBarStyle
		constexpr auto Style = 0x818; // USlateWidgetStyleAsset*
		constexpr auto BarStyle = 0x820; // USlateWidgetStyleAsset*
		constexpr auto Orientation = 0x828; // EOrientation
		constexpr auto ScrollBarVisibility = 0x829; // ESlateVisibility
		constexpr auto ConsumeMouseWheel = 0x82a; // EConsumeMouseWheel
		constexpr auto ScrollbarThickness = 0x82c; // FVector2D
		constexpr auto ScrollbarPadding = 0x834; // FMargin
		constexpr auto AlwaysShowScrollbar = 0x844; // bool
		constexpr auto AlwaysShowScrollbarTrack = 0x845; // bool
		constexpr auto AllowOverscroll = 0x846; // bool
		constexpr auto bAnimateWheelScrolling = 0x847; // bool
		constexpr auto NavigationDestination = 0x848; // EDescendantScrollDestination
		constexpr auto NavigationScrollPadding = 0x84c; // float
		constexpr auto ScrollWhenFocusChanges = 0x850; // EScrollWhenFocusChanges
		constexpr auto bAllowRightClickDragScrolling = 0x851; // bool
		constexpr auto WheelScrollMultiplier = 0x854; // float
		constexpr auto OnUserScrolled = 0x858; // FMulticastInlineDelegate
	}

	namespace n_UDatasmithPointLightComponentTemplate {
		constexpr auto IntensityUnits = 0x30; // ELightUnits
		constexpr auto SourceRadius = 0x34; // float
		constexpr auto SourceLength = 0x38; // float
		constexpr auto AttenuationRadius = 0x3c; // float
	}

	namespace n_ULocalizedOverlays {
		constexpr auto DefaultOverlays = 0x28; // UBasicOverlays*
		constexpr auto LocaleToOverlaysMap = 0x30; // TMap<FString, UBasicOverlays*>
	}

	namespace n_UNiagaraDataInterfaceRenderTarget2DArray {
		constexpr auto Size = 0xd8; // FIntVector
		constexpr auto OverrideRenderTargetFormat = 0xe4; // ETextureRenderTargetFormat
		constexpr auto bInheritUserParameterSettings = 0xe5; // char : 1
		constexpr auto bOverrideFormat = 0xe5; // char : 1
		constexpr auto RenderTargetUserParameter = 0xe8; // FNiagaraUserParameterBinding
		constexpr auto ManagedRenderTargets = 0x108; // TMap<uint64_t, UTextureRenderTarget2DArray*>
	}

	namespace n_UBlendSpaceBase {
		constexpr auto bRotationBlendInMeshSpace = 0x88; // bool
		constexpr auto AnimLength = 0x8c; // float
		constexpr auto InterpolationParam = 0x90; // FInterpolationParameter [0x3]
		constexpr auto TargetWeightInterpolationSpeedPerSec = 0xa8; // float
		constexpr auto NotifyTriggerMode = 0xac; // ENotifyTriggerMode
		constexpr auto PerBoneBlend = 0xb0; // TArray<FPerBoneInterpolation>
		constexpr auto SampleIndexWithMarkers = 0xc0; // int32_t
		constexpr auto SampleData = 0xc8; // TArray<FBlendSample>
		constexpr auto GridSamples = 0xd8; // TArray<FEditorElement>
		constexpr auto BlendParameters = 0xe8; // FBlendParameter [0x3]
	}

	namespace n_UEnvQueryGenerator_Cone {
		constexpr auto AlignedPointsDistance = 0xb8; // FAIDataProviderFloatValue
		constexpr auto ConeDegrees = 0xf0; // FAIDataProviderFloatValue
		constexpr auto AngleStep = 0x128; // FAIDataProviderFloatValue
		constexpr auto Range = 0x160; // FAIDataProviderFloatValue
		constexpr auto CenterActor = 0x198; // UEnvQueryContext*
		constexpr auto bIncludeContextLocation = 0x1a0; // char : 1
	}

	namespace n_UMaterialExpressionTemporalSobol {
		constexpr auto Index = 0x40; // FExpressionInput
		constexpr auto Seed = 0x54; // FExpressionInput
		constexpr auto ConstIndex = 0x68; // uint32_t
		constexpr auto ConstSeed = 0x6c; // FVector2D
	}

	namespace n_UDistributionFloatUniform {
		constexpr auto Min = 0x38; // float
		constexpr auto Max = 0x3c; // float
	}

	namespace n_UARFaceComponent {
		constexpr auto TransformSetting = 0x278; // EARFaceTransformMixing
		constexpr auto bUpdateVertexNormal = 0x279; // bool
		constexpr auto bFaceOutOfScreen = 0x27a; // bool
		constexpr auto ReplicatedPayload = 0x280; // FARFaceUpdatePayload
	}

	namespace n_USpectatorBeaconState {
		constexpr auto SessionName = 0x28; // FName
		constexpr auto NumConsumedReservations = 0x30; // int32_t
		constexpr auto MaxReservations = 0x34; // int32_t
		constexpr auto bRestrictCrossConsole = 0x38; // bool
		constexpr auto Reservations = 0x40; // TArray<FSpectatorReservation>
	}

	namespace n_UGeometryCacheComponent {
		constexpr auto GeometryCache = 0x478; // UGeometryCache*
		constexpr auto bRunning = 0x480; // bool
		constexpr auto bLooping = 0x481; // bool
		constexpr auto bExtrapolateFrames = 0x482; // bool
		constexpr auto StartTimeOffset = 0x484; // float
		constexpr auto PlaybackSpeed = 0x488; // float
		constexpr auto MotionVectorScale = 0x48c; // float
		constexpr auto NumTracks = 0x490; // int32_t
		constexpr auto ElapsedTime = 0x494; // float
		constexpr auto Duration = 0x4cc; // float
		constexpr auto bManualTick = 0x4d0; // bool
	}

	namespace n_UShapeComponent {
		constexpr auto ShapeBodySetup = 0x450; // UBodySetup*
		constexpr auto AreaClass = 0x458; // UNavAreaBase*
		constexpr auto ShapeColor = 0x460; // FColor
		constexpr auto bDrawOnlyIfSelected = 0x464; // char : 1
		constexpr auto bShouldCollideWhenPlacing = 0x464; // char : 1
		constexpr auto bDynamicObstacle = 0x464; // char : 1
	}

	namespace n_UBorderSlot {
		constexpr auto Padding = 0x38; // FMargin
		constexpr auto HorizontalAlignment = 0x48; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x49; // EVerticalAlignment
	}

	namespace n_UMaterialExpressionAntialiasedTextureMask {
		constexpr auto Threshold = 0x80; // float
		constexpr auto Channel = 0x84; // ETextureColorChannel
	}

	namespace n_URig {
		constexpr auto TransformBases = 0x30; // TArray<FTransformBase>
		constexpr auto Nodes = 0x40; // TArray<FNode>
	}

	namespace n_UPortalWarsChallengeButtonWidget {
		constexpr auto ChallengeType = 0x420; // EChallengeType
		constexpr auto ChallengeGroupId = 0x424; // int32_t
		constexpr auto ChallengeProgressText = 0x428; // UTextBlock*
		constexpr auto ChallengeProgressBar = 0x430; // UProgressBar*
		constexpr auto CompleteIndicatorSwitcher = 0x438; // UWidgetSwitcher*
		constexpr auto ClaimIndicator = 0x440; // UPortalWarsClaimChallengeIndicatorWidget*
		constexpr auto TimeDescriptionText = 0x450; // UTextBlock*
		constexpr auto NoteText = 0x458; // UTextBlock*
		constexpr auto NoteRoot = 0x460; // UWidget*
		constexpr auto ThumbnailImage = 0x468; // UImage*
		constexpr auto DefaultImage = 0x470; // UTexture2D*
	}

	namespace n_UPortalWarsRoundIntermissionWidget {
		constexpr auto NumRoundsText = 0x260; // UTextBlock*
		constexpr auto CurrentRoundText = 0x268; // UTextBlock*
		constexpr auto RoundWinnerText = 0x270; // URichTextBlock*
		constexpr auto LeftStarImage = 0x278; // UImage*
		constexpr auto RightStarImage = 0x280; // UImage*
		constexpr auto CountdownText = 0x288; // UTextBlock*
	}

	namespace n_UBTDecorator_CompareBBEntries {
		constexpr auto Operator = 0x68; // EBlackBoardEntryComparison
		constexpr auto BlackboardKeyA = 0x70; // FBlackboardKeySelector
		constexpr auto BlackboardKeyB = 0x98; // FBlackboardKeySelector
	}

	namespace n_UBorder {
		constexpr auto HorizontalAlignment = 0x120; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x121; // EVerticalAlignment
		constexpr auto bShowEffectWhenDisabled = 0x122; // char : 1
		constexpr auto ContentColorAndOpacity = 0x124; // FLinearColor
		constexpr auto ContentColorAndOpacityDelegate = 0x134; // FDelegate
		constexpr auto Padding = 0x144; // FMargin
		constexpr auto Background = 0x158; // FSlateBrush
		constexpr auto BackgroundDelegate = 0x1e0; // FDelegate
		constexpr auto BrushColor = 0x1f0; // FLinearColor
		constexpr auto BrushColorDelegate = 0x200; // FDelegate
		constexpr auto DesiredSizeScale = 0x210; // FVector2D
		constexpr auto bFlipForRightToLeftFlowDirection = 0x218; // bool
		constexpr auto OnMouseButtonDownEvent = 0x21c; // FDelegate
		constexpr auto OnMouseButtonUpEvent = 0x22c; // FDelegate
		constexpr auto OnMouseMoveEvent = 0x23c; // FDelegate
		constexpr auto OnMouseDoubleClickEvent = 0x24c; // FDelegate
	}

	namespace n_UGizmoPlaneTranslationParameterSource {
		constexpr auto AxisSource = 0x90; // TScriptInterface<IGizmoAxisSource>
		constexpr auto TransformSource = 0xa0; // TScriptInterface<IGizmoTransformSource>
		constexpr auto Parameter = 0xb0; // FVector2D
		constexpr auto LastChange = 0xb8; // FGizmoVec2ParameterChange
		constexpr auto CurTranslationOrigin = 0xc8; // FVector
		constexpr auto CurTranslationNormal = 0xd4; // FVector
		constexpr auto CurTranslationAxisX = 0xe0; // FVector
		constexpr auto CurTranslationAxisY = 0xec; // FVector
		constexpr auto InitialTransform = 0x100; // FTransform
	}

	namespace n_UConstantQNRTSettings {
		constexpr auto StartingFrequency = 0x28; // float
		constexpr auto NumBands = 0x2c; // int32_t
		constexpr auto NumBandsPerOctave = 0x30; // float
		constexpr auto AnalysisPeriod = 0x34; // float
		constexpr auto bDownmixToMono = 0x38; // bool
		constexpr auto FFTSize = 0x39; // EConstantQFFTSizeEnum
		constexpr auto WindowType = 0x3a; // EFFTWindowType
		constexpr auto SpectrumType = 0x3b; // EAudioSpectrumType
		constexpr auto BandWidthStretch = 0x3c; // float
		constexpr auto CQTNormalization = 0x40; // EConstantQNormalizationEnum
		constexpr auto NoiseFloorDb = 0x44; // float
	}

	namespace n_UNiagaraDataInterfaceArrayFloat4 {
		constexpr auto FloatData = 0x50; // TArray<FVector4>
	}

	namespace n_UInteractiveToolsContext {
		constexpr auto InputRouter = 0x58; // UInputRouter*
		constexpr auto ToolManager = 0x60; // UInteractiveToolManager*
		constexpr auto GizmoManager = 0x68; // UInteractiveGizmoManager*
		constexpr auto ToolManagerClass = 0x70; // TSoftClassPtr<UObject>
	}

	namespace n_UPlatformMediaSource {
		constexpr auto MediaSource = 0x80; // UMediaSource*
	}

	namespace n_UEngine {
		constexpr auto TinyFont = 0x30; // UFont*
		constexpr auto TinyFontName = 0x38; // FSoftObjectPath
		constexpr auto SmallFont = 0x50; // UFont*
		constexpr auto SmallFontName = 0x58; // FSoftObjectPath
		constexpr auto MediumFont = 0x70; // UFont*
		constexpr auto MediumFontName = 0x78; // FSoftObjectPath
		constexpr auto LargeFont = 0x90; // UFont*
		constexpr auto LargeFontName = 0x98; // FSoftObjectPath
		constexpr auto SubtitleFont = 0xb0; // UFont*
		constexpr auto SubtitleFontName = 0xb8; // FSoftObjectPath
		constexpr auto AdditionalFonts = 0xd0; // TArray<UFont*>
		constexpr auto AdditionalFontNames = 0xe0; // TArray<FString>
		constexpr auto ConsoleClass = 0xf0; // UConsole*
		constexpr auto ConsoleClassName = 0xf8; // FSoftClassPath
		constexpr auto GameViewportClientClass = 0x110; // UGameViewportClient*
		constexpr auto GameViewportClientClassName = 0x118; // FSoftClassPath
		constexpr auto LocalPlayerClass = 0x130; // ULocalPlayer*
		constexpr auto LocalPlayerClassName = 0x138; // FSoftClassPath
		constexpr auto WorldSettingsClass = 0x150; // AWorldSettings*
		constexpr auto WorldSettingsClassName = 0x158; // FSoftClassPath
		constexpr auto NavigationSystemClassName = 0x170; // FSoftClassPath
		constexpr auto NavigationSystemClass = 0x188; // UNavigationSystemBase*
		constexpr auto NavigationSystemConfigClassName = 0x190; // FSoftClassPath
		constexpr auto NavigationSystemConfigClass = 0x1a8; // UNavigationSystemConfig*
		constexpr auto AvoidanceManagerClassName = 0x1b0; // FSoftClassPath
		constexpr auto AvoidanceManagerClass = 0x1c8; // UAvoidanceManager*
		constexpr auto AIControllerClassName = 0x1d0; // FSoftClassPath
		constexpr auto PhysicsCollisionHandlerClass = 0x1e8; // UPhysicsCollisionHandler*
		constexpr auto PhysicsCollisionHandlerClassName = 0x1f0; // FSoftClassPath
		constexpr auto GameUserSettingsClassName = 0x208; // FSoftClassPath
		constexpr auto GameUserSettingsClass = 0x220; // UGameUserSettings*
		constexpr auto GameUserSettings = 0x228; // UGameUserSettings*
		constexpr auto LevelScriptActorClass = 0x230; // ALevelScriptActor*
		constexpr auto LevelScriptActorClassName = 0x238; // FSoftClassPath
		constexpr auto DefaultBlueprintBaseClassName = 0x250; // FSoftClassPath
		constexpr auto GameSingletonClassName = 0x268; // FSoftClassPath
		constexpr auto GameSingleton = 0x280; // UObject*
		constexpr auto AssetManagerClassName = 0x288; // FSoftClassPath
		constexpr auto AssetManager = 0x2a0; // UAssetManager*
		constexpr auto DefaultTexture = 0x2a8; // UTexture2D*
		constexpr auto DefaultTextureName = 0x2b0; // FSoftObjectPath
		constexpr auto DefaultDiffuseTexture = 0x2c8; // UTexture*
		constexpr auto DefaultDiffuseTextureName = 0x2d0; // FSoftObjectPath
		constexpr auto DefaultBSPVertexTexture = 0x2e8; // UTexture2D*
		constexpr auto DefaultBSPVertexTextureName = 0x2f0; // FSoftObjectPath
		constexpr auto HighFrequencyNoiseTexture = 0x308; // UTexture2D*
		constexpr auto HighFrequencyNoiseTextureName = 0x310; // FSoftObjectPath
		constexpr auto DefaultBokehTexture = 0x328; // UTexture2D*
		constexpr auto DefaultBokehTextureName = 0x330; // FSoftObjectPath
		constexpr auto DefaultBloomKernelTexture = 0x348; // UTexture2D*
		constexpr auto DefaultBloomKernelTextureName = 0x350; // FSoftObjectPath
		constexpr auto WireframeMaterial = 0x368; // UMaterial*
		constexpr auto WireframeMaterialName = 0x370; // FString
		constexpr auto DebugMeshMaterial = 0x380; // UMaterial*
		constexpr auto DebugMeshMaterialName = 0x388; // FSoftObjectPath
		constexpr auto EmissiveMeshMaterial = 0x3a0; // UMaterial*
		constexpr auto EmissiveMeshMaterialName = 0x3a8; // FSoftObjectPath
		constexpr auto LevelColorationLitMaterial = 0x3c0; // UMaterial*
		constexpr auto LevelColorationLitMaterialName = 0x3c8; // FString
		constexpr auto LevelColorationUnlitMaterial = 0x3d8; // UMaterial*
		constexpr auto LevelColorationUnlitMaterialName = 0x3e0; // FString
		constexpr auto LightingTexelDensityMaterial = 0x3f0; // UMaterial*
		constexpr auto LightingTexelDensityName = 0x3f8; // FString
		constexpr auto ShadedLevelColorationLitMaterial = 0x408; // UMaterial*
		constexpr auto ShadedLevelColorationLitMaterialName = 0x410; // FString
		constexpr auto ShadedLevelColorationUnlitMaterial = 0x420; // UMaterial*
		constexpr auto ShadedLevelColorationUnlitMaterialName = 0x428; // FString
		constexpr auto RemoveSurfaceMaterial = 0x438; // UMaterial*
		constexpr auto RemoveSurfaceMaterialName = 0x440; // FSoftObjectPath
		constexpr auto VertexColorMaterial = 0x458; // UMaterial*
		constexpr auto VertexColorMaterialName = 0x460; // FString
		constexpr auto VertexColorViewModeMaterial_ColorOnly = 0x470; // UMaterial*
		constexpr auto VertexColorViewModeMaterialName_ColorOnly = 0x478; // FString
		constexpr auto VertexColorViewModeMaterial_AlphaAsColor = 0x488; // UMaterial*
		constexpr auto VertexColorViewModeMaterialName_AlphaAsColor = 0x490; // FString
		constexpr auto VertexColorViewModeMaterial_RedOnly = 0x4a0; // UMaterial*
		constexpr auto VertexColorViewModeMaterialName_RedOnly = 0x4a8; // FString
		constexpr auto VertexColorViewModeMaterial_GreenOnly = 0x4b8; // UMaterial*
		constexpr auto VertexColorViewModeMaterialName_GreenOnly = 0x4c0; // FString
		constexpr auto VertexColorViewModeMaterial_BlueOnly = 0x4d0; // UMaterial*
		constexpr auto VertexColorViewModeMaterialName_BlueOnly = 0x4d8; // FString
		constexpr auto DebugEditorMaterialName = 0x4e8; // FSoftObjectPath
		constexpr auto ConstraintLimitMaterial = 0x500; // UMaterial*
		constexpr auto ConstraintLimitMaterialX = 0x508; // UMaterialInstanceDynamic*
		constexpr auto ConstraintLimitMaterialXAxis = 0x510; // UMaterialInstanceDynamic*
		constexpr auto ConstraintLimitMaterialY = 0x518; // UMaterialInstanceDynamic*
		constexpr auto ConstraintLimitMaterialYAxis = 0x520; // UMaterialInstanceDynamic*
		constexpr auto ConstraintLimitMaterialZ = 0x528; // UMaterialInstanceDynamic*
		constexpr auto ConstraintLimitMaterialZAxis = 0x530; // UMaterialInstanceDynamic*
		constexpr auto ConstraintLimitMaterialPrismatic = 0x538; // UMaterialInstanceDynamic*
		constexpr auto InvalidLightmapSettingsMaterial = 0x540; // UMaterial*
		constexpr auto InvalidLightmapSettingsMaterialName = 0x548; // FSoftObjectPath
		constexpr auto PreviewShadowsIndicatorMaterial = 0x560; // UMaterial*
		constexpr auto PreviewShadowsIndicatorMaterialName = 0x568; // FSoftObjectPath
		constexpr auto ArrowMaterial = 0x580; // UMaterial*
		constexpr auto ArrowMaterialYellow = 0x588; // UMaterialInstanceDynamic*
		constexpr auto ArrowMaterialName = 0x590; // FSoftObjectPath
		constexpr auto LightingOnlyBrightness = 0x5a8; // FLinearColor
		constexpr auto ShaderComplexityColors = 0x5b8; // TArray<FLinearColor>
		constexpr auto QuadComplexityColors = 0x5c8; // TArray<FLinearColor>
		constexpr auto LightComplexityColors = 0x5d8; // TArray<FLinearColor>
		constexpr auto StationaryLightOverlapColors = 0x5e8; // TArray<FLinearColor>
		constexpr auto LODColorationColors = 0x5f8; // TArray<FLinearColor>
		constexpr auto HLODColorationColors = 0x608; // TArray<FLinearColor>
		constexpr auto StreamingAccuracyColors = 0x618; // TArray<FLinearColor>
		constexpr auto MaxPixelShaderAdditiveComplexityCount = 0x628; // float
		constexpr auto MaxES3PixelShaderAdditiveComplexityCount = 0x62c; // float
		constexpr auto MinLightMapDensity = 0x630; // float
		constexpr auto IdealLightMapDensity = 0x634; // float
		constexpr auto MaxLightMapDensity = 0x638; // float
		constexpr auto bRenderLightMapDensityGrayscale = 0x63c; // char : 1
		constexpr auto RenderLightMapDensityGrayscaleScale = 0x640; // float
		constexpr auto RenderLightMapDensityColorScale = 0x644; // float
		constexpr auto LightMapDensityVertexMappedColor = 0x648; // FLinearColor
		constexpr auto LightMapDensitySelectedColor = 0x658; // FLinearColor
		constexpr auto StatColorMappings = 0x668; // TArray<FStatColorMapping>
		constexpr auto DefaultPhysMaterial = 0x678; // UPhysicalMaterial*
		constexpr auto DefaultPhysMaterialName = 0x680; // FSoftObjectPath
		constexpr auto ActiveGameNameRedirects = 0x698; // TArray<FGameNameRedirect>
		constexpr auto ActiveClassRedirects = 0x6a8; // TArray<FClassRedirect>
		constexpr auto ActivePluginRedirects = 0x6b8; // TArray<FPluginRedirect>
		constexpr auto ActiveStructRedirects = 0x6c8; // TArray<FStructRedirect>
		constexpr auto PreIntegratedSkinBRDFTexture = 0x6d8; // UTexture2D*
		constexpr auto PreIntegratedSkinBRDFTextureName = 0x6e0; // FSoftObjectPath
		constexpr auto BlueNoiseTexture = 0x6f8; // UTexture2D*
		constexpr auto BlueNoiseTextureName = 0x700; // FSoftObjectPath
		constexpr auto MiniFontTexture = 0x718; // UTexture2D*
		constexpr auto MiniFontTextureName = 0x720; // FSoftObjectPath
		constexpr auto WeightMapPlaceholderTexture = 0x738; // UTexture*
		constexpr auto WeightMapPlaceholderTextureName = 0x740; // FSoftObjectPath
		constexpr auto LightMapDensityTexture = 0x758; // UTexture2D*
		constexpr auto LightMapDensityTextureName = 0x760; // FSoftObjectPath
		constexpr auto GameViewport = 0x780; // UGameViewportClient*
		constexpr auto DeferredCommands = 0x788; // TArray<FString>
		constexpr auto NearClipPlane = 0x798; // float
		constexpr auto bSubtitlesEnabled = 0x79c; // char : 1
		constexpr auto bSubtitlesForcedOff = 0x79c; // char : 1
		constexpr auto MaximumLoopIterationCount = 0x7a0; // int32_t
		constexpr auto bCanBlueprintsTickByDefault = 0x7a4; // char : 1
		constexpr auto bOptimizeAnimBlueprintMemberVariableAccess = 0x7a4; // char : 1
		constexpr auto bAllowMultiThreadedAnimationUpdate = 0x7a4; // char : 1
		constexpr auto bEnableEditorPSysRealtimeLOD = 0x7a4; // char : 1
		constexpr auto bSmoothFrameRate = 0x7a4; // char : 1
		constexpr auto bUseFixedFrameRate = 0x7a4; // char : 1
		constexpr auto FixedFrameRate = 0x7a8; // float
		constexpr auto SmoothedFrameRateRange = 0x7ac; // FFloatRange
		constexpr auto CustomTimeStep = 0x7c0; // UEngineCustomTimeStep*
		constexpr auto CustomTimeStepClassName = 0x7e8; // FSoftClassPath
		constexpr auto TimecodeProvider = 0x800; // UTimecodeProvider*
		constexpr auto TimecodeProviderClassName = 0x828; // FSoftClassPath
		constexpr auto bGenerateDefaultTimecode = 0x840; // bool
		constexpr auto GenerateDefaultTimecodeFrameRate = 0x844; // FFrameRate
		constexpr auto GenerateDefaultTimecodeFrameDelay = 0x84c; // float
		constexpr auto bCheckForMultiplePawnsSpawnedInAFrame = 0x850; // char : 1
		constexpr auto NumPawnsAllowedToBeSpawnedInAFrame = 0x854; // int32_t
		constexpr auto bShouldGenerateLowQualityLightmaps = 0x858; // char : 1
		constexpr auto C_WorldBox = 0x85c; // FColor
		constexpr auto C_BrushWire = 0x860; // FColor
		constexpr auto C_AddWire = 0x864; // FColor
		constexpr auto C_SubtractWire = 0x868; // FColor
		constexpr auto C_SemiSolidWire = 0x86c; // FColor
		constexpr auto C_NonSolidWire = 0x870; // FColor
		constexpr auto C_WireBackground = 0x874; // FColor
		constexpr auto C_ScaleBoxHi = 0x878; // FColor
		constexpr auto C_VolumeCollision = 0x87c; // FColor
		constexpr auto C_BSPCollision = 0x880; // FColor
		constexpr auto C_OrthoBackground = 0x884; // FColor
		constexpr auto C_Volume = 0x888; // FColor
		constexpr auto C_BrushShape = 0x88c; // FColor
		constexpr auto StreamingDistanceFactor = 0x890; // float
		constexpr auto GameScreenshotSaveDirectory = 0x898; // FDirectoryPath
		constexpr auto TransitionType = 0x8a8; // ETransitionType
		constexpr auto TransitionDescription = 0x8b0; // FString
		constexpr auto TransitionGameMode = 0x8c0; // FString
		constexpr auto bAllowMatureLanguage = 0x8d0; // char : 1
		constexpr auto CameraRotationThreshold = 0x8d4; // float
		constexpr auto CameraTranslationThreshold = 0x8d8; // float
		constexpr auto PrimitiveProbablyVisibleTime = 0x8dc; // float
		constexpr auto MaxOcclusionPixelsFraction = 0x8e0; // float
		constexpr auto bPauseOnLossOfFocus = 0x8e4; // char : 1
		constexpr auto MaxParticleResize = 0x8e8; // int32_t
		constexpr auto MaxParticleResizeWarn = 0x8ec; // int32_t
		constexpr auto PendingDroppedNotes = 0x8f0; // TArray<FDropNoteInfo>
		constexpr auto NetClientTicksPerSecond = 0x900; // float
		constexpr auto DisplayGamma = 0x904; // float
		constexpr auto MinDesiredFrameRate = 0x908; // float
		constexpr auto DefaultSelectedMaterialColor = 0x90c; // FLinearColor
		constexpr auto SelectedMaterialColor = 0x91c; // FLinearColor
		constexpr auto SelectionOutlineColor = 0x92c; // FLinearColor
		constexpr auto SubduedSelectionOutlineColor = 0x93c; // FLinearColor
		constexpr auto SelectedMaterialColorOverride = 0x94c; // FLinearColor
		constexpr auto bIsOverridingSelectedColor = 0x95c; // bool
		constexpr auto bEnableOnScreenDebugMessages = 0x960; // char : 1
		constexpr auto bEnableOnScreenDebugMessagesDisplay = 0x960; // char : 1
		constexpr auto bSuppressMapWarnings = 0x960; // char : 1
		constexpr auto bDisableAILogging = 0x960; // char : 1
		constexpr auto bEnableVisualLogRecordingOnStart = 0x964; // uint32_t
		constexpr auto ScreenSaverInhibitorSemaphore = 0x968; // int32_t
		constexpr auto bLockReadOnlyLevels = 0x96c; // char : 1
		constexpr auto ParticleEventManagerClassPath = 0x970; // FString
		constexpr auto SelectionHighlightIntensity = 0x980; // float
		constexpr auto BSPSelectionHighlightIntensity = 0x984; // float
		constexpr auto SelectionHighlightIntensityBillboards = 0x988; // float
		constexpr auto NetDriverDefinitions = 0xbf8; // TArray<FNetDriverDefinition>
		constexpr auto ServerActors = 0xc08; // TArray<FString>
		constexpr auto RuntimeServerActors = 0xc18; // TArray<FString>
		constexpr auto NetErrorLogInterval = 0xc28; // float
		constexpr auto bStartedLoadMapMovie = 0xc2c; // char : 1
		constexpr auto NextWorldContextHandle = 0xc48; // int32_t
	}

	namespace n_UMaterialExpressionSamplePhysicsIntegerField {
		constexpr auto WorldPosition = 0x40; // FExpressionInput
		constexpr auto FieldTarget = 0x54; // EFieldIntegerType
	}

	namespace n_UMaterialExpressionSceneDepthWithoutWater {
		constexpr auto InputMode = 0x40; // EMaterialSceneAttributeInputMode
		constexpr auto Input = 0x44; // FExpressionInput
		constexpr auto ConstInput = 0x58; // FVector2D
		constexpr auto FallbackDepth = 0x60; // float
	}

	namespace n_UMaterialExpressionLandscapeLayerSample {
		constexpr auto ParameterName = 0x40; // FName
		constexpr auto PreviewWeight = 0x48; // float
		constexpr auto ExpressionGUID = 0x4c; // FGuid
	}

	namespace n_UCrowdFollowingComponent {
		constexpr auto CrowdAgentMoveDirection = 0x268; // FVector
	}

	namespace n_UUserDefinedCaptureProtocol {
		constexpr auto World = 0x58; // UWorld*
	}

	namespace n_UWheeledVehicleMovementComponent {
		constexpr auto bDeprecatedSpringOffsetMode = 0x140; // char : 1
		constexpr auto bReverseAsBrake = 0x140; // char : 1
		constexpr auto bUseRVOAvoidance = 0x140; // char : 1
		constexpr auto bRawHandbrakeInput = 0x140; // char : 1
		constexpr auto bRawGearUpInput = 0x140; // char : 1
		constexpr auto bRawGearDownInput = 0x140; // char : 1
		constexpr auto bWasAvoidanceUpdated = 0x144; // char : 1
		constexpr auto Mass = 0x148; // float
		constexpr auto WheelSetups = 0x150; // TArray<FWheelSetup>
		constexpr auto DragCoefficient = 0x160; // float
		constexpr auto ChassisWidth = 0x164; // float
		constexpr auto ChassisHeight = 0x168; // float
		constexpr auto DragArea = 0x16c; // float
		constexpr auto EstimatedMaxEngineSpeed = 0x170; // float
		constexpr auto MaxEngineRPM = 0x174; // float
		constexpr auto DebugDragMagnitude = 0x178; // float
		constexpr auto InertiaTensorScale = 0x17c; // FVector
		constexpr auto MinNormalizedTireLoad = 0x188; // float
		constexpr auto MinNormalizedTireLoadFiltered = 0x18c; // float
		constexpr auto MaxNormalizedTireLoad = 0x190; // float
		constexpr auto MaxNormalizedTireLoadFiltered = 0x194; // float
		constexpr auto ThresholdLongitudinalSpeed = 0x198; // float
		constexpr auto LowForwardSpeedSubStepCount = 0x19c; // int32_t
		constexpr auto HighForwardSpeedSubStepCount = 0x1a0; // int32_t
		constexpr auto Wheels = 0x1a8; // TArray<UVehicleWheel*>
		constexpr auto RVOAvoidanceRadius = 0x1d0; // float
		constexpr auto RVOAvoidanceHeight = 0x1d4; // float
		constexpr auto AvoidanceConsiderationRadius = 0x1d8; // float
		constexpr auto RVOSteeringStep = 0x1dc; // float
		constexpr auto RVOThrottleStep = 0x1e0; // float
		constexpr auto AvoidanceUID = 0x1e4; // int32_t
		constexpr auto AvoidanceGroup = 0x1e8; // FNavAvoidanceMask
		constexpr auto GroupsToAvoid = 0x1ec; // FNavAvoidanceMask
		constexpr auto GroupsToIgnore = 0x1f0; // FNavAvoidanceMask
		constexpr auto AvoidanceWeight = 0x1f4; // float
		constexpr auto PendingLaunchVelocity = 0x1f8; // FVector
		constexpr auto ReplicatedState = 0x204; // FReplicatedVehicleState
		constexpr auto RawSteeringInput = 0x21c; // float
		constexpr auto RawThrottleInput = 0x220; // float
		constexpr auto RawBrakeInput = 0x224; // float
		constexpr auto SteeringInput = 0x228; // float
		constexpr auto ThrottleInput = 0x22c; // float
		constexpr auto BrakeInput = 0x230; // float
		constexpr auto HandbrakeInput = 0x234; // float
		constexpr auto IdleBrakeInput = 0x238; // float
		constexpr auto StopThreshold = 0x23c; // float
		constexpr auto WrongDirectionThreshold = 0x240; // float
		constexpr auto ThrottleInputRate = 0x244; // FVehicleInputRate
		constexpr auto BrakeInputRate = 0x24c; // FVehicleInputRate
		constexpr auto HandbrakeInputRate = 0x254; // FVehicleInputRate
		constexpr auto SteeringInputRate = 0x25c; // FVehicleInputRate
		constexpr auto OverrideController = 0x288; // AController*
	}

	namespace n_UPortalWarsChallengeCompleteEntry {
		constexpr auto AkComp = 0x8a0; // UAkComponent*
		constexpr auto ProgressSFXLoop = 0x8a8; // UAkAudioEvent*
		constexpr auto ProgressSFXStopLoop = 0x8b0; // UAkAudioEvent*
	}

	namespace n_UPropertyBinding {
		constexpr auto SourceObject = 0x28; // TWeakObjectPtr<UObject>
		constexpr auto SourcePath = 0x30; // FDynamicPropertyPath
		constexpr auto DestinationProperty = 0x58; // FName
	}

	namespace n_UInstancedStaticMeshComponent {
		constexpr auto PerInstanceSMData = 0x4e0; // TArray<FInstancedStaticMeshInstanceData>
		constexpr auto NumCustomDataFloats = 0x4f0; // int32_t
		constexpr auto PerInstanceSMCustomData = 0x4f8; // TArray<float>
		constexpr auto InstancingRandomSeed = 0x508; // int32_t
		constexpr auto InstanceStartCullDistance = 0x50c; // int32_t
		constexpr auto InstanceEndCullDistance = 0x510; // int32_t
		constexpr auto InstanceReorderTable = 0x518; // TArray<int32_t>
		constexpr auto NumPendingLightmaps = 0x570; // int32_t
		constexpr auto CachedMappings = 0x578; // TArray<FInstancedStaticMeshMappingInfo>
	}

	namespace n_UMaterialExpressionDeriveNormalZ {
		constexpr auto InXY = 0x40; // FExpressionInput
	}

	namespace n_UButton {
		constexpr auto Style = 0x120; // USlateWidgetStyleAsset*
		constexpr auto WidgetStyle = 0x128; // FButtonStyle
		constexpr auto ColorAndOpacity = 0x3a0; // FLinearColor
		constexpr auto BackgroundColor = 0x3b0; // FLinearColor
		constexpr auto ClickMethod = 0x3c0; // EButtonClickMethod
		constexpr auto TouchMethod = 0x3c1; // EButtonTouchMethod
		constexpr auto PressMethod = 0x3c2; // EButtonPressMethod
		constexpr auto IsFocusable = 0x3c3; // bool
		constexpr auto OnClicked = 0x3c8; // FMulticastInlineDelegate
		constexpr auto OnPressed = 0x3d8; // FMulticastInlineDelegate
		constexpr auto OnReleased = 0x3e8; // FMulticastInlineDelegate
		constexpr auto OnHovered = 0x3f8; // FMulticastInlineDelegate
		constexpr auto OnUnhovered = 0x408; // FMulticastInlineDelegate
	}

	namespace n_UPortalWarsChatWidget {
		constexpr auto InputRoot = 0x2a8; // UWidget*
		constexpr auto ChatRoot = 0x2b0; // UWidget*
		constexpr auto ChatTypeText = 0x2c0; // UTextBlock*
		constexpr auto GeneralChatColor = 0x2c8; // FLinearColor
		constexpr auto TeamChatColor = 0x2d8; // FLinearColor
		constexpr auto ChatInputBox = 0x2e8; // UEditableText*
		constexpr auto ChatLogPanel = 0x2f0; // UScrollBox*
		constexpr auto ChatTextWidgetClass = 0x2f8; // UPortalWarsChatEntryWidget*
		constexpr auto bCanCycleChannels = 0x308; // bool
		constexpr auto TimeToDisplay = 0x30c; // float
		constexpr auto NumMaxMessages = 0x310; // int32_t
		constexpr auto MessageCharacterLimit = 0x314; // int32_t
	}

	namespace n_UNiagaraComponentPool {
		constexpr auto WorldParticleSystemPools = 0x28; // TMap<UNiagaraSystem*, FNCPool>
	}

	namespace n_USourceEffectRingModulationPreset {
		constexpr auto Settings = 0xb0; // FSourceEffectRingModulationSettings
	}

	namespace n_UFloatingPawnMovement {
		constexpr auto MaxSpeed = 0x138; // float
		constexpr auto Acceleration = 0x13c; // float
		constexpr auto Deceleration = 0x140; // float
		constexpr auto TurningBoost = 0x144; // float
		constexpr auto bPositionCorrected = 0x148; // char : 1
	}

	namespace n_ULandscapeSplineControlPoint {
		constexpr auto Location = 0x28; // FVector
		constexpr auto Rotation = 0x34; // FRotator
		constexpr auto Width = 0x40; // float
		constexpr auto LayerWidthRatio = 0x44; // float
		constexpr auto SideFalloff = 0x48; // float
		constexpr auto LeftSideFalloffFactor = 0x4c; // float
		constexpr auto RightSideFalloffFactor = 0x50; // float
		constexpr auto LeftSideLayerFalloffFactor = 0x54; // float
		constexpr auto RightSideLayerFalloffFactor = 0x58; // float
		constexpr auto EndFalloff = 0x5c; // float
		constexpr auto ConnectedSegments = 0x60; // TArray<FLandscapeSplineConnection>
		constexpr auto Points = 0x70; // TArray<FLandscapeSplineInterpPoint>
		constexpr auto Bounds = 0x80; // FBox
		constexpr auto LocalMeshComponent = 0xa0; // UControlPointMeshComponent*
	}

	namespace n_UParticleModuleMeshRotation_Seeded {
		constexpr auto RandomSeedInfo = 0x80; // FParticleRandomSeedInfo
	}

	namespace n_UNiagaraBakerSettings {
		constexpr auto StartSeconds = 0x28; // float
		constexpr auto DurationSeconds = 0x2c; // float
		constexpr auto FramesPerSecond = 0x30; // int32_t
		constexpr auto bPreviewLooping = 0x34; // char : 1
		constexpr auto FramesPerDimension = 0x38; // FIntPoint
		constexpr auto OutputTextures = 0x40; // TArray<FNiagaraBakerTextureSettings>
		constexpr auto CameraViewportMode = 0x50; // ENiagaraBakerViewMode
		constexpr auto CameraViewportLocation = 0x54; // FVector [0x7]
		constexpr auto CameraViewportRotation = 0xa8; // FRotator [0x7]
		constexpr auto CameraOrbitDistance = 0xfc; // float
		constexpr auto CameraFOV = 0x100; // float
		constexpr auto CameraOrthoWidth = 0x104; // float
		constexpr auto bUseCameraAspectRatio = 0x108; // char : 1
		constexpr auto CameraAspectRatio = 0x10c; // float
		constexpr auto bRenderComponentOnly = 0x110; // char : 1
	}

	namespace n_URadialForceComponent {
		constexpr auto Radius = 0x1f8; // float
		constexpr auto Falloff = 0x1fc; // ERadialImpulseFalloff
		constexpr auto ImpulseStrength = 0x200; // float
		constexpr auto bImpulseVelChange = 0x204; // char : 1
		constexpr auto bIgnoreOwningActor = 0x204; // char : 1
		constexpr auto ForceStrength = 0x208; // float
		constexpr auto DestructibleDamage = 0x20c; // float
		constexpr auto ObjectTypesToAffect = 0x210; // TArray<EObjectTypeQuery>
	}

	namespace n_UMaterialExpressionVectorParameter {
		constexpr auto DefaultValue = 0x58; // FLinearColor
		constexpr auto bUseCustomPrimitiveData = 0x68; // bool
		constexpr auto PrimitiveDataIndex = 0x69; // char
	}

	namespace n_UGeometryCacheTrackStreamable {
		constexpr auto Codec = 0x58; // UGeometryCacheCodecBase*
		constexpr auto StartSampleTime = 0xc8; // float
	}

	namespace n_UActorSequence {
		constexpr auto MovieScene = 0x60; // UMovieScene*
		constexpr auto ObjectReferences = 0x68; // FActorSequenceObjectReferenceMap
	}

	namespace n_UBTTask_BlueprintBase {
		constexpr auto AIOwner = 0x70; // AAIController*
		constexpr auto ActorOwner = 0x78; // AActor*
		constexpr auto TickInterval = 0x80; // FIntervalCountdown
		constexpr auto bShowPropertyDetails = 0xa0; // char : 1
	}

	namespace n_UParticleModuleAccelerationBase {
		constexpr auto bAlwaysInWorldSpace = 0x30; // char : 1
	}

	namespace n_APortalWarsBaseGameState {
		constexpr auto InactivePlayerArray = 0x2d8; // TArray<APlayerState*>
		constexpr auto RemainingTime = 0x300; // int32_t
		constexpr auto ReplicatedRemainingTime = 0x304; // int32_t
		constexpr auto PlaylistType = 0x308; // FString
		constexpr auto ServerType = 0x318; // EServerType
		constexpr auto GameConfig = 0x320; // FGameConfig
		constexpr auto MaxPlayers = 0x47c; // int32_t
	}

	namespace n_UMaterialExpressionTransform {
		constexpr auto Input = 0x40; // FExpressionInput
		constexpr auto TransformSourceType = 0x54; // EMaterialVectorCoordTransformSource
		constexpr auto TransformType = 0x55; // EMaterialVectorCoordTransform
	}

	namespace n_UMotoSynthSource {
		constexpr auto bConvertTo8Bit = 0x28; // bool
		constexpr auto DownSampleFactor = 0x2c; // float
		constexpr auto RPMCurve = 0x30; // FRuntimeFloatCurve
		constexpr auto SourceData = 0xb8; // TArray<float>
		constexpr auto SourceDataPCM = 0xc8; // TArray<int16_t>
		constexpr auto SourceSampleRate = 0xd8; // int32_t
		constexpr auto GrainTable = 0xe0; // TArray<FGrainTableEntry>
	}

	namespace n_UAnimSharingInstance {
		constexpr auto RegisteredActors = 0x28; // TArray<AActor*>
		constexpr auto StateProcessor = 0x88; // UAnimationSharingStateProcessor*
		constexpr auto UsedAnimationSequences = 0xc8; // TArray<UAnimSequence*>
		constexpr auto StateEnum = 0xe8; // UEnum*
		constexpr auto SharingActor = 0xf0; // AActor*
	}

	namespace n_UEditableGeometryCollectionAdapter {
		constexpr auto GeometryCollection = 0x28; // UGeometryCollection*
		constexpr auto OriginalGeometryCollection = 0x30; // UGeometryCollection*
		constexpr auto GeometryCollectionLODIndex = 0x38; // int32_t
	}

	namespace n_UPortalWarsPlaylistEntryWidget {
		constexpr auto DescriptionText = 0x420; // UTextBlock*
		constexpr auto DisplayImage = 0x428; // UImage*
		constexpr auto IconImage = 0x430; // UImage*
		constexpr auto RankRoot = 0x438; // UWidget*
		constexpr auto RankImage = 0x440; // UImage*
		constexpr auto RankXPText = 0x448; // UTextBlock*
		constexpr auto FeaturedIndicator = 0x450; // UWidget*
		constexpr auto FeaturedScrim = 0x458; // UWidget*
		constexpr auto NoteText = 0x460; // UTextBlock*
		constexpr auto NoteRoot = 0x468; // UWidget*
		constexpr auto XPBoostIndicator = 0x470; // UWidget*
		constexpr auto XPBoostText = 0x478; // UTextBlock*
		constexpr auto CrossplayIndicator = 0x480; // UWidget*
		constexpr auto HorizontalAlignment = 0x488; // EHorizontalAlignment
		constexpr auto ScrimSwitcher = 0x490; // UWidgetSwitcher*
		constexpr auto bIsPreviewOnly = 0x498; // bool
		constexpr auto PlaylistInternalName = 0x520; // FString
		constexpr auto CheckBoxSwitcher = 0x538; // UWidgetSwitcher*
		constexpr auto bIsCheckbox = 0x540; // bool
		constexpr auto OpenModeSelectEvent = 0x548; // UAkAudioEvent*
	}

	namespace n_UMovieSceneNiagaraSystemSpawnSection {
		constexpr auto SectionStartBehavior = 0xe8; // ENiagaraSystemSpawnSectionStartBehavior
		constexpr auto SectionEvaluateBehavior = 0xec; // ENiagaraSystemSpawnSectionEvaluateBehavior
		constexpr auto SectionEndBehavior = 0xf0; // ENiagaraSystemSpawnSectionEndBehavior
		constexpr auto AgeUpdateMode = 0xf4; // ENiagaraAgeUpdateMode
	}

	namespace n_UParticleModuleLocationWorldOffset_Seeded {
		constexpr auto RandomSeedInfo = 0x80; // FParticleRandomSeedInfo
	}

	namespace n_USequenceCameraShakeCameraStandIn {
		constexpr auto FieldOfView = 0x30; // float
		constexpr auto bConstrainAspectRatio = 0x34; // char : 1
		constexpr auto AspectRatio = 0x38; // float
		constexpr auto PostProcessSettings = 0x40; // FPostProcessSettings
		constexpr auto PostProcessBlendWeight = 0x590; // float
		constexpr auto Filmback = 0x594; // FCameraFilmbackSettings
		constexpr auto LensSettings = 0x5a0; // FCameraLensSettings
		constexpr auto FocusSettings = 0x5b8; // FCameraFocusSettings
		constexpr auto CurrentFocalLength = 0x610; // float
		constexpr auto CurrentAperture = 0x614; // float
		constexpr auto CurrentFocusDistance = 0x618; // float
	}

	namespace n_UParticleModuleLight_Seeded {
		constexpr auto RandomSeedInfo = 0x120; // FParticleRandomSeedInfo
	}

	namespace n_UPortalWarsKillcamWidget {
		constexpr auto KilledBy = 0x260; // UPortalWarsKillcamKilledByWidget*
		constexpr auto KillerPlayerEntry = 0x268; // UPortalWarsKillPlayerEntryWidget*
		constexpr auto KillcamSkip = 0x270; // UUserWidget*
	}

	namespace n_UPortalWarsDamageNumberEntryWidget {
		constexpr auto FadeInAnimation = 0x268; // UWidgetAnimation*
		constexpr auto FadeOutAnimation = 0x270; // UWidgetAnimation*
		constexpr auto DamageText = 0x278; // UTextBlock*
	}

	namespace n_USynthComponentMonoWaveTable {
		constexpr auto OnTableAltered = 0x6c0; // FMulticastInlineDelegate
		constexpr auto OnNumTablesChanged = 0x6d0; // FMulticastInlineDelegate
		constexpr auto CurrentPreset = 0x6e0; // UMonoWaveTableSynthPreset*
	}

	namespace n_ABandwidthTestActor {
		constexpr auto BandwidthGenerator = 0x220; // FBandwidthTestGenerator
	}

	namespace n_UMovieScenePrimitiveMaterialTrack {
		constexpr auto MaterialIndex = 0xb0; // int32_t
	}

	namespace n_UOnlineSessionClient {
		constexpr auto bIsFromInvite = 0x1c0; // bool
		constexpr auto bHandlingDisconnect = 0x1c1; // bool
	}

	namespace n_UOnlinePIESettings {
		constexpr auto bOnlinePIEEnabled = 0x38; // bool
		constexpr auto Logins = 0x40; // TArray<FPIELoginSettingsInternal>
	}

	namespace n_UMaterialExpressionTangent {
		constexpr auto Input = 0x40; // FExpressionInput
		constexpr auto Period = 0x54; // float
	}

	namespace n_UPortalWarsGamepadSettingsWidget {
		constexpr auto ControllerHorSens = 0x358; // UPortalWarsSpinSliderWidget*
		constexpr auto ControllerVertSens = 0x360; // UPortalWarsSpinSliderWidget*
		constexpr auto ControllerAccelSens = 0x368; // UPortalWarsSpinSliderWidget*
		constexpr auto ControllerZoomMult = 0x370; // UPortalWarsSpinSliderWidget*
		constexpr auto ControllerInnerDeadzone = 0x378; // UPortalWarsSpinSliderWidget*
		constexpr auto ControllerOuterDeadzone = 0x380; // UPortalWarsSpinSliderWidget*
		constexpr auto ControllerInvertLook = 0x388; // UPortalWarsCheckBoxWidget*
		constexpr auto ControllerAutosprint = 0x390; // UPortalWarsCheckBoxWidget*
		constexpr auto ControllerVibration = 0x398; // UPortalWarsCheckBoxWidget*
		constexpr auto ControllerAimAssistStrength = 0x3a0; // UPortalWarsSpinSliderWidget*
	}

	namespace n_UMovieSceneByteSection {
		constexpr auto ByteCurve = 0xf0; // FMovieSceneByteChannel
	}

	namespace n_URichTextBlock {
		constexpr auto Text = 0x128; // FText
		constexpr auto TextStyleSet = 0x140; // UDataTable*
		constexpr auto DecoratedTextStyleSet = 0x148; // UDataTable*
		constexpr auto DecoratorClasses = 0x150; // TArray<URichTextBlockDecorator*>
		constexpr auto bOverrideDefaultStyle = 0x160; // bool
		constexpr auto DefaultTextStyleOverride = 0x168; // FTextBlockStyle
		constexpr auto MinDesiredWidth = 0x3d8; // float
		constexpr auto TextTransformPolicy = 0x3dc; // ETextTransformPolicy
		constexpr auto DefaultTextStyle = 0x3e0; // FTextBlockStyle
		constexpr auto InstanceDecorators = 0x8c0; // TArray<URichTextBlockDecorator*>
	}

	namespace n_UParticleModuleLocationEmitterDirect {
		constexpr auto EmitterName = 0x30; // FName
	}

	namespace n_UBTTask_StrafeQuick {
		constexpr auto MinStrafeDistance = 0xb0; // float
		constexpr auto MaxStrafeDistance = 0xb4; // float
		constexpr auto TolerableRadius = 0xb8; // float
		constexpr auto ProbabilityToCrouch = 0xbc; // float
		constexpr auto MinCrouchedTime = 0xc0; // float
		constexpr auto MaxCrouchedTime = 0xc4; // float
		constexpr auto MinTimeBetweenCrouch = 0xc8; // float
		constexpr auto MaxTimeBetweenCrouch = 0xcc; // float
		constexpr auto MaxAngleForAimedAtTest = 0xd0; // float
		constexpr auto MinDifficultyForQuickStraffing = 0xd4; // float
		constexpr auto MinDifficultyForOccasionalQuickStraffing = 0xd8; // float
		constexpr auto ProbabilityForOccasionalQuickStraffing = 0xdc; // float
		constexpr auto bUseLazyWhenNotAimedAt = 0xe0; // bool
		constexpr auto IdealRangeForNonTraceWeapon = 0xe4; // float
		constexpr auto MinStrafeDistanceLazy = 0xe8; // float
		constexpr auto MaxStrafeDistanceLazy = 0xec; // float
		constexpr auto RandomConeAngleLazy = 0xf0; // float
	}

	namespace n_UCrowdManager {
		constexpr auto MyNavData = 0x28; // ANavigationData*
		constexpr auto AvoidanceConfig = 0x30; // TArray<FCrowdAvoidanceConfig>
		constexpr auto SamplingPatterns = 0x40; // TArray<FCrowdAvoidanceSamplingPattern>
		constexpr auto MaxAgents = 0x50; // int32_t
		constexpr auto MaxAgentRadius = 0x54; // float
		constexpr auto MaxAvoidedAgents = 0x58; // int32_t
		constexpr auto MaxAvoidedWalls = 0x5c; // int32_t
		constexpr auto NavmeshCheckInterval = 0x60; // float
		constexpr auto PathOptimizationInterval = 0x64; // float
		constexpr auto SeparationDirClamp = 0x68; // float
		constexpr auto PathOffsetRadiusMultiplier = 0x6c; // float
		constexpr auto bResolveCollisions = 0x70; // char : 1
	}

	namespace n_UMediaTexture {
		constexpr auto AddressX = 0x178; // TextureAddress
		constexpr auto AddressY = 0x179; // TextureAddress
		constexpr auto AutoClear = 0x17a; // bool
		constexpr auto ClearColor = 0x17c; // FLinearColor
		constexpr auto EnableGenMips = 0x18c; // bool
		constexpr auto NumMips = 0x18d; // char
		constexpr auto NewStyleOutput = 0x18e; // bool
		constexpr auto OutputFormat = 0x18f; // MediaTextureOutputFormat
		constexpr auto CurrentAspectRatio = 0x190; // float
		constexpr auto CurrentOrientation = 0x194; // MediaTextureOrientation
		constexpr auto MediaPlayer = 0x198; // UMediaPlayer*
	}

	namespace n_UMovieSceneParticleTrack {
		constexpr auto ParticleSections = 0x80; // TArray<UMovieSceneSection*>
	}

	namespace n_UPlanarReflectionComponent {
		constexpr auto PreviewBox = 0x2c0; // UBoxComponent*
		constexpr auto NormalDistortionStrength = 0x2c8; // float
		constexpr auto PrefilterRoughness = 0x2cc; // float
		constexpr auto PrefilterRoughnessDistance = 0x2d0; // float
		constexpr auto ScreenPercentage = 0x2d4; // int32_t
		constexpr auto ExtraFOV = 0x2d8; // float
		constexpr auto DistanceFromPlaneFadeStart = 0x2dc; // float
		constexpr auto DistanceFromPlaneFadeEnd = 0x2e0; // float
		constexpr auto DistanceFromPlaneFadeoutStart = 0x2e4; // float
		constexpr auto DistanceFromPlaneFadeoutEnd = 0x2e8; // float
		constexpr auto AngleFromPlaneFadeStart = 0x2ec; // float
		constexpr auto AngleFromPlaneFadeEnd = 0x2f0; // float
		constexpr auto bShowPreviewPlane = 0x2f4; // bool
		constexpr auto bRenderSceneTwoSided = 0x2f5; // bool
	}

	namespace n_UPortalWarsCustomGameFiltersWidget {
		constexpr auto ApplyButton = 0x390; // UPortalWarsButtonWidget*
		constexpr auto AnyOption = 0x398; // FPWTableRowBase
		constexpr auto ServerName = 0x410; // UPortalWarsTextInputWidget*
		constexpr auto RegionRadioGroup = 0x418; // UPortalWarsRadioGroupWidget*
		constexpr auto MapSelector = 0x420; // UPortalWarsGlobalCarouselWidget*
		constexpr auto ModeSelector = 0x428; // UPortalWarsGlobalCarouselWidget*
		constexpr auto LobbySizeSelector = 0x430; // UPortalWarsTextCarouselWidget*
		constexpr auto LobbySizeOptions = 0x438; // TArray<FText>
		constexpr auto PrivateCheckBox = 0x448; // UPortalWarsCheckBoxWidget*
		constexpr auto FullCheckBox = 0x450; // UPortalWarsCheckBoxWidget*
	}

	namespace n_UMaterialExpressionConstant {
		constexpr auto R = 0x40; // float
	}

	namespace n_UBrushBuilder {
		constexpr auto BitmapFilename = 0x28; // FString
		constexpr auto Tooltip = 0x38; // FString
		constexpr auto NotifyBadParams = 0x48; // char : 1
		constexpr auto Vertices = 0x50; // TArray<FVector>
		constexpr auto Polys = 0x60; // TArray<FBuilderPoly>
		constexpr auto Layer = 0x70; // FName
		constexpr auto MergeCoplanars = 0x78; // char : 1
	}

	namespace n_UMovieScenePropertySystem {
		constexpr auto InstantiatorSystem = 0x40; // UMovieScenePropertyInstantiatorSystem*
	}

	namespace n_UPortalWarsLobbyPlayerEntryWidget {
		constexpr auto AdminIndicator = 0x640; // UWidget*
		constexpr auto SpectatorIndicator = 0x648; // UWidget*
		constexpr auto PlayerEntry = 0x878; // UPortalWarsPlayerEntryWidget*
		constexpr auto TeamBorder = 0x880; // UBorder*
		constexpr auto TeamImage = 0x888; // UImage*
	}

	namespace n_UUniformGridSlot {
		constexpr auto HorizontalAlignment = 0x38; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x39; // EVerticalAlignment
		constexpr auto Row = 0x3c; // int32_t
		constexpr auto Column = 0x40; // int32_t
	}

	namespace n_UARCandidateObject {
		constexpr auto CandidateObjectData = 0x30; // TArray<char>
		constexpr auto FriendlyName = 0x40; // FString
		constexpr auto BoundingBox = 0x50; // FBox
	}

	namespace n_UEnvQueryTest_Trace {
		constexpr auto TraceData = 0x1f8; // FEnvTraceData
		constexpr auto TraceFromContext = 0x228; // FAIDataProviderBoolValue
		constexpr auto ItemHeightOffset = 0x260; // FAIDataProviderFloatValue
		constexpr auto ContextHeightOffset = 0x298; // FAIDataProviderFloatValue
		constexpr auto Context = 0x2d0; // UEnvQueryContext*
	}

	namespace n_UBasicOverlays {
		constexpr auto Overlays = 0x28; // TArray<FOverlayItem>
	}

	namespace n_UFieldSystemComponent {
		constexpr auto FieldSystem = 0x450; // UFieldSystem*
		constexpr auto bIsWorldField = 0x458; // bool
		constexpr auto bIsChaosField = 0x459; // bool
		constexpr auto SupportedSolvers = 0x460; // TArray<TSoftObjectPtr<AChaosSolverActor>>
		constexpr auto ConstructionCommands = 0x470; // FFieldObjectCommands
		constexpr auto BufferCommands = 0x4a0; // FFieldObjectCommands
	}

	namespace n_APortalWarsGameMode {
		constexpr auto LastStartSpot = 0x378; // AActor*
		constexpr auto KillScore = 0x380; // int32_t
		constexpr auto AssistScore = 0x384; // int32_t
		constexpr auto DeathScore = 0x388; // int32_t
		constexpr auto SuicideScore = 0x38c; // int32_t
		constexpr auto FriendlyFireScore = 0x390; // int32_t
		constexpr auto TeabagScore = 0x394; // int32_t
		constexpr auto NumAllowedSuicides = 0x398; // int32_t
		constexpr auto DefaultInventoryClasses = 0x638; // TArray<TSoftClassPtr<UObject>>
		constexpr auto bAllowReplayRecording = 0x648; // bool
		constexpr auto bObjectiveGame = 0x649; // bool
		constexpr auto RelevantStats = 0x650; // TArray<FString>
	}

	namespace n_UPortalWarsGGNotificationWidget {
		constexpr auto KillImage = 0x260; // UImage*
		constexpr auto RootHorizontalBox = 0x268; // UHorizontalBox*
		constexpr auto BlueKillImage = 0x270; // UTexture2D*
	}

	namespace n_UBTDecorator_PortalIsNearSelf {
		constexpr auto IdealXYRange = 0x68; // float
		constexpr auto bLinkedPortalsOnly = 0x6c; // bool
	}

	namespace n_UDataTable {
		constexpr auto RowStruct = 0x28; // UScriptStruct*
		constexpr auto bStripFromClientBuilds = 0x80; // char : 1
		constexpr auto bIgnoreExtraFields = 0x80; // char : 1
		constexpr auto bIgnoreMissingFields = 0x80; // char : 1
		constexpr auto ImportKeyField = 0x88; // FString
	}

	namespace n_UVirtualTextureBuilder {
		constexpr auto Texture = 0x28; // UVirtualTexture2D*
		constexpr auto BuildHash = 0x30; // uint64_t
	}

	namespace n_UPortalWarsInputWidget {
		constexpr auto Title = 0x2a8; // FText
		constexpr auto TitleText = 0x2c0; // UTextBlock*
		constexpr auto TitleDefaultColor = 0x2c8; // FLinearColor
		constexpr auto TitleHoveredColor = 0x2d8; // FLinearColor
		constexpr auto ValueText = 0x2e8; // UTextBlock*
		constexpr auto ValueDefaultColor = 0x2f0; // FLinearColor
		constexpr auto ValueHoveredColor = 0x300; // FLinearColor
		constexpr auto OnValueChangedDelegate = 0x310; // FMulticastInlineDelegate
		constexpr auto HoveredIndicator = 0x320; // UWidget*
		constexpr auto BackgroundImage = 0x328; // UImage*
		constexpr auto DefaultBackgroundImage = 0x330; // UTexture2D*
		constexpr auto HoveredBackgroundImage = 0x338; // UTexture2D*
		constexpr auto ValueRoot = 0x340; // UWidget*
		constexpr auto bAdminOnly = 0x348; // bool
		constexpr auto bCustomOnly = 0x349; // bool
		constexpr auto ValueChangedEvent = 0x350; // UAkAudioEvent*
		constexpr auto HoveredEvent = 0x358; // UAkAudioEvent*
	}

	namespace n_UPortalWarsCurrencyPurchaseDialog {
		constexpr auto PriceEntry = 0x3c8; // UPortalWarsPriceEntryWidget*
		constexpr auto DescriptionText = 0x3d0; // UTextBlock*
		constexpr auto BonusHeader = 0x3d8; // UWidget*
		constexpr auto WarningText = 0x3e0; // UTextBlock*
		constexpr auto CreatorCode = 0x3e8; // UPortalWarsTextInputWidget*
		constexpr auto CurrencyEntry = 0x3f0; // UPortalWarsCurrencyStoreEntry*
	}

	namespace n_UGizmoUniformScaleParameterSource {
		constexpr auto AxisSource = 0x48; // TScriptInterface<IGizmoAxisSource>
		constexpr auto TransformSource = 0x58; // TScriptInterface<IGizmoTransformSource>
		constexpr auto ScaleMultiplier = 0x68; // float
		constexpr auto Parameter = 0x6c; // FVector2D
		constexpr auto LastChange = 0x74; // FGizmoVec2ParameterChange
		constexpr auto CurScaleOrigin = 0x84; // FVector
		constexpr auto CurScaleNormal = 0x90; // FVector
		constexpr auto CurScaleAxisX = 0x9c; // FVector
		constexpr auto CurScaleAxisY = 0xa8; // FVector
		constexpr auto InitialTransform = 0xc0; // FTransform
	}

	namespace n_UInvalidationBox {
		constexpr auto bCanCache = 0x120; // bool
		constexpr auto CacheRelativeTransforms = 0x121; // bool
	}

	namespace n_UClothLODDataCommon_Legacy {
		constexpr auto PhysicalMeshData = 0x28; // UClothPhysicalMeshDataBase_Legacy*
		constexpr auto ClothPhysicalMeshData = 0x30; // FClothPhysicalMeshData
		constexpr auto CollisionData = 0x128; // FClothCollisionData
	}

	namespace n_UAkIOSInitializationSettings {
		constexpr auto CommonSettings = 0x28; // FAkCommonInitializationSettingsWithSampleRate
		constexpr auto AudioSession = 0x98; // FAkAudioSession
		constexpr auto CommunicationSettings = 0xa8; // FAkCommunicationSettingsWithSystemInitialization
		constexpr auto AdvancedSettings = 0xd0; // FAkAdvancedInitializationSettings
	}

	namespace n_ULeaderboardFlushCallbackProxy {
		constexpr auto OnSuccess = 0x28; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x38; // FMulticastInlineDelegate
	}

	namespace n_APhysicsThruster {
		constexpr auto ThrusterComponent = 0x220; // UPhysicsThrusterComponent*
	}

	namespace n_UBTTask_SetFocus {
		constexpr auto shouldLookForward = 0x98; // bool
	}

	namespace n_USpotLightComponent {
		constexpr auto InnerConeAngle = 0x358; // float
		constexpr auto OuterConeAngle = 0x35c; // float
	}

	namespace n_UMaterialExpressionMaterialAttributeLayers {
		constexpr auto ParameterName = 0x40; // FName
		constexpr auto ExpressionGUID = 0x48; // FGuid
		constexpr auto Input = 0x58; // FMaterialAttributesInput
		constexpr auto DefaultLayers = 0x70; // FMaterialLayersFunctions
		constexpr auto LayerCallers = 0xb0; // TArray<UMaterialExpressionMaterialFunctionCall*>
		constexpr auto NumActiveLayerCallers = 0xc0; // int32_t
		constexpr auto BlendCallers = 0xc8; // TArray<UMaterialExpressionMaterialFunctionCall*>
		constexpr auto NumActiveBlendCallers = 0xd8; // int32_t
		constexpr auto bIsLayerGraphBuilt = 0xdc; // bool
	}

	namespace n_UParticleModuleCollisionGPU {
		constexpr auto Resilience = 0x30; // FRawDistributionFloat
		constexpr auto ResilienceScaleOverLife = 0x60; // FRawDistributionFloat
		constexpr auto Friction = 0x90; // float
		constexpr auto RandomSpread = 0x94; // float
		constexpr auto RandomDistribution = 0x98; // float
		constexpr auto RadiusScale = 0x9c; // float
		constexpr auto RadiusBias = 0xa0; // float
		constexpr auto Response = 0xa4; // EParticleCollisionResponse
		constexpr auto CollisionMode = 0xa5; // EParticleCollisionMode
	}

	namespace n_UMovieSceneIntegerSection {
		constexpr auto IntegerCurve = 0xf0; // FMovieSceneIntegerChannel
	}

	namespace n_UMaterialExpressionParticleSubUV {
		constexpr auto bBlend = 0x60; // char : 1
	}

	namespace n_UPortalWarsDropIndicatorWidget {
		constexpr auto DropsText = 0x260; // UTextBlock*
		constexpr auto bHideWhenEmpty = 0x26c; // bool
	}

	namespace n_UPortalWarsKillStackEntryWidget {
		constexpr auto FadeInAnimation = 0x268; // UWidgetAnimation*
		constexpr auto FadeOutAnimation = 0x270; // UWidgetAnimation*
		constexpr auto KilledText = 0x278; // URichTextBlock*
		constexpr auto DamageText = 0x280; // UTextBlock*
	}

	namespace n_UAkAuxBus {
		constexpr auto RequiredBank = 0x28; // UAkAudioBank*
	}

	namespace n_UInterpTrackVectorProp {
		constexpr auto PropertyName = 0x90; // FName
	}

	namespace n_UAsyncTaskDownloadImage {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFail = 0x40; // FMulticastInlineDelegate
	}

	namespace n_UBTTask_UsePortal {
		constexpr auto Timeout = 0x70; // float
	}

	namespace n_UPortalWarsMapSelectorWidget {
		constexpr auto ItemsPanel = 0x338; // UPanelWidget*
		constexpr auto MapSelectorEntryClass = 0x340; // UPortalWarsMapSelectorEntryWidget*
		constexpr auto MapImage = 0x348; // UImage*
		constexpr auto MapName = 0x350; // UTextBlock*
		constexpr auto MapDescription = 0x358; // UTextBlock*
	}

	namespace n_UParticleModuleSize {
		constexpr auto StartSize = 0x30; // FRawDistributionVector
	}

	namespace n_UAkDurationCallbackInfo {
		constexpr auto Duration = 0x38; // float
		constexpr auto EstimatedDuration = 0x3c; // float
		constexpr auto AudioNodeID = 0x40; // int32_t
		constexpr auto MediaID = 0x44; // int32_t
		constexpr auto bStreaming = 0x48; // bool
	}

	namespace n_UPortalWarsReticleWidget {
		constexpr auto HitMarkerDisplayTime = 0x268; // float
		constexpr auto EquippedWeapon = 0x270; // AGun*
		constexpr auto CurrentReticleData = 0x278; // FReticleData
		constexpr auto ReticlePanel = 0x2f8; // UCanvasPanel*
		constexpr auto ReticleSwitcher = 0x300; // UWidgetSwitcher*
		constexpr auto ReticleBorder = 0x308; // UBorder*
		constexpr auto ReticleCanvas = 0x310; // UCanvasPanel*
		constexpr auto OuterCircle = 0x318; // UImage*
		constexpr auto InnerCircle = 0x320; // UImage*
		constexpr auto dot = 0x328; // UImage*
		constexpr auto CrosshairWrapper = 0x330; // UCanvasPanel*
		constexpr auto CrosshairRight = 0x338; // UImage*
		constexpr auto CrosshairLeft = 0x340; // UImage*
		constexpr auto CrosshairTop = 0x348; // UImage*
		constexpr auto CrosshairBottom = 0x350; // UImage*
		constexpr auto MarkerSwitcher = 0x358; // UWidgetSwitcher*
		constexpr auto HitMarker = 0x360; // UImage*
		constexpr auto HeadshotMarker = 0x368; // UImage*
		constexpr auto KillMarker = 0x370; // UImage*
		constexpr auto ZoomImage = 0x378; // UImage*
		constexpr auto ChargePanel = 0x380; // UCanvasPanel*
		constexpr auto OverheatProgressBar = 0x388; // UProgressBar*
		constexpr auto SprintCrosshair = 0x390; // UImage*
		constexpr auto ChargeUpdateInterval = 0x39c; // float
		constexpr auto ReticleBaseColor = 0x3a0; // FLinearColor
		constexpr auto ReticleAimColor = 0x3b0; // FLinearColor
		constexpr auto HitSoundDelayTime = 0x3c0; // float
		constexpr auto HitEnemyEvent = 0x3c8; // UAkAudioEvent*
		constexpr auto HeadshotEnemyEvent = 0x3d0; // UAkAudioEvent*
		constexpr auto KillEnemyEvent = 0x3d8; // UAkAudioEvent*
		constexpr auto AssistKillEnemyEvent = 0x3e0; // UAkAudioEvent*
		constexpr auto bPreviewOnly = 0x3e8; // bool
	}

	namespace n_UBTTask_GameplayTaskBase {
		constexpr auto bWaitForGameplayTask = 0x70; // char : 1
	}

	namespace n_UEditableGameplayTagQueryExpression_NoTagsMatch {
		constexpr auto Tags = 0x28; // FGameplayTagContainer
	}

	namespace n_URadialVector {
		constexpr auto Magnitude = 0xb0; // float
		constexpr auto Position = 0xb4; // FVector
	}

	namespace n_APlayerState {
		constexpr auto Score = 0x220; // float
		constexpr auto PlayerId = 0x224; // int32_t
		constexpr auto Ping = 0x228; // char
		constexpr auto bShouldUpdateReplicatedPing = 0x22a; // char : 1
		constexpr auto bIsSpectator = 0x22a; // char : 1
		constexpr auto bOnlySpectator = 0x22a; // char : 1
		constexpr auto bIsABot = 0x22a; // char : 1
		constexpr auto bIsInactive = 0x22a; // char : 1
		constexpr auto bFromPreviousLevel = 0x22a; // char : 1
		constexpr auto StartTime = 0x22c; // int32_t
		constexpr auto EngineMessageClass = 0x230; // ULocalMessage*
		constexpr auto SavedNetworkAddress = 0x240; // FString
		constexpr auto UniqueId = 0x250; // FUniqueNetIdRepl
		constexpr auto PawnPrivate = 0x280; // APawn*
		constexpr auto PlayerNamePrivate = 0x300; // FString
	}

	namespace n_UDebugCameraControllerSettings {
		constexpr auto CycleViewModes = 0x38; // TArray<FDebugCameraControllerSettingsViewModeIndex>
	}

	namespace n_UMaterialExpressionMapARPassthroughCameraUV {
		constexpr auto Coordinates = 0x40; // FExpressionInput
	}

	namespace n_UBTTask_Crouch {
		constexpr auto shouldCrouch = 0x70; // bool
	}

	namespace n_UAkAndroidInitializationSettings {
		constexpr auto CommonSettings = 0x28; // FAkCommonInitializationSettingsWithSampleRate
		constexpr auto CommunicationSettings = 0x98; // FAkCommunicationSettingsWithSystemInitialization
		constexpr auto AdvancedSettings = 0xc0; // FAkAndroidAdvancedInitializationSettings
	}

	namespace n_UDeviceProfileManager {
		constexpr auto Profiles = 0x28; // TArray<UObject*>
	}

	namespace n_UTestMovieSceneTrack {
		constexpr auto bHighPassFilter = 0x80; // bool
		constexpr auto SectionArray = 0x88; // TArray<UMovieSceneSection*>
	}

	namespace n_UProgressBar {
		constexpr auto WidgetStyle = 0x108; // FProgressBarStyle
		constexpr auto Style = 0x2a8; // USlateWidgetStyleAsset*
		constexpr auto BackgroundImage = 0x2b0; // USlateBrushAsset*
		constexpr auto FillImage = 0x2b8; // USlateBrushAsset*
		constexpr auto MarqueeImage = 0x2c0; // USlateBrushAsset*
		constexpr auto Percent = 0x2c8; // float
		constexpr auto BarFillType = 0x2cc; // EProgressBarFillType
		constexpr auto bIsMarquee = 0x2cd; // bool
		constexpr auto BorderPadding = 0x2d0; // FVector2D
		constexpr auto PercentDelegate = 0x2d8; // FDelegate
		constexpr auto FillColorAndOpacity = 0x2e8; // FLinearColor
		constexpr auto FillColorAndOpacityDelegate = 0x2f8; // FDelegate
		constexpr auto FillRenderTransform = 0x308; // FWidgetTransform
	}

	namespace n_UGridPathFollowingComponent {
		constexpr auto GridManager = 0x250; // UNavLocalGridManager*
	}

	namespace n_UPWTutorialHUDOverlayWidget {
		constexpr auto StageNameText = 0x260; // UTextBlock*
		constexpr auto StageNumText = 0x268; // UTextBlock*
		constexpr auto GrenadeText = 0x270; // UTextBlock*
		constexpr auto TutorialBookmark = 0x278; // UPortalWarsTutorialBookmarkWidget*
		constexpr auto TutorialSteps = 0x280; // UPortalWarsTutorialStepsWidget*
		constexpr auto TutorialVideo = 0x288; // UPortalWarsTutorialVideoWidget*
		constexpr auto ExpandVideoAnimation = 0x290; // UWidgetAnimation*
		constexpr auto VideoBackgroundBlur = 0x298; // UBackgroundBlur*
		constexpr auto StepPopupPanel = 0x2a0; // UPanelWidget*
		constexpr auto StepPopUpWidgetClass = 0x2a8; // UPWTutorialStepEntryWidget*
		constexpr auto StepPopupAnimation = 0x2b0; // UWidgetAnimation*
		constexpr auto InputDeviceText = 0x2c0; // UTextBlock*
		constexpr auto ShowDeviceLockAnimation = 0x2c8; // UWidgetAnimation*
		constexpr auto HideDeviceLockAnimation = 0x2d0; // UWidgetAnimation*
		constexpr auto TutorialVideoReminder = 0x2d8; // UPortalWarsTutorialVideoReminderWidget*
	}

	namespace n_UMovieSceneSlomoSection {
		constexpr auto FloatCurve = 0xe8; // FMovieSceneFloatChannel
	}

	namespace n_UGizmoAxisScaleParameterSource {
		constexpr auto AxisSource = 0x48; // TScriptInterface<IGizmoAxisSource>
		constexpr auto TransformSource = 0x58; // TScriptInterface<IGizmoTransformSource>
		constexpr auto ScaleMultiplier = 0x68; // float
		constexpr auto Parameter = 0x6c; // float
		constexpr auto LastChange = 0x70; // FGizmoFloatParameterChange
		constexpr auto CurScaleAxis = 0x78; // FVector
		constexpr auto CurScaleOrigin = 0x84; // FVector
		constexpr auto InitialTransform = 0x90; // FTransform
	}

	namespace n_UPortalWarsStatsEntryWidget {
		constexpr auto GamesWonText = 0x2a8; // UTextBlock*
		constexpr auto GamesPlayedText = 0x2b0; // UTextBlock*
		constexpr auto KillsText = 0x2b8; // UTextBlock*
		constexpr auto AssistsText = 0x2c0; // UTextBlock*
		constexpr auto DeathsText = 0x2c8; // UTextBlock*
		constexpr auto KdText = 0x2d0; // UTextBlock*
		constexpr auto KadText = 0x2d8; // UTextBlock*
		constexpr auto SuicidesText = 0x2e0; // UTextBlock*
		constexpr auto TeabagsText = 0x2e8; // UTextBlock*
		constexpr auto MeleeKillsText = 0x2f0; // UTextBlock*
		constexpr auto PortalKillsText = 0x2f8; // UTextBlock*
		constexpr auto KillsThruPortalText = 0x300; // UTextBlock*
		constexpr auto DoubleKillsText = 0x308; // UTextBlock*
		constexpr auto TripleKillsText = 0x310; // UTextBlock*
		constexpr auto QuadKillsText = 0x318; // UTextBlock*
		constexpr auto QuintKillsText = 0x320; // UTextBlock*
		constexpr auto KillStreak1Text = 0x328; // UTextBlock*
		constexpr auto KillStreak2Text = 0x330; // UTextBlock*
		constexpr auto KillStreak3Text = 0x338; // UTextBlock*
		constexpr auto KillStreak4Text = 0x340; // UTextBlock*
		constexpr auto KillStreak5Text = 0x348; // UTextBlock*
		constexpr auto KillStreak6Text = 0x350; // UTextBlock*
		constexpr auto DamageDealtText = 0x358; // UTextBlock*
		constexpr auto bUseGoldStyle = 0x3d0; // bool
		constexpr auto BackgroundImage = 0x3d8; // UImage*
		constexpr auto DefaultBackgroundImage = 0x3e0; // UTexture2D*
		constexpr auto GoldBackgroundImage = 0x3e8; // UTexture2D*
		constexpr auto DefaultFeatureTextColor = 0x3f0; // FLinearColor
		constexpr auto GoldFeatureTextColor = 0x400; // FLinearColor
		constexpr auto DefaultTitleTextColor = 0x410; // FLinearColor
		constexpr auto GoldTitleTextColor = 0x420; // FLinearColor
		constexpr auto DefaultSmallTitleTextColor = 0x430; // FLinearColor
		constexpr auto GoldSmallTitleTextColor = 0x440; // FLinearColor
	}

	namespace n_UGizmoComponentWorldTransformSource {
		constexpr auto Component = 0x48; // USceneComponent*
		constexpr auto bModifyComponentOnTransform = 0x50; // bool
	}

	namespace n_UConsole {
		constexpr auto ConsoleTargetPlayer = 0x38; // ULocalPlayer*
		constexpr auto DefaultTexture_Black = 0x40; // UTexture2D*
		constexpr auto DefaultTexture_White = 0x48; // UTexture2D*
		constexpr auto HistoryBuffer = 0x68; // TArray<FString>
	}

	namespace n_UCharacterMovementComponent {
		constexpr auto CharacterOwner = 0x148; // ACharacter*
		constexpr auto GravityScale = 0x150; // float
		constexpr auto MaxStepHeight = 0x154; // float
		constexpr auto JumpZVelocity = 0x158; // float
		constexpr auto JumpOffJumpZFactor = 0x15c; // float
		constexpr auto WalkableFloorAngle = 0x160; // float
		constexpr auto WalkableFloorZ = 0x164; // float
		constexpr auto MovementMode = 0x168; // EMovementMode
		constexpr auto CustomMovementMode = 0x169; // char
		constexpr auto NetworkSmoothingMode = 0x16a; // ENetworkSmoothingMode
		constexpr auto GroundFriction = 0x16c; // float
		constexpr auto MaxWalkSpeed = 0x18c; // float
		constexpr auto MaxWalkSpeedCrouched = 0x190; // float
		constexpr auto MaxSwimSpeed = 0x194; // float
		constexpr auto MaxFlySpeed = 0x198; // float
		constexpr auto MaxCustomMovementSpeed = 0x19c; // float
		constexpr auto MaxAcceleration = 0x1a0; // float
		constexpr auto MinAnalogWalkSpeed = 0x1a4; // float
		constexpr auto BrakingFrictionFactor = 0x1a8; // float
		constexpr auto BrakingFriction = 0x1ac; // float
		constexpr auto BrakingSubStepTime = 0x1b0; // float
		constexpr auto BrakingDecelerationWalking = 0x1b4; // float
		constexpr auto BrakingDecelerationFalling = 0x1b8; // float
		constexpr auto BrakingDecelerationSwimming = 0x1bc; // float
		constexpr auto BrakingDecelerationFlying = 0x1c0; // float
		constexpr auto AirControl = 0x1c4; // float
		constexpr auto AirControlBoostMultiplier = 0x1c8; // float
		constexpr auto AirControlBoostVelocityThreshold = 0x1cc; // float
		constexpr auto FallingLateralFriction = 0x1d0; // float
		constexpr auto CrouchedHalfHeight = 0x1d4; // float
		constexpr auto Buoyancy = 0x1d8; // float
		constexpr auto PerchRadiusThreshold = 0x1dc; // float
		constexpr auto PerchAdditionalHeight = 0x1e0; // float
		constexpr auto RotationRate = 0x1e4; // FRotator
		constexpr auto bUseSeparateBrakingFriction = 0x1f0; // char : 1
		constexpr auto bApplyGravityWhileJumping = 0x1f0; // char : 1
		constexpr auto bUseControllerDesiredRotation = 0x1f0; // char : 1
		constexpr auto bOrientRotationToMovement = 0x1f0; // char : 1
		constexpr auto bSweepWhileNavWalking = 0x1f0; // char : 1
		constexpr auto bMovementInProgress = 0x1f0; // char : 1
		constexpr auto bEnableScopedMovementUpdates = 0x1f0; // char : 1
		constexpr auto bEnableServerDualMoveScopedMovementUpdates = 0x1f1; // char : 1
		constexpr auto bForceMaxAccel = 0x1f1; // char : 1
		constexpr auto bRunPhysicsWithNoController = 0x1f1; // char : 1
		constexpr auto bForceNextFloorCheck = 0x1f1; // char : 1
		constexpr auto bShrinkProxyCapsule = 0x1f1; // char : 1
		constexpr auto bCanWalkOffLedges = 0x1f1; // char : 1
		constexpr auto bCanWalkOffLedgesWhenCrouching = 0x1f1; // char : 1
		constexpr auto bNetworkSkipProxyPredictionOnNetUpdate = 0x1f2; // char : 1
		constexpr auto bNetworkAlwaysReplicateTransformUpdateTimestamp = 0x1f2; // char : 1
		constexpr auto bDeferUpdateMoveComponent = 0x1f2; // char : 1
		constexpr auto bEnablePhysicsInteraction = 0x1f2; // char : 1
		constexpr auto bTouchForceScaledToMass = 0x1f2; // char : 1
		constexpr auto bPushForceScaledToMass = 0x1f2; // char : 1
		constexpr auto bPushForceUsingZOffset = 0x1f2; // char : 1
		constexpr auto bScalePushForceToVelocity = 0x1f3; // char : 1
		constexpr auto DeferredUpdatedMoveComponent = 0x1f8; // USceneComponent*
		constexpr auto MaxOutOfWaterStepHeight = 0x200; // float
		constexpr auto OutofWaterZ = 0x204; // float
		constexpr auto Mass = 0x208; // float
		constexpr auto StandingDownwardForceScale = 0x20c; // float
		constexpr auto InitialPushForceFactor = 0x210; // float
		constexpr auto PushForceFactor = 0x214; // float
		constexpr auto PushForcePointZOffsetFactor = 0x218; // float
		constexpr auto TouchForceFactor = 0x21c; // float
		constexpr auto MinTouchForce = 0x220; // float
		constexpr auto MaxTouchForce = 0x224; // float
		constexpr auto RepulsionForce = 0x228; // float
		constexpr auto Acceleration = 0x22c; // FVector
		constexpr auto LastUpdateRotation = 0x240; // FQuat
		constexpr auto LastUpdateLocation = 0x250; // FVector
		constexpr auto LastUpdateVelocity = 0x25c; // FVector
		constexpr auto ServerLastTransformUpdateTimeStamp = 0x268; // float
		constexpr auto ServerLastClientGoodMoveAckTime = 0x26c; // float
		constexpr auto ServerLastClientAdjustmentTime = 0x270; // float
		constexpr auto PendingImpulseToApply = 0x274; // FVector
		constexpr auto PendingForceToApply = 0x280; // FVector
		constexpr auto AnalogInputModifier = 0x28c; // float
		constexpr auto MaxSimulationTimeStep = 0x29c; // float
		constexpr auto MaxSimulationIterations = 0x2a0; // int32_t
		constexpr auto MaxJumpApexAttemptsPerSimulation = 0x2a4; // int32_t
		constexpr auto MaxDepenetrationWithGeometry = 0x2a8; // float
		constexpr auto MaxDepenetrationWithGeometryAsProxy = 0x2ac; // float
		constexpr auto MaxDepenetrationWithPawn = 0x2b0; // float
		constexpr auto MaxDepenetrationWithPawnAsProxy = 0x2b4; // float
		constexpr auto NetworkSimulatedSmoothLocationTime = 0x2b8; // float
		constexpr auto NetworkSimulatedSmoothRotationTime = 0x2bc; // float
		constexpr auto ListenServerNetworkSimulatedSmoothLocationTime = 0x2c0; // float
		constexpr auto ListenServerNetworkSimulatedSmoothRotationTime = 0x2c4; // float
		constexpr auto NetProxyShrinkRadius = 0x2c8; // float
		constexpr auto NetProxyShrinkHalfHeight = 0x2cc; // float
		constexpr auto NetworkMaxSmoothUpdateDistance = 0x2d0; // float
		constexpr auto NetworkNoSmoothUpdateDistance = 0x2d4; // float
		constexpr auto NetworkMinTimeBetweenClientAckGoodMoves = 0x2d8; // float
		constexpr auto NetworkMinTimeBetweenClientAdjustments = 0x2dc; // float
		constexpr auto NetworkMinTimeBetweenClientAdjustmentsLargeCorrection = 0x2e0; // float
		constexpr auto NetworkLargeClientCorrectionDistance = 0x2e4; // float
		constexpr auto LedgeCheckThreshold = 0x2e8; // float
		constexpr auto JumpOutOfWaterPitch = 0x2ec; // float
		constexpr auto CurrentFloor = 0x2f0; // FFindFloorResult
		constexpr auto DefaultLandMovementMode = 0x384; // EMovementMode
		constexpr auto DefaultWaterMovementMode = 0x385; // EMovementMode
		constexpr auto GroundMovementMode = 0x386; // EMovementMode
		constexpr auto bMaintainHorizontalGroundVelocity = 0x387; // char : 1
		constexpr auto bImpartBaseVelocityX = 0x387; // char : 1
		constexpr auto bImpartBaseVelocityY = 0x387; // char : 1
		constexpr auto bImpartBaseVelocityZ = 0x387; // char : 1
		constexpr auto bImpartBaseAngularVelocity = 0x387; // char : 1
		constexpr auto bJustTeleported = 0x387; // char : 1
		constexpr auto bNetworkUpdateReceived = 0x387; // char : 1
		constexpr auto bNetworkMovementModeChanged = 0x387; // char : 1
		constexpr auto bIgnoreClientMovementErrorChecksAndCorrection = 0x388; // char : 1
		constexpr auto bServerAcceptClientAuthoritativePosition = 0x388; // char : 1
		constexpr auto bNotifyApex = 0x388; // char : 1
		constexpr auto bCheatFlying = 0x388; // char : 1
		constexpr auto bWantsToCrouch = 0x388; // char : 1
		constexpr auto bCrouchMaintainsBaseLocation = 0x388; // char : 1
		constexpr auto bIgnoreBaseRotation = 0x388; // char : 1
		constexpr auto bFastAttachedMove = 0x388; // char : 1
		constexpr auto bAlwaysCheckFloor = 0x389; // char : 1
		constexpr auto bUseFlatBaseForFloorChecks = 0x389; // char : 1
		constexpr auto bPerformingJumpOff = 0x389; // char : 1
		constexpr auto bWantsToLeaveNavWalking = 0x389; // char : 1
		constexpr auto bUseRVOAvoidance = 0x389; // char : 1
		constexpr auto bRequestedMoveUseAcceleration = 0x389; // char : 1
		constexpr auto bWasSimulatingRootMotion = 0x389; // char : 1
		constexpr auto bAllowPhysicsRotationDuringAnimRootMotion = 0x38a; // char : 1
		constexpr auto bHasRequestedVelocity = 0x38a; // char : 1
		constexpr auto bRequestedMoveWithMaxSpeed = 0x38a; // char : 1
		constexpr auto bWasAvoidanceUpdated = 0x38a; // char : 1
		constexpr auto bProjectNavMeshWalking = 0x38a; // char : 1
		constexpr auto bProjectNavMeshOnBothWorldChannels = 0x38a; // char : 1
		constexpr auto AvoidanceConsiderationRadius = 0x39c; // float
		constexpr auto RequestedVelocity = 0x3a0; // FVector
		constexpr auto AvoidanceUID = 0x3ac; // int32_t
		constexpr auto AvoidanceGroup = 0x3b0; // FNavAvoidanceMask
		constexpr auto GroupsToAvoid = 0x3b4; // FNavAvoidanceMask
		constexpr auto GroupsToIgnore = 0x3b8; // FNavAvoidanceMask
		constexpr auto AvoidanceWeight = 0x3bc; // float
		constexpr auto PendingLaunchVelocity = 0x3c0; // FVector
		constexpr auto NavMeshProjectionInterval = 0x470; // float
		constexpr auto NavMeshProjectionTimer = 0x474; // float
		constexpr auto NavMeshProjectionInterpSpeed = 0x478; // float
		constexpr auto NavMeshProjectionHeightScaleUp = 0x47c; // float
		constexpr auto NavMeshProjectionHeightScaleDown = 0x480; // float
		constexpr auto NavWalkingFloorDistTolerance = 0x484; // float
		constexpr auto PostPhysicsTickFunction = 0x488; // FCharacterMovementComponentPostPhysicsTickFunction
		constexpr auto MinTimeBetweenTimeStampResets = 0x4d0; // float
		constexpr auto CurrentRootMotion = 0x980; // FRootMotionSourceGroup
		constexpr auto ServerCorrectionRootMotion = 0x9b8; // FRootMotionSourceGroup
		constexpr auto RootMotionParams = 0xa80; // FRootMotionMovementParams
		constexpr auto AnimRootMotionVelocity = 0xac0; // FVector
	}

	namespace n_UIpNetDriver {
		constexpr auto LogPortUnreach = 0x758; // char : 1
		constexpr auto AllowPlayerPortUnreach = 0x758; // char : 1
		constexpr auto MaxPortCountToTry = 0x75c; // uint32_t
		constexpr auto ServerDesiredSocketReceiveBufferBytes = 0x76c; // uint32_t
		constexpr auto ServerDesiredSocketSendBufferBytes = 0x770; // uint32_t
		constexpr auto ClientDesiredSocketReceiveBufferBytes = 0x774; // uint32_t
		constexpr auto ClientDesiredSocketSendBufferBytes = 0x778; // uint32_t
		constexpr auto MaxSecondsInReceive = 0x780; // double
		constexpr auto NbPacketsBetweenReceiveTimeTest = 0x788; // int32_t
		constexpr auto ResolutionConnectionTimeout = 0x78c; // float
	}

	namespace n_UDistributionVectorConstant {
		constexpr auto Constant = 0x38; // FVector
		constexpr auto bLockAxes = 0x44; // char : 1
		constexpr auto LockedAxes = 0x48; // EDistributionVectorLockFlags
	}

	namespace n_APlayerController {
		constexpr auto Player = 0x298; // UPlayer*
		constexpr auto AcknowledgedPawn = 0x2a0; // APawn*
		constexpr auto ControllingDirTrackInst = 0x2a8; // UInterpTrackInstDirector*
		constexpr auto MyHUD = 0x2b0; // AHUD*
		constexpr auto PlayerCameraManager = 0x2b8; // APlayerCameraManager*
		constexpr auto PlayerCameraManagerClass = 0x2c0; // APlayerCameraManager*
		constexpr auto bAutoManageActiveCameraTarget = 0x2c8; // bool
		constexpr auto TargetViewRotation = 0x2cc; // FRotator
		constexpr auto SmoothTargetViewRotationSpeed = 0x2e4; // float
		constexpr auto HiddenActors = 0x2f0; // TArray<AActor*>
		constexpr auto HiddenPrimitiveComponents = 0x300; // TArray<TWeakObjectPtr<UPrimitiveComponent>>
		constexpr auto LastSpectatorStateSynchTime = 0x314; // float
		constexpr auto LastSpectatorSyncLocation = 0x318; // FVector
		constexpr auto LastSpectatorSyncRotation = 0x324; // FRotator
		constexpr auto ClientCap = 0x330; // int32_t
		constexpr auto CheatManager = 0x338; // UCheatManager*
		constexpr auto CheatClass = 0x340; // UCheatManager*
		constexpr auto PlayerInput = 0x348; // UPlayerInput*
		constexpr auto ActiveForceFeedbackEffects = 0x350; // TArray<FActiveForceFeedbackEffect>
		constexpr auto bPlayerIsWaiting = 0x3d0; // char : 1
		constexpr auto NetPlayerIndex = 0x3d4; // char
		constexpr auto PendingSwapConnection = 0x410; // UNetConnection*
		constexpr auto NetConnection = 0x418; // UNetConnection*
		constexpr auto InputYawScale = 0x42c; // float
		constexpr auto InputPitchScale = 0x430; // float
		constexpr auto InputRollScale = 0x434; // float
		constexpr auto bShowMouseCursor = 0x438; // char : 1
		constexpr auto bEnableClickEvents = 0x438; // char : 1
		constexpr auto bEnableTouchEvents = 0x438; // char : 1
		constexpr auto bEnableMouseOverEvents = 0x438; // char : 1
		constexpr auto bEnableTouchOverEvents = 0x438; // char : 1
		constexpr auto bForceFeedbackEnabled = 0x438; // char : 1
		constexpr auto ForceFeedbackScale = 0x43c; // float
		constexpr auto ClickEventKeys = 0x440; // TArray<FKey>
		constexpr auto DefaultMouseCursor = 0x450; // EMouseCursor
		constexpr auto CurrentMouseCursor = 0x451; // EMouseCursor
		constexpr auto DefaultClickTraceChannel = 0x452; // ECollisionChannel
		constexpr auto CurrentClickTraceChannel = 0x453; // ECollisionChannel
		constexpr auto HitResultTraceDistance = 0x454; // float
		constexpr auto SeamlessTravelCount = 0x458; // uint16_t
		constexpr auto LastCompletedSeamlessTravelCount = 0x45a; // uint16_t
		constexpr auto InactiveStateInputComponent = 0x4d0; // UInputComponent*
		constexpr auto bShouldPerformFullTickWhenPaused = 0x4d8; // char : 1
		constexpr auto CurrentTouchInterface = 0x4f0; // UTouchInterface*
		constexpr auto SpectatorPawn = 0x548; // ASpectatorPawn*
		constexpr auto bIsLocalPlayerController = 0x554; // bool
		constexpr auto SpawnLocation = 0x558; // FVector
	}

	namespace n_UEdGraphPin_Deprecated {
		constexpr auto PinName = 0x28; // FString
		constexpr auto PinToolTip = 0x38; // FString
		constexpr auto Direction = 0x48; // EEdGraphPinDirection
		constexpr auto PinType = 0x50; // FEdGraphPinType
		constexpr auto DefaultValue = 0xa8; // FString
		constexpr auto AutogeneratedDefaultValue = 0xb8; // FString
		constexpr auto DefaultObject = 0xc8; // UObject*
		constexpr auto DefaultTextValue = 0xd0; // FText
		constexpr auto LinkedTo = 0xe8; // TArray<UEdGraphPin_Deprecated*>
		constexpr auto SubPins = 0xf8; // TArray<UEdGraphPin_Deprecated*>
		constexpr auto ParentPin = 0x108; // UEdGraphPin_Deprecated*
		constexpr auto ReferencePassThroughConnection = 0x110; // UEdGraphPin_Deprecated*
	}

	namespace n_USubmixEffectReverbPreset {
		constexpr auto Settings = 0xd0; // FSubmixEffectReverbSettings
	}

	namespace n_UPortalWarsRankLeaderboardWidget {
		constexpr auto Leaderboard = 0x338; // UPortalWarsLeaderboardWidget*
		constexpr auto PlaylistText = 0x340; // UTextBlock*
		constexpr auto ChangePlaylistButton = 0x348; // UPortalWarsButtonWidget*
		constexpr auto ToggleCrossPlayButton = 0x350; // UPortalWarsButtonWidget*
		constexpr auto PlaylistComboBox = 0x358; // UComboBoxString*
		constexpr auto PlaylistIDs = 0x360; // TArray<int32_t>
	}

	namespace n_UGridSlot {
		constexpr auto Padding = 0x38; // FMargin
		constexpr auto HorizontalAlignment = 0x48; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x49; // EVerticalAlignment
		constexpr auto Row = 0x4c; // int32_t
		constexpr auto RowSpan = 0x50; // int32_t
		constexpr auto Column = 0x54; // int32_t
		constexpr auto ColumnSpan = 0x58; // int32_t
		constexpr auto Layer = 0x5c; // int32_t
		constexpr auto Nudge = 0x60; // FVector2D
	}

	namespace n_UUserDefinedStruct {
		constexpr auto Status = 0xc0; // EUserDefinedStructureStatus
		constexpr auto Guid = 0xc4; // FGuid
	}

	namespace n_UNavRelevantComponent {
		constexpr auto bAttachToOwnersRoot = 0xd4; // char : 1
		constexpr auto CachedNavParent = 0xd8; // UObject*
	}

	namespace n_UParticleModuleAccelerationDrag {
		constexpr auto DragCoefficient = 0x38; // UDistributionFloat*
		constexpr auto DragCoefficientRaw = 0x40; // FRawDistributionFloat
	}

	namespace n_ALevelStreamingVolume {
		constexpr auto StreamingLevelNames = 0x258; // TArray<FName>
		constexpr auto bEditorPreVisOnly = 0x268; // char : 1
		constexpr auto bDisabled = 0x268; // char : 1
		constexpr auto StreamingUsage = 0x26c; // EStreamingVolumeUsage
	}

	namespace n_UInterpTrackInstProperty {
		constexpr auto InterpProperty = 0x28; // TFieldPath<FProperty>
		constexpr auto PropertyOuterObjectInst = 0x48; // UObject*
	}

	namespace n_UInterpGroupCamera {
		constexpr auto CameraAnimInst = 0x50; // UCameraAnim*
		constexpr auto CompressTolerance = 0x58; // float
	}

	namespace n_UModularSynthPresetBank {
		constexpr auto Presets = 0x28; // TArray<FModularSynthPresetBankEntry>
	}

	namespace n_UPortalWarsReplayPlayerWidget {
		constexpr auto BlueSelectedBackgroundImage = 0x360; // UTexture2D*
		constexpr auto RedSelectedBackgroundImage = 0x368; // UTexture2D*
		constexpr auto HealthBar = 0x370; // UProgressBar*
		constexpr auto PlayerNameText = 0x378; // UTextBlock*
		constexpr auto Button = 0x380; // UButton*
	}

	namespace n_UStereoLayerShapeCylinder {
		constexpr auto Radius = 0x28; // float
		constexpr auto OverlayArc = 0x2c; // float
		constexpr auto Height = 0x30; // int32_t
	}

	namespace n_UMaterialExpressionStaticBool {
		constexpr auto Value = 0x40; // char : 1
	}

	namespace n_UMaterialBillboardComponent {
		constexpr auto Elements = 0x450; // TArray<FMaterialSpriteElement>
	}

	namespace n_UParticleModuleSpawn {
		constexpr auto Rate = 0x38; // FRawDistributionFloat
		constexpr auto RateScale = 0x68; // FRawDistributionFloat
		constexpr auto ParticleBurstMethod = 0x98; // EParticleBurstMethod
		constexpr auto BurstList = 0xa0; // TArray<FParticleBurst>
		constexpr auto BurstScale = 0xb0; // FRawDistributionFloat
		constexpr auto bApplyGlobalSpawnRateScale = 0xe0; // char : 1
	}

	namespace n_UAISense_Hearing {
		constexpr auto NoiseEvents = 0x80; // TArray<FAINoiseEvent>
		constexpr auto SpeedOfSoundSq = 0x90; // float
	}

	namespace n_UMaterialExpressionStaticSwitch {
		constexpr auto DefaultValue = 0x40; // char : 1
		constexpr auto A = 0x44; // FExpressionInput
		constexpr auto B = 0x58; // FExpressionInput
		constexpr auto Value = 0x6c; // FExpressionInput
	}

	namespace n_UMaterialExpressionSobol {
		constexpr auto Cell = 0x40; // FExpressionInput
		constexpr auto Index = 0x54; // FExpressionInput
		constexpr auto Seed = 0x68; // FExpressionInput
		constexpr auto ConstIndex = 0x7c; // uint32_t
		constexpr auto ConstSeed = 0x80; // FVector2D
	}

	namespace n_APortalWarsTeabagConfirmed {
		constexpr auto TeabagZoneClass = 0x6a8; // APortalWarsTeabagZone*
	}

	namespace n_UPoseAsset {
		constexpr auto PoseContainer = 0x80; // FPoseDataContainer
		constexpr auto bAdditivePose = 0x110; // bool
		constexpr auto BasePoseIndex = 0x114; // int32_t
		constexpr auto RetargetSource = 0x118; // FName
		constexpr auto RetargetSourceAssetReferencePose = 0x120; // TArray<FTransform>
	}

	namespace n_UPortalWarsGamepadBindingActionWidget {
		constexpr auto ActionButton = 0x2a8; // UPortalWarsButton*
		constexpr auto ActionText = 0x2b0; // UTextBlock*
		constexpr auto ButtonBackground = 0x2b8; // UImage*
		constexpr auto ButtonIcon = 0x2c0; // UImage*
		constexpr auto OnActionSelected = 0x2c8; // FMulticastInlineDelegate
		constexpr auto StandardTextColor = 0x2f8; // FSlateColor
		constexpr auto ActiveTextColor = 0x320; // FSlateColor
		constexpr auto StandardBackgroundColor = 0x348; // FLinearColor
		constexpr auto ActiveBackgroundColor = 0x358; // FLinearColor
	}

	namespace n_UAkWinGDKInitializationSettings {
		constexpr auto CommonSettings = 0x28; // FAkCommonInitializationSettingsWithSampleRate
		constexpr auto CommunicationSettings = 0x98; // FAkCommunicationSettingsWithSystemInitialization
		constexpr auto AdvancedSettings = 0xc0; // FAkWinGDKAdvancedInitializationSettings
	}

	namespace n_USubmixEffectSubmixEQPreset {
		constexpr auto Settings = 0xa0; // FSubmixEffectSubmixEQSettings
	}

	namespace n_UNiagaraDataInterfaceRenderTargetVolume {
		constexpr auto Size = 0xd8; // FIntVector
		constexpr auto OverrideRenderTargetFormat = 0xe4; // ETextureRenderTargetFormat
		constexpr auto bInheritUserParameterSettings = 0xe5; // char : 1
		constexpr auto bOverrideFormat = 0xe5; // char : 1
		constexpr auto RenderTargetUserParameter = 0xe8; // FNiagaraUserParameterBinding
		constexpr auto ManagedRenderTargets = 0x108; // TMap<uint64_t, UTextureRenderTargetVolume*>
	}

	namespace n_UMovieSceneLevelVisibilitySection {
		constexpr auto Visibility = 0xf0; // ELevelVisibility
		constexpr auto LevelNames = 0xf8; // TArray<FName>
	}

	namespace n_UClothingAssetCommon {
		constexpr auto PhysicsAsset = 0x48; // UPhysicsAsset*
		constexpr auto ClothConfigs = 0x50; // TMap<FName, UClothConfigBase*>
		constexpr auto LODData = 0xa0; // TArray<FClothLODDataCommon>
		constexpr auto LodMap = 0xb0; // TArray<int32_t>
		constexpr auto UsedBoneNames = 0xc0; // TArray<FName>
		constexpr auto UsedBoneIndices = 0xd0; // TArray<int32_t>
		constexpr auto ReferenceBoneIndex = 0xe0; // int32_t
		constexpr auto CustomData = 0xe8; // UClothingAssetCustomData*
	}

	namespace n_UMaterialExpressionLandscapeGrassOutput {
		constexpr auto GrassTypes = 0x40; // TArray<FGrassInput>
	}

	namespace n_USkeletalMeshLODSettings {
		constexpr auto MinLOD = 0x30; // FPerPlatformInt
		constexpr auto DisableBelowMinLodStripping = 0x34; // FPerPlatformBool
		constexpr auto bOverrideLODStreamingSettings = 0x35; // bool
		constexpr auto bSupportLODStreaming = 0x36; // FPerPlatformBool
		constexpr auto MaxNumStreamedLODs = 0x38; // FPerPlatformInt
		constexpr auto MaxNumOptionalLODs = 0x3c; // FPerPlatformInt
		constexpr auto LODGroups = 0x40; // TArray<FSkeletalMeshLODGroupSettings>
	}

	namespace n_UBookMark {
		constexpr auto Location = 0x28; // FVector
		constexpr auto Rotation = 0x34; // FRotator
		constexpr auto HiddenLevels = 0x40; // TArray<FString>
	}

	namespace n_UHapticFeedbackEffect_Buffer {
		constexpr auto Amplitudes = 0x28; // TArray<char>
		constexpr auto SampleRate = 0x38; // int32_t
	}

	namespace n_ASkyAtmosphere {
		constexpr auto SkyAtmosphereComponent = 0x220; // USkyAtmosphereComponent*
	}

	namespace n_UPWTutorialStepEntryWidget {
		constexpr auto DescriptionText = 0x2a8; // UTextBlock*
		constexpr auto InputDecorator = 0x2b0; // UPortalWarsInputDecoratorWidget*
		constexpr auto CompletedSwitcher = 0x2b8; // UWidgetSwitcher*
	}

	namespace n_UAppleImageUtilsBaseAsyncTaskBlueprintProxy {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
		constexpr auto ConversionResult = 0x60; // FAppleImageUtilsImageConversionResult
	}

	namespace n_UAnimCompress_PerTrackCompression {
		constexpr auto MaxZeroingThreshold = 0x60; // float
		constexpr auto MaxPosDiffBitwise = 0x64; // float
		constexpr auto MaxAngleDiffBitwise = 0x68; // float
		constexpr auto MaxScaleDiffBitwise = 0x6c; // float
		constexpr auto AllowedRotationFormats = 0x70; // TArray<AnimationCompressionFormat>
		constexpr auto AllowedTranslationFormats = 0x80; // TArray<AnimationCompressionFormat>
		constexpr auto AllowedScaleFormats = 0x90; // TArray<AnimationCompressionFormat>
		constexpr auto bResampleAnimation = 0xa0; // char : 1
		constexpr auto ResampledFramerate = 0xa4; // float
		constexpr auto MinKeysForResampling = 0xa8; // int32_t
		constexpr auto bUseAdaptiveError = 0xac; // char : 1
		constexpr auto bUseOverrideForEndEffectors = 0xac; // char : 1
		constexpr auto TrackHeightBias = 0xb0; // int32_t
		constexpr auto ParentingDivisor = 0xb4; // float
		constexpr auto ParentingDivisorExponent = 0xb8; // float
		constexpr auto bUseAdaptiveError2 = 0xbc; // char : 1
		constexpr auto RotationErrorSourceRatio = 0xc0; // float
		constexpr auto TranslationErrorSourceRatio = 0xc4; // float
		constexpr auto ScaleErrorSourceRatio = 0xc8; // float
		constexpr auto MaxErrorPerTrackRatio = 0xcc; // float
		constexpr auto PerturbationProbeSize = 0xd0; // float
	}

	namespace n_UPortalWarsRoundResultWidget {
		constexpr auto TitleText = 0x260; // UTextBlock*
		constexpr auto LeftStarImage = 0x268; // UImage*
		constexpr auto RightStarImage = 0x270; // UImage*
		constexpr auto TopBorderImage = 0x278; // UImage*
		constexpr auto BottomBorderImage = 0x280; // UImage*
		constexpr auto FadeInAnimation = 0x2a0; // UWidgetAnimation*
	}

	namespace n_UPortalWarsKillcam {
		constexpr auto DemoNetDriver = 0x28; // UDemoNetDriver*
		constexpr auto OwningPlayerController = 0x30; // APortalWarsPlayerController*
	}

	namespace n_UPortalWarsPauseMenuWidget {
		constexpr auto ResumeButton = 0x3b0; // UPortalWarsButtonWidget*
		constexpr auto SettingsButton = 0x3b8; // UPortalWarsButtonWidget*
		constexpr auto PlayersButton = 0x3c0; // UPortalWarsButtonWidget*
		constexpr auto ExitButton = 0x3c8; // UPortalWarsButtonWidget*
		constexpr auto SwitchTeamsButton = 0x3d0; // UPortalWarsButtonWidget*
		constexpr auto EndMatchButton = 0x3d8; // UPortalWarsButtonWidget*
		constexpr auto RestartRaceButton = 0x3e0; // UPortalWarsButtonWidget*
		constexpr auto RestartStageButton = 0x3e8; // UPortalWarsButtonWidget*
	}

	namespace n_UPortalWarsLeaderboardsWidget {
		constexpr auto RankLeaderboardWidget = 0x338; // UPortalWarsMenuWidget*
	}

	namespace n_ASpectatorBeaconHost {
		constexpr auto State = 0x248; // USpectatorBeaconState*
		constexpr auto bLogoutOnSessionTimeout = 0x2b0; // bool
		constexpr auto SessionTimeoutSecs = 0x2b4; // float
		constexpr auto TravelSessionTimeoutSecs = 0x2b8; // float
	}

	namespace n_UMaterialExpressionArctangentFast {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UMaterialExpressionSine {
		constexpr auto Input = 0x40; // FExpressionInput
		constexpr auto Period = 0x54; // float
	}

	namespace n_UPortalWarsRecentPlayersWidget {
		constexpr auto RefreshButton = 0x340; // UPortalWarsButtonWidget*
		constexpr auto RecentPlayersPanel = 0x348; // UPanelWidget*
		constexpr auto PlayerEntryWidgetClass = 0x350; // UPortalWarsSocialPlayerEntry*
		constexpr auto PlayerActionsWidgetClass = 0x358; // UPortalWarsPlayerActionsWidget*
		constexpr auto ErrorText = 0x368; // UTextBlock*
	}

	namespace n_UVivoxSubsystem {
		constexpr auto Channels = 0xa0; // TArray<UVivoxChannel*>
	}

	namespace n_UNiagaraParameterCollectionInstance {
		constexpr auto Collection = 0x28; // UNiagaraParameterCollection*
		constexpr auto OverridenParameters = 0x30; // TArray<FNiagaraVariable>
		constexpr auto ParameterStorage = 0x40; // FNiagaraParameterStore
	}

	namespace n_UPortalWarsPortalIndicatorWidget {
		constexpr auto Pointer = 0x2b8; // UWidget*
		constexpr auto OnScreenIndicatorImage = 0x2c0; // UImage*
		constexpr auto OffScreenIndicatorImage = 0x2c8; // UImage*
		constexpr auto Scrim = 0x2d0; // UImage*
		constexpr auto LeftPortalIndicatorImage = 0x2d8; // UTexture2D*
		constexpr auto RightPortalIndicatorImage = 0x2e0; // UTexture2D*
		constexpr auto LeftPortalScrimImage = 0x2e8; // UTexture2D*
		constexpr auto RightPortalScrimImage = 0x2f0; // UTexture2D*
	}

	namespace n_UPortalWarsNotificationOverlayWidget {
		constexpr auto InviteEntryWidgetClass = 0x2a8; // UPortalWarsInviteEntryWidget*
		constexpr auto RequestEntryWidgetClass = 0x2b0; // UPortalWarsFriendRequestEntry*
		constexpr auto ChunkInstallWidgetClass = 0x2b8; // UUserWidget*
		constexpr auto MessagePanel = 0x2c0; // UPanelWidget*
		constexpr auto NotificationPanel = 0x2c8; // UPanelWidget*
	}

	namespace n_UMagicLeapARPinContentBindings {
		constexpr auto AllContentBindings = 0x28; // TMap<FGuid, FMagicLeapARPinObjectIdList>
	}

	namespace n_UMaterialExpressionLandscapePhysicalMaterialOutput {
		constexpr auto Inputs = 0x40; // TArray<FPhysicalMaterialInput>
	}

	namespace n_UClothPhysicalMeshDataNv_Legacy {
		constexpr auto MaxDistances = 0xe0; // TArray<float>
		constexpr auto BackstopDistances = 0xf0; // TArray<float>
		constexpr auto BackstopRadiuses = 0x100; // TArray<float>
		constexpr auto AnimDriveMultipliers = 0x110; // TArray<float>
	}

	namespace n_UPortalWarsUserWidget {
		constexpr auto PlatformVisibility = 0x28d; // EWidgetPlatformVisibility
		constexpr auto bIsDuplicate = 0x298; // bool
		constexpr auto bIsDeferred = 0x299; // bool
		constexpr auto DeferredWidgetBPClass = 0x2a0; // UPortalWarsUserWidget*
	}

	namespace n_UPoseWatch {
		constexpr auto Node = 0x28; // UEdGraphNode*
		constexpr auto PoseWatchColour = 0x30; // FColor
	}

	namespace n_UIpConnection {
		constexpr auto SocketErrorDisconnectDelay = 0x1bf8; // float
	}

	namespace n_UBTTask_Wander {
		constexpr auto WanderRadius = 0xb0; // float
		constexpr auto WanderOffset = 0xb4; // float
		constexpr auto bShouldWanderForward = 0xb8; // bool
		constexpr auto bKeepWandering = 0xb9; // bool
		constexpr auto bCanSprint = 0xba; // bool
		constexpr auto bUseBlackboardCenter = 0xbb; // bool
		constexpr auto BlackboardKeyActorWanderCenter = 0xc0; // FBlackboardKeySelector
	}

	namespace n_UPerlinNoiseCameraShakePattern {
		constexpr auto LocationAmplitudeMultiplier = 0x38; // float
		constexpr auto LocationFrequencyMultiplier = 0x3c; // float
		constexpr auto X = 0x40; // FPerlinNoiseShaker
		constexpr auto Y = 0x48; // FPerlinNoiseShaker
		constexpr auto Z = 0x50; // FPerlinNoiseShaker
		constexpr auto RotationAmplitudeMultiplier = 0x58; // float
		constexpr auto RotationFrequencyMultiplier = 0x5c; // float
		constexpr auto Pitch = 0x60; // FPerlinNoiseShaker
		constexpr auto Yaw = 0x68; // FPerlinNoiseShaker
		constexpr auto Roll = 0x70; // FPerlinNoiseShaker
		constexpr auto FOV = 0x78; // FPerlinNoiseShaker
	}

	namespace n_UPortalWarsServerEntryWidget {
		constexpr auto ServerNameText = 0x420; // UTextBlock*
		constexpr auto ServerTypeText = 0x428; // UTextBlock*
		constexpr auto MapText = 0x430; // UTextBlock*
		constexpr auto MapImage = 0x438; // UImage*
		constexpr auto ModeText = 0x440; // UTextBlock*
		constexpr auto RegionText = 0x448; // UTextBlock*
		constexpr auto PrivateRoot = 0x450; // UWidget*
		constexpr auto PrivateImage = 0x458; // UImage*
		constexpr auto PlayersText = 0x460; // UTextBlock*
		constexpr auto SpectatorsText = 0x468; // UTextBlock*
		constexpr auto CrossplayIndicator = 0x470; // UWidget*
		constexpr auto CreatedByPanel = 0x478; // UPanelWidget*
		constexpr auto CreatedByEntryWidgetClass = 0x480; // UPortalWarsPlayerEntryWidget*
		constexpr auto BackgroundSwitcher = 0x5e8; // UWidgetSwitcher*
	}

	namespace n_UNetConnection {
		constexpr auto Children = 0x48; // TArray<UChildConnection*>
		constexpr auto Driver = 0x58; // UNetDriver*
		constexpr auto PackageMapClass = 0x60; // UPackageMap*
		constexpr auto PackageMap = 0x68; // UPackageMap*
		constexpr auto OpenChannels = 0x70; // TArray<UChannel*>
		constexpr auto SentTemporaries = 0x80; // TArray<AActor*>
		constexpr auto ViewTarget = 0x90; // AActor*
		constexpr auto OwningActor = 0x98; // AActor*
		constexpr auto MaxPacket = 0xa0; // int32_t
		constexpr auto InternalAck = 0xa4; // char : 1
		constexpr auto PlayerId = 0x160; // FUniqueNetIdRepl
		constexpr auto LastReceiveTime = 0x1d0; // double
		constexpr auto ChannelsToTick = 0x1510; // TArray<UChannel*>
	}

	namespace n_UGameplayTagsList {
		constexpr auto ConfigFileName = 0x28; // FString
		constexpr auto GameplayTagList = 0x38; // TArray<FGameplayTagTableRow>
	}

	namespace n_UParticleSystem {
		constexpr auto UpdateTime_FPS = 0x30; // float
		constexpr auto UpdateTime_Delta = 0x34; // float
		constexpr auto WarmupTime = 0x38; // float
		constexpr auto WarmupTickRate = 0x3c; // float
		constexpr auto Emitters = 0x40; // TArray<UParticleEmitter*>
		constexpr auto PreviewComponent = 0x50; // UParticleSystemComponent*
		constexpr auto CurveEdSetup = 0x58; // UInterpCurveEdSetup*
		constexpr auto LODDistanceCheckTime = 0x60; // float
		constexpr auto MacroUVRadius = 0x64; // float
		constexpr auto LODDistances = 0x68; // TArray<float>
		constexpr auto LODSettings = 0x78; // TArray<FParticleSystemLOD>
		constexpr auto FixedRelativeBoundingBox = 0x88; // FBox
		constexpr auto SecondsBeforeInactive = 0xa4; // float
		constexpr auto Delay = 0xa8; // float
		constexpr auto DelayLow = 0xac; // float
		constexpr auto bOrientZAxisTowardCamera = 0xb0; // char : 1
		constexpr auto bUseFixedRelativeBoundingBox = 0xb0; // char : 1
		constexpr auto bShouldResetPeakCounts = 0xb0; // char : 1
		constexpr auto bHasPhysics = 0xb0; // char : 1
		constexpr auto bUseRealtimeThumbnail = 0xb0; // char : 1
		constexpr auto ThumbnailImageOutOfDate = 0xb0; // char : 1
		constexpr auto bUseDelayRange = 0xb1; // char : 1
		constexpr auto bAllowManagedTicking = 0xb1; // char : 1
		constexpr auto bAutoDeactivate = 0xb1; // char : 1
		constexpr auto bRegenerateLODDuplicate = 0xb1; // char : 1
		constexpr auto SystemUpdateMode = 0xb2; // EParticleSystemUpdateMode
		constexpr auto LODMethod = 0xb3; // ParticleSystemLODMethod
		constexpr auto InsignificantReaction = 0xb4; // EParticleSystemInsignificanceReaction
		constexpr auto OcclusionBoundsMethod = 0xb5; // EParticleSystemOcclusionBoundsMethod
		constexpr auto MaxSignificanceLevel = 0xb7; // EParticleSignificanceLevel
		constexpr auto MinTimeBetweenTicks = 0xb8; // uint32_t
		constexpr auto InsignificanceDelay = 0xbc; // float
		constexpr auto MacroUVPosition = 0xc0; // FVector
		constexpr auto CustomOcclusionBounds = 0xcc; // FBox
		constexpr auto SoloTracking = 0xe8; // TArray<FLODSoloTrack>
		constexpr auto NamedMaterialSlots = 0xf8; // TArray<FNamedEmitterMaterial>
	}

	namespace n_UStaticMeshSimulationComponent {
		constexpr auto Simulating = 0xb8; // bool
		constexpr auto bNotifyCollisions = 0xb9; // bool
		constexpr auto ObjectType = 0xba; // EObjectStateTypeEnum
		constexpr auto Mass = 0xbc; // float
		constexpr auto CollisionType = 0xc0; // ECollisionTypeEnum
		constexpr auto ImplicitType = 0xc1; // EImplicitTypeEnum
		constexpr auto MinLevelSetResolution = 0xc4; // int32_t
		constexpr auto MaxLevelSetResolution = 0xc8; // int32_t
		constexpr auto InitialVelocityType = 0xcc; // EInitialVelocityTypeEnum
		constexpr auto InitialLinearVelocity = 0xd0; // FVector
		constexpr auto InitialAngularVelocity = 0xdc; // FVector
		constexpr auto DamageThreshold = 0xe8; // float
		constexpr auto PhysicalMaterial = 0xf0; // UChaosPhysicalMaterial*
		constexpr auto ChaosSolverActor = 0xf8; // AChaosSolverActor*
		constexpr auto OnChaosPhysicsCollision = 0x100; // FMulticastInlineDelegate
		constexpr auto SimulatedComponents = 0x120; // TArray<UPrimitiveComponent*>
	}

	namespace n_UPortalWarsHostMenuWidget {
		constexpr auto HostButton = 0x338; // UPortalWarsButtonWidget*
		constexpr auto RegionRadioGroup = 0x340; // UPortalWarsRadioGroupWidget*
		constexpr auto ServerName = 0x348; // UPortalWarsTextInputWidget*
		constexpr auto ServerPassword = 0x350; // UPortalWarsTextInputWidget*
		constexpr auto PrivateCheckBox = 0x358; // UPortalWarsCheckBoxWidget*
		constexpr auto MaxPlayersInput = 0x360; // UPortalWarsNumericCarouselWidget*
		constexpr auto TypeRadioGroup = 0x368; // UPortalWarsRadioGroupWidget*
		constexpr auto GameInstanceRef = 0x378; // UPortalWarsGameInstance*
	}

	namespace n_UParticleModuleLocationBoneSocket {
		constexpr auto SourceType = 0x30; // ELocationBoneSocketSource
		constexpr auto UniversalOffset = 0x34; // FVector
		constexpr auto SourceLocations = 0x40; // TArray<FLocationBoneSocketInfo>
		constexpr auto SelectionMethod = 0x50; // ELocationBoneSocketSelectionMethod
		constexpr auto bUpdatePositionEachFrame = 0x54; // char : 1
		constexpr auto bOrientMeshEmitters = 0x54; // char : 1
		constexpr auto bInheritBoneVelocity = 0x54; // char : 1
		constexpr auto InheritVelocityScale = 0x58; // float
		constexpr auto SkelMeshActorParamName = 0x5c; // FName
		constexpr auto NumPreSelectedIndices = 0x64; // int32_t
	}

	namespace n_UMaterialExpressionVectorNoise {
		constexpr auto Position = 0x40; // FExpressionInput
		constexpr auto NoiseFunction = 0x54; // EVectorNoiseFunction
		constexpr auto Quality = 0x58; // int32_t
		constexpr auto bTiling = 0x5c; // char : 1
		constexpr auto TileSize = 0x60; // uint32_t
	}

	namespace n_UPortalWarsTutorialStepsWidget {
		constexpr auto StepWidgets = 0x288; // TArray<UPWTutorialStepEntryWidget*>
		constexpr auto CurrentStepPanel = 0x298; // UPanelWidget*
		constexpr auto CompletedStepPanel = 0x2a0; // UPanelWidget*
		constexpr auto CompletedIndicator = 0x2a8; // UWidget*
		constexpr auto StepEntryWidgetClass = 0x2b0; // UPWTutorialStepEntryWidget*
	}

	namespace n_ABrush {
		constexpr auto BrushType = 0x220; // EBrushType
		constexpr auto BrushColor = 0x224; // FColor
		constexpr auto PolyFlags = 0x228; // int32_t
		constexpr auto bColored = 0x22c; // char : 1
		constexpr auto bSolidWhenSelected = 0x22c; // char : 1
		constexpr auto bPlaceableFromClassBrowser = 0x22c; // char : 1
		constexpr auto bNotForClientOrServer = 0x22c; // char : 1
		constexpr auto Brush = 0x230; // UModel*
		constexpr auto BrushComponent = 0x238; // UBrushComponent*
		constexpr auto bInManipulation = 0x240; // char : 1
		constexpr auto SavedSelections = 0x248; // TArray<FGeomSelection>
	}

	namespace n_UUniformGridPanel {
		constexpr auto SlotPadding = 0x120; // FMargin
		constexpr auto MinDesiredSlotWidth = 0x130; // float
		constexpr auto MinDesiredSlotHeight = 0x134; // float
	}

	namespace n_ATriggerBase {
		constexpr auto CollisionComponent = 0x220; // UShapeComponent*
	}

	namespace n_UARTrackableNotifyComponent {
		constexpr auto OnAddTrackedGeometry = 0xb0; // FMulticastInlineDelegate
		constexpr auto OnUpdateTrackedGeometry = 0xc0; // FMulticastInlineDelegate
		constexpr auto OnRemoveTrackedGeometry = 0xd0; // FMulticastInlineDelegate
		constexpr auto OnAddTrackedPlane = 0xe0; // FMulticastInlineDelegate
		constexpr auto OnUpdateTrackedPlane = 0xf0; // FMulticastInlineDelegate
		constexpr auto OnRemoveTrackedPlane = 0x100; // FMulticastInlineDelegate
		constexpr auto OnAddTrackedPoint = 0x110; // FMulticastInlineDelegate
		constexpr auto OnUpdateTrackedPoint = 0x120; // FMulticastInlineDelegate
		constexpr auto OnRemoveTrackedPoint = 0x130; // FMulticastInlineDelegate
		constexpr auto OnAddTrackedImage = 0x140; // FMulticastInlineDelegate
		constexpr auto OnUpdateTrackedImage = 0x150; // FMulticastInlineDelegate
		constexpr auto OnRemoveTrackedImage = 0x160; // FMulticastInlineDelegate
		constexpr auto OnAddTrackedFace = 0x170; // FMulticastInlineDelegate
		constexpr auto OnUpdateTrackedFace = 0x180; // FMulticastInlineDelegate
		constexpr auto OnRemoveTrackedFace = 0x190; // FMulticastInlineDelegate
		constexpr auto OnAddTrackedEnvProbe = 0x1a0; // FMulticastInlineDelegate
		constexpr auto OnUpdateTrackedEnvProbe = 0x1b0; // FMulticastInlineDelegate
		constexpr auto OnRemoveTrackedEnvProbe = 0x1c0; // FMulticastInlineDelegate
		constexpr auto OnAddTrackedObject = 0x1d0; // FMulticastInlineDelegate
		constexpr auto OnUpdateTrackedObject = 0x1e0; // FMulticastInlineDelegate
		constexpr auto OnRemoveTrackedObject = 0x1f0; // FMulticastInlineDelegate
	}

	namespace n_UStreamingSettings {
		constexpr auto AsyncLoadingThreadEnabled = 0x38; // char : 1
		constexpr auto WarnIfTimeLimitExceeded = 0x38; // char : 1
		constexpr auto TimeLimitExceededMultiplier = 0x3c; // float
		constexpr auto TimeLimitExceededMinTime = 0x40; // float
		constexpr auto MinBulkDataSizeForAsyncLoading = 0x44; // int32_t
		constexpr auto UseBackgroundLevelStreaming = 0x48; // char : 1
		constexpr auto AsyncLoadingUseFullTimeLimit = 0x48; // char : 1
		constexpr auto AsyncLoadingTimeLimit = 0x4c; // float
		constexpr auto PriorityAsyncLoadingExtraTime = 0x50; // float
		constexpr auto LevelStreamingActorsUpdateTimeLimit = 0x54; // float
		constexpr auto PriorityLevelStreamingActorsUpdateExtraTime = 0x58; // float
		constexpr auto LevelStreamingComponentsRegistrationGranularity = 0x5c; // int32_t
		constexpr auto LevelStreamingUnregisterComponentsTimeLimit = 0x60; // float
		constexpr auto LevelStreamingComponentsUnregistrationGranularity = 0x64; // int32_t
		constexpr auto FlushStreamingOnExit = 0x68; // char : 1
		constexpr auto EventDrivenLoaderEnabled = 0x68; // char : 1
	}

	namespace n_UDatasmithStaticMeshIFCImportData {
		constexpr auto SourceGlobalId = 0x28; // FString
	}

	namespace n_UMaterialExpressionLightmassReplace {
		constexpr auto Realtime = 0x40; // FExpressionInput
		constexpr auto Lightmass = 0x54; // FExpressionInput
	}

	namespace n_UBrushComponent {
		constexpr auto Brush = 0x450; // UModel*
		constexpr auto BrushBodySetup = 0x458; // UBodySetup*
	}

	namespace n_USkeletalMeshSimulationComponent {
		constexpr auto PhysicalMaterial = 0xb8; // UChaosPhysicalMaterial*
		constexpr auto ChaosSolverActor = 0xc0; // AChaosSolverActor*
		constexpr auto OverridePhysicsAsset = 0xc8; // UPhysicsAsset*
		constexpr auto bSimulating = 0xd0; // bool
		constexpr auto bNotifyCollisions = 0xd1; // bool
		constexpr auto ObjectType = 0xd2; // EObjectStateTypeEnum
		constexpr auto Density = 0xd4; // float
		constexpr auto MinMass = 0xd8; // float
		constexpr auto MaxMass = 0xdc; // float
		constexpr auto CollisionType = 0xe0; // ECollisionTypeEnum
		constexpr auto ImplicitShapeParticlesPerUnitArea = 0xe4; // float
		constexpr auto ImplicitShapeMinNumParticles = 0xe8; // int32_t
		constexpr auto ImplicitShapeMaxNumParticles = 0xec; // int32_t
		constexpr auto MinLevelSetResolution = 0xf0; // int32_t
		constexpr auto MaxLevelSetResolution = 0xf4; // int32_t
		constexpr auto CollisionGroup = 0xf8; // int32_t
		constexpr auto InitialVelocityType = 0xfc; // EInitialVelocityTypeEnum
		constexpr auto InitialLinearVelocity = 0x100; // FVector
		constexpr auto InitialAngularVelocity = 0x10c; // FVector
		constexpr auto OnChaosPhysicsCollision = 0x118; // FMulticastInlineDelegate
	}

	namespace n_UInterpTrackVisibility {
		constexpr auto VisibilityTrack = 0x70; // TArray<FVisibilityTrackKey>
		constexpr auto bFireEventsWhenForwards = 0x80; // char : 1
		constexpr auto bFireEventsWhenBackwards = 0x80; // char : 1
		constexpr auto bFireEventsWhenJumpingForwards = 0x80; // char : 1
	}

	namespace n_UMaterialExpressionArctangent2Fast {
		constexpr auto Y = 0x40; // FExpressionInput
		constexpr auto X = 0x54; // FExpressionInput
	}

	namespace n_UDragDropOperation {
		constexpr auto Tag = 0x28; // FString
		constexpr auto Payload = 0x38; // UObject*
		constexpr auto DefaultDragVisual = 0x40; // UWidget*
		constexpr auto Pivot = 0x48; // EDragPivot
		constexpr auto Offset = 0x4c; // FVector2D
		constexpr auto OnDrop = 0x58; // FMulticastInlineDelegate
		constexpr auto OnDragCancelled = 0x68; // FMulticastInlineDelegate
		constexpr auto OnDragged = 0x78; // FMulticastInlineDelegate
	}

	namespace n_UDatasmithCommonTessellationOptions {
		constexpr auto Options = 0x28; // FDatasmithTessellationOptions
	}

	namespace n_UIntSerialization {
		constexpr auto UnsignedInt16Variable = 0x28; // uint16_t
		constexpr auto UnsignedInt32Variable = 0x2c; // uint32_t
		constexpr auto UnsignedInt64Variable = 0x30; // uint64_t
		constexpr auto SignedInt8Variable = 0x38; // int8_t
		constexpr auto SignedInt16Variable = 0x3a; // int16_t
		constexpr auto SignedInt64Variable = 0x40; // int64_t
		constexpr auto UnsignedInt8Variable = 0x48; // char
		constexpr auto SignedInt32Variable = 0x4c; // int32_t
	}

	namespace n_UTransformGizmo {
		constexpr auto ActiveTarget = 0x40; // UTransformProxy*
		constexpr auto bSnapToWorldGrid = 0x48; // bool
		constexpr auto bGridSizeIsExplicit = 0x49; // bool
		constexpr auto ExplicitGridSize = 0x4c; // FVector
		constexpr auto bRotationGridSizeIsExplicit = 0x58; // bool
		constexpr auto ExplicitRotationGridSize = 0x5c; // FRotator
		constexpr auto bSnapToWorldRotGrid = 0x68; // bool
		constexpr auto bUseContextCoordinateSystem = 0x69; // bool
		constexpr auto CurrentCoordinateSystem = 0x6c; // EToolContextCoordinateSystem
		constexpr auto ActiveComponents = 0x100; // TArray<UPrimitiveComponent*>
		constexpr auto NonuniformScaleComponents = 0x110; // TArray<UPrimitiveComponent*>
		constexpr auto ActiveGizmos = 0x120; // TArray<UInteractiveGizmo*>
		constexpr auto CameraAxisSource = 0x140; // UGizmoConstantFrameAxisSource*
		constexpr auto AxisXSource = 0x148; // UGizmoComponentAxisSource*
		constexpr auto AxisYSource = 0x150; // UGizmoComponentAxisSource*
		constexpr auto AxisZSource = 0x158; // UGizmoComponentAxisSource*
		constexpr auto UnitAxisXSource = 0x160; // UGizmoComponentAxisSource*
		constexpr auto UnitAxisYSource = 0x168; // UGizmoComponentAxisSource*
		constexpr auto UnitAxisZSource = 0x170; // UGizmoComponentAxisSource*
		constexpr auto StateTarget = 0x178; // UGizmoTransformChangeStateTarget*
		constexpr auto ScaledTransformSource = 0x180; // UGizmoScaledTransformSource*
	}

	namespace n_USubmixEffectStereoDelayPreset {
		constexpr auto Settings = 0xb4; // FSubmixEffectStereoDelaySettings
	}

	namespace n_UPortalWarsProgressRadialWidget {
		constexpr auto ProgressImage = 0x260; // UImage*
		constexpr auto LineHardness = 0x268; // float
		constexpr auto LineWidth = 0x26c; // float
		constexpr auto Radius = 0x270; // float
		constexpr auto Percent = 0x274; // float
	}

	namespace n_UPortalWarsNotificationEntryWidget {
		constexpr auto ButtonRoot = 0x660; // UWidget*
		constexpr auto AcceptButton = 0x668; // UPortalWarsButtonWidget*
		constexpr auto DeclineButton = 0x670; // UPortalWarsButtonWidget*
		constexpr auto ViewButton = 0x678; // UPortalWarsButtonWidget*
		constexpr auto SelectedSwitcher = 0x680; // UWidgetSwitcher*
		constexpr auto DescriptionText = 0x688; // UTextBlock*
		constexpr auto MaxLifetime = 0x690; // float
		constexpr auto LifetimeProgressBar = 0x698; // UProgressBar*
	}

	namespace n_APortalWall {
		constexpr auto PortalWallMesh = 0x220; // UStaticMeshComponent*
		constexpr auto validForAI = 0x228; // bool
		constexpr auto isDoubleSided = 0x229; // bool
		constexpr auto shouldDisableForCTF = 0x22a; // bool
		constexpr auto Goal = 0x230; // APortalWarsTutorialGoal*
		constexpr auto Blocks = 0x238; // TArray<AStaticMeshActor*>
		constexpr auto HiddenUntilGoal = 0x248; // int32_t
	}

	namespace n_UMaterialExpressionDynamicParameter {
		constexpr auto ParamNames = 0x40; // TArray<FString>
		constexpr auto DefaultValue = 0x50; // FLinearColor
		constexpr auto ParameterIndex = 0x60; // uint32_t
	}

	namespace n_UBehaviorTree {
		constexpr auto RootNode = 0x30; // UBTCompositeNode*
		constexpr auto BlackboardAsset = 0x38; // UBlackboardData*
		constexpr auto RootDecorators = 0x40; // TArray<UBTDecorator*>
		constexpr auto RootDecoratorOps = 0x50; // TArray<FBTDecoratorLogic>
	}

	namespace n_UParticleModuleLocationPrimitiveCylinder {
		constexpr auto RadialVelocity = 0xb0; // char : 1
		constexpr auto StartRadius = 0xb8; // FRawDistributionFloat
		constexpr auto StartHeight = 0xe8; // FRawDistributionFloat
		constexpr auto HeightAxis = 0x118; // CylinderHeightAxis
	}

	namespace n_UInterpTrackAkAudioEvent {
		constexpr auto Events = 0x90; // TArray<FAkAudioEventTrackKey>
		constexpr auto bContinueEventOnMatineeEnd = 0xa0; // char : 1
	}

	namespace n_UBlackboardKeyType_Object {
		constexpr auto BaseClass = 0x30; // UObject*
	}

	namespace n_UMaterialExpressionScalarParameter {
		constexpr auto DefaultValue = 0x58; // float
		constexpr auto bUseCustomPrimitiveData = 0x5c; // bool
		constexpr auto PrimitiveDataIndex = 0x5d; // char
	}

	namespace n_UNiagaraDataInterfaceArrayColor {
		constexpr auto ColorData = 0x50; // TArray<FLinearColor>
	}

	namespace n_ASceneCapture {
		constexpr auto MeshComp = 0x220; // UStaticMeshComponent*
		constexpr auto SceneComponent = 0x228; // USceneComponent*
	}

	namespace n_UTextureRenderTarget2DArray {
		constexpr auto SizeX = 0x180; // int32_t
		constexpr auto SizeY = 0x184; // int32_t
		constexpr auto Slices = 0x188; // int32_t
		constexpr auto ClearColor = 0x18c; // FLinearColor
		constexpr auto OverrideFormat = 0x19c; // EPixelFormat
		constexpr auto bHDR = 0x19d; // char : 1
		constexpr auto bForceLinearGamma = 0x19d; // char : 1
	}

	namespace n_UDatasmithStaticMeshGLTFImportData {
		constexpr auto SourceMeshName = 0x28; // FString
	}

	namespace n_UGizmoWorldAxisSource {
		constexpr auto Origin = 0x30; // FVector
		constexpr auto AxisIndex = 0x3c; // int32_t
	}

	namespace n_UBoundsCopyComponent {
		constexpr auto BoundsSourceActor = 0xb0; // TSoftObjectPtr<AActor>
		constexpr auto bUseCollidingComponentsForSourceBounds = 0xd8; // bool
		constexpr auto bKeepOwnBoundsScale = 0xd9; // bool
		constexpr auto bUseCollidingComponentsForOwnBounds = 0xda; // bool
		constexpr auto PostTransform = 0xe0; // FTransform
		constexpr auto bCopyXBounds = 0x110; // bool
		constexpr auto bCopyYBounds = 0x111; // bool
		constexpr auto bCopyZBounds = 0x112; // bool
	}

	namespace n_ANavigationObjectBase {
		constexpr auto CapsuleComponent = 0x228; // UCapsuleComponent*
		constexpr auto GoodSprite = 0x230; // UBillboardComponent*
		constexpr auto BadSprite = 0x238; // UBillboardComponent*
		constexpr auto bIsPIEPlayerStart = 0x240; // char : 1
	}

	namespace n_ADatasmithSceneActor {
		constexpr auto Scene = 0x220; // UDatasmithScene*
		constexpr auto RelatedActors = 0x228; // TMap<FName, TSoftObjectPtr<AActor>>
	}

	namespace n_UDatasmithStaticMeshTemplate {
		constexpr auto SectionInfoMap = 0x30; // FDatasmithMeshSectionInfoMapTemplate
		constexpr auto LightMapCoordinateIndex = 0x80; // int32_t
		constexpr auto LightMapResolution = 0x84; // int32_t
		constexpr auto BuildSettings = 0x88; // TArray<FDatasmithMeshBuildSettingsTemplate>
		constexpr auto StaticMaterials = 0x98; // TArray<FDatasmithStaticMaterialTemplate>
	}

	namespace n_AWindDirectionalSource {
		constexpr auto Component = 0x220; // UWindDirectionalSourceComponent*
	}

	namespace n_UEnvQueryGenerator_PathGridOffset {
		constexpr auto PathToItem = 0x130; // FAIDataProviderBoolValue
		constexpr auto NavigationFilter = 0x168; // UNavigationQueryFilter*
		constexpr auto ScanRangeMultiplier = 0x170; // FAIDataProviderFloatValue
		constexpr auto OffsetSize = 0x1a8; // FAIDataProviderFloatValue
		constexpr auto RandomizeProjectionData = 0x1e0; // FAIDataProviderBoolValue
		constexpr auto ProjectDownRandomMultiplier = 0x218; // FAIDataProviderFloatValue
		constexpr auto ProjectUpRandomMultiplier = 0x250; // FAIDataProviderFloatValue
		constexpr auto ExtentXRandomMultiplier = 0x288; // FAIDataProviderFloatValue
	}

	namespace n_ACableActor {
		constexpr auto CableComponent = 0x220; // UCableComponent*
	}

	namespace n_APortalWarsLobbyPlayerController {
		constexpr auto LobbyMenuWidget = 0x6c8; // UPortalWarsLobbyWidget*
		constexpr auto LobbyMenuWidgetClass = 0x6d0; // UPortalWarsLobbyWidget*
	}

	namespace n_UUMGSequenceTickManager {
		constexpr auto WeakUserWidgets = 0x28; // TSet<TWeakObjectPtr<UUserWidget>>
		constexpr auto Linker = 0x78; // UMovieSceneEntitySystemLinker*
	}

	namespace n_USCS_Node {
		constexpr auto ComponentClass = 0x28; // UObject*
		constexpr auto ComponentTemplate = 0x30; // UActorComponent*
		constexpr auto CookedComponentInstancingData = 0x38; // FBlueprintCookedComponentInstancingData
		constexpr auto AttachToName = 0x80; // FName
		constexpr auto ParentComponentOrVariableName = 0x88; // FName
		constexpr auto ParentComponentOwnerClassName = 0x90; // FName
		constexpr auto bIsParentComponentNative = 0x98; // bool
		constexpr auto ChildNodes = 0xa0; // TArray<USCS_Node*>
		constexpr auto MetaDataArray = 0xb0; // TArray<FBPVariableMetaDataEntry>
		constexpr auto VariableGuid = 0xc0; // FGuid
		constexpr auto InternalVariableName = 0xd0; // FName
	}

	namespace n_UPortalWarsMessageDialogWidget {
		constexpr auto TitleText = 0x390; // UTextBlock*
		constexpr auto MessageText = 0x398; // UTextBlock*
	}

	namespace n_AController {
		constexpr auto PlayerState = 0x228; // APlayerState*
		constexpr auto OnInstigatedAnyDamage = 0x238; // FMulticastInlineDelegate
		constexpr auto StateName = 0x248; // FName
		constexpr auto Pawn = 0x250; // APawn*
		constexpr auto Character = 0x260; // ACharacter*
		constexpr auto TransformComponent = 0x268; // USceneComponent*
		constexpr auto ControlRotation = 0x288; // FRotator
		constexpr auto bAttachToPawn = 0x294; // char : 1
	}

	namespace n_URequestPermissionsAsync {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_UPortalWarsContaminationHUDOverlayWidget {
		constexpr auto NotificationIcon = 0x278; // UImage*
		constexpr auto NotificationText = 0x280; // UTextBlock*
		constexpr auto NotificationFadeAnimation = 0x290; // UWidgetAnimation*
	}

	namespace n_UEnvQueryGenerator_ActorsOfClass {
		constexpr auto SearchedActorClass = 0x50; // AActor*
		constexpr auto GenerateOnlyActorsInRadius = 0x58; // FAIDataProviderBoolValue
		constexpr auto SearchRadius = 0x90; // FAIDataProviderFloatValue
		constexpr auto SearchCenter = 0xc8; // UEnvQueryContext*
	}

	namespace n_UMRMeshComponent {
		constexpr auto Material = 0x460; // UMaterialInterface*
		constexpr auto WireframeMaterial = 0x468; // UMaterialInterface*
		constexpr auto bCreateMeshProxySections = 0x470; // bool
		constexpr auto bUpdateNavMeshOnMeshUpdate = 0x471; // bool
		constexpr auto bNeverCreateCollisionMesh = 0x472; // bool
		constexpr auto CachedBodySetup = 0x478; // UBodySetup*
		constexpr auto BodySetups = 0x480; // TArray<UBodySetup*>
	}

	namespace n_UFieldSystemMetaDataIteration {
		constexpr auto Iterations = 0xb0; // int32_t
	}

	namespace n_UArrowComponent {
		constexpr auto ArrowColor = 0x450; // FColor
		constexpr auto ArrowSize = 0x454; // float
		constexpr auto ArrowLength = 0x458; // float
		constexpr auto ScreenSize = 0x45c; // float
		constexpr auto bIsScreenSizeScaled = 0x460; // char : 1
		constexpr auto bTreatAsASprite = 0x460; // char : 1
	}

	namespace n_USlider {
		constexpr auto Value = 0x108; // float
		constexpr auto ValueDelegate = 0x10c; // FDelegate
		constexpr auto MinValue = 0x11c; // float
		constexpr auto MaxValue = 0x120; // float
		constexpr auto WidgetStyle = 0x128; // FSliderStyle
		constexpr auto Orientation = 0x468; // EOrientation
		constexpr auto SliderBarColor = 0x46c; // FLinearColor
		constexpr auto SliderHandleColor = 0x47c; // FLinearColor
		constexpr auto IndentHandle = 0x48c; // bool
		constexpr auto locked = 0x48d; // bool
		constexpr auto MouseUsesStep = 0x48e; // bool
		constexpr auto RequiresControllerLock = 0x48f; // bool
		constexpr auto StepSize = 0x490; // float
		constexpr auto IsFocusable = 0x494; // bool
		constexpr auto OnMouseCaptureBegin = 0x498; // FMulticastInlineDelegate
		constexpr auto OnMouseCaptureEnd = 0x4a8; // FMulticastInlineDelegate
		constexpr auto OnControllerCaptureBegin = 0x4b8; // FMulticastInlineDelegate
		constexpr auto OnControllerCaptureEnd = 0x4c8; // FMulticastInlineDelegate
		constexpr auto OnValueChanged = 0x4d8; // FMulticastInlineDelegate
	}

	namespace n_UAkItemBoolProperties {
		constexpr auto OnSelectionChanged = 0x108; // FMulticastInlineDelegate
		constexpr auto OnPropertyDragged = 0x118; // FMulticastInlineDelegate
	}

	namespace n_UFindSessionsCallbackProxy {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_UBodySetup {
		constexpr auto AggGeom = 0x48; // FKAggregateGeom
		constexpr auto bAlwaysFullAnimWeight = 0xa0; // char : 1
		constexpr auto bConsiderForBounds = 0xa0; // char : 1
		constexpr auto bMeshCollideAll = 0xa0; // char : 1
		constexpr auto bDoubleSidedGeometry = 0xa0; // char : 1
		constexpr auto bGenerateNonMirroredCollision = 0xa0; // char : 1
		constexpr auto bSharedCookedData = 0xa0; // char : 1
		constexpr auto bGenerateMirroredCollision = 0xa0; // char : 1
		constexpr auto bSupportUVsAndFaceRemap = 0xa0; // char : 1
		constexpr auto PhysMaterial = 0xa8; // UPhysicalMaterial*
		constexpr auto WalkableSlopeOverride = 0xb0; // FWalkableSlopeOverride
		constexpr auto DefaultInstance = 0x128; // FBodyInstance
		constexpr auto BuildScale3D = 0x288; // FVector
	}

	namespace n_UPortalWarsIndicatorWidget {
		constexpr auto UpdateInterval = 0x264; // float
		constexpr auto EdgePercentage = 0x2a8; // float
		constexpr auto OpacityAtCenter = 0x2ac; // float
		constexpr auto IndicatorSwitcher = 0x2b0; // UWidgetSwitcher*
	}

	namespace n_UAkWindowsInitializationSettings {
		constexpr auto CommonSettings = 0x28; // FAkCommonInitializationSettingsWithSampleRate
		constexpr auto CommunicationSettings = 0x98; // FAkCommunicationSettingsWithSystemInitialization
		constexpr auto AdvancedSettings = 0xc0; // FAkWindowsAdvancedInitializationSettings
	}

	namespace n_UEditableText {
		constexpr auto Text = 0x108; // FText
		constexpr auto TextDelegate = 0x120; // FDelegate
		constexpr auto HintText = 0x130; // FText
		constexpr auto HintTextDelegate = 0x148; // FDelegate
		constexpr auto WidgetStyle = 0x158; // FEditableTextStyle
		constexpr auto Style = 0x378; // USlateWidgetStyleAsset*
		constexpr auto BackgroundImageSelected = 0x380; // USlateBrushAsset*
		constexpr auto BackgroundImageComposing = 0x388; // USlateBrushAsset*
		constexpr auto CaretImage = 0x390; // USlateBrushAsset*
		constexpr auto Font = 0x398; // FSlateFontInfo
		constexpr auto ColorAndOpacity = 0x3f0; // FSlateColor
		constexpr auto IsReadOnly = 0x418; // bool
		constexpr auto IsPassword = 0x419; // bool
		constexpr auto MinimumDesiredWidth = 0x41c; // float
		constexpr auto IsCaretMovedWhenGainFocus = 0x420; // bool
		constexpr auto SelectAllTextWhenFocused = 0x421; // bool
		constexpr auto RevertTextOnEscape = 0x422; // bool
		constexpr auto ClearKeyboardFocusOnCommit = 0x423; // bool
		constexpr auto SelectAllTextOnCommit = 0x424; // bool
		constexpr auto AllowContextMenu = 0x425; // bool
		constexpr auto KeyboardType = 0x426; // EVirtualKeyboardType
		constexpr auto VirtualKeyboardOptions = 0x427; // FVirtualKeyboardOptions
		constexpr auto VirtualKeyboardTrigger = 0x428; // EVirtualKeyboardTrigger
		constexpr auto VirtualKeyboardDismissAction = 0x429; // EVirtualKeyboardDismissAction
		constexpr auto Justification = 0x42a; // ETextJustify
		constexpr auto ShapedTextOptions = 0x42b; // FShapedTextOptions
		constexpr auto OnTextChanged = 0x430; // FMulticastInlineDelegate
		constexpr auto OnTextCommitted = 0x440; // FMulticastInlineDelegate
	}

	namespace n_UMaterialExpressionArccosineFast {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UMediaPlaylist {
		constexpr auto Items = 0x28; // TArray<UMediaSource*>
	}

	namespace n_UInterpTrackMoveAxis {
		constexpr auto MoveAxis = 0x90; // EInterpMoveAxis
		constexpr auto LookupTrack = 0x98; // FInterpLookupTrack
	}

	namespace n_UDatasmithDecalComponentTemplate {
		constexpr auto SortOrder = 0x30; // int32_t
		constexpr auto DecalSize = 0x34; // FVector
		constexpr auto Material = 0x40; // UMaterialInterface*
	}

	namespace n_UPortalWarsPlayWidget {
		constexpr auto SelectionWidget = 0x338; // UPortalWarsMenuWidget*
		constexpr auto ChallengePanel = 0x340; // UPortalWarsChallengePanelWidget*
		constexpr auto PartyWidget = 0x348; // UPortalWarsPartyWidget*
		constexpr auto PlaySwitcher = 0x350; // UWidgetSwitcher*
		constexpr auto PlayButton = 0x358; // UPortalWarsButtonWidget*
		constexpr auto CancelButton = 0x360; // UPortalWarsButtonWidget*
		constexpr auto RewardCenterButton = 0x368; // UPortalWarsButtonWidget*
		constexpr auto GameInstanceRef = 0x370; // UPortalWarsGameInstance*
	}

	namespace n_UBookMark2D {
		constexpr auto Zoom2D = 0x28; // float
		constexpr auto Location = 0x2c; // FIntPoint
	}

	namespace n_USubsurfaceProfile {
		constexpr auto Settings = 0x28; // FSubsurfaceProfileStruct
	}

	namespace n_UUniformVector {
		constexpr auto Magnitude = 0xb0; // float
		constexpr auto Direction = 0xb4; // FVector
	}

	namespace n_UMaterialExpressionFunctionOutput {
		constexpr auto OutputName = 0x40; // FName
		constexpr auto Description = 0x48; // FString
		constexpr auto SortPriority = 0x58; // int32_t
		constexpr auto A = 0x5c; // FExpressionInput
		constexpr auto bLastPreviewed = 0x70; // char : 1
		constexpr auto ID = 0x74; // FGuid
	}

	namespace n_UGridPanel {
		constexpr auto ColumnFill = 0x120; // TArray<float>
		constexpr auto RowFill = 0x130; // TArray<float>
	}

	namespace n_UCurveLinearColor {
		constexpr auto FloatCurves = 0x30; // FRichCurve [0x4]
		constexpr auto AdjustHue = 0x230; // float
		constexpr auto AdjustSaturation = 0x234; // float
		constexpr auto AdjustBrightness = 0x238; // float
		constexpr auto AdjustBrightnessCurve = 0x23c; // float
		constexpr auto AdjustVibrance = 0x240; // float
		constexpr auto AdjustMinAlpha = 0x244; // float
		constexpr auto AdjustMaxAlpha = 0x248; // float
	}

	namespace n_APortalWarsVIPPlayerState {
		constexpr auto VIPInfo = 0xac9; // FVIPInfo
	}

	namespace n_UClothPhysicalMeshDataBase_Legacy {
		constexpr auto Vertices = 0x28; // TArray<FVector>
		constexpr auto Normals = 0x38; // TArray<FVector>
		constexpr auto Indices = 0x48; // TArray<uint32_t>
		constexpr auto InverseMasses = 0x58; // TArray<float>
		constexpr auto BoneData = 0x68; // TArray<FClothVertBoneData>
		constexpr auto NumFixedVerts = 0x78; // int32_t
		constexpr auto MaxBoneWeights = 0x7c; // int32_t
		constexpr auto SelfCollisionIndices = 0x80; // TArray<uint32_t>
	}

	namespace n_UAREnvironmentProbeComponent {
		constexpr auto ReplicatedPayload = 0x280; // FAREnvironmentProbeUpdatePayload
	}

	namespace n_UInterpGroupInst {
		constexpr auto Group = 0x28; // UInterpGroup*
		constexpr auto GroupActor = 0x30; // AActor*
		constexpr auto TrackInst = 0x38; // TArray<UInterpTrackInst*>
	}

	namespace n_UInterpTrackInstEvent {
		constexpr auto LastUpdatePosition = 0x28; // float
	}

	namespace n_UClothingSimulationInteractor {
		constexpr auto ClothingInteractors = 0x28; // TMap<FName, UClothingInteractor*>
	}

	namespace n_UPortalWarsIntroVideoWidget {
		constexpr auto MediaPlayer = 0x390; // UMediaPlayer*
		constexpr auto MediaSource = 0x398; // UMediaSource*
	}

	namespace n_UEnvQueryNode {
		constexpr auto VerNum = 0x28; // int32_t
	}

	namespace n_UWidgetBlueprintGeneratedClass {
		constexpr auto WidgetTree = 0x328; // UWidgetTree*
		constexpr auto bClassRequiresNativeTick = 0x330; // char : 1
		constexpr auto Bindings = 0x338; // TArray<FDelegateRuntimeBinding>
		constexpr auto Animations = 0x348; // TArray<UWidgetAnimation*>
		constexpr auto NamedSlots = 0x358; // TArray<FName>
	}

	namespace n_UMaterialExpressionTime {
		constexpr auto bIgnorePause = 0x40; // char : 1
		constexpr auto bOverride_Period = 0x40; // char : 1
		constexpr auto Period = 0x44; // float
	}

	namespace n_UPlanePositionGizmo {
		constexpr auto AxisSource = 0x48; // TScriptInterface<IGizmoAxisSource>
		constexpr auto ParameterSource = 0x58; // TScriptInterface<IGizmoVec2ParameterSource>
		constexpr auto HitTarget = 0x68; // TScriptInterface<IGizmoClickTarget>
		constexpr auto StateTarget = 0x78; // TScriptInterface<IGizmoStateTarget>
		constexpr auto bEnableSignedAxis = 0x88; // bool
		constexpr auto bFlipX = 0x89; // bool
		constexpr auto bFlipY = 0x8a; // bool
		constexpr auto bInInteraction = 0x8b; // bool
		constexpr auto InteractionOrigin = 0x8c; // FVector
		constexpr auto InteractionNormal = 0x98; // FVector
		constexpr auto InteractionAxisX = 0xa4; // FVector
		constexpr auto InteractionAxisY = 0xb0; // FVector
		constexpr auto InteractionStartPoint = 0xbc; // FVector
		constexpr auto InteractionCurPoint = 0xc8; // FVector
		constexpr auto InteractionStartParameter = 0xd4; // FVector2D
		constexpr auto InteractionCurParameter = 0xdc; // FVector2D
		constexpr auto ParameterSigns = 0xe4; // FVector2D
	}

	namespace n_UMeshSimplificationSettings {
		constexpr auto MeshReductionModuleName = 0x38; // FName
	}

	namespace n_UAnimSequenceLevelSequenceLink {
		constexpr auto SkelTrackGuid = 0x28; // FGuid
		constexpr auto PathToLevelSequence = 0x38; // FSoftObjectPath
	}

	namespace n_UTimecodeProvider {
		constexpr auto FrameDelay = 0x28; // float
	}

	namespace n_UParticleModuleAttractorLine {
		constexpr auto EndPoint0 = 0x30; // FVector
		constexpr auto EndPoint1 = 0x3c; // FVector
		constexpr auto Range = 0x48; // FRawDistributionFloat
		constexpr auto Strength = 0x78; // FRawDistributionFloat
	}

	namespace n_UPortalWarsWaitingAreaHUDWidget {
		constexpr auto SessionQueryTitleText = 0x260; // UTextBlock*
		constexpr auto WaitingAreaPanel = 0x268; // UWidget*
		constexpr auto GameInstanceRef = 0x270; // UPortalWarsGameInstance*
	}

	namespace n_AExponentialHeightFog {
		constexpr auto Component = 0x220; // UExponentialHeightFogComponent*
		constexpr auto bEnabled = 0x228; // char : 1
	}

	namespace n_APortalWarsLobbyGameState {
		constexpr auto PrevGameData = 0x6e8; // FMatchSummaryInfo
		constexpr auto TVScreen = 0x838; // AStaticMeshActor*
	}

	namespace n_UBTService_FindPickup {
		constexpr auto NearPickupRadius = 0x70; // float
		constexpr auto NeedWeaponPickupRadius = 0x74; // float
		constexpr auto SubClassRestriction = 0x78; // APortalWarsPickup*
		constexpr auto MinDifficulty = 0x80; // float
	}

	namespace n_UMaterialExpressionSamplePhysicsVectorField {
		constexpr auto WorldPosition = 0x40; // FExpressionInput
		constexpr auto FieldTarget = 0x54; // EFieldVectorType
	}

	namespace n_UPropertyValue {
		constexpr auto Properties = 0x88; // TArray<TFieldPath<FProperty>>
		constexpr auto PropertyIndices = 0x98; // TArray<int32_t>
		constexpr auto CapturedPropSegments = 0xa8; // TArray<FCapturedPropSegment>
		constexpr auto FullDisplayString = 0xb8; // FString
		constexpr auto PropertySetterName = 0xc8; // FName
		constexpr auto PropertySetterParameterDefaults = 0xd0; // TMap<FString, FString>
		constexpr auto bHasRecordedData = 0x120; // bool
		constexpr auto LeafPropertyClass = 0x128; // UObject*
		constexpr auto ValueBytes = 0x138; // TArray<char>
		constexpr auto PropCategory = 0x148; // EPropertyValueCategory
	}

	namespace n_USourceEffectBitCrusherPreset {
		constexpr auto Settings = 0xc0; // FSourceEffectBitCrusherSettings
	}

	namespace n_UParticleModuleSubUV {
		constexpr auto Animation = 0x30; // USubUVAnimation*
		constexpr auto SubImageIndex = 0x38; // FRawDistributionFloat
		constexpr auto bUseRealTime = 0x68; // char : 1
	}

	namespace n_UNiagaraDataInterfaceNeighborGrid3D {
		constexpr auto MaxNeighborsPerCell = 0x100; // uint32_t
	}

	namespace n_UParticleModuleVelocityBase {
		constexpr auto bInWorldSpace = 0x30; // char : 1
		constexpr auto bApplyOwnerScale = 0x30; // char : 1
	}

	namespace n_UPortalWarsPickupZoneIndicator {
		constexpr auto TimeText = 0x2d0; // UTextBlock*
	}

	namespace n_USlateAccessibleWidgetData {
		constexpr auto bCanChildrenBeAccessible = 0x28; // bool
		constexpr auto AccessibleBehavior = 0x29; // ESlateAccessibleBehavior
		constexpr auto AccessibleSummaryBehavior = 0x2a; // ESlateAccessibleBehavior
		constexpr auto AccessibleText = 0x30; // FText
		constexpr auto AccessibleTextDelegate = 0x48; // FDelegate
		constexpr auto AccessibleSummaryText = 0x58; // FText
		constexpr auto AccessibleSummaryTextDelegate = 0x70; // FDelegate
	}

	namespace n_UPortalWarsRadioGroupWidget {
		constexpr auto DefaultOptions = 0x370; // TArray<FText>
		constexpr auto DefaultIndex = 0x380; // int32_t
		constexpr auto RadioGroupPanel = 0x388; // UPanelWidget*
		constexpr auto RadioButtonWidgetClass = 0x390; // UPortalWarsEntryWidget*
	}

	namespace n_UEditableGameplayTagQuery {
		constexpr auto UserDescription = 0x28; // FString
		constexpr auto RootExpression = 0x48; // UEditableGameplayTagQueryExpression*
		constexpr auto TagQueryExportText_Helper = 0x50; // FGameplayTagQuery
	}

	namespace n_APortalWarsPlayerController {
		constexpr auto leftPortal = 0x608; // APortal*
		constexpr auto rightPortal = 0x610; // APortal*
		constexpr auto leftPortalSceneCapture = 0x618; // APortalSceneCapture2D*
		constexpr auto rightPortalSceneCapture = 0x620; // APortalSceneCapture2D*
		constexpr auto portalSceneCaptureClass = 0x628; // APortalSceneCapture2D*
		constexpr auto leftPortalRenderTarget = 0x630; // UTextureRenderTarget2D*
		constexpr auto rightPortalRenderTarget = 0x638; // UTextureRenderTarget2D*
		constexpr auto PauseMenu = 0x648; // UPortalWarsDialogWidget*
		constexpr auto PauseMenuWidgetClass = 0x650; // UPortalWarsPauseMenuWidget*
		constexpr auto PredictionFudgeFactor = 0x658; // float
		constexpr auto MaxPredictionPing = 0x65c; // float
		constexpr auto MaxMeleePredictionPing = 0x660; // float
		constexpr auto actorOriginAndExtentList = 0x668; // TArray<FActorOriginAndExtent>
		constexpr auto Killcam = 0x6a8; // UPortalWarsKillcam*
		constexpr auto OutlinePPMaterial = 0x6c0; // UMaterial*
	}

	namespace n_UPortalWarsPriceWidget {
		constexpr auto PricePanel = 0x260; // UPanelWidget*
		constexpr auto PriceEntryWidgetClass = 0x268; // UPortalWarsPriceEntryWidget*
		constexpr auto DiscountRoot = 0x270; // UWidget*
		constexpr auto DiscountText = 0x278; // URichTextBlock*
		constexpr auto bShowDiscounts = 0x280; // bool
	}

	namespace n_UPortalWarsTeamSelectWidget {
		constexpr auto Value = 0x3a0; // int32_t
		constexpr auto OnTeamChangedDelegate = 0x3a8; // FMulticastInlineDelegate
	}

	namespace n_UMovieSceneCameraCutSection {
		constexpr auto bLockPreviousCamera = 0xf0; // bool
		constexpr auto CameraGuid = 0xf4; // FGuid
		constexpr auto CameraBindingID = 0x104; // FMovieSceneObjectBindingID
		constexpr auto InitialCameraCutTransform = 0x120; // FTransform
		constexpr auto bHasInitialCameraCutTransform = 0x150; // bool
	}

	namespace n_UMaterialExpressionNamedRerouteUsage {
		constexpr auto Declaration = 0x40; // UMaterialExpressionNamedRerouteDeclaration*
		constexpr auto DeclarationGuid = 0x48; // FGuid
	}

	namespace n_UComboButtonWidgetStyle {
		constexpr auto ComboButtonStyle = 0x30; // FComboButtonStyle
	}

	namespace n_ULightPropagationVolumeBlendable {
		constexpr auto Settings = 0x30; // FLightPropagationVolumeSettings
		constexpr auto BlendWeight = 0x70; // float
	}

	namespace n_UPortalWarsAddFriendsWidget {
		constexpr auto IncomingFriendRequestPanel = 0x338; // UPanelWidget*
		constexpr auto OutgoingFriendRequestPanel = 0x340; // UPanelWidget*
		constexpr auto ItemsScrollBox = 0x348; // UScrollBox*
		constexpr auto FriendRequestEntryWidgetClass = 0x350; // UPortalWarsFriendRequestEntry*
		constexpr auto FriendRequestDialogWidgetClass = 0x358; // UPortalWarsFriendRequestDialog*
		constexpr auto FriendCodeTextInput = 0x360; // UPortalWarsTextInputWidget*
		constexpr auto FriendCodeText = 0x368; // UTextBlock*
		constexpr auto SendRequestButton = 0x370; // UPortalWarsButtonWidget*
		constexpr auto CopyButton = 0x378; // UPortalWarsButtonWidget*
		constexpr auto ErrorText = 0x380; // UTextBlock*
	}

	namespace n_UMaterialExpressionCeil {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UProxyLODMeshSimplificationSettings {
		constexpr auto ProxyLODMeshReductionModuleName = 0x38; // FName
	}

	namespace n_UGameplayTagsDeveloperSettings {
		constexpr auto DeveloperConfigName = 0x38; // FString
		constexpr auto FavoriteTagSource = 0x48; // FName
	}

	namespace n_UPortalWarsRankLeaderboardEntry {
		constexpr auto RankXPText = 0xbd8; // UTextBlock*
	}

	namespace n_UDialogueVoice {
		constexpr auto Gender = 0x28; // EGrammaticalGender
		constexpr auto Plurality = 0x29; // EGrammaticalNumber
		constexpr auto LocalizationGUID = 0x2c; // FGuid
	}

	namespace n_UPortalWarsNewsFeedEntryWidget {
		constexpr auto DescriptionText = 0x420; // UTextBlock*
		constexpr auto NewsImage = 0x428; // UImage*
	}

	namespace n_UPortalWarsLobbySelectorButtonWidget {
		constexpr auto DisplayImage = 0x428; // UImage*
		constexpr auto SelectedSwitcher = 0x430; // UWidgetSwitcher*
		constexpr auto DisplayTextAnimation = 0x438; // UWidgetAnimation*
		constexpr auto Type = 0x440; // ELobbySelectorType
		constexpr auto BackgroundImage = 0x448; // UTexture2D*
	}

	namespace n_UAnimSharingAdditiveInstance {
		constexpr auto BaseComponent = 0x2b8; // TWeakObjectPtr<USkeletalMeshComponent>
		constexpr auto AdditiveAnimation = 0x2c0; // TWeakObjectPtr<UAnimSequence>
		constexpr auto Alpha = 0x2c8; // float
		constexpr auto bStateBool = 0x2cc; // bool
	}

	namespace n_UDatasmithActorTemplate {
		constexpr auto Layers = 0x30; // TSet<FName>
		constexpr auto Tags = 0x80; // TSet<FName>
	}

	namespace n_UPanelSlot {
		constexpr auto Parent = 0x28; // UPanelWidget*
		constexpr auto Content = 0x30; // UWidget*
	}

	namespace n_UVolumetricCloudComponent {
		constexpr auto LayerBottomAltitude = 0x1f8; // float
		constexpr auto LayerHeight = 0x1fc; // float
		constexpr auto TracingStartMaxDistance = 0x200; // float
		constexpr auto TracingMaxDistance = 0x204; // float
		constexpr auto PlanetRadius = 0x208; // float
		constexpr auto GroundAlbedo = 0x20c; // FColor
		constexpr auto Material = 0x210; // UMaterialInterface*
		constexpr auto bUsePerSampleAtmosphericLightTransmittance = 0x218; // char : 1
		constexpr auto SkyLightCloudBottomOcclusion = 0x21c; // float
		constexpr auto ViewSampleCountScale = 0x220; // float
		constexpr auto ReflectionSampleCountScale = 0x224; // float
		constexpr auto ShadowViewSampleCountScale = 0x228; // float
		constexpr auto ShadowReflectionSampleCountScale = 0x22c; // float
		constexpr auto ShadowTracingDistance = 0x230; // float
		constexpr auto StopTracingTransmittanceThreshold = 0x234; // float
	}

	namespace n_UCompressedImageSequenceProtocol {
		constexpr auto CompressionQuality = 0xd8; // int32_t
	}

	namespace n_UFieldSystemMetaDataFilter {
		constexpr auto FilterType = 0xb0; // EFieldFilterType
	}

	namespace n_UAutomationTestSettings {
		constexpr auto EngineTestModules = 0x28; // TArray<FString>
		constexpr auto EditorTestModules = 0x38; // TArray<FString>
		constexpr auto AutomationTestmap = 0x48; // FSoftObjectPath
		constexpr auto EditorPerformanceTestMaps = 0x60; // TArray<FEditorMapPerformanceTestDefinition>
		constexpr auto AssetsToOpen = 0x70; // TArray<FSoftObjectPath>
		constexpr auto MapsToPIETest = 0x80; // TArray<FString>
		constexpr auto BuildPromotionTest = 0x90; // FBuildPromotionTestSettings
		constexpr auto MaterialEditorPromotionTest = 0x280; // FMaterialEditorPromotionSettings
		constexpr auto ParticleEditorPromotionTest = 0x2b0; // FParticleEditorPromotionSettings
		constexpr auto BlueprintEditorPromotionTest = 0x2c0; // FBlueprintEditorPromotionSettings
		constexpr auto TestLevelFolders = 0x2f0; // TArray<FString>
		constexpr auto ExternalTools = 0x300; // TArray<FExternalToolDefinition>
		constexpr auto ImportExportTestDefinitions = 0x310; // TArray<FEditorImportExportTestDefinition>
		constexpr auto LaunchOnSettings = 0x320; // TArray<FLaunchOnTestSettings>
		constexpr auto DefaultScreenshotResolution = 0x330; // FIntPoint
		constexpr auto PIETestDuration = 0x338; // float
	}

	namespace n_UAIPerceptionStimuliSourceComponent {
		constexpr auto bAutoRegisterAsSource = 0xb0; // char : 1
		constexpr auto RegisterAsSourceForSenses = 0xb8; // TArray<UAISense*>
	}

	namespace n_UMaterialExpressionFloor {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UPortalWarsLobbyWidget {
		constexpr auto PrevGameStatsButton = 0x2a8; // UPortalWarsButtonWidget*
		constexpr auto PostGameStatsWidgetClass = 0x2b0; // UPortalWarsPostGameStatsWidget*
		constexpr auto EmoteButton = 0x2b8; // UPortalWarsButtonWidget*
		constexpr auto SwitchWeaponButton = 0x2c0; // UPortalWarsButtonWidget*
		constexpr auto LobbyChat = 0x2c8; // UPortalWarsChatWidget*
		constexpr auto PlayersPanel = 0x2e0; // UPanelWidget*
		constexpr auto LobbyPlayerWidgetClass = 0x2e8; // UPortalWarsLobbyPlayerEntryWidget*
		constexpr auto SaveReplayButton = 0x2f0; // UPortalWarsButtonWidget*
	}

	namespace n_UMaterialExpressionDepthFade {
		constexpr auto InOpacity = 0x40; // FExpressionInput
		constexpr auto FadeDistance = 0x54; // FExpressionInput
		constexpr auto OpacityDefault = 0x68; // float
		constexpr auto FadeDistanceDefault = 0x6c; // float
	}

	namespace n_UPortalWarsLoginMenuWidget {
		constexpr auto ConnectText = 0x2b8; // UTextBlock*
		constexpr auto ErrorText = 0x2c0; // UTextBlock*
		constexpr auto ErrorTitleText = 0x2c8; // UTextBlock*
		constexpr auto VersionText = 0x2d0; // UTextBlock*
		constexpr auto StartButton = 0x2d8; // UPortalWarsButtonWidget*
		constexpr auto RetryButton = 0x2e0; // UPortalWarsButtonWidget*
		constexpr auto QuitButton = 0x2e8; // UPortalWarsButtonWidget*
		constexpr auto RetrySwitcher = 0x2f0; // UWidgetSwitcher*
		constexpr auto LoginSwitcher = 0x308; // UWidgetSwitcher*
	}

	namespace n_USubmixEffectFlexiverbPreset {
		constexpr auto Settings = 0xa0; // FSubmixEffectFlexiverbSettings
	}

	namespace n_UInterpTrackFloatMaterialParam {
		constexpr auto TargetMaterials = 0x90; // TArray<UMaterialInterface*>
		constexpr auto ParamName = 0xa0; // FName
	}

	namespace n_UAISenseConfig_Hearing {
		constexpr auto Implementation = 0x48; // UAISense_Hearing*
		constexpr auto HearingRange = 0x50; // float
		constexpr auto LoSHearingRange = 0x54; // float
		constexpr auto bUseLoSHearing = 0x58; // char : 1
		constexpr auto DetectionByAffiliation = 0x5c; // FAISenseAffiliationFilter
	}

	namespace n_UNavigationDataChunk {
		constexpr auto NavigationDataName = 0x28; // FName
	}

	namespace n_UNiagaraDataInterfaceStaticMesh {
		constexpr auto SourceMode = 0x38; // ENDIStaticMesh_SourceMode
		constexpr auto DefaultMesh = 0x40; // UStaticMesh*
		constexpr auto Source = 0x48; // AActor*
		constexpr auto SourceComponent = 0x50; // UStaticMeshComponent*
		constexpr auto SectionFilter = 0x58; // FNDIStaticMeshSectionFilter
		constexpr auto bUsePhysicsBodyVelocity = 0x68; // bool
		constexpr auto FilteredSockets = 0x70; // TArray<FName>
	}

	namespace n_UScrollBoxWidgetStyle {
		constexpr auto ScrollBoxStyle = 0x30; // FScrollBoxStyle
	}

	namespace n_UMovieSceneStringSection {
		constexpr auto StringCurve = 0xe8; // FMovieSceneStringChannel
	}

	namespace n_UPortalWarsComboBoxString {
		constexpr auto PressedEvent = 0xe00; // UAkAudioEvent*
		constexpr auto SelectionChangedEvent = 0xe08; // UAkAudioEvent*
	}

	namespace n_UPortalWarsUISettingsWidget {
		constexpr auto FPS = 0x358; // UPortalWarsCheckBoxWidget*
		constexpr auto GPU = 0x360; // UPortalWarsCheckBoxWidget*
		constexpr auto Ping = 0x368; // UPortalWarsCheckBoxWidget*
		constexpr auto NetInfo = 0x370; // UPortalWarsCheckBoxWidget*
		constexpr auto Subtitles = 0x378; // UPortalWarsCheckBoxWidget*
		constexpr auto DamageNumbers = 0x380; // UPortalWarsCheckBoxWidget*
		constexpr auto LowAmmo = 0x388; // UPortalWarsCheckBoxWidget*
		constexpr auto CrosshairColor = 0x390; // UPortalWarsColorPickerWidget*
		constexpr auto EnemyCrosshairColor = 0x398; // UPortalWarsColorPickerWidget*
		constexpr auto CrosshairPanel = 0x3a0; // UPanelWidget*
		constexpr auto SprintCrosshair = 0x3a8; // UPortalWarsCheckBoxWidget*
	}

	namespace n_UMaterialExpressionSkyAtmosphereAerialPerspective {
		constexpr auto WorldPosition = 0x40; // FExpressionInput
	}

	namespace n_UNavigationSystemModuleConfig {
		constexpr auto bStrictlyStatic = 0x50; // char : 1
		constexpr auto bCreateOnClient = 0x50; // char : 1
		constexpr auto bAutoSpawnMissingNavData = 0x50; // char : 1
		constexpr auto bSpawnNavDataInNavBoundsLevel = 0x50; // char : 1
	}

	namespace n_UVariant {
		constexpr auto Dependencies = 0x28; // TArray<FVariantDependency>
		constexpr auto DisplayText = 0x38; // FText
		constexpr auto ObjectBindings = 0x68; // TArray<UVariantObjectBinding*>
		constexpr auto Thumbnail = 0x78; // UTexture2D*
	}

	namespace n_UPortalWarsVIPHUDOverlayWidget {
		constexpr auto TimeBeforeFading = 0x260; // float
		constexpr auto SpectatorShowPopupMaxTimeAlive = 0x264; // float
		constexpr auto FadeOutAnimation = 0x268; // UWidgetAnimation*
		constexpr auto OvertimeSwitcher = 0x270; // UWidgetSwitcher*
		constexpr auto NoticeScaleBox = 0x278; // UScaleBox*
		constexpr auto BannerScaleBox = 0x280; // UScaleBox*
		constexpr auto RootCanvas = 0x288; // UCanvasPanel*
	}

	namespace n_UPortalWarsGoalIndicatorWidget {
		constexpr auto Pointer = 0x2b8; // UWidget*
		constexpr auto StandardOffset = 0x2c0; // FVector
		constexpr auto DummyPlayerOffset = 0x2cc; // FVector
		constexpr auto PortalWallOffset = 0x2d8; // FVector
	}

	namespace n_UPortalWarsTakedownVIPPlayerStatusWidget {
		constexpr auto VIPImage = 0x2a8; // UImage*
	}

	namespace n_ULevelSequenceProjectSettings {
		constexpr auto bDefaultLockEngineToDisplayRate = 0x38; // bool
		constexpr auto DefaultDisplayRate = 0x40; // FString
		constexpr auto DefaultTickResolution = 0x50; // FString
		constexpr auto DefaultClockSource = 0x60; // EUpdateClockSource
	}

	namespace n_UCheckBoxStyleAsset {
		constexpr auto CheckBoxStyle = 0x28; // FCheckBoxStyle
	}

	namespace n_UPacketHandlerProfileConfig {
		constexpr auto Components = 0x28; // TArray<FString>
	}

	namespace n_UNiagaraDataInterfaceVectorCurve {
		constexpr auto XCurve = 0x70; // FRichCurve
		constexpr auto YCurve = 0xf0; // FRichCurve
		constexpr auto ZCurve = 0x170; // FRichCurve
	}

	namespace n_UPortalWarsLineupAnimInstance {
		constexpr auto Character = 0x2b8; // APortalWarsLineUpCharacter*
		constexpr auto bIsPlayingEmote = 0x2c0; // bool
		constexpr auto EmoteAnimSequence = 0x2c8; // UAnimSequence*
	}

	namespace n_UMaterialExpressionRotateAboutAxis {
		constexpr auto NormalizedRotationAxis = 0x40; // FExpressionInput
		constexpr auto RotationAngle = 0x54; // FExpressionInput
		constexpr auto PivotPoint = 0x68; // FExpressionInput
		constexpr auto Position = 0x7c; // FExpressionInput
		constexpr auto Period = 0x90; // float
	}

	namespace n_UMovieSceneMaterialParameterCollectionTrack {
		constexpr auto MPC = 0x90; // UMaterialParameterCollection*
	}

	namespace n_UFontFace {
		constexpr auto SourceFilename = 0x30; // FString
		constexpr auto Hinting = 0x40; // EFontHinting
		constexpr auto LoadingPolicy = 0x41; // EFontLoadingPolicy
		constexpr auto LayoutMethod = 0x42; // EFontLayoutMethod
	}

	namespace n_UPortalWarsKillFeedEntryWidget {
		constexpr auto KillerNameText = 0x268; // UTextBlock*
		constexpr auto VictimNameText = 0x270; // UTextBlock*
		constexpr auto IconSizeBox = 0x278; // USizeBox*
		constexpr auto KillIcon = 0x280; // UImage*
		constexpr auto HeadshotIcon = 0x288; // UImage*
		constexpr auto FriendlyTeamColor = 0x290; // FLinearColor
		constexpr auto EnemyTeamColor = 0x2a0; // FLinearColor
		constexpr auto OwnColor = 0x2b0; // FLinearColor
		constexpr auto DefaultColor = 0x2c0; // FLinearColor
		constexpr auto AlphaTeamColor = 0x2d0; // FLinearColor
		constexpr auto BravoTeamColor = 0x2e0; // FLinearColor
	}

	namespace n_UARObjectComponent {
		constexpr auto ReplicatedPayload = 0x280; // FARObjectUpdatePayload
	}

	namespace n_UAnimSequence {
		constexpr auto NumFrames = 0xa8; // int32_t
		constexpr auto TrackToSkeletonMapTable = 0xb0; // TArray<FTrackToSkeletonMap>
		constexpr auto BoneCompressionSettings = 0xd0; // UAnimBoneCompressionSettings*
		constexpr auto CurveCompressionSettings = 0xd8; // UAnimCurveCompressionSettings*
		constexpr auto AdditiveAnimType = 0x150; // EAdditiveAnimationType
		constexpr auto RefPoseType = 0x151; // EAdditiveBasePoseType
		constexpr auto RefPoseSeq = 0x158; // UAnimSequence*
		constexpr auto RefFrameIndex = 0x160; // int32_t
		constexpr auto RetargetSource = 0x164; // FName
		constexpr auto RetargetSourceAssetReferencePose = 0x170; // TArray<FTransform>
		constexpr auto Interpolation = 0x180; // EAnimInterpolationType
		constexpr auto bEnableRootMotion = 0x181; // bool
		constexpr auto RootMotionRootLock = 0x182; // ERootMotionRootLock
		constexpr auto bForceRootLock = 0x183; // bool
		constexpr auto bUseNormalizedRootMotionScale = 0x184; // bool
		constexpr auto bRootMotionSettingsCopiedFromMontage = 0x185; // bool
		constexpr auto AuthoredSyncMarkers = 0x188; // TArray<FAnimSyncMarker>
		constexpr auto BakedPerBoneCustomAttributeData = 0x1b0; // TArray<FBakedCustomAttributePerBoneData>
	}

	namespace n_UAnimSharingTransitionInstance {
		constexpr auto FromComponent = 0x2b8; // TWeakObjectPtr<USkeletalMeshComponent>
		constexpr auto ToComponent = 0x2c0; // TWeakObjectPtr<USkeletalMeshComponent>
		constexpr auto BlendTime = 0x2c8; // float
		constexpr auto bBlendBool = 0x2cc; // bool
	}

	namespace n_UUserDefinedImageCaptureProtocol {
		constexpr auto Format = 0xd8; // EDesiredImageFormat
		constexpr auto bEnableCompression = 0xd9; // bool
		constexpr auto CompressionQuality = 0xdc; // int32_t
	}

	namespace n_APortalWarsLineUpCharacter {
		constexpr auto PlayerState = 0x220; // APortalWarsPlayerState*
		constexpr auto PlayerInfo = 0x228; // FEndGamePlayerInfo
		constexpr auto EmoteSequence = 0x460; // UAnimSequence*
		constexpr auto PlayerEntryWidgetClass = 0x480; // UPortalWarsPlayerEntryWidget*
		constexpr auto CurrentWeaponType = 0x4a0; // ECustomizationType
		constexpr auto MinWeaponPosePlayRate = 0x4b0; // float
		constexpr auto MaxWeaponPosePlayRate = 0x4b4; // float
		constexpr auto SceneRoot = 0x4c0; // USceneComponent*
		constexpr auto Suit = 0x4c8; // USkeletalMeshComponent*
		constexpr auto Jetpack = 0x4d0; // USkeletalMeshComponent*
		constexpr auto PortalGun = 0x4d8; // UStaticMeshComponent*
		constexpr auto Name = 0x4e0; // UWidgetComponent*
		constexpr auto DefaultMaterial = 0x4e8; // UMaterialInstance*
		constexpr auto Weapon = 0x4f0; // UStaticMeshComponent*
	}

	namespace n_UDistributionFloatConstant {
		constexpr auto Constant = 0x38; // float
	}

	namespace n_UButtonSlot {
		constexpr auto Padding = 0x38; // FMargin
		constexpr auto HorizontalAlignment = 0x48; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x49; // EVerticalAlignment
	}

	namespace n_USoundNodeEnveloper {
		constexpr auto LoopStart = 0x48; // float
		constexpr auto LoopEnd = 0x4c; // float
		constexpr auto DurationAfterLoop = 0x50; // float
		constexpr auto LoopCount = 0x54; // int32_t
		constexpr auto bLoopIndefinitely = 0x58; // char : 1
		constexpr auto bLoop = 0x58; // char : 1
		constexpr auto VolumeInterpCurve = 0x60; // UDistributionFloatConstantCurve*
		constexpr auto PitchInterpCurve = 0x68; // UDistributionFloatConstantCurve*
		constexpr auto VolumeCurve = 0x70; // FRuntimeFloatCurve
		constexpr auto PitchCurve = 0xf8; // FRuntimeFloatCurve
		constexpr auto PitchMin = 0x180; // float
		constexpr auto PitchMax = 0x184; // float
		constexpr auto VolumeMin = 0x188; // float
		constexpr auto VolumeMax = 0x18c; // float
	}

	namespace n_UPortalWarsContaminationPlayerStatusWidget {
		constexpr auto SelfPlayerImage = 0x2a8; // UTexture2D*
		constexpr auto RedZombieImage = 0x2b0; // UTexture2D*
		constexpr auto BlueZombieImage = 0x2b8; // UTexture2D*
		constexpr auto SelfZombieImage = 0x2c0; // UTexture2D*
	}

	namespace n_UBTDecorator_CheckGameplayTagsOnActor {
		constexpr auto ActorToCheck = 0x68; // FBlackboardKeySelector
		constexpr auto TagsToMatch = 0x90; // EGameplayContainerMatchType
		constexpr auto GameplayTags = 0x98; // FGameplayTagContainer
		constexpr auto CachedDescription = 0xb8; // FString
	}

	namespace n_UMaterialExpressionArctangent2 {
		constexpr auto Y = 0x40; // FExpressionInput
		constexpr auto X = 0x54; // FExpressionInput
	}

	namespace n_UParticleModuleVectorFieldScale {
		constexpr auto VectorFieldScale = 0x30; // UDistributionFloat*
		constexpr auto VectorFieldScaleRaw = 0x38; // FRawDistributionFloat
	}

	namespace n_UParticleModuleTypeDataBeam2 {
		constexpr auto BeamMethod = 0x30; // EBeam2Method
		constexpr auto TextureTile = 0x34; // int32_t
		constexpr auto TextureTileDistance = 0x38; // float
		constexpr auto Sheets = 0x3c; // int32_t
		constexpr auto MaxBeamCount = 0x40; // int32_t
		constexpr auto Speed = 0x44; // float
		constexpr auto InterpolationPoints = 0x48; // int32_t
		constexpr auto bAlwaysOn = 0x4c; // char : 1
		constexpr auto UpVectorStepSize = 0x50; // int32_t
		constexpr auto BranchParentName = 0x54; // FName
		constexpr auto Distance = 0x60; // FRawDistributionFloat
		constexpr auto TaperMethod = 0x90; // EBeamTaperMethod
		constexpr auto TaperFactor = 0x98; // FRawDistributionFloat
		constexpr auto TaperScale = 0xc8; // FRawDistributionFloat
		constexpr auto RenderGeometry = 0xf8; // char : 1
		constexpr auto RenderDirectLine = 0xf8; // char : 1
		constexpr auto RenderLines = 0xf8; // char : 1
		constexpr auto RenderTessellation = 0xf8; // char : 1
	}

	namespace n_UPortalWarsAmmoCounterWidget {
		constexpr auto AmmoText = 0x260; // UTextBlock*
		constexpr auto ChargeProgressBar = 0x268; // UProgressBar*
	}

	namespace n_AFieldSystemActor {
		constexpr auto FieldSystemComponent = 0x220; // UFieldSystemComponent*
	}

	namespace n_APortalWarsRoundHUD {
		constexpr auto RoundResultWidget = 0x400; // UPortalWarsRoundResultWidget*
		constexpr auto RoundResultWidgetClass = 0x408; // UPortalWarsRoundResultWidget*
		constexpr auto RoundIntermissionWidget = 0x410; // UPortalWarsRoundIntermissionWidget*
		constexpr auto RoundIntermissionWidgetClass = 0x418; // UPortalWarsRoundIntermissionWidget*
		constexpr auto RoundHUDOverlayWidget = 0x420; // UPortalWarsRoundHUDOverlayWidget*
		constexpr auto RoundHUDOverlayWidgetClass = 0x428; // UPortalWarsRoundHUDOverlayWidget*
		constexpr auto PlayerStatusWidgetClass = 0x430; // UPortalWarsRoundPlayerStatusWidget*
		constexpr auto bMinimalIntermissionScoreboard = 0x438; // bool
	}

	namespace n_USoundNode {
		constexpr auto ChildNodes = 0x28; // TArray<USoundNode*>
	}

	namespace n_UPortalWarsNewsFeedWidget {
		constexpr auto ActionButton = 0x310; // UPortalWarsButtonWidget*
		constexpr auto NewsFeedRoot = 0x318; // UWidget*
		constexpr auto NewsFeedEntryWidgetClass = 0x320; // UPortalWarsNewsFeedEntryWidget*
	}

	namespace n_UPanelWidget {
		constexpr auto Slots = 0x108; // TArray<UPanelSlot*>
	}

	namespace n_APortalSceneCapture2D {
		constexpr auto Portal = 0x238; // APortal*
	}

	namespace n_UParticleModuleColorScaleOverLife {
		constexpr auto ColorScaleOverLife = 0x30; // FRawDistributionVector
		constexpr auto AlphaScaleOverLife = 0x78; // FRawDistributionFloat
		constexpr auto bEmitterTime = 0xa8; // char : 1
	}

	namespace n_UIntegerSpinBox {
		constexpr auto Value = 0x108; // int32_t
		constexpr auto ValueDelegate = 0x10c; // FDelegate
		constexpr auto WidgetStyle = 0x120; // FSpinBoxStyle
		constexpr auto Style = 0x408; // USlateWidgetStyleAsset*
		constexpr auto Delta = 0x410; // int32_t
		constexpr auto SliderExponent = 0x414; // int32_t
		constexpr auto Font = 0x418; // FSlateFontInfo
		constexpr auto Justification = 0x470; // ETextJustify
		constexpr auto MinDesiredWidth = 0x474; // float
		constexpr auto ClearKeyboardFocusOnCommit = 0x478; // bool
		constexpr auto SelectAllTextOnCommit = 0x479; // bool
		constexpr auto ForegroundColor = 0x480; // FSlateColor
		constexpr auto OnValueChanged = 0x4a8; // FMulticastInlineDelegate
		constexpr auto OnValueCommitted = 0x4b8; // FMulticastInlineDelegate
		constexpr auto OnBeginSliderMovement = 0x4c8; // FMulticastInlineDelegate
		constexpr auto OnEndSliderMovement = 0x4d8; // FMulticastInlineDelegate
		constexpr auto bOverride_MinValue = 0x4e8; // char : 1
		constexpr auto bOverride_MaxValue = 0x4e8; // char : 1
		constexpr auto bOverride_MinSliderValue = 0x4e8; // char : 1
		constexpr auto bOverride_MaxSliderValue = 0x4e8; // char : 1
		constexpr auto MinValue = 0x4ec; // int32_t
		constexpr auto MaxValue = 0x4f0; // int32_t
		constexpr auto MinSliderValue = 0x4f4; // int32_t
		constexpr auto MaxSliderValue = 0x4f8; // int32_t
	}

	namespace n_UBTService_StuckMonitor {
		constexpr auto MinStuckTime = 0x70; // float
		constexpr auto StuckDistanceTolerance = 0x74; // float
	}

	namespace n_UShadowMapTexture2D {
		constexpr auto ShadowmapFlags = 0x1a0; // EShadowMapFlags
	}

	namespace n_APortalWarsCharacter {
		constexpr auto GameStateRef = 0x4d8; // APortalWarsGameState*
		constexpr auto Health = 0x4ec; // float
		constexpr auto MaxHealth = 0x4f0; // float
		constexpr auto healthRechargeDelay = 0x4fc; // float
		constexpr auto HealthRechargeStartEvent = 0x500; // UAkAudioEvent*
		constexpr auto HealthRechargeStopEvent = 0x508; // UAkAudioEvent*
		constexpr auto LowHealthStartEvent = 0x510; // UAkAudioEvent*
		constexpr auto LowHealthStopEvent = 0x518; // UAkAudioEvent*
		constexpr auto KillHealthLoopEvents = 0x520; // UAkAudioEvent*
		constexpr auto LastCausedHitInfo = 0x620; // FHitInfo
		constexpr auto upperBodyFlinchMontage = 0x720; // UAnimMontage*
		constexpr auto lowerBodyFlinchMontage = 0x728; // UAnimMontage*
		constexpr auto headFlinchMontage = 0x730; // UAnimMontage*
		constexpr auto SuicideDamageType = 0x740; // UDamageType*
		constexpr auto portalDamageType = 0x748; // UDamageType*
		constexpr auto PlayerTakeDamageEvent = 0x750; // UAkAudioEvent*
		constexpr auto RagdollCollisionEvent = 0x758; // UAkAudioEvent*
		constexpr auto RagdollImpactSFXThreshold = 0x760; // float
		constexpr auto PostDeathPortalLifetime = 0x764; // float
		constexpr auto RagdollLifetime = 0x768; // float
		constexpr auto TargetingBots = 0x770; // TArray<APortalWarsAIController*>
		constexpr auto ThirdPersonCamera = 0x780; // UCameraComponent*
		constexpr auto ThirdPersonCameraArm = 0x788; // USpringArmComponent*
		constexpr auto SpectatorFirstPersonCamera = 0x798; // UCameraComponent*
		constexpr auto SpectatorFirstPersonCameraArm = 0x7a0; // USpringArmComponent*
		constexpr auto DefaultInventoryClasses = 0x7d0; // TArray<TSoftClassPtr<UObject>>
		constexpr auto Inventory = 0x7e0; // TArray<AGun*>
		constexpr auto CurrentWeapon = 0x7f0; // AGun*
		constexpr auto Fists = 0x800; // AGun*
		constexpr auto FistsClass = 0x808; // AGun*
		constexpr auto CurrentWeaponClass = 0x810; // AGun*
		constexpr auto WeaponAttachPoint = 0x850; // FName
		constexpr auto GrendadeAttachPoint = 0x858; // FName
		constexpr auto portalLauncherClass = 0x860; // APortalLauncher*
		constexpr auto PortalLauncher = 0x868; // APortalLauncher*
		constexpr auto PortalLauncherAttachPoint = 0x870; // FName
		constexpr auto FirstPersonArmsRoot = 0x880; // USceneComponent*
		constexpr auto Mesh1P = 0x898; // USkeletalMeshComponent*
		constexpr auto Jetpack = 0x8a0; // USkeletalMeshComponent*
		constexpr auto JetpackFlameMeshes = 0x8a8; // TMap<FName, UStaticMeshComponent*>
		constexpr auto FriendlyStencilValue = 0x910; // int32_t
		constexpr auto EnemyStencilValue = 0x914; // int32_t
		constexpr auto AlphaTeamStencilValue = 0x918; // int32_t
		constexpr auto BravoTeamStencilValue = 0x91c; // int32_t
		constexpr auto BlueOutlineColor = 0x920; // FLinearColor
		constexpr auto RedOutlineColor = 0x930; // FLinearColor
		constexpr auto ColorIntensity3P = 0x940; // float
		constexpr auto ColorIntensity1P = 0x944; // float
		constexpr auto EnemyCharacterMaterialOverride = 0x948; // UMaterialInstance*
		constexpr auto EnemyCharacterCustomizationOverride = 0x950; // FCustomizationId
		constexpr auto EmoteSequenceCurrentlyPlayingInMenu = 0x9d8; // UAnimSequence*
		constexpr auto SprayRange = 0x9e0; // float
		constexpr auto SprayLifetime = 0x9e4; // float
		constexpr auto TimeBetweenSprays = 0x9e8; // float
		constexpr auto SavedPositions = 0x9f0; // TArray<FSavedPosition>
		constexpr auto bIsSprinting = 0xa08; // char : 1
		constexpr auto SprintCamShake = 0xa10; // UMatineeCameraShake*
		constexpr auto SprintingSpeedModifier = 0xa1c; // float
		constexpr auto TeabagZone = 0xa30; // APortalWarsTeabagZone*
		constexpr auto CrouchCameraSpeed = 0xa40; // float
		constexpr auto CrouchEvent = 0xa48; // UAkAudioEvent*
		constexpr auto UncrouchEvent = 0xa50; // UAkAudioEvent*
		constexpr auto BaseTurnRate = 0xa58; // float
		constexpr auto BaseLookUpRate = 0xa5c; // float
		constexpr auto ControllerMaxAccelMultiplier = 0xaf8; // float
		constexpr auto OwnerOfLastPortalUsed = 0xb60; // AController*
		constexpr auto rotateToUprightSpeed = 0xb6c; // float
		constexpr auto DoRep_collisionProfile = 0xb70; // char
		constexpr auto TeleportEvent = 0xb88; // UAkAudioEvent*
		constexpr auto LocalPlayerTeleportEvent = 0xb90; // UAkAudioEvent*
		constexpr auto GrenadeLauncher = 0xba8; // AGrenadeLauncher*
		constexpr auto GrenadeLauncherClass = 0xbb0; // AGrenadeLauncher*
		constexpr auto ThrowGrenadeEvent = 0xbb8; // UAkAudioEvent*
		constexpr auto IgnoreServerCorrections = 0xbc0; // FIgnoreMovementCorrections
		constexpr auto MeleeApplyDmgRange = 0xbc8; // float
		constexpr auto MeleeApplyDmgRangeXY = 0xbcc; // float
		constexpr auto MeleeApplyDmgAngle = 0xbd0; // float
		constexpr auto MeleeRange = 0xbd4; // float
		constexpr auto TimeBetweenMelee = 0xbd8; // float
		constexpr auto MeleeConeHalfAngle = 0xbdc; // float
		constexpr auto MeleeMaxRotationAngle = 0xc14; // float
		constexpr auto MeleeDamageType = 0xc28; // UDamageType*
		constexpr auto bIsThrusting = 0xc39; // char : 1
		constexpr auto thrustAmountPerTick = 0xc3c; // float
		constexpr auto thrusterVelocityThreshhold = 0xc40; // float
		constexpr auto thrusterRechargeDelay = 0xc44; // float
		constexpr auto thrusterTotalTime = 0xc48; // float
		constexpr auto thrusterCurrentTime = 0xc4c; // float
		constexpr auto JetPackStartEvent = 0xc58; // UAkAudioEvent*
		constexpr auto JetPackEndEvent = 0xc60; // UAkAudioEvent*
		constexpr auto JetpackOpenAnimation = 0xc70; // UAnimSequence*
		constexpr auto JetpackIdleAnimation = 0xc78; // UAnimSequence*
		constexpr auto bIsClambering = 0xc80; // char : 1
		constexpr auto ClamberCameraShakeDelay = 0xc84; // float
		constexpr auto ClamberCameraShake = 0xc88; // UCameraShakeBase*
		constexpr auto bIsZooming = 0xc90; // char : 1
		constexpr auto maxTimeOutOfBounds = 0xc94; // float
		constexpr auto curTimeOutOfBounds = 0xc98; // float
		constexpr auto OutOfBoundsStartEvent = 0xca0; // UAkAudioEvent*
		constexpr auto OutofBoundsEndEvent = 0xca8; // UAkAudioEvent*
		constexpr auto Animation = 0xcb8; // UPortalWarsAnimInstanceV2*
		constexpr auto DeathEvent = 0xce0; // UAkAudioEvent*
		constexpr auto RespawnEvent = 0xce8; // UAkAudioEvent*
		constexpr auto SprayEvent = 0xcf0; // UAkAudioEvent*
		constexpr auto Footstep3pEvent = 0xcf8; // UAkAudioEvent*
		constexpr auto Footstep1pEvent = 0xd00; // UAkAudioEvent*
		constexpr auto Land3pEvent = 0xd08; // UAkAudioEvent*
		constexpr auto Land1pEvent = 0xd10; // UAkAudioEvent*
		constexpr auto Jump3pEvent = 0xd18; // UAkAudioEvent*
		constexpr auto Jump1pEvent = 0xd20; // UAkAudioEvent*
		constexpr auto AkFirstPerson = 0xd28; // UPortalWarsAkComponent*
		constexpr auto AkThirdPerson = 0xd30; // UPortalWarsAkComponent*
		constexpr auto AkFoot = 0xd38; // UPortalWarsAkComponent*
		constexpr auto AkJetPack = 0xd40; // UPortalWarsAkComponent*
		constexpr auto AkGunLocation = 0xd48; // UPortalWarsAkComponent*
		constexpr auto AkMoveable = 0xd50; // UPortalWarsAkComponent*
		constexpr auto RespawnCountdownEvent = 0xd58; // UAkAudioEvent*
		constexpr auto RespawnCountdownStopEvent = 0xd60; // UAkAudioEvent*
		constexpr auto FootstepLoudnessForBots = 0xd68; // float
		constexpr auto ThrusterLoudnessForBots = 0xd6c; // float
		constexpr auto NameIndicatorWidget = 0xd78; // UPortalWarsIndicatorWidget*
		constexpr auto RadarMarkerWidget = 0xd80; // UPortalWarsRadarMarkerWidget*
		constexpr auto LastPlayerState = 0xd88; // APortalWarsPlayerState*
		constexpr auto RemotePitch = 0xd94; // uint16_t
		constexpr auto RemoteYaw = 0xd96; // uint16_t
		constexpr auto RemoteRoll = 0xd98; // uint16_t
	}

	namespace n_UNiagaraBaselineController_Basic {
		constexpr auto NumInstances = 0x68; // int32_t
		constexpr auto SpawnedComponents = 0x70; // TArray<UNiagaraComponent*>
	}

	namespace n_UMaterialExpressionFontSampleParameter {
		constexpr auto ParameterName = 0x50; // FName
		constexpr auto ExpressionGUID = 0x58; // FGuid
		constexpr auto Group = 0x68; // FName
	}

	namespace n_AControlPointMeshActor {
		constexpr auto ControlPointMeshComponent = 0x220; // UControlPointMeshComponent*
	}

	namespace n_APortalWarsMediaSoundActor {
		constexpr auto MediaSoundComponent = 0x220; // UMediaSoundComponent*
		constexpr auto VolumeMultiplier = 0x228; // float
	}

	namespace n_UMovieSceneCameraShakeSourceShakeSection {
		constexpr auto ShakeData = 0xe8; // FMovieSceneCameraShakeSectionData
	}

	namespace n_UParticleModuleVelocity_Seeded {
		constexpr auto RandomSeedInfo = 0xb0; // FParticleRandomSeedInfo
	}

	namespace n_APlayerStart {
		constexpr auto PlayerStartTag = 0x248; // FName
	}

	namespace n_UMaterialExpressionBumpOffset {
		constexpr auto Coordinate = 0x40; // FExpressionInput
		constexpr auto Height = 0x54; // FExpressionInput
		constexpr auto HeightRatioInput = 0x68; // FExpressionInput
		constexpr auto HeightRatio = 0x7c; // float
		constexpr auto ReferencePlane = 0x80; // float
		constexpr auto ConstCoordinate = 0x84; // uint32_t
	}

	namespace n_APortalWarsTutorialCharacter {
		constexpr auto StageID = 0xda0; // int32_t
		constexpr auto GoalID = 0xda4; // int32_t
		constexpr auto Goals = 0xda8; // TArray<APortalWarsTutorialGoal*>
		constexpr auto HiddenUntilGoal = 0xdb8; // int32_t
		constexpr auto PortalWalls = 0xdc0; // TArray<APortalWall*>
	}

	namespace n_UBlueprint {
		constexpr auto ParentClass = 0x50; // UObject*
		constexpr auto BlueprintType = 0x58; // EBlueprintType
		constexpr auto bRecompileOnLoad = 0x59; // char : 1
		constexpr auto bHasBeenRegenerated = 0x59; // char : 1
		constexpr auto bIsRegeneratingOnLoad = 0x59; // char : 1
		constexpr auto BlueprintSystemVersion = 0x5c; // int32_t
		constexpr auto SimpleConstructionScript = 0x60; // USimpleConstructionScript*
		constexpr auto ComponentTemplates = 0x68; // TArray<UActorComponent*>
		constexpr auto Timelines = 0x78; // TArray<UTimelineTemplate*>
		constexpr auto ComponentClassOverrides = 0x88; // TArray<FBPComponentClassOverride>
		constexpr auto InheritableComponentHandler = 0x98; // UInheritableComponentHandler*
	}

	namespace n_UPortalWarsMenuCarouselWidget {
		constexpr auto EntryPanel = 0x2a8; // UPanelWidget*
		constexpr auto CarouselEntries = 0x2b8; // TArray<UPortalWarsEntryWidget*>
		constexpr auto IndicatorRoot = 0x2c8; // UWidget*
		constexpr auto IndicatorPanel = 0x2d0; // UPanelWidget*
		constexpr auto IndicatorWidgetClass = 0x2d8; // UUserWidget*
		constexpr auto DefaultIndicatorColor = 0x2e0; // FLinearColor
		constexpr auto ActiveIndicatorColor = 0x2f0; // FLinearColor
		constexpr auto EntryDisplayTime = 0x300; // float
	}

	namespace n_ULevelStreaming {
		constexpr auto WorldAsset = 0x28; // TSoftObjectPtr<UWorld>
		constexpr auto PackageNameToLoad = 0x50; // FName
		constexpr auto LODPackageNames = 0x58; // TArray<FName>
		constexpr auto LevelTransform = 0x80; // FTransform
		constexpr auto LevelLODIndex = 0xb0; // int32_t
		constexpr auto StreamingPriority = 0xb4; // int32_t
		constexpr auto bShouldBeVisible = 0xba; // char : 1
		constexpr auto bShouldBeLoaded = 0xba; // char : 1
		constexpr auto bLocked = 0xba; // char : 1
		constexpr auto bIsStatic = 0xba; // char : 1
		constexpr auto bShouldBlockOnLoad = 0xba; // char : 1
		constexpr auto bShouldBlockOnUnload = 0xbb; // char : 1
		constexpr auto bDisableDistanceStreaming = 0xbb; // char : 1
		constexpr auto bDrawOnLevelStatusMap = 0xbb; // char : 1
		constexpr auto LevelColor = 0xbc; // FLinearColor
		constexpr auto EditorStreamingVolumes = 0xd0; // TArray<ALevelStreamingVolume*>
		constexpr auto MinTimeBetweenVolumeUnloadRequests = 0xe0; // float
		constexpr auto OnLevelLoaded = 0xe8; // FMulticastInlineDelegate
		constexpr auto OnLevelUnloaded = 0xf8; // FMulticastInlineDelegate
		constexpr auto OnLevelShown = 0x108; // FMulticastInlineDelegate
		constexpr auto OnLevelHidden = 0x118; // FMulticastInlineDelegate
		constexpr auto LoadedLevel = 0x128; // ULevel*
		constexpr auto PendingUnloadLevel = 0x130; // ULevel*
	}

	namespace n_UGizmoBoxComponent {
		constexpr auto Origin = 0x470; // FVector
		constexpr auto Rotation = 0x480; // FQuat
		constexpr auto Dimensions = 0x490; // FVector
		constexpr auto LineThickness = 0x49c; // float
		constexpr auto bRemoveHiddenLines = 0x4a0; // bool
		constexpr auto bEnableAxisFlip = 0x4a1; // bool
	}

	namespace n_UInterpTrackInstParticleReplay {
		constexpr auto LastUpdatePosition = 0x28; // float
	}

	namespace n_UMaterialExpressionShadingModel {
		constexpr auto ShadingModel = 0x40; // EMaterialShadingModel
	}

	namespace n_APortalWarsContamination {
		constexpr auto ContaminationDefaultInventoryClasses = 0x6c0; // TArray<TSoftClassPtr<UObject>>
	}

	namespace n_UOverlaySlot {
		constexpr auto Padding = 0x40; // FMargin
		constexpr auto HorizontalAlignment = 0x50; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x51; // EVerticalAlignment
	}

	namespace n_UParticleModuleBeamSource {
		constexpr auto SourceMethod = 0x30; // Beam2SourceTargetMethod
		constexpr auto SourceName = 0x34; // FName
		constexpr auto bSourceAbsolute = 0x3c; // char : 1
		constexpr auto Source = 0x40; // FRawDistributionVector
		constexpr auto bLockSource = 0x88; // char : 1
		constexpr auto SourceTangentMethod = 0x8c; // Beam2SourceTargetTangentMethod
		constexpr auto SourceTangent = 0x90; // FRawDistributionVector
		constexpr auto bLockSourceTangent = 0xd8; // char : 1
		constexpr auto SourceStrength = 0xe0; // FRawDistributionFloat
		constexpr auto bLockSourceStength = 0x110; // char : 1
	}

	namespace n_UPortalWarsPrivacySettingsWidget {
		constexpr auto CrossPlay = 0x358; // UPortalWarsCheckBoxWidget*
		constexpr auto AnonymousMode = 0x360; // UPortalWarsCheckBoxWidget*
		constexpr auto HideNames = 0x368; // UPortalWarsCheckBoxWidget*
		constexpr auto PartyChatOnly = 0x370; // UPortalWarsCheckBoxWidget*
	}

	namespace n_UNiagaraDataInterfaceAudioOscilloscope {
		constexpr auto Submix = 0x38; // USoundSubmix*
		constexpr auto Resolution = 0x40; // int32_t
		constexpr auto ScopeInMilliseconds = 0x44; // float
	}

	namespace n_UAnimSequenceBase {
		constexpr auto Notifies = 0x80; // TArray<FAnimNotifyEvent>
		constexpr auto SequenceLength = 0x90; // float
		constexpr auto RateScale = 0x94; // float
		constexpr auto RawCurveData = 0x98; // FRawCurveTracks
	}

	namespace n_UEnvQueryTest_GameplayTags {
		constexpr auto TagQueryToMatch = 0x1f8; // FGameplayTagQuery
		constexpr auto bUpdatedToUseQuery = 0x240; // bool
		constexpr auto TagsToMatch = 0x241; // EGameplayContainerMatchType
		constexpr auto GameplayTags = 0x248; // FGameplayTagContainer
	}

	namespace n_UChaosGameplayEventDispatcher {
		constexpr auto CollisionEventRegistrations = 0x1c8; // TMap<UPrimitiveComponent*, FChaosHandlerSet>
		constexpr auto BreakEventRegistrations = 0x218; // TMap<UPrimitiveComponent*, FBreakEventCallbackWrapper>
	}

	namespace n_UEnvQueryGenerator_SimpleGrid {
		constexpr auto GridSize = 0xb8; // FAIDataProviderFloatValue
		constexpr auto SpaceBetween = 0xf0; // FAIDataProviderFloatValue
		constexpr auto GenerateAround = 0x128; // UEnvQueryContext*
	}

	namespace n_UNavLinkDefinition {
		constexpr auto Links = 0x28; // TArray<FNavigationLink>
		constexpr auto SegmentLinks = 0x38; // TArray<FNavigationSegmentLink>
	}

	namespace n_UMovieSceneMediaSection {
		constexpr auto MediaSource = 0xe8; // UMediaSource*
		constexpr auto bLooping = 0xf0; // bool
		constexpr auto StartFrameOffset = 0xf4; // FFrameNumber
		constexpr auto MediaTexture = 0xf8; // UMediaTexture*
		constexpr auto MediaSoundComponent = 0x100; // UMediaSoundComponent*
		constexpr auto bUseExternalMediaPlayer = 0x108; // bool
		constexpr auto ExternalMediaPlayer = 0x110; // UMediaPlayer*
	}

	namespace n_UBTTask_Wait {
		constexpr auto WaitTime = 0x70; // float
		constexpr auto RandomDeviation = 0x74; // float
	}

	namespace n_ULandscapeMeshProxyComponent {
		constexpr auto LandscapeGuid = 0x4e0; // FGuid
		constexpr auto ProxyComponentBases = 0x4f0; // TArray<FIntPoint>
		constexpr auto ProxyLOD = 0x500; // int8_t
	}

	namespace n_UMaterialFunction {
		constexpr auto Description = 0x40; // FString
		constexpr auto bExposeToLibrary = 0x50; // char : 1
		constexpr auto bPrefixParameterNames = 0x50; // char : 1
	}

	namespace n_ULevelSequenceDirector {
		constexpr auto Player = 0x28; // ULevelSequencePlayer*
	}

	namespace n_AEmitter {
		constexpr auto ParticleSystemComponent = 0x220; // UParticleSystemComponent*
		constexpr auto bDestroyOnSystemFinish = 0x228; // char : 1
		constexpr auto bPostUpdateTickGroup = 0x228; // char : 1
		constexpr auto bCurrentlyActive = 0x228; // char : 1
		constexpr auto OnParticleSpawn = 0x230; // FMulticastInlineDelegate
		constexpr auto OnParticleBurst = 0x240; // FMulticastInlineDelegate
		constexpr auto OnParticleDeath = 0x250; // FMulticastInlineDelegate
		constexpr auto OnParticleCollide = 0x260; // FMulticastInlineDelegate
	}

	namespace n_ALevelBounds {
		constexpr auto BoxComponent = 0x220; // UBoxComponent*
		constexpr auto bAutoUpdateBounds = 0x228; // bool
	}

	namespace n_UPortalWarsReplaysWidget {
		constexpr auto ReplayEntryWidgetClass = 0x340; // UPortalWarsReplayEntryWidget*
		constexpr auto ReplayList = 0x348; // UPanelWidget*
		constexpr auto PreviewReplayEntry = 0x350; // UPortalWarsReplayEntryWidget*
		constexpr auto PlayButton = 0x358; // UPortalWarsButtonWidget*
		constexpr auto DeleteButton = 0x360; // UPortalWarsButtonWidget*
		constexpr auto RenameButton = 0x368; // UPortalWarsButtonWidget*
		constexpr auto OpenFolderButton = 0x370; // UPortalWarsButtonWidget*
		constexpr auto RenameReplayDialogWidgetClass = 0x378; // UPortalWarsRenameReplayDialogWidget*
	}

	namespace n_UMaterialExpressionInverseLinearInterpolate {
		constexpr auto A = 0x40; // FExpressionInput
		constexpr auto B = 0x54; // FExpressionInput
		constexpr auto Value = 0x68; // FExpressionInput
		constexpr auto ConstA = 0x7c; // float
		constexpr auto ConstB = 0x80; // float
		constexpr auto ConstValue = 0x84; // float
		constexpr auto bClampResult = 0x88; // bool
	}

	namespace n_UTouchInterface {
		constexpr auto Controls = 0x28; // TArray<FTouchInputControl>
		constexpr auto ActiveOpacity = 0x38; // float
		constexpr auto InactiveOpacity = 0x3c; // float
		constexpr auto TimeUntilDeactive = 0x40; // float
		constexpr auto TimeUntilReset = 0x44; // float
		constexpr auto ActivationDelay = 0x48; // float
		constexpr auto bPreventRecenter = 0x4c; // bool
		constexpr auto StartupDelay = 0x50; // float
	}

	namespace n_UPortalWarsBattlePassWidget {
		constexpr auto PremiumActiveRoot = 0x438; // UWidget*
		constexpr auto PurchaseButton = 0x440; // UPortalWarsBPRedeemableButton*
	}

	namespace n_UPortalWarsXPUpdateEntryWidget {
		constexpr auto XPText = 0x420; // UTextBlock*
		constexpr auto FadeUpAnimation = 0x428; // UWidgetAnimation*
		constexpr auto PopupEvent = 0x450; // UAkAudioEvent*
	}

	namespace n_UTextBlock {
		constexpr auto Text = 0x128; // FText
		constexpr auto TextDelegate = 0x140; // FDelegate
		constexpr auto ColorAndOpacity = 0x150; // FSlateColor
		constexpr auto ColorAndOpacityDelegate = 0x178; // FDelegate
		constexpr auto Font = 0x188; // FSlateFontInfo
		constexpr auto StrikeBrush = 0x1e0; // FSlateBrush
		constexpr auto ShadowOffset = 0x268; // FVector2D
		constexpr auto ShadowColorAndOpacity = 0x270; // FLinearColor
		constexpr auto ShadowColorAndOpacityDelegate = 0x280; // FDelegate
		constexpr auto MinDesiredWidth = 0x290; // float
		constexpr auto bWrapWithInvalidationPanel = 0x294; // bool
		constexpr auto bAutoWrapText = 0x295; // bool
		constexpr auto TextTransformPolicy = 0x296; // ETextTransformPolicy
		constexpr auto bSimpleTextMode = 0x297; // bool
	}

	namespace n_UMovieSceneEnumSection {
		constexpr auto EnumCurve = 0xf0; // FMovieSceneByteChannel
	}

	namespace n_UEditableMesh {
		constexpr auto Adapters = 0x3b8; // TArray<UEditableMeshAdapter*>
		constexpr auto TextureCoordinateCount = 0x3d0; // int32_t
		constexpr auto PendingCompactCounter = 0x51c; // int32_t
		constexpr auto SubdivisionCount = 0x520; // int32_t
	}

	namespace n_UDistributionFloatUniformCurve {
		constexpr auto ConstantCurve = 0x38; // FInterpCurveVector2D
	}

	namespace n_ALandscapeMeshProxyActor {
		constexpr auto LandscapeMeshProxyComponent = 0x220; // ULandscapeMeshProxyComponent*
	}

	namespace n_UInterpTrackVectorBase {
		constexpr auto VectorTrack = 0x70; // FInterpCurveVector
		constexpr auto CurveTension = 0x88; // float
	}

	namespace n_UMaterialExpressionVolumetricAdvancedMaterialOutput {
		constexpr auto PhaseG = 0x40; // FExpressionInput
		constexpr auto PhaseG2 = 0x54; // FExpressionInput
		constexpr auto PhaseBlend = 0x68; // FExpressionInput
		constexpr auto MultiScatteringContribution = 0x7c; // FExpressionInput
		constexpr auto MultiScatteringOcclusion = 0x90; // FExpressionInput
		constexpr auto MultiScatteringEccentricity = 0xa4; // FExpressionInput
		constexpr auto ConservativeDensity = 0xb8; // FExpressionInput
		constexpr auto ConstPhaseG = 0xcc; // float
		constexpr auto ConstPhaseG2 = 0xd0; // float
		constexpr auto ConstPhaseBlend = 0xd4; // float
		constexpr auto PerSamplePhaseEvaluation = 0xd8; // bool
		constexpr auto MultiScatteringApproximationOctaveCount = 0xdc; // uint32_t
		constexpr auto ConstMultiScatteringContribution = 0xe0; // float
		constexpr auto ConstMultiScatteringOcclusion = 0xe4; // float
		constexpr auto ConstMultiScatteringEccentricity = 0xe8; // float
		constexpr auto bGroundContribution = 0xec; // bool
		constexpr auto bGrayScaleMaterial = 0xed; // bool
		constexpr auto bRayMarchVolumeShadow = 0xee; // bool
	}

	namespace n_UMovieSceneSkeletalAnimationTrack {
		constexpr auto AnimationSections = 0x80; // TArray<UMovieSceneSection*>
		constexpr auto bUseLegacySectionIndexBlend = 0x90; // bool
		constexpr auto RootMotionParams = 0x98; // FMovieSceneSkeletalAnimRootMotionTrackParams
		constexpr auto bBlendFirstChildOfRoot = 0xc8; // bool
	}

	namespace n_UMovieSceneCaptureProtocolBase {
		constexpr auto State = 0x50; // EMovieSceneCaptureProtocolState
	}

	namespace n_UPortalWarsFriendsListSubWidget {
		constexpr auto RefreshButton = 0x340; // UPortalWarsButtonWidget*
		constexpr auto InGamePanel = 0x348; // UPanelWidget*
		constexpr auto OnlinePanel = 0x350; // UPanelWidget*
		constexpr auto OfflinePanel = 0x358; // UPanelWidget*
		constexpr auto OnlineRoot = 0x360; // UWidget*
		constexpr auto PlayerEntryWidgetClass = 0x368; // UPortalWarsSocialPlayerEntry*
		constexpr auto PlayerActionsWidgetClass = 0x370; // UPortalWarsPlayerActionsWidget*
		constexpr auto ErrorText = 0x378; // UTextBlock*
		constexpr auto bPlatformFriendsList = 0x380; // bool
	}

	namespace n_UNiagaraDataInterfaceGrid2DCollection {
		constexpr auto RenderTargetUserParameter = 0xf8; // FNiagaraUserParameterBinding
		constexpr auto OverrideBufferFormat = 0x118; // ENiagaraGpuBufferFormat
		constexpr auto bOverrideFormat = 0x119; // char : 1
		constexpr auto ManagedRenderTargets = 0x170; // TMap<uint64_t, UTextureRenderTarget2DArray*>
	}

	namespace n_UDiscordRpc {
		constexpr auto IsConnected = 0x28; // bool
		constexpr auto OnConnected = 0x30; // FMulticastInlineDelegate
		constexpr auto OnDisconnected = 0x40; // FMulticastInlineDelegate
		constexpr auto OnErrored = 0x50; // FMulticastInlineDelegate
		constexpr auto OnJoin = 0x60; // FMulticastInlineDelegate
		constexpr auto OnSpectate = 0x70; // FMulticastInlineDelegate
		constexpr auto OnJoinRequest = 0x80; // FMulticastInlineDelegate
		constexpr auto RichPresence = 0x90; // FDiscordRichPresence
	}

	namespace n_UEdGraphNode {
		constexpr auto DeprecatedPins = 0x38; // TArray<UEdGraphPin_Deprecated*>
		constexpr auto NodePosX = 0x48; // int32_t
		constexpr auto NodePosY = 0x4c; // int32_t
		constexpr auto NodeWidth = 0x50; // int32_t
		constexpr auto NodeHeight = 0x54; // int32_t
		constexpr auto AdvancedPinDisplay = 0x58; // ENodeAdvancedPins
		constexpr auto EnabledState = 0x59; // ENodeEnabledState
		constexpr auto bDisplayAsDisabled = 0x5b; // char : 1
		constexpr auto bUserSetEnabledState = 0x5b; // char : 1
		constexpr auto bIsNodeEnabled = 0x5b; // char : 1
		constexpr auto bHasCompilerMessage = 0x5b; // char : 1
		constexpr auto NodeComment = 0x60; // FString
		constexpr auto ErrorType = 0x70; // int32_t
		constexpr auto ErrorMsg = 0x78; // FString
		constexpr auto NodeGuid = 0x88; // FGuid
	}

	namespace n_UInterpTrackAnimControl {
		constexpr auto SlotName = 0x90; // FName
		constexpr auto AnimSeqs = 0x98; // TArray<FAnimControlTrackKey>
		constexpr auto bSkipAnimNotifiers = 0xa8; // char : 1
	}

	namespace n_UInterpTrackFloatProp {
		constexpr auto PropertyName = 0x90; // FName
	}

	namespace n_USoundSubmixWithParentBase {
		constexpr auto ParentSubmix = 0x38; // USoundSubmixBase*
	}

	namespace n_UPhysicsThrusterComponent {
		constexpr auto ThrustStrength = 0x1f8; // float
	}

	namespace n_UInGameAdManager {
		constexpr auto bShouldPauseWhileAdOpen = 0x38; // char : 1
		constexpr auto ClickedBannerDelegates = 0x40; // TArray<FDelegate>
		constexpr auto ClosedAdDelegates = 0x50; // TArray<FDelegate>
	}

	namespace n_USourceEffectDynamicsProcessorPreset {
		constexpr auto Settings = 0xb8; // FSourceEffectDynamicsProcessorSettings
	}

	namespace n_UNiagaraPreviewAxis_InterpParamFloat {
		constexpr auto Min = 0x38; // float
		constexpr auto Max = 0x3c; // float
	}

	namespace n_UCurveVector {
		constexpr auto FloatCurves = 0x30; // FRichCurve [0x3]
	}

	namespace n_UNiagaraDataInterfaceCurlNoise {
		constexpr auto Seed = 0x38; // uint32_t
	}

	namespace n_UVectorFieldAnimated {
		constexpr auto Texture = 0x48; // UTexture2D*
		constexpr auto ConstructionOp = 0x50; // EVectorFieldConstructionOp
		constexpr auto VolumeSizeX = 0x54; // int32_t
		constexpr auto VolumeSizeY = 0x58; // int32_t
		constexpr auto VolumeSizeZ = 0x5c; // int32_t
		constexpr auto SubImagesX = 0x60; // int32_t
		constexpr auto SubImagesY = 0x64; // int32_t
		constexpr auto FrameCount = 0x68; // int32_t
		constexpr auto FramesPerSecond = 0x6c; // float
		constexpr auto bLoop = 0x70; // char : 1
		constexpr auto NoiseField = 0x78; // UVectorFieldStatic*
		constexpr auto NoiseScale = 0x80; // float
		constexpr auto NoiseMax = 0x84; // float
	}

	namespace n_UNiagaraSystem {
		constexpr auto bDumpDebugSystemInfo = 0x30; // bool
		constexpr auto bDumpDebugEmitterInfo = 0x31; // bool
		constexpr auto bRequireCurrentFrameData = 0x32; // bool
		constexpr auto bFixedBounds = 0x34; // char : 1
		constexpr auto EffectType = 0x38; // UNiagaraEffectType*
		constexpr auto bOverrideScalabilitySettings = 0x40; // bool
		constexpr auto ScalabilityOverrides = 0x48; // TArray<FNiagaraSystemScalabilityOverride>
		constexpr auto SystemScalabilityOverrides = 0x58; // FNiagaraSystemScalabilityOverrides
		constexpr auto EmitterHandles = 0x68; // TArray<FNiagaraEmitterHandle>
		constexpr auto ParameterCollectionOverrides = 0x78; // TArray<UNiagaraParameterCollectionInstance*>
		constexpr auto SystemSpawnScript = 0x88; // UNiagaraScript*
		constexpr auto SystemUpdateScript = 0x90; // UNiagaraScript*
		constexpr auto SystemCompiledData = 0xa8; // FNiagaraSystemCompiledData
		constexpr auto ExposedParameters = 0x2c0; // FNiagaraUserRedirectionParameterStore
		constexpr auto FixedBounds = 0x388; // FBox
		constexpr auto bAutoDeactivate = 0x3a4; // bool
		constexpr auto WarmupTime = 0x3a8; // float
		constexpr auto WarmupTickCount = 0x3ac; // int32_t
		constexpr auto WarmupTickDelta = 0x3b0; // float
		constexpr auto bHasSystemScriptDIsWithPerInstanceData = 0x3b4; // bool
		constexpr auto UserDINamesReadInSystemScripts = 0x3b8; // TArray<FName>
	}

	namespace n_UMovieSceneMediaTrack {
		constexpr auto MediaSections = 0x80; // TArray<UMovieSceneSection*>
	}

	namespace n_UCableComponent {
		constexpr auto bAttachStart = 0x478; // bool
		constexpr auto bAttachEnd = 0x479; // bool
		constexpr auto AttachEndTo = 0x480; // FComponentReference
		constexpr auto AttachEndToSocketName = 0x4a8; // FName
		constexpr auto EndLocation = 0x4b0; // FVector
		constexpr auto CableLength = 0x4bc; // float
		constexpr auto NumSegments = 0x4c0; // int32_t
		constexpr auto SubstepTime = 0x4c4; // float
		constexpr auto SolverIterations = 0x4c8; // int32_t
		constexpr auto bEnableStiffness = 0x4cc; // bool
		constexpr auto bUseSubstepping = 0x4cd; // bool
		constexpr auto bSkipCableUpdateWhenNotVisible = 0x4ce; // bool
		constexpr auto bSkipCableUpdateWhenNotOwnerRecentlyRendered = 0x4cf; // bool
		constexpr auto bEnableCollision = 0x4d0; // bool
		constexpr auto CollisionFriction = 0x4d4; // float
		constexpr auto CableForce = 0x4d8; // FVector
		constexpr auto CableGravityScale = 0x4e4; // float
		constexpr auto CableWidth = 0x4e8; // float
		constexpr auto NumSides = 0x4ec; // int32_t
		constexpr auto TileMaterial = 0x4f0; // float
	}

	namespace n_UMaterialExpressionCustom {
		constexpr auto Code = 0x40; // FString
		constexpr auto OutputType = 0x50; // ECustomMaterialOutputType
		constexpr auto Description = 0x58; // FString
		constexpr auto Inputs = 0x68; // TArray<FCustomInput>
		constexpr auto AdditionalOutputs = 0x78; // TArray<FCustomOutput>
		constexpr auto AdditionalDefines = 0x88; // TArray<FCustomDefine>
		constexpr auto IncludeFilePaths = 0x98; // TArray<FString>
	}

	namespace n_UMaterialExpressionSkyAtmosphereLightDiskLuminance {
		constexpr auto LightIndex = 0x40; // int32_t
	}

	namespace n_UPortalWarsEmoteWheelWidget {
		constexpr auto EmoteWheelRoot = 0x2a8; // UCanvasPanel*
		constexpr auto SpinnerDistance = 0x2b0; // float
		constexpr auto MinSelectDistance = 0x2b4; // float
		constexpr auto EmoteWheelSpinner = 0x2c0; // UPortalWarsEmoteWheelSpinnerWidget*
		constexpr auto Wedges = 0x2c8; // TArray<UPortalWarsEmoteWheelWedgeWidget*>
		constexpr auto SelectedWedge = 0x2d8; // UPortalWarsEmoteWheelWedgeWidget*
		constexpr auto PrevSelectedWedge = 0x2e0; // UPortalWarsEmoteWheelWedgeWidget*
		constexpr auto ClosedEvent = 0x2e8; // UAkAudioEvent*
		constexpr auto HoveredEvent = 0x2f0; // UAkAudioEvent*
	}

	namespace n_UProgressWidgetStyle {
		constexpr auto ProgressBarStyle = 0x30; // FProgressBarStyle
	}

	namespace n_UMaterialExpressionSkyAtmosphereLightDirection {
		constexpr auto LightIndex = 0x40; // int32_t
	}

	namespace n_UParticleModuleCameraOffset {
		constexpr auto CameraOffset = 0x30; // FRawDistributionFloat
		constexpr auto bSpawnTimeOnly = 0x60; // char : 1
		constexpr auto UpdateMethod = 0x64; // EParticleCameraOffsetUpdateMethod
	}

	namespace n_UPawnAction_Sequence {
		constexpr auto ActionSequence = 0x90; // TArray<UPawnAction*>
		constexpr auto ChildFailureHandlingMode = 0xa0; // EPawnActionFailHandling
		constexpr auto RecentActionCopy = 0xa8; // UPawnAction*
	}

	namespace n_UEditableStaticMeshAdapter {
		constexpr auto StaticMesh = 0x28; // UStaticMesh*
		constexpr auto OriginalStaticMesh = 0x30; // UStaticMesh*
		constexpr auto StaticMeshLODIndex = 0x38; // int32_t
	}

	namespace n_UDatasmithAssetUserData {
		constexpr auto MetaData = 0x28; // TMap<FName, FString>
	}

	namespace n_UARGeoAnchorComponent {
		constexpr auto ReplicatedPayload = 0x280; // FARGeoAnchorUpdatePayload
	}

	namespace n_UGeometryCacheTrack_FlipbookAnimation {
		constexpr auto NumMeshSamples = 0x58; // uint32_t
	}

	namespace n_UNiagaraDataInterfaceIntRenderTarget2D {
		constexpr auto Size = 0xd8; // FIntPoint
		constexpr auto RenderTargetUserParameter = 0xe0; // FNiagaraUserParameterBinding
		constexpr auto ManagedRenderTargets = 0x100; // TMap<uint64_t, UTextureRenderTarget2D*>
	}

	namespace n_UInterpTrackFade {
		constexpr auto bPersistFade = 0x90; // char : 1
		constexpr auto bFadeAudio = 0x90; // char : 1
		constexpr auto FadeColor = 0x94; // FLinearColor
	}

	namespace n_UMaterialExpressionDDY {
		constexpr auto Value = 0x40; // FExpressionInput
	}

	namespace n_ANavigationData {
		constexpr auto RenderingComp = 0x228; // UPrimitiveComponent*
		constexpr auto NavDataConfig = 0x230; // FNavDataConfig
		constexpr auto bEnableDrawing = 0x2a8; // char : 1
		constexpr auto bForceRebuildOnLoad = 0x2a8; // char : 1
		constexpr auto bAutoDestroyWhenNoNavigation = 0x2a8; // char : 1
		constexpr auto bCanBeMainNavData = 0x2a8; // char : 1
		constexpr auto bCanSpawnOnRebuild = 0x2a8; // char : 1
		constexpr auto bRebuildAtRuntime = 0x2a8; // char : 1
		constexpr auto RuntimeGeneration = 0x2ac; // ERuntimeGenerationType
		constexpr auto ObservedPathsTickInterval = 0x2b0; // float
		constexpr auto DataVersion = 0x2b4; // uint32_t
		constexpr auto SupportedAreas = 0x3c0; // TArray<FSupportedAreaData>
	}

	namespace n_APortalWarsGGPlayerState {
		constexpr auto CurrentWeaponIndex = 0xac8; // char
	}

	namespace n_UAkSurfaceReflectorSetComponent {
		constexpr auto bEnableSurfaceReflectors = 0x1f8; // char : 1
		constexpr auto AcousticPolys = 0x200; // TArray<FAkPoly>
		constexpr auto bEnableDiffraction = 0x210; // char : 1
		constexpr auto bEnableDiffractionOnBoundaryEdges = 0x210; // char : 1
		constexpr auto AssociatedRoom = 0x218; // AActor*
	}

	namespace n_UAkXboxOneInitializationSettings {
		constexpr auto CommonSettings = 0x28; // FAkCommonInitializationSettings
		constexpr auto ApuHeapSettings = 0x90; // FAkXboxOneApuHeapInitializationSettings
		constexpr auto CommunicationSettings = 0x98; // FAkCommunicationSettingsWithSystemInitialization
		constexpr auto AdvancedSettings = 0xc0; // FAkXboxOneAdvancedInitializationSettings
	}

	namespace n_ULandscapeWeightmapUsage {
		constexpr auto ChannelUsage = 0x28; // ULandscapeComponent* [0x4]
		constexpr auto LayerGuid = 0x48; // FGuid
	}

	namespace n_UPortalWarsRadarWidget {
		constexpr auto RadarMarkerWidgetClass = 0x260; // UPortalWarsRadarMarkerWidget*
		constexpr auto RadarRadius = 0x268; // float
		constexpr auto RadarPanel = 0x270; // UCanvasPanel*
		constexpr auto Quadrant1Switcher = 0x278; // UWidgetSwitcher*
		constexpr auto Quadrant2Switcher = 0x280; // UWidgetSwitcher*
		constexpr auto Quadrant3Switcher = 0x288; // UWidgetSwitcher*
		constexpr auto Quadrant4Switcher = 0x290; // UWidgetSwitcher*
	}

	namespace n_UPhysicsSettingsCore {
		constexpr auto DefaultGravityZ = 0x38; // float
		constexpr auto DefaultTerminalVelocity = 0x3c; // float
		constexpr auto DefaultFluidFriction = 0x40; // float
		constexpr auto SimulateScratchMemorySize = 0x44; // int32_t
		constexpr auto RagdollAggregateThreshold = 0x48; // int32_t
		constexpr auto TriangleMeshTriangleMinAreaThreshold = 0x4c; // float
		constexpr auto bEnableShapeSharing = 0x50; // bool
		constexpr auto bEnablePCM = 0x51; // bool
		constexpr auto bEnableStabilization = 0x52; // bool
		constexpr auto bWarnMissingLocks = 0x53; // bool
		constexpr auto bEnable2DPhysics = 0x54; // bool
		constexpr auto bDefaultHasComplexCollision = 0x55; // bool
		constexpr auto BounceThresholdVelocity = 0x58; // float
		constexpr auto FrictionCombineMode = 0x5c; // EFrictionCombineMode
		constexpr auto RestitutionCombineMode = 0x5d; // EFrictionCombineMode
		constexpr auto MaxAngularVelocity = 0x60; // float
		constexpr auto MaxDepenetrationVelocity = 0x64; // float
		constexpr auto ContactOffsetMultiplier = 0x68; // float
		constexpr auto MinContactOffset = 0x6c; // float
		constexpr auto MaxContactOffset = 0x70; // float
		constexpr auto bSimulateSkeletalMeshOnDedicatedServer = 0x74; // bool
		constexpr auto DefaultShapeComplexity = 0x75; // ECollisionTraceFlag
		constexpr auto SolverOptions = 0x78; // FChaosSolverConfiguration
	}

	namespace n_USynthSound {
		constexpr auto OwningSynthComponent = 0x3c0; // USynthComponent*
	}

	namespace n_UWmfMediaSettings {
		constexpr auto AllowNonStandardCodecs = 0x28; // bool
		constexpr auto LowLatency = 0x29; // bool
		constexpr auto NativeAudioOut = 0x2a; // bool
		constexpr auto HardwareAcceleratedVideoDecoding = 0x2b; // bool
	}

	namespace n_UPortalWarsOutOfBoundsWidget {
		constexpr auto OutOfBoundsPanel = 0x260; // UCanvasPanel*
		constexpr auto CountdownText = 0x268; // UTextBlock*
	}

	namespace n_UAxisAngleGizmo {
		constexpr auto AxisSource = 0x48; // TScriptInterface<IGizmoAxisSource>
		constexpr auto AngleSource = 0x58; // TScriptInterface<IGizmoFloatParameterSource>
		constexpr auto HitTarget = 0x68; // TScriptInterface<IGizmoClickTarget>
		constexpr auto StateTarget = 0x78; // TScriptInterface<IGizmoStateTarget>
		constexpr auto bInInteraction = 0x88; // bool
		constexpr auto RotationOrigin = 0x8c; // FVector
		constexpr auto RotationAxis = 0x98; // FVector
		constexpr auto RotationPlaneX = 0xa4; // FVector
		constexpr auto RotationPlaneY = 0xb0; // FVector
		constexpr auto InteractionStartPoint = 0xbc; // FVector
		constexpr auto InteractionCurPoint = 0xc8; // FVector
		constexpr auto InteractionStartAngle = 0xd4; // float
		constexpr auto InteractionCurAngle = 0xd8; // float
	}

	namespace n_UHierarchicalInstancedStaticMeshComponent {
		constexpr auto SortedInstances = 0x598; // TArray<int32_t>
		constexpr auto NumBuiltInstances = 0x5a8; // int32_t
		constexpr auto BuiltInstanceBounds = 0x5b0; // FBox
		constexpr auto UnbuiltInstanceBounds = 0x5cc; // FBox
		constexpr auto UnbuiltInstanceBoundsList = 0x5e8; // TArray<FBox>
		constexpr auto bEnableDensityScaling = 0x5f8; // char : 1
		constexpr auto OcclusionLayerNumNodes = 0x600; // int32_t
		constexpr auto CacheMeshExtendedBounds = 0x604; // FBoxSphereBounds
		constexpr auto bDisableCollision = 0x620; // bool
		constexpr auto InstanceCountToRender = 0x624; // int32_t
	}

	namespace n_UMaterialInterface {
		constexpr auto SubsurfaceProfile = 0x38; // USubsurfaceProfile*
		constexpr auto LightmassSettings = 0x50; // FLightmassMaterialInterfaceSettings
		constexpr auto TextureStreamingData = 0x60; // TArray<FMaterialTextureInfo>
		constexpr auto AssetUserData = 0x70; // TArray<UAssetUserData*>
	}

	namespace n_UAnimCompress_RemoveTrivialKeys {
		constexpr auto MaxPosDiff = 0x40; // float
		constexpr auto MaxAngleDiff = 0x44; // float
		constexpr auto MaxScaleDiff = 0x48; // float
	}

	namespace n_UObjectLibrary {
		constexpr auto ObjectBaseClass = 0x28; // UObject*
		constexpr auto bHasBlueprintClasses = 0x30; // bool
		constexpr auto Objects = 0x38; // TArray<UObject*>
		constexpr auto WeakObjects = 0x48; // TArray<TWeakObjectPtr<UObject>>
		constexpr auto bUseWeakReferences = 0x58; // bool
		constexpr auto bIsFullyLoaded = 0x59; // bool
	}

	namespace n_UPreviewMeshCollection {
		constexpr auto Skeleton = 0x38; // USkeleton*
		constexpr auto SkeletalMeshes = 0x40; // TArray<FPreviewMeshCollectionEntry>
	}

	namespace n_USoundNodeAttenuation {
		constexpr auto AttenuationSettings = 0x48; // USoundAttenuation*
		constexpr auto AttenuationOverrides = 0x50; // FSoundAttenuationSettings
		constexpr auto bOverrideAttenuation = 0x3f0; // char : 1
	}

	namespace n_AAkAmbientSound {
		constexpr auto AkAudioEvent = 0x220; // UAkAudioEvent*
		constexpr auto AkComponent = 0x228; // UAkComponent*
		constexpr auto StopWhenOwnerIsDestroyed = 0x230; // bool
		constexpr auto AutoPost = 0x231; // bool
	}

	namespace n_UNiagaraDataInterfaceGrid2DCollectionReader {
		constexpr auto EmitterName = 0xf8; // FString
		constexpr auto DIName = 0x108; // FString
	}

	namespace n_UGeometryCacheCodecRaw {
		constexpr auto DummyProperty = 0x38; // int32_t
	}

	namespace n_UBTDecorator_KeepInCone {
		constexpr auto ConeHalfAngle = 0x68; // float
		constexpr auto ConeOrigin = 0x70; // FBlackboardKeySelector
		constexpr auto Observed = 0x98; // FBlackboardKeySelector
		constexpr auto bUseSelfAsOrigin = 0xc0; // char : 1
		constexpr auto bUseSelfAsObserved = 0xc0; // char : 1
	}

	namespace n_UScrollBarWidgetStyle {
		constexpr auto ScrollBarStyle = 0x30; // FScrollBarStyle
	}

	namespace n_AProceduralFoliageVolume {
		constexpr auto ProceduralComponent = 0x258; // UProceduralFoliageComponent*
	}

	namespace n_UMaterialExpressionSceneColor {
		constexpr auto InputMode = 0x40; // EMaterialSceneAttributeInputMode
		constexpr auto Input = 0x44; // FExpressionInput
		constexpr auto OffsetFraction = 0x58; // FExpressionInput
		constexpr auto ConstInput = 0x6c; // FVector2D
	}

	namespace n_ADatasmithImportedSequencesActor {
		constexpr auto ImportedSequences = 0x220; // TArray<ULevelSequence*>
	}

	namespace n_UInterpFilter {
		constexpr auto Caption = 0x28; // FString
	}

	namespace n_UNiagaraPreviewAxis_InterpParamBase {
		constexpr auto Param = 0x28; // FName
		constexpr auto Count = 0x30; // int32_t
	}

	namespace n_USkinnedMeshComponent {
		constexpr auto SkeletalMesh = 0x480; // USkeletalMesh*
		constexpr auto MasterPoseComponent = 0x488; // TWeakObjectPtr<USkinnedMeshComponent>
		constexpr auto SkinCacheUsage = 0x490; // TArray<ESkinCacheUsage>
		constexpr auto VertexOffsetUsage = 0x4a0; // TArray<FVertexOffsetUsage>
		constexpr auto PhysicsAssetOverride = 0x5a8; // UPhysicsAsset*
		constexpr auto ForcedLodModel = 0x5b0; // int32_t
		constexpr auto MinLodModel = 0x5b4; // int32_t
		constexpr auto StreamingDistanceMultiplier = 0x5c0; // float
		constexpr auto LODInfo = 0x5d0; // TArray<FSkelMeshComponentLODInfo>
		constexpr auto VisibilityBasedAnimTickOption = 0x604; // EVisibilityBasedAnimTickOption
		constexpr auto bOverrideMinLod = 0x606; // char : 1
		constexpr auto bUseBoundsFromMasterPoseComponent = 0x606; // char : 1
		constexpr auto bForceWireframe = 0x606; // char : 1
		constexpr auto bDisplayBones = 0x606; // char : 1
		constexpr auto bDisableMorphTarget = 0x606; // char : 1
		constexpr auto bHideSkin = 0x607; // char : 1
		constexpr auto bPerBoneMotionBlur = 0x607; // char : 1
		constexpr auto bComponentUseFixedSkelBounds = 0x607; // char : 1
		constexpr auto bConsiderAllBodiesForBounds = 0x607; // char : 1
		constexpr auto bSyncAttachParentLOD = 0x607; // char : 1
		constexpr auto bCanHighlightSelectedSections = 0x607; // char : 1
		constexpr auto bRecentlyRendered = 0x607; // char : 1
		constexpr auto bCastCapsuleDirectShadow = 0x607; // char : 1
		constexpr auto bCastCapsuleIndirectShadow = 0x608; // char : 1
		constexpr auto bCPUSkinning = 0x608; // char : 1
		constexpr auto bEnableUpdateRateOptimizations = 0x608; // char : 1
		constexpr auto bDisplayDebugUpdateRateOptimizations = 0x608; // char : 1
		constexpr auto bRenderStatic = 0x608; // char : 1
		constexpr auto bIgnoreMasterPoseComponentLOD = 0x608; // char : 1
		constexpr auto bCachedLocalBoundsUpToDate = 0x609; // char : 1
		constexpr auto bForceMeshObjectUpdate = 0x609; // char : 1
		constexpr auto CapsuleIndirectShadowMinVisibility = 0x60c; // float
		constexpr auto CachedWorldSpaceBounds = 0x620; // FBoxSphereBounds
		constexpr auto CachedWorldToLocalTransform = 0x640; // FMatrix
	}

	namespace n_UForceFeedbackAttenuation {
		constexpr auto Attenuation = 0x28; // FForceFeedbackAttenuationSettings
	}

	namespace n_UAkRoomComponent {
		constexpr auto bEnable = 0x1f8; // char : 1
		constexpr auto NextLowerPriorityComponent = 0x200; // UAkRoomComponent*
		constexpr auto Priority = 0x208; // float
		constexpr auto WallOcclusion = 0x20c; // float
		constexpr auto RoomTone = 0x210; // UAkAudioEvent*
	}

	namespace n_ANavSystemConfigOverride {
		constexpr auto NavigationSystemConfig = 0x220; // UNavigationSystemConfig*
		constexpr auto OverridePolicy = 0x228; // ENavSystemOverridePolicy
		constexpr auto bLoadOnClient = 0x229; // char : 1
	}

	namespace n_ULayer {
		constexpr auto LayerName = 0x28; // FName
		constexpr auto bIsVisible = 0x30; // char : 1
		constexpr auto ActorStats = 0x38; // TArray<FLayerActorStats>
	}

	namespace n_ANavigationTestingActor {
		constexpr auto CapsuleComponent = 0x230; // UCapsuleComponent*
		constexpr auto InvokerComponent = 0x238; // UNavigationInvokerComponent*
		constexpr auto bActAsNavigationInvoker = 0x240; // char : 1
		constexpr auto NavAgentProps = 0x248; // FNavAgentProperties
		constexpr auto QueryingExtent = 0x278; // FVector
		constexpr auto MyNavData = 0x288; // ANavigationData*
		constexpr auto ProjectedLocation = 0x290; // FVector
		constexpr auto bProjectedLocationValid = 0x29c; // char : 1
		constexpr auto bSearchStart = 0x29c; // char : 1
		constexpr auto CostLimitFactor = 0x2a0; // float
		constexpr auto MinimumCostLimit = 0x2a4; // float
		constexpr auto bBacktracking = 0x2a8; // char : 1
		constexpr auto bUseHierarchicalPathfinding = 0x2a8; // char : 1
		constexpr auto bGatherDetailedInfo = 0x2a8; // char : 1
		constexpr auto bDrawDistanceToWall = 0x2a8; // char : 1
		constexpr auto bShowNodePool = 0x2a8; // char : 1
		constexpr auto bShowBestPath = 0x2a8; // char : 1
		constexpr auto bShowDiffWithPreviousStep = 0x2a8; // char : 1
		constexpr auto bShouldBeVisibleInGame = 0x2a8; // char : 1
		constexpr auto CostDisplayMode = 0x2ac; // ENavCostDisplay
		constexpr auto TextCanvasOffset = 0x2b0; // FVector2D
		constexpr auto bPathExist = 0x2b8; // char : 1
		constexpr auto bPathIsPartial = 0x2b8; // char : 1
		constexpr auto bPathSearchOutOfNodes = 0x2b8; // char : 1
		constexpr auto PathfindingTime = 0x2bc; // float
		constexpr auto PathCost = 0x2c0; // float
		constexpr auto PathfindingSteps = 0x2c4; // int32_t
		constexpr auto OtherActor = 0x2c8; // ANavigationTestingActor*
		constexpr auto FilterClass = 0x2d0; // UNavigationQueryFilter*
		constexpr auto ShowStepIndex = 0x2d8; // int32_t
		constexpr auto OffsetFromCornersDistance = 0x2dc; // float
	}

	namespace n_UParticleModuleBeamNoise {
		constexpr auto bLowFreq_Enabled = 0x30; // char : 1
		constexpr auto Frequency = 0x34; // int32_t
		constexpr auto Frequency_LowRange = 0x38; // int32_t
		constexpr auto NoiseRange = 0x40; // FRawDistributionVector
		constexpr auto NoiseRangeScale = 0x88; // FRawDistributionFloat
		constexpr auto bNRScaleEmitterTime = 0xb8; // char : 1
		constexpr auto NoiseSpeed = 0xc0; // FRawDistributionVector
		constexpr auto bSmooth = 0x108; // char : 1
		constexpr auto NoiseLockRadius = 0x10c; // float
		constexpr auto bNoiseLock = 0x110; // char : 1
		constexpr auto bOscillate = 0x110; // char : 1
		constexpr auto NoiseLockTime = 0x114; // float
		constexpr auto NoiseTension = 0x118; // float
		constexpr auto bUseNoiseTangents = 0x11c; // char : 1
		constexpr auto NoiseTangentStrength = 0x120; // FRawDistributionFloat
		constexpr auto NoiseTessellation = 0x150; // int32_t
		constexpr auto bTargetNoise = 0x154; // char : 1
		constexpr auto FrequencyDistance = 0x158; // float
		constexpr auto bApplyNoiseScale = 0x15c; // char : 1
		constexpr auto NoiseScale = 0x160; // FRawDistributionFloat
	}

	namespace n_USourceEffectPhaserPreset {
		constexpr auto Settings = 0xa0; // FSourceEffectPhaserSettings
	}

	namespace n_UEndTurnCallbackProxy {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_UAnimBoneCompressionCodec {
		constexpr auto Description = 0x28; // FString
	}

	namespace n_ASphereReflectionCapture {
		constexpr auto DrawCaptureRadius = 0x228; // UDrawSphereComponent*
	}

	namespace n_UMovieSceneCameraAnimSection {
		constexpr auto AnimData = 0xe8; // FMovieSceneCameraAnimSectionData
		constexpr auto CameraAnim = 0x108; // UCameraAnim*
		constexpr auto PlayRate = 0x110; // float
		constexpr auto PlayScale = 0x114; // float
		constexpr auto BlendInTime = 0x118; // float
		constexpr auto BlendOutTime = 0x11c; // float
		constexpr auto bLooping = 0x120; // bool
	}

	namespace n_UPawnMovementComponent {
		constexpr auto PawnOwner = 0x130; // APawn*
	}

	namespace n_UAnimMontage {
		constexpr auto BlendIn = 0xa8; // FAlphaBlend
		constexpr auto BlendInTime = 0xd8; // float
		constexpr auto BlendOut = 0xe0; // FAlphaBlend
		constexpr auto BlendOutTime = 0x110; // float
		constexpr auto BlendOutTriggerTime = 0x114; // float
		constexpr auto SyncGroup = 0x118; // FName
		constexpr auto SyncSlotIndex = 0x120; // int32_t
		constexpr auto MarkerData = 0x128; // FMarkerSyncData
		constexpr auto CompositeSections = 0x148; // TArray<FCompositeSection>
		constexpr auto SlotAnimTracks = 0x158; // TArray<FSlotAnimationTrack>
		constexpr auto BranchingPoints = 0x168; // TArray<FBranchingPoint>
		constexpr auto bEnableRootMotionTranslation = 0x178; // bool
		constexpr auto bEnableRootMotionRotation = 0x179; // bool
		constexpr auto bEnableAutoBlendOut = 0x17a; // bool
		constexpr auto RootMotionRootLock = 0x17b; // ERootMotionRootLock
		constexpr auto BranchingPointMarkers = 0x180; // TArray<FBranchingPointMarker>
		constexpr auto BranchingPointStateNotifyIndices = 0x190; // TArray<int32_t>
		constexpr auto TimeStretchCurve = 0x1a0; // FTimeStretchCurve
		constexpr auto TimeStretchCurveName = 0x1c8; // FName
	}

	namespace n_AAudioVolume {
		constexpr auto Priority = 0x258; // float
		constexpr auto bEnabled = 0x25c; // char : 1
		constexpr auto Settings = 0x260; // FReverbSettings
		constexpr auto AmbientZoneSettings = 0x280; // FInteriorSettings
		constexpr auto SubmixSendSettings = 0x2a8; // TArray<FAudioVolumeSubmixSendSettings>
		constexpr auto SubmixOverrideSettings = 0x2b8; // TArray<FAudioVolumeSubmixOverrideSettings>
	}

	namespace n_UMaterialExpressionStaticComponentMaskParameter {
		constexpr auto DefaultR = 0x58; // char : 1
		constexpr auto DefaultG = 0x58; // char : 1
		constexpr auto DefaultB = 0x58; // char : 1
		constexpr auto DefaultA = 0x58; // char : 1
	}

	namespace n_UDataDrivenConsoleVariableSettings {
		constexpr auto CVarsArray = 0x50; // TArray<FDataDrivenConsoleVariable>
	}

	namespace n_UCollisionProfile {
		constexpr auto Profiles = 0x38; // TArray<FCollisionResponseTemplate>
		constexpr auto DefaultChannelResponses = 0x48; // TArray<FCustomChannelSetup>
		constexpr auto EditProfiles = 0x58; // TArray<FCustomProfile>
		constexpr auto ProfileRedirects = 0x68; // TArray<FRedirector>
		constexpr auto CollisionChannelRedirects = 0x78; // TArray<FRedirector>
	}

	namespace n_AWheeledVehicle {
		constexpr auto Mesh = 0x280; // USkeletalMeshComponent*
		constexpr auto VehicleMovement = 0x288; // UWheeledVehicleMovementComponent*
	}

	namespace n_UPortalWarsDropdownWidget {
		constexpr auto DefaultOptions = 0x368; // TArray<FText>
		constexpr auto DefaultIndex = 0x378; // int32_t
		constexpr auto ComboBox = 0x380; // UComboBoxString*
	}

	namespace n_UPortalWarsNotificationManager {
		constexpr auto MessageDialogWidgetClass = 0x30; // UPortalWarsDialogWidget*
		constexpr auto RewardReceivedWidgetClass = 0x38; // UPortalWarsDialogWidget*
		constexpr auto ChallengeDialogWidgetClass = 0x40; // UPortalWarsDialogWidget*
		constexpr auto StreakIncreaseWidgetClass = 0x48; // UPortalWarsDialogWidget*
		constexpr auto UnlockDialogWidgetClass = 0x50; // UPortalWarsUnlockDialogWidget*
		constexpr auto ProgressionDialogWidgetClass = 0x58; // UPortalWarsProgressionUpdateDialogWidget*
		constexpr auto BattlePassPurchaseDialogWidgetClass = 0x60; // UPortalWarsBPPurchaseDialogWidget*
		constexpr auto HappyHourWidgetClass = 0x68; // UPortalWarsDialogWidget*
		constexpr auto PlaylistActiveWidgetClass = 0x70; // UPortalWarsDialogWidget*
		constexpr auto GameSessionReconnectWidgetClass = 0x78; // UPortalWarsDialogWidget*
		constexpr auto LimitedTimeOfferWidgetClass = 0x80; // UPortalWarsDialogWidget*
		constexpr auto PostGameOverviewWidgetClass = 0x88; // UPortalWarsDialogWidget*
		constexpr auto RankUpdateWidgetClass = 0x90; // UPortalWarsDialogWidget*
		constexpr auto DialogObjects = 0xa0; // TArray<UPortalWarsDialogWidget*>
	}

	namespace n_UParticleModuleLocationPrimitiveSphere_Seeded {
		constexpr auto RandomSeedInfo = 0xe0; // FParticleRandomSeedInfo
	}

	namespace n_UDatasmithLightComponentTemplate {
		constexpr auto bVisible = 0x30; // char : 1
		constexpr auto CastShadows = 0x34; // char : 1
		constexpr auto bUseTemperature = 0x34; // char : 1
		constexpr auto bUseIESBrightness = 0x34; // char : 1
		constexpr auto Intensity = 0x38; // float
		constexpr auto Temperature = 0x3c; // float
		constexpr auto IESBrightnessScale = 0x40; // float
		constexpr auto LightColor = 0x44; // FLinearColor
		constexpr auto LightFunctionMaterial = 0x58; // UMaterialInterface*
		constexpr auto IESTexture = 0x60; // UTextureLightProfile*
	}

	namespace n_ULandscapeGrassType {
		constexpr auto GrassVarieties = 0x28; // TArray<FGrassVariety>
		constexpr auto bEnableDensityScaling = 0x38; // char : 1
		constexpr auto GrassMesh = 0x40; // UStaticMesh*
		constexpr auto GrassDensity = 0x48; // float
		constexpr auto PlacementJitter = 0x4c; // float
		constexpr auto StartCullDistance = 0x50; // int32_t
		constexpr auto EndCullDistance = 0x54; // int32_t
		constexpr auto RandomRotation = 0x58; // bool
		constexpr auto AlignToSurface = 0x59; // bool
	}

	namespace n_USceneCaptureComponentCube {
		constexpr auto TextureTarget = 0x2c0; // UTextureRenderTargetCube*
		constexpr auto bCaptureRotation = 0x2c8; // bool
		constexpr auto TextureTargetLeft = 0x2d0; // UTextureRenderTargetCube*
		constexpr auto TextureTargetRight = 0x2d8; // UTextureRenderTargetCube*
		constexpr auto TextureTargetODS = 0x2e0; // UTextureRenderTarget2D*
		constexpr auto IPD = 0x2e8; // float
	}

	namespace n_UAkSettings {
		constexpr auto MaxSimultaneousReverbVolumes = 0x28; // char
		constexpr auto WwiseProjectPath = 0x30; // FFilePath
		constexpr auto WwiseSoundBankFolder = 0x40; // FDirectoryPath
		constexpr auto bAutoConnectToWAAPI = 0x50; // bool
		constexpr auto DefaultOcclusionCollisionChannel = 0x51; // ECollisionChannel
		constexpr auto bEnableMultiCoreRendering = 0x52; // bool
		constexpr auto MigratedEnableMultiCoreRendering = 0x53; // bool
		constexpr auto WwiseWindowsInstallationPath = 0x58; // FDirectoryPath
		constexpr auto WwiseMacInstallationPath = 0x68; // FFilePath
	}

	namespace n_UScrollBoxSlot {
		constexpr auto Padding = 0x38; // FMargin
		constexpr auto HorizontalAlignment = 0x48; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x49; // EVerticalAlignment
	}

	namespace n_UAnimStreamable {
		constexpr auto NumFrames = 0xa8; // int32_t
		constexpr auto Interpolation = 0xac; // EAnimInterpolationType
		constexpr auto RetargetSource = 0xb0; // FName
		constexpr auto BoneCompressionSettings = 0xc8; // UAnimBoneCompressionSettings*
		constexpr auto CurveCompressionSettings = 0xd0; // UAnimCurveCompressionSettings*
		constexpr auto bEnableRootMotion = 0xd8; // bool
		constexpr auto RootMotionRootLock = 0xd9; // ERootMotionRootLock
		constexpr auto bForceRootLock = 0xda; // bool
		constexpr auto bUseNormalizedRootMotionScale = 0xdb; // bool
	}

	namespace n_UMovieSceneAkAudioEventSection {
		constexpr auto Event = 0x128; // UAkAudioEvent*
		constexpr auto RetriggerEvent = 0x130; // bool
		constexpr auto ScrubTailLengthMs = 0x134; // int32_t
		constexpr auto StopAtSectionEnd = 0x138; // bool
		constexpr auto EventName = 0x140; // FString
		constexpr auto MaxSourceDuration = 0x170; // float
		constexpr auto MaxDurationSourceID = 0x178; // FString
	}

	namespace n_UGameNetworkManagerSettings {
		constexpr auto MinDynamicBandwidth = 0x28; // int32_t
		constexpr auto MaxDynamicBandwidth = 0x2c; // int32_t
		constexpr auto TotalNetBandwidth = 0x30; // int32_t
		constexpr auto BadPingThreshold = 0x34; // int32_t
		constexpr auto bIsStandbyCheckingEnabled = 0x38; // char : 1
		constexpr auto StandbyRxCheatTime = 0x3c; // float
		constexpr auto StandbyTxCheatTime = 0x40; // float
		constexpr auto PercentMissingForRxStandby = 0x44; // float
		constexpr auto PercentMissingForTxStandby = 0x48; // float
		constexpr auto PercentForBadPing = 0x4c; // float
		constexpr auto JoinInProgressStandbyWaitTime = 0x50; // float
	}

	namespace n_UPortalWarsLeaderboardEntryWidget {
		constexpr auto PositionText = 0x640; // UTextBlock*
		constexpr auto PositionImage = 0x648; // UImage*
		constexpr auto PositionSwitcher = 0x650; // UWidgetSwitcher*
		constexpr auto PositionImages = 0x658; // TMap<int32_t, UTexture2D*>
		constexpr auto DefaultButtonStyle = 0x6a8; // FButtonStyle
		constexpr auto PlacementButtonStyle = 0x920; // FButtonStyle
	}

	namespace n_USoundNodeModulatorContinuous {
		constexpr auto PitchModulationParams = 0x48; // FModulatorContinuousParams
		constexpr auto VolumeModulationParams = 0x68; // FModulatorContinuousParams
	}

	namespace n_UMaterialExpressionDistanceFieldsRenderingSwitch {
		constexpr auto No = 0x40; // FExpressionInput
		constexpr auto Yes = 0x54; // FExpressionInput
	}

	namespace n_UInterpToMovementComponent {
		constexpr auto Duration = 0xf0; // float
		constexpr auto bPauseOnImpact = 0xf4; // char : 1
		constexpr auto bSweep = 0xf8; // bool
		constexpr auto TeleportType = 0xf9; // ETeleportType
		constexpr auto BehaviourType = 0xfa; // EInterpToBehaviourType
		constexpr auto bCheckIfStillInWorld = 0xfb; // bool
		constexpr auto bForceSubStepping = 0xfc; // char : 1
		constexpr auto OnInterpToReverse = 0x100; // FMulticastInlineDelegate
		constexpr auto OnInterpToStop = 0x110; // FMulticastInlineDelegate
		constexpr auto OnWaitBeginDelegate = 0x120; // FMulticastInlineDelegate
		constexpr auto OnWaitEndDelegate = 0x130; // FMulticastInlineDelegate
		constexpr auto OnResetDelegate = 0x140; // FMulticastInlineDelegate
		constexpr auto MaxSimulationTimeStep = 0x150; // float
		constexpr auto MaxSimulationIterations = 0x154; // int32_t
		constexpr auto ControlPoints = 0x158; // TArray<FInterpControlPoint>
	}

	namespace n_UPortalWarsRedeemKeyDialogWidget {
		constexpr auto KeyInput = 0x3c8; // UEditableTextBox*
	}

	namespace n_UARTexture {
		constexpr auto TextureType = 0x178; // EARTextureType
		constexpr auto Timestamp = 0x17c; // float
		constexpr auto ExternalTextureGuid = 0x180; // FGuid
		constexpr auto Size = 0x190; // FVector2D
	}

	namespace n_UInterpTrackInstBoolProp {
		constexpr auto ResetBool = 0x60; // bool
	}

	namespace n_USkeletalMeshSimplificationSettings {
		constexpr auto SkeletalMeshReductionModuleName = 0x38; // FName
	}

	namespace n_UNiagaraLightRendererProperties {
		constexpr auto bUseInverseSquaredFalloff = 0x88; // char : 1
		constexpr auto bAffectsTranslucency = 0x88; // char : 1
		constexpr auto bAlphaScalesBrightness = 0x88; // char : 1
		constexpr auto RadiusScale = 0x8c; // float
		constexpr auto DefaultExponent = 0x90; // float
		constexpr auto ColorAdd = 0x94; // FVector
		constexpr auto RendererVisibility = 0xa0; // int32_t
		constexpr auto LightRenderingEnabledBinding = 0xa8; // FNiagaraVariableAttributeBinding
		constexpr auto LightExponentBinding = 0x100; // FNiagaraVariableAttributeBinding
		constexpr auto PositionBinding = 0x158; // FNiagaraVariableAttributeBinding
		constexpr auto ColorBinding = 0x1b0; // FNiagaraVariableAttributeBinding
		constexpr auto RadiusBinding = 0x208; // FNiagaraVariableAttributeBinding
		constexpr auto VolumetricScatteringBinding = 0x260; // FNiagaraVariableAttributeBinding
		constexpr auto RendererVisibilityTagBinding = 0x2b8; // FNiagaraVariableAttributeBinding
	}

	namespace n_UAIAsyncTaskBlueprintProxy {
		constexpr auto OnSuccess = 0x28; // FMulticastInlineDelegate
		constexpr auto OnFail = 0x38; // FMulticastInlineDelegate
	}

	namespace n_UEditableGameplayTagQueryExpression_AnyExprMatch {
		constexpr auto Expressions = 0x28; // TArray<UEditableGameplayTagQueryExpression*>
	}

	namespace n_UPortalWarsModeSelectorWidget {
		constexpr auto SelectedWidget = 0x340; // UPortalWarsModeSelectorEntryWidget*
		constexpr auto ItemsPanel = 0x348; // UPanelWidget*
		constexpr auto ModeSelectorEntryClass = 0x350; // UPortalWarsModeSelectorEntryWidget*
		constexpr auto ModeImage = 0x358; // UImage*
		constexpr auto ModeName = 0x360; // UTextBlock*
		constexpr auto ModeDescription = 0x368; // UTextBlock*
		constexpr auto PresetOptionsButton = 0x370; // UPortalWarsButtonWidget*
		constexpr auto PresetOptionsDialogClass = 0x378; // UPortalWarsFileOptionsDialogWidget*
	}

	namespace n_UAnimNotify_PlayMontageNotify {
		constexpr auto NotifyName = 0x38; // FName
	}

	namespace n_UMaterialExpressionSmoothStep {
		constexpr auto Min = 0x40; // FExpressionInput
		constexpr auto Max = 0x54; // FExpressionInput
		constexpr auto Value = 0x68; // FExpressionInput
		constexpr auto ConstMin = 0x7c; // float
		constexpr auto ConstMax = 0x80; // float
		constexpr auto ConstValue = 0x84; // float
	}

	namespace n_UPortalWarsLoadingScreenWidget {
		constexpr auto TipRichTextBlock = 0x2a8; // URichTextBlock*
	}

	namespace n_UAIDataProvider_QueryParams {
		constexpr auto ParamName = 0x28; // FName
		constexpr auto FloatValue = 0x30; // float
		constexpr auto IntValue = 0x34; // int32_t
		constexpr auto BoolValue = 0x38; // bool
	}

	namespace n_UActorComponent {
		constexpr auto PrimaryComponentTick = 0x30; // FActorComponentTickFunction
		constexpr auto ComponentTags = 0x60; // TArray<FName>
		constexpr auto AssetUserData = 0x70; // TArray<UAssetUserData*>
		constexpr auto UCSSerializationIndex = 0x84; // int32_t
		constexpr auto bNetAddressable = 0x88; // char : 1
		constexpr auto bReplicates = 0x88; // char : 1
		constexpr auto bAutoActivate = 0x89; // char : 1
		constexpr auto bIsActive = 0x8a; // char : 1
		constexpr auto bEditableWhenInherited = 0x8a; // char : 1
		constexpr auto bCanEverAffectNavigation = 0x8a; // char : 1
		constexpr auto bIsEditorOnly = 0x8a; // char : 1
		constexpr auto CreationMethod = 0x8c; // EComponentCreationMethod
		constexpr auto OnComponentActivated = 0x8d; // FMulticastSparseDelegate
		constexpr auto OnComponentDeactivated = 0x8e; // FMulticastSparseDelegate
		constexpr auto UCSModifiedProperties = 0x90; // TArray<FSimpleMemberReference>
	}

	namespace n_ASpotLight {
		constexpr auto SpotLightComponent = 0x230; // USpotLightComponent*
	}

	namespace n_UBTTask_FindPickup {
		constexpr auto NearPickupRadius = 0x70; // float
	}

	namespace n_UDatasmithPostProcessVolumeTemplate {
		constexpr auto Settings = 0x30; // FDatasmithPostProcessSettingsTemplate
		constexpr auto bEnabled = 0x70; // char : 1
		constexpr auto bUnbound = 0x70; // char : 1
	}

	namespace n_ARecastNavMesh {
		constexpr auto bDrawTriangleEdges = 0x428; // char : 1
		constexpr auto bDrawPolyEdges = 0x428; // char : 1
		constexpr auto bDrawFilledPolys = 0x428; // char : 1
		constexpr auto bDrawNavMeshEdges = 0x428; // char : 1
		constexpr auto bDrawTileBounds = 0x428; // char : 1
		constexpr auto bDrawPathCollidingGeometry = 0x428; // char : 1
		constexpr auto bDrawTileLabels = 0x428; // char : 1
		constexpr auto bDrawPolygonLabels = 0x428; // char : 1
		constexpr auto bDrawDefaultPolygonCost = 0x429; // char : 1
		constexpr auto bDrawPolygonFlags = 0x429; // char : 1
		constexpr auto bDrawLabelsOnPathNodes = 0x429; // char : 1
		constexpr auto bDrawNavLinks = 0x429; // char : 1
		constexpr auto bDrawFailedNavLinks = 0x429; // char : 1
		constexpr auto bDrawClusters = 0x429; // char : 1
		constexpr auto bDrawOctree = 0x429; // char : 1
		constexpr auto bDrawOctreeDetails = 0x429; // char : 1
		constexpr auto bDrawMarkedForbiddenPolys = 0x42a; // char : 1
		constexpr auto bDistinctlyDrawTilesBeingBuilt = 0x42a; // char : 1
		constexpr auto DrawOffset = 0x42c; // float
		constexpr auto bFixedTilePoolSize = 0x430; // char : 1
		constexpr auto TilePoolSize = 0x434; // int32_t
		constexpr auto TileSizeUU = 0x438; // float
		constexpr auto CellSize = 0x43c; // float
		constexpr auto CellHeight = 0x440; // float
		constexpr auto AgentRadius = 0x444; // float
		constexpr auto AgentHeight = 0x448; // float
		constexpr auto AgentMaxSlope = 0x44c; // float
		constexpr auto AgentMaxStepHeight = 0x450; // float
		constexpr auto MinRegionArea = 0x454; // float
		constexpr auto MergeRegionSize = 0x458; // float
		constexpr auto MaxSimplificationError = 0x45c; // float
		constexpr auto MaxSimultaneousTileGenerationJobsCount = 0x460; // int32_t
		constexpr auto TileNumberHardLimit = 0x464; // int32_t
		constexpr auto PolyRefTileBits = 0x468; // int32_t
		constexpr auto PolyRefNavPolyBits = 0x46c; // int32_t
		constexpr auto PolyRefSaltBits = 0x470; // int32_t
		constexpr auto NavMeshOriginOffset = 0x474; // FVector
		constexpr auto DefaultDrawDistance = 0x480; // float
		constexpr auto DefaultMaxSearchNodes = 0x484; // float
		constexpr auto DefaultMaxHierarchicalSearchNodes = 0x488; // float
		constexpr auto RegionPartitioning = 0x48c; // ERecastPartitioning
		constexpr auto LayerPartitioning = 0x48d; // ERecastPartitioning
		constexpr auto RegionChunkSplits = 0x490; // int32_t
		constexpr auto LayerChunkSplits = 0x494; // int32_t
		constexpr auto bSortNavigationAreasByCost = 0x498; // char : 1
		constexpr auto bPerformVoxelFiltering = 0x498; // char : 1
		constexpr auto bMarkLowHeightAreas = 0x498; // char : 1
		constexpr auto bUseExtraTopCellWhenMarkingAreas = 0x498; // char : 1
		constexpr auto bFilterLowSpanSequences = 0x498; // char : 1
		constexpr auto bFilterLowSpanFromTileCache = 0x498; // char : 1
		constexpr auto bDoFullyAsyncNavDataGathering = 0x498; // char : 1
		constexpr auto bUseBetterOffsetsFromCorners = 0x498; // char : 1
		constexpr auto bStoreEmptyTileLayers = 0x499; // char : 1
		constexpr auto bUseVirtualFilters = 0x499; // char : 1
		constexpr auto bAllowNavLinkAsPathEnd = 0x499; // char : 1
		constexpr auto bUseVoxelCache = 0x499; // char : 1
		constexpr auto TileSetUpdateInterval = 0x49c; // float
		constexpr auto HeuristicScale = 0x4a0; // float
		constexpr auto VerticalDeviationFromGroundCompensation = 0x4a4; // float
	}

	namespace n_UARBasicLightEstimate {
		constexpr auto AmbientIntensityLumens = 0x28; // float
		constexpr auto AmbientColorTemperatureKelvin = 0x2c; // float
		constexpr auto AmbientColor = 0x30; // FLinearColor
	}

	namespace n_AMagicLeapARPinRenderer {
		constexpr auto bInfoActorsVisibilityOverride = 0x220; // bool
		constexpr auto AllInfoActors = 0x228; // TMap<FGuid, AMagicLeapARPinInfoActorBase*>
		constexpr auto ClassToSpawn = 0x280; // AMagicLeapARPinInfoActorBase*
	}

	namespace n_USourceEffectChorusPreset {
		constexpr auto Settings = 0x108; // FSourceEffectChorusSettings
	}

	namespace n_USizeBox {
		constexpr auto WidthOverride = 0x130; // float
		constexpr auto HeightOverride = 0x134; // float
		constexpr auto MinDesiredWidth = 0x138; // float
		constexpr auto MinDesiredHeight = 0x13c; // float
		constexpr auto MaxDesiredWidth = 0x140; // float
		constexpr auto MaxDesiredHeight = 0x144; // float
		constexpr auto MinAspectRatio = 0x148; // float
		constexpr auto MaxAspectRatio = 0x14c; // float
		constexpr auto bOverride_WidthOverride = 0x150; // char : 1
		constexpr auto bOverride_HeightOverride = 0x150; // char : 1
		constexpr auto bOverride_MinDesiredWidth = 0x150; // char : 1
		constexpr auto bOverride_MinDesiredHeight = 0x150; // char : 1
		constexpr auto bOverride_MaxDesiredWidth = 0x150; // char : 1
		constexpr auto bOverride_MaxDesiredHeight = 0x150; // char : 1
		constexpr auto bOverride_MinAspectRatio = 0x150; // char : 1
		constexpr auto bOverride_MaxAspectRatio = 0x150; // char : 1
	}

	namespace n_UPortalWarsEscapeMenuWidget {
		constexpr auto RewardCenterButton = 0x3b0; // UPortalWarsButtonWidget*
		constexpr auto SettingsButton = 0x3b8; // UPortalWarsButtonWidget*
		constexpr auto RedeemCodeButton = 0x3c0; // UPortalWarsButtonWidget*
		constexpr auto SwitchProfileButton = 0x3c8; // UPortalWarsButtonWidget*
		constexpr auto LeavePartyButton = 0x3d0; // UPortalWarsButtonWidget*
		constexpr auto ExitButton = 0x3d8; // UPortalWarsButtonWidget*
		constexpr auto SettingsDialogWidgetClass = 0x3e0; // UPortalWarsDialogWidget*
		constexpr auto RedeemKeyDialogWidgetClass = 0x3e8; // UPortalWarsDialogWidget*
		constexpr auto QuitGameDialogWidgetClass = 0x3f0; // UPortalWarsDialogWidget*
	}

	namespace n_UVectorFieldStatic {
		constexpr auto SizeX = 0x48; // int32_t
		constexpr auto SizeY = 0x4c; // int32_t
		constexpr auto SizeZ = 0x50; // int32_t
		constexpr auto bAllowCPUAccess = 0x54; // bool
	}

	namespace n_UBrushStampIndicator {
		constexpr auto BrushRadius = 0x38; // float
		constexpr auto BrushFalloff = 0x3c; // float
		constexpr auto BrushPosition = 0x40; // FVector
		constexpr auto BrushNormal = 0x4c; // FVector
		constexpr auto bDrawIndicatorLines = 0x58; // bool
		constexpr auto bDrawRadiusCircle = 0x59; // bool
		constexpr auto SampleStepCount = 0x5c; // int32_t
		constexpr auto LineColor = 0x60; // FLinearColor
		constexpr auto LineThickness = 0x70; // float
		constexpr auto bDepthTested = 0x74; // bool
		constexpr auto bDrawSecondaryLines = 0x75; // bool
		constexpr auto SecondaryLineThickness = 0x78; // float
		constexpr auto SecondaryLineColor = 0x7c; // FLinearColor
		constexpr auto AttachedComponent = 0x90; // UPrimitiveComponent*
	}

	namespace n_UMaterialExpressionDistanceToNearestSurface {
		constexpr auto Position = 0x40; // FExpressionInput
	}

	namespace n_ACharacter {
		constexpr auto Mesh = 0x280; // USkeletalMeshComponent*
		constexpr auto CharacterMovement = 0x288; // UCharacterMovementComponent*
		constexpr auto CapsuleComponent = 0x290; // UCapsuleComponent*
		constexpr auto BasedMovement = 0x298; // FBasedMovementInfo
		constexpr auto ReplicatedBasedMovement = 0x2c8; // FBasedMovementInfo
		constexpr auto AnimRootMotionTranslationScale = 0x2f8; // float
		constexpr auto BaseTranslationOffset = 0x2fc; // FVector
		constexpr auto BaseRotationOffset = 0x310; // FQuat
		constexpr auto ReplicatedServerLastTransformUpdateTimeStamp = 0x320; // float
		constexpr auto ReplayLastTransformUpdateTimeStamp = 0x324; // float
		constexpr auto ReplicatedMovementMode = 0x328; // char
		constexpr auto bInBaseReplication = 0x329; // bool
		constexpr auto CrouchedEyeHeight = 0x32c; // float
		constexpr auto bIsCrouched = 0x330; // char : 1
		constexpr auto bProxyIsJumpForceApplied = 0x330; // char : 1
		constexpr auto bPressedJump = 0x330; // char : 1
		constexpr auto bClientUpdating = 0x330; // char : 1
		constexpr auto bClientWasFalling = 0x330; // char : 1
		constexpr auto bClientResimulateRootMotion = 0x330; // char : 1
		constexpr auto bClientResimulateRootMotionSources = 0x330; // char : 1
		constexpr auto bSimGravityDisabled = 0x330; // char : 1
		constexpr auto bClientCheckEncroachmentOnNetUpdate = 0x331; // char : 1
		constexpr auto bServerMoveIgnoreRootMotion = 0x331; // char : 1
		constexpr auto bWasJumping = 0x331; // char : 1
		constexpr auto JumpKeyHoldTime = 0x334; // float
		constexpr auto JumpForceTimeRemaining = 0x338; // float
		constexpr auto ProxyJumpForceStartedTime = 0x33c; // float
		constexpr auto JumpMaxHoldTime = 0x340; // float
		constexpr auto JumpMaxCount = 0x344; // int32_t
		constexpr auto JumpCurrentCount = 0x348; // int32_t
		constexpr auto JumpCurrentCountPreJump = 0x34c; // int32_t
		constexpr auto OnReachedJumpApex = 0x358; // FMulticastInlineDelegate
		constexpr auto MovementModeChangedDelegate = 0x378; // FMulticastInlineDelegate
		constexpr auto OnCharacterMovementUpdated = 0x388; // FMulticastInlineDelegate
		constexpr auto SavedRootMotion = 0x398; // FRootMotionSourceGroup
		constexpr auto ClientRootMotionParams = 0x3d0; // FRootMotionMovementParams
		constexpr auto RootMotionRepMoves = 0x410; // TArray<FSimulatedRootMotionReplicatedMove>
		constexpr auto RepRootMotion = 0x420; // FRepRootMotionMontage
	}

	namespace n_UPortalWarsItemShopInspectWidget {
		constexpr auto ItemsRoot = 0x3c0; // UWidget*
		constexpr auto ItemsPanel = 0x3c8; // UPortalWarsCustomScrollWidget*
		constexpr auto ItemEntryWidgetClass = 0x3d0; // UPortalWarsItemShopEntry*
		constexpr auto PurchasePanel = 0x3d8; // UPortalWarsItemShopPurchasePanel*
		constexpr auto IndividualPurchasePanel = 0x3e0; // UPortalWarsItemShopPurchasePanel*
		constexpr auto PurchasableDescriptionRoot = 0x3e8; // UWidget*
		constexpr auto PurchasableDescriptionText = 0x3f0; // UTextBlock*
		constexpr auto PurchaseDialogWidgetClass = 0x3f8; // UPortalWarsItemPurchaseDialog*
	}

	namespace n_UParticleModuleLocationDirect {
		constexpr auto Location = 0x30; // FRawDistributionVector
		constexpr auto LocationOffset = 0x78; // FRawDistributionVector
		constexpr auto ScaleFactor = 0xc0; // FRawDistributionVector
		constexpr auto Direction = 0x108; // FRawDistributionVector
	}

	namespace n_USceneComponent {
		constexpr auto PhysicsVolume = 0xb8; // TWeakObjectPtr<APhysicsVolume>
		constexpr auto AttachParent = 0xc0; // USceneComponent*
		constexpr auto AttachSocketName = 0xc8; // FName
		constexpr auto AttachChildren = 0xd0; // TArray<USceneComponent*>
		constexpr auto ClientAttachedChildren = 0xe0; // TArray<USceneComponent*>
		constexpr auto RelativeLocation = 0x11c; // FVector
		constexpr auto RelativeRotation = 0x128; // FRotator
		constexpr auto RelativeScale3D = 0x134; // FVector
		constexpr auto ComponentVelocity = 0x140; // FVector
		constexpr auto bComponentToWorldUpdated = 0x14c; // char : 1
		constexpr auto bAbsoluteLocation = 0x14c; // char : 1
		constexpr auto bAbsoluteRotation = 0x14c; // char : 1
		constexpr auto bAbsoluteScale = 0x14c; // char : 1
		constexpr auto bVisible = 0x14c; // char : 1
		constexpr auto bShouldBeAttached = 0x14c; // char : 1
		constexpr auto bShouldSnapLocationWhenAttached = 0x14c; // char : 1
		constexpr auto bShouldSnapRotationWhenAttached = 0x14d; // char : 1
		constexpr auto bShouldUpdatePhysicsVolume = 0x14d; // char : 1
		constexpr auto bHiddenInGame = 0x14d; // char : 1
		constexpr auto bBoundsChangeTriggersStreamingDataRebuild = 0x14d; // char : 1
		constexpr auto bUseAttachParentBound = 0x14d; // char : 1
		constexpr auto Mobility = 0x14f; // EComponentMobility
		constexpr auto DetailMode = 0x150; // EDetailMode
		constexpr auto PhysicsVolumeChangedDelegate = 0x151; // FMulticastSparseDelegate
	}

	namespace n_UHapticFeedbackEffect_Curve {
		constexpr auto HapticDetails = 0x28; // FHapticFeedbackDetails_Curve
	}

	namespace n_UMovieSceneActorReferenceSection {
		constexpr auto ActorReferenceData = 0xe8; // FMovieSceneActorReferenceData
		constexpr auto ActorGuidIndexCurve = 0x198; // FIntegralCurve
		constexpr auto ActorGuidStrings = 0x218; // TArray<FString>
	}

	namespace n_UForceFeedbackEffect {
		constexpr auto ChannelDetails = 0x28; // TArray<FForceFeedbackChannelDetails>
		constexpr auto Duration = 0x38; // float
	}

	namespace n_UNiagaraRibbonRendererProperties {
		constexpr auto Material = 0x88; // UMaterialInterface*
		constexpr auto MaterialUserParamBinding = 0x90; // FNiagaraUserParameterBinding
		constexpr auto FacingMode = 0xb0; // ENiagaraRibbonFacingMode
		constexpr auto UV0Settings = 0xb4; // FNiagaraRibbonUVSettings
		constexpr auto UV1Settings = 0xd8; // FNiagaraRibbonUVSettings
		constexpr auto DrawDirection = 0xfc; // ENiagaraRibbonDrawDirection
		constexpr auto Shape = 0xfd; // ENiagaraRibbonShapeMode
		constexpr auto WidthSegmentationCount = 0x100; // int32_t
		constexpr auto MultiPlaneCount = 0x104; // int32_t
		constexpr auto TubeSubdivisions = 0x108; // int32_t
		constexpr auto CustomVertices = 0x110; // TArray<FNiagaraRibbonShapeCustomVertex>
		constexpr auto CurveTension = 0x120; // float
		constexpr auto TessellationMode = 0x124; // ENiagaraRibbonTessellationMode
		constexpr auto TessellationFactor = 0x128; // int32_t
		constexpr auto bUseConstantFactor = 0x12c; // bool
		constexpr auto TessellationAngle = 0x130; // float
		constexpr auto bScreenSpaceTessellation = 0x134; // bool
		constexpr auto PositionBinding = 0x138; // FNiagaraVariableAttributeBinding
		constexpr auto ColorBinding = 0x190; // FNiagaraVariableAttributeBinding
		constexpr auto VelocityBinding = 0x1e8; // FNiagaraVariableAttributeBinding
		constexpr auto NormalizedAgeBinding = 0x240; // FNiagaraVariableAttributeBinding
		constexpr auto RibbonTwistBinding = 0x298; // FNiagaraVariableAttributeBinding
		constexpr auto RibbonWidthBinding = 0x2f0; // FNiagaraVariableAttributeBinding
		constexpr auto RibbonFacingBinding = 0x348; // FNiagaraVariableAttributeBinding
		constexpr auto RibbonIdBinding = 0x3a0; // FNiagaraVariableAttributeBinding
		constexpr auto RibbonLinkOrderBinding = 0x3f8; // FNiagaraVariableAttributeBinding
		constexpr auto MaterialRandomBinding = 0x450; // FNiagaraVariableAttributeBinding
		constexpr auto DynamicMaterialBinding = 0x4a8; // FNiagaraVariableAttributeBinding
		constexpr auto DynamicMaterial1Binding = 0x500; // FNiagaraVariableAttributeBinding
		constexpr auto DynamicMaterial2Binding = 0x558; // FNiagaraVariableAttributeBinding
		constexpr auto DynamicMaterial3Binding = 0x5b0; // FNiagaraVariableAttributeBinding
		constexpr auto RibbonUVDistance = 0x608; // FNiagaraVariableAttributeBinding
		constexpr auto U0OverrideBinding = 0x660; // FNiagaraVariableAttributeBinding
		constexpr auto V0RangeOverrideBinding = 0x6b8; // FNiagaraVariableAttributeBinding
		constexpr auto U1OverrideBinding = 0x710; // FNiagaraVariableAttributeBinding
		constexpr auto V1RangeOverrideBinding = 0x768; // FNiagaraVariableAttributeBinding
		constexpr auto MaterialParameterBindings = 0x7c0; // TArray<FNiagaraMaterialAttributeBinding>
	}

	namespace n_UMaterialInstanceConstant {
		constexpr auto PhysMaterialMask = 0x360; // UPhysicalMaterialMask*
	}

	namespace n_UMovieSceneSubSection {
		constexpr auto Parameters = 0xe8; // FMovieSceneSectionParameters
		constexpr auto StartOffset = 0x10c; // float
		constexpr auto TimeScale = 0x110; // float
		constexpr auto PrerollTime = 0x114; // float
		constexpr auto NetworkMask = 0x118; // char
		constexpr auto SubSequence = 0x120; // UMovieSceneSequence*
		constexpr auto ActorToRecord = 0x128; // LazyObjectProperty
		constexpr auto TargetSequenceName = 0x148; // FString
		constexpr auto TargetPathToRecordTo = 0x158; // FDirectoryPath
	}

	namespace n_UNiagaraSimulationStageBase {
		constexpr auto Script = 0x28; // UNiagaraScript*
		constexpr auto SimulationStageName = 0x30; // FName
		constexpr auto bEnabled = 0x38; // char : 1
	}

	namespace n_UInterpTrackInstVectorProp {
		constexpr auto ResetVector = 0x58; // FVector
	}

	namespace n_UParticleModuleOrbitBase {
		constexpr auto bUseEmitterTime = 0x30; // char : 1
	}

	namespace n_AAmbianceVolume {
		constexpr auto EventOnEnter = 0x258; // UAkAudioEvent*
		constexpr auto EventOnExit = 0x260; // UAkAudioEvent*
		constexpr auto StateGroup = 0x268; // FString
		constexpr auto StateOnEnter = 0x278; // FString
		constexpr auto StateOnExit = 0x288; // FString
	}

	namespace n_ALevelScriptActor {
		constexpr auto bInputEnabled = 0x220; // char : 1
	}

	namespace n_UBlackboardData {
		constexpr auto Parent = 0x30; // UBlackboardData*
		constexpr auto Keys = 0x38; // TArray<FBlackboardEntry>
		constexpr auto bHasSynchronizedKeys = 0x48; // char : 1
	}

	namespace n_UBreakpoint {
		constexpr auto bEnabled = 0x28; // char : 1
		constexpr auto Node = 0x30; // UEdGraphNode*
		constexpr auto bStepOnce = 0x38; // char : 1
		constexpr auto bStepOnce_WasPreviouslyDisabled = 0x38; // char : 1
		constexpr auto bStepOnce_RemoveAfterHit = 0x38; // char : 1
	}

	namespace n_UParticleModuleLocationPrimitiveCylinder_Seeded {
		constexpr auto RandomSeedInfo = 0x120; // FParticleRandomSeedInfo
	}

	namespace n_ARuntimeVirtualTextureVolume {
		constexpr auto VirtualTextureComponent = 0x220; // URuntimeVirtualTextureComponent*
	}

	namespace n_UVehicleAnimInstance {
		constexpr auto WheeledVehicleMovementComponent = 0xa50; // UWheeledVehicleMovementComponent*
	}

	namespace n_UPortalWarsEvolutionHUDOverlayWidget {
		constexpr auto EnemyGunStatus = 0x280; // UPortalWarsEvolutionGunStatusWidget*
	}

	namespace n_UMovieSceneColorTrack {
		constexpr auto bIsSlateColor = 0xa8; // bool
	}

	namespace n_UInAppPurchaseQueryCallbackProxy {
		constexpr auto OnSuccess = 0x28; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x38; // FMulticastInlineDelegate
	}

	namespace n_ASkeletalMeshActor {
		constexpr auto bShouldDoAnimNotifies = 0x228; // char : 1
		constexpr auto bWakeOnLevelStart = 0x228; // char : 1
		constexpr auto SkeletalMeshComponent = 0x230; // USkeletalMeshComponent*
		constexpr auto ReplicatedMesh = 0x238; // USkeletalMesh*
		constexpr auto ReplicatedPhysAsset = 0x240; // UPhysicsAsset*
		constexpr auto ReplicatedMaterial0 = 0x248; // UMaterialInterface*
		constexpr auto ReplicatedMaterial1 = 0x250; // UMaterialInterface*
	}

	namespace n_UCompositeCameraShakePattern {
		constexpr auto ChildPatterns = 0x28; // TArray<UCameraShakePattern*>
	}

	namespace n_UCameraComponent {
		constexpr auto FieldOfView = 0x1f8; // float
		constexpr auto OrthoWidth = 0x1fc; // float
		constexpr auto OrthoNearClipPlane = 0x200; // float
		constexpr auto OrthoFarClipPlane = 0x204; // float
		constexpr auto AspectRatio = 0x208; // float
		constexpr auto bConstrainAspectRatio = 0x20c; // char : 1
		constexpr auto bUseFieldOfViewForLOD = 0x20c; // char : 1
		constexpr auto bLockToHmd = 0x20c; // char : 1
		constexpr auto bUsePawnControlRotation = 0x20c; // char : 1
		constexpr auto ProjectionMode = 0x20d; // ECameraProjectionMode
		constexpr auto PostProcessBlendWeight = 0x240; // float
		constexpr auto PostProcessSettings = 0x270; // FPostProcessSettings
	}

	namespace n_UParticleModuleAttractorPointGravity {
		constexpr auto Position = 0x30; // FVector
		constexpr auto Radius = 0x3c; // float
		constexpr auto Strength = 0x40; // UDistributionFloat*
		constexpr auto StrengthRaw = 0x48; // FRawDistributionFloat
	}

	namespace n_UMovieSceneCameraShakeTrack {
		constexpr auto CameraShakeSections = 0x80; // TArray<UMovieSceneSection*>
	}

	namespace n_UAIPerceptionSystem {
		constexpr auto Senses = 0x88; // TArray<UAISense*>
		constexpr auto PerceptionAgingRate = 0x98; // float
	}

	namespace n_ACameraShakeSourceActor {
		constexpr auto CameraShakeSourceComponent = 0x220; // UCameraShakeSourceComponent*
	}

	namespace n_ATextRenderActor {
		constexpr auto TextRender = 0x220; // UTextRenderComponent*
	}

	namespace n_ASkyLight {
		constexpr auto LightComponent = 0x220; // USkyLightComponent*
		constexpr auto bEnabled = 0x228; // char : 1
	}

	namespace n_UBlueprintGeneratedClass {
		constexpr auto NumReplicatedProperties = 0x230; // int32_t
		constexpr auto bHasNativizedParent = 0x234; // char : 1
		constexpr auto bHasCookedComponentInstancingData = 0x234; // char : 1
		constexpr auto DynamicBindingObjects = 0x238; // TArray<UDynamicBlueprintBinding*>
		constexpr auto ComponentTemplates = 0x248; // TArray<UActorComponent*>
		constexpr auto Timelines = 0x258; // TArray<UTimelineTemplate*>
		constexpr auto ComponentClassOverrides = 0x268; // TArray<FBPComponentClassOverride>
		constexpr auto SimpleConstructionScript = 0x278; // USimpleConstructionScript*
		constexpr auto InheritableComponentHandler = 0x280; // UInheritableComponentHandler*
		constexpr auto UberGraphFramePointerProperty = 0x288; // UStructProperty*
		constexpr auto UberGraphFunction = 0x298; // UFunction*
		constexpr auto CookedComponentInstancingData = 0x2a0; // TMap<FName, FBlueprintCookedComponentInstancingData>
	}

	namespace n_UPortalWarsRankListWidget {
		constexpr auto RankEntryWidget = 0x260; // UPortalWarsRankListEntryWidget*
		constexpr auto ItemsPanel = 0x268; // UVerticalBox*
	}

	namespace n_UPortalWarsRaceLobbyWidget {
		constexpr auto MapSelector = 0x378; // UPortalWarsGlobalCarouselWidget*
		constexpr auto RaceLeaderboard = 0x380; // UPortalWarsRaceLeaderboardWidget*
		constexpr auto SwitchLeaderboardButton = 0x388; // UPortalWarsButtonWidget*
		constexpr auto ToggleCrossPlayButton = 0x390; // UPortalWarsButtonWidget*
	}

	namespace n_UImgMediaSource {
		constexpr auto IsPathRelativeToProjectRoot = 0x88; // bool
		constexpr auto FrameRateOverride = 0x8c; // FFrameRate
		constexpr auto ProxyOverride = 0x98; // FString
		constexpr auto SequencePath = 0xa8; // FDirectoryPath
	}

	namespace n_UParticleModuleRotationRate {
		constexpr auto StartRotationRate = 0x30; // FRawDistributionFloat
	}

	namespace n_UAnimNotify_PlayMontageNotifyWindow {
		constexpr auto NotifyName = 0x30; // FName
	}

	namespace n_UHighlightsCloseGroupAsync {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_UPortalWarsChallengesWidget {
		constexpr auto InspectWidget = 0x338; // UPortalWarsChallengesSubWidget*
		constexpr auto WeaponPanel = 0x340; // UPanelWidget*
		constexpr auto WeaponChallengeButtonWidgetClass = 0x348; // UPortalWarsChallengeButtonWidget*
		constexpr auto FeaturedChallengeButton = 0x350; // UPortalWarsChallengeButtonWidget*
		constexpr auto ChallengeInspectWidgetClasses = 0x358; // TMap<EChallengeType, UPortalWarsChallengesSubWidget*>
	}

	namespace n_APlanarReflection {
		constexpr auto PlanarReflectionComponent = 0x230; // UPlanarReflectionComponent*
		constexpr auto bShowPreviewPlane = 0x238; // bool
	}

	namespace n_USceneCaptureComponent2D {
		constexpr auto ProjectionType = 0x2c0; // ECameraProjectionMode
		constexpr auto FOVAngle = 0x2c4; // float
		constexpr auto OrthoWidth = 0x2c8; // float
		constexpr auto TextureTarget = 0x2d0; // UTextureRenderTarget2D*
		constexpr auto CompositeMode = 0x2d8; // ESceneCaptureCompositeMode
		constexpr auto PostProcessSettings = 0x2e0; // FPostProcessSettings
		constexpr auto PostProcessBlendWeight = 0x830; // float
		constexpr auto bOverride_CustomNearClippingPlane = 0x834; // char : 1
		constexpr auto CustomNearClippingPlane = 0x838; // float
		constexpr auto bUseCustomProjectionMatrix = 0x83c; // bool
		constexpr auto CustomProjectionMatrix = 0x840; // FMatrix
		constexpr auto bEnableClipPlane = 0x880; // bool
		constexpr auto ClipPlaneBase = 0x884; // FVector
		constexpr auto ClipPlaneNormal = 0x890; // FVector
		constexpr auto bCameraCutThisFrame = 0x89c; // char : 1
		constexpr auto bConsiderUnrenderedOpaquePixelAsFullyTranslucent = 0x89c; // char : 1
		constexpr auto bDisableFlipCopyGLES = 0x8a0; // bool
	}

	namespace n_UPortalWarsBlockedPlayersWidget {
		constexpr auto RefreshButton = 0x340; // UPortalWarsButtonWidget*
		constexpr auto BlockedPlayersPanel = 0x348; // UPanelWidget*
		constexpr auto PlayerEntryWidgetClass = 0x350; // UPortalWarsSocialPlayerEntry*
		constexpr auto PlayerActionsWidgetClass = 0x358; // UPortalWarsPlayerActionsWidget*
		constexpr auto ErrorText = 0x368; // UTextBlock*
	}

	namespace n_UPortalWarsBPRedeemableButton {
		constexpr auto bChangeBasedOnUser = 0x500; // bool
		constexpr auto bOpenPurchaseDialogWhenClicked = 0x501; // bool
		constexpr auto PurchaseDialogWidgetClass = 0x508; // UPortalWarsBPPurchaseDialogWidget*
	}

	namespace n_UAssetManagerSettings {
		constexpr auto PrimaryAssetTypesToScan = 0x38; // TArray<FPrimaryAssetTypeInfo>
		constexpr auto DirectoriesToExclude = 0x48; // TArray<FDirectoryPath>
		constexpr auto PrimaryAssetRules = 0x58; // TArray<FPrimaryAssetRulesOverride>
		constexpr auto CustomPrimaryAssetRules = 0x68; // TArray<FPrimaryAssetRulesCustomOverride>
		constexpr auto bOnlyCookProductionAssets = 0x78; // bool
		constexpr auto bShouldManagerDetermineTypeAndName = 0x79; // bool
		constexpr auto bShouldGuessTypeAndNameInEditor = 0x7a; // bool
		constexpr auto bShouldAcquireMissingChunksOnLoad = 0x7b; // bool
		constexpr auto PrimaryAssetIdRedirects = 0x80; // TArray<FAssetManagerRedirect>
		constexpr auto PrimaryAssetTypeRedirects = 0x90; // TArray<FAssetManagerRedirect>
		constexpr auto AssetPathRedirects = 0xa0; // TArray<FAssetManagerRedirect>
		constexpr auto MetaDataTagsForAssetRegistry = 0xb0; // TSet<FName>
	}

	namespace n_UPortalWarsFlagIndicatorWidget {
		constexpr auto Pointer = 0x2b8; // UWidget*
		constexpr auto NeutralBackground = 0x2d0; // UTexture2D*
		constexpr auto RedBackground = 0x2d8; // UTexture2D*
		constexpr auto BlueBackground = 0x2e0; // UTexture2D*
		constexpr auto OnScreenProgressBar = 0x2e8; // UProgressBar*
		constexpr auto OffScreenProgressBar = 0x2f0; // UProgressBar*
		constexpr auto DisplayResetProgress = 0x2f8; // float
	}

	namespace n_UAssetMappingTable {
		constexpr auto MappedAssets = 0x28; // TArray<FAssetMapping>
	}

	namespace n_ULODSyncComponent {
		constexpr auto NumLODs = 0xb0; // int32_t
		constexpr auto ForcedLOD = 0xb4; // int32_t
		constexpr auto ComponentsToSync = 0xb8; // TArray<FComponentSync>
		constexpr auto CustomLODMapping = 0xc8; // TMap<FName, FLODMappingData>
		constexpr auto CurrentLOD = 0x118; // int32_t
		constexpr auto CurrentNumLODs = 0x11c; // int32_t
		constexpr auto DriveComponents = 0x120; // TArray<UPrimitiveComponent*>
		constexpr auto SubComponents = 0x130; // TArray<UPrimitiveComponent*>
	}

	namespace n_AAkReverbVolume {
		constexpr auto bEnabled = 0x258; // char : 1
		constexpr auto AuxBus = 0x260; // UAkAuxBus*
		constexpr auto AuxBusName = 0x268; // FString
		constexpr auto SendLevel = 0x278; // float
		constexpr auto FadeRate = 0x27c; // float
		constexpr auto Priority = 0x280; // float
		constexpr auto LateReverbComponent = 0x288; // UAkLateReverbComponent*
	}

	namespace n_UPortalWarsPlaylistCrossplayDialogWidget {
		constexpr auto AcceptButton = 0x390; // UPortalWarsButtonWidget*
		constexpr auto MessageText = 0x398; // UTextBlock*
		constexpr auto OnAcceptSelected = 0x3a0; // FMulticastInlineDelegate
		constexpr auto PlaylistEntry = 0x3b0; // UPortalWarsPlaylistEntryWidget*
	}

	namespace n_UPortalWarsGGHUDOverlayWidget {
		constexpr auto GunStatus = 0x260; // UPortalWarsGGGunStatusWidget*
		constexpr auto GunGameNotification = 0x268; // UPortalWarsGGNotificationWidget*
	}

	namespace n_UBlackboardKeyType_Enum {
		constexpr auto EnumType = 0x30; // UEnum*
		constexpr auto EnumName = 0x38; // FString
		constexpr auto bIsEnumNameValid = 0x48; // char : 1
	}

	namespace n_UCullingField {
		constexpr auto Culling = 0xb0; // UFieldNodeBase*
		constexpr auto Field = 0xb8; // UFieldNodeBase*
		constexpr auto Operation = 0xc0; // EFieldCullingOperationType
	}

	namespace n_UBTNode {
		constexpr auto NodeName = 0x30; // FString
		constexpr auto TreeAsset = 0x40; // UBehaviorTree*
		constexpr auto ParentNode = 0x48; // UBTCompositeNode*
	}

	namespace n_UMovieScene3DConstraintSection {
		constexpr auto ConstraintId = 0xe8; // FGuid
		constexpr auto ConstraintBindingID = 0xf8; // FMovieSceneObjectBindingID
	}

	namespace n_UGameplayTask_WaitDelay {
		constexpr auto OnFinish = 0x68; // FMulticastInlineDelegate
	}

	namespace n_UInputTouchDelegateBinding {
		constexpr auto InputTouchDelegateBindings = 0x28; // TArray<FBlueprintInputTouchDelegateBinding>
	}

	namespace n_UMenuAnchor {
		constexpr auto MenuClass = 0x120; // UUserWidget*
		constexpr auto OnGetMenuContentEvent = 0x128; // FDelegate
		constexpr auto OnGetUserMenuContentEvent = 0x138; // FDelegate
		constexpr auto Placement = 0x148; // EMenuPlacement
		constexpr auto bFitInWindow = 0x149; // bool
		constexpr auto ShouldDeferPaintingAfterWindowContent = 0x14a; // bool
		constexpr auto UseApplicationMenuStack = 0x14b; // bool
		constexpr auto OnMenuOpenChanged = 0x150; // FMulticastInlineDelegate
	}

	namespace n_UTileView {
		constexpr auto EntryHeight = 0x368; // float
		constexpr auto EntryWidth = 0x36c; // float
		constexpr auto TileAlignment = 0x370; // EListItemAlignment
		constexpr auto bWrapHorizontalNavigation = 0x371; // bool
	}

	namespace n_UPortalWarsHillIndicatorWidget {
		constexpr auto Pointer = 0x2b8; // UWidget*
		constexpr auto OnScreenNameText = 0x2c0; // UTextBlock*
		constexpr auto OffScreenNameText = 0x2c8; // UTextBlock*
		constexpr auto NeutralBackground = 0x2d8; // UTexture2D*
		constexpr auto RedBackground = 0x2e0; // UTexture2D*
		constexpr auto BlueBackground = 0x2e8; // UTexture2D*
	}

	namespace n_APortalWarsContaminationHUD {
		constexpr auto ContaminationHUDOverlayWidget = 0x440; // UPortalWarsContaminationHUDOverlayWidget*
		constexpr auto ContaminationNameIndicatorWidgetClass = 0x448; // UPortalWarsIndicatorWidget*
	}

	namespace n_ULandscapeMaterialInstanceConstant {
		constexpr auto TextureStreamingInfo = 0x368; // TArray<FLandscapeMaterialTextureStreamingInfo>
		constexpr auto bIsLayerThumbnail = 0x378; // char : 1
		constexpr auto bDisableTessellation = 0x378; // char : 1
		constexpr auto bMobile = 0x378; // char : 1
		constexpr auto bEditorToolUsage = 0x378; // char : 1
	}

	namespace n_UAkCheckBox {
		constexpr auto CheckedState = 0x468; // ECheckBoxState
		constexpr auto CheckedStateDelegate = 0x46c; // FDelegate
		constexpr auto WidgetStyle = 0x480; // FCheckBoxStyle
		constexpr auto HorizontalAlignment = 0xa00; // EHorizontalAlignment
		constexpr auto IsFocusable = 0xa01; // bool
		constexpr auto ThePropertyToControl = 0xa08; // FAkBoolPropertyToControl
		constexpr auto ItemToControl = 0xa18; // FAkWwiseItemToControl
		constexpr auto AkOnCheckStateChanged = 0xa58; // FMulticastInlineDelegate
		constexpr auto OnItemDropped = 0xa68; // FMulticastInlineDelegate
		constexpr auto OnPropertyDropped = 0xa78; // FMulticastInlineDelegate
	}

	namespace n_UMovieSceneTrack {
		constexpr auto EvalOptions = 0x50; // FMovieSceneTrackEvalOptions
		constexpr auto bIsEvalDisabled = 0x55; // bool
		constexpr auto EvaluationFieldGuid = 0x58; // FGuid
		constexpr auto EvaluationField = 0x68; // FMovieSceneTrackEvaluationField
	}

	namespace n_UAnimationSharingStateProcessor {
		constexpr auto AnimationStateEnum = 0x28; // TSoftObjectPtr<UEnum>
	}

	namespace n_UBTTask_PushPawnAction {
		constexpr auto Action = 0x70; // UPawnAction*
	}

	namespace n_UMaterialExpressionQualitySwitch {
		constexpr auto Default = 0x40; // FExpressionInput
		constexpr auto Inputs = 0x54; // FExpressionInput [0x4]
	}

	namespace n_USoundNodeDialoguePlayer {
		constexpr auto DialogueWaveParameter = 0x48; // FDialogueWaveParameter
		constexpr auto bLooping = 0x68; // char : 1
	}

	namespace n_UAmmoCounterWidgetComponent {
		constexpr auto AmmoCounterWidget = 0x5a0; // UPortalWarsAmmoCounterWidget*
		constexpr auto TickInterval = 0x5b0; // float
	}

	namespace n_UPortalWarsTutorialVideoReminderWidget {
		constexpr auto FadeInAnimation = 0x2a8; // UWidgetAnimation*
		constexpr auto FadeOutAnimation = 0x2b0; // UWidgetAnimation*
	}

	namespace n_UInterpTrackInstVectorMaterialParam {
		constexpr auto MaterialInstances = 0x28; // TArray<UMaterialInstanceDynamic*>
		constexpr auto ResetVectors = 0x38; // TArray<FVector>
		constexpr auto PrimitiveMaterialRefs = 0x48; // TArray<FPrimitiveMaterialRef>
		constexpr auto InstancedTrack = 0x58; // UInterpTrackVectorMaterialParam*
	}

	namespace n_APortalWarsOITC {
		constexpr auto bAllowAmmoStacking = 0x6a8; // bool
		constexpr auto bMeleeRequiredForAmmoStacking = 0x6a9; // bool
		constexpr auto MaxAmmo = 0x6ac; // int32_t
	}

	namespace n_UParticleModuleVectorFieldRotationRate {
		constexpr auto RotationRate = 0x30; // FVector
	}

	namespace n_UMaterialExpressionConstant2Vector {
		constexpr auto R = 0x40; // float
		constexpr auto G = 0x44; // float
	}

	namespace n_UMaterialExpressionLogarithm2 {
		constexpr auto X = 0x40; // FExpressionInput
	}

	namespace n_UVerticalBoxSlot {
		constexpr auto Size = 0x38; // FSlateChildSize
		constexpr auto Padding = 0x40; // FMargin
		constexpr auto HorizontalAlignment = 0x58; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x59; // EVerticalAlignment
	}

	namespace n_UStreamableRenderAsset {
		constexpr auto ForceMipLevelsToBeResidentTimestamp = 0x40; // double
		constexpr auto NumCinematicMipLevels = 0x48; // int32_t
		constexpr auto StreamingIndex = 0x4c; // int32_t
		constexpr auto CachedCombinedLODBias = 0x50; // int32_t
		constexpr auto NeverStream = 0x54; // char : 1
		constexpr auto bGlobalForceMipLevelsToBeResident = 0x54; // char : 1
		constexpr auto bHasStreamingUpdatePending = 0x54; // char : 1
		constexpr auto bForceMiplevelsToBeResident = 0x54; // char : 1
		constexpr auto bIgnoreStreamingMipBias = 0x54; // char : 1
		constexpr auto bUseCinematicMipLevels = 0x54; // char : 1
	}

	namespace n_UAkCallbackInfo {
		constexpr auto AkComponent = 0x28; // UAkComponent*
	}

	namespace n_UARPointComponent {
		constexpr auto ReplicatedPayload = 0x278; // FARPointUpdatePayload
	}

	namespace n_UNavLinkComponent {
		constexpr auto Links = 0x458; // TArray<FNavigationLink>
	}

	namespace n_APortalWarsTakedownVIPGameState {
		constexpr auto SurvivingVIP = 0x828; // APortalWarsPlayerState*
		constexpr auto VIPs = 0x830; // TMap<int32_t, APortalWarsPlayerState*>
	}

	namespace n_UPortalWarsGameModeInfoWidget {
		constexpr auto DisplayNameText = 0x260; // UTextBlock*
		constexpr auto DescriptionText = 0x268; // UTextBlock*
		constexpr auto DisplayImage = 0x270; // UImage*
		constexpr auto IconImage = 0x278; // UImage*
		constexpr auto MaxPartySizeText = 0x280; // UTextBlock*
		constexpr auto PlayersText = 0x288; // UTextBlock*
		constexpr auto ScoreLimitText = 0x290; // UTextBlock*
	}

	namespace n_AMagicLeapARPinInfoActor_C {
		constexpr auto UberGraphFrame = 0x238; // FPointerToUberGraphFrame
		constexpr auto Right = 0x240; // UStaticMeshComponent*
		constexpr auto Forward = 0x248; // UStaticMeshComponent*
		constexpr auto Up = 0x250; // UStaticMeshComponent*
		constexpr auto ValidRadiusVisualizer = 0x258; // USphereComponent*
		constexpr auto AxisRoot = 0x260; // USceneComponent*
		constexpr auto VisualizerRoot = 0x268; // USceneComponent*
		constexpr auto TypeValue = 0x270; // UTextRenderComponent*
		constexpr auto TransErrValue = 0x278; // UTextRenderComponent*
		constexpr auto RotErrValue = 0x280; // UTextRenderComponent*
		constexpr auto ConfidenceValue = 0x288; // UTextRenderComponent*
		constexpr auto TransErrLabel = 0x290; // UTextRenderComponent*
		constexpr auto RotErrLabel = 0x298; // UTextRenderComponent*
		constexpr auto ConfidenceLabel = 0x2a0; // UTextRenderComponent*
		constexpr auto PinIDValue = 0x2a8; // UTextRenderComponent*
		constexpr auto InfoRoot = 0x2b0; // USceneComponent*
		constexpr auto Root = 0x2b8; // USceneComponent*
		constexpr auto RotationSmoothSpeed = 0x2c0; // float
	}

	namespace n_USoundfieldSubmix {
		constexpr auto SoundfieldEncodingFormat = 0x40; // FName
		constexpr auto EncodingSettings = 0x48; // USoundfieldEncodingSettingsBase*
		constexpr auto SoundfieldEffectChain = 0x50; // TArray<USoundfieldEffectBase*>
		constexpr auto EncodingSettingsClass = 0x60; // USoundfieldEncodingSettingsBase*
	}

	namespace n_UPortalWarsPostGamePlayerEntry {
		constexpr auto PlayerNameText = 0x2a8; // UTextBlock*
		constexpr auto PlayerScoreText = 0x2b0; // UTextBlock*
		constexpr auto PlayerKillsText = 0x2b8; // UTextBlock*
		constexpr auto PlayerDeathsText = 0x2c0; // UTextBlock*
		constexpr auto PlayerDamageDealtText = 0x2c8; // UTextBlock*
		constexpr auto NameBorder = 0x2d0; // UBorder*
		constexpr auto AlphaTeamColor = 0x2d8; // FLinearColor
		constexpr auto BravoTeamColor = 0x2e8; // FLinearColor
		constexpr auto NoTeamColor = 0x2f8; // FLinearColor
		constexpr auto StatBorder = 0x308; // UBorder*
	}

	namespace n_UPhysicalMaterial {
		constexpr auto Friction = 0x28; // float
		constexpr auto StaticFriction = 0x2c; // float
		constexpr auto FrictionCombineMode = 0x30; // EFrictionCombineMode
		constexpr auto bOverrideFrictionCombineMode = 0x31; // bool
		constexpr auto Restitution = 0x34; // float
		constexpr auto RestitutionCombineMode = 0x38; // EFrictionCombineMode
		constexpr auto bOverrideRestitutionCombineMode = 0x39; // bool
		constexpr auto Density = 0x3c; // float
		constexpr auto SleepLinearVelocityThreshold = 0x40; // float
		constexpr auto SleepAngularVelocityThreshold = 0x44; // float
		constexpr auto SleepCounterThreshold = 0x48; // int32_t
		constexpr auto RaiseMassToPower = 0x4c; // float
		constexpr auto DestructibleDamageThresholdScale = 0x50; // float
		constexpr auto PhysicalMaterialProperty = 0x58; // UPhysicalMaterialPropertyBase*
		constexpr auto SurfaceType = 0x60; // EPhysicalSurface
	}

	namespace n_USoundNodeQualityLevel {
		constexpr auto CookedQualityLevelIndex = 0x48; // int32_t
	}

	namespace n_UConsoleSettings {
		constexpr auto MaxScrollbackSize = 0x28; // int32_t
		constexpr auto ManualAutoCompleteList = 0x30; // TArray<FAutoCompleteCommand>
		constexpr auto AutoCompleteMapPaths = 0x40; // TArray<FString>
		constexpr auto BackgroundOpacityPercentage = 0x50; // float
		constexpr auto bOrderTopToBottom = 0x54; // bool
		constexpr auto bDisplayHelpInAutoComplete = 0x55; // bool
		constexpr auto InputColor = 0x58; // FColor
		constexpr auto HistoryColor = 0x5c; // FColor
		constexpr auto AutoCompleteCommandColor = 0x60; // FColor
		constexpr auto AutoCompleteCVarColor = 0x64; // FColor
		constexpr auto AutoCompleteFadedColor = 0x68; // FColor
	}

	namespace n_UPortalWarsMKBSettingsWidget {
		constexpr auto MouseHorSens = 0x358; // UPortalWarsSpinSliderWidget*
		constexpr auto MouseVertSens = 0x360; // UPortalWarsSpinSliderWidget*
		constexpr auto MouseZoomMult = 0x368; // UPortalWarsSpinSliderWidget*
		constexpr auto MouseInvertLook = 0x370; // UPortalWarsCheckBoxWidget*
		constexpr auto MouseAutosprint = 0x378; // UPortalWarsCheckBoxWidget*
		constexpr auto MouseSmoothing = 0x380; // UPortalWarsCheckBoxWidget*
		constexpr auto ToggleCrouch = 0x388; // UPortalWarsCheckBoxWidget*
		constexpr auto ToggleSprint = 0x390; // UPortalWarsCheckBoxWidget*
		constexpr auto ToggleZoom = 0x398; // UPortalWarsCheckBoxWidget*
	}

	namespace n_UCanvas {
		constexpr auto OrgX = 0x28; // float
		constexpr auto OrgY = 0x2c; // float
		constexpr auto ClipX = 0x30; // float
		constexpr auto ClipY = 0x34; // float
		constexpr auto DrawColor = 0x38; // FColor
		constexpr auto bCenterX = 0x3c; // char : 1
		constexpr auto bCenterY = 0x3c; // char : 1
		constexpr auto bNoSmooth = 0x3c; // char : 1
		constexpr auto SizeX = 0x40; // int32_t
		constexpr auto SizeY = 0x44; // int32_t
		constexpr auto ColorModulate = 0x50; // FPlane
		constexpr auto DefaultTexture = 0x60; // UTexture2D*
		constexpr auto GradientTexture0 = 0x68; // UTexture2D*
		constexpr auto ReporterGraph = 0x70; // UReporterGraph*
	}

	namespace n_URaceBookmarkWidget {
		constexpr auto MarksHorizontalBox = 0x260; // UHorizontalBox*
		constexpr auto CurrentMarkTexture = 0x268; // UTexture2D*
		constexpr auto IncompleteMarkTexture = 0x270; // UTexture2D*
		constexpr auto CompleteMarkTexture = 0x278; // UTexture2D*
	}

	namespace n_USingleClickInputBehavior {
		constexpr auto HitTestOnRelease = 0xc0; // bool
	}

	namespace n_UObjectReferencer {
		constexpr auto ReferencedObjects = 0x28; // TArray<UObject*>
	}

	namespace n_UAkXSXInitializationSettings {
		constexpr auto CommonSettings = 0x28; // FAkCommonInitializationSettings
		constexpr auto ApuHeapSettings = 0x90; // FAkXSXApuHeapInitializationSettings
		constexpr auto CommunicationSettings = 0x98; // FAkCommunicationSettingsWithSystemInitialization
		constexpr auto AdvancedSettings = 0xc0; // FAkXSXAdvancedInitializationSettings
	}

	namespace n_UMaterialExpressionMin {
		constexpr auto A = 0x40; // FExpressionInput
		constexpr auto B = 0x54; // FExpressionInput
		constexpr auto ConstA = 0x68; // float
		constexpr auto ConstB = 0x6c; // float
	}

	namespace n_UMaterialExpressionFresnel {
		constexpr auto ExponentIn = 0x40; // FExpressionInput
		constexpr auto Exponent = 0x54; // float
		constexpr auto BaseReflectFractionIn = 0x58; // FExpressionInput
		constexpr auto BaseReflectFraction = 0x6c; // float
		constexpr auto Normal = 0x70; // FExpressionInput
	}

	namespace n_UPortalWarsRewardEntryWidget {
		constexpr auto RewardTitleText = 0x420; // UTextBlock*
		constexpr auto RewardValueText = 0x428; // UTextBlock*
		constexpr auto RewardDescriptionText = 0x430; // UTextBlock*
		constexpr auto RarityIcon = 0x438; // UImage*
		constexpr auto RarityBG = 0x440; // UImage*
		constexpr auto RarityBorder = 0x448; // UImage*
		constexpr auto RarityScrim = 0x450; // UImage*
		constexpr auto RarityBackgrounds = 0x458; // TMap<ECustomizationRarity, UTexture2D*>
		constexpr auto RarityScrims = 0x4a8; // TMap<ECustomizationRarity, UTexture2D*>
		constexpr auto RarityTitleColors = 0x4f8; // TMap<ECustomizationRarity, FLinearColor>
		constexpr auto RarityBorderColors = 0x548; // TMap<ECustomizationRarity, FLinearColor>
		constexpr auto RewardImage = 0x598; // UImage*
		constexpr auto ThumbnailSwitcher = 0x5c8; // UWidgetSwitcher*
		constexpr auto NameTagBorder = 0x5d0; // UBorder*
		constexpr auto XPRewardRoot = 0x5d8; // UWidget*
		constexpr auto DropRewardRoot = 0x5e0; // UWidget*
		constexpr auto CustomizationThumbnailPaddings = 0x5e8; // TMap<ECustomizationType, FMargin>
		constexpr auto RewardThumbnailPaddings = 0x638; // TMap<ERewardType, FMargin>
		constexpr auto CustomizationRenderAngles = 0x688; // TMap<ECustomizationType, float>
		constexpr auto RewardRenderAngles = 0x6d8; // TMap<ERewardType, float>
	}

	namespace n_UPortalWarsRaceLeaderboardEntry {
		constexpr auto TimeText = 0xbd8; // UTextBlock*
	}

	namespace n_UBTTaskNode_FindNearbyPortalWall {
		constexpr auto NearPortalWallRadius = 0x70; // float
	}

	namespace n_UMovieSceneNiagaraTrack {
		constexpr auto Sections = 0x78; // TArray<UMovieSceneSection*>
	}

	namespace n_UPortalWarsCurrencyStoreWidget {
		constexpr auto RetryButton = 0x398; // UPortalWarsButtonWidget*
		constexpr auto StoreSwitcher = 0x3a0; // UWidgetSwitcher*
		constexpr auto StoreEntries = 0x3a8; // TArray<UPortalWarsCurrencyStoreEntry*>
		constexpr auto CurrencyDialogWidgetClass = 0x3c0; // UPortalWarsCurrencyPurchaseDialog*
	}

	namespace n_UDataAsset {
		constexpr auto NativeClass = 0x28; // UDataAsset*
	}

	namespace n_UPortalWarsKOTHHillStatusWidget {
		constexpr auto HillImage = 0x260; // UImage*
		constexpr auto TimeRemainingText = 0x268; // UTextBlock*
		constexpr auto HillStatusText = 0x270; // UTextBlock*
		constexpr auto RootHorizontalBox = 0x278; // UHorizontalBox*
		constexpr auto ContestedHillTexture = 0x280; // UTexture2D*
		constexpr auto ControlledHillTexture = 0x288; // UTexture2D*
		constexpr auto RedControlledHillTexture = 0x290; // UTexture2D*
		constexpr auto OvertimeColor = 0x298; // FSlateColor
	}

	namespace n_ALight {
		constexpr auto LightComponent = 0x220; // ULightComponent*
		constexpr auto bEnabled = 0x228; // char : 1
	}

	namespace n_UAkSlider {
		constexpr auto Value = 0x108; // float
		constexpr auto ValueDelegate = 0x10c; // FDelegate
		constexpr auto WidgetStyle = 0x120; // FSliderStyle
		constexpr auto Orientation = 0x460; // EOrientation
		constexpr auto SliderBarColor = 0x464; // FLinearColor
		constexpr auto SliderHandleColor = 0x474; // FLinearColor
		constexpr auto IndentHandle = 0x484; // bool
		constexpr auto locked = 0x485; // bool
		constexpr auto StepSize = 0x488; // float
		constexpr auto IsFocusable = 0x48c; // bool
		constexpr auto ThePropertyToControl = 0x490; // FAkPropertyToControl
		constexpr auto ItemToControl = 0x4a0; // FAkWwiseItemToControl
		constexpr auto OnValueChanged = 0x4e0; // FMulticastInlineDelegate
		constexpr auto OnItemDropped = 0x4f0; // FMulticastInlineDelegate
		constexpr auto OnPropertyDropped = 0x500; // FMulticastInlineDelegate
	}

	namespace n_UPortalWarsChallengesSubWidget {
		constexpr auto ChallengeEntryWidgetClass = 0x338; // UPortalWarsChallengeEntryWidget*
		constexpr auto FeaturedChallengeEntryWidgetClass = 0x340; // UPortalWarsChallengeEntryWidget*
		constexpr auto BuyPremiumDialogWidgetClass = 0x348; // UPortalWarsBPPurchaseDialogWidget*
		constexpr auto EntriesPanel = 0x350; // UPanelWidget*
		constexpr auto PremiumEntriesPanel = 0x358; // UPanelWidget*
		constexpr auto FeaturedEntriesPanel = 0x360; // UPanelWidget*
		constexpr auto InspectWidget = 0x368; // UPortalWarsChallengesInspectWidget*
		constexpr auto TitleText = 0x370; // UTextBlock*
		constexpr auto TimeDescriptionText = 0x380; // UTextBlock*
		constexpr auto BuyPremiumButton = 0x388; // UPortalWarsButtonWidget*
		constexpr auto ChallengeType = 0x391; // EChallengeType
		constexpr auto GroupId = 0x394; // int32_t
	}

	namespace n_UParticleModuleSizeMultiplyLife {
		constexpr auto LifeMultiplier = 0x30; // FRawDistributionVector
		constexpr auto MultiplyX = 0x78; // char : 1
		constexpr auto MultiplyY = 0x78; // char : 1
		constexpr auto MultiplyZ = 0x78; // char : 1
	}

	namespace n_APartyBeaconClient {
		constexpr auto DestSessionId = 0x2e0; // FString
		constexpr auto PendingReservation = 0x2f0; // FPartyReservation
		constexpr auto RequestType = 0x340; // EClientRequestType
		constexpr auto bPendingReservationSent = 0x341; // bool
		constexpr auto bCancelReservation = 0x342; // bool
	}

	namespace n_ABat {
		constexpr auto BatteryPercentagePerSwing = 0x698; // float
		constexpr auto MeleeImpact1PFX = 0x6a8; // UParticleSystem*
		constexpr auto MeleeImpact3PFX = 0x6b0; // UParticleSystem*
		constexpr auto ElectricityInEffectsRangeColor = 0x6b8; // FLinearColor
		constexpr auto ElectricityInMeleeRangeColor = 0x6c8; // FLinearColor
		constexpr auto BatInEffectsRangeEmissiveColor = 0x6d8; // FLinearColor
		constexpr auto BatInMeleeRangeEmissiveColor = 0x6e8; // FLinearColor
		constexpr auto EffectsRange = 0x6f8; // float
		constexpr auto MaxOpenPercentInEffectsRange = 0x700; // float
		constexpr auto FullyOpenInterpSpeed = 0x704; // float
		constexpr auto FullyClosedInterpSpeed = 0x708; // float
		constexpr auto EffectsRangeInterpSpeed = 0x70c; // float
		constexpr auto PlateInterpToVisibleSpeed = 0x710; // float
		constexpr auto PlateInterpToHiddenSpeed = 0x714; // float
		constexpr auto BatDynamicMaterial = 0x718; // UMaterialInstanceDynamic*
		constexpr auto ElectricityDynamicMaterial = 0x720; // UMaterialInstanceDynamic*
		constexpr auto PlatesDynamicMaterial = 0x728; // UMaterialInstanceDynamic*
		constexpr auto ThirdPersonBatDynamicMaterial = 0x730; // UMaterialInstanceDynamic*
		constexpr auto ThirdPersonElectricityDynamicMaterial = 0x738; // UMaterialInstanceDynamic*
		constexpr auto BatAmbientStartEvent = 0x748; // UAkAudioEvent*
		constexpr auto BatAmbientStopEvent = 0x750; // UAkAudioEvent*
		constexpr auto BatOpenedSFX = 0x758; // UAkAudioEvent*
		constexpr auto OutOfAmmoMeleeHitSound = 0x760; // UAkAudioEvent*
		constexpr auto OutOfAmmoSwingEvent = 0x768; // UAkAudioEvent*
		constexpr auto OutOfAmmoMeleeForceFeedback = 0x778; // UForceFeedbackEffect*
	}

	namespace n_UPortalWarsLowAmmoIndicatorWidget {
		constexpr auto WarningFlashAnimation = 0x260; // UWidgetAnimation*
		constexpr auto AmmoText = 0x268; // UTextBlock*
		constexpr auto ActionInput = 0x270; // UPortalWarsInputDecoratorWidget*
	}

	namespace n_UPortalWarsGlobalCarouselWidget {
		constexpr auto DisplayImage = 0x3b8; // UImage*
	}

	namespace n_UPortalWarsKOTHHillIndicator {
		constexpr auto OnScreenBackgroundImage = 0x2f0; // UImage*
		constexpr auto OffScreenBackgroundImage = 0x2f8; // UImage*
		constexpr auto OnScreenTimeText = 0x300; // UTextBlock*
		constexpr auto OffScreenTimeText = 0x308; // UTextBlock*
	}

	namespace n_UAnimNotifyState_TimedNiagaraEffect {
		constexpr auto Template = 0x30; // UNiagaraSystem*
		constexpr auto SocketName = 0x38; // FName
		constexpr auto LocationOffset = 0x40; // FVector
		constexpr auto RotationOffset = 0x4c; // FRotator
		constexpr auto bDestroyAtEnd = 0x58; // bool
	}

	namespace n_AActor {
		constexpr auto PrimaryActorTick = 0x28; // FActorTickFunction
		constexpr auto bNetTemporary = 0x58; // char : 1
		constexpr auto bNetStartup = 0x58; // char : 1
		constexpr auto bOnlyRelevantToOwner = 0x58; // char : 1
		constexpr auto bAlwaysRelevant = 0x58; // char : 1
		constexpr auto bReplicateMovement = 0x58; // char : 1
		constexpr auto bHidden = 0x58; // char : 1
		constexpr auto bTearOff = 0x58; // char : 1
		constexpr auto bForceNetAddressable = 0x58; // char : 1
		constexpr auto bExchangedRoles = 0x59; // char : 1
		constexpr auto bNetLoadOnClient = 0x59; // char : 1
		constexpr auto bNetUseOwnerRelevancy = 0x59; // char : 1
		constexpr auto bRelevantForNetworkReplays = 0x59; // char : 1
		constexpr auto bRelevantForLevelBounds = 0x59; // char : 1
		constexpr auto bReplayRewindable = 0x59; // char : 1
		constexpr auto bAllowTickBeforeBeginPlay = 0x59; // char : 1
		constexpr auto bAutoDestroyWhenFinished = 0x59; // char : 1
		constexpr auto bCanBeDamaged = 0x5a; // char : 1
		constexpr auto bBlockInput = 0x5a; // char : 1
		constexpr auto bCollideWhenPlacing = 0x5a; // char : 1
		constexpr auto bFindCameraComponentWhenViewTarget = 0x5a; // char : 1
		constexpr auto bGenerateOverlapEventsDuringLevelStreaming = 0x5a; // char : 1
		constexpr auto bIgnoresOriginShifting = 0x5a; // char : 1
		constexpr auto bEnableAutoLODGeneration = 0x5a; // char : 1
		constexpr auto bIsEditorOnlyActor = 0x5a; // char : 1
		constexpr auto bActorSeamlessTraveled = 0x5b; // char : 1
		constexpr auto bReplicates = 0x5b; // char : 1
		constexpr auto bCanBeInCluster = 0x5b; // char : 1
		constexpr auto bAllowReceiveTickEventOnDedicatedServer = 0x5b; // char : 1
		constexpr auto bActorEnableCollision = 0x5c; // char : 1
		constexpr auto bActorIsBeingDestroyed = 0x5c; // char : 1
		constexpr auto UpdateOverlapsMethodDuringLevelStreaming = 0x5d; // EActorUpdateOverlapsMethod
		constexpr auto DefaultUpdateOverlapsMethodDuringLevelStreaming = 0x5e; // EActorUpdateOverlapsMethod
		constexpr auto RemoteRole = 0x5f; // ENetRole
		constexpr auto ReplicatedMovement = 0x60; // FRepMovement
		constexpr auto InitialLifeSpan = 0x94; // float
		constexpr auto CustomTimeDilation = 0x98; // float
		constexpr auto AttachmentReplication = 0xa0; // FRepAttachment
		constexpr auto Owner = 0xe0; // AActor*
		constexpr auto NetDriverName = 0xe8; // FName
		constexpr auto Role = 0xf0; // ENetRole
		constexpr auto NetDormancy = 0xf1; // ENetDormancy
		constexpr auto SpawnCollisionHandlingMethod = 0xf2; // ESpawnActorCollisionHandlingMethod
		constexpr auto AutoReceiveInput = 0xf3; // EAutoReceiveInput
		constexpr auto InputPriority = 0xf4; // int32_t
		constexpr auto InputComponent = 0xf8; // UInputComponent*
		constexpr auto NetCullDistanceSquared = 0x100; // float
		constexpr auto NetTag = 0x104; // int32_t
		constexpr auto NetUpdateFrequency = 0x108; // float
		constexpr auto MinNetUpdateFrequency = 0x10c; // float
		constexpr auto NetPriority = 0x110; // float
		constexpr auto Instigator = 0x118; // APawn*
		constexpr auto Children = 0x120; // TArray<AActor*>
		constexpr auto RootComponent = 0x130; // USceneComponent*
		constexpr auto ControllingMatineeActors = 0x138; // TArray<AMatineeActor*>
		constexpr auto Layers = 0x150; // TArray<FName>
		constexpr auto ParentComponent = 0x160; // TWeakObjectPtr<UChildActorComponent>
		constexpr auto Tags = 0x170; // TArray<FName>
		constexpr auto OnTakeAnyDamage = 0x180; // FMulticastSparseDelegate
		constexpr auto OnTakePointDamage = 0x181; // FMulticastSparseDelegate
		constexpr auto OnTakeRadialDamage = 0x182; // FMulticastSparseDelegate
		constexpr auto OnActorBeginOverlap = 0x183; // FMulticastSparseDelegate
		constexpr auto OnActorEndOverlap = 0x184; // FMulticastSparseDelegate
		constexpr auto OnBeginCursorOver = 0x185; // FMulticastSparseDelegate
		constexpr auto OnEndCursorOver = 0x186; // FMulticastSparseDelegate
		constexpr auto OnClicked = 0x187; // FMulticastSparseDelegate
		constexpr auto OnReleased = 0x188; // FMulticastSparseDelegate
		constexpr auto OnInputTouchBegin = 0x189; // FMulticastSparseDelegate
		constexpr auto OnInputTouchEnd = 0x18a; // FMulticastSparseDelegate
		constexpr auto OnInputTouchEnter = 0x18b; // FMulticastSparseDelegate
		constexpr auto OnInputTouchLeave = 0x18c; // FMulticastSparseDelegate
		constexpr auto OnActorHit = 0x18d; // FMulticastSparseDelegate
		constexpr auto OnDestroyed = 0x18e; // FMulticastSparseDelegate
		constexpr auto OnEndPlay = 0x18f; // FMulticastSparseDelegate
		constexpr auto InstanceComponents = 0x1f0; // TArray<UActorComponent*>
		constexpr auto BlueprintCreatedComponents = 0x200; // TArray<UActorComponent*>
	}

	namespace n_UDirectionalLightComponent {
		constexpr auto ShadowCascadeBiasDistribution = 0x328; // float
		constexpr auto bEnableLightShaftOcclusion = 0x32c; // char : 1
		constexpr auto OcclusionMaskDarkness = 0x330; // float
		constexpr auto OcclusionDepthRange = 0x334; // float
		constexpr auto LightShaftOverrideDirection = 0x338; // FVector
		constexpr auto WholeSceneDynamicShadowRadius = 0x344; // float
		constexpr auto DynamicShadowDistanceMovableLight = 0x348; // float
		constexpr auto DynamicShadowDistanceStationaryLight = 0x34c; // float
		constexpr auto DynamicShadowCascades = 0x350; // int32_t
		constexpr auto CascadeDistributionExponent = 0x354; // float
		constexpr auto CascadeTransitionFraction = 0x358; // float
		constexpr auto ShadowDistanceFadeoutFraction = 0x35c; // float
		constexpr auto bUseInsetShadowsForMovableObjects = 0x360; // char : 1
		constexpr auto FarShadowCascadeCount = 0x364; // int32_t
		constexpr auto FarShadowDistance = 0x368; // float
		constexpr auto DistanceFieldShadowDistance = 0x36c; // float
		constexpr auto LightSourceAngle = 0x370; // float
		constexpr auto LightSourceSoftAngle = 0x374; // float
		constexpr auto ShadowSourceAngleFactor = 0x378; // float
		constexpr auto TraceDistance = 0x37c; // float
		constexpr auto bUsedAsAtmosphereSunLight = 0x380; // char : 1
		constexpr auto AtmosphereSunLightIndex = 0x384; // int32_t
		constexpr auto AtmosphereSunDiskColorScale = 0x388; // FLinearColor
		constexpr auto bPerPixelAtmosphereTransmittance = 0x398; // char : 1
		constexpr auto bCastShadowsOnClouds = 0x398; // char : 1
		constexpr auto bCastShadowsOnAtmosphere = 0x398; // char : 1
		constexpr auto bCastCloudShadows = 0x398; // char : 1
		constexpr auto CloudShadowStrength = 0x39c; // float
		constexpr auto CloudShadowOnAtmosphereStrength = 0x3a0; // float
		constexpr auto CloudShadowOnSurfaceStrength = 0x3a4; // float
		constexpr auto CloudShadowDepthBias = 0x3a8; // float
		constexpr auto CloudShadowExtent = 0x3ac; // float
		constexpr auto CloudShadowMapResolutionScale = 0x3b0; // float
		constexpr auto CloudShadowRaySampleCountScale = 0x3b4; // float
		constexpr auto CloudScatteredLuminanceScale = 0x3b8; // FLinearColor
		constexpr auto LightmassSettings = 0x3c8; // FLightmassDirectionalLightSettings
		constexpr auto bCastModulatedShadows = 0x3d8; // char : 1
		constexpr auto ModulatedShadowColor = 0x3dc; // FColor
		constexpr auto ShadowAmount = 0x3e0; // float
	}

	namespace n_UPrimitiveComponent {
		constexpr auto MinDrawDistance = 0x200; // float
		constexpr auto LDMaxDrawDistance = 0x204; // float
		constexpr auto CachedMaxDrawDistance = 0x208; // float
		constexpr auto DepthPriorityGroup = 0x20c; // ESceneDepthPriorityGroup
		constexpr auto ViewOwnerDepthPriorityGroup = 0x20d; // ESceneDepthPriorityGroup
		constexpr auto IndirectLightingCacheQuality = 0x20e; // EIndirectLightingCacheQuality
		constexpr auto LightmapType = 0x20f; // ELightmapType
		constexpr auto bUseMaxLODAsImposter = 0x210; // char : 1
		constexpr auto bBatchImpostersAsInstances = 0x210; // char : 1
		constexpr auto bNeverDistanceCull = 0x210; // char : 1
		constexpr auto bAlwaysCreatePhysicsState = 0x210; // char : 1
		constexpr auto bGenerateOverlapEvents = 0x211; // char : 1
		constexpr auto bMultiBodyOverlap = 0x211; // char : 1
		constexpr auto bTraceComplexOnMove = 0x211; // char : 1
		constexpr auto bReturnMaterialOnMove = 0x211; // char : 1
		constexpr auto bUseViewOwnerDepthPriorityGroup = 0x211; // char : 1
		constexpr auto bAllowCullDistanceVolume = 0x211; // char : 1
		constexpr auto bHasMotionBlurVelocityMeshes = 0x211; // char : 1
		constexpr auto bVisibleInReflectionCaptures = 0x211; // char : 1
		constexpr auto bVisibleInRealTimeSkyCaptures = 0x212; // char : 1
		constexpr auto bVisibleInRayTracing = 0x212; // char : 1
		constexpr auto bRenderInMainPass = 0x212; // char : 1
		constexpr auto bRenderInDepthPass = 0x212; // char : 1
		constexpr auto bReceivesDecals = 0x212; // char : 1
		constexpr auto bOwnerNoSee = 0x212; // char : 1
		constexpr auto bOnlyOwnerSee = 0x212; // char : 1
		constexpr auto bTreatAsBackgroundForOcclusion = 0x212; // char : 1
		constexpr auto bUseAsOccluder = 0x213; // char : 1
		constexpr auto bSelectable = 0x213; // char : 1
		constexpr auto bForceMipStreaming = 0x213; // char : 1
		constexpr auto bHasPerInstanceHitProxies = 0x213; // char : 1
		constexpr auto CastShadow = 0x213; // char : 1
		constexpr auto bAffectDynamicIndirectLighting = 0x213; // char : 1
		constexpr auto bAffectDistanceFieldLighting = 0x213; // char : 1
		constexpr auto bCastDynamicShadow = 0x213; // char : 1
		constexpr auto bCastStaticShadow = 0x214; // char : 1
		constexpr auto bCastVolumetricTranslucentShadow = 0x214; // char : 1
		constexpr auto bCastContactShadow = 0x214; // char : 1
		constexpr auto bSelfShadowOnly = 0x214; // char : 1
		constexpr auto bCastFarShadow = 0x214; // char : 1
		constexpr auto bCastInsetShadow = 0x214; // char : 1
		constexpr auto bCastCinematicShadow = 0x214; // char : 1
		constexpr auto bCastHiddenShadow = 0x214; // char : 1
		constexpr auto bCastShadowAsTwoSided = 0x215; // char : 1
		constexpr auto bLightAsIfStatic = 0x215; // char : 1
		constexpr auto bLightAttachmentsAsGroup = 0x215; // char : 1
		constexpr auto bExcludeFromLightAttachmentGroup = 0x215; // char : 1
		constexpr auto bReceiveMobileCSMShadows = 0x215; // char : 1
		constexpr auto bSingleSampleShadowFromStationaryLights = 0x215; // char : 1
		constexpr auto bIgnoreRadialImpulse = 0x215; // char : 1
		constexpr auto bIgnoreRadialForce = 0x215; // char : 1
		constexpr auto bApplyImpulseOnDamage = 0x216; // char : 1
		constexpr auto bReplicatePhysicsToAutonomousProxy = 0x216; // char : 1
		constexpr auto bFillCollisionUnderneathForNavmesh = 0x216; // char : 1
		constexpr auto AlwaysLoadOnClient = 0x216; // char : 1
		constexpr auto AlwaysLoadOnServer = 0x216; // char : 1
		constexpr auto bUseEditorCompositing = 0x216; // char : 1
		constexpr auto bRenderCustomDepth = 0x216; // char : 1
		constexpr auto bVisibleInSceneCaptureOnly = 0x216; // char : 1
		constexpr auto bHiddenInSceneCapture = 0x217; // char : 1
		constexpr auto bHasCustomNavigableGeometry = 0x218; // EHasCustomNavigableGeometry
		constexpr auto CanCharacterStepUpOn = 0x21a; // ECanBeCharacterBase
		constexpr auto LightingChannels = 0x21b; // FLightingChannels
		constexpr auto CustomDepthStencilWriteMask = 0x21c; // ERendererStencilMask
		constexpr auto CustomDepthStencilValue = 0x220; // int32_t
		constexpr auto CustomPrimitiveData = 0x228; // FCustomPrimitiveData
		constexpr auto CustomPrimitiveDataInternal = 0x238; // FCustomPrimitiveData
		constexpr auto TranslucencySortPriority = 0x250; // int32_t
		constexpr auto TranslucencySortDistanceOffset = 0x254; // float
		constexpr auto VisibilityId = 0x258; // int32_t
		constexpr auto RuntimeVirtualTextures = 0x260; // TArray<URuntimeVirtualTexture*>
		constexpr auto VirtualTextureLodBias = 0x270; // int8_t
		constexpr auto VirtualTextureCullMips = 0x271; // int8_t
		constexpr auto VirtualTextureMinCoverage = 0x272; // int8_t
		constexpr auto VirtualTextureRenderPassType = 0x273; // ERuntimeVirtualTextureMainPassType
		constexpr auto LpvBiasMultiplier = 0x278; // float
		constexpr auto BoundsScale = 0x284; // float
		constexpr auto MoveIgnoreActors = 0x298; // TArray<AActor*>
		constexpr auto MoveIgnoreComponents = 0x2a8; // TArray<UPrimitiveComponent*>
		constexpr auto BodyInstance = 0x2c8; // FBodyInstance
		constexpr auto OnComponentHit = 0x420; // FMulticastSparseDelegate
		constexpr auto OnComponentBeginOverlap = 0x421; // FMulticastSparseDelegate
		constexpr auto OnComponentEndOverlap = 0x422; // FMulticastSparseDelegate
		constexpr auto OnComponentWake = 0x423; // FMulticastSparseDelegate
		constexpr auto OnComponentSleep = 0x424; // FMulticastSparseDelegate
		constexpr auto OnBeginCursorOver = 0x426; // FMulticastSparseDelegate
		constexpr auto OnEndCursorOver = 0x427; // FMulticastSparseDelegate
		constexpr auto OnClicked = 0x428; // FMulticastSparseDelegate
		constexpr auto OnReleased = 0x429; // FMulticastSparseDelegate
		constexpr auto OnInputTouchBegin = 0x42a; // FMulticastSparseDelegate
		constexpr auto OnInputTouchEnd = 0x42b; // FMulticastSparseDelegate
		constexpr auto OnInputTouchEnter = 0x42c; // FMulticastSparseDelegate
		constexpr auto OnInputTouchLeave = 0x42d; // FMulticastSparseDelegate
		constexpr auto LODParentPrimitive = 0x448; // UPrimitiveComponent*
	}

	namespace n_UPhysicsAsset {
		constexpr auto BoundsBodies = 0x30; // TArray<int32_t>
		constexpr auto SkeletalBodySetups = 0x40; // TArray<USkeletalBodySetup*>
		constexpr auto ConstraintSetup = 0x50; // TArray<UPhysicsConstraintTemplate*>
		constexpr auto SolverIterations = 0x60; // FSolverIterations
		constexpr auto SolverType = 0x7c; // EPhysicsAssetSolverType
		constexpr auto bNotForDedicatedServer = 0x7d; // char : 1
		constexpr auto ThumbnailInfo = 0x120; // UThumbnailInfo*
		constexpr auto BodySetup = 0x128; // TArray<UBodySetup*>
	}

	namespace n_URendererSettings {
		constexpr auto bMobileDisableVertexFog = 0x38; // char : 1
		constexpr auto MaxMobileCascades = 0x3c; // int32_t
		constexpr auto MobileMSAASampleCount = 0x40; // EMobileMSAASampleCount
		constexpr auto bMobileAllowDitheredLODTransition = 0x44; // char : 1
		constexpr auto bMobileAllowSoftwareOcclusionCulling = 0x44; // char : 1
		constexpr auto bMobileVirtualTextures = 0x44; // char : 1
		constexpr auto bDiscardUnusedQualityLevels = 0x44; // char : 1
		constexpr auto bOcclusionCulling = 0x44; // char : 1
		constexpr auto MinScreenRadiusForLights = 0x48; // float
		constexpr auto MinScreenRadiusForEarlyZPass = 0x4c; // float
		constexpr auto MinScreenRadiusForCSMdepth = 0x50; // float
		constexpr auto bPrecomputedVisibilityWarning = 0x54; // char : 1
		constexpr auto bTextureStreaming = 0x54; // char : 1
		constexpr auto bUseDXT5NormalMaps = 0x54; // char : 1
		constexpr auto bVirtualTextures = 0x54; // char : 1
		constexpr auto bVirtualTextureEnableAutoImport = 0x54; // char : 1
		constexpr auto bVirtualTexturedLightmaps = 0x54; // char : 1
		constexpr auto VirtualTextureTileSize = 0x58; // uint32_t
		constexpr auto VirtualTextureTileBorderSize = 0x5c; // uint32_t
		constexpr auto VirtualTextureFeedbackFactor = 0x60; // uint32_t
		constexpr auto bVirtualTextureEnableCompressZlib = 0x64; // char : 1
		constexpr auto bVirtualTextureEnableCompressCrunch = 0x64; // char : 1
		constexpr auto bClearCoatEnableSecondNormal = 0x64; // char : 1
		constexpr auto ReflectionCaptureResolution = 0x68; // int32_t
		constexpr auto bReflectionCaptureCompression = 0x6c; // char : 1
		constexpr auto ReflectionEnvironmentLightmapMixBasedOnRoughness = 0x6c; // char : 1
		constexpr auto bForwardShading = 0x6c; // char : 1
		constexpr auto bVertexFoggingForOpaque = 0x6c; // char : 1
		constexpr auto bAllowStaticLighting = 0x6c; // char : 1
		constexpr auto bUseNormalMapsForStaticLighting = 0x6c; // char : 1
		constexpr auto bGenerateMeshDistanceFields = 0x6c; // char : 1
		constexpr auto bEightBitMeshDistanceFields = 0x6c; // char : 1
		constexpr auto bGenerateLandscapeGIData = 0x6d; // char : 1
		constexpr auto bCompressMeshDistanceFields = 0x6d; // char : 1
		constexpr auto TessellationAdaptivePixelsPerTriangle = 0x70; // float
		constexpr auto bSeparateTranslucency = 0x74; // char : 1
		constexpr auto TranslucentSortPolicy = 0x78; // ETranslucentSortPolicy
		constexpr auto TranslucentSortAxis = 0x7c; // FVector
		constexpr auto bEnableVRS = 0x88; // char : 1
		constexpr auto bEnableImageVRS = 0x88; // char : 1
		constexpr auto HMDFixedFoveationLevel = 0x8c; // EFixedFoveationLevels
		constexpr auto CustomDepthStencil = 0x8d; // ECustomDepthStencil
		constexpr auto bCustomDepthTaaJitter = 0x90; // char : 1
		constexpr auto bEnableAlphaChannelInPostProcessing = 0x94; // EAlphaChannelMode
		constexpr auto bDefaultFeatureBloom = 0x98; // char : 1
		constexpr auto bDefaultFeatureAmbientOcclusion = 0x98; // char : 1
		constexpr auto bDefaultFeatureAmbientOcclusionStaticFraction = 0x98; // char : 1
		constexpr auto bDefaultFeatureAutoExposure = 0x98; // char : 1
		constexpr auto DefaultFeatureAutoExposure = 0x9c; // EAutoExposureMethodUI
		constexpr auto DefaultFeatureAutoExposureBias = 0xa0; // float
		constexpr auto bExtendDefaultLuminanceRangeInAutoExposureSettings = 0xa4; // char : 1
		constexpr auto bUsePreExposure = 0xa4; // char : 1
		constexpr auto bEnablePreExposureOnlyInTheEditor = 0xa4; // char : 1
		constexpr auto bDefaultFeatureMotionBlur = 0xa4; // char : 1
		constexpr auto bDefaultFeatureLensFlare = 0xa4; // char : 1
		constexpr auto bTemporalUpsampling = 0xa4; // char : 1
		constexpr auto bSSGI = 0xa4; // char : 1
		constexpr auto DefaultFeatureAntiAliasing = 0xa8; // EAntiAliasingMethod
		constexpr auto DefaultLightUnits = 0xa9; // ELightUnits
		constexpr auto DefaultBackBufferPixelFormat = 0xaa; // EDefaultBackBufferPixelFormat
		constexpr auto bRenderUnbuiltPreviewShadowsInGame = 0xac; // char : 1
		constexpr auto bStencilForLODDither = 0xac; // char : 1
		constexpr auto EarlyZPass = 0xb0; // EEarlyZPass
		constexpr auto bEarlyZPassOnlyMaterialMasking = 0xb4; // char : 1
		constexpr auto bDBuffer = 0xb4; // char : 1
		constexpr auto ClearSceneMethod = 0xb8; // EClearSceneOptions
		constexpr auto bBasePassOutputsVelocity = 0xbc; // char : 1
		constexpr auto bVertexDeformationOutputsVelocity = 0xbc; // char : 1
		constexpr auto bSelectiveBasePassOutputs = 0xbc; // char : 1
		constexpr auto bDefaultParticleCutouts = 0xbc; // char : 1
		constexpr auto GPUSimulationTextureSizeX = 0xc0; // int32_t
		constexpr auto GPUSimulationTextureSizeY = 0xc4; // int32_t
		constexpr auto bGlobalClipPlane = 0xc8; // char : 1
		constexpr auto GBufferFormat = 0xcc; // EGBufferFormat
		constexpr auto bUseGPUMorphTargets = 0xd0; // char : 1
		constexpr auto bNvidiaAftermathEnabled = 0xd0; // char : 1
		constexpr auto bMultiView = 0xd0; // char : 1
		constexpr auto bMobilePostProcessing = 0xd0; // char : 1
		constexpr auto bMobileMultiView = 0xd0; // char : 1
		constexpr auto bMobileUseHWsRGBEncoding = 0xd0; // char : 1
		constexpr auto bRoundRobinOcclusion = 0xd0; // char : 1
		constexpr auto bODSCapture = 0xd0; // char : 1
		constexpr auto bMeshStreaming = 0xd1; // char : 1
		constexpr auto WireframeCullThreshold = 0xd4; // float
		constexpr auto bEnableRayTracing = 0xd8; // char : 1
		constexpr auto bEnableRayTracingTextureLOD = 0xd8; // char : 1
		constexpr auto bSupportStationarySkylight = 0xd8; // char : 1
		constexpr auto bSupportLowQualityLightmaps = 0xd8; // char : 1
		constexpr auto bSupportPointLightWholeSceneShadows = 0xd8; // char : 1
		constexpr auto bSupportAtmosphericFog = 0xd8; // char : 1
		constexpr auto bSupportSkyAtmosphere = 0xd8; // char : 1
		constexpr auto bSupportSkyAtmosphereAffectsHeightFog = 0xd8; // char : 1
		constexpr auto bSupportSkinCacheShaders = 0xd9; // char : 1
		constexpr auto DefaultSkinCacheBehavior = 0xdc; // ESkinCacheDefaultBehavior
		constexpr auto SkinCacheSceneMemoryLimitInMB = 0xe0; // float
		constexpr auto bMobileEnableStaticAndCSMShadowReceivers = 0xe4; // char : 1
		constexpr auto bMobileEnableMovableLightCSMShaderCulling = 0xe4; // char : 1
		constexpr auto bMobileAllowDistanceFieldShadows = 0xe4; // char : 1
		constexpr auto bMobileAllowMovableDirectionalLights = 0xe4; // char : 1
		constexpr auto MobileNumDynamicPointLights = 0xe8; // uint32_t
		constexpr auto bMobileDynamicPointLightsUseStaticBranch = 0xec; // char : 1
		constexpr auto bMobileAllowMovableSpotlights = 0xec; // char : 1
		constexpr auto bMobileAllowMovableSpotlightShadows = 0xec; // char : 1
		constexpr auto bSupport16BitBoneIndex = 0xec; // char : 1
		constexpr auto bGPUSkinLimit2BoneInfluences = 0xec; // char : 1
		constexpr auto bSupportDepthOnlyIndexBuffers = 0xec; // char : 1
		constexpr auto bSupportReversedIndexBuffers = 0xec; // char : 1
		constexpr auto bLPV = 0xec; // char : 1
		constexpr auto bMobileAmbientOcclusion = 0xed; // char : 1
		constexpr auto bUseUnlimitedBoneInfluences = 0xed; // char : 1
		constexpr auto UnlimitedBonInfluencesThreshold = 0xf0; // int32_t
		constexpr auto MaxSkinBones = 0xf4; // FPerPlatformInt
		constexpr auto MobilePlanarReflectionMode = 0xf8; // EMobilePlanarReflectionMode
		constexpr auto bMobileTemporalAAMethod = 0xfc; // char : 1
		constexpr auto bStreamSkeletalMeshLODs = 0x100; // FPerPlatformBool
		constexpr auto bDiscardSkeletalMeshOptionalLODs = 0x101; // FPerPlatformBool
		constexpr auto VisualizeCalibrationColorMaterialPath = 0x108; // FSoftObjectPath
		constexpr auto VisualizeCalibrationCustomMaterialPath = 0x120; // FSoftObjectPath
		constexpr auto VisualizeCalibrationGrayscaleMaterialPath = 0x138; // FSoftObjectPath
	}

	namespace n_AVolumetricCloud {
		constexpr auto VolumetricCloudComponent = 0x220; // UVolumetricCloudComponent*
	}

	namespace n_ALineTraceGun {
		constexpr auto LineTraceGunConfig = 0x698; // FLineTraceGunData
		constexpr auto ImpactTemplate = 0x6d8; // AGunImpactEffectManager*
		constexpr auto ImpactManager = 0x6e0; // AGunImpactEffectManager*
		constexpr auto MaxImpactEffectDistance = 0x6e8; // float
		constexpr auto MaxSimulatedImpactEffectDistance = 0x6ec; // float
		constexpr auto BulletNotify = 0x6f0; // TArray<FLineTraceInfo>
		constexpr auto TrailFX = 0x700; // UParticleSystem*
		constexpr auto TrailTargetParam = 0x708; // FName
		constexpr auto ColorParam = 0x710; // FName
		constexpr auto tracerFrequency = 0x718; // char
		constexpr auto BulletWhizEvent = 0x728; // UAkAudioEvent*
		constexpr auto MaxBulletWhizDist = 0x730; // float
		constexpr auto BulletWhizDelay = 0x734; // float
		constexpr auto BulletWhizStart = 0x738; // FVector
		constexpr auto BulletWhizEnd = 0x744; // FVector
		constexpr auto BulletWhizClosestPoint = 0x750; // FVector
	}

	namespace n_UPortalWarsNavBarWidget {
		constexpr auto OnNavBarStateChanged = 0x2a8; // FMulticastInlineDelegate
		constexpr auto CurrentState = 0x2b8; // char
		constexpr auto ItemArray = 0x2c0; // TArray<FNavBarItem>
		constexpr auto ItemPadding = 0x2d0; // FMargin
		constexpr auto ButtonPanel = 0x2e0; // UPanelWidget*
		constexpr auto NavButtonWidgetClass = 0x2e8; // UPortalWarsNavButtonWidget*
		constexpr auto NavSubHeaderWidgetClass = 0x2f0; // UPortalWarsInputWidget*
		constexpr auto bSelectOnControllerHover = 0x2f8; // bool
		constexpr auto ButtonArray = 0x300; // TArray<UPortalWarsNavButtonWidget*>
		constexpr auto NewColor = 0x310; // FLinearColor
		constexpr auto PrevGamepadButton = 0x320; // UPortalWarsButtonWidget*
		constexpr auto NextGamepadButton = 0x328; // UPortalWarsButtonWidget*
		constexpr auto PrevGamepadKey = 0x330; // FKey
		constexpr auto NextGamepadKey = 0x348; // FKey
		constexpr auto TabNextEvent = 0x360; // UAkAudioEvent*
		constexpr auto TabPrevEvent = 0x368; // UAkAudioEvent*
	}

	namespace n_UViewport {
		constexpr auto BackgroundColor = 0x120; // FLinearColor
	}

	namespace n_UAISubsystem {
		constexpr auto AISystem = 0x30; // UAISystem*
	}

	namespace n_UGameUserSettings {
		constexpr auto bUseVSync = 0x28; // bool
		constexpr auto bUseDynamicResolution = 0x29; // bool
		constexpr auto ResolutionSizeX = 0x80; // uint32_t
		constexpr auto ResolutionSizeY = 0x84; // uint32_t
		constexpr auto LastUserConfirmedResolutionSizeX = 0x88; // uint32_t
		constexpr auto LastUserConfirmedResolutionSizeY = 0x8c; // uint32_t
		constexpr auto WindowPosX = 0x90; // int32_t
		constexpr auto WindowPosY = 0x94; // int32_t
		constexpr auto FullscreenMode = 0x98; // int32_t
		constexpr auto LastConfirmedFullscreenMode = 0x9c; // int32_t
		constexpr auto PreferredFullscreenMode = 0xa0; // int32_t
		constexpr auto Version = 0xa4; // uint32_t
		constexpr auto AudioQualityLevel = 0xa8; // int32_t
		constexpr auto LastConfirmedAudioQualityLevel = 0xac; // int32_t
		constexpr auto FrameRateLimit = 0xb0; // float
		constexpr auto DesiredScreenWidth = 0xb8; // int32_t
		constexpr auto bUseDesiredScreenHeight = 0xbc; // bool
		constexpr auto DesiredScreenHeight = 0xc0; // int32_t
		constexpr auto LastUserConfirmedDesiredScreenWidth = 0xc4; // int32_t
		constexpr auto LastUserConfirmedDesiredScreenHeight = 0xc8; // int32_t
		constexpr auto LastRecommendedScreenWidth = 0xcc; // float
		constexpr auto LastRecommendedScreenHeight = 0xd0; // float
		constexpr auto LastCPUBenchmarkResult = 0xd4; // float
		constexpr auto LastGPUBenchmarkResult = 0xd8; // float
		constexpr auto LastCPUBenchmarkSteps = 0xe0; // TArray<float>
		constexpr auto LastGPUBenchmarkSteps = 0xf0; // TArray<float>
		constexpr auto LastGPUBenchmarkMultiplier = 0x100; // float
		constexpr auto bUseHDRDisplayOutput = 0x104; // bool
		constexpr auto HDRDisplayOutputNits = 0x108; // int32_t
		constexpr auto OnGameUserSettingsUINeedsUpdate = 0x110; // FMulticastInlineDelegate
	}

	namespace n_APortalWarsTutorialHUD {
		constexpr auto TutorialHUDOverlayWidget = 0x408; // UPWTutorialHUDOverlayWidget*
		constexpr auto TutorialHUDOverlayWidgetClass = 0x410; // UPWTutorialHUDOverlayWidget*
		constexpr auto GoalIndicatorWidgetClass = 0x418; // UPortalWarsIndicatorWidget*
	}

	namespace n_UEnvQueryInstanceBlueprintWrapper {
		constexpr auto QueryID = 0x30; // int32_t
		constexpr auto ItemType = 0x58; // UEnvQueryItemType*
		constexpr auto OptionIndex = 0x60; // int32_t
		constexpr auto OnQueryFinishedEvent = 0x68; // FMulticastInlineDelegate
	}

	namespace n_UGeometryCollectionDebugDrawComponent {
		constexpr auto GeometryCollectionDebugDrawActor = 0xb0; // AGeometryCollectionDebugDrawActor*
		constexpr auto GeometryCollectionRenderLevelSetActor = 0xb8; // AGeometryCollectionRenderLevelSetActor*
	}

	namespace n_UMaterialExpressionArcsineFast {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UGizmoRectangleComponent {
		constexpr auto DirectionX = 0x470; // FVector
		constexpr auto DirectionY = 0x47c; // FVector
		constexpr auto OffsetX = 0x488; // float
		constexpr auto OffsetY = 0x48c; // float
		constexpr auto LengthX = 0x490; // float
		constexpr auto LengthY = 0x494; // float
		constexpr auto Thickness = 0x498; // float
		constexpr auto SegmentFlags = 0x49c; // char
	}

	namespace n_UMaterialExpressionBlendMaterialAttributes {
		constexpr auto A = 0x40; // FMaterialAttributesInput
		constexpr auto B = 0x58; // FMaterialAttributesInput
		constexpr auto Alpha = 0x70; // FExpressionInput
		constexpr auto PixelAttributeBlendType = 0x84; // EMaterialAttributeBlend
		constexpr auto VertexAttributeBlendType = 0x85; // EMaterialAttributeBlend
	}

	namespace n_UUserWidget {
		constexpr auto ColorAndOpacity = 0x110; // FLinearColor
		constexpr auto ColorAndOpacityDelegate = 0x120; // FDelegate
		constexpr auto ForegroundColor = 0x130; // FSlateColor
		constexpr auto ForegroundColorDelegate = 0x158; // FDelegate
		constexpr auto OnVisibilityChanged = 0x168; // FMulticastInlineDelegate
		constexpr auto Padding = 0x190; // FMargin
		constexpr auto ActiveSequencePlayers = 0x1a0; // TArray<UUMGSequencePlayer*>
		constexpr auto AnimationTickManager = 0x1b0; // UUMGSequenceTickManager*
		constexpr auto StoppedSequencePlayers = 0x1b8; // TArray<UUMGSequencePlayer*>
		constexpr auto NamedSlotBindings = 0x1c8; // TArray<FNamedSlotBinding>
		constexpr auto WidgetTree = 0x1d8; // UWidgetTree*
		constexpr auto Priority = 0x1e0; // int32_t
		constexpr auto bSupportsKeyboardFocus = 0x1e4; // char : 1
		constexpr auto bIsFocusable = 0x1e4; // char : 1
		constexpr auto bStopAction = 0x1e4; // char : 1
		constexpr auto bHasScriptImplementedTick = 0x1e4; // char : 1
		constexpr auto bHasScriptImplementedPaint = 0x1e4; // char : 1
		constexpr auto TickFrequency = 0x1f0; // EWidgetTickFrequency
		constexpr auto InputComponent = 0x1f8; // UInputComponent*
		constexpr auto AnimationCallbacks = 0x200; // TArray<FAnimationEventBinding>
	}

	namespace n_UPlaneFalloff {
		constexpr auto Magnitude = 0xb0; // float
		constexpr auto MinRange = 0xb4; // float
		constexpr auto MaxRange = 0xb8; // float
		constexpr auto Default = 0xbc; // float
		constexpr auto Distance = 0xc0; // float
		constexpr auto Position = 0xc4; // FVector
		constexpr auto Normal = 0xd0; // FVector
		constexpr auto Falloff = 0xdc; // EFieldFalloffType
	}

	namespace n_UParticleModuleAccelerationDragScaleOverLife {
		constexpr auto DragScale = 0x38; // UDistributionFloat*
		constexpr auto DragScaleRaw = 0x40; // FRawDistributionFloat
	}

	namespace n_UMaterialExpressionNormalize {
		constexpr auto VectorInput = 0x40; // FExpressionInput
	}

	namespace n_UEditableTextWidgetStyle {
		constexpr auto EditableTextStyle = 0x30; // FEditableTextStyle
	}

	namespace n_ATemplateSequenceActor {
		constexpr auto PlaybackSettings = 0x228; // FMovieSceneSequencePlaybackSettings
		constexpr auto SequencePlayer = 0x240; // UTemplateSequencePlayer*
		constexpr auto TemplateSequence = 0x248; // FSoftObjectPath
		constexpr auto BindingOverride = 0x260; // FTemplateSequenceBindingOverrideData
	}

	namespace n_USoundNodeSoundClass {
		constexpr auto SoundClassOverride = 0x48; // USoundClass*
	}

	namespace n_UMasterAudioSubmixCaptureProtocol {
		constexpr auto Filename = 0x58; // FString
	}

	namespace n_APortalWarsCrowd {
		constexpr auto AkComp = 0x220; // UPortalWarsAkComponent*
		constexpr auto ReactionEvent = 0x228; // UAkAudioEvent*
		constexpr auto DisappointedEvent = 0x230; // UAkAudioEvent*
		constexpr auto LaughEvent = 0x238; // UAkAudioEvent*
		constexpr auto BooEvent = 0x240; // UAkAudioEvent*
		constexpr auto WinRoundEvent = 0x248; // UAkAudioEvent*
		constexpr auto WinMatchEvent = 0x250; // UAkAudioEvent*
		constexpr auto LoseRoundEvent = 0x258; // UAkAudioEvent*
		constexpr auto KillstreakEvents = 0x260; // TArray<UAkAudioEvent*>
		constexpr auto DisappointmentThreshold = 0x284; // float
		constexpr auto DefaultExcitementMultiplier = 0x288; // float
		constexpr auto MatchPointMultiplier = 0x28c; // float
		constexpr auto MultikillMultiplier = 0x290; // float
		constexpr auto KillstreakDenominator = 0x294; // float
	}

	namespace n_UPortalWarsGameSessionReconnectDialog {
		constexpr auto ReconnectButton = 0x390; // UPortalWarsButtonWidget*
		constexpr auto ReconnectSwitcher = 0x398; // UWidgetSwitcher*
	}

	namespace n_UDecalComponent {
		constexpr auto DecalMaterial = 0x1f8; // UMaterialInterface*
		constexpr auto SortOrder = 0x200; // int32_t
		constexpr auto FadeScreenSize = 0x204; // float
		constexpr auto FadeStartDelay = 0x208; // float
		constexpr auto FadeDuration = 0x20c; // float
		constexpr auto FadeInDuration = 0x210; // float
		constexpr auto FadeInStartDelay = 0x214; // float
		constexpr auto bDestroyOwnerAfterFade = 0x218; // char : 1
		constexpr auto DecalSize = 0x21c; // FVector
	}

	namespace n_UBodySetupCore {
		constexpr auto BoneName = 0x28; // FName
		constexpr auto PhysicsType = 0x30; // EPhysicsType
		constexpr auto CollisionTraceFlag = 0x31; // ECollisionTraceFlag
		constexpr auto CollisionReponse = 0x32; // EBodyCollisionResponse
	}

	namespace n_APointLight {
		constexpr auto PointLightComponent = 0x230; // UPointLightComponent*
	}

	namespace n_UTextLayoutWidget {
		constexpr auto ShapedTextOptions = 0x108; // FShapedTextOptions
		constexpr auto Justification = 0x10b; // ETextJustify
		constexpr auto WrappingPolicy = 0x10c; // ETextWrappingPolicy
		constexpr auto AutoWrapText = 0x10d; // char : 1
		constexpr auto WrapTextAt = 0x110; // float
		constexpr auto Margin = 0x114; // FMargin
		constexpr auto LineHeightPercentage = 0x124; // float
	}

	namespace n_UReflectionCaptureComponent {
		constexpr auto CaptureOffsetComponent = 0x1f8; // UBillboardComponent*
		constexpr auto ReflectionSourceType = 0x200; // EReflectionSourceType
		constexpr auto MobileReflectionCompression = 0x201; // EMobileReflectionCompression
		constexpr auto Cubemap = 0x208; // UTextureCube*
		constexpr auto SourceCubemapAngle = 0x210; // float
		constexpr auto Brightness = 0x214; // float
		constexpr auto bModifyMaxValueRGBM = 0x218; // bool
		constexpr auto MaxValueRGBM = 0x21c; // float
		constexpr auto CaptureOffset = 0x220; // FVector
		constexpr auto MapBuildDataId = 0x22c; // FGuid
		constexpr auto CachedEncodedHDRCubemap = 0x250; // UTextureCube*
	}

	namespace n_UPortalWarsFlagResetStatusWidget {
		constexpr auto FlagProgressBar = 0x260; // UProgressBar*
		constexpr auto OutlineImage = 0x268; // UImage*
		constexpr auto RotateAnimation = 0x270; // UWidgetAnimation*
		constexpr auto BlueOutlineImage = 0x278; // UTexture2D*
		constexpr auto RedOutlineImage = 0x280; // UTexture2D*
		constexpr auto BlueFillImage = 0x288; // UTexture2D*
		constexpr auto RedFillImage = 0x290; // UTexture2D*
	}

	namespace n_UMaterialExpressionRotator {
		constexpr auto Coordinate = 0x40; // FExpressionInput
		constexpr auto Time = 0x54; // FExpressionInput
		constexpr auto CenterX = 0x68; // float
		constexpr auto CenterY = 0x6c; // float
		constexpr auto Speed = 0x70; // float
		constexpr auto ConstCoordinate = 0x74; // uint32_t
	}

	namespace n_UNiagaraComponent {
		constexpr auto Asset = 0x450; // UNiagaraSystem*
		constexpr auto TickBehavior = 0x458; // ENiagaraTickBehavior
		constexpr auto RandomSeedOffset = 0x45c; // int32_t
		constexpr auto OverrideParameters = 0x460; // FNiagaraUserRedirectionParameterStore
		constexpr auto bForceSolo = 0x528; // char : 1
		constexpr auto bEnableGpuComputeDebug = 0x528; // char : 1
		constexpr auto bAutoDestroy = 0x558; // char : 1
		constexpr auto bRenderingEnabled = 0x558; // char : 1
		constexpr auto bAutoManageAttachment = 0x558; // char : 1
		constexpr auto bAutoAttachWeldSimulatedBodies = 0x558; // char : 1
		constexpr auto MaxTimeBeforeForceUpdateTransform = 0x55c; // float
		constexpr auto EmitterMaterials = 0x560; // TArray<FNiagaraMaterialOverride>
		constexpr auto OnSystemFinished = 0x578; // FMulticastInlineDelegate
		constexpr auto AutoAttachParent = 0x588; // TWeakObjectPtr<USceneComponent>
		constexpr auto AutoAttachSocketName = 0x590; // FName
		constexpr auto AutoAttachLocationRule = 0x598; // EAttachmentRule
		constexpr auto AutoAttachRotationRule = 0x599; // EAttachmentRule
		constexpr auto AutoAttachScaleRule = 0x59a; // EAttachmentRule
	}

	namespace n_ADecalActor {
		constexpr auto Decal = 0x220; // UDecalComponent*
	}

	namespace n_UInterpCurveEdSetup {
		constexpr auto Tabs = 0x28; // TArray<FCurveEdTab>
		constexpr auto ActiveTab = 0x38; // int32_t
	}

	namespace n_UNiagaraDataInterfaceRenderTarget2D {
		constexpr auto Size = 0xd8; // FIntPoint
		constexpr auto MipMapGeneration = 0xe0; // ENiagaraMipMapGeneration
		constexpr auto OverrideRenderTargetFormat = 0xe1; // ETextureRenderTargetFormat
		constexpr auto bInheritUserParameterSettings = 0xe2; // char : 1
		constexpr auto bOverrideFormat = 0xe2; // char : 1
		constexpr auto RenderTargetUserParameter = 0xe8; // FNiagaraUserParameterBinding
		constexpr auto ManagedRenderTargets = 0x158; // TMap<uint64_t, UTextureRenderTarget2D*>
	}

	namespace n_URandomVector {
		constexpr auto Magnitude = 0xb0; // float
	}

	namespace n_UNiagaraDataInterfaceArrayInt32 {
		constexpr auto IntData = 0x50; // TArray<int32_t>
	}

	namespace n_UInteractiveGizmoManager {
		constexpr auto ActiveGizmos = 0x30; // TArray<FActiveGizmo>
		constexpr auto GizmoBuilders = 0x58; // TMap<FString, UInteractiveGizmoBuilder*>
	}

	namespace n_UTextureRenderTarget2D {
		constexpr auto SizeX = 0x180; // int32_t
		constexpr auto SizeY = 0x184; // int32_t
		constexpr auto ClearColor = 0x188; // FLinearColor
		constexpr auto AddressX = 0x198; // TextureAddress
		constexpr auto AddressY = 0x199; // TextureAddress
		constexpr auto bForceLinearGamma = 0x19a; // char : 1
		constexpr auto bHDR = 0x19a; // char : 1
		constexpr auto bGPUSharedFlag = 0x19a; // char : 1
		constexpr auto RenderTargetFormat = 0x19b; // ETextureRenderTargetFormat
		constexpr auto bAutoGenerateMips = 0x19c; // char : 1
		constexpr auto MipsSamplerFilter = 0x19d; // TextureFilter
		constexpr auto MipsAddressU = 0x19e; // TextureAddress
		constexpr auto MipsAddressV = 0x19f; // TextureAddress
		constexpr auto OverrideFormat = 0x1a0; // EPixelFormat
	}

	namespace n_UBTService_DefaultFocus {
		constexpr auto FocusPriority = 0x98; // char
	}

	namespace n_UMaterialExpressionSubtract {
		constexpr auto A = 0x40; // FExpressionInput
		constexpr auto B = 0x54; // FExpressionInput
		constexpr auto ConstA = 0x68; // float
		constexpr auto ConstB = 0x6c; // float
	}

	namespace n_UAudioAnalyzerNRT {
		constexpr auto Sound = 0x28; // USoundWave*
		constexpr auto DurationInSeconds = 0x30; // float
	}

	namespace n_UMovieSceneParticleParameterTrack {
		constexpr auto Sections = 0x80; // TArray<UMovieSceneSection*>
	}

	namespace n_UMaterialExpressionSceneDepth {
		constexpr auto InputMode = 0x40; // EMaterialSceneAttributeInputMode
		constexpr auto Input = 0x44; // FExpressionInput
		constexpr auto Coordinates = 0x58; // FExpressionInput
		constexpr auto ConstInput = 0x6c; // FVector2D
	}

	namespace n_ULocalLightComponent {
		constexpr auto IntensityUnits = 0x328; // ELightUnits
		constexpr auto Radius = 0x32c; // float
		constexpr auto AttenuationRadius = 0x330; // float
		constexpr auto LightmassSettings = 0x334; // FLightmassPointLightSettings
	}

	namespace n_UAREnvironmentCaptureProbe {
		constexpr auto Extent = 0xf8; // FVector
		constexpr auto EnvironmentCaptureTexture = 0x108; // UAREnvironmentCaptureProbeTexture*
	}

	namespace n_UProceduralFoliageComponent {
		constexpr auto FoliageSpawner = 0xb0; // UProceduralFoliageSpawner*
		constexpr auto TileOverlap = 0xb8; // float
		constexpr auto SpawningVolume = 0xc0; // AVolume*
		constexpr auto ProceduralGuid = 0xc8; // FGuid
	}

	namespace n_UPhysicalAnimationComponent {
		constexpr auto StrengthMultiplyer = 0xb0; // float
		constexpr auto SkeletalMeshComponent = 0xb8; // USkeletalMeshComponent*
	}

	namespace n_UFindTurnBasedMatchCallbackProxy {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_APortalWarsBaseGameMode {
		constexpr auto MaxPlayers = 0x308; // int32_t
		constexpr auto BotPawnClass = 0x310; // APawn*
		constexpr auto AIControllerClass = 0x318; // APortalWarsAIController*
	}

	namespace n_UPortalWarsCharMovementComponent {
		constexpr auto PWCharOwner = 0xaf0; // APortalWarsCharacter*
		constexpr auto ClamberInfo = 0xafc; // FClamberInfo
	}

	namespace n_USplineMeshComponent {
		constexpr auto SplineParams = 0x4e8; // FSplineMeshParams
		constexpr auto SplineUpDir = 0x540; // FVector
		constexpr auto SplineBoundaryMin = 0x54c; // float
		constexpr auto CachedMeshBodySetupGuid = 0x550; // FGuid
		constexpr auto BodySetup = 0x560; // UBodySetup*
		constexpr auto SplineBoundaryMax = 0x568; // float
		constexpr auto bAllowSplineEditingPerInstance = 0x56c; // char : 1
		constexpr auto bSmoothInterpRollScale = 0x56c; // char : 1
		constexpr auto bMeshDirty = 0x56c; // char : 1
		constexpr auto ForwardAxis = 0x56d; // ESplineMeshAxis
		constexpr auto VirtualTextureMainPassMaxDrawDistance = 0x570; // float
	}

	namespace n_UMultiLineEditableText {
		constexpr auto Text = 0x128; // FText
		constexpr auto HintText = 0x140; // FText
		constexpr auto HintTextDelegate = 0x158; // FDelegate
		constexpr auto WidgetStyle = 0x168; // FTextBlockStyle
		constexpr auto bIsReadOnly = 0x3d8; // bool
		constexpr auto Font = 0x3e0; // FSlateFontInfo
		constexpr auto SelectAllTextWhenFocused = 0x438; // bool
		constexpr auto ClearTextSelectionOnFocusLoss = 0x439; // bool
		constexpr auto RevertTextOnEscape = 0x43a; // bool
		constexpr auto ClearKeyboardFocusOnCommit = 0x43b; // bool
		constexpr auto AllowContextMenu = 0x43c; // bool
		constexpr auto VirtualKeyboardOptions = 0x43d; // FVirtualKeyboardOptions
		constexpr auto VirtualKeyboardDismissAction = 0x43e; // EVirtualKeyboardDismissAction
		constexpr auto OnTextChanged = 0x440; // FMulticastInlineDelegate
		constexpr auto OnTextCommitted = 0x450; // FMulticastInlineDelegate
	}

	namespace n_ASceneCaptureCube {
		constexpr auto CaptureComponentCube = 0x230; // USceneCaptureComponentCube*
	}

	namespace n_USourceEffectEQPreset {
		constexpr auto Settings = 0xa0; // FSourceEffectEQSettings
	}

	namespace n_AARSharedWorldGameMode {
		constexpr auto BufferSizePerChunk = 0x308; // int32_t
	}

	namespace n_USkyAtmosphereComponent {
		constexpr auto TransformMode = 0x1f8; // ESkyAtmosphereTransformMode
		constexpr auto BottomRadius = 0x1fc; // float
		constexpr auto GroundAlbedo = 0x200; // FColor
		constexpr auto AtmosphereHeight = 0x204; // float
		constexpr auto MultiScatteringFactor = 0x208; // float
		constexpr auto TraceSampleCountScale = 0x20c; // float
		constexpr auto RayleighScatteringScale = 0x210; // float
		constexpr auto RayleighScattering = 0x214; // FLinearColor
		constexpr auto RayleighExponentialDistribution = 0x224; // float
		constexpr auto MieScatteringScale = 0x228; // float
		constexpr auto MieScattering = 0x22c; // FLinearColor
		constexpr auto MieAbsorptionScale = 0x23c; // float
		constexpr auto MieAbsorption = 0x240; // FLinearColor
		constexpr auto MieAnisotropy = 0x250; // float
		constexpr auto MieExponentialDistribution = 0x254; // float
		constexpr auto OtherAbsorptionScale = 0x258; // float
		constexpr auto OtherAbsorption = 0x25c; // FLinearColor
		constexpr auto OtherTentDistribution = 0x26c; // FTentDistribution
		constexpr auto SkyLuminanceFactor = 0x278; // FLinearColor
		constexpr auto AerialPespectiveViewDistanceScale = 0x288; // float
		constexpr auto HeightFogContribution = 0x28c; // float
		constexpr auto TransmittanceMinLightElevationAngle = 0x290; // float
		constexpr auto AerialPerspectiveStartDepth = 0x294; // float
		constexpr auto bStaticLightingBuiltGUID = 0x2bc; // FGuid
	}

	namespace n_UAkMarkerCallbackInfo {
		constexpr auto Identifier = 0x38; // int32_t
		constexpr auto Position = 0x3c; // int32_t
		constexpr auto Label = 0x40; // FString
	}

	namespace n_USubUVAnimation {
		constexpr auto SubUVTexture = 0x28; // UTexture2D*
		constexpr auto SubImages_Horizontal = 0x30; // int32_t
		constexpr auto SubImages_Vertical = 0x34; // int32_t
		constexpr auto BoundingMode = 0x38; // ESubUVBoundingVertexCount
		constexpr auto OpacitySourceMode = 0x39; // EOpacitySourceMode
		constexpr auto AlphaThreshold = 0x3c; // float
	}

	namespace n_UPortalWarsPostGameStatsWidget {
		constexpr auto PlayersPanel = 0x390; // UPanelWidget*
		constexpr auto AlphaTeamPanel = 0x398; // UPanelWidget*
		constexpr auto BravoTeamPanel = 0x3a0; // UPanelWidget*
		constexpr auto AlphaTeamNameText = 0x3a8; // UTextBlock*
		constexpr auto BravoTeamNameText = 0x3b0; // UTextBlock*
		constexpr auto AlphaTeamScoreText = 0x3b8; // UTextBlock*
		constexpr auto BravoTeamScoreText = 0x3c0; // UTextBlock*
		constexpr auto TeamRoot = 0x3c8; // UWidget*
		constexpr auto FFARoot = 0x3d0; // UWidget*
		constexpr auto PlayerEntryWidgetClass = 0x3d8; // UPortalWarsPostGamePlayerEntry*
	}

	namespace n_UPortalWarsPickupWidget {
		constexpr auto Root = 0x2a8; // UWidget*
		constexpr auto PickupImage = 0x2b0; // UImage*
		constexpr auto PickupText = 0x2b8; // UTextBlock*
		constexpr auto ActionText = 0x2c0; // URichTextBlock*
		constexpr auto FadeInAnimation = 0x2c8; // UWidgetAnimation*
		constexpr auto ConsoleSwitcher = 0x2d0; // UWidgetSwitcher*
		constexpr auto ConsoleActionText = 0x2d8; // URichTextBlock*
		constexpr auto ConsoleActionImage = 0x2e0; // UImage*
		constexpr auto ProgressRadial = 0x2e8; // UPortalWarsProgressRadialWidget*
	}

	namespace n_UAsyncActionLoadPrimaryAsset {
		constexpr auto Completed = 0x78; // FMulticastInlineDelegate
	}

	namespace n_UEndpointSubmix {
		constexpr auto EndpointType = 0x38; // FName
		constexpr auto EndpointSettingsClass = 0x40; // UAudioEndpointSettingsBase*
		constexpr auto EndpointSettings = 0x48; // UAudioEndpointSettingsBase*
	}

	namespace n_USubmixEffectTapDelayPreset {
		constexpr auto Settings = 0xa8; // FSubmixEffectTapDelaySettings
	}

	namespace n_UMovieSceneTrackInstanceSystem {
		constexpr auto Instantiator = 0x40; // UMovieSceneTrackInstanceInstantiator*
	}

	namespace n_UScaleBox {
		constexpr auto Stretch = 0x120; // EStretch
		constexpr auto StretchDirection = 0x121; // EStretchDirection
		constexpr auto UserSpecifiedScale = 0x124; // float
		constexpr auto IgnoreInheritedScale = 0x128; // bool
	}

	namespace n_UDatasmithAreaLightActorTemplate {
		constexpr auto LightType = 0x30; // EDatasmithAreaLightActorType
		constexpr auto LightShape = 0x31; // EDatasmithAreaLightActorShape
		constexpr auto Dimensions = 0x34; // FVector2D
		constexpr auto Color = 0x3c; // FLinearColor
		constexpr auto Intensity = 0x4c; // float
		constexpr auto IntensityUnits = 0x50; // ELightUnits
		constexpr auto Temperature = 0x54; // float
		constexpr auto IESTexture = 0x58; // TSoftObjectPtr<UTextureLightProfile>
		constexpr auto bUseIESBrightness = 0x80; // bool
		constexpr auto IESBrightnessScale = 0x84; // float
		constexpr auto Rotation = 0x88; // FRotator
		constexpr auto SourceRadius = 0x94; // float
		constexpr auto SourceLength = 0x98; // float
		constexpr auto AttenuationRadius = 0x9c; // float
	}

	namespace n_AAtmosphericFog {
		constexpr auto AtmosphericFogComponent = 0x220; // UAtmosphericFogComponent*
	}

	namespace n_UAnimCurveCompressionSettings {
		constexpr auto Codec = 0x28; // UAnimCurveCompressionCodec*
	}

	namespace n_UPortalWarsUnlockNoteEntryWidget {
		constexpr auto NoteText = 0x260; // UTextBlock*
		constexpr auto BulletImage = 0x268; // UImage*
		constexpr auto ImportantColor = 0x270; // FSlateColor
	}

	namespace n_UMovieSceneCameraShakeSourceShakeTrack {
		constexpr auto CameraShakeSections = 0x80; // TArray<UMovieSceneSection*>
	}

	namespace n_UEditableGameplayTagQueryExpression_AnyTagsMatch {
		constexpr auto Tags = 0x28; // FGameplayTagContainer
	}

	namespace n_UInteractiveToolManager {
		constexpr auto ActiveLeftTool = 0x30; // UInteractiveTool*
		constexpr auto ActiveRightTool = 0x38; // UInteractiveTool*
		constexpr auto ToolBuilders = 0x90; // TMap<FString, UInteractiveToolBuilder*>
	}

	namespace n_UMaterialParameterCollection {
		constexpr auto StateId = 0x28; // FGuid
		constexpr auto ScalarParameters = 0x38; // TArray<FCollectionScalarParameter>
		constexpr auto VectorParameters = 0x48; // TArray<FCollectionVectorParameter>
	}

	namespace n_UTexture2D {
		constexpr auto LevelIndex = 0x178; // int32_t
		constexpr auto FirstResourceMemMip = 0x17c; // int32_t
		constexpr auto bTemporarilyDisableStreaming = 0x180; // char : 1
		constexpr auto AddressX = 0x181; // TextureAddress
		constexpr auto AddressY = 0x182; // TextureAddress
		constexpr auto ImportedSize = 0x184; // FIntPoint
	}

	namespace n_UInputAxisKeyDelegateBinding {
		constexpr auto InputAxisKeyDelegateBindings = 0x28; // TArray<FBlueprintInputAxisKeyDelegateBinding>
	}

	namespace n_ULightMapVirtualTexture2D {
		constexpr auto TypeToLayer = 0x1a0; // TArray<int8_t>
	}

	namespace n_UPortalWarsHappyHourStatusWidget {
		constexpr auto HappyHourText = 0x268; // UTextBlock*
		constexpr auto TimeRemainingText = 0x270; // UTextBlock*
		constexpr auto StatusSwitcher = 0x278; // UWidgetSwitcher*
	}

	namespace n_USubmixEffectFilterPreset {
		constexpr auto Settings = 0x9c; // FSubmixEffectFilterSettings
	}

	namespace n_ULevelSequencePlayer {
		constexpr auto OnCameraCut = 0x6a0; // FMulticastInlineDelegate
	}

	namespace n_UMaterialExpressionLandscapeLayerCoords {
		constexpr auto MappingType = 0x40; // ETerrainCoordMappingType
		constexpr auto CustomUVType = 0x41; // ELandscapeCustomizedCoordType
		constexpr auto MappingScale = 0x44; // float
		constexpr auto MappingRotation = 0x48; // float
		constexpr auto MappingPanU = 0x4c; // float
		constexpr auto MappingPanV = 0x50; // float
	}

	namespace n_UInterpTrackInstAkAudioRTPC {
		constexpr auto LastUpdatePosition = 0x28; // float
	}

	namespace n_UMaterialExpressionChannelMaskParameter {
		constexpr auto MaskChannel = 0x70; // EChannelMaskParameterColor
	}

	namespace n_UPortalWarsReplayHUDOverlayWidget {
		constexpr auto LeftPlayerPanel = 0x2a8; // UPanelWidget*
		constexpr auto RightPlayerPanel = 0x2b0; // UPanelWidget*
		constexpr auto LeftPlayerWidgetClass = 0x2b8; // UPortalWarsScoreboardPlayerWidget*
		constexpr auto RightPlayerWidgetClass = 0x2c0; // UPortalWarsScoreboardPlayerWidget*
		constexpr auto TeamIndicator = 0x2c8; // UImage*
		constexpr auto CameraModeRoot = 0x2d0; // UWidget*
		constexpr auto CameraModeText = 0x2d8; // UTextBlock*
		constexpr auto CameraModeButton = 0x2e0; // UPortalWarsButtonWidget*
		constexpr auto CameraModeComboBox = 0x2e8; // UComboBoxString*
		constexpr auto PlayRateRoot = 0x2f0; // UWidget*
		constexpr auto PlayRateText = 0x2f8; // UTextBlock*
		constexpr auto PlayRateIncreaseButton = 0x300; // UPortalWarsButtonWidget*
		constexpr auto PlayRateDecreaseButton = 0x308; // UPortalWarsButtonWidget*
		constexpr auto PlayRateComboBox = 0x310; // UComboBoxString*
		constexpr auto CurrentTimeText = 0x318; // UTextBlock*
		constexpr auto TotalTimeText = 0x320; // UTextBlock*
		constexpr auto TimeSlider = 0x330; // USlider*
		constexpr auto TimeProgressBar = 0x338; // UProgressBar*
		constexpr auto PlayButton = 0x340; // UPortalWarsButtonWidget*
		constexpr auto JumpBackButton = 0x348; // UPortalWarsButtonWidget*
		constexpr auto JumpForwardButton = 0x350; // UPortalWarsButtonWidget*
		constexpr auto PlayOneFrameButton = 0x358; // UPortalWarsButtonWidget*
		constexpr auto LoadingScreen = 0x360; // UUserWidget*
		constexpr auto ReplayRoot = 0x368; // UWidget*
	}

	namespace n_UMaterialExpressionRound {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UNiagaraMeshRendererProperties {
		constexpr auto Meshes = 0x88; // TArray<FNiagaraMeshRendererMeshProperties>
		constexpr auto SourceMode = 0x98; // ENiagaraRendererSourceDataMode
		constexpr auto SortMode = 0x99; // ENiagaraSortMode
		constexpr auto bOverrideMaterials = 0x9c; // char : 1
		constexpr auto bSortOnlyWhenTranslucent = 0x9c; // char : 1
		constexpr auto bSubImageBlend = 0x9c; // char : 1
		constexpr auto bEnableFrustumCulling = 0x9c; // char : 1
		constexpr auto bEnableCameraDistanceCulling = 0x9c; // char : 1
		constexpr auto bEnableMeshFlipbook = 0x9c; // char : 1
		constexpr auto OverrideMaterials = 0xa0; // TArray<FNiagaraMeshMaterialOverride>
		constexpr auto SubImageSize = 0xb0; // FVector2D
		constexpr auto FacingMode = 0xb8; // ENiagaraMeshFacingMode
		constexpr auto bLockedAxisEnable = 0xbc; // char : 1
		constexpr auto LockedAxis = 0xc0; // FVector
		constexpr auto LockedAxisSpace = 0xcc; // ENiagaraMeshLockedAxisSpace
		constexpr auto MinCameraDistance = 0xd0; // float
		constexpr auto MaxCameraDistance = 0xd4; // float
		constexpr auto RendererVisibility = 0xd8; // uint32_t
		constexpr auto PositionBinding = 0xe0; // FNiagaraVariableAttributeBinding
		constexpr auto ColorBinding = 0x138; // FNiagaraVariableAttributeBinding
		constexpr auto VelocityBinding = 0x190; // FNiagaraVariableAttributeBinding
		constexpr auto MeshOrientationBinding = 0x1e8; // FNiagaraVariableAttributeBinding
		constexpr auto ScaleBinding = 0x240; // FNiagaraVariableAttributeBinding
		constexpr auto SubImageIndexBinding = 0x298; // FNiagaraVariableAttributeBinding
		constexpr auto DynamicMaterialBinding = 0x2f0; // FNiagaraVariableAttributeBinding
		constexpr auto DynamicMaterial1Binding = 0x348; // FNiagaraVariableAttributeBinding
		constexpr auto DynamicMaterial2Binding = 0x3a0; // FNiagaraVariableAttributeBinding
		constexpr auto DynamicMaterial3Binding = 0x3f8; // FNiagaraVariableAttributeBinding
		constexpr auto MaterialRandomBinding = 0x450; // FNiagaraVariableAttributeBinding
		constexpr auto CustomSortingBinding = 0x4a8; // FNiagaraVariableAttributeBinding
		constexpr auto NormalizedAgeBinding = 0x500; // FNiagaraVariableAttributeBinding
		constexpr auto CameraOffsetBinding = 0x558; // FNiagaraVariableAttributeBinding
		constexpr auto RendererVisibilityTagBinding = 0x5b0; // FNiagaraVariableAttributeBinding
		constexpr auto MeshIndexBinding = 0x608; // FNiagaraVariableAttributeBinding
		constexpr auto MaterialParameterBindings = 0x660; // TArray<FNiagaraMaterialAttributeBinding>
		constexpr auto PrevPositionBinding = 0x670; // FNiagaraVariableAttributeBinding
		constexpr auto PrevScaleBinding = 0x6c8; // FNiagaraVariableAttributeBinding
		constexpr auto PrevMeshOrientationBinding = 0x720; // FNiagaraVariableAttributeBinding
		constexpr auto PrevCameraOffsetBinding = 0x778; // FNiagaraVariableAttributeBinding
		constexpr auto PrevVelocityBinding = 0x7d0; // FNiagaraVariableAttributeBinding
		constexpr auto ParticleMesh = 0x890; // UStaticMesh*
		constexpr auto PivotOffset = 0x898; // FVector
		constexpr auto PivotOffsetSpace = 0x8a4; // ENiagaraMeshPivotOffsetSpace
	}

	namespace n_UTextureLightProfile {
		constexpr auto Brightness = 0x1a0; // float
		constexpr auto TextureMultiplier = 0x1a4; // float
	}

	namespace n_UAsyncActionHandleSaveGame {
		constexpr auto Completed = 0x30; // FMulticastInlineDelegate
		constexpr auto SaveGameObject = 0x60; // USaveGame*
	}

	namespace n_UPortalWarsGamepadBindingCustomizeButtonWidget {
		constexpr auto OnCustomizeGamepadBinds = 0x2a8; // FMulticastInlineDelegate
		constexpr auto CustomizeButton = 0x2b8; // UPortalWarsButton*
		constexpr auto ValueText = 0x2c0; // UTextBlock*
		constexpr auto HoveredIndicator = 0x2c8; // UWidget*
		constexpr auto StandardColor = 0x2d0; // FSlateColor
		constexpr auto ActiveColor = 0x2f8; // FSlateColor
	}

	namespace n_UMaterialExpressionClamp {
		constexpr auto Input = 0x40; // FExpressionInput
		constexpr auto Min = 0x54; // FExpressionInput
		constexpr auto Max = 0x68; // FExpressionInput
		constexpr auto ClampMode = 0x7c; // EClampMode
		constexpr auto MinDefault = 0x80; // float
		constexpr auto MaxDefault = 0x84; // float
	}

	namespace n_ULogoutCallbackProxy {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_UVOIPTalker {
		constexpr auto Settings = 0xb0; // FVoiceSettings
	}

	namespace n_ASplineMeshActor {
		constexpr auto SplineMeshComponent = 0x220; // USplineMeshComponent*
	}

	namespace n_ADominationHill {
		constexpr auto HillState = 0x220; // EDOMHillState
		constexpr auto DefaultHillMaterial = 0x228; // UMaterialInstance*
		constexpr auto BlueHillMaterial = 0x230; // UMaterialInstance*
		constexpr auto RedHillMaterial = 0x238; // UMaterialInstance*
		constexpr auto DefaultParticleMaterial = 0x240; // UMaterialInstance*
		constexpr auto BlueParticleMaterial = 0x248; // UMaterialInstance*
		constexpr auto RedParticleMaterial = 0x250; // UMaterialInstance*
		constexpr auto reachableLocComponent = 0x258; // USceneComponent*
		constexpr auto HillName = 0x260; // FString
		constexpr auto Indicator = 0x270; // UPortalWarsDOMHillIndicator*
		constexpr auto timeToCaptureHill = 0x278; // float
		constexpr auto timeCapturingHill = 0x27c; // float
		constexpr auto TeamCount = 0x288; // TArray<int32_t>
		constexpr auto bIsActive = 0x2c0; // bool
		constexpr auto Mesh = 0x2c8; // UStaticMeshComponent*
		constexpr auto OverlapMesh = 0x2d0; // UStaticMeshComponent*
	}

	namespace n_UMaterialExpressionHairAttributes {
		constexpr auto bUseTangentSpace = 0x40; // char : 1
	}

	namespace n_UMaterialExpressionDotProduct {
		constexpr auto A = 0x40; // FExpressionInput
		constexpr auto B = 0x54; // FExpressionInput
	}

	namespace n_UPortalWarsGamepadBindingMissingDialogWidget {
		constexpr auto OnWarningButtonClickedDelegate = 0x390; // FMulticastInlineDelegate
		constexpr auto AcceptButton = 0x3a0; // UPortalWarsButtonWidget*
		constexpr auto TitleText = 0x3a8; // UTextBlock*
		constexpr auto SubtitleText = 0x3b0; // UTextBlock*
		constexpr auto MissingText = 0x3b8; // UTextBlock*
	}

	namespace n_UBTTask_SetTagCooldown {
		constexpr auto CooldownTag = 0x70; // FGameplayTag
		constexpr auto bAddToExistingDuration = 0x78; // bool
		constexpr auto CooldownDuration = 0x7c; // float
	}

	namespace n_UParticleSystemComponent {
		constexpr auto Template = 0x450; // UParticleSystem*
		constexpr auto EmitterMaterials = 0x458; // TArray<UMaterialInterface*>
		constexpr auto SkelMeshComponents = 0x468; // TArray<USkeletalMeshComponent*>
		constexpr auto bResetOnDetach = 0x479; // char : 1
		constexpr auto bUpdateOnDedicatedServer = 0x479; // char : 1
		constexpr auto bAllowRecycling = 0x479; // char : 1
		constexpr auto bAutoManageAttachment = 0x479; // char : 1
		constexpr auto bAutoAttachWeldSimulatedBodies = 0x479; // char : 1
		constexpr auto bWarmingUp = 0x47a; // char : 1
		constexpr auto bOverrideLODMethod = 0x47a; // char : 1
		constexpr auto bSkipUpdateDynamicDataDuringTick = 0x47a; // char : 1
		constexpr auto LODMethod = 0x485; // ParticleSystemLODMethod
		constexpr auto RequiredSignificance = 0x486; // EParticleSignificanceLevel
		constexpr auto InstanceParameters = 0x488; // TArray<FParticleSysParam>
		constexpr auto OnParticleSpawn = 0x498; // FMulticastInlineDelegate
		constexpr auto OnParticleBurst = 0x4a8; // FMulticastInlineDelegate
		constexpr auto OnParticleDeath = 0x4b8; // FMulticastInlineDelegate
		constexpr auto OnParticleCollide = 0x4c8; // FMulticastInlineDelegate
		constexpr auto bOldPositionValid = 0x4d8; // bool
		constexpr auto OldPosition = 0x4dc; // FVector
		constexpr auto PartSysVelocity = 0x4e8; // FVector
		constexpr auto WarmupTime = 0x4f4; // float
		constexpr auto WarmupTickRate = 0x4f8; // float
		constexpr auto SecondsBeforeInactive = 0x500; // float
		constexpr auto MaxTimeBeforeForceUpdateTransform = 0x508; // float
		constexpr auto ReplayClips = 0x528; // TArray<UParticleSystemReplay*>
		constexpr auto CustomTimeDilation = 0x540; // float
		constexpr auto AutoAttachParent = 0x598; // TWeakObjectPtr<USceneComponent>
		constexpr auto AutoAttachSocketName = 0x5a0; // FName
		constexpr auto AutoAttachLocationRule = 0x5a8; // EAttachmentRule
		constexpr auto AutoAttachRotationRule = 0x5a9; // EAttachmentRule
		constexpr auto AutoAttachScaleRule = 0x5aa; // EAttachmentRule
		constexpr auto OnSystemFinished = 0x5d8; // FMulticastInlineDelegate
	}

	namespace n_UPortalWarsPlaylistActiveDialog {
		constexpr auto TitleText = 0x390; // UTextBlock*
		constexpr auto DescriptionText = 0x398; // UTextBlock*
		constexpr auto XPBoostText = 0x3a0; // UTextBlock*
		constexpr auto QueueButton = 0x3a8; // UPortalWarsButtonWidget*
	}

	namespace n_UMaterialExpressionShadowReplace {
		constexpr auto Default = 0x40; // FExpressionInput
		constexpr auto Shadow = 0x54; // FExpressionInput
	}

	namespace n_UNodeMappingContainer {
		constexpr auto SourceItems = 0x28; // TMap<FName, FNodeItem>
		constexpr auto TargetItems = 0x78; // TMap<FName, FNodeItem>
		constexpr auto SourceToTarget = 0xc8; // TMap<FName, FName>
		constexpr auto SourceAsset = 0x118; // TSoftObjectPtr<UObject>
		constexpr auto TargetAsset = 0x140; // TSoftObjectPtr<UObject>
	}

	namespace n_UPortalWarsRewardReceivedWidget {
		constexpr auto RewardEntries = 0x390; // TArray<UPortalWarsRewardEntryWidget*>
		constexpr auto RewardEntryWidgetClass = 0x3a0; // UPortalWarsRewardReceivedEntry*
		constexpr auto EntryPanel = 0x3a8; // UPanelWidget*
		constexpr auto PremiumPurchaseButton = 0x3b0; // UPortalWarsButtonWidget*
		constexpr auto InspectWidget = 0x3b8; // UPortalWarsInspectWidget*
		constexpr auto TitleText = 0x3c8; // UTextBlock*
	}

	namespace n_APortalWarsEvolution {
		constexpr auto WeaponClasses = 0x6d8; // TArray<AGun*>
	}

	namespace n_UWindowTitleBarAreaSlot {
		constexpr auto Padding = 0x38; // FMargin
		constexpr auto HorizontalAlignment = 0x48; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x49; // EVerticalAlignment
	}

	namespace n_APreviewItem {
		constexpr auto SceneCaptureComponent = 0x268; // USceneCaptureComponent2D*
		constexpr auto SceneCaptureTransforms = 0x270; // TMap<ECustomizationType, FTransform>
		constexpr auto SceneCaptureRewardTransforms = 0x2c0; // TMap<ERewardType, FTransform>
		constexpr auto SceneRoot = 0x310; // USceneComponent*
		constexpr auto CustomizationSceneComponent = 0x318; // USceneComponent*
		constexpr auto Suit = 0x320; // USkeletalMeshComponent*
		constexpr auto JetpackAttached = 0x328; // USkeletalMeshComponent*
		constexpr auto JetpackFlameMeshes = 0x330; // TArray<UStaticMeshComponent*>
		constexpr auto JetpackAlone = 0x340; // USkeletalMeshComponent*
		constexpr auto PortalGun = 0x348; // UStaticMeshComponent*
		constexpr auto PortalGunStandalone = 0x350; // UStaticMeshComponent*
		constexpr auto DefaultAnim = 0x358; // UAnimSequence*
		constexpr auto Weapon = 0x360; // UStaticMeshComponent*
		constexpr auto Portal = 0x368; // UStaticMeshComponent*
		constexpr auto PortalInside = 0x370; // UStaticMeshComponent*
		constexpr auto PortalFrameBase = 0x378; // UStaticMeshComponent*
		constexpr auto SprayMesh = 0x380; // UStaticMeshComponent*
		constexpr auto SprayDecal = 0x388; // UDecalComponent*
		constexpr auto XPMesh = 0x390; // UStaticMeshComponent*
		constexpr auto CurrencyMesh = 0x398; // UStaticMeshComponent*
		constexpr auto DropMesh = 0x3a0; // UStaticMeshComponent*
		constexpr auto JetpackOpenAnimation = 0x3a8; // UAnimSequence*
		constexpr auto JetpackIdleAnimation = 0x3b0; // UAnimSequence*
	}

	namespace n_UCameraShakeBase {
		constexpr auto bSingleInstance = 0x28; // bool
		constexpr auto ShakeScale = 0x2c; // float
		constexpr auto RootShakePattern = 0x30; // UCameraShakePattern*
		constexpr auto CameraManager = 0x38; // APlayerCameraManager*
	}

	namespace n_UMovieSceneParameterSection {
		constexpr auto BoolParameterNamesAndCurves = 0xe8; // TArray<FBoolParameterNameAndCurve>
		constexpr auto ScalarParameterNamesAndCurves = 0xf8; // TArray<FScalarParameterNameAndCurve>
		constexpr auto Vector2DParameterNamesAndCurves = 0x108; // TArray<FVector2DParameterNameAndCurves>
		constexpr auto VectorParameterNamesAndCurves = 0x118; // TArray<FVectorParameterNameAndCurves>
		constexpr auto ColorParameterNamesAndCurves = 0x128; // TArray<FColorParameterNameAndCurves>
		constexpr auto TransformParameterNamesAndCurves = 0x138; // TArray<FTransformParameterNameAndCurves>
	}

	namespace n_UGizmoComponentAxisSource {
		constexpr auto Component = 0x30; // USceneComponent*
		constexpr auto AxisIndex = 0x38; // int32_t
		constexpr auto bLocalAxes = 0x3c; // bool
	}

	namespace n_UPortalWarsScoreboardStatEntry {
		constexpr auto StatValueText = 0x2a8; // UTextBlock*
		constexpr auto StatNameText = 0x2b0; // UTextBlock*
		constexpr auto MedalColors = 0x2b8; // TMap<int32_t, FLinearColor>
		constexpr auto MedalImage = 0x308; // UImage*
		constexpr auto MedalImageSizeBox = 0x310; // USizeBox*
		constexpr auto MedalImages = 0x318; // TMap<int32_t, UTexture2D*>
		constexpr auto DefaultMedalImage = 0x368; // UTexture2D*
	}

	namespace n_UAssetManager {
		constexpr auto ObjectReferenceList = 0x2e0; // TArray<UObject*>
		constexpr auto bIsGlobalAsyncScanEnvironment = 0x2f0; // bool
		constexpr auto bShouldGuessTypeAndName = 0x2f1; // bool
		constexpr auto bShouldUseSynchronousLoad = 0x2f2; // bool
		constexpr auto bIsLoadingFromPakFiles = 0x2f3; // bool
		constexpr auto bShouldAcquireMissingChunksOnLoad = 0x2f4; // bool
		constexpr auto bOnlyCookProductionAssets = 0x2f5; // bool
		constexpr auto bIsBulkScanning = 0x2f6; // bool
		constexpr auto bIsPrimaryAssetDirectoryCurrent = 0x2f7; // bool
		constexpr auto bIsManagementDatabaseCurrent = 0x2f8; // bool
		constexpr auto bUpdateManagementDatabaseAfterScan = 0x2f9; // bool
		constexpr auto bIncludeOnlyOnDiskAssets = 0x2fa; // bool
		constexpr auto bHasCompletedInitialScan = 0x2fb; // bool
		constexpr auto NumberOfSpawnedNotifications = 0x2fc; // int32_t
	}

	namespace n_AMaterialInstanceActor {
		constexpr auto TargetActors = 0x220; // TArray<AActor*>
	}

	namespace n_USlateWidgetStyleAsset {
		constexpr auto CustomStyle = 0x28; // USlateWidgetStyleContainerBase*
	}

	namespace n_UParticleModuleVectorFieldLocal {
		constexpr auto VectorField = 0x30; // UVectorField*
		constexpr auto RelativeTranslation = 0x38; // FVector
		constexpr auto RelativeRotation = 0x44; // FRotator
		constexpr auto RelativeScale3D = 0x50; // FVector
		constexpr auto Intensity = 0x5c; // float
		constexpr auto Tightness = 0x60; // float
		constexpr auto bIgnoreComponentTransform = 0x64; // char : 1
		constexpr auto bTileX = 0x64; // char : 1
		constexpr auto bTileY = 0x64; // char : 1
		constexpr auto bTileZ = 0x64; // char : 1
		constexpr auto bUseFixDT = 0x64; // char : 1
	}

	namespace n_UParticleModuleColorOverLife {
		constexpr auto ColorOverLife = 0x30; // FRawDistributionVector
		constexpr auto AlphaOverLife = 0x78; // FRawDistributionFloat
		constexpr auto bClampAlpha = 0xa8; // char : 1
	}

	namespace n_UParticleModuleLocationEmitter {
		constexpr auto EmitterName = 0x30; // FName
		constexpr auto SelectionMethod = 0x38; // ELocationEmitterSelectionMethod
		constexpr auto InheritSourceVelocity = 0x3c; // char : 1
		constexpr auto InheritSourceVelocityScale = 0x40; // float
		constexpr auto bInheritSourceRotation = 0x44; // char : 1
		constexpr auto InheritSourceRotationScale = 0x48; // float
	}

	namespace n_UMovieSceneCinematicShotSection {
		constexpr auto ShotDisplayName = 0x168; // FString
		constexpr auto DisplayName = 0x178; // FText
	}

	namespace n_UMovieSceneGeometryCollectionSection {
		constexpr auto Params = 0xe8; // FMovieSceneGeometryCollectionParams
	}

	namespace n_UBTDecorator_BlackboardBase {
		constexpr auto BlackboardKey = 0x68; // FBlackboardKeySelector
	}

	namespace n_UCreateSessionCallbackProxy {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_ALevelSequenceMediaController {
		constexpr auto Sequence = 0x228; // ALevelSequenceActor*
		constexpr auto MediaComponent = 0x230; // UMediaComponent*
		constexpr auto ServerStartTimeSeconds = 0x238; // float
	}

	namespace n_UBlackboardComponent {
		constexpr auto BrainComp = 0xb0; // UBrainComponent*
		constexpr auto DefaultBlackboardAsset = 0xb8; // UBlackboardData*
		constexpr auto BlackboardAsset = 0xc0; // UBlackboardData*
		constexpr auto KeyInstances = 0xe8; // TArray<UBlackboardKeyType*>
	}

	namespace n_ABaseGun {
		constexpr auto MuzzleAttachPoint = 0x22c; // FName
		constexpr auto MuzzleFX = 0x238; // UParticleSystem*
		constexpr auto Muzzle1pScale = 0x240; // FVector
		constexpr auto Muzzle3pScale = 0x24c; // FVector
		constexpr auto MuzzlePSC_1P = 0x258; // UParticleSystemComponent*
		constexpr auto MuzzlePSC_3P = 0x260; // UParticleSystemComponent*
		constexpr auto bLoopedMuzzleFX = 0x268; // char : 1
		constexpr auto MyPawn = 0x270; // APortalWarsCharacter*
		constexpr auto Mesh1P = 0x278; // USkeletalMeshComponent*
		constexpr auto Mesh3P = 0x280; // UStaticMeshComponent*
		constexpr auto SkinType = 0x288; // ECustomizationType
		constexpr auto ColorIntensity3P = 0x28c; // float
		constexpr auto ColorIntensity1P = 0x290; // float
		constexpr auto LoudnessForBots = 0x2b0; // float
	}

	namespace n_ADatasmithAreaLightActor {
		constexpr auto Mobility = 0x220; // EComponentMobility
		constexpr auto LightType = 0x221; // EDatasmithAreaLightActorType
		constexpr auto LightShape = 0x222; // EDatasmithAreaLightActorShape
		constexpr auto Dimensions = 0x224; // FVector2D
		constexpr auto Intensity = 0x22c; // float
		constexpr auto IntensityUnits = 0x230; // ELightUnits
		constexpr auto Color = 0x234; // FLinearColor
		constexpr auto Temperature = 0x244; // float
		constexpr auto IESTexture = 0x248; // UTextureLightProfile*
		constexpr auto bUseIESBrightness = 0x250; // bool
		constexpr auto IESBrightnessScale = 0x254; // float
		constexpr auto Rotation = 0x258; // FRotator
		constexpr auto SourceRadius = 0x264; // float
		constexpr auto SourceLength = 0x268; // float
		constexpr auto AttenuationRadius = 0x26c; // float
		constexpr auto SpotlightInnerAngle = 0x270; // float
		constexpr auto SpotlightOuterAngle = 0x274; // float
	}

	namespace n_ULevelActorContainer {
		constexpr auto Actors = 0x28; // TArray<AActor*>
	}

	namespace n_UNiagaraDataInterfaceVectorField {
		constexpr auto Field = 0x38; // UVectorField*
		constexpr auto bTileX = 0x40; // bool
		constexpr auto bTileY = 0x41; // bool
		constexpr auto bTileZ = 0x42; // bool
	}

	namespace n_AScoreboardScoreComponent {
		constexpr auto Index = 0x288; // char
	}

	namespace n_ULevelVariantSets {
		constexpr auto DirectorClass = 0x28; // UObject*
		constexpr auto VariantSets = 0x30; // TArray<UVariantSet*>
	}

	namespace n_USafeZone {
		constexpr auto PadLeft = 0x120; // bool
		constexpr auto PadRight = 0x121; // bool
		constexpr auto PadTop = 0x122; // bool
		constexpr auto PadBottom = 0x123; // bool
	}

	namespace n_APortalWarsTakedownPlayerState {
		constexpr auto RespawnTime = 0xac8; // char
	}

	namespace n_USynthSamplePlayer {
		constexpr auto SoundWave = 0x6c0; // USoundWave*
		constexpr auto OnSampleLoaded = 0x6c8; // FMulticastInlineDelegate
		constexpr auto OnSamplePlaybackProgress = 0x6d8; // FMulticastInlineDelegate
	}

	namespace n_ULightmassPortalComponent {
		constexpr auto PreviewBox = 0x1f8; // UBoxComponent*
	}

	namespace n_UMaterialExpressionDecalMipmapLevel {
		constexpr auto TextureSize = 0x40; // FExpressionInput
		constexpr auto ConstWidth = 0x54; // float
		constexpr auto ConstHeight = 0x58; // float
	}

	namespace n_USourceEffectMidSideSpreaderPreset {
		constexpr auto Settings = 0x98; // FSourceEffectMidSideSpreaderSettings
	}

	namespace n_UParticleModuleRotationOverLifetime {
		constexpr auto RotationOverLife = 0x30; // FRawDistributionFloat
		constexpr auto Scale = 0x60; // char : 1
	}

	namespace n_UNiagaraDataInterfaceCamera {
		constexpr auto PlayerControllerIndex = 0x38; // int32_t
		constexpr auto bRequireCurrentFrameData = 0x3c; // bool
	}

	namespace n_UPortalWarsScoreboardWidget {
		constexpr auto MapNameText = 0x260; // UTextBlock*
		constexpr auto GameModeText = 0x268; // UTextBlock*
		constexpr auto TimeRemainingText = 0x270; // UTextBlock*
		constexpr auto OvertimeIcon = 0x280; // UImage*
		constexpr auto OvertimeNotice = 0x288; // UPortalWarsUserWidget*
		constexpr auto OvertimeTextColor = 0x290; // FSlateColor
		constexpr auto bClipTeamNames = 0x2b8; // bool
		constexpr auto LeftNameText = 0x2c0; // UTextBlock*
		constexpr auto RightNameText = 0x2c8; // UTextBlock*
		constexpr auto LeftScoreText = 0x2d0; // UTextBlock*
		constexpr auto RightScoreText = 0x2d8; // UTextBlock*
		constexpr auto ScoreRoot = 0x2e0; // UWidget*
		constexpr auto TeamRoot = 0x2e8; // UWidget*
		constexpr auto LeftTeamPanel = 0x2f0; // UPanelWidget*
		constexpr auto RightTeamPanel = 0x2f8; // UPanelWidget*
		constexpr auto FFARoot = 0x300; // UWidget*
		constexpr auto PlayersPanel = 0x308; // UPanelWidget*
		constexpr auto StatsRoot = 0x310; // UWidget*
		constexpr auto StatsPanel = 0x318; // UPanelWidget*
		constexpr auto ScoreboardStatWidgetClass = 0x320; // UPortalWarsScoreboardStatEntry*
		constexpr auto ScoreboardRoot = 0x328; // UWidget*
		constexpr auto ScoreboardPlayerWidgetClass = 0x330; // UPortalWarsScoreboardPlayerWidget*
	}

	namespace n_ANavMeshBoundsVolume {
		constexpr auto SupportedAgents = 0x258; // FNavAgentSelector
	}

	namespace n_UInterpTrackInstSound {
		constexpr auto LastUpdatePosition = 0x28; // float
		constexpr auto PlayAudioComp = 0x30; // UAudioComponent*
	}

	namespace n_USplineComponent {
		constexpr auto SplineCurves = 0x450; // FSplineCurves
		constexpr auto SplineInfo = 0x4c0; // FInterpCurveVector
		constexpr auto SplineRotInfo = 0x4d8; // FInterpCurveQuat
		constexpr auto SplineScaleInfo = 0x4f0; // FInterpCurveVector
		constexpr auto SplineReparamTable = 0x508; // FInterpCurveFloat
		constexpr auto bAllowSplineEditingPerInstance = 0x520; // bool
		constexpr auto ReparamStepsPerSegment = 0x524; // int32_t
		constexpr auto Duration = 0x528; // float
		constexpr auto bStationaryEndpoints = 0x52c; // bool
		constexpr auto bSplineHasBeenEdited = 0x52d; // bool
		constexpr auto bModifiedByConstructionScript = 0x52e; // bool
		constexpr auto bInputSplinePointsToConstructionScript = 0x52f; // bool
		constexpr auto bDrawDebug = 0x530; // bool
		constexpr auto bClosedLoop = 0x531; // bool
		constexpr auto bLoopPositionOverride = 0x532; // bool
		constexpr auto LoopPosition = 0x534; // float
		constexpr auto DefaultUpVector = 0x538; // FVector
	}

	namespace n_UInputComponent {
		constexpr auto CachedKeyToActionInfo = 0x120; // TArray<FCachedKeyToActionInfo>
	}

	namespace n_UMaterialExpressionNoise {
		constexpr auto Position = 0x40; // FExpressionInput
		constexpr auto FilterWidth = 0x54; // FExpressionInput
		constexpr auto Scale = 0x68; // float
		constexpr auto Quality = 0x6c; // int32_t
		constexpr auto NoiseFunction = 0x70; // ENoiseFunction
		constexpr auto bTurbulence = 0x74; // char : 1
		constexpr auto Levels = 0x78; // int32_t
		constexpr auto OutputMin = 0x7c; // float
		constexpr auto OutputMax = 0x80; // float
		constexpr auto LevelScale = 0x84; // float
		constexpr auto bTiling = 0x88; // char : 1
		constexpr auto RepeatSize = 0x8c; // uint32_t
	}

	namespace n_UParticleModuleCollision {
		constexpr auto DampingFactor = 0x30; // FRawDistributionVector
		constexpr auto DampingFactorRotation = 0x78; // FRawDistributionVector
		constexpr auto MaxCollisions = 0xc0; // FRawDistributionFloat
		constexpr auto CollisionCompletionOption = 0xf0; // EParticleCollisionComplete
		constexpr auto CollisionTypes = 0xf8; // TArray<EObjectTypeQuery>
		constexpr auto bApplyPhysics = 0x110; // char : 1
		constexpr auto bIgnoreTriggerVolumes = 0x110; // char : 1
		constexpr auto ParticleMass = 0x118; // FRawDistributionFloat
		constexpr auto DirScalar = 0x148; // float
		constexpr auto bPawnsDoNotDecrementCount = 0x14c; // char : 1
		constexpr auto bOnlyVerticalNormalsDecrementCount = 0x14c; // char : 1
		constexpr auto VerticalFudgeFactor = 0x150; // float
		constexpr auto DelayAmount = 0x158; // FRawDistributionFloat
		constexpr auto bDropDetail = 0x188; // char : 1
		constexpr auto bCollideOnlyIfVisible = 0x188; // char : 1
		constexpr auto bIgnoreSourceActor = 0x188; // char : 1
		constexpr auto MaxCollisionDistance = 0x18c; // float
	}

	namespace n_UPortalWarsDOMHillIndicator {
		constexpr auto DisplayCaptureProgress = 0x2f0; // float
		constexpr auto OnScreenProgressBar = 0x2f8; // UProgressBar*
		constexpr auto OffScreenProgressBar = 0x300; // UProgressBar*
	}

	namespace n_UWidgetComponent {
		constexpr auto Space = 0x478; // EWidgetSpace
		constexpr auto TimingPolicy = 0x479; // EWidgetTimingPolicy
		constexpr auto WidgetClass = 0x480; // UUserWidget*
		constexpr auto DrawSize = 0x488; // FIntPoint
		constexpr auto bManuallyRedraw = 0x490; // bool
		constexpr auto bRedrawRequested = 0x491; // bool
		constexpr auto RedrawTime = 0x494; // float
		constexpr auto CurrentDrawSize = 0x4a0; // FIntPoint
		constexpr auto bDrawAtDesiredSize = 0x4a8; // bool
		constexpr auto Pivot = 0x4ac; // FVector2D
		constexpr auto bReceiveHardwareInput = 0x4b4; // bool
		constexpr auto bWindowFocusable = 0x4b5; // bool
		constexpr auto WindowVisibility = 0x4b6; // EWindowVisibility
		constexpr auto bApplyGammaCorrection = 0x4b7; // bool
		constexpr auto OwnerPlayer = 0x4b8; // ULocalPlayer*
		constexpr auto BackgroundColor = 0x4c0; // FLinearColor
		constexpr auto TintColorAndOpacity = 0x4d0; // FLinearColor
		constexpr auto OpacityFromTexture = 0x4e0; // float
		constexpr auto BlendMode = 0x4e4; // EWidgetBlendMode
		constexpr auto bIsTwoSided = 0x4e5; // bool
		constexpr auto TickWhenOffscreen = 0x4e6; // bool
		constexpr auto BodySetup = 0x4e8; // UBodySetup*
		constexpr auto TranslucentMaterial = 0x4f0; // UMaterialInterface*
		constexpr auto TranslucentMaterial_OneSided = 0x4f8; // UMaterialInterface*
		constexpr auto OpaqueMaterial = 0x500; // UMaterialInterface*
		constexpr auto OpaqueMaterial_OneSided = 0x508; // UMaterialInterface*
		constexpr auto MaskedMaterial = 0x510; // UMaterialInterface*
		constexpr auto MaskedMaterial_OneSided = 0x518; // UMaterialInterface*
		constexpr auto RenderTarget = 0x520; // UTextureRenderTarget2D*
		constexpr auto MaterialInstance = 0x528; // UMaterialInstanceDynamic*
		constexpr auto bAddedToScreen = 0x530; // bool
		constexpr auto bEditTimeUsable = 0x531; // bool
		constexpr auto SharedLayerName = 0x534; // FName
		constexpr auto LayerZOrder = 0x53c; // int32_t
		constexpr auto GeometryMode = 0x540; // EWidgetGeometryMode
		constexpr auto CylinderArcAngle = 0x544; // float
		constexpr auto TickMode = 0x548; // ETickMode
		constexpr auto Widget = 0x570; // UUserWidget*
	}

	namespace n_UParticleModuleLifetime {
		constexpr auto LifeTime = 0x30; // FRawDistributionFloat
	}

	namespace n_UProjectileMovementComponent {
		constexpr auto InitialSpeed = 0xf0; // float
		constexpr auto MaxSpeed = 0xf4; // float
		constexpr auto bRotationFollowsVelocity = 0xf8; // char : 1
		constexpr auto bRotationRemainsVertical = 0xf8; // char : 1
		constexpr auto bShouldBounce = 0xf8; // char : 1
		constexpr auto bInitialVelocityInLocalSpace = 0xf8; // char : 1
		constexpr auto bForceSubStepping = 0xf8; // char : 1
		constexpr auto bSimulationEnabled = 0xf8; // char : 1
		constexpr auto bSweepCollision = 0xf8; // char : 1
		constexpr auto bIsHomingProjectile = 0xf8; // char : 1
		constexpr auto bBounceAngleAffectsFriction = 0xf9; // char : 1
		constexpr auto bIsSliding = 0xf9; // char : 1
		constexpr auto bInterpMovement = 0xf9; // char : 1
		constexpr auto bInterpRotation = 0xf9; // char : 1
		constexpr auto PreviousHitTime = 0xfc; // float
		constexpr auto PreviousHitNormal = 0x100; // FVector
		constexpr auto ProjectileGravityScale = 0x10c; // float
		constexpr auto Buoyancy = 0x110; // float
		constexpr auto Bounciness = 0x114; // float
		constexpr auto Friction = 0x118; // float
		constexpr auto BounceVelocityStopSimulatingThreshold = 0x11c; // float
		constexpr auto MinFrictionFraction = 0x120; // float
		constexpr auto OnProjectileBounce = 0x128; // FMulticastInlineDelegate
		constexpr auto OnProjectileStop = 0x138; // FMulticastInlineDelegate
		constexpr auto HomingAccelerationMagnitude = 0x148; // float
		constexpr auto HomingTargetComponent = 0x14c; // TWeakObjectPtr<USceneComponent>
		constexpr auto MaxSimulationTimeStep = 0x154; // float
		constexpr auto MaxSimulationIterations = 0x158; // int32_t
		constexpr auto BounceAdditionalIterations = 0x15c; // int32_t
		constexpr auto InterpLocationTime = 0x160; // float
		constexpr auto InterpRotationTime = 0x164; // float
		constexpr auto InterpLocationMaxLagDistance = 0x168; // float
		constexpr auto InterpLocationSnapToTargetDistance = 0x16c; // float
	}

	namespace n_UPortalWarsNavButtonWidget {
		constexpr auto NewColor = 0x420; // FLinearColor
	}

	namespace n_UTexture2DArray {
		constexpr auto AddressX = 0x1d0; // TextureAddress
		constexpr auto AddressY = 0x1d1; // TextureAddress
		constexpr auto AddressZ = 0x1d2; // TextureAddress
	}

	namespace n_UGeometryCacheCodecBase {
		constexpr auto TopologyRanges = 0x28; // TArray<int32_t>
	}

	namespace n_UAsyncTask_LoadXRDeviceVisComponent {
		constexpr auto OnModelLoaded = 0x30; // FMulticastInlineDelegate
		constexpr auto OnLoadFailure = 0x40; // FMulticastInlineDelegate
		constexpr auto SpawnedComponent = 0x58; // UPrimitiveComponent*
	}

	namespace n_UAISenseConfig {
		constexpr auto DebugColor = 0x28; // FColor
		constexpr auto MaxAge = 0x2c; // float
		constexpr auto bStartsEnabled = 0x30; // char : 1
	}

	namespace n_AEMPExplosiveProjectile {
		constexpr auto GrenadePickupClass = 0x2e0; // APortalWarsGrenadePickup*
	}

	namespace n_UVirtualTexture2D {
		constexpr auto Settings = 0x1a0; // FVirtualTextureBuildSettings
		constexpr auto bContinuousUpdate = 0x1ac; // bool
		constexpr auto bSinglePhysicalSpace = 0x1ad; // bool
	}

	namespace n_UPortalWarsPathFollowingComponent {
		constexpr auto CharacterMoveComp = 0x250; // UCharacterMovementComponent*
	}

	namespace n_UMaterialFunctionInstance {
		constexpr auto Parent = 0x40; // UMaterialFunctionInterface*
		constexpr auto Base = 0x48; // UMaterialFunctionInterface*
		constexpr auto ScalarParameterValues = 0x50; // TArray<FScalarParameterValue>
		constexpr auto VectorParameterValues = 0x60; // TArray<FVectorParameterValue>
		constexpr auto TextureParameterValues = 0x70; // TArray<FTextureParameterValue>
		constexpr auto FontParameterValues = 0x80; // TArray<FFontParameterValue>
		constexpr auto StaticSwitchParameterValues = 0x90; // TArray<FStaticSwitchParameter>
		constexpr auto StaticComponentMaskParameterValues = 0xa0; // TArray<FStaticComponentMaskParameter>
		constexpr auto RuntimeVirtualTextureParameterValues = 0xb0; // TArray<FRuntimeVirtualTextureParameterValue>
	}

	namespace n_UFont {
		constexpr auto FontCacheType = 0x30; // EFontCacheType
		constexpr auto Characters = 0x38; // TArray<FFontCharacter>
		constexpr auto Textures = 0x48; // TArray<UTexture2D*>
		constexpr auto IsRemapped = 0x58; // int32_t
		constexpr auto EmScale = 0x5c; // float
		constexpr auto Ascent = 0x60; // float
		constexpr auto Descent = 0x64; // float
		constexpr auto Leading = 0x68; // float
		constexpr auto Kerning = 0x6c; // int32_t
		constexpr auto ImportOptions = 0x70; // FFontImportOptionsData
		constexpr auto NumCharacters = 0x120; // int32_t
		constexpr auto MaxCharHeight = 0x128; // TArray<int32_t>
		constexpr auto ScalingFactor = 0x138; // float
		constexpr auto LegacyFontSize = 0x13c; // int32_t
		constexpr auto LegacyFontName = 0x140; // FName
		constexpr auto CompositeFont = 0x148; // FCompositeFont
	}

	namespace n_UPortalWarsChallengesInspectWidget {
		constexpr auto ItemsRoot = 0x3c0; // UWidget*
		constexpr auto ItemsPanel = 0x3c8; // UPortalWarsCustomScrollWidget*
		constexpr auto ItemEntryWidgetClass = 0x3d0; // UPortalWarsChallengeEntryWidget*
		constexpr auto ChallengeEntry = 0x3d8; // UPortalWarsChallengeEntryWidget*
	}

	namespace n_UMaterialExpressionRuntimeVirtualTextureOutput {
		constexpr auto BaseColor = 0x40; // FExpressionInput
		constexpr auto Specular = 0x54; // FExpressionInput
		constexpr auto Roughness = 0x68; // FExpressionInput
		constexpr auto Normal = 0x7c; // FExpressionInput
		constexpr auto WorldHeight = 0x90; // FExpressionInput
		constexpr auto Opacity = 0xa4; // FExpressionInput
		constexpr auto mask = 0xb8; // FExpressionInput
	}

	namespace n_UPortalWarsDOMControlledHillWidget {
		constexpr auto HillLetterText = 0x260; // UTextBlock*
		constexpr auto HillImage = 0x268; // UImage*
		constexpr auto PaddingBetweenEntries = 0x270; // float
	}

	namespace n_UPortalWarsVIPNameIndicatorWidget {
		constexpr auto Pointer = 0x308; // UWidget*
		constexpr auto OffscreenSizeBox = 0x310; // USizeBox*
	}

	namespace n_ULandscapeComponent {
		constexpr auto SectionBaseX = 0x450; // int32_t
		constexpr auto SectionBaseY = 0x454; // int32_t
		constexpr auto ComponentSizeQuads = 0x458; // int32_t
		constexpr auto SubsectionSizeQuads = 0x45c; // int32_t
		constexpr auto NumSubsections = 0x460; // int32_t
		constexpr auto OverrideMaterial = 0x468; // UMaterialInterface*
		constexpr auto OverrideHoleMaterial = 0x470; // UMaterialInterface*
		constexpr auto OverrideMaterials = 0x478; // TArray<FLandscapeComponentMaterialOverride>
		constexpr auto MaterialInstances = 0x488; // TArray<UMaterialInstanceConstant*>
		constexpr auto MaterialInstancesDynamic = 0x498; // TArray<UMaterialInstanceDynamic*>
		constexpr auto LODIndexToMaterialIndex = 0x4a8; // TArray<int8_t>
		constexpr auto MaterialIndexToDisabledTessellationMaterial = 0x4b8; // TArray<int8_t>
		constexpr auto XYOffsetmapTexture = 0x4c8; // UTexture2D*
		constexpr auto WeightmapScaleBias = 0x4d0; // FVector4
		constexpr auto WeightmapSubsectionOffset = 0x4e0; // float
		constexpr auto HeightmapScaleBias = 0x4f0; // FVector4
		constexpr auto CachedLocalBox = 0x500; // FBox
		constexpr auto CollisionComponent = 0x51c; // LazyObjectProperty
		constexpr auto HeightmapTexture = 0x538; // UTexture2D*
		constexpr auto WeightmapLayerAllocations = 0x540; // TArray<FWeightmapLayerAllocationInfo>
		constexpr auto WeightmapTextures = 0x550; // TArray<UTexture2D*>
		constexpr auto LODStreamingProxy = 0x560; // ULandscapeLODStreamingProxy*
		constexpr auto MapBuildDataId = 0x568; // FGuid
		constexpr auto IrrelevantLights = 0x578; // TArray<FGuid>
		constexpr auto CollisionMipLevel = 0x588; // int32_t
		constexpr auto SimpleCollisionMipLevel = 0x58c; // int32_t
		constexpr auto NegativeZBoundsExtension = 0x590; // float
		constexpr auto PositiveZBoundsExtension = 0x594; // float
		constexpr auto StaticLightingResolution = 0x598; // float
		constexpr auto ForcedLOD = 0x59c; // int32_t
		constexpr auto LODBias = 0x5a0; // int32_t
		constexpr auto StateId = 0x5a4; // FGuid
		constexpr auto BakedTextureMaterialGuid = 0x5b4; // FGuid
		constexpr auto GIBakedBaseColorTexture = 0x5c8; // UTexture2D*
		constexpr auto MobileBlendableLayerMask = 0x5d0; // char
		constexpr auto MobileMaterialInterface = 0x5d8; // UMaterialInterface*
		constexpr auto MobileMaterialInterfaces = 0x5e0; // TArray<UMaterialInterface*>
		constexpr auto MobileWeightmapTextures = 0x5f0; // TArray<UTexture2D*>
	}

	namespace n_UMaterialExpressionSphereMask {
		constexpr auto A = 0x40; // FExpressionInput
		constexpr auto B = 0x54; // FExpressionInput
		constexpr auto Radius = 0x68; // FExpressionInput
		constexpr auto Hardness = 0x7c; // FExpressionInput
		constexpr auto AttenuationRadius = 0x90; // float
		constexpr auto HardnessPercent = 0x94; // float
	}

	namespace n_USoundNodeRandom {
		constexpr auto Weights = 0x48; // TArray<float>
		constexpr auto HasBeenUsed = 0x58; // TArray<bool>
		constexpr auto NumRandomUsed = 0x68; // int32_t
		constexpr auto PreselectAtLevelLoad = 0x6c; // int32_t
		constexpr auto bShouldExcludeFromBranchCulling = 0x70; // char : 1
		constexpr auto bSoundCueExcludedFromBranchCulling = 0x70; // char : 1
		constexpr auto bRandomizeWithoutReplacement = 0x70; // char : 1
	}

	namespace n_USoundSourceBus {
		constexpr auto SourceBusChannels = 0x370; // ESourceBusChannels
		constexpr auto SourceBusDuration = 0x374; // float
		constexpr auto AudioBus = 0x378; // UAudioBus*
		constexpr auto bAutoDeactivateWhenSilent = 0x380; // char : 1
	}

	namespace n_AMainMenuPlayerController {
		constexpr auto LoginMenuWidget = 0x590; // UPortalWarsLoginMenuWidget*
		constexpr auto LoginMenuWidgetClass = 0x598; // UPortalWarsLoginMenuWidget*
		constexpr auto MainMenuWidget = 0x5a0; // UPortalWarsMainMenuWidget*
		constexpr auto MainMenuWidgetClass = 0x5a8; // UPortalWarsMainMenuWidget*
		constexpr auto MainMenuMusicEvent = 0x5c8; // UAkAudioEvent*
		constexpr auto MainMenuMusicStopEvent = 0x5d0; // UAkAudioEvent*
		constexpr auto GameStateRef = 0x5d8; // AMainMenuGameState*
		constexpr auto GameInstanceRef = 0x5e0; // UPortalWarsGameInstance*
		constexpr auto LocalPlayerRef = 0x5e8; // UPortalWarsLocalPlayer*
		constexpr auto IntroVideoWidget = 0x5f0; // UPortalWarsIntroVideoWidget*
		constexpr auto IntroVideoWidgetClass = 0x5f8; // UPortalWarsIntroVideoWidget*
		constexpr auto AutoSettingsWidget = 0x600; // UPortalWarsAutoSettingsWidget*
		constexpr auto AutoSettingsWidgetClass = 0x608; // UPortalWarsAutoSettingsWidget*
	}

	namespace n_UEdGraph {
		constexpr auto Schema = 0x28; // UEdGraphSchema*
		constexpr auto Nodes = 0x30; // TArray<UEdGraphNode*>
		constexpr auto bEditable = 0x40; // char : 1
		constexpr auto bAllowDeletion = 0x40; // char : 1
		constexpr auto bAllowRenaming = 0x40; // char : 1
	}

	namespace n_UPortalWarsCustomSettingsWidget {
		constexpr auto TeamSelector = 0x338; // UPortalWarsTeamSelectWidget*
		constexpr auto AlphaName = 0x348; // UPortalWarsTextInputWidget*
		constexpr auto BravoName = 0x350; // UPortalWarsTextInputWidget*
		constexpr auto ScoreLimitSelector = 0x358; // UPortalWarsTeamNumericCarouselWidget*
		constexpr auto TimeLimitSelector = 0x360; // UPortalWarsNumericCarouselWidget*
		constexpr auto RespawnTimeSelector = 0x368; // UPortalWarsTeamNumericCarouselWidget*
		constexpr auto PrimaryWeaponSelector = 0x370; // UPortalWarsTeamGlobalCarouselWidget*
		constexpr auto SecondaryWeaponSelector = 0x378; // UPortalWarsTeamGlobalCarouselWidget*
		constexpr auto PickupsEnabledCheckBox = 0x380; // UPortalWarsCheckBoxWidget*
		constexpr auto BotsEnabledCheckBox = 0x388; // UPortalWarsCheckBoxWidget*
		constexpr auto BotDifficultySelector = 0x390; // UPortalWarsDifficultySelectWidget*
		constexpr auto BoundariesEnabledCheckBox = 0x398; // UPortalWarsTeamCheckboxWidget*
		constexpr auto RadarEnabledCheckBox = 0x3a0; // UPortalWarsTeamCheckboxWidget*
		constexpr auto JetpackEnabledCheckBox = 0x3a8; // UPortalWarsTeamCheckboxWidget*
		constexpr auto SprintEnabledCheckBox = 0x3b0; // UPortalWarsTeamCheckboxWidget*
		constexpr auto PortalGunEnabledCheckBox = 0x3b8; // UPortalWarsTeamCheckboxWidget*
		constexpr auto MeleeEnabledCheckBox = 0x3c0; // UPortalWarsTeamCheckboxWidget*
		constexpr auto HeadshotsOnlyCheckBox = 0x3c8; // UPortalWarsTeamCheckboxWidget*
		constexpr auto BigHeadModeCheckBox = 0x3d0; // UPortalWarsTeamCheckboxWidget*
		constexpr auto UnlimitedAmmoCheckBox = 0x3d8; // UPortalWarsTeamCheckboxWidget*
		constexpr auto UnlimitedClipSizeCheckBox = 0x3e0; // UPortalWarsTeamCheckboxWidget*
		constexpr auto RandomHillsEnabledCheckBox = 0x3e8; // UPortalWarsCheckBoxWidget*
		constexpr auto KillcamEnabledCheckBox = 0x3f0; // UPortalWarsCheckBoxWidget*
		constexpr auto RandomWeaponsCheckBox = 0x3f8; // UPortalWarsTeamCheckboxWidget*
		constexpr auto SwitchTeamsCheckBox = 0x400; // UPortalWarsCheckBoxWidget*
		constexpr auto WeaponDropsCheckBox = 0x408; // UPortalWarsTeamCheckboxWidget*
		constexpr auto WalkSpeedModifier = 0x410; // UPortalWarsTeamDecimalCarouselWidget*
		constexpr auto JumpHeightModifier = 0x418; // UPortalWarsTeamDecimalCarouselWidget*
		constexpr auto GravityModifier = 0x420; // UPortalWarsTeamDecimalCarouselWidget*
		constexpr auto JetpackFuelModifier = 0x428; // UPortalWarsTeamDecimalCarouselWidget*
		constexpr auto JetpackBoostModifier = 0x430; // UPortalWarsTeamDecimalCarouselWidget*
		constexpr auto MeleeDmgModifier = 0x438; // UPortalWarsTeamDecimalCarouselWidget*
		constexpr auto HealthModifier = 0x440; // UPortalWarsTeamDecimalCarouselWidget*
		constexpr auto PresetOptionsButton = 0x448; // UPortalWarsButtonWidget*
		constexpr auto PresetOptionsDialogClass = 0x450; // UPortalWarsFileOptionsDialogWidget*
		constexpr auto TeamNamesButton = 0x458; // UPortalWarsButtonWidget*
		constexpr auto ModeSettingsButton = 0x460; // UPortalWarsButtonWidget*
		constexpr auto BotSettingsButton = 0x468; // UPortalWarsButtonWidget*
		constexpr auto MapOptionsButton = 0x470; // UPortalWarsButtonWidget*
		constexpr auto ModeOptionsButton = 0x478; // UPortalWarsButtonWidget*
		constexpr auto TeamOptionsButton = 0x480; // UPortalWarsButtonWidget*
		constexpr auto WeaponOptionsButton = 0x488; // UPortalWarsButtonWidget*
		constexpr auto PlayerAttributesButton = 0x490; // UPortalWarsButtonWidget*
		constexpr auto AbilityOptionsButton = 0x498; // UPortalWarsButtonWidget*
		constexpr auto MatchOptionsText = 0x4a0; // UTextBlock*
		constexpr auto SettingsScrollBox = 0x4a8; // UScrollBox*
	}

	namespace n_UPortalWarsLockerWidget {
		constexpr auto InspectWidget = 0x338; // UPortalWarsLockerSubWidget*
	}

	namespace n_USpacer {
		constexpr auto Size = 0x108; // FVector2D
	}

	namespace n_USubmixEffectDynamicsProcessorPreset {
		constexpr auto Settings = 0xf0; // FSubmixEffectDynamicsProcessorSettings
	}

	namespace n_UBrushBaseProperties {
		constexpr auto BrushSize = 0x60; // float
		constexpr auto bSpecifyRadius = 0x64; // bool
		constexpr auto BrushRadius = 0x68; // float
		constexpr auto BrushStrength = 0x6c; // float
		constexpr auto BrushFalloffAmount = 0x70; // float
		constexpr auto bShowStrength = 0x74; // bool
		constexpr auto bShowFalloff = 0x75; // bool
	}

	namespace n_UGizmoComponentHitTarget {
		constexpr auto Component = 0x30; // UPrimitiveComponent*
	}

	namespace n_UBlackboardKeyType_String {
		constexpr auto StringValue = 0x30; // FString
	}

	namespace n_UMovieSceneFadeSection {
		constexpr auto FloatCurve = 0xe8; // FMovieSceneFloatChannel
		constexpr auto FadeColor = 0x188; // FLinearColor
		constexpr auto bFadeAudio = 0x198; // char : 1
	}

	namespace n_UStereoLayerShapeEquirect {
		constexpr auto LeftUVRect = 0x28; // FBox2D
		constexpr auto RightUVRect = 0x3c; // FBox2D
		constexpr auto LeftScale = 0x50; // FVector2D
		constexpr auto RightScale = 0x58; // FVector2D
		constexpr auto LeftBias = 0x60; // FVector2D
		constexpr auto RightBias = 0x68; // FVector2D
	}

	namespace n_UAIDataProvider_Random {
		constexpr auto Min = 0x40; // float
		constexpr auto Max = 0x44; // float
		constexpr auto bInteger = 0x48; // char : 1
	}

	namespace n_UBehaviorTreeManager {
		constexpr auto MaxDebuggerSteps = 0x28; // int32_t
		constexpr auto LoadedTemplates = 0x30; // TArray<FBehaviorTreeTemplateInfo>
		constexpr auto ActiveComponents = 0x40; // TArray<UBehaviorTreeComponent*>
	}

	namespace n_UGizmoTransformChangeStateTarget {
		constexpr auto TransactionManager = 0x50; // TScriptInterface<IToolContextTransactionProvider>
	}

	namespace n_UCameraModifier_CameraShake {
		constexpr auto ActiveShakes = 0x48; // TArray<FActiveCameraShakeInfo>
		constexpr auto ExpiredPooledShakesMap = 0x58; // TMap<UCameraShakeBase*, FPooledCameraShakes>
		constexpr auto SplitScreenShakeScale = 0xa8; // float
	}

	namespace n_UDistributionVectorParameterBase {
		constexpr auto ParameterName = 0x50; // FName
		constexpr auto MinInput = 0x58; // FVector
		constexpr auto MaxInput = 0x64; // FVector
		constexpr auto MinOutput = 0x70; // FVector
		constexpr auto MaxOutput = 0x7c; // FVector
		constexpr auto ParamModes = 0x88; // DistributionParamMode [0x3]
	}

	namespace n_UNiagaraBaselineController {
		constexpr auto TestDuration = 0x28; // float
		constexpr auto EffectType = 0x30; // UNiagaraEffectType*
		constexpr auto Owner = 0x38; // ANiagaraPerfBaselineActor*
		constexpr auto System = 0x40; // TSoftObjectPtr<UNiagaraSystem>
	}

	namespace n_UTcpMessagingSettings {
		constexpr auto EnableTransport = 0x28; // bool
		constexpr auto ListenEndpoint = 0x30; // FString
		constexpr auto ConnectToEndpoints = 0x40; // TArray<FString>
		constexpr auto ConnectionRetryDelay = 0x50; // int32_t
		constexpr auto bStopServiceWhenAppDeactivates = 0x54; // bool
	}

	namespace n_UPortalWarsDamageType {
		constexpr auto KillIcon = 0x40; // UTexture2D*
		constexpr auto HitForceFeedback = 0x48; // UForceFeedbackEffect*
		constexpr auto KilledForceFeedback = 0x50; // UForceFeedbackEffect*
		constexpr auto Weapon = 0x58; // AGun*
	}

	namespace n_UWidgetAnimationDelegateBinding {
		constexpr auto WidgetAnimationDelegateBindings = 0x28; // TArray<FBlueprintWidgetAnimationDelegateBinding>
	}

	namespace n_APortalWarsGrenadePickupZone {
		constexpr auto GrenadeName = 0x358; // FText
		constexpr auto PickupEvent = 0x370; // UAkAudioEvent*
	}

	namespace n_ULoudnessNRTSettings {
		constexpr auto AnalysisPeriod = 0x28; // float
		constexpr auto MinimumFrequency = 0x2c; // float
		constexpr auto MaximumFrequency = 0x30; // float
		constexpr auto CurveType = 0x34; // ELoudnessNRTCurveTypeEnum
		constexpr auto NoiseFloorDb = 0x38; // float
	}

	namespace n_USoundNodeWavePlayer {
		constexpr auto SoundWaveAssetPtr = 0x48; // TSoftObjectPtr<USoundWave>
		constexpr auto SoundWave = 0x70; // USoundWave*
		constexpr auto bLooping = 0x80; // char : 1
	}

	namespace n_UParticleModuleRotation {
		constexpr auto StartRotation = 0x30; // FRawDistributionFloat
	}

	namespace n_UMaterialExpressionFontSample {
		constexpr auto Font = 0x40; // UFont*
		constexpr auto FontTexturePage = 0x48; // int32_t
	}

	namespace n_UCompositionGraphCaptureProtocol {
		constexpr auto IncludeRenderPasses = 0x58; // FCompositionGraphCapturePasses
		constexpr auto bCaptureFramesInHDR = 0x68; // bool
		constexpr auto HDRCompressionQuality = 0x6c; // int32_t
		constexpr auto CaptureGamut = 0x70; // EHDRCaptureGamut
		constexpr auto PostProcessingMaterial = 0x78; // FSoftObjectPath
		constexpr auto bDisableScreenPercentage = 0x90; // bool
		constexpr auto PostProcessingMaterialPtr = 0x98; // UMaterialInterface*
	}

	namespace n_UPortalWarsHUDWidget {
		constexpr auto Health = 0x260; // UPortalWarsHealthWidget*
		constexpr auto LowHealthOverlay = 0x268; // UImage*
		constexpr auto JetpackOverlay = 0x270; // UOverlay*
		constexpr auto JetpackCanvas = 0x278; // UCanvasPanel*
		constexpr auto JetpackProgressBar = 0x280; // UProgressBar*
		constexpr auto IndicatorPanel = 0x288; // UCanvasPanel*
		constexpr auto NameIndicatorWidgetClass = 0x290; // UPortalWarsIndicatorWidget*
		constexpr auto PortalIndicatorWidgetClass = 0x298; // UPortalWarsIndicatorWidget*
		constexpr auto PickupIndicatorZoneClass = 0x2a0; // UPortalWarsIndicatorWidget*
		constexpr auto PickupWidget = 0x2a8; // UPortalWarsPickupWidget*
		constexpr auto DamageIndicatorOverlay = 0x2b0; // UOverlay*
		constexpr auto DamageIndicatorWidgetClass = 0x2b8; // UPortalWarsDamageIndicatorWidget*
		constexpr auto Reticle = 0x2c0; // UPortalWarsReticleWidget*
		constexpr auto Radar = 0x2c8; // UPortalWarsRadarWidget*
		constexpr auto RespawnTimer = 0x2d0; // UPortalWarsRespawnWidget*
		constexpr auto DamageNumberEntryWidgetClass = 0x2d8; // UPortalWarsDamageNumberEntryWidget*
		constexpr auto MaxDamageNumberEntries = 0x2e0; // int32_t
		constexpr auto DamageNumberEntryDisplayTime = 0x2e4; // float
		constexpr auto DamageNumbersPanel = 0x2e8; // UPanelWidget*
		constexpr auto KillStack = 0x2f0; // UPanelWidget*
		constexpr auto KillStackEntryWidgetClass = 0x2f8; // UPortalWarsKillStackEntryWidget*
		constexpr auto MaxKillStackEntries = 0x300; // int32_t
		constexpr auto KillStackEntryDisplayTime = 0x304; // float
		constexpr auto KillFeed = 0x308; // UPanelWidget*
		constexpr auto KillFeedEntryWidgetClass = 0x310; // UPortalWarsKillFeedEntryWidget*
		constexpr auto MaxKillFeedEntries = 0x318; // int32_t
		constexpr auto KillFeedEntryDisplayTime = 0x31c; // float
		constexpr auto KilledByBanner = 0x320; // UPortalWarsKilledByBannerWidget*
		constexpr auto LowAmmoIndicator = 0x328; // UPortalWarsLowAmmoIndicatorWidget*
		constexpr auto SpectatingWhileDeadName = 0x330; // UTextBlock*
		constexpr auto OutOfBounds = 0x338; // UPortalWarsOutOfBoundsWidget*
		constexpr auto Inventory = 0x340; // UPortalWarsInventoryWidget*
		constexpr auto Medals = 0x348; // UPortalWarsMedalsWidget*
		constexpr auto SubtitleTextBlock = 0x350; // UTextBlock*
		constexpr auto SubtitleDisplayTime = 0x358; // float
		constexpr auto ScorePanel = 0x368; // UWidget*
		constexpr auto WaitingAreaIndicator = 0x370; // UWidget*
	}

	namespace n_UMagicLeapARPinSettings {
		constexpr auto UpdateCheckFrequency = 0x28; // float
		constexpr auto OnUpdatedEventTriggerDelta = 0x2c; // FMagicLeapARPinState
	}

	namespace n_UBTService {
		constexpr auto Interval = 0x60; // float
		constexpr auto RandomDeviation = 0x64; // float
		constexpr auto bCallTickOnSearchStart = 0x68; // char : 1
		constexpr auto bRestartTimerOnEachActivation = 0x68; // char : 1
	}

	namespace n_UAxisPositionGizmo {
		constexpr auto AxisSource = 0x48; // TScriptInterface<IGizmoAxisSource>
		constexpr auto ParameterSource = 0x58; // TScriptInterface<IGizmoFloatParameterSource>
		constexpr auto HitTarget = 0x68; // TScriptInterface<IGizmoClickTarget>
		constexpr auto StateTarget = 0x78; // TScriptInterface<IGizmoStateTarget>
		constexpr auto bEnableSignedAxis = 0x88; // bool
		constexpr auto bInInteraction = 0x89; // bool
		constexpr auto InteractionOrigin = 0x8c; // FVector
		constexpr auto InteractionAxis = 0x98; // FVector
		constexpr auto InteractionStartPoint = 0xa4; // FVector
		constexpr auto InteractionCurPoint = 0xb0; // FVector
		constexpr auto InteractionStartParameter = 0xbc; // float
		constexpr auto InteractionCurParameter = 0xc0; // float
		constexpr auto ParameterSign = 0xc4; // float
	}

	namespace n_UBTDecorator_LOSToEnemy {
		constexpr auto MaxDistance = 0x68; // float
		constexpr auto bUseWeaponFalloffRange = 0x6c; // bool
	}

	namespace n_UMaterialInstance {
		constexpr auto PhysMaterial = 0x88; // UPhysicalMaterial*
		constexpr auto PhysicalMaterialMap = 0x90; // UPhysicalMaterial* [0x8]
		constexpr auto Parent = 0xd0; // UMaterialInterface*
		constexpr auto bHasStaticPermutationResource = 0xd8; // char : 1
		constexpr auto bOverrideSubsurfaceProfile = 0xd8; // char : 1
		constexpr auto ScalarParameterValues = 0xe0; // TArray<FScalarParameterValue>
		constexpr auto VectorParameterValues = 0xf0; // TArray<FVectorParameterValue>
		constexpr auto TextureParameterValues = 0x100; // TArray<FTextureParameterValue>
		constexpr auto RuntimeVirtualTextureParameterValues = 0x110; // TArray<FRuntimeVirtualTextureParameterValue>
		constexpr auto FontParameterValues = 0x120; // TArray<FFontParameterValue>
		constexpr auto BasePropertyOverrides = 0x130; // FMaterialInstanceBasePropertyOverrides
		constexpr auto StaticParameters = 0x148; // FStaticParameterSet
		constexpr auto CachedLayerParameters = 0x188; // FMaterialCachedParameters
		constexpr auto CachedReferencedTextures = 0x328; // TArray<UObject*>
	}

	namespace n_UPortalWarsItemShopEntry {
		constexpr auto SubtitleText = 0x430; // UTextBlock*
		constexpr auto DisplayImage = 0x438; // UImage*
		constexpr auto RarityIcon = 0x440; // UImage*
		constexpr auto RarityBG = 0x448; // UImage*
		constexpr auto RarityBorder = 0x450; // UImage*
		constexpr auto RarityScrim = 0x458; // UImage*
		constexpr auto RarityBackgrounds = 0x460; // TMap<ECustomizationRarity, UTexture2D*>
		constexpr auto RarityScrims = 0x4b0; // TMap<ECustomizationRarity, UTexture2D*>
		constexpr auto RarityTitleColors = 0x500; // TMap<ECustomizationRarity, FLinearColor>
		constexpr auto RarityBorderColors = 0x550; // TMap<ECustomizationRarity, FLinearColor>
		constexpr auto OwnedSwitcher = 0x5a0; // UWidgetSwitcher*
		constexpr auto DefaultSubtitleColor = 0x5b0; // FLinearColor
		constexpr auto HoveredSubtitleColor = 0x5c0; // FLinearColor
		constexpr auto ThumbnailPaddings = 0x5d0; // TMap<ECustomizationType, FMargin>
		constexpr auto RenderAngles = 0x620; // TMap<ECustomizationType, float>
	}

	namespace n_AChaosSolverActor {
		constexpr auto Properties = 0x220; // FChaosSolverConfiguration
		constexpr auto TimeStepMultiplier = 0x288; // float
		constexpr auto CollisionIterations = 0x28c; // int32_t
		constexpr auto PushOutIterations = 0x290; // int32_t
		constexpr auto PushOutPairIterations = 0x294; // int32_t
		constexpr auto ClusterConnectionFactor = 0x298; // float
		constexpr auto ClusterUnionConnectionType = 0x29c; // EClusterConnectionTypeEnum
		constexpr auto DoGenerateCollisionData = 0x29d; // bool
		constexpr auto CollisionFilterSettings = 0x2a0; // FSolverCollisionFilterSettings
		constexpr auto DoGenerateBreakingData = 0x2b0; // bool
		constexpr auto BreakingFilterSettings = 0x2b4; // FSolverBreakingFilterSettings
		constexpr auto DoGenerateTrailingData = 0x2c4; // bool
		constexpr auto TrailingFilterSettings = 0x2c8; // FSolverTrailingFilterSettings
		constexpr auto MassScale = 0x2d8; // float
		constexpr auto bGenerateContactGraph = 0x2dc; // bool
		constexpr auto bHasFloor = 0x2dd; // bool
		constexpr auto FloorHeight = 0x2e0; // float
		constexpr auto ChaosDebugSubstepControl = 0x2e4; // FChaosDebugSubstepControl
		constexpr auto SpriteComponent = 0x2e8; // UBillboardComponent*
		constexpr auto GameplayEventDispatcherComponent = 0x308; // UChaosGameplayEventDispatcher*
	}

	namespace n_UParticleModuleVelocity {
		constexpr auto StartVelocity = 0x38; // FRawDistributionVector
		constexpr auto StartVelocityRadial = 0x80; // FRawDistributionFloat
	}

	namespace n_APortalWarsForcedTeleportTrigger {
		constexpr auto TargetPortalWall = 0x228; // APortalWall*
	}

	namespace n_UParticleModuleRotationRateMultiplyLife {
		constexpr auto LifeMultiplier = 0x30; // FRawDistributionFloat
	}

	namespace n_ANeutralFlagItemPickup {
		constexpr auto NeutralFlagMaterial = 0x320; // UMaterialInstance*
		constexpr auto NeutralCTFGameState = 0x328; // APortalWarsNeutralCTFGameState*
	}

	namespace n_UDistributionVectorConstantCurve {
		constexpr auto ConstantCurve = 0x38; // FInterpCurveVector
		constexpr auto bLockAxes = 0x50; // char : 1
		constexpr auto LockedAxes = 0x54; // EDistributionVectorLockFlags
	}

	namespace n_UInterpTrackLinearColorBase {
		constexpr auto LinearColorTrack = 0x70; // FInterpCurveLinearColor
		constexpr auto CurveTension = 0x88; // float
	}

	namespace n_UVectorField {
		constexpr auto Bounds = 0x28; // FBox
		constexpr auto Intensity = 0x44; // float
	}

	namespace n_UNiagaraDataInterfaceGrid3DCollection {
		constexpr auto NumAttributes = 0x100; // int32_t
		constexpr auto RenderTargetUserParameter = 0x108; // FNiagaraUserParameterBinding
		constexpr auto OverrideBufferFormat = 0x128; // ENiagaraGpuBufferFormat
		constexpr auto bOverrideFormat = 0x129; // char : 1
	}

	namespace n_UBTTask_RunBehavior {
		constexpr auto BehaviorAsset = 0x70; // UBehaviorTree*
	}

	namespace n_UParticleModuleEventReceiverBase {
		constexpr auto EventGeneratorType = 0x30; // EParticleEventType
		constexpr auto EventName = 0x34; // FName
	}

	namespace n_UPlayer {
		constexpr auto PlayerController = 0x30; // APlayerController*
		constexpr auto CurrentNetSpeed = 0x38; // int32_t
		constexpr auto ConfiguredInternetSpeed = 0x3c; // int32_t
		constexpr auto ConfiguredLanSpeed = 0x40; // int32_t
	}

	namespace n_UNiagaraRendererProperties {
		constexpr auto Platforms = 0x28; // FNiagaraPlatformSet
		constexpr auto SortOrderHint = 0x58; // int32_t
		constexpr auto MotionVectorSetting = 0x5c; // ENiagaraRendererMotionVectorSetting
		constexpr auto bIsEnabled = 0x60; // bool
		constexpr auto bMotionBlurEnabled = 0x61; // bool
	}

	namespace n_UPortalWarsPostGameLobbyWidget {
		constexpr auto PrevGameRoot = 0x2f8; // UWidget*
		constexpr auto MapNameText = 0x300; // UTextBlock*
		constexpr auto ModeNameText = 0x308; // UTextBlock*
		constexpr auto ScoreSwitcher = 0x310; // UWidgetSwitcher*
		constexpr auto AlphaScoreText = 0x318; // UTextBlock*
		constexpr auto BravoScoreText = 0x320; // UTextBlock*
		constexpr auto WinnerNameText = 0x328; // UTextBlock*
		constexpr auto WinnerScoreText = 0x330; // UTextBlock*
		constexpr auto TimerText = 0x338; // UTextBlock*
		constexpr auto TimerRoot = 0x340; // UWidget*
		constexpr auto RequeueButton = 0x348; // UPortalWarsButtonWidget*
		constexpr auto ReadyButton = 0x350; // UPortalWarsButtonWidget*
		constexpr auto ItemShopButton = 0x358; // UPortalWarsButtonWidget*
		constexpr auto ActionText = 0x360; // UTextBlock*
		constexpr auto TimerSwitcher = 0x368; // UWidgetSwitcher*
	}

	namespace n_UWindDirectionalSourceComponent {
		constexpr auto Strength = 0x1f8; // float
		constexpr auto Speed = 0x1fc; // float
		constexpr auto MinGustAmount = 0x200; // float
		constexpr auto MaxGustAmount = 0x204; // float
		constexpr auto Radius = 0x208; // float
		constexpr auto bPointWind = 0x20c; // char : 1
	}

	namespace n_AEmitterCameraLensEffectBase {
		constexpr auto PS_CameraEffect = 0x270; // UParticleSystem*
		constexpr auto PS_CameraEffectNonExtremeContent = 0x278; // UParticleSystem*
		constexpr auto BaseCamera = 0x280; // APlayerCameraManager*
		constexpr auto RelativeTransform = 0x290; // FTransform
		constexpr auto BaseFOV = 0x2c0; // float
		constexpr auto bAllowMultipleInstances = 0x2c4; // char : 1
		constexpr auto bResetWhenRetriggered = 0x2c4; // char : 1
		constexpr auto EmittersToTreatAsSame = 0x2c8; // TArray<AEmitterCameraLensEffectBase*>
		constexpr auto DistFromCamera = 0x2d8; // float
	}

	namespace n_UPawnAction_Wait {
		constexpr auto TimeToWait = 0x90; // float
	}

	namespace n_UPortalWarsControllerPresetWidget {
		constexpr auto OnSwapToCustomBindings = 0x2a8; // FMulticastInlineDelegate
		constexpr auto FaceButtonBottomBinding = 0x2b8; // UPortalWarsGamepadBindingWidget*
		constexpr auto FaceButtonTopBinding = 0x2c0; // UPortalWarsGamepadBindingWidget*
		constexpr auto FaceButtonRightBinding = 0x2c8; // UPortalWarsGamepadBindingWidget*
		constexpr auto FaceButtonLeftBinding = 0x2d0; // UPortalWarsGamepadBindingWidget*
		constexpr auto RightShoulderBinding = 0x2d8; // UPortalWarsGamepadBindingWidget*
		constexpr auto LeftShoulderBinding = 0x2e0; // UPortalWarsGamepadBindingWidget*
		constexpr auto RightTriggerBinding = 0x2e8; // UPortalWarsGamepadBindingWidget*
		constexpr auto LeftTriggerBinding = 0x2f0; // UPortalWarsGamepadBindingWidget*
		constexpr auto DPadUpBinding = 0x2f8; // UPortalWarsGamepadBindingWidget*
		constexpr auto DPadDownBinding = 0x300; // UPortalWarsGamepadBindingWidget*
		constexpr auto DPadRightBinding = 0x308; // UPortalWarsGamepadBindingWidget*
		constexpr auto DPadLeftBinding = 0x310; // UPortalWarsGamepadBindingWidget*
		constexpr auto SpecialRightText = 0x318; // UTextBlock*
		constexpr auto SpecialLeftBinding = 0x320; // UPortalWarsGamepadBindingWidget*
		constexpr auto LeftStickText = 0x328; // UTextBlock*
		constexpr auto LeftStickDownBinding = 0x330; // UPortalWarsGamepadBindingWidget*
		constexpr auto RightStickText = 0x338; // UTextBlock*
		constexpr auto RightStickDownBinding = 0x340; // UPortalWarsGamepadBindingWidget*
	}

	namespace n_UPhysicsSettings {
		constexpr auto PhysicErrorCorrection = 0xe0; // FRigidBodyErrorCorrection
		constexpr auto LockedAxis = 0x114; // ESettingsLockedAxis
		constexpr auto DefaultDegreesOfFreedom = 0x115; // ESettingsDOF
		constexpr auto bSuppressFaceRemapTable = 0x116; // bool
		constexpr auto bSupportUVFromHitResults = 0x117; // bool
		constexpr auto bDisableActiveActors = 0x118; // bool
		constexpr auto bDisableKinematicStaticPairs = 0x119; // bool
		constexpr auto bDisableKinematicKinematicPairs = 0x11a; // bool
		constexpr auto bDisableCCD = 0x11b; // bool
		constexpr auto bEnableEnhancedDeterminism = 0x11c; // bool
		constexpr auto AnimPhysicsMinDeltaTime = 0x120; // float
		constexpr auto bSimulateAnimPhysicsAfterReset = 0x124; // bool
		constexpr auto MaxPhysicsDeltaTime = 0x128; // float
		constexpr auto bSubstepping = 0x12c; // bool
		constexpr auto bSubsteppingAsync = 0x12d; // bool
		constexpr auto MaxSubstepDeltaTime = 0x130; // float
		constexpr auto MaxSubsteps = 0x134; // int32_t
		constexpr auto SyncSceneSmoothingFactor = 0x138; // float
		constexpr auto InitialAverageFrameRate = 0x13c; // float
		constexpr auto PhysXTreeRebuildRate = 0x140; // int32_t
		constexpr auto PhysicalSurfaces = 0x148; // TArray<FPhysicalSurfaceName>
		constexpr auto DefaultBroadphaseSettings = 0x158; // FBroadphaseSettings
		constexpr auto MinDeltaVelocityForHitEvents = 0x198; // float
		constexpr auto ChaosSettings = 0x19c; // FChaosPhysicsSettings
	}

	namespace n_UParticleModuleBeamModifier {
		constexpr auto ModifierType = 0x30; // BeamModifierType
		constexpr auto PositionOptions = 0x34; // FBeamModifierOptions
		constexpr auto Position = 0x38; // FRawDistributionVector
		constexpr auto TangentOptions = 0x80; // FBeamModifierOptions
		constexpr auto Tangent = 0x88; // FRawDistributionVector
		constexpr auto bAbsoluteTangent = 0xd0; // char : 1
		constexpr auto StrengthOptions = 0xd4; // FBeamModifierOptions
		constexpr auto Strength = 0xd8; // FRawDistributionFloat
	}

	namespace n_UPWVoiceNotifications {
		constexpr auto PlayersVerticalBox = 0x260; // UVerticalBox*
		constexpr auto VoiceNotificationItemClass = 0x268; // UPWVoiceNotificationItem*
	}

	namespace n_UWidgetNavigation {
		constexpr auto Up = 0x28; // FWidgetNavigationData
		constexpr auto Down = 0x4c; // FWidgetNavigationData
		constexpr auto Left = 0x70; // FWidgetNavigationData
		constexpr auto Right = 0x94; // FWidgetNavigationData
		constexpr auto Next = 0xb8; // FWidgetNavigationData
		constexpr auto Previous = 0xdc; // FWidgetNavigationData
	}

	namespace n_UGeneralProjectSettings {
		constexpr auto CompanyName = 0x28; // FString
		constexpr auto CompanyDistinguishedName = 0x38; // FString
		constexpr auto CopyrightNotice = 0x48; // FString
		constexpr auto Description = 0x58; // FString
		constexpr auto Homepage = 0x68; // FString
		constexpr auto LicensingTerms = 0x78; // FString
		constexpr auto PrivacyPolicy = 0x88; // FString
		constexpr auto ProjectID = 0x98; // FGuid
		constexpr auto ProjectName = 0xa8; // FString
		constexpr auto ProjectVersion = 0xb8; // FString
		constexpr auto SupportContact = 0xc8; // FString
		constexpr auto ProjectDisplayedTitle = 0xd8; // FText
		constexpr auto ProjectDebugTitleInfo = 0xf0; // FText
		constexpr auto bShouldWindowPreserveAspectRatio = 0x108; // bool
		constexpr auto bUseBorderlessWindow = 0x109; // bool
		constexpr auto bStartInVR = 0x10a; // bool
		constexpr auto bAllowWindowResize = 0x10b; // bool
		constexpr auto bAllowClose = 0x10c; // bool
		constexpr auto bAllowMaximize = 0x10d; // bool
		constexpr auto bAllowMinimize = 0x10e; // bool
	}

	namespace n_UMaterialExpressionPreviousFrameSwitch {
		constexpr auto CurrentFrame = 0x40; // FExpressionInput
		constexpr auto PreviousFrame = 0x54; // FExpressionInput
	}

	namespace n_ARailGun {
		constexpr auto ChargeAnim = 0x780; // FWeaponAnimMontage
		constexpr auto DischargeAnim = 0x790; // FWeaponAnimMontage
		constexpr auto ChargeStartEvent = 0x7a0; // UAkAudioEvent*
		constexpr auto ChargeStopEvent = 0x7a8; // UAkAudioEvent*
		constexpr auto DischargeEvent = 0x7b0; // UAkAudioEvent*
		constexpr auto ChargeFX_1P = 0x7b8; // UParticleSystem*
		constexpr auto ChargeFX_3P = 0x7c0; // UParticleSystem*
		constexpr auto ChargePSC_1P = 0x7c8; // UParticleSystemComponent*
		constexpr auto ChargePSC_3P = 0x7d0; // UParticleSystemComponent*
		constexpr auto timeToCharge = 0x7d8; // float
		constexpr auto BatteryPercentagePerShot = 0x7dc; // float
		constexpr auto ChargeCounter = 0x7e0; // UAmmoCounterWidgetComponent*
	}

	namespace n_UARTrackedQRCode {
		constexpr auto QRCode = 0x108; // FString
		constexpr auto Version = 0x118; // int32_t
	}

	namespace n_UBTTask_BlackboardBase {
		constexpr auto BlackboardKey = 0x70; // FBlackboardKeySelector
	}

	namespace n_USoundClass {
		constexpr auto Properties = 0x28; // FSoundClassProperties
		constexpr auto ChildClasses = 0xa8; // TArray<USoundClass*>
		constexpr auto PassiveSoundMixModifiers = 0xb8; // TArray<FPassiveSoundMixModifier>
		constexpr auto ParentClass = 0xc8; // USoundClass*
	}

	namespace n_UWheeledVehicleMovementComponent4W {
		constexpr auto EngineSetup = 0x290; // FVehicleEngineData
		constexpr auto DifferentialSetup = 0x330; // FVehicleDifferential4WData
		constexpr auto AckermannAccuracy = 0x34c; // float
		constexpr auto TransmissionSetup = 0x350; // FVehicleTransmissionData
		constexpr auto SteeringCurve = 0x380; // FRuntimeFloatCurve
	}

	namespace n_AGameState {
		constexpr auto MatchState = 0x270; // FName
		constexpr auto PreviousMatchState = 0x278; // FName
		constexpr auto ElapsedTime = 0x280; // int32_t
	}

	namespace n_UPortalWarsDailyPlayStreakWidget {
		constexpr auto RewardPanel = 0x338; // UPanelWidget*
		constexpr auto PlayStreakRewardWidgetClass = 0x340; // UPortalWarsPlayStreakRewardWidget*
		constexpr auto StreakIcon = 0x348; // UPortalWarsProgressionIconWidget*
		constexpr auto PlayStreakBoostText = 0x350; // UTextBlock*
		constexpr auto PlayStreakPromptText = 0x358; // UTextBlock*
		constexpr auto RepairStreakText = 0x360; // UTextBlock*
		constexpr auto ActionSwitcher = 0x368; // UWidgetSwitcher*
		constexpr auto RepairButton = 0x370; // UPortalWarsRedeemableButtonWidget*
		constexpr auto PlayStreakDialogWidgetClass = 0x378; // UPortalWarsPlayStreakDialogWidget*
	}

	namespace n_UCapsuleComponent {
		constexpr auto CapsuleHalfHeight = 0x468; // float
		constexpr auto CapsuleRadius = 0x46c; // float
	}

	namespace n_UPortalWarsRedeemableButtonWidget {
		constexpr auto DisplayImage = 0x440; // UImage*
		constexpr auto SubtitleText = 0x448; // UTextBlock*
		constexpr auto RedeemableID = 0x4f8; // int32_t
	}

	namespace n_UPortalWarsChunkInstallWidget {
		constexpr auto DownloadProgressBar = 0x2b0; // UProgressBar*
	}

	namespace n_UDatasmithVREDSceneImportData {
		constexpr auto bMergeNodes = 0x48; // bool
		constexpr auto bOptimizeDuplicatedNodes = 0x49; // bool
		constexpr auto bImportMats = 0x4a; // bool
		constexpr auto MatsPath = 0x50; // FString
		constexpr auto bImportVar = 0x60; // bool
		constexpr auto bCleanVar = 0x61; // bool
		constexpr auto VarPath = 0x68; // FString
		constexpr auto bImportLightInfo = 0x78; // bool
		constexpr auto LightInfoPath = 0x80; // FString
		constexpr auto bImportClipInfo = 0x90; // bool
		constexpr auto ClipInfoPath = 0x98; // FString
	}

	namespace n_UParticleModuleAccelerationOverLifetime {
		constexpr auto AccelOverLife = 0x38; // FRawDistributionVector
	}

	namespace n_UPortalWarsKillcamKilledByWidget {
		constexpr auto NameText = 0x260; // UTextBlock*
		constexpr auto AvatarImage = 0x268; // UImage*
		constexpr auto RankImage = 0x270; // UImage*
		constexpr auto WeaponImage = 0x278; // UImage*
		constexpr auto WeaponImageMaxWidth = 0x288; // float
	}

	namespace n_UAtmosphericFogComponent {
		constexpr auto SunMultiplier = 0x1f8; // float
		constexpr auto FogMultiplier = 0x1fc; // float
		constexpr auto DensityMultiplier = 0x200; // float
		constexpr auto DensityOffset = 0x204; // float
		constexpr auto DistanceScale = 0x208; // float
		constexpr auto AltitudeScale = 0x20c; // float
		constexpr auto DistanceOffset = 0x210; // float
		constexpr auto GroundOffset = 0x214; // float
		constexpr auto StartDistance = 0x218; // float
		constexpr auto SunDiscScale = 0x21c; // float
		constexpr auto DefaultBrightness = 0x220; // float
		constexpr auto DefaultLightColor = 0x224; // FColor
		constexpr auto bDisableSunDisk = 0x228; // char : 1
		constexpr auto bAtmosphereAffectsSunIlluminance = 0x228; // char : 1
		constexpr auto bDisableGroundScattering = 0x228; // char : 1
		constexpr auto PrecomputeParams = 0x22c; // FAtmospherePrecomputeParameters
		constexpr auto TransmittanceTexture = 0x258; // UTexture2D*
		constexpr auto IrradianceTexture = 0x260; // UTexture2D*
	}

	namespace n_UMaterialExpressionMaterialFunctionCall {
		constexpr auto MaterialFunction = 0x40; // UMaterialFunctionInterface*
		constexpr auto FunctionParameterInfo = 0x48; // FMaterialParameterInfo
	}

	namespace n_UParticleModuleTypeDataGpu {
		constexpr auto EmitterInfo = 0x30; // FGPUSpriteEmitterInfo
		constexpr auto ResourceData = 0x2b0; // FGPUSpriteResourceData
		constexpr auto CameraMotionBlurAmount = 0x410; // float
		constexpr auto bClearExistingParticlesOnInit = 0x414; // char : 1
	}

	namespace n_UEnvQueryGenerator_OnCircle {
		constexpr auto CircleRadius = 0xb8; // FAIDataProviderFloatValue
		constexpr auto SpaceBetween = 0xf0; // FAIDataProviderFloatValue
		constexpr auto NumberOfPoints = 0x128; // FAIDataProviderIntValue
		constexpr auto PointOnCircleSpacingMethod = 0x160; // EPointOnCircleSpacingMethod
		constexpr auto ArcDirection = 0x168; // FEnvDirection
		constexpr auto ArcAngle = 0x188; // FAIDataProviderFloatValue
		constexpr auto AngleRadians = 0x1c0; // float
		constexpr auto CircleCenter = 0x1c8; // UEnvQueryContext*
		constexpr auto bIgnoreAnyContextActorsWhenGeneratingCircle = 0x1d0; // bool
		constexpr auto CircleCenterZOffset = 0x1d8; // FAIDataProviderFloatValue
		constexpr auto TraceData = 0x210; // FEnvTraceData
		constexpr auto bDefineArc = 0x240; // char : 1
	}

	namespace n_APortalWarsTakedownHUD {
		constexpr auto TakedownHUDOverlayWidget = 0x448; // UPortalWarsTakedownHUDOverlayWidget*
	}

	namespace n_UMovieSceneGeometryCacheSection {
		constexpr auto Params = 0xe8; // FMovieSceneGeometryCacheParams
	}

	namespace n_UMaterialExpressionTextureSampleParameterSubUV {
		constexpr auto bBlend = 0x80; // char : 1
	}

	namespace n_UPortalWarsLimitedTimeOfferDialogWidget {
		constexpr auto ViewButton = 0x390; // UPortalWarsButtonWidget*
		constexpr auto ItemShopSection = 0x398; // UPortalWarsItemShopSectionWidget*
		constexpr auto TitleText = 0x3a0; // UTextBlock*
		constexpr auto ExpiresInText = 0x3a8; // UTextBlock*
	}

	namespace n_UMaterialExpressionGetMaterialAttributes {
		constexpr auto MaterialAttributes = 0x40; // FMaterialAttributesInput
		constexpr auto AttributeGetTypes = 0x58; // TArray<FGuid>
	}

	namespace n_UAISenseConfig_Sight {
		constexpr auto Implementation = 0x48; // UAISense_Sight*
		constexpr auto SightRadius = 0x50; // float
		constexpr auto LoseSightRadius = 0x54; // float
		constexpr auto PeripheralVisionAngleDegrees = 0x58; // float
		constexpr auto DetectionByAffiliation = 0x5c; // FAISenseAffiliationFilter
		constexpr auto AutoSuccessRangeFromLastSeenLocation = 0x60; // float
		constexpr auto PointOfViewBackwardOffset = 0x64; // float
		constexpr auto NearClippingRadius = 0x68; // float
	}

	namespace n_AProceduralFoliageBlockingVolume {
		constexpr auto ProceduralFoliageVolume = 0x258; // AProceduralFoliageVolume*
	}

	namespace n_UMovieScene3DAttachSection {
		constexpr auto AttachSocketName = 0x118; // FName
		constexpr auto AttachComponentName = 0x120; // FName
		constexpr auto AttachmentLocationRule = 0x128; // EAttachmentRule
		constexpr auto AttachmentRotationRule = 0x129; // EAttachmentRule
		constexpr auto AttachmentScaleRule = 0x12a; // EAttachmentRule
		constexpr auto DetachmentLocationRule = 0x12b; // EDetachmentRule
		constexpr auto DetachmentRotationRule = 0x12c; // EDetachmentRule
		constexpr auto DetachmentScaleRule = 0x12d; // EDetachmentRule
	}

	namespace n_UEnvQueryTest_Pathfinding {
		constexpr auto TestMode = 0x1f8; // EEnvTestPathfinding
		constexpr auto Context = 0x200; // UEnvQueryContext*
		constexpr auto PathFromContext = 0x208; // FAIDataProviderBoolValue
		constexpr auto SkipUnreachable = 0x240; // FAIDataProviderBoolValue
		constexpr auto FilterClass = 0x278; // UNavigationQueryFilter*
	}

	namespace n_AGeometryCollectionActor {
		constexpr auto GeometryCollectionComponent = 0x220; // UGeometryCollectionComponent*
		constexpr auto GeometryCollectionDebugDrawComponent = 0x228; // UGeometryCollectionDebugDrawComponent*
	}

	namespace n_UMaterialExpressionDistanceFieldGradient {
		constexpr auto Position = 0x40; // FExpressionInput
	}

	namespace n_UPortalWarsControlSettingsWidget {
		constexpr auto SettingsMenu = 0x358; // UPortalWarsSettingsSubWidget*
		constexpr auto ControlsMenu = 0x360; // UPortalWarsSettingsSubWidget*
	}

	namespace n_UPortalWarsCountdownWidget {
		constexpr auto CountdownText = 0x260; // UTextBlock*
		constexpr auto CountdownAnimation = 0x268; // UWidgetAnimation*
		constexpr auto MapNameText = 0x270; // UTextBlock*
		constexpr auto GameModeNameText = 0x278; // UTextBlock*
		constexpr auto GameModeDescriptionText = 0x280; // UTextBlock*
		constexpr auto ScoreText = 0x288; // UTextBlock*
		constexpr auto MinutesText = 0x290; // UTextBlock*
		constexpr auto SeparatorText = 0x298; // UTextBlock*
	}

	namespace n_UNiagaraPrecompileContainer {
		constexpr auto Scripts = 0x28; // TArray<UNiagaraScript*>
		constexpr auto System = 0x38; // UNiagaraSystem*
	}

	namespace n_UPortalWarsPlayButtonWidget {
		constexpr auto ButtonText = 0x3c8; // UTextBlock*
	}

	namespace n_UBTService_RefreshFocus {
		constexpr auto MaxLongRangeRadius = 0x70; // float
		constexpr auto MaxCloseRangeRadius = 0x74; // float
		constexpr auto MaxAimAngle = 0x78; // float
	}

	namespace n_UAkLinuxInitializationSettings {
		constexpr auto CommonSettings = 0x28; // FAkCommonInitializationSettingsWithSampleRate
		constexpr auto CommunicationSettings = 0x98; // FAkCommunicationSettingsWithSystemInitialization
		constexpr auto AdvancedSettings = 0xc0; // FAkAdvancedInitializationSettingsWithMultiCoreRendering
	}

	namespace n_UMovieSceneCameraAnimTrack {
		constexpr auto CameraAnimSections = 0x80; // TArray<UMovieSceneSection*>
	}

	namespace n_UPortalWarsChallengeEntryWidget {
		constexpr auto HoveredIndicator = 0x728; // UWidget*
		constexpr auto ValueText = 0x730; // UTextBlock*
		constexpr auto ChallengeProgressBar = 0x738; // UProgressBar*
		constexpr auto CompletedImage = 0x740; // UImage*
		constexpr auto StarPanel = 0x748; // UPanelWidget*
		constexpr auto IncompleteStarTexture = 0x750; // UTexture2D*
		constexpr auto CompleteStarTexture = 0x758; // UTexture2D*
		constexpr auto ChallengeBackgroundSwitcher = 0x760; // UWidgetSwitcher*
		constexpr auto ActionButton = 0x768; // UPortalWarsButtonWidget*
		constexpr auto ActionSwitcher = 0x770; // UWidgetSwitcher*
		constexpr auto CompletedAnimation = 0x778; // UWidgetAnimation*
		constexpr auto ChallengeCompleteEvent = 0x780; // UAkAudioEvent*
		constexpr auto OnClaimButtonClickedDelegate = 0x788; // FMulticastInlineDelegate
		constexpr auto OnViewButtonClickedDelegate = 0x798; // FMulticastInlineDelegate
		constexpr auto OnInspectButtonClickedDelegate = 0x7a8; // FMulticastInlineDelegate
		constexpr auto InspectIndicator = 0x7b8; // UWidget*
		constexpr auto PremiumRequiredRoot = 0x7c0; // UWidget*
		constexpr auto bIsFeatured = 0x800; // bool
		constexpr auto FeaturedBackground = 0x808; // UImage*
		constexpr auto FeaturedBackgroundTextures = 0x810; // TMap<EChallengeType, UTexture2D*>
	}

	namespace n_USourceEffectFoldbackDistortionPreset {
		constexpr auto Settings = 0x9c; // FSourceEffectFoldbackDistortionSettings
	}

	namespace n_UDistributionVector {
		constexpr auto bCanBeBaked = 0x30; // char : 1
		constexpr auto bIsDirty = 0x30; // char : 1
		constexpr auto bBakedDataSuccesfully = 0x30; // char : 1
	}

	namespace n_UNavCollision {
		constexpr auto CylinderCollision = 0x80; // TArray<FNavCollisionCylinder>
		constexpr auto BoxCollision = 0x90; // TArray<FNavCollisionBox>
		constexpr auto AreaClass = 0xa0; // UNavArea*
		constexpr auto bGatherConvexGeometry = 0xa8; // char : 1
		constexpr auto bCreateOnClient = 0xa8; // char : 1
	}

	namespace n_ALevelVariantSetsActor {
		constexpr auto LevelVariantSets = 0x220; // FSoftObjectPath
		constexpr auto DirectorInstances = 0x238; // TMap<UObject*, ULevelVariantSetsFunctionDirector*>
	}

	namespace n_UPawnSensingComponent {
		constexpr auto HearingThreshold = 0xb0; // float
		constexpr auto LOSHearingThreshold = 0xb4; // float
		constexpr auto SightRadius = 0xb8; // float
		constexpr auto SensingInterval = 0xbc; // float
		constexpr auto HearingMaxSoundAge = 0xc0; // float
		constexpr auto bEnableSensingUpdates = 0xc4; // char : 1
		constexpr auto bOnlySensePlayers = 0xc4; // char : 1
		constexpr auto bSeePawns = 0xc4; // char : 1
		constexpr auto bHearNoises = 0xc4; // char : 1
		constexpr auto OnSeePawn = 0xd0; // FMulticastInlineDelegate
		constexpr auto OnHearNoise = 0xe0; // FMulticastInlineDelegate
		constexpr auto PeripheralVisionAngle = 0xf0; // float
		constexpr auto PeripheralVisionCosine = 0xf4; // float
	}

	namespace n_ULevelSequenceBurnInOptions {
		constexpr auto bUseBurnIn = 0x28; // bool
		constexpr auto BurnInClass = 0x30; // FSoftClassPath
		constexpr auto Settings = 0x48; // ULevelSequenceBurnInInitSettings*
	}

	namespace n_AStaticMeshActor {
		constexpr auto StaticMeshComponent = 0x220; // UStaticMeshComponent*
		constexpr auto bStaticMeshReplicateMovement = 0x228; // bool
		constexpr auto NavigationGeometryGatheringMode = 0x229; // ENavDataGatheringMode
	}

	namespace n_UParticleModuleRotation_Seeded {
		constexpr auto RandomSeedInfo = 0x60; // FParticleRandomSeedInfo
	}

	namespace n_UMaterialExpressionDepthOfFieldFunction {
		constexpr auto FunctionValue = 0x40; // EDepthOfFieldFunctionValue
		constexpr auto Depth = 0x44; // FExpressionInput
	}

	namespace n_UBTDecorator_Loop {
		constexpr auto NumLoops = 0x68; // int32_t
		constexpr auto bInfiniteLoop = 0x6c; // bool
		constexpr auto InfiniteLoopTimeoutTime = 0x70; // float
	}

	namespace n_UGizmoLocalVec2ParameterSource {
		constexpr auto Value = 0x48; // FVector2D
		constexpr auto LastChange = 0x50; // FGizmoVec2ParameterChange
	}

	namespace n_UPortalWarsKeybindSettingsWidget {
		constexpr auto KeybindItems = 0x358; // TArray<UPortalWarsKeybindWidget*>
		constexpr auto WarningRoot = 0x368; // UWidget*
		constexpr auto WarningText = 0x388; // UTextBlock*
	}

	namespace n_UPortalWarsTeamGlobalCarouselWidget {
		constexpr auto GlobalCarousel = 0x368; // UPortalWarsGlobalCarouselWidget*
		constexpr auto AlphaCarousel = 0x370; // UPortalWarsGlobalCarouselWidget*
		constexpr auto BravoCarousel = 0x378; // UPortalWarsGlobalCarouselWidget*
		constexpr auto TeamCheckbox = 0x380; // UPortalWarsCheckBox*
		constexpr auto GamepadKey = 0x3c0; // FKey
		constexpr auto StandardIcon = 0x3d8; // UImage*
		constexpr auto GamepadIcon = 0x3e0; // UImage*
		constexpr auto ConsoleSwitcher = 0x3e8; // UWidgetSwitcher*
		constexpr auto IconDefaultColor = 0x3f0; // FLinearColor
		constexpr auto IconHoveredColor = 0x400; // FLinearColor
	}

	namespace n_UNetAnalyticsAggregatorConfig {
		constexpr auto NetAnalyticsData = 0x28; // TArray<FNetAnalyticsDataConfig>
	}

	namespace n_ACameraRig_Rail {
		constexpr auto CurrentPositionOnRail = 0x220; // float
		constexpr auto bLockOrientationToRail = 0x224; // bool
		constexpr auto TransformComponent = 0x228; // USceneComponent*
		constexpr auto RailSplineComponent = 0x230; // USplineComponent*
		constexpr auto RailCameraMount = 0x238; // USceneComponent*
	}

	namespace n_UAnimNotify_PlayParticleEffect {
		constexpr auto PSTemplate = 0x38; // UParticleSystem*
		constexpr auto LocationOffset = 0x40; // FVector
		constexpr auto RotationOffset = 0x4c; // FRotator
		constexpr auto Scale = 0x58; // FVector
		constexpr auto Attached = 0x80; // char : 1
		constexpr auto SocketName = 0x84; // FName
	}

	namespace n_UPortalWarsSocialPlayerEntry {
		constexpr auto OnlineSwitcher = 0x650; // UWidgetSwitcher*
	}

	namespace n_UPhysicsConstraintComponent {
		constexpr auto ConstraintActor1 = 0x1f8; // AActor*
		constexpr auto ComponentName1 = 0x200; // FConstrainComponentPropName
		constexpr auto ConstraintActor2 = 0x208; // AActor*
		constexpr auto ComponentName2 = 0x210; // FConstrainComponentPropName
		constexpr auto ConstraintSetup = 0x228; // UPhysicsConstraintTemplate*
		constexpr auto OnConstraintBroken = 0x230; // FMulticastInlineDelegate
		constexpr auto ConstraintInstance = 0x240; // FConstraintInstance
	}

	namespace n_UGetGeoLocationAsyncTaskBlueprintProxy {
		constexpr auto OnSuccess = 0x50; // FMulticastInlineDelegate
		constexpr auto OnFailed = 0x60; // FMulticastInlineDelegate
	}

	namespace n_UPortalWarsItemShopWidget {
		constexpr auto ItemShopSectionWidgetClass = 0x338; // UPortalWarsItemShopSectionWidget*
		constexpr auto BattlePassSection = 0x340; // UPortalWarsItemShopSectionWidget*
		constexpr auto BattlePassSectionWidgetClass = 0x348; // UPortalWarsItemShopSectionWidget*
		constexpr auto CurrencySection = 0x350; // UPortalWarsItemShopSectionWidget*
		constexpr auto CurrencySectionWidgetClass = 0x358; // UPortalWarsItemShopSectionWidget*
		constexpr auto ScrollNavBar = 0x360; // UPortalWarsNavBarWidget*
		constexpr auto ItemsPanel = 0x370; // UScrollBox*
		constexpr auto PreviousButton = 0x380; // UButton*
		constexpr auto NextButton = 0x388; // UButton*
		constexpr auto InspectWidget = 0x390; // UPortalWarsItemShopInspectWidget*
	}

	namespace n_AScoreboardComponent {
		constexpr auto TextArray = 0x228; // TArray<FString>
		constexpr auto TextMaterial = 0x238; // UMaterialInterface*
		constexpr auto FontTable = 0x240; // UDataTable*
		constexpr auto AlwaysLoadedCharacterMeshes = 0x248; // TArray<UStaticMesh*>
		constexpr auto FieldWidth = 0x258; // float
		constexpr auto SpaceWidth = 0x25c; // float
		constexpr auto Kerning = 0x260; // float
		constexpr auto LineHeight = 0x264; // float
		constexpr auto TextAlignment = 0x268; // ETextAlignment
		constexpr auto CharacterMeshComponents = 0x270; // TArray<UStaticMeshComponent*>
	}

	namespace n_ALODActor {
		constexpr auto StaticMeshComponent = 0x220; // UStaticMeshComponent*
		constexpr auto InstancedStaticMeshComponents = 0x228; // TMap<FHLODInstancingKey, UInstancedStaticMeshComponent*>
		constexpr auto Proxy = 0x278; // UHLODProxy*
		constexpr auto Key = 0x280; // FName
		constexpr auto LODDrawDistance = 0x288; // float
		constexpr auto LODLevel = 0x28c; // int32_t
		constexpr auto SubActors = 0x290; // TArray<AActor*>
		constexpr auto CachedNumHLODLevels = 0x2a0; // char
	}

	namespace n_UEdGraphNode_Documentation {
		constexpr auto Link = 0x98; // FString
		constexpr auto Excerpt = 0xa8; // FString
	}

	namespace n_UMaterialExpressionStaticBoolParameter {
		constexpr auto DefaultValue = 0x58; // char : 1
	}

	namespace n_UPortalWarsReferFriendWidget {
		constexpr auto ReferralCodeText = 0x338; // UTextBlock*
		constexpr auto ReferralScoreText = 0x340; // UTextBlock*
		constexpr auto NextReferralText = 0x348; // URichTextBlock*
		constexpr auto ReferralPassButton = 0x350; // UPortalWarsButtonWidget*
		constexpr auto ReferralCodeInput = 0x358; // UEditableTextBox*
		constexpr auto NextRewardPreview = 0x360; // UPortalWarsRewardEntryWidget*
		constexpr auto CopyButton = 0x368; // UPortalWarsButtonWidget*
		constexpr auto ConfirmButton = 0x370; // UPortalWarsButtonWidget*
		constexpr auto CodeAcceptedText = 0x378; // UTextBlock*
		constexpr auto ReferrerSwitcher = 0x380; // UWidgetSwitcher*
		constexpr auto ReferrerRoot = 0x388; // UWidget*
		constexpr auto ReferrerInputRoot = 0x390; // UWidget*
		constexpr auto NoteRichText = 0x398; // URichTextBlock*
		constexpr auto SubmitDialogWidgetClass = 0x3a0; // UPortalWarsReferFriendDialog*
	}

	namespace n_UNiagaraScript {
		constexpr auto Usage = 0x28; // ENiagaraScriptUsage
		constexpr auto UsageId = 0x2c; // FGuid
		constexpr auto RapidIterationParameters = 0x40; // FNiagaraParameterStore
		constexpr auto ScriptExecutionParamStore = 0xb8; // FNiagaraScriptExecutionParameterStore
		constexpr auto ScriptExecutionBoundParameters = 0x150; // TArray<FNiagaraBoundParameter>
		constexpr auto CachedScriptVMId = 0x160; // FNiagaraVMExecutableDataId
		constexpr auto CachedScriptVM = 0x1c8; // FNiagaraVMExecutableData
		constexpr auto CachedParameterCollectionReferences = 0x2b8; // TArray<UNiagaraParameterCollection*>
		constexpr auto CachedDefaultDataInterfaces = 0x2c8; // TArray<FNiagaraScriptDataInterfaceInfo>
	}

	namespace n_UBTComposite_SimpleParallel {
		constexpr auto FinishMode = 0x90; // EBTParallelMode
	}

	namespace n_UPortalWarsCareerWidget {
		constexpr auto StatsWidget = 0x338; // UPortalWarsMenuWidget*
		constexpr auto StatsButton = 0x340; // UPortalWarsButtonWidget*
		constexpr auto LeaderboardsWidget = 0x348; // UPortalWarsMenuWidget*
		constexpr auto LeaderboardsButton = 0x350; // UPortalWarsButtonWidget*
		constexpr auto ReplaysWidget = 0x358; // UPortalWarsMenuWidget*
		constexpr auto ReplaysButton = 0x360; // UPortalWarsButtonWidget*
	}

	namespace n_UNiagaraPreviewAxis_InterpParamInt32 {
		constexpr auto Min = 0x38; // int32_t
		constexpr auto Max = 0x3c; // int32_t
	}

	namespace n_UChildActorComponent {
		constexpr auto ChildActorClass = 0x1f8; // AActor*
		constexpr auto ChildActor = 0x200; // AActor*
		constexpr auto ChildActorTemplate = 0x208; // AActor*
	}

	namespace n_ALandscapeStreamingProxy {
		constexpr auto LandscapeActor = 0x598; // LazyObjectProperty
	}

	namespace n_UTextureLODSettings {
		constexpr auto TextureLODGroups = 0x28; // TArray<FTextureLODGroup>
	}

	namespace n_USourceEffectSimpleDelayPreset {
		constexpr auto Settings = 0xa8; // FSourceEffectSimpleDelaySettings
	}

	namespace n_UForceFeedbackComponent {
		constexpr auto ForceFeedbackEffect = 0x1f8; // UForceFeedbackEffect*
		constexpr auto bAutoDestroy = 0x200; // char : 1
		constexpr auto bStopWhenOwnerDestroyed = 0x200; // char : 1
		constexpr auto bLooping = 0x200; // char : 1
		constexpr auto bIgnoreTimeDilation = 0x200; // char : 1
		constexpr auto bOverrideAttenuation = 0x200; // char : 1
		constexpr auto IntensityMultiplier = 0x204; // float
		constexpr auto AttenuationSettings = 0x208; // UForceFeedbackAttenuation*
		constexpr auto AttenuationOverrides = 0x210; // FForceFeedbackAttenuationSettings
		constexpr auto OnForceFeedbackFinished = 0x2c0; // FMulticastInlineDelegate
	}

	namespace n_UAudioCurveSourceComponent {
		constexpr auto CurveSourceBindingName = 0x868; // FName
		constexpr auto CurveSyncOffset = 0x870; // float
	}

	namespace n_URuntimeVirtualTextureComponent {
		constexpr auto BoundsAlignActor = 0x1f8; // TSoftObjectPtr<AActor>
		constexpr auto bSetBoundsButton = 0x220; // bool
		constexpr auto bSnapBoundsToLandscape = 0x221; // bool
		constexpr auto VirtualTexture = 0x228; // URuntimeVirtualTexture*
		constexpr auto bEnableScalability = 0x230; // bool
		constexpr auto ScalabilityGroup = 0x234; // uint32_t
		constexpr auto bHidePrimitives = 0x238; // bool
		constexpr auto StreamingTexture = 0x240; // UVirtualTextureBuilder*
		constexpr auto StreamLowMips = 0x248; // int32_t
		constexpr auto bBuildStreamingMipsButton = 0x24c; // bool
		constexpr auto bEnableCompressCrunch = 0x24d; // bool
		constexpr auto bUseStreamingLowMipsInEditor = 0x24e; // bool
		constexpr auto bBuildDebugStreamingMips = 0x24f; // bool
	}

	namespace n_UInterpTrackInstFloatParticleParam {
		constexpr auto ResetFloat = 0x28; // float
	}

	namespace n_UStaticMesh {
		constexpr auto MinLOD = 0x80; // FPerPlatformInt
		constexpr auto LpvBiasMultiplier = 0x84; // float
		constexpr auto StaticMaterials = 0x88; // TArray<FStaticMaterial>
		constexpr auto LightmapUVDensity = 0x98; // float
		constexpr auto LightMapResolution = 0x9c; // int32_t
		constexpr auto LightMapCoordinateIndex = 0xa0; // int32_t
		constexpr auto DistanceFieldSelfShadowBias = 0xa4; // float
		constexpr auto BodySetup = 0xa8; // UBodySetup*
		constexpr auto LODForCollision = 0xb0; // int32_t
		constexpr auto bGenerateMeshDistanceField = 0xb4; // char : 1
		constexpr auto bStripComplexCollisionForConsole = 0xb4; // char : 1
		constexpr auto bHasNavigationData = 0xb4; // char : 1
		constexpr auto bSupportUniformlyDistributedSampling = 0xb4; // char : 1
		constexpr auto bSupportPhysicalMaterialMasks = 0xb4; // char : 1
		constexpr auto bSupportRayTracing = 0xb4; // char : 1
		constexpr auto bIsBuiltAtRuntime = 0xb4; // char : 1
		constexpr auto bAllowCPUAccess = 0xb5; // char : 1
		constexpr auto bSupportGpuUniformlyDistributedSampling = 0xb5; // char : 1
		constexpr auto Sockets = 0xd8; // TArray<UStaticMeshSocket*>
		constexpr auto PositiveBoundsExtension = 0xf8; // FVector
		constexpr auto NegativeBoundsExtension = 0x104; // FVector
		constexpr auto ExtendedBounds = 0x110; // FBoxSphereBounds
		constexpr auto ElementToIgnoreForTexFactor = 0x12c; // int32_t
		constexpr auto AssetUserData = 0x130; // TArray<UAssetUserData*>
		constexpr auto EditableMesh = 0x140; // UObject*
		constexpr auto NavCollision = 0x148; // UNavCollisionBase*
	}

	namespace n_UPortalWarsCancelButtonWidget {
		constexpr auto RankIcon = 0x3c0; // UImage*
		constexpr auto RankRoot = 0x3c8; // UWidget*
		constexpr auto QueryTitleText = 0x3d0; // UTextBlock*
		constexpr auto QueryDescriptionText = 0x3d8; // UTextBlock*
	}

	namespace n_UHierarchicalLODSetup {
		constexpr auto HierarchicalLODSetup = 0x28; // TArray<FHierarchicalSimplification>
		constexpr auto OverrideBaseMaterial = 0x38; // TSoftObjectPtr<UMaterialInterface>
	}

	namespace n_UWidgetInteractionComponent {
		constexpr auto OnHoveredWidgetChanged = 0x1f8; // FMulticastInlineDelegate
		constexpr auto VirtualUserIndex = 0x218; // int32_t
		constexpr auto PointerIndex = 0x21c; // int32_t
		constexpr auto TraceChannel = 0x220; // ECollisionChannel
		constexpr auto InteractionDistance = 0x224; // float
		constexpr auto InteractionSource = 0x228; // EWidgetInteractionSource
		constexpr auto bEnableHitTesting = 0x229; // bool
		constexpr auto bShowDebug = 0x22a; // bool
		constexpr auto DebugSphereLineThickness = 0x22c; // float
		constexpr auto DebugLineThickness = 0x230; // float
		constexpr auto DebugColor = 0x234; // FLinearColor
		constexpr auto CustomHitResult = 0x2c0; // FHitResult
		constexpr auto LocalHitLocation = 0x348; // FVector2D
		constexpr auto LastLocalHitLocation = 0x350; // FVector2D
		constexpr auto HoveredWidgetComponent = 0x358; // UWidgetComponent*
		constexpr auto LastHitResult = 0x360; // FHitResult
		constexpr auto bIsHoveredWidgetInteractable = 0x3e8; // bool
		constexpr auto bIsHoveredWidgetFocusable = 0x3e9; // bool
		constexpr auto bIsHoveredWidgetHitTestVisible = 0x3ea; // bool
	}

	namespace n_UInterpTrackInstSlomo {
		constexpr auto OldTimeDilation = 0x28; // float
	}

	namespace n_UPWProjectileMovementComponent {
		constexpr auto AddlUpdatedComponents = 0x1d0; // TArray<UPrimitiveComponent*>
	}

	namespace n_UScrollBar {
		constexpr auto WidgetStyle = 0x108; // FScrollBarStyle
		constexpr auto Style = 0x5d8; // USlateWidgetStyleAsset*
		constexpr auto bAlwaysShowScrollbar = 0x5e0; // bool
		constexpr auto bAlwaysShowScrollbarTrack = 0x5e1; // bool
		constexpr auto Orientation = 0x5e2; // EOrientation
		constexpr auto Thickness = 0x5e4; // FVector2D
		constexpr auto Padding = 0x5ec; // FMargin
	}

	namespace n_UMagicLeapARPinSaveGame {
		constexpr auto PinnedID = 0x28; // FGuid
		constexpr auto ComponentWorldTransform = 0x40; // FTransform
		constexpr auto PinTransform = 0x70; // FTransform
		constexpr auto bShouldPinActor = 0xa0; // bool
	}

	namespace n_UMovieSceneWidgetMaterialTrack {
		constexpr auto BrushPropertyNamePath = 0x90; // TArray<FName>
		constexpr auto TrackName = 0xa0; // FName
	}

	namespace n_AOnlineBeaconClient {
		constexpr auto BeaconOwner = 0x250; // AOnlineBeaconHostObject*
		constexpr auto BeaconConnection = 0x258; // UNetConnection*
		constexpr auto ConnectionState = 0x260; // EBeaconConnectionState
	}

	namespace n_UAISense_Damage {
		constexpr auto RegisteredEvents = 0x80; // TArray<FAIDamageEvent>
	}

	namespace n_UBoxComponent {
		constexpr auto BoxExtent = 0x468; // FVector
		constexpr auto LineThickness = 0x474; // float
	}

	namespace n_UWidget {
		constexpr auto Slot = 0x28; // UPanelSlot*
		constexpr auto bIsEnabledDelegate = 0x30; // FDelegate
		constexpr auto ToolTipText = 0x40; // FText
		constexpr auto ToolTipTextDelegate = 0x58; // FDelegate
		constexpr auto ToolTipWidget = 0x68; // UWidget*
		constexpr auto ToolTipWidgetDelegate = 0x70; // FDelegate
		constexpr auto VisibilityDelegate = 0x80; // FDelegate
		constexpr auto RenderTransform = 0x90; // FWidgetTransform
		constexpr auto RenderTransformPivot = 0xac; // FVector2D
		constexpr auto bIsVariable = 0xb4; // char : 1
		constexpr auto bCreatedByConstructionScript = 0xb4; // char : 1
		constexpr auto bIsEnabled = 0xb4; // char : 1
		constexpr auto bShowDisabledEffects = 0xb4; // char : 1
		constexpr auto bOverride_Cursor = 0xb4; // char : 1
		constexpr auto AccessibleWidgetData = 0xb8; // USlateAccessibleWidgetData*
		constexpr auto bIsVolatile = 0xc0; // char : 1
		constexpr auto bCullEnabled = 0xc0; // char : 1
		constexpr auto Cursor = 0xc1; // EMouseCursor
		constexpr auto Clipping = 0xc2; // EWidgetClipping
		constexpr auto Visibility = 0xc3; // ESlateVisibility
		constexpr auto RenderOpacity = 0xc4; // float
		constexpr auto Navigation = 0xc8; // UWidgetNavigation*
		constexpr auto FlowDirectionPreference = 0xd0; // EFlowDirectionPreference
		constexpr auto NativeBindings = 0xf8; // TArray<UPropertyBinding*>
	}

	namespace n_UMovieSceneEventTrack {
		constexpr auto bFireEventsWhenForwards = 0x80; // char : 1
		constexpr auto bFireEventsWhenBackwards = 0x80; // char : 1
		constexpr auto EventPosition = 0x84; // EFireEventsAtPosition
		constexpr auto Sections = 0x88; // TArray<UMovieSceneSection*>
	}

	namespace n_UParticleModuleTypeDataRibbon {
		constexpr auto MaxTessellationBetweenParticles = 0x30; // int32_t
		constexpr auto SheetsPerTrail = 0x34; // int32_t
		constexpr auto MaxTrailCount = 0x38; // int32_t
		constexpr auto MaxParticleInTrailCount = 0x3c; // int32_t
		constexpr auto bDeadTrailsOnDeactivate = 0x40; // char : 1
		constexpr auto bDeadTrailsOnSourceLoss = 0x40; // char : 1
		constexpr auto bClipSourceSegement = 0x40; // char : 1
		constexpr auto bEnablePreviousTangentRecalculation = 0x40; // char : 1
		constexpr auto bTangentRecalculationEveryFrame = 0x40; // char : 1
		constexpr auto bSpawnInitialParticle = 0x40; // char : 1
		constexpr auto RenderAxis = 0x44; // ETrailsRenderAxisOption
		constexpr auto TangentSpawningScalar = 0x48; // float
		constexpr auto bRenderGeometry = 0x4c; // char : 1
		constexpr auto bRenderSpawnPoints = 0x4c; // char : 1
		constexpr auto bRenderTangents = 0x4c; // char : 1
		constexpr auto bRenderTessellation = 0x4c; // char : 1
		constexpr auto TilingDistance = 0x50; // float
		constexpr auto DistanceTessellationStepSize = 0x54; // float
		constexpr auto bEnableTangentDiffInterpScale = 0x58; // char : 1
		constexpr auto TangentTessellationScalar = 0x5c; // float
	}

	namespace n_UHighlightsOpenGroupAsync {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_UMovieSceneEntitySystem {
		constexpr auto Linker = 0x28; // UMovieSceneEntitySystemLinker*
	}

	namespace n_UGameplayTagsSettings {
		constexpr auto ImportTagsFromConfig = 0x48; // bool
		constexpr auto WarnOnInvalidTags = 0x49; // bool
		constexpr auto ClearInvalidTags = 0x4a; // bool
		constexpr auto FastReplication = 0x4b; // bool
		constexpr auto InvalidTagCharacters = 0x50; // FString
		constexpr auto CategoryRemapping = 0x60; // TArray<FGameplayTagCategoryRemap>
		constexpr auto GameplayTagTableList = 0x70; // TArray<FSoftObjectPath>
		constexpr auto GameplayTagRedirects = 0x80; // TArray<FGameplayTagRedirect>
		constexpr auto CommonlyReplicatedTags = 0x90; // TArray<FName>
		constexpr auto NumBitsForContainerSize = 0xa0; // int32_t
		constexpr auto NetIndexFirstBitSegment = 0xa4; // int32_t
		constexpr auto RestrictedConfigFiles = 0xa8; // TArray<FRestrictedConfigInfo>
	}

	namespace n_UMaterialExpressionTangentOutput {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UPortalWarsPlaylistGameModeSelect {
		constexpr auto GameModeEntryWidgetClass = 0x338; // UPortalWarsPlaylistGameModeEntry*
		constexpr auto ModesPanel = 0x340; // UPanelWidget*
		constexpr auto PlayButton = 0x348; // UPortalWarsButtonWidget*
		constexpr auto NoteText = 0x350; // UTextBlock*
	}

	namespace n_UTextureRenderTarget {
		constexpr auto TargetGamma = 0x178; // float
	}

	namespace n_UInterpTrack {
		constexpr auto SubTracks = 0x38; // TArray<UInterpTrack*>
		constexpr auto TrackInstClass = 0x48; // UInterpTrackInst*
		constexpr auto ActiveCondition = 0x50; // ETrackActiveCondition
		constexpr auto TrackTitle = 0x58; // FString
		constexpr auto bOnePerGroup = 0x68; // char : 1
		constexpr auto bDirGroupOnly = 0x68; // char : 1
		constexpr auto bDisableTrack = 0x68; // char : 1
		constexpr auto bIsSelected = 0x68; // char : 1
		constexpr auto bIsAnimControlTrack = 0x68; // char : 1
		constexpr auto bSubTrackOnly = 0x68; // char : 1
		constexpr auto bVisible = 0x68; // char : 1
		constexpr auto bIsRecording = 0x68; // char : 1
	}

	namespace n_UMaterialExpressionTransformPosition {
		constexpr auto Input = 0x40; // FExpressionInput
		constexpr auto TransformSourceType = 0x54; // EMaterialPositionTransformSource
		constexpr auto TransformType = 0x55; // EMaterialPositionTransformSource
	}

	namespace n_UParticleModuleKillHeight {
		constexpr auto Height = 0x30; // FRawDistributionFloat
		constexpr auto bAbsolute = 0x60; // char : 1
		constexpr auto bFloor = 0x60; // char : 1
		constexpr auto bApplyPSysScale = 0x60; // char : 1
	}

	namespace n_UStaticMeshComponent {
		constexpr auto ForcedLodModel = 0x478; // int32_t
		constexpr auto PreviousLODLevel = 0x47c; // int32_t
		constexpr auto MinLOD = 0x480; // int32_t
		constexpr auto SubDivisionStepSize = 0x484; // int32_t
		constexpr auto StaticMesh = 0x488; // UStaticMesh*
		constexpr auto WireframeColorOverride = 0x490; // FColor
		constexpr auto bEvaluateWorldPositionOffset = 0x494; // char : 1
		constexpr auto bOverrideWireframeColor = 0x494; // char : 1
		constexpr auto bOverrideMinLod = 0x494; // char : 1
		constexpr auto bOverrideNavigationExport = 0x494; // char : 1
		constexpr auto bForceNavigationObstacle = 0x494; // char : 1
		constexpr auto bDisallowMeshPaintPerInstance = 0x494; // char : 1
		constexpr auto bIgnoreInstanceForTextureStreaming = 0x494; // char : 1
		constexpr auto bOverrideLightMapRes = 0x494; // char : 1
		constexpr auto bCastDistanceFieldIndirectShadow = 0x495; // char : 1
		constexpr auto bOverrideDistanceFieldSelfShadowBias = 0x495; // char : 1
		constexpr auto bUseSubDivisions = 0x495; // char : 1
		constexpr auto bUseDefaultCollision = 0x495; // char : 1
		constexpr auto bReverseCulling = 0x495; // char : 1
		constexpr auto OverriddenLightMapRes = 0x498; // int32_t
		constexpr auto DistanceFieldIndirectShadowMinVisibility = 0x49c; // float
		constexpr auto DistanceFieldSelfShadowBias = 0x4a0; // float
		constexpr auto StreamingDistanceMultiplier = 0x4a4; // float
		constexpr auto LODData = 0x4a8; // TArray<FStaticMeshComponentLODInfo>
		constexpr auto StreamingTextureData = 0x4b8; // TArray<FStreamingTextureBuildInfo>
		constexpr auto LightmassSettings = 0x4c8; // FLightmassPrimitiveSettings
	}

	namespace n_UBTTask_RunEQSQuery {
		constexpr auto QueryTemplate = 0x98; // UEnvQuery*
		constexpr auto QueryParams = 0xa0; // TArray<FEnvNamedValue>
		constexpr auto QueryConfig = 0xb0; // TArray<FAIDynamicParam>
		constexpr auto RunMode = 0xc0; // EEnvQueryRunMode
		constexpr auto EQSQueryBlackboardKey = 0xc8; // FBlackboardKeySelector
		constexpr auto bUseBBKey = 0xf0; // bool
		constexpr auto EQSRequest = 0xf8; // FEQSParametrizedQueryExecutionRequest
	}

	namespace n_APortalWarsKOTHHill {
		constexpr auto HillTimeRemaining = 0x220; // int32_t
		constexpr auto HillState = 0x224; // EKOTHHillState
		constexpr auto bIsInitialHill = 0x225; // bool
		constexpr auto Order = 0x228; // int32_t
		constexpr auto DefaultHillMaterial = 0x230; // UMaterialInstance*
		constexpr auto BlueHillMaterial = 0x238; // UMaterialInstance*
		constexpr auto RedHillMaterial = 0x240; // UMaterialInstance*
		constexpr auto DefaultParticleMaterial = 0x248; // UMaterialInstance*
		constexpr auto BlueParticleMaterial = 0x250; // UMaterialInstance*
		constexpr auto RedParticleMaterial = 0x258; // UMaterialInstance*
		constexpr auto reachableLocComponent = 0x260; // USceneComponent*
		constexpr auto bIsActive = 0x268; // bool
		constexpr auto Mesh = 0x270; // UStaticMeshComponent*
		constexpr auto OverlapMesh = 0x278; // UStaticMeshComponent*
	}

	namespace n_UOperatorField {
		constexpr auto Magnitude = 0xb0; // float
		constexpr auto RightField = 0xb8; // UFieldNodeBase*
		constexpr auto LeftField = 0xc0; // UFieldNodeBase*
		constexpr auto Operation = 0xc8; // EFieldOperationType
	}

	namespace n_UNiagaraDataInterfaceExport {
		constexpr auto CallbackHandlerParameter = 0x38; // FNiagaraUserParameterBinding
		constexpr auto GPUAllocationMode = 0x58; // ENDIExport_GPUAllocationMode
		constexpr auto GPUAllocationFixedSize = 0x5c; // int32_t
		constexpr auto GPUAllocationPerParticleSize = 0x60; // float
	}

	namespace n_USpinBoxWidgetStyle {
		constexpr auto SpinBoxStyle = 0x30; // FSpinBoxStyle
	}

	namespace n_UListView {
		constexpr auto Orientation = 0x2d8; // EOrientation
		constexpr auto SelectionMode = 0x2d9; // ESelectionMode
		constexpr auto ConsumeMouseWheel = 0x2da; // EConsumeMouseWheel
		constexpr auto bClearSelectionOnClick = 0x2db; // bool
		constexpr auto bIsFocusable = 0x2dc; // bool
		constexpr auto EntrySpacing = 0x2e0; // float
		constexpr auto bReturnFocusToSelection = 0x2e4; // bool
		constexpr auto ListItems = 0x2e8; // TArray<UObject*>
		constexpr auto BP_OnEntryInitialized = 0x308; // FMulticastInlineDelegate
		constexpr auto BP_OnItemClicked = 0x318; // FMulticastInlineDelegate
		constexpr auto BP_OnItemDoubleClicked = 0x328; // FMulticastInlineDelegate
		constexpr auto BP_OnItemIsHoveredChanged = 0x338; // FMulticastInlineDelegate
		constexpr auto BP_OnItemSelectionChanged = 0x348; // FMulticastInlineDelegate
		constexpr auto BP_OnItemScrolledIntoView = 0x358; // FMulticastInlineDelegate
	}

	namespace n_UPortalWarsTakedownHUDOverlayWidget {
		constexpr auto TakedownNotification = 0x278; // UPortalWarsTakedownNotificationWidget*
	}

	namespace n_UMovieSceneEasingExternalCurve {
		constexpr auto Curve = 0x30; // UCurveFloat*
	}

	namespace n_UFileMediaSource {
		constexpr auto FilePath = 0x88; // FString
		constexpr auto PrecacheFile = 0x98; // bool
	}

	namespace n_UParticleModuleSize_Seeded {
		constexpr auto RandomSeedInfo = 0x78; // FParticleRandomSeedInfo
	}

	namespace n_UMaterialExpressionShaderStageSwitch {
		constexpr auto PixelShader = 0x40; // FExpressionInput
		constexpr auto VertexShader = 0x54; // FExpressionInput
	}

	namespace n_USceneCaptureComponent {
		constexpr auto PrimitiveRenderMode = 0x1f8; // ESceneCapturePrimitiveRenderMode
		constexpr auto CaptureSource = 0x1f9; // ESceneCaptureSource
		constexpr auto bCaptureEveryFrame = 0x1fa; // char : 1
		constexpr auto bCaptureOnMovement = 0x1fa; // char : 1
		constexpr auto bAlwaysPersistRenderingState = 0x1fb; // bool
		constexpr auto HiddenComponents = 0x200; // TArray<TWeakObjectPtr<UPrimitiveComponent>>
		constexpr auto HiddenActors = 0x210; // TArray<AActor*>
		constexpr auto ShowOnlyComponents = 0x220; // TArray<TWeakObjectPtr<UPrimitiveComponent>>
		constexpr auto ShowOnlyActors = 0x230; // TArray<AActor*>
		constexpr auto LODDistanceFactor = 0x240; // float
		constexpr auto MaxViewDistanceOverride = 0x244; // float
		constexpr auto CaptureSortPriority = 0x248; // int32_t
		constexpr auto bUseRayTracingIfEnabled = 0x24c; // bool
		constexpr auto ShowFlagSettings = 0x250; // TArray<FEngineShowFlagsSetting>
		constexpr auto ProfilingEventName = 0x2a0; // FString
	}

	namespace n_UParticleModuleVectorFieldGlobal {
		constexpr auto bOverrideGlobalVectorFieldTightness = 0x30; // char : 1
		constexpr auto GlobalVectorFieldScale = 0x34; // float
		constexpr auto GlobalVectorFieldTightness = 0x38; // float
	}

	namespace n_ULevelSequence {
		constexpr auto MovieScene = 0x68; // UMovieScene*
		constexpr auto ObjectReferences = 0x70; // FLevelSequenceObjectReferenceMap
		constexpr auto BindingReferences = 0xc0; // FLevelSequenceBindingReferences
		constexpr auto PossessedObjects = 0x160; // TMap<FString, FLevelSequenceObject>
		constexpr auto DirectorClass = 0x1b0; // UObject*
		constexpr auto AssetUserData = 0x1b8; // TArray<UAssetUserData*>
	}

	namespace n_UWaveOscillatorCameraShakePattern {
		constexpr auto LocationAmplitudeMultiplier = 0x38; // float
		constexpr auto LocationFrequencyMultiplier = 0x3c; // float
		constexpr auto X = 0x40; // FWaveOscillator
		constexpr auto Y = 0x4c; // FWaveOscillator
		constexpr auto Z = 0x58; // FWaveOscillator
		constexpr auto RotationAmplitudeMultiplier = 0x64; // float
		constexpr auto RotationFrequencyMultiplier = 0x68; // float
		constexpr auto Pitch = 0x6c; // FWaveOscillator
		constexpr auto Yaw = 0x78; // FWaveOscillator
		constexpr auto Roll = 0x84; // FWaveOscillator
		constexpr auto FOV = 0x90; // FWaveOscillator
	}

	namespace n_UMovieSceneMaterialTrack {
		constexpr auto Sections = 0x78; // TArray<UMovieSceneSection*>
	}

	namespace n_USoundNodeGroupControl {
		constexpr auto GroupSizes = 0x48; // TArray<int32_t>
	}

	namespace n_UAISense {
		constexpr auto DefaultExpirationAge = 0x28; // float
		constexpr auto NotifyType = 0x2c; // EAISenseNotifyType
		constexpr auto bWantsNewPawnNotification = 0x30; // char : 1
		constexpr auto bAutoRegisterAllPawnsAsSources = 0x30; // char : 1
		constexpr auto PerceptionSystemInstance = 0x38; // UAIPerceptionSystem*
	}

	namespace n_UARGetCandidateObjectAsyncTaskBlueprintProxy {
		constexpr auto OnSuccess = 0x50; // FMulticastInlineDelegate
		constexpr auto OnFailed = 0x60; // FMulticastInlineDelegate
	}

	namespace n_UNiagaraDataInterfaceArray {
		constexpr auto MaxElements = 0x40; // int32_t
	}

	namespace n_AARSkyLight {
		constexpr auto CaptureProbe = 0x230; // UAREnvironmentCaptureProbe*
	}

	namespace n_ULandscapeSettings {
		constexpr auto MaxNumberOfLayers = 0x38; // int32_t
	}

	namespace n_APortalWarsNavLink_Jump {
		constexpr auto shouldSprint = 0x270; // bool
		constexpr auto CooldownTime = 0x274; // float
	}

	namespace n_UDialogueWave {
		constexpr auto bMature = 0x28; // char : 1
		constexpr auto bOverride_SubtitleOverride = 0x28; // char : 1
		constexpr auto SpokenText = 0x30; // FString
		constexpr auto SubtitleOverride = 0x40; // FString
		constexpr auto ContextMappings = 0x50; // TArray<FDialogueContextMapping>
		constexpr auto LocalizationGUID = 0x60; // FGuid
	}

	namespace n_APortalWarsRaceGate {
		constexpr auto AkComp = 0x220; // UPortalWarsAkComponent*
		constexpr auto RootScene = 0x228; // USceneComponent*
		constexpr auto GateMesh = 0x230; // UStaticMeshComponent*
		constexpr auto SphereCollision = 0x238; // USphereComponent*
		constexpr auto ParticleSystem = 0x240; // UParticleSystemComponent*
		constexpr auto CurrentGateMaterial = 0x248; // UMaterialInterface*
		constexpr auto CurrentGateSecondMaterial = 0x250; // UMaterialInterface*
		constexpr auto NextGateMaterial = 0x258; // UMaterialInterface*
		constexpr auto NextGateSecondMaterial = 0x260; // UMaterialInterface*
		constexpr auto SuccessEvent = 0x268; // UAkAudioEvent*
		constexpr auto PlayAmbientLoopEvent = 0x270; // UAkAudioEvent*
		constexpr auto StopAmbientLoopEvent = 0x278; // UAkAudioEvent*
		constexpr auto Order = 0x280; // char
	}

	namespace n_UPawnNoiseEmitterComponent {
		constexpr auto bAIPerceptionSystemCompatibilityMode = 0xb0; // char : 1
		constexpr auto LastRemoteNoisePosition = 0xb4; // FVector
		constexpr auto NoiseLifetime = 0xc0; // float
		constexpr auto LastRemoteNoiseVolume = 0xc4; // float
		constexpr auto LastRemoteNoiseTime = 0xc8; // float
		constexpr auto LastLocalNoiseVolume = 0xcc; // float
		constexpr auto LastLocalNoiseTime = 0xd0; // float
	}

	namespace n_UGeometryCache {
		constexpr auto Materials = 0x30; // TArray<UMaterialInterface*>
		constexpr auto Tracks = 0x40; // TArray<UGeometryCacheTrack*>
		constexpr auto StartFrame = 0x60; // int32_t
		constexpr auto EndFrame = 0x64; // int32_t
		constexpr auto Hash = 0x68; // uint64_t
	}

	namespace n_UPortalWarsInputDecoratorWidget {
		constexpr auto MainPanel = 0x2a8; // UPanelWidget*
		constexpr auto RichText = 0x2b0; // FText
		constexpr auto InputActions = 0x2c8; // TArray<FString>
		constexpr auto KeyboardBrackets = 0x2d8; // bool
		constexpr auto IconSize = 0x2dc; // FVector2D
		constexpr auto TextStyleSet = 0x2e8; // UDataTable*
	}

	namespace n_UNiagaraPreviewAxis_InterpParamLinearColor {
		constexpr auto Min = 0x38; // FLinearColor
		constexpr auto Max = 0x48; // FLinearColor
	}

	namespace n_UInAppPurchaseCallbackProxy2 {
		constexpr auto OnSuccess = 0x28; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x38; // FMulticastInlineDelegate
	}

	namespace n_UNiagaraDataInterfaceArrayQuat {
		constexpr auto QuatData = 0x50; // TArray<FQuat>
	}

	namespace n_UNiagaraPreviewAxis_InterpParamVector {
		constexpr auto Min = 0x38; // FVector
		constexpr auto Max = 0x44; // FVector
	}

	namespace n_UPortalWarsChatEntryWidget {
		constexpr auto PlayerNameText = 0x260; // UTextBlock*
		constexpr auto AvatarImage = 0x268; // UImage*
		constexpr auto AvatarBorder = 0x270; // UBorder*
		constexpr auto ChatText = 0x278; // UTextBlock*
		constexpr auto ChatData = 0x288; // FTextChatData
	}

	namespace n_UMovieSceneSpawnTrack {
		constexpr auto Sections = 0x78; // TArray<UMovieSceneSection*>
		constexpr auto ObjectGuid = 0x88; // FGuid
	}

	namespace n_UInterpTrackInstDirector {
		constexpr auto OldViewTarget = 0x28; // AActor*
	}

	namespace n_UButtonStyleAsset {
		constexpr auto ButtonStyle = 0x28; // FButtonStyle
	}

	namespace n_UAchievementQueryCallbackProxy {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_UGranularSynth {
		constexpr auto GranulatedSoundWave = 0x6c0; // USoundWave*
	}

	namespace n_AAmbientSound {
		constexpr auto AudioComponent = 0x220; // UAudioComponent*
	}

	namespace n_UPortalWarsQuitMenuWidget {
		constexpr auto QuitButton = 0x338; // UPortalWarsButtonWidget*
		constexpr auto WarningRoot = 0x340; // UWidget*
		constexpr auto AcceptWarningCheckBox = 0x348; // UPortalWarsCheckBoxWidget*
		constexpr auto AcceptWarningButton = 0x350; // UPortalWarsButtonWidget*
	}

	namespace n_UTimelineTemplate {
		constexpr auto TimelineLength = 0x28; // float
		constexpr auto LengthMode = 0x2c; // ETimelineLengthMode
		constexpr auto bAutoPlay = 0x2d; // char : 1
		constexpr auto bLoop = 0x2d; // char : 1
		constexpr auto bReplicated = 0x2d; // char : 1
		constexpr auto bIgnoreTimeDilation = 0x2d; // char : 1
		constexpr auto EventTracks = 0x30; // TArray<FTTEventTrack>
		constexpr auto FloatTracks = 0x40; // TArray<FTTFloatTrack>
		constexpr auto VectorTracks = 0x50; // TArray<FTTVectorTrack>
		constexpr auto LinearColorTracks = 0x60; // TArray<FTTLinearColorTrack>
		constexpr auto MetaDataArray = 0x70; // TArray<FBPVariableMetaDataEntry>
		constexpr auto TimelineGuid = 0x80; // FGuid
		constexpr auto TimelineTickGroup = 0x90; // ETickingGroup
		constexpr auto VariableName = 0x94; // FName
		constexpr auto DirectionPropertyName = 0x9c; // FName
		constexpr auto UpdateFunctionName = 0xa4; // FName
		constexpr auto FinishedFunctionName = 0xac; // FName
	}

	namespace n_UNiagaraDataInterfaceArrayBool {
		constexpr auto BoolData = 0x50; // TArray<bool>
	}

	namespace n_UCheckBoxWidgetStyle {
		constexpr auto CheckBoxStyle = 0x30; // FCheckBoxStyle
	}

	namespace n_ACullDistanceVolume {
		constexpr auto CullDistances = 0x258; // TArray<FCullDistanceSizePair>
		constexpr auto bEnabled = 0x268; // char : 1
	}

	namespace n_UMovieSceneObjectPropertySection {
		constexpr auto ObjectChannel = 0xe8; // FMovieSceneObjectPathChannel
	}

	namespace n_URectLightComponent {
		constexpr auto SourceWidth = 0x340; // float
		constexpr auto SourceHeight = 0x344; // float
		constexpr auto BarnDoorAngle = 0x348; // float
		constexpr auto BarnDoorLength = 0x34c; // float
		constexpr auto SourceTexture = 0x350; // UTexture*
	}

	namespace n_USequenceCameraShakeSequencePlayer {
		constexpr auto BoundObjectOverride = 0x488; // UObject*
		constexpr auto Sequence = 0x490; // UMovieSceneSequence*
		constexpr auto RootTemplateInstance = 0x498; // FMovieSceneRootEvaluationTemplateInstance
	}

	namespace n_UGizmoLineHandleComponent {
		constexpr auto Normal = 0x470; // FVector
		constexpr auto HandleSize = 0x47c; // float
		constexpr auto Thickness = 0x480; // float
		constexpr auto Direction = 0x484; // FVector
		constexpr auto Length = 0x490; // float
		constexpr auto bImageScale = 0x494; // bool
	}

	namespace n_APortalWarsKOTH {
		constexpr auto ActiveHill = 0x6a8; // APortalWarsKOTHHill*
		constexpr auto NextHill = 0x6b0; // APortalWarsKOTHHill*
		constexpr auto KOTHGameState = 0x6b8; // APortalWarsKOTHGameState*
		constexpr auto HillScore = 0x6c0; // int32_t
		constexpr auto HillTime = 0x6c4; // int32_t
		constexpr auto NextHillTime = 0x6c8; // int32_t
		constexpr auto Hills = 0x6d8; // TArray<APortalWarsKOTHHill*>
	}

	namespace n_UParticleModuleLocationPrimitiveTriangle {
		constexpr auto StartOffset = 0x30; // FRawDistributionVector
		constexpr auto Height = 0x78; // FRawDistributionFloat
		constexpr auto Angle = 0xa8; // FRawDistributionFloat
		constexpr auto Thickness = 0xd8; // FRawDistributionFloat
	}

	namespace n_UVirtualTexturePoolConfig {
		constexpr auto DefaultSizeInMegabyte = 0x28; // int32_t
		constexpr auto Pools = 0x30; // TArray<FVirtualTextureSpacePoolConfig>
	}

	namespace n_AMagicLeapSharedWorldGameState {
		constexpr auto SharedWorldData = 0x290; // FMagicLeapSharedWorldSharedData
		constexpr auto AlignmentTransforms = 0x2a0; // FMagicLeapSharedWorldAlignmentTransforms
		constexpr auto OnSharedWorldDataUpdated = 0x2b0; // FMulticastInlineDelegate
		constexpr auto OnAlignmentTransformsUpdated = 0x2c0; // FMulticastInlineDelegate
	}

	namespace n_UMovieSceneEventTriggerSection {
		constexpr auto EventChannel = 0xf0; // FMovieSceneEventChannel
	}

	namespace n_UPortalWarsEmoteWheelWedgeWidget {
		constexpr auto ActionIcon = 0x260; // UImage*
		constexpr auto ActionText = 0x268; // UTextBlock*
		constexpr auto WedgeType = 0x270; // EWedgeType
		constexpr auto WeaponInspectTexture = 0x290; // UTexture*
		constexpr auto StartAngle = 0x298; // float
		constexpr auto EndAngle = 0x29c; // float
		constexpr auto WedgeImage = 0x2a0; // UImage*
		constexpr auto InactiveTexture = 0x2a8; // UTexture*
		constexpr auto ActiveTexture = 0x2b0; // UTexture*
	}

	namespace n_UMaterialShaderQualitySettings {
		constexpr auto ForwardSettingMap = 0x28; // TMap<FName, UShaderPlatformQualitySettings*>
	}

	namespace n_UChaosSolverSettings {
		constexpr auto DefaultChaosSolverActorClass = 0x40; // FSoftClassPath
	}

	namespace n_UInteractiveTool {
		constexpr auto InputBehaviors = 0x48; // UInputBehaviorSet*
		constexpr auto ToolPropertyObjects = 0x50; // TArray<UObject*>
	}

	namespace n_UInAppPurchaseCallbackProxy {
		constexpr auto OnSuccess = 0x28; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x38; // FMulticastInlineDelegate
	}

	namespace n_UAnimSet {
		constexpr auto bAnimRotationOnly = 0x28; // char : 1
		constexpr auto TrackBoneNames = 0x30; // TArray<FName>
		constexpr auto LinkupCache = 0x40; // TArray<FAnimSetMeshLinkup>
		constexpr auto BoneUseAnimTranslation = 0x50; // TArray<char>
		constexpr auto ForceUseMeshTranslation = 0x60; // TArray<char>
		constexpr auto UseTranslationBoneNames = 0x70; // TArray<FName>
		constexpr auto ForceMeshTranslationBoneNames = 0x80; // TArray<FName>
		constexpr auto PreviewSkelMeshName = 0x90; // FName
		constexpr auto BestRatioSkelMeshName = 0x98; // FName
	}

	namespace n_UMovieSceneGeometryCacheTrack {
		constexpr auto AnimationSections = 0x80; // TArray<UMovieSceneSection*>
	}

	namespace n_UPortalWarsStatsWidget {
		constexpr auto OverviewWidget = 0x338; // UPortalWarsMenuWidget*
		constexpr auto SocialWidget = 0x340; // UPortalWarsMenuWidget*
		constexpr auto RankedWidget = 0x348; // UPortalWarsMenuWidget*
	}

	namespace n_UMaterialExpressionVertexInterpolator {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UPortalWarsTeamNumericCarouselWidget {
		constexpr auto GlobalCarousel = 0x368; // UPortalWarsNumericCarouselWidget*
		constexpr auto AlphaCarousel = 0x370; // UPortalWarsNumericCarouselWidget*
		constexpr auto BravoCarousel = 0x378; // UPortalWarsNumericCarouselWidget*
		constexpr auto TeamCheckbox = 0x380; // UPortalWarsCheckBox*
		constexpr auto Value = 0x388; // int32_t
		constexpr auto MinValue = 0x38c; // int32_t
		constexpr auto MaxValue = 0x390; // int32_t
		constexpr auto StepSize = 0x394; // int32_t
		constexpr auto bAllowWrap = 0x398; // bool
		constexpr auto bDisplayAsTime = 0x399; // bool
		constexpr auto GamepadKey = 0x3a0; // FKey
		constexpr auto StandardIcon = 0x3b8; // UImage*
		constexpr auto GamepadIcon = 0x3c0; // UImage*
		constexpr auto ConsoleSwitcher = 0x3c8; // UWidgetSwitcher*
		constexpr auto IconDefaultColor = 0x3d0; // FLinearColor
		constexpr auto IconHoveredColor = 0x3e0; // FLinearColor
	}

	namespace n_UBTService_RandomJump {
		constexpr auto MinDistanceToEnd = 0x70; // float
		constexpr auto MinVelocity = 0x74; // float
		constexpr auto EpsilonVelocityParallelToPath = 0x78; // float
	}

	namespace n_UPortalWarsCopyButtonWidget {
		constexpr auto TimeToDisplayCopiedText = 0x3c8; // float
	}

	namespace n_UPortalWarsTextInputWidget {
		constexpr auto TextBox = 0x368; // UEditableTextBox*
		constexpr auto MultiLineTextBox = 0x370; // UMultiLineEditableTextBox*
		constexpr auto HintText = 0x378; // FText
		constexpr auto bIsPassword = 0x390; // bool
		constexpr auto MaxTextLength = 0x394; // int32_t
	}

	namespace n_APortalWarsCTFHUD {
		constexpr auto AlphaTeamIndicator = 0x400; // UPortalWarsFlagIndicatorWidget*
		constexpr auto BravoTeamIndicator = 0x408; // UPortalWarsFlagIndicatorWidget*
		constexpr auto FlagIndicatorWidgetClass = 0x410; // UPortalWarsIndicatorWidget*
		constexpr auto FlagCaptureZoneWidgetClass = 0x418; // UPortalWarsIndicatorWidget*
		constexpr auto CTFHUDOverlayWidget = 0x420; // UPortalWarsCTFHUDOverlayWidget*
		constexpr auto CTFHUDOverlayWidgetClass = 0x428; // UPortalWarsCTFHUDOverlayWidget*
	}

	namespace n_UJoinSessionCallbackProxy {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_UPortalWarsScoreboardPlayerWidget {
		constexpr auto BackgroundImage = 0x2a8; // UImage*
		constexpr auto BlueBackgroundImage = 0x2b0; // UTexture2D*
		constexpr auto RedBackgroundImage = 0x2b8; // UTexture2D*
		constexpr auto SelfBackgroundImage = 0x2c0; // UTexture2D*
		constexpr auto ArmorCustomizationImage = 0x2c8; // UImage*
		constexpr auto ScoreText = 0x2d0; // UTextBlock*
		constexpr auto KillsText = 0x2d8; // UTextBlock*
		constexpr auto DeathsText = 0x2e0; // UTextBlock*
		constexpr auto DamageText = 0x2e8; // UTextBlock*
		constexpr auto StatsRoot = 0x2f0; // UWidget*
		constexpr auto PrimaryWeaponImage = 0x2f8; // UImage*
		constexpr auto SecondaryWeaponImage = 0x300; // UImage*
		constexpr auto InventoryPanel = 0x308; // UWidget*
		constexpr auto PrimaryWeaponImageSizeBox = 0x310; // USizeBox*
		constexpr auto SecondaryWeaponImageSizeBox = 0x318; // USizeBox*
		constexpr auto RespawnTimeText = 0x320; // UTextBlock*
		constexpr auto DeathRoot = 0x328; // UWidget*
		constexpr auto PlayerRoot = 0x330; // UWidget*
		constexpr auto ZombieImage = 0x338; // UImage*
		constexpr auto BlueZombieImage = 0x340; // UTexture2D*
		constexpr auto RedZombieImage = 0x348; // UTexture2D*
		constexpr auto PlayerEntry = 0x350; // UPortalWarsPlayerEntryWidget*
	}

	namespace n_UBTDecorator_IsBBEntryOfClass {
		constexpr auto TestClass = 0x90; // UObject*
	}

	namespace n_UAudioBus {
		constexpr auto AudioBusChannels = 0x28; // EAudioBusChannels
		constexpr auto bIsAutomatic = 0x29; // bool
	}

	namespace n_UReplaySubsystem {
		constexpr auto bLoadDefaultMapOnStop = 0x30; // bool
	}

	namespace n_USoundNodeConcatenator {
		constexpr auto InputVolume = 0x48; // TArray<float>
	}

	namespace n_UPortalWarsGlobals {
		constexpr auto CustomizationTypeText = 0x110; // TMap<ECustomizationType, FText>
		constexpr auto CustomizationCategoryText = 0x160; // TMap<ECustomizationType, FText>
		constexpr auto CustomizationRarityText = 0x1b0; // TMap<ECustomizationRarity, FText>
		constexpr auto CustomizationRarityColor = 0x200; // TMap<ECustomizationRarity, FLinearColor>
		constexpr auto CustomizationRarityIcons = 0x250; // TMap<ECustomizationRarity, UTexture2D*>
		constexpr auto WeaponCustomizationTypes = 0x480; // TArray<ECustomizationType>
		constexpr auto CustomizationTables = 0x490; // TMap<ECustomizationType, UDataTable*>
		constexpr auto MasterSkinTable = 0x4e0; // UDataTable*
		constexpr auto CustomizationThumbnailTables = 0x4e8; // TMap<ECustomizationType, UDataTable*>
		constexpr auto SprayDecalMaterial = 0x538; // UMaterialInterface*
		constexpr auto TextureSets = 0x540; // UDataTable*
		constexpr auto Weapons = 0x548; // UDataTable*
		constexpr auto Maps = 0x550; // UDataTable*
		constexpr auto GameModes = 0x558; // UDataTable*
		constexpr auto GameModeTypes = 0x560; // UDataTable*
		constexpr auto Medals = 0x568; // UDataTable*
		constexpr auto ChallengeTables = 0x570; // TMap<EChallengeType, UDataTable*>
		constexpr auto CheckInRewards = 0x5c0; // UDataTable*
		constexpr auto PlayStreakRewards = 0x5c8; // UDataTable*
		constexpr auto PlayStreakIcons = 0x5d0; // UDataTable*
		constexpr auto Progression = 0x5d8; // UDataTable*
		constexpr auto ProgressionIcons = 0x5e0; // UDataTable*
		constexpr auto BattlePass = 0x5e8; // UDataTable*
		constexpr auto ReferralPass = 0x5f0; // UDataTable*
		constexpr auto RewardIcons = 0x5f8; // TMap<ERewardType, TSoftObjectPtr<UTexture2D>>
		constexpr auto Unlocks = 0x648; // UDataTable*
		constexpr auto Ranks = 0x650; // UDataTable*
		constexpr auto RankDivisions = 0x658; // UDataTable*
		constexpr auto Playlists = 0x660; // UDataTable*
		constexpr auto Regions = 0x668; // UDataTable*
		constexpr auto MicroTxnPurchasables = 0x670; // UDataTable*
		constexpr auto Redeemables = 0x678; // UDataTable*
		constexpr auto Announcer = 0x680; // UDataTable*
		constexpr auto BotProfiles = 0x688; // UDataTable*
		constexpr auto CustomBotProfiles = 0x690; // UDataTable*
		constexpr auto BannedWords = 0x698; // UDataTable*
		constexpr auto NiceTexts = 0x6a0; // UDataTable*
		constexpr auto WeaponReticles = 0x6a8; // UDataTable*
		constexpr auto CustomReticles = 0x6b0; // UDataTable*
		constexpr auto DefaultAvatar = 0x6b8; // UTexture2D*
		constexpr auto PlatformAvatars = 0x6c0; // TMap<FString, UTexture2D*>
		constexpr auto Tutorial = 0x710; // UDataTable*
		constexpr auto XboxButtons = 0x718; // UDataTable*
		constexpr auto PlayStationButtons = 0x720; // UDataTable*
		constexpr auto MouseButtons = 0x728; // UDataTable*
		constexpr auto Tips = 0x730; // UDataTable*
		constexpr auto LockerTips = 0x738; // UDataTable*
		constexpr auto WeaponPoses = 0x740; // UDataTable*
		constexpr auto AlwaysLoadedSoundBanks = 0x748; // TArray<UObject*>
	}

	namespace n_ARocketLauncher {
		constexpr auto EquipAnims = 0x6e0; // FRocketStateSpecificMontages
		constexpr auto FireAnims = 0x700; // FRocketStateSpecificMontages
		constexpr auto RocketMeleeEmptyAnims = 0x720; // TArray<FWeaponAnimMontage>
		constexpr auto RocketMeleeFullAnims = 0x730; // TArray<FWeaponAnimMontage>
		constexpr auto ThrowGrenadeAnims = 0x740; // FRocketStateSpecificMontages
		constexpr auto FirePortalAnims = 0x760; // FRocketStateSpecificMontages
		constexpr auto SprintFirePortalAnims = 0x780; // FRocketStateSpecificMontages
		constexpr auto ClosePortalAnims = 0x7a0; // FRocketStateSpecificMontages
		constexpr auto SprintClosePortalAnims = 0x7c0; // FRocketStateSpecificMontages
		constexpr auto InspectWeaponAnims = 0x7e0; // FRocketStateSpecificMontages
		constexpr auto ReloadStartAnims = 0x800; // FRocketStateSpecificMontages
		constexpr auto ReloadInsertAnims = 0x820; // FRocketStateSpecificMontages
		constexpr auto ReloadStopAnims = 0x840; // FRocketStateSpecificMontages
		constexpr auto EmptyAnimations = 0x890; // FWeaponAnimList
		constexpr auto FullAnimations = 0x8f0; // FWeaponAnimList
	}

	namespace n_UBackgroundBlur {
		constexpr auto Padding = 0x120; // FMargin
		constexpr auto HorizontalAlignment = 0x130; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x131; // EVerticalAlignment
		constexpr auto bApplyAlphaToBlur = 0x132; // bool
		constexpr auto BlurStrength = 0x134; // float
		constexpr auto bOverrideAutoRadiusCalculation = 0x138; // bool
		constexpr auto BlurRadius = 0x13c; // int32_t
		constexpr auto LowQualityFallbackBrush = 0x140; // FSlateBrush
	}

	namespace n_ALandscapeProxy {
		constexpr auto SplineComponent = 0x220; // ULandscapeSplinesComponent*
		constexpr auto LandscapeGuid = 0x228; // FGuid
		constexpr auto LandscapeSectionOffset = 0x238; // FIntPoint
		constexpr auto MaxLODLevel = 0x240; // int32_t
		constexpr auto LODDistanceFactor = 0x244; // float
		constexpr auto LODFalloff = 0x248; // ELandscapeLODFalloff
		constexpr auto ComponentScreenSizeToUseSubSections = 0x24c; // float
		constexpr auto LOD0ScreenSize = 0x250; // float
		constexpr auto LOD0DistributionSetting = 0x254; // float
		constexpr auto LODDistributionSetting = 0x258; // float
		constexpr auto TessellationComponentScreenSize = 0x25c; // float
		constexpr auto UseTessellationComponentScreenSizeFalloff = 0x260; // bool
		constexpr auto TessellationComponentScreenSizeFalloff = 0x264; // float
		constexpr auto OccluderGeometryLOD = 0x268; // int32_t
		constexpr auto StaticLightingLOD = 0x26c; // int32_t
		constexpr auto DefaultPhysMaterial = 0x270; // UPhysicalMaterial*
		constexpr auto StreamingDistanceMultiplier = 0x278; // float
		constexpr auto LandscapeMaterial = 0x280; // UMaterialInterface*
		constexpr auto LandscapeHoleMaterial = 0x2a8; // UMaterialInterface*
		constexpr auto LandscapeMaterialsOverride = 0x2b0; // TArray<FLandscapeProxyMaterialOverride>
		constexpr auto bMeshHoles = 0x2c0; // bool
		constexpr auto MeshHolesMaxLod = 0x2c1; // char
		constexpr auto RuntimeVirtualTextures = 0x2c8; // TArray<URuntimeVirtualTexture*>
		constexpr auto VirtualTextureNumLods = 0x2d8; // int32_t
		constexpr auto VirtualTextureLodBias = 0x2dc; // int32_t
		constexpr auto VirtualTextureRenderPassType = 0x2e0; // ERuntimeVirtualTextureMainPassType
		constexpr auto NegativeZBoundsExtension = 0x2e4; // float
		constexpr auto PositiveZBoundsExtension = 0x2e8; // float
		constexpr auto LandscapeComponents = 0x2f0; // TArray<ULandscapeComponent*>
		constexpr auto CollisionComponents = 0x300; // TArray<ULandscapeHeightfieldCollisionComponent*>
		constexpr auto FoliageComponents = 0x310; // TArray<UHierarchicalInstancedStaticMeshComponent*>
		constexpr auto bHasLandscapeGrass = 0x384; // bool
		constexpr auto StaticLightingResolution = 0x388; // float
		constexpr auto CastShadow = 0x38c; // char : 1
		constexpr auto bCastDynamicShadow = 0x38c; // char : 1
		constexpr auto bCastStaticShadow = 0x38c; // char : 1
		constexpr auto bCastFarShadow = 0x390; // char : 1
		constexpr auto bCastHiddenShadow = 0x394; // char : 1
		constexpr auto bCastShadowAsTwoSided = 0x398; // char : 1
		constexpr auto bAffectDistanceFieldLighting = 0x39c; // char : 1
		constexpr auto LightingChannels = 0x39d; // FLightingChannels
		constexpr auto bUseMaterialPositionOffsetInStaticLighting = 0x3a0; // char : 1
		constexpr auto bRenderCustomDepth = 0x3a0; // char : 1
		constexpr auto CustomDepthStencilWriteMask = 0x3a4; // ERendererStencilMask
		constexpr auto CustomDepthStencilValue = 0x3a8; // int32_t
		constexpr auto LDMaxDrawDistance = 0x3ac; // float
		constexpr auto LightmassSettings = 0x3b0; // FLightmassPrimitiveSettings
		constexpr auto CollisionMipLevel = 0x3c8; // int32_t
		constexpr auto SimpleCollisionMipLevel = 0x3cc; // int32_t
		constexpr auto CollisionThickness = 0x3d0; // float
		constexpr auto BodyInstance = 0x3d8; // FBodyInstance
		constexpr auto bGenerateOverlapEvents = 0x530; // char : 1
		constexpr auto bBakeMaterialPositionOffsetIntoCollision = 0x530; // char : 1
		constexpr auto ComponentSizeQuads = 0x534; // int32_t
		constexpr auto SubsectionSizeQuads = 0x538; // int32_t
		constexpr auto NumSubsections = 0x53c; // int32_t
		constexpr auto bUsedForNavigation = 0x540; // char : 1
		constexpr auto bFillCollisionUnderLandscapeForNavmesh = 0x540; // char : 1
		constexpr auto bUseDynamicMaterialInstance = 0x544; // bool
		constexpr auto NavigationGeometryGatheringMode = 0x545; // ENavDataGatheringMode
		constexpr auto bUseLandscapeForCullingInvisibleHLODVertices = 0x546; // bool
		constexpr auto bHasLayersContent = 0x547; // bool
		constexpr auto WeightmapUsageMap = 0x548; // TMap<UTexture2D*, ULandscapeWeightmapUsage*>
	}

	namespace n_UGizmoConstantAxisSource {
		constexpr auto Origin = 0x30; // FVector
		constexpr auto Direction = 0x3c; // FVector
	}

	namespace n_UEditableGameplayTagQueryExpression_AllTagsMatch {
		constexpr auto Tags = 0x28; // FGameplayTagContainer
	}

	namespace n_URichTextBlockImageDecorator {
		constexpr auto ImageSet = 0x28; // UDataTable*
	}

	namespace n_UMaterialExpressionMax {
		constexpr auto A = 0x40; // FExpressionInput
		constexpr auto B = 0x54; // FExpressionInput
		constexpr auto ConstA = 0x68; // float
		constexpr auto ConstB = 0x6c; // float
	}

	namespace n_APortalLauncher {
		constexpr auto portalBPClass = 0x2b8; // APortal*
		constexpr auto leftPortal = 0x2c0; // APortal*
		constexpr auto rightPortal = 0x2c8; // APortal*
		constexpr auto portalLauncherRange = 0x2d0; // float
		constexpr auto timeBetweenPortalShots = 0x2d4; // float
		constexpr auto timeToDestroyPortalAfterDeath = 0x2d8; // float
		constexpr auto trailFXOffset = 0x2dc; // FVector
		constexpr auto MouseAndKeyboardAutoAimConfig = 0x2e8; // FAutoAimData
		constexpr auto GamepadAutoAimConfig = 0x318; // FAutoAimData
		constexpr auto AkPortalGun = 0x388; // UPortalWarsAkComponent*
		constexpr auto FirePortalEvent = 0x390; // UAkAudioEvent*
		constexpr auto ClosePortalEvent = 0x398; // UAkAudioEvent*
		constexpr auto SuccessfulPortalEvent = 0x3a0; // UAkAudioEvent*
		constexpr auto FailPortalEvent = 0x3a8; // UAkAudioEvent*
		constexpr auto TrailFX = 0x3b0; // UParticleSystem*
		constexpr auto TrailTargetParam = 0x3b8; // FName
		constexpr auto TrailColorParam = 0x3c0; // FName
		constexpr auto LeftPortalEffectColor = 0x3c8; // FLinearColor
		constexpr auto RightPortalEffectColor = 0x3d8; // FLinearColor
		constexpr auto FriendlyPortalEffectColor = 0x3e8; // FLinearColor
		constexpr auto EnemyPortalEffectColor = 0x3f8; // FLinearColor
	}

	namespace n_UNiagaraEffectType {
		constexpr auto UpdateFrequency = 0x28; // ENiagaraScalabilityUpdateFrequency
		constexpr auto CullReaction = 0x2c; // ENiagaraCullReaction
		constexpr auto SignificanceHandler = 0x30; // UNiagaraSignificanceHandler*
		constexpr auto DetailLevelScalabilitySettings = 0x38; // TArray<FNiagaraSystemScalabilitySettings>
		constexpr auto SystemScalabilitySettings = 0x48; // FNiagaraSystemScalabilitySettingsArray
		constexpr auto EmitterScalabilitySettings = 0x58; // FNiagaraEmitterScalabilitySettingsArray
		constexpr auto PerformanceBaselineController = 0x70; // UNiagaraBaselineController*
		constexpr auto PerfBaselineStats = 0x78; // FNiagaraPerfBaselineStats
		constexpr auto PerfBaselineVersion = 0x88; // FGuid
	}

	namespace n_AMagicLeapARPinInfoActorBase {
		constexpr auto PinId = 0x220; // FGuid
		constexpr auto bVisibilityOverride = 0x230; // bool
	}

	namespace n_UARTrackedImage {
		constexpr auto DetectedImage = 0xf8; // UARCandidateImage*
		constexpr auto EstimatedSize = 0x100; // FVector2D
	}

	namespace n_UMaterialExpressionSingleLayerWaterMaterialOutput {
		constexpr auto ScatteringCoefficients = 0x40; // FExpressionInput
		constexpr auto AbsorptionCoefficients = 0x54; // FExpressionInput
		constexpr auto PhaseG = 0x68; // FExpressionInput
		constexpr auto ColorScaleBehindWater = 0x7c; // FExpressionInput
	}

	namespace n_USkeletalMesh {
		constexpr auto Skeleton = 0x80; // USkeleton*
		constexpr auto ImportedBounds = 0x88; // FBoxSphereBounds
		constexpr auto ExtendedBounds = 0xa4; // FBoxSphereBounds
		constexpr auto PositiveBoundsExtension = 0xc0; // FVector
		constexpr auto NegativeBoundsExtension = 0xcc; // FVector
		constexpr auto Materials = 0xd8; // TArray<FSkeletalMaterial>
		constexpr auto SkelMirrorTable = 0xe8; // TArray<FBoneMirrorInfo>
		constexpr auto LODInfo = 0xf8; // TArray<FSkeletalMeshLODInfo>
		constexpr auto MinLOD = 0x158; // FPerPlatformInt
		constexpr auto DisableBelowMinLodStripping = 0x15c; // FPerPlatformBool
		constexpr auto SkelMirrorAxis = 0x15d; // EAxis
		constexpr auto SkelMirrorFlipAxis = 0x15e; // EAxis
		constexpr auto bUseFullPrecisionUVs = 0x15f; // char : 1
		constexpr auto bUseHighPrecisionTangentBasis = 0x15f; // char : 1
		constexpr auto bHasBeenSimplified = 0x15f; // char : 1
		constexpr auto bHasVertexColors = 0x15f; // char : 1
		constexpr auto bEnablePerPolyCollision = 0x15f; // char : 1
		constexpr auto BodySetup = 0x160; // UBodySetup*
		constexpr auto PhysicsAsset = 0x168; // UPhysicsAsset*
		constexpr auto ShadowPhysicsAsset = 0x170; // UPhysicsAsset*
		constexpr auto NodeMappingData = 0x178; // TArray<UNodeMappingContainer*>
		constexpr auto bSupportRayTracing = 0x188; // char : 1
		constexpr auto MorphTargets = 0x190; // TArray<UMorphTarget*>
		constexpr auto PostProcessAnimBlueprint = 0x318; // UAnimInstance*
		constexpr auto MeshClothingAssets = 0x320; // TArray<UClothingAssetBase*>
		constexpr auto SamplingInfo = 0x330; // FSkeletalMeshSamplingInfo
		constexpr auto AssetUserData = 0x360; // TArray<UAssetUserData*>
		constexpr auto Sockets = 0x370; // TArray<USkeletalMeshSocket*>
		constexpr auto SkinWeightProfiles = 0x390; // TArray<FSkinWeightProfileInfo>
	}

	namespace n_UMaterialExpressionPanner {
		constexpr auto Coordinate = 0x40; // FExpressionInput
		constexpr auto Time = 0x54; // FExpressionInput
		constexpr auto Speed = 0x68; // FExpressionInput
		constexpr auto SpeedX = 0x7c; // float
		constexpr auto SpeedY = 0x80; // float
		constexpr auto ConstCoordinate = 0x84; // uint32_t
		constexpr auto bFractionalPart = 0x88; // bool
	}

	namespace n_USteamNetConnection {
		constexpr auto bIsPassthrough = 0x1c48; // bool
	}

	namespace n_UBTDecorator_SetTagCooldown {
		constexpr auto CooldownTag = 0x68; // FGameplayTag
		constexpr auto CooldownDuration = 0x70; // float
		constexpr auto bAddToExistingDuration = 0x74; // bool
	}

	namespace n_APWTutorialPlayerController {
		constexpr auto TimeBetweenStages = 0x6d0; // float
		constexpr auto TimeBeforeFreezingPlayer = 0x6d4; // float
		constexpr auto TimeBeforeUnfreezingPlayer = 0x6d8; // float
		constexpr auto TimeBeforeReturningToMainMenu = 0x6dc; // float
		constexpr auto TimeBeforePlayingTutorialCompleteVideo = 0x6e0; // float
		constexpr auto PlayableArea1 = 0x6e8; // FVector
		constexpr auto PlayableArea2 = 0x6f4; // FVector
		constexpr auto PlayableAreaLoc1 = 0x700; // FVector
		constexpr auto PlayableAreaLoc2 = 0x70c; // FVector
		constexpr auto FloorMPC = 0x718; // UMaterialParameterCollection*
		constexpr auto FloorRevealStep = 0x728; // float
		constexpr auto SideRevealMax = 0x730; // TArray<float>
		constexpr auto RevealMax = 0x740; // float
	}

	namespace n_UCloudStorageBase {
		constexpr auto LocalCloudFiles = 0x38; // TArray<FString>
		constexpr auto bSuppressDelegateCalls = 0x48; // char : 1
	}

	namespace n_UImage {
		constexpr auto Brush = 0x108; // FSlateBrush
		constexpr auto BrushDelegate = 0x190; // FDelegate
		constexpr auto ColorAndOpacity = 0x1a0; // FLinearColor
		constexpr auto ColorAndOpacityDelegate = 0x1b0; // FDelegate
		constexpr auto bFlipForRightToLeftFlowDirection = 0x1c0; // bool
		constexpr auto OnMouseButtonDownEvent = 0x1c4; // FDelegate
	}

	namespace n_UARTrackedObject {
		constexpr auto DetectedObject = 0xf8; // UARCandidateObject*
	}

	namespace n_UNavArea {
		constexpr auto DefaultCost = 0x30; // float
		constexpr auto FixedAreaEnteringCost = 0x34; // float
		constexpr auto DrawColor = 0x38; // FColor
		constexpr auto SupportedAgents = 0x3c; // FNavAgentSelector
		constexpr auto bSupportsAgent0 = 0x40; // char : 1
		constexpr auto bSupportsAgent1 = 0x40; // char : 1
		constexpr auto bSupportsAgent2 = 0x40; // char : 1
		constexpr auto bSupportsAgent3 = 0x40; // char : 1
		constexpr auto bSupportsAgent4 = 0x40; // char : 1
		constexpr auto bSupportsAgent5 = 0x40; // char : 1
		constexpr auto bSupportsAgent6 = 0x40; // char : 1
		constexpr auto bSupportsAgent7 = 0x40; // char : 1
		constexpr auto bSupportsAgent8 = 0x41; // char : 1
		constexpr auto bSupportsAgent9 = 0x41; // char : 1
		constexpr auto bSupportsAgent10 = 0x41; // char : 1
		constexpr auto bSupportsAgent11 = 0x41; // char : 1
		constexpr auto bSupportsAgent12 = 0x41; // char : 1
		constexpr auto bSupportsAgent13 = 0x41; // char : 1
		constexpr auto bSupportsAgent14 = 0x41; // char : 1
		constexpr auto bSupportsAgent15 = 0x41; // char : 1
	}

	namespace n_UPortalWarsAnimInstance {
		constexpr auto AnimationType = 0x2c8; // EAnimationType
		constexpr auto AimPitch = 0x2cc; // float
		constexpr auto Yaw = 0x2d0; // float
		constexpr auto YawLastTick = 0x2d4; // float
		constexpr auto YawChangeOverFrame = 0x2d8; // float
		constexpr auto bIsMoving = 0x2dc; // bool
		constexpr auto bIsSprinting = 0x2dd; // bool
		constexpr auto bIsJumping = 0x2de; // bool
		constexpr auto bIsFalling = 0x2df; // bool
		constexpr auto bIsCrouching = 0x2e0; // bool
		constexpr auto bIsAccelerating = 0x2e1; // bool
		constexpr auto Velocity = 0x2e4; // FVector
		constexpr auto MoveSpeed = 0x2f0; // float
		constexpr auto NormalizedMoveSpeed = 0x2f4; // float
		constexpr auto SpeedHorizontal = 0x2f8; // float
		constexpr auto SpeedVertical = 0x2fc; // float
		constexpr auto Direction = 0x300; // float
		constexpr auto HeadScale = 0x304; // float
		constexpr auto MovementModifier = 0x308; // float
		constexpr auto bIsPlayingEmote = 0x30c; // bool
		constexpr auto EmoteAnimSequence = 0x310; // UAnimSequence*
		constexpr auto WalkBlendSpace = 0x318; // UBlendSpace1D*
		constexpr auto SprintAnim = 0x320; // UAnimSequence*
		constexpr auto JumpStartAnim = 0x328; // UAnimSequence*
		constexpr auto JumpLoopAnim = 0x330; // UAnimSequence*
		constexpr auto JumpEndAnim = 0x338; // UAnimSequence*
		constexpr auto AkFoot = 0x340; // UPortalWarsAkComponent*
	}

	namespace n_ULandscapeHeightfieldCollisionComponent {
		constexpr auto ComponentLayerInfos = 0x450; // TArray<ULandscapeLayerInfoObject*>
		constexpr auto SectionBaseX = 0x460; // int32_t
		constexpr auto SectionBaseY = 0x464; // int32_t
		constexpr auto CollisionSizeQuads = 0x468; // int32_t
		constexpr auto CollisionScale = 0x46c; // float
		constexpr auto SimpleCollisionSizeQuads = 0x470; // int32_t
		constexpr auto CollisionQuadFlags = 0x478; // TArray<char>
		constexpr auto HeightfieldGuid = 0x488; // FGuid
		constexpr auto CachedLocalBox = 0x498; // FBox
		constexpr auto RenderComponent = 0x4b4; // LazyObjectProperty
		constexpr auto CookedPhysicalMaterials = 0x4e0; // TArray<UPhysicalMaterial*>
	}

	namespace n_UNiagaraSettings {
		constexpr auto DefaultEffectType = 0x38; // FSoftObjectPath
		constexpr auto QualityLevels = 0x50; // TArray<FText>
		constexpr auto ComponentRendererWarningsPerClass = 0x60; // TMap<FString, FText>
		constexpr auto DefaultRenderTargetFormat = 0xb0; // ETextureRenderTargetFormat
		constexpr auto DefaultGridFormat = 0xb1; // ENiagaraGpuBufferFormat
		constexpr auto DefaultRendererMotionVectorSetting = 0xb4; // ENiagaraDefaultRendererMotionVectorSetting
		constexpr auto NDISkelMesh_GpuMaxInfluences = 0xb8; // ENDISkelMesh_GpuMaxInfluences
		constexpr auto NDISkelMesh_GpuUniformSamplingFormat = 0xb9; // ENDISkelMesh_GpuUniformSamplingFormat
		constexpr auto NDISkelMesh_AdjacencyTriangleIndexFormat = 0xba; // ENDISkelMesh_AdjacencyTriangleIndexFormat
		constexpr auto DefaultEffectTypePtr = 0xc0; // UNiagaraEffectType*
	}

	namespace n_USubmixEffectDelayPreset {
		constexpr auto Settings = 0x9c; // FSubmixEffectDelaySettings
		constexpr auto DynamicSettings = 0xa8; // FSubmixEffectDelaySettings
	}

	namespace n_UGizmoAxisIntervalParameterSource {
		constexpr auto FloatParameterSource = 0x48; // TScriptInterface<IGizmoFloatParameterSource>
		constexpr auto MinParameter = 0x58; // float
		constexpr auto MaxParameter = 0x5c; // float
	}

	namespace n_UInterpTrackParticleReplay {
		constexpr auto TrackKeys = 0x70; // TArray<FParticleReplayTrackKey>
	}

	namespace n_AOnlineBeaconHost {
		constexpr auto ListenPort = 0x250; // int32_t
		constexpr auto ClientActors = 0x258; // TArray<AOnlineBeaconClient*>
	}

	namespace n_UPortalWarsMedalsWidget {
		constexpr auto MedalsPanel = 0x260; // UPanelWidget*
		constexpr auto MedalEntryWidgetClass = 0x268; // UPortalWarsMedalEntryWidget*
		constexpr auto MedalQueue = 0x270; // TArray<UPortalWarsMedalEntryWidget*>
	}

	namespace n_USoundNodeWaveParam {
		constexpr auto WaveParameterName = 0x48; // FName
	}

	namespace n_UPortalWarsTeamDecimalCarouselWidget {
		constexpr auto GlobalCarousel = 0x368; // UPortalWarsDecimalCarouselWidget*
		constexpr auto AlphaCarousel = 0x370; // UPortalWarsDecimalCarouselWidget*
		constexpr auto BravoCarousel = 0x378; // UPortalWarsDecimalCarouselWidget*
		constexpr auto TeamCheckbox = 0x380; // UPortalWarsCheckBox*
		constexpr auto Value = 0x38c; // float
		constexpr auto MinValue = 0x390; // float
		constexpr auto MaxValue = 0x394; // float
		constexpr auto StepSize = 0x398; // float
		constexpr auto GamepadKey = 0x3a0; // FKey
		constexpr auto StandardIcon = 0x3b8; // UImage*
		constexpr auto GamepadIcon = 0x3c0; // UImage*
		constexpr auto ConsoleSwitcher = 0x3c8; // UWidgetSwitcher*
		constexpr auto IconDefaultColor = 0x3d0; // FLinearColor
		constexpr auto IconHoveredColor = 0x3e0; // FLinearColor
	}

	namespace n_UPrimaryAssetLabel {
		constexpr auto Rules = 0x30; // FPrimaryAssetRules
		constexpr auto bLabelAssetsInMyDirectory = 0x3c; // char : 1
		constexpr auto bIsRuntimeLabel = 0x3c; // char : 1
		constexpr auto ExplicitAssets = 0x40; // TArray<TSoftObjectPtr<UObject>>
		constexpr auto ExplicitBlueprints = 0x50; // TArray<TSoftClassPtr<UObject>>
		constexpr auto AssetCollection = 0x60; // FCollectionReference
	}

	namespace n_UPortalWarsClaimChallengeIndicatorWidget {
		constexpr auto ClaimText = 0x260; // UTextBlock*
	}

	namespace n_UPawnActionsComponent {
		constexpr auto ControlledPawn = 0xb0; // APawn*
		constexpr auto ActionStacks = 0xb8; // TArray<FPawnActionStack>
		constexpr auto ActionEvents = 0xc8; // TArray<FPawnActionEvent>
		constexpr auto CurrentAction = 0xd8; // UPawnAction*
	}

	namespace n_UNavAreaMeta_SwitchByAgent {
		constexpr auto Agent0Area = 0x48; // UNavArea*
		constexpr auto Agent1Area = 0x50; // UNavArea*
		constexpr auto Agent2Area = 0x58; // UNavArea*
		constexpr auto Agent3Area = 0x60; // UNavArea*
		constexpr auto Agent4Area = 0x68; // UNavArea*
		constexpr auto Agent5Area = 0x70; // UNavArea*
		constexpr auto Agent6Area = 0x78; // UNavArea*
		constexpr auto Agent7Area = 0x80; // UNavArea*
		constexpr auto Agent8Area = 0x88; // UNavArea*
		constexpr auto Agent9Area = 0x90; // UNavArea*
		constexpr auto Agent10Area = 0x98; // UNavArea*
		constexpr auto Agent11Area = 0xa0; // UNavArea*
		constexpr auto Agent12Area = 0xa8; // UNavArea*
		constexpr auto Agent13Area = 0xb0; // UNavArea*
		constexpr auto Agent14Area = 0xb8; // UNavArea*
		constexpr auto Agent15Area = 0xc0; // UNavArea*
	}

	namespace n_UMovieSceneEventRepeaterSection {
		constexpr auto Event = 0xf0; // FMovieSceneEvent
	}

	namespace n_UMaterialExpressionSkyAtmosphereLightIlluminance {
		constexpr auto LightIndex = 0x40; // int32_t
		constexpr auto WorldPosition = 0x44; // FExpressionInput
	}

	namespace n_UParticleModulePivotOffset {
		constexpr auto PivotOffset = 0x30; // FVector2D
	}

	namespace n_UTexture2DDynamic {
		constexpr auto Format = 0x180; // EPixelFormat
	}

	namespace n_UDistributionVectorUniform {
		constexpr auto Max = 0x38; // FVector
		constexpr auto Min = 0x44; // FVector
		constexpr auto bLockAxes = 0x50; // char : 1
		constexpr auto LockedAxes = 0x54; // EDistributionVectorLockFlags
		constexpr auto MirrorFlags = 0x55; // EDistributionVectorMirrorFlags [0x3]
		constexpr auto bUseExtremes = 0x58; // char : 1
	}

	namespace n_UPortalWarsDropsMenuWidget {
		constexpr auto DropsText = 0x338; // UTextBlock*
		constexpr auto OpenButton = 0x340; // UPortalWarsButtonWidget*
		constexpr auto ActionSwitcher = 0x348; // UWidgetSwitcher*
	}

	namespace n_UMapBuildDataRegistry {
		constexpr auto LevelLightingQuality = 0x28; // ELightingBuildQuality
	}

	namespace n_USoundNodeLooping {
		constexpr auto LoopCount = 0x48; // int32_t
		constexpr auto bLoopIndefinitely = 0x4c; // char : 1
	}

	namespace n_UParticleModuleLocationPrimitiveSphere {
		constexpr auto StartRadius = 0xb0; // FRawDistributionFloat
	}

	namespace n_APortalWarsRaceLobbyGameMode {
		constexpr auto RaceGameModeAlias = 0x378; // FString
	}

	namespace n_USphereReflectionCaptureComponent {
		constexpr auto InfluenceRadius = 0x270; // float
		constexpr auto CaptureDistanceScale = 0x274; // float
		constexpr auto PreviewInfluenceRadius = 0x278; // UDrawSphereComponent*
	}

	namespace n_UTextPropertyTestObject {
		constexpr auto DefaultedText = 0x28; // FText
		constexpr auto UndefaultedText = 0x40; // FText
		constexpr auto TransientText = 0x58; // FText
	}

	namespace n_AVolumetricLightmapDensityVolume {
		constexpr auto AllowedMipLevelRange = 0x258; // FInt32Interval
	}

	namespace n_UPortalWarsPlaylistSelectWidget {
		constexpr auto PlaylistEntryWidgetClass = 0x338; // UPortalWarsPlaylistEntryWidget*
		constexpr auto PlaylistPanel = 0x340; // UPanelWidget*
		constexpr auto PlaylistCrossplayDialogWidgetClass = 0x348; // UPortalWarsPlaylistCrossplayDialogWidget*
		constexpr auto PlayButton = 0x350; // UPortalWarsButtonWidget*
		constexpr auto SeasonRewards = 0x358; // UWidget*
		constexpr auto NoteText = 0x360; // UTextBlock*
		constexpr auto NoteRoot = 0x368; // UWidget*
	}

	namespace n_UHorizontalBoxSlot {
		constexpr auto Padding = 0x40; // FMargin
		constexpr auto Size = 0x50; // FSlateChildSize
		constexpr auto HorizontalAlignment = 0x58; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x59; // EVerticalAlignment
	}

	namespace n_UHudSettings {
		constexpr auto bShowHUD = 0x28; // char : 1
		constexpr auto DebugDisplay = 0x30; // TArray<FName>
	}

	namespace n_UDatasmithImportOptions {
		constexpr auto SearchPackagePolicy = 0x28; // EDatasmithImportSearchPackagePolicy
		constexpr auto MaterialConflictPolicy = 0x29; // EDatasmithImportAssetConflictPolicy
		constexpr auto TextureConflictPolicy = 0x2a; // EDatasmithImportAssetConflictPolicy
		constexpr auto StaticMeshActorImportPolicy = 0x2b; // EDatasmithImportActorPolicy
		constexpr auto LightImportPolicy = 0x2c; // EDatasmithImportActorPolicy
		constexpr auto CameraImportPolicy = 0x2d; // EDatasmithImportActorPolicy
		constexpr auto OtherActorImportPolicy = 0x2e; // EDatasmithImportActorPolicy
		constexpr auto MaterialQuality = 0x2f; // EDatasmithImportMaterialQuality
		constexpr auto BaseOptions = 0x30; // FDatasmithImportBaseOptions
		constexpr auto ReimportOptions = 0x44; // FDatasmithReimportOptions
		constexpr auto Filename = 0x48; // FString
		constexpr auto FilePath = 0x58; // FString
	}

	namespace n_UPhysicsHandleComponent {
		constexpr auto GrabbedComponent = 0xb0; // UPrimitiveComponent*
		constexpr auto bSoftAngularConstraint = 0xc0; // char : 1
		constexpr auto bSoftLinearConstraint = 0xc0; // char : 1
		constexpr auto bInterpolateTarget = 0xc0; // char : 1
		constexpr auto LinearDamping = 0xc4; // float
		constexpr auto LinearStiffness = 0xc8; // float
		constexpr auto AngularDamping = 0xcc; // float
		constexpr auto AngularStiffness = 0xd0; // float
		constexpr auto InterpolationSpeed = 0x140; // float
	}

	namespace n_UInterpTrackFloatAnimBPParam {
		constexpr auto AnimBlueprintClass = 0x90; // UObject*
		constexpr auto AnimClass = 0x98; // UAnimInstance*
		constexpr auto ParamName = 0xa0; // FName
	}

	namespace n_APortalWarsTakedownVIP {
		constexpr auto VIPDefaultInventoryClasses = 0x6d8; // TArray<TSoftClassPtr<UObject>>
		constexpr auto TakedownVIPGameState = 0x6e8; // APortalWarsTakedownVIPGameState*
		constexpr auto VIPKillScore = 0x6f0; // int32_t
	}

	namespace n_UMediaComponent {
		constexpr auto MediaTexture = 0xb0; // UMediaTexture*
		constexpr auto MediaPlayer = 0xb8; // UMediaPlayer*
	}

	namespace n_UPortalWarsSettingsSubWidget {
		constexpr auto ApplyButton = 0x340; // UPortalWarsButtonWidget*
		constexpr auto RestoreButton = 0x348; // UPortalWarsButtonWidget*
		constexpr auto DiscardDialogClass = 0x350; // UPortalWarsDiscardSettingsDialog*
	}

	namespace n_UAnimationSettings {
		constexpr auto CompressCommandletVersion = 0x38; // int32_t
		constexpr auto KeyEndEffectorsMatchNameArray = 0x40; // TArray<FString>
		constexpr auto ForceRecompression = 0x50; // bool
		constexpr auto bForceBelowThreshold = 0x51; // bool
		constexpr auto bFirstRecompressUsingCurrentOrDefault = 0x52; // bool
		constexpr auto bRaiseMaxErrorToExisting = 0x53; // bool
		constexpr auto bEnablePerformanceLog = 0x54; // bool
		constexpr auto bStripAnimationDataOnDedicatedServer = 0x55; // bool
		constexpr auto bTickAnimationOnSkeletalMeshInit = 0x56; // bool
		constexpr auto BoneCustomAttributesNames = 0x58; // TArray<FCustomAttributeSetting>
		constexpr auto BoneNamesWithCustomAttributes = 0x68; // TArray<FString>
		constexpr auto AttributeBlendModes = 0x78; // TMap<FName, ECustomAttributeBlendType>
		constexpr auto DefaultAttributeBlendMode = 0xc8; // ECustomAttributeBlendType
	}

	namespace n_UAsyncActionLoadPrimaryAssetList {
		constexpr auto Completed = 0x78; // FMulticastInlineDelegate
	}

	namespace n_UPortalWarsRoundHUDOverlayWidget {
		constexpr auto TopPlayerStatusHorizontalBox = 0x260; // UHorizontalBox*
		constexpr auto BottomPlayerStatusHorizontalBox = 0x268; // UHorizontalBox*
	}

	namespace n_UMaterialExpressionDivide {
		constexpr auto A = 0x40; // FExpressionInput
		constexpr auto B = 0x54; // FExpressionInput
		constexpr auto ConstA = 0x68; // float
		constexpr auto ConstB = 0x6c; // float
	}

	namespace n_UOnsetNRTSettings {
		constexpr auto bDownmixToMono = 0x28; // bool
		constexpr auto GranularityInSeconds = 0x2c; // float
		constexpr auto Sensitivity = 0x30; // float
		constexpr auto MinimumFrequency = 0x34; // float
		constexpr auto MaximumFrequency = 0x38; // float
	}

	namespace n_UPhysicsCollisionHandler {
		constexpr auto ImpactThreshold = 0x28; // float
		constexpr auto ImpactReFireDelay = 0x2c; // float
		constexpr auto DefaultImpactSound = 0x30; // USoundBase*
		constexpr auto LastImpactSoundTime = 0x38; // float
	}

	namespace n_UPortalWarsPriceEntryWidget {
		constexpr auto PriceText = 0x260; // UTextBlock*
		constexpr auto Strikethrough = 0x268; // UWidget*
		constexpr auto PremiumImage = 0x270; // UImage*
		constexpr auto CurrencyIcon = 0x278; // UWidget*
		constexpr auto PremiumImages = 0x280; // TMap<FString, UTexture2D*>
	}

	namespace n_UMaterialExpressionHairColor {
		constexpr auto Melanin = 0x40; // FExpressionInput
		constexpr auto Redness = 0x54; // FExpressionInput
		constexpr auto DyeColor = 0x68; // FExpressionInput
	}

	namespace n_UPortalWarsAnimInstanceV2 {
		constexpr auto AOOverrideAlpha = 0x2b8; // float
		constexpr auto AOAlpha = 0x2bc; // float
		constexpr auto LeanAlpha = 0x2c0; // float
		constexpr auto State_IsSprinting = 0x2c4; // float
		constexpr auto BodyCorrectionAlpha = 0x2c8; // float
		constexpr auto ArmsCorrectionAlpha = 0x2cc; // float
		constexpr auto HandsCorrectionAlpha = 0x2d0; // float
		constexpr auto UBA = 0x2d4; // float
		constexpr auto UBA_LowerWeight = 0x2d8; // float
		constexpr auto UBA_LowerAdd = 0x2dc; // float
		constexpr auto UBA_UpperWeight = 0x2e0; // float
		constexpr auto UBA_UpperAdd = 0x2e4; // float
		constexpr auto UBA_RArmWeight = 0x2e8; // float
		constexpr auto UBA_RArmAdd = 0x2ec; // float
		constexpr auto UBA_LArmWeight = 0x2f0; // float
		constexpr auto UBA_LArmAdd = 0x2f4; // float
		constexpr auto LArmIKAlpha = 0x2f8; // float
		constexpr auto RArmIKAlpha = 0x2fc; // float
		constexpr auto LArm_Override = 0x300; // float
		constexpr auto Stride = 0x304; // float
		constexpr auto Stride_Upper = 0x308; // float
		constexpr auto PlayRate = 0x30c; // float
		constexpr auto LeanValue = 0x310; // FVector2D
		constexpr auto LeaningValue_Falling_2 = 0x318; // FVector2D
		constexpr auto LeaningValue_Falling_3 = 0x320; // FVector2D
		constexpr auto LeanFallingAlpha = 0x328; // float
		constexpr auto LandVelocity = 0x358; // float
		constexpr auto LandPredictionAlpha = 0x35c; // float
		constexpr auto bLanded = 0x360; // bool
		constexpr auto BlendAnim = 0x368; // UAnimSequenceBase*
		constexpr auto Character = 0x378; // APortalWarsCharacter*
		constexpr auto EquippedGun = 0x380; // AGun*
		constexpr auto bHasWeapon = 0x388; // bool
		constexpr auto AnimationType = 0x398; // EAnimationType
		constexpr auto WeaponType = 0x399; // EWeaponType
		constexpr auto WeaponMap = 0x3a0; // TMap<int32_t, EWeaponType>
		constexpr auto Yaw = 0x3f0; // float
		constexpr auto YawLastTick = 0x3f4; // float
		constexpr auto YawChangeOverFrame = 0x3f8; // float
		constexpr auto bIsMoving = 0x3fc; // bool
		constexpr auto bIsSprinting = 0x3fd; // bool
		constexpr auto bIsJumping = 0x3fe; // bool
		constexpr auto bIsFalling = 0x3ff; // bool
		constexpr auto bIsFallingAndNotJumping = 0x400; // bool
		constexpr auto bIsCrouching = 0x401; // bool
		constexpr auto bIsAccelerating = 0x402; // bool
		constexpr auto bIsThrusting = 0x403; // bool
		constexpr auto bShouldWeaponLean = 0x404; // bool
		constexpr auto bIsAlive = 0x405; // bool
		constexpr auto bLandAnimationAlmostFinished = 0x406; // bool
		constexpr auto bGroundedToFallLoop = 0x407; // bool
		constexpr auto bGroundedToJump = 0x408; // bool
		constexpr auto bIsMovingAndAccelerating = 0x409; // bool
		constexpr auto bLandToGrounded = 0x40a; // bool
		constexpr auto bIdleToTIP = 0x40b; // bool
		constexpr auto bTurnRToTIP = 0x40c; // bool
		constexpr auto bTurnLToTIP = 0x40d; // bool
		constexpr auto Velocity = 0x410; // FVector
		constexpr auto RelativeVelocity = 0x41c; // FVector
		constexpr auto MoveSpeed = 0x428; // float
		constexpr auto NormalizedMoveSpeed = 0x42c; // float
		constexpr auto SpeedHorizontal = 0x430; // float
		constexpr auto SpeedVertical = 0x434; // float
		constexpr auto Direction = 0x438; // float
		constexpr auto FiringCurveValue = 0x43c; // float
		constexpr auto CrouchAmount = 0x440; // float
		constexpr auto CrouchSpeed = 0x444; // float
		constexpr auto TurnAngle = 0x448; // float
		constexpr auto bTurnRLoop = 0x44c; // bool
		constexpr auto bTurnLLoop = 0x44d; // bool
		constexpr auto bTIPToTurnL = 0x44e; // bool
		constexpr auto bTIPToTurnR = 0x44f; // bool
		constexpr auto RootYawOffset = 0x450; // float
		constexpr auto RootYawOffsetRot = 0x454; // FRotator
		constexpr auto RootYawOffsetRootRot = 0x460; // FRotator
		constexpr auto RootYawSpeed = 0x470; // UCurveFloat*
		constexpr auto PlayRatesCurve = 0x478; // UCurveVector*
		constexpr auto LeanFallingCurve = 0x480; // UCurveFloat*
		constexpr auto LandPredictionCurve = 0x488; // UCurveFloat*
		constexpr auto TrueDirection = 0x490; // float
		constexpr auto TurnAmount = 0x494; // float
		constexpr auto PreviousTurnAmount = 0x498; // float
		constexpr auto bCanTurn = 0x49c; // bool
		constexpr auto AimRot2 = 0x4a0; // FRotator
		constexpr auto AimRot2Root = 0x4ac; // FRotator
		constexpr auto AimSweepTime = 0x4bc; // float
		constexpr auto HeadScale = 0x4c4; // FVector
		constexpr auto MovementModifier = 0x4d0; // float
		constexpr auto bIsPlayingEmote = 0x4d4; // bool
		constexpr auto EmoteAnimSequence = 0x4d8; // UAnimSequence*
		constexpr auto WalkBlendSpace = 0x4e0; // UBlendSpace1D*
		constexpr auto LeanBlendSpace = 0x4e8; // UBlendSpace1D*
		constexpr auto SprintAnim = 0x4f0; // UAnimSequence*
		constexpr auto JumpStartAnim = 0x4f8; // UAnimSequence*
		constexpr auto JumpLoopAnim = 0x500; // UAnimSequence*
		constexpr auto JumpEndAnim = 0x508; // UAnimSequence*
		constexpr auto BatOpenPercent = 0x510; // float
		constexpr auto AkFoot = 0x518; // UPortalWarsAkComponent*
	}

	namespace n_APortalWarsKOTHHUD {
		constexpr auto HillIndicator = 0x400; // UPortalWarsKOTHHillIndicator*
		constexpr auto NextHillIndicator = 0x408; // UPortalWarsKOTHHillIndicator*
		constexpr auto HillIndicatorWidgetClass = 0x410; // UPortalWarsIndicatorWidget*
		constexpr auto KOTHHUDOverlayWidget = 0x418; // UPortalWarsKOTHHUDOverlayWidget*
		constexpr auto KOTHHUDOverlayWidgetClass = 0x420; // UPortalWarsKOTHHUDOverlayWidget*
	}

	namespace n_APortalWarsVIP {
		constexpr auto VIPDefaultInventoryClasses = 0x6a8; // TArray<TSoftClassPtr<UObject>>
		constexpr auto VIPKillScore = 0x6b8; // int32_t
		constexpr auto VIPSuicideScore = 0x6bc; // int32_t
	}

	namespace n_UNiagaraEmitter {
		constexpr auto bLocalSpace = 0x28; // bool
		constexpr auto bDeterminism = 0x29; // bool
		constexpr auto RandomSeed = 0x2c; // int32_t
		constexpr auto AllocationMode = 0x30; // EParticleAllocationMode
		constexpr auto PreAllocationCount = 0x34; // int32_t
		constexpr auto UpdateScriptProps = 0x38; // FNiagaraEmitterScriptProperties
		constexpr auto SpawnScriptProps = 0x60; // FNiagaraEmitterScriptProperties
		constexpr auto SimTarget = 0x88; // ENiagaraSimTarget
		constexpr auto FixedBounds = 0x8c; // FBox
		constexpr auto MinDetailLevel = 0xa8; // int32_t
		constexpr auto MaxDetailLevel = 0xac; // int32_t
		constexpr auto GlobalSpawnCountScaleOverrides = 0xb0; // FNiagaraDetailsLevelScaleOverrides
		constexpr auto Platforms = 0xc8; // FNiagaraPlatformSet
		constexpr auto ScalabilityOverrides = 0xf8; // FNiagaraEmitterScalabilityOverrides
		constexpr auto bInterpolatedSpawning = 0x108; // char : 1
		constexpr auto bFixedBounds = 0x108; // char : 1
		constexpr auto bUseMinDetailLevel = 0x108; // char : 1
		constexpr auto bUseMaxDetailLevel = 0x108; // char : 1
		constexpr auto bOverrideGlobalSpawnCountScale = 0x108; // char : 1
		constexpr auto bRequiresPersistentIDs = 0x108; // char : 1
		constexpr auto bCombineEventSpawn = 0x108; // char : 1
		constexpr auto MaxDeltaTimePerTick = 0x10c; // float
		constexpr auto DefaultShaderStageIndex = 0x110; // uint32_t
		constexpr auto MaxUpdateIterations = 0x114; // uint32_t
		constexpr auto SpawnStages = 0x118; // TSet<uint32_t>
		constexpr auto bSimulationStagesEnabled = 0x168; // char : 1
		constexpr auto bDeprecatedShaderStagesEnabled = 0x168; // char : 1
		constexpr auto bLimitDeltaTime = 0x168; // char : 1
		constexpr auto UniqueEmitterName = 0x170; // FString
		constexpr auto RendererProperties = 0x180; // TArray<UNiagaraRendererProperties*>
		constexpr auto EventHandlerScriptProps = 0x190; // TArray<FNiagaraEventScriptProperties>
		constexpr auto SimulationStages = 0x1a0; // TArray<UNiagaraSimulationStageBase*>
		constexpr auto GPUComputeScript = 0x1b0; // UNiagaraScript*
		constexpr auto SharedEventGeneratorIds = 0x1b8; // TArray<FName>
	}

	namespace n_UMovieSceneEvaluationHookSystem {
		constexpr auto PendingEventsByRootInstance = 0x40; // TMap<FMovieSceneEvaluationInstanceKey, FMovieSceneEvaluationHookEventContainer>
	}

	namespace n_AMatineeActor {
		constexpr auto MatineeData = 0x220; // UInterpData*
		constexpr auto MatineeControllerName = 0x228; // FName
		constexpr auto PlayRate = 0x230; // float
		constexpr auto bPlayOnLevelLoad = 0x234; // char : 1
		constexpr auto bForceStartPos = 0x234; // char : 1
		constexpr auto ForceStartPosition = 0x238; // float
		constexpr auto bLooping = 0x23c; // char : 1
		constexpr auto bRewindOnPlay = 0x23c; // char : 1
		constexpr auto bNoResetOnRewind = 0x23c; // char : 1
		constexpr auto bRewindIfAlreadyPlaying = 0x23c; // char : 1
		constexpr auto bDisableRadioFilter = 0x23c; // char : 1
		constexpr auto bClientSideOnly = 0x23c; // char : 1
		constexpr auto bSkipUpdateIfNotVisible = 0x23c; // char : 1
		constexpr auto bIsSkippable = 0x23c; // char : 1
		constexpr auto PreferredSplitScreenNum = 0x240; // int32_t
		constexpr auto bDisableMovementInput = 0x244; // char : 1
		constexpr auto bDisableLookAtInput = 0x244; // char : 1
		constexpr auto bHidePlayer = 0x244; // char : 1
		constexpr auto bHideHud = 0x244; // char : 1
		constexpr auto GroupActorInfos = 0x248; // TArray<FInterpGroupActorInfo>
		constexpr auto bShouldShowGore = 0x258; // char : 1
		constexpr auto GroupInst = 0x260; // TArray<UInterpGroupInst*>
		constexpr auto CameraCuts = 0x270; // TArray<FCameraCutInfo>
		constexpr auto bIsPlaying = 0x280; // char : 1
		constexpr auto bReversePlayback = 0x280; // char : 1
		constexpr auto bPaused = 0x280; // char : 1
		constexpr auto bPendingStop = 0x280; // char : 1
		constexpr auto InterpPosition = 0x284; // float
		constexpr auto ReplicationForceIsPlaying = 0x28c; // char
		constexpr auto OnPlay = 0x290; // FMulticastInlineDelegate
		constexpr auto OnStop = 0x2a0; // FMulticastInlineDelegate
		constexpr auto OnPause = 0x2b0; // FMulticastInlineDelegate
	}

	namespace n_APWReplayPlayerController {
		constexpr auto ReplayPlayerState = 0x6d0; // APlayerState*
		constexpr auto ReplayHUDWidget = 0x6e0; // UPortalWarsReplayHUDOverlayWidget*
		constexpr auto ReplayHUDWidgetClass = 0x6f8; // TSoftClassPtr<UObject>
		constexpr auto CameraBoom = 0x790; // USpringArmComponent*
		constexpr auto FollowCamera = 0x798; // UCameraComponent*
		constexpr auto AlphaTeamColor = 0x7a0; // FLinearColor
		constexpr auto BravoTeamColor = 0x7b0; // FLinearColor
	}

	namespace n_AMainMenuGameState {
		constexpr auto MyCharacter = 0x298; // APortalWarsCharacter*
		constexpr auto MainPlatform = 0x2a0; // AStaticMeshActor*
		constexpr auto MyPortal = 0x2c0; // APortal*
		constexpr auto PartyCharacters = 0x2c8; // TArray<APortalWarsCharacter*>
		constexpr auto LootboxItem = 0x2d8; // APreviewItem*
		constexpr auto LootboxCam = 0x2e0; // ACameraActor*
		constexpr auto LootboxCharacter = 0x2e8; // APortalWarsCharacter*
		constexpr auto LootboxPortals = 0x2f0; // TArray<APortal*>
		constexpr auto LootboxGlow = 0x300; // AStaticMeshActor*
		constexpr auto InspectItem = 0x308; // APreviewItem*
		constexpr auto MainCam = 0x310; // ACameraActor*
		constexpr auto InspectCam = 0x318; // ACameraActor*
		constexpr auto LootboxSequence = 0x320; // ALevelSequenceActor*
	}

	namespace n_UPawnAction_Move {
		constexpr auto GoalActor = 0x90; // AActor*
		constexpr auto GoalLocation = 0x98; // FVector
		constexpr auto AcceptableRadius = 0xa4; // float
		constexpr auto FilterClass = 0xa8; // UNavigationQueryFilter*
		constexpr auto bAllowStrafe = 0xb0; // char : 1
		constexpr auto bFinishOnOverlap = 0xb0; // char : 1
		constexpr auto bUsePathfinding = 0xb0; // char : 1
		constexpr auto bAllowPartialPath = 0xb0; // char : 1
		constexpr auto bProjectGoalToNavigation = 0xb0; // char : 1
		constexpr auto bUpdatePathToGoal = 0xb0; // char : 1
		constexpr auto bAbortChildActionOnPathChange = 0xb0; // char : 1
	}

	namespace n_UAISense_Touch {
		constexpr auto RegisteredEvents = 0x80; // TArray<FAITouchEvent>
	}

	namespace n_UBillboardComponent {
		constexpr auto Sprite = 0x450; // UTexture2D*
		constexpr auto bIsScreenSizeScaled = 0x458; // char : 1
		constexpr auto ScreenSize = 0x45c; // float
		constexpr auto U = 0x460; // float
		constexpr auto UL = 0x464; // float
		constexpr auto V = 0x468; // float
		constexpr auto VL = 0x46c; // float
	}

	namespace n_UBackgroundBlurSlot {
		constexpr auto Padding = 0x38; // FMargin
		constexpr auto HorizontalAlignment = 0x48; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x49; // EVerticalAlignment
	}

	namespace n_UDatasmithFBXSceneImportData {
		constexpr auto bGenerateLightmapUVs = 0x28; // bool
		constexpr auto TexturesDir = 0x30; // FString
		constexpr auto IntermediateSerialization = 0x40; // char
		constexpr auto bColorizeMaterials = 0x41; // bool
	}

	namespace n_APortalWarsGunPickupZone {
		constexpr auto AmmoClips = 0x2cc; // float
		constexpr auto bIsActive = 0x2d0; // bool
		constexpr auto TimeToSpawn = 0x2d4; // int32_t
		constexpr auto ReplicatedTimeToSpawn = 0x2d8; // int32_t
		constexpr auto TimeBetweenSpawns = 0x2dc; // int32_t
		constexpr auto PickupPlatformMesh = 0x2f8; // USkeletalMeshComponent*
		constexpr auto PlatformOpenMontage = 0x300; // UAnimMontage*
		constexpr auto PlatformCloseMontage = 0x308; // UAnimMontage*
		constexpr auto PickupGlow = 0x310; // UParticleSystemComponent*
		constexpr auto InactiveMaterial = 0x318; // UMaterialInterface*
		constexpr auto ActiveMaterials = 0x320; // TArray<UMaterialInterface*>
		constexpr auto PickupIndicatorWidget = 0x330; // UPortalWarsPickupZoneIndicator*
		constexpr auto AkComponent = 0x338; // UPortalWarsAkComponent*
		constexpr auto PlayAmbientLoopEvent = 0x340; // UAkAudioEvent*
		constexpr auto StopAmbientLoopEvent = 0x348; // UAkAudioEvent*
		constexpr auto bHidePickupPlatform = 0x354; // bool
	}

	namespace n_UParticleModule {
		constexpr auto bSpawnModule = 0x28; // char : 1
		constexpr auto bUpdateModule = 0x28; // char : 1
		constexpr auto bFinalUpdateModule = 0x28; // char : 1
		constexpr auto bUpdateForGPUEmitter = 0x28; // char : 1
		constexpr auto bCurvesAsColor = 0x28; // char : 1
		constexpr auto b3DDrawMode = 0x28; // char : 1
		constexpr auto bSupported3DDrawMode = 0x28; // char : 1
		constexpr auto bEnabled = 0x28; // char : 1
		constexpr auto bEditable = 0x29; // char : 1
		constexpr auto LODDuplicate = 0x29; // char : 1
		constexpr auto bSupportsRandomSeed = 0x29; // char : 1
		constexpr auto bRequiresLoopingNotification = 0x29; // char : 1
		constexpr auto LODValidity = 0x2a; // char
	}

	namespace n_UAkMacInitializationSettings {
		constexpr auto CommonSettings = 0x28; // FAkCommonInitializationSettingsWithSampleRate
		constexpr auto CommunicationSettings = 0x98; // FAkCommunicationSettingsWithSystemInitialization
		constexpr auto AdvancedSettings = 0xc0; // FAkAdvancedInitializationSettingsWithMultiCoreRendering
	}

	namespace n_UDistributionFloatConstantCurve {
		constexpr auto ConstantCurve = 0x38; // FInterpCurveFloat
	}

	namespace n_UARTextureCameraDepth {
		constexpr auto DepthQuality = 0x198; // EARDepthQuality
		constexpr auto DepthAccuracy = 0x199; // EARDepthAccuracy
		constexpr auto bIsTemporallySmoothed = 0x19a; // bool
	}

	namespace n_USequenceCameraShakePattern {
		constexpr auto Sequence = 0x28; // UCameraAnimationSequence*
		constexpr auto PlayRate = 0x30; // float
		constexpr auto Scale = 0x34; // float
		constexpr auto BlendInTime = 0x38; // float
		constexpr auto BlendOutTime = 0x3c; // float
		constexpr auto RandomSegmentDuration = 0x40; // float
		constexpr auto bRandomSegment = 0x44; // bool
		constexpr auto Player = 0x48; // USequenceCameraShakeSequencePlayer*
		constexpr auto CameraStandIn = 0x50; // USequenceCameraShakeCameraStandIn*
	}

	namespace n_UParticleModuleSpawnPerUnit {
		constexpr auto UnitScalar = 0x38; // float
		constexpr auto MovementTolerance = 0x3c; // float
		constexpr auto SpawnPerUnit = 0x40; // FRawDistributionFloat
		constexpr auto MaxFrameDistance = 0x70; // float
		constexpr auto bIgnoreSpawnRateWhenMoving = 0x74; // char : 1
		constexpr auto bIgnoreMovementAlongX = 0x74; // char : 1
		constexpr auto bIgnoreMovementAlongY = 0x74; // char : 1
		constexpr auto bIgnoreMovementAlongZ = 0x74; // char : 1
	}

	namespace n_UPortalWarsLocalPlayer {
		constexpr auto PlayerAvatar = 0x288; // UTexture*
		constexpr auto CachedCustomizationObjects = 0x440; // TArray<UObject*>
		constexpr auto NotificationManager = 0x490; // UPortalWarsNotificationManager*
		constexpr auto NotificationManagerClass = 0x498; // UPortalWarsNotificationManager*
		constexpr auto InviteManager = 0x4a0; // UPortalWarsInviteManager*
		constexpr auto InviteManagerClass = 0x4a8; // UPortalWarsInviteManager*
		constexpr auto ControllerDisconnectedWidget = 0x4b8; // UPortalWarsDialogWidget*
		constexpr auto ControllerDisconnectWidgetClass = 0x4c0; // UPortalWarsDialogWidget*
		constexpr auto UserSaveGameData = 0x500; // UPortalWarsSaveGame*
	}

	namespace n_UPortalWarsTrainingWidget {
		constexpr auto TutorialButton = 0x338; // UPortalWarsButtonWidget*
		constexpr auto RangeButton = 0x340; // UPortalWarsButtonWidget*
	}

	namespace n_UBTTask_RotateToFaceBBEntry {
		constexpr auto Precision = 0x98; // float
	}

	namespace n_UGameplayTasksComponent {
		constexpr auto bIsNetDirty = 0xbc; // char : 1
		constexpr auto SimulatedTasks = 0xc0; // TArray<UGameplayTask*>
		constexpr auto TaskPriorityQueue = 0xd0; // TArray<UGameplayTask*>
		constexpr auto TickingTasks = 0xf0; // TArray<UGameplayTask*>
		constexpr auto KnownTasks = 0x100; // TArray<UGameplayTask*>
		constexpr auto OnClaimedResourcesChange = 0x110; // FMulticastInlineDelegate
	}

	namespace n_AAIController {
		constexpr auto bStartAILogicOnPossess = 0x2d0; // char : 1
		constexpr auto bStopAILogicOnUnposses = 0x2d0; // char : 1
		constexpr auto bLOSflag = 0x2d0; // char : 1
		constexpr auto bSkipExtraLOSChecks = 0x2d0; // char : 1
		constexpr auto bAllowStrafe = 0x2d0; // char : 1
		constexpr auto bWantsPlayerState = 0x2d0; // char : 1
		constexpr auto bSetControlRotationFromPawnOrientation = 0x2d0; // char : 1
		constexpr auto PathFollowingComponent = 0x2d8; // UPathFollowingComponent*
		constexpr auto BrainComponent = 0x2e0; // UBrainComponent*
		constexpr auto PerceptionComponent = 0x2e8; // UAIPerceptionComponent*
		constexpr auto ActionsComp = 0x2f0; // UPawnActionsComponent*
		constexpr auto Blackboard = 0x2f8; // UBlackboardComponent*
		constexpr auto CachedGameplayTasksComponent = 0x300; // UGameplayTasksComponent*
		constexpr auto DefaultNavigationFilterClass = 0x308; // UNavigationQueryFilter*
		constexpr auto ReceiveMoveCompleted = 0x310; // FMulticastInlineDelegate
	}

	namespace n_AFlagCaptureZone {
		constexpr auto TeamIndex = 0x220; // char
		constexpr auto Indicator = 0x228; // UPortalWarsFlagZoneIndicator*
		constexpr auto Mesh = 0x230; // UStaticMeshComponent*
		constexpr auto OverlapMesh = 0x238; // UStaticMeshComponent*
		constexpr auto FlagSpawnPoint = 0x240; // USceneComponent*
		constexpr auto FlagPickupClass = 0x248; // AFlagItemPickup*
		constexpr auto CTFGameState = 0x250; // APortalWarsCTFGameState*
		constexpr auto NeutralCTFGameState = 0x258; // APortalWarsNeutralCTFGameState*
	}

	namespace n_UInterpTrackInstToggle {
		constexpr auto Action = 0x28; // ETrackToggleAction
		constexpr auto LastUpdatePosition = 0x2c; // float
		constexpr auto bSavedActiveState = 0x30; // char : 1
	}

	namespace n_UGizmoAxisRotationParameterSource {
		constexpr auto AxisSource = 0x90; // TScriptInterface<IGizmoAxisSource>
		constexpr auto TransformSource = 0xa0; // TScriptInterface<IGizmoTransformSource>
		constexpr auto Angle = 0xb0; // float
		constexpr auto LastChange = 0xb4; // FGizmoFloatParameterChange
		constexpr auto CurRotationAxis = 0xbc; // FVector
		constexpr auto CurRotationOrigin = 0xc8; // FVector
		constexpr auto InitialTransform = 0xe0; // FTransform
	}

	namespace n_UMaterialExpressionStep {
		constexpr auto Y = 0x40; // FExpressionInput
		constexpr auto X = 0x54; // FExpressionInput
		constexpr auto ConstY = 0x68; // float
		constexpr auto ConstX = 0x6c; // float
	}

	namespace n_UPortalWarsNameTagWidget {
		constexpr auto NameTagText = 0x260; // UTextBlock*
	}

	namespace n_UMaterialExpression {
		constexpr auto Material = 0x28; // UMaterial*
		constexpr auto Function = 0x30; // UMaterialFunction*
		constexpr auto bIsParameterExpression = 0x38; // char : 1
	}

	namespace n_UInterpTrackInstAnimControl {
		constexpr auto LastUpdatePosition = 0x28; // float
	}

	namespace n_USoundNodeModulator {
		constexpr auto PitchMin = 0x48; // float
		constexpr auto PitchMax = 0x4c; // float
		constexpr auto VolumeMin = 0x50; // float
		constexpr auto VolumeMax = 0x54; // float
	}

	namespace n_UPortalWarsProgressionUpdateDialogWidget {
		constexpr auto XPUpdateWidget = 0x390; // UPortalWarsXPUpdateWidget*
	}

	namespace n_UBlendSpace {
		constexpr auto AxisToScaleAnimation = 0x148; // EBlendSpaceAxis
	}

	namespace n_UParticleModuleSizeScaleBySpeed {
		constexpr auto SpeedScale = 0x30; // FVector2D
		constexpr auto MaxScale = 0x38; // FVector2D
	}

	namespace n_UBlueprintCore {
		constexpr auto SkeletonGeneratedClass = 0x28; // UObject*
		constexpr auto GeneratedClass = 0x30; // UObject*
		constexpr auto bLegacyNeedToPurgeSkelRefs = 0x38; // bool
		constexpr auto BlueprintGuid = 0x3c; // FGuid
	}

	namespace n_UCineCameraComponent {
		constexpr auto FilmbackSettings = 0x7c0; // FCameraFilmbackSettings
		constexpr auto Filmback = 0x7cc; // FCameraFilmbackSettings
		constexpr auto LensSettings = 0x7d8; // FCameraLensSettings
		constexpr auto FocusSettings = 0x7f0; // FCameraFocusSettings
		constexpr auto CurrentFocalLength = 0x848; // float
		constexpr auto CurrentAperture = 0x84c; // float
		constexpr auto CurrentFocusDistance = 0x850; // float
		constexpr auto FilmbackPresets = 0x860; // TArray<FNamedFilmbackPreset>
		constexpr auto LensPresets = 0x870; // TArray<FNamedLensPreset>
		constexpr auto DefaultFilmbackPresetName = 0x880; // FString
		constexpr auto DefaultFilmbackPreset = 0x890; // FString
		constexpr auto DefaultLensPresetName = 0x8a0; // FString
		constexpr auto DefaultLensFocalLength = 0x8b0; // float
		constexpr auto DefaultLensFStop = 0x8b4; // float
	}

	namespace n_UParticleModuleLocation_Seeded {
		constexpr auto RandomSeedInfo = 0x80; // FParticleRandomSeedInfo
	}

	namespace n_UVehicleWheel {
		constexpr auto CollisionMesh = 0x28; // UStaticMesh*
		constexpr auto bDontCreateShape = 0x30; // bool
		constexpr auto bAutoAdjustCollisionSize = 0x31; // bool
		constexpr auto Offset = 0x34; // FVector
		constexpr auto ShapeRadius = 0x40; // float
		constexpr auto ShapeWidth = 0x44; // float
		constexpr auto Mass = 0x48; // float
		constexpr auto DampingRate = 0x4c; // float
		constexpr auto SteerAngle = 0x50; // float
		constexpr auto bAffectedByHandbrake = 0x54; // bool
		constexpr auto TireType = 0x58; // UTireType*
		constexpr auto TireConfig = 0x60; // UTireConfig*
		constexpr auto LatStiffMaxLoad = 0x68; // float
		constexpr auto LatStiffValue = 0x6c; // float
		constexpr auto LongStiffValue = 0x70; // float
		constexpr auto SuspensionForceOffset = 0x74; // float
		constexpr auto SuspensionMaxRaise = 0x78; // float
		constexpr auto SuspensionMaxDrop = 0x7c; // float
		constexpr auto SuspensionNaturalFrequency = 0x80; // float
		constexpr auto SuspensionDampingRatio = 0x84; // float
		constexpr auto SweepType = 0x88; // EWheelSweepType
		constexpr auto MaxBrakeTorque = 0x8c; // float
		constexpr auto MaxHandBrakeTorque = 0x90; // float
		constexpr auto VehicleSim = 0x98; // UWheeledVehicleMovementComponent*
		constexpr auto WheelIndex = 0xa0; // int32_t
		constexpr auto DebugLongSlip = 0xa4; // float
		constexpr auto DebugLatSlip = 0xa8; // float
		constexpr auto DebugNormalizedTireLoad = 0xac; // float
		constexpr auto DebugWheelTorque = 0xb4; // float
		constexpr auto DebugLongForce = 0xb8; // float
		constexpr auto DebugLatForce = 0xbc; // float
		constexpr auto Location = 0xc0; // FVector
		constexpr auto OldLocation = 0xcc; // FVector
		constexpr auto Velocity = 0xd8; // FVector
	}

	namespace n_UPortalWarsDamageIndicatorWidget {
		constexpr auto HitImage = 0x260; // UImage*
		constexpr auto ThruPortalMaterial = 0x268; // UMaterialInterface*
	}

	namespace n_UPortalWarsLockerButtonWidget {
		constexpr auto CustomizationType = 0x420; // ECustomizationType
		constexpr auto EquippedText = 0x428; // UTextBlock*
		constexpr auto ThumbnailImage = 0x430; // UImage*
		constexpr auto DefaultImage = 0x438; // UTexture2D*
	}

	namespace n_UParticleModuleParameterDynamic {
		constexpr auto DynamicParams = 0x30; // TArray<FEmitterDynamicParameter>
		constexpr auto UpdateFlags = 0x40; // int32_t
		constexpr auto bUsesVelocity = 0x44; // char : 1
	}

	namespace n_UChildConnection {
		constexpr auto Parent = 0x1ba8; // UNetConnection*
	}

	namespace n_UPortalWarsRewardPassEntryWidget {
		constexpr auto LockedRoot = 0x728; // UWidget*
		constexpr auto CompletedRoot = 0x760; // UWidget*
		constexpr auto LevelText = 0x768; // UTextBlock*
		constexpr auto DisplayNameText = 0x770; // UTextBlock*
		constexpr auto BackgroundSwitcher = 0x780; // UWidgetSwitcher*
		constexpr auto SelectedAnimation = 0x788; // UWidgetAnimation*
	}

	namespace n_UImgMediaSettings {
		constexpr auto DefaultFrameRate = 0x28; // FFrameRate
		constexpr auto CacheBehindPercentage = 0x30; // float
		constexpr auto CacheSizeGB = 0x34; // float
		constexpr auto CacheThreads = 0x38; // int32_t
		constexpr auto CacheThreadStackSizeKB = 0x3c; // int32_t
		constexpr auto GlobalCacheSizeGB = 0x40; // float
		constexpr auto UseGlobalCache = 0x44; // bool
		constexpr auto ExrDecoderThreads = 0x48; // uint32_t
		constexpr auto DefaultProxy = 0x50; // FString
		constexpr auto UseDefaultProxy = 0x60; // bool
	}

	namespace n_UAvoidanceManager {
		constexpr auto DefaultTimeToLive = 0x30; // float
		constexpr auto LockTimeAfterAvoid = 0x34; // float
		constexpr auto LockTimeAfterClean = 0x38; // float
		constexpr auto DeltaTimeToPredict = 0x3c; // float
		constexpr auto ArtificialRadiusExpansion = 0x40; // float
		constexpr auto TestHeightDifference = 0x44; // float
		constexpr auto HeightCheckMargin = 0x48; // float
	}

	namespace n_UPortalWarsServerBrowserWidget {
		constexpr auto ServerEntryWidgetClass = 0x350; // UPortalWarsServerEntryWidget*
		constexpr auto ServerList = 0x358; // UPanelWidget*
		constexpr auto PaginatorCarousel = 0x360; // UPortalWarsNumericCarouselWidget*
		constexpr auto NumEntriesPerPage = 0x368; // int32_t
		constexpr auto FilterButton = 0x370; // UPortalWarsButtonWidget*
		constexpr auto ServerFiltersDialogWidgetClass = 0x378; // UPortalWarsCustomGameFiltersWidget*
		constexpr auto FilterIndicator = 0x380; // UWidget*
		constexpr auto RefreshButton = 0x388; // UPortalWarsButtonWidget*
		constexpr auto OnCreateButtonClickedDelegate = 0x390; // FMulticastInlineDelegate
		constexpr auto CreateButton = 0x3a0; // UPortalWarsButtonWidget*
		constexpr auto PreviewServerEntry = 0x3a8; // UPortalWarsServerEntryWidget*
		constexpr auto JoinButton = 0x3b0; // UPortalWarsButtonWidget*
		constexpr auto JoinServerDialogWidgetClass = 0x3b8; // UPortalWarsJoinServerDialogWidget*
		constexpr auto MaxVisibleEntries = 0x3c4; // int32_t
	}

	namespace n_UGenlockedFixedRateCustomTimeStep {
		constexpr auto FrameRate = 0x28; // FFrameRate
	}

	namespace n_UParticleModuleEventReceiverKillParticles {
		constexpr auto bStopSpawning = 0x40; // char : 1
	}

	namespace n_UWindowTitleBarArea {
		constexpr auto bWindowButtonsEnabled = 0x120; // bool
		constexpr auto bDoubleClickTogglesFullscreen = 0x121; // bool
	}

	namespace n_UAchievementWriteCallbackProxy {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_UPortalWarsNetworkInfoWidget {
		constexpr auto Ping = 0x268; // UTextBlock*
		constexpr auto InBytes = 0x270; // UTextBlock*
		constexpr auto InPackets = 0x278; // UTextBlock*
		constexpr auto InPacketLoss = 0x280; // UTextBlock*
		constexpr auto OutBytes = 0x288; // UTextBlock*
		constexpr auto OutPackets = 0x290; // UTextBlock*
		constexpr auto OutPacketLoss = 0x298; // UTextBlock*
		constexpr auto NetInfoHorizontalBox = 0x2a0; // UHorizontalBox*
		constexpr auto FPS = 0x2a8; // UTextBlock*
		constexpr auto TotalLatency = 0x2b0; // UTextBlock*
		constexpr auto GameLatency = 0x2b8; // UTextBlock*
		constexpr auto RenderLatency = 0x2c0; // UTextBlock*
		constexpr auto DriverLatency = 0x2c8; // UTextBlock*
		constexpr auto OSRenderQueueLatency = 0x2d0; // UTextBlock*
		constexpr auto GPURenderLatency = 0x2d8; // UTextBlock*
		constexpr auto LatencyInfoVerticalBox = 0x2e0; // UVerticalBox*
	}

	namespace n_UEngineMessage {
		constexpr auto FailedPlaceMessage = 0x28; // FString
		constexpr auto MaxedOutMessage = 0x38; // FString
		constexpr auto EnteredMessage = 0x48; // FString
		constexpr auto LeftMessage = 0x58; // FString
		constexpr auto GlobalNameChange = 0x68; // FString
		constexpr auto SpecEnteredMessage = 0x78; // FString
		constexpr auto NewPlayerMessage = 0x88; // FString
		constexpr auto NewSpecMessage = 0x98; // FString
	}

	namespace n_UInterpTrackMove {
		constexpr auto PosTrack = 0x70; // FInterpCurveVector
		constexpr auto EulerTrack = 0x88; // FInterpCurveVector
		constexpr auto LookupTrack = 0xa0; // FInterpLookupTrack
		constexpr auto LookAtGroupName = 0xb0; // FName
		constexpr auto LinCurveTension = 0xb8; // float
		constexpr auto AngCurveTension = 0xbc; // float
		constexpr auto bUseQuatInterpolation = 0xc0; // char : 1
		constexpr auto bShowArrowAtKeys = 0xc0; // char : 1
		constexpr auto bDisableMovement = 0xc0; // char : 1
		constexpr auto bShowTranslationOnCurveEd = 0xc0; // char : 1
		constexpr auto bShowRotationOnCurveEd = 0xc0; // char : 1
		constexpr auto bHide3DTrack = 0xc0; // char : 1
		constexpr auto RotMode = 0xc4; // EInterpTrackMoveRotMode
	}

	namespace n_UNiagaraDataInterface2DArrayTexture {
		constexpr auto Texture = 0x38; // UTexture2DArray*
	}

	namespace n_UParticleModuleLifetime_Seeded {
		constexpr auto RandomSeedInfo = 0x60; // FParticleRandomSeedInfo
	}

	namespace n_UIntervalGizmo {
		constexpr auto StateTarget = 0x38; // UGizmoTransformChangeStateTarget*
		constexpr auto TransformProxy = 0x50; // UTransformProxy*
		constexpr auto ActiveComponents = 0x58; // TArray<UPrimitiveComponent*>
		constexpr auto ActiveGizmos = 0x68; // TArray<UInteractiveGizmo*>
		constexpr auto AxisYSource = 0x90; // UGizmoComponentAxisSource*
		constexpr auto AxisZSource = 0x98; // UGizmoComponentAxisSource*
	}

	namespace n_UInterpTrackInstFloatProp {
		constexpr auto ResetFloat = 0x58; // float
	}

	namespace n_UNiagaraDataInterfaceTexture {
		constexpr auto Texture = 0x38; // UTexture*
	}

	namespace n_UMaterialExpressionFmod {
		constexpr auto A = 0x40; // FExpressionInput
		constexpr auto B = 0x54; // FExpressionInput
	}

	namespace n_UPawnAction_Repeat {
		constexpr auto ActionToRepeat = 0x90; // UPawnAction*
		constexpr auto RecentActionCopy = 0x98; // UPawnAction*
		constexpr auto ChildFailureHandlingMode = 0xa0; // EPawnActionFailHandling
	}

	namespace n_UMovieSceneTrackInstance {
		constexpr auto AnimatedObject = 0x28; // UObject*
		constexpr auto bIsMasterTrackInstance = 0x30; // bool
		constexpr auto Linker = 0x38; // UMovieSceneEntitySystemLinker*
		constexpr auto Inputs = 0x40; // TArray<FMovieSceneTrackInstanceInput>
	}

	namespace n_UParticleModuleMeshMaterial {
		constexpr auto MeshMaterials = 0x30; // TArray<UMaterialInterface*>
	}

	namespace n_ULightmassPrimitiveSettingsObject {
		constexpr auto LightmassSettings = 0x28; // FLightmassPrimitiveSettings
	}

	namespace n_UInteractiveToolPropertySet {
		constexpr auto CachedProperties = 0x38; // UInteractiveToolPropertySet*
		constexpr auto bIsPropertySetEnabled = 0x40; // bool
	}

	namespace n_AGameSession {
		constexpr auto MaxSpectators = 0x220; // int32_t
		constexpr auto MaxPlayers = 0x224; // int32_t
		constexpr auto MaxPartySize = 0x228; // int32_t
		constexpr auto MaxSplitscreensPerConnection = 0x22c; // char
		constexpr auto bRequiresPushToTalk = 0x22d; // bool
		constexpr auto SessionName = 0x230; // FName
	}

	namespace n_UGraphNodeContextMenuContext {
		constexpr auto Blueprint = 0x28; // UBlueprint*
		constexpr auto Graph = 0x30; // UEdGraph*
		constexpr auto Node = 0x38; // UEdGraphNode*
		constexpr auto bIsDebugging = 0x48; // bool
	}

	namespace n_UMovieSceneSequence {
		constexpr auto CompiledData = 0x50; // UMovieSceneCompiledData*
		constexpr auto DefaultCompletionMode = 0x58; // EMovieSceneCompletionMode
		constexpr auto bParentContextsAreSignificant = 0x59; // bool
		constexpr auto bPlayableDirectly = 0x5a; // bool
		constexpr auto SequenceFlags = 0x5b; // EMovieSceneSequenceFlags
	}

	namespace n_UNavigationSystemConfig {
		constexpr auto NavigationSystemClass = 0x28; // FSoftClassPath
		constexpr auto SupportedAgentsMask = 0x40; // FNavAgentSelector
		constexpr auto DefaultAgentName = 0x44; // FName
		constexpr auto bIsOverriden = 0x4c; // char : 1
	}

	namespace n_UPortalWarsRewardPassWidget {
		constexpr auto EntryWidgetClass = 0x3b8; // UPortalWarsRewardPassEntryWidget*
		constexpr auto EntryWidgetClassOverrides = 0x3c0; // TMap<ECustomizationType, UPortalWarsRewardPassEntryWidget*>
		constexpr auto ItemsPanel = 0x410; // UPortalWarsCustomScrollWidget*
		constexpr auto RewardPassEntries = 0x418; // TArray<FRewardPassEntryData>
		constexpr auto CurrentLevelText = 0x428; // UTextBlock*
	}

	namespace n_UPortalWarsMenuSelectWidget {
		constexpr auto HoveredEntryText = 0x390; // UTextBlock*
		constexpr auto HoveredEntryRoot = 0x398; // UWidget*
		constexpr auto NavPanel = 0x3a8; // UPanelWidget*
	}

	namespace n_APortalWarsOddballHUD {
		constexpr auto BallIndicator = 0x400; // UPortalWarsOddballIndicator*
		constexpr auto BallIndicatorWidgetClass = 0x408; // UPortalWarsIndicatorWidget*
	}

	namespace n_UMovieSceneParticleSection {
		constexpr auto ParticleKeys = 0xe8; // FMovieSceneParticleChannel
	}

	namespace n_URestrictedGameplayTagsList {
		constexpr auto ConfigFileName = 0x28; // FString
		constexpr auto RestrictedGameplayTagList = 0x38; // TArray<FRestrictedGameplayTagTableRow>
	}

	namespace n_UMaterialExpressionLogarithm10 {
		constexpr auto X = 0x40; // FExpressionInput
	}

	namespace n_UBTTask_FindTeabag {
		constexpr auto nearTeaBagRadius = 0x70; // float
	}

	namespace n_UChannel {
		constexpr auto Connection = 0x28; // UNetConnection*
	}

	namespace n_USpringArmComponent {
		constexpr auto TargetArmLength = 0x1f8; // float
		constexpr auto SocketOffset = 0x1fc; // FVector
		constexpr auto TargetOffset = 0x208; // FVector
		constexpr auto ProbeSize = 0x214; // float
		constexpr auto ProbeChannel = 0x218; // ECollisionChannel
		constexpr auto bDoCollisionTest = 0x21c; // char : 1
		constexpr auto bUsePawnControlRotation = 0x21c; // char : 1
		constexpr auto bInheritPitch = 0x21c; // char : 1
		constexpr auto bInheritYaw = 0x21c; // char : 1
		constexpr auto bInheritRoll = 0x21c; // char : 1
		constexpr auto bEnableCameraLag = 0x21c; // char : 1
		constexpr auto bEnableCameraRotationLag = 0x21c; // char : 1
		constexpr auto bUseCameraLagSubstepping = 0x21c; // char : 1
		constexpr auto bDrawDebugLagMarkers = 0x21d; // char : 1
		constexpr auto CameraLagSpeed = 0x220; // float
		constexpr auto CameraRotationLagSpeed = 0x224; // float
		constexpr auto CameraLagMaxTimeStep = 0x228; // float
		constexpr auto CameraLagMaxDistance = 0x22c; // float
	}

	namespace n_UInterpTrackFloatBase {
		constexpr auto FloatTrack = 0x70; // FInterpCurveFloat
		constexpr auto CurveTension = 0x88; // float
	}

	namespace n_UMaterialExpressionBreakMaterialAttributes {
		constexpr auto MaterialAttributes = 0x40; // FMaterialAttributesInput
	}

	namespace n_UPlayerInput {
		constexpr auto DebugExecBindings = 0x120; // TArray<FKeyBind>
		constexpr auto InvertedAxis = 0x160; // TArray<FName>
	}

	namespace n_UMaterialExpressionIf {
		constexpr auto A = 0x40; // FExpressionInput
		constexpr auto B = 0x54; // FExpressionInput
		constexpr auto AGreaterThanB = 0x68; // FExpressionInput
		constexpr auto AEqualsB = 0x7c; // FExpressionInput
		constexpr auto ALessThanB = 0x90; // FExpressionInput
		constexpr auto EqualsThreshold = 0xa4; // float
		constexpr auto ConstB = 0xa8; // float
		constexpr auto ConstAEqualsB = 0xac; // float
	}

	namespace n_APlasmaRifle {
		constexpr auto currentHeatLevel = 0x6e0; // float
		constexpr auto heatIncreasePerShot = 0x6e4; // float
		constexpr auto coolDownRate = 0x6e8; // float
		constexpr auto totalHeatCapacity = 0x6ec; // float
		constexpr auto OverHeatChargeEvent = 0x6f0; // UAkAudioEvent*
		constexpr auto OverHeatChargeStopEvent = 0x6f8; // UAkAudioEvent*
	}

	namespace n_UMovieScene3DTransformSection {
		constexpr auto TransformMask = 0xf0; // FMovieSceneTransformMask
		constexpr auto Translation = 0xf8; // FMovieSceneFloatChannel [0x3]
		constexpr auto Rotation = 0x2d8; // FMovieSceneFloatChannel [0x3]
		constexpr auto Scale = 0x4b8; // FMovieSceneFloatChannel [0x3]
		constexpr auto ManualWeight = 0x698; // FMovieSceneFloatChannel
		constexpr auto bUseQuaternionInterpolation = 0x738; // bool
	}

	namespace n_UVariantObjectBinding {
		constexpr auto CachedActorLabel = 0x28; // FString
		constexpr auto ObjectPtr = 0x38; // FSoftObjectPath
		constexpr auto LazyObjectPtr = 0x50; // LazyObjectProperty
		constexpr auto CapturedProperties = 0x70; // TArray<UPropertyValue*>
		constexpr auto FunctionCallers = 0x80; // TArray<FFunctionCaller>
	}

	namespace n_UMaterialExpressionRuntimeVirtualTextureSample {
		constexpr auto Coordinates = 0x40; // FExpressionInput
		constexpr auto WorldPosition = 0x54; // FExpressionInput
		constexpr auto MipValue = 0x68; // FExpressionInput
		constexpr auto VirtualTexture = 0x80; // URuntimeVirtualTexture*
		constexpr auto MaterialType = 0x88; // ERuntimeVirtualTextureMaterialType
		constexpr auto bSinglePhysicalSpace = 0x89; // bool
		constexpr auto bAdaptive = 0x8a; // bool
		constexpr auto MipValueMode = 0x8b; // ERuntimeVirtualTextureMipValueMode
		constexpr auto TextureAddressMode = 0x8c; // ERuntimeVirtualTextureTextureAddressMode
	}

	namespace n_UPortalWarsStreamStatusWidget {
		constexpr auto RootWidget = 0x2a8; // UWidget*
		constexpr auto StreamImage = 0x2b0; // UImage*
		constexpr auto ActionButton = 0x2b8; // UPortalWarsButtonWidget*
	}

	namespace n_UAISenseConfig_Blueprint {
		constexpr auto Implementation = 0x48; // UAISense_Blueprint*
	}

	namespace n_APostProcessVolume {
		constexpr auto Settings = 0x260; // FPostProcessSettings
		constexpr auto Priority = 0x7b0; // float
		constexpr auto BlendRadius = 0x7b4; // float
		constexpr auto BlendWeight = 0x7b8; // float
		constexpr auto bEnabled = 0x7bc; // char : 1
		constexpr auto bUnbound = 0x7bc; // char : 1
	}

	namespace n_UPortalWarsPlayerCardWidget {
		constexpr auto AlloyText = 0x360; // UTextBlock*
		constexpr auto CurrencyText = 0x368; // UTextBlock*
		constexpr auto StreakText = 0x370; // UTextBlock*
		constexpr auto StreakRepairIndicator = 0x378; // UWidget*
		constexpr auto NotificationIndicator = 0x380; // UWidget*
		constexpr auto SettingsButton = 0x388; // UPortalWarsButtonWidget*
		constexpr auto NotificationButton = 0x390; // UPortalWarsButtonWidget*
		constexpr auto CurrencyButton = 0x398; // UButton*
		constexpr auto LockerButton = 0x3a0; // UButton*
		constexpr auto CareerButton = 0x3a8; // UButton*
		constexpr auto PlayStreakButton = 0x3b0; // UButton*
	}

	namespace n_USignificanceManager {
		constexpr auto SignificanceManagerClassName = 0x108; // FSoftClassPath
	}

	namespace n_UPortalWarsFileOptionsDialogWidget {
		constexpr auto SaveButton = 0x390; // UPortalWarsButtonWidget*
		constexpr auto SaveAsButton = 0x398; // UPortalWarsButtonWidget*
		constexpr auto RenameButton = 0x3a0; // UPortalWarsButtonWidget*
		constexpr auto DeleteButton = 0x3a8; // UPortalWarsButtonWidget*
		constexpr auto ManageText = 0x3b0; // UTextBlock*
		constexpr auto SaveAsInput = 0x3b8; // UPortalWarsTextInputWidget*
		constexpr auto SaveAsText = 0x3c0; // UTextBlock*
		constexpr auto RenameInput = 0x3c8; // UPortalWarsTextInputWidget*
		constexpr auto RenameText = 0x3d0; // UTextBlock*
		constexpr auto DeleteText = 0x3d8; // UTextBlock*
		constexpr auto AcceptButton = 0x3e0; // UPortalWarsButtonWidget*
	}

	namespace n_UEnvQueryTest {
		constexpr auto TestOrder = 0x30; // int32_t
		constexpr auto TestPurpose = 0x34; // EEnvTestPurpose
		constexpr auto TestComment = 0x38; // FString
		constexpr auto MultipleContextFilterOp = 0x48; // EEnvTestFilterOperator
		constexpr auto MultipleContextScoreOp = 0x49; // EEnvTestScoreOperator
		constexpr auto FilterType = 0x4a; // EEnvTestFilterType
		constexpr auto BoolValue = 0x50; // FAIDataProviderBoolValue
		constexpr auto FloatValueMin = 0x88; // FAIDataProviderFloatValue
		constexpr auto FloatValueMax = 0xc0; // FAIDataProviderFloatValue
		constexpr auto ScoringEquation = 0xf9; // EEnvTestScoreEquation
		constexpr auto ClampMinType = 0xfa; // EEnvQueryTestClamping
		constexpr auto ClampMaxType = 0xfb; // EEnvQueryTestClamping
		constexpr auto NormalizationType = 0xfc; // EEQSNormalizationType
		constexpr auto ScoreClampMin = 0x100; // FAIDataProviderFloatValue
		constexpr auto ScoreClampMax = 0x138; // FAIDataProviderFloatValue
		constexpr auto ScoringFactor = 0x170; // FAIDataProviderFloatValue
		constexpr auto ReferenceValue = 0x1a8; // FAIDataProviderFloatValue
		constexpr auto bDefineReferenceValue = 0x1e0; // bool
		constexpr auto bWorkOnFloatValues = 0x1f0; // char : 1
	}

	namespace n_UWrapBox {
		constexpr auto InnerSlotPadding = 0x120; // FVector2D
		constexpr auto WrapWidth = 0x128; // float
		constexpr auto WrapSize = 0x12c; // float
		constexpr auto bExplicitWrapWidth = 0x130; // bool
		constexpr auto bExplicitWrapSize = 0x131; // bool
		constexpr auto Orientation = 0x132; // EOrientation
	}

	namespace n_UMaterialExpressionReflectionVectorWS {
		constexpr auto CustomWorldNormal = 0x40; // FExpressionInput
		constexpr auto bNormalizeCustomWorldNormal = 0x54; // char : 1
	}

	namespace n_UEnvelopeFollowerListener {
		constexpr auto OnEnvelopeFollowerUpdate = 0xb0; // FMulticastInlineDelegate
	}

	namespace n_UPortalWarsItemShopSectionWidget {
		constexpr auto TitleText = 0x2a8; // UTextBlock*
		constexpr auto ExpiresInText = 0x2b0; // UTextBlock*
		constexpr auto OnItemEntrySelected = 0x2b8; // FMulticastInlineDelegate
		constexpr auto ItemShopEntryWidgetClasses = 0x2c8; // TMap<EStoreSectionType, UPortalWarsItemShopEntry*>
		constexpr auto ItemsPanel = 0x318; // UWrapBox*
		constexpr auto LeftSeparator = 0x320; // UWidget*
		constexpr auto RightSeparator = 0x328; // UWidget*
	}

	namespace n_UBTTask_ChoosePortal {
		constexpr auto PortalTraceRadius = 0x70; // float
	}

	namespace n_UParticleModuleTrailSource {
		constexpr auto SourceMethod = 0x30; // ETrail2SourceMethod
		constexpr auto SourceName = 0x34; // FName
		constexpr auto SourceStrength = 0x40; // FRawDistributionFloat
		constexpr auto bLockSourceStength = 0x70; // char : 1
		constexpr auto SourceOffsetCount = 0x74; // int32_t
		constexpr auto SourceOffsetDefaults = 0x78; // TArray<FVector>
		constexpr auto SelectionMethod = 0x88; // EParticleSourceSelectionMethod
		constexpr auto bInheritRotation = 0x8c; // char : 1
	}

	namespace n_APortalWarsDomination {
		constexpr auto HillTeamScore = 0x6b8; // int32_t
		constexpr auto HillCaptureScore = 0x6bc; // int32_t
		constexpr auto HillNeutralizeScore = 0x6c0; // int32_t
	}

	namespace n_UMovieSceneCompiledDataManager {
		constexpr auto Hierarchies = 0xd8; // TMap<int32_t, FMovieSceneSequenceHierarchy>
		constexpr auto TrackTemplates = 0x128; // TMap<int32_t, FMovieSceneEvaluationTemplate>
		constexpr auto TrackTemplateFields = 0x178; // TMap<int32_t, FMovieSceneEvaluationField>
		constexpr auto EntityComponentFields = 0x1c8; // TMap<int32_t, FMovieSceneEntityComponentField>
	}

	namespace n_UPortalWarsStatsPlaylistWidget {
		constexpr auto TotalStats = 0x338; // UPortalWarsStatsEntryWidget*
		constexpr auto PlayerNameText = 0x340; // UTextBlock*
		constexpr auto AvatarImage = 0x348; // UImage*
		constexpr auto RankNameText = 0x350; // UTextBlock*
		constexpr auto RankIcon = 0x358; // UImage*
		constexpr auto RankXPText = 0x360; // UTextBlock*
		constexpr auto RankRoot = 0x368; // UWidget*
		constexpr auto PlaylistText = 0x370; // UTextBlock*
		constexpr auto ChangePlaylistButton = 0x378; // UPortalWarsButtonWidget*
		constexpr auto PlaylistComboBox = 0x380; // UComboBoxString*
		constexpr auto PlaylistType = 0x438; // EPlaylistType
	}

	namespace n_UMovieSceneAkTrack {
		constexpr auto Sections = 0x78; // TArray<UMovieSceneSection*>
		constexpr auto bIsAMasterTrack = 0x88; // char : 1
	}

	namespace n_UAISystemBase {
		constexpr auto AISystemClassName = 0x28; // FSoftClassPath
		constexpr auto AISystemModuleName = 0x40; // FName
		constexpr auto bInstantiateAISystemOnClient = 0x50; // bool
	}

	namespace n_UMonoWaveTableSynthPreset {
		constexpr auto PresetName = 0x28; // FString
		constexpr auto bLockKeyframesToGridBool = 0x38; // char : 1
		constexpr auto LockKeyframesToGrid = 0x3c; // int32_t
		constexpr auto WaveTableResolution = 0x40; // int32_t
		constexpr auto WaveTable = 0x48; // TArray<FRuntimeFloatCurve>
		constexpr auto bNormalizeWaveTables = 0x58; // char : 1
	}

	namespace n_UBTTask_MakeNoise {
		constexpr auto Loudnes = 0x70; // float
	}

	namespace n_UEnvQueryGenerator_Donut {
		constexpr auto InnerRadius = 0xb8; // FAIDataProviderFloatValue
		constexpr auto OuterRadius = 0xf0; // FAIDataProviderFloatValue
		constexpr auto NumberOfRings = 0x128; // FAIDataProviderIntValue
		constexpr auto PointsPerRing = 0x160; // FAIDataProviderIntValue
		constexpr auto ArcDirection = 0x198; // FEnvDirection
		constexpr auto ArcAngle = 0x1b8; // FAIDataProviderFloatValue
		constexpr auto bUseSpiralPattern = 0x1f0; // bool
		constexpr auto Center = 0x1f8; // UEnvQueryContext*
		constexpr auto bDefineArc = 0x200; // char : 1
	}

	namespace n_UBTDecorator_DoesPathExist {
		constexpr auto BlackboardKeyA = 0x68; // FBlackboardKeySelector
		constexpr auto BlackboardKeyB = 0x90; // FBlackboardKeySelector
		constexpr auto bUseSelf = 0xb8; // char : 1
		constexpr auto PathQueryType = 0xbc; // EPathExistanceQueryType
		constexpr auto FilterClass = 0xc0; // UNavigationQueryFilter*
	}

	namespace n_ANiagaraPerfBaselineActor {
		constexpr auto Controller = 0x220; // UNiagaraBaselineController*
		constexpr auto Label = 0x228; // UTextRenderComponent*
	}

	namespace n_UARImageComponent {
		constexpr auto ReplicatedPayload = 0x280; // FARImageUpdatePayload
	}

	namespace n_UFoliageInstancedStaticMeshComponent {
		constexpr auto OnInstanceTakePointDamage = 0x678; // FMulticastInlineDelegate
		constexpr auto OnInstanceTakeRadialDamage = 0x688; // FMulticastInlineDelegate
		constexpr auto GenerationGuid = 0x698; // FGuid
	}

	namespace n_UVectorFieldComponent {
		constexpr auto VectorField = 0x450; // UVectorField*
		constexpr auto Intensity = 0x458; // float
		constexpr auto Tightness = 0x45c; // float
		constexpr auto bPreviewVectorField = 0x460; // char : 1
	}

	namespace n_UPortalWarsCheckBox {
		constexpr auto CheckedEvent = 0x770; // UAkAudioEvent*
		constexpr auto UncheckedEvent = 0x778; // UAkAudioEvent*
		constexpr auto HoveredEvent = 0x780; // UAkAudioEvent*
	}

	namespace n_ULightComponentBase {
		constexpr auto LightGuid = 0x1f8; // FGuid
		constexpr auto Brightness = 0x208; // float
		constexpr auto Intensity = 0x20c; // float
		constexpr auto LightColor = 0x210; // FColor
		constexpr auto bAffectsWorld = 0x214; // char : 1
		constexpr auto CastShadows = 0x214; // char : 1
		constexpr auto CastStaticShadows = 0x214; // char : 1
		constexpr auto CastDynamicShadows = 0x214; // char : 1
		constexpr auto bAffectTranslucentLighting = 0x214; // char : 1
		constexpr auto bTransmission = 0x214; // char : 1
		constexpr auto bCastVolumetricShadow = 0x214; // char : 1
		constexpr auto bCastDeepShadow = 0x214; // char : 1
		constexpr auto bCastRaytracedShadow = 0x215; // char : 1
		constexpr auto bAffectReflection = 0x215; // char : 1
		constexpr auto bAffectGlobalIllumination = 0x215; // char : 1
		constexpr auto DeepShadowLayerDistribution = 0x218; // float
		constexpr auto IndirectLightingIntensity = 0x21c; // float
		constexpr auto VolumetricScatteringIntensity = 0x220; // float
		constexpr auto SamplesPerPixel = 0x224; // int32_t
	}

	namespace n_UWidgetSwitcher {
		constexpr auto ActiveWidgetIndex = 0x120; // int32_t
	}

	namespace n_UARTrackedPose {
		constexpr auto TrackedPose = 0xf8; // FARPose3D
	}

	namespace n_UInheritableComponentHandler {
		constexpr auto Records = 0x28; // TArray<FComponentOverrideRecord>
		constexpr auto UnnecessaryComponents = 0x38; // TArray<UActorComponent*>
	}

	namespace n_UMultiLineEditableTextBox {
		constexpr auto Text = 0x128; // FText
		constexpr auto HintText = 0x140; // FText
		constexpr auto HintTextDelegate = 0x158; // FDelegate
		constexpr auto WidgetStyle = 0x168; // FEditableTextBoxStyle
		constexpr auto TextStyle = 0x960; // FTextBlockStyle
		constexpr auto bIsReadOnly = 0xbd0; // bool
		constexpr auto AllowContextMenu = 0xbd1; // bool
		constexpr auto VirtualKeyboardOptions = 0xbd2; // FVirtualKeyboardOptions
		constexpr auto VirtualKeyboardDismissAction = 0xbd3; // EVirtualKeyboardDismissAction
		constexpr auto Style = 0xbd8; // USlateWidgetStyleAsset*
		constexpr auto Font = 0xbe0; // FSlateFontInfo
		constexpr auto ForegroundColor = 0xc38; // FLinearColor
		constexpr auto BackgroundColor = 0xc48; // FLinearColor
		constexpr auto ReadOnlyForegroundColor = 0xc58; // FLinearColor
		constexpr auto OnTextChanged = 0xc68; // FMulticastInlineDelegate
		constexpr auto OnTextCommitted = 0xc78; // FMulticastInlineDelegate
	}

	namespace n_UNiagaraDataInterfaceVolumeTexture {
		constexpr auto Texture = 0x38; // UVolumeTexture*
	}

	namespace n_UAnimBlueprintGeneratedClass {
		constexpr auto BakedStateMachines = 0x330; // TArray<FBakedAnimationStateMachine>
		constexpr auto TargetSkeleton = 0x340; // USkeleton*
		constexpr auto AnimNotifies = 0x348; // TArray<FAnimNotifyEvent>
		constexpr auto OrderedSavedPoseIndicesMap = 0x358; // TMap<FName, FCachedPoseIndices>
		constexpr auto SyncGroupNames = 0x428; // TArray<FName>
		constexpr auto EvaluateGraphExposedInputs = 0x438; // TArray<FExposedValueHandler>
		constexpr auto GraphAssetPlayerInformation = 0x448; // TMap<FName, FGraphAssetPlayerInformation>
		constexpr auto GraphBlendOptions = 0x498; // TMap<FName, FAnimGraphBlendOptions>
		constexpr auto PropertyAccessLibrary = 0x4e8; // FPropertyAccessLibrary
	}

	namespace n_UWidgetAnimationPlayCallbackProxy {
		constexpr auto Finished = 0x28; // FMulticastInlineDelegate
	}

	namespace n_UInterpTrackInstColorProp {
		constexpr auto ResetColor = 0x58; // FColor
	}

	namespace n_UDatasmithCineCameraComponentTemplate {
		constexpr auto FilmbackSettings = 0x30; // FDatasmithCameraFilmbackSettingsTemplate
		constexpr auto LensSettings = 0x38; // FDatasmithCameraLensSettingsTemplate
		constexpr auto FocusSettings = 0x3c; // FDatasmithCameraFocusSettingsTemplate
		constexpr auto CurrentFocalLength = 0x44; // float
		constexpr auto CurrentAperture = 0x48; // float
		constexpr auto PostProcessSettings = 0x50; // FDatasmithPostProcessSettingsTemplate
	}

	namespace n_UTemplateSequence {
		constexpr auto MovieScene = 0x60; // UMovieScene*
		constexpr auto BoundActorClass = 0x68; // TSoftClassPtr<UObject>
		constexpr auto BoundPreviewActor = 0x90; // TSoftObjectPtr<AActor>
		constexpr auto BoundActorComponents = 0xb8; // TMap<FGuid, FName>
	}

	namespace n_UPortalWarsWidgetSwitcher {
		constexpr auto Widgets = 0x148; // TArray<UUserWidget*>
	}

	namespace n_UMaterialExpressionLandscapeLayerBlend {
		constexpr auto Layers = 0x40; // TArray<FLayerBlendInput>
		constexpr auto ExpressionGUID = 0x50; // FGuid
	}

	namespace n_UWorld {
		constexpr auto PersistentLevel = 0x30; // ULevel*
		constexpr auto NetDriver = 0x38; // UNetDriver*
		constexpr auto LineBatcher = 0x40; // ULineBatchComponent*
		constexpr auto PersistentLineBatcher = 0x48; // ULineBatchComponent*
		constexpr auto ForegroundLineBatcher = 0x50; // ULineBatchComponent*
		constexpr auto NetworkManager = 0x58; // AGameNetworkManager*
		constexpr auto PhysicsCollisionHandler = 0x60; // UPhysicsCollisionHandler*
		constexpr auto ExtraReferencedObjects = 0x68; // TArray<UObject*>
		constexpr auto PerModuleDataObjects = 0x78; // TArray<UObject*>
		constexpr auto StreamingLevels = 0x88; // TArray<ULevelStreaming*>
		constexpr auto StreamingLevelsToConsider = 0x98; // FStreamingLevelsToConsider
		constexpr auto StreamingLevelsPrefix = 0xc0; // FString
		constexpr auto CurrentLevelPendingVisibility = 0xd0; // ULevel*
		constexpr auto CurrentLevelPendingInvisibility = 0xd8; // ULevel*
		constexpr auto DemoNetDriver = 0xe0; // UDemoNetDriver*
		constexpr auto MyParticleEventManager = 0xe8; // AParticleEventManager*
		constexpr auto DefaultPhysicsVolume = 0xf0; // APhysicsVolume*
		constexpr auto bAreConstraintsDirty = 0x10e; // char : 1
		constexpr auto NavigationSystem = 0x110; // UNavigationSystemBase*
		constexpr auto AuthorityGameMode = 0x118; // AGameModeBase*
		constexpr auto GameState = 0x120; // AGameStateBase*
		constexpr auto AISystem = 0x128; // UAISystemBase*
		constexpr auto AvoidanceManager = 0x130; // UAvoidanceManager*
		constexpr auto Levels = 0x138; // TArray<ULevel*>
		constexpr auto LevelCollections = 0x148; // TArray<FLevelCollection>
		constexpr auto OwningGameInstance = 0x180; // UGameInstance*
		constexpr auto ParameterCollectionInstances = 0x188; // TArray<UMaterialParameterCollectionInstance*>
		constexpr auto CanvasForRenderingToTarget = 0x198; // UCanvas*
		constexpr auto CanvasForDrawMaterialToRenderTarget = 0x1a0; // UCanvas*
		constexpr auto PhysicsField = 0x1f8; // UPhysicsFieldComponent*
		constexpr auto ComponentsThatNeedPreEndOfFrameSync = 0x200; // TSet<UActorComponent*>
		constexpr auto ComponentsThatNeedEndOfFrameUpdate = 0x250; // TArray<UActorComponent*>
		constexpr auto ComponentsThatNeedEndOfFrameUpdate_OnGameThread = 0x260; // TArray<UActorComponent*>
		constexpr auto WorldComposition = 0x5e0; // UWorldComposition*
		constexpr auto PSCPool = 0x678; // FWorldPSCPool
	}

	namespace n_UPortalWarsInspectWidget {
		constexpr auto PreviewDelayTime = 0x340; // float
		constexpr auto InspectItemWidgetClass = 0x350; // UPortalWarsInspectItemWidget*
		constexpr auto InspectPanel = 0x358; // UCanvasPanel*
		constexpr auto DisplayNameText = 0x360; // UTextBlock*
		constexpr auto RarityText = 0x368; // UTextBlock*
		constexpr auto RarityIcon = 0x370; // UImage*
		constexpr auto ItemInfoRoot = 0x378; // UWidget*
		constexpr auto EquipButton = 0x380; // UPortalWarsButtonWidget*
		constexpr auto EquipSwitcher = 0x388; // UWidgetSwitcher*
		constexpr auto GameStateRef = 0x3b0; // AMainMenuGameState*
	}

	namespace n_UARMeshComponent {
		constexpr auto ReplicatedPayload = 0x280; // FARMeshUpdatePayload
	}

	namespace n_UBTTask_Strafe {
		constexpr auto IdealRange = 0x70; // float
		constexpr auto MinStrafeDistance = 0x74; // float
		constexpr auto MaxStrafeDistance = 0x78; // float
		constexpr auto RandomConeAngle = 0x7c; // float
	}

	namespace n_AVectorFieldVolume {
		constexpr auto VectorFieldComponent = 0x220; // UVectorFieldComponent*
	}

	namespace n_UMaterialExpressionCrossProduct {
		constexpr auto A = 0x40; // FExpressionInput
		constexpr auto B = 0x54; // FExpressionInput
	}

	namespace n_UPortalWarsInspectItemWidget {
		constexpr auto PreviewImage = 0x260; // UImage*
		constexpr auto PreviewMaterialBase = 0x268; // UMaterialInterface*
		constexpr auto PlayerEntry = 0x270; // UPortalWarsPlayerEntryWidget*
		constexpr auto InspectSwitcher = 0x278; // UWidgetSwitcher*
		constexpr auto FadeInAnimation = 0x280; // UWidgetAnimation*
		constexpr auto FadeOutAnimation = 0x288; // UWidgetAnimation*
	}

	namespace n_UPortalWarsGameplaySettingsWidget {
		constexpr auto Blood = 0x358; // UPortalWarsCheckBoxWidget*
		constexpr auto Killcam = 0x360; // UPortalWarsDropdownWidget*
		constexpr auto Clamber = 0x368; // UPortalWarsDropdownWidget*
		constexpr auto InputDevice = 0x370; // UPortalWarsDropdownWidget*
		constexpr auto EnemyColor = 0x378; // UPortalWarsColorPickerWidget*
		constexpr auto EnemyOutlineColor = 0x380; // UPortalWarsColorPickerWidget*
		constexpr auto AllyOutlineColor = 0x388; // UPortalWarsColorPickerWidget*
		constexpr auto AllyColorThroughWalls = 0x390; // UPortalWarsColorPickerWidget*
	}

	namespace n_UMaterialExpressionClearCoatNormalCustomOutput {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UGizmoPlaneScaleParameterSource {
		constexpr auto AxisSource = 0x90; // TScriptInterface<IGizmoAxisSource>
		constexpr auto TransformSource = 0xa0; // TScriptInterface<IGizmoTransformSource>
		constexpr auto ScaleMultiplier = 0xb0; // float
		constexpr auto Parameter = 0xb4; // FVector2D
		constexpr auto LastChange = 0xbc; // FGizmoVec2ParameterChange
		constexpr auto CurScaleOrigin = 0xcc; // FVector
		constexpr auto CurScaleNormal = 0xd8; // FVector
		constexpr auto CurScaleAxisX = 0xe4; // FVector
		constexpr auto CurScaleAxisY = 0xf0; // FVector
		constexpr auto InitialTransform = 0x100; // FTransform
	}

	namespace n_UParticleModuleAttractorParticle {
		constexpr auto EmitterName = 0x30; // FName
		constexpr auto Range = 0x38; // FRawDistributionFloat
		constexpr auto bStrengthByDistance = 0x68; // char : 1
		constexpr auto Strength = 0x70; // FRawDistributionFloat
		constexpr auto bAffectBaseVelocity = 0xa0; // char : 1
		constexpr auto SelectionMethod = 0xa4; // EAttractorParticleSelectionMethod
		constexpr auto bRenewSource = 0xa8; // char : 1
		constexpr auto bInheritSourceVel = 0xa8; // char : 1
		constexpr auto LastSelIndex = 0xac; // int32_t
	}

	namespace n_AOddballItemPickup {
		constexpr auto SphereRadius = 0x2c4; // float
		constexpr auto OddballGameState = 0x2c8; // APortalWarsOddballGameState*
	}

	namespace n_UParticleModuleColor {
		constexpr auto StartColor = 0x30; // FRawDistributionVector
		constexpr auto StartAlpha = 0x78; // FRawDistributionFloat
		constexpr auto bClampAlpha = 0xa8; // char : 1
	}

	namespace n_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy {
		constexpr auto OnSuccess = 0x50; // FMulticastInlineDelegate
		constexpr auto OnFailed = 0x60; // FMulticastInlineDelegate
	}

	namespace n_UBoxReflectionCaptureComponent {
		constexpr auto BoxTransitionDistance = 0x270; // float
		constexpr auto PreviewInfluenceBox = 0x278; // UBoxComponent*
		constexpr auto PreviewCaptureBox = 0x280; // UBoxComponent*
	}

	namespace n_UDatasmithDeltaGenSceneImportData {
		constexpr auto bMergeNodes = 0x48; // bool
		constexpr auto bOptimizeDuplicatedNodes = 0x49; // bool
		constexpr auto bRemoveInvisibleNodes = 0x4a; // bool
		constexpr auto bSimplifyNodeHierarchy = 0x4b; // bool
		constexpr auto bImportVar = 0x4c; // bool
		constexpr auto VarPath = 0x50; // FString
		constexpr auto bImportPos = 0x60; // bool
		constexpr auto PosPath = 0x68; // FString
		constexpr auto bImportTml = 0x78; // bool
		constexpr auto TmlPath = 0x80; // FString
	}

	namespace n_UDatasmithGLTFSceneImportData {
		constexpr auto Generator = 0x28; // FString
		constexpr auto Version = 0x38; // float
		constexpr auto Author = 0x40; // FString
		constexpr auto License = 0x50; // FString
		constexpr auto Source = 0x60; // FString
	}

	namespace n_UEnvQueryTest_PathfindingBatch {
		constexpr auto ScanRangeMultiplier = 0x280; // FAIDataProviderFloatValue
	}

	namespace n_ASwitchActor {
		constexpr auto SceneComponent = 0x238; // USceneComponent*
		constexpr auto LastSelectedOption = 0x240; // int32_t
	}

	namespace n_UUniformScalar {
		constexpr auto Magnitude = 0xb0; // float
	}

	namespace n_UCameraAnim {
		constexpr auto CameraInterpGroup = 0x28; // UInterpGroup*
		constexpr auto AnimLength = 0x30; // float
		constexpr auto BoundingBox = 0x34; // FBox
		constexpr auto bRelativeToInitialTransform = 0x50; // char : 1
		constexpr auto bRelativeToInitialFOV = 0x50; // char : 1
		constexpr auto BaseFOV = 0x54; // float
		constexpr auto BasePostProcessSettings = 0x60; // FPostProcessSettings
		constexpr auto BasePostProcessBlendWeight = 0x5b0; // float
	}

	namespace n_UARCandidateImage {
		constexpr auto CandidateTexture = 0x30; // UTexture2D*
		constexpr auto FriendlyName = 0x38; // FString
		constexpr auto Width = 0x48; // float
		constexpr auto Height = 0x4c; // float
		constexpr auto Orientation = 0x50; // EARCandidateImageOrientation
	}

	namespace n_UPortalWarsPlayStreakRewardWidget {
		constexpr auto StreakIcon = 0x728; // UPortalWarsProgressionIconWidget*
		constexpr auto SeparatorImage = 0x730; // UImage*
		constexpr auto SeparatorImageComplete = 0x738; // UImage*
		constexpr auto SeparatorImageMissed = 0x740; // UImage*
		constexpr auto RewardPanel = 0x748; // UWidget*
		constexpr auto RewardBackgroundSwitcher = 0x750; // UWidgetSwitcher*
		constexpr auto TodayPanel = 0x758; // UWidget*
	}

	namespace n_UMaterialExpressionViewProperty {
		constexpr auto Property = 0x40; // EMaterialExposedViewProperty
	}

	namespace n_UInputAxisDelegateBinding {
		constexpr auto InputAxisDelegateBindings = 0x28; // TArray<FBlueprintInputAxisDelegateBinding>
	}

	namespace n_UBlendProfile {
		constexpr auto OwningSkeleton = 0x30; // USkeleton*
		constexpr auto ProfileEntries = 0x38; // TArray<FBlendProfileBoneEntry>
	}

	namespace n_ULevelCapture {
		constexpr auto bAutoStartCapture = 0x220; // bool
		constexpr auto PrerequisiteActorId = 0x22c; // FGuid
	}

	namespace n_UCheatManager {
		constexpr auto DebugCameraControllerRef = 0x28; // ADebugCameraController*
		constexpr auto DebugCameraControllerClass = 0x30; // ADebugCameraController*
		constexpr auto CheatManagerExtensions = 0x78; // TArray<UCheatManagerExtension*>
	}

	namespace n_UMaterialExpressionLandscapeVisibilityMask {
		constexpr auto ExpressionGUID = 0x40; // FGuid
	}

	namespace n_UNiagaraDataInterfaceRWBase {
		constexpr auto OutputShaderStages = 0x38; // TSet<int32_t>
		constexpr auto IterationShaderStages = 0x88; // TSet<int32_t>
	}

	namespace n_ULightmappedSurfaceCollection {
		constexpr auto SourceModel = 0x28; // UModel*
		constexpr auto Surfaces = 0x30; // TArray<int32_t>
	}

	namespace n_USoundNodeMixer {
		constexpr auto InputVolume = 0x48; // TArray<float>
	}

	namespace n_UEnvQueryGenerator_Composite {
		constexpr auto Generators = 0x50; // TArray<UEnvQueryGenerator*>
		constexpr auto bAllowDifferentItemTypes = 0x60; // char : 1
		constexpr auto bHasMatchingItemType = 0x60; // char : 1
		constexpr auto ForcedItemType = 0x68; // UEnvQueryItemType*
	}

	namespace n_UNavigationPath {
		constexpr auto PathUpdatedNotifier = 0x28; // FMulticastInlineDelegate
		constexpr auto PathPoints = 0x38; // TArray<FVector>
		constexpr auto RecalculateOnInvalidation = 0x48; // ENavigationOptionFlag
	}

	namespace n_UPortalWarsTxnDialogWidget {
		constexpr auto TransactionSwitcher = 0x3a0; // UWidgetSwitcher*
		constexpr auto ConfirmButton = 0x3a8; // UPortalWarsButtonWidget*
		constexpr auto ProcessingText = 0x3b0; // UTextBlock*
		constexpr auto SuccessText = 0x3b8; // UTextBlock*
	}

	namespace n_ANiagaraActor {
		constexpr auto NiagaraComponent = 0x220; // UNiagaraComponent*
		constexpr auto bDestroyOnSystemFinish = 0x228; // char : 1
	}

	namespace n_AMagicLeapSharedWorldGameMode {
		constexpr auto SharedWorldData = 0x308; // FMagicLeapSharedWorldSharedData
		constexpr auto OnNewLocalDataFromClients = 0x318; // FMulticastInlineDelegate
		constexpr auto PinSelectionConfidenceThreshold = 0x328; // float
		constexpr auto ChosenOne = 0x3d0; // AMagicLeapSharedWorldPlayerController*
	}

	namespace n_APortalWarsGameState {
		constexpr auto AnnouncerInterface = 0x6d0; // UAnnouncerInterface*
		constexpr auto AntiCheat = 0x6d8; // UPortalWarsCustomAntiCheat*
		constexpr auto bTeamGame = 0x6f8; // char : 1
		constexpr auto TeamScores = 0x700; // TArray<int32_t>
		constexpr auto Pickups = 0x780; // TArray<APortalWarsPickup*>
		constexpr auto OOBVolumes = 0x790; // TArray<AOutOfBoundsVolume*>
		constexpr auto PlayAreaVolumes = 0x7a0; // TArray<APlayAreaVolume*>
		constexpr auto Crowd = 0x7b0; // APortalWarsCrowd*
		constexpr auto Portals = 0x7b8; // TArray<APortal*>
	}

	namespace n_ULevelSequenceAnimSequenceLink {
		constexpr auto AnimSequenceLinks = 0x28; // TArray<FLevelSequenceAnimSequenceLinkItem>
	}

	namespace n_UMovieSceneCapture {
		constexpr auto ImageCaptureProtocolType = 0x38; // FSoftClassPath
		constexpr auto AudioCaptureProtocolType = 0x50; // FSoftClassPath
		constexpr auto ImageCaptureProtocol = 0x68; // UMovieSceneImageCaptureProtocolBase*
		constexpr auto AudioCaptureProtocol = 0x70; // UMovieSceneAudioCaptureProtocolBase*
		constexpr auto Settings = 0x78; // FMovieSceneCaptureSettings
		constexpr auto bUseSeparateProcess = 0xe8; // bool
		constexpr auto bCloseEditorWhenCaptureStarts = 0xe9; // bool
		constexpr auto AdditionalCommandLineArguments = 0xf0; // FString
		constexpr auto InheritedCommandLineArguments = 0x100; // FString
	}

	namespace n_UMovieSceneCameraShakeSection {
		constexpr auto ShakeData = 0xe8; // FMovieSceneCameraShakeSectionData
		constexpr auto ShakeClass = 0x108; // UCameraShakeBase*
		constexpr auto PlayScale = 0x110; // float
		constexpr auto PlaySpace = 0x114; // ECameraShakePlaySpace
		constexpr auto UserDefinedPlaySpace = 0x118; // FRotator
	}

	namespace n_USoundCue {
		constexpr auto bPrimeOnLoad = 0x170; // char : 1
		constexpr auto FirstNode = 0x178; // USoundNode*
		constexpr auto VolumeMultiplier = 0x180; // float
		constexpr auto PitchMultiplier = 0x184; // float
		constexpr auto AttenuationOverrides = 0x188; // FSoundAttenuationSettings
		constexpr auto SubtitlePriority = 0x528; // float
		constexpr auto bOverrideAttenuation = 0x530; // char : 1
		constexpr auto bExcludeFromRandomNodeBranchCulling = 0x530; // char : 1
		constexpr auto CookedQualityIndex = 0x534; // int32_t
		constexpr auto bHasPlayWhenSilent = 0x538; // char : 1
	}

	namespace n_UMaterialExpressionArccosine {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UPortalWarsMenuWidget {
		constexpr auto NavBar = 0x2b0; // UPortalWarsNavBarWidget*
		constexpr auto WidgetSwitcher = 0x2b8; // UWidgetSwitcher*
		constexpr auto OnBackButtonClicked = 0x2c0; // FMulticastInlineDelegate
		constexpr auto BackButton = 0x2d0; // UPortalWarsButtonWidget*
		constexpr auto ButtonPanel = 0x2d8; // UWidget*
		constexpr auto ParentWidget = 0x2e0; // UUserWidget*
		constexpr auto FadeInAnimation = 0x300; // UWidgetAnimation*
		constexpr auto bTrackMenuEvents = 0x308; // bool
		constexpr auto MenuInternalName = 0x310; // FString
		constexpr auto MenuOpenedEvent = 0x320; // UAkAudioEvent*
		constexpr auto MenuClosedEvent = 0x328; // UAkAudioEvent*
	}

	namespace n_UPortalWarsKilledByBannerWidget {
		constexpr auto BannerOverlay = 0x260; // UOverlay*
		constexpr auto KilledByText = 0x268; // UTextBlock*
		constexpr auto HealthText = 0x270; // UTextBlock*
		constexpr auto FadeOutAnimation = 0x280; // UWidgetAnimation*
	}

	namespace n_UMovieSceneSubTrack {
		constexpr auto Sections = 0x78; // TArray<UMovieSceneSection*>
	}

	namespace n_ANiagaraPreviewGrid {
		constexpr auto System = 0x220; // UNiagaraSystem*
		constexpr auto ResetMode = 0x228; // ENiagaraPreviewGridResetMode
		constexpr auto PreviewAxisX = 0x230; // UNiagaraPreviewAxis*
		constexpr auto PreviewAxisY = 0x238; // UNiagaraPreviewAxis*
		constexpr auto PreviewClass = 0x240; // ANiagaraPreviewBase*
		constexpr auto SpacingX = 0x248; // float
		constexpr auto SpacingY = 0x24c; // float
		constexpr auto NumX = 0x250; // int32_t
		constexpr auto NumY = 0x254; // int32_t
		constexpr auto PreviewComponents = 0x258; // TArray<UChildActorComponent*>
	}

	namespace n_UDatasmithSceneComponentTemplate {
		constexpr auto RelativeTransform = 0x30; // FTransform
		constexpr auto Mobility = 0x60; // EComponentMobility
		constexpr auto AttachParent = 0x68; // TSoftObjectPtr<USceneComponent>
		constexpr auto bVisible = 0x90; // bool
		constexpr auto Tags = 0x98; // TSet<FName>
	}

	namespace n_UBTDecorator_ConeCheck {
		constexpr auto ConeHalfAngle = 0x68; // float
		constexpr auto ConeOrigin = 0x70; // FBlackboardKeySelector
		constexpr auto ConeDirection = 0x98; // FBlackboardKeySelector
		constexpr auto Observed = 0xc0; // FBlackboardKeySelector
	}

	namespace n_UPortalWarsRoundScoreboardWidget {
		constexpr auto TopNameText = 0x260; // UTextBlock*
		constexpr auto BottomNameText = 0x268; // UTextBlock*
		constexpr auto TopScoreText = 0x270; // UTextBlock*
		constexpr auto BottomScoreText = 0x278; // UTextBlock*
		constexpr auto RoundEntries = 0x280; // UHorizontalBox*
		constexpr auto RoundEntryWidgetClass = 0x288; // UPortalWarsRoundScoreboardEntryWidget*
	}

	namespace n_APortalWarsPostGameState {
		constexpr auto bIsContinuousLobby = 0x840; // bool
	}

	namespace n_ATransformGizmoActor {
		constexpr auto TranslateX = 0x220; // UPrimitiveComponent*
		constexpr auto TranslateY = 0x228; // UPrimitiveComponent*
		constexpr auto TranslateZ = 0x230; // UPrimitiveComponent*
		constexpr auto TranslateYZ = 0x238; // UPrimitiveComponent*
		constexpr auto TranslateXZ = 0x240; // UPrimitiveComponent*
		constexpr auto TranslateXY = 0x248; // UPrimitiveComponent*
		constexpr auto RotateX = 0x250; // UPrimitiveComponent*
		constexpr auto RotateY = 0x258; // UPrimitiveComponent*
		constexpr auto RotateZ = 0x260; // UPrimitiveComponent*
		constexpr auto UniformScale = 0x268; // UPrimitiveComponent*
		constexpr auto AxisScaleX = 0x270; // UPrimitiveComponent*
		constexpr auto AxisScaleY = 0x278; // UPrimitiveComponent*
		constexpr auto AxisScaleZ = 0x280; // UPrimitiveComponent*
		constexpr auto PlaneScaleYZ = 0x288; // UPrimitiveComponent*
		constexpr auto PlaneScaleXZ = 0x290; // UPrimitiveComponent*
		constexpr auto PlaneScaleXY = 0x298; // UPrimitiveComponent*
	}

	namespace n_USkeletalMeshSocket {
		constexpr auto SocketName = 0x28; // FName
		constexpr auto BoneName = 0x30; // FName
		constexpr auto RelativeLocation = 0x38; // FVector
		constexpr auto RelativeRotation = 0x44; // FRotator
		constexpr auto RelativeScale = 0x50; // FVector
		constexpr auto bForceAlwaysAnimated = 0x5c; // bool
	}

	namespace n_UTireConfig {
		constexpr auto FrictionScale = 0x30; // float
		constexpr auto TireFrictionScales = 0x38; // TArray<FTireConfigMaterialFriction>
	}

	namespace n_ALightmassPortal {
		constexpr auto PortalComponent = 0x220; // ULightmassPortalComponent*
	}

	namespace n_UPortalWarsDOMHUDOverlayWidget {
		constexpr auto DOMHillStatus = 0x260; // UPortalWarsDOMHillStatusWidget*
		constexpr auto TopHills = 0x268; // UHorizontalBox*
		constexpr auto BottomHills = 0x270; // UHorizontalBox*
		constexpr auto ControlledHillWidgetClass = 0x278; // UPortalWarsDOMControlledHillWidget*
	}

	namespace n_UScaleBoxSlot {
		constexpr auto Padding = 0x38; // FMargin
		constexpr auto HorizontalAlignment = 0x48; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x49; // EVerticalAlignment
	}

	namespace n_UPortalWarsRankListEntryWidget {
		constexpr auto RankNameText = 0x260; // UTextBlock*
		constexpr auto RankXPText = 0x268; // UTextBlock*
		constexpr auto RankIcon = 0x270; // UImage*
	}

	namespace n_AScoreboardNameComponent {
		constexpr auto Index = 0x288; // char
	}

	namespace n_UMaterialExpressionBlackBody {
		constexpr auto Temp = 0x40; // FExpressionInput
	}

	namespace n_UBTDecorator_TimeLimit {
		constexpr auto TimeLimit = 0x68; // float
	}

	namespace n_UInAppPurchaseRestoreCallbackProxy {
		constexpr auto OnSuccess = 0x28; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x38; // FMulticastInlineDelegate
	}

	namespace n_UPortalWarsPlayerActionsWidget {
		constexpr auto ReportMenu = 0x3b0; // UPortalWarsReportPlayerWidget*
		constexpr auto ReportButton = 0x3b8; // UPortalWarsButtonWidget*
		constexpr auto ViewProfileButton = 0x3c0; // UPortalWarsButtonWidget*
		constexpr auto ResetInviteDelay = 0x3c8; // float
		constexpr auto PartyInviteButton = 0x3e0; // UPortalWarsButtonWidget*
		constexpr auto GameInviteButton = 0x3e8; // UPortalWarsButtonWidget*
		constexpr auto ResetFriendDelay = 0x3f0; // float
		constexpr auto AddFriendButton = 0x408; // UPortalWarsButtonWidget*
		constexpr auto RemoveFriendButton = 0x410; // UPortalWarsButtonWidget*
		constexpr auto ResetBlockDelay = 0x418; // float
		constexpr auto BlockButton = 0x430; // UPortalWarsButtonWidget*
		constexpr auto UnblockButton = 0x438; // UPortalWarsButtonWidget*
		constexpr auto MuteButton = 0x440; // UPortalWarsButtonWidget*
		constexpr auto KickButton = 0x448; // UPortalWarsButtonWidget*
		constexpr auto PlayerEntry = 0x450; // UPortalWarsPlayerEntryWidget*
	}

	namespace n_UEnvQueryGenerator_PathingGrid {
		constexpr auto PathToItem = 0x130; // FAIDataProviderBoolValue
		constexpr auto NavigationFilter = 0x168; // UNavigationQueryFilter*
		constexpr auto ScanRangeMultiplier = 0x170; // FAIDataProviderFloatValue
	}

	namespace n_USoundSubmix {
		constexpr auto bMuteWhenBackgrounded = 0x40; // char : 1
		constexpr auto SubmixEffectChain = 0x48; // TArray<USoundEffectSubmixPreset*>
		constexpr auto AmbisonicsPluginSettings = 0x58; // USoundfieldEncodingSettingsBase*
		constexpr auto EnvelopeFollowerAttackTime = 0x60; // int32_t
		constexpr auto EnvelopeFollowerReleaseTime = 0x64; // int32_t
		constexpr auto GainMode = 0x68; // EGainParamMode
		constexpr auto OutputVolume = 0x6c; // float
		constexpr auto WetLevel = 0x70; // float
		constexpr auto DryLevel = 0x74; // float
		constexpr auto OnSubmixRecordedFileDone = 0x78; // FMulticastInlineDelegate
	}

	namespace n_APlayerCameraManager {
		constexpr auto PCOwner = 0x220; // APlayerController*
		constexpr auto TransformComponent = 0x228; // USceneComponent*
		constexpr auto DefaultFOV = 0x238; // float
		constexpr auto DefaultOrthoWidth = 0x240; // float
		constexpr auto DefaultAspectRatio = 0x248; // float
		constexpr auto CameraCache = 0x290; // FCameraCacheEntry
		constexpr auto LastFrameCameraCache = 0x880; // FCameraCacheEntry
		constexpr auto ViewTarget = 0xe70; // FTViewTarget
		constexpr auto PendingViewTarget = 0x1470; // FTViewTarget
		constexpr auto CameraCachePrivate = 0x1aa0; // FCameraCacheEntry
		constexpr auto LastFrameCameraCachePrivate = 0x2090; // FCameraCacheEntry
		constexpr auto ModifierList = 0x2680; // TArray<UCameraModifier*>
		constexpr auto DefaultModifiers = 0x2690; // TArray<UCameraModifier*>
		constexpr auto FreeCamDistance = 0x26a0; // float
		constexpr auto FreeCamOffset = 0x26a4; // FVector
		constexpr auto ViewTargetOffset = 0x26b0; // FVector
		constexpr auto OnAudioFadeChangeEvent = 0x26c0; // FMulticastInlineDelegate
		constexpr auto CameraLensEffects = 0x26e0; // TArray<AEmitterCameraLensEffectBase*>
		constexpr auto CachedCameraShakeMod = 0x26f0; // UCameraModifier_CameraShake*
		constexpr auto AnimInstPool = 0x26f8; // UCameraAnimInst* [0x8]
		constexpr auto PostProcessBlendCache = 0x2738; // TArray<FPostProcessSettings>
		constexpr auto ActiveAnims = 0x2758; // TArray<UCameraAnimInst*>
		constexpr auto FreeAnims = 0x2768; // TArray<UCameraAnimInst*>
		constexpr auto AnimCameraActor = 0x2778; // ACameraActor*
		constexpr auto bIsOrthographic = 0x2780; // char : 1
		constexpr auto bDefaultConstrainAspectRatio = 0x2780; // char : 1
		constexpr auto bClientSimulatingViewTarget = 0x2780; // char : 1
		constexpr auto bUseClientSideCameraUpdates = 0x2780; // char : 1
		constexpr auto bGameCameraCutThisFrame = 0x2781; // char : 1
		constexpr auto ViewPitchMin = 0x2784; // float
		constexpr auto ViewPitchMax = 0x2788; // float
		constexpr auto ViewYawMin = 0x278c; // float
		constexpr auto ViewYawMax = 0x2790; // float
		constexpr auto ViewRollMin = 0x2794; // float
		constexpr auto ViewRollMax = 0x2798; // float
		constexpr auto ServerUpdateCameraTimeout = 0x27a0; // float
	}

	namespace n_UMaterialExpressionFrac {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UTexture {
		constexpr auto LightingGuid = 0x68; // FGuid
		constexpr auto LODBias = 0x78; // int32_t
		constexpr auto CompressionSettings = 0x7c; // TextureCompressionSettings
		constexpr auto Filter = 0x7d; // TextureFilter
		constexpr auto MipLoadOptions = 0x7e; // ETextureMipLoadOptions
		constexpr auto LODGroup = 0x7f; // TextureGroup
		constexpr auto Downscale = 0x80; // FPerPlatformFloat
		constexpr auto DownscaleOptions = 0x84; // ETextureDownscaleOptions
		constexpr auto sRGB = 0x85; // char : 1
		constexpr auto bNoTiling = 0x85; // char : 1
		constexpr auto VirtualTextureStreaming = 0x85; // char : 1
		constexpr auto CompressionYCoCg = 0x85; // char : 1
		constexpr auto bNotOfflineProcessed = 0x85; // char : 1
		constexpr auto bAsyncResourceReleaseHasBeenStarted = 0x85; // char : 1
		constexpr auto AssetUserData = 0x88; // TArray<UAssetUserData*>
	}

	namespace n_UMovieSceneSequenceTickManager {
		constexpr auto SequenceActors = 0x28; // TArray<AActor*>
		constexpr auto Linker = 0x38; // UMovieSceneEntitySystemLinker*
	}

	namespace n_ULeaderboardQueryCallbackProxy {
		constexpr auto OnSuccess = 0x28; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x38; // FMulticastInlineDelegate
	}

	namespace n_UGizmoCircleComponent {
		constexpr auto Normal = 0x470; // FVector
		constexpr auto Radius = 0x47c; // float
		constexpr auto Thickness = 0x480; // float
		constexpr auto NumSides = 0x484; // int32_t
		constexpr auto bViewAligned = 0x488; // bool
		constexpr auto bOnlyAllowFrontFacingHits = 0x489; // bool
	}

	namespace n_UBTTask_MoveDirectlyToward {
		constexpr auto bDisablePathUpdateOnGoalLocationChange = 0xb0; // char : 1
		constexpr auto bProjectVectorGoalToNavigation = 0xb0; // char : 1
		constexpr auto bUpdatedDeprecatedProperties = 0xb0; // char : 1
	}

	namespace n_UNiagaraDataInterfaceLandscape {
		constexpr auto SourceLandscape = 0x38; // AActor*
		constexpr auto SourceMode = 0x40; // ENDILandscape_SourceMode
	}

	namespace n_UNetworkSettings {
		constexpr auto bVerifyPeer = 0x38; // char : 1
		constexpr auto bEnableMultiplayerWorldOriginRebasing = 0x38; // char : 1
		constexpr auto MaxRepArraySize = 0x3c; // int32_t
		constexpr auto MaxRepArrayMemory = 0x40; // int32_t
		constexpr auto NetworkEmulationProfiles = 0x48; // TArray<FNetworkEmulationProfileDescription>
	}

	namespace n_UTireType {
		constexpr auto FrictionScale = 0x30; // float
	}

	namespace n_UMovieSceneSkeletalAnimationSection {
		constexpr auto Params = 0xe8; // FMovieSceneSkeletalAnimationParams
		constexpr auto AnimSequence = 0x1c0; // UAnimSequence*
		constexpr auto Animation = 0x1c8; // UAnimSequenceBase*
		constexpr auto StartOffset = 0x1d0; // float
		constexpr auto EndOffset = 0x1d4; // float
		constexpr auto PlayRate = 0x1d8; // float
		constexpr auto bReverse = 0x1dc; // char : 1
		constexpr auto SlotName = 0x1e0; // FName
		constexpr auto StartLocationOffset = 0x1e8; // FVector
		constexpr auto StartRotationOffset = 0x1f4; // FRotator
		constexpr auto bMatchWithPrevious = 0x200; // bool
		constexpr auto MatchedBoneName = 0x204; // FName
		constexpr auto MatchedLocationOffset = 0x20c; // FVector
		constexpr auto MatchedRotationOffset = 0x218; // FRotator
		constexpr auto bMatchTranslation = 0x224; // bool
		constexpr auto bMatchIncludeZHeight = 0x225; // bool
		constexpr auto bMatchRotationYaw = 0x226; // bool
		constexpr auto bMatchRotationPitch = 0x227; // bool
		constexpr auto bMatchRotationRoll = 0x228; // bool
	}

	namespace n_UEnvQuery {
		constexpr auto QueryName = 0x30; // FName
		constexpr auto Options = 0x38; // TArray<UEnvQueryOption*>
	}

	namespace n_UNavigationQueryFilter {
		constexpr auto Areas = 0x28; // TArray<FNavigationFilterArea>
		constexpr auto IncludeFlags = 0x38; // FNavigationFilterFlags
		constexpr auto ExcludeFlags = 0x3c; // FNavigationFilterFlags
	}

	namespace n_APortalWarsDOMGameState {
		constexpr auto Hills = 0x7c8; // TArray<ADominationHill*>
	}

	namespace n_AGun {
		constexpr auto BodyPartTargetForBots = 0x2b8; // EBodyPart
		constexpr auto TimeBetweenShotsForBots = 0x2bc; // float
		constexpr auto WeaponConfig = 0x2c0; // FWeaponData
		constexpr auto PickupClass = 0x2f0; // APortalWarsPickup*
		constexpr auto gunValue = 0x2f8; // char
		constexpr auto CurrentAmmo = 0x2fc; // int32_t
		constexpr auto CurrentAmmoInClip = 0x300; // int32_t
		constexpr auto EquipTime = 0x318; // float
		constexpr auto bAutoEquip = 0x31c; // char : 1
		constexpr auto bCanFirePortalsWhileEquipped = 0x324; // bool
		constexpr auto bIsChargingWeapon = 0x340; // bool
		constexpr auto recoilConfig = 0x344; // FRecoilData
		constexpr auto SpectatorCameraShake = 0x380; // UCameraShakeBase*
		constexpr auto MeleeSwingEvent = 0x3b8; // UAkAudioEvent*
		constexpr auto MeleeHitEvent = 0x3c0; // UAkAudioEvent*
		constexpr auto isMeleeWeapon = 0x3d4; // bool
		constexpr auto MeleeDamageType = 0x3d8; // UDamageType*
		constexpr auto MinTimeBeforeApplyingMeleeDmg = 0x3e0; // float
		constexpr auto MeleeRangeScaleOverride = 0x3e4; // float
		constexpr auto MeleeHitCameraShakeScale = 0x3e8; // float
		constexpr auto MeleeCameraShakeDelay = 0x3ec; // float
		constexpr auto MeleeHitCameraShake = 0x3f8; // UCameraShakeBase*
		constexpr auto MeleeCameraShake = 0x400; // UCameraShakeBase*
		constexpr auto GunID = 0x410; // int32_t
		constexpr auto InternalName = 0x418; // FString
		constexpr auto DisplayName = 0x428; // FText
		constexpr auto ShortDisplayName = 0x440; // FText
		constexpr auto GunIcon = 0x458; // UTexture2D*
		constexpr auto AutoAimConfig = 0x460; // FAutoAimData
		constexpr auto CurrentState = 0x498; // EWeaponState
		constexpr auto ShotInfo = 0x499; // FShotInfo
		constexpr auto FireForceFeedback = 0x4a0; // UForceFeedbackEffect*
		constexpr auto MeleeForceFeedback = 0x4a8; // UForceFeedbackEffect*
		constexpr auto EquipAnim = 0x4b0; // FWeaponAnimMontage
		constexpr auto FireAnim = 0x4c0; // FWeaponAnimMontage
		constexpr auto ReloadAnim = 0x4d0; // FWeaponAnimMontage
		constexpr auto ReloadShortAnim = 0x4e0; // FWeaponAnimMontage
		constexpr auto MeleeAnims = 0x4f0; // TArray<FWeaponAnimMontage>
		constexpr auto ThrowGrenadeAnim = 0x500; // FWeaponAnimMontage
		constexpr auto FirePortalAnim = 0x510; // FWeaponAnimMontage
		constexpr auto SprintingFirePortalAnim = 0x520; // FWeaponAnimMontage
		constexpr auto ClosePortalAnim = 0x530; // FWeaponAnimMontage
		constexpr auto SprintingClosePortalAnim = 0x540; // FWeaponAnimMontage
		constexpr auto InspectWeaponAnim = 0x550; // FWeaponAnimMontage
		constexpr auto WeaponSpecificAnimations = 0x560; // FWeaponAnimList
		constexpr auto FireEvent = 0x5c8; // UAkAudioEvent*
		constexpr auto OutOfAmmoEvent = 0x5d0; // UAkAudioEvent*
		constexpr auto FireStopEvent = 0x5d8; // UAkAudioEvent*
		constexpr auto ZoomInEvent = 0x5e0; // UAkAudioEvent*
		constexpr auto ZoomOutEvent = 0x5e8; // UAkAudioEvent*
		constexpr auto AmmoPickupEvent = 0x5f0; // UAkAudioEvent*
		constexpr auto GunCollisionEvent = 0x5f8; // UAkAudioEvent*
		constexpr auto EquipEvent = 0x600; // UAkAudioEvent*
		constexpr auto AmmoCounter = 0x610; // UAmmoCounterWidgetComponent*
		constexpr auto FuzzyConfig = 0x680; // FFuzzyConfig [0x9]
	}

	namespace n_UPortalWarsEntryWidget {
		constexpr auto bIsSelected = 0x3c0; // bool
		constexpr auto OnEntrySelected = 0x3c8; // FMulticastInlineDelegate
		constexpr auto OnEntryDoubleClicked = 0x3d8; // FMulticastInlineDelegate
		constexpr auto OnEntryHovered = 0x3e8; // FMulticastInlineDelegate
		constexpr auto OnEntryUnhovered = 0x3f8; // FMulticastInlineDelegate
		constexpr auto bSelectOnControllerHover = 0x408; // bool
		constexpr auto FadeInAnimation = 0x410; // UWidgetAnimation*
		constexpr auto FadeOutAnimation = 0x418; // UWidgetAnimation*
	}

	namespace n_UGeometryCollection {
		constexpr auto EnableClustering = 0x30; // bool
		constexpr auto ClusterGroupIndex = 0x34; // int32_t
		constexpr auto MaxClusterLevel = 0x38; // int32_t
		constexpr auto DamageThreshold = 0x40; // TArray<float>
		constexpr auto ClusterConnectionType = 0x50; // EClusterConnectionTypeEnum
		constexpr auto GeometrySource = 0x58; // TArray<FGeometryCollectionSource>
		constexpr auto Materials = 0x68; // TArray<UMaterialInterface*>
		constexpr auto CollisionType = 0x78; // ECollisionTypeEnum
		constexpr auto ImplicitType = 0x79; // EImplicitTypeEnum
		constexpr auto MinLevelSetResolution = 0x7c; // int32_t
		constexpr auto MaxLevelSetResolution = 0x80; // int32_t
		constexpr auto MinClusterLevelSetResolution = 0x84; // int32_t
		constexpr auto MaxClusterLevelSetResolution = 0x88; // int32_t
		constexpr auto CollisionObjectReductionPercentage = 0x8c; // float
		constexpr auto bMassAsDensity = 0x90; // bool
		constexpr auto Mass = 0x94; // float
		constexpr auto MinimumMassClamp = 0x98; // float
		constexpr auto CollisionParticlesFraction = 0x9c; // float
		constexpr auto MaximumCollisionParticles = 0xa0; // int32_t
		constexpr auto SizeSpecificData = 0xa8; // TArray<FGeometryCollectionSizeSpecificData>
		constexpr auto EnableRemovePiecesOnFracture = 0xb8; // bool
		constexpr auto RemoveOnFractureMaterials = 0xc0; // TArray<UMaterialInterface*>
		constexpr auto PersistentGuid = 0xd0; // FGuid
		constexpr auto StateGuid = 0xe0; // FGuid
		constexpr auto BoneSelectedMaterialIndex = 0xf0; // int32_t
	}

	namespace n_UConstantCameraShakePattern {
		constexpr auto LocationOffset = 0x38; // FVector
		constexpr auto RotationOffset = 0x44; // FRotator
	}

	namespace n_ULandscapeSplineSegment {
		constexpr auto Connections = 0x28; // FLandscapeSplineSegmentConnection [0x2]
		constexpr auto SplineInfo = 0x58; // FInterpCurveVector
		constexpr auto Points = 0x70; // TArray<FLandscapeSplineInterpPoint>
		constexpr auto Bounds = 0x80; // FBox
		constexpr auto LocalMeshComponents = 0xa0; // TArray<USplineMeshComponent*>
	}

	namespace n_UUniformInteger {
		constexpr auto Magnitude = 0xb0; // int32_t
	}

	namespace n_UMaterialExpressionWorldPosition {
		constexpr auto WorldPositionShaderOffset = 0x40; // EWorldPositionIncludedOffsets
	}

	namespace n_UParticleModuleTypeDataAnimTrail {
		constexpr auto bDeadTrailsOnDeactivate = 0x30; // char : 1
		constexpr auto bEnablePreviousTangentRecalculation = 0x30; // char : 1
		constexpr auto bTangentRecalculationEveryFrame = 0x30; // char : 1
		constexpr auto TilingDistance = 0x34; // float
		constexpr auto DistanceTessellationStepSize = 0x38; // float
		constexpr auto TangentTessellationStepSize = 0x3c; // float
		constexpr auto WidthTessellationStepSize = 0x40; // float
	}

	namespace n_APortalWarsRoundGameState {
		constexpr auto CurrentRound = 0x7c8; // int32_t
		constexpr auto ReplicatedElapsedServerTime = 0x7d0; // int32_t
		constexpr auto TeamRoundScores = 0x7d8; // TArray<int32_t>
		constexpr auto RoundWinners = 0x7e8; // TArray<int32_t>
		constexpr auto IntermissionCam = 0x800; // ACameraActor*
	}

	namespace n_UInputKeyDelegateBinding {
		constexpr auto InputKeyDelegateBindings = 0x28; // TArray<FBlueprintInputKeyDelegateBinding>
	}

	namespace n_UBuildPatchManifest {
		constexpr auto ManifestFileVersion = 0x28; // char
		constexpr auto bIsFileData = 0x29; // bool
		constexpr auto AppID = 0x2c; // uint32_t
		constexpr auto AppName = 0x30; // FString
		constexpr auto BuildVersion = 0x40; // FString
		constexpr auto LaunchExe = 0x50; // FString
		constexpr auto LaunchCommand = 0x60; // FString
		constexpr auto PrereqIds = 0x70; // TSet<FString>
		constexpr auto PrereqName = 0xc0; // FString
		constexpr auto PrereqPath = 0xd0; // FString
		constexpr auto PrereqArgs = 0xe0; // FString
		constexpr auto FileManifestList = 0xf0; // TArray<FFileManifestData>
		constexpr auto ChunkList = 0x100; // TArray<FChunkInfoData>
		constexpr auto CustomFields = 0x110; // TArray<FCustomFieldData>
	}

	namespace n_UActorChannel {
		constexpr auto Actor = 0x68; // AActor*
		constexpr auto CreateSubObjects = 0x158; // TArray<UObject*>
	}

	namespace n_UPortalWarsGGGunStatusWidget {
		constexpr auto CurrentWeaponText = 0x2a8; // URichTextBlock*
		constexpr auto NextWeaponImage = 0x2b0; // UImage*
		constexpr auto IconSizeBox = 0x2b8; // USizeBox*
		constexpr auto NextWeaponHorizontalBox = 0x2c0; // UHorizontalBox*
		constexpr auto WeaponColor = 0x2c8; // FLinearColor
		constexpr auto DefaultGameMode = 0x2d8; // APortalWarsGG*
	}

	namespace n_UBTTask_FinishWithResult {
		constexpr auto Result = 0x70; // EBTNodeResult
	}

	namespace n_UGizmoArrowComponent {
		constexpr auto Direction = 0x470; // FVector
		constexpr auto Gap = 0x47c; // float
		constexpr auto Length = 0x480; // float
		constexpr auto Thickness = 0x484; // float
	}

	namespace n_UBehaviorTreeComponent {
		constexpr auto NodeInstances = 0x128; // TArray<UBTNode*>
		constexpr auto DefaultBehaviorTreeAsset = 0x278; // UBehaviorTree*
	}

	namespace n_USoundMix {
		constexpr auto bApplyEQ = 0x28; // char : 1
		constexpr auto EQPriority = 0x2c; // float
		constexpr auto EQSettings = 0x30; // FAudioEQEffect
		constexpr auto SoundClassEffects = 0x70; // TArray<FSoundClassAdjuster>
		constexpr auto InitialDelay = 0x80; // float
		constexpr auto FadeInTime = 0x84; // float
		constexpr auto Duration = 0x88; // float
		constexpr auto FadeOutTime = 0x8c; // float
	}

	namespace n_ULocalPlayer {
		constexpr auto ViewportClient = 0x70; // UGameViewportClient*
		constexpr auto AspectRatioAxisConstraint = 0x94; // EAspectRatioAxisConstraint
		constexpr auto PendingLevelPlayerControllerClass = 0x98; // APlayerController*
		constexpr auto bSentSplitJoin = 0xa0; // char : 1
		constexpr auto ControllerId = 0xb8; // int32_t
	}

	namespace n_UComponentDelegateBinding {
		constexpr auto ComponentDelegateBindings = 0x28; // TArray<FBlueprintComponentDelegateBinding>
	}

	namespace n_UParticleModuleTypeDataMesh {
		constexpr auto Mesh = 0x30; // UStaticMesh*
		constexpr auto LODSizeScale = 0x40; // float
		constexpr auto bUseStaticMeshLODs = 0x44; // char : 1
		constexpr auto CastShadows = 0x44; // char : 1
		constexpr auto DoCollisions = 0x44; // char : 1
		constexpr auto MeshAlignment = 0x45; // EMeshScreenAlignment
		constexpr auto bOverrideMaterial = 0x46; // char : 1
		constexpr auto bOverrideDefaultMotionBlurSettings = 0x46; // char : 1
		constexpr auto bEnableMotionBlur = 0x46; // char : 1
		constexpr auto RollPitchYawRange = 0x48; // FRawDistributionVector
		constexpr auto AxisLockOption = 0x90; // EParticleAxisLock
		constexpr auto bCameraFacing = 0x91; // char : 1
		constexpr auto CameraFacingUpAxisOption = 0x92; // EMeshCameraFacingUpAxis
		constexpr auto CameraFacingOption = 0x93; // EMeshCameraFacingOptions
		constexpr auto bApplyParticleRotationAsSpin = 0x94; // char : 1
		constexpr auto bFaceCameraDirectionRatherThanPosition = 0x94; // char : 1
		constexpr auto bCollisionsConsiderPartilceSize = 0x94; // char : 1
	}

	namespace n_UNoiseField {
		constexpr auto MinRange = 0xb0; // float
		constexpr auto MaxRange = 0xb4; // float
		constexpr auto Transform = 0xc0; // FTransform
	}

	namespace n_UDatasmithLandscapeTemplate {
		constexpr auto LandscapeMaterial = 0x30; // UMaterialInterface*
		constexpr auto StaticLightingLOD = 0x38; // int32_t
	}

	namespace n_UParticleModuleLight {
		constexpr auto bUseInverseSquaredFalloff = 0x30; // bool
		constexpr auto bAffectsTranslucency = 0x31; // bool
		constexpr auto bPreviewLightRadius = 0x32; // bool
		constexpr auto SpawnFraction = 0x34; // float
		constexpr auto ColorScaleOverLife = 0x38; // FRawDistributionVector
		constexpr auto BrightnessOverLife = 0x80; // FRawDistributionFloat
		constexpr auto RadiusScale = 0xb0; // FRawDistributionFloat
		constexpr auto LightExponent = 0xe0; // FRawDistributionFloat
		constexpr auto LightingChannels = 0x110; // FLightingChannels
		constexpr auto VolumetricScatteringIntensity = 0x114; // float
		constexpr auto bHighQualityLights = 0x118; // bool
		constexpr auto bShadowCastingLights = 0x119; // bool
	}

	namespace n_UNetDriver {
		constexpr auto NetConnectionClassName = 0x30; // FString
		constexpr auto ReplicationDriverClassName = 0x40; // FString
		constexpr auto MaxDownloadSize = 0x50; // int32_t
		constexpr auto bClampListenServerTickRate = 0x54; // char : 1
		constexpr auto NetServerMaxTickRate = 0x58; // int32_t
		constexpr auto MaxNetTickRate = 0x5c; // int32_t
		constexpr auto MaxInternetClientRate = 0x60; // int32_t
		constexpr auto MaxClientRate = 0x64; // int32_t
		constexpr auto ServerTravelPause = 0x68; // float
		constexpr auto SpawnPrioritySeconds = 0x6c; // float
		constexpr auto RelevantTimeout = 0x70; // float
		constexpr auto KeepAliveTime = 0x74; // float
		constexpr auto InitialConnectTimeout = 0x78; // float
		constexpr auto ConnectionTimeout = 0x7c; // float
		constexpr auto TimeoutMultiplierForUnoptimizedBuilds = 0x80; // float
		constexpr auto bNoTimeouts = 0x84; // bool
		constexpr auto bNeverApplyNetworkEmulationSettings = 0x85; // bool
		constexpr auto ServerConnection = 0x88; // UNetConnection*
		constexpr auto ClientConnections = 0x90; // TArray<UNetConnection*>
		constexpr auto RecentlyDisconnectedTrackingTime = 0x100; // int32_t
		constexpr auto World = 0x140; // UWorld*
		constexpr auto WorldPackage = 0x148; // UPackage*
		constexpr auto NetConnectionClass = 0x170; // UObject*
		constexpr auto ReplicationDriverClass = 0x178; // UObject*
		constexpr auto NetDriverName = 0x190; // FName
		constexpr auto ChannelDefinitions = 0x198; // TArray<FChannelDefinition>
		constexpr auto ChannelDefinitionMap = 0x1a8; // TMap<FName, FChannelDefinition>
		constexpr auto ActorChannelPool = 0x1f8; // TArray<UChannel*>
		constexpr auto Time = 0x210; // float
		constexpr auto ReplicationDriver = 0x6f8; // UReplicationDriver*
	}

	namespace n_UTextRenderComponent {
		constexpr auto Text = 0x450; // FText
		constexpr auto TextMaterial = 0x468; // UMaterialInterface*
		constexpr auto Font = 0x470; // UFont*
		constexpr auto HorizontalAlignment = 0x478; // EHorizTextAligment
		constexpr auto VerticalAlignment = 0x479; // EVerticalTextAligment
		constexpr auto TextRenderColor = 0x47c; // FColor
		constexpr auto XScale = 0x480; // float
		constexpr auto YScale = 0x484; // float
		constexpr auto WorldSize = 0x488; // float
		constexpr auto InvDefaultSize = 0x48c; // float
		constexpr auto HorizSpacingAdjust = 0x490; // float
		constexpr auto VertSpacingAdjust = 0x494; // float
		constexpr auto bAlwaysRenderAsText = 0x498; // char : 1
	}

	namespace n_UPortalWarsChallengeDialogWidget {
		constexpr auto ChallengeEntryWidgetClass = 0x390; // UPortalWarsChallengeEntryWidget*
		constexpr auto CompletedChallengeEntryWidgetClass = 0x398; // UPortalWarsChallengeEntryWidget*
		constexpr auto EntriesPanel = 0x3a0; // UPanelWidget*
		constexpr auto ChallengeEntries = 0x3b8; // TArray<UPortalWarsChallengeEntryWidget*>
	}

	namespace n_UAnimNotify_PlaySound {
		constexpr auto Sound = 0x38; // USoundBase*
		constexpr auto VolumeMultiplier = 0x40; // float
		constexpr auto PitchMultiplier = 0x44; // float
		constexpr auto bFollow = 0x48; // char : 1
		constexpr auto AttachName = 0x4c; // FName
	}

	namespace n_UMovieSceneEnumTrack {
		constexpr auto Enum = 0xa8; // UEnum*
	}

	namespace n_USoundGroups {
		constexpr auto SoundGroupProfiles = 0x28; // TArray<FSoundGroup>
	}

	namespace n_UPartyBeaconState {
		constexpr auto SessionName = 0x28; // FName
		constexpr auto NumConsumedReservations = 0x30; // int32_t
		constexpr auto MaxReservations = 0x34; // int32_t
		constexpr auto NumTeams = 0x38; // int32_t
		constexpr auto NumPlayersPerTeam = 0x3c; // int32_t
		constexpr auto TeamAssignmentMethod = 0x40; // FName
		constexpr auto ReservedHostTeamNum = 0x48; // int32_t
		constexpr auto ForceTeamNum = 0x4c; // int32_t
		constexpr auto bRestrictCrossConsole = 0x50; // bool
		constexpr auto PlatformCrossplayRestrictions = 0x58; // TArray<FString>
		constexpr auto PlatformTypeMapping = 0x68; // TArray<FPartyBeaconCrossplayPlatformMapping>
		constexpr auto bEnableRemovalRequests = 0x78; // bool
		constexpr auto Reservations = 0x80; // TArray<FPartyReservation>
	}

	namespace n_UGizmoConstantFrameAxisSource {
		constexpr auto Origin = 0x30; // FVector
		constexpr auto Direction = 0x3c; // FVector
		constexpr auto TangentX = 0x48; // FVector
		constexpr auto TangentY = 0x54; // FVector
	}

	namespace n_UImageSequenceProtocol_EXR {
		constexpr auto bCompressed = 0xd8; // bool
		constexpr auto CaptureGamut = 0xd9; // EHDRCaptureGamut
	}

	namespace n_UPortalWarsBattlePassEntryWidget {
		constexpr auto XPProgressBar = 0x798; // UProgressBar*
		constexpr auto FreeIndicator = 0x7b0; // UWidget*
	}

	namespace n_APortalWarsRaceHUD {
		constexpr auto RaceHUDOverlayWidget = 0x400; // UPortalWarsRaceHUDOverlay*
		constexpr auto RaceHUDOverlayWidgetClass = 0x408; // UPortalWarsRaceHUDOverlay*
		constexpr auto GateIndicatorWidgetClass = 0x410; // UPortalWarsIndicatorWidget*
	}

	namespace n_APortalWarsOddballGameState {
		constexpr auto Oddball = 0x7c8; // AActor*
		constexpr auto OddballState = 0x7d0; // EBallState
	}

	namespace n_UNiagaraDataInterfaceColorCurve {
		constexpr auto RedCurve = 0x70; // FRichCurve
		constexpr auto GreenCurve = 0xf0; // FRichCurve
		constexpr auto BlueCurve = 0x170; // FRichCurve
		constexpr auto AlphaCurve = 0x1f0; // FRichCurve
	}

	namespace n_UEnvQueryTest_Dot {
		constexpr auto LineA = 0x1f8; // FEnvDirection
		constexpr auto LineB = 0x218; // FEnvDirection
		constexpr auto TestMode = 0x238; // EEnvTestDot
		constexpr auto bAbsoluteValue = 0x239; // bool
	}

	namespace n_UPortalWarsCareerProgressWidget {
		constexpr auto PlayerNameText = 0x2a8; // UTextBlock*
		constexpr auto AvatarImage = 0x2b0; // UImage*
		constexpr auto ProgressionLevelIcon = 0x2b8; // UPortalWarsProgressionIconWidget*
		constexpr auto ProgressionLevelText = 0x2c0; // UTextBlock*
		constexpr auto ProgressionProgressBar = 0x2c8; // UProgressBar*
		constexpr auto ProgressionLevelProgressText = 0x2d0; // UTextBlock*
		constexpr auto ProgressionLevelTotalText = 0x2d8; // UTextBlock*
		constexpr auto ProgressionProgressRoot = 0x2e0; // UWidget*
		constexpr auto BattlePassLevelIcon = 0x2f8; // UPortalWarsProgressionIconWidget*
		constexpr auto BattlePassLevelText = 0x300; // UTextBlock*
		constexpr auto BattlePassProgressBar = 0x308; // UProgressBar*
		constexpr auto BattlePassLevelProgressText = 0x310; // UTextBlock*
		constexpr auto BattlePassLevelTotalText = 0x318; // UTextBlock*
		constexpr auto BattlePassProgressRoot = 0x320; // UWidget*
		constexpr auto BattlePassSwitcher = 0x328; // UWidgetSwitcher*
		constexpr auto RankText = 0x330; // UTextBlock*
		constexpr auto RankIcon = 0x338; // UImage*
		constexpr auto RankRoot = 0x340; // UWidget*
		constexpr auto bShowRank = 0x348; // bool
	}

	namespace n_UAISense_Sight {
		constexpr auto MaxTracesPerTick = 0x148; // int32_t
		constexpr auto MinQueriesPerTimeSliceCheck = 0x14c; // int32_t
		constexpr auto MaxTimeSlicePerTick = 0x150; // double
		constexpr auto HighImportanceQueryDistanceThreshold = 0x158; // float
		constexpr auto MaxQueryImportance = 0x160; // float
		constexpr auto SightLimitQueryImportance = 0x164; // float
	}

	namespace n_UMaterialExpressionTextureBase {
		constexpr auto Texture = 0x40; // UTexture*
	}

	namespace n_UPortalWarsReferralPassWidget {
		constexpr auto NextRewardRichText = 0x438; // URichTextBlock*
	}

	namespace n_ULandscapeSplinesComponent {
		constexpr auto ControlPoints = 0x450; // TArray<ULandscapeSplineControlPoint*>
		constexpr auto Segments = 0x460; // TArray<ULandscapeSplineSegment*>
		constexpr auto CookedForeignMeshComponents = 0x470; // TArray<UMeshComponent*>
	}

	namespace n_UPortalWarsCurrencyStoreEntry {
		constexpr auto CurrencyText = 0x430; // UTextBlock*
		constexpr auto DisplayImage = 0x438; // UImage*
		constexpr auto PurchasableId = 0x520; // int32_t
		constexpr auto DefaultSubtitleColor = 0x524; // FLinearColor
		constexpr auto HoveredSubtitleColor = 0x534; // FLinearColor
		constexpr auto bIsFeatured = 0x544; // bool
	}

	namespace n_UMovieSceneVectorSection {
		constexpr auto Curves = 0xf0; // FMovieSceneFloatChannel [0x4]
		constexpr auto ChannelsUsed = 0x370; // int32_t
	}

	namespace n_UDatasmithStaticMeshComponentTemplate {
		constexpr auto StaticMesh = 0x30; // UStaticMesh*
		constexpr auto OverrideMaterials = 0x38; // TArray<UMaterialInterface*>
	}

	namespace n_USimpleCameraShakePattern {
		constexpr auto Duration = 0x28; // float
		constexpr auto BlendInTime = 0x2c; // float
		constexpr auto BlendOutTime = 0x30; // float
	}

	namespace n_UARLifeCycleComponent {
		constexpr auto OnARActorSpawnedDelegate = 0x1f8; // FMulticastInlineDelegate
		constexpr auto OnARActorToBeDestroyedDelegate = 0x208; // FMulticastInlineDelegate
	}

	namespace n_UNiagaraPreviewAxis_InterpParamVector4 {
		constexpr auto Min = 0x40; // FVector4
		constexpr auto Max = 0x50; // FVector4
	}

	namespace n_UBTTask_WaitBlackboardTime {
		constexpr auto BlackboardKey = 0x78; // FBlackboardKeySelector
	}

	namespace n_UEnvQueryTest_Volume {
		constexpr auto VolumeContext = 0x1f8; // UEnvQueryContext*
		constexpr auto VolumeClass = 0x200; // AVolume*
		constexpr auto bDoComplexVolumeTest = 0x208; // char : 1
	}

	namespace n_UMaterialExpressionSamplePhysicsScalarField {
		constexpr auto WorldPosition = 0x40; // FExpressionInput
		constexpr auto FieldTarget = 0x54; // EFieldScalarType
	}

	namespace n_UParticleModuleSizeScale {
		constexpr auto SizeScale = 0x30; // FRawDistributionVector
		constexpr auto EnableX = 0x78; // char : 1
		constexpr auto EnableY = 0x78; // char : 1
		constexpr auto EnableZ = 0x78; // char : 1
	}

	namespace n_UMaterialExpressionRuntimeVirtualTextureReplace {
		constexpr auto Default = 0x40; // FExpressionInput
		constexpr auto VirtualTextureOutput = 0x54; // FExpressionInput
	}

	namespace n_UGameSessionSettings {
		constexpr auto MaxSpectators = 0x28; // int32_t
		constexpr auto MaxPlayers = 0x2c; // int32_t
		constexpr auto bRequiresPushToTalk = 0x30; // char : 1
	}

	namespace n_UPortalWarsAudioSettingsWidget {
		constexpr auto Master = 0x358; // UPortalWarsSpinSliderWidget*
		constexpr auto Gameplay = 0x360; // UPortalWarsSpinSliderWidget*
		constexpr auto Music = 0x368; // UPortalWarsSpinSliderWidget*
		constexpr auto Announcer = 0x370; // UPortalWarsSpinSliderWidget*
		constexpr auto Ambiance = 0x378; // UPortalWarsSpinSliderWidget*
		constexpr auto MuteWhileMinimized = 0x380; // UPortalWarsCheckBoxWidget*
		constexpr auto VoiceSwitcher = 0x388; // UWidgetSwitcher*
		constexpr auto VOIP = 0x390; // UPortalWarsSpinSliderWidget*
		constexpr auto OpenMic = 0x398; // UPortalWarsCheckBoxWidget*
		constexpr auto ProximityEnabled = 0x3a0; // UPortalWarsCheckBoxWidget*
		constexpr auto VoiceChatInputDevice = 0x3a8; // UPortalWarsDropdownWidget*
		constexpr auto VoiceChatOutputDevice = 0x3b0; // UPortalWarsDropdownWidget*
	}

	namespace n_USkeleton {
		constexpr auto BoneTree = 0x38; // TArray<FBoneNode>
		constexpr auto RefLocalPoses = 0x48; // TArray<FTransform>
		constexpr auto VirtualBoneGuid = 0x170; // FGuid
		constexpr auto VirtualBones = 0x180; // TArray<FVirtualBone>
		constexpr auto Sockets = 0x190; // TArray<USkeletalMeshSocket*>
		constexpr auto SmartNames = 0x1f0; // FSmartNameContainer
		constexpr auto BlendProfiles = 0x270; // TArray<UBlendProfile*>
		constexpr auto SlotGroups = 0x280; // TArray<FAnimSlotGroup>
		constexpr auto AssetUserData = 0x358; // TArray<UAssetUserData*>
	}

	namespace n_UPortalWarsPartyWidget {
		constexpr auto PartyEntryWidgetClass = 0x2b8; // UPortalWarsPartyEntryWidget*
		constexpr auto PartyInspectWidgetClass = 0x2c0; // UPortalWarsPartyInspectWidget*
		constexpr auto ItemsPanel = 0x2c8; // UCanvasPanel*
	}

	namespace n_UPortalWarsSeasonRewardsWidget {
		constexpr auto GamesPanel = 0x260; // UHorizontalBox*
		constexpr auto RankIcon = 0x268; // UImage*
		constexpr auto RankText = 0x270; // UTextBlock*
		constexpr auto WinsText = 0x278; // URichTextBlock*
		constexpr auto IncompleteImage = 0x280; // UTexture2D*
		constexpr auto CompleteImage = 0x288; // UTexture2D*
		constexpr auto SeparatorImage = 0x290; // UTexture2D*
	}

	namespace n_USourceEffectWaveShaperPreset {
		constexpr auto Settings = 0x98; // FSourceEffectWaveShaperSettings
	}

	namespace n_UMaterial {
		constexpr auto PhysMaterial = 0x88; // UPhysicalMaterial*
		constexpr auto PhysMaterialMask = 0x90; // UPhysicalMaterialMask*
		constexpr auto PhysicalMaterialMap = 0x98; // UPhysicalMaterial* [0x8]
		constexpr auto Metallic = 0xd8; // FScalarMaterialInput
		constexpr auto Specular = 0xec; // FScalarMaterialInput
		constexpr auto Anisotropy = 0x100; // FScalarMaterialInput
		constexpr auto Normal = 0x114; // FVectorMaterialInput
		constexpr auto Tangent = 0x128; // FVectorMaterialInput
		constexpr auto EmissiveColor = 0x13c; // FColorMaterialInput
		constexpr auto MaterialDomain = 0x150; // EMaterialDomain
		constexpr auto BlendMode = 0x151; // EBlendMode
		constexpr auto DecalBlendMode = 0x152; // EDecalBlendMode
		constexpr auto MaterialDecalResponse = 0x153; // EMaterialDecalResponse
		constexpr auto ShadingModel = 0x154; // EMaterialShadingModel
		constexpr auto bCastDynamicShadowAsMasked = 0x155; // char : 1
		constexpr auto ShadingModels = 0x156; // FMaterialShadingModelField
		constexpr auto OpacityMaskClipValue = 0x158; // float
		constexpr auto WorldPositionOffset = 0x15c; // FVectorMaterialInput
		constexpr auto Refraction = 0x170; // FScalarMaterialInput
		constexpr auto MaterialAttributes = 0x184; // FMaterialAttributesInput
		constexpr auto PixelDepthOffset = 0x19c; // FScalarMaterialInput
		constexpr auto ShadingModelFromMaterialExpression = 0x1b0; // FShadingModelMaterialInput
		constexpr auto bEnableSeparateTranslucency = 0x1c4; // char : 1
		constexpr auto bEnableResponsiveAA = 0x1c4; // char : 1
		constexpr auto bScreenSpaceReflections = 0x1c4; // char : 1
		constexpr auto bContactShadows = 0x1c4; // char : 1
		constexpr auto TwoSided = 0x1c4; // char : 1
		constexpr auto DitheredLODTransition = 0x1c4; // char : 1
		constexpr auto DitherOpacityMask = 0x1c4; // char : 1
		constexpr auto bAllowNegativeEmissiveColor = 0x1c4; // char : 1
		constexpr auto TranslucencyLightingMode = 0x1c5; // ETranslucencyLightingMode
		constexpr auto bEnableMobileSeparateTranslucency = 0x1c6; // char : 1
		constexpr auto NumCustomizedUVs = 0x1c8; // int32_t
		constexpr auto TranslucencyDirectionalLightingIntensity = 0x1cc; // float
		constexpr auto TranslucentShadowDensityScale = 0x1d0; // float
		constexpr auto TranslucentSelfShadowDensityScale = 0x1d4; // float
		constexpr auto TranslucentSelfShadowSecondDensityScale = 0x1d8; // float
		constexpr auto TranslucentSelfShadowSecondOpacity = 0x1dc; // float
		constexpr auto TranslucentBackscatteringExponent = 0x1e0; // float
		constexpr auto TranslucentMultipleScatteringExtinction = 0x1e4; // FLinearColor
		constexpr auto TranslucentShadowStartOffset = 0x1f4; // float
		constexpr auto bDisableDepthTest = 0x1f8; // char : 1
		constexpr auto bWriteOnlyAlpha = 0x1f8; // char : 1
		constexpr auto bGenerateSphericalParticleNormals = 0x1f8; // char : 1
		constexpr auto bTangentSpaceNormal = 0x1f8; // char : 1
		constexpr auto bUseEmissiveForDynamicAreaLighting = 0x1f8; // char : 1
		constexpr auto bBlockGI = 0x1f8; // char : 1
		constexpr auto bUsedAsSpecialEngineMaterial = 0x1f8; // char : 1
		constexpr auto bUsedWithSkeletalMesh = 0x1f8; // char : 1
		constexpr auto bUsedWithEditorCompositing = 0x1f9; // char : 1
		constexpr auto bUsedWithParticleSprites = 0x1f9; // char : 1
		constexpr auto bUsedWithBeamTrails = 0x1f9; // char : 1
		constexpr auto bUsedWithMeshParticles = 0x1f9; // char : 1
		constexpr auto bUsedWithNiagaraSprites = 0x1f9; // char : 1
		constexpr auto bUsedWithNiagaraRibbons = 0x1f9; // char : 1
		constexpr auto bUsedWithNiagaraMeshParticles = 0x1f9; // char : 1
		constexpr auto bUsedWithGeometryCache = 0x1f9; // char : 1
		constexpr auto bUsedWithStaticLighting = 0x1fa; // char : 1
		constexpr auto bUsedWithMorphTargets = 0x1fa; // char : 1
		constexpr auto bUsedWithSplineMeshes = 0x1fa; // char : 1
		constexpr auto bUsedWithInstancedStaticMeshes = 0x1fa; // char : 1
		constexpr auto bUsedWithGeometryCollections = 0x1fa; // char : 1
		constexpr auto bUsesDistortion = 0x1fa; // char : 1
		constexpr auto bUsedWithClothing = 0x1fa; // char : 1
		constexpr auto bUsedWithWater = 0x1fc; // char : 1
		constexpr auto bUsedWithHairStrands = 0x1fc; // char : 1
		constexpr auto bUsedWithLidarPointCloud = 0x1fc; // char : 1
		constexpr auto bUsedWithVirtualHeightfieldMesh = 0x1fc; // char : 1
		constexpr auto bUsedWithUI = 0x200; // char : 1
		constexpr auto bAutomaticallySetUsageInEditor = 0x200; // char : 1
		constexpr auto bFullyRough = 0x200; // char : 1
		constexpr auto bUseFullPrecision = 0x200; // char : 1
		constexpr auto bUseLightmapDirectionality = 0x200; // char : 1
		constexpr auto bUseAlphaToCoverage = 0x200; // char : 1
		constexpr auto bForwardRenderUsePreintegratedGFForSimpleIBL = 0x204; // char : 1
		constexpr auto bUseHQForwardReflections = 0x208; // char : 1
		constexpr auto bUsePlanarForwardReflections = 0x208; // char : 1
		constexpr auto bNormalCurvatureToRoughness = 0x208; // char : 1
		constexpr auto D3D11TessellationMode = 0x209; // EMaterialTessellationMode
		constexpr auto bEnableCrackFreeDisplacement = 0x20a; // char : 1
		constexpr auto bEnableAdaptiveTessellation = 0x20a; // char : 1
		constexpr auto AllowTranslucentCustomDepthWrites = 0x20a; // char : 1
		constexpr auto Wireframe = 0x20a; // char : 1
		constexpr auto ShadingRate = 0x20b; // EMaterialShadingRate
		constexpr auto bCanMaskedBeAssumedOpaque = 0x20c; // char : 1
		constexpr auto bIsMasked = 0x20c; // char : 1
		constexpr auto bIsPreviewMaterial = 0x20c; // char : 1
		constexpr auto bIsFunctionPreviewMaterial = 0x20c; // char : 1
		constexpr auto bUseMaterialAttributes = 0x20c; // char : 1
		constexpr auto bCastRayTracedShadows = 0x20c; // char : 1
		constexpr auto bUseTranslucencyVertexFog = 0x20c; // char : 1
		constexpr auto bApplyCloudFogging = 0x20c; // char : 1
		constexpr auto bIsSky = 0x20d; // char : 1
		constexpr auto bComputeFogPerPixel = 0x20d; // char : 1
		constexpr auto bOutputTranslucentVelocity = 0x20d; // char : 1
		constexpr auto bAllowDevelopmentShaderCompile = 0x20d; // char : 1
		constexpr auto bIsMaterialEditorStatsMaterial = 0x20d; // char : 1
		constexpr auto BlendableLocation = 0x20e; // EBlendableLocation
		constexpr auto BlendableOutputAlpha = 0x20f; // char : 1
		constexpr auto bEnableStencilTest = 0x20f; // char : 1
		constexpr auto StencilCompare = 0x210; // EMaterialStencilCompare
		constexpr auto StencilRefValue = 0x211; // char
		constexpr auto RefractionMode = 0x212; // ERefractionMode
		constexpr auto BlendablePriority = 0x214; // int32_t
		constexpr auto bIsBlendable = 0x218; // char : 1
		constexpr auto UsageFlagWarnings = 0x21c; // uint32_t
		constexpr auto RefractionDepthBias = 0x220; // float
		constexpr auto StateId = 0x224; // FGuid
		constexpr auto MaxDisplacement = 0x234; // float
		constexpr auto CachedExpressionData = 0x268; // FMaterialCachedExpressionData
	}

	namespace n_UUserDefinedEnum {
		constexpr auto DisplayNameMap = 0x60; // TMap<FName, FText>
	}

	namespace n_UParticleModuleRotationRate_Seeded {
		constexpr auto RandomSeedInfo = 0x60; // FParticleRandomSeedInfo
	}

	namespace n_UPWKillcamTransitionWidget {
		constexpr auto FadeInAnimation = 0x260; // UWidgetAnimation*
		constexpr auto FadeOutAnimation = 0x268; // UWidgetAnimation*
	}

	namespace n_UHighlightsSetVideoAsync {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_UPortalWarsGamepadSelectWidget {
		constexpr auto GameplayPreset = 0x358; // UPortalWarsTextCarouselWidget*
		constexpr auto ControllerSwitcher = 0x360; // UWidgetSwitcher*
		constexpr auto XboxButtonLayout = 0x368; // UPortalWarsControllerPresetWidget*
		constexpr auto PS4ButtonLayout = 0x370; // UPortalWarsControllerPresetWidget*
		constexpr auto BindingWarningDialogClass = 0x378; // UPortalWarsGamepadBindingMissingDialogWidget*
		constexpr auto BindingDefaultsDialogClass = 0x380; // UPortalWarsGamepadBindingRestoreDialogWidget*
		constexpr auto CustomizeButton = 0x388; // UPortalWarsGamepadBindingCustomizeButtonWidget*
	}

	namespace n_UMovementComponent {
		constexpr auto UpdatedComponent = 0xb0; // USceneComponent*
		constexpr auto UpdatedPrimitive = 0xb8; // UPrimitiveComponent*
		constexpr auto Velocity = 0xc4; // FVector
		constexpr auto PlaneConstraintNormal = 0xd0; // FVector
		constexpr auto PlaneConstraintOrigin = 0xdc; // FVector
		constexpr auto bUpdateOnlyIfRendered = 0xe8; // char : 1
		constexpr auto bAutoUpdateTickRegistration = 0xe8; // char : 1
		constexpr auto bTickBeforeOwner = 0xe8; // char : 1
		constexpr auto bAutoRegisterUpdatedComponent = 0xe8; // char : 1
		constexpr auto bConstrainToPlane = 0xe8; // char : 1
		constexpr auto bSnapToPlaneAtStart = 0xe8; // char : 1
		constexpr auto bAutoRegisterPhysicsVolumeUpdates = 0xe8; // char : 1
		constexpr auto bComponentShouldUpdatePhysicsVolume = 0xe8; // char : 1
		constexpr auto PlaneConstraintAxisSetting = 0xeb; // EPlaneConstraintAxisSetting
	}

	namespace n_ASpectatorBeaconClient {
		constexpr auto DestSessionId = 0x2e0; // FString
		constexpr auto PendingReservation = 0x2f0; // FSpectatorReservation
		constexpr auto RequestType = 0x368; // ESpectatorClientRequestType
		constexpr auto bPendingReservationSent = 0x369; // bool
		constexpr auto bCancelReservation = 0x36a; // bool
	}

	namespace n_UPortalWarsButton {
		constexpr auto OnDoubleClicked = 0x428; // FMulticastInlineDelegate
		constexpr auto bDebounce = 0x464; // bool
		constexpr auto DebounceTime = 0x468; // float
		constexpr auto PressedEvent = 0x470; // UAkAudioEvent*
		constexpr auto HoveredEvent = 0x478; // UAkAudioEvent*
	}

	namespace n_UAkXboxOneGDKInitializationSettings {
		constexpr auto CommonSettings = 0x28; // FAkCommonInitializationSettings
		constexpr auto ApuHeapSettings = 0x90; // FAkXboxOneGDKApuHeapInitializationSettings
		constexpr auto CommunicationSettings = 0x98; // FAkCommunicationSettingsWithSystemInitialization
		constexpr auto AdvancedSettings = 0xc0; // FAkXboxOneGDKAdvancedInitializationSettings
	}

	namespace n_ANavLinkProxy {
		constexpr auto PointLinks = 0x230; // TArray<FNavigationLink>
		constexpr auto SegmentLinks = 0x240; // TArray<FNavigationSegmentLink>
		constexpr auto SmartLinkComp = 0x250; // UNavLinkCustomComponent*
		constexpr auto bSmartLinkIsRelevant = 0x258; // bool
		constexpr auto OnSmartLinkReached = 0x260; // FMulticastInlineDelegate
	}

	namespace n_UBTService_BlueprintBase {
		constexpr auto AIOwner = 0x70; // AAIController*
		constexpr auto ActorOwner = 0x78; // AActor*
		constexpr auto bShowPropertyDetails = 0x90; // char : 1
		constexpr auto bShowEventDetails = 0x90; // char : 1
	}

	namespace n_UBTDecorator_Cooldown {
		constexpr auto CooldownTime = 0x68; // float
	}

	namespace n_UAudioSettings {
		constexpr auto DefaultSoundClassName = 0x38; // FSoftObjectPath
		constexpr auto DefaultMediaSoundClassName = 0x50; // FSoftObjectPath
		constexpr auto DefaultSoundConcurrencyName = 0x68; // FSoftObjectPath
		constexpr auto DefaultBaseSoundMix = 0x80; // FSoftObjectPath
		constexpr auto VoiPSoundClass = 0x98; // FSoftObjectPath
		constexpr auto MasterSubmix = 0xb0; // FSoftObjectPath
		constexpr auto BaseDefaultSubmix = 0xc8; // FSoftObjectPath
		constexpr auto ReverbSubmix = 0xe0; // FSoftObjectPath
		constexpr auto EQSubmix = 0xf8; // FSoftObjectPath
		constexpr auto VoiPSampleRate = 0x110; // EVoiceSampleRate
		constexpr auto DefaultReverbSendLevel = 0x114; // float
		constexpr auto MaximumConcurrentStreams = 0x118; // int32_t
		constexpr auto GlobalMinPitchScale = 0x11c; // float
		constexpr auto GlobalMaxPitchScale = 0x120; // float
		constexpr auto QualityLevels = 0x128; // TArray<FAudioQualitySettings>
		constexpr auto bAllowPlayWhenSilent = 0x138; // char : 1
		constexpr auto bDisableMasterEQ = 0x138; // char : 1
		constexpr auto bAllowCenterChannel3DPanning = 0x138; // char : 1
		constexpr auto NumStoppingSources = 0x13c; // uint32_t
		constexpr auto PanningMethod = 0x140; // EPanningMethod
		constexpr auto MonoChannelUpmixMethod = 0x141; // EMonoChannelUpmixMethod
		constexpr auto DialogueFilenameFormat = 0x148; // FString
		constexpr auto DebugSounds = 0x158; // TArray<FSoundDebugEntry>
		constexpr auto DefaultAudioBuses = 0x168; // TArray<FDefaultAudioBusSettings>
	}

	namespace n_UCanvasRenderTarget2D {
		constexpr auto OnCanvasRenderTargetUpdate = 0x1a8; // FMulticastInlineDelegate
		constexpr auto World = 0x1b8; // TWeakObjectPtr<UWorld>
		constexpr auto bShouldClearRenderTargetOnReceiveUpdate = 0x1c0; // bool
	}

	namespace n_UMaterialExpressionArcsine {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UMaterialExpressionAtmosphericFogColor {
		constexpr auto WorldPosition = 0x40; // FExpressionInput
	}

	namespace n_UPortalWarsPlayerEntryWidget {
		constexpr auto PlayerNameText = 0x420; // UTextBlock*
		constexpr auto NameRoot = 0x448; // UWidget*
		constexpr auto PlayerAvatar = 0x450; // UImage*
		constexpr auto CachedPlayerAvatar = 0x458; // UTexture*
		constexpr auto VoiceIndicator = 0x460; // UWidget*
		constexpr auto VoiceSwitcher = 0x468; // UWidgetSwitcher*
		constexpr auto MuteSwitcher = 0x470; // UWidgetSwitcher*
		constexpr auto bShowVoiceIndicator = 0x478; // bool
		constexpr auto UpdateInterval = 0x480; // float
		constexpr auto BackgroundSwitcher = 0x488; // UWidgetSwitcher*
		constexpr auto PresenceText = 0x490; // UTextBlock*
		constexpr auto RankRoot = 0x4b0; // UWidget*
		constexpr auto RankImage = 0x4b8; // UImage*
		constexpr auto StreakIcon = 0x4e0; // UPortalWarsProgressionIconWidget*
		constexpr auto LevelIcon = 0x508; // UPortalWarsProgressionIconWidget*
		constexpr auto IconsRoot = 0x518; // UCanvasPanel*
		constexpr auto bShowIcons = 0x520; // bool
		constexpr auto bCompactIcons = 0x521; // bool
		constexpr auto CompactIconsAnimation = 0x528; // UWidgetAnimation*
		constexpr auto SocialIconsAnimation = 0x530; // UWidgetAnimation*
		constexpr auto NameTagPanel = 0x538; // UPanelWidget*
		constexpr auto NameTagWidgetClass = 0x540; // UPortalWarsNameTagWidget*
		constexpr auto PlayerBanner = 0x548; // UImage*
		constexpr auto bInitLocalPlayer = 0x639; // bool
	}

	namespace n_UInterpGroup {
		constexpr auto InterpTracks = 0x30; // TArray<UInterpTrack*>
		constexpr auto GroupName = 0x40; // FName
		constexpr auto GroupColor = 0x48; // FColor
		constexpr auto bCollapsed = 0x4c; // char : 1
		constexpr auto bVisible = 0x4c; // char : 1
		constexpr auto bIsFolder = 0x4c; // char : 1
		constexpr auto bIsParented = 0x4c; // char : 1
		constexpr auto bIsSelected = 0x4c; // char : 1
	}

	namespace n_UPortalWarsPlayStreakDialogWidget {
		constexpr auto CurrencyText = 0x3c8; // UTextBlock*
		constexpr auto PlayStreakReward = 0x3d0; // UPortalWarsPlayStreakRewardWidget*
	}

	namespace n_UAkComponent {
		constexpr auto bUseSpatialAudio = 0x1f8; // bool
		constexpr auto EarlyReflectionAuxBus = 0x200; // UAkAuxBus*
		constexpr auto EarlyReflectionAuxBusName = 0x208; // FString
		constexpr auto EarlyReflectionOrder = 0x218; // int32_t
		constexpr auto EarlyReflectionBusSendGain = 0x21c; // float
		constexpr auto EarlyReflectionMaxPathLength = 0x220; // float
		constexpr auto OcclusionCollisionChannel = 0x224; // ECollisionChannel
		constexpr auto EnableSpotReflectors = 0x22c; // char : 1
		constexpr auto roomReverbAuxBusGain = 0x230; // float
		constexpr auto diffractionMaxEdges = 0x234; // int32_t
		constexpr auto diffractionMaxPaths = 0x238; // int32_t
		constexpr auto diffractionMaxPathLength = 0x23c; // float
		constexpr auto DrawFirstOrderReflections = 0x240; // char : 1
		constexpr auto DrawSecondOrderReflections = 0x240; // char : 1
		constexpr auto DrawHigherOrderReflections = 0x240; // char : 1
		constexpr auto DrawDiffraction = 0x240; // char : 1
		constexpr auto StopWhenOwnerDestroyed = 0x244; // bool
		constexpr auto AttenuationScalingFactor = 0x248; // float
		constexpr auto OcclusionRefreshInterval = 0x24c; // float
		constexpr auto bUseReverbVolumes = 0x250; // bool
		constexpr auto AkAudioEvent = 0x258; // UAkAudioEvent*
		constexpr auto EventName = 0x260; // FString
		constexpr auto bAutoManageAttachment = 0x3e0; // char : 1
		constexpr auto AutoAttachLocationRule = 0x3e1; // EAttachmentRule
		constexpr auto AutoAttachRotationRule = 0x3e2; // EAttachmentRule
		constexpr auto AutoAttachScaleRule = 0x3e3; // EAttachmentRule
		constexpr auto AutoAttachParent = 0x3e4; // TWeakObjectPtr<USceneComponent>
		constexpr auto AutoAttachSocketName = 0x3ec; // FName
	}

	namespace n_UOodleNetworkTrainerCommandlet {
		constexpr auto bCompressionTest = 0x80; // bool
		constexpr auto HashTableSize = 0x84; // int32_t
		constexpr auto DictionarySize = 0x88; // int32_t
		constexpr auto DictionaryTrials = 0x8c; // int32_t
		constexpr auto TrialRandomness = 0x90; // int32_t
		constexpr auto TrialGenerations = 0x94; // int32_t
		constexpr auto bNoTrials = 0x98; // bool
	}

	namespace n_UPortalWarsPartyEntryWidget {
		constexpr auto PlayerEntry = 0x640; // UPortalWarsPlayerEntryWidget*
		constexpr auto LeaderIndicator = 0x648; // UWidget*
		constexpr auto EntrySwitcher = 0x650; // UWidgetSwitcher*
		constexpr auto OnInviteButtonClickedDelegate = 0x658; // FMulticastInlineDelegate
		constexpr auto InviteButton = 0x668; // UButton*
		constexpr auto InviteRoot = 0x670; // UWidget*
	}

	namespace n_UParticleModuleEventReceiverSpawn {
		constexpr auto SpawnCount = 0x40; // FRawDistributionFloat
		constexpr auto bUseParticleTime = 0x70; // char : 1
		constexpr auto bUsePSysLocation = 0x70; // char : 1
		constexpr auto bInheritVelocity = 0x70; // char : 1
		constexpr auto InheritVelocityScale = 0x78; // FRawDistributionVector
		constexpr auto PhysicalMaterials = 0xc0; // TArray<UPhysicalMaterial*>
		constexpr auto bBanPhysicalMaterials = 0xd0; // char : 1
	}

	namespace n_UMaterialFunctionInterface {
		constexpr auto StateId = 0x28; // FGuid
		constexpr auto MaterialFunctionUsage = 0x38; // EMaterialFunctionUsage
	}

	namespace n_UNamedInterfaces {
		constexpr auto NamedInterfaces = 0x28; // TArray<FNamedInterface>
		constexpr auto NamedInterfaceDefs = 0x38; // TArray<FNamedInterfaceDef>
	}

	namespace n_UExporter {
		constexpr auto SupportedClass = 0x28; // UObject*
		constexpr auto ExportRootScope = 0x30; // UObject*
		constexpr auto FormatExtension = 0x38; // TArray<FString>
		constexpr auto FormatDescription = 0x48; // TArray<FString>
		constexpr auto PreferredFormatIndex = 0x58; // int32_t
		constexpr auto TextIndent = 0x5c; // int32_t
		constexpr auto bText = 0x60; // char : 1
		constexpr auto bSelectedOnly = 0x60; // char : 1
		constexpr auto bForceFileOperations = 0x60; // char : 1
		constexpr auto ExportTask = 0x68; // UAssetExportTask*
	}

	namespace n_AServerStatReplicator {
		constexpr auto bUpdateStatNet = 0x220; // bool
		constexpr auto bOverwriteClientStats = 0x221; // bool
		constexpr auto Channels = 0x224; // uint32_t
		constexpr auto InRate = 0x228; // uint32_t
		constexpr auto OutRate = 0x22c; // uint32_t
		constexpr auto MaxPacketOverhead = 0x234; // uint32_t
		constexpr auto InRateClientMax = 0x238; // uint32_t
		constexpr auto InRateClientMin = 0x23c; // uint32_t
		constexpr auto InRateClientAvg = 0x240; // uint32_t
		constexpr auto InPacketsClientMax = 0x244; // uint32_t
		constexpr auto InPacketsClientMin = 0x248; // uint32_t
		constexpr auto InPacketsClientAvg = 0x24c; // uint32_t
		constexpr auto OutRateClientMax = 0x250; // uint32_t
		constexpr auto OutRateClientMin = 0x254; // uint32_t
		constexpr auto OutRateClientAvg = 0x258; // uint32_t
		constexpr auto OutPacketsClientMax = 0x25c; // uint32_t
		constexpr auto OutPacketsClientMin = 0x260; // uint32_t
		constexpr auto OutPacketsClientAvg = 0x264; // uint32_t
		constexpr auto NetNumClients = 0x268; // uint32_t
		constexpr auto InPackets = 0x26c; // uint32_t
		constexpr auto OutPackets = 0x270; // uint32_t
		constexpr auto InBunches = 0x274; // uint32_t
		constexpr auto OutBunches = 0x278; // uint32_t
		constexpr auto OutLoss = 0x27c; // uint32_t
		constexpr auto InLoss = 0x280; // uint32_t
		constexpr auto VoiceBytesSent = 0x284; // uint32_t
		constexpr auto VoiceBytesRecv = 0x288; // uint32_t
		constexpr auto VoicePacketsSent = 0x28c; // uint32_t
		constexpr auto VoicePacketsRecv = 0x290; // uint32_t
		constexpr auto PercentInVoice = 0x294; // uint32_t
		constexpr auto PercentOutVoice = 0x298; // uint32_t
		constexpr auto NumActorChannels = 0x29c; // uint32_t
		constexpr auto NumConsideredActors = 0x2a0; // uint32_t
		constexpr auto PrioritizedActors = 0x2a4; // uint32_t
		constexpr auto NumRelevantActors = 0x2a8; // uint32_t
		constexpr auto NumRelevantDeletedActors = 0x2ac; // uint32_t
		constexpr auto NumReplicatedActorAttempts = 0x2b0; // uint32_t
		constexpr auto NumReplicatedActors = 0x2b4; // uint32_t
		constexpr auto NumActors = 0x2b8; // uint32_t
		constexpr auto NumNetActors = 0x2bc; // uint32_t
		constexpr auto NumDormantActors = 0x2c0; // uint32_t
		constexpr auto NumInitiallyDormantActors = 0x2c4; // uint32_t
		constexpr auto NumNetGUIDsAckd = 0x2c8; // uint32_t
		constexpr auto NumNetGUIDsPending = 0x2cc; // uint32_t
		constexpr auto NumNetGUIDsUnAckd = 0x2d0; // uint32_t
		constexpr auto ObjPathBytes = 0x2d4; // uint32_t
		constexpr auto NetGUIDOutRate = 0x2d8; // uint32_t
		constexpr auto NetGUIDInRate = 0x2dc; // uint32_t
		constexpr auto NetSaturated = 0x2e0; // uint32_t
	}

	namespace n_UMovieSceneAudioSection {
		constexpr auto Sound = 0xe8; // USoundBase*
		constexpr auto StartFrameOffset = 0xf0; // FFrameNumber
		constexpr auto StartOffset = 0xf4; // float
		constexpr auto AudioStartTime = 0xf8; // float
		constexpr auto AudioDilationFactor = 0xfc; // float
		constexpr auto AudioVolume = 0x100; // float
		constexpr auto SoundVolume = 0x108; // FMovieSceneFloatChannel
		constexpr auto PitchMultiplier = 0x1a8; // FMovieSceneFloatChannel
		constexpr auto AttachActorData = 0x248; // FMovieSceneActorReferenceData
		constexpr auto bLooping = 0x2f8; // bool
		constexpr auto bSuppressSubtitles = 0x2f9; // bool
		constexpr auto bOverrideAttenuation = 0x2fa; // bool
		constexpr auto AttenuationSettings = 0x300; // USoundAttenuation*
		constexpr auto OnQueueSubtitles = 0x308; // FDelegate
		constexpr auto OnAudioFinished = 0x318; // FMulticastInlineDelegate
		constexpr auto OnAudioPlaybackPercent = 0x328; // FMulticastInlineDelegate
	}

	namespace n_UAnimNotifyState_Trail {
		constexpr auto PSTemplate = 0x30; // UParticleSystem*
		constexpr auto FirstSocketName = 0x38; // FName
		constexpr auto SecondSocketName = 0x40; // FName
		constexpr auto WidthScaleMode = 0x48; // ETrailWidthMode
		constexpr auto WidthScaleCurve = 0x4c; // FName
		constexpr auto bRecycleSpawnedSystems = 0x54; // char : 1
	}

	namespace n_UARComponent {
		constexpr auto NativeID = 0x1f8; // FGuid
		constexpr auto bUseDefaultReplication = 0x238; // bool
		constexpr auto DefaultMeshMaterial = 0x240; // UMaterialInterface*
		constexpr auto DefaultWireframeMeshMaterial = 0x248; // UMaterialInterface*
		constexpr auto MRMeshComponent = 0x250; // UMRMeshComponent*
		constexpr auto MyTrackedGeometry = 0x258; // UARTrackedGeometry*
	}

	namespace n_APortalWarsPickup {
		constexpr auto PickupLifetime = 0x22c; // float
		constexpr auto InitVelocityMultiplier = 0x230; // float
		constexpr auto validForAI = 0x234; // bool
		constexpr auto AllowAutoPickup = 0x235; // bool
		constexpr auto AllowManualPickup = 0x236; // bool
		constexpr auto PickupMesh = 0x238; // UStaticMeshComponent*
		constexpr auto bIsGravityEnabled = 0x240; // bool
		constexpr auto PickupDistance = 0x244; // float
		constexpr auto Goal = 0x260; // APortalWarsTutorialGoal*
		constexpr auto HiddenUntilGoal = 0x268; // int32_t
	}

	namespace n_UMagicLeapARPinComponent {
		constexpr auto ObjectUID = 0x1f8; // FString
		constexpr auto UserIndex = 0x208; // int32_t
		constexpr auto AutoPinType = 0x20c; // EMagicLeapAutoPinType
		constexpr auto bShouldPinActor = 0x20d; // bool
		constexpr auto PinDataClass = 0x210; // UMagicLeapARPinSaveGame*
		constexpr auto SearchPinTypes = 0x218; // TSet<EMagicLeapARPinType>
		constexpr auto SearchVolume = 0x268; // USphereComponent*
		constexpr auto OnPersistentEntityPinned = 0x270; // FMulticastInlineDelegate
		constexpr auto OnPersistentEntityPinLost = 0x280; // FMulticastInlineDelegate
		constexpr auto OnPinDataLoadAttemptCompleted = 0x290; // FMulticastInlineDelegate
		constexpr auto PinnedCFUID = 0x2a0; // FGuid
		constexpr auto PinnedSceneComponent = 0x2b0; // USceneComponent*
		constexpr auto PinData = 0x2b8; // UMagicLeapARPinSaveGame*
	}

	namespace n_ULoudnessNRT {
		constexpr auto Settings = 0x78; // ULoudnessNRTSettings*
	}

	namespace n_UProceduralMeshComponent {
		constexpr auto bUseComplexAsSimpleCollision = 0x480; // bool
		constexpr auto bUseAsyncCooking = 0x481; // bool
		constexpr auto ProcMeshBodySetup = 0x488; // UBodySetup*
		constexpr auto ProcMeshSections = 0x490; // TArray<FProcMeshSection>
		constexpr auto CollisionConvexElems = 0x4a0; // TArray<FKConvexElem>
		constexpr auto LocalBounds = 0x4b0; // FBoxSphereBounds
		constexpr auto AsyncBodySetupQueue = 0x4d0; // TArray<UBodySetup*>
	}

	namespace n_UAkAudioEvent {
		constexpr auto RequiredBank = 0x28; // UAkAudioBank*
		constexpr auto MaxAttenuationRadius = 0x30; // float
		constexpr auto IsInfinite = 0x34; // bool
		constexpr auto MinimumDuration = 0x38; // float
		constexpr auto MaximumDuration = 0x3c; // float
	}

	namespace n_UBTCompositeNode {
		constexpr auto Children = 0x58; // TArray<FBTCompositeChild>
		constexpr auto Services = 0x68; // TArray<UBTService*>
		constexpr auto bApplyDecoratorScope = 0x88; // char : 1
	}

	namespace n_UShaderPlatformQualitySettings {
		constexpr auto QualityOverrides = 0x28; // FMaterialQualityOverrides [0x4]
	}

	namespace n_UAssetExportTask {
		constexpr auto Object = 0x28; // UObject*
		constexpr auto Exporter = 0x30; // UExporter*
		constexpr auto Filename = 0x38; // FString
		constexpr auto bSelected = 0x48; // bool
		constexpr auto bReplaceIdentical = 0x49; // bool
		constexpr auto bPrompt = 0x4a; // bool
		constexpr auto bAutomated = 0x4b; // bool
		constexpr auto bUseFileArchive = 0x4c; // bool
		constexpr auto bWriteEmptyFiles = 0x4d; // bool
		constexpr auto IgnoreObjectList = 0x50; // TArray<UObject*>
		constexpr auto Options = 0x60; // UObject*
		constexpr auto Errors = 0x68; // TArray<FString>
	}

	namespace n_UBlendSpace1D {
		constexpr auto bScaleAnimation = 0x148; // bool
	}

	namespace n_UMediaPlayer {
		constexpr auto OnEndReached = 0x28; // FMulticastInlineDelegate
		constexpr auto OnMediaClosed = 0x38; // FMulticastInlineDelegate
		constexpr auto OnMediaOpened = 0x48; // FMulticastInlineDelegate
		constexpr auto OnMediaOpenFailed = 0x58; // FMulticastInlineDelegate
		constexpr auto OnPlaybackResumed = 0x68; // FMulticastInlineDelegate
		constexpr auto OnPlaybackSuspended = 0x78; // FMulticastInlineDelegate
		constexpr auto OnSeekCompleted = 0x88; // FMulticastInlineDelegate
		constexpr auto OnTracksChanged = 0x98; // FMulticastInlineDelegate
		constexpr auto CacheAhead = 0xa8; // FTimespan
		constexpr auto CacheBehind = 0xb0; // FTimespan
		constexpr auto CacheBehindGame = 0xb8; // FTimespan
		constexpr auto NativeAudioOut = 0xc0; // bool
		constexpr auto PlayOnOpen = 0xc1; // bool
		constexpr auto Shuffle = 0xc4; // char : 1
		constexpr auto Loop = 0xc4; // char : 1
		constexpr auto Playlist = 0xc8; // UMediaPlaylist*
		constexpr auto PlaylistIndex = 0xd0; // int32_t
		constexpr auto TimeDelay = 0xd8; // FTimespan
		constexpr auto HorizontalFieldOfView = 0xe0; // float
		constexpr auto VerticalFieldOfView = 0xe4; // float
		constexpr auto ViewRotation = 0xe8; // FRotator
		constexpr auto PlayerGuid = 0x120; // FGuid
	}

	namespace n_UCompositeCurveTable {
		constexpr auto ParentTables = 0xa0; // TArray<UCurveTable*>
		constexpr auto OldParentTables = 0xb0; // TArray<UCurveTable*>
	}

	namespace n_UPortalWarsReplayEntryWidget {
		constexpr auto NameText = 0x420; // UTextBlock*
		constexpr auto DateText = 0x428; // UTextBlock*
		constexpr auto LengthText = 0x430; // UTextBlock*
		constexpr auto MapText = 0x438; // UTextBlock*
		constexpr auto ModeText = 0x440; // UTextBlock*
		constexpr auto MapImage = 0x448; // UImage*
		constexpr auto ScoreText = 0x450; // UTextBlock*
		constexpr auto KillsText = 0x458; // UTextBlock*
		constexpr auto DeathsText = 0x460; // UTextBlock*
		constexpr auto WinScoreColor = 0x468; // FLinearColor
		constexpr auto LossScoreColor = 0x478; // FLinearColor
		constexpr auto TieScoreColor = 0x488; // FLinearColor
		constexpr auto BackgroundSwitcher = 0x4e0; // UWidgetSwitcher*
		constexpr auto ParentWidget = 0x528; // UPortalWarsReplaysWidget*
	}

	namespace n_UMaterialExpressionLandscapeLayerSwitch {
		constexpr auto LayerUsed = 0x40; // FExpressionInput
		constexpr auto LayerNotUsed = 0x54; // FExpressionInput
		constexpr auto ParameterName = 0x68; // FName
		constexpr auto PreviewUsed = 0x70; // char : 1
		constexpr auto ExpressionGUID = 0x74; // FGuid
	}

	namespace n_URotatingMovementComponent {
		constexpr auto RotationRate = 0xf0; // FRotator
		constexpr auto PivotTranslation = 0xfc; // FVector
		constexpr auto bRotationInLocalSpace = 0x108; // char : 1
	}

	namespace n_UPortalWarsVoteEntryWidget {
		constexpr auto MapNameText = 0x428; // UTextBlock*
		constexpr auto MapImage = 0x430; // UImage*
		constexpr auto DefaultImage = 0x438; // UTexture2D*
		constexpr auto ModeNameText = 0x448; // UTextBlock*
		constexpr auto NumVotesText = 0x450; // UTextBlock*
		constexpr auto VotesText = 0x458; // UTextBlock*
		constexpr auto VotedIndicator = 0x468; // UWidget*
		constexpr auto VotedAnimation = 0x470; // UWidgetAnimation*
		constexpr auto DefaultButtonStyle = 0x478; // FButtonStyle
		constexpr auto SelectedButtonStyle = 0x6f0; // FButtonStyle
		constexpr auto FadeScrim = 0x968; // UImage*
		constexpr auto DefaultFadeScrim = 0x970; // UTexture2D*
		constexpr auto SelectedFadeScrim = 0x978; // UTexture2D*
	}

	namespace n_UAkPS5InitializationSettings {
		constexpr auto CommonSettings = 0x28; // FAkCommonInitializationSettings
		constexpr auto CommunicationSettings = 0x90; // FAkCommunicationSettingsWithSystemInitialization
		constexpr auto AdvancedSettings = 0xb8; // FAkPS5AdvancedInitializationSettings
	}

	namespace n_UAkSettingsPerUser {
		constexpr auto WwiseWindowsInstallationPath = 0x28; // FDirectoryPath
		constexpr auto WwiseMacInstallationPath = 0x38; // FFilePath
		constexpr auto WaapiIPAddress = 0x48; // FString
		constexpr auto WaapiPort = 0x58; // uint32_t
		constexpr auto SuppressWwiseProjectPathWarnings = 0x5c; // bool
	}

	namespace n_UBTTask_MoveTo {
		constexpr auto AcceptableRadius = 0x98; // float
		constexpr auto FilterClass = 0xa0; // UNavigationQueryFilter*
		constexpr auto ObservedBlackboardValueTolerance = 0xa8; // float
		constexpr auto bObserveBlackboardValue = 0xac; // char : 1
		constexpr auto bAllowStrafe = 0xac; // char : 1
		constexpr auto bAllowPartialPath = 0xac; // char : 1
		constexpr auto bTrackMovingGoal = 0xac; // char : 1
		constexpr auto bProjectGoalLocation = 0xac; // char : 1
		constexpr auto bReachTestIncludesAgentRadius = 0xac; // char : 1
		constexpr auto bReachTestIncludesGoalRadius = 0xac; // char : 1
		constexpr auto bStopOnOverlap = 0xac; // char : 1
		constexpr auto bStopOnOverlapNeedsUpdate = 0xad; // char : 1
	}

	namespace n_UNiagaraDataInterfaceSkeletalMesh {
		constexpr auto SourceMode = 0x38; // ENDISkeletalMesh_SourceMode
		constexpr auto Source = 0x40; // AActor*
		constexpr auto MeshUserParameter = 0x48; // FNiagaraUserParameterBinding
		constexpr auto SourceComponent = 0x68; // USkeletalMeshComponent*
		constexpr auto SkinningMode = 0x70; // ENDISkeletalMesh_SkinningMode
		constexpr auto SamplingRegions = 0x78; // TArray<FName>
		constexpr auto WholeMeshLOD = 0x88; // int32_t
		constexpr auto FilteredBones = 0x90; // TArray<FName>
		constexpr auto FilteredSockets = 0xa0; // TArray<FName>
		constexpr auto ExcludeBoneName = 0xb0; // FName
		constexpr auto bExcludeBone = 0xb8; // char : 1
		constexpr auto UvSetIndex = 0xbc; // int32_t
		constexpr auto bRequireCurrentFrameData = 0xc0; // bool
	}

	namespace n_AIntervalGizmoActor {
		constexpr auto UpIntervalComponent = 0x220; // UGizmoLineHandleComponent*
		constexpr auto DownIntervalComponent = 0x228; // UGizmoLineHandleComponent*
		constexpr auto ForwardIntervalComponent = 0x230; // UGizmoLineHandleComponent*
	}

	namespace n_UMaterialExpressionReflectionCapturePassSwitch {
		constexpr auto Default = 0x40; // FExpressionInput
		constexpr auto Reflection = 0x54; // FExpressionInput
	}

	namespace n_UBTDecorator_Blackboard {
		constexpr auto IntValue = 0x90; // int32_t
		constexpr auto FloatValue = 0x94; // float
		constexpr auto StringValue = 0x98; // FString
		constexpr auto CachedDescription = 0xa8; // FString
		constexpr auto OperationType = 0xb8; // char
		constexpr auto NotifyObserver = 0xb9; // EBTBlackboardRestart
	}

	namespace n_UFieldSystemMetaDataProcessingResolution {
		constexpr auto ResolutionType = 0xb0; // EFieldResolutionType
	}

	namespace n_UNiagaraDataInterfaceVector4Curve {
		constexpr auto XCurve = 0x70; // FRichCurve
		constexpr auto YCurve = 0xf0; // FRichCurve
		constexpr auto ZCurve = 0x170; // FRichCurve
		constexpr auto WCurve = 0x1f0; // FRichCurve
	}

	namespace n_UInteractiveGizmo {
		constexpr auto InputBehaviors = 0x30; // UInputBehaviorSet*
	}

	namespace n_UParticleModuleMeshRotationRateMultiplyLife {
		constexpr auto LifeMultiplier = 0x30; // FRawDistributionVector
	}

	namespace n_UAsyncActionChangePrimaryAssetBundles {
		constexpr auto Completed = 0x78; // FMulticastInlineDelegate
	}

	namespace n_UParticleModuleSubUVMovie {
		constexpr auto bUseEmitterTime = 0x70; // char : 1
		constexpr auto FrameRate = 0x78; // FRawDistributionFloat
		constexpr auto StartingFrame = 0xa8; // int32_t
	}

	namespace n_UQuitMatchCallbackProxy {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_UTreeView {
		constexpr auto BP_OnGetItemChildren = 0x378; // FDelegate
		constexpr auto BP_OnItemExpansionChanged = 0x388; // FMulticastInlineDelegate
	}

	namespace n_UBTDecorator_WeaponCheck {
		constexpr auto WeaponClass = 0x68; // AGun*
	}

	namespace n_UWidgetTree {
		constexpr auto RootWidget = 0x28; // UWidget*
	}

	namespace n_APawn {
		constexpr auto bUseControllerRotationPitch = 0x228; // char : 1
		constexpr auto bUseControllerRotationYaw = 0x228; // char : 1
		constexpr auto bUseControllerRotationRoll = 0x228; // char : 1
		constexpr auto bCanAffectNavigationGeneration = 0x228; // char : 1
		constexpr auto BaseEyeHeight = 0x22c; // float
		constexpr auto AutoPossessPlayer = 0x230; // EAutoReceiveInput
		constexpr auto AutoPossessAI = 0x231; // EAutoPossessAI
		constexpr auto RemoteViewPitch = 0x232; // char
		constexpr auto AIControllerClass = 0x238; // AController*
		constexpr auto PlayerState = 0x240; // APlayerState*
		constexpr auto LastHitBy = 0x250; // AController*
		constexpr auto Controller = 0x258; // AController*
		constexpr auto ControlInputVector = 0x264; // FVector
		constexpr auto LastControlInputVector = 0x270; // FVector
	}

	namespace n_UMaterialExpressionTruncate {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UGameplayTask_SpawnActor {
		constexpr auto Success = 0x68; // FMulticastInlineDelegate
		constexpr auto DidNotSpawn = 0x78; // FMulticastInlineDelegate
		constexpr auto ClassToSpawn = 0xa0; // AActor*
	}

	namespace n_APortalWarsVoteInfo {
		constexpr auto VoteOption = 0x220; // FVoteOption
		constexpr auto Voters = 0x260; // TArray<APortalWarsPlayerState*>
	}

	namespace n_ASceneCapture2D {
		constexpr auto CaptureComponent2D = 0x230; // USceneCaptureComponent2D*
	}

	namespace n_UPortalWarsCustomScrollWidget {
		constexpr auto ChildWidgetIds = 0x2b8; // TArray<FString>
		constexpr auto ChildWidgets = 0x2c8; // TMap<FString, UWidget*>
		constexpr auto ChildWidgetClass = 0x318; // UUserWidget*
		constexpr auto ScrollDuration = 0x360; // float
		constexpr auto ScrollDurationDelta = 0x364; // float
		constexpr auto MinScrollDuration = 0x368; // float
		constexpr auto bFadeLeftEdge = 0x36c; // bool
		constexpr auto bFadeRightEdge = 0x36d; // bool
		constexpr auto EdgeOpacity = 0x370; // float
		constexpr auto InnerEdgeOpacity = 0x374; // float
		constexpr auto bWrapAround = 0x378; // bool
		constexpr auto ScrollCenterLocation = 0x379; // EScrollCenterLocation
		constexpr auto DesiredNumVisible = 0x37c; // int32_t
		constexpr auto ChildPanel = 0x380; // UPanelWidget*
		constexpr auto ChildHorizontalAlignment = 0x388; // EHorizontalAlignment
		constexpr auto ChildVerticalAlignment = 0x389; // EVerticalAlignment
		constexpr auto PrevButton = 0x390; // UPortalWarsButton*
		constexpr auto NextButton = 0x398; // UPortalWarsButton*
		constexpr auto ScrollSwitcher = 0x3a0; // UWidgetSwitcher*
		constexpr auto ScrollBox = 0x3a8; // UScrollBox*
	}

	namespace n_UMovieSceneBindingOverrides {
		constexpr auto BindingData = 0x28; // TArray<FMovieSceneBindingOverrideData>
	}

	namespace n_UEnvQueryTest_Distance {
		constexpr auto TestMode = 0x1f8; // EEnvTestDistance
		constexpr auto DistanceTo = 0x200; // UEnvQueryContext*
	}

	namespace n_UDistributionVectorUniformCurve {
		constexpr auto ConstantCurve = 0x38; // FInterpCurveTwoVectors
		constexpr auto bLockAxes1 = 0x50; // char : 1
		constexpr auto bLockAxes2 = 0x50; // char : 1
		constexpr auto LockedAxes = 0x54; // EDistributionVectorLockFlags [0x2]
		constexpr auto MirrorFlags = 0x56; // EDistributionVectorMirrorFlags [0x3]
		constexpr auto bUseExtremes = 0x5c; // char : 1
	}

	namespace n_UBlackboardKeyType_NativeEnum {
		constexpr auto EnumName = 0x30; // FString
		constexpr auto EnumType = 0x40; // UEnum*
	}

	namespace n_APortalWarsTakedownVIPHUD {
		constexpr auto VIPHUDOverlayWidget = 0x450; // UPortalWarsVIPHUDOverlayWidget*
		constexpr auto VIPHUDOverlayWidgetClass = 0x458; // UPortalWarsVIPHUDOverlayWidget*
		constexpr auto VIPNameIndicatorWidgetClass = 0x460; // UPortalWarsIndicatorWidget*
		constexpr auto VipAlertEvent = 0x468; // UAkAudioEvent*
	}

	namespace n_USoundNodeDoppler {
		constexpr auto DopplerIntensity = 0x48; // float
		constexpr auto bUseSmoothing = 0x4c; // bool
		constexpr auto SmoothingInterpSpeed = 0x50; // float
	}

	namespace n_UMaterialExpressionConstantBiasScale {
		constexpr auto Input = 0x40; // FExpressionInput
		constexpr auto Bias = 0x54; // float
		constexpr auto Scale = 0x58; // float
	}

	namespace n_UDeviceProfile {
		constexpr auto DeviceType = 0x38; // FString
		constexpr auto BaseProfileName = 0x48; // FString
		constexpr auto Parent = 0x58; // UObject*
		constexpr auto CVars = 0x88; // TArray<FString>
	}

	namespace n_USkeletalBodySetup {
		constexpr auto bSkipScaleFromAnimation = 0x2a0; // bool
		constexpr auto PhysicalAnimationData = 0x2a8; // TArray<FPhysicalAnimationProfile>
	}

	namespace n_UModelComponent {
		constexpr auto ModelBodySetup = 0x468; // UBodySetup*
	}

	namespace n_UStaticMeshSocket {
		constexpr auto SocketName = 0x28; // FName
		constexpr auto RelativeLocation = 0x30; // FVector
		constexpr auto RelativeRotation = 0x3c; // FRotator
		constexpr auto RelativeScale = 0x48; // FVector
		constexpr auto Tag = 0x58; // FString
	}

	namespace n_UPortalWarsSaveGame {
		constexpr auto FOV = 0x34; // float
		constexpr auto ColorblindMode = 0x38; // int32_t
		constexpr auto ColorblindModeIntensity = 0x3c; // float
		constexpr auto MasterVolume = 0x40; // float
		constexpr auto MusicVolume = 0x44; // float
		constexpr auto GameplayVolume = 0x48; // float
		constexpr auto AnnouncerVolume = 0x4c; // float
		constexpr auto AmbientVolume = 0x50; // float
		constexpr auto VOIPVolume = 0x54; // float
		constexpr auto bOpenMic = 0x58; // bool
		constexpr auto bProximityEnabled = 0x59; // bool
		constexpr auto VoiceChatInputDevice = 0x60; // FString
		constexpr auto VoiceChatOutputDevice = 0x70; // FString
		constexpr auto bMuteWhileMinimized = 0x80; // bool
		constexpr auto ToggleCrouch = 0x81; // bool
		constexpr auto ToggleZoom = 0x82; // bool
		constexpr auto ToggleSprint = 0x83; // bool
		constexpr auto HorizontalMouseSensitivity = 0x84; // float
		constexpr auto VerticalMouseSensitivity = 0x88; // float
		constexpr auto MouseZoomSensitivityMultiplier = 0x8c; // float
		constexpr auto MouseInverted = 0x90; // bool
		constexpr auto MouseAutosprint = 0x91; // bool
		constexpr auto EnableMouseSmoothing = 0x92; // bool
		constexpr auto KeyBindings = 0x98; // TArray<FKeyConfigurationInfo>
		constexpr auto HorizontalControllerSensitivity = 0xa8; // float
		constexpr auto VerticalControllerSensitivity = 0xac; // float
		constexpr auto ControllerAccelerationSensitivity = 0xb0; // float
		constexpr auto ControllerZoomSensitivityMultiplier = 0xb4; // float
		constexpr auto ControllerInnerDeadzone = 0xb8; // float
		constexpr auto ControllerOuterDeadzone = 0xbc; // float
		constexpr auto ControllerAimAssistStrength = 0xc0; // float
		constexpr auto ControllerInverted = 0xc4; // bool
		constexpr auto ControllerAutosprint = 0xc5; // bool
		constexpr auto ControllerVibrationEnabled = 0xc6; // bool
		constexpr auto ControllerGameplayPreset = 0xc8; // int32_t
		constexpr auto CustomControllerBindings = 0xd0; // FControllerKeybindPreset
		constexpr auto ShouldShowBlood = 0x140; // bool
		constexpr auto PlayKillcamMode = 0x144; // int32_t
		constexpr auto ShouldPlayKillcam = 0x148; // bool
		constexpr auto ShouldRecordReplay = 0x149; // bool
		constexpr auto ClamberMode = 0x14c; // int32_t
		constexpr auto InputDevice = 0x150; // int32_t
		constexpr auto EnemyColor = 0x154; // FLinearColor
		constexpr auto EnemyOutlineColor = 0x164; // FLinearColor
		constexpr auto AllyOutlineColor = 0x174; // FLinearColor
		constexpr auto AllyColorThroughWalls = 0x184; // FLinearColor
		constexpr auto ShowFPS = 0x194; // bool
		constexpr auto ShowLatency = 0x195; // bool
		constexpr auto ShowPing = 0x196; // bool
		constexpr auto ShowNetInfo = 0x197; // bool
		constexpr auto ShowSubtitles = 0x198; // bool
		constexpr auto ShowDamageNumbers = 0x199; // bool
		constexpr auto ShowLowAmmo = 0x19a; // bool
		constexpr auto ShowSprintCrosshair = 0x19b; // bool
		constexpr auto CustomCrosshairs = 0x1a0; // TMap<int32_t, int32_t>
		constexpr auto CustomCrosshairColor = 0x1f0; // FLinearColor
		constexpr auto EnemyCustomCrosshairColor = 0x200; // FLinearColor
		constexpr auto WantsToCrossPlay = 0x210; // bool
		constexpr auto bAnonymousMode = 0x211; // bool
		constexpr auto bHideNames = 0x212; // bool
		constexpr auto bPartyChatOnly = 0x213; // bool
		constexpr auto bHasCompletedTutorial = 0x214; // bool
		constexpr auto TutorialStageID = 0x218; // int32_t
		constexpr auto bHasWatchedIntroVideo = 0x21c; // bool
		constexpr auto bHasSeenBattlePassDialog = 0x21d; // bool
		constexpr auto EquippedCustomizations = 0x220; // TArray<FCustomizationId>
		constexpr auto ViewedCustomizations = 0x230; // TArray<FCustomizationId>
		constexpr auto ViewedCustomizationCategories = 0x240; // TSet<FCustomizationCategory>
		constexpr auto bHasSeenLocker = 0x290; // bool
		constexpr auto PrevNewCustomizations = 0x298; // TSet<FCustomizationId>
		constexpr auto bHasSyncedNewCustomizations = 0x2e8; // bool
		constexpr auto ViewedStoreItems = 0x2f0; // TArray<FStoreItemInfo>
		constexpr auto ViewedLimitedTimeOffers = 0x300; // TArray<FString>
		constexpr auto LastViewedStore = 0x310; // TArray<FStoreItemInfo>
		constexpr auto ViewedChallenges = 0x320; // TArray<FChallengeData>
		constexpr auto MuteList = 0x330; // TArray<FString>
		constexpr auto LastLoginTime = 0x340; // FDateTime
		constexpr auto LoginAuthToken = 0x348; // FString
		constexpr auto PreferredMatchmakingRegionID = 0x358; // int32_t
		constexpr auto PreferredCustomRegionID = 0x35c; // int32_t
		constexpr auto UnselectedPlaylists = 0x360; // TArray<FString>
		constexpr auto PlaylistPreferences = 0x370; // TMap<FString, FPlaylistPreference>
		constexpr auto CustomGamesFilters = 0x3c0; // FCustomGameBrowserFilters
		constexpr auto CustomGamePresets = 0x3f0; // TMap<FString, FGameModeData>
		constexpr auto LastGameVersion = 0x440; // FString
	}

	namespace n_UNiagaraDataInterfaceAudioSpectrum {
		constexpr auto Resolution = 0x40; // int32_t
		constexpr auto MinimumFrequency = 0x44; // float
		constexpr auto MaximumFrequency = 0x48; // float
		constexpr auto NoiseFloorDb = 0x4c; // float
	}

	namespace n_AWorldSettings {
		constexpr auto VisibilityCellSize = 0x228; // int32_t
		constexpr auto VisibilityAggressiveness = 0x22c; // EVisibilityAggressiveness
		constexpr auto bPrecomputeVisibility = 0x22d; // char : 1
		constexpr auto bPlaceCellsOnlyAlongCameraTracks = 0x22d; // char : 1
		constexpr auto bEnableWorldBoundsChecks = 0x22d; // char : 1
		constexpr auto bEnableNavigationSystem = 0x22d; // char : 1
		constexpr auto bEnableAISystem = 0x22d; // char : 1
		constexpr auto bEnableWorldComposition = 0x22d; // char : 1
		constexpr auto bUseClientSideLevelStreamingVolumes = 0x22d; // char : 1
		constexpr auto bEnableWorldOriginRebasing = 0x22d; // char : 1
		constexpr auto bWorldGravitySet = 0x22e; // char : 1
		constexpr auto bGlobalGravitySet = 0x22e; // char : 1
		constexpr auto bMinimizeBSPSections = 0x22e; // char : 1
		constexpr auto bForceNoPrecomputedLighting = 0x22e; // char : 1
		constexpr auto bHighPriorityLoading = 0x22e; // char : 1
		constexpr auto bHighPriorityLoadingLocal = 0x22e; // char : 1
		constexpr auto bOverrideDefaultBroadphaseSettings = 0x22e; // char : 1
		constexpr auto NavigationSystemConfig = 0x230; // UNavigationSystemConfig*
		constexpr auto NavigationSystemConfigOverride = 0x238; // UNavigationSystemConfig*
		constexpr auto WorldToMeters = 0x240; // float
		constexpr auto KillZ = 0x244; // float
		constexpr auto KillZDamageType = 0x248; // UDamageType*
		constexpr auto WorldGravityZ = 0x250; // float
		constexpr auto GlobalGravityZ = 0x254; // float
		constexpr auto DefaultPhysicsVolumeClass = 0x258; // ADefaultPhysicsVolume*
		constexpr auto PhysicsCollisionHandlerClass = 0x260; // UPhysicsCollisionHandler*
		constexpr auto DefaultGameMode = 0x268; // AGameModeBase*
		constexpr auto GameNetworkManagerClass = 0x270; // AGameNetworkManager*
		constexpr auto PackedLightAndShadowMapTextureSize = 0x278; // int32_t
		constexpr auto DefaultColorScale = 0x27c; // FVector
		constexpr auto DefaultMaxDistanceFieldOcclusionDistance = 0x288; // float
		constexpr auto GlobalDistanceFieldViewDistance = 0x28c; // float
		constexpr auto DynamicIndirectShadowsSelfShadowingIntensity = 0x290; // float
		constexpr auto DefaultReverbSettings = 0x298; // FReverbSettings
		constexpr auto DefaultAmbientZoneSettings = 0x2b8; // FInteriorSettings
		constexpr auto MonoCullingDistance = 0x2dc; // float
		constexpr auto DefaultBaseSoundMix = 0x2e0; // USoundMix*
		constexpr auto TimeDilation = 0x2e8; // float
		constexpr auto MatineeTimeDilation = 0x2ec; // float
		constexpr auto DemoPlayTimeDilation = 0x2f0; // float
		constexpr auto MinGlobalTimeDilation = 0x2f4; // float
		constexpr auto MaxGlobalTimeDilation = 0x2f8; // float
		constexpr auto MinUndilatedFrameTime = 0x2fc; // float
		constexpr auto MaxUndilatedFrameTime = 0x300; // float
		constexpr auto BroadphaseSettings = 0x304; // FBroadphaseSettings
		constexpr auto Pauser = 0x348; // APlayerState*
		constexpr auto ReplicationViewers = 0x350; // TArray<FNetViewer>
		constexpr auto AssetUserData = 0x360; // TArray<UAssetUserData*>
		constexpr auto PauserPlayerState = 0x370; // APlayerState*
		constexpr auto MaxNumberOfBookmarks = 0x378; // int32_t
		constexpr auto DefaultBookmarkClass = 0x380; // UBookmarkBase*
		constexpr auto BookmarkArray = 0x388; // TArray<UBookmarkBase*>
		constexpr auto LastBookmarkClass = 0x398; // UBookmarkBase*
	}

	namespace n_UPortalWarsCheckInRewardWidget {
		constexpr auto DayText = 0x728; // UTextBlock*
		constexpr auto RewardBackgroundSwitcher = 0x730; // UWidgetSwitcher*
		constexpr auto MissedIndicator = 0x738; // UWidget*
		constexpr auto CompletedAnimation = 0x740; // UWidgetAnimation*
		constexpr auto CompleteEvent = 0x748; // UAkAudioEvent*
	}

	namespace n_UNavMovementComponent {
		constexpr auto NavAgentProps = 0xf0; // FNavAgentProperties
		constexpr auto FixedPathBrakingDistance = 0x120; // float
		constexpr auto bUpdateNavAgentWithOwnersCollision = 0x124; // char : 1
		constexpr auto bUseAccelerationForPaths = 0x124; // char : 1
		constexpr auto bUseFixedBrakingDistanceForPaths = 0x124; // char : 1
		constexpr auto MovementState = 0x125; // FMovementProperties
		constexpr auto PathFollowingComp = 0x128; // UObject*
	}

	namespace n_USoundNodeDistanceCrossFade {
		constexpr auto CrossFadeInput = 0x48; // TArray<FDistanceDatum>
	}

	namespace n_UNavigationSystemV1 {
		constexpr auto MainNavData = 0x28; // ANavigationData*
		constexpr auto AbstractNavData = 0x30; // ANavigationData*
		constexpr auto DefaultAgentName = 0x38; // FName
		constexpr auto CrowdManagerClass = 0x40; // TSoftClassPtr<UObject>
		constexpr auto bAutoCreateNavigationData = 0x68; // char : 1
		constexpr auto bSpawnNavDataInNavBoundsLevel = 0x68; // char : 1
		constexpr auto bAllowClientSideNavigation = 0x68; // char : 1
		constexpr auto bShouldDiscardSubLevelNavData = 0x68; // char : 1
		constexpr auto bTickWhilePaused = 0x68; // char : 1
		constexpr auto bSupportRebuilding = 0x68; // char : 1
		constexpr auto bInitialBuildingLocked = 0x68; // char : 1
		constexpr auto bSkipAgentHeightCheckWhenPickingNavData = 0x69; // char : 1
		constexpr auto bGenerateNavigationOnlyAroundNavigationInvokers = 0x69; // char : 1
		constexpr auto ActiveTilesUpdateInterval = 0x6c; // float
		constexpr auto DataGatheringMode = 0x70; // ENavDataGatheringModeConfig
		constexpr auto DirtyAreaWarningSizeThreshold = 0x74; // float
		constexpr auto SupportedAgents = 0x78; // TArray<FNavDataConfig>
		constexpr auto SupportedAgentsMask = 0x88; // FNavAgentSelector
		constexpr auto NavDataSet = 0x90; // TArray<ANavigationData*>
		constexpr auto NavDataRegistrationQueue = 0xa0; // TArray<ANavigationData*>
		constexpr auto OnNavDataRegisteredEvent = 0xc0; // FMulticastInlineDelegate
		constexpr auto OnNavigationGenerationFinishedDelegate = 0xd0; // FMulticastInlineDelegate
		constexpr auto OperationMode = 0x1bc; // FNavigationSystemRunMode
		constexpr auto DirtyAreasUpdateFreq = 0x15bc; // float
	}

	namespace n_AHUD {
		constexpr auto PlayerOwner = 0x220; // APlayerController*
		constexpr auto bLostFocusPaused = 0x228; // char : 1
		constexpr auto bShowHUD = 0x228; // char : 1
		constexpr auto bShowDebugInfo = 0x228; // char : 1
		constexpr auto CurrentTargetIndex = 0x22c; // int32_t
		constexpr auto bShowHitBoxDebugInfo = 0x230; // char : 1
		constexpr auto bShowOverlays = 0x230; // char : 1
		constexpr auto bEnableDebugTextShadow = 0x230; // char : 1
		constexpr auto PostRenderedActors = 0x238; // TArray<AActor*>
		constexpr auto DebugDisplay = 0x250; // TArray<FName>
		constexpr auto ToggledDebugCategories = 0x260; // TArray<FName>
		constexpr auto Canvas = 0x270; // UCanvas*
		constexpr auto DebugCanvas = 0x278; // UCanvas*
		constexpr auto DebugTextList = 0x280; // TArray<FDebugTextInfo>
		constexpr auto ShowDebugTargetDesiredClass = 0x290; // AActor*
		constexpr auto ShowDebugTargetActor = 0x298; // AActor*
	}

	namespace n_UPhysicalMaterialMask {
		constexpr auto UVChannelIndex = 0x28; // int32_t
		constexpr auto AddressX = 0x2c; // TextureAddress
		constexpr auto AddressY = 0x2d; // TextureAddress
	}

	namespace n_USoundNodeDelay {
		constexpr auto DelayMin = 0x48; // float
		constexpr auto DelayMax = 0x4c; // float
	}

	namespace n_AGrenadeLauncher {
		constexpr auto CurrentGrenades = 0x6e8; // char
		constexpr auto NumStartingGrenades = 0x6e9; // char
		constexpr auto MaxGrenades = 0x6ea; // char
	}

	namespace n_UInterpTrackInstLinearColorProp {
		constexpr auto ResetColor = 0x58; // FLinearColor
	}

	namespace n_UMaterialExpressionBentNormalCustomOutput {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UParticleSystemReplay {
		constexpr auto ClipIDNumber = 0x28; // int32_t
	}

	namespace n_UPortalWarsPickupZoneAnimInstance {
		constexpr auto bIsActive = 0x2b8; // bool
		constexpr auto PickupZone = 0x2c0; // APortalWarsGunPickupZone*
	}

	namespace n_UPortalWarsTakedownNotificationWidget {
		constexpr auto TeamImage = 0x260; // UImage*
		constexpr auto RootHorizontalBox = 0x268; // UHorizontalBox*
		constexpr auto NotificationText = 0x270; // UTextBlock*
		constexpr auto TimeText = 0x278; // UTextBlock*
		constexpr auto OneOnOneTimeText = 0x280; // UTextBlock*
		constexpr auto TimeWidgetSwitcher = 0x288; // UWidgetSwitcher*
		constexpr auto FadeOutAnimation = 0x290; // UWidgetAnimation*
		constexpr auto BlueLastManStanding = 0x298; // UTexture2D*
		constexpr auto RedLastManStanding = 0x2a0; // UTexture2D*
		constexpr auto BothLastManStanding = 0x2a8; // UTexture2D*
	}

	namespace n_UMaterialExpressionRuntimeVirtualTextureSampleParameter {
		constexpr auto ParameterName = 0x90; // FName
		constexpr auto ExpressionGUID = 0x98; // FGuid
		constexpr auto Group = 0xa8; // FName
	}

	namespace n_UMovieScenePrimitiveMaterialSection {
		constexpr auto MaterialChannel = 0xe8; // FMovieSceneObjectPathChannel
	}

	namespace n_UBoneMaskFilter {
		constexpr auto BlendPoses = 0x28; // TArray<FInputBlendPose>
	}

	namespace n_UCommandlet {
		constexpr auto HelpDescription = 0x28; // FString
		constexpr auto HelpUsage = 0x38; // FString
		constexpr auto HelpWebLink = 0x48; // FString
		constexpr auto HelpParamNames = 0x58; // TArray<FString>
		constexpr auto HelpParamDescriptions = 0x68; // TArray<FString>
		constexpr auto IsServer = 0x78; // char : 1
		constexpr auto IsClient = 0x78; // char : 1
		constexpr auto IsEditor = 0x78; // char : 1
		constexpr auto LogToConsole = 0x78; // char : 1
		constexpr auto ShowErrorCount = 0x78; // char : 1
		constexpr auto ShowProgress = 0x78; // char : 1
	}

	namespace n_UMicroTransactionBase {
		constexpr auto AvailableProducts = 0x38; // TArray<FPurchaseInfo>
		constexpr auto LastError = 0x48; // FString
		constexpr auto LastErrorSolution = 0x58; // FString
	}

	namespace n_USoundNodeParamCrossFade {
		constexpr auto ParamName = 0x58; // FName
	}

	namespace n_UMaterialExpressionMakeMaterialAttributes {
		constexpr auto BaseColor = 0x40; // FExpressionInput
		constexpr auto Metallic = 0x54; // FExpressionInput
		constexpr auto Specular = 0x68; // FExpressionInput
		constexpr auto Roughness = 0x7c; // FExpressionInput
		constexpr auto Anisotropy = 0x90; // FExpressionInput
		constexpr auto EmissiveColor = 0xa4; // FExpressionInput
		constexpr auto Opacity = 0xb8; // FExpressionInput
		constexpr auto OpacityMask = 0xcc; // FExpressionInput
		constexpr auto Normal = 0xe0; // FExpressionInput
		constexpr auto Tangent = 0xf4; // FExpressionInput
		constexpr auto WorldPositionOffset = 0x108; // FExpressionInput
		constexpr auto WorldDisplacement = 0x11c; // FExpressionInput
		constexpr auto TessellationMultiplier = 0x130; // FExpressionInput
		constexpr auto SubsurfaceColor = 0x144; // FExpressionInput
		constexpr auto ClearCoat = 0x158; // FExpressionInput
		constexpr auto ClearCoatRoughness = 0x16c; // FExpressionInput
		constexpr auto AmbientOcclusion = 0x180; // FExpressionInput
		constexpr auto Refraction = 0x194; // FExpressionInput
		constexpr auto CustomizedUVs = 0x1a8; // FExpressionInput [0x8]
		constexpr auto PixelDepthOffset = 0x248; // FExpressionInput
		constexpr auto ShadingModel = 0x25c; // FExpressionInput
	}

	namespace n_UMaterialExpressionDistance {
		constexpr auto A = 0x40; // FExpressionInput
		constexpr auto B = 0x54; // FExpressionInput
	}

	namespace n_UBTDecorator_PortalIsNearTarget {
		constexpr auto XYRange = 0x90; // float
		constexpr auto MinZRange = 0x94; // float
	}

	namespace n_UMovieSceneFolder {
		constexpr auto FolderName = 0x28; // FName
		constexpr auto ChildFolders = 0x30; // TArray<UMovieSceneFolder*>
		constexpr auto ChildMasterTracks = 0x40; // TArray<UMovieSceneTrack*>
		constexpr auto ChildObjectBindingStrings = 0x50; // TArray<FString>
	}

	namespace n_UARFaceGeometry {
		constexpr auto LookAtTarget = 0xf8; // FVector
		constexpr auto bIsTracked = 0x104; // bool
		constexpr auto BlendShapes = 0x108; // TMap<EARFaceBlendShape, float>
		constexpr auto LeftEyeTransform = 0x190; // FTransform
		constexpr auto RightEyeTransform = 0x1c0; // FTransform
	}

	namespace n_UMovieSceneNiagaraParameterTrack {
		constexpr auto Parameter = 0x88; // FNiagaraVariable
	}

	namespace n_ANeutralFlagItem {
		constexpr auto NeutralCTFGameState = 0x6d8; // APortalWarsNeutralCTFGameState*
	}

	namespace n_UDemoNetDriver {
		constexpr auto RollbackNetStartupActors = 0x850; // TMap<FString, FRollbackNetStartupActorInfo>
		constexpr auto CheckpointSaveMaxMSPerFrame = 0x9fc; // float
		constexpr auto MulticastRecordOptions = 0xa20; // TArray<FMulticastRecordOptions>
		constexpr auto bIsLocalReplay = 0xa30; // bool
		constexpr auto SpectatorControllers = 0xa38; // TArray<APlayerController*>
	}

	namespace n_UMovieScene3DConstraintTrack {
		constexpr auto ConstraintSections = 0x78; // TArray<UMovieSceneSection*>
	}

	namespace n_UFontImportOptions {
		constexpr auto Data = 0x28; // FFontImportOptionsData
	}

	namespace n_UAkSwitchInitializationSettings {
		constexpr auto CommonSettings = 0x28; // FAkCommonInitializationSettingsWithSampleRate
		constexpr auto CommunicationSettings = 0x98; // FAkCommunicationSettings
		constexpr auto AdvancedSettings = 0xb8; // FAkAdvancedInitializationSettingsWithMultiCoreRendering
	}

	namespace n_UNavCollisionBase {
		constexpr auto bIsDynamicObstacle = 0x28; // char : 1
	}

	namespace n_UGameplayTaskResource {
		constexpr auto ManualResourceID = 0x28; // int32_t
		constexpr auto AutoResourceID = 0x2c; // int8_t
		constexpr auto bManuallySetID = 0x30; // char : 1
	}

	namespace n_UBoxFalloff {
		constexpr auto Magnitude = 0xb0; // float
		constexpr auto MinRange = 0xb4; // float
		constexpr auto MaxRange = 0xb8; // float
		constexpr auto Default = 0xbc; // float
		constexpr auto Transform = 0xc0; // FTransform
		constexpr auto Falloff = 0xf0; // EFieldFalloffType
	}

	namespace n_UParticleModuleAttractorPoint {
		constexpr auto Position = 0x30; // FRawDistributionVector
		constexpr auto Range = 0x78; // FRawDistributionFloat
		constexpr auto Strength = 0xa8; // FRawDistributionFloat
		constexpr auto StrengthByDistance = 0xd8; // char : 1
		constexpr auto bAffectBaseVelocity = 0xd8; // char : 1
		constexpr auto bOverrideVelocity = 0xd8; // char : 1
		constexpr auto bUseWorldSpacePosition = 0xd8; // char : 1
		constexpr auto Positive_X = 0xd8; // char : 1
		constexpr auto Positive_Y = 0xd8; // char : 1
		constexpr auto Positive_Z = 0xd8; // char : 1
		constexpr auto Negative_X = 0xd8; // char : 1
		constexpr auto Negative_Y = 0xd9; // char : 1
		constexpr auto Negative_Z = 0xd9; // char : 1
	}

	namespace n_UAkItemProperties {
		constexpr auto OnSelectionChanged = 0x108; // FMulticastInlineDelegate
		constexpr auto OnPropertyDragged = 0x118; // FMulticastInlineDelegate
	}

	namespace n_UAnimationSharingSetup {
		constexpr auto SkeletonSetups = 0x28; // TArray<FPerSkeletonAnimationSharingSetup>
		constexpr auto ScalabilitySettings = 0x38; // FAnimationSharingScalability
	}

	namespace n_UARPlaneComponent {
		constexpr auto ReplicatedPayload = 0x280; // FARPlaneUpdatePayload
	}

	namespace n_UCurveLinearColorAtlas {
		constexpr auto TextureSize = 0x1a0; // uint32_t
		constexpr auto bSquareResolution = 0x1a4; // char : 1
		constexpr auto TextureHeight = 0x1a8; // uint32_t
		constexpr auto GradientCurves = 0x1b0; // TArray<UCurveLinearColor*>
	}

	namespace n_UPlayMontageCallbackProxy {
		constexpr auto OnCompleted = 0x28; // FMulticastInlineDelegate
		constexpr auto OnBlendOut = 0x38; // FMulticastInlineDelegate
		constexpr auto OnInterrupted = 0x48; // FMulticastInlineDelegate
		constexpr auto OnNotifyBegin = 0x58; // FMulticastInlineDelegate
		constexpr auto OnNotifyEnd = 0x68; // FMulticastInlineDelegate
	}

	namespace n_UNiagaraDataInterfaceMeshRendererInfo {
		constexpr auto MeshRenderer = 0x38; // UNiagaraMeshRendererProperties*
	}

	namespace n_UMovieScenePropertyTrack {
		constexpr auto SectionToKey = 0x78; // UMovieSceneSection*
		constexpr auto PropertyBinding = 0x80; // FMovieScenePropertyBinding
		constexpr auto Sections = 0x98; // TArray<UMovieSceneSection*>
	}

	namespace n_UPortalWarsCheckInDialogWidget {
		constexpr auto CurrencyText = 0x3c8; // UTextBlock*
		constexpr auto CurrencyRoot = 0x3d0; // UWidget*
		constexpr auto ActionTitleText = 0x3d8; // UTextBlock*
		constexpr auto CheckInReward = 0x3e0; // UPortalWarsCheckInRewardWidget*
	}

	namespace n_UBTDecorator_WithinRange {
		constexpr auto BlackboardKey = 0x68; // FBlackboardKeySelector
		constexpr auto defaultRange = 0x90; // float
	}

	namespace n_UAkAudioBank {
		constexpr auto AutoLoad = 0x28; // bool
	}

	namespace n_UAnimComposite {
		constexpr auto AnimationTrack = 0xa8; // FAnimTrack
	}

	namespace n_UBTDecorator {
		constexpr auto bInverseCondition = 0x60; // char : 1
		constexpr auto FlowAbortMode = 0x64; // EBTFlowAbortMode
	}

	namespace n_UEnvQueryTest_Overlap {
		constexpr auto OverlapData = 0x1f8; // FEnvOverlapData
	}

	namespace n_UMaterialExpressionConstant3Vector {
		constexpr auto Constant = 0x40; // FLinearColor
	}

	namespace n_UExponentialHeightFogComponent {
		constexpr auto FogDensity = 0x1f8; // float
		constexpr auto FogHeightFalloff = 0x1fc; // float
		constexpr auto SecondFogData = 0x200; // FExponentialHeightFogData
		constexpr auto FogInscatteringColor = 0x20c; // FLinearColor
		constexpr auto InscatteringColorCubemap = 0x220; // UTextureCube*
		constexpr auto InscatteringColorCubemapAngle = 0x228; // float
		constexpr auto InscatteringTextureTint = 0x22c; // FLinearColor
		constexpr auto FullyDirectionalInscatteringColorDistance = 0x23c; // float
		constexpr auto NonDirectionalInscatteringColorDistance = 0x240; // float
		constexpr auto DirectionalInscatteringExponent = 0x244; // float
		constexpr auto DirectionalInscatteringStartDistance = 0x248; // float
		constexpr auto DirectionalInscatteringColor = 0x24c; // FLinearColor
		constexpr auto FogMaxOpacity = 0x25c; // float
		constexpr auto StartDistance = 0x260; // float
		constexpr auto FogCutoffDistance = 0x264; // float
		constexpr auto bEnableVolumetricFog = 0x268; // bool
		constexpr auto VolumetricFogScatteringDistribution = 0x26c; // float
		constexpr auto VolumetricFogAlbedo = 0x270; // FColor
		constexpr auto VolumetricFogEmissive = 0x274; // FLinearColor
		constexpr auto VolumetricFogExtinctionScale = 0x284; // float
		constexpr auto VolumetricFogDistance = 0x288; // float
		constexpr auto VolumetricFogStaticLightingScatteringIntensity = 0x28c; // float
		constexpr auto bOverrideLightColorsWithFogInscatteringColors = 0x290; // bool
	}

	namespace n_UMaterialExpressionMultiply {
		constexpr auto A = 0x40; // FExpressionInput
		constexpr auto B = 0x54; // FExpressionInput
		constexpr auto ConstA = 0x68; // float
		constexpr auto ConstB = 0x6c; // float
	}

	namespace n_APrecomputedVisibilityOverrideVolume {
		constexpr auto OverrideVisibleActors = 0x258; // TArray<AActor*>
		constexpr auto OverrideInvisibleActors = 0x268; // TArray<AActor*>
		constexpr auto OverrideInvisibleLevels = 0x278; // TArray<FName>
	}

	namespace n_UPortalWarsDecimalCarouselWidget {
		constexpr auto Value = 0x3a0; // float
		constexpr auto MinValue = 0x3a4; // float
		constexpr auto MaxValue = 0x3a8; // float
		constexpr auto StepSize = 0x3ac; // float
		constexpr auto SpinBox = 0x3b0; // USpinBox*
	}

	namespace n_UAkPS4InitializationSettings {
		constexpr auto CommonSettings = 0x28; // FAkCommonInitializationSettings
		constexpr auto CommunicationSettings = 0x90; // FAkCommunicationSettingsWithSystemInitialization
		constexpr auto AdvancedSettings = 0xb8; // FAkPS4AdvancedInitializationSettings
	}

	namespace n_UMovieSceneSignedObject {
		constexpr auto Signature = 0x28; // FGuid
	}

	namespace n_UTestMovieSceneSubTrack {
		constexpr auto SectionArray = 0x88; // TArray<UMovieSceneSection*>
	}

	namespace n_UButtonWidgetStyle {
		constexpr auto ButtonStyle = 0x30; // FButtonStyle
	}

	namespace n_UMaterialExpressionParameter {
		constexpr auto ParameterName = 0x40; // FName
		constexpr auto ExpressionGUID = 0x48; // FGuid
	}

	namespace n_UMovieScene3DPathSection {
		constexpr auto TimingCurve = 0x110; // FMovieSceneFloatChannel
		constexpr auto FrontAxisEnum = 0x1b0; // MovieScene3DPathSection_Axis
		constexpr auto UpAxisEnum = 0x1b1; // MovieScene3DPathSection_Axis
		constexpr auto bFollow = 0x1b4; // char : 1
		constexpr auto bReverse = 0x1b4; // char : 1
		constexpr auto bForceUpright = 0x1b4; // char : 1
	}

	namespace n_USlateBrushAsset {
		constexpr auto Brush = 0x28; // FSlateBrush
	}

	namespace n_UBTService_AssignTarget {
		constexpr auto ShotByEnemyRelevantTime = 0x70; // float
		constexpr auto PortalRelevantDistance = 0x74; // float
		constexpr auto MinTimeBeforeSwitchingTargets = 0x78; // float
		constexpr auto MinThreatDifferenceToSwitch = 0x7c; // float
	}

	namespace n_UGeometryCacheTrack {
		constexpr auto Duration = 0x28; // float
	}

	namespace n_APortalWarsGunPickup {
		constexpr auto WeaponClass = 0x270; // AGun*
		constexpr auto gunValue = 0x278; // char
		constexpr auto GunDisplayName = 0x280; // FText
		constexpr auto GunImage = 0x298; // UTexture2D*
		constexpr auto GunID = 0x2a0; // int32_t
		constexpr auto TotalAmmo = 0x2b0; // int32_t
		constexpr auto ImpactThreshold = 0x2b8; // float
	}

	namespace n_UBTService_RunEQS {
		constexpr auto EQSRequest = 0x98; // FEQSParametrizedQueryExecutionRequest
	}

	namespace n_ACameraActor {
		constexpr auto AutoActivateForPlayer = 0x220; // EAutoReceiveInput
		constexpr auto CameraComponent = 0x228; // UCameraComponent*
		constexpr auto SceneComponent = 0x230; // USceneComponent*
		constexpr auto bConstrainAspectRatio = 0x240; // char : 1
		constexpr auto AspectRatio = 0x244; // float
		constexpr auto FOVAngle = 0x248; // float
		constexpr auto PostProcessBlendWeight = 0x24c; // float
		constexpr auto PostProcessSettings = 0x250; // FPostProcessSettings
	}

	namespace n_APortalWarsVIPHUD {
		constexpr auto VIPHUDOverlayWidget = 0x400; // UPortalWarsVIPHUDOverlayWidget*
		constexpr auto VIPHUDOverlayWidgetClass = 0x408; // UPortalWarsVIPHUDOverlayWidget*
		constexpr auto VIPNameIndicatorWidgetClass = 0x410; // UPortalWarsIndicatorWidget*
		constexpr auto VipAlertEvent = 0x418; // UAkAudioEvent*
	}

	namespace n_UPhysicsSpringComponent {
		constexpr auto SpringStiffness = 0x1f8; // float
		constexpr auto SpringDamping = 0x1fc; // float
		constexpr auto SpringLengthAtRest = 0x200; // float
		constexpr auto SpringRadius = 0x204; // float
		constexpr auto SpringChannel = 0x208; // ECollisionChannel
		constexpr auto bIgnoreSelf = 0x209; // bool
		constexpr auto SpringCompression = 0x20c; // float
	}

	namespace n_UStreamMediaSource {
		constexpr auto StreamUrl = 0x88; // FString
	}

	namespace n_UImgMediaPlaybackComponent {
		constexpr auto Width = 0xb0; // float
		constexpr auto LODBias = 0xb4; // float
	}

	namespace n_UMovieSceneColorSection {
		constexpr auto RedCurve = 0xf0; // FMovieSceneFloatChannel
		constexpr auto GreenCurve = 0x190; // FMovieSceneFloatChannel
		constexpr auto BlueCurve = 0x230; // FMovieSceneFloatChannel
		constexpr auto AlphaCurve = 0x2d0; // FMovieSceneFloatChannel
	}

	namespace n_UTimeSynchronizableMediaSource {
		constexpr auto bUseTimeSynchronization = 0x88; // bool
		constexpr auto FrameDelay = 0x8c; // int32_t
		constexpr auto TimeDelay = 0x90; // double
	}

	namespace n_UTextBlockWidgetStyle {
		constexpr auto TextBlockStyle = 0x30; // FTextBlockStyle
	}

	namespace n_UGizmoBaseComponent {
		constexpr auto Color = 0x450; // FLinearColor
		constexpr auto HoverSizeMultiplier = 0x460; // float
		constexpr auto PixelHitDistanceThreshold = 0x464; // float
	}

	namespace n_UAnimationSharingManager {
		constexpr auto Skeletons = 0x28; // TArray<USkeleton*>
		constexpr auto PerSkeletonData = 0x38; // TArray<UAnimSharingInstance*>
	}

	namespace n_UConnectionCallbackProxy {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_UToIntegerField {
		constexpr auto FloatField = 0xb0; // UFieldNodeFloat*
	}

	namespace n_UBrainComponent {
		constexpr auto BlackboardComp = 0xb8; // UBlackboardComponent*
		constexpr auto AIOwner = 0xc0; // AAIController*
	}

	namespace n_UPortalWarsXPUpdateWidget {
		constexpr auto PlayerNameText = 0x280; // UTextBlock*
		constexpr auto AvatarImage = 0x288; // UImage*
		constexpr auto ProgressionLevelIcon = 0x290; // UPortalWarsProgressionIconWidget*
		constexpr auto ProgressionProgressBar = 0x298; // UProgressBar*
		constexpr auto ProgressionTargetProgressBar = 0x2a0; // UProgressBar*
		constexpr auto ProgressionLevelProgressText = 0x2a8; // UTextBlock*
		constexpr auto ProgressionLevelTotalText = 0x2b0; // UTextBlock*
		constexpr auto ProgressionProgressRoot = 0x2b8; // UWidget*
		constexpr auto BattlePassLevelIcon = 0x2c8; // UPortalWarsProgressionIconWidget*
		constexpr auto BattlePassProgressBar = 0x2d0; // UProgressBar*
		constexpr auto BattlePassTargetProgressBar = 0x2d8; // UProgressBar*
		constexpr auto BattlePassLevelProgressText = 0x2e0; // UTextBlock*
		constexpr auto BattlePassLevelTotalText = 0x2e8; // UTextBlock*
		constexpr auto BattlePassProgressRoot = 0x2f0; // UWidget*
		constexpr auto XPEntryWidgetClass = 0x300; // UPortalWarsXPUpdateEntryWidget*
		constexpr auto AllocationPanel = 0x308; // UPanelWidget*
		constexpr auto TotalXPText = 0x318; // UTextBlock*
		constexpr auto AkComp = 0x388; // UAkComponent*
		constexpr auto ExpSFXLoop = 0x390; // UAkAudioEvent*
		constexpr auto ExpSFXStopLoop = 0x398; // UAkAudioEvent*
		constexpr auto ExpLevelUpEvent = 0x3a0; // UAkAudioEvent*
	}

	namespace n_UMovieSceneEventSection {
		constexpr auto Events = 0xe8; // FNameCurve
		constexpr auto EventData = 0x160; // FMovieSceneEventSectionData
	}

	namespace n_UInputRouter {
		constexpr auto bAutoInvalidateOnHover = 0x28; // bool
		constexpr auto bAutoInvalidateOnCapture = 0x29; // bool
		constexpr auto ActiveInputBehaviors = 0x38; // UInputBehaviorSet*
	}

	namespace n_USynth2DSlider {
		constexpr auto ValueX = 0x108; // float
		constexpr auto ValueY = 0x10c; // float
		constexpr auto ValueXDelegate = 0x110; // FDelegate
		constexpr auto ValueYDelegate = 0x120; // FDelegate
		constexpr auto WidgetStyle = 0x130; // FSynth2DSliderStyle
		constexpr auto SliderHandleColor = 0x3e8; // FLinearColor
		constexpr auto IndentHandle = 0x3f8; // bool
		constexpr auto locked = 0x3f9; // bool
		constexpr auto StepSize = 0x3fc; // float
		constexpr auto IsFocusable = 0x400; // bool
		constexpr auto OnMouseCaptureBegin = 0x408; // FMulticastInlineDelegate
		constexpr auto OnMouseCaptureEnd = 0x418; // FMulticastInlineDelegate
		constexpr auto OnControllerCaptureBegin = 0x428; // FMulticastInlineDelegate
		constexpr auto OnControllerCaptureEnd = 0x438; // FMulticastInlineDelegate
		constexpr auto OnValueChangedX = 0x448; // FMulticastInlineDelegate
		constexpr auto OnValueChangedY = 0x458; // FMulticastInlineDelegate
	}

	namespace n_UPortalWarsNumericCarouselWidget {
		constexpr auto Value = 0x3a0; // int32_t
		constexpr auto MinValue = 0x3a4; // int32_t
		constexpr auto MaxValue = 0x3a8; // int32_t
		constexpr auto StepSize = 0x3ac; // int32_t
		constexpr auto bAllowWrap = 0x3b0; // bool
		constexpr auto ConsoleValueText = 0x3b8; // UTextBlock*
		constexpr auto SpinBox = 0x3c0; // UIntegerSpinBox*
		constexpr auto bDisplayAsTime = 0x3c8; // bool
	}

	namespace n_UPortalWarsTeamCheckboxWidget {
		constexpr auto GlobalCheckbox = 0x368; // UPortalWarsCheckBoxWidget*
		constexpr auto AlphaCheckbox = 0x370; // UPortalWarsCheckBoxWidget*
		constexpr auto BravoCheckbox = 0x378; // UPortalWarsCheckBoxWidget*
		constexpr auto TeamCheckbox = 0x380; // UPortalWarsCheckBox*
		constexpr auto GamepadKey = 0x390; // FKey
		constexpr auto StandardIcon = 0x3a8; // UImage*
		constexpr auto GamepadIcon = 0x3b0; // UImage*
		constexpr auto ConsoleSwitcher = 0x3b8; // UWidgetSwitcher*
		constexpr auto IconDefaultColor = 0x3c0; // FLinearColor
		constexpr auto IconHoveredColor = 0x3d0; // FLinearColor
	}

	namespace n_UStereoLayerComponent {
		constexpr auto bLiveTexture = 0x1f8; // char : 1
		constexpr auto bSupportsDepth = 0x1f8; // char : 1
		constexpr auto bNoAlphaChannel = 0x1f8; // char : 1
		constexpr auto Texture = 0x200; // UTexture*
		constexpr auto LeftTexture = 0x208; // UTexture*
		constexpr auto bQuadPreserveTextureRatio = 0x210; // char : 1
		constexpr auto QuadSize = 0x214; // FVector2D
		constexpr auto UVRect = 0x21c; // FBox2D
		constexpr auto CylinderRadius = 0x230; // float
		constexpr auto CylinderOverlayArc = 0x234; // float
		constexpr auto CylinderHeight = 0x238; // int32_t
		constexpr auto EquirectProps = 0x23c; // FEquirectProps
		constexpr auto StereoLayerType = 0x284; // EStereoLayerType
		constexpr auto StereoLayerShape = 0x285; // EStereoLayerShape
		constexpr auto Shape = 0x288; // UStereoLayerShape*
		constexpr auto Priority = 0x290; // int32_t
	}

	namespace n_UCompositeDataTable {
		constexpr auto ParentTables = 0xb0; // TArray<UDataTable*>
		constexpr auto OldParentTables = 0xc0; // TArray<UDataTable*>
	}

	namespace n_USoundConcurrency {
		constexpr auto Concurrency = 0x28; // FSoundConcurrencySettings
	}

	namespace n_USoundNodeOscillator {
		constexpr auto bModulateVolume = 0x48; // char : 1
		constexpr auto bModulatePitch = 0x48; // char : 1
		constexpr auto AmplitudeMin = 0x4c; // float
		constexpr auto AmplitudeMax = 0x50; // float
		constexpr auto FrequencyMin = 0x54; // float
		constexpr auto FrequencyMax = 0x58; // float
		constexpr auto OffsetMin = 0x5c; // float
		constexpr auto OffsetMax = 0x60; // float
		constexpr auto CenterMin = 0x64; // float
		constexpr auto CenterMax = 0x68; // float
	}

	namespace n_UInterpTrackSound {
		constexpr auto Sounds = 0x90; // TArray<FSoundTrackKey>
		constexpr auto bPlayOnReverse = 0xa0; // char : 1
		constexpr auto bContinueSoundOnMatineeEnd = 0xa0; // char : 1
		constexpr auto bSuppressSubtitles = 0xa0; // char : 1
		constexpr auto bTreatAsDialogue = 0xa0; // char : 1
		constexpr auto bAttach = 0xa0; // char : 1
	}

	namespace n_UUserInterfaceSettings {
		constexpr auto RenderFocusRule = 0x38; // ERenderFocusRule
		constexpr auto HardwareCursors = 0x40; // TMap<EMouseCursor, FHardwareCursorReference>
		constexpr auto SoftwareCursors = 0x90; // TMap<EMouseCursor, FSoftClassPath>
		constexpr auto DefaultCursor = 0xe0; // FSoftClassPath
		constexpr auto TextEditBeamCursor = 0xf8; // FSoftClassPath
		constexpr auto CrosshairsCursor = 0x110; // FSoftClassPath
		constexpr auto HandCursor = 0x128; // FSoftClassPath
		constexpr auto GrabHandCursor = 0x140; // FSoftClassPath
		constexpr auto GrabHandClosedCursor = 0x158; // FSoftClassPath
		constexpr auto SlashedCircleCursor = 0x170; // FSoftClassPath
		constexpr auto ApplicationScale = 0x188; // float
		constexpr auto UIScaleRule = 0x18c; // EUIScalingRule
		constexpr auto CustomScalingRuleClass = 0x190; // FSoftClassPath
		constexpr auto UIScaleCurve = 0x1a8; // FRuntimeFloatCurve
		constexpr auto bAllowHighDPIInGameMode = 0x230; // bool
		constexpr auto DesignScreenSize = 0x234; // FIntPoint
		constexpr auto bLoadWidgetsOnDedicatedServer = 0x23c; // bool
		constexpr auto CursorClasses = 0x240; // TArray<UObject*>
		constexpr auto CustomScalingRuleClassInstance = 0x250; // UObject*
		constexpr auto CustomScalingRule = 0x258; // UDPICustomScalingRule*
	}

	namespace n_ADefaultPawn {
		constexpr auto BaseTurnRate = 0x280; // float
		constexpr auto BaseLookUpRate = 0x284; // float
		constexpr auto MovementComponent = 0x288; // UPawnMovementComponent*
		constexpr auto CollisionComponent = 0x290; // USphereComponent*
		constexpr auto MeshComponent = 0x298; // UStaticMeshComponent*
		constexpr auto bAddDefaultMovementBindings = 0x2a0; // char : 1
	}

	namespace n_UAnimBoneCompressionSettings {
		constexpr auto Codecs = 0x28; // TArray<UAnimBoneCompressionCodec*>
	}

	namespace n_AGameStateBase {
		constexpr auto GameModeClass = 0x220; // AGameModeBase*
		constexpr auto AuthorityGameMode = 0x228; // AGameModeBase*
		constexpr auto SpectatorClass = 0x230; // ASpectatorPawn*
		constexpr auto PlayerArray = 0x238; // TArray<APlayerState*>
		constexpr auto bReplicatedHasBegunPlay = 0x248; // bool
		constexpr auto ReplicatedWorldTimeSeconds = 0x24c; // float
		constexpr auto ServerWorldTimeSecondsDelta = 0x250; // float
		constexpr auto ServerWorldTimeSecondsUpdateFrequency = 0x254; // float
	}

	namespace n_UMovieScene {
		constexpr auto Spawnables = 0x50; // TArray<FMovieSceneSpawnable>
		constexpr auto Possessables = 0x60; // TArray<FMovieScenePossessable>
		constexpr auto ObjectBindings = 0x70; // TArray<FMovieSceneBinding>
		constexpr auto BindingGroups = 0x80; // TMap<FName, FMovieSceneObjectBindingIDs>
		constexpr auto MasterTracks = 0xd0; // TArray<UMovieSceneTrack*>
		constexpr auto CameraCutTrack = 0xe0; // UMovieSceneTrack*
		constexpr auto SelectionRange = 0xe8; // FMovieSceneFrameRange
		constexpr auto PlaybackRange = 0xf8; // FMovieSceneFrameRange
		constexpr auto TickResolution = 0x108; // FFrameRate
		constexpr auto DisplayRate = 0x110; // FFrameRate
		constexpr auto EvaluationType = 0x118; // EMovieSceneEvaluationType
		constexpr auto ClockSource = 0x119; // EUpdateClockSource
		constexpr auto CustomClockSourcePath = 0x120; // FSoftObjectPath
		constexpr auto MarkedFrames = 0x138; // TArray<FMovieSceneMarkedFrame>
	}

	namespace n_AEQSTestingPawn {
		constexpr auto QueryTemplate = 0x4c0; // UEnvQuery*
		constexpr auto QueryParams = 0x4c8; // TArray<FEnvNamedValue>
		constexpr auto QueryConfig = 0x4d8; // TArray<FAIDynamicParam>
		constexpr auto TimeLimitPerStep = 0x4e8; // float
		constexpr auto StepToDebugDraw = 0x4ec; // int32_t
		constexpr auto HighlightMode = 0x4f0; // EEnvQueryHightlightMode
		constexpr auto bDrawLabels = 0x4f4; // char : 1
		constexpr auto bDrawFailedItems = 0x4f4; // char : 1
		constexpr auto bReRunQueryOnlyOnFinishedMove = 0x4f4; // char : 1
		constexpr auto bShouldBeVisibleInGame = 0x4f4; // char : 1
		constexpr auto bTickDuringGame = 0x4f4; // char : 1
		constexpr auto QueryingMode = 0x4f8; // EEnvQueryRunMode
		constexpr auto NavAgentProperties = 0x500; // FNavAgentProperties
	}

	namespace n_UBTDecorator_IsAtLocation {
		constexpr auto AcceptableRadius = 0x90; // float
		constexpr auto ParametrizedAcceptableRadius = 0x98; // FAIDataProviderFloatValue
		constexpr auto GeometricDistanceType = 0xd0; // FAIDistanceType
		constexpr auto bUseParametrizedRadius = 0xd4; // char : 1
		constexpr auto bUseNavAgentGoalLocation = 0xd4; // char : 1
		constexpr auto bPathFindingBasedTest = 0xd4; // char : 1
	}

	namespace n_AGameModeBase {
		constexpr auto OptionsString = 0x220; // FString
		constexpr auto GameSessionClass = 0x230; // AGameSession*
		constexpr auto GameStateClass = 0x238; // AGameStateBase*
		constexpr auto PlayerControllerClass = 0x240; // APlayerController*
		constexpr auto PlayerStateClass = 0x248; // APlayerState*
		constexpr auto HUDClass = 0x250; // AHUD*
		constexpr auto DefaultPawnClass = 0x258; // APawn*
		constexpr auto SpectatorClass = 0x260; // ASpectatorPawn*
		constexpr auto ReplaySpectatorPlayerControllerClass = 0x268; // APlayerController*
		constexpr auto ServerStatReplicatorClass = 0x270; // AServerStatReplicator*
		constexpr auto GameSession = 0x278; // AGameSession*
		constexpr auto GameState = 0x280; // AGameStateBase*
		constexpr auto ServerStatReplicator = 0x288; // AServerStatReplicator*
		constexpr auto DefaultPlayerName = 0x290; // FText
		constexpr auto bUseSeamlessTravel = 0x2a8; // char : 1
		constexpr auto bStartPlayersAsSpectators = 0x2a8; // char : 1
		constexpr auto bPauseable = 0x2a8; // char : 1
	}

	namespace n_AProjectile {
		constexpr auto MovementComp = 0x220; // UPWProjectileMovementComponent*
		constexpr auto CollisionComp = 0x228; // USphereComponent*
		constexpr auto PawnCollisionComp = 0x230; // USphereComponent*
		constexpr auto ProjectileID = 0x238; // char
		constexpr auto bIsInitialProjectile = 0x239; // char : 1
		constexpr auto InitialProjectileCameraLocation = 0x23c; // FVector_NetQuantize
		constexpr auto AkComp = 0x250; // UPortalWarsAkComponent*
		constexpr auto ParticleComp = 0x258; // UParticleSystemComponent*
		constexpr auto MeshComp = 0x260; // UStaticMeshComponent*
		constexpr auto ExplosionFX = 0x268; // UParticleSystem*
		constexpr auto ExplosionEvent = 0x270; // UAkAudioEvent*
		constexpr auto ProjectileLoopStartEvent = 0x278; // UAkAudioEvent*
		constexpr auto ProjectileLoopStopEvent = 0x280; // UAkAudioEvent*
		constexpr auto Decal = 0x288; // FDecalData
		constexpr auto canTeleport = 0x298; // bool
		constexpr auto bExploded = 0x2c8; // bool
		constexpr auto bDestroyed = 0x2c9; // bool
		constexpr auto OverlapSphereGrowthRate = 0x2cc; // float
		constexpr auto MaxPawnOverlapSphereSize = 0x2d0; // float
	}

	namespace n_UPortalWarsRoundCountdownWidget {
		constexpr auto RoundText = 0x2a0; // UTextBlock*
		constexpr auto MatchPointText = 0x2a8; // UTextBlock*
	}

	namespace n_USystemTimeTimecodeProvider {
		constexpr auto FrameRate = 0x30; // FFrameRate
		constexpr auto bGenerateFullFrame = 0x38; // bool
		constexpr auto bUseHighPerformanceClock = 0x39; // bool
	}

	namespace n_UPointLightComponent {
		constexpr auto bUseInverseSquaredFalloff = 0x340; // char : 1
		constexpr auto LightFalloffExponent = 0x344; // float
		constexpr auto SourceRadius = 0x348; // float
		constexpr auto SoftSourceRadius = 0x34c; // float
		constexpr auto SourceLength = 0x350; // float
	}

	namespace n_UPortalWarsPlaySelectionWidget {
		constexpr auto InspectWidget = 0x338; // UPortalWarsMenuWidget*
		constexpr auto QuickPlayEntry = 0x340; // UPortalWarsPlaylistEntryWidget*
		constexpr auto PlaylistGameModeSelectWidgetClass = 0x348; // UPortalWarsPlaylistGameModeSelect*
		constexpr auto FeaturedEntry = 0x350; // UPortalWarsPlaylistEntryWidget*
		constexpr auto RankedButton = 0x358; // UPortalWarsButtonWidget*
		constexpr auto PlaylistSelectWidgetClass = 0x360; // UPortalWarsPlaylistSelectWidget*
		constexpr auto CustomButton = 0x368; // UPortalWarsButtonWidget*
		constexpr auto CustomMenuWidgetClass = 0x370; // UPortalWarsCustomGameWidget*
		constexpr auto TrainingButton = 0x378; // UPortalWarsButtonWidget*
		constexpr auto TrainingMenuWidgetClass = 0x380; // UPortalWarsTrainingWidget*
		constexpr auto RaceButton = 0x388; // UPortalWarsButtonWidget*
	}

	namespace n_APortalWarsVotingGameState {
		constexpr auto VoteInfoList = 0x840; // TArray<APortalWarsVoteInfo*>
	}

	namespace n_UTextureRenderTargetVolume {
		constexpr auto SizeX = 0x180; // int32_t
		constexpr auto SizeY = 0x184; // int32_t
		constexpr auto SizeZ = 0x188; // int32_t
		constexpr auto ClearColor = 0x18c; // FLinearColor
		constexpr auto OverrideFormat = 0x19c; // EPixelFormat
		constexpr auto bHDR = 0x19d; // char : 1
		constexpr auto bForceLinearGamma = 0x19d; // char : 1
	}

	namespace n_USynthComponent {
		constexpr auto bAutoDestroy = 0x1f8; // char : 1
		constexpr auto bStopWhenOwnerDestroyed = 0x1f8; // char : 1
		constexpr auto bAllowSpatialization = 0x1f8; // char : 1
		constexpr auto bOverrideAttenuation = 0x1f8; // char : 1
		constexpr auto bEnableBusSends = 0x1fc; // char : 1
		constexpr auto bEnableBaseSubmix = 0x1fc; // char : 1
		constexpr auto bEnableSubmixSends = 0x1fc; // char : 1
		constexpr auto AttenuationSettings = 0x200; // USoundAttenuation*
		constexpr auto AttenuationOverrides = 0x208; // FSoundAttenuationSettings
		constexpr auto ConcurrencySettings = 0x5a8; // USoundConcurrency*
		constexpr auto ConcurrencySet = 0x5b0; // TSet<USoundConcurrency*>
		constexpr auto SoundClass = 0x600; // USoundClass*
		constexpr auto SourceEffectChain = 0x608; // USoundEffectSourcePresetChain*
		constexpr auto SoundSubmix = 0x610; // USoundSubmixBase*
		constexpr auto SoundSubmixSends = 0x618; // TArray<FSoundSubmixSendInfo>
		constexpr auto BusSends = 0x628; // TArray<FSoundSourceBusSendInfo>
		constexpr auto PreEffectBusSends = 0x638; // TArray<FSoundSourceBusSendInfo>
		constexpr auto bIsUISound = 0x648; // char : 1
		constexpr auto bIsPreviewSound = 0x648; // char : 1
		constexpr auto EnvelopeFollowerAttackTime = 0x64c; // int32_t
		constexpr auto EnvelopeFollowerReleaseTime = 0x650; // int32_t
		constexpr auto OnAudioEnvelopeValue = 0x658; // FMulticastInlineDelegate
		constexpr auto Synth = 0x688; // USynthSound*
		constexpr auto AudioComponent = 0x690; // UAudioComponent*
	}

	namespace n_UNiagaraDataInterfaceArrayFloat {
		constexpr auto FloatData = 0x50; // TArray<float>
	}

	namespace n_UClothConfigNv {
		constexpr auto ClothingWindMethod = 0x28; // EClothingWindMethodNv
		constexpr auto VerticalConstraint = 0x2c; // FClothConstraintSetupNv
		constexpr auto HorizontalConstraint = 0x3c; // FClothConstraintSetupNv
		constexpr auto BendConstraint = 0x4c; // FClothConstraintSetupNv
		constexpr auto ShearConstraint = 0x5c; // FClothConstraintSetupNv
		constexpr auto SelfCollisionRadius = 0x6c; // float
		constexpr auto SelfCollisionStiffness = 0x70; // float
		constexpr auto SelfCollisionCullScale = 0x74; // float
		constexpr auto Damping = 0x78; // FVector
		constexpr auto Friction = 0x84; // float
		constexpr auto WindDragCoefficient = 0x88; // float
		constexpr auto WindLiftCoefficient = 0x8c; // float
		constexpr auto LinearDrag = 0x90; // FVector
		constexpr auto AngularDrag = 0x9c; // FVector
		constexpr auto LinearInertiaScale = 0xa8; // FVector
		constexpr auto AngularInertiaScale = 0xb4; // FVector
		constexpr auto CentrifugalInertiaScale = 0xc0; // FVector
		constexpr auto SolverFrequency = 0xcc; // float
		constexpr auto StiffnessFrequency = 0xd0; // float
		constexpr auto GravityScale = 0xd4; // float
		constexpr auto GravityOverride = 0xd8; // FVector
		constexpr auto bUseGravityOverride = 0xe4; // bool
		constexpr auto TetherStiffness = 0xe8; // float
		constexpr auto TetherLimit = 0xec; // float
		constexpr auto CollisionThickness = 0xf0; // float
		constexpr auto AnimDriveSpringStiffness = 0xf4; // float
		constexpr auto AnimDriveDamperStiffness = 0xf8; // float
		constexpr auto WindMethod = 0xfc; // EClothingWindMethod_Legacy
		constexpr auto VerticalConstraintConfig = 0x100; // FClothConstraintSetup_Legacy
		constexpr auto HorizontalConstraintConfig = 0x110; // FClothConstraintSetup_Legacy
		constexpr auto BendConstraintConfig = 0x120; // FClothConstraintSetup_Legacy
		constexpr auto ShearConstraintConfig = 0x130; // FClothConstraintSetup_Legacy
	}

	namespace n_USoundAttenuation {
		constexpr auto Attenuation = 0x28; // FSoundAttenuationSettings
	}

	namespace n_UChaosClothSharedSimConfig {
		constexpr auto IterationCount = 0x28; // int32_t
		constexpr auto SubdivisionCount = 0x2c; // int32_t
		constexpr auto bUseLocalSpaceSimulation = 0x30; // bool
		constexpr auto bUseXPBDConstraints = 0x31; // bool
	}

	namespace n_UMaterialExpressionCurveAtlasRowParameter {
		constexpr auto Curve = 0x60; // UCurveLinearColor*
		constexpr auto Atlas = 0x68; // UCurveLinearColorAtlas*
		constexpr auto InputTime = 0x70; // FExpressionInput
	}

	namespace n_APortalWarsTutorialGameMode {
		constexpr auto TutorialDefaultInventoryClasses = 0x6a8; // TArray<FDefaultInventoryClass>
	}

	namespace n_UPortalWarsCrosshairSelectWidget {
		constexpr auto ReticleWidget = 0x368; // UPortalWarsReticleWidget*
		constexpr auto CrosshairComboBox = 0x370; // UPortalWarsComboBoxString*
		constexpr auto WeaponID = 0x378; // int32_t
	}

	namespace n_UWidgetAnimation {
		constexpr auto MovieScene = 0x60; // UMovieScene*
		constexpr auto AnimationBindings = 0x68; // TArray<FWidgetAnimationBinding>
		constexpr auto bLegacyFinishOnStop = 0x78; // bool
		constexpr auto DisplayLabel = 0x80; // FString
	}

	namespace n_UNiagaraParameterCollection {
		constexpr auto Namespace = 0x28; // FName
		constexpr auto Parameters = 0x30; // TArray<FNiagaraVariable>
		constexpr auto SourceMaterialCollection = 0x40; // UMaterialParameterCollection*
		constexpr auto DefaultInstance = 0x48; // UNiagaraParameterCollectionInstance*
		constexpr auto CompileId = 0x50; // FGuid
	}

	namespace n_UChaosDestructionListener {
		constexpr auto bIsCollisionEventListeningEnabled = 0x1f8; // char : 1
		constexpr auto bIsBreakingEventListeningEnabled = 0x1f8; // char : 1
		constexpr auto bIsTrailingEventListeningEnabled = 0x1f8; // char : 1
		constexpr auto CollisionEventRequestSettings = 0x1fc; // FChaosCollisionEventRequestSettings
		constexpr auto BreakingEventRequestSettings = 0x214; // FChaosBreakingEventRequestSettings
		constexpr auto TrailingEventRequestSettings = 0x22c; // FChaosTrailingEventRequestSettings
		constexpr auto ChaosSolverActors = 0x248; // TSet<AChaosSolverActor*>
		constexpr auto GeometryCollectionActors = 0x298; // TSet<AGeometryCollectionActor*>
		constexpr auto OnCollisionEvents = 0x2e8; // FMulticastInlineDelegate
		constexpr auto OnBreakingEvents = 0x2f8; // FMulticastInlineDelegate
		constexpr auto OnTrailingEvents = 0x308; // FMulticastInlineDelegate
	}

	namespace n_UVRNotificationsComponent {
		constexpr auto HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate = 0xb0; // FMulticastInlineDelegate
		constexpr auto HMDTrackingInitializedDelegate = 0xc0; // FMulticastInlineDelegate
		constexpr auto HMDRecenteredDelegate = 0xd0; // FMulticastInlineDelegate
		constexpr auto HMDLostDelegate = 0xe0; // FMulticastInlineDelegate
		constexpr auto HMDReconnectedDelegate = 0xf0; // FMulticastInlineDelegate
		constexpr auto HMDConnectCanceledDelegate = 0x100; // FMulticastInlineDelegate
		constexpr auto HMDPutOnHeadDelegate = 0x110; // FMulticastInlineDelegate
		constexpr auto HMDRemovedFromHeadDelegate = 0x120; // FMulticastInlineDelegate
		constexpr auto VRControllerRecenteredDelegate = 0x130; // FMulticastInlineDelegate
	}

	namespace n_UInterpTrackInstMove {
		constexpr auto ResetLocation = 0x28; // FVector
		constexpr auto ResetRotation = 0x34; // FRotator
	}

	namespace n_UAnimNotifyState_TimedParticleEffect {
		constexpr auto PSTemplate = 0x30; // UParticleSystem*
		constexpr auto SocketName = 0x38; // FName
		constexpr auto LocationOffset = 0x40; // FVector
		constexpr auto RotationOffset = 0x4c; // FRotator
		constexpr auto bDestroyAtEnd = 0x58; // bool
	}

	namespace n_UEditableGameplayTagQueryExpression_AllExprMatch {
		constexpr auto Expressions = 0x28; // TArray<UEditableGameplayTagQueryExpression*>
	}

	namespace n_UPhysicsConstraintTemplate {
		constexpr auto DefaultInstance = 0x28; // FConstraintInstance
		constexpr auto ProfileHandles = 0x1f0; // TArray<FPhysicsConstraintProfileHandle>
		constexpr auto DefaultProfile = 0x200; // FConstraintProfileProperties
	}

	namespace n_UPortalWarsMatchResultWidget {
		constexpr auto TitleText = 0x260; // UTextBlock*
		constexpr auto LeftStarImage = 0x268; // UImage*
		constexpr auto RightStarImage = 0x270; // UImage*
		constexpr auto TopBorderImage = 0x278; // UImage*
		constexpr auto BottomBorderImage = 0x280; // UImage*
		constexpr auto FadeInAnimation = 0x2a0; // UWidgetAnimation*
	}

	namespace n_UInterpTrackDirector {
		constexpr auto CutTrack = 0x70; // TArray<FDirectorTrackCut>
		constexpr auto bSimulateCameraCutsOnClients = 0x80; // char : 1
	}

	namespace n_UPortalWarsTutorialVideoWidget {
		constexpr auto TutorialMediaPlayer = 0x2b8; // UMediaPlayer*
		constexpr auto TutorialMediaSoundActorClass = 0x2c0; // APortalWarsMediaSoundActor*
		constexpr auto TutorialMediaSoundActor = 0x2c8; // AActor*
		constexpr auto SubtitleText = 0x2d0; // FText
		constexpr auto ToggleVideoText = 0x2f8; // UTextBlock*
		constexpr auto Subtitles = 0x300; // UTextBlock*
	}

	namespace n_UHighlightsSummaryAsync {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_APortalWarsKOTHPlayerState {
		constexpr auto bIsOnHill = 0xac8; // char : 1
	}

	namespace n_UChaosPhysicalMaterial {
		constexpr auto Friction = 0x28; // float
		constexpr auto StaticFriction = 0x2c; // float
		constexpr auto Restitution = 0x30; // float
		constexpr auto LinearEtherDrag = 0x34; // float
		constexpr auto AngularEtherDrag = 0x38; // float
		constexpr auto SleepingLinearVelocityThreshold = 0x3c; // float
		constexpr auto SleepingAngularVelocityThreshold = 0x40; // float
	}

	namespace n_AFlagItem {
		constexpr auto TeamIndex = 0x6a1; // char
		constexpr auto FriendlyTeamFlagMaterial = 0x6b0; // UMaterialInstance*
		constexpr auto EnemyTeamFlagMaterial = 0x6b8; // UMaterialInstance*
		constexpr auto AlphaTeamFlagMaterial = 0x6c0; // UMaterialInstance*
		constexpr auto BravoTeamFlagMaterial = 0x6c8; // UMaterialInstance*
		constexpr auto CTFGameState = 0x6d0; // APortalWarsCTFGameState*
	}

	namespace n_UPortalWarsInputCarouselWidget {
		constexpr auto LeftButton = 0x368; // UButton*
		constexpr auto RightButton = 0x370; // UButton*
		constexpr auto LeftGamepadButton = 0x378; // UPortalWarsButtonWidget*
		constexpr auto RightGamepadButton = 0x380; // UPortalWarsButtonWidget*
		constexpr auto OnCarouselValueChangedDelegate = 0x388; // FMulticastInlineDelegate
		constexpr auto ConsoleSwitcher = 0x398; // UWidgetSwitcher*
	}

	namespace n_AOddballSpawnPoint {
		constexpr auto Mesh = 0x220; // UStaticMeshComponent*
		constexpr auto BallSpawnPoint = 0x228; // USceneComponent*
		constexpr auto OddballPickupClass = 0x230; // AOddballItemPickup*
		constexpr auto OddballGameState = 0x238; // APortalWarsOddballGameState*
	}

	namespace n_UMaterialExpressionThinTranslucentMaterialOutput {
		constexpr auto TransmittanceColor = 0x40; // FExpressionInput
	}

	namespace n_UPortalWarsLeaderboardWidget {
		constexpr auto WidgetSwitcher = 0x2b8; // UWidgetSwitcher*
		constexpr auto ErrorText = 0x2c0; // UTextBlock*
		constexpr auto LeaderboardEntryWidgetClass = 0x2c8; // UPortalWarsLeaderboardEntryWidget*
		constexpr auto LeaderboardPanel = 0x2d0; // UPanelWidget*
		constexpr auto LeaderboardType = 0x2d9; // ELeaderboardType
		constexpr auto bUsedCachedLeaderboard = 0x2f0; // bool
	}

	namespace n_UPortalWarsVideoSettingsWidget {
		constexpr auto DisplayMode = 0x358; // UPortalWarsDropdownWidget*
		constexpr auto Resolution = 0x360; // UPortalWarsDropdownWidget*
		constexpr auto ResolutionScale = 0x368; // UPortalWarsSpinSliderWidget*
		constexpr auto FOV = 0x370; // UPortalWarsSpinSliderWidget*
		constexpr auto VSync = 0x378; // UPortalWarsCheckBoxWidget*
		constexpr auto NVIDIAReflex = 0x380; // UPortalWarsDropdownWidget*
		constexpr auto LatencyMarkers = 0x388; // UPortalWarsCheckBoxWidget*
		constexpr auto LatencyFlash = 0x390; // UPortalWarsCheckBoxWidget*
		constexpr auto ViewDistance = 0x398; // UPortalWarsDropdownWidget*
		constexpr auto PostProcess = 0x3a0; // UPortalWarsDropdownWidget*
		constexpr auto Shadows = 0x3a8; // UPortalWarsDropdownWidget*
		constexpr auto Textures = 0x3b0; // UPortalWarsDropdownWidget*
		constexpr auto Effects = 0x3b8; // UPortalWarsDropdownWidget*
		constexpr auto AntiAliasing = 0x3c0; // UPortalWarsDropdownWidget*
		constexpr auto PortalQuality = 0x3c8; // UPortalWarsDropdownWidget*
		constexpr auto PortalFrameRate = 0x3d0; // UPortalWarsDropdownWidget*
		constexpr auto FrameRateLimit = 0x3d8; // UPortalWarsSpinSliderWidget*
		constexpr auto ColorblindMode = 0x3e0; // UPortalWarsDropdownWidget*
		constexpr auto ColorblindModeIntensity = 0x3e8; // UPortalWarsSpinSliderWidget*
	}

	namespace n_APWSpectatorPawn {
		constexpr auto TimeToReachMaxAccel = 0x2b8; // float
		constexpr auto ControllerMaxAccelMultiplier = 0x2bc; // float
		constexpr auto AkComponent = 0x2e0; // UPortalWarsAkComponent*
	}

	namespace n_UPWVoiceNotificationItem {
		constexpr auto Root = 0x260; // USizeBox*
		constexpr auto PlayerNameText = 0x268; // UTextBlock*
	}

	namespace n_UInAppPurchaseRestoreCallbackProxy2 {
		constexpr auto OnSuccess = 0x28; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x38; // FMulticastInlineDelegate
	}

	namespace n_UMaterialExpressionComment {
		constexpr auto SizeX = 0x40; // int32_t
		constexpr auto SizeY = 0x44; // int32_t
		constexpr auto Text = 0x48; // FString
		constexpr auto CommentColor = 0x58; // FLinearColor
		constexpr auto FontSize = 0x68; // int32_t
	}

	namespace n_UReverbEffect {
		constexpr auto bBypassEarlyReflections = 0x28; // bool
		constexpr auto ReflectionsDelay = 0x2c; // float
		constexpr auto GainHF = 0x30; // float
		constexpr auto ReflectionsGain = 0x34; // float
		constexpr auto bBypassLateReflections = 0x38; // bool
		constexpr auto LateDelay = 0x3c; // float
		constexpr auto DecayTime = 0x40; // float
		constexpr auto Density = 0x44; // float
		constexpr auto Diffusion = 0x48; // float
		constexpr auto AirAbsorptionGainHF = 0x4c; // float
		constexpr auto DecayHFRatio = 0x50; // float
		constexpr auto LateGain = 0x54; // float
		constexpr auto Gain = 0x58; // float
		constexpr auto RoomRolloffFactor = 0x5c; // float
	}

	namespace n_UPortalWarsRewardReceivedEntry {
		constexpr auto RewardReceivedTypeText = 0x730; // UTextBlock*
		constexpr auto LockedRoot = 0x738; // UWidget*
		constexpr auto RewardReceivedEvent = 0x748; // UAkAudioEvent*
	}

	namespace n_UNiagaraPreviewAxis_InterpParamVector2D {
		constexpr auto Min = 0x38; // FVector2D
		constexpr auto Max = 0x40; // FVector2D
	}

	namespace n_UAISenseEvent_Damage {
		constexpr auto Event = 0x28; // FAIDamageEvent
	}

	namespace n_AARSharedWorldGameState {
		constexpr auto PreviewImageData = 0x290; // TArray<char>
		constexpr auto ARWorldData = 0x2a0; // TArray<char>
		constexpr auto PreviewImageBytesTotal = 0x2b0; // int32_t
		constexpr auto ARWorldBytesTotal = 0x2b4; // int32_t
		constexpr auto PreviewImageBytesDelivered = 0x2b8; // int32_t
		constexpr auto ARWorldBytesDelivered = 0x2bc; // int32_t
	}

	namespace n_UPortalWarsRankUpdateWidget {
		constexpr auto RankUpAnimation = 0x390; // UWidgetAnimation*
		constexpr auto RankDownAnimation = 0x398; // UWidgetAnimation*
		constexpr auto RankSameAnimation = 0x3a0; // UWidgetAnimation*
		constexpr auto PrevRankIcon = 0x3a8; // UImage*
		constexpr auto NewRankIcon = 0x3b0; // UImage*
		constexpr auto RankNameText = 0x3b8; // UTextBlock*
		constexpr auto RankXPText = 0x3c0; // UTextBlock*
		constexpr auto IndicatorSwitcher = 0x3c8; // UWidgetSwitcher*
		constexpr auto RankUpEvent = 0x430; // UAkAudioEvent*
		constexpr auto RankDownEvent = 0x438; // UAkAudioEvent*
	}

	namespace n_UMaterialExpressionNamedRerouteDeclaration {
		constexpr auto Input = 0x40; // FExpressionInput
		constexpr auto Name = 0x54; // FName
		constexpr auto VariableGuid = 0x5c; // FGuid
	}

	namespace n_UParticleModuleMeshRotationRate {
		constexpr auto StartRotationRate = 0x30; // FRawDistributionVector
	}

	namespace n_UAkEventCallbackInfo {
		constexpr auto PlayingID = 0x30; // int32_t
		constexpr auto EventId = 0x34; // int32_t
	}

	namespace n_UDefaultLevelSequenceInstanceData {
		constexpr auto TransformOriginActor = 0x30; // AActor*
		constexpr auto TransformOrigin = 0x40; // FTransform
	}

	namespace n_UVariantSet {
		constexpr auto DisplayText = 0x28; // FText
		constexpr auto bExpanded = 0x58; // bool
		constexpr auto Variants = 0x60; // TArray<UVariant*>
		constexpr auto Thumbnail = 0x70; // UTexture2D*
	}

	namespace n_UPortalWarsSettingsMenuWidget {
		constexpr auto Widgets = 0x338; // TArray<UUserWidget*>
		constexpr auto ConsoleWidgets = 0x348; // TArray<UUserWidget*>
	}

	namespace n_UPortalWarsItemShopPurchasePanel {
		constexpr auto TitleText = 0x2a8; // UTextBlock*
		constexpr auto ItemTitleText = 0x2b0; // UTextBlock*
		constexpr auto ItemSubtitleText = 0x2b8; // UTextBlock*
		constexpr auto ItemShopEntry = 0x2c0; // UPortalWarsItemShopEntry*
		constexpr auto OwnedSwitcher = 0x2c8; // UWidgetSwitcher*
		constexpr auto PurchaseButton = 0x2e0; // UPortalWarsPurchaseButtonWidget*
		constexpr auto GamepadKey = 0x2e8; // FKey
	}

	namespace n_UParticleModuleVelocityOverLifetime {
		constexpr auto VelOverLife = 0x38; // FRawDistributionVector
		constexpr auto Absolute = 0x80; // char : 1
	}

	namespace n_UAutoDestroySubsystem {
		constexpr auto ActorsToPoll = 0x40; // TArray<AActor*>
	}

	namespace n_UInterpTrackInstFloatMaterialParam {
		constexpr auto MaterialInstances = 0x28; // TArray<UMaterialInstanceDynamic*>
		constexpr auto ResetFloats = 0x38; // TArray<float>
		constexpr auto PrimitiveMaterialRefs = 0x48; // TArray<FPrimitiveMaterialRef>
		constexpr auto InstancedTrack = 0x58; // UInterpTrackFloatMaterialParam*
	}

	namespace n_UPortalWarsGameConfigWidget {
		constexpr auto MapNameText = 0x260; // UTextBlock*
		constexpr auto ModeNameText = 0x268; // UTextBlock*
		constexpr auto ScoreLimitText = 0x270; // UTextBlock*
		constexpr auto MatchTimeText = 0x278; // UTextBlock*
		constexpr auto MaxPlayersText = 0x280; // UTextBlock*
	}

	namespace n_UMaterialExpressionSceneTexture {
		constexpr auto Coordinates = 0x40; // FExpressionInput
		constexpr auto SceneTextureId = 0x54; // ESceneTextureId
		constexpr auto bFiltered = 0x55; // bool
	}

	namespace n_UPathFollowingComponent {
		constexpr auto MovementComp = 0xe8; // UNavMovementComponent*
		constexpr auto MyNavData = 0xf8; // ANavigationData*
	}

	namespace n_UMeshSelectionSet {
		constexpr auto Vertices = 0x40; // TArray<int32_t>
		constexpr auto Edges = 0x50; // TArray<int32_t>
		constexpr auto Faces = 0x60; // TArray<int32_t>
		constexpr auto Groups = 0x70; // TArray<int32_t>
	}

	namespace n_APortalWarsPlayerState {
		constexpr auto TeamNum = 0x338; // char
		constexpr auto KillStreak = 0x358; // char
		constexpr auto MultiKillCounter = 0x359; // char
		constexpr auto DamagePlayers = 0x3b8; // TMap<APortalWarsPlayerState*, float>
		constexpr auto PlayerStats = 0x4f8; // FPlayerStatsInfo_InDepth
		constexpr auto PostGameStats = 0x5c0; // FEndGamePlayerInfo
		constexpr auto bIsAdmin = 0x800; // bool
		constexpr auto PlayerCustomizations = 0x808; // TArray<FCustomizationId>
		constexpr auto CachedCustomizationObjects = 0x830; // TArray<UObject*>
		constexpr auto PlayerAvatar = 0x878; // UTexture*
		constexpr auto SavedPlayerAvatar = 0x880; // UTexture*
		constexpr auto SavedBotAvatar = 0x888; // UTexture*
		constexpr auto PlayerRanks = 0x890; // TArray<FUserRankInfo>
		constexpr auto Progression = 0x8b8; // FUserProgressionInfo
		constexpr auto DailyStreak = 0x8d8; // FUserDailyStreakInfo
		constexpr auto bHideNames = 0x948; // bool
		constexpr auto bAnonymousMode = 0x949; // char : 1
		constexpr auto bPartyChatOnly = 0x949; // char : 1
		constexpr auto CachedCharacter = 0x970; // APortalWarsCharacter*
		constexpr auto bQuitter = 0x978; // char : 1
		constexpr auto InactiveTime = 0x97c; // int32_t
		constexpr auto bJoinedInProgress = 0x980; // bool
		constexpr auto bIsFlagged = 0x9ad; // bool
		constexpr auto bIsReadyForNextMatch = 0x9c8; // bool
		constexpr auto DefaultProfile = 0xa00; // FBotProfileData
		constexpr auto SimulatedFOV = 0xac0; // float
	}

	namespace n_UPortalWarsOddballIndicator {
		constexpr auto Pointer = 0x2b8; // UWidget*
		constexpr auto OnScreenBackgroundImage = 0x2c8; // UImage*
		constexpr auto OffScreenBackgroundImage = 0x2d0; // UImage*
		constexpr auto NeutralBackground = 0x2d8; // UTexture2D*
		constexpr auto RedBackground = 0x2e0; // UTexture2D*
		constexpr auto BlueBackground = 0x2e8; // UTexture2D*
	}

	namespace n_UParticleModuleBeamTarget {
		constexpr auto TargetMethod = 0x30; // Beam2SourceTargetMethod
		constexpr auto TargetName = 0x34; // FName
		constexpr auto Target = 0x40; // FRawDistributionVector
		constexpr auto bTargetAbsolute = 0x88; // char : 1
		constexpr auto bLockTarget = 0x88; // char : 1
		constexpr auto TargetTangentMethod = 0x8c; // Beam2SourceTargetTangentMethod
		constexpr auto TargetTangent = 0x90; // FRawDistributionVector
		constexpr auto bLockTargetTangent = 0xd8; // char : 1
		constexpr auto TargetStrength = 0xe0; // FRawDistributionFloat
		constexpr auto bLockTargetStength = 0x110; // char : 1
		constexpr auto LockRadius = 0x114; // float
	}

	namespace n_UPortalWarsJoinInProgressWidget {
		constexpr auto FadeOutAnimation = 0x260; // UWidgetAnimation*
		constexpr auto TimeBeforeFadingOut = 0x268; // float
	}

	namespace n_USoundBase {
		constexpr auto SoundClassObject = 0x30; // USoundClass*
		constexpr auto bDebug = 0x38; // char : 1
		constexpr auto bOverrideConcurrency = 0x38; // char : 1
		constexpr auto bEnableBusSends = 0x38; // char : 1
		constexpr auto bEnableBaseSubmix = 0x38; // char : 1
		constexpr auto bEnableSubmixSends = 0x38; // char : 1
		constexpr auto bHasDelayNode = 0x38; // char : 1
		constexpr auto bHasConcatenatorNode = 0x38; // char : 1
		constexpr auto bBypassVolumeScaleForPriority = 0x38; // char : 1
		constexpr auto VirtualizationMode = 0x39; // EVirtualizationMode
		constexpr auto ConcurrencySet = 0x90; // TSet<USoundConcurrency*>
		constexpr auto ConcurrencyOverrides = 0xe0; // FSoundConcurrencySettings
		constexpr auto Duration = 0x108; // float
		constexpr auto MaxDistance = 0x10c; // float
		constexpr auto TotalSamples = 0x110; // float
		constexpr auto Priority = 0x114; // float
		constexpr auto AttenuationSettings = 0x118; // USoundAttenuation*
		constexpr auto SoundSubmixObject = 0x120; // USoundSubmixBase*
		constexpr auto SoundSubmixSends = 0x128; // TArray<FSoundSubmixSendInfo>
		constexpr auto SourceEffectChain = 0x138; // USoundEffectSourcePresetChain*
		constexpr auto BusSends = 0x140; // TArray<FSoundSourceBusSendInfo>
		constexpr auto PreEffectBusSends = 0x150; // TArray<FSoundSourceBusSendInfo>
		constexpr auto AssetUserData = 0x160; // TArray<UAssetUserData*>
	}

	namespace n_UInputSettings {
		constexpr auto AxisConfig = 0x28; // TArray<FInputAxisConfigEntry>
		constexpr auto bAltEnterTogglesFullscreen = 0x38; // char : 1
		constexpr auto bF11TogglesFullscreen = 0x38; // char : 1
		constexpr auto bUseMouseForTouch = 0x38; // char : 1
		constexpr auto bEnableMouseSmoothing = 0x38; // char : 1
		constexpr auto bEnableFOVScaling = 0x38; // char : 1
		constexpr auto bCaptureMouseOnLaunch = 0x38; // char : 1
		constexpr auto bDefaultViewportMouseLock = 0x38; // char : 1
		constexpr auto bAlwaysShowTouchInterface = 0x38; // char : 1
		constexpr auto bShowConsoleOnFourFingerTap = 0x39; // char : 1
		constexpr auto bEnableGestureRecognizer = 0x39; // char : 1
		constexpr auto bUseAutocorrect = 0x3a; // bool
		constexpr auto ExcludedAutocorrectOS = 0x40; // TArray<FString>
		constexpr auto ExcludedAutocorrectCultures = 0x50; // TArray<FString>
		constexpr auto ExcludedAutocorrectDeviceModels = 0x60; // TArray<FString>
		constexpr auto DefaultViewportMouseCaptureMode = 0x70; // EMouseCaptureMode
		constexpr auto DefaultViewportMouseLockMode = 0x71; // EMouseLockMode
		constexpr auto FOVScale = 0x74; // float
		constexpr auto DoubleClickTime = 0x78; // float
		constexpr auto ActionMappings = 0x80; // TArray<FInputActionKeyMapping>
		constexpr auto AxisMappings = 0x90; // TArray<FInputAxisKeyMapping>
		constexpr auto SpeechMappings = 0xa0; // TArray<FInputActionSpeechMapping>
		constexpr auto DefaultPlayerInputClass = 0xb0; // TSoftClassPtr<UObject>
		constexpr auto DefaultInputComponentClass = 0xd8; // TSoftClassPtr<UObject>
		constexpr auto DefaultTouchInterface = 0x100; // FSoftObjectPath
		constexpr auto ConsoleKey = 0x118; // FKey
		constexpr auto ConsoleKeys = 0x130; // TArray<FKey>
	}

	namespace n_UCurveFloat {
		constexpr auto FloatCurve = 0x30; // FRichCurve
		constexpr auto bIsEventCurve = 0xb0; // bool
	}

	namespace n_UPlatformGameInstance {
		constexpr auto ApplicationWillDeactivateDelegate = 0x1a8; // FMulticastInlineDelegate
		constexpr auto ApplicationHasReactivatedDelegate = 0x1b8; // FMulticastInlineDelegate
		constexpr auto ApplicationWillEnterBackgroundDelegate = 0x1c8; // FMulticastInlineDelegate
		constexpr auto ApplicationHasEnteredForegroundDelegate = 0x1d8; // FMulticastInlineDelegate
		constexpr auto ApplicationWillTerminateDelegate = 0x1e8; // FMulticastInlineDelegate
		constexpr auto ApplicationShouldUnloadResourcesDelegate = 0x1f8; // FMulticastInlineDelegate
		constexpr auto ApplicationReceivedStartupArgumentsDelegate = 0x208; // FMulticastInlineDelegate
		constexpr auto ApplicationRegisteredForRemoteNotificationsDelegate = 0x218; // FMulticastInlineDelegate
		constexpr auto ApplicationRegisteredForUserNotificationsDelegate = 0x228; // FMulticastInlineDelegate
		constexpr auto ApplicationFailedToRegisterForRemoteNotificationsDelegate = 0x238; // FMulticastInlineDelegate
		constexpr auto ApplicationReceivedRemoteNotificationDelegate = 0x248; // FMulticastInlineDelegate
		constexpr auto ApplicationReceivedLocalNotificationDelegate = 0x258; // FMulticastInlineDelegate
		constexpr auto ApplicationReceivedScreenOrientationChangedNotificationDelegate = 0x268; // FMulticastInlineDelegate
	}

	namespace n_UMaterialExpressionFunctionInput {
		constexpr auto Preview = 0x40; // FExpressionInput
		constexpr auto InputName = 0x54; // FName
		constexpr auto Description = 0x60; // FString
		constexpr auto ID = 0x70; // FGuid
		constexpr auto InputType = 0x80; // EFunctionInputType
		constexpr auto PreviewValue = 0x90; // FVector4
		constexpr auto bUsePreviewValueAsDefault = 0xa0; // char : 1
		constexpr auto SortPriority = 0xa4; // int32_t
		constexpr auto bCompilingFunctionPreview = 0xa8; // char : 1
	}

	namespace n_UTextureRenderTargetCube {
		constexpr auto SizeX = 0x180; // int32_t
		constexpr auto ClearColor = 0x184; // FLinearColor
		constexpr auto OverrideFormat = 0x194; // EPixelFormat
		constexpr auto bHDR = 0x195; // char : 1
		constexpr auto bForceLinearGamma = 0x195; // char : 1
	}

	namespace n_USubmixEffectConvolutionReverbPreset {
		constexpr auto ImpulseResponse = 0x68; // UAudioImpulseResponse*
		constexpr auto Settings = 0x70; // FSubmixEffectConvolutionReverbSettings
		constexpr auto BlockSize = 0x98; // ESubmixEffectConvolutionReverbBlockSize
		constexpr auto bEnableHardwareAcceleration = 0x99; // bool
	}

	namespace n_UNiagaraDataInterfaceAudioPlayer {
		constexpr auto SoundToPlay = 0x38; // USoundBase*
		constexpr auto Attenuation = 0x40; // USoundAttenuation*
		constexpr auto Concurrency = 0x48; // USoundConcurrency*
		constexpr auto ParameterNames = 0x50; // TArray<FName>
		constexpr auto bLimitPlaysPerTick = 0x60; // bool
		constexpr auto MaxPlaysPerTick = 0x64; // int32_t
		constexpr auto bStopWhenComponentIsDestroyed = 0x68; // bool
	}

	namespace n_USlateVectorArtData {
		constexpr auto VertexData = 0x28; // TArray<FSlateMeshVertex>
		constexpr auto IndexData = 0x38; // TArray<uint32_t>
		constexpr auto Material = 0x48; // UMaterialInterface*
		constexpr auto ExtentMin = 0x50; // FVector2D
		constexpr auto ExtentMax = 0x58; // FVector2D
	}

	namespace n_UMaterialExpressionTextureCoordinate {
		constexpr auto CoordinateIndex = 0x40; // int32_t
		constexpr auto UTiling = 0x44; // float
		constexpr auto VTiling = 0x48; // float
		constexpr auto UnMirrorU = 0x4c; // char : 1
		constexpr auto UnMirrorV = 0x4c; // char : 1
	}

	namespace n_UPortalWarsRenameReplayDialogWidget {
		constexpr auto NameInput = 0x3d8; // UPortalWarsTextInputWidget*
	}

	namespace n_UEditableTextBoxWidgetStyle {
		constexpr auto EditableTextBoxStyle = 0x30; // FEditableTextBoxStyle
	}

	namespace n_UInterpTrackLinearColorProp {
		constexpr auto PropertyName = 0x90; // FName
	}

	namespace n_UMovieSceneMediaPlayerPropertySection {
		constexpr auto MediaSource = 0xe8; // UMediaSource*
		constexpr auto bLoop = 0xf0; // bool
	}

	namespace n_UPortalWarsGameInstance {
		constexpr auto bMovieWillAutocompleteWhenLoadFinishes = 0x1a9; // bool
		constexpr auto LoadingScreenWidget = 0x1b0; // UPortalWarsLoadingScreenWidget*
		constexpr auto LoadingScreenWidgetClass = 0x1b8; // TSoftClassPtr<UObject>
		constexpr auto GameSettings = 0x1e0; // FGameConfig
	}

	namespace n_UEnvQueryOption {
		constexpr auto Generator = 0x28; // UEnvQueryGenerator*
		constexpr auto Tests = 0x30; // TArray<UEnvQueryTest*>
	}

	namespace n_USkyLightComponent {
		constexpr auto bRealTimeCapture = 0x228; // bool
		constexpr auto SourceType = 0x229; // ESkyLightSourceType
		constexpr auto Cubemap = 0x230; // UTextureCube*
		constexpr auto SourceCubemapAngle = 0x238; // float
		constexpr auto CubemapResolution = 0x23c; // int32_t
		constexpr auto SkyDistanceThreshold = 0x240; // float
		constexpr auto bCaptureEmissiveOnly = 0x244; // bool
		constexpr auto bLowerHemisphereIsBlack = 0x245; // bool
		constexpr auto LowerHemisphereColor = 0x248; // FLinearColor
		constexpr auto OcclusionMaxDistance = 0x258; // float
		constexpr auto Contrast = 0x25c; // float
		constexpr auto OcclusionExponent = 0x260; // float
		constexpr auto MinOcclusion = 0x264; // float
		constexpr auto OcclusionTint = 0x268; // FColor
		constexpr auto bCloudAmbientOcclusion = 0x26c; // char : 1
		constexpr auto CloudAmbientOcclusionStrength = 0x270; // float
		constexpr auto CloudAmbientOcclusionExtent = 0x274; // float
		constexpr auto CloudAmbientOcclusionMapResolutionScale = 0x278; // float
		constexpr auto CloudAmbientOcclusionApertureScale = 0x27c; // float
		constexpr auto OcclusionCombineMode = 0x280; // EOcclusionCombineMode
		constexpr auto BlendDestinationCubemap = 0x338; // UTextureCube*
	}

	namespace n_UMaterialExpressionConstant4Vector {
		constexpr auto Constant = 0x40; // FLinearColor
	}

	namespace n_ULevelStreamingDynamic {
		constexpr auto bInitiallyLoaded = 0x148; // char : 1
		constexpr auto bInitiallyVisible = 0x148; // char : 1
	}

	namespace n_APortalWarsHUD {
		constexpr auto RootWidget = 0x310; // UPortalWarsRootHUDWidget*
		constexpr auto RootWidgetClass = 0x318; // UPortalWarsRootHUDWidget*
		constexpr auto bIsCharacterAlive = 0x320; // bool
		constexpr auto HUDWidget = 0x328; // UPortalWarsHUDWidget*
		constexpr auto HUDWidgetClass = 0x330; // UPortalWarsHUDWidget*
		constexpr auto ScoreboardWidget = 0x338; // UPortalWarsScoreboardWidget*
		constexpr auto ScoreboardWidgetClass = 0x340; // UPortalWarsScoreboardWidget*
		constexpr auto EmoteWheelWidget = 0x348; // UPortalWarsEmoteWheelWidget*
		constexpr auto EmoteWheelWidgetClass = 0x350; // UPortalWarsEmoteWheelWidget*
		constexpr auto AimingAtEnemy = 0x359; // bool
		constexpr auto ChatWidget = 0x360; // UPortalWarsChatWidget*
		constexpr auto ChatWidgetClass = 0x368; // UPortalWarsChatWidget*
		constexpr auto CountdownWidget = 0x370; // UPortalWarsCountdownWidget*
		constexpr auto CountdownWidgetClass = 0x378; // UPortalWarsCountdownWidget*
		constexpr auto MatchResultWidget = 0x380; // UPortalWarsMatchResultWidget*
		constexpr auto MatchResultWidgetClass = 0x388; // UPortalWarsMatchResultWidget*
		constexpr auto MatchCancelledWidget = 0x390; // UUserWidget*
		constexpr auto MatchCancelledWidgetClass = 0x398; // UUserWidget*
		constexpr auto PreGameCountdownEvent = 0x3a0; // UAkAudioEvent*
		constexpr auto JoinInProgressWidget = 0x3b0; // UPortalWarsJoinInProgressWidget*
		constexpr auto JoinInProgressWidgetClass = 0x3b8; // UPortalWarsJoinInProgressWidget*
		constexpr auto KillcamWidget = 0x3c0; // UPortalWarsKillcamWidget*
		constexpr auto KillcamWidgetClass = 0x3c8; // UPortalWarsKillcamWidget*
		constexpr auto KillcamTransitionWidget = 0x3d0; // UPWKillcamTransitionWidget*
		constexpr auto KillcamTransitionWidgetClass = 0x3d8; // UPWKillcamTransitionWidget*
		constexpr auto ScreenFadeWidget = 0x3e0; // UPortalWarsScreenFadeWidget*
		constexpr auto ScreenFadeWidgetClass = 0x3e8; // UPortalWarsScreenFadeWidget*
		constexpr auto VoiceNotificationWidget = 0x3f0; // UPWVoiceNotifications*
		constexpr auto VoiceNotificationWidgetClass = 0x3f8; // UPWVoiceNotifications*
	}

	namespace n_UAnimClassData {
		constexpr auto BakedStateMachines = 0x30; // TArray<FBakedAnimationStateMachine>
		constexpr auto TargetSkeleton = 0x40; // USkeleton*
		constexpr auto AnimNotifies = 0x48; // TArray<FAnimNotifyEvent>
		constexpr auto OrderedSavedPoseIndicesMap = 0x58; // TMap<FName, FCachedPoseIndices>
		constexpr auto AnimBlueprintFunctions = 0xa8; // TArray<FAnimBlueprintFunction>
		constexpr auto AnimBlueprintFunctionData = 0xb8; // TArray<FAnimBlueprintFunctionData>
		constexpr auto AnimNodeProperties = 0xc8; // TArray<TFieldPath<FStructProperty>>
		constexpr auto LinkedAnimGraphNodeProperties = 0xe8; // TArray<TFieldPath<FStructProperty>>
		constexpr auto LinkedAnimLayerNodeProperties = 0x108; // TArray<TFieldPath<FStructProperty>>
		constexpr auto PreUpdateNodeProperties = 0x128; // TArray<TFieldPath<FStructProperty>>
		constexpr auto DynamicResetNodeProperties = 0x148; // TArray<TFieldPath<FStructProperty>>
		constexpr auto StateMachineNodeProperties = 0x168; // TArray<TFieldPath<FStructProperty>>
		constexpr auto InitializationNodeProperties = 0x188; // TArray<TFieldPath<FStructProperty>>
		constexpr auto GraphNameAssetPlayers = 0x1a8; // TMap<FName, FGraphAssetPlayerInformation>
		constexpr auto SyncGroupNames = 0x1f8; // TArray<FName>
		constexpr auto EvaluateGraphExposedInputs = 0x208; // TArray<FExposedValueHandler>
		constexpr auto GraphBlendOptions = 0x218; // TMap<FName, FAnimGraphBlendOptions>
		constexpr auto PropertyAccessLibrary = 0x268; // FPropertyAccessLibrary
	}

	namespace n_AReflectionCapture {
		constexpr auto CaptureComponent = 0x220; // UReflectionCaptureComponent*
	}

	namespace n_UNiagaraDataInterfaceSpline {
		constexpr auto Source = 0x38; // AActor*
		constexpr auto SplineUserParameter = 0x40; // FNiagaraUserParameterBinding
	}

	namespace n_USkeletalMeshComponent {
		constexpr auto AnimBlueprintGeneratedClass = 0x6a0; // UObject*
		constexpr auto AnimClass = 0x6a8; // UAnimInstance*
		constexpr auto AnimScriptInstance = 0x6b0; // UAnimInstance*
		constexpr auto PostProcessAnimInstance = 0x6b8; // UAnimInstance*
		constexpr auto AnimationData = 0x6c0; // FSingleAnimationPlayData
		constexpr auto RootBoneTranslation = 0x6e8; // FVector
		constexpr auto LineCheckBoundsScale = 0x6f4; // FVector
		constexpr auto LinkedInstances = 0x730; // TArray<UAnimInstance*>
		constexpr auto CachedBoneSpaceTransforms = 0x740; // TArray<FTransform>
		constexpr auto CachedComponentSpaceTransforms = 0x750; // TArray<FTransform>
		constexpr auto GlobalAnimRateScale = 0x8b0; // float
		constexpr auto KinematicBonesUpdateType = 0x8b4; // EKinematicBonesUpdateToPhysics
		constexpr auto PhysicsTransformUpdateMode = 0x8b5; // EPhysicsTransformUpdateMode
		constexpr auto AnimationMode = 0x8b7; // EAnimationMode
		constexpr auto bDisablePostProcessBlueprint = 0x8b9; // char : 1
		constexpr auto bUpdateOverlapsOnAnimationFinalize = 0x8b9; // char : 1
		constexpr auto bHasValidBodies = 0x8b9; // char : 1
		constexpr auto bBlendPhysics = 0x8b9; // char : 1
		constexpr auto bEnablePhysicsOnDedicatedServer = 0x8b9; // char : 1
		constexpr auto bUpdateJointsFromAnimation = 0x8b9; // char : 1
		constexpr auto bDisableClothSimulation = 0x8ba; // char : 1
		constexpr auto bDisableRigidBodyAnimNode = 0x8c0; // char : 1
		constexpr auto bAllowAnimCurveEvaluation = 0x8c0; // char : 1
		constexpr auto bDisableAnimCurves = 0x8c0; // char : 1
		constexpr auto bCollideWithEnvironment = 0x8c0; // char : 1
		constexpr auto bCollideWithAttachedChildren = 0x8c1; // char : 1
		constexpr auto bLocalSpaceSimulation = 0x8c1; // char : 1
		constexpr auto bResetAfterTeleport = 0x8c1; // char : 1
		constexpr auto bDeferKinematicBoneUpdate = 0x8c1; // char : 1
		constexpr auto bNoSkeletonUpdate = 0x8c1; // char : 1
		constexpr auto bPauseAnims = 0x8c1; // char : 1
		constexpr auto bUseRefPoseOnInitAnim = 0x8c1; // char : 1
		constexpr auto bEnablePerPolyCollision = 0x8c2; // char : 1
		constexpr auto bForceRefpose = 0x8c2; // char : 1
		constexpr auto bOnlyAllowAutonomousTickPose = 0x8c2; // char : 1
		constexpr auto bIsAutonomousTickPose = 0x8c2; // char : 1
		constexpr auto bOldForceRefPose = 0x8c2; // char : 1
		constexpr auto bShowPrePhysBones = 0x8c2; // char : 1
		constexpr auto bRequiredBonesUpToDate = 0x8c2; // char : 1
		constexpr auto bAnimTreeInitialised = 0x8c2; // char : 1
		constexpr auto bIncludeComponentLocationIntoBounds = 0x8c3; // char : 1
		constexpr auto bEnableLineCheckWithBounds = 0x8c3; // char : 1
		constexpr auto bUseBendingElements = 0x8c3; // char : 1
		constexpr auto bUseTetrahedralConstraints = 0x8c3; // char : 1
		constexpr auto bUseThinShellVolumeConstraints = 0x8c3; // char : 1
		constexpr auto bUseSelfCollisions = 0x8c3; // char : 1
		constexpr auto bUseContinuousCollisionDetection = 0x8c3; // char : 1
		constexpr auto bPropagateCurvesToSlaves = 0x8c3; // char : 1
		constexpr auto bSkipKinematicUpdateWhenInterpolating = 0x8c4; // char : 1
		constexpr auto bSkipBoundsUpdateWhenInterpolating = 0x8c4; // char : 1
		constexpr auto bNeedsQueuedAnimEventsDispatched = 0x8c4; // char : 1
		constexpr auto CachedAnimCurveUidVersion = 0x8c6; // uint16_t
		constexpr auto MassMode = 0x8c8; // EClothMassMode
		constexpr auto UniformMass = 0x8cc; // float
		constexpr auto TotalMass = 0x8d0; // float
		constexpr auto Density = 0x8d4; // float
		constexpr auto MinPerParticleMass = 0x8d8; // float
		constexpr auto ClothBlendWeight = 0x8dc; // float
		constexpr auto EdgeStiffness = 0x8e0; // float
		constexpr auto BendingStiffness = 0x8e4; // float
		constexpr auto AreaStiffness = 0x8e8; // float
		constexpr auto VolumeStiffness = 0x8ec; // float
		constexpr auto StrainLimitingStiffness = 0x8f0; // float
		constexpr auto ShapeTargetStiffness = 0x8f4; // float
		constexpr auto bWaitForParallelClothTask = 0x8f8; // bool
		constexpr auto DisallowedAnimCurves = 0x900; // TArray<FName>
		constexpr auto BodySetup = 0x910; // UBodySetup*
		constexpr auto OnConstraintBroken = 0x920; // FMulticastInlineDelegate
		constexpr auto ClothingSimulationFactory = 0x930; // UClothingSimulationFactory*
		constexpr auto TeleportDistanceThreshold = 0xa08; // float
		constexpr auto TeleportRotationThreshold = 0xa0c; // float
		constexpr auto LastPoseTickFrame = 0xa18; // uint32_t
		constexpr auto ClothingInteractor = 0xa70; // UClothingSimulationInteractor*
		constexpr auto OnAnimInitialized = 0xb40; // FMulticastInlineDelegate
	}

	namespace n_UProceduralFoliageSpawner {
		constexpr auto RandomSeed = 0x28; // int32_t
		constexpr auto TileSize = 0x2c; // float
		constexpr auto NumUniqueTiles = 0x30; // int32_t
		constexpr auto MinimumQuadTreeSize = 0x34; // float
		constexpr auto FoliageTypes = 0x40; // TArray<FFoliageTypeObject>
	}

	namespace n_UDatasmithCineCameraActorTemplate {
		constexpr auto LookatTrackingSettings = 0x30; // FDatasmithCameraLookatTrackingSettingsTemplate
	}

	namespace n_UAnimCompress {
		constexpr auto bNeedsSkeleton = 0x38; // char : 1
		constexpr auto TranslationCompressionFormat = 0x3c; // AnimationCompressionFormat
		constexpr auto RotationCompressionFormat = 0x3d; // AnimationCompressionFormat
		constexpr auto ScaleCompressionFormat = 0x3e; // AnimationCompressionFormat
	}

	namespace n_UPortalWarsDialogWidget {
		constexpr auto OnDialogClosed = 0x338; // FMulticastInlineDelegate
		constexpr auto OnDialogClosedPointer = 0x348; // FMulticastInlineDelegate
		constexpr auto MaxLifetime = 0x358; // float
		constexpr auto LifetimeProgressBar = 0x360; // UProgressBar*
		constexpr auto MinLifetime = 0x370; // float
		constexpr auto CloseButton = 0x380; // UPortalWarsButtonWidget*
		constexpr auto OpenAnimation = 0x388; // UWidgetAnimation*
	}

	namespace n_UMaterialExpressionAppendVector {
		constexpr auto A = 0x40; // FExpressionInput
		constexpr auto B = 0x54; // FExpressionInput
	}

	namespace n_UParticleModuleVelocityCone {
		constexpr auto Angle = 0x38; // FRawDistributionFloat
		constexpr auto Velocity = 0x68; // FRawDistributionFloat
		constexpr auto Direction = 0x98; // FVector
	}

	namespace n_UPortalWarsPostGameOverviewWidget {
		constexpr auto CardPanel = 0x390; // UPanelWidget*
		constexpr auto PostGameCardWidgetClass = 0x398; // UPortalWarsPostGameCardWidget*
		constexpr auto XPUpdateWidget = 0x3a0; // UPortalWarsXPUpdateWidget*
		constexpr auto XpBoostPanel = 0x3a8; // UPanelWidget*
		constexpr auto XpBoostEntryWidgetClass = 0x3b0; // UPortalWarsXPUpdateEntryWidget*
	}

	namespace n_UPortalWarsPickupIndicatorWidget {
		constexpr auto PickupNameText = 0x2b8; // UTextBlock*
	}

	namespace n_UMoviePlayerSettings {
		constexpr auto bWaitForMoviesToComplete = 0x28; // bool
		constexpr auto bMoviesAreSkippable = 0x29; // bool
		constexpr auto StartupMovies = 0x30; // TArray<FString>
	}

	namespace n_UInitHighlights {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_UAkWwiseTreeSelector {
		constexpr auto OnSelectionChanged = 0x108; // FMulticastInlineDelegate
		constexpr auto OnItemDragged = 0x118; // FMulticastInlineDelegate
	}

	namespace n_UBTTask_PlayAnimation {
		constexpr auto AnimationToPlay = 0x70; // UAnimationAsset*
		constexpr auto bLooping = 0x78; // char : 1
		constexpr auto bNonBlocking = 0x78; // char : 1
		constexpr auto MyOwnerComp = 0x80; // UBehaviorTreeComponent*
		constexpr auto CachedSkelMesh = 0x88; // USkeletalMeshComponent*
	}

	namespace n_UBTTaskNode {
		constexpr auto Services = 0x58; // TArray<UBTService*>
		constexpr auto bIgnoreRestartSelf = 0x68; // char : 1
	}

	namespace n_UGenlockedTimecodeProvider {
		constexpr auto bUseGenlockToCount = 0x30; // bool
	}

	namespace n_UGarbageCollectionSettings {
		constexpr auto TimeBetweenPurgingPendingKillObjects = 0x38; // float
		constexpr auto FlushStreamingOnGC = 0x3c; // char : 1
		constexpr auto AllowParallelGC = 0x3c; // char : 1
		constexpr auto IncrementalBeginDestroyEnabled = 0x3c; // char : 1
		constexpr auto MultithreadedDestructionEnabled = 0x3c; // char : 1
		constexpr auto CreateGCClusters = 0x3c; // char : 1
		constexpr auto AssetClusteringEnabled = 0x3c; // char : 1
		constexpr auto ActorClusteringEnabled = 0x3c; // char : 1
		constexpr auto BlueprintClusteringEnabled = 0x3c; // char : 1
		constexpr auto UseDisregardForGCOnDedicatedServers = 0x3d; // char : 1
		constexpr auto MinGCClusterSize = 0x40; // int32_t
		constexpr auto NumRetriesBeforeForcingGC = 0x44; // int32_t
		constexpr auto MaxObjectsNotConsideredByGC = 0x48; // int32_t
		constexpr auto SizeOfPermanentObjectPool = 0x4c; // int32_t
		constexpr auto MaxObjectsInGame = 0x50; // int32_t
		constexpr auto MaxObjectsInEditor = 0x54; // int32_t
	}

	namespace n_UMaterialExpressionAbs {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UMaterialExpressionPerInstanceCustomData {
		constexpr auto DefaultValue = 0x40; // FExpressionInput
		constexpr auto ConstDefaultValue = 0x54; // float
		constexpr auto DataIndex = 0x58; // uint32_t
	}

	namespace n_UAsyncActionLoadPrimaryAssetClassList {
		constexpr auto Completed = 0x78; // FMulticastInlineDelegate
	}

	namespace n_APortalWarsAIController {
		constexpr auto BlackboardComp = 0x3c0; // UBlackboardComponent*
		constexpr auto BehaviorComp = 0x3c8; // UBehaviorTreeComponent*
		constexpr auto HearConfig = 0x3d0; // UAISenseConfig_Hearing*
		constexpr auto MinOffsetHeightPathFollowing = 0x488; // float
		constexpr auto MaxOffsetHeightPathFollowing = 0x48c; // float
		constexpr auto MaxOffsetLateralPathFollowing = 0x490; // float
	}

	namespace n_UCameraShakeSourceComponent {
		constexpr auto Attenuation = 0x1f8; // ECameraShakeAttenuation
		constexpr auto InnerAttenuationRadius = 0x1fc; // float
		constexpr auto OuterAttenuationRadius = 0x200; // float
		constexpr auto CameraShake = 0x208; // UCameraShakeBase*
		constexpr auto bAutoStart = 0x210; // bool
	}

	namespace n_UPortalWarsGateIndicatorWidget {
		constexpr auto Pointer = 0x2b8; // UWidget*
		constexpr auto Offset = 0x2c0; // FVector
	}

	namespace n_UTransformProxy {
		constexpr auto bRotatePerObject = 0x70; // bool
		constexpr auto bSetPivotMode = 0x71; // bool
		constexpr auto SharedTransform = 0x90; // FTransform
		constexpr auto InitialSharedTransform = 0xc0; // FTransform
	}

	namespace n_USoundEffectSourcePresetChain {
		constexpr auto Chain = 0x28; // TArray<FSourceEffectChainEntry>
		constexpr auto bPlayEffectChainTails = 0x38; // char : 1
	}

	namespace n_UMovieSceneSequencePlayer {
		constexpr auto OnPlay = 0x418; // FMulticastInlineDelegate
		constexpr auto OnPlayReverse = 0x428; // FMulticastInlineDelegate
		constexpr auto OnStop = 0x438; // FMulticastInlineDelegate
		constexpr auto OnPause = 0x448; // FMulticastInlineDelegate
		constexpr auto OnFinished = 0x458; // FMulticastInlineDelegate
		constexpr auto Status = 0x468; // EMovieScenePlayerStatus
		constexpr auto bReversePlayback = 0x46c; // char : 1
		constexpr auto Sequence = 0x470; // UMovieSceneSequence*
		constexpr auto StartTime = 0x478; // FFrameNumber
		constexpr auto DurationFrames = 0x47c; // int32_t
		constexpr auto DurationSubFrames = 0x480; // float
		constexpr auto CurrentNumLoops = 0x484; // int32_t
		constexpr auto PlaybackSettings = 0x488; // FMovieSceneSequencePlaybackSettings
		constexpr auto RootTemplateInstance = 0x4a0; // FMovieSceneRootEvaluationTemplateInstance
		constexpr auto NetSyncProps = 0x5f0; // FMovieSceneSequenceReplProperties
		constexpr auto PlaybackClient = 0x600; // TScriptInterface<IMovieScenePlaybackClient>
		constexpr auto TickManager = 0x610; // UMovieSceneSequenceTickManager*
	}

	namespace n_UPortalWarsKeybindWidget {
		constexpr auto PrimaryButton = 0x368; // UButton*
		constexpr auto SecondaryButton = 0x370; // UButton*
		constexpr auto PrimaryText = 0x378; // UTextBlock*
		constexpr auto SecondaryText = 0x380; // UTextBlock*
		constexpr auto KeybindOverlayClass = 0x3b8; // UPortalWarsKeybindOverlayWidget*
		constexpr auto KeyBindAction = 0x450; // FString
	}

	namespace n_UCanvasPanelSlot {
		constexpr auto LayoutData = 0x38; // FAnchorData
		constexpr auto bAutoSize = 0x60; // bool
		constexpr auto ZOrder = 0x64; // int32_t
	}

	namespace n_USynthComponentToneGenerator {
		constexpr auto Frequency = 0x6c0; // float
		constexpr auto Volume = 0x6c4; // float
	}

	namespace n_UMovieSceneComponentMaterialTrack {
		constexpr auto MaterialIndex = 0x90; // int32_t
	}

	namespace n_UARQRCodeComponent {
		constexpr auto ReplicatedPayload = 0x280; // FARQRCodeUpdatePayload
	}

	namespace n_APortalWarsTutorialGoal {
		constexpr auto StageID = 0x220; // int32_t
		constexpr auto GoalID = 0x224; // int32_t
		constexpr auto bIsLastGoal = 0x228; // bool
		constexpr auto bCompleteLinkedGoal = 0x229; // bool
		constexpr auto bIsGlobal = 0x22a; // bool
		constexpr auto GoalType = 0x22b; // EGoalType
		constexpr auto OverlapComp = 0x230; // USphereComponent*
		constexpr auto bHideEffects = 0x23a; // bool
		constexpr auto EffectRootComp = 0x240; // USceneComponent*
		constexpr auto ParticleComp = 0x248; // UParticleSystemComponent*
		constexpr auto RingMesh1 = 0x250; // UStaticMeshComponent*
		constexpr auto RingMesh2 = 0x258; // UStaticMeshComponent*
		constexpr auto RingMesh3 = 0x260; // UStaticMeshComponent*
		constexpr auto RingMesh4 = 0x268; // UStaticMeshComponent*
		constexpr auto SpotLightComp = 0x270; // USpotLightComponent*
		constexpr auto Blocks = 0x278; // TArray<AStaticMeshActor*>
		constexpr auto SuccessMaterialRings = 0x288; // UMaterialInstance*
		constexpr auto SuccessMaterialBlocks = 0x290; // UMaterialInstance*
		constexpr auto SuccessParticleSystem = 0x298; // UParticleSystem*
		constexpr auto SuccessLightColor = 0x2a0; // FColor
		constexpr auto DefaultMaterialBlocks = 0x2a8; // UMaterialInstance*
		constexpr auto DefaultMaterialBlocksGlow = 0x2b0; // UMaterialInstance*
		constexpr auto DefaultMaterialBlocksFloor = 0x2b8; // UMaterialInstance*
		constexpr auto AkComp = 0x2c0; // UPortalWarsAkComponent*
		constexpr auto SuccessEvent = 0x2c8; // UAkAudioEvent*
		constexpr auto StartAmbientLoopEvent = 0x2d0; // UAkAudioEvent*
		constexpr auto StopAmbientLoopEvent = 0x2d8; // UAkAudioEvent*
	}

	namespace n_UParticleModuleVelocityInheritParent {
		constexpr auto Scale = 0x38; // FRawDistributionVector
	}

	namespace n_UMaterialExpressionMaterialProxyReplace {
		constexpr auto Realtime = 0x40; // FExpressionInput
		constexpr auto MaterialProxy = 0x54; // FExpressionInput
	}

	namespace n_UPortalWarsCustomAntiCheat {
		constexpr auto PlayerViolations = 0x28; // TMap<APortalWarsPlayerState*, FCheatViolations>
	}

	namespace n_UBTTask_RunBehaviorDynamic {
		constexpr auto InjectionTag = 0x70; // FGameplayTag
		constexpr auto DefaultBehaviorAsset = 0x78; // UBehaviorTree*
		constexpr auto BehaviorAsset = 0x80; // UBehaviorTree*
	}

	namespace n_UMockDataMeshTrackerComponent {
		constexpr auto OnMeshTrackerUpdated = 0x1f8; // FMulticastInlineDelegate
		constexpr auto ScanWorld = 0x208; // bool
		constexpr auto RequestNormals = 0x209; // bool
		constexpr auto RequestVertexConfidence = 0x20a; // bool
		constexpr auto VertexColorMode = 0x20b; // EMeshTrackerVertexColorMode
		constexpr auto BlockVertexColors = 0x210; // TArray<FColor>
		constexpr auto VertexColorFromConfidenceZero = 0x220; // FLinearColor
		constexpr auto VertexColorFromConfidenceOne = 0x230; // FLinearColor
		constexpr auto UpdateInterval = 0x240; // float
		constexpr auto MRMesh = 0x248; // UMRMeshComponent*
	}

	namespace n_UDrawFrustumComponent {
		constexpr auto FrustumColor = 0x450; // FColor
		constexpr auto FrustumAngle = 0x454; // float
		constexpr auto FrustumAspectRatio = 0x458; // float
		constexpr auto FrustumStartDist = 0x45c; // float
		constexpr auto FrustumEndDist = 0x460; // float
		constexpr auto Texture = 0x468; // UTexture*
	}

	namespace n_UParticleModuleParameterDynamic_Seeded {
		constexpr auto RandomSeedInfo = 0x48; // FParticleRandomSeedInfo
	}

	namespace n_UTimelineComponent {
		constexpr auto TheTimeline = 0xb0; // FTimeline
		constexpr auto bIgnoreTimeDilation = 0x148; // char : 1
	}

	namespace n_AGameNetworkManager {
		constexpr auto BadPacketLossThreshold = 0x220; // float
		constexpr auto SeverePacketLossThreshold = 0x224; // float
		constexpr auto BadPingThreshold = 0x228; // int32_t
		constexpr auto SeverePingThreshold = 0x22c; // int32_t
		constexpr auto AdjustedNetSpeed = 0x230; // int32_t
		constexpr auto LastNetSpeedUpdateTime = 0x234; // float
		constexpr auto TotalNetBandwidth = 0x238; // int32_t
		constexpr auto MinDynamicBandwidth = 0x23c; // int32_t
		constexpr auto MaxDynamicBandwidth = 0x240; // int32_t
		constexpr auto bIsStandbyCheckingEnabled = 0x244; // char : 1
		constexpr auto bHasStandbyCheatTriggered = 0x244; // char : 1
		constexpr auto StandbyRxCheatTime = 0x248; // float
		constexpr auto StandbyTxCheatTime = 0x24c; // float
		constexpr auto PercentMissingForRxStandby = 0x250; // float
		constexpr auto PercentMissingForTxStandby = 0x254; // float
		constexpr auto PercentForBadPing = 0x258; // float
		constexpr auto JoinInProgressStandbyWaitTime = 0x25c; // float
		constexpr auto MoveRepSize = 0x260; // float
		constexpr auto MAXPOSITIONERRORSQUARED = 0x264; // float
		constexpr auto MAXNEARZEROVELOCITYSQUARED = 0x268; // float
		constexpr auto CLIENTADJUSTUPDATECOST = 0x26c; // float
		constexpr auto MAXCLIENTUPDATEINTERVAL = 0x270; // float
		constexpr auto MaxClientForcedUpdateDuration = 0x274; // float
		constexpr auto ServerForcedUpdateHitchThreshold = 0x278; // float
		constexpr auto ServerForcedUpdateHitchCooldown = 0x27c; // float
		constexpr auto MaxMoveDeltaTime = 0x280; // float
		constexpr auto MaxClientSmoothingDeltaTime = 0x284; // float
		constexpr auto ClientNetSendMoveDeltaTime = 0x288; // float
		constexpr auto ClientNetSendMoveDeltaTimeThrottled = 0x28c; // float
		constexpr auto ClientNetSendMoveDeltaTimeStationary = 0x290; // float
		constexpr auto ClientNetSendMoveThrottleAtNetSpeed = 0x294; // int32_t
		constexpr auto ClientNetSendMoveThrottleOverPlayerCount = 0x298; // int32_t
		constexpr auto ClientAuthorativePosition = 0x29c; // bool
		constexpr auto ClientErrorUpdateRateLimit = 0x2a0; // float
		constexpr auto ClientNetCamUpdateDeltaTime = 0x2a4; // float
		constexpr auto ClientNetCamUpdatePositionLimit = 0x2a8; // float
		constexpr auto bMovementTimeDiscrepancyDetection = 0x2ac; // bool
		constexpr auto bMovementTimeDiscrepancyResolution = 0x2ad; // bool
		constexpr auto MovementTimeDiscrepancyMaxTimeMargin = 0x2b0; // float
		constexpr auto MovementTimeDiscrepancyMinTimeMargin = 0x2b4; // float
		constexpr auto MovementTimeDiscrepancyResolutionRate = 0x2b8; // float
		constexpr auto MovementTimeDiscrepancyDriftAllowance = 0x2bc; // float
		constexpr auto bMovementTimeDiscrepancyForceCorrectionsDuringResolution = 0x2c0; // bool
		constexpr auto bUseDistanceBasedRelevancy = 0x2c1; // bool
	}

	namespace n_UPortalWarsButtonWidget {
		constexpr auto OnClicked = 0x2a8; // FMulticastInlineDelegate
		constexpr auto OnDoubleClicked = 0x2b8; // FMulticastInlineDelegate
		constexpr auto OnHovered = 0x2c8; // FMulticastInlineDelegate
		constexpr auto OnUnhovered = 0x2d8; // FMulticastInlineDelegate
		constexpr auto OnEnabledStateChanged = 0x2e8; // FMulticastInlineDelegate
		constexpr auto Button = 0x2f8; // UPortalWarsButton*
		constexpr auto ButtonWidget = 0x300; // UPortalWarsButtonWidget*
		constexpr auto bDebounce = 0x308; // bool
		constexpr auto DebounceTime = 0x30c; // float
		constexpr auto PressedEvent = 0x310; // UAkAudioEvent*
		constexpr auto HoveredEvent = 0x318; // UAkAudioEvent*
		constexpr auto HoverAnimation = 0x320; // UWidgetAnimation*
		constexpr auto bTrackButtonEvents = 0x328; // bool
		constexpr auto ButtonInternalName = 0x330; // FString
		constexpr auto Title = 0x340; // FText
		constexpr auto TitleText = 0x358; // UTextBlock*
		constexpr auto GamepadKey = 0x360; // FKey
		constexpr auto bBindToGamepadButton = 0x378; // bool
		constexpr auto GamepadKeyIcon = 0x398; // UTexture2D*
		constexpr auto ConsoleSwitcher = 0x3a0; // UWidgetSwitcher*
		constexpr auto NewIndicator = 0x3a8; // UWidget*
		constexpr auto newText = 0x3b0; // UTextBlock*
	}

	namespace n_UMovieSceneVectorTrack {
		constexpr auto NumChannelsUsed = 0xa8; // int32_t
	}

	namespace n_USimpleConstructionScript {
		constexpr auto RootNodes = 0x28; // TArray<USCS_Node*>
		constexpr auto AllNodes = 0x38; // TArray<USCS_Node*>
		constexpr auto DefaultSceneRootNode = 0x48; // USCS_Node*
	}

	namespace n_APortalWarsDOMHUD {
		constexpr auto HillIndicatorWidgetClass = 0x400; // UPortalWarsIndicatorWidget*
		constexpr auto DOMHUDOverlayWidget = 0x408; // UPortalWarsDOMHUDOverlayWidget*
		constexpr auto DOMHUDOverlayWidgetClass = 0x410; // UPortalWarsDOMHUDOverlayWidget*
	}

	namespace n_UPortalWarsCustomGameWidget {
		constexpr auto HostWidget = 0x338; // UPortalWarsHostMenuWidget*
		constexpr auto BrowserWidget = 0x340; // UPortalWarsServerBrowserWidget*
		constexpr auto bUseLAN = 0x348; // bool
	}

	namespace n_UAnimNotify_PlayNiagaraEffect {
		constexpr auto Template = 0x38; // UNiagaraSystem*
		constexpr auto LocationOffset = 0x40; // FVector
		constexpr auto RotationOffset = 0x4c; // FRotator
		constexpr auto Scale = 0x58; // FVector
		constexpr auto bAbsoluteScale = 0x64; // bool
		constexpr auto Attached = 0x80; // char : 1
		constexpr auto SocketName = 0x84; // FName
	}

	namespace n_UPortalWarsStatsOverviewWidget {
		constexpr auto CareerProgress = 0x338; // UPortalWarsCareerProgressWidget*
		constexpr auto TotalStats = 0x340; // UPortalWarsStatsEntryWidget*
		constexpr auto SeasonStats = 0x348; // UPortalWarsStatsEntryWidget*
		constexpr auto SeasonText = 0x350; // UTextBlock*
		constexpr auto ChangeSeasonButton = 0x358; // UPortalWarsButtonWidget*
		constexpr auto SeasonComboBox = 0x360; // UComboBoxString*
	}

	namespace n_UNavigationGraphNodeComponent {
		constexpr auto Node = 0x1f8; // FNavGraphNode
		constexpr auto NextNodeComponent = 0x210; // UNavigationGraphNodeComponent*
		constexpr auto PrevNodeComponent = 0x218; // UNavigationGraphNodeComponent*
	}

	namespace n_UHighlightsSetScreenshotAsync {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_UMorphTarget {
		constexpr auto BaseSkelMesh = 0x28; // USkeletalMesh*
	}

	namespace n_UPortalWarsIKAnimInstance {
		constexpr auto Character = 0x2b8; // APortalWarsCharacter*
		constexpr auto IKRootRotation = 0x2c0; // FRotator
		constexpr auto IKRootTranslation = 0x2cc; // FVector
		constexpr auto RootTranslation = 0x2d8; // FVector
		constexpr auto bIsMoving = 0x2e4; // bool
		constexpr auto MoveSpeed = 0x2e8; // float
		constexpr auto bIsFalling = 0x2ec; // bool
	}

	namespace n_UGizmoScaledTransformSource {
		constexpr auto ChildTransformSource = 0x48; // TScriptInterface<IGizmoTransformSource>
	}

	namespace n_UGameEngine {
		constexpr auto MaxDeltaTime = 0xde0; // float
		constexpr auto ServerFlushLogInterval = 0xde4; // float
		constexpr auto GameInstance = 0xde8; // UGameInstance*
	}

	namespace n_UMovieSceneCameraShakeSourceTriggerSection {
		constexpr auto Channel = 0xe8; // FMovieSceneCameraShakeSourceTriggerChannel
	}

	namespace n_UTimeSynchronizationSource {
		constexpr auto bUseForSynchronization = 0x28; // bool
		constexpr auto FrameOffset = 0x2c; // int32_t
	}

	namespace n_UVideoCaptureProtocol {
		constexpr auto bUseCompression = 0x68; // bool
		constexpr auto CompressionQuality = 0x6c; // float
	}

	namespace n_UEnvQueryTest_Project {
		constexpr auto ProjectionData = 0x1f8; // FEnvTraceData
	}

	namespace n_AExplosiveProjectile {
		constexpr auto ExplosionRadius = 0x2d8; // float
		constexpr auto ExplosionInnerRadius = 0x2dc; // float
	}

	namespace n_UPendingNetGame {
		constexpr auto NetDriver = 0x30; // UNetDriver*
		constexpr auto DemoNetDriver = 0x38; // UDemoNetDriver*
	}

	namespace n_UPortalWarsRespawnWidget {
		constexpr auto RespawnText = 0x260; // UTextBlock*
	}

	namespace n_UListViewBase {
		constexpr auto EntryWidgetClass = 0x108; // UUserWidget*
		constexpr auto WheelScrollMultiplier = 0x110; // float
		constexpr auto bEnableScrollAnimation = 0x114; // bool
		constexpr auto bEnableFixedLineOffset = 0x115; // bool
		constexpr auto FixedLineScrollOffset = 0x118; // float
		constexpr auto BP_OnEntryGenerated = 0x120; // FMulticastInlineDelegate
		constexpr auto BP_OnEntryReleased = 0x130; // FMulticastInlineDelegate
		constexpr auto EntryWidgetPool = 0x140; // FUserWidgetPool
	}

	namespace n_USourceEffectStereoDelayPreset {
		constexpr auto Settings = 0xb4; // FSourceEffectStereoDelaySettings
	}

	namespace n_UMovieSceneNiagaraVectorParameterTrack {
		constexpr auto ChannelsUsed = 0xb0; // int32_t
	}

	namespace n_UPortalWarsDailyCheckInWidget {
		constexpr auto RewardPanel = 0x338; // UPanelWidget*
		constexpr auto Day7Reward = 0x340; // UPortalWarsCheckInRewardWidget*
		constexpr auto ActionSwitcher = 0x348; // UWidgetSwitcher*
		constexpr auto ClaimButton = 0x350; // UPortalWarsButtonWidget*
		constexpr auto RepairButton = 0x358; // UPortalWarsRedeemableButtonWidget*
		constexpr auto CheckInDialogWidgetClass = 0x360; // UPortalWarsCheckInDialogWidget*
		constexpr auto CurrentDayText = 0x368; // UTextBlock*
	}

	namespace n_UMaterialExpressionSquareRoot {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UPortalWarsNameIndicatorWidget {
		constexpr auto FriendlyPlayerNameText = 0x2c0; // UTextBlock*
		constexpr auto EnemyPlayerNameText = 0x2c8; // UTextBlock*
		constexpr auto BlueEnemyIndicator = 0x2d0; // UWidget*
		constexpr auto RedEnemyIndicator = 0x2d8; // UWidget*
		constexpr auto FriendlyDeathMarker = 0x2e0; // UWidget*
		constexpr auto EnemyDeathMarker = 0x2e8; // UWidget*
		constexpr auto NameSwitcher = 0x2f0; // UWidgetSwitcher*
	}

	namespace n_UParticleModuleMeshRotationRateOverLife {
		constexpr auto RotRate = 0x30; // FRawDistributionVector
		constexpr auto bScaleRotRate = 0x78; // char : 1
	}

	namespace n_ARadialForceActor {
		constexpr auto ForceComponent = 0x220; // URadialForceComponent*
	}

	namespace n_UAISense_Prediction {
		constexpr auto RegisteredEvents = 0x80; // TArray<FAIPredictionEvent>
	}

	namespace n_UBaseMediaSource {
		constexpr auto PlayerName = 0x80; // FName
	}

	namespace n_USpectatorPawnMovement {
		constexpr auto bIgnoreTimeDilation = 0x150; // char : 1
	}

	namespace n_UMovieSceneAkAudioRTPCSection {
		constexpr auto Name = 0xe8; // FString
		constexpr auto FloatCurve = 0xf8; // FRichCurve
		constexpr auto FloatChannelSerializationHelper = 0x178; // FMovieSceneFloatChannelSerializationHelper
	}

	namespace n_UClickDragInputBehavior {
		constexpr auto bUpdateModifiersDuringDrag = 0x120; // bool
	}

	namespace n_UGameplayTask {
		constexpr auto InstanceName = 0x30; // FName
		constexpr auto ResourceOverlapPolicy = 0x3a; // ETaskResourceOverlapPolicy
		constexpr auto ChildTask = 0x60; // UGameplayTask*
	}

	namespace n_UAsyncActionLoadPrimaryAssetClass {
		constexpr auto Completed = 0x78; // FMulticastInlineDelegate
	}

	namespace n_UPortalWarsStreakIncreaseWidget {
		constexpr auto RewardEntry = 0x390; // UPortalWarsPlayStreakRewardWidget*
		constexpr auto RepairRoot = 0x398; // UWidget*
		constexpr auto RepairStreakText = 0x3a0; // UTextBlock*
		constexpr auto RepairButton = 0x3a8; // UPortalWarsRedeemableButtonWidget*
		constexpr auto PlayStreakDialogWidgetClass = 0x3b0; // UPortalWarsPlayStreakDialogWidget*
		constexpr auto StreakIncreasedEvent = 0x3c0; // UAkAudioEvent*
	}

	namespace n_USlateSettings {
		constexpr auto bExplicitCanvasChildZOrder = 0x28; // bool
	}

	namespace n_UPortalWarsGamepadBindingCategoryWidget {
		constexpr auto CategoryText = 0x260; // UTextBlock*
	}

	namespace n_UAREnvironmentCaptureProbeTexture {
		constexpr auto TextureType = 0x1d0; // EARTextureType
		constexpr auto Timestamp = 0x1d4; // float
		constexpr auto ExternalTextureGuid = 0x1d8; // FGuid
		constexpr auto Size = 0x1e8; // FVector2D
	}

	namespace n_UAnimBlueprint {
		constexpr auto TargetSkeleton = 0xa8; // USkeleton*
		constexpr auto Groups = 0xb0; // TArray<FAnimGroupInfo>
		constexpr auto bUseMultiThreadedAnimationUpdate = 0xc0; // bool
		constexpr auto bWarnAboutBlueprintUsage = 0xc1; // bool
	}

	namespace n_UParticleModuleOrbit {
		constexpr auto ChainMode = 0x38; // EOrbitChainMode
		constexpr auto OffsetAmount = 0x40; // FRawDistributionVector
		constexpr auto OffsetOptions = 0x88; // FOrbitOptions
		constexpr auto RotationAmount = 0x90; // FRawDistributionVector
		constexpr auto RotationOptions = 0xd8; // FOrbitOptions
		constexpr auto RotationRateAmount = 0xe0; // FRawDistributionVector
		constexpr auto RotationRateOptions = 0x128; // FOrbitOptions
	}

	namespace n_UNiagaraDataInterfaceParticleRead {
		constexpr auto EmitterName = 0xd8; // FString
	}

	namespace n_APainCausingVolume {
		constexpr auto bPainCausing = 0x268; // char : 1
		constexpr auto DamagePerSec = 0x26c; // float
		constexpr auto DamageType = 0x270; // UDamageType*
		constexpr auto PainInterval = 0x278; // float
		constexpr auto bEntryPain = 0x27c; // char : 1
		constexpr auto BACKUP_bPainCausing = 0x27c; // char : 1
		constexpr auto DamageInstigator = 0x280; // AController*
	}

	namespace n_APortalWarsLobbyPlayerStart {
		constexpr auto SpawnOrder = 0x250; // int32_t
		constexpr auto TeamIndex = 0x254; // char
	}

	namespace n_UInputKeySelector {
		constexpr auto WidgetStyle = 0x108; // FButtonStyle
		constexpr auto TextStyle = 0x380; // FTextBlockStyle
		constexpr auto SelectedKey = 0x5f0; // FInputChord
		constexpr auto Font = 0x610; // FSlateFontInfo
		constexpr auto Margin = 0x668; // FMargin
		constexpr auto ColorAndOpacity = 0x678; // FLinearColor
		constexpr auto KeySelectionText = 0x688; // FText
		constexpr auto NoKeySpecifiedText = 0x6a0; // FText
		constexpr auto bAllowModifierKeys = 0x6b8; // bool
		constexpr auto bAllowGamepadKeys = 0x6b9; // bool
		constexpr auto EscapeKeys = 0x6c0; // TArray<FKey>
		constexpr auto OnKeySelected = 0x6d0; // FMulticastInlineDelegate
		constexpr auto OnIsSelectingKeyChanged = 0x6e0; // FMulticastInlineDelegate
	}

	namespace n_URetainerBox {
		constexpr auto bRetainRender = 0x120; // bool
		constexpr auto RenderOnInvalidation = 0x121; // bool
		constexpr auto RenderOnPhase = 0x122; // bool
		constexpr auto Phase = 0x124; // int32_t
		constexpr auto PhaseCount = 0x128; // int32_t
		constexpr auto EffectMaterial = 0x130; // UMaterialInterface*
		constexpr auto TextureParameter = 0x138; // FName
	}

	namespace n_UParticleModuleLocationPrimitiveBase {
		constexpr auto Positive_X = 0x30; // char : 1
		constexpr auto Positive_Y = 0x30; // char : 1
		constexpr auto Positive_Z = 0x30; // char : 1
		constexpr auto Negative_X = 0x30; // char : 1
		constexpr auto Negative_Y = 0x30; // char : 1
		constexpr auto Negative_Z = 0x30; // char : 1
		constexpr auto SurfaceOnly = 0x30; // char : 1
		constexpr auto Velocity = 0x30; // char : 1
		constexpr auto VelocityScale = 0x38; // FRawDistributionFloat
		constexpr auto StartLocation = 0x68; // FRawDistributionVector
	}

	namespace n_UEnvQueryGenerator_CurrentLocation {
		constexpr auto QueryContext = 0x50; // UEnvQueryContext*
	}

	namespace n_UBTDecorator_BlueprintBase {
		constexpr auto AIOwner = 0x68; // AAIController*
		constexpr auto ActorOwner = 0x70; // AActor*
		constexpr auto ObservedKeyNames = 0x78; // TArray<FName>
		constexpr auto bShowPropertyDetails = 0x98; // char : 1
		constexpr auto bCheckConditionOnlyBlackBoardChanges = 0x98; // char : 1
		constexpr auto bIsObservingBB = 0x98; // char : 1
	}

	namespace n_UActorSequenceComponent {
		constexpr auto PlaybackSettings = 0xb0; // FMovieSceneSequencePlaybackSettings
		constexpr auto Sequence = 0xc8; // UActorSequence*
		constexpr auto SequencePlayer = 0xd0; // UActorSequencePlayer*
	}

	namespace n_UPortalWarsGamepadBindingOverlayWidget {
		constexpr auto OnActionSelected = 0x390; // FMulticastInlineDelegate
		constexpr auto CurrentAction = 0x3a0; // UTextBlock*
		constexpr auto ActionPanel = 0x3a8; // UPanelWidget*
		constexpr auto CurrentBinding = 0x3b0; // UImage*
		constexpr auto CategoryClass = 0x3b8; // UPortalWarsGamepadBindingCategoryWidget*
		constexpr auto ActionClass = 0x3c0; // UPortalWarsGamepadBindingActionWidget*
		constexpr auto BindingCategories = 0x3c8; // TArray<FGamepadBindingCategory>
	}

	namespace n_APortalWarsLobbyGameMode {
		constexpr auto PlayerStarts = 0x340; // TArray<APortalWarsLobbyPlayerStart*>
		constexpr auto LineUpCharacters = 0x350; // TArray<APortalWarsLineUpCharacter*>
		constexpr auto LineUpCharacterClass = 0x360; // APortalWarsLineUpCharacter*
		constexpr auto LobbyCam = 0x368; // ACameraActor*
	}

	namespace n_UDatasmithSpotLightComponentTemplate {
		constexpr auto InnerConeAngle = 0x30; // float
		constexpr auto OuterConeAngle = 0x34; // float
	}

	namespace n_UAnimationDataSourceRegistry {
		constexpr auto DataSources = 0x28; // TMap<FName, TWeakObjectPtr<UObject>>
	}

	namespace n_UUMGSequencePlayer {
		constexpr auto Animation = 0x418; // UWidgetAnimation*
		constexpr auto RootTemplateInstance = 0x428; // FMovieSceneRootEvaluationTemplateInstance
	}

	namespace n_UMaterialExpressionSetMaterialAttributes {
		constexpr auto Inputs = 0x40; // TArray<FExpressionInput>
		constexpr auto AttributeSetTypes = 0x50; // TArray<FGuid>
	}

	namespace n_UPortalWarsRoundScoreboardEntryWidget {
		constexpr auto RoundNumText = 0x260; // UTextBlock*
		constexpr auto TopResultImage = 0x268; // UImage*
		constexpr auto BottomResultImage = 0x270; // UImage*
		constexpr auto SeparatorImage = 0x278; // UImage*
		constexpr auto CurrentRoundNumText = 0x280; // UTextBlock*
		constexpr auto RoundWidgetSwitcher = 0x288; // UWidgetSwitcher*
		constexpr auto CurrentRoundBackgroundImage = 0x290; // UImage*
		constexpr auto RoundWinBlue = 0x298; // UTexture2D*
		constexpr auto RoundWinRed = 0x2a0; // UTexture2D*
		constexpr auto RoundLoss = 0x2a8; // UTexture2D*
		constexpr auto RoundUnplayed = 0x2b0; // UTexture2D*
		constexpr auto RoundCurrent = 0x2b8; // UTexture2D*
		constexpr auto PaddingBetweenEntries = 0x2c0; // float
	}

	namespace n_UParticleModuleMeshRotationRate_Seeded {
		constexpr auto RandomSeedInfo = 0x78; // FParticleRandomSeedInfo
	}

	namespace n_ULevelSequenceBurnIn {
		constexpr auto FrameInformation = 0x260; // FLevelSequencePlayerSnapshot
		constexpr auto LevelSequenceActor = 0x318; // ALevelSequenceActor*
	}

	namespace n_UNavigationInvokerComponent {
		constexpr auto TileGenerationRadius = 0xb0; // float
		constexpr auto TileRemovalRadius = 0xb4; // float
	}

	namespace n_UMovieSceneLevelVisibilityTrack {
		constexpr auto Sections = 0x78; // TArray<UMovieSceneSection*>
	}

	namespace n_AProjectileGun {
		constexpr auto ProjectileConfig = 0x698; // FProjectileWeaponData
		constexpr auto LocalHitDetectionDuration = 0x6b8; // float
		constexpr auto bSpawnsLocalProjectiles = 0x6bc; // bool
		constexpr auto LocalProjectiles = 0x6c8; // TArray<AProjectile*>
	}

	namespace n_UEnvQueryGenerator_BlueprintBase {
		constexpr auto GeneratorsActionDescription = 0x50; // FText
		constexpr auto Context = 0x68; // UEnvQueryContext*
		constexpr auto GeneratedItemType = 0x70; // UEnvQueryItemType*
	}

	namespace n_UGizmoLocalFloatParameterSource {
		constexpr auto Value = 0x48; // float
		constexpr auto LastChange = 0x4c; // FGizmoFloatParameterChange
	}

	namespace n_UPortalWarsScrollBox {
		constexpr auto bAllowGamepadRightStickScrolling = 0x888; // bool
		constexpr auto GamepadScrollSpeed = 0x88c; // float
	}

	namespace n_UParticleModuleSpawnBase {
		constexpr auto bProcessSpawnRate = 0x30; // char : 1
		constexpr auto bProcessBurstList = 0x30; // char : 1
	}

	namespace n_URadialIntMask {
		constexpr auto Radius = 0xb0; // float
		constexpr auto Position = 0xb4; // FVector
		constexpr auto InteriorValue = 0xc0; // int32_t
		constexpr auto ExteriorValue = 0xc4; // int32_t
		constexpr auto SetMaskCondition = 0xc8; // ESetMaskConditionType
	}

	namespace n_UPortalWarsInviteManager {
		constexpr auto AcceptDialogWidgetClass = 0xc0; // UPortalWarsDialogWidget*
	}

	namespace n_APortalWarsGG {
		constexpr auto WeaponClasses = 0x6a8; // TArray<AGun*>
		constexpr auto bHumiliationEnabled = 0x6b8; // bool
	}

	namespace n_UNiagaraDataInterfaceCurveBase {
		constexpr auto ShaderLUT = 0x38; // TArray<float>
		constexpr auto LUTMinTime = 0x48; // float
		constexpr auto LUTMaxTime = 0x4c; // float
		constexpr auto LUTInvTimeRange = 0x50; // float
		constexpr auto LUTNumSamplesMinusOne = 0x54; // float
		constexpr auto bUseLUT = 0x58; // char : 1
		constexpr auto bExposeCurve = 0x58; // char : 1
		constexpr auto ExposedName = 0x5c; // FName
		constexpr auto ExposedTexture = 0x68; // UTexture2D*
	}

	namespace n_UMaterialExpressionOneMinus {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UAnimCompress_RemoveEverySecondKey {
		constexpr auto MinKeys = 0x40; // int32_t
		constexpr auto bStartAtSecondKey = 0x44; // char : 1
	}

	namespace n_UMovieSceneFloatSection {
		constexpr auto FloatCurve = 0xf0; // FMovieSceneFloatChannel
	}

	namespace n_UMaterialExpressionTextureSample {
		constexpr auto Coordinates = 0x48; // FExpressionInput
	}

	namespace n_UPortalWarsGameUserSettings {
		constexpr auto bHasRunAutoCalibration = 0x120; // bool
		constexpr auto PortalQuality = 0x124; // int32_t
		constexpr auto PortalFrameRate = 0x128; // int32_t
		constexpr auto NVIDIAReflex = 0x12c; // int32_t
		constexpr auto bShowLatencyMarkers = 0x130; // bool
		constexpr auto bShowLatencyFlashIndicator = 0x131; // bool
	}

	namespace n_UMaterialExpressionTextureProperty {
		constexpr auto TextureObject = 0x40; // FExpressionInput
		constexpr auto Property = 0x54; // EMaterialExposedTextureProperty
	}

	namespace n_UPortalWarsPostGameCardWidget {
		constexpr auto ValueText = 0x260; // UTextBlock*
		constexpr auto TypeText = 0x268; // UTextBlock*
		constexpr auto DefaultTypeColor = 0x270; // FLinearColor
		constexpr auto GoldTypeColor = 0x280; // FLinearColor
		constexpr auto LifetimeAvgText = 0x290; // UTextBlock*
		constexpr auto DefaultLifetimeAvgColor = 0x298; // FLinearColor
		constexpr auto IncreaseLifetimeAvgColor = 0x2a8; // FLinearColor
		constexpr auto GoldLifetimeAvgColor = 0x2b8; // FLinearColor
		constexpr auto BackgroundImage = 0x2c8; // UImage*
		constexpr auto DefaultBackgroundImage = 0x2d0; // UTexture2D*
		constexpr auto IncreaseBackgroundImage = 0x2d8; // UTexture2D*
		constexpr auto GoldBackgroundImage = 0x2e0; // UTexture2D*
		constexpr auto MedalImage = 0x2e8; // UImage*
		constexpr auto MedalImages = 0x2f0; // TMap<int32_t, UTexture2D*>
		constexpr auto IncreaseIcon = 0x340; // UImage*
		constexpr auto DefaultIncreaseImage = 0x348; // UTexture2D*
		constexpr auto GoldIncreaseImage = 0x350; // UTexture2D*
		constexpr auto OnFadeInAnimationCompleted = 0x358; // FMulticastInlineDelegate
		constexpr auto OnSecondaryAnimationCompleted = 0x368; // FMulticastInlineDelegate
		constexpr auto FadeInAnimation = 0x378; // UWidgetAnimation*
		constexpr auto MedalAnimation = 0x380; // UWidgetAnimation*
		constexpr auto IncreaseAnimation = 0x388; // UWidgetAnimation*
		constexpr auto FadeInEvent = 0x390; // UAkAudioEvent*
		constexpr auto IncreaseEvent = 0x398; // UAkAudioEvent*
		constexpr auto MedalEvents = 0x3a0; // TMap<int32_t, UAkAudioEvent*>
		constexpr auto RootWidget = 0x3f0; // UWidget*
	}

	namespace n_UClothingAssetBase {
		constexpr auto ImportedFilePath = 0x28; // FString
		constexpr auto AssetGuid = 0x38; // FGuid
	}

	namespace n_UOnlineEngineInterfaceImpl {
		constexpr auto MappedUniqueNetIdTypes = 0x28; // TMap<FName, FName>
		constexpr auto CompatibleUniqueNetIdTypes = 0x78; // TArray<FName>
		constexpr auto VoiceSubsystemNameOverride = 0x88; // FName
	}

	namespace n_UARPlaneGeometry {
		constexpr auto Orientation = 0xf8; // EARPlaneOrientation
		constexpr auto Center = 0xfc; // FVector
		constexpr auto Extent = 0x108; // FVector
		constexpr auto BoundaryPolygon = 0x118; // TArray<FVector>
		constexpr auto SubsumedBy = 0x128; // UARPlaneGeometry*
	}

	namespace n_USphereComponent {
		constexpr auto SphereRadius = 0x468; // float
	}

	namespace n_UBTDecorator_TagCooldown {
		constexpr auto CooldownTag = 0x68; // FGameplayTag
		constexpr auto CooldownDuration = 0x70; // float
		constexpr auto bAddToExistingDuration = 0x74; // bool
		constexpr auto bActivatesCooldown = 0x75; // bool
	}

	namespace n_AAkSpatialAudioVolume {
		constexpr auto SurfaceReflectorSet = 0x258; // UAkSurfaceReflectorSetComponent*
		constexpr auto LateReverb = 0x260; // UAkLateReverbComponent*
		constexpr auto Room = 0x268; // UAkRoomComponent*
	}

	namespace n_UAnimCompress_RemoveLinearKeys {
		constexpr auto MaxPosDiff = 0x40; // float
		constexpr auto MaxAngleDiff = 0x44; // float
		constexpr auto MaxScaleDiff = 0x48; // float
		constexpr auto MaxEffectorDiff = 0x4c; // float
		constexpr auto MinEffectorDiff = 0x50; // float
		constexpr auto EffectorDiffSocket = 0x54; // float
		constexpr auto ParentKeyScale = 0x58; // float
		constexpr auto bRetarget = 0x5c; // char : 1
		constexpr auto bActuallyFilterLinearKeys = 0x5c; // char : 1
	}

	namespace n_UPortalWarsBPPurchaseDialogWidget {
		constexpr auto RewardsPanel = 0x3c8; // UPanelWidget*
		constexpr auto RewardEntryWidgetClass = 0x3d0; // UPortalWarsBattlePassEntryWidget*
		constexpr auto BuyPremiumButton = 0x3d8; // UPortalWarsButtonWidget*
		constexpr auto BuyBundleButton = 0x3e0; // UPortalWarsButtonWidget*
		constexpr auto BuyLevelsButton = 0x3e8; // UPortalWarsButtonWidget*
		constexpr auto ActionSwitcher = 0x3f0; // UWidgetSwitcher*
		constexpr auto ViewBattlePassButton = 0x3f8; // UPortalWarsButtonWidget*
	}

	namespace n_UAnimSingleNodeInstance {
		constexpr auto CurrentAsset = 0x2b8; // UAnimationAsset*
		constexpr auto PostEvaluateAnimEvent = 0x2c0; // FDelegate
	}

	namespace n_UInterpTrackFloatParticleParam {
		constexpr auto ParamName = 0x90; // FName
	}

	namespace n_UPortalWarsScreenFadeWidget {
		constexpr auto FadeInAnimation = 0x260; // UWidgetAnimation*
		constexpr auto FadeOutAnimation = 0x268; // UWidgetAnimation*
		constexpr auto FadeImage = 0x270; // UImage*
	}

	namespace n_UPlaneReflectionCaptureComponent {
		constexpr auto InfluenceRadiusScale = 0x270; // float
		constexpr auto PreviewInfluenceRadius = 0x278; // UDrawSphereComponent*
		constexpr auto PreviewCaptureBox = 0x280; // UBoxComponent*
	}

	namespace n_URendererOverrideSettings {
		constexpr auto bSupportAllShaderPermutations = 0x38; // char : 1
		constexpr auto bForceRecomputeTangents = 0x38; // char : 1
	}

	namespace n_UApplicationLifecycleComponent {
		constexpr auto ApplicationWillDeactivateDelegate = 0xb0; // FMulticastInlineDelegate
		constexpr auto ApplicationHasReactivatedDelegate = 0xc0; // FMulticastInlineDelegate
		constexpr auto ApplicationWillEnterBackgroundDelegate = 0xd0; // FMulticastInlineDelegate
		constexpr auto ApplicationHasEnteredForegroundDelegate = 0xe0; // FMulticastInlineDelegate
		constexpr auto ApplicationWillTerminateDelegate = 0xf0; // FMulticastInlineDelegate
		constexpr auto ApplicationShouldUnloadResourcesDelegate = 0x100; // FMulticastInlineDelegate
		constexpr auto ApplicationReceivedStartupArgumentsDelegate = 0x110; // FMulticastInlineDelegate
		constexpr auto OnTemperatureChangeDelegate = 0x120; // FMulticastInlineDelegate
		constexpr auto OnLowPowerModeDelegate = 0x130; // FMulticastInlineDelegate
	}

	namespace n_UInterpTrackVectorMaterialParam {
		constexpr auto TargetMaterials = 0x90; // TArray<UMaterialInterface*>
		constexpr auto ParamName = 0xa0; // FName
	}

	namespace n_UBTTask_SpawnPortal {
		constexpr auto NearPortalWallRadius = 0x70; // float
		constexpr auto XYRange = 0x74; // float
		constexpr auto MinZRange = 0x78; // float
		constexpr auto Timeout = 0x7c; // float
		constexpr auto Delay = 0x80; // float
		constexpr auto bIsLeftPortal = 0x84; // bool
	}

	namespace n_UMaterialExpressionAdd {
		constexpr auto A = 0x40; // FExpressionInput
		constexpr auto B = 0x54; // FExpressionInput
		constexpr auto ConstA = 0x68; // float
		constexpr auto ConstB = 0x6c; // float
	}

	namespace n_UMaterialExpressionVirtualTextureFeatureSwitch {
		constexpr auto No = 0x40; // FExpressionInput
		constexpr auto Yes = 0x54; // FExpressionInput
	}

	namespace n_UPortalWarsMedalEntryWidget {
		constexpr auto ContentRoot = 0x280; // UWidget*
		constexpr auto LabelText = 0x288; // UTextBlock*
		constexpr auto MedalImage = 0x290; // UImage*
		constexpr auto FadeInAnimation = 0x298; // UWidgetAnimation*
		constexpr auto FadeInToMiddleAnimation = 0x2a0; // UWidgetAnimation*
		constexpr auto FadeOutAnimation = 0x2a8; // UWidgetAnimation*
		constexpr auto SlideToLeftAnimation = 0x2b0; // UWidgetAnimation*
		constexpr auto SlideToMiddleAnimation = 0x2b8; // UWidgetAnimation*
		constexpr auto LifeTime = 0x2c8; // float
		constexpr auto LeftTransfrom = 0x2d8; // FWidgetTransform
		constexpr auto MiddleTransform = 0x2f4; // FWidgetTransform
		constexpr auto RightTransform = 0x310; // FWidgetTransform
	}

	namespace n_UMaterialExpressionLandscapeLayerWeight {
		constexpr auto Base = 0x40; // FExpressionInput
		constexpr auto Layer = 0x54; // FExpressionInput
		constexpr auto ParameterName = 0x68; // FName
		constexpr auto PreviewWeight = 0x70; // float
		constexpr auto ConstBase = 0x74; // FVector
		constexpr auto ExpressionGUID = 0x80; // FGuid
	}

	namespace n_UAkLateReverbComponent {
		constexpr auto bEnable = 0x1f8; // char : 1
		constexpr auto AuxBus = 0x200; // UAkAuxBus*
		constexpr auto AuxBusName = 0x208; // FString
		constexpr auto SendLevel = 0x218; // float
		constexpr auto FadeRate = 0x21c; // float
		constexpr auto Priority = 0x220; // float
		constexpr auto NextLowerPriorityComponent = 0x228; // UAkLateReverbComponent*
	}

	namespace n_UMediaTimeStampInfo {
		constexpr auto Time = 0x28; // FTimespan
		constexpr auto SequenceIndex = 0x30; // int64_t
	}

	namespace n_UNiagaraSpriteRendererProperties {
		constexpr auto Material = 0x88; // UMaterialInterface*
		constexpr auto SourceMode = 0x90; // ENiagaraRendererSourceDataMode
		constexpr auto MaterialUserParamBinding = 0x98; // FNiagaraUserParameterBinding
		constexpr auto Alignment = 0xb8; // ENiagaraSpriteAlignment
		constexpr auto FacingMode = 0xb9; // ENiagaraSpriteFacingMode
		constexpr auto PivotInUVSpace = 0xbc; // FVector2D
		constexpr auto SortMode = 0xc4; // ENiagaraSortMode
		constexpr auto SubImageSize = 0xc8; // FVector2D
		constexpr auto bSubImageBlend = 0xd0; // char : 1
		constexpr auto bRemoveHMDRollInVR = 0xd0; // char : 1
		constexpr auto bSortOnlyWhenTranslucent = 0xd0; // char : 1
		constexpr auto bGpuLowLatencyTranslucency = 0xd0; // char : 1
		constexpr auto MinFacingCameraBlendDistance = 0xd4; // float
		constexpr auto MaxFacingCameraBlendDistance = 0xd8; // float
		constexpr auto bEnableCameraDistanceCulling = 0xdc; // char : 1
		constexpr auto MinCameraDistance = 0xe0; // float
		constexpr auto MaxCameraDistance = 0xe4; // float
		constexpr auto RendererVisibility = 0xe8; // uint32_t
		constexpr auto PositionBinding = 0xf0; // FNiagaraVariableAttributeBinding
		constexpr auto ColorBinding = 0x148; // FNiagaraVariableAttributeBinding
		constexpr auto VelocityBinding = 0x1a0; // FNiagaraVariableAttributeBinding
		constexpr auto SpriteRotationBinding = 0x1f8; // FNiagaraVariableAttributeBinding
		constexpr auto SpriteSizeBinding = 0x250; // FNiagaraVariableAttributeBinding
		constexpr auto SpriteFacingBinding = 0x2a8; // FNiagaraVariableAttributeBinding
		constexpr auto SpriteAlignmentBinding = 0x300; // FNiagaraVariableAttributeBinding
		constexpr auto SubImageIndexBinding = 0x358; // FNiagaraVariableAttributeBinding
		constexpr auto DynamicMaterialBinding = 0x3b0; // FNiagaraVariableAttributeBinding
		constexpr auto DynamicMaterial1Binding = 0x408; // FNiagaraVariableAttributeBinding
		constexpr auto DynamicMaterial2Binding = 0x460; // FNiagaraVariableAttributeBinding
		constexpr auto DynamicMaterial3Binding = 0x4b8; // FNiagaraVariableAttributeBinding
		constexpr auto CameraOffsetBinding = 0x510; // FNiagaraVariableAttributeBinding
		constexpr auto UVScaleBinding = 0x568; // FNiagaraVariableAttributeBinding
		constexpr auto PivotOffsetBinding = 0x5c0; // FNiagaraVariableAttributeBinding
		constexpr auto MaterialRandomBinding = 0x618; // FNiagaraVariableAttributeBinding
		constexpr auto CustomSortingBinding = 0x670; // FNiagaraVariableAttributeBinding
		constexpr auto NormalizedAgeBinding = 0x6c8; // FNiagaraVariableAttributeBinding
		constexpr auto RendererVisibilityTagBinding = 0x720; // FNiagaraVariableAttributeBinding
		constexpr auto MaterialParameterBindings = 0x778; // TArray<FNiagaraMaterialAttributeBinding>
		constexpr auto PrevPositionBinding = 0x788; // FNiagaraVariableAttributeBinding
		constexpr auto PrevVelocityBinding = 0x7e0; // FNiagaraVariableAttributeBinding
		constexpr auto PrevSpriteRotationBinding = 0x838; // FNiagaraVariableAttributeBinding
		constexpr auto PrevSpriteSizeBinding = 0x890; // FNiagaraVariableAttributeBinding
		constexpr auto PrevSpriteFacingBinding = 0x8e8; // FNiagaraVariableAttributeBinding
		constexpr auto PrevSpriteAlignmentBinding = 0x940; // FNiagaraVariableAttributeBinding
		constexpr auto PrevCameraOffsetBinding = 0x998; // FNiagaraVariableAttributeBinding
		constexpr auto PrevPivotOffsetBinding = 0x9f0; // FNiagaraVariableAttributeBinding
	}

	namespace n_UMaterialExpressionReroute {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UMaterialExpressionArctangent {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UDataDrivenCVarEngineSubsystem {
		constexpr auto OnDataDrivenCVarDelegate = 0x30; // FMulticastInlineDelegate
	}

	namespace n_UMaterialExpressionSaturate {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UNiagaraDataInterfaceArrayFloat2 {
		constexpr auto FloatData = 0x50; // TArray<FVector2D>
	}

	namespace n_UDistributionFloat {
		constexpr auto bCanBeBaked = 0x30; // char : 1
		constexpr auto bBakedDataSuccesfully = 0x30; // char : 1
	}

	namespace n_UBTService_ShootEnemy {
		constexpr auto defaultRange = 0x70; // float
		constexpr auto MinDifficultyToMelee = 0x74; // float
	}

	namespace n_UInAppPurchaseQueryCallbackProxy2 {
		constexpr auto OnSuccess = 0x28; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x38; // FMulticastInlineDelegate
	}

	namespace n_UThrobber {
		constexpr auto NumberOfPieces = 0x108; // int32_t
		constexpr auto bAnimateHorizontally = 0x10c; // bool
		constexpr auto bAnimateVertically = 0x10d; // bool
		constexpr auto bAnimateOpacity = 0x10e; // bool
		constexpr auto PieceImage = 0x110; // USlateBrushAsset*
		constexpr auto Image = 0x118; // FSlateBrush
	}

	namespace n_USourceEffectEnvelopeFollowerPreset {
		constexpr auto Settings = 0x9c; // FSourceEffectEnvelopeFollowerSettings
	}

	namespace n_UPortalWarsRoundPlayerStatusWidget {
		constexpr auto bShowRespawnTimer = 0x260; // bool
		constexpr auto RespawnTimeText = 0x268; // UTextBlock*
		constexpr auto BackgroundImage = 0x270; // UImage*
		constexpr auto RedPlayerImage = 0x288; // UTexture2D*
		constexpr auto BluePlayerImage = 0x290; // UTexture2D*
		constexpr auto DeadPlayerImage = 0x298; // UTexture2D*
		constexpr auto PaddingBetweenEntries = 0x2a0; // float
	}

	namespace n_UPortalWarsLootboxWidget {
		constexpr auto RaritySounds = 0x3e8; // TMap<ECustomizationRarity, UAkAudioEvent*>
		constexpr auto OpenButton = 0x438; // UPortalWarsButtonWidget*
		constexpr auto OpenRoot = 0x440; // UWidget*
		constexpr auto CatchButton = 0x448; // UPortalWarsButtonWidget*
		constexpr auto CatchRoot = 0x450; // UWidget*
		constexpr auto LootboxSequenceStartEvent = 0x458; // UAkAudioEvent*
		constexpr auto LootboxSequenceEndEvent = 0x460; // UAkAudioEvent*
		constexpr auto LootboxSequenceStopEvent = 0x468; // UAkAudioEvent*
	}

	namespace n_UAmbisonicsEncodingSettings {
		constexpr auto AmbisonicsOrder = 0x28; // int32_t
	}

	namespace n_UGameMapsSettings {
		constexpr auto LocalMapOptions = 0x28; // FString
		constexpr auto TransitionMap = 0x38; // FSoftObjectPath
		constexpr auto bUseSplitscreen = 0x50; // bool
		constexpr auto TwoPlayerSplitscreenLayout = 0x51; // ETwoPlayerSplitScreenType
		constexpr auto ThreePlayerSplitscreenLayout = 0x52; // EThreePlayerSplitScreenType
		constexpr auto FourPlayerSplitscreenLayout = 0x53; // EFourPlayerSplitScreenType
		constexpr auto bOffsetPlayerGamepadIds = 0x54; // bool
		constexpr auto GameInstanceClass = 0x58; // FSoftClassPath
		constexpr auto GameDefaultMap = 0x70; // FSoftObjectPath
		constexpr auto ServerDefaultMap = 0x88; // FSoftObjectPath
		constexpr auto GlobalDefaultGameMode = 0xa0; // FSoftClassPath
		constexpr auto GlobalDefaultServerGameMode = 0xb8; // FSoftClassPath
		constexpr auto GameModeMapPrefixes = 0xd0; // TArray<FGameModeName>
		constexpr auto GameModeClassAliases = 0xe0; // TArray<FGameModeName>
	}

	namespace n_APortalWarsEvolutionHUD {
		constexpr auto EvolutionHUDOverlayWidget = 0x450; // UPortalWarsEvolutionHUDOverlayWidget*
	}

	namespace n_APortalWarsVIPGameState {
		constexpr auto VIPs = 0x7c8; // TMap<int32_t, APortalWarsPlayerState*>
		constexpr auto PreviousVIPs = 0x818; // TMap<int32_t, APortalWarsPlayerState*>
	}

	namespace n_UDynamicEntryBoxBase {
		constexpr auto EntryBoxType = 0x108; // EDynamicBoxType
		constexpr auto EntrySpacing = 0x10c; // FVector2D
		constexpr auto SpacingPattern = 0x118; // TArray<FVector2D>
		constexpr auto EntrySizeRule = 0x128; // FSlateChildSize
		constexpr auto EntryHorizontalAlignment = 0x130; // EHorizontalAlignment
		constexpr auto EntryVerticalAlignment = 0x131; // EVerticalAlignment
		constexpr auto MaxElementSize = 0x134; // int32_t
		constexpr auto RadialBoxSettings = 0x138; // FRadialBoxSettings
		constexpr auto EntryWidgetPool = 0x158; // FUserWidgetPool
	}

	namespace n_UDamageType {
		constexpr auto bCausedByWorld = 0x28; // char : 1
		constexpr auto bScaleMomentumByMass = 0x28; // char : 1
		constexpr auto bRadialDamageVelChange = 0x28; // char : 1
		constexpr auto DamageImpulse = 0x2c; // float
		constexpr auto DestructibleImpulse = 0x30; // float
		constexpr auto DestructibleDamageSpreadScale = 0x34; // float
		constexpr auto DamageFalloff = 0x38; // float
	}

	namespace n_UEnvQueryGenerator_ProjectedPoints {
		constexpr auto ProjectionData = 0x50; // FEnvTraceData
		constexpr auto ProjectionDataOverride = 0x80; // FEnvTraceData
	}

	namespace n_USoundWave {
		constexpr auto CompressionQuality = 0x170; // int32_t
		constexpr auto StreamingPriority = 0x174; // int32_t
		constexpr auto SampleRateQuality = 0x178; // ESoundwaveSampleRateSettings
		constexpr auto SoundGroup = 0x17a; // ESoundGroup
		constexpr auto bLooping = 0x17b; // char : 1
		constexpr auto bStreaming = 0x17b; // char : 1
		constexpr auto bSeekableStreaming = 0x17b; // char : 1
		constexpr auto LoadingBehavior = 0x17c; // ESoundWaveLoadingBehavior
		constexpr auto bMature = 0x17d; // char : 1
		constexpr auto bManualWordWrap = 0x17d; // char : 1
		constexpr auto bSingleLine = 0x17e; // char : 1
		constexpr auto bIsAmbisonics = 0x17e; // char : 1
		constexpr auto ModulationSettings = 0x180; // FSoundModulationDefaultRoutingSettings
		constexpr auto FrequenciesToAnalyze = 0x1c8; // TArray<float>
		constexpr auto CookedSpectralTimeData = 0x1d8; // TArray<FSoundWaveSpectralTimeData>
		constexpr auto CookedEnvelopeTimeData = 0x1e8; // TArray<FSoundWaveEnvelopeTimeData>
		constexpr auto InitialChunkSize = 0x1f8; // int32_t
		constexpr auto SpokenText = 0x240; // FString
		constexpr auto SubtitlePriority = 0x250; // float
		constexpr auto Volume = 0x254; // float
		constexpr auto Pitch = 0x258; // float
		constexpr auto NumChannels = 0x25c; // int32_t
		constexpr auto SampleRate = 0x260; // int32_t
		constexpr auto Subtitles = 0x270; // TArray<FSubtitleCue>
		constexpr auto Curves = 0x280; // UCurveTable*
		constexpr auto InternalCurves = 0x288; // UCurveTable*
	}

	namespace n_UPortalWarsLockerSubWidget {
		constexpr auto HorizontalItemEntryWidgetClass = 0x3e8; // UPortalWarsLockerEntryWidget*
		constexpr auto VerticalItemEntryWidgetClass = 0x3f0; // UPortalWarsLockerEntryWidget*
		constexpr auto ItemEntryWidgetClassOverrides = 0x3f8; // TMap<ECustomizationType, UPortalWarsLockerEntryWidget*>
		constexpr auto ParentEntryWidgetClass = 0x448; // UPortalWarsLockerEntryWidget*
		constexpr auto ParentPanel = 0x450; // UPortalWarsCustomScrollWidget*
		constexpr auto ItemsPanel = 0x458; // UPortalWarsCustomScrollWidget*
		constexpr auto ParentCustomizations = 0x460; // TSet<FCustomizationId>
		constexpr auto ItemCustomizations = 0x4b0; // TSet<FCustomizationId>
		constexpr auto ParentSubtitleText = 0x500; // UTextBlock*
		constexpr auto ChallengeEntry = 0x508; // UPortalWarsChallengeEntryWidget*
		constexpr auto ChallengeRoot = 0x510; // UWidget*
		constexpr auto ViewButton = 0x518; // UPortalWarsButtonWidget*
		constexpr auto TipRichTextBlock = 0x520; // URichTextBlock*
	}

	namespace n_UDatasmithSkyLightComponentTemplate {
		constexpr auto SourceType = 0x30; // ESkyLightSourceType
		constexpr auto CubemapResolution = 0x34; // int32_t
		constexpr auto Cubemap = 0x38; // UTextureCube*
	}

	namespace n_UInterpTrackInstAkAudioEvent {
		constexpr auto LastUpdatePosition = 0x28; // float
	}

	namespace n_UAIPerceptionComponent {
		constexpr auto SensesConfig = 0xb0; // TArray<UAISenseConfig*>
		constexpr auto DominantSense = 0xc0; // UAISense*
		constexpr auto AIOwner = 0xd8; // AAIController*
		constexpr auto OnPerceptionUpdated = 0x160; // FMulticastInlineDelegate
		constexpr auto OnTargetPerceptionUpdated = 0x170; // FMulticastInlineDelegate
		constexpr auto OnTargetPerceptionInfoUpdated = 0x180; // FMulticastInlineDelegate
	}

	namespace n_UGameInstance {
		constexpr auto LocalPlayers = 0x38; // TArray<ULocalPlayer*>
		constexpr auto OnlineSession = 0x48; // UOnlineSession*
		constexpr auto ReferencedObjects = 0x50; // TArray<UObject*>
		constexpr auto OnPawnControllerChangedDelegates = 0x78; // FMulticastInlineDelegate
	}

	namespace n_UParticleModuleLocation {
		constexpr auto StartLocation = 0x30; // FRawDistributionVector
		constexpr auto DistributeOverNPoints = 0x78; // float
		constexpr auto DistributeThreshold = 0x7c; // float
	}

	namespace n_UBTDecorator_HasReceivedKillRecently {
		constexpr auto MaxTime = 0x68; // float
	}

	namespace n_UMovieSceneBoolSection {
		constexpr auto DefaultValue = 0xe8; // bool
		constexpr auto BoolCurve = 0xf0; // FMovieSceneBoolChannel
	}

	namespace n_UNiagaraDataInterfaceAudioSubmix {
		constexpr auto Submix = 0x38; // USoundSubmix*
	}

	namespace n_UMeshComponent {
		constexpr auto OverrideMaterials = 0x450; // TArray<UMaterialInterface*>
		constexpr auto bEnableMaterialParameterCaching = 0x470; // char : 1
	}

	namespace n_APortalWarsNeutralCTFHUD {
		constexpr auto TeamIndicator = 0x400; // UPortalWarsFlagIndicatorWidget*
		constexpr auto FlagIndicatorWidgetClass = 0x408; // UPortalWarsIndicatorWidget*
		constexpr auto FlagCaptureZoneWidgetClass = 0x410; // UPortalWarsIndicatorWidget*
		constexpr auto CTFHUDOverlayWidget = 0x418; // UPortalWarsCTFHUDOverlayWidget*
		constexpr auto CTFHUDOverlayWidgetClass = 0x420; // UPortalWarsCTFHUDOverlayWidget*
	}

	namespace n_UARSaveWorldAsyncTaskBlueprintProxy {
		constexpr auto OnSuccess = 0x50; // FMulticastInlineDelegate
		constexpr auto OnFailed = 0x60; // FMulticastInlineDelegate
	}

	namespace n_UCircularThrobber {
		constexpr auto NumberOfPieces = 0x108; // int32_t
		constexpr auto Period = 0x10c; // float
		constexpr auto Radius = 0x110; // float
		constexpr auto PieceImage = 0x118; // USlateBrushAsset*
		constexpr auto Image = 0x120; // FSlateBrush
		constexpr auto bEnableRadius = 0x1a8; // bool
	}

	namespace n_UGeometryCollectionComponent {
		constexpr auto ChaosSolverActor = 0x480; // AChaosSolverActor*
		constexpr auto RestCollection = 0x568; // UGeometryCollection*
		constexpr auto InitializationFields = 0x570; // TArray<AFieldSystemActor*>
		constexpr auto Simulating = 0x580; // bool
		constexpr auto ObjectType = 0x588; // EObjectStateTypeEnum
		constexpr auto EnableClustering = 0x589; // bool
		constexpr auto ClusterGroupIndex = 0x58c; // int32_t
		constexpr auto MaxClusterLevel = 0x590; // int32_t
		constexpr auto DamageThreshold = 0x598; // TArray<float>
		constexpr auto ClusterConnectionType = 0x5a8; // EClusterConnectionTypeEnum
		constexpr auto CollisionGroup = 0x5ac; // int32_t
		constexpr auto CollisionSampleFraction = 0x5b0; // float
		constexpr auto LinearEtherDrag = 0x5b4; // float
		constexpr auto AngularEtherDrag = 0x5b8; // float
		constexpr auto PhysicalMaterial = 0x5c0; // UChaosPhysicalMaterial*
		constexpr auto InitialVelocityType = 0x5c8; // EInitialVelocityTypeEnum
		constexpr auto InitialLinearVelocity = 0x5cc; // FVector
		constexpr auto InitialAngularVelocity = 0x5d8; // FVector
		constexpr auto PhysicalMaterialOverride = 0x5e8; // UPhysicalMaterial*
		constexpr auto CacheParameters = 0x5f0; // FGeomComponentCacheParameters
		constexpr auto NotifyGeometryCollectionPhysicsStateChange = 0x640; // FMulticastInlineDelegate
		constexpr auto NotifyGeometryCollectionPhysicsLoadingStateChange = 0x650; // FMulticastInlineDelegate
		constexpr auto OnChaosBreakEvent = 0x678; // FMulticastInlineDelegate
		constexpr auto DesiredCacheTime = 0x688; // float
		constexpr auto CachePlayback = 0x68c; // bool
		constexpr auto OnChaosPhysicsCollision = 0x690; // FMulticastInlineDelegate
		constexpr auto bNotifyBreaks = 0x6a0; // bool
		constexpr auto bNotifyCollisions = 0x6a1; // bool
		constexpr auto bEnableReplication = 0x6a2; // bool
		constexpr auto bEnableAbandonAfterLevel = 0x6a3; // bool
		constexpr auto ReplicationAbandonClusterLevel = 0x6a4; // int32_t
		constexpr auto RepData = 0x6a8; // FGeometryCollectionRepData
		constexpr auto DummyBodySetup = 0x8d8; // UBodySetup*
	}

	namespace n_UParticleModuleEventGenerator {
		constexpr auto Events = 0x30; // TArray<FParticleEvent_GenerateInfo>
	}

	namespace n_UMaterialExpressionCosine {
		constexpr auto Input = 0x40; // FExpressionInput
		constexpr auto Period = 0x54; // float
	}

	namespace n_UWorldComposition {
		constexpr auto TilesStreaming = 0x48; // TArray<ULevelStreaming*>
		constexpr auto TilesStreamingTimeThreshold = 0x58; // double
		constexpr auto bLoadAllTilesDuringCinematic = 0x60; // bool
		constexpr auto bRebaseOriginIn3DSpace = 0x61; // bool
		constexpr auto RebaseOriginDistance = 0x64; // float
	}

	namespace n_UMovieSceneCameraCutTrack {
		constexpr auto bCanBlend = 0x78; // bool
		constexpr auto Sections = 0x80; // TArray<UMovieSceneSection*>
	}

	namespace n_UChaosClothConfig {
		constexpr auto MassMode = 0x28; // EClothMassMode
		constexpr auto UniformMass = 0x2c; // float
		constexpr auto TotalMass = 0x30; // float
		constexpr auto Density = 0x34; // float
		constexpr auto MinPerParticleMass = 0x38; // float
		constexpr auto EdgeStiffness = 0x3c; // float
		constexpr auto BendingStiffness = 0x40; // float
		constexpr auto bUseBendingElements = 0x44; // bool
		constexpr auto AreaStiffness = 0x48; // float
		constexpr auto VolumeStiffness = 0x4c; // float
		constexpr auto StrainLimitingStiffness = 0x50; // float
		constexpr auto LimitScale = 0x54; // float
		constexpr auto bUseGeodesicDistance = 0x58; // bool
		constexpr auto ShapeTargetStiffness = 0x5c; // float
		constexpr auto CollisionThickness = 0x60; // float
		constexpr auto FrictionCoefficient = 0x64; // float
		constexpr auto bUseCCD = 0x68; // bool
		constexpr auto bUseSelfCollisions = 0x69; // bool
		constexpr auto SelfCollisionThickness = 0x6c; // float
		constexpr auto bUseLegacyBackstop = 0x70; // bool
		constexpr auto DampingCoefficient = 0x74; // float
		constexpr auto bUsePointBasedWindModel = 0x78; // bool
		constexpr auto DragCoefficient = 0x7c; // float
		constexpr auto LiftCoefficient = 0x80; // float
		constexpr auto bUseGravityOverride = 0x84; // bool
		constexpr auto GravityScale = 0x88; // float
		constexpr auto Gravity = 0x8c; // FVector
		constexpr auto AnimDriveStiffness = 0x98; // FChaosClothWeightedValue
		constexpr auto AnimDriveDamping = 0xa0; // FChaosClothWeightedValue
		constexpr auto LinearVelocityScale = 0xa8; // FVector
		constexpr auto AngularVelocityScale = 0xb4; // float
		constexpr auto FictitiousAngularScale = 0xb8; // float
		constexpr auto bUseTetrahedralConstraints = 0xbc; // bool
		constexpr auto bUseThinShellVolumeConstraints = 0xbd; // bool
		constexpr auto bUseContinuousCollisionDetection = 0xbe; // bool
	}

	namespace n_UPortalWarsVotingMenuWidget {
		constexpr auto VotePanel = 0x2f8; // UPanelWidget*
		constexpr auto VoteEntryWidgetClass = 0x300; // UPortalWarsVoteEntryWidget*
		constexpr auto RemainingTimeText = 0x308; // URichTextBlock*
		constexpr auto StateDescriptionText = 0x310; // UTextBlock*
		constexpr auto VoteRoot = 0x318; // UWidget*
		constexpr auto GameRoot = 0x320; // UWidget*
		constexpr auto VoteWidgetSwitcher = 0x328; // UWidgetSwitcher*
		constexpr auto ModeRoot = 0x330; // UWidget*
		constexpr auto ModeText = 0x338; // UTextBlock*
	}

	namespace n_USafeZoneSlot {
		constexpr auto bIsTitleSafe = 0x38; // bool
		constexpr auto SafeAreaScale = 0x3c; // FMargin
		constexpr auto HAlign = 0x4c; // EHorizontalAlignment
		constexpr auto VAlign = 0x4d; // EVerticalAlignment
		constexpr auto Padding = 0x50; // FMargin
	}

	namespace n_UNavModifierComponent {
		constexpr auto AreaClass = 0xe0; // UNavArea*
		constexpr auto FailsafeExtent = 0xe8; // FVector
		constexpr auto bIncludeAgentHeight = 0xf4; // char : 1
	}

	namespace n_APartyBeaconHost {
		constexpr auto State = 0x248; // UPartyBeaconState*
		constexpr auto bLogoutOnSessionTimeout = 0x2b0; // bool
		constexpr auto SessionTimeoutSecs = 0x2b4; // float
		constexpr auto TravelSessionTimeoutSecs = 0x2b8; // float
	}

	namespace n_UMovieSceneObjectPropertyTrack {
		constexpr auto PropertyClass = 0xb0; // UObject*
	}

	namespace n_UHapticFeedbackEffect_SoundWave {
		constexpr auto SoundWave = 0x28; // USoundWave*
	}

	namespace n_UInterpTrackInstVisibility {
		constexpr auto Action = 0x28; // EVisibilityTrackAction
		constexpr auto LastUpdatePosition = 0x2c; // float
	}

	namespace n_AAkSpotReflector {
		constexpr auto AuxBus = 0x220; // UAkAuxBus*
		constexpr auto AuxBusName = 0x228; // FString
		constexpr auto AcousticTexture = 0x238; // UAkAcousticTexture*
		constexpr auto DistanceScalingFactor = 0x240; // float
		constexpr auto Level = 0x244; // float
	}

	namespace n_UPortalWarsKillcamHeaderWidget {
		constexpr auto BlinkAnimation = 0x260; // UWidgetAnimation*
		constexpr auto TimerText = 0x268; // UTextBlock*
		constexpr auto HeaderText = 0x270; // UTextBlock*
	}

	namespace n_UNiagaraDataInterfaceVector2DCurve {
		constexpr auto XCurve = 0x70; // FRichCurve
		constexpr auto YCurve = 0xf0; // FRichCurve
	}

	namespace n_UBlackboardKeyType_Class {
		constexpr auto BaseClass = 0x30; // UObject*
	}

	namespace n_ABurstLineTraceGun {
		constexpr auto BurstLineTraceGunConfig = 0x768; // FBurstLineTraceGunData
	}

	namespace n_UMovieSceneCameraShakeSourceTriggerTrack {
		constexpr auto Sections = 0x80; // TArray<UMovieSceneSection*>
	}

	namespace n_APortalWarsCTFGameState {
		constexpr auto AlphaFlag = 0x7c8; // AActor*
		constexpr auto BravoFlag = 0x7d0; // AActor*
		constexpr auto AlphaFlagState = 0x7d8; // EFlagState
		constexpr auto BravoFlagState = 0x7d9; // EFlagState
		constexpr auto CapturedFlagRespawnTime = 0x7dc; // float
	}

	namespace n_UAISenseConfig_Damage {
		constexpr auto Implementation = 0x48; // UAISense_Damage*
	}

	namespace n_UNiagaraEventReceiverEmitterAction_SpawnParticles {
		constexpr auto NumParticles = 0x28; // uint32_t
	}

	namespace n_UMovieSceneGeometryCollectionTrack {
		constexpr auto AnimationSections = 0x80; // TArray<UMovieSceneSection*>
	}

	namespace n_UFXSystemAsset {
		constexpr auto MaxPoolSize = 0x28; // uint32_t
		constexpr auto PoolPrimeSize = 0x2c; // uint32_t
	}

	namespace n_UMovieSceneMarginSection {
		constexpr auto TopCurve = 0xe8; // FMovieSceneFloatChannel
		constexpr auto LeftCurve = 0x188; // FMovieSceneFloatChannel
		constexpr auto RightCurve = 0x228; // FMovieSceneFloatChannel
		constexpr auto BottomCurve = 0x2c8; // FMovieSceneFloatChannel
	}

	namespace n_UUdpMessagingSettings {
		constexpr auto EnabledByDefault = 0x28; // bool
		constexpr auto EnableTransport = 0x29; // bool
		constexpr auto bAutoRepair = 0x2a; // bool
		constexpr auto MaxSendRate = 0x2c; // float
		constexpr auto AutoRepairAttemptLimit = 0x30; // uint32_t
		constexpr auto bStopServiceWhenAppDeactivates = 0x34; // bool
		constexpr auto UnicastEndpoint = 0x38; // FString
		constexpr auto MulticastEndpoint = 0x48; // FString
		constexpr auto MessageFormat = 0x58; // EUdpMessageFormat
		constexpr auto MulticastTimeToLive = 0x59; // char
		constexpr auto StaticEndpoints = 0x60; // TArray<FString>
		constexpr auto EnableTunnel = 0x70; // bool
		constexpr auto TunnelUnicastEndpoint = 0x78; // FString
		constexpr auto TunnelMulticastEndpoint = 0x88; // FString
		constexpr auto RemoteTunnelEndpoints = 0x98; // TArray<FString>
	}

	namespace n_APortal {
		constexpr auto PortalGrow_Scale_Start = 0x228; // FVector
		constexpr auto portalGrow_TotalSeconds = 0x234; // float
		constexpr auto DoRep_portalGrow_StartAnim = 0x23c; // char
		constexpr auto DoRep_portalShrink_StartAnim = 0x23d; // char
		constexpr auto isLeftPortal = 0x23e; // bool
		constexpr auto AkPortal = 0x240; // UPortalWarsAkComponent*
		constexpr auto PortalAmb_PlayEvent = 0x248; // UAkAudioEvent*
		constexpr auto PortalAmb_StopEvent = 0x250; // UAkAudioEvent*
		constexpr auto PortalOpen_Event = 0x258; // UAkAudioEvent*
		constexpr auto PortalClose_Event = 0x260; // UAkAudioEvent*
		constexpr auto DoRep_initPortalColor = 0x269; // char
		constexpr auto MyPawn = 0x270; // APortalWarsCharacter*
		constexpr auto MyPlayerState = 0x278; // APortalWarsPlayerState*
		constexpr auto linkedPortal = 0x288; // APortal*
		constexpr auto UnlinkedPortalColor = 0x290; // FLinearColor
		constexpr auto LeftPortalColor = 0x2a0; // FLinearColor
		constexpr auto RightPortalColor = 0x2b0; // FLinearColor
		constexpr auto PortalMesh = 0x2c0; // UStaticMeshComponent*
		constexpr auto portalCollisionFrameMesh = 0x2c8; // UStaticMeshComponent*
		constexpr auto portalRingMesh = 0x2d0; // UStaticMeshComponent*
		constexpr auto PortalThruPortalMesh = 0x2d8; // UStaticMeshComponent*
		constexpr auto PortalWall = 0x2e0; // APortalWall*
		constexpr auto smallPortalOverlapBox = 0x2f0; // UStaticMeshComponent*
		constexpr auto largePortalOverlapBox = 0x2f8; // UStaticMeshComponent*
		constexpr auto portalDynamicMaterial = 0x300; // UMaterialInstanceDynamic*
		constexpr auto DefaultPortalMaterial = 0x308; // UMaterialInstance*
		constexpr auto DefaultPortalRingMaterial = 0x310; // UMaterialInstance*
		constexpr auto renderedPortalMaterial = 0x318; // UMaterial*
		constexpr auto EnemyPortalColor = 0x334; // FLinearColor
		constexpr auto AlphaTeamPortalColor = 0x344; // FLinearColor
		constexpr auto BravoTeamPortalColor = 0x354; // FLinearColor
		constexpr auto PortalIndicatorWidget = 0x388; // UPortalWarsIndicatorWidget*
	}

	namespace n_UARSessionConfig {
		constexpr auto bGenerateMeshDataFromTrackedGeometry = 0x30; // bool
		constexpr auto bGenerateCollisionForMeshData = 0x31; // bool
		constexpr auto bGenerateNavMeshForMeshData = 0x32; // bool
		constexpr auto bUseMeshDataForOcclusion = 0x33; // bool
		constexpr auto bRenderMeshDataInWireframe = 0x34; // bool
		constexpr auto bTrackSceneObjects = 0x35; // bool
		constexpr auto bUsePersonSegmentationForOcclusion = 0x36; // bool
		constexpr auto bUseSceneDepthForOcclusion = 0x37; // bool
		constexpr auto bUseAutomaticImageScaleEstimation = 0x38; // bool
		constexpr auto bUseStandardOnboardingUX = 0x39; // bool
		constexpr auto WorldAlignment = 0x3a; // EARWorldAlignment
		constexpr auto SessionType = 0x3b; // EARSessionType
		constexpr auto PlaneDetectionMode = 0x3c; // EARPlaneDetectionMode
		constexpr auto bHorizontalPlaneDetection = 0x3d; // bool
		constexpr auto bVerticalPlaneDetection = 0x3e; // bool
		constexpr auto bEnableAutoFocus = 0x3f; // bool
		constexpr auto LightEstimationMode = 0x40; // EARLightEstimationMode
		constexpr auto FrameSyncMode = 0x41; // EARFrameSyncMode
		constexpr auto bEnableAutomaticCameraOverlay = 0x42; // bool
		constexpr auto bEnableAutomaticCameraTracking = 0x43; // bool
		constexpr auto bResetCameraTracking = 0x44; // bool
		constexpr auto bResetTrackedObjects = 0x45; // bool
		constexpr auto CandidateImages = 0x48; // TArray<UARCandidateImage*>
		constexpr auto MaxNumSimultaneousImagesTracked = 0x58; // int32_t
		constexpr auto EnvironmentCaptureProbeType = 0x5c; // EAREnvironmentCaptureProbeType
		constexpr auto WorldMapData = 0x60; // TArray<char>
		constexpr auto CandidateObjects = 0x70; // TArray<UARCandidateObject*>
		constexpr auto DesiredVideoFormat = 0x80; // FARVideoFormat
		constexpr auto bUseOptimalVideoFormat = 0x8c; // bool
		constexpr auto FaceTrackingDirection = 0x8d; // EARFaceTrackingDirection
		constexpr auto FaceTrackingUpdate = 0x8e; // EARFaceTrackingUpdate
		constexpr auto MaxNumberOfTrackedFaces = 0x90; // int32_t
		constexpr auto SerializedARCandidateImageDatabase = 0x98; // TArray<char>
		constexpr auto EnabledSessionTrackingFeature = 0xa8; // EARSessionTrackingFeature
		constexpr auto SceneReconstructionMethod = 0xa9; // EARSceneReconstruction
		constexpr auto PlaneComponentClass = 0xb0; // UARPlaneComponent*
		constexpr auto PointComponentClass = 0xb8; // UARPointComponent*
		constexpr auto FaceComponentClass = 0xc0; // UARFaceComponent*
		constexpr auto ImageComponentClass = 0xc8; // UARImageComponent*
		constexpr auto QRCodeComponentClass = 0xd0; // UARQRCodeComponent*
		constexpr auto PoseComponentClass = 0xd8; // UARPoseComponent*
		constexpr auto EnvironmentProbeComponentClass = 0xe0; // UAREnvironmentProbeComponent*
		constexpr auto ObjectComponentClass = 0xe8; // UARObjectComponent*
		constexpr auto MeshComponentClass = 0xf0; // UARMeshComponent*
		constexpr auto GeoAnchorComponentClass = 0xf8; // UARGeoAnchorComponent*
		constexpr auto DefaultMeshMaterial = 0x100; // UMaterialInterface*
		constexpr auto DefaultWireframeMeshMaterial = 0x108; // UMaterialInterface*
	}

	namespace n_UPortalWarsCustomLobbyWidget {
		constexpr auto StartGameButton = 0x2f8; // UPortalWarsButtonWidget*
		constexpr auto InviteButton = 0x300; // UPortalWarsButtonWidget*
		constexpr auto InviteDialogWidgetClass = 0x308; // UPortalWarsDialogWidget*
		constexpr auto SettingsMenuPanel = 0x310; // UPanelWidget*
		constexpr auto OpenSettingsAnimation = 0x318; // UWidgetAnimation*
		constexpr auto ActiveSettingsMenu = 0x320; // UWidget*
		constexpr auto CustomGameText = 0x330; // UTextBlock*
		constexpr auto SettingsSelectorButton = 0x338; // UPortalWarsLobbySelectorButtonWidget*
		constexpr auto SettingsMenuClass = 0x340; // UPortalWarsMenuWidget*
		constexpr auto MapSelectorButton = 0x348; // UPortalWarsLobbySelectorButtonWidget*
		constexpr auto MapSelectorMenuClass = 0x350; // UPortalWarsMenuWidget*
		constexpr auto ModeSelectorButton = 0x358; // UPortalWarsLobbySelectorButtonWidget*
		constexpr auto ModeSelectorMenuClass = 0x360; // UPortalWarsMenuWidget*
		constexpr auto LastUsedSelector = 0x368; // UPortalWarsLobbySelectorButtonWidget*
	}

	namespace n_UMaterialExpressionShadingPathSwitch {
		constexpr auto Default = 0x40; // FExpressionInput
		constexpr auto Inputs = 0x54; // FExpressionInput [0x3]
	}

	namespace n_UParticleModuleVectorFieldRotation {
		constexpr auto MinInitialRotation = 0x30; // FVector
		constexpr auto MaxInitialRotation = 0x3c; // FVector
	}

	namespace n_UCheckBox {
		constexpr auto CheckedState = 0x120; // ECheckBoxState
		constexpr auto CheckedStateDelegate = 0x124; // FDelegate
		constexpr auto WidgetStyle = 0x138; // FCheckBoxStyle
		constexpr auto Style = 0x6b8; // USlateWidgetStyleAsset*
		constexpr auto UncheckedImage = 0x6c0; // USlateBrushAsset*
		constexpr auto UncheckedHoveredImage = 0x6c8; // USlateBrushAsset*
		constexpr auto UncheckedPressedImage = 0x6d0; // USlateBrushAsset*
		constexpr auto CheckedImage = 0x6d8; // USlateBrushAsset*
		constexpr auto CheckedHoveredImage = 0x6e0; // USlateBrushAsset*
		constexpr auto CheckedPressedImage = 0x6e8; // USlateBrushAsset*
		constexpr auto UndeterminedImage = 0x6f0; // USlateBrushAsset*
		constexpr auto UndeterminedHoveredImage = 0x6f8; // USlateBrushAsset*
		constexpr auto UndeterminedPressedImage = 0x700; // USlateBrushAsset*
		constexpr auto HorizontalAlignment = 0x708; // EHorizontalAlignment
		constexpr auto Padding = 0x70c; // FMargin
		constexpr auto BorderBackgroundColor = 0x720; // FSlateColor
		constexpr auto ClickMethod = 0x748; // EButtonClickMethod
		constexpr auto TouchMethod = 0x749; // EButtonTouchMethod
		constexpr auto PressMethod = 0x74a; // EButtonPressMethod
		constexpr auto IsFocusable = 0x74b; // bool
		constexpr auto OnCheckStateChanged = 0x750; // FMulticastInlineDelegate
	}

	namespace n_APhysicsConstraintActor {
		constexpr auto ConstraintComp = 0x220; // UPhysicsConstraintComponent*
		constexpr auto ConstraintActor1 = 0x228; // AActor*
		constexpr auto ConstraintActor2 = 0x230; // AActor*
		constexpr auto bDisableCollision = 0x238; // char : 1
	}

	namespace n_UMaterialExpressionPower {
		constexpr auto Base = 0x40; // FExpressionInput
		constexpr auto Exponent = 0x54; // FExpressionInput
		constexpr auto ConstExponent = 0x68; // float
	}

	namespace n_UNiagaraComponentSettings {
		constexpr auto SuppressActivationList = 0x28; // TSet<FName>
		constexpr auto ForceAutoPooolingList = 0x78; // TSet<FName>
		constexpr auto SuppressEmitterList = 0xc8; // TSet<FNiagaraEmitterNameSettingsRef>
	}

	namespace n_APortalWarsBot {
		constexpr auto BotBehavior = 0xda8; // UBehaviorTree*
		constexpr auto bUseNavRecovery = 0xdb0; // bool
		constexpr auto NavRecoveryType = 0xdb1; // ENavRecoveryType
		constexpr auto NavRecoverySettingsOffMesh = 0xdb4; // FNavRecoverySettings
		constexpr auto NavRecoverySettingsOnIslands = 0xdd8; // FNavRecoverySettings
		constexpr auto NavRecoveryMaxLaunchSize = 0xdfc; // float
		constexpr auto NavRecoveryMinJumpArc = 0xe00; // float
		constexpr auto NavRecoveryMaxJumpArc = 0xe04; // float
		constexpr auto NavRecoveryTestExtent = 0xe08; // FVector
		constexpr auto StuckCheckInterval = 0xe44; // float
		constexpr auto StuckDistanceTolerance = 0xe48; // float
		constexpr auto WeaponSelectionFrequency = 0xe58; // float
		constexpr auto WeaponSelectionCooldown = 0xe5c; // float
		constexpr auto DebugInfo = 0xe60; // FBotDebugInfo
	}

	namespace n_UAITask_MoveTo {
		constexpr auto OnRequestFailed = 0x70; // FMulticastInlineDelegate
		constexpr auto OnMoveFinished = 0x80; // FMulticastInlineDelegate
		constexpr auto MoveRequest = 0x90; // FAIMoveRequest
	}

	namespace n_UMaterialExpressionSphericalParticleOpacity {
		constexpr auto Density = 0x40; // FExpressionInput
		constexpr auto ConstantDensity = 0x54; // float
	}

	namespace n_ADebugCameraController {
		constexpr auto bShowSelectedInfo = 0x570; // char : 1
		constexpr auto bIsFrozenRendering = 0x570; // char : 1
		constexpr auto bIsOrbitingSelectedActor = 0x570; // char : 1
		constexpr auto bOrbitPivotUseCenter = 0x570; // char : 1
		constexpr auto bEnableBufferVisualization = 0x570; // char : 1
		constexpr auto bEnableBufferVisualizationFullMode = 0x570; // char : 1
		constexpr auto bIsBufferVisualizationInputSetup = 0x570; // char : 1
		constexpr auto bLastDisplayEnabled = 0x570; // char : 1
		constexpr auto DrawFrustum = 0x578; // UDrawFrustumComponent*
		constexpr auto SelectedActor = 0x580; // AActor*
		constexpr auto SelectedComponent = 0x588; // UPrimitiveComponent*
		constexpr auto SelectedHitPoint = 0x590; // FHitResult
		constexpr auto OriginalControllerRef = 0x618; // APlayerController*
		constexpr auto OriginalPlayer = 0x620; // UPlayer*
		constexpr auto SpeedScale = 0x628; // float
		constexpr auto InitialMaxSpeed = 0x62c; // float
		constexpr auto InitialAccel = 0x630; // float
		constexpr auto InitialDecel = 0x634; // float
	}

	namespace n_UPortalWarsEvolutionGunStatusWidget {
		constexpr auto WeaponImage = 0x2b0; // UImage*
		constexpr auto IconSizeBox = 0x2b8; // USizeBox*
	}

	namespace n_UPortalWarsRaceScoreboardWidget {
		constexpr auto PlayerNameText = 0x340; // UTextBlock*
		constexpr auto CurrentTimeText = 0x348; // UTextBlock*
		constexpr auto RecordHolderNameText = 0x350; // UTextBlock*
		constexpr auto RecordTimeText = 0x358; // UTextBlock*
	}

	namespace n_UMovieSceneByteTrack {
		constexpr auto Enum = 0xa8; // UEnum*
	}

	namespace n_UNiagaraDataInterfaceGrid2D {
		constexpr auto NumCellsX = 0xd8; // int32_t
		constexpr auto NumCellsY = 0xdc; // int32_t
		constexpr auto NumCellsMaxAxis = 0xe0; // int32_t
		constexpr auto NumAttributes = 0xe4; // int32_t
		constexpr auto SetGridFromMaxAxis = 0xe8; // bool
		constexpr auto WorldBBoxSize = 0xec; // FVector2D
	}

	namespace n_UMovieSceneBuiltInEasingFunction {
		constexpr auto Type = 0x30; // EMovieSceneBuiltInEasing
	}

	namespace n_UPortalWarsBattlePassPanelWidget {
		constexpr auto RewardTitleText = 0x360; // UTextBlock*
		constexpr auto RewardEntry = 0x368; // UPortalWarsRewardEntryWidget*
		constexpr auto UnlockedText = 0x370; // UTextBlock*
		constexpr auto ViewBattlePassButton = 0x378; // UPortalWarsButtonWidget*
	}

	namespace n_USubmixEffectMultibandCompressorPreset {
		constexpr auto Settings = 0xb0; // FSubmixEffectMultibandCompressorSettings
	}

	namespace n_UEnvQueryManager {
		constexpr auto InstanceCache = 0xa8; // TArray<FEnvQueryInstanceCache>
		constexpr auto LocalContexts = 0xb8; // TArray<UEnvQueryContext*>
		constexpr auto GCShieldedWrappers = 0xc8; // TArray<UEnvQueryInstanceBlueprintWrapper*>
		constexpr auto MaxAllowedTestingTime = 0x12c; // float
		constexpr auto bTestQueriesUsingBreadth = 0x130; // bool
		constexpr auto QueryCountWarningThreshold = 0x134; // int32_t
		constexpr auto QueryCountWarningInterval = 0x138; // double
	}

	namespace n_ULevel {
		constexpr auto OwningWorld = 0xb8; // UWorld*
		constexpr auto Model = 0xc0; // UModel*
		constexpr auto ModelComponents = 0xc8; // TArray<UModelComponent*>
		constexpr auto ActorCluster = 0xd8; // ULevelActorContainer*
		constexpr auto NumTextureStreamingUnbuiltComponents = 0xe0; // int32_t
		constexpr auto NumTextureStreamingDirtyResources = 0xe4; // int32_t
		constexpr auto LevelScriptActor = 0xe8; // ALevelScriptActor*
		constexpr auto NavListStart = 0xf0; // ANavigationObjectBase*
		constexpr auto NavListEnd = 0xf8; // ANavigationObjectBase*
		constexpr auto NavDataChunks = 0x100; // TArray<UNavigationDataChunk*>
		constexpr auto LightmapTotalSize = 0x110; // float
		constexpr auto ShadowmapTotalSize = 0x114; // float
		constexpr auto StaticNavigableGeometry = 0x118; // TArray<FVector>
		constexpr auto StreamingTextureGuids = 0x128; // TArray<FGuid>
		constexpr auto LevelBuildDataId = 0x1d0; // FGuid
		constexpr auto MapBuildData = 0x1e0; // UMapBuildDataRegistry*
		constexpr auto LightBuildLevelOffset = 0x1e8; // FIntVector
		constexpr auto bIsLightingScenario = 0x1f4; // char : 1
		constexpr auto bTextureStreamingRotationChanged = 0x1f4; // char : 1
		constexpr auto bStaticComponentsRegisteredInStreamingManager = 0x1f4; // char : 1
		constexpr auto bIsVisible = 0x1f4; // char : 1
		constexpr auto WorldSettings = 0x258; // AWorldSettings*
		constexpr auto AssetUserData = 0x268; // TArray<UAssetUserData*>
		constexpr auto DestroyedReplicatedStaticActors = 0x288; // TArray<FReplicatedStaticActorDestructionInfo>
	}

	namespace n_APortalWarsTakedownVIPPlayerState {
		constexpr auto bIsVIP = 0xad0; // char : 1
	}

	namespace n_UParticleModuleOrientationAxisLock {
		constexpr auto LockAxisFlags = 0x30; // EParticleAxisLock
	}

	namespace n_UMotoSynthPreset {
		constexpr auto Settings = 0x28; // FMotoSynthRuntimeSettings
	}

	namespace n_UAkLuminInitializationSettings {
		constexpr auto CommonSettings = 0x28; // FAkCommonInitializationSettingsWithSampleRate
		constexpr auto CommunicationSettings = 0x98; // FAkCommunicationSettingsWithSystemInitialization
		constexpr auto AdvancedSettings = 0xc0; // FAkAdvancedInitializationSettingsWithMultiCoreRendering
	}

	namespace n_UPortalWarsDOMHillStatusWidget {
		constexpr auto HillProgressBar = 0x260; // UProgressBar*
		constexpr auto OutlineImage = 0x268; // UImage*
		constexpr auto HillLetterText = 0x270; // UTextBlock*
		constexpr auto HillStatusText = 0x278; // UTextBlock*
		constexpr auto RootHorizontalBox = 0x280; // UHorizontalBox*
		constexpr auto RotateAnimation = 0x288; // UWidgetAnimation*
		constexpr auto BlueHillImage = 0x290; // UTexture2D*
		constexpr auto WhiteHillImage = 0x298; // UTexture2D*
		constexpr auto RedHillImage = 0x2a0; // UTexture2D*
		constexpr auto BlueFillImage = 0x2a8; // UTexture2D*
		constexpr auto RedFillImage = 0x2b0; // UTexture2D*
	}

	namespace n_UInterpTrackInstFloatAnimBPParam {
		constexpr auto AnimScriptInstance = 0x28; // UAnimInstance*
		constexpr auto ResetFloat = 0x30; // float
	}

	namespace n_UPortalWarsDiscardSettingsDialog {
		constexpr auto AcceptButton = 0x3a0; // UPortalWarsButtonWidget*
	}

	namespace n_UFoliageType {
		constexpr auto UpdateGuid = 0x28; // FGuid
		constexpr auto Density = 0x38; // float
		constexpr auto DensityAdjustmentFactor = 0x3c; // float
		constexpr auto Radius = 0x40; // float
		constexpr auto bSingleInstanceModeOverrideRadius = 0x44; // bool
		constexpr auto SingleInstanceModeRadius = 0x48; // float
		constexpr auto Scaling = 0x4c; // EFoliageScaling
		constexpr auto ScaleX = 0x50; // FFloatInterval
		constexpr auto ScaleY = 0x58; // FFloatInterval
		constexpr auto ScaleZ = 0x60; // FFloatInterval
		constexpr auto VertexColorMaskByChannel = 0x68; // FFoliageVertexColorChannelMask [0x4]
		constexpr auto VertexColorMask = 0x98; // FoliageVertexColorMask
		constexpr auto VertexColorMaskThreshold = 0x9c; // float
		constexpr auto VertexColorMaskInvert = 0xa0; // char : 1
		constexpr auto ZOffset = 0xa4; // FFloatInterval
		constexpr auto AlignToNormal = 0xac; // char : 1
		constexpr auto AlignMaxAngle = 0xb0; // float
		constexpr auto RandomYaw = 0xb4; // char : 1
		constexpr auto RandomPitchAngle = 0xb8; // float
		constexpr auto GroundSlopeAngle = 0xbc; // FFloatInterval
		constexpr auto Height = 0xc4; // FFloatInterval
		constexpr auto LandscapeLayers = 0xd0; // TArray<FName>
		constexpr auto MinimumLayerWeight = 0xe0; // float
		constexpr auto ExclusionLandscapeLayers = 0xe8; // TArray<FName>
		constexpr auto MinimumExclusionLayerWeight = 0xf8; // float
		constexpr auto LandscapeLayer = 0xfc; // FName
		constexpr auto CollisionWithWorld = 0x104; // char : 1
		constexpr auto CollisionScale = 0x108; // FVector
		constexpr auto MeshBounds = 0x114; // FBoxSphereBounds
		constexpr auto LowBoundOriginRadius = 0x130; // FVector
		constexpr auto Mobility = 0x13c; // EComponentMobility
		constexpr auto CullDistance = 0x140; // FInt32Interval
		constexpr auto bEnableStaticLighting = 0x148; // char : 1
		constexpr auto CastShadow = 0x148; // char : 1
		constexpr auto bAffectDynamicIndirectLighting = 0x148; // char : 1
		constexpr auto bAffectDistanceFieldLighting = 0x148; // char : 1
		constexpr auto bCastDynamicShadow = 0x148; // char : 1
		constexpr auto bCastStaticShadow = 0x148; // char : 1
		constexpr auto bCastShadowAsTwoSided = 0x148; // char : 1
		constexpr auto bReceivesDecals = 0x148; // char : 1
		constexpr auto bOverrideLightMapRes = 0x149; // char : 1
		constexpr auto OverriddenLightMapRes = 0x14c; // int32_t
		constexpr auto LightmapType = 0x150; // ELightmapType
		constexpr auto bUseAsOccluder = 0x154; // char : 1
		constexpr auto bVisibleInRayTracing = 0x158; // char : 1
		constexpr auto bEvaluateWorldPositionOffset = 0x158; // char : 1
		constexpr auto BodyInstance = 0x160; // FBodyInstance
		constexpr auto CustomNavigableGeometry = 0x2b8; // EHasCustomNavigableGeometry
		constexpr auto LightingChannels = 0x2b9; // FLightingChannels
		constexpr auto bRenderCustomDepth = 0x2bc; // char : 1
		constexpr auto CustomDepthStencilWriteMask = 0x2c0; // ERendererStencilMask
		constexpr auto CustomDepthStencilValue = 0x2c4; // int32_t
		constexpr auto TranslucencySortPriority = 0x2c8; // int32_t
		constexpr auto CollisionRadius = 0x2cc; // float
		constexpr auto ShadeRadius = 0x2d0; // float
		constexpr auto NumSteps = 0x2d4; // int32_t
		constexpr auto InitialSeedDensity = 0x2d8; // float
		constexpr auto AverageSpreadDistance = 0x2dc; // float
		constexpr auto SpreadVariance = 0x2e0; // float
		constexpr auto SeedsPerStep = 0x2e4; // int32_t
		constexpr auto DistributionSeed = 0x2e8; // int32_t
		constexpr auto MaxInitialSeedOffset = 0x2ec; // float
		constexpr auto bCanGrowInShade = 0x2f0; // bool
		constexpr auto bSpawnsInShade = 0x2f1; // bool
		constexpr auto MaxInitialAge = 0x2f4; // float
		constexpr auto MaxAge = 0x2f8; // float
		constexpr auto OverlapPriority = 0x2fc; // float
		constexpr auto ProceduralScale = 0x300; // FFloatInterval
		constexpr auto ScaleCurve = 0x308; // FRuntimeFloatCurve
		constexpr auto ChangeCount = 0x390; // int32_t
		constexpr auto ReapplyDensity = 0x394; // char : 1
		constexpr auto ReapplyRadius = 0x394; // char : 1
		constexpr auto ReapplyAlignToNormal = 0x394; // char : 1
		constexpr auto ReapplyRandomYaw = 0x394; // char : 1
		constexpr auto ReapplyScaling = 0x394; // char : 1
		constexpr auto ReapplyScaleX = 0x394; // char : 1
		constexpr auto ReapplyScaleY = 0x394; // char : 1
		constexpr auto ReapplyScaleZ = 0x394; // char : 1
		constexpr auto ReapplyRandomPitchAngle = 0x395; // char : 1
		constexpr auto ReapplyGroundSlope = 0x395; // char : 1
		constexpr auto ReapplyHeight = 0x395; // char : 1
		constexpr auto ReapplyLandscapeLayers = 0x395; // char : 1
		constexpr auto ReapplyZOffset = 0x395; // char : 1
		constexpr auto ReapplyCollisionWithWorld = 0x395; // char : 1
		constexpr auto ReapplyVertexColorMask = 0x395; // char : 1
		constexpr auto bEnableDensityScaling = 0x395; // char : 1
		constexpr auto bEnableDiscardOnLoad = 0x396; // char : 1
		constexpr auto RuntimeVirtualTextures = 0x398; // TArray<URuntimeVirtualTexture*>
		constexpr auto VirtualTextureCullMips = 0x3a8; // int32_t
		constexpr auto VirtualTextureRenderPassType = 0x3ac; // ERuntimeVirtualTextureMainPassType
	}

	namespace n_ARectLight {
		constexpr auto RectLightComponent = 0x230; // URectLightComponent*
	}

	namespace n_UPortalWarsUnlockDialogWidget {
		constexpr auto TitleText = 0x398; // UTextBlock*
		constexpr auto MessageText = 0x3a0; // UTextBlock*
		constexpr auto MedalImage = 0x3a8; // UImage*
		constexpr auto UnlockImage = 0x3b0; // UImage*
		constexpr auto IconImage = 0x3b8; // UImage*
		constexpr auto NotesVerticalBox = 0x3c0; // UVerticalBox*
		constexpr auto QueueButton = 0x3c8; // UPortalWarsButtonWidget*
		constexpr auto ViewButton = 0x3d0; // UPortalWarsButtonWidget*
		constexpr auto ButtonWidgetSwitcher = 0x3d8; // UWidgetSwitcher*
		constexpr auto NoteEntryWidgetClass = 0x3e0; // UPortalWarsUnlockNoteEntryWidget*
		constexpr auto PaddingBetweenNoteEntries = 0x3e8; // float
		constexpr auto UnlockEvent = 0x3f8; // UAkAudioEvent*
	}

	namespace n_ULandscapeMeshCollisionComponent {
		constexpr auto MeshGuid = 0x530; // FGuid
	}

	namespace n_AGeometryCacheActor {
		constexpr auto GeometryCacheComponent = 0x220; // UGeometryCacheComponent*
	}

	namespace n_UAudioComponent {
		constexpr auto Sound = 0x1f8; // USoundBase*
		constexpr auto InstanceParameters = 0x200; // TArray<FAudioComponentParam>
		constexpr auto SoundClassOverride = 0x210; // USoundClass*
		constexpr auto bAutoDestroy = 0x218; // char : 1
		constexpr auto bStopWhenOwnerDestroyed = 0x218; // char : 1
		constexpr auto bShouldRemainActiveIfDropped = 0x218; // char : 1
		constexpr auto bAllowSpatialization = 0x218; // char : 1
		constexpr auto bOverrideAttenuation = 0x218; // char : 1
		constexpr auto bOverrideSubtitlePriority = 0x218; // char : 1
		constexpr auto bIsUISound = 0x218; // char : 1
		constexpr auto bEnableLowPassFilter = 0x218; // char : 1
		constexpr auto bOverridePriority = 0x219; // char : 1
		constexpr auto bSuppressSubtitles = 0x219; // char : 1
		constexpr auto bAutoManageAttachment = 0x21a; // char : 1
		constexpr auto AudioComponentUserID = 0x220; // FName
		constexpr auto PitchModulationMin = 0x228; // float
		constexpr auto PitchModulationMax = 0x22c; // float
		constexpr auto VolumeModulationMin = 0x230; // float
		constexpr auto VolumeModulationMax = 0x234; // float
		constexpr auto VolumeMultiplier = 0x238; // float
		constexpr auto EnvelopeFollowerAttackTime = 0x23c; // int32_t
		constexpr auto EnvelopeFollowerReleaseTime = 0x240; // int32_t
		constexpr auto Priority = 0x244; // float
		constexpr auto SubtitlePriority = 0x248; // float
		constexpr auto SourceEffectChain = 0x250; // USoundEffectSourcePresetChain*
		constexpr auto PitchMultiplier = 0x258; // float
		constexpr auto LowPassFilterFrequency = 0x25c; // float
		constexpr auto AttenuationSettings = 0x268; // USoundAttenuation*
		constexpr auto AttenuationOverrides = 0x270; // FSoundAttenuationSettings
		constexpr auto ConcurrencySettings = 0x610; // USoundConcurrency*
		constexpr auto ConcurrencySet = 0x618; // TSet<USoundConcurrency*>
		constexpr auto AutoAttachLocationRule = 0x674; // EAttachmentRule
		constexpr auto AutoAttachRotationRule = 0x675; // EAttachmentRule
		constexpr auto AutoAttachScaleRule = 0x676; // EAttachmentRule
		constexpr auto ModulationRouting = 0x678; // FSoundModulationDefaultRoutingSettings
		constexpr auto OnAudioPlayStateChanged = 0x6c0; // FMulticastInlineDelegate
		constexpr auto OnAudioVirtualizationChanged = 0x6e8; // FMulticastInlineDelegate
		constexpr auto OnAudioFinished = 0x710; // FMulticastInlineDelegate
		constexpr auto OnAudioPlaybackPercent = 0x738; // FMulticastInlineDelegate
		constexpr auto OnAudioSingleEnvelopeValue = 0x760; // FMulticastInlineDelegate
		constexpr auto OnAudioMultiEnvelopeValue = 0x788; // FMulticastInlineDelegate
		constexpr auto OnQueueSubtitles = 0x7b0; // FDelegate
		constexpr auto AutoAttachParent = 0x7c0; // TWeakObjectPtr<USceneComponent>
		constexpr auto AutoAttachSocketName = 0x7c8; // FName
	}

	namespace n_UMediaSoundComponent {
		constexpr auto Channels = 0x6c0; // EMediaSoundChannels
		constexpr auto DynamicRateAdjustment = 0x6c4; // bool
		constexpr auto RateAdjustmentFactor = 0x6c8; // float
		constexpr auto RateAdjustmentRange = 0x6cc; // FFloatRange
		constexpr auto MediaPlayer = 0x6e0; // UMediaPlayer*
	}

	namespace n_UMatineeCameraShake {
		constexpr auto OscillationDuration = 0xa8; // float
		constexpr auto OscillationBlendInTime = 0xac; // float
		constexpr auto OscillationBlendOutTime = 0xb0; // float
		constexpr auto RotOscillation = 0xb4; // FROscillator
		constexpr auto LocOscillation = 0xd8; // FVOscillator
		constexpr auto FOVOscillation = 0xfc; // FFOscillator
		constexpr auto AnimPlayRate = 0x108; // float
		constexpr auto AnimScale = 0x10c; // float
		constexpr auto AnimBlendInTime = 0x110; // float
		constexpr auto AnimBlendOutTime = 0x114; // float
		constexpr auto RandomAnimSegmentDuration = 0x118; // float
		constexpr auto Anim = 0x120; // UCameraAnim*
		constexpr auto AnimSequence = 0x128; // UCameraAnimationSequence*
		constexpr auto bRandomAnimSegment = 0x130; // char : 1
		constexpr auto OscillatorTimeRemaining = 0x134; // float
		constexpr auto AnimInst = 0x138; // UCameraAnimInst*
		constexpr auto SequenceShakePattern = 0x180; // USequenceCameraShakePattern*
	}

	namespace n_UBTService_BlackboardBase {
		constexpr auto BlackboardKey = 0x70; // FBlackboardKeySelector
	}

	namespace n_UWrapBoxSlot {
		constexpr auto Padding = 0x38; // FMargin
		constexpr auto bFillEmptySpace = 0x48; // bool
		constexpr auto FillSpanWhenLessThan = 0x4c; // float
		constexpr auto HorizontalAlignment = 0x50; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x51; // EVerticalAlignment
	}

	namespace n_UHighlightsConfigureAsync {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_UDynamicEntryBox {
		constexpr auto EntryWidgetClass = 0x1d8; // UUserWidget*
	}

	namespace n_UPortalWarsJoinServerDialogWidget {
		constexpr auto JoinSwitcher = 0x390; // UWidgetSwitcher*
		constexpr auto DisabledText = 0x398; // UTextBlock*
		constexpr auto JoinButton = 0x3a0; // UPortalWarsButtonWidget*
		constexpr auto JoinDisabledText = 0x3a8; // UTextBlock*
		constexpr auto SpectateButton = 0x3b0; // UPortalWarsButtonWidget*
		constexpr auto SpectateDisabledText = 0x3b8; // UTextBlock*
		constexpr auto PasswordInput = 0x3c0; // UPortalWarsTextInputWidget*
		constexpr auto ServerEntry = 0x3c8; // UPortalWarsServerEntryWidget*
	}

	namespace n_UARPin {
		constexpr auto TrackedGeometry = 0x28; // UARTrackedGeometry*
		constexpr auto PinnedComponent = 0x30; // USceneComponent*
		constexpr auto LocalToTrackingTransform = 0x40; // FTransform
		constexpr auto LocalToAlignedTrackingTransform = 0x70; // FTransform
		constexpr auto TrackingState = 0xa0; // EARTrackingState
		constexpr auto OnARTrackingStateChanged = 0xc0; // FMulticastInlineDelegate
		constexpr auto OnARTransformUpdated = 0xd0; // FMulticastInlineDelegate
	}

	namespace n_UMaterialExpressionLinearInterpolate {
		constexpr auto A = 0x40; // FExpressionInput
		constexpr auto B = 0x54; // FExpressionInput
		constexpr auto Alpha = 0x68; // FExpressionInput
		constexpr auto ConstA = 0x7c; // float
		constexpr auto ConstB = 0x80; // float
		constexpr auto ConstAlpha = 0x84; // float
	}

	namespace n_UPortalWarsFlagZoneIndicator {
		constexpr auto Pointer = 0x2b8; // UWidget*
	}

	namespace n_ALevelSequenceActor {
		constexpr auto PlaybackSettings = 0x230; // FMovieSceneSequencePlaybackSettings
		constexpr auto SequencePlayer = 0x248; // ULevelSequencePlayer*
		constexpr auto LevelSequence = 0x250; // FSoftObjectPath
		constexpr auto CameraSettings = 0x268; // FLevelSequenceCameraSettings
		constexpr auto BurnInOptions = 0x270; // ULevelSequenceBurnInOptions*
		constexpr auto BindingOverrides = 0x278; // UMovieSceneBindingOverrides*
		constexpr auto bAutoPlay = 0x280; // char : 1
		constexpr auto bOverrideInstanceData = 0x280; // char : 1
		constexpr auto bReplicatePlayback = 0x280; // char : 1
		constexpr auto DefaultInstanceData = 0x288; // UObject*
		constexpr auto BurnInInstance = 0x290; // ULevelSequenceBurnIn*
		constexpr auto bShowBurnin = 0x298; // bool
	}

	namespace n_ULightComponent {
		constexpr auto Temperature = 0x228; // float
		constexpr auto MaxDrawDistance = 0x22c; // float
		constexpr auto MaxDistanceFadeRange = 0x230; // float
		constexpr auto bUseTemperature = 0x234; // char : 1
		constexpr auto ShadowMapChannel = 0x238; // int32_t
		constexpr auto MinRoughness = 0x240; // float
		constexpr auto SpecularScale = 0x244; // float
		constexpr auto ShadowResolutionScale = 0x248; // float
		constexpr auto ShadowBias = 0x24c; // float
		constexpr auto ShadowSlopeBias = 0x250; // float
		constexpr auto ShadowSharpen = 0x254; // float
		constexpr auto ContactShadowLength = 0x258; // float
		constexpr auto ContactShadowLengthInWS = 0x25c; // char : 1
		constexpr auto InverseSquaredFalloff = 0x25c; // char : 1
		constexpr auto CastTranslucentShadows = 0x25c; // char : 1
		constexpr auto bCastShadowsFromCinematicObjectsOnly = 0x25c; // char : 1
		constexpr auto bAffectDynamicIndirectLighting = 0x25c; // char : 1
		constexpr auto bForceCachedShadowsForMovablePrimitives = 0x25c; // char : 1
		constexpr auto LightingChannels = 0x260; // FLightingChannels
		constexpr auto LightFunctionMaterial = 0x268; // UMaterialInterface*
		constexpr auto LightFunctionScale = 0x270; // FVector
		constexpr auto IESTexture = 0x280; // UTextureLightProfile*
		constexpr auto bUseIESBrightness = 0x288; // char : 1
		constexpr auto IESBrightnessScale = 0x28c; // float
		constexpr auto LightFunctionFadeDistance = 0x290; // float
		constexpr auto DisabledBrightness = 0x294; // float
		constexpr auto bEnableLightShaftBloom = 0x298; // char : 1
		constexpr auto BloomScale = 0x29c; // float
		constexpr auto BloomThreshold = 0x2a0; // float
		constexpr auto BloomMaxBrightness = 0x2a4; // float
		constexpr auto BloomTint = 0x2a8; // FColor
		constexpr auto bUseRayTracedDistanceFieldShadows = 0x2ac; // bool
		constexpr auto RayStartOffsetDepthScale = 0x2b0; // float
	}

	namespace n_UPortalWarsReportPlayerWidget {
		constexpr auto ReportButton = 0x338; // UPortalWarsButtonWidget*
		constexpr auto ReportCategoryDropdown = 0x340; // UPortalWarsDropdownWidget*
		constexpr auto ReportDescription = 0x348; // UPortalWarsTextInputWidget*
		constexpr auto ReportTitleText = 0x350; // UTextBlock*
		constexpr auto PlayerEntry = 0x358; // UPortalWarsPlayerEntryWidget*
	}

	namespace n_UDatasmithMaterialInstanceTemplate {
		constexpr auto ParentMaterial = 0x30; // TSoftObjectPtr<UMaterialInterface>
		constexpr auto ScalarParameterValues = 0x58; // TMap<FName, float>
		constexpr auto VectorParameterValues = 0xa8; // TMap<FName, FLinearColor>
		constexpr auto TextureParameterValues = 0xf8; // TMap<FName, TSoftObjectPtr<UTexture>>
		constexpr auto StaticParameters = 0x148; // FDatasmithStaticParameterSetTemplate
	}

	namespace n_UComboBoxString {
		constexpr auto DefaultOptions = 0x108; // TArray<FString>
		constexpr auto SelectedOption = 0x118; // FString
		constexpr auto WidgetStyle = 0x128; // FComboBoxStyle
		constexpr auto ItemStyle = 0x518; // FTableRowStyle
		constexpr auto ContentPadding = 0xce0; // FMargin
		constexpr auto MaxListHeight = 0xcf0; // float
		constexpr auto HasDownArrow = 0xcf4; // bool
		constexpr auto EnableGamepadNavigationMode = 0xcf5; // bool
		constexpr auto Font = 0xcf8; // FSlateFontInfo
		constexpr auto ForegroundColor = 0xd50; // FSlateColor
		constexpr auto bIsFocusable = 0xd78; // bool
		constexpr auto OnGenerateWidgetEvent = 0xd7c; // FDelegate
		constexpr auto OnSelectionChanged = 0xd90; // FMulticastInlineDelegate
		constexpr auto OnOpening = 0xda0; // FMulticastInlineDelegate
	}

	namespace n_UFoliageType_Actor {
		constexpr auto ActorClass = 0x3b0; // AActor*
		constexpr auto bShouldAttachToBaseComponent = 0x3b8; // bool
	}

	namespace n_UPlatformInterfaceWebResponse {
		constexpr auto OriginalURL = 0x28; // FString
		constexpr auto ResponseCode = 0x38; // int32_t
		constexpr auto Tag = 0x3c; // int32_t
		constexpr auto StringResponse = 0x40; // FString
		constexpr auto BinaryResponse = 0x50; // TArray<char>
	}

	namespace n_UParticleLODLevel {
		constexpr auto Level = 0x28; // int32_t
		constexpr auto bEnabled = 0x2c; // char : 1
		constexpr auto RequiredModule = 0x30; // UParticleModuleRequired*
		constexpr auto Modules = 0x38; // TArray<UParticleModule*>
		constexpr auto TypeDataModule = 0x48; // UParticleModuleTypeDataBase*
		constexpr auto SpawnModule = 0x50; // UParticleModuleSpawn*
		constexpr auto EventGenerator = 0x58; // UParticleModuleEventGenerator*
		constexpr auto SpawningModules = 0x60; // TArray<UParticleModuleSpawnBase*>
		constexpr auto SpawnModules = 0x70; // TArray<UParticleModule*>
		constexpr auto UpdateModules = 0x80; // TArray<UParticleModule*>
		constexpr auto OrbitModules = 0x90; // TArray<UParticleModuleOrbit*>
		constexpr auto EventReceiverModules = 0xa0; // TArray<UParticleModuleEventReceiverBase*>
		constexpr auto ConvertedModules = 0xb0; // char : 1
		constexpr auto PeakActiveParticles = 0xb4; // int32_t
	}

	namespace n_USynthComponentMoto {
		constexpr auto MotoSynthPreset = 0x6c0; // UMotoSynthPreset*
		constexpr auto RPM = 0x6c8; // float
	}

	namespace n_UParticleModuleAccelerationConstant {
		constexpr auto Acceleration = 0x38; // FVector
	}

	namespace n_APortalWarsTakedown {
		constexpr auto TakedownGameState = 0x6b8; // APortalWarsTakedownGameState*
		constexpr auto RespawnChangePerKill = 0x6c0; // int32_t
		constexpr auto RespawnChangePerDeath = 0x6c4; // int32_t
		constexpr auto MinRespawnTime = 0x6c8; // int32_t
		constexpr auto MaxRespawnTime = 0x6cc; // int32_t
		constexpr auto FinalKillScore = 0x6d0; // int32_t
	}

	namespace n_UBTDecorator_Probability {
		constexpr auto SuccessChance = 0x68; // float
	}

	namespace n_UPortalWarsModeSelectorEntryWidget {
		constexpr auto CustomIndicator = 0x420; // UWidget*
		constexpr auto EditButton = 0x680; // UPortalWarsButton*
	}

	namespace n_UBTDecorator_CheckGameMode {
		constexpr auto GameModeClass = 0x68; // APortalWarsGameMode*
	}

	namespace n_UMaterialExpressionCollectionParameter {
		constexpr auto Collection = 0x40; // UMaterialParameterCollection*
		constexpr auto ParameterName = 0x48; // FName
		constexpr auto ParameterId = 0x50; // FGuid
	}

	namespace n_UGameViewportClient {
		constexpr auto ViewportConsole = 0x40; // UConsole*
		constexpr auto DebugProperties = 0x48; // TArray<FDebugDisplayProperty>
		constexpr auto MaxSplitscreenPlayers = 0x68; // int32_t
		constexpr auto World = 0x78; // UWorld*
		constexpr auto GameInstance = 0x80; // UGameInstance*
	}

	namespace n_UMaterialExpressionComponentMask {
		constexpr auto Input = 0x40; // FExpressionInput
		constexpr auto R = 0x54; // char : 1
		constexpr auto G = 0x54; // char : 1
		constexpr auto B = 0x54; // char : 1
		constexpr auto A = 0x54; // char : 1
	}

	namespace n_UMovieSceneCompiledData {
		constexpr auto EvaluationTemplate = 0x28; // FMovieSceneEvaluationTemplate
		constexpr auto Hierarchy = 0x188; // FMovieSceneSequenceHierarchy
		constexpr auto EntityComponentField = 0x2a0; // FMovieSceneEntityComponentField
		constexpr auto TrackTemplateField = 0x390; // FMovieSceneEvaluationField
		constexpr auto DeterminismFences = 0x3c0; // TArray<FFrameTime>
		constexpr auto CompiledSignature = 0x3d0; // FGuid
		constexpr auto CompilerVersion = 0x3e0; // FGuid
		constexpr auto AccumulatedMask = 0x3f0; // FMovieSceneSequenceCompilerMaskStruct
		constexpr auto AllocatedMask = 0x3f1; // FMovieSceneSequenceCompilerMaskStruct
		constexpr auto AccumulatedFlags = 0x3f2; // EMovieSceneSequenceFlags
	}

	namespace n_AInteractiveFoliageActor {
		constexpr auto CapsuleComponent = 0x230; // UCapsuleComponent*
		constexpr auto TouchingActorEntryPosition = 0x238; // FVector
		constexpr auto FoliageVelocity = 0x244; // FVector
		constexpr auto FoliageForce = 0x250; // FVector
		constexpr auto FoliagePosition = 0x25c; // FVector
		constexpr auto FoliageDamageImpulseScale = 0x268; // float
		constexpr auto FoliageTouchImpulseScale = 0x26c; // float
		constexpr auto FoliageStiffness = 0x270; // float
		constexpr auto FoliageStiffnessQuadratic = 0x274; // float
		constexpr auto FoliageDamping = 0x278; // float
		constexpr auto MaxDamageImpulse = 0x27c; // float
		constexpr auto MaxTouchImpulse = 0x280; // float
		constexpr auto MaxForce = 0x284; // float
		constexpr auto Mass = 0x288; // float
	}

	namespace n_UEditableGameplayTagQueryExpression_NoExprMatch {
		constexpr auto Expressions = 0x28; // TArray<UEditableGameplayTagQueryExpression*>
	}

	namespace n_AGeometryCollectionRenderLevelSetActor {
		constexpr auto TargetVolumeTexture = 0x220; // UVolumeTexture*
		constexpr auto RayMarchMaterial = 0x228; // UMaterial*
		constexpr auto SurfaceTolerance = 0x230; // float
		constexpr auto Isovalue = 0x234; // float
		constexpr auto Enabled = 0x238; // bool
		constexpr auto RenderVolumeBoundingBox = 0x239; // bool
	}

	namespace n_UPortalWarsLockerEntryWidget {
		constexpr auto DisplayNameText = 0x438; // UTextBlock*
		constexpr auto DisplayImage = 0x440; // UImage*
		constexpr auto ThumbnailSwitcher = 0x448; // UWidgetSwitcher*
		constexpr auto NameTagBorder = 0x450; // UBorder*
		constexpr auto RarityIcon = 0x458; // UImage*
		constexpr auto EquippedIndicator = 0x460; // UWidget*
		constexpr auto LockedRoot = 0x468; // UWidget*
		constexpr auto BackgroundSwitcher = 0x470; // UWidgetSwitcher*
		constexpr auto SelectedAnimation = 0x478; // UWidgetAnimation*
		constexpr auto NumSkinsText = 0x490; // UTextBlock*
		constexpr auto ParentWidget = 0x498; // UPortalWarsLockerSubWidget*
		constexpr auto DebugPanel = 0x4a0; // UPanelWidget*
		constexpr auto IdText = 0x4a8; // UTextBlock*
		constexpr auto AvailabilityText = 0x4b0; // UTextBlock*
	}

	namespace n_UPortalWarsInventoryWidget {
		constexpr auto CurrentAmmoText = 0x2a8; // UTextBlock*
		constexpr auto ReserveAmmoText = 0x2b0; // UTextBlock*
		constexpr auto NumGrenadesText = 0x2b8; // UTextBlock*
		constexpr auto SecondaryRoot = 0x2c0; // UWidget*
		constexpr auto PrimaryWeaponNameText = 0x2c8; // UTextBlock*
		constexpr auto SecondaryWeaponNameText = 0x2d0; // UTextBlock*
		constexpr auto PrimaryWeaponImage = 0x2d8; // UImage*
		constexpr auto SecondaryWeaponImage = 0x2e0; // UImage*
		constexpr auto PrimaryWeaponImageSizeBox = 0x2e8; // USizeBox*
		constexpr auto SecondaryWeaponImageSizeBox = 0x2f0; // USizeBox*
	}

	namespace n_UNiagaraDataInterfaceArrayFloat3 {
		constexpr auto FloatData = 0x50; // TArray<FVector>
	}

	namespace n_UNiagaraComponentRendererProperties {
		constexpr auto ComponentType = 0x88; // USceneComponent*
		constexpr auto ComponentCountLimit = 0x90; // uint32_t
		constexpr auto EnabledBinding = 0x98; // FNiagaraVariableAttributeBinding
		constexpr auto RendererVisibilityTagBinding = 0xf0; // FNiagaraVariableAttributeBinding
		constexpr auto bAssignComponentsOnParticleID = 0x148; // bool
		constexpr auto bOnlyCreateComponentsOnParticleSpawn = 0x149; // bool
		constexpr auto RendererVisibility = 0x14c; // int32_t
		constexpr auto TemplateComponent = 0x150; // USceneComponent*
		constexpr auto PropertyBindings = 0x158; // TArray<FNiagaraComponentPropertyBinding>
	}

	namespace n_UPortalWarsKOTHHUDOverlayWidget {
		constexpr auto KOTHHillStatus = 0x260; // UPortalWarsKOTHHillStatusWidget*
	}

	namespace n_UMaterialExpressionRayTracingQualitySwitch {
		constexpr auto Normal = 0x40; // FExpressionInput
		constexpr auto RayTraced = 0x54; // FExpressionInput
	}

	namespace n_UMovieSceneSection {
		constexpr auto EvalOptions = 0x50; // FMovieSceneSectionEvalOptions
		constexpr auto Easing = 0x58; // FMovieSceneEasingSettings
		constexpr auto SectionRange = 0x90; // FMovieSceneFrameRange
		constexpr auto PreRollFrames = 0xa0; // FFrameNumber
		constexpr auto PostRollFrames = 0xa4; // FFrameNumber
		constexpr auto RowIndex = 0xa8; // int32_t
		constexpr auto OverlapPriority = 0xac; // int32_t
		constexpr auto bIsActive = 0xb0; // char : 1
		constexpr auto bIsLocked = 0xb0; // char : 1
		constexpr auto StartTime = 0xb4; // float
		constexpr auto EndTime = 0xb8; // float
		constexpr auto PrerollTime = 0xbc; // float
		constexpr auto PostrollTime = 0xc0; // float
		constexpr auto bIsInfinite = 0xc4; // char : 1
		constexpr auto bSupportsInfiniteRange = 0xc8; // bool
		constexpr auto BlendType = 0xc9; // FOptionalMovieSceneBlendType
	}

	namespace n_UGeometryCollectionCache {
		constexpr auto RecordedData = 0x28; // FRecordedTransformTrack
		constexpr auto SupportedCollection = 0x38; // UGeometryCollection*
		constexpr auto CompatibleCollectionState = 0x40; // FGuid
	}

	namespace n_UPortalWarsTutorialBookmarkWidget {
		constexpr auto MarksHorizontalBox = 0x260; // UHorizontalBox*
		constexpr auto CurrentMarkTexture = 0x268; // UTexture2D*
		constexpr auto IncompleteMarkTexture = 0x270; // UTexture2D*
		constexpr auto CompleteMarkTexture = 0x278; // UTexture2D*
	}

	namespace n_ULandscapeLayerInfoObject {
		constexpr auto LayerName = 0x28; // FName
		constexpr auto PhysMaterial = 0x30; // UPhysicalMaterial*
		constexpr auto Hardness = 0x38; // float
		constexpr auto LayerUsageDebugColor = 0x3c; // FLinearColor
	}

	namespace n_UFoliageType_InstancedStaticMesh {
		constexpr auto Mesh = 0x3b0; // UStaticMesh*
		constexpr auto OverrideMaterials = 0x3b8; // TArray<UMaterialInterface*>
		constexpr auto ComponentClass = 0x3c8; // UFoliageInstancedStaticMeshComponent*
	}

	namespace n_UInterpTrackAkAudioRTPC {
		constexpr auto Param = 0x90; // FString
		constexpr auto bPlayOnReverse = 0xa0; // char : 1
		constexpr auto bContinueRTPCOnMatineeEnd = 0xa0; // char : 1
	}

	namespace n_UPortalWarsColorPickerWidget {
		constexpr auto RedSlider = 0x368; // UPortalWarsSpinSliderWidget*
		constexpr auto GreenSlider = 0x370; // UPortalWarsSpinSliderWidget*
		constexpr auto BlueSlider = 0x378; // UPortalWarsSpinSliderWidget*
		constexpr auto SliderRoot = 0x380; // UWidget*
		constexpr auto SliderToggle = 0x388; // UCheckBox*
	}

	namespace n_UDistributionFloatParameterBase {
		constexpr auto ParameterName = 0x40; // FName
		constexpr auto MinInput = 0x48; // float
		constexpr auto MaxInput = 0x4c; // float
		constexpr auto MinOutput = 0x50; // float
		constexpr auto MaxOutput = 0x54; // float
		constexpr auto ParamMode = 0x58; // DistributionParamMode
	}

	namespace n_AShotgun {
		constexpr auto numPelletsPerShell = 0x768; // int32_t
		constexpr auto ReloadStartAnim = 0x770; // FWeaponAnimMontage
		constexpr auto ReloadInsertAnim = 0x780; // FWeaponAnimMontage
		constexpr auto ReloadStopAnim = 0x790; // FWeaponAnimMontage
		constexpr auto characterHitsMap = 0x7a8; // TMap<APortalWarsCharacter*, FDamageEvents>
	}

	namespace n_APhysicsVolume {
		constexpr auto TerminalVelocity = 0x258; // float
		constexpr auto Priority = 0x25c; // int32_t
		constexpr auto FluidFriction = 0x260; // float
		constexpr auto bWaterVolume = 0x264; // char : 1
		constexpr auto bPhysicsOnContact = 0x264; // char : 1
	}

	namespace n_UAkMusicSyncCallbackInfo {
		constexpr auto PlayingID = 0x30; // int32_t
		constexpr auto SegmentInfo = 0x34; // FAkSegmentInfo
		constexpr auto MusicSyncType = 0x58; // EAkCallbackType
		constexpr auto UserCueName = 0x60; // FString
	}

	namespace n_UMovieSceneAudioTrack {
		constexpr auto AudioSections = 0x80; // TArray<UMovieSceneSection*>
	}

	namespace n_UMaterialExpressionGIReplace {
		constexpr auto Default = 0x40; // FExpressionInput
		constexpr auto StaticIndirect = 0x54; // FExpressionInput
		constexpr auto DynamicIndirect = 0x68; // FExpressionInput
	}

	namespace n_USourceEffectPannerPreset {
		constexpr auto Settings = 0x98; // FSourceEffectPannerSettings
	}

	namespace n_USynthKnob {
		constexpr auto Value = 0x108; // float
		constexpr auto StepSize = 0x10c; // float
		constexpr auto MouseSpeed = 0x110; // float
		constexpr auto MouseFineTuneSpeed = 0x114; // float
		constexpr auto ShowTooltipInfo = 0x118; // char : 1
		constexpr auto ParameterName = 0x120; // FText
		constexpr auto ParameterUnits = 0x138; // FText
		constexpr auto ValueDelegate = 0x150; // FDelegate
		constexpr auto WidgetStyle = 0x160; // FSynthKnobStyle
		constexpr auto locked = 0x398; // bool
		constexpr auto IsFocusable = 0x399; // bool
		constexpr auto OnMouseCaptureBegin = 0x3a0; // FMulticastInlineDelegate
		constexpr auto OnMouseCaptureEnd = 0x3b0; // FMulticastInlineDelegate
		constexpr auto OnControllerCaptureBegin = 0x3c0; // FMulticastInlineDelegate
		constexpr auto OnControllerCaptureEnd = 0x3d0; // FMulticastInlineDelegate
		constexpr auto OnValueChanged = 0x3e0; // FMulticastInlineDelegate
	}

	namespace n_UParticleModuleVectorFieldScaleOverLife {
		constexpr auto VectorFieldScaleOverLife = 0x30; // UDistributionFloat*
		constexpr auto VectorFieldScaleOverLifeRaw = 0x38; // FRawDistributionFloat
	}

	namespace n_UMaterialExpressionSign {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UMovieSceneEntitySystemLinker {
		constexpr auto SystemGraph = 0x238; // FMovieSceneEntitySystemGraph
	}

	namespace n_UAudioImpulseResponse {
		constexpr auto ImpulseResponse = 0x28; // TArray<float>
		constexpr auto NumChannels = 0x38; // int32_t
		constexpr auto SampleRate = 0x3c; // int32_t
		constexpr auto NormalizationVolumeDb = 0x40; // float
		constexpr auto bTrueStereo = 0x44; // bool
		constexpr auto IRData = 0x48; // TArray<float>
	}

	namespace n_UControlPointMeshComponent {
		constexpr auto VirtualTextureMainPassMaxDrawDistance = 0x4e0; // float
	}

	namespace n_UInterpTrackEvent {
		constexpr auto EventTrack = 0x70; // TArray<FEventTrackKey>
		constexpr auto bFireEventsWhenForwards = 0x80; // char : 1
		constexpr auto bFireEventsWhenBackwards = 0x80; // char : 1
		constexpr auto bFireEventsWhenJumpingForwards = 0x80; // char : 1
		constexpr auto bUseCustomEventName = 0x80; // char : 1
	}

	namespace n_ULandscapeInfo {
		constexpr auto LandscapeActor = 0x28; // LazyObjectProperty
		constexpr auto LandscapeGuid = 0x44; // FGuid
		constexpr auto ComponentSizeQuads = 0x54; // int32_t
		constexpr auto SubsectionSizeQuads = 0x58; // int32_t
		constexpr auto ComponentNumSubsections = 0x5c; // int32_t
		constexpr auto DrawScale = 0x60; // FVector
		constexpr auto Proxies = 0x110; // TArray<ALandscapeStreamingProxy*>
	}

	namespace n_UPlatformEventsComponent {
		constexpr auto PlatformChangedToLaptopModeDelegate = 0xb0; // FMulticastInlineDelegate
		constexpr auto PlatformChangedToTabletModeDelegate = 0xc0; // FMulticastInlineDelegate
	}

	namespace n_USoundNodeBranch {
		constexpr auto BoolParameterName = 0x48; // FName
	}

	namespace n_UPortalWarsSpinSliderWidget {
		constexpr auto InputBox = 0x368; // USpinBox*
		constexpr auto InputSlider = 0x370; // USlider*
		constexpr auto BackgroundFillBar = 0x378; // UProgressBar*
		constexpr auto MinValue = 0x380; // float
		constexpr auto MaxValue = 0x384; // float
		constexpr auto ValueMultiplier = 0x388; // float
		constexpr auto StepSize = 0x38c; // float
		constexpr auto MaxFractionalDigits = 0x390; // int32_t
		constexpr auto bCommitValueOnScrub = 0x394; // bool
		constexpr auto SliderDefaultColor = 0x3a0; // FLinearColor
		constexpr auto SliderHoveredColor = 0x3b0; // FLinearColor
		constexpr auto SpinDefaultBackgroundImage = 0x3c0; // UTexture2D*
		constexpr auto SpinHoveredBackgroundImage = 0x3c8; // UTexture2D*
	}

	namespace n_UMovieScene2DTransformSection {
		constexpr auto TransformMask = 0xf0; // FMovieScene2DTransformMask
		constexpr auto Translation = 0xf8; // FMovieSceneFloatChannel [0x2]
		constexpr auto Rotation = 0x238; // FMovieSceneFloatChannel
		constexpr auto Scale = 0x2d8; // FMovieSceneFloatChannel [0x2]
		constexpr auto Shear = 0x418; // FMovieSceneFloatChannel [0x2]
	}

	namespace n_USoundfieldEffectBase {
		constexpr auto Settings = 0x28; // USoundfieldEffectSettingsBase*
	}

	namespace n_UMaterialExpressionSpeedTree {
		constexpr auto GeometryInput = 0x40; // FExpressionInput
		constexpr auto WindInput = 0x54; // FExpressionInput
		constexpr auto LODInput = 0x68; // FExpressionInput
		constexpr auto ExtraBendWS = 0x7c; // FExpressionInput
		constexpr auto GeometryType = 0x90; // ESpeedTreeGeometryType
		constexpr auto WindType = 0x91; // ESpeedTreeWindType
		constexpr auto LODType = 0x92; // ESpeedTreeLODType
		constexpr auto BillboardThreshold = 0x94; // float
		constexpr auto bAccurateWindVelocities = 0x98; // bool
	}

	namespace n_UPortalWarsMainMenuWidget {
		constexpr auto PlayMenu = 0x338; // UPortalWarsMenuWidget*
		constexpr auto BattlePassMenu = 0x340; // UPortalWarsMenuWidget*
		constexpr auto ReferralPassMenu = 0x348; // UPortalWarsMenuWidget*
		constexpr auto LockerMenu = 0x350; // UPortalWarsMenuWidget*
		constexpr auto CareerMenu = 0x358; // UPortalWarsMenuWidget*
		constexpr auto ItemShopMenu = 0x360; // UPortalWarsMenuWidget*
		constexpr auto ChallengesMenu = 0x368; // UPortalWarsMenuWidget*
		constexpr auto RewardCenterMenu = 0x370; // UPortalWarsMenuWidget*
		constexpr auto SocialMenu = 0x378; // UPortalWarsMenuWidget*
		constexpr auto LootboxMenu = 0x380; // UPortalWarsMenuWidget*
		constexpr auto MenuSelectDialogWidgetClass = 0x388; // UPortalWarsDialogWidget*
	}

	namespace n_USoundSubmixBase {
		constexpr auto ChildSubmixes = 0x28; // TArray<USoundSubmixBase*>
	}

	namespace n_UEndMatchCallbackProxy {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_UDestroySessionCallbackProxy {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_UParticleModuleRequired {
		constexpr auto Material = 0x30; // UMaterialInterface*
		constexpr auto MinFacingCameraBlendDistance = 0x38; // float
		constexpr auto MaxFacingCameraBlendDistance = 0x3c; // float
		constexpr auto EmitterOrigin = 0x40; // FVector
		constexpr auto EmitterRotation = 0x4c; // FRotator
		constexpr auto ScreenAlignment = 0x58; // EParticleScreenAlignment
		constexpr auto bUseLocalSpace = 0x59; // char : 1
		constexpr auto bKillOnDeactivate = 0x59; // char : 1
		constexpr auto bKillOnCompleted = 0x59; // char : 1
		constexpr auto SortMode = 0x5a; // EParticleSortMode
		constexpr auto bUseLegacyEmitterTime = 0x5b; // char : 1
		constexpr auto bRemoveHMDRoll = 0x5b; // char : 1
		constexpr auto bEmitterDurationUseRange = 0x5b; // char : 1
		constexpr auto EmitterDuration = 0x5c; // float
		constexpr auto SpawnRate = 0x60; // FRawDistributionFloat
		constexpr auto BurstList = 0x90; // TArray<FParticleBurst>
		constexpr auto EmitterDelay = 0xa0; // float
		constexpr auto EmitterDelayLow = 0xa4; // float
		constexpr auto bDelayFirstLoopOnly = 0xa8; // char : 1
		constexpr auto InterpolationMethod = 0xa9; // EParticleSubUVInterpMethod
		constexpr auto bScaleUV = 0xaa; // char : 1
		constexpr auto bEmitterDelayUseRange = 0xaa; // char : 1
		constexpr auto ParticleBurstMethod = 0xab; // EParticleBurstMethod
		constexpr auto bOverrideSystemMacroUV = 0xac; // char : 1
		constexpr auto bUseMaxDrawCount = 0xac; // char : 1
		constexpr auto OpacitySourceMode = 0xad; // EOpacitySourceMode
		constexpr auto EmitterNormalsMode = 0xae; // EEmitterNormalsMode
		constexpr auto bOrbitModuleAffectsVelocityAlignment = 0xaf; // char : 1
		constexpr auto SubImages_Horizontal = 0xb0; // int32_t
		constexpr auto SubImages_Vertical = 0xb4; // int32_t
		constexpr auto RandomImageTime = 0xb8; // float
		constexpr auto RandomImageChanges = 0xbc; // int32_t
		constexpr auto MacroUVPosition = 0xc0; // FVector
		constexpr auto MacroUVRadius = 0xcc; // float
		constexpr auto UVFlippingMode = 0xd0; // EParticleUVFlipMode
		constexpr auto BoundingMode = 0xd1; // ESubUVBoundingVertexCount
		constexpr auto bDurationRecalcEachLoop = 0xd2; // char : 1
		constexpr auto NormalsSphereCenter = 0xd4; // FVector
		constexpr auto AlphaThreshold = 0xe0; // float
		constexpr auto EmitterLoops = 0xe4; // int32_t
		constexpr auto CutoutTexture = 0xe8; // UTexture2D*
		constexpr auto MaxDrawCount = 0xf0; // int32_t
		constexpr auto EmitterDurationLow = 0xf4; // float
		constexpr auto NormalsCylinderDirection = 0xf8; // FVector
		constexpr auto NamedMaterialOverrides = 0x108; // TArray<FName>
	}

	namespace n_ACameraRig_Crane {
		constexpr auto CranePitch = 0x220; // float
		constexpr auto CraneYaw = 0x224; // float
		constexpr auto CraneArmLength = 0x228; // float
		constexpr auto bLockMountPitch = 0x22c; // bool
		constexpr auto bLockMountYaw = 0x22d; // bool
		constexpr auto TransformComponent = 0x230; // USceneComponent*
		constexpr auto CraneYawControl = 0x238; // USceneComponent*
		constexpr auto CranePitchControl = 0x240; // USceneComponent*
		constexpr auto CraneCameraMount = 0x248; // USceneComponent*
	}

	namespace n_UNiagaraSimulationStageGeneric {
		constexpr auto IterationSource = 0x40; // ENiagaraIterationSource
		constexpr auto Iterations = 0x44; // int32_t
		constexpr auto bSpawnOnly = 0x48; // char : 1
		constexpr auto bDisablePartialParticleUpdate = 0x48; // char : 1
		constexpr auto DataInterface = 0x50; // FNiagaraVariableDataInterfaceBinding
	}

	namespace n_URuntimeVirtualTexture {
		constexpr auto TileCount = 0x28; // int32_t
		constexpr auto TileSize = 0x2c; // int32_t
		constexpr auto TileBorderSize = 0x30; // int32_t
		constexpr auto MaterialType = 0x34; // ERuntimeVirtualTextureMaterialType
		constexpr auto bCompressTextures = 0x35; // bool
		constexpr auto bClearTextures = 0x36; // bool
		constexpr auto bSinglePhysicalSpace = 0x37; // bool
		constexpr auto bPrivateSpace = 0x38; // bool
		constexpr auto bAdaptive = 0x39; // bool
		constexpr auto bContinuousUpdate = 0x3a; // bool
		constexpr auto RemoveLowMips = 0x3c; // int32_t
		constexpr auto LODGroup = 0x40; // TextureGroup
		constexpr auto Size = 0x44; // int32_t
		constexpr auto StreamingTexture = 0x48; // URuntimeVirtualTextureStreamingProxy*
	}

	namespace n_UPortalWarsRadarMarkerWidget {
		constexpr auto MarkerSwitcher = 0x2d8; // UWidgetSwitcher*
		constexpr auto ZOffsetTrigger = 0x2e0; // float
		constexpr auto AboveImage = 0x2e8; // UImage*
		constexpr auto BelowImage = 0x2f0; // UImage*
	}

	namespace n_UPlatformInterfaceBase {
		constexpr auto AllDelegates = 0x28; // TArray<FDelegateArray>
	}

	namespace n_UAISense_Blueprint {
		constexpr auto ListenerDataType = 0x80; // UUserDefinedStruct*
		constexpr auto ListenerContainer = 0x88; // TArray<UAIPerceptionComponent*>
		constexpr auto UnprocessedEvents = 0x98; // TArray<UAISenseEvent*>
	}

	namespace n_APortalWarsGGHUD {
		constexpr auto GGHUDOverlayWidget = 0x400; // UPortalWarsGGHUDOverlayWidget*
		constexpr auto GGHUDOverlayWidgetClass = 0x408; // UPortalWarsGGHUDOverlayWidget*
	}

	namespace n_UOnsetNRT {
		constexpr auto Settings = 0x78; // UOnsetNRTSettings*
	}

	namespace n_URadialFalloff {
		constexpr auto Magnitude = 0xb0; // float
		constexpr auto MinRange = 0xb4; // float
		constexpr auto MaxRange = 0xb8; // float
		constexpr auto Default = 0xbc; // float
		constexpr auto Radius = 0xc0; // float
		constexpr auto Position = 0xc4; // FVector
		constexpr auto Falloff = 0xd0; // EFieldFalloffType
	}

	namespace n_UPortalWarsCTFHUDOverlayWidget {
		constexpr auto FlagResetStatus = 0x260; // UPortalWarsFlagResetStatusWidget*
	}

	namespace n_AMatineeActorCameraAnim {
		constexpr auto CameraAnim = 0x2c8; // UCameraAnim*
	}

	namespace n_UPortalWarsPausePlayersMenuWidget {
		constexpr auto PlayerEntryWidgetClass = 0x338; // UPortalWarsPlayerEntryWidget*
		constexpr auto PlayersPanel = 0x340; // UPanelWidget*
		constexpr auto PlayerActionsWidgetClass = 0x348; // UPortalWarsPlayerActionsWidget*
	}

	namespace n_UInterpData {
		constexpr auto InterpLength = 0x28; // float
		constexpr auto PathBuildTime = 0x2c; // float
		constexpr auto InterpGroups = 0x30; // TArray<UInterpGroup*>
		constexpr auto CurveEdSetup = 0x40; // UInterpCurveEdSetup*
		constexpr auto EdSectionStart = 0x48; // float
		constexpr auto EdSectionEnd = 0x4c; // float
		constexpr auto bShouldBakeAndPrune = 0x50; // char : 1
		constexpr auto CachedDirectorGroup = 0x58; // UInterpGroupDirector*
		constexpr auto AllEventNames = 0x60; // TArray<FName>
	}

	namespace n_UParticleModuleKillBox {
		constexpr auto LowerLeftCorner = 0x30; // FRawDistributionVector
		constexpr auto UpperRightCorner = 0x78; // FRawDistributionVector
		constexpr auto bAbsolute = 0xc0; // char : 1
		constexpr auto bKillInside = 0xc0; // char : 1
		constexpr auto bAxisAlignedAndFixedSize = 0xc0; // char : 1
	}

	namespace n_UARTrackedGeometry {
		constexpr auto UniqueId = 0x28; // FGuid
		constexpr auto LocalToTrackingTransform = 0x40; // FTransform
		constexpr auto LocalToAlignedTrackingTransform = 0x70; // FTransform
		constexpr auto TrackingState = 0xa0; // EARTrackingState
		constexpr auto UnderlyingMesh = 0xb0; // UMRMeshComponent*
		constexpr auto ObjectClassification = 0xb8; // EARObjectClassification
		constexpr auto LastUpdateFrameNumber = 0xd0; // int32_t
		constexpr auto DebugName = 0xe0; // FName
	}

	namespace n_UInterpTrackToggle {
		constexpr auto ToggleTrack = 0x70; // TArray<FToggleTrackKey>
		constexpr auto bActivateSystemEachUpdate = 0x80; // char : 1
		constexpr auto bActivateWithJustAttachedFlag = 0x80; // char : 1
		constexpr auto bFireEventsWhenForwards = 0x80; // char : 1
		constexpr auto bFireEventsWhenBackwards = 0x80; // char : 1
		constexpr auto bFireEventsWhenJumpingForwards = 0x80; // char : 1
	}

	namespace n_APortalWarsEvolutionGameState {
		constexpr auto TeamWeaponIndexes = 0x838; // TArray<char>
	}

	namespace n_USourceEffectFilterPreset {
		constexpr auto Settings = 0xb0; // FSourceEffectFilterSettings
	}

	namespace n_UNiagaraDataInterfaceGrid3D {
		constexpr auto NumCells = 0xd8; // FIntVector
		constexpr auto CellSize = 0xe4; // float
		constexpr auto NumCellsMaxAxis = 0xe8; // int32_t
		constexpr auto SetResolutionMethod = 0xec; // ESetResolutionMethod
		constexpr auto WorldBBoxSize = 0xf0; // FVector
	}

	namespace n_APortalWarsKOTHGameState {
		constexpr auto ActiveHill = 0x7c8; // APortalWarsKOTHHill*
		constexpr auto NextHill = 0x7d0; // APortalWarsKOTHHill*
	}

	namespace n_UPortalWarsRaceLeaderboardWidget {
		constexpr auto TypeText = 0x2f8; // UTextBlock*
		constexpr auto TypeComboBox = 0x300; // UComboBoxString*
		constexpr auto MapNameText = 0x308; // UTextBlock*
	}

	namespace n_UPortalWarsGamepadBindingRestoreDialogWidget {
		constexpr auto OnAcceptButtonClickedDelegate = 0x390; // FMulticastInlineDelegate
		constexpr auto ControllerPreset = 0x3a0; // UPortalWarsTextCarouselWidget*
		constexpr auto AcceptButton = 0x3a8; // UPortalWarsButtonWidget*
	}

	namespace n_UConstantQNRT {
		constexpr auto Settings = 0x78; // UConstantQNRTSettings*
	}

	namespace n_UComboBoxWidgetStyle {
		constexpr auto ComboBoxStyle = 0x30; // FComboBoxStyle
	}

	namespace n_UParticleModuleAcceleration {
		constexpr auto Acceleration = 0x38; // FRawDistributionVector
		constexpr auto bApplyOwnerScale = 0x80; // char : 1
	}

	namespace n_UMovieSceneHookSection {
		constexpr auto bRequiresRangedHook = 0xf8; // char : 1
		constexpr auto bRequiresTriggerHooks = 0xf8; // char : 1
	}

	namespace n_UPortalWarsChallengePanelWidget {
		constexpr auto EntriesPanel = 0x2a8; // UPanelWidget*
		constexpr auto ChallengeEntryWidgetClass = 0x2b0; // UPortalWarsChallengeEntryWidget*
		constexpr auto AlmostThereRoot = 0x2b8; // UWidget*
		constexpr auto AlmostTherePanel = 0x2c0; // UPanelWidget*
		constexpr auto ChallengesDisabledText = 0x2c8; // UTextBlock*
		constexpr auto ChallengesDisabledRoot = 0x2d0; // UOverlay*
		constexpr auto ChallengesButton = 0x2d8; // UPortalWarsButtonWidget*
		constexpr auto TimeDescriptionText = 0x2e8; // UTextBlock*
	}

	namespace n_UHLODProxy {
		constexpr auto ProxyMeshes = 0x28; // TArray<FHLODProxyMesh>
		constexpr auto HLODActors = 0x38; // TMap<UHLODProxyDesc*, FHLODProxyMesh>
	}

	namespace n_AOddballItem {
		constexpr auto OddballGameState = 0x6a0; // APortalWarsOddballGameState*
	}

	namespace n_UPortalWarsCheckListWidget {
		constexpr auto DefaultOptions = 0x368; // TArray<FText>
		constexpr auto CheckBoxPanel = 0x378; // UPanelWidget*
		constexpr auto CheckBoxWidgetClass = 0x380; // UPortalWarsCheckBoxWidget*
	}

	namespace n_APortalWarsRaceGameMode {
		constexpr auto NewRecordEvent = 0x6e0; // UAkAudioEvent*
	}

	namespace n_UAISense_Team {
		constexpr auto RegisteredEvents = 0x80; // TArray<FAITeamStimulusEvent>
	}

	namespace n_AFlagItemPickup {
		constexpr auto bAtInitialSpawn = 0x2c0; // bool
		constexpr auto TeamIndex = 0x2c1; // char
		constexpr auto CapsuleCollisionComp = 0x2d0; // UCapsuleComponent*
		constexpr auto FriendlyTeamFlagMaterial = 0x2d8; // UMaterialInstance*
		constexpr auto EnemyTeamFlagMaterial = 0x2e0; // UMaterialInstance*
		constexpr auto AlphaTeamFlagMaterial = 0x2e8; // UMaterialInstance*
		constexpr auto BravoTeamFlagMaterial = 0x2f0; // UMaterialInstance*
		constexpr auto CurrentTimeToReset = 0x2f8; // float
		constexpr auto CTFGameState = 0x308; // APortalWarsCTFGameState*
		constexpr auto BoxExtent = 0x310; // FVector
		constexpr auto BoxZOffset = 0x31c; // float
	}

	namespace n_AOnlineBeaconHostObject {
		constexpr auto BeaconTypeName = 0x220; // FString
		constexpr auto ClientBeaconActorClass = 0x230; // AOnlineBeaconClient*
		constexpr auto ClientActors = 0x238; // TArray<AOnlineBeaconClient*>
	}

	namespace n_UPortalWarsPartyInspectWidget {
		constexpr auto MuteButton = 0x3b0; // UPortalWarsButtonWidget*
		constexpr auto PromoteButton = 0x3b8; // UPortalWarsButtonWidget*
		constexpr auto KickButton = 0x3c0; // UPortalWarsButtonWidget*
		constexpr auto ViewProfileButton = 0x3c8; // UPortalWarsButtonWidget*
		constexpr auto PlayerEntry = 0x3d0; // UPortalWarsPlayerEntryWidget*
		constexpr auto Stats = 0x3d8; // UPortalWarsStatsEntryWidget*
	}

	namespace n_UAnimInstance {
		constexpr auto CurrentSkeleton = 0x28; // USkeleton*
		constexpr auto RootMotionMode = 0x30; // ERootMotionMode
		constexpr auto bUseMultiThreadedAnimationUpdate = 0x31; // char : 1
		constexpr auto bUsingCopyPoseFromMesh = 0x31; // char : 1
		constexpr auto bReceiveNotifiesFromLinkedInstances = 0x31; // char : 1
		constexpr auto bPropagateNotifiesToLinkedInstances = 0x31; // char : 1
		constexpr auto bQueueMontageEvents = 0x31; // char : 1
		constexpr auto OnMontageBlendingOut = 0x38; // FMulticastInlineDelegate
		constexpr auto OnMontageStarted = 0x48; // FMulticastInlineDelegate
		constexpr auto OnMontageEnded = 0x58; // FMulticastInlineDelegate
		constexpr auto OnAllMontageInstancesEnded = 0x68; // FMulticastInlineDelegate
		constexpr auto NotifyQueue = 0x100; // FAnimNotifyQueue
		constexpr auto ActiveAnimNotifyState = 0x170; // TArray<FAnimNotifyEvent>
	}

	namespace n_UNiagaraDataInterfaceCurve {
		constexpr auto Curve = 0x70; // FRichCurve
	}

	namespace n_UGameplayTagsManager {
		constexpr auto TagSources = 0x160; // TMap<FName, FGameplayTagSource>
		constexpr auto GameplayTagTables = 0x230; // TArray<UDataTable*>
	}

	namespace n_ANavModifierVolume {
		constexpr auto AreaClass = 0x260; // UNavArea*
		constexpr auto bMaskFillCollisionUnderneathForNavmesh = 0x268; // bool
	}

	namespace n_UPortalWarsKeybindOverlayWidget {
		constexpr auto TitleText = 0x3a0; // UTextBlock*
	}

	namespace n_UInputBehaviorSet {
		constexpr auto Behaviors = 0x28; // TArray<FBehaviorInfo>
	}

	namespace n_UAnnouncerInterface {
		constexpr auto AkAnnouncer = 0x50; // UPortalWarsAkComponent*
	}

	namespace n_UParticleEmitter {
		constexpr auto EmitterName = 0x28; // FName
		constexpr auto SubUVDataOffset = 0x30; // int32_t
		constexpr auto EmitterRenderMode = 0x34; // EEmitterRenderMode
		constexpr auto SignificanceLevel = 0x35; // EParticleSignificanceLevel
		constexpr auto bUseLegacySpawningBehavior = 0x37; // char : 1
		constexpr auto ConvertedModules = 0x37; // char : 1
		constexpr auto bIsSoloing = 0x37; // char : 1
		constexpr auto bCookedOut = 0x37; // char : 1
		constexpr auto bDisabledLODsKeepEmitterAlive = 0x37; // char : 1
		constexpr auto bDisableWhenInsignficant = 0x38; // char : 1
		constexpr auto LODLevels = 0x40; // TArray<UParticleLODLevel*>
		constexpr auto PeakActiveParticles = 0x50; // int32_t
		constexpr auto InitialAllocationCount = 0x54; // int32_t
		constexpr auto QualityLevelSpawnRateScale = 0x58; // float
		constexpr auto DetailModeBitmask = 0x5c; // uint32_t
	}

	namespace n_USoundfieldEndpointSubmix {
		constexpr auto SoundfieldEndpointType = 0x38; // FName
		constexpr auto EndpointSettingsClass = 0x40; // UAudioEndpointSettingsBase*
		constexpr auto EndpointSettings = 0x48; // USoundfieldEndpointSettingsBase*
		constexpr auto EncodingSettingsClass = 0x50; // USoundfieldEncodingSettingsBase*
		constexpr auto EncodingSettings = 0x58; // USoundfieldEncodingSettingsBase*
		constexpr auto SoundfieldEffectChain = 0x60; // TArray<USoundfieldEffectBase*>
	}

	namespace n_UPortalWarsRaceHUDOverlay {
		constexpr auto BookmarkWidget = 0x260; // URaceBookmarkWidget*
		constexpr auto CurrentGateNumText = 0x268; // UTextBlock*
		constexpr auto MapNameText = 0x270; // UTextBlock*
		constexpr auto CurrentTimeText = 0x278; // UTextBlock*
		constexpr auto RecordHolderNameText = 0x280; // UTextBlock*
		constexpr auto RecordTimeText = 0x288; // UTextBlock*
		constexpr auto RaceRoot = 0x2b8; // UWidget*
	}

	namespace n_USpinBox {
		constexpr auto Value = 0x108; // float
		constexpr auto ValueDelegate = 0x10c; // FDelegate
		constexpr auto WidgetStyle = 0x120; // FSpinBoxStyle
		constexpr auto Style = 0x408; // USlateWidgetStyleAsset*
		constexpr auto MinFractionalDigits = 0x410; // int32_t
		constexpr auto MaxFractionalDigits = 0x414; // int32_t
		constexpr auto bAlwaysUsesDeltaSnap = 0x418; // bool
		constexpr auto Delta = 0x41c; // float
		constexpr auto SliderExponent = 0x420; // float
		constexpr auto Font = 0x428; // FSlateFontInfo
		constexpr auto Justification = 0x480; // ETextJustify
		constexpr auto MinDesiredWidth = 0x484; // float
		constexpr auto ClearKeyboardFocusOnCommit = 0x488; // bool
		constexpr auto SelectAllTextOnCommit = 0x489; // bool
		constexpr auto ForegroundColor = 0x490; // FSlateColor
		constexpr auto OnValueChanged = 0x4b8; // FMulticastInlineDelegate
		constexpr auto OnValueCommitted = 0x4c8; // FMulticastInlineDelegate
		constexpr auto OnBeginSliderMovement = 0x4d8; // FMulticastInlineDelegate
		constexpr auto OnEndSliderMovement = 0x4e8; // FMulticastInlineDelegate
		constexpr auto bOverride_MinValue = 0x4f8; // char : 1
		constexpr auto bOverride_MaxValue = 0x4f8; // char : 1
		constexpr auto bOverride_MinSliderValue = 0x4f8; // char : 1
		constexpr auto bOverride_MaxSliderValue = 0x4f8; // char : 1
		constexpr auto MinValue = 0x4fc; // float
		constexpr auto MaxValue = 0x500; // float
		constexpr auto MinSliderValue = 0x504; // float
		constexpr auto MaxSliderValue = 0x508; // float
	}

	namespace n_UComboBox {
		constexpr auto Items = 0x108; // TArray<UObject*>
		constexpr auto OnGenerateWidgetEvent = 0x118; // FDelegate
		constexpr auto bIsFocusable = 0x128; // bool
	}

	namespace n_UCameraModifier {
		constexpr auto bDebug = 0x28; // char : 1
		constexpr auto bExclusive = 0x28; // char : 1
		constexpr auto Priority = 0x2c; // char
		constexpr auto CameraOwner = 0x30; // APlayerCameraManager*
		constexpr auto AlphaInTime = 0x38; // float
		constexpr auto AlphaOutTime = 0x3c; // float
		constexpr auto Alpha = 0x40; // float
	}

	namespace n_UEnvQueryGenerator {
		constexpr auto OptionName = 0x30; // FString
		constexpr auto ItemType = 0x40; // UEnvQueryItemType*
		constexpr auto bAutoSortTests = 0x48; // char : 1
	}

	namespace n_UHighlightsGetNumberAsync {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_AGameMode {
		constexpr auto MatchState = 0x2c0; // FName
		constexpr auto bDelayedStart = 0x2c8; // char : 1
		constexpr auto NumSpectators = 0x2cc; // int32_t
		constexpr auto NumPlayers = 0x2d0; // int32_t
		constexpr auto NumBots = 0x2d4; // int32_t
		constexpr auto MinRespawnDelay = 0x2d8; // float
		constexpr auto NumTravellingPlayers = 0x2dc; // int32_t
		constexpr auto EngineMessageClass = 0x2e0; // ULocalMessage*
		constexpr auto InactivePlayerArray = 0x2e8; // TArray<APlayerState*>
		constexpr auto InactivePlayerStateLifeSpan = 0x2f8; // float
		constexpr auto MaxInactivePlayers = 0x2fc; // int32_t
		constexpr auto bHandleDedicatedServerReplays = 0x300; // bool
	}

	namespace n_UAISenseEvent_Hearing {
		constexpr auto Event = 0x28; // FAINoiseEvent
	}

	namespace n_UAITask {
		constexpr auto OwnerController = 0x68; // AAIController*
	}

	namespace n_UPortalWarsCheckBoxWidget {
		constexpr auto CheckBox = 0x368; // UPortalWarsCheckBox*
	}

	namespace n_UPawnAction {
		constexpr auto ChildAction = 0x28; // UPawnAction*
		constexpr auto ParentAction = 0x30; // UPawnAction*
		constexpr auto OwnerComponent = 0x38; // UPawnActionsComponent*
		constexpr auto Instigator = 0x40; // UObject*
		constexpr auto BrainComp = 0x48; // UBrainComponent*
		constexpr auto bAllowNewSameClassInstance = 0x80; // char : 1
		constexpr auto bReplaceActiveSameClassInstance = 0x80; // char : 1
		constexpr auto bShouldPauseMovement = 0x80; // char : 1
		constexpr auto bAlwaysNotifyOnFinished = 0x80; // char : 1
	}

	namespace n_UWaveScalar {
		constexpr auto Magnitude = 0xb0; // float
		constexpr auto Position = 0xb4; // FVector
		constexpr auto Wavelength = 0xc0; // float
		constexpr auto Period = 0xc4; // float
		constexpr auto Function = 0xc8; // EWaveFunctionType
		constexpr auto Falloff = 0xc9; // EFieldFalloffType
	}

	namespace n_UAkWwiseTree {
		constexpr auto OnSelectionChanged = 0x108; // FMulticastInlineDelegate
		constexpr auto OnItemDragged = 0x118; // FMulticastInlineDelegate
	}

	namespace n_UGizmoAxisTranslationParameterSource {
		constexpr auto AxisSource = 0x90; // TScriptInterface<IGizmoAxisSource>
		constexpr auto TransformSource = 0xa0; // TScriptInterface<IGizmoTransformSource>
		constexpr auto Parameter = 0xb0; // float
		constexpr auto LastChange = 0xb4; // FGizmoFloatParameterChange
		constexpr auto CurTranslationAxis = 0xbc; // FVector
		constexpr auto CurTranslationOrigin = 0xc8; // FVector
		constexpr auto InitialTransform = 0xe0; // FTransform
	}

	namespace n_UMaterialExpressionTextureSampleParameter {
		constexpr auto ParameterName = 0x60; // FName
		constexpr auto ExpressionGUID = 0x68; // FGuid
		constexpr auto Group = 0x78; // FName
	}

	namespace n_UPortalWarsProgressionIconWidget {
		constexpr auto IconImage = 0x260; // UImage*
		constexpr auto NumberText = 0x268; // UTextBlock*
	}

	namespace n_UShowLoginUICallbackProxy {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_UToFloatField {
		constexpr auto IntField = 0xb0; // UFieldNodeInt*
	}

	namespace n_UARPoseComponent {
		constexpr auto ReplicatedPayload = 0x280; // FARPoseUpdatePayload
	}

	namespace n_UPortalWarsPlaylistGameModeEntry {
		constexpr auto DescriptionText = 0x420; // UTextBlock*
		constexpr auto DisplayImage = 0x428; // UImage*
		constexpr auto FeaturedIndicator = 0x430; // UWidget*
		constexpr auto FeaturedScrim = 0x438; // UWidget*
		constexpr auto NoteText = 0x440; // UTextBlock*
		constexpr auto CheckBoxSwitcher = 0x450; // UWidgetSwitcher*
	}

	namespace n_AGunImpactEffectManager {
		constexpr auto DefaultFX = 0x220; // UParticleSystem*
		constexpr auto ConcreteFX = 0x228; // UParticleSystem*
		constexpr auto DirtFX = 0x230; // UParticleSystem*
		constexpr auto WaterFX = 0x238; // UParticleSystem*
		constexpr auto SnowFX = 0x240; // UParticleSystem*
		constexpr auto MetalFX = 0x248; // UParticleSystem*
		constexpr auto WoodFX = 0x250; // UParticleSystem*
		constexpr auto GlassFX = 0x258; // UParticleSystem*
		constexpr auto GrassFX = 0x260; // UParticleSystem*
		constexpr auto FleshFX = 0x268; // UParticleSystem*
		constexpr auto BrickFX = 0x270; // UParticleSystem*
		constexpr auto ClothFX = 0x278; // UParticleSystem*
		constexpr auto RubberFX = 0x280; // UParticleSystem*
		constexpr auto PlasticFX = 0x288; // UParticleSystem*
		constexpr auto PortalWallFX = 0x290; // UParticleSystem*
		constexpr auto DefaultDecal = 0x298; // FDecalData
		constexpr auto BulletImpactEvent = 0x2a8; // UAkAudioEvent*
	}

	namespace n_UPostProcessComponent {
		constexpr auto Settings = 0x200; // FPostProcessSettings
		constexpr auto Priority = 0x750; // float
		constexpr auto BlendRadius = 0x754; // float
		constexpr auto BlendWeight = 0x758; // float
		constexpr auto bEnabled = 0x75c; // char : 1
		constexpr auto bUnbound = 0x75c; // char : 1
	}

	namespace n_UPortalWarsPurchaseButtonWidget {
		constexpr auto bGoToStoreIfNotEnough = 0x420; // bool
		constexpr auto PurchaseSwitcher = 0x428; // UWidgetSwitcher*
		constexpr auto CurrencyText = 0x430; // UTextBlock*
	}

	namespace n_UParticleModuleColor_Seeded {
		constexpr auto RandomSeedInfo = 0xb0; // FParticleRandomSeedInfo
	}

	namespace n_UParticleModuleSourceMovement {
		constexpr auto SourceMovementScale = 0x30; // FRawDistributionVector
	}

	namespace n_UPortalWarsRootHUDWidget {
		constexpr auto RootWidget = 0x2a8; // UCanvasPanel*
	}

	namespace n_UExpandableArea {
		constexpr auto Style = 0x110; // FExpandableAreaStyle
		constexpr auto BorderBrush = 0x230; // FSlateBrush
		constexpr auto BorderColor = 0x2b8; // FSlateColor
		constexpr auto bIsExpanded = 0x2e0; // bool
		constexpr auto MaxHeight = 0x2e4; // float
		constexpr auto HeaderPadding = 0x2e8; // FMargin
		constexpr auto AreaPadding = 0x2f8; // FMargin
		constexpr auto OnExpansionChanged = 0x308; // FMulticastInlineDelegate
		constexpr auto HeaderContent = 0x318; // UWidget*
		constexpr auto BodyContent = 0x320; // UWidget*
	}

	namespace n_UNiagaraDataInterfacePlatformSet {
		constexpr auto Platforms = 0x38; // FNiagaraPlatformSet
	}

	namespace n_UParticleModuleLocationSkelVertSurface {
		constexpr auto SourceType = 0x30; // ELocationSkelVertSurfaceSource
		constexpr auto UniversalOffset = 0x34; // FVector
		constexpr auto bUpdatePositionEachFrame = 0x40; // char : 1
		constexpr auto bOrientMeshEmitters = 0x40; // char : 1
		constexpr auto bInheritBoneVelocity = 0x40; // char : 1
		constexpr auto InheritVelocityScale = 0x44; // float
		constexpr auto SkelMeshActorParamName = 0x48; // FName
		constexpr auto ValidAssociatedBones = 0x50; // TArray<FName>
		constexpr auto bEnforceNormalCheck = 0x60; // char : 1
		constexpr auto NormalToCompare = 0x64; // FVector
		constexpr auto NormalCheckToleranceDegrees = 0x70; // float
		constexpr auto NormalCheckTolerance = 0x74; // float
		constexpr auto ValidMaterialIndices = 0x78; // TArray<int32_t>
		constexpr auto bInheritVertexColor = 0x88; // char : 1
		constexpr auto bInheritUV = 0x88; // char : 1
		constexpr auto InheritUVChannel = 0x8c; // uint32_t
	}

	namespace n_APortalWarsNeutralCTFGameState {
		constexpr auto Flag = 0x7c8; // AActor*
		constexpr auto FlagState = 0x7d0; // EFlagState
		constexpr auto CapturedFlagRespawnTime = 0x7d4; // float
	}

	namespace n_UEditableTextBox {
		constexpr auto Text = 0x108; // FText
		constexpr auto TextDelegate = 0x120; // FDelegate
		constexpr auto WidgetStyle = 0x130; // FEditableTextBoxStyle
		constexpr auto Style = 0x928; // USlateWidgetStyleAsset*
		constexpr auto HintText = 0x930; // FText
		constexpr auto HintTextDelegate = 0x948; // FDelegate
		constexpr auto Font = 0x958; // FSlateFontInfo
		constexpr auto ForegroundColor = 0x9b0; // FLinearColor
		constexpr auto BackgroundColor = 0x9c0; // FLinearColor
		constexpr auto ReadOnlyForegroundColor = 0x9d0; // FLinearColor
		constexpr auto IsReadOnly = 0x9e0; // bool
		constexpr auto IsPassword = 0x9e1; // bool
		constexpr auto MinimumDesiredWidth = 0x9e4; // float
		constexpr auto Padding = 0x9e8; // FMargin
		constexpr auto IsCaretMovedWhenGainFocus = 0x9f8; // bool
		constexpr auto SelectAllTextWhenFocused = 0x9f9; // bool
		constexpr auto RevertTextOnEscape = 0x9fa; // bool
		constexpr auto ClearKeyboardFocusOnCommit = 0x9fb; // bool
		constexpr auto SelectAllTextOnCommit = 0x9fc; // bool
		constexpr auto AllowContextMenu = 0x9fd; // bool
		constexpr auto KeyboardType = 0x9fe; // EVirtualKeyboardType
		constexpr auto VirtualKeyboardOptions = 0x9ff; // FVirtualKeyboardOptions
		constexpr auto VirtualKeyboardTrigger = 0xa00; // EVirtualKeyboardTrigger
		constexpr auto VirtualKeyboardDismissAction = 0xa01; // EVirtualKeyboardDismissAction
		constexpr auto Justification = 0xa02; // ETextJustify
		constexpr auto ShapedTextOptions = 0xa03; // FShapedTextOptions
		constexpr auto OnTextChanged = 0xa08; // FMulticastInlineDelegate
		constexpr auto OnTextCommitted = 0xa18; // FMulticastInlineDelegate
	}

	namespace n_AOnlineBeacon {
		constexpr auto BeaconConnectionInitialTimeout = 0x228; // float
		constexpr auto BeaconConnectionTimeout = 0x22c; // float
		constexpr auto NetDriver = 0x230; // UNetDriver*
	}

	namespace n_UPortalWarsGamepadBindingWidget {
		constexpr auto OnGamepadKeyBound = 0x2a8; // FMulticastInlineDelegate
		constexpr auto BindingButton = 0x2b8; // UPortalWarsButton*
		constexpr auto BindingText = 0x2c0; // UTextBlock*
		constexpr auto ButtonBackground = 0x2c8; // UImage*
		constexpr auto ButtonIconBox = 0x2d0; // UWidget*
		constexpr auto HoveredIndicator = 0x2d8; // UWidget*
		constexpr auto StandardColor = 0x2e0; // FSlateColor
		constexpr auto ActiveColor = 0x308; // FSlateColor
		constexpr auto BindingOverlayClass = 0x368; // UPortalWarsGamepadBindingOverlayWidget*
	}

	namespace n_APortalWarsTeamStart {
		constexpr auto SpawnTeam = 0x250; // int32_t
		constexpr auto bNotForPlayers = 0x254; // bool
		constexpr auto bNotForBots = 0x255; // bool
		constexpr auto bInitialSpawn = 0x256; // bool
	}

	namespace n_UPortalWarsHealthWidget {
		constexpr auto HealthText = 0x260; // UTextBlock*
		constexpr auto HealthBar = 0x268; // UProgressBar*
		constexpr auto HealthBarSizeBox = 0x270; // USizeBox*
		constexpr auto DamageHealthBar = 0x278; // UProgressBar*
		constexpr auto DamageIndicator = 0x280; // UWidget*
	}

	namespace n_UTestMovieSceneSequence {
		constexpr auto MovieScene = 0x60; // UMovieScene*
	}

	namespace n_USizeBoxSlot {
		constexpr auto Padding = 0x38; // FMargin
		constexpr auto HorizontalAlignment = 0x58; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x59; // EVerticalAlignment
	}

	namespace n_ACineCameraActor {
		constexpr auto LookatTrackingSettings = 0x7a0; // FCameraLookatTrackingSettings
	}

	namespace n_UNavLinkCustomComponent {
		constexpr auto NavLinkUserId = 0xe8; // uint32_t
		constexpr auto EnabledAreaClass = 0xf0; // UNavArea*
		constexpr auto DisabledAreaClass = 0xf8; // UNavArea*
		constexpr auto SupportedAgents = 0x100; // FNavAgentSelector
		constexpr auto LinkRelativeStart = 0x104; // FVector
		constexpr auto LinkRelativeEnd = 0x110; // FVector
		constexpr auto LinkDirection = 0x11c; // ENavLinkDirection
		constexpr auto bLinkEnabled = 0x120; // char : 1
		constexpr auto bNotifyWhenEnabled = 0x120; // char : 1
		constexpr auto bNotifyWhenDisabled = 0x120; // char : 1
		constexpr auto bCreateBoxObstacle = 0x120; // char : 1
		constexpr auto ObstacleOffset = 0x124; // FVector
		constexpr auto ObstacleExtent = 0x130; // FVector
		constexpr auto ObstacleAreaClass = 0x140; // UNavArea*
		constexpr auto BroadcastRadius = 0x148; // float
		constexpr auto BroadcastInterval = 0x14c; // float
		constexpr auto BroadcastChannel = 0x150; // ECollisionChannel
	}

	namespace n_UBaseBrushTool {
		constexpr auto BrushProperties = 0xc0; // UBrushBaseProperties*
		constexpr auto bInBrushStroke = 0xc8; // bool
		constexpr auto WorldToLocalScale = 0xcc; // float
		constexpr auto LastBrushStamp = 0xd0; // FBrushStampData
		constexpr auto PropertyClass = 0x188; // TSoftClassPtr<UObject>
		constexpr auto BrushStampIndicator = 0x1b0; // UBrushStampIndicator*
	}

	namespace n_AGeometryCollectionDebugDrawActor {
		constexpr auto WarningMessage = 0x220; // FGeometryCollectionDebugDrawWarningMessage
		constexpr auto SelectedRigidBody = 0x228; // FGeometryCollectionDebugDrawActorSelectedRigidBody
		constexpr auto bDebugDrawWholeCollection = 0x240; // bool
		constexpr auto bDebugDrawHierarchy = 0x241; // bool
		constexpr auto bDebugDrawClustering = 0x242; // bool
		constexpr auto HideGeometry = 0x243; // EGeometryCollectionDebugDrawActorHideGeometry
		constexpr auto bShowRigidBodyId = 0x244; // bool
		constexpr auto bShowRigidBodyCollision = 0x245; // bool
		constexpr auto bCollisionAtOrigin = 0x246; // bool
		constexpr auto bShowRigidBodyTransform = 0x247; // bool
		constexpr auto bShowRigidBodyInertia = 0x248; // bool
		constexpr auto bShowRigidBodyVelocity = 0x249; // bool
		constexpr auto bShowRigidBodyForce = 0x24a; // bool
		constexpr auto bShowRigidBodyInfos = 0x24b; // bool
		constexpr auto bShowTransformIndex = 0x24c; // bool
		constexpr auto bShowTransform = 0x24d; // bool
		constexpr auto bShowParent = 0x24e; // bool
		constexpr auto bShowLevel = 0x24f; // bool
		constexpr auto bShowConnectivityEdges = 0x250; // bool
		constexpr auto bShowGeometryIndex = 0x251; // bool
		constexpr auto bShowGeometryTransform = 0x252; // bool
		constexpr auto bShowBoundingBox = 0x253; // bool
		constexpr auto bShowFaces = 0x254; // bool
		constexpr auto bShowFaceIndices = 0x255; // bool
		constexpr auto bShowFaceNormals = 0x256; // bool
		constexpr auto bShowSingleFace = 0x257; // bool
		constexpr auto SingleFaceIndex = 0x258; // int32_t
		constexpr auto bShowVertices = 0x25c; // bool
		constexpr auto bShowVertexIndices = 0x25d; // bool
		constexpr auto bShowVertexNormals = 0x25e; // bool
		constexpr auto bUseActiveVisualization = 0x25f; // bool
		constexpr auto PointThickness = 0x260; // float
		constexpr auto LineThickness = 0x264; // float
		constexpr auto bTextShadow = 0x268; // bool
		constexpr auto TextScale = 0x26c; // float
		constexpr auto NormalScale = 0x270; // float
		constexpr auto AxisScale = 0x274; // float
		constexpr auto ArrowScale = 0x278; // float
		constexpr auto RigidBodyIdColor = 0x27c; // FColor
		constexpr auto RigidBodyTransformScale = 0x280; // float
		constexpr auto RigidBodyCollisionColor = 0x284; // FColor
		constexpr auto RigidBodyInertiaColor = 0x288; // FColor
		constexpr auto RigidBodyVelocityColor = 0x28c; // FColor
		constexpr auto RigidBodyForceColor = 0x290; // FColor
		constexpr auto RigidBodyInfoColor = 0x294; // FColor
		constexpr auto TransformIndexColor = 0x298; // FColor
		constexpr auto TransformScale = 0x29c; // float
		constexpr auto LevelColor = 0x2a0; // FColor
		constexpr auto ParentColor = 0x2a4; // FColor
		constexpr auto ConnectivityEdgeThickness = 0x2a8; // float
		constexpr auto GeometryIndexColor = 0x2ac; // FColor
		constexpr auto GeometryTransformScale = 0x2b0; // float
		constexpr auto BoundingBoxColor = 0x2b4; // FColor
		constexpr auto FaceColor = 0x2b8; // FColor
		constexpr auto FaceIndexColor = 0x2bc; // FColor
		constexpr auto FaceNormalColor = 0x2c0; // FColor
		constexpr auto SingleFaceColor = 0x2c4; // FColor
		constexpr auto VertexColor = 0x2c8; // FColor
		constexpr auto VertexIndexColor = 0x2cc; // FColor
		constexpr auto VertexNormalColor = 0x2d0; // FColor
		constexpr auto SpriteComponent = 0x2d8; // UBillboardComponent*
	}

	namespace n_USoundNodeSwitch {
		constexpr auto IntParameterName = 0x48; // FName
	}

	namespace n_UPortalWarsMatchCanceledWidget {
		constexpr auto CountdownText = 0x260; // UTextBlock*
	}

	namespace n_UModularSynthComponent {
		constexpr auto VoiceCount = 0x6c0; // int32_t
	}

	namespace n_UAnimSharingStateInstance {
		constexpr auto AnimationToPlay = 0x2b8; // UAnimSequence*
		constexpr auto PermutationTimeOffset = 0x2c0; // float
		constexpr auto PlayRate = 0x2c4; // float
		constexpr auto bStateBool = 0x2c8; // bool
		constexpr auto Instance = 0x2d0; // UAnimSharingInstance*
	}

	namespace n_UMaterialExpressionDesaturation {
		constexpr auto Input = 0x40; // FExpressionInput
		constexpr auto Fraction = 0x54; // FExpressionInput
		constexpr auto LuminanceFactors = 0x68; // FLinearColor
	}

	namespace n_UAnimationAsset {
		constexpr auto Skeleton = 0x38; // USkeleton*
		constexpr auto MetaData = 0x60; // TArray<UAnimMetaData*>
		constexpr auto AssetUserData = 0x70; // TArray<UAssetUserData*>
	}

	namespace n_UGizmoTransformProxyTransformSource {
		constexpr auto Proxy = 0x48; // UTransformProxy*
	}

	namespace n_UMaterialParameterCollectionInstance {
		constexpr auto Collection = 0x30; // UMaterialParameterCollection*
	}

	namespace n_UNiagaraDebugHUDSettings {
		constexpr auto Data = 0x48; // FNiagaraDebugHUDSettingsData
	}

	namespace n_UGameplayTask_TimeLimitedExecution {
		constexpr auto OnFinished = 0x68; // FMulticastInlineDelegate
		constexpr auto OnTimeExpired = 0x78; // FMulticastInlineDelegate
	}

	namespace n_UProceduralFoliageTile {
		constexpr auto FoliageSpawner = 0x28; // UProceduralFoliageSpawner*
		constexpr auto InstancesArray = 0xd0; // TArray<FProceduralFoliageInstance>
	}

	namespace n_UParticleModuleMeshRotation {
		constexpr auto StartRotation = 0x30; // FRawDistributionVector
		constexpr auto bInheritParent = 0x78; // char : 1
	}

	namespace n_UMaterialExpressionFeatureLevelSwitch {
		constexpr auto Default = 0x40; // FExpressionInput
	}

	namespace n_UMaterialExpressionDDX {
		constexpr auto Value = 0x40; // FExpressionInput
	}

	namespace n_AAkAcousticPortal {
		constexpr auto InitialState = 0x258; // AkAcousticPortalState
		constexpr auto ObstructionRefreshInterval = 0x25c; // float
		constexpr auto ObstructionCollisionChannel = 0x260; // ECollisionChannel
	}

	namespace n_UWidgetSwitcherSlot {
		constexpr auto Padding = 0x40; // FMargin
		constexpr auto HorizontalAlignment = 0x50; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x51; // EVerticalAlignment
	}

	namespace n_UBTTask_PlaySound {
		constexpr auto SoundToPlay = 0x70; // USoundCue*
	}

	namespace n_UInterpTrackColorProp {
		constexpr auto PropertyName = 0x90; // FName
	}

	namespace n_APortalWarsTeabagZone {
		constexpr auto KilledPlayerState = 0x220; // APlayerState*
		constexpr auto KilledCharacter = 0x228; // APortalWarsCharacter*
		constexpr auto TeabagMesh = 0x250; // UStaticMeshComponent*
	}

	namespace n_UMotionControllerComponent {
		constexpr auto PlayerIndex = 0x450; // int32_t
		constexpr auto Hand = 0x454; // EControllerHand
		constexpr auto MotionSource = 0x458; // FName
		constexpr auto bDisableLowLatencyUpdate = 0x460; // char : 1
		constexpr auto CurrentTrackingStatus = 0x464; // ETrackingStatus
		constexpr auto bDisplayDeviceModel = 0x465; // bool
		constexpr auto DisplayModelSource = 0x468; // FName
		constexpr auto CustomDisplayMesh = 0x470; // UStaticMesh*
		constexpr auto DisplayMeshMaterialOverrides = 0x478; // TArray<UMaterialInterface*>
		constexpr auto DisplayComponent = 0x4f0; // UPrimitiveComponent*
	}

	namespace n_UInterpTrackBoolProp {
		constexpr auto BoolTrack = 0x70; // TArray<FBoolTrackKey>
		constexpr auto PropertyName = 0x80; // FName
	}

}