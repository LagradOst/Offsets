// Created by BlueFire1337
// Updated 2022-02-01
// Generated 2022-02-02

namespace off {
	constexpr auto GNames = 0x4983f80;
	constexpr auto GObjects = 0x49c0530;
	constexpr auto GWorld = 0x4b06000;
}

struct UGridPathFollowingComponent : UPathFollowingComponent {
	UNavLocalGridManager* GridManager; // 0x250
};

struct UMaterialExpressionCurveAtlasRowParameter : UMaterialExpressionScalarParameter {
	UCurveLinearColor* Curve; // 0x60
	UCurveLinearColorAtlas* Atlas; // 0x68
	FExpressionInput InputTime; // 0x70
};

struct UMaterialExpressionShadowReplace : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput Shadow; // 0x54
};

struct UTextureRenderTarget2D : UTextureRenderTarget {
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

struct USourceEffectEQPreset : USoundEffectSourcePreset {
	FSourceEffectEQSettings Settings; // 0xa0
};

struct UMovieSceneIntegerSection : UMovieSceneSection {
	FMovieSceneIntegerChannel IntegerCurve; // 0xf0
};

struct UParticleModuleSubUVMovie : UParticleModuleSubUV {
	char bUseEmitterTime : 1; // 0x70
	FRawDistributionFloat FrameRate; // 0x78
	int32_t StartingFrame; // 0xa8
};

struct UMovieSceneCameraShakeSourceTriggerTrack : UMovieSceneTrack {
	TArray<UMovieSceneSection*> Sections; // 0x98
};

struct UMaterialExpressionSign : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UParticleModuleSpawnBase : UParticleModule {
	char bProcessSpawnRate : 1; // 0x30
	char bProcessBurstList : 1; // 0x30
};

struct UAudioCurveSourceComponent : UAudioComponent {
	FName CurveSourceBindingName; // 0x868
	float CurveSyncOffset; // 0x870
};

struct ACineCameraActor : ACameraActor {
	FCameraLookatTrackingSettings LookatTrackingSettings; // 0x7b0
};

struct AStaticMeshActor : AActor {
	UStaticMeshComponent* StaticMeshComponent; // 0x220
	bool bStaticMeshReplicateMovement; // 0x228
	ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x229
};

struct UMaterialFunctionInterface : UObject {
	FGuid StateId; // 0x28
	EMaterialFunctionUsage MaterialFunctionUsage; // 0x38
};

struct UWindowTitleBarAreaSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UClothingAssetBase : UObject {
	FString ImportedFilePath; // 0x28
	FGuid AssetGuid; // 0x38
};

struct UTimelineComponent : UActorComponent {
	FTimeline TheTimeline; // 0xb0
	char bIgnoreTimeDilation : 1; // 0x148
};

struct UDefaultLevelSequenceInstanceData : UObject {
	AActor* TransformOriginActor; // 0x30
	FTransform TransformOrigin; // 0x40
};

struct At_Tool_C : ASFPSBaseItem {
	UBoxComponent* Trace; // 0x310
	UStaticMeshComponent* Mesh; // 0x318
};

struct UMediaSoundComponent : USynthComponent {
	EMediaSoundChannels Channels; // 0x6c0
	bool DynamicRateAdjustment; // 0x6c4
	float RateAdjustmentFactor; // 0x6c8
	FFloatRange RateAdjustmentRange; // 0x6cc
	UMediaPlayer* MediaPlayer; // 0x6e0
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

struct UInterpTrackInstSound : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
	UAudioComponent* PlayAudioComp; // 0x30
};

struct UEndTurnCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct ASFPSGameplayEventPoint : ASFPSGameplayPoint {
	TArray<FVector> RewardPointLocations; // 0x238
	float Radius; // 0x248
};

struct UFormMap_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UButton* btnExit; // 0x270
	UButton* btnMain; // 0x278
	UButton* btnRespawn; // 0x280
	UImage* imgRespawn; // 0x288
	UTextBlock* lbExit; // 0x290
	UNamedSlot* nsHint; // 0x298
	USFPSUserWidget_MapElement* SelectedMapElement; // 0x2a0
	bool WheelUp; // 0x2a8
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

struct UParticleModuleParameterDynamic : UParticleModuleParameterBase {
	TArray<FEmitterDynamicParameter> DynamicParams; // 0x30
	int32_t UpdateFlags; // 0x40
	char bUsesVelocity : 1; // 0x44
};

struct ASceneCapture2D : ASceneCapture {
	USceneCaptureComponent2D* CaptureComponent2D; // 0x230
};

struct AProjectile_C : ASFPSProjectile {
	USceneComponent* DefaultSceneRoot; // 0x310
};

struct Aweapon_firearms_gun_c1911_C : At_FireArm_C {
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x7e0
	UStaticMeshComponent* MagazineFull; // 0x7e8
	UStaticMeshComponent* MagazineEmpty; // 0x7f0
};

struct USFPSPhysicalMaterial : UPhysicalMaterial {
	float EnergyDrain; // 0x80
	bool bDropWoodLogs; // 0x84
	ASFPSBaseItem* WoodLogsRef; // 0x88
	int32_t WoodLogsCount; // 0x90
	int32_t NeedAttackCountForWoodLogsDrop; // 0x94
	USFPSPhysMatSoundTable* PhysMaterialProp; // 0x98
	bool bWaterMaterial; // 0xa0
	float VehicleResists[0x7]; // 0xa4
	float VehicleDamage[0x7]; // 0xc0
};

struct ABMF_Workbench_01_C : At_LocationCraftActor_C {
	USFPSACBaseCollision* SFPSACBaseCollision; // 0x358
};

struct USFPSActorLibrary : UObject {
	TArray<FSFPSActorLibraryGroupForSortedByName> GroupsSortedByName; // 0x28
	TArray<FSFPSActorLibraryGroup> Groups; // 0x38
};

struct UMovieSceneEntitySystemLinker : UObject {
	FMovieSceneEntitySystemGraph SystemGraph; // 0x298
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

struct UPaperTileMapComponent : UMeshComponent {
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

struct UCableComponent : UMeshComponent {
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

struct AUltra_Dynamic_Sky_BP_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UStaticMeshComponent* moon_plane; // 0x228
	UArrowComponent* Arrow; // 0x230
	UArrowComponent* Sun_Root; // 0x238
	UStaticMeshComponent* Ultra_Dynamic_Sky_Sphere; // 0x240
	USceneComponent* DefaultSceneRoot; // 0x248
	ADirectionalLight* Direction Light (Sun); // 0x250
	UMaterialInstanceDynamic* UDM_mat; // 0x258
	bool Refresh Settings; // 0x260
	float Cloud Speed; // 0x264
	float Cloud Density; // 0x268
	float Cloud Wisps Opacity; // 0x26c
	TArray<UCurveLinearColor*> Horizon Base Color Curve; // 0x270
	TArray<UCurveLinearColor*> Zenith Base Color Curve; // 0x280
	TArray<UCurveLinearColor*> Cloud Light Color Curve; // 0x290
	TArray<UCurveLinearColor*> Cloud Dark Color Curve; // 0x2a0
	float Time of Day; // 0x2b0
	TArray<UCurveLinearColor*> Sun Color Curve; // 0x2b8
	UCurveFloat* Shine Intensity Curve; // 0x2c8
	float Saturation; // 0x2d0
	UCurveLinearColor* Sun Cloudy Color Curve; // 0x2d8
	AExponentialHeightFog* Exponential Height Fog; // 0x2e0
	UCurveFloat* Stars Intensity Curve; // 0x2e8
	float Cloud Phase; // 0x2f0
	float Moon Scale; // 0x2f4
	float Moon Inclination; // 0x2f8
	float Moon Phase; // 0x2fc
	bool Automatically Set Advanced Settings using Time of Day; // 0x300
	float Stars Visibility; // 0x304
	float Moon Intensity; // 0x308
	float Moon Position; // 0x30c
	float Sun Angle; // 0x310
	FLinearColor Horizon Base Color; // 0x314
	FLinearColor Zenith Base Color; // 0x324
	FLinearColor Cloud Light Color; // 0x334
	FLinearColor Cloud Dark Color; // 0x344
	FLinearColor Sun Color; // 0x354
	float Cloud Shine Intensity; // 0x364
	FLinearColor Sun Light Color; // 0x368
	float Day Length; // 0x378
	UCurveFloat* Moon Position Curve; // 0x380
	bool Night Cycle; // 0x388
	bool Simulate Cloud Density Changes; // 0x389
	float Cloud Density Shift Frequency (min); // 0x38c
	float Cloud Density Shift Frequency (max); // 0x390
	float Cloud Density_target; // 0x394
	float Cloud Density Change (Smoothing); // 0x398
	float Cloud Opacity; // 0x39c
	float Overall Intensity; // 0x3a0
	float Sun Brightness; // 0x3a4
	FLinearColor Moon Color; // 0x3a8
	float Shine Variation; // 0x3b8
	float Sun Lighting Intensity; // 0x3bc
	UCurveFloat* Sun Highlight Radius_curve; // 0x3c0
	float Sun Highlight Radius; // 0x3c8
	bool First Day; // 0x3cc
	bool Simulate Moon Phase Changes; // 0x3cd
	float Stars_Intensity; // 0x3d0
	FLinearColor Stars_Color; // 0x3d4
	float Moon Orbit Offset; // 0x3e4
	FRotator Sun Rotation; // 0x3e8
	float Sun Radius; // 0x3f4
	UMaterialInstanceDynamic* Cloud Shadows MID; // 0x3f8
	bool Use Cloud Shadows; // 0x400
	float Cloud Shadows Scale; // 0x404
	float Cloud Shadows Intensity; // 0x408
	ADirectionalLight* Moon Light; // 0x410
	bool Manually Select Sun Color; // 0x418
	bool Automatically Set Moon Light Rotation; // 0x419
	bool Automatically Set Sun Light Rotation; // 0x41a
	float Moonlight Intensity; // 0x41c
	float Stars Speed; // 0x420
	float Sun Inclination; // 0x424
	float Sun Yaw; // 0x428
	float Moon Rotation; // 0x42c
	UTexture2D* Custom Moon Texture; // 0x430
	bool Use Custom Moon Texture; // 0x438
	ASkyLight* SkyLight; // 0x440
	bool Recapture Sky light periodically; // 0x448
	float Sky Light recapture period; // 0x44c
	UCurveFloat* Night Filter Curve; // 0x450
	float Night brightness; // 0x458
	float Moon Glow Intensity; // 0x45c
	UCurveFloat* Directional_Intensity_Curve; // 0x460
	float Sun_Light_Intensity; // 0x468
	float Aurora Intensity; // 0x46c
	float Aurora Speed; // 0x470
	bool Use Fast Skylight; // 0x474
	bool Use Auroras; // 0x475
	UTexture* Clouds Base Texture; // 0x478
	float Cloud Tiling; // 0x480
	float Cloud Direction; // 0x484
	bool One cloud layer; // 0x488
	float Cloud Height 1; // 0x48c
	float Cloud Height 2; // 0x490
	int32_t color_scheme; // 0x494
	UMaterialInstanceDynamic* Moon mat; // 0x498
	float Moon Angle; // 0x4a0
	APostProcessVolume* Postprocess Volume; // 0x4a8
	UMaterialInstanceDynamic* MIDFog; // 0x4b0
	UCurveLinearColor* Fog Color Curve; // 0x4b8
	bool UpdateTimeOfDay; // 0x4c0
	UCurveLinearColor* SkyLightColorCurve; // 0x4c8
};

struct UAnimationSharingSetup : UObject {
	TArray<FPerSkeletonAnimationSharingSetup> SkeletonSetups; // 0x28
	FAnimationSharingScalability ScalabilitySettings; // 0x38
};

struct UScrollBarWidgetStyle : USlateWidgetStyleContainerBase {
	FScrollBarStyle ScrollBarStyle; // 0x30
};

struct USlateWidgetStyleAsset : UObject {
	USlateWidgetStyleContainerBase* CustomStyle; // 0x28
};

struct UAnimBoneCompressionCodec : UObject {
	FString Description; // 0x28
};

struct UMapBuildDataRegistry : UObject {
	ELightingBuildQuality LevelLightingQuality; // 0x28
};

struct UCameraAnimInst : UObject {
	UCameraAnim* CamAnim; // 0x28
	UInterpGroupInst* InterpGroupInst; // 0x30
	float PlayRate; // 0x50
	UInterpTrackMove* MoveTrack; // 0x68
	UInterpTrackInstMove* MoveInst; // 0x70
	ECameraShakePlaySpace PlaySpace; // 0x78
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

struct UMaterialExpressionSamplePhysicsVectorField : UMaterialExpression {
	FExpressionInput WorldPosition; // 0x40
	EFieldVectorType FieldTarget; // 0x54
};

struct UMaterialExpressionSingleLayerWaterMaterialOutput : UMaterialExpressionCustomOutput {
	FExpressionInput ScatteringCoefficients; // 0x40
	FExpressionInput AbsorptionCoefficients; // 0x54
	FExpressionInput PhaseG; // 0x68
	FExpressionInput ColorScaleBehindWater; // 0x7c
};

struct USFPSACMission : USFPSACGameplayEvent {
	TArray<USceneComponent*> RewardPoints; // 0x250
	TArray<ASFPSLootBox*> RewardLootBoxes; // 0x260
	ASFPSLootBox* RewardLootBoxClass; // 0x278
	TArray<FSFPSMissionVariant> Variants; // 0x280
	int32_t WaitTime; // 0x294
	int32_t CompletedTime; // 0x298
};

struct UCameraShakeBase : UObject {
	bool bSingleInstance; // 0x28
	float ShakeScale; // 0x2c
	UCameraShakePattern* RootShakePattern; // 0x30
	APlayerCameraManager* CameraManager; // 0x38
};

struct UBlackboardComponent : UActorComponent {
	UBrainComponent* BrainComp; // 0xb0
	UBlackboardData* DefaultBlackboardAsset; // 0xb8
	UBlackboardData* BlackboardAsset; // 0xc0
	TArray<UBlackboardKeyType*> KeyInstances; // 0xe8
};

struct AIntervalGizmoActor : AGizmoActor {
	UGizmoLineHandleComponent* UpIntervalComponent; // 0x220
	UGizmoLineHandleComponent* DownIntervalComponent; // 0x228
	UGizmoLineHandleComponent* ForwardIntervalComponent; // 0x230
};

struct UEnvQueryGenerator : UEnvQueryNode {
	FString OptionName; // 0x30
	UEnvQueryItemType* ItemType; // 0x40
	char bAutoSortTests : 1; // 0x48
};

struct UMovieSceneColorTrack : UMovieScenePropertyTrack {
	bool bIsSlateColor; // 0xc0
};

struct UConnectionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
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
	AActor* owner; // 0xe0
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

struct UConsole : UObject {
	ULocalPlayer* ConsoleTargetPlayer; // 0x38
	UTexture2D* DefaultTexture_Black; // 0x40
	UTexture2D* DefaultTexture_White; // 0x48
	TArray<FString> HistoryBuffer; // 0x68
};

struct UInterpTrackVectorBase : UInterpTrack {
	FInterpCurveVector VectorTrack; // 0x70
	float CurveTension; // 0x88
};

struct UGeometryCacheComponent : UMeshComponent {
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

struct UBrushComponent : UPrimitiveComponent {
	UModel* Brush; // 0x450
	UBodySetup* BrushBodySetup; // 0x458
};

struct ULevelSequenceAnimSequenceLink : UAssetUserData {
	TArray<FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks; // 0x28
};

struct UEditableTextWidgetStyle : USlateWidgetStyleContainerBase {
	FEditableTextStyle EditableTextStyle; // 0x30
};

struct AProjectileGrenade_C : ASFPSProjectileGrenade {
	UProjectileMovementComponent* ProjectileMovement; // 0x430
	UStaticMeshComponent* Mesh; // 0x438
};

struct Aweapon_firearms_gun_fiveseven_C : At_FireArm_C {
	UStaticMeshComponent* DeviceLeftMount; // 0x7e0
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x7e8
	UStaticMeshComponent* MagazineFull; // 0x7f0
	UStaticMeshComponent* MagazineEmpty; // 0x7f8
};

struct ABM_Floor_01_C : At_LocationCraftActor_C {
	USFPSACBaseCollision* SFPSACBaseCollision; // 0x358
	USFPSACSnapComponent* SFPSACSnap; // 0x360
};

struct UInterpTrackInstFloatMaterialParam : UInterpTrackInst {
	TArray<UMaterialInstanceDynamic*> MaterialInstances; // 0x28
	TArray<float> ResetFloats; // 0x38
	TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x48
	UInterpTrackFloatMaterialParam* InstancedTrack; // 0x58
};

struct UMaterialExpressionDepthFade : UMaterialExpression {
	FExpressionInput InOpacity; // 0x40
	FExpressionInput FadeDistance; // 0x54
	float OpacityDefault; // 0x68
	float FadeDistanceDefault; // 0x6c
};

struct UAutoDestroySubsystem : UTickableWorldSubsystem {
	TArray<AActor*> ActorsToPoll; // 0x40
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

struct UMaterialExpressionStaticBoolParameter : UMaterialExpressionParameter {
	char DefaultValue : 1; // 0x58
};

struct UPawnAction_Move : UPawnAction {
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

struct UQuartzClockHandle : UObject {
	UQuartzSubsystem* QuartzSubsystem; // 0x168
	UWorld* WorldPtr; // 0x188
};

struct ABMF_Sandbags_03_C : At_LocationCraftActor_C {
	USFPSACBaseCollision* SFPSACBaseCollision1; // 0x358
	USFPSACBaseCollision* SFPSACBaseCollision; // 0x360
};

struct APointLight : ALight {
	UPointLightComponent* PointLightComponent; // 0x230
};

struct UGranularSynth : USynthComponent {
	USoundWave* GranulatedSoundWave; // 0x6c0
};

struct ULoudnessNRT : UAudioSynesthesiaNRT {
	ULoudnessNRTSettings* Settings; // 0x78
};

struct UMaterialExpressionSubtract : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UMaterialExpressionDivide : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UPendingNetGame : UObject {
	UNetDriver* NetDriver; // 0x30
	UDemoNetDriver* DemoNetDriver; // 0x38
};

struct UCharacter_man_01_C : USFPSAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3b0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_162; // 0x3b8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_251; // 0x548
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_290; // 0x5e8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_289; // 0x610
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_288; // 0x638
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_9; // 0x660
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_13; // 0x7b8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_287; // 0x868
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_286; // 0x890
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_285; // 0x8b8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_161; // 0x8e0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_250; // 0xa70
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_66; // 0xb10
	FAnimNode_Fabrik AnimGraphNode_Fabrik_58; // 0xb30
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_66; // 0xcc0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_284; // 0xce0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_249; // 0xd08
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_283; // 0xda8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_282; // 0xdd0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_281; // 0xdf8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_280; // 0xe20
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_160; // 0xe48
	FAnimNode_Slot AnimGraphNode_Slot_6; // 0xfd8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_159; // 0x1020
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_65; // 0x11b0
	FAnimNode_Fabrik AnimGraphNode_Fabrik_57; // 0x11d0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_65; // 0x1360
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_64; // 0x1380
	FAnimNode_Fabrik AnimGraphNode_Fabrik_56; // 0x13a0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_64; // 0x1530
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_279; // 0x1550
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_158; // 0x1578
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_248; // 0x1708
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_247; // 0x17a8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_246; // 0x1848
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_157; // 0x18e8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_245; // 0x1a78
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_156; // 0x1b18
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_244; // 0x1ca8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_243; // 0x1d48
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_155; // 0x1de8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_278; // 0x1f78
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_277; // 0x1fa0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_154; // 0x1fc8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_96; // 0x2158
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_242; // 0x2220
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_276; // 0x22c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_275; // 0x22e8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_274; // 0x2310
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_63; // 0x2338
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_63; // 0x2358
	FAnimNode_Fabrik AnimGraphNode_Fabrik_55; // 0x2380
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_241; // 0x2510
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_273; // 0x25b0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_240; // 0x25d8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_239; // 0x2678
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_238; // 0x2718
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_272; // 0x27b8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_237; // 0x27e0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_62; // 0x2880
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_62; // 0x28a0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_271; // 0x28c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_270; // 0x28e8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_236; // 0x2910
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_269; // 0x29b0
	FAnimNode_Fabrik AnimGraphNode_Fabrik_54; // 0x29e0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_8; // 0x2b70
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_268; // 0x2cc8
	FAnimNode_Slot AnimGraphNode_Slot_5; // 0x2cf0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_7; // 0x2d38
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_267; // 0x2e90
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_295; // 0x2eb8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_294; // 0x2f38
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_293; // 0x2fb8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_292; // 0x3038
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_291; // 0x30b8
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_15; // 0x3138
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_14; // 0x3208
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_266; // 0x32d8
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_13; // 0x3300
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_265; // 0x33d0
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_12; // 0x33f8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_264; // 0x34c8
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_11; // 0x34f0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_263; // 0x35c0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_95; // 0x35e8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_94; // 0x36b0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_93; // 0x3778
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_92; // 0x3840
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_91; // 0x3908
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_262; // 0x39d0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_153; // 0x39f8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_152; // 0x3b88
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_6; // 0x3d18
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_261; // 0x3e70
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_260; // 0x3e98
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_259; // 0x3ec0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_235; // 0x3ee8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_234; // 0x3f88
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_258; // 0x4028
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_257; // 0x4050
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_151; // 0x4078
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_150; // 0x4208
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_149; // 0x4398
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_148; // 0x4528
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_147; // 0x46b8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_256; // 0x4848
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_146; // 0x4870
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_233; // 0x4a00
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_232; // 0x4aa0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_231; // 0x4b40
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_145; // 0x4be0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_255; // 0x4d70
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_144; // 0x4d98
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_143; // 0x4f28
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_142; // 0x50b8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_141; // 0x5248
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_140; // 0x53d8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_139; // 0x5568
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_138; // 0x56f8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_137; // 0x5888
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_136; // 0x5a18
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_135; // 0x5ba8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_230; // 0x5d38
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_254; // 0x5dd8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_229; // 0x5e00
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_228; // 0x5ea0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_253; // 0x5f40
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_252; // 0x5f68
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_290; // 0x5f90
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_289; // 0x6010
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_90; // 0x6090
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_89; // 0x6158
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_251; // 0x6220
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_88; // 0x6248
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_288; // 0x6310
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_287; // 0x6390
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_87; // 0x6410
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_250; // 0x64d8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_86; // 0x6500
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_286; // 0x65c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_285; // 0x6648
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_284; // 0x66c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_283; // 0x6748
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_85; // 0x67c8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_249; // 0x6890
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_84; // 0x68b8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_83; // 0x6980
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_248; // 0x6a48
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_82; // 0x6a70
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_81; // 0x6b38
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_247; // 0x6c00
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_80; // 0x6c28
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_282; // 0x6cf0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_281; // 0x6d70
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_280; // 0x6df0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_279; // 0x6e70
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_227; // 0x6ef0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_226; // 0x6f90
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_225; // 0x7030
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_224; // 0x70d0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_223; // 0x7170
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_222; // 0x7210
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_221; // 0x72b0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_220; // 0x7350
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_219; // 0x73f0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_218; // 0x7490
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_217; // 0x7530
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_216; // 0x75d0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_215; // 0x7670
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_214; // 0x7710
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_79; // 0x77b0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_246; // 0x7878
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_78; // 0x78a0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_77; // 0x7968
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_245; // 0x7a30
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_76; // 0x7a58
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_278; // 0x7b20
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_277; // 0x7ba0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_276; // 0x7c20
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_275; // 0x7ca0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_51; // 0x7d20
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_61; // 0x7e28
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_61; // 0x7e48
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_50; // 0x7e68
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_49; // 0x7f70
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_60; // 0x8078
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_60; // 0x8098
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_244; // 0x80b8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_134; // 0x80e0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_133; // 0x8270
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_12; // 0x8400
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_274; // 0x84b0
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_10; // 0x8530
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_273; // 0x8600
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_272; // 0x8680
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_9; // 0x8700
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_271; // 0x87d0
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_8; // 0x8850
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_270; // 0x8920
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_7; // 0x89a0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_243; // 0x8a70
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_242; // 0x8a98
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_59; // 0x8ac0
	FAnimNode_Fabrik AnimGraphNode_Fabrik_53; // 0x8ae0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_59; // 0x8c70
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_241; // 0x8c90
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5; // 0x8cb8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_58; // 0x8e10
	FAnimNode_Fabrik AnimGraphNode_Fabrik_52; // 0x8e30
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_58; // 0x8fc0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_240; // 0x8fe0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_57; // 0x9008
	FAnimNode_Fabrik AnimGraphNode_Fabrik_51; // 0x9030
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_57; // 0x91c0
	FAnimNode_Slot AnimGraphNode_Slot_4; // 0x91e0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_269; // 0x9228
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0x92a8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_239; // 0x9400
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_238; // 0x9428
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_237; // 0x9450
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_236; // 0x9478
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_132; // 0x94a0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_131; // 0x9630
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_130; // 0x97c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_235; // 0x9950
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_234; // 0x9978
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_56; // 0x99a0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_56; // 0x99c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_268; // 0x99e0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_233; // 0x9a60
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_232; // 0x9a88
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_55; // 0x9ab0
	FAnimNode_Fabrik AnimGraphNode_Fabrik_50; // 0x9ad0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_55; // 0x9c60
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_11; // 0x9c80
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_231; // 0x9d30
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_267; // 0x9d58
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_266; // 0x9dd8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_129; // 0x9e58
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_213; // 0x9fe8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_230; // 0xa088
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_265; // 0xa0b0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_229; // 0xa130
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_212; // 0xa158
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_228; // 0xa1f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_264; // 0xa220
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_211; // 0xa2a0
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_6; // 0xa340
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_227; // 0xa410
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_210; // 0xa438
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_226; // 0xa4d8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_209; // 0xa500
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_225; // 0xa5a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_263; // 0xa5c8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_224; // 0xa648
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_208; // 0xa670
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_223; // 0xa710
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_128; // 0xa738
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_207; // 0xa8c8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_222; // 0xa968
	FAnimNode_Fabrik AnimGraphNode_Fabrik_49; // 0xa990
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_69; // 0xab20
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_262; // 0xabe8
	FAnimNode_Fabrik AnimGraphNode_Fabrik_48; // 0xac70
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_54; // 0xae00
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_54; // 0xae20
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_221; // 0xae40
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_53; // 0xae68
	FAnimNode_Fabrik AnimGraphNode_Fabrik_47; // 0xae90
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_53; // 0xb020
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_206; // 0xb040
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_220; // 0xb0e0
	FAnimNode_Fabrik AnimGraphNode_Fabrik_46; // 0xb110
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_52; // 0xb2a0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_52; // 0xb2c0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_68; // 0xb2e0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_51; // 0xb3a8
	FAnimNode_Fabrik AnimGraphNode_Fabrik_45; // 0xb3d0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_51; // 0xb560
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_67; // 0xb580
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_50; // 0xb648
	FAnimNode_Fabrik AnimGraphNode_Fabrik_44; // 0xb670
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_50; // 0xb800
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_49; // 0xb820
	FAnimNode_Fabrik AnimGraphNode_Fabrik_43; // 0xb840
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_49; // 0xb9d0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_219; // 0xb9f0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_205; // 0xba18
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_48; // 0xbab8
	FAnimNode_Fabrik AnimGraphNode_Fabrik_42; // 0xbae0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_48; // 0xbc70
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_218; // 0xbc90
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_204; // 0xbcb8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_203; // 0xbd58
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_261; // 0xbdf8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_66; // 0xbe78
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_217; // 0xbf40
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_47; // 0xbf68
	FAnimNode_Fabrik AnimGraphNode_Fabrik_41; // 0xbf90
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_47; // 0xc120
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_216; // 0xc140
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_202; // 0xc168
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_260; // 0xc208
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_215; // 0xc288
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_65; // 0xc2b0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_64; // 0xc378
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_214; // 0xc440
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_201; // 0xc468
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_213; // 0xc508
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_46; // 0xc530
	FAnimNode_Fabrik AnimGraphNode_Fabrik_40; // 0xc550
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_46; // 0xc6e0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_75; // 0xc700
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_212; // 0xc7c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_259; // 0xc7f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_258; // 0xc870
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_74; // 0xc8f0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_211; // 0xc9b8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_200; // 0xc9e0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_63; // 0xca80
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_210; // 0xcb48
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_257; // 0xcb70
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_62; // 0xcbf0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_209; // 0xccb8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_256; // 0xcce0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_61; // 0xcd60
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_208; // 0xce28
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_255; // 0xce50
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_45; // 0xced0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_45; // 0xcef0
	FAnimNode_Fabrik AnimGraphNode_Fabrik_39; // 0xcf10
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_199; // 0xd0a0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_207; // 0xd140
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_254; // 0xd168
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_253; // 0xd1e8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_73; // 0xd268
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_206; // 0xd330
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_72; // 0xd358
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_71; // 0xd420
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_205; // 0xd4e8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_70; // 0xd510
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_252; // 0xd5d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_251; // 0xd658
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_204; // 0xd6d8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_198; // 0xd700
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_203; // 0xd7a0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_60; // 0xd7c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_250; // 0xd890
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_249; // 0xd910
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_59; // 0xd990
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_202; // 0xda58
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_127; // 0xda80
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_44; // 0xdc10
	FAnimNode_Fabrik AnimGraphNode_Fabrik_38; // 0xdc30
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_44; // 0xddc0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_201; // 0xdde0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_197; // 0xde08
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_43; // 0xdea8
	FAnimNode_Fabrik AnimGraphNode_Fabrik_37; // 0xded0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_43; // 0xe060
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_200; // 0xe080
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_58; // 0xe0a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_248; // 0xe170
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_247; // 0xe1f0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_199; // 0xe270
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_42; // 0xe298
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_42; // 0xe2b8
	FAnimNode_Fabrik AnimGraphNode_Fabrik_36; // 0xe2e0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_198; // 0xe470
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_196; // 0xe498
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_197; // 0xe538
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_57; // 0xe560
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_246; // 0xe628
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_56; // 0xe6a8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_126; // 0xe770
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_196; // 0xe900
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_41; // 0xe928
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_40; // 0xe948
	FAnimNode_Fabrik AnimGraphNode_Fabrik_35; // 0xe970
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_41; // 0xeb00
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_195; // 0xeb20
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_195; // 0xeb48
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_194; // 0xebe8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_194; // 0xec10
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_193; // 0xecb0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_55; // 0xecd8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_54; // 0xeda0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_245; // 0xee68
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_244; // 0xeee8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_4; // 0xef68
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_192; // 0xf028
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_53; // 0xf050
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_39; // 0xf118
	FAnimNode_Fabrik AnimGraphNode_Fabrik_34; // 0xf140
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_40; // 0xf2d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_243; // 0xf2f0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_191; // 0xf370
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_193; // 0xf398
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_52; // 0xf438
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_190; // 0xf500
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_192; // 0xf528
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_51; // 0xf5c8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_189; // 0xf690
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_242; // 0xf6b8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_50; // 0xf738
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_188; // 0xf800
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_241; // 0xf828
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_240; // 0xf8a8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_49; // 0xf928
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_187; // 0xf9f0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_48; // 0xfa18
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_186; // 0xfae0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_239; // 0xfb08
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_125; // 0xfb88
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_124; // 0xfd18
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_123; // 0xfea8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_122; // 0x10038
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_191; // 0x101c8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_38; // 0x10268
	FAnimNode_Fabrik AnimGraphNode_Fabrik_33; // 0x10290
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_39; // 0x10420
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_185; // 0x10440
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_190; // 0x10468
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_37; // 0x10508
	FAnimNode_Fabrik AnimGraphNode_Fabrik_32; // 0x10530
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_38; // 0x106c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_184; // 0x106e0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_189; // 0x10708
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_36; // 0x107a8
	FAnimNode_Fabrik AnimGraphNode_Fabrik_31; // 0x107d0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_37; // 0x10960
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_183; // 0x10980
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_188; // 0x109a8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_35; // 0x10a48
	FAnimNode_Fabrik AnimGraphNode_Fabrik_30; // 0x10a70
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_36; // 0x10c00
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_182; // 0x10c20
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_187; // 0x10c48
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_34; // 0x10ce8
	FAnimNode_Fabrik AnimGraphNode_Fabrik_29; // 0x10d10
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_35; // 0x10ea0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_181; // 0x10ec0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_186; // 0x10ee8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_180; // 0x10f88
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_33; // 0x10fb0
	FAnimNode_Fabrik AnimGraphNode_Fabrik_28; // 0x10fd0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_34; // 0x11160
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_185; // 0x11180
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_32; // 0x11220
	FAnimNode_Fabrik AnimGraphNode_Fabrik_27; // 0x11240
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_33; // 0x113d0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_179; // 0x113f0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_184; // 0x11418
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_178; // 0x114b8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_31; // 0x114e0
	FAnimNode_Fabrik AnimGraphNode_Fabrik_26; // 0x11500
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_32; // 0x11690
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_47; // 0x116b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_238; // 0x11778
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_183; // 0x117f8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_177; // 0x11898
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_182; // 0x118c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_237; // 0x11960
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_46; // 0x119e0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_176; // 0x11aa8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_30; // 0x11ad0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_31; // 0x11af0
	FAnimNode_Fabrik AnimGraphNode_Fabrik_25; // 0x11b10
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_181; // 0x11ca0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_175; // 0x11d40
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_121; // 0x11d68
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_120; // 0x11ef8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_119; // 0x12088
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_118; // 0x12218
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_117; // 0x123a8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_116; // 0x12538
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_115; // 0x126c8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_114; // 0x12858
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_45; // 0x129e8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_174; // 0x12ab0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_236; // 0x12ad8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_30; // 0x12b58
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_48; // 0x12b78
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_47; // 0x12c80
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_46; // 0x12d88
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_45; // 0x12e90
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_44; // 0x12f98
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_43; // 0x130a0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_42; // 0x131a8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_113; // 0x132b0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_44; // 0x13440
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_235; // 0x13508
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_173; // 0x13588
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_172; // 0x135b0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_171; // 0x135d8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_112; // 0x13600
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_170; // 0x13790
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_111; // 0x137b8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_169; // 0x13948
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_168; // 0x13970
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_167; // 0x13998
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_166; // 0x139c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_165; // 0x139e8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_164; // 0x13a10
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_163; // 0x13a38
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_162; // 0x13a60
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_161; // 0x13a88
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_160; // 0x13ab0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_159; // 0x13ad8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_158; // 0x13b00
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_157; // 0x13b28
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_156; // 0x13b50
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_155; // 0x13b78
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_154; // 0x13ba0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_153; // 0x13bc8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_152; // 0x13bf0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_151; // 0x13c18
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_110; // 0x13c40
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_109; // 0x13dd0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_108; // 0x13f60
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_69; // 0x140f0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_150; // 0x141b8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_68; // 0x141e0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_234; // 0x142a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_233; // 0x14328
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_67; // 0x143a8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_149; // 0x14470
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_66; // 0x14498
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_232; // 0x14560
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_231; // 0x145e0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_65; // 0x14660
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_148; // 0x14728
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_64; // 0x14750
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_230; // 0x14818
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_229; // 0x14898
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_29; // 0x14918
	FAnimNode_Fabrik AnimGraphNode_Fabrik_24; // 0x14940
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_29; // 0x14ad0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_107; // 0x14af0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_106; // 0x14c80
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_105; // 0x14e10
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_180; // 0x14fa0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_179; // 0x15040
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_178; // 0x150e0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_104; // 0x15180
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_103; // 0x15310
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_102; // 0x154a0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_147; // 0x15630
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_146; // 0x15658
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_145; // 0x15680
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_144; // 0x156a8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_43; // 0x156d0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_143; // 0x15798
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_101; // 0x157c0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_177; // 0x15950
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_142; // 0x159f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_228; // 0x15a18
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_100; // 0x15a98
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_99; // 0x15c28
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_98; // 0x15db8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_176; // 0x15f48
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_175; // 0x15fe8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_97; // 0x16088
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_96; // 0x16218
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_174; // 0x163a8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_173; // 0x16448
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_95; // 0x164e8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_94; // 0x16678
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_93; // 0x16808
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_141; // 0x16998
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_140; // 0x169c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_139; // 0x169e8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_138; // 0x16a10
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_172; // 0x16a38
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_92; // 0x16ad8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_91; // 0x16c68
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_90; // 0x16df8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_171; // 0x16f88
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_42; // 0x17028
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_137; // 0x170f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_227; // 0x17118
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_89; // 0x17198
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_88; // 0x17328
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_87; // 0x174b8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_86; // 0x17648
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_85; // 0x177d8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_84; // 0x17968
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_83; // 0x17af8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_82; // 0x17c88
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_226; // 0x17e18
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_81; // 0x17e98
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_41; // 0x18028
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_80; // 0x180f0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_79; // 0x18280
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_78; // 0x18410
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_77; // 0x185a0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_41; // 0x18730
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_76; // 0x18838
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_75; // 0x189c8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_40; // 0x18b58
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_74; // 0x18c60
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_73; // 0x18df0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_39; // 0x18f80
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_72; // 0x19088
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_136; // 0x19218
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_225; // 0x19240
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_40; // 0x192c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_135; // 0x19388
	FAnimNode_Slot AnimGraphNode_Slot_3; // 0x193b0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3; // 0x193f8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_134; // 0x194b8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_133; // 0x194e0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x19508
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_38; // 0x195c8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_170; // 0x196d0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_169; // 0x19770
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_168; // 0x19810
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_132; // 0x198b0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_131; // 0x198d8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_130; // 0x19900
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_129; // 0x19928
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_128; // 0x19950
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_127; // 0x19978
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_126; // 0x199a0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_125; // 0x199c8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_124; // 0x199f0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_123; // 0x19a18
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_122; // 0x19a40
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_121; // 0x19a68
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_120; // 0x19a90
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_119; // 0x19ab8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_118; // 0x19ae0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_117; // 0x19b08
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_116; // 0x19b30
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_115; // 0x19b58
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_114; // 0x19b80
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_167; // 0x19ba8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_71; // 0x19c48
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_70; // 0x19dd8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_69; // 0x19f68
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_68; // 0x1a0f8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_67; // 0x1a288
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_66; // 0x1a418
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_65; // 0x1a5a8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_64; // 0x1a738
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_63; // 0x1a8c8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_62; // 0x1aa58
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_61; // 0x1abe8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_60; // 0x1ad78
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_59; // 0x1af08
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_58; // 0x1b098
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_57; // 0x1b228
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_56; // 0x1b3b8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_55; // 0x1b548
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_54; // 0x1b6d8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_53; // 0x1b868
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_37; // 0x1b9f8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_36; // 0x1bb00
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_39; // 0x1bc08
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_35; // 0x1bcd0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_34; // 0x1bdd8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_38; // 0x1bee0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_179; // 0x1bfa8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_37; // 0x1c090
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_166; // 0x1c158
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_178; // 0x1c1f8
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_5; // 0x1c2e0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_33; // 0x1c3b0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_32; // 0x1c4b8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_31; // 0x1c5c0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_30; // 0x1c6c8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_29; // 0x1c7d0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_28; // 0x1c8d8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_27; // 0x1c9e0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_36; // 0x1cae8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_224; // 0x1cbb0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_52; // 0x1cc30
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_35; // 0x1cdc0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_223; // 0x1ce88
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_51; // 0x1cf08
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_50; // 0x1d098
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_165; // 0x1d228
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_49; // 0x1d2c8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_48; // 0x1d458
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_47; // 0x1d5e8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_113; // 0x1d778
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_34; // 0x1d7a0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_112; // 0x1d868
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_222; // 0x1d890
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_26; // 0x1d910
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_46; // 0x1da18
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_45; // 0x1dba8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_164; // 0x1dd38
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_44; // 0x1ddd8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_43; // 0x1df68
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_163; // 0x1e0f8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_42; // 0x1e198
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_41; // 0x1e328
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_111; // 0x1e4b8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_110; // 0x1e4e0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_40; // 0x1e508
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_162; // 0x1e698
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_39; // 0x1e738
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_109; // 0x1e8c8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_108; // 0x1e8f0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_38; // 0x1e918
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_37; // 0x1eaa8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_36; // 0x1ec38
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_25; // 0x1edc8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_24; // 0x1eed0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_28; // 0x1efd8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_28; // 0x1eff8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_161; // 0x1f018
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_107; // 0x1f0b8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_106; // 0x1f0e0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_160; // 0x1f108
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_35; // 0x1f1a8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_34; // 0x1f338
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_33; // 0x1f4c8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_27; // 0x1f590
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_23; // 0x1f5b0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_22; // 0x1f6b8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_21; // 0x1f7c0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_20; // 0x1f8c8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_19; // 0x1f9d0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_18; // 0x1fad8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_17; // 0x1fbe0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_27; // 0x1fce8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_159; // 0x1fd08
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_105; // 0x1fda8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_177; // 0x1fdd0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_16; // 0x1feb8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_104; // 0x1ffc0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_103; // 0x1ffe8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x20010
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_10; // 0x20168
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_221; // 0x20218
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_102; // 0x20298
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_32; // 0x202c0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_158; // 0x20388
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_101; // 0x20428
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_31; // 0x20450
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_15; // 0x20518
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_220; // 0x20620
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_100; // 0x206a0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_30; // 0x206c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_219; // 0x20790
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_157; // 0x20810
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_99; // 0x208b0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_29; // 0x208d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_218; // 0x209a0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_98; // 0x20a20
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_28; // 0x20a48
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_156; // 0x20b10
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_97; // 0x20bb0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_27; // 0x20bd8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_217; // 0x20ca0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_216; // 0x20d20
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x20da0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x20de8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_96; // 0x20ea8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_155; // 0x20ed0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_95; // 0x20f70
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_94; // 0x20f98
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_215; // 0x20fc0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_26; // 0x21040
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_93; // 0x21108
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_154; // 0x21130
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_214; // 0x211d0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_153; // 0x21250
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_92; // 0x212f0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_25; // 0x21318
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_152; // 0x213e0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_24; // 0x21480
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_91; // 0x21548
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_213; // 0x21570
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_176; // 0x215f0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_23; // 0x216d8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_22; // 0x217a0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_175; // 0x21868
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_26; // 0x21950
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_26; // 0x21970
	FAnimNode_Fabrik AnimGraphNode_Fabrik_23; // 0x21990
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_212; // 0x21b20
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_21; // 0x21ba0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_211; // 0x21c68
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_151; // 0x21ce8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_33; // 0x21d88
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_32; // 0x21f18
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_14; // 0x220a8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_13; // 0x221b0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_12; // 0x222b8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_11; // 0x223c0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_10; // 0x224c8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_9; // 0x225d0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8; // 0x226d8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_25; // 0x227e0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_25; // 0x22800
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7; // 0x22820
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6; // 0x22928
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5; // 0x22a30
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x22b38
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x22c40
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x22d48
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x22e50
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_24; // 0x22f58
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_24; // 0x22f78
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_31; // 0x22f98
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_90; // 0x23128
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_20; // 0x23150
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_19; // 0x23218
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_89; // 0x232e0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_150; // 0x23308
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_210; // 0x233a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_209; // 0x23428
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_88; // 0x234a8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_23; // 0x234d0
	FAnimNode_Fabrik AnimGraphNode_Fabrik_22; // 0x234f0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_23; // 0x23680
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_22; // 0x236a0
	FAnimNode_Fabrik AnimGraphNode_Fabrik_21; // 0x236c0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_22; // 0x23850
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_87; // 0x23870
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_149; // 0x23898
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_148; // 0x23938
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_86; // 0x239d8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_30; // 0x23a00
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_85; // 0x23b90
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_29; // 0x23bb8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_28; // 0x23d48
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_147; // 0x23ed8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_18; // 0x23f78
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_84; // 0x24040
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_208; // 0x24068
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_21; // 0x240e8
	FAnimNode_Fabrik AnimGraphNode_Fabrik_20; // 0x24110
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_21; // 0x242a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_207; // 0x242c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_83; // 0x24340
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_17; // 0x24368
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_16; // 0x24430
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_82; // 0x244f8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_146; // 0x24520
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_27; // 0x245c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_206; // 0x24750
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_145; // 0x247d0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_15; // 0x24870
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_81; // 0x24938
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_205; // 0x24960
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_26; // 0x249e0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_80; // 0x24b70
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_25; // 0x24b98
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_24; // 0x24d28
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_79; // 0x24eb8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_20; // 0x24ee0
	FAnimNode_Fabrik AnimGraphNode_Fabrik_19; // 0x24f00
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_20; // 0x25090
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_19; // 0x250b0
	FAnimNode_Fabrik AnimGraphNode_Fabrik_18; // 0x250d0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_19; // 0x25260
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_78; // 0x25280
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_144; // 0x252a8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_143; // 0x25348
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_77; // 0x253e8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_18; // 0x25410
	FAnimNode_Fabrik AnimGraphNode_Fabrik_17; // 0x25430
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_18; // 0x255c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_76; // 0x255e0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_14; // 0x25608
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_13; // 0x256d0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_75; // 0x25798
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_142; // 0x257c0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_23; // 0x25860
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_204; // 0x259f0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_22; // 0x25a70
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_74; // 0x25c00
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_21; // 0x25c28
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_73; // 0x25db8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_20; // 0x25de0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_17; // 0x25f70
	FAnimNode_Fabrik AnimGraphNode_Fabrik_16; // 0x25f90
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_17; // 0x26120
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_16; // 0x26140
	FAnimNode_Fabrik AnimGraphNode_Fabrik_15; // 0x26160
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_16; // 0x262f0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_72; // 0x26310
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_141; // 0x26338
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_140; // 0x263d8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_71; // 0x26478
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_15; // 0x264a0
	FAnimNode_Fabrik AnimGraphNode_Fabrik_14; // 0x264c0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_15; // 0x26650
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_203; // 0x26670
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_70; // 0x266f0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_12; // 0x26718
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_11; // 0x267e0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_69; // 0x268a8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_139; // 0x268d0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_19; // 0x26970
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_68; // 0x26b00
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_18; // 0x26b28
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_17; // 0x26cb8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_67; // 0x26e48
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_16; // 0x26e70
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_14; // 0x27000
	FAnimNode_Fabrik AnimGraphNode_Fabrik_13; // 0x27020
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_14; // 0x271b0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_138; // 0x271d0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_66; // 0x27270
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_13; // 0x27298
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_13; // 0x272b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_202; // 0x272d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_201; // 0x27358
	FAnimNode_Fabrik AnimGraphNode_Fabrik_12; // 0x273e0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_65; // 0x27570
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_10; // 0x27598
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_64; // 0x27660
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_137; // 0x27688
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_136; // 0x27728
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_200; // 0x277c8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_63; // 0x27848
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_9; // 0x27870
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_62; // 0x27938
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_135; // 0x27960
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_15; // 0x27a00
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_61; // 0x27b90
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_14; // 0x27bb8
	FAnimNode_Fabrik AnimGraphNode_Fabrik_11; // 0x27d50
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_12; // 0x27ee0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_12; // 0x27f00
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_199; // 0x27f20
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_60; // 0x27fa0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_59; // 0x27fc8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_11; // 0x27ff0
	FAnimNode_Fabrik AnimGraphNode_Fabrik_10; // 0x28010
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_11; // 0x281a0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_134; // 0x281c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_58; // 0x28260
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_133; // 0x28288
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_10; // 0x28328
	FAnimNode_Fabrik AnimGraphNode_Fabrik_9; // 0x28350
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_10; // 0x284e0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_57; // 0x28500
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_56; // 0x28528
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_8; // 0x28550
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x28618
	FAnimNode_Slot AnimGraphNode_Slot; // 0x28770
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_55; // 0x287b8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_38; // 0x287e0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_37; // 0x28808
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_36; // 0x28830
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_35; // 0x28858
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_34; // 0x28880
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_33; // 0x288a8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_32; // 0x288d0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_31; // 0x288f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_30; // 0x28920
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_29; // 0x28948
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_28; // 0x28970
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_27; // 0x28998
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_26; // 0x289c0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_25; // 0x289e8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_24; // 0x28a10
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_23; // 0x28a38
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_22; // 0x28a60
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_21; // 0x28a88
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_20; // 0x28ab0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_19; // 0x28ad8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18; // 0x28b00
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17; // 0x28b28
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0x28b50
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0x28b78
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x28ba0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x28bc8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x28bf0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x28c18
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x28c40
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x28c68
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x28c90
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x28cb8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x28ce0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x28d08
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x28d30
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x28d58
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x28d80
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x28da8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_174; // 0x28dd0
	FAnimNode_StateResult AnimGraphNode_StateResult_15; // 0x28eb8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_9; // 0x28ee8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_198; // 0x28f98
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_197; // 0x29018
	FAnimNode_StateResult AnimGraphNode_StateResult_14; // 0x29098
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_196; // 0x290c8
	FAnimNode_StateResult AnimGraphNode_StateResult_13; // 0x29148
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_195; // 0x29178
	FAnimNode_StateResult AnimGraphNode_StateResult_12; // 0x291f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_194; // 0x29228
	FAnimNode_StateResult AnimGraphNode_StateResult_11; // 0x292a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_193; // 0x292d8
	FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x29358
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_192; // 0x29388
	FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x29408
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_4; // 0x29438
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_173; // 0x29508
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_172; // 0x295f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_191; // 0x296d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_190; // 0x29758
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_3; // 0x297d8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_171; // 0x298a8
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_2; // 0x29990
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_170; // 0x29a60
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_169; // 0x29b48
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_168; // 0x29c30
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_167; // 0x29d18
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_166; // 0x29e00
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_165; // 0x29ee8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_189; // 0x29fd0
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive; // 0x2a050
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_188; // 0x2a120
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_8; // 0x2a1a0
	FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x2a250
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_63; // 0x2a280
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_164; // 0x2a348
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_163; // 0x2a430
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_132; // 0x2a518
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_162; // 0x2a5b8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_62; // 0x2a6a0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_161; // 0x2a768
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_160; // 0x2a850
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_131; // 0x2a938
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_159; // 0x2a9d8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_61; // 0x2aac0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_158; // 0x2ab88
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_157; // 0x2ac70
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_130; // 0x2ad58
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_156; // 0x2adf8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_60; // 0x2aee0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_155; // 0x2afa8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_154; // 0x2b090
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_129; // 0x2b178
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_153; // 0x2b218
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_59; // 0x2b300
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_152; // 0x2b3c8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_151; // 0x2b4b0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_128; // 0x2b598
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_150; // 0x2b638
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_58; // 0x2b720
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_149; // 0x2b7e8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_148; // 0x2b8d0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_127; // 0x2b9b8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_147; // 0x2ba58
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_57; // 0x2bb40
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_146; // 0x2bc08
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_145; // 0x2bcf0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_126; // 0x2bdd8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_144; // 0x2be78
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_56; // 0x2bf60
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_143; // 0x2c028
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_142; // 0x2c110
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_125; // 0x2c1f8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_141; // 0x2c298
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_55; // 0x2c380
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_140; // 0x2c448
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_139; // 0x2c530
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_124; // 0x2c618
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_138; // 0x2c6b8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_54; // 0x2c7a0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_137; // 0x2c868
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_136; // 0x2c950
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_123; // 0x2ca38
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_135; // 0x2cad8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_53; // 0x2cbc0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_134; // 0x2cc88
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_133; // 0x2cd70
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_122; // 0x2ce58
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_132; // 0x2cef8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_52; // 0x2cfe0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_131; // 0x2d0a8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_130; // 0x2d190
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_121; // 0x2d278
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_129; // 0x2d318
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_51; // 0x2d400
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_128; // 0x2d4c8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_127; // 0x2d5b0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_120; // 0x2d698
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_126; // 0x2d738
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_50; // 0x2d820
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_125; // 0x2d8e8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_124; // 0x2d9d0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_119; // 0x2dab8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_123; // 0x2db58
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_49; // 0x2dc40
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_122; // 0x2dd08
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_121; // 0x2ddf0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_118; // 0x2ded8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_120; // 0x2df78
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_48; // 0x2e060
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_119; // 0x2e128
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_118; // 0x2e210
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_117; // 0x2e2f8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_117; // 0x2e398
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_47; // 0x2e480
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_116; // 0x2e548
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_115; // 0x2e630
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_116; // 0x2e718
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_114; // 0x2e7b8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_46; // 0x2e8a0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_113; // 0x2e968
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_112; // 0x2ea50
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_115; // 0x2eb38
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_111; // 0x2ebd8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_45; // 0x2ecc0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_110; // 0x2ed88
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_109; // 0x2ee70
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_114; // 0x2ef58
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_108; // 0x2eff8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_44; // 0x2f0e0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_107; // 0x2f1a8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_106; // 0x2f290
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_113; // 0x2f378
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_105; // 0x2f418
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_43; // 0x2f500
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_104; // 0x2f5c8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_103; // 0x2f6b0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_112; // 0x2f798
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_102; // 0x2f838
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_7; // 0x2f920
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_42; // 0x2f9d0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_101; // 0x2fa98
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_100; // 0x2fb80
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_99; // 0x2fc68
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_111; // 0x2fd50
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_98; // 0x2fdf0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_110; // 0x2fed8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_97; // 0x2ff78
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_96; // 0x30060
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_109; // 0x30148
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_95; // 0x301e8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_41; // 0x302d0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_94; // 0x30398
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_93; // 0x30480
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_92; // 0x30568
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_91; // 0x30650
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_108; // 0x30738
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_107; // 0x307d8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_90; // 0x30878
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_89; // 0x30960
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_88; // 0x30a48
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_106; // 0x30b30
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_87; // 0x30bd0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_86; // 0x30cb8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_85; // 0x30da0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_105; // 0x30e88
	FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x30f28
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_187; // 0x30f58
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_104; // 0x30fd8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_186; // 0x31078
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_185; // 0x310f8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_103; // 0x31178
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_184; // 0x31218
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_183; // 0x31298
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_102; // 0x31318
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_182; // 0x313b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_181; // 0x31438
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_101; // 0x314b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_180; // 0x31558
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_179; // 0x315d8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_100; // 0x31658
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_178; // 0x316f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_177; // 0x31778
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_99; // 0x317f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_176; // 0x31898
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_175; // 0x31918
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_98; // 0x31998
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_174; // 0x31a38
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_173; // 0x31ab8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_97; // 0x31b38
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_172; // 0x31bd8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_171; // 0x31c58
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_96; // 0x31cd8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_170; // 0x31d78
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_169; // 0x31df8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_95; // 0x31e78
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_168; // 0x31f18
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_167; // 0x31f98
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_94; // 0x32018
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_166; // 0x320b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_165; // 0x32138
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_93; // 0x321b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_164; // 0x32258
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_163; // 0x322d8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_92; // 0x32358
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_162; // 0x323f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_161; // 0x32478
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_91; // 0x324f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_160; // 0x32598
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_159; // 0x32618
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_90; // 0x32698
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_158; // 0x32738
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_157; // 0x327b8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_89; // 0x32838
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_156; // 0x328d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_155; // 0x32958
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_88; // 0x329d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_154; // 0x32a78
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_153; // 0x32af8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_87; // 0x32b78
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_152; // 0x32c18
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_151; // 0x32c98
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_86; // 0x32d18
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_150; // 0x32db8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_149; // 0x32e38
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_85; // 0x32eb8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_148; // 0x32f58
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_147; // 0x32fd8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_84; // 0x33058
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_146; // 0x330f8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_6; // 0x33178
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_145; // 0x33228
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_83; // 0x332a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_144; // 0x33348
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_143; // 0x333c8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_82; // 0x33448
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_142; // 0x334e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_141; // 0x33568
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_140; // 0x335e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_139; // 0x33668
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_81; // 0x336e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_138; // 0x33788
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_137; // 0x33808
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_80; // 0x33888
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_136; // 0x33928
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_135; // 0x339a8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_79; // 0x33a28
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x33ac8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_134; // 0x33af8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_133; // 0x33b78
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_132; // 0x33bf8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_131; // 0x33c78
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_130; // 0x33cf8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_129; // 0x33d78
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_128; // 0x33df8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_127; // 0x33e78
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_126; // 0x33ef8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_125; // 0x33f78
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_124; // 0x33ff8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_123; // 0x34078
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_122; // 0x340f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_121; // 0x34178
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_120; // 0x341f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_119; // 0x34278
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_118; // 0x342f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_117; // 0x34378
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_116; // 0x343f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_115; // 0x34478
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_114; // 0x344f8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_5; // 0x34578
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_113; // 0x34628
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_112; // 0x346a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_111; // 0x34728
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_78; // 0x347a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_110; // 0x34848
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_77; // 0x348c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_109; // 0x34968
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_108; // 0x349e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_107; // 0x34a68
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x34ae8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_84; // 0x34b18
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x34c00
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_106; // 0x34c30
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_105; // 0x34cb0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_104; // 0x34d30
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_103; // 0x34db0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_102; // 0x34e30
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_101; // 0x34eb0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_100; // 0x34f30
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_99; // 0x34fb0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_98; // 0x35030
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_97; // 0x350b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_96; // 0x35130
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_95; // 0x351b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_94; // 0x35230
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_93; // 0x352b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_92; // 0x35330
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_91; // 0x353b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_90; // 0x35430
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_89; // 0x354b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_88; // 0x35530
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_87; // 0x355b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_86; // 0x35630
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_4; // 0x356b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_85; // 0x35760
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_84; // 0x357e0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_83; // 0x35860
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_76; // 0x358e0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_82; // 0x35980
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_75; // 0x35a00
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_81; // 0x35aa0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_80; // 0x35b20
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_79; // 0x35ba0
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x35c20
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_78; // 0x35c50
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_74; // 0x35cd0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_77; // 0x35d70
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_76; // 0x35df0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_73; // 0x35e70
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_75; // 0x35f10
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_74; // 0x35f90
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_72; // 0x36010
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_73; // 0x360b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_72; // 0x36130
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_71; // 0x361b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_71; // 0x36250
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_70; // 0x362d0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_70; // 0x36350
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_69; // 0x363f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_68; // 0x36470
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_69; // 0x364f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_67; // 0x36590
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_66; // 0x36610
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_68; // 0x36690
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_65; // 0x36730
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_64; // 0x367b0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_67; // 0x36830
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_63; // 0x368d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_62; // 0x36950
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_66; // 0x369d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_61; // 0x36a70
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_60; // 0x36af0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_65; // 0x36b70
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_59; // 0x36c10
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_58; // 0x36c90
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_64; // 0x36d10
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_57; // 0x36db0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_56; // 0x36e30
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_63; // 0x36eb0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_55; // 0x36f50
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_54; // 0x36fd0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_62; // 0x37050
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_53; // 0x370f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_52; // 0x37170
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_61; // 0x371f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_51; // 0x37290
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_50; // 0x37310
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_60; // 0x37390
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_49; // 0x37430
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_48; // 0x374b0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_59; // 0x37530
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_47; // 0x375d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_46; // 0x37650
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_58; // 0x376d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_45; // 0x37770
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_44; // 0x377f0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_57; // 0x37870
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_43; // 0x37910
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_42; // 0x37990
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_56; // 0x37a10
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_41; // 0x37ab0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_40; // 0x37b30
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_55; // 0x37bb0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_39; // 0x37c50
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_38; // 0x37cd0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_54; // 0x37d50
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_37; // 0x37df0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_36; // 0x37e70
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_53; // 0x37ef0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_35; // 0x37f90
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_34; // 0x38010
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_52; // 0x38090
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_33; // 0x38130
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_51; // 0x381b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_32; // 0x38250
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_31; // 0x382d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_30; // 0x38350
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_29; // 0x383d0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_50; // 0x38450
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_28; // 0x384f0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_49; // 0x38570
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_27; // 0x38610
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_26; // 0x38690
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_3; // 0x38710
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x387c0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_83; // 0x387f0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_40; // 0x388d8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_82; // 0x389a0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_81; // 0x38a88
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_48; // 0x38b70
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_80; // 0x38c10
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_39; // 0x38cf8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_79; // 0x38dc0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_78; // 0x38ea8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_47; // 0x38f90
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_77; // 0x39030
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_38; // 0x39118
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_76; // 0x391e0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_75; // 0x392c8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_46; // 0x393b0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_74; // 0x39450
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_37; // 0x39538
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_73; // 0x39600
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_72; // 0x396e8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_45; // 0x397d0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_71; // 0x39870
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_36; // 0x39958
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_70; // 0x39a20
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_69; // 0x39b08
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_44; // 0x39bf0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_68; // 0x39c90
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_35; // 0x39d78
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_67; // 0x39e40
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_66; // 0x39f28
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_43; // 0x3a010
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_65; // 0x3a0b0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_34; // 0x3a198
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_64; // 0x3a260
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_63; // 0x3a348
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_42; // 0x3a430
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_62; // 0x3a4d0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_33; // 0x3a5b8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_61; // 0x3a680
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_60; // 0x3a768
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_41; // 0x3a850
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_59; // 0x3a8f0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_32; // 0x3a9d8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_58; // 0x3aaa0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_57; // 0x3ab88
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_40; // 0x3ac70
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_56; // 0x3ad10
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_31; // 0x3adf8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_55; // 0x3aec0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_54; // 0x3afa8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_39; // 0x3b090
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_53; // 0x3b130
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_30; // 0x3b218
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_52; // 0x3b2e0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_51; // 0x3b3c8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_38; // 0x3b4b0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_50; // 0x3b550
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_29; // 0x3b638
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_49; // 0x3b700
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_48; // 0x3b7e8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_37; // 0x3b8d0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_47; // 0x3b970
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_28; // 0x3ba58
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_46; // 0x3bb20
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_45; // 0x3bc08
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_36; // 0x3bcf0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_44; // 0x3bd90
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_27; // 0x3be78
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_43; // 0x3bf40
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_42; // 0x3c028
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_35; // 0x3c110
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_41; // 0x3c1b0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_26; // 0x3c298
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_40; // 0x3c360
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_39; // 0x3c448
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_34; // 0x3c530
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_38; // 0x3c5d0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_25; // 0x3c6b8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_37; // 0x3c780
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_36; // 0x3c868
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_33; // 0x3c950
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_35; // 0x3c9f0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_24; // 0x3cad8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_34; // 0x3cba0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_33; // 0x3cc88
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_32; // 0x3cd70
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_32; // 0x3ce10
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_23; // 0x3cef8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_31; // 0x3cfc0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_30; // 0x3d0a8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_31; // 0x3d190
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_29; // 0x3d230
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_22; // 0x3d318
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_28; // 0x3d3e0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_27; // 0x3d4c8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_30; // 0x3d5b0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_26; // 0x3d650
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_21; // 0x3d738
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_25; // 0x3d800
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_24; // 0x3d8e8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_29; // 0x3d9d0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_23; // 0x3da70
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_20; // 0x3db58
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_22; // 0x3dc20
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_21; // 0x3dd08
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_28; // 0x3ddf0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_20; // 0x3de90
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_19; // 0x3df78
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_19; // 0x3e040
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_18; // 0x3e128
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_27; // 0x3e210
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_26; // 0x3e2b0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_17; // 0x3e350
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_16; // 0x3e438
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_25; // 0x3e520
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_15; // 0x3e5c0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_14; // 0x3e6a8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_2; // 0x3e790
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_13; // 0x3e840
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_12; // 0x3e928
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_24; // 0x3ea10
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_23; // 0x3eab0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_11; // 0x3eb50
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_10; // 0x3ec38
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_22; // 0x3ed20
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_9; // 0x3edc0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_8; // 0x3eea8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_21; // 0x3ef90
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_7; // 0x3f030
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_18; // 0x3f118
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_6; // 0x3f1e0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5; // 0x3f2c8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4; // 0x3f3b0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; // 0x3f498
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_17; // 0x3f580
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x3f648
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x3f730
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_20; // 0x3f818
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3f8b8
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x3f8e8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_54; // 0x3f998
	FAnimNode_Root AnimGraphNode_Root; // 0x3f9c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_25; // 0x3f9f0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_13; // 0x3fa70
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_53; // 0x3fc00
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_12; // 0x3fc28
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_52; // 0x3fdb8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_51; // 0x3fde0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_50; // 0x3fe08
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_9; // 0x3fe30
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_9; // 0x3fe50
	FAnimNode_Fabrik AnimGraphNode_Fabrik_8; // 0x3fe70
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_24; // 0x40000
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_19; // 0x40080
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_49; // 0x40120
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_18; // 0x40148
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_48; // 0x401e8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_7; // 0x40210
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_47; // 0x402d8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_46; // 0x40300
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_23; // 0x40328
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_45; // 0x403a8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_6; // 0x403d0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_5; // 0x40498
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_44; // 0x40560
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_17; // 0x40588
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_16; // 0x40628
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_43; // 0x406c8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_4; // 0x406f0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3; // 0x407b8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_42; // 0x40880
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_15; // 0x408a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_22; // 0x40948
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_21; // 0x409c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_20; // 0x40a48
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_19; // 0x40ac8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_41; // 0x40b48
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_40; // 0x40b70
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_14; // 0x40b98
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_13; // 0x40c38
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_39; // 0x40cd8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_8; // 0x40d00
	FAnimNode_Fabrik AnimGraphNode_Fabrik_7; // 0x40d20
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_8; // 0x40eb0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_38; // 0x40ed0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_7; // 0x40ef8
	FAnimNode_Fabrik AnimGraphNode_Fabrik_6; // 0x40f20
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_7; // 0x410b0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6; // 0x410d0
	FAnimNode_Fabrik AnimGraphNode_Fabrik_5; // 0x410f0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_6; // 0x41280
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_37; // 0x412a0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_12; // 0x412c8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_11; // 0x41368
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_36; // 0x41408
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_5; // 0x41430
	FAnimNode_Fabrik AnimGraphNode_Fabrik_4; // 0x41450
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5; // 0x415e0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_11; // 0x41600
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_35; // 0x41790
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_10; // 0x417b8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_9; // 0x41948
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_8; // 0x41ad8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_34; // 0x41c68
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_7; // 0x41c90
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_33; // 0x41e20
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4; // 0x41e48
	FAnimNode_Fabrik AnimGraphNode_Fabrik_3; // 0x41e70
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4; // 0x42000
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3; // 0x42020
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3; // 0x42040
	FAnimNode_Fabrik AnimGraphNode_Fabrik_2; // 0x42060
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x421f0
	FAnimNode_Fabrik AnimGraphNode_Fabrik; // 0x42210
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x423a0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2; // 0x423c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_32; // 0x42488
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x424b0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x424d0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_31; // 0x42598
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x425c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_18; // 0x425e0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_17; // 0x42660
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_10; // 0x426e0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_9; // 0x42780
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_8; // 0x42820
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_7; // 0x428c0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_16; // 0x42960
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_30; // 0x42a28
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_16; // 0x42a50
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15; // 0x42ad0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_15; // 0x42b50
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_14; // 0x42c18
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_29; // 0x42ce0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_13; // 0x42d08
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14; // 0x42dd0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13; // 0x42e50
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_12; // 0x42ed0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_28; // 0x42f98
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_11; // 0x42fc0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0x43088
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0x43108
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_10; // 0x43188
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_27; // 0x43250
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_9; // 0x43278
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x43340
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x433c0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6; // 0x43440
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; // 0x434e0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x43580
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_8; // 0x43620
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_26; // 0x436e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x43710
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x43790
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_7; // 0x43810
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_6; // 0x438d8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_25; // 0x439a0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_5; // 0x439c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x43a90
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x43b10
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_4; // 0x43b90
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_24; // 0x43c58
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_3; // 0x43c80
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x43d48
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x43dc8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_2; // 0x43e48
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_23; // 0x43f10
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x43f38
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x44000
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x44080
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x44100
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x441b0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_22; // 0x44308
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_21; // 0x44330
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_20; // 0x44358
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_19; // 0x44380
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_18; // 0x443a8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_17; // 0x443d0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_16; // 0x443f8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_15; // 0x44420
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_14; // 0x44448
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_13; // 0x44470
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_12; // 0x44498
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_11; // 0x444c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_10; // 0x444e8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_9; // 0x44510
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8; // 0x44538
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0x44560
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x44588
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x445b0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x445d8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x44600
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x44628
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x44650
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_6; // 0x44678
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x44808
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x448a8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x44948
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_5; // 0x449e8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_4; // 0x44b78
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_3; // 0x44d08
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_2; // 0x44e98
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x45028
	float Aiming_blend_true; // 0x451b8
	float Aiming_blend_false; // 0x451bc
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

struct UMovieSceneEnumTrack : UMovieScenePropertyTrack {
	UEnum* Enum; // 0xc0
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

struct At_Material_C : ASFPSBaseItem {
	UBoxComponent* Trace; // 0x310
	UStaticMeshComponent* Mesh; // 0x318
};

struct UBTDecorator_IsAtLocation : UBTDecorator_BlackboardBase {
	float AcceptableRadius; // 0x90
	FAIDataProviderFloatValue ParametrizedAcceptableRadius; // 0x98
	FAIDistanceType GeometricDistanceType; // 0xd0
	char bUseParametrizedRadius : 1; // 0xd4
	char bUseNavAgentGoalLocation : 1; // 0xd4
	char bPathFindingBasedTest : 1; // 0xd4
};

struct ABMF_Sandbags_02_C : At_LocationCraftActor_C {
	USFPSACBaseCollision* SFPSACBaseCollision; // 0x358
};

struct URectLightComponent : ULocalLightComponent {
	float SourceWidth; // 0x340
	float SourceHeight; // 0x344
	float BarnDoorAngle; // 0x348
	float BarnDoorLength; // 0x34c
	UTexture* SourceTexture; // 0x350
};

struct USFPSGameplayEventManager : UObject {
	bool bDynamicTimeScale; // 0x34
	ASFPSGameplayEventPoint* EventPointClass; // 0x40
	USFPSGameplayEvent* EventClass; // 0x48
	TArray<USFPSGameplayEvent*> Events; // 0x60
	int32_t EventTimeMin; // 0x70
	int32_t EventTimeMax; // 0x74
	int32_t MaximumEvents; // 0x78
	float EventActivationRadiusSquared; // 0x7c
	float EventActivationTime; // 0x80
	float EventMaxActiveTime; // 0x84
	int32_t MonstersMin; // 0x88
	int32_t MonstersMax; // 0x8c
	bool bEnableBaseFiltering; // 0x90
	float FilterRadius; // 0x94
	ESFPSGameplayEventInfoType ClientInfoType; // 0x98
	UObject* ActorClass; // 0xa0
	ASFPSLootBox* RewardContainerClass; // 0xa8
	USFPSItemSetStructSet* RewardSet; // 0xb0
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

struct UMaterialExpressionConstantBiasScale : UMaterialExpression {
	FExpressionInput Input; // 0x40
	float Bias; // 0x54
	float Scale; // 0x58
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

struct ABMF_Fence_01_C : At_LocationCraftActor_C {
	USFPSACSnapComponent* SFPSACSnap1; // 0x358
	USFPSACSnapComponent* SFPSACSnap; // 0x360
	USFPSACBaseCollision* SFPSACBaseCollision; // 0x368
};

struct USFPSVoiceList : UObject {
	TArray<USFPSSoundTalkSet*> SentenceSoundTable; // 0x28
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

struct UFoliageType_Actor : UFoliageType {
	AActor* ActorClass; // 0x3b0
	bool bShouldAttachToBaseComponent; // 0x3b8
};

struct ABMF_Gates_lock_01_C : ABMF_Gates_01_C {
	UStaticMeshComponent* Base_lock_02; // 0x388
	UStaticMeshComponent* Base_lock_01; // 0x390
};

struct UPaperGroupedSpriteComponent : UMeshComponent {
	TArray<UMaterialInterface*> InstanceMaterials; // 0x478
	TArray<FSpriteInstanceData> PerInstanceSpriteData; // 0x488
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
	APlayerController* OriginalControllerRef; // 0x618
	UPlayer* OriginalPlayer; // 0x620
	float SpeedScale; // 0x628
	float InitialMaxSpeed; // 0x62c
	float InitialAccel; // 0x630
	float InitialDecel; // 0x634
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

struct UBlackboardData : UDataAsset {
	UBlackboardData* Parent; // 0x30
	TArray<FBlackboardEntry> Keys; // 0x38
	char bHasSynchronizedKeys : 1; // 0x48
};

struct Ascope_opt_cod_4x_C : At_Sight_C {
	UStaticMeshComponent* cod_4x_reticles; // 0x3d0
};

struct AM_TripwireTrap_02_C : At_LocationCraftActor_C {
	UBoxComponent* Interaction; // 0x358
	UBoxComponent* GrenadeCollision; // 0x360
	UBoxComponent* ExplosionCollision; // 0x368
	USFPSACTripwireTrap* ACTripwireTrap; // 0x370
	USFPSACBaseCollision* SFPSACBaseCollision1; // 0x378
};

struct UMovieSceneSequence : UMovieSceneSignedObject {
	UMovieSceneCompiledData* CompiledData; // 0x50
	EMovieSceneCompletionMode DefaultCompletionMode; // 0x58
	bool bParentContextsAreSignificant; // 0x59
	bool bPlayableDirectly; // 0x5a
	EMovieSceneSequenceFlags SequenceFlags; // 0x5b
};

struct UTestMovieSceneSequence : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x60
};

struct ABM_WallWindow_01_C : At_LocationCraftActor_C {
	USFPSACBaseCollision* SFPSACBaseCollision; // 0x358
	USFPSACSnapComponent* SFPSACSnap; // 0x360
};

struct UDatasmithStaticMeshComponentTemplate : UDatasmithObjectTemplate {
	UStaticMesh* StaticMesh; // 0x30
	TArray<UMaterialInterface*> OverrideMaterials; // 0x38
};

struct UMaterialExpressionSceneColor : UMaterialExpression {
	EMaterialSceneAttributeInputMode InputMode; // 0x40
	FExpressionInput Input; // 0x44
	FExpressionInput OffsetFraction; // 0x58
	FVector2D ConstInput; // 0x6c
};

struct UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x98
	bool bUseLegacySectionIndexBlend; // 0xa8
	FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams; // 0xb0
	bool bBlendFirstChildOfRoot; // 0xe0
};

struct UBTTask_PushPawnAction : UBTTask_PawnActionBase {
	UPawnAction* Action; // 0x70
};

struct UMaterialExpressionRotateAboutAxis : UMaterialExpression {
	FExpressionInput NormalizedRotationAxis; // 0x40
	FExpressionInput RotationAngle; // 0x54
	FExpressionInput PivotPoint; // 0x68
	FExpressionInput Position; // 0x7c
	float Period; // 0x90
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

struct UNavigationDataChunk : UObject {
	FName NavigationDataName; // 0x28
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

struct ASFPSShootingRangeTarget : AActor {
	UMeshComponent* MeshRef; // 0x220
	UTextRenderComponent* lbInfo; // 0x228
	UStaticMeshComponent* Target; // 0x230
	UStaticMeshComponent* DamageClient; // 0x238
	UStaticMeshComponent* DamageServer; // 0x240
	UStaticMeshComponent* ClearTrigger; // 0x2e8
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

struct ASFPSGameplayArea : AActor {
	TArray<USFPSACEncounter*> Encounters; // 0x220
	TArray<USFPSACMission*> Missions; // 0x230
	USceneComponent* Root; // 0x250
	TArray<USFPSACMission*> ActiveMissions; // 0x258
	TArray<USFPSACMission*> ReadyMissions; // 0x268
	TArray<USFPSACEncounter*> ActiveEncounters; // 0x278
	int32_t MaxActiveEncounters; // 0x288
	int32_t ActivationDelay; // 0x28c
};

struct UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> CameraShakeSections; // 0x98
};

struct ABMF_Sandbags_01_C : At_LocationCraftActor_C {
	USFPSACBaseCollision* SFPSACBaseCollision; // 0x358
};

struct UParticleModuleTypeDataGpu : UParticleModuleTypeDataBase {
	FGPUSpriteEmitterInfo EmitterInfo; // 0x30
	FGPUSpriteResourceData ResourceData; // 0x2b0
	float CameraMotionBlurAmount; // 0x410
	char bClearExistingParticlesOnInit : 1; // 0x414
};

struct UInAppPurchaseQueryCallbackProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UPaperTerrainMaterial : UDataAsset {
	TArray<FPaperTerrainMaterialRule> Rules; // 0x30
	UPaperSprite* InteriorFill; // 0x40
};

struct UBoxReflectionCaptureComponent : UReflectionCaptureComponent {
	float BoxTransitionDistance; // 0x270
	UBoxComponent* PreviewInfluenceBox; // 0x278
	UBoxComponent* PreviewCaptureBox; // 0x280
};

struct UFileMediaSource : UBaseMediaSource {
	FString FilePath; // 0x88
	bool PrecacheFile; // 0x98
};

struct AShell_Gun0_C : ASFPSShell {
	UStaticMeshComponent* Mesh; // 0x250
};

struct UUniformVector : UFieldNodeVector {
	float Magnitude; // 0xb0
	FVector Direction; // 0xb4
};

struct Adevice_lighter_01_C : At_Device_C {
	UStaticMeshComponent* Flame; // 0x4a0
	UPointLightComponent* PointLight; // 0x4a8
};

struct At_Gameplay_C : ASFPSGameplayItem {
	UBoxComponent* Trace; // 0x360
	UStaticMeshComponent* Mesh; // 0x368
};

struct UEndpointSubmix : USoundSubmixBase {
	FName EndpointType; // 0x38
	UAudioEndpointSettingsBase* EndpointSettingsClass; // 0x40
	UAudioEndpointSettingsBase* EndpointSettings; // 0x48
};

struct UInterpTrackFloatMaterialParam : UInterpTrackFloatBase {
	TArray<UMaterialInterface*> TargetMaterials; // 0x90
	FName ParamName; // 0xa0
};

struct USFPSCraftLibrary : UObject {
	TArray<FSFPSCraftGroup> Items; // 0x28
};

struct UMaterialExpressionCosine : UMaterialExpression {
	FExpressionInput Input; // 0x40
	float Period; // 0x54
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

struct UMediaComponent : UActorComponent {
	UMediaTexture* MediaTexture; // 0xb0
	UMediaPlayer* MediaPlayer; // 0xb8
};

struct ARectLight : ALight {
	URectLightComponent* RectLightComponent; // 0x230
};

struct UARGeoAnchorComponent : UARComponent {
	FARGeoAnchorUpdatePayload ReplicatedPayload; // 0x280
};

struct ANavigationObjectBase : AActor {
	UCapsuleComponent* CapsuleComponent; // 0x228
	UBillboardComponent* GoodSprite; // 0x230
	UBillboardComponent* BadSprite; // 0x238
	char bIsPIEPlayerStart : 1; // 0x240
};

struct UPhononReverbSourceSettings : UReverbPluginSourceSettingsBase {
	EIplSimulationType SourceReverbSimulationType; // 0x28
	float SourceReverbContribution; // 0x2c
};

struct APaperTerrainActor : AActor {
	USceneComponent* DummyRoot; // 0x220
	UPaperTerrainSplineComponent* SplineComponent; // 0x228
	UPaperTerrainComponent* RenderComponent; // 0x230
};

struct UEnvQueryTest_GameplayTags : UEnvQueryTest {
	FGameplayTagQuery TagQueryToMatch; // 0x1f8
	bool bUpdatedToUseQuery; // 0x240
	EGameplayContainerMatchType TagsToMatch; // 0x241
	FGameplayTagContainer GameplayTags; // 0x248
};

struct UMovieSceneEventSection : UMovieSceneSection {
	FNameCurve Events; // 0xe8
	FMovieSceneEventSectionData EventData; // 0x160
};

struct Aweapon_firearms_smg_hkump_C : At_FireArm_C {
	UStaticMeshComponent* DTK; // 0x7e0
	UStaticMeshComponent* DeviceLeftMount; // 0x7e8
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x7f0
	UStaticMeshComponent* MagazineFull; // 0x7f8
	UStaticMeshComponent* MagazineEmpty; // 0x800
};

struct AM_Campfire_01_C : At_LocationCraftActor_C {
	UParticleSystemComponent* ParticleSystem; // 0x358
	UPointLightComponent* BigLight; // 0x360
	UPointLightComponent* RedLight; // 0x368
	USFPSACBaseCollision* SFPSACBaseCollision1; // 0x370
};

struct UMaterialExpressionLightmassReplace : UMaterialExpression {
	FExpressionInput Realtime; // 0x40
	FExpressionInput Lightmass; // 0x54
};

struct At_InventoryDevice_C : ASFPSInventoryDeviceItem {
	UBoxComponent* Trace; // 0x328
	UStaticMeshComponent* Mesh; // 0x330
};

struct UMonoWaveTableSynthPreset : UObject {
	FString PresetName; // 0x28
	char bLockKeyframesToGridBool : 1; // 0x38
	int32_t LockKeyframesToGrid; // 0x3c
	int32_t WaveTableResolution; // 0x40
	TArray<FRuntimeFloatCurve> WaveTable; // 0x48
	char bNormalizeWaveTables : 1; // 0x58
};

struct UProxyLODMeshSimplificationSettings : UDeveloperSettings {
	FName ProxyLODMeshReductionModuleName; // 0x38
};

struct USFPSAnimEvent_StairStepSound : UAnimNotify {
	bool IsRightLeg; // 0x38
};

struct Aweapon_firearms_supp_rgm40_C : At_FireArm_C {
	UStaticMeshComponent* Shell; // 0x7e0
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x7e8
};

struct UParticleModuleColor_Seeded : UParticleModuleColor {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xb0
};

struct UAsyncActionChangePrimaryAssetBundles : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UAchievementQueryCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UMediaTimeStampInfo : UObject {
	FTimespan Time; // 0x28
	int64_t SequenceIndex; // 0x30
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

struct Aweapon_firearms_rifle_aks74u_mod_C : At_FireArm_C {
	UStaticMeshComponent* DTK; // 0x7e0
	UStaticMeshComponent* DeviceLeftMount1; // 0x7e8
	UStaticMeshComponent* SightOpen; // 0x7f0
	UStaticMeshComponent* SightClose; // 0x7f8
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x800
	UStaticMeshComponent* MagazineFull; // 0x808
	UStaticMeshComponent* MagazineEmpty; // 0x810
};

struct AFlashGrenade_C : ASFPSFlashGrenade {
	UProjectileMovementComponent* ProjectileMovement; // 0x3e8
	UStaticMeshComponent* Mesh; // 0x3f0
};

struct UMovieSceneSubSection : UMovieSceneSection {
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

struct AMagicLeapSharedWorldGameMode : AGameMode {
	FMagicLeapSharedWorldSharedData SharedWorldData; // 0x308
	FMulticastInlineDelegate OnNewLocalDataFromClients; // 0x318
	float PinSelectionConfidenceThreshold; // 0x328
	AMagicLeapSharedWorldPlayerController* ChosenOne; // 0x3d0
};

struct UInterpTrackToggle : UInterpTrack {
	TArray<FToggleTrackKey> ToggleTrack; // 0x70
	char bActivateSystemEachUpdate : 1; // 0x80
	char bActivateWithJustAttachedFlag : 1; // 0x80
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	char bFireEventsWhenJumpingForwards : 1; // 0x80
};

struct UABP_weapon_firearms_rifle_groza_C : USFPSWeaponAnimInstance_AR {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	FAnimNode_Root AnimGraphNode_Root; // 0x2e8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x318
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x360
};

struct UParticleModuleLifetime_Seeded : UParticleModuleLifetime {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x60
};

struct UGizmoLineHandleComponent : UGizmoBaseComponent {
	FVector Normal; // 0x470
	float HandleSize; // 0x47c
	float Thickness; // 0x480
	FVector Direction; // 0x484
	float Length; // 0x490
	bool bImageScale; // 0x494
};

struct UInteractiveGizmo : UObject {
	UInputBehaviorSet* InputBehaviors; // 0x30
};

struct UMaterialExpressionConstant : UMaterialExpression {
	float R; // 0x40
};

struct USoundNodeAttenuation : USoundNode {
	USoundAttenuation* AttenuationSettings; // 0x48
	FSoundAttenuationSettings AttenuationOverrides; // 0x50
	char bOverrideAttenuation : 1; // 0x3f0
};

struct UAsyncActionLoadPrimaryAssetList : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UBillboardComponent : UPrimitiveComponent {
	UTexture2D* Sprite; // 0x450
	char bIsScreenSizeScaled : 1; // 0x458
	float ScreenSize; // 0x45c
	float U; // 0x460
	float UL; // 0x464
	float V; // 0x468
	float VL; // 0x46c
};

struct UMaterialExpressionRayTracingQualitySwitch : UMaterialExpression {
	FExpressionInput Normal; // 0x40
	FExpressionInput RayTraced; // 0x54
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

struct UDataDrivenCVarEngineSubsystem : UEngineSubsystem {
	FMulticastInlineDelegate OnDataDrivenCVarDelegate; // 0x30
};

struct UAsyncActionLoadPrimaryAssetClass : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78
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

struct UMaterialExpressionPreviousFrameSwitch : UMaterialExpression {
	FExpressionInput CurrentFrame; // 0x40
	FExpressionInput PreviousFrame; // 0x54
};

struct ULightmappedSurfaceCollection : UObject {
	UModel* SourceModel; // 0x28
	TArray<int32_t> Surfaces; // 0x30
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

struct UARTrackedImage : UARTrackedGeometry {
	UARCandidateImage* DetectedImage; // 0xf8
	FVector2D EstimatedSize; // 0x100
};

struct ASFPSWeaponMF_Sight : ASFPSBaseWeaponMF {
	UStaticMesh* FullMesh; // 0x348
	UStaticMesh* PartialMesh; // 0x350
	bool bDoNotShowWeaponSight; // 0x358
	FVector CameraOrigin; // 0x35c
	FVector CameraOriginSecondary; // 0x368
	FTransform CollimatorTransform; // 0x380
	TArray<float> Zooms; // 0x3b0
};

struct UNavigationInvokerComponent : UActorComponent {
	float TileGenerationRadius; // 0xb0
	float TileRemovalRadius; // 0xb4
};

struct UfrmRadialMenu_C : USFPSUserWidget_RadialMenu {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278
	UUMG_RadialMenu_C* rmMotions_Start; // 0x280
};

struct UEnvQueryNode : UObject {
	int32_t VerNum; // 0x28
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

struct ASFPSAmmo : ASFPSBaseItem {
	ESFPSAmmoType AmmoType; // 0x310
	ESFPSDamageType DamageType; // 0x311
	FSFPSAmmoParameters Params; // 0x314
};

struct UParticleModuleMeshRotationRate_Seeded : UParticleModuleMeshRotationRate {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x78
};

struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	ETerrainCoordMappingType MappingType; // 0x40
	ELandscapeCustomizedCoordType CustomUVType; // 0x41
	float MappingScale; // 0x44
	float MappingRotation; // 0x48
	float MappingPanU; // 0x4c
	float MappingPanV; // 0x50
};

struct UABP_weapon_firearms_gun_TT_C : USFPSWeaponAnimInstance_Gun {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	FAnimNode_Root AnimGraphNode_Root; // 0x2e8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x318
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x360
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x388
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x3b0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x3d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x400
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x428
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x450
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x4d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x500
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x580
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x5b0
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x630
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x660
};

struct UPawnMovementComponent : UNavMovementComponent {
	APawn* PawnOwner; // 0x130
};

struct UMovieSceneMarginSection : UMovieSceneSection {
	FMovieSceneFloatChannel TopCurve; // 0xf0
	FMovieSceneFloatChannel LeftCurve; // 0x190
	FMovieSceneFloatChannel RightCurve; // 0x230
	FMovieSceneFloatChannel BottomCurve; // 0x2d0
};

struct USFPSACLocality : USceneComponent {
	float Radius; // 0x20c
	bool bDrawLabel; // 0x210
	FSFPSMapLabel MapLabel; // 0x218
	bool bDrawSprite; // 0x238
	bool bSafeArea; // 0x239
	bool bCanBeSelectedForRespawn; // 0x23a
	int32_t RespawnCooldownSec; // 0x23c
	bool bBase; // 0x240
};

struct UPawnAction_Repeat : UPawnAction {
	UPawnAction* ActionToRepeat; // 0x90
	UPawnAction* RecentActionCopy; // 0x98
	EPawnActionFailHandling ChildFailureHandlingMode; // 0xa0
};

struct UParticleModuleAccelerationDragScaleOverLife : UParticleModuleAccelerationBase {
	UDistributionFloat* DragScale; // 0x38
	FRawDistributionFloat DragScaleRaw; // 0x40
};

struct ACharacter_man_01_C : ASFPSCharacter {
	UWidgetComponent* frmPVE; // 0x1170
	USceneComponent* weapon_barrier_sg1; // 0x1178
	USceneComponent* weapon_barrier_gun0; // 0x1180
	USceneComponent* weapon_barrier_sg0; // 0x1188
	USceneComponent* weapon_barrier_ar0; // 0x1190
};

struct USoundNodeModulContOuterParam : USoundNode {
	UModulatorContOuterParams* PitchModulationParams; // 0x48
	UModulatorContOuterParams* VolumeModulationParams; // 0x50
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

struct UEditableGameplayTagQuery : UObject {
	FString UserDescription; // 0x28
	UEditableGameplayTagQueryExpression* RootExpression; // 0x48
	FGameplayTagQuery TagQueryExportText_Helper; // 0x50
};

struct UMaterialExpressionHairAttributes : UMaterialExpression {
	char bUseTangentSpace : 1; // 0x40
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

struct USFPSAnimEvent_Weap_Steel_Damage : UAnimNotify {
	bool bFirstEvent; // 0x38
};

struct ASFPSAmbienceSpot : AActor {
	TArray<USFPSSoundBoxCopm*> BoxComponents; // 0x230
	float Chance; // 0x258
	float RainIntensivity; // 0x25c
	TArray<FSoundCues> SoundCues; // 0x260
	float SepDelay; // 0x270
	bool UseAltDelay; // 0x274
	FFloatMinMax FPlayBackDelay; // 0x278
	float SoundDensity; // 0x280
	TArray<UAudioComponent*> AudioComponents; // 0x288
	float FChanceToPlaySmall; // 0x298
};

struct UBehaviorTreeManager : UObject {
	int32_t MaxDebuggerSteps; // 0x28
	TArray<FBehaviorTreeTemplateInfo> LoadedTemplates; // 0x30
	TArray<UBehaviorTreeComponent*> ActiveComponents; // 0x40
};

struct ASFPSWeatherMan : AActor {
	float Wind_ForceMin; // 0x22c
	float Wind_ForceMax; // 0x230
	float Wind_SpeedMax; // 0x234
	float Wind_TimeActiveMin; // 0x238
	float Wind_TimeActiveMax; // 0x23c
	float Wind_TimeInactiveMin; // 0x240
	float Wind_TimeInactiveMax; // 0x244
	float Wind_DragConst; // 0x248
	float Wind_DragLinear; // 0x24c
	float Wind_DragSq; // 0x250
	UMaterialParameterCollection* ParametersCollection; // 0x280
};

struct UInteractiveToolPropertySet : UObject {
	UInteractiveToolPropertySet* CachedProperties; // 0x38
	bool bIsPropertySetEnabled; // 0x40
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

struct UMaterialExpressionRuntimeVirtualTextureSampleParameter : UMaterialExpressionRuntimeVirtualTextureSample {
	FName ParameterName; // 0x90
	FGuid ExpressionGUID; // 0x98
	FName group; // 0xa8
};

struct UDistributionVectorConstantCurve : UDistributionVector {
	FInterpCurveVector ConstantCurve; // 0x38
	char bLockAxes : 1; // 0x50
	EDistributionVectorLockFlags LockedAxes; // 0x54
};

struct UPhysicsCollisionHandler : UObject {
	float ImpactThreshold; // 0x28
	float ImpactReFireDelay; // 0x2c
	USoundBase* DefaultImpactSound; // 0x30
	float LastImpactSoundTime; // 0x38
};

struct UDistributionVectorUniform : UDistributionVector {
	FVector Max; // 0x38
	FVector Min; // 0x44
	char bLockAxes : 1; // 0x50
	EDistributionVectorLockFlags LockedAxes; // 0x54
	EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x55
	char bUseExtremes : 1; // 0x58
};

struct UMovieSceneEventTriggerSection : UMovieSceneEventSectionBase {
	FMovieSceneEventChannel EventChannel; // 0xf0
};

struct USFPSShellManager : UObject {
	TArray<ASFPSShell*> ShellList_SG0; // 0x28
	TArray<ASFPSShell*> ShellList_AR0; // 0x38
	TArray<ASFPSShell*> ShellList_Gun0; // 0x48
	TArray<ASFPSShell*> ShellList_SR0; // 0x58
	TArray<ASFPSShell*> ShellList_SR1; // 0x68
	ASFPSShell* Shell_SG0; // 0x90
	ASFPSShell* Shell_AR0; // 0x98
	ASFPSShell* Shell_Gun0; // 0xa0
	ASFPSShell* Shell_SR0; // 0xa8
	ASFPSShell* Shell_SR1; // 0xb0
};

struct UBasicOverlays : UOverlays {
	TArray<FOverlayItem> Overlays; // 0x28
};

struct UfrmAAdminPanelGroup_C : USFPSUserWidget_CraftRolloutMan {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b8
	UCheckBox* btnOpen; // 0x2c0
	UImage* imgBackground0; // 0x2c8
	UImage* imgIcon; // 0x2d0
	UScrollBox* sbMain; // 0x2d8
};

struct USFPSUserWidget_ServerListItem : UUserWidget {
	FDelegate OnSelectEvent; // 0x300
	FDelegate OnDblClickedEvent; // 0x310
	FDelegate OnAddFavoriteEvent; // 0x320
};

struct UAISense_Hearing : UAISense {
	TArray<FAINoiseEvent> NoiseEvents; // 0x80
	float SpeedOfSoundSq; // 0x90
};

struct AShootingRangeTarget01_C : ASFPSShootingRangeTarget {
	UStaticMeshComponent* MeshClear; // 0x2f0
	UStaticMeshComponent* MeshDamageServer; // 0x2f8
	UStaticMeshComponent* MeshDamageClient; // 0x300
	UStaticMeshComponent* MeshTarget; // 0x308
	UTextRenderComponent* InfoText; // 0x310
	UStaticMeshComponent* Mesh; // 0x318
};

struct ASFPSCommonGameState : AGameState {
	FSFPSGameplayEventInfoArray GameplayEventInfos; // 0x290
	float Debug_ServerDeltaT; // 0x3a8
	UCurveFloat* TimeDilationCurve; // 0x3b0
	float TimeOfDay; // 0x3b8
	float TimeOfDayUndilated; // 0x3bc
	float TimeOfDayReplicated; // 0x3c0
	float DayLengthInSeconds; // 0x3cc
	float GameplayDayStart; // 0x3d0
	float GameplayDayEnd; // 0x3d4
};

struct UDatasmithCommonTessellationOptions : UDatasmithOptionsBase {
	FDatasmithTessellationOptions Options; // 0x28
};

struct UMaterialExpressionTangentOutput : UMaterialExpressionCustomOutput {
	FExpressionInput Input; // 0x40
};

struct UAnimNotify_PlaySound : UAnimNotify {
	USoundBase* Sound; // 0x38
	float VolumeMultiplier; // 0x40
	float PitchMultiplier; // 0x44
	char bFollow : 1; // 0x48
	FName AttachName; // 0x4c
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

struct ASFPSBaseCharacter : ACharacter {
	float Accuracy; // 0x5b0
	AActor* GreenArea; // 0x5b8
	FSFPSCharacterObstacleAnimations ObatacleAnimations; // 0x788
	FSFPSCharacterStairAnimations StairAnimations; // 0x8f0
	USFPSCharacterMovementComponent* MovementComponent; // 0x910
	FSFPSMetabolismParams MetabolismParams; // 0x918
	float StopSprintAngle; // 0x924
	ESFPSCharacterDefaultMeshesType DefaultMeshType; // 0x938
	ESFPSCharacterPantsType PantsType; // 0x939
	ESFPSCharacterPose Pose; // 0x93a
	bool PoseChanging; // 0x93c
	FSFPSCharacterCapsuleHalfHeightChangeTimes CharacterCapsuleHalfHeightChangeTimes; // 0x940
	bool bIsDying; // 0x960
	bool bBusy; // 0x9d0
	USFPSACBaseInventory* ACInventory; // 0x9d8
	ESFPSCharacterTeleportState TeleportState; // 0x9e0
	uint16_t ShotRandomParamsIndex; // 0x9e2
	FVector JumpOverObstacleAction; // 0x9ec
	bool bCanJumpOverObstacle; // 0x9f8
	ESFPSJumpOverObstacleState JumpOverObstacleState; // 0x9f9
	UCurveFloat* JumpDuckCurve; // 0xa00
	UCurveFloat* JumpDuckCoeff; // 0xa08
	FVector JumpOverWindowAction; // 0xa10
	FName StairActorName; // 0xa40
	AActor* Car; // 0xa60
	AActor* LastDriverCar; // 0xa68
	USFPSACSoundSystem* SoundSystem; // 0xa78
	FSFPSCharacterSpeeds CharacterSpeeds; // 0xa88
	bool IsOnStair; // 0xade
	bool IsSprint; // 0xadf
	bool IsWalk; // 0xae0
	float Pitch; // 0xae4
	bool bAiming; // 0xb20
	float WeaponBarrier; // 0xb2c
	TArray<UAnimMontage*> MotionList; // 0xb50
	FGenericTeamId TeamID; // 0xb60
	float TLRP_Angle; // 0xb80
	float TLRP_Speed_StartMove; // 0xb84
	float TLRP_Speed_MaxAngle; // 0xb88
	float TLRP_Speed_Timer; // 0xb8c
	float TLRP_Time; // 0xb90
	float TLRP_Delay_Max; // 0xb94
	float TLRP_Delay_Speed; // 0xb98
};

struct USoundSubmixWithParentBase : USoundSubmixBase {
	USoundSubmixBase* ParentSubmix; // 0x38
};

struct UMatineeCameraShake : UCameraShakeBase {
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

struct UTireConfig : UDataAsset {
	float FrictionScale; // 0x30
	TArray<FTireConfigMaterialFriction> TireFrictionScales; // 0x38
};

struct UNetAnalyticsAggregatorConfig : UObject {
	TArray<FNetAnalyticsDataConfig> NetAnalyticsData; // 0x28
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

struct UActorChannel : UChannel {
	AActor* Actor; // 0x68
	TArray<UObject*> CreateSubObjects; // 0x158
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

struct UParticleModuleOrbit : UParticleModuleOrbitBase {
	EOrbitChainMode ChainMode; // 0x38
	FRawDistributionVector OffsetAmount; // 0x40
	FOrbitOptions OffsetOptions; // 0x88
	FRawDistributionVector RotationAmount; // 0x90
	FOrbitOptions RotationOptions; // 0xd8
	FRawDistributionVector RotationRateAmount; // 0xe0
	FOrbitOptions RotationRateOptions; // 0x128
};

struct UMovieSceneByteSection : UMovieSceneSection {
	FMovieSceneByteChannel ByteCurve; // 0xf0
};

struct ABM_WallTriaLow_02_C : At_LocationCraftActor_C {
	USFPSACBaseCollision* SFPSACBaseCollision; // 0x358
	USFPSACSnapComponent* SFPSACSnap; // 0x360
};

struct Aweapon_firearms_smg_bizon_C : At_FireArm_C {
	UStaticMeshComponent* DTK; // 0x7e0
	UStaticMeshComponent* DeviceLeftMount; // 0x7e8
	UStaticMeshComponent* SightClose; // 0x7f0
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x7f8
	UStaticMeshComponent* MagazineFull; // 0x800
	UStaticMeshComponent* MagazineEmpty; // 0x808
};

struct UVectorField : UObject {
	FBox Bounds; // 0x28
	float Intensity; // 0x44
};

struct UABP_weapon_firearms_sg_m4_C : USFPSWeaponAnimInstance_SG {
	FPointerToUberGraphFrame UberGraphFrame; // 0x310
	FAnimNode_Root AnimGraphNode_Root; // 0x318
	FAnimNode_Slot AnimGraphNode_Slot; // 0x348
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x390
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3e0
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x460
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x490
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x510
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x540
};

struct UMaterialParameterCollection : UObject {
	FGuid StateId; // 0x28
	TArray<FCollectionScalarParameter> ScalarParameters; // 0x38
	TArray<FCollectionVectorParameter> VectorParameters; // 0x48
};

struct USceneCaptureComponent2D : USceneCaptureComponent {
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

struct UShootCrossfadeOuterParams : UObject {
	FDistanceDatum NearShoot; // 0x28
	FDistanceDatum FarShoot; // 0x3c
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

struct UMaterialExpressionReflectionCapturePassSwitch : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput Reflection; // 0x54
};

struct UParticleModuleLocationPrimitiveTriangle : UParticleModuleLocationBase {
	FRawDistributionVector StartOffset; // 0x30
	FRawDistributionFloat Height; // 0x78
	FRawDistributionFloat Angle; // 0xa8
	FRawDistributionFloat Thickness; // 0xd8
};

struct UfrmAllSettingsComboboxes_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UButton* btnMain; // 0x270
	UTextBlock* lbtext; // 0x278
	UComboBoxString* FParentCombobox; // 0x280
	FString FComboboxString; // 0x288
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

struct USFPSAI_TGenerateRandomPoint : UBTTaskNode {
	bool bUseCharacterValue; // 0x70
	float WanderRadius; // 0x74
	bool bCenteredInFront; // 0x78
};

struct AGeometryCacheActor : AActor {
	UGeometryCacheComponent* GeometryCacheComponent; // 0x220
};

struct UGeometryCollectionDebugDrawComponent : UActorComponent {
	AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0xb0
	AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0xb8
};

struct ALevelSequenceMediaController : AActor {
	ALevelSequenceActor* Sequence; // 0x228
	UMediaComponent* MediaComponent; // 0x230
	float ServerStartTimeSeconds; // 0x238
};

struct AExponentialHeightFog : AInfo {
	UExponentialHeightFogComponent* Component; // 0x220
	char bEnabled : 1; // 0x228
};

struct AStair_tower_wood_01_C : AActor {
	UArrowComponent* Step4; // 0x220
	UArrowComponent* Step8; // 0x228
	UArrowComponent* Step7; // 0x230
	UArrowComponent* Step6; // 0x238
	UArrowComponent* Step5; // 0x240
	UArrowComponent* TopPoint; // 0x248
	UArrowComponent* BottomPoint; // 0x250
	UStaticMeshComponent* Mesh; // 0x258
	UArrowComponent* Step3; // 0x260
	UArrowComponent* Step2; // 0x268
	UArrowComponent* Step1; // 0x270
	UArrowComponent* Step0; // 0x278
	USFPSACStair* SFPSACStair; // 0x280
	UBoxComponent* Overlap; // 0x288
};

struct UDcxVehicleTire : UDataAsset {
	float LateralStiffnessX; // 0x34
	float LateralStiffnessY; // 0x38
	float LongitudinalStiffnessPerUnitGravity; // 0x3c
	float CamberStiffnessPerUnitGravity; // 0x40
	FRuntimeFloatCurve FrictionVsSlipGraph; // 0x48
	TArray<FDcxDrivableSurfaceToTireFrictionPair> DrivableSurfaceToTireFrictionPairs; // 0xd0
};

struct ASFPSInventoryDeviceItem : ASFPSBaseItem {
	int32_t ID; // 0x310
	FVector Coords; // 0x314
	int64_t Time; // 0x320
};

struct UAIPerceptionComponent : UActorComponent {
	TArray<UAISenseConfig*> SensesConfig; // 0xb0
	UAISense* DominantSense; // 0xc0
	AAIController* AIOwner; // 0xd8
	FMulticastInlineDelegate OnPerceptionUpdated; // 0x160
	FMulticastInlineDelegate OnTargetPerceptionUpdated; // 0x170
	FMulticastInlineDelegate OnTargetPerceptionInfoUpdated; // 0x180
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

struct AMainMenuGameMode_C : AGameMode {
	USceneComponent* DefaultSceneRoot; // 0x308
};

struct UParticleModuleLocationPrimitiveCylinder_Seeded : UParticleModuleLocationPrimitiveCylinder {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x120
};

struct UModularSynthPresetBank : UObject {
	TArray<FModularSynthPresetBankEntry> Presets; // 0x28
};

struct URandomVector : UFieldNodeVector {
	float Magnitude; // 0xb0
};

struct UParticleModuleLocationWorldOffset_Seeded : UParticleModuleLocationWorldOffset {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct UWorldComposition : UObject {
	TArray<ULevelStreaming*> TilesStreaming; // 0x48
	double TilesStreamingTimeThreshold; // 0x58
	bool bLoadAllTilesDuringCinematic; // 0x60
	bool bRebaseOriginIn3DSpace; // 0x61
	float RebaseOriginDistance; // 0x64
};

struct UInterpTrackInstColorProp : UInterpTrackInstProperty {
	FColor ResetColor; // 0x58
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

struct APhysicsVolume : AVolume {
	float TerminalVelocity; // 0x258
	int32_t Priority; // 0x25c
	float FluidFriction; // 0x260
	char bWaterVolume : 1; // 0x264
	char bPhysicsOnContact : 1; // 0x264
};

struct USFPSACVehicleSoundSystem : UActorComponent {
	USoundCue* EngineCue; // 0xb0
	USoundCue* SuspensCue; // 0xb8
	USoundCue* ExtraStopCue; // 0xc0
	USoundCue* HandBrakeCue; // 0xc8
	USoundCue* CrashCue; // 0xd0
	USoundCue* DoorCue; // 0xd8
	USoundCue* BaseTiresCue; // 0xe0
	USoundCue* UnderwaterTires; // 0xe8
	USoundCue* CarDamageExplCue; // 0xf0
	USoundCue* CarHornCue; // 0xf8
	UDcxVehicleDriveComponent* OwnerVehicleComp; // 0x100
	float fEngineActive; // 0x108
	UAudioComponent* EngineAudioComponent; // 0x110
	UAudioComponent* DamageAudioComponent; // 0x118
	UAudioComponent* RoadTiresAudioComponent; // 0x120
	UAudioComponent* SuspensAudioComponent; // 0x128
	UAudioComponent* StopAudioComponent; // 0x130
	UAudioComponent* HornAudioComponent; // 0x138
	TWeakObjectPtr<UParticleSystemComponent> TiresParticleComponent; // 0x140
	TWeakObjectPtr<UParticleSystemComponent> DamageParticleComponent; // 0x148
	TWeakObjectPtr<UParticleSystemComponent> ExhaustPipeParticleComponent; // 0x150
	USoundCue* tPhysMatSound; // 0x158
	float LastSusp; // 0x160
	float CurDepth; // 0x164
	float LastRPM; // 0x178
	bool bIsPressed; // 0x17c
	bool bIsStopping; // 0x17d
	FVector LastCarLocation; // 0x180
	FRotator LastCarRotation; // 0x18c
	float LastForwSpeed; // 0x198
	bool bIsInAir; // 0x19c
	bool bIsLanded; // 0x19d
	bool bIsInWater; // 0x19e
	float HornPitch; // 0x1a0
	FComponentPos ComponentPositions; // 0x1a4
	bool bInited; // 0x1f8
	bool bEngineAct; // 0x1f9
	bool bUnderwaterIsActive; // 0x1fa
	float IncRPMSpeed; // 0x1fc
	float DecRPMSpeed; // 0x200
	float MinAngleToBrakes; // 0x204
	float MinForwSpeedToBrakes; // 0x208
	float MinDetentToBrakes; // 0x20c
	float MinRPMToBrakes; // 0x210
	float HeightPlay; // 0x214
	float ZShiftUp; // 0x218
	float ZShiftDown; // 0x21c
	float FlyTraceDistance; // 0x220
	float TireFadeTime; // 0x224
	float ActorMaxForwSpeed; // 0x228
	float MinDifRotToAbruptStop; // 0x22c
	float MinDifSpeedToAbruptStop; // 0x230
	UParticleSystem* LightBumpParticle; // 0x238
	UParticleSystem* ExhaustParticle; // 0x240
	UParticleSystem* LowWaterTiresParticle; // 0x248
	UParticleSystem* DeepWaterTiresParticle; // 0x250
	float WaterDeepDistance; // 0x258
	UParticleSystem* LightDamageParticle; // 0x260
	UParticleSystem* HeavyDamageParticle; // 0x268
	UParticleSystem* VehicleDestroyedParticle; // 0x270
	UParticleSystem* VehicleExplosionParticle; // 0x278
	float LightDamageStart; // 0x280
	float HeavyDamageStart; // 0x284
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

struct UEditableGameplayTagQueryExpression_AllTagsMatch : UEditableGameplayTagQueryExpression {
	FGameplayTagContainer Tags; // 0x28
};

struct ACableActor : AActor {
	UCableComponent* CableComponent; // 0x220
};

struct UfrmFilterCombobox_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UButton* btnFitlter; // 0x270
	UTextBlock* lbtext; // 0x278
	FString FComboboxString; // 0x280
	UComboBoxString* FParentCombobox; // 0x290
};

struct UTexture2D : UTexture {
	int32_t LevelIndex; // 0x178
	int32_t FirstResourceMemMip; // 0x17c
	char bTemporarilyDisableStreaming : 1; // 0x180
	TextureAddress AddressX; // 0x181
	TextureAddress AddressY; // 0x182
	FIntPoint ImportedSize; // 0x184
};

struct UARMeshComponent : UARComponent {
	FARMeshUpdatePayload ReplicatedPayload; // 0x280
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

struct UToFloatField : UFieldNodeFloat {
	UFieldNodeInt* IntField; // 0xb0
};

struct UInterpTrackEvent : UInterpTrack {
	TArray<FEventTrackKey> EventTrack; // 0x70
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	char bFireEventsWhenJumpingForwards : 1; // 0x80
	char bUseCustomEventName : 1; // 0x80
};

struct UOnsetNRTSettings : UAudioSynesthesiaNRTSettings {
	bool bDownmixToMono; // 0x28
	float GranularityInSeconds; // 0x2c
	float Sensitivity; // 0x30
	float MinimumFrequency; // 0x34
	float MaximumFrequency; // 0x38
};

struct Aweapmf_flashlight_02_C : At_HandguardDeviceLeft_C {
	UStaticMeshComponent* Glow; // 0x358
	USpotLightComponent* Light; // 0x360
};

struct UBlackboardKeyType_Enum : UBlackboardKeyType {
	UEnum* EnumType; // 0x30
	FString EnumName; // 0x38
	char bIsEnumNameValid : 1; // 0x48
};

struct UHorizontalBoxSlot : UPanelSlot {
	FMargin Padding; // 0x40
	FSlateChildSize Size; // 0x50
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
};

struct Aweapmf_DTK_762x39_02_C : At_MuzzleAttachement_C {
	USceneComponent* Muzzle; // 0x390
};

struct UMaterialExpressionSkyAtmosphereLightDirection : UMaterialExpression {
	int32_t LightIndex; // 0x40
};

struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	TArray<FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x318
	char bIsLayerThumbnail : 1; // 0x328
	char bDisableTessellation : 1; // 0x328
	char bMobile : 1; // 0x328
	char bEditorToolUsage : 1; // 0x328
};

struct UWidgetNavigation : UObject {
	FWidgetNavigationData Up; // 0x28
	FWidgetNavigationData Down; // 0x4c
	FWidgetNavigationData Left; // 0x70
	FWidgetNavigationData Right; // 0x94
	FWidgetNavigationData Next; // 0xb8
	FWidgetNavigationData Previous; // 0xdc
};

struct ADecalActor : AActor {
	UDecalComponent* Decal; // 0x220
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

struct UParticleModuleLocationEmitter : UParticleModuleLocationBase {
	FName EmitterName; // 0x30
	ELocationEmitterSelectionMethod SelectionMethod; // 0x38
	char InheritSourceVelocity : 1; // 0x3c
	float InheritSourceVelocityScale; // 0x40
	char bInheritSourceRotation : 1; // 0x44
	float InheritSourceRotationScale; // 0x48
};

struct UTextureRenderTarget2DArray : UTextureRenderTarget {
	int32_t SizeX; // 0x180
	int32_t SizeY; // 0x184
	int32_t Slices; // 0x188
	FLinearColor ClearColor; // 0x18c
	EPixelFormat OverrideFormat; // 0x19c
	char bHDR : 1; // 0x19d
	char bForceLinearGamma : 1; // 0x19d
};

struct USFPSAI_TChangeAiming : UBTTaskNode {
	bool Aiming; // 0x70
};

struct UGeometryCollection : UObject {
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

struct UGameplayTagsSettings : UGameplayTagsList {
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

struct UGeometryCacheTrack : UObject {
	float Duration; // 0x28
};

struct UfrmSpriteViewInv_C : USFPSUserWidget_SpriteViewInv {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
	UButton* btnMain; // 0x2f0
	USFPSUserWidget_EquipItem* pnMain; // 0x2f8
};

struct UDcxVehicleDriveRawInput : UDcxVehicleWheelsRawInput {
	int32_t ClutchIndex; // 0x40
	bool bGearUp; // 0x44
	bool bGearDown; // 0x45
};

struct USubmixEffectReverbPreset : USoundEffectSubmixPreset {
	FSubmixEffectReverbSettings Settings; // 0xd0
};

struct UFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UCloudStorageBase : UPlatformInterfaceBase {
	TArray<FString> LocalCloudFiles; // 0x38
	char bSuppressDelegateCalls : 1; // 0x48
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

struct UMovieSceneCameraShakeSourceShakeSection : UMovieSceneSection {
	FMovieSceneCameraShakeSectionData ShakeData; // 0xe8
};

struct ULevelSequenceDirector : UObject {
	ULevelSequencePlayer* Player; // 0x28
	int32_t SubSequenceID; // 0x30
	int32_t MovieScenePlayerIndex; // 0x34
};

struct UFormAdmin_C : UUserWidget {
	UButton* Base_btnCopyPlayer; // 0x268
	UButton* Base_btnDelBase; // 0x270
	UButton* Base_btnDelBoxes; // 0x278
	UButton* Base_btnKeyChance; // 0x280
	UButton* Base_btnSteamProfile; // 0x288
	UButton* Base_btnStromTime; // 0x290
	UCheckBox* btnBase; // 0x298
	UCheckBox* btnBattlePVEOnly; // 0x2a0
	UCheckBox* btnBattlePVPPVE; // 0x2a8
	UButton* btnBuyServer; // 0x2b0
	UCheckBox* btnCameraFPS; // 0x2b8
	UCheckBox* btnCameraFPSTPS; // 0x2c0
	UCheckBox* btnCameraTPS; // 0x2c8
	UCheckBox* btnDeathLog; // 0x2d0
	UCheckBox* btnGameplay; // 0x2d8
	UCheckBox* btnItems; // 0x2e0
	UCheckBox* btnMessages; // 0x2e8
	UCheckBox* btnPlayers; // 0x2f0
	UCheckBox* btnServer; // 0x2f8
	UButton* btnServer_Teleport0; // 0x300
	UButton* btnServer_Teleport1; // 0x308
	UButton* btnServer_Teleport2; // 0x310
	UButton* btnServer_Teleport3; // 0x318
	UButton* btnServer_Teleport4; // 0x320
	UButton* btnServer_TeleportDead; // 0x328
	UCheckBox* btnVACNo; // 0x330
	UCheckBox* btnVACYes; // 0x338
	UButton* DeathLog_btnCopy; // 0x340
	UButton* DeathLog_btnDownload; // 0x348
	UfrmAdminPanelDeathRecord_C* frmAdminPanelDeathRecord; // 0x350
	UfrmAdminPanelDeathRecord_C* frmAdminPanelDeathRecord_125; // 0x358
	UImage* Gameplay_Background_2; // 0x360
	UImage* Gameplay_BackLine_2; // 0x368
	UImage* Gameplay_BackLine_3; // 0x370
	UImage* Gameplay_BackLine_4; // 0x378
	UImage* Gameplay_BackLine_5; // 0x380
	UImage* Gameplay_BackLine_6; // 0x388
	UImage* Gameplay_BackLine_7; // 0x390
	UImage* Gameplay_BackLine_8; // 0x398
	UImage* Gameplay_BackLine_9; // 0x3a0
	UButton* Gameplay_btnApplyAISettings; // 0x3a8
	UButton* Gameplay_btnApplyEventsSettings; // 0x3b0
	UCheckBox* Gameplay_btnDynamicTimeScaleOff; // 0x3b8
	UCheckBox* Gameplay_btnDynamicTimeScaleOn; // 0x3c0
	UCheckBox* Gameplay_btnPatrolOff; // 0x3c8
	UCheckBox* Gameplay_btnPatrolOn; // 0x3d0
	UImage* imgButtonsBackground; // 0x3d8
	UButton* Messages_btnMsgTimer; // 0x3e0
	UButton* Messages_btnSaveMOTD; // 0x3e8
	UButton* Messages_btnSaveMsg; // 0x3f0
	UButton* Messages_btnSendMOTD; // 0x3f8
	UButton* Messages_btnSendMsg; // 0x400
	UMultiLineEditableTextBox* Messages_mMOTD; // 0x408
	UMultiLineEditableTextBox* Messages_mMsg; // 0x410
	UButton* Players_btnAddToAdmins; // 0x418
	UButton* Players_btnBan; // 0x420
	UButton* Players_btnCopyBanned; // 0x428
	UButton* Players_btnCopyPlayer; // 0x430
	UButton* Players_btnDelFromAdmins; // 0x438
	UButton* Players_btnHandBan; // 0x440
	UButton* Players_btnSteamProfile; // 0x448
	UButton* Players_btnSteamProfileAdmins; // 0x450
	UButton* Players_btnSteamProfileBanned; // 0x458
	UButton* Players_btnSteamProfileHandBan; // 0x460
	UButton* Players_btnUnban; // 0x468
	UButton* Server_btnAdminSlotReserv; // 0x470
	UButton* Server_btnGameTime; // 0x478
	UButton* Server_btnInactiveBaseLifeTime; // 0x480
	UButton* Server_btnLootSpawnChance; // 0x488
	UButton* Server_btnPassword; // 0x490
	UButton* Server_btnPlayersMaxCount; // 0x498
	UCheckBox* Server_btnRestart0; // 0x4a0
	UCheckBox* Server_btnRestart1; // 0x4a8
	UCheckBox* Server_btnRestart10; // 0x4b0
	UCheckBox* Server_btnRestart11; // 0x4b8
	UCheckBox* Server_btnRestart12; // 0x4c0
	UCheckBox* Server_btnRestart13; // 0x4c8
	UCheckBox* Server_btnRestart14; // 0x4d0
	UCheckBox* Server_btnRestart15; // 0x4d8
	UCheckBox* Server_btnRestart16; // 0x4e0
	UCheckBox* Server_btnRestart17; // 0x4e8
	UCheckBox* Server_btnRestart18; // 0x4f0
	UCheckBox* Server_btnRestart19; // 0x4f8
	UCheckBox* Server_btnRestart2; // 0x500
	UCheckBox* Server_btnRestart20; // 0x508
	UCheckBox* Server_btnRestart21; // 0x510
	UCheckBox* Server_btnRestart22; // 0x518
	UCheckBox* Server_btnRestart23; // 0x520
	UCheckBox* Server_btnRestart3; // 0x528
	UCheckBox* Server_btnRestart4; // 0x530
	UCheckBox* Server_btnRestart5; // 0x538
	UCheckBox* Server_btnRestart6; // 0x540
	UCheckBox* Server_btnRestart7; // 0x548
	UCheckBox* Server_btnRestart8; // 0x550
	UCheckBox* Server_btnRestart9; // 0x558
	UButton* Server_btnSquadSize; // 0x560
};

struct USFPSAI_TDebug : UBTTaskNode {
	FString Text; // 0x70
};

struct UOverlaySlot : UPanelSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct UControlPointMeshComponent : UStaticMeshComponent {
	float VirtualTextureMainPassMaxDrawDistance; // 0x4e0
};

struct UAnimCompress_RemoveEverySecondKey : UAnimCompress {
	int32_t MinKeys; // 0x40
	char bStartAtSecondKey : 1; // 0x44
};

struct UParticleModuleVelocity_Seeded : UParticleModuleVelocity {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xb0
};

struct UAREnvironmentProbeComponent : UARComponent {
	FAREnvironmentProbeUpdatePayload ReplicatedPayload; // 0x280
};

struct Adevice_flashlight_02_C : At_Device_C {
	UStaticMeshComponent* Glow; // 0x4a0
	USpotLightComponent* Light; // 0x4a8
};

struct UMovieSceneComponentMaterialTrack : UMovieSceneMaterialTrack {
	int32_t MaterialIndex; // 0xa8
};

struct USFPSACInventory : USFPSACBaseInventory {
	TArray<ASFPSBaseItem*> CraftItems; // 0x170
	TArray<ASFPSBaseItem*> Cell0; // 0x180
	TArray<ASFPSBaseItem*> Cell1; // 0x190
	TArray<bool> CellLoaded; // 0x1a0
	FDelegate Server_MoveToSteamInventory_Callback; // 0x1e0
	FDelegate Server_MoveToInventory_FromSteamInventory_Callback; // 0x1f0
	FDelegate Server_MoveToEquip_FromSteamInventory_Callback; // 0x200
	FDelegate Server_MoveToWeaponMFInventory_FromSteamInventory_Callback; // 0x210
	FDelegate Server_MoveToGround_FromSteamInventory_Callback; // 0x220
};

struct UARPointComponent : UARComponent {
	FARPointUpdatePayload ReplicatedPayload; // 0x278
};

struct AScope_col_halosun_C : At_Sight_C {
	UStaticMeshComponent* deltapoint_collimator; // 0x3d0
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

struct Aweapon_firearms_gun_tt_C : At_FireArm_C {
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x7e0
	UStaticMeshComponent* MagazineFull; // 0x7e8
	UStaticMeshComponent* MagazineEmpty; // 0x7f0
};

struct UMaterialExpressionHairColor : UMaterialExpression {
	FExpressionInput Melanin; // 0x40
	FExpressionInput Redness; // 0x54
	FExpressionInput DyeColor; // 0x68
};

struct UThrobber : UWidget {
	int32_t NumberOfPieces; // 0x108
	bool bAnimateHorizontally; // 0x10c
	bool bAnimateVertically; // 0x10d
	bool bAnimateOpacity; // 0x10e
	USlateBrushAsset* PieceImage; // 0x110
	FSlateBrush Image; // 0x118
};

struct UPlatformMediaSource : UMediaSource {
	UMediaSource* MediaSource; // 0x80
};

struct UMaterialExpressionSobol : UMaterialExpression {
	FExpressionInput Cell; // 0x40
	FExpressionInput Index; // 0x54
	FExpressionInput Seed; // 0x68
	uint32_t ConstIndex; // 0x7c
	FVector2D ConstSeed; // 0x80
};

struct UTextureRenderTargetCube : UTextureRenderTarget {
	int32_t SizeX; // 0x180
	FLinearColor ClearColor; // 0x184
	EPixelFormat OverrideFormat; // 0x194
	char bHDR : 1; // 0x195
	char bForceLinearGamma : 1; // 0x195
};

struct ASFPSWeaponMF_MuzzleAttachment : ASFPSBaseWeaponMF {
	UParticleSystem* ShotParticle; // 0x330
	ESFPSSmallArmsMuzzleAttachmentType MuzzleAttachmentType; // 0x338
	FTransform SocketMuzzle; // 0x340
	float Length; // 0x370
	float RecoilMul; // 0x374
};

struct UARFaceGeometry : UARTrackedGeometry {
	FVector LookAtTarget; // 0xf8
	bool bIsTracked; // 0x104
	TMap<EARFaceBlendShape, float> BlendShapes; // 0x108
	FTransform LeftEyeTransform; // 0x190
	FTransform RightEyeTransform; // 0x1c0
};

struct ASkyAtmosphere : AInfo {
	USkyAtmosphereComponent* SkyAtmosphereComponent; // 0x220
};

struct USoundNodeWaveParam : USoundNode {
	FName WaveParameterName; // 0x48
};

struct UNavLinkDefinition : UObject {
	TArray<FNavigationLink> Links; // 0x28
	TArray<FNavigationSegmentLink> SegmentLinks; // 0x38
};

struct UfrmPopupMenu_C : UUserWidget {
	UImage* imgBackgroun1; // 0x268
	UImage* imgBackgroun2; // 0x270
	UImage* imgBackgroun3; // 0x278
	UImage* imgBackgroun4; // 0x280
	UImage* imgBackgroun5; // 0x288
	UImage* imgBackgroun6; // 0x290
	UImage* imgBackgroun7; // 0x298
	UImage* imgBackgroun8; // 0x2a0
	UCanvasPanel* pnBackground; // 0x2a8
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

struct UInterpTrackMoveAxis : UInterpTrackFloatBase {
	EInterpMoveAxis MoveAxis; // 0x90
	FInterpLookupTrack LookupTrack; // 0x98
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

struct USpectatorPawnMovement : UFloatingPawnMovement {
	char bIgnoreTimeDilation : 1; // 0x150
};

struct USFPSCameraShake : UMatineeCameraShake {
	float FirstPersonScale; // 0x1b0
	float ThirdPersonScale; // 0x1b4
};

struct UNavigationSystemModuleConfig : UNavigationSystemConfig {
	char bStrictlyStatic : 1; // 0x50
	char bCreateOnClient : 1; // 0x50
	char bAutoSpawnMissingNavData : 1; // 0x50
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x50
};

struct UInterpTrackInstMove : UInterpTrackInst {
	FVector ResetLocation; // 0x28
	FRotator ResetRotation; // 0x34
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

struct UNamedInterfaces : UObject {
	TArray<FNamedInterface> NamedInterfaces; // 0x28
	TArray<FNamedInterfaceDef> NamedInterfaceDefs; // 0x38
};

struct USFPSMapHandler : UObject {
	bool bVisible; // 0x248
	UUserWidget* FormMap; // 0x250
	USFPSUserWidget_MapElement* MapElement_Player; // 0x258
	USFPSUserWidget_MapElement* MapElement_Mission; // 0x260
	USFPSUserWidget_MapElement* MapElement_SaveScaleMission; // 0x268
	USFPSUserWidget_MapElement* MapElement_AllPlayersMarker; // 0x270
	USFPSUserWidget_MapElement* MapElement_AllBasesMarker; // 0x278
	USFPSUserWidget_MapElement* MapElement_AllBotsMarker; // 0x280
	USFPSUserWidget_MapElement* MapElement_TacticalMarker; // 0x288
	USFPSUserWidget_MapElement* MapElement_DeadMarker; // 0x290
	USFPSUserWidget_MapElement* MapElement_LootStash; // 0x298
	USFPSUserWidget_MapElement* MapElement_GreenArea; // 0x2a0
	USFPSUserWidget_MapElement* MapElement_RedArea; // 0x2a8
	USFPSUserWidget_MapElement* MapElement_Base; // 0x2b0
	USFPSUserWidget_MapElement* MapElement_Location; // 0x2b8
	USFPSUserWidget_MapElement* MapElement_SquadMarker; // 0x2c0
	USFPSUserWidget_MapElement* MapElement_TripwireTrap; // 0x2c8
	TArray<USFPSTacticalMarker*> TacticalMarkers; // 0x2d0
	USFPSTacticalMarker* DeadMarker; // 0x2e0
	TArray<USFPSLootStashMarker*> LootStashMarkers; // 0x2e8
	TArray<USFPSMissionMarker*> MissionMarkers; // 0x2f8
	TArray<USFPSSaveScaleMissionMarker*> SaveScaleMissionMarkers; // 0x308
	TArray<USFPSAllPlayersMarker*> AllPlayersMarkers; // 0x318
	TArray<USFPSAllBasesMarker*> AllBasesMarkers; // 0x328
	TArray<USFPSAllBotsMarker*> AllBotsMarkers; // 0x338
	TArray<USFPSGreenAreaMarker*> GreeenAreaMarkers; // 0x348
	TArray<USFPSBaseMarker*> BaseMarkers; // 0x358
	TArray<USFPSLocationMarker*> LocalitiesMarkers; // 0x368
	TArray<USFPSSquadMarker*> SquadMarkers; // 0x378
	TArray<USFPSTripwireTrapMarker*> TripwireTrapMarkers; // 0x388
};

struct USFPSUserWidget_RadialMenu : UUserWidget {
	int32_t SelectedIndex; // 0x270
};

struct ASFPSGameplayItem : ASFPSBaseItem {
	ESFPSGameplayEventInfoType ClientInfoType; // 0x310
	TArray<FSFPSItemSetStruct> LootSets; // 0x350
};

struct UWheeledVehicleMovementComponent4W : UWheeledVehicleMovementComponent {
	FVehicleEngineData EngineSetup; // 0x290
	FVehicleDifferential4WData DifferentialSetup; // 0x330
	float AckermannAccuracy; // 0x34c
	FVehicleTransmissionData TransmissionSetup; // 0x350
	FRuntimeFloatCurve SteeringCurve; // 0x380
};

struct UGizmoLocalFloatParameterSource : UGizmoBaseFloatParameterSource {
	float Value; // 0x48
	FGizmoFloatParameterChange LastChange; // 0x4c
};

struct UMaterialExpressionSaturate : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct AWheeledVehicle : APawn {
	USkeletalMeshComponent* Mesh; // 0x280
	UWheeledVehicleMovementComponent* VehicleMovement; // 0x288
};

struct UParticleModuleParameterDynamic_Seeded : UParticleModuleParameterDynamic {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x48
};

struct ULocalPlayer : UPlayer {
	UGameViewportClient* ViewportClient; // 0x70
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x94
	APlayerController* PendingLevelPlayerControllerClass; // 0x98
	char bSentSplitJoin : 1; // 0xa0
	int32_t ControllerId; // 0xb8
};

struct UInterpTrackInstProperty : UInterpTrackInst {
	TFieldPath<FProperty> InterpProperty; // 0x28
	UObject* PropertyOuterObjectInst; // 0x48
};

struct UMovieScene3DConstraintSection : UMovieSceneSection {
	FGuid ConstraintId; // 0xe8
	FMovieSceneObjectBindingID ConstraintBindingID; // 0xf8
};

struct UTestMovieSceneEvalHookTrack : UMovieSceneTrack {
	TArray<UMovieSceneSection*> SectionArray; // 0x90
};

struct ASFPSLootBoxSpawner : ASFPSBaseLootSpawner {
	ASFPSLootBox* LootBox; // 0x248
	ASFPSLootBox* LootBoxClass; // 0x270
	TArray<FSFPSItemSetStruct> ItemsToSpawn; // 0x278
};

struct UGizmoLocalVec2ParameterSource : UGizmoBaseVec2ParameterSource {
	FVector2D Value; // 0x48
	FGizmoVec2ParameterChange LastChange; // 0x50
};

struct UEnvQueryTest_Overlap : UEnvQueryTest {
	FEnvOverlapData OverlapData; // 0x1f8
};

struct UMediaTexture : UTexture {
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

struct AShell_SR0_C : ASFPSShell {
	UStaticMeshComponent* Mesh; // 0x250
};

struct UAssetMappingTable : UObject {
	TArray<FAssetMapping> MappedAssets; // 0x28
};

struct UMaterialExpressionTangent : UMaterialExpression {
	FExpressionInput Input; // 0x40
	float Period; // 0x54
};

struct USubmixEffectTapDelayPreset : USoundEffectSubmixPreset {
	FSubmixEffectTapDelaySettings Settings; // 0xa8
};

struct UBTDecorator_Cooldown : UBTDecorator {
	float CooldownTime; // 0x68
};

struct UCompositeCameraShakePattern : UCameraShakePattern {
	TArray<UCameraShakePattern*> ChildPatterns; // 0x28
};

struct Adevice_lighter_02_C : At_Device_C {
	UStaticMeshComponent* Flame; // 0x4a0
	UPointLightComponent* PointLight; // 0x4a8
};

struct USFPSUserWidget_HUDChatBox : UUserWidget {
	int32_t LabelsCount; // 0x2dc
	FSlateFontInfo Font; // 0x2e0
	float ViewportScale; // 0x338
};

struct UMaterialExpressionArccosine : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UARTextureCameraDepth : UARTexture {
	EARDepthQuality DepthQuality; // 0x198
	EARDepthAccuracy DepthAccuracy; // 0x199
	bool bIsTemporallySmoothed; // 0x19a
};

struct UMovieScenePropertyTrack : UMovieSceneNameableTrack {
	UMovieSceneSection* SectionToKey; // 0x90
	FMovieScenePropertyBinding PropertyBinding; // 0x98
	TArray<UMovieSceneSection*> Sections; // 0xb0
};

struct ASceneCaptureCube : ASceneCapture {
	USceneCaptureComponentCube* CaptureComponentCube; // 0x230
};

struct ABM_Stairs_01_C : At_LocationCraftActor_C {
	USFPSACBaseCollision* SFPSACBaseCollision; // 0x358
	USFPSACSnapComponent* SFPSACSnap; // 0x360
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

struct UAnimNotifyState_TimedParticleEffect : UAnimNotifyState {
	UParticleSystem* PSTemplate; // 0x30
	FName SocketName; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	bool bDestroyAtEnd; // 0x58
};

struct UMaterialExpressionClearCoatNormalCustomOutput : UMaterialExpressionCustomOutput {
	FExpressionInput Input; // 0x40
};

struct UGetGeoLocationAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct Aweapmf_DTK_dot45_01_C : At_MuzzleAttachement_C {
	USceneComponent* Muzzle; // 0x390
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

struct UMaterialExpressionQualitySwitch : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput Inputs[0x4]; // 0x54
};

struct UBTService_BlueprintBase : UBTService {
	AAIController* AIOwner; // 0x70
	AActor* ActorOwner; // 0x78
	char bShowPropertyDetails : 1; // 0x90
	char bShowEventDetails : 1; // 0x90
};

struct UMaterialExpressionBlackBody : UMaterialExpression {
	FExpressionInput Temp; // 0x40
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
	FPerPlatformInt MaxSkinBones; // 0xf0
	EMobilePlanarReflectionMode MobilePlanarReflectionMode; // 0xf4
	char bMobileSupportsGen4TAA : 1; // 0xf8
	FPerPlatformBool bStreamSkeletalMeshLODs; // 0xfc
	FPerPlatformBool bDiscardSkeletalMeshOptionalLODs; // 0xfd
	FSoftObjectPath VisualizeCalibrationColorMaterialPath; // 0x100
	FSoftObjectPath VisualizeCalibrationCustomMaterialPath; // 0x118
	FSoftObjectPath VisualizeCalibrationGrayscaleMaterialPath; // 0x130
};

struct ASFPSAmbientSound : AAmbientSound {
	bool bAmbRegistered; // 0x228
	bool bBaseNoise; // 0x229
	bool bRainNoise; // 0x22a
	bool bThisIsBusSend; // 0x22b
	bool bIgnoreRoom; // 0x22c
	bool bUnderwaterNoise; // 0x22d
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

struct UParticleModuleSize : UParticleModuleSizeBase {
	FRawDistributionVector StartSize; // 0x30
};

struct UMovieSceneSpawnTrack : UMovieSceneTrack {
	TArray<UMovieSceneSection*> Sections; // 0x90
	FGuid ObjectGuid; // 0xa0
};

struct USoundBase : UObject {
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

struct ASFPSRoute : AActor {
	USFPSACRoute* Root; // 0x220
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

struct USFPSSaver : UObject {
	TArray<FSFPSSaverCache> CharacterCache; // 0x98
	TArray<FSFPSSaverCache> Storages0Cache; // 0xa8
	TArray<FSFPSSaverCache> Storages1Cache; // 0xb8
	TArray<FString> DeathLog; // 0xc8
};

struct UDistributionFloat : UDistribution {
	char bCanBeBaked : 1; // 0x30
	char bBakedDataSuccesfully : 1; // 0x30
};

struct UParticleModuleEventReceiverKillParticles : UParticleModuleEventReceiverBase {
	char bStopSpawning : 1; // 0x40
};

struct UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput {
	TArray<FGrassInput> GrassTypes; // 0x40
};

struct ASFPSRecoveryItem : ASFPSHandheldItem {
	float Health[0x2]; // 0x3f0
	float Food[0x2]; // 0x3f8
	float Water[0x2]; // 0x400
	bool bZeroSlowFoodAndWater; // 0x408
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

struct UTireType : UDataAsset {
	float FrictionScale; // 0x30
};

struct AProceduralFoliageBlockingVolume : AVolume {
	AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x258
};

struct AAmbientSound : AActor {
	UAudioComponent* AudioComponent; // 0x220
};

struct UDeviceProfile : UTextureLODSettings {
	FString DeviceType; // 0x38
	FString BaseProfileName; // 0x48
	UObject* Parent; // 0x58
	TArray<FString> CVars; // 0x88
};

struct USFPSUserWidget_TraderItem : UUserWidget {
	ASFPSBaseItem* ItemClass; // 0x268
	int32_t ActorGroupItemIndex; // 0x274
	int32_t ActorLibraryItemIndex; // 0x278
	FDelegate OnBuyEvent; // 0x2d0
	FDelegate OnCreateEvent; // 0x2e0
	FDelegate OnAddToStarterKitEvent; // 0x2f0
	FDelegate OnDeleteFromStarterKitEvent; // 0x300
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

struct USynthComponentMoto : USynthComponent {
	UMotoSynthPreset* MotoSynthPreset; // 0x6c0
	float RPM; // 0x6c8
};

struct USFPSServerListHandler : UObject {
	TArray<FSFPSServerInfo> UnSortedFilteredServerList; // 0x188
	TArray<FSFPSServerInfo> tmpUnSortedFilteredServerList; // 0x198
	TArray<FSFPSServerInfo> SortedFilteredServerList; // 0x1a8
	FSFPSServerInfo SelectedServerInfo; // 0x1b8
	FDelegate VaRestCallback0; // 0x264
	FDelegate VaRestCallback1; // 0x274
	FDelegate VaRestCallback2; // 0x284
	FDelegate VaRestCallback3; // 0x294
	FDelegate VaRestCallback4; // 0x2a4
	UUserWidget* FormServerList; // 0x420
	USFPSUserWidget_ServerListItem* frmServerListItem; // 0x428
	TArray<FSFPSServerInfo> ServerList; // 0x430
};

struct UBTTaskNode : UBTNode {
	TArray<UBTService*> Services; // 0x58
	char bIgnoreRestartSelf : 1; // 0x68
};

struct UInterpTrackInstLinearColorProp : UInterpTrackInstProperty {
	FLinearColor ResetColor; // 0x58
};

struct UEditableGameplayTagQueryExpression_AnyTagsMatch : UEditableGameplayTagQueryExpression {
	FGameplayTagContainer Tags; // 0x28
};

struct USoundNodeBranch : USoundNode {
	FName BoolParameterName; // 0x48
};

struct USpectatorBeaconState : UObject {
	FName SessionName; // 0x28
	int32_t NumConsumedReservations; // 0x30
	int32_t MaxReservations; // 0x34
	bool bRestrictCrossConsole; // 0x38
	TArray<FSpectatorReservation> Reservations; // 0x40
};

struct UMaterialExpressionCrossProduct : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UMaterialExpressionDistance : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
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

struct UMovieSceneVectorTrack : UMovieScenePropertyTrack {
	int32_t NumChannelsUsed; // 0xc0
};

struct USFPSAICharacterSet : UObject {
	TArray<ASFPSAICharacter*> Characters; // 0x28
};

struct UFoliageInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent {
	FMulticastInlineDelegate OnInstanceTakePointDamage; // 0x678
	FMulticastInlineDelegate OnInstanceTakeRadialDamage; // 0x688
	FGuid GenerationGuid; // 0x698
};

struct UfrmSpriteViewEquip_C : USFPSUserWidget_SpriteViewInv {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
	UButton* btnMain; // 0x2f0
	USFPSUserWidget_EquipItem* pnMain; // 0x2f8
};

struct UMaterialExpressionStaticSwitch : UMaterialExpression {
	char DefaultValue : 1; // 0x40
	FExpressionInput A; // 0x44
	FExpressionInput B; // 0x58
	FExpressionInput Value; // 0x6c
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

struct UAIDataProvider_QueryParams : UAIDataProvider {
	FName ParamName; // 0x28
	float FloatValue; // 0x30
	int32_t IntValue; // 0x34
	bool BoolValue; // 0x38
};

struct USFPSACWeaponMFInventory : UActorComponent {
	TArray<ESFPSWeaponMFType> AvailableMFTypes; // 0xb0
	TArray<ASFPSBaseWeaponMF*> AvailableMFItems; // 0xc0
	TArray<AActor*> FInventory; // 0xd0
};

struct USFPSAI_TSetSightResolution : UBTTaskNode {
	float Resolution; // 0x70
};

struct UMovieSceneEasingExternalCurve : UObject {
	UCurveFloat* Curve; // 0x30
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

struct UEndMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct ULogoutCallbackProxy : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct ASFPSLocality : AActor {
	USFPSACLocality* LocalityComponent; // 0x220
};

struct UMaterialExpressionFeatureLevelSwitch : UMaterialExpression {
	FExpressionInput Default; // 0x40
};

struct UCheckBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FCheckBoxStyle CheckBoxStyle; // 0x30
};

struct UMovieSceneParticleParameterTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x98
};

struct UARComponent : USceneComponent {
	FGuid NativeID; // 0x1f8
	bool bUseDefaultReplication; // 0x238
	UMaterialInterface* DefaultMeshMaterial; // 0x240
	UMaterialInterface* DefaultWireframeMeshMaterial; // 0x248
	UMRMeshComponent* MRMeshComponent; // 0x250
	UARTrackedGeometry* MyTrackedGeometry; // 0x258
};

struct Aweapon_firearms_sg_m4_C : At_FireArm_C {
	UStaticMeshComponent* DeviceLeftMount; // 0x7e0
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x7e8
	UStaticMeshComponent* Shell; // 0x7f0
};

struct USFPSUserWidget_QuickSlot : UUserWidget {
	bool bAvailable; // 0x2c0
};

struct UMaterialExpressionBentNormalCustomOutput : UMaterialExpressionCustomOutput {
	FExpressionInput Input; // 0x40
};

struct UMaterialExpressionSceneTexture : UMaterialExpression {
	FExpressionInput Coordinates; // 0x40
	ESceneTextureId SceneTextureId; // 0x54
	bool bFiltered; // 0x55
};

struct UPathFollowingComponent : UActorComponent {
	UNavMovementComponent* MovementComp; // 0xe8
	ANavigationData* MyNavData; // 0xf8
};

struct UPhysicalAnimationComponent : UActorComponent {
	float StrengthMultiplyer; // 0xb0
	USkeletalMeshComponent* SkeletalMeshComponent; // 0xb8
};

struct UParticleModuleAccelerationDrag : UParticleModuleAccelerationBase {
	UDistributionFloat* DragCoefficient; // 0x38
	FRawDistributionFloat DragCoefficientRaw; // 0x40
};

struct UFontImportOptions : UObject {
	FFontImportOptionsData Data; // 0x28
};

struct UMainGameInstance_C : USFPSGameInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x8d0
};

struct USubmixEffectDynamicsProcessorPreset : USoundEffectSubmixPreset {
	FSubmixEffectDynamicsProcessorSettings Settings; // 0xf0
};

struct UParticleModuleMeshRotation : UParticleModuleRotationBase {
	FRawDistributionVector StartRotation; // 0x30
	char bInheritParent : 1; // 0x78
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

struct ALevelVariantSetsActor : AActor {
	FSoftObjectPath LevelVariantSets; // 0x220
	TMap<UObject*, ULevelVariantSetsFunctionDirector*> DirectorInstances; // 0x238
};

struct Arecoveryitem_medikit_sterilizedrag_C : At_RecoveryItem_C {
	float Timer; // 0x420
};

struct UPawnAction_Sequence : UPawnAction {
	TArray<UPawnAction*> ActionSequence; // 0x90
	EPawnActionFailHandling ChildFailureHandlingMode; // 0xa0
	UPawnAction* RecentActionCopy; // 0xa8
};

struct ALightmassPortal : AActor {
	ULightmassPortalComponent* PortalComponent; // 0x220
};

struct UMovieSceneWidgetMaterialTrack : UMovieSceneMaterialTrack {
	TArray<FName> BrushPropertyNamePath; // 0xa8
	FName TrackName; // 0xb8
};

struct UHierarchicalInstancedStaticMeshComponent : UInstancedStaticMeshComponent {
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

struct UChaosSolverSettings : UDeveloperSettings {
	FSoftClassPath DefaultChaosSolverActorClass; // 0x40
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

struct UParticleModuleAccelerationOverLifetime : UParticleModuleAccelerationBase {
	FRawDistributionVector AccelOverLife; // 0x38
};

struct AM_RadioTrap_01_C : At_LocationCraftActor_C {
	UBoxComponent* GrenadeCollision; // 0x358
	USFPSACTripwireTrap* ACTripwireTrap; // 0x360
	USFPSACBaseCollision* SFPSACBaseCollision1; // 0x368
};

struct UMaterialExpressionDotProduct : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UABP_weapon_firearms_sg_mossberg590_C : USFPSWeaponAnimInstance_SG {
	FPointerToUberGraphFrame UberGraphFrame; // 0x310
	FAnimNode_Root AnimGraphNode_Root; // 0x318
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x348
	FAnimNode_Slot AnimGraphNode_Slot; // 0x3c8
};

struct ULandscapeComponent : UPrimitiveComponent {
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

struct UMovieSceneCompiledDataManager : UObject {
	TMap<int32_t, FMovieSceneSequenceHierarchy> Hierarchies; // 0xd8
	TMap<int32_t, FMovieSceneEvaluationTemplate> TrackTemplates; // 0x128
	TMap<int32_t, FMovieSceneEvaluationField> TrackTemplateFields; // 0x178
	TMap<int32_t, FMovieSceneEntityComponentField> EntityComponentFields; // 0x1c8
};

struct APrecomputedVisibilityOverrideVolume : AVolume {
	TArray<AActor*> OverrideVisibleActors; // 0x258
	TArray<AActor*> OverrideInvisibleActors; // 0x268
	TArray<FName> OverrideInvisibleLevels; // 0x278
};

struct UEnvQuery : UDataAsset {
	FName QueryName; // 0x30
	TArray<UEnvQueryOption*> Options; // 0x38
};

struct UParticleModuleSize_Seeded : UParticleModuleSize {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x78
};

struct UBoxFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb0
	float MinRange; // 0xb4
	float MaxRange; // 0xb8
	float Default; // 0xbc
	FTransform Transform; // 0xc0
	EFieldFalloffType Falloff; // 0xf0
};

struct Aweapmf_DTK_556x45_01_C : At_MuzzleAttachement_C {
	USceneComponent* Muzzle; // 0x390
};

struct UMaterialExpressionBumpOffset : UMaterialExpression {
	FExpressionInput Coordinate; // 0x40
	FExpressionInput Height; // 0x54
	FExpressionInput HeightRatioInput; // 0x68
	float HeightRatio; // 0x7c
	float ReferencePlane; // 0x80
	uint32_t ConstCoordinate; // 0x84
};

struct UImageSequenceProtocol_EXR : UImageSequenceProtocol {
	bool bCompressed; // 0xd8
	EHDRCaptureGamut CaptureGamut; // 0xd9
};

struct UAssetManager : UObject {
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

struct UPhononProbeComponent : USceneComponent {
	TArray<FVector> ProbeLocations; // 0x1f8
};

struct UBTDecorator_TimeLimit : UBTDecorator {
	float TimeLimit; // 0x68
};

struct UMaterialExpressionSamplePhysicsIntegerField : UMaterialExpression {
	FExpressionInput WorldPosition; // 0x40
	EFieldIntegerType FieldTarget; // 0x54
};

struct ARuntimeVirtualTextureVolume : AActor {
	URuntimeVirtualTextureComponent* VirtualTextureComponent; // 0x220
};

struct UMovieScene3DPathSection : UMovieScene3DConstraintSection {
	FMovieSceneFloatChannel TimingCurve; // 0x110
	MovieScene3DPathSection_Axis FrontAxisEnum; // 0x1b0
	MovieScene3DPathSection_Axis UpAxisEnum; // 0x1b1
	char bFollow : 1; // 0x1b4
	char bReverse : 1; // 0x1b4
	char bForceUpright : 1; // 0x1b4
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

struct UARFaceComponent : UARComponent {
	EARFaceTransformMixing TransformSetting; // 0x278
	bool bUpdateVertexNormal; // 0x279
	bool bFaceOutOfScreen; // 0x27a
	FARFaceUpdatePayload ReplicatedPayload; // 0x280
};

struct Aweapmf_silencer_762x39_01_C : At_MuzzleAttachement_C {
	USceneComponent* Muzzle; // 0x390
};

struct USimpleConstructionScript : UObject {
	TArray<USCS_Node*> RootNodes; // 0x28
	TArray<USCS_Node*> AllNodes; // 0x38
	USCS_Node* DefaultSceneRootNode; // 0x48
};

struct UMaterialExpressionStep : UMaterialExpression {
	FExpressionInput Y; // 0x40
	FExpressionInput X; // 0x54
	float ConstY; // 0x68
	float ConstX; // 0x6c
};

struct USFPSItemSetStructSet : UObject {
	TArray<FSFPSItemSetStruct> ItemSetStructs; // 0x28
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

struct UBTService_BlackboardBase : UBTService {
	FBlackboardKeySelector BlackboardKey; // 0x70
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

struct USoundNodeModulator : USoundNode {
	float PitchMin; // 0x48
	float PitchMax; // 0x4c
	float VolumeMin; // 0x50
	float VolumeMax; // 0x54
};

struct UJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x220
	bool bLockOrientationToRail; // 0x224
	USceneComponent* TransformComponent; // 0x228
	USplineComponent* RailSplineComponent; // 0x230
	USceneComponent* RailCameraMount; // 0x238
};

struct USkinnedMeshComponent : UMeshComponent {
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

struct USFPSACStair : UActorComponent {
	TArray<UArrowComponent*> Steps; // 0xc8
	bool bBusy; // 0xd8
	USFPSPhysicalMaterial* StairPhysicalMaterial; // 0xe0
};

struct UCrowdFollowingComponent : UPathFollowingComponent {
	FVector CrowdAgentMoveDirection; // 0x268
};

struct UParticleModuleAccelerationBase : UParticleModule {
	char bAlwaysInWorldSpace : 1; // 0x30
};

struct UGameplayTagsList : UObject {
	FString ConfigFileName; // 0x28
	TArray<FGameplayTagTableRow> GameplayTagList; // 0x38
};

struct UNavCollision : UNavCollisionBase {
	TArray<FNavCollisionCylinder> CylinderCollision; // 0x80
	TArray<FNavCollisionBox> BoxCollision; // 0x90
	UNavArea* AreaClass; // 0xa0
	char bGatherConvexGeometry : 1; // 0xa8
	char bCreateOnClient : 1; // 0xa8
};

struct UMaterialExpressionParticleSubUV : UMaterialExpressionTextureSample {
	char bBlend : 1; // 0x60
};

struct UParticleModulePivotOffset : UParticleModuleLocationBase {
	FVector2D PivotOffset; // 0x30
};

struct UAISenseConfig_Blueprint : UAISenseConfig {
	UAISense_Blueprint* Implementation; // 0x48
};

struct UEditableMesh : UObject {
	TArray<UEditableMeshAdapter*> Adapters; // 0x3b8
	int32_t TextureCoordinateCount; // 0x3d0
	int32_t PendingCompactCounter; // 0x51c
	int32_t SubdivisionCount; // 0x520
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

struct UCullingField : UFieldNodeBase {
	UFieldNodeBase* Culling; // 0xb0
	UFieldNodeBase* Field; // 0xb8
	EFieldCullingOperationType Operation; // 0xc0
};

struct UDatasmithSceneComponentTemplate : UDatasmithObjectTemplate {
	FTransform RelativeTransform; // 0x30
	EComponentMobility Mobility; // 0x60
	TSoftObjectPtr<USceneComponent> AttachParent; // 0x68
	bool bVisible; // 0x90
	TSet<FName> Tags; // 0x98
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

struct UParticleModuleLocation : UParticleModuleLocationBase {
	FRawDistributionVector StartLocation; // 0x30
	float DistributeOverNPoints; // 0x78
	float DistributeThreshold; // 0x7c
};

struct USFPSUserWidget_CraftRollout : UUserWidget {
	FDelegate OnBeginCraftEvent; // 0x2e8
};

struct Aweapon_firearms_sg_mp43_C : At_FireArm_C {
	UStaticMeshComponent* DeviceLeftMount; // 0x7e0
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x7e8
	UStaticMeshComponent* RightShell; // 0x7f0
	UStaticMeshComponent* LeftShellEmpty; // 0x7f8
	UStaticMeshComponent* RightShellEmpty; // 0x800
	UStaticMeshComponent* LeftShell; // 0x808
};

struct UBookMark : UBookmarkBase {
	FVector Location; // 0x28
	FRotator Rotation; // 0x34
	TArray<FString> HiddenLevels; // 0x40
};

struct UWindDirectionalSourceComponent : USceneComponent {
	float Strength; // 0x1f8
	float Speed; // 0x1fc
	float MinGustAmount; // 0x200
	float MaxGustAmount; // 0x204
	float Radius; // 0x208
	char bPointWind : 1; // 0x20c
};

struct UARObjectComponent : UARComponent {
	FARObjectUpdatePayload ReplicatedPayload; // 0x280
};

struct UMovieSceneHookSection : UMovieSceneSection {
	char bRequiresRangedHook : 1; // 0xf8
	char bRequiresTriggerHooks : 1; // 0xf8
};

struct USFPSAnimEvent_WC_ChangingFlag : UAnimNotify {
	bool bWeaponChanging; // 0x38
	bool bForCursor; // 0x39
};

struct UDcxVehicleWheelsComponent : UPawnMovementComponent {
	float ChassisMass; // 0x140
	FVector InertiaTensorScale; // 0x144
	FDcxVehicleTireLoadFilterData TireLoadFilter; // 0x150
	bool bUseAvoidance; // 0x160
	float AvoidanceWeight; // 0x164
	int32_t AvoidanceUID; // 0x168
	FNavAvoidanceMask AvoidanceGroup; // 0x16c
	FNavAvoidanceMask GroupsToAvoid; // 0x170
	FNavAvoidanceMask GroupsToIgnore; // 0x174
	TArray<FDcxVehicleWheelConfiguration> WheelConfigurations; // 0x178
	float ThresholdLongitudinalSpeed; // 0x188
	int32_t LowForwardSpeedSubStepCount; // 0x18c
	int32_t HighForwardSpeedSubStepCount; // 0x190
	float DragCoefficient; // 0x194
	float DragArea; // 0x198
	FDcxVehicleDriveInputRate ThrottleRate; // 0x19c
	FDcxVehicleDriveInputRate BrakeRate; // 0x1a4
	FDcxVehicleDriveInputRate HandbrakeRate; // 0x1ac
	FDcxVehicleDriveInputRate SteerRate; // 0x1b4
	float AvoidanceRadius; // 0x1bc
	float AvoidanceHeight; // 0x1c0
	float AvoidanceConsiderationRadius; // 0x1c4
	float AvoidanceThrottleStep; // 0x1c8
	float AvoidanceBrakeStep; // 0x1cc
	float AvoidanceSteerStep; // 0x1d0
	bool bRecreateRequired; // 0x1d4
	UDcxVehicleWheelsRawInput* RawInput; // 0x1d8
	TArray<float> SmoothAnalogControls; // 0x1e0
	FDcxVehicleDriveState ReplicatedState; // 0x1f0
	bool bWasAvoidanceUpdated; // 0x208
	FVector AvoidanceVelocity; // 0x20c
	FVector AvoidanceLockVelocity; // 0x218
	float AvoidanceLockTimer; // 0x224
};

struct UAnimSharingTransitionInstance : UAnimInstance {
	TWeakObjectPtr<USkeletalMeshComponent> FromComponent; // 0x2b8
	TWeakObjectPtr<USkeletalMeshComponent> ToComponent; // 0x2c0
	float BlendTime; // 0x2c8
	bool bBlendBool; // 0x2cc
};

struct Ascope_opt_mosin_C : At_Sight_C {
	UStaticMeshComponent* cod_4x_reticles; // 0x3d0
};

struct Aweapon_firearms_gun_pm_C : At_FireArm_C {
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x7e0
	UStaticMeshComponent* MagazineFull; // 0x7e8
	UStaticMeshComponent* MagazineEmpty; // 0x7f0
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

struct UInterpTrackVectorMaterialParam : UInterpTrackVectorBase {
	TArray<UMaterialInterface*> TargetMaterials; // 0x90
	FName ParamName; // 0xa0
};

struct USFPSAnimInstance : UAnimInstance {
	ASFPSBaseCharacter* Character; // 0x2b8
	bool bAnimIsDying; // 0x2c0
	bool bAnimIsDyingInWater; // 0x2c1
	bool bAnimInverseKinematicsDisabled; // 0x2c2
	float AnimLegsYawDelta; // 0x2c4
	float AnimLegsYawDeltaSign; // 0x2c8
	bool AnimLegsRotating; // 0x2cc
	float AnimPitch; // 0x2d0
	float AnimRoll; // 0x2d4
	float AnimSpeed; // 0x2d8
	float AnimSpeedZ; // 0x2dc
	float AnimJumpDuck; // 0x2e0
	float AnimSpeedScale; // 0x2e4
	float AnimDirectionForward; // 0x2e8
	float AnimDirectionRight; // 0x2ec
	float AnimAccelerationForward; // 0x2f0
	float AnimAccelerationRight; // 0x2f4
	float AnimFatigue; // 0x2f8
	float AnimBreath; // 0x2fc
	float AnimWeaponInertiaYaw; // 0x300
	float AnimWeaponInertiaPitch; // 0x304
	float AnimWeaponBarrier; // 0x308
	float AnimWeaponRollbackForward; // 0x30c
	float AnimWeaponRollbackRight; // 0x310
	ESFPSItemAnimTypes AnimWeaponAnimType; // 0x314
	bool AnimIsJumping; // 0x315
	bool AnimJumpEvent; // 0x316
	ESFPSCharacterPose AnimPose; // 0x317
	bool AnimPoseChanging; // 0x318
	bool AnimIsAiming; // 0x319
	bool AnimIsTeleporting; // 0x31a
	bool AnimIsOnStair; // 0x31b
	bool AnimSwimming; // 0x31c
	ESFPSCharacterMovingType AnimMovingType; // 0x31d
	float AnimDamageImpactEffectHead; // 0x320
	float AnimDamageImpactEffectTop; // 0x324
	float AnimDamageImpactEffectBottom; // 0x328
	float AnimDamageImpactEffectLeft; // 0x32c
	float AnimDamageImpactEffectRight; // 0x330
	float AnimStairPosition; // 0x334
	ASFPSHandheldItem* AnimWeaponChange_NewItem; // 0x338
	ASFPSHandheldItem* AnimWeaponChange_OldItem; // 0x340
	int32_t AnimWeaponChange_NewSlot; // 0x348
	int32_t AnimWeaponChange_OldSlot; // 0x34c
	bool AnimWeaponChange_SkipStartAnim; // 0x350
	FName AnimWeaponChange_OldSocket; // 0x354
	FName AnimWeaponChange_NewSocket; // 0x35c
	bool AnimWeaponChange_bHideOldItem; // 0x364
	ASFPSSmallArms* AnimReload_Weapon; // 0x368
	int32_t AnimReload_AmmoCount; // 0x370
	int32_t AnimReload_LoopCount; // 0x374
	int32_t AnimReload_LoopCounter; // 0x378
	bool AnimReload_BreakActive; // 0x37c
	ASFPSAmmo* AnimReload_AmmoClass; // 0x380
	UAnimMontage* AnimReload_Montage; // 0x388
	TWeakObjectPtr<ASFPSHandheldItem> AnimHandheldItemUse_Item; // 0x390
	UAnimMontage* AnimHandheldItemUse_Montage; // 0x398
	bool AnimHandheldItemUse_Break; // 0x3a0
	float AnimHandheldItemUse_Time; // 0x3a4
	bool AnimHandheldItemUsed; // 0x3a8
	bool AnimHandheldItemEnabled; // 0x3a9
	float WheelsSteerAngle; // 0x3ac
};

struct ALevelStreamingVolume : AVolume {
	TArray<FName> StreamingLevelNames; // 0x258
	char bEditorPreVisOnly : 1; // 0x268
	char bDisabled : 1; // 0x268
	EStreamingVolumeUsage StreamingUsage; // 0x26c
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

struct ABM_WallTria_02_C : At_LocationCraftActor_C {
	USFPSACBaseCollision* SFPSACBaseCollision; // 0x358
	USFPSACSnapComponent* SFPSACSnap; // 0x360
};

struct UHapticFeedbackEffect_Curve : UHapticFeedbackEffect_Base {
	FHapticFeedbackDetails_Curve HapticDetails; // 0x28
};

struct UParticleModuleSizeScale : UParticleModuleSizeBase {
	FRawDistributionVector SizeScale; // 0x30
	char EnableX : 1; // 0x78
	char EnableY : 1; // 0x78
	char EnableZ : 1; // 0x78
};

struct UFXSystemAsset : UObject {
	uint32_t MaxPoolSize; // 0x28
	uint32_t PoolPrimeSize; // 0x2c
};

struct UInAppPurchaseQueryCallbackProxy2 : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UChannel : UObject {
	UNetConnection* Connection; // 0x28
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

struct UWidgetAnimationDelegateBinding : UDynamicBlueprintBinding {
	TArray<FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x28
};

struct UTextureLightProfile : UTexture2D {
	float Brightness; // 0x1a0
	float TextureMultiplier; // 0x1a4
};

struct UVideoCaptureProtocol : UFrameGrabberProtocol {
	bool bUseCompression; // 0x68
	float CompressionQuality; // 0x6c
};

struct Ascope_opt_elcan_4x_C : At_Sight_C {
	UStaticMeshComponent* hamr_4x_reticles; // 0x3d0
};

struct AProceduralFoliageVolume : AVolume {
	UProceduralFoliageComponent* ProceduralComponent; // 0x258
};

struct UParticleModuleEventGenerator : UParticleModuleEventBase {
	TArray<FParticleEvent_GenerateInfo> Events; // 0x30
};

struct UInterpTrackBoolProp : UInterpTrack {
	TArray<FBoolTrackKey> BoolTrack; // 0x70
	FName PropertyName; // 0x80
};

struct UParticleModuleRotationRate : UParticleModuleRotationRateBase {
	FRawDistributionFloat StartRotationRate; // 0x30
};

struct UPrimaryAssetLabel : UPrimaryDataAsset {
	FPrimaryAssetRules Rules; // 0x30
	char bLabelAssetsInMyDirectory : 1; // 0x3c
	char bIsRuntimeLabel : 1; // 0x3c
	TArray<TSoftObjectPtr<UObject>> ExplicitAssets; // 0x40
	TArray<TSoftClassPtr<UObject>> ExplicitBlueprints; // 0x50
	FCollectionReference AssetCollection; // 0x60
};

struct UMaterialExpressionMin : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UMaterialExpressionNormalize : UMaterialExpression {
	FExpressionInput VectorInput; // 0x40
};

struct UMovieScene3DTransformSection : UMovieSceneSection {
	FMovieSceneTransformMask TransformMask; // 0xf0
	FMovieSceneFloatChannel Translation[0x3]; // 0xf8
	FMovieSceneFloatChannel Rotation[0x3]; // 0x2d8
	FMovieSceneFloatChannel Scale[0x3]; // 0x4b8
	FMovieSceneFloatChannel ManualWeight; // 0x698
	bool bUseQuaternionInterpolation; // 0x738
};

struct UMaterialExpressionSpriteTextureSampler : UMaterialExpressionTextureSampleParameter2D {
	bool bSampleAdditionalTextures; // 0x80
	int32_t AdditionalSlotIndex; // 0x84
	FText SlotDisplayName; // 0x88
};

struct UARPlaneGeometry : UARTrackedGeometry {
	EARPlaneOrientation Orientation; // 0xf8
	FVector Center; // 0xfc
	FVector Extent; // 0x108
	TArray<FVector> BoundaryPolygon; // 0x118
	UARPlaneGeometry* SubsumedBy; // 0x128
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

struct APaperGroupedSpriteActor : AActor {
	UPaperGroupedSpriteComponent* RenderComponent; // 0x220
};

struct ASFPSHUD : AHUD {
	UMaterialParameterCollection* ParametersCollection; // 0x4f0
	float DamageSplashTime; // 0x4f8
};

struct UCameraModifier_CameraShake : UCameraModifier {
	TArray<FActiveCameraShakeInfo> ActiveShakes; // 0x48
	TMap<UCameraShakeBase*, FPooledCameraShakes> ExpiredPooledShakesMap; // 0x58
	float SplitScreenShakeScale; // 0xa8
};

struct UParticleModuleVelocityInheritParent : UParticleModuleVelocityBase {
	FRawDistributionVector Scale; // 0x38
};

struct UBTDecorator_SetTagCooldown : UBTDecorator {
	FGameplayTag CooldownTag; // 0x68
	float CooldownDuration; // 0x70
	bool bAddToExistingDuration; // 0x74
};

struct UInterpGroupInst : UObject {
	UInterpGroup* group; // 0x28
	AActor* GroupActor; // 0x30
	TArray<UInterpTrackInst*> TrackInst; // 0x38
};

struct UObjectLibrary : UObject {
	UObject* ObjectBaseClass; // 0x28
	bool bHasBlueprintClasses; // 0x30
	TArray<UObject*> Objects; // 0x38
	TArray<TWeakObjectPtr<UObject>> WeakObjects; // 0x48
	bool bUseWeakReferences; // 0x58
	bool bIsFullyLoaded; // 0x59
};

struct USynthComponentToneGenerator : USynthComponent {
	float Frequency; // 0x6c0
	float Volume; // 0x6c4
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

struct UARImageComponent : UARComponent {
	FARImageUpdatePayload ReplicatedPayload; // 0x280
};

struct UInterpTrackAnimControl : UInterpTrackFloatBase {
	FName SlotName; // 0x90
	TArray<FAnimControlTrackKey> AnimSeqs; // 0x98
	char bSkipAnimNotifiers : 1; // 0xa8
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

struct UParticleModuleAccelerationConstant : UParticleModuleAccelerationBase {
	FVector Acceleration; // 0x38
};

struct UVirtualTextureBuilder : UObject {
	UVirtualTexture2D* Texture; // 0x28
	uint64_t BuildHash; // 0x30
};

struct UInterpTrackInstFloatAnimBPParam : UInterpTrackInst {
	UAnimInstance* AnimScriptInstance; // 0x28
	float ResetFloat; // 0x30
};

struct UMaterialExpressionAbs : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct ALODActor : AActor {
	UStaticMeshComponent* StaticMeshComponent; // 0x220
	TMap<FHLODInstancingKey, UInstancedStaticMeshComponent*> InstancedStaticMeshComponents; // 0x228
	UHLODProxy* Proxy; // 0x278
	FName Key; // 0x280
	float LODDrawDistance; // 0x288
	int32_t LODLevel; // 0x28c
	TArray<AActor*> SubActors; // 0x290
	char CachedNumHLODLevels; // 0x2a0
};

struct UBTDecorator_DoesPathExist : UBTDecorator {
	FBlackboardKeySelector BlackboardKeyA; // 0x68
	FBlackboardKeySelector BlackboardKeyB; // 0x90
	char bUseSelf : 1; // 0xb8
	EPathExistanceQueryType PathQueryType; // 0xbc
	UNavigationQueryFilter* FilterClass; // 0xc0
};

struct UInterpTrackFloatAnimBPParam : UInterpTrackFloatBase {
	UObject* AnimBlueprintClass; // 0x90
	UAnimInstance* AnimClass; // 0x98
	FName ParamName; // 0xa0
};

struct UMaterialExpressionVertexInterpolator : UMaterialExpressionCustomOutput {
	FExpressionInput Input; // 0x40
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

struct UAIAsyncTaskBlueprintProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFail; // 0x38
};

struct USFPSAI_TSwitchMoveMode : UBTTaskNode {
	ESFPSAIMoveMode MoveMode; // 0x70
};

struct UDcxVehicleDriveComponent4W : UDcxVehicleDriveComponent {
	FDcxVehicleDifferentialData4W DifferentialData; // 0x3b8
	float AckermannGeometryAccuracy; // 0x3d4
};

struct ABM_WallTriaWindow_01_C : At_LocationCraftActor_C {
	USFPSACBaseCollision* SFPSACBaseCollision; // 0x358
	USFPSACSnapComponent* SFPSACSnap; // 0x360
};

struct UABP_weapon_firearms_gun_fiveseven_C : USFPSWeaponAnimInstance_Gun {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	FAnimNode_Root AnimGraphNode_Root; // 0x2e8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x318
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x360
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x388
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x3b0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x3d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x400
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x428
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x450
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x4d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x500
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x580
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x5b0
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x630
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x660
};

struct UAnimSharingInstance : UObject {
	TArray<AActor*> RegisteredActors; // 0x28
	UAnimationSharingStateProcessor* StateProcessor; // 0x88
	TArray<UAnimSequence*> UsedAnimationSequences; // 0xc8
	UEnum* StateEnum; // 0xe8
	AActor* SharingActor; // 0xf0
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

struct UOperatorField : UFieldNodeBase {
	float Magnitude; // 0xb0
	UFieldNodeBase* RightField; // 0xb8
	UFieldNodeBase* LeftField; // 0xc0
	EFieldOperationType Operation; // 0xc8
};

struct AScope_col_Trijicon_C : At_Sight_C {
	UStaticMeshComponent* deltapoint_collimator; // 0x3d0
};

struct UGizmoBaseComponent : UPrimitiveComponent {
	FLinearColor Color; // 0x450
	float HoverSizeMultiplier; // 0x460
	float PixelHitDistanceThreshold; // 0x464
};

struct AGameState : AGameStateBase {
	FName MatchState; // 0x270
	FName PreviousMatchState; // 0x278
	int32_t ElapsedTime; // 0x280
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

struct UMaterialExpressionLinearInterpolate : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	FExpressionInput Alpha; // 0x68
	float ConstA; // 0x7c
	float ConstB; // 0x80
	float ConstAlpha; // 0x84
};

struct Ascope_col_deltapoint_C : At_Sight_C {
	UStaticMeshComponent* deltapoint_collimator; // 0x3d0
};

struct UDistributionFloatUniformCurve : UDistributionFloat {
	FInterpCurveVector2D ConstantCurve; // 0x38
};

struct USFPSAdminHandler : UObject {
	TArray<FString> CurrentDeathLog; // 0x608
	UUserWidget* FormAdmin; // 0x660
	USFPSUserWidget_AdminPanel_Player* frmPlayer; // 0x668
	USFPSUserWidget_CraftRolloutMan* frmItemsGroup; // 0x670
	USFPSUserWidget_TraderItem* frmItemsPanel; // 0x678
	USFPSUserWidget_AdminPanel_DeathL* frmDeathLog; // 0x680
	USFPSUserWidget_TraderItem* frmStartKitPanel; // 0x688
	bool bVisible; // 0x690
};

struct Arecoveryitem_medikit_bandage_C : At_RecoveryItem_C {
	float Timer; // 0x420
};

struct USourceEffectPhaserPreset : USoundEffectSourcePreset {
	FSourceEffectPhaserSettings Settings; // 0xa0
};

struct USourceEffectMidSideSpreaderPreset : USoundEffectSourcePreset {
	FSourceEffectMidSideSpreaderSettings Settings; // 0x98
};

struct UActorSequence : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x60
	FActorSequenceObjectReferenceMap ObjectReferences; // 0x68
};

struct UBTDecorator_ConeCheck : UBTDecorator {
	float ConeHalfAngle; // 0x68
	FBlackboardKeySelector ConeOrigin; // 0x70
	FBlackboardKeySelector ConeDirection; // 0x98
	FBlackboardKeySelector Observed; // 0xc0
};

struct UAnimationSharingManager : UObject {
	TArray<USkeleton*> Skeletons; // 0x28
	TArray<UAnimSharingInstance*> PerSkeletonData; // 0x38
};

struct USFPSAISenseConfig_Sight : UAISenseConfig_Sight {
	float ResolutionDefault; // 0x74
	float ResolutionDefaultNight; // 0x78
	float ResolutionAggro; // 0x7c
	float ResolutionAggroNight; // 0x80
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

struct UEditableTextBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x30
};

struct USubmixEffectStereoDelayPreset : USoundEffectSubmixPreset {
	FSubmixEffectStereoDelaySettings Settings; // 0xb4
};

struct USFPSSoundTalkSet : UObject {
	TArray<FSFPSTalkSentenceElement> Elements; // 0x28
	UDataTable* DataTable; // 0x38
	TArray<FTalkSetStateTable> TalkSetStateTable; // 0x40
	float fSayDelay; // 0x50
	float fPartingDelay; // 0x54
	float ChanceToSay; // 0x58
};

struct UBTDecorator_CompareBBEntries : UBTDecorator {
	EBlackBoardEntryComparison Operator; // 0x68
	FBlackboardKeySelector BlackboardKeyA; // 0x70
	FBlackboardKeySelector BlackboardKeyB; // 0x98
};

struct URadialIntMask : UFieldNodeInt {
	float Radius; // 0xb0
	FVector Position; // 0xb4
	int32_t InteriorValue; // 0xc0
	int32_t ExteriorValue; // 0xc4
	ESetMaskConditionType SetMaskCondition; // 0xc8
};

struct UVariant : UObject {
	TArray<FVariantDependency> Dependencies; // 0x28
	FText DisplayText; // 0x38
	TArray<UVariantObjectBinding*> ObjectBindings; // 0x68
	UTexture2D* Thumbnail; // 0x78
};

struct USoundNodeParamCrossFade : USoundNodeDistanceCrossFade {
	FName ParamName; // 0x58
};

struct ASFPSBaseWeaponMF : ASFPSBaseItem {
	FSFPSWeaponMFParams MFParams; // 0x310
	ASFPSBaseItem* OwnerWeapon; // 0x318
	USoundCue* DeviceSoundCue; // 0x320
};

struct ALight : AActor {
	ULightComponent* LightComponent; // 0x220
	char bEnabled : 1; // 0x228
};

struct USFPSAdminItemList : UObject {
	TArray<FSFPSAdminItemsGroup> Groups; // 0x28
};

struct UABP_weapon_firearms_rifle_akm_C : USFPSWeaponAnimInstance_AR {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	FAnimNode_Root AnimGraphNode_Root; // 0x2e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x318
	FAnimNode_Slot AnimGraphNode_Slot; // 0x398
};

struct UAnimBoneCompressionSettings : UObject {
	TArray<UAnimBoneCompressionCodec*> Codecs; // 0x28
};

struct UMaterialExpressionFloor : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UMaterialExpressionMultiply : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UParticleModuleRotationRateMultiplyLife : UParticleModuleRotationRateBase {
	FRawDistributionFloat LifeMultiplier; // 0x30
};

struct UAsyncTask_LoadXRDeviceVisComponent : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnModelLoaded; // 0x30
	FMulticastInlineDelegate OnLoadFailure; // 0x40
	UPrimitiveComponent* SpawnedComponent; // 0x58
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

struct UMeshSimplificationSettings : UDeveloperSettings {
	FName MeshReductionModuleName; // 0x38
};

struct USourceEffectBitCrusherPreset : USoundEffectSourcePreset {
	FSourceEffectBitCrusherSettings Settings; // 0xc0
};

struct UParticleModuleSubUV : UParticleModuleSubUVBase {
	USubUVAnimation* Animation; // 0x30
	FRawDistributionFloat SubImageIndex; // 0x38
	char bUseRealTime : 1; // 0x68
};

struct UAsyncActionLoadPrimaryAsset : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UABP_weapon_firearms_rifle_steyraug_C : USFPSWeaponAnimInstance_AR {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	FAnimNode_Root AnimGraphNode_Root; // 0x2e8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x318
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x360
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x388
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3b0
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x430
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x460
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4e0
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x510
};

struct USequenceCameraShakeCameraStandIn : UObject {
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

struct AMagicLeapSharedWorldGameState : AGameState {
	FMagicLeapSharedWorldSharedData SharedWorldData; // 0x290
	FMagicLeapSharedWorldAlignmentTransforms AlignmentTransforms; // 0x2a0
	FMulticastInlineDelegate OnSharedWorldDataUpdated; // 0x2b0
	FMulticastInlineDelegate OnAlignmentTransformsUpdated; // 0x2c0
};

struct UGeometryCacheTrack_FlipbookAnimation : UGeometryCacheTrack {
	uint32_t NumMeshSamples; // 0x58
};

struct UMaterialExpressionCeil : UMaterialExpression {
	FExpressionInput Input; // 0x40
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

struct UDatasmithCineCameraComponentTemplate : UDatasmithObjectTemplate {
	FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings; // 0x30
	FDatasmithCameraLensSettingsTemplate LensSettings; // 0x38
	FDatasmithCameraFocusSettingsTemplate FocusSettings; // 0x3c
	float CurrentFocalLength; // 0x44
	float CurrentAperture; // 0x48
	FDatasmithPostProcessSettingsTemplate PostProcessSettings; // 0x50
};

struct ULandscapeSettings : UDeveloperSettings {
	int32_t MaxNumberOfLayers; // 0x38
};

struct UOnsetNRT : UAudioSynesthesiaNRT {
	UOnsetNRTSettings* Settings; // 0x78
};

struct ASFPSHandheldItem : ASFPSBaseItem {
	TWeakObjectPtr<UAudioComponent> ItemAudioComponent; // 0x310
	bool IsHeld; // 0x328
	bool bUsed; // 0x329
	FName HoldSocketName; // 0x32c
	ESFPSItemAnimTypes AnimType; // 0x334
	float TimeOfUse; // 0x338
	bool bUsedLoopedAnimation; // 0x33c
	ESFPSHandheldItemAttachHand AttachHand; // 0x33d
	UAnimMontage* HideAnimLeft; // 0x340
	UAnimMontage* ShowAnimLeft; // 0x348
	UAnimMontage* HideAnimRight; // 0x350
	UAnimMontage* ShowAnimRight; // 0x358
	UAnimMontage* HideAnimHolster; // 0x360
	UAnimMontage* ShowAnimHolster; // 0x368
	UAnimMontage* ShowAnimHolster_HammerCocking; // 0x370
	UAnimMontage* UseAnim; // 0x378
	UAnimMontage* UseAnimRun; // 0x380
	UAnimMontage* UseAnimCrouch; // 0x388
	UAnimMontage* HideAnimLeftProne; // 0x390
	UAnimMontage* ShowAnimLeftProne; // 0x398
	UAnimMontage* HideAnimRightProne; // 0x3a0
	UAnimMontage* ShowAnimRightProne; // 0x3a8
	UAnimMontage* HideAnimHolsterProne; // 0x3b0
	UAnimMontage* ShowAnimHolsterProne; // 0x3b8
	UAnimMontage* ShowAnimHolsterProne_HammerCocking; // 0x3c0
	UAnimMontage* UseAnimProne; // 0x3c8
	float TurnMomentum_Spring; // 0x3d0
	float TurnMomentum_Damping; // 0x3d4
	ASFPSBaseMissileProjectile* MissileProjectile; // 0x3d8
	USoundCue* UseItemCue; // 0x3e0
	USoundCue* MovementCue; // 0x3e8
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

struct UBodySetupCore : UObject {
	FName BoneName; // 0x28
	EPhysicsType PhysicsType; // 0x30
	ECollisionTraceFlag CollisionTraceFlag; // 0x31
	EBodyCollisionResponse CollisionReponse; // 0x32
};

struct UFormDlg_TimerInf_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UImage* imgBackground; // 0x270
	UImage* imgProrgess; // 0x278
	UMaterialInstanceDynamic* Progress; // 0x280
};

struct UMeshSelectionSet : USelectionSet {
	TArray<int32_t> Vertices; // 0x40
	TArray<int32_t> Edges; // 0x50
	TArray<int32_t> Faces; // 0x60
	TArray<int32_t> Groups; // 0x70
};

struct USFPSAI_TRandomLookAt : UBTTaskNode {
	bool bUseCharacterParams; // 0x70
	ESFPSAI_TRandomLookAtSource Source; // 0x71
	FSFPSAIParamsLookAround Params; // 0x74
	bool bIgnoreLookAroundOrigin; // 0x8c
};

struct UTimeSynchronizableMediaSource : UBaseMediaSource {
	bool bUseTimeSynchronization; // 0x88
	int32_t FrameDelay; // 0x8c
	double TimeDelay; // 0x90
};

struct UGizmoWorldAxisSource : UObject {
	FVector Origin; // 0x30
	int32_t AxisIndex; // 0x3c
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

struct UMaterialInterface : UObject {
	USubsurfaceProfile* SubsurfaceProfile; // 0x38
	FLightmassMaterialInterfaceSettings LightmassSettings; // 0x50
	TArray<FMaterialTextureInfo> TextureStreamingData; // 0x60
	TArray<UAssetUserData*> AssetUserData; // 0x70
};

struct USourceEffectStereoDelayPreset : USoundEffectSourcePreset {
	FSourceEffectStereoDelaySettings Settings; // 0xb4
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

struct UMaterialExpressionMax : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UInterpTrackParticleReplay : UInterpTrack {
	TArray<FParticleReplayTrackKey> TrackKeys; // 0x70
};

struct UInterpTrackLinearColorBase : UInterpTrack {
	FInterpCurveLinearColor LinearColorTrack; // 0x70
	float CurveTension; // 0x88
};

struct Aweapon_firearms_snip_svd_C : At_FireArm_C {
	UStaticMeshComponent* DeviceLeftMount; // 0x7e0
	UStaticMeshComponent* MagazineFull; // 0x7e8
	UStaticMeshComponent* MagazineEmpty; // 0x7f0
	UStaticMeshComponent* SightClose; // 0x7f8
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x800
};

struct UEnvQueryTest_Pathfinding : UEnvQueryTest {
	EEnvTestPathfinding TestMode; // 0x1f8
	UEnvQueryContext* Context; // 0x200
	FAIDataProviderBoolValue PathFromContext; // 0x208
	FAIDataProviderBoolValue SkipUnreachable; // 0x240
	UNavigationQueryFilter* FilterClass; // 0x278
};

struct At_Sight_C : ASFPSWeaponMF_Sight {
	UBoxComponent* Trace; // 0x3c0
	UStaticMeshComponent* Mesh; // 0x3c8
};

struct ULightmassPortalComponent : USceneComponent {
	UBoxComponent* PreviewBox; // 0x1f8
};

struct UMovieSceneTrackInstanceSystem : UMovieSceneEntitySystem {
	UMovieSceneTrackInstanceInstantiator* Instantiator; // 0x40
};

struct UARGetCandidateObjectAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct USFPSACEncounter : USFPSACGameplayEvent {
	TArray<FSFPSEncounterVariant> Variants; // 0x250
	float NoActivateRadius; // 0x264
	int32_t RespawnTimeMin; // 0x268
	int32_t RespawnTimeMax; // 0x26c
	int32_t WaitTime; // 0x270
	int32_t Chance; // 0x274
	bool bExclusive; // 0x278
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

struct USFPSUserWidget_SpriteViewInv : UUserWidget {
	float DblClickTimer; // 0x2e4
};

struct ASFPSMovingAmbientSound : ASFPSAmbientSound {
	float Speed; // 0x230
};

struct UBlackboardKeyType_Object : UBlackboardKeyType {
	UObject* BaseClass; // 0x30
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

struct UMaterialExpressionSceneDepthWithoutWater : UMaterialExpression {
	EMaterialSceneAttributeInputMode InputMode; // 0x40
	FExpressionInput Input; // 0x44
	FVector2D ConstInput; // 0x58
	float FallbackDepth; // 0x60
};

struct UMaterialExpressionTextureSampleParameter : UMaterialExpressionTextureSample {
	FName ParameterName; // 0x60
	FGuid ExpressionGUID; // 0x68
	FName group; // 0x78
};

struct ULocalLightComponent : ULightComponent {
	ELightUnits IntensityUnits; // 0x328
	float Radius; // 0x32c
	float AttenuationRadius; // 0x330
	FLightmassPointLightSettings LightmassSettings; // 0x334
};

struct UComboBox : UWidget {
	TArray<UObject*> Items; // 0x108
	FDelegate OnGenerateWidgetEvent; // 0x118
	bool bIsFocusable; // 0x128
};

struct UMaterialExpressionSphericalParticleOpacity : UMaterialExpression {
	FExpressionInput Density; // 0x40
	float ConstantDensity; // 0x54
};

struct UComponentDelegateBinding : UDynamicBlueprintBinding {
	TArray<FBlueprintComponentDelegateBinding> ComponentDelegateBindings; // 0x28
};

struct ULoudnessNRTSettings : UAudioSynesthesiaNRTSettings {
	float AnalysisPeriod; // 0x28
	float MinimumFrequency; // 0x2c
	float MaximumFrequency; // 0x30
	ELoudnessNRTCurveTypeEnum CurveType; // 0x34
	float NoiseFloorDb; // 0x38
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

struct UFormNDA_C : UUserWidget {
	UButton* btnAccept; // 0x268
};

struct AM_Campfire_02_C : At_LocationCraftActor_C {
	UParticleSystemComponent* ParticleSystem; // 0x358
	UPointLightComponent* BigLight; // 0x360
	UPointLightComponent* RedLight; // 0x368
	USFPSACBaseCollision* SFPSACBaseCollision1; // 0x370
};

struct UGizmoComponentWorldTransformSource : UGizmoBaseTransformSource {
	USceneComponent* Component; // 0x48
	bool bModifyComponentOnTransform; // 0x50
};

struct UMaterialExpressionMapARPassthroughCameraUV : UMaterialExpression {
	FExpressionInput Coordinates; // 0x40
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

struct UGeometryCacheCodecBase : UObject {
	TArray<int32_t> TopologyRanges; // 0x28
};

struct UMaterialExpressionNamedRerouteDeclaration : UMaterialExpressionNamedRerouteBase {
	FExpressionInput Input; // 0x40
	FName Name; // 0x54
	FGuid VariableGuid; // 0x5c
};

struct UParticleModuleLight_Seeded : UParticleModuleLight {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x120
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

struct UGameplayTagsManager : UObject {
	TMap<FName, FGameplayTagSource> TagSources; // 0x160
	TArray<UDataTable*> GameplayTagTables; // 0x230
};

struct UUMGSequencePlayer : UObject {
	UWidgetAnimation* Animation; // 0x260
	FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x270
};

struct UGameInstance : UObject {
	TArray<ULocalPlayer*> LocalPlayers; // 0x38
	UOnlineSession* OnlineSession; // 0x48
	TArray<UObject*> ReferencedObjects; // 0x50
	FMulticastInlineDelegate OnPawnControllerChangedDelegates; // 0x78
};

struct UParticleModuleVelocityOverLifetime : UParticleModuleVelocityBase {
	FRawDistributionVector VelOverLife; // 0x38
	char Absolute : 1; // 0x80
};

struct UMaterialExpressionSkyAtmosphereLightDiskLuminance : UMaterialExpression {
	int32_t LightIndex; // 0x40
};

struct UHapticFeedbackEffect_SoundWave : UHapticFeedbackEffect_Base {
	USoundWave* SoundWave; // 0x28
};

struct ATextRenderActor : AActor {
	UTextRenderComponent* TextRender; // 0x220
};

struct ABM_FloorSmall_01_C : At_LocationCraftActor_C {
	USFPSACBaseCollision* SFPSACBaseCollision; // 0x358
	USFPSACSnapComponent* SFPSACSnap; // 0x360
};

struct UBoxComponent : UShapeComponent {
	FVector BoxExtent; // 0x468
	float LineThickness; // 0x474
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

struct UPaperFlipbook : UObject {
	float FramesPerSecond; // 0x28
	TArray<FPaperFlipbookKeyFrame> KeyFrames; // 0x30
	UMaterialInterface* DefaultMaterial; // 0x40
	EFlipbookCollisionMode CollisionSource; // 0x48
};

struct UOnlineSessionClient : UOnlineSession {
	bool bIsFromInvite; // 0x1c0
	bool bHandlingDisconnect; // 0x1c1
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

struct USFPSSoundBoxCopm : UBoxComponent {
	int32_t NumSound; // 0x478
	float ChancePlay; // 0x47c
	int32_t MaxSCount; // 0x480
};

struct UAISense_Touch : UAISense {
	TArray<FAITouchEvent> RegisteredEvents; // 0x80
};

struct UAREnvironmentCaptureProbeTexture : UTextureCube {
	EARTextureType TextureType; // 0x1d0
	float Timestamp; // 0x1d4
	FGuid ExternalTextureGuid; // 0x1d8
	FVector2D Size; // 0x1e8
};

struct Aweapon_steelarms_axe_02_C : At_SteelArm_C {
	USceneComponent* DamagePoint2; // 0x620
	USceneComponent* DamagePoint1; // 0x628
	USceneComponent* DamagePoint0; // 0x630
};

struct USFPSAI_SSetRandomFocusPoint : UBTService {
	float MaxAngle; // 0x70
};

struct UMaterialExpressionLandscapePhysicalMaterialOutput : UMaterialExpressionCustomOutput {
	TArray<FPhysicalMaterialInput> Inputs; // 0x40
};

struct UTransformProxy : UObject {
	bool bRotatePerObject; // 0x70
	bool bSetPivotMode; // 0x71
	FTransform SharedTransform; // 0x90
	FTransform InitialSharedTransform; // 0xc0
};

struct UEnvQueryTest_Dot : UEnvQueryTest {
	FEnvDirection LineA; // 0x1f8
	FEnvDirection LineB; // 0x218
	EEnvTestDot TestMode; // 0x238
	bool bAbsoluteValue; // 0x239
};

struct UMaterialExpressionSphereMask : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	FExpressionInput Radius; // 0x68
	FExpressionInput Hardness; // 0x7c
	float AttenuationRadius; // 0x90
	float HardnessPercent; // 0x94
};

struct UUserDefinedStruct : UScriptStruct {
	EUserDefinedStructureStatus Status; // 0xc0
	FGuid Guid; // 0xc4
};

struct USFPSACSoundSystem : UActorComponent {
	UAudioComponent* BreathAudioComponent; // 0xb8
	UAudioComponent* HeartAudioComponent; // 0xc0
	TWeakObjectPtr<UAudioComponent> CraftAudioComp; // 0xc8
	UAudioComponent* MobTalkAudioComp; // 0xd0
	UAudioComponent* NoiseAudioComponent; // 0xd8
	UAudioComponent* TinnitusAudioComponent; // 0xe0
	FTimerHandle TimerTalkDelHandle; // 0x100
	bool bUnderwaterIsActive; // 0x108
	bool bDebug; // 0x10a
	bool bDebugTrace; // 0x10b
	USoundCue* CharDieCue; // 0x110
	USoundCue* CharBreathCue; // 0x118
	USoundCue* CharHeartCue; // 0x120
	USoundCue* CharacterRollCue; // 0x128
	USoundCue* CharPainShout; // 0x130
	USoundCue* NoiceCue; // 0x138
	USoundCue* NoiseBreathCue; // 0x140
	USoundCue* CharBackMovCue; // 0x148
	USoundCue* WeaponPressedCue; // 0x150
	bool bUseCertainVoice; // 0x158
	USFPSSoundTalkSet* STS_Voice; // 0x160
	USFPSVoiceList* VoiceList; // 0x168
	int32_t VoiceNumber; // 0x170
	float FallHeight; // 0x1a8
	USFPSPhysicalMaterial* CharacterPM; // 0x1b0
	USoundCue* SwimmingCue; // 0x1c8
	UParticleSystem* SwimmingIdleParticle; // 0x1d0
	UParticleSystem* SwimmingParticle; // 0x1d8
	UParticleSystem* SwimmingFastParticle; // 0x1e0
	USoundCue* UnderwaterStep; // 0x1e8
	UReverbEffect* UnderwaterReverbEffect; // 0x1f0
	UReverbEffect* InVehicleReverbEffect; // 0x1f8
};

struct USourceEffectDynamicsProcessorPreset : USoundEffectSourcePreset {
	FSourceEffectDynamicsProcessorSettings Settings; // 0xb8
};

struct UCompressedImageSequenceProtocol : UImageSequenceProtocol {
	int32_t CompressionQuality; // 0xd8
};

struct UTextRenderComponent : UPrimitiveComponent {
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

struct AControlPointMeshActor : AActor {
	UControlPointMeshComponent* ControlPointMeshComponent; // 0x220
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

struct UActorSequenceComponent : UActorComponent {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0xb0
	UActorSequence* Sequence; // 0xc8
	UActorSequencePlayer* SequencePlayer; // 0xd0
};

struct USubmixEffectDelayPreset : USoundEffectSubmixPreset {
	FSubmixEffectDelaySettings Settings; // 0x9c
	FSubmixEffectDelaySettings DynamicSettings; // 0xa8
};

struct USFPSUserWidget_ChatItem : UUserWidget {
	FSFPSChatItemInfo Info; // 0x298
	FDelegate OnDblClickedEvent; // 0x308
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

struct USubmixEffectConvolutionReverbPreset : USoundEffectSubmixPreset {
	UAudioImpulseResponse* ImpulseResponse; // 0x68
	FSubmixEffectConvolutionReverbSettings Settings; // 0x70
	ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0x98
	bool bEnableHardwareAcceleration; // 0x99
};

struct UAnimNotifyState_Trail : UAnimNotifyState {
	UParticleSystem* PSTemplate; // 0x30
	FName FirstSocketName; // 0x38
	FName SecondSocketName; // 0x40
	ETrailWidthMode WidthScaleMode; // 0x48
	FName WidthScaleCurve; // 0x4c
	char bRecycleSpawnedSystems : 1; // 0x54
};

struct UParticleModuleLocationEmitterDirect : UParticleModuleLocationBase {
	FName EmitterName; // 0x30
};

struct USoundfieldEffectBase : UObject {
	USoundfieldEffectSettingsBase* Settings; // 0x28
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

struct UCineCameraComponent : UCameraComponent {
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

struct UEnvQueryManager : UAISubsystem {
	TArray<FEnvQueryInstanceCache> InstanceCache; // 0xa8
	TArray<UEnvQueryContext*> LocalContexts; // 0xb8
	TArray<UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers; // 0xc8
	float MaxAllowedTestingTime; // 0x12c
	bool bTestQueriesUsingBreadth; // 0x130
	int32_t QueryCountWarningThreshold; // 0x134
	double QueryCountWarningInterval; // 0x138
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

struct UMaterialExpressionArcsine : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UMaterialExpressionTruncate : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct AOnlineBeacon : AActor {
	float BeaconConnectionInitialTimeout; // 0x228
	float BeaconConnectionTimeout; // 0x22c
	UNetDriver* NetDriver; // 0x230
};

struct USystemTimeTimecodeProvider : UTimecodeProvider {
	FFrameRate FrameRate; // 0x30
	bool bGenerateFullFrame; // 0x38
	bool bUseHighPerformanceClock; // 0x39
};

struct ADefaultPawn : APawn {
	float BaseTurnRate; // 0x280
	float BaseLookUpRate; // 0x284
	UPawnMovementComponent* MovementComponent; // 0x288
	USphereComponent* CollisionComponent; // 0x290
	UStaticMeshComponent* MeshComponent; // 0x298
	char bAddDefaultMovementBindings : 1; // 0x2a0
};

struct ASkyLight : AInfo {
	USkyLightComponent* LightComponent; // 0x220
	char bEnabled : 1; // 0x228
};

struct At_Device_C : ASFPSDeviceItem {
	UBoxComponent* Trace; // 0x490
	UStaticMeshComponent* Mesh; // 0x498
};

struct UMaterialExpressionVirtualTextureFeatureSwitch : UMaterialExpression {
	FExpressionInput No; // 0x40
	FExpressionInput Yes; // 0x54
};

struct UDatasmithAssetUserData : UAssetUserData {
	TMap<FName, FString> MetaData; // 0x28
};

struct ASceneCapture : AActor {
	UStaticMeshComponent* MeshComp; // 0x220
	USceneComponent* SceneComponent; // 0x228
};

struct UMorphTarget : UObject {
	USkeletalMesh* BaseSkelMesh; // 0x28
};

struct UUserDefinedImageCaptureProtocol : UUserDefinedCaptureProtocol {
	EDesiredImageFormat Format; // 0xd8
	bool bEnableCompression; // 0xd9
	int32_t CompressionQuality; // 0xdc
};

struct UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x90
};

struct UDatasmithSkyLightComponentTemplate : UDatasmithObjectTemplate {
	ESkyLightSourceType SourceType; // 0x30
	int32_t CubemapResolution; // 0x34
	UTextureCube* Cubemap; // 0x38
};

struct UClickDragInputBehavior : UAnyButtonInputBehavior {
	bool bUpdateModifiersDuringDrag; // 0x120
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
	ETickingGroup TimelineTickGroup; // 0x90
	FName VariableName; // 0x94
	FName DirectionPropertyName; // 0x9c
	FName UpdateFunctionName; // 0xa4
	FName FinishedFunctionName; // 0xac
};

struct UAnimSequenceLevelSequenceLink : UAssetUserData {
	FGuid SkelTrackGuid; // 0x28
	FSoftObjectPath PathToLevelSequence; // 0x38
};

struct UMovieSceneSignedObject : UObject {
	FGuid Signature; // 0x28
};

struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	TArray<FLayerBlendInput> Layers; // 0x40
	FGuid ExpressionGUID; // 0x50
};

struct ULandscapeMeshProxyComponent : UStaticMeshComponent {
	FGuid LandscapeGuid; // 0x4e0
	TArray<FIntPoint> ProxyComponentBases; // 0x4f0
	int8_t ProxyLOD; // 0x500
};

struct UInterpTrackVisibility : UInterpTrack {
	TArray<FVisibilityTrackKey> VisibilityTrack; // 0x70
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	char bFireEventsWhenJumpingForwards : 1; // 0x80
};

struct UStreamMediaSource : UBaseMediaSource {
	FString StreamUrl; // 0x88
};

struct UMaterialExpressionWorldPosition : UMaterialExpression {
	EWorldPositionIncludedOffsets WorldPositionShaderOffset; // 0x40
};

struct UMaterialExpressionConstant2Vector : UMaterialExpression {
	float R; // 0x40
	float G; // 0x44
};

struct UMovieSceneParticleSection : UMovieSceneSection {
	FMovieSceneParticleChannel ParticleKeys; // 0xe8
};

struct At_Ammo_C : ASFPSAmmo {
	UBoxComponent* Trace; // 0x328
	UStaticMeshComponent* Mesh; // 0x330
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

struct ULeaderboardFlushCallbackProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UBTService : UBTAuxiliaryNode {
	float Interval; // 0x60
	float RandomDeviation; // 0x64
	char bCallTickOnSearchStart : 1; // 0x68
	char bRestartTimerOnEachActivation : 1; // 0x68
};

struct UMovieSceneCaptureProtocolBase : UObject {
	EMovieSceneCaptureProtocolState State; // 0x50
};

struct UMovieSceneEvaluationHookSystem : UMovieSceneEntitySystem {
	TMap<FMovieSceneEvaluationInstanceKey, FMovieSceneEvaluationHookEventContainer> PendingEventsByRootInstance; // 0x40
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

struct UInAppPurchaseRestoreCallbackProxy2 : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
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

struct UDrawFrustumComponent : UPrimitiveComponent {
	FColor FrustumColor; // 0x450
	float FrustumAngle; // 0x454
	float FrustumAspectRatio; // 0x458
	float FrustumStartDist; // 0x45c
	float FrustumEndDist; // 0x460
	UTexture* Texture; // 0x468
};

struct ULevelVariantSets : UObject {
	UObject* DirectorClass; // 0x28
	TArray<UVariantSet*> VariantSets; // 0x30
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

struct UFontFace : UObject {
	FString SourceFilename; // 0x30
	EFontHinting Hinting; // 0x40
	EFontLoadingPolicy LoadingPolicy; // 0x41
	EFontLayoutMethod LayoutMethod; // 0x42
};

struct UMaterialExpressionSmoothStep : UMaterialExpression {
	FExpressionInput Min; // 0x40
	FExpressionInput Max; // 0x54
	FExpressionInput Value; // 0x68
	float ConstMin; // 0x7c
	float ConstMax; // 0x80
	float ConstValue; // 0x84
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

struct At_Equipment_C : ASFPSWearableItem {
	UStaticMeshComponent* Mesh; // 0x3a8
	UBoxComponent* Trace; // 0x3b0
	USFPSACItemInventory* SFPSACItemInventory; // 0x3b8
};

struct UInputComponent : UActorComponent {
	TArray<FCachedKeyToActionInfo> CachedKeyToActionInfo; // 0x120
};

struct UMaterialExpressionSamplePhysicsScalarField : UMaterialExpression {
	FExpressionInput WorldPosition; // 0x40
	EFieldScalarType FieldTarget; // 0x54
};

struct USFPSAICharacterSets : UObject {
	TArray<FSFPSAICharacterSetsElement> Elements; // 0x28
};

struct UFormBase_C : UUserWidget {
	UButton* btnClose; // 0x268
	UButton* btnDelete; // 0x270
	UCheckBox* btnRegistration; // 0x278
	UButton* Registration_btnAdd; // 0x280
	UButton* Registration_btnCopy; // 0x288
	UButton* Registration_btnCopyAdded; // 0x290
	UButton* Registration_btnDel; // 0x298
	UButton* Registration_btnSteamProfile; // 0x2a0
	UButton* Registration_btnSteamProfileAdded; // 0x2a8
};

struct UMaterialExpressionSkyAtmosphereAerialPerspective : UMaterialExpression {
	FExpressionInput WorldPosition; // 0x40
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

struct AGeometryCollectionRenderLevelSetActor : AActor {
	UVolumeTexture* TargetVolumeTexture; // 0x220
	UMaterial* RayMarchMaterial; // 0x228
	float SurfaceTolerance; // 0x230
	float Isovalue; // 0x234
	bool Enabled; // 0x238
	bool RenderVolumeBoundingBox; // 0x239
};

struct USoundNodeLooping : USoundNode {
	int32_t LoopCount; // 0x48
	char bLoopIndefinitely : 1; // 0x4c
};

struct UMaterialExpressionMaterialProxyReplace : UMaterialExpression {
	FExpressionInput Realtime; // 0x40
	FExpressionInput MaterialProxy; // 0x54
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

struct UDatasmithDecalComponentTemplate : UDatasmithObjectTemplate {
	int32_t SortOrder; // 0x30
	FVector DecalSize; // 0x34
	UMaterialInterface* Material; // 0x40
};

struct ABaseBounds_C : AActor {
	UStaticMeshComponent* Sphere; // 0x220
};

struct UAISubsystem : UObject {
	UAISystem* AISystem; // 0x30
};

struct UfrmAdminPanelDeathRecord_C : USFPSUserWidget_AdminPanel_DeathL {
	UButton* btnSelected; // 0x2e8
};

struct UMaterialExpressionClamp : UMaterialExpression {
	FExpressionInput Input; // 0x40
	FExpressionInput Min; // 0x54
	FExpressionInput Max; // 0x68
	EClampMode ClampMode; // 0x7c
	float MinDefault; // 0x80
	float MaxDefault; // 0x84
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

struct ABM_FloorTria_02_C : At_LocationCraftActor_C {
	USFPSACBaseCollision* SFPSACBaseCollision; // 0x358
	USFPSACSnapComponent* SFPSACSnap; // 0x360
};

struct UFormChat_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UfrmPopupMenu_C* frmPopupMenu; // 0x270
	UNamedSlot* nsPopupMenu; // 0x278
	USFPSUserWidget_ChatItem* FSelectedChatItem; // 0x280
	bool FMouseRightButtonIsDowned; // 0x288
	bool FMouseLeftButtonIsDowned; // 0x289
};

struct UPropertyBinding : UObject {
	TWeakObjectPtr<UObject> SourceObject; // 0x28
	FDynamicPropertyPath SourcePath; // 0x30
	FName DestinationProperty; // 0x58
};

struct ASFPSActor : AActor {
	bool bJumpForbidden; // 0x220
	int32_t ActorLibraryIndex; // 0x224
};

struct Aweapon_firearms_sg_mp43_sawed_off_C : At_FireArm_C {
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x7e0
	UStaticMeshComponent* DeviceLeftMount; // 0x7e8
	UStaticMeshComponent* RightShell; // 0x7f0
	UStaticMeshComponent* LeftShellEmpty; // 0x7f8
	UStaticMeshComponent* RightShellEmpty; // 0x800
	UStaticMeshComponent* LeftShell; // 0x808
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

struct Ascope_opt_hamr_4x_empty_C : At_Sight_C {
	UStaticMeshComponent* hamr_4x_reticles; // 0x3d0
};

struct UMaterialExpressionAppendVector : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UConstantCameraShakePattern : USimpleCameraShakePattern {
	FVector LocationOffset; // 0x38
	FRotator RotationOffset; // 0x44
};

struct UAnimNotify_PlayParticleEffect : UAnimNotify {
	UParticleSystem* PSTemplate; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	FVector Scale; // 0x58
	char Attached : 1; // 0x80
	FName SocketName; // 0x84
};

struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
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

struct ULandscapeInfo : UObject {
	LazyObjectProperty LandscapeActor; // 0x28
	FGuid LandscapeGuid; // 0x44
	int32_t ComponentSizeQuads; // 0x54
	int32_t SubsectionSizeQuads; // 0x58
	int32_t ComponentNumSubsections; // 0x5c
	FVector DrawScale; // 0x60
	TArray<ALandscapeStreamingProxy*> Proxies; // 0x110
};

struct UFormDlg_ItemList_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UButton* btnOk; // 0x270
	UTextBlock* lbOk; // 0x278
	UfrmSpriteViewInv_C* sv0; // 0x280
	UfrmSpriteViewInv_C* sv1; // 0x288
	UfrmSpriteViewInv_C* sv2; // 0x290
	UfrmSpriteViewInv_C* sv3; // 0x298
	UfrmSpriteViewInv_C* sv4; // 0x2a0
	UfrmSpriteViewInv_C* sv5; // 0x2a8
	UfrmSpriteViewInv_C* sv6; // 0x2b0
};

struct USFPSGameplayManager : UObject {
	TArray<ASFPSGameplayArea*> GameplayAreas; // 0x28
	TArray<ASFPSBaseLootSpawner*> LootSpawners; // 0x40
	TArray<USFPSGameplayEventManager*> GameplayEventManagerClasses; // 0x58
	TArray<USFPSGameplayEventManager*> GameplayEventManagers; // 0x68
	USFPSAirDropManager* AirDropManager; // 0x88
	USFPSAirDropManager* AirDropManagerClass; // 0x90
	USFPSHiddenStashManager* HiddenStashManager; // 0x98
	USFPSHiddenStashManager* HiddenStashManagerClass; // 0xa0
	USFPSPatrolManager* PatrolManager; // 0xa8
	USFPSPatrolManager* PatrolManagerClass; // 0xb0
};

struct UPlaneReflectionCaptureComponent : UReflectionCaptureComponent {
	float InfluenceRadiusScale; // 0x270
	UDrawSphereComponent* PreviewInfluenceRadius; // 0x278
	UBoxComponent* PreviewCaptureBox; // 0x280
};

struct USFPSACCraftKit : UActorComponent {
	ASFPSBaseLocationCraftItem* LocationCraftItem; // 0xb0
};

struct Aweapon_firearms_rifle_aks74u_C : At_FireArm_C {
	UStaticMeshComponent* DTK; // 0x7e0
	UStaticMeshComponent* DeviceLeftMount; // 0x7e8
	UStaticMeshComponent* SightOpen; // 0x7f0
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x7f8
	UStaticMeshComponent* MagazineFull; // 0x800
	UStaticMeshComponent* MagazineEmpty; // 0x808
};

struct UMaterialFunction : UMaterialFunctionInterface {
	FString Description; // 0x40
	char bExposeToLibrary : 1; // 0x50
	char bPrefixParameterNames : 1; // 0x50
};

struct USFPSLootLibrary : UObject {
	TArray<FSFPSLootList> LootSpawners; // 0x28
	TArray<FSFPSLootList> BoxSpawners; // 0x38
	TArray<FSFPSLootList> Missions; // 0x48
	TArray<FSFPSLootList> Mobs; // 0x58
};

struct UMaterialExpressionBlendMaterialAttributes : UMaterialExpression {
	FMaterialAttributesInput A; // 0x40
	FMaterialAttributesInput B; // 0x58
	FExpressionInput Alpha; // 0x70
	EMaterialAttributeBlend PixelAttributeBlendType; // 0x84
	EMaterialAttributeBlend VertexAttributeBlendType; // 0x85
};

struct UProceduralMeshComponent : UMeshComponent {
	bool bUseComplexAsSimpleCollision; // 0x480
	bool bUseAsyncCooking; // 0x481
	UBodySetup* ProcMeshBodySetup; // 0x488
	TArray<FProcMeshSection> ProcMeshSections; // 0x490
	TArray<FKConvexElem> CollisionConvexElems; // 0x4a0
	FBoxSphereBounds LocalBounds; // 0x4b0
	TArray<UBodySetup*> AsyncBodySetupQueue; // 0x4d0
};

struct UInterpTrackInstDirector : UInterpTrackInst {
	AActor* OldViewTarget; // 0x28
};

struct USoundNodeLatencyByDistance : USoundNode {
	float NonLatencyDist; // 0x50
	float MinLatencyValue; // 0x54
	float MaxLatencyValue; // 0x58
};

struct UGeometryCollectionCache : UObject {
	FRecordedTransformTrack RecordedData; // 0x28
	UGeometryCollection* SupportedCollection; // 0x38
	FGuid CompatibleCollectionState; // 0x40
};

struct UDialogueWave : UObject {
	char bMature : 1; // 0x28
	char bOverride_SubtitleOverride : 1; // 0x28
	FString SpokenText; // 0x30
	FString SubtitleOverride; // 0x40
	TArray<FDialogueContextMapping> ContextMappings; // 0x50
	FGuid LocalizationGUID; // 0x60
};

struct UDistributionVectorUniformCurve : UDistributionVector {
	FInterpCurveTwoVectors ConstantCurve; // 0x38
	char bLockAxes1 : 1; // 0x50
	char bLockAxes2 : 1; // 0x50
	EDistributionVectorLockFlags LockedAxes[0x2]; // 0x54
	EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x56
	char bUseExtremes : 1; // 0x5c
};

struct UShaderPlatformQualitySettings : UObject {
	FMaterialQualityOverrides QualityOverrides[0x4]; // 0x28
};

struct UGizmoArrowComponent : UGizmoBaseComponent {
	FVector Direction; // 0x470
	float Gap; // 0x47c
	float Length; // 0x480
	float Thickness; // 0x484
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

struct UInterpGroupCamera : UInterpGroup {
	UCameraAnim* CameraAnimInst; // 0x50
	float CompressTolerance; // 0x58
};

struct UEditableGameplayTagQueryExpression_NoExprMatch : UEditableGameplayTagQueryExpression {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
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

struct UAnimationDataSourceRegistry : UObject {
	TMap<FName, TWeakObjectPtr<UObject>> DataSources; // 0x28
};

struct UARTrackedQRCode : UARTrackedImage {
	FString QRCode; // 0x108
	int32_t Version; // 0x118
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

struct UDistributionFloatConstantCurve : UDistributionFloat {
	FInterpCurveFloat ConstantCurve; // 0x38
};

struct Aweapmf_DTK_556x45_03_C : At_MuzzleAttachement_C {
	USceneComponent* Muzzle; // 0x390
};

struct ALevelBounds : AActor {
	UBoxComponent* BoxComponent; // 0x220
	bool bAutoUpdateBounds; // 0x228
};

struct ASFPSOnlineBeaconClient : AOnlineBeaconClient {
	FDelegate SteamAuthCallback; // 0x2bc
};

struct USphereReflectionCaptureComponent : UReflectionCaptureComponent {
	float InfluenceRadius; // 0x270
	float CaptureDistanceScale; // 0x274
	UDrawSphereComponent* PreviewInfluenceRadius; // 0x278
};

struct UProgressWidgetStyle : USlateWidgetStyleContainerBase {
	FProgressBarStyle ProgressBarStyle; // 0x30
};

struct UMaterialExpressionAntialiasedTextureMask : UMaterialExpressionTextureSampleParameter2D {
	float Threshold; // 0x80
	ETextureColorChannel Channel; // 0x84
};

struct UDatasmithStaticMeshGLTFImportData : UDatasmithStaticMeshImportData {
	FString SourceMeshName; // 0x28
};

struct ASFPSAirDropCargo : AActor {
	UProjectileMovementComponent* MovementComponent; // 0x240
	USoundCue* LandedSound; // 0x248
};

struct UButtonStyleAsset : UObject {
	FButtonStyle ButtonStyle; // 0x28
};

struct UButtonSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UEditableGameplayTagQueryExpression_NoTagsMatch : UEditableGameplayTagQueryExpression {
	FGameplayTagContainer Tags; // 0x28
};

struct UMaterialExpressionThinTranslucentMaterialOutput : UMaterialExpressionCustomOutput {
	FExpressionInput TransmittanceColor; // 0x40
};

struct UGeometryCache : UObject {
	TArray<UMaterialInterface*> Materials; // 0x30
	TArray<UGeometryCacheTrack*> Tracks; // 0x40
	int32_t StartFrame; // 0x60
	int32_t EndFrame; // 0x64
	uint64_t Hash; // 0x68
};

struct UAmbisonicsEncodingSettings : USoundfieldEncodingSettingsBase {
	int32_t AmbisonicsOrder; // 0x28
};

struct USourceEffectPannerPreset : USoundEffectSourcePreset {
	FSourceEffectPannerSettings Settings; // 0x98
};

struct UMovieSceneSlomoSection : UMovieSceneSection {
	FMovieSceneFloatChannel FloatCurve; // 0xe8
};

struct UShadowMapTexture2D : UTexture2D {
	EShadowMapFlags ShadowmapFlags; // 0x1a0
};

struct UPhysicalMaterialMask : UObject {
	int32_t UVChannelIndex; // 0x28
	TextureAddress AddressX; // 0x2c
	TextureAddress AddressY; // 0x2d
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

struct USoundClass : UObject {
	FSoundClassProperties Properties; // 0x28
	TArray<USoundClass*> ChildClasses; // 0xa0
	TArray<FPassiveSoundMixModifier> PassiveSoundMixModifiers; // 0xb0
	USoundClass* ParentClass; // 0xc0
};

struct UFormMessageMemo_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UButton* btnOk; // 0x270
	UTextBlock* lbOk; // 0x278
};

struct ASFPSSoundTrigger : AActor {
	float InRoomValue; // 0x228
	USFPSGameInstance* FGameInstance; // 0x230
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

struct UNavMovementComponent : UMovementComponent {
	FNavAgentProperties NavAgentProps; // 0xf0
	float FixedPathBrakingDistance; // 0x120
	char bUpdateNavAgentWithOwnersCollision : 1; // 0x124
	char bUseAccelerationForPaths : 1; // 0x124
	char bUseFixedBrakingDistanceForPaths : 1; // 0x124
	FMovementProperties MovementState; // 0x125
	UObject* PathFollowingComp; // 0x128
};

struct UInterpTrackInstEvent : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
};

struct Ascope_opt_hamr_4x_col_C : At_Sight_C {
	UStaticMeshComponent* hamr_4x_reticles; // 0x3d0
};

struct UMaterialExpressionBreakMaterialAttributes : UMaterialExpression {
	FMaterialAttributesInput MaterialAttributes; // 0x40
};

struct UARCandidateImage : UDataAsset {
	UTexture2D* CandidateTexture; // 0x30
	FString FriendlyName; // 0x38
	float Width; // 0x48
	float Height; // 0x4c
	EARCandidateImageOrientation Orientation; // 0x50
};

struct UInterpTrackColorProp : UInterpTrackVectorBase {
	FName PropertyName; // 0x90
};

struct UObjectReferencer : UObject {
	TArray<UObject*> ReferencedObjects; // 0x28
};

struct UBTCompositeNode : UBTNode {
	TArray<FBTCompositeChild> Children; // 0x58
	TArray<UBTService*> Services; // 0x68
	char bApplyDecoratorScope : 1; // 0x88
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

struct USFPSUserWidget_GroundItem : UUserWidget {
	TWeakObjectPtr<ASFPSBaseItem> TagObject0; // 0x268
	TWeakObjectPtr<ASFPSBaseItem> TagObject1; // 0x270
	TWeakObjectPtr<ASFPSBaseItem> TagObject2; // 0x278
	bool bUsedObject0; // 0x280
	bool bUsedObject1; // 0x281
	bool bUsedObject2; // 0x282
	ESFPSGroundScrollBoxType ScrollBoxType; // 0x283
	float DblClickTimer; // 0x284
};

struct UParticleModuleVectorFieldScale : UParticleModuleVectorFieldBase {
	UDistributionFloat* VectorFieldScale; // 0x30
	FRawDistributionFloat VectorFieldScaleRaw; // 0x38
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

struct UInterpTrackInstSlomo : UInterpTrackInst {
	float OldTimeDilation; // 0x28
};

struct ASFPSPlayerController : APlayerController {
	FDelegate SteamDLCExistCallback; // 0x574
};

struct UInteractiveGizmoManager : UObject {
	TArray<FActiveGizmo> ActiveGizmos; // 0x30
	TMap<FString, UInteractiveGizmoBuilder*> GizmoBuilders; // 0x58
};

struct UAnimationSharingStateProcessor : UObject {
	TSoftObjectPtr<UEnum> AnimationStateEnum; // 0x28
};

struct URestrictedGameplayTagsList : UObject {
	FString ConfigFileName; // 0x28
	TArray<FRestrictedGameplayTagTableRow> RestrictedGameplayTagList; // 0x38
};

struct ABMF_Gates_01_C : At_LocationCraftActor_C {
	UBoxComponent* Box1; // 0x358
	UStaticMeshComponent* StaticMesh1; // 0x360
	UBoxComponent* Box; // 0x368
	UStaticMeshComponent* StaticMesh; // 0x370
	USFPSACDoor* SFPSACDoor; // 0x378
	USFPSACBaseCollision* SFPSACBaseCollision; // 0x380
};

struct UBlendSpace1D : UBlendSpaceBase {
	bool bScaleAnimation; // 0x148
};

struct UPacketHandlerProfileConfig : UObject {
	TArray<FString> Components; // 0x28
};

struct UProceduralFoliageSpawner : UObject {
	int32_t RandomSeed; // 0x28
	float TileSize; // 0x2c
	int32_t NumUniqueTiles; // 0x30
	float MinimumQuadTreeSize; // 0x34
	TArray<FFoliageTypeObject> FoliageTypes; // 0x40
};

struct UGeometryCollectionComponent : UMeshComponent {
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

struct UInterpTrackFade : UInterpTrackFloatBase {
	char bPersistFade : 1; // 0x90
	char bFadeAudio : 1; // 0x90
	FLinearColor FadeColor; // 0x94
};

struct USFPSBaseManager : UObject {
	TArray<USFPSBase*> Bases; // 0x28
};

struct UMaterialExpressionTextureCoordinate : UMaterialExpression {
	int32_t CoordinateIndex; // 0x40
	float UTiling; // 0x44
	float VTiling; // 0x48
	char UnMirrorU : 1; // 0x4c
	char UnMirrorV : 1; // 0x4c
};

struct UABP_weapon_firearms_gun_c1911_C : USFPSWeaponAnimInstance_Gun {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	FAnimNode_Root AnimGraphNode_Root; // 0x2e8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x318
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x360
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x388
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x3b0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x3d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x400
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x428
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x450
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x4d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x500
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x580
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x5b0
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x630
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x660
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

struct UTileView : UListView {
	float EntryHeight; // 0x368
	float EntryWidth; // 0x36c
	EListItemAlignment TileAlignment; // 0x370
	bool bWrapHorizontalNavigation; // 0x371
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

struct USFPSBaseWeaponAnimInstance : UAnimInstance {
	ASFPSWeapon* Weapon; // 0x2b8
	ESFPSWeaponAnimInstanceType AnimInstanceType; // 0x2c0
	ESFPSSmallArmsStateForAnim SmallArmsStateForAnim; // 0x2c1
	int32_t FireMode; // 0x2c4
	int32_t AmmoCount; // 0x2c8
	int32_t MaxAmmo; // 0x2cc
	int32_t AmmoCountAfterLoad; // 0x2d0
};

struct UMaterialExpressionDepthOfFieldFunction : UMaterialExpression {
	EDepthOfFieldFunctionValue FunctionValue; // 0x40
	FExpressionInput Depth; // 0x44
};

struct UMaterialExpressionComment : UMaterialExpression {
	int32_t SizeX; // 0x40
	int32_t SizeY; // 0x44
	FString Text; // 0x48
	FLinearColor CommentColor; // 0x58
	int32_t FontSize; // 0x68
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

struct USoundNodeWavePlayer : USoundNodeAssetReferencer {
	TSoftObjectPtr<USoundWave> SoundWaveAssetPtr; // 0x48
	USoundWave* SoundWave; // 0x70
	char bLooping : 1; // 0x80
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

struct UInputKeyDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputKeyDelegateBinding> InputKeyDelegateBindings; // 0x28
};

struct UInvalidationBox : UContentWidget {
	bool bCanCache; // 0x120
	bool CacheRelativeTransforms; // 0x121
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

struct UARCandidateObject : UDataAsset {
	TArray<char> CandidateObjectData; // 0x30
	FString FriendlyName; // 0x40
	FBox BoundingBox; // 0x50
};

struct USFPSMainInterfaceHandler : UObject {
	ASFPSHUD* HUD; // 0x110
	UUserWidget* FormHUD; // 0x118
	UUserWidget* FormNDA; // 0x120
	UUserWidget* FormInGameMenu; // 0x128
};

struct UParticleModuleLocationPrimitiveCylinder : UParticleModuleLocationPrimitiveBase {
	char RadialVelocity : 1; // 0xb0
	FRawDistributionFloat StartRadius; // 0xb8
	FRawDistributionFloat StartHeight; // 0xe8
	CylinderHeightAxis HeightAxis; // 0x118
};

struct UMaterialExpressionParameter : UMaterialExpression {
	FName ParameterName; // 0x40
	FGuid ExpressionGUID; // 0x48
};

struct UEnvQueryGenerator_Composite : UEnvQueryGenerator {
	TArray<UEnvQueryGenerator*> Generators; // 0x50
	char bAllowDifferentItemTypes : 1; // 0x60
	char bHasMatchingItemType : 1; // 0x60
	UEnvQueryItemType* ForcedItemType; // 0x68
};

struct UMovieSceneCinematicShotSection : UMovieSceneSubSection {
	FString ShotDisplayName; // 0x168
	FText DisplayName; // 0x178
};

struct USoundNodeQualityLevel : USoundNode {
	int32_t CookedQualityLevelIndex; // 0x48
};

struct USFPSAI_TSwitchFromPeace : UBTTaskNode {
	bool bForceSimpleCover; // 0x70
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
	TArray<UAssetUserData*> AssetUserData; // 0x380
};

struct USFPSAIConfig : UObject {
	FSFPSAIParams Params; // 0x28
};

struct UGizmoBoxComponent : UGizmoBaseComponent {
	FVector Origin; // 0x470
	FQuat Rotation; // 0x480
	FVector Dimensions; // 0x490
	float LineThickness; // 0x49c
	bool bRemoveHiddenLines; // 0x4a0
	bool bEnableAxisFlip; // 0x4a1
};

struct ULandscapeWeightmapUsage : UObject {
	ULandscapeComponent* ChannelUsage[0x4]; // 0x28
	FGuid LayerGuid; // 0x48
};

struct UfrmCraftItem_C : USFPSUserWidget_CraftRollout {
	UButton* btnCraft; // 0x2f8
};

struct USignificanceManager : UObject {
	FSoftClassPath SignificanceManagerClassName; // 0x108
};

struct UMaterialExpressionTemporalSobol : UMaterialExpression {
	FExpressionInput Index; // 0x40
	FExpressionInput Seed; // 0x54
	uint32_t ConstIndex; // 0x68
	FVector2D ConstSeed; // 0x6c
};

struct UMovieSceneGeometryCacheSection : UMovieSceneSection {
	FMovieSceneGeometryCacheParams Params; // 0xe8
};

struct UABP_weapon_firearms_supp_rgm40_C : USFPSWeaponAnimInstance_GrenLnch {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0
	FAnimNode_Root AnimGraphNode_Root; // 0x2f8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x328
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x370
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x398
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3c0
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x440
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x470
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4f0
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x520
};

struct UAISense_Sight : UAISense {
	int32_t MaxTracesPerTick; // 0x148
	int32_t MinQueriesPerTimeSliceCheck; // 0x14c
	double MaxTimeSlicePerTick; // 0x150
	float HighImportanceQueryDistanceThreshold; // 0x158
	float MaxQueryImportance; // 0x160
	float SightLimitQueryImportance; // 0x164
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

struct UParticleModuleRotationRate_Seeded : UParticleModuleRotationRate {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x60
};

struct ABox_mil_01_C : AActor {
	UStaticMeshComponent* Box_military_cap_01; // 0x220
	UStaticMeshComponent* Box_military_01; // 0x228
};

struct USplineComponent : UPrimitiveComponent {
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

struct UUniformGridSlot : UPanelSlot {
	EHorizontalAlignment HorizontalAlignment; // 0x38
	EVerticalAlignment VerticalAlignment; // 0x39
	int32_t Row; // 0x3c
	int32_t Column; // 0x40
};

struct UBTDecorator_CheckGameplayTagsOnActor : UBTDecorator {
	FBlackboardKeySelector ActorToCheck; // 0x68
	EGameplayContainerMatchType TagsToMatch; // 0x90
	FGameplayTagContainer GameplayTags; // 0x98
	FString CachedDescription; // 0xb8
};

struct USynthComponent : USceneComponent {
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

struct UMaterialExpressionDistanceFieldGradient : UMaterialExpression {
	FExpressionInput Position; // 0x40
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

struct UParticleModuleLifetime : UParticleModuleLifetimeBase {
	FRawDistributionFloat LifeTime; // 0x30
};

struct UBTService_DefaultFocus : UBTService_BlackboardBase {
	char FocusPriority; // 0x98
};

struct UFloatingPawnMovement : UPawnMovementComponent {
	float MaxSpeed; // 0x138
	float Acceleration; // 0x13c
	float Deceleration; // 0x140
	float TurningBoost; // 0x144
	char bPositionCorrected : 1; // 0x148
};

struct UMaterialExpressionFresnel : UMaterialExpression {
	FExpressionInput ExponentIn; // 0x40
	float Exponent; // 0x54
	FExpressionInput BaseReflectFractionIn; // 0x58
	float BaseReflectFraction; // 0x6c
	FExpressionInput Normal; // 0x70
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

struct URadialVector : UFieldNodeVector {
	float Magnitude; // 0xb0
	FVector Position; // 0xb4
};

struct UCurveVector : UCurveBase {
	FRichCurve FloatCurves[0x3]; // 0x30
};

struct ABMF_Storage_01_C : ASFPSLootBox {
	USFPSACLootBoxInventory* SFPSACLootBoxInventory; // 0x3b8
	USFPSACBaseCollision* SFPSACBaseCollision; // 0x3c0
	UStaticMeshComponent* StaticMesh; // 0x3c8
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

struct UIntervalGizmo : UInteractiveGizmo {
	UGizmoTransformChangeStateTarget* StateTarget; // 0x38
	UTransformProxy* TransformProxy; // 0x50
	TArray<UPrimitiveComponent*> ActiveComponents; // 0x58
	TArray<UInteractiveGizmo*> ActiveGizmos; // 0x68
	UGizmoComponentAxisSource* AxisYSource; // 0x90
	UGizmoComponentAxisSource* AxisZSource; // 0x98
};

struct UfrmAdminPanelStartKitItem_C : USFPSUserWidget_TraderItem {
	UButton* btnAction0; // 0x310
};

struct UDatasmithMaterialInstanceTemplate : UDatasmithObjectTemplate {
	TSoftObjectPtr<UMaterialInterface> ParentMaterial; // 0x30
	TMap<FName, float> ScalarParameterValues; // 0x58
	TMap<FName, FLinearColor> VectorParameterValues; // 0xa8
	TMap<FName, TSoftObjectPtr<UTexture>> TextureParameterValues; // 0xf8
	FDatasmithStaticParameterSetTemplate StaticParameters; // 0x148
};

struct ACullDistanceVolume : AVolume {
	TArray<FCullDistanceSizePair> CullDistances; // 0x258
	char bEnabled : 1; // 0x268
};

struct UPawnAction_Wait : UPawnAction {
	float TimeToWait; // 0x90
};

struct UTextPropertyTestObject : UObject {
	FText DefaultedText; // 0x28
	FText UndefaultedText; // 0x40
	FText TransientText; // 0x58
};

struct UMagicLeapARPinSettings : UObject {
	float UpdateCheckFrequency; // 0x28
	FMagicLeapARPinState OnUpdatedEventTriggerDelta; // 0x2c
};

struct At_Equipment_WithoutInventory_C : ASFPSWearableItem {
	UStaticMeshComponent* Mesh; // 0x3a8
	UBoxComponent* Trace; // 0x3b0
};

struct USoundSourceBus : USoundWave {
	ESourceBusChannels SourceBusChannels; // 0x370
	float SourceBusDuration; // 0x374
	UAudioBus* AudioBus; // 0x378
	char bAutoDeactivateWhenSilent : 1; // 0x380
};

struct UStereoLayerShapeCylinder : UStereoLayerShape {
	float Radius; // 0x28
	float OverlayArc; // 0x2c
	int32_t Height; // 0x30
};

struct Arecoveryitem_medikit_rag_C : At_RecoveryItem_C {
	float Timer; // 0x420
};

struct UDataAsset : UObject {
	UDataAsset* NativeClass; // 0x28
};

struct Aweapon_firearms_snip_mosin_long_C : At_FireArm_C {
	UStaticMeshComponent* DeviceLeftMount; // 0x7e0
	UStaticMeshComponent* ShellMagazine; // 0x7e8
	UStaticMeshComponent* ShellBarrelEmpty; // 0x7f0
	UStaticMeshComponent* ShellBarrelFull; // 0x7f8
	UStaticMeshComponent* SightClose; // 0x800
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x808
};

struct UAchievementWriteCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UGameSessionSettings : UObject {
	int32_t MaxSpectators; // 0x28
	int32_t MaxPlayers; // 0x2c
	char bRequiresPushToTalk : 1; // 0x30
};

struct Aweapon_firearms_snip_s85_C : At_FireArm_C {
	UStaticMeshComponent* DeviceLeftMount; // 0x7e0
	UStaticMeshComponent* ShellMagazine; // 0x7e8
	UStaticMeshComponent* MagazineEmpty; // 0x7f0
	UStaticMeshComponent* ShellBarrelEmpty; // 0x7f8
	UStaticMeshComponent* SightClose; // 0x800
	UStaticMeshComponent* MagazineFull; // 0x808
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x810
};

struct UTexture2DArray : UTexture {
	TextureAddress AddressX; // 0x1d0
	TextureAddress AddressY; // 0x1d1
	TextureAddress AddressZ; // 0x1d2
};

struct UAudioSettings : UDeveloperSettings {
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

struct UShowLoginUICallbackProxy : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UBlackboardKeyType_String : UBlackboardKeyType {
	FString StringValue; // 0x30
};

struct ULevelSequence : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x68
	FLevelSequenceObjectReferenceMap ObjectReferences; // 0x70
	FLevelSequenceBindingReferences BindingReferences; // 0xc0
	TMap<FString, FLevelSequenceObject> PossessedObjects; // 0x160
	UObject* DirectorClass; // 0x1b0
	TArray<UAssetUserData*> AssetUserData; // 0x1b8
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

struct UInterpTrackInstFloatParticleParam : UInterpTrackInst {
	float ResetFloat; // 0x28
};

struct USkeletalBodySetup : UBodySetup {
	bool bSkipScaleFromAnimation; // 0x2a0
	TArray<FPhysicalAnimationProfile> PhysicalAnimationData; // 0x2a8
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

struct UBTTask_RunEQSQuery : UBTTask_BlackboardBase {
	UEnvQuery* QueryTemplate; // 0x98
	TArray<FEnvNamedValue> QueryParams; // 0xa0
	TArray<FAIDynamicParam> QueryConfig; // 0xb0
	EEnvQueryRunMode RunMode; // 0xc0
	FBlackboardKeySelector EQSQueryBlackboardKey; // 0xc8
	bool bUseBBKey; // 0xf0
	FEQSParametrizedQueryExecutionRequest EQSRequest; // 0xf8
};

struct APlayerCameraManager : AActor {
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

struct UMovieSceneCameraCutTrack : UMovieSceneNameableTrack {
	bool bCanBlend; // 0x90
	TArray<UMovieSceneSection*> Sections; // 0x98
};

struct AShell_AR0_C : ASFPSShell {
	UStaticMeshComponent* Mesh; // 0x250
};

struct UABP_weapon_firearms_gun_M9_C : USFPSWeaponAnimInstance_Gun {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	FAnimNode_Root AnimGraphNode_Root; // 0x2e8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x318
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x360
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x388
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x3b0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x3d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x400
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x428
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x450
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x4d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x500
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x580
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x5b0
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x630
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x660
};

struct UMaterialExpressionRuntimeVirtualTextureReplace : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput VirtualTextureOutput; // 0x54
};

struct UARPlaneComponent : UARComponent {
	FARPlaneUpdatePayload ReplicatedPayload; // 0x280
};

struct UMaterialExpressionSetMaterialAttributes : UMaterialExpression {
	TArray<FExpressionInput> Inputs; // 0x40
	TArray<FGuid> AttributeSetTypes; // 0x50
};

struct UFormHUD_C : UUserWidget {
	UfrmCompass_C* frmCompass; // 0x268
	UImage* imgNoPVP; // 0x270
	UfrmRadialMenu_C* rmMain; // 0x278
	UfrmHUDChatBox_C* uwChat; // 0x280
	ESlateVisibility imgShot0Visible; // 0x288
	ESlateVisibility imgShot1Visible; // 0x289
	ESlateVisibility imgShot2Visible; // 0x28a
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

struct UMaterialExpressionAdd : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
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

struct UGridPanel : UPanelWidget {
	TArray<float> ColumnFill; // 0x120
	TArray<float> RowFill; // 0x130
};

struct UMovieScene3DConstraintTrack : UMovieSceneTrack {
	TArray<UMovieSceneSection*> ConstraintSections; // 0x90
};

struct UfrmChatBox_C : USFPSUserWidget_ChatBox {
	FPointerToUberGraphFrame UberGraphFrame; // 0x308
	UScrollBox* sbMain; // 0x310
};

struct UDestroySessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
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

struct UPaperRuntimeSettings : UObject {
	bool bEnableSpriteAtlasGroups; // 0x28
	bool bEnableTerrainSplineEditing; // 0x29
	bool bResizeSpriteDataToMatchTextures; // 0x2a
};

struct UMovieSceneGeometryCacheTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x98
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

struct UAITask_MoveTo : UAITask {
	FMulticastInlineDelegate OnRequestFailed; // 0x70
	FMulticastInlineDelegate OnMoveFinished; // 0x80
	FAIMoveRequest MoveRequest; // 0x90
};

struct UInterpTrackInstToggle : UInterpTrackInst {
	ETrackToggleAction Action; // 0x28
	float LastUpdatePosition; // 0x2c
	char bSavedActiveState : 1; // 0x30
};

struct UVaRestSettings : UObject {
	bool bExtendedLog; // 0x28
};

struct UMaterialExpressionFunctionOutput : UMaterialExpression {
	FName OutputName; // 0x40
	FString Description; // 0x48
	int32_t SortPriority; // 0x58
	FExpressionInput A; // 0x5c
	char bLastPreviewed : 1; // 0x70
	FGuid ID; // 0x74
};

struct UParticleModuleCameraOffset : UParticleModuleCameraBase {
	FRawDistributionFloat CameraOffset; // 0x30
	char bSpawnTimeOnly : 1; // 0x60
	EParticleCameraOffsetUpdateMethod UpdateMethod; // 0x64
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

struct USafeZoneSlot : UPanelSlot {
	bool bIsTitleSafe; // 0x38
	FMargin SafeAreaScale; // 0x3c
	EHorizontalAlignment HAlign; // 0x4c
	EVerticalAlignment VAlign; // 0x4d
	FMargin Padding; // 0x50
};

struct USFPSSplitHandler : UObject {
	UUserWidget* FSplitForm; // 0x28
};

struct UfrmPopupMenuItem_C : USFPSUserWidget_PopupMenuItem {
	UImage* imgSeparator; // 0x298
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

struct UInterpFilter : UObject {
	FString Caption; // 0x28
};

struct UMaterialExpressionFontSampleParameter : UMaterialExpressionFontSample {
	FName ParameterName; // 0x50
	FGuid ExpressionGUID; // 0x58
	FName group; // 0x68
};

struct UPoseWatch : UObject {
	UEdGraphNode* Node; // 0x28
	FColor PoseWatchColour; // 0x30
};

struct UBTDecorator_KeepInCone : UBTDecorator {
	float ConeHalfAngle; // 0x68
	FBlackboardKeySelector ConeOrigin; // 0x70
	FBlackboardKeySelector Observed; // 0x98
	char bUseSelfAsOrigin : 1; // 0xc0
	char bUseSelfAsObserved : 1; // 0xc0
};

struct APaperFlipbookActor : AActor {
	UPaperFlipbookComponent* RenderComponent; // 0x220
};

struct UBTNode : UObject {
	FString NodeName; // 0x30
	UBehaviorTree* TreeAsset; // 0x40
	UBTCompositeNode* ParentNode; // 0x48
};

struct ULevelSequenceBurnIn : UUserWidget {
	FLevelSequencePlayerSnapshot FrameInformation; // 0x268
	ALevelSequenceActor* LevelSequenceActor; // 0x320
};

struct UABP_weapon_firearms_smg_scorpion_C : USFPSWeaponAnimInstance_AR {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	FAnimNode_Root AnimGraphNode_Root; // 0x2e8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x318
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x360
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x388
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3b0
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x430
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x460
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4e0
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x510
};

struct ULayer : UObject {
	FName LayerName; // 0x28
	char bIsVisible : 1; // 0x30
	TArray<FLayerActorStats> ActorStats; // 0x38
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
	FDatasmithImportBaseOptions BaseOptions; // 0x30
	FDatasmithReimportOptions ReimportOptions; // 0x44
	FString Filename; // 0x48
	FString FilePath; // 0x58
};

struct UTextureRenderTarget : UTexture {
	float TargetGamma; // 0x178
};

struct UInterpTrackInstAnimControl : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
};

struct UGameEngine : UEngine {
	float MaxDeltaTime; // 0xd20
	float ServerFlushLogInterval; // 0xd24
	UGameInstance* GameInstance; // 0xd28
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

struct UMaterialExpressionConstant4Vector : UMaterialExpression {
	FLinearColor Constant; // 0x40
};

struct UStaticMeshSocket : UObject {
	FName SocketName; // 0x28
	FVector RelativeLocation; // 0x30
	FRotator RelativeRotation; // 0x3c
	FVector RelativeScale; // 0x48
	FString Tag; // 0x58
};

struct UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator_SimpleGrid {
	FAIDataProviderBoolValue PathToItem; // 0xf8
	UNavigationQueryFilter* NavigationFilter; // 0x130
	FAIDataProviderFloatValue ScanRangeMultiplier; // 0x138
};

struct UChaosGameplayEventDispatcher : UChaosEventListenerComponent {
	TMap<UPrimitiveComponent*, FChaosHandlerSet> CollisionEventRegistrations; // 0x1c8
	TMap<UPrimitiveComponent*, FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x218
};

struct At_AdditionalCartridge_C : ASFPSWeaponMF_AdditionalCartridge {
	UBoxComponent* Trace; // 0x398
	UStaticMeshComponent* Mesh; // 0x3a0
};

struct UUMG_RadialMenu_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UImage* RadialBackground; // 0x270
	UImage* RadiusDebug; // 0x278
	UOverlay* RootOverlay; // 0x280
	int32_t Segments; // 0x288
	UMaterialInterface* MaterialBase; // 0x290
	float IndexRaw; // 0x298
	int32_t Index; // 0x29c
	UMaterialInstanceDynamic* dynaMat; // 0x2a0
	TArray<UUserWidget*> Children; // 0x2a8
	bool AllowResizing; // 0x2b8
	float ItemOffsetRadius; // 0x2bc
	FMulticastInlineDelegate SelectionChanged; // 0x2c0
	APlayerController* InputController; // 0x2d0
	EJoystickTypes JoystickToUse; // 0x2d8
	float MouseDeadzone; // 0x2dc
	bool bInDeadzone; // 0x2e0
	FMulticastInlineDelegate EnteredDeadzone; // 0x2e8
	FMulticastInlineDelegate ExitedDeadzone; // 0x2f8
	FVector2D CurrentInput; // 0x308
	float JoystickDeadzone; // 0x310
	bool DefaultToMouseIfNoJoystick; // 0x314
	int32_t DefaultPlayerIndex; // 0x318
	bool UseDeadzoneEvents; // 0x31c
	USoundBase* SelectionChangedSound; // 0x320
	bool AutoCenterMouse; // 0x328
	bool AutoRotateForUp; // 0x329
	bool bUseCustomInput; // 0x32a
	FVector2D CustomInput; // 0x32c
	bool UseCustomTexture; // 0x334
	UTexture* RadialTexture; // 0x338
	bool UseCustomColors; // 0x340
	FLinearColor InnterRingColor; // 0x344
	FLinearColor OuterRingColor; // 0x354
	FLinearColor RingMainColor; // 0x364
	FLinearColor UnhighlightColor; // 0x374
	FVector2D CorrectionVector; // 0x384
	bool bForceSetIndex; // 0x38c
};

struct ABM_WallTriaLow_01_C : At_LocationCraftActor_C {
	USFPSACBaseCollision* SFPSACBaseCollision; // 0x358
	USFPSACSnapComponent* SFPSACSnap; // 0x360
};

struct UProgressBar : UWidget {
	FProgressBarStyle WidgetStyle; // 0x108
	USlateWidgetStyleAsset* Style; // 0x2a8
	USlateBrushAsset* BackgroundImage; // 0x2b0
	USlateBrushAsset* FillImage; // 0x2b8
	USlateBrushAsset* MarqueeImage; // 0x2c0
	float percent; // 0x2c8
	EProgressBarFillType BarFillType; // 0x2cc
	bool bIsMarquee; // 0x2cd
	FVector2D BorderPadding; // 0x2d0
	FDelegate PercentDelegate; // 0x2d8
	FLinearColor FillColorAndOpacity; // 0x2e8
	FDelegate FillColorAndOpacityDelegate; // 0x2f8
};

struct Aweapmf_DTK_5-7x28_01_C : At_MuzzleAttachement_C {
	USceneComponent* Muzzle; // 0x390
};

struct UHierarchicalLODSetup : UObject {
	TArray<FHierarchicalSimplification> HierarchicalLODSetup; // 0x28
	TSoftObjectPtr<UMaterialInterface> OverrideBaseMaterial; // 0x38
};

struct USFPSUseObjectHandler : UObject {
	UUserWidget* FUseObjectForm; // 0x28
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

struct UARQRCodeComponent : UARComponent {
	FARQRCodeUpdatePayload ReplicatedPayload; // 0x280
};

struct Aweapmf_flashlight_01_C : At_HandguardDeviceLeft_C {
	UStaticMeshComponent* Glow; // 0x358
	USpotLightComponent* Light; // 0x360
};

struct UParticleModuleSourceMovement : UParticleModuleLocationBase {
	FRawDistributionVector SourceMovementScale; // 0x30
};

struct Arecoveryitem_medikit_medx_C : At_RecoveryItem_C {
	float Timer; // 0x420
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
	char sRGB : 1; // 0x85
	char bNoTiling : 1; // 0x85
	char VirtualTextureStreaming : 1; // 0x85
	char CompressionYCoCg : 1; // 0x85
	char bNotOfflineProcessed : 1; // 0x85
	char bAsyncResourceReleaseHasBeenStarted : 1; // 0x85
	TArray<UAssetUserData*> AssetUserData; // 0x88
};

struct UHapticFeedbackEffect_Buffer : UHapticFeedbackEffect_Base {
	TArray<char> Amplitudes; // 0x28
	int32_t SampleRate; // 0x38
};

struct Aweapmf_silencer_556x45_01_C : At_MuzzleAttachement_C {
	USceneComponent* Muzzle; // 0x390
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

struct UTexture2DDynamic : UTexture {
	EPixelFormat Format; // 0x180
};

struct UCheatManager : UObject {
	ADebugCameraController* DebugCameraControllerRef; // 0x28
	ADebugCameraController* DebugCameraControllerClass; // 0x30
	TArray<UCheatManagerExtension*> CheatManagerExtensions; // 0x78
};

struct UMaterialExpressionDDX : UMaterialExpression {
	FExpressionInput Value; // 0x40
};

struct UMaterialExpressionShadingModel : UMaterialExpression {
	EMaterialShadingModel ShadingModel; // 0x40
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

struct UfrmAdminPanelPlayer_C : USFPSUserWidget_AdminPanel_Player {
	UButton* btnSelected; // 0x2b8
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

struct USoundNode : UObject {
	TArray<USoundNode*> ChildNodes; // 0x28
};

struct AOnlineBeaconHostObject : AActor {
	FString BeaconTypeName; // 0x220
	AOnlineBeaconClient* ClientBeaconActorClass; // 0x230
	TArray<AOnlineBeaconClient*> ClientActors; // 0x238
};

struct AOnlineBeaconHost : AOnlineBeacon {
	int32_t ListenPort; // 0x250
	TArray<AOnlineBeaconClient*> ClientActors; // 0x258
};

struct USoundSimple : USoundBase {
	TArray<FSoundVariation> Variations; // 0x170
	USoundWave* SoundWave; // 0x180
};

struct UStaticMeshComponent : UMeshComponent {
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

struct UGameplayTaskResource : UObject {
	int32_t ManualResourceID; // 0x28
	int8_t AutoResourceID; // 0x2c
	char bManuallySetID : 1; // 0x30
};

struct At_HandguardDeviceLeft_C : ASFPSWeaponMF_HandguardDeviceLeft {
	UBoxComponent* Trace; // 0x348
	UStaticMeshComponent* Mesh; // 0x350
};

struct UEdGraph : UObject {
	UEdGraphSchema* Schema; // 0x28
	TArray<UEdGraphNode*> Nodes; // 0x30
	char bEditable : 1; // 0x40
	char bAllowDeletion : 1; // 0x40
	char bAllowRenaming : 1; // 0x40
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

struct USFPSACSpawner : USceneComponent {
	USFPSACRoute* RouteComponent; // 0x1f8
	bool bIsPlayerSpawner; // 0x200
	TArray<FSFPSACSpawnerCharacterGroup> CharacterGroups; // 0x208
	ASFPSRoute* RouteActor; // 0x218
	int32_t RouteStartWaypoint; // 0x220
	int32_t RouteDirection; // 0x224
	bool bRouteChaotic; // 0x228
	USFPSAIConfig* AIConfig; // 0x230
	USFPSAISenseConfig_Sight* SenseConfig_Sight; // 0x238
	USFPSAISenseConfig_Hearing* SenseConfig_Hearing; // 0x240
	ASFPSAIHearingVolume* HearingVolume; // 0x248
	FVector LookAroundOrigin; // 0x250
	FVector SpawnLocationOffset; // 0x25c
	FMulticastInlineDelegate OnSpawned; // 0x268
};

struct UPhononOcclusionSourceSettings : UOcclusionPluginSourceSettingsBase {
	EIplDirectOcclusionMode DirectOcclusionMode; // 0x28
	EIplDirectOcclusionMethod DirectOcclusionMethod; // 0x29
	float DirectOcclusionSourceRadius; // 0x2c
	bool DirectAttenuation; // 0x30
	bool AirAbsorption; // 0x31
};

struct UBTTask_BlueprintBase : UBTTaskNode {
	AAIController* AIOwner; // 0x70
	AActor* ActorOwner; // 0x78
	FIntervalCountdown TickInterval; // 0x80
	char bShowPropertyDetails : 1; // 0xa0
};

struct UEdGraphNode_Documentation : UEdGraphNode {
	FString Link; // 0x98
	FString Excerpt; // 0xa8
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

struct ASFPSRepTestActor : AActor {
	int32_t GenInterval; // 0x238
	int32_t CodeRepValue; // 0x23c
};

struct UPhononSpatializationSourceSettings : USpatializationPluginSourceSettingsBase {
	EIplSpatializationMethod SpatializationMethod; // 0x28
	EIplHrtfInterpolationMethod HrtfInterpolationMethod; // 0x29
};

struct USFPSAnimEvent_PlaySound : UAnimNotify_PlaySound {
	bool bOnlyLocalPlayerPlay; // 0x58
	bool bCMobCanPlay; // 0x59
	bool bUseMaxSoundDistance; // 0x5a
};

struct UInterpTrackInstVisibility : UInterpTrackInst {
	EVisibilityTrackAction Action; // 0x28
	float LastUpdatePosition; // 0x2c
};

struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	FGuid ExpressionGUID; // 0x40
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

struct UDcxVehicleDriveComponentTank : UDcxVehicleDriveComponent {
	EDcxVehicleDriveControlModelTank DriveModel; // 0x3b8
};

struct USlateSettings : UObject {
	bool bExplicitCanvasChildZOrder; // 0x28
};

struct USFPSACBaseInventory : UActorComponent {
	ASFPSBaseItem* FJacket; // 0xb8
	ASFPSBaseItem* FTrous; // 0xc0
	ASFPSBaseItem* FVest; // 0xc8
	ASFPSBaseItem* FBackPack; // 0xd0
	ASFPSWeapon* FWeapon0; // 0xd8
	ASFPSWeapon* FWeapon1; // 0xe0
	ASFPSWeapon* FWeapon2; // 0xe8
	ASFPSBaseItem* FHelmet; // 0xf0
	ASFPSBaseItem* FMask; // 0xf8
	ASFPSBaseItem* FGlasses; // 0x100
	ASFPSBaseItem* FGloves; // 0x108
	ASFPSBaseItem* FGadget0; // 0x110
	ASFPSBaseItem* FGadget1; // 0x118
	ASFPSBaseItem* FGadget2; // 0x120
	ASFPSBaseItem* FGadget3; // 0x128
	TArray<FSFPSQuickSlotParams> QuickSlots; // 0x130
	int32_t ActiveQuickSlot; // 0x140
	int32_t LastActiveWeaponQuickSlot; // 0x144
	bool bHoodOnHead; // 0x148
};

struct USFPSPhysMatSoundTable : UObject {
	USoundCue* StepCue; // 0x28
	USoundCue* StepCueAdd; // 0x30
	bool bWaterPM; // 0x38
	USoundCue* CarTiresCue; // 0x40
	USoundCue* AXHit; // 0x48
	USoundCue* CrowbarHit; // 0x50
	USoundCue* GunHit; // 0x58
	USoundCue* HandHit; // 0x60
	USoundCue* KnifeHit; // 0x68
	USoundCue* BatHit; // 0x70
	USoundCue* ButtHit; // 0x78
	bool bPlayHitAdd; // 0x80
	bool bPlayHitAddOnMove; // 0x81
	USoundCue* AddHit; // 0x88
	USoundCue* ExplHit; // 0x90
	USoundCue* VehicleHit; // 0x98
	UParticleSystem* HitParticle; // 0xa0
	UParticleSystem* HitSteelArmParticle; // 0xa8
	UParticleSystem* HitArmorParticle; // 0xb0
	UParticleSystem* HitArmorSteelArmParticle; // 0xb8
	UParticleSystem* HitChrFallParticle; // 0xc0
	bool bAlwaysPlayHitChrStepParticle; // 0xc8
	UParticleSystem* HitChrStepParticle; // 0xd0
	UParticleSystem* HitVehicleParticle; // 0xd8
	FSFPSDecalData DecalImpactGun; // 0xe0
	FSFPSDecalData DecalImpactKnife; // 0xf8
	FSFPSDecalData DecalImpactExpl; // 0x110
	USoundCue* SlideCue; // 0x128
	USoundCue* BodyFall; // 0x130
};

struct UGameplayTask : UObject {
	FName InstanceName; // 0x30
	ETaskResourceOverlapPolicy ResourceOverlapPolicy; // 0x3a
	UGameplayTask* ChildTask; // 0x60
};

struct AShell_SG0_C : ASFPSShell {
	UStaticMeshComponent* Mesh; // 0x250
};

struct ULandscapeSplineSegment : UObject {
	FLandscapeSplineSegmentConnection Connections[0x2]; // 0x28
	FInterpCurveVector SplineInfo; // 0x58
	TArray<FLandscapeSplineInterpPoint> Points; // 0x70
	FBox Bounds; // 0x80
	TArray<USplineMeshComponent*> LocalMeshComponents; // 0xa0
};

struct UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints {
	FAIDataProviderFloatValue GridSize; // 0x80
	FAIDataProviderFloatValue SpaceBetween; // 0xb8
	UEnvQueryContext* GenerateAround; // 0xf0
};

struct UParticleModuleSizeScaleBySpeed : UParticleModuleSizeBase {
	FVector2D SpeedScale; // 0x30
	FVector2D MaxScale; // 0x38
};

struct USFPSACItemInventory : UActorComponent {
	int32_t FInventorySize; // 0xb0
	int32_t BackPack_WeaponTransferCount; // 0xb4
	TArray<AActor*> FInventory; // 0xb8
};

struct ASFPSSteelArms : ASFPSWeapon {
	USceneComponent* DamagePoint0Ref; // 0x4f0
	USceneComponent* DamagePoint1Ref; // 0x4f8
	USceneComponent* DamagePoint2Ref; // 0x500
	UAnimMontage* CharacterShotAnimLeftStand; // 0x5e0
	UAnimMontage* CharacterShotAnimRightStand; // 0x5e8
	UAnimMontage* CharacterShotAnimLeftRun; // 0x5f0
	UAnimMontage* CharacterShotAnimRightRun; // 0x5f8
	USFPSCameraShake* DamageShake; // 0x600
	float BaseDamage; // 0x608
	bool bAddDebugInfoToLog; // 0x60c
};

struct USplineMeshComponent : UStaticMeshComponent {
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

struct UForceFeedbackAttenuation : UObject {
	FForceFeedbackAttenuationSettings Attenuation; // 0x28
};

struct UParticleModuleVectorFieldScaleOverLife : UParticleModuleVectorFieldBase {
	UDistributionFloat* VectorFieldScaleOverLife; // 0x30
	FRawDistributionFloat VectorFieldScaleOverLifeRaw; // 0x38
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

struct UMovieSceneCameraShakeSection : UMovieSceneSection {
	FMovieSceneCameraShakeSectionData ShakeData; // 0xe8
	UCameraShakeBase* ShakeClass; // 0x108
	float PlayScale; // 0x110
	ECameraShakePlaySpace PlaySpace; // 0x114
	FRotator UserDefinedPlaySpace; // 0x118
};

struct ASFPSWeaponMF_HandguardDeviceLeft : ASFPSBaseWeaponMF {
	bool bHasSpotLight; // 0x340
	bool bUsedSpecialMount; // 0x341
	bool bDeviceEnabled; // 0x342
};

struct UBTTask_PlaySound : UBTTaskNode {
	USoundCue* SoundToPlay; // 0x70
};

struct UARPoseComponent : UARComponent {
	FARPoseUpdatePayload ReplicatedPayload; // 0x280
};

struct UMaterialExpressionLogarithm2 : UMaterialExpression {
	FExpressionInput X; // 0x40
};

struct UCompositeDataTable : UDataTable {
	TArray<UDataTable*> ParentTables; // 0xb0
	TArray<UDataTable*> OldParentTables; // 0xc0
};

struct UParticleModuleLocationPrimitiveSphere_Seeded : UParticleModuleLocationPrimitiveSphere {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xe0
};

struct USoundNodeSoundClass : USoundNode {
	USoundClass* SoundClassOverride; // 0x48
};

struct UDatasmithCineCameraActorTemplate : UDatasmithObjectTemplate {
	FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings; // 0x30
};

struct UUniformScalar : UFieldNodeFloat {
	float Magnitude; // 0xb0
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

struct UMaterialExpressionPower : UMaterialExpression {
	FExpressionInput Base; // 0x40
	FExpressionInput Exponent; // 0x54
	float ConstExponent; // 0x68
};

struct USourceEffectEnvelopeFollowerPreset : USoundEffectSourcePreset {
	FSourceEffectEnvelopeFollowerSettings Settings; // 0x9c
};

struct UMediaPlaylist : UObject {
	TArray<UMediaSource*> Items; // 0x28
};

struct ULevelCapture : UMovieSceneCapture {
	bool bAutoStartCapture; // 0x220
	FGuid PrerequisiteActorId; // 0x22c
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
	TArray<UObject*> CachedReferencedTextures; // 0x2d8
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

struct ALandscapeMeshProxyActor : AActor {
	ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x220
};

struct UWaveScalar : UFieldNodeFloat {
	float Magnitude; // 0xb0
	FVector Position; // 0xb4
	float Wavelength; // 0xc0
	float Period; // 0xc4
	EWaveFunctionType Function; // 0xc8
	EFieldFalloffType Falloff; // 0xc9
};

struct UMaterialExpressionRotator : UMaterialExpression {
	FExpressionInput Coordinate; // 0x40
	FExpressionInput Time; // 0x54
	float CenterX; // 0x68
	float CenterY; // 0x6c
	float Speed; // 0x70
	uint32_t ConstCoordinate; // 0x74
};

struct UInterpTrackLinearColorProp : UInterpTrackLinearColorBase {
	FName PropertyName; // 0x90
};

struct UBTTask_WaitBlackboardTime : UBTTask_Wait {
	FBlackboardKeySelector BlackboardKey; // 0x78
};

struct USoundNodeConcatenator : USoundNode {
	TArray<float> InputVolume; // 0x48
};

struct USoundWave : USoundBase {
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

struct USFPSACRoute : USceneComponent {
	TArray<FVector> Waypoints; // 0x1f8
};

struct USoundEffectSourcePresetChain : UObject {
	TArray<FSourceEffectChainEntry> Chain; // 0x28
	char bPlayEffectChainTails : 1; // 0x38
};

struct APlayerStart : ANavigationObjectBase {
	FName PlayerStartTag; // 0x248
};

struct UParticleSystemComponent : UFXSystemComponent {
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

struct UWaveOscillatorCameraShakePattern : USimpleCameraShakePattern {
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

struct UQuitMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UTreeView : UListView {
	FDelegate BP_OnGetItemChildren; // 0x378
	FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0x388
};

struct UInterpTrackInstBoolProp : UInterpTrackInstProperty {
	bool ResetBool; // 0x60
};

struct UGizmoComponentHitTarget : UObject {
	UPrimitiveComponent* Component; // 0x30
};

struct UNavCollisionBase : UObject {
	char bIsDynamicObstacle : 1; // 0x28
};

struct UMaterialExpressionVectorNoise : UMaterialExpression {
	FExpressionInput Position; // 0x40
	EVectorNoiseFunction NoiseFunction; // 0x54
	int32_t Quality; // 0x58
	char bTiling : 1; // 0x5c
	uint32_t TileSize; // 0x60
};

struct UScaleBox : UContentWidget {
	EStretch Stretch; // 0x120
	EStretchDirection StretchDirection; // 0x121
	float UserSpecifiedScale; // 0x124
	bool IgnoreInheritedScale; // 0x128
};

struct At_Other_C : ASFPSBaseItem {
	UBoxComponent* Trace; // 0x310
	UStaticMeshComponent* Mesh; // 0x318
};

struct UVariantSet : UObject {
	FText DisplayText; // 0x28
	bool bExpanded; // 0x58
	TArray<UVariant*> Variants; // 0x60
	UTexture2D* Thumbnail; // 0x70
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
	TArray<UChannel*> ChannelsToTick; // 0x1510
};

struct UVariantObjectBinding : UObject {
	FString CachedActorLabel; // 0x28
	FSoftObjectPath ObjectPtr; // 0x38
	LazyObjectProperty LazyObjectPtr; // 0x50
	TArray<UPropertyValue*> CapturedProperties; // 0x70
	TArray<FFunctionCaller> FunctionCallers; // 0x80
};

struct ATriggerBase : AActor {
	UShapeComponent* CollisionComponent; // 0x220
};

struct UDatasmithLandscapeTemplate : UDatasmithObjectTemplate {
	UMaterialInterface* LandscapeMaterial; // 0x30
	int32_t StaticLightingLOD; // 0x38
};

struct UMaterialExpressionDecalMipmapLevel : UMaterialExpression {
	FExpressionInput TextureSize; // 0x40
	float ConstWidth; // 0x54
	float ConstHeight; // 0x58
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

struct UDistributionFloatUniform : UDistributionFloat {
	float Min; // 0x38
	float Max; // 0x3c
};

struct UButtonWidgetStyle : USlateWidgetStyleContainerBase {
	FButtonStyle ButtonStyle; // 0x30
};

struct USFPSACTrader : UActorComponent {
	USFPSTradeList* TradeList; // 0xb0
	USFPSTradeList* TradeListRef; // 0xb8
};

struct UPlayerInput : UObject {
	TArray<FKeyBind> DebugExecBindings; // 0x120
	TArray<FName> InvertedAxis; // 0x160
};

struct UStereoLayerShapeEquirect : UStereoLayerShape {
	FBox2D LeftUVRect; // 0x28
	FBox2D RightUVRect; // 0x3c
	FVector2D LeftScale; // 0x50
	FVector2D RightScale; // 0x58
	FVector2D LeftBias; // 0x60
	FVector2D RightBias; // 0x68
};

struct UMovieSceneMaterialTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x90
};

struct UCheckBoxStyleAsset : UObject {
	FCheckBoxStyle CheckBoxStyle; // 0x28
};

struct UMotoSynthPreset : UObject {
	FMotoSynthRuntimeSettings Settings; // 0x28
};

struct USFPSACBaseCollision : UBoxComponent {
	char Collisions[0x16]; // 0x478
};

struct UABP_weapon_firearms_smg_Bizon_C : USFPSWeaponAnimInstance_AR {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	FAnimNode_Root AnimGraphNode_Root; // 0x2e8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x318
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x360
};

struct URig : UObject {
	TArray<FTransformBase> TransformBases; // 0x30
	TArray<FNode> Nodes; // 0x40
};

struct UProceduralFoliageTile : UObject {
	UProceduralFoliageSpawner* FoliageSpawner; // 0x28
	TArray<FProceduralFoliageInstance> InstancesArray; // 0xd0
};

struct UPaperTerrainComponent : UPrimitiveComponent {
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

struct UMovieSceneEntitySystem : UObject {
	UMovieSceneEntitySystemLinker* Linker; // 0x28
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
	char bSupportRayTracing : 1; // 0x188
	TArray<UMorphTarget*> MorphTargets; // 0x190
	UAnimInstance* PostProcessAnimBlueprint; // 0x318
	TArray<UClothingAssetBase*> MeshClothingAssets; // 0x320
	FSkeletalMeshSamplingInfo SamplingInfo; // 0x330
	TArray<UAssetUserData*> AssetUserData; // 0x360
	TArray<USkeletalMeshSocket*> Sockets; // 0x370
	TArray<FSkinWeightProfileInfo> SkinWeightProfiles; // 0x390
};

struct ULevelSequencePlayer : UMovieSceneSequencePlayer {
	FMulticastInlineDelegate OnCameraCut; // 0x4e8
};

struct Aweapmf_DTK_545x39_02_C : At_MuzzleAttachement_C {
	USceneComponent* Muzzle; // 0x390
};

struct UPointLightComponent : ULocalLightComponent {
	char bUseInverseSquaredFalloff : 1; // 0x340
	float LightFalloffExponent; // 0x344
	float SourceRadius; // 0x348
	float SoftSourceRadius; // 0x34c
	float SourceLength; // 0x350
};

struct USFPSACDoor : UActorComponent {
	float OpenCloseTime; // 0x118
	FVector DirectionVector; // 0x11c
	bool bIgnoreCharacterPosition; // 0x128
	bool bInvertForvardIfIgnoreCharacterPosition; // 0x129
	FSFPSACDoorParams DoorParams; // 0x12a
	USoundCue* DoorCreakCue; // 0x130
	USoundCue* DoorLockCue; // 0x138
	USoundCue* DoorSlamCue; // 0x140
	USoundCue* HandleCue; // 0x148
};

struct UBlackboardKeyType_Class : UBlackboardKeyType {
	UObject* BaseClass; // 0x30
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

struct ULeaderboardQueryCallbackProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UGeometryCacheCodecRaw : UGeometryCacheCodecBase {
	int32_t DummyProperty; // 0x38
};

struct UInteractiveTool : UObject {
	UInputBehaviorSet* InputBehaviors; // 0x48
	TArray<UObject*> ToolPropertyObjects; // 0x50
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

struct AFieldSystemActor : AActor {
	UFieldSystemComponent* FieldSystemComponent; // 0x220
};

struct UScrollBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
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

struct UMovieSceneObjectPropertyTrack : UMovieScenePropertyTrack {
	UObject* PropertyClass; // 0xc8
};

struct UMovieSceneTrackInstance : UObject {
	UObject* AnimatedObject; // 0x28
	bool bIsMasterTrackInstance; // 0x30
	UMovieSceneEntitySystemLinker* Linker; // 0x38
	TArray<FMovieSceneTrackInstanceInput> Inputs; // 0x40
};

struct UMovieSceneParameterSection : UMovieSceneSection {
	TArray<FBoolParameterNameAndCurve> BoolParameterNamesAndCurves; // 0xe8
	TArray<FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // 0xf8
	TArray<FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves; // 0x108
	TArray<FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // 0x118
	TArray<FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // 0x128
	TArray<FTransformParameterNameAndCurves> TransformParameterNamesAndCurves; // 0x138
};

struct USFPSInventoryHandler : UObject {
	UUserWidget* FormInventory; // 0x570
	USFPSUserWidget_GroundItem* FormGroundItem; // 0x578
	USFPSUserWidget_PopupMenuItem* FormPopupMenuItem; // 0x580
	USFPSUserWidget_CraftRolloutMan* FormCraftGroup; // 0x588
	USFPSUserWidget_CraftRollout* FormCraftItem; // 0x590
	USFPSUserWidget_TraderItem* FormTradeItem; // 0x598
	UUserWidget* frmHintPanelUse; // 0x5a0
	UUserWidget* frmHintPanelMove; // 0x5a8
	UUserWidget* frmHintPanelDrop; // 0x5b0
	TArray<UPaperSprite*> FPopupMenuIcons; // 0x5b8
};

struct USFPSItemSet : UObject {
	TArray<FSFPSItemSetElement> Elements; // 0x28
	UDataTable* DataTable; // 0x38
};

struct UMaterialExpressionArccosineFast : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UParticleModuleKillBox : UParticleModuleKillBase {
	FRawDistributionVector LowerLeftCorner; // 0x30
	FRawDistributionVector UpperRightCorner; // 0x78
	char bAbsolute : 1; // 0xc0
	char bKillInside : 1; // 0xc0
	char bAxisAlignedAndFixedSize : 1; // 0xc0
};

struct USFPSSingleton : UObject {
	USFPSCraftLibrary* CraftLibrary; // 0x28
	USFPSActorLibrary* ActorLibrary; // 0x30
	USFPSAdminItemList* AdminItemList; // 0x38
	USFPSServerStatThreadManager* ServerStatThreadManager; // 0x40
	TArray<AActor*> GreenAreas; // 0x48
	USFPSCraftLibrary* CraftLibraryBP; // 0x58
	USFPSActorLibrary* ActorLibraryBP; // 0x60
	USFPSAdminItemList* AdminItemListBP; // 0x68
	FSFPSCharacterDefaultBodyMeshes CharacterDefaultBodyMeshes; // 0x70
	TArray<FSFPSCharacterDefaultMeshes> CharacterDefaultMeshes; // 0x90
	FSFPSMaterialPair UnderwearMaterials[0x2]; // 0xa0
	TArray<FSFPSShotRandomParams> ShotRandomParams; // 0xc0
	FSFPSMissionStaticParamsList MissionStaticParams; // 0xd0
	FSFPSItemSetStruct CharacterDefaultTrousers; // 0xe0
	float FatigueRecover; // 0xf8
	float FatigueRun; // 0xfc
	float FatigueSprint; // 0x100
	float FatigueShotRecover; // 0x104
	FSFPSSmallArmsFatigue FatigueWeaponTypes[0x6]; // 0x108
	float HoldBreath_SpeedStart; // 0x168
	float HoldBreath_SpeedStop; // 0x16c
	float HoldBreath_AsphyxiaSpeed; // 0x170
	float HoldBreath_AsphyxiaFatigueSpeed; // 0x174
	float HoldBreath_OxygenationSpeed; // 0x178
	float HoldBreath_FatigueIncreaseSpeed; // 0x17c
};

struct ABM_WallLow_01_C : At_LocationCraftActor_C {
	USFPSACBaseCollision* SFPSACBaseCollision; // 0x358
	USFPSACSnapComponent* SFPSACSnap; // 0x360
};

struct UMaterialExpressionCustom : UMaterialExpression {
	FString code; // 0x40
	ECustomMaterialOutputType OutputType; // 0x50
	FString Description; // 0x58
	TArray<FCustomInput> Inputs; // 0x68
	TArray<FCustomOutput> AdditionalOutputs; // 0x78
	TArray<FCustomDefine> AdditionalDefines; // 0x88
	TArray<FString> IncludeFilePaths; // 0x98
};

struct UfrmCraftGroup_C : USFPSUserWidget_CraftRolloutMan {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b8
	UCheckBox* btnOpen; // 0x2c0
	UImage* imgBackground0; // 0x2c8
	UImage* imgIcon; // 0x2d0
	UScrollBox* sbMain; // 0x2d8
};

struct UBTTask_GameplayTaskBase : UBTTaskNode {
	char bWaitForGameplayTask : 1; // 0x70
};

struct UMaterialExpressionStaticBool : UMaterialExpression {
	char Value : 1; // 0x40
};

struct ANavMeshBoundsVolume : AVolume {
	FNavAgentSelector SupportedAgents; // 0x258
};

struct ABM_Wall_01_C : At_LocationCraftActor_C {
	USFPSACBaseCollision* SFPSACBaseCollision; // 0x358
	USFPSACSnapComponent* SFPSACSnap; // 0x360
};

struct UMaterialExpressionCollectionParameter : UMaterialExpression {
	UMaterialParameterCollection* Collection; // 0x40
	FName ParameterName; // 0x48
	FGuid ParameterId; // 0x50
};

struct UAISense : UObject {
	float DefaultExpirationAge; // 0x28
	EAISenseNotifyType NotifyType; // 0x2c
	char bWantsNewPawnNotification : 1; // 0x30
	char bAutoRegisterAllPawnsAsSources : 1; // 0x30
	UAIPerceptionSystem* PerceptionSystemInstance; // 0x38
};

struct UTemplateSequence : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x60
	TSoftClassPtr<UObject> BoundActorClass; // 0x68
	TSoftObjectPtr<AActor> BoundPreviewActor; // 0x90
	TMap<FGuid, FName> BoundActorComponents; // 0xb8
};

struct UMaterialExpressionArctangent2 : UMaterialExpression {
	FExpressionInput Y; // 0x40
	FExpressionInput X; // 0x54
};

struct APaperSpriteActor : AActor {
	UPaperSpriteComponent* RenderComponent; // 0x220
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

struct USFPSSettingsHandler : UObject {
	UUserWidget* FormSettings; // 0x7b0
	USFPSUserWidget_SettingsHotKey* FormHotKey; // 0x7b8
};

struct UMaterialExpressionTextureSampleParameterSubUV : UMaterialExpressionTextureSampleParameter2D {
	char bBlend : 1; // 0x80
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

struct ULightMapVirtualTexture2D : UTexture2D {
	TArray<int8_t> TypeToLayer; // 0x1a0
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

struct UEnvQueryTest_Volume : UEnvQueryTest {
	UEnvQueryContext* VolumeContext; // 0x1f8
	AVolume* VolumeClass; // 0x200
	char bDoComplexVolumeTest : 1; // 0x208
};

struct UBorderSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
	FAppleImageUtilsImageConversionResult ConversionResult; // 0x60
};

struct UInterpTrackDirector : UInterpTrack {
	TArray<FDirectorTrackCut> CutTrack; // 0x70
	char bSimulateCameraCutsOnClients : 1; // 0x80
};

struct AGameSession : AInfo {
	int32_t MaxSpectators; // 0x220
	int32_t MaxPlayers; // 0x224
	int32_t MaxPartySize; // 0x228
	char MaxSplitscreensPerConnection; // 0x22c
	bool bRequiresPushToTalk; // 0x22d
	FName SessionName; // 0x230
};

struct USFPSAI_TLookAtTarget : UBTTaskNode {
	FBlackboardKeySelector Target; // 0x70
};

struct ULevelSequenceProjectSettings : UDeveloperSettings {
	bool bDefaultLockEngineToDisplayRate; // 0x38
	FString DefaultDisplayRate; // 0x40
	FString DefaultTickResolution; // 0x50
	EUpdateClockSource DefaultClockSource; // 0x60
};

struct Aweapon_firearms_rifle_famas_C : At_FireArm_C {
	UStaticMeshComponent* DTK; // 0x7e0
	UStaticMeshComponent* SightClose; // 0x7e8
	UStaticMeshComponent* DeviceLeftMount; // 0x7f0
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x7f8
	UStaticMeshComponent* MagazineFull; // 0x800
	UStaticMeshComponent* MagazineEmpty; // 0x808
};

struct UABP_weapon_firearms_smg_ump_C : USFPSWeaponAnimInstance_AR {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	FAnimNode_Root AnimGraphNode_Root; // 0x2e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x318
	FAnimNode_Slot AnimGraphNode_Slot; // 0x398
};

struct ASFPSBaseLocationCraftItem : ASFPSActor {
	TWeakObjectPtr<UAudioComponent> LocationItemAudioComponent; // 0x22c
	ASFPSBaseItem* CraftKit; // 0x270
	ESFPSBaseModuleType ModuleType; // 0x278
	bool bCanBeDestroyed; // 0x279
	bool bDestroyObjectsOnTop; // 0x27a
	bool bCanBeDestroyedByObject; // 0x27b
	bool bNeedSave; // 0x27c
	FVector BaseCenter; // 0x280
	float DefaultDist; // 0x28c
	float DefaultAngle; // 0x290
	float DefaultHeight; // 0x294
	bool bRequiresSnap; // 0x298
	bool bRequiresAnchors; // 0x299
	bool bRequiresBlock; // 0x29a
	bool bRequiresBaseSphere; // 0x29b
	bool bRequiresBaseBlockTest; // 0x29c
	bool bRequiresPivotSnap; // 0x29d
	bool bRequiresCapsuleTest; // 0x29e
	bool bRequiresWaterTest; // 0x29f
	FName BaseBlockTestTag; // 0x2a0
	TArray<FVector> AnchorPoints; // 0x2d8
	float AnchorHeight; // 0x2e8
	int32_t AnchorsAboveGround; // 0x2ec
	TArray<FVector> BaseSpherePoints; // 0x2f0
	TArray<FVector> LOSPoints; // 0x300
	float LifeSpanOverride; // 0x310
	bool bCreateKraftKitAfterDelete; // 0x314
	bool bUseLock; // 0x315
	bool bLockPasswordValid; // 0x338
	bool bHighlightByOwner; // 0x339
	USoundCue* LocationCraftItemCue; // 0x340
	char RemoveTime; // 0x349
};

struct USFPSWeaponAnimInstance_SG : USFPSBaseWeaponAnimInstance {
	UStaticMeshComponent* Shell; // 0x2e0
	UStaticMeshComponent* LeftShellFull; // 0x2e8
	UStaticMeshComponent* LeftShellEmpty; // 0x2f0
	UStaticMeshComponent* RightShellFull; // 0x2f8
	UStaticMeshComponent* RightShellEmpty; // 0x300
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

struct UInputAxisKeyDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputAxisKeyDelegateBinding> InputAxisKeyDelegateBindings; // 0x28
};

struct UMaterialExpressionOneMinus : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct Aweapon_firearms_rifle_steyraug_C : At_FireArm_C {
	UStaticMeshComponent* DTK; // 0x7e0
	UStaticMeshComponent* DeviceLeftMount; // 0x7e8
	UStaticMeshComponent* SightClose; // 0x7f0
	UStaticMeshComponent* SightOpen; // 0x7f8
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x800
	UStaticMeshComponent* MagazineFull; // 0x808
	UStaticMeshComponent* MagazineEmpty; // 0x810
};

struct UABP_weapon_firearms_rifle_hunter85_C : USFPSWeaponAnimInstance_SR {
	FPointerToUberGraphFrame UberGraphFrame; // 0x300
	FAnimNode_Root AnimGraphNode_Root; // 0x308
	FAnimNode_Slot AnimGraphNode_Slot; // 0x338
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x380
};

struct UNavigationGraphNodeComponent : USceneComponent {
	FNavGraphNode Node; // 0x1f8
	UNavigationGraphNodeComponent* NextNodeComponent; // 0x210
	UNavigationGraphNodeComponent* PrevNodeComponent; // 0x218
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

struct UParticleModuleColorOverLife : UParticleModuleColorBase {
	FRawDistributionVector ColorOverLife; // 0x30
	FRawDistributionFloat AlphaOverLife; // 0x78
	char bClampAlpha : 1; // 0xa8
};

struct ADatasmithSceneActor : AActor {
	UDatasmithScene* Scene; // 0x220
	TMap<FName, TSoftObjectPtr<AActor>> RelatedActors; // 0x228
};

struct USFPSUserWidget_EquipItem : UCanvasPanel {
	TWeakObjectPtr<ASFPSBaseItem> TagObject; // 0x130
	ESFPSItemSlotType FItemSlotType; // 0x138
	UObject* SpriteView; // 0x140
};

struct UMoviePlayerSettings : UObject {
	bool bWaitForMoviesToComplete; // 0x28
	bool bMoviesAreSkippable; // 0x29
	TArray<FString> StartupMovies; // 0x30
};

struct UBlueprintCore : UObject {
	UObject* SkeletonGeneratedClass; // 0x28
	UObject* GeneratedClass; // 0x30
	bool bLegacyNeedToPurgeSkelRefs; // 0x38
	FGuid BlueprintGuid; // 0x3c
};

struct UModularSynthComponent : USynthComponent {
	int32_t VoiceCount; // 0x6c0
};

struct UAISense_Damage : UAISense {
	TArray<FAIDamageEvent> RegisteredEvents; // 0x80
};

struct UBTTask_RunBehavior : UBTTaskNode {
	UBehaviorTree* BehaviorAsset; // 0x70
};

struct UBTTask_FinishWithResult : UBTTaskNode {
	EBTNodeResult Result; // 0x70
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

struct UMaterialExpressionDeriveNormalZ : UMaterialExpression {
	FExpressionInput InXY; // 0x40
};

struct USingleClickInputBehavior : UAnyButtonInputBehavior {
	bool HitTestOnRelease; // 0xc0
};

struct UBTDecorator_IsBBEntryOfClass : UBTDecorator_BlackboardBase {
	UObject* TestClass; // 0x90
};

struct UAnimNotify_PlayMontageNotifyWindow : UAnimNotifyState {
	FName NotifyName; // 0x30
};

struct UMovieSceneFadeSection : UMovieSceneSection {
	FMovieSceneFloatChannel FloatCurve; // 0xe8
	FLinearColor FadeColor; // 0x188
	char bFadeAudio : 1; // 0x198
};

struct UBTTask_SetTagCooldown : UBTTaskNode {
	FGameplayTag CooldownTag; // 0x70
	bool bAddToExistingDuration; // 0x78
	float CooldownDuration; // 0x7c
};

struct UBTTask_BlackboardBase : UBTTaskNode {
	FBlackboardKeySelector BlackboardKey; // 0x70
};

struct ABMF_Claim_C : At_LocationCraftActor_C {
	USphereComponent* Sphere; // 0x358
};

struct UMovieSceneActorReferenceSection : UMovieSceneSection {
	FMovieSceneActorReferenceData ActorReferenceData; // 0xe8
	FIntegralCurve ActorGuidIndexCurve; // 0x198
	TArray<FString> ActorGuidStrings; // 0x218
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

struct AARSkyLight : ASkyLight {
	UAREnvironmentCaptureProbe* CaptureProbe; // 0x230
};

struct ABox_mil_05_C : AActor {
	UStaticMeshComponent* Box_military_cap_01; // 0x220
	UStaticMeshComponent* Box_military_01; // 0x228
};

struct UFormSettings_C : UUserWidget {
	UComboBoxString* cbVideo_Mode; // 0x268
	UComboBoxString* cbVideo_Resolution; // 0x270
};

struct UMaterialExpressionSkyAtmosphereLightIlluminance : UMaterialExpression {
	int32_t LightIndex; // 0x40
	FExpressionInput WorldPosition; // 0x44
};

struct UVectorFieldComponent : UPrimitiveComponent {
	UVectorField* VectorField; // 0x450
	float Intensity; // 0x458
	float Tightness; // 0x45c
	char bPreviewVectorField : 1; // 0x460
};

struct UMovieScenePropertySystem : UMovieSceneEntitySystem {
	UMovieScenePropertyInstantiatorSystem* InstantiatorSystem; // 0x48
};

struct Ascope_col_eotech_C : At_Sight_C {
	UStaticMeshComponent* eotech_collimator; // 0x3d0
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

struct UPlatformInterfaceWebResponse : UObject {
	FString OriginalURL; // 0x28
	int32_t ResponseCode; // 0x38
	int32_t Tag; // 0x3c
	FString StringResponse; // 0x40
	TArray<char> BinaryResponse; // 0x50
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

struct ALevelScriptActor : AActor {
	char bInputEnabled : 1; // 0x220
};

struct UMovieSceneBuiltInEasingFunction : UObject {
	EMovieSceneBuiltInEasing Type; // 0x30
};

struct UARTexture : UTexture {
	EARTextureType TextureType; // 0x178
	float Timestamp; // 0x17c
	FGuid ExternalTextureGuid; // 0x180
	FVector2D Size; // 0x190
};

struct ASFPSPlayerState : APlayerState {
	FSFPSLoginData LoginData; // 0x320
};

struct UUMGSequenceTickManager : UObject {
	TSet<TWeakObjectPtr<UUserWidget>> WeakUserWidgets; // 0x28
	UMovieSceneEntitySystemLinker* Linker; // 0x78
};

struct Aweapon_firearms_sg_mossberg590_C : At_FireArm_C {
	UStaticMeshComponent* DeviceLeftMount; // 0x7e0
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x7e8
	UStaticMeshComponent* SightOpen; // 0x7f0
	UStaticMeshComponent* Shell; // 0x7f8
};

struct ABM_WallDoor_lock_01_C : ABM_WallDoor_01_C {
	UStaticMeshComponent* Base_lock_02; // 0x380
	UStaticMeshComponent* Base_lock_01; // 0x388
};

struct UParticleModuleEventReceiverBase : UParticleModuleEventBase {
	EParticleEventType EventGeneratorType; // 0x30
	FName EventName; // 0x34
};

struct ABM_WallTriaWindow_02_C : At_LocationCraftActor_C {
	USFPSACBaseCollision* SFPSACBaseCollision; // 0x358
	USFPSACSnapComponent* SFPSACSnap; // 0x360
};

struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	FExpressionInput LayerUsed; // 0x40
	FExpressionInput LayerNotUsed; // 0x54
	FName ParameterName; // 0x68
	char PreviewUsed : 1; // 0x70
	FGuid ExpressionGUID; // 0x74
};

struct UFormInGameMenu_C : UUserWidget {
	UButton* btnDiscord; // 0x268
	UButton* btnFacebook; // 0x270
	UButton* btnGreenAreaTeleport; // 0x278
	UButton* btnLeaveServer; // 0x280
	UButton* btnQuitGame; // 0x288
	UButton* btnResume; // 0x290
	UButton* btnSettings; // 0x298
	UButton* btnSteam; // 0x2a0
	UButton* btnSuicide; // 0x2a8
	UButton* btnTwitch; // 0x2b0
	UButton* btnTwitter; // 0x2b8
	UButton* btnVK; // 0x2c0
};

struct UParticleModuleMeshRotationRate : UParticleModuleRotationRateBase {
	FRawDistributionVector StartRotationRate; // 0x30
};

struct USourceEffectSimpleDelayPreset : USoundEffectSourcePreset {
	FSourceEffectSimpleDelaySettings Settings; // 0xa8
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

struct UEditableGameplayTagQueryExpression_AnyExprMatch : UEditableGameplayTagQueryExpression {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
};

struct UMainMenu_C : UUserWidget {
	UButton* btnContinue_Steam; // 0x268
	UButton* btnDiscord; // 0x270
	UButton* btnExit; // 0x278
	UButton* btnFacebook; // 0x280
	UButton* btnJoinServer_LoginPassword; // 0x288
	UButton* btnJoinServer_Steam; // 0x290
	UButton* btnSettings; // 0x298
	UButton* btnSteam; // 0x2a0
	UButton* btnTwitch; // 0x2a8
	UButton* btnTwitter; // 0x2b0
	UButton* btnVK; // 0x2b8
};

struct USFPSChatHandler : UObject {
	UUserWidget* FormChat; // 0x110
	USFPSUserWidget_ChatItem* frmChatItem; // 0x118
	USFPSUserWidget_PopupMenuItem* frmPopupMenuItem; // 0x120
	TArray<FString> Blacklist; // 0x138
};

struct UParticleSystemReplay : UObject {
	int32_t ClipIDNumber; // 0x28
};

struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression {
	FName ParameterName; // 0x40
	float PreviewWeight; // 0x48
	FGuid ExpressionGUID; // 0x4c
};

struct Aweapmf_DTK_556x45_02_C : At_MuzzleAttachement_C {
	USceneComponent* Muzzle; // 0x390
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

struct ULandscapeSplinesComponent : UPrimitiveComponent {
	TArray<ULandscapeSplineControlPoint*> ControlPoints; // 0x450
	TArray<ULandscapeSplineSegment*> Segments; // 0x460
	TArray<UMeshComponent*> CookedForeignMeshComponents; // 0x470
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

struct UWrapBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38
	bool bFillEmptySpace; // 0x48
	float FillSpanWhenLessThan; // 0x4c
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct AAfterDeathActor_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UParticleSystemComponent* Fx_fly_01; // 0x228
	USceneComponent* DefaultSceneRoot; // 0x230
	USoundBase* SoundCue; // 0x238
};

struct ASFPSSmallArms : ASFPSWeapon {
	UAnimMontage* CharacterReloadAnim; // 0x500
	UAnimMontage* CharacterReloadAnimWithLastRoundStopper; // 0x508
	UAnimMontage* CharacterReloadAnimOnlyMagazine; // 0x510
	UAnimMontage* CharacterReloadAnimOneAmmo; // 0x518
	UAnimMontage* CharacterReloadAnimWithLastRoundStopperOneAmmo; // 0x520
	UAnimMontage* CharacterReloadAnimProne; // 0x528
	UAnimMontage* CharacterReloadAnimWithLastRoundStopperProne; // 0x530
	UAnimMontage* CharacterReloadAnimOnlyMagazineProne; // 0x538
	UAnimMontage* CharacterReloadAnimOneAmmoProne; // 0x540
	UAnimMontage* CharacterReloadAnimWithLastRoundStopperOneAmmoProne; // 0x548
	UAnimMontage* ReloadAnim; // 0x550
	UAnimMontage* ReloadAnimWithLastRoundStopper; // 0x558
	UAnimMontage* ReloadAnimOnlyMagazine; // 0x560
	UAnimMontage* ReloadAnimOneAmmo; // 0x568
	UAnimMontage* ReloadAnimWithLastRoundStopperOneAmmo; // 0x570
	UAnimMontage* ReloadAnimProne; // 0x578
	UAnimMontage* ReloadAnimWithLastRoundStopperProne; // 0x580
	UAnimMontage* ReloadAnimOnlyMagazineProne; // 0x588
	UAnimMontage* ReloadAnimOneAmmoProne; // 0x590
	UAnimMontage* ReloadAnimWithLastRoundStopperOneAmmoProne; // 0x598
	FTransform SocketMuzzle; // 0x5a0
	FTransform SocketCartridge; // 0x5d0
	FTransform SocketDeviceBottom; // 0x600
	FTransform SocketDeviceLeft; // 0x630
	FName SocketDeviceLeftOverride; // 0x660
	FTransform SocketSight; // 0x670
	FTransform SocketCamera; // 0x6a0
	ASFPSAmmo* AmmoClass; // 0x6f0
	ESFPSShellType ShellType; // 0x701
	bool bAddShellImpulse; // 0x702
	ESFPSWeaponFatigueType FatigueType; // 0x703
	FSFPSAmmoParameters AmmoParams; // 0x704
	float StartVelocity; // 0x718
	UStaticMeshComponent* SightOpenRef; // 0x720
	UStaticMeshComponent* SightCloseRef; // 0x728
	UStaticMeshComponent* DeviceLeftMountRef; // 0x730
	UStaticMeshComponent* DefaultDTKRef; // 0x738
	UStaticMesh* MagazineEmptyDefault; // 0x740
	UStaticMesh* MagazineFullDefault; // 0x748
	int32_t AmmoCount; // 0x750
	int32_t MaxAmmo; // 0x754
	float DamageMult; // 0x758
	bool bUseLastRoundStopper; // 0x75c
	bool bIgnoreLastRoundStopperIfExistOnlyOneAmmo; // 0x75d
	bool bLastRoundStopper; // 0x75e
	bool bHammerCocked; // 0x75f
	bool bReloadByOneAmmo; // 0x760
	UAnimMontage* CharacterShotAnim; // 0x768
	UAnimMontage* ShotAnim; // 0x770
	UAnimMontage* ShotAnimForLastRoundStopper; // 0x778
	UAnimMontage* HammerCockingAnim; // 0x780
	UParticleSystem* ShotParticle; // 0x788
	float RecoilVerticalMin; // 0x790
	float RecoilVerticalMax; // 0x794
	float RecoilHorizontalLeft; // 0x798
	float RecoilHorizontalRight; // 0x79c
	float RollbackLRMax; // 0x7a8
	UCurveFloat* RollbackCurve; // 0x7b0
	float IronSightSwitchSpeed; // 0x7b8
	float IronSightZoom; // 0x7bc
	ASFPSProjectile* ProjectileClass; // 0x7c0
	float SpreadAngle; // 0x7c8
	bool DropShellArterShot; // 0x7cc
};

struct UFormDlg_InputBox_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UButton* btnCancel; // 0x270
	UButton* btnOk; // 0x278
	UTextBlock* lbCancel; // 0x280
	UTextBlock* lbOk; // 0x288
};

struct UBTTask_RotateToFaceBBEntry : UBTTask_BlackboardBase {
	float Precision; // 0x98
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
	UTextureCube* BlendDestinationCubemap; // 0x328
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

struct URotatingMovementComponent : UMovementComponent {
	FRotator RotationRate; // 0xf0
	FVector PivotTranslation; // 0xfc
	char bRotationInLocalSpace : 1; // 0x108
};

struct UInAppPurchaseCallbackProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct USFPSSoundHandler : UObject {
	USFPSAmbientSoundManager* AmbientSoundManager; // 0x28
};

struct Aweapon_firearms_smg_fnp90_C : At_FireArm_C {
	UStaticMeshComponent* DTK; // 0x7e0
	UStaticMeshComponent* DeviceLeftMount; // 0x7e8
	UStaticMeshComponent* SightOpen; // 0x7f0
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x7f8
	UStaticMeshComponent* MagazineFull; // 0x800
	UStaticMeshComponent* MagazineEmpty; // 0x808
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

struct USoundNodeDelay : USoundNode {
	float DelayMin; // 0x48
	float DelayMax; // 0x4c
};

struct UMaterialExpressionTransform : UMaterialExpression {
	FExpressionInput Input; // 0x40
	EMaterialVectorCoordTransformSource TransformSourceType; // 0x54
	EMaterialVectorCoordTransform TransformType; // 0x55
};

struct UInGameAdManager : UPlatformInterfaceBase {
	char bShouldPauseWhileAdOpen : 1; // 0x38
	TArray<FDelegate> ClickedBannerDelegates; // 0x40
	TArray<FDelegate> ClosedAdDelegates; // 0x50
};

struct UBTTask_Wait : UBTTaskNode {
	float WaitTime; // 0x70
	float RandomDeviation; // 0x74
};

struct UBTTask_MoveDirectlyToward : UBTTask_MoveTo {
	char bDisablePathUpdateOnGoalLocationChange : 1; // 0xb0
	char bProjectVectorGoalToNavigation : 1; // 0xb0
	char bUpdatedDeprecatedProperties : 1; // 0xb0
};

struct ASFPSBaseMissileProjectile : AActor {
	FGenericTeamId TeamID; // 0x2b9
	USoundCue* BounceSoundCue; // 0x2d0
	UParticleSystem* BounceParticles; // 0x2d8
	UParticleSystem* BounceWaterParticles; // 0x2e0
	TWeakObjectPtr<ASFPSBaseCharacter> Shooter; // 0x2f0
	AActor* Weapon; // 0x320
	bool bDrawClientDebugTrajectory; // 0x328
	float DrawClientDebugTrajectoryTimeLife; // 0x32c
};

struct UEnvelopeFollowerListener : UActorComponent {
	FMulticastInlineDelegate OnEnvelopeFollowerUpdate; // 0xb0
};

struct URichTextBlockImageDecorator : URichTextBlockDecorator {
	UDataTable* ImageSet; // 0x28
};

struct Aweapon_firearms_rifle_groza_C : At_FireArm_C {
	UStaticMeshComponent* SightClose; // 0x7e0
	UStaticMeshComponent* DeviceLeftMount; // 0x7e8
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x7f0
	UStaticMeshComponent* MagazineFull; // 0x7f8
	UStaticMeshComponent* MagazineEmpty; // 0x800
};

struct UEnvQueryGenerator_ActorsOfClass : UEnvQueryGenerator {
	AActor* SearchedActorClass; // 0x50
	FAIDataProviderBoolValue GenerateOnlyActorsInRadius; // 0x58
	FAIDataProviderFloatValue SearchRadius; // 0x90
	UEnvQueryContext* SearchCenter; // 0xc8
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
	UPhysicsFieldComponent* PhysicsField; // 0x1f8
	TSet<UActorComponent*> ComponentsThatNeedPreEndOfFrameSync; // 0x200
	TArray<UActorComponent*> ComponentsThatNeedEndOfFrameUpdate; // 0x250
	TArray<UActorComponent*> ComponentsThatNeedEndOfFrameUpdate_OnGameThread; // 0x260
	UWorldComposition* WorldComposition; // 0x5e0
	FWorldPSCPool PSCPool; // 0x678
};

struct UMaterialExpressionTime : UMaterialExpression {
	char bIgnorePause : 1; // 0x40
	char bOverride_Period : 1; // 0x40
	float Period; // 0x44
};

struct Aweapon_firearms_sg_mp133_C : At_FireArm_C {
	UStaticMeshComponent* DeviceLeftMount; // 0x7e0
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x7e8
	UStaticMeshComponent* Shell; // 0x7f0
};

struct UCreatePlayer_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UCheckBox* btnAfro01; // 0x270
	UCheckBox* btnArab01; // 0x278
	UCheckBox* btnArab02; // 0x280
	UButton* btnCreate; // 0x288
	UCheckBox* btnEast01; // 0x290
	UCheckBox* btnEuro01; // 0x298
	UCheckBox* btnEuro02; // 0x2a0
	UCheckBox* btnEuro03; // 0x2a8
	UButton* btnMenu; // 0x2b0
	UImage* imgBackground; // 0x2b8
	UTextBlock* lbButtonLogin; // 0x2c0
	UTextBlock* lbMenu; // 0x2c8
};

struct USFPSUISoundTable : UObject {
	USoundBase* UI_ClickWave; // 0x28
	USoundBase* UI_UnClickWave; // 0x30
	USoundBase* UI_HoverWave; // 0x38
	USoundBase* UI_ErrorWave; // 0x40
	USoundBase* MusicWave; // 0x48
	USoundCue* BtnPressCue; // 0x50
	USoundCue* BtnUnpressCue; // 0x58
	USoundCue* BtnHoverCue; // 0x60
	USoundCue* BtnOkCue; // 0x68
	USoundCue* ImpossibleCue; // 0x70
	USoundCue* CombinationLockCue; // 0x78
	USoundCue* ItemPickUpCue; // 0x80
	USoundCue* ItemMovementCue; // 0x88
	USoundCue* ItemPutCue; // 0x90
	USoundCue* ItemSplitCue; // 0x98
	USoundCue* ItemGroupCue; // 0xa0
	USoundCue* AmmoLoadCue; // 0xa8
	USoundCue* CaseOpenCue; // 0xb0
	USoundCue* NeedAmmoCue; // 0xb8
	USoundCue* ItemSellCue; // 0xc0
	USoundCue* ItemBuyCue; // 0xc8
	USoundCue* ChatSendCue; // 0xd0
	USoundCue* ChatCloseCue; // 0xd8
	USoundCue* MapUseCue; // 0xe0
	USoundCue* MapPinCue; // 0xe8
	USoundCue* Msg_IncomingCue; // 0xf0
	USoundCue* VoipRadioCue; // 0xf8
	USoundCue* SquadInvCue; // 0x100
	USoundCue* SquadNewMemberCue; // 0x108
	USoundCue* CraftBeginCue; // 0x110
	USoundCue* CraftCancelCue; // 0x118
	USoundCue* CraftCompleteCue; // 0x120
	USoundCue* CraftItemStartCue; // 0x128
	USoundCue* CraftItemSetCue; // 0x130
	USoundCue* CraftItemGetCue; // 0x138
	USoundCue* EncRadioAlarmCue; // 0x140
	USoundAttenuation* LocalAttenuationSettings; // 0x148
	USoundMix* UnderwaterSoundMix; // 0x150
};

struct UMovieSceneEnumSection : UMovieSceneSection {
	FMovieSceneByteChannel EnumCurve; // 0xf0
};

struct UVerticalBoxSlot : UPanelSlot {
	FSlateChildSize Size; // 0x38
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
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

struct UInterpTrackInstParticleReplay : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
};

struct UMovieSceneBoolSection : UMovieSceneSection {
	bool DefaultValue; // 0xe8
	FMovieSceneBoolChannel BoolCurve; // 0xf0
};

struct UDatasmithStaticMeshIFCImportData : UDatasmithStaticMeshImportData {
	FString SourceGlobalId; // 0x28
};

struct UBaseBrushTool : UMeshSurfacePointTool {
	UBrushBaseProperties* BrushProperties; // 0xc0
	bool bInBrushStroke; // 0xc8
	float WorldToLocalScale; // 0xcc
	FBrushStampData LastBrushStamp; // 0xd0
	TSoftClassPtr<UObject> PropertyClass; // 0x188
	UBrushStampIndicator* BrushStampIndicator; // 0x1b0
};

struct UABP_weapon_firearms_mg_mg36_C : USFPSWeaponAnimInstance_AR {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	FAnimNode_Root AnimGraphNode_Root; // 0x2e8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x318
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x360
};

struct UClothingSimulationInteractor : UObject {
	TMap<FName, UClothingInteractor*> ClothingInteractors; // 0x28
};

struct USFPSACBoxCollisionComponent : UBoxComponent {
	USFPSPhysicalMaterial* PhysicalMaterial; // 0x478
};

struct USimpleCameraShakePattern : UCameraShakePattern {
	float Duration; // 0x28
	float BlendInTime; // 0x2c
	float BlendOutTime; // 0x30
};

struct Aweapon_firearms_rifle_scar_C : At_FireArm_C {
	UStaticMeshComponent* DTK; // 0x7e0
	UStaticMeshComponent* DeviceLeftMount; // 0x7e8
	UStaticMeshComponent* SightClose; // 0x7f0
	UStaticMeshComponent* SightOpen; // 0x7f8
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x800
	UStaticMeshComponent* MagazineFull; // 0x808
	UStaticMeshComponent* MagazineEmpty; // 0x810
};

struct USFPSAnimEvent_InverseKinematics : UAnimNotify {
	bool bKinematicsDisabled; // 0x38
};

struct USoundNodeDialoguePlayer : USoundNode {
	FDialogueWaveParameter DialogueWaveParameter; // 0x48
	char bLooping : 1; // 0x68
};

struct USourceEffectRingModulationPreset : USoundEffectSourcePreset {
	FSourceEffectRingModulationSettings Settings; // 0xb0
};

struct UInstancedStaticMeshComponent : UStaticMeshComponent {
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

struct UMaterialExpressionSceneDepth : UMaterialExpression {
	EMaterialSceneAttributeInputMode InputMode; // 0x40
	FExpressionInput Input; // 0x44
	FExpressionInput Coordinates; // 0x58
	FVector2D ConstInput; // 0x6c
};

struct AMainMenu_C : ALevelScriptActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x228
	ACameraActor* CameraActor_1_ExecuteUbergraph_MainMenu_RefProperty; // 0x230
};

struct UBTDecorator_BlueprintBase : UBTDecorator {
	AAIController* AIOwner; // 0x68
	AActor* ActorOwner; // 0x70
	TArray<FName> ObservedKeyNames; // 0x78
	char bShowPropertyDetails : 1; // 0x98
	char bCheckConditionOnlyBlackBoardChanges : 1; // 0x98
	char bIsObservingBB : 1; // 0x98
};

struct Aweapon_firearms_smg_scorpion_C : At_FireArm_C {
	UStaticMeshComponent* DeviceLeftMount; // 0x7e0
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x7e8
	UStaticMeshComponent* MagazineFull; // 0x7f0
	UStaticMeshComponent* MagazineEmpty; // 0x7f8
};

struct USFPSDebrisHandler : UObject {
	USFPSShellManager* ShellManager; // 0x28
};

struct USoundNodeModulOuterParam : USoundNode {
	UModulatorOuterParams* PitchModulationParams; // 0x48
	UModulatorOuterParams* VolumeModulationParams; // 0x50
};

struct UParticleModuleVectorFieldRotation : UParticleModuleVectorFieldBase {
	FVector MinInitialRotation; // 0x30
	FVector MaxInitialRotation; // 0x3c
};

struct UEditableGeometryCollectionAdapter : UEditableMeshAdapter {
	UGeometryCollection* GeometryCollection; // 0x28
	UGeometryCollection* OriginalGeometryCollection; // 0x30
	int32_t GeometryCollectionLODIndex; // 0x38
};

struct APhysicsThruster : ARigidBodyBase {
	UPhysicsThrusterComponent* ThrusterComponent; // 0x220
};

struct USkeletalMeshSocket : UObject {
	FName SocketName; // 0x28
	FName BoneName; // 0x30
	FVector RelativeLocation; // 0x38
	FRotator RelativeRotation; // 0x44
	FVector RelativeScale; // 0x50
	bool bForceAlwaysAnimated; // 0x5c
};

struct USFPSACGameplayEvent : USceneComponent {
	float Radius; // 0x244
};

struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	FExpressionInput Base; // 0x40
	FExpressionInput Layer; // 0x54
	FName ParameterName; // 0x68
	float PreviewWeight; // 0x70
	FVector ConstBase; // 0x74
	FGuid ExpressionGUID; // 0x80
};

struct UUserWidget : UWidget {
	FLinearColor ColorAndOpacity; // 0x114
	FDelegate ColorAndOpacityDelegate; // 0x124
	FSlateColor ForegroundColor; // 0x138
	FDelegate ForegroundColorDelegate; // 0x160
	FMulticastInlineDelegate OnVisibilityChanged; // 0x170
	FMargin Padding; // 0x198
	TArray<UUMGSequencePlayer*> ActiveSequencePlayers; // 0x1a8
	UUMGSequenceTickManager* AnimationTickManager; // 0x1b8
	TArray<UUMGSequencePlayer*> StoppedSequencePlayers; // 0x1c0
	TArray<FNamedSlotBinding> NamedSlotBindings; // 0x1d0
	UWidgetTree* WidgetTree; // 0x1e0
	int32_t Priority; // 0x1e8
	char bSupportsKeyboardFocus : 1; // 0x1ec
	char bIsFocusable : 1; // 0x1ec
	char bStopAction : 1; // 0x1ec
	char bHasScriptImplementedTick : 1; // 0x1ec
	char bHasScriptImplementedPaint : 1; // 0x1ec
	EWidgetTickFrequency TickFrequency; // 0x1f8
	UInputComponent* InputComponent; // 0x200
	TArray<FAnimationEventBinding> AnimationCallbacks; // 0x208
};

struct UMovieSceneBindingOverrides : UObject {
	TArray<FMovieSceneBindingOverrideData> BindingData; // 0x28
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

struct UMovieSceneCameraAnimTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> CameraAnimSections; // 0x98
};

struct UMovieSceneSequenceTickManager : UObject {
	TArray<FMovieSceneSequenceActorPointers> SequenceActors; // 0x28
	UMovieSceneEntitySystemLinker* Linker; // 0x38
};

struct USFPSACFISM : UFoliageInstancedStaticMeshComponent {
	FKSphylElem SightCapsule; // 0x810
	float FarCover; // 0x860
	float CloseCover; // 0x864
	float FarCoverDist; // 0x868
	USoundCue* BushCue; // 0x870
};

struct USFPSACSteamInventory : UActorComponent {
	TArray<TWeakObjectPtr<ASFPSBaseItem>> ClientInventory; // 0xd8
};

struct Aweapon_steelarms_knife_02_C : At_SteelArm_C {
	USceneComponent* DamagePoint2; // 0x620
	USceneComponent* DamagePoint1; // 0x628
	USceneComponent* DamagePoint0; // 0x630
};

struct UBehaviorTree : UObject {
	UBTCompositeNode* RootNode; // 0x30
	UBlackboardData* BlackboardAsset; // 0x38
	TArray<UBTDecorator*> RootDecorators; // 0x40
	TArray<FBTDecoratorLogic> RootDecoratorOps; // 0x50
};

struct ASFPSLootBox : ASFPSBaseLocationCraftItem {
	TArray<TWeakObjectPtr<ASFPSCharacter>> Characters; // 0x350
	USFPSACLootBoxInventory* Inventory; // 0x360
	ESFPSLootBoxState State; // 0x368
	bool bBaseStorm; // 0x369
	bool bClientReady; // 0x36a
	ASFPSLootBoxSpawner* LootBoxSpawner; // 0x370
	ASFPSBaseItem* KeyClass; // 0x378
	bool bAcceptsItemsFromCharacters; // 0x380
	USoundCue* ContainerCue; // 0x388
	USoundCue* LockCue; // 0x390
	TArray<FVector> LootTraces; // 0x3a8
};

struct UABP_weapon_firearms_snip_svd_C : USFPSWeaponAnimInstance_AR {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	FAnimNode_Root AnimGraphNode_Root; // 0x2e8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x318
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x360
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x388
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3b0
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x430
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x460
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4e0
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x510
};

struct USoundfieldSubmix : USoundSubmixWithParentBase {
	FName SoundfieldEncodingFormat; // 0x40
	USoundfieldEncodingSettingsBase* EncodingSettings; // 0x48
	TArray<USoundfieldEffectBase*> SoundfieldEffectChain; // 0x50
	USoundfieldEncodingSettingsBase* EncodingSettingsClass; // 0x60
};

struct ABM_WallTria_01_C : At_LocationCraftActor_C {
	USFPSACBaseCollision* SFPSACBaseCollision; // 0x358
	USFPSACSnapComponent* SFPSACSnap; // 0x360
};

struct UImage : UWidget {
	FSlateBrush Brush; // 0x108
	FDelegate BrushDelegate; // 0x190
	FLinearColor ColorAndOpacity; // 0x1a0
	FDelegate ColorAndOpacityDelegate; // 0x1b0
	bool bFlipForRightToLeftFlowDirection; // 0x1c0
	FDelegate OnMouseButtonDownEvent; // 0x1c4
};

struct AUAZ_01_Static_C : ASFPSWheeledVehicle {
	UBoxComponent* CharacterOverlap; // 0x488
	UBoxComponent* CharacterBlock1; // 0x490
	UBoxComponent* CharacterBlock0; // 0x498
	UStaticMeshComponent* WheelBR; // 0x4a0
	UStaticMeshComponent* WheelBL; // 0x4a8
	UStaticMeshComponent* WheelFR; // 0x4b0
	UStaticMeshComponent* WheelFL; // 0x4b8
	USceneComponent* RearRight; // 0x4c0
	USceneComponent* RearLeft; // 0x4c8
	USceneComponent* FrontRight; // 0x4d0
	USceneComponent* FrontLeft; // 0x4d8
	USceneComponent* Exit_FR; // 0x4e0
	USceneComponent* Exit_BR; // 0x4e8
	USceneComponent* Exit_BL; // 0x4f0
	USceneComponent* Exit_FL; // 0x4f8
	UBoxComponent* Enter_BR; // 0x500
	UBoxComponent* Enter_BL; // 0x508
	UBoxComponent* Enter_FR; // 0x510
	UBoxComponent* Enter_FL; // 0x518
};

struct UArrowComponent : UPrimitiveComponent {
	FColor ArrowColor; // 0x450
	float ArrowSize; // 0x454
	float ArrowLength; // 0x458
	float ScreenSize; // 0x45c
	char bIsScreenSizeScaled : 1; // 0x460
	char bTreatAsASprite : 1; // 0x460
};

struct UProceduralFoliageComponent : UActorComponent {
	UProceduralFoliageSpawner* FoliageSpawner; // 0xb0
	float TileOverlap; // 0xb8
	AVolume* SpawningVolume; // 0xc0
	FGuid ProceduralGuid; // 0xc8
};

struct UFormDlg_OkCancel_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UButton* btnCancel; // 0x270
	UButton* btnOk; // 0x278
	UTextBlock* lbCancel; // 0x280
	UTextBlock* lbOk; // 0x288
};

struct UParticleModuleKillHeight : UParticleModuleKillBase {
	FRawDistributionFloat Height; // 0x30
	char bAbsolute : 1; // 0x60
	char bFloor : 1; // 0x60
	char bApplyPSysScale : 1; // 0x60
};

struct UGizmoConstantAxisSource : UObject {
	FVector Origin; // 0x30
	FVector Direction; // 0x3c
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

struct USubUVAnimation : UObject {
	UTexture2D* SubUVTexture; // 0x28
	int32_t SubImages_Horizontal; // 0x30
	int32_t SubImages_Vertical; // 0x34
	ESubUVBoundingVertexCount BoundingMode; // 0x38
	EOpacitySourceMode OpacitySourceMode; // 0x39
	float AlphaThreshold; // 0x3c
};

struct USFPSLockBreakingHandler : UObject {
	UUserWidget* FormLockBreaking; // 0x48
};

struct UGizmoRectangleComponent : UGizmoBaseComponent {
	FVector DirectionX; // 0x470
	FVector DirectionY; // 0x47c
	float OffsetX; // 0x488
	float OffsetY; // 0x48c
	float LengthX; // 0x490
	float LengthY; // 0x494
	float Thickness; // 0x498
	char SegmentFlags; // 0x49c
};

struct UNoiseField : UFieldNodeFloat {
	float MinRange; // 0xb0
	float MaxRange; // 0xb4
	FTransform Transform; // 0xc0
};

struct UAsyncActionHandleSaveGame : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate Completed; // 0x30
	USaveGame* SaveGameObject; // 0x60
};

struct UPlatformInterfaceBase : UObject {
	TArray<FDelegateArray> AllDelegates; // 0x28
};

struct UCollisionProfile : UDeveloperSettings {
	TArray<FCollisionResponseTemplate> Profiles; // 0x38
	TArray<FCustomChannelSetup> DefaultChannelResponses; // 0x48
	TArray<FCustomProfile> EditProfiles; // 0x58
	TArray<FRedirector> ProfileRedirects; // 0x68
	TArray<FRedirector> CollisionChannelRedirects; // 0x78
};

struct ASFPSBaseLootSpawner : AActor {
	int32_t SpawnIntervalMin; // 0x234
	int32_t SpawnIntervalMax; // 0x238
	int32_t RerollChance; // 0x23c
	int32_t RadiusSquared; // 0x240
	bool bIgnoresChanceMultiplier; // 0x244
};

struct UABP_weapon_firearms_rifle_scar_C : USFPSWeaponAnimInstance_AR {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	FAnimNode_Root AnimGraphNode_Root; // 0x2e8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x318
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x360
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x388
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3b0
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x430
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x460
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4e0
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x510
};

struct UABP_weapon_firearms_smg_mp5_C : USFPSWeaponAnimInstance_AR {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	FAnimNode_Root AnimGraphNode_Root; // 0x2e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x318
	FAnimNode_Slot AnimGraphNode_Slot; // 0x398
};

struct UCameraAnim : UObject {
	UInterpGroup* CameraInterpGroup; // 0x28
	float AnimLength; // 0x30
	FBox BoundingBox; // 0x34
	char bRelativeToInitialTransform : 1; // 0x50
	char bRelativeToInitialFOV : 1; // 0x50
	float BaseFOV; // 0x54
	FPostProcessSettings BasePostProcessSettings; // 0x60
	float BasePostProcessBlendWeight; // 0x5c0
};

struct UInterpTrackInstFloatProp : UInterpTrackInstProperty {
	float ResetFloat; // 0x58
};

struct UParticleModuleColor : UParticleModuleColorBase {
	FRawDistributionVector StartColor; // 0x30
	FRawDistributionFloat StartAlpha; // 0x78
	char bClampAlpha : 1; // 0xa8
};

struct UMovieScene2DTransformSection : UMovieSceneSection {
	FMovieScene2DTransformMask TransformMask; // 0xf0
	FMovieSceneFloatChannel Translation[0x2]; // 0xf8
	FMovieSceneFloatChannel Rotation; // 0x238
	FMovieSceneFloatChannel Scale[0x2]; // 0x2d8
	FMovieSceneFloatChannel Shear[0x2]; // 0x418
};

struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	UWidgetTree* WidgetTree; // 0x328
	char bClassRequiresNativeTick : 1; // 0x330
	TArray<FDelegateRuntimeBinding> Bindings; // 0x338
	TArray<UWidgetAnimation*> Animations; // 0x348
	TArray<FName> NamedSlots; // 0x358
};

struct UUserDefinedCaptureProtocol : UMovieSceneImageCaptureProtocolBase {
	UWorld* World; // 0x58
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

struct UFormItemMessage_C : UUserWidget {
	UfrmSpriteViewMessage_C* svItem; // 0x268
};

struct UFindTurnBasedMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UDatasmithStaticMeshTemplate : UDatasmithObjectTemplate {
	FDatasmithMeshSectionInfoMapTemplate SectionInfoMap; // 0x30
	int32_t LightMapCoordinateIndex; // 0x80
	int32_t LightMapResolution; // 0x84
	TArray<FDatasmithMeshBuildSettingsTemplate> BuildSettings; // 0x88
	TArray<FDatasmithStaticMaterialTemplate> StaticMaterials; // 0x98
};

struct UPlatformEventsComponent : UActorComponent {
	FMulticastInlineDelegate PlatformChangedToLaptopModeDelegate; // 0xb0
	FMulticastInlineDelegate PlatformChangedToTabletModeDelegate; // 0xc0
};

struct USoundNodeSwitch : USoundNode {
	FName IntParameterName; // 0x48
};

struct UPerlinNoiseCameraShakePattern : USimpleCameraShakePattern {
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

struct UMaterialExpressionSine : UMaterialExpression {
	FExpressionInput Input; // 0x40
	float Period; // 0x54
};

struct UfrmAdminPanelItem_C : USFPSUserWidget_TraderItem {
	UButton* btnAction0; // 0x310
	UButton* btnAction1; // 0x318
};

struct UPanelSlot : UVisual {
	UPanelWidget* Parent; // 0x28
	UWidget* Content; // 0x30
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

struct USourceEffectFoldbackDistortionPreset : USoundEffectSourcePreset {
	FSourceEffectFoldbackDistortionSettings Settings; // 0x9c
};

struct UABP_weapon_firearms_rifle_famas_C : USFPSWeaponAnimInstance_AR {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	FAnimNode_Root AnimGraphNode_Root; // 0x2e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x318
	FAnimNode_Slot AnimGraphNode_Slot; // 0x398
};

struct UPaperFlipbookComponent : UMeshComponent {
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

struct UUniformInteger : UFieldNodeInt {
	int32_t Magnitude; // 0xb0
};

struct UEnvQueryGenerator_CurrentLocation : UEnvQueryGenerator {
	UEnvQueryContext* QueryContext; // 0x50
};

struct UMaterialExpressionComponentMask : UMaterialExpression {
	FExpressionInput Input; // 0x40
	char R : 1; // 0x54
	char G : 1; // 0x54
	char B : 1; // 0x54
	char A : 1; // 0x54
};

struct UfrmChatItem_C : USFPSUserWidget_ChatItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x318
	UButton* btnMain; // 0x320
};

struct AOnlineBeaconClient : AOnlineBeacon {
	AOnlineBeaconHostObject* BeaconOwner; // 0x250
	UNetConnection* BeaconConnection; // 0x258
	EBeaconConnectionState ConnectionState; // 0x260
};

struct UModulatorContOuterParams : UObject {
	FName ParameterName; // 0x28
	float Default; // 0x30
	float MinInput; // 0x34
	float MaxInput; // 0x38
	float MinOutput; // 0x3c
	float MaxOutput; // 0x40
	ModulationParamMode ParamMode; // 0x44
};

struct UChildConnection : UNetConnection {
	UNetConnection* Parent; // 0x1ba8
};

struct USpacer : UWidget {
	FVector2D Size; // 0x108
};

struct UGameplayTask_TimeLimitedExecution : UGameplayTask {
	FMulticastInlineDelegate OnFinished; // 0x68
	FMulticastInlineDelegate OnTimeExpired; // 0x78
};

struct UParticleModuleSpawn : UParticleModuleSpawnBase {
	FRawDistributionFloat Rate; // 0x38
	FRawDistributionFloat RateScale; // 0x68
	EParticleBurstMethod ParticleBurstMethod; // 0x98
	TArray<FParticleBurst> BurstList; // 0xa0
	FRawDistributionFloat BurstScale; // 0xb0
	char bApplyGlobalSpawnRateScale : 1; // 0xe0
};

struct UParticleModuleSizeMultiplyLife : UParticleModuleSizeBase {
	FRawDistributionVector LifeMultiplier; // 0x30
	char MultiplyX : 1; // 0x78
	char MultiplyY : 1; // 0x78
	char MultiplyZ : 1; // 0x78
};

struct UIpNetDriver : UNetDriver {
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

struct UWrapBox : UPanelWidget {
	FVector2D InnerSlotPadding; // 0x120
	float WrapWidth; // 0x128
	float WrapSize; // 0x12c
	bool bExplicitWrapWidth; // 0x130
	bool bExplicitWrapSize; // 0x131
	EOrientation Orientation; // 0x132
};

struct UForceFeedbackEffect : UObject {
	TArray<FForceFeedbackChannelDetails> ChannelDetails; // 0x28
	float Duration; // 0x38
};

struct UScaleBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
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

struct UMovieSceneFolder : UObject {
	FName FolderName; // 0x28
	TArray<UMovieSceneFolder*> ChildFolders; // 0x30
	TArray<UMovieSceneTrack*> ChildMasterTracks; // 0x40
	TArray<FString> ChildObjectBindingStrings; // 0x50
};

struct UMasterAudioSubmixCaptureProtocol : UMovieSceneAudioCaptureProtocolBase {
	FString Filename; // 0x58
};

struct UMaterialExpressionFontSample : UMaterialExpression {
	UFont* Font; // 0x40
	int32_t FontTexturePage; // 0x48
};

struct UHLODProxy : UObject {
	TArray<FHLODProxyMesh> ProxyMeshes; // 0x28
	TMap<UHLODProxyDesc*, FHLODProxyMesh> HLODActors; // 0x38
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

struct ABox_mil_03_C : AActor {
	UStaticMeshComponent* Box_military_cap_01; // 0x220
	UStaticMeshComponent* Box_military_01; // 0x228
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

struct UBTTask_MakeNoise : UBTTaskNode {
	float Loudnes; // 0x70
};

struct UfrmHotKey_C : USFPSUserWidget_SettingsHotKey {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	UInputKeySelector* ikKey; // 0x2e8
};

struct UCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UTcpMessagingSettings : UObject {
	bool EnableTransport; // 0x28
	FString ListenEndpoint; // 0x30
	TArray<FString> ConnectToEndpoints; // 0x40
	int32_t ConnectionRetryDelay; // 0x50
	bool bStopServiceWhenAppDeactivates; // 0x54
};

struct ASFPSWeaponMF_AdditionalCartridge : ASFPSBaseWeaponMF {
	int32_t AmmoCount; // 0x334
	ESFPSWeaponMFAdditionalCartrigeType CartridgeType; // 0x338
	UStaticMesh* MagazineFull; // 0x340
	UAnimMontage* OverrideCharacterReloadAnim; // 0x348
	UAnimMontage* OverrideCharacterReloadAnimWithLastRoundStopper; // 0x350
	UAnimMontage* OverrideCharacterReloadAnimOnlyMagazine; // 0x358
	UAnimMontage* OverrideCharacterReloadAnimOneAmmo; // 0x360
	UAnimMontage* OverrideCharacterReloadAnimWithLastRoundStopperOneAmmo; // 0x368
	UAnimMontage* OverrideWeaponReloadAnim; // 0x370
	UAnimMontage* OverrideWeaponReloadAnimWithLastRoundStopper; // 0x378
	UAnimMontage* OverrideWeaponReloadAnimOnlyMagazine; // 0x380
	UAnimMontage* OverrideWeaponReloadAnimOneAmmo; // 0x388
	UAnimMontage* OverrideWeaponReloadAnimWithLastRoundStopperOneAmmo; // 0x390
};

struct USceneCaptureComponentCube : USceneCaptureComponent {
	UTextureRenderTargetCube* TextureTarget; // 0x2b0
	bool bCaptureRotation; // 0x2b8
	UTextureRenderTargetCube* TextureTargetLeft; // 0x2c0
	UTextureRenderTargetCube* TextureTargetRight; // 0x2c8
	UTextureRenderTarget2D* TextureTargetODS; // 0x2d0
	float IPD; // 0x2d8
};

struct UMovieSceneFloatSection : UMovieSceneSection {
	FMovieSceneFloatChannel FloatCurve; // 0xf0
};

struct UBoneMaskFilter : UObject {
	TArray<FInputBlendPose> BlendPoses; // 0x28
};

struct UPhysicsThrusterComponent : USceneComponent {
	float ThrustStrength; // 0x1f8
};

struct UPhononGeometryComponent : USceneComponent {
	bool ExportAllChildren; // 0x1f8
	uint32_t NumVertices; // 0x1fc
	uint32_t NumTriangles; // 0x200
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

struct UOnlineEngineInterfaceImpl : UOnlineEngineInterface {
	TMap<FName, FName> MappedUniqueNetIdTypes; // 0x28
	TArray<FName> CompatibleUniqueNetIdTypes; // 0x78
	FName VoiceSubsystemNameOverride; // 0x88
};

struct UGizmoTransformProxyTransformSource : UGizmoBaseTransformSource {
	UTransformProxy* Proxy; // 0x48
};

struct UBaseMediaSource : UMediaSource {
	FName PlayerName; // 0x80
};

struct UBTDecorator_BlackboardBase : UBTDecorator {
	FBlackboardKeySelector BlackboardKey; // 0x68
};

struct UMeshComponent : UPrimitiveComponent {
	TArray<UMaterialInterface*> OverrideMaterials; // 0x450
	char bEnableMaterialParameterCaching : 1; // 0x470
};

struct UParticleModuleVelocityCone : UParticleModuleVelocityBase {
	FRawDistributionFloat Angle; // 0x38
	FRawDistributionFloat Velocity; // 0x68
	FVector Direction; // 0x98
};

struct UVirtualTexture2D : UTexture2D {
	FVirtualTextureBuildSettings Settings; // 0x1a0
	bool bContinuousUpdate; // 0x1ac
	bool bSinglePhysicalSpace; // 0x1ad
};

struct ULandscapeLayerInfoObject : UObject {
	FName LayerName; // 0x28
	UPhysicalMaterial* PhysMaterial; // 0x30
	float Hardness; // 0x38
	FLinearColor LayerUsageDebugColor; // 0x3c
};

struct ULevelStreamingDynamic : ULevelStreaming {
	char bInitiallyLoaded : 1; // 0x148
	char bInitiallyVisible : 1; // 0x148
};

struct UPawnActionsComponent : UActorComponent {
	APawn* ControlledPawn; // 0xb0
	TArray<FPawnActionStack> ActionStacks; // 0xb8
	TArray<FPawnActionEvent> ActionEvents; // 0xc8
	UPawnAction* CurrentAction; // 0xd8
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

struct USFPSAirDropManager : UObject {
	TArray<USFPSAirDrop*> Drops; // 0x38
	int32_t DropTimerMin; // 0x58
	int32_t DropTimerMax; // 0x5c
	int32_t MaxDrops; // 0x60
	float PlaneHeight; // 0x64
	float PlaneSpeed; // 0x68
	float PlaneOffset; // 0x6c
	float LootBoxZOffset; // 0x70
	int32_t WaitTime; // 0x74
	ASFPSAirDropPlane* PlaneClass; // 0x78
	ASFPSAirDropCargo* CargoClass; // 0x80
	ASFPSLootBox* LootBoxClass; // 0x88
	USFPSItemSetStructSet* RewardSet; // 0x90
};

struct Ascope_col_walter_mrs_C : At_Sight_C {
	UStaticMeshComponent* walter_mrs_collimator; // 0x3d0
};

struct UAISenseConfig_Damage : UAISenseConfig {
	UAISense_Damage* Implementation; // 0x48
};

struct USequenceCameraShakePattern : UCameraShakePattern {
	UCameraAnimationSequence* Sequence; // 0x28
	float PlayRate; // 0x30
	float Scale; // 0x34
	float BlendInTime; // 0x38
	float BlendOutTime; // 0x3c
	float RandomSegmentDuration; // 0x40
	bool bRandomSegment; // 0x44
	USequenceCameraShakeSequencePlayer* Player; // 0x48
	USequenceCameraShakeCameraStandIn* CameraStandIn; // 0x50
};

struct USizeBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
};

struct UFormInventory_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UCheckBox* btnCar; // 0x270
	UCheckBox* btnCell; // 0x278
	UCheckBox* btnCorpse; // 0x280
	UCheckBox* btnCraft; // 0x288
	UCheckBox* btnGround; // 0x290
	UCheckBox* btnLootBox; // 0x298
	UCheckBox* btnSteamInventory; // 0x2a0
	UButton* btnSteamInventoryRefresh; // 0x2a8
	UCheckBox* btnTrader; // 0x2b0
	UComboBoxString* cbFilterLeft; // 0x2b8
	UComboBoxString* cbFilterSteamInventory; // 0x2c0
	UfrmPopupMenu_C* frmPopupMenu; // 0x2c8
	UImage* imgBackgroundAvailable; // 0x2d0
	UImage* imgBackgroundAvailableSteam; // 0x2d8
	UImage* imgBackgroundNotAvailableSteam; // 0x2e0
	UTextBlock* lbCar; // 0x2e8
	UTextBlock* lbCell; // 0x2f0
	UTextBlock* lbCorpse; // 0x2f8
	UTextBlock* lbCraft; // 0x300
	UTextBlock* lbGround; // 0x308
	UTextBlock* lbLootBox; // 0x310
	UTextBlock* lbSteamInventory; // 0x318
	UTextBlock* lbTakeAll; // 0x320
	UTextBlock* lbTrader; // 0x328
	UNamedSlot* nsDraggingItem; // 0x330
	UNamedSlot* nsHint; // 0x338
	UNamedSlot* nsPopupMenu; // 0x340
	UfrmSpriteViewEquip_C* svBackPack; // 0x348
	UfrmSpriteViewInv_C* svBackPack0; // 0x350
	UfrmSpriteViewInv_C* svBackPack1; // 0x358
	UfrmSpriteViewInv_C* svBackPack10; // 0x360
	UfrmSpriteViewInv_C* svBackPack11; // 0x368
	UfrmSpriteViewInv_C* svBackPack12; // 0x370
	UfrmSpriteViewInv_C* svBackPack13; // 0x378
	UfrmSpriteViewInv_C* svBackPack14; // 0x380
	UfrmSpriteViewInv_C* svBackPack15; // 0x388
	UfrmSpriteViewInv_C* svBackPack16; // 0x390
	UfrmSpriteViewInv_C* svBackPack17; // 0x398
	UfrmSpriteViewInv_C* svBackPack18; // 0x3a0
	UfrmSpriteViewInv_C* svBackPack19; // 0x3a8
	UfrmSpriteViewInv_C* svBackPack2; // 0x3b0
	UfrmSpriteViewInv_C* svBackPack3; // 0x3b8
	UfrmSpriteViewInv_C* svBackPack4; // 0x3c0
	UfrmSpriteViewInv_C* svBackPack5; // 0x3c8
	UfrmSpriteViewInv_C* svBackPack6; // 0x3d0
	UfrmSpriteViewInv_C* svBackPack7; // 0x3d8
	UfrmSpriteViewInv_C* svBackPack8; // 0x3e0
	UfrmSpriteViewInv_C* svBackPack9; // 0x3e8
	UfrmSpriteViewInv_C* svCar0; // 0x3f0
	UfrmSpriteViewInv_C* svCar1; // 0x3f8
	UfrmSpriteViewInv_C* svCar10; // 0x400
	UfrmSpriteViewInv_C* svCar11; // 0x408
	UfrmSpriteViewInv_C* svCar12; // 0x410
	UfrmSpriteViewInv_C* svCar13; // 0x418
	UfrmSpriteViewInv_C* svCar14; // 0x420
	UfrmSpriteViewInv_C* svCar15; // 0x428
	UfrmSpriteViewInv_C* svCar16; // 0x430
	UfrmSpriteViewInv_C* svCar17; // 0x438
	UfrmSpriteViewInv_C* svCar18; // 0x440
	UfrmSpriteViewInv_C* svCar19; // 0x448
	UfrmSpriteViewInv_C* svCar2; // 0x450
	UfrmSpriteViewInv_C* svCar20; // 0x458
	UfrmSpriteViewInv_C* svCar21; // 0x460
	UfrmSpriteViewInv_C* svCar22; // 0x468
	UfrmSpriteViewInv_C* svCar23; // 0x470
	UfrmSpriteViewInv_C* svCar24; // 0x478
	UfrmSpriteViewInv_C* svCar25; // 0x480
	UfrmSpriteViewInv_C* svCar26; // 0x488
	UfrmSpriteViewInv_C* svCar27; // 0x490
	UfrmSpriteViewInv_C* svCar28; // 0x498
	UfrmSpriteViewInv_C* svCar29; // 0x4a0
	UfrmSpriteViewInv_C* svCar3; // 0x4a8
	UfrmSpriteViewInv_C* svCar30; // 0x4b0
	UfrmSpriteViewInv_C* svCar31; // 0x4b8
	UfrmSpriteViewInv_C* svCar32; // 0x4c0
	UfrmSpriteViewInv_C* svCar33; // 0x4c8
	UfrmSpriteViewInv_C* svCar34; // 0x4d0
	UfrmSpriteViewInv_C* svCar35; // 0x4d8
	UfrmSpriteViewInv_C* svCar4; // 0x4e0
	UfrmSpriteViewInv_C* svCar5; // 0x4e8
	UfrmSpriteViewInv_C* svCar6; // 0x4f0
	UfrmSpriteViewInv_C* svCar7; // 0x4f8
	UfrmSpriteViewInv_C* svCar8; // 0x500
	UfrmSpriteViewInv_C* svCar9; // 0x508
	UfrmSpriteViewInv_C* svCell0; // 0x510
	UfrmSpriteViewInv_C* svCell1; // 0x518
	UfrmSpriteViewInv_C* svCell10; // 0x520
	UfrmSpriteViewInv_C* svCell11; // 0x528
	UfrmSpriteViewInv_C* svCell12; // 0x530
	UfrmSpriteViewInv_C* svCell13; // 0x538
	UfrmSpriteViewInv_C* svCell14; // 0x540
	UfrmSpriteViewInv_C* svCell15; // 0x548
	UfrmSpriteViewInv_C* svCell16; // 0x550
	UfrmSpriteViewInv_C* svCell17; // 0x558
	UfrmSpriteViewInv_C* svCell18; // 0x560
	UfrmSpriteViewInv_C* svCell19; // 0x568
	UfrmSpriteViewInv_C* svCell2; // 0x570
	UfrmSpriteViewInv_C* svCell20; // 0x578
	UfrmSpriteViewInv_C* svCell21; // 0x580
	UfrmSpriteViewInv_C* svCell22; // 0x588
	UfrmSpriteViewInv_C* svCell23; // 0x590
	UfrmSpriteViewInv_C* svCell24; // 0x598
	UfrmSpriteViewInv_C* svCell25; // 0x5a0
	UfrmSpriteViewInv_C* svCell26; // 0x5a8
	UfrmSpriteViewInv_C* svCell27; // 0x5b0
	UfrmSpriteViewInv_C* svCell28; // 0x5b8
	UfrmSpriteViewInv_C* svCell29; // 0x5c0
	UfrmSpriteViewInv_C* svCell3; // 0x5c8
	UfrmSpriteViewInv_C* svCell30; // 0x5d0
	UfrmSpriteViewInv_C* svCell31; // 0x5d8
	UfrmSpriteViewInv_C* svCell32; // 0x5e0
	UfrmSpriteViewInv_C* svCell33; // 0x5e8
	UfrmSpriteViewInv_C* svCell34; // 0x5f0
	UfrmSpriteViewInv_C* svCell35; // 0x5f8
	UfrmSpriteViewInv_C* svCell4; // 0x600
	UfrmSpriteViewInv_C* svCell5; // 0x608
	UfrmSpriteViewInv_C* svCell6; // 0x610
	UfrmSpriteViewInv_C* svCell7; // 0x618
	UfrmSpriteViewInv_C* svCell8; // 0x620
	UfrmSpriteViewInv_C* svCell9; // 0x628
	UfrmSpriteViewInv_C* svGadget0; // 0x630
	UfrmSpriteViewInv_C* svGadget1; // 0x638
	UfrmSpriteViewInv_C* svGadget2; // 0x640
	UfrmSpriteViewInv_C* svGadget3; // 0x648
	UfrmSpriteViewInv_C* svGlasses; // 0x650
	UfrmSpriteViewInv_C* svGloves; // 0x658
	UfrmSpriteViewInv_C* svHelmet; // 0x660
	UfrmSpriteViewEquip_C* svJacket; // 0x668
	UfrmSpriteViewInv_C* svJacket0; // 0x670
	UfrmSpriteViewInv_C* svJacket1; // 0x678
	UfrmSpriteViewInv_C* svJacket2; // 0x680
	UfrmSpriteViewInv_C* svJacket3; // 0x688
	UfrmSpriteViewInv_C* svLootBox0; // 0x690
	UfrmSpriteViewInv_C* svLootBox1; // 0x698
	UfrmSpriteViewInv_C* svLootBox10; // 0x6a0
	UfrmSpriteViewInv_C* svLootBox11; // 0x6a8
	UfrmSpriteViewInv_C* svLootBox12; // 0x6b0
	UfrmSpriteViewInv_C* svLootBox13; // 0x6b8
	UfrmSpriteViewInv_C* svLootBox14; // 0x6c0
	UfrmSpriteViewInv_C* svLootBox15; // 0x6c8
	UfrmSpriteViewInv_C* svLootBox16; // 0x6d0
	UfrmSpriteViewInv_C* svLootBox17; // 0x6d8
	UfrmSpriteViewInv_C* svLootBox18; // 0x6e0
	UfrmSpriteViewInv_C* svLootBox19; // 0x6e8
	UfrmSpriteViewInv_C* svLootBox2; // 0x6f0
	UfrmSpriteViewInv_C* svLootBox20; // 0x6f8
	UfrmSpriteViewInv_C* svLootBox21; // 0x700
	UfrmSpriteViewInv_C* svLootBox22; // 0x708
	UfrmSpriteViewInv_C* svLootBox23; // 0x710
	UfrmSpriteViewInv_C* svLootBox24; // 0x718
	UfrmSpriteViewInv_C* svLootBox25; // 0x720
	UfrmSpriteViewInv_C* svLootBox26; // 0x728
	UfrmSpriteViewInv_C* svLootBox27; // 0x730
	UfrmSpriteViewInv_C* svLootBox28; // 0x738
	UfrmSpriteViewInv_C* svLootBox29; // 0x740
	UfrmSpriteViewInv_C* svLootBox3; // 0x748
	UfrmSpriteViewInv_C* svLootBox30; // 0x750
	UfrmSpriteViewInv_C* svLootBox31; // 0x758
	UfrmSpriteViewInv_C* svLootBox32; // 0x760
	UfrmSpriteViewInv_C* svLootBox33; // 0x768
	UfrmSpriteViewInv_C* svLootBox34; // 0x770
	UfrmSpriteViewInv_C* svLootBox35; // 0x778
	UfrmSpriteViewInv_C* svLootBox4; // 0x780
	UfrmSpriteViewInv_C* svLootBox5; // 0x788
	UfrmSpriteViewInv_C* svLootBox6; // 0x790
	UfrmSpriteViewInv_C* svLootBox7; // 0x798
	UfrmSpriteViewInv_C* svLootBox8; // 0x7a0
	UfrmSpriteViewInv_C* svLootBox9; // 0x7a8
	UfrmSpriteViewInv_C* svMask; // 0x7b0
	UfrmQuickSlot_C* svQuickSlot0; // 0x7b8
	UfrmQuickSlot_C* svQuickSlot1; // 0x7c0
	UfrmQuickSlot_C* svQuickSlot10; // 0x7c8
	UfrmQuickSlot_C* svQuickSlot2; // 0x7d0
	UfrmQuickSlot_C* svQuickSlot3; // 0x7d8
	UfrmQuickSlot_C* svQuickSlot4; // 0x7e0
	UfrmQuickSlot_C* svQuickSlot5; // 0x7e8
	UfrmQuickSlot_C* svQuickSlot6; // 0x7f0
	UfrmQuickSlot_C* svQuickSlot7; // 0x7f8
	UfrmQuickSlot_C* svQuickSlot8; // 0x800
	UfrmQuickSlot_C* svQuickSlot9; // 0x808
	UfrmSpriteViewEquip_C* svTrous; // 0x810
	UfrmSpriteViewInv_C* svTrous0; // 0x818
	UfrmSpriteViewInv_C* svTrous1; // 0x820
	UfrmSpriteViewInv_C* svTrous2; // 0x828
	UfrmSpriteViewInv_C* svTrous3; // 0x830
	UfrmSpriteViewEquip_C* svVest; // 0x838
	UfrmSpriteViewInv_C* svVest0; // 0x840
	UfrmSpriteViewInv_C* svVest1; // 0x848
	UfrmSpriteViewInv_C* svVest10; // 0x850
	UfrmSpriteViewInv_C* svVest11; // 0x858
	UfrmSpriteViewInv_C* svVest2; // 0x860
	UfrmSpriteViewInv_C* svVest3; // 0x868
	UfrmSpriteViewInv_C* svVest4; // 0x870
	UfrmSpriteViewInv_C* svVest5; // 0x878
	UfrmSpriteViewInv_C* svVest6; // 0x880
	UfrmSpriteViewInv_C* svVest7; // 0x888
	UfrmSpriteViewInv_C* svVest8; // 0x890
	UfrmSpriteViewInv_C* svVest9; // 0x898
	UfrmSpriteViewInv_C* svWeapon0; // 0x8a0
	UfrmSpriteViewInv_C* svWeapon0_SubItem0; // 0x8a8
	UfrmSpriteViewInv_C* svWeapon0_SubItem1; // 0x8b0
	UfrmSpriteViewInv_C* svWeapon0_SubItem2; // 0x8b8
	UfrmSpriteViewInv_C* svWeapon0_SubItem3; // 0x8c0
	UfrmSpriteViewInv_C* svWeapon0_SubItem4; // 0x8c8
	UfrmSpriteViewInv_C* svWeapon1; // 0x8d0
	UfrmSpriteViewInv_C* svWeapon1_SubItem0; // 0x8d8
	UfrmSpriteViewInv_C* svWeapon1_SubItem1; // 0x8e0
	UfrmSpriteViewInv_C* svWeapon1_SubItem2; // 0x8e8
	UfrmSpriteViewInv_C* svWeapon1_SubItem3; // 0x8f0
	UfrmSpriteViewInv_C* svWeapon1_SubItem4; // 0x8f8
	UfrmSpriteViewInv_C* svWeapon2; // 0x900
	UfrmSpriteViewInv_C* svWeapon2_SubItem0; // 0x908
	UfrmSpriteViewInv_C* svWeapon2_SubItem1; // 0x910
	UfrmSpriteViewInv_C* svWeapon2_SubItem2; // 0x918
	UfrmSpriteViewInv_C* svWeapon2_SubItem3; // 0x920
	UfrmSpriteViewInv_C* svWeapon2_SubItem4; // 0x928
	UfrmGroundItem_C* FSelectedGroundSpriteView_ForHint; // 0x930
	UfrmGroundItem_C* FSelectedGroundSpriteView_ForDraggingItem; // 0x938
	USFPSUserWidget_EquipItem* FSelectedEquipSpriteView_ForDraggingItem; // 0x940
	USFPSUserWidget_EquipItem* FSelectedEquipSpriteView_ForHint; // 0x948
	bool FMouseRightButtonIsDowned; // 0x950
	bool FMouseLeftButtonIsDowned; // 0x951
};

struct AM_TripwireTrap_03_C : At_LocationCraftActor_C {
	UBoxComponent* Interaction; // 0x358
	UBoxComponent* GrenadeCollision; // 0x360
	UBoxComponent* ExplosionCollision; // 0x368
	USFPSACTripwireTrap* ACTripwireTrap; // 0x370
	USFPSACBaseCollision* SFPSACBaseCollision1; // 0x378
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

struct USoundAttenuation : UObject {
	FSoundAttenuationSettings Attenuation; // 0x28
};

struct UGizmoConstantFrameAxisSource : UObject {
	FVector Origin; // 0x30
	FVector Direction; // 0x3c
	FVector TangentX; // 0x48
	FVector TangentY; // 0x54
};

struct UTestMovieSceneSubTrack : UMovieSceneSubTrack {
	TArray<UMovieSceneSection*> SectionArray; // 0xa0
};

struct UInterpTrackFloatBase : UInterpTrack {
	FInterpCurveFloat FloatTrack; // 0x70
	float CurveTension; // 0x88
};

struct UAnimCompress_RemoveTrivialKeys : UAnimCompress {
	float MaxPosDiff; // 0x40
	float MaxAngleDiff; // 0x44
	float MaxScaleDiff; // 0x48
};

struct UfrmQuickSlot_C : USFPSUserWidget_QuickSlot {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c8
	UButton* btnMain; // 0x2d0
	USFPSUserWidget_EquipItem* pnMain; // 0x2d8
};

struct UEnvQueryTest_Distance : UEnvQueryTest {
	EEnvTestDistance TestMode; // 0x1f8
	UEnvQueryContext* DistanceTo; // 0x200
};

struct UMyPluginObject : UObject {
	FMyPluginStruct MyStruct; // 0x28
};

struct UEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator {
	FEnvTraceData ProjectionData; // 0x50
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

struct UBackgroundBlurSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UMovieSceneCameraShakeSourceShakeTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> CameraShakeSections; // 0x98
};

struct UScrollBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FScrollBoxStyle ScrollBoxStyle; // 0x30
};

struct UVaRestRequestJSON : UObject {
	FMulticastInlineDelegate OnRequestComplete; // 0x28
	FMulticastInlineDelegate OnRequestFail; // 0x38
	int32_t ResponseSize; // 0x88
	FString ResponseContent; // 0x90
	bool bIsValidJsonResponse; // 0xa0
	UVaRestJsonObject* RequestJsonObj; // 0xb0
	UVaRestJsonObject* ResponseJsonObj; // 0xe8
};

struct UMaterialExpressionFmod : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct AAtmosphericFog : AInfo {
	UAtmosphericFogComponent* AtmosphericFogComponent; // 0x220
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
	float StopTracingTransmittanceThreshold; // 0x234
};

struct UEnvQueryOption : UObject {
	UEnvQueryGenerator* Generator; // 0x28
	TArray<UEnvQueryTest*> Tests; // 0x30
};

struct USoundSubmixBase : UObject {
	TArray<USoundSubmixBase*> ChildSubmixes; // 0x28
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

struct UDatasmithPointLightComponentTemplate : UDatasmithObjectTemplate {
	ELightUnits IntensityUnits; // 0x30
	float SourceRadius; // 0x34
	float SourceLength; // 0x38
	float AttenuationRadius; // 0x3c
};

struct UUserDefinedEnum : UEnum {
	TMap<FName, FText> DisplayNameMap; // 0x60
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

struct APartyBeaconHost : AOnlineBeaconHostObject {
	UPartyBeaconState* State; // 0x248
	bool bLogoutOnSessionTimeout; // 0x2b0
	float SessionTimeoutSecs; // 0x2b4
	float TravelSessionTimeoutSecs; // 0x2b8
};

struct ARadialForceActor : ARigidBodyBase {
	URadialForceComponent* ForceComponent; // 0x220
};

struct Aweapon_firearms_smg_hkmp5_C : At_FireArm_C {
	UStaticMeshComponent* DTK; // 0x7e0
	UStaticMeshComponent* Glow; // 0x7e8
	USpotLightComponent* Light; // 0x7f0
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x7f8
	UStaticMeshComponent* MagazineFull; // 0x800
	UStaticMeshComponent* MagazineEmpty; // 0x808
};

struct USourceEffectWaveShaperPreset : USoundEffectSourcePreset {
	FSourceEffectWaveShaperSettings Settings; // 0x98
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

struct UInputActionDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputActionDelegateBinding> InputActionDelegateBindings; // 0x28
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

struct USFPSAI_DRandom : UBTDecorator {
	int32_t Chance; // 0x68
};

struct UModelComponent : UPrimitiveComponent {
	UBodySetup* ModelBodySetup; // 0x468
};

struct UWidgetTree : UObject {
	UWidget* RootWidget; // 0x28
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

struct UNavRelevantComponent : UActorComponent {
	char bAttachToOwnersRoot : 1; // 0xd4
	UObject* CachedNavParent; // 0xd8
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
	FMulticastInlineDelegate OnUnHovered; // 0x408
};

struct UARSaveWorldAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
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
	FVector2D LocalHitLocation; // 0x348
	FVector2D LastLocalHitLocation; // 0x350
	UWidgetComponent* HoveredWidgetComponent; // 0x358
	FHitResult LastHitResult; // 0x360
	bool bIsHoveredWidgetInteractable; // 0x3e8
	bool bIsHoveredWidgetFocusable; // 0x3e9
	bool bIsHoveredWidgetHitTestVisible; // 0x3ea
};

struct AVectorFieldVolume : AActor {
	UVectorFieldComponent* VectorFieldComponent; // 0x220
};

struct UCanvasPanelSlot : UPanelSlot {
	FAnchorData LayoutData; // 0x38
	bool bAutoSize; // 0x60
	int32_t ZOrder; // 0x64
};

struct UFormSplit_C : UUserWidget {
	UButton* btnCancel; // 0x268
	UButton* btnDown; // 0x270
	UButton* btnMax; // 0x278
	UButton* btnMin; // 0x280
	UButton* btnOk; // 0x288
	UButton* btnUp; // 0x290
	UEditableTextBox* edText; // 0x298
	UImage* imgBackground0; // 0x2a0
	UfrmSpriteViewInv_C* svItem; // 0x2a8
};

struct UAudioCaptureComponent : USynthComponent {
	int32_t JitterLatencyFrames; // 0x6c0
};

struct UMovieSceneObjectPropertySection : UMovieSceneSection {
	FMovieSceneObjectPathChannel ObjectChannel; // 0xe8
};

struct UAISenseConfig : UObject {
	FColor DebugColor; // 0x28
	float MaxAge; // 0x2c
	char bStartsEnabled : 1; // 0x30
};

struct UToIntegerField : UFieldNodeInt {
	UFieldNodeFloat* FloatField; // 0xb0
};

struct UTestMovieSceneTrack : UMovieSceneTrack {
	bool bHighPassFilter; // 0x98
	TArray<UMovieSceneSection*> SectionArray; // 0xa0
};

struct UEnvQueryTest_Project : UEnvQueryTest {
	FEnvTraceData ProjectionData; // 0x1f8
};

struct UVOIPTalker : UActorComponent {
	FVoiceSettings Settings; // 0xb0
};

struct ASFPSBaseItem : ASFPSActor {
	float AfterDropLifeTime; // 0x238
	FSFPSStaticItemParams StaticParams; // 0x250
	int32_t Count; // 0x2b0
	bool bItemInCell; // 0x2b4
	bool bDeleteAfterDrop; // 0x2b5
	ESFPSLootRarity LootRarity; // 0x2b6
	TArray<FSFPSBaseItemComponent> Components; // 0x2b8
	ESFPSBaseItemDisassembleText DisassembleText; // 0x2c8
	AActor* OwnerLootSpawner; // 0x2d0
	UMeshComponent* MeshRef; // 0x2d8
	UBoxComponent* TraceRef; // 0x2e0
	bool bDeleteAfterUseInInventory; // 0x2e8
	ESFPSItemMoveType ItemMoveType; // 0x2e9
	TArray<FVector> LootTraces; // 0x300
};

struct UCameraShakeSourceComponent : USceneComponent {
	ECameraShakeAttenuation Attenuation; // 0x1f8
	float InnerAttenuationRadius; // 0x1fc
	float OuterAttenuationRadius; // 0x200
	UCameraShakeBase* CameraShake; // 0x208
	bool bAutoStart; // 0x210
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

struct UUniformGridPanel : UPanelWidget {
	FMargin SlotPadding; // 0x120
	float MinDesiredSlotWidth; // 0x130
	float MinDesiredSlotHeight; // 0x134
};

struct USourceEffectFilterPreset : USoundEffectSourcePreset {
	FSourceEffectFilterSettings Settings; // 0xb0
};

struct UAnimSharingAdditiveInstance : UAnimInstance {
	TWeakObjectPtr<USkeletalMeshComponent> BaseComponent; // 0x2b8
	TWeakObjectPtr<UAnimSequence> AdditiveAnimation; // 0x2c0
	float Alpha; // 0x2c8
	bool bStateBool; // 0x2cc
};

struct UTimeSynchronizationSource : UObject {
	bool bUseForSynchronization; // 0x28
	int32_t FrameOffset; // 0x2c
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

struct USFPSAI_TSetStateTime : UBTTaskNode {
	float MinTime; // 0x70
	float MaxTime; // 0x74
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

struct AMaterialInstanceActor : AActor {
	TArray<AActor*> TargetActors; // 0x220
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

struct UMaterialExpressionDesaturation : UMaterialExpression {
	FExpressionInput Input; // 0x40
	FExpressionInput Fraction; // 0x54
	FLinearColor LuminanceFactors; // 0x68
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

struct UParticleModuleRotation_Seeded : UParticleModuleRotation {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x60
};

struct AVolumetricLightmapDensityVolume : AVolume {
	FInt32Interval AllowedMipLevelRange; // 0x258
};

struct USynthComponentMonoWaveTable : USynthComponent {
	FMulticastInlineDelegate OnTableAltered; // 0x6c0
	FMulticastInlineDelegate OnNumTablesChanged; // 0x6d0
	UMonoWaveTableSynthPreset* CurrentPreset; // 0x6e0
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

struct USFPSAmbientSoundManager : UObject {
	TArray<ASFPSAmbientSound*> ASList_BaseAmbSounds; // 0x28
	TArray<ASFPSAmbientSound*> ASList_AmbSounds; // 0x38
	TArray<UAudioComponent*> ACList_OtherSoundsSounds; // 0x48
	float WindScale; // 0x5c
	float WindSpeed; // 0x68
};

struct UMaterialExpression : UObject {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	char bIsParameterExpression : 1; // 0x38
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

struct UHudSettings : UObject {
	char bShowHUD : 1; // 0x28
	TArray<FName> DebugDisplay; // 0x30
};

struct UInterpTrackFloatParticleParam : UInterpTrackFloatBase {
	FName ParamName; // 0x90
};

struct AAudioVolume : AVolume {
	float Priority; // 0x258
	char bEnabled : 1; // 0x25c
	FReverbSettings Settings; // 0x260
	FInteriorSettings AmbientZoneSettings; // 0x280
	TArray<FAudioVolumeSubmixSendSettings> SubmixSendSettings; // 0x2a8
	TArray<FAudioVolumeSubmixOverrideSettings> SubmixOverrideSettings; // 0x2b8
};

struct Adevice_flashlight_01_C : At_Device_C {
	UStaticMeshComponent* Glow; // 0x4a0
	USpotLightComponent* Light; // 0x4a8
};

struct UfrmTraderItem_C : USFPSUserWidget_TraderItem {
	UButton* btnAction0; // 0x310
};

struct AARSharedWorldGameState : AGameState {
	TArray<char> PreviewImageData; // 0x290
	TArray<char> ARWorldData; // 0x2a0
	int32_t PreviewImageBytesTotal; // 0x2b0
	int32_t ARWorldBytesTotal; // 0x2b4
	int32_t PreviewImageBytesDelivered; // 0x2b8
	int32_t ARWorldBytesDelivered; // 0x2bc
};

struct UGizmoAxisIntervalParameterSource : UGizmoBaseFloatParameterSource {
	TScriptInterface<IGizmoFloatParameterSource> FloatParameterSource; // 0x48
	float MinParameter; // 0x58
	float MaxParameter; // 0x5c
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

struct USoundNodeMixer : USoundNode {
	TArray<float> InputVolume; // 0x48
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
	TArray<FString> PlatformCrossplayRestrictions; // 0x58
	TArray<FPartyBeaconCrossplayPlatformMapping> PlatformTypeMapping; // 0x68
	bool bEnableRemovalRequests; // 0x78
	TArray<FPartyReservation> Reservations; // 0x80
};

struct UAISense_Blueprint : UAISense {
	UUserDefinedStruct* ListenerDataType; // 0x80
	TArray<UAIPerceptionComponent*> ListenerContainer; // 0x88
	TArray<UAISenseEvent*> UnprocessedEvents; // 0x98
};

struct ASFPSPatrol : AActor {
	TArray<USFPSPatrolPoint*> PatrolPoints; // 0x238
	USFPSAICharacterSets* CharacterSets; // 0x248
	USFPSAIConfig* AIConfig; // 0x250
	USFPSACRoute* Route; // 0x260
	int32_t MaxPatrolPoints; // 0x268
	float TimeDeviation; // 0x26c
	float DeadTimeMin; // 0x270
	float DeadTimeMax; // 0x274
	bool bCanSpawnSpecialPatrolPoints; // 0x278
};

struct UGameplayTask_WaitDelay : UGameplayTask {
	FMulticastInlineDelegate OnFinish; // 0x68
};

struct USlateBrushAsset : UObject {
	FSlateBrush Brush; // 0x28
};

struct UFormLockBreaking_C : UUserWidget {
	UImage* Image_85; // 0x268
};

struct ASpectatorBeaconHost : AOnlineBeaconHostObject {
	USpectatorBeaconState* State; // 0x248
	bool bLogoutOnSessionTimeout; // 0x2b0
	float SessionTimeoutSecs; // 0x2b4
	float TravelSessionTimeoutSecs; // 0x2b8
};

struct USoundNodeDistanceCrossFade : USoundNode {
	TArray<FDistanceDatum> CrossFadeInput; // 0x48
};

struct UParticleModuleVectorFieldGlobal : UParticleModuleVectorFieldBase {
	char bOverrideGlobalVectorFieldTightness : 1; // 0x30
	float GlobalVectorFieldScale; // 0x34
	float GlobalVectorFieldTightness; // 0x38
};

struct USpinBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FSpinBoxStyle SpinBoxStyle; // 0x30
};

struct UMaterialExpressionLogarithm10 : UMaterialExpression {
	FExpressionInput X; // 0x40
};

struct USubmixEffectFlexiverbPreset : USoundEffectSubmixPreset {
	FSubmixEffectFlexiverbSettings Settings; // 0xa0
};

struct ULocalizedOverlays : UOverlays {
	UBasicOverlays* DefaultOverlays; // 0x28
	TMap<FString, UBasicOverlays*> LocaleToOverlaysMap; // 0x30
};

struct UABP_weapon_firearms_rifle_aksu_C : USFPSWeaponAnimInstance_AR {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	FAnimNode_Root AnimGraphNode_Root; // 0x2e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x318
	FAnimNode_Slot AnimGraphNode_Slot; // 0x398
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

struct UAnimSequenceBase : UAnimationAsset {
	TArray<FAnimNotifyEvent> Notifies; // 0x80
	float SequenceLength; // 0x90
	float RateScale; // 0x94
	FRawCurveTracks RawCurveData; // 0x98
};

struct UParticleModuleAttractorLine : UParticleModuleAttractorBase {
	FVector EndPoint0; // 0x30
	FVector EndPoint1; // 0x3c
	FRawDistributionFloat Range; // 0x48
	FRawDistributionFloat Strength; // 0x78
};

struct At_MuzzleAttachement_C : ASFPSWeaponMF_MuzzleAttachment {
	UBoxComponent* Trace; // 0x380
	UStaticMeshComponent* Mesh; // 0x388
};

struct UBTDecorator_TagCooldown : UBTDecorator {
	FGameplayTag CooldownTag; // 0x68
	float CooldownDuration; // 0x70
	bool bAddToExistingDuration; // 0x74
	bool bActivatesCooldown; // 0x75
};

struct Ascope_opt_hunting_C : At_Sight_C {
	UStaticMeshComponent* hunting_reticles; // 0x3d0
};

struct ASFPSItemSkin : ASFPSBaseItem {
	TArray<UMaterialInstance*> Materials; // 0x310
};

struct UConstantQNRT : UAudioSynesthesiaNRT {
	UConstantQNRTSettings* Settings; // 0x78
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

struct UMaterialExpressionVectorParameter : UMaterialExpressionParameter {
	FLinearColor DefaultValue; // 0x58
	bool bUseCustomPrimitiveData; // 0x68
	char PrimitiveDataIndex; // 0x69
};

struct UMovieSceneMaterialParameterCollectionTrack : UMovieSceneMaterialTrack {
	UMaterialParameterCollection* MPC; // 0xa8
};

struct UDcxVehicleDriveComponent : UDcxVehicleWheelsComponent {
	FDcxVehicleEngineData EngineData; // 0x240
	FDcxVehicleGearboxData GearboxData; // 0x2e0
	FDcxVehicleClutchData ClutchData; // 0x310
	bool bAutoReverse; // 0x320
	float WrongDirectionThreshold; // 0x324
	bool bAutoBrake; // 0x328
	float StopThreshold; // 0x32c
	FRuntimeFloatCurve SteerCurve; // 0x330
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

struct USFPSAI_TChangePose : UBTTaskNode {
	ESFPSCharacterPose Pose; // 0x70
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

struct UABP_weapon_firearms_smg_p90_C : USFPSWeaponAnimInstance_AR {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	FAnimNode_Root AnimGraphNode_Root; // 0x2e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x318
	FAnimNode_Slot AnimGraphNode_Slot; // 0x398
};

struct UMovieSceneColorSection : UMovieSceneSection {
	FMovieSceneFloatChannel RedCurve; // 0xf0
	FMovieSceneFloatChannel GreenCurve; // 0x190
	FMovieSceneFloatChannel BlueCurve; // 0x230
	FMovieSceneFloatChannel AlphaCurve; // 0x2d0
};

struct UMovieSceneSubTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x90
};

struct UAITask : UGameplayTask {
	AAIController* OwnerController; // 0x68
};

struct UParticleModuleLocation_Seeded : UParticleModuleLocation {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct ABM_WallBig_01_C : At_LocationCraftActor_C {
	USFPSACSnapComponent* SFPSACSnap; // 0x358
	USFPSACDoor* SFPSACDoor; // 0x360
	UBoxComponent* overlap1; // 0x368
	UStaticMeshComponent* Door_02; // 0x370
	UBoxComponent* Overlap; // 0x378
	UStaticMeshComponent* Door_01; // 0x380
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

struct USFPSHiddenStash : UObject {
	ASFPSLootBoxSpawner* LootBoxSpawner; // 0x30
};

struct UFormDlg_Ok_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UButton* btnOk; // 0x270
	UTextBlock* lbOk; // 0x278
};

struct UCurveLinearColorAtlas : UTexture2D {
	uint32_t TextureSize; // 0x1a0
	char bSquareResolution : 1; // 0x1a4
	uint32_t TextureHeight; // 0x1a8
	TArray<UCurveLinearColor*> GradientCurves; // 0x1b0
};

struct UDialogueVoice : UObject {
	EGrammaticalGender Gender; // 0x28
	EGrammaticalNumber Plurality; // 0x29
	FGuid LocalizationGUID; // 0x2c
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

struct ASFPSAirDropPlane : AActor {
	FVector Velocity; // 0x224
	UProjectileMovementComponent* MovementComponent; // 0x238
};

struct UMaterialExpressionTransformPosition : UMaterialExpression {
	FExpressionInput Input; // 0x40
	EMaterialPositionTransformSource TransformSourceType; // 0x54
	EMaterialPositionTransformSource TransformType; // 0x55
};

struct UGenlockedTimecodeProvider : UTimecodeProvider {
	bool bUseGenlockToCount; // 0x30
};

struct UPhysicsAsset : UObject {
	TArray<int32_t> BoundsBodies; // 0x30
	TArray<USkeletalBodySetup*> SkeletalBodySetups; // 0x40
	TArray<UPhysicsConstraintTemplate*> ConstraintSetup; // 0x50
	FSolverIterations SolverIterations; // 0x60
	EPhysicsAssetSolverType SolverType; // 0x7c
	char bNotForDedicatedServer : 1; // 0x7d
	UThumbnailInfo* ThumbnailInfo; // 0x120
	TArray<UBodySetup*> BodySetup; // 0x128
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

struct USoundNodeDoppler : USoundNode {
	float DopplerIntensity; // 0x48
	bool bUseSmoothing; // 0x4c
	float SmoothingInterpSpeed; // 0x50
};

struct UMovieSceneVectorSection : UMovieSceneSection {
	FMovieSceneFloatChannel Curves[0x4]; // 0xf0
	int32_t ChannelsUsed; // 0x370
};

struct USubmixEffectSubmixEQPreset : USoundEffectSubmixPreset {
	FSubmixEffectSubmixEQSettings Settings; // 0xa0
};

struct UCircularThrobber : UWidget {
	int32_t NumberOfPieces; // 0x108
	float Period; // 0x10c
	float Radius; // 0x110
	USlateBrushAsset* PieceImage; // 0x118
	FSlateBrush Image; // 0x120
	bool bEnableRadius; // 0x1a8
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

struct UDatasmithGLTFSceneImportData : UDatasmithSceneImportData {
	FString Generator; // 0x28
	float Version; // 0x38
	FString Author; // 0x40
	FString License; // 0x50
	FString Source; // 0x60
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

struct UInterpTrackInstVectorMaterialParam : UInterpTrackInst {
	TArray<UMaterialInstanceDynamic*> MaterialInstances; // 0x28
	TArray<FVector> ResetVectors; // 0x38
	TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x48
	UInterpTrackVectorMaterialParam* InstancedTrack; // 0x58
};

struct Aweapon_firearms_snip_mosin_short_C : At_FireArm_C {
	UStaticMeshComponent* DeviceLeftMount; // 0x7e0
	UStaticMeshComponent* ShellMagazine; // 0x7e8
	UStaticMeshComponent* ShellBarrelEmpty; // 0x7f0
	UStaticMeshComponent* ShellBarrelFull; // 0x7f8
	UStaticMeshComponent* SightClose; // 0x800
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x808
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

struct UInterpTrackVectorProp : UInterpTrackVectorBase {
	FName PropertyName; // 0x90
};

struct UNavModifierComponent : UNavRelevantComponent {
	UNavArea* AreaClass; // 0xe0
	FVector FailsafeExtent; // 0xe8
	char bIncludeAgentHeight : 1; // 0xf4
};

struct UDatasmithActorTemplate : UDatasmithObjectTemplate {
	TSet<FName> Layers; // 0x30
	TSet<FName> Tags; // 0x80
};

struct Aweapmf_DTK_762x39_01_C : At_MuzzleAttachement_C {
	USceneComponent* Muzzle; // 0x390
};

struct UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData {
	EFieldResolutionType ResolutionType; // 0xb0
};

struct USFPSAnimEvent_Weap_ReloadingFlag : UAnimNotify {
	bool bReloading; // 0x38
	bool bForCursor; // 0x39
};

struct UPreviewMeshCollection : UDataAsset {
	USkeleton* Skeleton; // 0x38
	TArray<FPreviewMeshCollectionEntry> SkeletalMeshes; // 0x40
};

struct UParticleModuleVelocityBase : UParticleModule {
	char bInWorldSpace : 1; // 0x30
	char bApplyOwnerScale : 1; // 0x30
};

struct UEnvQueryGenerator_BlueprintBase : UEnvQueryGenerator {
	FText GeneratorsActionDescription; // 0x50
	UEnvQueryContext* Context; // 0x68
	UEnvQueryItemType* GeneratedItemType; // 0x70
};

struct UEnvQueryTest_Trace : UEnvQueryTest {
	FEnvTraceData TraceData; // 0x1f8
	FAIDataProviderBoolValue TraceFromContext; // 0x228
	FAIDataProviderFloatValue ItemHeightOffset; // 0x260
	FAIDataProviderFloatValue ContextHeightOffset; // 0x298
	UEnvQueryContext* Context; // 0x2d0
};

struct UCapsuleComponent : UShapeComponent {
	float CapsuleHalfHeight; // 0x468
	float CapsuleRadius; // 0x46c
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

struct UBTDecorator_Loop : UBTDecorator {
	int32_t NumLoops; // 0x68
	bool bInfiniteLoop; // 0x6c
	float InfiniteLoopTimeoutTime; // 0x70
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

struct USFPSACTripwireTrap : UActorComponent {
	FSFPSLoginData ShooterLoginData; // 0xc0
	ESFPSTrapType TrapType; // 0xe8
	ASFPSBaseMissileProjectile* MissileProjectile; // 0xf0
	UStaticMesh* ExplosionMesh; // 0xf8
	ASFPSBaseItem* CutterGrenade; // 0x100
	float ChainExplosionDistanceSquared; // 0x10c
};

struct UMaterialExpressionScalarParameter : UMaterialExpressionParameter {
	float DefaultValue; // 0x58
	bool bUseCustomPrimitiveData; // 0x5c
	char PrimitiveDataIndex; // 0x5d
};

struct UPlayMontageCallbackProxy : UObject {
	FMulticastInlineDelegate OnCompleted; // 0x28
	FMulticastInlineDelegate OnBlendOut; // 0x38
	FMulticastInlineDelegate OnInterrupted; // 0x48
	FMulticastInlineDelegate OnNotifyBegin; // 0x58
	FMulticastInlineDelegate OnNotifyEnd; // 0x68
};

struct UTextureLODSettings : UObject {
	TArray<FTextureLODGroup> TextureLODGroups; // 0x28
};

struct UMovieSceneCameraShakeSourceTriggerSection : UMovieSceneSection {
	FMovieSceneCameraShakeSourceTriggerChannel Channel; // 0xe8
};

struct USFPSCreatePlayerHandler : UObject {
	AHUD* CreatePlayerHUD; // 0x88
	UUserWidget* FormCreatePlayer; // 0x90
};

struct UGameplayTagsDeveloperSettings : UDeveloperSettings {
	FString DeveloperConfigName; // 0x38
	FName FavoriteTagSource; // 0x48
};

struct UParticleModuleVelocity : UParticleModuleVelocityBase {
	FRawDistributionVector StartVelocity; // 0x38
	FRawDistributionFloat StartVelocityRadial; // 0x80
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

struct APostProcessVolume : AVolume {
	FPostProcessSettings Settings; // 0x260
	float Priority; // 0x7c0
	float BlendRadius; // 0x7c4
	float BlendWeight; // 0x7c8
	char bEnabled : 1; // 0x7cc
	char bUnbound : 1; // 0x7cc
};

struct UInputRouter : UObject {
	bool bAutoInvalidateOnHover; // 0x28
	bool bAutoInvalidateOnCapture; // 0x29
	UInputBehaviorSet* ActiveInputBehaviors; // 0x38
};

struct UBrainComponent : UActorComponent {
	UBlackboardComponent* BlackboardComp; // 0xb8
	AAIController* AIOwner; // 0xc0
};

struct USynthSamplePlayer : USynthComponent {
	USoundWave* SoundWave; // 0x6c0
	FMulticastInlineDelegate OnSampleLoaded; // 0x6c8
	FMulticastInlineDelegate OnSamplePlaybackProgress; // 0x6d8
};

struct UGizmoTransformChangeStateTarget : UObject {
	TScriptInterface<IToolContextTransactionProvider> TransactionManager; // 0x50
};

struct UAREnvironmentCaptureProbe : UARTrackedGeometry {
	FVector Extent; // 0xf8
	UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture; // 0x108
};

struct USynthSound : USoundWaveProcedural {
	USynthComponent* OwningSynthComponent; // 0x3c0
};

struct UParticleModuleLocationPrimitiveSphere : UParticleModuleLocationPrimitiveBase {
	FRawDistributionFloat StartRadius; // 0xb0
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

struct UMaterialExpressionDistanceToNearestSurface : UMaterialExpression {
	FExpressionInput Position; // 0x40
};

struct UShapeComponent : UPrimitiveComponent {
	UBodySetup* ShapeBodySetup; // 0x450
	UNavAreaBase* AreaClass; // 0x458
	FColor ShapeColor; // 0x460
	char bDrawOnlyIfSelected : 1; // 0x464
	char bShouldCollideWhenPlacing : 1; // 0x464
	char bDynamicObstacle : 1; // 0x464
};

struct UInAppPurchaseRestoreCallbackProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct USoundGroups : UObject {
	TArray<FSoundGroup> SoundGroupProfiles; // 0x28
};

struct UDataDrivenConsoleVariableSettings : UDeveloperSettings {
	TArray<FDataDrivenConsoleVariable> CVarsArray; // 0x50
};

struct UMaterialExpressionNamedRerouteUsage : UMaterialExpressionNamedRerouteBase {
	UMaterialExpressionNamedRerouteDeclaration* Declaration; // 0x40
	FGuid DeclarationGuid; // 0x48
};

struct ALandscapeStreamingProxy : ALandscapeProxy {
	LazyObjectProperty LandscapeActor; // 0x598
};

struct UMaterialExpressionConstant3Vector : UMaterialExpression {
	FLinearColor Constant; // 0x40
};

struct UMaterialExpressionRound : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct USFPSMessageHandler : UObject {
	UUserWidget* MessageForm; // 0x28
	UUserWidget* MessageMemoForm; // 0x70
	UUserWidget* MessageItemForm; // 0x90
	UUserWidget* FormDlg_Timer; // 0x108
	UUserWidget* FormDlg_TimerInf; // 0x138
	UUserWidget* FormDead; // 0x158
	UUserWidget* SectorActivityForm; // 0x198
	UUserWidget* FormDlg_OkCancel; // 0x260
	UUserWidget* FormDlg_Ok; // 0x280
	UUserWidget* FormDlg_InputBox; // 0x290
	USFPSUserWidget_CodeInputBox* FormDlg_CodeInputBox; // 0x2b0
	UUserWidget* FormDlg_ItemList; // 0x2b8
};

struct Aweapmf_DTK_762x25_01_C : At_MuzzleAttachement_C {
	USceneComponent* Muzzle; // 0x390
};

struct UMRMeshComponent : UPrimitiveComponent {
	UMaterialInterface* Material; // 0x460
	UMaterialInterface* WireframeMaterial; // 0x468
	bool bCreateMeshProxySections; // 0x470
	bool bUpdateNavMeshOnMeshUpdate; // 0x471
	bool bNeverCreateCollisionMesh; // 0x472
	UBodySetup* CachedBodySetup; // 0x478
	TArray<UBodySetup*> BodySetups; // 0x480
};

struct ABP_SFPSAIController_C : ASFPSAIController {
	FName HomeLocation; // 0x3d8
	FName State; // 0x3e0
};

struct ASFPSWheeledVehicle : ADcxVehicle4W {
	FVector PassengerExitPoints[0x4]; // 0x2d8
	FVector PassengerAttachPoints[0x4]; // 0x308
	FText VehicleName; // 0x3e0
	float CollisionSweepDistance; // 0x3f8
	float CollisionSweepTime; // 0x3fc
	AActor* GreenArea; // 0x400
	ASFPSBaseCharacter* LastDriver; // 0x408
	ASFPSBaseCharacter* Passengers[0x4]; // 0x410
	int32_t InventorySize; // 0x430
	TArray<ASFPSBaseItem*> Inventory; // 0x438
	USFPSACVehicleSoundSystem* VehicleSoundSystem; // 0x448
	int32_t MaxDurability; // 0x450
	FSFPSVehicleParams Params; // 0x454
	bool bIsDying; // 0x458
	TArray<FVector> SightPoints; // 0x460
	FVector CameraAttachPoint; // 0x474
	float CameraDistance; // 0x480
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

struct ASFPSLootSpawner : ASFPSBaseLootSpawner {
	ASFPSBaseItem* Item; // 0x248
	ASFPSBaseItem* ItemSecondary; // 0x250
	ASFPSBaseItem* ItemClass; // 0x258
	ASFPSBaseItem* ItemClassSecondary; // 0x268
	FSFPSItemSetStruct ItemSet; // 0x288
};

struct UNavigationPath : UObject {
	FMulticastInlineDelegate PathUpdatedNotifier; // 0x28
	TArray<FVector> PathPoints; // 0x38
	ENavigationOptionFlag RecalculateOnInvalidation; // 0x48
};

struct APaperCharacter : ACharacter {
	UPaperFlipbookComponent* Sprite; // 0x4b8
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

struct Aweapon_steelarms_knife_01_C : At_SteelArm_C {
	USceneComponent* DamagePoint2; // 0x620
	USceneComponent* DamagePoint1; // 0x628
	USceneComponent* DamagePoint0; // 0x630
};

struct UMaterialExpressionShadingPathSwitch : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput Inputs[0x3]; // 0x54
};

struct UBTDecorator_Blackboard : UBTDecorator_BlackboardBase {
	int32_t IntValue; // 0x90
	float FloatValue; // 0x94
	FString StringValue; // 0x98
	FString CachedDescription; // 0xa8
	char OperationType; // 0xb8
	EBTBlackboardRestart NotifyObserver; // 0xb9
};

struct UGenlockedFixedRateCustomTimeStep : UGenlockedCustomTimeStep {
	FFrameRate FrameRate; // 0x28
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

struct UWidgetComponent : UMeshComponent {
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

struct UDistributionFloatParameterBase : UDistributionFloatConstant {
	FName ParameterName; // 0x40
	float MinInput; // 0x48
	float MaxInput; // 0x4c
	float MinOutput; // 0x50
	float MaxOutput; // 0x54
	DistributionParamMode ParamMode; // 0x58
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

struct UInterpCurveEdSetup : UObject {
	TArray<FCurveEdTab> Tabs; // 0x28
	int32_t ActiveTab; // 0x38
};

struct UAsyncActionLoadPrimaryAssetClassList : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UPoseAsset : UAnimationAsset {
	FPoseDataContainer PoseContainer; // 0x80
	bool bAdditivePose; // 0x110
	int32_t BasePoseIndex; // 0x114
	FName RetargetSource; // 0x118
	TArray<FTransform> RetargetSourceAssetReferencePose; // 0x120
};

struct AMagicLeapARPinRenderer : AActor {
	bool bInfoActorsVisibilityOverride; // 0x220
	TMap<FGuid, AMagicLeapARPinInfoActorBase*> AllInfoActors; // 0x228
	AMagicLeapARPinInfoActorBase* ClassToSpawn; // 0x280
};

struct UMaterialExpressionGetMaterialAttributes : UMaterialExpression {
	FMaterialAttributesInput MaterialAttributes; // 0x40
	TArray<FGuid> AttributeGetTypes; // 0x58
};

struct UInteractiveToolManager : UObject {
	UInteractiveTool* ActiveLeftTool; // 0x30
	UInteractiveTool* ActiveRightTool; // 0x38
	TMap<FString, UInteractiveToolBuilder*> ToolBuilders; // 0x90
};

struct ADatasmithAreaLightActor : AActor {
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

struct UDistributionVector : UDistribution {
	char bCanBeBaked : 1; // 0x30
	char bIsDirty : 1; // 0x30
	char bBakedDataSuccesfully : 1; // 0x30
};

struct UABP_weapon_firearms_gun_PM_C : USFPSWeaponAnimInstance_Gun {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	FAnimNode_Root AnimGraphNode_Root; // 0x2e8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x318
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x360
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x388
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x3b0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x3d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x400
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x428
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x450
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x4d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x500
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x580
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x5b0
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x630
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x660
};

struct Aweapon_firearms_snip_barrettm99_C : At_FireArm_C {
	UStaticMeshComponent* SightOpen; // 0x7e0
	UStaticMeshComponent* ShellBarrelFull; // 0x7e8
	UStaticMeshComponent* ShellBarrelEmpty; // 0x7f0
	UStaticMeshComponent* DeviceLeftMount; // 0x7f8
	UStaticMeshComponent* SightClose; // 0x800
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x808
};

struct UBTDecorator : UBTAuxiliaryNode {
	char bInverseCondition : 1; // 0x60
	EBTFlowAbortMode FlowAbortMode; // 0x64
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

struct AGeometryCollectionActor : AActor {
	UGeometryCollectionComponent* GeometryCollectionComponent; // 0x220
	UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x228
};

struct UABP_weapon_firearms_rifle_m4a1_C : USFPSWeaponAnimInstance_AR {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	FAnimNode_Root AnimGraphNode_Root; // 0x2e8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x318
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x360
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x388
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3b0
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x430
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x460
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4e0
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x510
};

struct UParticleModuleRotation : UParticleModuleRotationBase {
	FRawDistributionFloat StartRotation; // 0x30
};

struct URendererOverrideSettings : UDeveloperSettings {
	char bSupportAllShaderPermutations : 1; // 0x38
	char bForceRecomputeTangents : 1; // 0x38
};

struct UParticleModuleMeshRotationRateOverLife : UParticleModuleRotationRateBase {
	FRawDistributionVector RotRate; // 0x30
	char bScaleRotRate : 1; // 0x78
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

struct UPawnNoiseEmitterComponent : UActorComponent {
	char bAIPerceptionSystemCompatibilityMode : 1; // 0xb0
	FVector LastRemoteNoisePosition; // 0xb4
	float NoiseLifetime; // 0xc0
	float LastRemoteNoiseVolume; // 0xc4
	float LastRemoteNoiseTime; // 0xc8
	float LastLocalNoiseVolume; // 0xcc
	float LastLocalNoiseTime; // 0xd0
};

struct UDeviceProfileManager : UObject {
	TArray<UObject*> Profiles; // 0x28
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

struct UEnvQueryInstanceBlueprintWrapper : UObject {
	int32_t QueryID; // 0x30
	UEnvQueryItemType* ItemType; // 0x58
	int32_t OptionIndex; // 0x60
	FMulticastInlineDelegate OnQueryFinishedEvent; // 0x68
};

struct UAnimCurveCompressionSettings : UObject {
	UAnimCurveCompressionCodec* Codec; // 0x28
};

struct UParticleModuleColorScaleOverLife : UParticleModuleColorBase {
	FRawDistributionVector ColorScaleOverLife; // 0x30
	FRawDistributionFloat AlphaScaleOverLife; // 0x78
	char bEmitterTime : 1; // 0xa8
};

struct UBreakpoint : UObject {
	char bEnabled : 1; // 0x28
	UEdGraphNode* Node; // 0x30
	char bStepOnce : 1; // 0x38
	char bStepOnce_WasPreviouslyDisabled : 1; // 0x38
	char bStepOnce_RemoveAfterHit : 1; // 0x38
};

struct UNodeMappingContainer : UObject {
	TMap<FName, FNodeItem> SourceItems; // 0x28
	TMap<FName, FNodeItem> TargetItems; // 0x78
	TMap<FName, FName> SourceToTarget; // 0xc8
	TSoftObjectPtr<UObject> SourceAsset; // 0x118
	TSoftObjectPtr<UObject> TargetAsset; // 0x140
};

struct AReflectionCapture : AActor {
	UReflectionCaptureComponent* CaptureComponent; // 0x220
};

struct UBehaviorTreeComponent : UBrainComponent {
	TArray<UBTNode*> NodeInstances; // 0x128
	UBehaviorTree* DefaultBehaviorTreeAsset; // 0x278
};

struct APaperTileMapActor : AActor {
	UPaperTileMapComponent* RenderComponent; // 0x220
};

struct USoundCue : USoundBase {
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

struct UABP_weapon_firearms_sg_mp133_C : USFPSWeaponAnimInstance_SG {
	FPointerToUberGraphFrame UberGraphFrame; // 0x310
	FAnimNode_Root AnimGraphNode_Root; // 0x318
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x348
	FAnimNode_Slot AnimGraphNode_Slot; // 0x3c8
};

struct UParticleModuleMeshMaterial : UParticleModuleMaterialBase {
	TArray<UMaterialInterface*> MeshMaterials; // 0x30
};

struct UFieldSystemMetaDataIteration : UFieldSystemMetaData {
	int32_t Iterations; // 0xb0
};

struct AM_TripwireTrap_01_C : At_LocationCraftActor_C {
	UBoxComponent* Interaction; // 0x358
	UBoxComponent* GrenadeCollision; // 0x360
	UBoxComponent* ExplosionCollision; // 0x368
	USFPSACTripwireTrap* ACTripwireTrap; // 0x370
	USFPSACBaseCollision* SFPSACBaseCollision1; // 0x378
};

struct UPostProcessComponent : USceneComponent {
	FPostProcessSettings Settings; // 0x200
	float Priority; // 0x760
	float BlendRadius; // 0x764
	float BlendWeight; // 0x768
	char bEnabled : 1; // 0x76c
	char bUnbound : 1; // 0x76c
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

struct UABP_weapon_firearms_snip_mosin_C : USFPSWeaponAnimInstance_SR {
	FPointerToUberGraphFrame UberGraphFrame; // 0x300
	FAnimNode_Root AnimGraphNode_Root; // 0x308
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x338
	FAnimNode_Slot AnimGraphNode_Slot; // 0x3b8
};

struct UTextureRenderTargetVolume : UTextureRenderTarget {
	int32_t SizeX; // 0x180
	int32_t SizeY; // 0x184
	int32_t SizeZ; // 0x188
	FLinearColor ClearColor; // 0x18c
	EPixelFormat OverrideFormat; // 0x19c
	char bHDR : 1; // 0x19d
	char bForceLinearGamma : 1; // 0x19d
};

struct UMagicLeapARPinContentBindings : USaveGame {
	TMap<FGuid, FMagicLeapARPinObjectIdList> AllContentBindings; // 0x28
};

struct UABP_weapon_firearms_snip_barrettm99_C : USFPSWeaponAnimInstance_SR {
	FPointerToUberGraphFrame UberGraphFrame; // 0x300
	FAnimNode_Root AnimGraphNode_Root; // 0x308
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x338
	FAnimNode_Slot AnimGraphNode_Slot; // 0x3b8
};

struct ADcxVehicle : APawn {
	UStaticMeshComponent* Mesh; // 0x280
	UDcxVehicleWheelsComponent* VehicleWheels; // 0x288
};

struct AARSharedWorldGameMode : AGameMode {
	int32_t BufferSizePerChunk; // 0x308
};

struct UClothPhysicalMeshDataNv_Legacy : UClothPhysicalMeshDataBase_Legacy {
	TArray<float> MaxDistances; // 0xe0
	TArray<float> BackstopDistances; // 0xf0
	TArray<float> BackstopRadiuses; // 0x100
	TArray<float> AnimDriveMultipliers; // 0x110
};

struct Aweapon_firearms_rifle_akm_C : At_FireArm_C {
	UStaticMeshComponent* DeviceLeftMount; // 0x7e0
	UStaticMeshComponent* SideBracket_base; // 0x7e8
	UStaticMeshComponent* SightClose; // 0x7f0
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x7f8
	UStaticMeshComponent* MagazineFull; // 0x800
	UStaticMeshComponent* MagazineEmpty; // 0x808
};

struct UMaterialExpressionPerInstanceCustomData : UMaterialExpression {
	FExpressionInput DefaultValue; // 0x40
	float ConstDefaultValue; // 0x54
	uint32_t DataIndex; // 0x58
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

struct ASFPSProjectile : AActor {
	float Ballistics_AirDensity; // 0x2f8
	bool bAddDebugInfoToLog; // 0x2fc
	ASFPSMovingAmbientSound* WhooshAudioComponentClass; // 0x300
};

struct ASpotLight : ALight {
	USpotLightComponent* SpotLightComponent; // 0x230
};

struct UMovieSceneStringSection : UMovieSceneSection {
	FMovieSceneStringChannel StringCurve; // 0xe8
};

struct UChildActorComponent : USceneComponent {
	AActor* ChildActorClass; // 0x1f8
	AActor* ChildActor; // 0x200
	AActor* ChildActorTemplate; // 0x208
};

struct UfrmHUDChatBox_C : USFPSUserWidget_HUDChatBox {
	FPointerToUberGraphFrame UberGraphFrame; // 0x340
};

struct UVehicleAnimInstance : UAnimInstance {
	UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent; // 0xa50
};

struct Aweapon_firearms_gun_M9_C : At_FireArm_C {
	UStaticMeshComponent* DeviceLeftMount; // 0x7e0
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x7e8
	UStaticMeshComponent* MagazineFull; // 0x7f0
	UStaticMeshComponent* MagazineEmpty; // 0x7f8
};

struct USFPSAI_TSwitchState : UBTTaskNode {
	ESFPSAIState StateValue; // 0x70
	ESFPSAIStateTag Tag; // 0x71
};

struct UAudioBus : UObject {
	EAudioBusChannels AudioBusChannels; // 0x28
};

struct UTextBlockWidgetStyle : USlateWidgetStyleContainerBase {
	FTextBlockStyle TextBlockStyle; // 0x30
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

struct UVectorFieldStatic : UVectorField {
	int32_t SizeX; // 0x48
	int32_t SizeY; // 0x4c
	int32_t SizeZ; // 0x50
	bool bAllowCPUAccess; // 0x54
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
	EARSpatialMeshUsageFlags SpatialMeshUsageFlags; // 0xb9
	int32_t LastUpdateFrameNumber; // 0xd0
	FName DebugName; // 0xe0
};

struct At_LocationCraftActor_C : ASFPSBaseLocationCraftItem {
	UStaticMeshComponent* Mesh; // 0x350
};

struct Aweapon_firearms_rifle_m4a1_C : At_FireArm_C {
	UStaticMeshComponent* DTK; // 0x7e0
	UStaticMeshComponent* DeviceLeftMount; // 0x7e8
	UStaticMeshComponent* SightClose; // 0x7f0
	UStaticMeshComponent* SightOpen; // 0x7f8
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x800
	UStaticMeshComponent* MagazineFull; // 0x808
	UStaticMeshComponent* MagazineEmpty; // 0x810
};

struct Amat_wood_logs_01_C : At_Material_C {
	USceneComponent* Scene1; // 0x320
	USceneComponent* Scene; // 0x328
};

struct UInheritableComponentHandler : UObject {
	TArray<FComponentOverrideRecord> Records; // 0x28
	TArray<UActorComponent*> UnnecessaryComponents; // 0x38
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

struct UVirtualTexturePoolConfig : UObject {
	int32_t DefaultSizeInMegabyte; // 0x28
	TArray<FVirtualTextureSpacePoolConfig> Pools; // 0x30
};

struct USlateVectorArtData : UObject {
	TArray<FSlateMeshVertex> VertexData; // 0x28
	TArray<uint32_t> IndexData; // 0x38
	UMaterialInterface* Material; // 0x48
	FVector2D ExtentMin; // 0x50
	FVector2D ExtentMax; // 0x58
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

struct UNavigationQueryFilter : UObject {
	TArray<FNavigationFilterArea> Areas; // 0x28
	FNavigationFilterFlags IncludeFlags; // 0x38
	FNavigationFilterFlags ExcludeFlags; // 0x3c
};

struct UMovieSceneCameraCutSection : UMovieSceneSection {
	bool bLockPreviousCamera; // 0xf0
	FGuid CameraGuid; // 0xf4
	FMovieSceneObjectBindingID CameraBindingID; // 0x104
	FTransform InitialCameraCutTransform; // 0x120
	bool bHasInitialCameraCutTransform; // 0x150
};

struct UPanelWidget : UWidget {
	TArray<UPanelSlot*> Slots; // 0x108
};

struct UMicroTransactionBase : UPlatformInterfaceBase {
	TArray<FPurchaseInfo> AvailableProducts; // 0x38
	FString LastError; // 0x48
	FString LastErrorSolution; // 0x58
};

struct UParticleModuleAcceleration : UParticleModuleAccelerationBase {
	FRawDistributionVector Acceleration; // 0x38
	char bApplyOwnerScale : 1; // 0x80
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

struct UMaterialExpressionDynamicParameter : UMaterialExpression {
	TArray<FString> ParamNames; // 0x40
	FLinearColor DefaultValue; // 0x50
	uint32_t ParameterIndex; // 0x60
};

struct UIpConnection : UNetConnection {
	float SocketErrorDisconnectDelay; // 0x1bf8
};

struct UTemplateSequenceSection : UMovieSceneSubSection {
	TArray<FTemplateSectionPropertyScale> PropertyScales; // 0x170
};

struct UMaterialBillboardComponent : UPrimitiveComponent {
	TArray<FMaterialSpriteElement> Elements; // 0x450
};

struct UModulatorOuterParams : UObject {
	float ValueMin; // 0x28
	float ValueMax; // 0x2c
};

struct ASFPSShell : AActor {
	ASFPSBaseCharacter* Creator; // 0x238
	ESFPSShellType ShellType; // 0x240
	USoundCue* HitCue; // 0x248
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

struct UBTComposite_SimpleParallel : UBTCompositeNode {
	EBTParallelMode FinishMode; // 0x90
};

struct UDatasmithSpotLightComponentTemplate : UDatasmithObjectTemplate {
	float InnerConeAngle; // 0x30
	float OuterConeAngle; // 0x34
};

struct UGizmoScaledTransformSource : UGizmoBaseTransformSource {
	TScriptInterface<IGizmoTransformSource> ChildTransformSource; // 0x48
};

struct UParticleModuleMeshRotation_Seeded : UParticleModuleMeshRotation {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct Arecoveryitem_medikit_painkillers_C : At_RecoveryItem_C {
	float Timer; // 0x420
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
	UReplicationDriver* ReplicationDriver; // 0x700
};

struct UUdpMessagingSettings : UObject {
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

struct USFPSAnimEvent_Weap_SRReloadFlag : UAnimNotify {
	int32_t ActionNumber; // 0x38
};

struct UInteractiveToolsContext : UObject {
	UInputRouter* InputRouter; // 0x58
	UInteractiveToolManager* ToolManager; // 0x60
	UInteractiveGizmoManager* GizmoManager; // 0x68
	TSoftClassPtr<UObject> ToolManagerClass; // 0x70
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

struct ATemplateSequenceActor : AActor {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x230
	UTemplateSequencePlayer* SequencePlayer; // 0x248
	FSoftObjectPath TemplateSequence; // 0x250
	FTemplateSequenceBindingOverrideData BindingOverride; // 0x268
};

struct At_RecoveryItem_C : ASFPSRecoveryItem {
	UBoxComponent* Trace; // 0x410
	UStaticMeshComponent* Mesh; // 0x418
};

struct UFormDlg_Timer_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UButton* btnCancel; // 0x270
	UImage* imgProrgess; // 0x278
	UMaterialInstanceDynamic* Progress; // 0x280
};

struct ABM_FloorTria_01_C : At_LocationCraftActor_C {
	USFPSACBaseCollision* SFPSACBaseCollision; // 0x358
	USFPSACSnapComponent* SFPSACSnap; // 0x360
};

struct UARTrackedObject : UARTrackedGeometry {
	UARCandidateObject* DetectedObject; // 0xf8
};

struct UMovieSceneTrack : UMovieSceneSignedObject {
	FMovieSceneTrackEvalOptions EvalOptions; // 0x50
	bool bIsEvalDisabled; // 0x55
	TArray<int32_t> RowsDisabled; // 0x58
	FGuid EvaluationFieldGuid; // 0x6c
	FMovieSceneTrackEvaluationField EvaluationField; // 0x80
};

struct ULevelSequenceBurnInOptions : UObject {
	bool bUseBurnIn; // 0x28
	FSoftClassPath BurnInClass; // 0x30
	ULevelSequenceBurnInInitSettings* Settings; // 0x48
};

struct UEditableStaticMeshAdapter : UEditableMeshAdapter {
	UStaticMesh* StaticMesh; // 0x28
	UStaticMesh* OriginalStaticMesh; // 0x30
	int32_t StaticMeshLODIndex; // 0x38
};

struct UInputBehaviorSet : UObject {
	TArray<FBehaviorInfo> Behaviors; // 0x28
};

struct UClothingAssetCommon : UClothingAssetBase {
	UPhysicsAsset* PhysicsAsset; // 0x48
	TMap<FName, UClothConfigBase*> ClothConfigs; // 0x50
	TArray<FClothLODDataCommon> LODData; // 0xa0
	TArray<int32_t> LodMap; // 0xb0
	TArray<FName> UsedBoneNames; // 0xc0
	TArray<int32_t> UsedBoneIndices; // 0xd0
	int32_t ReferenceBoneIndex; // 0xe0
	UClothingAssetCustomData* CustomData; // 0xe8
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

struct USequenceCameraShakeSequencePlayer : UObject {
	UObject* BoundObjectOverride; // 0x2d0
	UMovieSceneSequence* Sequence; // 0x2d8
	FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x2e0
};

struct UBTTask_PlayAnimation : UBTTaskNode {
	UAnimationAsset* AnimationToPlay; // 0x70
	char bLooping : 1; // 0x78
	char bNonBlocking : 1; // 0x78
	UBehaviorTreeComponent* MyOwnerComp; // 0x80
	USkeletalMeshComponent* CachedSkelMesh; // 0x88
};

struct UMaterialExpressionDistanceFieldsRenderingSwitch : UMaterialExpression {
	FExpressionInput No; // 0x40
	FExpressionInput Yes; // 0x54
};

struct UMaterialExpressionDDY : UMaterialExpression {
	FExpressionInput Value; // 0x40
};

struct UGameViewportClient : UScriptViewportClient {
	UConsole* ViewportConsole; // 0x40
	TArray<FDebugDisplayProperty> DebugProperties; // 0x48
	int32_t MaxSplitscreenPlayers; // 0x68
	UWorld* World; // 0x78
	UGameInstance* GameInstance; // 0x80
};

struct UBookMark2D : UBookmarkBase {
	float Zoom2D; // 0x28
	FIntPoint Location; // 0x2c
};

struct APlanarReflection : ASceneCapture {
	UPlanarReflectionComponent* PlanarReflectionComponent; // 0x230
	bool bShowPreviewPlane; // 0x238
};

struct Ascope_opt_pso_C : At_Sight_C {
	UStaticMeshComponent* cod_4x_reticles; // 0x3d0
};

struct UAnimNotify_PlayMontageNotify : UAnimNotify {
	FName NotifyName; // 0x38
};

struct USkeletalMeshComponent : USkinnedMeshComponent {
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

struct UAnimComposite : UAnimCompositeBase {
	FAnimTrack AnimationTrack; // 0xa8
};

struct UParticleModuleLocationDirect : UParticleModuleLocationBase {
	FRawDistributionVector Location; // 0x30
	FRawDistributionVector LocationOffset; // 0x78
	FRawDistributionVector ScaleFactor; // 0xc0
	FRawDistributionVector Direction; // 0x108
};

struct USFPSBaseHandler : UObject {
	TArray<FSFPSLoginData> Registration_PlayerList; // 0xb8
	TArray<FSFPSLoginData> Registration_FilteredPlayerList; // 0xc8
	TArray<FSFPSLoginData> Registration_PlayerListAdded; // 0xe0
	TArray<FSFPSLoginData> Registration_FilteredPlayerListAdded; // 0xf0
	UUserWidget* FormAdminBase; // 0x118
	USFPSUserWidget_AdminPanel_Player* frmPlayer; // 0x120
	bool bVisible; // 0x128
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

struct UAudioAnalyzerNRT : UAudioAnalyzerAsset {
	USoundWave* Sound; // 0x28
	float DurationInSeconds; // 0x30
};

struct UARTrackedPose : UARTrackedGeometry {
	FARPose3D TrackedPose; // 0xf8
};

struct Aweapon_firearms_mg_mg36_C : At_FireArm_C {
	UStaticMeshComponent* DTK; // 0x7e0
	UStaticMeshComponent* SightOpen; // 0x7e8
	UStaticMeshComponent* DeviceLeftMount; // 0x7f0
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x7f8
	UStaticMeshComponent* MagazineFull; // 0x800
	UStaticMeshComponent* MagazineEmpty; // 0x808
};

struct ASFPSCharacter : ASFPSBaseCharacter {
	TArray<FSFPSClientLockPasswordsCache> ClientLockPasswordsCache; // 0xc38
	int8_t Roll_Desired; // 0xcbc
	USFPSACCamera* Camera; // 0xcc8
	ESFPSServerCameraType ServerCameraType; // 0xcd0
	ESFPSServerBattleType ServerBattleType; // 0xcd1
	float DegradeFood[0x4]; // 0xcd4
	float DegradeWater[0x4]; // 0xce4
	float ZeroFoodDamage; // 0xcf4
	float ZeroWaterDamage; // 0xcf8
	int32_t HealthLow; // 0xcfc
	int32_t HealthCritical; // 0xd00
	int32_t FoodWaterLow; // 0xd04
	int32_t FoodWaterCritical; // 0xd08
	float RegenHigh; // 0xd0c
	float RegenLow; // 0xd10
	float DeltaHealthRate[0x2]; // 0xd14
	float DeltaFoodWaterRate[0x2]; // 0xd1c
	FSFPSLoginData LoginData; // 0xd28
	FGuid DeadMarkerGUID; // 0xd50
	bool bDLC0Exist; // 0xd61
	USFPSCameraShake* DamageShake; // 0xd68
	bool bCharacterForCreateNew; // 0xd70
	TArray<FSFPSAchievement> Achievements; // 0xd80
	TArray<FSFPSCharacterProjectileRecord> ServerProjectileList; // 0xd98
	TWeakObjectPtr<ASFPSLootBox> LootBoxActor; // 0xda8
	int32_t Steamcoins; // 0xdb4
	FVector BaseCenter; // 0xdc0
	FSFPSRegisteredBaseData RegisteredBaseData; // 0xdd0
	TArray<FVector> FreeStashes; // 0xdf0
	TArray<FVector> FreeFires; // 0xe00
	TArray<FVector> FreeTripwireTraps; // 0xe10
	char FreeBaseStashes; // 0xe20
	char FreeBaseRespawns; // 0xe21
	char FreeBaseItems; // 0xe22
	TArray<FSFPSSquadInfo> Squad; // 0xe30
	float Camera_RollAmount; // 0xe70
	float Camera_ForwardOffset; // 0xe74
	FVector Camera_OriginOffset; // 0xe78
	float Camera_SideOffset; // 0xe84
	float Camera_Distance; // 0xe88
	float Camera_RollDistance; // 0xe8c
	float Camera_RollSphereRadius; // 0xe90
	UCurveFloat* FPIronSightOn; // 0xe98
	UCurveFloat* FPIronSightOff; // 0xea0
	UCurveFloat* TPIronSightOn; // 0xea8
	UCurveFloat* TPIronSightOff; // 0xeb0
};

struct USubsurfaceProfile : UObject {
	FSubsurfaceProfileStruct Settings; // 0x28
};

struct APartyBeaconClient : AOnlineBeaconClient {
	FString DestSessionId; // 0x2e0
	FPartyReservation PendingReservation; // 0x2f0
	EClientRequestType RequestType; // 0x340
	bool bPendingReservationSent; // 0x341
	bool bCancelReservation; // 0x342
};

struct UDataTable : UObject {
	UScriptStruct* RowStruct; // 0x28
	char bStripFromClientBuilds : 1; // 0x80
	char bIgnoreExtraFields : 1; // 0x80
	char bIgnoreMissingFields : 1; // 0x80
	FString ImportKeyField; // 0x88
};

struct ABM_WallBig_lock_01_C : ABM_WallBig_01_C {
	UStaticMeshComponent* Base_lock_02; // 0x388
	UStaticMeshComponent* Base_lock_01; // 0x390
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

struct UMovieScenePrimitiveMaterialTrack : UMovieScenePropertyTrack {
	int32_t MaterialIndex; // 0xc8
};

struct USFPSTradeList : UObject {
	FSFPSTradeGroupList SellList; // 0x28
	FSFPSTradeGroupList BuyList; // 0x38
};

struct UEditableGameplayTagQueryExpression_AllExprMatch : UEditableGameplayTagQueryExpression {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
};

struct AWindDirectionalSource : AInfo {
	UWindDirectionalSourceComponent* Component; // 0x220
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

struct UMovieSceneEventRepeaterSection : UMovieSceneEventSectionBase {
	FMovieSceneEvent Event; // 0xf0
};

struct UInterpTrackSound : UInterpTrackVectorBase {
	TArray<FSoundTrackKey> Sounds; // 0x90
	char bPlayOnReverse : 1; // 0xa0
	char bContinueSoundOnMatineeEnd : 1; // 0xa0
	char bSuppressSubtitles : 1; // 0xa0
	char bTreatAsDialogue : 1; // 0xa0
	char bAttach : 1; // 0xa0
};

struct ABM_WallDoor_01_C : At_LocationCraftActor_C {
	USFPSACBaseCollision* SFPSACBaseCollision; // 0x358
	UBoxComponent* Overlap; // 0x360
	UStaticMeshComponent* Door_01; // 0x368
	USFPSACDoor* SFPSACDoor; // 0x370
	USFPSACSnapComponent* SFPSACSnap; // 0x378
};

struct UARLifeCycleComponent : USceneComponent {
	FMulticastInlineDelegate OnARActorSpawnedDelegate; // 0x1f8
	FMulticastInlineDelegate OnARActorToBeDestroyedDelegate; // 0x208
};

struct UAIDataProvider_Random : UAIDataProvider_QueryParams {
	float Min; // 0x40
	float Max; // 0x44
	char bInteger : 1; // 0x48
};

struct Aweapon_steelarms_axe_01_C : At_SteelArm_C {
	USceneComponent* DamagePoint2; // 0x620
	USceneComponent* DamagePoint1; // 0x628
	USceneComponent* DamagePoint0; // 0x630
};

struct USoundfieldEndpointSubmix : USoundSubmixBase {
	FName SoundfieldEndpointType; // 0x38
	UAudioEndpointSettingsBase* EndpointSettingsClass; // 0x40
	USoundfieldEndpointSettingsBase* EndpointSettings; // 0x48
	USoundfieldEncodingSettingsBase* EncodingSettingsClass; // 0x50
	USoundfieldEncodingSettingsBase* EncodingSettings; // 0x58
	TArray<USoundfieldEffectBase*> SoundfieldEffectChain; // 0x60
};

struct UParticleModuleOrientationAxisLock : UParticleModuleOrientationBase {
	EParticleAxisLock LockAxisFlags; // 0x30
};

struct UBTTask_RunBehaviorDynamic : UBTTaskNode {
	FGameplayTag InjectionTag; // 0x70
	UBehaviorTree* DefaultBehaviorAsset; // 0x78
	UBehaviorTree* BehaviorAsset; // 0x80
};

struct At_SteelArm_C : ASFPSSteelArms {
	UBoxComponent* Trace; // 0x610
	UStaticMeshComponent* Mesh; // 0x618
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

struct UDistributionFloatConstant : UDistributionFloat {
	float Constant; // 0x38
};

struct UParticleModuleMeshRotationRateMultiplyLife : UParticleModuleRotationRateBase {
	FRawDistributionVector LifeMultiplier; // 0x30
};

struct UMovieSceneByteTrack : UMovieScenePropertyTrack {
	UEnum* Enum; // 0xc0
};

struct USFPSACZoneManager : UActorComponent {
	TArray<FSFPSZone> Zones; // 0xb0
	FColor ZoneColor; // 0xc0
};

struct UWidgetAnimation : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x60
	TArray<FWidgetAnimationBinding> AnimationBindings; // 0x68
	bool bLegacyFinishOnStop; // 0x78
	FString DisplayLabel; // 0x80
};

struct UAIPerceptionStimuliSourceComponent : UActorComponent {
	char bAutoRegisterAsSource : 1; // 0xb0
	TArray<UAISense*> RegisterAsSourceForSenses; // 0xb8
};

struct UInputTouchDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputTouchDelegateBinding> InputTouchDelegateBindings; // 0x28
};

struct UCanvasRenderTarget2D : UTextureRenderTarget2D {
	FMulticastInlineDelegate OnCanvasRenderTargetUpdate; // 0x1a8
	TWeakObjectPtr<UWorld> World; // 0x1b8
	bool bShouldClearRenderTargetOnReceiveUpdate; // 0x1c0
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

struct USoundNodeGroupControl : USoundNode {
	TArray<int32_t> GroupSizes; // 0x48
};

struct UBlendSpace : UBlendSpaceBase {
	EBlendSpaceAxis AxisToScaleAnimation; // 0x148
};

struct UDynamicEntryBox : UDynamicEntryBoxBase {
	UUserWidget* EntryWidgetClass; // 0x1d8
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

struct AVolumetricCloud : AInfo {
	UVolumetricCloudComponent* VolumetricCloudComponent; // 0x220
};

struct UComboButtonWidgetStyle : USlateWidgetStyleContainerBase {
	FComboButtonStyle ComboButtonStyle; // 0x30
};

struct UClothLODDataCommon_Legacy : UObject {
	UClothPhysicalMeshDataBase_Legacy* PhysicalMeshData; // 0x28
	FClothPhysicalMeshData ClothPhysicalMeshData; // 0x30
	FClothCollisionData CollisionData; // 0x128
};

struct ARespawnActor_C : AActor {
	USceneComponent* DefaultSceneRoot; // 0x220
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

struct AM_Stash_01_C : ASFPSLootBox {
	USFPSACBaseCollision* SFPSACBaseCollision1; // 0x3b8
	UStaticMeshComponent* Loot_box_01_static; // 0x3c0
	USFPSACLootBoxInventory* SFPSACLootBoxInventory; // 0x3c8
};

struct USafeZone : UContentWidget {
	bool PadLeft; // 0x120
	bool PadRight; // 0x121
	bool PadTop; // 0x122
	bool PadBottom; // 0x123
};

struct UMovieSceneParticleTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> ParticleSections; // 0x98
};

struct USFPSUserWidget_AdminPanel_Player : UUserWidget {
	FDelegate OnSelectEvent; // 0x2a8
};

struct USoundNodeCrossfadeShootByDistanceOuterParam : USoundNode {
	UShootCrossfadeOuterParams* CrossfadeOuterParam; // 0x48
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

struct ASFPSAICharacter : ASFPSBaseCharacter {
	UBehaviorTree* BehaviorTree; // 0xbe8
	int32_t GenerateSetChance; // 0xcc8
	FSFPSItemSetStruct WeaponSet0; // 0xcd0
	FSFPSItemSetStruct WeaponSet1; // 0xce8
	FSFPSItemSetStruct WeaponSet2; // 0xd00
	FSFPSItemSetStruct JacketSet; // 0xd18
	FSFPSItemSetStruct TrousSet; // 0xd30
	FSFPSItemSetStruct VestSet; // 0xd48
	FSFPSItemSetStruct BackPackSet; // 0xd60
	FSFPSItemSetStruct HelmetSet; // 0xd78
	FSFPSItemSetStruct MaskSet; // 0xd90
	FSFPSItemSetStruct GlassesSet; // 0xda8
	FSFPSItemSetStruct GlovesSet; // 0xdc0
	TArray<FSFPSItemSetStruct> LootSets; // 0xdd8
	bool bGenerateAmmoForWeapons; // 0xde8
	int32_t GenerateMFForWeaponsChance; // 0xdec
	ESFPSLootRarity GenerateMFForWeaponsRarity; // 0xdf0
	ASFPSHandheldItem* Weapon0; // 0xdf8
	ASFPSHandheldItem* Weapon1; // 0xe00
	ASFPSHandheldItem* Weapon2; // 0xe08
	ASFPSWearableItem* Jacket; // 0xe10
	char JacketSkinID; // 0xe18
	ASFPSWearableItem* Trous; // 0xe20
	char TrousSkinID; // 0xe28
	ASFPSWearableItem* Vest; // 0xe30
	char VestSkinID; // 0xe38
	ASFPSWearableItem* BackPack; // 0xe40
	ASFPSWearableItem* Helmet; // 0xe48
	char HelmetSkinID; // 0xe50
	ASFPSWearableItem* Mask; // 0xe58
	char MaskSkinID; // 0xe60
	ASFPSWearableItem* Glasses; // 0xe68
	ASFPSWearableItem* Gloves; // 0xe70
	char GlovesSkinID; // 0xe78
	USFPSAISenseConfig_Sight* SenseConfig_Sight; // 0xe80
	USFPSAISenseConfig_Hearing* SenseConfig_Hearing; // 0xe88
	float OptimalAttackDist; // 0xe90
	float FiringTimeMin; // 0xe94
	float FiringTimeMax; // 0xe98
	float FiringTimePauseMin; // 0xe9c
	float FiringTimePauseMax; // 0xea0
	float FiringDelayAtZero; // 0xea4
	float FiringDelayAtOptimal; // 0xea8
	float DamageMultiplier; // 0xeac
};

struct UfrmGroundItem_C : USFPSUserWidget_GroundItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x288
	UButton* btnItem0; // 0x290
	UButton* btnItem1; // 0x298
	UButton* btnItem2; // 0x2a0
};

struct UAISenseEvent_Damage : UAISenseEvent {
	FAIDamageEvent Event; // 0x28
};

struct ABMF_RespawnMarker_C : At_LocationCraftActor_C {
	USFPSACBaseCollision* SFPSACBaseCollision; // 0x358
};

struct UAudioImpulseResponse : UObject {
	TArray<float> ImpulseResponse; // 0x28
	int32_t NumChannels; // 0x38
	int32_t SampleRate; // 0x3c
	float NormalizationVolumeDb; // 0x40
	bool bTrueStereo; // 0x44
	TArray<float> IRData; // 0x48
};

struct USFPSPatrolManager : UObject {
	TArray<ASFPSPatrol*> AllPatrols; // 0x28
	TArray<ASFPSPatrol*> SpecialPatrols; // 0x38
	TArray<USFPSPatrolPointSpecial*> SpecialPatrolPoints; // 0x48
	ASFPSGameplayItem* ItemToSpawn; // 0x60
	int32_t MaxSpecialPatrols; // 0x68
	float MinTimeToRemoveSpecialPatrol; // 0x6c
	float MaxTimeToRemoveSpecialPatrol; // 0x70
	float MinTimeToSpawnSpecialPatrol; // 0x80
	float MaxTimeToSpawnSpecialPatrol; // 0x84
	TArray<FSFPSMonsterSpawnedInfo> SpecialMonstersInfo; // 0x88
	ESFPSGameplayEventInfoType ClientInfoType; // 0x98
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

struct ALevelSequenceActor : AActor {
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

struct ASFPSDeviceItem : ASFPSHandheldItem {
	bool bDeviceEnabled; // 0x410
	float GrenadeAdditionalPitch; // 0x414
	float GrenadeAdditionalYaw; // 0x418
	bool bDisableOnSprint; // 0x41c
	UStaticMesh* DeviceEnabledMesh; // 0x420
	UStaticMesh* DeviceDisabledMesh; // 0x428
	float CooldownTime; // 0x430
	float ActivationRange; // 0x434
	UParticleSystem* ParticlesSwitchToEnabled; // 0x438
	UParticleSystem* ParticlesSwitchToDisabled; // 0x440
	FTransform CustomTransform; // 0x450
	UCurveFloat* LightIntensity; // 0x480
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

struct UWindowTitleBarArea : UContentWidget {
	bool bWindowButtonsEnabled; // 0x120
	bool bDoubleClickTogglesFullscreen; // 0x121
};

struct UDemoNetDriver : UNetDriver {
	TMap<FString, FRollbackNetStartupActorInfo> RollbackNetStartupActors; // 0x858
	float CheckpointSaveMaxMSPerFrame; // 0xa04
	TArray<FMulticastRecordOptions> MulticastRecordOptions; // 0xa28
	bool bIsLocalReplay; // 0xa38
	TArray<APlayerController*> SpectatorControllers; // 0xa40
};

struct UInputAxisDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputAxisDelegateBinding> InputAxisDelegateBindings; // 0x28
};

struct ADatasmithImportedSequencesActor : AActor {
	TArray<ULevelSequence*> ImportedSequences; // 0x220
};

struct UServerList_C : UUserWidget {
	UButton* btnBack; // 0x268
	UButton* btnBuyServer; // 0x270
	UButton* btnIP; // 0x278
	UButton* btnJoin; // 0x280
	UButton* btnRefresh; // 0x288
	UfrmServerListItem_C* frmServerListItem; // 0x290
	UImage* spGPortal; // 0x298
	UImage* spVivox; // 0x2a0
};

struct UMaterialExpressionReflectionVectorWS : UMaterialExpression {
	FExpressionInput CustomWorldNormal; // 0x40
	char bNormalizeCustomWorldNormal : 1; // 0x54
};

struct UDistributionVectorConstant : UDistributionVector {
	FVector Constant; // 0x38
	char bLockAxes : 1; // 0x44
	EDistributionVectorLockFlags LockedAxes; // 0x48
};

struct ASwitchActor : AActor {
	USceneComponent* SceneComponent; // 0x238
	int32_t LastSelectedOption; // 0x240
};

struct UPaperSpriteComponent : UMeshComponent {
	UPaperSprite* SourceSprite; // 0x478
	UMaterialInterface* MaterialOverride; // 0x480
	FLinearColor SpriteColor; // 0x488
};

struct USFPSGameInstance : UGameInstance {
	FDelegate VaRestCallback0; // 0x2ec
	FDelegate VaRestCallback1; // 0x2fc
	FDelegate VaRestCallback2; // 0x30c
	FDelegate VaRestCallback3; // 0x31c
	FDelegate VaRestCallback4; // 0x32c
	AActor* RespawnActor; // 0x448
	AActor* RespawnActorClass; // 0x450
	UUserWidget* FormMainMenu; // 0x640
	UUserWidget* FormLoadingScreen; // 0x648
	TArray<FText> KickMSGList; // 0x6a8
	bool bIsClientKick; // 0x6b8
	ASFPSOnlineBeaconHost* BeaconHost; // 0x6c0
	ASFPSOnlineBeaconHostObject* BeaconHostObject; // 0x6c8
	USFPSInventoryHandler* InventoryHandler; // 0x6d0
	USFPSMessageHandler* MessageHandler; // 0x6d8
	USFPSFontHandler* FontHandler; // 0x6e0
	USFPSUseObjectHandler* UseObjectHandler; // 0x6e8
	USFPSSplitHandler* SplitHandler; // 0x6f0
	USFPSMainInterfaceHandler* MainInterfaceHandler; // 0x6f8
	USFPSSettingsHandler* SettingsHandler; // 0x700
	USFPSLockBreakingHandler* LockBreakingHandler; // 0x708
	USFPSDebrisHandler* DebrisHandler; // 0x710
	USFPSMapHandler* MapHandler; // 0x718
	USFPSCraftEditor* CraftEditor; // 0x720
	USFPSSoundHandler* SoundHandler; // 0x728
	USFPSServerListHandler* ServerListHandler; // 0x730
	USFPSChatHandler* ChatHandler; // 0x738
	USFPSCreatePlayerHandler* CreatePlayerHandler; // 0x740
	USFPSAdminHandler* AdminHandler; // 0x748
	USFPSBaseHandler* BaseHandler; // 0x750
	bool b_dbg_BallisticsTracesEnabled; // 0x758
	bool b_dbg_CraftDebugEnabled; // 0x759
	UMaterialParameterCollection* ParametersCollection; // 0x760
	AActor* BaseSphere; // 0x768
	USFPSUISoundTable* UISounds; // 0x8b8
	UAudioComponent* MusicAudioComponent; // 0x8c0
	UObject* AfterDeathActorClass; // 0x8c8
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

struct USFPSHiddenStashManager : UObject {
	TArray<USFPSHiddenStash*> HiddenStashes; // 0x48
	ASFPSLootBoxSpawner* LootBoxSpawnerClass; // 0x60
	int32_t MaxHiddenStashes_Activators; // 0x68
	int32_t MaxHiddenStashes_Total; // 0x6c
	int32_t HiddenStashLifetime; // 0x70
};

struct UEnvQueryTest_PathfindingBatch : UEnvQueryTest_Pathfinding {
	FAIDataProviderFloatValue ScanRangeMultiplier; // 0x280
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

struct UReplaySubsystem : UGameInstanceSubsystem {
	bool bLoadDefaultMapOnStop; // 0x30
};

struct UfrmItemHint_C : UUserWidget {
	UImage* imgBackgroun1; // 0x268
	UImage* imgBackgroun2; // 0x270
	UImage* imgBackgroun3; // 0x278
	UImage* imgBackgroun4; // 0x280
	UImage* imgBackgroun5; // 0x288
	UImage* imgBackgroun6; // 0x290
	UImage* imgBackgroun7; // 0x298
	UImage* imgBackgroun8; // 0x2a0
};

struct Aweapmf_DTK_9x19_01_C : At_MuzzleAttachement_C {
	USceneComponent* Muzzle; // 0x390
};

struct UMaterialExpressionShaderStageSwitch : UMaterialExpression {
	FExpressionInput PixelShader; // 0x40
	FExpressionInput VertexShader; // 0x54
};

struct UPlayer : UObject {
	APlayerController* PlayerController; // 0x30
	int32_t CurrentNetSpeed; // 0x38
	int32_t ConfiguredInternetSpeed; // 0x3c
	int32_t ConfiguredLanSpeed; // 0x40
};

struct UFoliageType_InstancedStaticMesh : UFoliageType {
	UStaticMesh* Mesh; // 0x3b0
	TArray<UMaterialInterface*> OverrideMaterials; // 0x3b8
	UFoliageInstancedStaticMeshComponent* ComponentClass; // 0x3c8
};

struct UMaterialExpressionReroute : UMaterialExpressionRerouteBase {
	FExpressionInput Input; // 0x40
};

struct UMaterialExpressionStaticComponentMaskParameter : UMaterialExpressionParameter {
	char DefaultR : 1; // 0x58
	char DefaultG : 1; // 0x58
	char DefaultB : 1; // 0x58
	char DefaultA : 1; // 0x58
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

struct UDatasmithFBXSceneImportData : UDatasmithSceneImportData {
	bool bGenerateLightmapUVs; // 0x28
	FString TexturesDir; // 0x30
	char IntermediateSerialization; // 0x40
	bool bColorizeMaterials; // 0x41
};

struct ASFPSWeapon : ASFPSHandheldItem {
	TArray<FSFPSSkinData_Weapon> Skins; // 0x408
	char SkinID; // 0x418
	TArray<ESFPSWeaponFireMode> FireModes; // 0x448
	int32_t FireModeCutoff_ShotCount; // 0x458
	ESFPSWeaponFireMode CurrentFireMode; // 0x45c
	int32_t CurrentFireAnim; // 0x460
	bool bUseBindDeviceLeft; // 0x478
	bool bBindDeviceLeftEnabled; // 0x479
	USoundCue* BindDeviceLeftSoundCue; // 0x480
	bool IsFiring; // 0x488
	float AttackRate; // 0x48c
	float LengthForWeaponBarrier; // 0x490
	USFPSCameraShake* FireShake; // 0x498
	ESFPSWeaponAnimInstanceType AnimationInstanceType; // 0x4a0
	USoundCue* FireCue; // 0x4a8
	USoundCue* FireLocalCue; // 0x4b0
	USoundCue* EmptyClipCue; // 0x4b8
	USoundCue* SwitchModeCue; // 0x4c0
	USoundCue* WeaponSightCue; // 0x4c8
	USoundEffectSourcePresetChain* InRoomEffectChain; // 0x4d0
};

struct UGeometryCacheTrackStreamable : UGeometryCacheTrack {
	UGeometryCacheCodecBase* Codec; // 0x58
	float StartSampleTime; // 0xc8
};

struct UInterpTrackInstVectorProp : UInterpTrackInstProperty {
	FVector ResetVector; // 0x58
};

struct UOnlinePIESettings : UDeveloperSettings {
	bool bOnlinePIEEnabled; // 0x38
	TArray<FPIELoginSettingsInternal> Logins; // 0x40
};

struct USFPSACLootBoxInventory : UActorComponent {
	int32_t InventorySize; // 0xb0
	TArray<TWeakObjectPtr<ASFPSBaseItem>> ClientInventory; // 0xb8
	TArray<FSFPSItemStruct> Inventory; // 0xc8
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

struct UFormDlg_InputCode_C : USFPSUserWidget_CodeInputBox {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3b0
	UButton* btn0; // 0x3b8
	UButton* btn1; // 0x3c0
	UButton* btn2; // 0x3c8
	UButton* btn3; // 0x3d0
	UButton* btn4; // 0x3d8
	UButton* btn5; // 0x3e0
	UButton* btn6; // 0x3e8
	UButton* btn7; // 0x3f0
	UButton* btn8; // 0x3f8
	UButton* btn9; // 0x400
	UButton* btnB; // 0x408
	UButton* btnE; // 0x410
};

struct UAnimCompress : UAnimBoneCompressionCodec {
	char bNeedsSkeleton : 1; // 0x38
	AnimationCompressionFormat TranslationCompressionFormat; // 0x3c
	AnimationCompressionFormat RotationCompressionFormat; // 0x3d
	AnimationCompressionFormat ScaleCompressionFormat; // 0x3e
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

struct UFieldSystemMetaDataFilter : UFieldSystemMetaData {
	EFieldFilterType FilterType; // 0xb0
};

struct UMotionControllerComponent : UPrimitiveComponent {
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

struct UCurveFloat : UCurveBase {
	FRichCurve FloatCurve; // 0x30
	bool bIsEventCurve; // 0xb0
};

struct UDebugCameraControllerSettings : UDeveloperSettings {
	TArray<FDebugCameraControllerSettingsViewModeIndex> CycleViewModes; // 0x38
};

struct UDcxVehicleNoDriveComponent : UDcxVehicleWheelsComponent {
	bool bUseRawInput; // 0x240
	float MaxDriveTorque; // 0x244
};

struct UMaterialExpressionTextureBase : UMaterialExpression {
	UTexture* Texture; // 0x40
};

struct UBlendProfile : UObject {
	USkeleton* OwningSkeleton; // 0x30
	TArray<FBlendProfileBoneEntry> ProfileEntries; // 0x38
};

struct UMaterialExpressionMaterialFunctionCall : UMaterialExpression {
	UMaterialFunctionInterface* MaterialFunction; // 0x40
	FMaterialParameterInfo FunctionParameterInfo; // 0x48
};

struct UAsyncTaskDownloadImage : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFail; // 0x40
};

struct USubmixEffectReverbPluginPreset : USoundEffectSubmixPreset {
	FSubmixEffectReverbPluginSettings Settings; // 0x91
};

struct UParticleModuleVectorFieldRotationRate : UParticleModuleVectorFieldBase {
	FVector RotationRate; // 0x30
};

struct UWidgetAnimationPlayCallbackProxy : UObject {
	FMulticastInlineDelegate Finished; // 0x28
};

struct UMaterialExpressionChannelMaskParameter : UMaterialExpressionVectorParameter {
	EChannelMaskParameterColor MaskChannel; // 0x70
};

struct UAnimationAsset : UObject {
	USkeleton* Skeleton; // 0x38
	TArray<UAnimMetaData*> MetaData; // 0x60
	TArray<UAssetUserData*> AssetUserData; // 0x70
};

struct ASFPSGreenArea : AActor {
	TArray<AActor*> OverlapCharacters; // 0x220
	TArray<UChildActorComponent*> Storages; // 0x238
	int32_t CharacterCellNumber; // 0x248
	bool IsServerArea; // 0x24c
	USphereComponent* Sphere; // 0x250
	TArray<FVector> TeleportPoints; // 0x258
};

struct UGizmoComponentAxisSource : UObject {
	USceneComponent* Component; // 0x30
	int32_t AxisIndex; // 0x38
	bool bLocalAxes; // 0x3c
};

struct UPhononSourceComponent : USceneComponent {
	float BakingRadius; // 0x1f8
	FName UniqueIdentifier; // 0x1fc
};

struct UAIPerceptionSystem : UAISubsystem {
	TArray<UAISense*> Senses; // 0x88
	float PerceptionAgingRate; // 0x98
};

struct UMaterialExpressionAtmosphericFogColor : UMaterialExpression {
	FExpressionInput WorldPosition; // 0x40
};

struct At_FireArm_C : ASFPSSmallArms {
	UBoxComponent* Trace; // 0x7d0
	USkeletalMeshComponent* Mesh; // 0x7d8
};

struct ASFPSProjectileGrenade : ASFPSBaseGrenade {
	float Damage; // 0x428
	bool bCanDamageBase; // 0x42c
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
	FSoundModulationDestinationSettings OutputVolumeModulation; // 0x78
	FSoundModulationDestinationSettings WetLevelModulation; // 0x88
	FSoundModulationDestinationSettings DryLevelModulation; // 0x98
	FMulticastInlineDelegate OnSubmixRecordedFileDone; // 0xa8
};

struct UParticleModuleRotationOverLifetime : UParticleModuleRotationBase {
	FRawDistributionFloat RotationOverLife; // 0x30
	char Scale : 1; // 0x60
};

struct USFPSAI_TClearTargetAndFocus : UBTTaskNode {
	bool bClearTarget; // 0x70
	bool bClearFocus; // 0x71
};

struct USourceEffectChorusPreset : USoundEffectSourcePreset {
	FSourceEffectChorusSettings Settings; // 0x108
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

struct ASpectatorBeaconClient : AOnlineBeaconClient {
	FString DestSessionId; // 0x2e0
	FSpectatorReservation PendingReservation; // 0x2f0
	ESpectatorClientRequestType RequestType; // 0x368
	bool bPendingReservationSent; // 0x369
	bool bCancelReservation; // 0x36a
};

struct USphereComponent : UShapeComponent {
	float SphereRadius; // 0x468
};

struct ACameraShakeSourceActor : AActor {
	UCameraShakeSourceComponent* CameraShakeSourceComponent; // 0x220
};

struct UMaterialExpressionArctangentFast : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct ASphereReflectionCapture : AReflectionCapture {
	UDrawSphereComponent* DrawCaptureRadius; // 0x228
};

struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct UTimecodeProvider : UObject {
	float FrameDelay; // 0x28
};

struct UNavigationSystemConfig : UObject {
	FSoftClassPath NavigationSystemClass; // 0x28
	FNavAgentSelector SupportedAgentsMask; // 0x40
	FName DefaultAgentName; // 0x44
	char bIsOverriden : 1; // 0x4c
};

struct UParticleModuleAttractorPointGravity : UParticleModuleAttractorBase {
	FVector Position; // 0x30
	float Radius; // 0x3c
	UDistributionFloat* Strength; // 0x40
	FRawDistributionFloat StrengthRaw; // 0x48
};

struct USubmixEffectMultibandCompressorPreset : USoundEffectSubmixPreset {
	FSubmixEffectMultibandCompressorSettings Settings; // 0xb0
};

struct ASFPSWearableItem : ASFPSBaseItem {
	TArray<UMaterialInstance*> MaterialsOverride; // 0x310
	TArray<UMaterialInstance*> HoodMesh_Shown_MaterialsOverride; // 0x320
	TArray<UMaterialInstance*> HoodMesh_Hidden_MaterialsOverride; // 0x330
	ASFPSWearableItem* LinkedSetItem; // 0x340
	USkeletalMesh* ItemMesh; // 0x348
	USkeletalMesh* HoodMesh_Shown; // 0x350
	USkeletalMesh* HoodMesh_Hidden; // 0x358
	TArray<ESFPSBone> ProtectedBones; // 0x360
	float Resists[0x7]; // 0x370
	bool bUseHood; // 0x38c
	bool bHoodShownBlocker; // 0x38d
	bool bHoodHiddenBlocker; // 0x38e
	bool bRustles; // 0x38f
	char SkinID; // 0x390
	TArray<FSFPSSkinData_Wearable> Skins; // 0x398
};

struct USkeletalMeshSimplificationSettings : UDeveloperSettings {
	FName SkeletalMeshReductionModuleName; // 0x38
};

struct ANavLinkProxy : AActor {
	TArray<FNavigationLink> PointLinks; // 0x230
	TArray<FNavigationSegmentLink> SegmentLinks; // 0x240
	UNavLinkCustomComponent* SmartLinkComp; // 0x250
	bool bSmartLinkIsRelevant; // 0x258
	FMulticastInlineDelegate OnSmartLinkReached; // 0x260
};

struct UMovieSceneEventTrack : UMovieSceneNameableTrack {
	char bFireEventsWhenForwards : 1; // 0xa0
	char bFireEventsWhenBackwards : 1; // 0xa0
	EFireEventsAtPosition EventPosition; // 0xa4
	TArray<UMovieSceneSection*> Sections; // 0xa8
};

struct ANavSystemConfigOverride : AActor {
	UNavigationSystemConfig* NavigationSystemConfig; // 0x220
	ENavSystemOverridePolicy OverridePolicy; // 0x228
	char bLoadOnClient : 1; // 0x229
};

struct UCompositeCurveTable : UCurveTable {
	TArray<UCurveTable*> ParentTables; // 0xa0
	TArray<UCurveTable*> OldParentTables; // 0xb0
};

struct USubmixEffectFilterPreset : USoundEffectSubmixPreset {
	FSubmixEffectFilterSettings Settings; // 0x9c
};

struct USpotLightComponent : UPointLightComponent {
	float InnerConeAngle; // 0x358
	float OuterConeAngle; // 0x35c
};

struct UPhysicsConstraintTemplate : UObject {
	FConstraintInstance DefaultInstance; // 0x28
	TArray<FPhysicsConstraintProfileHandle> ProfileHandles; // 0x1f0
	FConstraintProfileProperties DefaultProfile; // 0x200
};

struct Aweapmf_DTK_762x39_03_C : At_MuzzleAttachement_C {
	USceneComponent* Muzzle; // 0x390
};

struct ABMF_Tower_01_C : At_LocationCraftActor_C {
	UBoxComponent* TopBuildBase; // 0x358
	USFPSACBaseCollision* SFPSACBaseCollision2; // 0x360
	UChildActorComponent* Stair_tower_wood_01; // 0x368
};

struct UAnimBlueprint : UBlueprint {
	USkeleton* TargetSkeleton; // 0xa8
	TArray<FAnimGroupInfo> Groups; // 0xb0
	bool bUseMultiThreadedAnimationUpdate; // 0xc0
	bool bWarnAboutBlueprintUsage; // 0xc1
};

struct USFPSUserWidget_ChatBox : UUserWidget {
	FSlateFontInfo Font; // 0x2a8
	float ViewportScale; // 0x300
	bool bUseCustomPanel; // 0x304
};

struct UDistributionVectorParameterBase : UDistributionVectorConstant {
	FName ParameterName; // 0x50
	FVector MinInput; // 0x58
	FVector MaxInput; // 0x64
	FVector MinOutput; // 0x70
	FVector MaxOutput; // 0x7c
	DistributionParamMode ParamModes[0x3]; // 0x88
};

struct UAISenseEvent_Hearing : UAISenseEvent {
	FAINoiseEvent Event; // 0x28
};

struct UComboBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FComboBoxStyle ComboBoxStyle; // 0x30
};

struct UEnvQueryGenerator_Cone : UEnvQueryGenerator_ProjectedPoints {
	FAIDataProviderFloatValue AlignedPointsDistance; // 0x80
	FAIDataProviderFloatValue ConeDegrees; // 0xb8
	FAIDataProviderFloatValue AngleStep; // 0xf0
	FAIDataProviderFloatValue Range; // 0x128
	UEnvQueryContext* CenterActor; // 0x160
	char bIncludeContextLocation : 1; // 0x168
};

struct ULightmassPrimitiveSettingsObject : UObject {
	FLightmassPrimitiveSettings LightmassSettings; // 0x28
};

struct ASFPSGameMode : AGameMode {
	TArray<TWeakObjectPtr<ASFPSCharacter>> LeaveWaitCharacterList; // 0x320
	TArray<FSFPSLoggedCharacterRecord> LoggedWaitCharacterList; // 0x330
	ASFPSPlayerController* AutomationTestPlayerController; // 0x358
	ASFPSPlayerController* AutomationTestPlayerControllerMoving; // 0x360
	ASFPSCharacter* RespawnCharacter; // 0x378
	TArray<FSFPSUnresolvedDeadMarkerInfo> UnresolvedDeadMarkers; // 0x380
	USFPSBaseManager* BaseManager; // 0x390
	USFPSSaver* Saver; // 0x398
	TArray<FSFPSServerSquadRecord> SquadList; // 0x3a0
	TArray<TWeakObjectPtr<ASFPSWheeledVehicle>> VehicleList; // 0x3b0
	USFPSGameplayManager* GameplayManager; // 0x3d0
	USFPSGameplayManager* GameplayManagerClass; // 0x3d8
	FIntPoint MissionRespawnTimes[0x4]; // 0x3e0
	UObject* DebugSpawnActorClass; // 0x400
};

struct UGameplayTask_SpawnActor : UGameplayTask {
	FMulticastInlineDelegate success; // 0x68
	FMulticastInlineDelegate DidNotSpawn; // 0x78
	AActor* ClassToSpawn; // 0xa0
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

struct UNetworkSettings : UDeveloperSettings {
	char bVerifyPeer : 1; // 0x38
	char bEnableMultiplayerWorldOriginRebasing : 1; // 0x38
	int32_t MaxRepArraySize; // 0x3c
	int32_t MaxRepArrayMemory; // 0x40
	TArray<FNetworkEmulationProfileDescription> NetworkEmulationProfiles; // 0x48
};

struct UMaterialExpressionArcsineFast : UMaterialExpression {
	FExpressionInput Input; // 0x40
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

struct UFormDead_C : UUserWidget {
	UImage* imgBlackBackground; // 0x268
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

struct UGizmoCircleComponent : UGizmoBaseComponent {
	FVector Normal; // 0x470
	float Radius; // 0x47c
	float Thickness; // 0x480
	int32_t NumSides; // 0x484
	bool bViewAligned; // 0x488
	bool bOnlyAllowFrontFacingHits; // 0x489
};

struct UMaterialShaderQualitySettings : UObject {
	TMap<FName, UShaderPlatformQualitySettings*> ForwardSettingMap; // 0x28
};

struct UMaterialExpressionArctangent2Fast : UMaterialExpression {
	FExpressionInput Y; // 0x40
	FExpressionInput X; // 0x54
};

struct UInAppPurchaseCallbackProxy2 : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
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

struct UAnimSingleNodeInstance : UAnimInstance {
	UAnimationAsset* CurrentAsset; // 0x2b8
	FDelegate PostEvaluateAnimEvent; // 0x2c0
};

struct Aweapon_firearms_mg_rpk_C : At_FireArm_C {
	UStaticMeshComponent* DeviceLeftMount; // 0x7e0
	UStaticMeshComponent* SideBracket_base; // 0x7e8
	UStaticMeshComponent* SightClose; // 0x7f0
	USFPSACWeaponMFInventory* SFPSACWeaponMFInventory; // 0x7f8
	UStaticMeshComponent* MagazineFull; // 0x800
	UStaticMeshComponent* MagazineEmpty; // 0x808
};

struct USimpleFTPClientBPLibrary : UBlueprintFunctionLibrary {
	FMulticastInlineDelegate onFTPClientConnectionEventDelegate; // 0x28
	FMulticastInlineDelegate onFTPClientStatusEventDelegate; // 0x38
	FMulticastInlineDelegate onFTPClientGoToDirectoryEventDelegate; // 0x48
	FMulticastInlineDelegate onFTPClient_ListCurrentDirectoryDelegate; // 0x58
	FMulticastInlineDelegate onFTPClient_FileInfoDelegate; // 0x68
	FMulticastInlineDelegate onFTPClient_DownloadDelegate; // 0x78
	FMulticastInlineDelegate onFTPClient_UploadDelegate; // 0x88
	FMulticastInlineDelegate onFTPClientDeleteEventDelegate; // 0x98
	FMulticastInlineDelegate onFTPClientCreateDirEventDelegate; // 0xa8
	FMulticastInlineDelegate onFTPClientRenameEventDelegate; // 0xb8
};

struct UDcxVehicleWheelsRawInput : UObject {
	int32_t ThrottleIndex; // 0x28
	TArray<float> RawAnalogControls; // 0x30
};

struct AMagicLeapARPinInfoActorBase : AActor {
	FGuid PinId; // 0x220
	bool bVisibilityOverride; // 0x230
};

struct UABP_weapon_firearms_sg_mp43_C : USFPSWeaponAnimInstance_SG {
	FPointerToUberGraphFrame UberGraphFrame; // 0x310
	FAnimNode_Root AnimGraphNode_Root; // 0x318
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x348
	FAnimNode_Slot AnimGraphNode_Slot; // 0x3c8
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

struct UMaterialInstanceConstant : UMaterialInstance {
	UPhysicalMaterialMask* PhysMaterialMask; // 0x310
};

struct UAISense_Prediction : UAISense {
	TArray<FAIPredictionEvent> RegisteredEvents; // 0x80
};

struct UFieldSystemComponent : UPrimitiveComponent {
	UFieldSystem* FieldSystem; // 0x450
	bool bIsWorldField; // 0x458
	bool bIsChaosField; // 0x459
	TArray<TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers; // 0x460
	FFieldObjectCommands ConstructionCommands; // 0x470
	FFieldObjectCommands BufferCommands; // 0x4a0
};

struct UMovieScenePrimitiveMaterialSection : UMovieSceneSection {
	FMovieSceneObjectPathChannel MaterialChannel; // 0xe8
};

struct UMaterialExpressionViewProperty : UMaterialExpression {
	EMaterialExposedViewProperty Property; // 0x40
};

struct USFPSACSnapComponent : USphereComponent {
	FSFPSACSnaps Snaps; // 0x470
};

struct UGameplayTasksComponent : UActorComponent {
	char bIsNetDirty : 1; // 0xbc
	TArray<UGameplayTask*> SimulatedTasks; // 0xc0
	TArray<UGameplayTask*> TaskPriorityQueue; // 0xd0
	TArray<UGameplayTask*> TickingTasks; // 0xf0
	TArray<UGameplayTask*> KnownTasks; // 0x100
	FMulticastInlineDelegate OnClaimedResourcesChange; // 0x110
};

struct UViewport : UContentWidget {
	FLinearColor BackgroundColor; // 0x120
};

struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	FGuid MeshGuid; // 0x530
};

struct UAISenseConfig_Hearing : UAISenseConfig {
	UAISense_Hearing* Implementation; // 0x48
	float HearingRange; // 0x50
	float LoSHearingRange; // 0x54
	char bUseLoSHearing : 1; // 0x58
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x5c
};

struct ANavModifierVolume : AVolume {
	UNavArea* AreaClass; // 0x260
	bool bMaskFillCollisionUnderneathForNavmesh; // 0x268
};

struct UWidgetSwitcher : UPanelWidget {
	int32_t ActiveWidgetIndex; // 0x120
};

struct USFPSUserWidget_AdminPanel_DeathL : UUserWidget {
	FDelegate OnSelectEvent; // 0x2d8
};

struct USoundNodeModulatorContinuous : USoundNode {
	FModulatorContinuousParams PitchModulationParams; // 0x48
	FModulatorContinuousParams VolumeModulationParams; // 0x68
};

struct UDatasmithPostProcessVolumeTemplate : UDatasmithObjectTemplate {
	FDatasmithPostProcessSettingsTemplate Settings; // 0x30
	char bEnabled : 1; // 0x70
	char bUnbound : 1; // 0x70
};

struct UMaterialExpressionTextureSample : UMaterialExpressionTextureBase {
	FExpressionInput Coordinates; // 0x48
};

struct UBlackboardKeyType_NativeEnum : UBlackboardKeyType {
	FString EnumName; // 0x30
	UEnum* EnumType; // 0x40
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

struct UAISystemBase : UObject {
	FSoftClassPath AISystemClassName; // 0x28
	FName AISystemModuleName; // 0x40
	bool bInstantiateAISystemOnClient; // 0x50
};

struct UMovieSceneAudioTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> AudioSections; // 0x98
};

struct UMagicLeapARPinSaveGame : USaveGame {
	FGuid PinnedID; // 0x28
	FTransform ComponentWorldTransform; // 0x40
	FTransform PinTransform; // 0x70
	bool bShouldPinActor; // 0xa0
};

struct AMatineeActorCameraAnim : AMatineeActor {
	UCameraAnim* CameraAnim; // 0x2c8
};

struct UParticleModuleOrbitBase : UParticleModule {
	char bUseEmitterTime : 1; // 0x30
};

struct APhysicsConstraintActor : ARigidBodyBase {
	UPhysicsConstraintComponent* ConstraintComp; // 0x220
	AActor* ConstraintActor1; // 0x228
	AActor* ConstraintActor2; // 0x230
	char bDisableCollision : 1; // 0x238
};

struct ASFPSBaseGrenade : ASFPSBaseMissileProjectile {
	ESFPSGrenadeType GrenadeType; // 0x3a9
	float AbsoluteDamageRadius; // 0x3ac
	float DecreasingDamageRadius; // 0x3b0
	FVector ServerExplodedLoc; // 0x3b4
	float DelayTimer; // 0x3c0
	UParticleSystem* ExplosionParticles; // 0x3c8
	UParticleSystem* ExplosionWaterParticles; // 0x3d0
	USoundCue* ExplosionSoundCue; // 0x3d8
	bool bDrawDebugInfo; // 0x3e0
	bool bAddDebugInfoToLog; // 0x3e1
};

struct UAISense_Team : UAISense {
	TArray<FAITeamStimulusEvent> RegisteredEvents; // 0x80
};

struct UMaterialExpressionSquareRoot : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UInterpTrackFloatProp : UInterpTrackFloatBase {
	FName PropertyName; // 0x90
};

struct UMaterialParameterCollectionInstance : UObject {
	UMaterialParameterCollection* Collection; // 0x30
};

struct UARBasicLightEstimate : UARLightEstimate {
	float AmbientIntensityLumens; // 0x28
	float AmbientColorTemperatureKelvin; // 0x2c
	FLinearColor AmbientColor; // 0x30
};

struct UMaterialExpressionTextureProperty : UMaterialExpression {
	FExpressionInput TextureObject; // 0x40
	EMaterialExposedTextureProperty Property; // 0x54
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

struct UWidgetSwitcherSlot : UPanelSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct At_CraftKit_C : ASFPSBaseItem {
	UBoxComponent* Trace; // 0x310
	USFPSACCraftKit* SFPSACCraftKit; // 0x318
	UStaticMeshComponent* Mesh; // 0x320
};

struct USoundConcurrency : UObject {
	FSoundConcurrencySettings Concurrency; // 0x28
};

struct ABandwidthTestActor : AActor {
	FBandwidthTestGenerator BandwidthGenerator; // 0x220
};

struct ULevelActorContainer : UObject {
	TArray<AActor*> Actors; // 0x28
};

struct AShell_SR1_C : ASFPSShell {
	UStaticMeshComponent* Mesh; // 0x250
};

struct UMaterialExpressionGIReplace : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput StaticIndirect; // 0x54
	FExpressionInput DynamicIndirect; // 0x68
};

struct UMovieSceneLevelVisibilitySection : UMovieSceneSection {
	ELevelVisibility Visibility; // 0xf0
	TArray<FName> LevelNames; // 0xf8
};

struct UBTService_RunEQS : UBTService_BlackboardBase {
	FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x98
};

struct UMovieSceneSequencePlayer : UObject {
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

struct Aweapmf_DTK_545x39_01_C : At_MuzzleAttachement_C {
	USceneComponent* Muzzle; // 0x390
};

struct ASplineMeshActor : AActor {
	USplineMeshComponent* SplineMeshComponent; // 0x220
};

struct UNavLinkComponent : UPrimitiveComponent {
	TArray<FNavigationLink> Links; // 0x458
};

struct UAnimSharingStateInstance : UAnimInstance {
	UAnimSequence* AnimationToPlay; // 0x2b8
	float PermutationTimeOffset; // 0x2c0
	float PlayRate; // 0x2c4
	bool bStateBool; // 0x2c8
	UAnimSharingInstance* Instance; // 0x2d0
};

