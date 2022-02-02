// Created by BlueFire1337
// Updated 2022-01-28
// Generated 2022-02-02

namespace off {
	constexpr auto GNames = 0xc012540;
	constexpr auto GObjects = 0xc02ab38;
	constexpr auto GWorld = 0xc142828;
}

struct UMOCheckBoxEntry : UMOOptionsEntry {
	UMOCheckBox* pMOCheckBox; // 0x318
};

struct UMOTaskAcceptPanel : UMOTaskPanel {
	UMOButton* pMOButton; // 0x2d0
	UMOTaskItemListEntry* pSelectedEntry; // 0x2d8
	UMOScrollBox* pMOScrollBox_TaskEntries; // 0x2e0
	UTextBlock* pTextBlock_TaskDescription; // 0x2e8
};

struct UMaterialExpressionDesaturation : UMaterialExpression {
	FExpressionInput Input; // 0x40
	FExpressionInput Fraction; // 0x54
	FLinearColor LuminanceFactors; // 0x68
};

struct UFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator {
	FEnvTraceData ProjectionData; // 0x50
};

struct UMODataAssetAudioVisualParameter : UPrimaryDataAsset {
	EVisualMaterialType Type; // 0x30
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

struct UWB_MOCharCreationInfoEntry_C : UMOCharCreationInfoEntry {
	FPointerToUberGraphFrame UberGraphFrame; // 0x328
	UWidgetAnimation* UpdateValue; // 0x330
	UHorizontalBox* HorizontalBox_6; // 0x338
};

struct UPlayMontageCallbackProxy : UObject {
	FMulticastInlineDelegate OnCompleted; // 0x28
	FMulticastInlineDelegate OnBlendOut; // 0x38
	FMulticastInlineDelegate OnInterrupted; // 0x48
	FMulticastInlineDelegate OnNotifyBegin; // 0x58
	FMulticastInlineDelegate OnNotifyEnd; // 0x68
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

struct UMOCharCreationPanel : UMOUserWidget {
	UMOCharacterCreationNew* pCharCreation; // 0x2c8
};

struct AMOEquipmentActorBow : AMOEquipmentActor {
	USkeletalMeshComponent* BowComponent; // 0x288
	UChildActorComponent* ArrowChildActorComponent; // 0x290
	FMOEquipmentActorBowData BowData; // 0x298
	FMOEquipmentActorArrowData arrowData; // 0x2c0
	UMaterialInstanceDynamic* BaseMID; // 0x2f0
	UMaterialInstanceDynamic* CompositeMID; // 0x2f8
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

struct UCameraModifier : UObject {
	char bDebug : 1; // 0x28
	char bExclusive : 1; // 0x28
	char Priority; // 0x2c
	APlayerCameraManager* CameraOwner; // 0x30
	float AlphaInTime; // 0x38
	float AlphaOutTime; // 0x3c
	float Alpha; // 0x40
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

struct USoundNodeConcatenator : USoundNode {
	TArray<float> InputVolume; // 0x48
};

struct UMODataAssetEmoteDefinitions : UPrimaryDataAsset {
	TArray<UMODataAssetEmoteBaseDefinition*> pDefinitions; // 0x30
};

struct UInterpTrackInstAnimControl : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
};

struct URectLightComponent : ULocalLightComponent {
	float SourceWidth; // 0x340
	float SourceHeight; // 0x344
	float BarnDoorAngle; // 0x348
	float BarnDoorLength; // 0x34c
	UTexture* SourceTexture; // 0x350
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

struct UParticleModuleLocationWorldOffset_Seeded : UParticleModuleLocationWorldOffset {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct USoundNodeParamCrossFade : USoundNodeDistanceCrossFade {
	FName ParamName; // 0x58
};

struct UInputComponent : UActorComponent {
	TArray<FCachedKeyToActionInfo> CachedKeyToActionInfo; // 0x120
};

struct UBTTask_RotateToFaceBBEntry : UBTTask_BlackboardBase {
	float Precision; // 0x98
};

struct UEditableGameplayTagQueryExpression_NoTagsMatch : UEditableGameplayTagQueryExpression {
	FGameplayTagContainer Tags; // 0x28
};

struct UMOJournalPanel : UMOUserWidget {
	UMOJournal* pJournal; // 0x2c8
};

struct UNiagaraDataInterfaceParticleRead : UNiagaraDataInterfaceRWBase {
	FString EmitterName; // 0xd8
};

struct UPropertyBinding : UObject {
	TWeakObjectPtr<UObject> SourceObject; // 0x28
	FDynamicPropertyPath SourcePath; // 0x30
	FName DestinationProperty; // 0x58
};

struct UMaterialExpressionGIReplace : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput StaticIndirect; // 0x54
	FExpressionInput DynamicIndirect; // 0x68
};

struct UAchievementWriteCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct ULocalizedOverlays : UOverlays {
	UBasicOverlays* DefaultOverlays; // 0x28
	TMap<FString, UBasicOverlays*> LocaleToOverlaysMap; // 0x30
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

struct UMOUserWidgetTabButtonNew : UMOUserWidget {
	int32_t iFontSize; // 0x2c8
	UButton* pButton; // 0x2d0
	UTextBlock* pTextBlock; // 0x2d8
	FText sTooltip; // 0x2e0
	int32_t iTabIndex; // 0x2f8
	FMulticastInlineDelegate TabIndexDelegate; // 0x300
};

struct UAsyncActionLoadPrimaryAssetList : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UUniformGridSlot : UPanelSlot {
	EHorizontalAlignment HorizontalAlignment; // 0x38
	EVerticalAlignment VerticalAlignment; // 0x39
	int32_t Row; // 0x3c
	int32_t column; // 0x40
};

struct UOnlineSessionClient : UOnlineSession {
	bool bIsFromInvite; // 0x1d8
	bool bHandlingDisconnect; // 0x1d9
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

struct USizeBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
};

struct UEnvQueryTest_Project : UEnvQueryTest {
	FEnvTraceData ProjectionData; // 0x1f8
};

struct APaperTileMapActor : AActor {
	UPaperTileMapComponent* RenderComponent; // 0x220
};

struct UMOEtherworldSubsystem : UMOWorldSubsystemBase {
	bool bEtherworldIsActive; // 0x40
	bool bDeadAvatarsIsVisibleInWorld; // 0x41
	bool bLivingAvatarsIsVisibleInEther; // 0x42
	FMulticastInlineDelegate OnEtherworldStateChanged; // 0x48
	USoundCue* pSoundCue_AmbientSound; // 0x58
	USoundMix* pSoundMix_Ether; // 0x60
	UNiagaraSystem* pParticleSystem_EtherBodyClient; // 0x68
	UNiagaraSystem* pParticleSystem_Ambient; // 0x70
	UTexture* pEtherworldLUT; // 0x78
	UTexture* pDefaultLUT; // 0x80
	UNiagaraComponent* pNiagaraComponent_BodyClient; // 0x88
	UNiagaraComponent* pNiagaraComponent_Ambient; // 0x90
	UAudioComponent* pAudioComponent; // 0x98
};

struct UDatasmithGLTFSceneImportData : UDatasmithSceneImportData {
	FString Generator; // 0x28
	float Version; // 0x38
	FString Author; // 0x40
	FString License; // 0x50
	FString Source; // 0x60
};

struct UBP_MODragDropOperationItem_C : UMODragDropOperationItem {
	UWB_ButtonItem_C* DragSlotRef; // 0xa8
	UMaterialInstanceDynamic* Material; // 0xb0
	UWB_ItemSlotActionbar_C* ActionSlotRef; // 0xb8
	UWB_ItemSlotContainer_C* ContainerSlotRef; // 0xc0
	UWB_ItemSlotPaperdoll_C* PaperdollSlotRef; // 0xc8
	UObject* CraftingSlotRef; // 0xd0
	FString sItemDataJson; // 0xd8
	bool bIllegal; // 0xe8
	bool bDontAttemptDropItem; // 0xe9
};

struct AMOMagicActor : AActor {
	AMOMagicEffectBall* pMagicBallEffect; // 0x220
	AMOMagicEffectBall* cMagicBallEffectClass; // 0x238
	UMODataAssetMagic* pCurrentDataAsset; // 0x260
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

struct UMOCraftingBow : UMOCrafting {
	UMOScrollBox* pScrollBox_BowType; // 0x310
	UMOScrollBox* pScrollBox_BowShape; // 0x318
	UMOScrollBox* pScrollBox_BowMaterialSetup; // 0x320
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_BowBaseMaterial; // 0x328
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_BowSecondaryMaterial; // 0x330
	UMOCraftingSliderWidget* pCraftingSlider_Bow; // 0x338
	UMaterialInstance* pPreviewMaterial; // 0x340
	FString sBowMaterialBaseName; // 0x348
	FString sBowMaterialSecondaryName; // 0x358
	FString sBowShapeName; // 0x368
	FString sBowTypeName; // 0x378
	FString sBowMaterialSetup; // 0x388
	TArray<FBowCraftingInfo_BowShape> vCraftingInfo_BowShape; // 0x398
	TArray<FBowCraftingInfo_BowType> vCraftingInfo_BowType; // 0x3a8
};

struct UAB_CH_Player_Male_Human_Head_C : UMOAnimationInstancePlayerHead {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3e0
	FMOAnimNode_CachedFacePose MOAnimGraphNode_CachedFacePose_2; // 0x3e8
	FMOAnimNode_FaceDriver MOAnimGraphNode_FaceDriver_2; // 0x438
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_2; // 0x470
	FMOAnimNode_CachedFacePose MOAnimGraphNode_CachedFacePose; // 0x488
	FMOAnimNode_FaceDriver MOAnimGraphNode_FaceDriver; // 0x4d8
	FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x510
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x528
	FAnimNode_PoseBlendNode AnimGraphNode_PoseBlendNode_3; // 0x5c8
	FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve; // 0x668
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x6c0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x6e0
	FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh_2; // 0x7a0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x978
	FAnimNode_PoseBlendNode AnimGraphNode_PoseBlendNode_2; // 0xad0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0xb70
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xb98
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0xbc0
	FAnimNode_PoseBlendNode AnimGraphNode_PoseBlendNode; // 0xc80
	FAnimNode_Root AnimGraphNode_Root; // 0xd20
	FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0xd50
	FMOAnimNode_EyesLookAt MOAnimGraphNode_EyesLookAt; // 0xf28
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1088
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x10a8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1148
	FMOAnimNode_LODSwitch MOAnimGraphNode_LODSwitch; // 0x1170
	float Jaw Open; // 0x1210
	float Mask Width Min; // 0x1214
	float Mask Width Max; // 0x1218
	float Mask Length Min; // 0x121c
	float Mask Length Max; // 0x1220
	float Mask Depth Min; // 0x1224
	float Mask Depth Max; // 0x1228
};

struct UGameplayTask_TimeLimitedExecution : UGameplayTask {
	FMulticastInlineDelegate OnFinished; // 0x68
	FMulticastInlineDelegate OnTimeExpired; // 0x78
};

struct UParticleModuleLocation_Seeded : UParticleModuleLocation {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
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

struct UParticleModuleSizeMultiplyLife : UParticleModuleSizeBase {
	FRawDistributionVector LifeMultiplier; // 0x30
	char MultiplyX : 1; // 0x78
	char MultiplyY : 1; // 0x78
	char MultiplyZ : 1; // 0x78
};

struct UMOKeybindEntry : UMOWidgetBlueprint {
	FMulticastInlineDelegate OnMappingUpdatedDelegate; // 0x260
	UTextBlock* pText; // 0x270
	UInputKeySelector* pInputKeySelector; // 0x278
	int32_t structIndex; // 0x280
	float fAxisScale; // 0x284
	FName mappingName; // 0x288
	UMOUserWidgetOptionsKeybinds* pMOOptionsKeybinds; // 0x290
};

struct AMOAiEffectActor : AActor {
	USoundCue* pSoundCue_SpawnTarget; // 0x220
	USoundCue* pSoundCue_SpawnSource; // 0x228
	UNiagaraSystem* pNiagaraSystem_SpawnTarget; // 0x230
	UNiagaraSystem* pNiagaraSystem_SpawnSource; // 0x238
	ACharacter* pActor_Source; // 0x240
	ACharacter* pActor_Target; // 0x248
	FVector vTargetLocation; // 0x250
	UNiagaraComponent* pNiagaraComponent_Target; // 0x260
	UNiagaraComponent* pNiagaraComponent_Source; // 0x268
};

struct UGerstnerWaterWaves : UWaterWaves {
	UGerstnerWaterWaveGeneratorBase* GerstnerWaveGenerator; // 0x28
	TArray<FGerstnerWave> GerstnerWaves; // 0x30
	float MaxWaveHeight; // 0x40
};

struct UParticleModuleRotationOverLifetime : UParticleModuleRotationBase {
	FRawDistributionFloat RotationOverLife; // 0x30
	char Scale : 1; // 0x60
};

struct UMOPhysicalMaterial : UPhysicalMaterial {
	EAtlasServerHitBoneID eHitBone; // 0x80
	FMOPhysicalMaterialSoundProperties SoundProperties; // 0x88
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

struct ALevelBounds : AActor {
	UBoxComponent* BoxComponent; // 0x220
	bool bAutoUpdateBounds; // 0x228
};

struct ULuminApplicationLifecycleComponent : UApplicationLifecycleComponent {
	FMulticastInlineDelegate DeviceHasReactivatedDelegate; // 0x140
	FMulticastInlineDelegate DeviceWillEnterRealityModeDelegate; // 0x150
	FMulticastInlineDelegate DeviceWillGoInStandbyDelegate; // 0x160
	FMulticastInlineDelegate FocusLostDelegate; // 0x170
	FMulticastInlineDelegate FocusGainedDelegate; // 0x180
};

struct UMovieSceneNiagaraSystemSpawnSection : UMovieSceneSection {
	ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior; // 0xe8
	ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior; // 0xec
	ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior; // 0xf0
	ENiagaraAgeUpdateMode AgeUpdateMode; // 0xf4
};

struct UGeometryCacheCodecRaw : UGeometryCacheCodecBase {
	int32_t DummyProperty; // 0x38
};

struct UNiagaraDataInterfaceFieldSystem : UNiagaraDataInterface {
	UBlueprint* BlueprintSource; // 0x38
	AActor* SourceActor; // 0x40
	FIntVector FieldDimensions; // 0x48
	FVector MinBounds; // 0x54
	FVector MaxBounds; // 0x60
};

struct UMOPetListEntry : UMOWidgetBlueprint {
	UButton* pButton; // 0x270
	UImage* pImageIcon; // 0x278
	UTextBlock* pTextBlockPetName; // 0x280
	UTextBlock* pTextBlockLevel; // 0x288
	int32_t iEntryIndex; // 0x290
};

struct UButtonWidgetStyle : USlateWidgetStyleContainerBase {
	FButtonStyle ButtonStyle; // 0x30
};

struct UInputActionDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputActionDelegateBinding> InputActionDelegateBindings; // 0x28
};

struct UMOMurderCountEntry : UMOWidgetBlueprint {
	UMOCheckBox* pMOCheckBox_Report; // 0x260
	UTextBlock* pTextBlock_Name; // 0x268
};

struct UBP_SaveGame_C : UMOSaveGame {
	FString UserName; // 0x150
	FString Password; // 0x160
};

struct UMaterialExpressionTransformPosition : UMaterialExpression {
	FExpressionInput Input; // 0x40
	EMaterialPositionTransformSource TransformSourceType; // 0x54
	EMaterialPositionTransformSource TransformType; // 0x55
};

struct USimpleConstructionScript : UObject {
	TArray<USCS_Node*> RootNodes; // 0x28
	TArray<USCS_Node*> AllNodes; // 0x38
	USCS_Node* DefaultSceneRootNode; // 0x48
};

struct UMOUserWidgetCompass : UMOUserWidget {
	UMOUserWidgetWaypoint* cWaypointClass; // 0x2c8
	UCanvasPanel* pWaypointCanvas; // 0x2d0
	UMaterialInstanceDynamic* compassMaterial; // 0x2d8
};

struct UNiagaraDataInterfacePlatformSet : UNiagaraDataInterface {
	FNiagaraPlatformSet Platforms; // 0x38
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

struct UMODataAssetPetEquipmentDefinitions : UPrimaryDataAsset {
	UMODataAssetEquipmentShared* pSharedData; // 0x30
	UMODataAssetPetEquipment* pHorseEquipmentFallback; // 0x38
	UMODataAssetPetEquipment* pBearEquipmentFallback; // 0x40
	TArray<UMODataAssetPetEquipment*> vHorsePetEquipment; // 0x48
	TArray<UMODataAssetPetEquipment*> vBearPetEquipment; // 0x58
	bool bPetEquipmentIsPreloaded; // 0x68
	TArray<USkeletalMesh*> pLoadedSkeletalMeshes; // 0x70
	TArray<UAnimInstance*> LoadedAnimInstances; // 0x80
	TArray<USoundCue*> LoadedSounds; // 0x90
};

struct UAB_CH_Player_Male_Human_Armor_06_RisarSoldier_Legs_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x2c8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2e8
	FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x308
	FAnimNode_Root AnimGraphNode_Root; // 0x4e0
	FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2; // 0x510
	FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics; // 0x760
	float DummyBoneLength; // 0x9b0
	FKawaiiPhysicsSettings PhysicsSettingsSide; // 0x9b4
};

struct AExponentialHeightFog : AInfo {
	UExponentialHeightFogComponent* Component; // 0x220
	char bEnabled : 1; // 0x228
};

struct UWindowTitleBarAreaSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UNiagaraDataInterfaceRWBase : UNiagaraDataInterface {
	TSet<int32_t> OutputShaderStages; // 0x38
	TSet<int32_t> IterationShaderStages; // 0x88
};

struct ULocationServicesImpl : UObject {
	FMulticastInlineDelegate OnLocationChanged; // 0x28
};

struct UMOUserWidget : UUserWidget {
	bool bBypassShouldRightClickOverride; // 0x260
	bool bTryAutoOpenInventory; // 0x261
	bool bDynamicallyModifyZOrder; // 0x262
	bool bAddToWindowTracker; // 0x263
	bool bClosedByEsc; // 0x264
	USoundCue* pOpenSoundCue; // 0x268
	USoundCue* pCloseSoundCue; // 0x270
	FString sSaveIdentifier; // 0x278
};

struct UDestroySessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UWB_MOChatColorSelectionEntry_C : UMOChatColorSelectionEntry {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338
};

struct UMaterialExpressionSkyAtmosphereLightDiskLuminance : UMaterialExpression {
	int32_t LightIndex; // 0x40
};

struct USceneCaptureComponentCube : USceneCaptureComponent {
	UTextureRenderTargetCube* TextureTarget; // 0x2b0
	bool bCaptureRotation; // 0x2b8
	UTextureRenderTargetCube* TextureTargetLeft; // 0x2c0
	UTextureRenderTargetCube* TextureTargetRight; // 0x2c8
	UTextureRenderTarget2D* TextureTargetODS; // 0x2d0
	float IPD; // 0x2d8
};

struct UFurSplines : UObject {
	TArray<FVector> Vertices; // 0x28
	TArray<int32_t> Index; // 0x38
	TArray<int32_t> Count; // 0x48
	int32_t ControlPointCount; // 0x58
	FString ImportFilename; // 0x60
	int32_t Version; // 0x70
	int32_t ImportTransformation; // 0x74
	float Threshold; // 0x78
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

struct UAREnvironmentProbeComponent : UARComponent {
	FAREnvironmentProbeUpdatePayload ReplicatedPayload; // 0x280
};

struct UEditableGameplayTagQueryExpression_AnyTagsMatch : UEditableGameplayTagQueryExpression {
	FGameplayTagContainer Tags; // 0x28
};

struct ABP_AiEffectElemental_Attack_C : AMOAiEffectActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
};

struct UViewport : UContentWidget {
	FLinearColor BackgroundColor; // 0x120
};

struct ULandscapeLayerInfoObject : UObject {
	FName LayerName; // 0x28
	UPhysicalMaterial* PhysMaterial; // 0x30
	float Hardness; // 0x38
	FLinearColor LayerUsageDebugColor; // 0x3c
};

struct UInterpTrackDirector : UInterpTrack {
	TArray<FDirectorTrackCut> CutTrack; // 0x70
	char bSimulateCameraCutsOnClients : 1; // 0x80
};

struct UMODataAssetHead : UMODataAssetEquipmentShared {
	UStaticMesh* pStaticMesh; // 0x308
	bool bBluntWeapon; // 0x310
	FText sDisplayName; // 0x318
	UTexture2D* pIcon; // 0x330
	UNiagaraSystem* pBlockParticles; // 0x338
	UNiagaraSystem* pPerfectBlockParticles; // 0x340
	UNiagaraSystem* pEquipHitParticles; // 0x348
	UNiagaraSystem* pGenericHitParticles; // 0x350
	UParticleSystem* pSwingTrail; // 0x358
	USoundCue* pDealDamageSoundGeneric; // 0x360
	USoundCue* pDealDamageSoundSwing; // 0x368
	USoundCue* pDealDamageSoundStab; // 0x370
	USoundCue* pSwingSound; // 0x378
	USoundCue* pBlockSound; // 0x380
	USoundCue* pPerfectBlockSound; // 0x388
	USoundCue* pEquipHitSound; // 0x390
	USoundCue* pEquipSound; // 0x398
	USoundCue* pUnequipSound; // 0x3a0
	USoundCue* pDestroyedSound; // 0x3a8
	USoundCue* pPushSound; // 0x3b0
	USoundCue* pHitDuringCharge; // 0x3b8
	TArray<FSocketEmitterPair> vSocketEmitterPairs; // 0x3c0
	TArray<FSocketSoundPair> vSocketSoundPairs; // 0x3d0
	TArray<FSocketLightPair> vSocketLightPairs; // 0x3e0
};

struct UWB_CladeGiftsLearnedGiftsText_C : UMOUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c8
	UTextBlock* LearnedCladeGifts_TextBox; // 0x2d0
	FText CladeGiftName; // 0x2d8
};

struct UStereoLayerShapeEquirect : UStereoLayerShape {
	FBox2D LeftUVRect; // 0x28
	FBox2D RightUVRect; // 0x3c
	FVector2D LeftScale; // 0x50
	FVector2D RightScale; // 0x58
	FVector2D LeftBias; // 0x60
	FVector2D RightBias; // 0x68
};

struct UMOSkinning : UMOUserWidget {
	UMOButtonMedium* pMOButton_Skinning; // 0x2c8
	UTextBlock* pTextBlock_Sign; // 0x2d0
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_Resource; // 0x2d8
};

struct UEditableTextWidgetStyle : USlateWidgetStyleContainerBase {
	FEditableTextStyle EditableTextStyle; // 0x30
};

struct UMaterialExpressionDecalMipmapLevel : UMaterialExpression {
	FExpressionInput TextureSize; // 0x40
	float ConstWidth; // 0x54
	float ConstHeight; // 0x58
};

struct UMOSocialFriendsEntry : UMOWidgetBlueprint {
	UMOSocialFriends* pFriends; // 0x278
	FLinearColor vOnlineImageColor; // 0x280
	FLinearColor vOnlineTextColor; // 0x290
	FLinearColor vOfflineColor; // 0x2a0
	int32_t iEntryState; // 0x2b0
	bool bOnline; // 0x2b4
	UTextBlock* pName; // 0x2b8
	UTextBlock* pTextBlockEntryInfo; // 0x2c0
	UTextBlock* pTextBlock_AcceptFriend; // 0x2c8
	UMOButtonMedium* pMOButton_AcceptFriend; // 0x2d0
	UMOButtonSmall* pRemoveFriend; // 0x2d8
	UImage* pOnlineImage; // 0x2e0
};

struct UMaterialExpressionClearCoatNormalCustomOutput : UMaterialExpressionCustomOutput {
	FExpressionInput Input; // 0x40
};

struct UParticleModuleVelocityBase : UParticleModule {
	char bInWorldSpace : 1; // 0x30
	char bApplyOwnerScale : 1; // 0x30
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

struct UAnimationSharingStateProcessor : UObject {
	TSoftObjectPtr<UEnum> AnimationStateEnum; // 0x28
};

struct ABP_MOSky_C : AMOSunSky {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UStaticMeshComponent* SunAndMoon; // 0x238
	USceneComponent* DefaultSceneRoot; // 0x240
	TArray<UMaterialInstanceDynamic*> SkyInst; // 0x248
	UCurveLinearColor* Horizon color curve; // 0x258
	UCurveLinearColor* Zenith color curve; // 0x260
	float SkyBrightness; // 0x268
	float SkyContrast; // 0x26c
	float SkySaturation; // 0x270
	float StarsBrightness; // 0x274
	float ExpDensity; // 0x278
	AExponentialHeightFog* ExpFog_Active; // 0x280
	float SkyLightingIntensity; // 0x288
	float SkySunArea; // 0x28c
	float NearDensityMorning; // 0x290
	float NearDensityNight; // 0x294
	float FarDensity; // 0x298
	FLinearColor SkyHorizonColor; // 0x29c
	float HorizonDensity; // 0x2ac
	FLinearColor SkyZenithColor; // 0x2b0
	float ZenithDensity; // 0x2c0
	float SkyLightIntensity; // 0x2c4
	FLinearColor SkyLightColor; // 0x2c8
	float VolumetricScattering; // 0x2d8
	float ExFogDensity; // 0x2dc
	float ExFogCutOffDistance; // 0x2e0
	float ExFogHeightFalloff; // 0x2e4
	FLinearColor FogInsColor; // 0x2e8
	float FogMaxOpacity; // 0x2f8
	float ExFogStartDistance; // 0x2fc
	bool VolumetricFogEnable?; // 0x300
	FColor VolumetricFogColor; // 0x304
	FLinearColor DirectionalInsColor; // 0x308
	float DirecitonalInsExp; // 0x318
	float DirecitonalInsSD; // 0x31c
	float AtFogScaling; // 0x320
	FLinearColor VolumetricFogEmissive; // 0x324
	float VolumetricFogDistance; // 0x334
	float VolumetricFogExScale; // 0x338
	float VolumetricFogScatteringDistribution; // 0x33c
	UMaterialInstanceDynamic* CloudShadowInst; // 0x340
	float StarsRotator; // 0x348
	float SolarTime; // 0x34c
	float Latitude; // 0x350
	float Longitude; // 0x354
	float TimeZone; // 0x358
	float NorthOffset; // 0x35c
	float Elevation; // 0x360
	float CorrectedElevation; // 0x364
	float MoonElevationOffset; // 0x368
	float Azimuth; // 0x36c
	bool UseDaylightSavingTime; // 0x370
	int32_t DSTStartMonth; // 0x374
	int32_t DSTStartDay; // 0x378
	int32_t DSTEndMonth; // 0x37c
	int32_t DSTEndDay; // 0x380
	int32_t DSTSwitchHour; // 0x384
	float Sunrise_Sun; // 0x388
	float Day_Sun; // 0x38c
	float Sunset_Sun; // 0x390
	float Night_Sun; // 0x394
	float Sunrise_Sky; // 0x398
	float Day_Sky; // 0x39c
	float Sunset_Sky; // 0x3a0
	float Night_Sky; // 0x3a4
	UCurveFloat* SunIntensity_SunsetCurve; // 0x3a8
	UCurveFloat* SunIntensity_SunriseCurve; // 0x3b0
	UCurveFloat* Sun_Temperature; // 0x3b8
	UCurveLinearColor* Fog_InscatteringColor; // 0x3c0
	UCurveFloat* Fog_Opacity; // 0x3c8
	FS_MO2_Sun MO2Sun; // 0x3d0
	FS_MO2_Clouds MO2Clouds; // 0x410
	FS_MO2_Sky MO2Sky; // 0x548
	TArray<FS_MO2_Moon> MO2Moon; // 0x578
	UObject* MOSunSky; // 0x588
	FS_MO2_Sky Sky_Parameters; // 0x590
	ABP_MODirectionalLight_SunCycle_Refactor_C* MODirectional; // 0x5c0
	UCurveFloat* C_StarsBrightness; // 0x5c8
	FS_MO2_Moon_MaterialParameters MoonParameterList; // 0x5d0
	bool OverrideMoons; // 0x660
	TArray<FVector> DirectionOverride; // 0x668
	bool OverrideDirection; // 0x678
	UMaterialInstance* SkyMaterial; // 0x680
};

struct AStaticMeshCompositionActor : AActor {
	TArray<FStaticMeshCompositionInfo> vMeshCompositionInfos; // 0x220
	bool bMergeMeshesOnConstruction; // 0x230
	EPostMeshMergeAction ePostMergeAction; // 0x231
};

struct AWindDirectionalSource : AInfo {
	UWindDirectionalSourceComponent* Component; // 0x220
};

struct AMOAvatarStaticMesh : AMOAvatar {
	UStaticMeshComponent* pStaticMeshComponent; // 0x2b0
	USoundCue* pUseSoundCue; // 0x2b8
};

struct UMOCharacterDelete : UMOUserWidget {
	FString sCharacterName; // 0x2c8
	UButton* pButtonDelete; // 0x2d8
	UEditableTextBox* pEditableTextBoxDeleteName; // 0x2e0
};

struct UMOSpellbook : UMOUserWidget {
	UUserWidget* cSpellIconWidgetClass; // 0x2c8
	UImage* pImageBackground; // 0x2d0
	UMOSpellbookSpell* pSpellbookSpell; // 0x2d8
	TArray<UTexture2D*> vSpellbookBackgrounds; // 0x2e0
	UMOSpellbookSpellList* pSpellbookSpellListEcumenical; // 0x2f0
	UMOSpellbookSpellList* pSpellbookSpellListSpiritism; // 0x2f8
	int32_t iLastSpellIndex; // 0x300
};

struct UUniformScalar : UFieldNodeFloat {
	float Magnitude; // 0xb0
};

struct UAudioImpulseResponse : UObject {
	TArray<float> ImpulseResponse; // 0x28
	int32_t NumChannels; // 0x38
	int32_t SampleRate; // 0x3c
	float NormalizationVolumeDb; // 0x40
	bool bTrueStereo; // 0x44
	TArray<float> IRData; // 0x48
};

struct ULevelSequence : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x68
	FLevelSequenceObjectReferenceMap ObjectReferences; // 0x70
	FLevelSequenceBindingReferences BindingReferences; // 0xc0
	TMap<FString, FLevelSequenceObject> PossessedObjects; // 0x160
	UObject* DirectorClass; // 0x1b0
	TArray<UAssetUserData*> AssetUserData; // 0x1b8
};

struct UBuildPatchManifest : UObject {
	char ManifestFileVersion; // 0x28
	bool bIsFileData; // 0x29
	uint32_t AppID; // 0x2c
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

struct UVariantSet : UObject {
	FText DisplayText; // 0x28
	bool bExpanded; // 0x58
	TArray<UVariant*> Variants; // 0x60
	UTexture2D* Thumbnail; // 0x70
};

struct UARImageComponent : UARComponent {
	FARImageUpdatePayload ReplicatedPayload; // 0x280
};

struct UMOPassiveStatIncreaseManager : UMOManager {
	AMOPlayerController* pPlayerController; // 0x28
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

struct UMOSkillsTreeList : UMOWidgetBlueprint {
	UMOButtonLarge* pMOButton_AutoOptimize; // 0x260
	UMOWidgetBlueprint* cSkillsTreeListEntryClass; // 0x268
	UMOScrollBox* pScrollBox; // 0x270
	UTextBlock* pNumberOfSkills; // 0x278
	UTextBlock* pMaximumNumberOfSkills; // 0x280
	UTextBlock* pSkillsOverflowed; // 0x288
	UMOSkillsTree* pSkillsTreeParent; // 0x290
	TArray<UMOSkillsTreeListEntry*> vTreeListEntries; // 0x298
};

struct ULoudnessNRTSettings : UAudioSynesthesiaNRTSettings {
	float AnalysisPeriod; // 0x28
	float MinimumFrequency; // 0x2c
	float MaximumFrequency; // 0x30
	ELoudnessNRTCurveTypeEnum CurveType; // 0x34
	float NoiseFloorDb; // 0x38
};

struct UUserDefinedEnum : UEnum {
	TMap<FName, FText> DisplayNameMap; // 0x60
};

struct UMOUserWidgetOptionsKeybinds : UMOUserWidgetOptionsPanel {
	TArray<UScrollBox*> vScrollBoxes; // 0x2d0
	FMOKeybindCategoriesStruct CategoriesStruct; // 0x2e0
	TArray<FMOKeybindSelectStruct> vDefaultKeybindings; // 0x300
	TArray<UMOWidgetBlueprint*> vMOWidgetBPEntries; // 0x310
	UMOWidgetBlueprint* cMOKeybindEntryClass; // 0x320
	UMOWidgetBlueprint* cMOCategoryLineClass; // 0x328
	UMOUserWidget* cMOCategoryClass; // 0x330
	UMOUserWidgetTabButton* pTabButton_Actions; // 0x338
	UMOUserWidgetTabButton* pTabButton_Actionbars; // 0x340
	UScrollBox* pScrollBox_Actions; // 0x348
	UScrollBox* pScrollBox_ActionBars; // 0x350
};

struct UCurveVector : UCurveBase {
	FRichCurve FloatCurves[0x3]; // 0x30
};

struct UActorChannel : UChannel {
	AActor* Actor; // 0x70
	TArray<UObject*> CreateSubObjects; // 0x160
};

struct UWB_MOCarouselSelectValue_2_C : UMOCarouselSelectValue {
	FPointerToUberGraphFrame UberGraphFrame; // 0x350
	UHorizontalBox* HorizontalBox_340; // 0x358
};

struct UMovieSceneCompiledDataManager : UObject {
	TMap<int32_t, FMovieSceneSequenceHierarchy> Hierarchies; // 0xd8
	TMap<int32_t, FMovieSceneEvaluationTemplate> TrackTemplates; // 0x128
	TMap<int32_t, FMovieSceneEvaluationField> TrackTemplateFields; // 0x178
	TMap<int32_t, FMovieSceneEntityComponentField> EntityComponentFields; // 0x1c8
};

struct UAnimationSharingSetup : UObject {
	TArray<FPerSkeletonAnimationSharingSetup> SkeletonSetups; // 0x28
	FAnimationSharingScalability ScalabilitySettings; // 0x38
};

struct ULakeGenerator : UWaterBodyGenerator {
	UStaticMeshComponent* LakeMeshComp; // 0x28
	UBoxComponent* LakeCollisionComp; // 0x30
	ULakeCollisionComponent* LakeCollision; // 0x38
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

struct UAnimationDataSourceRegistry : UObject {
	TMap<FName, TWeakObjectPtr<UObject>> DataSources; // 0x28
};

struct UInterpTrackSound : UInterpTrackVectorBase {
	TArray<FSoundTrackKey> Sounds; // 0x90
	char bPlayOnReverse : 1; // 0xa0
	char bContinueSoundOnMatineeEnd : 1; // 0xa0
	char bSuppressSubtitles : 1; // 0xa0
	char bTreatAsDialogue : 1; // 0xa0
	char bAttach : 1; // 0xa0
};

struct UMaterialExpressionConstant3Vector : UMaterialExpression {
	FLinearColor Constant; // 0x40
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

struct UTimeSynchronizationSource : UObject {
	bool bUseForSynchronization; // 0x28
	int32_t FrameOffset; // 0x2c
};

struct UMOEditableCurrencyWidget : UMOUserWidget {
	UMOEditableTextBox* pMOEditableTextBox_Gold; // 0x2d8
	UMOEditableTextBox* pMOEditableTextBox_Silver; // 0x2e0
	UMOEditableTextBox* pMOEditableTextBox_Cuprum; // 0x2e8
};

struct UCameraShakeSourceComponent : USceneComponent {
	ECameraShakeAttenuation Attenuation; // 0x1f8
	float InnerAttenuationRadius; // 0x1fc
	float OuterAttenuationRadius; // 0x200
	UCameraShakeBase* CameraShake; // 0x208
	bool bAutoStart; // 0x210
};

struct UMOTooltipSpell : UUserWidget {
	UOverlay* pOverlay; // 0x260
	UTextBlock* pDisplaynameText; // 0x268
	UTextBlock* pDescriptionText; // 0x270
	UTextBlock* pUseDescriptionText; // 0x278
	UGridPanel* pMyGridPanel; // 0x280
};

struct APhysicsConstraintActor : ARigidBodyBase {
	UPhysicsConstraintComponent* ConstraintComp; // 0x220
	AActor* ConstraintActor1; // 0x228
	AActor* ConstraintActor2; // 0x230
	char bDisableCollision : 1; // 0x238
};

struct UMovieSceneEntitySystemLinker : UObject {
	FMovieSceneEntitySystemGraph SystemGraph; // 0x238
};

struct UParticleModuleAttractorLine : UParticleModuleAttractorBase {
	FVector EndPoint0; // 0x30
	FVector EndPoint1; // 0x3c
	FRawDistributionFloat Range; // 0x48
	FRawDistributionFloat Strength; // 0x78
};

struct UWB_CharacterCreation_Head_PresetEntry_Horizontal_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UMOButtonLarge* LoadButton; // 0x268
	UMOButtonLarge* SaveButton; // 0x270
	USizeBox* SizeBox_1; // 0x278
	UMOTextBlock_Base_Small_White_01* TitleBlock; // 0x280
	FMulticastInlineDelegate OnPresetLoad; // 0x288
	FMulticastInlineDelegate OnPresetSave; // 0x298
	int32_t Index; // 0x2a8
};

struct USynthComponentMoto : USynthComponent {
	UMotoSynthPreset* MotoSynthPreset; // 0x6c0
	float RPM; // 0x6c8
};

struct UMovieSceneVectorSection : UMovieSceneSection {
	FMovieSceneFloatChannel Curves[0x4]; // 0xe8
	int32_t ChannelsUsed; // 0x368
};

struct UMOSimpleIcon : UUserWidget {
	UImage* pIcon; // 0x260
};

struct UOperatorField : UFieldNodeBase {
	float Magnitude; // 0xb0
	UFieldNodeBase* RightField; // 0xb8
	UFieldNodeBase* LeftField; // 0xc0
	EFieldOperationType Operation; // 0xc8
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

struct UBP_MODragDropOperationPetSkill_C : UMODragDropOperationPetSkill {
	UWB_ItemSlotActionbar_C* ActionSlotRef; // 0x98
};

struct UMaterialExpressionThinTranslucentMaterialOutput : UMaterialExpressionCustomOutput {
	FExpressionInput TransmittanceColor; // 0x40
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

struct UMOItemSlotPaperdoll : UMOItemSlot {
	FString sEquipSlot; // 0x2b0
};

struct UPhysicsThrusterComponent : USceneComponent {
	float ThrustStrength; // 0x1f8
};

struct UNiagaraDataInterfaceVector4Curve : UNiagaraDataInterfaceCurveBase {
	FRichCurve XCurve; // 0x70
	FRichCurve YCurve; // 0xf0
	FRichCurve ZCurve; // 0x170
	FRichCurve WCurve; // 0x1f0
};

struct UBTService_BlueprintBase : UBTService {
	AAIController* AIOwner; // 0x70
	AActor* ActorOwner; // 0x78
	char bShowPropertyDetails : 1; // 0x90
	char bShowEventDetails : 1; // 0x90
};

struct UMOPetListEntryTamed : UMOPetListEntry {
	UMOUserWidgetProgressBar* pWB_ProgressBar_Experience; // 0x2f0
	UTextBlock* pTextBlockLevelXP; // 0x2f8
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_Feed; // 0x300
};

struct UMOPreviewModePlacementHouse : UMOPreviewModePlacement {
	TArray<FString> UpgradeContentIDs; // 0xd0
	TArray<UBoxComponent*> PreviewBoxComponents; // 0xe0
	TArray<TSoftClassPtr<UObject>> ActorTypeIgnoreList; // 0x128
	TArray<TSoftClassPtr<UObject>> MinDistanceFromTypeArray; // 0x138
};

struct USynthSamplePlayer : USynthComponent {
	USoundWave* SoundWave; // 0x6c0
	FMulticastInlineDelegate OnSampleLoaded; // 0x6c8
	FMulticastInlineDelegate OnSamplePlaybackProgress; // 0x6d8
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

struct ADefaultPawn : APawn {
	float BaseTurnRate; // 0x280
	float BaseLookUpRate; // 0x284
	UPawnMovementComponent* MovementComponent; // 0x288
	USphereComponent* CollisionComponent; // 0x290
	UStaticMeshComponent* MeshComponent; // 0x298
	char bAddDefaultMovementBindings : 1; // 0x2a0
};

struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	FExpressionInput LayerUsed; // 0x40
	FExpressionInput LayerNotUsed; // 0x54
	FName ParameterName; // 0x68
	char PreviewUsed : 1; // 0x70
	FGuid ExpressionGUID; // 0x74
};

struct UPointLightComponent : ULocalLightComponent {
	char bUseInverseSquaredFalloff : 1; // 0x340
	float LightFalloffExponent; // 0x344
	float SourceRadius; // 0x348
	float SoftSourceRadius; // 0x34c
	float SourceLength; // 0x350
};

struct UWB_CategoryLine_C : UMOWidgetBlueprint {
	UImage* Image_Line_Keybinds_2; // 0x260
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

struct ABP_AiEffectSpit_C : AMOAiEffectActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	FVector vHitLocation; // 0x278
};

struct UMODragDropOperationItem : UMODragDropOperation {
	UMOItemSlot* pItemSlot; // 0x88
	FString sItemGuid; // 0x90
	EDragItemFrom EDragItemFrom; // 0xa0
};

struct UEnvQueryTest_Distance : UEnvQueryTest {
	EEnvTestDistance TestMode; // 0x1f8
	UEnvQueryContext* DistanceTo; // 0x200
};

struct UVectorFieldStatic : UVectorField {
	int32_t SizeX; // 0x48
	int32_t SizeY; // 0x4c
	int32_t SizeZ; // 0x50
	bool bAllowCPUAccess; // 0x54
};

struct UBTTask_PushPawnAction : UBTTask_PawnActionBase {
	UPawnAction* Action; // 0x70
};

struct UBehaviorTreeManager : UObject {
	int32_t MaxDebuggerSteps; // 0x28
	TArray<FBehaviorTreeTemplateInfo> LoadedTemplates; // 0x30
	TArray<UBehaviorTreeComponent*> ActiveComponents; // 0x40
};

struct UParticleModuleVelocityInheritParent : UParticleModuleVelocityBase {
	FRawDistributionVector Scale; // 0x38
};

struct UInterpTrackMoveAxis : UInterpTrackFloatBase {
	EInterpMoveAxis MoveAxis; // 0x90
	FInterpLookupTrack LookupTrack; // 0x98
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

struct UPhysicsCollisionHandler : UObject {
	float ImpactThreshold; // 0x28
	float ImpactReFireDelay; // 0x2c
	USoundBase* DefaultImpactSound; // 0x30
	float LastImpactSoundTime; // 0x38
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

struct UEnvQueryOption : UObject {
	UEnvQueryGenerator* Generator; // 0x28
	TArray<UEnvQueryTest*> Tests; // 0x30
};

struct UIntervalGizmo : UInteractiveGizmo {
	UGizmoTransformChangeStateTarget* StateTarget; // 0x38
	UTransformProxy* TransformProxy; // 0x50
	TArray<UPrimitiveComponent*> ActiveComponents; // 0x58
	TArray<UInteractiveGizmo*> ActiveGizmos; // 0x68
	UGizmoComponentAxisSource* AxisYSource; // 0x90
	UGizmoComponentAxisSource* AxisZSource; // 0x98
};

struct UMOExtraction : UMOUserWidget {
	UMOButtonMedium* pMOButton_Extraction; // 0x2c8
	UTextBlock* pTextBlock_Sign; // 0x2d0
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_Resource; // 0x2d8
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_Catalyst; // 0x2e0
};

struct UMOWorldTimeSubsystem : UEngineSubsystem {
	float fDebugTimeOfDaySpeed; // 0x50
	float fDebugTimeOfDayOffset; // 0x54
	bool bIgnoreTimeOfDayUpdates; // 0x58
	bool bHasReceivedInitialDayTimeUpdateFromServer; // 0x59
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

struct UMaterialExpressionCurveAtlasRowParameter : UMaterialExpressionScalarParameter {
	UCurveLinearColor* Curve; // 0x60
	UCurveLinearColorAtlas* Atlas; // 0x68
	FExpressionInput InputTime; // 0x70
};

struct UMaterialExpressionLogarithm10 : UMaterialExpression {
	FExpressionInput X; // 0x40
};

struct ULiveLinkSubjectSettings : UObject {
	TArray<ULiveLinkFramePreProcessor*> PreProcessors; // 0x28
	ULiveLinkFrameInterpolationProcessor* InterpolationProcessor; // 0x38
	TArray<ULiveLinkFrameTranslator*> Translators; // 0x40
	ULiveLinkRole* Role; // 0x50
	FFrameRate FrameRate; // 0x58
	bool bRebroadcastSubject; // 0x60
};

struct UGizmoLocalVec2ParameterSource : UGizmoBaseVec2ParameterSource {
	FVector2D Value; // 0x48
	FGizmoVec2ParameterChange LastChange; // 0x50
};

struct UMOLoginScreen : UMOUserWidget {
	FString sCopyrightInformation; // 0x2c8
	FString sVersionNumber; // 0x2d8
	FString sGameNewsLink; // 0x2e8
	UMOButtonLarge* pMOButton_Options; // 0x2f8
	UMOButtonLarge* pMOButtonLogin; // 0x300
	UMOMessageBox* pMessageBox; // 0x308
	UMOLoginMessageBox* pLoginMessageBox; // 0x310
	UTextBlock* pTextBlockGameNewsHeader; // 0x318
	UTextBlock* pTextBlockGameNewsText; // 0x320
	UTextBlock* pTextBlockGameNewsLink; // 0x328
	UMOBorderHeader* pMOBorderHeader; // 0x330
	UMOButton* pButtonGameNewsLink; // 0x338
	UTextBlock* pCopyrightNotice; // 0x340
	UTextBlock* pVersionNumber; // 0x348
	UMOEULA* pMOEULA; // 0x350
	UBackgroundBlur* pBlur_EULA; // 0x358
};

struct UGerstnerWaterWaveGeneratorSpectrum : UGerstnerWaterWaveGeneratorBase {
	EWaveSpectrumType SpectrumType; // 0x28
	TArray<FGerstnerWaveOctave> Octaves; // 0x30
};

struct UComboBox : UWidget {
	TArray<UObject*> Items; // 0x108
	FDelegate OnGenerateWidgetEvent; // 0x118
	bool bIsFocusable; // 0x128
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

struct UMaterialExpressionNormalize : UMaterialExpression {
	FExpressionInput VectorInput; // 0x40
};

struct UMediaTimeStampInfo : UObject {
	FTimespan Time; // 0x28
	int64_t SequenceIndex; // 0x30
};

struct ABodyFireEffect_C : AMOEffectActorBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	USceneComponent* DefaultSceneRoot; // 0x228
};

struct UMOCharacterCreationNew : UMOUserWidget {
	UMOCharCreationFaceCustomization* pFaceCustomizationWidgetInstance; // 0x2c8
	UMOCharCreationFaceCustomization* cFaceCustomizationWidget; // 0x2d0
	FMOCharacterPlayerAppearance charAppearance; // 0x2d8
	AMOGameModeMenu* pMOGameModeMenu; // 0x5a0
	UMOUserWidgetTabButtonNew* pPanelTabButton_Species; // 0x5a8
	UMOUserWidgetTabButtonNew* pPanelTabButton_Bloodline; // 0x5b0
	UMOUserWidgetTabButtonNew* pPanelTabButton_Attributes; // 0x5b8
	UMOUserWidgetTabButtonNew* pPanelTabButton_Appearance; // 0x5c0
	UMOUserWidgetTabButtonNew* pPanelTabButton_Finalize; // 0x5c8
	UMOUserWidgetTabManager* pTabManager; // 0x5d0
	TArray<UMOCharCreationPanel*> vPanels; // 0x5d8
	int32_t iCurrentPanel; // 0x5e8
	UMOCharCreationInfoPanel* pPanel_Info; // 0x5f0
	UMOCharCreationSpeciesPanel* pPanel_Species; // 0x5f8
	UMOCharCreationBloodlinePanel* pPanel_Bloodline; // 0x600
	UMOCharCreationAttributesPanel* pPanel_Attributes; // 0x608
	UMOCharCreationAppearancePanel* pPanel_Appearance; // 0x610
	UMOCharCreationFinalizePanel* pPanel_Finalize; // 0x618
	UMOButtonLarge* pMOButton_Next; // 0x620
	UMOButtonLarge* pMOButton_Back; // 0x628
	UMOText* pPanelText; // 0x630
	FTimerHandle m_TimerHandle_UpdateCharacterAppearance; // 0x638
	bool bCanUpdateCharacter; // 0x640
};

struct UInterpTrackFloatAnimBPParam : UInterpTrackFloatBase {
	UObject* AnimBlueprintClass; // 0x90
	UAnimInstance* AnimClass; // 0x98
	FName ParamName; // 0xa0
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

struct UParticleModuleLocation : UParticleModuleLocationBase {
	FRawDistributionVector StartLocation; // 0x30
	float DistributeOverNPoints; // 0x78
	float DistributeThreshold; // 0x7c
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

struct UObjectReferencer : UObject {
	TArray<UObject*> ReferencedObjects; // 0x28
};

struct AMOStaticMeshActorUse : AMOStaticMeshActor {
	USoundCue* pSoundCueUse; // 0x258
	FText sUseText; // 0x260
	float fUseTimer; // 0x278
	float fAtlasUseDistance; // 0x27c
	EObjectUse eUseType; // 0x280
	UStaticMeshComponent* pStaticMeshComp; // 0x288
	FString sStringIdentifier; // 0x290
	TArray<FString> vLearnSkillsOnOpen; // 0x2a0
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

struct ARectLight : ALight {
	URectLightComponent* RectLightComponent; // 0x230
};

struct UMOInventoryButtonItem : UMOUserWidget {
	UMOButtonItem* pButtonItem; // 0x2c8
};

struct UMOItemSlotActionbar : UMOItemSlot {
	int32_t iActionSlotID; // 0x2b0
	int32_t iActionBarID; // 0x2b4
	FString sItemGuid; // 0x2b8
	UMOActionBar* pActionBarParent; // 0x2c8
	UTextBlock* pKeybindingText; // 0x2d0
	UMOButtonSkill* pButtonSkill; // 0x2d8
	UMOButtonSpell* pButtonSpell; // 0x2e0
	UMOButtonPetSkill* pButtonPetSkill; // 0x2e8
};

struct UGameplayTaskResource : UObject {
	int32_t ManualResourceID; // 0x28
	int8_t AutoResourceID; // 0x2c
	char bManuallySetID : 1; // 0x30
};

struct UPlayerInput : UObject {
	TArray<FKeyBind> DebugExecBindings; // 0x120
	TArray<FName> InvertedAxis; // 0x160
};

struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	TArray<FLayerBlendInput> Layers; // 0x40
	FGuid ExpressionGUID; // 0x50
};

struct UAISystemBase : UObject {
	FSoftClassPath AISystemClassName; // 0x28
	FName AISystemModuleName; // 0x40
	bool bInstantiateAISystemOnClient; // 0x50
};

struct AMagicLeapARPinInfoActorBase : AActor {
	FGuid PinId; // 0x220
	bool bVisibilityOverride; // 0x230
};

struct ABP_AiEffectElemental_Heal_C : ABP_AiEffectElemental_Attack_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278
};

struct UWB_ButtonSkillWidget_C : UMOButtonSkillWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
};

struct UMaterialExpressionScalarParameter : UMaterialExpressionParameter {
	float DefaultValue; // 0x58
	bool bUseCustomPrimitiveData; // 0x5c
	char PrimitiveDataIndex; // 0x5d
};

struct UNavRelevantComponent : UActorComponent {
	char bAttachToOwnersRoot : 1; // 0xd4
	UObject* CachedNavParent; // 0xd8
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

struct UMOEquipmentShieldComponent : UMOEquipmentComponent {
	UStaticMeshComponent* pFrameComponent; // 0xf0
	UStaticMeshComponent* pHandleComponent; // 0xf8
	UMODataAssetShield* pDataAssetHandle; // 0x100
	UMODataAssetShieldFrame* pDataAssetFrame; // 0x108
	FMOShieldData sEquipmentData; // 0x110
	UMaterialInstanceDynamic* pHandleMID; // 0x140
	UMaterialInstanceDynamic* pHeadMID; // 0x148
	float fFrameScale; // 0x150
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

struct USubmixEffectDelayPreset : USoundEffectSubmixPreset {
	FSubmixEffectDelaySettings Settings; // 0x9c
	FSubmixEffectDelaySettings DynamicSettings; // 0xa8
};

struct UMaterialExpressionArccosineFast : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UVectorFieldComponent : UPrimitiveComponent {
	UVectorField* VectorField; // 0x440
	float Intensity; // 0x448
	float Tightness; // 0x44c
	char bPreviewVectorField : 1; // 0x450
};

struct UMovieSceneByteTrack : UMovieScenePropertyTrack {
	UEnum* Enum; // 0xb0
};

struct ULeaderboardFlushCallbackProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UMaterialExpressionTextureSample : UMaterialExpressionTextureBase {
	FExpressionInput Coordinates; // 0x48
};

struct AAudioVolume : AVolume {
	float Priority; // 0x258
	char bEnabled : 1; // 0x25c
	FReverbSettings Settings; // 0x260
	FInteriorSettings AmbientZoneSettings; // 0x280
	TArray<FAudioVolumeSubmixSendSettings> SubmixSendSettings; // 0x2a8
	TArray<FAudioVolumeSubmixOverrideSettings> SubmixOverrideSettings; // 0x2b8
};

struct AGeometryCacheActor : AActor {
	UGeometryCacheComponent* GeometryCacheComponent; // 0x220
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

struct UKawaiiPhysicsLimitsDataAsset : UDataAsset {
	TArray<FSphericalLimit> SphericalLimits; // 0x30
	TArray<FCapsuleLimit> CapsuleLimits; // 0x40
	TArray<FPlanarLimit> PlanarLimits; // 0x50
};

struct UMOCharacterMovementComponent : UCharacterMovementComponent {
	float CalcVelocityTickInterval; // 0xb08
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

struct ANavMeshBoundsVolume : AVolume {
	FNavAgentSelector SupportedAgents; // 0x258
};

struct UOculusSceneCaptureCubemap : UObject {
	TArray<USceneCaptureComponent2D*> CaptureComponents; // 0x38
};

struct UTimecodeProvider : UObject {
	float FrameDelay; // 0x28
};

struct UScaleBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UMOButtonTab : UMOButton {
	USlateWidgetStyleAsset* CustomStyle; // 0x438
};

struct UMOCraftingArmor : UMOCrafting {
	UMOScrollBox* pScrollBox_ArmorSlot; // 0x310
	UMOScrollBox* pScrollBox_ArmorStyle; // 0x318
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_ArmorOutsideMaterial; // 0x320
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_ArmorInsideMaterial; // 0x328
	UMaterialInstance* pPreviewMaterial; // 0x330
	FString sArmorSlotMaterialInsideName; // 0x338
	FString sArmorSlotMaterialOutsideName; // 0x348
	FString sArmorSlotName; // 0x358
	FString sArmorStyleName; // 0x368
	UMOCraftingSliderWidget* pCraftingSlider_Inside; // 0x378
	UMOCraftingSliderWidget* pCraftingSlider_Outside; // 0x380
	TArray<FArmorCraftingInfo_ArmorSlot> vCraftingInfo_ArmorSlot; // 0x398
	TArray<FArmorCraftingInfo_Style> vCraftingInfo_ArmorStyle; // 0x3a8
	TArray<UMOCraftingListEntry*> vCraftingArmorSlotGroups; // 0x3b8
};

struct UNiagaraPrecompileContainer : UObject {
	TArray<UNiagaraScript*> Scripts; // 0x28
	UNiagaraSystem* System; // 0x38
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

struct UInterpTrackFade : UInterpTrackFloatBase {
	char bPersistFade : 1; // 0x90
	char bFadeAudio : 1; // 0x90
	FLinearColor FadeColor; // 0x94
};

struct UAB_CH_Player_Male_Human_Armor_03_Rags_Legs_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6; // 0x2d0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x520
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x540
	FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x560
	FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5; // 0x740
	FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4; // 0x990
	FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3; // 0xbe0
	FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2; // 0xe30
	FAnimNode_Root AnimGraphNode_Root; // 0x1080
	FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics; // 0x10b0
	float DummyBoneLength; // 0x1300
	FKawaiiPhysicsSettings PhysicsSettings; // 0x1304
};

struct UPendingNetGame : UObject {
	UNetDriver* NetDriver; // 0x30
	UDemoNetDriver* DemoNetDriver; // 0x38
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

struct UIpConnection : UNetConnection {
	float SocketErrorDisconnectDelay; // 0x1b40
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

struct ULiveLinkDrivenComponent : UActorComponent {
	FLiveLinkSubjectName SubjectName; // 0xb0
	FName ActorTransformBone; // 0xb8
	bool bModifyActorTransform; // 0xc0
	bool bSetRelativeLocation; // 0xc1
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

struct UParticleModuleSubUVMovie : UParticleModuleSubUV {
	char bUseEmitterTime : 1; // 0x70
	FRawDistributionFloat FrameRate; // 0x78
	int32_t StartingFrame; // 0xa8
};

struct UEnvQueryGenerator_CurrentLocation : UEnvQueryGenerator {
	UEnvQueryContext* QueryContext; // 0x50
};

struct UDLSSSettings : UObject {
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

struct UOculusMR_State : UObject {
	FTrackedCamera TrackedCamera; // 0x28
	USceneComponent* TrackingReferenceComponent; // 0xa0
	double ScalingFactor; // 0xa8
	bool ChangeCameraStateRequested; // 0xb4
	bool BindToTrackedCameraIndexRequested; // 0xb5
};

struct UInterpTrackInstEvent : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
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
	EMobilePlanarReflectionMode MobilePlanarReflectionMode; // 0xf0
	FPerPlatformBool bStreamSkeletalMeshLODs; // 0xf1
	FPerPlatformBool bDiscardSkeletalMeshOptionalLODs; // 0xf2
	FSoftObjectPath VisualizeCalibrationColorMaterialPath; // 0xf8
	FSoftObjectPath VisualizeCalibrationCustomMaterialPath; // 0x110
	FSoftObjectPath VisualizeCalibrationGrayscaleMaterialPath; // 0x128
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

struct USingleClickInputBehavior : UAnyButtonInputBehavior {
	bool HitTestOnRelease; // 0xc0
};

struct UUniformGridPanel : UPanelWidget {
	FMargin SlotPadding; // 0x120
	float MinDesiredSlotWidth; // 0x130
	float MinDesiredSlotHeight; // 0x134
};

struct UMOHintWidget : UMOUserWidget {
	UTextBlock* pHintBody; // 0x2c8
	UTextBlock* pHintTitle; // 0x2d0
	UMOCheckBox* pCheckBox; // 0x2d8
};

struct UParticleModuleColorScaleOverLife : UParticleModuleColorBase {
	FRawDistributionVector ColorScaleOverLife; // 0x30
	FRawDistributionFloat AlphaScaleOverLife; // 0x78
	char bEmitterTime : 1; // 0xa8
};

struct UMagicLeapARPinSettings : UObject {
	float UpdateCheckFrequency; // 0x28
	FMagicLeapARPinState OnUpdatedEventTriggerDelta; // 0x2c
};

struct UPaperRuntimeSettings : UObject {
	bool bEnableSpriteAtlasGroups; // 0x28
	bool bEnableTerrainSplineEditing; // 0x29
	bool bResizeSpriteDataToMatchTextures; // 0x2a
};

struct UMOButtonPetSkill : UMOButton {
	FRequiredPetSkillData sReqData; // 0x438
	FOptionalPetSkillData sOptData; // 0x468
	UMaterialInstanceDynamic* pMaterialInstance; // 0x498
};

struct UMOCharCreationSpeciesPanel : UMOCharCreationPanel {
	UMOCladeGiftButton* cMOCladeGiftButtonClass; // 0x2d0
	UDataTable* pCurrentDataTable; // 0x2d8
	UUniformGridPanel* pUniformGridPanel_CladeGifts; // 0x2e0
	TArray<ENation> vAllowedNations; // 0x2e8
	UMOCarouselSelectText* pCarouselSelect_Gender; // 0x338
	UMOCarouselSelectText* pCarouselSelect_Nation; // 0x340
	UMOCarouselSelectText* pCarouselSelect_Clade; // 0x348
	UMOCarouselSelectText* pCarouselSelect_Race; // 0x350
	TArray<UMOCladeGiftButton*> vGiftButtons; // 0x358
	UTextBlock* pTextBlock_Strengths; // 0x368
	UTextBlock* pTextBlock_Summary; // 0x370
	UTextBlock* pTextBlock_Lore; // 0x378
	TArray<FText> vStrenghtsText; // 0x380
	TArray<FText> vSummaryText; // 0x390
	TArray<FText> vLoreText; // 0x3a0
	UImage* pCladeImage_Human; // 0x3b0
	UImage* pCladeImage_Alvarin; // 0x3b8
	UImage* pCladeImage_Oghmir; // 0x3c0
	UImage* pCladeImage_Thursar; // 0x3c8
};

struct ULightmappedSurfaceCollection : UObject {
	UModel* SourceModel; // 0x28
	TArray<int32_t> Surfaces; // 0x30
};

struct UBTTask_MakeNoise : UBTTaskNode {
	float Loudnes; // 0x70
};

struct UMaterialExpressionVectorParameter : UMaterialExpressionParameter {
	FLinearColor DefaultValue; // 0x58
	bool bUseCustomPrimitiveData; // 0x68
	char PrimitiveDataIndex; // 0x69
};

struct UWaterWavesAssetReference : UWaterWavesBase {
	UWaterWavesAsset* WaterWavesAsset; // 0x28
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

struct UMovieSceneParticleTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> ParticleSections; // 0x80
};

struct UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput {
	TArray<FGrassInput> GrassTypes; // 0x40
};

struct UAnimComposite : UAnimCompositeBase {
	FAnimTrack AnimationTrack; // 0xa8
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

struct UMovieSceneGeometryCacheSection : UMovieSceneSection {
	FMovieSceneGeometryCacheParams Params; // 0xe8
};

struct UInfinite_Compound : USceneComponent {
	bool RealTime; // 0x1f8
	bool EnableScale; // 0x1f9
	float TimeJump; // 0x1fc
	float VisionLimit; // 0x200
	float ScaleFactor; // 0x204
	float BeginningScale; // 0x208
	float ScaleMin; // 0x20c
	float ScaleMax; // 0x210
	EInfinityCategory InfinityCategory; // 0x214
};

struct UNiagaraDataInterfaceColorCurve : UNiagaraDataInterfaceCurveBase {
	FRichCurve RedCurve; // 0x70
	FRichCurve GreenCurve; // 0xf0
	FRichCurve BlueCurve; // 0x170
	FRichCurve AlphaCurve; // 0x1f0
};

struct UForceFeedbackEffect : UObject {
	TArray<FForceFeedbackChannelDetails> ChannelDetails; // 0x28
	float Duration; // 0x38
};

struct ADungeonFire_Blueprint_C : AEmitter {
	UAudioComponent* Audio; // 0x270
};

struct UARFaceComponent : UARComponent {
	EARFaceTransformMixing TransformSetting; // 0x278
	bool bUpdateVertexNormal; // 0x279
	bool bFaceOutOfScreen; // 0x27a
	FARFaceUpdatePayload ReplicatedPayload; // 0x280
};

struct USkeletalBodySetup : UBodySetup {
	bool bSkipScaleFromAnimation; // 0x2a0
	TArray<FPhysicalAnimationProfile> PhysicalAnimationData; // 0x2a8
};

struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	FGuid MeshGuid; // 0x520
};

struct UHudSettings : UObject {
	char bShowHUD : 1; // 0x28
	TArray<FName> DebugDisplay; // 0x30
};

struct UMOQuestTaskEntry : UMOUserWidget {
	URichTextBlock* pTaskText; // 0x2c8
	UMOQuestEntry* pMyQuest; // 0x2d0
	FVector vTaskLocation; // 0x2d8
	bool bTaskFocused; // 0x2e4
	ETaskState eCurTaskState; // 0x2e5
};

struct UMOOptionsEntry : UMOUserWidget {
	int32_t entryIndex; // 0x2c8
	UMOUserWidgetOptionsPanel* pOptionsPanel; // 0x2d0
	UTextBlock* pText; // 0x2d8
	FText InitializeDisplayText; // 0x2e0
	FText InitializeToolTipText; // 0x2f8
	int32_t iInitFontSize; // 0x310
};

struct UMOMailPanel : UMOUserWidget {
	UMOMail* pMail; // 0x2c8
};

struct UMOItemSlotPlaceItem : UMOItemSlot {
	bool bRequiresSkill; // 0x2b0
	bool bHideStackSize; // 0x2b1
	UMOUserWidget* pParent; // 0x2b8
	UMOBasicTooltip* pInvalidDropInfo; // 0x2c0
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
	int32_t ErrorType; // 0x70
	FString ErrorMsg; // 0x78
	FGuid NodeGuid; // 0x88
};

struct UMagicLeapTouchpadGesturesComponent : UActorComponent {
	FMulticastInlineDelegate OnTouchpadGestureStart; // 0xb8
	FMulticastInlineDelegate OnTouchpadGestureContinue; // 0xc8
	FMulticastInlineDelegate OnTouchpadGestureEnd; // 0xd8
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

struct UMagicLeapHeadTrackingNotificationsComponent : UVRNotificationsComponent {
	FMulticastInlineDelegate OnHeadTrackingLost; // 0x140
	FMulticastInlineDelegate OnHeadTrackingRecovered; // 0x150
	FMulticastInlineDelegate OnHeadTrackingRecoveryFailed; // 0x160
	FMulticastInlineDelegate OnHeadTrackingNewSessionStarted; // 0x170
};

struct USoundfieldEffectBase : UObject {
	USoundfieldEffectSettingsBase* Settings; // 0x28
};

struct UEndpointSubmix : USoundSubmixBase {
	FName EndpointType; // 0x38
	UAudioEndpointSettingsBase* EndpointSettingsClass; // 0x40
	UAudioEndpointSettingsBase* EndpointSettings; // 0x48
};

struct UMOCameraComponent : UCameraComponent {
	float CameraHMDBlend; // 0x7c0
};

struct UButtonSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UMovieSceneLiveLinkSection : UMovieSceneSection {
	FLiveLinkSubjectPreset SubjectPreset; // 0xe8
	TArray<bool> ChannelMask; // 0x120
	TArray<UMovieSceneLiveLinkSubSection*> SubSections; // 0x130
	FName SubjectName; // 0x150
	FLiveLinkFrameData TemplateToPush; // 0x158
	FLiveLinkRefSkeleton RefSkeleton; // 0x1e8
	TArray<FName> CurveNames; // 0x208
	TArray<FMovieSceneFloatChannel> PropertyFloatChannels; // 0x218
};

struct UMOPaperdollStatistics : UMOWidgetBlueprint {
	UMOCharCreationInfoEntry* pInfoEntry_HealthReserves; // 0x260
	UMOCharCreationInfoEntry* pInfoEntry_StaminaReserves; // 0x268
	UMOCharCreationInfoEntry* pInfoEntry_ManaReserves; // 0x270
	UMOCharCreationInfoEntry* pInfoEntry_Thirst; // 0x278
	UMOCharCreationInfoEntry* pInfoEntry_Hunger; // 0x280
	UMOCharCreationInfoEntry* pInfoEntry_MaxSpeed; // 0x288
	UMOCharCreationInfoEntry* pInfoEntry_MaxJump; // 0x290
	UMOCharCreationInfoEntry* pInfoEntry_ArmorWeight; // 0x298
	UMOCharCreationInfoEntry* pInfoEntry_CarryWeight; // 0x2a0
	UMOCharCreationInfoEntry* pInfoEntry_BodyHeat; // 0x2a8
	UMOCharCreationInfoEntry* pInfoEntry_WorldHeat; // 0x2b0
	UMOCharCreationInfoEntry* pInfoEntry_StaminaRegen; // 0x2b8
	UMOCharCreationInfoEntry* pInfoEntry_ManaRegen; // 0x2c0
	UTextBlock* pTextBlockStandingsNation_Tindremene; // 0x2c8
	UTextBlock* pTextBlockStandingsNation_Sidoian; // 0x2d0
	UTextBlock* pTextBlockStandingsNation_Khurite; // 0x2d8
	UTextBlock* pTextBlockStandingsNation_Sarducaan; // 0x2e0
	UTextBlock* pTextBlockStandingsNation_Kallard; // 0x2e8
	UTextBlock* pTextBlockStandingsNation_Alvarin; // 0x2f0
	UTextBlock* pTextBlockStandingsNation_Huergar; // 0x2f8
	UTextBlock* pTextBlockStandingsNation_Risar; // 0x300
	UTextBlock* pTextBlock_MurderCount; // 0x308
	UTextBlock* pTextBlock_MurderCountTimer; // 0x310
	TArray<UTextBlock*> vTextBlockStandingsNations; // 0x318
	TArray<FText> vStandingTitles; // 0x338
};

struct UInterpTrackInstFloatAnimBPParam : UInterpTrackInst {
	UAnimInstance* AnimScriptInstance; // 0x28
	float ResetFloat; // 0x30
};

struct ABP_AiEffectArrowFire_C : AMOAiEffectActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
};

struct ABP_MODirectionalLight_SunCycle_Refactor_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UTextRenderComponent* OutputDebugText; // 0x228
	UArrowComponent* AltitudeRefArrow; // 0x230
	UArrowComponent* AzimuthRefArrow; // 0x238
	UArrowComponent* EarthPoleArrow; // 0x240
	UArrowComponent* WorldPositionForwardArrow; // 0x248
	UArrowComponent* WorldPositionNormalArrow; // 0x250
	UStaticMeshComponent* FakeSun; // 0x258
	UStaticMeshComponent* FakeEarth; // 0x260
	USceneComponent* Scene; // 0x268
	bool SolarReverseDirection; // 0x270
	float SolarMaxIntensity; // 0x274
	float SolarMaxIntensity_Multiplier; // 0x278
	float SkyDayMaxIntensity; // 0x27c
	float ObserverWorldPositionLatitude; // 0x280
	float SolarYearTime; // 0x284
	float SolarDayTime; // 0x288
	float PreviousSolarTime; // 0x28c
	bool LockDayTime; // 0x290
	bool TestDayNightSystemInPIE; // 0x291
	FVector ObserverWorldPositionNormal; // 0x294
	FVector ObserverWorldPositionForward; // 0x2a0
	FVector ObserverWorldPositionAzimuthReference; // 0x2ac
	FVector ObserverWorldPositionAltitudeReference; // 0x2b8
	float SolarAzimuth; // 0x2c4
	float SolarAzimuthNormalized; // 0x2c8
	float SolarAltitude; // 0x2cc
	float TestDayNightSystemInPIE_TimeMultiplier; // 0x2d0
	ADirectionalLight* SunDirectionalLightActor; // 0x2d8
	float SolarAltitudeNormalized; // 0x2e0
	float SolarUE4Pitch; // 0x2e4
	float SolarUE4Yaw; // 0x2e8
	FRotator SolarUE4Rotator; // 0x2ec
	ADirectionalLight* MoonDirectionalLightActor; // 0x2f8
	ASkyLight* SkyLightActor; // 0x300
	ASkyAtmosphere* SkyAtmosphereActor; // 0x308
	ABP_Sky_Sphere_C* SkySphereActor; // 0x310
	float SolarOutputLightIntensity; // 0x318
	float SolarOutputLightIntensityNormalized; // 0x31c
	float SkyNightMaxIntensity; // 0x320
	bool bRecaptureSkyEnabled; // 0x324
	UCurveFloat* SolarAltitude_LightIntensityCurve; // 0x328
	UCurveFloat* SolarAltitude_ShadowOpacityCurve; // 0x330
	float SolarOutputShadowOpacity; // 0x338
	float SkyLightOutputLightIntensity; // 0x33c
	UCurveFloat* SolarAltitude_SkyLightIntensityCurve; // 0x340
	UCurveFloat* SolarAltitude_NightDarknessCurve; // 0x348
	UCurveFloat* SolarAltitude_SkyBlendNightDayCurve; // 0x350
	FLinearColor SkyLightOutputColor; // 0x358
	float SkyLightOutputVolumetricScattering; // 0x368
	float LunarMaxIntensity; // 0x36c
	UCurveFloat* LunarAltitude_LightIntensityCurve; // 0x370
	UCurveFloat* LunarAltitude_ShadowOpacityCurve; // 0x378
	UCurveFloat* LunarAltitude_SkyLightIntensityCurve; // 0x380
	float LunarAzimuth; // 0x388
	float LunarAzimuthNormalized; // 0x38c
	float LunarAltitude; // 0x390
	float LunarAltitudeNormalized; // 0x394
	float LunarUE4Pitch; // 0x398
	float LunarUE4Yaw; // 0x39c
	FRotator LunarUE4Rotator; // 0x3a0
	float LunarOutputLightIntensity; // 0x3ac
	float LunarOutputLightIntensityNormalized; // 0x3b0
	float LunarOutputShadowOpacity; // 0x3b4
	float SkyLightNightToDayBlend; // 0x3b8
	UCurveFloat* SolarAltitude_Temperature; // 0x3c0
	UCurveFloat* SolarAltitude_SkyAtmosphereMieAbsorptionScaleCurve; // 0x3c8
	float SolarBloomScale; // 0x3d0
	float SolarBloomThreshold; // 0x3d4
	FColor SolarBloomTint; // 0x3d8
	float LunarBloomScale; // 0x3dc
	float LunarBloomThreshold; // 0x3e0
	FColor LunarBloomTint; // 0x3e4
	AExponentialHeightFog* ExpHeightFogActor; // 0x3e8
	float SkyAtmosphereMieAbsorptionScale; // 0x3f0
	FS_MO2_Sun MO2Sun; // 0x3f4
	TArray<FS_MO2_Moon> MO2Moons; // 0x438
	UCurveFloat* CF_FogOpacity; // 0x448
	UCurveLinearColor* CF_FogInscatteringColor; // 0x450
	float LunarAltitudeOffset; // 0x458
	FRotator Lunar2UE4Rotator; // 0x45c
	float LunarAltitudeOffset2; // 0x468
	float SunForcesOffMoonLightFactor; // 0x46c
	float SunForcesOffMoonShadowsFactor; // 0x470
	float SkylightDungeonTransition; // 0x474
	FLinearColor initSkyLightColor; // 0x478
	float PPExposureCompensation_Day; // 0x488
	float PPExposureCompensation_Night; // 0x48c
	float PPExposureMin_Day; // 0x490
	float PPExposureMin_Night; // 0x494
	float PPSlope_Day; // 0x498
	float PPSlope_Night; // 0x49c
	float PPToe_Day; // 0x4a0
	float PPToe_Night; // 0x4a4
	APostProcessVolume* GlobalPostProcess_Day; // 0x4a8
	APostProcessVolume* GlobalPostProcess_Night; // 0x4b0
};

struct UBTComposite_SimpleParallel : UBTCompositeNode {
	EBTParallelMode FinishMode; // 0x90
};

struct UStereoLayerShapeCylinder : UStereoLayerShape {
	float Radius; // 0x28
	float OverlayArc; // 0x2c
	int32_t Height; // 0x30
};

struct UDataAsset : UObject {
	UDataAsset* NativeClass; // 0x28
};

struct UInterpTrackLinearColorBase : UInterpTrack {
	FInterpCurveLinearColor LinearColorTrack; // 0x70
	float CurveTension; // 0x88
};

struct ABP_EQ_EquipmentGenerator_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UStaticMeshComponent* Handle; // 0x228
	UStaticMeshComponent* Head; // 0x230
	EEquipmentGroup EquipmentGroup; // 0x238
	EWeaponGroup WeaponGroup; // 0x239
	int32_t HeadIndex; // 0x23c
	int32_t HandleIndex; // 0x240
	EResourceGroup HeadResourceGroup; // 0x244
	int32_t HeadResourceIndex; // 0x248
	EResourceGroup HandleResourceGroup; // 0x24c
	int32_t HandleResourceIndex; // 0x250
	UMODataAssetHeadDefinitions* Head_Definitions; // 0x258
	UMODataAssetHandleDefinitions* Handle_Definitions; // 0x260
	UMODataAssetResourceDefinitions* Resource_Definitions; // 0x268
	UMaterialInterface* HeadMaterial; // 0x270
	UMaterialInterface* HandleMaterial; // 0x278
	UMaterialInstanceDynamic* Handle_MID; // 0x280
	UMaterialInstanceDynamic* Head_MID; // 0x288
	UMODataAssetShieldDefinitions* ShieldBase_Definitions; // 0x290
	FName DesiredSocketOnAutoAttach; // 0x298
};

struct UMOCheckBoxEntryLanguage : UMOOptionsEntry {
	UMOCheckBox* pMOCheckBox; // 0x318
	FString sLanguage; // 0x320
	int32_t iPctCompleted; // 0x330
	FString sLanguageLink; // 0x338
};

struct UNiagaraDataInterfaceAudioSubmix : UNiagaraDataInterface {
	USoundSubmix* Submix; // 0x38
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

struct UMovieSceneActorReferenceSection : UMovieSceneSection {
	FMovieSceneActorReferenceData ActorReferenceData; // 0xe8
	FIntegralCurve ActorGuidIndexCurve; // 0x198
	TArray<FString> ActorGuidStrings; // 0x218
};

struct UMovieSceneLiveLinkSubSection : UObject {
	FLiveLinkSubSectionData SubSectionData; // 0x28
	ULiveLinkRole* SubjectRole; // 0x38
};

struct UMovieSceneFloatSection : UMovieSceneSection {
	FMovieSceneFloatChannel FloatCurve; // 0xf0
};

struct UMOBrokerPanel : UMOUserWidget {
	UMOButton* pMOButton; // 0x2c8
	UMOBroker* pBroker; // 0x2d0
};

struct UWB_MOOptionsUIPanel_C : UMOUserWidgetOptionsUI {
	UImage* Image_Line_UI; // 0x348
};

struct UUserDefinedStruct : UScriptStruct {
	EUserDefinedStructureStatus Status; // 0xc0
	FGuid Guid; // 0xc4
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

struct UWidgetAnimation : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x60
	TArray<FWidgetAnimationBinding> AnimationBindings; // 0x68
	bool bLegacyFinishOnStop; // 0x78
	FString DisplayLabel; // 0x80
};

struct UFileMediaSource : UBaseMediaSource {
	FString FilePath; // 0x88
	bool PrecacheFile; // 0x98
};

struct AMOCharacter : ACharacter {
	int32_t LocalAvatarID; // 0x4c0
	bool bRandomizeAppearance; // 0x4c4
	bool bRandomizeClade; // 0x4c5
	bool bRandomizeRace; // 0x4c6
	bool bRandomizeArmor; // 0x4c7
	bool bRandomizeEquipment; // 0x4c8
	int32_t RandomStream_BaseSeed; // 0x4cc
	float fDefaultHeightOverride; // 0x4d0
	FMOCollisionPoolAttachmentInfo ExtraColliderShapeInfo; // 0x4d8
	TArray<UShapeComponent*> CachedExtraColliderShapes; // 0x4f0
	bool bIsInRagdoll; // 0x512
	float fMaxDistanceForFootStepTraces; // 0x514
	AActor* LookAtActorOverrideCinematic; // 0x528
	FName LookAtTargetBoneName; // 0x530
	FMOCharacterPlayerAppearance DefaultAppearance; // 0x538
	FMOCharacterBodyShape BodyShape; // 0x800
	UMOCharacterEffects* pEffects; // 0x818
	UMOCharacterProjectileCreation* pProjectileCreation; // 0x820
	UMOEtherWorldCharacterSystem* pEtherWorldSystem; // 0x828
	float fRagdollDurationBeforeDeathSequence; // 0x830
	float fLoginSequenceDuration; // 0x834
	float fLogoutSequenceDuration; // 0x838
	float fDeathSequenceDuration; // 0x83c
	float fEnterOrLeaveWorldSequenceDuration; // 0x840
	bool bIsInEtherworld; // 0x844
	int32_t CustomDepthRenderChannel; // 0x848
	TArray<FMOSynchronizedFullBodyAnimationEntry> FullBodyAnimationQueue; // 0x858
	bool bIsInConstruction; // 0x878
	bool bIsSpawning; // 0x879
	FMOAnimationSequenceReactions ReactionAnimations; // 0x880
	FMOAnimationSequenceAttacks AttackAnimations; // 0x8c0
	FMOSynchronizedFullBodyAnimationEntry DominantFullBodyAnimation; // 0x930
	TArray<FMOSynchronizedFullBodyAnimationEntry> ActiveFullBodyAnimations; // 0x9c0
	bool bIsInFirstPerson; // 0x9d0
	ECombatInputDirection LastAttackAnimationDirection; // 0x9d1
	UMODataAssetWeaponAnimations* ActiveWeaponAnimationSet; // 0x9d8
	UMODataAssetMagicAnimations* ActiveMagicAnimationSet; // 0x9e0
	float OnServerVerify_CombatReleaseAnimDuration; // 0x9e8
	float OnServerVerify_CombatReleaseTimeStamp; // 0x9ec
	EMagicReleaseType eLastMagicReleaseType; // 0x9f0
	UMOCameraComponent* CameraComponent; // 0x9f8
	UMOBodyManagerComponent* pBodyManagerComponent; // 0xa00
	UMOArmorManagerComponent* pArmorManagerComponent; // 0xa08
	UMOEquipmentManagerComponent* EquipmentManagerComponent; // 0xa10
	UMOCharacterCompositionComponent* pCompositionComponent; // 0xa18
	TMap<EPhysicalSurface, USoundCue*> vFootStepSounds; // 0xa20
	FName sCameraBoneName; // 0xa70
	UMOWidgetComponentChatBubble* cChatBubbleWidgetComponentClass; // 0xa80
	FString sJournalRowNameToUnlock; // 0xa88
	USoundCue* pSoundCueUse; // 0xb18
	USoundCue* pSoundCueUseAlternative; // 0xb20
	FString sSteamStatOnKill; // 0xb28
	EMOSpawnSequence SpawnSequence; // 0xb64
	bool bIsUndead; // 0xb65
	bool bIsInCombat; // 0xb66
	UMOCombatSystem* pActiveCombat; // 0xbb0
	UMOCombatSystemMelee* pMeleeCombat; // 0xbb8
	UMOCombatSystemRanged* pRangedCombat; // 0xbc0
	float fCharacterHeight; // 0xbdc
	float fCharacterBindHeight; // 0xbe0
	float fCharacterScale; // 0xbe4
	float fEquipmentScale; // 0xbe8
	bool bIsMounted; // 0xbec
	bool bAnimMontageBound; // 0xbed
	bool bAlignWithFloor; // 0xc1c
	FMOObstacleAvoidanceParameters ObstacleAvoidanceParameters; // 0xc20
	bool bCanStrafe; // 0xca6
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

struct UPreviewMeshCollection : UDataAsset {
	USkeleton* Skeleton; // 0x38
	TArray<FPreviewMeshCollectionEntry> SkeletalMeshes; // 0x40
};

struct UMODataAssetNPCConversation : UPrimaryDataAsset {
	FText sStartingText; // 0x30
	FText sPlayerResponse1; // 0x48
	FText sPlayerResponse2; // 0x60
	FText sPlayerResponse3; // 0x78
	FText sPlayerResponse4; // 0x90
	FText sPlayerResponse5; // 0xa8
	FMONPCReply pNextNPCReply1; // 0xc0
	FMONPCReply pNextNPCReply2; // 0x190
	FMONPCReply pNextNPCReply3; // 0x260
	FMONPCReply pNextNPCReply4; // 0x330
	FMONPCReply pNextNPCReply5; // 0x400
};

struct UMOEquipmentManagerComponent : UActorComponent {
	UMOEquipmentComponent* pMainEquipmentComponent; // 0xb0
	UMOEquipmentComponent* pSecondaryEquipmentComponent; // 0xb8
	UMODataAssetArrowHead* pArrowHeadData; // 0xc0
};

struct UWB_MOCharCreationSlider_SkinComplexion_C : UMOOptionSliderWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x330
	UImage* Input; // 0x338
	float fMinValue; // 0x340
	float fMaxValue; // 0x344
	float fOptionsSliderValue; // 0x348
	float fOptionsSliderModifier; // 0x34c
	FString AppendEndOfStringWith; // 0x350
	bool bRoundOutVariable; // 0x360
	float fPrecisionPower; // 0x364
	FText ToolTip; // 0x368
	float TestVariable; // 0x380
	bool BackgroundIsVisible; // 0x384
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

struct USkeletalMeshSocket : UObject {
	FName SocketName; // 0x28
	FName BoneName; // 0x30
	FVector RelativeLocation; // 0x38
	FRotator RelativeRotation; // 0x44
	FVector RelativeScale; // 0x50
	bool bForceAlwaysAnimated; // 0x5c
};

struct USpectatorBeaconState : UObject {
	FName SessionName; // 0x28
	int32_t NumConsumedReservations; // 0x30
	int32_t MaxReservations; // 0x34
	bool bRestrictCrossConsole; // 0x38
	TArray<FSpectatorReservation> Reservations; // 0x40
};

struct UMaterialExpressionSceneDepth : UMaterialExpression {
	EMaterialSceneAttributeInputMode InputMode; // 0x40
	FExpressionInput Input; // 0x44
	FExpressionInput Coordinates; // 0x58
	FVector2D ConstInput; // 0x6c
};

struct UWidgetTree : UObject {
	UWidget* RootWidget; // 0x28
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

struct UWB_MO_Scrollbox_Arrow_Up_C : UMOUserWidget {
	UImage* pImage; // 0x2c8
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

struct UPlaneReflectionCaptureComponent : UReflectionCaptureComponent {
	float InfluenceRadiusScale; // 0x270
	UDrawSphereComponent* PreviewInfluenceRadius; // 0x278
	UBoxComponent* PreviewCaptureBox; // 0x280
};

struct UMOAnimNotifyPlayCharacterVoice : UMOAnimNotify {
	ECharacterSound eVoiceSound; // 0x38
};

struct UNiagaraDataInterfaceCurve : UNiagaraDataInterfaceCurveBase {
	FRichCurve Curve; // 0x70
};

struct UInterpTrackVectorProp : UInterpTrackVectorBase {
	FName PropertyName; // 0x90
};

struct UParticleModuleLocationDirect : UParticleModuleLocationBase {
	FRawDistributionVector Location; // 0x30
	FRawDistributionVector LocationOffset; // 0x78
	FRawDistributionVector ScaleFactor; // 0xc0
	FRawDistributionVector Direction; // 0x108
};

struct UInterpTrackInstFloatParticleParam : UInterpTrackInst {
	float ResetFloat; // 0x28
};

struct UTexture2DArray : UTexture {
	TextureAddress AddressX; // 0x130
	TextureAddress AddressY; // 0x131
	TextureAddress AddressZ; // 0x132
};

struct UMovieSceneGeometryCollectionSection : UMovieSceneSection {
	FMovieSceneGeometryCollectionParams Params; // 0xe8
};

struct ULiveLinkDebuggerSettings : UObject {
	FSlateColor MinBarColor; // 0x28
	FSlateColor MaxBarColor; // 0x50
	float DPIScaleMultiplier; // 0x78
};

struct UFontFace : UObject {
	FString SourceFilename; // 0x30
	EFontHinting Hinting; // 0x40
	EFontLoadingPolicy LoadingPolicy; // 0x41
	EFontLayoutMethod LayoutMethod; // 0x42
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

struct UNiagaraRendererProperties : UNiagaraMergeable {
	FNiagaraPlatformSet Platforms; // 0x28
	int32_t SortOrderHint; // 0x58
	bool bIsEnabled; // 0x5c
	bool bMotionBlurEnabled; // 0x5d
};

struct UMOStablesRemPet : UMOUserWidget {
	UTextBlock* pTextBlockPetPoints; // 0x2c8
	UTextBlock* pTextBlockPetPointsMax; // 0x2d0
	UMOScrollBox* pMOScrollBox_Pets; // 0x2d8
};

struct APrecomputedVisibilityOverrideVolume : AVolume {
	TArray<AActor*> OverrideVisibleActors; // 0x258
	TArray<AActor*> OverrideInvisibleActors; // 0x268
	TArray<FName> OverrideInvisibleLevels; // 0x278
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

struct USoundNodeQualityLevel : USoundNode {
	int32_t CookedQualityLevelIndex; // 0x48
};

struct UMaterialExpressionArccosine : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UMaterialExpressionDivide : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UBTTask_PlaySound : UBTTaskNode {
	USoundCue* SoundToPlay; // 0x70
};

struct UDEV_BP_ClientEffect_Transcendental_Awerness_C : UMOClientEffectAlvarinZoom {
	FPointerToUberGraphFrame UberGraphFrame; // 0x78
	FPostProcessSettings pPreviousPostProcessSettings; // 0x80
};

struct UImageSequenceProtocol_EXR : UImageSequenceProtocol {
	bool bCompressed; // 0xd8
	EHDRCaptureGamut CaptureGamut; // 0xd9
};

struct ABodyFireEffect_Flamestrike_C : AMOEffectActorBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	USceneComponent* DefaultSceneRoot; // 0x228
	TArray<FName> Locations; // 0x230
	UNiagaraSystem* NiagaraSystem; // 0x240
	TArray<UNiagaraComponent*> NiagaraSystem_List; // 0x248
	TArray<FString> SocketFilter; // 0x258
	bool Temp; // 0x268
};

struct UInputTouchDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputTouchDelegateBinding> InputTouchDelegateBindings; // 0x28
};

struct UNiagaraParameterCollectionInstance : UObject {
	UNiagaraParameterCollection* Collection; // 0x28
	TArray<FNiagaraVariable> OverridenParameters; // 0x30
	FNiagaraParameterStore ParameterStorage; // 0x40
};

struct ASwitchActor : AActor {
	USceneComponent* SceneComponent; // 0x238
	int32_t LastSelectedOption; // 0x240
};

struct UMaterialExpressionSmoothStep : UMaterialExpression {
	FExpressionInput Min; // 0x40
	FExpressionInput Max; // 0x54
	FExpressionInput Value; // 0x68
	float ConstMin; // 0x7c
	float ConstMax; // 0x80
	float ConstValue; // 0x84
};

struct UAITask_MoveTo : UAITask {
	FMulticastInlineDelegate OnRequestFailed; // 0x70
	FMulticastInlineDelegate OnMoveFinished; // 0x80
	FAIMoveRequest MoveRequest; // 0x90
};

struct UBTTask_FinishWithResult : UBTTaskNode {
	EBTNodeResult Result; // 0x70
};

struct UMODataAssetWeaponAnimations : UPrimaryDataAsset {
	bool bUseExactAimDuringCharge; // 0x30
	bool bCorrectPelvisTranslationDuringRelease; // 0x31
	float HandMovementLagMultiplier; // 0x34
	float HandMovementSwayHorizontalMultiplier; // 0x38
	float HandMovementSwayVerticalMultiplier; // 0x3c
	float HandMovementSwayRotationDegrees; // 0x40
	float HandMovementTurnSwayHorizontalMultiplier; // 0x44
	float HandMovementTurnSwayVerticalMultiplier; // 0x48
	float HandMovementDuringChargeMultiplier; // 0x4c
	float HandBreathSwayAmplitude; // 0x50
	UMODataAssetWeaponAnimations* FirstPersonOverrideSet; // 0x58
	UMODataAssetWeaponAnimations* MountedOverrideSet; // 0x60
	UMODataAssetWeaponAnimations* ShieldBucklerOverrideSet; // 0x68
	UMODataAssetWeaponAnimations* ShieldRoundOverrideSet; // 0x70
	UMODataAssetWeaponAnimations* ShieldKiteOverrideSet; // 0x78
	UMODataAssetWeaponAnimations* ShieldTowerOverrideSet; // 0x80
	float WalkBaseSpeed; // 0x88
	float RunBaseSpeed; // 0x8c
	float SprintBaseSpeed; // 0x90
	UBlendSpaceBase* WalkBlendspace; // 0x98
	UBlendSpaceBase* RunBlendspace; // 0xa0
	UAnimSequenceBase* Sprint; // 0xa8
	UAnimSequenceBase* MercyModeIdle; // 0xb0
	UAnimSequenceBase* MercyModeEnter; // 0xb8
	UAnimSequenceBase* MercyModeLeave; // 0xc0
	UAnimSequenceBase* MercyModeWalk; // 0xc8
	UAnimSequenceBase* Idle; // 0xd0
	UAnimSequenceBase* Equip; // 0xd8
	UAnimSequenceBase* Unequip; // 0xe0
	UAnimSequenceBase* Warcry; // 0xe8
	UAimOffsetBlendSpace* CombatAimOffset; // 0xf0
	UAnimSequenceBase* Push; // 0xf8
	UAnimSequenceBase* BlockLeft; // 0x100
	UAnimSequenceBase* BlockMiddle; // 0x108
	UAnimSequenceBase* BlockRight; // 0x110
	UAnimSequenceBase* BlockUp; // 0x118
	UBlendSpaceBase* TakeHitBlendspace; // 0x120
	UAnimMontage* AttackMontage_Left; // 0x128
	UAnimMontage* AttackMontage_Middle; // 0x130
	UAnimMontage* AttackMontage_Right; // 0x138
	UAnimMontage* AttackMontage_Up; // 0x140
	UAnimMontage* BlockMontage_Left; // 0x148
	UAnimMontage* BlockMontage_Middle; // 0x150
	UAnimMontage* BlockMontage_Right; // 0x158
	UAnimMontage* BlockMontage_Up; // 0x160
};

struct UEnvQueryGenerator_Composite : UEnvQueryGenerator {
	TArray<UEnvQueryGenerator*> Generators; // 0x50
	char bAllowDifferentItemTypes : 1; // 0x60
	char bHasMatchingItemType : 1; // 0x60
	UEnvQueryItemType* ForcedItemType; // 0x68
};

struct UAnimCompress : UAnimBoneCompressionCodec {
	char bNeedsSkeleton : 1; // 0x38
	AnimationCompressionFormat TranslationCompressionFormat; // 0x3c
	AnimationCompressionFormat RotationCompressionFormat; // 0x3d
	AnimationCompressionFormat ScaleCompressionFormat; // 0x3e
};

struct AMOStaticMeshActor : AStaticMeshActor {
	FText sDisplayName; // 0x230
	FString sJournalRowNameToUnlock; // 0x248
};

struct AARSharedWorldGameMode : AGameMode {
	int32_t BufferSizePerChunk; // 0x308
};

struct UMODataAssetPlayerBaseDefinition : UPrimaryDataAsset {
	TSoftObjectPtr<UMODataAssetPlayerBaseDefinition> UndeadVariant; // 0x30
	UMaterialInterface* EtherworldMaterial; // 0x58
	UNiagaraSystem* EtherworldParticleEffect; // 0x60
	TArray<FColor> vFurColors; // 0x68
	UMaterialInterface* pFurPreviewMaterial; // 0x78
	int32_t iDefaultSkinDecorationIndexA; // 0x80
	int32_t iDefaultSkinDecorationIndexB; // 0x84
	int32_t iDefaultSkinDecorationIndexC; // 0x88
	TArray<FColor> vEyeColors; // 0x90
	int32_t iDefaultEyeColorIndex; // 0xa0
	UMaterialInterface* pEyePreviewMaterial; // 0xa8
	TArray<FColor> vSkinColors; // 0xb0
	int32_t iDefaultSkinColorIndex; // 0xc0
	UMaterialInterface* pSkinPreviewMaterial; // 0xc8
	TArray<FColor> vHairColors; // 0xd0
	int32_t iDefaultHairColorIndex; // 0xe0
	UMaterialInterface* pHairPreviewMaterial; // 0xe8
	int32_t iDefaultFaceTattooIndex; // 0xf0
	int32_t iDefaultBodyTattooIndex; // 0xf4
	ESpecies Species; // 0xf8
	ESex Sex; // 0xf9
	float fPenisScale; // 0xfc
	float fDefaultLength; // 0x100
	float fSkeletalMeshBaseHeight; // 0x104
	UCurveFloat* pHeadScaleByHeightCurve; // 0x108
	USkeletalMesh* LowDetailProxyMesh; // 0x110
	UMaterialInterface* LowDetailProxyMaterial; // 0x118
	USkeletalMesh* DefaultHead; // 0x120
	UAnimInstance* HeadAnimClass; // 0x128
	UMaterialInterface* HeadSkinMaterial; // 0x130
	UMaterialInterface* EyesMaterial; // 0x138
	UMaterialInterface* EyesAOMaterial; // 0x140
	UMaterialInterface* FaceTattooMaterial; // 0x148
	UPoseAsset* HeadPoseAsset; // 0x150
	UPoseAsset* HeadARKitPoses; // 0x158
	UPoseAsset* HeadCustomizationShapes; // 0x160
	TArray<TSoftObjectPtr<UMODataAssetHair>> Hairstyles; // 0x168
	TArray<TSoftObjectPtr<UMODataAssetHair>> Beards; // 0x178
	USkeletalMesh* DefaultBody; // 0x188
	UAnimInstance* BodyAnimClass; // 0x190
	UMaterialInterface* BodySkinMaterial; // 0x198
	UMaterialInterface* BodyTattooMaterial; // 0x1a0
	UPhysicsAsset* PhysicsAsset; // 0x1a8
	UAnimInstance* PaperdollBodyAnimClass; // 0x1b0
	UAnimSequenceBase* BodyProportionsBaseSequence; // 0x1b8
	UPoseAsset* BodyProportionsPoseAsset; // 0x1c0
	TArray<UTexture*> BodyHairTextures; // 0x1c8
	UMaterialInterface* HeadFurMaterial; // 0x1d8
	USkeletalMesh* HeadFurMesh; // 0x1e0
	UFurSplines* HeadFurSplines; // 0x1e8
	FMOGFurParameters HeadFurParameters; // 0x1f0
	UMaterialInterface* BodyFurMaterial; // 0x248
	USkeletalMesh* BodyFurMesh; // 0x250
	UFurSplines* BodyFurSplines; // 0x258
	FMOGFurParameters BodyFurParameters; // 0x260
	float WalkBaseSpeed; // 0x2b8
	float RunBaseSpeed; // 0x2bc
	float SprintBaseSpeed; // 0x2c0
	UMODataAssetAnimationRandomSet* IdleVariations; // 0x2c8
	UMODataAssetAnimationRandomSet* IdleVariations_FP; // 0x2d0
	UMODataAssetAnimationRandomSet* IdleVariations_NPC; // 0x2d8
	UBlendSpaceBase* WalkBlendspace; // 0x2e0
	UBlendSpaceBase* RunBlendspace; // 0x2e8
	UAnimSequenceBase* Sprint; // 0x2f0
	TSoftObjectPtr<UMODataAssetWeaponAnimations> WeaponAnimationSet_Unarmed; // 0x2f8
	TSoftObjectPtr<UMODataAssetWeaponAnimations> WeaponAnimationSet_Axe1H; // 0x320
	TSoftObjectPtr<UMODataAssetWeaponAnimations> WeaponAnimationSet_Axe2H; // 0x348
	TSoftObjectPtr<UMODataAssetWeaponAnimations> WeaponAnimationSet_Dagger; // 0x370
	TSoftObjectPtr<UMODataAssetWeaponAnimations> WeaponAnimationSet_Hammer1H; // 0x398
	TSoftObjectPtr<UMODataAssetWeaponAnimations> WeaponAnimationSet_Hammer2H; // 0x3c0
	TSoftObjectPtr<UMODataAssetWeaponAnimations> WeaponAnimationSet_PoleAxe; // 0x3e8
	TSoftObjectPtr<UMODataAssetWeaponAnimations> WeaponAnimationSet_PoleSword; // 0x410
	TSoftObjectPtr<UMODataAssetWeaponAnimations> WeaponAnimationSet_Spear; // 0x438
	TSoftObjectPtr<UMODataAssetWeaponAnimations> WeaponAnimationSet_Sword1H; // 0x460
	TSoftObjectPtr<UMODataAssetWeaponAnimations> WeaponAnimationSet_Sword2H; // 0x488
	TSoftObjectPtr<UMODataAssetWeaponAnimations> WeaponAnimationSet_Lance; // 0x4b0
	TSoftObjectPtr<UMODataAssetWeaponAnimations> WeaponAnimationSet_Bow; // 0x4d8
	TSoftObjectPtr<UMODataAssetMagicAnimations> MagicAnimationSet_Ecumenical; // 0x500
	TSoftObjectPtr<UMODataAssetMagicAnimations> MagicAnimationSet_Spiritism; // 0x528
	TSoftObjectPtr<UMODataAssetMagicAnimations> MagicAnimationSet_Necromancy; // 0x550
	TSoftObjectPtr<UMODataAssetMagicAnimations> MagicAnimationSet_Elementalism; // 0x578
	UMODataAssetEtherCombat* Ethercombat; // 0x5a0
	TSoftObjectPtr<UMODataAssetFishingAnimations> FishingAnimationSet; // 0x5a8
	UMODataAssetTattooDefinitions* pTattooDefinitions; // 0x5d0
	UMODataAssetEmoteDefinitions* pEmotes; // 0x5d8
	UMODataAssetSkillAnimationDefinitions* pSkillAnimations; // 0x5e0
	UMODataAssetAnimationRandomSet* MountedIdleVariations; // 0x5e8
	UMODataAssetAnimationRandomSet* MountedIdleVariations_FP; // 0x5f0
	UMODataAssetAnimationRandomSet* MountedIdleVariations_NPC; // 0x5f8
	UAnimSequenceBase* Mounted_Mount_Left; // 0x600
	UAnimSequenceBase* Mounted_Mount_Right; // 0x608
	UAnimSequenceBase* Mounted_Dismount_Left; // 0x610
	UAnimSequenceBase* Mounted_Dismount_Right; // 0x618
	FMOAnimationSequenceReactions ReactionSequences; // 0x620
	USoundCue* pSoundCue_Pain; // 0x660
	USoundCue* pSoundCue_Death; // 0x668
	USoundCue* pSoundCue_HeavyBreathing; // 0x670
	USoundCue* pSoundCue_Gasp; // 0x678
	USoundCue* pSoundCue_Drown; // 0x680
	USoundCue* pSoundCue_Push; // 0x688
	USoundCue* pSoundCue_MercyModeSound; // 0x690
	USoundCue* pSoundCue_JumpStart; // 0x698
	USoundCue* pSoundCue_JumpEnd; // 0x6a0
	USoundCue* pSoundCue_FastSwing; // 0x6a8
	USoundCue* pSoundCue_FullChargedSwing; // 0x6b0
	USoundCue* pSoundCue_HardChargedSwing; // 0x6b8
	USoundCue* pSoundCue_BattleCry; // 0x6c0
	USoundCue* pSoundCue_KauBeam; // 0x6c8
	USoundCue* pSoundCue_GoreLimbRemoved; // 0x6d0
	USoundCue* pSoundCue_GorePiercingDeath; // 0x6d8
	USoundCue* pSoundCue_GoreBluntDeath; // 0x6e0
	USoundCue* pSoundCue_GoreBowDeath; // 0x6e8
	bool bAnimationsArePreloaded; // 0x6f0
	TArray<UMODataAssetWeaponAnimations*> PreloadedWeaponAnimations; // 0x6f8
	TArray<UMODataAssetMagicAnimations*> PreloadedMagicAnimations; // 0x708
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

struct UMaterialExpressionFresnel : UMaterialExpression {
	FExpressionInput ExponentIn; // 0x40
	float Exponent; // 0x54
	FExpressionInput BaseReflectFractionIn; // 0x58
	float BaseReflectFraction; // 0x6c
	FExpressionInput Normal; // 0x70
};

struct UMOQuestEntry : UMOUserWidget {
	UTextBlock* pTitleText; // 0x2c8
	UVerticalBox* pTaskVerticalBox; // 0x2d0
	UMOQuestTaskEntry* cMOQuestTaskEntry; // 0x2d8
	UMOQuestWidget* pQuestWidgetOwner; // 0x2e0
	UImage* pQuestIcon; // 0x2e8
	bool bQuestFocused; // 0x2f0
	TArray<UMOQuestTaskEntry*> vQuestTasks; // 0x2f8
};

struct UAnimNotify_PlayParticleEffect : UAnimNotify {
	UParticleSystem* PSTemplate; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	FVector Scale; // 0x58
	char Attached : 1; // 0x80
	FName SocketName; // 0x84
};

struct UParticleModuleLifetime_Seeded : UParticleModuleLifetime {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x60
};

struct UMOAlchemy : UMOUserWidget {
	UMOButtonMedium* pMOButton_Alchemy; // 0x2c8
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_Resource; // 0x2d0
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_1; // 0x2d8
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_2; // 0x2e0
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_3; // 0x2e8
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_4; // 0x2f0
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_5; // 0x2f8
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_6; // 0x300
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_7; // 0x308
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_8; // 0x310
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_9; // 0x318
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_10; // 0x320
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_11; // 0x328
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_12; // 0x330
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_13; // 0x338
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_14; // 0x340
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_15; // 0x348
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_16; // 0x350
	UImage* pSlot_000; // 0x358
	UImage* pSlot_001; // 0x360
	UImage* pSlot_002; // 0x368
	UImage* pSlot_003; // 0x370
	UImage* pSlot_101; // 0x378
	UImage* pSlot_102; // 0x380
	UImage* pSlot_103; // 0x388
	UImage* pSlot_104; // 0x390
	UImage* pSlot_105; // 0x398
	UImage* pSlot_106; // 0x3a0
	UImage* pSlot_107; // 0x3a8
	UImage* pSlot_108; // 0x3b0
	UImage* pSlot_109; // 0x3b8
	UImage* pSlot_110; // 0x3c0
	UImage* pSlot_111; // 0x3c8
	UImage* pSlot_112; // 0x3d0
	TArray<UMOItemSlotPlaceItem*> vIngredientSlotSimplifier; // 0x3e8
	TArray<UImage*> vBasicIngredientsHidden; // 0x3f8
	TArray<UImage*> vAdvancedIngredientsHidden; // 0x408
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

struct UBTDecorator_Loop : UBTDecorator {
	int32_t NumLoops; // 0x68
	bool bInfiniteLoop; // 0x6c
	float InfiniteLoopTimeoutTime; // 0x70
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

struct UMODataAssetFishingRodDefinitions : UPrimaryDataAsset {
	UMODataAssetFishingRod* pFallBackFishingRod; // 0x30
	UMODataAssetEquipmentShared* pSharedData; // 0x38
	TArray<UMODataAssetFishingRod*> vFishingRods; // 0x40
};

struct AMOEquipmentActorTwoPart : AMOEquipmentActor {
	UStaticMeshComponent* HandleComponent; // 0x288
	UStaticMeshComponent* HeadComponent; // 0x290
	bool bTraceUsingHead; // 0x298
	TArray<FVector> LocalHeadTracePositions; // 0x2a0
	UMaterialInstanceDynamic* HandleMID; // 0x2b0
	UMaterialInstanceDynamic* HeadMID; // 0x2b8
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

struct UWidgetSwitcherSlot : UPanelSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct UPoseAsset : UAnimationAsset {
	FPoseDataContainer PoseContainer; // 0x80
	bool bAdditivePose; // 0x110
	int32_t BasePoseIndex; // 0x114
	FName RetargetSource; // 0x118
};

struct UMOCraftingSliderWidget : UUserWidget {
	UMOSlider* pMOSlider; // 0x260
};

struct UMaterialExpressionDistance : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
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

struct USoundNodeModulator : USoundNode {
	float PitchMin; // 0x48
	float PitchMax; // 0x4c
	float VolumeMin; // 0x50
	float VolumeMax; // 0x54
};

struct UMovieSceneParticleSection : UMovieSceneSection {
	FMovieSceneParticleChannel ParticleKeys; // 0xe8
};

struct UWB_TabButtonNewImage_C : UMOUserWidgetTabButtonNew {
	FPointerToUberGraphFrame UberGraphFrame; // 0x310
	UImage* ImageHovered; // 0x318
	UImage* ImageIcon; // 0x320
	UImage* ImagePressed; // 0x328
	UTexture2D* Texture; // 0x330
	UTexture2D* TextureSelected; // 0x338
};

struct AMODecorationActor : AMOStaticMeshActorUse {
	AMOAvatarStaticMeshBuildableHouse* pHouse; // 0x2b0
	UStaticMeshComponent* pRemoveComponent; // 0x2b8
	bool bIsChest; // 0x2c0
};

struct USubmixEffectFilterPreset : USoundEffectSubmixPreset {
	FSubmixEffectFilterSettings Settings; // 0x9c
};

struct AMOTriggerVolumeJournal : AMOTriggerVolume {
	FString sJournalRowNameToUnlock; // 0x258
};

struct UMOCharCreationAppearancePanel : UMOCharCreationPanel {
	FMulticastInlineDelegate OnShowFaceCustomization; // 0x2d0
	TMap<int32_t, UMODataAssetTattoo*> FaceTattooMap; // 0x2e0
	TMap<int32_t, UMODataAssetTattoo*> BodyTattooMap; // 0x330
	UMODataAssetTattoo* pFaceTattoo; // 0x380
	UMODataAssetTattoo* pBodyTattoo; // 0x388
	ETattooEffectType eFaceTattooStyle; // 0x390
	ETattooEffectType eBodyTattooStyle; // 0x391
	TArray<ETattooEffectType> vFaceTattooStyles; // 0x398
	TArray<ETattooEffectType> vBodyTattooStyles; // 0x3a8
	int32_t iPreviousValue_SkinDecorationA; // 0x3b8
	int32_t iPreviousValue_SkinDecorationB; // 0x3bc
	int32_t iPreviousValue_SkinDecorationC; // 0x3c0
	UMOButtonLarge* pMOButton_EnableFaceCustomization; // 0x3c8
	UMOCarouselSelectValue* pCarouselSelect_HairStyle; // 0x3d0
	UMOCarouselSelectValue* pCarouselSelect_Beard; // 0x3d8
	UVerticalBox* pVerticalBox_Tattoo; // 0x3e0
	UMOCarouselSelectText* pCarouselSelect_FaceTattooType; // 0x3e8
	UMOCarouselSelectText* pCarouselSelect_BodyTattooType; // 0x3f0
	UMOCarouselSelectValue* pCarouselSelect_FaceTattoo; // 0x3f8
	UMOCarouselSelectValue* pCarouselSelect_BodyTattoo; // 0x400
	UMOCarouselSelectText* pCarouselSelect_FaceTattooStyle; // 0x408
	UMOCarouselSelectText* pCarouselSelect_BodyTattooStyle; // 0x410
	UMOOptionSliderWidget* pSlider_Weight; // 0x418
	UUniformGridPanel* pUniformGridPanel_SkinColors; // 0x420
	UUniformGridPanel* pUniformGridPanel_HairColors; // 0x428
	UUniformGridPanel* pUniformGridPanel_BeardColors; // 0x430
	UUniformGridPanel* pUniformGridPanel_EyeColors; // 0x438
	UUniformGridPanel* pUniformGridPanel_FaceTattooColors; // 0x440
	UUniformGridPanel* pUniformGridPanel_BodyTattooColors; // 0x448
	UMOOptionSliderWidget* pSlider_SkinDecorationA; // 0x450
	UMOOptionSliderWidget* pSlider_SkinDecorationB; // 0x458
	UMOOptionSliderWidget* pSlider_SkinDecorationC; // 0x460
	UMOCarouselSelectText* pCarouselSelect_SkinDecorationA; // 0x468
	UOverlay* pOverlay_SkinDecorationC; // 0x470
	UUniformGridPanel* pUniformGridPanel_SkinDecorationC; // 0x478
	UMOCharCreationColorEntry* cMOColorEntryClass; // 0x480
	UMOCharCreationColorEntry* CMOHiddenColorEntryClass; // 0x488
};

struct UAudioBus : UObject {
	EAudioBusChannels AudioBusChannels; // 0x28
	bool bIsAutomatic; // 0x29
};

struct ULiveLinkComponent : UActorComponent {
	FMulticastInlineDelegate OnLiveLinkUpdated; // 0xb0
};

struct AMOPlayerController : APlayerController {
	USoundCue* pHeartBeat; // 0x5f0
	USoundCue* pTakeFallDamage; // 0x5f8
	UCurveFloat* pChargeDamageScaleCurve; // 0x600
	UMaterialParameterCollection* pDayNightParamCollection; // 0x608
	int32_t ControlledAvatarID; // 0x614
	FMOEquipmentStats LeftEquipmentStats; // 0x618
	FMOEquipmentStats RightEquipmentStats; // 0x640
	bool bReplicateJumpInAtlas; // 0x668
	float BaseTurnRate; // 0x66c
	float BaseLookUpRate; // 0x670
	bool bIsLoadingOrTeleporting; // 0x6e8
	ACameraActor* pStationaryCamera; // 0x6f0
	UMOGameUserSettings* pMOGameUserSettings; // 0x6f8
	UMaterialParameterCollection* pUIParameterCollection; // 0x700
	TArray<UMOClientEffect*> vClientEffects; // 0x708
	UDataTable* pDataTableClientEffects; // 0x718
	UMOStatManager* pStatManager; // 0x720
	UMOHintManager* pHintManager; // 0x728
	UMOTargetManager* pTargetManager; // 0x730
	UMOCombatSystem* pCombatSystem; // 0x738
	UMOCombatSystem* pLastActiveCombatSystem; // 0x740
	UMOCombatSystemRanged* pRangedCombatSystem; // 0x748
	UMOCombatSystemMelee* pMeleeCombatSystem; // 0x750
	UMOCombatSystemMagic* pMagicCombatSystem; // 0x758
	UMOCombatSystemFishing* pFishingCombatSystem; // 0x760
	AActor* pWaypointActor; // 0x768
	UMOPreviewMode* pPreviewMode; // 0x770
	UUserWidget* LoadingWidget; // 0x778
	UAudioComponent* pBreathingAudioComponent; // 0x888
	UAudioComponent* pHeartBeatAudioComponent; // 0x890
};

struct UARPoseComponent : UARComponent {
	FARPoseUpdatePayload ReplicatedPayload; // 0x280
};

struct UCompositeCurveTable : UCurveTable {
	TArray<UCurveTable*> ParentTables; // 0xa0
	TArray<UCurveTable*> OldParentTables; // 0xb0
};

struct UMOCraftingPetEquipment : UMOCrafting {
	UMOScrollBox* pScrollBox_ArmorSlot; // 0x310
	UMOScrollBox* pScrollBox_ArmorStyle; // 0x318
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_ArmorOutsideMaterial; // 0x320
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_ArmorInsideMaterial; // 0x328
	UMaterialInstance* pPreviewMaterial; // 0x330
	FString sArmorSlotMaterialInsideName; // 0x338
	FString sArmorSlotMaterialOutsideName; // 0x348
	FString sArmorSlotName; // 0x358
	FString sArmorStyleName; // 0x368
	UMOCraftingSliderWidget* pCraftingSlider_Inside; // 0x378
	UMOCraftingSliderWidget* pCraftingSlider_Outside; // 0x380
	TArray<FPetEquipmentCraftingInfo_FamilySlot> vCraftingInfo_ArmorSlot; // 0x398
	TArray<FPetEquipmentCraftingInfo_Style> vCraftingInfo_ArmorStyle; // 0x3a8
	TArray<UMOCraftingListEntry*> vCraftingPetEquipmentSlotGroups; // 0x3b8
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

struct UMovieSceneGeometryCacheTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x80
};

struct USubmixEffectFlexiverbPreset : USoundEffectSubmixPreset {
	FSubmixEffectFlexiverbSettings Settings; // 0xa0
};

struct UMovieSceneControlRigParameterTrack : UMovieSceneNameableTrack {
	UControlRig* ControlRig; // 0x88
	UMovieSceneSection* SectionToKey; // 0x90
	TArray<UMovieSceneSection*> Sections; // 0x98
	FName TrackName; // 0xa8
};

struct UEndMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
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

struct UMOUserWidgetGMTabs : UMOUserWidget {
	TArray<UMOGMCharacterButtons*> vPanels; // 0x2c8
	UMOGMCharacterButtons* pCurrentPanel; // 0x2d8
	UMOUserWidgetTabButtonNew* pPanelTabButton_Teleport; // 0x2e0
	UMOGMCharacterButtons* pGMTabsPanel_Teleport; // 0x2e8
	UMOUserWidgetTabButtonNew* pPanelTabButton_VoipChat; // 0x2f0
	UMOGMCharacterButtons* pGMTabsPanel_VoipChat; // 0x2f8
	UMOUserWidgetTabButtonNew* pPanelTabButton_UserActions; // 0x300
	UMOGMCharacterButtons* pGMTabsPanel_UserActions; // 0x308
	UMOUserWidgetTabButtonNew* pPanelTabButton_QoL; // 0x310
	UMOGMCharacterButtons* pGMTabsPanel_QoL; // 0x318
	UMOUserWidgetTabButtonNew* pPanelTabButton_Logs; // 0x320
	UMOGMCharacterButtons* pGMTabsPanel_Logs; // 0x328
	UMOUserWidgetTabButtonNew* pPanelTabButton_Houses; // 0x330
	UMOGMCharacterButtons* pGMTabsPanel_Houses; // 0x338
	UMOUserWidgetTabButtonNew* pPanelTabButton_Ai; // 0x340
	UMOGMCharacterButtons* pGMTabsPanel_Ai; // 0x348
	UMOUserWidgetTabButtonNew* pPanelTabButton_Pets; // 0x350
	UMOGMCharacterButtons* pGMTabsPanel_Pets; // 0x358
	UMOGMHUD* pMOGMHUD; // 0x360
};

struct USequenceCameraShakeCameraStandIn : UObject {
	float FieldOfView; // 0x30
};

struct UMOSaveGame : USaveGame {
	FMOSaveData sData; // 0x28
};

struct UInteractiveToolPropertySet : UObject {
	UInteractiveToolPropertySet* CachedProperties; // 0x38
	bool bIsPropertySetEnabled; // 0x40
};

struct UMaterialExpressionDynamicParameter : UMaterialExpression {
	TArray<FString> ParamNames; // 0x40
	FLinearColor DefaultValue; // 0x50
	uint32_t ParameterIndex; // 0x60
};

struct UTireConfig : UDataAsset {
	float FrictionScale; // 0x30
	TArray<FTireConfigMaterialFriction> TireFrictionScales; // 0x38
};

struct UMOFrameBase : UMOUserWidget {
	TArray<UTexture2D*> vFlagIcons; // 0x2c8
	UTextBlock* pTextBlockCharacterName; // 0x2d8
	UMOUserWidgetProgressBar* pProgressBarHealth; // 0x2e0
	UTextBlock* pTextBlockHealth; // 0x2e8
	UImage* pCriminalImage; // 0x2f0
	UImage* pVoipIcon; // 0x2f8
	UBorder* pFrameBorder; // 0x308
};

struct UMOTooltipSkill : UUserWidget {
	UOverlay* pOverlay; // 0x260
	UTextBlock* pDisplaynameText; // 0x268
	UTextBlock* pDescriptionText; // 0x270
	UTextBlock* pUseDescriptionText; // 0x278
	UGridPanel* pMyGridPanel; // 0x280
};

struct UParticleModuleSpawn : UParticleModuleSpawnBase {
	FRawDistributionFloat Rate; // 0x38
	FRawDistributionFloat RateScale; // 0x68
	EParticleBurstMethod ParticleBurstMethod; // 0x98
	TArray<FParticleBurst> BurstList; // 0xa0
	FRawDistributionFloat BurstScale; // 0xb0
	char bApplyGlobalSpawnRateScale : 1; // 0xe0
};

struct UInterpTrackInstSound : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
	UAudioComponent* PlayAudioComp; // 0x30
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

struct UMovieSceneStringSection : UMovieSceneSection {
	FMovieSceneStringChannel StringCurve; // 0xe8
};

struct UAnimNotify_PlayMontageNotifyWindow : UAnimNotifyState {
	FName NotifyName; // 0x30
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

struct ASkeletalMeshActor : AActor {
	char bShouldDoAnimNotifies : 1; // 0x228
	char bWakeOnLevelStart : 1; // 0x228
	USkeletalMeshComponent* SkeletalMeshComponent; // 0x230
	USkeletalMesh* ReplicatedMesh; // 0x238
	UPhysicsAsset* ReplicatedPhysAsset; // 0x240
	UMaterialInterface* ReplicatedMaterial0; // 0x248
	UMaterialInterface* ReplicatedMaterial1; // 0x250
};

struct UParticleModuleCameraOffset : UParticleModuleCameraBase {
	FRawDistributionFloat CameraOffset; // 0x30
	char bSpawnTimeOnly : 1; // 0x60
	EParticleCameraOffsetUpdateMethod UpdateMethod; // 0x64
};

struct AMOEquipmentActor : AActor {
	USceneComponent* SceneRootComponent; // 0x220
	UMOProjectileMovementComponent* ProjectileMovementComponent; // 0x228
	EEquipmentGroup EquipmentGroup; // 0x230
	bool bLocalTracePositionsNeedUpdate; // 0x231
	TArray<FVector> LocalTracePositions; // 0x238
	bool bAutoActivateExtraComponents; // 0x248
	TArray<UAudioComponent*> AudioComponents; // 0x250
	TArray<UNiagaraComponent*> NiagaraComponents; // 0x260
	TArray<UPointLightComponent*> PointLightComponents; // 0x270
	FTimerHandle TrailsActiveDurationTimer; // 0x280
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

struct UMaterialExpressionSign : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UBTNode : UObject {
	FString NodeName; // 0x30
	UBehaviorTree* TreeAsset; // 0x40
	UBTCompositeNode* ParentNode; // 0x48
};

struct UInterpTrackInstFloatMaterialParam : UInterpTrackInst {
	TArray<UMaterialInstanceDynamic*> MaterialInstances; // 0x28
	TArray<float> ResetFloats; // 0x38
	TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x48
	UInterpTrackFloatMaterialParam* InstancedTrack; // 0x58
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

struct UCanvasPanelSlot : UPanelSlot {
	FAnchorData LayoutData; // 0x38
	bool bAutoSize; // 0x60
	int32_t ZOrder; // 0x64
};

struct UWindowTitleBarArea : UContentWidget {
	bool bWindowButtonsEnabled; // 0x120
	bool bDoubleClickTogglesFullscreen; // 0x121
};

struct UAnimBoneCompressionCodec : UObject {
	FString Description; // 0x28
};

struct UNiagaraSettings : UDeveloperSettings {
	FSoftObjectPath DefaultEffectType; // 0x38
	TArray<FText> QualityLevels; // 0x50
	TMap<FString, FText> ComponentRendererWarningsPerClass; // 0x60
	ETextureRenderTargetFormat DefaultRenderTargetFormat; // 0xb0
	ENiagaraGpuBufferFormat DefaultGridFormat; // 0xb1
	UNiagaraEffectType* DefaultEffectTypePtr; // 0xb8
};

struct UMOGMHUD : UMOUserWidget {
	UMOScrollBox* pMOScrollBox_Petitions; // 0x2c8
	UMOGMCharacterButtons* pMOGMCharacterButtons; // 0x2d0
	UMOUserWidgetGMTabs* pGMTabs; // 0x2d8
	UMOSimpleList* pSimpleListGM; // 0x2e0
	UMOSimpleList* pSimpleListGMSpawn; // 0x2e8
	UMOContainer* pGMInventory; // 0x2f0
	UMOGMOpenPetition* cGMOpenPetition; // 0x2f8
	UMOInventoryButtonItem* cInventoryItem; // 0x300
	FString GMDisplayName; // 0x310
};

struct UParticleModuleKillBox : UParticleModuleKillBase {
	FRawDistributionVector LowerLeftCorner; // 0x30
	FRawDistributionVector UpperRightCorner; // 0x78
	char bAbsolute : 1; // 0xc0
	char bKillInside : 1; // 0xc0
	char bAxisAlignedAndFixedSize : 1; // 0xc0
};

struct AStaticMeshActor : AActor {
	UStaticMeshComponent* StaticMeshComponent; // 0x220
	bool bStaticMeshReplicateMovement; // 0x228
	ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x229
};

struct UInAppPurchaseRestoreCallbackProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UTireType : UDataAsset {
	float FrictionScale; // 0x30
};

struct UMaterialExpressionSingleLayerWaterMaterialOutput : UMaterialExpressionCustomOutput {
	FExpressionInput ScatteringCoefficients; // 0x40
	FExpressionInput AbsorptionCoefficients; // 0x54
	FExpressionInput PhaseG; // 0x68
	FExpressionInput ColorScaleBehindWater; // 0x7c
};

struct AWaterBodyRiver : AWaterBody {
	URiverGenerator* RiverGenerator; // 0xdd0
	UMaterialInterface* LakeTransitionMaterial; // 0xdd8
	UMaterialInstanceDynamic* LakeTransitionMID; // 0xde0
	UMaterialInterface* OceanTransitionMaterial; // 0xde8
	UMaterialInstanceDynamic* OceanTransitionMID; // 0xdf0
};

struct UARMeshComponent : UARComponent {
	FARMeshUpdatePayload ReplicatedPayload; // 0x280
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

struct UInterpTrackParticleReplay : UInterpTrack {
	TArray<FParticleReplayTrackKey> TrackKeys; // 0x70
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

struct UParticleModuleOrientationAxisLock : UParticleModuleOrientationBase {
	EParticleAxisLock LockAxisFlags; // 0x30
};

struct UPlatformInterfaceWebResponse : UObject {
	FString OriginalURL; // 0x28
	int32_t ResponseCode; // 0x38
	int32_t Tag; // 0x3c
	FString StringResponse; // 0x40
	TArray<char> BinaryResponse; // 0x50
};

struct USourceEffectChorusPreset : USoundEffectSourcePreset {
	FSourceEffectChorusSettings Settings; // 0x108
};

struct UMovieSceneEventTrack : UMovieSceneNameableTrack {
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	EFireEventsAtPosition EventPosition; // 0x84
	TArray<UMovieSceneSection*> Sections; // 0x88
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

struct UMOAnimInstanceFishingRod : UAnimInstance {
	UAnimSequenceBase* PullSequence; // 0x2b8
	float StringRestDistance; // 0x2c0
};

struct UMOButtonSpell : UMOButton {
	FRequiredSpellData sReqData; // 0x448
	UMaterialInstanceDynamic* pMaterialInstance; // 0x4d0
};

struct AVolumetricCloud : AInfo {
	UVolumetricCloudComponent* VolumetricCloudComponent; // 0x220
};

struct AEQSTestingPawn : ACharacter {
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

struct UAISense_Sight : UAISense {
	int32_t MaxTracesPerTick; // 0x148
	int32_t MinQueriesPerTimeSliceCheck; // 0x14c
	double MaxTimeSlicePerTick; // 0x150
	float HighImportanceQueryDistanceThreshold; // 0x158
	float MaxQueryImportance; // 0x160
	float SightLimitQueryImportance; // 0x164
};

struct UMOCheckBox : UCheckBox {
	USlateWidgetStyleAsset* CustomStyle; // 0x770
};

struct UMODataAssetTattooEffectCollection : UPrimaryDataAsset {
	TArray<UMODataAssetTattooEffect*> vTattooEffects; // 0x30
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

struct UMOBrokerSellPetsPanel : UMOBrokerPanel {
	UMOBrokerCurrencyWidget* pMOBrokerCurrencyWidget; // 0x2d8
	UMOButton* pMOButton_Close; // 0x2e0
	UMOPetListEntry* pPetEntry_Sell; // 0x2e8
};

struct UMOMurderCount : UMOUserWidget {
	UMOWidgetBlueprint* cMurderCountListEntryClass; // 0x2d0
	TArray<UMOMurderCountEntry*> vMurderCountEntries; // 0x2d8
	UVerticalBox* pVerticalBox_Murderers; // 0x2e8
};

struct UWB_MOKeybindCategoryEntry_C : UMOCategoryEntry {
	UWB_CategoryLine_C* WB_MOKeybindCategoryLine; // 0x2d0
	UWB_CategoryLine_C* WB_MOKeybindCategoryLine_2; // 0x2d8
};

struct UMovieSceneEnumTrack : UMovieScenePropertyTrack {
	UEnum* Enum; // 0xb0
};

struct UMovieSceneMediaPlayerPropertySection : UMovieSceneSection {
	UMediaSource* MediaSource; // 0xe8
	bool bLoop; // 0xf0
};

struct UCompressedImageSequenceProtocol : UImageSequenceProtocol {
	int32_t CompressionQuality; // 0xd8
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

struct UNiagaraDataInterfaceArray : UNiagaraDataInterface {
	int32_t MaxElements; // 0x40
};

struct UParticleModuleSubUV : UParticleModuleSubUVBase {
	USubUVAnimation* Animation; // 0x30
	FRawDistributionFloat SubImageIndex; // 0x38
	char bUseRealTime : 1; // 0x68
};

struct ALevelScriptActor : AActor {
	char bInputEnabled : 1; // 0x220
};

struct UMediaComponent : UActorComponent {
	UMediaTexture* MediaTexture; // 0xb0
	UMediaPlayer* MediaPlayer; // 0xb8
};

struct UMOStatManager : UObject {
	UDataTable* exportData; // 0x28
};

struct UParticleModuleMeshRotationRateOverLife : UParticleModuleRotationRateBase {
	FRawDistributionVector RotRate; // 0x30
	char bScaleRotRate : 1; // 0x78
};

struct ABP_AiEffectAcid_C : AMOAiEffectActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	FVector vHitLocation; // 0x278
};

struct UWB_MOOptions_New_C : UMOUserWidgetOptions {
	FPointerToUberGraphFrame UberGraphFrame; // 0x398
	UWidgetAnimation* FadeIn; // 0x3a0
	UMOBorder* MOBorder_UnsavedChanges_2; // 0x3a8
	UCanvasPanel* OptionsPanel; // 0x3b0
	UMOButtonLarge* pMOButtonUnsavedChanges_No_2; // 0x3b8
	UMOButtonLarge* pMOButtonUnsavedChanges_Yes_2; // 0x3c0
};

struct UWB_MOOptionsAudioPanel_VoiceMeter_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UMOSlider* AutoActivateThreshold; // 0x268
	UImage* Image_1; // 0x270
	FMulticastInlineDelegate OnVoiceAutoActivationThresholdUpdated; // 0x278
	bool bVoiceAutoActivateEnabled; // 0x288
};

struct ULeaderboardQueryCallbackProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
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

struct UNiagaraDataInterfaceExport : UNiagaraDataInterface {
	FNiagaraUserParameterBinding CallbackHandlerParameter; // 0x38
	ENDIExport_GPUAllocationMode GPUAllocationMode; // 0x58
	int32_t GPUAllocationFixedSize; // 0x5c
	float GPUAllocationPerParticleSize; // 0x60
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

struct AMOAvatarStaticMeshBuildable : AMOAvatarStaticMesh {
	TArray<FMOBuildableStates> vBuildableStates; // 0x2c8
	UStaticMeshComponent* pSignComponent; // 0x2d8
};

struct UWB_ButtonItem_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Pulse; // 0x268
	UMOButtonItem* ButtonItem; // 0x270
};

struct UNiagaraDataInterfaceRenderTarget2DArray : UNiagaraDataInterfaceRWBase {
	FIntVector Size; // 0xd8
	ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe4
	char bOverrideFormat : 1; // 0xe5
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8
	TMap<uint64_t, UTextureRenderTarget2DArray*> ManagedRenderTargets; // 0x108
};

struct UParticleModuleVectorFieldScaleOverLife : UParticleModuleVectorFieldBase {
	UDistributionFloat* VectorFieldScaleOverLife; // 0x30
	FRawDistributionFloat VectorFieldScaleOverLifeRaw; // 0x38
};

struct UHapticFeedbackEffect_Buffer : UHapticFeedbackEffect_Base {
	TArray<char> Amplitudes; // 0x28
	int32_t SampleRate; // 0x38
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

struct URadialFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb0
	float MinRange; // 0xb4
	float MaxRange; // 0xb8
	float Default; // 0xbc
	float Radius; // 0xc0
	FVector Position; // 0xc4
	EFieldFalloffType Falloff; // 0xd0
};

struct UInAppPurchaseRestoreCallbackProxy2 : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
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

struct UDatasmithCineCameraComponentTemplate : UDatasmithObjectTemplate {
	FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings; // 0x30
	FDatasmithCameraLensSettingsTemplate LensSettings; // 0x38
	FDatasmithCameraFocusSettingsTemplate FocusSettings; // 0x3c
	float CurrentFocalLength; // 0x44
	float CurrentAperture; // 0x48
	FDatasmithPostProcessSettingsTemplate PostProcessSettings; // 0x50
};

struct UMOText : UMOUserWidget {
	UTextBlock* pTextBlock; // 0x2c8
	FText InitializeText; // 0x2d0
	int32_t InitializeFontSize; // 0x2e8
};

struct UEnvQueryGenerator_ActorsOfClass : UEnvQueryGenerator {
	AActor* SearchedActorClass; // 0x50
	FAIDataProviderBoolValue GenerateOnlyActorsInRadius; // 0x58
	FAIDataProviderFloatValue SearchRadius; // 0x90
	UEnvQueryContext* SearchCenter; // 0xc8
};

struct UAnimSharingStateInstance : UAnimInstance {
	UAnimSequence* AnimationToPlay; // 0x2b8
	float PermutationTimeOffset; // 0x2c0
	float PlayRate; // 0x2c4
	bool bStateBool; // 0x2c8
	UAnimSharingInstance* Instance; // 0x2d0
};

struct UMaterialExpressionBentNormalCustomOutput : UMaterialExpressionCustomOutput {
	FExpressionInput Input; // 0x40
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

struct UParticleModuleVelocity : UParticleModuleVelocityBase {
	FRawDistributionVector StartVelocity; // 0x38
	FRawDistributionFloat StartVelocityRadial; // 0x80
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

struct UDamageType : UObject {
	char bCausedByWorld : 1; // 0x28
	char bScaleMomentumByMass : 1; // 0x28
	char bRadialDamageVelChange : 1; // 0x28
	float DamageImpulse; // 0x2c
	float DestructibleImpulse; // 0x30
	float DestructibleDamageSpreadScale; // 0x34
	float DamageFalloff; // 0x38
};

struct UParticleModuleAccelerationDrag : UParticleModuleAccelerationBase {
	UDistributionFloat* DragCoefficient; // 0x38
	FRawDistributionFloat DragCoefficientRaw; // 0x40
};

struct UAchievementQueryCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
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

struct UWB_ButtonSpellWidget_C : UMOButtonSpellWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
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

struct UMovieSceneLevelVisibilitySection : UMovieSceneSection {
	ELevelVisibility Visibility; // 0xf0
	TArray<FName> LevelNames; // 0xf8
};

struct UMOItemSlot : UUserWidget {
	UMOButtonItem* pButtonItem; // 0x290
	UBorder* pButtonBorder; // 0x298
	UTextBlock* pStackNumber; // 0x2a0
};

struct ULiveLinkComponentSettings : UObject {
	TMap<ULiveLinkRole*, ULiveLinkControllerBase*> DefaultControllerForRole; // 0x28
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

struct AMOCharacterAIGeneratedTaskVendor : AMOCharacterAIGenerated {
	USoundCue* pOpenVendorMale; // 0xf98
	USoundCue* pCloseVendorMale; // 0xfa0
	USoundCue* pRefuseVendorMale; // 0xfa8
	USoundCue* pAcceptVendorMale; // 0xfb0
	USoundCue* pOpenVendorFemale; // 0xfb8
	USoundCue* pCloseVendorFemale; // 0xfc0
	USoundCue* pRefuseVendorFemale; // 0xfc8
	USoundCue* pAcceptVendorFemale; // 0xfd0
	USoundCue* pShoutOutVendorMale; // 0xfd8
	USoundCue* pShoutOutVendorFemale; // 0xfe0
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

struct UParticleModuleAttractorPointGravity : UParticleModuleAttractorBase {
	FVector Position; // 0x30
	float Radius; // 0x3c
	UDistributionFloat* Strength; // 0x40
	FRawDistributionFloat StrengthRaw; // 0x48
};

struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	TArray<FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x368
	char bIsLayerThumbnail : 1; // 0x378
	char bDisableTessellation : 1; // 0x378
	char bMobile : 1; // 0x378
	char bEditorToolUsage : 1; // 0x378
};

struct UMOFrameLocalPlayerMount : UMOFrameBase {
	UMOGameUserSettings* pMOGameUserSettings; // 0x328
	UMOUserWidgetProgressBar* pProgressBarStamina; // 0x330
	UTextBlock* pTextBlockStamina; // 0x338
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

struct UMovieSceneGeometryCollectionTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x80
};

struct UWB_MOOptionsVideoPanel_C : UMOUserWidgetOptionsVideo {
	UImage* Image_Line_UI; // 0x3a0
};

struct UAISense_Prediction : UAISense {
	TArray<FAIPredictionEvent> RegisteredEvents; // 0x80
};

struct UAnimNotify_PlayMontageNotify : UAnimNotify {
	FName NotifyName; // 0x38
};

struct UMOButtonPlus : UMOButton {
	USlateWidgetStyleAsset* CustomStyle; // 0x438
};

struct UGizmoBoxComponent : UGizmoBaseComponent {
	FVector Origin; // 0x460
	FQuat Rotation; // 0x470
	FVector Dimensions; // 0x480
	float LineThickness; // 0x48c
	bool bRemoveHiddenLines; // 0x490
	bool bEnableAxisFlip; // 0x491
};

struct UMOUserWidgetOptionsAudio : UMOUserWidgetOptionsPanel {
	UMOGameInstance* pMOGameInstance; // 0x2d0
	UMOOptionSliderWidget* pSlider_Master; // 0x2d8
	UMOOptionSliderWidget* pSlider_Music; // 0x2e0
	UMOOptionSliderWidget* pSlider_Interface; // 0x2e8
	UMOOptionSliderWidget* pSlider_VoiceMaster; // 0x2f0
	UMOCheckBoxEntry* pCheckBox_VoiceChat; // 0x2f8
	UMOCheckBoxEntry* pCheckBox_VoiceActivation; // 0x300
	UMOComboBoxStringEntry* pMOComboBox_VoipOutputDevices; // 0x308
	UMOComboBoxStringEntry* pMOComboBox_VoipInputDevices; // 0x310
	UMOCheckBoxEntry* pCheckBox_TestVoice; // 0x318
};

struct UMaterialExpressionConstant : UMaterialExpression {
	float R; // 0x40
};

struct UNiagaraPreviewAxis_InterpParamVector2D : UNiagaraPreviewAxis_InterpParamBase {
	FVector2D Min; // 0x38
	FVector2D Max; // 0x40
};

struct UMaterialExpressionCollectionParameter : UMaterialExpression {
	UMaterialParameterCollection* Collection; // 0x40
	FName ParameterName; // 0x48
	FGuid ParameterId; // 0x50
};

struct UMODataAssetMagicDefinitions : UPrimaryDataAsset {
	UMODataAssetMagic* pFallbackEffect; // 0x30
	TMap<int32_t, TSoftObjectPtr<UMODataAssetMagic>> vMagicList; // 0x38
	bool bAllEffectsArePreloaded; // 0x88
	TMap<int32_t, UMODataAssetMagic*> vMagicListLoaded; // 0x90
};

struct UWheeledVehicleMovementComponent4W : UWheeledVehicleMovementComponent {
	FVehicleEngineData EngineSetup; // 0x290
	FVehicleDifferential4WData DifferentialSetup; // 0x330
	float AckermannAccuracy; // 0x34c
	FVehicleTransmissionData TransmissionSetup; // 0x350
	FRuntimeFloatCurve SteeringCurve; // 0x380
};

struct UMaterialExpressionBlendMaterialAttributes : UMaterialExpression {
	FMaterialAttributesInput A; // 0x40
	FMaterialAttributesInput B; // 0x58
	FExpressionInput Alpha; // 0x70
	EMaterialAttributeBlend PixelAttributeBlendType; // 0x84
	EMaterialAttributeBlend VertexAttributeBlendType; // 0x85
};

struct UDistributionFloatParameterBase : UDistributionFloatConstant {
	FName ParameterName; // 0x40
	float MinInput; // 0x48
	float MaxInput; // 0x4c
	float MinOutput; // 0x50
	float MaxOutput; // 0x54
	DistributionParamMode ParamMode; // 0x58
};

struct URichTextBlockImageDecorator : URichTextBlockDecorator {
	UDataTable* ImageSet; // 0x28
};

struct UWB_MOOptionsGameplayPanel_C : UMOUserWidgetOptionsGameplay {
	UImage* Image_Line_UI; // 0x368
};

struct UMaterialExpressionLandscapePhysicalMaterialOutput : UMaterialExpressionCustomOutput {
	TArray<FPhysicalMaterialInput> Inputs; // 0x40
};

struct UMaterialExpressionSaturate : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UMaterialExpressionParticleSubUV : UMaterialExpressionTextureSample {
	char bBlend : 1; // 0x60
};

struct APartyBeaconHost : AOnlineBeaconHostObject {
	UPartyBeaconState* State; // 0x248
	bool bLogoutOnSessionTimeout; // 0x2b0
	float SessionTimeoutSecs; // 0x2b4
	float TravelSessionTimeoutSecs; // 0x2b8
};

struct UMORenameUserWidget : UMOUserWidget {
	FString sOverrideValidChars; // 0x2c8
	int32_t iNameMinLength; // 0x2d8
	int32_t iNameMaxLength; // 0x2dc
	UMOButton* pMOButton_OK; // 0x2e0
	UMOButton* pMOButton_Cancel; // 0x2e8
	UMOEditableTextBox* pMOEditableText; // 0x2f0
};

struct UDefaultLevelSequenceInstanceData : UObject {
	AActor* TransformOriginActor; // 0x30
	FTransform TransformOrigin; // 0x40
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

struct UMediaSoundComponent : USynthComponent {
	EMediaSoundChannels Channels; // 0x6c0
	bool DynamicRateAdjustment; // 0x6c4
	float RateAdjustmentFactor; // 0x6c8
	FFloatRange RateAdjustmentRange; // 0x6cc
	UMediaPlayer* MediaPlayer; // 0x6e0
};

struct ULevelCapture : UMovieSceneCapture {
	bool bAutoStartCapture; // 0x220
	FGuid PrerequisiteActorId; // 0x22c
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

struct UEnvQueryTest_Volume : UEnvQueryTest {
	UEnvQueryContext* VolumeContext; // 0x1f8
	AVolume* VolumeClass; // 0x200
	char bDoComplexVolumeTest : 1; // 0x208
};

struct UInteractiveGizmoManager : UObject {
	TArray<FActiveGizmo> ActiveGizmos; // 0x30
	TMap<FString, UInteractiveGizmoBuilder*> GizmoBuilders; // 0x58
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

struct UNiagaraPreviewAxis_InterpParamVector : UNiagaraPreviewAxis_InterpParamBase {
	FVector Min; // 0x38
	FVector Max; // 0x44
};

struct UWB_TooltipItem_C : UMOTooltip {
	UCanvasPanel* CanvasPanel_1; // 0x298
	UImage* Image_Line; // 0x2a0
	UMOTextBlock_Title_Medium_Red_02* TitleText; // 0x2a8
	UTextBlock* WeightText; // 0x2b0
	UWP_CurrencyWidget_C* WP_CurrencyWidget; // 0x2b8
};

struct UMODataAssetTattooEffect : UPrimaryDataAsset {
	UMODataAssetTattooVisuals* pTattooVisuals; // 0x30
	UMaterialInterface* pTattooEffectPreviewMaterial; // 0x38
	ETattooEffectType eTattooType; // 0x40
	FColor CharCreation_UIColor; // 0x44
};

struct UInteractiveToolManager : UObject {
	UInteractiveTool* ActiveLeftTool; // 0x30
	UInteractiveTool* ActiveRightTool; // 0x38
	TMap<FString, UInteractiveToolBuilder*> ToolBuilders; // 0x90
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

struct UMovieSceneSpawnTrack : UMovieSceneTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
	FGuid ObjectGuid; // 0x88
};

struct USoundNodeDialoguePlayer : USoundNode {
	FDialogueWaveParameter DialogueWaveParameter; // 0x48
	char bLooping : 1; // 0x68
};

struct UMovieSceneBindingOverrides : UObject {
	TArray<FMovieSceneBindingOverrideData> BindingData; // 0x28
};

struct UGizmoComponentHitTarget : UObject {
	UPrimitiveComponent* Component; // 0x30
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

struct AWaterBodyIsland : AActor {
	UWaterSplineComponent* SplineComp; // 0x228
};

struct UDatasmithStaticMeshGLTFImportData : UDatasmithStaticMeshImportData {
	FString SourceMeshName; // 0x28
};

struct UBorderSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
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

struct UAnimBoneCompressionSettings : UObject {
	TArray<UAnimBoneCompressionCodec*> Codecs; // 0x28
};

struct ABP_Login_Camera_C : AMOCineCameraActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x810
	EMOPaperdollActorType LookForPaperdollType; // 0x818
};

struct UMOAssetManager : UAssetManager {
	bool bHasLoadedPlayerDefinitions; // 0x458
	TMap<FPrimaryAssetId, UMODataAssetPlayerBaseDefinition*> PlayerBodyDefinitions; // 0x460
};

struct UMaterialExpressionSetMaterialAttributes : UMaterialExpression {
	TArray<FExpressionInput> Inputs; // 0x40
	TArray<FGuid> AttributeSetTypes; // 0x50
};

struct UNiagaraDataInterfaceAudioOscilloscope : UNiagaraDataInterface {
	USoundSubmix* Submix; // 0x38
	int32_t Resolution; // 0x40
	float ScopeInMilliseconds; // 0x44
};

struct UTransformProxy : UObject {
	bool bRotatePerObject; // 0x70
	bool bSetPivotMode; // 0x71
	FTransform SharedTransform; // 0x90
	FTransform InitialSharedTransform; // 0xc0
};

struct ULakeCollisionComponent : UPrimitiveComponent {
	UBodySetup* CachedBodySetup; // 0x440
	FVector BoxExtent; // 0x448
};

struct UAmbisonicsEncodingSettings : USoundfieldEncodingSettingsBase {
	int32_t AmbisonicsOrder; // 0x28
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

struct UInputBehaviorSet : UObject {
	TArray<FBehaviorInfo> Behaviors; // 0x28
};

struct UInAppPurchaseCallbackProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UGizmoComponentAxisSource : UObject {
	USceneComponent* Component; // 0x30
	int32_t AxisIndex; // 0x38
	bool bLocalAxes; // 0x3c
};

struct UMOItemListEntry : UMOWidgetBlueprint {
	UButton* pButton; // 0x270
	UTextBlock* pTextBlockItemName; // 0x278
	UMOCurrencyWidget* pCurrencyWidget; // 0x280
	UMOItemSlotStatic* pItemSlot; // 0x288
	UMOUserWidget* pParentWidget; // 0x290
	UMOScrollBox* pParentScrollBox; // 0x298
};

struct UParticleModuleSize_Seeded : UParticleModuleSize {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x78
};

struct UARTrackedObject : UARTrackedGeometry {
	UARCandidateObject* DetectedObject; // 0xf8
};

struct UWB_ButtonPetSkillWidget_C : UMOButtonPetSkillWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
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

struct UMaterialExpressionBumpOffset : UMaterialExpression {
	FExpressionInput Coordinate; // 0x40
	FExpressionInput Height; // 0x54
	FExpressionInput HeightRatioInput; // 0x68
	float HeightRatio; // 0x7c
	float ReferencePlane; // 0x80
	uint32_t ConstCoordinate; // 0x84
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

struct UMaterialExpressionHairColor : UMaterialExpression {
	FExpressionInput Melanin; // 0x40
	FExpressionInput Redness; // 0x54
	FExpressionInput DyeColor; // 0x68
};

struct USoundNodeMixer : USoundNode {
	TArray<float> InputVolume; // 0x48
};

struct AMOEquipmentActorQuiver : AMOEquipmentActorStaticMesh {
	bool bRefreshArrowsOnly; // 0x298
	int32_t NumVisibleArrows; // 0x29c
};

struct UMeshMergeComponent : UProceduralMeshComponent {
	UMaterialInterface* pFallbackMaterial; // 0x4d0
	TArray<UMaterialInstanceDynamic*> vCombinedMaterials; // 0x4d8
};

struct UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator_SimpleGrid {
	FAIDataProviderBoolValue PathToItem; // 0xf8
	UNavigationQueryFilter* NavigationFilter; // 0x130
	FAIDataProviderFloatValue ScanRangeMultiplier; // 0x138
};

struct UDatasmithPostProcessVolumeTemplate : UDatasmithObjectTemplate {
	FDatasmithPostProcessSettingsTemplate Settings; // 0x30
	char bEnabled : 1; // 0x70
	char bUnbound : 1; // 0x70
};

struct UMOAudioComponentPoolSubsystem : UMOWorldSubsystemBase {
	AMOAudioComponentPoolSubsystemActor* AudioComponentPoolActor; // 0x38
};

struct UMOButtonSmall : UMOButton {
	USlateWidgetStyleAsset* CustomStyle; // 0x438
};

struct UMOSkillsVeteran : UMOWidgetBlueprint {
	FString ActionListEntryLabel; // 0x260
	FText ProffessionsListEntryLabel; // 0x270
	UTextBlock* pTextBlockPointsToSpend; // 0x288
	UTextBlock* pTextBlockPointsInCrafting; // 0x290
	UTextBlock* pTextBlockPointsInActions; // 0x298
};

struct UDistributionFloatUniform : UDistributionFloat {
	float Min; // 0x38
	float Max; // 0x3c
};

struct UEditableGameplayTagQueryExpression_AllExprMatch : UEditableGameplayTagQueryExpression {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
};

struct UAnimSequenceBase : UAnimationAsset {
	TArray<FAnimNotifyEvent> Notifies; // 0x80
	float SequenceLength; // 0x90
	float RateScale; // 0x94
	FRawCurveTracks RawCurveData; // 0x98
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

struct UInterpTrackInstDirector : UInterpTrackInst {
	AActor* OldViewTarget; // 0x28
};

struct UScaleBox : UContentWidget {
	EStretch Stretch; // 0x120
	EStretchDirection StretchDirection; // 0x121
	float UserSpecifiedScale; // 0x124
	bool IgnoreInheritedScale; // 0x128
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

struct UDebugCameraControllerSettings : UDeveloperSettings {
	TArray<FDebugCameraControllerSettingsViewModeIndex> CycleViewModes; // 0x38
};

struct UProgressWidgetStyle : USlateWidgetStyleContainerBase {
	FProgressBarStyle ProgressBarStyle; // 0x30
};

struct UBlendSpace : UBlendSpaceBase {
	EBlendSpaceAxis AxisToScaleAnimation; // 0x148
};

struct ULocalLightComponent : ULightComponent {
	ELightUnits IntensityUnits; // 0x328
	float Radius; // 0x32c
	float AttenuationRadius; // 0x330
	FLightmassPointLightSettings LightmassSettings; // 0x334
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

struct USoundNodeModulatorContinuous : USoundNode {
	FModulatorContinuousParams PitchModulationParams; // 0x48
	FModulatorContinuousParams VolumeModulationParams; // 0x68
};

struct UBTDecorator_TimeLimit : UBTDecorator {
	float TimeLimit; // 0x68
};

struct UActorSequence : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x60
	FActorSequenceObjectReferenceMap ObjectReferences; // 0x68
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

struct UMOAnimNotifyFootStep : UMOAnimNotify {
	bool bLeft; // 0x38
};

struct UMOBrokerSellOrdersPanel : UMOBrokerPanel {
	UMOBrokerCurrencyWidget* pMOBrokerCurrencyWidget; // 0x2d8
	UMOButton* pMOButton_Close; // 0x2e0
	UMOItemSlotPlaceItem* pItemSlot; // 0x2e8
};

struct UMOChildActorEquipmentComponent : UChildActorComponent {
	bool bAutoActivateExtraComponents; // 0x230
	EEquipmentGroup EquipmentType; // 0x231
	FMOWeaponData WeaponData; // 0x238
	FMOShieldData ShieldData; // 0x268
	FMOBowData BowData; // 0x298
	FMOArrowData arrowData; // 0x2c0
	FMOArmorPartData ArmorData; // 0x2e8
	FMOArmorPartData PetEquipmentData; // 0x310
	ESex ArmorSex; // 0x338
	ESpecies ArmorSpecies; // 0x339
	bool bEquipmentActorNeedsUpdate; // 0x33a
	bool bArrowOnBowNeedsUpdate; // 0x33b
	bool bChildActorMeshAndTextureUseMaxDetail; // 0x33c
	bool bAutoDestroyChildActorOnInvalidData; // 0x33d
};

struct ABP_MortalOnlinePlayerController_C : AMOPlayerController {
	FPointerToUberGraphFrame UberGraphFrame; // 0x8b8
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

struct UMovieSceneSlomoSection : UMovieSceneSection {
	FMovieSceneFloatChannel FloatCurve; // 0xe8
};

struct AMOEquipmentActorPetEquipment : AMOEquipmentActor {
	USkeletalMeshComponent* PetEquipmentComponent; // 0x288
	USkeletalMeshComponent* MasterPoseComponentOverride; // 0x290
	FMOEquipmentActorPetEquipmentData PetEquipmentData; // 0x298
};

struct UMaterialExpression : UObject {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	char bIsParameterExpression : 1; // 0x38
};

struct UParticleModuleSourceMovement : UParticleModuleLocationBase {
	FRawDistributionVector SourceMovementScale; // 0x30
};

struct UMOCharacterCollisionPoolSubsystem : UMOWorldSubsystemBase {
	AMOCharacterCollisionPoolSubsystemActor* CollisionPoolActor; // 0x38
};

struct ASpiritArm_C : AMOSpiritArm {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	UChildActorComponent* BP_Orb; // 0x2e8
	USphereComponent* Sphere; // 0x2f0
	UStaticMeshComponent* StaticMesh1; // 0x2f8
	UNiagaraComponent* Niagara; // 0x300
	UStaticMeshComponent* StaticMesh; // 0x308
};

struct USafeZoneSlot : UPanelSlot {
	bool bIsTitleSafe; // 0x38
	FMargin SafeAreaScale; // 0x3c
	EHorizontalAlignment HAlign; // 0x4c
	EVerticalAlignment VAlign; // 0x4d
	FMargin Padding; // 0x50
};

struct UAIDataProvider_QueryParams : UAIDataProvider {
	FName ParamName; // 0x28
	float FloatValue; // 0x30
	int32_t IntValue; // 0x34
	bool BoolValue; // 0x38
};

struct UCheatManager : UObject {
	ADebugCameraController* DebugCameraControllerRef; // 0x28
	ADebugCameraController* DebugCameraControllerClass; // 0x30
};

struct AMOTestingDummy : AActor {
	UParticleSystem* pParticleSystem_SwingBloodTrail; // 0x220
	FString sName; // 0x228
};

struct ABP_MOCharacterAI_Creature_C : AMOCharacterAICreature {
	FPointerToUberGraphFrame UberGraphFrame; // 0xdb0
	float DeathEffectTimeline_fDissolveSkeleton_5635A14B4D106716143DBBB0A9BA9FDA; // 0xdb8
	float DeathEffectTimeline_fMeshTranslation_5635A14B4D106716143DBBB0A9BA9FDA; // 0xdbc
	float DeathEffectTimeline_fDissolveBody_5635A14B4D106716143DBBB0A9BA9FDA; // 0xdc0
	ETimelineDirection DeathEffectTimeline__Direction_5635A14B4D106716143DBBB0A9BA9FDA; // 0xdc4
	UTimelineComponent* DeathEffectTimeline; // 0xdc8
};

struct UMaterialExpressionClamp : UMaterialExpression {
	FExpressionInput Input; // 0x40
	FExpressionInput Min; // 0x54
	FExpressionInput Max; // 0x68
	EClampMode ClampMode; // 0x7c
	float MinDefault; // 0x80
	float MaxDefault; // 0x84
};

struct UMorphTarget : UObject {
	USkeletalMesh* BaseSkelMesh; // 0x28
};

struct UWindDirectionalSourceComponent : USceneComponent {
	float Strength; // 0x1f8
	float Speed; // 0x1fc
	float MinGustAmount; // 0x200
	float MaxGustAmount; // 0x204
	float Radius; // 0x208
	char bPointWind : 1; // 0x20c
};

struct USubmixEffectMultibandCompressorPreset : USoundEffectSubmixPreset {
	FSubmixEffectMultibandCompressorSettings Settings; // 0xb0
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

struct UScrollBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FScrollBoxStyle ScrollBoxStyle; // 0x30
};

struct UShowLoginUICallbackProxy : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
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

struct UModularSynthPresetBank : UObject {
	TArray<FModularSynthPresetBankEntry> Presets; // 0x28
};

struct UMovieSceneCameraShakeSourceTriggerSection : UMovieSceneSection {
	FMovieSceneCameraShakeSourceTriggerChannel Channel; // 0xe8
};

struct UAIPerceptionStimuliSourceComponent : UActorComponent {
	char bAutoRegisterAsSource : 1; // 0xb0
	TArray<UAISense*> RegisterAsSourceForSenses; // 0xb8
};

struct AMOEquipmentActorStaticMesh : AMOEquipmentActor {
	UStaticMeshComponent* StaticMeshComponent; // 0x288
	UStaticMesh* StaticMesh; // 0x290
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

struct UMaterialExpressionPanner : UMaterialExpression {
	FExpressionInput Coordinate; // 0x40
	FExpressionInput Time; // 0x54
	FExpressionInput Speed; // 0x68
	float SpeedX; // 0x7c
	float SpeedY; // 0x80
	uint32_t ConstCoordinate; // 0x84
	bool bFractionalPart; // 0x88
};

struct UInterpTrackInstColorProp : UInterpTrackInstProperty {
	FColor ResetColor; // 0x58
};

struct UPhysicalAnimationComponent : UActorComponent {
	float StrengthMultiplyer; // 0xb0
	USkeletalMeshComponent* SkeletalMeshComponent; // 0xb8
};

struct UDatasmithFBXSceneImportData : UDatasmithSceneImportData {
	bool bGenerateLightmapUVs; // 0x28
	FString TexturesDir; // 0x30
	char IntermediateSerialization; // 0x40
	bool bColorizeMaterials; // 0x41
};

struct USphereReflectionCaptureComponent : UReflectionCaptureComponent {
	float InfluenceRadius; // 0x270
	float CaptureDistanceScale; // 0x274
	UDrawSphereComponent* PreviewInfluenceRadius; // 0x278
};

struct UCharacterCompositionComponent : UActorComponent {
	bool bControlledByCompositionSubsystem; // 0xb0
	bool bPreviewEditorProxy; // 0xb1
	FCharacterCompositionPart EditorProxy; // 0xc0
	TMap<FName, FCharacterCompositionPart> Parts; // 0x210
};

struct UMovieSceneVectorTrack : UMovieScenePropertyTrack {
	int32_t NumChannelsUsed; // 0xb0
};

struct UAISenseConfig : UObject {
	FColor DebugColor; // 0x28
	float MaxAge; // 0x2c
	char bStartsEnabled : 1; // 0x30
};

struct APaperSpriteActor : AActor {
	UPaperSpriteComponent* RenderComponent; // 0x220
};

struct UEditableStaticMeshAdapter : UEditableMeshAdapter {
	UStaticMesh* StaticMesh; // 0x28
	UStaticMesh* OriginalStaticMesh; // 0x30
	int32_t StaticMeshLODIndex; // 0x38
};

struct AMOCineCameraActor : ACineCameraActor {
	EMOMainMenuCameraAssignment CameraAssignment; // 0x800
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

struct UMOQuestWidget : UMOUserWidget {
	UVerticalBox* pQuestVerticalBox; // 0x2c8
	UMOQuestEntry* cMOQuestEntry; // 0x2d0
	TArray<UMOQuestEntry*> vQuests; // 0x2d8
};

struct ULevelSequenceBurnIn : UUserWidget {
	FLevelSequencePlayerSnapshot FrameInformation; // 0x260
	ALevelSequenceActor* LevelSequenceActor; // 0x318
};

struct UMODataAssetMagic : UMODataAssetMagicShared {
	AMOMagicEffectBall* cMagicBallEffectClass; // 0x30
	UNiagaraSystem* pFingerBeam; // 0x38
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

struct UMovieSceneMaterialTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
};

struct UInteractiveToolsContext : UObject {
	UInputRouter* InputRouter; // 0x58
	UInteractiveToolManager* ToolManager; // 0x60
	UInteractiveGizmoManager* GizmoManager; // 0x68
	TSoftClassPtr<UObject> ToolManagerClass; // 0x70
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

struct UARTrackedPose : UARTrackedGeometry {
	FARPose3D TrackedPose; // 0xf8
};

struct UControlRigComponent : UPrimitiveComponent {
	UControlRig* ControlRigClass; // 0x440
	FMulticastInlineDelegate OnPostInitializeDelegate; // 0x448
	FMulticastInlineDelegate OnPreSetupDelegate; // 0x458
	FMulticastInlineDelegate OnPostSetupDelegate; // 0x468
	FMulticastInlineDelegate OnPreUpdateDelegate; // 0x478
	FMulticastInlineDelegate OnPostUpdateDelegate; // 0x488
	TArray<FControlRigComponentMappedElement> MappedElements; // 0x498
	bool bResetTransformBeforeTick; // 0x4a8
	bool bResetInitialsBeforeSetup; // 0x4a9
	bool bUpdateRigOnTick; // 0x4aa
	bool bUpdateInEditor; // 0x4ab
	bool bDrawBones; // 0x4ac
	UControlRig* ControlRig; // 0x4b0
};

struct UMOHUD : UUserWidget {
	TArray<UMOUserWidget*> vOpenWindows; // 0x260
	TArray<UMOContainer*> vContainers; // 0x270
	UCanvasPanel* pCanvasPanel; // 0x280
	FIntPoint ipCurResolution; // 0x298
	FVector2D CursorPos_OnStart; // 0x2a0
	FVector2D WidgetPos_OnMoveStart; // 0x2a8
	UMOUserWidget* pDragMOWidget; // 0x2b0
	bool bShouldHideTargetFrame; // 0x2b8
	UMOFrameLocalPlayer* pMOFrameLocalPlayer; // 0x2c0
	UMOFrameLocalPlayerMount* pMOFrameLocalPlayerMount; // 0x2c8
	UMOFrameBase* pMOFrameTarget; // 0x2d0
	UMOCrosshair* pMOCrosshair; // 0x2d8
	UMOGameMessage* pMOGameMessage; // 0x2e0
	UMOStunTimer* pMOStunTimer; // 0x2e8
	UMOPaperdoll* pPaperdoll; // 0x2f0
	UMOSimpleList* pMOSimpleList; // 0x2f8
	UMOPopupMessage* pMOPopupMessage; // 0x300
	UMOWorldMap* pWorldMap; // 0x308
	UMOMessageBox* pMessageBox; // 0x310
	UMOGameMenu* pGameMenu; // 0x318
	UMODamageVingette* pDamageVingette; // 0x320
	UMODamageDirectionIndcatorPool* pDamageDirectionIndcatorPool; // 0x328
	UMOChatGUI* pChatLog; // 0x330
	UMOSkills* pSkills; // 0x338
	UMOVendor* pVendor; // 0x340
	UMOTrade* pTrade; // 0x348
	UMOMurderCount* pMurderCount; // 0x350
	UMOActionBar* pActionBar0; // 0x358
	UMOActionBar* pActionBar1; // 0x360
	UMOActionBar* pActionBar2; // 0x368
	UMOActionBar* pActionBar3; // 0x370
	UMOUserWidgetCompassHUD* pCompassHUD; // 0x378
	UTextBlock* pAlphaBuildNumber; // 0x380
	UMODialogSystem* pDialogSystem; // 0x388
	UMOCraftingMelee* pCraftingMelee; // 0x390
	UMOCraftingShield* pCraftingShield; // 0x398
	UMOCraftingBow* pCraftingBow; // 0x3a0
	UMOCraftingArmor* pCraftingArmor; // 0x3a8
	UMOCraftingPetEquipment* pCraftingPetEquipment; // 0x3b0
	UMOExtraction* pExtraction; // 0x3b8
	UMORefining* pRefining; // 0x3c0
	UMOSkinning* pSkinning; // 0x3c8
	UMOCooking* pCooking; // 0x3d0
	UMOAlchemy* pAlchemy; // 0x3d8
	UMOHintWidget* pHintWidget; // 0x3e0
	UMOSocial* pSocial; // 0x3e8
	UMOGuildStone* pGuildStone; // 0x3f0
	UMOSpellbook* pSpellBook; // 0x3f8
	UMOPets* pPets; // 0x400
	UMOStables* pStables; // 0x408
	UMOPerformanceStatsOverlay* pPerformanceOverlay; // 0x410
	UUserWidget* cContainerClass; // 0x418
	UMOUserWidgetOptions* pMOOptions; // 0x428
	UMOButtonShortcuts* pButtonShortcuts; // 0x430
	UMOBroker* pMOBroker; // 0x438
	UMOMail* pMOMail; // 0x440
	UMOFanfare* pFanfare; // 0x448
	UMOHavenCitySelect* pHavenCitySelect; // 0x450
	UMOHavenInstanceSelect* pHavenInstanceSelect; // 0x458
	UMOTask* pMOTask; // 0x460
	UMOJournal* pMOJournal; // 0x468
	UMOBuildable* pMOBuildable; // 0x470
	UMOScribingPanel* pScribingPanel; // 0x478
	UMOFishingEquipment* pFishingEquipment; // 0x480
	bool shouldHideShortcutWidget; // 0x488
};

struct ASpectatorBeaconClient : AOnlineBeaconClient {
	FString DestSessionId; // 0x2e0
	FSpectatorReservation PendingReservation; // 0x2f0
	ESpectatorClientRequestType RequestType; // 0x368
	bool bPendingReservationSent; // 0x369
	bool bCancelReservation; // 0x36a
};

struct URiverGenerator : UWaterBodyGenerator {
	TArray<USplineMeshComponent*> SplineMeshComponents; // 0x28
};

struct UMOPets : UMOUserWidget {
	FTimerHandle MemberTimerHandle; // 0x2c8
	int32_t iCurTimerRepeats; // 0x2d0
	UTexture2D* pPetAttackIconTexture; // 0x2d8
	UTexture2D* pPetFollowIconTexture; // 0x2e0
	UTexture2D* pPetStayIconTexture; // 0x2e8
	UTexture2D* pPetOpenBagsIconTexture; // 0x2f0
	TArray<FMOPetData> vPetData; // 0x2f8
	UMOUserWidgetTabManager* pMOUserWidgetTabManager; // 0x308
	TArray<UMOUserWidgetTabButtonNew*> vTabButtons; // 0x310
	UMOUserWidgetTabButtonNew* pTabButtonNewText_All; // 0x320
	UMOUserWidgetTabButtonNew* pTabButtonNewText_Pet_1; // 0x328
	UMOUserWidgetTabButtonNew* pTabButtonNewText_Pet_2; // 0x330
	UMOUserWidgetTabButtonNew* pTabButtonNewText_Pet_3; // 0x338
	UMOUserWidgetTabButtonNew* pTabButtonNewText_Pet_4; // 0x340
	UMOUserWidgetTabButtonNew* pTabButtonNewText_Pet_5; // 0x348
	UMOUserWidgetTabButtonNew* pTabButtonNewText_Pet_6; // 0x350
	UMOUserWidgetTabButtonNew* pTabButtonNewText_Pet_7; // 0x358
	UMOPetsAll* pPanelPetsAll; // 0x360
	UMOPetsInfo* pPanelPetsInfo; // 0x368
	UMOPetListEntry* cPetListEntryClass; // 0x370
};

struct UWB_CharacterCreation_Head_C : UMOCharCreationFaceCustomization {
	FPointerToUberGraphFrame UberGraphFrame; // 0x340
	UWidgetAnimation* PasteAnimation; // 0x348
	UWidgetAnimation* ShareAnimation; // 0x350
	UImage* BG_Fill; // 0x358
	UImage* BG_NoSlider; // 0x360
	UImage* BGFill1; // 0x368
	UImage* Image_386; // 0x370
	UVerticalBox* MainList; // 0x378
	UMOButton* PasteButton; // 0x380
	UMOTextBlock_Base_Small_White_01* PasteMessage; // 0x388
	UWB_CharacterCreation_Head_PresetEntry_Horizontal_C* Preset1; // 0x390
	UWB_CharacterCreation_Head_PresetEntry_Horizontal_C* Preset2; // 0x398
	UWB_CharacterCreation_Head_PresetEntry_Horizontal_C* Preset3; // 0x3a0
	UWB_CharacterCreation_Head_PresetEntry_Horizontal_C* Preset4; // 0x3a8
	UMOButtonLarge* RandomizeButton; // 0x3b0
	UMOButtonLarge* ResetButton; // 0x3b8
	UCanvasPanel* RootCanvasPanel; // 0x3c0
	UMOButton* ShareButton; // 0x3c8
	UMOTextBlock_Base_Small_White_01* ShareMessage; // 0x3d0
	UWB_CharacterCreation_Head_3DSlider_C* Slider2D_BrowRidge; // 0x3d8
	UWB_CharacterCreation_Head_3DSlider_C* Slider2D_Cheeks; // 0x3e0
	UWB_CharacterCreation_Head_3DSlider_C* Slider2D_ChinPlacement; // 0x3e8
	UWB_CharacterCreation_Head_3DSlider_C* Slider2D_ChinShape; // 0x3f0
	UWB_CharacterCreation_Head_3DSlider_C* Slider2D_EarShape; // 0x3f8
	UWB_CharacterCreation_Head_3DSlider_C* Slider2D_EyesPlacement; // 0x400
	UWB_CharacterCreation_Head_3DSlider_C* Slider2D_EyesShape; // 0x408
	UWB_CharacterCreation_Head_3DSlider_C* Slider2D_FaceSize; // 0x410
	UWB_CharacterCreation_Head_3DSlider_C* Slider2D_FaceWidth; // 0x418
	UWB_CharacterCreation_Head_3DSlider_C* Slider2D_MouthPlacement; // 0x420
	UWB_CharacterCreation_Head_3DSlider_C* Slider2D_MouthShape; // 0x428
	UWB_CharacterCreation_Head_3DSlider_C* Slider2D_NoseRidge; // 0x430
	UWB_CharacterCreation_Head_3DSlider_C* Slider2D_NoseShape; // 0x438
	UWB_CharacterCreation_Head_3DSlider_C* Slider2D_NoseTip; // 0x440
	UWB_CharacterCreation_Head_3DSlider_C* Slider2D_NoseWidth; // 0x448
	UMOTextBlock_Base_Small_White_01* Title_Textblock; // 0x450
	FTransform LastCharacterTransform; // 0x460
	FMulticastInlineDelegate OnFaceCustomizationUIDestroyed; // 0x490
};

struct UInterpTrackInstVectorProp : UInterpTrackInstProperty {
	FVector ResetVector; // 0x58
};

struct UEnvQueryGenerator_Cone : UEnvQueryGenerator_ProjectedPoints {
	FAIDataProviderFloatValue AlignedPointsDistance; // 0x80
	FAIDataProviderFloatValue ConeDegrees; // 0xb8
	FAIDataProviderFloatValue AngleStep; // 0xf0
	FAIDataProviderFloatValue Range; // 0x128
	UEnvQueryContext* CenterActor; // 0x160
	char bIncludeContextLocation : 1; // 0x168
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

struct USoundConcurrency : UObject {
	FSoundConcurrencySettings Concurrency; // 0x28
};

struct UActorSequenceComponent : UActorComponent {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0xb0
	UActorSequence* Sequence; // 0xc8
	UActorSequencePlayer* SequencePlayer; // 0xd0
};

struct UVirtualTexturePoolConfig : UObject {
	int32_t DefaultSizeInMegabyte; // 0x28
	TArray<FVirtualTextureSpacePoolConfig> Pools; // 0x30
};

struct ULandscapeWeightmapUsage : UObject {
	ULandscapeComponent* ChannelUsage[0x4]; // 0x28
	FGuid LayerGuid; // 0x48
};

struct URig : UObject {
	TArray<FTransformBase> TransformBases; // 0x30
	TArray<FNode> Nodes; // 0x40
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

struct UMovieSceneIntegerSection : UMovieSceneSection {
	FMovieSceneIntegerChannel IntegerCurve; // 0xe8
};

struct UMaterialExpressionFrac : UMaterialExpression {
	FExpressionInput Input; // 0x40
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

struct UMOCharacterSelection : UMOUserWidget {
	UTextBlock* pTextBlockCharacterName; // 0x2c8
	UTextBlock* pTextBlockMid; // 0x2d0
	bool bHasCharacter; // 0x2d8
	UMOButton* pButtonDeleteCharacter; // 0x2e0
	UMOButton* pButtonPlay; // 0x2e8
};

struct UMOPhysicalMaterialGather : UMOPhysicalMaterial {
	FString sJournalRowToUnlock; // 0x98
	FString sGatherMisc; // 0xa8
	FString sGatherSkill; // 0xb8
	EGatherTypes eGatherType; // 0xc8
	int32_t iMin; // 0xcc
	int32_t iMax; // 0xd0
	FText sDisplayName; // 0xd8
	FText sUseString; // 0xf0
	float fHoldUseTimer; // 0x108
	UNiagaraSystem* pGatherParticles; // 0x110
	USoundCue* pGatherSound; // 0x118
};

struct UParticleModuleLocationPrimitiveSphere : UParticleModuleLocationPrimitiveBase {
	FRawDistributionFloat StartRadius; // 0xb0
};

struct UGeometryCacheCodecBase : UObject {
	TArray<int32_t> TopologyRanges; // 0x28
};

struct UConstantQNRT : UAudioSynesthesiaNRT {
	UConstantQNRTSettings* Settings; // 0x78
};

struct UMovieSceneCameraShakeSourceTriggerTrack : UMovieSceneTrack {
	TArray<UMovieSceneSection*> Sections; // 0x80
};

struct UWB_MO_CharacterDeleteComfirm_C : UMOCharacterDelete {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
	UWidgetAnimation* FadeIn; // 0x2f0
	UBackgroundBlur* MainPrompt_BlurBackground; // 0x2f8
	UMOButtonClose* MOButtonClose_336; // 0x300
	UCircularThrobber* pCircularThrobber_WaitingForResponse; // 0x308
	UTextBlock* pDeleteCharacterInfo; // 0x310
	UImage* pMiddleVertical; // 0x318
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

struct UMOCrosshair : UMOUserWidget {
	UTextBlock* pTextBlockTargetName; // 0x2c8
	UTextBlock* pTextBlockGuildTag; // 0x2d0
	UTextBlock* pTextBlockPreNameTitle; // 0x2d8
	UTextBlock* pTextBlockPostNameTitle; // 0x2e0
	UTextBlock* pTextBlockUseString; // 0x2e8
	UTextBlock* pTextBlockScreenMessage; // 0x2f0
	UImage* pImageCrosshair; // 0x2f8
	UHorizontalBox* pHorizontalBox_Criminal; // 0x300
	UImage* pImageCrosshairHover; // 0x308
	UImage* pCriminalImage; // 0x310
	TArray<FColor> vFlagColors; // 0x318
	UImage* pImageLeftActionIndicator; // 0x328
	UImage* pImageRightActionIndicator; // 0x330
	UImage* pImageOverheadActionIndicator; // 0x338
	UImage* pImageThrustActionIndicator; // 0x340
	UImage* pImageCharge; // 0x348
};

struct UBodySetupCore : UObject {
	FName BoneName; // 0x28
	EPhysicsType PhysicsType; // 0x30
	ECollisionTraceFlag CollisionTraceFlag; // 0x31
	EBodyCollisionResponse CollisionReponse; // 0x32
};

struct UEditableGameplayTagQueryExpression_AllTagsMatch : UEditableGameplayTagQueryExpression {
	FGameplayTagContainer Tags; // 0x28
};

struct USubmixEffectSubmixEQPreset : USoundEffectSubmixPreset {
	FSubmixEffectSubmixEQSettings Settings; // 0xa0
};

struct USoundfieldSubmix : USoundSubmixWithParentBase {
	FName SoundfieldEncodingFormat; // 0x40
	USoundfieldEncodingSettingsBase* EncodingSettings; // 0x48
	TArray<USoundfieldEffectBase*> SoundfieldEffectChain; // 0x50
	USoundfieldEncodingSettingsBase* EncodingSettingsClass; // 0x60
};

struct UStaticMeshSocket : UObject {
	FName SocketName; // 0x28
	FVector RelativeLocation; // 0x30
	FRotator RelativeRotation; // 0x3c
	FVector RelativeScale; // 0x48
	FString Tag; // 0x58
};

struct USynthComponentMonoWaveTable : USynthComponent {
	FMulticastInlineDelegate OnTableAltered; // 0x6c0
	FMulticastInlineDelegate OnNumTablesChanged; // 0x6d0
	UMonoWaveTableSynthPreset* CurrentPreset; // 0x6e0
};

struct UParticleModuleLocationPrimitiveCylinder_Seeded : UParticleModuleLocationPrimitiveCylinder {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x120
};

struct UParticleModuleVectorFieldScale : UParticleModuleVectorFieldBase {
	UDistributionFloat* VectorFieldScale; // 0x30
	FRawDistributionFloat VectorFieldScaleRaw; // 0x38
};

struct USoundNodeDoppler : USoundNode {
	float DopplerIntensity; // 0x48
	bool bUseSmoothing; // 0x4c
	float SmoothingInterpSpeed; // 0x50
};

struct UMovieSceneParticleParameterTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x80
};

struct AWaterBody : AActor {
	UPhysicalMaterial* PhysicalMaterial; // 0x230
	float TargetWaveMaskDepth; // 0x238
	float MaxWaveHeightOffset; // 0x23c
	int32_t WaterBodyIndex; // 0x240
	bool bFillCollisionUnderWaterBodiesForNavmesh; // 0x244
	FUnderwaterPostProcessSettings UnderwaterPostProcessSettings; // 0x250
	EWaterBodyType WaterBodyType; // 0x7c0
	FWaterCurveSettings CurveSettings; // 0x7c8
	UMaterialInterface* WaterMaterial; // 0x7e8
	UMaterialInterface* UnderwaterPostProcessMaterial; // 0x7f0
	bool bAffectsLandscape; // 0x7f8
	bool bGenerateCollisions; // 0x7f9
	bool bOverrideWaterMesh; // 0x7fa
	UStaticMesh* WaterMeshOverride; // 0x800
	int32_t OverlapMaterialPriority; // 0x808
	FName CollisionProfileName; // 0x80c
	UWaterSplineComponent* SplineComp; // 0x818
	UWaterSplineMetadata* WaterSplineMetadata; // 0x820
	UMaterialInstanceDynamic* WaterMID; // 0x828
	UMaterialInstanceDynamic* UnderwaterPostProcessMID; // 0x830
	TArray<LazyObjectProperty> Islands; // 0x838
	TArray<LazyObjectProperty> ExclusionVolumes; // 0x848
	TWeakObjectPtr<ALandscapeProxy> Landscape; // 0x858
	FPostProcessSettings CurrentPostProcessSettings; // 0x860
	bool bCanAffectNavigation; // 0xdb0
	UNavAreaBase* WaterNavAreaClass; // 0xdb8
	UWaterWavesBase* WaterWaves; // 0xdc0
	bool bHasWaveSpectrumSettings; // 0xdc8
	bool bHasTerrainCarvingSettingsSettings; // 0xdc9
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

struct UMotionControllerComponent : UPrimitiveComponent {
	int32_t PlayerIndex; // 0x440
	EControllerHand Hand; // 0x444
	FName MotionSource; // 0x448
	char bDisableLowLatencyUpdate : 1; // 0x450
	ETrackingStatus CurrentTrackingStatus; // 0x454
	bool bDisplayDeviceModel; // 0x455
	FName DisplayModelSource; // 0x458
	UStaticMesh* CustomDisplayMesh; // 0x460
	TArray<UMaterialInterface*> DisplayMeshMaterialOverrides; // 0x468
	UPrimitiveComponent* DisplayComponent; // 0x4e0
};

struct UMOButtonAttributeToggle : UMOWidgetBlueprint {
	TArray<UTexture2D*> vToggleIcons; // 0x260
	TArray<FText> vToggleTooltips; // 0x270
	UButton* pButton; // 0x280
	UImage* pImageIcon; // 0x288
};

struct UMOEquipmentComponent : UActorComponent {
	bool bHiddenInGame; // 0xb0
	bool bDisableExtraComponents; // 0xb1
	bool bIsShowingExtraComponents; // 0xb2
	TArray<UAudioComponent*> vExtraAudioComponents; // 0xb8
	TArray<UNiagaraComponent*> vExtraNiagaraComponents; // 0xc8
	TArray<UPointLightComponent*> vExtraPointLightComponents; // 0xd8
};

struct UInterpTrackFloatBase : UInterpTrack {
	FInterpCurveFloat FloatTrack; // 0x70
	float CurveTension; // 0x88
};

struct UAB_CH_Player_Male_Body_PostProcess_C : UMOAnimationInstancePostProcess {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics; // 0x300
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x550
	FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x570
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x688
};

struct UNiagaraDataInterfaceAudioSpectrum : UNiagaraDataInterfaceAudioSubmix {
	int32_t Resolution; // 0x40
	float MinimumFrequency; // 0x44
	float MaximumFrequency; // 0x48
	float NoiseFloorDb; // 0x4c
};

struct UTextureRenderTarget : UTexture {
	float TargetGamma; // 0xd8
};

struct UWB_MOOptionsChatPanel_C : UMOUserWidgetOptionsChat {
	UImage* Image_Line_UI; // 0x388
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

struct UMaterialExpressionMaterialProxyReplace : UMaterialExpression {
	FExpressionInput RealTime; // 0x40
	FExpressionInput MaterialProxy; // 0x54
};

struct UAssetMappingTable : UObject {
	TArray<FAssetMapping> MappedAssets; // 0x28
};

struct UMaterialExpressionShadingPathSwitch : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput Inputs[0x3]; // 0x54
};

struct UMOBrokerCategoryEntry : UMOUserWidget {
	FMulticastInlineDelegate BrokerCategoryDelegate; // 0x2c8
	UMOButton* pMOButton; // 0x2d8
	UTextBlock* pMOText; // 0x2e0
	UVerticalBox* pVerticalBox; // 0x2e8
	bool bIsChecked; // 0x2f0
	int32_t iCategoryID; // 0x2f4
	int32_t iParentID; // 0x2f8
};

struct USoundNodeLooping : USoundNode {
	int32_t LoopCount; // 0x48
	char bLoopIndefinitely : 1; // 0x4c
};

struct USpectatorPawnMovement : UFloatingPawnMovement {
	char bIgnoreTimeDilation : 1; // 0x150
};

struct UTimelineComponent : UActorComponent {
	FTimeline TheTimeline; // 0xb0
	char bIgnoreTimeDilation : 1; // 0x148
};

struct AProceduralFoliageVolume : AVolume {
	UProceduralFoliageComponent* ProceduralComponent; // 0x258
};

struct UARTrackedImage : UARTrackedGeometry {
	UARCandidateImage* DetectedImage; // 0xf8
	FVector2D EstimatedSize; // 0x100
};

struct UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints {
	FAIDataProviderFloatValue GridSize; // 0x80
	FAIDataProviderFloatValue SpaceBetween; // 0xb8
	UEnvQueryContext* GenerateAround; // 0xf0
};

struct AMOAvatarStaticMeshBuildableKeep : AMOAvatarStaticMeshBuildableHouse {
	UStaticMeshComponent* pGuildStoneComponent; // 0x338
};

struct UWB_MO_LoginScreen_C : UMOLoginScreen {
	FPointerToUberGraphFrame UberGraphFrame; // 0x370
	UWidgetAnimation* FadeIn; // 0x378
	UWidgetAnimation* FadeInNews; // 0x380
	UImage* BG; // 0x388
	UImage* MO_Logo_Image; // 0x390
	UMOButtonLarge* MOButtonLarge-CloseApplication; // 0x398
	UButton* pButtonOpen_Discord; // 0x3a0
	UButton* pButtonOpen_Forums; // 0x3a8
	UButton* pButtonOpen_Twitter; // 0x3b0
	UImage* pMiddleVertical; // 0x3b8
	UMOBorderHeader* pMOLoginServerList; // 0x3c0
	UScrollBox* ServerScrollBox; // 0x3c8
	UWB_LoginError_C* WB_LoginError; // 0x3d0
	UWB_MO_LoginScreen_ServerEntry_C* WB_MO_LoginScreen_ServerEntry; // 0x3d8
	UBP_SaveGame_C* SaveGameRef; // 0x3e0
	UWB_MO_LoginScreen_C* BP_MO_LoginScreen; // 0x3e8
	UObject* LoginOptions; // 0x3f0
	bool OptionsIsNotKaboom; // 0x3f8
	int32_t NewVar_3; // 0x3fc
};

struct ULiveLinkTimeSynchronizationSource : UTimeSynchronizationSource {
	FLiveLinkSubjectName SubjectName; // 0x30
};

struct USplineChainComponent : UChainComponent {
	FRuntimeFloatCurve SplineFollowWeight; // 0x5e8
	USplineComponent* SplineComponent; // 0x670
};

struct AAmbientSound : AActor {
	UAudioComponent* AudioComponent; // 0x220
};

struct USlateBrushAsset : UObject {
	FSlateBrush Brush; // 0x28
};

struct UAB_CH_Player_Female_Body_PostProcess_C : UMOAnimationInstancePostProcess {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x2f8
	FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x318
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x430
	FAnimNode_KavajSoftbody AnimGraphNode_KavajSoftbody; // 0x450
	FKavajSoftBodyDefinitions BreastDefinitions; // 0x630
	FKavajSoftBodyParameters BreastParameters; // 0x670
};

struct UOceanGenerator : UWaterBodyGenerator {
	TArray<UOceanBoxCollisionComponent*> CollisionBoxes; // 0x28
	TArray<UOceanCollisionComponent*> CollisionHullSets; // 0x38
};

struct UTestMovieSceneSequence : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x60
};

struct UBTTask_WaitBlackboardTime : UBTTask_Wait {
	FBlackboardKeySelector BlackboardKey; // 0x78
};

struct APaperGroupedSpriteActor : AActor {
	UPaperGroupedSpriteComponent* RenderComponent; // 0x220
};

struct UWB_ItemSlotPaperdoll_C : UMOItemSlotPaperdoll {
	FPointerToUberGraphFrame UberGraphFrame; // 0x348
	UWidgetAnimation* DestroyItemAnimation; // 0x350
	UMaterialInstanceDynamic* ItemMaterial; // 0x358
	UWB_SplitStack_C* SplitStackRef; // 0x360
	bool altKeyDown; // 0x368
	FSlateBrush pDefaultBrush; // 0x370
	UTexture2D* pOverrideFrameTexture; // 0x3f8
	bool bInactiveInAlpha; // 0x400
};

struct UWidgetComponent : UMeshComponent {
	EWidgetSpace Space; // 0x468
	EWidgetTimingPolicy TimingPolicy; // 0x469
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

struct UMOTaskPanel : UMOUserWidget {
	UMOTask* pTask; // 0x2c8
};

struct UMaterialParameterCollection : UObject {
	FGuid StateId; // 0x28
	TArray<FCollectionScalarParameter> ScalarParameters; // 0x38
	TArray<FCollectionVectorParameter> VectorParameters; // 0x48
};

struct UInterpTrackFloatProp : UInterpTrackFloatBase {
	FName PropertyName; // 0x90
};

struct UDeviceProfileManager : UObject {
	TArray<UObject*> Profiles; // 0x28
};

struct UVirtualTextureBuilder : UObject {
	UVirtualTexture2D* Texture; // 0x28
	uint64_t BuildHash; // 0x30
};

struct UBlackboardData : UDataAsset {
	UBlackboardData* Parent; // 0x30
	TArray<FBlackboardEntry> Keys; // 0x38
	char bHasSynchronizedKeys : 1; // 0x48
};

struct UMyPluginObject : UObject {
	FMyPluginStruct MyStruct; // 0x28
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

struct UGerstnerWaterWaveGeneratorSimple : UGerstnerWaterWaveGeneratorBase {
	int32_t NumWaves; // 0x28
	int32_t Seed; // 0x2c
	float Randomness; // 0x30
	float MinWavelength; // 0x34
	float MaxWavelength; // 0x38
	float WavelengthFalloff; // 0x3c
	float MinAmplitude; // 0x40
	float MaxAmplitude; // 0x44
	float AmplitudeFalloff; // 0x48
	float WindAngleDeg; // 0x4c
	float DirectionAngularSpreadDeg; // 0x50
	float SmallWaveSteepness; // 0x54
	float LargeWaveSteepness; // 0x58
	float SteepnessFalloff; // 0x5c
};

struct UMOCurrencyWidget : UUserWidget {
	UTextBlock* pTextBlock_Cuprum; // 0x260
	UTextBlock* pTextBlock_Silver; // 0x268
	UTextBlock* pTextBlock_Gold; // 0x270
	int64_t iCurCuprum; // 0x278
};

struct URadialIntMask : UFieldNodeInt {
	float Radius; // 0xb0
	FVector Position; // 0xb4
	int32_t InteriorValue; // 0xc0
	int32_t ExteriorValue; // 0xc4
	ESetMaskConditionType SetMaskCondition; // 0xc8
};

struct UMOCombatSystemMelee : UMOCombatSystem {
	FMOCombatSystemMeleeDragInput DragInput; // 0x88
	TArray<UPrimitiveComponent*> vTraceIgnoreComponents; // 0x1a8
};

struct USteamNetConnection : UIpConnection {
	bool bIsPassthrough; // 0x1b90
};

struct AMOCharacterGM : AMOCharacterPlayer {
	int32_t iColor; // 0xcf0
	USoundCue* pGenericSoundCue; // 0xcf8
	UMOGMHUD* cGMOHUD; // 0xd00
	UMOGMHUD* pGMHUD; // 0xd08
};

struct UCompositeDataTable : UDataTable {
	TArray<UDataTable*> ParentTables; // 0xb0
	TArray<UDataTable*> OldParentTables; // 0xc0
};

struct UMOScribingPanel : UMOUserWidget {
	UMOButton* pButton_StartScribing; // 0x2c8
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_BookSlot; // 0x2d0
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_ScribeSlot; // 0x2d8
};

struct UInterpTrackInstToggle : UInterpTrackInst {
	ETrackToggleAction Action; // 0x28
	float LastUpdatePosition; // 0x2c
	char bSavedActiveState : 1; // 0x30
};

struct ATextRenderActor : AActor {
	UTextRenderComponent* TextRender; // 0x220
};

struct UMOChatColorSelectionEntry : UMOOptionsEntry {
	UButton* pMOButton; // 0x318
	UMOUserWidgetOptionsChat* pOptionsChat; // 0x320
	UImage* pImage; // 0x328
	FColor currentColor; // 0x330
};

struct UMOGameMenu : UMOUserWidget {
	UMOButtonMedium* pOptionsButton; // 0x2c8
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

struct UNiagaraDataInterfaceWater : UNiagaraDataInterface {
	AWaterBody* SourceBody; // 0x38
};

struct UMaterialExpressionShadowReplace : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput Shadow; // 0x54
};

struct UBP_MODragDropOperationSkill_C : UMODragDropOperationSkill {
	UWB_ItemSlotActionbar_C* ActionSlotRef; // 0x98
};

struct UParticleModuleMeshMaterial : UParticleModuleMaterialBase {
	TArray<UMaterialInterface*> MeshMaterials; // 0x30
};

struct UWB_MOCheckBoxEntryLanguage_C : UMOCheckBoxEntryLanguage {
	FPointerToUberGraphFrame UberGraphFrame; // 0x348
	UMOButtonMedium* MOButtonMedium_HelpOut; // 0x350
	UTextBlock* pText_Pct; // 0x358
};

struct UMOPopupMessage : UMOUserWidget {
	UTextBlock* pCaptionText; // 0x2c8
	UTextBlock* pBodyText; // 0x2d0
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

struct UMOUserWidgetOptionsChat : UMOUserWidgetOptionsPanel {
	UMOColorPicker* pMOColorPicker; // 0x2d0
	UMOCheckBoxEntry* pTempCheckBoxEntry_DisableChat; // 0x2d8
	TArray<UMOCheckBoxEntry*> vCheckBoxEntries; // 0x2e0
	UMOCheckBoxEntry* pCheckBoxEntry_PopUp_Local; // 0x2f0
	UMOCheckBoxEntry* pCheckBoxEntry_PopUp_Whisper; // 0x2f8
	UMOCheckBoxEntry* pCheckBoxEntry_PopUp_Yell; // 0x300
	UMOCheckBoxEntry* pCheckBoxEntry_PopUp_Guild; // 0x308
	UMOCheckBoxEntry* pCheckBoxEntry_PopUp_Skill; // 0x310
	UMOCheckBoxEntry* pCheckBoxEntry_PopUp_Combat; // 0x318
	UMOCheckBoxEntry* pCheckBoxEntry_PopUp_Game; // 0x320
	UMOCheckBoxEntry* pCheckBoxEntry_PopUp_Server; // 0x328
	int32_t iLastPressedEntryIndex_Color; // 0x330
	TArray<UMOChatColorSelectionEntry*> vColorEntries; // 0x338
	UMOChatColorSelectionEntry* pColorEntry_Local; // 0x348
	UMOChatColorSelectionEntry* pColorEntry_Whisper; // 0x350
	UMOChatColorSelectionEntry* pColorEntry_Yell; // 0x358
	UMOChatColorSelectionEntry* pColorEntry_Guild; // 0x360
	UMOChatColorSelectionEntry* pColorEntry_Skill; // 0x368
	UMOChatColorSelectionEntry* pColorEntry_Combat; // 0x370
	UMOChatColorSelectionEntry* pColorEntry_Game; // 0x378
	UMOChatColorSelectionEntry* pColorEntry_Server; // 0x380
};

struct AMOEquipmentActorArmor : AMOEquipmentActor {
	USkeletalMeshComponent* ArmorComponent; // 0x288
	USkeletalMeshComponent* MasterPoseComponentOverride; // 0x290
	FMOEquipmentActorArmorData ArmorData; // 0x298
};

struct UMODamageDirectionIndcatorPool : UMOUserWidget {
	TArray<UMODamageDirectionIndcator*> vDamageIndicators; // 0x2c8
	AMOPlayerController* pMOPlayerController; // 0x2d8
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

struct AVectorFieldVolume : AActor {
	UVectorFieldComponent* VectorFieldComponent; // 0x220
};

struct UWB_MOOptionsKeybindsPanel_C : UMOUserWidgetOptionsKeybinds {
	FPointerToUberGraphFrame UberGraphFrame; // 0x358
	UImage* BACKGROUND; // 0x360
	UCanvasPanel* CanvasPanel-Keybindings; // 0x368
	UWB_TabManager_C* WB_TabManager; // 0x370
};

struct UMOBrokerPetListEntry : UMOPetListEntry {
	UMOCurrencyWidget* pMOCurrencyWidget; // 0x300
	UTextBlock* pTextBlockCityName; // 0x308
	UTextBlock* pTextBlockPlayerName; // 0x310
	UTextBlock* pTextBlockQuantity; // 0x318
	UTextBlock* pTextBlockDays; // 0x320
	UTextBlock* pMOBrokerButton_Text; // 0x328
	UImage* pImage_SelectedBG; // 0x330
	UImage* pImage_HoveredBG; // 0x338
	UMOButton* pMOButton_BrokerEntry; // 0x340
	TArray<FString> vBaggedItemJsonArray; // 0x348
	int32_t iBagSize; // 0x358
	uint64_t iCuprumCost; // 0x360
	int32_t iCurPanelState; // 0x368
	bool bSelectionState; // 0x36c
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

struct AControlRigControlActor : AActor {
	AActor* ActorToTrack; // 0x220
	UControlRig* ControlRigClass; // 0x228
	bool bRefreshOnTick; // 0x230
	bool bIsSelectable; // 0x231
	UMaterialInterface* MaterialOverride; // 0x238
	FString ColorParameter; // 0x240
	bool bCastShadows; // 0x250
	USceneComponent* ActorRootComponent; // 0x258
	UControlRig* ControlRig; // 0x260
	TArray<FName> ControlNames; // 0x268
	TArray<FTransform> GizmoTransforms; // 0x278
	TArray<UStaticMeshComponent*> Components; // 0x288
	TArray<UMaterialInstanceDynamic*> Materials; // 0x298
	FName ColorParameterName; // 0x2a8
};

struct UParticleSystemReplay : UObject {
	int32_t ClipIDNumber; // 0x28
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

struct UNavigationInvokerComponent : UActorComponent {
	float TileGenerationRadius; // 0xb0
	float TileRemovalRadius; // 0xb4
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

struct UShadowMapTexture2D : UTexture2D {
	EShadowMapFlags ShadowmapFlags; // 0x100
};

struct ALuminAROrigin : AAROriginActor {
	UMRMeshComponent* MRMeshComponent; // 0x220
	UMaterialInterface* PlaneSurfaceMaterial; // 0x228
	UMaterialInterface* WireframeMaterial; // 0x230
};

struct ULiveLinkCurveRemapSettings : ULiveLinkSourceSettings {
	FLiveLinkCurveConversionSettings CurveConversionSettings; // 0xa0
};

struct UMOTask : UMOUserWidget {
	UMOTaskItemListEntry* cTaskItemListEntryClass; // 0x2c8
	TArray<UMOUserWidgetTabButtonNew*> vTabButtons; // 0x2d0
	UMOUserWidgetTabButtonNew* pMOTabButton_AcceptTask; // 0x2e0
	UMOUserWidgetTabButtonNew* pMOTabButton_DeliverItems; // 0x2e8
	TArray<UMOTaskPanel*> vPanels; // 0x2f0
	UMOTaskAcceptPanel* pMOTaskAcceptPanel; // 0x300
	UMOTaskDeliveryPanel* pMOTaskDeliveryPanel; // 0x308
	AMOCharacterAIGeneratedTaskVendor* pTaskVendorCharacter; // 0x310
	bool bCanAcceptTask; // 0x318
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

struct UMODataAssetAnimationRandomSet : UPrimaryDataAsset {
	FRandomPlayerSequenceEntry DefaultSequence; // 0x30
	float MinimumPlayTimeBeforeRandomizing; // 0x80
	float MaximumPlayTimeBeforeRandomizing; // 0x84
	TArray<FMORandomPlayerSequenceEntry> Sequences; // 0x88
};

struct UBP_MO_UnsavedChanges_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UMOButtonLarge* pMOButtonUnsavedChanges_No; // 0x268
	UMOButtonLarge* pMOButtonUnsavedChanges_Yes; // 0x270
	UObject* NewVar_1; // 0x278
	UUserWidget* NewVar_2; // 0x280
	UObject* WP_LoginOptions; // 0x288
};

struct AARSkyLight : ASkyLight {
	UAREnvironmentCaptureProbe* CaptureProbe; // 0x230
};

struct UInputAxisDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputAxisDelegateBinding> InputAxisDelegateBindings; // 0x28
};

struct UChaosSolverSettings : UDeveloperSettings {
	FSoftClassPath DefaultChaosSolverActorClass; // 0x40
};

struct UMovieSceneSequenceTickManager : UObject {
	TArray<AActor*> SequenceActors; // 0x28
	UMovieSceneEntitySystemLinker* Linker; // 0x38
};

struct UEndTurnCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UNiagaraDataInterfaceArrayBool : UNiagaraDataInterfaceArray {
	TArray<bool> BoolData; // 0x50
};

struct UMOEOSSubsystem : UEngineSubsystem {
	FMulticastInlineDelegate OnErrorThrown; // 0x38
};

struct UMaterialExpressionRound : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UEnvQueryNode : UObject {
	int32_t VerNum; // 0x28
};

struct UEnvQueryGenerator : UEnvQueryNode {
	FString OptionName; // 0x30
	UEnvQueryItemType* ItemType; // 0x40
	char bAutoSortTests : 1; // 0x48
};

struct UMOButtonLarge : UMOButton {
	USlateWidgetStyleAsset* CustomStyle; // 0x438
};

struct UMOCraftingListEntry : UMOWidgetBlueprint {
	UTextBlock* pTextBlockCraftingName; // 0x260
	UTextBlock* pTextBlockCraftingSub; // 0x268
	float fDepthOffset; // 0x270
	UMOSkillsTree* pSkillTreeParent; // 0x288
	UMOCraftingListEntry* pParent; // 0x290
	UMOCrafting* pCraftingParent; // 0x298
	TArray<UMOCraftingListEntry*> vChildren; // 0x2a0
};

struct UNiagaraEventReceiverEmitterAction_SpawnParticles : UNiagaraEventReceiverEmitterAction {
	uint32_t NumParticles; // 0x28
};

struct UMOSaveDataInstance : UObject {
	FMOSaveData sData; // 0x28
	FString sSaveDataSlotName; // 0x150
	int32_t iSaveDataUserIndex; // 0x160
};

struct ULiveLinkComponentController : UActorComponent {
	FLiveLinkSubjectRepresentation SubjectRepresentation; // 0xb0
	TMap<ULiveLinkRole*, ULiveLinkControllerBase*> ControllerMap; // 0xc0
	bool bUpdateInEditor; // 0x110
	FMulticastInlineDelegate OnLiveLinkUpdated; // 0x118
	FComponentReference ComponentToControl; // 0x128
	bool bDisableEvaluateLiveLinkWhenSpawnable; // 0x150
	bool bEvaluateLiveLink; // 0x151
};

struct USlateSettings : UObject {
	bool bExplicitCanvasChildZOrder; // 0x28
};

struct UMovieSceneControlRigParameterSection : UMovieSceneParameterSection {
	UControlRig* ControlRig; // 0x148
	TArray<bool> ControlsMask; // 0x150
	FMovieSceneTransformMask TransformMask; // 0x160
	bool bAdditive; // 0x164
	bool bApplyBoneFilter; // 0x165
	FInputBlendPose BoneFilter; // 0x168
	FMovieSceneFloatChannel Weight; // 0x178
	TMap<FName, FChannelMapInfo> ControlChannelMap; // 0x218
	TArray<FEnumParameterNameAndCurve> EnumParameterNamesAndCurves; // 0x268
	TArray<FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves; // 0x278
};

struct UMOJournalNoteEntry : UMOUserWidget {
	FMOJournalNoteSaveData sNoteSaveData; // 0x2f8
	UImage* pSelectedBG; // 0x328
	UImage* pIcon; // 0x330
	UTextBlock* pTitleText; // 0x338
	UMOButton* pMOButton; // 0x340
	UMOButton* pMOButton_Remove; // 0x348
	UMOButton* pMOButton_Rename; // 0x350
};

struct UInterpTrackVisibility : UInterpTrack {
	TArray<FVisibilityTrackKey> VisibilityTrack; // 0x70
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	char bFireEventsWhenJumpingForwards : 1; // 0x80
};

struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	FExpressionInput Base; // 0x40
	FExpressionInput Layer; // 0x54
	FName ParameterName; // 0x68
	float PreviewWeight; // 0x70
	FVector ConstBase; // 0x74
	FGuid ExpressionGUID; // 0x80
};

struct UBP_MODragDropOperationSpell_C : UMODragDropOperationSpell {
	UWB_ItemSlotActionbar_C* ActionSlotRef; // 0x98
};

struct UWB_CharacterCreationNew_C : UMOCharacterCreationNew {
	FPointerToUberGraphFrame UberGraphFrame; // 0x648
	UWidgetAnimation* FadeIn; // 0x650
	UImage* PanelTextBackground; // 0x658
	UMOButton* pMOButton_Camera_CloseUp; // 0x660
	UMOButton* pMOButton_Camera_ZoomedOut; // 0x668
};

struct ASceneCapture : AActor {
	UStaticMeshComponent* MeshComp; // 0x220
	USceneComponent* SceneComponent; // 0x228
};

struct UMaterialExpressionReflectionCapturePassSwitch : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput Reflection; // 0x54
};

struct UBasicOverlays : UOverlays {
	TArray<FOverlayItem> Overlays; // 0x28
};

struct UMovieSceneAudioTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> AudioSections; // 0x80
};

struct UARGeoAnchorComponent : UARComponent {
	FARGeoAnchorUpdatePayload ReplicatedPayload; // 0x280
};

struct UMovieSceneTrackInstanceSystem : UMovieSceneEntitySystem {
	UMovieSceneTrackInstanceInstantiator* Instantiator; // 0x40
};

struct UBTCompositeNode : UBTNode {
	TArray<FBTCompositeChild> Children; // 0x58
	TArray<UBTService*> Services; // 0x68
	char bApplyDecoratorScope : 1; // 0x88
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

struct UMaterialExpressionCosine : UMaterialExpression {
	FExpressionInput Input; // 0x40
	float Period; // 0x54
};

struct UMaterialExpressionDistanceToNearestSurface : UMaterialExpression {
	FExpressionInput Position; // 0x40
};

struct ULiveLinkInstance : UAnimInstance {
	ULiveLinkRetargetAsset* CurrentRetargetAsset; // 0x2b8
};

struct UMaterialExpressionShadingModel : UMaterialExpression {
	EMaterialShadingModel ShadingModel; // 0x40
};

struct UBTTask_BlackboardBase : UBTTaskNode {
	FBlackboardKeySelector BlackboardKey; // 0x70
};

struct UAB_Creature_Lying_QuickFix_C : UMOAnimationInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x530
	FAnimNode_Root AnimGraphNode_Root; // 0x538
	FMOAnimNode_RandomPlayer MOAnimGraphNode_RandomPlayer; // 0x568
	FAnimNode_Slot AnimGraphNode_Slot; // 0x688
};

struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	ETerrainCoordMappingType MappingType; // 0x40
	ELandscapeCustomizedCoordType CustomUVType; // 0x41
	float MappingScale; // 0x44
	float MappingRotation; // 0x48
	float MappingPanU; // 0x4c
	float MappingPanV; // 0x50
};

struct UAvfMediaSettings : UObject {
	bool NativeAudioOut; // 0x28
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

struct UMOCarouselSelectValue : UMOUserWidget {
	FText LabelText; // 0x2c8
	FText InitTooltipText; // 0x2e0
	int32_t iValueIncrement; // 0x2f8
	int32_t iMinValue; // 0x2fc
	int32_t iMaxValue; // 0x300
	int32_t iCurrentValue; // 0x304
	UMOButton* pMOButton_Forward; // 0x318
	UMOButton* pMOButton_Back; // 0x320
	UTextBlock* pLabelText; // 0x328
	UTextBlock* pValueText; // 0x330
	int32_t iEntryIndex; // 0x338
	UMOCharCreationAttributesPanel* pAttributePanel; // 0x340
	bool bCannotLoop; // 0x348
};

struct UMODataAssetEtherCombat : UPrimaryDataAsset {
	UMODataAssetEtherCombat* FirstPersonOverride; // 0x30
	UAnimMontage* AttackMontage; // 0x38
	UAnimSequenceBase* AttackBeginAnimation; // 0x40
	UAnimSequenceBase* AttackCancelAnimation; // 0x48
	AMOSpiritArm* cSpiritArmClass; // 0x50
};

struct UMOChatGUI : UMOUserWidget {
	bool bIsResizing; // 0x2c8
	bool bIsMoving; // 0x2c9
	UUserWidget* ChatMessage; // 0x2d0
	UUserWidget* ChannelTab; // 0x2d8
	UEditableTextBox* pChatBox; // 0x318
	UButton* pSendButton; // 0x320
	UButton* pChannelButton; // 0x328
	UScrollBox* pChatLog; // 0x330
	UTextBlock* pChannelText; // 0x338
	UHorizontalBox* pHorizontalBox_ChannelTabs; // 0x340
	FVector2D OriginalChatLogSize; // 0x358
	FVector2D CursorPos_OnStart; // 0x360
	FVector2D Size_OnResizingStart; // 0x368
	FVector2D ChatPos_OnMoveStart; // 0x370
	FIntPoint ipCurResolution; // 0x378
	UHorizontalBox* pHorizontalBox_Scale; // 0x380
	UMOButton* pMOButton_Resize; // 0x388
};

struct UParticleModuleVelocityCone : UParticleModuleVelocityBase {
	FRawDistributionFloat Angle; // 0x38
	FRawDistributionFloat Velocity; // 0x68
	FVector Direction; // 0x98
};

struct UPaperFlipbook : UObject {
	float FramesPerSecond; // 0x28
	TArray<FPaperFlipbookKeyFrame> KeyFrames; // 0x30
	UMaterialInterface* DefaultMaterial; // 0x40
	EFlipbookCollisionMode CollisionSource; // 0x48
};

struct UMOVendor : UMOUserWidget {
	UMOButtonMedium* pMOButton_Accept; // 0x2c8
	UTextBlock* pTextBlock_TotalCost; // 0x2d0
	UMOScrollBox* pMOScrollBox_ForSale; // 0x2d8
	UMOScrollBox* pMOScrollBox_Buy; // 0x2e0
	UMOScrollBoxPlaceItems* pMOScrollBoxPlaceItems_Sell; // 0x2e8
	UVerticalBox* pVerticalBox_Wants; // 0x2f0
	UGridPanel* pGridPanel_Wants; // 0x2f8
	UMOEditableTextBox* pMOEditableTextBox; // 0x300
	UMOItemListEntry* cVendorListEntryClass; // 0x308
	UMOItemSlotStatic* cStaticSlotEntryClass; // 0x310
	AMOCharacterAIGeneratedVendor* pVendorCharacter; // 0x338
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

struct UMOJournalEntriesPanel : UMOJournalPanel {
	UMOScrollBox* pMOScrollBox_GroupEntries; // 0x2d0
	UMOJournalEntry* pLastClickedEntry; // 0x2d8
	UCanvasPanel* pCanvasPanel; // 0x2e0
	UImage* pBanner; // 0x2e8
	UTextBlock* pTitleText; // 0x2f0
	UMOEditableTextBox* pMOEditableTextBox_Search; // 0x2f8
	UMOMultiLineEditableTextBox* pEditableTextBox; // 0x300
	UMOJournalEntry* cMOJournalEntry; // 0x308
	UMOJournalGroupEntry* cMOJournalGroupEntry; // 0x310
	TMap<FString, UMOJournalEntry*> vJournalEntryMap; // 0x318
	TMap<FString, UMOJournalGroupEntry*> vJournalGroupMap; // 0x368
};

struct ULocalPlayer : UPlayer {
	UGameViewportClient* ViewportClient; // 0x70
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x94
	APlayerController* PendingLevelPlayerControllerClass; // 0x98
	char bSentSplitJoin : 1; // 0xa0
	int32_t ControllerId; // 0xb8
};

struct UNavigationDataChunk : UObject {
	FName NavigationDataName; // 0x28
};

struct UInAppPurchaseCallbackProxy2 : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct USourceEffectRingModulationPreset : USoundEffectSourcePreset {
	FSourceEffectRingModulationSettings Settings; // 0xb0
};

struct UMOMusicSubsystem : UMOWorldSubsystemBase {
	FMulticastInlineDelegate OnCurrentSongStoppedOrFinished; // 0x40
	UAudioComponent* pAudioComponentA; // 0x60
	UAudioComponent* pAudioComponentB; // 0x68
	USoundCue* pNextSoundTrack; // 0x70
	USoundCue* pOverrideCue; // 0x78
	USoundCue* pPreOverrideCue; // 0x80
};

struct UCanvasRenderTarget2D : UTextureRenderTarget2D {
	FMulticastInlineDelegate OnCanvasRenderTargetUpdate; // 0x108
	TWeakObjectPtr<UWorld> World; // 0x118
	bool bShouldClearRenderTargetOnReceiveUpdate; // 0x120
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

struct UWB_MOCharCreationSpeciesPanel_C : UMOCharCreationSpeciesPanel {
	UWB_MO_Scrollbox_Arrow_Down_C* WB_MO_Scrollbox_Arrow_Down; // 0x3d0
	UWB_MO_Scrollbox_Arrow_Up_C* WB_MO_Scrollbox_Arrow_Up; // 0x3d8
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

struct UControlRigValidator : UObject {
	TArray<UControlRigValidationPass*> Passes; // 0x28
};

struct UEditableGameplayTagQueryExpression_AnyExprMatch : UEditableGameplayTagQueryExpression {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
};

struct UControlRig : UObject {
	ERigExecutionType ExecutionType; // 0x45
	URigVM* VM; // 0x48
	FRigHierarchyContainer Hierarchy; // 0x50
	TSoftObjectPtr<UControlRigGizmoLibrary> GizmoLibrary; // 0x3b8
	TMap<FName, FCachedPropertyPath> InputProperties; // 0x3f0
	TMap<FName, FCachedPropertyPath> OutputProperties; // 0x440
	FControlRigDrawContainer DrawContainer; // 0x490
	UAnimationDataSourceRegistry* DataSourceRegistry; // 0x4c0
	TArray<FName> EventQueue; // 0x4c8
	FRigInfluenceMapPerEvent Influences; // 0x550
	UControlRig* InteractionRig; // 0x5b0
	UControlRig* InteractionRigClass; // 0x5b8
	TArray<UAssetUserData*> AssetUserData; // 0x5c0
};

struct ALight : AActor {
	ULightComponent* LightComponent; // 0x220
	char bEnabled : 1; // 0x228
};

struct UMaterialExpressionStaticSwitch : UMaterialExpression {
	char DefaultValue : 1; // 0x40
	FExpressionInput A; // 0x44
	FExpressionInput B; // 0x58
	FExpressionInput Value; // 0x6c
};

struct UInAppPurchaseQueryCallbackProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UBlackboardKeyType_NativeEnum : UBlackboardKeyType {
	FString EnumName; // 0x30
	UEnum* EnumType; // 0x40
};

struct UWaterWavesAsset : UObject {
	UWaterWaves* WaterWaves; // 0x28
};

struct UMOJournal : UMOUserWidget {
	UMOJournalEntriesPanel* pJournalEntriesPanel; // 0x2c8
	UMOJournalNotesPanel* pJournalNotesPanel; // 0x2d0
	UMOButtonClose* pMOButton_Close; // 0x2d8
	TArray<UMOJournalPanel*> vPanels; // 0x2e0
	TArray<UMOUserWidgetTabButtonNew*> vTabButtons; // 0x2f0
	UMOUserWidgetTabButtonNew* pMOTabButton_Entries; // 0x300
	UMOUserWidgetTabButtonNew* pMOTabButton_Notes; // 0x308
};

struct ABP_AiEffectArrow_C : AMOAiEffectActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
};

struct UVariantObjectBinding : UObject {
	FString CachedActorLabel; // 0x28
	FSoftObjectPath ObjectPtr; // 0x38
	LazyObjectProperty LazyObjectPtr; // 0x50
	TArray<UPropertyValue*> CapturedProperties; // 0x70
	TArray<FFunctionCaller> FunctionCallers; // 0x80
};

struct AProceduralFoliageBlockingVolume : AVolume {
	AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x258
};

struct UGizmoConstantAxisSource : UObject {
	FVector Origin; // 0x30
	FVector Direction; // 0x3c
};

struct AMOCharacterCollisionPoolSubsystemActor : AActor {
	bool bIsEditorPreview; // 0x220
	bool bHasPlayerPosition; // 0x221
	FVector LastKnownPlayerPosition; // 0x224
	int32_t PoolGrowAmount; // 0x230
	int32_t TickId; // 0x234
	TArray<AMOCharacter*> RegisteredCharacters; // 0x238
	TArray<USphereComponent*> AvailableSphereShapes; // 0x248
	TArray<UCapsuleComponent*> AvailableCapsuleShapes; // 0x258
};

struct UMaterialExpressionSubtract : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UMOCheckBoxQuest : UMOUserWidget {
	UMOCheckBox* pMOCheckBox; // 0x2c8
	UTextBlock* pTextBlockSign; // 0x2d0
	UImage* pColorImage; // 0x2d8
	UImage* pImageBG; // 0x2e0
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

struct UNavLinkDefinition : UObject {
	TArray<FNavigationLink> Links; // 0x28
	TArray<FNavigationSegmentLink> SegmentLinks; // 0x38
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

struct UNiagaraPreviewAxis_InterpParamVector4 : UNiagaraPreviewAxis_InterpParamBase {
	FVector4 Min; // 0x40
	FVector4 Max; // 0x50
};

struct UMovieSceneCinematicShotSection : UMovieSceneSubSection {
	FString ShotDisplayName; // 0x160
	FText DisplayName; // 0x170
};

struct UBP_ClientEffect_AlvarinZoom_C : UMOClientEffectAlvarinZoom {
	FPointerToUberGraphFrame UberGraphFrame; // 0x78
	FPostProcessSettings pPreviousPostProcessSettings; // 0x80
};

struct UParticleModuleLocationPrimitiveTriangle : UParticleModuleLocationBase {
	FRawDistributionVector StartOffset; // 0x30
	FRawDistributionFloat Height; // 0x78
	FRawDistributionFloat Angle; // 0xa8
	FRawDistributionFloat Thickness; // 0xd8
};

struct UNiagaraDataInterfaceGrid2DCollectionReader : UNiagaraDataInterfaceGrid2D {
	FString EmitterName; // 0xf8
	FString DIName; // 0x108
};

struct UMOBodyManagerComponent : UActorComponent {
	UGFurComponent* BodyFurMesh; // 0xb0
	UGFurComponent* HeadFurMesh; // 0xb8
	UNiagaraComponent* EtherParticlesComponent; // 0xc0
	UMaterialInstanceDynamic* pBodyComponentMID; // 0xc8
	UMaterialInstanceDynamic* pHeadComponentMID; // 0xd0
	UMaterialInstanceDynamic* pEyesComponentMID; // 0xd8
	UMaterialInstanceDynamic* pEyesAOComponentMID; // 0xe0
	UMaterialInstanceDynamic* pHairComponentMID; // 0xe8
	UMaterialInstanceDynamic* pBeardComponentMID; // 0xf0
	UMaterialInstanceDynamic* pHeadFurMID; // 0xf8
	UMaterialInstanceDynamic* pBodyFurMID; // 0x100
	FMulticastInlineDelegate OnPlayerDefinitionChanged; // 0x108
	USkeletalMeshComponent* pHairComponent; // 0x118
	USkeletalMeshComponent* pBeardComponent; // 0x120
	USkeletalMeshComponent* pHeadComponent; // 0x128
	USkeletalMeshComponent* pBodyComponent; // 0x130
	bool bIsPaperdoll; // 0x138
	bool bIsUndead; // 0x139
	bool bUseEtherworldAppearance; // 0x13a
	FMOCharacterBodyData sCharacterBodyData; // 0x140
	FMOCharacterDecorationData sCharacterDecorationData; // 0x170
	FMOCharacterFaceCustomizationData sFaceCustomizationData; // 0x1b8
	UMODataAssetPlayerBaseDefinition* ActivePlayerDefinition; // 0x1c8
	UMODataAssetHair* ActiveHairDefinition; // 0x1d0
	UMODataAssetHair* ActiveBeardDefinition; // 0x1d8
	UMODataAssetTattoo* ActiveFaceTattooDefinition; // 0x1e0
	UMODataAssetTattoo* ActiveBodyTattooDefinition; // 0x1e8
};

struct UMovieSceneSubTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
};

struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x220
	bool bLockOrientationToRail; // 0x224
	USceneComponent* TransformComponent; // 0x228
	USplineComponent* RailSplineComponent; // 0x230
	USceneComponent* RailCameraMount; // 0x238
};

struct UMOGameUserSettings : UGameUserSettings {
	int32_t LastKnownVOIPInputDeviceID; // 0x120
	FString LastKnownVOIPInputDeviceName; // 0x128
	int32_t LastKnownVOIPOutputDeviceID; // 0x138
	FString LastKnownVOIPOutputDeviceName; // 0x140
	float fVoipVoiceActivateThreshold; // 0x150
	FMulticastInlineDelegate OnVoipVoiceActivateThresholdChanged; // 0x158
	FMulticastInlineDelegate OnVoipInputChanged; // 0x168
	FMulticastInlineDelegate OnVoipOutputChanged; // 0x178
	bool bWasEverInitialized_Audio; // 0x188
	bool bWasEverInitialized_Video; // 0x189
	bool bWasEverInitialized_Keybinds; // 0x18a
	bool bWasEverInitialized_Chat; // 0x18b
	bool bWasEverInitialized_UI; // 0x18c
	bool bWasEverInitialized_Gameplay; // 0x18d
	float fMasterVol; // 0x190
	float fMusicVol; // 0x19c
	float fInterfaceVol; // 0x1a8
	float fVoiceMasterVol; // 0x1b4
	bool bVoiceChat; // 0x1c0
	bool bVoiceActivation; // 0x1c3
	bool bGore; // 0x1c6
	bool bFullNudity; // 0x1c9
	bool bMotionBlur; // 0x1cc
	bool bYConstrainedFieldOfView; // 0x1d1
	bool bUseMultithreadedRendering; // 0x1d4
	bool bUseCharacterDistanceCPUOptimization; // 0x1d7
	int32_t iPostProcessingQuality; // 0x1ec
	int32_t iDLSSQuality; // 0x208
	float fResolutionScale; // 0x23c
	float fFieldOfView; // 0x248
	float fViewDistance; // 0x254
	bool bPaperdollShouldRender; // 0x264
	bool bShowFPSCounter; // 0x265
	TArray<FMOKeybindSelectStruct> vKeybindOverrides; // 0x268
	TArray<FMOKeybindSelectStruct> vSavedKeybindOverrides; // 0x278
	FVector2D chatSize; // 0x288
	FVector2D chatPos; // 0x290
	TArray<bool> vChatPopUps; // 0x298
	TArray<bool> vSavedChatPopUps; // 0x2a8
	TArray<bool> vDefaultChatPopUps; // 0x2b8
	bool bDisableHelpChat; // 0x2c8
	bool bSavedDisableHelpChat; // 0x2c9
	TArray<FColor> vChatColors; // 0x2d8
	TArray<FColor> vSavedChatColors; // 0x2e8
	TArray<FColor> vDefaultChatColors; // 0x2f8
	TArray<FColor> vNonModifiableChatColors; // 0x308
	TArray<bool> vUICheckBoxes; // 0x360
	TArray<bool> vSavedUICheckBoxes; // 0x370
	TArray<bool> vDefaultUICheckBoxes; // 0x380
	TArray<int32_t> vUIComboBoxes; // 0x398
	TArray<int32_t> vSavedUIComboBoxes; // 0x3a8
	TArray<int32_t> vDefaultUIComboBoxes; // 0x3b8
	TArray<float> vUISliders; // 0x3d0
	TArray<float> vSavedUISliders; // 0x3e0
	TArray<float> vDefaultUISliders; // 0x3f0
	TArray<bool> vGameplayCheckBoxes; // 0x418
	TArray<bool> vSavedGameplayCheckBoxes; // 0x428
	TArray<bool> vDefaultGameplayCheckBoxes; // 0x438
	TArray<int32_t> vGameplayComboBoxes; // 0x450
	TArray<int32_t> vSavedGameplayComboBoxes; // 0x460
	TArray<int32_t> vDefaultGameplayComboBoxes; // 0x470
	TArray<float> vGameplaySliders; // 0x488
	TArray<float> vSavedGameplaySliders; // 0x498
	TArray<float> vDefaultGameplaySliders; // 0x4a8
	FString sSavedLanguage; // 0x4c8
	TMap<EHint, FMOHintDefinitions> vHints; // 0x4e8
	TMap<EHint, FMOHintDefinitions> vSavedHints; // 0x538
	TMap<FString, FString> vBlockedVoipPlayersThroughSteamID; // 0x588
	TMap<FString, FString> vBlockedVoipPlayersThroughDisplayName; // 0x5d8
};

struct UNiagaraDataInterfaceGrid3DCollection : UNiagaraDataInterfaceGrid3D {
	int32_t NumAttributes; // 0x100
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x108
	ENiagaraGpuBufferFormat BufferFormat; // 0x128
};

struct UMaterialExpressionDistanceFieldGradient : UMaterialExpression {
	FExpressionInput Position; // 0x40
};

struct UMOHavenCitySelect : UMOUserWidget {
	UMOCarouselSelectText* pMOCarousel_MyrlandCitySelect; // 0x2c8
	UMOCurrencyWidget* pMOCurrencyWidget; // 0x2d0
	UMOButtonHold* pMOButtonHold_ConfirmCity; // 0x2d8
	UTextBlock* pTextBlock_TitleName; // 0x2e0
	UTextBlock* pTextBlock_TotalItems; // 0x2e8
	UTextBlock* pTextBlock_Warning; // 0x2f0
	UTextBlock* pTextBlock_PlaceItems; // 0x2f8
	UTextBlock* pTextBlock_CityText; // 0x300
	UTextBlock* pTextBlock_CityText2; // 0x308
	UImage* pImage_City; // 0x310
	UVerticalBox* pVerticalBox_PlaceItems; // 0x318
	UMOBorderHeaderTabs* pMOBorder; // 0x320
	UMOScrollBoxPlaceItems* pMOScrollBox_ItemsToBring; // 0x328
	UMOPopupMessage* pPopupWarning; // 0x330
	UBackgroundBlur* pPopupBGBlur; // 0x338
	FString sFailReason; // 0x340
	TArray<UTexture2D*> vCityTextures; // 0x350
	TArray<FString> vCityTexts; // 0x360
};

struct USubmixEffectStereoDelayPreset : USoundEffectSubmixPreset {
	FSubmixEffectStereoDelaySettings Settings; // 0xb4
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
	float Time; // 0x210
	UReplicationDriver* ReplicationDriver; // 0x6e8
};

struct UMovieScenePropertySystem : UMovieSceneEntitySystem {
	UMovieScenePropertyInstantiatorSystem* InstantiatorSystem; // 0x40
};

struct UPanelWidget : UWidget {
	TArray<UPanelSlot*> Slots; // 0x108
};

struct UAndroidPermissionCallbackProxy : UObject {
	FMulticastInlineDelegate OnPermissionsGrantedDynamicDelegate; // 0x28
};

struct USourceEffectFoldbackDistortionPreset : USoundEffectSourcePreset {
	FSourceEffectFoldbackDistortionSettings Settings; // 0x9c
};

struct UMOBrokerPickupItems : UMOUserWidget {
	UMOButton* pMOButton_Close; // 0x2c8
	UMOMailItemListEntry* cMOMailItemListEntryClass; // 0x2d0
	UMOScrollBox* pMOScrollBox_Items; // 0x2d8
};

struct UInterpTrackBoolProp : UInterpTrack {
	TArray<FBoolTrackKey> BoolTrack; // 0x70
	FName PropertyName; // 0x80
};

struct UBTDecorator_CompareBBEntries : UBTDecorator {
	EBlackBoardEntryComparison Operator; // 0x68
	FBlackboardKeySelector BlackboardKeyA; // 0x70
	FBlackboardKeySelector BlackboardKeyB; // 0x98
};

struct UWB_MOCharCreationFinalizePanel_C : UMOCharCreationFinalizePanel {
	FPointerToUberGraphFrame UberGraphFrame; // 0x318
	UTextBlock* pLabelText; // 0x320
	UTextBlock* pLabelText_2; // 0x328
};

struct UInterpTrackInstVectorMaterialParam : UInterpTrackInst {
	TArray<UMaterialInstanceDynamic*> MaterialInstances; // 0x28
	TArray<FVector> ResetVectors; // 0x38
	TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x48
	UInterpTrackVectorMaterialParam* InstancedTrack; // 0x58
};

struct UParticleModuleParameterDynamic_Seeded : UParticleModuleParameterDynamic {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x48
};

struct UEnvQueryTest_Pathfinding : UEnvQueryTest {
	EEnvTestPathfinding TestMode; // 0x1f8
	UEnvQueryContext* Context; // 0x200
	FAIDataProviderBoolValue PathFromContext; // 0x208
	FAIDataProviderBoolValue SkipUnreachable; // 0x240
	UNavigationQueryFilter* FilterClass; // 0x278
};

struct UInAppPurchaseQueryCallbackProxy2 : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UMOSkills : UMOUserWidget {
	UMOSkillsTree* pSkillTreeAbilities; // 0x2c8
	UMOSkillsTree* pSkillTreeCrafting; // 0x2d0
	UMOSkillsVeteran* pSkillVeteran; // 0x2d8
};

struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression {
	FName ParameterName; // 0x40
	float PreviewWeight; // 0x48
	FGuid ExpressionGUID; // 0x4c
};

struct UWidgetAnimationDelegateBinding : UDynamicBlueprintBinding {
	TArray<FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x28
};

struct ASceneCaptureCube : ASceneCapture {
	USceneCaptureComponentCube* CaptureComponentCube; // 0x230
};

struct UWaterSplineMetadata : USplineMetadata {
	FInterpCurveFloat Depth; // 0x28
	FInterpCurveFloat WaterVelocityScalar; // 0x40
	FInterpCurveFloat RiverWidth; // 0x58
	FInterpCurveFloat AudioIntensity; // 0x70
	FInterpCurveVector WaterVelocity; // 0x88
};

struct UGraphNodeContextMenuContext : UObject {
	UBlueprint* Blueprint; // 0x28
	UEdGraph* Graph; // 0x30
	UEdGraphNode* Node; // 0x38
	bool bIsDebugging; // 0x48
};

struct UMaterialExpressionHairAttributes : UMaterialExpression {
	char bUseTangentSpace : 1; // 0x40
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

struct UMODataAssetTattooPlacement : UPrimaryDataAsset {
	UMODataAssetTattooEffectTextures* pTattooEffectTextures; // 0x30
	float BO_UseUvSet2; // 0x38
	float BO_UseUvSet3; // 0x3c
	float BO_UDIM_Mask; // 0x40
	float BO_UDIM_ID; // 0x44
	float BO_BodyOrnament_Left; // 0x48
	float BO_BodyOrnament_Right; // 0x4c
	float BO_CenterFix_X; // 0x50
	float BO_CenterFix_Y; // 0x54
	float BO_RotateCenter_X; // 0x58
	float BO_RotateCenter_Y; // 0x5c
	float BO_RotateCenter_Rotation; // 0x60
	float BO_Scale; // 0x64
	float BO_Scale_X; // 0x68
	float BO_Scale_Y; // 0x6c
	float BO_Translation_X; // 0x70
	float BO_Translation_Y; // 0x74
};

struct UProceduralFoliageTile : UObject {
	UProceduralFoliageSpawner* FoliageSpawner; // 0x28
	TArray<FProceduralFoliageInstance> InstancesArray; // 0xd0
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

struct UMovieSceneTakeSection : UMovieSceneSection {
	FMovieSceneIntegerChannel HoursCurve; // 0xe8
	FMovieSceneIntegerChannel MinutesCurve; // 0x178
	FMovieSceneIntegerChannel SecondsCurve; // 0x208
	FMovieSceneIntegerChannel FramesCurve; // 0x298
	FMovieSceneFloatChannel SubFramesCurve; // 0x328
	FMovieSceneStringChannel Slate; // 0x3c8
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

struct UWB_TooltipSpell_C : UMOTooltipSpell {
	UCanvasPanel* CanvasPanel_1; // 0x290
	UImage* Image_Line; // 0x298
	UTextBlock* TextBlock_1; // 0x2a0
	UTextBlock* WeightText; // 0x2a8
};

struct UGizmoLineHandleComponent : UGizmoBaseComponent {
	FVector Normal; // 0x460
	float HandleSize; // 0x46c
	float Thickness; // 0x470
	FVector Direction; // 0x474
	float Length; // 0x480
	bool bImageScale; // 0x484
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

struct UMOButtonSkill : UMOButton {
	FRequiredSkillData sReqData; // 0x438
	FOptionalSkillData sOptData; // 0x488
	UMaterialInstanceDynamic* pMaterialInstance; // 0x4d8
};

struct UBookMark2D : UBookmarkBase {
	float Zoom2D; // 0x28
	FIntPoint Location; // 0x2c
};

struct AMOAvatarStaticMeshBuildableHouse : AMOAvatarStaticMeshBuildable {
	UStaticMeshComponent* pDoorComponent; // 0x2f8
	UStaticMeshComponent* pChestComponent; // 0x300
	int32_t iNumberOfFloors; // 0x308
	bool bIsLastFloorRoof; // 0x30c
	float fCeilingHeight; // 0x318
	float fFloorZBaseOffset; // 0x31c
	int32_t iMaxNumDecorationsPerFloor; // 0x334
};

struct ULightmassPrimitiveSettingsObject : UObject {
	FLightmassPrimitiveSettings LightmassSettings; // 0x28
};

struct UPhysicalMaterialMask : UObject {
	int32_t UVChannelIndex; // 0x28
	TextureAddress AddressX; // 0x2c
	TextureAddress AddressY; // 0x2d
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

struct UEdGraphNode_Documentation : UEdGraphNode {
	FString Link; // 0x98
	FString Excerpt; // 0xa8
};

struct UMaterialExpressionParameter : UMaterialExpression {
	FName ParameterName; // 0x40
	FGuid ExpressionGUID; // 0x48
};

struct UMOPreviewModeAI : UMOPreviewMode {
	AMOCharacterAI* pTargetAvatar; // 0x50
};

struct UMOOptionSliderWidget : UMOOptionsEntry {
	UMOSlider* pMOSlider; // 0x328
};

struct UDatasmithCommonTessellationOptions : UDatasmithOptionsBase {
	FDatasmithTessellationOptions Options; // 0x28
};

struct UGameplayTagsDeveloperSettings : UDeveloperSettings {
	FString DeveloperConfigName; // 0x38
	FName FavoriteTagSource; // 0x48
};

struct UBoxReflectionCaptureComponent : UReflectionCaptureComponent {
	float BoxTransitionDistance; // 0x270
	UBoxComponent* PreviewInfluenceBox; // 0x278
	UBoxComponent* PreviewCaptureBox; // 0x280
};

struct UBTDecorator_IsAtLocation : UBTDecorator_BlackboardBase {
	float AcceptableRadius; // 0x90
	FAIDataProviderFloatValue ParametrizedAcceptableRadius; // 0x98
	FAIDistanceType GeometricDistanceType; // 0xd0
	char bUseParametrizedRadius : 1; // 0xd4
	char bUseNavAgentGoalLocation : 1; // 0xd4
	char bPathFindingBasedTest : 1; // 0xd4
};

struct UBehaviorTree : UObject {
	UBTCompositeNode* RootNode; // 0x30
	UBlackboardData* BlackboardAsset; // 0x38
	TArray<UBTDecorator*> RootDecorators; // 0x40
	TArray<FBTDecoratorLogic> RootDecoratorOps; // 0x50
};

struct UBackgroundBlurSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UInterpTrackToggle : UInterpTrack {
	TArray<FToggleTrackKey> ToggleTrack; // 0x70
	char bActivateSystemEachUpdate : 1; // 0x80
	char bActivateWithJustAttachedFlag : 1; // 0x80
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	char bFireEventsWhenJumpingForwards : 1; // 0x80
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

struct UParticleModuleEventReceiverBase : UParticleModuleEventBase {
	EParticleEventType EventGeneratorType; // 0x30
	FName EventName; // 0x34
};

struct UMOSocialGuild : UMOWidgetBlueprint {
	UMOGuildStoneMembers* pGuildStoneMembers; // 0x260
};

struct UGeometryCacheTrack_FlipbookAnimation : UGeometryCacheTrack {
	uint32_t NumMeshSamples; // 0x58
};

struct UNiagaraDataInterfaceGrid2DCollection : UNiagaraDataInterfaceGrid2D {
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xf8
	ENiagaraGpuBufferFormat OverrideBufferFormat; // 0x118
	char bOverrideFormat : 1; // 0x119
	TMap<uint64_t, UTextureRenderTarget2DArray*> ManagedRenderTargets; // 0x170
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

struct USoundSourceBus : USoundWave {
	ESourceBusChannels SourceBusChannels; // 0x370
	float SourceBusDuration; // 0x374
	UAudioBus* AudioBus; // 0x378
	char bAutoDeactivateWhenSilent : 1; // 0x380
};

struct UMovieSceneBuiltInEasingFunction : UObject {
	EMovieSceneBuiltInEasing Type; // 0x30
};

struct UWidgetSwitcher : UPanelWidget {
	int32_t ActiveWidgetIndex; // 0x120
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

struct UWB_ItemSlotContainer_C : UMOItemSlotContainer {
	FPointerToUberGraphFrame UberGraphFrame; // 0x350
	UWidgetAnimation* AnimatCooldown; // 0x358
	UWidgetAnimation* HighlightItemAnimation; // 0x360
	UWidgetAnimation* AddItemAnimation; // 0x368
	UWidgetAnimation* DestroyItemAnimation; // 0x370
	UImage* pCooldownImageNew; // 0x378
	UWB_SplitStack_C* SplitStackRef; // 0x380
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

struct UMODialogSystem : UMOUserWidget {
	UTextBlock* sTextBoxText; // 0x2c8
	UTextBlock* sNPCName; // 0x2d0
	UTextBlock* uResponse1; // 0x2d8
	UTextBlock* uResponse2; // 0x2e0
	UTextBlock* uResponse3; // 0x2e8
	UTextBlock* uResponse4; // 0x2f0
	UTextBlock* uResponse5; // 0x2f8
	UMOButton* uResponseButton1; // 0x300
	UMOButton* uResponseButton2; // 0x308
	UMOButton* uResponseButton3; // 0x310
	UMOButton* uResponseButton4; // 0x318
	UMOButton* uResponseButton5; // 0x320
	UMOButton* uQuitResponseButton; // 0x328
	FText sGreetingPhrase; // 0x330
	TArray<UTextBlock*> vResponses; // 0x348
	TArray<UMOButton*> vResponsesButtons; // 0x358
	UMODataAssetNPCConversation* pCurrentConversation; // 0x368
	UMODataAssetNPCConversation* pResetConversation; // 0x370
	UMOHUD* pHUD; // 0x378
	AMOCharacterAI* pOwner; // 0x380
	AMOPlayerController* pPlayerController; // 0x388
};

struct UMOCharCreationAttributesPanel : UMOCharCreationPanel {
	int32_t iAttributePoints; // 0x2d0
	int32_t iAttributePointsGainedFromSize; // 0x2d4
	int32_t iTotalAttributePoints; // 0x2d8
	int32_t iStartAttributePoints; // 0x2dc
	TArray<UMOCarouselSelectValue*> vAttributeCarousels; // 0x2f0
	UMOCarouselSelectValue* pCarouselSelect_Str; // 0x300
	UMOCarouselSelectValue* pCarouselSelect_Dex; // 0x308
	UMOCarouselSelectValue* pCarouselSelect_Con; // 0x310
	UMOCarouselSelectValue* pCarouselSelect_Int; // 0x318
	UMOCarouselSelectValue* pCarouselSelect_Psy; // 0x320
	UMOCarouselSelectValue* pCarouselSelect_Age; // 0x328
	UMOCarouselSelectValue* pCarouselSelect_Size; // 0x330
	UMOCarouselSelectValue* pLastUpdatedCarousel; // 0x338
	UMOCharCreationInfoEntry* pInfoEntry_AttributePoints; // 0x340
};

struct UInputKeyDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputKeyDelegateBinding> InputKeyDelegateBindings; // 0x28
};

struct UDataTable : UObject {
	UScriptStruct* RowStruct; // 0x28
	char bStripFromClientBuilds : 1; // 0x80
	char bIgnoreExtraFields : 1; // 0x80
	char bIgnoreMissingFields : 1; // 0x80
	FString ImportKeyField; // 0x88
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

struct UFindTurnBasedMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
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

struct UBTDecorator_ConeCheck : UBTDecorator {
	float ConeHalfAngle; // 0x68
	FBlackboardKeySelector ConeOrigin; // 0x70
	FBlackboardKeySelector ConeDirection; // 0x98
	FBlackboardKeySelector Observed; // 0xc0
};

struct UGranularSynth : USynthComponent {
	USoundWave* GranulatedSoundWave; // 0x6c0
};

struct UInterpTrackVectorBase : UInterpTrack {
	FInterpCurveVector VectorTrack; // 0x70
	float CurveTension; // 0x88
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

struct UTextureLightProfile : UTexture2D {
	float Brightness; // 0x100
	float TextureMultiplier; // 0x104
};

struct ULightPropagationVolumeBlendable : UObject {
	FLightPropagationVolumeSettings Settings; // 0x30
	float BlendWeight; // 0x70
};

struct UBaseBrushTool : UMeshSurfacePointTool {
	UBrushBaseProperties* BrushProperties; // 0xc0
	bool bInBrushStroke; // 0xc8
	float WorldToLocalScale; // 0xcc
	FBrushStampData LastBrushStamp; // 0xd0
	TSoftClassPtr<UObject> PropertyClass; // 0x190
	UBrushStampIndicator* BrushStampIndicator; // 0x1b8
};

struct UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData {
	EFieldResolutionType ResolutionType; // 0xb0
};

struct AMOAvatar : AActor {
	int32_t LocalAvatarID; // 0x228
	int32_t RandomStream_BaseSeed; // 0x22c
	UCapsuleComponent* pCollisionComponent; // 0x230
	USoundCue* pSoundCueUse; // 0x238
	USoundCue* pSoundCueHit; // 0x240
	USoundCue* pSoundCueKilled; // 0x248
	UParticleSystem* pParticleSystemHit; // 0x250
	UParticleSystem* pParticleSystemKilled; // 0x258
	FString sJournalRowNameToUnlock; // 0x280
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

struct UNamedInterfaces : UObject {
	TArray<FNamedInterface> NamedInterfaces; // 0x28
	TArray<FNamedInterfaceDef> NamedInterfaceDefs; // 0x38
};

struct USynthComponentToneGenerator : USynthComponent {
	float Frequency; // 0x6c0
	float Volume; // 0x6c4
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

struct UBTDecorator_DoesPathExist : UBTDecorator {
	FBlackboardKeySelector BlackboardKeyA; // 0x68
	FBlackboardKeySelector BlackboardKeyB; // 0x90
	char bUseSelf : 1; // 0xb8
	EPathExistanceQueryType PathQueryType; // 0xbc
	UNavigationQueryFilter* FilterClass; // 0xc0
};

struct UMOGuildStoneSettings : UMOWidgetBlueprint {
	UMOButtonMedium* pMOButton_AbandonGuild; // 0x260
	UMOButtonMedium* pMOButton_LeaveGuild; // 0x268
};

struct UChaosGameplayEventDispatcher : UChaosEventListenerComponent {
	TMap<UPrimitiveComponent*, FChaosHandlerSet> CollisionEventRegistrations; // 0x1c8
	TMap<UPrimitiveComponent*, FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x218
};

struct AMOActorSkyDome : AActor {
	float fCloudSpeed; // 0x220
	float fCloudOpacity; // 0x224
	ADirectionalLight* pDirectionalLight; // 0x228
};

struct UDistributionFloatUniformCurve : UDistributionFloat {
	FInterpCurveVector2D ConstantCurve; // 0x38
};

struct UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x80
	bool bUseLegacySectionIndexBlend; // 0x90
	FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams; // 0x98
	bool bBlendFirstChildOfRoot; // 0xc8
};

struct UMOAvatarManagerSubsystem : UMOWorldSubsystemBase {
	TArray<TWeakObjectPtr<AMOPaperdollSceneActor>> PaperdollActors; // 0x238
	TArray<FMOAvatarState> vAvatarList; // 0x248
	TMap<int64_t, int32_t> AvatarIndexLookup; // 0x2a8
};

struct UMOGuildStoneWarsEntry : UMOUserWidget {
	UTextBlock* pName; // 0x2c8
	UTextBlock* pState; // 0x2d0
	UMOButtonSmall* pAccept; // 0x2d8
	UMOButtonSmall* pRefuse; // 0x2e0
	UImage* pStateImage; // 0x2e8
	FString sGuidGuid; // 0x2f0
	FString sGuildName; // 0x300
	EMOGuildWarState eMyGuildWarState; // 0x310
};

struct UDemoNetDriver : UNetDriver {
	TMap<FString, FRollbackNetStartupActorInfo> RollbackNetStartupActors; // 0x840
	float CheckpointSaveMaxMSPerFrame; // 0x9ec
	TArray<FMulticastRecordOptions> MulticastRecordOptions; // 0xa10
	bool bIsLocalReplay; // 0xa20
	TArray<APlayerController*> SpectatorControllers; // 0xa28
};

struct UAIPerceptionComponent : UActorComponent {
	TArray<UAISenseConfig*> SensesConfig; // 0xb0
	UAISense* DominantSense; // 0xc0
	AAIController* AIOwner; // 0xd8
	FMulticastInlineDelegate OnPerceptionUpdated; // 0x160
	FMulticastInlineDelegate OnTargetPerceptionUpdated; // 0x170
	FMulticastInlineDelegate OnTargetPerceptionInfoUpdated; // 0x180
};

struct UMODataAssetTattoo : UPrimaryDataAsset {
	TArray<UMODataAssetTattooPlacement*> vTattooPlacement; // 0x30
	UMODataAssetTattooEffectCollection* pTattooEffectCollection; // 0x40
	ENation eRequiredNation; // 0x48
	ESpecies eRequiredClade; // 0x49
};

struct UNiagaraParameterCollection : UObject {
	FName Namespace; // 0x28
	TArray<FNiagaraVariable> Parameters; // 0x30
	UMaterialParameterCollection* SourceMaterialCollection; // 0x40
	UNiagaraParameterCollectionInstance* DefaultInstance; // 0x48
	FGuid CompileId; // 0x50
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

struct UTimeSynchronizableMediaSource : UBaseMediaSource {
	bool bUseTimeSynchronization; // 0x88
	int32_t FrameDelay; // 0x8c
	double TimeDelay; // 0x90
};

struct UMOGameInstance : UGameInstance {
	TSoftClassPtr<UObject> cLoadingScreenClass; // 0x1a8
	TSoftClassPtr<UObject> cMoveWindowClass; // 0x1d0
	UUserWidget* cSkillTooltipClass; // 0x1f8
	UUserWidget* cItemTooltipClass; // 0x200
	UUserWidget* cButtonTooltipClass; // 0x208
	UUserWidget* cSpellTooltipClass; // 0x210
	TSoftClassPtr<UObject> cPlayerCharacterClass; // 0x218
	TSoftClassPtr<UObject> cSpiritCharacterClass; // 0x240
	TSoftClassPtr<UObject> cGamemasterCharacterClass; // 0x268
	TSoftClassPtr<UObject> cLevelStreamingTerrainGridClass; // 0x290
	TArray<UMOUserWidget*> vResetableWidgets; // 0x2b8
	UUserWidget* pSpawnedMoveWindowWidget; // 0x2d0
	USoundClass* pMasterSoundClass; // 0x2d8
	USoundMix* pMasterSoundMix; // 0x2e0
	USoundClass* pMusicSoundClass; // 0x2e8
	USoundMix* pMusicSoundMix; // 0x2f0
	USoundClass* pAmbientSoundClass; // 0x2f8
	USoundMix* pAmbientSoundMix; // 0x300
	USoundClass* pSFXSoundClass; // 0x308
	USoundMix* pSFXSoundMix; // 0x310
	USoundClass* pUserInterfaceSoundClass; // 0x318
	USoundMix* pUserInterfaceSoundMix; // 0x320
	USoundClass* pCharacterSoundClass; // 0x328
	USoundMix* pCharacterSoundMix; // 0x330
	USoundClass* pFootstepsSoundClass; // 0x338
	USoundMix* pFootstepsSoundMix; // 0x340
	TSoftObjectPtr<UDataTable> pDataTable_WeatherDataTable; // 0x348
	TSoftObjectPtr<UDataTable> pDataTablePlaceablePreview; // 0x370
	TSoftClassPtr<UObject> cLightningStrikeClass; // 0x398
	TSoftObjectPtr<UMaterialParameterCollection> pWeatherFoliageParameterCollection; // 0x3c0
	TSoftObjectPtr<UMaterialParameterCollection> pNightParameterCollection; // 0x3e8
	TArray<AActor*> PlacementBlockingActors; // 0x410
	TArray<UStaticMesh*> PlacementBlockingStaticMeshes; // 0x420
	TSoftClassPtr<UObject> cPlacementQuestWidgetClass; // 0x430
	UTexture2D* pPlacementQuestTexture; // 0x458
	UMOSaveDataInstance* pUISaveDataInstance; // 0x460
	TSoftObjectPtr<UDataTable> pDataTableCladeGifts_Human_SoftPtr; // 0x468
	TSoftObjectPtr<UDataTable> pDataTableCladeGifts_Alvarin_SoftPtr; // 0x490
	TSoftObjectPtr<UDataTable> pDataTableCladeGifts_Oghmir_SoftPtr; // 0x4b8
	TSoftObjectPtr<UDataTable> pDataTableCladeGifts_Thursar_SoftPtr; // 0x4e0
	TSoftObjectPtr<UDataTable> pDataTableHintDefinitions_SoftPtr; // 0x508
	TSoftObjectPtr<UDataTable> pCharacterTitlesDefinitions_SoftPtr; // 0x530
	TSoftObjectPtr<UDataTable> pDataTableContentInfoSpells_SoftPtr; // 0x558
	TSoftObjectPtr<UDataTable> pDataTableJournal_SoftPtr; // 0x580
	TSoftObjectPtr<UDataTable> pDataTableDecorations_SoftPtr; // 0x5a8
	UDataTable* pDataTableCladeGifts_Human; // 0x5d0
	UDataTable* pDataTableCladeGifts_Alvarin; // 0x5d8
	UDataTable* pDataTableCladeGifts_Oghmir; // 0x5e0
	UDataTable* pDataTableCladeGifts_Thursar; // 0x5e8
	UDataTable* pDataTableHintDefinitions; // 0x5f0
	UDataTable* pCharacterTitlesDefinitions; // 0x5f8
	UDataTable* pDataTableContentInfoSpells; // 0x600
	UDataTable* pDataTableJournal; // 0x608
	UDataTable* pDataTableDecorations; // 0x610
};

struct USubmixEffectConvolutionReverbPreset : USoundEffectSubmixPreset {
	UAudioImpulseResponse* ImpulseResponse; // 0x68
	FSubmixEffectConvolutionReverbSettings Settings; // 0x70
	ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0x98
	bool bEnableHardwareAcceleration; // 0x99
};

struct UNiagaraDataInterfaceNeighborGrid3D : UNiagaraDataInterfaceGrid3D {
	uint32_t MaxNeighborsPerCell; // 0x100
};

struct UParticleModuleSpawnBase : UParticleModule {
	char bProcessSpawnRate : 1; // 0x30
	char bProcessBurstList : 1; // 0x30
};

struct UWrapBox : UPanelWidget {
	FVector2D InnerSlotPadding; // 0x120
	float WrapWidth; // 0x128
	float WrapSize; // 0x12c
	bool bExplicitWrapWidth; // 0x130
	bool bExplicitWrapSize; // 0x131
	EOrientation Orientation; // 0x132
};

struct UMOGuildStone : UMOUserWidget {
	UMOGuildStoneCreateGuild* pMOGuildStoneCreateGuild; // 0x2c8
	UMOGuildStoneMembers* pGuildStoneMembers; // 0x2d0
	UMOGuildStoneSettings* pGuildStoneSettings; // 0x2d8
	UMOGuildStoneDiplomacy* pGuildStoneDiplomacy; // 0x2e0
};

struct UMOUserWidgetChatMessage : UMOUserWidget {
	UTextBlock* pTextBlock; // 0x2c8
};

struct UMovieSceneParameterSection : UMovieSceneSection {
	TArray<FBoolParameterNameAndCurve> BoolParameterNamesAndCurves; // 0xe8
	TArray<FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // 0xf8
	TArray<FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves; // 0x108
	TArray<FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // 0x118
	TArray<FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // 0x128
	TArray<FTransformParameterNameAndCurves> TransformParameterNamesAndCurves; // 0x138
};

struct UNiagaraComponentSettings : UObject {
	TSet<FName> SuppressActivationList; // 0x28
	TSet<FName> ForceAutoPooolingList; // 0x78
	TSet<FNiagaraEmitterNameSettingsRef> SuppressEmitterList; // 0xc8
};

struct UParticleModuleMeshRotationRate : UParticleModuleRotationRateBase {
	FRawDistributionVector StartRotationRate; // 0x30
};

struct UMOCrafting : UMOUserWidget {
	UMOButtonMedium* pMOButton_Craft; // 0x2c8
	UMOButtonSmall* pMOButtonSmall_Presets; // 0x2d0
	UMOCheckBox* pMOCheckBox_Sign; // 0x2d8
	UTextBlock* pTextBlock_Sign; // 0x2e0
	UMOEditableTextBox* pMOEditableTextBox_Name; // 0x2e8
	UMOWidgetBlueprint* cCraftingListEntryClass; // 0x2f0
	AMOActorCraftingPreview* pCraftingPreview; // 0x308
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

struct UMOCharCreationFinalizePanel : UMOCharCreationPanel {
	FText sCheckedFirstName; // 0x2d0
	UMOEditableTextBox* pMOEditableBox_FirstName; // 0x2e8
	UMOEditableTextBox* pMOEditableBox_SurName; // 0x2f0
	UMOCarouselSelectText* pCarouselSelect_SpawnLocation; // 0x2f8
	UMOButtonLarge* pMOButton_Create; // 0x300
	FTimerHandle CheckNameAvailableTimer; // 0x308
	bool bNameAvailable; // 0x310
};

struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	UWidgetTree* WidgetTree; // 0x328
	char bClassRequiresNativeTick : 1; // 0x330
	TArray<FDelegateRuntimeBinding> Bindings; // 0x338
	TArray<UWidgetAnimation*> Animations; // 0x348
	TArray<FName> NamedSlots; // 0x358
};

struct UMOLoginHUD : UMOUserWidget {
	UMOLoginScreen* pMOLoginScreen; // 0x2d0
	UMOCharacterSelection* pMOCharacterSelect; // 0x2d8
	UMOCharacterDelete* pMOCharacterDelete; // 0x2e0
	AMOCineCameraActor* pMOCamera; // 0x2e8
	UMOUserWidgetOptions* pMOOptions; // 0x2f0
	UMOCharacterCreationNew* pMOCharacterCreationNew; // 0x2f8
	EMOMainMenuCameraAssignment eCurrentCameraAssignment; // 0x300
};

struct UMOBrokerBrowsePanel : UMOBrokerPanel {
	UTextBlock* pTextBlock_SellButtonText; // 0x2d8
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

struct ALandscapeMeshProxyActor : AActor {
	ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x220
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

struct UMOGlobalActorManager : UMOManager {
	AMOActorNavigationBeamPriest* cNavigationBeamPriestClass; // 0x28
	TArray<AMOActorNavigationBeamPriest*> vNavigationBeamPriest; // 0x30
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

struct UMOCladeGiftButton : UMOWidgetBlueprint {
	FText sName; // 0x260
	UMOButton* pMOCladeGiftButton; // 0x278
	FMOTableRowCladeGift pTableRowCladeGift; // 0x280
};

struct USourceEffectDynamicsProcessorPreset : USoundEffectSourcePreset {
	FSourceEffectDynamicsProcessorSettings Settings; // 0xb8
};

struct UTestMovieSceneTrack : UMovieSceneTrack {
	bool bHighPassFilter; // 0x80
	TArray<UMovieSceneSection*> SectionArray; // 0x88
};

struct UWB_MO_CharacterSelection_C : UMOCharacterSelection {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0
	UWidgetAnimation* FadeIn; // 0x2f8
	UWidgetAnimation* FadeOut; // 0x300
	UMOButtonLarge* Button_Logout; // 0x308
	UImage* FadeTo; // 0x310
	UImage* Image_73; // 0x318
	UImage* MO_Logo_Image; // 0x320
	UImage* pMiddleVertical; // 0x328
	UObject* LoginOptionsReference; // 0x330
};

struct UToIntegerField : UFieldNodeInt {
	UFieldNodeFloat* FloatField; // 0xb0
};

struct UWaterRuntimeSettings : UDeveloperSettings {
	ECollisionChannel CollisionChannelForWaterTraces; // 0x38
	TSoftObjectPtr<UMaterialParameterCollection> MaterialParameterCollection; // 0x40
	float WaterBodyIconWorldSize; // 0x68
	float WaterBodyIconWorldZOffset; // 0x6c
	FName DefaultWaterCollisionProfileName; // 0x70
};

struct ULuminARCandidateImage : UARCandidateImage {
	bool bUseUnreliablePose; // 0x58
	bool bImageIsStationary; // 0x59
	EMagicLeapImageTargetOrientation AxisOrientation; // 0x5a
};

struct AReflectionCapture : AActor {
	UReflectionCaptureComponent* CaptureComponent; // 0x220
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

struct UInputAxisKeyDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputAxisKeyDelegateBinding> InputAxisKeyDelegateBindings; // 0x28
};

struct AOnlineBeacon : AActor {
	float BeaconConnectionInitialTimeout; // 0x228
	float BeaconConnectionTimeout; // 0x22c
	UNetDriver* NetDriver; // 0x230
};

struct ACameraShakeSourceActor : AActor {
	UCameraShakeSourceComponent* CameraShakeSourceComponent; // 0x220
};

struct UMaterialExpressionComponentMask : UMaterialExpression {
	FExpressionInput Input; // 0x40
	char R : 1; // 0x54
	char G : 1; // 0x54
	char B : 1; // 0x54
	char A : 1; // 0x54
};

struct UParticleModuleVectorFieldGlobal : UParticleModuleVectorFieldBase {
	char bOverrideGlobalVectorFieldTightness : 1; // 0x30
	float GlobalVectorFieldScale; // 0x34
	float GlobalVectorFieldTightness; // 0x38
};

struct UNiagaraDataInterfaceCurlNoise : UNiagaraDataInterface {
	uint32_t Seed; // 0x38
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

struct UCurveFloat : UCurveBase {
	FRichCurve FloatCurve; // 0x30
	bool bIsEventCurve; // 0xb0
};

struct UBTTask_RunBehavior : UBTTaskNode {
	UBehaviorTree* BehaviorAsset; // 0x70
};

struct UProxyLODMeshSimplificationSettings : UDeveloperSettings {
	FName ProxyLODMeshReductionModuleName; // 0x38
};

struct UPawnAction_Sequence : UPawnAction {
	TArray<UPawnAction*> ActionSequence; // 0x98
	EPawnActionFailHandling ChildFailureHandlingMode; // 0xa8
	UPawnAction* RecentActionCopy; // 0xb0
};

struct AMOPhysicsVolumeFishing : AMOPhysicsVolume {
	FString sFishingSpotName; // 0x268
};

struct UGameSessionSettings : UObject {
	int32_t MaxSpectators; // 0x28
	int32_t MaxPlayers; // 0x2c
	char bRequiresPushToTalk : 1; // 0x30
};

struct UNavigationGraphNodeComponent : USceneComponent {
	FNavGraphNode Node; // 0x1f8
	UNavigationGraphNodeComponent* NextNodeComponent; // 0x210
	UNavigationGraphNodeComponent* PrevNodeComponent; // 0x218
};

struct UNavigationPath : UObject {
	FMulticastInlineDelegate PathUpdatedNotifier; // 0x28
	TArray<FVector> PathPoints; // 0x38
	ENavigationOptionFlag RecalculateOnInvalidation; // 0x48
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

struct UMaterialExpressionArctangent : UMaterialExpression {
	FExpressionInput Input; // 0x40
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

struct UAB_CR_Springbok_PostProcess_C : UMOAnimationInstancePostProcess {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2; // 0x300
	FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics; // 0x550
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x7a0
	FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x7c0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x8d8
	FKawaiiPhysicsSettings Physics Settings; // 0x8f8
};

struct UParticleModuleKillHeight : UParticleModuleKillBase {
	FRawDistributionFloat Height; // 0x30
	char bAbsolute : 1; // 0x60
	char bFloor : 1; // 0x60
	char bApplyPSysScale : 1; // 0x60
};

struct ADestructibleActor : AActor {
	UDestructibleComponent* DestructibleComponent; // 0x220
	FMulticastInlineDelegate OnActorFracture; // 0x228
};

struct UPanelSlot : UVisual {
	UPanelWidget* Parent; // 0x28
	UWidget* Content; // 0x30
};

struct UNiagaraDataInterface2DArrayTexture : UNiagaraDataInterface {
	UTexture2DArray* Texture; // 0x38
};

struct UParticleModuleSizeScale : UParticleModuleSizeBase {
	FRawDistributionVector SizeScale; // 0x30
	char EnableX : 1; // 0x78
	char EnableY : 1; // 0x78
	char EnableZ : 1; // 0x78
};

struct UWB_MO_Scrollbox_Arrow_Down_C : UMOUserWidget {
	UImage* pImage; // 0x2c8
};

struct UMaterialExpressionRuntimeVirtualTextureSampleParameter : UMaterialExpressionRuntimeVirtualTextureSample {
	FName ParameterName; // 0x90
	FGuid ExpressionGUID; // 0x98
	FName Group; // 0xa8
};

struct UMovieSceneNiagaraVectorParameterTrack : UMovieSceneNiagaraParameterTrack {
	int32_t ChannelsUsed; // 0xb0
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

struct UParticleModuleSize : UParticleModuleSizeBase {
	FRawDistributionVector StartSize; // 0x30
};

struct UMaterialInstanceConstant : UMaterialInstance {
	UPhysicalMaterialMask* PhysMaterialMask; // 0x360
};

struct UCheckBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FCheckBoxStyle CheckBoxStyle; // 0x30
};

struct UMeshSimplificationSettings : UDeveloperSettings {
	FName MeshReductionModuleName; // 0x38
};

struct UBTDecorator_TagCooldown : UBTDecorator {
	FGameplayTag CooldownTag; // 0x68
	float CooldownDuration; // 0x70
	bool bAddToExistingDuration; // 0x74
	bool bActivatesCooldown; // 0x75
};

struct UGizmoWorldAxisSource : UObject {
	FVector Origin; // 0x30
	int32_t AxisIndex; // 0x3c
};

struct UMaterialExpressionSpriteTextureSampler : UMaterialExpressionTextureSampleParameter2D {
	bool bSampleAdditionalTextures; // 0x80
	int32_t AdditionalSlotIndex; // 0x84
	FText SlotDisplayName; // 0x88
};

struct UARPlaneComponent : UARComponent {
	FARPlaneUpdatePayload ReplicatedPayload; // 0x280
};

struct UMOMailReceive : UMOMailPanel {
	UMOMailItemListEntry* pLastClickedEntry; // 0x2d0
	UMOScrollBox* pMOScrollBox_Items; // 0x2d8
};

struct UGizmoAxisIntervalParameterSource : UGizmoBaseFloatParameterSource {
	TScriptInterface<IGizmoFloatParameterSource> FloatParameterSource; // 0x48
	float MinParameter; // 0x58
	float MaxParameter; // 0x5c
};

struct UBoxComponent : UShapeComponent {
	FVector BoxExtent; // 0x458
	float LineThickness; // 0x464
};

struct ALevelStreamingVolume : AVolume {
	TArray<FName> StreamingLevelNames; // 0x258
	char bEditorPreVisOnly : 1; // 0x268
	char bDisabled : 1; // 0x268
	EStreamingVolumeUsage StreamingUsage; // 0x26c
};

struct UParticleModuleVelocityOverLifetime : UParticleModuleVelocityBase {
	FRawDistributionVector VelOverLife; // 0x38
	char Absolute : 1; // 0x80
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

struct UMovieScene3DConstraintTrack : UMovieSceneTrack {
	TArray<UMovieSceneSection*> ConstraintSections; // 0x78
};

struct UDistributionFloatConstant : UDistributionFloat {
	float Constant; // 0x38
};

struct USubmixEffectReverbPreset : USoundEffectSubmixPreset {
	FSubmixEffectReverbSettings Settings; // 0xd0
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

struct UWidgetNavigation : UObject {
	FWidgetNavigationData Up; // 0x28
	FWidgetNavigationData Down; // 0x4c
	FWidgetNavigationData Left; // 0x70
	FWidgetNavigationData Right; // 0x94
	FWidgetNavigationData Next; // 0xb8
	FWidgetNavigationData Previous; // 0xdc
};

struct UAudioAnalyzerNRT : UAudioAnalyzerAsset {
	USoundWave* Sound; // 0x28
	float DurationInSeconds; // 0x30
};

struct ABP_Orb_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UNiagaraComponent* NS_Ether_Jelly_Orb; // 0x228
	UNiagaraComponent* NS_Ether_Jelly_Core_Orb; // 0x230
	UStaticMeshComponent* Sphere; // 0x238
	USceneComponent* DefaultSceneRoot; // 0x240
	FLinearColor Changes_on_hit_NewTrack_0_C46AB210411532D672C3879E6EC24111; // 0x248
	FLinearColor Changes_on_hit_Niagara_colour_C46AB210411532D672C3879E6EC24111; // 0x258
	FVector Changes_on_hit_Red_to_black_C46AB210411532D672C3879E6EC24111; // 0x268
	float Changes_on_hit_Sine_speed_C46AB210411532D672C3879E6EC24111; // 0x274
	float Changes_on_hit_Alpha_C46AB210411532D672C3879E6EC24111; // 0x278
	ETimelineDirection Changes_on_hit__Direction_C46AB210411532D672C3879E6EC24111; // 0x27c
	UTimelineComponent* Changes on hit; // 0x280
	float Changes_on_finish_Sine_speed_601D385948BDFE4CC0209E8B889D7C75; // 0x288
	ETimelineDirection Changes_on_finish__Direction_601D385948BDFE4CC0209E8B889D7C75; // 0x28c
	UTimelineComponent* Changes on finish; // 0x290
	bool Damaged; // 0x298
};

struct UBlackboardComponent : UActorComponent {
	UBrainComponent* BrainComp; // 0xb0
	UBlackboardData* DefaultBlackboardAsset; // 0xb8
	UBlackboardData* BlackboardAsset; // 0xc0
	TArray<UBlackboardKeyType*> KeyInstances; // 0xe8
};

struct UWB_OptionsSliderWeight_C : UMOOptionSliderWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x330
	UImage* Input; // 0x338
	UTextBlock* Percentage_Text; // 0x340
	UImage* Shadow; // 0x348
	USizeBox* SizeBox_1; // 0x350
	UImage* Underline; // 0x358
	float fMinValue; // 0x360
	float fMaxValue; // 0x364
	float fOptionsSliderValue; // 0x368
	float fOptionsSliderModifier; // 0x36c
	FString AppendEndOfStringWith; // 0x370
	bool bRoundOutVariable; // 0x380
	float fPrecisionPower; // 0x384
	FText ToolTip; // 0x388
	float TestVariable; // 0x3a0
	bool BackgroundIsVisible; // 0x3a4
};

struct UParticleModuleAccelerationDragScaleOverLife : UParticleModuleAccelerationBase {
	UDistributionFloat* DragScale; // 0x38
	FRawDistributionFloat DragScaleRaw; // 0x40
};

struct UDistributionVectorUniformCurve : UDistributionVector {
	FInterpCurveTwoVectors ConstantCurve; // 0x38
	char bLockAxes1 : 1; // 0x50
	char bLockAxes2 : 1; // 0x50
	EDistributionVectorLockFlags LockedAxes[0x2]; // 0x54
	EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x56
	char bUseExtremes : 1; // 0x5c
};

struct UBTTaskNode : UBTNode {
	TArray<UBTService*> Services; // 0x58
	char bIgnoreRestartSelf : 1; // 0x68
};

struct UWB_MOCharCreationBloodlinePanel_C : UMOCharCreationBloodlinePanel {
	UImage* BloodlineBackgroundLines; // 0x408
	UImage* PanelTextBackground; // 0x410
	UWB_MO_Scrollbox_Arrow_Down_C* WB_MO_Scrollbox_Arrow_Down; // 0x418
	UWB_MO_Scrollbox_Arrow_Up_C* WB_MO_Scrollbox_Arrow_Up; // 0x420
};

struct UMOCharCreationComboBox : UMOUserWidget {
	UMOComboBoxString* pMOComboBoxString; // 0x2c8
	FText InitializeToolTipText; // 0x2d0
	int32_t iEntryIndex; // 0x2e8
	UMOCharCreationBloodlinePanel* pMyPanel; // 0x2f0
};

struct URandomVector : UFieldNodeVector {
	float Magnitude; // 0xb0
};

struct UAnimSharingInstance : UObject {
	TArray<AActor*> RegisteredActors; // 0x28
	UAnimationSharingStateProcessor* StateProcessor; // 0x88
	TArray<UAnimSequence*> UsedAnimationSequences; // 0xc8
	UEnum* StateEnum; // 0xe8
	AActor* SharingActor; // 0xf0
};

struct UMaterialExpressionAntialiasedTextureMask : UMaterialExpressionTextureSampleParameter2D {
	float Threshold; // 0x80
	ETextureColorChannel Channel; // 0x84
};

struct AWaterBodyOcean : AWaterBody {
	UOceanGenerator* OceanGenerator; // 0xdd0
	FVector CollisionExtents; // 0xdd8
	float HeightOffset; // 0xde4
};

struct UAIAsyncTaskBlueprintProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFail; // 0x38
};

struct UMOCharCreationInfoPanel : UMOCharCreationPanel {
	UMOCharCreationInfoEntry* pInfoEntry_Clade; // 0x2d0
	UMOCharCreationInfoEntry* pInfoEntry_Gender; // 0x2d8
	UMOCharCreationInfoEntry* pInfoEntry_DominantAncestry; // 0x2e0
	UMOCharCreationInfoEntry* pInfoEntry_SecondaryAncestry; // 0x2e8
	UMOCharCreationInfoEntry* pInfoEntry_Str; // 0x2f0
	UMOCharCreationInfoEntry* pInfoEntry_Dex; // 0x2f8
	UMOCharCreationInfoEntry* pInfoEntry_Con; // 0x300
	UMOCharCreationInfoEntry* pInfoEntry_Int; // 0x308
	UMOCharCreationInfoEntry* pInfoEntry_Psy; // 0x310
	UMOCharCreationInfoEntry* pInfoEntry_Size; // 0x318
	UMOCharCreationInfoEntry* pInfoEntry_Health; // 0x320
	UMOCharCreationInfoEntry* pInfoEntry_Mana; // 0x328
	UMOCharCreationInfoEntry* pInfoEntry_Stamina; // 0x330
	UMOCharCreationInfoEntry* pInfoEntry_MovementSpeed; // 0x338
	UMOCharCreationInfoEntry* pInfoEntry_AttributePoints; // 0x340
	UMOCharCreationInfoEntry* pInfoEntry_DamageBonus; // 0x348
	UImage* pCladeImage_Human; // 0x350
	UImage* pCladeImage_Alvarin; // 0x358
	UImage* pCladeImage_Oghmir; // 0x360
	UImage* pCladeImage_Thursar; // 0x368
};

struct UMOScrollBoxPlaceItems : UMOUserWidget {
	bool bHighlighted; // 0x2c8
	bool bScrollBoxAlwaysVisible; // 0x2c9
	FIntPoint InitOverlaySize; // 0x2cc
	UMOUserWidget* pRightClickOverrideParent; // 0x2d8
	UMOItemListEntry* cMOItemListEntryClass; // 0x2e0
	UMOScrollBox* pMOScrollBox; // 0x2e8
	TArray<UMOItemListEntry*> vItemListEntries; // 0x2f0
};

struct UMOVendorAmount : UMOUserWidget {
	UMOButtonMedium* pMOButton_Accept; // 0x2c8
	UTextBlock* pTextBlock_TotalCost; // 0x2d0
	UMOButtonClose* MOButton_Close; // 0x2d8
	bool bHasAcceptedTrade; // 0x2e0
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

struct UControlPointMeshComponent : UStaticMeshComponent {
	float VirtualTextureMainPassMaxDrawDistance; // 0x4d0
};

struct UMOBrokerMyOrdersPanel : UMOBrokerPanel {
	UMOScrollBox* pMOScrollBox_Selling; // 0x2d8
	UMOScrollBox* pMOScrollBox_Buying; // 0x2e0
	UMOBrokerItemListEntry* cMOItemListEntryClass; // 0x2e8
	UMOBrokerPetListEntry* cMOPetListEntryClass; // 0x2f0
	UMOBrokerPickupItems* pMOBrokerPickupItemsPanel; // 0x2f8
	TArray<UMOBrokerItemListEntry*> vItemEntriesSelling; // 0x300
	TArray<UMOBrokerItemListEntry*> vItemEntriesBuying; // 0x310
	TArray<UMOBrokerPetListEntry*> vPetEntriesSelling; // 0x320
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
};

struct UMovieSceneCameraAnimTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> CameraAnimSections; // 0x80
};

struct AMOAudioComponentPoolSubsystemActor : AActor {
	TArray<FMOAudioComponentPoolEntry> ActiveEffectsComponents; // 0x220
	TArray<FMOAudioComponentPoolEntry> ActiveVoiceComponents; // 0x230
	TArray<UAudioComponent*> InactiveAudioComponents; // 0x240
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

struct UParticleModuleVelocity_Seeded : UParticleModuleVelocity {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xb0
};

struct UFoliageInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent {
	FMulticastInlineDelegate OnInstanceTakePointDamage; // 0x668
	FMulticastInlineDelegate OnInstanceTakeRadialDamage; // 0x678
	FGuid GenerationGuid; // 0x688
};

struct UOculusResourceHolder : UObject {
	UMaterial* PokeAHoleMaterial; // 0x28
};

struct UNiagaraDataInterfaceRenderTargetVolume : UNiagaraDataInterfaceRWBase {
	FIntVector Size; // 0xd8
	ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe4
	char bOverrideFormat : 1; // 0xe5
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8
	TMap<uint64_t, UTextureRenderTargetVolume*> ManagedRenderTargets; // 0x108
};

struct UDistributionFloatConstantCurve : UDistributionFloat {
	FInterpCurveFloat ConstantCurve; // 0x38
};

struct UMOAnimationInstanceBow : UAnimInstance {
	UAnimSequenceBase* PullSequence; // 0x2b8
	float StringRestDistance; // 0x2c0
	USkeletalMeshComponent* AttachedParentSkeletalMesh; // 0x2c8
	float StringPull; // 0x2d0
	float StringMaxPullRange; // 0x2d4
	float StringPullAlpha; // 0x2d8
	FVector StringPullPosition; // 0x2dc
	float ArrowScaleAlpha; // 0x2e8
	float EnableBowPose; // 0x2ec
	float BowLooksAtHand; // 0x2f0
};

struct UEdGraph : UObject {
	UEdGraphSchema* Schema; // 0x28
	TArray<UEdGraphNode*> Nodes; // 0x30
	char bEditable : 1; // 0x40
	char bAllowDeletion : 1; // 0x40
	char bAllowRenaming : 1; // 0x40
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

struct UMeshSelectionSet : USelectionSet {
	TArray<int32_t> Vertices; // 0x40
	TArray<int32_t> Edges; // 0x50
	TArray<int32_t> Faces; // 0x60
	TArray<int32_t> Groups; // 0x70
};

struct UWB_TabButtonNew_Options_C : UMOUserWidgetTabButtonNew {
	FPointerToUberGraphFrame UberGraphFrame; // 0x310
	UImage* ImageHovered; // 0x318
	UImage* ImagePressed; // 0x320
	FText Text; // 0x328
};

struct UMODataAssetTalkerTalk : UPrimaryDataAsset {
	TArray<FTalkerTreePair> vConversationChains; // 0x30
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

struct AMOSpiritArm : AActor {
	UNiagaraSystem* pParticleSystem_KauBeam; // 0x228
	UNiagaraSystem* pParticleSystem_SpiritAttachedBeam; // 0x230
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

struct UMOMail : UMOUserWidget {
	TArray<UMOMailPanel*> vPanels; // 0x2c8
	UMOMailItemListEntry* cMOMailItemListEntryClass; // 0x2d8
	TArray<UMOUserWidgetTabButtonNew*> vMOTabButtons; // 0x2e0
	UMOUserWidgetTabButtonNew* pMOTabButton_ReceiveMail; // 0x2f0
	UMOUserWidgetTabButtonNew* pMOTabButton_SendMail; // 0x2f8
	UMOUserWidgetTabButtonNew* pMOTabButton_OutgoingMail; // 0x300
	UMOButtonClose* pMOButton_Close; // 0x308
	UMOMailReceive* pMOMailReceive; // 0x310
	UMOMailSend* pMOMailSend; // 0x318
	UMOMailOutgoing* pMOMailOutgoing; // 0x320
	int32_t iCurrentPanelIndex; // 0x328
	int32_t iCityID; // 0x32c
};

struct UMOStables : UMOUserWidget {
	UMOUserWidgetTabButtonNew* pTabButtonNewText_Add; // 0x2c8
	UMOUserWidgetTabButtonNew* pTabButtonNewText_Rem; // 0x2d0
	UMOStablesAddPet* pPanelStablesAddPet; // 0x2d8
	UMOStablesRemPet* pPanelStablesRemPet; // 0x2e0
	UMOPetListEntry* cPetListEntryAddClass; // 0x2e8
	UMOPetListEntry* cPetListEntryRemClass; // 0x2f0
};

struct UMOPaperdollCladeGifts : UMOWidgetBlueprint {
	TArray<UMOCladeGiftButton*> vCladeGiftButtons; // 0x270
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

struct UMaterialExpressionSobol : UMaterialExpression {
	FExpressionInput Cell; // 0x40
	FExpressionInput Index; // 0x54
	FExpressionInput Seed; // 0x68
	uint32_t ConstIndex; // 0x7c
	FVector2D ConstSeed; // 0x80
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

struct ADatasmithImportedSequencesActor : AActor {
	TArray<ULevelSequence*> ImportedSequences; // 0x220
};

struct UMovieSceneLiveLinkTrack : UMovieScenePropertyTrack {
	ULiveLinkRole* TrackRole; // 0xb0
};

struct UDLSSOverrideSettings : UObject {
	EDLSSSettingOverride EnableDLSSInEditorViewportsOverride; // 0x28
	EDLSSSettingOverride EnableScreenpercentageManipulationInDLSSEditorViewportsOverride; // 0x29
	EDLSSSettingOverride EnableDLSSInPlayInEditorViewportsOverride; // 0x2a
	bool bShowDLSSIncompatiblePluginsToolsWarnings; // 0x2b
	EDLSSSettingOverride ShowDLSSSDebugOnScreenMessages; // 0x2c
};

struct AMOArrowActor : AActor {
	UStaticMeshComponent* pStaticMeshBase; // 0x248
	UStaticMeshComponent* pStaticMeshHead; // 0x250
	FMOArrowData arrowData; // 0x258
	UMODataAssetArrowBase* pArrowBaseData; // 0x280
	UMODataAssetArrowHead* pArrowHeadData; // 0x288
	UParticleSystemComponent* pFlyingTrailParticleSystemComponent; // 0x290
	UParticleSystemComponent* pFireParticleSystemComponent; // 0x298
	UMaterialInstanceDynamic* pBaseMID; // 0x2a0
	UMaterialInstanceDynamic* pHeadMID; // 0x2a8
};

struct UMOBrokerItemListEntry : UMOItemListEntry {
	UTextBlock* pTextBlockCityName; // 0x2b0
	UTextBlock* pTextBlockPlayerName; // 0x2b8
	UTextBlock* pTextBlockQuantity; // 0x2c0
	UTextBlock* pTextBlockDays; // 0x2c8
	UTextBlock* pMOBrokerButton_Text; // 0x2d0
	UImage* pImage_SelectedBG; // 0x2d8
	UImage* pImage_HoveredBG; // 0x2e0
	UMOButton* pMOButton_BrokerEntry; // 0x2e8
	TArray<FString> vBaggedItemJsonArray; // 0x2f0
	int32_t iBagSize; // 0x300
	uint64_t iCuprumCost; // 0x308
	int32_t iCurPanelState; // 0x310
	bool bSelectionState; // 0x314
};

struct AGeometryCollectionActor : AActor {
	UGeometryCollectionComponent* GeometryCollectionComponent; // 0x220
	UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x228
};

struct UMOItemSlotContainer : UMOItemSlot {
	UMOContainer* pMemberOwner; // 0x340
	UUserWidget* pMyWidget; // 0x348
};

struct UPlatformInterfaceBase : UObject {
	TArray<FDelegateArray> AllDelegates; // 0x28
};

struct ULiveLinkTransformAxisSwitchPreProcessor : ULiveLinkFramePreProcessor {
	ELiveLinkAxis OrientationAxisX; // 0x28
	ELiveLinkAxis OrientationAxisY; // 0x29
	ELiveLinkAxis OrientationAxisZ; // 0x2a
	ELiveLinkAxis TranslationAxisX; // 0x2b
	ELiveLinkAxis TranslationAxisY; // 0x2c
	ELiveLinkAxis TranslationAxisZ; // 0x2d
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

struct UMovieSceneCameraShakeSourceShakeSection : UMovieSceneSection {
	FMovieSceneCameraShakeSectionData ShakeData; // 0xe8
};

struct UInterpGroupCamera : UInterpGroup {
	UCameraAnim* CameraAnimInst; // 0x50
	float CompressTolerance; // 0x58
};

struct UBTTask_Wait : UBTTaskNode {
	float WaitTime; // 0x70
	float RandomDeviation; // 0x74
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

struct UWB_MOCharCreationAppearancePanel_C : UMOCharCreationAppearancePanel {
	FPointerToUberGraphFrame UberGraphFrame; // 0x490
	UHorizontalBox* FaceCustomizationRow; // 0x498
	UOverlay* Overlay_Face; // 0x4a0
	UTextBlock* pLabelText; // 0x4a8
	UTextBlock* pLabelText_2; // 0x4b0
	UTextBlock* pLabelText_3; // 0x4b8
	UTextBlock* pLabelText_4; // 0x4c0
	UTextBlock* pLabelText_5; // 0x4c8
	UTextBlock* pLabelText_6; // 0x4d0
	UWB_MO_Scrollbox_Arrow_Down_C* WB_MO_Scrollbox_Arrow_Down; // 0x4d8
	UWB_MO_Scrollbox_Arrow_Up_C* WB_MO_Scrollbox_Arrow_Up; // 0x4e0
};

struct ULevelSequenceBurnInOptions : UObject {
	bool bUseBurnIn; // 0x28
	FSoftClassPath BurnInClass; // 0x30
	ULevelSequenceBurnInInitSettings* Settings; // 0x48
};

struct UMOClientEffect : UObject {
	bool bRemove; // 0x38
	AMOPlayerController* pOwner; // 0x40
};

struct AMOPhysicsVolumeMountSpeed : AMOPhysicsVolume {
	FText sReason; // 0x268
	int32_t iMaxThrottle; // 0x280
};

struct UMaterialExpressionDDX : UMaterialExpression {
	FExpressionInput Value; // 0x40
};

struct UBrushComponent : UPrimitiveComponent {
	UModel* Brush; // 0x440
	UBodySetup* BrushBodySetup; // 0x448
};

struct UMaterialExpressionStaticComponentMaskParameter : UMaterialExpressionParameter {
	char DefaultR : 1; // 0x58
	char DefaultG : 1; // 0x58
	char DefaultB : 1; // 0x58
	char DefaultA : 1; // 0x58
};

struct UBlueprintCore : UObject {
	UObject* SkeletonGeneratedClass; // 0x28
	UObject* GeneratedClass; // 0x30
	bool bLegacyNeedToPurgeSkelRefs; // 0x38
	FGuid BlueprintGuid; // 0x3c
};

struct UMaterialExpressionVertexInterpolator : UMaterialExpressionCustomOutput {
	FExpressionInput Input; // 0x40
};

struct UMaterialExpressionViewProperty : UMaterialExpression {
	EMaterialExposedViewProperty Property; // 0x40
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

struct UNiagaraDataInterfaceSpline : UNiagaraDataInterface {
	AActor* Source; // 0x38
};

struct UBrushBuilder : UObject {
	FString BitmapFilename; // 0x28
	FString ToolTip; // 0x38
	char NotifyBadParams : 1; // 0x48
	TArray<FVector> Vertices; // 0x50
	TArray<FBuilderPoly> Polys; // 0x60
	FName Layer; // 0x70
	char MergeCoplanars : 1; // 0x78
};

struct UAsyncTaskDownloadImage : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFail; // 0x40
};

struct ABP_Fishing_CaughtFish_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UStaticMeshComponent* FishMesh; // 0x228
	UPhysicsConstraintComponent* PhysicsConstraint; // 0x230
	UStaticMeshComponent* Sphere; // 0x238
	UStaticMeshComponent* fish; // 0x240
};

struct AMOFishingBobberActor : AActor {
	UStaticMeshComponent* pStaticMeshBase; // 0x220
};

struct UParticleModuleAccelerationConstant : UParticleModuleAccelerationBase {
	FVector Acceleration; // 0x38
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

struct ABP_AiEffectSummonUndeadA_C : AMOAiEffectActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	int32_t iIter; // 0x278
	TArray<UNiagaraComponent*> vParticles; // 0x280
};

struct UMovieScene2DTransformSection : UMovieSceneSection {
	FMovieScene2DTransformMask TransformMask; // 0xf0
	FMovieSceneFloatChannel Translation[0x2]; // 0xf8
	FMovieSceneFloatChannel Rotation; // 0x238
	FMovieSceneFloatChannel Scale[0x2]; // 0x2d8
	FMovieSceneFloatChannel Shear[0x2]; // 0x418
};

struct UMaterialExpressionArcsineFast : UMaterialExpression {
	FExpressionInput Input; // 0x40
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

struct UMagicLeapSettings : UObject {
	bool bEnableZI; // 0x28
	bool bUseVulkanForZI; // 0x29
	bool bUseMLAudioForZI; // 0x2a
};

struct UMagicLeapARPinSaveGame : USaveGame {
	FGuid PinnedID; // 0x28
	FTransform ComponentWorldTransform; // 0x40
	FTransform PinTransform; // 0x70
	bool bShouldPinActor; // 0xa0
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

struct UMaterialExpressionTransform : UMaterialExpression {
	FExpressionInput Input; // 0x40
	EMaterialVectorCoordTransformSource TransformSourceType; // 0x54
	EMaterialVectorCoordTransform TransformType; // 0x55
};

struct UWB_MOComboBoxStringEntry_C : UMOComboBoxStringEntry {
	FPointerToUberGraphFrame UberGraphFrame; // 0x330
	UImage* BACKGROUND; // 0x338
	UWB_BasicTooltip_C* ToolTip; // 0x340
};

struct UEnvQueryTest_GameplayTags : UEnvQueryTest {
	FGameplayTagQuery TagQueryToMatch; // 0x1f8
	bool bUpdatedToUseQuery; // 0x240
	EGameplayContainerMatchType TagsToMatch; // 0x241
	FGameplayTagContainer GameplayTags; // 0x248
};

struct UBodySetup : UBodySetupCore {
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

struct UUniformInteger : UFieldNodeInt {
	int32_t Magnitude; // 0xb0
};

struct AMOAIController : AAIController {
	bool bControlledByPlayer; // 0x328
	int32_t iPlayerDexterity; // 0x35c
};

struct UMOFishingEquipment : UMOUserWidget {
	UMOItemSlotPlaceItem* pMOItemSlot_Line; // 0x2c8
	UMOItemSlotPlaceItem* pMOItemSlot_Hook; // 0x2d0
	UMOItemSlotPlaceItem* pMOItemSlot_Bait; // 0x2d8
	UMOCraftingSliderWidget* pMOSlider_Depth; // 0x2e0
	UMOEditableTextBoxNumbers* pMOEditableTextBox_Depth; // 0x2e8
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

struct UMovieSceneMediaSection : UMovieSceneSection {
	UMediaSource* MediaSource; // 0xe8
	bool bLooping; // 0xf0
	FFrameNumber StartFrameOffset; // 0xf4
	UMediaTexture* MediaTexture; // 0xf8
	UMediaSoundComponent* MediaSoundComponent; // 0x100
	bool bUseExternalMediaPlayer; // 0x108
	UMediaPlayer* ExternalMediaPlayer; // 0x110
};

struct ABP_MortalOnline2GameModeMenu_C : AMOGameModeMenu {
	USceneComponent* DefaultSceneRoot; // 0x300
};

struct UMODataAssetShieldFrame : UMODataAssetEquipmentShared {
	UStaticMesh* pStaticMesh; // 0x308
	FText sDisplayName; // 0x310
	UTexture2D* pIcon; // 0x328
	TArray<FSocketEmitterPair> vSocketEmitterPairs; // 0x330
	TArray<FSocketSoundPair> vSocketSoundPairs; // 0x340
	TArray<FSocketLightPair> vSocketLightPairs; // 0x350
};

struct UMaterialExpressionConstant2Vector : UMaterialExpression {
	float R; // 0x40
	float G; // 0x44
};

struct ASphereReflectionCapture : AReflectionCapture {
	UDrawSphereComponent* DrawCaptureRadius; // 0x228
};

struct UArrowComponent : UPrimitiveComponent {
	FColor ArrowColor; // 0x440
	float ArrowSize; // 0x444
	float ArrowLength; // 0x448
	float ScreenSize; // 0x44c
	char bIsScreenSizeScaled : 1; // 0x450
	char bTreatAsASprite : 1; // 0x450
};

struct UEditableGeometryCollectionAdapter : UEditableMeshAdapter {
	UGeometryCollection* GeometryCollection; // 0x28
	UGeometryCollection* OriginalGeometryCollection; // 0x30
	int32_t GeometryCollectionLODIndex; // 0x38
};

struct UMovieSceneCameraShakeSourceShakeTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> CameraShakeSections; // 0x80
};

struct UPlatformMediaSource : UMediaSource {
	UMediaSource* MediaSource; // 0x80
};

struct UTexture2DDynamic : UTexture {
	EPixelFormat Format; // 0xe0
};

struct UMOBuildablePanel : UMOUserWidget {
	UMOBuildable* pBuildable; // 0x2c8
};

struct UMOClientEffectAlvarinZoom : UMOClientEffect {
	TArray<AMOCharacter*> vCharacters; // 0x48
	TArray<AMOAvatarStaticMeshLoot*> vLootBags; // 0x58
	AMOCharacterPlayer* pOwnerCharacter; // 0x68
	UMaterialInstance* pMaterialInstance; // 0x70
};

struct UWB_RingFlare_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Effect; // 0x268
	UImage* pRingFlare; // 0x270
};

struct UFKControlRig : UControlRig {
	TArray<bool> IsControlActive; // 0x650
	EControlRigFKRigExecuteMode ApplyMode; // 0x660
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

struct UCheckBoxStyleAsset : UObject {
	FCheckBoxStyle CheckBoxStyle; // 0x28
};

struct UUserDefinedCaptureProtocol : UMovieSceneImageCaptureProtocolBase {
	UWorld* World; // 0x58
};

struct UMOCombatSystem : UObject {
	FMOEquipmentStats NoPlayerControllerDummyStats; // 0x28
	UMOGameUserSettings* pMOGameUserSettings; // 0x60
};

struct ABandwidthTestActor : AActor {
	FBandwidthTestGenerator BandwidthGenerator; // 0x220
};

struct UMOButtonHold : UMOUserWidget {
	float fAnim_PlaybackSpeed; // 0x2d8
	float fAnim_PlaybackSpeed_Reverse; // 0x2dc
	UMOButton* pMOButton_Hold; // 0x2e0
	UTextBlock* pTextBlock_ButtonText; // 0x2e8
	bool IsButtonHeld; // 0x2f0
};

struct UNiagaraPreviewAxis_InterpParamBase : UNiagaraPreviewAxis {
	FName Param; // 0x28
	int32_t Count; // 0x30
};

struct UGenlockedTimecodeProvider : UTimecodeProvider {
	bool bUseGenlockToCount; // 0x30
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

struct ULiveLinkSourceSettings : UObject {
	ELiveLinkSourceMode Mode; // 0x28
	FLiveLinkSourceBufferManagementSettings BufferSettings; // 0x30
	FString ConnectionString; // 0x88
	ULiveLinkSourceFactory* Factory; // 0x98
};

struct AGeometryCollectionRenderLevelSetActor : AActor {
	UVolumeTexture* TargetVolumeTexture; // 0x220
	UMaterial* RayMarchMaterial; // 0x228
	float SurfaceTolerance; // 0x230
	float Isovalue; // 0x234
	bool Enabled; // 0x238
	bool RenderVolumeBoundingBox; // 0x239
};

struct UAsyncActionLoadPrimaryAssetClass : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UAISenseConfig_Damage : UAISenseConfig {
	UAISense_Damage* Implementation; // 0x48
};

struct UNiagaraComponentPool : UObject {
	TMap<UNiagaraSystem*, FNCPool> WorldParticleSystemPools; // 0x28
};

struct UMovieSceneColorSection : UMovieSceneSection {
	FMovieSceneFloatChannel RedCurve; // 0xe8
	FMovieSceneFloatChannel GreenCurve; // 0x188
	FMovieSceneFloatChannel BlueCurve; // 0x228
	FMovieSceneFloatChannel AlphaCurve; // 0x2c8
};

struct UMOAnimNotifyPlayWeaponSwingSound : UMOAnimNotify {
	EHandSlot eSwingHand; // 0x38
};

struct UMOContainer : UMOUserWidget {
	UTextBlock* pContainerText; // 0x2c8
	TArray<UMOItemSlotContainer*> vSlotList; // 0x2d0
	FString sBagGUID; // 0x2e0
	UMOItemSlotContainer* ItemSlotRef; // 0x2f0
	USizeBox* pSizeBox; // 0x358
	UUniformGridPanel* pGridPanel; // 0x360
	UMOHUD* pHUD; // 0x368
};

struct UAnimBlueprint : UBlueprint {
	USkeleton* TargetSkeleton; // 0xa8
	TArray<FAnimGroupInfo> Groups; // 0xb0
	bool bUseMultiThreadedAnimationUpdate; // 0xc0
	bool bWarnAboutBlueprintUsage; // 0xc1
};

struct ASplineMeshActor : AActor {
	USplineMeshComponent* SplineMeshComponent; // 0x220
};

struct ANavSystemConfigOverride : AActor {
	UNavigationSystemConfig* NavigationSystemConfig; // 0x220
	ENavSystemOverridePolicy OverridePolicy; // 0x228
	char bLoadOnClient : 1; // 0x229
};

struct UDialogueWave : UObject {
	char bMature : 1; // 0x28
	char bOverride_SubtitleOverride : 1; // 0x28
	FString SpokenText; // 0x30
	FString SubtitleOverride; // 0x40
	TArray<FDialogueContextMapping> ContextMappings; // 0x50
	FGuid LocalizationGUID; // 0x60
};

struct UMaterialExpressionTangent : UMaterialExpression {
	FExpressionInput Input; // 0x40
	float Period; // 0x54
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

struct UMOAnimNotifyJump : UMOAnimNotify {
	bool bJumpStart; // 0x38
};

struct UMaterialExpressionSkyAtmosphereAerialPerspective : UMaterialExpression {
	FExpressionInput WorldPosition; // 0x40
};

struct UNiagaraSimulationStageGeneric : UNiagaraSimulationStageBase {
	ENiagaraIterationSource IterationSource; // 0x40
	int32_t Iterations; // 0x44
	char bSpawnOnly : 1; // 0x48
	char bDisablePartialParticleUpdate : 1; // 0x48
	FNiagaraVariableDataInterfaceBinding DataInterface; // 0x50
};

struct AMOPhysicsVolumeMessage : AMOPhysicsVolume {
	FText sMessage; // 0x268
	EHint eShowHint; // 0x280
};

struct UDialogueVoice : UObject {
	EGrammaticalGender Gender; // 0x28
	EGrammaticalNumber Plurality; // 0x29
	FGuid LocalizationGUID; // 0x2c
};

struct UMaterialExpressionDepthFade : UMaterialExpression {
	FExpressionInput InOpacity; // 0x40
	FExpressionInput FadeDistance; // 0x54
	float OpacityDefault; // 0x68
	float FadeDistanceDefault; // 0x6c
};

struct UAISenseEvent_Hearing : UAISenseEvent {
	FAINoiseEvent Event; // 0x28
};

struct UVerticalBoxSlot : UPanelSlot {
	FSlateChildSize Size; // 0x38
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
};

struct UMOCharCreationFaceCustomization : UMOUserWidget {
	int32_t PresetCount; // 0x2c8
	AMOCharacter* PaperdollSceneActor; // 0x2d0
	FMulticastInlineDelegate OnFaceCustomizationValuesChanged; // 0x2d8
	FMulticastInlineDelegate OnCloseWidgetRequest; // 0x2e8
	FMulticastInlineDelegate OnFacePresetLoad; // 0x2f8
	FMulticastInlineDelegate OnFacePresetSave; // 0x308
	FMulticastInlineDelegate OnRequestSaveToClipboard; // 0x318
	FMulticastInlineDelegate OnRequestLoadFromClipboard; // 0x328
	UMOButtonLarge* pMOButton_CloseWidget; // 0x338
};

struct UMovieSceneObjectPropertyTrack : UMovieScenePropertyTrack {
	UObject* PropertyClass; // 0xb0
};

struct UInteractiveGizmo : UObject {
	UInputBehaviorSet* InputBehaviors; // 0x30
};

struct USlateWidgetStyleAsset : UObject {
	USlateWidgetStyleContainerBase* CustomStyle; // 0x28
};

struct UConnectionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct ATemplateSequenceActor : AActor {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x228
	UTemplateSequencePlayer* SequencePlayer; // 0x240
	FSoftObjectPath TemplateSequence; // 0x248
	FTemplateSequenceBindingOverrideData BindingOverride; // 0x260
};

struct UGameplayTagsList : UObject {
	FString ConfigFileName; // 0x28
	TArray<FGameplayTagTableRow> GameplayTagList; // 0x38
};

struct UInterpTrackFloatMaterialParam : UInterpTrackFloatBase {
	TArray<UMaterialInterface*> TargetMaterials; // 0x90
	FName ParamName; // 0xa0
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

struct AVolumetricLightmapDensityVolume : AVolume {
	FInt32Interval AllowedMipLevelRange; // 0x258
};

struct UNetAnalyticsAggregatorConfig : UObject {
	TArray<FNetAnalyticsDataConfig> NetAnalyticsData; // 0x28
};

struct UFXSystemAsset : UObject {
	uint32_t MaxPoolSize; // 0x28
	uint32_t PoolPrimeSize; // 0x2c
};

struct USoundNodeDistanceCrossFade : USoundNode {
	TArray<FDistanceDatum> CrossFadeInput; // 0x48
};

struct UAnimSingleNodeInstance : UAnimInstance {
	UAnimationAsset* CurrentAsset; // 0x2b8
	FDelegate PostEvaluateAnimEvent; // 0x2c0
};

struct UMaterialFunction : UMaterialFunctionInterface {
	FString Description; // 0x40
	char bExposeToLibrary : 1; // 0x50
	char bPrefixParameterNames : 1; // 0x50
};

struct UMovieSceneTrack : UMovieSceneSignedObject {
	FMovieSceneTrackEvalOptions EvalOptions; // 0x50
	bool bIsEvalDisabled; // 0x55
	FGuid EvaluationFieldGuid; // 0x58
	FMovieSceneTrackEvaluationField EvaluationField; // 0x68
};

struct UARGetCandidateObjectAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct UMaterialParameterCollectionInstance : UObject {
	UMaterialParameterCollection* Collection; // 0x30
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

struct UMotoSynthPreset : UObject {
	FMotoSynthRuntimeSettings Settings; // 0x28
};

struct UARPlaneGeometry : UARTrackedGeometry {
	EARPlaneOrientation Orientation; // 0xf8
	FVector Center; // 0xfc
	FVector Extent; // 0x108
	TArray<FVector> BoundaryPolygon; // 0x118
	UARPlaneGeometry* SubsumedBy; // 0x128
};

struct UMaterialExpressionSphericalParticleOpacity : UMaterialExpression {
	FExpressionInput Density; // 0x40
	float ConstantDensity; // 0x54
};

struct UMaterialExpressionFeatureLevelSwitch : UMaterialExpression {
	FExpressionInput Default; // 0x40
};

struct UMOWeatherManager : UMOManager {
	float WeatherZoneUpdateTickRate; // 0x28
	float WeatherZoneUpdateTickTimer; // 0x2c
	uint32_t NextWeatherZoneTickIndex; // 0x30
	float WeatherTweenUpdateTickRate; // 0x34
	float WeatherTweenUpdateTickTimer; // 0x38
	TArray<FMOWeatherTemplate> vWeatherTemplates; // 0x40
	TArray<FMOWeatherZone> vWeatherZones; // 0x50
	FMOWeatherTemplate currentWeather; // 0x60
	FMOWeatherTemplate weatherToChangeInto; // 0xa8
	UNiagaraSystem* pPlayerWeatherTemplate; // 0xf0
	UAudioComponent* pWeatherAudioComponent; // 0xf8
	AMOSunSky* pMOSunSky; // 0x100
	AAtmosphericFog* pAtmosphericFog; // 0x108
	AExponentialHeightFog* pExponentialFog; // 0x110
	AMOActorSkyDome* pSkyDome; // 0x118
	AWindDirectionalSource* pWindDirectionalSource; // 0x120
	AActor* cLightningStrikeClass; // 0x128
	UDataTable* pDataTable_WeatherDataTable; // 0x130
	UMaterialParameterCollection* pWeatherFoliageParameterCollection; // 0x138
	UMaterialParameterCollection* pNightParameterCollection; // 0x140
};

struct UMOPetManager : UMOManager {
	TArray<FMOPetData> vPetData; // 0x28
};

struct UMODragDropOperationPetSkill : UMODragDropOperation {
	FString sPetSkillJSon; // 0x88
};

struct USourceEffectMidSideSpreaderPreset : USoundEffectSourcePreset {
	FSourceEffectMidSideSpreaderSettings Settings; // 0x98
};

struct UNiagaraDataInterfaceGrid3D : UNiagaraDataInterfaceRWBase {
	FIntVector NumCells; // 0xd8
	float CellSize; // 0xe4
	int32_t NumCellsMaxAxis; // 0xe8
	ESetResolutionMethod SetResolutionMethod; // 0xec
	FVector WorldBBoxSize; // 0xf0
};

struct UWaterSubsystem : UWorldSubsystem {
	FMulticastInlineDelegate OnCameraUnderwaterStateChanged; // 0x70
	FMulticastInlineDelegate OnWaterScalabilityChanged; // 0x80
	UStaticMesh* DefaultRiverMesh; // 0x90
	UStaticMesh* DefaultLakeMesh; // 0x98
	AWaterMeshActor* WaterMeshActor; // 0xa0
	UMaterialParameterCollection* MaterialParameterCollection; // 0xd0
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

struct UMOArmorManagerComponent : UActorComponent {
	FMOArmorPartData sArmorDataTest; // 0xb0
	USkeletalMeshComponent* HeadComponent; // 0xd8
	USkeletalMeshComponent* ArmorHeadComponent; // 0xe0
	USkeletalMeshComponent* ArmorTorsoComponent; // 0xe8
	USkeletalMeshComponent* ArmorLegsComponent; // 0xf0
	USkeletalMeshComponent* ArmorLeftArmComponent; // 0xf8
	USkeletalMeshComponent* ArmorRightArmComponent; // 0x100
	USkeletalMeshComponent* ArmorBackComponent; // 0x108
	TMap<EArmorSlot, UMODataAssetArmor*> vArmorSlotAssetArmor; // 0x110
	TMap<EArmorSlot, UMODataAssetResource*> vArmorSlotAssetResources; // 0x160
	TArray<UMaterialInstanceDynamic*> vArmorSlotAssetMIDs; // 0x1b0
};

struct UMODataAssetBowDefinitions : UPrimaryDataAsset {
	UMODataAssetEquipmentShared* pSharedData; // 0x30
	TSoftObjectPtr<UMODataAssetBowBase> pFallBackBow; // 0x38
	TSoftObjectPtr<UStaticMesh> pQuiverMesh; // 0x60
	TArray<TSoftObjectPtr<UMODataAssetBowBase>> vRecurveBows; // 0x88
	TArray<TSoftObjectPtr<UMODataAssetBowBase>> vDeCurveBows; // 0x98
	TArray<TSoftObjectPtr<UMODataAssetBowBase>> vFlatBows; // 0xa8
	bool bBowPartsArePreloaded; // 0xb8
	TArray<UMODataAssetBowBase*> PreLoadedBowParts; // 0xc0
};

struct UWB_ItemSlotActionbar_C : UMOItemSlotActionbar {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0
	UWidgetAnimation* Cooldown; // 0x2f8
	UWidgetAnimation* Use; // 0x300
	UWidgetAnimation* FadeInAnimation; // 0x308
	UWidgetAnimation* FadeOutAnimation; // 0x310
	UImage* pCooldownImage; // 0x318
	FLinearColor DefaultColor; // 0x320
	FSlateBrush DefaultBrush; // 0x330
};

struct USubmixEffectDynamicsProcessorPreset : USoundEffectSubmixPreset {
	FSubmixEffectDynamicsProcessorSettings Settings; // 0xe0
};

struct UNiagaraDataInterfaceArrayFloat3 : UNiagaraDataInterfaceArray {
	TArray<FVector> FloatData; // 0x50
};

struct UNiagaraDataInterfaceVectorField : UNiagaraDataInterface {
	UVectorField* Field; // 0x38
	bool bTileX; // 0x40
	bool bTileY; // 0x41
	bool bTileZ; // 0x42
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

struct UAnimSharingAdditiveInstance : UAnimInstance {
	TWeakObjectPtr<USkeletalMeshComponent> BaseComponent; // 0x2b8
	TWeakObjectPtr<UAnimSequence> AdditiveAnimation; // 0x2c0
	float Alpha; // 0x2c8
	bool bStateBool; // 0x2cc
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

struct UMaterialExpressionWorldPosition : UMaterialExpression {
	EWorldPositionIncludedOffsets WorldPositionShaderOffset; // 0x40
};

struct UGeometryCollectionCache : UObject {
	FRecordedTransformTrack RecordedData; // 0x28
	UGeometryCollection* SupportedCollection; // 0x38
	FGuid CompatibleCollectionState; // 0x40
};

struct UParticleModuleEventGenerator : UParticleModuleEventBase {
	TArray<FParticleEvent_GenerateInfo> Events; // 0x30
};

struct USoundNodeDelay : USoundNode {
	float DelayMin; // 0x48
	float DelayMax; // 0x4c
};

struct AMOEquipmentActorShield : AMOEquipmentActorTwoPart {
	FMOEquipmentActorShieldData ShieldData; // 0x2c0
};

struct UAISense_Blueprint : UAISense {
	UUserDefinedStruct* ListenerDataType; // 0x80
	TArray<UAIPerceptionComponent*> ListenerContainer; // 0x88
	TArray<UAISenseEvent*> UnprocessedEvents; // 0x98
};

struct UMOMailItemListEntry : UMOItemListEntry {
	UMOButtonLarge* pMOButton_ReturnItem; // 0x2b0
	UTextBlock* pTextBlockPlayerName; // 0x2b8
};

struct UMODayNightComponent : USceneComponent {
	int32_t iActivateTime; // 0x1f8
	int32_t iDeactivateTime; // 0x1fc
	bool bActiveDuringDay; // 0x200
	FMulticastInlineDelegate OnActivatedOrDeactivated; // 0x208
};

struct UMOUserWidgetOptionsUI : UMOUserWidgetOptionsPanel {
	TArray<UMOCheckBoxEntry*> vCheckBoxEntries; // 0x2d0
	UMOCheckBoxEntry* pMOCheckBox_UseRoundCompass; // 0x2e0
	UMOCheckBoxEntry* pMOCheckBox_CenterMouseCursor; // 0x2e8
	TArray<UMOOptionSliderWidget*> vSliderEntries; // 0x2f0
	UMOOptionSliderWidget* pOptionsSlider_PlayerScale; // 0x300
	UMOOptionSliderWidget* pOptionsSlider_PlayerOpacity; // 0x308
	UMOOptionSliderWidget* pOptionsSlider_TargetScale; // 0x310
	UMOOptionSliderWidget* pOptionsSlider_TargetOpacity; // 0x318
	UMOOptionSliderWidget* pOptionsSlider_CompassScale; // 0x320
	UMOButton* pMOButton_ResetUI; // 0x328
	TArray<UMOComboBoxStringEntry*> vComboBoxEntries; // 0x330
	UMOComboBoxStringEntry* pMOComboBox_CursorStyle; // 0x340
};

struct UNiagaraDataInterfaceCamera : UNiagaraDataInterface {
	int32_t PlayerControllerIndex; // 0x38
	bool bRequireCurrentFrameData; // 0x3c
};

struct UEnvQueryGenerator_BlueprintBase : UEnvQueryGenerator {
	FText GeneratorsActionDescription; // 0x50
	UEnvQueryContext* Context; // 0x68
	UEnvQueryItemType* GeneratedItemType; // 0x70
};

struct UMOTrade : UMOUserWidget {
	UMOPetListEntry* cPetListEntryClass; // 0x2c8
	UMOButtonMedium* pMOButton_Accept; // 0x2d0
	UMOScrollBoxPlaceItems* pMOScrollBox_Give; // 0x2d8
	UMOScrollBox* pMOScrollBox_Recive; // 0x2e0
	UMOItemListEntry* cTradeListEntryClass; // 0x2e8
	bool bTradeApproved; // 0x2f0
	UTextBlock* pTextBlock_TradeTargetName; // 0x2f8
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

struct UOverlaySlot : UPanelSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct UMaterialExpressionFontSampleParameter : UMaterialExpressionFontSample {
	FName ParameterName; // 0x50
	FGuid ExpressionGUID; // 0x58
	FName Group; // 0x68
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

struct UMOMailOutgoing : UMOMailPanel {
	UMOScrollBox* pMOScrollBox_Items; // 0x2d0
};

struct UMOOptionComboBoxStringWidget : UMOUserWidget {
	UComboBoxString* pComboBoxString; // 0x2c8
};

struct UGizmoScaledTransformSource : UGizmoBaseTransformSource {
	TScriptInterface<IGizmoTransformSource> ChildTransformSource; // 0x48
};

struct UAB_CH_Player_Male_Alvarin_Head_Ears_PostProcess_C : UMOAnimationInstancePostProcess {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2; // 0x300
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x550
	FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics; // 0x570
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x7c0
	FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x7e0
};

struct USafeZone : UContentWidget {
	bool PadLeft; // 0x120
	bool PadRight; // 0x121
	bool PadTop; // 0x122
	bool PadBottom; // 0x123
};

struct ULiveLinkTimecodeProvider : UTimecodeProvider {
	FLiveLinkSubjectKey SubjectKey; // 0x30
	ELiveLinkTimecodeProviderEvaluationType Evaluation; // 0x48
	bool bOverrideFrameRate; // 0x4c
	FFrameRate OverrideFrameRate; // 0x50
	int32_t BufferSize; // 0x58
};

struct AControlRigGizmoActor : AActor {
	USceneComponent* ActorRootComponent; // 0x220
	UStaticMeshComponent* StaticMeshComponent; // 0x228
	uint32_t ControlRigIndex; // 0x230
	FName ControlName; // 0x234
	FName ColorParameterName; // 0x23c
	char bEnabled : 1; // 0x244
	char bSelected : 1; // 0x244
	char bSelectable : 1; // 0x244
	char bHovered : 1; // 0x244
};

struct UAB_WP_Fishingrod_C : UMOAnimInstanceFishingRod {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_2; // 0x308
	FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x3d8
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive; // 0x4f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x5c0
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x640
	FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics; // 0x690
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x8e0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x900
	float StringPull; // 0x920
	float StringMaxPullRange; // 0x924
	float StringPullAlpha; // 0x928
	FVector StringPullPosition; // 0x92c
	USkeletalMeshComponent* AttachedParentSkeletalMesh; // 0x938
	float ReelSpin; // 0x940
	float Rotation Z (Yaw); // 0x944
	float ReelSpinAcc; // 0x948
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

struct AMOCharacterAIGenerated : AMOCharacterAI {
	FMOFullEquipmentData sMOEquipmentData; // 0xcd8
	FMOCharacterBodyData sMOCharacterBodyData; // 0xf08
	FMOCharacterDecorationData sMOCharacterDecorationData; // 0xf38
	FMOCharacterFaceCustomizationData FaceCustomizationData; // 0xf80
	float fNextFloorAttemptTimer; // 0xf90
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

struct UMaterialExpressionAdd : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UBTDecorator_CheckGameplayTagsOnActor : UBTDecorator {
	FBlackboardKeySelector ActorToCheck; // 0x68
	EGameplayContainerMatchType TagsToMatch; // 0x90
	FGameplayTagContainer GameplayTags; // 0x98
	FString CachedDescription; // 0xb8
};

struct USpacer : UWidget {
	FVector2D Size; // 0x108
};

struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct UDatasmithActorTemplate : UDatasmithObjectTemplate {
	TSet<FName> Layers; // 0x30
	TSet<FName> Tags; // 0x80
};

struct UMODataAssetArrowHead : UMODataAssetEquipmentShared {
	UStaticMesh* pMesh; // 0x308
	UNiagaraSystem* pEquipHitParticles; // 0x310
	UNiagaraSystem* pGenericHitParticles; // 0x318
	USoundCue* pDealDamageSound; // 0x320
	USoundCue* pGenericHitSound; // 0x328
};

struct AMOPhysicsVolumeDamage : AMOPhysicsVolume {
	int32_t iDamagePerSec; // 0x268
	FText sDamageText; // 0x270
	USoundCue* pDamageSound; // 0x288
	UNiagaraSystem* pDamageParticleSystem; // 0x290
};

struct UInterpTrackInstLinearColorProp : UInterpTrackInstProperty {
	FLinearColor ResetColor; // 0x58
};

struct UMaterialExpressionArctangent2Fast : UMaterialExpression {
	FExpressionInput Y; // 0x40
	FExpressionInput X; // 0x54
};

struct USubsurfaceProfile : UObject {
	FSubsurfaceProfileStruct Settings; // 0x28
};

struct UMaterialExpressionArctangent2 : UMaterialExpression {
	FExpressionInput Y; // 0x40
	FExpressionInput X; // 0x54
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

struct UMaterialBillboardComponent : UPrimitiveComponent {
	TArray<FMaterialSpriteElement> Elements; // 0x440
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

struct UNiagaraDataInterfaceArrayFloat : UNiagaraDataInterfaceArray {
	TArray<float> FloatData; // 0x50
};

struct AFieldSystemActor : AActor {
	UFieldSystemComponent* FieldSystemComponent; // 0x220
};

struct UFixedFrameRateCustomTimeStep : UEngineCustomTimeStep {
	FFrameRate FixedFrameRate; // 0x28
};

struct UAnimNotifyState_Trail : UAnimNotifyState {
	UParticleSystem* PSTemplate; // 0x30
	FName FirstSocketName; // 0x38
	FName SecondSocketName; // 0x40
	ETrailWidthMode WidthScaleMode; // 0x48
	FName WidthScaleCurve; // 0x4c
	char bRecycleSpawnedSystems : 1; // 0x54
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

struct UWB_MOCharCreationHiddenColorEntry_C : UMOCharCreationColorEntry {
	UImage* pImageBGHighlight; // 0x308
};

struct UControlRigNumericalValidationPass : UControlRigValidationPass {
	bool bCheckControls; // 0x28
	bool bCheckBones; // 0x29
	bool bCheckCurves; // 0x2a
	float TranslationPrecision; // 0x2c
	float RotationPrecision; // 0x30
	float ScalePrecision; // 0x34
	float CurvePrecision; // 0x38
	FName EventNameA; // 0x3c
	FName EventNameB; // 0x44
	FRigPose Pose; // 0x50
};

struct UMOSpellbookSpell : UMOWidgetBlueprint {
	UTextBlock* pTextBlockName; // 0x260
	UTextBlock* pTextBlockDescription; // 0x268
	UHorizontalBox* pHorizontalBoxRange; // 0x270
	UTextBlock* pTextBlockRange; // 0x278
	UHorizontalBox* pHorizontalBoxSpeed; // 0x280
	UTextBlock* pTextBlockSpeed; // 0x288
	UHorizontalBox* pHorizontalBoxCastTime; // 0x290
	UTextBlock* pTextBlockCastTime; // 0x298
	UHorizontalBox* pHorizontalBoxSkillRange; // 0x2a0
	UTextBlock* pTextBlockSkillRange; // 0x2a8
	UHorizontalBox* pHorizontalBoxAlignment; // 0x2b0
	UTextBlock* pTextBlockAlignment; // 0x2b8
	UHorizontalBox* pHorizontalBoxMana; // 0x2c0
	UTextBlock* pTextBlockMana; // 0x2c8
	UHorizontalBox* pHorizontalBoxDamage; // 0x2d0
	UTextBlock* pTextBlockDamageTitle; // 0x2d8
	UTextBlock* pTextBlockDamage; // 0x2e0
	UMOButtonSpellWidget* pButtonSpellWidget; // 0x2e8
	UMOItemSlotStatic* pItemSlotStatic0; // 0x2f0
	UMOItemSlotStatic* pItemSlotStatic1; // 0x2f8
	UMOItemSlotStatic* pItemSlotStatic2; // 0x300
	UMOItemSlotStatic* pItemSlotStatic3; // 0x308
	UMOItemSlotStatic* pItemSlotStatic4; // 0x310
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

struct USoundNodeWaveParam : USoundNode {
	FName WaveParameterName; // 0x48
};

struct UMOCooking : UMOUserWidget {
	UMOButtonMedium* pMOButton_Cooking; // 0x2c8
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_Resource; // 0x2d0
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_1; // 0x2d8
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_2; // 0x2e0
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_3; // 0x2e8
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_4; // 0x2f0
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_5; // 0x2f8
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_6; // 0x300
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_7; // 0x308
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_8; // 0x310
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_9; // 0x318
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_10; // 0x320
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_11; // 0x328
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_12; // 0x330
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_13; // 0x338
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_14; // 0x340
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_15; // 0x348
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_IngredientSlot_16; // 0x350
	UImage* pSlot_000; // 0x358
	UImage* pSlot_001; // 0x360
	UImage* pSlot_002; // 0x368
	UImage* pSlot_003; // 0x370
	UImage* pSlot_101; // 0x378
	UImage* pSlot_102; // 0x380
	UImage* pSlot_103; // 0x388
	UImage* pSlot_104; // 0x390
	UImage* pSlot_105; // 0x398
	UImage* pSlot_106; // 0x3a0
	UImage* pSlot_107; // 0x3a8
	UImage* pSlot_108; // 0x3b0
	UImage* pSlot_109; // 0x3b8
	UImage* pSlot_110; // 0x3c0
	UImage* pSlot_111; // 0x3c8
	UImage* pSlot_112; // 0x3d0
	TArray<UMOItemSlotPlaceItem*> vIngredientSlotSimplifier; // 0x3f0
	TArray<UImage*> vBasicIngredientsHidden; // 0x400
	TArray<UImage*> vAdvancedIngredientsHidden; // 0x410
};

struct URotatingMovementComponent : UMovementComponent {
	FRotator RotationRate; // 0xf0
	FVector PivotTranslation; // 0xfc
	char bRotationInLocalSpace : 1; // 0x108
};

struct UControlRigSequence : ULevelSequence {
	TSoftObjectPtr<UAnimSequence> LastExportedToAnimationSequence; // 0x1c8
	TSoftObjectPtr<USkeletalMesh> LastExportedUsingSkeletalMesh; // 0x1f0
	float LastExportedFrameRate; // 0x218
};

struct UMovieSceneFadeSection : UMovieSceneSection {
	FMovieSceneFloatChannel FloatCurve; // 0xe8
	FLinearColor FadeColor; // 0x188
	char bFadeAudio : 1; // 0x198
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

struct UARComponent : USceneComponent {
	FGuid NativeID; // 0x1f8
	bool bUseDefaultReplication; // 0x238
	UMaterialInterface* DefaultMeshMaterial; // 0x240
	UMaterialInterface* DefaultWireframeMeshMaterial; // 0x248
	UMRMeshComponent* MRMeshComponent; // 0x250
	UARTrackedGeometry* MyTrackedGeometry; // 0x258
};

struct UNavigationQueryFilter : UObject {
	TArray<FNavigationFilterArea> Areas; // 0x28
	FNavigationFilterFlags IncludeFlags; // 0x38
	FNavigationFilterFlags ExcludeFlags; // 0x3c
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

struct UTextLayoutWidget : UWidget {
	FShapedTextOptions ShapedTextOptions; // 0x108
	ETextJustify Justification; // 0x10b
	ETextWrappingPolicy WrappingPolicy; // 0x10c
	char AutoWrapText : 1; // 0x10d
	float WrapTextAt; // 0x110
	FMargin Margin; // 0x114
	float LineHeightPercentage; // 0x124
};

struct UGeometryCollectionDebugDrawComponent : UActorComponent {
	AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0xb0
	AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0xb8
};

struct UNavigationSystemConfig : UObject {
	FSoftClassPath NavigationSystemClass; // 0x28
	FNavAgentSelector SupportedAgentsMask; // 0x40
	FName DefaultAgentName; // 0x44
	char bIsOverriden : 1; // 0x4c
};

struct UParticleModuleMeshRotation_Seeded : UParticleModuleMeshRotation {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct UNavCollisionBase : UObject {
	char bIsDynamicObstacle : 1; // 0x28
};

struct UMaterialExpressionReflectionVectorWS : UMaterialExpression {
	FExpressionInput CustomWorldNormal; // 0x40
	char bNormalizeCustomWorldNormal : 1; // 0x54
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

struct ULiveLinkSettings : UObject {
	TArray<FLiveLinkRoleProjectSetting> DefaultRoleSettings; // 0x28
	ULiveLinkFrameInterpolationProcessor* FrameInterpolationProcessor; // 0x38
	TSoftObjectPtr<ULiveLinkPreset> DefaultLiveLinkPreset; // 0x40
	FDirectoryPath PresetSaveDir; // 0x68
	float ClockOffsetCorrectionStep; // 0x78
	ELiveLinkSourceMode DefaultMessageBusSourceMode; // 0x7c
	double MessageBusPingRequestFrequency; // 0x80
	double MessageBusHeartbeatFrequency; // 0x88
	double MessageBusHeartbeatTimeout; // 0x90
	double MessageBusTimeBeforeRemovingInactiveSource; // 0x98
	double TimeWithoutFrameToBeConsiderAsInvalid; // 0xa0
	FLinearColor ValidColor; // 0xa8
	FLinearColor InvalidColor; // 0xb8
	char TextSizeSource; // 0xc8
	char TextSizeSubject; // 0xc9
};

struct UMaterialExpressionTextureSampleParameterSubUV : UMaterialExpressionTextureSampleParameter2D {
	char bBlend : 1; // 0x80
};

struct UNiagaraPreviewAxis_InterpParamFloat : UNiagaraPreviewAxis_InterpParamBase {
	float Min; // 0x38
	float Max; // 0x3c
};

struct UBTTask_SetTagCooldown : UBTTaskNode {
	FGameplayTag CooldownTag; // 0x70
	bool bAddToExistingDuration; // 0x78
	float CooldownDuration; // 0x7c
};

struct UARCandidateImage : UDataAsset {
	UTexture2D* CandidateTexture; // 0x30
	FString FriendlyName; // 0x38
	float Width; // 0x48
	float Height; // 0x4c
	EARCandidateImageOrientation Orientation; // 0x50
};

struct USubmixEffectTapDelayPreset : USoundEffectSubmixPreset {
	FSubmixEffectTapDelaySettings Settings; // 0xa8
};

struct USourceEffectBitCrusherPreset : USoundEffectSourcePreset {
	FSourceEffectBitCrusherSettings Settings; // 0xc0
};

struct UMORefining : UMOUserWidget {
	UMOButtonMedium* pMOButton_Refining; // 0x2c8
	UTextBlock* pTextBlock_Sign; // 0x2d0
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_Resource; // 0x2d8
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_CatalystA; // 0x2e0
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_CatalystB; // 0x2e8
};

struct UHorizontalBoxSlot : UPanelSlot {
	FMargin Padding; // 0x40
	FSlateChildSize Size; // 0x50
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
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

struct UParticleModuleLocationEmitterDirect : UParticleModuleLocationBase {
	FName EmitterName; // 0x30
};

struct UNiagaraDataInterfaceArrayFloat4 : UNiagaraDataInterfaceArray {
	TArray<FVector4> FloatData; // 0x50
};

struct UBTTask_GameplayTaskBase : UBTTaskNode {
	char bWaitForGameplayTask : 1; // 0x70
};

struct UMaterialExpressionDotProduct : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
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

struct UMODamageVingette : UMOUserWidget {
	UImage* pImageVingette; // 0x2c8
};

struct USoundSubmixWithParentBase : USoundSubmixBase {
	USoundSubmixBase* ParentSubmix; // 0x38
};

struct UMaterialExpressionVirtualTextureFeatureSwitch : UMaterialExpression {
	FExpressionInput No; // 0x40
	FExpressionInput Yes; // 0x54
};

struct UMOAnimationInstancePlayerUndead : UMOAnimationInstancePlayer {
	float TurnWhileMovingAngle; // 0x690
	float RollWhileMovingAngle; // 0x694
	FRotator PelvisWhileMovingRotator; // 0x698
	FVector PelvisWhileMovingTranslation; // 0x6a4
};

struct UEditableGameplayTagQueryExpression_NoExprMatch : UEditableGameplayTagQueryExpression {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
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

struct UMOPetsAll : UMOUserWidget {
	UMOPets* pMOPets; // 0x2c8
	UMOScrollBox* pMOScrollBox_Pets; // 0x2d0
	UTextBlock* pTextBlockPetPoints; // 0x2d8
	UTextBlock* pTextBlockPetPointsMax; // 0x2e0
	UMOButtonPetSkillWidget* pMOButtonPetSkill_Attack; // 0x2e8
	UMOButtonPetSkillWidget* pMOButtonPetSkill_Follow; // 0x2f0
	UMOButtonPetSkillWidget* pMOButtonPetSkill_Stay; // 0x2f8
	UMOButtonPetSkillWidget* pMOButtonPetSkill_PetBags; // 0x300
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

struct UMovieSceneEasingExternalCurve : UObject {
	UCurveFloat* Curve; // 0x30
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

struct UMaterialExpressionMaterialFunctionCall : UMaterialExpression {
	UMaterialFunctionInterface* MaterialFunction; // 0x40
	FMaterialParameterInfo FunctionParameterInfo; // 0x48
};

struct UWB_TabManager_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UMOWidgetBlueprint* WidgetReference; // 0x268
	TArray<UWB_TabButton_C*> TabButtonArray; // 0x270
	UWidgetSwitcher* WidgetSwitcher; // 0x280
};

struct AMOGameModeMenu : AGameModeBase {
	UMOLoginHUD* pLoginHUD; // 0x2c0
	FString sAvatarName; // 0x2c8
	FString sAvatarData; // 0x2d8
};

struct UDatasmithMaterialInstanceTemplate : UDatasmithObjectTemplate {
	TSoftObjectPtr<UMaterialInterface> ParentMaterial; // 0x30
	TMap<FName, float> ScalarParameterValues; // 0x58
	TMap<FName, FLinearColor> VectorParameterValues; // 0xa8
	TMap<FName, TSoftObjectPtr<UTexture>> TextureParameterValues; // 0xf8
	FDatasmithStaticParameterSetTemplate StaticParameters; // 0x148
};

struct UEditableTextBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x30
};

struct UMaterialExpressionStep : UMaterialExpression {
	FExpressionInput Y; // 0x40
	FExpressionInput X; // 0x54
	float ConstY; // 0x68
	float ConstX; // 0x6c
};

struct UMovieScenePropertyTrack : UMovieSceneNameableTrack {
	UMovieSceneSection* SectionToKey; // 0x78
	FMovieScenePropertyBinding PropertyBinding; // 0x80
	TArray<UMovieSceneSection*> Sections; // 0x98
};

struct UWB_MOCarouselSelectValue_C : UMOCarouselSelectValue {
	FPointerToUberGraphFrame UberGraphFrame; // 0x350
	UWidgetAnimation* pChangedValue; // 0x358
	UCanvasPanel* CanvasPanel_1; // 0x360
	UImage* pIconImage; // 0x368
	UWB_RingFlare_C* WB_RingFlare; // 0x370
	UTexture2D* pIconTexture; // 0x378
};

struct ULiveLinkAnimationVirtualSubject : ULiveLinkVirtualSubject {
	bool bAppendSubjectNameToBones; // 0xd9
};

struct ULiveLinkAnimationRoleToTransform : ULiveLinkFrameTranslator {
	FName BoneName; // 0x28
};

struct UAISense_Damage : UAISense {
	TArray<FAIDamageEvent> RegisteredEvents; // 0x80
};

struct UMOPerformanceStatsOverlay : UMOUserWidget {
	UTextBlock* pFPSTitle; // 0x2c8
	float SmoothedFPS; // 0x2d0
	float TextUpdateTimer; // 0x2d4
};

struct APlayerState : AInfo {
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

struct UDistributionFloat : UDistribution {
	char bCanBeBaked : 1; // 0x30
	char bBakedDataSuccesfully : 1; // 0x30
};

struct UMaterialExpressionQualitySwitch : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput Inputs[0x4]; // 0x54
};

struct UAsyncActionHandleSaveGame : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate Completed; // 0x30
	USaveGame* SaveGameObject; // 0x60
};

struct AMaterialInstanceActor : AActor {
	TArray<AActor*> TargetActors; // 0x220
};

struct UARObjectComponent : UARComponent {
	FARObjectUpdatePayload ReplicatedPayload; // 0x280
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

struct UMOLoadingSubsystem : UMOGameInstanceSubsystemBase {
	FString sCharacterName; // 0x40
	UMOUserWidgetLoadingScreen* pLoadingWidget; // 0x50
	UMOUserWidgetLoadingScreen* pLoadingWidgetClass; // 0x58
};

struct ASkyLight : AInfo {
	USkyLightComponent* LightComponent; // 0x220
	char bEnabled : 1; // 0x228
};

struct UCameraModifier_CameraShake : UCameraModifier {
	TArray<FActiveCameraShakeInfo> ActiveShakes; // 0x48
	TMap<UCameraShakeBase*, FPooledCameraShakes> ExpiredPooledShakesMap; // 0x58
	float SplitScreenShakeScale; // 0xa8
};

struct UMOSpellbookSpellList : UMOWidgetBlueprint {
	UUserWidget* cSpellIconWidgetClass; // 0x260
	UTextBlock* pTextBlockSchool; // 0x268
	UUniformGridPanel* pUniformGridPanelSpells; // 0x270
	EMagicSchools eMagicSchool; // 0x278
};

struct UParticleModuleAccelerationOverLifetime : UParticleModuleAccelerationBase {
	FRawDistributionVector AccelOverLife; // 0x38
};

struct UAsyncActionLoadPrimaryAsset : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78
};

struct ULevelSequencePlayer : UMovieSceneSequencePlayer {
	FMulticastInlineDelegate OnCameraCut; // 0x680
};

struct UWB_MOCharCreationColorEntry_C : UMOCharCreationColorEntry {
	UImage* pImageBG; // 0x308
};

struct UMaterialExpressionBlackBody : UMaterialExpression {
	FExpressionInput Temp; // 0x40
};

struct UMOComboBoxStringEntry : UMOOptionsEntry {
	UMOComboBoxString* pMOComboBoxString; // 0x318
	TArray<FString> vGenerateComboBoxStringOptions; // 0x320
};

struct UMaterialExpressionStaticBoolParameter : UMaterialExpressionParameter {
	char DefaultValue : 1; // 0x58
};

struct ULevelActorContainer : UObject {
	TArray<AActor*> Actors; // 0x28
};

struct USoundNodeSoundClass : USoundNode {
	USoundClass* SoundClassOverride; // 0x48
};

struct UMaterialExpressionOneMinus : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UMaterialExpressionLogarithm2 : UMaterialExpression {
	FExpressionInput X; // 0x40
};

struct UMovieScenePrimitiveMaterialTrack : UMovieScenePropertyTrack {
	int32_t MaterialIndex; // 0xb0
};

struct UImage : UWidget {
	FSlateBrush Brush; // 0x108
	FDelegate BrushDelegate; // 0x190
	FLinearColor ColorAndOpacity; // 0x1a0
	FDelegate ColorAndOpacityDelegate; // 0x1b0
	bool bFlipForRightToLeftFlowDirection; // 0x1c0
	FDelegate OnMouseButtonDownEvent; // 0x1c4
};

struct UDatasmithStaticMeshTemplate : UDatasmithObjectTemplate {
	FDatasmithMeshSectionInfoMapTemplate SectionInfoMap; // 0x30
	int32_t LightMapCoordinateIndex; // 0x80
	int32_t LightMapResolution; // 0x84
	TArray<FDatasmithMeshBuildSettingsTemplate> BuildSettings; // 0x88
	TArray<FDatasmithStaticMaterialTemplate> StaticMaterials; // 0x98
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

struct UCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
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

struct UMODragDropOperationWindow : UMODragDropOperation {
	UUserWidget* pWidgetRef; // 0x88
	FVector2D vMousePosition; // 0x90
};

struct UAnimNotifyState_TimedNiagaraEffect : UAnimNotifyState {
	UNiagaraSystem* Template; // 0x30
	FName SocketName; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	bool bDestroyAtEnd; // 0x58
};

struct UWidgetAnimationPlayCallbackProxy : UObject {
	FMulticastInlineDelegate Finished; // 0x28
};

struct AMOCharacterAIGeneratedVendor : AMOCharacterAIGenerated {
	USoundCue* pOpenVendorMale; // 0xf98
	USoundCue* pCloseVendorMale; // 0xfa0
	USoundCue* pRefuseVendorMale; // 0xfa8
	USoundCue* pAcceptVendorMale; // 0xfb0
	USoundCue* pOpenVendorFemale; // 0xfb8
	USoundCue* pCloseVendorFemale; // 0xfc0
	USoundCue* pRefuseVendorFemale; // 0xfc8
	USoundCue* pAcceptVendorFemale; // 0xfd0
	USoundCue* pShoutOutVendorMale; // 0xfd8
	USoundCue* pShoutOutVendorFemale; // 0xfe0
};

struct UMOUserWidgetOptionsGameplay : UMOUserWidgetOptionsPanel {
	TArray<UMOCheckBoxEntry*> vCheckBoxEntries; // 0x2d0
	UMOCheckBoxEntry* pMOCheckBox_InvertCameraXAxis; // 0x2e0
	UMOCheckBoxEntry* pMOCheckBox_InvertCameraYAxis; // 0x2e8
	UMOCheckBoxEntry* pMOCheckBox_InvertAltAttack; // 0x2f0
	UMOCheckBoxEntry* pMOCheckBox_AimWithArrowTip; // 0x2f8
	UMOCheckBoxEntry* pMOCheckBox_InvertAttackDirectionHorizontal; // 0x300
	UMOCheckBoxEntry* pMOCheckBox_InvertAttackDirectionVertical; // 0x308
	UMOCheckBoxEntry* pMOCheckBox_AttackModifierOverride; // 0x310
	UMOCheckBoxEntry* pMOCheckBox_CanBecomeCriminal; // 0x318
	TArray<UMOComboBoxStringEntry*> vComboBoxEntries; // 0x320
	UMOComboBoxStringEntry* pMOComboBox_AttackStyle; // 0x330
	UMOComboBoxStringEntry* pMOComboBox_BlockStyle; // 0x338
	TArray<UMOOptionSliderWidget*> vSliderEntries; // 0x340
	UMOOptionSliderWidget* pOptionsSlider_MouseSensitivity; // 0x350
	UMOOptionSliderWidget* pOptionsSlider_ClickDragSensitivity; // 0x358
	UMOOptionSliderWidget* pOptionsSlider_DragClickSensitivity; // 0x360
};

struct UMaterialExpressionCeil : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct USkeletalMeshSimplificationSettings : UDeveloperSettings {
	FName SkeletalMeshReductionModuleName; // 0x38
};

struct UGameplayTask_WaitDelay : UGameplayTask {
	FMulticastInlineDelegate OnFinish; // 0x68
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

struct UParticleModuleParameterDynamic : UParticleModuleParameterBase {
	TArray<FEmitterDynamicParameter> DynamicParams; // 0x30
	int32_t UpdateFlags; // 0x40
	char bUsesVelocity : 1; // 0x44
};

struct UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
};

struct ANiagaraActor : AActor {
	UNiagaraComponent* NiagaraComponent; // 0x220
	char bDestroyOnSystemFinish : 1; // 0x228
};

struct UInterpTrackColorProp : UInterpTrackVectorBase {
	FName PropertyName; // 0x90
};

struct UOnsetNRT : UAudioSynesthesiaNRT {
	UOnsetNRTSettings* Settings; // 0x78
};

struct UOceanCollisionComponent : UPrimitiveComponent {
	UBodySetup* CachedBodySetup; // 0x440
};

struct AMOActorCraftingPreview : AActor {
	AMOEquipmentActorWeapon* pEquipmentActorMelee; // 0x220
	AMOEquipmentActorShield* pEquipmentActorShield; // 0x228
	AMOEquipmentActorBow* pEquipmentActorBow; // 0x230
	AMOEquipmentActorArmor* pEquipmentActorArmor; // 0x238
	AMOEquipmentActorPetEquipment* pEquipmentActorPetEquipment; // 0x240
	float fFOVTarget; // 0x248
	TArray<ASpotLight*> vLights; // 0x250
	AMOSceneCapture2D* pSceneCaptureActor; // 0x260
	USkeletalMeshComponent* pBodyComponent; // 0x268
};

struct UMOSkillsTreeSkillIcons : UMOWidgetBlueprint {
	UMOButtonSkillWidget* cSkillsIconClass; // 0x260
	UGridPanel* pGridPanel; // 0x268
};

struct UBTDecorator : UBTAuxiliaryNode {
	char bInverseCondition : 1; // 0x60
	EBTFlowAbortMode FlowAbortMode; // 0x64
};

struct UMOAnimationInstancePlayerHead : UAnimInstance {
	USkeletalMeshComponent* CopyPoseSourceMesh; // 0x2c0
	UPoseAsset* PoseAsset; // 0x2c8
	UPoseAsset* ARKitPoses; // 0x2d0
	UPoseAsset* CustomizationShapes; // 0x2d8
	bool bEnableARKitFaceCapture; // 0x2e0
	TMap<FName, FMOSingleCurveRange> FaceCustomizationShapeSingleCurves; // 0x2e8
	TMap<FName, FMODualCurveRange> FaceCustomizationShapeDualCurves; // 0x338
	TArray<FNamedCurveValue> ARKitCurves; // 0x388
	float LookAtAlpha; // 0x398
	FVector LookAtWorldPosition; // 0x39c
	bool bEnableLookAt; // 0x3a8
	int32_t IdleRandomSeed; // 0x3ac
	bool bTickHighDetailAnimation; // 0x3b0
	bool bTickHighDetailAnimation_BodyPhysics; // 0x3b1
	bool bHideEars; // 0x3b2
	float HideEarsAlpha; // 0x3b4
	bool bAnyFaceCustomizationCurveChanged; // 0x3b8
	int32_t LastFaceCustomizationDataHash; // 0x3bc
	bool bARKitCurvesUpdated; // 0x3c0
	FName LiveLinkSubjectName; // 0x3c4
};

struct UAISenseConfig_Hearing : UAISenseConfig {
	UAISense_Hearing* Implementation; // 0x48
	float HearingRange; // 0x50
	float LoSHearingRange; // 0x54
	char bUseLoSHearing : 1; // 0x58
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x5c
};

struct AWaterBodyLake : AWaterBody {
	ULakeGenerator* LakeGenerator; // 0xdd0
};

struct UPawnAction_Repeat : UPawnAction {
	UPawnAction* ActionToRepeat; // 0x98
	UPawnAction* RecentActionCopy; // 0xa0
	EPawnActionFailHandling ChildFailureHandlingMode; // 0xa8
};

struct UCustomMeshGenerator : UWaterBodyGenerator {
	UStaticMeshComponent* MeshComp; // 0x28
};

struct UUMGSequencePlayer : UObject {
	UWidgetAnimation* Animation; // 0x410
	FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x420
};

struct UMOUserWidgetTabButton : UMOUserWidget {
	UMOCheckBox* pMOCheckBox; // 0x2c8
};

struct UMOAnimationInstancePlayer : UMOAnimationInstance {
	float HeadLookatAlpha; // 0x530
	float EyeLookAtAlpha; // 0x534
	bool bSwimForward; // 0x538
	bool bSwimLeft; // 0x539
	bool bSwimRight; // 0x53a
	bool bSwimBackward; // 0x53b
	UMODataAssetPlayerBaseDefinition* ActivePlayerDefinition; // 0x540
	UCurveFloat* pHeadScaleByHeightCurve; // 0x558
	bool bMale; // 0x560
	ESpecies ESpecies; // 0x561
	float fDefinitionPenisScale; // 0x564
	float HelmetHideEarsValue; // 0x568
	FVector HeadScale; // 0x56c
	FVector PenisScale; // 0x578
	float BreastsSimulationAlpha; // 0x584
	FMOCharacterBodyShape BodyShape; // 0x588
	FMOTransformTweener FirstPersonTakeHitTweener; // 0x5a0
	FVector vFirstPersonHandOffsetLocation; // 0x608
	FRotator rFirstPersonHandOffsetRotation; // 0x614
	float HandMovementLagMultiplier; // 0x620
	float HandMovementSwayHorizontalMultiplier; // 0x624
	float HandMovementSwayVerticalMultiplier; // 0x628
	float HandMovementSwayRotationDegrees; // 0x62c
	float HandMovementTurnSwayHorizontalMultiplier; // 0x630
	float HandMovementTurnSwayVerticalMultiplier; // 0x634
	float HandMovementDuringChargeMultiplier; // 0x638
	float HandBreathSwayAmplitude; // 0x63c
	float fMovementSyncNormalizedTime; // 0x640
	UMODataAssetWeaponAnimations* DefaultWeaponAnimationSet; // 0x648
	UMODataAssetWeaponAnimations* ActiveWeaponAnimationSet; // 0x650
	float CombatAnimSequence_WalkBaseSpeed; // 0x658
	float CombatAnimSequence_RunBaseSpeed; // 0x65c
	float CombatAnimSequence_SprintBaseSpeed; // 0x660
	FRotator Mounted_BalanceAdjustment_Rotator; // 0x664
	float fAnimCurveLocksPositionFactor; // 0x670
	float fAnimCurveLocksRotationFactor; // 0x674
	float SwingYawOffset; // 0x678
	bool bUseStrongAimOffset; // 0x67c
	bool bUseExactSwingAimOffset; // 0x67d
	bool bUseCombatAimOffset; // 0x67e
	bool bUseEmoteStrongAimOffset; // 0x67f
	bool bUseExactAimDuringCharge; // 0x680
	bool bUseCombatLocomotionSequences; // 0x681
	float CameraStabilization; // 0x684
	bool bPlayerInputAnyMove; // 0x688
	bool bPlayerInputWalk; // 0x689
	bool bPlayerInputRun; // 0x68a
	bool bPlayerInputSprint; // 0x68b
	bool bBlendUpperBody; // 0x68c
	bool bUseLocomotionOnUpperBody; // 0x68d
};

struct UParticleModuleVectorFieldRotation : UParticleModuleVectorFieldBase {
	FVector MinInitialRotation; // 0x30
	FVector MaxInitialRotation; // 0x3c
};

struct ANavLinkProxy : AActor {
	TArray<FNavigationLink> PointLinks; // 0x230
	TArray<FNavigationSegmentLink> SegmentLinks; // 0x240
	UNavLinkCustomComponent* SmartLinkComp; // 0x250
	bool bSmartLinkIsRelevant; // 0x258
	FMulticastInlineDelegate OnSmartLinkReached; // 0x260
};

struct UMODataAssetSkillAnimationDefinitions : UPrimaryDataAsset {
	TMap<SkillAnimation, UMODataAssetSkillAnimationBaseDefinition*> pSharedSkillAnimations; // 0x30
	TMap<SkillAnimation, UMODataAssetSkillAnimationBaseDefinition*> pSharedSkillAnimationsHuman; // 0x80
	TMap<SkillAnimation, UMODataAssetSkillAnimationBaseDefinition*> pSharedSkillAnimationsAlvarin; // 0xd0
	TMap<SkillAnimation, UMODataAssetSkillAnimationBaseDefinition*> pSharedSkillAnimationsOghmir; // 0x120
	TMap<SkillAnimation, UMODataAssetSkillAnimationBaseDefinition*> pSharedSkillAnimationsThursar; // 0x170
};

struct UAnimationSharingManager : UObject {
	TArray<USkeleton*> Skeletons; // 0x28
	TArray<UAnimSharingInstance*> PerSkeletonData; // 0x38
};

struct UBreakpoint : UObject {
	char bEnabled : 1; // 0x28
	UEdGraphNode* Node; // 0x30
	char bStepOnce : 1; // 0x38
	char bStepOnce_WasPreviouslyDisabled : 1; // 0x38
	char bStepOnce_RemoveAfterHit : 1; // 0x38
};

struct UMaterialExpressionPerInstanceCustomData : UMaterialExpression {
	FExpressionInput DefaultValue; // 0x40
	float ConstDefaultValue; // 0x54
	uint32_t DataIndex; // 0x58
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

struct UParticleModuleRotation : UParticleModuleRotationBase {
	FRawDistributionFloat StartRotation; // 0x30
};

struct UTileView : UListView {
	float EntryHeight; // 0x368
	float EntryWidth; // 0x36c
	EListItemAlignment TileAlignment; // 0x370
	bool bWrapHorizontalNavigation; // 0x371
};

struct UPlatformEventsComponent : UActorComponent {
	FMulticastInlineDelegate PlatformChangedToLaptopModeDelegate; // 0xb0
	FMulticastInlineDelegate PlatformChangedToTabletModeDelegate; // 0xc0
};

struct UMOJournalGroupEntry : UMOUserWidget {
	UVerticalBox* pVerticalBox; // 0x2c8
	UTextBlock* pTitleText; // 0x2d0
	UTextBlock* pTotalEntriesText; // 0x2d8
	UMOButton* pMOButton; // 0x2e0
	UHorizontalBox* pHorizontalBoxParent; // 0x2e8
	int32_t iTotalEntries; // 0x2f0
};

struct UTextureRenderTargetCube : UTextureRenderTarget {
	int32_t SizeX; // 0xe0
	FLinearColor ClearColor; // 0xe4
	EPixelFormat OverrideFormat; // 0xf4
	char bHDR : 1; // 0xf5
	char bForceLinearGamma : 1; // 0xf5
};

struct UAnimCurveCompressionSettings : UObject {
	UAnimCurveCompressionCodec* Codec; // 0x28
};

struct UBTService_DefaultFocus : UBTService_BlackboardBase {
	char FocusPriority; // 0x98
};

struct UInterpCurveEdSetup : UObject {
	TArray<FCurveEdTab> Tabs; // 0x28
	int32_t ActiveTab; // 0x38
};

struct ULightMapVirtualTexture2D : UTexture2D {
	TArray<int8_t> TypeToLayer; // 0x100
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

struct UMOPaperdollTitles : UMOWidgetBlueprint {
	UMOScrollBox* pMOScrollBoxTitlesToEarn; // 0x260
	UMOScrollBox* pMOScrollBoxTitlesEarned; // 0x268
	UMOScrollBox* pMOScrollBoxTitlesHidden; // 0x270
	UMOCharacterTitleListEntry* cCharacterTitleEntryClass; // 0x278
	UMOCharacterTitleListEntry* pLastTitleSelected; // 0x280
};

struct UGameplayTask : UObject {
	FName InstanceName; // 0x30
	ETaskResourceOverlapPolicy ResourceOverlapPolicy; // 0x3a
	UGameplayTask* ChildTask; // 0x60
};

struct UMOButtonPetSkillWidget : UMOUserWidget {
	UMOButtonPetSkill* pButton; // 0x2c8
};

struct AMOGameMode : AGameModeBase {
	TSoftObjectPtr<USoundCue> pSoundCue_AmbientSound; // 0x2e8
	TSoftObjectPtr<USoundMix> pSoundMix_Ether; // 0x310
	TSoftObjectPtr<UNiagaraSystem> pParticleSystem_EtherBodyClient; // 0x338
	TSoftObjectPtr<UNiagaraSystem> pParticleSystem_Ambient; // 0x360
	TSoftObjectPtr<UTexture> pEtherworldLUT; // 0x388
	TSoftClassPtr<UObject> cNavigationBeamPriestClass; // 0x3b0
	TArray<TSoftObjectPtr<UWorld>> GlobalSublevels; // 0x3d8
	UMOGlobalActorManager* pGlobalActorManager; // 0x3e8
	UMOChatManager* pChatManager; // 0x3f0
	UMOWeatherManager* pWeatherManager; // 0x3f8
	UMOSocialManager* pSocialManager; // 0x400
	UMOPetManager* pPetManager; // 0x408
	UMOPassiveStatIncreaseManager* pPassiveStatIncreaseManager; // 0x410
	TArray<FText> vNationNames; // 0x418
};

struct UMaterialExpressionSine : UMaterialExpression {
	FExpressionInput Input; // 0x40
	float Period; // 0x54
};

struct UProceduralFoliageComponent : UActorComponent {
	UProceduralFoliageSpawner* FoliageSpawner; // 0xb0
	float TileOverlap; // 0xb8
	AVolume* SpawningVolume; // 0xc0
	FGuid ProceduralGuid; // 0xc8
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

struct UMovieSceneByteSection : UMovieSceneSection {
	FMovieSceneByteChannel ByteCurve; // 0xe8
};

struct UMaterialFunctionInterface : UObject {
	FGuid StateId; // 0x28
	EMaterialFunctionUsage MaterialFunctionUsage; // 0x38
};

struct ULiveLinkVirtualSubject : UObject {
	ULiveLinkRole* Role; // 0x30
	TArray<FLiveLinkSubjectName> Subjects; // 0x38
	TArray<ULiveLinkFrameTranslator*> FrameTranslators; // 0x48
};

struct UMovieSceneSequence : UMovieSceneSignedObject {
	UMovieSceneCompiledData* CompiledData; // 0x50
	EMovieSceneCompletionMode DefaultCompletionMode; // 0x58
	bool bParentContextsAreSignificant; // 0x59
	bool bPlayableDirectly; // 0x5a
	EMovieSceneSequenceFlags SequenceFlags; // 0x5b
};

struct UDatasmithCineCameraActorTemplate : UDatasmithObjectTemplate {
	FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings; // 0x30
};

struct ULevelVariantSets : UObject {
	UObject* DirectorClass; // 0x28
	TArray<UVariantSet*> VariantSets; // 0x30
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

struct AMOEquipmentActorWeapon : AMOEquipmentActorTwoPart {
	FMOEquipmentActorWeaponData WeaponData; // 0x2c0
	UParticleSystemComponent* SwingTrailComponent; // 0x308
	UParticleSystemComponent* BloodTrailComponent; // 0x310
};

struct ALightmassPortal : AActor {
	ULightmassPortalComponent* PortalComponent; // 0x220
};

struct URadialVector : UFieldNodeVector {
	float Magnitude; // 0xb0
	FVector Position; // 0xb4
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

struct AOnlineBeaconHostObject : AActor {
	FString BeaconTypeName; // 0x220
	AOnlineBeaconClient* ClientBeaconActorClass; // 0x230
	TArray<AOnlineBeaconClient*> ClientActors; // 0x238
};

struct UCullingField : UFieldNodeBase {
	UFieldNodeBase* Culling; // 0xb0
	UFieldNodeBase* Field; // 0xb8
	EFieldCullingOperationType Operation; // 0xc0
};

struct UGizmoConstantFrameAxisSource : UObject {
	FVector Origin; // 0x30
	FVector Direction; // 0x3c
	FVector TangentX; // 0x48
	FVector TangentY; // 0x54
};

struct UMOActionBar : UMOUserWidget {
	TArray<UMOItemSlotActionbar*> vActionBarSlots; // 0x2c8
	UMOBorder* pBorder; // 0x2d8
	UUniformGridPanel* pSlotsPanel; // 0x2e0
	int32_t iActionBarID; // 0x2e8
	bool bHoveringIcon; // 0x2ec
	UWidgetAnimation* pFadeOutAnimation; // 0x2f0
};

struct UParticleModuleLocationPrimitiveCylinder : UParticleModuleLocationPrimitiveBase {
	char RadialVelocity : 1; // 0xb0
	FRawDistributionFloat StartRadius; // 0xb8
	FRawDistributionFloat StartHeight; // 0xe8
	CylinderHeightAxis HeightAxis; // 0x118
};

struct UMODamageDirectionIndcator : UMOUserWidget {
	UImage* pImageIndicator; // 0x2c8
	AActor* pDamageDealer; // 0x2d0
};

struct UMOAnimNotifyEquipWeapon : UMOAnimNotifyState {
	bool bEquip; // 0x30
	EHandSlot eEquipHand; // 0x31
};

struct UOculusHandComponent : UPoseableMeshComponent {
	EOculusHandType SkeletonType; // 0x7e8
	EOculusHandType MeshType; // 0x7e9
	EConfidenceBehavior ConfidenceBehavior; // 0x7ea
	ESystemGestureBehavior SystemGestureBehavior; // 0x7eb
	UMaterialInterface* SystemGestureMaterial; // 0x7f0
	bool bInitializePhysics; // 0x7f8
	bool bUpdateHandScale; // 0x7f9
	UMaterialInterface* MaterialOverride; // 0x800
	TMap<EBone, FName> BoneNameMappings; // 0x808
	TArray<FOculusCapsuleCollider> CollisionCapsules; // 0x858
	bool bSkeletalMeshInitialized; // 0x868
};

struct AOculusMR_CastingCameraActor : ASceneCapture2D {
	UVRNotificationsComponent* VRNotificationComponent; // 0x238
	UTexture2D* CameraColorTexture; // 0x240
	UTexture2D* CameraDepthTexture; // 0x248
	UOculusMR_PlaneMeshComponent* PlaneMeshComponent; // 0x250
	UMaterial* ChromaKeyMaterial; // 0x258
	UMaterial* OpaqueColoredMaterial; // 0x260
	UMaterialInstanceDynamic* ChromaKeyMaterialInstance; // 0x268
	UMaterialInstanceDynamic* CameraFrameMaterialInstance; // 0x270
	UMaterialInstanceDynamic* BackdropMaterialInstance; // 0x278
	UTexture2D* DefaultTexture_White; // 0x280
	TArray<UTextureRenderTarget2D*> BackgroundRenderTargets; // 0x2d8
	ASceneCapture2D* ForegroundCaptureActor; // 0x2e8
	TArray<UTextureRenderTarget2D*> ForegroundRenderTargets; // 0x2f0
	TArray<double> PoseTimes; // 0x300
	UOculusMR_Settings* MRSettings; // 0x310
	UOculusMR_State* MRState; // 0x318
};

struct ULuminARLightEstimate : UARBasicLightEstimate {
	TArray<float> AmbientIntensityNits; // 0x40
};

struct UObjectLibrary : UObject {
	UObject* ObjectBaseClass; // 0x28
	bool bHasBlueprintClasses; // 0x30
	TArray<UObject*> Objects; // 0x38
	TArray<TWeakObjectPtr<UObject>> WeakObjects; // 0x48
	bool bUseWeakReferences; // 0x58
	bool bIsFullyLoaded; // 0x59
};

struct UMovieSceneNiagaraTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
};

struct UMagicLeapLightingTrackingComponent : UActorComponent {
	bool UseGlobalAmbience; // 0xb0
	bool UseColorTemp; // 0xb1
};

struct UParticleModuleRotationRateMultiplyLife : UParticleModuleRotationRateBase {
	FRawDistributionFloat LifeMultiplier; // 0x30
};

struct UMOEditableTextBox : UEditableTextBox {
	int32_t iMaxCharacters; // 0xa58
	FString sValidChars; // 0xa60
};

struct UMOWorldMap : UMOUserWidget {
	UMOButtonSmall* pMOButtonMedium_TurnOver; // 0x2c8
};

struct ULandscapeSplinesComponent : UPrimitiveComponent {
	TArray<ULandscapeSplineControlPoint*> ControlPoints; // 0x440
	TArray<ULandscapeSplineSegment*> Segments; // 0x450
	TArray<UMeshComponent*> CookedForeignMeshComponents; // 0x460
};

struct UMOAnimNotifyStateHoldItem : UMOAnimNotifyState {
	EHandSlot Hand; // 0x30
	EMOAnimNotifyStateHoldItemState HoldState; // 0x31
};

struct UVariant : UObject {
	TArray<FVariantDependency> Dependencies; // 0x28
	FText DisplayText; // 0x38
	TArray<UVariantObjectBinding*> ObjectBindings; // 0x68
	UTexture2D* Thumbnail; // 0x78
};

struct UNiagaraEffectType : UObject {
	ENiagaraScalabilityUpdateFrequency UpdateFrequency; // 0x28
	ENiagaraCullReaction CullReaction; // 0x2c
	UNiagaraSignificanceHandler* SignificanceHandler; // 0x30
	TArray<FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings; // 0x38
	FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings; // 0x48
	FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings; // 0x58
};

struct UMovieSceneCameraCutSection : UMovieSceneSection {
	bool bLockPreviousCamera; // 0xf0
	FGuid CameraGuid; // 0xf4
	FMovieSceneObjectBindingID CameraBindingID; // 0x104
	FTransform InitialCameraCutTransform; // 0x120
	bool bHasInitialCameraCutTransform; // 0x150
};

struct UPrimaryAssetLabel : UPrimaryDataAsset {
	FPrimaryAssetRules Rules; // 0x30
	char bLabelAssetsInMyDirectory : 1; // 0x3c
	char bIsRuntimeLabel : 1; // 0x3c
	TArray<TSoftObjectPtr<UObject>> ExplicitAssets; // 0x40
	TArray<TSoftClassPtr<UObject>> ExplicitBlueprints; // 0x50
	FCollectionReference AssetCollection; // 0x60
};

struct UBlackboardKeyType_String : UBlackboardKeyType {
	FString StringValue; // 0x30
};

struct UMOButtonShortcuts : UMOUserWidget {
	UMOButton* pInventory; // 0x2c8
	UMOButton* pCharacterSheet; // 0x2d0
	UMOButton* pSocial; // 0x2d8
	UMOButton* pSkills; // 0x2e0
	UMOButton* pPets; // 0x2e8
	UMOButton* pSpellBook; // 0x2f0
	FString pInventoryHotkey; // 0x2f8
	FString pCharacterSheetHotkey; // 0x308
	FString pSocialHotkey; // 0x318
	FString pSkillsHotkey; // 0x328
	FString pPetsHotkey; // 0x338
	FString pSpellBookHotkey; // 0x348
};

struct UMODataAssetPetEquipment : UMODataAssetEquipmentShared {
	EPetEquipmentType ArmorPartType; // 0x308
	TSoftObjectPtr<USkeletalMesh> pSkeletalMesh; // 0x310
	TSoftClassPtr<UObject> pAnimInstance; // 0x338
	int32_t iMaterialSlot; // 0x360
	FText sDisplayName; // 0x368
	UTexture2D* pIcon; // 0x380
	TSoftObjectPtr<USoundCue> pFootstepSound; // 0x388
	TSoftObjectPtr<USoundCue> pJumpSound; // 0x3b0
	TSoftObjectPtr<USoundCue> pLandingSound; // 0x3d8
	TSoftObjectPtr<USoundCue> pEquipSound; // 0x400
	TArray<FSocketEmitterPair> vSocketEmitterPairs; // 0x428
	TArray<FSocketSoundPair> vSocketSoundPairs; // 0x438
};

struct UInterpTrackInstProperty : UInterpTrackInst {
	TFieldPath<FProperty> InterpProperty; // 0x28
	UObject* PropertyOuterObjectInst; // 0x48
};

struct USoundNodeAttenuation : USoundNode {
	USoundAttenuation* AttenuationSettings; // 0x48
	FSoundAttenuationSettings AttenuationOverrides; // 0x50
	char bOverrideAttenuation : 1; // 0x3f0
};

struct UMOEngineSubsystem : UEngineSubsystem {
	bool bAtlasIsInitialized; // 0x58
	bool bIsShuttingDown; // 0x59
	AMOGameMode* pPIEGameMode; // 0x60
	bool bIsPlayInEditor; // 0x68
	bool bStandaloneDevAutoLogin; // 0x69
	bool bPIEAutoLogin; // 0x6a
	int32_t PIEAutoLoginUsernameId; // 0x6c
	bool bPIEStartAtEditorCameraLocation; // 0x70
	FString PIEDevEntryServer; // 0x78
	FString PIEMyrlandServer; // 0x88
	int32_t LoginServerListEntryId; // 0x98
	UDataTable* pDataTableContentInfoStaticMeshes; // 0xf0
	UDataTable* pDataTableContentInfoSkeletalMeshes; // 0xf8
	UDataTable* pDataTableContentInfoIcons; // 0x100
	UDataTable* pDataTableContentInfoSkills; // 0x108
	UDataTable* pDataTableAIAttackDefinitions; // 0x110
	UDataTable* pDataTableAIEffectDefinitions; // 0x118
	UDataTable* pDataTablePlaceablePreview; // 0x120
	UDataTable* pDataTableFish; // 0x128
	AMOPlayerController* pPlayerController; // 0x138
	UMOGameInstance* pGameInstance; // 0x140
	TArray<AMOCrossNodeActor*> vCrossNodeActors; // 0x188
};

struct UWB_DragDropVisual_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* InAnim; // 0x268
	UImage* pImage; // 0x270
	UMaterialInstance* pMaterialInstance; // 0x278
};

struct USoundNodeSwitch : USoundNode {
	FName IntParameterName; // 0x48
};

struct UMovieSceneEnumSection : UMovieSceneSection {
	FMovieSceneByteChannel EnumCurve; // 0xe8
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

struct UTextPropertyTestObject : UObject {
	FText DefaultedText; // 0x28
	FText UndefaultedText; // 0x40
	FText TransientText; // 0x58
};

struct UMovieSceneComponentMaterialTrack : UMovieSceneMaterialTrack {
	int32_t MaterialIndex; // 0x90
};

struct UDrawFrustumComponent : UPrimitiveComponent {
	FColor FrustumColor; // 0x440
	float FrustumAngle; // 0x444
	float FrustumAspectRatio; // 0x448
	float FrustumStartDist; // 0x44c
	float FrustumEndDist; // 0x450
	UTexture* Texture; // 0x458
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

struct UGeometryCacheTrack : UObject {
	float Duration; // 0x28
};

struct UMaterialExpressionGetMaterialAttributes : UMaterialExpression {
	FMaterialAttributesInput MaterialAttributes; // 0x40
	TArray<FGuid> AttributeGetTypes; // 0x58
};

struct UComboBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FComboBoxStyle ComboBoxStyle; // 0x30
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

struct UBoneMaskFilter : UObject {
	TArray<FInputBlendPose> BlendPoses; // 0x28
};

struct UParticleModuleLocationEmitter : UParticleModuleLocationBase {
	FName EmitterName; // 0x30
	ELocationEmitterSelectionMethod SelectionMethod; // 0x38
	char InheritSourceVelocity : 1; // 0x3c
	float InheritSourceVelocityScale; // 0x40
	char bInheritSourceRotation : 1; // 0x44
	float InheritSourceRotationScale; // 0x48
};

struct UARTrackedQRCode : UARTrackedImage {
	FString QRCode; // 0x108
	int32_t Version; // 0x118
};

struct UGridSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
	int32_t Row; // 0x4c
	int32_t RowSpan; // 0x50
	int32_t column; // 0x54
	int32_t ColumnSpan; // 0x58
	int32_t Layer; // 0x5c
	FVector2D Nudge; // 0x60
};

struct UImgMediaSource : UBaseMediaSource {
	FFrameRate FrameRateOverride; // 0x88
	FString ProxyOverride; // 0x90
	FDirectoryPath SequencePath; // 0xa0
};

struct UMOColorPicker : UMOUserWidget {
	FColor currentColor; // 0x2c8
	UImage* pPreviewImage; // 0x2d0
	UMOSlider* pMOSlider_Red; // 0x2d8
	UMOSlider* pMOSlider_Green; // 0x2e0
	UMOSlider* pMOSlider_Blue; // 0x2e8
	UMOButton* pMOButton_Accept; // 0x2f0
	UMOButton* pMOButton_Cancel; // 0x2f8
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

struct UInterpGroupInst : UObject {
	UInterpGroup* Group; // 0x28
	AActor* GroupActor; // 0x30
	TArray<UInterpTrackInst*> TrackInst; // 0x38
};

struct UMovieSceneNiagaraParameterTrack : UMovieSceneNiagaraTrack {
	FNiagaraVariable Parameter; // 0x88
};

struct UMOJournalEntry : UMOUserWidget {
	FMOJournalTableRow sJournalTableRow; // 0x2d8
	UImage* pIcon; // 0x338
	UImage* pSelectedBG; // 0x340
	UTextBlock* pTitleText; // 0x348
	UMOButton* pMOButton; // 0x350
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

struct UMOCharCreationInfoEntry : UMOUserWidget {
	int32_t iEntryIndex; // 0x2c8
	UTextBlock* pDisplayText; // 0x2d0
	UTextBlock* pValueText; // 0x2d8
	UTextBlock* pMaxValueText; // 0x2e0
	FText InitializeDisplayText; // 0x2e8
	FText InitializeToolTipText; // 0x300
	int32_t InitDisplayTextFontSize; // 0x318
	int32_t InitValueTextFontSize; // 0x31c
	int32_t iValue; // 0x320
	int32_t iMaxValue; // 0x324
};

struct UMOPreviewModePlacementUpgrade : UMOPreviewModePlacementHouse {
	AMOAvatarStaticMeshBuildable* pUpgradeTarget; // 0x150
};

struct UInterpTrackInstMove : UInterpTrackInst {
	FVector ResetLocation; // 0x28
	FRotator ResetRotation; // 0x34
};

struct UAsyncActionChangePrimaryAssetBundles : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UInterpTrackAnimControl : UInterpTrackFloatBase {
	FName SlotName; // 0x90
	TArray<FAnimControlTrackKey> AnimSeqs; // 0x98
	char bSkipAnimNotifiers : 1; // 0xa8
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

struct UMOPaperdoll : UMOUserWidget {
	UMOInfoEntryAttributeLock* pInfoEntry_Str; // 0x2c8
	UMOInfoEntryAttributeLock* pInfoEntry_Dex; // 0x2d0
	UMOInfoEntryAttributeLock* pInfoEntry_Int; // 0x2d8
	UMOInfoEntryAttributeLock* pInfoEntry_Psy; // 0x2e0
	UMOInfoEntryAttributeLock* pInfoEntry_Con; // 0x2e8
	UMOCharCreationInfoEntry* pInfoEntry_Size; // 0x2f0
	UMOCharCreationInfoEntry* pInfoEntry_AttributePoints; // 0x2f8
	UTextBlock* pCharacterTitle; // 0x300
	UMOCharCreationInfoEntry* pInfoEntry_Health; // 0x308
	UMOCharCreationInfoEntry* pInfoEntry_Stamina; // 0x310
	UMOCharCreationInfoEntry* pInfoEntry_Mana; // 0x318
	UMOItemSlotStatic* pItemSlotStatic_Book; // 0x320
	UTextBlock* pTextBlockAge; // 0x328
	UMOCharCreationInfoEntry* pInfoEntry_DamageBonus; // 0x330
	UTextBlock* pTextBlockWeight; // 0x338
	UMOCharCreationInfoEntry* pInfoEntry_Height; // 0x340
	UMOPaperdollStatistics* pPaperdollStatistics; // 0x348
	UMOPaperdollTitles* pPaperdollTitles; // 0x350
	UMOPaperdollCladeGifts* pPaperdollCladeGifts; // 0x358
	UMOButtonSmall* pMOButtonMedium_Home; // 0x360
	TMap<FString, UMOItemSlotPaperdoll*> vSlotMap; // 0x368
	AMOSceneCapture2D* pCaptureCamera; // 0x3b8
};

struct UMOAnimationInstancePostProcess : UAnimInstance {
	float PhysicsAlpha; // 0x2b8
};

struct UGameEngine : UEngine {
	float MaxDeltaTime; // 0xde0
	float ServerFlushLogInterval; // 0xde4
	UGameInstance* GameInstance; // 0xde8
};

struct UWB_MOCharCreationInfoEntryGreyValue_C : UMOCharCreationInfoEntry {
	FPointerToUberGraphFrame UberGraphFrame; // 0x328
	UWidgetAnimation* UpdateValue; // 0x330
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

struct UIpNetDriver : UNetDriver {
	char LogPortUnreach : 1; // 0x748
	char AllowPlayerPortUnreach : 1; // 0x748
	uint32_t MaxPortCountToTry; // 0x74c
	uint32_t ServerDesiredSocketReceiveBufferBytes; // 0x75c
	uint32_t ServerDesiredSocketSendBufferBytes; // 0x760
	uint32_t ClientDesiredSocketReceiveBufferBytes; // 0x764
	uint32_t ClientDesiredSocketSendBufferBytes; // 0x768
	double MaxSecondsInReceive; // 0x770
	int32_t NbPacketsBetweenReceiveTimeTest; // 0x778
	float ResolutionConnectionTimeout; // 0x77c
};

struct UMOButtonClose : UMOButton {
	USlateWidgetStyleAsset* CustomStyle; // 0x438
};

struct UMOCharacterCreation : UMOUserWidget {
	UTextBlock* pValidName; // 0x2c8
	UMOEditableTextBox* pFirstName; // 0x2d0
	UMOEditableTextBox* pLastName; // 0x2d8
	UMOUserWidgetCarouselSelect* pCarouselSelect_Gender; // 0x2e0
	UMOUserWidgetCarouselSelect* pCarouselSelect_Clade; // 0x2e8
	UMOUserWidgetCarouselSelect* pCarouselSelect_Race; // 0x2f0
	UMOUserWidgetCarouselSelect* pCarouselSelect_StartingLocation; // 0x2f8
	UMOUserWidgetCarouselSelect* pCarouselSelect_StartingEquipment; // 0x300
	UMOUserWidgetCarouselSelect* pCarouselSelect_Hair; // 0x308
	UMOUserWidgetCarouselSelect* pCarouselSelect_Beard; // 0x310
	UComboBoxString* pComboBoxString_StartingPoint; // 0x318
};

struct UMODataAssetArmorDefinitions : UPrimaryDataAsset {
	UMODataAssetEquipmentShared* pSharedData; // 0x30
	UMODataAssetArmor* pHelmetFallback; // 0x38
	UMODataAssetArmor* pTorsoFallback; // 0x40
	UMODataAssetArmor* pBackFallback; // 0x48
	UMODataAssetArmor* pLegFallback; // 0x50
	UMODataAssetArmor* pLeftArmFallback; // 0x58
	UMODataAssetArmor* pRightArmFallback; // 0x60
	UMODataAssetArmor* pMaleHumanHarnessTorso; // 0x68
	UMODataAssetArmor* pMaleHumanHarnessLegs; // 0x70
	TArray<UMODataAssetArmor*> vMaleHumanHelmetParts; // 0x78
	TArray<UMODataAssetArmor*> vMaleHumanTorsoParts; // 0x88
	TArray<UMODataAssetArmor*> vMaleHumanBackParts; // 0x98
	TArray<UMODataAssetArmor*> vMaleHumanLegParts; // 0xa8
	TArray<UMODataAssetArmor*> vMaleHumanLeftArmParts; // 0xb8
	TArray<UMODataAssetArmor*> vMaleHumanRightArmParts; // 0xc8
	UMODataAssetArmor* pFemaleHumanHarnessTorso; // 0xd8
	UMODataAssetArmor* pFemaleHumanHarnessLegs; // 0xe0
	TArray<UMODataAssetArmor*> vFemaleHumanHelmetParts; // 0xe8
	TArray<UMODataAssetArmor*> vFemaleHumanTorsoParts; // 0xf8
	TArray<UMODataAssetArmor*> vFemaleHumanBackParts; // 0x108
	TArray<UMODataAssetArmor*> vFemaleHumanLegParts; // 0x118
	TArray<UMODataAssetArmor*> vFemaleHumanLeftArmParts; // 0x128
	TArray<UMODataAssetArmor*> vFemaleHumanRightArmParts; // 0x138
	bool bArmorPartsArePreloaded; // 0x148
	TArray<USkeletalMesh*> pLoadedSkeletalMeshes; // 0x150
	TArray<UAnimInstance*> LoadedAnimInstances; // 0x160
	TArray<USoundCue*> LoadedSounds; // 0x170
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

struct UMaterialExpressionSkyAtmosphereLightIlluminance : UMaterialExpression {
	int32_t LightIndex; // 0x40
	FExpressionInput WorldPosition; // 0x44
};

struct UVectorField : UObject {
	FBox Bounds; // 0x28
	float Intensity; // 0x44
};

struct UMovieSceneMaterialParameterCollectionTrack : UMovieSceneMaterialTrack {
	UMaterialParameterCollection* MPC; // 0x90
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

struct UMovieSceneFolder : UObject {
	FName FolderName; // 0x28
	TArray<UMovieSceneFolder*> ChildFolders; // 0x30
	TArray<UMovieSceneTrack*> ChildMasterTracks; // 0x40
	TArray<FString> ChildObjectBindingStrings; // 0x50
};

struct ABP_AiEffectStoneThrow_C : AMOAiEffectActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	FVector vHitLocation; // 0x278
};

struct UMOCraftingMelee : UMOCrafting {
	UMOScrollBox* pScrollBox_Handle; // 0x310
	UMOScrollBox* pScrollBox_Head; // 0x318
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_HandleCoatingMaterial; // 0x320
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_HandleCoreMaterial; // 0x328
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_HeadMaterial; // 0x330
	UMaterialInstance* pPreviewMaterial; // 0x338
	FString sHandleName; // 0x340
	FString sHandleMaterialCoreName; // 0x350
	FString sHandleMaterialGripName; // 0x360
	FString sHeadName; // 0x370
	FString sHeadMaterialName; // 0x380
	TArray<FMeleeCraftingInfo_Head> vCraftingInfo_Head; // 0x398
	TArray<FMeleeCraftingInfo_Handle> vCraftingInfo_Handle; // 0x3a8
	TArray<UMOCraftingListEntry*> vCraftingHandleGroups; // 0x3b8
};

struct AMOEquipmentActorArrow : AMOEquipmentActorTwoPart {
	FMOEquipmentActorArrowData arrowData; // 0x2c0
	UParticleSystemComponent* FlyTrailComponent; // 0x2f0
	float MaxRangeForce; // 0x2f8
};

struct UMOTextBlock : UTextBlock {
	USlateWidgetStyleAsset* CustomStyle; // 0x2a8
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

struct UBTTask_RunBehaviorDynamic : UBTTaskNode {
	FGameplayTag InjectionTag; // 0x70
	UBehaviorTree* DefaultBehaviorAsset; // 0x78
	UBehaviorTree* BehaviorAsset; // 0x80
};

struct USphereComponent : UShapeComponent {
	float SphereRadius; // 0x458
};

struct UHLODProxy : UObject {
	TArray<FHLODProxyMesh> ProxyMeshes; // 0x28
	TMap<UHLODProxyDesc*, FHLODProxyMesh> HLODActors; // 0x38
};

struct UTcpMessagingSettings : UObject {
	bool EnableTransport; // 0x28
	FString ListenEndpoint; // 0x30
	TArray<FString> ConnectToEndpoints; // 0x40
	int32_t ConnectionRetryDelay; // 0x50
	bool bStopServiceWhenAppDeactivates; // 0x54
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

struct UEditableMesh : UObject {
	TArray<UEditableMeshAdapter*> Adapters; // 0x3b8
	int32_t TextureCoordinateCount; // 0x3d0
	int32_t PendingCompactCounter; // 0x51c
	int32_t SubdivisionCount; // 0x520
};

struct UWB_CharacterCreation_Head_3DSlider_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* BackgroundImageWidget; // 0x268
	UImage* BG_Fill; // 0x270
	UImage* BG_NoSlider; // 0x278
	UImage* BG_Slider; // 0x280
	UCanvasPanel* Canvas; // 0x288
	UImage* Controller; // 0x290
	UButton* ControllerArea; // 0x298
	UCanvasPanel* ControllerAreaCanvas; // 0x2a0
	UImage* LoopImg; // 0x2a8
	UMOButtonSmall* ResetButton; // 0x2b0
	UMOTextBlock_Base_Small_White_01* Title_Textblock; // 0x2b8
	UButton* ZArea; // 0x2c0
	UMOSlider* ZSlider; // 0x2c8
	bool bNeedsReinit; // 0x2d0
	bool bMouseDown; // 0x2d1
	FMulticastInlineDelegate On2DValueChanged; // 0x2d8
	FText Title; // 0x2e8
	FName CurveNameX; // 0x300
	FName CurveNameY; // 0x308
	FMulticastInlineDelegate OnZValueChanged; // 0x310
	FName CurveNameZ_Optional; // 0x320
	bool bUseZSlider; // 0x328
	bool bReverseX; // 0x329
	bool bReverseY; // 0x32a
	bool bReverseZ; // 0x32b
	UTexture* BackgroundImage; // 0x330
	float BackgroundAlpha; // 0x338
	float NormalizedX; // 0x33c
	float NormalizedY; // 0x340
	float NormalizedZ; // 0x344
	FVector2D NormalizedXY; // 0x348
	FMulticastInlineDelegate OnXYValueChanged; // 0x350
	FMulticastInlineDelegate OnValuesChanged; // 0x360
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

struct UFontImportOptions : UObject {
	FFontImportOptionsData Data; // 0x28
};

struct UShapeComponent : UPrimitiveComponent {
	UBodySetup* ShapeBodySetup; // 0x440
	UNavAreaBase* AreaClass; // 0x448
	FColor ShapeColor; // 0x450
	char bDrawOnlyIfSelected : 1; // 0x454
	char bShouldCollideWhenPlacing : 1; // 0x454
	char bDynamicObstacle : 1; // 0x454
};

struct ADecalActor : AActor {
	UDecalComponent* Decal; // 0x220
};

struct UMOCharCreationBloodlinePanel : UMOCharCreationPanel {
	TArray<UMOCharCreationComboBox*> vMOComboBoxEntries_Ancestry; // 0x2e0
	FMulticastInlineDelegate OnBloodlineUpdatedDelegate; // 0x2f0
	TArray<FString> vPossibleBloodlines; // 0x300
	FString sDominantAncestry; // 0x310
	FString sSecondaryAncestry; // 0x320
	TArray<FSlateBrush> vAncestrySlateBrushes; // 0x330
	TArray<UImage*> vAncestryImages; // 0x340
	UMOCharCreationComboBox* pMOComboBox_Ancestry0; // 0x350
	UImage* pImage_Ancestry0; // 0x358
	UMOCharCreationComboBox* pMOComboBox_Ancestry1; // 0x360
	UImage* pImage_Ancestry1; // 0x368
	UMOCharCreationComboBox* pMOComboBox_Ancestry2; // 0x370
	UImage* pImage_Ancestry2; // 0x378
	UMOCharCreationComboBox* pMOComboBox_Ancestry3; // 0x380
	UImage* pImage_Ancestry3; // 0x388
	UMOCharCreationComboBox* pMOComboBox_Ancestry4; // 0x390
	UImage* pImage_Ancestry4; // 0x398
	UMOCharCreationComboBox* pMOComboBox_Ancestry5; // 0x3a0
	UImage* pImage_Ancestry5; // 0x3a8
	UMOText* pMainRaceText; // 0x3b0
	UImage* pImage_MainRace; // 0x3b8
	UTextBlock* pTextBlock_Strengths; // 0x3c0
	UTextBlock* pTextBlock_Summary; // 0x3c8
	UTextBlock* pTextBlock_Lore; // 0x3d0
	TArray<FText> vStrenghtsText; // 0x3d8
	TArray<FText> vSummaryText; // 0x3e8
	TArray<FText> vLoreText; // 0x3f8
};

struct URigVM : UObject {
	FRigVMMemoryContainer WorkMemoryStorage; // 0x28
	FRigVMMemoryContainer LiteralMemoryStorage; // 0xd0
	FRigVMByteCode ByteCodeStorage; // 0x178
	FRigVMInstructionArray Instructions; // 0x1b0
	FRigVMExecuteContext Context; // 0x1c0
	TArray<FName> FunctionNamesStorage; // 0x218
	TArray<FRigVMParameter> Parameters; // 0x248
	TMap<FName, int32_t> ParametersNameMap; // 0x258
	URigVM* DeferredVMToCopy; // 0x2f0
};

struct AMOTutorialManager : AActor {
	AMOTutorialStep* pTutorialStartStep; // 0x220
	AMOTutorialStep* pTutorialEndStep; // 0x228
	AMOTutorialStep* pFirstStepCombat; // 0x230
	AMOTutorialStep* pFirstStepCrafting; // 0x238
	AMOTutorialStep* pCurrentOverrideSteps; // 0x240
	AMOTutorialStep* pCurrentStepCombat; // 0x248
	AMOTutorialStep* pCurrentStepCrafting; // 0x250
	AMOTutorialStep* pOnDeathStep; // 0x258
	AMOTutorialStep* pWeaponBreakStep; // 0x260
	UMOQuestWidget* cQuestWidgetClass; // 0x270
};

struct UMovieScenePrimitiveMaterialSection : UMovieSceneSection {
	FMovieSceneObjectPathChannel MaterialChannel; // 0xe8
};

struct UMaterialExpressionSceneDepthWithoutWater : UMaterialExpression {
	EMaterialSceneAttributeInputMode InputMode; // 0x40
	FExpressionInput Input; // 0x44
	FVector2D ConstInput; // 0x58
	float FallbackDepth; // 0x60
};

struct UNiagaraDataInterfaceArrayQuat : UNiagaraDataInterfaceArray {
	TArray<FQuat> QuatData; // 0x50
};

struct AMOCharacterAICreature : AMOCharacterAI {
	FName sFootBoneName_Left; // 0xce4
	FName sFootBoneName_Right; // 0xcec
	UNiagaraSystem* pParticleSystem_BloodSpray; // 0xcf8
	UNiagaraSystem* pParticleSystem_BloodSlash; // 0xd00
	UNiagaraSystem* pParticleSystem_BloodPiercing; // 0xd08
	UNiagaraSystem* pParticleSystem_BloodBlunt; // 0xd10
	UNiagaraSystem* pParticleSystem_Resurrect; // 0xd18
	UNiagaraSystem* pParticleSystem_BloodLimbRemoved; // 0xd20
	UNiagaraSystem* pParticleSystem_BloodPiercingDeath; // 0xd28
	UNiagaraSystem* pParticleSystem_BloodArrowDeath; // 0xd30
	UNiagaraSystem* pParticleSystem_BloodBluntDeath; // 0xd38
	UParticleSystem* pSwingBloodTrail; // 0xd40
	TArray<UMaterialInstance*> vBloodDecalsSmall; // 0xd48
	TArray<UMaterialInstance*> vBloodDecalsLarge; // 0xd58
	TArray<UMaterialInstance*> vBloodDecalsSpray; // 0xd68
	USoundCue* pSoundCue_Pain; // 0xd78
	USoundCue* pSoundCue_Death; // 0xd80
	USoundCue* pSoundCue_Footsteps; // 0xd88
	USoundCue* pSoundCue_GoreLimbRemoved; // 0xd90
	USoundCue* pSoundCue_GorePiercingDeath; // 0xd98
	USoundCue* pSoundCue_GoreBluntDeath; // 0xda0
	USoundCue* pSoundCue_GoreBowDeath; // 0xda8
};

struct UGizmoComponentWorldTransformSource : UGizmoBaseTransformSource {
	USceneComponent* Component; // 0x48
	bool bModifyComponentOnTransform; // 0x50
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

struct ULevelSequenceDirector : UObject {
	ULevelSequencePlayer* Player; // 0x28
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

struct UARTextureCameraDepth : UARTexture {
	EARDepthQuality DepthQuality; // 0xf8
	EARDepthAccuracy DepthAccuracy; // 0xf9
	bool bIsTemporallySmoothed; // 0xfa
};

struct UMaterialExpressionVectorNoise : UMaterialExpression {
	FExpressionInput Position; // 0x40
	EVectorNoiseFunction NoiseFunction; // 0x54
	int32_t Quality; // 0x58
	char bTiling : 1; // 0x5c
	uint32_t TileSize; // 0x60
};

struct ABP_AiEffectArrowPoison_C : AMOAiEffectActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
};

struct UParticleModuleColorOverLife : UParticleModuleColorBase {
	FRawDistributionVector ColorOverLife; // 0x30
	FRawDistributionFloat AlphaOverLife; // 0x78
	char bClampAlpha : 1; // 0xa8
};

struct UARLifeCycleComponent : USceneComponent {
	FMulticastInlineDelegate OnARActorSpawnedDelegate; // 0x1f8
	FMulticastInlineDelegate OnARActorToBeDestroyedDelegate; // 0x208
};

struct UMaterialExpressionStaticBool : UMaterialExpression {
	char Value : 1; // 0x40
};

struct UParticleModuleLocationPrimitiveSphere_Seeded : UParticleModuleLocationPrimitiveSphere {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xe0
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

struct UMoviePlayerSettings : UObject {
	bool bWaitForMoviesToComplete; // 0x28
	bool bMoviesAreSkippable; // 0x29
	TArray<FString> StartupMovies; // 0x30
};

struct UInterpTrackVectorMaterialParam : UInterpTrackVectorBase {
	TArray<UMaterialInterface*> TargetMaterials; // 0x90
	FName ParamName; // 0xa0
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

struct UWB_MOCharCreationInfoEntryMaxValue_C : UMOCharCreationInfoEntry {
	FPointerToUberGraphFrame UberGraphFrame; // 0x328
	UWidgetAnimation* UpdateMaxValue; // 0x330
	UWidgetAnimation* UpdateValue; // 0x338
	UHorizontalBox* HorizontalBox_6; // 0x340
};

struct UWB_CladeButtonManager_C : UMOWidgetBlueprint {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UMOPaperdollCladeGifts* PaperDollCladeGifts; // 0x268
	TArray<UWB_CladeGiftsButton_C*> ButtonsArray; // 0x270
	int32_t iCladeGiftPointsLeft; // 0x280
	int32_t RowsNotFound; // 0x284
	FName CladeGiftName; // 0x288
	UScrollBox* ScrollBox; // 0x290
	TArray<UWB_CladeGiftsLearnedGiftsText_C*> TextArray; // 0x298
	bool TextIsAlreadyInList; // 0x2a8
	UWB_CladeGiftsLearnedGiftsText_C* CladeGiftsText; // 0x2b0
	UDataTable* pDataTable; // 0x2b8
};

struct UMaterialExpressionLinearInterpolate : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	FExpressionInput Alpha; // 0x68
	float ConstA; // 0x7c
	float ConstB; // 0x80
	float ConstAlpha; // 0x84
};

struct UMOPetsInfo : UMOUserWidget {
	UMOItemSlotPlaceItem* pMOItemSlot_Bags; // 0x2c8
	UMOItemSlotPlaceItem* pMOItemSlot_Armor; // 0x2d0
	UCanvasPanel* pCanvasPanel_PetEquipment; // 0x2d8
	UMOPetListEntryTamed* pMOPetListEntry; // 0x2e0
	UMOButtonLarge* pMOButton_Abandon; // 0x2e8
	UMOButtonLarge* pMOButton_Rename; // 0x2f0
	UMOButtonLarge* pMOButton_TradePet; // 0x2f8
	UMOButtonAttributeToggle* pMOButton_PetLevelLockState; // 0x300
	UTextBlock* pTextFieldLevelCur; // 0x308
	UTextBlock* pTextFieldLevelMax; // 0x310
	UTextBlock* pTextFieldLoyaltyCurrent; // 0x318
	UTextBlock* pTextFieldLoyaltyMaximum; // 0x320
	UTextBlock* pTextFieldHungerCur; // 0x328
	UTextBlock* pTextFieldHungerMax; // 0x330
	UTextBlock* pTextFieldHealthCur; // 0x338
	UTextBlock* pTextFieldHealthMax; // 0x340
	UTextBlock* pTextFieldPointCostCur; // 0x348
	UTextBlock* pTextFieldPointCostMax; // 0x350
	UMOPets* pMOPets; // 0x358
	UMORenameUserWidget* pMORenameWidget_PetName; // 0x360
	UMOButtonPetSkillWidget* pMOButtonPetSkill_Attack; // 0x368
	UMOButtonPetSkillWidget* pMOButtonPetSkill_Follow; // 0x370
	UMOButtonPetSkillWidget* pMOButtonPetSkill_Stay; // 0x378
	UMOButtonPetSkillWidget* pMOButtonPetSkill_PetBags; // 0x380
};

struct UARQRCodeComponent : UARComponent {
	FARQRCodeUpdatePayload ReplicatedPayload; // 0x280
};

struct ALevelVariantSetsActor : AActor {
	FSoftObjectPath LevelVariantSets; // 0x220
};

struct UNetworkSettings : UDeveloperSettings {
	char bVerifyPeer : 1; // 0x38
	char bEnableMultiplayerWorldOriginRebasing : 1; // 0x38
	int32_t MaxRepArraySize; // 0x3c
	int32_t MaxRepArrayMemory; // 0x40
	TArray<FNetworkEmulationProfileDescription> NetworkEmulationProfiles; // 0x48
};

struct AMOCharacterAICreatureMount : AMOCharacterAICreature {
	float fMountStaminaMax; // 0xdb0
	TArray<float> vMountMaxSpeed; // 0xdb8
	float SlowestSpeedTurnRate; // 0xdc8
	float FastestSpeedTurnRate; // 0xdcc
	float fMountBreakSpeed; // 0xdd0
	float fMountThrottleSpeed; // 0xdd4
	float fStaminaGainPct; // 0xdd8
	float fStaminaDrainPct; // 0xddc
	float fMovementSpeedPct; // 0xde0
	float fStaminaDrainBoostPct; // 0xde4
	float fBoostTime; // 0xde8
	float fMaxArmorWeight_ModSpeed; // 0xdec
	float fMaxArmorWeight_ModTurnRate; // 0xdf0
	float fMaxArmorWeight_AddStaminaDrain; // 0xdf4
};

struct UMOMailSend : UMOMailPanel {
	UMOButtonLarge* pMOButton_ConfirmSendMail; // 0x2d0
	UMOItemSlotPlaceItem* pMOItemSlot_SendItem; // 0x2d8
	UMOEditableTextBox* pMOEditableTextBox_Name; // 0x2e0
	UMOEditableCurrencyWidget* pMOEditableCurrencyWidget; // 0x2e8
};

struct UFieldSystemComponent : UPrimitiveComponent {
	UFieldSystem* FieldSystem; // 0x440
	TArray<TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers; // 0x458
};

struct UWB_MO_LoginScreen_ServerEntry_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* MapNameTitle; // 0x268
	UMOButtonLarge* pMOButtonLogin; // 0x270
	UTextBlock* ServerIPTitle; // 0x278
	UTextBlock* ServerNameTitle; // 0x280
	FString ServerName; // 0x288
	FString ServerIP; // 0x298
	FString PersistentLevel; // 0x2a8
	int32_t ServerID; // 0x2b8
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

struct UMOBrokerCurrencyWidget : UMOUserWidget {
	UMOEditableCurrencyWidget* pMOEditableCurrencyWidget; // 0x2c8
	UMOEditableTextBoxNumbers* pMOEditableTextBox_Quantity; // 0x2d0
	UMOEditableTextBoxNumbers* pMOEditableTextBox_Duration; // 0x2d8
	UHorizontalBox* pHorizontalBox_Duration; // 0x2e0
	UHorizontalBox* pHorizontalBox_Quantity; // 0x2e8
};

struct AIntervalGizmoActor : AGizmoActor {
	UGizmoLineHandleComponent* UpIntervalComponent; // 0x220
	UGizmoLineHandleComponent* DownIntervalComponent; // 0x228
	UGizmoLineHandleComponent* ForwardIntervalComponent; // 0x230
};

struct ACineCameraActor : ACameraActor {
	FCameraLookatTrackingSettings LookatTrackingSettings; // 0x7a0
};

struct ASkyAtmosphere : AInfo {
	USkyAtmosphereComponent* SkyAtmosphereComponent; // 0x220
};

struct UGFurComponent : UMeshComponent {
	USkeletalMesh* SkeletalGrowMesh; // 0x468
	UStaticMesh* StaticGrowMesh; // 0x470
	UFurSplines* FurSplines; // 0x478
	TArray<USkeletalMesh*> SkeletalGuideMeshes; // 0x480
	TArray<UStaticMesh*> StaticGuideMeshes; // 0x490
	int32_t LayerCount; // 0x4a0
	float MinScreenSize; // 0x4a4
	TArray<FFurLod> LODs; // 0x4a8
	bool LODFromParent; // 0x4b8
	float ShellBias; // 0x4bc
	float FurLength; // 0x4c0
	float MinFurLength; // 0x4c4
	bool RemoveFacesWithoutSplines; // 0x4c8
	bool PhysicsEnabled; // 0x4c9
	float ForceDistribution; // 0x4cc
	float Stiffness; // 0x4d0
	float Damping; // 0x4d4
	FVector ConstantForce; // 0x4d8
	float MaxForce; // 0x4e4
	float MaxForceTorqueFactor; // 0x4e8
	float ReferenceHairBias; // 0x4ec
	float HairLengthForceUniformity; // 0x4f0
	float MaxPhysicsOffsetLength; // 0x4f4
	float NoiseStrength; // 0x4f8
	bool DisableMorphTargets; // 0x4fc
	float StreamingDistanceMultiplier; // 0x500
};

struct USlateVectorArtData : UObject {
	TArray<FSlateMeshVertex> VertexData; // 0x28
	TArray<uint32_t> IndexData; // 0x38
	UMaterialInterface* Material; // 0x48
	FVector2D ExtentMin; // 0x50
	FVector2D ExtentMax; // 0x58
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

struct ABlockoutToolsParent : AActor {
	USceneComponent* Root; // 0x220
	UBillboardComponent* Billboard; // 0x228
	UMaterialInterface* BlockoutGridParent; // 0x230
	UMaterialInstanceDynamic* BlockoutGridMID; // 0x238
	UMaterialInterface* BlockoutCurrentMaterial; // 0x240
	TArray<UStaticMeshComponent*> BlockoutMeshComponents; // 0x248
	EBlockoutMaterialType BlockoutMaterialType; // 0x258
	FLinearColor BlockoutMaterialColor; // 0x25c
	bool bBlockoutMaterialUseGrid; // 0x26c
	float BlockoutMaterialGridSize; // 0x270
	float BlockoutMaterialCheckerLuminance; // 0x274
	bool bBlockoutMaterialUseTopColor; // 0x278
	FLinearColor BlockoutMaterialTopColor; // 0x27c
	bool bUseCustomMaterial; // 0x28c
	UMaterialInterface* CustomMaterial; // 0x290
	UMaterialInterface* BlockoutCustomMaterial; // 0x298
	bool bBlockoutEnableCollisions; // 0x2a0
	bool bBlockoutCastShadows; // 0x2a1
};

struct UOnsetNRTSettings : UAudioSynesthesiaNRTSettings {
	bool bDownmixToMono; // 0x28
	float GranularityInSeconds; // 0x2c
	float Sensitivity; // 0x30
	float MinimumFrequency; // 0x34
	float MaximumFrequency; // 0x38
};

struct UEnvQueryTest_Dot : UEnvQueryTest {
	FEnvDirection LineA; // 0x1f8
	FEnvDirection LineB; // 0x218
	EEnvTestDot TestMode; // 0x238
	bool bAbsoluteValue; // 0x239
};

struct AMagicLeapSharedWorldGameState : AGameState {
	FMagicLeapSharedWorldSharedData SharedWorldData; // 0x290
	FMagicLeapSharedWorldAlignmentTransforms AlignmentTransforms; // 0x2a0
	FMulticastInlineDelegate OnSharedWorldDataUpdated; // 0x2b0
	FMulticastInlineDelegate OnAlignmentTransformsUpdated; // 0x2c0
};

struct UWaterSplineComponent : USplineComponent {
	FWaterSplineCurveDefaults WaterSplineDefaults; // 0x538
	FWaterSplineCurveDefaults PreviousWaterSplineDefaults; // 0x548
};

struct UMOCombatSystemMagic : UMOCombatSystem {
	TWeakObjectPtr<AMOCharacter> wpLastTargetCharacter; // 0x19c
	UStaticMeshComponent* pStaticMeshComponent; // 0x1c8
	TArray<UNiagaraComponent*> vFingerBeamParticles; // 0x1d0
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

struct UAnimationAsset : UObject {
	USkeleton* Skeleton; // 0x38
	TArray<UAnimMetaData*> MetaData; // 0x60
	TArray<UAssetUserData*> AssetUserData; // 0x70
};

struct UBorder : UContentWidget {
	EHorizontalAlignment HorizontalAlignment; // 0x120
	EVerticalAlignment VerticalAlignment; // 0x121
	char bShowEffectWhenDisabled : 1; // 0x122
	FLinearColor ContentColorAndOpacity; // 0x124
	FDelegate ContentColorAndOpacityDelegate; // 0x134
	FMargin Padding; // 0x144
	FSlateBrush BACKGROUND; // 0x158
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

struct UDatasmithSceneComponentTemplate : UDatasmithObjectTemplate {
	FTransform RelativeTransform; // 0x30
	EComponentMobility Mobility; // 0x60
	TSoftObjectPtr<USceneComponent> AttachParent; // 0x68
	bool bVisible; // 0x90
	TSet<FName> Tags; // 0x98
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

struct UGameInstance : UObject {
	TArray<ULocalPlayer*> LocalPlayers; // 0x38
	UOnlineSession* OnlineSession; // 0x48
	TArray<UObject*> ReferencedObjects; // 0x50
	FMulticastInlineDelegate OnPawnControllerChangedDelegates; // 0x78
};

struct AMOAvatarStaticMeshPickableField : AMOAvatarStaticMesh {
	TArray<UStaticMesh*> vInstanceStaticMeshes; // 0x2c8
	TArray<FPickableFieldInstance> vInstances; // 0x2d8
	int32_t iFieldSize; // 0x2e8
	int32_t iBitField; // 0x2ec
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

struct UChannel : UObject {
	UNetConnection* Connection; // 0x28
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

struct UHapticFeedbackEffect_Curve : UHapticFeedbackEffect_Base {
	FHapticFeedbackDetails_Curve HapticDetails; // 0x28
};

struct UMOCombatSystemRanged : UMOCombatSystem {
	bool bAimWithArrowTip; // 0x88
	TWeakObjectPtr<AMOArrowActor> wpArrowToFire; // 0xa0
};

struct UParticleModuleSizeScaleBySpeed : UParticleModuleSizeBase {
	FVector2D SpeedScale; // 0x30
	FVector2D MaxScale; // 0x38
};

struct UInputRouter : UObject {
	bool bAutoInvalidateOnHover; // 0x28
	bool bAutoInvalidateOnCapture; // 0x29
	UInputBehaviorSet* ActiveInputBehaviors; // 0x38
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

struct UGameplayTagsManager : UObject {
	TArray<FGameplayTagSource> TagSources; // 0xc0
	TArray<UDataTable*> GameplayTagTables; // 0x1b0
};

struct UMaterialExpressionTextureSampleParameter : UMaterialExpressionTextureSample {
	FName ParameterName; // 0x60
	FGuid ExpressionGUID; // 0x68
	FName Group; // 0x78
};

struct AAtmosphericFog : AInfo {
	UAtmosphericFogComponent* AtmosphericFogComponent; // 0x220
};

struct UMaterialExpressionTextureProperty : UMaterialExpression {
	FExpressionInput TextureObject; // 0x40
	EMaterialExposedTextureProperty Property; // 0x54
};

struct UPlayer : UObject {
	APlayerController* PlayerController; // 0x30
	int32_t CurrentNetSpeed; // 0x38
	int32_t ConfiguredInternetSpeed; // 0x3c
	int32_t ConfiguredLanSpeed; // 0x40
};

struct AMOCrossNodeActor : AActor {
	UStaticMeshComponent* pStaticMeshComponent; // 0x220
};

struct UNavCollision : UNavCollisionBase {
	TArray<FNavCollisionCylinder> CylinderCollision; // 0x80
	TArray<FNavCollisionBox> BoxCollision; // 0x90
	UNavArea* AreaClass; // 0xa0
	char bGatherConvexGeometry : 1; // 0xa8
	char bCreateOnClient : 1; // 0xa8
};

struct USequenceCameraShakeSequencePlayer : UObject {
	UObject* BoundObjectOverride; // 0x480
	UMovieSceneSequence* Sequence; // 0x488
	FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x490
};

struct UMovieSceneTakeTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
};

struct UMaterialExpressionMin : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UMaterialExpressionRotator : UMaterialExpression {
	FExpressionInput Coordinate; // 0x40
	FExpressionInput Time; // 0x54
	float CenterX; // 0x68
	float CenterY; // 0x6c
	float Speed; // 0x70
	uint32_t ConstCoordinate; // 0x74
};

struct APhysicsVolume : AVolume {
	float TerminalVelocity; // 0x258
	int32_t Priority; // 0x25c
	float FluidFriction; // 0x260
	char bWaterVolume : 1; // 0x264
	char bPhysicsOnContact : 1; // 0x264
};

struct UMODataAssetMagicAnimations : UPrimaryDataAsset {
	UMODataAssetMagicAnimations* FirstPersonOverride; // 0x30
	UAnimMontage* ChargeMontage; // 0x38
	UAnimSequenceBase* PreCastBeginMontage; // 0x40
	UAnimSequenceBase* PreCastCancelMontage; // 0x48
	UAnimSequenceBase* PreCastChargeMontage; // 0x50
	UAnimSequenceBase* PreCastEndMontage; // 0x58
	UAnimSequenceBase* FizzleMontage; // 0x60
	UAnimSequenceBase* ReleaseInstantMontage; // 0x68
	UAnimSequenceBase* ReleaseSelfMontage; // 0x70
	UAnimSequenceBase* ReleaseProjectileMontage; // 0x78
};

struct AGameState : AGameStateBase {
	FName MatchState; // 0x270
	FName PreviousMatchState; // 0x278
	int32_t ElapsedTime; // 0x280
};

struct UMOJournalNotesPanel : UMOJournalPanel {
	UMOScrollBox* pMOScrollBox_GroupEntries; // 0x2d0
	UMOJournalNoteEntry* pLastClickedEntry; // 0x2d8
	UMOJournalNoteGroupEntry* pSelectedNoteGroupEntry; // 0x2e0
	UMOJournalNoteEntry* pSelectedNoteEntry; // 0x2e8
	UMOButtonLarge* pMOButton_AddNoteGroup; // 0x2f0
	UTextBlock* pTitleText; // 0x2f8
	UMOMultiLineEditableTextBox* pEditableNotes; // 0x300
	UMORenameUserWidget* pRenameWidget; // 0x308
	UMOEditableTextBox* pMOEditableTextBox_Search; // 0x310
	UCanvasPanel* pCanvasPanel_TitleBG; // 0x318
	UMOJournalNoteEntry* cMOJournalEntry; // 0x320
	UMOJournalNoteGroupEntry* cMOJournalGroupEntry; // 0x328
	TMap<FString, UMOJournalNoteEntry*> vJournalEntryMap; // 0x330
	TMap<FString, UMOJournalNoteGroupEntry*> vJournalGroupMap; // 0x380
};

struct UMOPreviewMode : UObject {
	UMOGameInstance* pMOGameInstance; // 0x28
	AMOPlayerController* pOwnerPlayerController; // 0x30
};

struct UMaterialExpressionPreviousFrameSwitch : UMaterialExpression {
	FExpressionInput CurrentFrame; // 0x40
	FExpressionInput PreviousFrame; // 0x54
};

struct UGridPathFollowingComponent : UPathFollowingComponent {
	UNavLocalGridManager* GridManager; // 0x250
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

struct UMovieSceneEventSection : UMovieSceneSection {
	FNameCurve Events; // 0xe8
	FMovieSceneEventSectionData EventData; // 0x160
};

struct AD2Jail_C : AActor {
	UStaticMeshComponent* Door; // 0x220
	FRotator initRot; // 0x228
	bool Moving; // 0x234
	bool Front; // 0x235
	int32_t DoorState; // 0x238
};

struct AMOPhysicsVolumeLogout : AMOPhysicsVolume {
	FText sZoneName; // 0x268
	ELogoutZoneRules ELogoutZoneRules; // 0x280
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

struct UForceFeedbackAttenuation : UObject {
	FForceFeedbackAttenuationSettings Attenuation; // 0x28
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

struct UEditableGameplayTagQuery : UObject {
	FString UserDescription; // 0x28
	UEditableGameplayTagQueryExpression* RootExpression; // 0x48
	FGameplayTagQuery TagQueryExportText_Helper; // 0x50
};

struct UInterpTrackFloatParticleParam : UInterpTrackFloatBase {
	FName ParamName; // 0x90
};

struct UMonoWaveTableSynthPreset : UObject {
	FString PresetName; // 0x28
	char bLockKeyframesToGridBool : 1; // 0x38
	int32_t LockKeyframesToGrid; // 0x3c
	int32_t WaveTableResolution; // 0x40
	TArray<FRuntimeFloatCurve> WaveTable; // 0x48
	char bNormalizeWaveTables : 1; // 0x58
};

struct UChildActorComponent : USceneComponent {
	AActor* ChildActorClass; // 0x1f8
	AActor* ChildActor; // 0x200
	AActor* ChildActorTemplate; // 0x208
};

struct UMeshComponent : UPrimitiveComponent {
	TArray<UMaterialInterface*> OverrideMaterials; // 0x440
	char bEnableMaterialParameterCaching : 1; // 0x460
};

struct UMOAnimationInstance : UAnimInstance {
	bool bVRIsEnabled; // 0x2b8
	bool bUseFirstPersonState; // 0x2b9
	bool bIsPlayer; // 0x2ba
	bool bIsPaperdoll; // 0x2bb
	bool bIsRagdoll; // 0x2bc
	bool bUseEtherworldAppearance; // 0x2bd
	AMOCharacter* OwningCharacter; // 0x2c0
	USkeletalMeshComponent* OwningSkeletalComponent; // 0x2c8
	UPawnMovementComponent* OwningMovementComponent; // 0x2d0
	UMOAnimationInstance* MountParentAnimationInstance; // 0x2d8
	USkeletalMeshComponent* MountParentSkeletalMeshComponent; // 0x2e0
	AActor* MountParentActor; // 0x2e8
	bool bUseMountedAnimations; // 0x2f0
	bool bSyncWithMountParentAnimations; // 0x2f1
	bool bTickHighDetailAnimation; // 0x2f2
	bool bTickHighDetailAnimation_BodyPhysics; // 0x2f3
	bool bTickHighDetailAnimation_AnimPostProcess; // 0x2f4
	float CharacterScale; // 0x2f8
	FVector LookAtWorldPosition; // 0x2fc
	FRotator LookAtRotatorWS; // 0x308
	FRotator LookAtOffsetCS; // 0x314
	bool bEnableLookAt; // 0x320
	float LookAtMaxAngle; // 0x324
	float LookAtIgnoreAngle; // 0x328
	FRotator HeadLookAtBaseRotation; // 0x32c
	FVector2D HeadLookAtMinMaxTurnSpeed; // 0x338
	FTimerHandle MeshAutoUnlockTimer; // 0x340
	bool bMeshIsLockedInPlace; // 0x348
	FTransform RootBoneLockedTransform; // 0x350
	FRotator ViewRotationWorldSpace; // 0x380
	FRotator ViewRotationMeshSpace; // 0x38c
	bool bViewLockedByMovementSequence; // 0x398
	bool bMovementSequenceActive; // 0x399
	float MovementSequenceAlpha; // 0x39c
	float MovementSequenceAlphaInverse; // 0x3a0
	EMovementMode MovementMode; // 0x3a4
	EMovementPace MovementPace; // 0x3a5
	bool bWalking; // 0x3a6
	bool bRunning; // 0x3a7
	bool bSprinting; // 0x3a8
	bool bMirrorCharacter; // 0x3a9
	bool bIsGrounded; // 0x3aa
	bool bIsFalling; // 0x3ab
	bool bIsCrouching; // 0x3ac
	bool bIsSwimming; // 0x3ad
	bool bIsFlying; // 0x3ae
	bool bWasMovingLastUpdate; // 0x3af
	bool bIsMoving; // 0x3b0
	bool bIsTurningInPlace; // 0x3b1
	bool bIsMovingHorizontally; // 0x3b2
	bool bStoppedMovingThisFrame; // 0x3b3
	bool bStartedMovingThisFrame; // 0x3b4
	bool bSuddenlyChangedMoveDirection; // 0x3b5
	bool bUseHorizontalMovementAnimation; // 0x3b6
	bool bPlayJumpAnimation; // 0x3b7
	FVector PreviousCharacterVelocity; // 0x3b8
	FVector CharacterVelocity; // 0x3c4
	FVector HorizontalVelocity; // 0x3d0
	float MovementDirectionYaw; // 0x3dc
	float MovementDirectionYawForStrafer; // 0x3e0
	float MovementDirectionForwardFacingYaw; // 0x3e4
	float MovementSpeedAbs; // 0x3e8
	float MovementSpeedAbsHorizontal; // 0x3ec
	float MovementSpeedSmoothingInterpSpeed; // 0x3f0
	float MovementSpeedAbs_Smoothed; // 0x3f4
	bool bIsStrafing; // 0x3f8
	bool bIsStrafingRight; // 0x3f9
	bool bMeshShouldOrientTowardsMovementDirection; // 0x3fa
	FRotator MeshDefaultOrientation_ActorSpace; // 0x3fc
	FRotator PreviousMeshOrientation_WorldSpace; // 0x408
	FRotator MeshOrientation_WorldSpace; // 0x414
	FRotator MeshAngularVelocity_WorldSpace; // 0x420
	FRotator MeshAngularVelocity_ComponentSpace; // 0x42c
	FRotator MeshLastStationaryOrientation_WorldSpace; // 0x438
	float AngularVelocityYaw_Smoothed; // 0x444
	float MeshRealignTargetAngle; // 0x448
	float AimOffsetPitch; // 0x44c
	float AimOffsetYaw; // 0x450
	float AimOffsetYaw_Limit; // 0x454
	float AimOffsetRoll; // 0x458
	bool bAlive; // 0x45c
	bool bIsInCombat; // 0x45d
	bool bCombatIsIdle; // 0x45e
	bool bCombatCharging; // 0x45f
	bool bCombatReleasing; // 0x460
	bool bCombatBlocking; // 0x461
	bool bCombatPushing; // 0x462
	bool bCastingMagic; // 0x463
	bool bAllowCorrectingPelvisTranslationDuringCombatRelease; // 0x464
	bool bCorrectPelvisTranslationDuringCombatRelease; // 0x465
	bool bInMercyMode; // 0x466
	bool bRecoverFromMercyMode; // 0x467
	FRandomStream AnimationRandomStream; // 0x468
	UAnimSequenceBase* BodyProportionsBaseSequence; // 0x470
	UPoseAsset* BodyProportionsPoseAsset; // 0x478
	UMODataAssetAnimationRandomSet* NeutralIdleVariations; // 0x480
	UMODataAssetAnimationRandomSet* MountedIdleVariations; // 0x488
	int32_t IdleVariationSeed; // 0x490
	float Neutral_WalkBaseSpeed; // 0x494
	float Neutral_RunBaseSpeed; // 0x498
	float Neutral_SprintBaseSpeed; // 0x49c
	UBlendSpaceBase* Neutral_WalkBlendspace; // 0x4a0
	UBlendSpaceBase* Neutral_RunBlendspace; // 0x4a8
	UAnimSequenceBase* Neutral_Sprint; // 0x4b0
	UBlendSpaceBase* CombatAnimSequence_WalkBlendspace; // 0x4b8
	UBlendSpaceBase* CombatAnimSequence_RunBlendspace; // 0x4c0
	UAnimSequenceBase* CombatAnimSequence_Sprint; // 0x4c8
	UAnimSequenceBase* CombatAnimSequence_MercyModeIdle; // 0x4d0
	UAnimSequenceBase* CombatAnimSequence_MercyModeEnter; // 0x4d8
	UAnimSequenceBase* CombatAnimSequence_MercyModeLeave; // 0x4e0
	UAnimSequenceBase* CombatAnimSequence_MercyModeWalk; // 0x4e8
	UAnimSequenceBase* CombatAnimSequence_Idle; // 0x4f0
	UAnimSequenceBase* CombatAnimSequence_Equip; // 0x4f8
	UAnimSequenceBase* CombatAnimSequence_Unequip; // 0x500
	UAimOffsetBlendSpace* CombatAnimSequence_AimOffset; // 0x508
	UBlendSpaceBase* CombatAnimSequence_TakeHitBlendspace; // 0x510
	bool bPlayTakeHit; // 0x518
	float TakeHitDirectionYaw; // 0x51c
	float TakeHitDirectionPitch; // 0x520
	FRotator RootBoneOffsetRotation; // 0x524
};

struct UMaterialExpressionTruncate : UMaterialExpression {
	FExpressionInput Input; // 0x40
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

struct UMODataAssetAnimationBase : UPrimaryDataAsset {
	FMOAnimationInfo AnimationInfo; // 0x30
	bool bDuringCombat; // 0x98
	bool bOutSideOfCombat; // 0x99
};

struct UMaterialExpressionArctangentFast : UMaterialExpression {
	FExpressionInput Input; // 0x40
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

struct ULandscapeInfo : UObject {
	LazyObjectProperty LandscapeActor; // 0x28
	FGuid LandscapeGuid; // 0x44
	int32_t ComponentSizeQuads; // 0x54
	int32_t SubsectionSizeQuads; // 0x58
	int32_t ComponentNumSubsections; // 0x5c
	FVector DrawScale; // 0x60
	TArray<ALandscapeStreamingProxy*> Proxies; // 0x110
};

struct USoundNodeWavePlayer : USoundNodeAssetReferencer {
	TSoftObjectPtr<USoundWave> SoundWaveAssetPtr; // 0x48
	USoundWave* SoundWave; // 0x70
	char bLooping : 1; // 0x80
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

struct UCameraAnimInst : UObject {
	UCameraAnim* CamAnim; // 0x28
	UInterpGroupInst* InterpGroupInst; // 0x30
	float PlayRate; // 0x50
	UInterpTrackMove* MoveTrack; // 0x68
	UInterpTrackInstMove* MoveInst; // 0x70
	ECameraShakePlaySpace PlaySpace; // 0x78
};

struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
	FAppleImageUtilsImageConversionResult ConversionResult; // 0x60
};

struct UNiagaraDataInterfaceVectorCurve : UNiagaraDataInterfaceCurveBase {
	FRichCurve XCurve; // 0x70
	FRichCurve YCurve; // 0xf0
	FRichCurve ZCurve; // 0x170
};

struct UMOGMCharacterButtons : UUserWidget {
	UMOGMHUD* pMOGMHUD; // 0x260
};

struct UEnvQueryInstanceBlueprintWrapper : UObject {
	int32_t QueryID; // 0x30
	UEnvQueryItemType* ItemType; // 0x58
	int32_t OptionIndex; // 0x60
	FMulticastInlineDelegate OnQueryFinishedEvent; // 0x68
};

struct ULiveLinkPreset : UObject {
	TArray<FLiveLinkSourcePreset> Sources; // 0x28
	TArray<FLiveLinkSubjectPreset> Subjects; // 0x38
};

struct UDistributionVectorParameterBase : UDistributionVectorConstant {
	FName ParameterName; // 0x50
	FVector MinInput; // 0x58
	FVector MaxInput; // 0x64
	FVector MinOutput; // 0x70
	FVector MaxOutput; // 0x7c
	DistributionParamMode ParamModes[0x3]; // 0x88
};

struct UAISenseEvent_Damage : UAISenseEvent {
	FAIDamageEvent Event; // 0x28
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

struct UParticleModuleMeshRotationRateMultiplyLife : UParticleModuleRotationRateBase {
	FRawDistributionVector LifeMultiplier; // 0x30
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

struct UEnvQueryTest_Overlap : UEnvQueryTest {
	FEnvOverlapData OverlapData; // 0x1f8
};

struct APaperTerrainActor : AActor {
	USceneComponent* DummyRoot; // 0x220
	UPaperTerrainSplineComponent* SplineComponent; // 0x228
	UPaperTerrainComponent* RenderComponent; // 0x230
};

struct AControlPointMeshActor : AActor {
	UControlPointMeshComponent* ControlPointMeshComponent; // 0x220
};

struct USoundSubmixBase : UObject {
	TArray<USoundSubmixBase*> ChildSubmixes; // 0x28
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

struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0x468
	bool bAttachEnd; // 0x469
	FComponentReference attachEndTo; // 0x470
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

struct UMOSkillsTreeSelectedSkill : UMOWidgetBlueprint {
	UMOButton* pMOButtonSmall_DeletePoint; // 0x260
	UMOButtonAttributeToggle* pMOButton_SkillLockstate; // 0x268
	UTextBlock* pTextBlockSkillName; // 0x270
	UTextBlock* pTextBlockSkillType; // 0x278
	UTextBlock* pTextBlockSkillActiveLevel; // 0x280
	UTextBlock* pTextBlockSkillTrainedLevel; // 0x288
	UTextBlock* pTextBlockSkillCladeGiftsName; // 0x290
	UTextBlock* pTextBlockSkillCladeGiftsLevel; // 0x298
	UTextBlock* pTextBlockSkillDescription; // 0x2a0
	UTextBlock* pTextBlockSkillLimited1_Name; // 0x2a8
	UTextBlock* pTextBlockSkillLimited1_Type; // 0x2b0
	UTextBlock* pTextBlockSkillLimited2_Name; // 0x2b8
	UTextBlock* pTextBlockSkillLimited2_Type; // 0x2c0
	UTextBlock* pTextBlockAttributeNameA; // 0x2c8
	UTextBlock* pTextBlockAttributeNumberA; // 0x2d0
	UTextBlock* pTextBlockAttributeNameB; // 0x2d8
	UTextBlock* pTextBlockAttributeNumberB; // 0x2e0
	UTextBlock* pTextBlockSkillExperienceLevel; // 0x2e8
	UTextBlock* pTextBlockLearnOnUse; // 0x2f0
	UMOScrollBox* pScrollBoxDescription; // 0x2f8
	UMOButtonSkillWidget* pMOButtonSkillWidget; // 0x300
	UMOUserWidgetProgressBar* pWB_ProgressBar_EffectiveSkill; // 0x308
	UMOUserWidgetProgressBar* pWB_ProgressBar_Experience; // 0x310
};

struct UChildConnection : UNetConnection {
	UNetConnection* Parent; // 0x1af0
};

struct UBTTask_MoveDirectlyToward : UBTTask_MoveTo {
	char bDisablePathUpdateOnGoalLocationChange : 1; // 0xb0
	char bProjectVectorGoalToNavigation : 1; // 0xb0
	char bUpdatedDeprecatedProperties : 1; // 0xb0
};

struct USourceEffectEQPreset : USoundEffectSourcePreset {
	FSourceEffectEQSettings Settings; // 0xa0
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

struct ULoudnessNRT : UAudioSynesthesiaNRT {
	ULoudnessNRTSettings* Settings; // 0x78
};

struct UMaterialExpressionTangentOutput : UMaterialExpressionCustomOutput {
	FExpressionInput Input; // 0x40
};

struct UEnvQueryTest_PathfindingBatch : UEnvQueryTest_Pathfinding {
	FAIDataProviderFloatValue ScanRangeMultiplier; // 0x280
};

struct UMovieSceneColorTrack : UMovieScenePropertyTrack {
	bool bIsSlateColor; // 0xb0
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

struct UMODataAssetArrowDefinitions : UPrimaryDataAsset {
	UMODataAssetEquipmentShared* pSharedData; // 0x30
	UMODataAssetArrowHead* pFallBackHead; // 0x38
	UMODataAssetArrowBase* pFallBackBase; // 0x40
	TArray<UMODataAssetArrowBase*> vArrowBases; // 0x48
	TArray<UMODataAssetArrowHead*> vArrowHeads; // 0x58
};

struct AMortalOnline2HUD : AHUD {
	TSoftClassPtr<UObject> HUDWidgetClassSoftPtr; // 0x310
	UMOHUD* pHUDWidget; // 0x338
	bool bUpdateArcheryCrosshair; // 0x340
	TArray<FString> vItemGUIDsToReload; // 0x348
	TArray<FString> vGuidBagsToReload; // 0x358
	TArray<int32_t> vDepositIDsToReload; // 0x368
	FTimerHandle MemberTimerHandle_ReloadCachedItemGuids; // 0x378
	TSoftObjectPtr<UDataTable> spDataTableContentInfoGlobalUI; // 0x380
	UMOSplitStack* pSplitStack; // 0x3d0
	AMOAvatarStaticMesh* pStaticTalker; // 0x3d8
	UAudioComponent* pAudioComponent; // 0x3e0
	USoundCue* pDestroyItemSound; // 0x400
	USoundCue* pClickOnItemToPicupSound; // 0x408
	USoundCue* pReleaseItemSound; // 0x410
};

struct UVideoCaptureProtocol : UFrameGrabberProtocol {
	bool bUseCompression; // 0x68
	float CompressionQuality; // 0x6c
};

struct UDistributionVectorConstant : UDistributionVector {
	FVector Constant; // 0x38
	char bLockAxes : 1; // 0x44
	EDistributionVectorLockFlags LockedAxes; // 0x48
};

struct UClothPhysicalMeshDataNv_Legacy : UClothPhysicalMeshDataBase_Legacy {
	TArray<float> MaxDistances; // 0xe0
	TArray<float> BackstopDistances; // 0xf0
	TArray<float> BackstopRadiuses; // 0x100
	TArray<float> AnimDriveMultipliers; // 0x110
};

struct USoundGroups : UObject {
	TArray<FSoundGroup> SoundGroupProfiles; // 0x28
};

struct UMOEditableTextBoxNumbers : UMOEditableTextBox {
	int32_t iCurrentValue; // 0xa80
	int32_t iMinValue; // 0xa84
	int32_t iDefaultValue; // 0xa88
	int32_t iMaxValue; // 0xa8c
};

struct ACullDistanceVolume : AVolume {
	TArray<FCullDistanceSizePair> CullDistances; // 0x258
	char bEnabled : 1; // 0x268
};

struct ALandscapeStreamingProxy : ALandscapeProxy {
	LazyObjectProperty LandscapeActor; // 0x598
};

struct UMaterialExpressionMax : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UFieldSystemMetaDataIteration : UFieldSystemMetaData {
	int32_t Iterations; // 0xb0
};

struct UMasterAudioSubmixCaptureProtocol : UMovieSceneAudioCaptureProtocolBase {
	FString Filename; // 0x58
};

struct UMOSkillsTree : UMOWidgetBlueprint {
	bool bShowUnlearned; // 0x260
	bool bShowPrimary; // 0x261
	bool bShowSecondary; // 0x262
	UMOEditableTextBox* pEditableTextBoxFilter; // 0x268
	UMOSkillsTreeSelectedSkill* pSkillTreeSelectedSkill; // 0x270
	UMOSkillsTreeSkillIcons* pSkillTreeSkillIcons; // 0x278
	UMOSkillsTreeList* pSkillTreeList; // 0x280
	bool bCraftingSkills; // 0x288
};

struct UBoxFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb0
	float MinRange; // 0xb4
	float MaxRange; // 0xb8
	float Default; // 0xbc
	FTransform Transform; // 0xc0
	EFieldFalloffType Falloff; // 0xf0
};

struct UDatasmithSpotLightComponentTemplate : UDatasmithObjectTemplate {
	float InnerConeAngle; // 0x30
	float OuterConeAngle; // 0x34
};

struct UMovieSceneObjectPropertySection : UMovieSceneSection {
	FMovieSceneObjectPathChannel ObjectChannel; // 0xe8
};

struct UBTDecorator_Cooldown : UBTDecorator {
	float CoolDownTime; // 0x68
};

struct UMOWidgetBlueprintChatBubble : UMOWidgetBlueprint {
	UTextBlock* pTextBlock; // 0x260
};

struct UMODataAssetEquipmentShared : UPrimaryDataAsset {
	bool bCanUseOnMount; // 0x30
	UMOPhysicalMaterial* pEquipmentPhysMaterial; // 0x38
	TSoftObjectPtr<UTexture> pAORM; // 0x40
	TSoftObjectPtr<UTexture> pColor; // 0x68
	TSoftObjectPtr<UTexture> pNormal; // 0x90
	TSoftObjectPtr<UTexture> pResourceAORM; // 0xb8
	TSoftObjectPtr<UTexture> pResourceColor; // 0xe0
	TSoftObjectPtr<UTexture> pResourceNormal; // 0x108
	TSoftObjectPtr<UTexture> pResourceMask; // 0x130
	float fMaskMultiply; // 0x158
	float fMaskSubtract; // 0x15c
	float fResourceTiling; // 0x160
	float fResourceTilingU; // 0x164
	float fResourceTilingV; // 0x168
	TSoftObjectPtr<UTexture> pDecorationAORM; // 0x170
	TSoftObjectPtr<UTexture> pDecorationColor; // 0x198
	TSoftObjectPtr<UTexture> pDecorationNormal; // 0x1c0
	float fDecorationTilingU; // 0x1e8
	float fDecorationTilingV; // 0x1ec
	TSoftObjectPtr<UTexture> pFurMask; // 0x1f0
	FMODataAssetEquipmentResourceMaterials ResourceMaterials; // 0x218
	bool bAssetsArePreloaded; // 0x2f0
	TArray<UTexture*> PreloadedTextures; // 0x2f8
};

struct URendererOverrideSettings : UDeveloperSettings {
	char bSupportAllShaderPermutations : 1; // 0x38
	char bForceRecomputeTangents : 1; // 0x38
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

struct UMOEquipmentRangedComponent : UMOEquipmentComponent {
	USkeletalMeshComponent* pBaseMesh; // 0xf0
	UStaticMeshComponent* pQuiverArmorComp; // 0xf8
	UMODataAssetBowBase* pDataAssetBow; // 0x100
	FMOBowData sEquipmentData; // 0x108
	UMaterialInstanceDynamic* pBaseMID; // 0x130
	UMaterialInstanceDynamic* pCompositeMID; // 0x138
	UMaterialInstanceDynamic* pQuiverMID; // 0x140
	bool bIsOnBack; // 0x148
	FString sArrowDataString; // 0x150
	AMOArrowActor* pVisualArrow; // 0x160
};

struct ASpotLight : ALight {
	USpotLightComponent* SpotLightComponent; // 0x230
};

struct UMaterialInterface : UObject {
	USubsurfaceProfile* SubsurfaceProfile; // 0x38
	FLightmassMaterialInterfaceSettings LightmassSettings; // 0x50
	TArray<FMaterialTextureInfo> TextureStreamingData; // 0x60
	TArray<UAssetUserData*> AssetUserData; // 0x70
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

struct UMOCharCreationColorEntry : UMOUserWidget {
	UButton* pMOButton; // 0x2c8
	UImage* pImage; // 0x2d0
	UImage* pImage_Selected; // 0x2d8
	UMaterialInterface* pBaseMaterial; // 0x2e0
	FName sParamName; // 0x2e8
	int32_t iColorIndex; // 0x2f0
	bool bSelected; // 0x2f4
	FColor currentColor; // 0x2f8
	EColorEntryType eMyColorEntryType; // 0x2fc
	UMOCharCreationAppearancePanel* pAppearancePanel; // 0x300
};

struct UMaterialExpressionRayTracingQualitySwitch : UMaterialExpression {
	FExpressionInput Normal; // 0x40
	FExpressionInput RayTraced; // 0x54
};

struct UMaterialExpressionSquareRoot : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UQuitMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct ABP_MOWeather_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	USceneComponent* DefaultSceneRoot; // 0x228
	FLinearColor MoonColor; // 0x230
	UCurveLinearColor* Horizon color curve; // 0x240
	UCurveLinearColor* Zenith color curve; // 0x248
	float MoonYRot; // 0x250
	float MoonXRot; // 0x254
	float MoonZRot; // 0x258
	float SkyBrightness; // 0x25c
	float SkyContrast; // 0x260
	float SkySaturation; // 0x264
	float StarsBrightness; // 0x268
	float SunBloomStrength; // 0x26c
	float SunFalloff; // 0x270
	float SunRadius; // 0x274
	float MoonFalloff; // 0x278
	float MoonRadius; // 0x27c
	float MoonBloomStrength; // 0x280
	float MoonBloomFalloff; // 0x284
	float MoonRot; // 0x288
	float MoonTime; // 0x28c
	float MoonContrast; // 0x290
	float Coverage; // 0x294
	float GeneralDensity; // 0x298
	FLinearColor CloudWind; // 0x29c
	float ShadowSize; // 0x2ac
	float LightIntensity; // 0x2b0
	float AmbientIntensity; // 0x2b4
	float WeatherFrequency; // 0x2b8
	int32_t TimeSpeed; // 0x2bc
	float WeatherLoop1; // 0x2c0
	float WeatherLoop2; // 0x2c4
	TArray<int32_t> WeatherChancePerMonth; // 0x2c8
	int32_t WeatherChanceTemp; // 0x2d8
	int32_t WeatherChance; // 0x2dc
	float WeatherTransitionSpeed; // 0x2e0
	AWindDirectionalSource* Wind; // 0x2e8
	float SkyLightingIntensity; // 0x2f0
	float SkySunArea; // 0x2f4
	float NearDensityMorning; // 0x2f8
	float NearDensityNight; // 0x2fc
	float FarDensity; // 0x300
	FLinearColor SkyHorizonColor; // 0x304
	float HorizonDensity; // 0x314
	FLinearColor SkyZenithColor; // 0x318
	float ZenithDensity; // 0x328
	float SkyLightIntensity; // 0x32c
	FLinearColor SkyLightColor; // 0x330
	FLinearColor SunColor; // 0x340
	float BloomScale; // 0x350
	float BloomThreshold; // 0x354
	FColor BloomTint; // 0x358
	float VolumetricScattering; // 0x35c
	float ExFogDensity; // 0x360
	FLinearColor FogInsColor; // 0x364
	float MoonBloomScale; // 0x374
	float MoonBloomThreshold; // 0x378
	float SunIntensityTarget; // 0x37c
	float MoonIntensityTarget; // 0x380
	int32_t FoggyChance; // 0x384
	bool Foggy?; // 0x388
	bool Windy?; // 0x389
	int32_t WindyChange; // 0x38c
	FSunnyWeatherStructure SunnyWeather; // 0x390
	FSunnyFoggyWeatherStructure SunnyFoggyWeather; // 0x3e8
	FPartlyCloudyWeatherStructure PartlyCloudyWeather; // 0x440
	FPartlyCloudyFoggyWeatherStructure PartlyCloudyFoggyWeather; // 0x498
	FCloudyWeatherStructure CloudyWeather; // 0x4f0
	FCloudyFoggyWeatherStructure CloudyFoggyWeather; // 0x548
	FRainyWeatherStructure RainyWeather; // 0x5a4
	FRainyFoggyWeatherStructureComplicated RainyFoggyWeather; // 0x5fc
	FSnowyWeatherStructure SnowyWeather; // 0x654
	FSnowyFoggyWeatherStructure SnowyFoggyWeather; // 0x6ac
	bool DynamicWeatherSystem?; // 0x704
	FLinearColor CloudWindTarget; // 0x708
	int32_t PastSecond; // 0x718
	int32_t SecondDiff; // 0x71c
	int32_t Milliseconds; // 0x720
	int32_t Seconds; // 0x724
	int32_t Minutes; // 0x728
	int32_t Hours; // 0x72c
	int32_t Days; // 0x730
	int32_t Months; // 0x734
	int32_t Years; // 0x738
	bool DynamicTime?; // 0x73c
	int32_t StartTimeMinute; // 0x740
	int32_t StartTimeHour; // 0x744
	int32_t StartTimeDay; // 0x748
	int32_t StartTimeMonth; // 0x74c
	int32_t StartTimeYear; // 0x750
	int32_t SunriseTemp; // 0x754
	int32_t SunriseTime; // 0x758
	int32_t SunsetTemp; // 0x75c
	int32_t SunsetTime; // 0x760
	int32_t DayTime; // 0x764
	int32_t NightTime; // 0x768
	float WindStrength; // 0x76c
	FVector CloudShadowScale; // 0x770
	float CloudShadowMaxDist; // 0x77c
	float StarsRotator; // 0x780
	UCurveLinearColor* SunColorCurve; // 0x788
	float PPRainIntensity; // 0x790
	UCurveLinearColor* SunHorizonColor; // 0x798
	float SunIntensity; // 0x7a0
	float MoonIntensity; // 0x7a4
	float BloomTarget; // 0x7a8
	UCurveFloat* CloudLightIntensity; // 0x7b0
	FS_MO2_Weather WeatherParameters; // 0x7b8
	FS_MO2_Weather MO2Weather; // 0x7d0
};

struct UBTTask_RunEQSQuery : UBTTask_BlackboardBase {
	UEnvQuery* QueryTemplate; // 0x98
	TArray<FEnvNamedValue> QueryParams; // 0xa0
	TArray<FAIDynamicParam> QueryConfig; // 0xb0
	EEnvQueryRunMode RunMode; // 0xc0
	FBlackboardKeySelector EQSQueryBlackboardKey; // 0xc8
	bool bUseBBKey; // 0xf0
	FEQSParametrizedQueryExecutionRequest EQSRequest; // 0xf8
};

struct UDeviceProfile : UTextureLODSettings {
	FString DeviceType; // 0x38
	FString BaseProfileName; // 0x48
	UObject* Parent; // 0x58
	TArray<FString> CVars; // 0x88
};

struct UWB_MO_LoginHUD_C : UMOLoginHUD {
	FPointerToUberGraphFrame UberGraphFrame; // 0x308
	UBP_MO_UnsavedChanges_C* pMOUnsavedChanges; // 0x310
	UObject* Reference-BP_Login_Hud; // 0x318
	UObject* NewVar_1; // 0x320
};

struct UMovieScene3DPathSection : UMovieScene3DConstraintSection {
	FMovieSceneFloatChannel TimingCurve; // 0x110
	MovieScene3DPathSection_Axis FrontAxisEnum; // 0x1b0
	MovieScene3DPathSection_Axis UpAxisEnum; // 0x1b1
	char bFollow : 1; // 0x1b4
	char bReverse : 1; // 0x1b4
	char bForceUpright : 1; // 0x1b4
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

struct UMOCharacterEffects : UObject {
	TArray<UNiagaraComponent*> vFingerBeamParticles; // 0x28
	TArray<FVector> vFingerAttachTranslation; // 0x38
	TArray<FName> vFingerBoneNames; // 0x48
	TMap<EFishingSounds, UAudioComponent*> vFishingSoundRefs; // 0x98
};

struct UMOButtonMedium : UMOButton {
	USlateWidgetStyleAsset* CustomStyle; // 0x438
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

struct UMOUserWidgetLoadingScreen : UMOUserWidget {
	FString Message; // 0x2c8
};

struct UAB_CH_Player_Male_Human_Undead_C : UMOAnimationInstancePlayerUndead {
	FPointerToUberGraphFrame UberGraphFrame; // 0x6b0
	FAnimNode_Root AnimGraphNode_Root; // 0x6b8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5; // 0x6e8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_44; // 0x840
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_43; // 0x868
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_42; // 0x890
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_41; // 0x8b8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_40; // 0x8e0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_39; // 0x908
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_38; // 0x930
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_37; // 0x958
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_36; // 0x980
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_35; // 0x9a8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_34; // 0x9d0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_33; // 0x9f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_32; // 0xa20
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_31; // 0xa48
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_30; // 0xa70
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_29; // 0xa98
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_28; // 0xac0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_27; // 0xae8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_26; // 0xb10
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_25; // 0xb38
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14; // 0xb60
	FAnimNode_StateResult AnimGraphNode_StateResult_21; // 0xbe0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_12; // 0xc10
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_8; // 0xcb0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13; // 0xd98
	FAnimNode_StateResult AnimGraphNode_StateResult_20; // 0xe18
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_7; // 0xe48
	FAnimNode_StateResult AnimGraphNode_StateResult_19; // 0xf30
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_24; // 0xf60
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0xf88
	FAnimNode_StateResult AnimGraphNode_StateResult_18; // 0x1008
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0x1038
	FAnimNode_StateResult AnimGraphNode_StateResult_17; // 0x10b8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_23; // 0x10e8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_6; // 0x1110
	FAnimNode_StateResult AnimGraphNode_StateResult_16; // 0x11f8
	FAnimNode_StateResult AnimGraphNode_StateResult_15; // 0x1228
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_22; // 0x1258
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_4; // 0x1280
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_5; // 0x1370
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3; // 0x1440
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3; // 0x1460
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x1480
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_21; // 0x1588
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_20; // 0x15b0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_19; // 0x15d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18; // 0x1600
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17; // 0x1628
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0x1650
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0x1678
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x16a0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x16c8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5; // 0x16f0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4; // 0x17d8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_11; // 0x18c0
	FAnimNode_StateResult AnimGraphNode_StateResult_14; // 0x1960
	FMOAnimNode_RandomPlayer MOAnimGraphNode_RandomPlayer; // 0x1990
	FAnimNode_StateResult AnimGraphNode_StateResult_13; // 0x1ab0
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_3; // 0x1ae0
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_4; // 0x1bd0
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0x1ca0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x1d40
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_10; // 0x1dc0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x1e60
	FAnimNode_StateResult AnimGraphNode_StateResult_12; // 0x1ee0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; // 0x1f10
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x1ff8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_9; // 0x20e0
	FAnimNode_StateResult AnimGraphNode_StateResult_11; // 0x2180
	FAnimNode_StateMachine AnimGraphNode_StateMachine_5; // 0x21b0
	FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x2260
	FAnimNode_StateMachine AnimGraphNode_StateMachine_4; // 0x2290
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x2340
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x2388
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x23b0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x23d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x2400
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_9; // 0x2428
	FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x2450
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8; // 0x2480
	FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x24a8
	FAnimNode_StateMachine AnimGraphNode_StateMachine_3; // 0x24d8
	FAnimNode_Inertialization AnimGraphNode_Inertialization; // 0x2588
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x25f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x2620
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x2648
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x2670
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2698
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x26c0
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3; // 0x26e8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x2738
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_8; // 0x2788
	FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x2828
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x2858
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_7; // 0x28d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x2978
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x29f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x2a28
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6; // 0x2aa8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x2b48
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x2bc8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x2bf8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; // 0x2c78
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x2d18
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x2d98
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x2dc8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x2e48
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2ee8
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x2f68
	FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x2f98
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0x3048
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x31a0
	FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x3240
	FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve_3; // 0x3258
	FAnimNode_PoseBlendNode AnimGraphNode_PoseBlendNode; // 0x32b0
	FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve_2; // 0x3350
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x33a8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x34b0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x3570
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x3638
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x3688
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0x37e0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x3808
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x3830
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x3850
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x3958
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_3; // 0x3978
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_2; // 0x3a48
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_2; // 0x3b18
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator; // 0x3c08
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x3cf8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x3d18
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x3db8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x3f10
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x3fd0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x3ff8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x4020
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x4048
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x41a0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x4240
	FAnimNode_Slot AnimGraphNode_Slot; // 0x4268
	FAnimNode_LegIK AnimGraphNode_LegIK; // 0x42b0
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive; // 0x43a8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x4478
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x4580
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x45a8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x45d0
	FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve; // 0x45f8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x4650
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x4738
	FAnimNode_RefPose AnimGraphNode_IdentityPose; // 0x4768
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4780
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x47b0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x4860
};

struct UAnimCompress_RemoveTrivialKeys : UAnimCompress {
	float MaxPosDiff; // 0x40
	float MaxAngleDiff; // 0x44
	float MaxScaleDiff; // 0x48
};

struct UAsyncActionLoadPrimaryAssetClassList : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78
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

struct UDatasmithStaticMeshComponentTemplate : UDatasmithObjectTemplate {
	UStaticMesh* StaticMesh; // 0x30
	TArray<UMaterialInterface*> OverrideMaterials; // 0x38
};

struct UPaperTerrainMaterial : UDataAsset {
	TArray<FPaperTerrainMaterialRule> Rules; // 0x30
	UPaperSprite* InteriorFill; // 0x40
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

struct UMOProjectileMovementComponent : UActorComponent {
	bool bAutoLaunchOnBeginPlay; // 0xb0
	float AutoLaunchVelocityMagnitude; // 0xb4
	FVector Gravity; // 0xb8
	FMulticastInlineDelegate OnProjectileMovementDuringTick; // 0xc8
	USceneComponent* ParentRootComponent; // 0xd8
	bool bSynchronizeWithServer; // 0xe0
	FVector InitialLocation; // 0xf0
	FVector InitialVelocity; // 0xfc
};

struct UMaterialExpressionTime : UMaterialExpression {
	char bIgnorePause : 1; // 0x40
	char bOverride_Period : 1; // 0x40
	float Period; // 0x44
};

struct UCurveLinearColorAtlas : UTexture2D {
	uint32_t TextureSize; // 0x100
	TArray<UCurveLinearColor*> GradientCurves; // 0x108
};

struct UParticleModuleTypeDataGpu : UParticleModuleTypeDataBase {
	FGPUSpriteEmitterInfo EmitterInfo; // 0x30
	FGPUSpriteResourceData ResourceData; // 0x2b0
	float CameraMotionBlurAmount; // 0x410
	char bClearExistingParticlesOnInit : 1; // 0x414
};

struct UComboButtonWidgetStyle : USlateWidgetStyleContainerBase {
	FComboButtonStyle ComboButtonStyle; // 0x30
};

struct UMaterialExpressionFloor : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UWB_TooltipSkill_C : UMOTooltipSkill {
	UCanvasPanel* CanvasPanel_1; // 0x290
	UImage* Image_Line; // 0x298
	UTextBlock* TextBlock_1; // 0x2a0
	UTextBlock* WeightText; // 0x2a8
};

struct UMOBrokerBrowseMyPetsPanel : UMOBrokerPanel {
	UMOButton* pMOButton_Close; // 0x2d8
	UMOScrollBox* pMOScrollbox_PetEntries; // 0x2e0
	UMOPetListEntry* cMOPetListEntryClass; // 0x2e8
	UTextBlock* pTextBlock_StableID; // 0x2f0
};

struct USpinBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FSpinBoxStyle SpinBoxStyle; // 0x30
};

struct ULiveLinkVirtualSubjectSourceSettings : ULiveLinkSourceSettings {
	FName SourceName; // 0xa0
};

struct UMOLevelStreamingSubsystem : UMOWorldSubsystemBase {
	bool bEnableTerrainGrid; // 0x51
	AMOLevelStreamingGrid* TerrainGridClass; // 0x58
	TArray<FMOLevelStreamingGroup> vStreamingGroups; // 0x60
	TArray<FName> vIgnoredLayers; // 0x70
	TArray<FMOLevelStreamingInfo> vWaitingToHideQueue; // 0x80
	AMOLevelStreamingGrid* TerrainStreamingGrid; // 0x90
	TWeakObjectPtr<AMOLevelStreamingVolumeManager> StreamingVolumeManager; // 0x98
};

struct UParticleModuleLight_Seeded : UParticleModuleLight {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x120
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

struct UPoseWatch : UObject {
	UEdGraphNode* Node; // 0x28
	FColor PoseWatchColour; // 0x30
};

struct UPathFollowingComponent : UActorComponent {
	UNavMovementComponent* MovementComp; // 0xe8
	ANavigationData* MyNavData; // 0xf8
};

struct UTexture2D : UTexture {
	int32_t LevelIndex; // 0xd8
	int32_t FirstResourceMemMip; // 0xdc
	char bTemporarilyDisableStreaming : 1; // 0xe0
	TextureAddress AddressX; // 0xe1
	TextureAddress AddressY; // 0xe2
	FIntPoint ImportedSize; // 0xe4
};

struct USoundfieldEndpointSubmix : USoundSubmixBase {
	FName SoundfieldEndpointType; // 0x38
	UAudioEndpointSettingsBase* EndpointSettingsClass; // 0x40
	USoundfieldEndpointSettingsBase* EndpointSettings; // 0x48
	USoundfieldEncodingSettingsBase* EncodingSettingsClass; // 0x50
	USoundfieldEncodingSettingsBase* EncodingSettings; // 0x58
	TArray<USoundfieldEffectBase*> SoundfieldEffectChain; // 0x60
};

struct UProceduralFoliageSpawner : UObject {
	int32_t RandomSeed; // 0x28
	float TileSize; // 0x2c
	int32_t NumUniqueTiles; // 0x30
	float MinimumQuadTreeSize; // 0x34
	TArray<FFoliageTypeObject> FoliageTypes; // 0x40
};

struct UMaterialExpressionRuntimeVirtualTextureReplace : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput VirtualTextureOutput; // 0x54
};

struct ASpectatorBeaconHost : AOnlineBeaconHostObject {
	USpectatorBeaconState* State; // 0x248
	bool bLogoutOnSessionTimeout; // 0x2b0
	float SessionTimeoutSecs; // 0x2b4
	float TravelSessionTimeoutSecs; // 0x2b8
};

struct UMOPreviewModePlacement : UMOPreviewMode {
	UMOQuestWidget* pQuestWidgetClass; // 0x50
	TArray<AMOStaticMeshActorPlacementPreview*> PreviewActors; // 0x58
	TArray<UMaterialInstanceDynamic*> PreviewMaterials; // 0x68
	UMOGameInstance* pGameInstance; // 0x78
	USoundCue* pPlacementSound; // 0x80
	UMOQuestWidget* pQuestWidget; // 0x98
};

struct UModelComponent : UPrimitiveComponent {
	UBodySetup* ModelBodySetup; // 0x458
};

struct UMovieSceneMediaTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> MediaSections; // 0x80
};

struct UNiagaraDataInterfaceVector2DCurve : UNiagaraDataInterfaceCurveBase {
	FRichCurve XCurve; // 0x70
	FRichCurve YCurve; // 0xf0
};

struct UPawnAction_Wait : UPawnAction {
	float TimeToWait; // 0x98
};

struct UMaterialExpressionPower : UMaterialExpression {
	FExpressionInput Base; // 0x40
	FExpressionInput Exponent; // 0x54
	float ConstExponent; // 0x68
};

struct UPostProcessComponent : USceneComponent {
	FPostProcessSettings Settings; // 0x200
	float Priority; // 0x750
	float BlendRadius; // 0x754
	float BlendWeight; // 0x758
	char bEnabled : 1; // 0x75c
	char bUnbound : 1; // 0x75c
};

struct UMaterialExpressionSceneTexture : UMaterialExpression {
	FExpressionInput Coordinates; // 0x40
	ESceneTextureId SceneTextureId; // 0x54
	bool bFiltered; // 0x55
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

struct APostProcessVolume : AVolume {
	FPostProcessSettings Settings; // 0x260
	float Priority; // 0x7b0
	float BlendRadius; // 0x7b4
	float BlendWeight; // 0x7b8
	char bEnabled : 1; // 0x7bc
	char bUnbound : 1; // 0x7bc
};

struct ULandscapeMeshProxyComponent : UStaticMeshComponent {
	FGuid LandscapeGuid; // 0x4d0
	TArray<FIntPoint> ProxyComponentBases; // 0x4e0
	int8_t ProxyLOD; // 0x4f0
};

struct UCircularThrobber : UWidget {
	int32_t NumberOfPieces; // 0x108
	float Period; // 0x10c
	float Radius; // 0x110
	USlateBrushAsset* PieceImage; // 0x118
	FSlateBrush Image; // 0x120
	bool bEnableRadius; // 0x1a8
};

struct UParticleModuleEventReceiverKillParticles : UParticleModuleEventReceiverBase {
	char bStopSpawning : 1; // 0x40
};

struct UMODataAssetFishingRod : UMODataAssetEquipmentShared {
	USkeletalMesh* pMesh; // 0x308
	UAnimInstance* RodAnimClass; // 0x310
	UAnimSequenceBase* AddRodAnimations; // 0x318
	USoundCue* pReelinSound; // 0x320
	USoundCue* pReelIsPulledbyFish; // 0x328
	USoundCue* pReelThrowLoop; // 0x330
	USoundCue* pFishingRodCreekLoop; // 0x338
	USoundCue* pFishingRodCreeklow; // 0x340
	USoundCue* pFishingRodCreekMedium; // 0x348
	USoundCue* pFishingRodCreekHard; // 0x350
	USoundCue* pLineStrainLow; // 0x358
	USoundCue* pLineStrainMedium; // 0x360
	USoundCue* pLineStrainHard; // 0x368
};

struct UDynamicEntryBox : UDynamicEntryBoxBase {
	UUserWidget* EntryWidgetClass; // 0x1d8
};

struct UMOCharacterTitleListEntry : UMOWidgetBlueprint {
	UTextBlock* pTextBlockDescription; // 0x260
	UTextBlock* pTextBlockTitleName; // 0x268
	UTextBlock* pTextBlockProgress; // 0x270
	UTextBlock* pTextBlockButton; // 0x278
	ETitlePlacement ETitlePlacement; // 0x280
	UImage* pImage; // 0x288
	UProgressBar* pProgressBar; // 0x290
	UMOButtonLarge* pButton; // 0x298
	UMOWidgetBlueprint* pParentWidget; // 0x2a8
	UMOScrollBox* pParentScrollBox; // 0x2b0
	bool bTitleEarned; // 0x2b8
	int32_t iTitleIndex; // 0x2bc
};

struct USourceEffectSimpleDelayPreset : USoundEffectSourcePreset {
	FSourceEffectSimpleDelaySettings Settings; // 0xa8
};

struct UMaterialExpressionTextureCoordinate : UMaterialExpression {
	int32_t CoordinateIndex; // 0x40
	float UTiling; // 0x44
	float VTiling; // 0x48
	char UnMirrorU : 1; // 0x4c
	char UnMirrorV : 1; // 0x4c
};

struct UChainComponent : UMeshComponent {
	FMulticastInlineDelegate onSoundReached; // 0x468
	FMulticastInlineDelegate onCollide; // 0x478
	UStaticMesh* chainMesh; // 0x488
	FVector Scale; // 0x490
	int32_t Segments; // 0x49c
	FVector additiveRotation; // 0x4a0
	float ChainLength; // 0x4ac
	FVector endPoint; // 0x4b0
	bool attachStart; // 0x4bc
	FComponentReference attachStartTo; // 0x4c0
	FName attachStartToSocket; // 0x4e8
	bool attachEnd; // 0x4f0
	FComponentReference attachEndTo; // 0x4f8
	FName attachEndToSocket; // 0x520
	FComponentReference attachComponentToStart; // 0x528
	bool rotateStartAttachment; // 0x550
	FComponentReference attachComponentToEnd; // 0x558
	bool rotateEndAttachment; // 0x580
	float Gravity; // 0x584
	int32_t Stiffness; // 0x588
	float Friction; // 0x58c
	float chainWidth; // 0x590
	bool selfCollision; // 0x594
	float selfCollisionWidth; // 0x598
	float selfCollisionThreshold; // 0x59c
	int32_t Skip; // 0x5a0
	bool drawDebugger; // 0x5a4
	UInstancedStaticMeshComponent* instanceComponent; // 0x5a8
	float soundThreshold; // 0x5b0
	int32_t soundSkip; // 0x5b4
};

struct UMaterialExpressionAtmosphericFogColor : UMaterialExpression {
	FExpressionInput WorldPosition; // 0x40
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

struct UDestructibleComponent : USkinnedMeshComponent {
	char bFractureEffectOverride : 1; // 0x690
	TArray<FFractureEffect> FractureEffects; // 0x698
	bool bEnableHardSleeping; // 0x6a8
	float LargeChunkThreshold; // 0x6ac
	FMulticastInlineDelegate OnComponentFracture; // 0x6c0
};

struct UUniformVector : UFieldNodeVector {
	float Magnitude; // 0xb0
	FVector Direction; // 0xb4
};

struct USourceEffectPannerPreset : USoundEffectSourcePreset {
	FSourceEffectPannerSettings Settings; // 0x98
};

struct UMovieSceneSignedObject : UObject {
	FGuid Signature; // 0x28
};

struct UCrowdFollowingComponent : UPathFollowingComponent {
	FVector CrowdAgentMoveDirection; // 0x268
};

struct UMovieSceneTakeSettings : UObject {
	FString HoursName; // 0x28
	FString MinutesName; // 0x38
	FString SecondsName; // 0x48
	FString FramesName; // 0x58
	FString SubFramesName; // 0x68
	FString SlateName; // 0x78
};

struct UOculusHMDRuntimeSettings : UObject {
	bool bAutoEnabled; // 0x28
	TArray<FOculusSplashDesc> SplashDescs; // 0x30
	bool bEnableSpecificColorGamut; // 0x40
	EColorSpace ColorSpace; // 0x41
	bool bSupportsDash; // 0x42
	bool bCompositesDepth; // 0x43
	bool bHQDistortion; // 0x44
	float PixelDensityMin; // 0x48
	float PixelDensityMax; // 0x4c
	int32_t CPULevel; // 0x50
	int32_t GPULevel; // 0x54
	EFixedFoveatedRenderingLevel FFRLevel; // 0x58
	bool FFRDynamic; // 0x59
	bool bChromaCorrection; // 0x5a
	bool bRecenterHMDWithController; // 0x5b
	bool bFocusAware; // 0x5c
	bool bRequiresSystemKeyboard; // 0x5d
	EHandTrackingSupport HandTrackingSupport; // 0x5e
};

struct USoundClass : UObject {
	FSoundClassProperties Properties; // 0x28
	TArray<USoundClass*> ChildClasses; // 0xa8
	TArray<FPassiveSoundMixModifier> PassiveSoundMixModifiers; // 0xb8
	USoundClass* ParentClass; // 0xc8
};

struct UNavLinkComponent : UPrimitiveComponent {
	TArray<FNavigationLink> Links; // 0x448
};

struct UARBasicLightEstimate : UARLightEstimate {
	float AmbientIntensityLumens; // 0x28
	float AmbientColorTemperatureKelvin; // 0x2c
	FLinearColor AmbientColor; // 0x30
};

struct UMOTaskDeliveryPanel : UMOTaskPanel {
	UMOButton* pMOButtonDeliver; // 0x2d0
	UMOTaskRewardEntry* cTaskRewardEntryClass; // 0x2d8
	UMOItemSlotPlaceItem* pItemSlot_DeliverItem; // 0x2e0
	UMOScrollBox* pMOScrollBox_Rewards; // 0x2e8
};

struct UMODataAssetArrowBase : UMODataAssetEquipmentShared {
	UStaticMesh* pMesh; // 0x308
	UParticleSystem* pFlyingTrail; // 0x310
};

struct UParticleModuleRotationRate_Seeded : UParticleModuleRotationRate {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x60
};

struct UWB_TabButton_C : UMOUserWidgetTabButton {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	UImage* ImageHovered; // 0x2d8
	UImage* ImagePressed; // 0x2e0
	UTextBlock* TabButton_Text; // 0x2e8
	UVerticalBox* VerticalBox_1; // 0x2f0
	FText TabName; // 0x2f8
	UWB_TabManager_C* TabManager; // 0x310
	int32_t ArrayLocationIndex; // 0x318
	int32_t FontSize; // 0x31c
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

struct UMODataAssetPlayerDefinitions : UPrimaryDataAsset {
	TSoftObjectPtr<UMODataAssetPlayerBaseDefinition> PlaceholderDummy; // 0x30
	TSoftObjectPtr<UMODataAssetPlayerBaseDefinition> HumanMaleKallard; // 0x58
	TSoftObjectPtr<UMODataAssetPlayerBaseDefinition> HumanMaleKhurite; // 0x80
	TSoftObjectPtr<UMODataAssetPlayerBaseDefinition> HumanMaleSarducaan; // 0xa8
	TSoftObjectPtr<UMODataAssetPlayerBaseDefinition> HumanMaleSidoian; // 0xd0
	TSoftObjectPtr<UMODataAssetPlayerBaseDefinition> HumanMaleTindremene; // 0xf8
	TSoftObjectPtr<UMODataAssetPlayerBaseDefinition> AlvarinMaleSheevra; // 0x120
	TSoftObjectPtr<UMODataAssetPlayerBaseDefinition> AlvarinMaleVeela; // 0x148
	TSoftObjectPtr<UMODataAssetPlayerBaseDefinition> OghmirMaleBlainn; // 0x170
	TSoftObjectPtr<UMODataAssetPlayerBaseDefinition> OghmirMaleHuergar; // 0x198
	TSoftObjectPtr<UMODataAssetPlayerBaseDefinition> ThursarMale; // 0x1c0
	TSoftObjectPtr<UMODataAssetPlayerBaseDefinition> RisarMaleVariant00; // 0x1e8
	TSoftObjectPtr<UMODataAssetPlayerBaseDefinition> RisarMaleVariant01; // 0x210
	TSoftObjectPtr<UMODataAssetPlayerBaseDefinition> RisarMaleVariant02; // 0x238
	TSoftObjectPtr<UMODataAssetPlayerBaseDefinition> HumanFemaleKallard; // 0x260
	TSoftObjectPtr<UMODataAssetPlayerBaseDefinition> HumanFemaleKhurite; // 0x288
	TSoftObjectPtr<UMODataAssetPlayerBaseDefinition> HumanFemaleSarducaan; // 0x2b0
	TSoftObjectPtr<UMODataAssetPlayerBaseDefinition> HumanFemaleSidoian; // 0x2d8
	TSoftObjectPtr<UMODataAssetPlayerBaseDefinition> HumanFemaleTindremene; // 0x300
	TSoftObjectPtr<UMODataAssetPlayerBaseDefinition> AlvarinFemaleSheevra; // 0x328
	TSoftObjectPtr<UMODataAssetPlayerBaseDefinition> AlvarinFemaleVeela; // 0x350
	TSoftObjectPtr<UMODataAssetPlayerBaseDefinition> OghmirFemaleBlainn; // 0x378
	TSoftObjectPtr<UMODataAssetPlayerBaseDefinition> OghmirFemaleHuergar; // 0x3a0
	TSoftObjectPtr<UMODataAssetPlayerBaseDefinition> ThursarFemale; // 0x3c8
	TSoftObjectPtr<UMODataAssetPlayerBaseDefinition> RisarFemaleVariant00; // 0x3f0
	TSoftObjectPtr<UMODataAssetPlayerBaseDefinition> RisarFemaleVariant01; // 0x418
	TSoftObjectPtr<UMODataAssetPlayerBaseDefinition> RisarFemaleVariant02; // 0x440
	USoundCue* pSoundCue_RagdollImpactGround; // 0x468
	USoundCue* pSoundCue_Ressurect; // 0x470
	UNiagaraSystem* pParticleSystem_BloodSpray; // 0x478
	UNiagaraSystem* pParticleSystem_BloodSlash; // 0x480
	UNiagaraSystem* pParticleSystem_BloodPiercing; // 0x488
	UNiagaraSystem* pParticleSystem_BloodBlunt; // 0x490
	UNiagaraSystem* pParticleSystem_Resurrect; // 0x498
	UNiagaraSystem* pParticleSystem_MagicDamageHit; // 0x4a0
	UParticleSystem* pSwingBloodTrail; // 0x4a8
	UNiagaraSystem* pParticleSystem_pBloodLimbRemoved; // 0x4b0
	UNiagaraSystem* pParticleSystem_pBloodPiercingDeath; // 0x4b8
	UNiagaraSystem* pParticleSystem_BloodArrowDeath; // 0x4c0
	UNiagaraSystem* pParticleSystem_BloodBluntDeath; // 0x4c8
	UNiagaraSystem* pParticleSystem_KauBeam; // 0x4d0
	TArray<UMaterialInstance*> vBloodDecalsSmall; // 0x4d8
	TArray<UMaterialInstance*> vBloodDecalsLarge; // 0x4e8
	TArray<UMaterialInstance*> vBloodDecalsSpray; // 0x4f8
	TArray<FName> vHitBoneNames; // 0x508
	bool bPlayersArePreloaded; // 0x518
	TArray<UMODataAssetPlayerBaseDefinition*> LoadedPlayerDefinitions; // 0x520
	AMOFishingBobberActor* cFishingBobberClass; // 0x530
};

struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	FGuid ExpressionGUID; // 0x40
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

struct UTreeView : UListView {
	FDelegate BP_OnGetItemChildren; // 0x378
	FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0x388
};

struct UMODataAssetTattooVisuals : UPrimaryDataAsset {
	UTexture* BO_V_Texture_Detail_BCVariation; // 0x30
	UTexture* BO_V_Texture_Detail_Normal; // 0x38
	UTexture* BO_V_Texture_Detail_LerpToSkin_Mask_Texture; // 0x40
	UTexture* BO_V_Texture_Detail_LerpToSkin_Texture; // 0x48
	float BO_V_Layer; // 0x50
	float BO_V_Metallic; // 0x54
	FColor BO_V_TintColor; // 0x58
	float BO_V_BCVariation_BreakUp; // 0x5c
	float BO_V_BCVariation_Desaturate; // 0x60
	float BO_V_BCVariation_DesaturateSkin; // 0x64
	float BO_V_BCVariation_LerpToBase; // 0x68
	float BO_V_BCVariation_LerpToSkin; // 0x6c
	float BO_V_BCVariation_Multiply; // 0x70
	float BO_V_BCVariation_Multiply_High; // 0x74
	float BO_V_BCVariation_Multiply_Low; // 0x78
	float BO_V_BCVariation_MultiplyAdvanced; // 0x7c
	float BO_V_BCVariation_MultiplyLuminanceWeight; // 0x80
	float BO_V_BCVariation_Tiling; // 0x84
	float BO_V_BCVariation_TintOrPure; // 0x88
	float BO_V_FlattenNormal_Base; // 0x8c
	float BO_V_FlattenNormal_Detail; // 0x90
	float BO_V_FlattenNormal_Pattern; // 0x94
	float BO_V_FlattenNormal_Skin_Detail; // 0x98
	float BO_V_FlattenNormal_Stencil; // 0x9c
	float BO_V_LerpToSkin_Mask_TextureHigh; // 0xa0
	float BO_V_LerpToSkin_Mask_TextureLow; // 0xa4
	float BO_V_LerpToSkin_Mask_TextureTiling; // 0xa8
	float BO_V_LerpToSkin_TextureHigh; // 0xac
	float BO_V_LerpToSkin_TextureLow; // 0xb0
	float BO_V_LerpToSkin_TextureTiling; // 0xb4
	float BO_V_LerpToSkin_TextureWeight; // 0xb8
	float BO_V_Normal_DeriveNewTangent; // 0xbc
	float BO_V_Normal_LerpToSkin; // 0xc0
	float BO_V_Normal_Tiling; // 0xc4
	float BO_V_Roughness_LerpToSkin; // 0xc8
	float BO_V_Roughness_Max; // 0xcc
	float BO_V_Roughness_Min; // 0xd0
	float BO_V_Specular_LerpToSkin; // 0xd4
	float BO_V_Specular_Max; // 0xd8
	float BO_V_Specular_Min; // 0xdc
	float BO_V_SSS; // 0xe0
};

struct UMOTaskRewardEntry : UMOUserWidget {
	UTextBlock* pTextBlockRewardName; // 0x2c8
	UTextBlock* pTextBlockRewardAmount; // 0x2d0
	UButton* pButton; // 0x2d8
	UMOTaskDeliveryPanel* pDeliveryPanel; // 0x2e0
	bool bSelected; // 0x2e8
};

struct UMOUserWidgetOptionsLanguage : UMOUserWidgetOptionsPanel {
	TArray<UMOCheckBoxEntryLanguage*> vMOCheckBoxEntries; // 0x2d0
	UMOCheckBoxEntryLanguage* pMOCheckboxEntry_English; // 0x2e0
	UMOCheckBoxEntryLanguage* pMOCheckboxEntry_Swedish; // 0x2e8
	UMOCheckBoxEntryLanguage* pMOCheckboxEntry_German; // 0x2f0
	UMOCheckBoxEntryLanguage* pMOCheckboxEntry_French; // 0x2f8
	UMOCheckBoxEntryLanguage* pMOCheckboxEntry_Spanish; // 0x300
	UMOCheckBoxEntryLanguage* pMOCheckboxEntry_Russian; // 0x308
	UMOCheckBoxEntryLanguage* pMOCheckboxEntry_Italian; // 0x310
	UMOCheckBoxEntryLanguage* pMOCheckboxEntry_Japanese; // 0x318
	UMOCheckBoxEntryLanguage* pMOCheckboxEntry_Chinese_Simpl; // 0x320
	UMOCheckBoxEntryLanguage* pMOCheckboxEntry_Chinese_Trad; // 0x328
	UMOCheckBoxEntryLanguage* pMOCheckboxEntry_Turkish; // 0x330
	UMOCheckBoxEntryLanguage* pMOCheckboxEntry_Polish; // 0x338
	UMOCheckBoxEntryLanguage* pMOCheckboxEntry_Portuguese; // 0x340
	UMOCheckBoxEntryLanguage* pMOCheckboxEntry_Portuguese_BR; // 0x348
	UMOCheckBoxEntryLanguage* pMOCheckboxEntry_Greek; // 0x350
	UMOCheckBoxEntryLanguage* pMOCheckboxEntry_Arabic; // 0x358
	UMOCheckBoxEntryLanguage* pMOCheckboxEntry_Dutch; // 0x360
	UMOCheckBoxEntryLanguage* pMOCheckboxEntry_Czech; // 0x368
	UMOCheckBoxEntryLanguage* pMOCheckboxEntry_Korean; // 0x370
};

struct UMaterialExpressionFmod : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UInterpTrackInstSlomo : UInterpTrackInst {
	float OldTimeDilation; // 0x28
};

struct UAnimSharingTransitionInstance : UAnimInstance {
	TWeakObjectPtr<USkeletalMeshComponent> FromComponent; // 0x2b8
	TWeakObjectPtr<USkeletalMeshComponent> ToComponent; // 0x2c0
	float BlendTime; // 0x2c8
	bool bBlendBool; // 0x2cc
};

struct UEnvQueryTest_InsideWaterBody : UEnvQueryTest {
	bool bIncludeWaves; // 0x1f8
	bool bSimpleWaves; // 0x1f9
	bool bIgnoreExclusionVolumes; // 0x1fa
};

struct ABP_AiEffectAOE_EtherSpikes_C : AMOAiEffectActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	UPointLightComponent* PointLight; // 0x278
	float FadeOut_Fade_28C2A0E74FA7846255C030BA391C7BF0; // 0x280
	ETimelineDirection FadeOut__Direction_28C2A0E74FA7846255C030BA391C7BF0; // 0x284
	UTimelineComponent* FadeOut; // 0x288
	int32_t iIter; // 0x290
	TArray<UNiagaraComponent*> vParticles; // 0x298
};

struct UWB_BasicTooltip_C : UMOBasicTooltip {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c8
	UTextBlock* Text; // 0x2d0
};

struct ALogin_Screen_C : ALevelScriptActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x228
};

struct ULevelStreamingDynamic : ULevelStreaming {
	char bInitiallyLoaded : 1; // 0x148
	char bInitiallyVisible : 1; // 0x148
};

struct UEnvelopeFollowerListener : UActorComponent {
	FMulticastInlineDelegate OnEnvelopeFollowerUpdate; // 0xb0
};

struct UMaterialExpressionConstant4Vector : UMaterialExpression {
	FLinearColor Constant; // 0x40
};

struct USubUVAnimation : UObject {
	UTexture2D* SubUVTexture; // 0x28
	int32_t SubImages_Horizontal; // 0x30
	int32_t SubImages_Vertical; // 0x34
	ESubUVBoundingVertexCount BoundingMode; // 0x38
	EOpacitySourceMode OpacitySourceMode; // 0x39
	float AlphaThreshold; // 0x3c
};

struct UInvalidationBox : UContentWidget {
	bool bCanCache; // 0x120
	bool CacheRelativeTransforms; // 0x121
};

struct UMaterialExpressionDeriveNormalZ : UMaterialExpression {
	FExpressionInput InXY; // 0x40
};

struct UWB_MOCharCreationInfoPanel_C : UMOCharCreationInfoPanel {
	UImage* MO_Logo_Image_2; // 0x370
	UTextBlock* pLabelText; // 0x378
	UTextBlock* pLabelText_4; // 0x380
	UTextBlock* pLabelText_5; // 0x388
	UTextBlock* pLabelText_6; // 0x390
	UImage* pMiddleVertical; // 0x398
	UWB_MO_Scrollbox_Arrow_Down_C* WB_MO_Scrollbox_Arrow_Down; // 0x3a0
	UWB_MO_Scrollbox_Arrow_Up_C* WB_MO_Scrollbox_Arrow_Up; // 0x3a8
};

struct AMagicLeapARPinRenderer : AActor {
	bool bInfoActorsVisibilityOverride; // 0x220
	TMap<FGuid, AMagicLeapARPinInfoActorBase*> AllInfoActors; // 0x228
	AMagicLeapARPinInfoActorBase* ClassToSpawn; // 0x280
};

struct APointLight : ALight {
	UPointLightComponent* PointLightComponent; // 0x230
};

struct UMOEquipmentFishingRodComponent : UMOEquipmentComponent {
	USkeletalMeshComponent* pBaseMesh; // 0xf0
	UMODataAssetFishingRod* pDataAssetFishingRod; // 0xf8
	FMOFishingRodData sEquipmentData; // 0x100
	UMaterialInstanceDynamic* pBaseMID; // 0x128
	UMaterialInstanceDynamic* pCompositeMID; // 0x130
};

struct UCameraShakeBase : UObject {
	bool bSingleInstance; // 0x28
	float ShakeScale; // 0x2c
	APlayerCameraManager* CameraManager; // 0x30
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

struct UDatasmithStaticMeshIFCImportData : UDatasmithStaticMeshImportData {
	FString SourceGlobalId; // 0x28
};

struct UBTDecorator_IsBBEntryOfClass : UBTDecorator_BlackboardBase {
	UObject* TestClass; // 0x90
};

struct UDatasmithDecalComponentTemplate : UDatasmithObjectTemplate {
	int32_t SortOrder; // 0x30
	FVector DecalSize; // 0x34
	UMaterialInterface* Material; // 0x40
};

struct UMaterialShaderQualitySettings : UObject {
	TMap<FName, UShaderPlatformQualitySettings*> ForwardSettingMap; // 0x28
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

struct UAutoDestroySubsystem : UWorldSubsystem {
	TArray<AActor*> ActorsToPoll; // 0x38
};

struct UJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UMOButtonSpellWidget : UMOUserWidget {
	UMOButtonSpell* pButton; // 0x2c8
};

struct UMODataAssetHandle : UMODataAssetEquipmentShared {
	UStaticMesh* pStaticMesh; // 0x308
	FText sDisplayName; // 0x310
	UTexture2D* pIcon; // 0x328
	UNiagaraSystem* pBlockParticles; // 0x330
	UNiagaraSystem* pPerfectBlockParticles; // 0x338
	UNiagaraSystem* pEquipHitParticles; // 0x340
	UNiagaraSystem* pGenericHitParticles; // 0x348
	UParticleSystem* pSwingTrail; // 0x350
	USoundCue* pDealDamageSoundGeneric; // 0x358
	USoundCue* pDealDamageSoundSwing; // 0x360
	USoundCue* pDealDamageSoundStab; // 0x368
	USoundCue* pSwingSound; // 0x370
	USoundCue* pBlockSound; // 0x378
	USoundCue* pPerfectBlockSound; // 0x380
	USoundCue* pEquipHitSound; // 0x388
	USoundCue* pEquipSound; // 0x390
	USoundCue* pUnequipSound; // 0x398
	USoundCue* pDestroyedSound; // 0x3a0
	USoundCue* pPushSound; // 0x3a8
	USoundCue* pHitDuringCharge; // 0x3b0
	TArray<FSocketEmitterPair> vSocketEmitterPairs; // 0x3b8
	TArray<FSocketSoundPair> vSocketSoundPairs; // 0x3c8
	TArray<FSocketLightPair> vSocketLightPairs; // 0x3d8
};

struct UMOTooltip : UUserWidget {
	UOverlay* pOverlay; // 0x260
	UTextBlock* pStolenText; // 0x268
	UTextBlock* pWeightText; // 0x270
	UTextBlock* pDescriptionText; // 0x278
	UTextBlock* pUseDescriptionText; // 0x280
	UGridPanel* pMyGridPanel; // 0x288
};

struct ABP_AiEffectAcidPoison_C : AMOAiEffectActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	FVector vHitLocation; // 0x278
};

struct ULevelSequenceAnimSequenceLink : UAssetUserData {
	TArray<FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks; // 0x28
};

struct UParticleModuleMeshRotationRate_Seeded : UParticleModuleMeshRotationRate {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x78
};

struct ARuntimeVirtualTextureVolume : AActor {
	URuntimeVirtualTextureComponent* VirtualTextureComponent; // 0x220
};

struct ULiveLinkTransformController : ULiveLinkControllerBase {
	FLiveLinkTransformControllerData TransformData; // 0x30
};

struct AARSharedWorldGameState : AGameState {
	TArray<char> PreviewImageData; // 0x290
	TArray<char> ARWorldData; // 0x2a0
	int32_t PreviewImageBytesTotal; // 0x2b0
	int32_t ARWorldBytesTotal; // 0x2b4
	int32_t PreviewImageBytesDelivered; // 0x2b8
	int32_t ARWorldBytesDelivered; // 0x2bc
};

struct UMaterialExpressionCrossProduct : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UDestructibleMesh : USkeletalMesh {
	FDestructibleParameters DefaultDestructibleParameters; // 0x398
	TArray<FFractureEffect> FractureEffects; // 0x420
};

struct ABP_AiEffectLaser_C : AMOAiEffectActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
};

struct UMaterialExpressionSkyAtmosphereLightDirection : UMaterialExpression {
	int32_t LightIndex; // 0x40
};

struct UHapticFeedbackEffect_SoundWave : UHapticFeedbackEffect_Base {
	USoundWave* SoundWave; // 0x28
};

struct UMOChatChannelButton : UMOUserWidget {
	UMOButton* pButton; // 0x2c8
	UTextBlock* pTextField; // 0x2d0
	UMOChatGUI* pChatGUI; // 0x2e8
};

struct UMaterialExpressionFunctionOutput : UMaterialExpression {
	FName OutputName; // 0x40
	FString Description; // 0x48
	int32_t SortPriority; // 0x58
	FExpressionInput A; // 0x5c
	char bLastPreviewed : 1; // 0x70
	FGuid ID; // 0x74
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

struct UARTexture : UTexture {
	EARTextureType TextureType; // 0xd8
	float Timestamp; // 0xdc
	FGuid ExternalTextureGuid; // 0xe0
	FVector2D Size; // 0xf0
};

struct UAISense_Touch : UAISense {
	TArray<FAITouchEvent> RegisteredEvents; // 0x80
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

struct UAudioCurveSourceComponent : UAudioComponent {
	FName CurveSourceBindingName; // 0x868
	float CurveSyncOffset; // 0x870
};

struct ABP_Magic_Ecumenical_MagicReflect_C : AMOMagicEffectBall {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	USceneComponent* DefaultSceneRoot; // 0x228
	UNiagaraComponent* TravelSystem; // 0x230
	ABodyFireEffect_C* NewVar_1; // 0x238
};

struct UAISense_Hearing : UAISense {
	TArray<FAINoiseEvent> NoiseEvents; // 0x80
	float SpeedOfSoundSq; // 0x90
};

struct UMOButtonSkillWidget : UUserWidget {
	UMOButtonSkill* pButton; // 0x260
};

struct UMOSimpleList : UMOUserWidget {
	UListView* pListView; // 0x2d8
	AMOPlayerController* pPlayerController; // 0x2e0
};

struct AMOPaperdollSceneActor : AMOCharacter {
	UMODataAssetAnimationRandomSet* PreviewIdleAnimationSet; // 0xcb0
	EMOPaperdollActorType PaperdollType; // 0xcb8
	bool bPreviewEditorOnlyAppearance; // 0xcb9
	ESex PreviewSex; // 0xcba
	ESpecies PreviewClade; // 0xcbb
	int32_t PreviewRace; // 0xcbc
	float PreviewBodyWeight; // 0xcc0
	float PreviewBodyStrength; // 0xcc4
	int32_t PreviewHair; // 0xcc8
	int32_t PreviewHairColor; // 0xccc
	int32_t PreviewBeard; // 0xcd0
	int32_t PreviewBeardColor; // 0xcd4
	bool bPreviewShowArmor; // 0xcd8
	int32_t PreviewArmor; // 0xcdc
	bool bPreviewShowHelmet; // 0xce0
	bool bPreviewShowCape; // 0xce1
	bool bPreviewShowTorso; // 0xce2
	bool bPreviewShowArmLeft; // 0xce3
	bool bPreviewShowArmRight; // 0xce4
	bool bPreviewShowLegs; // 0xce5
	EResourceGroup PreviewArmorResourceGroup; // 0xce6
	int32_t PreviewArmorResource; // 0xce8
	EEquipmentGroup PreviewEquipmentGroup; // 0xcec
	int32_t PreviewEquipmentSubgroup; // 0xcf0
	int32_t PreviewEquipmentIndex; // 0xcf4
	EResourceGroup PreviewEquipmentResourceGroup; // 0xcf8
	int32_t PreviewEquipmentResource; // 0xcfc
	float fZoomAlpha; // 0xd00
	FTransform InitialTransform; // 0xd10
	FTransform SceneCaptureInitialTransform; // 0xd40
	FIntPoint LastFullscreenResolution; // 0xd70
	bool bUsingCameraCloseupInCharacterCreation; // 0xd78
	ACineCameraActor* LoginCameraFaceCloseup; // 0xd80
	UMODataAssetPlayerBaseDefinition* pPreviewDefinition; // 0xd88
	bool bUsePaperdollLightingChannels; // 0xd90
	ACameraActor* CameraNear; // 0xd98
	ACameraActor* CameraFar; // 0xda0
	AMOSceneCapture2D* pSceneCaptureActor; // 0xda8
	TArray<ASpotLight*> vLights; // 0xdb0
	FMulticastInlineDelegate OnFullscreenRendertargetChanged; // 0xdc0
	FMulticastInlineDelegate OnActiveOrFullscreenChange; // 0xdd0
	UTextureRenderTarget2D* PreviewRenderTarget; // 0xde0
	UTextureRenderTarget2D* FullscreenRenderTarget; // 0xde8
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

struct USourceEffectWaveShaperPreset : USoundEffectSourcePreset {
	FSourceEffectWaveShaperSettings Settings; // 0x98
};

struct UMOGuildStoneCreateGuild : UMOWidgetBlueprint {
	UMOEditableTextBox* pMOEditableTextBoxGuildName; // 0x260
	UMOButtonLarge* pMOButtonLargeCreate; // 0x268
	UTextBlock* pTextBlockValidName; // 0x270
};

struct UBTDecorator_BlackboardBase : UBTDecorator {
	FBlackboardKeySelector BlackboardKey; // 0x68
};

struct UMaterialExpressionFontSample : UMaterialExpression {
	UFont* Font; // 0x40
	int32_t FontTexturePage; // 0x48
};

struct UScrollBarWidgetStyle : USlateWidgetStyleContainerBase {
	FScrollBarStyle ScrollBarStyle; // 0x30
};

struct UMODataAssetHandleDefinitions : UPrimaryDataAsset {
	UMODataAssetEquipmentShared* pSharedData; // 0x30
	TSoftObjectPtr<UMODataAssetHandle> pFallbackHandle; // 0x38
	TSoftObjectPtr<UMODataAssetHandle> pUnarmedHandle; // 0x60
	TArray<TSoftObjectPtr<UMODataAssetHandle>> vHandles; // 0x88
	TArray<TSoftObjectPtr<UMODataAssetHandle>> vAxe1HHandles; // 0x98
	TArray<TSoftObjectPtr<UMODataAssetHandle>> vAxe2HHandles; // 0xa8
	TArray<TSoftObjectPtr<UMODataAssetHandle>> vDaggerHilts; // 0xb8
	TArray<TSoftObjectPtr<UMODataAssetHandle>> vHammer1HHandles; // 0xc8
	TArray<TSoftObjectPtr<UMODataAssetHandle>> vHammer2HHandles; // 0xd8
	TArray<TSoftObjectPtr<UMODataAssetHandle>> vPoleAxePoles; // 0xe8
	TArray<TSoftObjectPtr<UMODataAssetHandle>> vPoleSwordPoles; // 0xf8
	TArray<TSoftObjectPtr<UMODataAssetHandle>> vSpearPoles; // 0x108
	TArray<TSoftObjectPtr<UMODataAssetHandle>> vSword1HHilts; // 0x118
	TArray<TSoftObjectPtr<UMODataAssetHandle>> vSword2HHilts; // 0x128
	TArray<TSoftObjectPtr<UMODataAssetHandle>> vLancePoles; // 0x138
	TArray<TSoftObjectPtr<UMODataAssetHandle>> vFishingPoles; // 0x148
	UMOPhysicalMaterial* pEquipmentPhysMaterialLeft; // 0x158
	UMOPhysicalMaterial* pEquipmentPhysMaterialRight; // 0x160
	bool bHandlePartsArePreloaded; // 0x168
	TArray<UMODataAssetHandle*> PreLoadedHandleParts; // 0x170
};

struct UWB_SplitStack_C : UMOSplitStack {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c8
	UWidgetAnimation* FadeIn; // 0x2d0
	UMOButtonSmall* MOButtonSmall_Cancel; // 0x2d8
	UMOButtonSmall* MOButtonSmall_Split; // 0x2e0
	UMOButtonMinus* NumericDownButton; // 0x2e8
	UMOButtonPlus* NumericUpButton; // 0x2f0
	UMOEditableTextBox* pEditableTextBoxSplit; // 0x2f8
	int32_t Number; // 0x300
	int32_t maxNumber; // 0x304
	FString sItemGuid; // 0x308
	int32_t iDeposit; // 0x318
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

struct UMOGuildStoneDiplomacy : UMOWidgetBlueprint {
	UMOUserWidget* cGuildStoneWarsListEntryClass; // 0x260
	UMOScrollBox* pScrollBox; // 0x268
	UMOEditableTextBox* pMOEditableTextChallengeName; // 0x270
	UMOButtonMedium* pChallenge; // 0x278
};

struct UWB_LoginMessageBox_C : UMOLoginMessageBox {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	UWidgetAnimation* FadeOut; // 0x2d8
	UWidgetAnimation* FadeIn; // 0x2e0
	UImage* Image_102; // 0x2e8
	UTextBlock* pBodyText; // 0x2f0
	UThrobber* pLoadingThrobber; // 0x2f8
	bool bHaveBeenInQueue; // 0x300
};

struct AMatineeActorCameraAnim : AMatineeActor {
	UCameraAnim* CameraAnim; // 0x2c8
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

struct USoundNode : UObject {
	TArray<USoundNode*> ChildNodes; // 0x28
};

struct UMapBuildDataRegistry : UObject {
	ELightingBuildQuality LevelLightingQuality; // 0x28
};

struct UMovieSceneCameraShakeSection : UMovieSceneSection {
	FMovieSceneCameraShakeSectionData ShakeData; // 0xe8
	UMatineeCameraShake* ShakeClass; // 0x108
	float PlayScale; // 0x110
	ECameraShakePlaySpace PlaySpace; // 0x114
	FRotator UserDefinedPlaySpace; // 0x118
};

struct ULayer : UObject {
	FName LayerName; // 0x28
	char bIsVisible : 1; // 0x30
	TArray<FLayerActorStats> ActorStats; // 0x38
};

struct UAREnvironmentCaptureProbe : UARTrackedGeometry {
	FVector Extent; // 0xf8
	UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture; // 0x108
};

struct UVehicleAnimInstance : UAnimInstance {
	UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent; // 0xa40
};

struct UMODataAssetHair : UPrimaryDataAsset {
	bool bIsBaldVariant; // 0x30
	USkeletalMesh* pSkeletalMesh; // 0x38
	UAnimInstance* HairAnimClass; // 0x40
	UPoseAsset* HairPoseAsset; // 0x48
	UMaterialInterface* pMaterialInstance; // 0x50
	FText sDisplayName; // 0x58
};

struct UMODataAssetTattooEffectTextures : UPrimaryDataAsset {
	TArray<FMOTattooEffectTextureStruct> vTextureStruct; // 0x30
};

struct UNiagaraDataInterfaceTexture : UNiagaraDataInterface {
	UTexture* Texture; // 0x38
};

struct UBTService_RunEQS : UBTService_BlackboardBase {
	FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x98
};

struct UBlendProfile : UObject {
	USkeleton* OwningSkeleton; // 0x30
	TArray<FBlendProfileBoneEntry> ProfileEntries; // 0x38
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

struct UGizmoTransformChangeStateTarget : UObject {
	TScriptInterface<IToolContextTransactionProvider> TransactionManager; // 0x50
};

struct UMOPreviewModePlacementDecoration : UMOPreviewModePlacement {
	AMOAvatarStaticMeshBuildableHouse* pPlayerHouse; // 0xf8
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

struct UCapsuleComponent : UShapeComponent {
	float CapsuleHalfHeight; // 0x458
	float CapsuleRadius; // 0x45c
};

struct USourceEffectFilterPreset : USoundEffectSourcePreset {
	FSourceEffectFilterSettings Settings; // 0xb0
};

struct UMODataAssetResource : UPrimaryDataAsset {
	TSoftObjectPtr<UMaterialInstance> pResourceMasterMaterial; // 0x30
	FText sDisplayName; // 0x58
	FColor vColor; // 0x70
	TSoftObjectPtr<USoundCue> pHitSound; // 0x78
	TSoftObjectPtr<UNiagaraSystem> pHitParticles; // 0xa0
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

struct UConsole : UObject {
	ULocalPlayer* ConsoleTargetPlayer; // 0x38
	UTexture2D* DefaultTexture_Black; // 0x40
	UTexture2D* DefaultTexture_White; // 0x48
	TArray<FString> HistoryBuffer; // 0x68
};

struct UDatasmithAssetUserData : UAssetUserData {
	TMap<FName, FString> MetaData; // 0x28
};

struct UNavigationSystemModuleConfig : UNavigationSystemConfig {
	char bStrictlyStatic : 1; // 0x50
	char bCreateOnClient : 1; // 0x50
	char bAutoSpawnMissingNavData : 1; // 0x50
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x50
};

struct UMaterialExpressionComment : UMaterialExpression {
	int32_t SizeX; // 0x40
	int32_t SizeY; // 0x44
	FString Text; // 0x48
	FLinearColor CommentColor; // 0x58
	int32_t FontSize; // 0x68
};

struct UMOFrameLocalPlayer : UMOFrameBase {
	UMOGameUserSettings* pMOGameUserSettings; // 0x328
	UDataTable* pDataTableBuffs; // 0x330
	UMOUserWidgetProgressBar* pProgressBarMana; // 0x340
	UMOUserWidgetProgressBar* pProgressBarStamina; // 0x348
	UMOUserWidgetProgressBar* pProgressBarAir; // 0x350
	UTextBlock* pTextBlockMana; // 0x358
	UTextBlock* pTextBlockStamina; // 0x360
	UTextBlock* pTextBlockAir; // 0x368
	UUniformGridPanel* pUniformGridPanel_Buffs; // 0x370
	TArray<UMOBuff*> vBuffs; // 0x378
	float fBuffDeltaTime; // 0x388
	double CurrentTime; // 0x390
};

struct UMOSteamSubsystem : UEngineSubsystem {
	FMulticastInlineDelegate OnLeaderboardResults; // 0x100
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

struct APlanarReflection : ASceneCapture {
	UPlanarReflectionComponent* PlanarReflectionComponent; // 0x230
	bool bShowPreviewPlane; // 0x238
};

struct USignificanceManager : UObject {
	FSoftClassPath SignificanceManagerClassName; // 0x108
};

struct UGizmoBaseComponent : UPrimitiveComponent {
	FLinearColor Color; // 0x440
	float HoverSizeMultiplier; // 0x450
	float PixelHitDistanceThreshold; // 0x454
};

struct URestrictedGameplayTagsList : UObject {
	FString ConfigFileName; // 0x28
	TArray<FRestrictedGameplayTagTableRow> RestrictedGameplayTagList; // 0x38
};

struct AMOAvatarStaticMeshBuildableGate : AMOAvatarStaticMeshBuildable {
	UStaticMeshComponent* pDoorComponent; // 0x2f8
};

struct UMOChatManager : UMOManager {
	UModChatManager* pModChatManager; // 0x28
};

struct UOculusMR_Settings : UObject {
	EOculusMR_ClippingReference ClippingReference; // 0x28
	bool bUseTrackedCameraResolution; // 0x29
	int32_t WidthPerView; // 0x2c
	int32_t HeightPerView; // 0x30
	float CastingLatency; // 0x34
	FColor BackdropColor; // 0x38
	float HandPoseStateLatency; // 0x3c
	FColor ChromaKeyColor; // 0x40
	float ChromaKeySimilarity; // 0x44
	float ChromaKeySmoothRange; // 0x48
	float ChromaKeySpillRange; // 0x4c
	EOculusMR_PostProcessEffects ExternalCompositionPostProcessEffects; // 0x50
	bool bIsCasting; // 0x51
	EOculusMR_CompositionMethod CompositionMethod; // 0x52
	EOculusMR_CameraDeviceEnum CapturingCamera; // 0x53
};

struct UMOCarouselSelectText : UMOUserWidget {
	TArray<FText> vTextEntries; // 0x2c8
	FText LabelText; // 0x2d8
	int32_t iCurrentIndex; // 0x2f0
	UMOButton* pMOButton_Forward; // 0x318
	UMOButton* pMOButton_Back; // 0x320
	UTextBlock* pLabelText; // 0x328
	UTextBlock* pDisplayText; // 0x330
};

struct UWB_MOCheckBoxEntry_C : UMOCheckBoxEntry {
	FPointerToUberGraphFrame UberGraphFrame; // 0x320
	UHorizontalBox* HorizontalBox_6; // 0x328
};

struct UGeometryCacheTrackStreamable : UGeometryCacheTrack {
	UGeometryCacheCodecBase* Codec; // 0x58
	float StartSampleTime; // 0xc8
};

struct UMovieScene3DConstraintSection : UMovieSceneSection {
	FGuid ConstraintId; // 0xe8
	FMovieSceneObjectBindingID ConstraintBindingID; // 0xf8
};

struct UParticleModuleOrbitBase : UParticleModule {
	char bUseEmitterTime : 1; // 0x30
};

struct UMOCraftingPresetListEntry : UMOWidgetBlueprint {
	UTextBlock* pTextBlockPresetName; // 0x260
	FString sPresetData; // 0x268
	UMOCraftingPresets* pCraftingParent; // 0x278
};

struct UInterpFilter : UObject {
	FString Caption; // 0x28
};

struct UMODataAssetAiChat : UPrimaryDataAsset {
	TArray<FAIChatData> vCombatAskForHelp; // 0x30
	TArray<FAIChatData> vCombatFoundTarget; // 0x40
	TArray<FAIChatData> vCombatTaunt; // 0x50
	TArray<FAIChatData> vCombatStartAttack; // 0x60
	TArray<FAIChatData> vCombatFleeing; // 0x70
	TArray<FAIChatData> vCombatDying; // 0x80
	TArray<FAIChatData> vGeneralLikePlayer; // 0x90
	TArray<FAIChatData> vGeneralDislikePlayer; // 0xa0
	TArray<FAIChatData> vGeneralRoaming; // 0xb0
};

struct UMODragDropOperationSkill : UMODragDropOperation {
	FString sSkillJSon; // 0x88
};

struct USourceEffectPhaserPreset : USoundEffectSourcePreset {
	FSourceEffectPhaserSettings Settings; // 0xa0
};

struct UShaderPlatformQualitySettings : UObject {
	FMaterialQualityOverrides QualityOverrides[0x4]; // 0x28
};

struct UWB_LoginError_C : UMOUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c8
	UMOButtonMedium* CloseButton; // 0x2d0
	UMOButtonClose* MOButtonClose; // 0x2d8
	UMOMultiLineEditableTextBox* MOMultiLineEditableTextBox_ErrorText; // 0x2e0
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

struct UGizmoTransformProxyTransformSource : UGizmoBaseTransformSource {
	UTransformProxy* Proxy; // 0x48
};

struct AMOCharacterAI : AMOCharacter {
	UMODataAssetAiChat* pChatMessages; // 0xcb0
	UMODataAssetNPCConversation* pDataAssetNPCConversation; // 0xcb8
};

struct ULogoutCallbackProxy : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UBTDecorator_KeepInCone : UBTDecorator {
	float ConeHalfAngle; // 0x68
	FBlackboardKeySelector ConeOrigin; // 0x70
	FBlackboardKeySelector Observed; // 0x98
	char bUseSelfAsOrigin : 1; // 0xc0
	char bUseSelfAsObserved : 1; // 0xc0
};

struct UMaterialExpressionAppendVector : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UMOStablesAddPet : UMOUserWidget {
	UTextBlock* pTextBlockPetPoints; // 0x2c8
	UTextBlock* pTextBlockPetPointsMax; // 0x2d0
	UMOScrollBox* pMOScrollBox_Pets; // 0x2d8
	UMOCurrencyWidget* pCurrencyWidget; // 0x2e0
};

struct UMOGMOpenPetition : UUserWidget {
	UMOBorder* pMOBorder; // 0x260
	UTextBlock* pTextBlock_ID; // 0x268
	UTextBlock* pTextBlock_IP; // 0x270
	UTextBlock* pTextBlock_Category; // 0x278
	UTextBlock* pTextBlock_Name; // 0x280
	UTextBlock* pTextBlock_SteamID; // 0x288
	UTextBlock* pTextBlock_Server; // 0x290
	UTextBlock* pTextBlock_TimeStamp; // 0x298
	FString sPlayerReportMessage; // 0x2a0
	UMOGMHUD* pMOGMHUD; // 0x2b0
};

struct UMOWidgetComponentChatBubble : UWidgetComponent {
	AMOCharacter* pCharacterOwner; // 0x590
	AMOCharacter* pCharacterLocal; // 0x598
	float fLifeDefault; // 0x5a4
	float fMinDistance; // 0x5a8
	float fMaxDistance; // 0x5ac
};

struct UMOSocial : UMOUserWidget {
	TArray<UMOUserWidgetTabButtonNew*> vTabButtons; // 0x2c8
	TArray<UMOUserWidget*> vWidgetArray; // 0x2d8
	UMOUserWidgetTabButtonNew* pTabButton_Guild; // 0x2e8
	UMOUserWidgetTabButtonNew* pTabButton_Friends; // 0x2f0
	UMOGuildStoneMembers* pGuildStoneMembers; // 0x2f8
	UMOSocialFriends* pFriends; // 0x300
};

struct UEnvQueryTest_Trace : UEnvQueryTest {
	FEnvTraceData TraceData; // 0x1f8
	FAIDataProviderBoolValue TraceFromContext; // 0x228
	FAIDataProviderFloatValue ItemHeightOffset; // 0x260
	FAIDataProviderFloatValue ContextHeightOffset; // 0x298
	UEnvQueryContext* Context; // 0x2d0
};

struct UInterpTrackInstParticleReplay : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
};

struct ULiveLinkBasicFrameInterpolationProcessor : ULiveLinkFrameInterpolationProcessor {
	bool bInterpolatePropertyValues; // 0x28
};

struct UARPointComponent : UARComponent {
	FARPointUpdatePayload ReplicatedPayload; // 0x278
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
	FNavigationSystemRunMode OperationMode; // 0x1bc
	float DirtyAreasUpdateFreq; // 0x15bc
};

struct UMaterialExpressionMultiply : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UButtonStyleAsset : UObject {
	FButtonStyle ButtonStyle; // 0x28
};

struct APlayerStart : ANavigationObjectBase {
	FName PlayerStartTag; // 0x248
};

struct USystemTimeTimecodeProvider : UTimecodeProvider {
	FFrameRate FrameRate; // 0x30
	bool bGenerateFullFrame; // 0x38
	bool bUseHighPerformanceClock; // 0x39
};

struct UDistributionVectorConstantCurve : UDistributionVector {
	FInterpCurveVector ConstantCurve; // 0x38
	char bLockAxes : 1; // 0x50
	EDistributionVectorLockFlags LockedAxes; // 0x54
};

struct UDatasmithSkyLightComponentTemplate : UDatasmithObjectTemplate {
	ESkyLightSourceType SourceType; // 0x30
	int32_t CubemapResolution; // 0x34
	UTextureCube* Cubemap; // 0x38
};

struct UInterpTrackInstVisibility : UInterpTrackInst {
	EVisibilityTrackAction Action; // 0x28
	float LastUpdatePosition; // 0x2c
};

struct UAREnvironmentCaptureProbeTexture : UTextureCube {
	EARTextureType TextureType; // 0x130
	float Timestamp; // 0x134
	FGuid ExternalTextureGuid; // 0x138
	FVector2D Size; // 0x148
};

struct APaperFlipbookActor : AActor {
	UPaperFlipbookComponent* RenderComponent; // 0x220
};

struct UPacketHandlerProfileConfig : UObject {
	TArray<FString> Components; // 0x28
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

struct UMOCraftingShield : UMOCrafting {
	UMOScrollBox* pScrollBox_Shield; // 0x310
	UMOScrollBox* pScrollBox_ShieldFrame; // 0x318
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_ShieldCoatingMaterial; // 0x320
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_ShieldCoreMaterial; // 0x328
	UMOItemSlotPlaceItem* pItemSlotPlaceItem_ShieldFrameMaterial; // 0x330
	UMaterialInstance* pPreviewMaterial; // 0x338
	FString sShieldName; // 0x340
	FString sShieldMaterialCoreName; // 0x350
	FString sShieldMaterialGripName; // 0x360
	FString sShieldFrameName; // 0x370
	FString sShieldFrameMaterialName; // 0x380
	TArray<FShieldCraftingInfo_ShieldFrame> vCraftingInfo_ShieldFrame; // 0x398
	TArray<FShieldCraftingInfo_Shield> vCraftingInfo_Shield; // 0x3a8
	TArray<UMOCraftingListEntry*> vCraftingShieldGroups; // 0x3b8
};

struct AMOLevelStreamingVolumeManager : AActor {
	TArray<AMOLevelStreamingVolumeBlockingLoadVisible*> BlockingLoadVolumes; // 0x220
	TArray<AMOLevelStreamingVolumeAsyncLoadHidden*> AsyncLoadVolumes; // 0x230
	TMap<FName, FMOLevelStreamingVolumeLevelInfo> AssociatedLevels; // 0x240
};

struct UMOBroker : UMOUserWidget {
	FTimerHandle TimerHandle_UpdatePlayerCoins; // 0x2c8
	FTimerHandle TimerHandle_CheckItems; // 0x2d0
	int32_t iCurTimerRepeats; // 0x2d8
	TArray<FString> vAllValidContentGuids; // 0x2e0
	TArray<FString> vGuidsToIterate; // 0x2f0
	TArray<int32_t> vInvalidCategoryIDs; // 0x300
	TArray<int32_t> vInvalidSubCategoryIDs; // 0x310
	TArray<UMOBrokerPetListEntry*> vPetListEntries; // 0x320
	TArray<UMOBrokerItemListEntry*> vItemListEntries; // 0x330
	UMOEditableTextBox* pMOEditableTextBox_FilterItems; // 0x340
	UMOEditableTextBoxNumbers* pMOEditableTextBox_ActivePage; // 0x348
	UMOButton* pMOButton_Browse; // 0x350
	UMOCharCreationComboBox* pMOComboBox_City; // 0x358
	UMOCharCreationComboBox* pMOComboBox_Sorting; // 0x360
	UMOScrollBox* pMOScrollBox_Categories; // 0x368
	UMOScrollBox* pMOScrollBox_Items; // 0x370
	UCanvasPanel* pCanvasPanel; // 0x378
	TArray<UMOBrokerCategoryEntry*> vCategoryEntries; // 0x380
	UMOBrokerCategoryEntry* pLastSubCategoryClicked; // 0x390
	UMOButton* pMOButton_NextPage; // 0x398
	UMOButton* pMOButton_PreviousPage; // 0x3a0
	UMOBrokerBrowsePanel* pPanel_Browse; // 0x3a8
	UMOBrokerBuyOrdersPanel* pPanel_BuyOrders; // 0x3b0
	UMOBrokerCreateOrdersPanel* pPanel_CreateOrders; // 0x3b8
	UMOBrokerMyOrdersPanel* pPanel_MyMarket; // 0x3c0
	UMOBrokerSellOrdersPanel* pPanel_Sell; // 0x3c8
	UMOBrokerSellPetsPanel* pPanel_SellPets; // 0x3d0
	UMOBrokerBrowseMyPetsPanel* pPanel_BrowseMyPets; // 0x3d8
	EBrokerState eCurBrokerState; // 0x3e0
	EBrokerState ePrevBrokerState; // 0x3e1
	int32_t iCurBrokerID; // 0x3e4
	FFilterInfo CurrentFilterInfo; // 0x3e8
	bool bQueryingAllowed; // 0x400
	int32_t iCurrentPanelIndex; // 0x404
	int32_t iPreviousPanelIndex; // 0x408
	TArray<UMOBrokerPanel*> vPanels; // 0x410
	UCircularThrobber* pCircularThrobber_Loading; // 0x420
	TArray<UMOUserWidgetTabButtonNew*> vMOTabButtons; // 0x428
	UMOUserWidgetTabButtonNew* pMOTabButton_Browse; // 0x438
	UMOUserWidgetTabButtonNew* pMOTabButton_BuyOrders; // 0x440
	UMOUserWidgetTabButtonNew* pMOTabButton_MyMarket; // 0x448
	UMOCurrencyWidget* pMOCurrencyWidget_PlayerCurrency; // 0x450
	UMOButtonClose* pMOButton_Close; // 0x458
	UTextBlock* pTextBlock_ListingName; // 0x460
	UMOBrokerCategoryEntry* cMOCategoryClass; // 0x468
	UMOBrokerCategoryEntry* cMOSubCategoryClass; // 0x470
	UMOBrokerItemListEntry* cMOItemListEntryClass; // 0x478
	UMOBrokerPetListEntry* cMOPetListEntryClass; // 0x480
};

struct UMovieSceneTrackInstance : UObject {
	UObject* AnimatedObject; // 0x28
	bool bIsMasterTrackInstance; // 0x30
	UMovieSceneEntitySystemLinker* Linker; // 0x38
	TArray<FMovieSceneTrackInstanceInput> Inputs; // 0x40
};

struct UToFloatField : UFieldNodeFloat {
	UFieldNodeInt* IntField; // 0xb0
};

struct ASceneCapture2D : ASceneCapture {
	USceneCaptureComponent2D* CaptureComponent2D; // 0x230
};

struct UBlackboardKeyType_Class : UBlackboardKeyType {
	UObject* BaseClass; // 0x30
};

struct AMOMusicList : AActor {
	USoundCue* pTrackList; // 0x220
};

struct UMaterialExpressionDDY : UMaterialExpression {
	FExpressionInput Value; // 0x40
};

struct UMODataAssetArmor : UMODataAssetEquipmentShared {
	EArmorPartType ArmorPartType; // 0x308
	TSoftObjectPtr<USkeletalMesh> pSkeletalMesh; // 0x310
	TSoftClassPtr<UObject> AnimInstanceClass; // 0x338
	FText sDisplayName; // 0x360
	UTexture2D* pIcon; // 0x378
	bool bFullyCoversBodyInSlot; // 0x380
	bool bHideEarsIfHeadPart; // 0x381
	bool bHideBeardIfHeadPart; // 0x382
	bool bHidePenisIfLegsPart; // 0x383
	bool bHideBreastsIfTorsoPart; // 0x384
	bool bSimulateBreastsIfTorsoPart; // 0x385
	bool bOverrideBreastsDefinitionIfTorsoPart; // 0x386
	bool bOverrideBreastsParametersIfTorsoPart; // 0x387
	TSoftObjectPtr<USoundCue> pFootstepSound; // 0x388
	TSoftObjectPtr<USoundCue> pJumpSound; // 0x3b0
	TSoftObjectPtr<USoundCue> pLandingSound; // 0x3d8
	TSoftObjectPtr<USoundCue> pEquipSound; // 0x400
	TArray<FSocketEmitterPair> vSocketEmitterPairs; // 0x428
	TArray<FSocketSoundPair> vSocketSoundPairs; // 0x438
};

struct UMOGuildStoneMembers : UMOUserWidget {
	UMOUserWidget* cGuildStoneMemberListEntryClass; // 0x2c8
	UMOScrollBox* pScrollBox; // 0x2d0
	UMOEditableTextBox* pMOEditableTextInviteName; // 0x2d8
	UMOButtonMedium* pInviteMember; // 0x2e0
	TArray<FText> vGuildMemberRankName; // 0x2e8
};

struct UInteractiveTool : UObject {
	UInputBehaviorSet* InputBehaviors; // 0x48
	TArray<UObject*> ToolPropertyObjects; // 0x50
};

struct UARFaceGeometry : UARTrackedGeometry {
	FVector LookAtTarget; // 0xf8
	bool bIsTracked; // 0x104
	TMap<EARFaceBlendShape, float> BlendShapes; // 0x108
	FTransform LeftEyeTransform; // 0x190
	FTransform RightEyeTransform; // 0x1c0
};

struct APaperCharacter : ACharacter {
	UPaperFlipbookComponent* Sprite; // 0x4b8
};

struct UCloudStorageBase : UPlatformInterfaceBase {
	TArray<FString> LocalCloudFiles; // 0x38
	char bSuppressDelegateCalls : 1; // 0x48
};

struct UMovieSceneCameraCutTrack : UMovieSceneNameableTrack {
	bool bCanBlend; // 0x78
	TArray<UMovieSceneSection*> Sections; // 0x80
};

struct UMaterialExpressionMapARPassthroughCameraUV : UMaterialExpression {
	FExpressionInput Coordinates; // 0x40
};

struct UBTDecorator_BlueprintBase : UBTDecorator {
	AAIController* AIOwner; // 0x68
	AActor* ActorOwner; // 0x70
	TArray<FName> ObservedKeyNames; // 0x78
	char bShowPropertyDetails : 1; // 0x98
	char bCheckConditionOnlyBlackBoardChanges : 1; // 0x98
	char bIsObservingBB : 1; // 0x98
};

struct UMOTaskItemListEntry : UMOItemListEntry {
	UImage* pImage_SelectedBG; // 0x2a0
	UImage* pImage_HoveredBG; // 0x2a8
	uint64_t iCuprumCost; // 0x2b0
	bool bSelectionState; // 0x2b8
};

struct UNodeMappingContainer : UObject {
	TMap<FName, FNodeItem> SourceItems; // 0x28
	TMap<FName, FNodeItem> TargetItems; // 0x78
	TMap<FName, FName> SourceToTarget; // 0xc8
	TSoftObjectPtr<UObject> SourceAsset; // 0x118
	TSoftObjectPtr<UObject> TargetAsset; // 0x140
};

struct UMOUserWidgetOptionsVideo : UMOUserWidgetOptionsPanel {
	bool bFullyInitialized; // 0x2d0
	UMOCheckBoxEntry* pMOCheckBoxEntry_Nudity; // 0x2f8
	UMOCheckBoxEntry* pMOCheckBoxEntry_Gore; // 0x300
	UMOCheckBoxEntry* pMOCheckBoxEntry_MotionBlur; // 0x308
	UMOCheckBoxEntry* pMOCheckBoxEntry_Vsync; // 0x310
	UMOCheckBoxEntry* pMOCheckBoxEntry_YConstrainedFOV; // 0x318
	UMOCheckBoxEntry* pMOCheckBoxEntry_MultithreadedRendering; // 0x320
	UMOCheckBoxEntry* pMOCheckBoxEntry_CharacterDistanceCPUOptimization; // 0x328
	UMOOptionSliderWidget* pSlider_ResolutionScale; // 0x330
	UMOOptionSliderWidget* pSlider_FieldOfView; // 0x338
	UMOOptionSliderWidget* pSlider_ViewDistance; // 0x340
	UMOComboBoxStringEntry* pMOComboBox_WindowMode; // 0x348
	UMOComboBoxStringEntry* pMOComboBox_Resolution; // 0x350
	UMOComboBoxStringEntry* pMOComboBox_Shadows; // 0x358
	UMOComboBoxStringEntry* pMOComboBox_Effects; // 0x360
	UMOComboBoxStringEntry* pMOComboBox_AntiAliasing; // 0x368
	UMOComboBoxStringEntry* pMOComboBox_DLSS; // 0x370
	UMOComboBoxStringEntry* pMOComboBox_PostProcessing; // 0x378
	UMOComboBoxStringEntry* pMOComboBox_Textures; // 0x380
	UMOComboBoxStringEntry* pMOComboBox_Foliage; // 0x388
	UMOComboBoxStringEntry* pMOComboBox_FrameRateCap; // 0x390
	UMOButtonLarge* pMOButton_UseRecommendedSettings; // 0x398
};

struct UMOButtonItem : UMOButton {
	FRequiredData sReqData; // 0x438
	FOptionalData sOptData; // 0x498
	UMaterialInstanceDynamic* pMaterialInstance; // 0x5b0
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

struct UGizmoAxisRotationParameterSource : UGizmoBaseFloatParameterSource {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90
	TScriptInterface<IGizmoTransformSource> TransformSource; // 0xa0
	float Angle; // 0xb0
	FGizmoFloatParameterChange LastChange; // 0xb4
	FVector CurRotationAxis; // 0xbc
	FVector CurRotationOrigin; // 0xc8
	FTransform InitialTransform; // 0xe0
};

struct UMaterialExpressionRuntimeVirtualTextureOutput : UMaterialExpressionCustomOutput {
	FExpressionInput BaseColor; // 0x40
	FExpressionInput Specular; // 0x54
	FExpressionInput Roughness; // 0x68
	FExpressionInput Normal; // 0x7c
	FExpressionInput WorldHeight; // 0x90
	FExpressionInput Opacity; // 0xa4
	FExpressionInput mask; // 0xb8
};

struct UMaterialExpressionSceneColor : UMaterialExpression {
	EMaterialSceneAttributeInputMode InputMode; // 0x40
	FExpressionInput Input; // 0x44
	FExpressionInput OffsetFraction; // 0x58
	FVector2D ConstInput; // 0x6c
};

struct AMOTutorialStep : AActor {
	AMOTutorialStep* pNextStep; // 0x228
	AMOTutorialStep* pPreviousStep; // 0x230
	AMOTutorialStep* pCheckUntilThisStepCompleted; // 0x238
	bool bChainedTutorialSteps; // 0x240
	FText sDescriptionLong; // 0x248
	FText sDescriptionShort; // 0x260
	TArray<FText> vObjectives; // 0x278
	TArray<UMOQuestTaskEntry*> vQuestTaskEntries; // 0x288
	FText sCategory; // 0x298
	UTexture2D* pWaypointMarker; // 0x2b0
	int32_t iStepMax; // 0x2b8
	int32_t iStepCur; // 0x2bc
	int32_t iMovePlayListIndex; // 0x2c0
	UMOTutorialInfo* cTutorialInfoClass; // 0x2c8
	UStaticMeshComponent* pPreviewMesh; // 0x2d0
	UTextRenderComponent* pTextRenderComponent; // 0x2d8
	UBillboardComponent* pSpriteComponent; // 0x2e0
	bool bPlaceCompassMarker; // 0x2e8
	bool bCheckStepEvenWhenSaved; // 0x2e9
	EMOTutorialStepGroup eTutorialStepGroup; // 0x2ea
};

struct UAISense_Team : UAISense {
	TArray<FAITeamStimulusEvent> RegisteredEvents; // 0x80
};

struct UMaterialExpressionSphereMask : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	FExpressionInput Radius; // 0x68
	FExpressionInput Hardness; // 0x7c
	float AttenuationRadius; // 0x90
	float HardnessPercent; // 0x94
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

struct ABP_MusicList_C : AMOMusicList {
	UBillboardComponent* Billboard; // 0x228
};

struct UMovieSceneEntitySystem : UObject {
	UMovieSceneEntitySystemLinker* Linker; // 0x28
};

struct ALevelSequenceMediaController : AActor {
	ALevelSequenceActor* Sequence; // 0x228
	UMediaComponent* MediaComponent; // 0x230
	float ServerStartTimeSeconds; // 0x238
};

struct ARadialForceActor : ARigidBodyBase {
	URadialForceComponent* ForceComponent; // 0x220
};

struct UAnimNotify_PlaySound : UAnimNotify {
	USoundBase* Sound; // 0x38
	float VolumeMultiplier; // 0x40
	float PitchMultiplier; // 0x44
	char bFollow : 1; // 0x48
	FName AttachName; // 0x4c
};

struct USoundAttenuation : UObject {
	FSoundAttenuationSettings Attenuation; // 0x28
};

struct USoundEffectSourcePresetChain : UObject {
	TArray<FSourceEffectChainEntry> Chain; // 0x28
	char bPlayEffectChainTails : 1; // 0x38
};

struct ANavModifierVolume : AVolume {
	UNavArea* AreaClass; // 0x260
	bool bMaskFillCollisionUnderneathForNavmesh; // 0x268
};

struct UEnvQuery : UDataAsset {
	FName QueryName; // 0x30
	TArray<UEnvQueryOption*> Options; // 0x38
};

struct USourceEffectStereoDelayPreset : USoundEffectSourcePreset {
	FSourceEffectStereoDelaySettings Settings; // 0xb4
};

struct UMOHavenInstanceSelect : UMOUserWidget {
	UTextBlock* pTextBlock_InstanceName; // 0x2c8
	UMOEditableTextBox* pMOEditableBox_HavenCode; // 0x2d0
	UMOButtonHold* pMOButtonHold_Confirm; // 0x2d8
};

struct UMaterialExpressionConstantBiasScale : UMaterialExpression {
	FExpressionInput Input; // 0x40
	float Bias; // 0x54
	float Scale; // 0x58
};

struct UClothingAssetBase : UObject {
	FString ImportedFilePath; // 0x28
	FGuid AssetGuid; // 0x38
};

struct UModularSynthComponent : USynthComponent {
	int32_t VoiceCount; // 0x6c0
};

struct UDistributionVector : UDistribution {
	char bCanBeBaked : 1; // 0x30
	char bIsDirty : 1; // 0x30
	char bBakedDataSuccesfully : 1; // 0x30
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

struct UPhysicsConstraintTemplate : UObject {
	FConstraintInstance DefaultInstance; // 0x28
	TArray<FPhysicsConstraintProfileHandle> ProfileHandles; // 0x1e8
	FConstraintProfileProperties DefaultProfile; // 0x1f8
};

struct UMicroTransactionBase : UPlatformInterfaceBase {
	TArray<FPurchaseInfo> AvailableProducts; // 0x38
	FString LastError; // 0x48
	FString LastErrorSolution; // 0x58
};

struct AMOSunSky : AActor {
	TArray<UMaterialInstanceDynamic*> vSkyMaterials; // 0x220
};

struct UNiagaraDataInterfaceArrayInt32 : UNiagaraDataInterfaceArray {
	TArray<int32_t> IntData; // 0x50
};

struct USynthSound : USoundWaveProcedural {
	USynthComponent* OwningSynthComponent; // 0x3c0
};

struct UGizmoCircleComponent : UGizmoBaseComponent {
	FVector Normal; // 0x460
	float Radius; // 0x46c
	float Thickness; // 0x470
	int32_t NumSides; // 0x474
	bool bViewAligned; // 0x478
	bool bOnlyAllowFrontFacingHits; // 0x479
};

struct UMOEquipmentMeleeComponent : UMOEquipmentComponent {
	UStaticMeshComponent* pHeadComponent; // 0xf8
	UStaticMeshComponent* pHandleComponent; // 0x100
	UParticleSystemComponent* pSwingTrailParticleSystemComponent; // 0x108
	UParticleSystemComponent* pBloodTrailParticleSystemComponent; // 0x110
	UMODataAssetHandle* pDataAssetHandle; // 0x118
	UMODataAssetHead* pDataAssetHead; // 0x120
	FMOWeaponData sEquipmentData; // 0x128
	UMaterialInstanceDynamic* pHandleMID; // 0x158
	UMaterialInstanceDynamic* pHeadMID; // 0x160
};

struct UWB_OptionsSlider_C : UMOOptionSliderWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x330
	UImage* Input; // 0x338
	UTextBlock* Percentage_Text; // 0x340
	UImage* Shadow; // 0x348
	USizeBox* SizeBox_1; // 0x350
	UImage* Underline; // 0x358
	float fMinValue; // 0x360
	float fMaxValue; // 0x364
	float fOptionsSliderValue; // 0x368
	float fOptionsSliderModifier; // 0x36c
	FString AppendEndOfStringWith; // 0x370
	bool bRoundOutVariable; // 0x380
	float fPrecisionPower; // 0x384
	FText ToolTip; // 0x388
	float TestVariable; // 0x3a0
	bool BackgroundIsVisible; // 0x3a4
};

struct UParticleModuleLifetime : UParticleModuleLifetimeBase {
	FRawDistributionFloat LifeTime; // 0x30
};

struct UWB_MOColorPicker_C : UMOColorPicker {
	UImage* Image_132; // 0x300
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

struct UInGameAdManager : UPlatformInterfaceBase {
	char bShouldPauseWhileAdOpen : 1; // 0x38
	TArray<FDelegate> ClickedBannerDelegates; // 0x40
	TArray<FDelegate> ClosedAdDelegates; // 0x50
};

struct UNiagaraDataInterfaceGrid2D : UNiagaraDataInterfaceRWBase {
	int32_t NumCellsX; // 0xd8
	int32_t NumCellsY; // 0xdc
	int32_t NumCellsMaxAxis; // 0xe0
	int32_t NumAttributes; // 0xe4
	bool SetGridFromMaxAxis; // 0xe8
	FVector2D WorldBBoxSize; // 0xec
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

struct AMOStaticMeshActorUseContinent : AMOStaticMeshActorUse {
	int32_t m_iContinentToSwitchTo; // 0x2b0
	bool m_bHACK_MOVE_TO_MYRLAND_AND_USE_CONTINENT_AS_LOCATION; // 0x2b4
};

struct UGameplayTask_SpawnActor : UGameplayTask {
	FMulticastInlineDelegate Success; // 0x68
	FMulticastInlineDelegate DidNotSpawn; // 0x78
	AActor* ClassToSpawn; // 0xa0
};

struct UNoiseField : UFieldNodeFloat {
	float MinRange; // 0xb0
	float MaxRange; // 0xb4
	FTransform Transform; // 0xc0
};

struct UWB_CladeGiftsButton_C : UMOCladeGiftButton {
	FPointerToUberGraphFrame UberGraphFrame; // 0x300
	UWidgetAnimation* AnimateActivate; // 0x308
	UWidgetAnimation* GiftLearned; // 0x310
	UImage* ImageShine; // 0x318
	UImage* pBackgroundActive; // 0x320
	UImage* pBackgroundPulse; // 0x328
	UImage* RingCounter; // 0x330
	int32_t CladeGiftIndex; // 0x338
	FText sTooltipBase; // 0x340
	UMOPaperdollCladeGifts* MOPaperdollCladeGifts; // 0x358
	UTexture* SlotImage; // 0x360
	FName CladeGiftName; // 0x368
	UWB_CladeButtonManager_C* CladeGiftsButtonManagerReference; // 0x370
	bool bActive; // 0x378
	bool bCanBeActive; // 0x379
	bool bHoldingToActivate; // 0x37a
	UAudioComponent* pAudioComponent; // 0x380
};

struct AMOClouds : AActor {
	float fCloudDensity; // 0x220
	float fCloudCoverage; // 0x224
	TArray<UMaterialInstanceDynamic*> vSkyMaterials; // 0x228
};

struct UBlackboardKeyType_Object : UBlackboardKeyType {
	UObject* BaseClass; // 0x30
};

struct ULandscapeSplineSegment : UObject {
	FLandscapeSplineSegmentConnection Connections[0x2]; // 0x28
	FInterpCurveVector SplineInfo; // 0x58
	TArray<FLandscapeSplineInterpPoint> Points; // 0x70
	FBox Bounds; // 0x80
	TArray<USplineMeshComponent*> LocalMeshComponents; // 0xa0
};

struct UVirtualTexture2D : UTexture2D {
	FVirtualTextureBuildSettings Settings; // 0x100
	bool bContinuousUpdate; // 0x10c
	bool bSinglePhysicalSpace; // 0x10d
};

struct UInterpTrackLinearColorProp : UInterpTrackLinearColorBase {
	FName PropertyName; // 0x90
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

struct UARCandidateObject : UDataAsset {
	TArray<char> CandidateObjectData; // 0x30
	FString FriendlyName; // 0x40
	FBox BoundingBox; // 0x50
};

struct UParticleModuleRotation_Seeded : UParticleModuleRotation {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x60
};

struct UParticleModuleVectorFieldRotationRate : UParticleModuleVectorFieldBase {
	FVector RotationRate; // 0x30
};

struct UBTDecorator_Blackboard : UBTDecorator_BlackboardBase {
	int32_t IntValue; // 0x90
	float FloatValue; // 0x94
	FString StringValue; // 0x98
	FString CachedDescription; // 0xa8
	char OperationType; // 0xb8
	EBTBlackboardRestart NotifyObserver; // 0xb9
};

struct UNiagaraDataInterfaceRenderTarget2D : UNiagaraDataInterfaceRWBase {
	FIntPoint Size; // 0xd8
	ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe0
	char bOverrideFormat : 1; // 0xe1
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8
	TMap<uint64_t, UTextureRenderTarget2D*> ManagedRenderTargets; // 0x108
};

struct UComponentDelegateBinding : UDynamicBlueprintBinding {
	TArray<FBlueprintComponentDelegateBinding> ComponentDelegateBindings; // 0x28
};

struct UParticleModuleAccelerationBase : UParticleModule {
	char bAlwaysInWorldSpace : 1; // 0x30
};

struct UMOBuildable : UMOUserWidget {
	UMOButtonClose* pMOButton_Close; // 0x2d0
	TArray<UMOUserWidgetTabButtonNew*> vTabButtons; // 0x2d8
	UMOUserWidgetTabButtonNew* pMOTabButton_Info; // 0x2e8
	UMOUserWidgetTabButtonNew* pMOTabButton_Upkeep; // 0x2f0
	UMOUserWidgetTabButtonNew* pMOTabButton_Settings; // 0x2f8
	TArray<UMOBuildablePanel*> vPanels; // 0x300
	AMOAvatarStaticMeshBuildable* pMOAvatarStaticMeshBuildable; // 0x310
	UMOBuildableInfoPanel* pMOBuildableInfo; // 0x318
	UMOBuildableUpkeepPanel* pMOBuildableUpkeep; // 0x320
	UMOBuildableSettingsPanel* pMOBuildableSettings; // 0x328
	UTextBlock* pTextBlock_PanelName; // 0x330
};

struct ABP_MOPaperdollSceneActor_C : AMOPaperdollSceneActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0xe10
	float Timeline_0_fAnimate_0427BD824690110BB9A500B1B94A3E59; // 0xe18
	ETimelineDirection Timeline_0__Direction_0427BD824690110BB9A500B1B94A3E59; // 0xe1c
	UTimelineComponent* Timeline_1; // 0xe20
	FMOFullEquipmentData sDefaultEquipment; // 0xe28
	FMOCharacterDecorationData sDefaultDecoration; // 0x1058
	FMOCharacterBodyData sDefaultBody; // 0x10a0
	bool bDissolved; // 0x10d0
	FVector NearCamearOffset; // 0x10d4
	AActor* CameraRoot; // 0x10e0
};

struct UWorldComposition : UObject {
	TArray<ULevelStreaming*> TilesStreaming; // 0x48
	double TilesStreamingTimeThreshold; // 0x58
	bool bLoadAllTilesDuringCinematic; // 0x60
	bool bRebaseOriginIn3DSpace; // 0x61
	float RebaseOriginDistance; // 0x64
};

struct UAIPerceptionSystem : UAISubsystem {
	TArray<UAISense*> Senses; // 0x88
	float PerceptionAgingRate; // 0x98
};

struct UMOUserWidgetProgressBar : UMOUserWidget {
	UImage* pImageHighlights; // 0x2c8
	UImage* pImageBar; // 0x2d0
	UImage* pImageBarLerp; // 0x2d8
	UImage* pImageGreybar; // 0x2e0
	FLinearColor FillColorAndOpacity; // 0x2f4
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

struct UDatasmithLandscapeTemplate : UDatasmithObjectTemplate {
	UMaterialInterface* LandscapeMaterial; // 0x30
	int32_t StaticLightingLOD; // 0x38
};

struct UMOKVOIPSubsystem : UGameInstanceSubsystem {
	FString loggedInPlayerSteamID; // 0x38
	FMulticastInlineDelegate OnVoiceFeedbackTick; // 0x50
};

struct UAsyncTask_LoadXRDeviceVisComponent : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnModelLoaded; // 0x30
	FMulticastInlineDelegate OnLoadFailure; // 0x40
	UPrimitiveComponent* SpawnedComponent; // 0x58
};

struct UVOIPTalker : UActorComponent {
	FVoiceSettings Settings; // 0xb0
};

struct ANavigationObjectBase : AActor {
	UCapsuleComponent* CapsuleComponent; // 0x228
	UBillboardComponent* GoodSprite; // 0x230
	UBillboardComponent* BadSprite; // 0x238
	char bIsPIEPlayerStart : 1; // 0x240
};

struct UBaseMediaSource : UMediaSource {
	FName PlayerName; // 0x80
};

struct AMOLevelStreamingGrid : AActor {
	bool bInitialized; // 0x220
	USceneComponent* Root; // 0x228
	float TickUpdateDelay; // 0x230
	float TileSize; // 0x234
	int32_t GridSize; // 0x238
	bool bReverseX; // 0x23c
	bool bReverseY; // 0x23d
	bool bDrawDebug; // 0x23e
	bool bShowInPIE; // 0x23f
	FMOLevelStreamingDistanceZones StreamingDistances; // 0x240
	float StreamingDistancesFactorLOD1; // 0x24c
	FMOLevelStreamingDistanceZones StreamingDistancesLOD0; // 0x250
	FMOLevelStreamingDistanceZones StreamingDistancesLOD1; // 0x25c
	float TickTimer; // 0x268
	TArray<FMOLevelStreamingGridTile> LOD0Tiles; // 0x270
	TArray<FMOLevelStreamingGridTile> LOD1Tiles; // 0x280
	TArray<FMOLevelStreamingGridTile> LOD2Tiles; // 0x290
	int32_t GridSizeLOD; // 0x2a0
	float TileSizeLOD; // 0x2a4
	int32_t GridLastIndex; // 0x2a8
	int32_t GridLastIndexLOD; // 0x2ac
	float TileExtents; // 0x2b0
	float TileExtentsLOD; // 0x2b4
	FVector GridOrigin; // 0x2b8
};

struct UMOUserWidgetCarouselSelect : UMOUserWidget {
	int32_t iSelectIndex; // 0x2c8
	bool bValidSelection; // 0x2cc
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

struct AWheeledVehicle : APawn {
	USkeletalMeshComponent* Mesh; // 0x280
	UWheeledVehicleMovementComponent* VehicleMovement; // 0x288
};

struct UClickDragInputBehavior : UAnyButtonInputBehavior {
	bool bUpdateModifiersDuringDrag; // 0x120
};

struct UMOBuildableInfoPanel : UMOBuildablePanel {
	UMOButton* pMOButtonAddResource; // 0x2d0
	UMOItemSlotPlaceItem* pItemSlot_AddResource; // 0x2d8
	UTextBlock* pTextBlock_HouseName; // 0x2e0
	UTextBlock* pTextBlock_OwnerText; // 0x2e8
	UTextBlock* pTextBlock_OwnerName; // 0x2f0
	UTextBlock* pTextBlock_GuildText; // 0x2f8
	UTextBlock* pTextBlock_GuildName; // 0x300
	UTextBlock* pTextBlock_Health; // 0x308
	UTextBlock* pTextBlock_Wood; // 0x310
	UTextBlock* pTextBlock_Stone; // 0x318
	UTextBlock* pTextBlock_Metal; // 0x320
	UMOUserWidgetProgressBar* pWB_ProgressBar_Health; // 0x328
	UMOUserWidgetProgressBar* pWB_ProgressBar_Wood; // 0x330
	UMOUserWidgetProgressBar* pWB_ProgressBar_Stone; // 0x338
	UMOUserWidgetProgressBar* pWB_ProgressBar_Metal; // 0x340
};

struct UWmfMediaSettings : UObject {
	bool AllowNonStandardCodecs; // 0x28
	bool LowLatency; // 0x29
	bool NativeAudioOut; // 0x2a
	bool HardwareAcceleratedVideoDecoding; // 0x2b
};

struct UMaterialExpressionBreakMaterialAttributes : UMaterialExpression {
	FMaterialAttributesInput MaterialAttributes; // 0x40
};

struct UBTService_BlackboardBase : UBTService {
	FBlackboardKeySelector BlackboardKey; // 0x70
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

struct UAB_CH_AI_Quadruped_C : UMOAnimationInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x530
	FAnimNode_Root AnimGraphNode_Root; // 0x538
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5; // 0x568
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_35; // 0x6c0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_34; // 0x6e8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_33; // 0x710
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_32; // 0x738
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_31; // 0x760
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_30; // 0x788
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_29; // 0x7b0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_28; // 0x7d8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0x800
	FAnimNode_StateResult AnimGraphNode_StateResult_19; // 0x828
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_5; // 0x858
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x928
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13; // 0x950
	FAnimNode_StateResult AnimGraphNode_StateResult_18; // 0x9d0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0xa00
	FAnimNode_StateResult AnimGraphNode_StateResult_17; // 0xa28
	FAnimNode_StateMachine AnimGraphNode_StateMachine_5; // 0xa58
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_27; // 0xb08
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_26; // 0xb30
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_25; // 0xb58
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_24; // 0xb80
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_23; // 0xba8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_22; // 0xbd0
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0xbf8
	FAnimNode_StateResult AnimGraphNode_StateResult_16; // 0xc48
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0xc78
	FAnimNode_StateResult AnimGraphNode_StateResult_15; // 0xcf8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0xd28
	FAnimNode_StateResult AnimGraphNode_StateResult_14; // 0xda8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0xdd8
	FAnimNode_StateResult AnimGraphNode_StateResult_13; // 0xe58
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0xe88
	FAnimNode_StateResult AnimGraphNode_StateResult_12; // 0xf08
	FAnimNode_StateMachine AnimGraphNode_StateMachine_4; // 0xf38
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0xfe8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3; // 0x1140
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3; // 0x1160
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x1180
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x11c8
	FAnimNode_Inertialization AnimGraphNode_Inertialization; // 0x12d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x1340
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x13c0
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_4; // 0x1440
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_2; // 0x1510
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_2; // 0x1600
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x16c8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_21; // 0x1768
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_20; // 0x1790
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_19; // 0x17b8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18; // 0x17e0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17; // 0x1808
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0x1830
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0x1858
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x1880
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x18a8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x18d0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x18f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x1920
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x1948
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x1a10
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x1a90
	FAnimNode_StateResult AnimGraphNode_StateResult_11; // 0x1b10
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x1b40
	FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x1bc0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4; // 0x1bf0
	FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x1cd8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x1d08
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; // 0x1d30
	FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x1e18
	FMOAnimNode_RandomPlayer MOAnimGraphNode_RandomPlayer; // 0x1e48
	FAnimNode_Slot AnimGraphNode_Slot; // 0x1f68
	FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x1fb0
	FAnimNode_StateMachine AnimGraphNode_StateMachine_3; // 0x1fe0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x2090
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x2178
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x2280
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x22a0
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator; // 0x22c0
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_3; // 0x23b0
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_2; // 0x2480
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x2550
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x2578
	FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve; // 0x25a0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x25f8
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x26e0
	FAnimNode_RefPose AnimGraphNode_IdentityPose; // 0x2710
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x2728
	FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x2758
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive; // 0x2808
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x28d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x2900
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2928
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2950
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2978
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x29a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x29c8
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x2a48
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x2a78
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x2af8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2b28
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x2ba8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x2bd8
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2c00
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x2c30
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x2ce0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x2e38
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x2f90
	FMOAnimNode_HeadLookAt MOAnimGraphNode_HeadLookAt; // 0x2fc0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3120
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x31c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x3318
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x3340
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x3360
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x3380
	float WalkCutoffSpeed; // 0x33a8
	float RunCutoffSpeed; // 0x33ac
	UAnimSequenceBase* Turn_Left_181; // 0x33b0
	UAnimSequenceBase* Turn_Right_181; // 0x33b8
	UBlendSpace1D* Blend Space; // 0x33c0
	UAnimSequenceBase* SwimIdle; // 0x33c8
	UAnimSequenceBase* SwimMoving; // 0x33d0
	UAnimSequenceBase* OnDeath; // 0x33d8
	float TurnWhileMovingAngle; // 0x33e0
	float RollWhileMovingAngle; // 0x33e4
	FRotator PelvisWhileMovingRotator; // 0x33e8
	UBlendSpaceBase* AimOffsetAsset; // 0x33f8
	int32_t Max; // 0x3400
	float IdleToTurningBlendTime; // 0x3404
	float AngularSpeedForFullBankAndTurn; // 0x3408
	float InterpSpeedForFullBankAndTurn; // 0x340c
	float SpeedForStartBanking; // 0x3410
	float SpeedForFullBanking; // 0x3414
	float FullBankAngleWhileTurning; // 0x3418
	float FullTurnAngleWhileMoving; // 0x341c
	float MinAngularVelocityForBankingAndTurning; // 0x3420
	float MovementDirectionYaw_QuadrupedTurningSmoothed; // 0x3424
	FKawaiiPhysicsSettings PhysicsSettings; // 0x3428
	UAnimSequenceBase* SequenceFalling; // 0x3440
	UAnimSequenceBase* SequenceJump; // 0x3448
	UAnimSequenceBase* SequenceLanding; // 0x3450
};

struct UGeometryCache : UObject {
	TArray<UMaterialInterface*> Materials; // 0x30
	TArray<UGeometryCacheTrack*> Tracks; // 0x40
	int32_t StartFrame; // 0x60
	int32_t EndFrame; // 0x64
};

struct APartyBeaconClient : AOnlineBeaconClient {
	FString DestSessionId; // 0x2e0
	FPartyReservation PendingReservation; // 0x2f0
	EClientRequestType RequestType; // 0x340
	bool bPendingReservationSent; // 0x341
	bool bCancelReservation; // 0x342
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

struct UHierarchicalLODSetup : UObject {
	TArray<FHierarchicalSimplification> HierarchicalLODSetup; // 0x28
	TSoftObjectPtr<UMaterialInterface> OverrideBaseMaterial; // 0x38
};

struct AWaterMeshActor : AActor {
	UTexture2D* WaterVelocityTexture; // 0x220
	UWaterMeshComponent* WaterMesh; // 0x228
};

struct UGetGeoLocationAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct AGameSession : AInfo {
	int32_t MaxSpectators; // 0x220
	int32_t MaxPlayers; // 0x224
	int32_t MaxPartySize; // 0x228
	char MaxSplitscreensPerConnection; // 0x22c
	bool bRequiresPushToTalk; // 0x22d
	FName SessionName; // 0x230
};

struct UAudioCaptureComponent : USynthComponent {
	int32_t JitterLatencyFrames; // 0x6c0
};

struct UUMGSequenceTickManager : UObject {
	TSet<TWeakObjectPtr<UUserWidget>> WeakUserWidgets; // 0x28
	UMovieSceneEntitySystemLinker* Linker; // 0x78
};

struct UAnimSequenceLevelSequenceLink : UAssetUserData {
	FGuid SkelTrackGuid; // 0x28
	FSoftObjectPath PathToLevelSequence; // 0x38
};

struct UMOUserWidgetWaypoint : UMOUserWidget {
	UMaterial* pWaypointMaterial; // 0x2c8
	UImage* pImage; // 0x2d0
	UTextBlock* pTextBlock_WaypointName; // 0x2d8
	UImage* pImage_WaypointName; // 0x2e0
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

struct UParticleModulePivotOffset : UParticleModuleLocationBase {
	FVector2D PivotOffset; // 0x30
};

struct UFoliageType_Actor : UFoliageType {
	AActor* ActorClass; // 0x3b0
	bool bShouldAttachToBaseComponent; // 0x3b8
};

struct UThrobber : UWidget {
	int32_t NumberOfPieces; // 0x108
	bool bAnimateHorizontally; // 0x10c
	bool bAnimateVertically; // 0x10d
	bool bAnimateOpacity; // 0x10e
	USlateBrushAsset* PieceImage; // 0x110
	FSlateBrush Image; // 0x118
};

struct UMOBuildableSettingsPanel : UMOBuildablePanel {
	UMORenameUserWidget* pMORenameWidget; // 0x2d0
	UMOButton* pMOButton_CreateKey; // 0x2d8
	UMOButton* pMOButton_Transfer; // 0x2e0
	UMOButton* pMOButton_ChangeLock; // 0x2e8
	UMOButton* pMOButton_Rename; // 0x2f0
};

struct UMOUserWidgetCompassCircle : UMOUserWidgetCompass {
	UImage* compassImage; // 0x2e8
	UImage* markerImage; // 0x2f0
};

struct APhysicsThruster : ARigidBodyBase {
	UPhysicsThrusterComponent* ThrusterComponent; // 0x220
};

struct UMOItemSlotStatic : UMOItemSlot {
	UMOUserWidget* pParent; // 0x2b0
};

struct UBuoyancyComponent : UActorComponent {
	TArray<FSphericalPontoon> Pontoons; // 0xb0
	FMulticastInlineDelegate OnEnteredWaterDelegate; // 0xc0
	FMulticastInlineDelegate OnExitedWaterDelegate; // 0xd0
	FBuoyancyData BuoyancyData; // 0xe0
	TArray<AWaterBody*> CurrentWaterBodies; // 0x130
	UPrimitiveComponent* SimulatingComponent; // 0x140
};

struct UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> CameraShakeSections; // 0x80
};

struct UMOMessageBox : UMOUserWidget {
	UMOCurrencyWidget* pMOCurrencyWidget; // 0x2e8
	UTextBlock* pCaptionText; // 0x2f0
	UTextBlock* pBodyText; // 0x2f8
	UMOButton* pOKButton; // 0x300
	UMOButton* pCancelButton; // 0x308
	UTextBlock* pOKButtonText; // 0x310
	UTextBlock* pCancelButtonText; // 0x318
	UThrobber* pLoadingThrobber; // 0x320
	USpacer* pSpacer; // 0x328
	UMOContainer* pContainer; // 0x368
};

struct UGridPanel : UPanelWidget {
	TArray<float> ColumnFill; // 0x120
	TArray<float> RowFill; // 0x130
};

struct UOnlinePIESettings : UDeveloperSettings {
	bool bOnlinePIEEnabled; // 0x38
	TArray<FPIELoginSettingsInternal> Logins; // 0x40
};

struct UMOJournalNoteGroupEntry : UMOJournalGroupEntry {
	UMOButton* pMOButton_AddNote; // 0x2f8
	UMOButton* pMOButton_RemoveGroup; // 0x300
	UMOButton* pMOButton_RenameGroup; // 0x308
};

struct UWB_MessageBox_C : UMOMessageBox {
	FPointerToUberGraphFrame UberGraphFrame; // 0x378
	UWidgetAnimation* FadeIn; // 0x380
};

struct UMaterialExpressionReroute : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UMaterialExpressionRotateAboutAxis : UMaterialExpression {
	FExpressionInput NormalizedRotationAxis; // 0x40
	FExpressionInput RotationAngle; // 0x54
	FExpressionInput PivotPoint; // 0x68
	FExpressionInput Position; // 0x7c
	float Period; // 0x90
};

struct UAnimCompress_RemoveEverySecondKey : UAnimCompress {
	int32_t MinKeys; // 0x40
	char bStartAtSecondKey : 1; // 0x44
};

struct AWaterBodyCustom : AWaterBody {
	UCustomMeshGenerator* CustomGenerator; // 0xdd0
};

struct UAISenseConfig_Blueprint : UAISenseConfig {
	UAISense_Blueprint* Implementation; // 0x48
};

struct UTextBlockWidgetStyle : USlateWidgetStyleContainerBase {
	FTextBlockStyle TextBlockStyle; // 0x30
};

struct AMOCharacterSpirit : AMOCharacter {
	AMOSpiritArm* cSpiritArmClass; // 0xcb0
};

struct UMOCraftingPresets : UMOUserWidget {
	FString sCraftingPresetType; // 0x2c8
	UMOCrafting* pCraftingParent; // 0x2d8
	UMOScrollBox* pScrollBox; // 0x2e0
	UMOWidgetBlueprint* cCraftingPresetListEntryClass; // 0x2e8
};

struct UPaperGroupedSpriteComponent : UMeshComponent {
	TArray<UMaterialInterface*> InstanceMaterials; // 0x468
	TArray<FSpriteInstanceData> PerInstanceSpriteData; // 0x478
};

struct UMODataAssetBowBase : UMODataAssetEquipmentShared {
	UMODataAssetBowBase* pCompositeDefinition; // 0x308
	EBowTypeGroup eBowType; // 0x310
	USkeletalMesh* pMesh; // 0x318
	UMOAnimationInstanceBow* BowAnimClass; // 0x320
	UAnimSequenceBase* BowPullAnimation; // 0x328
	float StringRestDistance; // 0x330
	FText sDisplayName; // 0x338
	UTexture2D* pIcon; // 0x350
	UNiagaraSystem* pEquipHitParticles; // 0x358
	USoundCue* pEquipHitSound; // 0x360
	USoundCue* pEquipSound; // 0x368
	USoundCue* pUnequipSound; // 0x370
	USoundCue* pDestroyedSound; // 0x378
	USoundCue* pChargeSound; // 0x380
	USoundCue* pReleaseArrowSound; // 0x388
	TArray<FSocketEmitterPair> vSocketEmitterPairs; // 0x390
	TArray<FSocketSoundPair> vSocketSoundPairs; // 0x3a0
	TArray<FSocketLightPair> vSocketLightPairs; // 0x3b0
};

struct UMOSkillsTreeListEntry : UMOWidgetBlueprint {
	UVerticalBox* pChildren; // 0x260
	UTextBlock* pTextBlockSkillName; // 0x268
	UTextBlock* pTextBlockSkillLevel; // 0x270
	UTextBlock* pTextBlockSkillSub; // 0x278
	float fDepthOffset; // 0x280
	UMOSkillsTree* pSkillTreeParent; // 0x2a0
	UMOSkillsTreeListEntry* pParentEntry; // 0x2a8
	TArray<UMOSkillsTreeListEntry*> vChildren; // 0x2b0
};

struct UWB_MOOptionsAudioPanel_C : UMOUserWidgetOptionsAudio {
	FPointerToUberGraphFrame UberGraphFrame; // 0x320
	UImage* Image_Line_Audio_1; // 0x328
	UImage* Image_Line_Audio_2; // 0x330
	UWB_MOOptionsAudioPanel_VoiceMeter_C* WB_MOOptionsAudioPanel_VoiceMeter; // 0x338
};

struct ABP_AiEffectWeb_C : AMOAiEffectActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
};

struct UMagicLeapARPinContentBindings : USaveGame {
	TMap<FGuid, FMagicLeapARPinObjectIdList> AllContentBindings; // 0x28
};

struct UMOCategoryEntry : UMOUserWidget {
	UMOText* pMOText; // 0x2c8
};

struct AOnlineBeaconHost : AOnlineBeacon {
	int32_t ListenPort; // 0x250
	TArray<AOnlineBeaconClient*> ClientActors; // 0x258
};

struct UPawnMovementComponent : UNavMovementComponent {
	APawn* PawnOwner; // 0x130
};

struct UNiagaraDataInterfaceLandscape : UNiagaraDataInterface {
	AActor* SourceLandscape; // 0x38
};

struct UMaterialExpressionDepthOfFieldFunction : UMaterialExpression {
	EDepthOfFieldFunctionValue FunctionValue; // 0x40
	FExpressionInput Depth; // 0x44
};

struct UAISense : UObject {
	float DefaultExpirationAge; // 0x28
	EAISenseNotifyType NotifyType; // 0x2c
	char bWantsNewPawnNotification : 1; // 0x30
	char bAutoRegisterAllPawnsAsSources : 1; // 0x30
	UAIPerceptionSystem* PerceptionSystemInstance; // 0x38
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

struct UMODataAssetShield : UMODataAssetEquipmentShared {
	UStaticMesh* pStaticMesh; // 0x308
	float fFrameScale; // 0x310
	EShieldGroup eShieldType; // 0x314
	FText sDisplayName; // 0x318
	UTexture2D* pIcon; // 0x330
	UNiagaraSystem* pBlockParticles; // 0x338
	UNiagaraSystem* pPerfectBlockParticles; // 0x340
	UNiagaraSystem* pEquipHitParticles; // 0x348
	USoundCue* pBlockSound; // 0x350
	USoundCue* pPerfectBlockSound; // 0x358
	USoundCue* pEquipHitSound; // 0x360
	USoundCue* pEquipSound; // 0x368
	USoundCue* pUnequipSound; // 0x370
	USoundCue* pDestroyedSound; // 0x378
	USoundCue* pPushSound; // 0x380
	TArray<FSocketEmitterPair> vSocketEmitterPairs; // 0x388
	TArray<FSocketSoundPair> vSocketSoundPairs; // 0x398
	TArray<FSocketLightPair> vSocketLightPairs; // 0x3a8
};

struct ABP_Sky_Sphere_C : AActor {
	UStaticMeshComponent* SkySphereMesh; // 0x220
	USceneComponent* Base; // 0x228
	UMaterialInstanceDynamic* Sky material; // 0x230
	bool Refresh material; // 0x238
	ADirectionalLight* Directional light actor; // 0x240
	bool Colors determined by sun position; // 0x248
	float Sun height; // 0x24c
	float Sun brightness; // 0x250
	float Horizon Falloff; // 0x254
	FLinearColor Zenith Color; // 0x258
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

struct UBrainComponent : UActorComponent {
	UBlackboardComponent* BlackboardComp; // 0xb8
	AAIController* AIOwner; // 0xc0
};

struct AMagicLeapSharedWorldGameMode : AGameMode {
	FMagicLeapSharedWorldSharedData SharedWorldData; // 0x308
	FMulticastInlineDelegate OnNewLocalDataFromClients; // 0x318
	float PinSelectionConfidenceThreshold; // 0x328
	AMagicLeapSharedWorldPlayerController* ChosenOne; // 0x3d0
};

struct UNiagaraDataInterfaceVolumeTexture : UNiagaraDataInterface {
	UVolumeTexture* Texture; // 0x38
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

struct UAB_CH_Player_Male_Human_C : UMOAnimationInstancePlayer {
	FPointerToUberGraphFrame UberGraphFrame; // 0x690
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_10; // 0x698
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_37; // 0x7f0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_71; // 0x890
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_70; // 0x8b8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_69; // 0x8e0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_68; // 0x908
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_67; // 0x930
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_66; // 0x958
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_65; // 0x980
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_64; // 0x9a8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_63; // 0x9d0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_62; // 0x9f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_61; // 0xa20
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_60; // 0xa48
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_59; // 0xa70
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_58; // 0xa98
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_57; // 0xac0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_56; // 0xae8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_55; // 0xb10
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_54; // 0xb38
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_53; // 0xb60
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_52; // 0xb88
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_22; // 0xbb0
	FAnimNode_StateResult AnimGraphNode_StateResult_28; // 0xc30
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_36; // 0xc60
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_21; // 0xd00
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_21; // 0xde8
	FAnimNode_StateResult AnimGraphNode_StateResult_27; // 0xe68
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_20; // 0xe98
	FAnimNode_StateResult AnimGraphNode_StateResult_26; // 0xf80
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_51; // 0xfb0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_3; // 0xfd8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_20; // 0x10a0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_50; // 0x1120
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_49; // 0x1148
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_48; // 0x1170
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_47; // 0x1198
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_46; // 0x11c0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_45; // 0x11e8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_44; // 0x1210
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_43; // 0x1238
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_42; // 0x1260
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_41; // 0x1288
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_40; // 0x12b0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_39; // 0x12d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_38; // 0x1300
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_37; // 0x1328
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_36; // 0x1350
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_35; // 0x1378
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_34; // 0x13a0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_33; // 0x13c8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_32; // 0x13f0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_19; // 0x1418
	FAnimNode_StateResult AnimGraphNode_StateResult_25; // 0x1500
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_18; // 0x1530
	FAnimNode_StateResult AnimGraphNode_StateResult_24; // 0x1618
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_35; // 0x1648
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_34; // 0x16e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_19; // 0x1788
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_18; // 0x1808
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_17; // 0x1888
	FAnimNode_StateResult AnimGraphNode_StateResult_23; // 0x1908
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_17; // 0x1938
	FAnimNode_StateResult AnimGraphNode_StateResult_22; // 0x1a20
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_16; // 0x1a50
	FAnimNode_StateResult AnimGraphNode_StateResult_21; // 0x1b38
	FAnimNode_StateMachine AnimGraphNode_StateMachine_6; // 0x1b68
	FAnimNode_StateResult AnimGraphNode_StateResult_20; // 0x1c18
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_16; // 0x1c48
	FAnimNode_StateResult AnimGraphNode_StateResult_19; // 0x1cc8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_31; // 0x1cf8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_15; // 0x1d20
	FAnimNode_StateResult AnimGraphNode_StateResult_18; // 0x1e08
	FAnimNode_StateResult AnimGraphNode_StateResult_17; // 0x1e38
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_30; // 0x1e68
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_28; // 0x1e90
	FAnimNode_StateResult AnimGraphNode_StateResult_16; // 0x1eb8
	FAnimNode_StateMachine AnimGraphNode_StateMachine_5; // 0x1ee8
	FAnimNode_Slot AnimGraphNode_Slot_3; // 0x1f98
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_9; // 0x1fe0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_29; // 0x2138
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_28; // 0x2160
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_27; // 0x2188
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_26; // 0x21b0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_25; // 0x21d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_24; // 0x2200
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_23; // 0x2228
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_22; // 0x2250
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_21; // 0x2278
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_27; // 0x22a0
	FAnimNode_StateResult AnimGraphNode_StateResult_15; // 0x22c8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_20; // 0x22f8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_26; // 0x2320
	FAnimNode_StateResult AnimGraphNode_StateResult_14; // 0x2348
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15; // 0x2378
	FAnimNode_StateResult AnimGraphNode_StateResult_13; // 0x23f8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_25; // 0x2428
	FAnimNode_StateResult AnimGraphNode_StateResult_12; // 0x2450
	FAnimNode_StateMachine AnimGraphNode_StateMachine_4; // 0x2480
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x2530
	FAnimNode_Inertialization AnimGraphNode_Inertialization; // 0x2578
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_16; // 0x25e8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_19; // 0x26b8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18; // 0x26e0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17; // 0x2708
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0x2730
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0x2758
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x2780
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x27a8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x27d0
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3; // 0x27f8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x2848
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_33; // 0x2898
	FAnimNode_StateResult AnimGraphNode_StateResult_11; // 0x2938
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14; // 0x2968
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_32; // 0x29e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13; // 0x2a88
	FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x2b08
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0x2b38
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_31; // 0x2bb8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0x2c58
	FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x2cd8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x2d08
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_30; // 0x2d88
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x2e28
	FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x2ea8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x2ed8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_29; // 0x2f58
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x2ff8
	FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x3078
	FAnimNode_StateMachine AnimGraphNode_StateMachine_3; // 0x30a8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_8; // 0x3158
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_28; // 0x32b0
	FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x3350
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_27; // 0x3368
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_7; // 0x3408
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_24; // 0x3560
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_23; // 0x3588
	FAnimNode_BlendBoneByChannel AnimGraphNode_BlendBoneByChannel; // 0x35b0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3; // 0x3618
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_22; // 0x36d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x3700
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x3728
	FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve_5; // 0x3750
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_14; // 0x37a8
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x3890
	FAnimNode_RefPose AnimGraphNode_IdentityPose; // 0x38c0
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x38d8
	FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x3908
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_7; // 0x39b8
	FMOAnimNode_HeadLookAt MOAnimGraphNode_HeadLookAt; // 0x39e0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_7; // 0x3b40
	FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve_4; // 0x3b60
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_21; // 0x3bb8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_20; // 0x3be0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_19; // 0x3c08
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_18; // 0x3c30
	FAnimNode_PoseBlendNode AnimGraphNode_PoseBlendNode; // 0x3c58
	FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve_3; // 0x3cf8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x3d50
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x3e10
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x3ed8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_6; // 0x3f28
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_17; // 0x4080
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_16; // 0x40a8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_26; // 0x40d0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_25; // 0x4170
	FAnimNode_Root AnimGraphNode_Root; // 0x4210
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_24; // 0x4240
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_23; // 0x42e0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_15; // 0x4380
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_11; // 0x43a8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6; // 0x44b0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_6; // 0x44d0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5; // 0x44f0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_14; // 0x4648
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_13; // 0x4670
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_5; // 0x4698
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_10; // 0x46b8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5; // 0x47c0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_9; // 0x47e0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8; // 0x48e8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4; // 0x49f0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4; // 0x4a10
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_22; // 0x4a30
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_21; // 0x4ad0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x4b70
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_13; // 0x4bf0
	FMOAnimNode_RandomPlayer MOAnimGraphNode_RandomPlayer_2; // 0x4cd8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x4df8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x4e20
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x4e48
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x4e70
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x4e98
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x4ec0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x4ee8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x4f10
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4f38
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_20; // 0x4f60
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_12; // 0x5000
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_11; // 0x50e8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_19; // 0x51d0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_18; // 0x5270
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_10; // 0x5310
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_9; // 0x53f8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_8; // 0x54e0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_17; // 0x55c8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_16; // 0x5668
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_7; // 0x5708
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x57f0
	FMOAnimNode_RandomPlayer MOAnimGraphNode_RandomPlayer; // 0x5820
	FAnimNode_Slot AnimGraphNode_Slot; // 0x5940
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x5988
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_15; // 0x5a08
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x5aa8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_14; // 0x5b28
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x5bc8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_13; // 0x5c48
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x5ce8
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_15; // 0x5d18
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_15; // 0x5e08
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0x5ed8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x5f78
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_12; // 0x5ff8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x6098
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x6118
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_6; // 0x6148
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5; // 0x6230
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_11; // 0x6318
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_10; // 0x63b8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4; // 0x6458
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; // 0x6540
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x6628
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_9; // 0x6710
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_8; // 0x67b0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_7; // 0x6850
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x68f0
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x69d8
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x6a08
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0x6ab8
	FAnimNode_HandIKRetargeting AnimGraphNode_HandIKRetargeting; // 0x6c10
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3; // 0x6d30
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_2; // 0x6d50
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK; // 0x6f30
	FAnimNode_LegIK AnimGraphNode_LegIK; // 0x7110
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7; // 0x7208
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6; // 0x7310
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5; // 0x7418
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x7520
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x7628
	FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve_2; // 0x7730
	FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve; // 0x7788
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3; // 0x77e0
	FMOAnimNode_HandSizeIKCorrection MOAnimGraphNode_HandSizeIKCorrection; // 0x7800
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6; // 0x7930
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_3; // 0x79d0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; // 0x7b60
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x7c00
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x7d08
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x7d28
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_2; // 0x7d48
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_14; // 0x7ed8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_2; // 0x7fa8
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_13; // 0x8070
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_12; // 0x8140
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_11; // 0x8210
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_10; // 0x82e0
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_9; // 0x83b0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x8480
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x8520
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x85e8
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_8; // 0x8688
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_7; // 0x8758
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_6; // 0x8828
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_5; // 0x88f8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x89c8
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_4; // 0x8a68
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_3; // 0x8b38
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x8c08
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_2; // 0x8ca8
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive; // 0x8d78
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_14; // 0x8e48
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_13; // 0x8f38
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_12; // 0x9028
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_11; // 0x9118
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_10; // 0x9208
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_9; // 0x92f8
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_8; // 0x93e8
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_7; // 0x94d8
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_6; // 0x95c8
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_5; // 0x96b8
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_4; // 0x97a8
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_3; // 0x9898
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x9988
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_2; // 0x9b18
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator; // 0x9c08
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x9cf8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x9d18
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x9d38
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x9df8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x9f00
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_12; // 0xa058
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0xa080
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_11; // 0xa1d8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_10; // 0xa200
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xa228
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_9; // 0xa380
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8; // 0xa3a8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0xa3d0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0xa3f8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0xa420
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0xa448
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0xa470
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xa498
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xa4c0
	FVector vFirstPerson_MovementOffset_ComponentSpace; // 0xa4e8
	FRotator rFirstPerson_RotationOffset_ComponentSpace; // 0xa4f4
	float fFirstPerson_MovementSway_AnimationTime; // 0xa500
	float fFirstPerson_TurnSway_Pitch_Previous; // 0xa504
	FVector vFirstPerson_TurnSway_ControlRight_Previous; // 0xa508
	FRotator rFirstPerson_TurnSway_RotationOffset_ComponentSpace; // 0xa514
	float fFirstPerson_TurnSway_RotationRadius_ComponentSpace; // 0xa520
	FVector vFirstPerson_TurnSway_PositionOffset; // 0xa524
	FVector vFirstPerson_PhysicsLag_Offset_ComponentSpace; // 0xa530
	FVector vFirstPerson_WalkSway_Offset_ComponentSpace; // 0xa53c
	bool bFirstPerson_WalkSway_SyncWithFeet; // 0xa548
	UMOCameraComponent* PlayerCamera; // 0xa550
	UStaticMeshComponent* DynamicHandsTipComponent; // 0xa558
	UStaticMeshComponent* DynamicHandsBaseComponent; // 0xa560
	FVector PelvisLocationOffset; // 0xa568
	FRotator PelvisRotationOffset; // 0xa574
	float EnableCameraInput; // 0xa580
	float CameraStabilizationAlpha; // 0xa584
	FRotator rFirstPerson_WalkSway_RotationOffset_ComponentSpace; // 0xa588
};

struct UNiagaraSimulationStageBase : UNiagaraMergeable {
	UNiagaraScript* Script; // 0x28
	FName SimulationStageName; // 0x30
	char bEnabled : 1; // 0x38
};

struct USourceEffectEnvelopeFollowerPreset : USoundEffectSourcePreset {
	FSourceEffectEnvelopeFollowerSettings Settings; // 0x9c
};

struct UMODataAssetFishingAnimations : UMODataAssetWeaponAnimations {
	UAnimSequenceBase* ReelInMontage; // 0x168
	UAnimSequenceBase* PullMontage; // 0x170
	UAnimSequenceBase* TryHookFishReaction; // 0x178
	UAnimSequenceBase* FishBiteMontage; // 0x180
	UAnimSequenceBase* IdleFishing; // 0x188
	UAnimSequenceBase* CatchFish; // 0x190
	UAnimSequenceBase* FailedCatchFish; // 0x198
};

struct UOnlineEngineInterfaceImpl : UOnlineEngineInterface {
	FName VoiceSubsystemNameOverride; // 0x28
};

struct UMaterialExpressionTemporalSobol : UMaterialExpression {
	FExpressionInput Index; // 0x40
	FExpressionInput Seed; // 0x54
	uint32_t ConstIndex; // 0x68
	FVector2D ConstSeed; // 0x6c
};

struct UMOAnimationInstancePlayerHair : UAnimInstance {
	UPoseAsset* PoseAsset; // 0x2b8
	USkeletalMeshComponent* CopyPoseSourceMesh; // 0x2c0
};

struct UBlendSpace1D : UBlendSpaceBase {
	bool bScaleAnimation; // 0x148
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

struct UMODragDropOperationSpell : UMODragDropOperation {
	FString sSpellJSon; // 0x88
};

struct UMOEULA : UMOUserWidget {
	UMOButton* pMOButton_Accept; // 0x2c8
	UMOButton* pMOButton_Decline; // 0x2d0
	UMOScrollBox* pMOScrollBox_EULA; // 0x2d8
};

struct UCollisionProfile : UDeveloperSettings {
	TArray<FCollisionResponseTemplate> Profiles; // 0x38
	TArray<FCustomChannelSetup> DefaultChannelResponses; // 0x48
	TArray<FCustomProfile> EditProfiles; // 0x58
	TArray<FRedirector> ProfileRedirects; // 0x68
	TArray<FRedirector> CollisionChannelRedirects; // 0x78
};

struct UMOLoginMessageBox : UMOUserWidget {
	UMOButton* pButton; // 0x2c8
};

struct ATriggerBase : AActor {
	UShapeComponent* CollisionComponent; // 0x220
};

struct UAIDataProvider_Random : UAIDataProvider_QueryParams {
	float Min; // 0x40
	float Max; // 0x44
	char bInteger : 1; // 0x48
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

struct UMovieSceneEventRepeaterSection : UMovieSceneEventSectionBase {
	FMovieSceneEvent Event; // 0xf0
};

struct USoundNodeBranch : USoundNode {
	FName BoolParameterName; // 0x48
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

struct UMediaPlaylist : UObject {
	TArray<UMediaSource*> Items; // 0x28
};

struct UMovieSceneBoolSection : UMovieSceneSection {
	bool DefaultValue; // 0xe8
	FMovieSceneBoolChannel BoolCurve; // 0xf0
};

struct UWB_EULA_C : UMOEULA {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
};

struct UMOSocialFriends : UMOUserWidget {
	FTimerHandle m_TimerHandle_TickFriendList; // 0x310
	TArray<FFriendEntryStruct> vFriendsToGenerate; // 0x318
	TArray<FFriendEntryStruct> vFriendsToUpdate; // 0x328
	TArray<FFriendEntryStruct> vFriendsToDelete; // 0x338
	TArray<UMOSocialFriendsEntry*> vFriendEntries; // 0x348
	UMOSocialFriendsEntry* cMOFriendsEntryClass; // 0x358
	UMOScrollBox* pMOScrollBox_Friends; // 0x360
	UMOButton* pMOButton_AddFriend; // 0x368
	UMOEditableTextBox* pMOEditableTextBox; // 0x370
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

struct UMaterialExpressionAbs : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UMODataAssetShieldDefinitions : UPrimaryDataAsset {
	UMODataAssetEquipmentShared* pSharedData; // 0x30
	TSoftObjectPtr<UMODataAssetShield> pFallbackShield; // 0x38
	TSoftObjectPtr<UMODataAssetShieldFrame> pFallbackFrame; // 0x60
	TArray<TSoftObjectPtr<UMODataAssetShield>> vBucklerShields; // 0x88
	TArray<TSoftObjectPtr<UMODataAssetShield>> vRoundShields; // 0x98
	TArray<TSoftObjectPtr<UMODataAssetShield>> vKiteShields; // 0xa8
	TArray<TSoftObjectPtr<UMODataAssetShield>> vTowerShields; // 0xb8
	TArray<TSoftObjectPtr<UMODataAssetShieldFrame>> vBucklerFrames; // 0xc8
	TArray<TSoftObjectPtr<UMODataAssetShieldFrame>> vRoundFrames; // 0xd8
	TArray<TSoftObjectPtr<UMODataAssetShieldFrame>> vKiteFrames; // 0xe8
	TArray<TSoftObjectPtr<UMODataAssetShieldFrame>> vTowerFrames; // 0xf8
	UMOPhysicalMaterial* pEquipmentPhysMaterial; // 0x108
	bool bShieldPartsArePreloaded; // 0x110
	TArray<UMODataAssetShield*> PreLoadedShieldParts; // 0x118
	TArray<UMODataAssetShieldFrame*> PreLoadedFrameParts; // 0x128
};

struct UBehaviorTreeComponent : UBrainComponent {
	TArray<UBTNode*> NodeInstances; // 0x128
	UBehaviorTree* DefaultBehaviorTreeAsset; // 0x278
};

struct UTemplateSequence : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x60
	TSoftClassPtr<UObject> BoundActorClass; // 0x68
	TSoftObjectPtr<AActor> BoundPreviewActor; // 0x90
	TMap<FGuid, FName> BoundActorComponents; // 0xb8
};

struct UDatasmithPointLightComponentTemplate : UDatasmithObjectTemplate {
	ELightUnits IntensityUnits; // 0x30
	float SourceRadius; // 0x34
	float SourceLength; // 0x38
	float AttenuationRadius; // 0x3c
};

struct UUserDefinedImageCaptureProtocol : UUserDefinedCaptureProtocol {
	EDesiredImageFormat Format; // 0xd8
	bool bEnableCompression; // 0xd9
	int32_t CompressionQuality; // 0xdc
};

struct UMODataAssetHeadDefinitions : UPrimaryDataAsset {
	UMODataAssetEquipmentShared* pSharedData; // 0x30
	TSoftObjectPtr<UMODataAssetHead> pFallBackHead; // 0x38
	TArray<TSoftObjectPtr<UMODataAssetHead>> vHeads; // 0x60
	TArray<TSoftObjectPtr<UMODataAssetHead>> vAxe1HHeads; // 0x70
	TArray<TSoftObjectPtr<UMODataAssetHead>> vAxe2HHeads; // 0x80
	TArray<TSoftObjectPtr<UMODataAssetHead>> vDaggerBlades; // 0x90
	TArray<TSoftObjectPtr<UMODataAssetHead>> vHammer1HHeads; // 0xa0
	TArray<TSoftObjectPtr<UMODataAssetHead>> vHammer2HHeads; // 0xb0
	TArray<TSoftObjectPtr<UMODataAssetHead>> vPoleAxeHeads; // 0xc0
	TArray<TSoftObjectPtr<UMODataAssetHead>> vPoleSwordBlades; // 0xd0
	TArray<TSoftObjectPtr<UMODataAssetHead>> vSpearHeads; // 0xe0
	TArray<TSoftObjectPtr<UMODataAssetHead>> vSword1HBlades; // 0xf0
	TArray<TSoftObjectPtr<UMODataAssetHead>> vSword2HBlades; // 0x100
	TArray<TSoftObjectPtr<UMODataAssetHead>> vLanceHeads; // 0x110
	TArray<TSoftObjectPtr<UMODataAssetHead>> vFishingPoleHeads; // 0x120
	UMOPhysicalMaterial* pEquipmentPhysMaterialLeft; // 0x130
	UMOPhysicalMaterial* pEquipmentPhysMaterialRight; // 0x138
	bool bHeadPartsArePreloaded; // 0x140
	TArray<UMODataAssetHead*> PreLoadedHeadParts; // 0x148
};

struct ACableActor : AActor {
	UCableComponent* CableComponent; // 0x220
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

struct ABP_FishingBobberActor_C : AMOFishingBobberActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UChildActorComponent* ChildActor; // 0x270
	float PullingStart_fYLocation_55EA2CD3448CB3FB7D1B3CB64F398008; // 0x278
	float PullingStart_fXLocation_55EA2CD3448CB3FB7D1B3CB64F398008; // 0x27c
	ETimelineDirection PullingStart__Direction_55EA2CD3448CB3FB7D1B3CB64F398008; // 0x280
	UTimelineComponent* PullingStart; // 0x288
	float PullingStop_fYLocation_2D91CB3545D8EA9AEE6FFB84C883B3B4; // 0x290
	float PullingStop_fXLocation_2D91CB3545D8EA9AEE6FFB84C883B3B4; // 0x294
	ETimelineDirection PullingStop__Direction_2D91CB3545D8EA9AEE6FFB84C883B3B4; // 0x298
	UTimelineComponent* PullingStop; // 0x2a0
	float FishBite_fZLocation_EC3BDEEC4731CC407EA57A977F6F87A3; // 0x2a8
	ETimelineDirection FishBite__Direction_EC3BDEEC4731CC407EA57A977F6F87A3; // 0x2ac
	UTimelineComponent* FishBite; // 0x2b0
	float SmallSplash_fZLocation_1F5C5D954DD9D7098B19C9AC77FAB75A; // 0x2b8
	ETimelineDirection SmallSplash__Direction_1F5C5D954DD9D7098B19C9AC77FAB75A; // 0x2bc
	UTimelineComponent* SmallSplash; // 0x2c0
	float BigSplash_fZLocation_A33DFE7C4144456D816A9F8366D8F2E4; // 0x2c8
	ETimelineDirection BigSplash__Direction_A33DFE7C4144456D816A9F8366D8F2E4; // 0x2cc
	UTimelineComponent* BigSplash; // 0x2d0
	float HitWater_fZLocation_688617464ED7845EB76673BFFC6196AD; // 0x2d8
	ETimelineDirection HitWater__Direction_688617464ED7845EB76673BFFC6196AD; // 0x2dc
	UTimelineComponent* HitWater; // 0x2e0
	float HitLand_fZLocation_55230C5B43576A79AF5126B0CD7B670B; // 0x2e8
	ETimelineDirection HitLand__Direction_55230C5B43576A79AF5126B0CD7B670B; // 0x2ec
	UTimelineComponent* HitLand; // 0x2f0
	FVector vLand; // 0x2f8
	USkeletalMeshComponent* pRodComponent; // 0x308
	UNiagaraComponent* Bobber_Ripples; // 0x310
	UNiagaraComponent* Bobber_FishBite; // 0x318
	UNiagaraComponent* Bobber_FishNibble; // 0x320
	ABP_Fishing_CaughtFish_C* pFishCaught; // 0x328
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

struct UMaterialExpressionTextureBase : UMaterialExpression {
	UTexture* Texture; // 0x40
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

struct UWrapBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38
	bool bFillEmptySpace; // 0x48
	float FillSpanWhenLessThan; // 0x4c
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct UMovieSceneEventTriggerSection : UMovieSceneEventSectionBase {
	FMovieSceneEventChannel EventChannel; // 0xf0
};

struct UCharacterCompositionSubsystem : UWorldSubsystem {
	TArray<UCharacterCompositionComponent*> RegisteredComponents; // 0x38
	TArray<FName> RegisteredStates; // 0x48
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

struct UMovieSceneCaptureProtocolBase : UObject {
	EMovieSceneCaptureProtocolState State; // 0x50
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

struct UGizmoArrowComponent : UGizmoBaseComponent {
	FVector Direction; // 0x460
	float Gap; // 0x46c
	float Length; // 0x470
	float Thickness; // 0x474
};

struct ADatasmithSceneActor : AActor {
	UDatasmithScene* Scene; // 0x220
	TMap<FName, TSoftObjectPtr<AActor>> RelatedActors; // 0x228
};

struct UNavModifierComponent : UNavRelevantComponent {
	UNavArea* AreaClass; // 0xe0
	FVector FailsafeExtent; // 0xe8
	char bIncludeAgentHeight : 1; // 0xf4
};

struct UWP_CurrencyWidget_C : UMOCurrencyWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280
	UImage* Image_Cuprum; // 0x288
	UImage* Image_Gold; // 0x290
	UImage* Image_Silver; // 0x298
	int32_t iGold; // 0x2a0
	int32_t iSilver; // 0x2a4
	int64_t iCuprum; // 0x2a8
	bool bShowWhenZero; // 0x2b0
};

struct UScrollBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct USpotLightComponent : UPointLightComponent {
	float InnerConeAngle; // 0x358
	float OuterConeAngle; // 0x35c
};

struct UMovieSceneWidgetMaterialTrack : UMovieSceneMaterialTrack {
	TArray<FName> BrushPropertyNamePath; // 0x90
	FName TrackName; // 0xa0
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

struct USoundNodeGroupControl : USoundNode {
	TArray<int32_t> GroupSizes; // 0x48
};

struct UNiagaraDataInterfaceArrayColor : UNiagaraDataInterfaceArray {
	TArray<FLinearColor> ColorData; // 0x50
};

struct AMainMenu_P_C : ALevelScriptActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x228
	bool bLoaded; // 0x230
	ASkyLight* SkyLight; // 0x238
	float SkyLightIntensity; // 0x240
	ADirectionalLight* DirectionalLight_00; // 0x248
	ADirectionalLight* DirectionalLight_01; // 0x250
	float DirectionalLight_00_Intensity; // 0x258
	float DirectionalLight_01_Intensity; // 0x25c
	ABP_MOPaperdollSceneActor_C* BP_MOPaperdollSceneActor_2_ExecuteUbergraph_MainMenu_P_RefProperty; // 0x260
};

struct UBlackboardKeyType_Enum : UBlackboardKeyType {
	UEnum* EnumType; // 0x30
	FString EnumName; // 0x38
	char bIsEnumNameValid : 1; // 0x48
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

struct UWB_SplashScreens_C : UMOWidgetBlueprint {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* FadeOut; // 0x268
	UWidgetAnimation* AnimateIn; // 0x270
	UImage* BackgroundImage; // 0x278
	UImage* ForgroundImage; // 0x280
	UImage* IntroMovie; // 0x288
	UImage* LogoMortalOnline; // 0x290
	UImage* LogoStarVault; // 0x298
	UTextBlock* TextBlock_PressAnyKey; // 0x2a0
	bool bIsLoaded; // 0x2a8
	UMediaPlayer* pMediaPlayer; // 0x2b0
	bool bClicked; // 0x2b8
};

struct UMaterialExpressionChannelMaskParameter : UMaterialExpressionVectorParameter {
	EChannelMaskParameterColor MaskChannel; // 0x70
};

struct UBTTask_PlayAnimation : UBTTaskNode {
	UAnimationAsset* AnimationToPlay; // 0x70
	char bLooping : 1; // 0x78
	char bNonBlocking : 1; // 0x78
	UBehaviorTreeComponent* MyOwnerComp; // 0x80
	USkeletalMeshComponent* CachedSkelMesh; // 0x88
};

struct ULandscapeSettings : UDeveloperSettings {
	int32_t MaxNumberOfLayers; // 0x38
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

struct UMovieSceneMarginSection : UMovieSceneSection {
	FMovieSceneFloatChannel TopCurve; // 0xe8
	FMovieSceneFloatChannel LeftCurve; // 0x188
	FMovieSceneFloatChannel RightCurve; // 0x228
	FMovieSceneFloatChannel BottomCurve; // 0x2c8
};

struct UMaterialExpressionLightmassReplace : UMaterialExpression {
	FExpressionInput RealTime; // 0x40
	FExpressionInput Lightmass; // 0x54
};

struct UPawnActionsComponent : UActorComponent {
	APawn* ControlledPawn; // 0xb0
	TArray<FPawnActionStack> ActionStacks; // 0xb8
	TArray<FPawnActionEvent> ActionEvents; // 0xc8
	UPawnAction* CurrentAction; // 0xd8
};

struct UParticleModuleColor : UParticleModuleColorBase {
	FRawDistributionVector StartColor; // 0x30
	FRawDistributionFloat StartAlpha; // 0x78
	char bClampAlpha : 1; // 0xa8
};

struct UMOUserWidgetMOScrollBox : UMOUserWidget {
	UMOScrollBox* pMOScrollBox; // 0x2c8
};

struct UMOUserWidgetOptions : UMOUserWidget {
	FMulticastInlineDelegate OnOptionsHide; // 0x2c8
	FMulticastInlineDelegate OnOptionsShow; // 0x2d8
	TArray<UMOUserWidgetOptionsPanel*> vPanels; // 0x2e8
	TArray<UMOUserWidgetTabButtonNew*> vTabButtons; // 0x2f8
	UMOUserWidgetOptionsPanel* pCurrentPanel; // 0x308
	UMOUserWidgetTabButtonNew* pPanelTabButton_Audio; // 0x310
	UMOUserWidgetOptionsAudio* pOptionsPanel_Audio; // 0x318
	UMOUserWidgetTabButtonNew* pPanelTabButton_Video; // 0x320
	UMOUserWidgetOptionsVideo* pOptionsPanel_Video; // 0x328
	UMOUserWidgetTabButtonNew* pPanelTabButton_Keybinds; // 0x330
	UMOUserWidgetOptionsKeybinds* pOptionsPanel_Keybinds; // 0x338
	UMOUserWidgetTabButtonNew* pPanelTabButton_Chat; // 0x340
	UMOUserWidgetOptionsChat* pOptionsPanel_Chat; // 0x348
	UMOUserWidgetTabButtonNew* pPanelTabButton_UI; // 0x350
	UMOUserWidgetOptionsUI* pOptionsPanel_UI; // 0x358
	UMOUserWidgetTabButtonNew* pPanelTabButton_Gameplay; // 0x360
	UMOUserWidgetOptionsGameplay* pOptionsPanel_Gameplay; // 0x368
	UMOUserWidgetTabButtonNew* pPanelTabButton_Language; // 0x370
	UMOUserWidgetOptionsLanguage* pOptionsPanel_Language; // 0x378
	UMOButtonLarge* pSaveChanges_Button; // 0x380
	UMOButtonLarge* pResetSettings_Button; // 0x388
	UMOButtonSmall* pCloseMenu_Button; // 0x390
};

struct UBookMark : UBookmarkBase {
	FVector Location; // 0x28
	FRotator Rotation; // 0x34
	TArray<FString> HiddenLevels; // 0x40
};

struct AOnlineBeaconClient : AOnlineBeacon {
	AOnlineBeaconHostObject* BeaconOwner; // 0x250
	UNetConnection* BeaconConnection; // 0x258
	EBeaconConnectionState ConnectionState; // 0x260
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

struct UMOUISaveGame : USaveGame {
	FMOSaveData sData; // 0x28
};

struct UGizmoLocalFloatParameterSource : UGizmoBaseFloatParameterSource {
	float Value; // 0x48
	FGizmoFloatParameterChange LastChange; // 0x4c
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

struct UMODataAssetTattooDefinitions : UPrimaryDataAsset {
	TArray<UMODataAssetTattoo*> vFacialTattoos; // 0x30
	TArray<UMODataAssetTattoo*> vBodyTattoos; // 0x40
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

struct UDistributionVectorUniform : UDistributionVector {
	FVector Max; // 0x38
	FVector Min; // 0x44
	char bLockAxes : 1; // 0x50
	EDistributionVectorLockFlags LockedAxes; // 0x54
	EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x55
	char bUseExtremes : 1; // 0x58
};

struct UAITask : UGameplayTask {
	AAIController* OwnerController; // 0x68
};

struct UStreamMediaSource : UBaseMediaSource {
	FString StreamUrl; // 0x88
};

struct UAnimNotifyState_TimedParticleEffect : UAnimNotifyState {
	UParticleSystem* PSTemplate; // 0x30
	FName SocketName; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	bool bDestroyAtEnd; // 0x58
};

struct UTestMovieSceneSubTrack : UMovieSceneSubTrack {
	TArray<UMovieSceneSection*> SectionArray; // 0x88
};

struct UControlRigGizmoLibrary : UObject {
	FControlRigGizmoDefinition DefaultGizmo; // 0x30
	TSoftObjectPtr<UMaterial> DefaultMaterial; // 0x90
	FName MaterialColorParameter; // 0xb8
	TArray<FControlRigGizmoDefinition> Gizmos; // 0xc0
};

struct UDecalComponent : USceneComponent {
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

struct UPhysicsAsset : UObject {
	TArray<int32_t> BoundsBodies; // 0x30
	TArray<USkeletalBodySetup*> SkeletalBodySetups; // 0x40
	TArray<UPhysicsConstraintTemplate*> ConstraintSetup; // 0x50
	FSolverIterations SolverIterations; // 0x60
	char bNotForDedicatedServer : 1; // 0x7c
	UThumbnailInfo* ThumbnailInfo; // 0x120
	TArray<UBodySetup*> BodySetup; // 0x128
};

struct UTextureLODSettings : UObject {
	TArray<FTextureLODGroup> TextureLODGroups; // 0x28
};

struct UParticleModuleAcceleration : UParticleModuleAccelerationBase {
	FRawDistributionVector Acceleration; // 0x38
	char bApplyOwnerScale : 1; // 0x80
};

struct AMOLevelStreamingVolume : AVolume {
	TArray<TSoftObjectPtr<UWorld>> Sublevels; // 0x258
	TArray<FName> SublevelNames; // 0x268
	TArray<FName> SublevelPaths; // 0x278
	float LeaveBufferZoneThickness; // 0x288
};

struct UNiagaraDataInterfaceArrayFloat2 : UNiagaraDataInterfaceArray {
	TArray<FVector2D> FloatData; // 0x50
};

struct UAISubsystem : UObject {
	UAISystem* AISystem; // 0x30
};

struct UMovieScene3DTransformSection : UMovieSceneSection {
	FMovieSceneTransformMask TransformMask; // 0xf0
	FMovieSceneFloatChannel Translation[0x3]; // 0xf8
	FMovieSceneFloatChannel Rotation[0x3]; // 0x2d8
	FMovieSceneFloatChannel Scale[0x3]; // 0x4b8
	FMovieSceneFloatChannel ManualWeight; // 0x698
	bool bUseQuaternionInterpolation; // 0x738
};

struct UMOBrokerCreateOrdersPanel : UMOBrokerPanel {
	UMOItemSlotPlaceItem* pItemSlot; // 0x2d8
	UMOBrokerCurrencyWidget* pMOBrokerCurrencyWidget; // 0x2e0
	UMOEditableTextBoxNumbers* pMOEditableTextBox_ActivePage; // 0x2e8
	UMOButton* pMOButton_NextPage; // 0x2f0
	UMOButton* pMOButton_PreviousPage; // 0x2f8
	UMOButton* pMOButton_Close; // 0x300
	UMOButton* pMOButton_Browse; // 0x308
	UMOScrollBox* pMOScrollBox_Category; // 0x310
	UMOBrokerItemListEntry* cMOItemListEntryClass; // 0x318
	TArray<UMOBrokerItemListEntry*> vItemEntries; // 0x320
	TArray<UMOBrokerCategoryEntry*> vCategoryEntries; // 0x330
	UMOScrollBox* pMOScrollBox_Items; // 0x340
	UMOEditableTextBox* pMOEditableTextBox_FilterItems; // 0x348
};

struct UMaterialExpressionArcsine : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UInterpTrackInstFloatProp : UInterpTrackInstProperty {
	float ResetFloat; // 0x58
};

struct UParticleModuleColor_Seeded : UParticleModuleColor {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xb0
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

struct UMOBuff : UMOWidgetBlueprint {
	bool bCanTick; // 0x260
	bool bPlayingRemoveAnim; // 0x261
	float fDurationMax; // 0x264
	float fDurationLeft; // 0x268
	UTextBlock* pTextBlockTime; // 0x270
	UImage* pImageIcon; // 0x278
	UImage* pImageBar; // 0x280
	UImage* pFrame; // 0x288
	FString sBuffName; // 0x290
	FText sDisplayName; // 0x2a0
	FText sDescription; // 0x2b8
};

struct ABP_AiEffectArrowExplosion_C : AMOAiEffectActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
};

struct UMOGuildStoneMembersEntry : UMOUserWidget {
	UTextBlock* pName; // 0x2c8
	UTextBlock* pRank; // 0x2d0
	UMOButtonSmall* pKick; // 0x2d8
	UMOButtonSmall* pPromote; // 0x2e0
	UMOButtonSmall* pDemote; // 0x2e8
	UImage* pOnlineImage; // 0x2f0
	FLinearColor vOnlineImageColor; // 0x2f8
	FLinearColor vOnlineTextColor; // 0x308
	FLinearColor vOfflineColor; // 0x318
};

struct ULightmassPortalComponent : USceneComponent {
	UBoxComponent* PreviewBox; // 0x1f8
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

struct UInheritableComponentHandler : UObject {
	TArray<FComponentOverrideRecord> Records; // 0x28
	TArray<UActorComponent*> UnnecessaryComponents; // 0x38
};

struct UNiagaraPreviewAxis_InterpParamInt32 : UNiagaraPreviewAxis_InterpParamBase {
	int32_t Min; // 0x38
	int32_t Max; // 0x3c
};

struct UWaterMeshComponent : UMeshComponent {
	int32_t ForceCollapseDensityLevel; // 0x468
	float TileSize; // 0x46c
	FIntPoint ExtentInTiles; // 0x470
	UMaterialInterface* FarDistanceMaterial; // 0x478
	float FarDistanceMeshExtent; // 0x480
	FVector RTWorldLocation; // 0x484
	FVector RTWorldSizeVector; // 0x490
	int32_t TessellationFactor; // 0x580
	float LODScale; // 0x584
};

struct UClothLODDataCommon_Legacy : UObject {
	UClothPhysicalMeshDataBase_Legacy* PhysicalMeshData; // 0x28
	FClothPhysicalMeshData ClothPhysicalMeshData; // 0x30
	FClothCollisionData CollisionData; // 0x128
};

struct UMODataAssetResourceDefinitions : UPrimaryDataAsset {
	UMODataAssetResource* pFallbackResource; // 0x30
	TArray<UMODataAssetResource*> vBoneResources; // 0x38
	TArray<UMODataAssetResource*> vCarapaceResources; // 0x48
	TArray<UMODataAssetResource*> vCrystalResources; // 0x58
	TArray<UMODataAssetResource*> vFurResources; // 0x68
	TArray<UMODataAssetResource*> vLeatherResources; // 0x78
	TArray<UMODataAssetResource*> vMetalResources; // 0x88
	TArray<UMODataAssetResource*> vScalesResources; // 0x98
	TArray<UMODataAssetResource*> vSkinResources; // 0xa8
	TArray<UMODataAssetResource*> vStoneResources; // 0xb8
	TArray<UMODataAssetResource*> vWoodResources; // 0xc8
	TArray<UMODataAssetResource*> vTextileResources; // 0xd8
	bool bResourcesArePreloaded; // 0xe8
	TArray<UMaterialInstance*> PreloadedResourceMaterials; // 0xf0
	TArray<USoundCue*> PreloadedHitSounds; // 0x100
	TArray<UNiagaraSystem*> PreloadedHitParticles; // 0x110
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

struct UMOUserWidgetCompassHUD : UMOUserWidget {
	UMOUserWidgetCompassHorizontal* pHorizontalCompass; // 0x2c8
	UMOUserWidgetCompassCircle* pCircleCompass; // 0x2d0
};

struct UFloatingPawnMovement : UPawnMovementComponent {
	float MaxSpeed; // 0x138
	float Acceleration; // 0x13c
	float Deceleration; // 0x140
	float TurningBoost; // 0x144
	char bPositionCorrected : 1; // 0x148
};

struct AWaterBodyExclusionVolume : APhysicsVolume {
	bool bIgnoreAllOverlappingWaterBodies; // 0x268
	TArray<AWaterBody*> WaterBodiesToIgnore; // 0x270
};

struct UMOGameMessage : UMOUserWidget {
	UTextBlock* pTextBlockScreenMessage; // 0x2c8
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

struct UControlRigObjectHolder : UObject {
	TArray<UObject*> Objects; // 0x28
};

struct UMOInfoEntryAttributeLock : UMOCharCreationInfoEntry {
	UMOButtonAttributeToggle* pMOButtonAttributeToggle; // 0x328
};

struct UBTTask_BlueprintBase : UBTTaskNode {
	AAIController* AIOwner; // 0x70
	AActor* ActorOwner; // 0x78
	FIntervalCountdown TickInterval; // 0x80
	char bShowPropertyDetails : 1; // 0xa0
};

struct UMagicLeapPlanesComponent : USceneComponent {
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

struct UGameViewportClient : UScriptViewportClient {
	UConsole* ViewportConsole; // 0x40
	TArray<FDebugDisplayProperty> DebugProperties; // 0x48
	int32_t MaxSplitscreenPlayers; // 0x68
	UWorld* World; // 0x78
	UGameInstance* GameInstance; // 0x80
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

struct ABP_MOCharacterAI_Creature_Cougar_Adult_C : ABP_MOCharacterAI_Creature_C {
	UGFurComponent* GFur_1; // 0xdd0
};

struct UMOButtonMinus : UMOButton {
	USlateWidgetStyleAsset* CustomStyle; // 0x438
};

struct UBTDecorator_SetTagCooldown : UBTDecorator {
	FGameplayTag CooldownTag; // 0x68
	float CooldownDuration; // 0x70
	bool bAddToExistingDuration; // 0x74
};

struct UPaperSpriteComponent : UMeshComponent {
	UPaperSprite* SourceSprite; // 0x468
	UMaterialInterface* MaterialOverride; // 0x470
	FLinearColor SpriteColor; // 0x478
};

struct UParticleModuleMeshRotation : UParticleModuleRotationBase {
	FRawDistributionVector StartRotation; // 0x30
	char bInheritParent : 1; // 0x78
};

struct UParticleModuleRotationRate : UParticleModuleRotationRateBase {
	FRawDistributionFloat StartRotationRate; // 0x30
};

struct UInterpTrackEvent : UInterpTrack {
	TArray<FEventTrackKey> EventTrack; // 0x70
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	char bFireEventsWhenJumpingForwards : 1; // 0x80
	char bUseCustomEventName : 1; // 0x80
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

struct UMOBuildableUpkeepPanel : UMOBuildablePanel {
	UMOButton* pMOButton_PayUpkeep; // 0x2d0
	UMOItemSlotPlaceItem* pItemSlot_PayUpkeep; // 0x2d8
	UTextBlock* pTextBlock_UpkeepTimeLeft; // 0x2e0
	UMOCurrencyWidget* pMOCurrencyWidget_UpkeepCostPerHour; // 0x2e8
	UMOCurrencyWidget* pMOCurrencyWidget_CurrentUpkeepPaid; // 0x2f0
};

struct UFoliageType_InstancedStaticMesh : UFoliageType {
	UStaticMesh* Mesh; // 0x3b0
	TArray<UMaterialInterface*> OverrideMaterials; // 0x3b8
	UFoliageInstancedStaticMeshComponent* ComponentClass; // 0x3c8
};

struct UInterpTrackInstBoolProp : UInterpTrackInstProperty {
	bool ResetBool; // 0x60
};

struct UARSaveWorldAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct UMODataAssetEmoteBaseDefinition : UMODataAssetAnimationBase {
	bool bEnabledInReleaseBuild; // 0xa0
	bool bShowInUIForPlayer; // 0xa1
};

struct UNiagaraPreviewAxis_InterpParamLinearColor : UNiagaraPreviewAxis_InterpParamBase {
	FLinearColor Min; // 0x38
	FLinearColor Max; // 0x48
};

struct UBTService : UBTAuxiliaryNode {
	float Interval; // 0x60
	float RandomDeviation; // 0x64
	char bCallTickOnSearchStart : 1; // 0x68
	char bRestartTimerOnEachActivation : 1; // 0x68
};

struct UGameplayTasksComponent : UActorComponent {
	char bIsNetDirty : 1; // 0xbc
	TArray<UGameplayTask*> SimulatedTasks; // 0xc0
	TArray<UGameplayTask*> TaskPriorityQueue; // 0xd0
	TArray<UGameplayTask*> TickingTasks; // 0xf0
	TArray<UGameplayTask*> KnownTasks; // 0x100
	FMulticastInlineDelegate OnClaimedResourcesChange; // 0x110
};

