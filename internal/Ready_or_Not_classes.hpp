namespace off {
	constexpr auto GNames = 0x523d080;
	constexpr auto GObjects = 0x52793e0;
	constexpr auto GWorld = 0x53c0d60;
}
struct UIntSerialization {
	uint16_t UnsignedInt16Variable; // 0x28
	uint32_t UnsignedInt32Variable; // 0x2c
	uint64_t UnsignedInt64Variable; // 0x30
	int8_t SignedInt8Variable; // 0x38
	int16_t SignedInt16Variable; // 0x3a
	int64_t SignedInt64Variable; // 0x40
	char UnsignedInt8Variable; // 0x48
	int32_t SignedInt32Variable; // 0x4c
};

struct UANIMBP_Zipcuffs_Placed_FP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2c8
	FAnimNode_Root AnimGraphNode_Root; // 0x348
};

struct AReadyOrNotLevelScript {
	EGenerationType WorldGenerationType; // 0x228
	UMaterial* TAASharpenFilter; // 0x230
	TArray<AActor*> SpawnedFromNotifyActors; // 0x238
	ACoverGenerator* CoverGenerator; // 0x248
	float FlashlightIntensity; // 0x250
	TArray<ABlockingVolume*> BlockingVolumesInLevel; // 0x258
	TArray<AOneWayBlockingVolume*> OneWayBlockingVolumesInLevel; // 0x268
	AConversationManager* ConversationManager; // 0x278
	TMap<ELightType, FName> LightingScenarios; // 0x280
	ELightType LightingType; // 0x2d0
	bool bDrawCoverDebug; // 0x2d1
	FLevelDataLookupTable LevelData; // 0x2d8
	UMusicData* MusicData; // 0x8d8
	UItemData* ItemData; // 0x8e0
	USoundData* SoundData; // 0x8e8
	FMulticastInlineDelegate Delegate_OnOutOfBoundsTimeLimitEnded; // 0x8f0
	float OutOfBounds_MaxTimeLimit; // 0x900
	float OutOfBoundsTimeRemaining; // 0x904
	TArray<AAmbientSound*> AudioSourcesInLevel; // 0x910
	TArray<AFMODAmbientSound*> FMODAudioSourcesInLevel; // 0x920
	bool bUseDarkness; // 0x940
	float MinimumLightIntensityForSource; // 0x944
	float DarknessSightRangeMultiplier; // 0x948
	bool bIncludeWorldLightsAsSources; // 0x94c
	bool bRaining; // 0x94d
	bool bSpawnOfficerAI; // 0x94e
	ULevelSequence* LevelSequenceMVP; // 0x950
	ULevelSequence* LevelSequenceTeam; // 0x958
	ULevelSequencePlayer* LastPlayedSequence; // 0x960
};

struct UTemplateSequence {
	UMovieScene* MovieScene; // 0x60
	TSoftClassPtr<UObject> BoundActorClass; // 0x68
	TSoftObjectPtr<AActor> BoundPreviewActor; // 0x90
	TMap<FGuid, FName> BoundActorComponents; // 0xb8
};

struct UGeometryCacheCodecBase {
	TArray<int32_t> TopologyRanges; // 0x28
};

struct USoundSourceBus {
	ESourceBusChannels SourceBusChannels; // 0x370
	float SourceBusDuration; // 0x374
	UAudioBus* AudioBus; // 0x378
	char bAutoDeactivateWhenSilent : 1; // 0x380
};

struct UCreateSessionCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UW_MissionEndBonus_C {
	UTextBlock* BonusAmount; // 0x260
	UTextBlock* BonusName; // 0x268
	UTextBlock* BonusScoreAmount; // 0x270
	FText BonusTxt; // 0x278
	FText BonusAmountTxt; // 0x290
	FText ScoreAmountTxt; // 0x2a8
};

struct AReadyOrNotAudioVolume {
	UBillboardComponent* BillboardComponent; // 0x258
	TArray<UFMODEvent*> ReverbEvents; // 0x260
	TArray<FFMODEventInstance> EventInstances; // 0x270
	bool bReverbActivated; // 0x280
	TArray<UFMODAudioComponent*> AttachedAudioComponents; // 0x288
};

struct AOptiwand {
	UAnimMontage* Montage_StartOptiwandADS; // 0x8f8
	UAnimMontage* Montage_EndOptiwandADS; // 0x900
	float CollisionTraceDistance; // 0x908
	UFMODEvent* FMODOptiwandMove; // 0x910
	UFMODEvent* FMODOptiwandEnterView; // 0x918
	UFMODEvent* FMODOptiwandExitView; // 0x920
	UMaterialInstance* MI_AIOutline; // 0x928
	USceneCaptureComponent2D* SceneCapture2D; // 0x938
	UTextureRenderTarget2D* CameraRenderTarget; // 0x940
	ACameraActor* CameraActor; // 0x948
	FVector LookAtPosition; // 0x950
	FRotator LookAtRotation; // 0x95c
	FRotator OptiwandCaptureRotation; // 0x968
	char bMirorring : 1; // 0x974
	bool bRepMirroring; // 0x975
	char bInUse : 1; // 0x976
	ADoor* LastUsedDoor; // 0x978
	UFMODAudioComponent* FMODOptiwandMoveAudioComp; // 0x980
	UFMODAudioComponent* FMODOptiwandEnterViewComp; // 0x988
	UFMODAudioComponent* FMODOptiwandExitViewComp; // 0x990
};

struct UPawnAction_Move {
	AActor* GoalActor; // 0x90
	FVector GoalLocation; // 0x98
	float AcceptableRadius; // 0xa4
	UNavigationQueryFilter* FilterClass; // 0xa8
	char bAllowStrafe : 1; // 0xb0
	char bFinishOnOverlap : 1; // 0xb0
	char bUsePathfinding : 1; // 0xb0
	char bAllowPartialPath : 1; // 0xb0
	char bProjectGoalToNavigation : 1; // 0xb0
	char bUpdatePathToGoal : 1; // 0xb0
	char bAbortChildActionOnPathChange : 1; // 0xb0
};

struct UMaterialParameterCollection {
	FGuid StateId; // 0x28
	TArray<FCollectionScalarParameter> ScalarParameters; // 0x38
	TArray<FCollectionVectorParameter> VectorParameters; // 0x48
};

struct ULoudnessNRT {
	ULoudnessNRTSettings* Settings; // 0x78
};

struct UParticleModuleVectorFieldRotation {
	FVector MinInitialRotation; // 0x30
	FVector MaxInitialRotation; // 0x3c
};

struct UAIPerceptionComponent {
	TArray<UAISenseConfig*> SensesConfig; // 0xb0
	UAISense* DominantSense; // 0xc0
	AAIController* AIOwner; // 0xd8
	FMulticastInlineDelegate OnPerceptionUpdated; // 0x160
	FMulticastInlineDelegate OnTargetPerceptionUpdated; // 0x170
	FMulticastInlineDelegate OnTargetPerceptionInfoUpdated; // 0x180
};

struct UParticleModuleVelocityBase {
	char bInWorldSpace : 1; // 0x30
	char bApplyOwnerScale : 1; // 0x30
};

struct UInterpTrackFloatProp {
	FName PropertyName; // 0x90
};

struct ALastKnownPositionActor {
	USceneComponent* SceneRoot; // 0x220
};

struct UIpConnection {
	float SocketErrorDisconnectDelay; // 0x1bf8
};

struct USourceEffectEnvelopeFollowerPreset {
	FSourceEffectEnvelopeFollowerSettings Settings; // 0x9c
};

struct UTextBlockWidgetStyle {
	FTextBlockStyle TextBlockStyle; // 0x30
};

struct UFieldSystemComponent {
	UFieldSystem* FieldSystem; // 0x450
	bool bIsWorldField; // 0x458
	bool bIsChaosField; // 0x459
	TArray<TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers; // 0x460
	FFieldObjectCommands ConstructionCommands; // 0x470
	FFieldObjectCommands BufferCommands; // 0x4a0
};

struct UFXSystemAsset {
	uint32_t MaxPoolSize; // 0x28
	uint32_t PoolPrimeSize; // 0x2c
};

struct UInterpTrackInstAnimControl {
	float LastUpdatePosition; // 0x28
};

struct UMagicLeapPlanesComponent {
	TArray<EMagicLeapPlaneQueryFlags> QueryFlags; // 0x1f8
	UBoxComponent* SearchVolume; // 0x208
	int32_t MaxResults; // 0x210
	float MinHolePerimeter; // 0x214
	float MinPlaneArea; // 0x218
	EMagicLeapPlaneQueryType QueryType; // 0x21c
	float SimilarityThreshold; // 0x220
	FMulticastInlineDelegate OnPlanesQueryResult; // 0x228
	FMulticastInlineDelegate OnPersistentPlanesQueryResult; // 0x238
};

struct UMaterialExpressionTextureSample {
	FExpressionInput Coordinates; // 0x48
};

struct ULandscapeSplineSegment {
	FLandscapeSplineSegmentConnection Connections[0x2]; // 0x28
	FInterpCurveVector SplineInfo; // 0x58
	TArray<FLandscapeSplineInterpPoint> Points; // 0x70
	FBox Bounds; // 0x80
	TArray<USplineMeshComponent*> LocalMeshComponents; // 0xa0
};

struct UGameplayTask {
	FName InstanceName; // 0x30
	ETaskResourceOverlapPolicy ResourceOverlapPolicy; // 0x3a
	UGameplayTask* ChildTask; // 0x60
};

struct UW_KeyDisplay_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* keyDisplayName; // 0x268
	UTextBlock* KeyName; // 0x270
	FInputEntry InputEntry; // 0x278
};

struct UPhysicsThrusterComponent {
	float ThrustStrength; // 0x1f8
};

struct UMaterialExpressionReflectionCapturePassSwitch {
	FExpressionInput Default; // 0x40
	FExpressionInput reflection; // 0x54
};

struct UMaterialExpressionAtmosphericFogColor {
	FExpressionInput WorldPosition; // 0x40
};

struct ULandscapeMeshProxyComponent {
	FGuid LandscapeGuid; // 0x4e0
	TArray<FIntPoint> ProxyComponentBases; // 0x4f0
	int8_t ProxyLOD; // 0x500
};

struct UCoverComponent {
	bool bDrawDebugCover; // 0xb0
};

struct AGS_SearchAndDestroy_C {
	USceneComponent* DefaultSceneRoot; // 0x6d0
};

struct UInterpTrackVectorBase {
	FInterpCurveVector VectorTrack; // 0x70
	float CurveTension; // 0x88
};

struct UEnvQueryGenerator_BlueprintBase {
	FText GeneratorsActionDescription; // 0x50
	UEnvQueryContext* Context; // 0x68
	UEnvQueryItemType* GeneratedItemType; // 0x70
};

struct UIntervalGizmo {
	UGizmoTransformChangeStateTarget* StateTarget; // 0x38
	UTransformProxy* TransformProxy; // 0x50
	TArray<UPrimitiveComponent*> ActiveComponents; // 0x58
	TArray<UInteractiveGizmo*> ActiveGizmos; // 0x68
	UGizmoComponentAxisSource* AxisYSource; // 0x90
	UGizmoComponentAxisSource* AxisZSource; // 0x98
};

struct UAnimNotify_SpawnWeapon {
	TArray<ABaseMagazineWeapon*> PotentialWeapons; // 0x38
};

struct UMaterialExpressionDepthFade {
	FExpressionInput InOpacity; // 0x40
	FExpressionInput FadeDistance; // 0x54
	float OpacityDefault; // 0x68
	float FadeDistanceDefault; // 0x6c
};

struct UInputComponent {
	TArray<FCachedKeyToActionInfo> CachedKeyToActionInfo; // 0x120
};

struct UAnimNotify_AIThrowPendingItem {
	FName BoneToSpawnOn; // 0x38
	FTransform RelativeTransform; // 0x40
	char bCustomThrowDirection : 1; // 0x70
	FRotator ThrowDirection; // 0x74
};

struct UGameplayTask_TimeLimitedExecution {
	FMulticastInlineDelegate OnFinished; // 0x68
	FMulticastInlineDelegate OnTimeExpired; // 0x78
};

struct UInterpTrackColorProp {
	FName PropertyName; // 0x90
};

struct ASecondary_Tec9_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1130
	UPointLightComponent* PointLight; // 0x1138
	USpotLightComponent* SpotLight; // 0x1140
};

struct USubmixEffectConvolutionReverbPreset {
	UAudioImpulseResponse* ImpulseResponse; // 0x68
	FSubmixEffectConvolutionReverbSettings Settings; // 0x70
	ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0x98
	bool bEnableHardwareAcceleration; // 0x99
};

struct AC2Explosive {
	bool bIsValidPlacement; // 0x8f8
	FHitResult LastGoodPlacement; // 0x8fc
	APlacedC2Explosive* LastPlacedC2Explosive; // 0x988
	float MaxPlacementDistance; // 0x990
	AActor* CurrentActorPlacement; // 0x998
	APlacedC2Explosive* PlacedC2Class; // 0x9a0
};

struct UMaterialExpressionTextureSampleParameterSubUV {
	char bBlend : 1; // 0x80
};

struct UW_DebugInfo_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* DebugName_Text; // 0x268
	UTextBlock* DebugValue_Text; // 0x270
	UImage* Image_54; // 0x278
	FText DebugName; // 0x280
	FSlateFontInfo DebugNameFont; // 0x298
	FSlateFontInfo DebugValueFont; // 0x2f0
};

struct UAnimSharingStateInstance {
	UAnimSequence* AnimationToPlay; // 0x2b8
	float PermutationTimeOffset; // 0x2c0
	float PlayRate; // 0x2c4
	bool bStateBool; // 0x2c8
	UAnimSharingInstance* Instance; // 0x2d0
};

struct APlacedZipcuffs {
	USkeletalMeshComponent* ZipcuffMesh; // 0x220
};

struct UNiagaraDataInterfaceGrid3D {
	FIntVector NumCells; // 0xd8
	float CellSize; // 0xe4
	int32_t NumCellsMaxAxis; // 0xe8
	ESetResolutionMethod SetResolutionMethod; // 0xec
	FVector WorldBBoxSize; // 0xf0
};

struct UMaterialExpressionArcsineFast {
	FExpressionInput Input; // 0x40
};

struct UMotivityTweakData {
	FMotivityTimeData PredictionData; // 0x28
	FMotivityCalibrationData CalibrationData; // 0x38
};

struct UEnvQueryGenerator_Donut {
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

struct UPlatformInterfaceWebResponse {
	FString OriginalURL; // 0x28
	int32_t ResponseCode; // 0x38
	int32_t Tag; // 0x3c
	FString StringResponse; // 0x40
	TArray<char> BinaryResponse; // 0x50
};

struct UInterpTrackLinearColorProp {
	FName PropertyName; // 0x90
};

struct ALOBBY_START_Blueprint_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280
};

struct UANIMBP_MP5A2_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x308
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x350
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x3d0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x4d8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x4f8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x518
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x5d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x688
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x708
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x788
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x808
	float Mag01Alpha; // 0x888
	char CurrentFireMode; // 0x88c
};

struct UNiagaraBaselineController_Basic {
	int32_t NumInstances; // 0x68
	TArray<UNiagaraComponent*> SpawnedComponents; // 0x70
};

struct UFriendsList_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2a0
	UScrollBox* ScrollBox_1; // 0x2a8
	float LastScrolloffset; // 0x2b0
};

struct UW_LoadoutClass_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278
	UWidgetAnimation* Anim_ButtonPressed; // 0x280
	UW_StandardButton_C* Button; // 0x288
	UImage* CollapseIcon_Image; // 0x290
	UWidgetSwitcher* ExpandCollapse_Switcher; // 0x298
	UImage* ExpandIcon_Image; // 0x2a0
	UVerticalBox* MainContainer; // 0x2a8
	UOverlay* SelectedItemInfo_Container; // 0x2b0
	UW_Text_C* txt_ItemName; // 0x2b8
	UW_Text_C* txt_LoadoutClass; // 0x2c0
	FLoadoutCategory LoadoutCategory; // 0x2c8
	TArray<UW_LoadoutItem_C*> LoadoutItems; // 0x330
	bool bCollapsed; // 0x340
	FMulticastInlineDelegate OnButtonClicked; // 0x348
	FMulticastInlineDelegate OnButtonHovered; // 0x358
	FMulticastInlineDelegate OnChildButtonClicked; // 0x368
	UW_LoadoutCategory_C* Owner; // 0x378
	bool bInMenuBounds; // 0x380
	bool bChildSelected; // 0x381
	bool bAnyKeyDown; // 0x382
	int32_t SelectedRow; // 0x384
	int32_t SelectedColumn; // 0x388
	FText DirectoryName; // 0x390
	UW_LoadoutItem_C* SelectedLoadoutItem; // 0x3a8
};

struct UBTService_RunEQS {
	FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x98
};

struct UNiagaraDataInterfaceChaosDestruction {
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

struct APrimary_G36C_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1130
};

struct ADoorwayWithoutDoor {
	UDoorwayComponent* Doorway; // 0x220
};

struct UInterpTrackAnimControl {
	FName SlotName; // 0x90
	TArray<FAnimControlTrackKey> AnimSeqs; // 0x98
	char bSkipAnimNotifiers : 1; // 0xa8
};

struct USkeleton {
	TArray<FBoneNode> BoneTree; // 0x38
	TArray<FTransform> RefLocalPoses; // 0x48
	FGuid VirtualBoneGuid; // 0x170
	TArray<FVirtualBone> VirtualBones; // 0x180
	TArray<USkeletalMeshSocket*> Sockets; // 0x190
	FSmartNameContainer SmartNames; // 0x1f0
	TArray<UBlendProfile*> BlendProfiles; // 0x270
	TArray<FAnimSlotGroup> SlotGroups; // 0x280
	TArray<UAssetUserData*> AssetUserData; // 0x380
};

struct USteamRequestGroupOfficersCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UParticleModuleMeshRotationRateMultiplyLife {
	FRawDistributionVector LifeMultiplier; // 0x30
};

struct AFlashLightTrackingPoint {
	UStaticMeshComponent* MeshComp; // 0x220
	UAIPerceptionStimuliSourceComponent* PerceptionStimuliComp; // 0x228
};

struct APickupEvidenceByTag {
	FName EvidenceTag; // 0x278
};

struct UDatasmithSpotLightComponentTemplate {
	float InnerConeAngle; // 0x30
	float OuterConeAngle; // 0x34
};

struct UParticleModuleKillBox {
	FRawDistributionVector LowerLeftCorner; // 0x30
	FRawDistributionVector UpperRightCorner; // 0x78
	char bAbsolute : 1; // 0xc0
	char bKillInside : 1; // 0xc0
	char bAxisAlignedAndFixedSize : 1; // 0xc0
};

struct UUserDefinedStruct {
	EUserDefinedStructureStatus Status; // 0xc0
	FGuid Guid; // 0xc4
};

struct UMovieSceneSkeletalAnimationTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x98
	bool bUseLegacySectionIndexBlend; // 0xa8
	FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams; // 0xb0
	bool bBlendFirstChildOfRoot; // 0xe0
};

struct UEditableText {
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

struct USynthSound {
	USynthComponent* OwningSynthComponent; // 0x3c0
};

struct UMaterialExpressionBlackBody {
	FExpressionInput Temp; // 0x40
};

struct UPropertyValue {
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

struct UBP_GameInstance_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x570
	TArray<FString> StreamedLevels; // 0x578
	FString ModeURL; // 0x588
};

struct UPhononGeometryComponent {
	bool ExportAllChildren; // 0x1f8
	uint32_t NumVertices; // 0x1fc
	uint32_t NumTriangles; // 0x200
};

struct AGM_GunGame_C {
	USceneComponent* DefaultSceneRoot; // 0x830
};

struct UVectorFieldAnimated {
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

struct UTextRenderComponent {
	FText Text; // 0x450
	UMaterialInterface* TextMaterial; // 0x468
	UFont* Font; // 0x470
	EHorizTextAligment HorizontalAlignment; // 0x478
	EVerticalTextAligment VerticalAlignment; // 0x479
	FColor TextRenderColor; // 0x47c
	float XScale; // 0x480
	float YScale; // 0x484
	float WorldSize; // 0x488
	float InvDefaultSize; // 0x48c
	float HorizSpacingAdjust; // 0x490
	float VertSpacingAdjust; // 0x494
	char bAlwaysRenderAsText : 1; // 0x498
};

struct UBlendRagdollAnimNotifyState {
	float TotalBlendDuration; // 0x30
	float CurrentBlendAmount; // 0x34
	float AngularVelocityStrength; // 0x38
	float OrientationStrength; // 0x3c
	float MaxAngularForce; // 0x40
	bool bDisableLimitsDuringTransition; // 0x44
	TArray<FConstraintLimitData> ConstraintLimitCaches; // 0x48
};

struct UMovieSceneEasingExternalCurve {
	UCurveFloat* Curve; // 0x30
};

struct UClothPhysicalMeshDataBase_Legacy {
	TArray<FVector> Vertices; // 0x28
	TArray<FVector> Normals; // 0x38
	TArray<uint32_t> Indices; // 0x48
	TArray<float> InverseMasses; // 0x58
	TArray<FClothVertBoneData> BoneData; // 0x68
	int32_t NumFixedVerts; // 0x78
	int32_t MaxBoneWeights; // 0x7c
	TArray<uint32_t> SelfCollisionIndices; // 0x80
};

struct UW_SkinItem_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278
	UWidgetAnimation* Anim_ButtonPressed; // 0x280
	UImage* BottonBorder_Image; // 0x288
	UW_StandardButton_C* Button; // 0x290
	UImage* ItemIcon_Image; // 0x298
	UImage* LeftBorder_Image; // 0x2a0
	USizeBox* RadioIcon_SizeBox; // 0x2a8
	UImage* RightBorder_Image; // 0x2b0
	UImage* SelectedRadioIcon_Image; // 0x2b8
	UImage* TopBorder_Image; // 0x2c0
	UW_Text_C* txt_ItemClassName; // 0x2c8
	UW_Text_C* txt_ItemName; // 0x2d0
	UImage* UnselectedRadioIcon_Image; // 0x2d8
	FText ItemName; // 0x2e0
	USkinComponent* SkinClass; // 0x2f8
	UW_SkinCategory_C* Owner; // 0x300
	bool bSelected; // 0x308
	FMulticastInlineDelegate OnButtonClicked; // 0x310
	FMulticastInlineDelegate OnButtonHovered; // 0x320
	FMulticastInlineDelegate OnButtonUnhovered; // 0x330
};

struct UPrimitiveComponent {
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
	char bVisibleInSceneCaptureOnly : 1; // 0x216
	char bHiddenInSceneCapture : 1; // 0x217
	EHasCustomNavigableGeometry bHasCustomNavigableGeometry; // 0x218
	ECanBeCharacterBase CanCharacterStepUpOn; // 0x21a
	FLightingChannels LightingChannels; // 0x21b
	ERendererStencilMask CustomDepthStencilWriteMask; // 0x21c
	int32_t CustomDepthStencilValue; // 0x220
	FCustomPrimitiveData CustomPrimitiveData; // 0x228
	FCustomPrimitiveData CustomPrimitiveDataInternal; // 0x238
	int32_t TranslucencySortPriority; // 0x250
	float TranslucencySortDistanceOffset; // 0x254
	int32_t VisibilityId; // 0x258
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x260
	int8_t VirtualTextureLodBias; // 0x270
	int8_t VirtualTextureCullMips; // 0x271
	int8_t VirtualTextureMinCoverage; // 0x272
	ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x273
	float LpvBiasMultiplier; // 0x278
	float BoundsScale; // 0x284
	TArray<AActor*> MoveIgnoreActors; // 0x298
	TArray<UPrimitiveComponent*> MoveIgnoreComponents; // 0x2a8
	FBodyInstance BodyInstance; // 0x2c8
	FMulticastSparseDelegate OnComponentHit; // 0x420
	FMulticastSparseDelegate OnComponentBeginOverlap; // 0x421
	FMulticastSparseDelegate OnComponentEndOverlap; // 0x422
	FMulticastSparseDelegate OnComponentWake; // 0x423
	FMulticastSparseDelegate OnComponentSleep; // 0x424
	FMulticastSparseDelegate OnBeginCursorOver; // 0x426
	FMulticastSparseDelegate OnEndCursorOver; // 0x427
	FMulticastSparseDelegate OnClicked; // 0x428
	FMulticastSparseDelegate OnReleased; // 0x429
	FMulticastSparseDelegate OnInputTouchBegin; // 0x42a
	FMulticastSparseDelegate OnInputTouchEnd; // 0x42b
	FMulticastSparseDelegate OnInputTouchEnter; // 0x42c
	FMulticastSparseDelegate OnInputTouchLeave; // 0x42d
	UPrimitiveComponent* LODParentPrimitive; // 0x448
};

struct ACableActor {
	UCableComponent* CableComponent; // 0x220
};

struct UStereoLayerShapeEquirect {
	FBox2D LeftUVRect; // 0x28
	FBox2D RightUVRect; // 0x3c
	FVector2D LeftScale; // 0x50
	FVector2D RightScale; // 0x58
	FVector2D LeftBias; // 0x60
	FVector2D RightBias; // 0x68
};

struct UNavigationGraphNodeComponent {
	FNavGraphNode Node; // 0x1f8
	UNavigationGraphNodeComponent* NextNodeComponent; // 0x210
	UNavigationGraphNodeComponent* PrevNodeComponent; // 0x218
};

struct UW_MissionEnd_Rating_Progress_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* GradeReveal; // 0x268
	UImage* Fade; // 0x270
	UImage* ProgressMeter; // 0x278
	UW_Text_C* txt_Debug; // 0x280
	UW_Text_C* txt_Debug_2; // 0x288
	UW_Text_C* txt_Debug_3; // 0x290
	UW_Text_C* txt_Grade; // 0x298
	UW_Text_C* txt_PlusMinus; // 0x2a0
	UW_Text_C* txt_Score; // 0x2a8
	UVerticalBox* VB_DEBUG; // 0x2b0
	float HighScore; // 0x2b8
	float ScorePercent; // 0x2bc
	FString Grades; // 0x2c0
	float Score; // 0x2d0
	UMaterialInstanceDynamic* ProgressDynMat; // 0x2d8
	FString Grade; // 0x2e0
	UW_MissionEnd_Rating_ScorePanel_C* ScorePanel; // 0x2f0
	UW_MissionEnd_Rating_ScorePanel_C* PenaltyPanel; // 0x2f8
	FScoreGroup ScoreData; // 0x300
	FScorePenaltyData PenaltyData; // 0x338
	int32_t CurrentScore; // 0x350
	int32_t TargetScore; // 0x354
	int32_t MaxScore; // 0x358
	bool AddingScore; // 0x35c
	bool Failed; // 0x35d
	bool Penalty; // 0x35e
	float AnimTime; // 0x360
	float AnimDuration; // 0x364
	float AnimProgress; // 0x368
	int32_t DEBUG COUNT; // 0x36c
	bool playingSound; // 0x370
	UFMODEvent* PenaltyCount; // 0x378
	UFMODEvent* scoreCount; // 0x380
	UFMODEvent* scoreGrade; // 0x388
	FFMODEventInstance countEvent; // 0x390
};

struct UInterpTrackInstProperty {
	TFieldPath<FProperty> InterpProperty; // 0x28
	UObject* PropertyOuterObjectInst; // 0x48
};

struct UMovieSceneSequenceTickManager {
	TArray<FMovieSceneSequenceActorPointers> SequenceActors; // 0x28
	UMovieSceneEntitySystemLinker* Linker; // 0x38
};

struct UHierarchicalLODSetup {
	TArray<FHierarchicalSimplification> HierarchicalLODSetup; // 0x28
	TSoftObjectPtr<UMaterialInterface> OverrideBaseMaterial; // 0x38
};

struct UMaterialExpressionClearCoatNormalCustomOutput {
	FExpressionInput Input; // 0x40
};

struct AFlareImpactEffects_C {
	USceneComponent* DefaultSceneRoot; // 0xcb0
};

struct ULandscapeSplinesComponent {
	TArray<ULandscapeSplineControlPoint*> ControlPoints; // 0x450
	TArray<ULandscapeSplineSegment*> Segments; // 0x460
	TArray<UMeshComponent*> CookedForeignMeshComponents; // 0x470
};

struct UDisarmStandaloneTrapActivity {
	ATrapActor* TrapToDisarm; // 0x1a8
};

struct UParticleModuleMeshRotation_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct UCameraComponent {
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

struct UVectorFieldStatic {
	int32_t SizeX; // 0x48
	int32_t SizeY; // 0x4c
	int32_t SizeZ; // 0x50
	bool bAllowCPUAccess; // 0x54
};

struct UNodeMappingContainer {
	TMap<FName, FNodeItem> SourceItems; // 0x28
	TMap<FName, FNodeItem> TargetItems; // 0x78
	TMap<FName, FName> SourceToTarget; // 0xc8
	TSoftObjectPtr<UObject> SourceAsset; // 0x118
	TSoftObjectPtr<UObject> TargetAsset; // 0x140
};

struct APainCausingVolume {
	char bPainCausing : 1; // 0x268
	float DamagePerSec; // 0x26c
	UDamageType* DamageType; // 0x270
	float PainInterval; // 0x278
	char bEntryPain : 1; // 0x27c
	char BACKUP_bPainCausing : 1; // 0x27c
	AController* DamageInstigator; // 0x280
};

struct UWidgetAnimationPlayCallbackProxy {
	FMulticastInlineDelegate Finished; // 0x28
};

struct UAnimNotify_CollectEvidence {
	char bCollectFinished : 1; // 0x38
};

struct AAllImpactEffects_C {
	USceneComponent* DefaultSceneRoot; // 0xcb0
};

struct UMaterialExpressionArctangent {
	FExpressionInput Input; // 0x40
};

struct UDamageType {
	char bCausedByWorld : 1; // 0x28
	char bScaleMomentumByMass : 1; // 0x28
	char bRadialDamageVelChange : 1; // 0x28
	float DamageImpulse; // 0x2c
	float DestructibleImpulse; // 0x30
	float DestructibleDamageSpreadScale; // 0x34
	float DamageFalloff; // 0x38
};

struct USoundEffectSourcePresetChain {
	TArray<FSourceEffectChainEntry> Chain; // 0x28
	char bPlayEffectChainTails : 1; // 0x38
};

struct UInvalidationBox {
	bool bCanCache; // 0x120
	bool CacheRelativeTransforms; // 0x121
};

struct UBorderSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct AArmor_Light_V2_C {
	UCapsuleComponent* Collision; // 0xa30
};

struct UNiagaraDataInterfaceArrayFloat4 {
	TArray<FVector4> FloatData; // 0x50
};

struct UParticleModuleMeshRotation {
	FRawDistributionVector StartRotation; // 0x30
	char bInheritParent : 1; // 0x78
};

struct UFieldSystemMetaDataFilter {
	EFieldFilterType FilterType; // 0xb0
};

struct UW_StandardTabControl_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UHorizontalBox* ButtonContainer; // 0x268
	UNamedSlot* Slot1; // 0x270
	UNamedSlot* Slot2; // 0x278
	UNamedSlot* Slot3; // 0x280
	UNamedSlot* Slot4; // 0x288
	UNamedSlot* Slot5; // 0x290
	UNamedSlot* Slot6; // 0x298
	UNamedSlot* Slot7; // 0x2a0
	UNamedSlot* Slot8; // 0x2a8
	UWidgetSwitcher* SlotSwitcher; // 0x2b0
	UTextBlock* DescriptionWidget; // 0x2b8
	TArray<FText> DescriptionTexts; // 0x2c0
	TArray<FText> ButtonNames; // 0x2d0
	int32_t StartingSlot; // 0x2e0
	ETextJustify TabTextJustification; // 0x2e4
	int32_t TabTextSize; // 0x2e8
	UFont* TabTextFont; // 0x2f0
	FMargin TabTextPadding; // 0x2f8
	FName TabTextTypeface; // 0x308
	StandardButtonStyles TabDisplayType; // 0x310
	bool TabForceUppercase; // 0x311
	bool TabForceUppercaseDescription; // 0x312
	FSlateColor TabTextColor; // 0x318
	FMulticastInlineDelegate OnTabSelected; // 0x340
	int32_t CurrentSlot; // 0x350
	TArray<UW_StandardRadioButton_C*> Buttons; // 0x358
	FMargin TabButtonPadding; // 0x368
	FSlateChildSize TabButtonSize; // 0x378
	EVerticalAlignment ContentVerticalAlignment; // 0x380
	EHorizontalAlignment ContentHorizontalAlignment; // 0x381
};

struct UDistributionVectorParameterBase {
	FName ParameterName; // 0x50
	FVector MinInput; // 0x58
	FVector MaxInput; // 0x64
	FVector MinOutput; // 0x70
	FVector MaxOutput; // 0x7c
	DistributionParamMode ParamModes[0x3]; // 0x88
};

struct UMaterialExpressionBumpOffset {
	FExpressionInput Coordinate; // 0x40
	FExpressionInput Height; // 0x54
	FExpressionInput HeightRatioInput; // 0x68
	float HeightRatio; // 0x7c
	float ReferencePlane; // 0x80
	uint32_t ConstCoordinate; // 0x84
};

struct UObjectiveMarkerComponent {
	char bEnabled : 1; // 0x5a0
	char bStartHidden : 1; // 0x5a0
	char bCustomLocation : 1; // 0x5a0
	char bFadeOffscreen : 1; // 0x5a0
	char bDistanceScaleIcon : 1; // 0x5a0
	char bCompletelyFadeWhenOverlappingOtherWidgets : 1; // 0x5a0
	char bCompletelyFadeWhenClose : 1; // 0x5a0
	float FadeAtDistance_Close; // 0x5a4
	char bCompletelyFadeWhenFar : 1; // 0x5a8
	float FadeAtDistance_Far; // 0x5ac
	char bHideDistanceInfo : 1; // 0x5b0
	float HideDistanceInfoAtDistance; // 0x5b4
	char bHideDirectionalArrow : 1; // 0x5b8
	char bDisplayMarkerText : 1; // 0x5b8
	FText MarkerText; // 0x5c0
	UObjectiveMarkerWidget* MarkerWidgetClass; // 0x5d8
	FSlateBrush IconBrush; // 0x5e0
	FLinearColor IconColorAndOpacity; // 0x668
	FVector2D IconSize; // 0x678
	char bDebug : 1; // 0x680
	UObjectiveMarkerWidget* ObjectiveMarkerWidget_Offscreen; // 0x688
	UObjectiveMarkerWidget* ObjectiveMarkerWidget_Onscreen; // 0x690
	bool bIsOffscreen; // 0x698
	bool bRequestingFadeOut; // 0x699
};

struct AEQSTestingPawn {
	UEnvQuery* QueryTemplate; // 0x4c0
	TArray<FEnvNamedValue> QueryParams; // 0x4c8
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

struct UMaterialExpressionPerInstanceCustomData {
	FExpressionInput DefaultValue; // 0x40
	float ConstDefaultValue; // 0x54
	uint32_t DataIndex; // 0x58
};

struct AFormationActor {
	AActor* FollowActor; // 0x220
	int32_t MaxPositions; // 0x228
	float MaxRange; // 0x22c
	UCapsuleComponent* AlphaCapsule; // 0x230
	TArray<UBillboardComponent*> Positions; // 0x238
};

struct UThrowItemThroughDoorActivity {
	ABaseItem* ThrowItemClass; // 0x1d8
	FMulticastInlineDelegate OnThrowReady; // 0x1e0
	FMulticastInlineDelegate OnThrowingItem; // 0x1f0
	ABaseItem* ThrownItem; // 0x208
};

struct ACoverGenerator {
	bool ForceRefresh; // 0x220
	bool bRegenerateAtBeginPlay; // 0x221
	bool bRegenerateAtNavigationRebuilt; // 0x222
	float SegmentLength; // 0x224
	float MaxSegDist; // 0x228
	float CharHeight; // 0x22c
	float StepDistTrace; // 0x230
	float TraceLength; // 0x234
	float MinSpaceBetweenValidPoints; // 0x238
	float SphereSize; // 0x23c
	float WidthMaxAgent; // 0x240
	float HeightMaxCrouching; // 0x244
	float HeightMaxStanding; // 0x248
	float OffsetWhenLeaningSides; // 0x24c
	float OffsetFrontAim; // 0x250
	bool bDraw1AllSegmentPointsTested; // 0x254
	bool bDraw2SegmentPointsWithinBounds; // 0x255
	bool bDraw3SimpleCoverGeometryTest; // 0x256
	bool bDraw4SecondPassTracesSides; // 0x257
	bool bDraw4SecondPassTracesSidesFrontAndBottom; // 0x258
	bool bDraw5SecondPassArrows; // 0x259
	bool DebugDrawAllPoints; // 0x25a
	bool DebugDrawAllBusyPoints; // 0x25b
	bool DebugDisplayLog; // 0x25c
	float DebugDistance; // 0x260
	bool bDrawOctreeBounds; // 0x264
	TArray<UCoverPoint*> AllCoverPoints; // 0x270
	TArray<UCoverPoint*> CoverPointsCurrentlyUsed; // 0x280
};

struct UNiagaraRendererProperties {
	FNiagaraPlatformSet Platforms; // 0x28
	int32_t SortOrderHint; // 0x58
	ENiagaraRendererMotionVectorSetting MotionVectorSetting; // 0x5c
	bool bIsEnabled; // 0x60
	bool bMotionBlurEnabled; // 0x61
};

struct UMotoSynthSource {
	bool bConvertTo8Bit; // 0x28
	float DownSampleFactor; // 0x2c
	FRuntimeFloatCurve RPMCurve; // 0x30
	TArray<float> SourceData; // 0xb8
	TArray<int16_t> SourceDataPCM; // 0xc8
	int32_t SourceSampleRate; // 0xd8
	TArray<FGrainTableEntry> GrainTable; // 0xe0
};

struct UPlaneFalloff {
	float Magnitude; // 0xb0
	float MinRange; // 0xb4
	float MaxRange; // 0xb8
	float Default; // 0xbc
	float Distance; // 0xc0
	FVector Position; // 0xc4
	FVector Normal; // 0xd0
	EFieldFalloffType Falloff; // 0xdc
};

struct UW_SpectatorCharacter_HUD_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278
	UWidgetAnimation* CenterPrintShow; // 0x280
	UWidgetAnimation* CenterPrintHide; // 0x288
	UWidgetAnimation* ShowReinforcements; // 0x290
	UWidgetAnimation* ShowDeathView; // 0x298
	UW_RichChatBox_C* BP_RichChatBox; // 0x2a0
	UTextBlock* CenterprintText; // 0x2a8
	UCanvasPanel* DeathViewCanvasCOOP; // 0x2b0
	UCanvasPanel* DeathViewCanvasPvP; // 0x2b8
	UWidgetSwitcher* DeathViewSwitcher; // 0x2c0
	UTextBlock* HeadCamTxt; // 0x2c8
	UVerticalBox* SpectatingBox; // 0x2d0
	UTextBlock* SpectatingNameText; // 0x2d8
	UTextBlock* TextBlock_119; // 0x2e0
	UTextBlock* TextBlock_198; // 0x2e8
	UTextBlock* Vote_Hotkeys; // 0x2f0
	UTextBlock* Vote_StarterName; // 0x2f8
	UTextBlock* Vote_TimeLeft; // 0x300
	UTextBlock* Vote_VoteName; // 0x308
	UTextBlock* Vote_Voters; // 0x310
	UVerticalBox* VotingDisplay; // 0x318
	UW_COOPDeathScreen_C* W_COOPDeathScreen; // 0x320
	UW_PvPDeathScreen_C* W_PvPDeathScreen; // 0x328
	FText SpectateControlsFormat; // 0x330
	FText SpectateControlsOnlyPrevious; // 0x348
	FText SpectateControlsOnlyNext; // 0x360
	float TimeUntilDeathViewAppears; // 0x378
	bool bStartedSpectating; // 0x37c
	bool bShownDeathView; // 0x37d
	float DeltaTime; // 0x380
	bool StartedShowingCenterPrint; // 0x384
	float CenterPrintTime; // 0x388
	bool CancelTick; // 0x38c
};

struct UEdGraph {
	UEdGraphSchema* Schema; // 0x28
	TArray<UEdGraphNode*> Nodes; // 0x30
	char bEditable : 1; // 0x40
	char bAllowDeletion : 1; // 0x40
	char bAllowRenaming : 1; // 0x40
};

struct UDistributionFloat {
	char bCanBeBaked : 1; // 0x30
	char bBakedDataSuccesfully : 1; // 0x30
};

struct UBTTask_BlackboardBase {
	FBlackboardKeySelector BlackboardKey; // 0x70
};

struct USynthComponentMonoWaveTable {
	FMulticastInlineDelegate OnTableAltered; // 0x6c0
	FMulticastInlineDelegate OnNumTablesChanged; // 0x6d0
	UMonoWaveTableSynthPreset* CurrentPreset; // 0x6e0
};

struct APlayerStart_VIP_Spawn {
	char bHasVisited : 1; // 0x250
	FText VIPSpawnDescriptor; // 0x258
	int32_t SuffixNumber; // 0x270
	UBoxComponent* SpawnBox; // 0x278
	UTextRenderComponent* TextRender; // 0x280
	UArrowComponent* SpawnDirection; // 0x288
};

struct APlayerHUD {
	UUserWidget* PlayerHUD; // 0x310
};

struct UNiagaraDataInterfaceVolumeTexture {
	UVolumeTexture* Texture; // 0x38
};

struct UW_WeaponWheel_ItemStat_Range_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x840
};

struct UMatineeCameraShake {
	float OscillationDuration; // 0xa8
	float OscillationBlendInTime; // 0xac
	float OscillationBlendOutTime; // 0xb0
	FROscillator RotOscillation; // 0xb4
	FVOscillator LocOscillation; // 0xd8
	FFOscillator FOVOscillation; // 0xfc
	float AnimPlayRate; // 0x108
	float AnimScale; // 0x10c
	float AnimBlendInTime; // 0x110
	float AnimBlendOutTime; // 0x114
	float RandomAnimSegmentDuration; // 0x118
	UCameraAnim* Anim; // 0x120
	UCameraAnimationSequence* AnimSequence; // 0x128
	char bRandomAnimSegment : 1; // 0x130
	float OscillatorTimeRemaining; // 0x134
	UCameraAnimInst* AnimInst; // 0x138
	USequenceCameraShakePattern* SequenceShakePattern; // 0x180
};

struct UBrainComponent {
	UBlackboardComponent* BlackboardComp; // 0xb8
	AAIController* AIOwner; // 0xc0
};

struct UEditableGameplayTagQueryExpression_AllExprMatch {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
};

struct ANavLinkProxy {
	TArray<FNavigationLink> PointLinks; // 0x230
	TArray<FNavigationSegmentLink> SegmentLinks; // 0x240
	UNavLinkCustomComponent* SmartLinkComp; // 0x250
	bool bSmartLinkIsRelevant; // 0x258
	FMulticastInlineDelegate OnSmartLinkReached; // 0x260
};

struct ABP_BallisticShield_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x940
	UFMODAudioComponent* FMOD_3P_Hit; // 0x948
	float GlassPhaseParam; // 0x950
};

struct UInputSettings {
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

struct UBTTaskNode {
	TArray<UBTService*> Services; // 0x58
	char bIgnoreRestartSelf : 1; // 0x68
};

struct ALODActor {
	UStaticMeshComponent* StaticMeshComponent; // 0x220
	TMap<FHLODInstancingKey, UInstancedStaticMeshComponent*> InstancedStaticMeshComponents; // 0x228
	UHLODProxy* Proxy; // 0x278
	FName Key; // 0x280
	float LODDrawDistance; // 0x288
	int32_t LODLevel; // 0x28c
	TArray<AActor*> SubActors; // 0x290
	char CachedNumHLODLevels; // 0x2a0
};

struct UReadyOrNotGameUserSettings {
	float MasterSoundVolume; // 0x120
	float MusicSoundVolume; // 0x124
	float UISoundVolume; // 0x128
	float SFXSoundVolume; // 0x12c
	float VOIPVolume; // 0x130
	bool bHitmarkerSfxEnabled; // 0x134
	float MouseSensitivity; // 0x138
	float FreelookSensitivity; // 0x13c
	FString TargetLocale; // 0x140
	float FieldOfView; // 0x150
	float LadderRollSensitivity; // 0x154
	bool bToggleADS; // 0x158
	int32_t MaxShellsInWorld; // 0x15c
	float MaxShellLifeTime; // 0x160
	bool bUseMeshPainting; // 0x164
	FString LastConnectedServerIP; // 0x168
	float IconScale; // 0x178
	float QuickThrowScale; // 0x17c
	int32_t FireModeDisplayOption; // 0x180
	int32_t TeamViewFPS; // 0x184
	bool bShowFPS; // 0x188
	bool bShowHUD; // 0x189
	bool bShowCompass; // 0x18a
	bool bShowWeaponHUD; // 0x18b
	bool bShowMagazineHUD; // 0x18c
	bool bShowChat; // 0x18d
	bool bEnableHUDSwaying; // 0x18e
	bool bShowHotkeyHints; // 0x18f
	bool bShowHealthIcons; // 0x190
	bool bShowCommandContextHint; // 0x191
	bool bZoomADS; // 0x192
	EScoreReadoutMode ScoreReadoutMode; // 0x193
	ESwatCommand DefaultCommand; // 0x194
	ESwatCommand DefaultDoorUnknownCommand; // 0x195
	ESwatCommand DefaultDoorOpenCommand; // 0x196
	ESwatCommand DefaultDoorLockedCommand; // 0x197
	ESwatCommand DefaultDoorUnlockedCommand; // 0x198
	int32_t DefaultCommandOption; // 0x19c
	int32_t DefaultDoorUnknownCommandOption; // 0x1a0
	int32_t DefaultDoorOpenCommandOption; // 0x1a4
	int32_t DefaultDoorLockedCommandOption; // 0x1a8
	int32_t DefaultDoorUnlockedCommandOption; // 0x1ac
	bool bCurvedHUD; // 0x1b0
	bool b2DReloadIcons; // 0x1b1
	bool bShowPlayerNames; // 0x1b2
	bool bShowPlayerIcon; // 0x1b3
	bool bShowMultiplayerSpeeds; // 0x1b4
	bool bShowCommandMarkers; // 0x1b5
	bool bShowTeamStatus; // 0x1b6
	float PiPFPS; // 0x1b8
	bool bDepthOfField; // 0x1bc
	bool bMotionBlur; // 0x1bd
	int32_t MotionBlurQuality; // 0x1c0
	float PiPResolutionScale; // 0x1c4
	float SafeZoneX; // 0x1c8
	float SafeZoneY; // 0x1cc
	int32_t GraphicsPresetIndex; // 0x1d0
	bool bShowButtonPrompts; // 0x1d4
	bool bInvertMousePitch; // 0x1d5
	bool bInvertMouseYaw; // 0x1d6
	bool bExperimentalFeatures; // 0x1d7
	bool bShowControlsOnScreen; // 0x1d8
	bool bShowHesitationBar; // 0x1d9
	bool bRTXEnabled; // 0x1da
	bool bRTXReflectionsEnabled; // 0x1db
	bool bRTXShadowsEnabled; // 0x1dc
	bool bRTXAmbientOcclusionEnabled; // 0x1dd
	int32_t DlssQualitySetting; // 0x1e0
	int32_t FSRQualitySetting; // 0x1e4
	float MicInputGain; // 0x1e8
	bool bFrameLimitEnabled; // 0x1ec
	EItemSelectionInterfaceType ItemSelectionInterface; // 0x1ed
	EGrenadeThrowSettingType GrenadeThrowType; // 0x1ee
	EShotgunReloadType ShotgunLoadType; // 0x1ef
	EEmptyMagReloadType EmptyMagReloadType; // 0x1f0
	EOptiwandViewMode OptiwandViewMode; // 0x1f1
	FString DMOAddress; // 0x1f8
	FString DMOGameMode; // 0x208
	ETeamType DMOTeamType; // 0x218
	bool bBounceLightEnabled; // 0x219
	bool bFlashlightShadowsEnabled; // 0x21a
};

struct UMovieSceneColorSection {
	FMovieSceneFloatChannel RedCurve; // 0xf0
	FMovieSceneFloatChannel GreenCurve; // 0x190
	FMovieSceneFloatChannel BlueCurve; // 0x230
	FMovieSceneFloatChannel AlphaCurve; // 0x2d0
};

struct UMaterialExpressionSphereMask {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	FExpressionInput Radius; // 0x68
	FExpressionInput Hardness; // 0x7c
	float AttenuationRadius; // 0x90
	float HardnessPercent; // 0x94
};

struct AKingOfTheHostageGM {
	TArray<APawn*> SpawnedHostages; // 0x6d8
	float Start_RoundTime; // 0x6f8
	bool bBlueTeamOnAttack; // 0x6fc
};

struct UCrowdFollowingComponent {
	FVector CrowdAgentMoveDirection; // 0x268
};

struct UParticleModuleLight {
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

struct AImpactEffect {
	TArray<UParticleSystemComponent*> SpawnedParticles; // 0x220
	bool bPlayDefaultIfNull; // 0x340
	float DecalScale; // 0x344
	float DecalMinSize; // 0x350
	float DecalMaxSize; // 0x354
	UFMODEvent* FMODSoundFx; // 0x358
	UFMODEvent* FMODHitmarker; // 0x360
	float DecalMeshScaleMultiplier; // 0x368
	bool bBulletGoneThroughPlayer; // 0x36c
	bool bArmorImpact; // 0x36d
	TArray<UMaterialInterface*> BloodExitDecals; // 0x370
	FImpactFx DefaultImpactFx; // 0x380
	FImpactFx RON_Aluminium; // 0x3b0
	FImpactFx RON_Asphalt; // 0x3e0
	FImpactFx RON_Brick; // 0x410
	FImpactFx RON_CarbonFibre; // 0x440
	FImpactFx RON_Cardboard; // 0x470
	FImpactFx RON_Ceramic; // 0x4a0
	FImpactFx RON_ConcreteSoft; // 0x4d0
	FImpactFx RON_ConcreteStrong; // 0x500
	FImpactFx RON_Dirt; // 0x530
	FImpactFx RON_Drywall; // 0x560
	FImpactFx RON_Electrical; // 0x590
	FImpactFx RON_EnergyShield; // 0x5c0
	FImpactFx RON_Fabric_Carpet; // 0x5f0
	FImpactFx RON_Fabric_Stuffing; // 0x620
	FImpactFx RON_Fabric_Thin; // 0x650
	FImpactFx RON_Flesh; // 0x680
	FImpactFx RON_Galvanized; // 0x6b0
	FImpactFx RON_Glass_Plate; // 0x6e0
	FImpactFx RON_Glass_Windshield; // 0x710
	FImpactFx RON_Grass; // 0x740
	FImpactFx RON_Gravel; // 0x770
	FImpactFx RON_Ice; // 0x7a0
	FImpactFx RON_Lava; // 0x7d0
	FImpactFx RON_Lead; // 0x800
	FImpactFx RON_Leaves; // 0x830
	FImpactFx RON_Limestone; // 0x860
	FImpactFx RON_Mahogany; // 0x890
	FImpactFx RON_Marble_Coated; // 0x8c0
	FImpactFx RON_Marble_Thick; // 0x8f0
	FImpactFx RON_Mud; // 0x920
	FImpactFx RON_Oil; // 0x950
	FImpactFx RON_Paper; // 0x980
	FImpactFx RON_Pine; // 0x9b0
	FImpactFx RON_Plaster; // 0x9e0
	FImpactFx RON_Plastic; // 0xa10
	FImpactFx RON_Plywood; // 0xa40
	FImpactFx RON_Polystyrene; // 0xa70
	FImpactFx RON_Powder; // 0xaa0
	FImpactFx RON_Rock; // 0xad0
	FImpactFx RON_Rubber; // 0xb00
	FImpactFx RON_Sand; // 0xb30
	FImpactFx RON_Snow; // 0xb60
	FImpactFx RON_Soil; // 0xb90
	FImpactFx RON_Steel; // 0xbc0
	FImpactFx RON_Tin; // 0xbf0
	FImpactFx RON_Treewood; // 0xc20
	FImpactFx RON_Wallpaper; // 0xc50
	FImpactFx RON_Water; // 0xc80
};

struct USynthSamplePlayer {
	USoundWave* SoundWave; // 0x6c0
	FMulticastInlineDelegate OnSampleLoaded; // 0x6c8
	FMulticastInlineDelegate OnSamplePlaybackProgress; // 0x6d8
};

struct ANightvisionGoggles {
	UUserWidget* SpawnedWidget; // 0x1548
	UUserWidget* NightVisionFirstPersonWidget; // 0x1550
	FPostProcessSettings NightVisionPostProcess; // 0x1560
	bool bNVGOn; // 0x1ac0
	bool bTogglingNVG; // 0x1ac1
	TArray<UDamageType*> BlockDamageTypesWhileActive; // 0x1ac8
};

struct UNoiseField {
	float MinRange; // 0xb0
	float MaxRange; // 0xb4
	FTransform Transform; // 0xc0
};

struct ACyberneticCharacter {
	URoNMoveStyleComponent* MoveStyle; // 0x2150
	TArray<EBehaviourMods> Rep_BehaviourMods; // 0x2190
	UFMODEvent* VoiceLineEventMask; // 0x21a0
	TArray<UStaticMeshComponent*> SimulatingAttachedStaticMeshes; // 0x21b0
	TArray<FAttachedMeshData> AttachedMeshData; // 0x21c0
	TArray<FAttachedSkeletalMeshData> AttachedSkeletalMeshData; // 0x21d0
	bool bIsTrackingEnemy; // 0x21e0
	uint32_t TimeSinceLastSeenEnemy; // 0x21e4
	uint32_t TimeSinceLastHeardAggresiveNoise; // 0x21e8
	bool bIsMoving; // 0x21ec
	ABaseItem* LastEquippedBreachItem; // 0x2208
	UTextRenderComponent* NoBuenoTextRender; // 0x2220
	int32_t AbuseCount; // 0x2228
	TArray<FString> ReasonsToSprint; // 0x2230
	TArray<FString> ReasonsToStandStill; // 0x2240
	TArray<FString> ReasonsToWalk; // 0x2250
	float ShootingYellCoolDownDuration; // 0x2270
	UPhysicsAsset* KnockedOutPhysicsAsset; // 0x2278
	TArray<EItemClass> PickupRulesLVL1; // 0x2280
	TArray<EItemClass> PickupRulesLVL2; // 0x2290
	TArray<EItemClass> PickupRulesLVL3; // 0x22a0
	bool bOrientated; // 0x22b0
	FVector2D AimOffset; // 0x22b4
	float LeanAmount; // 0x22c4
	char bIsFollowing : 1; // 0x22c8
	bool bCowering; // 0x22e0
	TMap<ECyberneticsLevel, float> AILevelToLeanStrength; // 0x22e8
	UInteractionsData* HostageTakingInteractionStart; // 0x2338
	UInteractionsData* HostageTakingInteractionIdle; // 0x2340
	UInteractionsData* HostageTakingInteractionEnd; // 0x2348
	ECyberneticsLevel CyberneticsLevel; // 0x2350
	float TimeSurrendered; // 0x2354
	char bIsComplying : 1; // 0x2358
	char bIsWaiting : 1; // 0x2358
	float PepperSprayAbuseLevel; // 0x235c
	float TimeSinceLastTasered; // 0x2360
	int32_t TimesTasered; // 0x2364
	TArray<UWorldBuildingActivity*> CivilianCowerActivities; // 0x2370
	UWorldBuildingActivity* CurrentCivilianCowerActivity; // 0x2388
	float CivilianCowerActivityDuration; // 0x2390
	FString DefaultUnarmedStyle; // 0x23a0
	FString DefaultUnarmedStyle_Female; // 0x23b0
	FString DefaultStunnedStyle; // 0x23c0
	FString DefaultLoweredTwoHandedStyle; // 0x23d0
	FString DefaultRaisedTwoHandedStyle; // 0x23e0
	FString DefaultArrestedStyle; // 0x23f0
	FString DefaultSurrenderedStyle; // 0x2400
};

struct UARSessionConfig {
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

struct UPhysicalAnimationComponent {
	float StrengthMultiplyer; // 0xb0
	USkeletalMeshComponent* SkeletalMeshComponent; // 0xb8
};

struct UW_RadialSelectionBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	ABasePlayer_C* PlayerCharacter; // 0x268
	int32_t CurrentSelectionIndex; // 0x270
	int32_t PreviousSelectionIndex; // 0x274
};

struct UANIMBP_G19_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x308
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x328
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x430
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x450
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x498
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x538
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x690
	FAnimNode_Slot AnimGraphNode_Slot; // 0x750
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x798
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x7c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x7e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x868
	float Mag01Alpha; // 0x8e8
};

struct UW_Briefing_Transcript_Entry_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* FadeIn; // 0x268
	UImage* div_001; // 0x270
	UW_Text_C* txt_Dialogue; // 0x278
	UW_Text_C* txt_SpeakerName; // 0x280
	UW_Text_C* txt_SpeakerTitle; // 0x288
	UW_Text_C* txt_Timestamp; // 0x290
	UVerticalBox* VB_Timestamp; // 0x298
	UW_Button_C* W_Button; // 0x2a0
	FText SpeakerName; // 0x2a8
	FText Dialogue; // 0x2c0
	FText Timestamp; // 0x2d8
	FMulticastInlineDelegate TranscriptEntryClicked; // 0x2f0
	float EntryID; // 0x300
	FText SpeakerTitle; // 0x308
};

struct UW_AG_MapRotation_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UW_RadioContainer_C* MapRotation; // 0x268
	UW_StandardRadioButton_C* Overview_RadioButton_MapsModes; // 0x270
	UW_StandardRadioButton_C* Overview_RadioButton_Players; // 0x278
	UVerticalBox* VerticalBox_1; // 0x280
	FString LastSelectedMapString; // 0x288
	StandardButtonStyles StandardDisplayButtonStyle; // 0x298
};

struct AGS_FreeMode_C {
	USceneComponent* DefaultSceneRoot; // 0x6c0
};

struct UBlackboardComponent {
	UBrainComponent* BrainComp; // 0xb0
	UBlackboardData* DefaultBlackboardAsset; // 0xb8
	UBlackboardData* BlackboardAsset; // 0xc0
	TArray<UBlackboardKeyType*> KeyInstances; // 0xe8
};

struct UW_BriefingMain_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	UTextBlock* BriefingText; // 0x2d8
	UVerticalBox* CivilianBios; // 0x2e0
	UTextBlock* LevelNickname; // 0x2e8
	UTextBlock* ObjectiveString; // 0x2f0
	UVerticalBox* SuspectBios; // 0x2f8
	UTextBlock* TimelineString; // 0x300
	UW_BriefingTaskButton_C* W_BriefingTaskButton; // 0x308
	UW_BriefingTaskButton_C* W_BriefingTaskButton_2; // 0x310
	UW_BriefingTaskButton_C* W_BriefingTaskButton_3; // 0x318
	UW_BriefingTaskButton_C* W_BriefingTaskButton_4; // 0x320
	UPreMissionPlanning* PreMissionPlanning; // 0x328
	TArray<UW_BriefingTaskButton_C*> BriefingTaskButtons; // 0x330
};

struct AGrenadeProjectile {
	URadialForceComponent* DetonationRadialForce; // 0x398
	float DetonationTime; // 0x3a0
	float DetonationBetweenTime; // 0x3a4
	float ElapsedTime; // 0x3a8
	int32_t DetonationCount; // 0x3ac
	int32_t DetonationMax; // 0x3b0
	bool bTriggersActionMusic; // 0x3b4
	TArray<FGrenadeDamage> GrenadeDamage; // 0x3b8
	bool bIncreaseRadiusOverTime; // 0x3c8
};

struct UDatasmithCommonTessellationOptions {
	FDatasmithTessellationOptions Options; // 0x28
};

struct UUpdateSessionCallbackProxyAdvanced {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UCharacterHealthComponent {
	FMulticastInlineDelegate OnLimbFullHealth; // 0x108
	FMulticastInlineDelegate OnLimbLowHealth; // 0x118
	FMulticastInlineDelegate OnLimbNoHealth; // 0x128
	FMulticastInlineDelegate OnLimbBroken; // 0x138
	FMulticastInlineDelegate OnLimbFullTickets; // 0x148
	FMulticastInlineDelegate OnLimbNoTickets; // 0x158
	EPlayerHealthStatus HealthStatus; // 0x168
	FLimbHealthData RightLeg; // 0x16c
	FLimbHealthData LeftLeg; // 0x1a0
	FLimbHealthData RightArm; // 0x1d4
	FLimbHealthData LeftArm; // 0x208
	FLimbHealthData Head; // 0x23c
	char bUnlimitedRevives : 1; // 0x270
	int32_t MaxRevives; // 0x274
	float ReviveTime; // 0x278
	float ReviveTimeDecrement; // 0x27c
	float ReviveOperatingTime; // 0x280
	float MaxReviveHealth; // 0x284
	int32_t RemainingRevives; // 0x288
	float RemainingReviveTime; // 0x28c
	float RemainingReviveHealth; // 0x290
};

struct AGS_VIPEscort_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x730
};

struct ALightningGenerator {
	USceneComponent* SceneRoot; // 0x230
	UAudioComponent* Thunder; // 0x238
	UParticleSystemComponent* ParticleComponent; // 0x240
	float ParticleSpawnChance; // 0x248
	TArray<UParticleSystem*> ParticleTemplates; // 0x250
	TArray<USoundBase*> ThunderSounds; // 0x260
	UDirectionalLightComponent* Lightning; // 0x270
	float ThunderDelayMin; // 0x278
	float ThunderDelayMax; // 0x27c
	FLinearColor LightningColorMin; // 0x280
	FLinearColor LightningColorMax; // 0x290
	float LightningDelayMin; // 0x2a0
	float LightningDelayMax; // 0x2a4
	float LightningIntensityMin; // 0x2a8
	float LightningIntensityMax; // 0x2ac
	float LightningIntensityDecay; // 0x2b0
	float LightningIntensityJitterMin; // 0x2b4
	float LightningIntensityJitterMax; // 0x2b8
	float LightningIntensityJitterTimeMin; // 0x2bc
	float LightningIntensityJitterTimeMax; // 0x2c0
	float LightningJitterTimeRemaining; // 0x2c4
};

struct UParticleModuleLocationPrimitiveCylinder {
	char RadialVelocity : 1; // 0xb0
	FRawDistributionFloat StartRadius; // 0xb8
	FRawDistributionFloat StartHeight; // 0xe8
	CylinderHeightAxis HeightAxis; // 0x118
};

struct AActor {
	FActorTickFunction PrimaryActorTick; // 0x28
	char bNetTemporary : 1; // 0x58
	char bNetStartup : 1; // 0x58
	char bOnlyRelevantToOwner : 1; // 0x58
	char bAlwaysRelevant : 1; // 0x58
	char bReplicateMovement : 1; // 0x58
	char bHidden : 1; // 0x58
	char bTearOff : 1; // 0x58
	char bForceNetAddressable : 1; // 0x58
	char bExchangedRoles : 1; // 0x59
	char bNetLoadOnClient : 1; // 0x59
	char bNetUseOwnerRelevancy : 1; // 0x59
	char bRelevantForNetworkReplays : 1; // 0x59
	char bRelevantForLevelBounds : 1; // 0x59
	char bReplayRewindable : 1; // 0x59
	char bAllowTickBeforeBeginPlay : 1; // 0x59
	char bAutoDestroyWhenFinished : 1; // 0x59
	char bCanBeDamaged : 1; // 0x5a
	char bBlockInput : 1; // 0x5a
	char bCollideWhenPlacing : 1; // 0x5a
	char bFindCameraComponentWhenViewTarget : 1; // 0x5a
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x5a
	char bIgnoresOriginShifting : 1; // 0x5a
	char bEnableAutoLODGeneration : 1; // 0x5a
	char bIsEditorOnlyActor : 1; // 0x5a
	char bActorSeamlessTraveled : 1; // 0x5b
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

struct AHUD_CaptureTheFlag_C {
	USceneComponent* DefaultSceneRoot; // 0x318
};

struct UMaterialExpressionCurveAtlasRowParameter {
	UCurveLinearColor* Curve; // 0x60
	UCurveLinearColorAtlas* Atlas; // 0x68
	FExpressionInput InputTime; // 0x70
};

struct UMaterialExpressionWorldPosition {
	EWorldPositionIncludedOffsets WorldPositionShaderOffset; // 0x40
};

struct UMaterialExpressionSubtract {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UMovieSceneSpawnTrack {
	TArray<UMovieSceneSection*> Sections; // 0x90
	FGuid ObjectGuid; // 0xa0
};

struct APrimary_870mcs_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1190
	UPointLightComponent* PointLight; // 0x1198
	USpotLightComponent* PointLight1; // 0x11a0
	UAnimMontage* LightToggle1P; // 0x11a8
};

struct AHelmet_UpArmor_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1550
	APlayerState* PlayerState; // 0x1558
};

struct UW_PlaceholderTutorialMenu_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280
	UW_TutorialMissionButton_C* W_ArrestButton; // 0x288
	UW_TutorialMissionButton_C* W_ArrestButton_2; // 0x290
	UW_TutorialMissionButton_C* W_GrenadesButton; // 0x298
	UW_TutorialMissionButton_C* W_MirrorgunButton; // 0x2a0
	UW_TutorialMissionButton_C* W_MovementButton; // 0x2a8
	UW_TutorialMissionButton_C* W_ShootingRangeButton; // 0x2b0
	UW_TutorialMissionButton_C* W_StackUpButton; // 0x2b8
};

struct UMovieSceneFloatSection {
	FMovieSceneFloatChannel FloatCurve; // 0xf0
};

struct UNavLinkDefinition {
	TArray<FNavigationLink> Links; // 0x28
	TArray<FNavigationSegmentLink> SegmentLinks; // 0x38
};

struct UMaterialExpressionLinearInterpolate {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	FExpressionInput Alpha; // 0x68
	float ConstA; // 0x7c
	float ConstB; // 0x80
	float ConstAlpha; // 0x84
};

struct AClearPoint {
	UBillboardComponent* SpriteComponent; // 0x220
};

struct UMovieSceneAudioTrack {
	TArray<UMovieSceneSection*> AudioSections; // 0x98
};

struct AReadyOrNotCharacter {
	USkeletalMeshComponent* MeshGearSlot; // 0x548
	FRotator ReplicatedControlRotation; // 0x56c
	APlayerState* LastPlayerStateForCharacter; // 0x578
	FMulticastInlineDelegate OnPlayerKilled; // 0x580
	FMulticastInlineDelegate OnCharacterKilled; // 0x590
	FMulticastInlineDelegate OnWeaponFire; // 0x5a0
	FMulticastInlineDelegate OnWeaponDryFire; // 0x5b0
	FMulticastInlineDelegate OnPlayerDowned; // 0x5c0
	FMulticastInlineDelegate OnGenericDamageReceived; // 0x5d0
	FMulticastInlineDelegate OnPointDamageReceived; // 0x5e0
	FMulticastInlineDelegate OnStunDamageReceived; // 0x5f0
	FMulticastInlineDelegate OnPlayerFreed; // 0x600
	FMulticastInlineDelegate OnPlayerHit; // 0x610
	FMulticastInlineDelegate OnPlayerArmorHit; // 0x620
	FMulticastInlineDelegate OnItemThrown_FromAnimNotify; // 0x630
	FMulticastInlineDelegate OnDoorLockPickBegin_FromAnimNotify; // 0x640
	FMulticastInlineDelegate OnDoorLockPickEnd_FromAnimNotify; // 0x650
	FMulticastInlineDelegate OnDoorChecked_FromAnimNotify; // 0x660
	FMulticastInlineDelegate OnC2Placed_FromAnimNotify; // 0x670
	FMulticastInlineDelegate OnC2Detonate_FromAnimNotify; // 0x680
	FMulticastInlineDelegate OnTrapDisarmBegin_FromAnimNotify; // 0x690
	FMulticastInlineDelegate OnTrapDisarmEnd_FromAnimNotify; // 0x6a0
	FMulticastInlineDelegate OnMirrorDoorStarted_FromAnimNotify; // 0x6b0
	FMulticastInlineDelegate OnMirrorDoorFinished_FromAnimNotify; // 0x6c0
	FMulticastInlineDelegate OnStartDoorWedgePlacement_FromAnimNotify; // 0x6d0
	FMulticastInlineDelegate OnEndDoorWedgePlacement_FromAnimNotify; // 0x6e0
	TArray<AImpactEffect*> BloodImpactEffects; // 0x6f0
	TArray<FBleedoutWound> BleedoutWounds; // 0x710
	bool bBulletForceTransferred; // 0x722
	float MinimumBodyFallImpulse; // 0x724
	UFMODEvent* BodyFallEvent; // 0x728
	float BlendInterpAmount; // 0x73c
	float TimeDowned; // 0x74c
	float FinalBlendInTime; // 0x750
	float BlendInTime; // 0x758
	float BlendInAfterStartOfAnim; // 0x75c
	char bIsPreviewCharacter : 1; // 0x760
	AReadyOrNotCharacter* ArrestedBy; // 0x768
	AReadyOrNotCharacter* KilledBy; // 0x770
	ECharacterDeathReason DeathReason; // 0x778
	FMulticastInlineDelegate OnPlayerTakeDamage; // 0x780
	FMulticastInlineDelegate OnPlayerAttacked; // 0x790
	TArray<FName> HeadBones; // 0x7d0
	TArray<FName> UpperBody; // 0x7e0
	TArray<FName> LowerBody; // 0x800
	TArray<FName> R_Leg; // 0x810
	TArray<FName> L_Leg; // 0x820
	TArray<FName> L_Foot; // 0x830
	TArray<FName> R_Foot; // 0x840
	TArray<FName> L_Arm; // 0x850
	TArray<FName> R_Arm; // 0x860
	TArray<FName> L_Hand; // 0x870
	TArray<FName> R_Hand; // 0x880
	bool bLowReadyPointUp; // 0x890
	bool bLowReadyPointDown; // 0x891
	float LowReadyDistance; // 0x894
	TArray<UCapsuleComponent*> LowReadyIgnoredCapsules; // 0x8a0
	ESquadPosition SquadPosition; // 0x8b0
	ETeamType DefaultTeam; // 0x8b1
	UFMODEvent* FPMeleeImpactFMODEvent; // 0x8b8
	UFMODEvent* TPMeleeImpactFMODEvent; // 0x8c0
	TSoftClassPtr<UObject> MeleeCameraShake; // 0x8c8
	AReadyOrNotCharacter* RecentMeleeVictim; // 0x8f0
	float MeleeRange; // 0x8f8
	float MeleeDamage; // 0x8fc
	TSoftClassPtr<UObject> MeleeDamageType; // 0x900
	FMulticastInlineDelegate OnPlayerArrested; // 0x928
	FMulticastInlineDelegate OnPlayerArrestStart; // 0x938
	FMulticastInlineDelegate OnPlayerArrestedCanceled; // 0x948
	char bOrderedToRotateForArrest : 1; // 0x958
	APlacedZipcuffs* PlacedZipcuffs; // 0x960
	APlacedZipcuffs* SpawnedZipcuffsClass; // 0x968
	APlacedZipcuffs* SpawnedFPZipcuffsClass; // 0x970
	FName ZipcuffBone; // 0x978
	bool bIsBeingArrested; // 0x980
	AReadyOrNotCharacter* LastCharacterMakingArrest; // 0x988
	AReadyOrNotCharacter* CurrentlyArresting; // 0x990
	bool bArrestComplete; // 0x998
	bool bPrimed; // 0x999
	bool bOverarmThrow; // 0x99a
	FMulticastInlineDelegate OnQuickThrowStart; // 0x9a0
	FMulticastInlineDelegate OnQuickThrowEnd; // 0x9b0
	UReadyOrNotCharacterAnimData* AnimationData; // 0x9c0
	bool bIsStrafing; // 0x9c9
	TMap<FString, UAnimMontage*> PlayedTableMontageMap3P; // 0x9f0
	FCharacterLookOverride CharacterLookOverride; // 0xaa8
	FString Rep_CharacterLookOverride; // 0xb78
	TMap<ABaseArmour*, USkeletalMesh*> ArmorOverrideMapTP; // 0xb88
	USkeletalMesh* Rep_BodyMesh; // 0xbd8
	USkeletalMesh* Rep_FaceMesh; // 0xbe0
	USkeletalMesh* Rep_FPMesh; // 0xbe8
	TMap<UAnimMontage*, float> AnimMontageCooldown; // 0xbf0
	UPoseAsset* CurrentFaceROM; // 0xc40
	ATOCManager* TOCManager; // 0xc60
	UMatineeCameraShake* ReportToTOC_PVP_CameraShake; // 0xc68
	char bReportedToTOC_Killed_PVP : 1; // 0xc70
	char bReportedToTOC_Arrested_PVP : 1; // 0xc70
	FString TOCLine; // 0xc78
	FString SpeechCharacterName; // 0xc88
	bool bHasBeenReported; // 0xca0
	float SpeakCooldown; // 0xca4
	UFMODEvent* ReportPlayerDeadFMODEvent; // 0xca8
	UFMODEvent* ReportPlayerArrestedFMODEvent; // 0xcb0
	UFMODEvent* ReportPlayerGeneralFMODEvent; // 0xcb8
	TMap<FString, float> CooldownMap; // 0xcd0
	UFMODEvent* FMODVoiceLine2D; // 0xd20
	UFMODEvent* FMODVoiceLineSpatalized; // 0xd28
	FMulticastInlineDelegate OnBoneDamaged; // 0xd30
	FMulticastInlineDelegate OnBodyPartDamaged; // 0xd40
	char bBodyHit : 1; // 0xd50
	char bRightFootHit : 1; // 0xd50
	char bLeftFootHit : 1; // 0xd50
	char bBlockedByBodyArmor : 1; // 0xd50
	char bBlockedByHeadArmor : 1; // 0xd50
	float GasDamageAccumulated; // 0xd5c
	float GasDamageDecay; // 0xd60
	TArray<USceneComponent*> SpawnedBloodComponents; // 0xd68
	bool bGodMode; // 0xd78
	bool bNoTarget; // 0xd79
	UParticleSystem* ArmorImpactEffect; // 0xd80
	UBloodData* Blood; // 0xd88
	TArray<AReadyOrNotCharacter*> DamagedByCharacters; // 0xd90
	TArray<ABaseWeapon*> DamagedByWeapons; // 0xda0
	bool bRepStunned; // 0xdb8
	EStunType RepStunnedWith; // 0xdb9
	char bHasEverBeenStunned : 1; // 0xe10
	AActor* PendingEvidence; // 0xe20
	bool bIsCollectingEvidence; // 0xe28
	bool bCollectionAnimHasTriggered; // 0xe29
	UAnimMontage* CollectingLoopAnim1P; // 0xe30
	UAnimMontage* CollectingLoopAnim3P; // 0xe38
	ACollectedEvidenceActor* CollectedEvidenceClass; // 0xe40
	UFMODEvent* Reward; // 0xe48
	bool bMovementLocked; // 0xe50
	bool bAimLocked; // 0xe51
	bool bActionsLocked; // 0xe52
	ADoor* QueuedDoorToOpen; // 0xe58
	ADoor* QueuedDoorToClose; // 0xe60
	ADoor* LastKickedDoor; // 0xe68
	UInteractionsData* DoorKickInteractionFront; // 0xe70
	UInteractionsData* DoorKickInteractionBack; // 0xe78
	UInteractionsData* DoorKickFailureInteractionFront; // 0xe80
	UInteractionsData* DoorKickFailureInteractionBack; // 0xe88
	UInteractionsData* DoorKickBreakInteractionFront; // 0xe90
	UInteractionsData* DoorKickBreakInteractionBack; // 0xe98
	bool bShouldPlayFootstepFoley; // 0xec0
	bool bPlayEveryStep; // 0xec1
	AImpactEffect* FootstepImpactEffectFast; // 0xec8
	AImpactEffect* FootstepImpactEffectSlow; // 0xed0
	UFMODEvent* CurrentFootstepFoleyEvent; // 0xed8
	UFMODEvent* CurrentFootstepFoleyEventRemote; // 0xee0
	UFMODEvent* FootstepsLocal; // 0xee8
	UFMODEvent* FootstepsRemote; // 0xef0
	UPhysicsAsset* DefaultRagdollPhysAsset; // 0xef8
	UPhysicsAsset* DefaultAlivePhysAsset; // 0xf00
	UPhysicsAsset* CuffedRagdollPhysAsset; // 0xf08
	UPhysicsAsset* Rep_ActiveRagdollPhysAsset; // 0xf10
	ANeutralizeSuspectByTag* NeutralizeSuspectTag; // 0xf28
	UInventoryComponent* InventoryComp; // 0xf30
	UFMODAudioPropagationComponent* FMODAudioPropagationComp; // 0xf38
	UItemVisualizationComponent* PrimaryItemVisualizationComponent; // 0xf40
	UItemVisualizationComponent* SecondaryItemVisualizationComponent; // 0xf48
	UItemVisualizationComponent* LongTacticalVisualizationComponent; // 0xf50
	UCharacterHealthComponent* CharacterHealth; // 0xf58
	USkeletalMeshComponent* FaceMesh; // 0xf60
	UPawnNoiseEmitterComponent* NoiseEmitter; // 0xf68
	UAIPerceptionStimuliSourceComponent* PerceptionStimuliComp; // 0xf70
	UFMODAudioComponent* FMODFoleyComp; // 0xf78
	UFMODAudioComponent* FMODVoiceAudioComp; // 0xf80
	UInteractableComponent* InteractableComponent; // 0xf88
	UObjectiveMarkerComponent* PlayerMarkerComponent; // 0xf90
	UMapActorComponent* MapActorComponent; // 0xf98
};

struct USoundNodeLooping {
	int32_t LoopCount; // 0x48
	char bLoopIndefinitely : 1; // 0x4c
};

struct UGeometryCache {
	TArray<UMaterialInterface*> Materials; // 0x30
	TArray<UGeometryCacheTrack*> Tracks; // 0x40
	int32_t StartFrame; // 0x60
	int32_t EndFrame; // 0x64
	uint64_t Hash; // 0x68
};

struct UParticleModuleOrbit {
	EOrbitChainMode ChainMode; // 0x38
	FRawDistributionVector OffsetAmount; // 0x40
	FOrbitOptions OffsetOptions; // 0x88
	FRawDistributionVector RotationAmount; // 0x90
	FOrbitOptions RotationOptions; // 0xd8
	FRawDistributionVector RotationRateAmount; // 0xe0
	FOrbitOptions RotationRateOptions; // 0x128
};

struct UParticleModuleLocationWorldOffset_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct UARTrackableNotifyComponent {
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

struct UW_ControlsBind_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* BindingText; // 0x268
	UImage* Button_Disabled; // 0x270
	UImage* Button_Dn; // 0x278
	UImage* Button_Hi; // 0x280
	UImage* Button_Selected; // 0x288
	UImage* Button_Up; // 0x290
	UButton* KeybindButton; // 0x298
	UTextBlock* DescriptionWidget; // 0x2a0
	FText DescriptionText; // 0x2a8
	FText ChangeBindFormat; // 0x2c0
	FActionMappingStruct ActionMappingData; // 0x2d8
	FAxisMappingStruct AxisMappingData; // 0x300
	bool bIsAxis; // 0x328
	int32_t BindIndex; // 0x32c
	FText UnboundText; // 0x330
	FKey Key; // 0x348
	TArray<KeyModifiers> KeyModifiers; // 0x360
	FMulticastInlineDelegate OnHovered; // 0x370
	FMulticastInlineDelegate OnUnhovered; // 0x380
	FMulticastInlineDelegate OnPressed; // 0x390
	FMulticastInlineDelegate OnReleased; // 0x3a0
	FMulticastInlineDelegate OnBindingStarted; // 0x3b0
	FMulticastInlineDelegate OnBindingCanceled; // 0x3c0
	FMulticastInlineDelegate OnBindingCommitted; // 0x3d0
	FName BindName; // 0x3e0
	FText Mod_Shift; // 0x3e8
	FText Mod_Ctrl; // 0x400
	FText Mod_Alt; // 0x418
	FText Mod_Cmd; // 0x430
	bool bListeningForKeystrokes; // 0x448
	FText BindFriendlyName; // 0x450
	UTextBlock* BindNotificationWidget; // 0x468
	float AxisScale; // 0x470
	UW_ControlsBind_C* PairedKeybind; // 0x478
	UFMODEvent* KeybindHoveredSoundEffect; // 0x480
	UFMODEvent* KeybindStartBindingSoundEffect; // 0x488
	FMulticastInlineDelegate OnConflictingBindDetected; // 0x490
	FKey PendingNewKey; // 0x4a0
	EInputKeyCategory KeyCategory; // 0x4b8
	UW_SettingsMenu_C* SettingsMenu; // 0x4c0
	TArray<FText> ConflictBindFriendlyNamesList; // 0x4c8
	TArray<FAxisMappingStruct> ConflictingAxes; // 0x4d8
	TArray<FActionMappingStruct> ConflictingActions; // 0x4e8
	FMulticastInlineDelegate OnUnbindableKeyReboundAttempted; // 0x4f8
	bool bIsReadOnly; // 0x508
};

struct ARoNMoveStyleCharacter {
	USpringArmComponent* CameraBoom; // 0x4b8
	UCameraComponent* FollowCamera; // 0x4c0
	URoNMoveStyleComponent* MoveStyle; // 0x4c8
	float BaseTurnRate; // 0x4d0
	float BaseLookUpRate; // 0x4d4
};

struct UMaterialFunctionInterface {
	FGuid StateId; // 0x28
	EMaterialFunctionUsage MaterialFunctionUsage; // 0x38
};

struct UNiagaraDataInterfaceGrid2DCollectionReader {
	FString EmitterName; // 0xf8
	FString DIName; // 0x108
};

struct UDeviceProfile {
	FString DeviceType; // 0x38
	FString BaseProfileName; // 0x48
	UObject* Parent; // 0x58
	TArray<FString> CVars; // 0x88
};

struct UBlueprintGeneratedClass {
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

struct UAISenseConfig {
	FColor DebugColor; // 0x28
	float MaxAge; // 0x2c
	char bStartsEnabled : 1; // 0x30
};

struct UTeamStatusWidget {
	UImage* TeamEmblem_Image_LeftAligned; // 0x278
	UHorizontalBox* Teammates_Container_LeftAligned; // 0x280
	UImage* TeamEmblem_Image_RightAligned; // 0x288
	UHorizontalBox* Teammates_Container_RightAligned; // 0x290
	EHorizontalAlignment Alignment; // 0x298
	FSlateBrush TeamEmblemBrush; // 0x2a0
	ETeamType Team; // 0x328
	UTeamPaperdollWidget* PaperdollWidgetClass; // 0x330
	FText EmptyTeamText; // 0x338
	FSlateColor EmptyTeamTextColor; // 0x350
	FSlateFontInfo EmptyTeamTextFont; // 0x378
	TArray<UTeamPaperdollWidget*> TeamPaperdolls; // 0x3d0
	UTextBlock* EmptyTeam_Text; // 0x3e0
};

struct UInterpTrackInstToggle {
	ETrackToggleAction Action; // 0x28
	float LastUpdatePosition; // 0x2c
	char bSavedActiveState : 1; // 0x30
};

struct UAchievementWriteCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UGizmoAxisScaleParameterSource {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48
	TScriptInterface<IGizmoTransformSource> TransformSource; // 0x58
	float ScaleMultiplier; // 0x68
	float Parameter; // 0x6c
	FGizmoFloatParameterChange LastChange; // 0x70
	FVector CurScaleAxis; // 0x78
	FVector CurScaleOrigin; // 0x84
	FTransform InitialTransform; // 0x90
};

struct UARTextureCameraDepth {
	EARDepthQuality DepthQuality; // 0x198
	EARDepthAccuracy DepthAccuracy; // 0x199
	bool bIsTemporallySmoothed; // 0x19a
};

struct UW_ScoreboardFill_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* Arrests; // 0x268
	UScrollBox* BlueTeam; // 0x270
	UScrollBox* BlueTeamCoop; // 0x278
	UTextBlock* BlueTeamScore; // 0x280
	UTextBlock* Damage; // 0x288
	UTextBlock* Deaths; // 0x290
	UScrollBox* FreeplayMode; // 0x298
	UTextBlock* HoldVIPTimeRemaining; // 0x2a0
	UHorizontalBox* HorizontalBox_2; // 0x2a8
	UTextBlock* Incapacitations; // 0x2b0
	UTextBlock* Kills; // 0x2b8
	UOverlay* LeaderCoop; // 0x2c0
	UWidgetSwitcher* ModeSwitcher; // 0x2c8
	UTextBlock* Name; // 0x2d0
	UTextBlock* Ping; // 0x2d8
	UScrollBox* RedTeam; // 0x2e0
	UScrollBox* RedTeamCoop; // 0x2e8
	UTextBlock* RedTeamScore; // 0x2f0
	UTextBlock* ReinforcementTimeRemaining; // 0x2f8
	UScaleBox* ScaleBox_66; // 0x300
	UScaleBox* ScaleBox_72; // 0x308
	UTextBlock* Score; // 0x310
	UTextBlock* ScoreboardHeader; // 0x318
	UTextBlock* Status; // 0x320
	UTextBlock* Timelimit; // 0x328
	UTextBlock* TimesArrested; // 0x330
	FSlateFontInfo TableHeaderFont; // 0x338
	FSlateFontInfo ColumnHeaderFont; // 0x390
	bool bFreeForAll; // 0x3e8
	TArray<AReadyOrNotPlayerState*> FFAPlayerStates; // 0x3f0
	bool HideHealthStatus; // 0x400
	bool ShowScoreboardHeader; // 0x401
	bool bHideReadyCheckbox; // 0x402
	bool ShowReinforcementsTimer; // 0x403
	bool ShowTimelimitTimer; // 0x404
	bool ShowHoldVIPTimer; // 0x405
	float NextUpdateTime; // 0x408
	int32_t NumberArrestedTeammatesRed; // 0x40c
	int32_t NumberArrestedTeammatesBlue; // 0x410
	int32_t NumberTeammatesTotalRed; // 0x414
	int32_t NumberTeammatesTotalBlue; // 0x418
};

struct APrimary_G3A3_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1130
};

struct UMovieSceneNiagaraTrack {
	TArray<UMovieSceneSection*> Sections; // 0x90
};

struct AEnvironmentVolume {
	UBoxComponent* Bounds; // 0x220
	float WetnessRate; // 0x228
};

struct UTimeSynchronizableMediaSource {
	bool bUseTimeSynchronization; // 0x88
	int32_t FrameDelay; // 0x8c
	double TimeDelay; // 0x90
};

struct UW_AnimatedIcon_Imprint_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UWidgetAnimation* Anim_Interact; // 0x270
	UImage* BlipHalfwayLower; // 0x278
	UImage* BlipHalfwayUpper; // 0x280
	UImage* ProgressCircle_Image; // 0x288
};

struct UMaterialExpressionSceneDepth {
	EMaterialSceneAttributeInputMode InputMode; // 0x40
	FExpressionInput Input; // 0x44
	FExpressionInput Coordinates; // 0x58
	FVector2D ConstInput; // 0x6c
};

struct UProceduralFoliageSpawner {
	int32_t RandomSeed; // 0x28
	float TileSize; // 0x2c
	int32_t NumUniqueTiles; // 0x30
	float MinimumQuadTreeSize; // 0x34
	TArray<FFoliageTypeObject> FoliageTypes; // 0x40
};

struct UGameplayTagsSettings {
	bool ImportTagsFromConfig; // 0x48
	bool WarnOnInvalidTags; // 0x49
	bool ClearInvalidTags; // 0x4a
	bool FastReplication; // 0x4b
	FString InvalidTagCharacters; // 0x50
	TArray<FGameplayTagCategoryRemap> CategoryRemapping; // 0x60
	TArray<FSoftObjectPath> GameplayTagTableList; // 0x70
	TArray<FGameplayTagRedirect> GameplayTagRedirects; // 0x80
	TArray<FName> CommonlyReplicatedTags; // 0x90
	int32_t NumBitsForContainerSize; // 0xa0
	int32_t NetIndexFirstBitSegment; // 0xa4
	TArray<FRestrictedConfigInfo> RestrictedConfigFiles; // 0xa8
};

struct UOpenDoorTeamQuestNode {
	bool bMustBeFullyOpen; // 0x278
};

struct UMaterialExpressionSkyAtmosphereLightDiskLuminance {
	int32_t LightIndex; // 0x40
};

struct UMatchStatusCardWidget {
	UMatchTimeRemainingWidget* MatchTimeRemaining; // 0x278
	UCurrentMatchRoundWidget* CurrentMatchRound; // 0x280
};

struct USoundCue {
	char bPrimeOnLoad : 1; // 0x170
	USoundNode* FirstNode; // 0x178
	float VolumeMultiplier; // 0x180
	float PitchMultiplier; // 0x184
	FSoundAttenuationSettings AttenuationOverrides; // 0x188
	float SubtitlePriority; // 0x528
	char bOverrideAttenuation : 1; // 0x530
	char bExcludeFromRandomNodeBranchCulling : 1; // 0x530
	int32_t CookedQualityIndex; // 0x534
	char bHasPlayWhenSilent : 1; // 0x538
};

struct UMoveIntoLOSActivity {
	AActor* LOSActor; // 0x1a8
};

struct ASceneCapture {
	UStaticMeshComponent* MeshComp; // 0x220
	USceneComponent* SceneComponent; // 0x228
};

struct UCheatManager {
	ADebugCameraController* DebugCameraControllerRef; // 0x28
	ADebugCameraController* DebugCameraControllerClass; // 0x30
	TArray<UCheatManagerExtension*> CheatManagerExtensions; // 0x78
};

struct UNavigationDataChunk {
	FName NavigationDataName; // 0x28
};

struct UNiagaraDataInterfaceRenderTargetCube {
	int32_t Size; // 0xd8
	ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xdc
	char bInheritUserParameterSettings : 1; // 0xdd
	char bOverrideFormat : 1; // 0xdd
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe0
	TMap<uint64_t, UTextureRenderTargetCube*> ManagedRenderTargets; // 0x100
};

struct UParticleSystemComponent {
	UParticleSystem* Template; // 0x450
	TArray<UMaterialInterface*> EmitterMaterials; // 0x458
	TArray<USkeletalMeshComponent*> SkelMeshComponents; // 0x468
	char bResetOnDetach : 1; // 0x479
	char bUpdateOnDedicatedServer : 1; // 0x479
	char bAllowRecycling : 1; // 0x479
	char bAutoManageAttachment : 1; // 0x479
	char bAutoAttachWeldSimulatedBodies : 1; // 0x479
	char bWarmingUp : 1; // 0x47a
	char bOverrideLODMethod : 1; // 0x47a
	char bSkipUpdateDynamicDataDuringTick : 1; // 0x47a
	ParticleSystemLODMethod LODMethod; // 0x485
	EParticleSignificanceLevel RequiredSignificance; // 0x486
	TArray<FParticleSysParam> InstanceParameters; // 0x488
	FMulticastInlineDelegate OnParticleSpawn; // 0x498
	FMulticastInlineDelegate OnParticleBurst; // 0x4a8
	FMulticastInlineDelegate OnParticleDeath; // 0x4b8
	FMulticastInlineDelegate OnParticleCollide; // 0x4c8
	bool bOldPositionValid; // 0x4d8
	FVector OldPosition; // 0x4dc
	FVector PartSysVelocity; // 0x4e8
	float WarmupTime; // 0x4f4
	float WarmupTickRate; // 0x4f8
	float SecondsBeforeInactive; // 0x500
	float MaxTimeBeforeForceUpdateTransform; // 0x508
	TArray<UParticleSystemReplay*> ReplayClips; // 0x528
	float CustomTimeDilation; // 0x540
	TWeakObjectPtr<USceneComponent> AutoAttachParent; // 0x598
	FName AutoAttachSocketName; // 0x5a0
	EAttachmentRule AutoAttachLocationRule; // 0x5a8
	EAttachmentRule AutoAttachRotationRule; // 0x5a9
	EAttachmentRule AutoAttachScaleRule; // 0x5aa
	FMulticastInlineDelegate OnSystemFinished; // 0x5d8
};

struct UAnimNotify_EquipItemOfClass {
	ABaseItem* ItemClass; // 0x38
	char bInstant : 1; // 0x40
	char bAIOnly : 1; // 0x40
};

struct UW_Map_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UOverlay* Main_Overlay; // 0x268
	UOverlay* Map_Overlay; // 0x270
	UOverlay* MapActors_Overlay; // 0x278
	UW_MapFloors_C* MapFloors; // 0x280
	UTextBlock* MapName_Text; // 0x288
	UImage* MapOverview_Image; // 0x290
	TArray<UMapActorWidget*> MapActorWidgets; // 0x298
	AIncriminationGS* IncrimGS; // 0x2a8
	FVector2D MapOrigin; // 0x2b0
	float MapSize; // 0x2b8
	TArray<UW_MapCell_C*> MapCells; // 0x2c0
	TArray<AActor*> Actors; // 0x2d0
};

struct UWidgetSwitcher {
	int32_t ActiveWidgetIndex; // 0x120
};

struct UScrollBar {
	FScrollBarStyle WidgetStyle; // 0x108
	USlateWidgetStyleAsset* Style; // 0x5d8
	bool bAlwaysShowScrollbar; // 0x5e0
	bool bAlwaysShowScrollbarTrack; // 0x5e1
	EOrientation Orientation; // 0x5e2
	FVector2D Thickness; // 0x5e4
	FMargin Padding; // 0x5ec
};

struct USlateVectorArtData {
	TArray<FSlateMeshVertex> VertexData; // 0x28
	TArray<uint32_t> IndexData; // 0x38
	UMaterialInterface* Material; // 0x48
	FVector2D ExtentMin; // 0x50
	FVector2D ExtentMax; // 0x58
};

struct ABaseMagPouch {
	USkeletalMeshComponent* MagazineMesh; // 0x8f8
	UAnimationAsset* OpenPouchAnim; // 0x900
	UAnimationAsset* ClosedPouchAnim; // 0x908
	FName MagSocket; // 0x910
};

struct UOpenDoorQuestNode {
	bool bMustBeFullyOpen; // 0x278
};

struct AReportReportableByTag {
	FName ReportTag; // 0x278
};

struct UInputKeyDelegateBinding {
	TArray<FBlueprintInputKeyDelegateBinding> InputKeyDelegateBindings; // 0x28
};

struct UPlatformEventsComponent {
	FMulticastInlineDelegate PlatformChangedToLaptopModeDelegate; // 0xb0
	FMulticastInlineDelegate PlatformChangedToTabletModeDelegate; // 0xc0
};

struct ALevelStreamingVolume {
	TArray<FName> StreamingLevelNames; // 0x258
	char bEditorPreVisOnly : 1; // 0x268
	char bDisabled : 1; // 0x268
	EStreamingVolumeUsage StreamingUsage; // 0x26c
};

struct UNiagaraDataInterfaceRWBase {
	TSet<int32_t> OutputShaderStages; // 0x38
	TSet<int32_t> IterationShaderStages; // 0x88
};

struct UNiagaraDataInterfaceGrid2DCollection {
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xf8
	ENiagaraGpuBufferFormat OverrideBufferFormat; // 0x118
	char bOverrideFormat : 1; // 0x119
	TMap<uint64_t, UTextureRenderTarget2DArray*> ManagedRenderTargets; // 0x170
};

struct UARTrackedPose {
	FARPose3D TrackedPose; // 0xf8
};

struct ALauncherProjectile_Gas_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3d8
	bool FiredOffEffect; // 0x3e0
};

struct UMaterialExpressionAdd {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UBTNode {
	FString NodeName; // 0x30
	UBehaviorTree* TreeAsset; // 0x40
	UBTCompositeNode* ParentNode; // 0x48
};

struct UW_PlayerActionText_C {
	UInvalidationBox* InvalidationBox_1; // 0x2a8
	UImage* RedLine_Image; // 0x2b0
	FPlayerActionPromptSlot ActionPrompt; // 0x2b8
};

struct APlayerStart {
	FName PlayerStartTag; // 0x248
};

struct UParticleModuleRotation_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x60
};

struct AMissionPortal {
	UInteractableComponent* InteractableComponent; // 0x268
	TArray<AReadyOrNotGameMode*> SelectableGameModes; // 0x270
	UReadyOrNotProfile* Profile; // 0x280
	UTextRenderComponent* WhiteboardText; // 0x288
	FString MissionURL; // 0x298
	FString ModeURL; // 0x2a8
	TArray<UStaticMeshComponent*> CompsToOutline; // 0x2b8
	TArray<ULightComponent*> LightsToEnable; // 0x2c8
	TArray<UStaticMeshComponent*> CompsToOutlineMissionSelected; // 0x2d8
	TArray<ULightComponent*> LightsToEnableMissionSelected; // 0x2e8
};

struct UMaterialExpressionSamplePhysicsIntegerField {
	FExpressionInput WorldPosition; // 0x40
	EFieldIntegerType FieldTarget; // 0x54
};

struct ABP_ReverbSetter_C {
	UStaticMeshComponent* Cube; // 0x220
	USceneComponent* DefaultSceneRoot; // 0x228
	Enum_Reverb reverbType; // 0x230
};

struct UAIDataProvider_QueryParams {
	FName paramName; // 0x28
	float FloatValue; // 0x30
	int32_t IntValue; // 0x34
	bool BoolValue; // 0x38
};

struct AStaticReportable {
	FString DesiredTocReport; // 0x228
	bool bReportedToToc; // 0x238
};

struct UMaterialExpressionTransform {
	FExpressionInput Input; // 0x40
	EMaterialVectorCoordTransformSource TransformSourceType; // 0x54
	EMaterialVectorCoordTransform TransformType; // 0x55
};

struct AThrownEvidenceActor {
	UBoxComponent* BoxComponent; // 0x220
	FVector Rep_Location; // 0x228
	FRotator Rep_Rotation; // 0x234
};

struct UANIMBP_HK416_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x308
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x328
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x430
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x538
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x640
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x660
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x720
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x768
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x790
	FAnimNode_Slot AnimGraphNode_Slot; // 0x7b8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x800
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x8a0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x9f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xb00
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xb80
	float CarrierHandleAlpha; // 0xc00
	bool bIsSemi; // 0xc04
	float Mag01Alpha; // 0xc08
	float Mag02Alpha; // 0xc0c
	float ScopeAdjustAlpha; // 0xc10
};

struct UFoliageType_InstancedStaticMesh {
	UStaticMesh* Mesh; // 0x3b0
	TArray<UMaterialInterface*> OverrideMaterials; // 0x3b8
	UFoliageInstancedStaticMeshComponent* ComponentClass; // 0x3c8
};

struct UW_VOIPTalker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UVerticalBox* VerticalBox_65; // 0x268
	bool PlayerStateFound; // 0x270
};

struct UBTTask_GameplayTaskBase {
	char bWaitForGameplayTask : 1; // 0x70
};

struct UPaperSprite {
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

struct AVote_EndRound_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2a8
	USceneComponent* DefaultSceneRoot; // 0x2b0
};

struct UAnimNotify_MirrorDoor {
	char bMirrorFinish : 1; // 0x38
};

struct UMovieSceneGeometryCollectionTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x98
};

struct UGeometryCollectionCache {
	FRecordedTransformTrack RecordedData; // 0x28
	UGeometryCollection* SupportedCollection; // 0x38
	FGuid CompatibleCollectionState; // 0x40
};

struct UNiagaraBaselineController {
	float TestDuration; // 0x28
	UNiagaraEffectType* EffectType; // 0x30
	ANiagaraPerfBaselineActor* Owner; // 0x38
	TSoftObjectPtr<UNiagaraSystem> System; // 0x40
};

struct UW_Briefing_TimelineEvents_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UVerticalBox* VB_Events; // 0x268
	UW_Header_C* W_Header; // 0x270
	TMap<float, FTimelineEvent> EventEntries; // 0x278
	UCanvasPanel* TimelineEntryCanvas; // 0x2c8
	float Spacing; // 0x2d0
	FMulticastInlineDelegate OnEventClicked; // 0x2d8
};

struct UNavigationSystemV1 {
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
	FNavigationSystemRunMode OperationMode; // 0x1bc
	float DirtyAreasUpdateFreq; // 0x15bc
};

struct ANavigationObjectBase {
	UCapsuleComponent* CapsuleComponent; // 0x228
	UBillboardComponent* GoodSprite; // 0x230
	UBillboardComponent* BadSprite; // 0x238
	char bIsPIEPlayerStart : 1; // 0x240
};

struct UDemoNetDriver {
	TMap<FString, FRollbackNetStartupActorInfo> RollbackNetStartupActors; // 0x858
	float CheckpointSaveMaxMSPerFrame; // 0xa04
	TArray<FMulticastRecordOptions> MulticastRecordOptions; // 0xa28
	bool bIsLocalReplay; // 0xa38
	TArray<APlayerController*> SpectatorControllers; // 0xa40
};

struct UWeaponAttachment {
	TArray<UMaterialInstanceDynamic*> SkinMaterials; // 0xec8
	EWeaponAttachmentType WeaponAttachmentType; // 0xed8
	TArray<EWeaponAttachmentType> RemovesWeaponAttachmentTypes; // 0xee0
	EWeaponUnderbarrelAnimationType UnderbarrelAnimationType; // 0xef0
	bool bNeedNotAttach; // 0xef1
	bool bNullAttachmentOnly; // 0xef2
	FName SocketAttachment; // 0xef4
	FText ItemName; // 0xf00
	int32_t PointCost; // 0xf18
	FAttachmentUIElements UIElements; // 0xf20
	TArray<EItemAttachment> AdditionalAttachments; // 0xf38
	float AttachmentWeight; // 0xf48
	float VerticalRecoilMultiplier; // 0xf4c
	float HorizontalRecoilMultiplier; // 0xf50
	float SpreadMultiplier; // 0xf54
	float DeadzoneMultiplier; // 0xf58
	float MuzzleVelocityMultiplier; // 0xf5c
	float LowReadyLengthMultiplier; // 0xf60
	bool bShouldSupressWeapon; // 0xf64
	bool bHidesMuzzleFlash; // 0xf65
	bool bOverrideMuzzleFlash; // 0xf66
	UParticleSystem* MuzzleFlashParticle; // 0xf68
	UParticleSystem* MuzzleSmokeParticle; // 0xf70
	int32_t MagazineAmmoIncrease; // 0xf7c
	FName HideBoneOnMesh; // 0xf80
	float CameraBobAdditionFactor; // 0xf88
	float ADS_Speed_Multiplier; // 0xf8c
	UFMODEvent* ToggleSound; // 0xf90
};

struct USignificanceManager {
	FSoftClassPath SignificanceManagerClassName; // 0x108
};

struct ULevelStreamingDynamic {
	char bInitiallyLoaded : 1; // 0x148
	char bInitiallyVisible : 1; // 0x148
};

struct APepperballImpactEffects_C {
	USceneComponent* DefaultSceneRoot; // 0xcb0
};

struct AMotivityCharacter {
	USpringArmComponent* CameraBoom; // 0x4b8
	UCameraComponent* FollowCamera; // 0x4c0
	float BaseTurnRate; // 0x4c8
	float BaseLookUpRate; // 0x4cc
	FTrajectoryData Goal; // 0x4f0
	float MaxSpeed; // 0x578
	FVector CurInputVector; // 0x5c8
	float SampleRate; // 0x5e0
	float posBias; // 0x5e4
	float dirBias; // 0x5e8
	float posBiasMultiplier; // 0x5ec
	float dirBiasMultiplier; // 0x5f0
	EMotivityInputMode CurrentInputMode; // 0x5f4
	EMotivityMovementMode CurrentMovementMode; // 0x5f6
	bool bIsStrafing; // 0x5f7
	bool bIsMoving; // 0x5f8
	bool bIsNearlyAtDestination; // 0x600
	bool bUseDecoupling; // 0x620
	float maxDecouple; // 0x63c
	float maxAngleDecouple; // 0x640
	FVector LastInputVector_Replicated; // 0x644
	FVector StickInput_Replicated; // 0x650
	UDataTable* CurrentMoveDatabase; // 0x660
	int32_t DefaultMoveStyleIndex; // 0x668
	FMovementStyle CurrentMoveStyle; // 0x670
	int32_t CurMoveStyleIndex; // 0x698
	int32_t CurrentGaitIndex; // 0x69c
	bool bhasInputThisFrame; // 0x6a0
	FName CurrentMotivityTag; // 0x6a4
	float TrajectoryGoalReachTolerance; // 0x704
	float DestinationRotation_Replicated; // 0x708
	bool bHasOverridenGait; // 0x70c
	bool bHasReachedLastPoint; // 0x70d
	bool bEnableTrajErrorWarping; // 0x70e
	float WarpRate; // 0x710
	float MinTrajectoryLength; // 0x714
	FVector2D ErrorActivationRange; // 0x718
};

struct UNiagaraSettings {
	FSoftObjectPath DefaultEffectType; // 0x38
	TArray<FText> QualityLevels; // 0x50
	TMap<FString, FText> ComponentRendererWarningsPerClass; // 0x60
	ETextureRenderTargetFormat DefaultRenderTargetFormat; // 0xb0
	ENiagaraGpuBufferFormat DefaultGridFormat; // 0xb1
	ENiagaraDefaultRendererMotionVectorSetting DefaultRendererMotionVectorSetting; // 0xb4
	ENDISkelMesh_GpuMaxInfluences NDISkelMesh_GpuMaxInfluences; // 0xb8
	ENDISkelMesh_GpuUniformSamplingFormat NDISkelMesh_GpuUniformSamplingFormat; // 0xb9
	ENDISkelMesh_AdjacencyTriangleIndexFormat NDISkelMesh_AdjacencyTriangleIndexFormat; // 0xba
	UNiagaraEffectType* DefaultEffectTypePtr; // 0xc0
};

struct UParticleModuleAttractorLine {
	FVector EndPoint0; // 0x30
	FVector EndPoint1; // 0x3c
	FRawDistributionFloat Range; // 0x48
	FRawDistributionFloat Strength; // 0x78
};

struct ASplineTrigger {
	FMulticastInlineDelegate Delegate_OnSplineEnclosureEntered; // 0x220
	FMulticastInlineDelegate Delegate_OnSplineEnclosureExited; // 0x230
	char bEnabled : 1; // 0x240
	char bDrawDebugElements : 1; // 0x240
	FVector AverageSplinePointLocation; // 0x244
	char bIsOutsideSplineEnclosure : 1; // 0x250
	USplineComponent* SplineComponent; // 0x258
};

struct UMovieSceneNiagaraParameterTrack {
	FNiagaraVariable Parameter; // 0xa0
};

struct UMaterialExpressionSceneDepthWithoutWater {
	EMaterialSceneAttributeInputMode InputMode; // 0x40
	FExpressionInput Input; // 0x44
	FVector2D ConstInput; // 0x58
	float FallbackDepth; // 0x60
};

struct UParticleModuleCollision {
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

struct UBTDecorator_CompareBBEntries {
	EBlackBoardEntryComparison Operator; // 0x68
	FBlackboardKeySelector BlackboardKeyA; // 0x70
	FBlackboardKeySelector BlackboardKeyB; // 0x98
};

struct UPhysicsCollisionHandler {
	float ImpactThreshold; // 0x28
	float ImpactReFireDelay; // 0x2c
	USoundBase* DefaultImpactSound; // 0x30
	float LastImpactSoundTime; // 0x38
};

struct UMaterialFunctionInstance {
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

struct UForceFeedbackComponent {
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

struct UCapsuleComponent {
	float CapsuleHalfHeight; // 0x468
	float CapsuleRadius; // 0x46c
};

struct UParticleModuleTypeDataRibbon {
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

struct ABloodPool {
	UDecalComponent* Decal; // 0x220
};

struct UChallenge {
	FText ChallengeName; // 0x28
	FText ChallengeDescription; // 0x40
	FName ChallengeProgressName; // 0x58
	int32_t ChallengeProgressCurrent; // 0x60
	int32_t ChallengeProgressMax; // 0x64
	bool bHiddenChallenge; // 0x68
	bool bChallengeComplete; // 0x69
	bool bLevelSpecificChallenge; // 0x6a
};

struct UMaterialExpressionRuntimeVirtualTextureSample {
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

struct UMovieSceneEventSection {
	FNameCurve Events; // 0xe8
	FMovieSceneEventSectionData EventData; // 0x160
};

struct UAREnvironmentProbeComponent {
	FAREnvironmentProbeUpdatePayload ReplicatedPayload; // 0x280
};

struct UEngineMessage {
	FString FailedPlaceMessage; // 0x28
	FString MaxedOutMessage; // 0x38
	FString EnteredMessage; // 0x48
	FString LeftMessage; // 0x58
	FString GlobalNameChange; // 0x68
	FString SpecEnteredMessage; // 0x78
	FString NewPlayerMessage; // 0x88
	FString NewSpecMessage; // 0x98
};

struct UReadyOrNotMetaProfile {
	FString SaveSlotName; // 0x28
	uint32_t UserIndex; // 0x38
	TArray<FString> SingleplayerProfiles; // 0x40
	FString CurrentProfile; // 0x50
};

struct ALandscapeProxy {
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

struct UWorldComposition {
	TArray<ULevelStreaming*> TilesStreaming; // 0x48
	double TilesStreamingTimeThreshold; // 0x58
	bool bLoadAllTilesDuringCinematic; // 0x60
	bool bRebaseOriginIn3DSpace; // 0x61
	float RebaseOriginDistance; // 0x64
};

struct ALobbyGM {
	TArray<AReadyOrNotPlayerController*> InitalizedPlayerControllers; // 0x678
};

struct UReverbEffect {
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

struct UMaterialExpressionLogarithm10 {
	FExpressionInput X; // 0x40
};

struct UAnimNotify_ItemSwitchSocket {
	EItemSocket DesiredItemSocket; // 0x38
};

struct USafeZoneSlot {
	bool bIsTitleSafe; // 0x38
	FMargin SafeAreaScale; // 0x3c
	EHorizontalAlignment HAlign; // 0x4c
	EVerticalAlignment VAlign; // 0x4d
	FMargin Padding; // 0x50
};

struct UParticleModuleMeshRotationRate_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x78
};

struct UAnimCompress_PerTrackCompression {
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

struct UPaperTerrainComponent {
	UPaperTerrainMaterial* TerrainMaterial; // 0x450
	bool bClosedSpline; // 0x458
	bool bFilledSpline; // 0x459
	UPaperTerrainSplineComponent* AssociatedSpline; // 0x460
	int32_t RandomSeed; // 0x468
	float SegmentOverlapAmount; // 0x46c
	FLinearColor TerrainColor; // 0x470
	int32_t ReparamStepsPerSegment; // 0x480
	ESpriteCollisionMode SpriteCollisionDomain; // 0x484
	float CollisionThickness; // 0x488
	UBodySetup* CachedBodySetup; // 0x490
};

struct UNamedInterfaces {
	TArray<FNamedInterface> NamedInterfaces; // 0x28
	TArray<FNamedInterfaceDef> NamedInterfaceDefs; // 0x38
};

struct UEnvQueryGenerator_CurrentLocation {
	UEnvQueryContext* QueryContext; // 0x50
};

struct AHUD_COOP_C {
	USceneComponent* DefaultSceneRoot; // 0x318
};

struct UCancelFindSessionsCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UW_ItemSelection_ItemGroupList_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278
	UHorizontalBox* ItemList_Container; // 0x280
	UW_ItemSelection_ItemGroup_C* W_ItemSelection_ItemGroup_2; // 0x288
	UW_ItemSelection_ItemGroup_C* W_ItemSelection_ItemGroup_3; // 0x290
	UW_ItemSelection_ItemGroup_C* W_ItemSelection_ItemGroup_4; // 0x298
	UW_ItemSelection_ItemGroup_C* W_ItemSelection_ItemGroup_5; // 0x2a0
	UW_ItemSelection_ItemGroup_C* W_ItemSelection_ItemGroup_6; // 0x2a8
	UW_ItemSelection_ItemGroup_C* W_ItemSelection_ItemGroup_75; // 0x2b0
	int32_t SelectedColumn; // 0x2b8
	int32_t PreviousSelectedColumn; // 0x2bc
	TArray<UW_ItemSelection_ItemList_C*> ItemLists; // 0x2c0
	TArray<FItemSelectionPanelSetting_ItemGroup> ItemGroups; // 0x2d0
	APlayerCharacter* PlayerCharacter; // 0x2e0
	bool bNVGOn; // 0x2e8
};

struct UMotivityProcessedData {
	float PoseInterval; // 0x28
	TArray<FMotionCandidate> PoseCandidates; // 0x30
	TArray<FMotionCandidate> IdlePoseCandidates; // 0x40
	TArray<FName> ReferencedBones; // 0x50
	TArray<UAnimSequence*> AnimationsInMemory; // 0x60
	TArray<UAnimSequence*> IdleAnimationsInMemory; // 0x70
	USkeleton* ReferencedSkeleton; // 0x80
	FMotivityTimeData PredictionData; // 0x88
	FMotivityCalibrationData CalibrationData; // 0x98
};

struct ANiagaraActor {
	UNiagaraComponent* NiagaraComponent; // 0x220
	char bDestroyOnSystemFinish : 1; // 0x228
};

struct UAnimCurveCompressionSettings {
	UAnimCurveCompressionCodec* Codec; // 0x28
};

struct USkyLightComponent {
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
	UTextureCube* BlendDestinationCubemap; // 0x328
};

struct UParticleModuleLocationEmitter {
	FName EmitterName; // 0x30
	ELocationEmitterSelectionMethod SelectionMethod; // 0x38
	char InheritSourceVelocity : 1; // 0x3c
	float InheritSourceVelocityScale; // 0x40
	char bInheritSourceRotation : 1; // 0x44
	float InheritSourceRotationScale; // 0x48
};

struct UDatasmithCineCameraActorTemplate {
	FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings; // 0x30
};

struct UW_ControlsResetBinding_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Button_Disabled; // 0x268
	UImage* Button_Dn; // 0x270
	UImage* Button_Hi; // 0x278
	UImage* Button_Up; // 0x280
	UButton* ResetButton; // 0x288
	FName BindName; // 0x290
	FMulticastInlineDelegate OnResetClicked; // 0x298
	FMulticastInlineDelegate OnResetHovered; // 0x2a8
	FMulticastInlineDelegate OnResetUnhovered; // 0x2b8
	FMulticastInlineDelegate OnResetPressed; // 0x2c8
	FMulticastInlineDelegate OnResetReleased; // 0x2d8
	bool bAxis; // 0x2e8
	UTextBlock* DescriptionText; // 0x2f0
	FText Description; // 0x2f8
	TArray<UW_ControlsBind_C*> BindingButtons; // 0x310
	UFMODEvent* ResetBindingClickedSound; // 0x320
	UFMODEvent* ResetBindingHoveredSound; // 0x328
	TArray<FAxisMappingStruct> AxisMappings; // 0x330
	TArray<FActionMappingStruct> ActionMappings; // 0x340
	TArray<FAxisMappingStruct> TempRemoveAxisMappings; // 0x350
	TArray<FActionMappingStruct> TempRemoveActionMappings; // 0x360
};

struct UFont {
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

struct AArrestXSuspects {
	int32_t RequiredArrests; // 0x278
};

struct UMaterialExpressionBlendMaterialAttributes {
	FMaterialAttributesInput A; // 0x40
	FMaterialAttributesInput B; // 0x58
	FExpressionInput Alpha; // 0x70
	EMaterialAttributeBlend PixelAttributeBlendType; // 0x84
	EMaterialAttributeBlend VertexAttributeBlendType; // 0x85
};

struct UNiagaraDataInterfaceAudioOscilloscope {
	USoundSubmix* Submix; // 0x38
	int32_t Resolution; // 0x40
	float ScopeInMilliseconds; // 0x44
};

struct UAsyncActionLoadPrimaryAssetClass {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UHesitationBarWidget {
	UImage* HesitationBar_Image; // 0x260
	UWidgetAnimation* BreakAnim; // 0x268
	UMaterialInterface* HesitationBarMaterial; // 0x270
	FName ProgressParamName; // 0x278
	FName ComplianceStartParamName; // 0x280
	FName ComplianceEndParamName; // 0x288
	FName ComplianceColorParamName; // 0x290
	FName DefianceStartParamName; // 0x298
	FName DefianceEndParamName; // 0x2a0
	FName DefianceColorParamName; // 0x2a8
	float PercentageFilled; // 0x2b0
	UMaterialInstanceDynamic* MID_HesitationBar; // 0x2b8
};

struct UPawnAction_Repeat {
	UPawnAction* ActionToRepeat; // 0x90
	UPawnAction* RecentActionCopy; // 0x98
	EPawnActionFailHandling ChildFailureHandlingMode; // 0xa0
};

struct UUserInterfaceSettings {
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

struct UW_FireMode_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* FireMode_Icon_Image; // 0x268
	UTextBlock* FireMode_Text; // 0x270
	FSlateBrush Icon; // 0x278
	FLinearColor SelectedColor; // 0x300
	FText FireModeText; // 0x310
};

struct UInAppPurchaseComponent {
	FMulticastInlineDelegate InAppPurchaseLogMessage; // 0xb0
	FMulticastInlineDelegate GetItemsDetailsSuccess; // 0xc0
	FMulticastInlineDelegate GetItemsDetailsFailure; // 0xd0
	FMulticastInlineDelegate PurchaseConfirmationSuccess; // 0xe0
	FMulticastInlineDelegate PurchaseConfirmationFailure; // 0xf0
	FMulticastInlineDelegate GetPurchaseHistorySuccess; // 0x100
	FMulticastInlineDelegate GetPurchaseHistoryFailure; // 0x110
};

struct UW_Briefing_Timeline_TrackWave_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UW_Text_C* txt_Debug; // 0x268
	UVerticalBox* VB_Waveform; // 0x270
	bool bIsDesignTime; // 0x278
	bool bIsPlaying; // 0x279
	bool bIsEvent; // 0x27a
	bool bEventInProgress; // 0x27b
	bool bIsFinished; // 0x27c
	float CurrentPlayTime; // 0x280
	float Duration; // 0x284
	USoundWave* SoundWaveAsset; // 0x288
	float ProgressMade; // 0x290
	float AmpUpdateFrequency; // 0x294
	TMap<float, FTimelineEvent> EventEntries; // 0x298
	FMulticastInlineDelegate TimelineEventFired; // 0x2e8
	FMulticastInlineDelegate TimelineEventEnded; // 0x2f8
	float CurrentEventID; // 0x308
	TMap<float, UW_Briefing_Timeline_TrackWaveElement_C*> EventWaveSegments; // 0x310
	float TickInterval; // 0x360
};

struct UMaterialExpressionClamp {
	FExpressionInput Input; // 0x40
	FExpressionInput Min; // 0x54
	FExpressionInput Max; // 0x68
	EClampMode ClampMode; // 0x7c
	float MinDefault; // 0x80
	float MaxDefault; // 0x84
};

struct UBehaviorTree {
	UBTCompositeNode* RootNode; // 0x30
	UBlackboardData* BlackboardAsset; // 0x38
	TArray<UBTDecorator*> RootDecorators; // 0x40
	TArray<FBTDecoratorLogic> RootDecoratorOps; // 0x50
};

struct UMaterialExpressionLogarithm2 {
	FExpressionInput X; // 0x40
};

struct UANIMBP_Player_TP_V2_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xe20
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_12; // 0xe28
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_11; // 0xf30
	FAnimNode_LegIK AnimGraphNode_LegIK; // 0x1038
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_10; // 0x1130
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_24; // 0x1238
	FAnimNode_Slot AnimGraphNode_Slot_7; // 0x1390
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_9; // 0x13d8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8; // 0x14e0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7; // 0x15e8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_58; // 0x16f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_104; // 0x1718
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_24; // 0x1798
	FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer_8; // 0x1860
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_23; // 0x18d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_103; // 0x19a0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_19; // 0x1a20
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_23; // 0x1ad0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_102; // 0x1c28
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_18; // 0x1ca8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_22; // 0x1d58
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_101; // 0x1eb0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_33; // 0x1f30
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_21; // 0x1fd0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_20; // 0x2128
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_30; // 0x2280
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_29; // 0x22a8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_28; // 0x22d0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_27; // 0x22f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_26; // 0x2320
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_25; // 0x2348
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_24; // 0x2370
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_23; // 0x2398
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_22; // 0x23c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_100; // 0x23e8
	FAnimNode_StateResult AnimGraphNode_StateResult_21; // 0x2468
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_99; // 0x2498
	FAnimNode_StateResult AnimGraphNode_StateResult_20; // 0x2518
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_98; // 0x2548
	FAnimNode_StateResult AnimGraphNode_StateResult_19; // 0x25c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_97; // 0x25f8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_22; // 0x2678
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_21; // 0x2740
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_20; // 0x2768
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_19; // 0x2790
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18; // 0x27b8
	FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer_7; // 0x27e0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_21; // 0x2858
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_18; // 0x2920
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_17; // 0x2970
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_16; // 0x29c0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_17; // 0x2a10
	FAnimNode_StateResult AnimGraphNode_StateResult_18; // 0x2ac0
	FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer_6; // 0x2af0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_20; // 0x2b68
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_15; // 0x2c30
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_14; // 0x2c80
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_13; // 0x2cd0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_16; // 0x2d20
	FAnimNode_StateResult AnimGraphNode_StateResult_17; // 0x2dd0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_57; // 0x2e00
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_56; // 0x2e28
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_32; // 0x2e50
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17; // 0x2ef0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0x2f18
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0x2f40
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x2f68
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_96; // 0x2f90
	FAnimNode_StateResult AnimGraphNode_StateResult_16; // 0x3010
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_12; // 0x3040
	FAnimNode_StateResult AnimGraphNode_StateResult_15; // 0x3090
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_55; // 0x30c0
	FAnimNode_StateResult AnimGraphNode_StateResult_14; // 0x30e8
	FAnimNode_StateMachine AnimGraphNode_StateMachine_6; // 0x3118
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_7; // 0x31c8
	FAnimNode_StateResult AnimGraphNode_StateResult_13; // 0x3290
	FAnimNode_StateMachine AnimGraphNode_StateMachine_5; // 0x32c0
	FAnimNode_StateResult AnimGraphNode_StateResult_12; // 0x3370
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_95; // 0x33a0
	FAnimNode_StateResult AnimGraphNode_StateResult_11; // 0x3420
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_94; // 0x3450
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_19; // 0x34d0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x3598
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x35c0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x35e8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x3610
	FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer_5; // 0x3638
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_18; // 0x36b0
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_11; // 0x3778
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_10; // 0x37c8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_9; // 0x3818
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_15; // 0x3868
	FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x3918
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_8; // 0x3948
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_7; // 0x3998
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_6; // 0x39e8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_17; // 0x3a38
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_14; // 0x3b00
	FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer_4; // 0x3bb0
	FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x3c28
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_54; // 0x3c58
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_31; // 0x3c80
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_53; // 0x3d20
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_30; // 0x3d48
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_52; // 0x3de8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_29; // 0x3e10
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_51; // 0x3eb0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_6; // 0x3ed8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_50; // 0x3fa0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x3fc8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x3ff0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x4018
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x4040
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x4068
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_5; // 0x4090
	FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x40e0
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_4; // 0x4110
	FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x4160
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_49; // 0x4190
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x41b8
	FAnimNode_StateMachine AnimGraphNode_StateMachine_4; // 0x41e8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_5; // 0x4298
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x4360
	FAnimNode_StateMachine AnimGraphNode_StateMachine_3; // 0x4390
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x4440
	FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x4470
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_12; // 0x4520
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_16; // 0x45e0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_93; // 0x46a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_92; // 0x4728
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_15; // 0x47a8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_28; // 0x4870
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_27; // 0x4910
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_91; // 0x49b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_90; // 0x4a30
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_19; // 0x4ab0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_48; // 0x4c08
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_47; // 0x4c30
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_46; // 0x4c58
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_18; // 0x4c80
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_13; // 0x4dd8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_45; // 0x4e88
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_44; // 0x4eb0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_9; // 0x4ed8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_17; // 0x5068
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_26; // 0x51c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_43; // 0x5260
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_25; // 0x5288
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_16; // 0x5328
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_42; // 0x5480
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_8; // 0x54a8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_24; // 0x5638
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_23; // 0x56d8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_41; // 0x5778
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_15; // 0x57a0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_7; // 0x58f8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_40; // 0x5a88
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_39; // 0x5ab0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_38; // 0x5ad8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_14; // 0x5b00
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_11; // 0x5c58
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_37; // 0x5d18
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_14; // 0x5d40
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_36; // 0x5e08
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_13; // 0x5e30
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_22; // 0x5f88
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_35; // 0x6028
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_34; // 0x6050
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_10; // 0x6078
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_33; // 0x6138
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_13; // 0x6160
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_12; // 0x6228
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_89; // 0x6380
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_21; // 0x6400
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_32; // 0x64a0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6; // 0x64c8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_11; // 0x65d0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_20; // 0x6728
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_2; // 0x67d0
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK; // 0x69b0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_6; // 0x6b90
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_88; // 0x6d20
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_87; // 0x6da0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_12; // 0x6e20
	FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer_3; // 0x6ee8
	FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer_2; // 0x6f60
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_11; // 0x6fd8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_86; // 0x70a0
	FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer; // 0x7120
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_31; // 0x7198
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_5; // 0x71c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_30; // 0x7350
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_4; // 0x7378
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_29; // 0x7508
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_3; // 0x7530
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver_6; // 0x76c0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_2; // 0x7828
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_85; // 0x79b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_84; // 0x7a38
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_83; // 0x7ab8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_82; // 0x7b38
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_10; // 0x7bb8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_19; // 0x7d10
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_81; // 0x7db0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_80; // 0x7e30
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_79; // 0x7eb0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_78; // 0x7f30
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_9; // 0x7fb0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5; // 0x8108
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_77; // 0x8210
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_76; // 0x8290
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_75; // 0x8310
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_74; // 0x8390
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_8; // 0x8410
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x8568
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_73; // 0x8670
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_72; // 0x86f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_71; // 0x8770
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_70; // 0x87f0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_7; // 0x8870
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x89c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_69; // 0x8ad0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_68; // 0x8b50
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_67; // 0x8bd0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_66; // 0x8c50
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_6; // 0x8cd0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x8e28
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_10; // 0x8f30
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3; // 0x8ff8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_12; // 0x9048
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_11; // 0x90f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_65; // 0x91a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_64; // 0x9228
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_63; // 0x92a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_62; // 0x9328
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_10; // 0x93a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_61; // 0x9458
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_60; // 0x94d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_59; // 0x9558
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_58; // 0x95d8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_9; // 0x9658
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_57; // 0x9708
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_56; // 0x9788
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_55; // 0x9808
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_54; // 0x9888
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_8; // 0x9908
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_7; // 0x99b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_53; // 0x9a68
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_52; // 0x9ae8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_51; // 0x9b68
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_50; // 0x9be8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_49; // 0x9c68
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_48; // 0x9ce8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_47; // 0x9d68
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_46; // 0x9de8
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver_5; // 0x9e68
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_28; // 0x9fd0
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver_4; // 0x9ff8
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver_3; // 0xa160
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver_2; // 0xa2c8
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver; // 0xa430
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_18; // 0xa598
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_45; // 0xa638
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_44; // 0xa6b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_43; // 0xa738
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_42; // 0xa7b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_41; // 0xa838
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_40; // 0xa8b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_39; // 0xa938
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_38; // 0xa9b8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_6; // 0xaa38
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_37; // 0xaae8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_36; // 0xab68
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_9; // 0xabe8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_27; // 0xacb0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_17; // 0xacd8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_35; // 0xad78
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_34; // 0xadf8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xae78
	FAnimNode_Slot AnimGraphNode_Slot_6; // 0xaf80
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0xafc8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_9; // 0xb018
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_8; // 0xb0d8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_7; // 0xb1a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_33; // 0xb268
	FAnimNode_SlopeWarping AnimGraphNode_SlopeWarping; // 0xb2e8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_16; // 0xb510
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_32; // 0xb5b0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_6; // 0xb630
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_31; // 0xb6f8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_15; // 0xb778
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_30; // 0xb818
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_29; // 0xb898
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_14; // 0xb918
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_28; // 0xb9b8
	FAnimNode_Slot AnimGraphNode_Slot_5; // 0xba38
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xba80
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5; // 0xbaa0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_5; // 0xbbf8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_27; // 0xbca8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_26; // 0xbd28
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_25; // 0xbda8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_24; // 0xbe28
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_23; // 0xbea8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_22; // 0xbf28
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_21; // 0xbfa8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_20; // 0xc028
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_4; // 0xc0a8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_26; // 0xc170
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0xc198
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0xc1c0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0xc1e8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xc210
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_19; // 0xc238
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0xc2b8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0xc2e8
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xc338
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_18; // 0xc368
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0xc3e8
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xc418
	FAnimNode_Root AnimGraphNode_Root; // 0xc4c8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xc4f8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0xc518
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_4; // 0xc6a8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_8; // 0xc758
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_13; // 0xc818
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_17; // 0xc8b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_16; // 0xc938
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_25; // 0xc9b8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_24; // 0xc9e0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0xca08
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_23; // 0xcb60
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_22; // 0xcb88
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_12; // 0xcbb0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_7; // 0xcc50
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_21; // 0xcd10
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15; // 0xcd38
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14; // 0xcdb8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_11; // 0xce38
	FAnimNode_Slot AnimGraphNode_Slot_4; // 0xced8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_10; // 0xcf20
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13; // 0xcfc0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0xd040
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0xd0c0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_3; // 0xd140
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0xd1f0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_20; // 0xd348
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_6; // 0xd370
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_19; // 0xd430
	FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot; // 0xd458
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_9; // 0xd4e8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_8; // 0xd588
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0xd628
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_5; // 0xd6a8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_18; // 0xd768
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_5; // 0xd790
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_17; // 0xd858
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_16; // 0xd880
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_3; // 0xd8a8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_4; // 0xd970
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_15; // 0xda30
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_4; // 0xda58
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_14; // 0xdb20
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_13; // 0xdb48
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_7; // 0xdb70
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0xdc10
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_12; // 0xdd68
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_11; // 0xdd90
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0xddb8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6; // 0xde38
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_2; // 0xded8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0xdf88
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0xe008
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0xe088
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0xe108
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_2; // 0xe188
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; // 0xe250
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_10; // 0xe2f0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3; // 0xe318
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_9; // 0xe3e0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8; // 0xe408
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3; // 0xe430
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0xe4f0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0xe590
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0xe630
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0xe6b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0xe760
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xe7e0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0xe860
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0xe900
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2; // 0xe9c8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0xea90
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0xeab8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0xeae0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0xeba0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0xebc8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0xec90
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0xecb8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xece0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xed60
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xee00
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xee28
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xee50
	FAnimNode_Slot AnimGraphNode_Slot_3; // 0xefa8
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0xeff0
	FAnimNode_Slot AnimGraphNode_Slot; // 0xf038
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0xf080
	FRotator AimDeltaRot; // 0xf140
	float LeanTransitionSpeeds; // 0xf14c
	float DirectionBlendTime; // 0xf150
	float WeaponUpBlendTime; // 0xf154
	float AnimSpeedForward; // 0xf158
	float AnimSpeedRight; // 0xf15c
	float AnimWarpPlayrateThreshold; // 0xf160
	FVector LeftJointLoc; // 0xf164
	FVector RightJoinLoc; // 0xf170
	float CharSpeed; // 0xf17c
	float InputUpDown; // 0xf180
	FPoseSnapshot DeathPose; // 0xf188
	float TurnRemainingStartTime; // 0xf1c0
	float SlopeWarpingAlpha; // 0xf1c4
	bool bIsVIP1911; // 0xf1c8
	bool bIsCustomizing; // 0xf1c9
	bool bHoldingVIPWeapon; // 0xf1ca
	bool bHoldingWeaponAsMLO; // 0xf1cb
	bool bCanTurnInPlace; // 0xf1cc
	bool IsItemOrPistolMotionBlock; // 0xf1cd
	bool IsRifleMotionBlock; // 0xf1ce
	bool bIsCrouchingWithShield; // 0xf1cf
	float IsNotCustomizing_AsFloat; // 0xf1d0
	float CrouchHighPoseAdditiveAlpha; // 0xf1d4
	float StandHighPoseAdditiveAlpha; // 0xf1d8
	float LeftHandIKAlpha_ItemBased; // 0xf1dc
	FVector ZHeightLeanAdjustment; // 0xf1e0
	float IsCrouchingWithShield_AsFloat; // 0xf1ec
};

struct UARComponent {
	FGuid NativeID; // 0x1f8
	bool bUseDefaultReplication; // 0x238
	UMaterialInterface* DefaultMeshMaterial; // 0x240
	UMaterialInterface* DefaultWireframeMeshMaterial; // 0x248
	UMRMeshComponent* MRMeshComponent; // 0x250
	UARTrackedGeometry* MyTrackedGeometry; // 0x258
};

struct ACTF_Flag {
	USceneComponent* SceneComponent; // 0x220
	UStaticMeshComponent* FlagMeshComponent; // 0x228
	UBoxComponent* CaptureBoxComponent; // 0x230
	UObjectiveMarkerComponent* ObjectiveMarkerComponent; // 0x238
	FName BoneToAttach; // 0x240
};

struct UReloadSafelyActivity {
	TArray<ACoverActor*> CoverActors; // 0x1b8
};

struct AArmor_Heavy_V2_C {
	UCapsuleComponent* Collision; // 0xa30
};

struct ULandscapeInfo {
	LazyObjectProperty LandscapeActor; // 0x28
	FGuid LandscapeGuid; // 0x44
	int32_t ComponentSizeQuads; // 0x54
	int32_t SubsectionSizeQuads; // 0x58
	int32_t ComponentNumSubsections; // 0x5c
	FVector DrawScale; // 0x60
	TArray<ALandscapeStreamingProxy*> Proxies; // 0x110
};

struct USequenceCameraShakePattern {
	UCameraAnimationSequence* Sequence; // 0x28
	float PlayRate; // 0x30
	float Scale; // 0x34
	float BlendInTime; // 0x38
	float BlendoutTime; // 0x3c
	float RandomSegmentDuration; // 0x40
	bool bRandomSegment; // 0x44
	USequenceCameraShakeSequencePlayer* Player; // 0x48
	USequenceCameraShakeCameraStandIn* CameraStandIn; // 0x50
};

struct UReadyOrNotProfile {
	FString SaveSlotName; // 0x28
	uint32_t UserIndex; // 0x38
	TMap<FString, FBasicLevelStats> LevelStats; // 0x40
	TMap<FName, int32_t> ChallengeProgress; // 0x90
	TMap<FString, float> CourseTimes; // 0xe0
	float Cash; // 0x130
};

struct ARectLight {
	URectLightComponent* RectLightComponent; // 0x230
};

struct UPaperGroupedSpriteComponent {
	TArray<UMaterialInterface*> InstanceMaterials; // 0x478
	TArray<FSpriteInstanceData> PerInstanceSpriteData; // 0x488
};

struct APlayerController {
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

struct UMotivityMoveData {
	TArray<FMovementStyle> MovementStyles; // 0x30
};

struct AGameMode {
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

struct UThrobber {
	int32_t NumberOfPieces; // 0x108
	bool bAnimateHorizontally; // 0x10c
	bool bAnimateVertically; // 0x10d
	bool bAnimateOpacity; // 0x10e
	USlateBrushAsset* PieceImage; // 0x110
	FSlateBrush Image; // 0x118
};

struct UStereoLayerComponent {
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

struct UUserDefinedCaptureProtocol {
	UWorld* World; // 0x58
};

struct UW_TutorialMessageEntry_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image_54; // 0x268
	UTextBlock* MessageContent; // 0x270
	FText MessageContentText; // 0x278
	FSlateFontInfo FontInfo; // 0x290
};

struct AHelmet_BallisticMask_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1550
	APlayerState* PlayerState; // 0x1558
};

struct ADefaultImpactEffects_C {
	USceneComponent* DefaultSceneRoot; // 0xcb0
};

struct UPlatformMediaSource {
	UMediaSource* MediaSource; // 0x80
};

struct AKingOfTheHostageGS {
	float RedTeam_RoundTimeRemaining; // 0x6c0
	float BlueTeam_RoundTimeRemaining; // 0x6c4
};

struct UW_Header_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UNamedSlot* AugmentSlot; // 0x268
	UW_Button_C* btn_Header; // 0x270
	UHorizontalBox* HB_Header; // 0x278
	UW_Text_C* txt_Label; // 0x280
	FText LabelText; // 0x288
	bool bIsButton; // 0x2a0
	ETextFlowDirection Layout; // 0x2a1
};

struct UW_PersonalizationCategory_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UW_StandardButton_C* Button; // 0x268
	UUniformGridPanel* GridPanel; // 0x270
	UOverlay* SelectedItemInfo_Container; // 0x278
	UW_Text_C* txt_CategoryName; // 0x280
	FText Category; // 0x288
	StandardButtonStyles ButtonStyle; // 0x2a0
	FMulticastInlineDelegate OnClicked; // 0x2a8
};

struct ULandscapeMeshCollisionComponent {
	FGuid MeshGuid; // 0x530
};

struct UMaterialExpressionInverseLinearInterpolate {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	FExpressionInput Value; // 0x68
	float ConstA; // 0x7c
	float ConstB; // 0x80
	float ConstValue; // 0x84
	bool bClampResult; // 0x88
};

struct UW_Briefing_Intel_Entry_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UW_Button_C* btn_Intel; // 0x268
	UImage* img_IntelThumbnail; // 0x270
	UBorder* SelectionBorder; // 0x278
	FSlateBrush DocumentThumbnail; // 0x280
	E_Briefing_Intel_Types DocumentType; // 0x308
	FCharacterBio Bio; // 0x310
	FMulticastInlineDelegate BioIntelClicked; // 0x430
	FST_Briefing_Evidence Media; // 0x440
	bool bIsBio; // 0x4e0
	bool bIsMedia; // 0x4e1
	bool bIsHovered; // 0x4e2
	FMulticastInlineDelegate MediaIntelClicked; // 0x4e8
	bool bIsActive; // 0x4f8
	FLinearColor colTintActive; // 0x4fc
	FSlateBrush BorderActiveBrush; // 0x510
	FSlateBrush BorderNormalBrush; // 0x598
};

struct UNiagaraDataInterfaceVectorCurve {
	FRichCurve XCurve; // 0x70
	FRichCurve YCurve; // 0xf0
	FRichCurve ZCurve; // 0x170
};

struct UMaterialExpressionMapARPassthroughCameraUV {
	FExpressionInput Coordinates; // 0x40
};

struct UMaterialExpressionVectorParameter {
	FLinearColor DefaultValue; // 0x58
	bool bUseCustomPrimitiveData; // 0x68
	char PrimitiveDataIndex; // 0x69
};

struct UMapActorWidget {
	UTextBlock* MapActor_Text; // 0x278
	AActor* ActorToTrack; // 0x280
	bool bUseActorRotation; // 0x288
	bool bUseLocation; // 0x289
	FVector LocationToTrack; // 0x28c
	float RotationOffset; // 0x298
	float MapSize; // 0x29c
	float MapTextureSize; // 0x2a0
	FVector2D MapOrigin; // 0x2a4
};

struct UConversation {
	TArray<FConversationData> ConversationData; // 0x40
	FMulticastInlineDelegate OnConversationContinuing; // 0x60
	FMulticastInlineDelegate OnEndConversation; // 0x70
};

struct UInAppPurchaseQueryCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UNiagaraDataInterfaceRenderTarget2DArray {
	FIntVector Size; // 0xd8
	ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe4
	char bInheritUserParameterSettings : 1; // 0xe5
	char bOverrideFormat : 1; // 0xe5
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8
	TMap<uint64_t, UTextureRenderTarget2DArray*> ManagedRenderTargets; // 0x108
};

struct UPlatformGameInstance {
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

struct UEdGraphNode {
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
	int32_t ErrorType; // 0x70
	FString ErrorMsg; // 0x78
	FGuid NodeGuid; // 0x88
};

struct UUniformGridPanel {
	FMargin SlotPadding; // 0x120
	float MinDesiredSlotWidth; // 0x130
	float MinDesiredSlotHeight; // 0x134
};

struct UReflectionCaptureComponent {
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

struct UEditableGameplayTagQueryExpression_AllTagsMatch {
	FGameplayTagContainer Tags; // 0x28
};

struct UAxisPositionGizmo {
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

struct UGizmoPlaneScaleParameterSource {
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

struct UGetFriendsCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UMovieScenePropertyTrack {
	UMovieSceneSection* SectionToKey; // 0x90
	FMovieScenePropertyBinding PropertyBinding; // 0x98
	TArray<UMovieSceneSection*> Sections; // 0xb0
};

struct USkyAtmosphereComponent {
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

struct UPhysicalMaterial {
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
	EPhysicalSurface surfaceType; // 0x60
};

struct UProjectileMovementComponent {
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
};

struct UAnimNotify_PlayMontage {
	UAnimMontage* Montage; // 0x38
};

struct UEndTurnCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UWidgetsData {
	UUserWidget* MagCheckUI; // 0x30
	TSoftClassPtr<UObject> FireModeUI; // 0x38
	TSoftClassPtr<UObject> StartupMenu; // 0x60
	TSoftClassPtr<UObject> AuthenticationMenu; // 0x88
	TSoftClassPtr<UObject> MainMenu; // 0xb0
	TSoftClassPtr<UObject> OptionsMenu; // 0xd8
	TSoftClassPtr<UObject> CustomizationMenu; // 0x100
	TSoftClassPtr<UObject> ChatBox; // 0x128
	TArray<TSoftClassPtr<UObject>> Overlays; // 0x150
	TSoftClassPtr<UObject> Scoreboard; // 0x160
	UUserWidget* LoadingScreen; // 0x188
	TSoftClassPtr<UObject> MessageDisplayBoxClass; // 0x190
	TSoftClassPtr<UObject> Leaderboards; // 0x1b8
	TSoftClassPtr<UObject> CrosshairOverlay; // 0x1e0
	TArray<USoundBase*> UISoundClasses; // 0x208
	TSoftClassPtr<UObject> EscapeMenu; // 0x218
	TSoftClassPtr<UObject> TacticalAuthorityWidget; // 0x240
	UWeaponWheelWidget* WeaponWheelWidget; // 0x268
	UBaseWidget* ItemSelectionWidget; // 0x270
};

struct UNiagaraDataInterfaceRenderTargetVolume {
	FIntVector Size; // 0xd8
	ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe4
	char bInheritUserParameterSettings : 1; // 0xe5
	char bOverrideFormat : 1; // 0xe5
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8
	TMap<uint64_t, UTextureRenderTargetVolume*> ManagedRenderTargets; // 0x108
};

struct UUserWidget {
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

struct UW_Briefing_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	UWidgetAnimation* animHide; // 0x2d8
	UWidgetAnimation* Fade; // 0x2e0
	UW_Briefing_Audio_C* Audio; // 0x2e8
	UW_Briefing_Intel_C* Intel; // 0x2f0
	UW_Briefing_Objectives_C* Objectives; // 0x2f8
	UPreMissionPlanning* PreMissionPlanning; // 0x300
	TArray<UW_BriefingTaskButton_C*> BriefingTaskButtons; // 0x308
	TArray<FST_Briefing_Evidence> DocumentsPlaceholder; // 0x318
	FLevelDataLookupTable LevelData; // 0x328
};

struct UObjectiveMarkerWidget {
	UObjectiveMarkerComponent* ParentComponent; // 0x278
	UCanvasPanel* RootCanvasPanel; // 0x280
	USizeBox* Icon_SizeBox; // 0x288
	UImage* Icon_Image; // 0x290
	UImage* DirectionalArrow_Image; // 0x298
	UTextBlock* DistanceInMeters_Text; // 0x2a0
	UTextBlock* MarkerName_Text; // 0x2a8
	FVector Location; // 0x2b0
	float DistanceToLocalPlayer; // 0x2bc
	float DirectionAngle; // 0x2c0
	char bHideDistance : 1; // 0x2c4
};

struct URoNAnimInstance_PlayerFP {
	UReadyOrNotWeaponAnimData* LastWeaponAnimData; // 0x520
	UReadyOrNotWeaponAnimData* EditorWeaponAnimData; // 0x528
	float LeanAngleY; // 0x530
	float LeanAngleZ; // 0x534
	FRotator MeshControlRotation; // 0x538
	FVector MeshPostureLeanOffset; // 0x544
	FVector MeshWeaponOffset; // 0x550
	FRotator MeshWeaponRotation; // 0x55c
	FRotator MeshWeaponFreeAimRotation; // 0x568
	FVector MeshWeaponLeanOffset; // 0x574
	FRotator MeshWeaponLeanRotation; // 0x580
	USkeletalMeshComponent* TPMeshReference; // 0x590
	float LazySpringStrength; // 0x598
	float ADS_Movement_Weight; // 0x59c
	float InteractionSlotAlpha; // 0x5a0
	float DefaultSlotAlpha; // 0x5a4
	float RollMoveInput; // 0x5a8
	float PelvisMovementBobAlpha; // 0x5ac
};

struct UFieldSystemMetaDataIteration {
	int32_t Iterations; // 0xb0
};

struct UAnimatedIconWidget {
	TArray<UImage*> IconImages; // 0x260
	int32_t CurrentIndex; // 0x270
	float ElapsedTime; // 0x274
	char bPaused : 1; // 0x278
	UOverlay* InteractCircle_Overlay; // 0x280
	USizeBox* InteractIcon_SizeBox; // 0x288
	UWidgetSwitcher* IconSwitcher; // 0x290
	UImage* ProgressCircle_Image; // 0x298
	UWidgetAnimation* Anim_Interact; // 0x2a0
	UWidgetAnimation* Anim_Focus; // 0x2a8
	FLinearColor InteractionInvalidTintColor; // 0x2b0
	UMaterialInterface* ProgressCircleMaterial; // 0x2c0
	FName ProgressParamName; // 0x2c8
	UInteractableComponent* ParentComponent; // 0x2d0
	UMaterialInstanceDynamic* MID_ProgressCircle; // 0x2d8
};

struct ASpawnGenerator {
	USceneComponent* SceneComponent; // 0x220
	UBillboardComponent* BillboardComponent; // 0x228
	ETeamType SpawnTeam; // 0x230
	uint16_t Rows; // 0x232
	uint16_t Columns; // 0x234
	float RowSpacing; // 0x238
	float ColumnSpacing; // 0x23c
	char bShowNodes : 1; // 0x240
	TArray<APlayerStart*> PlayerStarts; // 0x258
};

struct UCanvasPanelSlot {
	FAnchorData LayoutData; // 0x38
	bool bAutoSize; // 0x60
	int32_t ZOrder; // 0x64
};

struct UFMODEventControlTrack {
	TArray<UMovieSceneSection*> ControlSections; // 0x98
};

struct UBTTask_Wait {
	float WaitTime; // 0x70
	float RandomDeviation; // 0x74
};

struct UAnimSharingTransitionInstance {
	TWeakObjectPtr<USkeletalMeshComponent> FromComponent; // 0x2b8
	TWeakObjectPtr<USkeletalMeshComponent> ToComponent; // 0x2c0
	float BlendTime; // 0x2c8
	bool bBlendBool; // 0x2cc
};

struct USoundNodeConcatenator {
	TArray<float> InputVolume; // 0x48
};

struct UMaterialExpressionStaticComponentMaskParameter {
	char DefaultR : 1; // 0x58
	char DefaultG : 1; // 0x58
	char DefaultB : 1; // 0x58
	char DefaultA : 1; // 0x58
};

struct UBTDecorator_TagCooldown {
	FGameplayTag CooldownTag; // 0x68
	float CooldownDuration; // 0x70
	bool bAddToExistingDuration; // 0x74
	bool bActivatesCooldown; // 0x75
};

struct UCurveLinearColor {
	FRichCurve FloatCurves[0x4]; // 0x30
	float AdjustHue; // 0x230
	float AdjustSaturation; // 0x234
	float AdjustBrightness; // 0x238
	float AdjustBrightnessCurve; // 0x23c
	float AdjustVibrance; // 0x240
	float AdjustMinAlpha; // 0x244
	float AdjustMaxAlpha; // 0x248
};

struct AMessagePromptActor {
	FString MessageMapID; // 0x220
	bool bIsBigPopUp; // 0x230
	bool bHasDisplayedMessage; // 0x231
	FText MessageTitle; // 0x238
	TArray<FText> MessageContent; // 0x250
	TArray<FMessagePromptContent> MessageActions; // 0x260
};

struct UW_Briefing_TImeline_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UW_Header_C* h_Timeline; // 0x268
	UHorizontalBox* HB_Timeline; // 0x270
	UCanvasPanel* TimelineEntryCanvas; // 0x278
	UW_Briefing_Timeline_TrackWave_C* W_Briefing_Timeline_TrackWave; // 0x280
	UWidget* AudioControlWidget; // 0x288
	TMap<float, FTimelineEvent> EventEntries; // 0x290
	E_Briefing_Audio_PlayStates PlayState; // 0x2e0
	float AudioCurrentTime; // 0x2e4
};

struct ADebugCameraController {
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
	APlayerController* OriginalControllerRef; // 0x618
	UPlayer* OriginalPlayer; // 0x620
	float SpeedScale; // 0x628
	float InitialMaxSpeed; // 0x62c
	float InitialAccel; // 0x630
	float InitialDecel; // 0x634
};

struct UCompositeDataTable {
	TArray<UDataTable*> ParentTables; // 0xb0
	TArray<UDataTable*> OldParentTables; // 0xc0
};

struct UParticleSystem {
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

struct APrimary_TAC700_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1150
};

struct UChaosGameplayEventDispatcher {
	TMap<UPrimitiveComponent*, FChaosHandlerSet> CollisionEventRegistrations; // 0x1c8
	TMap<UPrimitiveComponent*, FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x218
};

struct AGM_VIPEscort_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x728
	USceneComponent* DefaultSceneRoot; // 0x730
	TArray<FVector> HostageSpawns; // 0x738
	bool bSidesSwapped; // 0x748
	float TargetTimeDilation; // 0x74c
	FMulticastInlineDelegate OnRoundResetComplete; // 0x750
};

struct UCompressedImageSequenceProtocol {
	int32_t CompressionQuality; // 0xd8
};

struct UDistributionVectorUniform {
	FVector Max; // 0x38
	FVector Min; // 0x44
	char bLockAxes : 1; // 0x50
	EDistributionVectorLockFlags LockedAxes; // 0x54
	EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x55
	char bUseExtremes : 1; // 0x58
};

struct AIncriminationGM {
	char MaxCluesToFind; // 0x6d8
	ASpawnGenerator* ChosenSpawnGroup_BlueTeam; // 0x6e0
	ASpawnGenerator* ChosenSpawnGroup_RedTeam; // 0x6e8
};

struct UMaterialFunction {
	FString Description; // 0x40
	char bExposeToLibrary : 1; // 0x50
	char bPrefixParameterNames : 1; // 0x50
};

struct UEnvQueryTest_Pathfinding {
	EEnvTestPathfinding TestMode; // 0x1f8
	UEnvQueryContext* Context; // 0x200
	FAIDataProviderBoolValue PathFromContext; // 0x208
	FAIDataProviderBoolValue SkipUnreachable; // 0x240
	UNavigationQueryFilter* FilterClass; // 0x278
};

struct ADoor {
	AActor* DoorBlockerActor; // 0x268
	AActor* DoorBlockerActorInst; // 0x270
	UTeamBreachAndClearActivity* CurrentTeamBreachActivity; // 0x2a0
	FMulticastInlineDelegate OnDoorOpened; // 0x2a8
	FMulticastInlineDelegate OnSubDoorOpened; // 0x2b8
	FMulticastInlineDelegate OnDoorClosed; // 0x2c8
	FMulticastInlineDelegate OnDoorBroken; // 0x2d8
	TArray<AThreatAwarenessActor*> FrontThreatAwarenessPoints; // 0x2e8
	TArray<AThreatAwarenessActor*> BackThreatAwarenessPoints; // 0x2f8
	TArray<AStackUpActor*> FrontLeftStackUpPoints; // 0x308
	TArray<AStackUpActor*> FrontRightStackUpPoints; // 0x318
	TArray<AStackUpActor*> BackLeftStackUpPoints; // 0x328
	TArray<AStackUpActor*> BackRightStackUpPoints; // 0x338
	TArray<AThreatAwarenessActor*> RedTeamFrontClearPoints; // 0x348
	TArray<AThreatAwarenessActor*> BlueTeamFrontClearPoints; // 0x358
	TArray<AThreatAwarenessActor*> RedTeamBackClearPoints; // 0x368
	TArray<AThreatAwarenessActor*> BlueTeamBackClearPoints; // 0x378
	char bDoorJammed : 1; // 0x388
	TArray<int32_t> DestroyedChunkIdxs; // 0x390
	EStackupGenType StackupGenType; // 0x3a0
	EStackupGenArea StackupGenArea; // 0x3a1
	bool bShouldInvertTrap; // 0x3a2
	USceneComponent* RootScene; // 0x3b8
	UStaticMeshComponent* DoorStatic; // 0x3c0
	UStaticMeshComponent* DoorHandleFront; // 0x3c8
	UStaticMeshComponent* DoorHandleBack; // 0x3d0
	UMirrorPortalComponent* FrontMirrorPoint; // 0x3d8
	UMirrorPortalComponent* BackMirrorPoint; // 0x3e0
	UDestructibleDoorChunkComponent* DoorChunk0; // 0x3e8
	UDestructibleDoorChunkComponent* DoorChunk1; // 0x3f0
	UDestructibleDoorChunkComponent* DoorChunk2; // 0x3f8
	UDestructibleDoorChunkComponent* DoorChunk3; // 0x400
	UDestructibleDoorChunkComponent* DoorChunk4; // 0x408
	UDestructibleDoorChunkComponent* DoorChunk5; // 0x410
	UDestructibleDoorChunkComponent* DoorChunk6; // 0x418
	UDestructibleDoorChunkComponent* DoorChunk7; // 0x420
	UDestructibleDoorChunkComponent* DoorChunk8; // 0x428
	UInteractableComponent* DoorOpenInteractableComp; // 0x430
	UInteractableComponent* DoorSublinkOpenInteractableComp; // 0x438
	UInteractableComponent* DoorSublinkPushInteractableComp; // 0x440
	UInteractableComponent* DoorPushInteractableComp; // 0x448
	UInteractableComponent* DoorKickInteractableComp; // 0x450
	UInteractableComponent* DoorSublinkKickInteractableComp; // 0x458
	UInteractableComponent* LockpickInteractableComponent; // 0x460
	UInteractableComponent* C2InteractableComponent; // 0x468
	UInteractableComponent* WedgeInteractableComponent; // 0x470
	UInteractableComponent* OptiwandInteractableComponent; // 0x478
	UInteractableComponent* BSGInteractableComponent; // 0x480
	UInteractableComponent* BSGInteractableComponent_3; // 0x488
	UInteractableComponent* DoorRamInteractableComponent; // 0x490
	UFMODAudioPropagationComponent* FMODAudioPropagationComp; // 0x498
	ANavLinkProxy* NavLinkProxy; // 0x4a0
	USceneComponent* LockpickArea; // 0x4a8
	USceneComponent* DoorArea; // 0x4b0
	USceneComponent* C2Area; // 0x4b8
	USceneComponent* BSGArea; // 0x4c0
	USceneComponent* MirrorgunArea; // 0x4c8
	USceneComponent* WedgeArea; // 0x4d0
	USceneComponent* BatteringRamArea; // 0x4d8
	char bHasEverBeenOpenedBySwat : 1; // 0x4e0
	char bEnabled : 1; // 0x4e0
	FDataTableRowHandle TypeOfDoor; // 0x4e8
	FDataTableRowHandle TypeOfTrap; // 0x4f8
	ETrapSetup TrapSetup; // 0x508
	char bNoSpawnTrap : 1; // 0x509
	FName DoorName; // 0x50c
	char bOneWay : 1; // 0x514
	char bCanOpenFromOppositeSide : 1; // 0x514
	char bCanPlayerInteract : 1; // 0x514
	char bCanMirrorGun : 1; // 0x514
	TMap<EDoorDamageType, float> DoorKillDistance; // 0x518
	TMap<EDoorDamageType, float> DoorStunDistance; // 0x568
	float MaxOpenClose; // 0x5b8
	float OpenThreshold; // 0x5bc
	float CloseThreshold; // 0x5c0
	float IncrementAngle; // 0x5c4
	float MultitoolUseTime; // 0x5c8
	float GrenadeDamageToBreakDoor; // 0x5cc
	float MoveAndClearRequiredAmount; // 0x5d0
	float PhysicalPushAmount; // 0x5d4
	bool bCanIssueOrdersOnFrontSide; // 0x5d8
	bool bCanIssueOrdersOnBackSide; // 0x5d9
	FPingData PingData; // 0x5e0
	ADoor* DriveSubDoor; // 0x688
	ADoor* MatchOpenCloseDoor; // 0x690
	char bMainSubDoor : 1; // 0x698
	char bKickAlwaysFails : 1; // 0x698
	float DoorKickSuccessChance; // 0x69c
	int32_t NumSuccessfulKicksToBreakDown; // 0x6a0
	UMaterialInterface* C2ExplosionDecal; // 0x6a8
	bool bDisableStackUpOnFront; // 0x6b0
	bool bDisableStackUpOnBack; // 0x6b1
	float LockedChance; // 0x6b4
	UCurveFloat* DoorPushCurve; // 0x6b8
	UCurveFloat* DoorOpenCurve; // 0x6c0
	UCurveFloat* DoorCloseCurve; // 0x6c8
	UCurveFloat* DoorKickSuccessCurve; // 0x6d0
	UCurveFloat* DoorKickFailCurve; // 0x6d8
	UCurveFloat* DoorLockedCurve; // 0x6e0
	UCurveFloat* DoorRamCurve; // 0x6e8
	UCurveFloat* DoorExplodeCurve; // 0x6f0
	UCurveFloat* DoorBreachCurve; // 0x6f8
	UCurveFloat* DoorHandleOpenCurve; // 0x700
	UCurveFloat* DoorHandlePushCurve; // 0x708
	UCurveFloat* DoorHandleLockedCurve; // 0x710
	APlacedC2Explosive* PlacedC2; // 0x718
	TArray<UDestructibleDoorChunkComponent*> ChunkComponents; // 0x720
	char bPendingSubDoorKick : 1; // 0x730
	AReadyOrNotCharacter* LastDoorUser; // 0x738
	EDoorDamageType LastDoorDamage; // 0x740
	ATrapActorAttachedToDoor* AttachedTrap; // 0x748
	ADoorJam* AttachedWedge; // 0x750
	float OpenCloseAmount; // 0x758
	float DoorHandlePitchAmount; // 0x75c
	char bC2Placed : 1; // 0x760
	char bSWATKnowsLockState : 1; // 0x760
	char bSuspectKnowsLockState : 1; // 0x760
	char bSWATKnowsTrapState : 1; // 0x760
	char bSuspectKnowsTrapState : 1; // 0x760
	char Blocked : 1; // 0x760
	char bDoorBroken : 1; // 0x760
	char bTrapInFront : 1; // 0x760
	char bClientReset : 1; // 0x761
	char bDoorHandlesBroken : 1; // 0x761
	TArray<AReadyOrNotCharacter*> CharactersOverlappingDoor; // 0x1028
};

struct UW_SubObjective_Entry_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* div; // 0x268
	UBorder* ObjectiveNotice; // 0x270
	UW_Text_C* txt_Instruction; // 0x278
	UW_Text_C* txt_ObjState; // 0x280
	FST_SubObjective_Entry EntryData; // 0x288
	bool Complete; // 0x2a0
	bool Failed; // 0x2a1
	bool LastEntry; // 0x2a2
	bool bHideInstruction; // 0x2a3
	float CompletedIndent; // 0x2a4
	float CompletedTextOpacity; // 0x2a8
	FText ObjectiveDescription; // 0x2b0
	FLinearColor col_FontFailed; // 0x2c8
	FLinearColor col_FontNormal; // 0x2d8
	FLinearColor col_FontInProgress; // 0x2e8
	FLinearColor col_FontComplete; // 0x2f8
};

struct APrimary_BRN180_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1130
};

struct ACaptureTheFlagGS {
	ACTF_Flag* Flag; // 0x6c0
	APlayerCharacter* FlagBearer; // 0x6c8
	ETeamType FlagBearerTeam; // 0x6d0
	char bFlagCaptured : 1; // 0x6d1
	char bGameWon : 1; // 0x6d1
};

struct UCollectEvidenceActivity {
	AActor* EvidenceItem; // 0x1a8
};

struct ADatasmithImportedSequencesActor {
	TArray<ULevelSequence*> ImportedSequences; // 0x220
};

struct UW_CurrentMatchRound_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x288
	UWidgetSwitcher* StyleSwitcher; // 0x290
	int32_t Style; // 0x298
};

struct UNavRelevantComponent {
	char bAttachToOwnersRoot : 1; // 0xd4
	UObject* CachedNavParent; // 0xd8
};

struct UBTDecorator_DoesPathExist {
	FBlackboardKeySelector BlackboardKeyA; // 0x68
	FBlackboardKeySelector BlackboardKeyB; // 0x90
	char bUseSelf : 1; // 0xb8
	EPathExistanceQueryType PathQueryType; // 0xbc
	UNavigationQueryFilter* FilterClass; // 0xc0
};

struct UDialogueVoice {
	EGrammaticalGender Gender; // 0x28
	EGrammaticalNumber Plurality; // 0x29
	FGuid LocalizationGUID; // 0x2c
};

struct UChildConnection {
	UNetConnection* Parent; // 0x1ba8
};

struct UMovieScene3DAttachSection {
	FName AttachSocketName; // 0x118
	FName AttachComponentName; // 0x120
	EAttachmentRule AttachmentLocationRule; // 0x128
	EAttachmentRule AttachmentRotationRule; // 0x129
	EAttachmentRule AttachmentScaleRule; // 0x12a
	EDetachmentRule DetachmentLocationRule; // 0x12b
	EDetachmentRule DetachmentRotationRule; // 0x12c
	EDetachmentRule DetachmentScaleRule; // 0x12d
};

struct USourceEffectSimpleDelayPreset {
	FSourceEffectSimpleDelaySettings Settings; // 0xa8
};

struct UMovieSceneColorTrack {
	bool bIsSlateColor; // 0xc0
};

struct UW_LoadingScreen_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b8
	UWidgetAnimation* BlinkSpaceToContinue; // 0x2c0
	UImage* Image_1; // 0x2c8
	UTextBlock* Loading; // 0x2d0
	UTextBlock* Tips; // 0x2d8
	UW_PageHeader_C* W_PageHeader; // 0x2e0
	FString Out Map; // 0x2e8
	FString Out Mode; // 0x2f8
};

struct UMaterialExpressionLandscapeLayerSample {
	FName ParameterName; // 0x40
	float PreviewWeight; // 0x48
	FGuid ExpressionGUID; // 0x4c
};

struct UAnimNotify_PlayMontageNotifyWindow {
	FName NotifyName; // 0x30
};

struct USoundNodeDelay {
	float DelayMin; // 0x48
	float DelayMax; // 0x4c
};

struct UTcpMessagingSettings {
	bool EnableTransport; // 0x28
	FString ListenEndpoint; // 0x30
	TArray<FString> ConnectToEndpoints; // 0x40
	int32_t ConnectionRetryDelay; // 0x50
	bool bStopServiceWhenAppDeactivates; // 0x54
};

struct UMovieSceneSection {
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

struct UMovieSceneObjectPropertySection {
	FMovieSceneObjectPathChannel ObjectChannel; // 0xe8
};

struct UMovieSceneSequencePlayer {
	FMulticastInlineDelegate OnPlay; // 0x260
	FMulticastInlineDelegate OnPlayReverse; // 0x270
	FMulticastInlineDelegate OnStop; // 0x280
	FMulticastInlineDelegate OnPause; // 0x290
	FMulticastInlineDelegate OnFinished; // 0x2a0
	EMovieScenePlayerStatus Status; // 0x2b0
	char bReversePlayback : 1; // 0x2b4
	UMovieSceneSequence* Sequence; // 0x2b8
	FFrameNumber StartTime; // 0x2c0
	int32_t DurationFrames; // 0x2c4
	float DurationSubFrames; // 0x2c8
	int32_t CurrentNumLoops; // 0x2cc
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x2d0
	FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x2e8
	FMovieSceneSequenceReplProperties NetSyncProps; // 0x438
	TScriptInterface<IMovieScenePlaybackClient> PlaybackClient; // 0x448
	UMovieSceneSequenceTickManager* TickManager; // 0x458
};

struct UW_ScoreboardHeader_C {
	UTextBlock* Arrested_Text; // 0x260
	UTextBlock* Arrests_Text; // 0x268
	UImage* BG_Image; // 0x270
	UTextBlock* BoardRank_Text; // 0x278
	UTextBlock* Damage_Text; // 0x280
	UTextBlock* Deaths_Text; // 0x288
	UTextBlock* Incapacitations_Text; // 0x290
	UTextBlock* Kills_Text; // 0x298
	UTextBlock* Ping_Text; // 0x2a0
	UTextBlock* PlayerName_Text; // 0x2a8
	UTextBlock* PlayerRank_Text; // 0x2b0
	UTextBlock* Score_Text; // 0x2b8
	UTextBlock* Status_Text; // 0x2c0
};

struct UANIMBP_Mirrorgun_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x308
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x350
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x3d0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x4d8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x4f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x518
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x598
	bool bEquipped; // 0x638
};

struct UInterpTrackEvent {
	TArray<FEventTrackKey> EventTrack; // 0x70
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	char bFireEventsWhenJumpingForwards : 1; // 0x80
	char bUseCustomEventName : 1; // 0x80
};

struct APaperGroupedSpriteActor {
	UPaperGroupedSpriteComponent* RenderComponent; // 0x220
};

struct UInterpGroup {
	TArray<UInterpTrack*> InterpTracks; // 0x30
	FName GroupName; // 0x40
	FColor GroupColor; // 0x48
	char bCollapsed : 1; // 0x4c
	char bVisible : 1; // 0x4c
	char bIsFolder : 1; // 0x4c
	char bIsParented : 1; // 0x4c
	char bIsSelected : 1; // 0x4c
};

struct AChemlight {
	UAmmoComponent* Ammo; // 0x908
	FName SocketSpawnName; // 0x910
};

struct USoundNodeSoundClass {
	USoundClass* SoundClassOverride; // 0x48
};

struct UGizmoPlaneTranslationParameterSource {
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

struct UANIMBP_AK102_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x308
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x410
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x430
	FAnimNode_Slot AnimGraphNode_Slot; // 0x450
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x498
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x518
	float Mag01Alpha; // 0x620
	bool bIsSemi; // 0x624
};

struct UW_BriefingBio_ProfileRight_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* BioDescription; // 0x268
	UTextBlock* BioText; // 0x270
	UImage* ProfilePicture; // 0x278
	UImage* ProfilePicture_2; // 0x280
	FText Bio; // 0x288
	FText Description; // 0x2a0
	UTexture2D* ProfileImage; // 0x2b8
};

struct UW_MatchEndScreen_TeamGame_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* FadeOutMVP; // 0x268
	UWidgetAnimation* FadeInMVP; // 0x270
	UWidgetAnimation* FadeInScoreboard; // 0x278
	UImage* Image_2; // 0x280
	UImage* Image_278; // 0x288
	URichTextBlock* MatchScoreCounter; // 0x290
	UTextBlock* MatchWinnerText; // 0x298
	UTextBlock* MVPPlayerName; // 0x2a0
	UTextBlock* NextMap; // 0x2a8
	UTextBlock* NextMode; // 0x2b0
	UTextBlock* RoundCounter; // 0x2b8
	UTextBlock* RoundWinnerText; // 0x2c0
	UVerticalBox* ScoreBoardDisplay; // 0x2c8
	UVerticalBox* SWATWinTeam; // 0x2d0
	UTextBlock* TextBlock_3; // 0x2d8
	UTextBlock* TextBlock_4; // 0x2e0
	UTextBlock* TextBlock_46; // 0x2e8
	UTextBlock* TextBlock_48; // 0x2f0
	UTextBlock* TextBlock_67; // 0x2f8
	UVerticalBox* VerticalBox_34; // 0x300
	UW_ScoreboardFill_C* W_ScoreboardFill; // 0x308
	bool SkippedMVP; // 0x310
	bool ToggleScoreboard; // 0x311
	TArray<AReadyOrNotGameMode*> ModeArray; // 0x318
	UObject* MainMenuRef; // 0x328
};

struct ASkyLight {
	USkyLightComponent* LightComponent; // 0x220
	char bEnabled : 1; // 0x228
};

struct UDatasmithDecalComponentTemplate {
	int32_t SortOrder; // 0x30
	FVector DecalSize; // 0x34
	UMaterialInterface* Material; // 0x40
};

struct USynthKnob {
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

struct UPhysicsConstraintTemplate {
	FConstraintInstance DefaultInstance; // 0x28
	TArray<FPhysicsConstraintProfileHandle> ProfileHandles; // 0x1f0
	FConstraintProfileProperties DefaultProfile; // 0x200
};

struct UPostProcessEffectData {
	UMaterial* PostProcess_Material; // 0x30
	TArray<FPostProcessSetting_FloatParam> ScalarParameters; // 0x38
	TArray<FPostProcessSetting_VectorParam> VectorParameters; // 0x48
	char bDebug : 1; // 0x58
	FText Note; // 0x60
};

struct UAISense_Team {
	TArray<FAITeamStimulusEvent> RegisteredEvents; // 0x80
};

struct UNiagaraPreviewAxis_InterpParamVector {
	FVector Min; // 0x38
	FVector Max; // 0x44
};

struct UNiagaraDataInterfaceVector4Curve {
	FRichCurve XCurve; // 0x70
	FRichCurve YCurve; // 0xf0
	FRichCurve ZCurve; // 0x170
	FRichCurve WCurve; // 0x1f0
};

struct UMaterialExpressionComponentMask {
	FExpressionInput Input; // 0x40
	char R : 1; // 0x54
	char G : 1; // 0x54
	char B : 1; // 0x54
	char A : 1; // 0x54
};

struct UEndpointSubmix {
	FName EndpointType; // 0x38
	UAudioEndpointSettingsBase* EndpointSettingsClass; // 0x40
	UAudioEndpointSettingsBase* EndpointSettings; // 0x48
};

struct UCameraAnim {
	UInterpGroup* CameraInterpGroup; // 0x28
	float AnimLength; // 0x30
	FBox BoundingBox; // 0x34
	char bRelativeToInitialTransform : 1; // 0x50
	char bRelativeToInitialFOV : 1; // 0x50
	float BaseFOV; // 0x54
	FPostProcessSettings BasePostProcessSettings; // 0x60
	float BasePostProcessBlendWeight; // 0x5c0
};

struct ULightComponent {
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

struct UMaterialExpressionSobol {
	FExpressionInput Cell; // 0x40
	FExpressionInput Index; // 0x54
	FExpressionInput Seed; // 0x68
	uint32_t ConstIndex; // 0x7c
	FVector2D ConstSeed; // 0x80
};

struct UCOOPScorePopUp {
	UFMODEvent* Reward; // 0x260
};

struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct UMaterialExpressionArccosineFast {
	FExpressionInput Input; // 0x40
};

struct AWindDirectionalSource {
	UWindDirectionalSourceComponent* Component; // 0x220
};

struct AIncriminationGS {
	FMulticastInlineDelegate OnIntelStateChanged; // 0x6c0
	FMulticastInlineDelegate OnIntelSearchAreaChosen; // 0x6d0
	FMulticastInlineDelegate OnIntelBuildingChosen; // 0x6e0
	FMulticastInlineDelegate OnActiveClueChanged; // 0x6f0
	FMulticastInlineDelegate OnPreviousActiveClueChanged; // 0x700
	FMulticastInlineDelegate OnCluesChanged; // 0x710
	AEvidenceSpawnPoint* ChosenEvidenceSpawn; // 0x720
	AEvidenceActor* ChosenEvidenceActor; // 0x728
	AEvidenceExtractionDevice_Incrim* ChosenExtractionDevice; // 0x730
	TArray<AIncriminationClue*> Clues; // 0x738
	TArray<AIncriminationClueSpawnPoint*> ClueSpawnPoints; // 0x748
	AIncriminationClue* ActiveClue; // 0x758
	AIncriminationClue* PreviousActiveClue; // 0x760
	ASplineTrigger_Incrimination* ChosenEvidenceSearchArea; // 0x768
	ABuildingTrigger_Incrimination* ChosenEvidenceBuilding; // 0x770
	TArray<ASplineTrigger_Incrimination*> NonMainIntelSearchZones; // 0x778
	AEvidenceExtractionDevice* CurrentExtractionDevice; // 0x788
	ETeamType PickupTeam; // 0x790
	EEvidenceActorState IntelState; // 0x791
	bool bIntelExtracted; // 0x792
};

struct UNiagaraDataInterfaceArrayColor {
	TArray<FLinearColor> ColorData; // 0x50
};

struct UNiagaraComponentSettings {
	TSet<FName> SuppressActivationList; // 0x28
	TSet<FName> ForceAutoPooolingList; // 0x78
	TSet<FNiagaraEmitterNameSettingsRef> SuppressEmitterList; // 0xc8
};

struct UW_DebugMenu_Tablet_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UW_DebugInfoContainer_C* DebugInfo_Player; // 0x268
};

struct AVIPPlayer_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2150
};

struct UDatasmithStaticMeshGLTFImportData {
	FString SourceMeshName; // 0x28
};

struct AScenarioGenerator {
	TMap<FString, FScenarioDataArray> ScenarioMap; // 0x258
	FString ScenarioName; // 0x2a8
	bool bSpawnWhenEntered; // 0x2b8
	AScenarioCoverActivator* CurrentScenarioCoverActivator; // 0x2c0
	EScenarioImportance ScenarioImportance; // 0x2c8
	TArray<ACoverActor*> ScenarioCover; // 0x2d0
	TArray<ACoverActor*> ScenarioSwatCover; // 0x2e0
	TArray<AThreatAwarenessActor*> ScenarioThreats; // 0x2f0
	TArray<AScenarioCoverActivator*> ScenarioCoverActivators; // 0x308
	TArray<AAICharacter*> SpawnedCharacters; // 0x318
};

struct UCameraShakeSourceComponent {
	ECameraShakeAttenuation Attenuation; // 0x1f8
	float InnerAttenuationRadius; // 0x1fc
	float OuterAttenuationRadius; // 0x200
	UCameraShakeBase* CameraShake; // 0x208
	bool bAutoStart; // 0x210
};

struct UScrollBarWidgetStyle {
	FScrollBarStyle ScrollBarStyle; // 0x30
};

struct UDestructibleDoorChunkComponent {
	bool bIsDoorHandle; // 0x4e0
	bool bIsHinge; // 0x4e1
	float Health; // 0x4e4
	bool bCannotKickIfDestroyed; // 0x4e8
	TArray<UDestructibleDoorChunkComponent*> SupportChunks; // 0x4f0
};

struct UMaterialExpressionSceneTexture {
	FExpressionInput Coordinates; // 0x40
	ESceneTextureId SceneTextureId; // 0x54
	bool bFiltered; // 0x55
};

struct ABP_TabletCapture_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	USkeletalMeshComponent* SkeletalMesh; // 0x228
	USceneCaptureComponent2D* SceneCaptureComponent2D; // 0x230
	UW_TabletHUD_C* TabletHUD; // 0x238
};

struct APrimary_MP5A2_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1130
};

struct UPathFollowingComponent {
	UNavMovementComponent* MovementComp; // 0xe8
	ANavigationData* MyNavData; // 0xf8
};

struct UNiagaraBakerSettings {
	float StartSeconds; // 0x28
	float DurationSeconds; // 0x2c
	int32_t FramesPerSecond; // 0x30
	char bPreviewLooping : 1; // 0x34
	FIntPoint FramesPerDimension; // 0x38
	TArray<FNiagaraBakerTextureSettings> OutputTextures; // 0x40
	ENiagaraBakerViewMode CameraViewportMode; // 0x50
	FVector CameraViewportLocation[0x7]; // 0x54
	FRotator CameraViewportRotation[0x7]; // 0xa8
	float CameraOrbitDistance; // 0xfc
	float CameraFOV; // 0x100
	float CameraOrthoWidth; // 0x104
	char bUseCameraAspectRatio : 1; // 0x108
	float CameraAspectRatio; // 0x10c
	char bRenderComponentOnly : 1; // 0x110
};

struct ADestructibleVehicle {
	UStaticMeshComponent* CarBody; // 0x220
	UStaticMeshComponent* FrontLeftDoor; // 0x228
	UStaticMeshComponent* FrontRightDoor; // 0x230
	UStaticMeshComponent* BackLeftDoor; // 0x238
	UStaticMeshComponent* BackRightDoor; // 0x240
	UDestructibleComponent* RearWindshield; // 0x248
	UDestructibleComponent* FrontWindshield; // 0x250
	UDestructibleComponent* RearSideWindowLeft; // 0x258
	UDestructibleComponent* RearSideWindowRight; // 0x260
	UDestructibleComponent* RearDoorWindowLeft; // 0x268
	UDestructibleComponent* RearDoorWindowRight; // 0x270
	UDestructibleComponent* FrontDoorWindowLeft; // 0x278
	UDestructibleComponent* FrontDoorWindowRight; // 0x280
	UStaticMeshComponent* Boot; // 0x288
	UStaticMeshComponent* RearVisionMirror; // 0x290
	UStaticMeshComponent* AirBag; // 0x298
	UStaticMeshComponent* LeftSideMirror; // 0x2a0
	UStaticMeshComponent* RightSideMirror; // 0x2a8
	UStaticMeshComponent* FrontLeftTyre; // 0x2b0
	UStaticMeshComponent* FrontRightTyre; // 0x2b8
	UStaticMeshComponent* RearLeftTyre; // 0x2c0
	UStaticMeshComponent* RearRightTyre; // 0x2c8
	USphereComponent* LeftLightCollision; // 0x2d0
	USphereComponent* RightLightCollision; // 0x2d8
	USpotLightComponent* LeftHeadLight; // 0x2e0
	USpotLightComponent* RightHeadLight; // 0x2e8
	UAudioComponent* CarAlarmAudio; // 0x2f0
	bool bLightsOn; // 0x2fa
	float AlarmHeadLightsFlashInterval; // 0x2fc
	UMaterialInstance* FrontLightsOnMaterial; // 0x300
	int32_t FrontLeftLightsMaterialIndex; // 0x308
	int32_t FrontRightLightsMaterialIndex; // 0x30c
	UMaterialInstance* RearLightsOnMaterial; // 0x310
	UMaterialInstance* FrontLightsOffMaterial; // 0x318
	UMaterialInstance* RearLightsOffMaterial; // 0x320
	int32_t RearLeftLightsMaterialIndex; // 0x328
	int32_t RearRightLightsMaterialIndex; // 0x32c
	float RollAmountOnTyreDamage; // 0x330
	float PitchAmountOnTyreDamage; // 0x334
	float SinkAmountOnTyreDamage; // 0x338
	FRotator AppliedRotation; // 0x354
	bool bFrontLeftTyreDestroyed; // 0x360
	bool bFrontRightTyreDestroyed; // 0x361
	bool bRearLeftTyreDestroyed; // 0x362
	bool bRearRightTyreDestroyed; // 0x363
	bool bForceLightsOn; // 0x364
	bool bLeftLightDestroyed; // 0x365
	bool bRightLightDestroyed; // 0x366
	float FrontLeftDoorOpenAmount; // 0x368
	float FrontRightDoorOpenAmount; // 0x36c
	float BackLeftDoorOpenAmount; // 0x370
	float BackRightDoorOpenAmount; // 0x374
	float BootOpenAmount; // 0x378
	float PlayerRotationMultiplier; // 0x37c
	float ChanceToCauseAirbagToDeployOnDamage; // 0x380
	USoundCue* AirbagDeploySound; // 0x388
	float ChanceToCauseAlarmOnDamage; // 0x390
	float AlarmPlayLength; // 0x394
	float BootMaxOpen; // 0x398
	float LeftDoorMaxOpen; // 0x39c
	float RightDoorMaxOpen; // 0x3a0
	TArray<UMaterialInstance*> RandomShatteredGlassMaterial; // 0x3a8
	FMulticastInlineDelegate OnApplyDamageToWindow; // 0x3b8
};

struct UGlasses_Widget_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UInvalidationBox* InvalidationBox_1; // 0x268
	bool bBreathIn; // 0x270
};

struct UGeometryCollectionComponent {
	AChaosSolverActor* ChaosSolverActor; // 0x480
	UGeometryCollection* RestCollection; // 0x568
	TArray<AFieldSystemActor*> InitializationFields; // 0x570
	bool Simulating; // 0x580
	EObjectStateTypeEnum ObjectType; // 0x588
	bool EnableClustering; // 0x589
	int32_t ClusterGroupIndex; // 0x58c
	int32_t MaxClusterLevel; // 0x590
	TArray<float> DamageThreshold; // 0x598
	EClusterConnectionTypeEnum ClusterConnectionType; // 0x5a8
	int32_t CollisionGroup; // 0x5ac
	float CollisionSampleFraction; // 0x5b0
	float LinearEtherDrag; // 0x5b4
	float AngularEtherDrag; // 0x5b8
	UChaosPhysicalMaterial* PhysicalMaterial; // 0x5c0
	EInitialVelocityTypeEnum InitialVelocityType; // 0x5c8
	FVector InitialLinearVelocity; // 0x5cc
	FVector InitialAngularVelocity; // 0x5d8
	UPhysicalMaterial* PhysicalMaterialOverride; // 0x5e8
	FGeomComponentCacheParameters CacheParameters; // 0x5f0
	FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x640
	FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x650
	FMulticastInlineDelegate OnChaosBreakEvent; // 0x678
	float DesiredCacheTime; // 0x688
	bool CachePlayback; // 0x68c
	FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x690
	bool bNotifyBreaks; // 0x6a0
	bool bNotifyCollisions; // 0x6a1
	bool bEnableReplication; // 0x6a2
	bool bEnableAbandonAfterLevel; // 0x6a3
	int32_t ReplicationAbandonClusterLevel; // 0x6a4
	FGeometryCollectionRepData RepData; // 0x6a8
	UBodySetup* DummyBodySetup; // 0x8d8
};

struct AEvidenceSpawnPoint {
	AEvidenceActor* EvidenceActorClass; // 0x238
	ASplineTrigger_Incrimination* EvidenceSearchArea; // 0x240
	ABuildingTrigger_Incrimination* EvidenceBuilding; // 0x248
};

struct UW_LoadoutItem_Preset_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278
	UImage* BG_Image; // 0x280
	UW_StandardButton_C* Button; // 0x288
	UW_Text_C* lbl_CannotEdit; // 0x290
	UEditableText* LoadoutItemPresetNameEdit_Text; // 0x298
	USizeBox* RadioIcon_SizeBox; // 0x2a0
	UW_StandardButton_C* ResetButton; // 0x2a8
	UImage* SelectedRadioIcon_Image; // 0x2b0
	UWidgetSwitcher* TextSwitcher; // 0x2b8
	UW_Text_C* txt_PresetName; // 0x2c0
	UImage* UnselectedRadioIcon_Image; // 0x2c8
	FText OriginalPresetName; // 0x2d0
	FLinearColor DefaultColor; // 0x2e8
	FMulticastInlineDelegate OnButtonClicked; // 0x2f8
	bool bIsDefault; // 0x308
	FText PresetName; // 0x310
	bool bSelected; // 0x328
	bool bHovered; // 0x329
	bool bAnyKeyDown; // 0x32a
	bool bResetButtonHovered; // 0x32b
	UW_LoadoutItem_Presets_C* Owner; // 0x330
	FMulticastInlineDelegate OnButtonHovered; // 0x338
	FMulticastInlineDelegate OnButtonUnhovered; // 0x348
	int32_t Index; // 0x358
	int32_t MinPresetNameCharacters; // 0x35c
	int32_t MaxPresetNameCharacters_WithoutSpaces; // 0x360
	int32_t MaxPresetNameCharacters_WithSpaces; // 0x364
	TArray<FString> ItemPresetNameAsStringArray; // 0x368
	FTimerHandle TH_FocusOnEditableText; // 0x378
	UWeaponAttachment* ScopeAttachmentClass; // 0x380
	UWeaponAttachment* MuzzleAttachmentClass; // 0x388
	UWeaponAttachment* UnderbarrelAttachmentClass; // 0x390
	UWeaponAttachment* OverbarrelAttachmentClass; // 0x398
	UWeaponAttachment* StockAttachmentClass; // 0x3a0
	UWeaponAttachment* GripAttachmentClass; // 0x3a8
	UWeaponAttachment* IlluminatorAttachmentClass; // 0x3b0
	UWeaponAttachment* AmmunitionAttachmentClass; // 0x3b8
	USkinComponent* SkinClass; // 0x3c0
	USkinComponent* FactorySkinClass; // 0x3c8
};

struct UAnimSingleNodeInstance {
	UAnimationAsset* CurrentAsset; // 0x2b8
	FDelegate PostEvaluateAnimEvent; // 0x2c0
};

struct UAISense_Damage {
	TArray<FAIDamageEvent> RegisteredEvents; // 0x80
};

struct UMovieSceneGeometryCacheTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x98
};

struct AGS_TugOfWar_C {
	USceneComponent* DefaultSceneRoot; // 0x6c8
};

struct UAnimInstance {
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

struct AGM_Lobby_C {
	USceneComponent* DefaultSceneRoot; // 0x688
};

struct UParticleModuleVectorFieldLocal {
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

struct UPaperTileSet {
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

struct UJoinSessionCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct AWorldSettings {
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

struct UNiagaraSystem {
	bool bDumpDebugSystemInfo; // 0x30
	bool bDumpDebugEmitterInfo; // 0x31
	bool bRequireCurrentFrameData; // 0x33
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
	bool bNeedsGPUContextInitForDataInterfaces; // 0x3b5
	TArray<FName> UserDINamesReadInSystemScripts; // 0x3b8
};

struct ATriggerBase {
	UShapeComponent* CollisionComponent; // 0x220
};

struct UIssueCommandQuestNode {
	ESwatCommand SwatCommand; // 0x270
	ETeamType TeamType; // 0x271
	bool bHasIssueCommand; // 0x272
};

struct ACaptureTheFlagGM {
	FMulticastInlineDelegate OnFlagCaptured; // 0x6d8
	FMulticastInlineDelegate OnFlagDropped; // 0x6e8
	ACTF_Flag* FlagClassToSpawn; // 0x6f8
};

struct UHumanCharacterHUD {
	FVector2D LastImpulse; // 0x278
};

struct UW_MapFloor_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* Floor_Text; // 0x268
	UImage* Selected_Image; // 0x270
	FText FloorText; // 0x278
};

struct UGameMapsSettings {
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

struct UGraphNodeContextMenuContext {
	UBlueprint* Blueprint; // 0x28
	UEdGraph* Graph; // 0x30
	UEdGraphNode* Node; // 0x38
	bool bIsDebugging; // 0x48
};

struct UMockDataMeshTrackerComponent {
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

struct UANIMBP_P99_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x308
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x328
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x430
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x450
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x498
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x538
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x690
	FAnimNode_Slot AnimGraphNode_Slot; // 0x750
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x798
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x7c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x7e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x868
	float Mag01Alpha; // 0x8e8
};

struct UMaterialInterface {
	USubsurfaceProfile* SubsurfaceProfile; // 0x38
	FLightmassMaterialInterfaceSettings LightmassSettings; // 0x50
	TArray<FMaterialTextureInfo> TextureStreamingData; // 0x60
	TArray<UAssetUserData*> AssetUserData; // 0x70
};

struct UW_2DMap_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* img_Map; // 0x268
	UMaterialInstanceDynamic* MapDynMat; // 0x270
};

struct UForceFeedbackEffect {
	TArray<FForceFeedbackChannelDetails> ChannelDetails; // 0x28
	float Duration; // 0x38
};

struct UParticleModuleEventReceiverBase {
	EParticleEventType EventGeneratorType; // 0x30
	FName EventName; // 0x34
};

struct AWorldBuildingPlacementActor {
	USceneComponent* DefaultScene; // 0x220
	UWorldBuildingActivity* Activity; // 0x228
	bool bDropGunBeforeActivity; // 0x230
	bool bReturnToOriginalSpot; // 0x231
	AAISpawn* LinkedToSpawner; // 0x238
	ACyberneticController* InUseByController; // 0x240
};

struct UBlackboardKeyType_Object {
	UObject* BaseClass; // 0x30
};

struct UStreamingSettings {
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

struct UNiagaraDataInterfaceArrayFloat2 {
	TArray<FVector2D> FloatData; // 0x50
};

struct UW_MagCheckOverview_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_OnMagCheck; // 0x268
	UHorizontalBox* Mags_Container; // 0x270
	TArray<UW_MagCheck_MagStatus_C*> MagCheckStatusWidgets; // 0x278
};

struct UMedicalHealWidget {
	float CurrentHealth; // 0x278
	FString PrefixHealerString; // 0x280
	FString PostfixHealeeString; // 0x290
	FString PostfixHealeeMortallyWoundedString; // 0x2a0
	FString PostfixNoBrokenLimbsString; // 0x2b0
	FName HealerName; // 0x2c0
	FName HealeeName; // 0x2c8
	float MinHealth; // 0x2d0
	float MaxHealth; // 0x2d4
	UWidgetSwitcher* HealingWidgetSwitcher; // 0x2d8
	UProgressBar* HealingProgressBar_Healer; // 0x2e0
	UProgressBar* HealingProgressBar_Healee; // 0x2e8
	UTextBlock* HealerText; // 0x2f0
	UTextBlock* HealeeText; // 0x2f8
	UTextBlock* HealeeMortallyWoundedText; // 0x300
	UTextBlock* HealeeNoBrokenLimbsText; // 0x308
	UTextBlock* HealerHealthValueText; // 0x310
	UTextBlock* HealeeHealthValueText; // 0x318
	UTextBlock* HealeeMortallyWoundedHealthValueText; // 0x320
	UWidgetAnimation* FadeIn; // 0x328
	UWidgetAnimation* FadeOut; // 0x330
	UWidgetAnimation* HealComplete; // 0x338
};

struct UEnvQueryGenerator_ActorsOfClass {
	AActor* SearchedActorClass; // 0x50
	FAIDataProviderBoolValue GenerateOnlyActorsInRadius; // 0x58
	FAIDataProviderFloatValue SearchRadius; // 0x90
	UEnvQueryContext* SearchCenter; // 0xc8
};

struct UCursor_Pen_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetSwitcher* Cursor_Switcher; // 0x268
	UImage* Image_8; // 0x270
	UImage* Mouse; // 0x278
	UOverlay* MouseOverlay; // 0x280
	UWidgetSwitcher* PenColorSwitcher; // 0x288
};

struct UParticleModuleAccelerationDragScaleOverLife {
	UDistributionFloat* DragScale; // 0x38
	FRawDistributionFloat DragScaleRaw; // 0x40
};

struct ACameraActor {
	EAutoReceiveInput AutoActivateForPlayer; // 0x220
	UCameraComponent* CameraComponent; // 0x228
	USceneComponent* SceneComponent; // 0x230
	char bConstrainAspectRatio : 1; // 0x240
	float AspectRatio; // 0x244
	float FOVAngle; // 0x248
	float PostProcessBlendWeight; // 0x24c
	FPostProcessSettings PostProcessSettings; // 0x250
};

struct ABaseArmour {
	UMaterialInstance* LastSetMeshGearSlotMaterial; // 0x948
	EArmourType ArmourType; // 0x950
	TArray<float> FrontPlateWeights; // 0x958
	TArray<float> BackPlateWeights; // 0x968
	TArray<float> SidePlateWeights; // 0x978
	int32_t BlockHeadshotCount; // 0x988
	bool bUnlockMoreSlots; // 0x98c
	bool bHalfStingerDuration; // 0x98d
	float ScaleLensFlare; // 0x990
	TArray<USkeletalMesh*> Variations; // 0x998
	UParticleSystem* ArmourHitParticle; // 0x9a8
	UFMODEvent* ArmourHitSound; // 0x9b0
	UTexture2D* PaperdollTexture; // 0x9b8
	UMatineeCameraShake* InterceptShakeFront; // 0x9c0
	UMatineeCameraShake* InterceptShakeBack; // 0x9c8
	UMatineeCameraShake* InterceptShakeLeft; // 0x9d0
	UMatineeCameraShake* InterceptShakeRight; // 0x9d8
	bool bDebugArmorHitDebug; // 0x9e0
	bool bUseLightbar; // 0x9e1
	FLinearColor LeaderLightbarColour; // 0x9e4
	FLinearColor RedTeamLightbarColour; // 0x9f4
	FLinearColor BlueTeamLightbarColour; // 0xa04
	float LightbarIntensity; // 0xa14
	UArmourResourceComponent* ArmourHealth; // 0xa18
	EArmourCoverage SpawnedCoverageLevel; // 0xa20
	EArmourLevel SpawnedArmourLevel; // 0xa21
	USkeletalMesh* LastGeneratedMaterialsOnSkelMesh; // 0xa28
};

struct UInterpTrackInstVisibility {
	EVisibilityTrackAction Action; // 0x28
	float LastUpdatePosition; // 0x2c
};

struct AHighgroundVolume {
	float AudioDebounce; // 0x228
	UBoxComponent* Bounds; // 0x230
	UAudioComponent* AudioComp; // 0x238
	bool bWatching; // 0x240
	int32_t SierraDesignation; // 0x244
	FName VolumeLabel; // 0x248
	TArray<USoundBase*> ContactEnteredVolumeAudio; // 0x250
	TArray<USoundBase*> ContactExitedVolumeAudio; // 0x260
	TArray<USoundBase*> SwatEnteredVolumeAudio; // 0x270
	TArray<USoundBase*> SwatExitedVolumeAudio; // 0x280
};

struct UAnimNotify_ChangeCombatMove {
	TArray<UBaseCombatMoveActivity*> PossibleCombatMoves; // 0x38
};

struct UBoundsCopyComponent {
	TSoftObjectPtr<AActor> BoundsSourceActor; // 0xb0
	bool bUseCollidingComponentsForSourceBounds; // 0xd8
	bool bKeepOwnBoundsScale; // 0xd9
	bool bUseCollidingComponentsForOwnBounds; // 0xda
	FTransform PostTransform; // 0xe0
	bool bCopyXBounds; // 0x110
	bool bCopyYBounds; // 0x111
	bool bCopyZBounds; // 0x112
};

struct UDatasmithStaticMeshTemplate {
	FDatasmithMeshSectionInfoMapTemplate SectionInfoMap; // 0x30
	int32_t LightMapCoordinateIndex; // 0x80
	int32_t LightMapResolution; // 0x84
	TArray<FDatasmithMeshBuildSettingsTemplate> BuildSettings; // 0x88
	TArray<FDatasmithStaticMaterialTemplate> StaticMaterials; // 0x98
};

struct UParticleModuleAttractorParticle {
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

struct UTeamActivityProxy {
	ETeamType CommandTeam; // 0x38
	FVector CommandLocation; // 0x3c
};

struct UAudioComponent {
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

struct UParticleModuleOrbitBase {
	char bUseEmitterTime : 1; // 0x30
};

struct UBTDecorator_ConeCheck {
	float ConeHalfAngle; // 0x68
	FBlackboardKeySelector ConeOrigin; // 0x70
	FBlackboardKeySelector ConeDirection; // 0x98
	FBlackboardKeySelector Observed; // 0xc0
};

struct UFriendsList {
	FMulticastInlineDelegate OnSuccess; // 0x260
	FMulticastInlineDelegate OnFailure; // 0x270
	TArray<FFriend> FriendsList; // 0x280
};

struct UNiagaraDataInterfaceTexture {
	UTexture* Texture; // 0x38
};

struct UAndroidPermissionCallbackProxy {
	FMulticastInlineDelegate OnPermissionsGrantedDynamicDelegate; // 0x28
};

struct UMovieSceneGeometryCollectionSection {
	FMovieSceneGeometryCollectionParams Params; // 0xe8
};

struct UImgMediaSettings {
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

struct UParticleLODLevel {
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

struct UAnimNotify_DisarmTrap {
	char bDisarmFinished : 1; // 0x38
};

struct ULightPropagationVolumeBlendable {
	FLightPropagationVolumeSettings Settings; // 0x30
	float BlendWeight; // 0x70
};

struct UANIMBP_UMP45_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x308
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x350
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x3f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x470
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x4f0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x648
	FAnimNode_Slot AnimGraphNode_Slot; // 0x708
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x750
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x778
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4; // 0x7a0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x7c0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4; // 0x8c8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x8e8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x998
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0xa58
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3; // 0xb60
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0xb80
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3; // 0xc00
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0xc20
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0xd28
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xd48
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0xdc8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xde8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xef0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xf10
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xf90
	float Mag01Alpha; // 0xfb0
	char CurrentFireMode; // 0xfb4
	bool bIsSemi; // 0xfb5
	float FoldedStockAlpha; // 0xfb8
};

struct UMaterialExpressionDepthOfFieldFunction {
	EDepthOfFieldFunctionValue FunctionValue; // 0x40
	FExpressionInput Depth; // 0x44
};

struct UNiagaraDataInterfaceStaticMesh {
	ENDIStaticMesh_SourceMode SourceMode; // 0x38
	UStaticMesh* DefaultMesh; // 0x40
	AActor* Source; // 0x48
	UStaticMeshComponent* SourceComponent; // 0x50
	FNDIStaticMeshSectionFilter SectionFilter; // 0x58
	bool bUsePhysicsBodyVelocity; // 0x68
	TArray<FName> FilteredSockets; // 0x70
};

struct UFindSessionsCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UQuartzClockHandle {
	UQuartzSubsystem* QuartzSubsystem; // 0x168
	UWorld* WorldPtr; // 0x188
};

struct USkeletalMeshComponent {
	UObject* AnimBlueprintGeneratedClass; // 0x6a0
	UAnimInstance* AnimClass; // 0x6a8
	UAnimInstance* AnimScriptInstance; // 0x6b0
	UAnimInstance* PostProcessAnimInstance; // 0x6b8
	FSingleAnimationPlayData AnimationData; // 0x6c0
	FVector RootBoneTranslation; // 0x6e8
	FVector LineCheckBoundsScale; // 0x6f4
	TArray<UAnimInstance*> LinkedInstances; // 0x730
	TArray<FTransform> CachedBoneSpaceTransforms; // 0x740
	TArray<FTransform> CachedComponentSpaceTransforms; // 0x750
	float GlobalAnimRateScale; // 0x8b0
	EKinematicBonesUpdateToPhysics KinematicBonesUpdateType; // 0x8b4
	EPhysicsTransformUpdateMode PhysicsTransformUpdateMode; // 0x8b5
	EAnimationMode AnimationMode; // 0x8b7
	char bDisablePostProcessBlueprint : 1; // 0x8b9
	char bUpdateOverlapsOnAnimationFinalize : 1; // 0x8b9
	char bHasValidBodies : 1; // 0x8b9
	char bBlendPhysics : 1; // 0x8b9
	char bEnablePhysicsOnDedicatedServer : 1; // 0x8b9
	char bUpdateJointsFromAnimation : 1; // 0x8b9
	char bDisableClothSimulation : 1; // 0x8ba
	char bDisableRigidBodyAnimNode : 1; // 0x8c0
	char bAllowAnimCurveEvaluation : 1; // 0x8c0
	char bDisableAnimCurves : 1; // 0x8c0
	char bCollideWithEnvironment : 1; // 0x8c0
	char bCollideWithAttachedChildren : 1; // 0x8c1
	char bLocalSpaceSimulation : 1; // 0x8c1
	char bResetAfterTeleport : 1; // 0x8c1
	char bDeferKinematicBoneUpdate : 1; // 0x8c1
	char bNoSkeletonUpdate : 1; // 0x8c1
	char bPauseAnims : 1; // 0x8c1
	char bUseRefPoseOnInitAnim : 1; // 0x8c1
	char bEnablePerPolyCollision : 1; // 0x8c2
	char bForceRefpose : 1; // 0x8c2
	char bOnlyAllowAutonomousTickPose : 1; // 0x8c2
	char bIsAutonomousTickPose : 1; // 0x8c2
	char bOldForceRefPose : 1; // 0x8c2
	char bShowPrePhysBones : 1; // 0x8c2
	char bRequiredBonesUpToDate : 1; // 0x8c2
	char bAnimTreeInitialised : 1; // 0x8c2
	char bIncludeComponentLocationIntoBounds : 1; // 0x8c3
	char bEnableLineCheckWithBounds : 1; // 0x8c3
	char bPropagateCurvesToSlaves : 1; // 0x8c3
	char bSkipKinematicUpdateWhenInterpolating : 1; // 0x8c3
	char bSkipBoundsUpdateWhenInterpolating : 1; // 0x8c3
	char bNeedsQueuedAnimEventsDispatched : 1; // 0x8c3
	uint16_t CachedAnimCurveUidVersion; // 0x8c6
	float ClothBlendWeight; // 0x8c8
	bool bWaitForParallelClothTask; // 0x8cc
	TArray<FName> DisallowedAnimCurves; // 0x8d0
	UBodySetup* BodySetup; // 0x8e0
	FMulticastInlineDelegate OnConstraintBroken; // 0x8f0
	UClothingSimulationFactory* ClothingSimulationFactory; // 0x900
	float TeleportDistanceThreshold; // 0x9d8
	float TeleportRotationThreshold; // 0x9dc
	uint32_t LastPoseTickFrame; // 0x9e8
	UClothingSimulationInteractor* ClothingInteractor; // 0xa40
	FMulticastInlineDelegate OnAnimInitialized; // 0xb10
};

struct UMaterialExpressionMin {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct AARSharedWorldGameMode {
	int32_t BufferSizePerChunk; // 0x308
};

struct ANavModifierVolume {
	UNavArea* AreaClass; // 0x260
	bool bMaskFillCollisionUnderneathForNavmesh; // 0x268
};

struct UPostProcessComponent {
	FPostProcessSettings Settings; // 0x200
	float Priority; // 0x760
	float BlendRadius; // 0x764
	float BlendWeight; // 0x768
	char bEnabled : 1; // 0x76c
	char bUnbound : 1; // 0x76c
};

struct UAnimationSettings {
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

struct USoundNodeDistanceCrossFade {
	TArray<FDistanceDatum> CrossFadeInput; // 0x48
};

struct UPlanningMapWidget {
	bool bDrawable; // 0x260
	TArray<FFloorMapPointData> DrawPointData; // 0x268
};

struct UMaterialExpressionStaticBoolParameter {
	char DefaultValue : 1; // 0x58
};

struct UARPin {
	UARTrackedGeometry* TrackedGeometry; // 0x28
	USceneComponent* PinnedComponent; // 0x30
	FTransform LocalToTrackingTransform; // 0x40
	FTransform LocalToAlignedTrackingTransform; // 0x70
	EARTrackingState TrackingState; // 0xa0
	FMulticastInlineDelegate OnARTrackingStateChanged; // 0xc0
	FMulticastInlineDelegate OnARTransformUpdated; // 0xd0
};

struct UMaterialExpressionVertexInterpolator {
	FExpressionInput Input; // 0x40
};

struct UMaterialExpressionReflectionVectorWS {
	FExpressionInput CustomWorldNormal; // 0x40
	char bNormalizeCustomWorldNormal : 1; // 0x54
};

struct UBTDecorator_Loop {
	int32_t NumLoops; // 0x68
	bool bInfiniteLoop; // 0x6c
	float InfiniteLoopTimeoutTime; // 0x70
};

struct UClothingAssetBase {
	FString ImportedFilePath; // 0x28
	FGuid AssetGuid; // 0x38
};

struct UCoverPoint {
	FVector Location; // 0x28
	FVector _DirectionToWall; // 0x34
	FRotator RotatorXToWall; // 0x40
	bool bLeftCoverStanding; // 0x4c
	bool bRightCoverStanding; // 0x4d
	bool bLeftCoverCrouched; // 0x4e
	bool bRightCoverCrouched; // 0x4f
	bool bFrontCoverCrouched; // 0x50
	bool bCrouchedCover; // 0x51
};

struct UChildActorComponent {
	AActor* ChildActorClass; // 0x1f8
	AActor* ChildActor; // 0x200
	AActor* ChildActorTemplate; // 0x208
};

struct UNiagaraDataInterfaceIntRenderTarget2D {
	FIntPoint Size; // 0xd8
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe0
	TMap<uint64_t, UTextureRenderTarget2D*> ManagedRenderTargets; // 0x100
};

struct UBorder {
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

struct ULiveLinkCurveRemapSettings {
	FLiveLinkCurveConversionSettings CurveConversionSettings; // 0xa0
};

struct ARosterScenarioSpawner {
	TMap<FName, FDataTableRowHandle> ObjectiveSpawns; // 0x220
	TArray<FObjectiveSpawn> Objectives; // 0x270
	TArray<AWeaponCacheActor*> WeaponCacheActors; // 0x280
	TArray<ABaseMagazineWeapon*> PossibleWeapons; // 0x290
	float MaxPatrolRadiusDistance; // 0x2a0
	float TimeBetweenTargetingCivilians; // 0x2a4
	float TimeUntilBombExplodes; // 0x2a8
	TArray<APatrolPoint*> UsedPatrolPoints; // 0x2b0
};

struct UStaticMeshSimulationComponent {
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

struct ADevice_C2_Placed_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x358
	UBoxComponent* Box; // 0x360
};

struct UGizmoAxisRotationParameterSource {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90
	TScriptInterface<IGizmoTransformSource> TransformSource; // 0xa0
	float Angle; // 0xb0
	FGizmoFloatParameterChange LastChange; // 0xb4
	FVector CurRotationAxis; // 0xbc
	FVector CurRotationOrigin; // 0xc8
	FTransform InitialTransform; // 0xe0
};

struct AAICharacter {
	UHesitationBarComponent* HesitationBarComponent; // 0x1ac0
	bool bDeactivated; // 0x1ac8
	bool bHasEverShot; // 0x1aca
	FMulticastInlineDelegate OnDoorShotgunBreach_FromAnimNotify; // 0x1ad0
	FMulticastInlineDelegate OnDoorKickBreach_FromAnimNotify; // 0x1ae0
	FMulticastInlineDelegate OnPendingItemThrown_FromAnimNotify; // 0x1af0
	ABaseItem* PendingThrownItem; // 0x1b00
	FMulticastInlineDelegate OnAITakenDamage; // 0x1b08
	FMulticastInlineDelegate OnAIFire; // 0x1b18
	FMulticastInlineDelegate OnAIKilled; // 0x1b28
	FMulticastInlineDelegate OnCollectPendingEvidenceBegin_FromAnimNotify; // 0x1b38
	FMulticastInlineDelegate OnCollectPendingEvidenceEnd_FromAnimNotify; // 0x1b48
	bool bSurrendered; // 0x1b58
	bool bSurrenderComplete; // 0x1b78
	AAICharacter* BeingRestrainedBy; // 0x1b80
	ABaseItem* ThrownWeapon; // 0x1b88
	UScoringComponent* ScoringComponent; // 0x1b90
	UPawnSensingComponent* PawnSensingComp; // 0x1b98
	FAIDataLookupTable AssignedAIData; // 0x1ba0
	AAISpawn* SpawnedFromSpawner; // 0x1df0
	FActivityRouteCollection ActivityRouteCollection; // 0x1df8
	FVector Rep_FocalPoint; // 0x1e18
	FVector Rep_HeadFocalPoint; // 0x1e24
	AActor* Rep_FocalActor; // 0x1e30
	char bHeardYellFromOfficer : 1; // 0x1e38
	float ArrestedTime; // 0x1e3c
	bool bFemale; // 0x1e40
	bool bChild; // 0x1e41
	bool bHitOnceByBeanbag; // 0x1e42
	bool bKnockoutFacingUp; // 0x1e43
	bool bIsKnockedOut; // 0x1e44
	FString GetBackupMontageName; // 0x1e48
	bool bFinishedKnockout; // 0x1e58
	bool bFinishedKnockoutMontage; // 0x1e59
	UReadyOrNotCharacterAnimData* Unarmed_Calm_AD; // 0x1e70
	UReadyOrNotCharacterAnimData* Unarmed_Sr_AD; // 0x1e78
	UReadyOrNotCharacterAnimData* Unarmed_Ar_AD; // 0x1e80
	UReadyOrNotCharacterAnimData* Unarmed_Ar_Crouch_AD; // 0x1e88
	UReadyOrNotCharacterAnimData* Unarmed_Alert_AD; // 0x1e90
	UReadyOrNotCharacterAnimData* Rifle_AD; // 0x1e98
	UReadyOrNotCharacterAnimData* Pistol_AD; // 0x1ea0
	UReadyOrNotCharacterAnimData* Pistol_OneHanded_AD; // 0x1ea8
	EWeaponType CurActiveWeaponType; // 0x1eb0
	EPseudoSpeedType DesiredPseudoSpeed; // 0x1eb1
	FAIMoveDataBlock MoveDataOverride; // 0x1eb8
	FAIMoveDataBlock CurMoveDataBlock; // 0x1f50
	float TimeSinceLastShot; // 0x1fec
	float TimeSinceArrest; // 0x1ff0
	bool bHasPlayedSurrenderAnim; // 0x1ff4
	bool bIsFakeSurrender; // 0x1ff5
	bool bHasEverFakeSurrendered; // 0x1ff6
	bool bFinishedEquippingLoadout; // 0x1ff7
	bool bForceFiringEnabled; // 0x1ff8
	FCharacterMesh CharacterMeshData; // 0x2000
	FMulticastInlineDelegate OnAimedAt; // 0x2060
	char bAimingAtTarget : 1; // 0x2070
	char bHasEverAimedAtTarget : 1; // 0x2070
	char bIsFleeing : 1; // 0x2070
	char bDrawingWeapon : 1; // 0x2070
	char bPickingUpWeapon : 1; // 0x2070
	char bHasDamagedSWATTeam : 1; // 0x2070
	char bHitScannedFriendly : 1; // 0x2070
	FHitResult CachedHitScanResult; // 0x2074
	FWorldBuildingAnimState Rep_WorldBuildingAnimState; // 0x2100
	ASuspectsAndCivilianManager* SuspectsAndCivilianManager; // 0x2120
};

struct UEdGraphNode_Documentation {
	FString Link; // 0x98
	FString Excerpt; // 0xa8
};

struct USoundNodeModulator {
	float PitchMin; // 0x48
	float PitchMax; // 0x4c
	float VolumeMin; // 0x50
	float VolumeMax; // 0x54
};

struct AAITest {
	UBillboardComponent* BillboardComponent; // 0x220
	APlayerCharacter* TestCharacter; // 0x228
	int32_t GiveToNearestXAI; // 0x230
};

struct USubtitlesCache {
	TMap<FName, FLipSync_Pause> Data; // 0x28
};

struct AGrenadeLauncher {
	TArray<AGrenadeProjectile*> AppliedGrenadeProjectilePaths; // 0x1128
	AGrenadeProjectile* LastSimulatedGrenade; // 0x1138
	float LaunchDistance; // 0x1140
	float GrenadeBounciness; // 0x1144
	UParticleSystem* BounceParticleEffect; // 0x1150
	UFMODEvent* BounceFMODEvent; // 0x1158
	TArray<FVector> FirstBouncePath; // 0x1160
	FHitResult FirstBounceHit; // 0x1170
	TArray<FVector> SecondBouncePath; // 0x1200
	FHitResult SecondBounceHit; // 0x1210
	TArray<FVector> ThirdBouncePath; // 0x12a0
	FHitResult ThirdBounceHit; // 0x12b0
	TArray<FVector_NetQuantize> CompletePath; // 0x1340
	int32_t BouncePt1; // 0x1350
	int32_t BouncePt2; // 0x1354
	int32_t BouncePt3; // 0x1358
};

struct AFirePointActor {
	TArray<FString> CustomFireArray; // 0x220
	ECoverFireType CoverType; // 0x230
	char bIsCrouchCover : 1; // 0x231
	ACyberneticController* InUseByController; // 0x238
	USceneComponent* DefaultScene; // 0x240
};

struct UBehaviorTreeComponent {
	TArray<UBTNode*> NodeInstances; // 0x128
	UBehaviorTree* DefaultBehaviorTreeAsset; // 0x278
};

struct APrimary_S590_Beanbag_V2_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1190
	UPointLightComponent* PointLight; // 0x1198
	USpotLightComponent* PointLight1; // 0x11a0
	UAnimMontage* LightToggle1P; // 0x11a8
};

struct UTimelineTemplate {
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
	ETickingGroup TimelineTickGroup; // 0x90
	FName VariableName; // 0x94
	FName DirectionPropertyName; // 0x9c
	FName UpdateFunctionName; // 0xa4
	FName FinishedFunctionName; // 0xac
};

struct UMatchTimeRemainingWidget {
	UTextBlock* MatchTimeRemaining_Text; // 0x278
	float RoundTimeRemaining; // 0x280
};

struct UInterpTrackFloatMaterialParam {
	TArray<UMaterialInterface*> TargetMaterials; // 0x90
	FName paramName; // 0xa0
};

struct UMaterialExpressionNormalize {
	FExpressionInput VectorInput; // 0x40
};

struct UStereoLayerShapeCylinder {
	float Radius; // 0x28
	float OverlayArc; // 0x2c
	int32_t Height; // 0x30
};

struct AStackUpActor {
	USceneComponent* DefaultScene; // 0x220
	ESquadPosition StackUpPosition; // 0x228
	AThreatAwarenessActor* BreachLookAtPoint; // 0x230
	AThreatAwarenessActor* StackupLookAtPoint; // 0x238
	ADoor* LinkedDoor; // 0x240
	AStackUpActor* OppositeStackUpActor; // 0x248
};

struct UMovieSceneCameraCutSection {
	bool bLockPreviousCamera; // 0xf0
	FGuid CameraGuid; // 0xf4
	FMovieSceneObjectBindingID CameraBindingID; // 0x104
	FTransform InitialCameraCutTransform; // 0x120
	bool bHasInitialCameraCutTransform; // 0x150
};

struct UCheckBoxStyleAsset {
	FCheckBoxStyle CheckBoxStyle; // 0x28
};

struct USoundNodeQualityLevel {
	int32_t CookedQualityLevelIndex; // 0x48
};

struct AMainMenu_V2_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x978
};

struct UNetDriver {
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
	float Time; // 0x210
	UReplicationDriver* ReplicationDriver; // 0x700
};

struct UMaterialExpressionNamedRerouteDeclaration {
	FExpressionInput Input; // 0x40
	FName Name; // 0x54
	FGuid VariableGuid; // 0x5c
};

struct AFlankingAvoidanceVolume {
	UBoxComponent* Bounds; // 0x220
};

struct UDistributionVector {
	char bCanBeBaked : 1; // 0x30
	char bIsDirty : 1; // 0x30
	char bBakedDataSuccesfully : 1; // 0x30
};

struct URichTextBlockImageDecorator {
	UDataTable* ImageSet; // 0x28
};

struct UNiagaraDataInterfaceParticleRead {
	FString EmitterName; // 0xd8
};

struct UEnvQueryTest_PathfindingBatch {
	FAIDataProviderFloatValue ScanRangeMultiplier; // 0x280
};

struct UANIMBP_AI_TempTest_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xe20
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_12; // 0xe28
	FAnimNode_LegIK AnimGraphNode_LegIK; // 0xf30
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_11; // 0x1028
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_24; // 0x1130
	FAnimNode_Slot AnimGraphNode_Slot_7; // 0x1288
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_10; // 0x12d0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_9; // 0x13d8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8; // 0x14e0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7; // 0x15e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_104; // 0x16f0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_24; // 0x1770
	FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer_8; // 0x1838
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_23; // 0x18b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_103; // 0x1978
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_19; // 0x19f8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_23; // 0x1aa8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_102; // 0x1c00
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_58; // 0x1c80
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_18; // 0x1ca8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_22; // 0x1d58
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_101; // 0x1eb0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_21; // 0x1f30
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_20; // 0x2088
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_30; // 0x21e0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_29; // 0x2208
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_28; // 0x2230
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_27; // 0x2258
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_26; // 0x2280
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_25; // 0x22a8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_24; // 0x22d0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_23; // 0x22f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_22; // 0x2320
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_100; // 0x2348
	FAnimNode_StateResult AnimGraphNode_StateResult_21; // 0x23c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_99; // 0x23f8
	FAnimNode_StateResult AnimGraphNode_StateResult_20; // 0x2478
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_98; // 0x24a8
	FAnimNode_StateResult AnimGraphNode_StateResult_19; // 0x2528
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_97; // 0x2558
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_22; // 0x25d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_21; // 0x26a0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_20; // 0x26c8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_19; // 0x26f0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18; // 0x2718
	FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer_7; // 0x2740
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_21; // 0x27b8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_18; // 0x2880
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_17; // 0x28d0
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_16; // 0x2920
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_17; // 0x2970
	FAnimNode_StateResult AnimGraphNode_StateResult_18; // 0x2a20
	FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer_6; // 0x2a50
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_20; // 0x2ac8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_15; // 0x2b90
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_14; // 0x2be0
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_13; // 0x2c30
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_16; // 0x2c80
	FAnimNode_StateResult AnimGraphNode_StateResult_17; // 0x2d30
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_57; // 0x2d60
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_56; // 0x2d88
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_33; // 0x2db0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17; // 0x2e50
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0x2e78
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0x2ea0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x2ec8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_96; // 0x2ef0
	FAnimNode_StateResult AnimGraphNode_StateResult_16; // 0x2f70
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_12; // 0x2fa0
	FAnimNode_StateResult AnimGraphNode_StateResult_15; // 0x2ff0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_55; // 0x3020
	FAnimNode_StateResult AnimGraphNode_StateResult_14; // 0x3048
	FAnimNode_StateMachine AnimGraphNode_StateMachine_6; // 0x3078
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_7; // 0x3128
	FAnimNode_StateResult AnimGraphNode_StateResult_13; // 0x31f0
	FAnimNode_StateMachine AnimGraphNode_StateMachine_5; // 0x3220
	FAnimNode_StateResult AnimGraphNode_StateResult_12; // 0x32d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_95; // 0x3300
	FAnimNode_StateResult AnimGraphNode_StateResult_11; // 0x3380
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_94; // 0x33b0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_19; // 0x3430
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x34f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x3520
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x3548
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x3570
	FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer_5; // 0x3598
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_18; // 0x3610
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_11; // 0x36d8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_10; // 0x3728
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_9; // 0x3778
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_15; // 0x37c8
	FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x3878
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_8; // 0x38a8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_7; // 0x38f8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_6; // 0x3948
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_17; // 0x3998
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_14; // 0x3a60
	FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer_4; // 0x3b10
	FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x3b88
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_54; // 0x3bb8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_32; // 0x3be0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_53; // 0x3c80
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_31; // 0x3ca8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_52; // 0x3d48
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_30; // 0x3d70
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_51; // 0x3e10
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_6; // 0x3e38
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_50; // 0x3f00
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x3f28
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x3f50
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x3f78
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x3fa0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x3fc8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_5; // 0x3ff0
	FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x4040
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_4; // 0x4070
	FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x40c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_49; // 0x40f0
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x4118
	FAnimNode_StateMachine AnimGraphNode_StateMachine_4; // 0x4148
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_5; // 0x41f8
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x42c0
	FAnimNode_StateMachine AnimGraphNode_StateMachine_3; // 0x42f0
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x43a0
	FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x43d0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_29; // 0x4480
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_16; // 0x4520
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_93; // 0x45e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_92; // 0x4668
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_15; // 0x46e8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_28; // 0x47b0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_27; // 0x4850
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_91; // 0x48f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_90; // 0x4970
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_19; // 0x49f0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_12; // 0x4b48
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_48; // 0x4c08
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_47; // 0x4c30
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_18; // 0x4c58
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_13; // 0x4db0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_46; // 0x4e60
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_45; // 0x4e88
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_9; // 0x4eb0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_17; // 0x5040
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_26; // 0x5198
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_44; // 0x5238
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_25; // 0x5260
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_43; // 0x5300
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_16; // 0x5328
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_42; // 0x5480
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_8; // 0x54a8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_24; // 0x5638
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_41; // 0x56d8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_15; // 0x5700
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_7; // 0x5858
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_40; // 0x59e8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_39; // 0x5a10
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_38; // 0x5a38
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_23; // 0x5a60
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_11; // 0x5b00
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_37; // 0x5bc0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_14; // 0x5be8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_36; // 0x5cb0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_14; // 0x5cd8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_22; // 0x5e30
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_35; // 0x5ed0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_34; // 0x5ef8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_13; // 0x5f20
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_10; // 0x6078
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_33; // 0x6138
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_13; // 0x6160
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_12; // 0x6228
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_89; // 0x6380
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_21; // 0x6400
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_32; // 0x64a0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6; // 0x64c8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_11; // 0x65d0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_20; // 0x6728
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_2; // 0x67d0
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK; // 0x69b0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_6; // 0x6b90
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_88; // 0x6d20
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_87; // 0x6da0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_12; // 0x6e20
	FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer_3; // 0x6ee8
	FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer_2; // 0x6f60
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_11; // 0x6fd8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_86; // 0x70a0
	FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer; // 0x7120
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_31; // 0x7198
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_5; // 0x71c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_30; // 0x7350
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_4; // 0x7378
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_29; // 0x7508
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_3; // 0x7530
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver_6; // 0x76c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_85; // 0x7828
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_84; // 0x78a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_83; // 0x7928
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_82; // 0x79a8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_10; // 0x7a28
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_2; // 0x7b80
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_81; // 0x7d10
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_80; // 0x7d90
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_79; // 0x7e10
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_78; // 0x7e90
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_9; // 0x7f10
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_19; // 0x8068
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_77; // 0x8108
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_76; // 0x8188
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_75; // 0x8208
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_74; // 0x8288
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_8; // 0x8308
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5; // 0x8460
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_73; // 0x8568
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_72; // 0x85e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_71; // 0x8668
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_70; // 0x86e8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_7; // 0x8768
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x88c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_69; // 0x89c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_68; // 0x8a48
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_67; // 0x8ac8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_66; // 0x8b48
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_6; // 0x8bc8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x8d20
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_10; // 0x8e28
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3; // 0x8ef0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_12; // 0x8f40
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_11; // 0x8ff0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_65; // 0x90a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_64; // 0x9120
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_63; // 0x91a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_62; // 0x9220
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_10; // 0x92a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_61; // 0x9350
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_60; // 0x93d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_59; // 0x9450
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_58; // 0x94d0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_9; // 0x9550
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_57; // 0x9600
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_56; // 0x9680
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_55; // 0x9700
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_54; // 0x9780
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_8; // 0x9800
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_7; // 0x98b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_53; // 0x9960
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_52; // 0x99e0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_51; // 0x9a60
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_50; // 0x9ae0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_49; // 0x9b60
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_48; // 0x9be0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_47; // 0x9c60
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_46; // 0x9ce0
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver_5; // 0x9d60
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x9ec8
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver_4; // 0x9fd0
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver_3; // 0xa138
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_28; // 0xa2a0
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver_2; // 0xa2c8
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver; // 0xa430
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_45; // 0xa598
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_44; // 0xa618
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_43; // 0xa698
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_42; // 0xa718
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_41; // 0xa798
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_40; // 0xa818
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_39; // 0xa898
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_38; // 0xa918
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_6; // 0xa998
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_37; // 0xaa48
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_36; // 0xaac8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_9; // 0xab48
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_27; // 0xac10
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_18; // 0xac38
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_35; // 0xacd8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_34; // 0xad58
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xadd8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_17; // 0xaee0
	FAnimNode_Slot AnimGraphNode_Slot_6; // 0xaf80
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0xafc8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_9; // 0xb018
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_8; // 0xb0d8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_7; // 0xb1a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_33; // 0xb268
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_16; // 0xb2e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_32; // 0xb388
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_6; // 0xb408
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_31; // 0xb4d0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_15; // 0xb550
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_30; // 0xb5f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_29; // 0xb670
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_14; // 0xb6f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_28; // 0xb790
	FAnimNode_Slot AnimGraphNode_Slot_5; // 0xb810
	FAnimNode_SlopeWarping AnimGraphNode_SlopeWarping; // 0xb858
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5; // 0xba80
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_5; // 0xbbd8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_27; // 0xbc88
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_26; // 0xbd08
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_25; // 0xbd88
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_24; // 0xbe08
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_23; // 0xbe88
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_22; // 0xbf08
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_21; // 0xbf88
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_20; // 0xc008
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_4; // 0xc088
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_26; // 0xc150
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0xc178
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0xc1a0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0xc1c8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xc1f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_19; // 0xc218
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0xc298
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0xc2c8
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xc318
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_18; // 0xc348
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0xc3c8
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xc3f8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xc4a8
	FAnimNode_Root AnimGraphNode_Root; // 0xc4c8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0xc4f8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xc688
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_4; // 0xc6a8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_8; // 0xc758
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_13; // 0xc818
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_17; // 0xc8b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_16; // 0xc938
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_25; // 0xc9b8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_24; // 0xc9e0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0xca08
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_23; // 0xcb60
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_22; // 0xcb88
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_12; // 0xcbb0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_7; // 0xcc50
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_21; // 0xcd10
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15; // 0xcd38
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14; // 0xcdb8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_11; // 0xce38
	FAnimNode_Slot AnimGraphNode_Slot_4; // 0xced8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_10; // 0xcf20
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13; // 0xcfc0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0xd040
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0xd0c0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_3; // 0xd140
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0xd1f0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_20; // 0xd348
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_6; // 0xd370
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_19; // 0xd430
	FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot; // 0xd458
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_9; // 0xd4e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0xd588
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_5; // 0xd608
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_18; // 0xd6c8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_5; // 0xd6f0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_17; // 0xd7b8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_16; // 0xd7e0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_8; // 0xd808
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_3; // 0xd8a8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_4; // 0xd970
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_15; // 0xda30
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_4; // 0xda58
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_14; // 0xdb20
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_13; // 0xdb48
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_7; // 0xdb70
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0xdc10
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_12; // 0xdd68
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_11; // 0xdd90
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6; // 0xddb8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_2; // 0xde58
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0xdf08
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0xdf88
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0xe008
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0xe088
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0xe108
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_2; // 0xe188
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; // 0xe250
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_10; // 0xe2f0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3; // 0xe318
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_9; // 0xe3e0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8; // 0xe408
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3; // 0xe430
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0xe4f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0xe590
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0xe610
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0xe6c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xe740
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0xe7c0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0xe860
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2; // 0xe928
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0xe9f0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0xea18
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0xea40
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0xeb00
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0xeb28
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0xebf0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0xec18
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0xec40
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xece0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xed60
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xee00
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xee28
	FAnimNode_Slot AnimGraphNode_Slot_3; // 0xee50
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0xee98
	FAnimNode_Slot AnimGraphNode_Slot; // 0xeee0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0xef28
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xefe8
	FRotator AimDeltaRot; // 0xf140
	float LeanTransitionSpeeds; // 0xf14c
	float DirectionBlendTime; // 0xf150
	float WeaponUpBlendTime; // 0xf154
	float AnimSpeedForward; // 0xf158
	float AnimSpeedRight; // 0xf15c
	float AnimWarpPlayrateThreshold; // 0xf160
	FVector LeftJointLoc; // 0xf164
	FVector RightJoinLoc; // 0xf170
	float CharSpeed; // 0xf17c
	float InputUpDown; // 0xf180
	FPoseSnapshot DeathPose; // 0xf188
	float TurnRemainingStartTime; // 0xf1c0
	float SlopeWarpingAlpha; // 0xf1c4
	bool bIsVIP1911; // 0xf1c8
	bool bIsCustomizing; // 0xf1c9
	bool bHoldingVIPWeapon; // 0xf1ca
	bool bHoldingWeaponAsMLO; // 0xf1cb
	bool bCanTurnInPlace; // 0xf1cc
	bool IsItemOrPistolMotionBlock; // 0xf1cd
	bool IsRifleMotionBlock; // 0xf1ce
	bool bIsCrouchingWithShield; // 0xf1cf
	float IsNotCustomizing_AsFloat; // 0xf1d0
	float CrouchHighPoseAdditiveAlpha; // 0xf1d4
	float StandHighPoseAdditiveAlpha; // 0xf1d8
	float LeftHandIKAlpha_ItemBased; // 0xf1dc
	FVector ZHeightLeanAdjustment; // 0xf1e0
	float IsCrouchingWithShield_AsFloat; // 0xf1ec
};

struct UReplaySubsystem {
	bool bLoadDefaultMapOnStop; // 0x30
};

struct USubmixEffectReverbPluginPreset {
	FSubmixEffectReverbPluginSettings Settings; // 0x91
};

struct UBulletDamageType {
	UUserWidget* HitVisuals; // 0x40
	UMatineeCameraShake* HitShake; // 0x48
	bool bArmorPiercing; // 0x50
	bool bNonLethal; // 0x51
	float AggressionChangeInAI; // 0x54
	float HeadDamageMultiplier; // 0x58
	float UpperBodyDamageMultiplier; // 0x5c
	float LowerBodyDamageMultiplier; // 0x60
	float ArmDamageMultiplier; // 0x64
	float LegDamageMultiplier; // 0x68
	float FootDamageMultiplier; // 0x6c
};

struct USoundNodeWaveParam {
	FName WaveParameterName; // 0x48
};

struct ASphereReflectionCapture {
	UDrawSphereComponent* DrawCaptureRadius; // 0x228
};

struct UInterpTrackInstParticleReplay {
	float LastUpdatePosition; // 0x28
};

struct UPlayableCharacterData {
	FText CharacterNameUI; // 0x30
	FText CharacterName; // 0x48
	FText CharacterRole; // 0x60
	FText CharacterBio; // 0x78
	FText CharacterRealName; // 0x90
	FText CharacterYearsOfService; // 0xa8
	FText CharacterDateOfBirth; // 0xc0
	FName HandleName; // 0xd8
	TSoftObjectPtr<USkeletalMesh> FaceMesh; // 0xe0
	TSoftObjectPtr<UPoseAsset> FaceROM; // 0x108
};

struct ASecondary_P99_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1130
};

struct UAnimNotifyState_TimedParticleEffect {
	UParticleSystem* PSTemplate; // 0x30
	FName SocketName; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	bool bDestroyAtEnd; // 0x58
};

struct USubmixEffectStereoDelayPreset {
	FSubmixEffectStereoDelaySettings Settings; // 0xb4
};

struct ABulletTracer {
	USceneComponent* RootComp; // 0x220
	UParticleSystemComponent* ParticleComponent; // 0x248
	UParticleSystem* TracerParticle; // 0x250
	UParticleSystem* SmokeParticle; // 0x258
};

struct ADroneVehicle {
	UBoxComponent* FlightBox; // 0x2c8
	USkeletalMeshComponent* Mesh; // 0x2d0
	UAudioComponent* Audio; // 0x2d8
	UCameraComponent* FirstPersonCamera; // 0x2e0
	USpringArmComponent* ThirdPersonSpringArm; // 0x2e8
	UCameraComponent* ThirdPersonCamera; // 0x2f0
	UFloatingPawnMovement* FloatingMovementComponent; // 0x2f8
	float MaxTilt; // 0x300
	float MaxRPM; // 0x304
	float IdleRPM; // 0x308
	float RPMForceScale; // 0x30c
	float RPMThrottleMultiplier; // 0x310
	float ThrottleInterpSpeed; // 0x314
	float RotationInterpSpeed; // 0x318
	float TurnSpeed; // 0x31c
	float RotationInterpSpeedWhenSteady; // 0x320
	float TurnSpeedWhenSteady; // 0x324
	float MinSpeed; // 0x328
	float MaxSpeed; // 0x32c
	float SpeedIncrementRate; // 0x330
	float InvincibilityTimeAfterDamageApplied; // 0x334
	float RPM; // 0x338
	FRotator RotorRotation; // 0x33c
	float CurrentAltitude; // 0x348
	float CurrentPilotDistance; // 0x34c
	FTransform DroneTransform; // 0x350
	FRotator TargetRotation; // 0x380
	bool bApplyingInput; // 0x3c0
	bool bSteadyDrone; // 0x3c1
	APlayerCharacter* DroneOwner; // 0x3e8
	UWorld* World; // 0x3f0
};

struct UReadyOrNotCharacterAnimData {
	TArray<FCharacterTPAnim> Surrender; // 0x30
	TArray<FCharacterTPAnim> FakeSurrender; // 0x40
	TArray<FCharacterTPAnim> Spooked_Front; // 0x50
	TArray<FCharacterTPAnim> Spooked_Right; // 0x60
	TArray<FCharacterTPAnim> Spooked_Left; // 0x70
	TArray<FCharacterTPAnim> Spooked_Back; // 0x80
	TArray<FCharacterTPAnim> Arrested; // 0x90
	TArray<FCharacterTPAnim> Decision; // 0xa0
	TArray<FCharacterTPAnim> StandRelaxedFidget; // 0xb0
	TArray<FCharacterTPAnim> StandAlertFidget; // 0xc0
	TArray<FCharacterTPAnim> HitReaction_Head; // 0xd0
	TArray<FCharacterTPAnim> HitReaction_UpperBody; // 0xe0
	TArray<FCharacterTPAnim> HitReaction_LowerBody; // 0xf0
	TArray<FCharacterTPAnim> HitReaction_LeftArm; // 0x100
	TArray<FCharacterTPAnim> HitReaction_RightArm; // 0x110
	TArray<FCharacterTPAnim> HitReaction_LeftLeg; // 0x120
	TArray<FCharacterTPAnim> HitReaction_RightLeg; // 0x130
	TArray<FCharacterTPAnim> HitReaction_LeftFoot; // 0x140
	TArray<FCharacterTPAnim> HitReaction_RightFoot; // 0x150
	TArray<FCharacterTPAnim> HitReaction_DropWeapon; // 0x160
	FCharacterTPAnim FireWeapon; // 0x170
	FCharacterTPAnim DrawWeapon; // 0x178
	FCharacterTPAnim HolsterWeapon; // 0x180
	FCharacterTPAnim ReloadWeapon; // 0x188
	TArray<FCharacterTPAnim> Death_Head_Front; // 0x190
	TArray<FCharacterTPAnim> Death_Head_Back; // 0x1a0
	TArray<FCharacterTPAnim> Death_Arm_Left_Front; // 0x1b0
	TArray<FCharacterTPAnim> Death_Arm_Left_Back; // 0x1c0
	TArray<FCharacterTPAnim> Death_Arm_Right_Front; // 0x1d0
	TArray<FCharacterTPAnim> Death_Arm_Right_Back; // 0x1e0
	TArray<FCharacterTPAnim> Death_Leg_Left_Front; // 0x1f0
	TArray<FCharacterTPAnim> Death_Leg_Left_Back; // 0x200
	TArray<FCharacterTPAnim> Death_Leg_Right_Front; // 0x210
	TArray<FCharacterTPAnim> Death_Leg_Right_Back; // 0x220
	TArray<FCharacterTPAnim> Death_Front; // 0x230
	TArray<FCharacterTPAnim> Death_Back; // 0x240
	TArray<FCharacterTPAnim> Death_Bleedout_Head; // 0x250
	TArray<FCharacterTPAnim> Death_Bleedout_Chest; // 0x260
	TArray<FCharacterTPAnim> Death_Bleedout_Stomach; // 0x270
	TArray<FCharacterTPAnim> Death_Bleedout_Left_Arm; // 0x280
	TArray<FCharacterTPAnim> Death_Bleedout_Right_Arm; // 0x290
	TArray<FCharacterTPAnim> Death_Bleedout_Left_Leg; // 0x2a0
	TArray<FCharacterTPAnim> Death_Bleedout_Right_Leg; // 0x2b0
	TArray<FCharacterTPAnim> Flashbanged; // 0x2c0
	TArray<FCharacterTPAnim> Stingballed; // 0x2d0
	TArray<FCharacterTPAnim> Gassed; // 0x2e0
	TArray<FCharacterTPAnim> Sprayed; // 0x2f0
	TArray<FCharacterTPAnim> Tasered; // 0x300
	TArray<FCharacterTPAnim> Meleed; // 0x310
	FCharacterTPAnim OpenDoor; // 0x320
	FCharacterTPAnim CloseDoor; // 0x328
	FCharacterTPAnim Flinches; // 0x330
	UAnimSequence* Calm_Turn90Left; // 0x338
	UAnimSequence* Calm_Turn90Right; // 0x340
	UAnimSequence* Calm_Turn180Left; // 0x348
	UAnimSequence* Calm_Turn180Right; // 0x350
	UAnimSequence* Alert_Turn90Left; // 0x358
	UAnimSequence* Alert_Turn90Right; // 0x360
	UAnimSequence* Alert_Turn180Left; // 0x368
	UAnimSequence* Alert_Turn180Right; // 0x370
	TArray<FCharacterTPAnim> AllAnimsList; // 0x378
};

struct UDropWeaponAnimNotify {
	float ThrowForce; // 0x38
	bool bEquipLastItem; // 0x3c
	bool bFastHolster; // 0x3d
	bool bMarkAsEvidence; // 0x3e
};

struct AThrownItem {
	AReadyOrNotCharacter* ThrowInstigator; // 0x220
	USceneComponent* SceneComponent; // 0x228
	UStaticMeshComponent* StaticMesh; // 0x230
	UAIPerceptionStimuliSourceComponent* PerceptionStimuliComp; // 0x238
	float TurnPhysicsOffDelay; // 0x240
	float ThrowDistance; // 0x244
	TArray<FVector> FirstBouncePath; // 0x248
	FHitResult FirstBounceHit; // 0x258
	TArray<FVector> SecondBouncePath; // 0x2e8
	FHitResult SecondBounceHit; // 0x2f8
	TArray<FVector> ThirdBouncePath; // 0x388
	FHitResult ThirdBounceHit; // 0x398
	TArray<FVector_NetQuantize> CompletePath; // 0x428
	int32_t BouncePt1; // 0x438
	int32_t BouncePt2; // 0x43c
	int32_t BouncePt3; // 0x440
	float ThrowSpeed; // 0x448
	float ThrowBounciness; // 0x454
};

struct USteamNetConnection {
	bool bIsPassthrough; // 0x1c48
};

struct ULevel {
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

struct UARPointComponent {
	FARPointUpdatePayload ReplicatedPayload; // 0x278
};

struct UPrimaryAssetLabel {
	FPrimaryAssetRules Rules; // 0x30
	char bLabelAssetsInMyDirectory : 1; // 0x3c
	char bIsRuntimeLabel : 1; // 0x3c
	TArray<TSoftObjectPtr<UObject>> ExplicitAssets; // 0x40
	TArray<TSoftClassPtr<UObject>> ExplicitBlueprints; // 0x50
	FCollectionReference AssetCollection; // 0x60
};

struct APaperTileMapActor {
	UPaperTileMapComponent* RenderComponent; // 0x220
};

struct UDatasmithDeltaGenSceneImportData {
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

struct UW_SkinCategory_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278
	UWidgetAnimation* Anim_ButtonPressed; // 0x280
	UW_StandardButton_C* Button; // 0x288
	UUniformGridPanel* GridPanel; // 0x290
	UOverlay* SelectedItemInfo_Container; // 0x298
	UW_Text_C* txt_CategoryName; // 0x2a0
	UW_Text_C* txt_ItemName; // 0x2a8
	FText ItemName; // 0x2b0
	FText SkinCategoryName; // 0x2c8
	TArray<UW_SkinItem_C*> SkinItemWidgets; // 0x2e0
	bool bCollapsed; // 0x2f0
	FMulticastInlineDelegate OnButtonClicked; // 0x2f8
	FMulticastInlineDelegate OnButtonHovered; // 0x308
	FMulticastInlineDelegate OnButtonUnhovered; // 0x318
	FMulticastInlineDelegate OnSkinItemButtonClicked; // 0x328
	TArray<USkinComponent*> SkinAttachments; // 0x338
	USkinComponent* NullSkinAttachment; // 0x348
	UW_QuartermasterMenu_C* Owner; // 0x350
	bool bChildSelected; // 0x358
	bool bInMenuBounds; // 0x359
	bool bHovered; // 0x35a
	bool bAnyKeyDown; // 0x35b
	int32_t SelectedRow; // 0x35c
	int32_t SelectedColumn; // 0x360
	int32_t NumOfColumns; // 0x364
};

struct UMonoWaveTableSynthPreset {
	FString PresetName; // 0x28
	char bLockKeyframesToGridBool : 1; // 0x38
	int32_t LockKeyframesToGrid; // 0x3c
	int32_t WaveTableResolution; // 0x40
	TArray<FRuntimeFloatCurve> WaveTable; // 0x48
	char bNormalizeWaveTables : 1; // 0x58
};

struct UW_AttachmentItem_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278
	UWidgetAnimation* Anim_ButtonPressed; // 0x280
	UImage* BottonBorder_Image; // 0x288
	UW_StandardButton_C* Button; // 0x290
	UImage* ItemIcon_Image; // 0x298
	UImage* LeftBorder_Image; // 0x2a0
	USizeBox* RadioIcon_SizeBox; // 0x2a8
	UImage* RightBorder_Image; // 0x2b0
	UImage* SelectedRadioIcon_Image; // 0x2b8
	UImage* TopBorder_Image; // 0x2c0
	UW_Text_C* txt_ItemClassName; // 0x2c8
	UW_Text_C* txt_ItemName; // 0x2d0
	UImage* UnselectedRadioIcon_Image; // 0x2d8
	FText ItemName; // 0x2e0
	UWeaponAttachment* WeaponAttachmentClass; // 0x2f8
	UW_AttachmentCategory_C* Owner; // 0x300
	bool bSelected; // 0x308
	FMulticastInlineDelegate OnButtonClicked; // 0x310
	FMulticastInlineDelegate OnButtonHovered; // 0x320
	FMulticastInlineDelegate OnButtonUnhovered; // 0x330
};

struct UDirectionalLightComponent {
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

struct USpringArmComponent {
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

struct UTextLayoutWidget {
	FShapedTextOptions ShapedTextOptions; // 0x108
	ETextJustify Justification; // 0x10b
	ETextWrappingPolicy WrappingPolicy; // 0x10c
	char AutoWrapText : 1; // 0x10d
	float WrapTextAt; // 0x110
	FMargin Margin; // 0x114
	float LineHeightPercentage; // 0x124
};

struct UEditableGameplayTagQueryExpression_NoTagsMatch {
	FGameplayTagContainer Tags; // 0x28
};

struct USubmixEffectSubmixEQPreset {
	FSubmixEffectSubmixEQSettings Settings; // 0xa0
};

struct AGeometryCollectionActor {
	UGeometryCollectionComponent* GeometryCollectionComponent; // 0x220
	UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x228
};

struct UEnvQueryInstanceBlueprintWrapper {
	int32_t QueryID; // 0x30
	UEnvQueryItemType* ItemType; // 0x58
	int32_t OptionIndex; // 0x60
	FMulticastInlineDelegate OnQueryFinishedEvent; // 0x68
};

struct AIntervalGizmoActor {
	UGizmoLineHandleComponent* UpIntervalComponent; // 0x220
	UGizmoLineHandleComponent* DownIntervalComponent; // 0x228
	UGizmoLineHandleComponent* ForwardIntervalComponent; // 0x230
};

struct USkeletalMeshSimplificationSettings {
	FName SkeletalMeshReductionModuleName; // 0x38
};

struct UWheeledVehicleMovementComponent {
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

struct UGameplayTagsList {
	FString ConfigFileName; // 0x28
	TArray<FGameplayTagTableRow> GameplayTagList; // 0x38
};

struct UInputAxisDelegateBinding {
	TArray<FBlueprintInputAxisDelegateBinding> InputAxisDelegateBindings; // 0x28
};

struct ASecondary_Taser_V2_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x13b0
	float OverallTaserWireLength; // 0x13b8
	FVector LastLocation; // 0x13bc
};

struct UWidget {
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

struct UW_PlayerDetailsWidget_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	UScaleBox* Arrested; // 0x278
	UImage* ArrestedIcon; // 0x280
	UScaleBox* Clues; // 0x288
	UImage* CluesIcon; // 0x290
	UWidgetSwitcher* IconSwitcher; // 0x298
	UTextBlock* Name; // 0x2a0
};

struct UAnimBlueprintGeneratedClass {
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

struct UMaterialExpressionConstant4Vector {
	FLinearColor Constant; // 0x40
};

struct UPhononReverbSourceSettings {
	EIplSimulationType SourceReverbSimulationType; // 0x28
	float SourceReverbContribution; // 0x2c
};

struct AInteractionActor {
	USceneComponent* SceneRoot; // 0x228
	USphereComponent* UseIconRadius; // 0x230
	UStaticMeshComponent* Mesh_Static; // 0x238
	USkeletalMeshComponent* Mesh_Skeletal; // 0x240
	bool bCanUseNow; // 0x248
	bool bAvailableForUse; // 0x249
	bool bCompleteIcon; // 0x24a
	bool bButtonPushAnimation; // 0x24b
	bool bHoldButtonPrompt; // 0x24c
	bool bOverrideButtonPrompt; // 0x24d
	FText OverrideButtonPromptText; // 0x250
};

struct UMaterialExpressionPanner {
	FExpressionInput Coordinate; // 0x40
	FExpressionInput Time; // 0x54
	FExpressionInput Speed; // 0x68
	float SpeedX; // 0x7c
	float SpeedY; // 0x80
	uint32_t ConstCoordinate; // 0x84
	bool bFractionalPart; // 0x88
};

struct ATextRenderActor {
	UTextRenderComponent* TextRender; // 0x220
};

struct UNiagaraDataInterfaceAudioSpectrum {
	int32_t Resolution; // 0x40
	float MinimumFrequency; // 0x44
	float MaximumFrequency; // 0x48
	float NoiseFloorDb; // 0x4c
};

struct UCameraShakeBase {
	bool bSingleInstance; // 0x28
	float ShakeScale; // 0x2c
	UCameraShakePattern* RootShakePattern; // 0x30
	APlayerCameraManager* CameraManager; // 0x38
};

struct UParticleModulePivotOffset {
	FVector2D PivotOffset; // 0x30
};

struct UViewport {
	FLinearColor BackgroundColor; // 0x120
};

struct UStreamMediaSource {
	FString StreamUrl; // 0x88
};

struct ABombActor {
	UStaticMeshComponent* StaticMeshComponent; // 0x230
	UInteractableComponent* InteractableComponent; // 0x238
	UParticleSystemComponent* ExplosionParticleComponent; // 0x240
	float MultitoolUseTime; // 0x248
	EBombState BombState; // 0x24c
	UFMODEvent* BombTickEvent; // 0x258
	UFMODEvent* BombExplodeEvent; // 0x260
};

struct UParticleModuleColorScaleOverLife {
	FRawDistributionVector ColorScaleOverLife; // 0x30
	FRawDistributionFloat AlphaScaleOverLife; // 0x78
	char bEmitterTime : 1; // 0xa8
};

struct UGetGeoLocationAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct UMaterialExpressionFmod {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UObjectReferencer {
	TArray<UObject*> ReferencedObjects; // 0x28
};

struct UInheritableComponentHandler {
	TArray<FComponentOverrideRecord> Records; // 0x28
	TArray<UActorComponent*> UnnecessaryComponents; // 0x38
};

struct UMaterialExpressionFresnel {
	FExpressionInput ExponentIn; // 0x40
	float Exponent; // 0x54
	FExpressionInput BaseReflectFractionIn; // 0x58
	float BaseReflectFraction; // 0x6c
	FExpressionInput Normal; // 0x70
};

struct UAudioAnalyzerNRT {
	USoundWave* Sound; // 0x28
	float DurationInSeconds; // 0x30
};

struct UParticleSystemReplay {
	int32_t ClipIDNumber; // 0x28
};

struct UMaterialExpressionDistanceFieldsRenderingSwitch {
	FExpressionInput No; // 0x40
	FExpressionInput Yes; // 0x54
};

struct UBlackboardKeyType_NativeEnum {
	FString EnumName; // 0x30
	UEnum* EnumType; // 0x40
};

struct UMovieSceneCameraShakeSourceTriggerSection {
	FMovieSceneCameraShakeSourceTriggerChannel Channel; // 0xe8
};

struct UMovieSceneParticleTrack {
	TArray<UMovieSceneSection*> ParticleSections; // 0x98
};

struct UANIMBP_Taser_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x308
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x350
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x3d0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x4d8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x4f8
	float Mag01Alpha; // 0x518
};

struct UChannel {
	UNetConnection* Connection; // 0x28
};

struct ASecondary_Makarov_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1130
	UPointLightComponent* PointLight; // 0x1138
	USpotLightComponent* SpotLight; // 0x1140
};

struct UCurveFloat {
	FRichCurve FloatCurve; // 0x30
	bool bIsEventCurve; // 0xb0
};

struct AObjective {
	UScoringComponent* ScoringComponent; // 0x220
	UFMODEvent* ObjectiveCompleteAudio; // 0x228
	UFMODEvent* ObjectiveFailedAudio; // 0x230
	EObjectiveStatus ObjectiveStatus; // 0x238
	FText ObjectiveName; // 0x240
	FText ObjectiveDescription; // 0x258
	ECOOPMode LockedToMode; // 0x270
	bool bFailureEndsMission; // 0x271
	bool bHiddenObjective; // 0x272
};

struct UMaterialExpressionMaterialProxyReplace {
	FExpressionInput Realtime; // 0x40
	FExpressionInput MaterialProxy; // 0x54
};

struct UNavModifierComponent {
	UNavArea* AreaClass; // 0xe0
	FVector FailsafeExtent; // 0xe8
	char bIncludeAgentHeight : 1; // 0xf4
};

struct ALevelSequenceActor {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x238
	ULevelSequencePlayer* SequencePlayer; // 0x250
	FSoftObjectPath LevelSequence; // 0x258
	FLevelSequenceCameraSettings CameraSettings; // 0x270
	ULevelSequenceBurnInOptions* BurnInOptions; // 0x278
	UMovieSceneBindingOverrides* BindingOverrides; // 0x280
	char bAutoPlay : 1; // 0x288
	char bOverrideInstanceData : 1; // 0x288
	char bReplicatePlayback : 1; // 0x288
	UObject* DefaultInstanceData; // 0x290
	ULevelSequenceBurnIn* BurnInInstance; // 0x298
	bool bShowBurnin; // 0x2a0
};

struct UFoliageType_Actor {
	AActor* ActorClass; // 0x3b0
	bool bShouldAttachToBaseComponent; // 0x3b8
};

struct UW_Scoreboard_V2_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* BG_Footer_Image; // 0x268
	UVerticalBox* BlueTeam_Box; // 0x270
	UVerticalBox* BlueTeam_Entries; // 0x278
	UTextBlock* BlueTeamPlayerCount_Text; // 0x280
	UTextBlock* BlueTeamText; // 0x288
	UTextBlock* CurrentRound_Text; // 0x290
	UTextBlock* MLO_Score_Text; // 0x298
	UVerticalBox* RedTeam_Box; // 0x2a0
	UVerticalBox* RedTeam_Entries; // 0x2a8
	UTextBlock* RedTeamPlayerCount_Text; // 0x2b0
	UTextBlock* RedTeamText; // 0x2b8
	UTextBlock* SWAT_Score_Text; // 0x2c0
	UTextBlock* TimeRemaining_Text; // 0x2c8
	UW_ScoreboardEntry_C* W_ScoreboardEntry_2; // 0x2d0
	UW_ScoreboardEntry_C* W_ScoreboardEntry_3; // 0x2d8
	UW_ScoreboardEntry_C* W_ScoreboardEntry_4; // 0x2e0
	UW_ScoreboardEntry_C* W_ScoreboardEntry_5; // 0x2e8
	UW_ScoreboardEntry_C* W_ScoreboardEntry_6; // 0x2f0
	UW_ScoreboardEntry_C* W_ScoreboardEntry_7; // 0x2f8
	UW_ScoreboardEntry_C* W_ScoreboardEntry_8; // 0x300
	UW_ScoreboardEntry_C* W_ScoreboardEntry_9; // 0x308
	UW_ScoreboardEntry_C* W_ScoreboardEntry_10; // 0x310
	UW_ScoreboardEntry_C* W_ScoreboardEntry_11; // 0x318
	UW_ScoreboardEntry_C* W_ScoreboardEntry_12; // 0x320
	UW_ScoreboardEntry_C* W_ScoreboardEntry_13; // 0x328
	UW_ScoreboardEntry_C* W_ScoreboardEntry_14; // 0x330
	UW_ScoreboardEntry_C* W_ScoreboardEntry_15; // 0x338
	UW_ScoreboardEntry_C* W_ScoreboardEntry_16; // 0x340
	UW_ScoreboardEntry_C* W_ScoreboardEntry_17; // 0x348
	UW_ScoreboardEntry_C* W_ScoreboardEntry_18; // 0x350
	UW_ScoreboardEntry_C* W_ScoreboardEntry_19; // 0x358
	UW_ScoreboardEntry_C* W_ScoreboardEntry_20; // 0x360
	UW_ScoreboardEntry_C* W_ScoreboardEntry_130; // 0x368
	UW_ScoreboardHeader_C* W_ScoreboardHeader; // 0x370
	UW_TeamStatus_C* W_TeamStatus; // 0x378
	UW_TeamStatus_C* W_TeamStatus_2; // 0x380
	TArray<UW_ScoreboardEntry_C*> BlueTeamEntryWidgets; // 0x388
	TArray<UW_ScoreboardEntry_C*> RedTeamEntryWidgets; // 0x398
	bool bPreviewMode; // 0x3a8
};

struct UW_Briefing_AudioControls_Button_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Hover; // 0x268
	UW_Button_C* btn_Play; // 0x270
	UImage* img_Icon; // 0x278
	UW_Text_C* txt_Label; // 0x280
	bool Active; // 0x288
	bool Hovered; // 0x289
	bool FlipIcon(Horiz); // 0x28a
	FText LabelText; // 0x290
	FText ActiveLabelText; // 0x2a8
	FMulticastInlineDelegate AudioControlButtonClicked; // 0x2c0
	FSlateBrush Icon; // 0x2d0
	FMulticastInlineDelegate AudioControlButtonPressed; // 0x358
	FMulticastInlineDelegate AudioControlButtonReleased; // 0x368
	FMulticastInlineDelegate AudioControlButtonHovered; // 0x378
	float TextSize; // 0x388
	float AnimCurrentTime; // 0x38c
	float AnimDuration; // 0x390
	float CurrentTextSize; // 0x394
	bool ReverseHoverAnim; // 0x398
	FTimerHandle AnimationTimer; // 0x3a0
	float AnimFPS; // 0x3a8
	float AnimStartSize; // 0x3ac
};

struct ACoopGM {
	ASWATManager* SWATManager; // 0x678
	ASuspectsAndCivilianManager* SuspectsAndCivilianManager; // 0x680
	AGameplayManager* GameplayManager; // 0x688
	ECOOPMode Mode; // 0x691
	AReadyOrNotAvoidanceManager* AvoidanceManager; // 0x698
	AActor* KilledSuspectAvoidanceShape; // 0x6c8
	bool bNegotiatorActive; // 0x6d0
	bool bAIEquipSameLoadoutAsPlayer; // 0x6d1
	int32_t MaxHostagesKilledBeforeMissionFailed; // 0x6d4
	int32_t MaxTeamKillsBeforeAIRetaliates; // 0x6d8
	ACommandDecal* CommandDecalClass; // 0x6e0
	AAICharacter* SwatAlphaClass; // 0x6e8
	AAICharacter* SwatBetaClass; // 0x6f0
	AAICharacter* SwatCharlieClass; // 0x6f8
	AAICharacter* SwatDeltaClass; // 0x700
	AAIController* FriendlyAIController; // 0x708
	FSavedLoadout FriendlyAILoadout; // 0x710
	AEvidenceActor* EvidenceClass; // 0x848
	FMulticastInlineDelegate OnMissionEnded; // 0x850
	UUserWidget* GameStartedWidget; // 0x860
	FName AI_SpawnTag; // 0x868
	TMap<APlayerCharacter*, int32_t> FriendlySwatKilledCountMap; // 0x870
	TArray<AAICharacter*> RemainingAICharacters; // 0x8c8
	TArray<AEvidenceActor*> EvidenceInWorld; // 0x8d8
	int32_t NextHighgroundDesignation; // 0x8e8
	TArray<AHighgroundVolume*> Highground; // 0x8f0
	bool bUniqueOfficerSoundsets; // 0x900
	int32_t NumPickedOfficerSoundsets; // 0x904
	int32_t PickedOfficerSoundsets; // 0x908
	TArray<ASWATCharacter*> SpawnedSWATAI; // 0x910
	TArray<ACommandDecal*> SpawnedCommandDecals; // 0x920
	TArray<AAISpawn*> SpawnLaterSpawns; // 0x930
	float AISpawnDistance; // 0x948
	USoundCue* NegFeedback; // 0x950
	USoundCue* PosFeedBack; // 0x958
	TArray<ADoor*> KickedDoorsTriggeredMoraleChange; // 0x960
};

struct ULogoutUserCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UAnimSequenceBase {
	TArray<FAnimNotifyEvent> Notifies; // 0x80
	float SequenceLength; // 0x90
	float RateScale; // 0x94
	FRawCurveTracks RawCurveData; // 0x98
};

struct UARTrackedQRCode {
	FString QRCode; // 0x108
	int32_t Version; // 0x118
};

struct UDatasmithActorTemplate {
	TSet<FName> Layers; // 0x30
	TSet<FName> Tags; // 0x80
};

struct UW_AG_PlayerList_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* CheckboxImage; // 0x268
	UImage* Highlight; // 0x270
	UImage* Image_1; // 0x278
	UTextBlock* Name; // 0x280
	UTextBlock* steamid; // 0x288
	AReadyOrNotPlayerState* PlayerState; // 0x290
	bool bHighlighted; // 0x298
};

struct UNiagaraDataInterfaceVectorField {
	UVectorField* Field; // 0x38
	bool bTileX; // 0x40
	bool bTileY; // 0x41
	bool bTileZ; // 0x42
};

struct UCrowdManager {
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

struct UGizmoAxisTranslationParameterSource {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90
	TScriptInterface<IGizmoTransformSource> TransformSource; // 0xa0
	float Parameter; // 0xb0
	FGizmoFloatParameterChange LastChange; // 0xb4
	FVector CurTranslationAxis; // 0xbc
	FVector CurTranslationOrigin; // 0xc8
	FTransform InitialTransform; // 0xe0
};

struct UAnimNotify_SetStrafe {
	bool bSetStrafe; // 0x38
};

struct ALandscapeStreamingProxy {
	LazyObjectProperty LandscapeActor; // 0x598
};

struct AExponentialHeightFog {
	UExponentialHeightFogComponent* Component; // 0x220
	char bEnabled : 1; // 0x228
};

struct UBTDecorator_SetTagCooldown {
	FGameplayTag CooldownTag; // 0x68
	float CooldownDuration; // 0x70
	bool bAddToExistingDuration; // 0x74
};

struct USimpleCameraShakePattern {
	float Duration; // 0x28
	float BlendInTime; // 0x2c
	float BlendoutTime; // 0x30
};

struct UAnimCompress {
	char bNeedsSkeleton : 1; // 0x38
	AnimationCompressionFormat TranslationCompressionFormat; // 0x3c
	AnimationCompressionFormat RotationCompressionFormat; // 0x3d
	AnimationCompressionFormat ScaleCompressionFormat; // 0x3e
};

struct UBackgroundBlurSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UInterpTrackInstSlomo {
	float OldTimeDilation; // 0x28
};

struct UBTTask_FinishWithResult {
	EBTNodeResult Result; // 0x70
};

struct AVIPEscortGM {
	FMulticastInlineDelegate OnVIPKilled; // 0x6d8
	FMulticastInlineDelegate OnVIPFreed; // 0x6e8
	APlayerController* VIPPlayer; // 0x6f8
	APlayerStart_VIP_Spawn* ChosenVIPSpawn; // 0x700
	APlayerCharacter* VIPCharacterClass; // 0x708
	FName VIPSpawnTag; // 0x710
	float TimeToDeliverVIP; // 0x718
	float HostageHoldTime; // 0x71c
};

struct ALightmassPortal {
	ULightmassPortalComponent* PortalComponent; // 0x220
};

struct USourceEffectFilterPreset {
	FSourceEffectFilterSettings Settings; // 0xb0
};

struct UBTTask_PlayAnimation {
	UAnimationAsset* AnimationToPlay; // 0x70
	char bLooping : 1; // 0x78
	char bNonBlocking : 1; // 0x78
	UBehaviorTreeComponent* MyOwnerComp; // 0x80
	USkeletalMeshComponent* CachedSkelMesh; // 0x88
};

struct UW_DevScoreDisplay_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* ArrestedCivilianCount; // 0x268
	UTextBlock* ArrestedSuspectCount; // 0x270
	UTextBlock* EvidenceCollectedText; // 0x278
	UTextBlock* KilledCivilianCount; // 0x280
	UTextBlock* KilledSuspectCount; // 0x288
	UTextBlock* MissionCompleteText; // 0x290
	UTextBlock* MissionFailedText; // 0x298
	UTextBlock* MissionSoftCompleteText; // 0x2a0
	UTextBlock* RemainingEvidenceCount; // 0x2a8
	UTextBlock* ReportedCivilianCount; // 0x2b0
	UTextBlock* ReportedSuspectCount; // 0x2b8
	UTextBlock* ReportsMadeText; // 0x2c0
	UTextBlock* ReportsRemainingText; // 0x2c8
	UTextBlock* ReportsTotal; // 0x2d0
	URetainerBox* RetainerBox_1; // 0x2d8
	UTextBlock* RulesOfEngagementBrokenCount; // 0x2e0
	UTextBlock* ScenarioText; // 0x2e8
	UTextBlock* TotalCivilianCount; // 0x2f0
	UTextBlock* TotalEvidence; // 0x2f8
	UTextBlock* TotalSuspectCount; // 0x300
};

struct UAxisAngleGizmo {
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

struct UMovieSceneVectorSection {
	FMovieSceneFloatChannel Curves[0x4]; // 0xf0
	int32_t ChannelsUsed; // 0x370
};

struct UModelComponent {
	UBodySetup* ModelBodySetup; // 0x468
};

struct UW_Briefing_Timeline_TrackWaveElement_vert_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* img_cap; // 0x268
	UImage* img_Line; // 0x270
	USizeBox* SB_Line; // 0x278
	UVerticalBox* VB_WaveLine; // 0x280
	float WaveAmp; // 0x288
	bool bIsTimelineEvent; // 0x28c
	float Spacing; // 0x290
	bool Updating; // 0x294
	float UpdateFreq; // 0x298
	float UpdateProgress; // 0x29c
	float LastAmp; // 0x2a0
};

struct UAnimBoneCompressionSettings {
	TArray<UAnimBoneCompressionCodec*> Codecs; // 0x28
};

struct UFireOnDroppedAnimNotify {
	float ChanceToFire; // 0x38
	APlayerCharacter* PlayerCharacter; // 0x40
};

struct UInputKeySelector {
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

struct UANIMBP_Fiveseven_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x308
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x388
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x3d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x470
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x4f0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x5f8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x618
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x638
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x6f8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x778
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x818
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x898
	FAnimNode_Slot AnimGraphNode_Slot; // 0x958
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x9a0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xaf8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xb20
	float Mag01Alpha; // 0xb48
	float SlideAlpha; // 0xb4c
};

struct UAssetMappingTable {
	TArray<FAssetMapping> MappedAssets; // 0x28
};

struct ASplineMeshActor {
	USplineMeshComponent* SplineMeshComponent; // 0x220
};

struct USynthComponent {
	char bAutoDestroy : 1; // 0x1f8
	char bStopWhenOwnerDestroyed : 1; // 0x1f8
	char bAllowSpatialization : 1; // 0x1f8
	char bOverrideAttenuation : 1; // 0x1f8
	char bEnableBusSends : 1; // 0x1fc
	char bEnableBaseSubmix : 1; // 0x1fc
	char bEnableSubmixSends : 1; // 0x1fc
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

struct UMirrorZoneComponent {
	bool bMustBeCrouching; // 0x478
	FText ButtonPromptText; // 0x480
};

struct APrimary_Saiga12_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1130
};

struct UNiagaraDataInterfacePlatformSet {
	FNiagaraPlatformSet Platforms; // 0x38
};

struct UW_Combobox_Menu_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UVerticalBox* OptionContainer; // 0x268
	TArray<FString> OptionsAsStrings; // 0x270
	TArray<FText> OptionsAsText; // 0x280
	UW_StandardCombobox_New_C* ParentComboBox; // 0x290
	UTextBlock* DescriptionWidget; // 0x298
	TArray<FText> Descriptions; // 0x2a0
	int32_t SelectedOption; // 0x2b0
	int32_t Font Size; // 0x2b4
};

struct AVolumetricLightmapDensityVolume {
	FInt32Interval AllowedMipLevelRange; // 0x258
};

struct UNiagaraPreviewAxis_InterpParamInt32 {
	int32_t Min; // 0x38
	int32_t Max; // 0x3c
};

struct UProgressBar {
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

struct UMovieSceneIntegerSection {
	FMovieSceneIntegerChannel IntegerCurve; // 0xf0
};

struct UScoringComponent {
	char bEnabled : 1; // 0xb0
	FScoreData ScoringData; // 0xb8
	FDataTableRowHandle ScoreGroup; // 0xe8
	FString ScoreGroupName; // 0xf8
	EObjectiveLevel ObjectiveLevel; // 0x108
	char bAutoAddToScorePool : 1; // 0x109
	UDataTable* ScoreGroupDataTable; // 0x118
};

struct UInAppPurchaseCallbackProxy2 {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct AAmmoRefillBox {
	UInteractableComponent* InteractableComponent; // 0x228
	AReadyOrNotCharacter* RefillCharacter; // 0x238
};

struct UInterpTrackInstLinearColorProp {
	FLinearColor ResetColor; // 0x58
};

struct UWeaponWheelWidget {
	TArray<FName> Categories; // 0x400
};

struct UModularSynthPresetBank {
	TArray<FModularSynthPresetBankEntry> Presets; // 0x28
};

struct UAISubsystem {
	UAISystem* AISystem; // 0x30
};

struct UEditableGameplayTagQueryExpression_AnyExprMatch {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
};

struct UAnimationSharingManager {
	TArray<USkeleton*> Skeletons; // 0x28
	TArray<UAnimSharingInstance*> PerSkeletonData; // 0x38
};

struct USoundSimple {
	TArray<FSoundVariation> Variations; // 0x170
	USoundWave* SoundWave; // 0x180
};

struct UInAppPurchaseRestoreCallbackProxy2 {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UNiagaraDataInterfaceColorCurve {
	FRichCurve RedCurve; // 0x70
	FRichCurve GreenCurve; // 0xf0
	FRichCurve BlueCurve; // 0x170
	FRichCurve AlphaCurve; // 0x1f0
};

struct ALevelBounds {
	UBoxComponent* BoxComponent; // 0x220
	bool bAutoUpdateBounds; // 0x228
};

struct USkinComponent {
	FText Name; // 0xb8
	FText Description; // 0xd0
	UTexture2D* Icon; // 0xe8
	bool bRequiresDLC; // 0xf0
	EDLC Dlc; // 0xf1
	bool bResetsToFactorySkin; // 0xf2
	ETeamType LockedToTeam; // 0xf3
	TArray<AActor*> LockedToBlueprint; // 0xf8
	TMap<USkeletalMesh*, USkeletalMesh*> SkeletalMeshSkinMap; // 0x108
	TMap<USkeletalMeshComponent*, USkeletalMesh*> PreAppliedSkeletalMeshMap; // 0x158
	TMap<UStaticMesh*, UStaticMesh*> StaticMeshSkinMap; // 0x1a8
	TMap<UStaticMeshComponent*, UStaticMesh*> PreAppliedStaticMeshMap; // 0x1f8
};

struct UWidgetAnimation {
	UMovieScene* MovieScene; // 0x60
	TArray<FWidgetAnimationBinding> AnimationBindings; // 0x68
	bool bLegacyFinishOnStop; // 0x78
	FString DisplayLabel; // 0x80
};

struct UEnvQueryOption {
	UEnvQueryGenerator* Generator; // 0x28
	TArray<UEnvQueryTest*> Tests; // 0x30
};

struct AGunGameGM {
	float RespawnTime; // 0x6d8
	bool bSuddenDeath; // 0x6dc
	TArray<TSoftClassPtr<UObject>> Itemlist; // 0x6e0
	FSavedLoadout DefaultItems; // 0x6f0
	int32_t KillsToProgress; // 0x828
};

struct UInterpTrackFloatBase {
	FInterpCurveFloat FloatTrack; // 0x70
	float CurveTension; // 0x88
};

struct UGeometryCacheTrackStreamable {
	UGeometryCacheCodecBase* Codec; // 0x58
	float StartSampleTime; // 0xc8
};

struct UNetAnalyticsAggregatorConfig {
	TArray<FNetAnalyticsDataConfig> NetAnalyticsData; // 0x28
};

struct UW_DebugOverlay_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* BlackText; // 0x268
	UVerticalBox* BounceVertical; // 0x270
	UVerticalBox* BouncingTextContainer; // 0x278
	UW_DebugInfoContainer_C* DebugInfo; // 0x280
	UW_DebugInfoContainer_C* DebugInfo_Score; // 0x288
	UTextBlock* TextBlock_1; // 0x290
	UTextBlock* TextBlock_2; // 0x298
	UTextBlock* TextBlock_3; // 0x2a0
	UTextBlock* TextBlock_4; // 0x2a8
	UVerticalBox* VeryHiddenID; // 0x2b0
	UW_DevScoreDisplay_C* W_DevScoreDisplay; // 0x2b8
	UTextBlock* WhiteText; // 0x2c0
	bool bInitialized; // 0x2c8
	APlayerCharacter* CachedPlayer; // 0x2d0
	AActor* CachedActor; // 0x2d8
};

struct UPlayerSpeedIndicator_V2 {
	USizeBox* Twenty_Box; // 0x278
	UImage* Twenty_Image; // 0x280
	USizeBox* Fourty_Box; // 0x288
	UImage* Fourty_Image; // 0x290
	USizeBox* Sixty_Box; // 0x298
	UImage* Sixty_Image; // 0x2a0
	USizeBox* Eighty_Box; // 0x2a8
	UImage* Eighty_Image; // 0x2b0
	USizeBox* OneHundred_Box; // 0x2b8
	UImage* OneHundred_Image; // 0x2c0
	UTextBlock* SpeedPercentage_Text; // 0x2c8
	APlayerCharacter* PlayerCharacter; // 0x2d0
	float BaselineOpacity; // 0x2d8
	float FadeSpeed; // 0x2dc
	float LastSetRunSpeedPercent; // 0x2e0
	float MinRunSpeedPercent; // 0x2e4
	float MaxRunSpeedPercent; // 0x2e8
	float NormalizedRunSpeedPercent; // 0x2ec
};

struct UW_TeamStatus_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3e8
	UHorizontalBox* LeftAligned_HorizontalBox; // 0x3f0
	UHorizontalBox* RightAligned_HorizontalBox; // 0x3f8
	UWidgetSwitcher* StyleSwitcher; // 0x400
};

struct UMaterialExpressionStep {
	FExpressionInput Y; // 0x40
	FExpressionInput X; // 0x54
	float ConstY; // 0x68
	float ConstX; // 0x6c
};

struct UReadyOrNotDebugSubsystem {
	char bDrawMeleeRange : 1; // 0x30
	char bInfiniteHealth : 1; // 0x30
	char bInfiniteAmmo : 1; // 0x30
	char bDrawGrenadePath : 1; // 0x30
	char bRTXOn : 1; // 0x30
	char bRTX_GlobalIlluminationOn : 1; // 0x30
	char bRTX_ReflectionsOn : 1; // 0x30
	char bRTX_AmbientOcclusionOn : 1; // 0x30
	char bRTX_ShadowsOn : 1; // 0x31
	char bRTX_TranslucencyOn : 1; // 0x31
	char bVSyncOn : 1; // 0x31
	bool bOverlayOn_Fibonacci; // 0x32
	bool bOverlayOn_LineUp; // 0x33
	bool bOverlayOn_PistolLine; // 0x34
	bool bOverlayOn_RifleLine; // 0x35
	bool bOverlayOn_RuleOfThirds; // 0x36
	char bApplyGlobalDamageMultiplier_Weapons : 1; // 0x37
	char bApplyGlobalDamageMultiplier_Grenades : 1; // 0x37
	float GlobalDamageMultiplier_Weapons; // 0x38
	float GlobalDamageMultiplier_Grenades; // 0x3c
	char bLogWeaponDamageValuesToConsole : 1; // 0x40
	char bShowObjectiveMarkers : 1; // 0x40
	char bShowAllEvidenceActors : 1; // 0x40
	char bShowHesitationBar : 1; // 0x40
	char bLogPlayerAnimationStatus : 1; // 0x40
	char bDrawInteractableComponents : 1; // 0x40
	char bDisableInteractableComponent : 1; // 0x40
	char bDrawDebugTraces : 1; // 0x40
	char bDrawDoorKillStunDistances : 1; // 0x41
	char bMuteFMOD : 1; // 0x41
	char bPauseFMOD : 1; // 0x41
	char bForceOpenAllDoors : 1; // 0x41
	char bForceCloseAllDoors : 1; // 0x41
	char bLaserEyes : 1; // 0x41
	char bDisableMusic : 1; // 0x41
	char bDrawCoverPoints : 1; // 0x41
	char bDrawCoverOctree : 1; // 0x42
	char bSWATDynamicCover : 1; // 0x42
	char bSuspectDynamicCover : 1; // 0x42
	char bDrawSWATCoverLogic : 1; // 0x42
	char bDrawSuspectCoverLogic : 1; // 0x42
	char bInfiniteSWATItems : 1; // 0x42
};

struct UInterpTrackFade {
	char bPersistFade : 1; // 0x90
	char bFadeAudio : 1; // 0x90
	FLinearColor FadeColor; // 0x94
};

struct UBaseActivity {
	FMulticastInlineDelegate OnStartActivity; // 0x28
	FMulticastInlineDelegate OnPerformActivity; // 0x38
	FMulticastInlineDelegate OnFinishActivity; // 0x48
	FMulticastInlineDelegate OnSoftFinishActivity; // 0x58
	FString ActivityName; // 0x80
	int32_t Priority; // 0x90
	float TickInterval; // 0x98
	float MaxActivityTime; // 0x9c
	float ActivityCooldown; // 0xa0
	float ActivityStartDelay; // 0xa4
	float MaxRandomStartDelay; // 0xa8
	char bIsProgressActivity : 1; // 0xac
	char bFinishActivityWhenOverriden : 1; // 0xac
	char bAbortMoveWhenActivityFinished : 1; // 0xac
	char bAbortMoveWhenActivityOverriden : 1; // 0xac
	char bAbortActivityIfCannotReachLocation : 1; // 0xac
	char bAbortIfTrackingEnemy : 1; // 0xac
	char bNoMoveActivity : 1; // 0xac
	char bResetStateMachineWhenActivityResumed : 1; // 0xac
	char bOverrideCommandMarkerActivationSetup : 1; // 0xad
	char bDisplayCommandMarkers : 1; // 0xad
	float ElapsedActivityTime; // 0xb0
	FVector Location; // 0xb4
	FString ActivityName_Original; // 0xc0
	FString ProgressState; // 0xd0
	ACyberneticController* OwningController; // 0x188
	ACommandDecal* CachedCommandDecal; // 0x190
	ACommandDecal* NonCachedCommandDecal; // 0x198
	UActivityFiniteStateMachine* ActivityStateMachine; // 0x1a0
};

struct UApplicationLifecycleComponent {
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

struct UW_BindConflictModal_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x360
};

struct AReadyOrNotGameState {
	bool bHasHostFinishedLoading; // 0x271
	TArray<UDataTable*> LoadedDataTables; // 0x278
	AScoringManager* ScoringManager; // 0x288
	AReadyOrNotSignificanceManager* SignificanceManager; // 0x298
	FDataTableRowHandle Rep_GameModeSettings; // 0x2a0
	float TimeTillGameStartCountdown; // 0x2b0
	TArray<ABadAIAction*> BadAIActionActors; // 0x2c0
	bool bHasLeftLoadOut; // 0x2d0
	ULevelStreaming* PreMissionStreamedLevel; // 0x2d8
	TSoftObjectPtr<UWorld> SubPreMissionPlanningLevel; // 0x2e0
	FText ModeName; // 0x310
	FText ModeRules; // 0x328
	TArray<AObjective*> MissionObjectives; // 0x340
	UObituaryData* ObituaryData; // 0x350
	bool bAnnounceReinforcements; // 0x358
	bool bRadioGlareEnabled; // 0x359
	UFMODEvent* ReplenishAllAmmoSound; // 0x360
	TArray<AReadyOrNotCharacter*> RedTeamPlayers; // 0x368
	TArray<AReadyOrNotCharacter*> BlueTeamPlayers; // 0x378
	UFMODAudioComponent* AnnouncerAudioComponent; // 0x388
	int32_t TotalMissionAbuseCount; // 0x390
	TArray<TScriptInterface<IListenForArrest>> ArrestListeners; // 0x398
	TArray<TScriptInterface<IListenForDeath>> DeathListeners; // 0x3a8
	TArray<TScriptInterface<IListenForIncapacitation>> IncapacitationListeners; // 0x3b8
	TArray<TScriptInterface<IListenForInjury>> InjuryListeners; // 0x3c8
	TArray<TScriptInterface<IListenForSpawn>> SpawnListeners; // 0x3d8
	TArray<TScriptInterface<IListenForPickup>> EvidenceListeners; // 0x3e8
	TArray<TScriptInterface<IListenForWeaponClearing>> WeaponClearingListeners; // 0x3f8
	TArray<TScriptInterface<IListenForReport>> ReportListeners; // 0x408
	TArray<TScriptInterface<IListenForGameStart>> GameStartListeners; // 0x418
	TArray<TScriptInterface<IListenForGameEnd>> GameEndListeners; // 0x428
	TArray<TScriptInterface<IListenForGamePreStart>> GamePreStartListeners; // 0x438
	TArray<TScriptInterface<IListenForRoundEnded>> RoundEndListeners; // 0x448
	TArray<TScriptInterface<IListenForYell>> YellListeners; // 0x458
	TArray<TScriptInterface<IListenForUncuffed>> UncuffedListeners; // 0x468
	bool bDisableEquipment; // 0x478
	bool bEnableCommandChat; // 0x479
	bool bUseReinforcements; // 0x47a
	float Reinforcements_TimeRemaining; // 0x47c
	bool bRunWarmup; // 0x480
	AActor* SceneCapturePlayerCameraClass; // 0x488
	bool bShowEnemiesAsSuspects; // 0x490
	TArray<FKillFeedData> KillFeedData; // 0x498
	FMulticastInlineDelegate OnUpdateKillFeed; // 0x4a8
	FString GameRulesIntroAnnouncerRowName; // 0x4c0
	bool bWaitingForPlayers; // 0x4d0
	float PlanningTimeLeft; // 0x4d4
	int32_t RedTeamWins; // 0x4d8
	int32_t BlueTeamWins; // 0x4dc
	FMulticastInlineDelegate OnWinsUpdated; // 0x4e8
	float EndPlayTimer; // 0x4f8
	float RoundTimeRemaining; // 0x4fc
	bool bUseTimelimit; // 0x500
	int32_t Scorelimit; // 0x504
	float TimeSinceMatchStarted; // 0x508
	AReferendum* CurrentReferendum; // 0x510
	AMusicManager* MusicManager; // 0x518
	TArray<AReferendum*> AllowedReferendumTypes; // 0x520
	bool bCanShowScoreboard; // 0x530
	bool bUsePlanningUICamera; // 0x531
	float RoundTimeElapsed; // 0x534
	int32_t RoundsPlayed; // 0x538
	int32_t RoundsToPlay; // 0x53c
	ETeamType RoundWinningTeam; // 0x540
	ETeamType MatchWinningTeam; // 0x541
	TArray<AReadyOrNotPlayerState*> RoundWinners; // 0x548
	FMulticastInlineDelegate OnChatMessageReceived; // 0x558
	FString MissionName; // 0x568
	FText MissionDescription; // 0x578
	EMatchState MatchState; // 0x590
	FString NextURLReplicated; // 0x598
	FMulticastInlineDelegate OnSequenceStarted; // 0x5a8
	TArray<FName> WhitelistedLabels; // 0x5b8
	UDebugDisplayWidget* DebugDisplayWidget; // 0x5c8
	FString ModeURL_Replicated; // 0x5d0
	TArray<FFloorMapPointData> DrawingPointData; // 0x5e0
	bool bPvPMode; // 0x5f0
	bool bCanReportToTOC; // 0x5f1
	float GametypeDamageModifier; // 0x5f4
	float HeadDamageModifier; // 0x5f8
	float FootDamageModifier; // 0x5fc
	float LegDamageModifier; // 0x600
	float ArmDamageModifier; // 0x604
	float OtherLimbDamageModifier; // 0x608
	bool bFreeForAll; // 0x60c
	bool bDisablePickups; // 0x60d
	char bRevivesAllowed : 1; // 0x60e
	TArray<FRChatMessage> SavedChatMessages; // 0x610
	bool bBallisticsDebug; // 0x620
	bool bDamageDebug; // 0x621
	bool bSpeechRecognitionDebug; // 0x622
	bool bGOAPDebug; // 0x623
	bool bAnnounceTeamReinforcements; // 0x624
	FText Msg_BothTeamsReinforced; // 0x628
	FText Msg_RedTeamReinforced; // 0x640
	FText Msg_BlueTeamReinforced; // 0x658
	TArray<UChallenge*> GameModeChallenges; // 0x670
	UChallengeManager* ChallengeManager; // 0x680
	UChallengeManager* ChallengeManagerClass; // 0x688
	char bInPlanningMenu : 1; // 0x690
	float CustomTimeDilationApplied; // 0x694
	TArray<APlayerController*> AdminPlayerControllers; // 0x698
	ATOCManager* TOCManager; // 0x6b0
	UMotivityThreadManager* MotivityThreadManager; // 0x6b8
};

struct UMovieSceneParameterSection {
	TArray<FBoolParameterNameAndCurve> BoolParameterNamesAndCurves; // 0xe8
	TArray<FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // 0xf8
	TArray<FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves; // 0x108
	TArray<FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // 0x118
	TArray<FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // 0x128
	TArray<FTransformParameterNameAndCurves> TransformParameterNamesAndCurves; // 0x138
};

struct UNiagaraDataInterfaceAudioPlayer {
	USoundBase* SoundToPlay; // 0x38
	USoundAttenuation* Attenuation; // 0x40
	USoundConcurrency* Concurrency; // 0x48
	TArray<FName> ParameterNames; // 0x50
	bool bLimitPlaysPerTick; // 0x60
	int32_t MaxPlaysPerTick; // 0x64
	bool bStopWhenComponentIsDestroyed; // 0x68
};

struct UMovieSceneParticleSection {
	FMovieSceneParticleChannel ParticleKeys; // 0xe8
};

struct AWalkImpactEffects_C {
	USceneComponent* DefaultSceneRoot; // 0xcb0
};

struct URoNAnimInstance_HumanBase {
	URoNMoveStyleComponent* MoveStyleComponent; // 0x2b8
	bool bIsStrafing; // 0x2d4
	FRoNStyleIdleData IdleData_SlotA; // 0x2d8
	FRoNStyleTurnData TurnData_SlotA; // 0x2e8
	FRoNStyleIdleData IdleData_SlotB; // 0x330
	FRoNStyleTurnData TurnData_SlotB; // 0x340
	FRoNGaitTransitionData TransitionData_SlotA; // 0x388
	FRoNGaitLocomotionData LocomotionData_SlotA; // 0x4a8
	FRoNGaitTransitionData TransitionData_SlotB; // 0x568
	FRoNGaitLocomotionData LocomotionData_SlotB; // 0x688
	FRoNStyleIdleData IdleData_Default; // 0x748
	FRoNStyleTurnData TurnData_Default; // 0x758
	FRoNGaitTransitionData TransitionData_Default; // 0x7a0
	FRoNGaitLocomotionData LocomotionData_Default; // 0x8c0
	float SlotBlendTime; // 0x980
	float AimOffsetAlpha; // 0x984
	float StrafeBlendTime; // 0x988
	float SlopeWarpingAlpha; // 0x98c
	bool bIsMoveStyleSlotBActive; // 0x990
	float Lean; // 0x9a0
	float LeanFactor; // 0x9a4
	float LeanInterpSpeed; // 0x9a8
	float AdjustedPlayrate; // 0x9ac
	float PlayrateClampMax; // 0x9b0
	int32_t CurrentIdleIndex; // 0x9b4
	UAnimSequence* IdleReference_SlotA; // 0x9b8
	UAnimSequence* IdleReference_SlotB; // 0x9c0
	EStrafeDirection CurrentStrafeDirection; // 0x9c8
	float StrafeDirectionAngle; // 0x9d0
	FVector2D AimOffsetInterpolated; // 0x9d4
	bool bIsKnockedOut; // 0x9dc
	bool bFinishedKnockout; // 0x9dd
	bool bIsDead; // 0x9de
	FPoseSnapshot DeathPose; // 0x9e0
	FWorldBuildingAnimState WorldBuildingAnimState; // 0xa18
	EAnimWeaponType CurWeaponType; // 0xa38
	bool bIsArrested; // 0xa39
	bool bSurrendered; // 0xa3a
	bool bIsGetUpPlaying; // 0xa3b
	bool bEnableIKProcess; // 0xa3d
	bool bIsFemale; // 0xa3e
	bool bIsUnarmed; // 0xa3f
	bool bIsSWAT; // 0xa40
	float LeftArmIKAlpha; // 0xa44
	float RightArmIKAlpha; // 0xa48
	float ArmsOnlySlotAlpha; // 0xa4c
	float LeftArmOnlySlotAlpha; // 0xa50
	float HandAdditiveLockOverride; // 0xa54
	bool bWeaponDown; // 0xa58
	bool bIsPistolAndWeaponDown; // 0xa59
	bool bIsPistol; // 0xa5a
	UAnimSequenceBase* Add_Lowered_Override; // 0xa60
	UAnimSequenceBase* Add_Shouldered_Override; // 0xa68
	bool bIsReloading; // 0xa70
	float FinalAimOffsetAlpha; // 0xa74
	bool bAnyMontageIsActive; // 0xa78
	bool bFullBodyMontagePlaying; // 0xa79
	bool bUpperBodyMontagePlaying; // 0xa7a
	bool bInteractionMontagePlaying; // 0xa7b
	bool bFullOrInteractionMontagePlaying; // 0xa7c
	EItemOverrideRule CurOverrideRule; // 0xa7d
	bool bIsLoweredSet; // 0xa7e
};

struct UInterpTrackInstVectorProp {
	FVector ResetVector; // 0x58
};

struct AObjectivePoint {
	AActor* TiedToActor; // 0x220
	UObjectiveMarkerComponent* ObjectiveMarkerComponent; // 0x228
	UMapActorComponent* MapActorComponent; // 0x230
};

struct UDebugCameraControllerSettings {
	TArray<FDebugCameraControllerSettingsViewModeIndex> CycleViewModes; // 0x38
};

struct UAsyncTaskDownloadImage {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFail; // 0x40
};

struct UFindSessionsCallbackProxyAdvanced {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct ANiagaraPerfBaselineActor {
	UNiagaraBaselineController* Controller; // 0x220
	UTextRenderComponent* Label; // 0x228
};

struct UCursor_OpenHand_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetSwitcher* Cursor_Switcher; // 0x268
	UImage* Mouse_Free; // 0x270
	UImage* Mouse_Pressed; // 0x278
	bool MouseDown; // 0x280
};

struct UInterpTrackInstColorProp {
	FColor ResetColor; // 0x58
};

struct UAnimNotify_LockPickDoor {
	char bLockPickFinished : 1; // 0x38
};

struct UNiagaraPreviewAxis_InterpParamFloat {
	float Min; // 0x38
	float Max; // 0x3c
};

struct UProceduralFoliageTile {
	UProceduralFoliageSpawner* FoliageSpawner; // 0x28
	TArray<FProceduralFoliageInstance> InstancesArray; // 0xd0
};

struct UWidgetComponent {
	EWidgetSpace Space; // 0x478
	EWidgetTimingPolicy TimingPolicy; // 0x479
	UUserWidget* WidgetClass; // 0x480
	FIntPoint DrawSize; // 0x488
	bool bManuallyRedraw; // 0x490
	bool bRedrawRequested; // 0x491
	float RedrawTime; // 0x494
	FIntPoint CurrentDrawSize; // 0x4a0
	bool bDrawAtDesiredSize; // 0x4a8
	FVector2D Pivot; // 0x4ac
	bool bReceiveHardwareInput; // 0x4b4
	bool bWindowFocusable; // 0x4b5
	EWindowVisibility WindowVisibility; // 0x4b6
	bool bApplyGammaCorrection; // 0x4b7
	ULocalPlayer* OwnerPlayer; // 0x4b8
	FLinearColor BackgroundColor; // 0x4c0
	FLinearColor TintColorAndOpacity; // 0x4d0
	float OpacityFromTexture; // 0x4e0
	EWidgetBlendMode BlendMode; // 0x4e4
	bool bIsTwoSided; // 0x4e5
	bool TickWhenOffscreen; // 0x4e6
	UBodySetup* BodySetup; // 0x4e8
	UMaterialInterface* TranslucentMaterial; // 0x4f0
	UMaterialInterface* TranslucentMaterial_OneSided; // 0x4f8
	UMaterialInterface* OpaqueMaterial; // 0x500
	UMaterialInterface* OpaqueMaterial_OneSided; // 0x508
	UMaterialInterface* MaskedMaterial; // 0x510
	UMaterialInterface* MaskedMaterial_OneSided; // 0x518
	UTextureRenderTarget2D* RenderTarget; // 0x520
	UMaterialInstanceDynamic* MaterialInstance; // 0x528
	bool bAddedToScreen; // 0x530
	bool bEditTimeUsable; // 0x531
	FName SharedLayerName; // 0x534
	int32_t LayerZOrder; // 0x53c
	EWidgetGeometryMode GeometryMode; // 0x540
	float CylinderArcAngle; // 0x544
	ETickMode TickMode; // 0x548
	UUserWidget* Widget; // 0x570
};

struct UW_Scoreboard_Line_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* Arrests; // 0x268
	UImage* CheckboxImage; // 0x270
	UTextBlock* Damage; // 0x278
	UTextBlock* Deaths; // 0x280
	UImage* Highlight; // 0x288
	UTextBlock* Incapacitations; // 0x290
	UTextBlock* Kills; // 0x298
	UTextBlock* Name; // 0x2a0
	UTextBlock* Ping; // 0x2a8
	UTextBlock* Score; // 0x2b0
	UTextBlock* Status; // 0x2b8
	UTextBlock* TimesArrested; // 0x2c0
	AReadyOrNotPlayerState* PlayerState; // 0x2c8
	bool bFreeForAll; // 0x2d0
	bool bHideHealthStatus; // 0x2d1
	bool bHideReadyCheckbox; // 0x2d2
};

struct UANIMBP_Preview_Char_Body_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_2; // 0x2d0
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK; // 0x4b0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x690
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x6b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x6d0
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver_6; // 0x750
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver_5; // 0x8b8
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver_4; // 0xa20
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver_3; // 0xb88
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xcf0
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver_2; // 0xd90
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver; // 0xef8
	FAnimNode_Root AnimGraphNode_Root; // 0x1060
	UAnimSequence* PreviewSeqRef; // 0x1090
	bool bIsPhysicsOn; // 0x1098
};

struct UMovieSceneEventTrack {
	char bFireEventsWhenForwards : 1; // 0xa0
	char bFireEventsWhenBackwards : 1; // 0xa0
	EFireEventsAtPosition EventPosition; // 0xa4
	TArray<UMovieSceneSection*> Sections; // 0xa8
};

struct UMaterialExpressionNoise {
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

struct UAnimSequence {
	int32_t NumFrames; // 0xa8
	TArray<FTrackToSkeletonMap> TrackToSkeletonMapTable; // 0xb0
	UAnimBoneCompressionSettings* BoneCompressionSettings; // 0xd0
	UAnimCurveCompressionSettings* CurveCompressionSettings; // 0xd8
	EAdditiveAnimationType AdditiveAnimType; // 0x150
	EAdditiveBasePoseType RefPoseType; // 0x151
	UAnimSequence* RefPoseSeq; // 0x158
	int32_t RefFrameIndex; // 0x160
	FName RetargetSource; // 0x164
	TArray<FTransform> RetargetSourceAssetReferencePose; // 0x170
	EAnimInterpolationType Interpolation; // 0x180
	bool bEnableRootMotion; // 0x181
	ERootMotionRootLock RootMotionRootLock; // 0x182
	bool bForceRootLock; // 0x183
	bool bUseNormalizedRootMotionScale; // 0x184
	bool bRootMotionSettingsCopiedFromMontage; // 0x185
	TArray<FAnimSyncMarker> AuthoredSyncMarkers; // 0x188
	TArray<FBakedCustomAttributePerBoneData> BakedPerBoneCustomAttributeData; // 0x1b0
};

struct UGizmoScaledTransformSource {
	TScriptInterface<IGizmoTransformSource> ChildTransformSource; // 0x48
};

struct UParticleModuleParameterDynamic {
	TArray<FEmitterDynamicParameter> DynamicParams; // 0x30
	int32_t UpdateFlags; // 0x40
	char bUsesVelocity : 1; // 0x44
};

struct APickupActor {
	FMulticastInlineDelegate OnActorPickedUp; // 0x228
	FMulticastInlineDelegate OnActorPickedUp_NoParam; // 0x238
	FMulticastInlineDelegate OnActorDropped; // 0x248
	FName PickupName; // 0x258
	USkeletalMeshComponent* SkeletalMesh; // 0x260
	UStaticMeshComponent* StaticMesh; // 0x268
	UObjectiveMarkerComponent* ObjectiveMarkerComponent; // 0x270
	UInteractableComponent* InteractableComponent; // 0x278
	AActor* PickupInstigator; // 0x280
};

struct UDestroySessionCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UInterpTrackFloatAnimBPParam {
	UObject* AnimBlueprintClass; // 0x90
	UAnimInstance* AnimClass; // 0x98
	FName paramName; // 0xa0
};

struct UPhysicsAsset {
	TArray<int32_t> BoundsBodies; // 0x30
	TArray<USkeletalBodySetup*> SkeletalBodySetups; // 0x40
	TArray<UPhysicsConstraintTemplate*> ConstraintSetup; // 0x50
	FSolverIterations SolverIterations; // 0x60
	EPhysicsAssetSolverType SolverType; // 0x7c
	char bNotForDedicatedServer : 1; // 0x7d
	UThumbnailInfo* ThumbnailInfo; // 0x120
	TArray<UBodySetup*> BodySetup; // 0x128
};

struct USplineMeshComponent {
	FSplineMeshParams SplineParams; // 0x4e8
	FVector SplineUpDir; // 0x540
	float SplineBoundaryMin; // 0x54c
	FGuid CachedMeshBodySetupGuid; // 0x550
	UBodySetup* BodySetup; // 0x560
	float SplineBoundaryMax; // 0x568
	char bAllowSplineEditingPerInstance : 1; // 0x56c
	char bSmoothInterpRollScale : 1; // 0x56c
	char bMeshDirty : 1; // 0x56c
	ESplineMeshAxis ForwardAxis; // 0x56d
	float VirtualTextureMainPassMaxDrawDistance; // 0x570
};

struct UNiagaraDataInterfaceGrid2D {
	int32_t NumCellsX; // 0xd8
	int32_t NumCellsY; // 0xdc
	int32_t NumCellsMaxAxis; // 0xe0
	int32_t NumAttributes; // 0xe4
	bool SetGridFromMaxAxis; // 0xe8
	FVector2D WorldBBoxSize; // 0xec
};

struct UANIMBP_BRN180_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x308
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x350
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x4a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x548
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x5c8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x648
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x668
	FAnimNode_Slot AnimGraphNode_Slot; // 0x728
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x770
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x798
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x7c0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x8c8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x9d0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xad8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xbe0
	float Mag01Alpha; // 0xc00
	bool bIsSemi; // 0xc04
	float ScopeAdjustAlpha; // 0xc08
	float Mag02Alpha; // 0xc0c
};

struct UW_KingOfTheHillMeter_Tracker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UW_KingOfTheHillMeter_V2_C* BlueTeamMeter; // 0x268
	USpacer* MeterLeft_Spacer; // 0x270
	USpacer* MeterRight_Spacer; // 0x278
	UImage* MoverHead_Image; // 0x280
	UW_KingOfTheHillMeter_V2_C* RedTeamMeter; // 0x288
	AKingOfTheHillGS* KOTH_GS; // 0x290
	int32_t LastValue; // 0x298
};

struct UUnlockDoorQuestNode {
	ADoor* TargetDoor; // 0x250
};

struct UNiagaraPreviewAxis_InterpParamLinearColor {
	FLinearColor Min; // 0x38
	FLinearColor Max; // 0x48
};

struct ALadderSnapZone {
	UBoxComponent* SelectionZone; // 0x220
	USkeletalMeshComponent* GhostLadder; // 0x228
	UBoxComponent* Collision; // 0x230
	USceneComponent* SceneRoot; // 0x238
	UMaterial* ValidPlacementMaterial; // 0x240
	UMaterial* InvalidPlacementMaterial; // 0x248
	float MaxRetractedRungCount; // 0x250
	bool bHorizontal; // 0x254
	ATelescopicLadder* AttachedLadder; // 0x258
	bool bUnableToPlace; // 0x260
	int32_t NumberOverlappers; // 0x264
};

struct UW_PlayerDeathObituary_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* FadeIn; // 0x268
	UImage* Image_80; // 0x270
	UTextBlock* Obituary; // 0x278
	UTextBlock* TextBlock_57; // 0x280
	EKillfeedType DeathType; // 0x288
	FString PlayerName; // 0x290
	float FadeInDelay; // 0x2a0
	TArray<FText> ObituaryTxt; // 0x2a8
	UScrollBox* ScrollBoxParent; // 0x2b8
	bool bEverConstructed; // 0x2c0
};

struct USoundNodeWavePlayer {
	TSoftObjectPtr<USoundWave> SoundWaveAssetPtr; // 0x48
	USoundWave* SoundWave; // 0x70
	char bLooping : 1; // 0x80
};

struct UConstantCameraShakePattern {
	FVector LocationOffset; // 0x38
	FRotator RotationOffset; // 0x44
};

struct UMagazineAttachment {
	UStaticMesh* MagazineStaticMesh; // 0xf98
	FName Socket_01; // 0xfa0
	FName Socket_02; // 0xfa8
};

struct AConversationManager {
	TArray<UConversation*> RunningConversations; // 0x220
};

struct APrimary_M14_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1130
};

struct UARBasicLightEstimate {
	float AmbientIntensityLumens; // 0x28
	float AmbientColorTemperatureKelvin; // 0x2c
	FLinearColor AmbientColor; // 0x30
};

struct UMaterialExpressionArctangent2 {
	FExpressionInput Y; // 0x40
	FExpressionInput X; // 0x54
};

struct UParticleModuleLocationPrimitiveSphere {
	FRawDistributionFloat StartRadius; // 0xb0
};

struct USafeZone {
	bool PadLeft; // 0x120
	bool PadRight; // 0x121
	bool PadTop; // 0x122
	bool PadBottom; // 0x123
};

struct UClothingSimulationInteractor {
	TMap<FName, UClothingInteractor*> ClothingInteractors; // 0x28
};

struct UWidgetNavigation {
	FWidgetNavigationData Up; // 0x28
	FWidgetNavigationData Down; // 0x4c
	FWidgetNavigationData Left; // 0x70
	FWidgetNavigationData Right; // 0x94
	FWidgetNavigationData Next; // 0xb8
	FWidgetNavigationData Previous; // 0xdc
};

struct UNiagaraDataInterface2DArrayTexture {
	UTexture2DArray* Texture; // 0x38
};

struct UControlPointMeshComponent {
	float VirtualTextureMainPassMaxDrawDistance; // 0x4e0
};

struct UGizmoComponentAxisSource {
	USceneComponent* Component; // 0x30
	int32_t AxisIndex; // 0x38
	bool bLocalAxes; // 0x3c
};

struct UANIMBP_NVG_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x340
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x448
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x550
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x570
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x590
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x5b0
	bool bActive; // 0x6b8
	bool bHideMesh; // 0x6b9
	float NVGTransformAlpha; // 0x6bc
	bool bIsThirdPersonMesh; // 0x6c0
};

struct AGM_CaptureTheFlag_C {
	USceneComponent* DefaultSceneRoot; // 0x710
};

struct UAnimSequenceLevelSequenceLink {
	FGuid SkelTrackGuid; // 0x28
	FSoftObjectPath PathToLevelSequence; // 0x38
};

struct UMaterialExpressionDistanceToNearestSurface {
	FExpressionInput Position; // 0x40
};

struct UInstancedStaticMeshComponent {
	TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x4e0
	int32_t NumCustomDataFloats; // 0x4f0
	TArray<float> PerInstanceSMCustomData; // 0x4f8
	int32_t InstancingRandomSeed; // 0x508
	int32_t InstanceStartCullDistance; // 0x50c
	int32_t InstanceEndCullDistance; // 0x510
	TArray<int32_t> InstanceReorderTable; // 0x518
	int32_t NumPendingLightmaps; // 0x570
	TArray<FInstancedStaticMeshMappingInfo> CachedMappings; // 0x578
};

struct AHUD {
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

struct UDeployItemAtLocationActivity {
	ABaseItem* DeployItemClass; // 0x1a8
	FVector DeployLocation; // 0x1b0
};

struct UEnvQueryGenerator_Composite {
	TArray<UEnvQueryGenerator*> Generators; // 0x50
	char bAllowDifferentItemTypes : 1; // 0x60
	char bHasMatchingItemType : 1; // 0x60
	UEnvQueryItemType* ForcedItemType; // 0x68
};

struct UScrollBox {
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

struct UMaterialExpressionScalarParameter {
	float DefaultValue; // 0x58
	bool bUseCustomPrimitiveData; // 0x5c
	char PrimitiveDataIndex; // 0x5d
};

struct UMaterialExpressionLandscapeVisibilityMask {
	FGuid ExpressionGUID; // 0x40
};

struct USlateBrushAsset {
	FSlateBrush Brush; // 0x28
};

struct ADoorRam {
	TArray<AActor*> AcceptableHitWhitelist; // 0x8f8
	float MaxHitDistance; // 0x908
	UDamageType* RamDamageTypeDefault; // 0x910
	UDamageType* RamDamageTypeCrumble; // 0x918
	UDamageType* RamDamageTypePlayer; // 0x920
	float StrikePlayerDamage; // 0x928
	FHitResult LastGoodHit; // 0x92c
};

struct ATelescopicLadder {
	USceneComponent* LadderVerticalIconPoint; // 0x8f8
	USceneComponent* LadderHorizontalIconPoint; // 0x900
	USceneComponent* LadderBottomMountPoint; // 0x908
	USceneComponent* LadderTopMountPoint; // 0x910
	ALadderSnapZone* LadderSnapZoneBP; // 0x918
	bool bFreezeFrame; // 0x920
	float MaxRollDegreesBeforeUnwalkable; // 0x924
	FTransform FreezeTransform; // 0x9c0
	bool bShowGhostLadder; // 0xa1c
	bool bShowCollapsedLadder; // 0xa1d
	UAnimSequence* CollapsedLadderAnim; // 0xa20
	FTransform LastTransform; // 0xa30
	ASkeletalMeshActor* GhostLadderActor; // 0xa60
	UMaterial* GhostLadderMaterial; // 0xa68
	UPhysicsAsset* DroppedPhysics; // 0xa70
	UPhysicsAsset* PlacedPhysics; // 0xa78
	UFMODEvent* PlacementSoundEvent; // 0xa80
	UFMODEvent* PickupSoundEvent; // 0xa88
	UFMODEvent* CollideSoundEvent; // 0xa90
	bool bDeployed; // 0xa98
	bool bDeployedHorizontal; // 0xa99
	bool bMounted; // 0xa9a
	float RetractedRungCount; // 0xa9c
	ALadderSnapZone* CurrentSnapZone; // 0xaa0
	bool bWallFound; // 0xaa8
};

struct USoundNodeModulatorContinuous {
	FModulatorContinuousParams PitchModulationParams; // 0x48
	FModulatorContinuousParams VolumeModulationParams; // 0x68
};

struct AVictoryISM {
	UInstancedStaticMeshComponent* Mesh; // 0x220
};

struct AMatineeActorCameraAnim {
	UCameraAnim* CameraAnim; // 0x2c8
};

struct UComboBox {
	TArray<UObject*> Items; // 0x108
	FDelegate OnGenerateWidgetEvent; // 0x118
	bool bIsFocusable; // 0x128
};

struct UFMODEventControlSection {
	FFMODEventControlChannel ControlKeys; // 0xe8
};

struct UShowLoginUICallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UW_RadioContainer_C {
	TArray<TScriptInterface<IIRadioWidget_C>> RadioChildren; // 0x130
	TScriptInterface<IIRadioWidget_C> SelectedChild; // 0x140
};

struct UFontImportOptions {
	FFontImportOptionsData Data; // 0x28
};

struct ADeadSpectator_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x310
};

struct AProceduralFoliageVolume {
	UProceduralFoliageComponent* ProceduralComponent; // 0x258
};

struct UNavigationInvokerComponent {
	float TileGenerationRadius; // 0xb0
	float TileRemovalRadius; // 0xb4
};

struct UMovieSceneVectorTrack {
	int32_t NumChannelsUsed; // 0xc0
};

struct AGM_TDM_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x6f8
	USceneComponent* DefaultSceneRoot; // 0x700
	FMulticastInlineDelegate OnRoundResetComplete; // 0x708
};

struct UW_ItemSelection_ItemList_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278
	UWidgetAnimation* Anim_Focus; // 0x280
	UWidgetAnimation* Anim_Unfocus; // 0x288
	UWidgetAnimation* Anim_FadeIn; // 0x290
	UWidgetAnimation* Anim_FadeOut; // 0x298
	UGridPanel* GridPanel_Items; // 0x2a0
	UW_ItemSelection_ItemGroup_C* ItemGroup; // 0x2a8
	UVerticalBox* VerticalBox_Items; // 0x2b0
	UVerticalBox* VerticalBox_Main; // 0x2b8
	UWidgetSwitcher* WidgetSwitcher_Style; // 0x2c0
	TArray<ABaseItem*> Items; // 0x2c8
	int32_t SelectionIndex; // 0x2d8
	TArray<UW_ItemSelection_Item_C*> ItemWidgets; // 0x2e0
	FItemSelectionPanelSetting_ItemGroup ItemGroupSetting; // 0x2f0
	ABasePlayer_C* PlayerCharacter; // 0x330
	bool bIsFocused; // 0x338
	bool bCanNavigate; // 0x339
	bool bEnteredOnce; // 0x33a
	FVector2D NudgeAmount; // 0x33c
	float WorkingRenderOpacity; // 0x344
	int32_t DuplicateRow; // 0x348
	bool bIsLastGroup; // 0x34c
	bool bInOverviewMode; // 0x34d
};

struct UCameraModifier_CameraShake {
	TArray<FActiveCameraShakeInfo> ActiveShakes; // 0x48
	TMap<UCameraShakeBase*, FPooledCameraShakes> ExpiredPooledShakesMap; // 0x58
	float SplitScreenShakeScale; // 0xa8
};

struct UPlayer {
	APlayerController* PlayerController; // 0x30
	int32_t CurrentNetSpeed; // 0x38
	int32_t ConfiguredInternetSpeed; // 0x3c
	int32_t ConfiguredLanSpeed; // 0x40
};

struct UParticleModuleTypeDataAnimTrail {
	char bDeadTrailsOnDeactivate : 1; // 0x30
	char bEnablePreviousTangentRecalculation : 1; // 0x30
	char bTangentRecalculationEveryFrame : 1; // 0x30
	float TilingDistance; // 0x34
	float DistanceTessellationStepSize; // 0x38
	float TangentTessellationStepSize; // 0x3c
	float WidthTessellationStepSize; // 0x40
};

struct UMovieSceneTrackInstanceSystem {
	UMovieSceneTrackInstanceInstantiator* Instantiator; // 0x40
};

struct UMaterialExpressionSign {
	FExpressionInput Input; // 0x40
};

struct UMaterialExpressionLightmassReplace {
	FExpressionInput Realtime; // 0x40
	FExpressionInput Lightmass; // 0x54
};

struct UMaterialExpressionShaderStageSwitch {
	FExpressionInput PixelShader; // 0x40
	FExpressionInput VertexShader; // 0x54
};

struct ARadialForceActor {
	URadialForceComponent* ForceComponent; // 0x220
};

struct UMultiLineEditableTextBox {
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

struct UARObjectComponent {
	FARObjectUpdatePayload ReplicatedPayload; // 0x280
};

struct UPlayerInput {
	TArray<FKeyBind> DebugExecBindings; // 0x120
	TArray<FName> InvertedAxis; // 0x160
};

struct UMagicLeapSettings {
	bool bEnableZI; // 0x28
	bool bUseVulkanForZI; // 0x29
	bool bUseMLAudioForZI; // 0x2a
};

struct UMediaPlayer {
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

struct UMaterialExpressionTime {
	char bIgnorePause : 1; // 0x40
	char bOverride_Period : 1; // 0x40
	float Period; // 0x44
};

struct UPawnAction {
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

struct UWheeledVehicleMovementComponent4W {
	FVehicleEngineData EngineSetup; // 0x290
	FVehicleDifferential4WData DifferentialSetup; // 0x330
	float AckermannAccuracy; // 0x34c
	FVehicleTransmissionData TransmissionSetup; // 0x350
	FRuntimeFloatCurve SteeringCurve; // 0x380
};

struct UAnimCompress_RemoveLinearKeys {
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

struct UNiagaraEventReceiverEmitterAction_SpawnParticles {
	uint32_t NumParticles; // 0x28
};

struct AGM_TugOfWar_C {
	USceneComponent* DefaultSceneRoot; // 0x718
};

struct ACameraShakeSourceActor {
	UCameraShakeSourceComponent* CameraShakeSourceComponent; // 0x220
};

struct AGS_COOP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x7b8
	AActor* NewVar_1; // 0x7c0
};

struct ULocalPlayer {
	UGameViewportClient* ViewportClient; // 0x70
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x94
	APlayerController* PendingLevelPlayerControllerClass; // 0x98
	char bSentSplitJoin : 1; // 0xa0
	int32_t ControllerId; // 0xb8
};

struct UBasePlayerEffect {
	APlayerCharacter* PlayerCharacter; // 0x58
};

struct UMaterialExpressionPower {
	FExpressionInput Base; // 0x40
	FExpressionInput Exponent; // 0x54
	float ConstExponent; // 0x68
};

struct UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	char bIsParameterExpression : 1; // 0x38
};

struct UParticleModuleColor_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xb0
};

struct ULoginUserCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct AReadyOrNotGameMode_PVP {
	FMulticastInlineDelegate OnMatchStart; // 0x678
	FMulticastInlineDelegate OnRoundWon; // 0x688
	FMulticastInlineDelegate OnRoundStart; // 0x698
	FMulticastInlineDelegate OnRoundEnd; // 0x6a8
	float RoundEndResetDelay; // 0x6b8
	float MatchEndResetDelay; // 0x6bc
	URoundEndWidget_PVP* RoundEndWidgetClass; // 0x6c0
	char bIncrementedRoundCounterThisRound : 1; // 0x6c8
};

struct UDistributionFloatParameterBase {
	FName ParameterName; // 0x40
	float MinInput; // 0x48
	float MaxInput; // 0x4c
	float MinOutput; // 0x50
	float MaxOutput; // 0x54
	DistributionParamMode ParamMode; // 0x58
};

struct UParticleModuleAccelerationOverLifetime {
	FRawDistributionVector AccelOverLife; // 0x38
};

struct UPhononMaterialComponent {
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

struct UChargeCombatMove {
	AFlankingAvoidanceVolume* FlankingAvoidanceVolume; // 0x1b8
};

struct UGameplayTask_SpawnActor {
	FMulticastInlineDelegate Success; // 0x68
	FMulticastInlineDelegate DidNotSpawn; // 0x78
	AActor* ClassToSpawn; // 0xa0
};

struct UBillboardComponent {
	UTexture2D* Sprite; // 0x450
	char bIsScreenSizeScaled : 1; // 0x458
	float ScreenSize; // 0x45c
	float U; // 0x460
	float UL; // 0x464
	float V; // 0x468
	float VL; // 0x46c
};

struct UMaterialExpressionFrac {
	FExpressionInput Input; // 0x40
};

struct USizeBoxSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
};

struct UARTrackedObject {
	UARCandidateObject* DetectedObject; // 0xf8
};

struct UBaseQuestNode {
	AQuestManager* QuestManager; // 0x1f8
	FMulticastInlineDelegate OnQuestNodeStarted; // 0x200
	FMulticastInlineDelegate OnQuestNodeFinished; // 0x210
	float StartDelay; // 0x22c
	FString QuestVoiceLine; // 0x230
	AMessagePromptActor* StartQuestMessageActor; // 0x240
	APlayerCharacter* OwningPlayer; // 0x248
};

struct UParticleModuleMeshMaterial {
	TArray<UMaterialInterface*> MeshMaterials; // 0x30
};

struct ULODSyncComponent {
	int32_t NumLODs; // 0xb0
	int32_t ForcedLOD; // 0xb4
	TArray<FComponentSync> ComponentsToSync; // 0xb8
	TMap<FName, FLODMappingData> CustomLODMapping; // 0xc8
	int32_t CurrentLOD; // 0x118
	int32_t CurrentNumLODs; // 0x11c
	TArray<UPrimitiveComponent*> DriveComponents; // 0x120
	TArray<UPrimitiveComponent*> SubComponents; // 0x130
};

struct UMaterialExpressionDDY {
	FExpressionInput Value; // 0x40
};

struct USoundAttenuation {
	FSoundAttenuationSettings Attenuation; // 0x28
};

struct UOnlinePIESettings {
	bool bOnlinePIEEnabled; // 0x38
	TArray<FPIELoginSettingsInternal> Logins; // 0x40
};

struct UMovieSceneNiagaraVectorParameterTrack {
	int32_t ChannelsUsed; // 0xc8
};

struct UParticleModuleColor {
	FRawDistributionVector StartColor; // 0x30
	FRawDistributionFloat StartAlpha; // 0x78
	char bClampAlpha : 1; // 0xa8
};

struct UHierarchicalInstancedStaticMeshComponent {
	TArray<int32_t> SortedInstances; // 0x598
	int32_t NumBuiltInstances; // 0x5a8
	FBox BuiltInstanceBounds; // 0x5b0
	FBox UnbuiltInstanceBounds; // 0x5cc
	TArray<FBox> UnbuiltInstanceBoundsList; // 0x5e8
	char bEnableDensityScaling : 1; // 0x5f8
	int32_t OcclusionLayerNumNodes; // 0x600
	FBoxSphereBounds CacheMeshExtendedBounds; // 0x604
	bool bDisableCollision; // 0x620
	int32_t InstanceCountToRender; // 0x624
};

struct AAudioVolume {
	float Priority; // 0x258
	char bEnabled : 1; // 0x25c
	FReverbSettings Settings; // 0x260
	FInteriorSettings AmbientZoneSettings; // 0x280
	TArray<FAudioVolumeSubmixSendSettings> SubmixSendSettings; // 0x2a8
	TArray<FAudioVolumeSubmixOverrideSettings> SubmixOverrideSettings; // 0x2b8
};

struct UReadyOrNotSingleplayerProfile {
	int32_t CompletionCount; // 0x138
};

struct UAISense_Hearing {
	TArray<FAINoiseEvent> NoiseEvents; // 0x80
	float SpeedOfSoundSq; // 0x90
};

struct UInterpTrackVectorProp {
	FName PropertyName; // 0x90
};

struct UParticleModuleVectorFieldRotationRate {
	FVector RotationRate; // 0x30
};

struct UCrosshairOverlay_C {
	UImage* Image_1; // 0x260
};

struct ABP_UI_PlanningMap_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UCineCameraComponent* MapCamera; // 0x228
	USpringArmComponent* SpringArm; // 0x230
	USceneComponent* Scene; // 0x238
	USkeletalMeshComponent* Prep_Map_Default; // 0x240
	USceneComponent* DefaultSceneRoot; // 0x248
	bool MapCameraActive; // 0x250
	float CurrentZoom; // 0x254
	float ZoomIncrement; // 0x258
	float MaxZoomDistance; // 0x25c
	float MinZoomDistance; // 0x260
	float PanningSpeed; // 0x264
	FVector StartingPos; // 0x268
	bool Panning; // 0x274
	FVector2D PanningBoundaryY; // 0x278
	FVector2D PanningBoundaryX; // 0x280
	UMaterialInstanceDynamic* MapDynMat; // 0x288
	TArray<FSpawnPoints> SpawnPoints; // 0x290
	bool AbsolutePanning; // 0x2a0
	UBP_UI_PlanningMap_SpawnPoint_C* NewVar_1; // 0x2a8
	TArray<UBP_UI_PlanningMap_SpawnPoint_C*> SpawnPointComponents; // 0x2b0
	FMulticastInlineDelegate OnZoomUpdated; // 0x2c0
	FMulticastInlineDelegate OnChangeFloors; // 0x2d0
	TArray<FLevelFloorData> Floors; // 0x2e0
	bool Initialized; // 0x2f0
	UMaterialInterface* CurrentMaterialParent; // 0x2f8
	FMulticastInlineDelegate OnFloorMaterialUpdated; // 0x300
	bool FloorMaterialUpdated; // 0x310
	TArray<UBP_UI_PlanningMap_Marker_C*> MapMarkerComponents; // 0x318
};

struct ABaseMagazineWeapon {
	UParticleSystemComponent* MuzzleFlashParticleComponent; // 0xd08
	UParticleSystemComponent* MuzzleSmokeParticleComponent; // 0xd10
	UParticleSystemComponent* HeatSmokeParticleComponent; // 0xd18
	FText CartridgeText; // 0xd20
	FText RPMText; // 0xd38
	FText BarrelLengthText; // 0xd50
	FText CapacityText; // 0xd68
	FText MuzzleVelocityText; // 0xd80
	float SupressionStrength; // 0xd98
	UMatineeCameraShake* SupressionCameraShake; // 0xda0
	bool bSpawnNoTrail; // 0xda8
	TArray<ABulletTracer*> BulletTracers; // 0xdb0
	TArray<ABaseShell*> SpawnedShells; // 0xdc0
	FMulticastInlineDelegate OnWeaponFire; // 0xdd0
	FMulticastInlineDelegate OnWeaponDryFire; // 0xde0
	UFMODAudioComponent* FiringAudioComp; // 0xe10
	bool bReloading; // 0xe21
	bool bCancelReloading; // 0xe22
	FName MuzzleFlashParticleSocket; // 0xe2c
	FName MuzzleSmokeParticleSocket; // 0xe34
	FTimerHandle GunTails_Handle; // 0xe40
	bool bShowParticlesWhenFiring; // 0xe48
	UDamageType* ArmorPiercingDamageType; // 0xe50
	UParticleSystem* ProjectileAttachedParticle; // 0xe58
	bool bDrawBlood; // 0xe60
	ABulletProjectile* FakeBulletProjectile; // 0xe68
	ABulletProjectile* BulletProjectile; // 0xe70
	ABulletProjectile* ArmorPiercingBulletProjectile; // 0xe78
	float PenetrationDistance; // 0xe80
	UStaticMesh* BreachShell; // 0xe88
	UStaticMesh* BeanbagShell; // 0xe90
	UStaticMesh* BuckShotShell; // 0xe98
	UStaticMesh* SlugShell; // 0xea0
	FName MagazineSocket; // 0xea8
	TArray<float> Magazines; // 0xeb0
	int32_t MagIndex; // 0xec0
	int32_t NextMagIndex; // 0xec4
	bool bBulletInChamberOnReload; // 0xec8
	bool bTacReloadWhenEmpty; // 0xec9
	float AmmoMax; // 0xecc
	float LockIntegrityMinDamage; // 0xed0
	float LockIntegrityMaxDamage; // 0xed4
	bool bLoseMagOnReload; // 0xed8
	bool bSpawnShell; // 0xed9
	float SpawnShellDelay; // 0xedc
	UFMODEvent* ShellBounceFMODAudio; // 0xee0
	float ImpactDecalScale; // 0xefc
	AImpactEffect* ImpactEffects_Instance; // 0xf00
	TArray<AImpactEffect*> SpawnedImpactEffects; // 0xf08
	FName Magazine_HandSocket; // 0xf18
	EAmmoType AmmoType; // 0xf20
	TArray<EAmmoType> CompatibleAmmoTypes; // 0xf28
	FString MoraleHighReloadTableOverride; // 0xf40
	FString MoraleMediumReloadTableOverride; // 0xf50
	FString MoraleLowReloadTableOverride; // 0xf60
	ABulletProjectile* LastSpawnedProjectile; // 0xf88
	FName Mag_01_Socket; // 0xf98
	FName Mag_01_Bullets_Socket; // 0xfa0
	FName Mag_01_Extra_Socket; // 0xfa8
	UStaticMeshComponent* Mag_01_Comp; // 0xfb0
	UStaticMeshComponent* Mag_01_Comp_TPOnly; // 0xfb8
	bool bShowBulletsWhenEmpty; // 0xfc0
	UStaticMeshComponent* Mag_01_Bullets_Comp; // 0xfc8
	UStaticMeshComponent* Mag_01_Extra_Comp; // 0xfd0
	UStaticMeshComponent* Mag_ReloadInterpFix_Comp; // 0xfd8
	UStaticMesh* Mag_01_Static; // 0x1018
	UStaticMesh* Mag_01_FMJ_Bullets_Static; // 0x1020
	UStaticMesh* Mag_01_HP_Bullets_Static; // 0x1028
	UStaticMesh* Mag_01_Extra_Static; // 0x1030
	FName Mag_02_Socket; // 0x1038
	FName Mag_02_Bullets_Socket; // 0x1040
	FName Mag_02_Extra_Socket; // 0x1048
	UStaticMeshComponent* Mag_02_Comp; // 0x1050
	UStaticMeshComponent* Mag_02_Comp_TPOnly; // 0x1058
	UStaticMeshComponent* Mag_02_Bullets_Comp; // 0x1060
	UStaticMeshComponent* Mag_02_Extra_Comp; // 0x1068
	UStaticMesh* Mag_02_Static; // 0x1070
	UStaticMesh* Mag_02_FMJ_Bullets_Static; // 0x1078
	UStaticMesh* Mag_02_HP_Bullets_Static; // 0x1080
	UStaticMesh* Mag_02_Extra_Static; // 0x1088
	bool bUseFireLoopAnims; // 0x1090
	UTexture2D* MagCheckIcon_Empty; // 0x1098
	UTexture2D* MagCheckIcon_NearEmpty; // 0x10a0
	UTexture2D* MagCheckIcon_NearFull; // 0x10a8
	UTexture2D* MagCheckIcon_Full; // 0x10b0
	UTexture2D* MagPickup_Frame0; // 0x10b8
	UTexture2D* MagPickup_Frame1; // 0x10c0
	UTexture2D* MagPickup_Frame2; // 0x10c8
	UFMODEvent* DroppedMagazineHitEvent; // 0x10d0
	float HeatPerShot; // 0x10d8
	float HeatThreshold; // 0x10dc
	float HeatMax; // 0x10e0
	float HeatDissipation; // 0x10e4
	float CurrentHeat; // 0x10e8
	float HeatMinimumTime; // 0x10ec
	float HeatTime; // 0x10f0
	bool bHeatEffectPlayed; // 0x10f4
	float MagazineWeightFull; // 0x10f8
	float MagazineWeightEmpty; // 0x10fc
	int32_t MagazineCountDefault; // 0x1100
	int32_t MagazineCountMin; // 0x1104
	int32_t MagazineCountMax; // 0x1108
	FName MagazineLabel; // 0x110c
	bool bHasBeenDisassembled; // 0x1114
	float ShootingYellBias; // 0x1118
	bool bTwoHandedPistol; // 0x111c
	bool bHeavyRifle; // 0x111d
	float RagdollImpulseMultiplier; // 0x1120
};

struct UTrapDamage {
	char bDestroyAllDoorChunks : 1; // 0x40
};

struct UW_WeaponWheel_MultiItem_Selection_C {
	UHorizontalBox* Dots_Container; // 0x260
	UOverlay* MultiItemVisual; // 0x268
	UImage* NextItemIcon; // 0x270
	UImage* PreviousItemIcon; // 0x278
	TArray<UImage*> Dots; // 0x280
	FLinearColor UnselectedColor; // 0x290
	FLinearColor SelectedColor; // 0x2a0
	int32_t Amount; // 0x2b0
	int32_t ItemIndex; // 0x2b4
	FLinearColor HighlightedIconColor; // 0x2b8
	FLinearColor UnhighlightedIconColor; // 0x2c8
};

struct UTakeHostageActivity {
	AAICharacter* Hostage; // 0x1a8
};

struct UMaterialExpressionStaticBool {
	char Value : 1; // 0x40
};

struct UW_QuartermasterMenu_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278
	UW_AttachmentCategory_C* ApplyAttachments; // 0x280
	UW_AttachmentCategory_C* CleanGun; // 0x288
	UW_AttachmentCategory_C* DiscardAttachments; // 0x290
	UW_Text_C* lbl_Preset; // 0x298
	UW_Text_C* lbl_Stats; // 0x2a0
	UScrollBox* Quartermaster_ScrollBox; // 0x2a8
	UVerticalBox* QuartermasterCategories_Container; // 0x2b0
	UVerticalBox* QuartermasterMenu; // 0x2b8
	UW_Text_C* txt_PresetName; // 0x2c0
	UW_Text_C* txt_WeaponName; // 0x2c8
	int32_t SelectedRow; // 0x2d0
	bool bCategorySelected; // 0x2d4
	bool bInMenuBounds; // 0x2d5
	bool bAnyKeyDown; // 0x2d6
	ABaseItem* SelectedItemClass; // 0x2d8
	UWeaponAttachment* SelectedAttachmentClass; // 0x2e0
	USkinComponent* SelectedSkinClass; // 0x2e8
	UW_AttachmentCategory_C* LastSelectedAttachmentCategoryWidget; // 0x2f0
	UW_SkinCategory_C* LastSelectedSkinCategoryWidget; // 0x2f8
	UW_PreMission_C* Owner; // 0x300
	TArray<UW_AttachmentCategory_C*> AttachmentCategoryWidgets; // 0x308
	TArray<UW_SkinCategory_C*> SkinCategoryWidgets; // 0x318
};

struct UW_WorldMap_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Overlay; // 0x268
	UW_Button_C* btn_AcceptMission; // 0x270
	UButton* btn_ClickAway; // 0x278
	UW_Button_C* btn_Close; // 0x280
	UBorder* CityInfo; // 0x288
	UImage* div_Formation_Bot; // 0x290
	UImage* div_Formation_Top; // 0x298
	UHorizontalBox* HB_Equipment; // 0x2a0
	UImage* img_SelectedMissionImg; // 0x2a8
	UImage* img_TooltipLevelPicture; // 0x2b0
	UImage* img_WorldMap; // 0x2b8
	UBorder* Info; // 0x2c0
	UW_Text_C* lbl_Formation; // 0x2c8
	UOverlay* LockBox; // 0x2d0
	UBackgroundBlur* MapBlur; // 0x2d8
	UImage* MapBlurClickable; // 0x2e0
	UButton* MapInteraction; // 0x2e8
	UButton* MissionSelectBlank; // 0x2f0
	UHorizontalBox* MissionTypeBox; // 0x2f8
	UW_WorldMapPin_C* Pin_01a; // 0x300
	UW_WorldMapPin_C* Pin_01b; // 0x308
	UW_WorldMapPin_C* Pin_01c; // 0x310
	UW_WorldMapPin_C* Pin_Dealer; // 0x318
	UW_WorldMapPin_C* Pin_Farm; // 0x320
	UW_WorldMapPin_C* Pin_Gas; // 0x328
	UW_WorldMapPin_C* Pin_Hotel; // 0x330
	UW_WorldMapPin_C* Pin_Meth; // 0x338
	UW_WorldMapPin_C* Pin_port; // 0x340
	UTextBlock* RanKRequired; // 0x348
	UCanvasPanel* RootCanvas; // 0x350
	UBorder* SelectedMissionPanel; // 0x358
	USizeBox* SizeBox_4; // 0x360
	UBorder* Tooltip; // 0x368
	UW_Text_C* txt_Formation; // 0x370
	UW_Text_C* txt_Name_2; // 0x378
	UTextBlock* txt_SelectedMissionDescription; // 0x380
	UW_Text_C* txt_SelectedMissionDesignation; // 0x388
	UW_Text_C* txt_SelectedMissionName; // 0x390
	UW_Text_C* txt_SelectedMissionTimeOfDay; // 0x398
	UVerticalBox* VB_FloorButtons; // 0x3a0
	UW_WorldMap_MissionSelect_C* W_WorldMap_MissionSelect_ActiveShooter; // 0x3a8
	UW_WorldMap_MissionSelect_C* W_WorldMap_MissionSelect_BarricadedSuspects; // 0x3b0
	UW_WorldMap_MissionSelect_C* W_WorldMap_MissionSelect_BombThreat; // 0x3b8
	UW_WorldMap_MissionSelect_C* W_WorldMap_MissionSelect_HostageRescue; // 0x3c0
	UW_WorldMap_MissionSelect_C* W_WorldMap_MissionSelect_RAID; // 0x3c8
	FMulticastInlineDelegate PanMap; // 0x3d0
	FMulticastInlineDelegate UpdateMapMaterial; // 0x3e0
	FMulticastInlineDelegate NewEventDispatcher_1; // 0x3f0
	ABP_UI_PlanningMap_C* PlanningMapActor; // 0x400
	FName Selected Mission; // 0x408
	FName SelectedMode; // 0x410
};

struct UANIMBP_W870LL_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x308
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x350
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3d0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x470
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x5c8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x5f0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x6f8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x718
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x738
	bool bShouldHideShell; // 0x760
	float HideShellAlpha; // 0x764
};

struct UAvoidanceManager {
	float DefaultTimeToLive; // 0x30
	float LockTimeAfterAvoid; // 0x34
	float LockTimeAfterClean; // 0x38
	float DeltaTimeToPredict; // 0x3c
	float ArtificialRadiusExpansion; // 0x40
	float TestHeightDifference; // 0x44
	float HeightCheckMargin; // 0x48
};

struct ATrapActor {
	UStaticMeshComponent* TrapMeshComponent; // 0x240
	UFMODAudioComponent* TrapActivateAudioComponent; // 0x248
	UInteractableComponent* InteractableComponent; // 0x250
	UScoringComponent* ScoringComponent; // 0x258
	USplineComponent* SplineComponent; // 0x260
	UStaticMeshComponent* CableMeshComponent; // 0x268
	UCableComponent* CutCableComponent1; // 0x270
	UCableComponent* CutCableComponent2; // 0x278
	UBoxComponent* TripWireTriggerComponent; // 0x280
	USceneComponent* TrapRoot; // 0x288
	AActor* AttachedActor; // 0x290
	FString TrapName; // 0x298
	ETrapType TrapType; // 0x2a8
	ETrapState TrapStatus; // 0x2a9
	bool bCanUseMultitoolWhenActivated; // 0x2aa
	bool bInitializeTrapOnBeginPlay; // 0x2ab
	UStaticMesh* CableMesh; // 0x2b0
	UMaterialInterface* CableMaterial; // 0x2b8
	FMulticastInlineDelegate TrapTriggered; // 0x2c0
};

struct APlayerViewActor {
	char bShouldCaptureScene : 1; // 0x220
	USceneComponent* SceneComponent; // 0x228
	USceneCaptureComponent2D* CameraCaptureComponent; // 0x230
	FPostProcessEffect SwitchViewEffects; // 0x238
	UFMODEvent* SwitchViewEvent; // 0x260
	float DeathViewTime; // 0x268
	UFMODEvent* DeathViewEvent; // 0x270
	UFMODEvent* CloseViewEvent; // 0x278
	UTextureRenderTarget2D* CameraRenderTarget; // 0x280
	APlayerCharacter* OwningPlayerCharacter; // 0x288
	AReadyOrNotCharacter* ViewCharacter; // 0x290
	FVector TargetLocation; // 0x298
	FRotator TargetRotation; // 0x2a4
	UMaterialInstance* MI_PostProcess_Greyscale; // 0x2b0
	UMaterialInstance* MI_PostProcess_Bump; // 0x2b8
	UMaterialInstance* MI_PostProcess_Glitch; // 0x2c0
	char bDeathEffectsApplied : 1; // 0x2c8
	char bSwitchViewEffectsApplied : 1; // 0x2c8
};

struct UW_VOIPTalkerEntry_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image_191; // 0x268
	UTextBlock* TextBlock_1; // 0x270
	UTextBlock* TextBlock_58; // 0x278
	APlayerState* PlayerState; // 0x280
};

struct UStunDamage {
	bool bProjectileStun; // 0x40
	UMatineeCameraShake* StunShake; // 0x48
	FPostProcessSettings PostProcessSettings; // 0x50
	UAnimMontage* HitMontage_3P; // 0x5b0
	FRotator CameraRotationOffset; // 0x5b8
	float AppliedSpeed; // 0x5c4
	float MaxMovementSpeedWhenStunned; // 0x5c8
	float DoorDamageMultiplier; // 0x5cc
	bool bDamageAllDoorPiecesAtOnce; // 0x5d0
	bool bCanPushDoorWithForce; // 0x5d1
	float DoorPushScale; // 0x5d4
	USoundCue* ImpactSound; // 0x5d8
	EStunType StunType; // 0x5e0
	bool bPlayAudioWhenHit; // 0x5e1
	UFMODEvent* StunSoundEffect; // 0x5e8
	bool bCauseHealthDamage; // 0x5f0
	bool bCausesSuppression; // 0x5f1
	bool bBreaksDestructibles; // 0x5f2
	float SuppressionAmount; // 0x5f4
	UMatineeCameraShake* SuppressionCameraShake; // 0x5f8
	bool bMustBeLookingAtDamageCauser; // 0x600
	bool bStunLocksAim; // 0x601
	float StunSpeedMultiplier; // 0x604
	float WeaponDownLengthOnStun; // 0x608
	bool bNonLethal; // 0x60c
	float LessThanLethalAmount; // 0x610
	float AdditionalUpcloseDamageIncrease; // 0x614
	float AdditionalHeadDamageIncrease; // 0x618
	bool bSwatAIIsAbuse; // 0x61c
	bool bChildAIIsAbuse; // 0x61d
	bool bCompliantIsAbuse; // 0x61e
	bool bArrestedIsAbuse; // 0x61f
};

struct AReadyOrNotProjectile {
	USphereComponent* CollisionComp; // 0x220
	UProjectileMovementComponent* ProjectileMovement; // 0x228
};

struct ASwitchActor {
	USceneComponent* SceneComponent; // 0x238
	int32_t LastSelectedOption; // 0x240
};

struct ABP_CTF_Flag_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x248
	UStaticMeshComponent* FlagMesh; // 0x250
};

struct UVehicleAnimInstance {
	UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent; // 0xa50
};

struct UCullingField {
	UFieldNodeBase* Culling; // 0xb0
	UFieldNodeBase* Field; // 0xb8
	EFieldCullingOperationType Operation; // 0xc0
};

struct UMeshSelectionSet {
	TArray<int32_t> Vertices; // 0x40
	TArray<int32_t> Edges; // 0x50
	TArray<int32_t> Faces; // 0x60
	TArray<int32_t> Groups; // 0x70
};

struct UAnimStreamable {
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

struct ADeployableDepot {
	TArray<UDeployableSpawnComponent*> SpawnedDeployableComponents; // 0x220
	FName DepotLabel; // 0x230
};

struct AHelmet_NVG_V2_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0
	USpotLightComponent* SpotLight; // 0x1ae8
	UArrowComponent* Arrow; // 0x1af0
	APlayerState* PlayerState; // 0x1af8
};

struct UW_SWATTeamStatus_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UW_SWATCommandStatus_C* SWAT_Alpha_Status; // 0x268
	UW_SWATCommandStatus_C* SWAT_Beta_Status; // 0x270
	UW_SWATCommandStatus_C* SWAT_Charlie_Status; // 0x278
	UW_SWATCommandStatus_C* SWAT_Delta_Status; // 0x280
	UW_SWATCommandStatus_C* SWAT_Lead_Status; // 0x288
	UVerticalBox* SWAT_Status_Container; // 0x290
	UBaseActivity* CachedAlphaActivity; // 0x298
	UBaseActivity* CachedBetaActivity; // 0x2a0
	UBaseActivity* CachedCharlieActivity; // 0x2a8
	UBaseActivity* CachedDeltaActivity; // 0x2b0
	UBaseActivity* CachedFoxtrotActivity; // 0x2b8
};

struct UANIMBP_Player_FP_Master_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x5b0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_20; // 0x5b8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_19; // 0x6c0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_11; // 0x7c8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_18; // 0x920
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_8; // 0x948
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_18; // 0x968
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_17; // 0xa70
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_24; // 0xb78
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_72; // 0xc18
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_16; // 0xc98
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_7; // 0xda0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_15; // 0xdc0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6; // 0xec8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_8; // 0xee8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_7; // 0xf08
	FAnimNode_LazySpringBone AnimGraphNode_LazySpringBone; // 0xf28
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_14; // 0x10e0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_8; // 0x11e8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_5; // 0x12a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_71; // 0x1358
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_70; // 0x13d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_69; // 0x1458
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_68; // 0x14d8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_13; // 0x1558
	FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve_2; // 0x1660
	FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve; // 0x16b8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_7; // 0x1710
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_67; // 0x17d0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_10; // 0x1850
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_17; // 0x19a8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_23; // 0x19d0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_16; // 0x1a70
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_12; // 0x1a98
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_11; // 0x1ba0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_10; // 0x1ca8
	FAnimNode_Slot AnimGraphNode_Slot_5; // 0x1db0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1df8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_20; // 0x1ee0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_6; // 0x1fa8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_15; // 0x2068
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_14; // 0x2090
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_9; // 0x20b8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_6; // 0x21c0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_5; // 0x21e0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_66; // 0x2200
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_19; // 0x2280
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_22; // 0x2348
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_65; // 0x23e8
	FAnimNode_Slot AnimGraphNode_Slot_4; // 0x2468
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4; // 0x24b0
	FAnimNode_PivotBone AnimGraphNode_PivotBone_5; // 0x24d0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8; // 0x25d0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7; // 0x26d8
	FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh_2; // 0x27e0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_5; // 0x29b8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5; // 0x2a78
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6; // 0x2a98
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3; // 0x2ba0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4; // 0x2bc0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5; // 0x2be0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x2ce8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3; // 0x2df0
	FAnimNode_PivotBone AnimGraphNode_PivotBone_4; // 0x2e10
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_4; // 0x2f10
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_4; // 0x2fd0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_64; // 0x3080
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_63; // 0x3100
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_62; // 0x3180
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_61; // 0x3200
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_9; // 0x3280
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_3; // 0x33d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_60; // 0x3488
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_59; // 0x3508
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_58; // 0x3588
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_57; // 0x3608
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_8; // 0x3688
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_2; // 0x37e0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_56; // 0x3890
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_55; // 0x3910
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_54; // 0x3990
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_53; // 0x3a10
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_7; // 0x3a90
	FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x3be8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x3dc0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x3de0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_52; // 0x3e90
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_51; // 0x3f10
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_50; // 0x3f90
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_49; // 0x4010
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_6; // 0x4090
	FAnimNode_Slot AnimGraphNode_Slot_3; // 0x41e8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x4230
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5; // 0x4250
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_31; // 0x43a8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_30; // 0x43d0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_29; // 0x43f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_28; // 0x4420
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_27; // 0x4448
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_48; // 0x4470
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_13; // 0x44f0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_18; // 0x4518
	FAnimNode_StateResult AnimGraphNode_StateResult_19; // 0x45e0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_12; // 0x4610
	FAnimNode_StateResult AnimGraphNode_StateResult_18; // 0x4638
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_47; // 0x4668
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_11; // 0x46e8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_17; // 0x4710
	FAnimNode_StateResult AnimGraphNode_StateResult_17; // 0x47d8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_10; // 0x4808
	FAnimNode_StateResult AnimGraphNode_StateResult_16; // 0x4830
	FAnimNode_StateMachine AnimGraphNode_StateMachine_4; // 0x4860
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_46; // 0x4910
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_45; // 0x4990
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_16; // 0x4a10
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_15; // 0x4ad8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x4ba0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x4bc0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0x4cc8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_26; // 0x4e20
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_25; // 0x4e48
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_24; // 0x4e70
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_23; // 0x4e98
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_22; // 0x4ec0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_21; // 0x4ee8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_9; // 0x4f10
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_44; // 0x4f38
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_14; // 0x4fb8
	FAnimNode_StateResult AnimGraphNode_StateResult_15; // 0x5080
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8; // 0x50b0
	FAnimNode_StateResult AnimGraphNode_StateResult_14; // 0x50d8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0x5108
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_43; // 0x5130
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_13; // 0x51b0
	FAnimNode_StateResult AnimGraphNode_StateResult_13; // 0x5278
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x52a8
	FAnimNode_StateResult AnimGraphNode_StateResult_12; // 0x52d0
	FAnimNode_StateMachine AnimGraphNode_StateMachine_3; // 0x5300
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_20; // 0x53b0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_19; // 0x53d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18; // 0x5400
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17; // 0x5428
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0x5450
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0x5478
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_21; // 0x54a0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_20; // 0x5540
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_42; // 0x55e0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_19; // 0x5660
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_41; // 0x5700
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_40; // 0x5780
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_18; // 0x5800
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_17; // 0x58a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_39; // 0x5940
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_38; // 0x59c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_37; // 0x5a40
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_36; // 0x5ac0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_12; // 0x5b40
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_35; // 0x5c08
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_16; // 0x5c88
	FAnimNode_StateResult AnimGraphNode_StateResult_11; // 0x5d28
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_34; // 0x5d58
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_33; // 0x5dd8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_15; // 0x5e58
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_32; // 0x5ef8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_14; // 0x5f78
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_31; // 0x6018
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_13; // 0x6098
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_30; // 0x6138
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_12; // 0x61b8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_11; // 0x6258
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_29; // 0x62f8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_10; // 0x6378
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_28; // 0x6418
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_27; // 0x6498
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_11; // 0x6518
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_26; // 0x65e0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3; // 0x6660
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_25; // 0x6720
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_24; // 0x67a0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_10; // 0x6820
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_9; // 0x68e8
	FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x6988
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_23; // 0x69b8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_8; // 0x6a38
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_22; // 0x6ad8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_7; // 0x6b58
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_21; // 0x6bf8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_20; // 0x6c78
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6; // 0x6cf8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_19; // 0x6d98
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_9; // 0x6e18
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; // 0x6ee0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_18; // 0x6f80
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x7000
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_17; // 0x70c0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_8; // 0x7140
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_16; // 0x7208
	FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x7288
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x72b8
	FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x72e0
	FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x7310
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x73c0
	FAnimNode_PivotBone AnimGraphNode_PivotBone_3; // 0x7518
	FAnimNode_PivotBone AnimGraphNode_PivotBone_2; // 0x7618
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x7718
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15; // 0x77d8
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x7858
	FAnimNode_PivotBone AnimGraphNode_PivotBone; // 0x78a0
	FAnimNode_Slot AnimGraphNode_Slot; // 0x79a0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x79e8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x7b40
	FAnimNode_LegIK AnimGraphNode_LegIK_2; // 0x7b60
	FAnimNode_LegIK AnimGraphNode_LegIK; // 0x7c58
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x7d50
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x7ea8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x7ed0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x7ef8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x7f20
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x7f48
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x7f70
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x7f98
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x7fc0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x7fe8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x8010
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x8038
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x8060
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x8088
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x80b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14; // 0x80d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13; // 0x8158
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_7; // 0x81d8
	FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x82a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0x82d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0x8350
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_6; // 0x83d0
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x8498
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x84c8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_5; // 0x8548
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x8610
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x8690
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x86c0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_4; // 0x8740
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x8808
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x8888
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x88b8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3; // 0x8938
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x8a00
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x8a80
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x8ab0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x8b50
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x8bf0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2; // 0x8c90
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x8d58
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x8d80
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x8da8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x8dd0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x8e50
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x8e78
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x8ea8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x8f28
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x8fc8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x9048
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x9110
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x9190
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x91c0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x9270
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x9378
	FAnimNode_Root AnimGraphNode_Root; // 0x9480
	FRotator CameraRotationRate; // 0x94b0
	bool bIsAiming; // 0x94bc
	bool bIsFocusedAiming; // 0x94bd
	bool bIsReloading; // 0x94be
	float AimInterp; // 0x94c0
	bool bIsMagCheck; // 0x94c4
	float IdlePlayrate; // 0x94c8
	FVector ProcRecoilTrans; // 0x94cc
	FRotator ProcRecoilRot; // 0x94d8
	FVector ProcRecoilBuildupTrans; // 0x94e4
	FRotator ProcRecoilBuildupRot; // 0x94f0
	FRotator NewVar_1; // 0x94fc
	FVector StanceAdjustment; // 0x9508
	FRotator CapsuleRot; // 0x9514
	float LazyAlpha; // 0x9520
	ABaseMagazineWeapon* BaseMagWeaponRef; // 0x9528
	APlayerCharacter* PlayerCharRef; // 0x9530
	float DeltaSeconds; // 0x9538
	bool LegsBroken; // 0x953c
	bool ArmsBroken; // 0x953d
	float AimingLocoStrength; // 0x9540
	bool bIsCrouched; // 0x9544
	bool bLowReadyPointUp; // 0x9545
	bool bLowReadyPointDown; // 0x9546
	float LowReadyPointUpAlpha; // 0x9548
	float LowReadyPointDownAlpha; // 0x954c
	float LeanAlpha; // 0x9550
	FRotator FreeLookRot; // 0x9554
	float StabilizeMovementAlpha; // 0x9560
	float QuickLeanAmount; // 0x9564
	bool bSightTweakMode; // 0x9568
	bool bIsJumping; // 0x9569
	bool bIsSprinting; // 0x956a
	float InputUpDown; // 0x956c
	bool bOnLadder; // 0x9570
	bool bInteractionActive; // 0x9571
	float Hand_IK_Left; // 0x9574
	float Hand_IK_Right; // 0x9578
	bool bHasUnderbarrelAttachment; // 0x957c
	EWeaponUnderbarrelAnimationType UnderbarrelType; // 0x957d
	bool bIsMontagePlaying; // 0x957e
	bool bIsGrenade; // 0x957f
	float ShakeAmount; // 0x9580
	bool bArrested; // 0x9584
	float DirBlendTime; // 0x9588
	float LeftHandSprintHack; // 0x958c
	FVector LeftHandWorldVector; // 0x9590
	FRotator LeftHandWorldRotator; // 0x959c
	float LeftHandWorldAlpha; // 0x95a8
	FVector LeftHandWorldElbowVector; // 0x95ac
	bool bLeftHandDoorActive; // 0x95b8
	FVector LeanHeadSocketLocation; // 0x95bc
	float LeanHeadBlendAlpha; // 0x95c8
	FVector LeanHeadOffset; // 0x95cc
	FVector Acceleration; // 0x95d8
	FVector CameraBobTrans; // 0x95e4
	float StartMotionWeight; // 0x95f0
	float StartMotionPlayrate; // 0x95f4
	FVector WeaponBobTrans; // 0x95f8
	FRotator WeaponBobRot; // 0x9604
	float WeaponBobAlpha; // 0x9610
	bool WeaponBobTrigger; // 0x9614
	bool bShouldAllowStopMotion; // 0x9615
	bool bBuildUpSprint; // 0x9616
	float SprintBuildupAlpha; // 0x9618
	bool bIsHeavyArmor; // 0x961c
};

struct UEditableMesh {
	TArray<UEditableMeshAdapter*> Adapters; // 0x3b8
	int32_t TextureCoordinateCount; // 0x3d0
	int32_t PendingCompactCounter; // 0x51c
	int32_t SubdivisionCount; // 0x520
};

struct UReadyOrNotWeaponAnimData {
	UAnimSequenceBase* IdlePose_FP; // 0x30
	UAnimSequenceBase* Idle_FP; // 0x38
	UAnimSequenceBase* Run_FP; // 0x40
	UAnimSequenceBase* Walk_FP; // 0x48
	UAnimSequenceBase* Run_Limp_FP; // 0x50
	UAnimSequenceBase* Walk_Limp_FP; // 0x58
	UBlendSpaceBase* Look_BS_FP; // 0x60
	UAnimSequenceBase* Lowered_Up_Pose_FP; // 0x68
	UAnimSequenceBase* Lowered_Down_Pose_FP; // 0x70
	UAnimSequenceBase* ADS_Run_FP; // 0x78
	UAnimSequenceBase* ADS_Walk_FP; // 0x80
	UAnimSequenceBase* ADS_Run_Limp_FP; // 0x88
	UAnimSequenceBase* ADS_Walk_Limp_FP; // 0x90
	UAnimSequenceBase* IdlePose_AFG_FP; // 0x98
	UAnimSequenceBase* IdlePose_VFG_FP; // 0xa0
	UAnimSequenceBase* IdlePose_HSTOP_FP; // 0xa8
	UAnimSequenceBase* IdlePose_Low_TP; // 0xb0
	UAnimSequenceBase* IdlePose_Up_TP; // 0xb8
	UAnimSequenceBase* IdlePose_Shld_TP; // 0xc0
	UAnimSequenceBase* IdlePose_Sights_TP; // 0xc8
	UAnimSequenceBase* IdlePose_Ret_TP; // 0xd0
	UAnimSequenceBase* IdlePose_Ovr_TP; // 0xd8
	UAnimSequenceBase* Crouch_IdlePose_Low_TP; // 0xe0
	UAnimSequenceBase* Crouch_IdlePose_Up_TP; // 0xe8
	UAnimSequenceBase* Crouch_IdlePose_Shld_TP; // 0xf0
	UAnimSequenceBase* Crouch_IdlePose_Sights_TP; // 0xf8
	UAnimSequenceBase* Crouch_IdlePose_Ret_TP; // 0x100
	UAnimSequenceBase* Crouch_IdlePose_Ovr_TP; // 0x108
	FWeaponAnim Reload; // 0x110
	FWeaponAnim ReloadEmpty; // 0x130
	FWeaponAnim Crouch_Reload; // 0x150
	FWeaponAnim Crouch_ReloadEmpty; // 0x170
	FWeaponAnim Tactical_Reload; // 0x190
	FWeaponAnim Tactical_ReloadEmpty; // 0x1b0
	TArray<FWeaponAnim> ShellRack_Reload; // 0x1d0
	TArray<FWeaponAnim> ShellRack_ReloadEmpty; // 0x1e0
	TArray<FWeaponAnim> ShellRack_ReloadRack; // 0x1f0
	FWeaponAnim Tactical_Crouch_Reload; // 0x200
	FWeaponAnim Tactical_Crouch_ReloadEmpty; // 0x220
	FWeaponAnim MeleeHit; // 0x240
	FWeaponAnim MeleeMiss; // 0x260
	FWeaponAnim FireSelect_Auto; // 0x280
	FWeaponAnim FireSelect_Burst; // 0x2a0
	FWeaponAnim FireSelect_Semi; // 0x2c0
	FWeaponAnim FireSelect_Safe; // 0x2e0
	FWeaponAnim Crouch_FireSelect_Auto; // 0x300
	FWeaponAnim Crouch_FireSelect_Burst; // 0x320
	FWeaponAnim Crouch_FireSelect_Semi; // 0x340
	FWeaponAnim Crouch_FireSelect_Safe; // 0x360
	FWeaponAnim Reload_Start; // 0x380
	FWeaponAnim Reload_Loop; // 0x3a0
	FWeaponAnim Reload_End; // 0x3c0
	FWeaponAnim Reload_Start_Empty; // 0x3e0
	FWeaponAnim Reload_Loop_Empty; // 0x400
	FWeaponAnim Reload_End_Empty; // 0x420
	FWeaponAnim Crouch_Reload_Start; // 0x440
	FWeaponAnim Crouch_Reload_Loop; // 0x460
	FWeaponAnim Crouch_Reload_End; // 0x480
	FWeaponAnim Crouch_Reload_Start_Empty; // 0x4a0
	FWeaponAnim Crouch_Reload_Loop_Empty; // 0x4c0
	FWeaponAnim Crouch_Reload_End_Empty; // 0x4e0
	FWeaponAnim MagazineCheck; // 0x500
	FWeaponAnim Crouch_MagazineCheck; // 0x520
	FWeaponAnim MagazineCheckSights; // 0x540
	FWeaponAnim Crouch_MagazineCheckSights; // 0x560
	TArray<FWeaponAnim> FireSingle; // 0x580
	TArray<FWeaponAnim> FireSingleSights; // 0x590
	FWeaponAnim FireSingleLast; // 0x5a0
	FWeaponAnim FireSingleSightsLast; // 0x5c0
	FWeaponAnim DryFire; // 0x5e0
	TArray<FWeaponAnim> Crouch_FireSingle; // 0x600
	TArray<FWeaponAnim> Crouch_FireSingleSights; // 0x610
	FWeaponAnim Crouch_FireSingleLast; // 0x620
	FWeaponAnim Crouch_FireSingleSightsLast; // 0x640
	FWeaponAnim Crouch_Dryfire; // 0x660
	FWeaponAnim FireLoop; // 0x680
	FWeaponAnim FireLoopEnd; // 0x6a0
	FWeaponAnim FireLoopSights; // 0x6c0
	FWeaponAnim FireLoopSightsEnd; // 0x6e0
	FWeaponAnim Crouch_FireLoop; // 0x700
	FWeaponAnim Crouch_FireLoopEnd; // 0x720
	FWeaponAnim Crouch_FireLoopSights; // 0x740
	FWeaponAnim Crouch_FireLoopSightsEnd; // 0x760
	FWeaponAnim Draw; // 0x780
	FWeaponAnim DrawFirst; // 0x7a0
	FWeaponAnim Crouch_Draw; // 0x7c0
	FWeaponAnim Crouch_DrawFirst; // 0x7e0
	FWeaponAnim Holster; // 0x800
	FWeaponAnim Crouch_Holster; // 0x820
	FWeaponAnim PullPin; // 0x840
	FWeaponAnim Throw; // 0x860
	FWeaponAnim PullPinUnderarm; // 0x880
	FWeaponAnim ThrowUnderarm; // 0x8a0
	FWeaponAnim Crouch_PullPin; // 0x8c0
	FWeaponAnim Crouch_Throw; // 0x8e0
	FWeaponAnim Crouch_PullPinUnderarm; // 0x900
	FWeaponAnim Crouch_ThrowUnderarm; // 0x920
	FWeaponAnim QuickThrow_PinPull; // 0x940
	FWeaponAnim Quickthrow_Throw; // 0x960
	FWeaponAnim Crouch_QuickThrow_PinPull; // 0x980
	FWeaponAnim Crouch_QuickThrow_Throw; // 0x9a0
	FWeaponAnim QuickThrow_Fast; // 0x9c0
	FWeaponAnim Crouch_QuickThrow_Fast; // 0x9e0
	FWeaponAnim Multitool_Use; // 0xa00
	FWeaponAnim Multitool_Use_End; // 0xa20
	FWeaponAnim Multitool_Cutters_To_Lockpick; // 0xa40
	FWeaponAnim Multitool_Cutters_To_Knife; // 0xa60
	FWeaponAnim Multitool_Lockpick_To_Cutters; // 0xa80
	FWeaponAnim Multitool_Lockpick_To_Knife; // 0xaa0
	FWeaponAnim Multitool_Knife_To_Lockpick; // 0xac0
	FWeaponAnim Multitool_Knife_To_Cutters; // 0xae0
	FWeaponAnim Optiwand_Start_Screening; // 0xb00
	FWeaponAnim Optiwand_End_Screening; // 0xb20
	FWeaponAnim Charge_Valid_Plant_Start; // 0xb40
	FWeaponAnim Charge_Valid_Plant_End; // 0xb60
	FWeaponAnim PlantCharge; // 0xb80
	FWeaponAnim DetonateCharge; // 0xba0
	FWeaponAnim EnableNVG; // 0xbc0
	FWeaponAnim DisableNVG; // 0xbe0
	FWeaponAnim ShieldDownToUp; // 0xc00
	FWeaponAnim ShieldUpToDown; // 0xc20
	FWeaponAnim Crouch_ShieldDownToUp; // 0xc40
	FWeaponAnim Crouch_ShieldUpToDown; // 0xc60
	FWeaponAnim ShieldHit; // 0xc80
	FWeaponAnim TabletDownToUp; // 0xca0
	FWeaponAnim TabletUpToDown; // 0xcc0
	FWeaponAnim TabletSwitchCameraDown; // 0xce0
	FWeaponAnim TabletSwitchCameraUp; // 0xd00
	FWeaponAnim EvidencePickup; // 0xd20
	FWeaponAnim Yell; // 0xd40
	FWeaponAnim RadioSelect; // 0xd60
	bool bRadioUsesNotifies; // 0xd80
	FWeaponAnim DoorPush; // 0xd88
	FWeaponAnim ButtonPush; // 0xda8
	FWeaponAnim WeaponClearing; // 0xdc8
	FWeaponAnim ReactToSting; // 0xde8
	FWeaponAnim ReactToFlash; // 0xe08
	FWeaponAnim ReactToTaser; // 0xe28
	FWeaponAnim ReactToGas; // 0xe48
	FWeaponAnim ReactToPepperSpray; // 0xe68
	FWeaponAnim ReactToSting_End; // 0xe88
	FWeaponAnim ReactToFlash_End; // 0xea8
	FWeaponAnim ReactToTaser_End; // 0xec8
	FWeaponAnim ReactToGas_End; // 0xee8
	FWeaponAnim ReactToPepperSpray_End; // 0xf08
	FWeaponAnim Draw_Level_01; // 0xf28
	FWeaponAnim Draw_Level_02; // 0xf48
	FWeaponAnim Draw_Level_03; // 0xf68
	FWeaponAnim Holster_Level_01; // 0xf88
	FWeaponAnim Holster_Level_02; // 0xfa8
	FWeaponAnim Holster_Level_03; // 0xfc8
	FWeaponAnim Reload_Level_01; // 0xfe8
	FWeaponAnim Reload_Level_02; // 0x1008
	FWeaponAnim Reload_Level_03; // 0x1028
	FWeaponAnim Recoil_Level_01; // 0x1048
	FWeaponAnim Recoil_Level_02; // 0x1068
	FWeaponAnim Recoil_Level_03; // 0x1088
	UAnimMontage* Grip_VFG_Body_FP_Fire; // 0x10a8
	UAnimMontage* Grip_VFG_Body_FP_Fire_Last; // 0x10b0
	UAnimMontage* Grip_VFG_Body_FP_Fire_Aim; // 0x10b8
	UAnimMontage* Grip_VFG_Body_FP_Fire_Aim_Last; // 0x10c0
	UAnimMontage* Grip_AFG_Body_FP_Fire; // 0x10c8
	UAnimMontage* Grip_AFG_Body_FP_Fire_Last; // 0x10d0
	UAnimMontage* Grip_AFG_Body_FP_Fire_Aim; // 0x10d8
	UAnimMontage* Grip_AFG_Body_FP_Fire_Aim_Last; // 0x10e0
	UAnimMontage* Reload_FP_Ads; // 0x10e8
	UAnimMontage* ReloadEmpty_FP_Ads; // 0x10f0
	UAnimMontage* Tactical_Reload_FP_Ads; // 0x10f8
	UAnimMontage* Tactical_ReloadEmpty_FP_Ads; // 0x1100
	bool bEmptyReload; // 0x1108
	bool bHasRetentionAdditives; // 0x1109
	bool bHasLoweredAdditives; // 0x110a
	bool bHasSightAdditives; // 0x110b
	bool bOverrideFireAnimForGrip; // 0x110c
};

struct UDataAsset {
	UDataAsset* NativeClass; // 0x28
};

struct ABasePlayer_Customization_C {
	UPlayerDetailsWidgetComponent* PlayerDetailsWidget; // 0x20c0
	USpotLightComponent* RadioGlare; // 0x20c8
	UBP_Comp_Whoosh_C* BP_Comp_Whoosh; // 0x20d0
	UBoxComponent* whooshBox; // 0x20d8
	UBP_Comp_ReverbTrace_C* BP_Comp_ReverbTrace; // 0x20e0
	USceneCaptureComponent2D* CameraCapture; // 0x20e8
	USkeletalMeshComponent* Handcuffs_Arrested; // 0x20f0
};

struct UNiagaraSimulationStageGeneric {
	ENiagaraIterationSource IterationSource; // 0x40
	int32_t Iterations; // 0x44
	char bSpawnOnly : 1; // 0x48
	char bDisablePartialParticleUpdate : 1; // 0x48
	FNiagaraVariableDataInterfaceBinding DataInterface; // 0x50
};

struct UOverlaySlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct UW_ReplaySystem_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UCircularThrobber* CircularThrobber_599; // 0x268
	UButton* CloseButton; // 0x270
	UEditableText* EditableText_306; // 0x278
	UHorizontalBox* LoadingReplays; // 0x280
	UScrollBox* ReplayList; // 0x288
	TArray<FS_ReplayInfo> LoadedReplays; // 0x290
};

struct ADoorJam {
	char bSet : 1; // 0x900
	AReadyOrNotCharacter* PlacedBy; // 0x908
	ADoor* PendingPlacement; // 0x910
	ADoor* JammedDoor; // 0x918
	FName DoorJamSocket; // 0x920
	TSoftObjectPtr<USkeletalMesh> PlacedMesh; // 0x928
	float PlacementTimer; // 0x950
	float WedgeRemovalTime; // 0x954
};

struct UMovieSceneEventRepeaterSection {
	FMovieSceneEvent Event; // 0xf0
};

struct UGizmoArrowComponent {
	FVector Direction; // 0x470
	float Gap; // 0x47c
	float Length; // 0x480
	float Thickness; // 0x484
};

struct UHapticFeedbackEffect_SoundWave {
	USoundWave* SoundWave; // 0x28
};

struct UW_Briefing_Dossier_Entry_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* div_Bot; // 0x268
	UImage* div_Top; // 0x270
	UW_Text_C* txt_Label; // 0x278
	UW_Text_C* txt_Value; // 0x280
	FText LabelText; // 0x288
	FText ValueText; // 0x2a0
	bool bHideTopDiv; // 0x2b8
	bool bHideBottomDiv; // 0x2b9
};

struct UEditableTextWidgetStyle {
	FEditableTextStyle EditableTextStyle; // 0x30
};

struct UBTDecorator_IsAtLocation {
	float AcceptableRadius; // 0x90
	FAIDataProviderFloatValue ParametrizedAcceptableRadius; // 0x98
	FAIDistanceType GeometricDistanceType; // 0xd0
	char bUseParametrizedRadius : 1; // 0xd4
	char bUseNavAgentGoalLocation : 1; // 0xd4
	char bPathFindingBasedTest : 1; // 0xd4
};

struct UMoviePlayerSettings {
	bool bWaitForMoviesToComplete; // 0x28
	bool bMoviesAreSkippable; // 0x29
	TArray<FString> StartupMovies; // 0x30
};

struct AIncriminationClue {
	FMulticastInlineDelegate Delegate_OnClueFound; // 0x288
	UMapActorComponent* MapActorComponent; // 0x298
	char ClueNumber; // 0x2a0
	float ShowObjectiveMarkerIn; // 0x2a4
	AIncriminationClue* NextClue; // 0x2a8
	FText ClueName; // 0x2b0
	FText ClueFoundMessage; // 0x2c8
	AIncriminationClueSpawnPoint* SpawnPointOwner; // 0x2e0
	char bClueFound : 1; // 0x2e8
	char bClueTimerExpired : 1; // 0x2e8
	EClueState ClueState; // 0x2e9
};

struct UDefaultLevelSequenceInstanceData {
	AActor* TransformOriginActor; // 0x30
	FTransform TransformOrigin; // 0x40
};

struct UMaterialExpressionTangentOutput {
	FExpressionInput Input; // 0x40
};

struct AMainMenuGM {
	UFMODEvent* MainMenuMusic; // 0x2d0
	UFMODEvent* MainMenuAmbience; // 0x2d8
	FMulticastInlineDelegate OnUpdateSessionSearch; // 0x2f8
	UUserWidget* AuthenticationMenu; // 0x320
	UUserWidget* MainMenu; // 0x328
};

struct UDragDropOperation {
	FString Tag; // 0x28
	UObject* Payload; // 0x38
	UWidget* DefaultDragVisual; // 0x40
	EDragPivot Pivot; // 0x48
	FVector2D Offset; // 0x4c
	FMulticastInlineDelegate OnDrop; // 0x58
	FMulticastInlineDelegate OnDragCancelled; // 0x68
	FMulticastInlineDelegate OnDragged; // 0x78
};

struct ULevelSequencePlayer {
	FMulticastInlineDelegate OnCameraCut; // 0x4e8
};

struct UAnimNotify_FMODPlayEvent_C {
	bool bFollow; // 0x38
	FString AttachName; // 0x40
	UFMODEvent* Event; // 0x50
};

struct UMeshComponent {
	TArray<UMaterialInterface*> OverrideMaterials; // 0x450
	char bEnableMaterialParameterCaching : 1; // 0x470
};

struct UMaterialExpressionTemporalSobol {
	FExpressionInput Index; // 0x40
	FExpressionInput Seed; // 0x54
	uint32_t ConstIndex; // 0x68
	FVector2D ConstSeed; // 0x6c
};

struct UAISystem {
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

struct USynthComponentMoto {
	UMotoSynthPreset* MotoSynthPreset; // 0x6c0
	float RPM; // 0x6c8
};

struct UMaterialExpressionShadingModel {
	EMaterialShadingModel ShadingModel; // 0x40
};

struct UMotivityTagAnimNotifyState {
	FName TagName; // 0x30
};

struct UModularSynthComponent {
	int32_t VoiceCount; // 0x6c0
};

struct UAnimSet {
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

struct UParticleModuleLocationSkelVertSurface {
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

struct UMediaComponent {
	UMediaTexture* MediaTexture; // 0xb0
	UMediaPlayer* MediaPlayer; // 0xb8
};

struct UParticleModuleEventGenerator {
	TArray<FParticleEvent_GenerateInfo> Events; // 0x30
};

struct UPlayMontageCallbackProxy {
	FMulticastInlineDelegate OnCompleted; // 0x28
	FMulticastInlineDelegate OnBlendOut; // 0x38
	FMulticastInlineDelegate OnInterrupted; // 0x48
	FMulticastInlineDelegate OnNotifyBegin; // 0x58
	FMulticastInlineDelegate OnNotifyEnd; // 0x68
};

struct UZeuzConfig {
	FString ProjectID; // 0x28
	FString EnvironmentId; // 0x38
	FString DevEnvironmentId; // 0x48
	FString ApiKey; // 0x58
	FString ApiPassword; // 0x68
};

struct UW_StandardModal_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UW_StandardButton_C* ApplyButton; // 0x268
	UW_Button_C* ApplyButton2; // 0x270
	UW_StandardButton_C* CancelButton; // 0x278
	UW_Button_C* CancelButton2; // 0x280
	UTextBlock* ModalDescriptionWidget; // 0x288
	UW_StandardButton_C* OkButton; // 0x290
	UW_Button_C* OkButton2; // 0x298
	UScrollBox* ScrollBox_1; // 0x2a0
	UTextBlock* TitleBarTextWidget; // 0x2a8
	UVerticalBox* VerticalBox_104; // 0x2b0
	FText TitleBar; // 0x2b8
	FText ModalDescription; // 0x2d0
	bool ShowCancelButton; // 0x2e8
	bool ShowOkButton; // 0x2e9
	bool ShowApplyButton; // 0x2ea
	FMulticastInlineDelegate OnOkClicked; // 0x2f0
	FMulticastInlineDelegate OnCancelClicked; // 0x300
	FMulticastInlineDelegate OnApplyClicked; // 0x310
	FText OkButtonText; // 0x320
	FVector2D Size; // 0x338
	FText CancelButtonText; // 0x340
	bool RequireScrollToBottom; // 0x358
	bool ScrolledToBottom; // 0x359
};

struct UANIMBP_Head_Smudge_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x520
	FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x528
	FAnimNode_PoseBlendNode AnimGraphNode_PoseBlendNode; // 0x700
	FAnimNode_Slot AnimGraphNode_Slot; // 0x7a0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x7e8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x8a8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0xa00
	FAnimNode_Root AnimGraphNode_Root; // 0xa28
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xa58
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xad8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xb00
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xb28
	USkeletalMeshComponent* BodyMeshRef; // 0xbc8
	bool IsPlayerDead; // 0xbd0
};

struct UTexture2D {
	int32_t LevelIndex; // 0x178
	int32_t FirstResourceMemMip; // 0x17c
	char bTemporarilyDisableStreaming : 1; // 0x180
	TextureAddress AddressX; // 0x181
	TextureAddress AddressY; // 0x182
	FIntPoint ImportedSize; // 0x184
};

struct UCanvasRenderTarget2D {
	FMulticastInlineDelegate OnCanvasRenderTargetUpdate; // 0x1a8
	TWeakObjectPtr<UWorld> World; // 0x1b8
	bool bShouldClearRenderTargetOnReceiveUpdate; // 0x1c0
};

struct UTimecodeProvider {
	float FrameDelay; // 0x28
};

struct UReadyOrNotFaceAnimInstance {
	USkeletalMeshComponent* BodyDriverMesh; // 0x2b8
	UPoseAsset* DefaultFaceROMData; // 0x2c0
};

struct UMovieSceneCapture {
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

struct UARPoseComponent {
	FARPoseUpdatePayload ReplicatedPayload; // 0x280
};

struct UW_ReplayControls_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* BackButton; // 0x268
	UTextBlock* CurrentTime; // 0x270
	UCheckBox* FollowLocalPlayerCheck; // 0x278
	UComboBoxString* FollowSelection; // 0x280
	USlider* FOVSlider; // 0x288
	UTextBlock* MaxTime; // 0x290
	USlider* ReplayTimeSet; // 0x298
	UButton* SelectNewReplayButton; // 0x2a0
	USlider* TimeDilationSlider; // 0x2a8
	APlayerCharacter* ViewTarget; // 0x2b0
	bool bPaused; // 0x2b8
	float PlayRate; // 0x2bc
	float FOV; // 0x2c0
};

struct AQuadrotorPawn {
	UBoxComponent* FlightBox; // 0x280
	USkeletalMeshComponent* DroneMesh; // 0x288
	UCameraComponent* FirstPersonCamera; // 0x290
	float RPM; // 0x298
	float RPMThrottleMultiplier; // 0x29c
	bool bApplyingInput; // 0x2a0
	float MaxRPM; // 0x2a4
	float IdleRPM; // 0x2a8
	float RPMForceScale; // 0x2ac
	float MaximumTilt; // 0x2b0
	float MaxVelocity; // 0x2b4
	bool bEngineOn; // 0x2b8
	FRotator RotorRotation; // 0x2bc
	FTransform DroneTransform; // 0x2d0
	FRotator TargetRotation; // 0x300
};

struct UNiagaraParameterCollection {
	FName Namespace; // 0x28
	TArray<FNiagaraVariable> Parameters; // 0x30
	UMaterialParameterCollection* SourceMaterialCollection; // 0x40
	UNiagaraParameterCollectionInstance* DefaultInstance; // 0x48
	FGuid CompileId; // 0x50
};

struct UMaterialExpressionTextureBase {
	UTexture* Texture; // 0x40
};

struct UVirtualTextureBuilder {
	UVirtualTexture2D* Texture; // 0x28
	uint64_t BuildHash; // 0x30
};

struct UUniformInteger {
	int32_t Magnitude; // 0xb0
};

struct UInteractiveToolManager {
	UInteractiveTool* ActiveLeftTool; // 0x30
	UInteractiveTool* ActiveRightTool; // 0x38
	TMap<FString, UInteractiveToolBuilder*> ToolBuilders; // 0x90
};

struct UW_LoadoutItem_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278
	UW_StandardButton_C* Button; // 0x280
	USizeBox* RadioIcon_SizeBox; // 0x288
	UImage* SelectedRadioIcon_Image; // 0x290
	UW_Text_C* txt_Equipped; // 0x298
	UW_Text_C* txt_LoadoutItem; // 0x2a0
	UImage* UnselectedRadioIcon_Image; // 0x2a8
	FText LoadoutItemName; // 0x2b0
	FMulticastInlineDelegate OnButtonClicked; // 0x2c8
	EItemClass ItemClass; // 0x2d8
	ABaseItem* ItemObjectClass; // 0x2e0
	bool bIsTactical; // 0x2e8
	int32_t TacticalSlot; // 0x2ec
	bool bIsMultipleTacticalSlots; // 0x2f0
	int32_t MaxTacticalSlots; // 0x2f4
	int32_t StartingTacticalSlot; // 0x2f8
	bool bSelected; // 0x2fc
	UW_LoadoutClass_C* Owner; // 0x300
	UW_LoadoutCategory_C* CategoryOwner; // 0x308
	FMulticastInlineDelegate OnButtonHovered; // 0x310
	FMulticastInlineDelegate OnButtonUnhovered; // 0x320
	FText DirectoryName; // 0x330
};

struct UVirtualTexturePoolConfig {
	int32_t DefaultSizeInMegabyte; // 0x28
	TArray<FVirtualTextureSpacePoolConfig> Pools; // 0x30
};

struct UInterpTrackParticleReplay {
	TArray<FParticleReplayTrackKey> TrackKeys; // 0x70
};

struct UDatasmithPointLightComponentTemplate {
	ELightUnits IntensityUnits; // 0x30
	float SourceRadius; // 0x34
	float SourceLength; // 0x38
	float AttenuationRadius; // 0x3c
};

struct UMovieSceneCameraShakeSection {
	FMovieSceneCameraShakeSectionData ShakeData; // 0xe8
	UCameraShakeBase* ShakeClass; // 0x108
	float PlayScale; // 0x110
	ECameraShakePlaySpace PlaySpace; // 0x114
	FRotator UserDefinedPlaySpace; // 0x118
};

struct UCommandlet {
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

struct UMaterialExpressionRuntimeVirtualTextureReplace {
	FExpressionInput Default; // 0x40
	FExpressionInput VirtualTextureOutput; // 0x54
};

struct UMaterialExpressionSpeedTree {
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

struct AGeometryCollectionDebugDrawActor {
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

struct UAITask_MoveTo {
	FMulticastInlineDelegate OnRequestFailed; // 0x70
	FMulticastInlineDelegate OnMoveFinished; // 0x80
	FAIMoveRequest MoveRequest; // 0x90
};

struct UPhononSourceComponent {
	float BakingRadius; // 0x1f8
	FName UniqueIdentifier; // 0x1fc
};

struct AIncapacitatedHuman {
	USceneComponent* DefaultScene; // 0x238
	USkeletalMeshComponent* HumanMesh; // 0x240
	USkeletalMeshComponent* HumanMeshFace; // 0x248
	UInteractableComponent* ReportInteractableComponent; // 0x250
	UScoringComponent* ScoringComponent; // 0x258
	UFMODAudioComponent* IncapacitatedAudioComponent; // 0x260
	UPhysicsAsset* RagdollPhysicsAsset; // 0x268
	UAnimMontage* DyingMontage; // 0x270
	UFMODEvent* FMODEventLoop; // 0x278
	UParticleSystem* ShotParticleEffect; // 0x280
	bool bStartDead; // 0x288
	bool bCanEverDieByTime; // 0x289
	float TimeRemainingUntilDead; // 0x28c
	bool bIsInGroup; // 0x290
	bool bIsMasterOfGroup; // 0x291
	TArray<AIncapacitatedHuman*> IncapacitatedHumansInGroup; // 0x298
	AIncapacitatedHuman* MasterHumanInGroup; // 0x2a8
	bool bAttachReportInteractableToMesh; // 0x2b0
	FName SocketToAttach; // 0x2b4
	ETeamType Team; // 0x2bc
	bool bIsDead; // 0x2bd
	bool bHasBeenReported; // 0x2be
};

struct UMaterialExpressionTangent {
	FExpressionInput Input; // 0x40
	float Period; // 0x54
};

struct UTrapSpawnComponent {
	FName TrapRoster; // 0xb0
	FName AttachToComponent; // 0xb8
	FName ComponentSocket; // 0xc0
	FTransform TrapTransform; // 0xd0
	TArray<FTrapSpawnType> TrapSpawnClasses; // 0x100
	bool bSpawnSelected; // 0x110
};

struct ATugOfWarZone {
	bool bZoneDisabled; // 0x220
	ATugOfWarMover* Mover; // 0x228
	UBoxComponent* Bounds; // 0x230
};

struct UBlueprint {
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

struct UMaterialExpressionVolumetricAdvancedMaterialOutput {
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

struct ABaseWeapon {
	EFireMode FiremodeBeforeSafe; // 0x8f8
	UArrowComponent* BulletSpawn; // 0x900
	UArrowComponent* ShellSpawn; // 0x908
	UParticleSystemComponent* ShellParticle; // 0x910
	USpotLightComponent* Flashlight; // 0x918
	UScopedWeaponAttachment* ScopeAttachment; // 0x920
	UWeaponAttachment* MuzzleAttachment; // 0x928
	UWeaponAttachment* UnderbarrelAttachment; // 0x930
	UWeaponAttachment* OverbarrelAttachment; // 0x938
	UWeaponAttachment* StockAttachment; // 0x940
	UWeaponAttachment* GripAttachment; // 0x948
	UWeaponAttachment* IlluminatorAttachment; // 0x950
	UWeaponAttachment* AmmunitionAttachment; // 0x958
	int32_t AttachmentPoints; // 0x960
	bool bSupressed; // 0x964
	FMulticastInlineDelegate OnFireModeChanged; // 0x970
	EFireMode CurrentFireMode; // 0x980
	EFireMode DefaultFireMode; // 0x981
	TArray<EFireMode> AvailableFireModes; // 0x988
	float BurstBulletCount; // 0x998
	bool bHasSafeMode; // 0x99c
	float AddedMagazineCountFromAttachments; // 0x9a0
	FName Optics_UI_Socket; // 0x9a4
	FName Grip_UI_Socket; // 0x9ac
	FName Muzzle_UI_Socket; // 0x9b4
	FName Stock_UI_Socket; // 0x9bc
	FName Magazine_UI_Socket; // 0x9c4
	float ADSZoom; // 0x9cc
	float ADSZoomInSpeed; // 0x9d0
	float ADSZoomOutSpeed; // 0x9d4
	UDamageType* DefaultDamageType; // 0x9d8
	UDamageType* DamageType; // 0x9e0
	UMatineeCameraShake* FireCameraShake; // 0x9e8
	FRuntimeFloatCurve DamageOverRange; // 0x9f0
	float Damage; // 0xa78
	float DamageSeverityMultiplier; // 0xa7c
	float DamageSeverityChance; // 0xa80
	float BleedoutDamageMultiplier; // 0xa84
	float BleedoutDamageChance; // 0xa88
	float DefaultDamage; // 0xa8c
	float FireRate; // 0xa90
	float MinFireRateAI; // 0xa94
	int32_t BulletsFiredUntilFullyAccurate; // 0xa98
	float MaxFireRateAI; // 0xa9c
	float ProjectileMovementSpeed; // 0xaa0
	bool bArmorPiercing; // 0xaa4
	AImpactEffect* ImpactEffects; // 0xaa8
	AImpactEffect* RicochetEffects; // 0xab0
	AImpactEffect* ExitEffects; // 0xab8
	float Wobble; // 0xac0
	float InitialWobbleDelay; // 0xac4
	bool bAttachBulletOnHit; // 0xac8
	float BulletPhysicsImpulseMultiplier; // 0xacc
	bool bDestroyBulletOnHit; // 0xad0
	USkeletalMesh* BulletProjectileMesh; // 0xad8
	UStaticMesh* FakeProjectileMeshStatic; // 0xae0
	UStaticMesh* BulletProjectileMeshStatic; // 0xae8
	FVector BulletProjectileScale; // 0xaf0
	ABaseShell* ShellClass; // 0xb00
	UStaticMesh* ShellMesh; // 0xb08
	TArray<FRotator> RecoilPattern; // 0xb10
	float BulletDrag; // 0xb24
	float RecoilInterpSpeed; // 0xb28
	float ADSRecoilMultiplier; // 0xb2c
	float ADSSpreadMultiplier; // 0xb30
	float RecoilReturnRate; // 0xb34
	FRotator SpreadPattern; // 0xb38
	float SpreadReturnRate; // 0xb48
	FRotator PendingSpread; // 0xb4c
	bool bFireIfNoAmmo; // 0xb58
	FRotator fireDirection; // 0xb5c
	float GlimmerIntensity; // 0xb68
	int32_t SpawnProjectileCount; // 0xb6c
	float FirstShotRecoil; // 0xb70
	float FirstShotSpread; // 0xb74
	float FirstShotResetTime; // 0xb78
	float VelocitySpreadMultiplier; // 0xb7c
	float VelocityRecoilMultiplier; // 0xb80
	float RecoilMultiplierPitch; // 0xb84
	float RecoilMultiplierYaw; // 0xb88
	float RefireDelay; // 0xb8c
	float RecoilReturnPercentage; // 0xb90
	float RecoilReturnInterpSpeed; // 0xb94
	bool bCalculateProcRecoil; // 0xc50
	float RecoilDampStrength; // 0xc54
	float RecoilFireTime; // 0xc58
	float RecoilFireStrength; // 0xc5c
	float RecoilFireStrengthFirst; // 0xc60
	float RecoilAngleStrength; // 0xc64
	float RecoilRandomness; // 0xc68
	float RecoilFireADSModifier; // 0xc6c
	float RecoilAngleADSModifier; // 0xc70
	FRotator RecoilRotationBuildup; // 0xc74
	FVector RecoilPositionBuildup; // 0xc80
	float RecoilBuildupADSModifier; // 0xc8c
	bool RecoilHasBuildup; // 0xc90
	float RecoilBuildupDampStrength; // 0xc94
	FVector ProcRecoil_Trans; // 0xcc4
	FRotator ProcRecoil_Rot; // 0xcd0
	FVector ProcRecoil_Trans_Buildup; // 0xcdc
	FRotator ProcRecoil_Rot_Buildup; // 0xce8
	float CurrentHighTimer; // 0xcf4
	float ReloadHighTimer; // 0xcf8
	float FireHighTimer; // 0xcfc
	float EquipHighTimer; // 0xd00
	bool bUseScopeMask; // 0xd04
};

struct AZipcuffs {
	APlayerCharacter* PendingArrestCharacter; // 0x8f8
	AReadyOrNotCharacter* TargetedCharacter; // 0x900
	bool bArresting; // 0x908
	float ArrestMaxDistance; // 0x910
	TArray<ECollisionChannel> ArrestCollisionChannels; // 0x918
	UAnimMontage* UseZipcuffs_1P; // 0x928
	UAnimMontage* UseZipcuffs_3P; // 0x930
	float ArrestTime; // 0x938
	UInteractionsData* ForcedInteractionData; // 0x948
	TArray<UInteractionsData*> StandingArrestInteractionSuspects; // 0x950
	TArray<UInteractionsData*> StandingArrestInteractionCivilians; // 0x960
	TArray<UInteractionsData*> PvPArrestInteraction; // 0x970
	APlacedZipcuffs* SpawnedZipcuffsClass; // 0x980
	FName ZipcuffBone; // 0x988
	FTransform SpawnCuffsTransform; // 0x990
	FRotator SpawnCuffsRelativeRotation; // 0x9c0
	FVector SpawnCuffsRelativeTranslation; // 0x9cc
	UFMODEvent* FMODZipcuffsArrest; // 0x9d8
};

struct UMaterialExpressionAbs {
	FExpressionInput Input; // 0x40
};

struct ABuildingTrigger {
	int32_t NumberOfFloors; // 0x228
	char bAuto : 1; // 0x22c
	char bUniformFloorSpacing : 1; // 0x22c
	float SpacingBetweenFloors; // 0x230
	TArray<float> SpacingPerFloor; // 0x238
	FText BuildingName; // 0x248
	TMap<int32_t, FString> FloorNumberToFloorName; // 0x260
	TArray<FBuildingFloor> GeneratedFloors; // 0x2b0
};

struct UCheckBox {
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

struct UW_MissionEnd_Rating_ScorePanel_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetSwitcher* HeaderSwitcher; // 0x268
	UW_Text_C* lbl_Minus; // 0x270
	UW_Text_C* lbl_Penalties; // 0x278
	UW_Text_C* lbl_Plus; // 0x280
	UW_Text_C* lbl_Scores; // 0x288
	UTextBlock* txt_Debug; // 0x290
	UVerticalBox* VB_Header_Penalties; // 0x298
	UVerticalBox* VB_Header_Scores; // 0x2a0
	UVerticalBox* VB_ScoreList; // 0x2a8
	UW_MissionEnd_RatingScoreEntry_C* W_MissionEnd_RatingScoreEntry; // 0x2b0
	UW_MissionEnd_RatingScoreEntry_C* W_MissionEnd_RatingScoreEntry_2; // 0x2b8
	bool PenaltyScores; // 0x2c0
	bool ScoresComplete; // 0x2c1
	FScoreGroup ScoreGroup; // 0x2c8
	TMap<UW_MissionEnd_RatingScoreEntry_C*, FScoreGroup> ScoreEntries; // 0x300
	UW_MissionEnd_Rating_Progress_C* RatingProgressMeter; // 0x350
	TMap<UW_MissionEnd_RatingScoreEntry_C*, FScorePenaltyData> PenaltyEntries; // 0x358
	FScorePenaltyData PenaltyData; // 0x3a8
	FMulticastInlineDelegate AllScoresAdded; // 0x3c0
	bool PenaltiesComplete; // 0x3d0
	FMulticastInlineDelegate AllPenaltiesAdded; // 0x3d8
	int32_t DEBUG COUNT; // 0x3e8
};

struct UAnimNotifyState_SpawnLight {
	FLinearColor LightColor; // 0x30
	float StartIntensity; // 0x40
	float MiddleIntensity; // 0x44
	float EndIntensity; // 0x48
	float InterpSpeed; // 0x4c
	APointLight* PointLight; // 0x50
	float MaxDuration; // 0x58
	float CurrentDuration; // 0x5c
	FName SocketName; // 0x60
};

struct AOnlineBeacon {
	float BeaconConnectionInitialTimeout; // 0x228
	float BeaconConnectionTimeout; // 0x22c
	UNetDriver* NetDriver; // 0x230
};

struct UBoxReflectionCaptureComponent {
	float BoxTransitionDistance; // 0x270
	UBoxComponent* PreviewInfluenceBox; // 0x278
	UBoxComponent* PreviewCaptureBox; // 0x280
};

struct ULandscapeSplineControlPoint {
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

struct USourceEffectEQPreset {
	FSourceEffectEQSettings Settings; // 0xa0
};

struct UW_PauseMenu_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* AdminPasswordBox; // 0x268
	UCanvasPanel* BackgroundCanvas; // 0x270
	UW_Button_C* btn_Admin; // 0x278
	UW_Button_C* btn_Bug; // 0x280
	UW_Button_C* btn_ConfirmAdminPassword; // 0x288
	UW_Button_C* btn_Invite; // 0x290
	UW_Button_C* btn_Lobby; // 0x298
	UW_Button_C* btn_Options; // 0x2a0
	UW_Button_C* btn_Quit; // 0x2a8
	UW_Button_C* btn_Replay; // 0x2b0
	UW_Button_C* btn_Resume; // 0x2b8
	UW_Button_C* btn_Vote; // 0x2c0
	UTextBlock* ButtonDescription; // 0x2c8
	UEditableText* EditableText_1; // 0x2d0
	USizeBox* EscapeMenu; // 0x2d8
	USizeBox* ObjectivesBox; // 0x2e0
	UW_Text_C* txt_Version; // 0x2e8
	UW_Briefing_Objectives_C* W_Briefing_Objectives; // 0x2f0
	bool WasShowingMouse; // 0x2f8
	UW_SettingsMenu_C* SettingsMenu; // 0x300
	UObject* CallVoteMenu; // 0x308
};

struct UReadyOrNotGameInstance {
	UUserWidget* SpawnWidgetOnLevelLoad; // 0x238
	FPMap Hashes; // 0x248
	FMulticastInlineDelegate OnConnectSteamServerByIP; // 0x3e8
	bool bHostedGame; // 0x448
	float Saved_RoundTimerGameStart; // 0x44c
	float Saved_RoundTimerBetweenMaps; // 0x450
	float Saved_ReinforcementTimer; // 0x454
	float Saved_Timelimit; // 0x458
	int32_t Saved_RoundsPerMap; // 0x45c
	int32_t Saved_Scorelimit; // 0x460
	bool Saved_AiEnabled; // 0x464
	bool bIsSinglePlayerMode; // 0x465
	TArray<FString> ActivePauseConditions; // 0x468
	FString NextLevel; // 0x478
	FString MainMenuDisplayMessage; // 0x488
	TArray<FString> BuiltMapList; // 0x4a0
	bool bShowingFPS; // 0x4b0
	FMulticastInlineDelegate OnAlphaAccessChecked; // 0x4d8
	FMulticastInlineDelegate OnNewsReceived; // 0x4e8
	TArray<FString> ReplayNames; // 0x4f8
	FMulticastInlineDelegate OnFindReplaysComplete; // 0x560
};

struct UPacketHandlerProfileConfig {
	TArray<FString> Components; // 0x28
};

struct UAIAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFail; // 0x38
};

struct UANIMBP_P250_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x308
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x328
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x430
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x450
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x498
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x538
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x690
	FAnimNode_Slot AnimGraphNode_Slot; // 0x750
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x798
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x7c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x7e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x868
	float Mag01Alpha; // 0x8e8
};

struct UFMODAudioComponent {
	UFMODEvent* Event; // 0x1f8
	TMap<FName, float> ParameterCache; // 0x200
	FString ProgrammerSoundName; // 0x258
	char bEnableTimelineCallbacks : 1; // 0x268
	char bAutoDestroy : 1; // 0x280
	char bStopWhenOwnerDestroyed : 1; // 0x280
	FMulticastInlineDelegate OnEventStopped; // 0x288
	FMulticastInlineDelegate OnTimelineMarker; // 0x298
	FMulticastInlineDelegate OnTimelineBeat; // 0x2a8
	FFMODAttenuationDetails AttenuationDetails; // 0x2b8
	FFMODOcclusionDetails OcclusionDetails; // 0x2c4
};

struct AShotgunImpactEffects_C {
	USceneComponent* DefaultSceneRoot; // 0xcb0
};

struct ASequencerCharacterTemplate_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	USkeletalMeshComponent* ArmorMesh; // 0x228
	USkeletalMeshComponent* HeadMesh; // 0x230
	UStaticMeshComponent* ItemMagMesh; // 0x238
	USkeletalMeshComponent* ItemMesh; // 0x240
	USkeletalMeshComponent* BodyMesh; // 0x248
	USceneComponent* DefaultSceneRoot; // 0x250
	UPoseAsset* FaceROMReference; // 0x258
	AReadyOrNotPlayerState* RoNPlayerState; // 0x260
};

struct UMaterialExpressionSamplePhysicsVectorField {
	FExpressionInput WorldPosition; // 0x40
	EFieldVectorType FieldTarget; // 0x54
};

struct UDistributionFloatConstant {
	float Constant; // 0x38
};

struct UParticleModuleTypeDataGpu {
	FGPUSpriteEmitterInfo EmitterInfo; // 0x30
	FGPUSpriteResourceData ResourceData; // 0x2b0
	float CameraMotionBlurAmount; // 0x410
	char bClearExistingParticlesOnInit : 1; // 0x414
};

struct UPhysicalMaterialMask {
	int32_t UVChannelIndex; // 0x28
	TextureAddress AddressX; // 0x2c
	TextureAddress AddressY; // 0x2d
};

struct UBrushBuilder {
	FString BitmapFilename; // 0x28
	FString Tooltip; // 0x38
	char NotifyBadParams : 1; // 0x48
	TArray<FVector> Vertices; // 0x50
	TArray<FBuilderPoly> Polys; // 0x60
	FName Layer; // 0x70
	char MergeCoplanars : 1; // 0x78
};

struct UTabletDisplay {
	ATablet* OwningTablet; // 0x260
};

struct UMovieSceneParticleParameterTrack {
	TArray<UMovieSceneSection*> Sections; // 0x98
};

struct URandomVector {
	float Magnitude; // 0xb0
};

struct UMaterialExpressionTransformPosition {
	FExpressionInput Input; // 0x40
	EMaterialPositionTransformSource TransformSourceType; // 0x54
	EMaterialPositionTransformSource TransformType; // 0x55
};

struct UW_ItemSelection_ItemGroup_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_FadeOut_Selected; // 0x268
	UWidgetAnimation* Anim_FadeOut; // 0x270
	UWidgetAnimation* Anim_Unfocus; // 0x278
	UWidgetAnimation* Anim_Select_Fail; // 0x280
	UWidgetAnimation* Anim_Focus; // 0x288
	UImage* Divider_Image; // 0x290
	UOverlay* GroupOverlay; // 0x298
	UImage* Icon_Image; // 0x2a0
	UImage* Icon_NotAvailable_Image; // 0x2a8
	UTextBlock* Icon_Text; // 0x2b0
	UWidgetSwitcher* IconStyle_Switcher; // 0x2b8
	UTextBlock* Keybinding_Text; // 0x2c0
	UHorizontalBox* ScrollHint_Box; // 0x2c8
	UTextBlock* ScrollHint_Text; // 0x2d0
	UImage* Selected_Image; // 0x2d8
	ABaseItem* Item; // 0x2e0
	ABasePlayer_C* PlayerCharacter; // 0x2e8
	int32_t NumOfItems; // 0x2f0
	ABaseItem* ItemClass; // 0x2f8
	bool bIsFocused; // 0x300
	bool bContainsMultipleCategories; // 0x301
	FMulticastInlineDelegate OnFadeOutSelectedFinished; // 0x308
	FMulticastInlineDelegate OnFadeOutFinished; // 0x318
};

struct ASlowDownVolume {
	float SlowDownMultiplier; // 0x228
};

struct UUserDefinedEnum {
	TMap<FName, FText> DisplayNameMap; // 0x60
};

struct UCurrentMatchRoundWidget {
	UTextBlock* CurrentRound_Text; // 0x278
	UTextBlock* CurrentRound_Text_Style2; // 0x280
};

struct UANIMBP_Flashbang_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8
};

struct ACoopGS {
	bool bMissionSucceded; // 0x6d0
	bool bMissionSoftCompleted; // 0x6d1
	ECOOPMode Mode; // 0x6d2
	int32_t CurrentDeployables; // 0x6d4
	AActor* DeployableDepot; // 0x6d8
	FName DepotLabel; // 0x6e0
	int32_t DepotNumber; // 0x6e8
	int32_t DepotCost; // 0x6ec
	int32_t CurrentPersonnel; // 0x6f0
	int32_t CurrentUsedPersonnelPoints; // 0x6f4
	TMap<int32_t, int32_t> PersonnelMapping; // 0x6f8
	int32_t TotalAIOfficers; // 0x748
	int32_t TotalOfficers; // 0x74c
	int32_t NumCompleteExtraObjectives; // 0x750
	int32_t NumTotalExtraObjectives; // 0x754
	int32_t TeamKills; // 0x758
	bool bAllPlayerCharactesDead; // 0x75c
	int32_t SquadPointsRemaining; // 0x760
	ESelectedSpawn SelectedRedSpawnPoint; // 0x764
	int32_t RedSpawnSquadPoints; // 0x768
	ESelectedSpawn SelectedBlueSpawnPoint; // 0x76c
	int32_t BlueSpawnSquadPoints; // 0x770
	UFMODEvent* missionMusic; // 0x778
	FFMODEventInstance musicInstance; // 0x780
	FText PromotedLeaderFormat; // 0x788
	int32_t YesVotes; // 0x7a0
	int32_t NoVotes; // 0x7a4
	float TOCDelay; // 0x7b0
};

struct UItemVisualizationComponent {
	EItemVisualizationStatus ItemVisualizationStatus; // 0xec8
	EItemVisualizationType VisualizationType; // 0xec9
	ABaseItem* BasedOfItem; // 0xed0
	UStaticMeshComponent* MagazineComp; // 0xed8
	USkeletalMeshComponent* ScopeAttachment; // 0xee0
	USkeletalMeshComponent* MuzzleAttachment; // 0xee8
	USkeletalMeshComponent* UnderbarrelAttachment; // 0xef0
	USkeletalMeshComponent* OverbarrelAttachment; // 0xef8
};

struct USoundNodeRandom {
	TArray<float> Weights; // 0x48
	TArray<bool> HasBeenUsed; // 0x58
	int32_t NumRandomUsed; // 0x68
	int32_t PreselectAtLevelLoad; // 0x6c
	char bShouldExcludeFromBranchCulling : 1; // 0x70
	char bSoundCueExcludedFromBranchCulling : 1; // 0x70
	char bRandomizeWithoutReplacement : 1; // 0x70
};

struct UNVG_Widget_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
};

struct UObituaryData {
	TMap<FName, FObituaryForBone> PointDeathMessages; // 0x30
	TArray<FText> DefaultBulletDeathText; // 0x80
};

struct UAIDataProvider_Random {
	float Min; // 0x40
	float Max; // 0x44
	char bInteger : 1; // 0x48
};

struct AGM_COOP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x970
	USceneComponent* DefaultSceneRoot; // 0x978
	TArray<FVector> HostageSpawns; // 0x980
	bool bSidesSwapped; // 0x990
	float TargetTimeDilation; // 0x994
	FMulticastInlineDelegate OnRoundResetComplete; // 0x998
	UObject* SpeechActor; // 0x9a8
};

struct AHUD_VIPEscort_C {
	USceneComponent* DefaultSceneRoot; // 0x318
};

struct UBTDecorator_KeepInCone {
	float ConeHalfAngle; // 0x68
	FBlackboardKeySelector ConeOrigin; // 0x70
	FBlackboardKeySelector Observed; // 0x98
	char bUseSelfAsOrigin : 1; // 0xc0
	char bUseSelfAsObserved : 1; // 0xc0
};

struct AVectorFieldVolume {
	UVectorFieldComponent* VectorFieldComponent; // 0x220
};

struct UWidgetTree {
	UWidget* RootWidget; // 0x28
};

struct UW_MatchStatusCard_V2_C {
	UW_TeamProgressScore_C* BlueTeam_Progress; // 0x288
	UW_TeamStatus_C* BlueTeam_Status; // 0x290
	UWidgetSwitcher* GameModeScoreTrackers_Switcher; // 0x298
	UW_KingOfTheHillMeter_Tracker_C* KingOfTheHill_Tracker; // 0x2a0
	UW_TeamProgressScore_C* RedTeam_Progress; // 0x2a8
	UW_TeamStatus_C* RedTeam_Status; // 0x2b0
};

struct APrimary_P90_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1130
};

struct AProjectile_Flare_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3a8
	UParticleSystemComponent* ParticleSystem; // 0x3b0
	ABP_LenFlare_RoadFlare_C* LensFlare; // 0x3b8
	ABP_LensFlare_FlareGun_C* Gun_Flare; // 0x3c0
};

struct UTireConfig {
	float FrictionScale; // 0x30
	TArray<FTireConfigMaterialFriction> TireFrictionScales; // 0x38
};

struct ADatasmithSceneActor {
	UDatasmithScene* Scene; // 0x220
	TMap<FName, TSoftObjectPtr<AActor>> RelatedActors; // 0x228
};

struct UMaterialExpressionAppendVector {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UMaterialExpressionReroute {
	FExpressionInput Input; // 0x40
};

struct USCS_Node {
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

struct UMovieSceneMediaPlayerPropertySection {
	UMediaSource* MediaSource; // 0xe8
	bool bLoop; // 0xf0
};

struct UGizmoConstantAxisSource {
	FVector Origin; // 0x30
	FVector Direction; // 0x3c
};

struct UMagicLeapARPinComponent {
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

struct UBaseMediaSource {
	FName PlayerName; // 0x80
};

struct UInterpTrackToggle {
	TArray<FToggleTrackKey> ToggleTrack; // 0x70
	char bActivateSystemEachUpdate : 1; // 0x80
	char bActivateWithJustAttachedFlag : 1; // 0x80
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	char bFireEventsWhenJumpingForwards : 1; // 0x80
};

struct ANavigationTestingActor {
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

struct UAnimationSharingStateProcessor {
	TSoftObjectPtr<UEnum> AnimationStateEnum; // 0x28
};

struct UW_WeaponWheel_ItemStat_Accuracy_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x840
};

struct ABrush {
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

struct UGameEngine {
	float MaxDeltaTime; // 0xd20
	float ServerFlushLogInterval; // 0xd24
	UGameInstance* GameInstance; // 0xd28
};

struct UDestructibleComponent {
	char bFractureEffectOverride : 1; // 0x6a0
	TArray<FFractureEffect> FractureEffects; // 0x6a8
	bool bEnableHardSleeping; // 0x6b8
	float LargeChunkThreshold; // 0x6bc
	FMulticastInlineDelegate OnComponentFracture; // 0x6d0
};

struct UMovieSceneCameraShakeTrack {
	TArray<UMovieSceneSection*> CameraShakeSections; // 0x98
};

struct ANiagaraPreviewGrid {
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

struct UComboBoxString {
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

struct UInteractiveGizmo {
	UInputBehaviorSet* InputBehaviors; // 0x30
};

struct UParticleModuleLocationPrimitiveTriangle {
	FRawDistributionVector StartOffset; // 0x30
	FRawDistributionFloat Height; // 0x78
	FRawDistributionFloat Angle; // 0xa8
	FRawDistributionFloat Thickness; // 0xd8
};

struct AExitImpactEffects_C {
	USceneComponent* DefaultSceneRoot; // 0xcb0
};

struct UActivityFiniteStateMachine {
	TArray<UActivityState*> States; // 0x28
	UActivityState* ActiveState; // 0x38
};

struct UFMODBankLookup {
	UDataTable* DataTable; // 0x28
	FString MasterBankPath; // 0x30
	FString MasterAssetsBankPath; // 0x40
	FString MasterStringsBankPath; // 0x50
};

struct ULiveLinkSubjectSettings {
	TArray<ULiveLinkFramePreProcessor*> PreProcessors; // 0x28
	ULiveLinkFrameInterpolationProcessor* InterpolationProcessor; // 0x38
	TArray<ULiveLinkFrameTranslator*> Translators; // 0x40
	ULiveLinkRole* Role; // 0x50
	FFrameRate FrameRate; // 0x58
	bool bRebroadcastSubject; // 0x60
};

struct UMaterialExpressionComment {
	int32_t SizeX; // 0x40
	int32_t SizeY; // 0x44
	FString Text; // 0x48
	FLinearColor CommentColor; // 0x58
	int32_t FontSize; // 0x68
};

struct UGizmoUniformScaleParameterSource {
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

struct UMyPluginObject {
	FMyPluginStruct MyStruct; // 0x28
};

struct AUnmannedVehicle {
	APlayerCharacter* Pilot; // 0x288
	float Health; // 0x290
	bool bDead; // 0x294
	float MaxHealth; // 0x298
	FText VehicleTabletName; // 0x2a0
	AHUD* PreviousHUD; // 0x2b8
	AHUD* VehicleHUD; // 0x2c0
};

struct APointLight {
	UPointLightComponent* PointLightComponent; // 0x230
};

struct ULaserAttachment {
	UParticleSystemComponent* LaserParticleComponent; // 0xf98
	UParticleSystemComponent* LaserBeamEndComponent; // 0xfa0
	UParticleSystem* LaserParticle; // 0xfa8
	UParticleSystem* LaserBeamEnd; // 0xfb0
	FVector BeamEndHitLocation; // 0xfb8
	FVector BeamEndHitNormal; // 0xfc4
	float BeamDistance; // 0xfd0
	ALensFlare* LensFlareClass; // 0xfd8
	ALensFlare* SpawnedLensFlare; // 0xfe0
	bool bRequireNVG; // 0xfe8
	bool bLaserOffDueToNotBeingEquipped; // 0xfe9
};

struct ULevelVariantSets {
	UObject* DirectorClass; // 0x28
	TArray<UVariantSet*> VariantSets; // 0x30
};

struct UArrestTargetActivity {
	AReadyOrNotCharacter* ArrestTarget; // 0x1a8
	UInteractionsData* ArrestInteraction; // 0x1b0
};

struct ALadder {
	UBoxComponent* BoxCollision; // 0x220
	UStaticMeshComponent* LadderMesh; // 0x228
};

struct UParticleModuleColorOverLife {
	FRawDistributionVector ColorOverLife; // 0x30
	FRawDistributionFloat AlphaOverLife; // 0x78
	char bClampAlpha : 1; // 0xa8
};

struct USubUVAnimation {
	UTexture2D* SubUVTexture; // 0x28
	int32_t SubImages_Horizontal; // 0x30
	int32_t SubImages_Vertical; // 0x34
	ESubUVBoundingVertexCount BoundingMode; // 0x38
	EOpacitySourceMode OpacitySourceMode; // 0x39
	float AlphaThreshold; // 0x3c
};

struct UWidgetAnimationDelegateBinding {
	TArray<FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x28
};

struct USetControlRotationToCamBoneAnimNotify {
	FName CameraBoneName; // 0x38
};

struct UDataSingleton {
	ULookupData* LookupData; // 0x28
	bool bDrawBulletDebug; // 0x30
	bool bDrawNoNameplates; // 0x31
	TArray<FText> LoadingScreen_Tips; // 0x38
	FText YouKilledFormat; // 0x48
	TArray<FText> KillfeedFormatRandom; // 0x60
	TArray<FText> ArrestfeedFormatRandom; // 0x70
	TArray<FText> FreefeedFormatRandom; // 0x80
	TArray<FText> TeamkillfeedFormatRandom; // 0x90
	FText KillfeedWithA; // 0xa0
	bool bShowGrenadeDamage; // 0xb8
	TSoftObjectPtr<UItemData> ItemData; // 0xc0
	TSoftObjectPtr<UWidgetsData> WidgetData; // 0xe8
	TSoftObjectPtr<UPenetrationData> PenetrationData; // 0x110
	TSoftObjectPtr<UDataTable> ItemDataLookupTable; // 0x138
	TSoftObjectPtr<UDataTable> AIDataLookupTable; // 0x160
	TSoftObjectPtr<UDataTable> LevelDataLookupTable; // 0x188
	TSoftObjectPtr<UDataTable> AnimationDataLookupTable; // 0x1b0
	TSoftObjectPtr<UDataTable> AnimatedIconLookupTable; // 0x1d8
	TSoftObjectPtr<UDataTable> DoorDataLookupTable; // 0x200
	TSoftObjectPtr<UDataTable> TrapDataLookupTable; // 0x228
	TSoftObjectPtr<UDataTable> ConversationLookupTable; // 0x250
	TSoftObjectPtr<UDataTable> GameSettingsLookupTable; // 0x278
	TSoftObjectPtr<UDataTable> CharacterLookOverrideTable; // 0x2a0
	TSoftObjectPtr<UDataTable> RonInputKeyTable; // 0x2c8
	TMap<FString, TSoftObjectPtr<UDataTable>> SpeechDataLookupTable; // 0x2f0
	TSoftObjectPtr<UDataTable> WidgetDataLookupTable; // 0x340
	FName CustomizationCharacterLevel; // 0x368
	FName CustomizationMenuLevel; // 0x370
};

struct UWeaponWheelScript {
	FText ItemName; // 0x48
	FText ItemCategory; // 0x60
	UWeaponWheelWidget* WeaponWheelOwner; // 0x78
	APlayerCharacter* PlayerCharacter; // 0x80
};

struct APouch {
	USkeletalMeshComponent* MagazineComponent; // 0x2a8
	USceneComponent* AttachToComp; // 0x2b0
	FName AttachToSocket; // 0x2b8
	bool bShowMagazine; // 0x2c0
	FName MagazineSocket; // 0x2c4
	UAnimSequence* OpenPouch; // 0x2d0
	UAnimSequence* ClosePouch; // 0x2d8
};

struct UTextBlock {
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

struct UFoliageInstancedStaticMeshComponent {
	FMulticastInlineDelegate OnInstanceTakePointDamage; // 0x678
	FMulticastInlineDelegate OnInstanceTakeRadialDamage; // 0x688
	FGuid GenerationGuid; // 0x698
};

struct ASWATCharacter {
	AActor* LastSetBestFocus; // 0x2420
	APlayerCharacter* SquadLeader; // 0x2468
	float MaxGestureCooldownTime; // 0x2498
	float MinGestureCooldownTime; // 0x249c
};

struct UCameraAnimInst {
	UCameraAnim* CamAnim; // 0x28
	UInterpGroupInst* InterpGroupInst; // 0x30
	float PlayRate; // 0x50
	UInterpTrackMove* MoveTrack; // 0x68
	UInterpTrackInstMove* MoveInst; // 0x70
	ECameraShakePlaySpace PlaySpace; // 0x78
};

struct UDatasmithStaticMeshIFCImportData {
	FString SourceGlobalId; // 0x28
};

struct USlomoBarWidget {
	FMulticastInlineDelegate OnProgressBarStarted; // 0x278
	FMulticastInlineDelegate OnProgressBarFinished; // 0x288
	UWidgetAnimation* AnimIn; // 0x298
	UWidgetAnimation* AnimOut; // 0x2a0
	UWidgetAnimation* ProgressBar; // 0x2a8
	float Duration; // 0x2b0
};

struct UMaterialExpressionTextureSampleParameter {
	FName ParameterName; // 0x60
	FGuid ExpressionGUID; // 0x68
	FName Group; // 0x78
};

struct APopupTarget {
	USkeletalMeshComponent* Mesh; // 0x220
	int32_t MaxHealth; // 0x228
	float PopupTime; // 0x22c
	float Health; // 0x230
	bool bFallDown; // 0x240
};

struct UGridPathFollowingComponent {
	UNavLocalGridManager* GridManager; // 0x250
};

struct UGizmoAxisIntervalParameterSource {
	TScriptInterface<IGizmoFloatParameterSource> FloatParameterSource; // 0x48
	float MinParameter; // 0x58
	float MaxParameter; // 0x5c
};

struct ASkyAtmosphere {
	USkyAtmosphereComponent* SkyAtmosphereComponent; // 0x220
};

struct UANIMBP_Head_Shared_Master_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x2d8
	FAnimNode_PoseBlendNode AnimGraphNode_PoseBlendNode; // 0x4b0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x550
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x610
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x690
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x730
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x778
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x7a0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x8f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x9a8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_2; // 0xa28
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0xaf0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0xb70
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xbf0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xc70
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0xcf0
	FAnimNode_Root AnimGraphNode_Root; // 0xdb8
	FAnimNode_Slot AnimGraphNode_Slot; // 0xde8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xe30
	FAnimNode_LookAt AnimGraphNode_LookAt_3; // 0xe50
	FAnimNode_LookAt AnimGraphNode_LookAt_2; // 0x1000
	FAnimNode_LookAt AnimGraphNode_LookAt; // 0x11b0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1360
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x1380
	bool IsPlayerDead; // 0x1440
	EPlayerEmotion Emotion; // 0x1441
	float EmotionWeight; // 0x1444
	FRotator HeadLookRotation; // 0x1448
	float LookAtAlpha; // 0x1454
	FVector LookAtLocation; // 0x1458
};

struct AProjectile_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x398
	UFMODAudioComponent* FMOD_Ricochet_Sound; // 0x3a0
};

struct UW_COOPDeathScreen_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UW_Button_C* btn_Spectate; // 0x268
	UTextBlock* Loading; // 0x270
	FMulticastInlineDelegate OnSpectateButtonClicked; // 0x278
	int32_t AliveOfficers; // 0x288
	int32_t DeadOfficers; // 0x28c
};

struct UANIMBP_SuperShorty_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x308
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x350
};

struct UBaseBrushTool {
	UBrushBaseProperties* BrushProperties; // 0xc0
	bool bInBrushStroke; // 0xc8
	float WorldToLocalScale; // 0xcc
	FBrushStampData LastBrushStamp; // 0xd0
	TSoftClassPtr<UObject> PropertyClass; // 0x188
	UBrushStampIndicator* BrushStampIndicator; // 0x1b0
};

struct UParticleModuleAcceleration {
	FRawDistributionVector Acceleration; // 0x38
	char bApplyOwnerScale : 1; // 0x80
};

struct UW_PVP_Extraction_HUD_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_FadeIn; // 0x268
	UTextBlock* CountdownText; // 0x270
	UTextBlock* Message_Text; // 0x278
	UImage* Ribbon_Image; // 0x280
	float TimeRemaining; // 0x288
	float MaxTime; // 0x28c
};

struct UZeuzMatchmakingWidget {
	EMatchmakingStatus MatchmakingStatus; // 0x2a8
	FZeuzMatchMakingStatus ZeuzMatchMakingStatus; // 0x2b0
};

struct ABP_MenuGameMode_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x330
	USceneComponent* DefaultSceneRoot; // 0x338
	int32_t RandomMapInt; // 0x340
	UObject* ConnectingWidget; // 0x348
};

struct UTeamProgressScoreWidget {
	ETeamType Team; // 0x278
	UProgressBar* ProgressBar_LeftAligned; // 0x280
	UTextBlock* Score_Text_LeftAligned; // 0x288
	UProgressBar* ProgressBar_RightAligned; // 0x290
	UTextBlock* Score_Text_RightAligned; // 0x298
};

struct ANeutralizeSuspectByTag {
	FName SuspectTag; // 0x278
	bool bRequireArrest; // 0x280
	bool bAllowIncapacitation; // 0x281
};

struct UMaterialInstance {
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
	TArray<UObject*> CachedReferencedTextures; // 0x2d8
};

struct USourceEffectPannerPreset {
	FSourceEffectPannerSettings Settings; // 0x98
};

struct UObjectLibrary {
	UObject* ObjectBaseClass; // 0x28
	bool bHasBlueprintClasses; // 0x30
	TArray<UObject*> Objects; // 0x38
	TArray<TWeakObjectPtr<UObject>> WeakObjects; // 0x48
	bool bUseWeakReferences; // 0x58
	bool bIsFullyLoaded; // 0x59
};

struct UMaterialExpressionSaturate {
	FExpressionInput Input; // 0x40
};

struct UWidgetBlueprintGeneratedClass {
	UWidgetTree* WidgetTree; // 0x328
	char bClassRequiresNativeTick : 1; // 0x330
	TArray<FDelegateRuntimeBinding> Bindings; // 0x338
	TArray<UWidgetAnimation*> Animations; // 0x348
	TArray<FName> NamedSlots; // 0x358
};

struct ULevelSequenceProjectSettings {
	bool bDefaultLockEngineToDisplayRate; // 0x38
	FString DefaultDisplayRate; // 0x40
	FString DefaultTickResolution; // 0x50
	EUpdateClockSource DefaultClockSource; // 0x60
};

struct UGameUserSettings {
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

struct UEnvQueryTest_GameplayTags {
	FGameplayTagQuery TagQueryToMatch; // 0x1f8
	bool bUpdatedToUseQuery; // 0x240
	EGameplayContainerMatchType TagsToMatch; // 0x241
	FGameplayTagContainer GameplayTags; // 0x248
};

struct UVariantObjectBinding {
	FString CachedActorLabel; // 0x28
	FSoftObjectPath ObjectPtr; // 0x38
	LazyObjectProperty LazyObjectPtr; // 0x50
	TArray<UPropertyValue*> CapturedProperties; // 0x70
	TArray<FFunctionCaller> FunctionCallers; // 0x80
};

struct UARPlaneGeometry {
	EARPlaneOrientation Orientation; // 0xf8
	FVector Center; // 0xfc
	FVector Extent; // 0x108
	TArray<FVector> BoundaryPolygon; // 0x118
	UARPlaneGeometry* SubsumedBy; // 0x128
};

struct UAutoDestroySubsystem {
	TArray<AActor*> ActorsToPoll; // 0x40
};

struct UEnvQueryGenerator_OnCircle {
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

struct UMaterialExpressionSphericalParticleOpacity {
	FExpressionInput Density; // 0x40
	float ConstantDensity; // 0x54
};

struct UParticleModuleMeshRotationRateOverLife {
	FRawDistributionVector RotRate; // 0x30
	char bScaleRotRate : 1; // 0x78
};

struct UPawnNoiseEmitterComponent {
	char bAIPerceptionSystemCompatibilityMode : 1; // 0xb0
	FVector LastRemoteNoisePosition; // 0xb4
	float NoiseLifetime; // 0xc0
	float LastRemoteNoiseVolume; // 0xc4
	float LastRemoteNoiseTime; // 0xc8
	float LastLocalNoiseVolume; // 0xcc
	float LastLocalNoiseTime; // 0xd0
};

struct AReferendum {
	FText ReferendumName; // 0x220
	FText ReferendumDescription; // 0x238
	float ReferendumTime; // 0x250
	float ReferendumHoldingTime; // 0x254
	int32_t YesVotes; // 0x258
	int32_t NoVotes; // 0x25c
	float ReferendumTimeRemaining; // 0x260
	float ReferendumHoldingTimeRemaining; // 0x264
	bool bReferendumRunning; // 0x268
	bool bReferendumWaitingToTakeEffect; // 0x269
	AReadyOrNotPlayerState* ReferendumCaller; // 0x270
	TArray<AReadyOrNotPlayerController*> YesVoters; // 0x278
	TArray<AReadyOrNotPlayerController*> NoVoters; // 0x288
	TArray<AReadyOrNotPlayerController*> EligibleVoters; // 0x298
};

struct UFieldSystemMetaDataProcessingResolution {
	EFieldResolutionType ResolutionType; // 0xb0
};

struct UTileView {
	float EntryHeight; // 0x368
	float EntryWidth; // 0x36c
	EListItemAlignment TileAlignment; // 0x370
	bool bWrapHorizontalNavigation; // 0x371
};

struct APairedInteractionDriver {
	UInteractionsData* InteractionData; // 0x220
	AActor* Driver; // 0x228
	AActor* Slave; // 0x230
	ABaseItem* OptionalItem; // 0x238
};

struct ATrapActivatee {
	bool bDisarmed; // 0x220
};

struct USkeletalMeshSimulationComponent {
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

struct ABP_ClueFlare_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UParticleSystemComponent* ParticleSystem; // 0x228
	USceneComponent* DefaultSceneRoot; // 0x230
	FVector Timeline_0_ActorScale_3ED612744AC2F4DC5419BE9C0B125823; // 0x238
	FVector Timeline_0_DeltaLocation_3ED612744AC2F4DC5419BE9C0B125823; // 0x244
	float Timeline_0_FlareIntensity_3ED612744AC2F4DC5419BE9C0B125823; // 0x250
	ETimelineDirection Timeline_0__Direction_3ED612744AC2F4DC5419BE9C0B125823; // 0x254
	UTimelineComponent* Timeline_1; // 0x258
	UMaterialInstanceDynamic* MID_FlareLight; // 0x260
	UFMODEvent* FlareFireSound; // 0x268
};

struct UNavArea {
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

struct UANIMBP_SR16_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x308
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x460
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x4a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x548
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x5c8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x648
	FAnimNode_Slot AnimGraphNode_Slot; // 0x708
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x750
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x778
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x7a0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x8a8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x8c8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x9d0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x9f0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xaf8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xc00
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xc20
	float Mag01Alpha; // 0xc40
	bool bIsSemi; // 0xc44
	float ScopeAdjustAlpha; // 0xc48
};

struct UW_PersonalizationWidget_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UW_PersonalizationCategory_C* ApplyPersonalization; // 0x270
	UUniformGridPanel* BodyGrid; // 0x278
	UW_PersonalizationCategory_C* CancelPersonalization; // 0x280
	UCanvasPanel* CanvasPanel_Main; // 0x288
	UScrollBox* Customization_ScrollBox; // 0x290
	UVerticalBox* CustomizationBodyCntainer; // 0x298
	UVerticalBox* CustomizationHeadContainer; // 0x2a0
	UW_PageHeader_C* Header; // 0x2a8
	UUniformGridPanel* HeadGrid; // 0x2b0
	UW_PersonalizationCategory_C* W_BodyCategory; // 0x2b8
	UW_PersonalizationCategory_C* W_HeadCategory; // 0x2c0
	UButton* WidgetFocusButton; // 0x2c8
	int32_t NumOfColumns; // 0x2d0
	FName SelectedHead; // 0x2d4
	FName SelectedBody; // 0x2dc
	TArray<UW_PersonalizationItem_C*> BodiesWidgets; // 0x2e8
	TArray<UW_PersonalizationItem_C*> HeadsWidgets; // 0x2f8
};

struct UCompositionGraphCaptureProtocol {
	FCompositionGraphCapturePasses IncludeRenderPasses; // 0x58
	bool bCaptureFramesInHDR; // 0x68
	int32_t HDRCompressionQuality; // 0x6c
	EHDRCaptureGamut CaptureGamut; // 0x70
	FSoftObjectPath PostProcessingMaterial; // 0x78
	bool bDisableScreenPercentage; // 0x90
	UMaterialInterface* PostProcessingMaterialPtr; // 0x98
};

struct UPreMissionPlanning {
	bool bIsWeaponCustomization; // 0x278
	ABaseItem* CustomizeItemClass; // 0x280
	ULevelStreaming* PreMissionStreamedLevel; // 0x288
	UFMODEvent* LoadoutMusic; // 0x290
	AReadyOrNotPlayerState* PreviewPlayerState; // 0x2a8
	EEquippingSwat EquippingSwatMember; // 0x2b2
	TMap<EEquippingSwat, FSavedLoadout> LastSavedLoadout; // 0x2b8
	bool bLoadedLoadout; // 0x360
	FSavedLoadout ActiveLoadout; // 0x368
	TMap<ABaseItem*, FSavedWeaponPreset> WeaponToWeaponPresetsMap; // 0x4a0
	TMap<ABaseItem*, FSavedWeaponAttachmentData> WeaponToAttachmentsMap; // 0x4f0
	TMap<ABaseWeapon*, EFireMode> WeaponClassToDefaultFireModeMap; // 0x540
	FMulticastInlineDelegate OnRequestRefresh; // 0x5a0
	TSoftClassPtr<UObject> RedTeamClass; // 0x5b8
	TSoftClassPtr<UObject> BlueTeamClass; // 0x5e0
	TSoftClassPtr<UObject> VIPClass; // 0x608
	TMap<APlayerCharacter*, AReadyOrNotPlayerState*> PlayerStatePreviewMap; // 0x638
	TMap<FName, ABaseItem*> WorkBenchItemPtrMap; // 0x760
	EItemType LastSetItemType; // 0x7b0
	EItemClass LastSetItemClass; // 0x7b1
	ABaseItem* LastSetItemObjectClass; // 0x7b8
	bool bCanUpdateWithUI; // 0x7c1
};

struct UEdGraphPin_Deprecated {
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

struct UMaterialBillboardComponent {
	TArray<FMaterialSpriteElement> Elements; // 0x450
};

struct UMaterialExpressionMaterialAttributeLayers {
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

struct USpotLightComponent {
	float InnerConeAngle; // 0x358
	float OuterConeAngle; // 0x35c
};

struct ULuminRuntimeSettings {
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

struct UFindTurnBasedMatchCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UBlackboardKeyType_Enum {
	UEnum* EnumType; // 0x30
	FString EnumName; // 0x38
	char bIsEnumNameValid : 1; // 0x48
};

struct ABandwidthTestActor {
	FBandwidthTestGenerator BandwidthGenerator; // 0x220
};

struct UPointLightComponent {
	char bUseInverseSquaredFalloff : 1; // 0x340
	float LightFalloffExponent; // 0x344
	float SourceRadius; // 0x348
	float SoftSourceRadius; // 0x34c
	float SourceLength; // 0x350
};

struct UMaterialExpressionDynamicParameter {
	TArray<FString> ParamNames; // 0x40
	FLinearColor DefaultValue; // 0x50
	uint32_t ParameterIndex; // 0x60
};

struct USoundClass {
	FSoundClassProperties Properties; // 0x28
	TArray<USoundClass*> ChildClasses; // 0xa0
	TArray<FPassiveSoundMixModifier> PassiveSoundMixModifiers; // 0xb0
	USoundClass* ParentClass; // 0xc0
};

struct UW_MagazineAmmoCheck_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* MagAmmoCount; // 0x268
};

struct UW_Briefing_Dossier_Rapsheet_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image_24; // 0x268
	UW_Text_C* lbl_Code; // 0x270
	UW_Text_C* lbl_Rapsheet; // 0x278
	UVerticalBox* VB_RapsheetEntries; // 0x280
	TArray<FCriminalRecord> RapSheet; // 0x288
	FST_Character_RapSheet DebugRapsheet; // 0x298
	TArray<FCriminalRecord> CriminalRecord; // 0x2a8
};

struct UCanvas {
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

struct APreviewCharacterTemplate_C {
	USkeletalMeshComponent* NODs; // 0x220
	USkeletalMeshComponent* Goggles; // 0x228
	USkeletalMeshComponent* FShield; // 0x230
	USkeletalMeshComponent* Gasmask; // 0x238
	USkeletalMeshComponent* PistolMesh; // 0x240
	UPhysicsHandleComponent* PhysicsHandle; // 0x248
	USkeletalMeshComponent* BodyExtraMesh; // 0x250
	USkeletalMeshComponent* HeadMesh; // 0x258
	UStaticMeshComponent* ItemMagMesh; // 0x260
	USkeletalMeshComponent* ItemMesh; // 0x268
	USkeletalMeshComponent* BodyMesh; // 0x270
	USceneComponent* DefaultSceneRoot; // 0x278
	UPoseAsset* FaceROMReference; // 0x280
	UAnimSequence* PreviewSequence; // 0x288
	UAnimSequence* FacePreviewSequence; // 0x290
};

struct UAudioBus {
	EAudioBusChannels AudioBusChannels; // 0x28
};

struct UGameplayTagsManager {
	TMap<FName, FGameplayTagSource> TagSources; // 0x160
	TArray<UDataTable*> GameplayTagTables; // 0x230
};

struct UComboBoxWidgetStyle {
	FComboBoxStyle ComboBoxStyle; // 0x30
};

struct APrecomputedVisibilityOverrideVolume {
	TArray<AActor*> OverrideVisibleActors; // 0x258
	TArray<AActor*> OverrideInvisibleActors; // 0x268
	TArray<FName> OverrideInvisibleLevels; // 0x278
};

struct UPlayerDetailsWidget {
	AReadyOrNotPlayerState* PlayerState; // 0x260
	APlayerCharacter* PlayerCharacter; // 0x268
};

struct UCompositeCameraShakePattern {
	TArray<UCameraShakePattern*> ChildPatterns; // 0x28
};

struct UMaterialExpressionMaterialFunctionCall {
	UMaterialFunctionInterface* MaterialFunction; // 0x40
	FMaterialParameterInfo FunctionParameterInfo; // 0x48
};

struct UParticleModuleRequired {
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

struct UImage {
	FSlateBrush Brush; // 0x108
	FDelegate BrushDelegate; // 0x190
	FLinearColor ColorAndOpacity; // 0x1a0
	FDelegate ColorAndOpacityDelegate; // 0x1b0
	bool bFlipForRightToLeftFlowDirection; // 0x1c0
	FDelegate OnMouseButtonDownEvent; // 0x1c4
};

struct UElevatorButtonComponent {
	bool bOverrideButtonPromptText; // 0x4f0
	FText ButtonPromptText; // 0x4f8
	AElevator* OwningElevator; // 0x510
	bool bDoorButton; // 0x518
	bool bDoorClose; // 0x519
	int32_t Floor; // 0x51c
};

struct ABallisticsShield {
	UMaterialInstanceDynamic* GlassMaterialInstance; // 0x8f8
	ABaseMagazineWeapon* PistolEquippedWithShield; // 0x900
	UFMODEvent* ShieldHitEvent; // 0x910
	UAnimMontage* ReloadAnim_1P; // 0x918
	UAnimMontage* ReloadAnimEmpty_1P; // 0x920
	UAnimMontage* ReloadAnim_3P; // 0x928
	int32_t Damage; // 0x930
	bool bLowered; // 0x936
	UMatineeCameraShake* ShieldHitCameraShake; // 0x938
};

struct UWrapBoxSlot {
	FMargin Padding; // 0x38
	bool bFillEmptySpace; // 0x48
	float FillSpanWhenLessThan; // 0x4c
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct USoundfieldSubmix {
	FName SoundfieldEncodingFormat; // 0x40
	USoundfieldEncodingSettingsBase* EncodingSettings; // 0x48
	TArray<USoundfieldEffectBase*> SoundfieldEffectChain; // 0x50
	USoundfieldEncodingSettingsBase* EncodingSettingsClass; // 0x60
};

struct UConstantQNRTSettings {
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

struct UW_StandardRadioButton_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x570
	UW_RadioContainer_C* ParentContainer; // 0x578
	int32_t TabControlIndex; // 0x580
};

struct UW_MissionEnd_RatingScoreEntry_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Reveal; // 0x268
	UImage* img_PenaltyBG; // 0x270
	UImage* img_ScoreBG; // 0x278
	UW_Text_C* txt_PenaltyCount; // 0x280
	UW_Text_C* txt_PenaltyName; // 0x288
	UW_Text_C* txt_PenaltyValue; // 0x290
	UW_Text_C* txt_ScoreCount; // 0x298
	UW_Text_C* txt_ScoreName; // 0x2a0
	UW_Text_C* txt_ScoreValue; // 0x2a8
	UWidgetSwitcher* WidgetSwitcher_1; // 0x2b0
	FText Name; // 0x2b8
	int32_t Count; // 0x2d0
	int32_t Total; // 0x2d4
	int32_t Score; // 0x2d8
	FMulticastInlineDelegate ScoreEntryReady; // 0x2e0
	bool Penalty; // 0x2f0
	UFMODEvent* scoreSound; // 0x2f8
	UFMODEvent* penaltySound; // 0x300
	UFMODEvent* scoreNumberSound; // 0x308
};

struct UDistributionFloatConstantCurve {
	FInterpCurveFloat ConstantCurve; // 0x38
};

struct UTestMovieSceneSequence {
	UMovieScene* MovieScene; // 0x60
};

struct UPlatformInterfaceBase {
	TArray<FDelegateArray> AllDelegates; // 0x28
};

struct UBTDecorator_TimeLimit {
	float Timelimit; // 0x68
};

struct AGeometryCollectionRenderLevelSetActor {
	UVolumeTexture* TargetVolumeTexture; // 0x220
	UMaterial* RayMarchMaterial; // 0x228
	float SurfaceTolerance; // 0x230
	float Isovalue; // 0x234
	bool Enabled; // 0x238
	bool RenderVolumeBoundingBox; // 0x239
};

struct UInGameLogSubsystem {
	FMulticastInlineDelegate OnLogMessageEnqueued; // 0x30
	FMulticastInlineDelegate OnLogMessageDequeued; // 0x40
};

struct UMaterialExpressionDDX {
	FExpressionInput Value; // 0x40
};

struct UARTrackedImage {
	UARCandidateImage* DetectedImage; // 0xf8
	FVector2D EstimatedSize; // 0x100
};

struct AChaosSolverActor {
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

struct UParticleModule {
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

struct USceneCaptureComponent2D {
	ECameraProjectionMode ProjectionType; // 0x2b0
	float FOVAngle; // 0x2b4
	float OrthoWidth; // 0x2b8
	UTextureRenderTarget2D* TextureTarget; // 0x2c0
	ESceneCaptureCompositeMode CompositeMode; // 0x2c8
	FPostProcessSettings PostProcessSettings; // 0x2d0
	float PostProcessBlendWeight; // 0x830
	char bOverride_CustomNearClippingPlane : 1; // 0x834
	float CustomNearClippingPlane; // 0x838
	bool bUseCustomProjectionMatrix; // 0x83c
	FMatrix CustomProjectionMatrix; // 0x840
	bool bEnableClipPlane; // 0x880
	FVector ClipPlaneBase; // 0x884
	FVector ClipPlaneNormal; // 0x890
	char bCameraCutThisFrame : 1; // 0x89c
	char bConsiderUnrenderedOpaquePixelAsFullyTranslucent : 1; // 0x89c
	bool bDisableFlipCopyGLES; // 0x8a0
};

struct AMaterialInstanceActor {
	TArray<AActor*> TargetActors; // 0x220
};

struct UBodySetupCore {
	FName BoneName; // 0x28
	EPhysicsType PhysicsType; // 0x30
	ECollisionTraceFlag CollisionTraceFlag; // 0x31
	EBodyCollisionResponse CollisionReponse; // 0x32
};

struct UMaterialExpressionTextureCoordinate {
	int32_t CoordinateIndex; // 0x40
	float UTiling; // 0x44
	float VTiling; // 0x48
	char UnMirrorU : 1; // 0x4c
	char UnMirrorV : 1; // 0x4c
};

struct UFootstepFoleyComponent {
	UFMODEvent* SetEventTo; // 0x478
	UFMODEvent* SetEventToRemote; // 0x480
	bool bPlayOnPlayer; // 0x488
	bool bPlayEveryStep; // 0x489
};

struct UAnimSharingInstance {
	TArray<AActor*> RegisteredActors; // 0x28
	UAnimationSharingStateProcessor* StateProcessor; // 0x88
	TArray<UAnimSequence*> UsedAnimationSequences; // 0xc8
	UEnum* StateEnum; // 0xe8
	AActor* SharingActor; // 0xf0
};

struct AMagicLeapARPinInfoActorBase {
	FGuid PinId; // 0x220
	bool bVisibilityOverride; // 0x230
};

struct ABP_LensFlare_FlareGun_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UMaterialBillboardComponent* LensFlare; // 0x228
	USceneComponent* Scene; // 0x230
	float DeltaTime; // 0x238
	UMaterialInstanceDynamic* FlareDynamicMI; // 0x240
	UMaterialInterface* FlareMat; // 0x248
	float GlobalBrightness; // 0x250
	float GhostsBrightness; // 0x254
	bool UseFadeDistance; // 0x258
	float FadeDistance; // 0x25c
	bool UseDistanceBloom; // 0x260
	float IncreasingBloomByDistance; // 0x264
	FLinearColor GlobalColor; // 0x268
	float FadeOutSpeed; // 0x278
	float FadeInSpeed; // 0x27c
	float BaseSizeY; // 0x280
	float BaseSizeX; // 0x284
	float FlickerIntensity; // 0x288
	float FlickerTime; // 0x28c
	float Luminosity; // 0x290
	TArray<AActor*> Actors for ignore lens flare ; // 0x298
	float HaloBrightness; // 0x2a8
	float HaloContrast; // 0x2ac
	float HaloOpacity; // 0x2b0
	float HaloInnerRadius; // 0x2b4
	FLinearColor HaloOuterColor; // 0x2b8
	FLinearColor HaloInnerColor; // 0x2c8
	UTexture* HaloTexture; // 0x2d8
	float CentreFlareBrightness; // 0x2e0
	float CentreFlareContrast; // 0x2e4
	FLinearColor CentreFlareColor; // 0x2e8
	UTexture* CentreFlareTexture; // 0x2f8
	float MainFlareBrightness; // 0x300
	float MainFlareContrast; // 0x304
	float MainFlareInnerRadius; // 0x308
	float MainFlareSize; // 0x30c
	FLinearColor MainLensInnerColor; // 0x310
	FLinearColor MainOuterColor; // 0x320
	UTexture* MainFlare; // 0x330
	float HaloTextureSize; // 0x338
	float CentreFlareSize; // 0x33c
	float ReflectionBrightness; // 0x340
	float ReflectionContrast; // 0x344
	FLinearColor ReflectionColor; // 0x348
	UTexture* ReflectionCentreTexture; // 0x358
	float ReflectionSize; // 0x360
	float FlareOpposite1_Brightness; // 0x364
	float FlareOpposite1_Contrast; // 0x368
	float FlareOppositeSize01; // 0x36c
	FLinearColor FlareOppositeColor01; // 0x370
	UTexture* FlareOpposite01; // 0x380
	float FlareOpposite2_Brightness; // 0x388
	float FlareOpposite2_Contrast; // 0x38c
	float FlareOppositeSize02; // 0x390
	UTexture* FlareOpposite02; // 0x398
	FLinearColor FlareOppositeColor02; // 0x3a0
	float OppositeFlaresAxisProjection; // 0x3b0
	float FlareFrontBrightness01; // 0x3b4
	float FlareFrontContrast01; // 0x3b8
	float FlareFrontSize01; // 0x3bc
	float FlareFrontProximityCentre01; // 0x3c0
	FLinearColor FlareFrontColor01; // 0x3c4
	UTexture* FlareFront01; // 0x3d8
	float FlareFrontBrightness02; // 0x3e0
	float FlareFrontContrast02; // 0x3e4
	float FlareFrontSize02; // 0x3e8
	float FlareFrontProximityCentre02; // 0x3ec
	FLinearColor FlareFrontColor02; // 0x3f0
	UTexture* FlareFront02; // 0x400
	float FrontFlaresAxisProjection; // 0x408
	float ReflectedFlareBrightness01; // 0x40c
	float ReflectedFlareContrast01; // 0x410
	float ReflectedFlareSize01; // 0x414
	float ReflectedFlareProximityCentre01; // 0x418
	FLinearColor ReflectedFlareColor01; // 0x41c
	UTexture* ReflectedFlare01; // 0x430
	float ReflectedFlareBrightness02; // 0x438
	float ReflectedFlareContrast02; // 0x43c
	float ReflectedFlareSize02; // 0x440
	float ReflectedFlareProximityCentre02; // 0x444
	FLinearColor ReflectedFlareColor02; // 0x448
	UTexture* ReflectedFlare02; // 0x458
	float MinorFlareBrightness01; // 0x460
	float MinorFlareContrast01; // 0x464
	float MinorFlareSize01; // 0x468
	float MinorFlareSizeRandom01; // 0x46c
	float MinorFlareProximityCentre01; // 0x470
	FLinearColor MinorFlareColor01; // 0x474
	UTexture* MinorFlare01; // 0x488
	float MinorFlareBrightness02; // 0x490
	float MinorFlareContrast02; // 0x494
	float MinorFlareSize02; // 0x498
	float MinorFlareSizeRandom02; // 0x49c
	float MinorFlareProximityCentre02; // 0x4a0
	FLinearColor MinorFlareColor02; // 0x4a4
	UTexture* MinorFlare02; // 0x4b8
	float AdditionalFlareBrightness; // 0x4c0
	float AdditionalFlareContrast; // 0x4c4
	float AdditionalFlareSize; // 0x4c8
	FLinearColor AdditionalFlareColor; // 0x4cc
	UTexture* AdditionalFlare; // 0x4e0
	float IrisBrightness; // 0x4e8
	float IrisContrast; // 0x4ec
	float IrisSize; // 0x4f0
	float IrisProximityCentre; // 0x4f4
	FLinearColor IrisColor; // 0x4f8
	UTexture* Iris; // 0x508
	UMaterialInstanceDynamic* DMI_LensFlare; // 0x510
};

struct UAnimNotify_PlayPostProcessEffect {
	FName PostProcessEffectName; // 0x38
};

struct ABP_MenuController_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x928
	UObject* UI_PartyPanel; // 0x930
	UUserWidget* ReplaySystemWidget; // 0x938
};

struct AMatineeActor {
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

struct UAISenseEvent_Hearing {
	FAINoiseEvent Event; // 0x28
};

struct URuntimeVirtualTexture {
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

struct UANIMBP_G36C_V2_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x308
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x328
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x430
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x538
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x640
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x660
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x720
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x768
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x790
	FAnimNode_Slot AnimGraphNode_Slot; // 0x7b8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x800
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x8a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x9f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xa78
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xaf8
	bool bIsSemi; // 0xc00
	float Mag01Alpha; // 0xc04
	float ScopeAdjustAlpha; // 0xc08
};

struct UBaseRadialMenuScript {
	UTexture2D* RadialMenuIcon; // 0x28
	URadialWidgetBase* RadialMenuOwner; // 0x30
	AActor* Actor; // 0x38
	UWorld* World; // 0x40
};

struct UBasicOverlays {
	TArray<FOverlayItem> Overlays; // 0x28
};

struct UAnimNotify_PlaySound {
	USoundBase* Sound; // 0x38
	float VolumeMultiplier; // 0x40
	float PitchMultiplier; // 0x44
	char bFollow : 1; // 0x48
	FName AttachName; // 0x4c
};

struct UReadyOrNotPathFollowingComp {
	ADoor* LastUsedDoorLink; // 0x2a0
	UNavLinkCustomComponent* LastUsedDoorLinkComp; // 0x2a8
	TMap<ADoor*, FAIRequestID> MoveRequestId; // 0x2d8
};

struct UGeometryCacheComponent {
	UGeometryCache* GeometryCache; // 0x478
	bool bRunning; // 0x480
	bool bLooping; // 0x481
	bool bExtrapolateFrames; // 0x482
	float StartTimeOffset; // 0x484
	float PlaybackSpeed; // 0x488
	float MotionVectorScale; // 0x48c
	int32_t NumTracks; // 0x490
	float ElapsedTime; // 0x494
	float Duration; // 0x4cc
	bool bManualTick; // 0x4d0
};

struct UPaperTileLayer {
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

struct UDatasmithAssetUserData {
	TMap<FName, FString> MetaData; // 0x28
};

struct ASWATManager {
	TArray<AReadyOrNotCharacter*> TaggedCharacters; // 0x228
	TMap<FString, float> SpeechCooldownMap; // 0x240
	TArray<FVector> TrackedSquadLeaderLocations; // 0x290
	TArray<ASWATCharacter*> SwatAI; // 0x2a0
	TArray<ACommandDecal*> CommandDecals; // 0x2b0
	TArray<AActor*> ActorsToIgnoreForCommandMarking; // 0x2c0
	TArray<ASWATCharacter*> AllSpawnedSWAT; // 0x2d0
	AReadyOrNotCharacter* LeadCharacter; // 0x330
	TArray<AActor*> PotentialFocusActors; // 0x338
	TArray<AAICharacter*> KnownEnemies; // 0x348
	TArray<AClearPoint*> PotentialClearPoints; // 0x358
	TArray<AAICharacter*> HasEverSeenList; // 0x368
	AReadyOrNotCharacter* SquadLeader; // 0x378
	TArray<AReadyOrNotCharacter*> FocusedTargets; // 0x388
	TArray<AReadyOrNotCharacter*> ChaseTargets; // 0x398
	TArray<FSWATRequestOrder> RequestOrders; // 0x3a8
	TMap<ETeamType, FQueuedSwatCommand> QueuedSwatCommandMap; // 0x3b8
	ESwatCommand CurrentDefaultCommand; // 0x40c
	ESwatCommandPriority SwatCommandPriority; // 0x40d
	ETeamType ActiveCommandTeam; // 0x40e
};

struct AGS_GunGame_C {
	USceneComponent* DefaultSceneRoot; // 0x6c0
};

struct AFieldSystemActor {
	UFieldSystemComponent* FieldSystemComponent; // 0x220
};

struct UNiagaraPreviewAxis_InterpParamVector2D {
	FVector2D Min; // 0x38
	FVector2D Max; // 0x40
};

struct APlayerReferendum {
	AReadyOrNotPlayerState* TargetPlayerState; // 0x2a8
};

struct UParticleModuleSizeMultiplyLife {
	FRawDistributionVector LifeMultiplier; // 0x30
	char MultiplyX : 1; // 0x78
	char MultiplyY : 1; // 0x78
	char MultiplyZ : 1; // 0x78
};

struct UW_FireModes_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_FadeOut; // 0x268
	UW_FireMode_C* FireMode_Auto; // 0x270
	UW_FireMode_C* FireMode_Burst; // 0x278
	UW_FireMode_C* FireMode_Safe; // 0x280
	UW_FireMode_C* FireMode_Single; // 0x288
	UWidgetSwitcher* FireMode_StyleSwitcher; // 0x290
	UTextBlock* FireMode_Text; // 0x298
	UVerticalBox* FireModeStates_Container; // 0x2a0
	EFireMode CurrentFireMode; // 0x2a8
	float FadeOutTime; // 0x2ac
	FTimerHandle TH_FadeOut; // 0x2b0
};

struct UMaterialExpressionQualitySwitch {
	FExpressionInput Default; // 0x40
	FExpressionInput Inputs[0x4]; // 0x54
};

struct AImpactEffects_Pistol_C {
	USceneComponent* DefaultSceneRoot; // 0xcb0
};

struct AAmbientSound {
	UAudioComponent* AudioComponent; // 0x220
};

struct ULevelSequenceBurnIn {
	FLevelSequencePlayerSnapshot FrameInformation; // 0x260
	ALevelSequenceActor* LevelSequenceActor; // 0x318
};

struct APostProcessVolume {
	FPostProcessSettings Settings; // 0x260
	float Priority; // 0x7c0
	float BlendRadius; // 0x7c4
	float BlendWeight; // 0x7c8
	char bEnabled : 1; // 0x7cc
	char bUnbound : 1; // 0x7cc
};

struct UInterpTrackInstMove {
	FVector ResetLocation; // 0x28
	FRotator ResetRotation; // 0x34
};

struct UCollisionProfile {
	TArray<FCollisionResponseTemplate> Profiles; // 0x38
	TArray<FCustomChannelSetup> DefaultChannelResponses; // 0x48
	TArray<FCustomProfile> EditProfiles; // 0x58
	TArray<FRedirector> ProfileRedirects; // 0x68
	TArray<FRedirector> CollisionChannelRedirects; // 0x78
};

struct UW_MissionEnd_NextMap_Timer_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UW_Text_C* lbl_NextMapIn; // 0x268
	UW_Text_C* txt_Time; // 0x270
	float Time; // 0x278
};

struct UARGeoAnchorComponent {
	FARGeoAnchorUpdatePayload ReplicatedPayload; // 0x280
};

struct UInterpGroupInst {
	UInterpGroup* Group; // 0x28
	AActor* GroupActor; // 0x30
	TArray<UInterpTrackInst*> TrackInst; // 0x38
};

struct UParticleModuleBeamTarget {
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

struct UDoorBreachActivity {
	FVector OriginalLocation; // 0x1c8
};

struct USequenceCameraShakeSequencePlayer {
	UObject* BoundObjectOverride; // 0x2d0
	UMovieSceneSequence* Sequence; // 0x2d8
	FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x2e0
};

struct UNavigationQueryFilter {
	TArray<FNavigationFilterArea> Areas; // 0x28
	FNavigationFilterFlags IncludeFlags; // 0x38
	FNavigationFilterFlags ExcludeFlags; // 0x3c
};

struct UNiagaraDataInterfaceArrayFloat {
	TArray<float> FloatData; // 0x50
};

struct AMagicLeapSharedWorldGameState {
	FMagicLeapSharedWorldSharedData SharedWorldData; // 0x290
	FMagicLeapSharedWorldAlignmentTransforms AlignmentTransforms; // 0x2a0
	FMulticastInlineDelegate OnSharedWorldDataUpdated; // 0x2b0
	FMulticastInlineDelegate OnAlignmentTransformsUpdated; // 0x2c0
};

struct UCursor_ClosedHand_C {
	UImage* Mouse; // 0x260
};

struct UBTService_BlackboardBase {
	FBlackboardKeySelector BlackboardKey; // 0x70
};

struct USpacer {
	FVector2D Size; // 0x108
};

struct ATeamDeathmatchGM {
	bool bSuddenDeath; // 0x6d8
	UFMODEvent* MatchLoopMusic; // 0x6e0
	UFMODEvent* MatchStartMusic; // 0x6e8
	UFMODEvent* MatchEndMusic; // 0x6f0
};

struct AMapReferendum {
	FString MapURL; // 0x2a8
};

struct UButtonSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct USpinBox {
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

struct UW_BugReporterMenu_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UW_Button_C* btn_Cancel; // 0x268
	UW_Button_C* btn_Submit; // 0x270
	UW_StandardCombobox_New_C* BugCategory; // 0x278
	UMultiLineEditableTextBox* BugDescriptionText; // 0x280
	UMultiLineEditableTextBox* BugSummaryText; // 0x288
	UW_Text_C* lbl_Category; // 0x290
	UW_Text_C* lbl_Description; // 0x298
	UW_Text_C* lbl_Subject; // 0x2a0
	UW_Text_C* lbl_Title; // 0x2a8
};

struct UParticleModuleBeamSource {
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

struct USlateSettings {
	bool bExplicitCanvasChildZOrder; // 0x28
};

struct UAutomationTestSettings {
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

struct UParticleModuleMeshRotationRate {
	FRawDistributionVector StartRotationRate; // 0x30
};

struct UMotivityAnimInstance {
	FTrajectoryData CurrentCharacterInput; // 0x2b8
	int32_t CurrentMoveStyleIndex; // 0x2c8
	int32_t CurrentGaitIndex; // 0x2cc
	bool bHasMovementInput; // 0x2d0
	FName CurrentMotivityTag; // 0x2d4
};

struct AWheeledVehicle {
	USkeletalMeshComponent* Mesh; // 0x280
	UWheeledVehicleMovementComponent* VehicleMovement; // 0x288
};

struct UDatasmithGLTFSceneImportData {
	FString Generator; // 0x28
	float Version; // 0x38
	FString Author; // 0x40
	FString License; // 0x50
	FString Source; // 0x60
};

struct UUserDefinedImageCaptureProtocol {
	EDesiredImageFormat Format; // 0xd8
	bool bEnableCompression; // 0xd9
	int32_t CompressionQuality; // 0xdc
};

struct UMaterialExpressionShadingPathSwitch {
	FExpressionInput Default; // 0x40
	FExpressionInput Inputs[0x3]; // 0x54
};

struct UMagicLeapTouchpadGesturesComponent {
	FMulticastInlineDelegate OnTouchpadGestureStart; // 0xb8
	FMulticastInlineDelegate OnTouchpadGestureContinue; // 0xc8
	FMulticastInlineDelegate OnTouchpadGestureEnd; // 0xd8
};

struct UVirtualTexture2D {
	FVirtualTextureBuildSettings Settings; // 0x1a0
	bool bContinuousUpdate; // 0x1ac
	bool bSinglePhysicalSpace; // 0x1ad
};

struct UCircularThrobber {
	int32_t NumberOfPieces; // 0x108
	float Period; // 0x10c
	float Radius; // 0x110
	USlateBrushAsset* PieceImage; // 0x118
	FSlateBrush Image; // 0x120
	bool bEnableRadius; // 0x1a8
};

struct UNiagaraLightRendererProperties {
	char bUseInverseSquaredFalloff : 1; // 0x78
	char bAffectsTranslucency : 1; // 0x78
	char bAlphaScalesBrightness : 1; // 0x78
	float RadiusScale; // 0x7c
	float DefaultExponent; // 0x80
	FVector ColorAdd; // 0x84
	int32_t RendererVisibility; // 0x90
	FNiagaraVariableAttributeBinding LightRenderingEnabledBinding; // 0x98
	FNiagaraVariableAttributeBinding LightExponentBinding; // 0xf0
	FNiagaraVariableAttributeBinding PositionBinding; // 0x148
	FNiagaraVariableAttributeBinding ColorBinding; // 0x1a0
	FNiagaraVariableAttributeBinding RadiusBinding; // 0x1f8
	FNiagaraVariableAttributeBinding VolumetricScatteringBinding; // 0x250
	FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x2a8
};

struct ALight {
	ULightComponent* LightComponent; // 0x220
	char bEnabled : 1; // 0x228
};

struct UANIMBP_M92FS_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x308
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x328
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x430
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x450
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x498
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x538
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x690
	FAnimNode_Slot AnimGraphNode_Slot; // 0x750
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x798
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x7c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x7e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x868
	float Mag01Alpha; // 0x8e8
};

struct UGameSessionSettings {
	int32_t MaxSpectators; // 0x28
	int32_t MaxPlayers; // 0x2c
	char bRequiresPushToTalk : 1; // 0x30
};

struct AReadyOrNotGameSession {
	FString ServerName; // 0x380
	TArray<FString> MapList; // 0x390
	FString Password; // 0x3a0
	int32_t MaxConnections; // 0x3b0
	FString AdminPassword; // 0x3b8
	TArray<FString> LoggedInAdmins; // 0x3c8
	TArray<FString> BanList; // 0x3d8
	float RoundTimerGameStart; // 0x3e8
	float RoundTimerBetweenMaps; // 0x3ec
	float ReinforcementTimer; // 0x3f0
	float RespawnTimer; // 0x3f4
	float Timelimit; // 0x3f8
	int32_t Scorelimit; // 0x3fc
	int32_t RoundsPerMap; // 0x400
	bool bAiEnabled; // 0x404
	int32_t EventId; // 0x408
	int32_t ClientNetSpeed; // 0x40c
};

struct UInterpTrackMoveAxis {
	EInterpMoveAxis MoveAxis; // 0x90
	FInterpLookupTrack LookupTrack; // 0x98
};

struct UANIMBP_Colt1911_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x308
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x410
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x430
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x478
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x518
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x598
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x618
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x770
	FAnimNode_Slot AnimGraphNode_Slot; // 0x830
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x878
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x8a0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x8c8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x988
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x9a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xa48
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xac8
	float Mag01Alpha; // 0xb48
	float SlideAlpha; // 0xb4c
};

struct UProceduralMeshComponent {
	bool bUseComplexAsSimpleCollision; // 0x480
	bool bUseAsyncCooking; // 0x481
	UBodySetup* ProcMeshBodySetup; // 0x488
	TArray<FProcMeshSection> ProcMeshSections; // 0x490
	TArray<FKConvexElem> CollisionConvexElems; // 0x4a0
	FBoxSphereBounds LocalBounds; // 0x4b0
	TArray<UBodySetup*> AsyncBodySetupQueue; // 0x4d0
};

struct UAnimationAsset {
	USkeleton* Skeleton; // 0x38
	TArray<UAnimMetaData*> MetaData; // 0x60
	TArray<UAssetUserData*> AssetUserData; // 0x70
};

struct UMovieSceneComponentMaterialTrack {
	int32_t MaterialIndex; // 0xa8
};

struct UNiagaraParameterCollectionInstance {
	UNiagaraParameterCollection* Collection; // 0x28
	TArray<FNiagaraVariable> OverridenParameters; // 0x30
	FNiagaraParameterStore ParameterStorage; // 0x40
};

struct UW_ScoreboardEntry_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* Arrested_Text; // 0x268
	UTextBlock* Arrests_Text; // 0x270
	UImage* BG_Image; // 0x278
	UTextBlock* BoardRank_Text; // 0x280
	UTextBlock* Damage_Text; // 0x288
	UTextBlock* Deaths_Text; // 0x290
	USizeBox* HighlightSelf_Box; // 0x298
	UTextBlock* Incapacitations_Text; // 0x2a0
	UTextBlock* Kills_Text; // 0x2a8
	UTextBlock* Ping_Text; // 0x2b0
	UTextBlock* PlayerName_Text; // 0x2b8
	UTextBlock* PlayerRank_Text; // 0x2c0
	UTextBlock* Score_Text; // 0x2c8
	UTextBlock* Status_Text; // 0x2d0
	ETeamType Team; // 0x2d8
	bool bSelf; // 0x2d9
	int32_t BoardRank; // 0x2dc
	int32_t PlayerRank; // 0x2e0
	FText Name; // 0x2e8
	int32_t Score; // 0x300
	int32_t Damage; // 0x304
	int32_t Kills; // 0x308
	int32_t Deaths; // 0x30c
	int32_t Arrests; // 0x310
	int32_t Arrested; // 0x314
	int32_t Incapacitations; // 0x318
	EPlayerHealthStatus Status; // 0x31c
	int32_t Ping; // 0x320
	FSlateColor DefaultColor; // 0x328
	FSlateColor SelfColor; // 0x350
	AReadyOrNotPlayerState* PlayerState; // 0x378
};

struct UW_MapFloors_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UVerticalBox* Floors_Box; // 0x268
	TArray<UW_MapFloor_C*> FloorWidgets; // 0x270
};

struct UActivityState {
	FString Name; // 0x58
	int32_t ID; // 0x68
	float Uptime; // 0x6c
	UActivityFiniteStateMachine* StateMachineOwner; // 0x70
};

struct UDistributionFloatUniform {
	float Min; // 0x38
	float Max; // 0x3c
};

struct UDrawFrustumComponent {
	FColor FrustumColor; // 0x450
	float FrustumAngle; // 0x454
	float FrustumAspectRatio; // 0x458
	float FrustumStartDist; // 0x45c
	float FrustumEndDist; // 0x460
	UTexture* Texture; // 0x468
};

struct ADefaultPawn {
	float BaseTurnRate; // 0x280
	float BaseLookUpRate; // 0x284
	UPawnMovementComponent* MovementComponent; // 0x288
	USphereComponent* CollisionComponent; // 0x290
	UStaticMeshComponent* MeshComponent; // 0x298
	char bAddDefaultMovementBindings : 1; // 0x2a0
};

struct UMaterialExpressionVirtualTextureFeatureSwitch {
	FExpressionInput No; // 0x40
	FExpressionInput Yes; // 0x54
};

struct ABadAIAction {
	FText Summary; // 0x220
	FText Description; // 0x238
	UBillboardComponent* BillboardComponent; // 0x258
};

struct UMovieSceneCinematicShotSection {
	FString ShotDisplayName; // 0x168
	FText DisplayName; // 0x178
};

struct UMovieScenePrimitiveMaterialSection {
	FMovieSceneObjectPathChannel MaterialChannel; // 0xe8
};

struct UW_LoudnessMeter_C {
	UImage* OneBar_Image; // 0x290
	UImage* ThreeBar_Image; // 0x298
	UImage* TwoBar_Image; // 0x2a0
};

struct UANIMBP_MPX_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x308
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x350
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x470
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x4f0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x5f8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x700
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x808
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x828
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x848
	FAnimNode_Slot AnimGraphNode_Slot; // 0x908
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x950
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xaa8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xad0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xaf8
	float Mag01Alpha; // 0xc00
	float ScopeAdjustAlpha; // 0xc04
	bool bIsSemi; // 0xc08
};

struct APremissionStreetView {
	UStaticMeshComponent* LeftBuildingMesh; // 0x220
	UStaticMeshComponent* RightBuildingMesh; // 0x228
	UChildActorComponent* LeftTrafficLight; // 0x230
	UChildActorComponent* RightTrafficLight; // 0x238
	UArrowComponent* Direction; // 0x240
	TArray<UStaticMesh*> Buildings; // 0x248
	TArray<AActor*> TrafficLights; // 0x258
	float InterpConstantSpeed; // 0x274
	float TimeUntilReset; // 0x278
};

struct ALuminAROrigin {
	UMRMeshComponent* MRMeshComponent; // 0x220
	UMaterialInterface* PlaneSurfaceMaterial; // 0x228
	UMaterialInterface* WireframeMaterial; // 0x230
};

struct UW_WeaponWheel_RadialSelection_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278
	UWidgetAnimation* Anim_Expand; // 0x280
	UImage* Item_Icon; // 0x288
	UVerticalBox* MainArea; // 0x290
	UOverlay* MainArea_Overlay; // 0x298
	UHorizontalBox* RootWidget; // 0x2a0
	USpacer* Spacer_421; // 0x2a8
	UW_WeaponWheel_MagazineDisplay_C* WeaponWheel_MagazineDisplay; // 0x2b0
	ABaseItem* Item; // 0x2b8
	float ItemIconSize; // 0x2c0
	int32_t CategoryIndex; // 0x2c4
	FText ItemCategory; // 0x2c8
	TArray<ABaseItem*> Items; // 0x2e0
	TArray<UWeaponWheelScript*> ExecutableItems; // 0x2f0
	TArray<UObject*> AllItems; // 0x300
	float WheelSize; // 0x310
	float MaxWheelSize; // 0x314
	TArray<UImage*> Icons; // 0x318
	TArray<UImage*> StackedItems; // 0x328
};

struct UMovieSceneCameraAnimTrack {
	TArray<UMovieSceneSection*> CameraAnimSections; // 0x98
};

struct UMaterialExpressionCrossProduct {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UAudioImpulseResponse {
	TArray<float> ImpulseResponse; // 0x28
	int32_t NumChannels; // 0x38
	int32_t SampleRate; // 0x3c
	float NormalizationVolumeDb; // 0x40
	bool bTrueStereo; // 0x44
	TArray<float> IRData; // 0x48
};

struct UNiagaraDataInterfaceNeighborGrid3D {
	uint32_t MaxNeighborsPerCell; // 0x100
};

struct UMovieSceneWidgetMaterialTrack {
	TArray<FName> BrushPropertyNamePath; // 0xa8
	FName TrackName; // 0xb8
};

struct UW_WeaponWheel_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x410
	UBackgroundBlur* BackgroundBlur; // 0x418
	UHorizontalBox* Controls_Container; // 0x420
	UW_DebugInfoContainer_C* DebugInfoContainer_Items; // 0x428
	UW_DebugInfoContainer_C* DebugInfoContainer_Logic; // 0x430
	UW_DebugInfoContainer_C* DebugInfoContainer_Settings; // 0x438
	UImage* Image_251; // 0x440
	UOverlay* TestSmoothCursor; // 0x448
	UTextBlock* WeaponStat_Category_Text; // 0x450
	UTextBlock* WeaponStat_ItemName_Text; // 0x458
	UImage* WeaponWheel_Background; // 0x460
	UImage* WeaponWheel_InnerBorder; // 0x468
	UVerticalBox* WeaponWheel_ItemInfo_Container; // 0x470
	UVerticalBox* WeaponWheel_ItemStats_Container; // 0x478
	UW_WeaponWheel_MultiItem_Selection_C* WeaponWheel_MultiItem_Selection; // 0x480
	UImage* WeaponWheel_OuterBorder; // 0x488
	UCanvasPanel* WeaponWheelArea; // 0x490
	TMap<FName, UW_WeaponWheel_RadialSelection_C*> WheelCategoryToRadialSelectionWidget; // 0x498
	TArray<UW_WeaponWheel_ItemStat_C*> ItemStats; // 0x4e8
	TArray<UW_WeaponWheel_RadialSelection_C*> WeaponWheelCategories; // 0x4f8
	TArray<ABaseItem*> ItemCategories; // 0x508
	EEasingFunc StatGrowthEffect; // 0x518
	float StatGrowthSpeed; // 0x51c
	int32_t CategoryTextFontSize; // 0x520
	int32_t ItemTextFontSize; // 0x524
	TArray<ABaseItem*> Primary Weapons; // 0x528
	TArray<ABaseItem*> Secondary Weapons; // 0x538
	TArray<ABaseItem*> Grenades; // 0x548
	TArray<ABaseItem*> Assistants; // 0x558
	TArray<ABaseItem*> Tactical Devices; // 0x568
	TArray<ABaseItem*> TabletDevices; // 0x578
	UW_WeaponWheel_RadialSelection_C* CurrentSelectedRadialWidget; // 0x588
	UW_WeaponWheel_RadialSelection_C* PreviousSelectedRadialWidget; // 0x590
	FMulticastInlineDelegate CategoryDeselected; // 0x598
	FMulticastInlineDelegate CategorySelected; // 0x5a8
	FMulticastInlineDelegate ItemSelected; // 0x5b8
	FMulticastInlineDelegate ItemDeselected; // 0x5c8
	int32_t MaxItemStats; // 0x5d8
	TArray<UWeaponWheelScript*> ItemExecutables; // 0x5e0
	TArray<UWeaponWheelScript*> ItemExecutableScripts; // 0x5f0
};

struct UParticleModuleLocation_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct UInterpTrackVectorMaterialParam {
	TArray<UMaterialInterface*> TargetMaterials; // 0x90
	FName paramName; // 0xa0
};

struct UNiagaraComponent {
	UNiagaraSystem* Asset; // 0x450
	ENiagaraTickBehavior TickBehavior; // 0x458
	int32_t RandomSeedOffset; // 0x45c
	FNiagaraUserRedirectionParameterStore OverrideParameters; // 0x460
	char bForceSolo : 1; // 0x528
	char bEnableGpuComputeDebug : 1; // 0x528
	char bAutoDestroy : 1; // 0x558
	char bRenderingEnabled : 1; // 0x558
	char bAutoManageAttachment : 1; // 0x558
	char bAutoAttachWeldSimulatedBodies : 1; // 0x558
	float MaxTimeBeforeForceUpdateTransform; // 0x55c
	TArray<FNiagaraMaterialOverride> EmitterMaterials; // 0x560
	FMulticastInlineDelegate OnSystemFinished; // 0x578
	TWeakObjectPtr<USceneComponent> AutoAttachParent; // 0x588
	FName AutoAttachSocketName; // 0x590
	EAttachmentRule AutoAttachLocationRule; // 0x598
	EAttachmentRule AutoAttachRotationRule; // 0x599
	EAttachmentRule AutoAttachScaleRule; // 0x59a
};

struct AReadyOrNotAvoidanceManager {
	TArray<ACyberneticCharacter*> SpawnedAI; // 0x220
	FName MoveToTag_01; // 0x230
	FName MoveToTag_02; // 0x238
};

struct UParticleModuleOrientationAxisLock {
	EParticleAxisLock LockAxisFlags; // 0x30
};

struct UMoraleComponent {
	AReadyOrNotCharacter* OwnerChar; // 0xb0
};

struct UPaperFlipbookComponent {
	UPaperFlipbook* SourceFlipbook; // 0x478
	UMaterialInterface* Material; // 0x480
	float PlayRate; // 0x488
	char bLooping : 1; // 0x48c
	char bReversePlayback : 1; // 0x48c
	char bPlaying : 1; // 0x48c
	float AccumulatedTime; // 0x490
	int32_t CachedFrameIndex; // 0x494
	FLinearColor SpriteColor; // 0x498
	UBodySetup* CachedBodySetup; // 0x4a8
	FMulticastInlineDelegate OnFinishedPlaying; // 0x4b0
};

struct UDatasmithVREDSceneImportData {
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

struct USoundNodeSwitch {
	FName IntParameterName; // 0x48
};

struct UArmourResourceComponent {
	int32_t MaxTickets; // 0x108
	float Resistance; // 0x10c
	int32_t RemainingTickets; // 0x110
};

struct UParticleModuleCollisionGPU {
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

struct UPlayerDetailsWidgetComponent {
	AReadyOrNotPlayerState* OverriddenPlayerState; // 0x5a0
	float MaxDistance; // 0x5a8
};

struct UANIMBP_Tec9_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x308
};

struct ATugOfWarButton {
	ETeamType OnlyTeamUse; // 0x278
	ATugOfWarMover* Mover; // 0x280
	APlayerCharacter* CurrentUser; // 0x288
};

struct UCloudStorageBase {
	TArray<FString> LocalCloudFiles; // 0x38
	char bSuppressDelegateCalls : 1; // 0x48
};

struct UListView {
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

struct AMagicLeapARPinRenderer {
	bool bInfoActorsVisibilityOverride; // 0x220
	TMap<FGuid, AMagicLeapARPinInfoActorBase*> AllInfoActors; // 0x228
	AMagicLeapARPinInfoActorBase* ClassToSpawn; // 0x280
};

struct UAISenseEvent_Damage {
	FAIDamageEvent Event; // 0x28
};

struct URadialFalloff {
	float Magnitude; // 0xb0
	float MinRange; // 0xb4
	float MaxRange; // 0xb8
	float Default; // 0xbc
	float Radius; // 0xc0
	FVector Position; // 0xc4
	EFieldFalloffType Falloff; // 0xd0
};

struct UW_ItemSelectionMenu_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278
	UWidgetAnimation* SlideIn; // 0x280
	UWidgetAnimation* FadeOut; // 0x288
	UW_DebugInfoContainer_C* DebugInfoContainer_Menu; // 0x290
	UW_ItemSelection_ItemGroupList_C* ItemGroupList; // 0x298
	float MouseWheelDelta; // 0x2a0
	FKey OpeningMenuKey; // 0x2a8
	FKey PreviousMenuTriggerKey; // 0x2c0
	TArray<FKey> MenuOpenKeyTriggers; // 0x2d8
	TArray<FItemSelectionPanelSetting_ItemGroup> ItemGroups; // 0x2e8
	bool bInitialized; // 0x2f8
	int32_t SelectedColumn; // 0x2fc
	bool bFadedOut; // 0x300
	APlayerCharacter* PlayerCharacter; // 0x308
	bool bIsActive; // 0x310
	FTimerHandle TH_FadeOut; // 0x318
	TMap<FKey, int32_t> QueuedSelections; // 0x320
	int32_t OpenMenuTriggerCount; // 0x370
	FTimerHandle TH_FadeOutSelected; // 0x378
	FMulticastInlineDelegate OnMenuOpened; // 0x380
};

struct UClothingAssetCommon {
	UPhysicsAsset* PhysicsAsset; // 0x48
	TMap<FName, UClothConfigBase*> ClothConfigs; // 0x50
	TArray<FClothLODDataCommon> LODData; // 0xa0
	TArray<int32_t> LodMap; // 0xb0
	TArray<FName> UsedBoneNames; // 0xc0
	TArray<int32_t> UsedBoneIndices; // 0xd0
	int32_t ReferenceBoneIndex; // 0xe0
	UClothingAssetCustomData* CustomData; // 0xe8
};

struct UBP_UI_PlanningMap_Marker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x200
};

struct AHelmet_Goggles_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1550
	APlayerState* PlayerState; // 0x1558
};

struct USpectatorBeaconState {
	FName SessionName; // 0x28
	int32_t NumConsumedReservations; // 0x30
	int32_t MaxReservations; // 0x34
	bool bRestrictCrossConsole; // 0x38
	TArray<FSpectatorReservation> Reservations; // 0x40
};

struct USoundNodeMixer {
	TArray<float> InputVolume; // 0x48
};

struct UMaterialExpressionFontSample {
	UFont* Font; // 0x40
	int32_t FontTexturePage; // 0x48
};

struct UMaterialExpressionArctangent2Fast {
	FExpressionInput Y; // 0x40
	FExpressionInput X; // 0x54
};

struct UOnlineEngineInterfaceImpl {
	TMap<FName, FName> MappedUniqueNetIdTypes; // 0x28
	TArray<FName> CompatibleUniqueNetIdTypes; // 0x78
	FName VoiceSubsystemNameOverride; // 0x88
};

struct UWidgetSwitcherSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct UPawnSensingComponent {
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

struct UInputTouchDelegateBinding {
	TArray<FBlueprintInputTouchDelegateBinding> InputTouchDelegateBindings; // 0x28
};

struct UMovieSceneCameraShakeSourceShakeTrack {
	TArray<UMovieSceneSection*> CameraShakeSections; // 0x98
};

struct UBTService {
	float Interval; // 0x60
	float RandomDeviation; // 0x64
	char bCallTickOnSearchStart : 1; // 0x68
	char bRestartTimerOnEachActivation : 1; // 0x68
};

struct UAnimNotify_ChangeBodySocket {
	EItemCategory ItemCategory; // 0x38
	FName Socket; // 0x3c
};

struct AAISpawn {
	FSpawnData SpawnData; // 0x220
	TArray<FSpawnData> RosterSpawnData; // 0xd10
	bool bIsRoamerSpawn; // 0xd20
	USceneComponent* DefaultScene; // 0xd28
	UArrowComponent* SpawnDirection; // 0xd30
	FAIDataLookupTable SavedAIData; // 0xd38
	AAICharacter* SpawnedCharacterDeffered; // 0xf88
};

struct UParticleModuleBeamNoise {
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

struct ALevelScriptActor {
	char bInputEnabled : 1; // 0x220
};

struct USoundNodeVolume {
	float VolumeAdjust; // 0x48
};

struct AWorldDataGenerator {
	TArray<AActor*> WorldBuildIgnoreActors; // 0x220
	ADoor* DoorClass; // 0x230
	TArray<AThreatAwarenessActor*> IgnoredExitThreats; // 0x238
	bool bDoorwaysBlocked; // 0x248
	float MaxRedBlueClearDistanceApart; // 0x24c
	FName OnlyOnMesh; // 0x250
	float CullDistanceMultiplier; // 0x258
	float CullDistanceMaxBoundsMultiplier; // 0x25c
	FString CullDistanceSettingsSaveName; // 0x260
	TMap<FString, FSavedCullDistanceSettings> SavedCullDistanceSettings; // 0x270
	bool bHasWorldEverBeenGenerated; // 0x2c4
	FSpawnerSavedData SpawnerSavedData; // 0x2d8
};

struct UTargetingComponent {
	ALastKnownPositionActor* LastKnownPositionActor; // 0xb8
	TArray<AReadyOrNotCharacter*> KnownFriendlies; // 0xc0
	TArray<AReadyOrNotCharacter*> KnownNeutrals; // 0xd0
	TArray<FTargetData> KnownEnemies; // 0xe0
	AReadyOrNotCharacter* LastKnownEnemy; // 0x108
	AReadyOrNotCharacter* TrackedTarget; // 0x118
	AReadyOrNotCharacter* LastTrackedTarget; // 0x120
	TArray<FVector> FocalPointsOfInterest; // 0x128
	ADoor* LastTrackedDoor; // 0x158
	AThreatAwarenessActor* LastThreatAwarenessActor; // 0x168
	AThreatAwarenessActor* NearestThreat; // 0x2e0
	TArray<AThreatAwarenessActor*> Threats; // 0x2e8
	AWorldDataGenerator* WorldDataGenerator; // 0x300
	TArray<AThreatAwarenessActor*> HasBeenNearThreat; // 0x318
	TMap<UAnimMontage*, FVector> MontageFocalMap; // 0x340
};

struct UW_PlayerSpeedIndicator_V2_C {
	UImage* Image; // 0x2f0
	UImage* Image_2; // 0x2f8
	UImage* Image_3; // 0x300
	UImage* Image_4; // 0x308
	UImage* Image_321; // 0x310
};

struct USoundNode {
	TArray<USoundNode*> ChildNodes; // 0x28
};

struct ULandscapeWeightmapUsage {
	ULandscapeComponent* ChannelUsage[0x4]; // 0x28
	FGuid LayerGuid; // 0x48
};

struct UClickDragInputBehavior {
	bool bUpdateModifiersDuringDrag; // 0x120
};

struct UCursor_Default_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetSwitcher* Cursor_Switcher; // 0x268
	UImage* DragNDrop; // 0x270
	UImage* Mouse; // 0x278
	bool HoldingDrag; // 0x280
};

struct UInterpCurveEdSetup {
	TArray<FCurveEdTab> Tabs; // 0x28
	int32_t ActiveTab; // 0x38
};

struct UW_AG_AvailableMapList_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UW_RadioContainer_C* AvailableMaps; // 0x268
	UW_StandardRadioButton_C* Overview_RadioButton_MapsModes; // 0x270
	UW_StandardRadioButton_C* Overview_RadioButton_Players; // 0x278
	UVerticalBox* VerticalBox_1; // 0x280
};

struct UMaterialExpressionLandscapeLayerBlend {
	TArray<FLayerBlendInput> Layers; // 0x40
	FGuid ExpressionGUID; // 0x50
};

struct AGameState {
	FName MatchState; // 0x270
	FName PreviousMatchState; // 0x278
	int32_t ElapsedTime; // 0x280
};

struct UJoinSessionCallbackProxyAdvanced {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UGarbageCollectionSettings {
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

struct UAISenseConfig_Blueprint {
	UAISense_Blueprint* Implementation; // 0x48
};

struct USoundConcurrency {
	FSoundConcurrencySettings Concurrency; // 0x28
};

struct UWeaponSound {
	bool bPlayFMODFiringAudio; // 0x30
	UFMODEvent* FMODGunShot1P; // 0x38
	UFMODEvent* FMODGunShot3P; // 0x40
	UFMODEvent* MagCheck_FullSeq; // 0x48
	UFMODEvent* QuickReload_FullSeq; // 0x50
	UFMODEvent* QuickReloadEmpty_FullSeq; // 0x58
	UFMODEvent* Reload_FullSeq; // 0x60
	UFMODEvent* ReloadEmpty_FullSeq; // 0x68
	UFMODEvent* MagIn; // 0x70
	UFMODEvent* MagOut; // 0x78
	UFMODEvent* MagInQuick; // 0x80
	UFMODEvent* MagOutQuick; // 0x88
	UFMODEvent* MagDrop; // 0x90
	UFMODEvent* MagDropQuick; // 0x98
	UFMODEvent* WeaponDrop; // 0xa0
	UFMODEvent* BoltClose; // 0xa8
	UFMODEvent* BoltCloseQuick; // 0xb0
	UFMODEvent* BoltOpen; // 0xb8
	UFMODEvent* BoltOpenQuick; // 0xc0
	UFMODEvent* OnADSSound; // 0xc8
	UFMODEvent* OnEndADSSound; // 0xd0
	UFMODEvent* NightvisionOn; // 0xd8
	UFMODEvent* NightvisionOff; // 0xe0
	UFMODEvent* Holster; // 0xe8
	UFMODEvent* Draw; // 0xf0
	UFMODEvent* DrawFirst; // 0xf8
	UFMODEvent* SelectSemi; // 0x100
	UFMODEvent* SelectBurst; // 0x108
	UFMODEvent* SelectAuto; // 0x110
	UFMODEvent* SelectSafe; // 0x118
	FWeaponSoundData Firing_Inside; // 0x120
	FWeaponSoundData Firing_Outside; // 0x140
	UFMODEvent* DryFire; // 0x160
	UFMODEvent* FireLast; // 0x168
	bool bPlayBulletWhizz; // 0x170
	UFMODEvent* BulletWhizzFar; // 0x178
	UFMODEvent* HitMarker; // 0x180
	UFMODEvent* HeadshotMarker; // 0x188
	UFMODEvent* KillMarker; // 0x190
	UFMODEvent* PhysicsImpact; // 0x198
	UFMODEvent* PlayerImpact; // 0x1a0
	float PhysicsImpactMinimumVelocity; // 0x1a8
	UFMODEvent* MovementLayer; // 0x1b0
};

struct UOodleNetworkTrainerCommandlet {
	bool bCompressionTest; // 0x80
	int32_t HashTableSize; // 0x84
	int32_t DictionarySize; // 0x88
	int32_t DictionaryTrials; // 0x8c
	int32_t TrialRandomness; // 0x90
	int32_t TrialGenerations; // 0x94
	bool bNoTrials; // 0x98
};

struct UParticleModuleLifetime {
	FRawDistributionFloat LifeTime; // 0x30
};

struct UMaterialExpressionTruncate {
	FExpressionInput Input; // 0x40
};

struct UTextureRenderTarget2D {
	int32_t SizeX; // 0x180
	int32_t SizeY; // 0x184
	FLinearColor ClearColor; // 0x188
	TextureAddress AddressX; // 0x198
	TextureAddress AddressY; // 0x199
	char bForceLinearGamma : 1; // 0x19a
	char bHDR : 1; // 0x19a
	char bGPUSharedFlag : 1; // 0x19a
	ETextureRenderTargetFormat RenderTargetFormat; // 0x19b
	char bAutoGenerateMips : 1; // 0x19c
	TextureFilter MipsSamplerFilter; // 0x19d
	TextureAddress MipsAddressU; // 0x19e
	TextureAddress MipsAddressV; // 0x19f
	EPixelFormat OverrideFormat; // 0x1a0
};

struct USoundNodeBranch {
	FName BoolParameterName; // 0x48
};

struct UW_WeaponWheel_ItemStat_Weight_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x840
};

struct UPhysicsSpringComponent {
	float SpringStiffness; // 0x1f8
	float SpringDamping; // 0x1fc
	float SpringLengthAtRest; // 0x200
	float SpringRadius; // 0x204
	ECollisionChannel SpringChannel; // 0x208
	bool bIgnoreSelf; // 0x209
	float SpringCompression; // 0x20c
};

struct AGS_TDM_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x6c0
};

struct UTextureLODSettings {
	TArray<FTextureLODGroup> TextureLODGroups; // 0x28
};

struct ASceneCapturePlayerCamera_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x238
};

struct UW_SwatCommandEntry_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* EntryBorder; // 0x268
	UImage* Image_61; // 0x270
	UW_Text_C* txt_Command; // 0x278
	UW_Text_C* txt_Keybind; // 0x280
	FSwatCommand SwatCommand; // 0x288
	ETeamType ActiveTeamType; // 0x308
	FLinearColor RedTeamColor; // 0x30c
	FLinearColor BlueTeamColor; // 0x31c
	FLinearColor GoldTeamColor; // 0x32c
	bool Last; // 0x33c
	bool Back; // 0x33d
	bool Extended; // 0x33e
};

struct UParticleModuleBeamModifier {
	BeamModifierType ModifierType; // 0x30
	FBeamModifierOptions PositionOptions; // 0x34
	FRawDistributionVector Position; // 0x38
	FBeamModifierOptions TangentOptions; // 0x80
	FRawDistributionVector Tangent; // 0x88
	char bAbsoluteTangent : 1; // 0xd0
	FBeamModifierOptions StrengthOptions; // 0xd4
	FRawDistributionFloat Strength; // 0xd8
};

struct UBlackboardKeyType_Class {
	UObject* BaseClass; // 0x30
};

struct UEditableGameplayTagQueryExpression_AnyTagsMatch {
	FGameplayTagContainer Tags; // 0x28
};

struct UGizmoTransformChangeStateTarget {
	TScriptInterface<IToolContextTransactionProvider> TransactionManager; // 0x50
};

struct UEnvQueryGenerator_ProjectedPoints {
	FEnvTraceData ProjectionData; // 0x50
};

struct UDeployableSpawnComponent {
	AActor* ItemClass; // 0x1f8
	FName DeployableLabel; // 0x200
};

struct UANIMBP_Benelli_M4_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x308
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x350
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x470
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x4f0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x648
};

struct UMaterialExpressionLandscapeLayerCoords {
	ETerrainCoordMappingType MappingType; // 0x40
	ELandscapeCustomizedCoordType CustomUVType; // 0x41
	float MappingScale; // 0x44
	float MappingRotation; // 0x48
	float MappingPanU; // 0x4c
	float MappingPanV; // 0x50
};

struct USubmixEffectMultibandCompressorPreset {
	FSubmixEffectMultibandCompressorSettings Settings; // 0xb0
};

struct UW_WeaponWheel_MagazineDisplay_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UVerticalBox* Container_MagSlot; // 0x268
	TArray<UImage*> Mags; // 0x270
	ABaseMagazineWeapon* MagazineWeapon; // 0x280
	int32_t TotalMags; // 0x288
	float MaxAmmo; // 0x28c
	int32_t EmptyMags; // 0x290
	float IconSize; // 0x294
	TArray<UW_WeaponWheel_MagazineSlot_C*> MagSlots; // 0x298
	bool bOnlyShowOneSlot; // 0x2a8
	int32_t MaxMagsPerSlot; // 0x2ac
	TMap<int32_t, int32_t> SlotIndexToMags; // 0x2b0
};

struct UW_StandardCombobox_Option_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* Option_Button; // 0x268
	UImage* Option_Dn; // 0x270
	UImage* Option_Hi; // 0x278
	UImage* Option_Selected; // 0x280
	UTextBlock* OptionText; // 0x288
	FString OptionAsString; // 0x290
	FText OptionAsText; // 0x2a0
	bool Selected; // 0x2b8
	UW_StandardCombobox_New_C* ParentComboBox; // 0x2c0
	FText DescriptionText; // 0x2c8
	int32_t FontSize; // 0x2e0
	UFMODEvent* OptionHoveredSound; // 0x2e8
};

struct USoundSubmixWithParentBase {
	USoundSubmixBase* ParentSubmix; // 0x38
};

struct ULookupData {
	bool bToggleToDoAssetUpdate; // 0x30
	TArray<TSoftClassPtr<UObject>> Items; // 0x38
	TArray<TSoftClassPtr<UObject>> Weapons; // 0x48
	TArray<TSoftClassPtr<UObject>> Armour; // 0x58
	TArray<TSoftClassPtr<UObject>> Grenades; // 0x68
	TArray<TSoftClassPtr<UObject>> Shells; // 0x78
	TArray<TSoftClassPtr<UObject>> Projectiles; // 0x88
	TArray<TSoftClassPtr<UObject>> Characters; // 0x98
	TArray<TSoftClassPtr<UObject>> AI; // 0xa8
	bool bAddSelectedBlueprintToItemData; // 0xb8
	TArray<ABaseItem*> biClassArray; // 0xc0
	UDataTable* ItemDataLookupTable; // 0xd0
	bool bToggleForceLevelDataTable; // 0xd8
	UDataTable* LevelDataLookupTable; // 0xe0
	bool bToggleForceAIData; // 0xe8
	UDataTable* AIDataLookupTable; // 0xf0
};

struct ADynamicWorldActor {
	FName DynamicLabel; // 0x220
	bool bReplicateSpawn; // 0x228
};

struct AArrestAndRescueGS {
	int32_t BlueRespawnWaves; // 0x6c0
	int32_t RedRespawnWaves; // 0x6c4
};

struct UNavLinkComponent {
	TArray<FNavigationLink> Links; // 0x458
};

struct UTestMovieSceneEvalHookTrack {
	TArray<UMovieSceneSection*> SectionArray; // 0x90
};

struct UShaderPlatformQualitySettings {
	FMaterialQualityOverrides QualityOverrides[0x4]; // 0x28
};

struct UAnimCompress_RemoveTrivialKeys {
	float MaxPosDiff; // 0x40
	float MaxAngleDiff; // 0x44
	float MaxScaleDiff; // 0x48
};

struct UTOCData {
	FString TOCLine; // 0x28
	bool bIsNetworked; // 0x38
	ETOCPriority QueuePriority; // 0x39
};

struct ABP_ReplayController_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x978
	UW_ReplayControls_C* ReplayControls; // 0x980
	bool bRemoveReplayControls; // 0x988
	bool bSetInitialPosition; // 0x989
	bool bSprintHeld; // 0x98a
	bool bCrouchHeld; // 0x98b
	bool bFollowLocalPlayer; // 0x98c
	AReadyOrNotCharacter* LocalPlayer; // 0x990
	float DeltaSeconds; // 0x998
	TArray<ABaseItem*> ignoredActors; // 0x9a0
	bool MouseRightPressed; // 0x9b0
};

struct ASceneCaptureCube {
	USceneCaptureComponentCube* CaptureComponentCube; // 0x230
};

struct ATaserReactionVolume {
	UBoxComponent* Bounds; // 0x220
};

struct UANIMBP_M24_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x308
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x388
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x490
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x4b0
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver_2; // 0x4d0
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver; // 0x638
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x7a0
	FAnimNode_Slot AnimGraphNode_Slot; // 0x8a8
	FRotator TestRot; // 0x8f0
};

struct UEnvQueryTest_Trace {
	FEnvTraceData TraceData; // 0x1f8
	FAIDataProviderBoolValue TraceFromContext; // 0x228
	FAIDataProviderFloatValue ItemHeightOffset; // 0x260
	FAIDataProviderFloatValue ContextHeightOffset; // 0x298
	UEnvQueryContext* Context; // 0x2d0
};

struct UGizmoBaseComponent {
	FLinearColor Color; // 0x450
	float HoverSizeMultiplier; // 0x460
	float PixelHitDistanceThreshold; // 0x464
};

struct UClothLODDataCommon_Legacy {
	UClothPhysicalMeshDataBase_Legacy* PhysicalMeshData; // 0x28
	FClothPhysicalMeshData ClothPhysicalMeshData; // 0x30
	FClothCollisionData CollisionData; // 0x128
};

struct UAssetExportTask {
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

struct UNavCollisionBase {
	char bIsDynamicObstacle : 1; // 0x28
};

struct UInterpTrackInstVectorMaterialParam {
	TArray<UMaterialInstanceDynamic*> MaterialInstances; // 0x28
	TArray<FVector> ResetVectors; // 0x38
	TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x48
	UInterpTrackVectorMaterialParam* InstancedTrack; // 0x58
};

struct UParticleModuleSubUVMovie {
	char bUseEmitterTime : 1; // 0x70
	FRawDistributionFloat FrameRate; // 0x78
	int32_t StartingFrame; // 0xa8
};

struct UForceFeedbackAttenuation {
	FForceFeedbackAttenuationSettings Attenuation; // 0x28
};

struct APlacedBag {
	USphereComponent* IconBolt; // 0x228
	FHitResult PlacementHit; // 0x230
	bool bOverrideUseText; // 0x2b8
	FText OverrideText; // 0x2c0
};

struct UMovieSceneTrackInstance {
	UObject* AnimatedObject; // 0x28
	bool bIsMasterTrackInstance; // 0x30
	UMovieSceneEntitySystemLinker* Linker; // 0x38
	TArray<FMovieSceneTrackInstanceInput> Inputs; // 0x40
};

struct UBTTask_SetTagCooldown {
	FGameplayTag CooldownTag; // 0x70
	bool bAddToExistingDuration; // 0x78
	float CooldownDuration; // 0x7c
};

struct UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* img_Icon; // 0x268
	UW_Button_C* W_Button; // 0x270
	FLevelDeployableData DeployableData; // 0x278
	FLinearColor NormalColor; // 0x288
	FLinearColor HoveredColor; // 0x298
	FLinearColor PressedColor; // 0x2a8
	FMulticastInlineDelegate OnClicked; // 0x2b8
};

struct UANIMBP_Zipcuffs_Placed_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2c8
	FAnimNode_Root AnimGraphNode_Root; // 0x348
};

struct UAIPerceptionStimuliSourceComponent {
	char bAutoRegisterAsSource : 1; // 0xb0
	TArray<UAISense*> RegisterAsSourceForSenses; // 0xb8
};

struct UPoseAsset {
	FPoseDataContainer PoseContainer; // 0x80
	bool bAdditivePose; // 0x110
	int32_t BasePoseIndex; // 0x114
	FName RetargetSource; // 0x118
	TArray<FTransform> RetargetSourceAssetReferencePose; // 0x120
};

struct USoundNodeOscillator {
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

struct UMediaPlaylist {
	TArray<UMediaSource*> Items; // 0x28
};

struct ABP_Helmet_Pumpkin_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1550
	APlayerState* PlayerState; // 0x1558
};

struct ALandscapeMeshProxyActor {
	ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x220
};

struct UW_TabletHUD_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UOverlay* Briefing_Menu; // 0x270
	UImage* Control_1_Divider_Image; // 0x278
	UW_DebugMenu_Tablet_C* Debug; // 0x280
	UImage* Image; // 0x288
	UImage* Image_439; // 0x290
	UW_Map_C* Map; // 0x298
	UWidgetSwitcher* MenuSwitcher; // 0x2a0
	UW_Scoreboard_V2_C* Scoreboard; // 0x2a8
	UW_Tablet_TabButton_C* Tab_Briefing; // 0x2b0
	UW_Tablet_TabButton_C* Tab_Debug; // 0x2b8
	UW_Tablet_TabButton_C* Tab_Map; // 0x2c0
	UW_Tablet_TabButton_C* Tab_Scoreboard; // 0x2c8
	UImage* TabletGraphic_Image; // 0x2d0
	UImage* TabMenuBorder_Image; // 0x2d8
	UHorizontalBox* TabMenus; // 0x2e0
	FText SniperText; // 0x2e8
	FText AlphaText; // 0x300
	FText OfficerText; // 0x318
	FText BetaText; // 0x330
	FText CharlieText; // 0x348
	FText DeltaText; // 0x360
	FText FoxtrotText; // 0x378
	bool AlphaPivot; // 0x390
	bool bShowDebugTabMenu; // 0x391
	int32_t MenuIndex; // 0x394
};

struct APlayerCameraManager {
	APlayerController* PCOwner; // 0x220
	USceneComponent* TransformComponent; // 0x228
	float DefaultFOV; // 0x238
	float DefaultOrthoWidth; // 0x240
	float DefaultAspectRatio; // 0x248
	FCameraCacheEntry CameraCache; // 0x290
	FCameraCacheEntry LastFrameCameraCache; // 0x890
	FTViewTarget ViewTarget; // 0xe90
	FTViewTarget PendingViewTarget; // 0x14a0
	FCameraCacheEntry CameraCachePrivate; // 0x1ae0
	FCameraCacheEntry LastFrameCameraCachePrivate; // 0x20e0
	TArray<UCameraModifier*> ModifierList; // 0x26e0
	TArray<UCameraModifier*> DefaultModifiers; // 0x26f0
	float FreeCamDistance; // 0x2700
	FVector FreeCamOffset; // 0x2704
	FVector ViewTargetOffset; // 0x2710
	FMulticastInlineDelegate OnAudioFadeChangeEvent; // 0x2720
	TArray<AEmitterCameraLensEffectBase*> CameraLensEffects; // 0x2740
	UCameraModifier_CameraShake* CachedCameraShakeMod; // 0x2750
	UCameraAnimInst* AnimInstPool[0x8]; // 0x2758
	TArray<FPostProcessSettings> PostProcessBlendCache; // 0x2798
	TArray<UCameraAnimInst*> ActiveAnims; // 0x27b8
	TArray<UCameraAnimInst*> FreeAnims; // 0x27c8
	ACameraActor* AnimCameraActor; // 0x27d8
	char bIsOrthographic : 1; // 0x27e0
	char bDefaultConstrainAspectRatio : 1; // 0x27e0
	char bClientSimulatingViewTarget : 1; // 0x27e0
	char bUseClientSideCameraUpdates : 1; // 0x27e0
	char bGameCameraCutThisFrame : 1; // 0x27e1
	float ViewPitchMin; // 0x27e4
	float ViewPitchMax; // 0x27e8
	float ViewYawMin; // 0x27ec
	float ViewYawMax; // 0x27f0
	float ViewRollMin; // 0x27f4
	float ViewRollMax; // 0x27f8
	float ServerUpdateCameraTimeout; // 0x2800
};

struct URoNWeaponAnimInstance {
	float AmmoRemaining; // 0x2b8
	FRotator OptiwandBoneModify; // 0x2bc
};

struct ANavMeshBoundsVolume {
	FNavAgentSelector SupportedAgents; // 0x258
};

struct UParticleModuleVectorFieldScale {
	UDistributionFloat* VectorFieldScale; // 0x30
	FRawDistributionFloat VectorFieldScaleRaw; // 0x38
};

struct UGeometryCollection {
	bool EnableClustering; // 0x30
	int32_t ClusterGroupIndex; // 0x34
	int32_t MaxClusterLevel; // 0x38
	TArray<float> DamageThreshold; // 0x40
	EClusterConnectionTypeEnum ClusterConnectionType; // 0x50
	TArray<FGeometryCollectionSource> GeometrySource; // 0x58
	TArray<UMaterialInterface*> Materials; // 0x68
	ECollisionTypeEnum CollisionType; // 0x78
	EImplicitTypeEnum ImplicitType; // 0x79
	int32_t MinLevelSetResolution; // 0x7c
	int32_t MaxLevelSetResolution; // 0x80
	int32_t MinClusterLevelSetResolution; // 0x84
	int32_t MaxClusterLevelSetResolution; // 0x88
	float CollisionObjectReductionPercentage; // 0x8c
	bool bMassAsDensity; // 0x90
	float Mass; // 0x94
	float MinimumMassClamp; // 0x98
	float CollisionParticlesFraction; // 0x9c
	int32_t MaximumCollisionParticles; // 0xa0
	TArray<FGeometryCollectionSizeSpecificData> SizeSpecificData; // 0xa8
	bool EnableRemovePiecesOnFracture; // 0xb8
	TArray<UMaterialInterface*> RemoveOnFractureMaterials; // 0xc0
	FGuid PersistentGuid; // 0xd0
	FGuid StateGuid; // 0xe0
	int32_t BoneSelectedMaterialIndex; // 0xf0
};

struct AReadyOrNotGameMode {
	FDataTableRowHandle GameModeSettings; // 0x2c8
	TMap<AReadyOrNotCharacter*, int32_t> AbuseCountMap; // 0x338
	bool bIsCampaignTransitioning; // 0x388
	FTimerHandle Reinforcement_Handle; // 0x390
	bool bRunWarmup; // 0x398
	bool bArrestSpectator; // 0x399
	bool bAllowLoadouts; // 0x39a
	int32_t MaxPlayersAllowed; // 0x39c
	bool bEnabledForPlay; // 0x3a0
	FString urlShortName; // 0x3a8
	FString Password; // 0x3b8
	AActor* PlayerStartClass; // 0x3c8
	ASpectatePawn* DeadSpectatorClass; // 0x3d0
	FName LobbyStartTag; // 0x3d8
	FName RedCustomizationStartTag; // 0x3e0
	FName BlueCustomizationStartTag; // 0x3e8
	FName SWATBlueStartTag; // 0x3f0
	FName SWATRedStartTag; // 0x3f8
	FName SuspectStartTag; // 0x400
	int32_t MaxTeamKillsBeforeAutoKick; // 0x408
	bool bSpectateKillerOnDeath; // 0x40c
	bool bInitialPlayerRespawn; // 0x40d
	bool bLockRandomDoors; // 0x40e
	char bDrawPlayerCameraSphere : 1; // 0x40f
	FMulticastInlineDelegate OnMatchStarted; // 0x410
	ERespawnMode RespawnMode; // 0x420
	bool bTimelimitUsedInMode; // 0x421
	EMatchState CurrentMatchState; // 0x422
	FMulticastInlineDelegate OnMatchStateChanged; // 0x428
	FSavedLoadout DefaultLoadoutIfNothingLoaded; // 0x440
	FText ModeName; // 0x578
	FText ModeDescription; // 0x590
	bool bCanRespawn; // 0x5a8
	int32_t MinimumPlayersToStart; // 0x5ac
	int32_t MinimumPlayersForTimer; // 0x5b0
	TSoftClassPtr<UObject> BlueCharacterClass; // 0x5b8
	TSoftClassPtr<UObject> RedCharacterClass; // 0x5e0
	TArray<APlayerController*> DeadPlayers; // 0x610
	TArray<APlayerController*> RespawnableDeadPlayers; // 0x620
	FString PlayerSpawnTag; // 0x630
	FMulticastInlineDelegate OnPlayerRespawned; // 0x640
	UUserWidget* CharacterHUD; // 0x650
	bool bThrottleAI; // 0x660
	float MinThrottleRange; // 0x664
	float MaxThrottleRange; // 0x668
	float ThrottleMultiplier; // 0x66c
	ATOCManager* TOCManager; // 0x670
};

struct UOnlineSessionClient {
	bool bIsFromInvite; // 0x1c0
	bool bHandlingDisconnect; // 0x1c1
};

struct UScaleBoxSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UFlankingCombatMove {
	AFlankingAvoidanceVolume* FlankingAvoidanceVolume; // 0x1c8
};

struct UEnvQueryTest_Project {
	FEnvTraceData ProjectionData; // 0x1f8
};

struct UAnimNotify_PlayMontageNotify {
	FName NotifyName; // 0x38
};

struct UANIMBP_Saiga12_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x308
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x350
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x458
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x478
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x498
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x518
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x598
	float Mag01Alpha; // 0x638
};

struct UInteractableComponent {
	char bEnabled : 1; // 0x5a0
	FName AnimatedIconName; // 0x5a4
	char bShowIconWhenActionsLocked : 1; // 0x5ac
	FPlayerActionPromptSlot ActionSlot1; // 0x5b0
	FPlayerActionPromptSlot ActionSlot2; // 0x640
	FPlayerActionPromptSlot ActionSlot3; // 0x6d0
	FPlayerActionPromptSlot ActionSlot4; // 0x760
	float MinShowPromptAtDistance; // 0x7f0
	float ShowPromptAtDistance; // 0x7f4
	float RequiredLookAtPercentage; // 0x7f8
	float InteractCircleSize; // 0x7fc
	float InteractIconSize; // 0x800
	char bMustBeLookingAt : 1; // 0x804
	char bDistanceFadeIcon : 1; // 0x804
	char bHideUponInteraction : 1; // 0x804
	char bHideUponPlayerMovement : 1; // 0x804
	char bImprintIconOnHUDUponInteraction : 1; // 0x804
	TArray<APlayerController*> DisallowedPlayerControllers; // 0x808
	TArray<AActor*> IgnoreInteractionBlockingActors; // 0x818
	float CurrentProgress; // 0x828
	FAnimatedIcon AnimatedIcon; // 0x830
	AActor* UseActor; // 0x848
	bool bClientInteract; // 0x850
	UUserWidget* CachedWidgetClass; // 0x858
	UAnimatedIconWidget* IconWidget; // 0x860
	UUserWidget* ImprintIconWidgetClass; // 0x868
	UAnimatedIconWidget_Imprint* IconWidget_Imprint; // 0x870
	TMap<FName, FAnimatedIcon> AnimatedIconMap; // 0x878
};

struct UW_WorldMapPin_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* ConfirmBtn; // 0x268
	UButton* Locked; // 0x270
	FName MissionName; // 0x278
	UW_WorldMap_C* WorldMap; // 0x280
	bool bMapInBuild?; // 0x288
	bool IsLocked?; // 0x289
};

struct UTireType {
	float FrictionScale; // 0x30
};

struct AProjectile {
	USphereComponent* CollisionComp; // 0x220
	UProjectileMovementComponent* MovementComp; // 0x228
	FVector StartPos; // 0x234
	bool bSpawnedImpactEffects; // 0x240
	AImpactEffect* ImpactEffectsClass; // 0x248
	USkeletalMesh* Mesh; // 0x250
	UStaticMesh* StaticMesh; // 0x258
};

struct AFirefightGS {
	FText FreeTextLocalized; // 0x6c0
};

struct UReadyOrNotSaveGame {
	FString SaveSlotName; // 0x28
	uint32_t UserIndex; // 0x38
	TArray<FSavedLoadout> Loadouts; // 0x40
	FPlayerDetails PlayerDetails; // 0x50
	TMap<ABaseItem*, FSavedWeaponAttachmentData> AttachmentSaveMap; // 0x60
	TMap<ETeamType, USkinComponent*> SkinSaveMap; // 0xb0
	TMap<EItemType, ABaseItem*> SavedWeaponClassOfTypeMap; // 0x100
	TMap<ABaseWeapon*, EFireMode> WeaponClassToDefaultFireModeMap; // 0x150
	TMap<ABaseItem*, FSavedWeaponPreset> WeaponToWeaponPresetsMap; // 0x1a0
	FPMap HashMap; // 0x1f0
};

struct UMovieSceneStringSection {
	FMovieSceneStringChannel StringCurve; // 0xe8
};

struct UParticleModuleLocationBoneSocket {
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

struct ADevice_S590_Breach_v2_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1190
};

struct UItemData {
	TArray<FWeaponData> PrimaryWeapons; // 0x30
	TArray<FWeaponData> BluePVPUniquePrimaryWeapons; // 0x40
	TArray<FWeaponData> RedPVPUniquePrimaryWeapons; // 0x50
	TArray<FWeaponData> SecondaryWeapons; // 0x60
	ABaseItem* NullItem; // 0x70
	UWeaponAttachment* NullPrimaryScopeAttachment; // 0x78
	UWeaponAttachment* NullMuzzleAttachment; // 0x80
	UWeaponAttachment* NullOverbarrelAttachment; // 0x88
	UWeaponAttachment* NullUnderbarrelAttachment; // 0x90
	UWeaponAttachment* NullStockAttachment; // 0x98
	UWeaponAttachment* NullGripAttachment; // 0xa0
	UWeaponAttachment* NullIlluminatorAttachment; // 0xa8
	UWeaponAttachment* NullAmmunitionAttachment; // 0xb0
	TArray<TSoftClassPtr<UObject>> DefaultItemsGivenToPlayer; // 0xb8
	USkinComponent* FactorySkin; // 0xc8
	TArray<FSavedLoadout> DefaultLoadouts; // 0xd0
	TArray<FDeviceData> LongTacticalItems; // 0xe0
	TArray<FDeviceData> TacticalItems; // 0xf0
	TArray<FArmourData> BodySelection; // 0x100
	TArray<FArmourData> HeadSelection; // 0x110
	TArray<USkinComponent*> UniformSelection; // 0x120
	TArray<FCharacterData> CharacterSelection; // 0x130
	UTexture2D* DefaultItemImage; // 0x140
	TArray<FText> PersonnelNames; // 0x148
	TArray<FText> PersonnelDescriptions; // 0x158
	int32_t AttachmentPointsBase; // 0x168
};

struct UDatasmithSceneComponentTemplate {
	FTransform RelativeTransform; // 0x30
	EComponentMobility Mobility; // 0x60
	TSoftObjectPtr<USceneComponent> AttachParent; // 0x68
	bool bVisible; // 0x90
	TSet<FName> Tags; // 0x98
};

struct UScrollBoxSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UParticleModuleAccelerationDrag {
	UDistributionFloat* DragCoefficient; // 0x38
	FRawDistributionFloat DragCoefficientRaw; // 0x40
};

struct UParticleModuleRotationRate_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x60
};

struct UUMGSequenceTickManager {
	TSet<TWeakObjectPtr<UUserWidget>> WeakUserWidgets; // 0x28
	UMovieSceneEntitySystemLinker* Linker; // 0x78
};

struct UButtonStyleAsset {
	FButtonStyle ButtonStyle; // 0x28
};

struct ULevelSequenceDirector {
	ULevelSequencePlayer* Player; // 0x28
	int32_t SubSequenceID; // 0x30
	int32_t MovieScenePlayerIndex; // 0x34
};

struct UMapBuildDataRegistry {
	ELightingBuildQuality LevelLightingQuality; // 0x28
};

struct USubmixEffectDelayPreset {
	FSubmixEffectDelaySettings Settings; // 0x9c
	FSubmixEffectDelaySettings DynamicSettings; // 0xa8
};

struct UMaterialExpressionDecalMipmapLevel {
	FExpressionInput TextureSize; // 0x40
	float ConstWidth; // 0x54
	float ConstHeight; // 0x58
};

struct UBookMark2D {
	float Zoom2D; // 0x28
	FIntPoint Location; // 0x2c
};

struct ASpotLight {
	USpotLightComponent* SpotLightComponent; // 0x230
};

struct UMaterialExpressionGIReplace {
	FExpressionInput Default; // 0x40
	FExpressionInput StaticIndirect; // 0x54
	FExpressionInput DynamicIndirect; // 0x68
};

struct UMaterialExpressionRayTracingQualitySwitch {
	FExpressionInput Normal; // 0x40
	FExpressionInput RayTraced; // 0x54
};

struct AQuestManager {
	bool bIsQuestActive; // 0x220
	TArray<UBaseQuestNode*> QuestNodes; // 0x228
	UBaseQuestNode* ActiveQuestNode; // 0x238
};

struct UParticleModuleTypeDataMesh {
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

struct UBTTask_WaitBlackboardTime {
	FBlackboardKeySelector BlackboardKey; // 0x78
};

struct UWaveOscillatorCameraShakePattern {
	float LocationAmplitudeMultiplier; // 0x38
	float LocationFrequencyMultiplier; // 0x3c
	FWaveOscillator X; // 0x40
	FWaveOscillator Y; // 0x4c
	FWaveOscillator Z; // 0x58
	float RotationAmplitudeMultiplier; // 0x64
	float RotationFrequencyMultiplier; // 0x68
	FWaveOscillator Pitch; // 0x6c
	FWaveOscillator Yaw; // 0x78
	FWaveOscillator Roll; // 0x84
	FWaveOscillator FOV; // 0x90
};

struct UMaterialExpressionRotator {
	FExpressionInput Coordinate; // 0x40
	FExpressionInput Time; // 0x54
	float CenterX; // 0x68
	float CenterY; // 0x6c
	float Speed; // 0x70
	uint32_t ConstCoordinate; // 0x74
};

struct AReadyOrNotTriggerVolume {
	TArray<AActor*> OverlappingClasses; // 0x228
	TArray<AActor*> OverlappingActors; // 0x238
	TArray<AActor*> testActors; // 0x248
};

struct UMagicLeapARPinSettings {
	float UpdateCheckFrequency; // 0x28
	FMagicLeapARPinState OnUpdatedEventTriggerDelta; // 0x2c
};

struct ACyberneticController {
	UAIPerceptionComponent* AIPerceptionComponent; // 0x328
	UAISenseConfig_Sight* SightConfig; // 0x330
	UAISenseConfig_Touch* TouchConfig; // 0x338
	UAISenseConfig_Damage* DamageConfig; // 0x340
	UAISenseConfig_Hearing* HearingConfig; // 0x348
	UMoraleComponent* MoraleComponent; // 0x350
	UTargetingComponent* TargetingComponent; // 0x358
	UBehaviourComponent* BehaviourComponent; // 0x360
	TMap<AActor*, float> LastHeardActorTime; // 0x368
	APlayerCharacter* SensingCharacter; // 0x3b8
	TArray<AReadyOrNotCharacter*> RecentlySeenSwat; // 0x3d8
	TArray<AReadyOrNotCharacter*> RecentlySeenSuspects; // 0x3e8
	TArray<AReadyOrNotCharacter*> RecentlySeenCivilians; // 0x3f8
	bool bDummyController; // 0x424
	TArray<AActor*> TrackedDistractions; // 0x470
	UBaseActivity* CurrentActivity; // 0x4a0
	TArray<UBaseActivity*> ActivityQueue; // 0x4a8
	float CallForHelpCoolDownDuration; // 0x4c8
	float MaxHearingForHelpDistance; // 0x4cc
	float FlashLightSeenCoolDownDuration; // 0x4d4
	TArray<AActor*> PotentialEnemies; // 0x4d8
	TMap<UBaseActivity*, float> ActivityCooldownMap; // 0x4f0
	TArray<UCoverPoint*> UnableToGetToCoverPoints; // 0x548
	TArray<APlayerCharacter*> PlayerCharacters; // 0x558
	UBaseCombatActivity* CombatActivity; // 0x5f0
};

struct UToIntegerField {
	UFieldNodeFloat* FloatField; // 0xb0
};

struct UPaperTerrainMaterial {
	TArray<FPaperTerrainMaterialRule> Rules; // 0x30
	UPaperSprite* InteriorFill; // 0x40
};

struct UAssetManagerSettings {
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

struct UPaperTileMap {
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

struct UMovieSceneMediaTrack {
	TArray<UMovieSceneSection*> MediaSections; // 0x98
};

struct UGameplayTask_WaitDelay {
	FMulticastInlineDelegate OnFinish; // 0x68
};

struct UMovieScene {
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

struct ABulletProjectile {
	UStaticMeshComponent* BulletMesh; // 0x288
	USkeletalMeshComponent* BulletMeshSkele; // 0x290
	UAudioComponent* WhizzAudioComp; // 0x298
	ABaseItem* FiredFromWeapon; // 0x2b8
	APlayerCharacter* FiredFromPlayer; // 0x2c0
	float HitAngleMultiplier; // 0x2c8
	float RequiredAngleToDeflect; // 0x2cc
	float PercentageToDeflect; // 0x2d0
	float DeflectionAmount; // 0x2d4
	float SpeedLossMultiplierPerSurface; // 0x2e0
	float DamageLossMultiplierPerSurface; // 0x2e4
	float VelocityRequiredToRespawn; // 0x2e8
	bool bDrawBlood; // 0x2ec
	FVector BulletProjectileScale; // 0x2fc
	float DecalScale; // 0x308
	bool bAffectedByGravity; // 0x30c
	USoundCue* BulletWizzSound; // 0x310
	float MinimumDistanceForWizz; // 0x318
	float requiredSpeedForWizz; // 0x31c
	float DebugLineSize; // 0x320
	AImpactEffect* ExitEffects; // 0x328
	AImpactEffect* RicochetEffects; // 0x330
	UParticleSystem* RichochetParticle; // 0x338
	float ArmorPiercing; // 0x340
	bool bDestroyOnHit; // 0x344
	bool bAttachOnHit; // 0x345
	float InitialSpeed; // 0x348
	FVector InitialLocation; // 0x34c
	AActor* OwningActor; // 0x358
	float LockIntegrityDamage; // 0x360
	USkeletalMesh* ProjectileMesh; // 0x368
	UStaticMesh* ProjectileMeshStatic; // 0x370
	UDamageType* InitialDamageType; // 0x378
	float LifeSpan; // 0x380
	float Drag; // 0x384
	float Wobble; // 0x388
	float InitialWobbleDelay; // 0x38c
	float PhysicsImpulseMultiplier; // 0x390
};

struct UMapActorIconWidget {
	UImage* Icon_Image; // 0x2b0
	UImage* Icon_Image_BG; // 0x2b8
};

struct UPartyBeaconState {
	FName SessionName; // 0x28
	int32_t NumConsumedReservations; // 0x30
	int32_t MaxReservations; // 0x34
	int32_t NumTeams; // 0x38
	int32_t NumPlayersPerTeam; // 0x3c
	FName TeamAssignmentMethod; // 0x40
	int32_t ReservedHostTeamNum; // 0x48
	int32_t ForceTeamNum; // 0x4c
	bool bRestrictCrossConsole; // 0x50
	TArray<FString> PlatformCrossplayRestrictions; // 0x58
	TArray<FPartyBeaconCrossplayPlatformMapping> PlatformTypeMapping; // 0x68
	bool bEnableRemovalRequests; // 0x78
	TArray<FPartyReservation> Reservations; // 0x80
};

struct UNiagaraComponentRendererProperties {
	USceneComponent* ComponentType; // 0x78
	uint32_t ComponentCountLimit; // 0x80
	FNiagaraVariableAttributeBinding EnabledBinding; // 0x88
	FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0xe0
	bool bAssignComponentsOnParticleID; // 0x138
	bool bOnlyCreateComponentsOnParticleSpawn; // 0x139
	int32_t RendererVisibility; // 0x13c
	USceneComponent* TemplateComponent; // 0x140
	TArray<FNiagaraComponentPropertyBinding> PropertyBindings; // 0x148
};

struct APrimary_FAL_OSW_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1130
};

struct APhysicsThruster {
	UPhysicsThrusterComponent* ThrusterComponent; // 0x220
};

struct UAnimationSharingSetup {
	TArray<FPerSkeletonAnimationSharingSetup> SkeletonSetups; // 0x28
	FAnimationSharingScalability ScalabilitySettings; // 0x38
};

struct UComponentDelegateBinding {
	TArray<FBlueprintComponentDelegateBinding> ComponentDelegateBindings; // 0x28
};

struct ACoverFireVolume {
	TArray<AFirePointActor*> FirePoints; // 0x258
	TArray<ASuspectCharacter*> BlacklistedSuspects; // 0x268
	TArray<ASuspectCharacter*> CachedSuspects; // 0x278
};

struct UARQRCodeComponent {
	FARQRCodeUpdatePayload ReplicatedPayload; // 0x280
};

struct UMaterialExpressionNamedRerouteUsage {
	UMaterialExpressionNamedRerouteDeclaration* Declaration; // 0x40
	FGuid DeclarationGuid; // 0x48
};

struct UGranularSynth {
	USoundWave* GranulatedSoundWave; // 0x6c0
};

struct UW_PlanningMap_BreachPoint_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Fade; // 0x268
	UW_Button_C* btn_BreachPoint; // 0x270
	UImage* img_SpawnMark; // 0x278
	UImage* img_SpawnSelect; // 0x280
	bool Hidden; // 0x288
	FMulticastInlineDelegate OnBreachPointHovered; // 0x290
	FMulticastInlineDelegate OnBreachPointClicked; // 0x2a0
	bool Selected; // 0x2b0
};

struct AHelmet_Glasses_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1550
	APlayerState* PlayerState; // 0x1558
};

struct UMaterialExpressionChannelMaskParameter {
	EChannelMaskParameterColor MaskChannel; // 0x70
};

struct UW_TutorialMessagePopup_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* InitMessageBox; // 0x268
	UImage* Image_241; // 0x270
	UVerticalBox* MessageBox; // 0x278
	UVerticalBox* MessageContentBox; // 0x280
	UTextBlock* MessageText; // 0x288
	UTextBlock* TitleText; // 0x290
	UOverlay* WidgetMessageBox; // 0x298
	TArray<FPromptInfo> PromptMessages; // 0x2a0
	FSlateFontInfo MessageFontInfo; // 0x2b0
	TArray<EActionMappingFilter> NewVar_2; // 0x308
	TArray<FVictoryInput> NewVar_3; // 0x318
	TArray<UW_TutorialMessageEntry_C*> Active; // 0x328
	bool Displayed; // 0x338
};

struct UW_BriefingBio_ProfileLeft_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* BioDescription; // 0x268
	UTextBlock* BioText; // 0x270
	UImage* ProfilePicture; // 0x278
	UImage* ProfilePicture_2; // 0x280
	FText Bio; // 0x288
	FText Description; // 0x2a0
	UTexture2D* ProfileImage; // 0x2b8
};

struct UHotkeyWidget {
	UTextBlock* Hotkey_Text; // 0x260
	UImage* Hotkey_Image; // 0x268
	UImage* HotkeyDivider_Image; // 0x270
	UTextBlock* RemainingUses_Text; // 0x278
	UWidgetAnimation* Anim_Pressed; // 0x280
	UWidgetAnimation* Anim_Released; // 0x288
	FName InputName; // 0x290
	FSlateBrush Icon; // 0x298
	char bCustomAnimation : 1; // 0x320
	char bShowRemainingUses : 1; // 0x320
};

struct AGameStateBase {
	AGameModeBase* GameModeClass; // 0x220
	AGameModeBase* AuthorityGameMode; // 0x228
	ASpectatorPawn* SpectatorClass; // 0x230
	TArray<APlayerState*> PlayerArray; // 0x238
	bool bReplicatedHasBegunPlay; // 0x248
	float ReplicatedWorldTimeSeconds; // 0x24c
	float ServerWorldTimeSecondsDelta; // 0x250
	float ServerWorldTimeSecondsUpdateFrequency; // 0x254
};

struct UParticleModuleVelocityOverLifetime {
	FRawDistributionVector VelOverLife; // 0x38
	char Absolute : 1; // 0x80
};

struct USoundSubmix {
	char bMuteWhenBackgrounded : 1; // 0x40
	TArray<USoundEffectSubmixPreset*> SubmixEffectChain; // 0x48
	USoundfieldEncodingSettingsBase* AmbisonicsPluginSettings; // 0x58
	int32_t EnvelopeFollowerAttackTime; // 0x60
	int32_t EnvelopeFollowerReleaseTime; // 0x64
	EGainParamMode GainMode; // 0x68
	float OutputVolume; // 0x6c
	float WetLevel; // 0x70
	float DryLevel; // 0x74
	FSoundModulationDestinationSettings OutputVolumeModulation; // 0x78
	FSoundModulationDestinationSettings WetLevelModulation; // 0x88
	FSoundModulationDestinationSettings DryLevelModulation; // 0x98
	FMulticastInlineDelegate OnSubmixRecordedFileDone; // 0xa8
};

struct UTocSpeechData {
	USoundCue* CivilianIncapacitated; // 0x30
	USoundCue* CivilianDead; // 0x38
	USoundCue* CivilianRestrained; // 0x40
	USoundCue* SuspectIncapacitated; // 0x48
	USoundCue* SuspectDead; // 0x50
	USoundCue* SuspectRestrained; // 0x58
	USoundCue* OfficerDown; // 0x60
	USoundCue* DOA; // 0x68
	UFMODEvent* SWATVictory; // 0x70
	UFMODEvent* SuspectVictory; // 0x78
	UFMODEvent* SWATInCustody; // 0x80
	UFMODEvent* SuspectInCustody_MP; // 0x88
	UFMODEvent* SWATReinforcements; // 0x90
	UFMODEvent* SuspectReinforcements; // 0x98
	UFMODEvent* BothTeamsReinforcements; // 0xa0
	UFMODEvent* SWATFriendlyFire; // 0xa8
	UFMODEvent* SuspectFriendlyFire; // 0xb0
	UFMODEvent* VIPEscorted; // 0xb8
	UFMODEvent* VIPExecuted; // 0xc0
	UFMODEvent* SWATKilledVIP; // 0xc8
	UFMODEvent* SuspectKilledVIP; // 0xd0
	UFMODEvent* VIPInCustody; // 0xd8
	UFMODEvent* VIPReleased; // 0xe0
};

struct UAsyncActionLoadPrimaryAssetClassList {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UGameplayTasksComponent {
	char bIsNetDirty : 1; // 0xbc
	TArray<UGameplayTask*> SimulatedTasks; // 0xc0
	TArray<UGameplayTask*> TaskPriorityQueue; // 0xd0
	TArray<UGameplayTask*> TickingTasks; // 0xf0
	TArray<UGameplayTask*> KnownTasks; // 0x100
	FMulticastInlineDelegate OnClaimedResourcesChange; // 0x110
};

struct UW_StandardCombobox_New_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* BackGroundImg; // 0x268
	UMenuAnchor* ComboboxAnchor; // 0x270
	UButton* ComboboxButton; // 0x278
	UImage* ComboButton_Dn; // 0x280
	UImage* ComboButton_Hi; // 0x288
	UImage* DropdownArrow; // 0x290
	UTextBlock* SelectedOptionTextWidget; // 0x298
	TArray<FString> OptionsAsStrings; // 0x2a0
	TArray<FText> OptionsAsText; // 0x2b0
	int32_t DefaultOptionSelected; // 0x2c0
	FMulticastInlineDelegate OnOptionMenuOpened; // 0x2c8
	FMulticastInlineDelegate OnOptionMenuClosed; // 0x2d8
	FMulticastInlineDelegate OnNewOptionSelected; // 0x2e8
	FMulticastInlineDelegate OnHovered; // 0x2f8
	FMulticastInlineDelegate OnUnhovered; // 0x308
	UTextBlock* DescriptionWidget; // 0x318
	FText DescriptionText; // 0x320
	FMulticastInlineDelegate OnPressed; // 0x338
	FMulticastInlineDelegate OnReleased; // 0x348
	bool Opened; // 0x358
	bool Hovered; // 0x359
	bool Pressed; // 0x35a
	TArray<FText> OptionDescriptions; // 0x360
	int32_t CurrentlySelectedOption; // 0x370
	UFMODEvent* OpenedSound; // 0x378
	UFMODEvent* ClosedSound; // 0x380
	UFMODEvent* OptionSelectedSound; // 0x388
	UFMODEvent* ComboboxHoveredSound; // 0x390
	FLinearColor ImageBackgroundColor; // 0x398
	FLinearColor ItemBackgroundColor; // 0x3a8
	FLinearColor HoveredItemBackgroundColor; // 0x3b8
	int32_t FontSize; // 0x3c8
};

struct UANIMBP_FAL_OSW_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x2d8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x320
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x478
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x518
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x598
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x618
	FAnimNode_Slot AnimGraphNode_Slot; // 0x6d8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x720
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x748
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x770
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x790
	FAnimNode_Root AnimGraphNode_Root; // 0x898
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x8c8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x8e8
	float Mag01Alpha; // 0x9f0
	bool bIsSemi; // 0x9f4
};

struct USoundData {
	USteamAudioComponent* SteamAudioComponent; // 0x30
};

struct UMovieSceneEntitySystemLinker {
	FMovieSceneEntitySystemGraph SystemGraph; // 0x298
};

struct UParticleModuleRotationRateMultiplyLife {
	FRawDistributionFloat LifeMultiplier; // 0x30
};

struct USubmixEffectFlexiverbPreset {
	FSubmixEffectFlexiverbSettings Settings; // 0xa0
};

struct ARunImpactEffects_C {
	USceneComponent* DefaultSceneRoot; // 0xcb0
};

struct UMaterialExpressionStaticSwitch {
	char DefaultValue : 1; // 0x40
	FExpressionInput A; // 0x44
	FExpressionInput B; // 0x58
	FExpressionInput Value; // 0x6c
};

struct AReadyOrNotPlayerState {
	UVOIPTalker* VOIPTalker; // 0x320
	bool bHasFinishedLoading; // 0x338
	int32_t Kills; // 0x33c
	int32_t KillsThisLife; // 0x340
	int32_t TeamKills; // 0x344
	int32_t Arrests; // 0x348
	int32_t TimesArrested; // 0x34c
	int32_t ArrestsThisLife; // 0x350
	int32_t Objectives; // 0x354
	int32_t Reports; // 0x358
	int32_t Evidence; // 0x35c
	TArray<AEvidenceActor*> EvidenceActorsInPossession; // 0x360
	UDamageType* DeathDamageType; // 0x378
	ABaseMagazineWeapon* DeathWeapon; // 0x380
	EFireMode LastFireMode; // 0x388
	bool bDeadToPointDamage; // 0x389
	FHitResult DeathTraceHit; // 0x38c
	APlayerCharacter* DeathKiller; // 0x418
	int32_t Deaths; // 0x420
	int32_t Incapacitations; // 0x424
	float DamageDealt; // 0x428
	float DamageReceived; // 0x42c
	FString PlayerSpawnTag; // 0x430
	int32_t BulletsFired; // 0x444
	int32_t BulletsFiredThisLife; // 0x448
	ETeamType Team; // 0x44c
	FSavedLoadout ServerSavedLoadout; // 0x450
	FMulticastInlineDelegate OnPlayerLoadoutChanged; // 0x588
	bool bReady; // 0x599
	bool bSquadLeader; // 0x59a
	FSavedLoadout LastLoadout; // 0x5a0
	float PointsFromKills; // 0x6d8
	float PointsFromDamage; // 0x6dc
	float PointsFromArrests; // 0x6e0
	float PointsFromObjective; // 0x6e4
	float PointsFromReportingKills; // 0x6e8
	float PointsFromReportingArrests; // 0x6ec
	bool bIsInGame; // 0x6f0
	bool bJoinInProgress; // 0x6f1
	bool bIsVIP; // 0x6f2
	bool bWasVIP; // 0x6f3
	int32_t GrenadesThrown; // 0x6f4
	int32_t TotalYells; // 0x6f8
	int32_t NumberOrdersGiven; // 0x6fc
	int32_t BulletsHit; // 0x700
	int32_t BulletsHitThisLife; // 0x704
	int32_t Headshots; // 0x708
	float TimeAlive; // 0x70c
	EVoiceType VoiceType; // 0x718
	bool bTorsoInjured; // 0x728
	bool bLeftArmInjured; // 0x729
	bool bRightArmInjured; // 0x72a
	bool bLeftLegInjured; // 0x72b
	bool bRightLegInjured; // 0x72c
	bool bHeadInjured; // 0x72d
	int32_t BulletsBlocked; // 0x730
	int32_t HitsReceived; // 0x734
};

struct USwatDuelingCombatMove {
	USwatDuelingCombatMove* LeaderCombatMove; // 0x1d8
};

struct APaperFlipbookActor {
	UPaperFlipbookComponent* RenderComponent; // 0x220
};

struct UW_COOPScorePopUp_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UVerticalBox* ScoreNotify_Container; // 0x270
};

struct UMovieSceneByteSection {
	FMovieSceneByteChannel ByteCurve; // 0xf0
};

struct UANIMBP_P90_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x308
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x350
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x3d0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x4d8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x4f8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x518
	float Mag01Alpha; // 0x620
	float ScopeAdjustAlpha; // 0x624
};

struct UActorSequenceComponent {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0xb0
	UActorSequence* Sequence; // 0xc8
	UActorSequencePlayer* SequencePlayer; // 0xd0
};

struct UEngageTargetActivity {
	TArray<ABaseItem*> AvailableNonLethalItems; // 0x208
	ABaseItem* NonLethalItemChosen; // 0x218
};

struct UGeometryCacheCodecRaw {
	int32_t DummyProperty; // 0x38
};

struct UBlueprintCore {
	UObject* SkeletonGeneratedClass; // 0x28
	UObject* GeneratedClass; // 0x30
	bool bLegacyNeedToPurgeSkelRefs; // 0x38
	FGuid BlueprintGuid; // 0x3c
};

struct ADamageProjectile {
	float Damage; // 0x274
	UDamageType* DamageType; // 0x278
	UFMODEvent* HitMarker; // 0x280
};

struct UGeometryCollectionDebugDrawComponent {
	AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0xb0
	AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0xb8
};

struct UEnvelopeFollowerListener {
	FMulticastInlineDelegate OnEnvelopeFollowerUpdate; // 0xb0
};

struct UGizmoLineHandleComponent {
	FVector Normal; // 0x470
	float HandleSize; // 0x47c
	float Thickness; // 0x480
	FVector Direction; // 0x484
	float Length; // 0x490
	bool bImageScale; // 0x494
};

struct UAchievementQueryCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct APlacedC2Explosive {
	UParticleSystemComponent* ExplosionComp; // 0x228
	UFMODAudioComponent* AudioComp; // 0x230
	USkeletalMeshComponent* MeshComp; // 0x238
	UInteractableComponent* C2InteractableComponent; // 0x240
	UAIPerceptionStimuliSourceComponent* PerceptionStimuliComp; // 0x248
	AC2Explosive* ConnectedC2Explosive; // 0x250
	AController* PlacedByController; // 0x258
	float DamageToInflict; // 0x260
	float MinDamageToInflict; // 0x264
	UDamageType* DamageType; // 0x268
	float DamageInnerRadius; // 0x270
	float DamageOuterRadius; // 0x274
	float ExplosionPostKillTime; // 0x278
	bool bDetonated; // 0x27c
	float DoorIntegrityDamage; // 0x280
	AActor* TargetItem; // 0x288
	UFMODEvent* FMODC2ExplosionAudio; // 0x290
	FHitResult PlacementHit; // 0x298
	bool bUseScreenShake; // 0x320
	UMatineeCameraShake* ExplosionScreenShake; // 0x328
	float CameraShakeRadius; // 0x330
	UStunDamage* StunDamageType; // 0x338
	bool bRemovedViaMultitool; // 0x340
	bool bIsBeingRemoved; // 0x350
};

struct UMagicLeapImageTrackerComponent {
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

struct AGeometryCacheActor {
	UGeometryCacheComponent* GeometryCacheComponent; // 0x220
};

struct UAnimNotify_SpawnThrownItem {
	ABaseItem* ItemClass; // 0x38
	char bLocalOnly : 1; // 0x40
	char bNonLocalOnly : 1; // 0x40
	FName BoneToSpawnOn; // 0x44
	char bCustomThrowDirection : 1; // 0x4c
	FRotator ThrowDirection; // 0x50
};

struct ACullDistanceVolume {
	TArray<FCullDistanceSizePair> CullDistances; // 0x258
	char bEnabled : 1; // 0x268
};

struct UBleedComponent {
	UFMODEvent* BleedEvent; // 0xb0
	bool bIsBleeding; // 0xb8
	bool bTempStopBleeding; // 0xc0
	int32_t HealCount; // 0xc4
};

struct UVideoCaptureProtocol {
	bool bUseCompression; // 0x68
	float CompressionQuality; // 0x6c
};

struct UANIMBP_M4A1_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x2d8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x358
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3f8
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x478
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x4c0
	FAnimNode_Root AnimGraphNode_Root; // 0x4e0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x510
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x668
	FAnimNode_Slot AnimGraphNode_Slot; // 0x728
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x770
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x798
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x7c0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x8c8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x8e8
	float Mag01Alpha; // 0x9f0
	bool bIsSemi; // 0x9f4
	bool bBoltCatchOut; // 0x9f5
	float CarrierHandleAlpha; // 0x9f8
	float Mag02Alpha; // 0x9fc
};

struct UVerticalBoxSlot {
	FSlateChildSize Size; // 0x38
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
};

struct UBehaviorTreeManager {
	int32_t MaxDebuggerSteps; // 0x28
	TArray<FBehaviorTreeTemplateInfo> LoadedTemplates; // 0x30
	TArray<UBehaviorTreeComponent*> ActiveComponents; // 0x40
};

struct AReadyOrNotAIController {
	UAIPerceptionComponent* AIPerceptionComponent; // 0x328
	UAISenseConfig_Sight* SightConfig; // 0x330
	UAISenseConfig_Touch* TouchConfig; // 0x338
	UAISenseConfig_Damage* DamageConfig; // 0x340
	UAISenseConfig_Hearing* HearingConfig; // 0x348
	APlayerCharacter* TargetEnemy; // 0x360
};

struct UW_SWATCommandStatus_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_CommandCompletedWhileAnotherQueued; // 0x268
	UWidgetAnimation* Anim_CommandIssued; // 0x270
	UWidgetAnimation* Anim_CommandCompleted; // 0x278
	UVerticalBox* CommandStatus_Box; // 0x280
	UHorizontalBox* CurrentCommand_Box; // 0x288
	UW_Text_C* CurrentCommand_Pulse_Text; // 0x290
	UW_Text_C* CurrentCommand_Status_Text; // 0x298
	UW_Text_C* CurrentCommand_Text; // 0x2a0
	USizeBox* HealthStatus_SizeBox; // 0x2a8
	URichTextBlock* IssueCommand_Hotkey_RichText; // 0x2b0
	UW_Text_C* PlayerHealth_Text; // 0x2b8
	UHorizontalBox* QueueCommand_Box; // 0x2c0
	UTextBlock* QueueCommand_SubText; // 0x2c8
	URichTextBlock* QueueCommand_SubText_Rich; // 0x2d0
	USizeBox* SizeBox; // 0x2d8
	UVerticalBox* SwatInfo_Box; // 0x2e0
	UW_Text_C* SwatName_Text; // 0x2e8
	UHorizontalBox* SwatStats_Box; // 0x2f0
	USizeBox* TeamIndicator_Box; // 0x2f8
	UImage* TeamIndicator_Image; // 0x300
	bool bIsLead; // 0x308
	ESquadPosition SquadPosition; // 0x309
	EPlayerHealthStatus HealthStatus; // 0x30a
	float MaxHeight; // 0x30c
	float MinHeight; // 0x310
	FLinearColor BlueTeamColor; // 0x314
	FLinearColor RedTeamColor; // 0x324
	FLinearColor ElementColor; // 0x334
	FLinearColor HealthyColor; // 0x344
	FLinearColor InjuredColor; // 0x354
	FLinearColor IncapacitatedColor; // 0x364
	bool IsDesignTime; // 0x374
	float TargetHeight; // 0x378
	FLinearColor NormalColor; // 0x37c
	FTimerHandle TH_HeightChange; // 0x390
	bool bWaiting; // 0x398
	bool bIsProgress; // 0x399
	float TargetHealthWidth; // 0x39c
	FTimerHandle TH_HealthWidthChange; // 0x3a0
};

struct UInterpTrackInstFloatAnimBPParam {
	UAnimInstance* AnimScriptInstance; // 0x28
	float ResetFloat; // 0x30
};

struct UPenetrationData {
	FMaterialPenetration DefaultPenetrationData; // 0x30
	FMaterialPenetration RON_Aluminium; // 0x38
	FMaterialPenetration RON_Asphalt; // 0x40
	FMaterialPenetration RON_Brick; // 0x48
	FMaterialPenetration RON_CarbonFibre; // 0x50
	FMaterialPenetration RON_Cardboard; // 0x58
	FMaterialPenetration RON_Ceramic; // 0x60
	FMaterialPenetration RON_ConcreteSoft; // 0x68
	FMaterialPenetration RON_ConcreteStrong; // 0x70
	FMaterialPenetration RON_Dirt; // 0x78
	FMaterialPenetration RON_Drywall; // 0x80
	FMaterialPenetration RON_Electrical; // 0x88
	FMaterialPenetration RON_EnergyShield; // 0x90
	FMaterialPenetration RON_Fabric_Carpet; // 0x98
	FMaterialPenetration RON_Fabric_Stuffing; // 0xa0
	FMaterialPenetration RON_Fabric_Thin; // 0xa8
	FMaterialPenetration RON_Flesh; // 0xb0
	FMaterialPenetration RON_Galvanized; // 0xb8
	FMaterialPenetration RON_Glass_Plate; // 0xc0
	FMaterialPenetration RON_Glass_Windshield; // 0xc8
	FMaterialPenetration RON_Grass; // 0xd0
	FMaterialPenetration RON_Gravel; // 0xd8
	FMaterialPenetration RON_Ice; // 0xe0
	FMaterialPenetration RON_Lava; // 0xe8
	FMaterialPenetration RON_Lead; // 0xf0
	FMaterialPenetration RON_Leaves; // 0xf8
	FMaterialPenetration RON_Limestone; // 0x100
	FMaterialPenetration RON_Mahogany; // 0x108
	FMaterialPenetration RON_Marble_Coated; // 0x110
	FMaterialPenetration RON_Marble_Thick; // 0x118
	FMaterialPenetration RON_Mud; // 0x120
	FMaterialPenetration RON_Oil; // 0x128
	FMaterialPenetration RON_Paper; // 0x130
	FMaterialPenetration RON_Pine; // 0x138
	FMaterialPenetration RON_Plaster; // 0x140
	FMaterialPenetration RON_Plastic; // 0x148
	FMaterialPenetration RON_Plywood; // 0x150
	FMaterialPenetration RON_Polystyrene; // 0x158
	FMaterialPenetration RON_Powder; // 0x160
	FMaterialPenetration RON_Rock; // 0x168
	FMaterialPenetration RON_Rubber; // 0x170
	FMaterialPenetration RON_Sand; // 0x178
	FMaterialPenetration RON_Snow; // 0x180
	FMaterialPenetration RON_Soil; // 0x188
	FMaterialPenetration RON_Steel; // 0x190
	FMaterialPenetration RON_Tin; // 0x198
	FMaterialPenetration RON_Treewood; // 0x1a0
	FMaterialPenetration RON_Wallpaper; // 0x1a8
	FMaterialPenetration RON_Water; // 0x1b0
};

struct UMRMeshComponent {
	UMaterialInterface* Material; // 0x460
	UMaterialInterface* WireframeMaterial; // 0x468
	bool bCreateMeshProxySections; // 0x470
	bool bUpdateNavMeshOnMeshUpdate; // 0x471
	bool bNeverCreateCollisionMesh; // 0x472
	UBodySetup* CachedBodySetup; // 0x478
	TArray<UBodySetup*> BodySetups; // 0x480
};

struct UParticleModuleRotation {
	FRawDistributionFloat StartRotation; // 0x30
};

struct UScrollBoxWidgetStyle {
	FScrollBoxStyle ScrollBoxStyle; // 0x30
};

struct UDatasmithAreaLightActorTemplate {
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

struct USceneCaptureComponentCube {
	UTextureRenderTargetCube* TextureTarget; // 0x2b0
	bool bCaptureRotation; // 0x2b8
	UTextureRenderTargetCube* TextureTargetLeft; // 0x2c0
	UTextureRenderTargetCube* TextureTargetRight; // 0x2c8
	UTextureRenderTarget2D* TextureTargetODS; // 0x2d0
	float IPD; // 0x2d8
};

struct UHapticFeedbackEffect_Buffer {
	TArray<char> Amplitudes; // 0x28
	int32_t SampleRate; // 0x38
};

struct ASniperSpawn {
	FName SpawnLabel; // 0x220
	bool bMovementLocked; // 0x228
	bool bStartInADS; // 0x229
	bool bLockADS; // 0x22a
	ASniperCharacter* SniperClass; // 0x230
	ASniperCharacter* SpotterClass; // 0x238
	ASniperCharacter* MarksmanClass; // 0x240
	UArrowComponent* SpawnDirection; // 0x248
	USceneComponent* RootSceneComponent; // 0x250
	bool bHasSniperSpawned; // 0x258
	ASniperCharacter* SpawnedSniper; // 0x260
};

struct UAnimationDataSourceRegistry {
	TMap<FName, TWeakObjectPtr<UObject>> DataSources; // 0x28
};

struct UMaterialExpressionRound {
	FExpressionInput Input; // 0x40
};

struct UVisualEffect {
	float Impact; // 0x278
};

struct UARImageComponent {
	FARImageUpdatePayload ReplicatedPayload; // 0x280
};

struct UW_ScoreNotify_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_HideScore; // 0x268
	UWidgetAnimation* Anim_ShowScore; // 0x270
	UImage* RedLine_Image; // 0x278
	UTextBlock* Score_Text; // 0x280
	UTextBlock* Score_Value; // 0x288
	FText ScoreText; // 0x290
	int32_t CalculatedScore; // 0x2a8
	bool bGive; // 0x2ac
	float ElapsedTime; // 0x2b0
	float ScoreCounterSpeed; // 0x2b4
	FString FinalString; // 0x2b8
	bool bTextAnimationFinished; // 0x2c8
	int32_t Iterator; // 0x2cc
	TArray<FString> Chars; // 0x2d0
	float CurrentDelay; // 0x2e0
	float DelayBetweenLetters; // 0x2e4
	float DelayBetweenWords; // 0x2e8
	FString EndString; // 0x2f0
	bool bFadeOut; // 0x300
	int32_t TotalScore; // 0x304
	float ElapsedTime_Text; // 0x308
	FFMODEventInstance FMOD_ScoreCounterInstance; // 0x310
	FFMODEventInstance FMOD_ScoreNotifyInstance; // 0x318
};

struct AWeaponCacheActor {
	TArray<ABaseMagazineWeapon*> AvailableWeapons; // 0x220
	USceneComponent* DefaultScene; // 0x230
	UArrowComponent* ArrowComponent; // 0x238
};

struct UInterpTrackInstDirector {
	AActor* OldViewTarget; // 0x28
};

struct ULightMapVirtualTexture2D {
	TArray<int8_t> TypeToLayer; // 0x1a0
};

struct UW_KingOfTheHillMeter_V2_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UHorizontalBox* LeftAligned_HorizontalBox; // 0x268
	UProgressBar* ProgressBar_LeftAligned; // 0x270
	UOverlay* ProgressBar_Overlay_Left; // 0x278
	UOverlay* ProgressBar_Overlay_Right; // 0x280
	UProgressBar* ProgressBar_RightAligned; // 0x288
	UHorizontalBox* RightAligned_HorizontalBox; // 0x290
	UWidgetSwitcher* StyleSwitcher; // 0x298
	int32_t LastValue; // 0x2a0
	EHorizontalAlignment Alignment; // 0x2a4
	ETeamType Team; // 0x2a5
};

struct UAnimNotify_ChangeBehaviour {
	EChangeBehaviour ChangeBehaviour; // 0x38
	TArray<EBehaviourMods> Behaviours; // 0x40
};

struct AFootstepFoleyVolume {
	USceneComponent* SoundLocation; // 0x220
	UFootstepFoleyComponent* Bounds; // 0x228
};

struct UBoxComponent {
	FVector BoxExtent; // 0x468
	float LineThickness; // 0x474
};

struct UMaterialExpressionMultiply {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct USourceEffectWaveShaperPreset {
	FSourceEffectWaveShaperSettings Settings; // 0x98
};

struct UAITask {
	AAIController* OwnerController; // 0x68
};

struct ASwatCrouchVolume {
	TMap<ASWATCharacter*, bool> CachedSwat; // 0x258
};

struct UAISystemBase {
	FSoftClassPath AISystemClassName; // 0x28
	FName AISystemModuleName; // 0x40
	bool bInstantiateAISystemOnClient; // 0x50
};

struct USoundfieldEffectBase {
	USoundfieldEffectSettingsBase* Settings; // 0x28
};

struct USlider {
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

struct UPlanarReflectionComponent {
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

struct USlateWidgetStyleAsset {
	USlateWidgetStyleContainerBase* CustomStyle; // 0x28
};

struct UMeshSimplificationSettings {
	FName MeshReductionModuleName; // 0x38
};

struct UTacticalAuthorityCommandWidget {
	ETacticalAuthorityVoice SelectedVoiceLine; // 0x260
	AActor* ReportItem; // 0x268
	AActor* CommandActor; // 0x270
	UStaticMesh* CommandMoveToMesh; // 0x278
};

struct UAudioCaptureComponent {
	int32_t JitterLatencyFrames; // 0x6c0
};

struct ULandscapeHeightfieldCollisionComponent {
	TArray<ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x450
	int32_t SectionBaseX; // 0x460
	int32_t SectionBaseY; // 0x464
	int32_t CollisionSizeQuads; // 0x468
	float CollisionScale; // 0x46c
	int32_t SimpleCollisionSizeQuads; // 0x470
	TArray<char> CollisionQuadFlags; // 0x478
	FGuid HeightfieldGuid; // 0x488
	FBox CachedLocalBox; // 0x498
	LazyObjectProperty RenderComponent; // 0x4b4
	TArray<UPhysicalMaterial*> CookedPhysicalMaterials; // 0x4e0
};

struct ABP_AudioPropagater_C {
	UStaticMeshComponent* Cube; // 0x220
	USceneComponent* DefaultSceneRoot; // 0x228
};

struct AHUD_TDM_C {
	USceneComponent* DefaultSceneRoot; // 0x318
};

struct UW_TabScreen_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	USizeBox* ObjectivesBox; // 0x268
	UVerticalBox* PlayerListBox_2; // 0x270
	UW_Briefing_Objectives_C* W_Briefing_Objectives; // 0x278
};

struct ALauncherProjectile_Base_C {
	UParticleSystemComponent* ExplodeParticleEffect; // 0x3d0
};

struct UParticleModuleLocationPrimitiveBase {
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

struct UFMODAnimNotifyPlay {
	char bFollow : 1; // 0x38
	FString AttachName; // 0x40
	UFMODEvent* Event; // 0x50
};

struct UMotoSynthPreset {
	FMotoSynthRuntimeSettings Settings; // 0x28
};

struct UMaterialExpressionLandscapeGrassOutput {
	TArray<FGrassInput> GrassTypes; // 0x40
};

struct UNiagaraRibbonRendererProperties {
	UMaterialInterface* Material; // 0x78
	FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x80
	ENiagaraRibbonFacingMode FacingMode; // 0xa0
	FNiagaraRibbonUVSettings UV0Settings; // 0xa4
	FNiagaraRibbonUVSettings UV1Settings; // 0xc8
	ENiagaraRibbonDrawDirection DrawDirection; // 0xec
	ENiagaraRibbonShapeMode Shape; // 0xed
	bool bEnableAccurateGeometry; // 0xee
	int32_t WidthSegmentationCount; // 0xf0
	int32_t MultiPlaneCount; // 0xf4
	int32_t TubeSubdivisions; // 0xf8
	TArray<FNiagaraRibbonShapeCustomVertex> CustomVertices; // 0x100
	float CurveTension; // 0x110
	ENiagaraRibbonTessellationMode TessellationMode; // 0x114
	int32_t TessellationFactor; // 0x118
	bool bUseConstantFactor; // 0x11c
	float TessellationAngle; // 0x120
	bool bScreenSpaceTessellation; // 0x124
	FNiagaraVariableAttributeBinding PositionBinding; // 0x128
	FNiagaraVariableAttributeBinding ColorBinding; // 0x180
	FNiagaraVariableAttributeBinding VelocityBinding; // 0x1d8
	FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x230
	FNiagaraVariableAttributeBinding RibbonTwistBinding; // 0x288
	FNiagaraVariableAttributeBinding RibbonWidthBinding; // 0x2e0
	FNiagaraVariableAttributeBinding RibbonFacingBinding; // 0x338
	FNiagaraVariableAttributeBinding RibbonIdBinding; // 0x390
	FNiagaraVariableAttributeBinding RibbonLinkOrderBinding; // 0x3e8
	FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x440
	FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x498
	FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x4f0
	FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x548
	FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x5a0
	FNiagaraVariableAttributeBinding RibbonUVDistance; // 0x5f8
	FNiagaraVariableAttributeBinding U0OverrideBinding; // 0x650
	FNiagaraVariableAttributeBinding V0RangeOverrideBinding; // 0x6a8
	FNiagaraVariableAttributeBinding U1OverrideBinding; // 0x700
	FNiagaraVariableAttributeBinding V1RangeOverrideBinding; // 0x758
	TArray<FNiagaraMaterialAttributeBinding> MaterialParameterBindings; // 0x7b0
};

struct UANIMBP_Sequencer_Head_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_PoseBlendNode AnimGraphNode_PoseBlendNode; // 0x2f8
	FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x398
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x570
	FAnimNode_Slot AnimGraphNode_Slot; // 0x630
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x678
	UPoseAsset* FaceRomRef; // 0x6f8
	USkeletalMeshComponent* Bodyref; // 0x700
};

struct UMaterialExpressionSpriteTextureSampler {
	bool bSampleAdditionalTextures; // 0x80
	int32_t AdditionalSlotIndex; // 0x84
	FText SlotDisplayName; // 0x88
};

struct AShell_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UStaticMeshComponent* StaticMesh1; // 0x270
	UArrowComponent* Arrow; // 0x278
	USkeletalMesh* ShellMesh; // 0x280
	float InitialSpeed; // 0x288
	bool SoundPlayed; // 0x28c
	float RightVectorMultiplier; // 0x290
	float UpVectorMultiplier; // 0x294
	float ForwardVectorMultiplier; // 0x298
	TArray<AActor*> ShellActors; // 0x2a0
};

struct UDistributionVectorUniformCurve {
	FInterpCurveTwoVectors ConstantCurve; // 0x38
	char bLockAxes1 : 1; // 0x50
	char bLockAxes2 : 1; // 0x50
	EDistributionVectorLockFlags LockedAxes[0x2]; // 0x54
	EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x56
	char bUseExtremes : 1; // 0x5c
};

struct UTexture2DDynamic {
	EPixelFormat Format; // 0x180
};

struct UFindFriendSessionCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct APickupWeaponActor {
	ABaseWeapon* Weapon; // 0x288
	bool bKillOnPickup; // 0x290
	bool bSecondaryWeapon; // 0x291
	bool bModifyLoadout; // 0x292
	UWeaponAttachment* ScopeAttachment; // 0x298
	UWeaponAttachment* MuzzleAttachment; // 0x2a0
	UWeaponAttachment* UnderbarrelAttachment; // 0x2a8
	UWeaponAttachment* OverbarrelAttachment; // 0x2b0
};

struct UBTTask_MoveTo {
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

struct UVariantSet {
	FText DisplayText; // 0x28
	bool bExpanded; // 0x58
	TArray<UVariant*> Variants; // 0x60
	UTexture2D* Thumbnail; // 0x70
};

struct UMaterialExpressionDesaturation {
	FExpressionInput Input; // 0x40
	FExpressionInput Fraction; // 0x54
	FLinearColor LuminanceFactors; // 0x68
};

struct UMaterialExpressionVectorNoise {
	FExpressionInput Position; // 0x40
	EVectorNoiseFunction NoiseFunction; // 0x54
	int32_t Quality; // 0x58
	char bTiling : 1; // 0x5c
	uint32_t TileSize; // 0x60
};

struct USubmixEffectDynamicsProcessorPreset {
	FSubmixEffectDynamicsProcessorSettings Settings; // 0xf0
};

struct UParticleModuleSourceMovement {
	FRawDistributionVector SourceMovementScale; // 0x30
};

struct ASpectatePawn {
	bool bDeadSpectatePawn; // 0x2b0
	bool bBlendWithViewTarget; // 0x2b2
	bool bPendingCenterprint; // 0x2b3
	float PendingCenterprintDuration; // 0x2b4
	FName PendingCenterprintType; // 0x2b8
	APlayerCharacter* PendingCenterprintOther; // 0x2c0
	UMaterial* HeadcamMaterial; // 0x2c8
	UMaterialInstanceDynamic* HeadcamMaterialInstance; // 0x2d0
	UUserWidget* SpectateWidget; // 0x2d8
	USpectatorCharacterHUD* SpectatorHUD; // 0x2e0
	bool bShouldShowViewTargetHUD; // 0x2e8
	AActor* CurrentViewTarget; // 0x2f0
	int32_t PotentialViewTargetCount; // 0x2f8
	bool bHideWidgets; // 0x2fc
	APlayerCharacter* Killer; // 0x300
	APlayerCharacter* KilledCharacter; // 0x308
};

struct USubmixEffectReverbPreset {
	FSubmixEffectReverbSettings Settings; // 0xd0
};

struct UAISense_Touch {
	TArray<FAITouchEvent> RegisteredEvents; // 0x80
};

struct AControlPointMeshActor {
	UControlPointMeshComponent* ControlPointMeshComponent; // 0x220
};

struct UNavCollision {
	TArray<FNavCollisionCylinder> CylinderCollision; // 0x80
	TArray<FNavCollisionBox> BoxCollision; // 0x90
	UNavArea* AreaClass; // 0xa0
	char bGatherConvexGeometry : 1; // 0xa8
	char bCreateOnClient : 1; // 0xa8
};

struct ACoverActor {
	AThreatAwarenessActor* CoverForThreatAngle; // 0x220
	bool bIsSwatCover; // 0x228
	bool bIsCrouchingCover; // 0x229
	APlayerCharacter* CoverInUseByPlayer; // 0x230
	USceneComponent* DefaultScene; // 0x238
};

struct UAnimComposite {
	FAnimTrack AnimationTrack; // 0xa8
};

struct ADebugDisplayActor {
	USceneComponent* SceneComponent; // 0x228
	UWidgetComponent* WidgetComponent; // 0x230
	float LifeSpan; // 0x238
	bool bBillboarding; // 0x23c
	FVector Velocity; // 0x240
};

struct UPaperSpriteComponent {
	UPaperSprite* SourceSprite; // 0x478
	UMaterialInterface* MaterialOverride; // 0x480
	FLinearColor SpriteColor; // 0x488
};

struct UFileMediaSource {
	FString FilePath; // 0x88
	bool PrecacheFile; // 0x98
};

struct UHotkeysWidget {
	UOverlay* Hotkeys_Overlay; // 0x278
	UHorizontalBox* Hotkeys_Container; // 0x280
	UHotkeyWidget* Hotkey_Grenade; // 0x288
	UHotkeyWidget* Hotkey_Chemlight; // 0x290
	UHotkeyWidget* Hotkey_NVG; // 0x298
	UHotkeyWidget* Hotkey_Scope; // 0x2a0
	UWidgetSwitcher* IlluminatorAttachment_Switcher; // 0x2a8
	UHotkeyWidget* Hotkey_Laser; // 0x2b0
	UHotkeyWidget* Hotkey_Flashlight; // 0x2b8
	APlayerCharacter* PlayerCharacter; // 0x2c0
};

struct ARescueCivilianByTag {
	FName CivilianTag; // 0x2a8
	bool bAllowIncapacitation; // 0x2b0
};

struct UARTexture {
	EARTextureType TextureType; // 0x178
	float Timestamp; // 0x17c
	FGuid ExternalTextureGuid; // 0x180
	FVector2D Size; // 0x190
};

struct UInterpTrackInstSound {
	float LastUpdatePosition; // 0x28
	UAudioComponent* PlayAudioComp; // 0x30
};

struct UUniformScalar {
	float Magnitude; // 0xb0
};

struct UW_Briefing_AudioControls_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UW_Briefing_AudioControls_Button_C* btn_FastForward; // 0x268
	UW_Briefing_AudioControls_Button_C* btn_Loop; // 0x270
	UW_Briefing_AudioControls_Button_C* btn_Play; // 0x278
	UW_Briefing_AudioControls_Button_C* btn_Restart; // 0x280
	UW_Briefing_AudioControls_Button_C* btn_Rewind; // 0x288
	UW_Briefing_AudioControls_Button_C* btn_Stop; // 0x290
	UHorizontalBox* HB_Controls; // 0x298
	UCanvasPanel* RootCanvas; // 0x2a0
	UVerticalBox* VB_Controls; // 0x2a8
	FMulticastInlineDelegate Play; // 0x2b0
	FMulticastInlineDelegate Stop; // 0x2c0
	FMulticastInlineDelegate Rewind; // 0x2d0
	FMulticastInlineDelegate Restart; // 0x2e0
	FMulticastInlineDelegate Loop; // 0x2f0
	FMulticastInlineDelegate FastForward; // 0x300
	UW_Briefing_AudioControls_Button_C* CurrentActiveButton; // 0x310
	E_Briefing_Audio_PlayStates PlayState; // 0x318
	bool bRewinding; // 0x319
	bool bFastForward; // 0x31a
	bool HorizontalLayout; // 0x31b
	TArray<UWidget*> Buttons; // 0x320
	bool LastButton; // 0x330
};

struct ASuspectsAndCivilianManager {
	TArray<ATrapActor*> InvestigatedTrap; // 0x238
	TMap<FString, float> SpeechCooldownMap; // 0x248
};

struct UMaterialExpressionDivide {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct USoundBase {
	USoundClass* SoundClassObject; // 0x30
	char bDebug : 1; // 0x38
	char bOverrideConcurrency : 1; // 0x38
	char bEnableBusSends : 1; // 0x38
	char bEnableBaseSubmix : 1; // 0x38
	char bEnableSubmixSends : 1; // 0x38
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
	USoundSubmixBase* SoundSubmixObject; // 0x120
	TArray<FSoundSubmixSendInfo> SoundSubmixSends; // 0x128
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x138
	TArray<FSoundSourceBusSendInfo> BusSends; // 0x140
	TArray<FSoundSourceBusSendInfo> PreEffectBusSends; // 0x150
	TArray<UAssetUserData*> AssetUserData; // 0x160
};

struct UReadyOrNotAnimInstance {
	FVector Velocity; // 0x2e4
	float Speed; // 0x2f0
	float SpeedHorizontal; // 0x2f4
	float SpeedVertical; // 0x2f8
	float MaxSpeed; // 0x2fc
	float Direction; // 0x300
	float ViewPitch; // 0x304
	float ViewYaw; // 0x308
	bool bIsMoving; // 0x30c
	bool bIsInAir; // 0x30d
	FRotator HeadLookRotation; // 0x310
	FTransform ActorTransform; // 0x320
	FVector VelocityLocalNormalized; // 0x350
	EMoveDirection CurrentDirection; // 0x35c
	TArray<float> WalkSpeedDatabase; // 0x360
	TArray<float> JogSpeedDatabase; // 0x370
	TArray<float> CrouchWalkSpeedDatabase; // 0x380
	float DirDegreesPerSecond; // 0x390
	float ForwardDirAngle; // 0x394
	float BackwardDirAngle; // 0x398
	float LeftDirAngle; // 0x39c
	float RightDirAngle; // 0x3a0
	float ForwardDirDeg; // 0x3a4
	float BackwardDirDeg; // 0x3a8
	float LeftDirDeg; // 0x3ac
	float RightDirDeg; // 0x3b0
	float StrafeForwardDir; // 0x3b4
	float StrafeBackwardDir; // 0x3b8
	float StrafeLeftDir; // 0x3bc
	float StrafeRightDir; // 0x3c0
	float MovementAlpha; // 0x3c4
	float MovementJogAlpha; // 0x3c8
	float MovementJogThreshold; // 0x3cc
	FVector LeftFootIKLocation; // 0x3d0
	FVector RightFootIKLocation; // 0x3dc
	FRotator LeftFootIKRotation; // 0x3e8
	FRotator RightFootIKRotation; // 0x3f4
	FVector HipOffsetVector; // 0x400
	bool bCrouching; // 0x40c
	bool bIsStopping; // 0x40d
	FRotator HeadRotation; // 0x410
	bool bPlayingTurnTransition; // 0x41c
	float TransitionThresholdAngle; // 0x420
	float TurnInPlaceDelay; // 0x424
	TArray<FRotTransitionInfo> RotTransitions; // 0x428
	TArray<FRotTransitionInfoAI> RotTransitionsAI; // 0x438
	UAnimSequence* ActiveTurnAnim; // 0x448
	UAnimSequence* ActiveTurnRecoveryAnim; // 0x450
	UAnimSequence* ActiveCurveSourceAnim; // 0x458
	float ActiveTurnAnimTime; // 0x468
	float ActiveTurnRecoveryAnimTime; // 0x46c
	float ActiveTurnAnimTimeSmoothed; // 0x470
	int32_t CurrentTurnInPlaceIndex; // 0x474
	float ViewYawCache; // 0x478
	float YawOffset; // 0x4b0
	float RootYawOffset; // 0x4b4
	EMotionBlockType CurMotionBlock; // 0x4c1
	float TurnPlayrateModifier; // 0x4c4
	bool bIsTurnInPlaceRecovery; // 0x4c8
	float TurnInPlaceRecoveryStartTime; // 0x4cc
	bool bIsFalling; // 0x4d0
	bool bHasPrelanded; // 0x4d1
	bool bJumpRecoveryActive; // 0x4d2
	float JumpRecoveryAnimTime; // 0x4d4
	float JumpRecoveryStrength; // 0x4d8
	float JumpRecoveryTime; // 0x4dc
	float DirAngle; // 0x4e8
	float DirAngleDegrees; // 0x4ec
	EMoveDirectionExt CurrentDirectionExt; // 0x4f0
	bool bIsTeamMLO; // 0x4f1
	float LeftHandIKAlpha; // 0x4f4
	float SprintAlpha; // 0x4f8
	bool bIsDeployableEquipped; // 0x4fc
	bool bIsPistol; // 0x4fd
	bool bIsRifle; // 0x4fe
	bool bIsItem; // 0x4ff
	bool bItemOneHanded; // 0x500
	bool bIsC2Charge; // 0x501
	bool bLevel1MovementTrigger; // 0x502
	bool bLevel2MovementTrigger; // 0x503
	bool bLevel3MovementTrigger; // 0x504
	bool bCrouchLevel1MovementTrigger; // 0x505
	bool bRotationRateReached; // 0x506
	float DeltaRotation; // 0x508
	float SprintFPAlpha; // 0x518
};

struct UMovieScene3DPathSection {
	FMovieSceneFloatChannel TimingCurve; // 0x110
	MovieScene3DPathSection_Axis FrontAxisEnum; // 0x1b0
	MovieScene3DPathSection_Axis UpAxisEnum; // 0x1b1
	char bFollow : 1; // 0x1b4
	char bReverse : 1; // 0x1b4
	char bForceUpright : 1; // 0x1b4
};

struct ULuminARCandidateImage {
	bool bUseUnreliablePose; // 0x58
	bool bImageIsStationary; // 0x59
	EMagicLeapImageTargetOrientation AxisOrientation; // 0x5a
};

struct UEditableGameplayTagQuery {
	FString UserDescription; // 0x28
	UEditableGameplayTagQueryExpression* RootExpression; // 0x48
	FGameplayTagQuery TagQueryExportText_Helper; // 0x50
};

struct UChatMessage_Entry_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* MessageText; // 0x268
	FRChatMessage Message; // 0x270
	FString Team; // 0x2d8
};

struct ADestructableGlassActor {
	UProceduralMeshComponent* ProceduralMesh; // 0x220
	UStaticMeshComponent* Mesh; // 0x228
};

struct UPawnAction_Wait {
	float TimeToWait; // 0x90
};

struct UPostProcessRequirement {
	APlayerCharacter* PlayerCharacter; // 0x28
	AActor* DamageCauser; // 0x30
};

struct ATugOfWarMover {
	USplineComponent* MoverPath; // 0x220
	USkeletalMeshComponent* MoverMesh; // 0x228
	float MoverSpeed; // 0x240
	bool bInvertVictoryPositions; // 0x244
	bool bMoverForward; // 0x245
	bool bMoverMoving; // 0x246
	float MoverStartingPosition; // 0x248
	float MoverCurrentPosition; // 0x24c
	bool bContested; // 0x250
	TArray<APlayerCharacter*> Influencers; // 0x258
};

struct UAsyncActionLoadPrimaryAsset {
	FMulticastInlineDelegate Completed; // 0x78
};

struct URendererSettings {
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
	char bVirtualTextureEnableAutoImport : 1; // 0x54
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
	EFixedFoveationLevels HMDFixedFoveationLevel; // 0x88
	ECustomDepthStencil CustomDepthStencil; // 0x89
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
	char bEnableHybridTranslucency : 1; // 0xd4
	char bSupportStationarySkylight : 1; // 0xd4
	char bSupportLowQualityLightmaps : 1; // 0xd4
	char bSupportPointLightWholeSceneShadows : 1; // 0xd4
	char bSupportAtmosphericFog : 1; // 0xd4
	char bSupportSkyAtmosphere : 1; // 0xd4
	char bSupportSkyAtmosphereAffectsHeightFog : 1; // 0xd5
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
	FPerPlatformInt MaxSkinBones; // 0xf0
	EMobilePlanarReflectionMode MobilePlanarReflectionMode; // 0xf4
	char bMobileSupportsGen4TAA : 1; // 0xf8
	FPerPlatformBool bStreamSkeletalMeshLODs; // 0xfc
	FPerPlatformBool bDiscardSkeletalMeshOptionalLODs; // 0xfd
	FSoftObjectPath VisualizeCalibrationColorMaterialPath; // 0x100
	FSoftObjectPath VisualizeCalibrationCustomMaterialPath; // 0x118
	FSoftObjectPath VisualizeCalibrationGrayscaleMaterialPath; // 0x130
};

struct AARSharedWorldGameState {
	TArray<char> PreviewImageData; // 0x290
	TArray<char> ARWorldData; // 0x2a0
	int32_t PreviewImageBytesTotal; // 0x2b0
	int32_t ARWorldBytesTotal; // 0x2b4
	int32_t PreviewImageBytesDelivered; // 0x2b8
	int32_t ARWorldBytesDelivered; // 0x2bc
};

struct UW_MinimizedBriefing_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UW_Briefing_AudioControls_C* AudioControl; // 0x268
	UW_Header_C* h_Audio_2; // 0x270
	UW_Briefing_Timeline_TrackWave_Simple_C* TrackWave; // 0x278
	UW_Text_C* txt_PlayTime_2; // 0x280
	UW_HotkeyBar_Entry_C* W_HotkeyBar_Entry; // 0x288
};

struct UMaterialExpressionRuntimeVirtualTextureSampleParameter {
	FName ParameterName; // 0x90
	FGuid ExpressionGUID; // 0x98
	FName Group; // 0xa8
};

struct UVOIPTalker {
	FVoiceSettings Settings; // 0xb0
};

struct USphereComponent {
	float SphereRadius; // 0x468
};

struct ULandscapeLayerInfoObject {
	FName LayerName; // 0x28
	UPhysicalMaterial* PhysMaterial; // 0x30
	float Hardness; // 0x38
	FLinearColor LayerUsageDebugColor; // 0x3c
};

struct AScoringManager {
	int32_t TotalScorePool; // 0x268
	TArray<FScoreGroup> ObjectiveScoreGroups; // 0x278
	TArray<FScorePenaltyData> PenaltyScoreGroups; // 0x288
};

struct USwatCommandWidget {
	int32_t LastSubCommandPageIndex; // 0x270
	TArray<FSwatCommand> ActiveCommandPage; // 0x278
	TArray<FSwatCommand> PreviousActiveCommandPage; // 0x288
	TArray<FKey> CommandCombo; // 0x298
	ETeamType ActiveTeamType; // 0x2a8
	ETeamType ExecutionTeamType; // 0x2a9
	ESwatCommand DefaultCommand; // 0x2aa
	ESwatCommand DefaultDoorOpenCommand; // 0x2ab
	ESwatCommand DefaultDoorUnknownCommand; // 0x2ac
	ESwatCommand DefaultCheckDoorCommand; // 0x2ad
	ESwatCommand DefaultDoorLockedCommand; // 0x2ae
	ESwatCommand DefaultDoorUnlockedCommand; // 0x2af
	ASWATManager* SWATManager; // 0x338
	FHitResult ContextualData; // 0x340
	FHitResult LastExecutedCommandContextualData; // 0x3c8
	UFMODEvent* OpenMenuEvent; // 0x450
	UFMODEvent* OpenSubCommandMenuEvent; // 0x458
	UFMODEvent* ExecuteCommandEvent; // 0x460
	ABaseGrenade* Flashbang; // 0x468
	ABaseGrenade* Stinger; // 0x470
	ABaseGrenade* CSGas; // 0x478
	char bHoldingQueueCommandKey : 1; // 0x488
};

struct UMovieSceneLevelVisibilitySection {
	ELevelVisibility Visibility; // 0xf0
	TArray<FName> LevelNames; // 0xf8
};

struct UAISense_Blueprint {
	UUserDefinedStruct* ListenerDataType; // 0x80
	TArray<UAIPerceptionComponent*> ListenerContainer; // 0x88
	TArray<UAISenseEvent*> UnprocessedEvents; // 0x98
};

struct UARCandidateObject {
	TArray<char> CandidateObjectData; // 0x30
	FString FriendlyName; // 0x40
	FBox BoundingBox; // 0x50
};

struct UExponentialHeightFogComponent {
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

struct UMaterialExpressionOneMinus {
	FExpressionInput Input; // 0x40
};

struct UAnimNotify_PlayNiagaraEffect {
	UNiagaraSystem* Template; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	FVector Scale; // 0x58
	bool bAbsoluteScale; // 0x64
	char Attached : 1; // 0x80
	FName SocketName; // 0x84
};

struct UW_Briefing_Audio_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* animHide; // 0x268
	UW_Briefing_AudioControls_C* AudioControl; // 0x270
	UW_Briefing_TimelineEvents_C* Events; // 0x278
	UW_Header_C* h_Audio; // 0x280
	UW_Header_C* h_Audio_2; // 0x288
	UW_Briefing_Timeline_TrackWave_Simple_C* TrackWave; // 0x290
	UW_Briefing_Transcript_C* Transcript; // 0x298
	UW_Text_C* txt_PlayTime; // 0x2a0
	UW_Text_C* txt_PlayTime_2; // 0x2a8
	UW_Briefing_AudioControls_C* W_Briefing_AudioControls; // 0x2b0
	UW_Briefing_TImeline_C* W_Briefing_TImeline; // 0x2b8
	UW_HotkeyBar_Entry_C* W_HotkeyBar_Entry; // 0x2c0
	UDataTable* BriefingData; // 0x2c8
	FName MissionName; // 0x2d0
	USoundWave* AudioAsset; // 0x2d8
	bool DesignTime; // 0x2e0
	UAudioComponent* AudioComponent; // 0x2e8
	bool LoopAudio; // 0x2f0
	bool Rewinding; // 0x2f1
	bool paused; // 0x2f2
	float AudioDuration; // 0x2f4
	float AudioLoopDelay; // 0x2f8
	float AudioCurrentTime; // 0x2fc
	float SkipTimeIncrement; // 0x300
	float Volume; // 0x304
	float CurrentProgress; // 0x308
	FMissionAudio DebugMissionAudio; // 0x310
	TArray<FTimelineEvent> DebugTimelineEvents; // 0x368
	float PlaybackOffset; // 0x378
	FText TimerDurationText; // 0x380
	TArray<FTimelineEvent> TimelineEvents; // 0x398
	float ReturnTime; // 0x3a8
	bool Snippet; // 0x3ac
	float SnippetResumeDelay; // 0x3b0
	float AudioStartDelay; // 0x3b4
};

struct UW_MagCheck_MagStatus_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Highlight; // 0x268
	UImage* Highlight_Bar_Image; // 0x270
	UImage* MagIcon_Image; // 0x278
	UMaterialInstanceDynamic* MID_MagIcon; // 0x280
	int32_t MagIndex; // 0x288
};

struct UW_Briefing_Dossier_Rapsheet_Entry_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* FadeIn; // 0x268
	UW_Text_C* txt_CrimeCode; // 0x270
	UW_Text_C* txt_CrimeDate; // 0x278
	UW_Text_C* txt_CrimeName; // 0x280
	FText CrimeNameText; // 0x288
	FString CrimeCode; // 0x2a0
	FName CrimeCodeTableID; // 0x2b0
	FCriminalRecord Crime; // 0x2b8
	FString CrimeDate; // 0x2f0
};

struct UMaterialExpressionMakeMaterialAttributes {
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

struct UDecalComponent {
	UMaterialInterface* DecalMaterial; // 0x1f8
	int32_t SortOrder; // 0x200
	float FadeScreenSize; // 0x204
	float FadeStartDelay; // 0x208
	float FadeDuration; // 0x20c
	float FadeInDuration; // 0x210
	float FadeInStartDelay; // 0x214
	char bDestroyOwnerAfterFade : 1; // 0x218
	FVector DecalSize; // 0x21c
};

struct UCursor_TextEntry_C {
	UImage* Mouse; // 0x260
};

struct UMaterialExpressionSine {
	FExpressionInput Input; // 0x40
	float Period; // 0x54
};

struct UButton {
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

struct ACameraRig_Rail {
	float CurrentPositionOnRail; // 0x220
	bool bLockOrientationToRail; // 0x224
	USceneComponent* TransformComponent; // 0x228
	USplineComponent* RailSplineComponent; // 0x230
	USceneComponent* RailCameraMount; // 0x238
};

struct ULevelStreaming {
	TSoftObjectPtr<UWorld> WorldAsset; // 0x28
	FName PackageNameToLoad; // 0x50
	TArray<FName> LODPackageNames; // 0x58
	FTransform LevelTransform; // 0x80
	int32_t LevelLODIndex; // 0xb0
	int32_t StreamingPriority; // 0xb4
	char bShouldBeVisible : 1; // 0xba
	char bShouldBeLoaded : 1; // 0xba
	char Blocked : 1; // 0xba
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

struct ADetonator {
	TArray<APlacedC2Explosive*> PlacedCharges; // 0x900
	int32_t PlacedChargesCount; // 0x910
	float MaxDetonationDistance; // 0x914
	UMaterialInstanceDynamic* DetonatorLightDynamicMaterial; // 0x918
};

struct UParticleModuleSpawnPerUnit {
	float UnitScalar; // 0x38
	float MovementTolerance; // 0x3c
	FRawDistributionFloat SpawnPerUnit; // 0x40
	float MaxFrameDistance; // 0x70
	char bIgnoreSpawnRateWhenMoving : 1; // 0x74
	char bIgnoreMovementAlongX : 1; // 0x74
	char bIgnoreMovementAlongY : 1; // 0x74
	char bIgnoreMovementAlongZ : 1; // 0x74
};

struct UCursor_Hand_C {
	UImage* Mouse; // 0x260
};

struct UGetUserPrivilegeCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UGizmoBoxComponent {
	FVector Origin; // 0x470
	FQuat Rotation; // 0x480
	FVector Dimensions; // 0x490
	float LineThickness; // 0x49c
	bool bRemoveHiddenLines; // 0x4a0
	bool bEnableAxisFlip; // 0x4a1
};

struct UReportTargetActivity {
	TScriptInterface<IReportable> ReportTarget; // 0x1d8
	APlayerCharacter* ReportCharacterTarget; // 0x1e8
	AIncapacitatedHuman* ReportIncapacitatedTarget; // 0x1f0
};

struct AReadyOrNotSignificanceManager {
	TArray<AActor*> ActorsMadeIrrelevantThisFrame; // 0x230
	TArray<AActor*> ActorsMadeRelevantThisFrame; // 0x240
	TArray<AActor*> ActorsMadeIrrelevant; // 0x250
	TArray<AActor*> ActorsRelevantToSignificance; // 0x268
	TArray<AReadyOrNotCharacter*> CharactersRelevantToSignificance; // 0x278
	TMap<USkeletalMeshComponent*, USkeletalMesh*> SkeletalMeshLookupMap; // 0x288
	TMap<USceneComponent*, FOptimizationAttachmentData> SceneCompAttachmentData; // 0x2d8
	TMap<UStaticMeshComponent*, UStaticMesh*> StaticMeshLookupMap; // 0x328
	TArray<AReadyOrNotCharacter*> IrrelevantPlayerCharacters; // 0x378
	TArray<FTransform> RelevantViewpoints; // 0x3f8
	TArray<AActor*> PlayerViewTargets; // 0x408
};

struct UInterpTrackSound {
	TArray<FSoundTrackKey> Sounds; // 0x90
	char bPlayOnReverse : 1; // 0xa0
	char bContinueSoundOnMatineeEnd : 1; // 0xa0
	char bSuppressSubtitles : 1; // 0xa0
	char bTreatAsDialogue : 1; // 0xa0
	char bAttach : 1; // 0xa0
};

struct UScaleBox {
	EStretch Stretch; // 0x120
	EStretchDirection StretchDirection; // 0x121
	float UserSpecifiedScale; // 0x124
	bool IgnoreInheritedScale; // 0x128
};

struct UBTTask_BlueprintBase {
	AAIController* AIOwner; // 0x70
	AActor* ActorOwner; // 0x78
	FIntervalCountdown TickInterval; // 0x80
	char bShowPropertyDetails : 1; // 0xa0
};

struct UFleeingCombatMove {
	TArray<AThreatAwarenessActor*> UsedFleePoints; // 0x1b8
};

struct UPersonalizationWidget {
	ACharacterCustomizationPortal* SpawnedFromPortal; // 0x260
};

struct UInteractiveGizmoManager {
	TArray<FActiveGizmo> ActiveGizmos; // 0x30
	TMap<FString, UInteractiveGizmoBuilder*> GizmoBuilders; // 0x58
};

struct AGameModeBase {
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

struct ACineCameraActor {
	FCameraLookatTrackingSettings LookatTrackingSettings; // 0x7b0
};

struct UMaterialExpressionSkyAtmosphereLightDirection {
	int32_t LightIndex; // 0x40
};

struct ULightComponentBase {
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
	char bSupportSampledLighting : 1; // 0x215
	float DeepShadowLayerDistribution; // 0x218
	float IndirectLightingIntensity; // 0x21c
	float VolumetricScatteringIntensity; // 0x220
	int32_t SamplesPerPixel; // 0x224
};

struct UMovieSceneSubSection {
	FMovieSceneSectionParameters Parameters; // 0xe8
	float StartOffset; // 0x10c
	float TimeScale; // 0x110
	float PrerollTime; // 0x114
	char NetworkMask; // 0x118
	UMovieSceneSequence* SubSequence; // 0x120
	LazyObjectProperty ActorToRecord; // 0x128
	FString TargetSequenceName; // 0x148
	FDirectoryPath TargetPathToRecordTo; // 0x158
};

struct UW_WeaponWheel_ItemStat_Damage_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x840
};

struct UW_WorldMap_MissionSelect_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Hide; // 0x268
	UWidgetAnimation* Reveal; // 0x270
	UW_Button_C* btn_AcceptMission_2; // 0x278
	UImage* div_Formation_Bot_2; // 0x280
	UImage* div_Formation_Top_2; // 0x288
	UHorizontalBox* HB_Equipment_2; // 0x290
	UImage* img_MissionImg; // 0x298
	UW_Text_C* lbl_Formation_2; // 0x2a0
	UBorder* SelectedMissionPanel_2; // 0x2a8
	USizeBox* SizeBox; // 0x2b0
	UW_Text_C* txt_ActiveShooterDifficulty; // 0x2b8
	UW_Text_C* txt_BestGrade; // 0x2c0
	UW_Text_C* txt_BestTime; // 0x2c8
	UW_Text_C* txt_Formation_2; // 0x2d0
	UTextBlock* txt_MissionDescription; // 0x2d8
	UW_Text_C* txt_MissionName; // 0x2e0
	FSpawnPoints SpawnInfo; // 0x2e8
	FMulticastInlineDelegate OnSetMissionButtonClicked; // 0x358
	FName CurrentSpawn; // 0x368
	bool Hidden; // 0x370
	UTexture2D* MissionSelectTexture; // 0x378
	FText MissionName; // 0x380
	FText MissionDifficulty; // 0x398
	FName MissionURL; // 0x3b0
	FText MissionDescription; // 0x3b8
	ECOOPMode ModeEnum; // 0x3d0
};

struct USkeletalMeshLODSettings {
	FPerPlatformInt MinLOD; // 0x30
	FPerPlatformBool DisableBelowMinLodStripping; // 0x34
	bool bOverrideLODStreamingSettings; // 0x35
	FPerPlatformBool bSupportLODStreaming; // 0x36
	FPerPlatformInt MaxNumStreamedLODs; // 0x38
	FPerPlatformInt MaxNumOptionalLODs; // 0x3c
	TArray<FSkeletalMeshLODGroupSettings> LODGroups; // 0x40
};

struct UAISense_Prediction {
	TArray<FAIPredictionEvent> RegisteredEvents; // 0x80
};

struct UProxyLODMeshSimplificationSettings {
	FName ProxyLODMeshReductionModuleName; // 0x38
};

struct AController {
	APlayerState* PlayerState; // 0x228
	FMulticastInlineDelegate OnInstigatedAnyDamage; // 0x238
	FName StateName; // 0x248
	APawn* Pawn; // 0x250
	ACharacter* Character; // 0x260
	USceneComponent* TransformComponent; // 0x268
	FRotator ControlRotation; // 0x288
	char bAttachToPawn : 1; // 0x294
};

struct UMicroTransactionBase {
	TArray<FPurchaseInfo> AvailableProducts; // 0x38
	FString LastError; // 0x48
	FString LastErrorSolution; // 0x58
};

struct AShotgun {
	int32_t MaxShells; // 0x1128
	int32_t TotalShells; // 0x112c
	int32_t ShellsInWeapon; // 0x1130
	int32_t MaxShellsInWeapon; // 0x1134
	float ShellWeight; // 0x1138
	bool bUseShellRack; // 0x113c
	bool bRefreshingShellRack; // 0x113d
	bool bReloadRack; // 0x113e
	bool bVelcroRack; // 0x113f
	bool bTapReload; // 0x1140
	int32_t ShellsInRack; // 0x1144
	int32_t MaxShellsInRack; // 0x1148
	TArray<UShellRackShellComponent*> ShellMeshComponents; // 0x1150
	FShotgunVisuals ShotgunVisuals; // 0x1160
	TArray<FName> ShellRackSockets; // 0x1170
	bool bBlockingFireAnimation; // 0x1180
};

struct UBlendSpace {
	EBlendSpaceAxis AxisToScaleAnimation; // 0x148
};

struct URig {
	TArray<FTransformBase> TransformBases; // 0x30
	TArray<FNode> Nodes; // 0x40
};

struct UInterpTrackLinearColorBase {
	FInterpCurveLinearColor LinearColorTrack; // 0x70
	float CurveTension; // 0x88
};

struct UW_RichChatBox_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* FadeOut; // 0x268
	UVerticalBox* Box; // 0x270
	URichTextBlock* ChatArea; // 0x278
	UEditableTextBox* ChatEntry; // 0x280
	UScrollBox* ScrollArea; // 0x288
	UW_Text_C* txt_ChatChannel; // 0x290
	FString ChatAreaText; // 0x298
	bool bPreplanning; // 0x2a8
	float ShowTimeLeft; // 0x2ac
	float ShowTimeMax; // 0x2b0
	bool bTextFocused; // 0x2b4
	bool bFadingOut; // 0x2b5
	bool bTeamChat; // 0x2b6
	FText RedTeamLabel; // 0x2b8
	FText BlueTeamLabel; // 0x2d0
	FText GoldTeamLabel; // 0x2e8
	bool bAlwaysShowTextEntry; // 0x300
	FEditableTextBoxStyle ChatboxEntryStyleAlwaysShown; // 0x308
	FEditableTextBoxStyle ChatboxEntryStyleNotAlwaysShown; // 0xb00
};

struct UGridSlot {
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

struct UMaterialExpressionCollectionParameter {
	UMaterialParameterCollection* Collection; // 0x40
	FName ParameterName; // 0x48
	FGuid ParameterId; // 0x50
};

struct UBehaviourComponent {
	TArray<EBehaviourMods> ActiveBehaviourMods; // 0xc0
};

struct UAmmoComponent {
	float AmmoUsagePerSecond; // 0x108
};

struct ULoudnessMeterWidget {
	UWidgetSwitcher* MovementSound_WidgetSwitcher; // 0x278
	APlayerCharacter* PlayerCharacter; // 0x280
};

struct UHesitationBarComponent {
	float GlobalZoneTimeBoost; // 0x5a0
	int32_t GlobalActionUseCount; // 0x5a4
	float FillRate; // 0x5a8
	float BoostTargetFillPercentage; // 0x5ac
	float PausedFillPercentage; // 0x5b0
	float FillPercentage; // 0x5b4
	char bShowBar : 1; // 0x5b8
	char bPauseHesitation : 1; // 0x5b8
	char bHesitationSuccess : 1; // 0x5b8
	char bHesitationFakeSuccess : 1; // 0x5b8
	char bStartingSurrenderExit : 1; // 0x5b8
	UHesitationBarWidget* HesitationBarWidget; // 0x718
	UUserWidget* HesitationBarWidgetClass; // 0x720
	APlayerCharacter* LastLookedAtBy; // 0x728
	FHesitationData HesitationTweakables_Replicated; // 0x738
};

struct APrimary_M16A4_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1130
};

struct UMasterAudioSubmixCaptureProtocol {
	FString Filename; // 0x58
};

struct UBP_Comp_Whoosh_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	UFMODEvent* FMODEvent; // 0xb8
	UFMODAudioComponent* fmodComp; // 0xc0
	FFMODEventInstance FMODEventInstance; // 0xc8
	float oldSpeed; // 0xd0
	float NewSpeed; // 0xd4
};

struct UMaterialExpressionSamplePhysicsScalarField {
	FExpressionInput WorldPosition; // 0x40
	EFieldScalarType FieldTarget; // 0x54
};

struct UReadyOrNotCoverData {
	FCoverDataMain CoverData; // 0x30
};

struct UBTDecorator {
	char bInverseCondition : 1; // 0x60
	EBTFlowAbortMode FlowAbortMode; // 0x64
};

struct UToFloatField {
	UFieldNodeInt* IntField; // 0xb0
};

struct APhysicsConstraintActor {
	UPhysicsConstraintComponent* ConstraintComp; // 0x220
	AActor* ConstraintActor1; // 0x228
	AActor* ConstraintActor2; // 0x230
	char bDisableCollision : 1; // 0x238
};

struct APrimary_WCQB_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1190
	UAnimMontage* LightToggle1P; // 0x1198
};

struct UANIMBP_Sequencer_Body_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x340
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver_6; // 0x3e0
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver_5; // 0x548
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver_4; // 0x6b0
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver_3; // 0x818
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver_2; // 0x980
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver; // 0xae8
	bool bDontControlPose; // 0xc50
};

struct AFirefightGM {
	bool bSuddenDeath; // 0x6d8
	UFMODEvent* TeamKilledSound_SERT_RED; // 0x6e0
	UFMODEvent* TeamKilledSound_SERT_BLUE; // 0x6e8
	UFMODEvent* MatchLoopMusic; // 0x6f0
	UFMODEvent* MatchStartMusic; // 0x6f8
	UFMODEvent* MatchEndMusic; // 0x700
	TArray<FSavedLoadout> RandomLoadouts; // 0x708
	TArray<FSavedLoadout> GeneratedLoadouts; // 0x718
	int32_t NumRedSpawned; // 0x728
	int32_t NumBlueSpawned; // 0x72c
};

struct UInterpTrackInstEvent {
	float LastUpdatePosition; // 0x28
};

struct UPlayerPostProcessing {
	TArray<UPostProcessEffectData*> DebugPPEffects; // 0x770
	TArray<UMaterialInstanceDynamic*> DebugPPEffects_MIDs; // 0x780
	TArray<FPostProcessEffect> PostProcessEffects; // 0x7c8
	TArray<UMaterialInterface*> DevPostProcessMaterials; // 0x7f0
	FNVGPostProcessSettings NVG_Settings; // 0x800
	APlayerCharacter* OwningCharacter; // 0xda0
	AActor* RecentDamageCauser; // 0xda8
};

struct UFoliageType {
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
	char bVisibleInRayTracing : 1; // 0x158
	char bEvaluateWorldPositionOffset : 1; // 0x158
	FBodyInstance BodyInstance; // 0x160
	EHasCustomNavigableGeometry CustomNavigableGeometry; // 0x2b8
	FLightingChannels LightingChannels; // 0x2b9
	char bRenderCustomDepth : 1; // 0x2bc
	ERendererStencilMask CustomDepthStencilWriteMask; // 0x2c0
	int32_t CustomDepthStencilValue; // 0x2c4
	int32_t TranslucencySortPriority; // 0x2c8
	float CollisionRadius; // 0x2cc
	float ShadeRadius; // 0x2d0
	int32_t NumSteps; // 0x2d4
	float InitialSeedDensity; // 0x2d8
	float AverageSpreadDistance; // 0x2dc
	float SpreadVariance; // 0x2e0
	int32_t SeedsPerStep; // 0x2e4
	int32_t DistributionSeed; // 0x2e8
	float MaxInitialSeedOffset; // 0x2ec
	bool bCanGrowInShade; // 0x2f0
	bool bSpawnsInShade; // 0x2f1
	float MaxInitialAge; // 0x2f4
	float MaxAge; // 0x2f8
	float OverlapPriority; // 0x2fc
	FFloatInterval ProceduralScale; // 0x300
	FRuntimeFloatCurve ScaleCurve; // 0x308
	int32_t ChangeCount; // 0x390
	char ReapplyDensity : 1; // 0x394
	char ReapplyRadius : 1; // 0x394
	char ReapplyAlignToNormal : 1; // 0x394
	char ReapplyRandomYaw : 1; // 0x394
	char ReapplyScaling : 1; // 0x394
	char ReapplyScaleX : 1; // 0x394
	char ReapplyScaleY : 1; // 0x394
	char ReapplyScaleZ : 1; // 0x394
	char ReapplyRandomPitchAngle : 1; // 0x395
	char ReapplyGroundSlope : 1; // 0x395
	char ReapplyHeight : 1; // 0x395
	char ReapplyLandscapeLayers : 1; // 0x395
	char ReapplyZOffset : 1; // 0x395
	char ReapplyCollisionWithWorld : 1; // 0x395
	char ReapplyVertexColorMask : 1; // 0x395
	char bEnableDensityScaling : 1; // 0x395
	char bEnableDiscardOnLoad : 1; // 0x396
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x398
	int32_t VirtualTextureCullMips; // 0x3a8
	ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x3ac
};

struct UMovieSceneMarginSection {
	FMovieSceneFloatChannel TopCurve; // 0xf0
	FMovieSceneFloatChannel LeftCurve; // 0x190
	FMovieSceneFloatChannel RightCurve; // 0x230
	FMovieSceneFloatChannel BottomCurve; // 0x2d0
};

struct UMovieScene3DTransformSection {
	FMovieSceneTransformMask TransformMask; // 0xf0
	FMovieSceneFloatChannel Translation[0x3]; // 0xf8
	FMovieSceneFloatChannel Rotation[0x3]; // 0x2d8
	FMovieSceneFloatChannel Scale[0x3]; // 0x4b8
	FMovieSceneFloatChannel ManualWeight; // 0x698
	bool bUseQuaternionInterpolation; // 0x738
};

struct UNiagaraDataInterfaceCamera {
	int32_t PlayerControllerIndex; // 0x38
	bool bRequireCurrentFrameData; // 0x3c
};

struct UW_Briefing_Objectives_List_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UW_Text_C* txt_Count; // 0x268
	UVerticalBox* VB_ObjectiveList; // 0x270
	UW_Header_C* W_Header; // 0x278
	bool bIsChallengeList; // 0x280
	bool bSimplifiedObjectives; // 0x281
	UChallenge* Objectives; // 0x288
	int32_t TotalObjectives; // 0x290
	int32_t CompletedObjectives; // 0x294
};

struct USequenceCameraShakeCameraStandIn {
	float FieldOfView; // 0x30
	char bConstrainAspectRatio : 1; // 0x34
	float AspectRatio; // 0x38
	FPostProcessSettings PostProcessSettings; // 0x40
	float PostProcessBlendWeight; // 0x5a0
	FCameraFilmbackSettings Filmback; // 0x5a4
	FCameraLensSettings LensSettings; // 0x5b0
	FCameraFocusSettings FocusSettings; // 0x5c8
	float CurrentFocalLength; // 0x620
	float CurrentAperture; // 0x624
	float CurrentFocusDistance; // 0x628
};

struct UEditableGeometryCollectionAdapter {
	UGeometryCollection* GeometryCollection; // 0x28
	UGeometryCollection* OriginalGeometryCollection; // 0x30
	int32_t GeometryCollectionLODIndex; // 0x38
};

struct UPendingNetGame {
	UNetDriver* NetDriver; // 0x30
	UDemoNetDriver* DemoNetDriver; // 0x38
};

struct ABaseItem {
	UFMODAudioComponent* FMODAudioComp; // 0x260
	UInteractableComponent* InteractableComponent; // 0x268
	UScoringComponent* ScoringComponent; // 0x270
	bool bDisableTickWhenNotEquipped; // 0x278
	UFMODEvent* PhysicsImpact; // 0x280
	AThrownItem* ThrownItemClass; // 0x290
	float ItemWeight; // 0x2d0
	bool bDisallowKicking; // 0x2d6
	FName LookupTableIdx; // 0x2d8
	USkeletalMesh* Rep_CustomItemMeshFromAttachment; // 0x2e8
	bool bInInventory; // 0x2f1
	bool bShouldTickAnimBPWhenNotEquipped; // 0x2f2
	FVector Server_ReplicatedPhysicsLocation; // 0x2f4
	FString OwnerName; // 0x300
	FString ItemName; // 0x310
	TArray<EDLC> LockedToDLC; // 0x320
	EItemClass ItemClass; // 0x330
	FText ItemDescription; // 0x338
	FString ItemSelectorName; // 0x350
	UFMODEvent* ItemSelectionSound; // 0x360
	FItemVisualData Visuals; // 0x368
	UTexture2D* Tooltip; // 0x398
	UTexture2D* HUDOutline; // 0x3a0
	bool bInterpToTargetScale; // 0x3a8
	bool bFollowMasterPoseTP; // 0x3a9
	FVector TargetWorldScale; // 0x3ac
	float TargetWorldScaleInterpSpeed; // 0x3b8
	bool bStartAsEvidence; // 0x3bc
	bool bIsEvidence; // 0x3bd
	bool bIsClearable; // 0x3be
	bool bHasBeenCleared; // 0x3bf
	TArray<UDamageType*> BlockAnyDamageFrom; // 0x3c0
	TArray<UDamageType*> BlockDirectHitsFrom; // 0x3d0
	bool bTaserDamageBlocked; // 0x3e0
	TMap<UDamageType*, float> MultiplyStunDamageFrom; // 0x3e8
	TMap<UDamageType*, FWeightStunMultiplier> MultiplyStunDamageByWeight; // 0x438
	USceneComponent* SceneComp; // 0x488
	USkeletalMeshComponent* ItemMesh; // 0x490
	UBoxComponent* InteractionBox; // 0x498
	TArray<UMaterialInstanceDynamic*> Dynamic1PMaterialInstances; // 0x4a0
	TArray<UMaterialInstanceDynamic*> DynamicWeaponFovMats; // 0x4b8
	TArray<UMaterialInstanceDynamic*> FP_SkinMaterials; // 0x4d0
	TArray<UMaterialInstanceDynamic*> TP_SkinMaterials; // 0x4e0
	USkeletalMeshComponent* MasterPoseRep; // 0x4f0
	bool bShowStaticMeshOnBody; // 0x4f8
	FName WeaponWheelCategoryName; // 0x4fc
	bool bForceInvisible; // 0x504
	bool bForcedInvisible; // 0x505
	bool bCanReloadSameMagazine; // 0x510
	UAnimMontage* LastReloadAnim_3P; // 0x518
	float MovementSpeedMultiplier; // 0x520
	float QuickLeanMultiplier; // 0x524
	float FreeLeanMultiplier; // 0x528
	FMulticastInlineDelegate OnEvidenceCollected; // 0x530
	EWeaponType WeaponType; // 0x540
	FMulticastInlineDelegate OnAttachmentActivated; // 0x548
	FMulticastInlineDelegate OnAttachmentDeactivated; // 0x558
	TArray<EItemAttachment> Attachments; // 0x568
	TArray<EItemAttachment> ActiveAttachments; // 0x578
	bool bDisableMeshspaceMovement; // 0x588
	FTransform MeshspaceTransform_Default; // 0x590
	FTransform MeshspaceTransform_Aiming; // 0x5c0
	FTransform MeshspaceTransform_Back; // 0x5f0
	float InertiaDragAimRotation; // 0x620
	float InertiaDragAimLocation; // 0x624
	float InertiaDragStrafeRotation; // 0x628
	float InertiaDragStrafeLocation; // 0x62c
	FVector MovementSpeedScale; // 0x630
	FRotator MovementSpeedRotationScalePitchYawRoll; // 0x63c
	float MeshSpaceAimInterp; // 0x648
	FTransform MeshspaceTransform_OnDraw; // 0x650
	float OnDrawMeshspaceInterp; // 0x680
	FTransform MeshspaceTransform_OnHolster; // 0x690
	float OnHolsterMeshspaceInterp; // 0x6c0
	FName BodySocket; // 0x6c4
	FName HandsSocket; // 0x6cc
	int32_t AnimationIndex1P; // 0x6d4
	int32_t AnimationIndex3P; // 0x6dc
	bool bDeployable; // 0x6e4
	bool bShouldEquipToHands; // 0x6e5
	TArray<EItemCategory> ItemCategories; // 0x6e8
	float Holster_PlayRate; // 0x704
	float Draw_PlayRate; // 0x708
	UMatineeCameraShake* Reload_CameraShake; // 0x710
	UMatineeCameraShake* ReloadEmpty_CameraShake; // 0x718
	UMatineeCameraShake* DrawCameraShake; // 0x720
	UMatineeCameraShake* HolsterCameraShake; // 0x728
	UObject* LastFPAnimInstanceClass; // 0x768
	UObject* LastTPAnimInstanceClass; // 0x7a8
	AThrownEvidenceActor* ThrownEvidenceActor; // 0x7b0
	bool bIsBeingCollected; // 0x7c4
	float CurrentCollectionTime; // 0x7c8
	float MaxCollectionTime; // 0x7cc
	AReadyOrNotCharacter* CollectingCharacter; // 0x7d0
	bool bDropping; // 0x7d8
	bool bDisableAnimInstanceWhenNotEquipped; // 0x7e8
	UReadyOrNotWeaponAnimData* AnimationData; // 0x7f8
	UReadyOrNotWeaponAnimData* DefaultAnimationData; // 0x800
	UReadyOrNotWeaponAnimData* GripAnimationData; // 0x808
	UReadyOrNotWeaponAnimData* ShieldRaisedAnimationData; // 0x810
	UReadyOrNotWeaponAnimData* ShieldLoweredAnimationData; // 0x818
	float FreeAimLimit; // 0x820
	float FreeAimLimitADS; // 0x824
	float LazySpringStrength; // 0x828
	float LazySpringStrengthADS; // 0x82c
	float FreeAimInterpSpeed; // 0x830
	float FreeAimInterpADSModifier; // 0x834
	float FreeAimInterpHipModifier; // 0x838
	float FreeAimSlowMoveModifier; // 0x83c
	float FreeAimSlowMoveTolerance; // 0x840
	UMatineeCameraShake* MeleeUserCameraShake; // 0x848
	bool bADSCountsAsAbuse; // 0x850
	float HesitationBoostMultiplier; // 0x854
	bool bIsAimingDownSights; // 0x858
	bool bUseLowReady; // 0x859
	float PushbackRange; // 0x85c
	float LowReadyRange; // 0x860
	float LowReadyRangeSightsModifier; // 0x864
	float LowReadyPitchThreshold; // 0x868
	UWeaponSound* SoundData; // 0x870
	bool bOverrideBreathingEvent; // 0x878
	UFMODEvent* BreathingAudioOverride; // 0x880
	bool bEasyPickup; // 0x888
	bool bNoPickup; // 0x889
	bool bScriptedFPHidden; // 0x88a
	EMotionBlockType ActiveMotionBlock; // 0x88b
	bool bIsOneHandedItem; // 0x88c
	float FP_ADS_Motion_Weight; // 0x890
	char bApplyLookupData : 1; // 0x898
	float CameraBobScaleH; // 0x89c
	float CameraBobScaleV; // 0x8a0
	float CameraBobSpeedScaleH; // 0x8a4
	float CameraBobSpeedScaleV; // 0x8a8
	float CameraBobAmplitudeBaseSpeed; // 0x8ac
	float CameraBobIntensitySprintScale; // 0x8b0
	float CameraBobAmplitudeWalkScale; // 0x8b4
	float CameraBobAmplitudeSprintScale; // 0x8b8
	float WeaponBobScaleH; // 0x8bc
	float WeaponBobScaleV; // 0x8c0
	float WeaponBobScaleInjured; // 0x8c4
	float WeaponBobSpeedScaleH; // 0x8c8
	float WeaponBobSpeedScaleV; // 0x8cc
	float WeaponBobSpeedScaleInjured; // 0x8d0
	float WeaponBobCrouchModifier; // 0x8d4
	float WeaponBobADSModifier; // 0x8d8
	float WeaponBobRotPitchScale; // 0x8dc
	float WeaponBobRotRollScale; // 0x8e0
	float WeaponBobRotPitchSpeed; // 0x8e4
	float WeaponBobRotRollSpeed; // 0x8e8
	float WeaponBobRotCrouchModifier; // 0x8ec
	float WeaponBobRotADSModifier; // 0x8f0
};

struct ADrone {
	UUserWidget* DroneWidgetClass; // 0x2c8
	UCurveFloat* FPCameraRotationCurve; // 0x2d0
	float FPCameraRotationResetSpeed; // 0x2d8
	UCurveVector* FPDamageCurve; // 0x2e0
	float FPDamageSpeed; // 0x2e8
	float MaxPitchTilt; // 0x2ec
	float MaxRollTilt; // 0x2f0
	float MaxRPM; // 0x2f4
	float IdleRPM; // 0x2f8
	float RPMThrottleMultiplier; // 0x2fc
	float ThrottleInterpSpeed; // 0x300
	float RotationInterpSpeed; // 0x304
	float TurnSpeed; // 0x308
	float RotationInterpSpeedWhenSteady; // 0x30c
	float TurnSpeedWhenSteady; // 0x310
	float MinSpeed; // 0x314
	float MaxSpeed; // 0x318
	float SpeedIncrementRate; // 0x31c
	TMap<EDroneDamageSpeed, float> DroneSpeedToDamageValues; // 0x320
	float InvincibilityTimeAfterDamageApplied; // 0x370
	FRotator RotorRotation; // 0x374
	float RPM; // 0x380
	float CurrentAltitude; // 0x384
	float CurrentPilotDistance; // 0x388
	FTransform DroneTransform; // 0x390
	FRotator TargetRotation; // 0x3c0
	FRotator TargetSteadyCameraRotation; // 0x3cc
	bool bApplyingInput; // 0x3d8
	bool bSteadyDrone; // 0x3d9
	bool bDroneThirdPerson; // 0x3da
	UWorld* World; // 0x3e0
	AReadyOrNotPlayerController* DroneController; // 0x3e8
	AReadyOrNotPlayerController* OriginalController; // 0x3f0
	UBoxComponent* FlightBox; // 0x418
	USkeletalMeshComponent* Mesh; // 0x420
	USphereComponent* DetectionSphere; // 0x428
	UFloatingPawnMovement* FloatingMovementComponent; // 0x430
	USpringArmComponent* TPCameraArm; // 0x438
	UCameraComponent* TPCamera; // 0x440
	UAudioComponent* Audio; // 0x448
	UCameraComponent* FPCamera; // 0x450
	UUserWidget* DroneWidgetHUD; // 0x458
};

struct UIconWidget {
	UImage* MainImage; // 0x260
	UInteractableComponent* ParentComponent; // 0x268
};

struct UW_Tablet_TabButton_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UW_StandardButton_C* Button; // 0x268
	UTextBlock* Tab_Text; // 0x270
	FText TabMenuName; // 0x278
};

struct UForceAimAtActivity {
	bool bForceNoShoot; // 0x1a8
	bool bForceAimAt; // 0x1a9
	bool bForceNoMove; // 0x1aa
	APlayerCharacter* ForcedTarget; // 0x1b0
	bool bCanFinishActivity; // 0x1b8
};

struct UMovieSceneMaterialParameterCollectionTrack {
	UMaterialParameterCollection* MPC; // 0xa8
};

struct UW_PreMission_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x7c8
	UWidgetAnimation* Anim_OnReady_NoSwapTeams; // 0x7d0
	UWidgetAnimation* Anim_OnReady; // 0x7d8
	UWidgetAnimation* Anim_FadeOut; // 0x7e0
	UWidgetAnimation* Anim_EnterQuartermasterMenu; // 0x7e8
	UWidgetAnimation* Anim_SwapTeams_ButtonPressed; // 0x7f0
	UWidgetAnimation* Anim_ReadyUp_ButtonPressed; // 0x7f8
	UWidgetAnimation* Anim_FadeIn; // 0x800
	UCanvasPanel* BriefingCanvas; // 0x808
	UW_StandardButton_C* BriefingGameButton; // 0x810
	UW_Button_C* btn_Briefing; // 0x818
	UW_Button_C* btn_Loadout; // 0x820
	UW_Button_C* btn_Map; // 0x828
	UCanvasPanel* CanvasPanel_Main; // 0x830
	UWidgetSwitcher* Controls_WidgetSwitcher; // 0x838
	UTextBlock* CountdownTextWidget_PVP; // 0x840
	UVerticalBox* CountdownTimer_Container; // 0x848
	UWidgetSwitcher* CountdownTimerText_Switcher; // 0x850
	UW_DebugInfoContainer_C* DebugInfo_LoadoutCategory; // 0x858
	UW_DebugInfoContainer_C* DebugInfo_LoadoutClass; // 0x860
	UW_DebugInfoContainer_C* DebugInfo_LoadoutMenu; // 0x868
	UW_DebugInfoContainer_C* DebugInfo_LoadoutPresets; // 0x870
	UW_DebugInfoContainer_C* DebugInfo_QuartermasterMenu; // 0x878
	UW_DebugInfoContainer_C* DebugInfo_RootMenu; // 0x880
	UWidgetSwitcher* DebugInfo_Switcher; // 0x888
	UTextBlock* GameStartTimeCount_2; // 0x890
	UW_PageHeader_C* Header; // 0x898
	UHorizontalBox* KeyboardControls_BackButton; // 0x8a0
	UHorizontalBox* KeyboardControls_HideUIButton; // 0x8a8
	UHorizontalBox* KeyboardControls_NextButton; // 0x8b0
	UHorizontalBox* KeyboardControls_PreviousButton; // 0x8b8
	UHorizontalBox* KeyboardControls_RenamePresetButton; // 0x8c0
	UHorizontalBox* KeyboardControls_SelectButton; // 0x8c8
	UW_Text_C* lbl_Countdown_COOP; // 0x8d0
	UW_LoadoutCustomizationMenu_C* LoadoutCustomizationMenu; // 0x8d8
	UW_StandardButton_C* LoadoutGameBtn; // 0x8e0
	UCanvasPanel* LoadoutMenu_Canvas; // 0x8e8
	UWidgetSwitcher* LoadoutMenu_Switcher; // 0x8f0
	UTextBlock* MapName_Text; // 0x8f8
	UHorizontalBox* MetaGameInfo_Container; // 0x900
	UOverlay* MLO_ReadyCount_Container; // 0x908
	UTextBlock* ModeName_Text; // 0x910
	UHorizontalBox* MouseControls_BackButton; // 0x918
	UHorizontalBox* MouseControls_HideUIButton; // 0x920
	UHorizontalBox* MouseControls_RenamePresetButton; // 0x928
	UHorizontalBox* NavigationKeyboardControls_Container; // 0x930
	UHorizontalBox* NavigationMouseControls_Container; // 0x938
	UHorizontalBox* NoSelectionControls_Container; // 0x940
	UHorizontalBox* PlanningMapControls; // 0x948
	UW_QuartermasterMenu_C* QuartermasterMenu; // 0x950
	UHorizontalBox* ReadyCount_Container; // 0x958
	UTextBlock* ReadyCountBlue_2; // 0x960
	UTextBlock* ReadyCountRed_2; // 0x968
	UHorizontalBox* ReadyUp_KeyboardControls_SelectButton; // 0x970
	UHorizontalBox* ReadyUp_KeyboardControls_SelectButton_2; // 0x978
	UHorizontalBox* ReadyUp_MouseControls_SelectButton; // 0x980
	UHorizontalBox* ReadyUp_MouseControls_SelectButton_2; // 0x988
	UHorizontalBox* ReadyUpControls_BackButton; // 0x990
	UHorizontalBox* ReadyUpControls_Container; // 0x998
	UWidgetSwitcher* ReadyUpControls_SelectButton_Switcher; // 0x9a0
	UWidgetSwitcher* ReadyUpControls_SelectButton_Switcher_2; // 0x9a8
	UW_StandardButton_C* ReadyUpResumeGameButton; // 0x9b0
	UCanvasPanel* RootCanvas; // 0x9b8
	UTextBlock* ServerName_Text; // 0x9c0
	USizeBox* SwapTeams_Box; // 0x9c8
	UW_StandardButton_C* SwapTeams_Button; // 0x9d0
	UOverlay* SWAT_ReadyCount_Container; // 0x9d8
	UTextBlock* Tooltip_Text; // 0x9e0
	UW_Text_C* txt_NightOp; // 0x9e8
	UW_Text_C* txt_TeamMLO; // 0x9f0
	UW_Text_C* txt_TeamSwat; // 0x9f8
	UW_Briefing_C* W_Briefing; // 0xa00
	UW_HotkeyBar_C* W_HotkeyBar; // 0xa08
	UW_PlanningMap_C* W_PlanningMap; // 0xa10
	UButton* WidgetFocusButton; // 0xa18
	int32_t SelectedRow; // 0xa20
	int32_t SelectedColumn; // 0xa24
	int32_t SelectionDepth; // 0xa28
	float PlanningTimeRemaining; // 0xa2c
	float GameStartTimeRemaining; // 0xa30
	bool bInQuartermasterMenu; // 0xa34
	bool bReady; // 0xa35
	bool bInMenuBounds; // 0xa36
	bool bNavigateWithMouse; // 0xa37
	bool bNavigateWithKeyboard; // 0xa38
	bool bHideDebugInfo; // 0xa39
	bool bInGame; // 0xa3a
	bool bShowTooltip; // 0xa3b
	bool bShowMetaGameInfo; // 0xa3c
	bool bAnyKeyDown; // 0xa3d
	bool bAltKeyDown; // 0xa3e
	bool bGameCountdownStarted; // 0xa3f
	bool bInitialized; // 0xa40
	bool bPresetsLoaded; // 0xa41
	FName LastCameraTag; // 0xa44
	UWidget* CurrentlyFocusedWidget; // 0xa50
	FTimerHandle TH_FadeInToQuartermasterFinished; // 0xa58
	FTimerHandle TH_FadeOutToQuartermasterFinished; // 0xa60
	FTimerHandle TH_StartFadeToQuartermaster; // 0xa68
	bool isBriefingFirstLoad; // 0xa70
	bool bBriefingOpen; // 0xa71
	bool bPlanningMapOpen; // 0xa72
	ABP_UI_PlanningMap_C* PlanningMap; // 0xa78
	UW_Button_C* CurrentActiveNav; // 0xa80
	bool bLoadoutOpen; // 0xa88
	TMap<FKey, FText> hotkeysGlobal; // 0xa90
	TMap<FKey, FText> hotkeysBriefing; // 0xae0
	TMap<FKey, FText> hotkeysPlanningMap; // 0xb30
	TMap<FKey, FText> hotkeysReadyUpMouse; // 0xb80
	TMap<FKey, FText> hotkeysReadyUpKeyboard; // 0xbd0
	TMap<FKey, FText> hotkeysNavigationMouse; // 0xc20
	TMap<FKey, FText> hotkeysNavigationKeyboard; // 0xc70
	PreMissionHotkeyGroups CurrentHotkeyScreen; // 0xcc0
	AReadyOrNotGameState* RONGameState; // 0xcc8
	bool TriggeredReadyState; // 0xcd0
};

struct USoundNodeEnveloper {
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

struct UTeamPaperdollWidget {
	UImage* Paperdoll_Image; // 0x260
};

struct UGizmoConstantFrameAxisSource {
	FVector Origin; // 0x30
	FVector Direction; // 0x3c
	FVector TangentX; // 0x48
	FVector TangentY; // 0x54
};

struct UNiagaraDataInterfaceArrayInt32 {
	TArray<int32_t> IntData; // 0x50
};

struct AKilledSuspectNavigationAvoidanceShape_C {
	UBoxComponent* Box; // 0x220
};

struct UAnimatedIconWidget_Imprint {
	UImage* Icon_Image; // 0x260
};

struct UAnimNotifyState_Trail {
	UParticleSystem* PSTemplate; // 0x30
	FName FirstSocketName; // 0x38
	FName SecondSocketName; // 0x40
	ETrailWidthMode WidthScaleMode; // 0x48
	FName WidthScaleCurve; // 0x4c
	char bRecycleSpawnedSystems : 1; // 0x54
};

struct AReflectionCapture {
	UReflectionCaptureComponent* CaptureComponent; // 0x220
};

struct UInAppPurchaseQueryCallbackProxy2 {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UPhysicsConstraintComponent {
	AActor* ConstraintActor1; // 0x1f8
	FConstrainComponentPropName ComponentName1; // 0x200
	AActor* ConstraintActor2; // 0x208
	FConstrainComponentPropName ComponentName2; // 0x210
	UPhysicsConstraintTemplate* ConstraintSetup; // 0x228
	FMulticastInlineDelegate OnConstraintBroken; // 0x230
	FConstraintInstance ConstraintInstance; // 0x240
};

struct AArchVisCharacter {
	FString LookUpAxisName; // 0x4b8
	FString LookUpAtRateAxisName; // 0x4c8
	FString TurnAxisName; // 0x4d8
	FString TurnAtRateAxisName; // 0x4e8
	FString MoveForwardAxisName; // 0x4f8
	FString MoveRightAxisName; // 0x508
	float MouseSensitivityScale_Pitch; // 0x518
	float MouseSensitivityScale_Yaw; // 0x51c
};

struct UPropertyBinding {
	TWeakObjectPtr<UObject> SourceObject; // 0x28
	FDynamicPropertyPath SourcePath; // 0x30
	FName DestinationProperty; // 0x58
};

struct UPawnActionsComponent {
	APawn* ControlledPawn; // 0xb0
	TArray<FPawnActionStack> ActionStacks; // 0xb8
	TArray<FPawnActionEvent> ActionEvents; // 0xc8
	UPawnAction* CurrentAction; // 0xd8
};

struct UNiagaraDataInterfaceExport {
	FNiagaraUserParameterBinding CallbackHandlerParameter; // 0x38
	ENDIExport_GPUAllocationMode GPUAllocationMode; // 0x58
	int32_t GPUAllocationFixedSize; // 0x5c
	float GPUAllocationPerParticleSize; // 0x60
};

struct UParticleModuleVectorFieldScaleOverLife {
	UDistributionFloat* VectorFieldScaleOverLife; // 0x30
	FRawDistributionFloat VectorFieldScaleOverLifeRaw; // 0x38
};

struct UMovieSceneSubTrack {
	TArray<UMovieSceneSection*> Sections; // 0x90
};

struct UActorChannel {
	AActor* Actor; // 0x68
	TArray<UObject*> CreateSubObjects; // 0x158
};

struct UDatasmithSkyLightComponentTemplate {
	ESkyLightSourceType SourceType; // 0x30
	int32_t CubemapResolution; // 0x34
	UTextureCube* Cubemap; // 0x38
};

struct UGizmoLocalVec2ParameterSource {
	FVector2D Value; // 0x48
	FGizmoVec2ParameterChange LastChange; // 0x50
};

struct UW_TutorialOverviewText_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* Button_105; // 0x268
	UImage* Image_287; // 0x270
	UScrollBox* MessageContentBox; // 0x278
	UTextBlock* TextContent; // 0x280
	UTextBlock* TextTitle; // 0x288
	FText Title_Text; // 0x290
	TArray<FText> Content_Text; // 0x2a8
	FSlateFontInfo MessageFontInfo; // 0x2b8
};

struct UEnvQueryManager {
	TArray<FEnvQueryInstanceCache> InstanceCache; // 0xa8
	TArray<UEnvQueryContext*> LocalContexts; // 0xb8
	TArray<UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers; // 0xc8
	float MaxAllowedTestingTime; // 0x12c
	bool bTestQueriesUsingBreadth; // 0x130
	int32_t QueryCountWarningThreshold; // 0x134
	double QueryCountWarningInterval; // 0x138
};

struct UW_PvPDeathScreen_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UHorizontalBox* DeathScreenMainView; // 0x268
	UTextBlock* DeathWeapon; // 0x270
	UTextBlock* KillerName; // 0x278
	UTextBlock* NeutralizedByLine; // 0x280
	UW_DamagePaperdoll_C* Paperdoll; // 0x288
	UScrollBox* ScrollBox_171; // 0x290
	UScrollBox* ScrollBoxInvisible; // 0x298
	UW_StandardButton_C* SpectateButton; // 0x2a0
	UTextBlock* Stat_Accuracy; // 0x2a8
	UTextBlock* Stat_AmmoExpended; // 0x2b0
	UTextBlock* Stat_Arrests; // 0x2b8
	UTextBlock* Stat_BulletsBlocked; // 0x2c0
	UTextBlock* Stat_Deaths; // 0x2c8
	UTextBlock* Stat_HitsTaken; // 0x2d0
	UTextBlock* Stat_Kills; // 0x2d8
	UTextBlock* Stat_ShotsHit; // 0x2e0
	UTextBlock* Stat_TimeAlive; // 0x2e8
	UTextBlock* UsingLine; // 0x2f0
	FMulticastInlineDelegate OnSpectateButtonClicked; // 0x2f8
	int32_t AliveOfficers; // 0x308
	int32_t DeadOfficers; // 0x30c
	TArray<FString> ProcessedKills; // 0x310
	TArray<FText> Obituaries; // 0x320
	float FadeInDelay; // 0x330
};

struct UParticleModuleRotationOverLifetime {
	FRawDistributionFloat RotationOverLife; // 0x30
	char Scale : 1; // 0x60
};

struct UNetConnection {
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
	TArray<UChannel*> ChannelsToTick; // 0x1510
};

struct UReadyOrNotAISense_Sight {
	int32_t MaxTracesPerTick; // 0x148
	int32_t MinQueriesPerTimeSliceCheck; // 0x14c
	double MaxTimeSlicePerTick; // 0x150
	float HighImportanceQueryDistanceThreshold; // 0x158
	float MaxQueryImportance; // 0x160
	float SightLimitQueryImportance; // 0x164
};

struct UMovieSceneBindingOverrides {
	TArray<FMovieSceneBindingOverrideData> BindingData; // 0x28
};

struct UParticleModuleAttractorPoint {
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

struct UWorld {
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
	UPhysicsFieldComponent* PhysicsField; // 0x1f8
	TSet<UActorComponent*> ComponentsThatNeedPreEndOfFrameSync; // 0x200
	TArray<UActorComponent*> ComponentsThatNeedEndOfFrameUpdate; // 0x250
	TArray<UActorComponent*> ComponentsThatNeedEndOfFrameUpdate_OnGameThread; // 0x260
	UWorldComposition* WorldComposition; // 0x5e0
	FWorldPSCPool PSCPool; // 0x678
};

struct AHeadwear {
	bool bProtectsAgainstInstantKnockout; // 0xa30
	bool bUseMaskVoiceFilter; // 0xa31
	UFMODEvent* VoiceLineEventOverrideSpatalized; // 0xa38
	UFMODEvent* VoiceLineEventOverrideLocal; // 0xa40
	UUserWidget* MaskOverlay; // 0xa48
	bool bEnablePostProcess; // 0xa50
	FPostProcessSettings MaskPostProcess; // 0xa60
	FPostProcessSettings MaskSupressionPostProcess; // 0xfc0
	bool bOverrideBreathingSound; // 0x1520
	TArray<USoundCue*> OverriddenBreathingSounds; // 0x1528
	float GapBetweenBreaths; // 0x1538
	bool bSpawnedOverlay; // 0x153c
	UUserWidget* SpawnedMaskOverlay; // 0x1540
};

struct UDestructibleMesh {
	FDestructibleParameters DefaultDestructibleParameters; // 0x3a0
	TArray<FFractureEffect> FractureEffects; // 0x428
};

struct UUniformGridSlot {
	EHorizontalAlignment HorizontalAlignment; // 0x38
	EVerticalAlignment VerticalAlignment; // 0x39
	int32_t Row; // 0x3c
	int32_t Column; // 0x40
};

struct AEvidenceExtractionDevice_Incrim {
	UObjectiveMarkerComponent* ObjectiveMarkerComponent; // 0x240
	UObjectiveMarkerComponent* ObjectiveMarkerComponent_WayPoint; // 0x248
	UMapActorComponent* MapActorComponent; // 0x250
	FString MapSectionName; // 0x258
};

struct UWindowTitleBarAreaSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct ACommandDecal {
	UParticleSystemComponent* AlphaPositionParticleComponent; // 0x228
	UParticleSystemComponent* BetaPositionParticleComponent; // 0x230
	UParticleSystemComponent* CharliePositionParticleComponent; // 0x238
	UParticleSystemComponent* DeltaPositionParticleComponent; // 0x240
	UObjectiveMarkerComponent* CommandMarkerComponent; // 0x248
	ETeamType CommandTeam; // 0x250
	UParticleSystem* GoldTeamSquadPositionParticle; // 0x258
	UParticleSystem* RedTeamSquadPositionParticle; // 0x260
	UParticleSystem* BlueTeamSquadPositionParticle; // 0x268
	FLinearColor GoldTeamDecalColor; // 0x270
	FLinearColor RedTeamDecalColor; // 0x280
	FLinearColor BlueTeamDecalColor; // 0x290
	FLinearColor GoldTeamIconColor; // 0x2a0
	FLinearColor RedTeamIconColor; // 0x2b0
	FLinearColor BlueTeamIconColor; // 0x2c0
	FName DecalColorParamName; // 0x2d0
	FVector OriginalDecalSize; // 0x2d8
	FString CommandDecalString; // 0x2e8
	UMaterialInstanceDynamic* MID_CommandDecal; // 0x300
};

struct AThreatAwarenessActor {
	USceneComponent* DefaultScene; // 0x220
	EThreatLevel ThreatLevel; // 0x228
	ADoor* DoorThreat; // 0x230
	bool bFrontDoorThreat; // 0x238
	TArray<FExitData> Exits; // 0x240
	TArray<ADoor*> UniqueExits; // 0x250
	float PolicePresence; // 0x260
	TArray<AThreatAwarenessActor*> PathableThreatAwarenessActors; // 0x270
	TArray<AThreatAwarenessActor*> DirectlyVisibleThreatAwarenessActors; // 0x280
	TArray<FVector> SwatLookAtPoints; // 0x290
	TArray<ACoverActor*> CoverActorsForThisThreatLocation; // 0x2a0
};

struct UCreateSessionCallbackProxyAdvanced {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UW_ChatBox_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UEditableTextBox* ChatBox; // 0x268
	UScrollBox* ScrollBox_166; // 0x270
	bool bEditingChatbox; // 0x278
	bool bTeamChat?; // 0x279
	ETeamType ChatToTeam; // 0x27a
	bool MouseCursorAfterChat; // 0x27b
	bool PreplanningChat; // 0x27c
	ESlateVisibility PostChatVisibility; // 0x27d
	ESlateVisibility ChatVisibility; // 0x27e
	TArray<FRChatMessage> NewVar_1; // 0x280
};

struct USpinBoxWidgetStyle {
	FSpinBoxStyle SpinBoxStyle; // 0x30
};

struct UMaterialExpressionLandscapeLayerWeight {
	FExpressionInput Base; // 0x40
	FExpressionInput Layer; // 0x54
	FName ParameterName; // 0x68
	float PreviewWeight; // 0x70
	FVector ConstBase; // 0x74
	FGuid ExpressionGUID; // 0x80
};

struct UW_FireModeChanged_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* newFireMode; // 0x268
};

struct UInputActionDelegateBinding {
	TArray<FBlueprintInputActionDelegateBinding> InputActionDelegateBindings; // 0x28
};

struct UInterpFilter {
	FString Caption; // 0x28
};

struct ACameraRig_Crane {
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

struct APlayerCharacter {
	TArray<USkeletalMeshComponent*> MeshComps; // 0xfa8
	USkeletalMeshComponent* Mesh1P; // 0xfb8
	UMaterialInterface* LastSetMesh1PDynamicMaterial; // 0xfc0
	TArray<UMaterialInstanceDynamic*> DynamicWeaponFovMats; // 0xfc8
	UPlayerPostProcessing* PlayerPostProcessingComp; // 0xfe8
	UBleedComponent* BleedComponent; // 0xff0
	FRotator ReplicatedFPMesh; // 0xff8
	FVector CurInputVector; // 0x1010
	FTimerHandle PushOverlappingAI_Handle; // 0x1020
	bool bInAISafeZone; // 0x1028
	TMap<UBaseActivity*, FVector> ActivityPreviousLocationMap; // 0x1030
	float BlockedByPlayerCallCoolDown; // 0x1080
	USkeletalMeshComponent* MeshBody1P; // 0x1088
	UMaterialInstanceDynamic* Body1PMat; // 0x1090
	UCameraComponent* FirstPersonCameraComponent; // 0x1098
	USceneCaptureComponent2D* CameraCaptureComponent; // 0x10a0
	UArrowComponent* HeadcamComp; // 0x10a8
	UFMODAudioComponent* FMODWeaponComp; // 0x10b0
	UFMODAudioComponent* FMODBreathingAudioComp; // 0x10b8
	UFMODAudioComponent* FMODEnvComp; // 0x10c0
	UScoringComponent* ScoringComponent; // 0x10c8
	AReadyOrNotCharacter* CurrentViewCharacter; // 0x10d0
	FVector CurrentCameraLocation; // 0x10d8
	FRotator CurrentCameraRotation; // 0x10e4
	FMulticastInlineDelegate OnDefaultCommandIssued; // 0x10f0
	FMulticastInlineDelegate OnTeamViewSet; // 0x1100
	int32_t CurrentTeamViewIndex; // 0x1110
	APlayerViewActor* PlayerViewActor; // 0x1118
	APlayerViewActor* PlayerViewActorClass; // 0x1120
	FTimerHandle TH_TeamViewInput; // 0x1128
	float TeamViewInputHoldTime; // 0x1130
	float surfaceType; // 0x1134
	float roomType; // 0x1138
	FString PVPSpeakerName; // 0x1140
	bool bPendingCenterprint; // 0x1150
	float PendingCenterprintDuration; // 0x1154
	FName PendingCenterprintType; // 0x1158
	APlayerCharacter* PendingCenterprintOther; // 0x1160
	bool bIsSwatCommandOpen; // 0x1168
	USwatCommandWidget* SwatCommandWidget; // 0x1170
	bool bInCommandMenu; // 0x1179
	bool bInDevicesMenu; // 0x117a
	bool bInTabMenu; // 0x117b
	bool bFadeToGray; // 0x117c
	TSoftClassPtr<UObject> FallDamageIndicator; // 0x1180
	UAudioComponent* DyingAudioComp; // 0x11a8
	UVOIPTalker* VOIPTalker; // 0x11c0
	ADoor* OverlappingDoor; // 0x11e0
	USoundAttenuation* VOIPAttenuationSpatialized; // 0x11e8
	USoundEffectSourcePresetChain* VOIPSourceEffectChainSpatialized; // 0x11f0
	USoundAttenuation* VOIPAttenuationNonSpatialized; // 0x11f8
	USoundEffectSourcePresetChain* VOIPSourceEffectChainNonSpatialized; // 0x1200
	float Sensitivity; // 0x1208
	bool bInvertYaw; // 0x120c
	bool bInvertPitch; // 0x120d
	AAICharacter* AILookingAtThis; // 0x1210
	bool bSpottedBySwat; // 0x1218
	AActor* lastHighlightedActor; // 0x1220
	UUserWidget* HUD_Widget; // 0x1228
	UHumanCharacterHUD_V2* HumanCharacterWidget_V2; // 0x1230
	float UseDistance; // 0x1238
	UInteractableComponent* LastInteractableComponent; // 0x1240
	ABuildingTrigger* LastBuildingEntered; // 0x1248
	ABuildingTrigger* InsideCurrentBuilding; // 0x1250
	ADoor* lastHighlightedDoor; // 0x1258
	ABaseItem* lastHighlightedEvidence; // 0x1260
	APickupMagazineActor* lastHighlightedPickupMagazine; // 0x1268
	bool bExitWithFireSelect; // 0x1270
	APlayerCharacter* PreviousPosessedCharacter; // 0x1278
	FMulticastInlineDelegate OnClientPossessed; // 0x1288
	FMulticastInlineDelegate OnPlayerTakenDamageDetails; // 0x1298
	UFMODEvent* CriticalInjuredEvent; // 0x12a8
	UFMODEvent* FlatlineEvent; // 0x12b0
	UFMODEvent* FlatlineEventPvP; // 0x12b8
	UFMODEvent* HeadshotEvent; // 0x12c0
	UFMODEvent* SAPIPlateHitEvent; // 0x12c8
	char bWasRecentlyHealed : 1; // 0x12d0
	char bIsBeingHealed : 1; // 0x12d0
	char bIsHealing : 1; // 0x12d0
	char bMirroring : 1; // 0x12d0
	bool bSpawnInventoryItemsOnPossess; // 0x12d8
	FMulticastInlineDelegate OnNightVisionGogglesToggled; // 0x12e0
	FRotator FreeLookCache; // 0x12f0
	float YellOutEffectLength; // 0x1318
	float YelloutEffectRadius; // 0x131c
	bool bShowReadyStatus; // 0x1320
	APlayerState* LobbyAssociatedPlayerState; // 0x1328
	AReadyOrNotPlayerState* LastPlayerState; // 0x1330
	TArray<FName> HitBones; // 0x1338
	TSoftObjectPtr<UAnimMontage> Hit_Arm_L; // 0x1348
	TSoftObjectPtr<UAnimMontage> Hit_Arm_R; // 0x1370
	TSoftObjectPtr<UAnimMontage> Hit_Body_Upper; // 0x1398
	TSoftObjectPtr<UAnimMontage> Hit_Body_Lower; // 0x13c0
	TSoftObjectPtr<UAnimMontage> Hit_Leg_L; // 0x13e8
	TSoftObjectPtr<UAnimMontage> Hit_Leg_R; // 0x1410
	TSoftObjectPtr<UAnimMontage> Hit_Foot_L; // 0x1438
	TSoftObjectPtr<UAnimMontage> Hit_Foot_R; // 0x1460
	TSoftObjectPtr<UAnimMontage> Hit_Head_Front; // 0x1488
	TSoftObjectPtr<UAnimMontage> Hit_Head_Back; // 0x14b0
	UMatineeCameraShake* Camera_Hit_Arm_L; // 0x14d8
	UMatineeCameraShake* Camera_Hit_Arm_R; // 0x14e0
	UMatineeCameraShake* Camera_Hit_Low; // 0x14e8
	UMatineeCameraShake* Camera_Hit_Leg_L; // 0x14f0
	UMatineeCameraShake* Camera_Hit_Leg_R; // 0x14f8
	UMatineeCameraShake* Camera_Hit_Head_Front; // 0x1500
	UMatineeCameraShake* Camera_Hit_Head_Back; // 0x1508
	float CrouchHeight; // 0x1510
	USoundCue* BodyImpactGroundSound; // 0x1518
	float SpeedSmoothed; // 0x1538
	FRotator Camera_RotationRate; // 0x153c
	FRotator Actor_RotationRate; // 0x1548
	APawn* CurrentlyPiloting; // 0x1560
	TMap<FName, FWoundData> WoundMap; // 0x1568
	UParticleSystem* BloodSpray; // 0x15b8
	APlayerCharacter* RevivingPlayer; // 0x1648
	APlayerCharacter* BeingRevivedByPlayer; // 0x1650
	float RevivingOperatingTime; // 0x1658
	float StunMovementSpeedMultiplier; // 0x165c
	bool bStunAimLocked; // 0x1660
	ABaseItem* LastEquippedItemBeforeStun; // 0x1668
	EStunType LastBlockedStun; // 0x1678
	float LastBlockedStunTime; // 0x167c
	float FirstPersonShakeAmount; // 0x1680
	float ViewBlendMultiplier; // 0x1684
	FName BlendedBone; // 0x168c
	UAnimInstance* Replicated_3PAnimInstance; // 0x16a0
	UAnimInstance* Replicated_1PAnimInstance; // 0x16a8
	TArray<UAnimMontage*> MontageQueue_3P; // 0x16b0
	TArray<UAnimMontage*> MontageQueue_1P; // 0x16c0
	TArray<FItemSelectionPanelSetting_ItemGroup> ItemSelectionPanelGroups; // 0x16d0
	float HoldingUseTime; // 0x16e0
	bool bHoldingUse; // 0x16e4
	float UseClickTime; // 0x16e8
	bool bLookingAtEvidenceItem; // 0x16ec
	bool bLookingAtDoor; // 0x16ed
	bool bLookingAtCivilian; // 0x16ee
	bool bLookingAtSuspect; // 0x16ef
	bool bLookingAtDeadHuman; // 0x16f0
	bool bLookingAtHuman; // 0x16f1
	bool bLookingAtTarget; // 0x16f2
	bool bUserLowReady; // 0x16f3
	bool bForceLowReady; // 0x16f4
	float LowReadyTraceDistance; // 0x16f8
	AEvidenceActor* LastCollectedEvidence; // 0x1700
	TMap<ABaseArmour*, USkeletalMesh*> ArmorOverrideMapFP; // 0x1708
	TArray<AActor*> ChemlightClasses; // 0x1760
	char bIsInTightSpace : 1; // 0x1770
	TArray<UBasePlayerEffect*> PlayerEffects; // 0x1778
	UBasePlayerEffect* RecoilNerfEffect; // 0x1788
	FLoadout DefaultItems; // 0x1798
	int32_t EquipIndex; // 0x17b8
	TArray<FLoadout> RandomLoadoutSelection; // 0x17c0
	UMatineeCameraShake* ForwardShake; // 0x17d0
	UMatineeCameraShake* RightShake; // 0x17d8
	FMulticastInlineDelegate OnWeaponFireModeChanged; // 0x17e0
	FMulticastInlineDelegate OnWeaponFired; // 0x17f0
	ABaseItem* DroppedItem; // 0x1810
	ABloodPool* BloodPool; // 0x1818
	FVector CameraRotationRateMeshSpaceMultiplier; // 0x1820
	FVector MeshspaceRecoilMovementMultiplier; // 0x182c
	float MeshSpaceMovementMultiplier1P; // 0x1838
	FVector MeshspaceRecoilMovementMinMax; // 0x183c
	bool bWeaponDown3P; // 0x1851
	bool bIsWearingHeavyArmour; // 0x1852
	float ReturnToWeaponDownDelay; // 0x1854
	bool bFireLoop; // 0x1860
	FTimerHandle FullAutoLoop_Handle; // 0x1868
	float TimeSinceAiming; // 0x1878
	bool bServerIsBlockingAnimationPlaying; // 0x1888
	FMulticastInlineDelegate OnAttachmentLightToggled; // 0x1890
	FMulticastInlineDelegate OnMelee; // 0x18b8
	float SprintFovFactor; // 0x18d4
	float SprintFovInterpTime; // 0x18d8
	float DefaultFovInterpTime; // 0x18dc
	APlacedC2Explosive* PendingC2Removal; // 0x18f0
	ABaseItem* LastEquippedItemBeforeUsingChem; // 0x18f8
	ABaseGrenade* QuickThrowItem; // 0x1900
	ABaseItem* ItemBeforeQuickThrow; // 0x1908
	bool bQuickThrowing; // 0x1911
	float ClearingScore; // 0x1918
	bool bAiming; // 0x191c
	float AimTime; // 0x1920
	bool bReloadLoop; // 0x192a
	FMulticastInlineDelegate OnWeaponMagCheck; // 0x1940
	float ForwardStrafeSpeedMultiplier; // 0x1954
	float BackwardStrafeSpeedMultiplier; // 0x1958
	float SideStrafeSpeedMultiplier; // 0x195c
	float LeanSpeedMultiplier; // 0x1960
	float SpeedPercentLossPerLegInjury; // 0x1964
	bool bLeanLeftToggle; // 0x197c
	bool bLeanRightToggle; // 0x197d
	UFMODAudioComponent* LeanAudioComponent; // 0x1980
	UFMODEvent* LeanAudioEvent; // 0x1988
	FVector FirstPersonCameraPos_CurrentFrame; // 0x1990
	FVector FirstPersonCameraPos_LastFrame; // 0x199c
	float LeanMovementValue; // 0x19a8
	FCameraFreelookSetting FreelookSetting; // 0x19ac
	FHitResult VaultTraceForward; // 0x19c0
	FHitResult VaultTraceDownClose; // 0x1a48
	FHitResult VaultTraceDownMiddle; // 0x1ad0
	FHitResult VaultTraceDownFar; // 0x1b58
	bool bLedgeFound; // 0x1be0
	bool bVaulting; // 0x1be1
	UAnimMontage* LastPlayedVaultMontage; // 0x1c10
	bool bLeaningLeft; // 0x1c18
	bool bLeaningRight; // 0x1c19
	bool bLeaningUp; // 0x1c1a
	bool bLeaningDown; // 0x1c1b
	bool bFreeLeaning; // 0x1c20
	bool bIsLeaning; // 0x1c21
	float RunSpeed; // 0x1c24
	float SpeedModifier_AimFocus; // 0x1c28
	float SpeedModifier_Aim; // 0x1c2c
	float SpeedModifier_Crouch; // 0x1c30
	float SpeedModifier_Sprint; // 0x1c34
	float SpeedModifier_SprintMax; // 0x1c38
	float SpeedModifier_SprintTime; // 0x1c3c
	float SpeedModifier_ArmorMin; // 0x1c40
	float HitSpeedMultiplier; // 0x1c44
	float SlowDownSpeedMultiplier; // 0x1c48
	float WalkSpeedRampMultiplier; // 0x1c4c
	float SprintSpeedRampUpMultiplier; // 0x1c50
	float CurrentRunSpeedPercent; // 0x1c54
	float MaxRunSpeedPercent; // 0x1c5c
	float MaxCrouchRunSpeedPercent; // 0x1c60
	float MinWalkSpeedPercent; // 0x1c64
	float LastSetRunSpeed; // 0x1c78
	float WalkSpeedMultiplier; // 0x1c7c
	float DeployableWalkSpeedMultiplier; // 0x1c80
	bool bHoldingFastWalk; // 0x1c84
	bool bHoldingSprint; // 0x1c85
	char bDisableSprinting : 1; // 0x1c94
	bool bWalking; // 0x1c95
	bool bAllowPlacement; // 0x1c96
	float QuickLeanAmount; // 0x1cb0
	float FreeLeanX; // 0x1cb4
	float FreeLeanZ; // 0x1cb8
	float MeshspaceInterp; // 0x1cf8
	float VelocityCameraRollMultiplier; // 0x1cfc
	FRotator PendingRecoil; // 0x1d00
	float RecoilSpeed; // 0x1d18
	UAnimMontage* Last1PMontage; // 0x1d28
	TMap<FString, UAnimMontage*> PlayedTableMontageMap1P; // 0x1d30
	FName Rep_MontageSection3P; // 0x1d88
	UFMODEvent* JumpStartSound; // 0x1d90
	UFMODEvent* JumpLandSound; // 0x1d98
	UFMODSnapshot* InMix; // 0x1da0
	UFMODSnapshot* OutMix; // 0x1da8
	bool bOutMixPlaying; // 0x1db0
	UFMODEvent* InjuredScreamPVP; // 0x1db8
	UFMODEvent* DeathScreamPVP; // 0x1dc8
	UFMODAudioComponent* InjuredScreamComponent; // 0x1dd0
	float MovementRequiredPerSound; // 0x1ddc
	float RotationRequiredPerSound; // 0x1de0
	float NegativeVelocityRequiredForLandingSound; // 0x1de4
	TArray<FMovementSound> WalkSounds; // 0x1e08
	TSoftClassPtr<UObject> WalkSounds_Environmental; // 0x1e18
	TArray<FMovementSound> RunSounds; // 0x1e40
	TSoftClassPtr<UObject> RunSounds_Environmental; // 0x1e50
	TArray<FMovementSound> TurningSounds; // 0x1e78
	TArray<FMovementSound> LandingSounds; // 0x1e88
	float HitDirectionForward; // 0x1ea8
	float HitDirectionRight; // 0x1eac
	USkeletalMesh* Rep_FPBodyMesh; // 0x1ec0
	UFMODEvent* BreathingBaseEvent; // 0x1ec8
	float ExhaustionLevel; // 0x1ed0
	float ExhaustionDissipationRate; // 0x1ed4
	float ExhaustionIncreaseRate; // 0x1ed8
	float ExhaustionThreshold; // 0x1edc
	float FearLevel; // 0x1ee0
	float FearDissipationRate; // 0x1ee8
	float FearSuppressionScale; // 0x1eec
	float FearThreshold; // 0x1ef0
	bool bIsSightTweakMode; // 0x1f04
	UUserWidget* SightTweakerWidgetTemplate; // 0x1f08
	UUserWidget* SightTweakerOverlay; // 0x1f10
	FVector SightTweakerPosOffset; // 0x1f18
	FRotator SightTweakerRotOffset; // 0x1f24
	bool bNoTeamDamage; // 0x1f40
	float SpawnProtectionTime; // 0x1f44
	bool bIsThirdPerson; // 0x1f48
	UCameraComponent* ThirdPersonCameraComponent; // 0x1f50
	USpringArmComponent* ThirdPersonCameraArm; // 0x1f58
	FRotator Server_BaseAimRotation; // 0x1f60
	FRotator FreeAimCache; // 0x1f6c
	bool IsPlayingInteraction; // 0x1f80
	bool bIsStopping; // 0x1fcc
	bool bNVGOn; // 0x1fcd
	ALadderSnapZone* LadderPlacementZone; // 0x1fd0
	float MoveForwardInput; // 0x1fe4
	float MoveRightInput; // 0x1fe8
	FName LeftFootSocketName; // 0x2004
	FName RighttFootSocketName; // 0x200c
	EFootConstEnum LeftFootEnum; // 0x2014
	EFootConstEnum RightFootEnum; // 0x2015
	float FootAdjustOffset; // 0x2018
	float FootInterpSpeed; // 0x201c
	float FootRotationInterpSpeed; // 0x2020
	float HipInterpSpeed; // 0x2024
	float TraceDistance; // 0x2028
	float TraceOffset; // 0x202c
	float VelocityThreshold; // 0x2030
	float SpeedBubbleAmount; // 0x2034
	FRotator CurrentMeshRot; // 0x2038
	bool bIgnoreRotationOverride; // 0x2046
	EPlayerEmotion CurrentEmotion; // 0x2047
	float FacialAnimationOverrideTime; // 0x2048
	float FacialAnimationBlend; // 0x204c
	float FacialAnimationBlendDecay; // 0x2050
	int32_t FacialAnimationPriority; // 0x2054
	FVector CameraBobTrans; // 0x2070
	FVector WeaponBobTrans; // 0x207c
	FRotator WeaponBobRot; // 0x2088
	FRotator CameraBobRot; // 0x2094
	bool bIsSecondarySightActive; // 0x20a0
	FMulticastInlineDelegate OnSecondarySightToggled; // 0x20a8
	bool bIsPelvisFPMovementBobActive; // 0x20b8
	float PelvisFPMovementDamping; // 0x20bc
};

struct UDebugLogLibrarySettings {
	char bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers : 1; // 0x28
	char bCrashGameInShippingBuildConfiguration : 1; // 0x28
	char bSaveLogMessagesToCustomLogFile : 1; // 0x28
	FColor InfoColor; // 0x2c
	FColor ErrorColor; // 0x30
	FColor WarningColor; // 0x34
	FColor SuccessColor; // 0x38
	TMap<FName, int32_t> ViewportLogKeys; // 0x40
	char bEnableSpecifiers : 1; // 0x90
	ELoggingOptions DisplaySpecifiersIn; // 0x91
	TMap<EDebugLogType, FString> LogCategorySpecifiers; // 0x98
	char bLogContext : 1; // 0xe8
	ELoggingOptions DisplayContextIn; // 0xe9
};

struct UNiagaraDataInterfaceVector2DCurve {
	FRichCurve XCurve; // 0x70
	FRichCurve YCurve; // 0xf0
};

struct UW_DebugInfoContainer_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBackgroundBlur* BG_Blur; // 0x268
	UImage* BG_Image; // 0x270
	UVerticalBox* DebugInfo_Container; // 0x278
	UTextBlock* Title_Text; // 0x280
	FSlateFontInfo TitleFont; // 0x288
	FMargin TitlePadding; // 0x2e0
	EHorizontalAlignment TitleHorizontalAlignment; // 0x2f0
	EVerticalAlignment TitleVerticalAlignment; // 0x2f1
	FSlateFontInfo DebugNameFont; // 0x2f8
	FSlateFontInfo DebugValueFont; // 0x350
	bool bEnableBackgroundEffects; // 0x3a8
	FText Title; // 0x3b0
	TArray<FText> DebugItems; // 0x3c8
	TArray<float> Spacing; // 0x3d8
	bool bUseUniformSpacing; // 0x3e8
	float DefaultSpacing; // 0x3ec
	TArray<UW_DebugInfo_C*> DebugInfoWidgets; // 0x3f0
};

struct URadialVector {
	float Magnitude; // 0xb0
	FVector Position; // 0xb4
};

struct UFontFace {
	FString SourceFilename; // 0x30
	EFontHinting Hinting; // 0x40
	EFontLoadingPolicy LoadingPolicy; // 0x41
	EFontLayoutMethod LayoutMethod; // 0x42
};

struct UW_MainMenu_V2_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* AdminPasswordBox; // 0x268
	UCanvasPanel* BackgroundCanvas; // 0x270
	UW_Button_C* btn_Bug; // 0x278
	UW_Button_C* btn_Cancel; // 0x280
	UW_Button_C* btn_ConfirmAdminPassword; // 0x288
	UW_Button_C* btn_FindSession; // 0x290
	UW_Button_C* btn_Options; // 0x298
	UW_Button_C* btn_Play; // 0x2a0
	UW_Button_C* btn_PlayFriendsOnly; // 0x2a8
	UW_Button_C* btn_PlayPublicLobby; // 0x2b0
	UW_Button_C* btn_PlaySinglePlayer; // 0x2b8
	UW_Button_C* btn_Quit; // 0x2c0
	UHorizontalBox* BtnFindSession; // 0x2c8
	UHorizontalBox* BtnPlayOptions; // 0x2d0
	UTextBlock* ButtonDescription; // 0x2d8
	UEditableText* EditableText_1; // 0x2e0
	USizeBox* EscapeMenu; // 0x2e8
	UFriendsList_C* FriendsList; // 0x2f0
	UImage* Image_112; // 0x2f8
	UTextBlock* SessionSearchText; // 0x300
	UW_Text_C* txt_Version; // 0x308
	bool WasShowingMouse; // 0x310
	UW_SettingsMenu_C* SettingsMenu; // 0x318
	UObject* CallVoteMenu; // 0x320
	float TimeSinceCreated; // 0x328
};

struct UVehicleWheel {
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

struct UEnvQueryTest_Volume {
	UEnvQueryContext* VolumeContext; // 0x1f8
	AVolume* VolumeClass; // 0x200
	char bDoComplexVolumeTest : 1; // 0x208
};

struct UW_StandardText_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* TheText; // 0x268
	FText Text; // 0x270
	int32_t FontSize; // 0x288
	UFont* Font; // 0x290
	FSlateColor Color; // 0x298
	FName Typeface; // 0x2c0
	ETextJustify Justification; // 0x2c8
};

struct UHLODProxy {
	TArray<FHLODProxyMesh> ProxyMeshes; // 0x28
	TMap<UHLODProxyDesc*, FHLODProxyMesh> HLODActors; // 0x38
};

struct UInteractionsData {
	FName InteractionName; // 0x30
	char bDoNotApplyRelativeOffset : 1; // 0x38
	FVector RelativePosOffsetToDriver; // 0x3c
	FRotator RelativeRotOffsetToDriver; // 0x48
	float CancelDurationLength; // 0x54
	char bHolsterItemBeforePlaying : 1; // 0x58
	char bUpdateSlaveTransform : 1; // 0x58
	char bUseDriverFPMotion : 1; // 0x58
	UAnimMontage* DriverMontage; // 0x60
	UAnimMontage* DriverMontage_FP; // 0x68
	float TriggerTolerance; // 0x70
	float DriverBlendDuration; // 0x74
	char bUseSlaveFPMotion : 1; // 0x78
	UAnimMontage* SlaveMontage; // 0x80
	UAnimMontage* SlaveMontage_FP; // 0x88
	char bMatchDriverYaw : 1; // 0x90
	float MatchedYawOffset; // 0x94
	char bHasSharedItemAnim : 1; // 0x98
	UAnimMontage* SharedItemMontage; // 0xa0
};

struct AShotDetectionVolume {
	UBoxComponent* Bounds; // 0x220
};

struct UMaterialExpressionShadowReplace {
	FExpressionInput Default; // 0x40
	FExpressionInput Shadow; // 0x54
};

struct ULevelActorContainer {
	TArray<AActor*> Actors; // 0x28
};

struct ADevice_SuperShorty_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1190
	UShellRackShellComponent* Shell4; // 0x1198
	UShellRackShellComponent* Shell3; // 0x11a0
	UShellRackShellComponent* Shell2; // 0x11a8
	UShellRackShellComponent* Shell1; // 0x11b0
	UShellRackShellComponent* Shell0; // 0x11b8
};

struct UW_Briefing_Event_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Reveal; // 0x268
	UWidgetAnimation* Spawn; // 0x270
	UW_Button_C* btn_TimelineEntry; // 0x278
	UImage* img_Line; // 0x280
	UW_Text_C* txt_Description; // 0x288
	UW_Text_C* txt_Hint; // 0x290
	UW_Text_C* txt_Timestamp; // 0x298
	UW_Text_C* txt_Title; // 0x2a0
	bool bIsHovered; // 0x2a8
	FMulticastInlineDelegate TimelineEventHovered; // 0x2b0
	FMulticastInlineDelegate TimelineEventUnhovered; // 0x2c0
	FMulticastInlineDelegate TimelineEventClicked; // 0x2d0
	FTimelineEvent EventData; // 0x2e0
	float EventAudioStart; // 0x330
	float EventAudioEnd; // 0x334
	float EventAudioDuration; // 0x338
};

struct UVectorFieldComponent {
	UVectorField* VectorField; // 0x450
	float Intensity; // 0x458
	float Tightness; // 0x45c
	char bPreviewVectorField : 1; // 0x460
};

struct AEvidenceActor {
	UScoringComponent* ScoringComponent; // 0x298
	FString EvidenceName; // 0x2a0
	char bEvidenceExtracted : 1; // 0x2b0
	EEvidenceActorState PreviousEvidenceState; // 0x2b1
	EEvidenceActorState EvidenceState; // 0x2b2
	bool bIsBeingCollected; // 0x2b3
	float CurrentCollectionTime; // 0x2b4
	float MaxCollectionTime; // 0x2b8
	char bInteractHeld : 1; // 0x2bc
};

struct UEditableTextBoxWidgetStyle {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x30
};

struct APhysicsVolume {
	float TerminalVelocity; // 0x258
	int32_t Priority; // 0x25c
	float FluidFriction; // 0x260
	char bWaterVolume : 1; // 0x264
	char bPhysicsOnContact : 1; // 0x264
};

struct USubtitlesFileSave {
	TMap<FName, FLipSync_Pause> Data; // 0x28
};

struct ADecalActor {
	UDecalComponent* Decal; // 0x220
};

struct UPhysicsSettings {
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

struct UNavMovementComponent {
	FNavAgentProperties NavAgentProps; // 0xf0
	float FixedPathBrakingDistance; // 0x120
	char bUpdateNavAgentWithOwnersCollision : 1; // 0x124
	char bUseAccelerationForPaths : 1; // 0x124
	char bUseFixedBrakingDistanceForPaths : 1; // 0x124
	FMovementProperties MovementState; // 0x125
	UObject* PathFollowingComp; // 0x128
};

struct UNiagaraEffectType {
	ENiagaraScalabilityUpdateFrequency UpdateFrequency; // 0x28
	ENiagaraCullReaction CullReaction; // 0x2c
	UNiagaraSignificanceHandler* SignificanceHandler; // 0x30
	TArray<FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings; // 0x38
	FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings; // 0x48
	FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings; // 0x58
	UNiagaraBaselineController* PerformanceBaselineController; // 0x70
	FNiagaraPerfBaselineStats PerfBaselineStats; // 0x78
	FGuid PerfBaselineVersion; // 0x88
};

struct UParticleModuleAttractorPointGravity {
	FVector Position; // 0x30
	float Radius; // 0x3c
	UDistributionFloat* Strength; // 0x40
	FRawDistributionFloat StrengthRaw; // 0x48
};

struct UMovieSceneFolder {
	FName FolderName; // 0x28
	TArray<UMovieSceneFolder*> ChildFolders; // 0x30
	TArray<UMovieSceneTrack*> ChildMasterTracks; // 0x40
	TArray<FString> ChildObjectBindingStrings; // 0x50
};

struct USynth2DSlider {
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

struct UW_LoadoutItem_Presets_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278
	UW_LoadoutItem_Preset_C* LoadoutItem_Preset_2; // 0x280
	UW_LoadoutItem_Preset_C* LoadoutItem_Preset_3; // 0x288
	UW_LoadoutItem_Preset_C* LoadoutItem_Preset_4; // 0x290
	UW_LoadoutItem_Preset_C* LoadoutItem_Preset_5; // 0x298
	UW_LoadoutItem_Preset_C* LoadoutItem_Preset_Default; // 0x2a0
	UVerticalBox* LoadoutItem_Presets_Container; // 0x2a8
	UW_LoadoutItem_Preset_C* LoadoutItem_WeaponTable; // 0x2b0
	int32_t SelectedRow; // 0x2b8
	bool bAnyKeyDown; // 0x2bc
	bool bLoaded; // 0x2bd
	ABaseItem* LastSetItemClass; // 0x2c0
	UW_LoadoutItem_Preset_C* LastSelectedPreset; // 0x2c8
	UW_LoadoutCustomizationMenu_C* Owner; // 0x2d0
};

struct UMaterialExpressionThinTranslucentMaterialOutput {
	FExpressionInput TransmittanceColor; // 0x40
};

struct APepperballGun {
	UParticleSystemComponent* ShootTrailComponent; // 0x1128
	UParticleSystem* ParticleShootTrail; // 0x1130
	int32_t HeadshotsUntilAbuse; // 0x1138
	int32_t CurrentHeadshotCounter; // 0x113c
	int32_t StunShotsUntilAbuse; // 0x1140
	int32_t CurrentStunShotCounter; // 0x1144
	int32_t MaxBallsInHopper; // 0x1148
	int32_t BallsInHopper; // 0x114c
};

struct UUMGSequencePlayer {
	UWidgetAnimation* Animation; // 0x260
	FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x270
};

struct UOnsetNRT {
	UOnsetNRTSettings* Settings; // 0x78
};

struct UPaperTileMapComponent {
	int32_t MapWidth; // 0x478
	int32_t MapHeight; // 0x47c
	int32_t TileWidth; // 0x480
	int32_t TileHeight; // 0x484
	UPaperTileSet* DefaultLayerTileSet; // 0x488
	UMaterialInterface* Material; // 0x490
	TArray<UPaperTileLayer*> TileLayers; // 0x498
	FLinearColor TileMapColor; // 0x4a8
	int32_t UseSingleLayerIndex; // 0x4b8
	bool bUseSingleLayer; // 0x4bc
	UPaperTileMap* TileMap; // 0x4c0
};

struct UW_StandardCheckbox_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* CheckboxButton; // 0x268
	UImage* CheckboxCheckedImage; // 0x270
	UOverlay* Checked; // 0x278
	UImage* Down; // 0x280
	UImage* Highlight; // 0x288
	UImage* Up; // 0x290
	FMulticastInlineDelegate OnCheckStateChange; // 0x298
	FMulticastInlineDelegate OnReleased; // 0x2a8
	FMulticastInlineDelegate OnPressed; // 0x2b8
	FMulticastInlineDelegate OnHovered; // 0x2c8
	FMulticastInlineDelegate OnUnhovered; // 0x2d8
	bool bChecked; // 0x2e8
	UTextBlock* DescriptionWidget; // 0x2f0
	FText DescriptionText; // 0x2f8
	UFMODEvent* HoveredSound; // 0x310
	UFMODEvent* CheckedSound; // 0x318
	UFMODEvent* UncheckedSound; // 0x320
	FLinearColor CheckBoxColor; // 0x328
};

struct UScopedWeaponAttachment {
	TArray<FScopeModifications> ScopeMods; // 0xf98
	float ZoomFOVAddition; // 0xfa8
	float ZoomInSpeed; // 0xfac
	float ZoomOutSpeed; // 0xfb0
	bool bSupportsCowitness; // 0xfb4
	bool bUseScopeEffect; // 0xfb5
	UTexture2D* ScopeReticle; // 0xfb8
	bool bUsePipRendering; // 0xfc0
	ESceneCaptureSource CaptureSource; // 0xfc1
	bool bOverridePostProcessSettings; // 0xfc2
	bool bNeedInventoryUpdate; // 0xfc3
	FPostProcessSettings OverridePostProcessSettings; // 0xfd0
	int32_t PipMaterialIdx; // 0x1530
	float PipFOV; // 0x1534
	float PlayerCameraFOVMultiplier; // 0x1538
	UMaterialInstanceDynamic* PipRenderDynamicMaterial; // 0x1540
	USceneCaptureComponent2D* PipSceneCapture; // 0x1548
	UTextureRenderTarget2D* PipRenderTarget; // 0x1550
	FVector2D PipResolution; // 0x1558
};

struct UMovieSceneTrack {
	FMovieSceneTrackEvalOptions EvalOptions; // 0x50
	bool bIsEvalDisabled; // 0x55
	TArray<int32_t> RowsDisabled; // 0x58
	FGuid EvaluationFieldGuid; // 0x6c
	FMovieSceneTrackEvaluationField EvaluationField; // 0x80
};

struct UParticleModuleLocation {
	FRawDistributionVector StartLocation; // 0x30
	float DistributeOverNPoints; // 0x78
	float DistributeThreshold; // 0x7c
};

struct UObjectiveWidget {
	UWidgetComponent* OwningComponent; // 0x278
	ETeamType ObjectiveTeam; // 0x280
};

struct UBlackboardData {
	UBlackboardData* Parent; // 0x30
	TArray<FBlackboardEntry> Keys; // 0x38
	char bHasSynchronizedKeys : 1; // 0x48
};

struct ABuildingTrigger_Incrimination {
	TArray<AIncriminationClueSpawnPoint*> ClueSpawnPoints; // 0x2c0
};

struct UW_Briefing_IntelList_Entry_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWrapBox* IntelContainer; // 0x268
	UW_Header_C* W_Header; // 0x270
	E_Briefing_Intel_Types DocumentType; // 0x278
	TArray<FCharacterBio> Bios; // 0x280
	TArray<FST_Briefing_Evidence> Media; // 0x290
	int32_t CurrentColumn; // 0x2a0
	int32_t CurrentRow; // 0x2a4
	FMulticastInlineDelegate BioIntelClicked; // 0x2a8
	FMulticastInlineDelegate MediaIntelClicked; // 0x2b8
	UW_Briefing_Intel_Entry_C* CurrentActiveEntry; // 0x2c8
};

struct UMaterialExpressionSkyAtmosphereLightIlluminance {
	int32_t LightIndex; // 0x40
	FExpressionInput WorldPosition; // 0x44
};

struct UTeamBreachAndClearActivity {
	AThreatAwarenessActor* UsedClearPoint; // 0x218
	ABaseGrenade* LeaderLastEquippedGrenade; // 0x228
	ABaseGrenade* ThrownGrenade; // 0x230
	float BreachStartDelay; // 0x244
	float ClearStartDelay; // 0x248
	ACyberneticCharacter* DoorUser; // 0x250
	ACyberneticCharacter* DoorBreacher; // 0x258
	ABaseItem* DoorBreachItemClass; // 0x260
	ABaseItem* DoorUseItemClass; // 0x268
	UDoorBreachActivity* DoorUseActivity; // 0x278
	UDoorBreachActivity* DoorBreachActivity; // 0x280
	float ClearWaitTime; // 0x288
	UCustomDoorBreachActivity* CustomDoorUseActivityClass; // 0x290
};

struct UMovieSceneNiagaraSystemSpawnSection {
	ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior; // 0xe8
	ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior; // 0xec
	ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior; // 0xf0
	ENiagaraAgeUpdateMode AgeUpdateMode; // 0xf4
};

struct ULevelCapture {
	bool bAutoStartCapture; // 0x220
	FGuid PrerequisiteActorId; // 0x22c
};

struct UInGameAdManager {
	char bShouldPauseWhileAdOpen : 1; // 0x38
	TArray<FDelegate> ClickedBannerDelegates; // 0x40
	TArray<FDelegate> ClosedAdDelegates; // 0x50
};

struct UWaveScalar {
	float Magnitude; // 0xb0
	FVector Position; // 0xb4
	float Wavelength; // 0xc0
	float Period; // 0xc4
	EWaveFunctionType Function; // 0xc8
	EFieldFalloffType Falloff; // 0xc9
};

struct UW_WeaponWheel_ItemStat_FireRate_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x840
};

struct APolicePresenceTestActor {
	USceneComponent* Scene; // 0x220
	UBillboardComponent* Police; // 0x228
	UBillboardComponent* Suspect; // 0x230
};

struct AKingOfTheHillGS {
	ATugOfWarMover* Mover; // 0x6c0
};

struct UBTTask_RotateToFaceBBEntry {
	float Precision; // 0x98
};

struct UResourceComponent {
	FMulticastInlineDelegate OnFullResource; // 0xb0
	FMulticastInlineDelegate OnLowResource; // 0xc0
	FMulticastInlineDelegate OnDepletedResource; // 0xd0
	FName ResourceName; // 0xe0
	float Resource; // 0xe8
	float MaxResource; // 0xec
	float MaxResourceLimit; // 0xf0
	float LowResourceThreshold; // 0xf4
	float OriginalMaxResource; // 0xf8
	float LowResource; // 0xfc
	float PreviousResource; // 0x100
	char bUnlimited : 1; // 0x104
};

struct USynthComponentToneGenerator {
	float Frequency; // 0x6c0
	float Volume; // 0x6c4
};

struct UMotionControllerComponent {
	int32_t PlayerIndex; // 0x450
	EControllerHand Hand; // 0x454
	FName MotionSource; // 0x458
	char bDisableLowLatencyUpdate : 1; // 0x460
	ETrackingStatus CurrentTrackingStatus; // 0x464
	bool bDisplayDeviceModel; // 0x465
	FName DisplayModelSource; // 0x468
	UStaticMesh* CustomDisplayMesh; // 0x470
	TArray<UMaterialInterface*> DisplayMeshMaterialOverrides; // 0x478
	UPrimitiveComponent* DisplayComponent; // 0x4f0
};

struct UMaterialExpressionFloor {
	FExpressionInput Input; // 0x40
};

struct UNavigationPath {
	FMulticastInlineDelegate PathUpdatedNotifier; // 0x28
	TArray<FVector> PathPoints; // 0x38
	ENavigationOptionFlag RecalculateOnInvalidation; // 0x48
};

struct USubmixEffectFilterPreset {
	FSubmixEffectFilterSettings Settings; // 0x9c
};

struct UCheckDoorQuestNode {
	ADoor* TargetDoor; // 0x270
};

struct UMaterialExpressionFunctionInput {
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

struct UMaterialExpressionPreviousFrameSwitch {
	FExpressionInput CurrentFrame; // 0x40
	FExpressionInput PreviousFrame; // 0x54
};

struct ULuminARLightEstimate {
	TArray<float> AmbientIntensityNits; // 0x40
};

struct UMaterialExpressionMax {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UMusicData {
	FMusicTrack PreplanningTrack; // 0x30
	FMusicTrack AmbientTrack; // 0x58
	FMusicTrack ActionTrack; // 0x80
	FMusicTrackFMOD FMODTracks; // 0xa8
};

struct UEndSessionCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UNiagaraDataInterfaceRenderTarget2D {
	FIntPoint Size; // 0xd8
	ENiagaraMipMapGeneration MipMapGeneration; // 0xe0
	ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe1
	char bInheritUserParameterSettings : 1; // 0xe2
	char bOverrideFormat : 1; // 0xe2
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8
	TMap<uint64_t, UTextureRenderTarget2D*> ManagedRenderTargets; // 0x158
};

struct UUdpMessagingSettings {
	bool EnabledByDefault; // 0x28
	bool EnableTransport; // 0x29
	bool bAutoRepair; // 0x2a
	float MaxSendRate; // 0x2c
	uint32_t AutoRepairAttemptLimit; // 0x30
	bool bStopServiceWhenAppDeactivates; // 0x34
	FString UnicastEndpoint; // 0x38
	FString MulticastEndpoint; // 0x48
	EUdpMessageFormat MessageFormat; // 0x58
	char MulticastTimeToLive; // 0x59
	TArray<FString> StaticEndpoints; // 0x60
	bool EnableTunnel; // 0x70
	FString TunnelUnicastEndpoint; // 0x78
	FString TunnelMulticastEndpoint; // 0x88
	TArray<FString> RemoteTunnelEndpoints; // 0x98
};

struct UMagazineDisplayComponent {
	ABaseMagazineWeapon* FoundWeapon; // 0x4e0
	TArray<USkeletalMesh*> RequireMeshs; // 0x4f0
	EItemCategory ItemCategory; // 0x500
	int32_t MinimumMagazineCountToDisplay; // 0x504
	FName Socket; // 0x508
};

struct AGS_Firefight_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x6d8
};

struct UStackUpActivityProxy {
	ADoor* StackUpDoor; // 0x58
	AStackUpActor* StackUpActor; // 0x60
};

struct UGizmoCircleComponent {
	FVector Normal; // 0x470
	float Radius; // 0x47c
	float Thickness; // 0x480
	int32_t NumSides; // 0x484
	bool bViewAligned; // 0x488
	bool bOnlyAllowFrontFacingHits; // 0x489
};

struct ULoadingScreen {
	ULevelStreaming* StreamedLevel; // 0x268
};

struct UMediaTexture {
	TextureAddress AddressX; // 0x178
	TextureAddress AddressY; // 0x179
	bool AutoClear; // 0x17a
	FLinearColor ClearColor; // 0x17c
	bool EnableGenMips; // 0x18c
	char NumMips; // 0x18d
	bool NewStyleOutput; // 0x18e
	MediaTextureOutputFormat OutputFormat; // 0x18f
	float CurrentAspectRatio; // 0x190
	MediaTextureOrientation CurrentOrientation; // 0x194
	UMediaPlayer* MediaPlayer; // 0x198
};

struct UBTCompositeNode {
	TArray<FBTCompositeChild> Children; // 0x58
	TArray<UBTService*> Services; // 0x68
	char bApplyDecoratorScope : 1; // 0x88
};

struct UW_PermanentOverlay_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278
	UTextBlock* TopRightText; // 0x280
	UW_FPSCounter_C* W_FPSCounter; // 0x288
	UW_NetworkStatusErrors_C* W_NetworkStatusErrors; // 0x290
	UImage* WhiteSquare; // 0x298
	bool bInitialized; // 0x2a0
	APlayerCharacter* CachedPlayer; // 0x2a8
};

struct UW_HealthStatus_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3a0
	UImage* Divider_Image; // 0x3a8
	bool bShowDivider; // 0x3b0
};

struct UBallistic_Widget_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	bool bBreathIn; // 0x268
};

struct UPickupItemActivity {
	float SearchRadius; // 0x1a8
	char bDebug : 1; // 0x1ac
	AWeaponCacheActor* WeaponCacheActor; // 0x1b8
	ABaseItem* PickupItem; // 0x1c8
};

struct UMovieSceneSlomoSection {
	FMovieSceneFloatChannel FloatCurve; // 0xe8
};

struct UPreviewMeshCollection {
	USkeleton* Skeleton; // 0x38
	TArray<FPreviewMeshCollectionEntry> SkeletalMeshes; // 0x40
};

struct UPlayerHealthStatusWidget {
	UHealthStatusWidget* Health; // 0x260
	UHealthStatusWidget* Armor; // 0x268
	UHealthStatusWidget* Helmet; // 0x270
	APlayerCharacter* PlayerCharacter; // 0x278
};

struct UHardCoverCombatMove {
	UTakeCoverActivity* LastWaitInCoverActivity; // 0x1b8
	AReadyOrNotCharacter* LastTrackedEnemy; // 0x1d0
};

struct UParticleModuleTypeDataBeam2 {
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

struct UInterpTrackInstFloatProp {
	float ResetFloat; // 0x58
};

struct UNiagaraDataInterfaceCurveBase {
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

struct UANIMBP_C2_Charge_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x520
	FAnimNode_Root AnimGraphNode_Root; // 0x528
	FAnimNode_Slot AnimGraphNode_Slot; // 0x558
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x5a0
};

struct UPepperballDamageType {
	float StunDurationHeadshot; // 0x620
	float StunDurationLeg; // 0x624
};

struct UBTService_BlueprintBase {
	AAIController* AIOwner; // 0x70
	AActor* ActorOwner; // 0x78
	char bShowPropertyDetails : 1; // 0x90
	char bShowEventDetails : 1; // 0x90
};

struct ACollectedEvidenceActor {
	UStaticMeshComponent* CollectionBagMesh; // 0x220
	UFMODEvent* Bag_Spawn_Sound; // 0x228
};

struct UANIMBP_M590_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8
};

struct UInputRouter {
	bool bAutoInvalidateOnHover; // 0x28
	bool bAutoInvalidateOnCapture; // 0x29
	UInputBehaviorSet* ActiveInputBehaviors; // 0x38
};

struct USendFriendInviteCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UParticleModuleSize_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x78
};

struct ATutorialMessageVolume {
	FString MessageMapID; // 0x260
	bool bIsBigPopUp; // 0x270
	bool bHasDisplayedMessage; // 0x271
	FText MessageTitle; // 0x278
	TArray<FText> MessageContent; // 0x290
	TArray<FTutorialActionPromptSlot> MessageActions; // 0x2a0
};

struct UMaterialExpressionDotProduct {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UW_WeaponWheel_MagazineSlot_C {
	UHorizontalBox* Mags_Container; // 0x260
	UHorizontalBox* MagsOutline_Container; // 0x268
	TArray<UImage*> Mags; // 0x270
};

struct UConnectionCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UMaterialExpressionConstantBiasScale {
	FExpressionInput Input; // 0x40
	float Bias; // 0x54
	float Scale; // 0x58
};

struct ATrapSpawnPoint {
	UTrapSpawnComponent* SpawnPoint; // 0x2d8
	bool bAlreadySpawned; // 0x2e0
};

struct UChaosSolverSettings {
	FSoftClassPath DefaultChaosSolverActorClass; // 0x40
};

struct UW_PersonalizationItem_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278
	UWidgetAnimation* Anim_ButtonPressed; // 0x280
	UImage* BottonBorder_Image; // 0x288
	UW_StandardButton_C* Button; // 0x290
	UImage* ItemIcon_Image; // 0x298
	UImage* LeftBorder_Image; // 0x2a0
	USizeBox* RadioIcon_SizeBox; // 0x2a8
	UImage* RightBorder_Image; // 0x2b0
	UImage* SelectedRadioIcon_Image; // 0x2b8
	UImage* TopBorder_Image; // 0x2c0
	UW_Text_C* txt_Name; // 0x2c8
	UImage* UnselectedRadioIcon_Image; // 0x2d0
	FText ItemName; // 0x2d8
	bool bSelected; // 0x2f0
	FMulticastInlineDelegate OnButtonClicked; // 0x2f8
	FMulticastInlineDelegate OnButtonHovered; // 0x308
	FMulticastInlineDelegate OnButtonUnhovered; // 0x318
	FCharacterPersonalizationData PersonalizationData; // 0x328
};

struct AThrownChemlight {
	UPointLightComponent* LightSource; // 0x458
	UFMODAudioComponent* FmodSteppedOnComponent; // 0x460
	FLinearColor ChemlightColor; // 0x468
	FVector LightSourcePos; // 0x478
	float EmmisiveBrightness; // 0x488
	UMaterialInstance* ChemlightMaterial; // 0x490
	UMaterialInstanceDynamic* Chemlight_ActivatedInst; // 0x498
	float InitialGlowSpeed; // 0x4a4
	float GlowStartDieTime; // 0x4a8
	float GlowLightDieSpeed; // 0x4ac
	float GlowLightTotalLife; // 0x4b0
	float CurrentLifeTime; // 0x4b4
	UMaterialInstance* DecalMat; // 0x4b8
};

struct UMovieSceneCameraShakeSourceTriggerTrack {
	TArray<UMovieSceneSection*> Sections; // 0x98
};

struct UANIMBP_TAC700_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x308
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x350
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x470
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x4f0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x648
	FAnimNode_Slot AnimGraphNode_Slot; // 0x708
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x750
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x778
};

struct UMessageDisplayBox {
	FString MessageTxt; // 0x260
	FString ButtonTxt; // 0x270
	bool bShouldQuitOnButtonPress; // 0x280
};

struct UHapticFeedbackEffect_Curve {
	FHapticFeedbackDetails_Curve HapticDetails; // 0x28
};

struct UProgressWidgetStyle {
	FProgressBarStyle ProgressBarStyle; // 0x30
};

struct UEnvQueryGenerator_Cone {
	FAIDataProviderFloatValue AlignedPointsDistance; // 0x80
	FAIDataProviderFloatValue ConeDegrees; // 0xb8
	FAIDataProviderFloatValue AngleStep; // 0xf0
	FAIDataProviderFloatValue Range; // 0x128
	UEnvQueryContext* CenterActor; // 0x160
	char bIncludeContextLocation : 1; // 0x168
};

struct UEnvQueryTest {
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

struct UPlayerPaperdollWidget {
	UImage* Outline_Image; // 0x260
	UImage* Head_Image; // 0x268
	UImage* Body_Image; // 0x270
	UImage* RightArm_Image; // 0x278
	UImage* LeftArm_Image; // 0x280
	UImage* RightLeg_Image; // 0x288
	UImage* LeftLeg_Image; // 0x290
	UImage* Headwear_Image; // 0x298
	UImage* BodyArmor_Image; // 0x2a0
};

struct UChaseTargetActivity {
	AReadyOrNotCharacter* ChaseTarget; // 0x1d8
};

struct USingleClickInputBehavior {
	bool HitTestOnRelease; // 0xc0
};

struct UW_LoadoutCategory_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278
	UWidgetAnimation* Anim_ButtonPressed; // 0x280
	UW_StandardButton_C* Button; // 0x288
	UOverlay* CategoryExpander_Overlay; // 0x290
	UVerticalBox* MainContainer; // 0x298
	UOverlay* SelectedItemInfo_Container; // 0x2a0
	UW_Text_C* txt_CategoryName; // 0x2a8
	UW_Text_C* txt_ItemName; // 0x2b0
	FText LoadoutCategoryName; // 0x2b8
	FText ItemName; // 0x2d0
	TArray<UW_LoadoutClass_C*> LoadoutClassWidgets; // 0x2e8
	FText Tooltip; // 0x2f8
	EItemCategory LoadoutCategory; // 0x310
	LoadoutScrollBehaviour ScrollBehaviour; // 0x311
	EVerticalAlignment ItemInfoCardAlignment; // 0x312
	FMargin ItemInfoCardPadding; // 0x314
	TArray<FLoadoutCategory> GearCategoryClasses; // 0x328
	TArray<UW_LoadoutItem_C*> LoadoutItemWidgets; // 0x338
	TArray<UBaseWidget*> LoadoutWidgets; // 0x348
	UW_LoadoutItem_C* SelectedLoadoutItem; // 0x358
	UW_LoadoutClass_C* LastSelectedLoadoutClass; // 0x360
	UW_LoadoutCustomizationMenu_C* Owner; // 0x368
	ABaseItem* SelectedItemClass; // 0x370
	bool bCollapsed; // 0x378
	UFMODEvent* ItemSelectedSound; // 0x380
	bool bRequiresQuartermaster; // 0x388
	bool bAllowPresets; // 0x389
	bool bOnlyAllowOneSelection; // 0x38a
	FMulticastInlineDelegate OnButtonClicked; // 0x390
	FMulticastInlineDelegate OnButtonHovered; // 0x3a0
	FMulticastInlineDelegate OnButtonUnhovered; // 0x3b0
	FMulticastInlineDelegate OnLoadoutItemButtonClicked; // 0x3c0
	bool bApplyLoadoutOnConstruct; // 0x3d0
	bool bChangeCameraView; // 0x3d1
	FName CameraTag; // 0x3d4
	FString PreviewAnimation; // 0x3e0
	bool bChildSelected; // 0x3f0
	bool bInMenuBounds; // 0x3f1
	bool bHovered; // 0x3f2
	bool bAnyKeyDown; // 0x3f3
	int32_t SelectedRow; // 0x3f4
	int32_t SelectedColumn; // 0x3f8
	FText DirectoryName; // 0x400
	float ExpandCollapseDelayTimeRemaining; // 0x418
	UPreMissionPlanning* PreMissionPlanningWidget; // 0x420
};

struct AAdvancedGameSession {
	TMap<FUniqueNetIdRepl, FText> BanList; // 0x238
};

struct UProceduralFoliageComponent {
	UProceduralFoliageSpawner* FoliageSpawner; // 0xb0
	float TileOverlap; // 0xb8
	AVolume* SpawningVolume; // 0xc0
	FGuid ProceduralGuid; // 0xc8
};

struct UW_AttachmentCategory_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278
	UWidgetAnimation* Anim_ButtonPressed; // 0x280
	UW_StandardButton_C* Button; // 0x288
	UUniformGridPanel* GridPanel; // 0x290
	UOverlay* SelectedItemInfo_Container; // 0x298
	UW_Text_C* txt_AttachmentCategory; // 0x2a0
	UW_Text_C* txt_ItemName; // 0x2a8
	FText ItemName; // 0x2b0
	FText AttachmentCategoryName; // 0x2c8
	FAttachmentCategory AttachmentCategory; // 0x2e0
	TArray<UW_AttachmentItem_C*> AttachmentItemWidgets; // 0x310
	bool bCollapsed; // 0x320
	FMulticastInlineDelegate OnButtonClicked; // 0x328
	FMulticastInlineDelegate OnButtonHovered; // 0x338
	FMulticastInlineDelegate OnButtonUnhovered; // 0x348
	FMulticastInlineDelegate OnAttachmentItemButtonClicked; // 0x358
	UWeaponAttachment* NullAttachment; // 0x368
	UW_QuartermasterMenu_C* Owner; // 0x370
	bool bChildSelected; // 0x378
	bool bInMenuBounds; // 0x379
	bool bHovered; // 0x37a
	bool bAnyKeyDown; // 0x37b
	int32_t SelectedRow; // 0x37c
	int32_t SelectedColumn; // 0x380
	int32_t NumOfColumns; // 0x384
	bool IsDesignTime; // 0x388
};

struct ASpectatorBeaconHost {
	USpectatorBeaconState* State; // 0x248
	bool bLogoutOnSessionTimeout; // 0x2b0
	float SessionTimeoutSecs; // 0x2b4
	float TravelSessionTimeoutSecs; // 0x2b8
};

struct UParticleModuleVelocityCone {
	FRawDistributionFloat Angle; // 0x38
	FRawDistributionFloat Velocity; // 0x68
	FVector Direction; // 0x98
};

struct UMagicLeapARPinSaveGame {
	FGuid PinnedID; // 0x28
	FTransform ComponentWorldTransform; // 0x40
	FTransform PinTransform; // 0x70
	bool bShouldPinActor; // 0xa0
};

struct UMovieSceneSkeletalAnimationSection {
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

struct UAnimNotify_EquipLastItem {
	EHolsterAnimationType HolsterType; // 0x38
};

struct USoundNodeGroupControl {
	TArray<int32_t> GroupSizes; // 0x48
};

struct UShellRackShellComponent {
	int32_t ShellNumber; // 0x4e0
};

struct UAREnvironmentCaptureProbeTexture {
	EARTextureType TextureType; // 0x1d0
	float Timestamp; // 0x1d4
	FGuid ExternalTextureGuid; // 0x1d8
	FVector2D Size; // 0x1e8
};

struct UANIMBP_USP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x308
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x328
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x430
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x450
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x498
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x538
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x690
	FAnimNode_Slot AnimGraphNode_Slot; // 0x750
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x798
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x7c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x7e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x868
	float Mag01Alpha; // 0x8e8
};

struct UAmbisonicsEncodingSettings {
	int32_t AmbisonicsOrder; // 0x28
};

struct UConsole {
	ULocalPlayer* ConsoleTargetPlayer; // 0x38
	UTexture2D* DefaultTexture_Black; // 0x40
	UTexture2D* DefaultTexture_White; // 0x48
	TArray<FString> HistoryBuffer; // 0x68
};

struct UW_WeaponWheel_ItemStat_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UHorizontalBox* Stat_Container; // 0x268
	UW_StandardText_C* StatName_Text; // 0x270
	UProgressBar* StatVisual_ProgressBar; // 0x278
	FText StatName; // 0x280
	float ProgressBarValue; // 0x298
	float MaxStatValue; // 0x29c
	bool bIsAnimating; // 0x2a0
	float TimeElapsed; // 0x2a4
	float FillSpeed; // 0x2a8
	float TargetPercent; // 0x2ac
	EEasingFunc EasingFunction; // 0x2b0
	FItemLookupTable ItemLookupTable; // 0x2c0
	float WheelSize; // 0x830
	float MaxWheelSize; // 0x834
	FVector2D WidgetSize; // 0x838
};

struct UBlendSpace1D {
	bool bScaleAnimation; // 0x148
};

struct UTeamStackUpActivity {
	AAICharacter* DoorChecker; // 0x1e0
	ADoor* StackUpDoor; // 0x1e8
};

struct UARFaceComponent {
	EARFaceTransformMixing TransformSetting; // 0x278
	bool bUpdateVertexNormal; // 0x279
	bool bFaceOutOfScreen; // 0x27a
	FARFaceUpdatePayload ReplicatedPayload; // 0x280
};

struct APartyBeaconHost {
	UPartyBeaconState* State; // 0x248
	bool bLogoutOnSessionTimeout; // 0x2b0
	float SessionTimeoutSecs; // 0x2b4
	float TravelSessionTimeoutSecs; // 0x2b8
};

struct AOnlineBeaconClient {
	AOnlineBeaconHostObject* BeaconOwner; // 0x250
	UNetConnection* BeaconConnection; // 0x258
	EBeaconConnectionState ConnectionState; // 0x260
};

struct UMovieSceneEnumSection {
	FMovieSceneByteChannel EnumCurve; // 0xf0
};

struct UGeometryCacheTrack_FlipbookAnimation {
	uint32_t NumMeshSamples; // 0x58
};

struct UGoggles_Widget_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UInvalidationBox* InvalidationBox_1; // 0x268
	bool bBreathIn; // 0x270
};

struct ULightmassPortalComponent {
	UBoxComponent* PreviewBox; // 0x1f8
};

struct UInputBehaviorSet {
	TArray<FBehaviorInfo> Behaviors; // 0x28
};

struct UMaterialExpressionGetMaterialAttributes {
	FMaterialAttributesInput MaterialAttributes; // 0x40
	TArray<FGuid> AttributeGetTypes; // 0x58
};

struct ARuntimeVirtualTextureVolume {
	URuntimeVirtualTextureComponent* VirtualTextureComponent; // 0x220
};

struct USteamWSRequestUGCDetailsCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct URoundEndWidget_PVP {
	UWidgetAnimation* Anim_FadeIn; // 0x278
};

struct UWorldBuildingActivity {
	UTexture2D* Icon; // 0x1c8
	bool bOneShotAnimationDataTableAnim; // 0x1d0
	FString TableMontageName; // 0x1d8
	FRotator FinalRotationOffset; // 0x1e8
	UAnimMontage* MontageStart; // 0x1f8
	UAnimMontage* MontageEnd; // 0x200
	UAnimMontage* MontageLoop; // 0x208
	UAnimSequence* Start; // 0x210
	UAnimSequence* End; // 0x218
	UAnimSequence* AbruptEnd; // 0x220
	UAnimSequence* Loop; // 0x228
	bool bKnockOutWhenStunned; // 0x230
	TArray<AActor*> IgnoredWorldBuildingActors; // 0x238
	FString StartActivitySpeech; // 0x258
	FString FinishActivitySpeech; // 0x268
	bool bShouldHolsterWeapon; // 0x282
};

struct UInventoryComponent {
	FMulticastInlineDelegate OnEquippedItemChanged; // 0xb8
	FMulticastInlineDelegate OnClientItemAddedToInventory; // 0xc8
	FMulticastInlineDelegate OnItemAddedToInventory; // 0xd8
	FMulticastInlineDelegate OnItemRemovedFromInventory; // 0xe8
	FMulticastInlineDelegate OnItemEquipped; // 0xf8
	FMulticastInlineDelegate OnItemHolstered; // 0x108
	FItemChangeRequest LatestItemChangeRequest; // 0x120
	FItemChangeRequest LastReceivedItemChangeRequest; // 0x148
	ABaseItem* QueuedItemSwap; // 0x170
	ABaseItem* LastEquippedItem; // 0x178
	ABaseWeapon* LastEquippedWeapon; // 0x180
	TArray<ABaseItem*> InventoryItems; // 0x188
	TArray<ABaseItem*> RemovedInventoryItems; // 0x198
	FSpawnedGear SpawnedGear; // 0x1a8
	FSavedLoadout LastEquippedLoadout; // 0x220
	ABaseItem* SelectedDevice; // 0x358
};

struct UMagMaskingAnimNotify {
	bool bIsFirstPerson; // 0x38
	EMaskMag MaskMag; // 0x39
	EMaskMagState MagState; // 0x3a
	bool bDummyCopyMag02; // 0x3b
};

struct UW_AnimatedIconWidget_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	UImage* BlipHalfwayLower; // 0x2e8
	UImage* BlipHalfwayUpper; // 0x2f0
	UImage* Image_40; // 0x2f8
	UImage* InteractCircle; // 0x300
};

struct UInterpTrackBoolProp {
	TArray<FBoolTrackKey> BoolTrack; // 0x70
	FName PropertyName; // 0x80
};

struct UParticleModuleSizeScaleBySpeed {
	FVector2D SpeedScale; // 0x30
	FVector2D MaxScale; // 0x38
};

struct UInterpData {
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

struct APrimary_Benelli_M4_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1190
	UShellRackShellComponent* Shell6; // 0x1198
	UShellRackShellComponent* Shell5; // 0x11a0
	UShellRackShellComponent* Shell4; // 0x11a8
	UShellRackShellComponent* Shell3; // 0x11b0
	UShellRackShellComponent* Shell2; // 0x11b8
	UShellRackShellComponent* Shell1; // 0x11c0
	UShellRackShellComponent* Shell0; // 0x11c8
	UAnimMontage* LightToggle1P; // 0x11d0
};

struct UBTService_DefaultFocus {
	char FocusPriority; // 0x98
};

struct UAISenseConfig_Sight {
	UAISense_Sight* Implementation; // 0x48
	float SightRadius; // 0x50
	float LoseSightRadius; // 0x54
	float PeripheralVisionAngleDegrees; // 0x58
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x5c
	float AutoSuccessRangeFromLastSeenLocation; // 0x60
	float PointOfViewBackwardOffset; // 0x64
	float NearClippingRadius; // 0x68
};

struct UFMODSnapshotReverb {
	FGuid AssetGuid; // 0x60
};

struct UAnimClassData {
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

struct AReadyOrNotPlayerController {
	UProgressionComponent* ProgressionComp; // 0x578
	FMulticastInlineDelegate OnPawnPossessed; // 0x588
	FMulticastInlineDelegate OnOutOfBoundsChanged; // 0x598
	float RespawnTimeLeft; // 0x5b8
	ACameraActor* SpectateCamera; // 0x5c0
	TArray<ULevelStreaming*> StreamingLevels; // 0x5c8
	FString StreamingLevel; // 0x5d8
	FString StreamingOptions; // 0x5e8
	TArray<FString> ReplicatedMapList; // 0x608
	FMulticastInlineDelegate OnMapListReplicated; // 0x618
	UHesitationBarComponent* LastLookedAtHesitationBar; // 0x628
	float VoteAntiSpamDebouncer; // 0x630
	FVoteData MyVoteData; // 0x638
	TArray<UUserWidget*> ProtectedWidgetClasses; // 0x668
	bool bCanOpenOptionsMenu; // 0x690
	TMap<FString, UUserWidget*> CreatedWidgetMap; // 0x698
	FZeuzMatchMakingServerInfo Rep_MatchmakingServerInfo; // 0x700
	FZeuzMatchMakingPartyInit Rep_MatchmakingPartyInit; // 0x778
	ASwatAutomationManager* SwatAutomationManager; // 0x828
	TMap<AActor*, float> DebugActorList; // 0x838
	FMulticastInlineDelegate OnHudWidgetsClearedComplete; // 0x898
	USkeletalMesh* TestCube; // 0x8a8
	UMaterialInterface* TestMaterial; // 0x8b0
	bool bStartedCoopAsSpectator; // 0x8c0
	ACharacter* LastKilledCharacter; // 0x8c8
	bool bIsReplaySpectator; // 0x8d8
	FMulticastInlineDelegate OnRTXDMOChanged; // 0x900
	TArray<FRChatMessage> ChatMessages; // 0x910
};

struct UDatasmithLightComponentTemplate {
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

struct USubmixEffectTapDelayPreset {
	FSubmixEffectTapDelaySettings Settings; // 0xa8
};

struct UANIMBP_SBR_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x308
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x350
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x3f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x548
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x5c8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x648
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x750
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x858
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x878
	FAnimNode_Slot AnimGraphNode_Slot; // 0x938
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x980
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x9a8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x9d0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x9f0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xaf8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xb18
	bool bIsSemi; // 0xb38
	float Mag01Alpha; // 0xb3c
	float ScopeAdjustAlpha; // 0xb40
};

struct ABaseShell {
	UStaticMeshComponent* ShellMesh; // 0x220
	bool bPlayCue; // 0x228
	USoundCue* ShellBounceCue; // 0x230
	bool bPlayFMODAudio; // 0x238
	UFMODAudioComponent* FMODAudioComp; // 0x240
	UFMODEvent* ShellBounceFMODAudio; // 0x248
	float ShellNormalizeMax; // 0x250
	float ShellNormalizeMin; // 0x254
};

struct UDynamicEntryBox {
	UUserWidget* EntryWidgetClass; // 0x1d8
};

struct ASceneCapture2D {
	USceneCaptureComponent2D* CaptureComponent2D; // 0x230
};

struct ATrapActorAttachedToDoor {
	ADoor* AttachedToDoor; // 0x2d8
	float WireYPosition; // 0x2e0
	FTransform CableTransform; // 0x2f0
	TArray<USplineMeshComponent*> CableMeshComponents; // 0x320
	float CurveStrength; // 0x330
	float MappedSplineLocation; // 0x334
	char bChunk1Destroyed : 1; // 0x338
	char bChunk2Destroyed : 1; // 0x338
	char bSubdoorChunk1Destroyed : 1; // 0x338
	char bSubdoorChunk2Destroyed : 1; // 0x338
};

struct URichTextBlock {
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

struct UEditableGameplayTagQueryExpression_NoExprMatch {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
};

struct UNavigationSystemConfig {
	FSoftClassPath NavigationSystemClass; // 0x28
	FNavAgentSelector SupportedAgentsMask; // 0x40
	FName DefaultAgentName; // 0x44
	char bIsOverriden : 1; // 0x4c
};

struct UMaterialExpressionSkyAtmosphereAerialPerspective {
	FExpressionInput WorldPosition; // 0x40
};

struct UAudioCurveSourceComponent {
	FName CurveSourceBindingName; // 0x868
	float CurveSyncOffset; // 0x870
};

struct ACTFTriggerBox {
	UTextRenderComponent* TextRender; // 0x228
};

struct ABP_BaseController_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x928
	UW_PauseMenu_C* EscapeMenuRef; // 0x930
	bool EscapeMenuOpen; // 0x938
	EFreeDrawColor CurrentFreeDrawColor; // 0x939
	bool MouseButtonDown; // 0x93a
	float Slomo; // 0x93c
	APawn* LastPawn; // 0x940
	bool bFreeCamera; // 0x948
	UUserWidget* ReplaySystemWidget; // 0x950
	APawn* PawnBeforePremissionPlanning; // 0x958
	UW_COOPScorePopUp_C* Pop-UpWidget; // 0x960
	UW_VotePopUp_C* VoteWidget; // 0x968
	UUserWidget* TabWidget; // 0x970
};

struct UInterpTrackFloatParticleParam {
	FName paramName; // 0x90
};

struct AAtmosphericFog {
	UAtmosphericFogComponent* AtmosphericFogComponent; // 0x220
};

struct UMagicLeapMeshTrackerComponent {
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

struct UBodySetup {
	FKAggregateGeom AggGeom; // 0x48
	char bAlwaysFullAnimWeight : 1; // 0xa0
	char bConsiderForBounds : 1; // 0xa0
	char bMeshCollideAll : 1; // 0xa0
	char bDoubleSidedGeometry : 1; // 0xa0
	char bGenerateNonMirroredCollision : 1; // 0xa0
	char bSharedCookedData : 1; // 0xa0
	char bGenerateMirroredCollision : 1; // 0xa0
	char bSupportUVsAndFaceRemap : 1; // 0xa0
	UPhysicalMaterial* PhysMaterial; // 0xa8
	FWalkableSlopeOverride WalkableSlopeOverride; // 0xb0
	FBodyInstance DefaultInstance; // 0x128
	FVector BuildScale3D; // 0x288
};

struct UFMODSettings {
	bool bLoadAllBanks; // 0x28
	bool bLoadAllSampleData; // 0x29
	bool bEnableLiveUpdate; // 0x2a
	bool bEnableEditorLiveUpdate; // 0x2b
	FDirectoryPath BankOutputDirectory; // 0x30
	EFMODSpeakerMode OutputFormat; // 0x40
	TArray<FFMODProjectLocale> Locales; // 0x48
	bool bVol0Virtual; // 0x58
	float Vol0VirtualLevel; // 0x5c
	int32_t SampleRate; // 0x60
	bool bMatchHardwareSampleRate; // 0x64
	int32_t RealChannelCount; // 0x68
	int32_t TotalChannelCount; // 0x6c
	int32_t DSPBufferLength; // 0x70
	int32_t DSPBufferCount; // 0x74
	int32_t FileBufferSize; // 0x78
	int32_t StudioUpdatePeriod; // 0x7c
	FString InitialOutputDriverName; // 0x80
	bool bLockAllBuses; // 0x90
	FCustomPoolSizes MemoryPoolSizes; // 0x94
	int32_t LiveUpdatePort; // 0xa8
	int32_t EditorLiveUpdatePort; // 0xac
	int32_t ReloadBanksDelay; // 0xb0
	bool bEnableMemoryTracking; // 0xb4
	TArray<FString> PluginFiles; // 0xb8
	FString ContentBrowserPrefix; // 0xc8
	FString ForcePlatformName; // 0xd8
	FString MasterBankName; // 0xe8
	FString SkipLoadBankName; // 0xf8
	FString StudioBankKey; // 0x108
	FString WavWriterPath; // 0x118
	EFMODLogging LoggingLevel; // 0x128
	FString OcclusionParameter; // 0x130
	FString AmbientVolumeParameter; // 0x140
	FString AmbientLPFParameter; // 0x150
};

struct UParticleModuleVectorFieldGlobal {
	char bOverrideGlobalVectorFieldTightness : 1; // 0x30
	float GlobalVectorFieldScale; // 0x34
	float GlobalVectorFieldTightness; // 0x38
};

struct USoundfieldEndpointSubmix {
	FName SoundfieldEndpointType; // 0x38
	UAudioEndpointSettingsBase* EndpointSettingsClass; // 0x40
	USoundfieldEndpointSettingsBase* EndpointSettings; // 0x48
	USoundfieldEncodingSettingsBase* EncodingSettingsClass; // 0x50
	USoundfieldEncodingSettingsBase* EncodingSettings; // 0x58
	TArray<USoundfieldEffectBase*> SoundfieldEffectChain; // 0x60
};

struct UAvfMediaSettings {
	bool NativeAudioOut; // 0x28
};

struct UMovieSceneCompiledDataManager {
	TMap<int32_t, FMovieSceneSequenceHierarchy> Hierarchies; // 0xd8
	TMap<int32_t, FMovieSceneEvaluationTemplate> TrackTemplates; // 0x128
	TMap<int32_t, FMovieSceneEvaluationField> TrackTemplateFields; // 0x178
	TMap<int32_t, FMovieSceneEntityComponentField> EntityComponentFields; // 0x1c8
};

struct UClothConfigNv {
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

struct AStartupSpectator_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x310
	UCameraComponent* Camera; // 0x318
};

struct UEnvQuery {
	FName QueryName; // 0x30
	TArray<UEnvQueryOption*> Options; // 0x38
};

struct UShapeComponent {
	UBodySetup* ShapeBodySetup; // 0x450
	UNavAreaBase* AreaClass; // 0x458
	FColor ShapeColor; // 0x460
	char bDrawOnlyIfSelected : 1; // 0x464
	char bShouldCollideWhenPlacing : 1; // 0x464
	char bDynamicObstacle : 1; // 0x464
};

struct ULocationServicesImpl {
	FMulticastInlineDelegate OnLocationChanged; // 0x28
};

struct AMusicSequencerUnreal {
	UAudioComponent* AudioPlayer; // 0x248
	EMusicState CurrentState; // 0x250
	EMusicState NextState; // 0x251
	EMusicState NextScriptedState; // 0x252
};

struct UMapActorComponent {
	char bCondition : 1; // 0x1f8
	char bEnabled : 1; // 0x1f8
	UMapActorWidget* MapActorWidgetClass; // 0x200
	FText IconText; // 0x208
	FLinearColor IconTextColor; // 0x220
	FSlateBrush IconBrush; // 0x230
	FLinearColor IconColor; // 0x2b8
	char bUseActorRotation : 1; // 0x2c8
	float RotationOffset; // 0x2cc
	bool bAddedToMap; // 0x2d0
	UMapActorIconWidget* MapIconWidget; // 0x2d8
};

struct UNiagaraComponentPool {
	TMap<UNiagaraSystem*, FNCPool> WorldParticleSystemPools; // 0x28
};

struct URoNMoveStyleComponent {
	UDataTable* MoveStyleDatabase; // 0xb0
	FString DefaultMoveStyleName; // 0xb8
	FString DefaulGaitName; // 0xc8
	FRoNMovementStyle ActiveMoveStyle; // 0xd8
	int32_t ActiveGaitIndex; // 0x160
	FString ActiveGaitName; // 0x168
	bool bIsStrafing; // 0x178
};

struct USkeletalMesh {
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
	char bSupportRayTracing : 1; // 0x188
	TArray<UMorphTarget*> MorphTargets; // 0x190
	UAnimInstance* PostProcessAnimBlueprint; // 0x318
	TArray<UClothingAssetBase*> MeshClothingAssets; // 0x320
	FSkeletalMeshSamplingInfo SamplingInfo; // 0x330
	TArray<UAssetUserData*> AssetUserData; // 0x360
	TArray<USkeletalMeshSocket*> Sockets; // 0x370
	TArray<FSkinWeightProfileInfo> SkinWeightProfiles; // 0x390
};

struct APlayerState {
	float Score; // 0x220
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

struct ULiveLinkSourceSettings {
	ELiveLinkSourceMode Mode; // 0x28
	FLiveLinkSourceBufferManagementSettings BufferSettings; // 0x30
	FString ConnectionString; // 0x88
	ULiveLinkSourceFactory* Factory; // 0x98
};

struct AVolumetricCloud {
	UVolumetricCloudComponent* VolumetricCloudComponent; // 0x220
};

struct UPhysicsSettingsCore {
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

struct UW_ItemSelection_Item_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278
	UWidgetAnimation* Anim_Focus; // 0x280
	UWidgetAnimation* Anim_Select; // 0x288
	UWidgetAnimation* Anim_FadeOut; // 0x290
	UBackgroundBlur* BG_Blur; // 0x298
	UImage* BG_Image; // 0x2a0
	UCanvasPanel* CanvasPanel; // 0x2a8
	UImage* Icon_Image; // 0x2b0
	UTextBlock* Icon_Text; // 0x2b8
	UWidgetSwitcher* IconStyle_Switcher; // 0x2c0
	UImage* Selected_Image; // 0x2c8
	FSlateBrush DefaultIcon; // 0x2d0
	FText ItemName; // 0x358
	FSlateColor BackgroundColor; // 0x370
	FSlateColor IconColor; // 0x398
	bool bUseNameInPlaceOfIcon; // 0x3c0
	bool bIsPirated; // 0x3c1
	FSlateColor SelectedColor; // 0x3c8
	FMulticastInlineDelegate ED_OnAnimFadeOutFinished; // 0x3f0
	FSlateColor UnselectedColor; // 0x400
	bool InDesignTime; // 0x428
	FMulticastInlineDelegate ED_OnAnimSelectFinished; // 0x430
};

struct UDestroySessionCallbackProxyAdvanced {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct URestrictedGameplayTagsList {
	FString ConfigFileName; // 0x28
	TArray<FRestrictedGameplayTagTableRow> RestrictedGameplayTagList; // 0x38
};

struct ULeaderboardFlushCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UW_Briefing_Dossier_Bio_C {
	UImage* Image_36; // 0x260
	UW_Text_C* lbl_Bio; // 0x268
	URichTextBlock* rtxt_Bio; // 0x270
};

struct UNiagaraDataInterfaceMeshRendererInfo {
	UNiagaraMeshRendererProperties* MeshRenderer; // 0x38
};

struct UGenlockedFixedRateCustomTimeStep {
	FFrameRate FrameRate; // 0x28
};

struct UANIMBP_CSGas_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8
};

struct UGizmoTransformProxyTransformSource {
	UTransformProxy* Proxy; // 0x48
};

struct ABP_PoliceLights_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UStaticMeshComponent* Cube; // 0x228
	UStaticMeshComponent* Cube2; // 0x230
	UStaticMeshComponent* Cube1; // 0x238
	USpotLightComponent* SpotLight1; // 0x240
	USpotLightComponent* SpotLight; // 0x248
	float EmissiveIntensity; // 0x250
	float EmissiveSpeed; // 0x254
	FLinearColor EmissiveColor; // 0x258
	float SpotlightsSpeed; // 0x268
};

struct UW_StandardButton_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Disabled_Normal; // 0x268
	UImage* Disabled_PremissionPlanning_LoadoutCategory; // 0x270
	UImage* Disabled_PremissionPlanning_LoadoutClass; // 0x278
	UImage* Disabled_PremissionPlanning_LoadoutItem; // 0x280
	UImage* Disabled_PremissionPlanning_LoadoutItemPreset; // 0x288
	UImage* Disabled_Quartermaster; // 0x290
	UImage* Disabled_ReadyUp; // 0x298
	UImage* Disabled_Red; // 0x2a0
	UImage* Disabled_Subcategory; // 0x2a8
	UImage* Disabled_TabletTabButton; // 0x2b0
	UImage* Down_Normal; // 0x2b8
	UImage* Down_PremisisonPlanning_LoadoutCategory; // 0x2c0
	UImage* Down_PremisisonPlanning_LoadoutClass; // 0x2c8
	UImage* Down_PremisisonPlanning_LoadoutItem; // 0x2d0
	UImage* Down_PremisisonPlanning_LoadoutItemPreset; // 0x2d8
	UImage* Down_Quartermaster; // 0x2e0
	UImage* Down_ReadyUp; // 0x2e8
	UImage* Down_Red; // 0x2f0
	UImage* Down_Subcategory; // 0x2f8
	UImage* Down_TabletTabButton; // 0x300
	UImage* Highlight_Normal; // 0x308
	UImage* Highlight_PremissionPlanning_LoadoutCategory; // 0x310
	UImage* Highlight_PremissionPlanning_LoadoutClass; // 0x318
	UImage* Highlight_PremissionPlanning_LoadoutItem; // 0x320
	UImage* Highlight_PremissionPlanning_LoadoutItemPreset; // 0x328
	UImage* Highlight_Quartermaster; // 0x330
	UImage* Highlight_ReadyUp; // 0x338
	UImage* Highlight_Red; // 0x340
	UImage* Highlight_Subcategory; // 0x348
	UImage* Highlight_TabletTabButton; // 0x350
	UOverlay* NormalStyle; // 0x358
	UOverlay* PreMissionPlanningStyle_LoadoutCategory; // 0x360
	UOverlay* PreMissionPlanningStyle_LoadoutClass; // 0x368
	UOverlay* PreMissionPlanningStyle_LoadoutItem; // 0x370
	UOverlay* PreMissionPlanningStyle_LoadoutItemPreset; // 0x378
	UOverlay* QuartermasterStyle; // 0x380
	UOverlay* ReadyUpStyle; // 0x388
	UOverlay* RedStyle; // 0x390
	UImage* Selected_Normal; // 0x398
	UImage* Selected_PremissionPlanning_LoadoutCategory; // 0x3a0
	UImage* Selected_PremissionPlanning_LoadoutClass; // 0x3a8
	UImage* Selected_PremissionPlanning_LoadoutItem; // 0x3b0
	UImage* Selected_PremissionPlanning_LoadoutItemPreset; // 0x3b8
	UImage* Selected_Quartermaster; // 0x3c0
	UImage* Selected_ReadyUp; // 0x3c8
	UImage* Selected_Red; // 0x3d0
	UImage* Selected_Subcategory; // 0x3d8
	UImage* Selected_TabletTabButton; // 0x3e0
	UImage* StandardColor_Normal; // 0x3e8
	UImage* StandardColor_PremissionPlanning_LoadoutCategory; // 0x3f0
	UImage* StandardColor_PremissionPlanning_LoadoutClass; // 0x3f8
	UImage* StandardColor_PremissionPlanning_LoadoutItem; // 0x400
	UImage* StandardColor_PremissionPlanning_LoadoutItemPreset; // 0x408
	UImage* StandardColor_Quartermaster; // 0x410
	UImage* StandardColor_ReadyUp; // 0x418
	UImage* StandardColor_Red; // 0x420
	UImage* StandardColor_Subcategory; // 0x428
	UImage* StandardColor_TabletTabButton; // 0x430
	UWidgetSwitcher* StyleSwitcher; // 0x438
	UVerticalBox* SubcategoryStyle; // 0x440
	UOverlay* TabletTabButtonStyle; // 0x448
	UTextBlock* Text; // 0x450
	UScaleBox* TextBoxContainer; // 0x458
	UButton* TheButton; // 0x460
	UImage* ThinRedLine; // 0x468
	FText ButtonText; // 0x470
	ETextJustify TextJustification; // 0x488
	int32_t TextSize; // 0x48c
	UTextBlock* DescriptionWidget; // 0x490
	FText DescriptionText; // 0x498
	UFont* Font; // 0x4b0
	FMargin TextPadding; // 0x4b8
	FMulticastInlineDelegate OnClicked; // 0x4c8
	FMulticastInlineDelegate OnUnhovered; // 0x4d8
	FMulticastInlineDelegate OnHovered; // 0x4e8
	FMulticastInlineDelegate OnReleased; // 0x4f8
	FMulticastInlineDelegate OnPressed; // 0x508
	FName Typeface; // 0x518
	bool bSelected; // 0x520
	int32_t ButtonStyleOption; // 0x524
	StandardButtonStyles DisplayStyle; // 0x528
	bool ForceUppercaseButtonText; // 0x529
	bool ForceUppercaseDescription; // 0x52a
	FSlateColor TextColor; // 0x530
	UFMODEvent* HoveredSound; // 0x558
	UFMODEvent* ClickedSound; // 0x560
	int32_t ExtraInt; // 0x568
};

struct ULocalLightComponent {
	ELightUnits IntensityUnits; // 0x328
	float Radius; // 0x32c
	float AttenuationRadius; // 0x330
	FLightmassPointLightSettings LightmassSettings; // 0x334
};

struct UGameplayTaskResource {
	int32_t ManualResourceID; // 0x28
	int8_t AutoResourceID; // 0x2c
	char bManuallySetID : 1; // 0x30
};

struct UEndMatchCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UGizmoRectangleComponent {
	FVector DirectionX; // 0x470
	FVector DirectionY; // 0x47c
	float OffsetX; // 0x488
	float OffsetY; // 0x48c
	float LengthX; // 0x490
	float LengthY; // 0x494
	float Thickness; // 0x498
	char SegmentFlags; // 0x49c
};

struct UInteractiveToolPropertySet {
	UInteractiveToolPropertySet* CachedProperties; // 0x38
	bool bIsPropertySetEnabled; // 0x40
};

struct UANIMBP_M16A4_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x308
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x350
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x470
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x4f0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x5f8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x618
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x770
	FAnimNode_Slot AnimGraphNode_Slot; // 0x830
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x878
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x8a0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x8c8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x9d0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x9f0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xaf8
	float Mag01Alpha; // 0xc00
	float CarrierHandleAlpha; // 0xc04
	bool bIsSemi; // 0xc08
};

struct AEmitter {
	UParticleSystemComponent* ParticleSystemComponent; // 0x220
	char bDestroyOnSystemFinish : 1; // 0x228
	char bPostUpdateTickGroup : 1; // 0x228
	char bCurrentlyActive : 1; // 0x228
	FMulticastInlineDelegate OnParticleSpawn; // 0x230
	FMulticastInlineDelegate OnParticleBurst; // 0x240
	FMulticastInlineDelegate OnParticleDeath; // 0x250
	FMulticastInlineDelegate OnParticleCollide; // 0x260
};

struct UW_LoadoutCustomizationMenu_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278
	UWidgetAnimation* Anim_LoadoutItemInfo_SlideOut; // 0x280
	UWidgetAnimation* Anim_LoadoutItemInfo_SlideIn; // 0x288
	UWidgetAnimation* Anim_Quartermaster_ButtonPressed; // 0x290
	UTextBlock* CurrentMenuDirectory_Text; // 0x298
	UW_StandardCombobox_New_C* DefaultFireMode_ComboBox; // 0x2a0
	UHorizontalBox* EquipTeamMate_HBox; // 0x2a8
	UW_StandardButton_C* GoToQuartermaster_Button; // 0x2b0
	UImage* ItemIcon_Image; // 0x2b8
	UScaleBox* ItemIcon_ScaleBox; // 0x2c0
	UW_Text_C* lbl_GoToQuartermaster; // 0x2c8
	UScrollBox* Loadout_ScrollBox; // 0x2d0
	UVerticalBox* LoadoutCategories_Container; // 0x2d8
	UVerticalBox* LoadoutItemInfo_Container; // 0x2e0
	UVerticalBox* LoadoutItemInfoMenu; // 0x2e8
	UW_LoadoutItem_Presets_C* LoadoutPresets; // 0x2f0
	USizeBox* Quatermaster_Box; // 0x2f8
	UW_Text_C* txt_ItemDescription; // 0x300
	UW_Text_C* txt_ItemName; // 0x308
	UW_EquipTeamMateCategory_C* W_EquipTeamMateCategory; // 0x310
	UW_EquipTeamMateCategory_C* W_EquipTeamMateCategory_2; // 0x318
	UW_EquipTeamMateCategory_C* W_EquipTeamMateCategory_3; // 0x320
	UW_EquipTeamMateCategory_C* W_EquipTeamMateCategory_4; // 0x328
	UW_EquipTeamMateCategory_C* W_EquipTeamMateCategory_5; // 0x330
	UW_HotkeyBar_Entry_C* W_HotkeyBar_Entry; // 0x338
	FText LoadoutSlotName; // 0x340
	int32_t SelectedRow; // 0x358
	bool bLoadoutCategorySelected; // 0x35c
	bool bLoadoutItemSelected; // 0x35d
	bool bAnyKeyDown; // 0x35e
	bool bInPresetsMenu; // 0x35f
	UW_PreMission_C* Owner; // 0x360
	UW_LoadoutCategory_C* LastSelectedLoadoutCategory; // 0x368
	UW_LoadoutItem_C* LastSelectedLoadoutItem; // 0x370
	UW_LoadoutItem_Preset_C* LastSelectedLoadoutItemPreset; // 0x378
	ABaseItem* LastSelectedLoadoutItemClass; // 0x380
};

struct UBP_Comp_ReverbTrace_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	float newSize; // 0xb8
	float oldSize; // 0xbc
	AActor* SelfActor; // 0xc0
	TArray<AActor*> actorsToIgnoreOnTrace; // 0xc8
	float TraceLength; // 0xd8
	float traceLengthNeg; // 0xdc
	float rightSize; // 0xe0
	float leftSize; // 0xe4
	float frontSize; // 0xe8
	float backSize; // 0xec
	FFMODEventInstance leftReverbInstance; // 0xf0
	FFMODEventInstance rightReverbInstance; // 0xf8
	UPhysicalMaterial* rightPhysMat; // 0x100
	UPhysicalMaterial* leftPhysMat; // 0x108
	UPhysicalMaterial* frontPhysMat; // 0x110
	UPhysicalMaterial* backPhysMat; // 0x118
	USkeletalMeshComponent* reverbHeadLocation; // 0x120
	float upSize; // 0x128
	FInterpCurveFloat lowGainCurve; // 0x130
	float roomType; // 0x148
	int32_t traceInt; // 0x14c
	TArray<ABP_AudioPropagater_C*> propagaters; // 0x150
	float lowestFloat; // 0x160
	ABP_AudioPropagater_C* closestPropagater; // 0x168
	float Delta; // 0x170
	int32_t traceRate; // 0x174
	bool LocalPlayer; // 0x178
	TArray<UFMODEvent*> reverbTypes; // 0x180
	UFMODEvent* currentReverb; // 0x190
	FFMODEventInstance reverbInstance; // 0x198
};

struct ACharacterCustomizationPortal {
	AReadyOrNotCharacter* CustomizationCharacter; // 0x228
	UInteractableComponent* InteractableComponent; // 0x230
	UBillboardComponent* BillboardComponent; // 0x238
	UArrowComponent* CharacterSpawnPoint; // 0x240
	TArray<UStaticMeshComponent*> CompsToOutline; // 0x258
	TArray<ULightComponent*> LightsToEnable; // 0x268
	FName LightActorsOfTag; // 0x278
};

struct AGlassActor {
	UDestructibleComponent* DestructibleWindow; // 0x220
	TArray<UMaterialInstance*> RandomGlassMaterial; // 0x228
	TArray<UMaterialInstance*> RandomShatteredGlassMaterial; // 0x238
	FMulticastInlineDelegate OnApplyDamageToWindow; // 0x248
};

struct UInAppPurchaseRestoreCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct USceneCaptureComponent {
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

struct UBTTask_MoveDirectlyToward {
	char bDisablePathUpdateOnGoalLocationChange : 1; // 0xb0
	char bProjectVectorGoalToNavigation : 1; // 0xb0
	char bUpdatedDeprecatedProperties : 1; // 0xb0
};

struct ABeanbagImpactEffects_C {
	USceneComponent* DefaultSceneRoot; // 0xcb0
};

struct UTextureRenderTargetCube {
	int32_t SizeX; // 0x180
	FLinearColor ClearColor; // 0x184
	EPixelFormat OverrideFormat; // 0x194
	char bHDR : 1; // 0x195
	char bForceLinearGamma : 1; // 0x195
};

struct UW_PVP_RoundEnd_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280
	UVerticalBox* Master_Container; // 0x288
	UVerticalBox* MLO_Container; // 0x290
	UTextBlock* MLO_Label_Text; // 0x298
	UTextBlock* MLO_Score_Text; // 0x2a0
	UImage* PVP_Ribbon_TeamColor; // 0x2a8
	UTextBlock* RoundStatus_Text; // 0x2b0
	UTextBlock* RoundTagline_Text; // 0x2b8
	UHorizontalBox* ScoreInfo_Container; // 0x2c0
	UVerticalBox* SWAT_Container; // 0x2c8
	UTextBlock* SWAT_Label_Text; // 0x2d0
	UTextBlock* SWAT_Score_Text; // 0x2d8
};

struct ULogoutCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct USteamAudioSettings {
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

struct UVRNotificationsComponent {
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

struct AOnlineBeaconHostObject {
	FString BeaconTypeName; // 0x220
	AOnlineBeaconClient* ClientBeaconActorClass; // 0x230
	TArray<AOnlineBeaconClient*> ClientActors; // 0x238
};

struct UMovieSceneBoolSection {
	bool DefaultValue; // 0xe8
	FMovieSceneBoolChannel BoolCurve; // 0xf0
};

struct ALevelVariantSetsActor {
	FSoftObjectPath LevelVariantSets; // 0x220
	TMap<UObject*, ULevelVariantSetsFunctionDirector*> DirectorInstances; // 0x238
};

struct UAnimBoneCompressionCodec {
	FString Description; // 0x28
};

struct AGM_SearchAndDestroy_C {
	USceneComponent* DefaultSceneRoot; // 0x6e8
};

struct ACharacter {
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

struct UFMODEventParameterTrack {
	TArray<UMovieSceneSection*> Sections; // 0x98
};

struct UW_Objectives_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UVerticalBox* PopulateBox; // 0x268
	FMargin ObjectiveMargins; // 0x270
	TArray<AObjective*> PreviewObjectives; // 0x280
};

struct UMaterialParameterCollectionInstance {
	UMaterialParameterCollection* Collection; // 0x30
};

struct UCheckBoxWidgetStyle {
	FCheckBoxStyle CheckBoxStyle; // 0x30
};

struct ABasePlayer_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x20c0
	USkeletalMeshComponent* Handcuffs_Arrested; // 0x20c8
	float Current Muscle Strength; // 0x20d0
	float Muscle Strength; // 0x20d4
	float Muscle Strength DEAD; // 0x20d8
	bool In Air Muscle Strength Switch; // 0x20dc
	bool In Air Switch Delay; // 0x20dd
	bool bRadialActivated; // 0x20de
	bool WeaponAllowed; // 0x20df
	UObject* RadialWidget; // 0x20e0
	bool bSuppressionDebug; // 0x20e8
	bool bRadialActions; // 0x20e9
	UAnimMontage* VaultStepAnim; // 0x20f0
	UAnimMontage* VaultUpAnim; // 0x20f8
	UAnimMontage* VaultOverAnim; // 0x2100
	UAnimMontage* CurrentVaultMontage; // 0x2108
	float DeathBlendTime; // 0x2110
	float CurrentSuppressionShakeAmount; // 0x2114
	float SuppressionShakeDecreaseRate; // 0x2118
	float ArmBreakShakeAmount; // 0x211c
	float SuppressionShakeScale; // 0x2120
	float DefaultIdleShake; // 0x2124
	float SprintShakeAmount; // 0x2128
	float SprintShakeDecreaseRate; // 0x212c
	float CurrentSprintShakeAmount; // 0x2130
	UW_WeaponWheel_C* WeaponWheel; // 0x2138
	UW_ItemSelectionMenu_C* ItemSelectionMenu; // 0x2140
	ABP_TabletCapture_C* TabletCaptureActor; // 0x2148
};

struct APrimary_MPX_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1130
};

struct ULevelSequence {
	UMovieScene* MovieScene; // 0x68
	FLevelSequenceObjectReferenceMap ObjectReferences; // 0x70
	FLevelSequenceBindingReferences BindingReferences; // 0xc0
	TMap<FString, FLevelSequenceObject> PossessedObjects; // 0x160
	UObject* DirectorClass; // 0x1b0
	TArray<UAssetUserData*> AssetUserData; // 0x1b8
};

struct AGM_Firefight_C {
	USceneComponent* DefaultSceneRoot; // 0x730
};

struct UMaterialExpressionCustom {
	FString Code; // 0x40
	ECustomMaterialOutputType OutputType; // 0x50
	FString Description; // 0x58
	TArray<FCustomInput> Inputs; // 0x68
	TArray<FCustomOutput> AdditionalOutputs; // 0x78
	TArray<FCustomDefine> AdditionalDefines; // 0x88
	TArray<FString> IncludeFilePaths; // 0x98
};

struct UParticleModuleLocationEmitterDirect {
	FName EmitterName; // 0x30
};

struct UParticleModuleSpawnBase {
	char bProcessSpawnRate : 1; // 0x30
	char bProcessBurstList : 1; // 0x30
};

struct UMovieSceneHookSection {
	char bRequiresRangedHook : 1; // 0xf8
	char bRequiresTriggerHooks : 1; // 0xf8
};

struct UW_TeamView_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	USizeBox* CloseView_Progress_Box; // 0x268
	UImage* CloseView_ProgressCircle_Image; // 0x270
	UTextBlock* CloseView_Text; // 0x278
	UInvalidationBox* InvalidationBox_1; // 0x280
	UTextBlock* SwitchView_Text; // 0x288
	UImage* TeamIndicator_Image; // 0x290
	UImage* TeamIndicator_Image_Style2; // 0x298
	UTextBlock* TeamView_CurrentIndex_Text; // 0x2a0
	UTextBlock* TeamView_CurrentIndex_Text_3; // 0x2a8
	UVerticalBox* TeamView_Data; // 0x2b0
	UImage* TeamView_Image; // 0x2b8
	UTextBlock* TeamView_PlayerHealth_Status_Text; // 0x2c0
	UTextBlock* TeamView_PlayerName_Text; // 0x2c8
	UTextBlock* TeamView_PlayerStatus_Arrested_Text; // 0x2d0
	UTextBlock* TeamView_PlayerStatus_Stunned_Text; // 0x2d8
	APlayerCharacter* PlayerCharacter; // 0x2e0
	FString ViewPlayerName; // 0x2e8
	int32_t TotalTeamViewPlayers; // 0x2f8
	FText CloseView_KeyName; // 0x300
	UMaterialInstanceDynamic* MID_ProgressCircle; // 0x318
};

struct AAccuracyVolume {
	float AccuracyNerfPercentage; // 0x258
	char bAffectsSWAT : 1; // 0x25c
	char bAffectsSuspects : 1; // 0x25c
};

struct UInteractiveTool {
	UInputBehaviorSet* InputBehaviors; // 0x48
	TArray<UObject*> ToolPropertyObjects; // 0x50
};

struct APrimary_W870LL_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1190
	UPointLightComponent* PointLight; // 0x1198
	USpotLightComponent* PointLight1; // 0x11a0
	UAnimMontage* LightToggle1P; // 0x11a8
};

struct UBTDecorator_Blackboard {
	int32_t IntValue; // 0x90
	float FloatValue; // 0x94
	FString StringValue; // 0x98
	FString CachedDescription; // 0xa8
	char OperationType; // 0xb8
	EBTBlackboardRestart NotifyObserver; // 0xb9
};

struct UW_Briefing_Dossier_C {
	UW_Briefing_Dossier_Entry_C* Age; // 0x260
	UW_Briefing_Dossier_Entry_C* Aliases; // 0x268
	UW_Briefing_Dossier_Entry_C* Build; // 0x270
	UW_Briefing_Dossier_Entry_C* DOB; // 0x278
	UW_Briefing_Dossier_Entry_C* Height; // 0x280
	UImage* Image_36; // 0x288
	UImage* Image_122; // 0x290
	UImage* img_Photo; // 0x298
	UW_Text_C* lbl_FileNumber; // 0x2a0
	UW_Text_C* lbl_Name; // 0x2a8
	UW_Briefing_Dossier_Entry_C* Sex; // 0x2b0
	UW_Text_C* txt_FileNumber; // 0x2b8
	UW_Text_C* txt_Name; // 0x2c0
	UW_Briefing_Dossier_Bio_C* W_Briefing_Dosier_Bio; // 0x2c8
	UW_Briefing_Dossier_Rapsheet_C* W_Briefing_Dosier_Rapsheet; // 0x2d0
	UW_Briefing_Dossier_Entry_C* Weight; // 0x2d8
};

struct UW_MapCell_C {
	UImage* Image; // 0x260
	FText MapCellName; // 0x268
};

struct UAISense {
	float DefaultExpirationAge; // 0x28
	EAISenseNotifyType NotifyType; // 0x2c
	char bWantsNewPawnNotification : 1; // 0x30
	char bAutoRegisterAllPawnsAsSources : 1; // 0x30
	UAIPerceptionSystem* PerceptionSystemInstance; // 0x38
};

struct UAnimSharingAdditiveInstance {
	TWeakObjectPtr<USkeletalMeshComponent> BaseComponent; // 0x2b8
	TWeakObjectPtr<UAnimSequence> AdditiveAnimation; // 0x2c0
	float Alpha; // 0x2c8
	bool bStateBool; // 0x2cc
};

struct UNiagaraDataInterfaceCurve {
	FRichCurve Curve; // 0x70
};

struct AHelmet_None_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1550
	APlayerState* PlayerState; // 0x1558
};

struct UAsyncTask_LoadXRDeviceVisComponent {
	FMulticastInlineDelegate OnModelLoaded; // 0x30
	FMulticastInlineDelegate OnLoadFailure; // 0x40
	UPrimitiveComponent* SpawnedComponent; // 0x58
};

struct UMovieScene3DConstraintSection {
	FGuid ConstraintId; // 0xe8
	FMovieSceneObjectBindingID ConstraintBindingID; // 0xf8
};

struct UInterpTrackDirector {
	TArray<FDirectorTrackCut> CutTrack; // 0x70
	char bSimulateCameraCutsOnClients : 1; // 0x80
};

struct UW_Hotkeys_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c8
};

struct UNiagaraDataInterfaceArrayBool {
	TArray<bool> BoolData; // 0x50
};

struct UDistributionVectorConstantCurve {
	FInterpCurveVector ConstantCurve; // 0x38
	char bLockAxes : 1; // 0x50
	EDistributionVectorLockFlags LockedAxes; // 0x54
};

struct UMovieSceneActorReferenceSection {
	FMovieSceneActorReferenceData ActorReferenceData; // 0xe8
	FIntegralCurve ActorGuidIndexCurve; // 0x198
	TArray<FString> ActorGuidStrings; // 0x218
};

struct AEvidenceExtractionDevice {
	UStaticMeshComponent* StaticMeshComponent; // 0x228
	UInteractableComponent* InteractableComponent; // 0x230
	float EvidenceExtractionTime; // 0x238
};

struct ATemplateSequenceActor {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x230
	UTemplateSequencePlayer* SequencePlayer; // 0x248
	FSoftObjectPath TemplateSequence; // 0x250
	FTemplateSequenceBindingOverrideData BindingOverride; // 0x268
};

struct UFMODAudioPropagationComponent {
	FVector AudioPlayLocation; // 0x390
	float volumeToSet; // 0x39c
	float silentDistance; // 0x3a0
	float OcclusionAmount; // 0x3a4
	float tickRate; // 0x3a8
	float minDistance; // 0x3ac
	bool bPlayPropagation; // 0x3b0
};

struct APawn {
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

struct UNiagaraPreviewAxis_InterpParamVector4 {
	FVector4 Min; // 0x40
	FVector4 Max; // 0x50
};

struct ARecastNavMesh {
	char bDrawTriangleEdges : 1; // 0x428
	char bDrawPolyEdges : 1; // 0x428
	char bDrawFilledPolys : 1; // 0x428
	char bDrawNavMeshEdges : 1; // 0x428
	char bDrawTileBounds : 1; // 0x428
	char bDrawPathCollidingGeometry : 1; // 0x428
	char bDrawTileLabels : 1; // 0x428
	char bDrawPolygonLabels : 1; // 0x428
	char bDrawDefaultPolygonCost : 1; // 0x429
	char bDrawPolygonFlags : 1; // 0x429
	char bDrawLabelsOnPathNodes : 1; // 0x429
	char bDrawNavLinks : 1; // 0x429
	char bDrawFailedNavLinks : 1; // 0x429
	char bDrawClusters : 1; // 0x429
	char bDrawOctree : 1; // 0x429
	char bDrawOctreeDetails : 1; // 0x429
	char bDrawMarkedForbiddenPolys : 1; // 0x42a
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

struct UMaterialShaderQualitySettings {
	TMap<FName, UShaderPlatformQualitySettings*> ForwardSettingMap; // 0x28
};

struct UMaterialExpressionConstant {
	float R; // 0x40
};

struct UInterpTrackInstFloatMaterialParam {
	TArray<UMaterialInstanceDynamic*> MaterialInstances; // 0x28
	TArray<float> ResetFloats; // 0x38
	TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x48
	UInterpTrackFloatMaterialParam* InstancedTrack; // 0x58
};

struct UNiagaraSimulationStageBase {
	UNiagaraScript* Script; // 0x28
	FName SimulationStageName; // 0x30
	char bEnabled : 1; // 0x38
};

struct ASkeletalMeshActor {
	char bShouldDoAnimNotifies : 1; // 0x228
	char bWakeOnLevelStart : 1; // 0x228
	USkeletalMeshComponent* SkeletalMeshComponent; // 0x230
	USkeletalMesh* ReplicatedMesh; // 0x238
	UPhysicsAsset* ReplicatedPhysAsset; // 0x240
	UMaterialInterface* ReplicatedMaterial0; // 0x248
	UMaterialInterface* ReplicatedMaterial1; // 0x250
};

struct UMaterialExpressionBreakMaterialAttributes {
	FMaterialAttributesInput MaterialAttributes; // 0x40
};

struct UDatasmithCineCameraComponentTemplate {
	FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings; // 0x30
	FDatasmithCameraLensSettingsTemplate LensSettings; // 0x38
	FDatasmithCameraFocusSettingsTemplate FocusSettings; // 0x3c
	float CurrentFocalLength; // 0x44
	float CurrentAperture; // 0x48
	FDatasmithPostProcessSettingsTemplate PostProcessSettings; // 0x50
};

struct UAIPerceptionSystem {
	TArray<UAISense*> Senses; // 0x88
	float PerceptionAgingRate; // 0x98
};

struct UTexture2DArray {
	TextureAddress AddressX; // 0x1d0
	TextureAddress AddressY; // 0x1d1
	TextureAddress AddressZ; // 0x1d2
};

struct ULandscapeComponent {
	int32_t SectionBaseX; // 0x450
	int32_t SectionBaseY; // 0x454
	int32_t ComponentSizeQuads; // 0x458
	int32_t SubsectionSizeQuads; // 0x45c
	int32_t NumSubsections; // 0x460
	UMaterialInterface* OverrideMaterial; // 0x468
	UMaterialInterface* OverrideHoleMaterial; // 0x470
	TArray<FLandscapeComponentMaterialOverride> OverrideMaterials; // 0x478
	TArray<UMaterialInstanceConstant*> MaterialInstances; // 0x488
	TArray<UMaterialInstanceDynamic*> MaterialInstancesDynamic; // 0x498
	TArray<int8_t> LODIndexToMaterialIndex; // 0x4a8
	TArray<int8_t> MaterialIndexToDisabledTessellationMaterial; // 0x4b8
	UTexture2D* XYOffsetmapTexture; // 0x4c8
	FVector4 WeightmapScaleBias; // 0x4d0
	float WeightmapSubsectionOffset; // 0x4e0
	FVector4 HeightmapScaleBias; // 0x4f0
	FBox CachedLocalBox; // 0x500
	LazyObjectProperty CollisionComponent; // 0x51c
	UTexture2D* HeightmapTexture; // 0x538
	TArray<FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x540
	TArray<UTexture2D*> WeightmapTextures; // 0x550
	ULandscapeLODStreamingProxy* LODStreamingProxy; // 0x560
	FGuid MapBuildDataId; // 0x568
	TArray<FGuid> IrrelevantLights; // 0x578
	int32_t CollisionMipLevel; // 0x588
	int32_t SimpleCollisionMipLevel; // 0x58c
	float NegativeZBoundsExtension; // 0x590
	float PositiveZBoundsExtension; // 0x594
	float StaticLightingResolution; // 0x598
	int32_t ForcedLOD; // 0x59c
	int32_t LODBias; // 0x5a0
	FGuid StateId; // 0x5a4
	FGuid BakedTextureMaterialGuid; // 0x5b4
	UTexture2D* GIBakedBaseColorTexture; // 0x5c8
	char MobileBlendableLayerMask; // 0x5d0
	UMaterialInterface* MobileMaterialInterface; // 0x5d8
	TArray<UMaterialInterface*> MobileMaterialInterfaces; // 0x5e0
	TArray<UTexture2D*> MobileWeightmapTextures; // 0x5f0
};

struct APatrolPoint {
	USceneComponent* SceneRoot; // 0x220
};

struct AIncriminationClueSpawnPoint {
	AIncriminationClue* IncriminationClueClass; // 0x238
	AActor* ClueFlareClass; // 0x240
	char ClueNumber; // 0x248
	float ShowObjectiveMarkerIn; // 0x24c
	FText ClueName; // 0x250
	FText ClueFoundMessage; // 0x268
};

struct UGizmoWorldAxisSource {
	FVector Origin; // 0x30
	int32_t AxisIndex; // 0x3c
};

struct UBTDecorator_IsBBEntryOfClass {
	UObject* TestClass; // 0x90
};

struct UMovieScene3DConstraintTrack {
	TArray<UMovieSceneSection*> ConstraintSections; // 0x90
};

struct UParticleModuleSizeScale {
	FRawDistributionVector SizeScale; // 0x30
	char EnableX : 1; // 0x78
	char EnableY : 1; // 0x78
	char EnableZ : 1; // 0x78
};

struct UWrapBox {
	FVector2D InnerSlotPadding; // 0x120
	float WrapWidth; // 0x128
	float WrapSize; // 0x12c
	bool bExplicitWrapWidth; // 0x130
	bool bExplicitWrapSize; // 0x131
	EOrientation Orientation; // 0x132
};

struct APaperSpriteActor {
	UPaperSpriteComponent* RenderComponent; // 0x220
};

struct UGameNetworkManagerSettings {
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

struct UANIMBP_Scar_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x308
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x350
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x470
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x4f0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x5f8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x700
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x808
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x828
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x848
	FAnimNode_Slot AnimGraphNode_Slot; // 0x908
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x950
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xaa8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xad0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xaf8
	float Mag01Alpha; // 0xc00
	bool bIsSemi; // 0xc04
	float ScopeAdjustAlpha; // 0xc08
};

struct UMaterialExpressionConstant3Vector {
	FLinearColor Constant; // 0x40
};

struct UIpNetDriver {
	char LogPortUnreach : 1; // 0x760
	char AllowPlayerPortUnreach : 1; // 0x760
	uint32_t MaxPortCountToTry; // 0x764
	uint32_t ServerDesiredSocketReceiveBufferBytes; // 0x774
	uint32_t ServerDesiredSocketSendBufferBytes; // 0x778
	uint32_t ClientDesiredSocketReceiveBufferBytes; // 0x77c
	uint32_t ClientDesiredSocketSendBufferBytes; // 0x780
	double MaxSecondsInReceive; // 0x788
	int32_t NbPacketsBetweenReceiveTimeTest; // 0x790
	float ResolutionConnectionTimeout; // 0x794
};

struct ULocalizedOverlays {
	UBasicOverlays* DefaultOverlays; // 0x28
	TMap<FString, UBasicOverlays*> LocaleToOverlaysMap; // 0x30
};

struct UBTDecorator_CheckGameplayTagsOnActor {
	FBlackboardKeySelector ActorToCheck; // 0x68
	EGameplayContainerMatchType TagsToMatch; // 0x90
	FGameplayTagContainer GameplayTags; // 0x98
	FString CachedDescription; // 0xb8
};

struct UPerlinNoiseCameraShakePattern {
	float LocationAmplitudeMultiplier; // 0x38
	float LocationFrequencyMultiplier; // 0x3c
	FPerlinNoiseShaker X; // 0x40
	FPerlinNoiseShaker Y; // 0x48
	FPerlinNoiseShaker Z; // 0x50
	float RotationAmplitudeMultiplier; // 0x58
	float RotationFrequencyMultiplier; // 0x5c
	FPerlinNoiseShaker Pitch; // 0x60
	FPerlinNoiseShaker Yaw; // 0x68
	FPerlinNoiseShaker Roll; // 0x70
	FPerlinNoiseShaker FOV; // 0x78
};

struct UBloodData {
	float MaxExitWoundDistance; // 0x30
	ABloodPool* BloodDripClass; // 0x38
	float BloodDripPitchLimit; // 0x40
	float BloodDripPerpendicularYawLimit; // 0x44
	TArray<UMaterialInterface*> BloodDripNonPerpendicular; // 0x48
	FVector BloodDripNonPerpendicularSize; // 0x58
	float BloodDripNonperpendicularYawLimit; // 0x64
	TArray<UMaterialInterface*> BloodDripExtremeNonPerpendicular; // 0x68
	FVector BloodDripExtremeNonPerpendicularSize; // 0x78
	float BloodDripDistance; // 0x84
	float BloodDripPitchVariance; // 0x88
	float BloodDripYawVariance; // 0x8c
	int32_t BloodDripSpawnCount; // 0x90
	ABloodPool* BloodPoolClass; // 0x98
	float BloodPoolSpawnDelay; // 0xa0
	FName BloodPoolSpawnBone; // 0xa4
	float BloodPoolZOffset; // 0xac
	TArray<UMaterialInstance*> Hit_EntryDecals; // 0xb0
	FVector HitEntryDecalSize; // 0xc0
	TArray<UMaterialInstance*> Hit_ExitDecals; // 0xd0
	FVector HitExitDecalSize; // 0xe0
	TArray<UParticleSystem*> Hit_EntryParticles; // 0xf0
	TArray<UParticleSystem*> Hit_ExitParticles; // 0x100
	TArray<UParticleSystem*> Hit_HeadshotParticles; // 0x110
	TArray<UMaterialInstance*> EntryWoundBlood_Decals; // 0x120
	FVector EntryWoundBlood_DecalSize; // 0x130
	TArray<UMaterialInstance*> ExitWoundBlood_Decals; // 0x140
	FVector ExitWoundBlood_DecalSize; // 0x150
	TArray<UMaterialInstance*> HeadshotBlood_Decals; // 0x160
	FVector HeadshotBlood_DecalSize; // 0x170
	TArray<FName> ArteryBones; // 0x180
	TArray<UParticleSystem*> ArteryBleedoutParticles; // 0x190
	TArray<UParticleSystem*> NormalBleedoutParticles; // 0x1a0
	TArray<UMaterialInstance*> ArteryBleedoutBlood_Decals; // 0x1b0
	FVector ArteryBleedoutBlood_DecalSize; // 0x1c0
	TArray<UMaterialInstance*> NormalBleedoutBlood_Decals; // 0x1d0
	FVector NormalBleedoutBlood_DecalSize; // 0x1e0
	TArray<UMaterialInstance*> BloodSplatterDecal; // 0x1f0
	float BloodSplatterMinSize; // 0x200
	float BloodSplatterMaxSize; // 0x204
	float BloodSplatterMaxDistance; // 0x208
	TArray<UParticleSystem*> BloodSplatterParticle; // 0x210
	UFMODEvent* HitEvent; // 0x220
	UFMODEvent* HeadHitEvent; // 0x228
	UFMODEvent* DeadHitEvent; // 0x230
	UFMODEvent* ArmorHitEvent; // 0x238
	UFMODEvent* BleedoutEvent; // 0x240
	UFMODEvent* ArteryBleedoutEvent; // 0x248
	UFMODEvent* BleedoutSplashEvent; // 0x250
};

struct UMovieSceneAudioSection {
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

struct ABP_Sky_Sphere_C {
	UStaticMeshComponent* SkySphereMesh; // 0x220
	USceneComponent* Base; // 0x228
	UMaterialInstanceDynamic* Sky material; // 0x230
	bool Refresh material; // 0x238
	ADirectionalLight* Directional light actor; // 0x240
	bool Colors determined by sun position; // 0x248
	float Sun height; // 0x24c
	float Sun brightness; // 0x250
	float Horizon falloff; // 0x254
	FLinearColor Zenith color; // 0x258
	FLinearColor Horizon color; // 0x268
	FLinearColor Cloud color; // 0x278
	FLinearColor Overall color; // 0x288
	float Cloud speed; // 0x298
	float Cloud opacity; // 0x29c
	float Stars brightness; // 0x2a0
	UCurveLinearColor* Horizon color curve; // 0x2a8
	UCurveLinearColor* Zenith color curve; // 0x2b0
	UCurveLinearColor* Cloud color curve; // 0x2b8
};

struct UBTTask_RunBehaviorDynamic {
	FGameplayTag InjectionTag; // 0x70
	UBehaviorTree* DefaultBehaviorAsset; // 0x78
	UBehaviorTree* BehaviorAsset; // 0x80
};

struct UDatasmithLandscapeTemplate {
	UMaterialInterface* LandscapeMaterial; // 0x30
	int32_t StaticLightingLOD; // 0x38
};

struct UInterpGroupCamera {
	UCameraAnim* CameraAnimInst; // 0x50
	float CompressTolerance; // 0x58
};

struct UW_MissionEnd_redux_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UVerticalBox* BonusesBox; // 0x268
	UW_Button_C* btn_Lobby; // 0x270
	UW_Button_C* btn_Quit; // 0x278
	UW_Button_C* btn_Restart; // 0x280
	UTextBlock* DifficultyMultiplier; // 0x288
	UImage* Image_163; // 0x290
	UW_Text_C* lbl_BestGrade; // 0x298
	UW_Text_C* lbl_BestTime; // 0x2a0
	UW_Text_C* lbl_Time; // 0x2a8
	UTextBlock* MissionCompletionTime; // 0x2b0
	UVerticalBox* ObjectiveContainer; // 0x2b8
	UW_MissionEnd_Rating_ScorePanel_C* Penalties; // 0x2c0
	UVerticalBox* PenaltiesBox; // 0x2c8
	UWidgetSwitcher* PenaltiesWidgetSwitcher; // 0x2d0
	UTextBlock* RatingGrade; // 0x2d8
	UTextBlock* RatingNumericScore; // 0x2e0
	UScaleBox* SB_NewBestRating; // 0x2e8
	UScaleBox* SB_NewBestTime; // 0x2f0
	UTextBlock* Score; // 0x2f8
	UW_MissionEnd_Rating_ScorePanel_C* Scores; // 0x300
	UTextBlock* TextBlock_104; // 0x308
	UW_Text_C* txt_BestGrade; // 0x310
	UW_Text_C* txt_BestTime; // 0x318
	UW_Text_C* txt_CurrentTime; // 0x320
	UVerticalBox* VerticalBox_57; // 0x328
	UW_Briefing_Objectives_List_C* W_Briefing_Objectives_List; // 0x330
	UW_MissionEnd_NextMap_Timer_C* W_MissionEnd_NextMap_Timer; // 0x338
	UW_MissionEnd_Rating_Progress_C* W_MissionEnd_Rating_Progress_C_2; // 0x340
	UW_PageHeader_C* W_PageHeader; // 0x348
	UW_RichChatBox_C* W_RichChatBox; // 0x350
	UButton* WidgetFocusButton; // 0x358
	TArray<UObject*> AllPenalties; // 0x360
	int32_t CurrentScore; // 0x370
	FText RatingFormat; // 0x378
	APlayerController* OwningPlayer; // 0x390
	bool NewBestRating; // 0x398
	bool NewBestTime; // 0x399
};

struct ASecondary_G19_V2_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1130
};

struct UMaterialExpressionSceneColor {
	EMaterialSceneAttributeInputMode InputMode; // 0x40
	FExpressionInput Input; // 0x44
	FExpressionInput OffsetFraction; // 0x58
	FVector2D ConstInput; // 0x6c
};

struct UBlendProfile {
	USkeleton* OwningSkeleton; // 0x30
	TArray<FBlendProfileBoneEntry> ProfileEntries; // 0x38
};

struct UProgressionData {
	FLevelUpData LevelUpData; // 0x30
};

struct UMovieSceneObjectPropertyTrack {
	UObject* PropertyClass; // 0xc8
};

struct UMaterialExpressionHairColor {
	FExpressionInput Melanin; // 0x40
	FExpressionInput Redness; // 0x54
	FExpressionInput DyeColor; // 0x68
};

struct URotatingMovementComponent {
	FRotator RotationRate; // 0xf0
	FVector PivotTranslation; // 0xfc
	char bRotationInLocalSpace : 1; // 0x108
};

struct UVectorField {
	FBox Bounds; // 0x28
	float Intensity; // 0x44
};

struct UW_SettingLabel_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Hi_Image; // 0x268
	UButton* HighlightButton; // 0x270
	UW_Text_C* txt_BindName; // 0x278
	FText BindText; // 0x280
	UTextBlock* DescriptionTextWidget; // 0x298
	FText Description; // 0x2a0
	FMulticastInlineDelegate OnLabelHovered; // 0x2b8
	FMulticastInlineDelegate OnLabelUnhovered; // 0x2c8
	UW_StandardCheckbox_C* CopyDescriptionFromCheckbox; // 0x2d8
	UW_StandardSlider_C* CopyDescriptionFromSlider; // 0x2e0
	UW_StandardCombobox_New_C* CopyDescriptionFromCombobox; // 0x2e8
	UFMODEvent* SettingLabelHoveredSound; // 0x2f0
};

struct UMaterialExpressionConstant2Vector {
	float R; // 0x40
	float G; // 0x44
};

struct UWindowTitleBarArea {
	bool bWindowButtonsEnabled; // 0x120
	bool bDoubleClickTogglesFullscreen; // 0x121
};

struct UComboButtonWidgetStyle {
	FComboButtonStyle ComboButtonStyle; // 0x30
};

struct UParticleModuleVelocityInheritParent {
	FRawDistributionVector Scale; // 0x38
};

struct UGeometryCacheTrack {
	float Duration; // 0x28
};

struct USplineComponent {
	FSplineCurves SplineCurves; // 0x450
	FInterpCurveVector SplineInfo; // 0x4c0
	FInterpCurveQuat SplineRotInfo; // 0x4d8
	FInterpCurveVector SplineScaleInfo; // 0x4f0
	FInterpCurveFloat SplineReparamTable; // 0x508
	bool bAllowSplineEditingPerInstance; // 0x520
	int32_t ReparamStepsPerSegment; // 0x524
	float Duration; // 0x528
	bool bStationaryEndpoints; // 0x52c
	bool bSplineHasBeenEdited; // 0x52d
	bool bModifiedByConstructionScript; // 0x52e
	bool bInputSplinePointsToConstructionScript; // 0x52f
	bool bDrawDebug; // 0x530
	bool bClosedLoop; // 0x531
	bool bLoopPositionOverride; // 0x532
	float LoopPosition; // 0x534
	FVector DefaultUpVector; // 0x538
};

struct UAnimBlueprint {
	USkeleton* TargetSkeleton; // 0xa8
	TArray<FAnimGroupInfo> Groups; // 0xb0
	bool bUseMultiThreadedAnimationUpdate; // 0xc0
	bool bWarnAboutBlueprintUsage; // 0xc1
};

struct UMaterialExpressionSquareRoot {
	FExpressionInput Input; // 0x40
};

struct AOneWayBlockingVolume {
	UBoxComponent* BoxComponent; // 0x220
	UArrowComponent* DirectionArrowComponent; // 0x228
};

struct UMatchStartInformationWidget_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* FadeOutEverything; // 0x268
	UWidgetAnimation* FadeInEverything; // 0x270
	UImage* Image_278; // 0x278
	UTextBlock* RoundCount; // 0x280
	UTextBlock* TextBlock_46; // 0x288
	UTextBlock* TextBlock_360; // 0x290
};

struct ULayer {
	FName LayerName; // 0x28
	char bIsVisible : 1; // 0x30
	TArray<FLayerActorStats> ActorStats; // 0x38
};

struct UAnimCompress_RemoveEverySecondKey {
	int32_t MinKeys; // 0x40
	char bStartAtSecondKey : 1; // 0x44
};

struct UMovieSceneCompiledData {
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

struct UAISenseConfig_Damage {
	UAISense_Damage* Implementation; // 0x48
};

struct UDynamicEntryBoxBase {
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

struct UNiagaraDataInterfaceCurlNoise {
	uint32_t Seed; // 0x38
};

struct ALensFlare {
	USceneComponent* Scene; // 0x220
	UMaterialBillboardComponent* LensFlare; // 0x228
	AReadyOrNotCharacter* OwningCharacter; // 0x230
	UMaterialInterface* FlareMat; // 0x238
	FVector2D BaseSize; // 0x240
	float MinimumRotationDeltaToBeVisible; // 0x248
	float GlobalBrightness; // 0x25c
	float GhostsBrightness; // 0x260
	float FlickerIntensity; // 0x264
	float FlickerTime; // 0x268
	FLinearColor GlobalColor; // 0x26c
	float FadeDistance; // 0x27c
	bool bUseFadeDistance; // 0x280
	float IncreasingBloomByDistance; // 0x284
	bool bUseDistanceBloom; // 0x288
	float HaloOpacity; // 0x28c
	float HaloInnerRadius; // 0x290
	float HaloBrightness; // 0x294
	FLinearColor HaloOuterColor; // 0x298
	FLinearColor HaloInnerColor; // 0x2a8
	UTexture* HaloTexture; // 0x2b8
	float HaloTextureSize; // 0x2c0
	float HaloContrast; // 0x2c4
	float CentreFlareBrightness; // 0x2c8
	UTexture* CentreFlareTexture; // 0x2d0
	FLinearColor CentreFlareColor; // 0x2d8
	float CentreFlareSize; // 0x2e8
	float CentreFlareContrast; // 0x2ec
	float MainFlareBrightness; // 0x2f0
	UTexture* MainFlare; // 0x2f8
	float MainFlareInnerRadius; // 0x300
	FLinearColor MainOuterColor; // 0x304
	FLinearColor MainLensInnerColor; // 0x314
	float MainFlareSize; // 0x324
	float MainFlareContrast; // 0x328
	float ReflectionSize; // 0x32c
	UTexture* ReflectionCentreTexture; // 0x330
	FLinearColor ReflectionColor; // 0x338
	float ReflectionBrightness; // 0x348
	float ReflectionContrast; // 0x34c
	float OppositeFlaresAxisProjection; // 0x350
	float FlareOppositeSize01; // 0x354
	float FlareOppositeSize02; // 0x358
	FLinearColor FlareOppositeColor01; // 0x35c
	FLinearColor FlareOppositeColor02; // 0x36c
	float FlareOppositeBrightness01; // 0x37c
	float FlareOppositeBrightness02; // 0x380
	float FlareOppositeContrast01; // 0x384
	float FlareOppositeContrast02; // 0x388
	UTexture* FlareOpposite01; // 0x390
	UTexture* FlareOpposite02; // 0x398
	float FrontFlaresAxisProjection; // 0x3a0
	float FlareFrontSize01; // 0x3a4
	float FlareFrontSize02; // 0x3a8
	FLinearColor FlareFrontColor01; // 0x3ac
	FLinearColor FlareFrontColor02; // 0x3bc
	float FlareFrontProximityCentre01; // 0x3cc
	float FlareFrontProximityCentre02; // 0x3d0
	UTexture* FlareFront01; // 0x3d8
	UTexture* FlareFront02; // 0x3e0
	float FlareFrontContrast01; // 0x3e8
	float FlareFrontContrast02; // 0x3ec
	float FlareFrontBrightness01; // 0x3f0
	float FlareFrontBrightness02; // 0x3f4
	float ReflectedFlareSize01; // 0x3f8
	float ReflectedFlareSize02; // 0x3fc
	float ReflectedFlareProximityCentre01; // 0x400
	float ReflectedFlareProximityCentre02; // 0x404
	UTexture* ReflectedFlare01; // 0x408
	UTexture* ReflectedFlare02; // 0x410
	FLinearColor ReflectedFlareColor01; // 0x418
	FLinearColor ReflectedFlareColor02; // 0x428
	float ReflectedFlareContrast01; // 0x438
	float ReflectedFlareContrast02; // 0x43c
	float ReflectedFlareBrightness01; // 0x440
	float ReflectedFlareBrightness02; // 0x444
	float MinorFlareProximityCentre01; // 0x448
	float MinorFlareSize01; // 0x44c
	float MinorFlareSizeRandom01; // 0x450
	UTexture* MinorFlare01; // 0x458
	FLinearColor MinorFlareColor01; // 0x460
	float MinorFlareContrast01; // 0x470
	float MinorFlareBrightness01; // 0x474
	FLinearColor MinorFlareColor02; // 0x478
	float MinorFlareContrast02; // 0x488
	float MinorFlareBrightness02; // 0x48c
	float MinorFlareProximityCentre02; // 0x490
	float MinorFlareSize02; // 0x494
	float MinorFlareSizeRandom02; // 0x498
	UTexture* MinorFlare02; // 0x4a0
	UTexture* Iris; // 0x4a8
	float IrisSize; // 0x4b0
	float IrisProximityCentre; // 0x4b4
	float IrisBrightness; // 0x4b8
	float IrisContrast; // 0x4bc
	FLinearColor IrisColor; // 0x4c0
	UTexture* AdditionalFlare; // 0x4d0
	float AdditionalFlareSize; // 0x4d8
	float AdditionalFlareContrast; // 0x4dc
	float AdditionalFlareBrightness; // 0x4e0
	FLinearColor AdditionalFlareColor; // 0x4e4
};

struct AElevator {
	USplineComponent* ElevatorPath; // 0x220
	bool bMoveElevator; // 0x228
	bool bCloseDoors; // 0x229
	USkeletalMeshComponent* ElevatorMesh; // 0x230
	UFMODAudioComponent* DestinationReachedSound; // 0x238
	UFMODAudioComponent* FloorReachedSound; // 0x240
	UFMODAudioComponent* DoorOpenSoundFMOD; // 0x248
	UFMODAudioComponent* DoorCloseSoundFMOD; // 0x250
	FVector DefaultElevatorLoc; // 0x258
	int32_t Floors; // 0x264
	float ElevatorSpeed; // 0x268
	int32_t CurrentFloor; // 0x26c
	float MoveElevatorDelay; // 0x270
	FTimerHandle MoveElevatorDelay_Handle; // 0x278
	int32_t SelectedFloor; // 0x280
};

struct UReadyOrNotGameplayEffect {
	FMulticastInlineDelegate OnGameplayEffectExpired; // 0x28
	AActor* Actor; // 0x38
	UWorld* World; // 0x40
};

struct UTextureRenderTarget {
	float TargetGamma; // 0x178
};

struct UChallenge_ArrestSomeone_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x70
};

struct UChaosClothConfig {
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
	FChaosClothWeightedValue TetherStiffness; // 0x50
	float LimitScale; // 0x58
	bool bUseGeodesicDistance; // 0x5c
	float ShapeTargetStiffness; // 0x60
	float CollisionThickness; // 0x64
	float FrictionCoefficient; // 0x68
	bool bUseCCD; // 0x6c
	bool bUseSelfCollisions; // 0x6d
	float SelfCollisionThickness; // 0x70
	bool bUseLegacyBackstop; // 0x74
	float DampingCoefficient; // 0x78
	bool bUsePointBasedWindModel; // 0x7c
	float DragCoefficient; // 0x80
	float LiftCoefficient; // 0x84
	bool bUseGravityOverride; // 0x88
	float GravityScale; // 0x8c
	FVector Gravity; // 0x90
	FChaosClothWeightedValue AnimDriveStiffness; // 0x9c
	FChaosClothWeightedValue AnimDriveDamping; // 0xa4
	FVector LinearVelocityScale; // 0xac
	float AngularVelocityScale; // 0xb8
	float FictitiousAngularScale; // 0xbc
	bool bUseTetrahedralConstraints; // 0xc0
	bool bUseThinShellVolumeConstraints; // 0xc1
	bool bUseContinuousCollisionDetection; // 0xc2
};

struct URadialWidgetThemeData {
	FName Name; // 0x30
	FText Description; // 0x38
	int32_t StartingSectorIndex; // 0x50
	float StartingSectorAngle; // 0x54
	float IconSize; // 0x58
	float IconPadding; // 0x5c
	float SectorInnerRadius; // 0x60
	float SectorOuterRadius; // 0x64
	float GapSize; // 0x68
	float WheelSize; // 0x6c
	float WheelCursorDistanceFromCenterWheel; // 0x70
	char bHideRadialWheelCursorOnMenuOpened : 1; // 0x74
	FLinearColor SelectedColor; // 0x78
	FLinearColor UnselectedColor; // 0x88
	FLinearColor UnselectableColor; // 0x98
	UFont* Font; // 0xa8
	UFMODEvent* SelectionSound; // 0xb0
	UFMODEvent* MenuOpenSound; // 0xb8
	UFMODEvent* MenuCloseSound; // 0xc0
	UFMODEvent* MenuCloseSound_NoSelection; // 0xc8
};

struct AStaticMeshActor {
	UStaticMeshComponent* StaticMeshComponent; // 0x220
	bool bStaticMeshReplicateMovement; // 0x228
	ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x229
};

struct UPoseWatch {
	UEdGraphNode* Node; // 0x28
	FColor PoseWatchColour; // 0x30
};

struct APaperCharacter {
	UPaperFlipbookComponent* Sprite; // 0x4b8
};

struct UBrushStampIndicator {
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

struct UNiagaraDataInterfaceArrayQuat {
	TArray<FQuat> QuatData; // 0x50
};

struct UParticleModuleCameraOffset {
	FRawDistributionFloat CameraOffset; // 0x30
	char bSpawnTimeOnly : 1; // 0x60
	EParticleCameraOffsetUpdateMethod UpdateMethod; // 0x64
};

struct UDisarmC2Activity {
	APlacedC2Explosive* PlacedC2; // 0x1a8
};

struct UVariant {
	TArray<FVariantDependency> Dependencies; // 0x28
	FText DisplayText; // 0x38
	TArray<UVariantObjectBinding*> ObjectBindings; // 0x68
	UTexture2D* Thumbnail; // 0x78
};

struct UDataDrivenCVarEngineSubsystem {
	FMulticastInlineDelegate OnDataDrivenCVarDelegate; // 0x30
};

struct APlantArea {
	UBoxComponent* OverlapArea; // 0x230
};

struct UNavigationSystemModuleConfig {
	char bStrictlyStatic : 1; // 0x50
	char bCreateOnClient : 1; // 0x50
	char bAutoSpawnMissingNavData : 1; // 0x50
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x50
};

struct UANIMBP_Python_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x308
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x350
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x3d0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x4d8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x4f8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x600
	float RotationCounter; // 0x620
	float RotationCounterSmoothed; // 0x624
	float BulletsHideAlpha; // 0x628
};

struct ULandscapeMaterialInstanceConstant {
	TArray<FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x318
	char bIsLayerThumbnail : 1; // 0x328
	char bDisableTessellation : 1; // 0x328
	char bMobile : 1; // 0x328
	char bEditorToolUsage : 1; // 0x328
};

struct UEditableTextBox {
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

struct UDataTable {
	UScriptStruct* RowStruct; // 0x28
	char bStripFromClientBuilds : 1; // 0x80
	char bIgnoreExtraFields : 1; // 0x80
	char bIgnoreMissingFields : 1; // 0x80
	FString ImportKeyField; // 0x88
};

struct ASuspectArmor {
	ESuspectArmorCoverage SuspectArmorCoverage; // 0xa30
	UMatineeCameraShake* ExplosionScreenShake; // 0xa40
	float ExplosionShakeRadius; // 0xa48
	UDamageType* ExplosionDamageType; // 0xa50
	float MaxDamageOnDetonation; // 0xa58
	float MinDamageOnDetonation; // 0xa5c
	float DamageInnerRadius; // 0xa60
	float DamageOuterRadius; // 0xa64
	float ExplosionDamageDelayAfterEffect; // 0xa68
	UParticleSystem* ExplosionParticle; // 0xa70
	UFMODEvent* ExplosionAudioFMOD; // 0xa78
};

struct UBTDecorator_BlueprintBase {
	AAIController* AIOwner; // 0x68
	AActor* ActorOwner; // 0x70
	TArray<FName> ObservedKeyNames; // 0x78
	char bShowPropertyDetails : 1; // 0x98
	char bCheckConditionOnlyBlackBoardChanges : 1; // 0x98
	char bIsObservingBB : 1; // 0x98
};

struct AGS_KingOfTheHill_C {
	USceneComponent* DefaultSceneRoot; // 0x6c8
};

struct ULightmassPrimitiveSettingsObject {
	FLightmassPrimitiveSettings LightmassSettings; // 0x28
};

struct UMovieScenePropertySystem {
	UMovieScenePropertyInstantiatorSystem* InstantiatorSystem; // 0x48
};

struct ASwatAutomationManager {
	TArray<ADoor*> Doors; // 0x228
	TArray<ADoor*> BreachedDoors; // 0x238
	ASWATManager* SWATManager; // 0x248
	ADoor* CurrentDoor; // 0x250
};

struct UMaterial {
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
	char bForwardBlendsSkyLightCubemaps : 1; // 0x208
	char bUsePlanarForwardReflections : 1; // 0x208
	char bNormalCurvatureToRoughness : 1; // 0x208
	EMaterialTessellationMode D3D11TessellationMode; // 0x209
	char bEnableCrackFreeDisplacement : 1; // 0x20a
	char bEnableAdaptiveTessellation : 1; // 0x20a
	char AllowTranslucentCustomDepthWrites : 1; // 0x20a
	char Wireframe : 1; // 0x20a
	char WriteDepthToTranslucentMaterial : 1; // 0x20a
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

struct URButton_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_1; // 0x268
	UButton* Btn; // 0x270
	UScaleBox* ScaleBox_1; // 0x278
	UTextBlock* TextBlock_69; // 0x280
	FText ButtonText; // 0x288
	FLinearColor SelectedColor; // 0x2a0
	FLinearColor DefaultColor; // 0x2b0
	UTexture2D* ButtonImage; // 0x2c0
	float ButtonAlpha; // 0x2c8
	FLinearColor TextHoveredColor; // 0x2cc
	FLinearColor TextUnhoveredColor; // 0x2dc
	ETextJustify TextJustification; // 0x2ec
	EStretch TextScale; // 0x2ed
	EStretchDirection TextStretchDirection; // 0x2ee
	FText HoveredText; // 0x2f0
	bool InvertHoverColors; // 0x308
};

struct UBlendSpaceBase {
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

struct UChaosClothSharedSimConfig {
	int32_t IterationCount; // 0x28
	int32_t SubdivisionCount; // 0x2c
	bool bUseLocalSpaceSimulation; // 0x30
	bool bUseXPBDConstraints; // 0x31
};

struct UW_HotkeyBar_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UHorizontalBox* HB_Bindings; // 0x268
	UW_HotkeyBar_Entry_C* W_HotkeyBar_Entry; // 0x270
	TMap<FKey, FText> Bindings; // 0x278
};

struct AARSkyLight {
	UAREnvironmentCaptureProbe* CaptureProbe; // 0x230
};

struct UGeneralProjectSettings {
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

struct AGM_ArrestAndRescue_C {
	USceneComponent* DefaultSceneRoot; // 0x710
};

struct UW_Objective_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* img_Complete; // 0x268
	UW_Text_C* txt_ObjTitle; // 0x270
	UVerticalBox* VB_SubObjectiveList; // 0x278
	UW_SubObjective_Entry_C* W_SubObjective_Entry_35; // 0x280
	AObjective* Objective; // 0x288
	FText CompleteText; // 0x290
	FText FailedText; // 0x2a8
	AObjective* ObjectiveClass; // 0x2c0
	bool bSimplifiedObjectives; // 0x2c8
	FText ObjectiveName; // 0x2d0
	FText ObjectiveDescription; // 0x2e8
	EObjectiveStatus ObjectiveStatus; // 0x300
};

struct USourceEffectChorusPreset {
	FSourceEffectChorusSettings Settings; // 0x108
};

struct UMaterialExpressionCosine {
	FExpressionInput Input; // 0x40
	float Period; // 0x54
};

struct UMaterialExpressionRuntimeVirtualTextureOutput {
	FExpressionInput BaseColor; // 0x40
	FExpressionInput Specular; // 0x54
	FExpressionInput Roughness; // 0x68
	FExpressionInput Normal; // 0x7c
	FExpressionInput WorldHeight; // 0x90
	FExpressionInput Opacity; // 0xa4
	FExpressionInput MASK; // 0xb8
};

struct UMaterialExpressionFeatureLevelSwitch {
	FExpressionInput Default; // 0x40
};

struct UNiagaraDataInterfaceSkeletalMesh {
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
	int32_t UvSetIndex; // 0xbc
	bool bRequireCurrentFrameData; // 0xc0
};

struct UMaterialExpressionTextureProperty {
	FExpressionInput TextureObject; // 0x40
	EMaterialExposedTextureProperty Property; // 0x54
};

struct ULandscapeSettings {
	int32_t MaxNumberOfLayers; // 0x38
};

struct USkeletalBodySetup {
	bool bSkipScaleFromAnimation; // 0x2a0
	TArray<FPhysicalAnimationProfile> PhysicalAnimationData; // 0x2a8
};

struct UParticleModuleLocationDirect {
	FRawDistributionVector Location; // 0x30
	FRawDistributionVector LocationOffset; // 0x78
	FRawDistributionVector ScaleFactor; // 0xc0
	FRawDistributionVector Direction; // 0x108
};

struct AMultitool {
	TMap<EMultitoolFunctions, UReadyOrNotWeaponAnimData*> MultitoolAnimData; // 0x8f8
	UInteractionsData* PvPFreeInteraction; // 0x948
	EMultitoolFunctions CurrentToolKit; // 0x950
	bool bIsLockpickGun; // 0x951
	char bAudioBasedProgress : 1; // 0x952
	UFMODEvent* FMODLockpickingSound; // 0x958
	UFMODEvent* FMODKnifeSound; // 0x960
	UFMODEvent* FMODWirecutterSound; // 0x968
	UFMODEvent* FMODFreeingSound; // 0x970
	AActor* TargetActor; // 0x978
	APlayerCharacter* PendingFreeCharacter; // 0x980
	bool bOperating; // 0x988
	float CurrentOperatingTime; // 0x98c
	float MaxOperatingTime; // 0x990
};

struct URadialIntMask {
	float Radius; // 0xb0
	FVector Position; // 0xb4
	int32_t InteriorValue; // 0xc0
	int32_t ExteriorValue; // 0xc4
	ESetMaskConditionType SetMaskCondition; // 0xc8
};

struct UDLSSOverrideSettings {
	EDLSSSettingOverride EnableDLSSInEditorViewportsOverride; // 0x28
	EDLSSSettingOverride EnableScreenpercentageManipulationInDLSSEditorViewportsOverride; // 0x29
	EDLSSSettingOverride EnableDLSSInPlayInEditorViewportsOverride; // 0x2a
	bool bShowDLSSIncompatiblePluginsToolsWarnings; // 0x2b
	EDLSSSettingOverride ShowDLSSSDebugOnScreenMessages; // 0x2c
};

struct UANIMBP_Zipcuffs_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8
};

struct USpectatorPawnMovement {
	char bIgnoreTimeDilation : 1; // 0x150
};

struct UParticleModuleVelocity_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xb0
};

struct UTouchInterface {
	TArray<FTouchInputControl> Controls; // 0x28
	float ActiveOpacity; // 0x38
	float InactiveOpacity; // 0x3c
	float TimeUntilDeactive; // 0x40
	float TimeUntilReset; // 0x44
	float ActivationDelay; // 0x48
	bool bPreventRecenter; // 0x4c
	float StartupDelay; // 0x50
};

struct UTeamSoftCoverCombatMove {
	TArray<UTeamSoftCoverCombatMove*> OtherSoftCoverCombatMoves; // 0x1b8
};

struct UW_Briefing_Transcript_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UW_Header_C* h_Transcript; // 0x268
	UScrollBox* ScrollBox_1; // 0x270
	UVerticalBox* VB_TranscriptEntries; // 0x278
	UDataTable* BriefingData; // 0x280
	FName MissionName; // 0x288
	TMap<float, FTranscript> TranscriptEntries; // 0x290
	float CurrentPlayTime; // 0x2e0
	TMap<float, UW_Briefing_Transcript_Entry_C*> TranscriptWidgets; // 0x2e8
	TArray<UW_Briefing_Transcript_Entry_C*> DimmedEntries; // 0x338
	FMulticastInlineDelegate TranscriptClicked; // 0x348
	float Spacing; // 0x358
	UW_Briefing_Transcript_Entry_C* CurrentTranscript; // 0x360
};

struct ADefaultPlayerStart_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250
	ADefaultPlayerStart_C* NextPlayerStart; // 0x258
	ETeamType Team; // 0x260
	TArray<APawn*> SpawnsClasses; // 0x268
	bool bOverlapping; // 0x278
};

struct UBlackboardKeyType_String {
	FString StringValue; // 0x30
};

struct UInterpTrackVisibility {
	TArray<FVisibilityTrackKey> VisibilityTrack; // 0x70
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	char bFireEventsWhenJumpingForwards : 1; // 0x80
};

struct UAnimNotify_ToggleEquipmentVis {
	EToggleInventoryVis InventroyVis; // 0x38
};

struct UAISense_Sight {
	int32_t MaxTracesPerTick; // 0x148
	int32_t MinQueriesPerTimeSliceCheck; // 0x14c
	double MaxTimeSlicePerTick; // 0x150
	float HighImportanceQueryDistanceThreshold; // 0x158
	float MaxQueryImportance; // 0x160
	float SightLimitQueryImportance; // 0x164
};

struct UAsyncActionHandleSaveGame {
	FMulticastInlineDelegate Completed; // 0x30
	USaveGame* SaveGameObject; // 0x60
};

struct UOnsetNRTSettings {
	bool bDownmixToMono; // 0x28
	float GranularityInSeconds; // 0x2c
	float Sensitivity; // 0x30
	float MinimumFrequency; // 0x34
	float MaximumFrequency; // 0x38
};

struct UParticleModuleAccelerationBase {
	char bAlwaysInWorldSpace : 1; // 0x30
};

struct UW_HumanCharacter_HUD_V2_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x318
	UWidgetAnimation* Anim_ShakeHUD_PlayerHit; // 0x320
	UWidgetAnimation* Anim_ShakeHUD_TeamView; // 0x328
	UWidgetAnimation* Anim_ShakeHUD_FireModes; // 0x330
	UWidgetAnimation* Anim_FadeInHUD; // 0x338
	UWidgetSwitcher* BottomLeftUI_StyleSwitcher; // 0x340
	UW_RichChatBox_C* Chat; // 0x348
	UVerticalBox* CommandContext_Container; // 0x350
	UImage* CommandContextDoor_Image; // 0x358
	UImage* CommandContextHuman_Image; // 0x360
	UWidgetSwitcher* CommandContextIcon_Switcher; // 0x368
	UImage* CommandReticle_Image; // 0x370
	UTextBlock* CommandTriggerKey_Text; // 0x378
	UW_FireModes_C* FireModes; // 0x380
	UW_Hotkeys_C* Hotkeys; // 0x388
	UW_PVP_Extraction_HUD_C* Incrimination_Extraction_HUD; // 0x390
	UW_ItemSelectionMenu_C* ItemSelectionMenu; // 0x398
	UW_MagCheckOverview_C* MagCheckOverview; // 0x3a0
	UMatchStartInformationWidget_C* MatchStartInformationWidget; // 0x3a8
	UW_MatchStatusCard_V2_C* MatchStatusCard_V2; // 0x3b0
	UW_DamagePaperdoll_C* Paperdoll; // 0x3b8
	USizeBox* Paperdoll_Box; // 0x3c0
	UVerticalBox* PlayerActions_Box; // 0x3c8
	UWidgetSwitcher* PlayerContext_Switcher; // 0x3d0
	UW_PlayerHealthStatus_C* PlayerHealthStatus; // 0x3d8
	UWidgetSwitcher* PVP_HUD_Switcher; // 0x3e0
	UW_ReadyRoomWidget_C* ReadyRoomWidget; // 0x3e8
	UW_COOPScorePopUp_C* ScorePopUp; // 0x3f0
	UW_SWATTeamStatus_C* SWATTeamStatus; // 0x3f8
	UW_TabletHUD_C* TabletHUD; // 0x400
	UW_TeamView_C* TeamView; // 0x408
	UVerticalBox* TopSideUI_Container; // 0x410
	UW_TutorialMessagePopup_C* TutorialMessagePopup; // 0x418
	UW_VotePopUp_C* VotePopUp; // 0x420
	UW_Compass_V3_C* W_Compass_V3; // 0x428
	UW_Compass_V3_C* W_Compass_V3_2; // 0x430
	UW_LoudnessMeter_C* W_LoudnessMeter_2; // 0x438
	UW_VOIPTalker_C* W_VOIPTalker; // 0x440
	FSlateBrush DoorCommandBrush; // 0x448
	FSlateBrush HumanCommandBrush; // 0x4d0
	UW_TutorialOverviewText_C* TutorialOverview; // 0x558
	bool bDelegatesInitialized; // 0x560
};

struct UW_PageHeader_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Refresh; // 0x268
	UImage* Image_43; // 0x270
	UNamedSlot* PageContent; // 0x278
	UW_Text_C* txt_HeaderText; // 0x280
	UW_Text_C* txt_PageTagline; // 0x288
	FText Tagline; // 0x290
	FText HeaderText; // 0x2a8
	bool DesignTime; // 0x2c0
};

struct AFMODAmbientSound {
	UFMODAudioComponent* AudioComponent; // 0x220
};

struct UCompositeCurveTable {
	TArray<UCurveTable*> ParentTables; // 0xa0
	TArray<UCurveTable*> OldParentTables; // 0xb0
};

struct AGM_FreeMode_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x680
	USceneComponent* DefaultSceneRoot; // 0x688
	FSavedLoadout Loadout; // 0x690
	bool HasGivenGear?; // 0x7c8
};

struct UWindDirectionalSourceComponent {
	float Strength; // 0x1f8
	float Speed; // 0x1fc
	float MinGustAmount; // 0x200
	float MaxGustAmount; // 0x204
	float Radius; // 0x208
	char bPointWind : 1; // 0x20c
};

struct UGetRecentPlayersCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UInterpTrackMove {
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

struct UDestructibleFractureSettings {
	int32_t CellSiteCount; // 0x28
	FFractureMaterial FractureMaterialDesc; // 0x2c
	int32_t RandomSeed; // 0x50
	TArray<FVector> VoronoiSites; // 0x58
	int32_t OriginalSubmeshCount; // 0x68
	TArray<UMaterialInterface*> Materials; // 0x70
	TArray<FDestructibleChunkParameters> ChunkParameters; // 0x80
};

struct USlateAccessibleWidgetData {
	bool bCanChildrenBeAccessible; // 0x28
	ESlateAccessibleBehavior AccessibleBehavior; // 0x29
	ESlateAccessibleBehavior AccessibleSummaryBehavior; // 0x2a
	FText AccessibleText; // 0x30
	FDelegate AccessibleTextDelegate; // 0x48
	FText AccessibleSummaryText; // 0x58
	FDelegate AccessibleSummaryTextDelegate; // 0x70
};

struct URetainerBox {
	bool bRetainRender; // 0x120
	bool RenderOnInvalidation; // 0x121
	bool RenderOnPhase; // 0x122
	int32_t Phase; // 0x124
	int32_t PhaseCount; // 0x128
	UMaterialInterface* EffectMaterial; // 0x130
	FName TextureParameter; // 0x138
};

struct UMovieSceneCaptureProtocolBase {
	EMovieSceneCaptureProtocolState State; // 0x50
};

struct UMaterialExpressionArctangentFast {
	FExpressionInput Input; // 0x40
};

struct UExpandableArea {
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

struct UW_StandardSlider_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UScaleBox* ScaleBox_137; // 0x268
	UTextBlock* SliderValueText; // 0x270
	USlider* TheSlider; // 0x278
	UTextBlock* DescriptionTextWidget; // 0x280
	FText Description; // 0x288
	StandardSliderTypes SliderType; // 0x2a0
	float SliderFloatMin; // 0x2a4
	int32_t SliderIntegerMin; // 0x2a8
	int32_t SliderIntegerMax; // 0x2ac
	int32_t SliderIntegerStep; // 0x2b0
	float SliderFloatMax; // 0x2b4
	float SliderFloatStep; // 0x2b8
	float PreviewFloatValue; // 0x2bc
	float FloatValue; // 0x2c0
	int32_t IntegerValue; // 0x2c4
	int32_t QualityValue; // 0x2c8
	int32_t PreviewIntegerValue; // 0x2cc
	int32_t PreviewQualityValue; // 0x2d0
	FMulticastInlineDelegate OnFloatValueChanged; // 0x2d8
	FMulticastInlineDelegate OnIntegralValueChanged; // 0x2e8
	FMulticastInlineDelegate OnQualityValueChanged; // 0x2f8
	bool bDisplayAsPercent; // 0x308
	FText PercentageFormat; // 0x310
	TArray<FString> SupportedResolutions; // 0x328
	FString ResolutionValue; // 0x338
	FMulticastInlineDelegate OnResolutionValueChanged; // 0x348
	bool SnapToGrid; // 0x358
	FMulticastInlineDelegate OnDlssValueChanged; // 0x360
	float SliderTextSizeRatio; // 0x370
};

struct UW_SwatCommandMain_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x548
	UW_SwatCommandEntry_C* Back; // 0x550
	UBorder* Border_1; // 0x558
	UImage* div_Bot; // 0x560
	UImage* div_Top; // 0x568
	UImage* Image; // 0x570
	UImage* Image_109; // 0x578
	UW_Text_C* txt_QueueBinding; // 0x580
	UW_Text_C* txt_QueueCommands; // 0x588
	UVerticalBox* VB_Commands; // 0x590
	UVerticalBox* VB_Queue; // 0x598
	UVerticalBox* VB_SwatCommand; // 0x5a0
	FSwatCommand ToggleSWATMode; // 0x5a8
	FLinearColor RedTeamColor; // 0x628
	FLinearColor BlueTeamColor; // 0x638
	FLinearColor GoldTeamColor; // 0x648
	UW_SwatCommandEntry_C* QueueCommandWidget; // 0x658
};

struct UMaterialExpressionLandscapeLayerSwitch {
	FExpressionInput LayerUsed; // 0x40
	FExpressionInput LayerNotUsed; // 0x54
	FName ParameterName; // 0x68
	char PreviewUsed : 1; // 0x70
	FGuid ExpressionGUID; // 0x74
};

struct UMaterialExpressionBentNormalCustomOutput {
	FExpressionInput Input; // 0x40
};

struct UTextureLightProfile {
	float Brightness; // 0x1a0
	float TextureMultiplier; // 0x1a4
};

struct UGizmoComponentHitTarget {
	UPrimitiveComponent* Component; // 0x30
};

struct UW_PlanningMap_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* MapInteraction; // 0x268
	UCanvasPanel* RootCanvas; // 0x270
	UW_PlanningMap_BreachPoint_Info_C* SpawnDetailsPanel; // 0x278
	UVerticalBox* VB_FloorButtons; // 0x280
	UW_2DMap_C* W_2DMap; // 0x288
	FLevelDataLookupTable LevelData; // 0x290
	TArray<FLevelFloorData> MapFloors; // 0x890
	FMulticastInlineDelegate PanMap; // 0x8a0
	FMulticastInlineDelegate UpdateMapMaterial; // 0x8b0
	bool Pressed; // 0x8c0
	FVector2D MouseDelta; // 0x8c4
	FMulticastInlineDelegate NewEventDispatcher_1; // 0x8d0
	TArray<UBP_UI_PlanningMap_SpawnPoint_C*> SpawnPointComponents; // 0x8e0
	ABP_UI_PlanningMap_C* PlanningMapActor; // 0x8f0
	TArray<UW_Button_C*> FloorButtons; // 0x8f8
	int32_t CurrentFloor; // 0x908
	TMap<UBP_UI_PlanningMap_SpawnPoint_C*, UW_PlanningMap_BreachPoint_C*> SpawnPoints; // 0x910
	UW_PlanningMap_BreachPoint_C* SelectedPoint; // 0x960
	FVector2D DetailPanelOffset; // 0x968
	float HeightCheck; // 0x970
	float WidthCheck; // 0x974
};

struct AGM_KingOfTheHill_C {
	USceneComponent* DefaultSceneRoot; // 0x718
};

struct UAsyncActionChangePrimaryAssetBundles {
	FMulticastInlineDelegate Completed; // 0x78
};

struct USourceEffectPhaserPreset {
	FSourceEffectPhaserSettings Settings; // 0xa0
};

struct UFMODAsset {
	FGuid AssetGuid; // 0x28
};

struct ULuminARSessionConfig {
	FMagicLeapPlanesQuery PlanesQuery; // 0x110
	int32_t MaxPlaneQueryResults; // 0x170
	int32_t MinPlaneArea; // 0x174
	bool bArbitraryOrientationPlaneDetection; // 0x178
	FVector PlaneSearchExtents; // 0x17c
	TArray<EMagicLeapPlaneQueryFlags> PlaneQueryFlags; // 0x188
	bool bDiscardZeroExtentPlanes; // 0x198
	bool bDefaultUseUnreliablePose; // 0x199
};

struct UGameViewportClient {
	UConsole* ViewportConsole; // 0x40
	TArray<FDebugDisplayProperty> DebugProperties; // 0x48
	int32_t MaxSplitscreenPlayers; // 0x68
	UWorld* World; // 0x78
	UGameInstance* GameInstance; // 0x80
};

struct UMovieSceneGeometryCacheSection {
	FMovieSceneGeometryCacheParams Params; // 0xe8
};

struct UARMeshComponent {
	FARMeshUpdatePayload ReplicatedPayload; // 0x280
};

struct UMaterialExpressionDistanceFieldGradient {
	FExpressionInput Position; // 0x40
};

struct UMaterialExpressionViewProperty {
	EMaterialExposedViewProperty Property; // 0x40
};

struct UDoorPointComponent {
	bool bFront; // 0x470
	bool bPIEMidLocation; // 0x471
	bool bPIEEndLocation; // 0x472
	bool bStackUp; // 0x473
	bool bClear; // 0x474
	bool bMidpoint; // 0x475
	int32_t Position; // 0x478
	bool bAlternate; // 0x47c
	bool bGrenadeLauncher; // 0x47d
	bool bGrenadeThrow; // 0x47e
	bool bDoorInteractionPoint; // 0x47f
};

struct ASearchAndDestroyGS {
	float BombCountActive; // 0x6c0
	bool bBombPlanted; // 0x6c4
	bool bBombDetonate; // 0x6c5
	bool bBombDefused; // 0x6c6
	APlayerCharacter* bHasBomb; // 0x6c8
};

struct UParticleModuleSpawn {
	FRawDistributionFloat Rate; // 0x38
	FRawDistributionFloat RateScale; // 0x68
	EParticleBurstMethod ParticleBurstMethod; // 0x98
	TArray<FParticleBurst> BurstList; // 0xa0
	FRawDistributionFloat BurstScale; // 0xb0
	char bApplyGlobalSpawnRateScale : 1; // 0xe0
};

struct ATaser {
	UMaterialInstanceDynamic* TaserLightDynamicMaterial; // 0x1128
	FHitResult ProjectileHitResult; // 0x1130
	int32_t StartingCartridges; // 0x11b8
	float SweepForReactionVolumeSize; // 0x11bc
	float CartridgeWeight; // 0x11c0
	bool bFiredCartridge; // 0x11c4
	bool bDetachedProbes; // 0x11c5
	float BlinkTime; // 0x11c8
	bool bBlinkState; // 0x11cc
	float MaxBatteryLevel; // 0x11d0
	float MinCableLength; // 0x11d4
	float MaxCableLength; // 0x11d8
	float CableGainRate; // 0x11dc
	float ProbeMaxDistance; // 0x11e0
	USoundBase* DetachSoundEffect; // 0x11e8
	UFMODEvent* DetachSoundEffectFMOD; // 0x11f0
	float PingStunDuration; // 0x11f8
	float StunDurationRemaining; // 0x11fc
	bool bStartedStun; // 0x1200
	USoundBase* CrackleSoundEffect; // 0x1208
	UFMODEvent* CrackleSoundEffectFMOD; // 0x1210
	UFMODEvent* TaserHitEffectFMOD; // 0x1218
	ABulletProjectile* LeftProjectile; // 0x1220
	ABulletProjectile* RightProjectile; // 0x1228
	UParticleSystem* TaserImpactParticle_Start; // 0x1238
	UParticleSystemComponent* TaserImpactParticleComp_Start; // 0x1240
	UParticleSystem* TaserImpactParticle_Loop; // 0x1248
	UParticleSystemComponent* TaserImpactParticleComp_LoopLeft; // 0x1250
	UParticleSystemComponent* TaserImpactParticleComp_LoopRight; // 0x1258
	float DoorBlowOutForce; // 0x12ec
	AActor* LeftCableAttachActor; // 0x12f0
	AActor* RightCableAttachActor; // 0x12f8
	UAnimMontage* TaserFireLoop1P; // 0x1300
	UAnimMontage* TaserFireLoop3P; // 0x1308
	UMatineeCameraShake* TaserFireLoopCameraShake; // 0x1310
	UCableComponent* TopCable; // 0x1320
	UCableComponent* BottomCable; // 0x1328
	USkeletalMeshComponent* LeftDoor; // 0x1330
	USkeletalMeshComponent* RightDoor; // 0x1338
	UAudioComponent* CrackleSoundGenerator; // 0x1340
	UFMODAudioComponent* CrackleSoundGeneratorFMOD; // 0x1348
	ULaserAttachment* LaserAttachmentClass; // 0x1350
};

struct UPlayerActionPromptWidget {
	FText ActionText; // 0x278
	URichTextBlock* Action_RichText; // 0x290
	UWidgetAnimation* Anim_OnShow; // 0x298
	char bInUse : 1; // 0x2a0
};

struct UAnimNotify_WedgeDoor {
	char bWedgeDeployFinished : 1; // 0x38
};

struct UParticleModuleEventReceiverKillParticles {
	char bStopSpawning : 1; // 0x40
};

struct UTimelineComponent {
	FTimeline TheTimeline; // 0xb0
	char bIgnoreTimeDilation : 1; // 0x148
};

struct UWidgetInteractionComponent {
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
	FVector2D LocalHitLocation; // 0x348
	FVector2D LastLocalHitLocation; // 0x350
	UWidgetComponent* HoveredWidgetComponent; // 0x358
	FHitResult LastHitResult; // 0x360
	bool bIsHoveredWidgetInteractable; // 0x3e8
	bool bIsHoveredWidgetFocusable; // 0x3e9
	bool bIsHoveredWidgetHitTestVisible; // 0x3ea
};

struct UAudioSettings {
	FSoftObjectPath DefaultSoundClassName; // 0x38
	FSoftObjectPath DefaultMediaSoundClassName; // 0x50
	FSoftObjectPath DefaultSoundConcurrencyName; // 0x68
	FSoftObjectPath DefaultBaseSoundMix; // 0x80
	FSoftObjectPath VoiPSoundClass; // 0x98
	FSoftObjectPath MasterSubmix; // 0xb0
	FSoftObjectPath BaseDefaultSubmix; // 0xc8
	FSoftObjectPath ReverbSubmix; // 0xe0
	FSoftObjectPath EQSubmix; // 0xf8
	EVoiceSampleRate VoiPSampleRate; // 0x110
	float DefaultReverbSendLevel; // 0x114
	int32_t MaximumConcurrentStreams; // 0x118
	float GlobalMinPitchScale; // 0x11c
	float GlobalMaxPitchScale; // 0x120
	TArray<FAudioQualitySettings> QualityLevels; // 0x128
	char bAllowPlayWhenSilent : 1; // 0x138
	char bDisableMasterEQ : 1; // 0x138
	char bAllowCenterChannel3DPanning : 1; // 0x138
	uint32_t NumStoppingSources; // 0x13c
	EPanningMethod PanningMethod; // 0x140
	EMonoChannelUpmixMethod MonoChannelUpmixMethod; // 0x141
	FString DialogueFilenameFormat; // 0x148
	TArray<FSoundDebugEntry> DebugSounds; // 0x158
	TArray<FDefaultAudioBusSettings> DefaultAudioBuses; // 0x168
	USoundClass* DefaultSoundClass; // 0x178
	USoundClass* DefaultMediaSoundClass; // 0x180
	USoundConcurrency* DefaultSoundConcurrency; // 0x188
};

struct UListViewBase {
	UUserWidget* EntryWidgetClass; // 0x108
	float WheelScrollMultiplier; // 0x110
	bool bEnableScrollAnimation; // 0x114
	bool bEnableFixedLineOffset; // 0x115
	float FixedLineScrollOffset; // 0x118
	FMulticastInlineDelegate BP_OnEntryGenerated; // 0x120
	FMulticastInlineDelegate BP_OnEntryReleased; // 0x130
	FUserWidgetPool EntryWidgetPool; // 0x140
};

struct UEnvQueryGenerator_SimpleGrid {
	FAIDataProviderFloatValue GridSize; // 0x80
	FAIDataProviderFloatValue SpaceBetween; // 0xb8
	UEnvQueryContext* GenerateAround; // 0xf0
};

struct UW_Briefing_Timeline_TrackWaveElement_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UHorizontalBox* HB_WaveLine; // 0x268
	UImage* img_cap; // 0x270
	UImage* img_Line; // 0x278
	USizeBox* SB_Line; // 0x280
	float Wavelength; // 0x288
	bool bIsTimelineEvent; // 0x28c
	float Spacing; // 0x290
};

struct UPhononOcclusionSourceSettings {
	EIplDirectOcclusionMode DirectOcclusionMode; // 0x28
	EIplDirectOcclusionMethod DirectOcclusionMethod; // 0x29
	float DirectOcclusionSourceRadius; // 0x2c
	bool DirectAttenuation; // 0x30
	bool AirAbsorption; // 0x31
};

struct UAISenseConfig_Hearing {
	UAISense_Hearing* Implementation; // 0x48
	float HearingRange; // 0x50
	float LoSHearingRange; // 0x54
	char bUseLoSHearing : 1; // 0x58
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x5c
};

struct UMovieSceneCameraShakeSourceShakeSection {
	FMovieSceneCameraShakeSectionData ShakeData; // 0xe8
};

struct UDialogueWave {
	char bMature : 1; // 0x28
	char bOverride_SubtitleOverride : 1; // 0x28
	FString SpokenText; // 0x30
	FString SubtitleOverride; // 0x40
	TArray<FDialogueContextMapping> ContextMappings; // 0x50
	FGuid LocalizationGUID; // 0x60
};

struct UPanelWidget {
	TArray<UPanelSlot*> Slots; // 0x108
};

struct UNiagaraDataInterfaceLandscape {
	AActor* SourceLandscape; // 0x38
	ENDILandscape_SourceMode SourceMode; // 0x40
	TArray<UPhysicalMaterial*> PhysicalMaterials; // 0x48
};

struct UARFaceGeometry {
	FVector LookAtTarget; // 0xf8
	bool bIsTracked; // 0x104
	TMap<EARFaceBlendShape, float> BlendShapes; // 0x108
	FTransform LeftEyeTransform; // 0x190
	FTransform RightEyeTransform; // 0x1c0
};

struct UGameplayTagsDeveloperSettings {
	FString DeveloperConfigName; // 0x38
	FName FavoriteTagSource; // 0x48
};

struct UImageSequenceProtocol_EXR {
	bool bCompressed; // 0xd8
	EHDRCaptureGamut CaptureGamut; // 0xd9
};

struct ALoadoutPortal {
	UBillboardComponent* BillboardComponent; // 0x228
	UInteractableComponent* InteractableComponent; // 0x230
	TArray<UStaticMeshComponent*> CompsToOutline; // 0x238
	TArray<ULightComponent*> LightsToEnable; // 0x248
	FName LightActorsOfTag; // 0x258
	bool bIsWeaponCustomizationOnly; // 0x260
	ACameraActor* WeaponCustomizationCamera; // 0x268
	ULevelStreaming* PreMissionStreamedLevel; // 0x288
};

struct UW_Briefing_Intel_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UW_Briefing_IntelList_Entry_C* CivilianIntelList; // 0x268
	UW_Briefing_IntelList_Entry_C* MediaIntelList; // 0x270
	UW_Briefing_IntelList_Entry_C* SuspectIntelList; // 0x278
	UVerticalBox* VB_DocumentationLists; // 0x280
	UW_Briefing_Dossier_C* W_Briefing_Dossier; // 0x288
	UW_Header_C* W_Header; // 0x290
	FST_Briefing_Intel IntelPlaceholder; // 0x298
	bool bHasSuspects; // 0x2c8
	bool bHasCivilians; // 0x2c9
	bool bHasMedia; // 0x2ca
	TArray<FCharacterBio> MissionSuspects; // 0x2d0
	TArray<FCharacterBio> MissionCivilians; // 0x2e0
	TArray<FST_Briefing_Evidence> MissionMedia; // 0x2f0
	float Spacing; // 0x300
};

struct ASniperCharacter {
	int32_t Designation; // 0x20c0
	bool bADSLocked; // 0x20c4
	FTimerHandle ExitControlHandle; // 0x20c8
	UScopedWeaponAttachment* PrimaryScopeAttachment; // 0x20d0
	UWeaponAttachment* PrimaryMuzzleAttachment; // 0x20d8
	UWeaponAttachment* PrimaryUnderbarrelAttachment; // 0x20e0
	UScopedWeaponAttachment* SecondaryScopeAttachment; // 0x20e8
	UWeaponAttachment* SecondaryMuzzleAttachment; // 0x20f0
	UWeaponAttachment* SecondaryUnderbarrelAttachment; // 0x20f8
};

struct UAnimMontage {
	FAlphaBlend BlendIn; // 0xa8
	float BlendInTime; // 0xd8
	FAlphaBlend BlendOut; // 0xe0
	float BlendoutTime; // 0x110
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

struct APaperTerrainActor {
	USceneComponent* DummyRoot; // 0x220
	UPaperTerrainSplineComponent* SplineComponent; // 0x228
	UPaperTerrainComponent* RenderComponent; // 0x230
};

struct ASecondary_G19_D_Temp_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1130
};

struct UTransformProxy {
	bool bRotatePerObject; // 0x70
	bool bSetPivotMode; // 0x71
	FTransform SharedTransform; // 0x90
	FTransform InitialSharedTransform; // 0xc0
};

struct UPlanePositionGizmo {
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

struct AMainMenuPawn_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280
	UCameraComponent* Camera; // 0x288
	USceneComponent* Scene; // 0x290
	float DefaultFOV; // 0x298
};

struct UMovieScenePrimitiveMaterialTrack {
	int32_t MaterialIndex; // 0xc8
};

struct UW_FPSCounter_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* FPS; // 0x268
};

struct UOpenCommandMenuQuestNode {
	bool bInverse; // 0x270
};

struct UDeviceProfileManager {
	TArray<UObject*> Profiles; // 0x28
};

struct URadialWidgetBase {
	FMulticastInlineDelegate OnRadialMenuOpened_Delegate; // 0x278
	FMulticastInlineDelegate OnRadialMenuClosed_Delegate; // 0x288
	int32_t CurrentSelectionIndex; // 0x298
	int32_t PreviousSelectionIndex; // 0x29c
	float Angle; // 0x2a0
	float AngleSpread; // 0x2a4
	float PercentageWithoutGap; // 0x2a8
	float PercentageWithGap; // 0x2ac
	char bIsWheelCreated : 1; // 0x2b0
	char bIsWheelRefreshed : 1; // 0x2b0
	char bNavigatingWithGamepad : 1; // 0x2b0
	FVector2D RadialCursorPosition; // 0x2b4
	TArray<float> Angles; // 0x2c0
	TArray<URadialSectorWidget*> Sectors; // 0x2d0
	UPanelWidget* RadialWheel; // 0x2e0
	UImage* RadialWheelCursor; // 0x2e8
	APlayerController* OwningPlayer; // 0x2f0
	APawn* OwningPawn; // 0x2f8
	APlayerCharacter* OwningPlayerCharacter; // 0x300
	int32_t NumOfSectors; // 0x308
	float OpenDelay; // 0x30c
	float CloseDelay; // 0x310
	float MinWheelSize; // 0x314
	float MaxWheelSize; // 0x318
	float MinCursorAngle; // 0x31c
	float MaxCursorAngle; // 0x320
	ERadialCursorBehaviour RadialCursorBehaviour; // 0x324
	URadialSectorWidget* RadialSectorWidgetClass; // 0x328
	char bAlwaysHideRadialWheelCursor : 1; // 0x330
	char bCanMoveWhileMenuIsOpened : 1; // 0x330
	char bCanPerformActionsWhileMenuIsOpened : 1; // 0x330
	char bCanAimWhileMenuIsOpened : 1; // 0x330
	char bShowDebugMessages : 1; // 0x330
	char bShowMouseCursor : 1; // 0x330
	int32_t StartingSectorIndex; // 0x334
	float StartingSectorAngle; // 0x338
	float IconSize; // 0x33c
	float IconPadding; // 0x340
	float SectorInnerRadius; // 0x344
	float SectorOuterRadius; // 0x348
	float GapSize; // 0x34c
	float WheelSize; // 0x350
	float WheelCursorDistanceFromCenterWheel; // 0x354
	char bHideRadialWheelCursorOnMenuOpened : 1; // 0x358
	FLinearColor SelectedColor; // 0x35c
	FLinearColor UnselectedColor; // 0x36c
	FLinearColor UnselectableColor; // 0x37c
	UFont* Font; // 0x390
	UFMODEvent* SelectionSound; // 0x398
	UFMODEvent* MenuOpenSound; // 0x3a0
	UFMODEvent* MenuCloseSound; // 0x3a8
	UFMODEvent* MenuCloseSound_NoSelection; // 0x3b0
	URadialWidgetThemeData* RadialWidgetTheme; // 0x3b8
	FVector2D MousePosition; // 0x3c0
	FVector2D MouseAxisDelta; // 0x3c8
	float MouseWheelDelta; // 0x3d0
	float MouseAngle; // 0x3d4
	float GamepadXAxis; // 0x3d8
	float GamepadYAxis; // 0x3dc
	float GamepadAngle; // 0x3e0
	float GlobalTimeDilation; // 0x3e4
};

struct ARandomizedShippingContainerActor {
	UStaticMeshComponent* ContainerMeshComp; // 0x220
	UStaticMeshComponent* ContainerDecalsComp; // 0x228
	UStaticMeshComponent* LeftDoorDecalsComp; // 0x230
	UStaticMeshComponent* RightDoorDecalsComp; // 0x238
	TArray<UMaterialInterface*> ContainerMaterials; // 0x240
	TArray<UStaticMesh*> ContainerDecals; // 0x250
	TArray<UStaticMesh*> LeftDoorDecals; // 0x260
	TArray<UStaticMesh*> RightDoorDecals; // 0x270
};

struct UW_HotkeyBar_Entry_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UW_Text_C* txt_Binding; // 0x268
	UW_Text_C* txt_Key; // 0x270
	FKey Key; // 0x278
	FText BindingName; // 0x290
};

struct UW_AG_AdminGameControls_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UW_StandardButton_C* AddMapButton; // 0x268
	UW_StandardButton_C* BanBtnNew; // 0x270
	UW_StandardButton_C* CloseBtn; // 0x278
	UW_StandardRadioButton_C* Equipment_RadioButton_Appearance; // 0x280
	UW_StandardRadioButton_C* Equipment_RadioButton_Primary; // 0x288
	UW_StandardRadioButton_C* Equipment_RadioButton_Protection; // 0x290
	UW_StandardRadioButton_C* Equipment_RadioButton_Sidearm; // 0x298
	UW_StandardRadioButton_C* Equipment_RadioButton_Tactical; // 0x2a0
	UW_StandardButton_C* KickBtnNew; // 0x2a8
	UW_RadioContainer_C* LeftMenu_Equipment; // 0x2b0
	UW_RadioContainer_C* LeftMenu_Overview; // 0x2b8
	UWidgetSwitcher* LeftMenuSwitcher; // 0x2c0
	UWidgetSwitcher* MainWidgetSwitcher; // 0x2c8
	UW_StandardButton_C* MoveSelectedMapDown; // 0x2d0
	UW_StandardButton_C* MoveSelectedMapUp; // 0x2d8
	UW_StandardButton_C* NextMapBtn; // 0x2e0
	UW_StandardRadioButton_C* Overview_RadioButton_MapsModes; // 0x2e8
	UW_StandardRadioButton_C* Overview_RadioButton_Players; // 0x2f0
	UScrollBox* PlayerList; // 0x2f8
	UW_StandardButton_C* RemoveMapButton; // 0x300
	UW_StandardButton_C* RestartBtn; // 0x308
	UTextBlock* ScoreboardHeader; // 0x310
	UTextBlock* TextBlock_1; // 0x318
	UTextBlock* TextBlock_2; // 0x320
	UTextBlock* TextBlock_3; // 0x328
	UW_AG_AvailableMapList_C* W_AG_AvailableMapList; // 0x330
	UW_AG_MapRotation_C* W_AG_MapRotation; // 0x338
	UUserWidget* OpenedFrom; // 0x340
	bool bHasPlayerStateInList; // 0x348
	bool bHasWidgetForRemovedPlayerStateInList; // 0x349
	APlayerState* KickingPlayerState; // 0x350
	FText KickReason; // 0x358
	int32_t IdxMinusOne; // 0x370
};

struct UParticleModuleParameterDynamic_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x48
};

struct UExporter {
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

struct UMaterialExpressionSetMaterialAttributes {
	TArray<FExpressionInput> Inputs; // 0x40
	TArray<FGuid> AttributeSetTypes; // 0x50
};

struct UTestMovieSceneTrack {
	bool bHighPassFilter; // 0x98
	TArray<UMovieSceneSection*> SectionArray; // 0xa0
};

struct UPanelSlot {
	UPanelWidget* Parent; // 0x28
	UWidget* Content; // 0x30
};

struct USoundNodeDoppler {
	float DopplerIntensity; // 0x48
	bool bUseSmoothing; // 0x4c
	float SmoothingInterpSpeed; // 0x50
};

struct UBTComposite_SimpleParallel {
	EBTParallelMode FinishMode; // 0x90
};

struct UEnvQueryGenerator_PathingGrid {
	FAIDataProviderBoolValue PathToItem; // 0xf8
	UNavigationQueryFilter* NavigationFilter; // 0x130
	FAIDataProviderFloatValue ScanRangeMultiplier; // 0x138
};

struct UARSaveWorldAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct UARLifeCycleComponent {
	FMulticastInlineDelegate OnARActorSpawnedDelegate; // 0x1f8
	FMulticastInlineDelegate OnARActorToBeDestroyedDelegate; // 0x208
};

struct UBP_UI_PlanningMap_SpawnPoint_C {
	FSpawnPoints SpawnPointInfo; // 0x200
};

struct UFriendsList_Entry_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Avatar; // 0x268
	UW_Button_C* btn_Join; // 0x270
	UTextBlock* Status; // 0x278
	UTextBlock* TextBlock_1; // 0x280
	UVerticalBox* VerticalBox_2; // 0x288
	FFriend Friend; // 0x290
	bool bFoundLobby; // 0x2f0
	FBlueprintSessionResult FriendSession; // 0x2f8
	FText StatusText; // 0x400
	TArray<AReadyOrNotGameMode*> Modes; // 0x418
	AReadyOrNotGameMode* PlayingMode; // 0x428
	float TimeUntilNextRefresh; // 0x430
};

struct UW_VotePopUp_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image; // 0x268
	UImage* Image_186; // 0x270
	UHorizontalBox* NoVote_Box; // 0x278
	USizeBox* NoVoteDivider_Box; // 0x280
	UTextBlock* NoVoteScore_Text; // 0x288
	UVerticalBox* RootBox; // 0x290
	UTextBlock* TextBlock_5; // 0x298
	UTextBlock* TextBlock_8; // 0x2a0
	UTextBlock* TextBlock_10; // 0x2a8
	UTextBlock* TextBlock_12; // 0x2b0
	UTextBlock* TextBlock_170; // 0x2b8
	int32_t VoteState; // 0x2c0
	FText Current Vote Reason; // 0x2c8
	bool VoteEnabled; // 0x2e0
	int32_t Yes Votes; // 0x2e4
	int32_t No Votes; // 0x2e8
	bool Vote_No_Enabled; // 0x2ec
	bool WidgetActive; // 0x2ed
	FText CurrentVoteQuestion; // 0x2f0
};

struct UMovieSceneByteTrack {
	UEnum* Enum; // 0xc0
};

struct UW_EquipTeamMateCategory_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278
	UWidgetAnimation* Anim_ButtonPressed; // 0x280
	UW_Button_C* btn_Button; // 0x288
	UOverlay* CategoryExpander_Overlay; // 0x290
	UVerticalBox* MainContainer; // 0x298
	FMulticastInlineDelegate OnButtonClicked; // 0x2a0
	FMulticastInlineDelegate OnButtonHovered; // 0x2b0
	FMulticastInlineDelegate OnButtonUnhovered; // 0x2c0
	FMulticastInlineDelegate OnLoadoutItemButtonClicked; // 0x2d0
	float ExpandCollapseDelayTimeRemaining; // 0x2e0
	EEquippingSwat EquipSwat; // 0x2e4
	bool bSelected; // 0x2e5
};

struct UNiagaraPreviewAxis_InterpParamBase {
	FName Param; // 0x28
	int32_t Count; // 0x30
};

struct UMediaTimeStampInfo {
	FTimespan Time; // 0x28
	int64_t SequenceIndex; // 0x30
};

struct UDatasmithPostProcessVolumeTemplate {
	FDatasmithPostProcessSettingsTemplate Settings; // 0x30
	char bEnabled : 1; // 0x70
	char bUnbound : 1; // 0x70
};

struct USoundWave {
	int32_t CompressionQuality; // 0x170
	int32_t StreamingPriority; // 0x174
	ESoundwaveSampleRateSettings SampleRateQuality; // 0x178
	ESoundGroup SoundGroup; // 0x17a
	char bLooping : 1; // 0x17b
	char bStreaming : 1; // 0x17b
	char bSeekableStreaming : 1; // 0x17b
	ESoundWaveLoadingBehavior LoadingBehavior; // 0x17c
	char bMature : 1; // 0x17d
	char bManualWordWrap : 1; // 0x17d
	char bSingleLine : 1; // 0x17e
	char bIsAmbisonics : 1; // 0x17e
	FSoundModulationDefaultRoutingSettings ModulationSettings; // 0x180
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

struct UPlayerEffect_ModifyRecoil {
	ERecoilModifierOption ModificationOption; // 0x60
	TArray<EItemClass> WeaponFilter; // 0x68
	float RecoilFireStrength; // 0x78
	float RecoilFireStrengthFirst; // 0x7c
	float RecoilDampStrength; // 0x80
	float RecoilAngleStrength; // 0x84
	float RecoilRandomness; // 0x88
	float RecoilFireADSModifier; // 0x8c
	float RecoilBuildupADSModifier; // 0x90
	float RecoilAngleADSModifier; // 0x94
	float RecoilBuildupDampStrength; // 0x98
	char bApplySpecific : 1; // 0x9c
	TArray<FSpecificWeaponRecoilMod> SpecificWeaponRecoilMods; // 0xa0
	TMap<ABaseMagazineWeapon*, FSpecificWeaponRecoilMod> OriginalRecoilValues; // 0xb0
	TArray<ABaseMagazineWeapon*> AffectedWeapons; // 0x100
};

struct UMultiLineEditableText {
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

struct UTextLipSync {
	TMap<EPhoneme, FName> MorphTargetsMap; // 0xb0
	TMap<FName, FLipSync_MorphPreset> CompositePhonemeTargetsMap; // 0x100
	TMap<FName, FLipSync_MorphPreset> EmotionTags; // 0x150
	float PauseFadeTime; // 0x1a0
	float PhonemeFadeTime; // 0x1a4
	float MorphLowerLimit; // 0x1a8
	float MorphUpperLimit; // 0x1ac
	float AudioMinTreshold; // 0x1b0
	float PauseMultiplier; // 0x1b4
	float DefaultOffsetFromDurationEnd; // 0x1b8
	float DelayAtSentenceEnd; // 0x1bc
	float DelayAtComma; // 0x1c0
	float EnvelopeMultiplier; // 0x1c4
	float MinimumPhonemesInterval; // 0x1c8
	float EmotionBlendTime; // 0x1cc
	float ShortEmotionHalfDuration; // 0x1d0
	bool bRealtimeTimingCorrection; // 0x1d4
	bool bUseSubtitlesCacheSystem; // 0x1d5
	bool bUsePhrasesTableSystem; // 0x1d6
	bool bUseCompositeMorphTargets; // 0x1d7
	ELipSyncAnimType AnimationType; // 0x1d8
	FMulticastInlineDelegate OnNotifyExecuted; // 0x1e0
	FMulticastInlineDelegate OnPlayingFinished; // 0x1f0
	FMulticastInlineDelegate OnSpeakingPause; // 0x200
	FMulticastInlineDelegate OnTimelineChanged; // 0x210
	UAudioComponent* Speaker; // 0x220
	USkeletalMeshComponent* ControlledMesh; // 0x228
	USoundBase* CurrentSound; // 0x230
	FName MorphTargets[0x11]; // 0x238
	TMap<FName, float> MorphTargetRuntimeValue; // 0x2c0
	TSet<FName> MorphTargetsList; // 0x310
	UPhrasesList* PhrasesList; // 0x360
	USubtitlesCache* SubtitlesCache; // 0x368
	bool bIsInitialized; // 0x370
	bool bIsSpeaking; // 0x371
	bool bIsSpeakingPhonemeInAudio; // 0x372
	bool bSubtitleWasChanged; // 0x373
	bool bSubtitleWasLoadedFromCache; // 0x374
	float PauseTime; // 0x378
	float CurrentTime; // 0x37c
	float EnvelopeVolumeMultiplier; // 0x380
	float PhraseDuration; // 0x384
	int32_t NextPhonemeIndex; // 0x388
	int32_t PrevPhonemeIndex; // 0x38c
	int32_t NextNotifyIndex; // 0x390
	TArray<FLipSync_TimedPhrase> PhraseData; // 0x398
	TArray<int32_t> PauseIndexes; // 0x3a8
	TArray<FLipSync_TimedPhrase> PhraseNotifies; // 0x3b8
	float CurrentIntervalDuration; // 0x3c8
	bool bTrial; // 0x3cc
	int32_t TrialMonth; // 0x3d0
	int32_t TrialYear; // 0x3d4
	TMap<FName, char> Emotion2Flag; // 0x3d8
	TMap<char, FName> Flag2Emotion; // 0x428
	TMap<char, float> ActiveEmotions; // 0x478
};

struct UW_IllegalUnbindModal_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x360
};

struct UEnvQueryTest_Distance {
	EEnvTestDistance TestMode; // 0x1f8
	UEnvQueryContext* DistanceTo; // 0x200
};

struct UParticleModuleAccelerationConstant {
	FVector Acceleration; // 0x38
};

struct UAssetManager {
	TArray<UObject*> ObjectReferenceList; // 0x2e0
	bool bIsGlobalAsyncScanEnvironment; // 0x2f0
	bool bShouldGuessTypeAndName; // 0x2f1
	bool bShouldUseSynchronousLoad; // 0x2f2
	bool bIsLoadingFromPakFiles; // 0x2f3
	bool bShouldAcquireMissingChunksOnLoad; // 0x2f4
	bool bOnlyCookProductionAssets; // 0x2f5
	bool bIsBulkScanning; // 0x2f6
	bool bIsPrimaryAssetDirectoryCurrent; // 0x2f7
	bool bIsManagementDatabaseCurrent; // 0x2f8
	bool bUpdateManagementDatabaseAfterScan; // 0x2f9
	bool bIncludeOnlyOnDiskAssets; // 0x2fa
	bool bHasCompletedInitialScan; // 0x2fb
	int32_t NumberOfSpawnedNotifications; // 0x2fc
};

struct USoundMix {
	char bApplyEQ : 1; // 0x28
	float EQPriority; // 0x2c
	FAudioEQEffect EQSettings; // 0x30
	TArray<FSoundClassAdjuster> SoundClassEffects; // 0x70
	float InitialDelay; // 0x80
	float FadeInTime; // 0x84
	float Duration; // 0x88
	float FadeOutTime; // 0x8c
};

struct APingActor {
	AActor* PingedActor; // 0x220
	FSlateBrush IconBrush; // 0x228
	FText PingText; // 0x2b0
	UObjectiveMarkerComponent* ObjectiveMarkerComponent; // 0x2c8
	UMapActorComponent* MapActorComponent; // 0x2d0
};

struct ULevelSequenceBurnInOptions {
	bool bUseBurnIn; // 0x28
	FSoftClassPath BurnInClass; // 0x30
	ULevelSequenceBurnInInitSettings* Settings; // 0x48
};

struct AQuadrotor {
	USkeletalMeshComponent* ViewfinderMesh; // 0x8f8
	USceneCaptureComponent2D* SceneCapture2D; // 0x900
	UTextureRenderTarget2D* RenderTarget; // 0x908
	bool bToggleDroneControl; // 0x910
	UMaterial* DefaultViewfinderMaterial; // 0x918
	UMaterialInstanceDynamic* ViewfinderScreenMaterial; // 0x920
	FVector2D LocalPlayerCaptureResolution; // 0x928
	FVector2D SimulatedPlayerCaptureResolution; // 0x930
	FName ViewfinderSocket_Hands; // 0x940
	FName ViewfinderSocket_Body; // 0x948
	UAnimMontage* ThrowDrone_1P; // 0x950
	UAnimMontage* ThrowDrone_3P; // 0x958
	AQuadrotorPawn* DronePawnClass; // 0x960
	AQuadrotorPawn* SpawnedDrone; // 0x968
};

struct UDISP_Port_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* FadeOutText; // 0x268
	UWidgetAnimation* FadeInText; // 0x270
};

struct UANIMBP_Stinger_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8
};

struct UEnvQueryTest_Dot {
	FEnvDirection LineA; // 0x1f8
	FEnvDirection LineB; // 0x218
	EEnvTestDot TestMode; // 0x238
	bool bAbsoluteValue; // 0x239
};

struct UQuitMatchCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UBTTask_RunEQSQuery {
	UEnvQuery* QueryTemplate; // 0x98
	TArray<FEnvNamedValue> QueryParams; // 0xa0
	TArray<FAIDynamicParam> QueryConfig; // 0xb0
	EEnvQueryRunMode RunMode; // 0xc0
	FBlackboardKeySelector EQSQueryBlackboardKey; // 0xc8
	bool bUseBBKey; // 0xf0
	FEQSParametrizedQueryExecutionRequest EQSRequest; // 0xf8
};

struct UImgMediaSource {
	bool IsPathRelativeToProjectRoot; // 0x88
	FFrameRate FrameRateOverride; // 0x8c
	FString ProxyOverride; // 0x98
	FDirectoryPath SequencePath; // 0xa8
};

struct UMovementComponent {
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

struct UMaterialExpressionAntialiasedTextureMask {
	float Threshold; // 0x80
	ETextureColorChannel Channel; // 0x84
};

struct USceneComponent {
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

struct UDoorSound {
	UFMODEvent* DoorClosed; // 0x30
	UFMODEvent* DoorOpened; // 0x38
	UFMODEvent* DoorStartManipulation; // 0x40
	UFMODEvent* DoorStopManipulation; // 0x48
	UFMODEvent* BrokenByC2; // 0x50
	UFMODEvent* BrokenByRam; // 0x58
	UFMODEvent* BrokenByShotgun; // 0x60
	UFMODEvent* KickedDown; // 0x68
	UFMODEvent* KickedDownFailed; // 0x70
	UFMODEvent* KickedDownBreak; // 0x78
};

struct USpawnStaticMeshAnimNotifyState {
	UStaticMesh* StaticMeshToSpawn; // 0x30
	FName BoneToSpawnOn; // 0x38
	bool bOnlyOwnerSee; // 0x50
	bool bOwnerNoSee; // 0x51
	bool bDestroyAtEnd; // 0x52
	bool bSimulatePhysicsAtEnd; // 0x53
	FVector ForceVector; // 0x54
};

struct USourceEffectBitCrusherPreset {
	FSourceEffectBitCrusherSettings Settings; // 0xc0
};

struct UTakeCoverActivity {
	int32_t MaxCoverFireCount; // 0x1a8
	float CoverFireTimeCooldown; // 0x1ac
	float CoverFireWaitTimeCooldown; // 0x1b0
	AFirePointActor* CoverFireActor; // 0x1b8
	AReadyOrNotCharacter* InstigatorEnemy; // 0x1c0
};

struct UDatasmithImportOptions {
	EDatasmithImportSearchPackagePolicy SearchPackagePolicy; // 0x28
	EDatasmithImportAssetConflictPolicy MaterialConflictPolicy; // 0x29
	EDatasmithImportAssetConflictPolicy TextureConflictPolicy; // 0x2a
	EDatasmithImportActorPolicy StaticMeshActorImportPolicy; // 0x2b
	EDatasmithImportActorPolicy LightImportPolicy; // 0x2c
	EDatasmithImportActorPolicy CameraImportPolicy; // 0x2d
	EDatasmithImportActorPolicy OtherActorImportPolicy; // 0x2e
	EDatasmithImportMaterialQuality MaterialQuality; // 0x2f
	FDatasmithImportBaseOptions BaseOptions; // 0x30
	FDatasmithReimportOptions ReimportOptions; // 0x44
	FString Filename; // 0x48
	FString FilePath; // 0x58
};

struct ULightAttachment {
	USpotLightComponent* SpotLightComponent; // 0xf98
	UPointLightComponent* PointLightComponent; // 0xfa0
	float Intensity; // 0xfac
	float InnerConeAngle; // 0xfb0
	float OuterConeAngle; // 0xfb4
	FLinearColor LightColor; // 0xfb8
	UTextureLightProfile* IESProfile; // 0xfc8
	float Attenuation; // 0xfd0
	ALensFlare* LensFlareClass; // 0xfd8
	ALensFlare* SpawnedLensFlare; // 0xfe0
	int32_t NumOfFlashLightTrackingPoints; // 0xfe8
	TArray<AFlashLightTrackingPoint*> FlashLightTrackingPoints; // 0xff0
	bool bLightOffDueToNotBeingEquipped; // 0x1070
};

struct UConstantQNRT {
	UConstantQNRTSettings* Settings; // 0x78
};

struct ASecondary_P250_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1130
};

struct USimpleConstructionScript {
	TArray<USCS_Node*> RootNodes; // 0x28
	TArray<USCS_Node*> AllNodes; // 0x38
	USCS_Node* DefaultSceneRootNode; // 0x48
};

struct UBulletImpactDebugText_C {
	UTextBlock* Text; // 0x260
	int32_t ID; // 0x268
};

struct USourceEffectDynamicsProcessorPreset {
	FSourceEffectDynamicsProcessorSettings Settings; // 0xb8
};

struct AGM_Incrimination_C {
	USceneComponent* DefaultSceneRoot; // 0x6f0
};

struct UPawnAction_Sequence {
	TArray<UPawnAction*> ActionSequence; // 0x90
	EPawnActionFailHandling ChildFailureHandlingMode; // 0xa0
	UPawnAction* RecentActionCopy; // 0xa8
};

struct USkinnedMeshComponent {
	USkeletalMesh* SkeletalMesh; // 0x480
	TWeakObjectPtr<USkinnedMeshComponent> MasterPoseComponent; // 0x488
	TArray<ESkinCacheUsage> SkinCacheUsage; // 0x490
	TArray<FVertexOffsetUsage> VertexOffsetUsage; // 0x4a0
	UPhysicsAsset* PhysicsAssetOverride; // 0x5a8
	int32_t ForcedLodModel; // 0x5b0
	int32_t MinLodModel; // 0x5b4
	float StreamingDistanceMultiplier; // 0x5c0
	TArray<FSkelMeshComponentLODInfo> LODInfo; // 0x5d0
	EVisibilityBasedAnimTickOption VisibilityBasedAnimTickOption; // 0x604
	char bOverrideMinLod : 1; // 0x606
	char bUseBoundsFromMasterPoseComponent : 1; // 0x606
	char bForceWireframe : 1; // 0x606
	char bDisplayBones : 1; // 0x606
	char bDisableMorphTarget : 1; // 0x606
	char bHideSkin : 1; // 0x607
	char bPerBoneMotionBlur : 1; // 0x607
	char bComponentUseFixedSkelBounds : 1; // 0x607
	char bConsiderAllBodiesForBounds : 1; // 0x607
	char bSyncAttachParentLOD : 1; // 0x607
	char bCanHighlightSelectedSections : 1; // 0x607
	char bRecentlyRendered : 1; // 0x607
	char bCastCapsuleDirectShadow : 1; // 0x607
	char bCastCapsuleIndirectShadow : 1; // 0x608
	char bCPUSkinning : 1; // 0x608
	char bEnableUpdateRateOptimizations : 1; // 0x608
	char bDisplayDebugUpdateRateOptimizations : 1; // 0x608
	char bRenderStatic : 1; // 0x608
	char bIgnoreMasterPoseComponentLOD : 1; // 0x608
	char bCachedLocalBoundsUpToDate : 1; // 0x609
	char bForceMeshObjectUpdate : 1; // 0x609
	float CapsuleIndirectShadowMinVisibility; // 0x60c
	FBoxSphereBounds CachedWorldSpaceBounds; // 0x620
	FMatrix CachedWorldToLocalTransform; // 0x640
};

struct UMaterialInstanceConstant {
	UPhysicalMaterialMask* PhysMaterialMask; // 0x310
};

struct ASecondary_USP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1130
};

struct ACuttableCableActor {
	bool bCableCut; // 0x220
	float CableSnapLength; // 0x224
	bool bCablePullInsteadOfCutting; // 0x228
	USceneComponent* SceneRoot; // 0x230
	UCableComponent* SubCable1; // 0x238
	UCableComponent* SubCable2; // 0x240
	UCableComponent* WholeCable; // 0x248
};

struct ULoudnessNRTSettings {
	float AnalysisPeriod; // 0x28
	float MinimumFrequency; // 0x2c
	float MaximumFrequency; // 0x30
	ELoudnessNRTCurveTypeEnum CurveType; // 0x34
	float NoiseFloorDb; // 0x38
};

struct UAdvancedFriendsGameInstance {
	bool bCallFriendInterfaceEventsOnPlayerControllers; // 0x1a8
	bool bCallIdentityInterfaceEventsOnPlayerControllers; // 0x1a9
	bool bCallVoiceInterfaceEventsOnPlayerControllers; // 0x1aa
	bool bEnableTalkingStatusDelegate; // 0x1ab
};

struct USubsurfaceProfile {
	FSubsurfaceProfileStruct Settings; // 0x28
};

struct UMovieSceneEnumTrack {
	UEnum* Enum; // 0xc0
};

struct USuspectCombatActivity {
	ACyberneticCharacter* GroupLeader; // 0x258
};

struct USoundSubmixBase {
	TArray<USoundSubmixBase*> ChildSubmixes; // 0x28
};

struct UMoveAndClearQuestNode {
	int32_t SWATNeededToPass; // 0x270
	AReadyOrNotTriggerVolume* ClearTriggerVolume; // 0x278
	TSet<ASWATCharacter*> SWATCleared; // 0x280
};

struct ASearchAndDestroyGM {
	bool bBombPlanted; // 0x6d8
	int32_t NumRedSpawned; // 0x6dc
	int32_t NumBlueSpawned; // 0x6e0
};

struct UMovieSceneBuiltInEasingFunction {
	EMovieSceneBuiltInEasing Type; // 0x30
};

struct UParticleModuleLocationPrimitiveSphere_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xe0
};

struct ULevelSequenceAnimSequenceLink {
	TArray<FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks; // 0x28
};

struct ANotifyingRecastNavMesh {
	char bDrawCoverData : 1; // 0x4d8
	char bDrawEdge : 1; // 0x4d8
	char bDrawCoverTest : 1; // 0x4d8
	char bDrawCoverPoints : 1; // 0x4d8
	char bDrawCameraTest : 1; // 0x4d8
	char bDrawCoverOctree : 1; // 0x4d8
	char bLogNearestTiles : 1; // 0x4d8
	float MinRange; // 0x4dc
	float MaxRange; // 0x4e0
	int32_t MinCoverPointsPerEdge; // 0x4e4
	int32_t MaxCoverPointsPerEdge; // 0x4e8
};

struct UMaterialExpressionRotateAboutAxis {
	FExpressionInput NormalizedRotationAxis; // 0x40
	FExpressionInput RotationAngle; // 0x54
	FExpressionInput PivotPoint; // 0x68
	FExpressionInput Position; // 0x7c
	float Period; // 0x90
};

struct APrimary_M4A1_D_Temp_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1130
};

struct UGizmoComponentWorldTransformSource {
	USceneComponent* Component; // 0x48
	bool bModifyComponentOnTransform; // 0x50
};

struct USphereReflectionCaptureComponent {
	float InfluenceRadius; // 0x270
	float CaptureDistanceScale; // 0x274
	UDrawSphereComponent* PreviewInfluenceRadius; // 0x278
};

struct AVIPEscortGS {
	float HoldVIP_TimeRemaining; // 0x6c0
	bool bVIPArrested; // 0x6c4
	bool bCanKillVIP; // 0x6c5
	APlayerCharacter* VIPCharacter; // 0x6c8
	APlayerController* VIPPlayer; // 0x6d0
	AReadyOrNotPlayerState* VIPPlayerState; // 0x6d8
	ETeamType LastWinningTeam; // 0x6e0
	bool bVIPSelected; // 0x6e1
	bool bVIPKilled; // 0x6e2
	ETeamType CurrentVIPTeam; // 0x6e3
	AReadyOrNotCharacter* RecentArrester; // 0x6e8
	AReadyOrNotCharacter* RecentFreer; // 0x6f0
	AReadyOrNotCharacter* RecentVIPKiller; // 0x6f8
	FText VIPRescueText; // 0x700
	FText VIPExecuteText; // 0x718
};

struct AGameSession {
	int32_t MaxSpectators; // 0x220
	int32_t MaxPlayers; // 0x224
	int32_t MaxPartySize; // 0x228
	char MaxSplitscreensPerConnection; // 0x22c
	bool bRequiresPushToTalk; // 0x22d
	FName SessionName; // 0x230
};

struct USizeBox {
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

struct UMaterialExpressionCeil {
	FExpressionInput Input; // 0x40
};

struct AASequenceInteraction {
	bool bAutoActivateInRange; // 0x2b8
	AActor* ReferencedCharacterViewTarget; // 0x2c0
	UBoxComponent* RadiusComp; // 0x2c8
	APlayerCharacter* LastPlayedSequencerCharacter; // 0x2d0
};

struct AKingOfTheHillGM {
	TArray<APlayerCharacter*> ArrestedBlueCharacters; // 0x6d8
	TArray<APlayerCharacter*> ArrestedRedCharacters; // 0x6e8
	UFMODEvent* TOWVictorySound; // 0x6f8
	UFMODEvent* MatchLoopMusic; // 0x700
	UFMODEvent* MatchStartMusic; // 0x708
	UFMODEvent* MatchEndMusic; // 0x710
};

struct UARTrackedGeometry {
	FGuid UniqueId; // 0x28
	FTransform LocalToTrackingTransform; // 0x40
	FTransform LocalToAlignedTrackingTransform; // 0x70
	EARTrackingState TrackingState; // 0xa0
	UMRMeshComponent* UnderlyingMesh; // 0xb0
	EARObjectClassification ObjectClassification; // 0xb8
	EARSpatialMeshUsageFlags SpatialMeshUsageFlags; // 0xb9
	int32_t LastUpdateFrameNumber; // 0xd0
	FName DebugName; // 0xe0
};

struct AProjectile_Taser_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x398
};

struct ABP_RoNBloodPool_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x228
	TArray<UMaterialInstance*> Materials; // 0x230
	int32_t RandomPick; // 0x240
	UMaterialInstanceDynamic* DynamicMaterialInstance; // 0x248
	float BloodExpansionRate; // 0x250
	float BloodExpansionCurrent; // 0x254
	bool bBleeding; // 0x258
};

struct UW_TacticalCommandAuthority_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280
	UVerticalBox* Command; // 0x288
	UTextBlock* DropTheGunText; // 0x290
	UTextBlock* HandsUpText; // 0x298
	UTextBlock* MoveOverThereText; // 0x2a0
	UTextBlock* ReportDeadText; // 0x2a8
	UTextBlock* ReportedArrestedText; // 0x2b0
	UTextBlock* ReportEvidence; // 0x2b8
	UTextBlock* ReportIncapacitated; // 0x2c0
	UVerticalBox* TAC; // 0x2c8
	UTextBlock* TextBlock_6; // 0x2d0
	UVerticalBox* TOC; // 0x2d8
	float TotalDeltaX; // 0x2e0
	float TotalDeltaY; // 0x2e4
};

struct UActivityManager {
	float GlobalStartDelay; // 0x28
};

struct ABaseGrenade {
	UPointLightComponent* DetonationLight; // 0x8f8
	URadialForceComponent* DetonationRadialForce; // 0x900
	UFMODAudioComponent* FMODBounceSoundComponent; // 0x908
	UAIPerceptionStimuliSourceComponent* DetonationStimuliComp; // 0x910
	float GrenadeBounciness; // 0x918
	bool bDetonationTriggersStimuli; // 0x91c
	float DetonationSoundMaxRange; // 0x920
	float DetonationLoudness; // 0x924
	FName DetonationTag; // 0x928
	FName ThrownTag; // 0x930
	AThrownGrenade* Thrown; // 0x940
	TArray<FVector> FirstBouncePath; // 0x948
	FHitResult FirstBounceHit; // 0x958
	TArray<FVector> SecondBouncePath; // 0x9e8
	FHitResult SecondBounceHit; // 0x9f8
	TArray<FVector> ThirdBouncePath; // 0xa88
	FHitResult ThirdBounceHit; // 0xa98
	TArray<FVector_NetQuantize> CompletePath; // 0xb28
	int32_t BouncePt1; // 0xb44
	int32_t BouncePt2; // 0xb48
	int32_t BouncePt3; // 0xb4c
	FString DeployGrenadeVoiceLine; // 0xb58
	float GrenadeSpeed; // 0xb68
	float BounceSoundMinImpulse; // 0xb74
	TArray<USoundBase*> BounceSoundEffects; // 0xb78
	UParticleSystemComponent* ActivationEffect; // 0xb88
	UParticleSystem* GrenadeBounceEffect; // 0xb90
	UFMODEvent* ActivationSound; // 0xb98
	float ActivationTime; // 0xba0
	float ActivationElapsedTime; // 0xba4
	bool bActivated; // 0xba8
	bool bPlayDetonationEffectsExactlyOnce; // 0xba9
	FVector Rep_InterpedPosition; // 0xbb8
	EDrawDebugTrace DrawDebugType; // 0xbc9
	bool bThrowAsQuickThrow; // 0xbca
	bool bFastThrowOnceEquipped; // 0xbcb
	bool bFastThrowing; // 0xbcc
	FVector_NetQuantize GrenadeLocation; // 0xbd0
	bool bGrenadeReleased; // 0xbdc
	bool bTriggersActionMusic; // 0xbe4
	bool bCanThrowGrenade; // 0xbe5
	float DetonationTime; // 0xbe8
	bool bIncreaseDamageRadiusOverTime; // 0xbec
	float UnderarmForceScale; // 0xbf4
	float Drag; // 0xbf8
	float DragAppliedPerBounce; // 0xbfc
	float DetonationFlashIntensitiy; // 0xc00
	float DetonationFlashInterp; // 0xc04
	float ReDetonationTime; // 0xc08
	bool bTriggerSFXOnRedetonate; // 0xc0c
	FVector Server_GrenadeLocation; // 0xc10
	float ThrowDistance; // 0xc1c
	float RedotonateCount; // 0xc20
	float ListenerTriggerDistance; // 0xc24
	FVector MaxRandomizedForceOnDetonation; // 0xc34
	FVector FixedForceOnDetonation; // 0xc40
	TArray<UParticleSystem*> DetonationParticles; // 0xc50
	TArray<UParticleSystemComponent*> SpawnedParticles; // 0xc60
	FRotator ParticleSpawnRotation; // 0xc70
	UFMODEvent* DetonationFMODEvent; // 0xc80
	USoundCue* DetonationEvent; // 0xc88
	bool bHideGrenadeOnDetonate; // 0xc90
	FMulticastInlineDelegate OnGrenadeDetonated; // 0xc98
	FMulticastInlineDelegate OnGrenadeThrown; // 0xca8
	float RedrawDelayAfterThrow; // 0xcb8
	bool bUsed; // 0xcbc
	TArray<FGrenadeDamage> DetonationDamage; // 0xcc8
	bool bUseScreenShake; // 0xcd8
	UMatineeCameraShake* ExplosionScreenShake; // 0xce0
	float CameraShakeRadius; // 0xce8
	bool bUseDetonationDecal; // 0xcec
	float DetonationDecalTraceDistance; // 0xcf0
	UMaterialInterface* DetonationDecal; // 0xcf8
	FVector DetonationDecalSize; // 0xd00
	AController* GrenadeThrowerInstigator; // 0xd10
	TArray<FName> HideBonesOnUsed; // 0xd18
	float BounceActivationRadius; // 0xd28
	UFMODEvent* FMODGrenadeBounce; // 0xd30
};

struct UBTTask_MakeNoise {
	float Loudnes; // 0x70
};

struct UCameraModifier {
	char bDebug : 1; // 0x28
	char bExclusive : 1; // 0x28
	char Priority; // 0x2c
	APlayerCameraManager* CameraOwner; // 0x30
	float AlphaInTime; // 0x38
	float AlphaOutTime; // 0x3c
	float Alpha; // 0x40
};

struct ABaseHostage_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2150
	APawn* FollowActor; // 0x2158
	TArray<ETeamType> CanFollowTeams; // 0x2160
	bool bMoving; // 0x2170
	float DefaultRunSpeed; // 0x2174
	bool Rescued; // 0x2178
	bool bStartSurrendered; // 0x2179
};

struct UParticleModuleEventReceiverSpawn {
	FRawDistributionFloat SpawnCount; // 0x40
	char bUseParticleTime : 1; // 0x70
	char bUsePSysLocation : 1; // 0x70
	char bInheritVelocity : 1; // 0x70
	FRawDistributionVector InheritVelocityScale; // 0x78
	TArray<UPhysicalMaterial*> PhysicalMaterials; // 0xc0
	char bBanPhysicalMaterials : 1; // 0xd0
};

struct UTreeView {
	FDelegate BP_OnGetItemChildren; // 0x378
	FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0x388
};

struct UMovieSceneMediaSection {
	UMediaSource* MediaSource; // 0xe8
	bool bLooping; // 0xf0
	FFrameNumber StartFrameOffset; // 0xf4
	UMediaTexture* MediaTexture; // 0xf8
	UMediaSoundComponent* MediaSoundComponent; // 0x100
	bool bUseExternalMediaPlayer; // 0x108
	UMediaPlayer* ExternalMediaPlayer; // 0x110
};

struct UParticleModuleKillHeight {
	FRawDistributionFloat Height; // 0x30
	char bAbsolute : 1; // 0x60
	char bFloor : 1; // 0x60
	char bApplyPSysScale : 1; // 0x60
};

struct UOperatorField {
	float Magnitude; // 0xb0
	UFieldNodeBase* RightField; // 0xb8
	UFieldNodeBase* LeftField; // 0xc0
	EFieldOperationType Operation; // 0xc8
};

struct UMovieSceneMaterialTrack {
	TArray<UMovieSceneSection*> Sections; // 0x90
};

struct ASecondary_Python_V2_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1130
	int32_t BarrelIndex; // 0x1138
	TArray<UAnimMontage*> FireMontagesEmpty; // 0x1140
	TArray<UAnimMontage*> FireMontages; // 0x1150
	bool bCocked; // 0x1160
};

struct URoNAnimInstance_PlayerTP {
	FReadyOrNotAnimInstanceProxyTP Proxy; // 0x520
	UReadyOrNotWeaponAnimData* LastAnimWeaponData; // 0xc90
	UReadyOrNotWeaponAnimData* EditorWeaponAnimData; // 0xc98
	bool bWeaponDown; // 0xca0
	bool bIsAiming; // 0xca1
	bool bIsShieldEquipped; // 0xca2
	float AimingAlpha; // 0xca4
	bool bLeanLeft; // 0xca8
	bool bLeanRight; // 0xca9
	float QuickLeanLeftAmount; // 0xcac
	float QuickLeanRightAmount; // 0xcb0
	float QuickLeanLeftAlpha; // 0xcb4
	float QuickLeanRightAlpha; // 0xcb8
	float QuickLeanIntensity; // 0xcbc
	float FootIKValue; // 0xcc0
	float FootIKAlpha; // 0xcc4
	bool bArrested; // 0xcc8
	bool bIsDead; // 0xcc9
	bool bDeathAnimEnd; // 0xcca
	bool bStunned; // 0xccb
	bool bTased; // 0xccc
	bool bOnLadder; // 0xccd
	float LadderUpDownMovement; // 0xcd0
	float LeanAngleY; // 0xcd4
	float LeanAngleZ; // 0xcd8
	bool bCoverLeft; // 0xcdc
	bool bCoverRight; // 0xcdd
	bool bCoverMiddle; // 0xcde
	bool bCoverLeftLow; // 0xcdf
	bool bCoverRightLow; // 0xce0
	bool bCoverPeek; // 0xce1
	float AimOffsetAlpha; // 0xce4
	FVector2D AimOffsets; // 0xcec
	bool bJumpStartTrigger; // 0xd0c
	float SmoothMappedLeanToAnimStandLeft; // 0xd10
	float SmoothMappedLeanToAnimStandRight; // 0xd14
	float SmoothMappedLeanToAnimCrouchLeft; // 0xd18
	float SmoothMappedLeanToAnimCrouchRight; // 0xd1c
	float Speed_tp_rifle_stand_sprint_f; // 0xd20
	UAnimSequenceBase* Crouch_Idle_Pose_Low_TP; // 0xd28
	UAnimSequenceBase* Crouch_Idle_Pose_Up_TP; // 0xd30
	UAnimSequenceBase* Crouch_Idle_Pose_Shld_TP; // 0xd38
	UAnimSequenceBase* Crouch_Idle_Pose_Sights_TP; // 0xd40
	UAnimSequenceBase* Crouch_Idle_Pose_Ret_TP; // 0xd48
	UAnimSequenceBase* Crouch_Idle_Pose_Ovr_TP; // 0xd50
	UAnimSequenceBase* Idle_Pose_Low_TP; // 0xd58
	UAnimSequenceBase* Idle_Pose_Up_TP; // 0xd60
	UAnimSequenceBase* Idle_Pose_Shld_TP; // 0xd68
	UAnimSequenceBase* Idle_Pose_Sights_TP; // 0xd70
	UAnimSequenceBase* Idle_Pose_Ret_TP; // 0xd78
	UAnimSequenceBase* Idle_Pose_Ovr_TP; // 0xd80
	bool bLeaningLeftNotCrouching; // 0xd88
	bool bNotLeaningLeftOrCrouching; // 0xd89
	bool bNotLeaningLeftOrNotCrouching; // 0xd8a
	bool bLeaningRightNotCrouching; // 0xd8b
	bool bNotLeaningRightOrCrouching; // 0xd8c
	bool bNotLeaningRightOrNotCrouching; // 0xd8d
	bool bCrouchingAndMoving; // 0xd8e
	bool bNotCrouchingAndMoving; // 0xd8f
	bool bAimingAndNotDeployable; // 0xd90
	float WalkSpeedForward; // 0xd94
	float WalkSpeedLeft; // 0xd98
	float WalkSpeedRight; // 0xd9c
	float WalkSpeedBackward; // 0xda0
	float CrouchWalkSpeedForward; // 0xda4
	float CrouchWalkSpeedLeft; // 0xda8
	float CrouchWalkSpeedRight; // 0xdac
	float CrouchWalkSpeedBackward; // 0xdb0
	float RunSpeedForward; // 0xdb4
	float RunSpeedLeft; // 0xdb8
	float RunSpeedRight; // 0xdbc
	float RunSpeedBackward; // 0xdc0
	bool bLessThanPointOneSecondOnRelevantAnim; // 0xdc4
	bool bIsInCombatOrAlerted; // 0xdc5
	bool bMoving; // 0xdc6
	bool bIsAlerted; // 0xdc7
	float AlertAlpha; // 0xdc8
	bool bIsInCombat; // 0xdcc
	bool bIsSurrendering; // 0xdcd
	bool bSprayed; // 0xdce
	bool bStung; // 0xdcf
	EWeaponType CurWeaponType; // 0xdd0
	EPseudoSpeedType CurPseudoSpeed; // 0xdd1
	bool bFemale; // 0xdd2
	bool bChild; // 0xdd3
	bool bHasInjury; // 0xdd4
	float AnimSpeedFwdPlayrateSync; // 0xdd8
	float AnimSpeedSidePlayrateSync; // 0xddc
	float RetentionAlpha; // 0xde0
	float LoweredAlpha; // 0xde4
	float SightAlpha; // 0xdf0
	float LoweredCooldownTime; // 0xdf4
	bool IsLoweredUp; // 0xdf8
	float ArmsOnlySlotAlpha; // 0xe0c
	float LeftArmOnlySlotAlpha; // 0xe10
};

struct UBulletImpactDebug_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* DebugTItle; // 0x268
	UVerticalBox* DetailsArea; // 0x270
	int32_t LastUsedID; // 0x278
};

struct UW_TutorialMissionButton_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x570
	FTutorialMissionData TutorialData; // 0x578
};

struct UMirrorUnderDoorActivity {
	EMirrorContactType MirrorContactType; // 0x1c8
	TArray<AAICharacter*> SpottedCharacters; // 0x1d0
};

struct USpawnSkeletalMeshAnimNotifyState {
	USkeletalMesh* SkeletalMeshToSpawn; // 0x30
	UAnimationAsset* PlayAnimation; // 0x38
	FTransform MeshTransform; // 0x40
	bool bEnableWeaponFOVShader; // 0x70
	bool bOnlyOwnerSee; // 0x71
	bool bOwnerNoSee; // 0x72
	FName BoneToSpawnOn; // 0x74
	bool bDestroyAtEnd; // 0x8c
	bool bSimulatePhysicsAtEnd; // 0x8d
	FVector ForceVector; // 0x90
	ASkeletalMeshActor* SkeletalMeshActor; // 0xa0
};

struct UStaticMeshSocket {
	FName SocketName; // 0x28
	FVector RelativeLocation; // 0x30
	FRotator RelativeRotation; // 0x3c
	FVector RelativeScale; // 0x48
	FString Tag; // 0x58
};

struct UTextureRenderTarget2DArray {
	int32_t SizeX; // 0x180
	int32_t SizeY; // 0x184
	int32_t Slices; // 0x188
	FLinearColor ClearColor; // 0x18c
	EPixelFormat OverrideFormat; // 0x19c
	char bHDR : 1; // 0x19d
	char bForceLinearGamma : 1; // 0x19d
};

struct ULandscapeGrassType {
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

struct UNiagaraDataInterfaceGrid3DCollection {
	int32_t NumAttributes; // 0x100
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x108
	ENiagaraGpuBufferFormat OverrideBufferFormat; // 0x128
	char bOverrideFormat : 1; // 0x129
};

struct UMaterialExpressionArcsine {
	FExpressionInput Input; // 0x40
};

struct UMaterialExpressionFunctionOutput {
	FName OutputName; // 0x40
	FString Description; // 0x48
	int32_t SortPriority; // 0x58
	FExpressionInput A; // 0x5c
	char bLastPreviewed : 1; // 0x70
	FGuid ID; // 0x74
};

struct USoundNodeAttenuation {
	USoundAttenuation* AttenuationSettings; // 0x48
	FSoundAttenuationSettings AttenuationOverrides; // 0x50
	char bOverrideAttenuation : 1; // 0x3f0
};

struct APrimary_S590_Assault_v2_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1190
	UPointLightComponent* PointLight; // 0x1198
	USpotLightComponent* PointLight1; // 0x11a0
	UAnimMontage* LightToggle1P; // 0x11a8
};

struct ARicochetImpactEffects_C {
	USceneComponent* DefaultSceneRoot; // 0xcb0
};

struct ATugOfWarGM {
	TArray<APlayerCharacter*> ArrestedBlueCharacters; // 0x6d8
	TArray<APlayerCharacter*> ArrestedRedCharacters; // 0x6e8
	UFMODEvent* TOWVictorySound; // 0x6f8
	UFMODEvent* MatchLoopMusic; // 0x700
	UFMODEvent* MatchStartMusic; // 0x708
	UFMODEvent* MatchEndMusic; // 0x710
};

struct UGE_PlayerNerf_IncreaseRecoil_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x110
};

struct UParticleModuleRotationRate {
	FRawDistributionFloat StartRotationRate; // 0x30
};

struct ALevelSequenceMediaController {
	ALevelSequenceActor* Sequence; // 0x228
	UMediaComponent* MediaComponent; // 0x230
	float ServerStartTimeSeconds; // 0x238
};

struct UAtmosphericFogComponent {
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

struct UShadowMapTexture2D {
	EShadowMapFlags ShadowmapFlags; // 0x1a0
};

struct UNavLinkCustomComponent {
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

struct UParticleModuleLight_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x120
};

struct AScenarioCoverActivator {
	AScenarioGenerator* ScenarioGenerator; // 0x258
};

struct UAsyncActionLoadPrimaryAssetList {
	FMulticastInlineDelegate Completed; // 0x78
};

struct USoundNodeParamCrossFade {
	FName paramName; // 0x58
};

struct UBoxFalloff {
	float Magnitude; // 0xb0
	float MinRange; // 0xb4
	float MaxRange; // 0xb8
	float Default; // 0xbc
	FTransform Transform; // 0xc0
	EFieldFalloffType Falloff; // 0xf0
};

struct ABP_LenFlare_RoadFlare_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UMaterialBillboardComponent* LensFlare; // 0x228
	USceneComponent* Scene; // 0x230
	float DeltaTime; // 0x238
	UMaterialInstanceDynamic* FlareDynamicMI; // 0x240
	UMaterialInterface* FlareMat; // 0x248
	float GlobalBrightness; // 0x250
	float GhostsBrightness; // 0x254
	bool UseFadeDistance; // 0x258
	float FadeDistance; // 0x25c
	bool UseDistanceBloom; // 0x260
	float IncreasingBloomByDistance; // 0x264
	FLinearColor GlobalColor; // 0x268
	float FadeOutSpeed; // 0x278
	float FadeInSpeed; // 0x27c
	float BaseSizeY; // 0x280
	float BaseSizeX; // 0x284
	float FlickerIntensity; // 0x288
	float FlickerTime; // 0x28c
	float Luminosity; // 0x290
	TArray<AActor*> Actors for ignore lens flare ; // 0x298
	float HaloBrightness; // 0x2a8
	float HaloContrast; // 0x2ac
	float HaloOpacity; // 0x2b0
	float HaloInnerRadius; // 0x2b4
	FLinearColor HaloOuterColor; // 0x2b8
	FLinearColor HaloInnerColor; // 0x2c8
	UTexture* HaloTexture; // 0x2d8
	float CentreFlareBrightness; // 0x2e0
	float CentreFlareContrast; // 0x2e4
	FLinearColor CentreFlareColor; // 0x2e8
	UTexture* CentreFlareTexture; // 0x2f8
	float MainFlareBrightness; // 0x300
	float MainFlareContrast; // 0x304
	float MainFlareInnerRadius; // 0x308
	float MainFlareSize; // 0x30c
	FLinearColor MainLensInnerColor; // 0x310
	FLinearColor MainOuterColor; // 0x320
	UTexture* MainFlare; // 0x330
	float HaloTextureSize; // 0x338
	float CentreFlareSize; // 0x33c
	float ReflectionBrightness; // 0x340
	float ReflectionContrast; // 0x344
	FLinearColor ReflectionColor; // 0x348
	UTexture* ReflectionCentreTexture; // 0x358
	float ReflectionSize; // 0x360
	float FlareOpposite1_Brightness; // 0x364
	float FlareOpposite1_Contrast; // 0x368
	float FlareOppositeSize01; // 0x36c
	FLinearColor FlareOppositeColor01; // 0x370
	UTexture* FlareOpposite01; // 0x380
	float FlareOpposite2_Brightness; // 0x388
	float FlareOpposite2_Contrast; // 0x38c
	float FlareOppositeSize02; // 0x390
	UTexture* FlareOpposite02; // 0x398
	FLinearColor FlareOppositeColor02; // 0x3a0
	float OppositeFlaresAxisProjection; // 0x3b0
	float FlareFrontBrightness01; // 0x3b4
	float FlareFrontContrast01; // 0x3b8
	float FlareFrontSize01; // 0x3bc
	float FlareFrontProximityCentre01; // 0x3c0
	FLinearColor FlareFrontColor01; // 0x3c4
	UTexture* FlareFront01; // 0x3d8
	float FlareFrontBrightness02; // 0x3e0
	float FlareFrontContrast02; // 0x3e4
	float FlareFrontSize02; // 0x3e8
	float FlareFrontProximityCentre02; // 0x3ec
	FLinearColor FlareFrontColor02; // 0x3f0
	UTexture* FlareFront02; // 0x400
	float FrontFlaresAxisProjection; // 0x408
	float ReflectedFlareBrightness01; // 0x40c
	float ReflectedFlareContrast01; // 0x410
	float ReflectedFlareSize01; // 0x414
	float ReflectedFlareProximityCentre01; // 0x418
	FLinearColor ReflectedFlareColor01; // 0x41c
	UTexture* ReflectedFlare01; // 0x430
	float ReflectedFlareBrightness02; // 0x438
	float ReflectedFlareContrast02; // 0x43c
	float ReflectedFlareSize02; // 0x440
	float ReflectedFlareProximityCentre02; // 0x444
	FLinearColor ReflectedFlareColor02; // 0x448
	UTexture* ReflectedFlare02; // 0x458
	float MinorFlareBrightness01; // 0x460
	float MinorFlareContrast01; // 0x464
	float MinorFlareSize01; // 0x468
	float MinorFlareSizeRandom01; // 0x46c
	float MinorFlareProximityCentre01; // 0x470
	FLinearColor MinorFlareColor01; // 0x474
	UTexture* MinorFlare01; // 0x488
	float MinorFlareBrightness02; // 0x490
	float MinorFlareContrast02; // 0x494
	float MinorFlareSize02; // 0x498
	float MinorFlareSizeRandom02; // 0x49c
	float MinorFlareProximityCentre02; // 0x4a0
	FLinearColor MinorFlareColor02; // 0x4a4
	UTexture* MinorFlare02; // 0x4b8
	float AdditionalFlareBrightness; // 0x4c0
	float AdditionalFlareContrast; // 0x4c4
	float AdditionalFlareSize; // 0x4c8
	FLinearColor AdditionalFlareColor; // 0x4cc
	UTexture* AdditionalFlare; // 0x4e0
	float IrisBrightness; // 0x4e8
	float IrisContrast; // 0x4ec
	float IrisSize; // 0x4f0
	float IrisProximityCentre; // 0x4f4
	FLinearColor IrisColor; // 0x4f8
	UTexture* Iris; // 0x508
	UMaterialInstanceDynamic* DMI_LensFlare; // 0x510
};

struct UTestMovieSceneSubTrack {
	TArray<UMovieSceneSection*> SectionArray; // 0xa0
};

struct UParticleEmitter {
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

struct UMaterialExpressionSingleLayerWaterMaterialOutput {
	FExpressionInput ScatteringCoefficients; // 0x40
	FExpressionInput AbsorptionCoefficients; // 0x54
	FExpressionInput PhaseG; // 0x68
	FExpressionInput ColorScaleBehindWater; // 0x7c
};

struct UParticleModuleLocationPrimitiveCylinder_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x120
};

struct UInAppPurchaseCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct ATOCManager {
	USceneComponent* RootComp; // 0x220
	UFMODEvent* TocEvent; // 0x228
	TArray<UTOCData*> QueuedTOCData; // 0x230
	UTOCData* CurrentTOCData; // 0x240
};

struct UTemplateSequenceSection {
	TArray<FTemplateSectionPropertyScale> PropertyScales; // 0x170
};

struct UW_PlanningMap_BreachPoint_Info_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Hide; // 0x268
	UWidgetAnimation* Reveal; // 0x270
	UButton* btn_ClickAway; // 0x278
	UW_Button_C* btn_SetSpawn; // 0x280
	UImage* div_Formation_Bot; // 0x288
	UImage* div_Formation_Top; // 0x290
	UHorizontalBox* HB_Equipment; // 0x298
	UImage* img_BreachPoint; // 0x2a0
	UW_Text_C* lbl_Equipment; // 0x2a8
	UW_Text_C* lbl_Formation; // 0x2b0
	UCanvasPanel* RootCanvas; // 0x2b8
	UTextBlock* txt_Description; // 0x2c0
	UW_Text_C* txt_Designation; // 0x2c8
	UW_Text_C* txt_Formation; // 0x2d0
	UW_Text_C* txt_Name; // 0x2d8
	FSpawnPoints SpawnInfo; // 0x2e0
	FMulticastInlineDelegate OnSetSpawnButtonClicked; // 0x350
	FName CurrentSpawn; // 0x360
	bool Hidden; // 0x368
	FMulticastInlineDelegate OnDetailPanelHide; // 0x370
};

struct UBrushComponent {
	UModel* Brush; // 0x450
	UBodySetup* BrushBodySetup; // 0x458
};

struct ADeployableBag {
	APlacedBag* PlacedBagClass; // 0x8f8
	float MaxPlacementDistance; // 0x900
};

struct UArrowComponent {
	FColor ArrowColor; // 0x450
	float ArrowSize; // 0x454
	float ArrowLength; // 0x458
	float ScreenSize; // 0x45c
	char bIsScreenSizeScaled : 1; // 0x460
	char bTreatAsASprite : 1; // 0x460
};

struct UW_BriefingTaskButton_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* BtnText; // 0x268
	UImage* CheckMark; // 0x270
	UScaleBox* CheckMark_Scale; // 0x278
	UImage* Cross; // 0x280
	UScaleBox* Cross_Scale; // 0x288
	UButton* MainBtn; // 0x290
	FText ButtonText; // 0x298
	bool IsChecked; // 0x2b0
	FString MissionAudioName; // 0x2b8
	bool bIsReadyButton; // 0x2c8
	bool bIsLoadoutButton; // 0x2c9
	UW_BriefingMain_C* BriefingMain; // 0x2d0
};

struct UChallengeManager {
	TArray<UChallenge*> Challenges; // 0x28
	UReadyOrNotProfile* Profile; // 0x38
};

struct AAIController {
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

struct UEnvQueryNode {
	int32_t VerNum; // 0x28
};

struct UNiagaraDataInterfaceArray {
	int32_t MaxElements; // 0x40
};

struct AOnlineBeaconHost {
	int32_t ListenPort; // 0x250
	TArray<AOnlineBeaconClient*> ClientActors; // 0x258
};

struct UBaseWidget {
	FVector2D MouseAxisDeltaThreshold; // 0x260
	FVector2D GamepadAxisDeltaThreshold; // 0x268
	AReadyOrNotGameState* RONGS; // 0x270
};

struct AWoundMeshActor {
	UStaticMeshComponent* WoundStaticMesh; // 0x220
};

struct UGridPanel {
	TArray<float> ColumnFill; // 0x120
	TArray<float> RowFill; // 0x130
};

struct UARGetCandidateObjectAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct APrimary_SR16_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1130
};

struct UW_Briefing_Timeline_TrackWave_Simple_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UHorizontalBox* HB_Waveform; // 0x268
	bool bIsDesignTime; // 0x270
	bool bIsPlaying; // 0x271
	bool bIsEvent; // 0x272
	bool bEventInProgress; // 0x273
	bool bIsFinished; // 0x274
	float CurrentPlayTime; // 0x278
	float Duration; // 0x27c
	USoundWave* SoundWaveAsset; // 0x280
	float ProgressMade; // 0x288
	float AmpUpdateFrequency; // 0x28c
	TMap<float, FTimelineEvent> EventEntries; // 0x290
	FMulticastInlineDelegate TimelineEventFired; // 0x2e0
	FMulticastInlineDelegate TimelineEventEnded; // 0x2f0
	float CurrentEventID; // 0x300
	TMap<float, UW_Briefing_Timeline_TrackWaveElement_C*> EventWaveSegments; // 0x308
	float TickInterval; // 0x358
	int32_t WaveSegments; // 0x35c
	TArray<UW_Briefing_Timeline_TrackWaveElement_vert_C*> Segments; // 0x360
};

struct UActorComponent {
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

struct UANIMBP_Multitool_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x2c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x378
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x3f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x478
	FAnimNode_Slot AnimGraphNode_Slot; // 0x4f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x540
	FAnimNode_Root AnimGraphNode_Root; // 0x5c0
	EMultitoolFunctions CurrentToolKit; // 0x5f0
	bool SecondStage; // 0x5f1
};

struct APhononProbeVolume {
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

struct UMaterialExpressionFontSampleParameter {
	FName ParameterName; // 0x50
	FGuid ExpressionGUID; // 0x58
	FName Group; // 0x68
};

struct ADestructibleActor {
	UDestructibleComponent* DestructibleComponent; // 0x220
	FMulticastInlineDelegate OnActorFracture; // 0x228
};

struct UBTTask_RunBehavior {
	UBehaviorTree* BehaviorAsset; // 0x70
};

struct UGizmoLocalFloatParameterSource {
	float Value; // 0x48
	FGizmoFloatParameterChange LastChange; // 0x4c
};

struct UMorphTarget {
	USkeletalMesh* BaseSkelMesh; // 0x28
};

struct UNiagaraScript {
	ENiagaraScriptUsage Usage; // 0x28
	FGuid UsageId; // 0x2c
	FNiagaraParameterStore RapidIterationParameters; // 0x40
	FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore; // 0xb8
	TArray<FNiagaraBoundParameter> ScriptExecutionBoundParameters; // 0x150
	FNiagaraVMExecutableDataId CachedScriptVMId; // 0x160
	FNiagaraVMExecutableData CachedScriptVM; // 0x1c8
	TArray<UNiagaraParameterCollection*> CachedParameterCollectionReferences; // 0x2b8
	TArray<FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces; // 0x2c8
};

struct AFreeMode {
	float RespawnTime; // 0x678
};

struct UANIMBP_Preview_Char_Head_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2f8
	FAnimNode_PoseBlendNode AnimGraphNode_PoseBlendNode; // 0x378
	FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x418
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x5f0
	UPoseAsset* FaceRomRef; // 0x6b0
	UAnimSequence* FaceSequenceRef; // 0x6b8
	USkeletalMeshComponent* Bodyref; // 0x6c0
};

struct UANIMBP_M14_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x308
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x350
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x470
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x4f0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x5f8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x618
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x638
	FAnimNode_Slot AnimGraphNode_Slot; // 0x6f8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x740
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x898
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x8c0
	float Mag01Alpha; // 0x8e8
};

struct UAnimNotifyState_TimedNiagaraEffect {
	UNiagaraSystem* Template; // 0x30
	FName SocketName; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	bool bDestroyAtEnd; // 0x58
};

struct AMagicLeapSharedWorldGameMode {
	FMagicLeapSharedWorldSharedData SharedWorldData; // 0x308
	FMulticastInlineDelegate OnNewLocalDataFromClients; // 0x318
	float PinSelectionConfidenceThreshold; // 0x328
	AMagicLeapSharedWorldPlayerController* ChosenOne; // 0x3d0
};

struct UDLSSSettings {
	bool bEnableDLSSD3D12; // 0x28
	bool bEnableDLSSD3D11; // 0x29
	bool bEnableDLSSVulkan; // 0x2a
	bool bEnableDLSSInEditorViewports; // 0x2b
	bool bEnableScreenpercentageManipulationInDLSSEditorViewports; // 0x2c
	bool bEnableDLSSInPlayInEditorViewports; // 0x2d
	bool bShowDLSSSDebugOnScreenMessages; // 0x2e
	FString GenericDLSSBinaryPath; // 0x30
	bool bGenericDLSSBinaryExists; // 0x40
	uint32_t NVIDIANGXApplicationId; // 0x44
	FString CustomDLSSBinaryPath; // 0x48
	bool bCustomDLSSBinaryExists; // 0x58
};

struct UMaterialExpressionDistance {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UW_Button_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* Btn; // 0x268
	UWidgetSwitcher* ContentSwitcher; // 0x270
	UNamedSlot* CustomContents; // 0x278
	UW_Text_C* txt_ButtonLabel; // 0x280
	FText ButtonLabelText; // 0x288
	E_Style_Buttons ButtonStyle; // 0x2a0
	bool UseCustomStyle; // 0x2a1
	FST_Style_Buttons CustomStyle; // 0x2a8
	FST_Style_Text FontStyleNormal; // 0x768
	FST_Style_Text FontStyleHovered; // 0x7f8
	FST_Style_Text FontStylePressed; // 0x888
	FST_Style_Text FontStyleDisabled; // 0x918
	UDataTable* StyleGuide; // 0x9a8
	bool bHovered; // 0x9b0
	FMulticastInlineDelegate Clicked; // 0x9b8
	FMulticastInlineDelegate Hovered; // 0x9c8
	FMulticastInlineDelegate Unhovered; // 0x9d8
	FMulticastInlineDelegate Pressed; // 0x9e8
	FMulticastInlineDelegate Released; // 0x9f8
	FMulticastInlineDelegate DoubleClicked; // 0xa08
	float DoubleClickTimer; // 0xa18
	int32_t FontSizeOverride; // 0xa1c
	E_Style_Buttons ActiveStyle; // 0xa20
	UTextBlock* DescriptionWidget; // 0xa28
	bool ForceUppercaseDescription; // 0xa30
	FText DescriptionText; // 0xa38
	UFMODEvent* HoveredSound; // 0xa50
	UFMODEvent* ClickedSound; // 0xa58
	bool StartActive; // 0xa60
	bool StartActiveDisabled; // 0xa61
};

struct UGenlockedTimecodeProvider {
	bool bUseGenlockToCount; // 0x30
};

struct UHumanCharacterHUD_V2 {
	UCanvasPanel* CanvasPanel_Main; // 0x280
	URetainerBox* RetainerBox_SwayableElements; // 0x288
	UPlayerActionPromptWidget* PlayerActionText_Slot_2; // 0x290
	UPlayerActionPromptWidget* PlayerActionText_Slot_3; // 0x298
	UPlayerActionPromptWidget* PlayerActionText_Slot_4; // 0x2a0
	UPlayerActionPromptWidget* PlayerActionText_Slot_5; // 0x2a8
	UPlayerActionPromptWidget* PlayerActionText_Slot_Reserved_2; // 0x2b0
	UPlayerActionPromptWidget* PlayerActionText_Slot_Reserved_3; // 0x2b8
	EHUDStyle HUDStyle; // 0x2c0
	TArray<FName> ObjectiveMarker_WidgetFadeZones; // 0x2c8
	char bEnableHUDSway : 1; // 0x2d8
	FVector2D MaxHUDSwayMovement; // 0x2dc
	FVector2D SwayStrength; // 0x2e4
	FVector2D SwaySpeed; // 0x2ec
	char bEnableCurvedHUD : 1; // 0x2f4
	float CurvedHUDStrength; // 0x2f8
	APlayerCharacter* PlayerCharacter; // 0x300
	AReadyOrNotPlayerController* PlayerController; // 0x308
	FVector2D AccumulatedMouseDelta; // 0x310
};

struct ALobbyGS {
	UFMODEvent* LobbyMusicEvent; // 0x6c8
};

struct UPaperRuntimeSettings {
	bool bEnableSpriteAtlasGroups; // 0x28
	bool bEnableTerrainSplineEditing; // 0x29
	bool bResizeSpriteDataToMatchTextures; // 0x2a
};

struct UMaterialExpressionParameter {
	FName ParameterName; // 0x40
	FGuid ExpressionGUID; // 0x48
};

struct UMovieSceneSignedObject {
	FGuid Signature; // 0x28
};

struct UBTDecorator_Cooldown {
	float CoolDownTime; // 0x68
};

struct UNiagaraDataInterfaceArrayFloat3 {
	TArray<FVector> FloatData; // 0x50
};

struct UBrushBaseProperties {
	float BrushSize; // 0x60
	bool bSpecifyRadius; // 0x64
	float BrushRadius; // 0x68
	float BrushStrength; // 0x6c
	float BrushFalloffAmount; // 0x70
	bool bShowStrength; // 0x74
	bool bShowFalloff; // 0x75
};

struct UInterpTrack {
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

struct UMaterialExpressionParticleSubUV {
	char bBlend : 1; // 0x60
};

struct USoundNodeDialoguePlayer {
	FDialogueWaveParameter DialogueWaveParameter; // 0x48
	char bLooping : 1; // 0x68
};

struct UDistributionVectorConstant {
	FVector Constant; // 0x38
	char bLockAxes : 1; // 0x44
	EDistributionVectorLockFlags LockedAxes; // 0x48
};

struct UNavAreaMeta_SwitchByAgent {
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

struct UNiagaraMeshRendererProperties {
	TArray<FNiagaraMeshRendererMeshProperties> Meshes; // 0x78
	ENiagaraRendererSourceDataMode SourceMode; // 0x88
	ENiagaraSortMode SortMode; // 0x89
	char bOverrideMaterials : 1; // 0x8c
	char bSortOnlyWhenTranslucent : 1; // 0x8c
	char bGpuLowLatencyTranslucency : 1; // 0x8c
	char bSubImageBlend : 1; // 0x8c
	char bEnableFrustumCulling : 1; // 0x8c
	char bEnableCameraDistanceCulling : 1; // 0x8c
	char bEnableMeshFlipbook : 1; // 0x8c
	TArray<FNiagaraMeshMaterialOverride> OverrideMaterials; // 0x90
	FVector2D SubImageSize; // 0xa0
	ENiagaraMeshFacingMode FacingMode; // 0xa8
	char bLockedAxisEnable : 1; // 0xac
	FVector LockedAxis; // 0xb0
	ENiagaraMeshLockedAxisSpace LockedAxisSpace; // 0xbc
	float MinCameraDistance; // 0xc0
	float MaxCameraDistance; // 0xc4
	uint32_t RendererVisibility; // 0xc8
	FNiagaraVariableAttributeBinding PositionBinding; // 0xd0
	FNiagaraVariableAttributeBinding ColorBinding; // 0x128
	FNiagaraVariableAttributeBinding VelocityBinding; // 0x180
	FNiagaraVariableAttributeBinding MeshOrientationBinding; // 0x1d8
	FNiagaraVariableAttributeBinding ScaleBinding; // 0x230
	FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x288
	FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x2e0
	FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x338
	FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x390
	FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x3e8
	FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x440
	FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x498
	FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x4f0
	FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x548
	FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x5a0
	FNiagaraVariableAttributeBinding MeshIndexBinding; // 0x5f8
	TArray<FNiagaraMaterialAttributeBinding> MaterialParameterBindings; // 0x650
	FNiagaraVariableAttributeBinding PrevPositionBinding; // 0x660
	FNiagaraVariableAttributeBinding PrevScaleBinding; // 0x6b8
	FNiagaraVariableAttributeBinding PrevMeshOrientationBinding; // 0x710
	FNiagaraVariableAttributeBinding PrevCameraOffsetBinding; // 0x768
	FNiagaraVariableAttributeBinding PrevVelocityBinding; // 0x7c0
	UStaticMesh* ParticleMesh; // 0x880
	FVector PivotOffset; // 0x888
	ENiagaraMeshPivotOffsetSpace PivotOffsetSpace; // 0x894
};

struct UPhononProbeComponent {
	TArray<FVector> ProbeLocations; // 0x1f8
};

struct UANIMBP_G3A3_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x2d8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x3e0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x400
	FAnimNode_Slot AnimGraphNode_Slot; // 0x420
	FAnimNode_Root AnimGraphNode_Root; // 0x468
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x498
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x5a0
	float Mag01Alpha; // 0x620
	bool bIsSemi; // 0x624
};

struct UW_Briefing_Timeline_Entry_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UW_Button_C* btn_TimelineEntry; // 0x268
	UImage* div_001; // 0x270
	UHorizontalBox* HB_Timestamp; // 0x278
	UW_Text_C* txt_Description; // 0x280
	UW_Text_C* txt_Hint; // 0x288
	UW_Text_C* txt_Timestamp; // 0x290
	UW_Text_C* txt_Title; // 0x298
	bool bIsHovered; // 0x2a0
	FMulticastInlineDelegate TimelineEventHovered; // 0x2a8
	FMulticastInlineDelegate TimelineEventUnhovered; // 0x2b8
	FMulticastInlineDelegate TimelineEventClicked; // 0x2c8
	FTimelineEvent EventData; // 0x2d8
	float EventAudioStart; // 0x328
	float EventAudioEnd; // 0x32c
	float EventAudioDuration; // 0x330
};

struct UW_ReadyRoomWidget_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image_158; // 0x268
	UImage* img_SelectedMissionImg; // 0x270
	UBorder* SelectedMissionPanel; // 0x278
	UW_Text_C* txt_readycount; // 0x280
	UW_Text_C* txt_SelectedMissionDesignation; // 0x288
	UW_Text_C* txt_SelectedMissionName; // 0x290
	float Opacity; // 0x298
	float In Delta Time; // 0x29c
};

struct UMenuAnchor {
	UUserWidget* MenuClass; // 0x120
	FDelegate OnGetMenuContentEvent; // 0x128
	FDelegate OnGetUserMenuContentEvent; // 0x138
	EMenuPlacement Placement; // 0x148
	bool bFitInWindow; // 0x149
	bool ShouldDeferPaintingAfterWindowContent; // 0x14a
	bool UseApplicationMenuStack; // 0x14b
	FMulticastInlineDelegate OnMenuOpenChanged; // 0x150
};

struct UW_ObjectiveMarker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c8
	UWidgetAnimation* Anim_OnMarkerSet; // 0x2d0
	UTextBlock* MarkerName_Text_2; // 0x2d8
};

struct UBaseTeamQuestNode {
	TArray<ESwatCommand> EnabledSwatCommands; // 0x250
	bool bEnabledAllSwatCommands; // 0x260
	ASWATManager* SWATManager; // 0x268
};

struct UFreeArrestedActivity {
	APlayerCharacter* Target; // 0x1a8
};

struct ULicenseSave {
	bool bAcceptedAlphaNonDisclosureAgreement; // 0x28
};

struct UInputAxisKeyDelegateBinding {
	TArray<FBlueprintInputAxisKeyDelegateBinding> InputAxisKeyDelegateBindings; // 0x28
};

struct UMaterialExpressionDeriveNormalZ {
	FExpressionInput InXY; // 0x40
};

struct UParticleModuleVelocity {
	FRawDistributionVector StartVelocity; // 0x38
	FRawDistributionFloat StartVelocityRadial; // 0x80
};

struct ADynamicReportable {
	FString DesiredTocReport; // 0x238
	bool bReportedToToc; // 0x248
};

struct UMovieSceneEvaluationHookSystem {
	TMap<FMovieSceneEvaluationInstanceKey, FMovieSceneEvaluationHookEventContainer> PendingEventsByRootInstance; // 0x40
};

struct USourceEffectStereoDelayPreset {
	FSourceEffectStereoDelaySettings Settings; // 0xb4
};

struct UNetworkSettings {
	char bVerifyPeer : 1; // 0x38
	char bEnableMultiplayerWorldOriginRebasing : 1; // 0x38
	int32_t MaxRepArraySize; // 0x3c
	int32_t MaxRepArrayMemory; // 0x40
	TArray<FNetworkEmulationProfileDescription> NetworkEmulationProfiles; // 0x48
};

struct UPhrasesList {
	TMap<FName, FLipSync_Phrase> Data; // 0x28
};

struct ADynamicWorldItem {
	UStaticMeshComponent* ItemMesh; // 0x220
	UParticleSystemComponent* ImpactParticle; // 0x228
	UAudioComponent* ImpactAudio; // 0x230
	UFMODAudioComponent* ImpactAudioFMOD; // 0x238
	UStaticMesh* PostImpactMesh; // 0x240
	bool bFirstImpact; // 0x248
	bool bHasBeenImpacted; // 0x249
	UMaterialInterface* PhysicsImpactDecal; // 0x250
	float PhysicsImpactDecalScale; // 0x258
};

struct UEnvQueryGenerator {
	FString OptionName; // 0x30
	UEnvQueryItemType* ItemType; // 0x40
	char bAutoSortTests : 1; // 0x48
};

struct UUniformVector {
	float Magnitude; // 0xb0
	FVector Direction; // 0xb4
};

struct UW_Text_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_163; // 0x268
	UWrapBox* LetterSpacingWrapBox; // 0x270
	UCanvasPanel* RootCanvas; // 0x278
	USizeBox* SB_Text; // 0x280
	UTextBlock* txt_Debug; // 0x288
	UTextBlock* txt_Debug_3; // 0x290
	UTextBlock* txt_Text; // 0x298
	FText Text; // 0x2a0
	FLinearColor Color; // 0x2b8
	FSlateFontInfo Font; // 0x2c8
	FVector2D ShadowOffset; // 0x320
	FLinearColor ShadowColor; // 0x328
	bool AllCaps; // 0x338
	bool AutoWrapText; // 0x339
	bool Debug; // 0x33a
	bool SubString; // 0x33b
	bool SingleWord; // 0x33c
	bool Multi-Line; // 0x33d
	int32_t LetterSpacing; // 0x340
	bool Truncate; // 0x344
	int32_t CharacterLimit; // 0x348
	FString TruncationCharacters; // 0x350
	float CalculatedSpacing; // 0x360
	ETextJustify Justification; // 0x364
	float CalculatedWidth; // 0x368
	int32_t CurrentLetterSpacing; // 0x36c
	int32_t CharacterCount; // 0x370
	TArray<FString> CharacterArray; // 0x378
	TMap<int32_t, UW_Text_C*> SpacedCharacterElements; // 0x388
	TMap<UWrapBoxSlot*, UW_Text_C*> WordElements; // 0x3d8
	int32_t WordCount; // 0x428
	UHorizontalBox* HB_Substring; // 0x430
	UHorizontalBox* HB_SingleLine; // 0x438
	FText CurrentText; // 0x440
};

struct UInterpTrackInstFloatParticleParam {
	float ResetFloat; // 0x28
};

struct UBoneMaskFilter {
	TArray<FInputBlendPose> BlendPoses; // 0x28
};

struct UParticleModuleLifetime_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x60
};

struct UMovieSceneEventTriggerSection {
	FMovieSceneEventChannel EventChannel; // 0xf0
};

struct UW_Briefing_Objectives_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UW_Briefing_Objectives_List_C* ChallengesList; // 0x268
	UW_Briefing_Objectives_List_C* ObjectivesList; // 0x270
};

struct UW_NetworkStatusErrors_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image_50; // 0x268
	UImage* Image_77; // 0x270
	UInvalidationBox* InvalidationBox_1; // 0x278
	UInvalidationBox* InvalidationBox_2; // 0x280
	UW_Text_C* txt_ConnectionError; // 0x288
};

struct UDataDrivenConsoleVariableSettings {
	TArray<FDataDrivenConsoleVariable> CVarsArray; // 0x50
};

struct UParticleModuleSize {
	FRawDistributionVector StartSize; // 0x30
};

struct UTextureRenderTargetVolume {
	int32_t SizeX; // 0x180
	int32_t SizeY; // 0x184
	int32_t SizeZ; // 0x188
	FLinearColor ClearColor; // 0x18c
	EPixelFormat OverrideFormat; // 0x19c
	char bHDR : 1; // 0x19d
	char bForceLinearGamma : 1; // 0x19d
};

struct ULightmappedSurfaceCollection {
	UModel* SourceModel; // 0x28
	TArray<int32_t> Surfaces; // 0x30
};

struct UAnimNotify_ForceFireWeapon {
	float Chance; // 0x38
	bool bNoEnemyRequired; // 0x3c
};

struct UMotivityPreprocessor {
	float TimeStep; // 0x28
	FMotivityTimeData PredictionData; // 0x30
	USkeleton* Skeleton; // 0x40
	USkeletalMesh* MeshPreviewOverride; // 0x48
	TArray<FName> ReferencedBones; // 0x50
	TArray<UAnimSequence*> ReferencedAnimations; // 0x60
	TArray<UAnimSequence*> ReferencedIdleAnimations; // 0x70
};

struct UChaosPhysicalMaterial {
	float Friction; // 0x28
	float StaticFriction; // 0x2c
	float Restitution; // 0x30
	float LinearEtherDrag; // 0x34
	float AngularEtherDrag; // 0x38
	float SleepingLinearVelocityThreshold; // 0x3c
	float SleepingAngularVelocityThreshold; // 0x40
};

struct UCableComponent {
	bool bAttachStart; // 0x478
	bool bAttachEnd; // 0x479
	FComponentReference AttachEndTo; // 0x480
	FName AttachEndToSocketName; // 0x4a8
	FVector EndLocation; // 0x4b0
	float CableLength; // 0x4bc
	int32_t NumSegments; // 0x4c0
	float SubstepTime; // 0x4c4
	int32_t SolverIterations; // 0x4c8
	bool bEnableStiffness; // 0x4cc
	bool bUseSubstepping; // 0x4cd
	bool bSkipCableUpdateWhenNotVisible; // 0x4ce
	bool bSkipCableUpdateWhenNotOwnerRecentlyRendered; // 0x4cf
	bool bEnableCollision; // 0x4d0
	float CollisionFriction; // 0x4d4
	FVector CableForce; // 0x4d8
	float CableGravityScale; // 0x4e4
	float CableWidth; // 0x4e8
	int32_t NumSides; // 0x4ec
	float TileMaterial; // 0x4f0
};

struct UW_SettingsMenu_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UW_Header_C* AdvancedGraphicsHeader; // 0x268
	UVerticalBox* AdvancedGraphicsSettings; // 0x270
	UW_StandardCheckbox_C* AdvGrahpics_Check_BounceLight; // 0x278
	UW_StandardCheckbox_C* AdvGraphics_Check_DepthOfField; // 0x280
	UW_StandardCheckbox_C* AdvGraphics_Check_FlashlightShadows; // 0x288
	UW_StandardCheckbox_C* AdvGraphics_Check_FrameLimit; // 0x290
	UW_StandardCheckbox_C* AdvGraphics_Check_MeshPainting; // 0x298
	UW_StandardCheckbox_C* AdvGraphics_Check_MotionBlurEnable; // 0x2a0
	UW_StandardCheckbox_C* AdvGraphics_Check_Raytracing; // 0x2a8
	UW_StandardCheckbox_C* AdvGraphics_Check_RaytracingAmbientOcclusion; // 0x2b0
	UW_StandardCheckbox_C* AdvGraphics_Check_RaytracingGlobalIllumination; // 0x2b8
	UW_StandardCheckbox_C* AdvGraphics_Check_RaytracingReflections; // 0x2c0
	UW_StandardCheckbox_C* AdvGraphics_Check_RaytracingShadows; // 0x2c8
	UW_StandardCheckbox_C* AdvGraphics_Check_RaytracingTranslucency; // 0x2d0
	UW_StandardCheckbox_C* AdvGraphics_Check_VSync; // 0x2d8
	UW_StandardSlider_C* AdvGraphics_Slider_AAQuality; // 0x2e0
	UW_StandardSlider_C* AdvGraphics_Slider_DLSSQuality; // 0x2e8
	UW_StandardSlider_C* AdvGraphics_Slider_EffectsQuality; // 0x2f0
	UW_StandardSlider_C* AdvGraphics_Slider_FrameLimiter; // 0x2f8
	UW_StandardSlider_C* AdvGraphics_Slider_FSRQuality; // 0x300
	UW_StandardSlider_C* AdvGraphics_Slider_MotionBlurScale; // 0x308
	UW_StandardSlider_C* AdvGraphics_Slider_OptiwandFPS; // 0x310
	UW_StandardSlider_C* AdvGraphics_Slider_OptiwandScale; // 0x318
	UW_StandardSlider_C* AdvGraphics_Slider_PPQuality; // 0x320
	UW_StandardSlider_C* AdvGraphics_Slider_ShadowQuality; // 0x328
	UW_StandardSlider_C* AdvGraphics_Slider_TextureQuality; // 0x330
	UW_StandardSlider_C* AdvGraphics_Slider_ViewDistance; // 0x338
	UW_StandardButton_C* ApplySettingsButton; // 0x340
	UW_StandardCheckbox_C* Audio_Checkbox_DisableHitmarker; // 0x348
	UW_StandardSlider_C* Audio_Slider_MasterVolume; // 0x350
	UW_StandardSlider_C* Audio_Slider_MicGainVolume; // 0x358
	UW_StandardSlider_C* Audio_Slider_MusicVolume; // 0x360
	UW_StandardSlider_C* Audio_Slider_SFXVolume; // 0x368
	UW_StandardSlider_C* Audio_Slider_UIVolume; // 0x370
	UW_StandardSlider_C* Audio_Slider_VOIPVolume; // 0x378
	UW_Header_C* AudioHeader; // 0x380
	UW_StandardRadioButton_C* AudioOptionsButton; // 0x388
	UW_Header_C* BasicGraphicsHeader; // 0x390
	UImage* Blackout; // 0x398
	UW_Button_C* btn_Apply; // 0x3a0
	UW_Button_C* btn_AudioOptions; // 0x3a8
	UW_Button_C* btn_ControlOptions; // 0x3b0
	UW_Button_C* btn_ControlsEquipment; // 0x3b8
	UW_Button_C* btn_ControlsInteraction; // 0x3c0
	UW_Button_C* btn_ControlsMisc; // 0x3c8
	UW_Button_C* btn_ControlsMovement; // 0x3d0
	UW_Button_C* btn_ControlsTeamwork; // 0x3d8
	UW_Button_C* btn_ControlsVehicle; // 0x3e0
	UW_Button_C* btn_Exit; // 0x3e8
	UW_Button_C* btn_GameOptions; // 0x3f0
	UW_Button_C* btn_GraphicsOptions; // 0x3f8
	UW_Button_C* btn_Reset; // 0x400
	UW_Header_C* CommandHeader; // 0x408
	UW_StandardRadioButton_C* ControlOptionsButton; // 0x410
	UW_StandardRadioButton_C* Controls_Equipment; // 0x418
	UGridPanel* Controls_Equipment_Widget; // 0x420
	UW_StandardRadioButton_C* Controls_Interaction; // 0x428
	UGridPanel* Controls_Interaction_Widget; // 0x430
	UW_StandardRadioButton_C* Controls_Misc; // 0x438
	UGridPanel* Controls_Miscellaneous_Widget; // 0x440
	UW_StandardRadioButton_C* Controls_Movement; // 0x448
	UGridPanel* Controls_Movement_Widget; // 0x450
	UW_StandardRadioButton_C* Controls_Teamwork; // 0x458
	UGridPanel* Controls_Teamwork_Widget; // 0x460
	UGridPanel* Controls_Vehicle_Widget; // 0x468
	UW_StandardRadioButton_C* Controls_Vehicles; // 0x470
	UWidgetSwitcher* ControlsWidgetSwitcher; // 0x478
	UTextBlock* DescriptionText; // 0x480
	UW_Header_C* DLSS_Header; // 0x488
	UW_SettingLabel_C* DLSSQualityLabel; // 0x490
	UW_StandardButton_C* ExitSettingsMenu; // 0x498
	UW_Header_C* FSR_Header; // 0x4a0
	UW_SettingLabel_C* FSRQualityLabel; // 0x4a8
	UW_StandardRadioButton_C* GameOptionsButton; // 0x4b0
	UW_StandardRadioButton_C* GraphicOptionsButton; // 0x4b8
	UWidgetSwitcher* GraphicOptionsSwitcher; // 0x4c0
	UTextBlock* HighFOVWarning; // 0x4c8
	UW_Header_C* HudHeader; // 0x4d0
	UTextBlock* KeybindDescriptionText; // 0x4d8
	UW_Header_C* LanguageHeader; // 0x4e0
	UW_Header_C* MiscHeader; // 0x4e8
	UW_Header_C* MouseHeader; // 0x4f0
	UW_StandardCheckbox_C* Options_Checkbox_InvertMousePitch; // 0x4f8
	UW_StandardCheckbox_C* Options_Checkbox_InvertMouseYaw; // 0x500
	UW_StandardCheckbox_C* Options_Checkbox_ShowChat; // 0x508
	UW_StandardCheckbox_C* Options_Checkbox_ShowCommandContextHint; // 0x510
	UW_StandardCheckbox_C* Options_Checkbox_ShowCommandMarkers; // 0x518
	UW_StandardCheckbox_C* Options_Checkbox_ShowCompass; // 0x520
	UW_StandardCheckbox_C* Options_Checkbox_ShowFPS; // 0x528
	UW_StandardCheckbox_C* Options_Checkbox_ShowHealthIcons; // 0x530
	UW_StandardCheckbox_C* Options_Checkbox_ShowHesitationBar; // 0x538
	UW_StandardCheckbox_C* Options_Checkbox_ShowHotkeys; // 0x540
	UW_StandardCheckbox_C* Options_Checkbox_ShowHUD; // 0x548
	UW_StandardCheckbox_C* Options_Checkbox_ShowIcons; // 0x550
	UW_StandardCheckbox_C* Options_Checkbox_ShowNames; // 0x558
	UW_StandardCheckbox_C* Options_Checkbox_ShowPatches; // 0x560
	UW_StandardCheckbox_C* Options_Checkbox_ShowTeamStatus; // 0x568
	UW_StandardCheckbox_C* Options_Checkbox_StaticReload; // 0x570
	UW_StandardCheckbox_C* Options_Checkbox_SwayHUD; // 0x578
	UW_StandardCombobox_New_C* Options_Combo_CommandStyle; // 0x580
	UW_StandardCombobox_New_C* Options_Combo_DefaultOpenDoorCommand; // 0x588
	UW_StandardCombobox_New_C* Options_Combo_DefaultSurfaceCommand; // 0x590
	UW_StandardCombobox_New_C* Options_Combo_DefaultTargetCommand; // 0x598
	UW_StandardCombobox_New_C* Options_Combo_DefaultUnknownDoorCommand; // 0x5a0
	UW_StandardCombobox_New_C* Options_Combo_EmptyMagReloadStyle; // 0x5a8
	UW_StandardCombobox_New_C* Options_Combo_GrenadeStyle; // 0x5b0
	UW_StandardCombobox_New_C* Options_Combo_ItemSelectionStyle; // 0x5b8
	UW_StandardCombobox_New_C* Options_Combo_Language; // 0x5c0
	UW_StandardCombobox_New_C* Options_Combo_LockedDoorcommand; // 0x5c8
	UW_StandardCombobox_New_C* Options_Combo_OptiwandViewMode; // 0x5d0
	UW_StandardCombobox_New_C* Options_Combo_ScoreReadoutMode; // 0x5d8
	UW_StandardCombobox_New_C* Options_Combo_ShotgunReloadStyle; // 0x5e0
	UW_StandardCombobox_New_C* Options_Combo_UnlockedDoorCommand; // 0x5e8
	UImage* Options_Image_PatchPreview; // 0x5f0
	UW_StandardSlider_C* Options_Slider_FreelookSensitivity; // 0x5f8
	UW_StandardSlider_C* Options_Slider_MouseSensitivity; // 0x600
	UW_StandardSlider_C* Options_Slider_TeamView_PIP_FPS; // 0x608
	UTextBlock* Options_Text_PatchPreview; // 0x610
	UEditableTextBox* Options_Textbox_OfficerName; // 0x618
	UEditableTextBox* Options_Textbox_PatchURL; // 0x620
	UW_Header_C* PresetsHeader; // 0x628
	UW_SettingLabel_C* RaytracingAmbientOcclusion; // 0x630
	UW_SettingLabel_C* RayTracingEnabledLabel; // 0x638
	UW_Header_C* RayTracingHeader; // 0x640
	UW_SettingLabel_C* RaytracingReflectionsLabel; // 0x648
	UW_SettingLabel_C* RaytracingShadowsLabel; // 0x650
	UW_StandardButton_C* ResetKeybindsButton; // 0x658
	UWidgetSwitcher* SettingsSwitcher; // 0x660
	UW_StandardCheckbox_C* SimpleGraphics_ADSZoom; // 0x668
	UW_StandardCombobox_New_C* SimpleGraphics_Combo_Preset; // 0x670
	UW_StandardCombobox_New_C* SimpleGraphics_Combo_ScreenMode; // 0x678
	UW_StandardSlider_C* SimpleGraphics_Slider_FieldOfView; // 0x680
	UW_StandardSlider_C* SimpleGraphics_Slider_Resolution; // 0x688
	UW_StandardSlider_C* SimpleGraphics_Slider_ResolutionScale; // 0x690
	UW_StandardSlider_C* SimpleGraphics_Slider_SafeZone_X; // 0x698
	UW_StandardSlider_C* SimpleGraphics_Slider_SafeZone_Y; // 0x6a0
	UVerticalBox* SimpleGraphicsSettings; // 0x6a8
	UW_StandardRadioButton_C* Tab_AdvancedGraphicOptions; // 0x6b0
	UW_Button_C* Tab_AdvancedGraphicsOptions; // 0x6b8
	UScrollBox* Tab_Audio; // 0x6c0
	UW_StandardRadioButton_C* Tab_BasicGraphicOptions; // 0x6c8
	UVerticalBox* Tab_Controls; // 0x6d0
	UScrollBox* Tab_Game; // 0x6d8
	UVerticalBox* Tab_Graphics; // 0x6e0
	UW_Button_C* Tab_SimpleGraphicsOptions; // 0x6e8
	UW_StandardModal_C* VideoOptionsModal; // 0x6f0
	UW_PageHeader_C* W_PageHeader; // 0x6f8
	TArray<FSKeybinding> MovementControls; // 0x700
	TArray<FSKeybinding> DroneControls; // 0x710
	TArray<FSKeybinding> EquipmentControls; // 0x720
	TArray<FSKeybinding> InteractionControls; // 0x730
	TArray<FSKeybinding> TeamworkControls; // 0x740
	TArray<FSKeybinding> MiscellaneousControls; // 0x750
	UW_ControlsBind_C* Temp_FirstInput; // 0x760
	UW_ControlsBind_C* Temp_SecondInput; // 0x768
	FMargin BindNamePadding; // 0x770
	FMargin Bind1Padding; // 0x780
	FMargin Bind2Padding; // 0x790
	FMargin BindResetPadding; // 0x7a0
	bool VideoSettingsChanged; // 0x7b0
	TArray<FSGraphicPreset> GraphicsPresets; // 0x7b8
	FString StagedResolution; // 0x7c8
	float StagedResolutionScale; // 0x7d8
	int32_t StagedFOV; // 0x7dc
	FSGraphicPreset StagedGraphicsPreset; // 0x7e0
	int32_t StagedScreenMode; // 0x80c
	FMulticastInlineDelegate OnMenuExited; // 0x810
	FString PatchPreviewURL; // 0x820
	FSlateBrush DefaultPatchPreviewBrush; // 0x830
	UW_ControlsBind_C* ListeningBinding; // 0x8b8
	bool bShowBlackout; // 0x8c0
	UW_ControlsBind_C* ConflictingBindPending; // 0x8c8
	FText ConflictingBindFormat; // 0x8d0
	bool IsAxis; // 0x8e8
	TArray<FSKeybinding> CharacterControls; // 0x8f0
	TArray<FSKeybinding> SharedControls; // 0x900
	TMap<UW_ControlsBind_C*, FAxisMappingStruct> AxesControlBinds; // 0x910
	TMap<UW_ControlsBind_C*, FActionMappingStruct> ActionsControlBinds; // 0x960
	TArray<FSKeybinding> UnbindableControls; // 0x9b0
	UW_BindConflictModal_C* ConflictDetectedPopUp; // 0x9c0
	UW_IllegalUnbindModal_C* IllegalKeyConflictDetectedPopUp; // 0x9c8
	FSStandardModalDetails BindConflictModalDetails; // 0x9d0
	FSStandardModalDetails IllegalKeyConflictModalDetails; // 0xa48
	UW_Button_C* ActivePageButton; // 0xac0
	UW_Button_C* ActiveControlTabButton; // 0xac8
	bool ControlTabInit; // 0xad0
};

struct ULuminApplicationLifecycleComponent {
	FMulticastInlineDelegate DeviceHasReactivatedDelegate; // 0x140
	FMulticastInlineDelegate DeviceWillEnterRealityModeDelegate; // 0x150
	FMulticastInlineDelegate DeviceWillGoInStandbyDelegate; // 0x160
	FMulticastInlineDelegate FocusLostDelegate; // 0x170
	FMulticastInlineDelegate FocusGainedDelegate; // 0x180
};

struct UPawnMovementComponent {
	APawn* PawnOwner; // 0x130
};

struct UMaterialExpressionSmoothStep {
	FExpressionInput Min; // 0x40
	FExpressionInput Max; // 0x54
	FExpressionInput Value; // 0x68
	float ConstMin; // 0x7c
	float ConstMax; // 0x80
	float ConstValue; // 0x84
};

struct URadialForceComponent {
	float Radius; // 0x1f8
	ERadialImpulseFalloff Falloff; // 0x1fc
	float ImpulseStrength; // 0x200
	char bImpulseVelChange : 1; // 0x204
	char bIgnoreOwningActor : 1; // 0x204
	float ForceStrength; // 0x208
	float DestructibleDamage; // 0x20c
	TArray<EObjectTypeQuery> ObjectTypesToAffect; // 0x210
};

struct AEmitterCameraLensEffectBase {
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

struct USkeletalMeshSocket {
	FName SocketName; // 0x28
	FName BoneName; // 0x30
	FVector RelativeLocation; // 0x38
	FRotator RelativeRotation; // 0x44
	FVector RelativeScale; // 0x50
	bool bForceAlwaysAnimated; // 0x5c
};

struct ANavigationData {
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

struct UDatasmithStaticMeshComponentTemplate {
	UStaticMesh* StaticMesh; // 0x30
	TArray<UMaterialInterface*> OverrideMaterials; // 0x38
};

struct ULiveLinkVirtualSubject {
	ULiveLinkRole* Role; // 0x30
	TArray<FLiveLinkSubjectName> Subjects; // 0x38
	TArray<ULiveLinkFrameTranslator*> FrameTranslators; // 0x48
	bool bRebroadcastSubject; // 0x58
};

struct ATutorialGS {
	FTutorialMissionData CurrentTutorialData; // 0x7b8
	TSoftObjectPtr<UWorld> TutorialMenuLevel; // 0x908
	ULevelStreaming* TutorialMenuStreamedLevel; // 0x930
	ULevelStreaming* CurrentTutorialStreamedLevel; // 0x938
	TSoftObjectPtr<UWorld> ShootingRangeLevel; // 0x940
	TSoftObjectPtr<UWorld> KillHouseLevel; // 0x968
	TSoftObjectPtr<UWorld> BasicControlsLevel; // 0x990
	TSoftObjectPtr<UWorld> MirrorgunLevel; // 0x9b8
	TSoftObjectPtr<UWorld> StackUpLevel; // 0x9e0
	TSoftObjectPtr<UWorld> ArrestLevel; // 0xa08
	TSoftObjectPtr<UWorld> GrenadesLevel; // 0xa30
	TSoftObjectPtr<UWorld> MovementLevel; // 0xa58
	bool bFinishedUsingTutorialMenu; // 0xa82
};

struct UGameInstance {
	TArray<ULocalPlayer*> LocalPlayers; // 0x38
	UOnlineSession* OnlineSession; // 0x48
	TArray<UObject*> ReferencedObjects; // 0x50
	FMulticastInlineDelegate OnPawnControllerChangedDelegates; // 0x78
};

struct UInteractiveToolsContext {
	UInputRouter* InputRouter; // 0x58
	UInteractiveToolManager* ToolManager; // 0x60
	UInteractiveGizmoManager* GizmoManager; // 0x68
	TSoftClassPtr<UObject> ToolManagerClass; // 0x70
};

struct UPaperFlipbook {
	float FramesPerSecond; // 0x28
	TArray<FPaperFlipbookKeyFrame> Keyframes; // 0x30
	UMaterialInterface* DefaultMaterial; // 0x40
	EFlipbookCollisionMode CollisionSource; // 0x48
};

struct UNiagaraDebugHUDSettings {
	FNiagaraDebugHUDSettingsData Data; // 0x48
};

struct UCineCameraComponent {
	FCameraFilmbackSettings FilmbackSettings; // 0x7d0
	FCameraFilmbackSettings Filmback; // 0x7dc
	FCameraLensSettings LensSettings; // 0x7e8
	FCameraFocusSettings FocusSettings; // 0x800
	float CurrentFocalLength; // 0x858
	float CurrentAperture; // 0x85c
	float CurrentFocusDistance; // 0x860
	TArray<FNamedFilmbackPreset> FilmbackPresets; // 0x870
	TArray<FNamedLensPreset> LensPresets; // 0x880
	FString DefaultFilmbackPresetName; // 0x890
	FString DefaultFilmbackPreset; // 0x8a0
	FString DefaultLensPresetName; // 0x8b0
	float DefaultLensFocalLength; // 0x8c0
	float DefaultLensFStop; // 0x8c4
};

struct UBP_MessageDisplayBox_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x288
	UImage* Image_72; // 0x290
	UTextBlock* MessageText; // 0x298
	UW_StandardButton_C* OkButton; // 0x2a0
	bool LastShowMouseCursor; // 0x2a8
	bool bDown; // 0x2a9
	bool bHovering; // 0x2aa
};

struct UANIMBP_FAL_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x308
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x350
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x470
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x4f0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x5f8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x700
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x720
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x740
	FAnimNode_Slot AnimGraphNode_Slot; // 0x800
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x848
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x9a0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x9c8
	bool bIsSemi; // 0x9f0
	float Mag01Alpha; // 0x9f4
};

struct UMovieSceneSequence {
	UMovieSceneCompiledData* CompiledData; // 0x50
	EMovieSceneCompletionMode DefaultCompletionMode; // 0x58
	bool bParentContextsAreSignificant; // 0x59
	bool bPlayableDirectly; // 0x5a
	EMovieSceneSequenceFlags SequenceFlags; // 0x5b
};

struct AActorSpawnPoint {
	USceneComponent* SceneComponent; // 0x220
	UBillboardComponent* BillboardComponent; // 0x228
	char bHasVisited : 1; // 0x230
};

struct AMusicManager {
	UFMODEvent* MusicEvent; // 0x220
	FFMODEventInstance MusicEventInst; // 0x228
	FTimerHandle TH_UpdateMusicParameters; // 0x230
};

struct UNiagaraDataInterfaceSpline {
	AActor* Source; // 0x38
	FNiagaraUserParameterBinding SplineUserParameter; // 0x40
};

struct UMaterialExpressionIf {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	FExpressionInput AGreaterThanB; // 0x68
	FExpressionInput AEqualsB; // 0x7c
	FExpressionInput ALessThanB; // 0x90
	float EqualsThreshold; // 0xa4
	float ConstB; // 0xa8
	float ConstAEqualsB; // 0xac
};

struct USourceEffectMidSideSpreaderPreset {
	FSourceEffectMidSideSpreaderSettings Settings; // 0x98
};

struct APepperspray {
	UParticleSystemComponent* SprayParticleComponent; // 0x900
	UAmmoComponent* AmmoComponent; // 0x908
	UParticleSystem* ParticleStart; // 0x910
	UParticleSystem* ParticleEnd; // 0x918
	UParticleSystem* ParticleImpact; // 0x920
	UParticleSystem* ParticleRunningOut; // 0x928
	UParticleSystem* ParticleSprayLoop; // 0x930
	UParticleSystemComponent* ParticleSprayLoopComponent; // 0x938
	UFMODEvent* FMODSprayEvent; // 0x940
	UFMODEvent* FMODSprayEmptyEvent; // 0x948
	UFMODEvent* FMODImpactEvent; // 0x950
	UFMODEvent* FMODSprayLowAmmoEvent; // 0x958
	float SprayDistance; // 0x960
	char bSpraying : 1; // 0x964
	float DurationFrontTorso; // 0x968
	float DurationBackFace; // 0x96c
	float DurationFrontFace; // 0x970
	float PepperSprayAbuseDebounce; // 0x974
};

struct ADatasmithAreaLightActor {
	EComponentMobility Mobility; // 0x220
	EDatasmithAreaLightActorType LightType; // 0x221
	EDatasmithAreaLightActorShape LightShape; // 0x222
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

struct UTransformGizmo {
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

struct UMovieScene2DTransformSection {
	FMovieScene2DTransformMask TransformMask; // 0xf0
	FMovieSceneFloatChannel Translation[0x2]; // 0xf8
	FMovieSceneFloatChannel Rotation; // 0x238
	FMovieSceneFloatChannel Scale[0x2]; // 0x2d8
	FMovieSceneFloatChannel Shear[0x2]; // 0x418
};

struct UNiagaraEmitter {
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

struct UCharacterMovementComponent {
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
	EMovementMode DefaultLandMovementMode; // 0x384
	EMovementMode DefaultWaterMovementMode; // 0x385
	EMovementMode GroundMovementMode; // 0x386
	char bMaintainHorizontalGroundVelocity : 1; // 0x387
	char bImpartBaseVelocityX : 1; // 0x387
	char bImpartBaseVelocityY : 1; // 0x387
	char bImpartBaseVelocityZ : 1; // 0x387
	char bImpartBaseAngularVelocity : 1; // 0x387
	char bJustTeleported : 1; // 0x387
	char bNetworkUpdateReceived : 1; // 0x387
	char bNetworkMovementModeChanged : 1; // 0x387
	char bIgnoreClientMovementErrorChecksAndCorrection : 1; // 0x388
	char bServerAcceptClientAuthoritativePosition : 1; // 0x388
	char bNotifyApex : 1; // 0x388
	char bCheatFlying : 1; // 0x388
	char bWantsToCrouch : 1; // 0x388
	char bCrouchMaintainsBaseLocation : 1; // 0x388
	char bIgnoreBaseRotation : 1; // 0x388
	char bFastAttachedMove : 1; // 0x388
	char bAlwaysCheckFloor : 1; // 0x389
	char bUseFlatBaseForFloorChecks : 1; // 0x389
	char bPerformingJumpOff : 1; // 0x389
	char bWantsToLeaveNavWalking : 1; // 0x389
	char bUseRVOAvoidance : 1; // 0x389
	char bRequestedMoveUseAcceleration : 1; // 0x389
	char bWasSimulatingRootMotion : 1; // 0x389
	char bAllowPhysicsRotationDuringAnimRootMotion : 1; // 0x38a
	char bHasRequestedVelocity : 1; // 0x38a
	char bRequestedMoveWithMaxSpeed : 1; // 0x38a
	char bWasAvoidanceUpdated : 1; // 0x38a
	char bProjectNavMeshWalking : 1; // 0x38a
	char bProjectNavMeshOnBothWorldChannels : 1; // 0x38a
	float AvoidanceConsiderationRadius; // 0x39c
	FVector RequestedVelocity; // 0x3a0
	int32_t AvoidanceUID; // 0x3ac
	FNavAvoidanceMask AvoidanceGroup; // 0x3b0
	FNavAvoidanceMask GroupsToAvoid; // 0x3b4
	FNavAvoidanceMask GroupsToIgnore; // 0x3b8
	float AvoidanceWeight; // 0x3bc
	FVector PendingLaunchVelocity; // 0x3c0
	float NavMeshProjectionInterval; // 0x470
	float NavMeshProjectionTimer; // 0x474
	float NavMeshProjectionInterpSpeed; // 0x478
	float NavMeshProjectionHeightScaleUp; // 0x47c
	float NavMeshProjectionHeightScaleDown; // 0x480
	float NavWalkingFloorDistTolerance; // 0x484
	FCharacterMovementComponentPostPhysicsTickFunction PostPhysicsTickFunction; // 0x488
	float MinTimeBetweenTimeStampResets; // 0x4d0
	FRootMotionSourceGroup CurrentRootMotion; // 0x980
	FRootMotionSourceGroup ServerCorrectionRootMotion; // 0x9b8
	FRootMotionMovementParams RootMotionParams; // 0xa80
	FVector AnimRootMotionVelocity; // 0xac0
};

struct ATablet {
	USkeletalMeshComponent* ViewfinderMesh; // 0x8f8
	UWidgetComponent* OverlayComp; // 0x900
	UMaterial* DefaultViewfinderMaterial; // 0x908
	UMaterialInstanceDynamic* ViewfinderScreenMaterial; // 0x910
	UTabletDisplay* DisplayHUD; // 0x918
	bool bScreenOn; // 0x920
	bool bInspecting; // 0x921
};

struct UPlaneReflectionCaptureComponent {
	float InfluenceRadiusScale; // 0x270
	UDrawSphereComponent* PreviewInfluenceRadius; // 0x278
	UBoxComponent* PreviewCaptureBox; // 0x280
};

struct UARPlaneComponent {
	FARPlaneUpdatePayload ReplicatedPayload; // 0x280
};

struct UBreakpoint {
	char bEnabled : 1; // 0x28
	UEdGraphNode* Node; // 0x30
	char bStepOnce : 1; // 0x38
	char bStepOnce_WasPreviouslyDisabled : 1; // 0x38
	char bStepOnce_RemoveAfterHit : 1; // 0x38
};

struct UBTTask_PlaySound {
	USoundCue* SoundToPlay; // 0x70
};

struct UAREnvironmentCaptureProbe {
	FVector Extent; // 0xf8
	UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture; // 0x108
};

struct UButtonWidgetStyle {
	FButtonStyle ButtonStyle; // 0x30
};

struct UTexture {
	FGuid LightingGuid; // 0x68
	int32_t LODBias; // 0x78
	TextureCompressionSettings CompressionSettings; // 0x7c
	TextureFilter Filter; // 0x7d
	ETextureMipLoadOptions MipLoadOptions; // 0x7e
	TextureGroup LODGroup; // 0x7f
	FPerPlatformFloat Downscale; // 0x80
	ETextureDownscaleOptions DownscaleOptions; // 0x84
	char sRGB : 1; // 0x85
	char bNoTiling : 1; // 0x85
	char VirtualTextureStreaming : 1; // 0x85
	char CompressionYCoCg : 1; // 0x85
	char bNotOfflineProcessed : 1; // 0x85
	char bAsyncResourceReleaseHasBeenStarted : 1; // 0x85
	TArray<UAssetUserData*> AssetUserData; // 0x88
};

struct UDoorInteractionActivity {
	ADoor* Door; // 0x1a8
	FVector CommandLocation; // 0x1b0
};

struct UDatasmithMaterialInstanceTemplate {
	TSoftObjectPtr<UMaterialInterface> ParentMaterial; // 0x30
	TMap<FName, float> ScalarParameterValues; // 0x58
	TMap<FName, FLinearColor> VectorParameterValues; // 0xa8
	TMap<FName, TSoftObjectPtr<UTexture>> TextureParameterValues; // 0xf8
	FDatasmithStaticParameterSetTemplate StaticParameters; // 0x148
};

struct ABP_RoNBloodDrip_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x228
	UMaterialInstanceDynamic* BloodMaterial; // 0x230
	float BloodGrowRate; // 0x238
	float CurrentBloodGrowth; // 0x23c
	bool bBleeding; // 0x240
	float InitialReveal; // 0x244
};

struct UActorSequence {
	UMovieScene* MovieScene; // 0x60
	FActorSequenceObjectReferenceMap ObjectReferences; // 0x68
};

struct UW_TeamProgressScore_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2a0
	UOverlay* CurrentScore_Overlay; // 0x2a8
	UOverlay* CurrentScore_Overlay_Right; // 0x2b0
	UHorizontalBox* LeftAligned_HorizontalBox; // 0x2b8
	UOverlay* ProgressBar_Overlay; // 0x2c0
	UOverlay* ProgressBar_Overlay_Right; // 0x2c8
	UHorizontalBox* RightAligned_HorizontalBox; // 0x2d0
	UWidgetSwitcher* StyleSwitcher; // 0x2d8
	EHorizontalAlignment Alignment; // 0x2e0
};

struct UMovieSceneEntitySystem {
	UMovieSceneEntitySystemLinker* Linker; // 0x28
};

struct UImgMediaPlaybackComponent {
	float Width; // 0xb0
	float LODBias; // 0xb4
};

struct ATrapActivator {
	TArray<ATrapActivatee*> Activatees; // 0x220
	bool bDisarmed; // 0x230
};

struct UCurveVector {
	FRichCurve FloatCurves[0x3]; // 0x30
};

struct URectLightComponent {
	float SourceWidth; // 0x340
	float SourceHeight; // 0x344
	float BarnDoorAngle; // 0x348
	float BarnDoorLength; // 0x34c
	UTexture* SourceTexture; // 0x350
};

struct UStaticMesh {
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
	char bSupportRayTracing : 1; // 0xb4
	char bIsBuiltAtRuntime : 1; // 0xb4
	char bAllowCPUAccess : 1; // 0xb5
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

struct APickupMagazineActor {
	FName MagazineLabel; // 0x288
	float MinimumHitThreshold; // 0x290
	UFMODEvent* DroppedMagazineHitEvent; // 0x298
	float AmmoRemaining; // 0x2a0
	ABaseMagazineWeapon* CameFromWeapon; // 0x2a8
};

struct UBTTask_PushPawnAction {
	UPawnAction* Action; // 0x70
};

struct UEngine {
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

struct ATugOfWarGS {
	ATugOfWarMover* Mover; // 0x6c0
};

struct UMovieSceneLevelVisibilityTrack {
	TArray<UMovieSceneSection*> Sections; // 0x90
};

struct UFootstepComponent {
	TArray<FName> FootNames; // 0xb0
	bool bDebugFootstepTrace; // 0xc0
	float VelocityToMinVolume; // 0xc4
	float VelocityMaxVolume; // 0xc8
	bool bShouldRattle; // 0xcc
	float FootstepVolumeMultiplier; // 0xd0
	USoundCue* DefaultFootstepSound; // 0xd8
	USoundAttenuation* FootstepAttenuation; // 0xe0
	USoundConcurrency* FootstepConcurency; // 0xe8
	bool bAutoFootRotation; // 0xf0
	bool bUseFootstepParticles; // 0xf1
	bool bUseFootstepSounds; // 0xf2
	float FootstepTraceLength; // 0xf4
	float FootstepThresholdTraceLength; // 0xf8
	bool bFootTraceComplex; // 0xfc
	float FootstepMinCycleInterval; // 0x100
	float FootstepTraceLengthThreshold; // 0x104
	float FootstepParticleScale; // 0x108
	UAudioComponent* FootstepSoundComponent; // 0x128
};

struct URadialSectorWidget {
	UPanelWidget* SectorImagePanel; // 0x260
	UImage* SectorImage; // 0x268
	float SectorInnerRadius; // 0x270
	float SectorOuterRadius; // 0x274
};

struct USourceEffectFoldbackDistortionPreset {
	FSourceEffectFoldbackDistortionSettings Settings; // 0x9c
};

struct UW_BadAIActionReporter_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UW_Button_C* Cancel_Button; // 0x268
	UMultiLineEditableTextBox* Description_EditableMultilineText; // 0x270
	UW_Button_C* Report_Button; // 0x278
	UTextBlock* ReportLocation_Text; // 0x280
	UEditableTextBox* Summary_EditableText; // 0x288
};

struct UAnimNotifyState_HideBoneVis {
	FName BoneNameToHide; // 0x30
};

struct UMovieSceneFadeSection {
	FMovieSceneFloatChannel FloatCurve; // 0xe8
	FLinearColor FadeColor; // 0x188
	char bFadeAudio : 1; // 0x198
};

struct UVolumetricCloudComponent {
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
	float StopTracingTransmittanceThreshold; // 0x234
};

struct UBuildPatchManifest {
	char ManifestFileVersion; // 0x28
	bool bIsFileData; // 0x29
	uint32_t AppId; // 0x2c
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

struct UMaterialExpressionLandscapePhysicalMaterialOutput {
	TArray<FPhysicalMaterialInput> Inputs; // 0x40
};

struct UHudSettings {
	char bShowHUD : 1; // 0x28
	TArray<FName> DebugDisplay; // 0x30
};

struct UTimeSynchronizationSource {
	bool bUseForSynchronization; // 0x28
	int32_t FrameOffset; // 0x2c
};

struct UClothPhysicalMeshDataNv_Legacy {
	TArray<float> MaxDistances; // 0xe0
	TArray<float> BackstopDistances; // 0xf0
	TArray<float> BackstopRadiuses; // 0x100
	TArray<float> AnimDriveMultipliers; // 0x110
};

struct APrimary_UMP45_v2_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1130
};

struct AProceduralFoliageBlockingVolume {
	AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x258
};

struct UANIMBP_M320_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x308
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x350
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x458
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x478
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x498
};

struct USystemTimeTimecodeProvider {
	FFrameRate FrameRate; // 0x30
	bool bGenerateFullFrame; // 0x38
	bool bUseHighPerformanceClock; // 0x39
};

struct AGameNetworkManager {
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

struct APlanarReflection {
	UPlanarReflectionComponent* PlanarReflectionComponent; // 0x230
	bool bShowPreviewPlane; // 0x238
};

struct APrimary_FAL_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1130
};

struct ANavSystemConfigOverride {
	UNavigationSystemConfig* NavigationSystemConfig; // 0x220
	ENavSystemOverridePolicy OverridePolicy; // 0x228
	char bLoadOnClient : 1; // 0x229
};

struct UW_Compass_V3_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UCanvasPanel* CompassCircle; // 0x268
	UImage* img_Circle; // 0x270
	UImage* img_Dir; // 0x278
	UW_Text_C* lbl_E; // 0x280
	UW_Text_C* lbl_N; // 0x288
	UW_Text_C* lbl_S; // 0x290
	UW_Text_C* lbl_W; // 0x298
};

struct UBTDecorator_BlackboardBase {
	FBlackboardKeySelector BlackboardKey; // 0x68
};

struct ASecondary_FiveSeven_V2_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1130
};

struct ULeaderboardQueryCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UStaticMeshComponent {
	int32_t ForcedLodModel; // 0x478
	int32_t PreviousLODLevel; // 0x47c
	int32_t MinLOD; // 0x480
	int32_t SubDivisionStepSize; // 0x484
	UStaticMesh* StaticMesh; // 0x488
	FColor WireframeColorOverride; // 0x490
	char bEvaluateWorldPositionOffset : 1; // 0x494
	char bOverrideWireframeColor : 1; // 0x494
	char bOverrideMinLod : 1; // 0x494
	char bOverrideNavigationExport : 1; // 0x494
	char bForceNavigationObstacle : 1; // 0x494
	char bDisallowMeshPaintPerInstance : 1; // 0x494
	char bIgnoreInstanceForTextureStreaming : 1; // 0x494
	char bOverrideLightMapRes : 1; // 0x494
	char bCastDistanceFieldIndirectShadow : 1; // 0x495
	char bOverrideDistanceFieldSelfShadowBias : 1; // 0x495
	char bUseSubDivisions : 1; // 0x495
	char bUseDefaultCollision : 1; // 0x495
	char bReverseCulling : 1; // 0x495
	int32_t OverriddenLightMapRes; // 0x498
	float DistanceFieldIndirectShadowMinVisibility; // 0x49c
	float DistanceFieldSelfShadowBias; // 0x4a0
	float StreamingDistanceMultiplier; // 0x4a4
	TArray<FStaticMeshComponentLODInfo> LODData; // 0x4a8
	TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x4b8
	FLightmassPrimitiveSettings LightmassSettings; // 0x4c8
};

struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
	FAppleImageUtilsImageConversionResult ConversionResult; // 0x60
};

struct AMagicLeapARPinInfoActor_C {
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

struct UPhononSpatializationSourceSettings {
	EIplSpatializationMethod SpatializationMethod; // 0x28
	EIplHrtfInterpolationMethod HrtfInterpolationMethod; // 0x29
};

struct UANIMBP_AI_MoveStyle_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa80
	FAnimNode_LegIK AnimGraphNode_LegIK_6; // 0xa88
	FAnimNode_LegIK AnimGraphNode_LegIK_5; // 0xb80
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4; // 0xc78
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4; // 0xc98
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_28; // 0xcb8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3; // 0xce0
	FAnimNode_LegIK AnimGraphNode_LegIK_4; // 0xd00
	FAnimNode_LegIK AnimGraphNode_LegIK_3; // 0xdf8
	FAnimNode_LegIK AnimGraphNode_LegIK_2; // 0xef0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3; // 0xfe8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_27; // 0x1008
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_15; // 0x1030
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_26; // 0x10d0
	FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot_2; // 0x10f8
	FAnimNode_Slot AnimGraphNode_Slot_6; // 0x1188
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3; // 0x11d0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_6; // 0x1220
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_14; // 0x12e0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_25; // 0x1380
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x13a8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x13d0
	FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot; // 0x13f8
	FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x1488
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x14b8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_13; // 0x1508
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x15a8
	FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x15f8
	FAnimNode_StateMachine AnimGraphNode_StateMachine_3; // 0x1628
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_24; // 0x16d8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x1700
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x1808
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x1828
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x1930
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x1950
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1a58
	FAnimNode_Slot AnimGraphNode_Slot_5; // 0x1b60
	FAnimNode_Slot AnimGraphNode_Slot_4; // 0x1ba8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_12; // 0x1bf0
	FAnimNode_Slot AnimGraphNode_Slot_3; // 0x1c90
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_5; // 0x1cd8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_11; // 0x1d98
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x1ef0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_4; // 0x1f38
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_23; // 0x1ff8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_22; // 0x2020
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_21; // 0x2048
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3; // 0x2070
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2130
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_10; // 0x2178
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_20; // 0x22d0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_19; // 0x22f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x2320
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x2348
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2370
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2398
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_18; // 0x23c0
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x23e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_31; // 0x2418
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x2498
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_30; // 0x24c8
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x2548
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_29; // 0x2578
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x25f8
	FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x2628
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_9; // 0x26d8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_17; // 0x2830
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_16; // 0x2858
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_15; // 0x2880
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_14; // 0x28a8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_8; // 0x28d0
	FAnimNode_LegIK AnimGraphNode_LegIK; // 0x2a28
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_7; // 0x2b20
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_6; // 0x2c78
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_13; // 0x2dd0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_11; // 0x2df8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_12; // 0x2e98
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_10; // 0x2ec0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_28; // 0x2f60
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5; // 0x2fe0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_9; // 0x3138
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver_6; // 0x31d8
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver_5; // 0x3340
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_11; // 0x34a8
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver_4; // 0x34d0
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver_3; // 0x3638
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0x37a0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_10; // 0x38f8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_9; // 0x3920
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x3948
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x3aa0
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver_2; // 0x3b60
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8; // 0x3cc8
	FAnimNode_PoseDriver AnimGraphNode_PoseDriver; // 0x3cf0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x3e58
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_27; // 0x3f18
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x3f98
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_8; // 0x40f0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_2; // 0x4190
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0x4320
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_26; // 0x4348
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x43c8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x4558
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x4578
	FAnimNode_SlopeWarping AnimGraphNode_SlopeWarping; // 0x4598
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x47c0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x47e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_25; // 0x4810
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_24; // 0x4890
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_23; // 0x4910
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_22; // 0x4990
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_21; // 0x4a10
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_20; // 0x4a90
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_19; // 0x4b10
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_4; // 0x4b90
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_18; // 0x4c40
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_17; // 0x4cc0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_16; // 0x4d40
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15; // 0x4dc0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14; // 0x4e40
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_7; // 0x4ec0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13; // 0x4f60
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0x4fe0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0x5060
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_3; // 0x50e0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x5190
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6; // 0x5210
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; // 0x52b0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x5350
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x53f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x5490
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x5510
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x5590
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x5610
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x5690
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_2; // 0x5710
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x57d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x58a0
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x5920
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x5950
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x59d0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x5a50
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x5af0
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x5b20
	FAnimNode_Root AnimGraphNode_Root; // 0x5bd0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_2; // 0x5c00
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x5cb0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x5cd8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x5d00
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x5d28
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x5d50
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x5df0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x5eb8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x5f38
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x5fe8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x6140
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x6168
	FAnimInput_CapsuleLocomotion AnimInputCapsule; // 0x6190
};

struct UInterpTrackInstBoolProp {
	bool ResetBool; // 0x60
};

struct UNiagaraDataInterfaceCubeTexture {
	UTextureCube* Texture; // 0x38
};

struct UMagicLeapARPinContentBindings {
	TMap<FGuid, FMagicLeapARPinObjectIdList> AllContentBindings; // 0x28
};

struct UW_DamagePaperdoll_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2a8
	bool bFlashingHead; // 0x2b0
	bool bFlashingLeftLeg; // 0x2b1
	bool bFlashingLeftArm; // 0x2b2
	bool bFlashingRightLeg; // 0x2b3
	bool bFlashingRightArm; // 0x2b4
	bool bFlashingBody; // 0x2b5
	bool bDamagedLeftLeg; // 0x2b6
	bool bDamagedRightLeg; // 0x2b7
	bool bDamagedHead; // 0x2b8
	bool bDamagedBody; // 0x2b9
	bool bDamagedLeftArm; // 0x2ba
	bool bDamagedRightArm; // 0x2bb
	float FlashingTime; // 0x2bc
	bool bShowFlashyBits; // 0x2c0
	float FlashOnLength; // 0x2c4
	float FlashOffLength; // 0x2c8
	float FlashOnDurationLeft; // 0x2cc
	float FlashOffDurationLeft; // 0x2d0
	FLinearColor HealedPaperdollColor; // 0x2d4
	FLinearColor DamagedPaperdollColor; // 0x2e4
	FLinearColor FinalDamagedPaperdollColor; // 0x2f4
	bool bHealedLeftLeg; // 0x304
	bool bHealedRightLeg; // 0x305
	bool bHealedRightArm; // 0x306
	bool bHealedLeftArm; // 0x307
	bool bHealedHead; // 0x308
};

struct UNiagaraSpriteRendererProperties {
	UMaterialInterface* Material; // 0x78
	ENiagaraRendererSourceDataMode SourceMode; // 0x80
	FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x88
	ENiagaraSpriteAlignment Alignment; // 0xa8
	ENiagaraSpriteFacingMode FacingMode; // 0xa9
	FVector2D PivotInUVSpace; // 0xac
	ENiagaraSortMode SortMode; // 0xb4
	FVector2D SubImageSize; // 0xb8
	char bSubImageBlend : 1; // 0xc0
	char bRemoveHMDRollInVR : 1; // 0xc0
	char bSortOnlyWhenTranslucent : 1; // 0xc0
	char bGpuLowLatencyTranslucency : 1; // 0xc0
	float MinFacingCameraBlendDistance; // 0xc4
	float MaxFacingCameraBlendDistance; // 0xc8
	char bEnableCameraDistanceCulling : 1; // 0xcc
	float MinCameraDistance; // 0xd0
	float MaxCameraDistance; // 0xd4
	uint32_t RendererVisibility; // 0xd8
	FNiagaraVariableAttributeBinding PositionBinding; // 0xe0
	FNiagaraVariableAttributeBinding ColorBinding; // 0x138
	FNiagaraVariableAttributeBinding VelocityBinding; // 0x190
	FNiagaraVariableAttributeBinding SpriteRotationBinding; // 0x1e8
	FNiagaraVariableAttributeBinding SpriteSizeBinding; // 0x240
	FNiagaraVariableAttributeBinding SpriteFacingBinding; // 0x298
	FNiagaraVariableAttributeBinding SpriteAlignmentBinding; // 0x2f0
	FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x348
	FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x3a0
	FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x3f8
	FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x450
	FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x4a8
	FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x500
	FNiagaraVariableAttributeBinding UVScaleBinding; // 0x558
	FNiagaraVariableAttributeBinding PivotOffsetBinding; // 0x5b0
	FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x608
	FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x660
	FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x6b8
	FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x710
	TArray<FNiagaraMaterialAttributeBinding> MaterialParameterBindings; // 0x768
	FNiagaraVariableAttributeBinding PrevPositionBinding; // 0x778
	FNiagaraVariableAttributeBinding PrevVelocityBinding; // 0x7d0
	FNiagaraVariableAttributeBinding PrevSpriteRotationBinding; // 0x828
	FNiagaraVariableAttributeBinding PrevSpriteSizeBinding; // 0x880
	FNiagaraVariableAttributeBinding PrevSpriteFacingBinding; // 0x8d8
	FNiagaraVariableAttributeBinding PrevSpriteAlignmentBinding; // 0x930
	FNiagaraVariableAttributeBinding PrevCameraOffsetBinding; // 0x988
	FNiagaraVariableAttributeBinding PrevPivotOffsetBinding; // 0x9e0
};

struct UTextPropertyTestObject {
	FText DefaultedText; // 0x28
	FText UndefaultedText; // 0x40
	FText TransientText; // 0x58
};

struct UCurveLinearColorAtlas {
	uint32_t TextureSize; // 0x1a0
	char bSquareResolution : 1; // 0x1a4
	uint32_t TextureHeight; // 0x1a8
	TArray<UCurveLinearColor*> GradientCurves; // 0x1b0
};

struct UHorizontalBoxSlot {
	FMargin Padding; // 0x40
	FSlateChildSize Size; // 0x50
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
};

struct UEnvQueryTest_Overlap {
	FEnvOverlapData OverlapData; // 0x1f8
};

struct AActivityRouteActor {
	TArray<FActivityRoute> ActivityRoute; // 0x220
	FColor PathColor; // 0x230
	int32_t ActivityIdx; // 0x234
};

struct UMovieSceneCameraAnimSection {
	FMovieSceneCameraAnimSectionData AnimData; // 0xe8
	UCameraAnim* CameraAnim; // 0x108
	float PlayRate; // 0x110
	float PlayScale; // 0x114
	float BlendInTime; // 0x118
	float BlendoutTime; // 0x11c
	bool bLooping; // 0x120
};

struct UStreamableRenderAsset {
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

struct UBookMark {
	FVector Location; // 0x28
	FRotator Rotation; // 0x34
	TArray<FString> HiddenLevels; // 0x40
};

struct AMusicSequencerBase {
	USceneComponent* Scene; // 0x220
};

struct UMediaSoundComponent {
	EMediaSoundChannels Channels; // 0x6c0
	bool DynamicRateAdjustment; // 0x6c4
	float RateAdjustmentFactor; // 0x6c8
	FFloatRange RateAdjustmentRange; // 0x6cc
	UMediaPlayer* MediaPlayer; // 0x6e0
};

struct UConsoleSettings {
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

struct UMaterialExpressionHairAttributes {
	char bUseTangentSpace : 1; // 0x40
};

struct UBaseCombatActivity {
	AReadyOrNotCharacter* CurrentTarget; // 0x1b0
	FScriptedFireAt CurrentScriptedFireAt; // 0x1b8
	UBaseCombatMoveActivity* CombatMoveActivity; // 0x1c8
	float CoverEvaluationCooldown; // 0x1e0
	AReadyOrNotCharacter* LastTrackedEnemy; // 0x1e8
	FMulticastInlineDelegate OnTrackNewEnemy; // 0x208
};

struct UCombinedCombatActivity {
	ECombatState CombatState; // 0x233
	AReadyOrNotCharacter* LastTrackedEnemyInDangerousState; // 0x248
	UFleeingCombatMove* FleeingCombatMove; // 0x258
	ACyberneticCharacter* TargetedCivilian; // 0x270
	TArray<ACyberneticCharacter*> UnpathableCivilians; // 0x278
};

struct AInteractiveFoliageActor {
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

struct APVPTriggerBox {
	UTextRenderComponent* TextRender; // 0x228
	UObjectiveMarkerComponent* ObjectiveMarkerComponent; // 0x230
	TArray<APlayerCharacter*> CharactersInTriggerBox; // 0x238
	float TimeElapsed; // 0x248
	float PreviousTimeElapsed; // 0x24c
	char bEntered : 1; // 0x250
	float TimeNeededToStay_Editor; // 0x254
	float TimeNeededToStay; // 0x258
	float TimeNeededToStay_Active; // 0x25c
	TArray<ETeamType> OnlyAcceptTeams; // 0x260
	TArray<FName> OnlyAcceptActorsWithTags; // 0x270
	char bLogDebugInfo : 1; // 0x280
	FTimerHandle TH_TimerEventExpiry; // 0x288
};

struct UMaterialExpressionArccosine {
	FExpressionInput Input; // 0x40
};

struct UARCandidateImage {
	UTexture2D* CandidateTexture; // 0x30
	FString FriendlyName; // 0x38
	float Width; // 0x48
	float Height; // 0x4c
	EARCandidateImageOrientation Orientation; // 0x50
};

struct UInterpToMovementComponent {
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

struct UParticleModuleSubUV {
	USubUVAnimation* Animation; // 0x30
	FRawDistributionFloat SubImageIndex; // 0x38
	char bUseRealTime : 1; // 0x68
};

struct UParticleModuleTrailSource {
	ETrail2SourceMethod SourceMethod; // 0x30
	FName SourceName; // 0x34
	FRawDistributionFloat SourceStrength; // 0x40
	char bLockSourceStength : 1; // 0x70
	int32_t SourceOffsetCount; // 0x74
	TArray<FVector> SourceOffsetDefaults; // 0x78
	EParticleSourceSelectionMethod SelectionMethod; // 0x88
	char bInheritRotation : 1; // 0x8c
};

struct UEditableStaticMeshAdapter {
	UStaticMesh* StaticMesh; // 0x28
	UStaticMesh* OriginalStaticMesh; // 0x30
	int32_t StaticMeshLODIndex; // 0x38
};

struct UMagicLeapLightingTrackingComponent {
	bool UseGlobalAmbience; // 0xb0
	bool UseColorTemp; // 0xb1
};

struct ASpectatorBeaconClient {
	FString DestSessionId; // 0x2e0
	FSpectatorReservation PendingReservation; // 0x2f0
	ESpectatorClientRequestType RequestType; // 0x368
	bool bPendingReservationSent; // 0x369
	bool bCancelReservation; // 0x36a
};

struct UDatasmithFBXSceneImportData {
	bool bGenerateLightmapUVs; // 0x28
	FString TexturesDir; // 0x30
	char IntermediateSerialization; // 0x40
	bool bColorizeMaterials; // 0x41
};

struct UArchVisCharMovementComponent {
	FRotator RotationalAcceleration; // 0xaf0
	FRotator RotationalDeceleration; // 0xafc
	FRotator MaxRotationalVelocity; // 0xb08
	float MinPitch; // 0xb14
	float MaxPitch; // 0xb18
	float WalkingFriction; // 0xb1c
	float WalkingSpeed; // 0xb20
	float WalkingAcceleration; // 0xb24
};

struct UMagicLeapHeadTrackingNotificationsComponent {
	FMulticastInlineDelegate OnHeadTrackingLost; // 0x140
	FMulticastInlineDelegate OnHeadTrackingRecovered; // 0x150
	FMulticastInlineDelegate OnHeadTrackingRecoveryFailed; // 0x160
	FMulticastInlineDelegate OnHeadTrackingNewSessionStarted; // 0x170
};

struct UChaosDestructionListener {
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

struct AServerStatReplicator {
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

struct UMovieSceneCameraCutTrack {
	bool bCanBlend; // 0x90
	TArray<UMovieSceneSection*> Sections; // 0x98
};

struct UNiagaraDataInterfaceAudioSubmix {
	USoundSubmix* Submix; // 0x38
};

struct USoundGroups {
	TArray<FSoundGroup> SoundGroupProfiles; // 0x28
};

struct UHealthStatusWidget {
	UImage* Icon_Image; // 0x260
	UTextBlock* Percentage_Text; // 0x268
	FSlateBrush HealthIconBrush; // 0x270
	FSlateBrush EmptyHealthIconBrush; // 0x2f8
	FLinearColor ZeroPercentColor; // 0x380
	FLinearColor OneHundredPercentColor; // 0x390
};

struct AArrestAndRescueGM {
	bool bSuddenDeath; // 0x6d8
	TArray<APlayerCharacter*> ArrestedBlueCharacters; // 0x6e0
	TArray<APlayerCharacter*> ArrestedRedCharacters; // 0x6f0
	UFMODEvent* VIPArrestedSound; // 0x700
	UFMODEvent* VIPKilledSound; // 0x708
};

struct UAnimNotify_PlayParticleEffect {
	UParticleSystem* PSTemplate; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	FVector Scale; // 0x58
	char Attached : 1; // 0x80
	FName SocketName; // 0x84
};

struct USourceEffectRingModulationPreset {
	FSourceEffectRingModulationSettings Settings; // 0xb0
};

struct UBackgroundBlur {
	FMargin Padding; // 0x120
	EHorizontalAlignment HorizontalAlignment; // 0x130
	EVerticalAlignment VerticalAlignment; // 0x131
	bool bApplyAlphaToBlur; // 0x132
	float BlurStrength; // 0x134
	bool bOverrideAutoRadiusCalculation; // 0x138
	int32_t BlurRadius; // 0x13c
	FSlateBrush LowQualityFallbackBrush; // 0x140
};

struct UDeployableData {
	FText DeployableName; // 0x30
	FText DeployableShortName; // 0x48
	FText DeployableDescription; // 0x60
	TSoftObjectPtr<UTexture2D> DeployableTexture; // 0x78
	FName DeployableLabel; // 0xa0
};

struct UNiagaraPrecompileContainer {
	TArray<UNiagaraScript*> Scripts; // 0x28
	UNiagaraSystem* System; // 0x38
};

struct UFloatingPawnMovement {
	float MaxSpeed; // 0x138
	float Acceleration; // 0x13c
	float Deceleration; // 0x140
	float TurningBoost; // 0x144
	char bPositionCorrected : 1; // 0x148
};

struct AOutOfBoundsVolume {
	UBoxComponent* Bounds; // 0x220
};

struct URuntimeVirtualTextureComponent {
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

struct ATransformGizmoActor {
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

struct APartyBeaconClient {
	FString DestSessionId; // 0x2e0
	FPartyReservation PendingReservation; // 0x2f0
	EClientRequestType RequestType; // 0x340
	bool bPendingReservationSent; // 0x341
	bool bCancelReservation; // 0x342
};

struct UPhysicsHandleComponent {
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

struct URendererOverrideSettings {
	char bSupportAllShaderPermutations : 1; // 0x38
	char bForceRecomputeTangents : 1; // 0x38
};

struct UDistributionFloatUniformCurve {
	FInterpCurveVector2D ConstantCurve; // 0x38
};

struct UW_RSReplayEntry_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* PlayButton; // 0x268
	UTextBlock* TextBlock_1; // 0x270
	FString ReplayFriendlyName; // 0x278
	FString ReplayFileName; // 0x288
	int32_t length in ms; // 0x298
};

