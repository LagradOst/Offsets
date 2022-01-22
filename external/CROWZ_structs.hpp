#pragma once

struct FCrowKillFeedIconTableRow {
	ECrowDamageCauser DamageCauser; // 0x8
	UPaperSprite* IconSprite; // 0x10
};

struct FCrowNewItem {
	ECrowItemType ItemType; // 0x0
	uint32_t ItemIndex; // 0x4
	uint32_t WeaponPartsIndex; // 0x8
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

struct FCapturedPropSegment {
	FString PropertyName; // 0x0
	int32_t PropertyIndex; // 0x10
	FString ComponentName; // 0x18
};

struct FAnimTrack {
	TArray<FAnimSegment> AnimSegments; // 0x0
};

struct FAnimNode_AssetPlayerBase {
	FName GroupName; // 0x10
	EAnimGroupRole GroupRole; // 0x18
	EAnimSyncGroupScope GroupScope; // 0x19
	bool bIgnoreForRelevancyTest; // 0x1a
	float BlendWeight; // 0x1c
	float InternalTimeAccumulator; // 0x20
};

struct FCrowSquadMatchResultInfo {
	TArray<ACrowPlayerStateSquadMatch*> PlayerArray; // 0x0
	TArray<FCrowResultTopPlayerInfo> TopSquadPlayerArray; // 0x10
};

struct FAnimNode_Fabrik {
	FTransform EffectorTransform; // 0xd0
	FBoneSocketTarget EffectorTarget; // 0x100
	FBoneReference TipBone; // 0x160
	FBoneReference RootBone; // 0x170
	float Precision; // 0x180
	int32_t MaxIterations; // 0x184
	EBoneControlSpace EffectorTransformSpace; // 0x188
	EBoneRotationSource EffectorRotationSource; // 0x189
};

struct FMovieSceneVector4KeyStruct {
	FVector4 Vector; // 0x30
};

struct FEmitterDynamicParameter {
	FName ParamName; // 0x0
	char bUseEmitterTime : 1; // 0x8
	char bSpawnTimeOnly : 1; // 0x8
	EEmitterDynamicParameterValue ValueMethod; // 0xc
	char bScaleVelocityByParamValue : 1; // 0x10
	FRawDistributionFloat ParamValue; // 0x18
};

struct FCrowMissionInfo {
	char MissionType; // 0x0
	char MissionModeType; // 0x1
	uint32_t EndDate; // 0x4
	uint32_t MissionID; // 0x8
	uint32_t DoCount; // 0xc
	uint32_t GoalCount; // 0x10
};

struct FCrowClothTopTableRow {
	USkeletalMesh* ClothMesh_FP_Patch; // 0x258
	USkeletalMesh* ClothMesh_TP_Patch; // 0x260
	USkeletalMesh* ClothMesh_FP_Patch_Female; // 0x268
	USkeletalMesh* ClothMesh_TP_Patch_Female; // 0x270
};

struct FSkyCreatorStarMapSettings {
	float StarMapBrightness; // 0x0
	FLinearColor StarMapColorTint; // 0x4
	FLinearColor NightHorizonColor; // 0x14
	FLinearColor NightZenithColor; // 0x24
};

struct FARSkeletonDefinition {
	int32_t NumJoints; // 0x0
	TArray<FName> JointNames; // 0x8
	TArray<int32_t> ParentIndices; // 0x18
};

struct FCrowCloudInfo {
	FVector Location; // 0x0
	float Radius; // 0xc
};

struct FLevelViewportInfo {
	FVector CamPosition; // 0x0
	FRotator CamRotation; // 0xc
	float CamOrthoZoom; // 0x18
	bool CamUpdated; // 0x1c
};

struct FGenericStruct {
	int32_t Data; // 0x0
};

struct FCrowCurrencyMeshInfo {
	ACrowItemMeshActor* MeshClass; // 0x0
	int32_t CountMin; // 0x8
	int32_t CountMax; // 0xc
};

struct FCrowShopTableRow {
	uint32_t Index; // 0x8
	FString HelpText; // 0x10
	int32_t Reward_ID; // 0x20
	int32_t AddReward_ID; // 0x24
	ECrowItemType BuyMoneyType; // 0x28
	uint32_t BuyMoneyPrice; // 0x2c
	ECrowShopProductType ProductType; // 0x30
	ECrowShopProductSubType ProductSubType; // 0x31
	uint32_t StartTime; // 0x34
	uint32_t EndTime; // 0x38
	int32_t ItemProductLimit; // 0x3c
	int32_t ProductCount; // 0x40
	int32_t ProductBuffID; // 0x44
	FString ProductTileKeyString; // 0x48
	FString ProductDescKeyString; // 0x58
	UPaperSprite* ProductIcon; // 0x68
	ECrowItemGrade ItemGrade; // 0x70
};

struct FSpinBoxStyle {
	FSlateBrush BackgroundBrush; // 0x8
	FSlateBrush HoveredBackgroundBrush; // 0x90
	FSlateBrush ActiveFillBrush; // 0x118
	FSlateBrush InactiveFillBrush; // 0x1a0
	FSlateBrush ArrowsImage; // 0x228
	FSlateColor ForegroundColor; // 0x2b0
	FMargin TextPadding; // 0x2d8
};

struct FCrowVehicleCachedRepMovement {
	FVector LinearVelocity; // 0x0
	FVector Location; // 0xc
	FQuat Rotation; // 0x20
	float TimeSeconds; // 0x30
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

struct FMagicLeapLightEstimationColorTemperatureState {
	float ColorTemperatureKelvin; // 0x0
	FLinearColor AmbientColor; // 0x4
	FTimespan Timestamp; // 0x18
};

struct FMovieSceneFadeSectionTemplate {
	FMovieSceneFloatChannel FadeCurve; // 0x20
	FLinearColor FadeColor; // 0xc0
	char bFadeAudio : 1; // 0xd0
};

struct FInAppPurchaseReceiptInfo {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FAnimNode_VehicleWeaponHandler {
	FCrowVehicleWeaponHandlerAnimSetup AnimSetup; // 0xc8
	TArray<FBoneReference> BoneReferences; // 0xe0
};

struct FCrowGameMessageTableRow {
	FText Message; // 0x8
	float DisplayTime; // 0x20
	UAkAudioEvent* SpeechSound; // 0x28
};

struct FFloatRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FMovieSceneCameraShakeSectionData {
	UMatineeCameraShake* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraShakePlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
};

struct FCrowVehicleUpdaterSweepItem {
	TArray<FHitResult> HitResults; // 0xd0
};

struct FMagicLeapHeadTrackingState {
	EMagicLeapHeadTrackingMode Mode; // 0x0
	EMagicLeapHeadTrackingError Error; // 0x1
	float Confidence; // 0x4
};

struct FAnimNode_RotateRootBone {
	FPoseLink BasePose; // 0x10
	float Pitch; // 0x20
	float Yaw; // 0x24
	FInputScaleBiasClamp PitchScaleBiasClamp; // 0x28
	FInputScaleBiasClamp YawScaleBiasClamp; // 0x58
	FRotator MeshToComponent; // 0x88
};

struct FXRHMDData {
	bool bValid; // 0x0
	FName DeviceName; // 0x4
	FGuid ApplicationInstanceID; // 0xc
	ETrackingStatus TrackingStatus; // 0x1c
	FVector position; // 0x20
	FQuat Rotation; // 0x30
};

struct FStructSerializerMapTestStruct {
	TMap<int32_t, FString> IntToStr; // 0x0
	TMap<FString, FString> StrToStr; // 0x50
	TMap<FString, FVector> StrToVec; // 0xa0
	TMap<FString, FStructSerializerBuiltinTestStruct> StrToStruct; // 0xf0
};

struct FCollisionResponse {
	FCollisionResponseContainer ResponseToChannels; // 0x0
	TArray<FResponseChannel> ResponseArray; // 0x20
};

struct FStaticSwitchParameter {
	bool Value; // 0x24
};

struct FNiagaraDetailsLevelScaleOverrides {
	float Low; // 0x0
	float Medium; // 0x4
	float High; // 0x8
	float Epic; // 0xc
	float Cine; // 0x10
};

struct FColorGradePerRangeSettings {
	FVector4 Saturation; // 0x0
	FVector4 Contrast; // 0x10
	FVector4 Gamma; // 0x20
	FVector4 Gain; // 0x30
	FVector4 Offset; // 0x40
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

struct FCrowWorldMapLightSetting {
	UPointLightComponent* PointLightFP; // 0x0
	FVector LightFPOffset; // 0x8
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

struct FCrowInputSetting {
	int32_t Priority; // 0x0
	bool BlockInput; // 0x4
};

struct FSliderStyle {
	FSlateBrush NormalBarImage; // 0x8
	FSlateBrush HoveredBarImage; // 0x90
	FSlateBrush DisabledBarImage; // 0x118
	FSlateBrush NormalThumbImage; // 0x1a0
	FSlateBrush HoveredThumbImage; // 0x228
	FSlateBrush DisabledThumbImage; // 0x2b0
	float BarThickness; // 0x338
};

struct FCrowWorldActorLayoutItemLookups {
	TArray<int16_t> LayoutToDestructibleFlag; // 0x0
	TArray<int16_t> DestructibleFlagToLayout; // 0x10
	TArray<int16_t> LayoutToDynamicStates; // 0x20
	TArray<int16_t> DynamicStatesToLayout; // 0x30
};

struct FAnimNode_BlendListByBool {
	bool bActiveValue; // 0x98
};

struct FGameplayTagTableRow {
	FName Tag; // 0x8
	FString DevComment; // 0x10
};

struct FAnimNode_AnimDynamics {
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

struct FCrowClothGlassesTableRow {
	ECrowClothPartGlassesType SubClothType; // 0x258
};

struct FStructSerializerSetTestStruct {
	TSet<FString> StrSet; // 0x0
	TSet<int32_t> IntSet; // 0x50
	TSet<FName> NameSet; // 0xa0
	TSet<FStructSerializerBuiltinTestStruct> StructSet; // 0xf0
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

struct FCustomizedToolMenuEntry {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FCrowWorldReplicationSector {
	uint32_t SectorIndex; // 0x4
	FBitFlagArray ActorDestroyedFlags; // 0x8
	FBitFlagArray LayoutItemDestroyedFlags; // 0x20
	TArray<int8_t> LayoutItemDynamicStates; // 0x38
};

struct FHairExternalForces {
	FVector GravityVector; // 0x0
	float AirDrag; // 0xc
	FVector AirVelocity; // 0x10
};

struct FCrowProjectileRequestInfo {
	uint32_t ProjectileUID; // 0x0
	FVector StartLocation; // 0x4
	FVector ShootDirection; // 0x10
};

struct FCrowConquestIconAreaPair {
	UCrowWidgetBase* IconWidget; // 0x0
	ACrowConquestArea* ConquestArea; // 0x8
};

struct FPrimitiveComponentInstanceData {
	FTransform ComponentTransform; // 0xc0
	int32_t VisibilityId; // 0xf0
	UPrimitiveComponent* LODParent; // 0xf8
};

struct FMovieSceneEvaluationKey {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
	uint32_t SectionIndex; // 0x8
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

struct FTetherSegmentSimulationOptions {
	bool bFixedAnchorPoint; // 0x0
	bool bUseSplineTangents; // 0x1
};

struct FCrowRotorBodySetting {
	float WeightInKg; // 0x0
	float uuPerMeterFactor; // 0x4
	float LinearDamping; // 0x8
	float AngularDamping; // 0xc
	float MaxHoverForce; // 0x10
	float MinHoverForce; // 0x14
	float MaxPitchDegree; // 0x18
	float MaxRollDegree; // 0x1c
	float MaxPitchTorque; // 0x20
	float MaxYawTorque; // 0x24
	float MaxRollTorque; // 0x28
	float RecoverAxisSpringConstantPitch; // 0x2c
	float RecoverAxisSpringConstantYaw; // 0x30
	float RecoverAxisSpringConstantRoll; // 0x34
	float SpeedMultiplyForwardByRotation; // 0x38
	float SpeedMultiplySideByRotation; // 0x3c
	float MoveForwardPitchRatio; // 0x40
	float MoveRightRollRatio; // 0x44
	float YawToRollRatio; // 0x48
	float MoveForwardForce; // 0x4c
	float MoveRightForce; // 0x50
	float MoveSpeedMax; // 0x54
	float MaxPitchCameraAngle; // 0x58
	float MaxYawCameraAngle; // 0x5c
	float CameraRotationLookUpScale; // 0x60
	float CameraRotationTurnScale; // 0x64
	float EasyLandingHeight; // 0x68
	float EasyLandingSpeed; // 0x6c
	FVector DirectionalDragArea; // 0x70
	FVector DirectionalDragCoefficient; // 0x7c
	FVector DirectionalIdleDamping; // 0x88
	float MinInputValue; // 0x94
	float ForceInterpolation; // 0x98
	bool DrawDebugPhysicsLine; // 0x9c
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

struct FMovieSceneCameraShakeSourceShakeSectionTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
	FFrameNumber SectionEndTime; // 0x44
};

struct FDestructibleAdvancedParameters {
	float DamageCap; // 0x0
	float ImpactVelocityThreshold; // 0x4
	float MaxChunkSpeed; // 0x8
	float FractureImpulseScale; // 0xc
};

struct FCrowCharacterAnimPrivateShootRow {
	UAnimSequenceBase* PreFireTP; // 0x8
	UAnimSequenceBase* FireTP; // 0x10
	UAnimSequenceBase* PostFireTP; // 0x18
	UAnimSequenceBase* PreFireFP; // 0x20
	UAnimSequenceBase* FireFP; // 0x28
	UAnimSequenceBase* AimFireFP; // 0x30
	UAnimSequenceBase* PostFireFP; // 0x38
};

struct FCrowCharacterFootIKSetup {
	bool bUseDrawDebugLine; // 0x0
	FName LeftFootBoneName; // 0x4
	FName RightFootBoneName; // 0xc
	float TraceLengthAboveFoot; // 0x14
	float TraceLengthBelowFoot; // 0x18
	FCrowCharacterFootIKLimit LimitStanding; // 0x1c
	FCrowCharacterFootIKLimit LimitCrouching; // 0x34
	float InterpSpeed; // 0x4c
};

struct FCrowTeleportationTargetInfo {
	ACrowCharacterPawn* Target; // 0x0
	float StartedTimeSeconds; // 0x8
};

struct FFunctionExpressionInput {
	UMaterialExpressionFunctionInput* ExpressionInput; // 0x0
	FGuid ExpressionInputId; // 0x8
	FExpressionInput Input; // 0x18
};

struct FTriggerCheckMouseOver {
	TArray<FTriggerCollisionInfo> Targets; // 0x0
};

struct FCrowRecentGamePlayUserInfo {
	int64_t LastGamePlayTime; // 0x30
	int8_t SquadMember; // 0x38
};

struct FMovieScenePossessable {
	TArray<FName> Tags; // 0x0
	FGuid Guid; // 0x10
	FString Name; // 0x20
	UObject* PossessedObjectClass; // 0x30
	FGuid ParentGuid; // 0x38
};

struct FMovieSceneWidgetMaterialSectionTemplate {
	TArray<FName> BrushPropertyNamePath; // 0x80
};

struct FSingleAnimationPlayData {
	UAnimationAsset* AnimToPlay; // 0x0
	char bSavedLooping : 1; // 0x8
	char bSavedPlaying : 1; // 0x8
	float SavedPosition; // 0xc
	float SavedPlayRate; // 0x10
};

struct FBakedIntegerCustomAttribute {
	FName AttributeName; // 0x0
	FIntegralCurve IntCurve; // 0x8
};

struct FFormationPointsGenerationSettings {
	float Length; // 0x0
	float Width; // 0x4
	float DistanceBetweenPoints; // 0x8
};

struct FEdgeToCreate {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
	FMeshElementAttributeList EdgeAttributes; // 0x8
	FEdgeID OriginalEdgeID; // 0x18
};

struct FCrowWorldClusterData {
	uint32_t ClusterIndex; // 0x0
	TArray<uint32_t> SectorIndexArray; // 0x8
	TArray<uint32_t> ActorIndexArray; // 0x18
};

struct FConstraintOffset {
	FVector Translation; // 0x0
	FQuat Rotation; // 0x10
	FVector Scale; // 0x20
	FTransform Parent; // 0x30
};

struct FCrowActiveSpawnerCount {
	int32_t RandomSpawner; // 0x0
	int32_t GroupSpawner; // 0x4
	int32_t MineralSpawner01; // 0x8
	int32_t MineralSpawner02; // 0xc
	int32_t MineralSpawner03; // 0x10
	int32_t FixSpawner; // 0x14
	int32_t RespawnFixSpawner; // 0x18
	float RespawnFixDelayMin; // 0x1c
	float RespawnFixDelayMax; // 0x20
};

struct FNiagaraParameterDataSetBindingCollection {
	TArray<FNiagaraParameterDataSetBinding> FloatOffsets; // 0x0
	TArray<FNiagaraParameterDataSetBinding> Int32Offsets; // 0x10
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

struct FAnimNode_TransitionPoseEvaluator {
	int32_t FramesToCachePose; // 0xe8
	EEvaluatorDataSource DataSource; // 0xf0
	EEvaluatorMode EvaluatorMode; // 0xf1
};

struct FCrowCloudCollision {
	FVector Location; // 0x0
	float Radius; // 0xc
	UCrowCloudDamage* CloudDamageSetting; // 0x10
};

struct FVisibilityTrackKey {
	float Time; // 0x0
	EVisibilityTrackAction Action; // 0x4
	EVisibilityTrackCondition ActiveCondition; // 0x5
};

struct FMovieSceneSequenceLoopCount {
	int32_t Value; // 0x0
};

struct FCustomAttribute {
	FName Name; // 0x0
	int32_t VariantType; // 0x8
	TArray<float> Times; // 0x10
};

struct FCrowCharacterAnimItemActionRow {
	UAnimSequenceBase* EquipTP; // 0x8
	UAnimSequenceBase* UnEquipTP; // 0x10
	UAnimSequenceBase* ReloadTP; // 0x18
	UAnimSequenceBase* PreFireTP; // 0x20
	UAnimSequenceBase* FireTP; // 0x28
	UAnimSequenceBase* PostFireTP; // 0x30
	UAnimSequenceBase* EquipFP; // 0x38
	UAnimSequenceBase* UnEquipFP; // 0x40
	UAnimSequenceBase* ReloadFP; // 0x48
	UAnimSequenceBase* PreFireFP; // 0x50
	UAnimSequenceBase* FireFP; // 0x58
	UAnimSequenceBase* PostFireFP; // 0x60
};

struct FCrowMailRewardTime {
	FString HelpText; // 0x10
	uint64_t TimeSecond; // 0x20
};

struct FCrowRandomSetTableRow {
	FString HelpText; // 0x8
	int32_t CountMin; // 0x18
	int32_t CountMax; // 0x1c
	TArray<FCrowRandomSetWeight> ItemArray; // 0x20
};

struct FSoundModulationDefaultSettings {
	FSoundModulationDestinationSettings VolumeModulationDestination; // 0x0
	FSoundModulationDestinationSettings PitchModulationDestination; // 0x10
	FSoundModulationDestinationSettings HighpassModulationDestination; // 0x20
	FSoundModulationDestinationSettings LowpassModulationDestination; // 0x30
};

struct FPhysicsSphereData {
	float Radius; // 0x0
	FTransform Transform; // 0x10
	FKShapeElem Element; // 0x40
};

struct FAnimNode_SpringBone {
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

struct FLODSoloTrack {
	TArray<char> SoloEnableSetting; // 0x0
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

struct FNiagaraPlatformSetConflictEntry {
	FName ProfileName; // 0x0
	int32_t QualityLevelMask; // 0x8
};

struct FPassengerSeatLeanAmount {
	float LeanForward; // 0x0
	float LeanBackward; // 0x4
	float LeanSide; // 0x8
};

struct FCrowWeaponMuzzleFX {
	UParticleSystem* ParticleSystem; // 0x0
	UNiagaraSystem* NiagaraSystem; // 0x8
	bool AttachFX; // 0x10
};

struct FCrowBuildingLODTableRowInfo {
	int16_t LODLevel; // 0x0
	ECrowBuildingPartsLODType LODType; // 0x2
	bool AlwaysHiddenInGame; // 0x3
	bool AlwaysUseStaticMesh; // 0x4
	bool AlwaysUseISMC; // 0x5
};

struct FStaticComponentMaskParameter {
	bool R; // 0x24
	bool G; // 0x25
	bool B; // 0x26
	bool A; // 0x27
};

struct FCrowClothItemMaterial {
	FName MaterialSlotName; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FAlphaBlend {
	UCurveFloat* CustomCurve; // 0x0
	float BlendTime; // 0x8
	EAlphaBlendOption BlendOption; // 0x24
};

struct FPoseSnapshot {
	TArray<FTransform> LocalTransforms; // 0x0
	TArray<FName> BoneNames; // 0x10
	FName SkeletalMeshName; // 0x20
	FName SnapshotName; // 0x28
	bool bIsValid; // 0x30
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

struct FCrowWeaponEventInfo {
	ECrowWeaponEventType EventType; // 0x0
	ECrowWeaponPartsType PartsType; // 0x1
	uint32_t Index; // 0x4
	uint32_t WeaponLevel; // 0x8
	uint32_t PartsIndex; // 0xc
};

struct FCrowPersonalResultItem {
	int32_t Value; // 0x0
	UTextBlock* TB_Value; // 0x8
	float ProgressTime; // 0x10
	float NormalizeTime; // 0x14
	float AccumTime; // 0x18
	ECrowPersonalResultItemState State; // 0x1c
};

struct FCrowWorldSplinePointifyParam {
	UCrowWorldSplineComponent* SplineComponent; // 0x0
	int32_t StartIndex; // 0x8
	int32_t EndIndex; // 0xc
	float DeformWidth; // 0x10
	float SideFalloffWidth; // 0x14
	float OnesideFalloffWidth; // 0x18
	float HeightOffset; // 0x1c
	float SubDivisionLength; // 0x20
	bool UseLeftSideDeform; // 0x24
	bool UseRightSideDeform; // 0x25
};

struct FLiveLinkTransformBlueprintData {
	FLiveLinkTransformStaticData StaticData; // 0x8
	FLiveLinkTransformFrameData FrameData; // 0x20
};

struct FBlueprintInputTouchDelegateBinding {
	EInputEvent InputKeyEvent; // 0x4
	FName FunctionNameToBind; // 0x8
};

struct FMagicLeapLightEstimationAmbientGlobalState {
	TArray<float> AmbientIntensityNits; // 0x0
	FTimespan Timestamp; // 0x10
};

struct FVertexAttributesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FMeshElementAttributeList> PerimeterVertexAttributeLists; // 0x8
	TArray<FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole; // 0x18
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

struct FClothConstraintSetup_Legacy {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
};

struct FARCameraIntrinsics {
	FIntPoint ImageResolution; // 0x0
	FVector2D FocalLength; // 0x8
	FVector2D PrincipalPoint; // 0x10
};

struct FExternalToolDefinition {
	FString ToolName; // 0x0
	FFilePath ExecutablePath; // 0x10
	FString CommandLineOptions; // 0x20
	FDirectoryPath WorkingDirectory; // 0x30
	FString ScriptExtension; // 0x40
	FDirectoryPath ScriptDirectory; // 0x50
};

struct FCameraCacheEntry {
	float Timestamp; // 0x0
	FMinimalViewInfo POV; // 0x10
};

struct FLocalSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FCrowZombieDamgeInfo {
	UDamageType* DamageClass; // 0x0
	float DamageRate; // 0x8
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

struct FCrowRandomItemTableRow {
	FString HelpText; // 0x8
	ECrowItemType ItemType; // 0x18
	TArray<FCrowRandomItemWeight> ItemArray; // 0x20
};

struct FCrowClassRouteAndReplicationInfo {
	TArray<FCrowClassRouteInfo> ClassRouteInfoList; // 0x0
	TArray<FCrowClassReplicationInfo> ClassReplicationInfoList; // 0x10
};

struct FLuminComponentElement {
	FString Name; // 0x0
	FString VisibleName; // 0x10
	FString ExecutableName; // 0x20
	ELuminComponentType ComponentType; // 0x30
	TArray<FLuminComponentSubElement> ExtraComponentSubElements; // 0x38
};

struct FMovieSceneEvaluationFieldSegmentPtr {
	FMovieSceneSegmentIdentifier SegmentID; // 0x8
};

struct FBasicMeshGenerationOptions {
	int32_t NumSides; // 0x0
	bool bOverrideCableWidth; // 0x4
	float CableMeshWidth; // 0x8
	bool bAutoTile; // 0xc
	bool bSnapToNearestFullTile; // 0xd
	float TileUVs; // 0x10
};

struct FChaosTrailingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinAngularSpeed; // 0xc
	float MaxDistance; // 0x10
	EChaosTrailingSortMethod SortMethod; // 0x14
};

struct FHairMaterialConstraints {
	FHairBendConstraint BendConstraint; // 0x0
	FHairStretchConstraint StretchConstraint; // 0x98
	FHairCollisionConstraint CollisionConstraint; // 0x130
};

struct FRawDistributionVector {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	FVector MinValueVec; // 0x28
	FVector MaxValueVec; // 0x34
	UDistributionVector* Distribution; // 0x40
};

struct FCrowChatData {
	ECrowChatType ChatType; // 0x0
	uint64_t playerId; // 0x8
	FString ServerAppID; // 0x10
	FString ChatMessage; // 0x20
	FString SendedPlayerNickname; // 0x30
	ACrowPlayerStateBase* SendedPlayerState; // 0x40
};

struct FCrowLandWheelsHandlerAnimSetup {
	int32_t WheelIndex; // 0x0
	bool bUseSteerAngle; // 0x4
	bool bUseRotationAngle; // 0x5
	float RotationMultiply; // 0x8
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

struct FClothParameterMask_Legacy {
	FName MaskName; // 0x0
	EWeightMapTargetCommon CurrentTarget; // 0x8
	float MaxValue; // 0xc
	float MinValue; // 0x10
	TArray<float> Values; // 0x18
	bool bEnabled; // 0x28
};

struct FMovieSceneEventPtrs {
	UFunction* Function; // 0x0
	TFieldPath<FProperty> BoundObjectProperty; // 0x8
};

struct FCrowClassRouteInfo {
	FString Description; // 0x0
	AActor* Class; // 0x10
	EClassRepNodeMapping RouteType; // 0x18
};

struct FLensImperfectionSettings {
	UTexture* DirtMask; // 0x0
	float DirtMaskIntensity; // 0x8
	FLinearColor DirtMaskTint; // 0xc
};

struct FLiveLinkLightBlueprintData {
	FLiveLinkLightStaticData StaticData; // 0x8
	FLiveLinkLightFrameData FrameData; // 0x30
};

struct FCrowPartsMeshInfo {
	UMeshComponent* MeshComponent; // 0x0
	USceneComponent* AttachParentComponent; // 0x8
	FName AttachSocketName; // 0x10
};

struct FSubjectMetadata {
	TMap<FName, FString> StringMetadata; // 0x0
	FTimecode SceneTimecode; // 0x50
	FFrameRate SceneFramerate; // 0x64
};

struct FMaterialEditorPromotionSettings {
	FFilePath DefaultMaterialAsset; // 0x0
	FFilePath DefaultDiffuseTexture; // 0x10
	FFilePath DefaultNormalTexture; // 0x20
};

struct FTimeStretchCurve {
	float SamplingRate; // 0x0
	float CurveValueMinPrecision; // 0x4
	TArray<FTimeStretchCurveMarker> Markers; // 0x8
	float Sum_dT_i_by_C_i[0x3]; // 0x18
};

struct FExpandableAreaStyle {
	FSlateBrush CollapsedImage; // 0x8
	FSlateBrush ExpandedImage; // 0x90
	float RolloutAnimationSeconds; // 0x118
};

struct FAnimNode_LinkedAnimGraph {
	TArray<FPoseLink> InputPoses; // 0x58
	TArray<FName> InputPoseNames; // 0x68
	UAnimInstance* InstanceClass; // 0x78
	FName Tag; // 0x80
	char bReceiveNotifiesFromLinkedInstances : 1; // 0x9c
	char bPropagateNotifiesToLinkedInstances : 1; // 0x9c
};

struct FMovieSceneGeometryCollectionSectionTemplateParameters {
	FFrameNumber SectionStartTime; // 0x30
	FFrameNumber SectionEndTime; // 0x34
};

struct FCrowLandWheelsSuspensionSubstep {
	FVector Location; // 0x0
	FVector Forward; // 0xc
	FVector Right; // 0x18
	FVector Up; // 0x24
	FVector Velocity; // 0x30
	FVector SuspensionTop; // 0x3c
	FVector SuspensionBottom; // 0x48
	float InAirDamperSpeed; // 0x54
	float InAirSpringPosition; // 0x58
	float Mass; // 0x5c
};

struct FLevelSequenceBindingReference {
	FString PackageName; // 0x0
	FSoftObjectPath ExternalObjectPath; // 0x10
	FString ObjectPath; // 0x28
};

struct FCrowColorTableRow {
	FLinearColor Color; // 0x8
};

struct FMarkerSyncData {
	TArray<FAnimSyncMarker> AuthoredSyncMarkers; // 0x0
};

struct FCurveTableRowHandle {
	UCurveTable* CurveTable; // 0x0
	FName RowName; // 0x8
};

struct FMovieSceneTrackEvaluationFieldEntry {
	UMovieSceneSection* Section; // 0x0
	FFrameNumberRange Range; // 0x8
	FFrameNumber ForcedTime; // 0x18
	ESectionEvaluationFlags Flags; // 0x1c
	int16_t LegacySortOrder; // 0x1e
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

struct FInputActionKeyMapping {
	FName ActionName; // 0x0
	char bShift : 1; // 0x8
	char bCtrl : 1; // 0x8
	char bAlt : 1; // 0x8
	char bCmd : 1; // 0x8
	FKey Key; // 0x10
};

struct FRenderableTriangle {
	UMaterialInterface* Material; // 0x0
	FRenderableTriangleVertex Vertex0; // 0x8
	FRenderableTriangleVertex Vertex1; // 0x2c
	FRenderableTriangleVertex Vertex2; // 0x50
};

struct FCrowWorldSectorData {
	uint32_t SectorIndex; // 0x0
	uint32_t ParentClusterIndex; // 0x4
	TArray<FCrowWorldActorData> ActorArray; // 0x8
	int16_t ActorDestructibleFlagCount; // 0x18
	int16_t LayoutItemDestructibleFlagCount; // 0x1a
	int16_t LayoutItemDynamicStateCount; // 0x1c
};

struct FCrowMainMedalTableRow {
	FString HelpText; // 0x10
	uint32_t GroupIndex; // 0x20
	uint32_t Order; // 0x24
	ECrowMedalType MedalType; // 0x28
	uint32_t CompleteCount; // 0x2c
	FText Name; // 0x30
	UPaperSprite* Icon; // 0x48
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

struct FFrameNumberRange {
	FFrameNumberRangeBound LowerBound; // 0x0
	FFrameNumberRangeBound UpperBound; // 0x8
};

struct FForceFeedbackParameters {
	FName Tag; // 0x0
	bool bLooping; // 0x8
	bool bIgnoreTimeDilation; // 0x9
	bool bPlayWhilePaused; // 0xa
};

struct FNodeItem {
	FName ParentName; // 0x0
	FTransform Transform; // 0x10
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

struct FCrowDamageExpInfo {
	uint64_t ServerKey; // 0x0
	float DamagePercent; // 0x8
	double DamageTime; // 0x10
	TArray<FCrowAssistDamageInfo> AssistDamageInfos; // 0x18
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

struct FCLSCharacterEssential {
	FVector Velocity; // 0x0
	FVector Acceleration; // 0xc
	FVector MovementInput; // 0x18
	bool bIsMoving; // 0x24
	bool bHasMovementInput; // 0x25
	float Speed; // 0x28
	float MovementInputAmount; // 0x2c
	FRotator AimingRotation; // 0x30
	float AimYawRate; // 0x3c
	float RotateOffset; // 0x40
	float StandToCrouchAnimRate; // 0x44
	float StandToProneAnimRate; // 0x48
	float CrouchToStandAnimRate; // 0x4c
	float CrouchToProneAnimRate; // 0x50
	float ProneToStandAnimRate; // 0x54
	float ProneToCrouchAnimRate; // 0x58
	bool bUseArmLOverwrite; // 0x5c
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

struct FCrowFoliageInteractionRow {
	bool bAttenuation; // 0x8
	FCrowFoliageInteractionAttenuationWithRay BendingMaskAttenation; // 0xc
	FCrowFoliageInteractionAttenuation BendingStrengthAttenation; // 0x20
	FCrowFoliageInteractionAttenuation BendingSpeedAttenation; // 0x30
	FCrowFoliageInteractionAttenuation WindMaskScaleAttenation; // 0x40
	FCrowFoliageInteractionAttenuation WindMaskPlantScaleAttenation; // 0x50
	FCrowFoliageInteractionAttenuation WindMaskTreeScaleAttenation; // 0x60
	TArray<FCrowFoliageInfluenceInterpSequence> InterpSequence; // 0x70
};

struct FBoolTrackKey {
	float Time; // 0x0
	char Value : 1; // 0x4
};

struct FPhysicsConvexData {
	int32_t NumVertices; // 0x0
	int32_t NumFaces; // 0x4
	FKShapeElem Element; // 0x8
};

struct FPaperTileInfo {
	UPaperTileSet* TileSet; // 0x0
	int32_t PackedTileIndex; // 0x8
};

struct FCustomAttributeSetting {
	FString Name; // 0x0
	FString Meaning; // 0x10
};

struct FCrowUnLockWeaponPartTable {
	int32_t UnlockWeaponPartsIndex; // 0x0
	int32_t UnlockLevel; // 0x4
};

struct FCrowWeaponTimeInfo {
	float ServerTime; // 0x0
	float ClientTime; // 0x4
	float ClientOffset; // 0x8
	FString LogString; // 0x10
};

struct FInstancedStaticMeshComponentInstanceData {
	UStaticMesh* StaticMesh; // 0xb8
	FInstancedStaticMeshLightMapInstanceData CachedStaticLighting; // 0xc0
	TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x100
	TArray<float> PerInstanceSMCustomData; // 0x110
	int32_t InstancingRandomSeed; // 0x140
};

struct FSupportedSubTrackInfo {
	UInterpTrack* SupportedClass; // 0x0
	FString SubTrackName; // 0x8
	int32_t GroupIndex; // 0x18
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

struct FCrowWorldLightProbeSetting {
	FLinearColor LightColor; // 0x0
	float LightCheckDistance; // 0x10
	float SourceRadius; // 0x14
	float OverlapCheckRadius; // 0x18
	int32_t OpenCheckExtent; // 0x1c
	int32_t OpenCheckStep; // 0x20
	int32_t OpenCheckUpperLimitPercent; // 0x24
	int32_t OpenCheckThresholdPercent; // 0x28
	float MinDistanceToHitSurface; // 0x2c
	float MaxDistanceToHitSurface; // 0x30
	float IntensityMultiplyMin; // 0x34
	float IntensityMultiplyMax; // 0x38
	float AttenuationRadiusMin; // 0x3c
	float AttenuationRadiusMax; // 0x40
	float MaxDrawDistance; // 0x44
	float MaxDistanceFadeRange; // 0x48
};

struct FSourceEffectPannerSettings {
	float Spread; // 0x0
	float Pan; // 0x4
};

struct FAssetRegistryDependencyOptions {
	bool bIncludeSoftPackageReferences; // 0x0
	bool bIncludeHardPackageReferences; // 0x1
	bool bIncludeSearchableNames; // 0x2
	bool bIncludeSoftManagementReferences; // 0x3
	bool bIncludeHardManagementReferences; // 0x4
};

struct FGameplayTagCategoryRemap {
	FString BaseCategory; // 0x0
	TArray<FString> RemapCategories; // 0x10
};

struct FLiveLinkCurveConversionSettings {
	TMap<FString, FSoftObjectPath> CurveConversionAssetMap; // 0x0
};

struct FCrowTeamInfoBombMission {
	char TeamID; // 0x0
	TArray<ACrowPlayerStateBase*> PlayerStateArray; // 0x8
};

struct FNamedEmitterMaterial {
	FName Name; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FMovieSceneEvaluationTemplateSerialNumber {
	uint32_t Value; // 0x0
};

struct FST_DamageMaterial {
	TMap<FName, FST_DamageMaterialDurability> DamageMaterialParams; // 0x0
};

struct FCrowWeaponGroundDustEffect {
	TSoftObjectPtr<UParticleSystem> ParticleSys; // 0x0
	TSoftObjectPtr<UNiagaraSystem> NiagaraSys; // 0x28
	TArray<FName> AffectParamNames; // 0x50
	TMap<FName, FCrowWeaponGroundDustEffectParam> WeaponGroundDustEffectParams; // 0x60
};

struct FCrowAnimPoseSet {
	UAnimationAsset* WeaponNormal1P; // 0x0
	UAnimationAsset* WeaponNormal3P; // 0x8
	UAnimationAsset* WeaponProne3P; // 0x10
};

struct FCrowWeaponPartsSideBarrelTableRow {
	FString HelpText; // 0x2f8
};

struct FStringCurve {
	FString DefaultValue; // 0x68
	TArray<FStringCurveKey> Keys; // 0x78
};

struct FMovieSceneWarpCounter {
	TArray<uint32_t> WarpCounts; // 0x0
};

struct FMovieSceneEvaluationField {
	TArray<FMovieSceneFrameRange> Ranges; // 0x0
	TArray<FMovieSceneEvaluationGroup> Groups; // 0x10
	TArray<FMovieSceneEvaluationMetaData> MetaData; // 0x20
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

struct FMaterialInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FCustomPrimitiveData {
	TArray<float> Data; // 0x0
};

struct FTextureFormatSettings {
	TextureCompressionSettings CompressionSettings; // 0x0
	char CompressionNoAlpha : 1; // 0x1
	char CompressionNone : 1; // 0x1
	char CompressionYCoCg : 1; // 0x1
	char SRGB : 1; // 0x1
};

struct FCrowBuildingReflectionData {
	FTransform RelativeTransform; // 0x0
	FVector CaptureOffset; // 0x30
	float InfluenceRadius; // 0x3c
	char SourceType; // 0x40
	float Brightness; // 0x44
};

struct FCrowFixItemTableRow {
	FString HelpText; // 0x8
	ACrowPickupInventory* PickupInventoryClass; // 0x18
	TArray<FCrowFixItemInfo> ItemArray; // 0x20
};

struct FCrowIngameTimeRecord {
	bool bIsAlive; // 0x58
	FDateTime BattleDateTime; // 0x60
	FDateTime AliveDateTime; // 0x68
};

struct FMovieSceneTimeTransform {
	float TimeScale; // 0x0
	FFrameTime Offset; // 0x4
};

struct FAnimNode_CopyBoneDelta {
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

struct FAnimBlueprintFunction {
	FName Name; // 0x0
	FName Group; // 0x8
	int32_t OutputPoseNodeIndex; // 0x10
	TArray<FName> InputPoseNames; // 0x18
	TArray<int32_t> InputPoseNodeIndices; // 0x28
	bool bImplemented; // 0x60
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

struct FCrowMainMedalGroupTableRow {
	FString HelpText; // 0x10
	ECrowMainMedalUIType UIType; // 0x20
	uint32_t RewardIndex; // 0x24
};

struct FCaptureResolution {
	int32_t ResX; // 0x0
	int32_t ResY; // 0x4
};

struct FCustomInput {
	FName InputName; // 0x0
	FExpressionInput Input; // 0x8
};

struct FCrowWorldSplineSegmentMeshInfo {
	TArray<UCrowWorldSplineMeshComponent*> MeshComponents; // 0x0
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

struct FCrowItemRankPointTableRow {
	uint32_t Index; // 0x8
	FString HelpText; // 0x10
	ECrowItemGrade ItemGrade; // 0x20
	uint32_t PointValue; // 0x24
};

struct FTimeStretchCurveMarker {
	float Time[0x3]; // 0x0
	float Alpha; // 0xc
};

struct FLiveLinkInterpolationSettings {
	bool bUseInterpolation; // 0x0
	float InterpolationOffset; // 0x4
};

struct FWheelSetup {
	UVehicleWheel* WheelClass; // 0x0
	FName BoneName; // 0x8
	FVector AdditionalOffset; // 0x10
	bool bDisableSteering; // 0x1c
};

struct FExpressionOutput {
	FName OutputName; // 0x0
};

struct FAdaptorPolygon2Group {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
};

struct FAkMainOutputSettings {
	FString AudioDeviceShareset; // 0x0
	uint32_t DeviceID; // 0x10
	EAkPanningRule PanningRule; // 0x14
	EAkChannelConfigType ChannelConfigType; // 0x18
	uint32_t ChannelMask; // 0x1c
	uint32_t NumberOfChannels; // 0x20
};

struct FMaterialCachedParameterEntry {
	TArray<uint64_t> NameHashes; // 0x0
	TArray<FMaterialParameterInfo> ParameterInfos; // 0x10
	TArray<FGuid> ExpressionGuids; // 0x20
	TArray<bool> Overrides; // 0x30
};

struct FCrowVehicleMovementTankValuePair {
	float Left; // 0x0
	float Right; // 0x4
};

struct FCrowCharacterAimOffsetDepends {
	UAimOffsetBlendSpace* AimOffsetStand; // 0x0
	UAimOffsetBlendSpace* AimOffsetCrouch; // 0x8
	UAimOffsetBlendSpace* AimOffsetProne; // 0x10
	UAimOffsetBlendSpace* AimOffsetStandNonBattle; // 0x18
	UAimOffsetBlendSpace* AimOffsetStandPeekL; // 0x20
	UAimOffsetBlendSpace* AimOffsetStandPeekR; // 0x28
	UAimOffsetBlendSpace* AimOffsetCrouchPeekL; // 0x30
	UAimOffsetBlendSpace* AimOffsetCrouchPeekR; // 0x38
	UAimOffsetBlendSpace* AimOffsetPronePeekL; // 0x40
	UAimOffsetBlendSpace* AimOffsetPronePeekR; // 0x48
};

struct FTextBlockStyle {
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

struct FLiveLinkAnimationFrameData {
	TArray<FTransform> Transforms; // 0xa0
};

struct FCrowTattooInfo {
	float PosU; // 0x0
	float PosV; // 0x4
	float ScaleX; // 0x8
	float ScaleY; // 0xc
	UTexture2D* Image; // 0x10
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

struct FMovieSceneMediaSectionTemplate {
	FMovieSceneMediaSectionParams Params; // 0x20
};

struct FCrowCompositionCStepInfo {
	float TimeSec; // 0x0
	float Speed; // 0x4
};

struct FSoundStateInfo {
	ECrowSoundStateType SoundStateType; // 0x0
	FName StateGroup; // 0x4
	FName StateName; // 0xc
};

struct FNiagaraEventReceiverProperties {
	FName Name; // 0x0
	FName SourceEventGenerator; // 0x8
	FName SourceEmitter; // 0x10
};

struct FLocoCameraSettingsByGait {
	FLocoCameraSettings Idle; // 0x0
	FLocoCameraSettings Walk; // 0x14
	FLocoCameraSettings Run; // 0x28
	FLocoCameraSettings Sprint; // 0x3c
};

struct FMagicLeapHandMesh {
	int32_t Version; // 0x0
	int32_t DataCount; // 0x4
	TArray<FMagicLeapHandMeshBlock> Data; // 0x8
};

struct FAIDataProviderFloatValue {
	float DefaultValue; // 0x30
};

struct FDelegateArray {
	TArray<FDelegate> Delegates; // 0x0
};

struct FMovieSceneEvent {
	FMovieSceneEventPtrs Ptrs; // 0x0
};

struct FCrewInfo {
	uint64_t UserId; // 0x0
	uint64_t SteamId; // 0x8
	FString UserName; // 0x10
	int32_t UserLevel; // 0x20
	FDateTime LastPlayTime; // 0x28
	bool bOnline; // 0x30
	EClanAuthority UserAuthority; // 0x31
	int64_t UserContributionPoint; // 0x38
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

struct FMaterialFunctionInfo {
	FGuid StateId; // 0x0
	UMaterialFunctionInterface* Function; // 0x10
};

struct FBuilderPoly {
	TArray<int32_t> VertexIndices; // 0x0
	int32_t Direction; // 0x10
	FName ItemName; // 0x14
	int32_t PolyFlags; // 0x1c
};

struct FSkyCreatorSkyLightSettings {
	float Intensity; // 0x0
	FLinearColor LightColor; // 0x4
};

struct FAnimNode_CarSteeringHandler {
	FBoneReference SteeringBoneReference; // 0xc8
	FRotator SteeringOriginRotation; // 0xd8
};

struct FHairStrandsParameters {
	EGroomStrandsSize StrandsSize; // 0x0
	float StrandsDensity; // 0x4
	float StrandsSmoothing; // 0x8
	float StrandsThickness; // 0xc
	FRuntimeFloatCurve ThicknessScale; // 0x10
};

struct FCrowChangeRenderClothParts {
	ECrowClothPartsMesh ChangeRenderClothMainType; // 0x0
	ECrowClothPartHeadType ChangeRenderClothHead; // 0x1
	ECrowClothPartGlassesType ChangeRenderClothGlasses; // 0x2
	ECrowClothPartMaskType ChangeRenderClothMask; // 0x3
	ECrowClothPartHairType ChangeRenderClothHair; // 0x4
	ECrowClothPartsFitType FitType; // 0x5
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

struct FCrowInvenBagRow {
	FString HelpText; // 0x168
	FSoftObjectPath Mesh3P; // 0x178
	uint32_t InvenCount; // 0x190
};

struct FCrowLobbyProfileRankRecord {
	int32_t KillCount; // 0x0
	int32_t AssistCount; // 0x4
	int32_t DeathCount; // 0x8
	int32_t InjuredCount; // 0xc
	int64_t Score; // 0x10
	int32_t PlayCount; // 0x18
	int32_t PlayTimeSec; // 0x1c
};

struct FCrowRotorSpinSetup {
	float EngineStartTime; // 0x0
	UCurveFloat* EngineStartRotorCurve; // 0x8
	float ShutDownTime; // 0x10
	UCurveFloat* ShutDownRotorCurve; // 0x18
	TArray<FCrowRotorSpinInfo> RotorSpinInfoList; // 0x20
};

struct FCrowVehicleFxTemplate {
	FFxReplicator_FxTemplate FxTemplate; // 0x0
	FFxReplicator_AudioTemplate AudioTemplate; // 0x28
	FFxReplicator_WwiseAudioTemplate WwiseAudioTemplate; // 0x38
};

struct FNiagaraUserParameterBinding {
	FNiagaraVariable Parameter; // 0x0
};

struct FMovieSceneCameraShakeSectionTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FCustomizedToolMenuNameArray {
	TArray<FName> Names; // 0x0
};

struct FMaterialParameterInfo {
	FName Name; // 0x0
	EMaterialParameterAssociation Association; // 0x8
	int32_t Index; // 0xc
};

struct FKBoxElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float X; // 0x48
	float Y; // 0x4c
	float Z; // 0x50
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

struct FHmdUserProfile {
	FString Name; // 0x0
	FString Gender; // 0x10
	float PlayerHeight; // 0x20
	float EyeHeight; // 0x24
	float IPD; // 0x28
	FVector2D NeckToEyeDistance; // 0x2c
	TArray<FHmdUserProfileField> ExtraFields; // 0x38
};

struct FExposedValueHandler {
	FName BoundFunction; // 0x0
	TArray<FExposedValueCopyRecord> CopyRecords; // 0x8
	UFunction* Function; // 0x18
	TFieldPath<FStructProperty> ValueHandlerNodeProperty; // 0x20
};

struct FPooledCameraShakes {
	TArray<UCameraShakeBase*> PooledShakes; // 0x0
};

struct FRootMotionMovementParams {
	bool bHasRootMotion; // 0x0
	float BlendWeight; // 0x4
	FTransform RootMotionTransform; // 0x10
};

struct FAnimNode_ConvertLocalToComponentSpace {
	FPoseLink LocalPose; // 0x10
};

struct FCrowBuildingEditorSupport {
	TArray<FCrowBuildingEditorMeshAsset> BuildingMeshes; // 0x8
	TArray<ACrowBuildingEditorPartsActor*> BuildingParts; // 0x18
};

struct FIndexedCurve {
	FKeyHandleMap KeyHandlesToIndices; // 0x8
};

struct FComponentKey {
	UObject* OwnerClass; // 0x0
	FName SCSVariableName; // 0x8
	FGuid AssociatedGuid; // 0x10
};

struct FChaosTrailingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
};

struct FCrowVehicleWeaponHandlerAnimSetup {
	char SpringArmId; // 0x0
	FBoneReference BoneToModify; // 0x4
	ECrowVehicleWeaponAxis Axis; // 0x14
};

struct FCrowMeshPaintParameters {
	float BrushRadius; // 0x0
	float BrushFalloffAmount; // 0x4
	float BrushStrength; // 0x8
	FLinearColor BrushColor; // 0xc
	bool bWriteRed; // 0x1c
	bool bWriteGreen; // 0x1d
	bool bWriteBlue; // 0x1e
	bool bWriteAlpha; // 0x1f
};

struct FCrowIngameWeaponRecord {
	uint32_t ExpShareIndex; // 0x60
	char WeaponSubType; // 0x64
};

struct FAudioVolumeSubmixSendSettings {
	EAudioVolumeLocationState ListenerLocationState; // 0x0
	EAudioVolumeLocationState SourceLocationState; // 0x1
	TArray<FSoundSubmixSendInfo> SubmixSends; // 0x8
};

struct FCrowServerRegionInfo {
	bool RandomRegion; // 0x0
	FString CurrentRegionName; // 0x8
	FString FastPingRegionName; // 0x18
	TArray<FCrowServerRegion> ServerRegionArray; // 0x28
};

struct FDestructibleSpecialHierarchyDepths {
	int32_t SupportDepth; // 0x0
	int32_t MinimumFractureDepth; // 0x4
	bool bEnableDebris; // 0x8
	int32_t DebrisDepth; // 0xc
	int32_t EssentialDepth; // 0x10
};

struct FAnimNode_HandIKRetargeting {
	FBoneReference RightHandFK; // 0xc8
	FBoneReference LeftHandFK; // 0xd8
	FBoneReference RightHandIK; // 0xe8
	FBoneReference LeftHandIK; // 0xf8
	TArray<FBoneReference> IKBonesToMove; // 0x108
	float HandFKWeight; // 0x118
};

struct FLiveLinkSubjectPreset {
	FLiveLinkSubjectKey Key; // 0x0
	ULiveLinkRole* Role; // 0x18
	ULiveLinkSubjectSettings* Settings; // 0x20
	ULiveLinkVirtualSubject* VirtualSubject; // 0x28
	bool bEnabled; // 0x30
};

struct FIntegralKey {
	float Time; // 0x0
	int32_t Value; // 0x4
};

struct FAkTriangle {
	uint16_t Point0; // 0x0
	uint16_t Point1; // 0x2
	uint16_t Point2; // 0x4
	uint16_t Surface; // 0x6
};

struct FNiagaraEventGeneratorProperties {
	int32_t MaxEventsPerFrame; // 0x0
	FName ID; // 0x4
	FNiagaraDataSetCompiledData DataSetCompiledData; // 0x10
};

struct FIntervalCountdown {
	float Interval; // 0x0
};

struct FMovieScene3DTransformKeyStruct {
	FVector Location; // 0x8
	FRotator Rotation; // 0x14
	FVector Scale; // 0x20
	FFrameNumber Time; // 0x2c
};

struct FAngularRangeLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
	FBoneReference Bone; // 0x18
};

struct FCrowVehicleInputSetting {
	float InputRaise; // 0x0
	float InputFall; // 0x4
};

struct FCrowVehicleEntityTank {
	FCrowTireAndWheelSetting VirtualWheelSetting; // 0x400
	FCrowLandWheelsTankSetting TankSetting; // 0x510
	float SquareMappedThrottle; // 0x5d0
	float SquareMappedSteering; // 0x5d4
	float CurrentThrottle; // 0x5d8
	float CurrentSteering; // 0x5dc
	FCrowVehicleMovementTankValuePair TorqueRatioTarget; // 0x5e0
	FCrowVehicleMovementTankValuePair TorqueRatioCurrent; // 0x5e8
	FCrowVehicleMovementTankValuePair Torque; // 0x5f0
	FCrowVehicleMovementTankValuePair Brake; // 0x5f8
	float TorqueRatioDiff; // 0x600
	FVector DrivingLinearForce; // 0x604
	FVector DrivingAngularForce; // 0x610
};

struct FAnimNode_LinkedInputPose {
	FName Name; // 0x10
	FName Graph; // 0x18
	FPoseLink InputPose; // 0x20
};

struct FHLODISMComponentDesc {
	UStaticMesh* StaticMesh; // 0x0
	UMaterialInterface* Material; // 0x8
	TArray<FTransform> Instances; // 0x10
};

struct FCrowLandWheelsGearSetting {
	int16_t GearIndex; // 0x0
	float GearUpRatioRPM; // 0x4
	float GearDownRatioRPM; // 0x8
	float GearRatioTorque; // 0xc
};

struct FCrowAccountMailInfo {
	uint32_t TitleIndex; // 0x10
	uint64_t RewardEndTime; // 0x18
};

struct FCrowWorldClientDropSectorIndex {
	uint32_t SectorIndex; // 0x4
};

struct FCrowWeaponFire {
	uint16_t WeaponIndex; // 0x0
	bool IsHitScan; // 0x2
	bool IsCooking; // 0x3
	bool IsUseMuzzleLocation3P; // 0x4
	char RemainCookingTime; // 0x5
	ECrowAmmoFireType AmmoFireType; // 0x6
	ECrowWeaponFireMode FireMode; // 0x7
	TArray<FCrowWeaponFireLocation> LocationArray; // 0x8
};

struct FSkeletalMeshSamplingBuiltData {
	TArray<FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData; // 0x0
	TArray<FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData; // 0x10
};

struct FCrowGamePlayUserPopupInfo {
	ECrowLobbyPartyUserState PartyState; // 0x30
};

struct FCrowWorldActorMeshLOD {
	int8_t LODLevelMin; // 0x0
	int8_t LODLevelMax; // 0x1
	UStaticMesh* MeshLOD; // 0x8
};

struct FDatasmithCameraFilmbackSettingsTemplate {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
};

struct FCrowWeaponVehicleTableRow {
	FString VehicleHelpText; // 0x1218
	FName MuzzleSocketName; // 0x1228
	FName BackblastSocketName; // 0x1230
	FName MuzzleSocketNameDualWiedling; // 0x1238
	FName BackblastSocketNameDualWiedling; // 0x1240
	bool SimultaneousFire; // 0x1248
	FName DaulWiedlingViewPointSocketName; // 0x124c
	float DaulWiedlingViewPointMinDistance; // 0x1254
	float ReboundForce; // 0x1258
	bool UseAimingBarrel; // 0x125c
	float FPBarrelSpeed; // 0x1260
	float FPBarrelLerpSecond; // 0x1264
	float TPBarrelSpeed; // 0x1268
	float TPBarrelLerpSpeed; // 0x126c
	UCurveFloat* BarrelPitchMinCurve; // 0x1270
	USoundBase* BarrelMoveSound; // 0x1278
	UAkAudioEvent* BarrelMoveSound_W; // 0x1280
	UCurveFloat* BarrelMoveLerpSoundCurve; // 0x1288
	UCurveFloat* BarrelMoveSoundCurve; // 0x1290
	FName RootBoneName; // 0x1298
	FName AttachedBoneName; // 0x12a0
	float PreHeating; // 0x12a8
	float OverHeating; // 0x12ac
	float Cooling; // 0x12b0
	float ApproachOverHeating; // 0x12b4
	UAkAudioEvent* PreHeatingSoundStart_W; // 0x12b8
	UAkAudioEvent* PreHeatingSoundEnd_W; // 0x12c0
	FCrowAnimPoseSet CharacterFire; // 0x12c8
	UCurveVector* AimSocketOffsetCurve; // 0x12e0
	UAkAudioEvent* OverHeatingSoundStart_W; // 0x12e8
	UAkAudioEvent* OverHeatingSoundEnd_W; // 0x12f0
	UAkAudioEvent* CoolingSoundStart_W; // 0x12f8
	UAkAudioEvent* CoolingSoundEnd_W; // 0x1300
};

struct FStructSerializerByteArray {
	int32_t Dummy1; // 0x0
	TArray<char> ByteArray; // 0x8
	int32_t Dummy2; // 0x18
	TArray<int8_t> Int8Array; // 0x20
	int32_t Dummy3; // 0x30
};

struct FSlateFontInfo {
	UObject* FontObject; // 0x0
	UObject* FontMaterial; // 0x8
	FFontOutlineSettings OutlineSettings; // 0x10
	FName TypefaceFontName; // 0x40
	int32_t Size; // 0x48
	int32_t LetterSpacing; // 0x4c
};

struct FCrowWorldClientDropClusterIndex {
	uint32_t ClusterIndex; // 0x4
};

struct FSkelMeshMergeUVTransform {
	TArray<FTransform> UVTransforms; // 0x0
};

struct FBlueprintInputAxisDelegateBinding {
	FName InputAxisName; // 0x4
	FName FunctionNameToBind; // 0xc
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

struct FMovieScene3DRotationKeyStruct {
	FRotator Rotation; // 0x8
	FFrameNumber Time; // 0x14
};

struct FComponentOverrideRecord {
	UObject* ComponentClass; // 0x0
	UActorComponent* ComponentTemplate; // 0x8
	FComponentKey ComponentKey; // 0x10
	FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x30
};

struct FMovieScenePrimitiveMaterialTemplate {
	int32_t MaterialIndex; // 0x20
	FMovieSceneObjectPathChannel MaterialChannel; // 0x28
};

struct FCrowWorldDestructionSyncCache {
	char bCacheInitialized : 1; // 0x0
	FVector Origin; // 0x4
	float DamageRadius; // 0x10
	float ShockwaveRadius; // 0x14
	TMap<uint32_t, FCrowWorldDestructionActorItem> SyncCacheActors; // 0x18
};

struct FDrawToRenderTargetContext {
	UTextureRenderTarget2D* RenderTarget; // 0x0
};

struct FNameMapping {
	FName NodeName; // 0x0
	FName BoneName; // 0x8
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

struct FCLSCharacterAdditionalSkydiving {
	FVector2D InputAmount; // 0x0
	float RollAmount; // 0x8
};

struct FInAppPurchaseRestoreInfo2 {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FCrowRotorInputNetValue {
	uint32_t PackedValue1; // 0x0
	uint16_t PackedValue2; // 0x4
};

struct FConstraintDescriptor {
	EConstraintType Type; // 0x0
};

struct FCrowPlayerStateReplicationInfo {
	uint32_t ReplicationNumPerFrame; // 0x0
};

struct FCameraPreviewInfo {
	APawn* PawnClass; // 0x0
	UAnimSequence* AnimSeq; // 0x8
	FVector Location; // 0x10
	FRotator Rotation; // 0x1c
	APawn* PawnInst; // 0x28
};

struct FSocketReference {
	FName SocketName; // 0x30
};

struct FSwarmDebugOptions {
	char bDistributionEnabled : 1; // 0x0
	char bForceContentExport : 1; // 0x0
	char bInitialized : 1; // 0x0
};

struct FStreamingLevelsToConsider {
	TArray<ULevelStreaming*> StreamingLevels; // 0x0
};

struct FCrowVehicleEnginePowerDrop {
	float ActivateDamagePercent; // 0x0
	float DropRate; // 0x4
	float DurationTimeSecond; // 0x8
	float RecoverTimeSecond; // 0xc
	TArray<FFxReplicator_FxTemplate> FxTemplateList; // 0x10
	TArray<FFxReplicator_AudioTemplate> AudioTemplateList; // 0x20
	TArray<FFxReplicator_WwiseAudioTemplate> WwiseAudioTemplateList; // 0x30
	UCrowFxReplicatorComponent* FxReplicator; // 0x40
};

struct FTableColumnHeaderStyle {
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

struct FARObjectUpdatePayload {
	FTransform WorldTransform; // 0x0
};

struct FARPose3D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FTransform> JointTransforms; // 0x28
	TArray<bool> IsJointTracked; // 0x38
	EARJointTransformSpace JointTransformSpace; // 0x48
};

struct FHairGroupsPhysics {
	FHairSolverSettings SolverSettings; // 0x0
	FHairExternalForces ExternalForces; // 0x38
	FHairMaterialConstraints MaterialConstraints; // 0x58
	FHairStrandsParameters StrandsParameters; // 0x230
};

struct FFractureMaterial {
	FVector2D UVScale; // 0x0
	FVector2D UVOffset; // 0x8
	FVector Tangent; // 0x10
	float UAngle; // 0x1c
	int32_t InteriorElementIndex; // 0x20
};

struct FCrowLobbyIdleAnimTableRow {
	EAnimLobbyIdle LobbyIdle; // 0x8
	TMap<ECrowWeaponUIType, UAnimSequenceBase*> AnimSequenceMap; // 0x10
};

struct FCrowExtraParts {
	char PartsType; // 0x0
	TArray<uint32_t> PartsIndex; // 0x8
};

struct FSlateSound {
	UObject* ResourceObject; // 0x0
};

struct FChaosHandlerSet {
	TSet<UObject*> ChaosHandlers; // 0x8
};

struct FAnimNode_BlendSpacePlayer {
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

struct FSourceEffectBitCrusherSettings {
	float CrushedSampleRate; // 0x0
	FSoundModulationDestinationSettings SampleRateModulation; // 0x8
	float CrushedBits; // 0x18
	FSoundModulationDestinationSettings BitModulation; // 0x20
};

struct FLiveLinkTime {
	double WorldTime; // 0x0
	FQualifiedFrameTime SceneTime; // 0x8
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

struct FTTLinearColorTrack {
	UCurveLinearColor* CurveLinearColor; // 0x20
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

struct FTransform {
	FQuat Rotation; // 0x0
	FVector Translation; // 0x10
	FVector Scale3D; // 0x20
};

struct FMyPluginStruct {
	FString TestString; // 0x0
};

struct FGroomBuildSettings {
	bool bOverrideGuides; // 0x0
	float HairToGuideDensity; // 0x4
	EGroomInterpolationQuality InterpolationQuality; // 0x8
	EGroomInterpolationWeight InterpolationDistance; // 0x9
	bool bRandomizeGuide; // 0xa
	bool bUseUniqueGuide; // 0xb
};

struct FCrowEventParam {
	UObject* UObjectParam; // 0x0
};

struct FLocationBoneSocketInfo {
	FName BoneSocketName; // 0x0
	FVector Offset; // 0x8
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

struct FSplineSegmentInfo {
	FVector StartLocation; // 0x0
	FVector StartLeaveTangent; // 0xc
	FVector EndLocation; // 0x18
	FVector EndArriveTangent; // 0x24
};

struct FVOscillator {
	FFOscillator X; // 0x0
	FFOscillator Y; // 0xc
	FFOscillator Z; // 0x18
};

struct FBeamTargetData {
	FName TargetName; // 0x0
	float TargetPercentage; // 0x8
};

struct FWeaponCameraShakeInfo {
	bool IsEnable; // 0x0
	UMatineeCameraShake* CameraShake_FP; // 0x8
	UMatineeCameraShake* CameraShake_TP; // 0x10
};

struct FSoftObjectPath {
	FName AssetPathName; // 0x0
	FString SubPathString; // 0x8
};

struct FHairGroupsLOD {
	TArray<FHairLODSettings> LODs; // 0x0
	float ClusterWorldSize; // 0x10
	float ClusterScreenSizeScale; // 0x14
};

struct FNamedInterfaceDef {
	FName InterfaceName; // 0x0
	FString InterfaceClassName; // 0x8
};

struct FAnimNode_AimLocationGather {
	FPoseLink BasePose; // 0x10
	FBoneReference BoneToFind; // 0x20
};

struct FCrowBombMissionScoreListItemData {
	char LocalTeamID; // 0x0
	char TeamID; // 0x1
	char AttackerTeamID; // 0x2
	FString PlayerNickName; // 0x8
	bool bIsLocalPlayer; // 0x18
	bool bIsDeath; // 0x19
	uint32_t Score; // 0x1c
	char KillCount; // 0x20
	char DeathCount; // 0x21
	char PlantCompositionCCount; // 0x22
	char DefuseCompositionCCount; // 0x23
	bool bIsCompositionCHolder; // 0x24
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

struct FCrowBombMissionTeamScoreData {
	char TeamID; // 0x0
	char AttackerTeamID; // 0x1
	uint32_t TotalRoundCount; // 0x4
	uint32_t WinRoundCount; // 0x8
	uint32_t TotalScore; // 0xc
};

struct FCrowBuildingHISMCKey {
	UCrowBuildingSMC* SMC; // 0x0
	UStaticMeshComponent* DecalReceiver; // 0x8
};

struct FCrowBuildingDynamicPartsDestruction {
	bool NoDestruction; // 0x0
	bool HideWhileBuildingDemolition; // 0x1
	UPhysicalMaterial* DamageCalculationMaterial; // 0x8
	bool UseMeshPivotForVFX; // 0x10
	UParticleSystem* DestructionVFX; // 0x18
	UAkAudioEvent* DestructionSFX; // 0x20
	bool UseDestructibleMesh; // 0x28
	UDestructibleMesh* DestructibleMeshAsset; // 0x30
	float ImpulseMin; // 0x38
	float ImpulseMax; // 0x3c
	bool UseDamagedMesh; // 0x40
	TArray<UStaticMesh*> DamagedMeshes; // 0x48
	float DamagedMeshMassOverride; // 0x58
	float ImpulseMinDamagedMesh; // 0x5c
	float ImpulseMaxDamagedMesh; // 0x60
	float BlockInteractionDuration; // 0x64
	uint32_t DestructionFlags; // 0x68
	float MaxHP; // 0x6c
};

struct FCrowWeaponPartsMagazineTableRow {
	FString HelpText; // 0x2f8
	uint32_t AmmoInClip; // 0x308
	FCLSMagazineAnimation MagazineAnim; // 0x310
	FCLSMagazineAnimation ProneMagazineAnim; // 0x3b0
};

struct FLandscapeProxyMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FNiagaraEmitterScalabilityOverrides {
	TArray<FNiagaraEmitterScalabilityOverride> Overrides; // 0x0
};

struct FEnvNamedValue {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
};

struct FHairGroupsProceduralCards {
	FHairCardsClusterSettings ClusterSettings; // 0x0
	FHairCardsGeometrySettings GeometrySettings; // 0x8
	FHairCardsTextureSettings TextureSettings; // 0x24
	int32_t Version; // 0x34
};

struct FCrowLandWheelsTrackSplineNode {
	int32_t SuspensionIndex; // 0x0
	FVector PositionOffset; // 0x4
};

struct FNiagaraCompileHashVisitorDebugInfo {
	FString Object; // 0x0
	TArray<FString> PropertyKeys; // 0x10
	TArray<FString> PropertyValues; // 0x20
};

struct FCrowWorldReplicationCluster {
	uint32_t ClusterIndex; // 0x4
	FBitFlagArray ActorDestroyedFlags; // 0x8
};

struct FAkSegmentInfo {
	int32_t CurrentPosition; // 0x0
	int32_t PreEntryDuration; // 0x4
	int32_t ActiveDuration; // 0x8
	int32_t PostExitDuration; // 0xc
	int32_t RemainingLookAheadTime; // 0x10
	float BeatDuration; // 0x14
	float BarDuration; // 0x18
	float GridDuration; // 0x1c
	float GridOffset; // 0x20
};

struct FCrowGroupSetTableRow {
	FString HelpText; // 0x8
	TArray<FCrowGroupSetWeight> ItemArray; // 0x18
};

struct FRotationLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
};

struct FFrameRate {
	int32_t Numerator; // 0x0
	int32_t Denominator; // 0x4
};

struct FInstancedStaticMeshLightMapInstanceData {
	FTransform Transform; // 0x0
	TArray<FGuid> MapBuildDataIds; // 0x30
};

struct FRootMotionSourceStatus {
	char Flags; // 0x0
};

struct FGroomConversionSettings {
	FVector Rotation; // 0x0
	FVector Scale; // 0xc
};

struct FSynth1PatchCable {
	float Depth; // 0x0
	ESynth1PatchDestination Destination; // 0x4
};

struct FEnemyActionSelector {
	bool bUseInstancedEnemyActions; // 0x0
	UUPSEnemyAction* InstancedEnemyAction; // 0x8
	UUPSEnemyAction* DAEnemyAction; // 0x10
};

struct FVirtualBone {
	FName SourceBoneName; // 0x0
	FName TargetBoneName; // 0x8
	FName VirtualBoneName; // 0x10
};

struct FPurchaseInfo {
	FString Identifier; // 0x0
	FString DisplayName; // 0x10
	FString DisplayDescription; // 0x20
	FString DisplayPrice; // 0x30
};

struct FMovieScenePropertySectionTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
};

struct FCLSCharacterAnimInstanceProxy {
	UCLSCharacterAnimInstance* AnimInstance; // 0x760
};

struct FCrowLandWheelsGripForce {
	float SuspensionMax; // 0x0
	FRuntimeFloatCurve GripForceBySpeed; // 0x8
};

struct FMagicLeapSharedWorldAlignmentTransforms {
	TArray<FTransform> AlignmentTransforms; // 0x0
};

struct FMovieSceneCameraAnimSectionTemplate {
	FMovieSceneCameraAnimSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FAnimationActiveTransitionEntry {
	UBlendProfile* BlendProfile; // 0xb8
};

struct FDestructibleChunkParameters {
	bool bIsSupportChunk; // 0x0
	bool bDoNotFracture; // 0x1
	bool bDoNotDamage; // 0x2
	bool bDoNotCrumble; // 0x3
};

struct FCrowWorldSoundSetting {
	float OcclusionRefreshInterval; // 0x0
};

struct FCrowBuildingEditorPartsData {
	ACrowBuildingEditorPartsActor* PartsAsset; // 0x0
	FCrowBuildingEditorMeshAsset MeshAsset; // 0x8
	FTransform RelativeTransform; // 0x20
	TArray<FCrowBuildingEditorMeshAsset> PartsMeshOverrides; // 0x50
	TArray<FCrowBuildingEditorMeshAsset> SubMeshOverrides; // 0x60
};

struct FCharacterAnimRow {
	UAnimMontage* AnimMesh3P; // 0x8
	UAnimMontage* AnimMesh1PLowBody; // 0x10
	UAnimMontage* AnimMesh1PArm; // 0x18
	USoundCue* SoundFx; // 0x20
	char bIsBeginRagdoll; // 0x28
	float RagdollBlendDuration; // 0x2c
};

struct FRigidBodyContactInfo {
	FVector ContactPosition; // 0x0
	FVector ContactNormal; // 0xc
	float ContactPenetration; // 0x18
	UPhysicalMaterial* PhysMaterial[0x2]; // 0x20
};

struct FCrowCharacterLookLimitStance {
	FCrowCharacterLookLimit Stand; // 0x0
	FCrowCharacterLookLimit Crouch; // 0x18
	FCrowCharacterLookLimit Prone; // 0x30
	FCrowCharacterLookLimit Dying; // 0x48
	FCrowCharacterLookLimit Vault; // 0x60
	FCrowCharacterLookLimit Ladder; // 0x78
	FCrowCharacterLookLimit LookAround; // 0x90
	float InterpSpeed; // 0xa8
};

struct FCrowMainMedalInfos {
	TArray<FCrowMainMedalInfo> Array; // 0x0
};

struct FCrowResultTopPlayerInfo {
	FString NickName; // 0x0
	char CharacterIndex; // 0x10
	char TeamID; // 0x11
	char DefaultFaceIndex; // 0x12
	char DefaultHairIndex; // 0x13
	char DefaultHairColorIndex; // 0x14
	char DefaultBeardIndex; // 0x15
	char DefaultBeardColorIndex; // 0x16
	char DefaultEyeColorIndex; // 0x17
	TArray<FCrowClothItemData> DefaultClothesList; // 0x18
	TArray<uint32_t> DefaultTattooIndexList; // 0x28
	FCrowWeaponData DefaultWeaponData; // 0x38
	uint32_t VictoryAniIndex; // 0x1a0
};

struct FCrowBloodPostProcessEffect {
	UMaterialInterface* HumanBlood; // 0x0
	UMaterialInterface* ZombieBlood; // 0x8
	UMaterialInterface* ZombieBlur; // 0x10
	int32_t CachedHumanBloodIdx; // 0x18
	int32_t CachedZombieBloodIdx; // 0x1c
	int32_t CachedZombieBlurIdx; // 0x20
	FString CachedHumanBloodName; // 0x28
	FString CachedZombieBloodName; // 0x38
	FString CachedZombieBlurName; // 0x48
};

struct FCrowRotorAnimInstanceProxy {
	TArray<FRotorProxyData> RotorProxyDatas; // 0x760
};

struct FCrowScopeEffect {
	UWorld* World; // 0x0
	ACrowGameStateBase* GameState; // 0x8
	TWeakObjectPtr<ACrowPlayerControllerBase> PlayerController; // 0x10
	TWeakObjectPtr<ACrowPlayerStateBase> PlayerState; // 0x18
	TMap<ACrowCharacterPawn*, FCrowScopeEffectInfo> EffectInfoMap; // 0x20
};

struct FSubmixEffectSubmixEQSettings {
	TArray<FSubmixEffectEQBand> EQBands; // 0x0
};

struct FCrowMainMedalGroupInfo {
	uint32_t Index; // 0x0
	uint32_t RewardIndex; // 0x4
	ECrowMainMedalUIType UIType; // 0x8
	char RewardFlag; // 0x9
	uint32_t CompleteCount; // 0xc
	uint32_t TotalCompleteCount; // 0x10
};

struct FWeaponAnimSet {
	FWeaponActorAnim Stand; // 0x0
	FWeaponActorAnim Crouch; // 0x18
	FWeaponActorAnim Prostrate; // 0x30
};

struct FCrowWorldDestructionMeshData {
	UStaticMesh* StaticMesh; // 0x0
	TArray<UMaterialInterface*> MaterialOverrides; // 0x8
	FName CollisionProfileName; // 0x18
};

struct FVehicleEffectSetup {
	float BodySpeedMax; // 0x0
};

struct FBakedFloatCustomAttribute {
	FName AttributeName; // 0x0
	FSimpleCurve FloatCurve; // 0x8
};

struct FGuardianTestResult {
	bool IsTriggering; // 0x0
	ETrackedDeviceType DeviceType; // 0x1
	float ClosestDistance; // 0x4
	FVector ClosestPoint; // 0x8
	FVector ClosestPointNormal; // 0x14
};

struct FCrowVehicleWarning {
	UCanvasPanel* Root; // 0x0
	bool IsActivate; // 0x8
	int32_t CurrentStep; // 0xc
	float OnOffInterval; // 0x10
	float OnOffTime; // 0x14
	UAudioComponent* WarningAudio; // 0x18
};

struct FCrowPartScopeModelInfo {
	FSoftObjectPath Mesh1P; // 0x0
	ACrowWeaponPartsActor* MeshClass1P; // 0x18
	UAnimInstance* AnimClass1P; // 0x20
	TArray<UMaterialInterface*> Materials1P; // 0x28
	FSoftObjectPath Mesh1P_Front; // 0x38
	ACrowWeaponPartsActor* MeshClass1P_Front; // 0x50
	UAnimInstance* AnimClass1P_Front; // 0x58
	TArray<UMaterialInterface*> Materials1P_Front; // 0x60
	FSoftObjectPath Mesh3P; // 0x70
	ACrowWeaponPartsActor* MeshClass3P; // 0x88
	UAnimInstance* AnimClass3P; // 0x90
	TArray<UMaterialInterface*> Materials3P; // 0x98
	FSoftObjectPath Mesh3P_Front; // 0xa8
	ACrowWeaponPartsActor* MeshClass3P_Front; // 0xc0
	UAnimInstance* AnimClass3P_Front; // 0xc8
	TArray<UMaterialInterface*> Materials3P_Front; // 0xd0
};

struct FCrowWeaponPartsUnlockTableRow {
	int32_t WeaponIndex; // 0x8
	TArray<FCrowUnLockWeaponPartListTable> UnlockWeaponParts; // 0x10
};

struct FCrowCountingLog {
	TMap<FString, int32_t> CachedCounts; // 0x0
};

struct FCrowBuildingVisualizer {
	ACrowBuildingActor* BuildingActor; // 0x0
	UCrowBuildingModularBuilder* ModularBuilder; // 0x8
	TWeakObjectPtr<ACrowWorldSyncHubActor> SyncHubActor; // 0x10
	TArray<UCrowBuildingSMC*> EditorSMCList; // 0x18
	TWeakObjectPtr<UStaticMeshComponent> LODBody; // 0x28
	TWeakObjectPtr<UStaticMeshComponent> LODExtra; // 0x30
	int32_t CurrentLODLevel; // 0x38
	ECrowBuildingLODState LODState; // 0x3c
	TArray<FBitArrayUint32> LODShowFlags; // 0x40
	FCrowBuildingEditorPreview PreviewSetting; // 0x50
	char IsInitialized : 1; // 0x53
	char IsGameWorld : 1; // 0x53
	char IsGameShowingLODBody : 1; // 0x53
	char IsGameShowingLODExtra : 1; // 0x53
	char IsEditorShowingBodyCandidates : 1; // 0x53
	char IsEditorShowingExtraCandidates : 1; // 0x53
};

struct FAIPredictionEvent {
	AActor* Requestor; // 0x0
	AActor* PredictedActor; // 0x8
};

struct FWeaponActorAnim {
	FName FCharacterAnimRowKey; // 0x0
	UAnimMontage* Pawn1P; // 0x8
	UAnimMontage* Pawn3P; // 0x10
};

struct FCrowWeaponPartsPrimarySightTableRow {
	FString HelpText; // 0x2f8
	float WeaponModelAimFOV; // 0x308
	UCrowWeaponZoomWidget* ZoomWidgetClass; // 0x310
	ECrowScopeSightRate ScopeSightRate; // 0x318
	float AimFOV; // 0x31c
	float AimTime; // 0x320
	float AimZoomTime; // 0x324
	UCurveFloat* AimCurveX; // 0x328
	UCurveFloat* AimCurveY; // 0x330
	UAkAudioEvent* AimSound_W; // 0x338
	float AimModelChangeDelay; // 0x340
	bool HideBarrelWhenAim; // 0x344
	FCrowScopeEffectTableData ScopeEffect; // 0x348
	bool UsePostProcess; // 0x378
	FPostProcessSettings PostProcessSettings; // 0x380
	bool UseDOF; // 0x8d0
	TMap<FString, FCrowPartScopeModelInfo> ScopeModels; // 0x8d8
	TMap<FString, FCrowPartAimScopeModelInfo> ScopeAimModels; // 0x928
	bool UseZeroing; // 0x978
	FCrowPartModelInfo TempResultInfo; // 0x980
	FCrowPartScopeModelInfo DummyPartsInfo; // 0xa08
	FCrowPartAimScopeModelInfo DummyAimPartsInfo; // 0xae8
};

struct FNiagaraDeviceProfileStateEntry {
	FName ProfileName; // 0x0
	uint32_t QualityLevelMask; // 0x8
	uint32_t SetQualityLevelMask; // 0xc
};

struct FMagicLeapSharedWorldPinData {
	FGuid PinId; // 0x0
	FMagicLeapARPinState PinState; // 0x10
};

struct FCrowWeaponPartSkinTable {
	int32_t WeaponPartsIndex; // 0x0
	FString HelpText; // 0x8
	TMap<FName, UMaterialInterface*> WeaponPartsSkin_1P; // 0x18
	TMap<FName, UMaterialInterface*> WeaponPartsSkinFront_1P; // 0x68
	TMap<FName, UMaterialInterface*> WeaponPartsSkin_3P; // 0xb8
	TMap<FName, UMaterialInterface*> WeaponPartsSkinFront_3P; // 0x108
};

struct FCrowWorldSplineDeformTableRow {
	UStaticMesh* StaticMesh; // 0x8
	float DeformWidth; // 0x10
	float SideFalloffWidth; // 0x14
	float OnesideFalloffWidth; // 0x18
	float HeightOffset; // 0x1c
};

struct FCrowWorldLODState {
	ACrowWorldActor* WorldActor; // 0x28
	UCrowWorldAnimator* WorldAnimator; // 0x30
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

struct FCrowEmotionSlotInfo {
	uint32_t Index; // 0x0
	UPaperSprite* Image; // 0x8
	ECrowItemGrade ItemGrade; // 0x10
	uint32_t ShopIndex; // 0x14
};

struct FEditableTextBoxStyle {
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

struct FUserActivity {
	FString ActionName; // 0x0
};

struct FVehicleSetup {
	USkeletalMeshComponent* Mesh; // 0x0
	USceneComponent* CameraRoot; // 0x8
};

struct FCrowCharacterAppearance {
	char FaceIndex; // 0x0
	char EyeColorIndex; // 0x1
	char HairIndex; // 0x2
	char HairColorIndex; // 0x3
	char BeardIndex; // 0x4
	char BeardColorIndex; // 0x5
};

struct FMagicLeapARPinState {
	float Confidence; // 0x0
	float ValidRadius; // 0x4
	float RotationError; // 0x8
	float TranslationError; // 0xc
	EMagicLeapARPinType PinType; // 0x10
};

struct FCLSRotateInPlaceAsset {
	UAnimSequenceBase* Animation; // 0x0
	FName SlotName; // 0x8
	float SlowTurnRate; // 0x10
	float FastTurnRate; // 0x14
	float SlowPlayRate; // 0x18
	float FastPlayRate; // 0x1c
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

struct FAnimNode_PoseSnapshot {
	FName SnapshotName; // 0x10
	FPoseSnapshot Snapshot; // 0x18
	ESnapshotSourceMode Mode; // 0x50
};

struct FMovieSceneEventSectionTemplate {
	FMovieSceneEventSectionData EventData; // 0x20
	char bFireEventsWhenForwards : 1; // 0xa8
	char bFireEventsWhenBackwards : 1; // 0xa8
};

struct FChunkInfoData {
	FGuid Guid; // 0x0
	uint64_t Hash; // 0x10
	FSHAHashData ShaHash; // 0x18
	int64_t FileSize; // 0x30
	char GroupNumber; // 0x38
};

struct FSteamVRFingerSplays {
	float Thumb_Index; // 0x0
	float Index_Middle; // 0x4
	float Middle_Ring; // 0x8
	float Ring_Pinky; // 0xc
};

struct FCrowAIFireTargetPart {
	ECrowCharacterFireTargetPart TargetPart; // 0x0
	float TargetPartRadius; // 0x4
	uint32_t RandomRate; // 0x8
};

struct FCrowWeaponPartsBarrelTableRow {
	FString HelpText; // 0x2f8
};

struct FAnimNode_LookAt {
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

struct FDynamicTextureInstance {
	UTexture2D* Texture; // 0x28
	bool bAttached; // 0x30
	float OriginalRadius; // 0x34
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

struct FMovieSceneTrackEvaluationField {
	TArray<FMovieSceneTrackEvaluationFieldEntry> Entries; // 0x0
};

struct FCrowBoatsFloatingVolumeSetup {
	FName BodySocketName; // 0x0
	float Mass; // 0x8
	float Radius; // 0xc
	float MinWaterDepth; // 0x10
	float BuoyancyDensity; // 0x14
	float BuoyancyMultiplyMaxSpeed; // 0x18
	FVector IdleOffset; // 0x1c
	FVector FullSpeedOffset; // 0x28
	float MaxOffsetSpeed; // 0x34
};

struct FCrowEmotionTableRow {
	FString HelpText; // 0x168
	FString NameKey; // 0x178
	FString DescriptionKey; // 0x188
	UAnimMontage* AnimMontage; // 0x198
	UPaperSprite* Icon; // 0x1a0
};

struct FCrowGameModeSettingsTableRow {
	ECrowGameMode GameMode; // 0x8
	float ItemDeleteTime; // 0xc
};

struct FCrowStartCameraWorkInfo {
	USplineComponent* Spline; // 0x0
	float SplineLength; // 0x8
	float TotalTime; // 0xc
	float ElapsedTime; // 0x10
};

struct FCrowTattooTableRow {
	FString HelpText; // 0x168
	ECrowTattooType Type; // 0x178
	FString NameKey; // 0x180
	FString DescriptionKey; // 0x190
	UPaperSprite* Icon; // 0x1a0
	FCrowTattooInfo Tattoo; // 0x1a8
	FCrowTattooInfo TattooSub; // 0x1c0
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

struct FFxReplicator_FxTemplate {
	FName AttachSocketName; // 0x0
	UParticleSystem* FX; // 0x8
	FVector Location; // 0x10
	FRotator Rotation; // 0x1c
};

struct FAnimNode_BlendBoneByChannel {
	FPoseLink A; // 0x10
	FPoseLink B; // 0x20
	TArray<FBlendBoneByChannelEntry> BoneDefinitions; // 0x30
	float Alpha; // 0x50
	FInputScaleBias AlphaScaleBias; // 0x58
	EBoneControlSpace TransformsSpace; // 0x60
};

struct FAnimNode_PoseByName {
	FName PoseName; // 0x80
	float PoseWeight; // 0x88
};

struct FLandmassBrushEffectsList {
	FBrushEffectBlurring Blurring; // 0x0
	FBrushEffectCurlNoise CurlNoise; // 0x8
	FBrushEffectDisplacement Displacement; // 0x18
	FBrushEffectSmoothBlending SmoothBlending; // 0x40
	FBrushEffectTerracing Terracing; // 0x48
};

struct FCrowScopeEffectTableData {
	float MaxDistance; // 0x0
	float MaxAngle; // 0x4
	float MaxCharacterScale; // 0x8
	float SizeMin; // 0xc
	float SizeMax; // 0x10
	FSoftObjectPath Effect; // 0x18
};

struct FNamedFloat {
	float Value; // 0x0
	FName Name; // 0x4
};

struct FCrowCloudScapeParamDynamic {
	float CloudDensity; // 0x0
	FVector CloudScale; // 0x4
};

struct FChaosBreakingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Mass; // 0x18
};

struct FTTTrackBase {
	FName TrackName; // 0x8
	bool bIsExternalCurve; // 0x10
};

struct FDatasmithStaticParameterSetTemplate {
	TMap<FName, bool> StaticSwitchParameters; // 0x0
};

struct FMovieSceneFloatValueSerializationHelper {
	float Value; // 0x0
	ERichCurveInterpMode InterpMode; // 0x4
	ERichCurveTangentMode TangentMode; // 0x5
	FMovieSceneTangentDataSerializationHelper Tangent; // 0x8
};

struct FCrowWorldDestructionFxAttached {
	TArray<FName> AttachSocketNames; // 0x0
	UFXSystemAsset* FxAttachToSocket; // 0x10
	bool StopEmitterAfterHitGround; // 0x18
};

struct FAnimNode_LinkedAnimLayer {
	UAnimLayerInterface* Interface; // 0xa0
	FName Layer; // 0xa8
};

struct FMovieSceneTrackLabels {
	TArray<FString> Strings; // 0x0
};

struct FCrowWorldTriggerCollisionSetting {
	FName CollisionName_Body; // 0x0
	FName CollisionName_Activator; // 0x8
	FName CollisionName_Checker; // 0x10
	FName CollisionName_Trace; // 0x18
};

struct FImageWriteOptions {
	EDesiredImageFormat Format; // 0x0
	FDelegate OnComplete; // 0x4
	int32_t CompressionQuality; // 0x14
	bool bOverwriteFile; // 0x18
	bool bAsync; // 0x19
};

struct FAssetBundleEntry {
	FPrimaryAssetId BundleScope; // 0x0
	FName BundleName; // 0x10
	TArray<FSoftObjectPath> BundleAssets; // 0x18
};

struct FNamedVector {
	FVector Value; // 0x0
	FName Name; // 0xc
};

struct FXRDeviceId {
	FName SystemName; // 0x0
	int32_t DeviceID; // 0x8
};

struct FZeroingInfo {
	int32_t Level; // 0x0
	float Distance; // 0x4
	float Pitch; // 0x8
};

struct FCrowEnvOverlapInfo {
	TWeakObjectPtr<AActor> TargetActor; // 0x0
	FDateTime BeginTime; // 0x8
	FTransform BeginActorTM; // 0x10
	FVector StartLocation; // 0x40
	FVector LastLocation; // 0x4c
	FRotator StartRotation; // 0x58
	FRotator LastRotation; // 0x64
	float MovingTime; // 0x70
	float RotationTime; // 0x74
	float ElapsedOverlapTime; // 0x78
	float MoveVelocity; // 0x7c
	float AngularVelocity; // 0x80
	bool bIsMoving; // 0x84
	bool bIsRotate; // 0x85
	UAkComponent* AkComponent; // 0x88
};

struct FCrowVehicleGroup {
	uint32_t MaxSpawnCount; // 0x0
	float SpawnDelay; // 0x4
	uint32_t SpawnLimit; // 0x8
	TArray<ACrowVehicleRandomSpawner*> SpawnerArray; // 0x10
};

struct FSourceEffectMidSideSpreaderSettings {
	float SpreadAmount; // 0x0
	EStereoChannelMode InputMode; // 0x4
	EStereoChannelMode OutputMode; // 0x5
	bool bEqualPower; // 0x6
};

struct FChaosDebugSubstepControl {
	bool bPause; // 0x0
	bool bSubstep; // 0x1
	bool bStep; // 0x2
};

struct FCrowCharacterHUDSetting {
	float VisibleMaxDistance; // 0x0
	float UnscaledDistance; // 0x4
	float ScaledDistanceMax; // 0x8
	float FullyOpaqueDistance; // 0xc
	float ComputeOpacityDistanceMax; // 0x10
	float ScaleMin; // 0x14
	float ScaleMax; // 0x18
	float OpacityMin; // 0x1c
	float OpacityMax; // 0x20
};

struct FPassengerSeatData {
	FName SeatSoketName; // 0x0
	FName ExitSocketName; // 0x8
	bool HiddenPassenger; // 0x10
	bool HiddenPassengerWeapon; // 0x11
	bool UseReadyToFire; // 0x12
	bool ForcePassenger; // 0x13
	UCrowPassengerInput* PassengerInputClass; // 0x18
	int32_t InputPriority; // 0x20
	bool BlockInput; // 0x24
	UCrowVehiclePreHUDBase* PassengerPreHUDClass; // 0x28
	UCrowVehicleHUDBase* PassengerHUDClass; // 0x30
	TArray<int32_t> WeaponItems; // 0x38
	int32_t SpecialWeaponItem; // 0x48
	char SpringArmId; // 0x4c
	bool SyncViewPointSwitch; // 0x4d
	FVector2D FPPitchMinMax; // 0x50
	FVector2D FPYawMinMax; // 0x58
	FVector2D TPPitchMinMax; // 0x60
	FVector2D TPYawMinMax; // 0x68
	FVector2D FPFirePitchMinMax; // 0x70
	FVector2D FPFireYawMinMax; // 0x78
	FName CharacterFPArmSocketName; // 0x80
	bool IsCanChangeCameraMode; // 0x88
	ECrowCameraMode FixedCameraMode; // 0x89
	bool EnableBoard; // 0x8a
	FPassengerSeatLeanAmount LeanAmountMultiply; // 0x8c
	FName BreakBoneWhenAiming; // 0x98
	bool bHiddenBackpack; // 0xa0
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

struct FCrowVehiclePoolSuspension {
	int32_t CountPerGroup; // 0x0
	int32_t MaxElementIndex; // 0x4
	TArray<FCrowLandWheelsSimSuspension> PoolArray; // 0x8
	TArray<int32_t> RecycleIndexes; // 0x18
};

struct FTwistConstraint {
	float TwistLimitDegrees; // 0x14
	EAngularConstraintMotion TwistMotion; // 0x18
};

struct FSteamVRFingerCurls {
	float Thumb; // 0x0
	float Index; // 0x4
	float Middle; // 0x8
	float Ring; // 0xc
	float Pinky; // 0x10
};

struct FVehicleGearData {
	float Ratio; // 0x0
	float DownRatio; // 0x4
	float UpRatio; // 0x8
};

struct FCLSMovementSettingsSwim {
	FCLSMovementSettings Settings; // 0x0
	float DiveAcceleration; // 0x20
	float BuoyancySurface; // 0x24
	float BuoyancyUnderwater; // 0x28
	float DiveImpactDelayTime; // 0x2c
	float DiveImpactBuoyancy; // 0x30
	float DiveImpactDelayDecel; // 0x34
	float DiveImpactSpeedXY; // 0x38
	float DiveImpactSpeedZ; // 0x3c
	float CrouchLimitDepth; // 0x40
	float ProneLimitDepth; // 0x44
};

struct FVehicleEvent {
	EVehicleEvent StartEventID; // 0x0
	bool IsEndWithAnyEvent; // 0x4
	TArray<EVehicleEvent> EndEventList; // 0x8
	TArray<EVehicleEvent> IgnoreEndEventList; // 0x18
	TArray<FName> HideBoneNameList; // 0x28
	TArray<FFxReplicator_FxTemplate> FxTemplateList; // 0x38
	TArray<FFxReplicator_AudioTemplate> AudioTemplateList; // 0x48
	TArray<FFxReplicator_WwiseAudioTemplate> WwiseAudioTemplateList; // 0x58
	EVehicleEvent PassOverWwiseAudioEventID; // 0x68
	bool IsStartEvent; // 0x6c
	UCrowFxReplicatorComponent* FxReplicator; // 0x70
};

struct FRBFEntry {
	TArray<float> Values; // 0x0
};

struct FCrowVirtualISMCInstance {
	int32_t RealIndex; // 0x0
	char IsValid : 1; // 0x4
	FTransform Transform; // 0x10
};

struct FMagicLeapMeshBlockInfo {
	FGuid BlockID; // 0x0
	FVector BlockPosition; // 0x10
	FRotator BlockOrientation; // 0x1c
	FVector BlockDimensions; // 0x28
	FTimespan Timestamp; // 0x38
	EMagicLeapMeshState BlockState; // 0x40
};

struct FEulerTransform {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FVector Scale; // 0x18
};

struct FLevelStreamingStatus {
	FName PackageName; // 0x0
	char bShouldBeLoaded : 1; // 0x8
	char bShouldBeVisible : 1; // 0x8
	uint32_t LODIndex; // 0xc
};

struct FCrowDecalInfo {
	UMaterialInterface* Material; // 0x0
	float LifeSpan; // 0x8
	float ScaleMin; // 0xc
	float ScaleMax; // 0x10
	float RotateMin; // 0x14
	float RotateMax; // 0x18
	float FadeScreenSize; // 0x1c
	uint32_t RandomCount; // 0x20
	UCurveFloat* FadeOutIn; // 0x28
	UCurveFloat* FadeOutCurve; // 0x30
	UCurveFloat* EmissiveInCurve; // 0x38
	UCurveFloat* EmissiveOutCurve; // 0x40
	float RelativeScaleX; // 0x48
};

struct FProgressBarStyle {
	FSlateBrush BackgroundImage; // 0x8
	FSlateBrush FillImage; // 0x90
	FSlateBrush MarqueeImage; // 0x118
};

struct FMovieSceneNiagaraIntegerParameterSectionTemplate {
	FMovieSceneIntegerChannel IntegerChannel; // 0x40
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

struct FCrowLandWheelsTankSetting {
	float ThrottleSpeed; // 0x0
	float SteeringSpeed; // 0x4
	float FrictionYaw; // 0x8
	float SteeringYawMultply; // 0xc
	float StandingRotationThrottle; // 0x10
	FRuntimeFloatCurve SteeringTorqueRatio; // 0x18
	UStaticMesh* TrackMeshAsset; // 0xa0
	float TrackThickness; // 0xa8
	float TrackSingleLength; // 0xac
	float TrackLeftLocalY; // 0xb0
	float TrackRightLocalY; // 0xb4
	bool ShowTrackDebug; // 0xb8
};

struct FLiveLinkBaseStaticData {
	TArray<FName> PropertyNames; // 0x0
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

struct FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; // 0x0
	char bExecuteWhenPaused : 1; // 0x0
	char bOverrideParentBinding : 1; // 0x0
};

struct FCrowWorldClientClusterActorKey {
	uint32_t SectorIndex; // 0x0
	int32_t ActorLoopIndex; // 0x4
};

struct FHeightmapData {
	UTexture2D* Texture; // 0x0
};

struct FBuildPromotionOpenAssetSettings {
	FFilePath BlueprintAsset; // 0x0
	FFilePath MaterialAsset; // 0x10
	FFilePath ParticleSystemAsset; // 0x20
	FFilePath SkeletalMeshAsset; // 0x30
	FFilePath StaticMeshAsset; // 0x40
	FFilePath TextureAsset; // 0x50
};

struct FInterpLookupPoint {
	FName GroupName; // 0x0
	float Time; // 0x8
};

struct FLandscapeSplineConnection {
	ULandscapeSplineSegment* Segment; // 0x0
	char End : 1; // 0x8
};

struct FCrowWorldMeshLOD {
	int8_t LODLevelMin; // 0x0
	int8_t LODLevelMax; // 0x1
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

struct FEngineServiceExecuteCommand {
	FString Command; // 0x0
	FString UserName; // 0x10
};

struct FReverbSettings {
	bool bApplyReverb; // 0x0
	UReverbEffect* ReverbEffect; // 0x8
	USoundEffectSubmixPreset* ReverbPluginEffect; // 0x10
	float Volume; // 0x18
	float FadeTime; // 0x1c
};

struct FCrowWorldSplineTraceData {
	ACrowWorldSpline* SplineActor; // 0x0
	FVector position; // 0x8
	float Distance; // 0x14
	uint16_t LandscapeScaledHeight; // 0x18
};

struct FPrecomputedSkyLightInstanceData {
	FGuid LightGuid; // 0xb8
	float AverageBrightness; // 0xc8
};

struct FGroomHairGroupPreview {
	int32_t GroupID; // 0x0
	int32_t CurveCount; // 0x4
	int32_t GuideCount; // 0x8
	FHairGroupsInterpolation InterpolationSettings; // 0xc
};

struct FCrowBuildingPartsPropertyCache {
	TMap<UStaticMesh*, int32_t> StaticMeshCountMap; // 0x0
	TMap<UStaticMesh*, char> StaticMeshCaches; // 0x50
	TMap<UObject*, char> PartsActorCaches; // 0xa0
};

struct FActorSequenceObjectReference {
	EActorSequenceObjectReferenceType Type; // 0x0
	FGuid ActorId; // 0x4
	FString PathToComponent; // 0x18
};

struct FMovieSceneVectorPropertySectionTemplate {
	FMovieSceneFloatChannel ComponentCurves[0x4]; // 0x38
	int32_t NumChannelsUsed; // 0x2b8
	EMovieSceneBlendType BlendType; // 0x2bc
};

struct FWwiseEventPlayingInfo {
	int32_t EventPlayingID; // 0x0
	UAkComponent* AkPlayingComponent; // 0x8
	bool bIsCheckViewToggle; // 0x10
	bool bIsFirstPlayerOnBoardingFPEvent; // 0x11
	UAkAudioEvent* FPEvent; // 0x18
	UAkAudioEvent* TPEvent; // 0x20
	UAkAudioEvent* FPEndEvent; // 0x28
	UAkAudioEvent* TPEndEvent; // 0x30
};

struct FCLSCharacterStates {
	ECLSMovementMode CurrentMovementMode; // 0x0
	ECLSMovementMode PrevMovementMode; // 0x1
	ECLSMovementAction MovementAction; // 0x2
	ECLSWeaponAction WeaponAction; // 0x3
	ECLSCommonAction CommonAction; // 0x4
	ECLSRotationMode RotationMode; // 0x5
	ECLSGait ActualGait; // 0x6
	ECLSStance ActualStance; // 0x7
	ECLSBattleStance BattleStance; // 0x8
	ECLSViewMode ViewMode; // 0x9
	ECLSOverlayState OverlayState; // 0xa
	ECLSPeekState PeekState; // 0xb
	ECLSLadderState LadderState; // 0xc
};

struct FCrowWorldLightProbeGridKey {
	int32_t X; // 0x0
	int32_t Y; // 0x4
};

struct FCrowDOFSetting {
	float OriginalScreenPercentage; // 0x0
	FPostProcessSettings OriginalSetting; // 0x10
	FCrowDOFProperty DOFProperty; // 0x560
	UCameraComponent* DOFCamera; // 0x570
};

struct FMovieSceneExpansionState {
	bool bExpanded; // 0x0
};

struct FAnimBlueprintFunctionData {
	TFieldPath<FStructProperty> OutputPoseNodeProperty; // 0x0
	TArray<TFieldPath<FStructProperty>> InputPoseNodeProperties; // 0x20
	TArray<TFieldPath<FProperty>> InputProperties; // 0x30
};

struct FCrowMultiKillInfo {
	ACrowPlayerStateBase* Attacker; // 0x0
	ECrowDamageCauser DamageCauser; // 0x8
	ECrowItemType ItemType; // 0x9
	uint32_t WeaponIndex; // 0xc
	char KillCount; // 0x10
};

struct FNodeHierarchyData {
	TArray<FNodeObject> Nodes; // 0x0
	TArray<FTransform> Transforms; // 0x10
	TMap<FName, int32_t> NodeNameToIndexMapping; // 0x20
};

struct FFastArraySerializerItem {
	int32_t ReplicationID; // 0x0
	int32_t ReplicationKey; // 0x4
	int32_t MostRecentArrayReplicationKey; // 0x8
};

struct FCrowScoreInfoBombMission {
	char TeamID; // 0x0
	uint32_t Score; // 0x4
	char PlantCompositionCCount; // 0x8
	char DefuseCompositionCCount; // 0x9
};

struct FCrowGroupItemInfo {
	ECrowItemType ItemType; // 0x0
	uint32_t ItemIndex; // 0x4
	int32_t Count; // 0x8
};

struct FSkeletalMeshSamplingRegionBoneFilter {
	FName BoneName; // 0x0
	char bIncludeOrExclude : 1; // 0x8
	char bApplyToChildren : 1; // 0x8
};

struct FCrowLandWheelsSqueezeDamage {
	FHitResult HitResult; // 0x0
	float Damage; // 0x8c
};

struct FPlayerMuteList {
	bool bHasVoiceHandshakeCompleted; // 0x30
	int32_t VoiceChannelIdx; // 0x34
};

struct FCrowInputStackInfo {
	UObject* Object; // 0x0
};

struct FCrowWorldLODData {
	TArray<FBitFlagArray> LayoutItemShowFlags; // 0x0
	TArray<FBitFlagArray> MeshLODShowFlags; // 0x10
};

struct FCrowIngameItemRecord {
	uint16_t Index; // 0x58
};

struct FBlendParameter {
	FString DisplayName; // 0x0
	float Min; // 0x10
	float Max; // 0x14
	int32_t GridNum; // 0x18
};

struct FAnimNode_ApplyMeshSpaceAdditive {
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

struct FCrowWeaponExpTableRow {
	int32_t ExpIndex; // 0x8
	TMap<int32_t, int64_t> WeaponExps; // 0x10
};

struct FCompositeFallbackFont {
	FTypeface Typeface; // 0x0
	float ScalingFactor; // 0x10
};

struct FCompositeSubFont {
	TArray<FInt32Range> CharacterRanges; // 0x18
	FString Cultures; // 0x28
};

struct FCLSMovementSettingsLadder {
	float LadderUpSpeed; // 0x0
	float LadderDownSpeed; // 0x4
	float LadderJumpOutImpulse; // 0x8
};

struct FCrowBuildingEditorPreview {
	bool UsePreview; // 0x0
	ECrowBuildingEditorShowType ShowType; // 0x1
	ECrowBuildingEditorShowLOD ShowLOD; // 0x2
};

struct FCrowSquadBattleInfo {
	float AliveTime; // 0x0
	float TotalDamage; // 0x4
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

struct FCollectionVectorParameter {
	FLinearColor DefaultValue; // 0x18
};

struct FToggleTrackKey {
	float Time; // 0x0
	ETrackToggleAction ToggleAction; // 0x4
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

struct FInputAlphaBoolBlend {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
	EAlphaBlendOption BlendOption; // 0x8
	bool bInitialized; // 0x9
	UCurveFloat* CustomCurve; // 0x10
	FAlphaBlend AlphaBlend; // 0x18
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

struct FCrowBattlePassPackageData {
	TMap<FName, FCrowBattlePassPackageTableRow> PackageTableRows; // 0x0
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

struct FCrowSlangFilterInfo {
	int32_t slangStartPos; // 0x0
	int32_t betweenSymbolCnt; // 0x4
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

struct FCrowWorldActorLayoutItem {
	char bDestructible : 1; // 0x0
	char bDestroyParent : 1; // 0x0
	char bDestroyOnVehicleOverlap : 1; // 0x0
	char bDestroyByShockwave : 1; // 0x0
	char bNeedDecalReceiver : 1; // 0x0
	char bInteraction : 1; // 0x0
	char bInteractionParent : 1; // 0x0
	char bInteractionChild : 1; // 0x0
	char AutoDetectParent : 1; // 0x1
	char ShakeOnDamage : 1; // 0x1
	char ClientOnlyDestroy : 1; // 0x1
	char ClientDecorationOnly : 1; // 0x1
	char bSoundOccluder : 1; // 0x1
	int16_t OwnerLayoutItemIndex; // 0x2
	int16_t AttachParentLayoutIndex; // 0x4
	FName AttachParentSocket; // 0x8
	FTransform RelativeTransform; // 0x10
	UCrowWorldAsset* WorldAsset; // 0x40
};

struct FInterpCurvePointFloat {
	float InVal; // 0x0
	float OutVal; // 0x4
	float ArriveTangent; // 0x8
	float LeaveTangent; // 0xc
	EInterpCurveMode InterpMode; // 0x10
};

struct FCrowWeaponHitInfo {
	TArray<FHitResult> HitResultArray; // 0x0
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

struct FMovieSceneActorReferenceSectionTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneActorReferenceData ActorReferenceData; // 0x38
};

struct FCrowWorldSplinePointData {
	FVector position; // 0x0
	FVector Tangent; // 0xc
	FVector Up; // 0x18
	FVector Binormal; // 0x24
};

struct FAnimNode_LegIK {
	float ReachPrecision; // 0xc8
	int32_t MaxIterations; // 0xcc
	TArray<FAnimLegIKDefinition> LegsDefinition; // 0xd0
};

struct FUpdateLevelStreamingLevelStatus {
	FName PackageName; // 0x0
	int32_t LODIndex; // 0x8
	char bNewShouldBeLoaded : 1; // 0xc
	char bNewShouldBeVisible : 1; // 0xc
	char bNewShouldBlockOnLoad : 1; // 0xc
};

struct FAnimNode_BlendListBase {
	TArray<FPoseLink> BlendPose; // 0x10
	TArray<float> BlendTime; // 0x20
	EBlendListTransitionType TransitionType; // 0x30
	EAlphaBlendOption BlendType; // 0x31
	bool bResetChildOnActivation; // 0x32
	UCurveFloat* CustomBlendCurve; // 0x38
	UBlendProfile* BlendProfile; // 0x40
};

struct FCrowWeaponPartsMuzzleTableRow {
	FString HelpText; // 0x2f8
	UAkAudioEvent* ContinuousFireSound_1P_W; // 0x308
	UAkAudioEvent* FireSound_W; // 0x310
	UAkAudioEvent* FireEndSound_1P_W; // 0x318
	UAkAudioEvent* ContinuousFireSound_3P_W; // 0x320
	UAkAudioEvent* FireSound_3P_W; // 0x328
	UAkAudioEvent* FireEndSound_3P_W; // 0x330
	bool HideMuzzleFX; // 0x338
	UParticleSystem* MuzzleFX_1P; // 0x340
	UNiagaraSystem* MuzzleFX_1P_N; // 0x348
	bool Attach_MuzzleFX_1P; // 0x350
	UParticleSystem* MuzzleFX_3P; // 0x358
	UNiagaraSystem* MuzzleFX_3P_N; // 0x360
	bool Attach_MuzzleFX_3P; // 0x368
};

struct FCompositionGraphCapturePasses {
	TArray<FString> Value; // 0x0
};

struct FCrowIngameWeaponScore {
	char WeaponSubType; // 0x60
};

struct FCrowSquadWeapon {
	char WeaponSlotType; // 0x0
	uint32_t WeaponIndex; // 0x4
	uint32_t Count; // 0x8
};

struct FCrowWorldLevelStreamData {
	TArray<AActor*> LevelActors; // 0x0
	TMap<uint32_t, FCrowWorldGridActors> GridActors; // 0x10
};

struct FVertexOffsetUsage {
	int32_t Usage; // 0x0
};

struct FFastArraySerializer {
	int32_t ArrayReplicationKey; // 0x54
	EFastArraySerializerDeltaFlags DeltaFlags; // 0x100
};

struct FAxisNameToBehaviourName {
	FName AxisName; // 0x0
	FName BehaviourName; // 0x8
	bool bIsIfMinusScale; // 0x10
};

struct FRotationTrack {
	TArray<FQuat> RotKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FCrowLobbyRankRecord {
	int32_t Rank; // 0x0
	int32_t Level; // 0x4
	FString UserNickName; // 0x8
	int64_t Score; // 0x18
	int32_t PlayCount; // 0x20
	int32_t PlayTimeSec; // 0x24
};

struct FLiveLinkCameraStaticData {
	bool bIsFieldOfViewSupported; // 0x10
	bool bIsAspectRatioSupported; // 0x11
	bool bIsFocalLengthSupported; // 0x12
	bool bIsProjectionModeSupported; // 0x13
	float FilmBackWidth; // 0x14
	float FilmBackHeight; // 0x18
	bool bIsApertureSupported; // 0x1c
	bool bIsFocusDistanceSupported; // 0x1d
};

struct FBlueprintComponentDelegateBinding {
	FName ComponentPropertyName; // 0x0
	FName DelegatePropertyName; // 0x8
	FName FunctionNameToBind; // 0x10
};

struct FCrowScoreInfoConquestUSItemData {
	FString NickName; // 0x0
	ECrowSquadRole SquadRole; // 0x10
	bool bIsLocalPlayer; // 0x11
	char Level; // 0x12
	uint32_t Score; // 0x14
	char EnemyDyingCount; // 0x18
	char KillCount; // 0x19
	char DeathCount; // 0x1a
	uint32_t Latency; // 0x1c
	ACrowPlayerStateBase* PlayerStateBase; // 0x20
	bool bIsLocalPlayerSameSquad; // 0x28
};

struct FCLSCharacterAdditional {
	ECLSAdditionalState MainState; // 0x0
	char SubState; // 0x1
};

struct FPlatformRuntimeAudioCompressionOverrides {
	bool bOverrideCompressionTimes; // 0x0
	float DurationThreshold; // 0x4
	int32_t MaxNumRandomBranches; // 0x8
	int32_t SoundCueQualityIndex; // 0xc
};

struct FAnimNode_BlendListByEnum {
	TArray<int32_t> EnumToPoseIndex; // 0x98
	char ActiveEnumValue; // 0xa8
};

struct FMaterialParameterCollectionInfo {
	FGuid StateId; // 0x0
	UMaterialParameterCollection* ParameterCollection; // 0x10
};

struct FNamedInterface {
	FName InterfaceName; // 0x0
	UObject* InterfaceObject; // 0x8
};

struct FLiveLinkSubjectKey {
	FGuid Source; // 0x0
	FLiveLinkSubjectName SubjectName; // 0x10
};

struct FVector4Distribution {
	FDistributionLookupTable Table; // 0x0
};

struct FInterpCurveVector {
	TArray<FInterpCurvePointVector> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FMovieSceneObjectPathChannelKeyValue {
	TSoftObjectPtr<UObject> SoftPtr; // 0x0
	UObject* HardPtr; // 0x28
};

struct FNiagaraHalfVector3 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
	uint16_t Z; // 0x4
};

struct FAkCommunicationSettings {
	uint32_t PoolSize; // 0x0
	uint16_t DiscoveryBroadcastPort; // 0x4
	uint16_t CommandPort; // 0x6
	uint16_t NotificationPort; // 0x8
	FString NetworkName; // 0x10
};

struct FCrowPhysicalMatTableRow {
	UPhysicalMaterial* Material; // 0x8
	FCrowAmmoEffect Walk; // 0x10
	FCrowAmmoEffect Run; // 0x1d8
	FCrowAmmoEffect Sprint; // 0x3a0
	FCrowAmmoEffect Prone; // 0x568
	TMap<FName, FCrowAmmoEffect> AmmoEffect; // 0x730
	TMap<FName, FCrowSurfaceDataSkidMark> SkidMark; // 0x780
	FCrowSupplyBoxCollisionInfo SupplyBoxInfo; // 0x7d0
	FCrowWeaponGroundDustEffect WeaponGroundDustEffect; // 0x800
	FCrowSwimGroundDustEffect SwimGroundDustEffect; // 0x8b0
	bool IsEnablePenetration; // 0x8d8
	float PenetrationResistance; // 0x8dc
	bool IsAlwaysPreload; // 0x8e0
};

struct FFontCharacter {
	int32_t StartU; // 0x0
	int32_t StartV; // 0x4
	int32_t USize; // 0x8
	int32_t VSize; // 0xc
	char TextureIndex; // 0x10
	int32_t VerticalOffset; // 0x14
};

struct FCrowAIFireTargetData {
	TArray<FCrowAIFireTargetPart> RifleFireTagetPartList; // 0x0
};

struct FRootMotionExtractionStep {
	UAnimSequence* AnimSequence; // 0x0
	float StartPosition; // 0x8
	float EndPosition; // 0xc
};

struct FPoseData {
	TArray<FTransform> LocalSpacePose; // 0x0
	TMap<int32_t, int32_t> TrackToBufferIndex; // 0x10
	TArray<float> CurveData; // 0x60
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

struct FClanListItem {
	int32_t ClanId; // 0x0
	FString ClanName; // 0x8
	int32_t ClanMark; // 0x18
	int32_t ClanMarkBG; // 0x1c
	int32_t ClanLeval; // 0x20
	int32_t ClanRanking; // 0x24
	int32_t ClanMemberCurrent; // 0x28
	int32_t ClanMemberMax; // 0x2c
	int64_t ContributionPoint; // 0x30
	EClanJoinType ClanInviteType; // 0x38
};

struct FCrowSpawnerGridInfo {
	TArray<ACrowItemSpawner*> SpawnerArray; // 0x0
};

struct FTransformConstraintDescription {
	ETransformConstraintType TransformType; // 0x10
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

struct FLiveLinkBasicBlueprintData {
	FLiveLinkBaseStaticData StaticData; // 0x8
	FLiveLinkBaseFrameData FrameData; // 0x18
};

struct FCrowBuildingActorEditor {
	ACrowBuildingActor* BuildingActor; // 0x0
};

struct FSkeletalMeshSamplingInfo {
	TArray<FSkeletalMeshSamplingRegion> Regions; // 0x0
	FSkeletalMeshSamplingBuiltData BuiltData; // 0x10
};

struct FCLSCommonAnimSet {
	TMap<FName, FCLSCommonAnimList> AnimMap; // 0x8
};

struct FCrowLobbyNoticeInfo {
	ECrowLobbyNoticeType NoticeType; // 0x0
	uint64_t Key; // 0x8
	int32_t Value; // 0x10
};

struct FBlueprintComponentChangedPropertyInfo {
	FName PropertyName; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* PropertyScope; // 0x10
};

struct FAnimNode_Root {
	FPoseLink Result; // 0x10
	FName Name; // 0x20
	FName Group; // 0x28
};

struct FInputAxisConfigEntry {
	FName AxisKeyName; // 0x0
	FInputAxisProperties AxisProperties; // 0x8
};

struct FWaterFalloffSettings {
	EWaterBrushFalloffMode FalloffMode; // 0x0
	float FalloffAngle; // 0x4
	float FalloffWidth; // 0x8
	float EdgeOffset; // 0xc
	float ZOffset; // 0x10
};

struct FCrowOptimizationPartsInfo {
	float OptimizationScreenSize; // 0x0
	int32_t OptimizationLOD; // 0x4
};

struct FCrowDamageCameraShake {
	float Min; // 0x0
	float Max; // 0x4
	UMatineeCameraShake* CameraShake; // 0x8
};

struct FCLSGroundPoseSet {
	ECLSOverlayState OverlayState; // 0x8
	TMap<FName, FCLSGroundPose> PoseMap; // 0x10
};

struct FPolygonToSplit {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexPair> VertexPairsToSplitAt; // 0x8
};

struct FPerBoneBlendWeights {
	TArray<FPerBoneBlendWeight> BoneBlendWeights; // 0x0
};

struct FPhysicalSurfaceName {
	EPhysicalSurface Type; // 0x0
	FName Name; // 0x4
};

struct FCrowWorldStaticMeshVariationInfo {
	TMap<int32_t, FCrowWorldStaticMeshMaterialSet> MapMaterialSet; // 0x8
	uint32_t TextureNum; // 0x58
};

struct FCrowCustomizeEmotionListInfo {
	ECrowItemGrade ItemGrade; // 0x0
	TArray<uint32_t> EquipedSlotIndexs; // 0x8
	TArray<FCrowEmotionSlotInfo> SlotInfos; // 0x18
};

struct FStringCurveKey {
	float Time; // 0x0
	FString Value; // 0x8
};

struct FMovieSceneMarginSectionTemplate {
	FMovieSceneFloatChannel TopCurve; // 0x38
	FMovieSceneFloatChannel LeftCurve; // 0xd8
	FMovieSceneFloatChannel RightCurve; // 0x178
	FMovieSceneFloatChannel BottomCurve; // 0x218
	EMovieSceneBlendType BlendType; // 0x2b8
};

struct FParticleBurst {
	int32_t Count; // 0x0
	int32_t CountLow; // 0x4
	float Time; // 0x8
};

struct FBPComponentClassOverride {
	FName ComponentName; // 0x0
	UObject* ComponentClass; // 0x8
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

struct FSkyCreatorWeatherFXSettings {
	float RainAmount; // 0x0
	float RainGravity; // 0x4
	float RaindropThickness; // 0x8
	float RaindropLength; // 0xc
	float SnowAmount; // 0x10
	float SnowGravity; // 0x14
	float SnowTurbulence; // 0x18
	float SnowflakeSizeMin; // 0x1c
	float SnowflakeSizeMax; // 0x20
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

struct FCrowMissionTableRow {
	FString HelpText; // 0x8
	char MissionType; // 0x18
	bool MissionReset; // 0x19
	bool MissionUse; // 0x1a
	char MissionLevelLimitMin; // 0x1b
	char MissionLevelLimitMax; // 0x1c
	int32_t MissionPlayDay; // 0x20
	int32_t WeeklyGroupNum; // 0x24
	ECrowGameMode MissionModeType; // 0x28
	ECrowMissionConditionType MissionConditionType; // 0x2c
	int32_t ParameterType1; // 0x30
	int32_t ParameterType2; // 0x34
	int32_t MissionCounter; // 0x38
	int32_t ExpValue; // 0x3c
	FString TitleStringKey; // 0x40
	FString ContentStringKey; // 0x50
	int32_t Rating; // 0x60
	int32_t RewardIndex; // 0x64
};

struct FEdGraphSchemaAction_NewNode {
	UEdGraphNode* NodeTemplate; // 0x100
};

struct FNiagaraEmitterScalabilityOverride {
	char bOverrideSpawnCountScale : 1; // 0x38
};

struct FMovieSceneEventPayloadVariable {
	FString Value; // 0x0
};

struct FAkPS4AdvancedInitializationSettings {
	uint32_t ACPBatchBufferSize; // 0x38
	bool UseHardwareCodecLowLatencyMode; // 0x3c
};

struct FBitArrayUint32 {
	TArray<uint32_t> FlagBlocks; // 0x0
};

struct FCrowCharacterSwimTableRow {
	UPhysicalMaterial* Material; // 0x8
	FCrowCharacterSwimActionSetting FP; // 0x10
	FCrowCharacterSwimActionSetting TP; // 0x960
};

struct FShapedTextOptions {
	char bOverride_TextShapingMethod : 1; // 0x0
	char bOverride_TextFlowDirection : 1; // 0x0
	ETextShapingMethod TextShapingMethod; // 0x1
	ETextFlowDirection TextFlowDirection; // 0x2
};

struct FCrowSpecialVehicleCondition {
	bool bIsEnable; // 0x0
	float ActiveTime; // 0x4
	int32_t ConquestPointGap; // 0x8
	FString VehicleTextIndex; // 0x10
};

struct FCrowMergedMeshShareData {
	USkeletalMesh* CachedSkeletalMesh; // 0x0
	TArray<TWeakObjectPtr<ACrowCharacterBase>> Ptrs; // 0x8
	bool bCachedComplete; // 0x18
};

struct FNiagaraPlatformSet {
	int32_t QualityLevelMask; // 0x0
	TArray<FNiagaraDeviceProfileStateEntry> DeviceProfileStates; // 0x8
	TArray<FNiagaraPlatformSetCVarCondition> CVarConditions; // 0x18
};

struct FAnimNode_TransitionResult {
	bool bCanEnterTransition; // 0x10
};

struct FHairGroupCardsInfo {
	int32_t NumCards; // 0x0
	int32_t NumCardVertices; // 0x4
};

struct FRandomStream {
	int32_t InitialSeed; // 0x0
	int32_t Seed; // 0x4
};

struct FCrowVehicleSightInfo {
	UCrowSpringArmComponent* ActivatedSpringArm; // 0x0
	UCrowSpringArmComponent* SpringArmFP; // 0x8
	UCrowSpringArmComponent* SpringArmTP; // 0x10
	FVector DefaultFPSocketOffset; // 0x18
	FVector DefaultTPSocketOffset; // 0x24
};

struct FPurchaseItemDetails {
	FString Price; // 0x10
	FString Name; // 0x20
	PurchaseType Type; // 0x30
};

struct FAnimNode_Slot {
	FPoseLink Source; // 0x10
	FName SlotName; // 0x20
	bool bAlwaysUpdateSourcePose; // 0x28
};

struct FTemplateSequenceBindingOverrideData {
	TWeakObjectPtr<UObject> Object; // 0x0
	bool bOverridesDefault; // 0x8
};

struct FDatasmithStaticMaterialTemplate {
	FName MaterialSlotName; // 0x0
	UMaterialInterface* MaterialInterface; // 0x8
};

struct FCrowFoliageInfluenceInterpSequence {
	bool bPlaying; // 0x0
	FName Name; // 0x4
	bool bLoop; // 0xc
	int32_t Order; // 0x10
	TArray<FCrowFoliageInfluenceSequenceSetting> Sequence; // 0x18
};

struct FCollectionReference {
	FName CollectionName; // 0x0
};

struct FEnvDirection {
	UEnvQueryContext* LineFrom; // 0x0
	UEnvQueryContext* LineTo; // 0x8
	UEnvQueryContext* Rotation; // 0x10
	EEnvDirection DirMode; // 0x18
};

struct FCrowPersonalResultWeaponEvent {
	ECrowWeaponEventType EventType; // 0x0
	uint32_t Index; // 0x4
	uint32_t WeaponLevel; // 0x8
	TArray<FCrowPersonalResultWeaponPartsEvent> PartsEventArray; // 0x10
};

struct FCrowSupplyBoxCollisionInfo {
	TSoftObjectPtr<UParticleSystem> SupplyBoxParticle; // 0x0
	UAkAudioEvent* SupplyBoxSound; // 0x28
};

struct FStaticMeshComponentInstanceData {
	UStaticMesh* StaticMesh; // 0x100
	TArray<FStaticMeshVertexColorLODData> VertexColorLODs; // 0x108
	TArray<FGuid> CachedStaticLighting; // 0x118
	TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x128
};

struct FMaterialAttributesInput {
	int32_t PropertyConnectedBitmask; // 0xc
};

struct FWeightmapLayerAllocationInfo {
	ULandscapeLayerInfoObject* LayerInfo; // 0x0
	char WeightmapTextureIndex; // 0x8
	char WeightmapTextureChannel; // 0x9
};

struct FPropertyAccessPath {
	int32_t PathSegmentStartIndex; // 0x0
	int32_t PathSegmentCount; // 0x4
	char bHasEvents : 1; // 0x8
};

struct FCrowControllerGridInfo {
	ACrowPlayerControllerBase* Controller; // 0x0
	FIntVector LastGrid; // 0x8
	uint32_t LastGridIndex; // 0x14
};

struct FPaintedVertex {
	FVector position; // 0x0
	FColor Color; // 0xc
	FVector4 Normal; // 0x10
};

struct FMagicLeapHandMeshBlock {
	int32_t IndexCount; // 0x0
	int32_t vertexcount; // 0x4
	TArray<FVector> Vertex; // 0x8
	TArray<int32_t> Index; // 0x18
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

struct FConstrainComponentPropName {
	FName ComponentName; // 0x0
};

struct FDebugFloatHistory {
	TArray<float> Samples; // 0x0
	float MaxSamples; // 0x10
	float MinValue; // 0x14
	float MaxValue; // 0x18
	bool bAutoAdjustMinMax; // 0x1c
};

struct FCrowFixSetWeight {
	uint32_t ItemIndex; // 0x0
	float Weight; // 0x4
};

struct FComponentSync {
	FName Name; // 0x0
	ESyncOption SyncOption; // 0x8
};

struct FCrowCharacterAnimOnVehicleRow {
	UAnimSequenceBase* IdleTP; // 0x8
	UAnimSequenceBase* CombatIdleTP; // 0x10
	UAnimSequenceBase* GetInTP; // 0x18
	UAnimSequenceBase* GetOutTP; // 0x20
	UAimOffsetBlendSpace* AimOffset; // 0x28
	UAimOffsetBlendSpace* CombatAimOffset; // 0x30
	UBlendSpace* Strain; // 0x38
	UAnimSequenceBase* IdleFP; // 0x40
	UAnimSequenceBase* CombatIdleFP; // 0x48
	UAnimSequenceBase* GetInFP; // 0x50
	UAnimSequenceBase* GetOutFP; // 0x58
};

struct FNavGraphNode {
	UObject* Owner; // 0x0
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

struct FTriggerInput {
	FName KeyName; // 0x0
	FName KeyName02; // 0x8
	float PressTime; // 0x10
	float PressTime02; // 0x14
};

struct FCrowVehicleUpdaterSetting {
	TArray<FString> TestMapNamesClientCalculation; // 0x0
};

struct FCrowFixSetTableRow {
	FString HelpText; // 0x8
	TArray<FCrowFixSetWeight> ItemArray; // 0x18
};

struct FCrowWeaponFireLocation {
	FVector FireLocation; // 0x0
	FVector EndLocation; // 0xc
};

struct FCrowIngameRecordBase {
	TMap<FString, FCrowIngameRecordIntValue> IntValuePropertys; // 0x8
};

struct FCrowLandWheelsSimSuspension {
	char bValidElement : 1; // 0x0
	char bVehicleAwake : 1; // 0x0
	char ValidSuspension : 1; // 0x0
	char ShowDebug : 1; // 0x0
	char IsContactingPrev : 1; // 0x0
	char AddCounterVelocity : 1; // 0x0
	char PrevHoldingPosition : 1; // 0x0
	char HoldingPosition : 1; // 0x0
	int32_t ElementIndex; // 0x4
	int32_t ElementCountPerGroup; // 0x8
	ACrowVehicleUpdater* VehicleUpdater; // 0x10
	UCrowLandWheelsConfigTireAndWheel* WheelConfigNormal; // 0x18
	UCrowLandWheelsConfigTireAndWheel* WheelConfigFlat; // 0x20
	UCrowLandWheelsConfigTireAndWheel* WheelConfigDestroyed; // 0x28
	AActor* OwnerActor; // 0x30
	USkeletalMeshComponent* SkeletalMesh; // 0x38
	int16_t WheelIndex; // 0x40
	int16_t WheelGroupIndex; // 0x42
	FVector SweepOffset; // 0x44
	FVector RelativeRestLocation; // 0x50
	FQuat RelativeRestRotation; // 0x60
	FCrowLandWheelsStateSuspension SuspensionState; // 0x70
	ECrowLandWheelsTireStatus CurrentTireStatus; // 0x84
	float TargetSteeringInput; // 0x88
	float CurrentBrakingInput; // 0x8c
	float EngineTorque; // 0x90
	float EngineBrake; // 0x94
	float EngineRotationSpeedMax; // 0x98
	float BodySpeedMax; // 0x9c
	float FinalSpringOffset; // 0xa0
	FVector FinalRelativeLocation; // 0xa4
	FQuat FinalRelativeRotation; // 0xb0
	FVector SubstepSpringForce; // 0xc0
	FCrowTireAndWheelSetting WheelSetting; // 0xd0
	FCrowLandWheelsUpdateCache UpdateCache; // 0x1e0
	FCrowLandWheelsSuspensionSubstep Substep; // 0x3f0
	FVector TotalDrivingForce; // 0x450
	FCrowLandWheelsStatusSurface SurfaceCurrent; // 0x460
	FVector LastSurfacePosition; // 0x528
	float StationaryDuration; // 0x534
	FCrowLandWheelsStatusSpring SpringCurrent; // 0x538
	FCrowLandWheelsStatusSteering SteeringCurrent; // 0x548
	FCrowLandWheelsStatusRotation RotationCurrent; // 0x554
	float COMDistanceRatio; // 0x56c
	float DebugWheelSpeedRatio; // 0x570
	float DebugWheelTangentSpeed; // 0x574
	float DebugSuspensionSpeedForward; // 0x578
	float DebugDrivingSpringDefault; // 0x57c
	bool DrivingForceEnabled; // 0x580
};

struct FCrowModExpTableRow {
	ECrowGameMode GameMode; // 0x8
	FCrowModPointInfo EnemyDyingPoint; // 0x10
	FCrowModPointInfo KillPoint; // 0x48
	FCrowModPointInfo KillPointWeapon; // 0x80
	TMap<FString, FCrowModPointInfo> MissionPointMap; // 0xb8
	TMap<ECrowMedalType, FCrowModPointInfo> MedalPoint; // 0x108
	TMap<EVehicleIdentity, FCrowModPointInfo> VehicleDestoyPoint; // 0x158
	FCrowModPointInfo DyingPlayerPoint; // 0x1a8
	FCrowModPointInfo ReviveMySquad; // 0x1e0
	FCrowModPointInfo UseSquadRespawn; // 0x218
	FCrowModPointInfo AssistCharacter; // 0x250
	FCrowModPointInfo AssistSquadCharacter; // 0x288
	FCrowModPointInfo AssistCar; // 0x2c0
	FCrowModPointInfo AssistSquadCar; // 0x2f8
	FCrowModPointInfo AssistTank; // 0x330
	FCrowModPointInfo AssistSquadTank; // 0x368
	FCrowModPointInfo AssistHeli; // 0x3a0
	FCrowModPointInfo AssistSquadHeli; // 0x3d8
	FCrowModPointInfo AssistBoat; // 0x410
	FCrowModPointInfo AssistSquadBoat; // 0x448
	FCrowModPointInfo ObtainQ_ON_5001; // 0x480
	FCrowModPointInfo ObtainQ_ON_20001; // 0x4b8
	FCrowModPointInfo ObtainQ_ON_40001; // 0x4f0
	FCrowModPointInfo ObtainQ_ON_50001; // 0x528
	FCrowModPointInfo ObtainQ_ON_80001; // 0x560
	FCrowModPointInfo ObtainQ_ON_100001; // 0x598
	FCrowModPointInfo CallHeli; // 0x5d0
	FCrowModPointInfo EscapeSuccess; // 0x608
	FCrowModPointInfo Default; // 0x640
};

struct FOptionExplanation {
	FString UniqueOrActionAxisName; // 0x0
	UTexture2D* Image; // 0x10
	FString LocalKey; // 0x18
};

struct FCrowVehicleBoatFxSetup {
	FCrowVehicleFxTemplate StartEngineFxTemplate; // 0x0
	FCrowVehicleFxTemplate ReadyFxTemplate; // 0x68
	FCrowVehicleFxTemplate ShutDownFxTemplate; // 0xd0
	FCrowVehicleFxTemplate HornFxTemplate; // 0x138
	FCrowVehicleFxTemplate HornOffFxTemplate; // 0x1a0
};

struct FGoomBindingGroupInfo {
	int32_t RenRootCount; // 0x0
	int32_t RenLODCount; // 0x4
	int32_t SimRootCount; // 0x8
	int32_t SimLODCount; // 0xc
};

struct FBPInterfaceDescription {
	UInterface* Interface; // 0x0
	TArray<UEdGraph*> Graphs; // 0x8
};

struct FGridBlendSample {
	FEditorElement GridElement; // 0x0
	float BlendWeight; // 0x18
};

struct FCLSVaultTraceSettings {
	float MaxLedgeHeight; // 0x0
	float MinLedgeHeight; // 0x4
	float ReachDistance; // 0x8
	float RunReachDistance; // 0xc
	float ForwardTraceRadius; // 0x10
	float DownwardTraceRadius; // 0x14
	float MaxWindowHeightSize; // 0x18
};

struct FNiagaraScriptExecutionParameterStore {
	int32_t ParameterSize; // 0x78
	uint32_t PaddedParameterSize; // 0x7c
	TArray<FNiagaraScriptExecutionPaddingInfo> PaddingInfo; // 0x80
	char bInitialized : 1; // 0x90
};

struct FCrowFaceTableBaseRow {
	FString TextIndex; // 0x10
	FText Name; // 0x20
	bool bIsHidden; // 0x38
	bool bIsMale; // 0x39
	USkeletalMesh* FaceMesh; // 0x40
	FCrowSkinMaterial SkinTop; // 0x48
	FCrowSkinMaterial SkinBottom; // 0x60
	FCrowSkinMaterial SkinGloves; // 0x78
	FCrowSkinMaterial SkinShoes; // 0x90
	UPaperSprite* DefaultIcon; // 0xa8
};

struct FCrowWeaponSkinInfoTable {
	FString HelpText; // 0x0
	TMap<FName, UMaterialInterface*> MainBodySkins_1P; // 0x10
	TMap<FName, UMaterialInterface*> MainBodySkins_3P; // 0x60
	TArray<FCrowWeaponPartSkinListTable> WeaponPartsSkinList; // 0xb0
};

struct FConstraintInstance {
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

struct FSkeletalMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FMeshUVChannelInfo UVChannelData; // 0x10
};

struct FCrowLandWheelsBodySetting {
	bool UpdateBoneTransform; // 0x0
	bool LocalSpaceKinematics; // 0x1
	bool LocalSpaceSimulation; // 0x2
	bool SimulationGenerateHitEvents; // 0x3
	bool BeginWithReadyForDriving; // 0x4
	float SpeedMaxKmPH; // 0x8
	float SpeedReverseMaxKmPH; // 0xc
	float AccelerationRollForce; // 0x10
	float AccelerationPitchForce; // 0x14
	float AccelerationCameraYaw; // 0x18
	float AccelerationCameraSpeed; // 0x1c
	float WheelRollingResistance; // 0x20
	float InAirAngularResistance; // 0x24
	float InAirAngularRecoverRoll; // 0x28
	float InAirAngularRecoverPitch; // 0x2c
	float ChasisMass; // 0x30
	float ChasisMassInWater; // 0x34
	FVector ChasisSize; // 0x38
	FVector DirectionalDragRatio; // 0x44
	float FallRestitution; // 0x50
	float SpeedDragThreshold; // 0x54
	float SlopeSlipPower; // 0x58
	UDamageType* DamageTypeClass; // 0x60
	float WheelSqueezeDamagePerSecond; // 0x68
	TArray<FCrowLandWheelsTireAndWheel> WheelSetup; // 0x70
	TArray<FCrowLandWheelsAntiRoll> AntiRollSetup; // 0x80
	FCrowLandWheelsGripForce GripSetup; // 0x90
};

struct FSessionServicePing {
	FString UserName; // 0x0
};

struct FContaminationAreaExpansionInfo {
	float ExpansionRadius; // 0x0
	float ExpansionSpeed; // 0x4
	float ExpansionDelayTime; // 0x8
};

struct FWeaponAnimationInfo {
	FCrowAnimPoseSet Idle; // 0x0
	FCrowAnimPoseSet LobbyIdle; // 0x18
	FCrowAnimPoseSet Select; // 0x30
	FCrowAnimPoseSet Deselect; // 0x48
	FCrowAnimPoseSet Reload; // 0x60
	FCrowAnimPoseSet ReloadShort; // 0x78
	FCrowAnimPoseSet MagazineReload; // 0x90
	FCrowAnimPoseSet MagazineReloadShort; // 0xa8
	FCrowAnimPoseSet ReloadStart; // 0xc0
	FCrowAnimPoseSet ReloadLoop; // 0xd8
	FCrowAnimPoseSet ReloadEnd; // 0xf0
	FCrowAnimPoseSet PreFire; // 0x108
	FCrowAnimPoseSet Fire; // 0x120
	FCrowAnimPoseSet MagazineFire; // 0x138
	FCrowAnimPoseSet PostFire; // 0x150
	FCrowAnimPoseSet Aim; // 0x168
	FCrowAnimPoseSet ChangeFireMode; // 0x180
	FCrowAnimPoseSet ThrowPinOut; // 0x198
};

struct FCrowVehicleIconInfo {
	FCrowGameIconDisplayInfo Local; // 0x0
	FCrowGameIconDisplayInfo MySquad; // 0x88
	FCrowGameIconDisplayInfo MyTeam; // 0x110
	FCrowGameIconDisplayInfo Enemy; // 0x198
	FCrowGameIconDisplayInfo Empty; // 0x220
};

struct FRBFTarget {
	float ScaleFactor; // 0x10
	bool bApplyCustomCurve; // 0x14
	FRichCurve CustomCurve; // 0x18
	ERBFDistanceMethod DistanceMethod; // 0x98
	ERBFFunctionType FunctionType; // 0x99
};

struct FPredictProjectilePathPointData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Time; // 0x18
};

struct FSoundAttenuationSettings {
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

struct FStaticParameterSet {
	TArray<FStaticSwitchParameter> StaticSwitchParameters; // 0x0
	TArray<FStaticComponentMaskParameter> StaticComponentMaskParameters; // 0x10
	TArray<FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters; // 0x20
	TArray<FStaticMaterialLayersParameter> MaterialLayersParameters; // 0x30
};

struct FCanvasIcon {
	UTexture* Texture; // 0x0
	float U; // 0x8
	float V; // 0xc
	float UL; // 0x10
	float VL; // 0x14
};

struct FAssetData {
	FName ObjectPath; // 0x0
	FName PackageName; // 0x8
	FName PackagePath; // 0x10
	FName AssetName; // 0x18
	FName AssetClass; // 0x20
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

struct FSkyCreatorExponentialHeightFogSettings {
	float FogDensity; // 0x0
	float FogHeightFalloff; // 0x4
	FLinearColor FogInscatteringColor; // 0x8
	float FogStartDistance; // 0x18
	float SecondFogDensity; // 0x1c
	float SecondFogHeightFalloff; // 0x20
	float DirectionalInscatteringExponent; // 0x24
	float DirectionalInscatteringStartDistance; // 0x28
	FLinearColor DirectionalInscatteringColor; // 0x2c
	float VolumetricFogScatteringDistribution; // 0x3c
	FLinearColor VolumetricFogAlbedo; // 0x40
	FLinearColor VolumetricFogEmissive; // 0x50
	float VolumetricFogExtinctionScale; // 0x60
};

struct FNiagaraEmitterNameSettingsRef {
	FName SystemName; // 0x0
	FString EmitterName; // 0x8
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

struct FCrowLandWheelsSingleWheelState {
	FVector WorldPosition; // 0x0
	FVector OverlapPosition; // 0xc
	float RotationSpeed; // 0x18
	float SlipForward; // 0x1c
	float SlipRight; // 0x20
	float Slip; // 0x24
	float SpringLengthRatio; // 0x28
	char InAir : 1; // 0x2c
	char bSpringSqueezed : 1; // 0x2c
	char bSpringStretched : 1; // 0x2c
};

struct FMovieSceneSequenceHierarchy {
	FMovieSceneSequenceHierarchyNode RootNode; // 0x0
	FMovieSceneSubSequenceTree Tree; // 0x18
	TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> SubSequences; // 0x78
	TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> Hierarchy; // 0xc8
};

struct FHairShadowSettings {
	float HairShadowDensity; // 0x0
	float HairRaytracingRadiusScale; // 0x4
	bool bUseHairRaytracingGeometry; // 0x8
	bool bVoxelize; // 0x9
};

struct FCrowBuildingHISMCInfo {
	int16_t PartsIndex; // 0x0
	int8_t ElementIndex; // 0x2
	char IsDestructible : 1; // 0x3
	char HasInteraction : 1; // 0x3
	char IsRemains : 1; // 0x3
	char IsVisible : 1; // 0x3
	FCrowBuildingHISMCKey HISMCKey; // 0x8
};

struct FExposureSettings {
	float FixedEV100; // 0x0
	bool bFixed; // 0x4
};

struct FCrowIngameReplicatedRecord {
	uint32_t KillCount; // 0x0
	uint32_t DeathCount; // 0x4
	uint32_t ComboKillCount; // 0x8
};

struct FCrowFoliageInteractionAttenuationWithRay {
	float RayLength; // 0x10
};

struct FMovieScene3DLocationKeyStruct {
	FVector Location; // 0x8
	FFrameNumber Time; // 0x14
};

struct FPaperSpriteSocket {
	FTransform LocalTransform; // 0x0
	FName SocketName; // 0x30
};

struct FFilmStockSettings {
	float Slope; // 0x0
	float Toe; // 0x4
	float Shoulder; // 0x8
	float BlackClip; // 0xc
	float WhiteClip; // 0x10
};

struct FHairGroupsMaterial {
	UMaterialInterface* Material; // 0x0
	FName SlotName; // 0x8
};

struct FCrowCustomFxLODRow {
	FSoftObjectPath AssetName; // 0x8
	TArray<float> SizeOfLOD; // 0x20
};

struct FCrowAuthorizeUserInfo {
	uint64_t ServerKey; // 0x0
	FString AuthToken; // 0x8
};

struct FCrowWheelEffectBlur {
	UParticleSystem* FxAsset; // 0x0
	FName AttachSocketName; // 0x8
	FVector Location; // 0x10
	FRotator Rotation; // 0x1c
	TArray<FName> HideBoneNames; // 0x28
};

struct FRestrictedGameplayTagTableRow {
	bool bAllowNonRestrictedChildren; // 0x20
};

struct FAudioCaptureDeviceInfo {
	FName DeviceName; // 0x0
	int32_t NumInputChannels; // 0x8
	int32_t SampleRate; // 0xc
};

struct FCrowWorldGridZ {
	FVector WorldOrigin; // 0x0
	uint16_t HASH_CELL_BITS; // 0xc
	int32_t CellSize; // 0x10
	int32_t CellHalfSize; // 0x14
};

struct FAkMidiCc {
	EAkMidiCcValues Cc; // 0x2
	char Value; // 0x3
};

struct FMovieSceneTrackInstanceEntry {
	UObject* BoundObject; // 0x0
	UMovieSceneTrackInstance* TrackInstance; // 0x8
};

struct FCrowBuffTableRow {
	FString HelpText; // 0x168
	ECrowBuffEventType BuffEventType; // 0x178
	ECrowBuffType BuffType; // 0x179
	ECrowWeaponUIType WeaponUIType; // 0x17a
	ECrowBuffValueType BuffValueType; // 0x17b
	int32_t BuffIntValue; // 0x17c
	float BuffFloatValue; // 0x180
	int64_t DurationTime; // 0x188
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

struct FCrowClanMarkTableRow {
	FText HelpText; // 0x168
	EMarkType ImageType; // 0x180
	UPaperSprite* Resource; // 0x188
	EMarkAcquireType AcquireType; // 0x190
	int32_t ShopIndex; // 0x194
};

struct FCrowEyeColorTableBaseRow {
	UMaterialInterface* EyeMaterial; // 0x168
	UMaterialInterface* EyeMaterial_LOD; // 0x170
};

struct FPointDamageEvent {
	float Damage; // 0x10
	FVector_NetQuantizeNormal ShotDirection; // 0x14
	FHitResult HitInfo; // 0x20
};

struct FInputChord {
	FKey Key; // 0x0
	char bShift : 1; // 0x18
	char bCtrl : 1; // 0x18
	char bAlt : 1; // 0x18
	char bCmd : 1; // 0x18
};

struct FGeometryCollectionDebugDrawActorSelectedRigidBody {
	int32_t ID; // 0x0
	AChaosSolverActor* Solver; // 0x8
	AGeometryCollectionActor* GeometryCollection; // 0x10
};

struct FCrowSlangTableRow {
	FString SlangWord; // 0x8
};

struct FVertexAndAttributes {
	FVertexInstanceID VertexInstanceID; // 0x0
	FVertexID VertexID; // 0x4
	FMeshElementAttributeList PolygonVertexAttributes; // 0x8
};

struct FBoneSocketTarget {
	bool bUseSocket; // 0x0
	FBoneReference BoneReference; // 0x4
	FSocketReference SocketReference; // 0x20
};

struct FCrowLandWheelsWheelSetting {
	float WheelRadius; // 0x0
	float WheelWidth; // 0x4
	float WheelMassInKg; // 0x8
	float WheelRotationDampingRatio; // 0xc
};

struct FCachedPoseIndices {
	TArray<int32_t> OrderedSavedPoseNodeIndices; // 0x0
};

struct FWeaponSpreadInfo {
	UCurveFloat* Curve; // 0x0
	FWeaponSpreadPoseInfo Stand; // 0x8
	FWeaponSpreadPoseInfo Crouch; // 0x18
	FWeaponSpreadPoseInfo CrouchWalk; // 0x28
	FWeaponSpreadPoseInfo CrouchRun; // 0x38
	FWeaponSpreadPoseInfo CrouchSprint; // 0x48
	FWeaponSpreadPoseInfo Prone; // 0x58
	FWeaponSpreadPoseInfo Jump; // 0x68
	FWeaponSpreadPoseInfo Walk; // 0x78
	FWeaponSpreadPoseInfo Run; // 0x88
	FWeaponSpreadPoseInfo Sprint; // 0x98
	float BurstModeRate; // 0xa8
};

struct FCrowGroupItemTableRow {
	FString HelpText; // 0x8
	TArray<FCrowGroupItemInfo> ItemArray; // 0x18
};

struct FCrowCanEquipParts {
	FString WeaponTextIndex; // 0x0
	TArray<ECrowWeaponPartsType> PartsTypeArray; // 0x10
};

struct FVehicleDustInfo {
	UParticleSystem* FX; // 0x0
	float MinSpeed; // 0x8
};

struct FCrowWeaponPartsSlot {
	char PartsSlot; // 0x0
	uint32_t ItemIndex; // 0x4
	TArray<int32_t> Stickers; // 0x8
};

struct FAnimNode_SequenceEvaluator {
	UAnimSequenceBase* Sequence; // 0x38
	float ExplicitTime; // 0x40
	bool bShouldLoop; // 0x44
	bool bTeleportToExplicitTime; // 0x45
	ESequenceEvalReinit ReinitializationBehavior; // 0x46
	float StartPosition; // 0x48
};

struct FSearchUserInfo {
	uint64_t UserId; // 0x0
	uint64_t SteamId; // 0x8
	FString UserName; // 0x10
	int32_t UserLevel; // 0x20
};

struct FPlatformInterfaceDelegateResult {
	bool bSuccessful; // 0x0
	FPlatformInterfaceData Data; // 0x8
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

struct FCrowPartAimScopeModelInfo {
	FSoftObjectPath AimChangeMesh; // 0x0
	TArray<UMaterialInterface*> MaterialsAimMesh; // 0x18
	FSoftObjectPath AimLensMesh; // 0x28
};

struct FBandwidthTestItem {
	TArray<char> Kilobyte; // 0x0
};

struct FCrowDotDamageInfo {
	float Value; // 0x0
	float ElapsedTime; // 0x4
	uint32_t RemainSeconds; // 0x8
};

struct FNiagaraID {
	int32_t Index; // 0x0
	int32_t AcquireTag; // 0x4
};

struct FChaosCollisionEventRequestSettings {
	int32_t MaxNumberResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
	float MaxDistance; // 0x10
	EChaosCollisionSortMethod SortMethod; // 0x14
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

struct FDestructibleParameters {
	FDestructibleDamageParameters DamageParameters; // 0x0
	FDestructibleDebrisParameters DebrisParameters; // 0x1c
	FDestructibleAdvancedParameters AdvancedParameters; // 0x48
	FDestructibleSpecialHierarchyDepths SpecialHierarchyDepths; // 0x58
	TArray<FDestructibleDepthParameters> DepthParameters; // 0x70
	FDestructibleParametersFlag Flags; // 0x80
};

struct FCrowVehicleEntityLandWheels {
	char IsValidMovement : 1; // 0x210
	char IsPossessed : 1; // 0x210
	char IsTargetActorValid : 1; // 0x210
	char IsTargetActorAwake : 1; // 0x210
	char IsReadyForDriving : 1; // 0x210
	char IsBlockedPhysics : 1; // 0x210
	char IsInAir : 1; // 0x210
	char IsSafeToTrace : 1; // 0x210
	char IsUseAntiRoll : 1; // 0x211
	char IsVisibleInCamera : 1; // 0x211
	char IsClientSafeToUpdate : 1; // 0x211
	FTransform RootBoneRelativeTransform; // 0x220
	FVector BoundsLocation; // 0x250
	float BoundsRadius; // 0x25c
	FCrowLandWheelsSimEngine LandWheelsEngine; // 0x260
	float EngineTorqueLimitPrev; // 0x380
	float SurfaceMultiplyEngineRPMForward; // 0x384
	float SurfaceMultiplyEngineRPMReverse; // 0x388
	FVector ChasisDragArea; // 0x3a8
	float FullyStationaryDuration; // 0x3b4
	FVector PrevBodyVelocity; // 0x3b8
	FVector SubstepLinearImpulse; // 0x3c4
	FVector SubstepAngularImpulse; // 0x3d0
};

struct FNiagaraScriptExecutionPaddingInfo {
	uint16_t SrcOffset; // 0x0
	uint16_t DestOffset; // 0x2
	uint16_t SrcSize; // 0x4
	uint16_t DestSize; // 0x6
};

struct FCrowCharacterFootIKLimit {
	FVector Min; // 0x0
	FVector Max; // 0xc
};

struct FSteamVRInputOriginInfo {
	int32_t TrackedDeviceIndex; // 0x0
	FString RenderModelComponentName; // 0x8
	FString TrackedDeviceModel; // 0x18
};

struct FConstraintDescriptionEx {
	FFilterOptionPerAxis AxesFilterOption; // 0x8
};

struct FRootMotionSource_ConstantForce {
	FVector Force; // 0x98
	UCurveFloat* StrengthOverTime; // 0xa8
};

struct FCrowWheelEffectDissolve {
	UParticleSystemComponent* ParticleSystem; // 0x0
};

struct FProcMeshSection {
	TArray<FProcMeshVertex> ProcVertexBuffer; // 0x0
	TArray<uint32_t> ProcIndexBuffer; // 0x10
	FBox SectionLocalBox; // 0x20
	bool bEnableCollision; // 0x3c
	bool bSectionVisible; // 0x3d
};

struct FCrowWorldSyncHubActorInfoRow {
	TSoftClassPtr<UObject> WorldActorClass; // 0x8
	TArray<TSoftObjectPtr<AActor>> RefWorldActors; // 0x30
	TArray<FCrowWorldSyncHubStaticMeshInfoRow> StaticMeshInfos; // 0x40
	uint32_t UsageCount; // 0x50
	uint32_t StaticMeshCount; // 0x54
	uint32_t Tris; // 0x58
	int16_t TextureNum; // 0x5c
	float TextureRuntimeMemory; // 0x60
	TArray<uint32_t> LODTris; // 0x68
	TArray<uint32_t> LODMaterialNums; // 0x78
};

struct FMaterialTextureInfo {
	float SamplingScale; // 0x0
	int32_t UVChannelIndex; // 0x4
	FName TextureName; // 0x8
};

struct FMovieSceneEnumPropertySectionTemplate {
	FMovieSceneByteChannel EnumCurve; // 0x38
};

struct FCrowWorldSyncWorldPropLink {
	int32_t WorldPropIndex; // 0x0
	int32_t WorldPropClassIndex; // 0x4
	int32_t ParentSyncNodeIndex; // 0x8
	int32_t LocalIndexInSyncNode; // 0xc
	uint32_t PropFlags; // 0x10
	FTransform InitialTransform; // 0x20
};

struct FAnimNode_RefPose {
	ERefPoseType RefPoseType; // 0x10
};

struct FCrowWeaponPartsUnderBarrelTableRow {
	FString HelpText; // 0x2f8
};

struct FAkCommonInitializationSettingsWithSampleRate {
	uint32_t SampleRate; // 0x60
};

struct FCrowModCategoryTableRow {
	ECrowGameMode GameMod; // 0x8
	FSoftObjectPath ModTexture; // 0x10
	FSoftObjectPath ModTextureSmall; // 0x28
	FText GameModName; // 0x40
	FText GameModDescription; // 0x58
	uint32_t DefaultMapIndex; // 0x70
	bool IsHidden; // 0x74
	bool QuickMatchUse; // 0x75
	bool LobbyOnlyUse; // 0x76
};

struct FMovieSceneFieldEntry_EvaluationTrack {
	FMovieSceneEvaluationFieldTrackPtr TrackPtr; // 0x0
	uint16_t NumChildren; // 0x8
};

struct FCrowGameIconDisplayInfo {
	ECrowIconType IconType; // 0x0
	bool bIsEnableWorldMap; // 0x4
	UCrowWidgetBase* WorldMapIconClass; // 0x8
	float WorldMapIconScale; // 0x10
	bool WorldMapDisplayName; // 0x14
	float DisplayMapIconDistance; // 0x18
	bool IsEnableScale; // 0x1c
	bool bIsEnableIndicator; // 0x1d
	UCrowWidgetBase* IndicatorIconClass; // 0x20
	float IndicatorIconScale; // 0x28
	float IndicatorHeightOffset; // 0x2c
	bool LockIndicatorInScreen; // 0x30
	float DisplaySymbolMinDistance; // 0x34
	float DisplaySymbolDistance; // 0x38
	float DisplayNameMinDistance; // 0x3c
	float DisplayNameDistance; // 0x40
	float DisplayDistanceMinDistance; // 0x44
	float DisplayDistanceDistance; // 0x48
	float DisplayDistanceDecimalPoint; // 0x4c
	float ScaleMin; // 0x50
	float ScaleMax; // 0x54
	float ScaleMinDistance; // 0x58
	float ScaleMaxDistance; // 0x5c
	float AlphaMin; // 0x60
	float AlphaMax; // 0x64
	float AlphaMinDistance; // 0x68
	float AlphaMaxDistance; // 0x6c
	float IconChangeMinDistance; // 0x70
	float IconCenterAlpha; // 0x74
	float ScanTargetDistance; // 0x78
	ECrowPingType IconPingType; // 0x7c
	bool LockRotateMiniMap; // 0x7d
};

struct FBroadphaseSettings {
	bool bUseMBPOnClient; // 0x0
	bool bUseMBPOnServer; // 0x1
	bool bUseMBPOuterBounds; // 0x2
	FBox MBPBounds; // 0x4
	FBox MBPOuterBounds; // 0x20
	uint32_t MBPNumSubdivs; // 0x3c
};

struct FPhysicsBoxData {
	FVector Dimensions; // 0x0
	FTransform Transform; // 0x10
	FKShapeElem Element; // 0x40
};

struct FTTTrackId {
	int32_t TrackType; // 0x0
	int32_t TrackIndex; // 0x4
};

struct FTireConfigMaterialFriction {
	UPhysicalMaterial* PhysicalMaterial; // 0x0
	float FrictionScale; // 0x8
};

struct FLocoCameraTargets {
	FLocoCameraSettingsByStance VelocityDirection; // 0x0
	FLocoCameraSettingsByStance LookingDirection; // 0x140
	FLocoCameraSettings Ragdoll; // 0x280
};

struct FEditorMapPerformanceTestDefinition {
	FSoftObjectPath PerformanceTestmap; // 0x0
	int32_t TestTimer; // 0x18
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

struct FLandscapeSplineSegmentConnection {
	ULandscapeSplineControlPoint* ControlPoint; // 0x0
	float TangentLen; // 0x8
	FName SocketName; // 0xc
};

struct FCrowWorldSyncAreaData {
	int32_t SyncAreaIndex; // 0x0
	FCrowWorldSyncDestructible BuildingDestroyed; // 0x8
	FCrowWorldSyncDestructible WorldPropsDestroyed; // 0x20
};

struct FLensBloomSettings {
	FGaussianSumBloomSettings GaussianSum; // 0x0
	FConvolutionBloomSettings Convolution; // 0x88
	EBloomMethod Method; // 0xb0
};

struct FTriggerCheckDistance {
	bool UseCustom; // 0x0
	UShapeComponent* NearColiision; // 0x8
	UShapeComponent* FarColiision; // 0x10
	TArray<FTriggerCollisionInfo> CustomCollisions; // 0x18
};

struct FCrowdAvoidanceSamplingPattern {
	TArray<float> Angles; // 0x0
	TArray<float> Radii; // 0x10
};

struct FNiagaraParameterDataSetBinding {
	int32_t ParameterOffset; // 0x0
	int32_t DataSetComponentOffset; // 0x4
};

struct FExpressionInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FTimeStretchCurveInstance {
	bool bHasValidData; // 0x0
};

struct FCableMeshGenerationPoint {
	FVector Location; // 0x0
	FQuat Rotation; // 0x10
	FCableMeshGenerationPointInfo Info; // 0x20
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

struct FCameraTrackingFocusSettings {
	TSoftObjectPtr<AActor> ActorToTrack; // 0x0
	FVector RelativeOffset; // 0x28
	char bDrawDebugTrackingFocusPoint : 1; // 0x34
};

struct FDirectorTrackCut {
	float Time; // 0x0
	float TransitionTime; // 0x4
	FName TargetCamGroup; // 0x8
	int32_t ShotNumber; // 0x10
};

struct FTetherSimulationParams {
	TWeakObjectPtr<UWorld> World; // 0x0
	FString SimulationName; // 0x8
	ETetherSimulationTimingMode TimingMode; // 0x18
	float CollisionWidth; // 0x1c
	float DesiredParticleDistance; // 0x20
	FVector CableForce; // 0x24
	FTetherCableSimulationOptions SimulationOptions; // 0x30
	TArray<FTetherSegmentSimulationParams> SegmentParams; // 0x60
};

struct FSourceEffectFoldbackDistortionSettings {
	float InputGainDb; // 0x0
	float ThresholdDb; // 0x4
	float OutputGainDb; // 0x8
};

struct FPOV {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x18
};

struct FCrowLobbyWeaponRecord {
	int32_t SharedIndex; // 0x0
	int64_t Exp; // 0x8
	int32_t WeasponUsedGainExp; // 0x10
	int32_t Kill; // 0x14
	int32_t Headshot; // 0x18
	int32_t Assist; // 0x1c
	int32_t Faint; // 0x20
	int64_t Damage; // 0x28
	int32_t UsedCount; // 0x30
	int64_t RecoveryHp; // 0x38
	int32_t HpUsedCount; // 0x40
	int32_t TankKill; // 0x44
	int32_t HelicopterKill; // 0x48
	int32_t Vehiclekill; // 0x4c
};

struct FUVMapSettings {
	FVector Size; // 0x0
	FVector2D UVTile; // 0xc
	FVector position; // 0x14
	FRotator Rotation; // 0x20
	FVector Scale; // 0x2c
};

struct FCrowWorldSyncNodeLink {
	int32_t SyncNodeIndex; // 0x0
	TArray<int32_t> BuildingIndexes; // 0x8
	TArray<int32_t> WorldPropIndexes; // 0x18
	TArray<int32_t> WorldDynamicPropIndexes; // 0x28
};

struct FCrowWorldSyncDestroyAreaData {
	FCrowWorldSyncDestructible AreaDestroyed; // 0x0
};

struct FLiveLinkSourceDebugInfo {
	FLiveLinkSubjectName SubjectName; // 0x0
	int32_t SnapshotIndex; // 0x8
	int32_t NumberOfBufferAtSnapshot; // 0xc
};

struct FPositionHistory {
	TArray<FVector> Positions; // 0x0
	float Range; // 0x10
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

struct FCrowPlayerCountInfoBombMission {
	char TeamID; // 0x0
	uint32_t Count; // 0x4
};

struct FModularSynthPresetBankEntry {
	FString PresetName; // 0x0
	FModularSynthPreset Preset; // 0x10
};

struct FBoxSphereBounds {
	FVector Origin; // 0x0
	FVector BoxExtent; // 0xc
	float SphereRadius; // 0x18
};

struct FNiagaraMeshMaterialOverride {
	UMaterialInterface* ExplicitMat; // 0x0
	FNiagaraUserParameterBinding UserParamBinding; // 0x8
};

struct FWeightedBlendables {
	TArray<FWeightedBlendable> Array; // 0x0
};

struct FStructRedirect {
	FName OldStructName; // 0x0
	FName NewStructName; // 0x8
};

struct FPackedNormal {
	char X; // 0x0
	char Y; // 0x1
	char Z; // 0x2
	char W; // 0x3
};

struct FGameplayTag {
	FName TagName; // 0x0
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

struct FHeaderRowStyle {
	FTableColumnHeaderStyle ColumnStyle; // 0x8
	FTableColumnHeaderStyle LastColumnStyle; // 0x4d8
	FSplitterStyle ColumnSplitterStyle; // 0x9a8
	FSlateBrush BackgroundBrush; // 0xac0
	FSlateColor ForegroundColor; // 0xb48
};

struct FCrowCloudScapeMaterialParamName {
	FName DensityParamName; // 0x0
	FName TextureParamName; // 0x8
	FName LocationParamName; // 0x10
	FName ScaleParamName; // 0x18
	FName OrientationParamName; // 0x20
};

struct FRenderableTriangleVertex {
	FVector position; // 0x0
	FVector2D UV; // 0xc
	FVector Normal; // 0x14
	FColor Color; // 0x20
};

struct FCrowItemAssetRow {
	TArray<FCrowItemAssetElement> Elements; // 0x0
};

struct FCrowVictoryPoseTableRow {
	FSoftObjectPath Animation; // 0x170
	TArray<FString> WeaponArray; // 0x188
};

struct FInterpCurveLinearColor {
	TArray<FInterpCurvePointLinearColor> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FNiagaraEmitterScriptProperties {
	UNiagaraScript* Script; // 0x0
	TArray<FNiagaraEventReceiverProperties> EventReceivers; // 0x8
	TArray<FNiagaraEventGeneratorProperties> EventGenerators; // 0x18
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

struct FCrowWeaponAccData {
	uint32_t ItemIndex; // 0x0
	uint32_t SkinIndex; // 0x4
	uint32_t CharmIndex; // 0x8
	TArray<int32_t> StickerList; // 0x10
	FCrowWeaponPartsStickerData PartsDatas[0x9]; // 0x20
};

struct FPrimaryAssetType {
	FName Name; // 0x0
};

struct FPhysicalAnimationProfile {
	FName ProfileName; // 0x0
	FPhysicalAnimationData PhysicalAnimationData; // 0x8
};

struct FMovieSceneTemplateGenerationLedger {
	FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x0
	TMap<FGuid, FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x8
	TMap<FGuid, FMovieSceneFrameRange> SubSectionRanges; // 0x58
};

struct FVertexInstancesForPolygonHole {
	TArray<FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs; // 0x0
};

struct FCrowBuildingEditorMeshData {
	UStaticMesh* StaticMesh; // 0x0
	TArray<UMaterialInterface*> MaterialOverrides; // 0x8
	FTransform RelativeTransform; // 0x20
	int32_t ParentPartsIndex; // 0x50
};

struct FCrowWorldAsyncSectorData {
	FCrowWorldReplicationSector ReceivedData; // 0x8
};

struct FSoundWaveSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
	float NormalizedMagnitude; // 0x8
};

struct FSourceEffectSimpleDelaySettings {
	float SpeedOfSound; // 0x0
	float DelayAmount; // 0x4
	float DryAmount; // 0x8
	float WetAmount; // 0xc
	float Feedback; // 0x10
	char bDelayBasedOnDistance : 1; // 0x14
};

struct FVMExternalFunctionBindingInfo {
	FName Name; // 0x0
	FName OwnerName; // 0x8
	TArray<bool> InputParamLocations; // 0x10
	int32_t NumOutputs; // 0x20
	TArray<FVMFunctionSpecifier> FunctionSpecifiers; // 0x28
};

struct FCrowCharacterDeathAnimByDirection {
	TMap<ECrowCharacterHitDirection, UAnimMontage*> Montages; // 0x0
};

struct FCrowCloudVisualizeParticle {
	bool bAlways; // 0x0
	UNiagaraComponent* Particle_NS; // 0x8
	UParticleSystemComponent* Particle; // 0x10
	float LastUpdateTime; // 0x18
};

struct FRootMotionSource_JumpForce {
	FRotator Rotation; // 0x98
	float Distance; // 0xa4
	float Height; // 0xa8
	bool bDisableTimeout; // 0xac
	UCurveVector* PathOffsetCurve; // 0xb0
	UCurveFloat* TimeMappingCurve; // 0xb8
};

struct FCrowPlayerCountInfoTDM {
	char TeamID; // 0x0
	uint32_t Count; // 0x4
};

struct FLayerActorStats {
	UObject* Type; // 0x0
	int32_t Total; // 0x8
};

struct FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
};

struct FCrowVehicleTableRow {
	ECrowVehicleType VehicleType; // 0x168
	ACrowVehiclePawn* VehicleTarget; // 0x170
	ACrowVehicleParachuteActor* ParachuteActor; // 0x178
	UAnimMontage* ParachuteAnimMontage; // 0x180
	TArray<FCrowPhysMatEffectPair> ParachuteOnGroundEffect; // 0x188
	ECrowShopProductSubType ShopProductSubType; // 0x198
	FName SkidMarkIndex; // 0x19c
};

struct FCrowWeaponSkinInfoTableData {
	int32_t WeaponIndex; // 0x0
	FString HelpText; // 0x8
	TMap<FName, UMaterialInterface*> MainBodySkins_1P; // 0x18
	TMap<FName, UMaterialInterface*> MainBodySkins_3P; // 0x68
	TArray<FCrowWeaponPartSkinListTable> WeaponPartsSkinList; // 0xb8
};

struct FPolygonGroupToCreate {
	FMeshElementAttributeList PolygonGroupAttributes; // 0x0
	FPolygonGroupID OriginalPolygonGroupID; // 0x10
};

struct FCrowBarrelInfo {
	bool UseDirectForward; // 0x0
	FRotator BarrelForward; // 0x4
	FRotator RootForward; // 0x10
	FRotator LerpAddedInputRotation; // 0x1c
	float OffsetForwardPitch; // 0x28
};

struct FCrowVehicleDamageItem {
	AActor* TargetActor; // 0x0
	UDamageType* DamageType; // 0x8
	float DamageTotal; // 0x10
	AController* InstigatorController; // 0x18
	AActor* InstigatorActor; // 0x20
	FHitResult HitResult; // 0x28
};

struct FMagicLeapRaycastHitResult {
	EMagicLeapRaycastResultState HitState; // 0x0
	FVector HitPoint; // 0x4
	FVector Normal; // 0x10
	float Confidence; // 0x1c
	int32_t UserData; // 0x20
};

struct FAkMidiGeneric {
	char Param1; // 0x2
	char Param2; // 0x3
};

struct FCrowConquestPointRate {
	float ElapsedTime; // 0x0
	char PointRate; // 0x4
};

struct FCrowUserCharacterInfo {
	uint32_t Index; // 0x0
	char FaceIndex; // 0x4
	char HairIndex; // 0x5
	char HairColorIndex; // 0x6
	char BeardIndex; // 0x7
	char BeardColorIndex; // 0x8
	char EyeColorIndex; // 0x9
	uint64_t InvenNo; // 0x10
	TArray<FCrowClothItemData> ClothesList; // 0x18
	TArray<uint32_t> TattooIndexList; // 0x28
};

struct FCrowVoluemetricCloudSetting {
	UCrowCloudScapeDataAsset* DataAsset; // 0x0
};

struct FTransformFilter {
	FFilterOptionPerAxis TranslationFilter; // 0x0
	FFilterOptionPerAxis RotationFilter; // 0x3
	FFilterOptionPerAxis ScaleFilter; // 0x6
};

struct FCrowVehicleDamageEffect {
	float ActivateHP; // 0x0
	TArray<FVehicleDamageParameter> DamageParameterList; // 0x8
	TArray<FFxReplicator_FxTemplate> FxTemplateList; // 0x18
	TArray<FFxReplicator_AudioTemplate> AudioTemplateList; // 0x28
	UCrowFxReplicatorComponent* FxReplicator; // 0x38
};

struct FWeaponDefaultAmmoCount {
	int32_t Training; // 0x0
	int32_t TeamDeathMatch; // 0x4
	int32_t BombMission; // 0x8
	int32_t Conquest; // 0xc
	int32_t SquadMatch; // 0x10
	int32_t BattleRoyal; // 0x14
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

struct FTetherSimulationInstanceResources {
	bool bIsInitialized; // 0x0
	TWeakObjectPtr<UWorld> World; // 0x4
	UBodySetup* BodySetup; // 0x10
};

struct FChunkPartData {
	FGuid Guid; // 0x0
	uint32_t Offset; // 0x10
	uint32_t Size; // 0x14
};

struct FSimpleCurveKey {
	float Time; // 0x0
	float Value; // 0x4
};

struct FClothCollisionPrim_Box {
	FVector LocalPosition; // 0x0
	FQuat LocalRotation; // 0x10
	FVector HalfExtents; // 0x20
	int32_t BoneIndex; // 0x2c
};

struct FColor {
	char B; // 0x0
	char G; // 0x1
	char R; // 0x2
	char A; // 0x3
};

struct FCrowWorldPropLocatorSetting {
	bool UseRandomYaw; // 0x0
	float RandomYawRange; // 0x4
	bool UseRandomPitch; // 0x8
	float RandomPitchRange; // 0xc
	bool UseRandomRoll; // 0x10
	float RandomRollRange; // 0x14
	int32_t RotationRandomSeed; // 0x18
};

struct FCrowCloudScapeReplication {
	int32_t Index; // 0x0
	FDateTime StartUtcDateTime; // 0x8
};

struct FPIELoginSettingsInternal {
	FString ID; // 0x0
	FString Token; // 0x10
	FString Type; // 0x20
	TArray<char> TokenBytes; // 0x30
};

struct FCrowScoreInfoConquestSQItemData {
	char Rank; // 0x0
	bool bIsLocalSquad; // 0x1
	FString SquadKey; // 0x8
	FText SquadName; // 0x18
	uint32_t Score; // 0x30
	int32_t KillCount; // 0x34
	int32_t DeathCount; // 0x38
	TArray<FCrowScoreInfoConquestUSItemData> SquadMemberArray; // 0x40
};

struct FAnimNode_TwoBoneIK {
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

struct FCrowWorldSplineUID {
	int32_t SplineUID; // 0x0
	FVector SplineLocation; // 0x4
};

struct FCrowBuildingTriggerConfig {
	float ActivateDistance; // 0x0
	float ActivatePitchMax; // 0x4
};

struct FCrowBuildingInitialReplication {
	FBitArrayUint32 LayoutDestroyedFlags; // 0x0
	FMultiBitArrayUint32 LayoutDynamicStates; // 0x10
	uint16_t DestructibleCount; // 0x30
	uint16_t DynamicStateCount; // 0x32
	char IsFullyDestroyed; // 0x34
	char IsValid; // 0x35
};

struct FConstraint {
	FBoneReference TargetBone; // 0x0
	EConstraintOffsetOption OffsetOption; // 0x10
	ETransformConstraintType TransformType; // 0x11
	FFilterOptionPerAxis PerAxis; // 0x12
};

struct FDelegateRuntimeBinding {
	FString ObjectName; // 0x0
	FName PropertyName; // 0x10
	FName FunctionName; // 0x18
	FDynamicPropertyPath SourcePath; // 0x20
	EBindingKind Kind; // 0x48
};

struct FCrowCarAnimInstanceProxy {
	UCrowCarAnimInstance* AnimInstance; // 0x788
};

struct FCrowBattlePassFreePassCostTableRow {
	uint32_t RCPCost; // 0x8
};

struct FVoiceSettings {
	USceneComponent* ComponentToAttachTo; // 0x0
	USoundAttenuation* AttenuationSettings; // 0x8
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x10
};

struct FNiagaraVariant {
	UObject* Object; // 0x0
	UNiagaraDataInterface* DataInterface; // 0x8
	TArray<char> Bytes; // 0x10
	ENiagaraVariantMode CurrentMode; // 0x20
};

struct FDatasmithStaticMeshImportOptions {
	EDatasmithImportLightmapMin MinLightmapResolution; // 0x0
	EDatasmithImportLightmapMax MaxLightmapResolution; // 0x1
	bool bGenerateLightmapUVs; // 0x2
	bool bRemoveDegenerates; // 0x3
};

struct FBehaviorInfo {
	UInputBehavior* Behavior; // 0x0
};

struct FMovieSceneBytePropertySectionTemplate {
	FMovieSceneByteChannel ByteCurve; // 0x38
};

struct FCLSGripPoseSet {
	TMap<FName, FCLSGripPose> GripPose; // 0x8
};

struct FCrowIconZOrderTableRow {
	ECrowIconType IconType; // 0x8
	int32_t MapZOrder; // 0xc
	int32_t IndicatorZOrder; // 0x10
};

struct FSynthKnobStyle {
	FSlateBrush LargeKnob; // 0x8
	FSlateBrush LargeKnobOverlay; // 0x90
	FSlateBrush MediumKnob; // 0x118
	FSlateBrush MediumKnobOverlay; // 0x1a0
	float MinValueAngle; // 0x228
	float MaxValueAngle; // 0x22c
	ESynthKnobSize KnobSize; // 0x230
};

struct FEnvQueryInstanceCache {
	UEnvQuery* Template; // 0x0
};

struct FHairStretchConstraint {
	bool SolveStretch; // 0x0
	bool ProjectStretch; // 0x1
	float StretchDamping; // 0x4
	float StretchStiffness; // 0x8
	FRuntimeFloatCurve StretchScale; // 0x10
};

struct FPointWeightMap {
	TArray<float> Values; // 0x0
};

struct FCrowBuffIconInfo {
	uint32_t BuffIndex; // 0x0
	UCrowButton* BuffButton; // 0x8
	UImage* BuffImage; // 0x10
};

struct FMovieSceneTrackEvalOptions {
	char bCanEvaluateNearestSection : 1; // 0x0
	char bEvalNearestSection : 1; // 0x0
	char bEvaluateInPreroll : 1; // 0x0
	char bEvaluateInPostroll : 1; // 0x0
	char bEvaluateNearestSection : 1; // 0x0
};

struct FAnimNode_ConvertComponentToLocalSpace {
	FComponentSpacePoseLink ComponentPose; // 0x10
};

struct FCrowMedalCountInfo {
	FCrowModPointInfo PointInfo; // 0x0
	ECrowMedalType MedalType; // 0x38
	int32_t Count; // 0x3c
};

struct FPrimaryAssetRulesCustomOverride {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FDirectoryPath FilterDirectory; // 0x8
	FString FilterString; // 0x18
	FPrimaryAssetRules Rules; // 0x28
};

struct FStatColorMapEntry {
	float In; // 0x0
	FColor Out; // 0x4
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

struct FAkWaapiFieldNames {
	FString FieldName; // 0x0
};

struct FActorPerceptionBlueprintInfo {
	AActor* Target; // 0x0
	TArray<FAIStimulus> LastSensedStimuli; // 0x8
	char bIsHostile : 1; // 0x18
};

struct FPrecomputedLightInstanceData {
	FTransform Transform; // 0xc0
	FGuid LightGuid; // 0xf0
	int32_t PreviewShadowMapChannel; // 0x100
};

struct FAnimCurveBase {
	FName LastObservedName; // 0x0
	FSmartName Name; // 0x8
	int32_t CurveTypeFlags; // 0x14
};

struct FTTFloatTrack {
	UCurveFloat* CurveFloat; // 0x20
};

struct FNiagaraVariableLayoutInfo {
	uint32_t FloatComponentStart; // 0x0
	uint32_t Int32ComponentStart; // 0x4
	uint32_t HalfComponentStart; // 0x8
	FNiagaraTypeLayoutInfo LayoutInfo; // 0x10
};

struct FNiagaraScalabilityManager {
	UNiagaraEffectType* EffectType; // 0x0
	TArray<UNiagaraComponent*> ManagedComponents; // 0x8
};

struct FMagicLeapMeshBlockRequest {
	FGuid BlockID; // 0x0
	EMagicLeapMeshLOD LevelOfDetail; // 0x10
};

struct FCrowWorldMaterialParameterVector {
	FName ParameterName; // 0x0
	FLinearColor DefaultValue; // 0x8
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

struct FCrowOutfitPreset {
	uint64_t InvenNo; // 0x0
	char OutfitIndex; // 0x8
	FString OutfitName; // 0x10
	int64_t Expiration; // 0x20
	TArray<FCrowClothItemData> ClothesList; // 0x28
};

struct FDialogueContext {
	UDialogueVoice* Speaker; // 0x0
	TArray<UDialogueVoice*> Targets; // 0x8
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

struct FMovieSceneSectionGroup {
	TArray<TWeakObjectPtr<UMovieSceneSection>> Sections; // 0x0
};

struct FCrowBuildingDynamicPartsAsset {
	UStaticMesh* SourceMesh; // 0x0
	UStaticMesh* RemainMesh; // 0x8
	UStaticMesh* TriggerMesh; // 0x10
};

struct FInitializeFxReplicator {
	USceneComponent* AttachToComponent; // 0x0
	TArray<FName> HideBoneNameList; // 0x8
	TArray<FFxReplicator_FxTemplate> FxTemplateList; // 0x18
	TArray<FFxReplicator_AudioTemplate> AudioTemplateList; // 0x28
	TArray<FFxReplicator_WwiseAudioTemplate> WwiseAudioTemplateList; // 0x38
	bool bIsFirstPlayerOnBoardingFP; // 0x48
};

struct FLuminComponentSubElement {
	ELuminComponentSubElementType ElementType; // 0x0
	FString Value; // 0x8
};

struct FCrowDOFProperty {
	ECrowScopeSightRate ScopeSightRate; // 0x0
	float Fstop; // 0x4
	float FocalDistance; // 0x8
	float SensorWidth; // 0xc
};

struct FPerPlatformBool {
	bool Default; // 0x0
};

struct FAudioQualitySettings {
	FText DisplayName; // 0x0
	int32_t MaxChannels; // 0x18
};

struct FCrowMineralItemTableRow {
	FString HelpText; // 0x8
	int32_t CountMin_2; // 0x18
	int32_t CountMax_2; // 0x1c
	int32_t CountMin_3; // 0x20
	int32_t CountMax_3; // 0x24
	int32_t CountMin_4; // 0x28
	int32_t CountMax_4; // 0x2c
};

struct FAxisKeySlot {
	ESettingKeySlotType SlotType; // 0x0
	FInputAxisKeyMapping AxisMapping; // 0x8
};

struct FVectorRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FMediaCaptureDevice {
	FText DisplayName; // 0x0
	FString URL; // 0x18
};

struct FCrowTakeExpInfo {
	uint32_t TakeExpBuffPoint[0xa]; // 0x58
	TArray<FCrowWeaponEventInfo> WeaponEventInfo; // 0x80
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

struct FMovieSceneParameterSectionTemplate {
	TArray<FScalarParameterNameAndCurve> Scalars; // 0x20
	TArray<FBoolParameterNameAndCurve> Bools; // 0x30
	TArray<FVector2DParameterNameAndCurves> Vector2Ds; // 0x40
	TArray<FVectorParameterNameAndCurves> Vectors; // 0x50
	TArray<FColorParameterNameAndCurves> Colors; // 0x60
	TArray<FTransformParameterNameAndCurves> Transforms; // 0x70
};

struct FGraphReference {
	UEdGraph* MacroGraph; // 0x0
	UBlueprint* GraphBlueprint; // 0x8
	FGuid GraphGuid; // 0x10
};

struct FLandscapeLayerComponentData {
	FHeightmapData HeightmapData; // 0x0
	FWeightmapData WeightmapData; // 0x8
};

struct FLastLocationGatherInfo {
	UNetConnection* Connection; // 0x0
	FVector LastLocation; // 0x8
	FVector LastOutOfRangeLocationCheck; // 0x14
};

struct FCrowTrajectoryCalculator {
	char bIsInitialized : 1; // 0x0
	char bIsTrajectoryMovement : 1; // 0x0
	uint32_t WeaponIndex; // 0x4
	char WeaponItemType; // 0x8
	char CurrentHitCount; // 0x9
	char TrajectoryYellowFlagCount; // 0xa
	char TrajectoryRedFlagCount; // 0xb
	UWorld* World; // 0x10
	FVector StartLocation; // 0x18
	FVector ShootDirection; // 0x24
	FVector ShootUpVector; // 0x30
	float AttackRangeOption; // 0x3c
	float SubstepDistance; // 0x40
	float TrajectoryMaxDistance; // 0x44
	float TrajectoryLastSlope; // 0x48
	float PenetrationPower; // 0x4c
	float PenetrationDistance; // 0x50
	float PenetrationDecrease; // 0x54
	UCurveFloat* TrajectoryCurve; // 0x58
	FString AmmoEffectKey; // 0x60
	FName ProjectileCollisionProfileName; // 0x70
	float CurrentDistance; // 0x78
	FVector CurrentLocation; // 0x7c
	int32_t LineTraceCount; // 0x88
	ACrowPlayerControllerBase* PlayerController; // 0x100
};

struct FCustomFieldData {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FST_DamageWheel {
	ETireState TireState; // 0x0
	char WheelNumber; // 0x1
	uint32_t TireDurability; // 0x4
	FName TireBoneName; // 0x8
	float fDistanceDriven; // 0x10
	UParticleSystem* FlatParticle; // 0x18
	UParticleSystem* DestroyParticle; // 0x20
};

struct FCrowLandscapeSplineInterpPoint {
	FVector Center; // 0x0
	FVector Left; // 0xc
	FVector Right; // 0x18
	FVector FalloffLeft; // 0x24
	FVector FalloffRight; // 0x30
	FVector EdgeLeft; // 0x3c
	FVector EdgeRight; // 0x48
	float StartEndFalloff; // 0x54
	FCrowWorldSplinePointData SplinePointData; // 0x58
};

struct FMovieSceneTrackInstanceInput {
	UMovieSceneSection* Section; // 0x0
};

struct FMultiBitArrayUint32 {
	TArray<uint32_t> ValueBlocks; // 0x0
	int16_t MaxValueCount; // 0x10
	int8_t BitPerValue; // 0x12
	uint64_t ValueMask; // 0x18
};

struct FPhysicsCapsuleData {
	float Radius; // 0x0
	float Length; // 0x4
	FTransform Transform; // 0x10
	FKShapeElem Element; // 0x40
};

struct FVectorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x8
	FMovieSceneFloatChannel YCurve; // 0xa8
	FMovieSceneFloatChannel ZCurve; // 0x148
};

struct FReplicatedStaticActorDestructionInfo {
	UObject* ObjClass; // 0x30
};

struct FGameplayTagSource {
	FName SourceName; // 0x0
	EGameplayTagSourceType SourceType; // 0x8
	UGameplayTagsList* SourceTagList; // 0x10
	URestrictedGameplayTagsList* SourceRestrictedTagList; // 0x18
};

struct FSplineMeshInstanceData {
	FVector StartPos; // 0xb8
	FVector EndPos; // 0xc4
	FVector StartTangent; // 0xd0
	FVector EndTangent; // 0xdc
};

struct FMovieScene3DPathSectionTemplate {
	FMovieSceneObjectBindingID PathBindingID; // 0x20
	FMovieSceneFloatChannel TimingCurve; // 0x38
	MovieScene3DPathSection_Axis FrontAxisEnum; // 0xd8
	MovieScene3DPathSection_Axis UpAxisEnum; // 0xd9
	char bFollow : 1; // 0xdc
	char bReverse : 1; // 0xdc
	char bForceUpright : 1; // 0xdc
};

struct FAkGeometrySurfaceOverride {
	UAkAcousticTexture* AcousticTexture; // 0x0
	char bEnableOcclusionOverride : 1; // 0x8
	float OcclusionValue; // 0xc
};

struct FAnimNode_SteamVRInputAnimPose {
	EMotionRange MotionRange; // 0x10
	EHand hand; // 0x11
	EHandSkeleton HandSkeleton; // 0x12
	bool Mirror; // 0x13
	FSteamVRSkeletonTransform SteamVRSkeletalTransform; // 0x20
	FUE4RetargettingRefs UE4RetargettingRefs; // 0x5f0
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

struct FNiagaraVariableWithOffset {
	int32_t Offset; // 0xc
};

struct FCrowWorldPropLocatorItem {
	ACrowWorldPropActor* PropActor; // 0x0
	float RadiusFactor; // 0x8
	float DirectionAngle; // 0xc
};

struct FCLSCharacterAdditionalInjured {
	bool bIsAliving; // 0x0
	ECLSStance AlivingStance; // 0x1
};

struct FCrowBombingTableRow {
	FString HelpText; // 0x8
	AActor* ProjectileActor; // 0x18
	AActor* ExplosionFXActor; // 0x20
	AActor* BombingTargetActor; // 0x28
	int32_t AuthItemKeyIndex; // 0x30
	int32_t Cost_Point; // 0x34
	float BombingRadius; // 0x38
	int32_t BombingDelayTime; // 0x3c
	int32_t BombAmount; // 0x40
	float SpawnIntervalTimeMin; // 0x44
	float SpawnIntervalTimeMax; // 0x48
	float MinRadius; // 0x4c
	float MaxRadius; // 0x50
	float MinDamege; // 0x54
	float MaxDamege; // 0x58
	float BombMinDistacne; // 0x5c
	float BombingSpawnHeight; // 0x60
	UAkAudioEvent* ExplosionSound; // 0x68
	UMatineeCameraShake* CameraShake; // 0x70
	float CameraShakeMinDistance; // 0x78
	float CameraShakeMaxDistance; // 0x7c
	int32_t Cost_Mineral; // 0x80
	float ProjectileSpeed; // 0x84
	float Falloff; // 0x88
	UDamageType* DamegeType; // 0x90
};

struct FStaticComponentMaskValue {
	bool R; // 0x0
	bool G; // 0x1
	bool B; // 0x2
	bool A; // 0x3
};

struct FPassiveSoundMixModifier {
	USoundMix* SoundMix; // 0x0
	float MinVolumeThreshold; // 0x8
	float MaxVolumeThreshold; // 0xc
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

struct FCrowWorldDestructionFxHitGround {
	FName GroundActorTag; // 0x0
	TArray<FName> HitBoneNames; // 0x8
	UFXSystemAsset* FxHitGound; // 0x18
	UAkAudioEvent* SoundHitGround; // 0x20
	int32_t MaxHitCount; // 0x28
	float HitCoolTime; // 0x2c
};

struct FVirtualTextureBuildSettings {
	int32_t TileSize; // 0x0
	int32_t TileBorderSize; // 0x4
	bool bEnableCompressCrunch; // 0x8
	bool bEnableCompressZlib; // 0x9
};

struct FRagdollIKOffsets {
	FTransform LeftFootTransform; // 0x0
	FTransform RightFootTransform; // 0x30
};

struct FAnimSlotInfo {
	FName SlotName; // 0x0
	TArray<float> ChannelWeights; // 0x8
};

struct FNetAnalyticsDataConfig {
	FName DataName; // 0x0
	bool bEnabled; // 0x8
};

struct FNiagaraScriptDataInterfaceInfo {
	UNiagaraDataInterface* DataInterface; // 0x0
	FName Name; // 0x8
	int32_t UserPtrIdx; // 0x10
	FNiagaraTypeDefinition Type; // 0x18
	FName RegisteredParameterMapRead; // 0x28
	FName RegisteredParameterMapWrite; // 0x30
};

struct FCrowCustomUserInfo {
	uint64_t playerId; // 0x0
	FString NickName; // 0x8
	ECrowCustomTeamType TeamType; // 0x18
	char Squard; // 0x19
	char Slot; // 0x1a
};

struct FSubdividedQuad {
	FSubdividedQuadVertex QuadVertex0; // 0x0
	FSubdividedQuadVertex QuadVertex1; // 0x34
	FSubdividedQuadVertex QuadVertex2; // 0x68
	FSubdividedQuadVertex QuadVertex3; // 0x9c
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

struct FCrowDOFPropertyScope {
	TArray<FCrowDOFProperty> Properties; // 0x0
};

struct FCrowWorldSyncHubWorldRow {
	uint32_t ActorInstanceCount; // 0x8
	uint32_t WorldActorClassNum; // 0xc
	uint32_t StaticMeshTypeNum; // 0x10
	uint32_t MaterialTypeNum; // 0x14
	uint32_t TextureTypeNum; // 0x18
	TArray<TSoftClassPtr<UObject>> WorldActors; // 0x20
	TArray<TSoftClassPtr<UObject>> StaticMeshes; // 0x30
	TArray<TSoftClassPtr<UObject>> Materials; // 0x40
	TArray<TSoftClassPtr<UObject>> Textures; // 0x50
};

struct FForceFeedbackChannelDetails {
	char bAffectsLeftLarge : 1; // 0x0
	char bAffectsLeftSmall : 1; // 0x0
	char bAffectsRightLarge : 1; // 0x0
	char bAffectsRightSmall : 1; // 0x0
	FRuntimeFloatCurve Curve; // 0x8
};

struct FSourceEffectRingModulationSettings {
	ERingModulatorTypeSourceEffect ModulatorType; // 0x0
	float Frequency; // 0x4
	float Depth; // 0x8
	float DryLevel; // 0xc
	float WetLevel; // 0x10
	UAudioBus* AudioBusModulator; // 0x18
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

struct FGrassInput {
	FName Name; // 0x0
	ULandscapeGrassType* GrassType; // 0x8
	FExpressionInput Input; // 0x10
};

struct FBrushEffectTerracing {
	float TerraceAlpha; // 0x0
	float TerraceSpacing; // 0x4
	float TerraceSmoothness; // 0x8
	float MaskLength; // 0xc
	float MaskStartOffset; // 0x10
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

struct FDelayedGroupMovement {
	AActor* MovementTargetActor; // 0x0
};

struct FCollectionScalarParameter {
	float DefaultValue; // 0x18
};

struct FEditorImportExportTestDefinition {
	FFilePath ImportFilePath; // 0x0
	FString ExportFileExtension; // 0x10
	bool bSkipExport; // 0x20
	TArray<FImportFactorySettingValues> FactorySettings; // 0x28
};

struct FCrowBattlePassSeasonData {
	int32_t SeasonIndex; // 0x0
	bool bActivated; // 0x4
	int64_t BattlePassExp; // 0x8
	int32_t BattlePassLevel; // 0x10
	int32_t RewardedFreeItemLevel; // 0x14
	int32_t RewardedPaidItemLevel; // 0x18
	int32_t PrevRewardedFreeItemLevel; // 0x1c
	int32_t PrevRewardedPaidItemLevel; // 0x20
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

struct FInterpCurvePointLinearColor {
	float InVal; // 0x0
	FLinearColor OutVal; // 0x4
	FLinearColor ArriveTangent; // 0x14
	FLinearColor LeaveTangent; // 0x24
	EInterpCurveMode InterpMode; // 0x34
};

struct FUPSMoveParams {
	bool bUsePathfinding; // 0x0
	bool bAllowPartialPath; // 0x1
	bool bProjectGoalLocation; // 0x2
	UNavigationQueryFilter* NavFilter; // 0x8
	float AcceptenceRadius; // 0x10
	bool bReachTestIncludesAgentRadius; // 0x14
	bool bCanStrafe; // 0x15
};

struct FCrowRotorPhysicsParameter {
	float WeightInKg; // 0x0
	float LinearDamping; // 0x4
	float AngularDamping; // 0x8
	float uuPerMeterFactor; // 0xc
	float MaxHoverForce; // 0x10
	float MinHoverForce; // 0x14
	float MaxPitchDegree; // 0x18
	float MaxRollDegree; // 0x1c
	float RecoverAxisSpringConstant; // 0x20
	float MaxYawTorque; // 0x24
	float MaxPitchTorque; // 0x28
	float MaxRollTorque; // 0x2c
	FVector DirectionalDragArea; // 0x30
	FVector DirectionalDragCoefficient; // 0x3c
	FVector DirectionalIdleDamping; // 0x48
	float MinInputValue; // 0x54
	float ForceInterpolation; // 0x58
	bool DrawDebugPhysicsLine; // 0x5c
};

struct FCrowWeaponCharmTableRow {
	int32_t Grade; // 0x168
	float Weight; // 0x16c
	FCrowPartModelInfo ModelInfo; // 0x170
};

struct FCrowServerRegion {
	FString Name; // 0x0
	FString Ip; // 0x10
	int32_t Port; // 0x20
	int32_t Count; // 0x24
	int32_t Ping; // 0x28
};

struct FARSharedWorldReplicationState {
	int32_t PreviewImageOffset; // 0x0
	int32_t ARWorldOffset; // 0x4
};

struct FKSphereElem {
	FVector Center; // 0x30
	float Radius; // 0x3c
};

struct FLODMappingData {
	TArray<int32_t> Mapping; // 0x0
	TArray<int32_t> InverseMapping; // 0x10
};

struct FSkyCreatorVolumetricCloudSettings {
	float LowCloudCoverage; // 0x0
	float LowCloudDensity; // 0x4
	float LowCloudAltitude; // 0x8
	float LowCloudHeight; // 0xc
	float LowCloudHeightVariation; // 0x10
	float LowCloudSecondaryCoverage; // 0x14
	float LowCloudSecondaryAltitude; // 0x18
	float LowCloudSecondaryHeight; // 0x1c
	float HighCloudCoverage; // 0x20
	float HighCloudDensity; // 0x24
	float HighCloudHeight; // 0x28
	float HighCloudAmountTypeA; // 0x2c
	float HighCloudAmountTypeB; // 0x30
	float HighCloudAmountTypeC; // 0x34
	FLinearColor Albedo; // 0x38
	FLinearColor AlbedoBottom; // 0x48
	float BottomDarkening; // 0x58
	FLinearColor NightEmissive; // 0x5c
	float PhaseG; // 0x6c
	float PhaseG2; // 0x70
	float PhaseBlend; // 0x74
	float MultiScatteringContribution; // 0x78
	float MultiScatteringOcclusion; // 0x7c
	float MultiScatteringEccentricity; // 0x80
	float ShapeNoiseErosion; // 0x84
	float DetailNoiseErosion; // 0x88
};

struct FRootMotionSource_MoveToDynamicForce {
	FVector StartLocation; // 0x98
	FVector InitialTargetLocation; // 0xa4
	FVector TargetLocation; // 0xb0
	bool bRestrictSpeedToExpected; // 0xbc
	UCurveVector* PathOffsetCurve; // 0xc0
	UCurveFloat* TimeMappingCurve; // 0xc8
};

struct FCrowCharacterPartsInfo {
	bool bIsLocalPlayer; // 0x0
	uint64_t ServerKey; // 0x8
	FCrowCharacterAppearance ReplicatedAppearance; // 0x10
	TArray<FCrowClothItemData> DefaultClothesList; // 0x18
	TArray<uint32_t> DefaultTattooIndexList; // 0x28
};

struct FCameraShakeInfo {
	FCameraShakeDuration Duration; // 0x0
	float BlendIn; // 0x8
	float BlendOut; // 0xc
};

struct FFontRenderInfo {
	char bClipText : 1; // 0x0
	char bEnableShadow : 1; // 0x0
	FDepthFieldGlowInfo GlowInfo; // 0x4
};

struct FCollisionProfileName {
	FName Name; // 0x0
};

struct FCrowConfigTableRow {
	FString Help; // 0x8
	FString Value; // 0x18
	FSoftObjectPath Object; // 0x28
};

struct FInputAxisProperties {
	float DeadZone; // 0x0
	float Sensitivity; // 0x4
	float Exponent; // 0x8
	char bInvert : 1; // 0xc
};

struct FCrowPingData {
	ACrowPlayerStateBase* Owner; // 0x0
	ECrowPingType PingType; // 0x8
	uint16_t PingKey; // 0xa
	FVector Location; // 0xc
	AActor* TargetActor; // 0x18
	FString TargetName; // 0x20
	ECrowItemType TargetItemType; // 0x30
	uint32_t TargetItemIndex; // 0x34
	AActor* ParentActor; // 0x38
	FString ParentName; // 0x40
	bool bIsIconPing; // 0x50
	EVehicleIdentity TargetVehicleIdentity; // 0x51
	FTimerHandle LifeTimer; // 0x58
};

struct FCrowWaitUserInfo {
	FCrowAuthorizeUserInfo AuthorizeUserInfo; // 0x0
	ACrowPlayerControllerBase* Controller; // 0x18
};

struct FDataTableRowHandle {
	UDataTable* DataTable; // 0x0
	FName RowName; // 0x8
};

struct FCrowWeaponPartsDropDataServer {
	FRotator Rotation; // 0x0
	uint16_t WeaponKey; // 0xc
	ECrowWeaponPartsType PartsType; // 0xe
	uint32_t PartsIndex; // 0x10
};

struct FTimelineVectorTrack {
	UCurveVector* VectorCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName VectorPropertyName; // 0x20
};

struct FWaterBrushEffectDisplacement {
	float DisplacementHeight; // 0x0
	float DisplacementTiling; // 0x4
	UTexture2D* Texture; // 0x8
	float Midpoint; // 0x10
	FLinearColor Channel; // 0x14
	float WeightmapInfluence; // 0x24
};

struct FMovieSceneStringPropertySectionTemplate {
	FMovieSceneStringChannel StringCurve; // 0x38
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

struct FAnimNode_RandomPlayer {
	TArray<FRandomPlayerSequenceEntry> Entries; // 0x10
	bool bShuffleMode; // 0x70
};

struct FLiveLinkSkeletonStaticData {
	TArray<FName> BoneNames; // 0x10
	TArray<int32_t> BoneParents; // 0x20
};

struct FCrowAmmoEffect {
	TSoftObjectPtr<UParticleSystem> ImpactParticle; // 0x0
	TSoftObjectPtr<UParticleSystem> PenetrationImpactParticle; // 0x28
	UAkAudioEvent* ImpactSound_W; // 0x50
	FCrowDecalInfo ImpactDecalInfo; // 0x58
	FCrowDecalInfo PenetrationImpactDecalInfo; // 0xa8
	TSoftObjectPtr<UParticleSystem> ExplosionParticle01; // 0xf8
	TSoftObjectPtr<UParticleSystem> ExplosionParticle02; // 0x120
	UAkAudioEvent* ExplosionSound_W; // 0x148
	FCrowDecalInfo ExplosionDecalInfo; // 0x150
	float DamageMultiply; // 0x1a0
	ACrowFoliageAffectorActor* ExplosionFoliageAffector; // 0x1a8
};

struct FMargin {
	float Left; // 0x0
	float Top; // 0x4
	float Right; // 0x8
	float Bottom; // 0xc
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

struct FJsonObjectWrapper {
	FString JsonString; // 0x0
};

struct FAnimNode_ModifyBone {
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

struct FCrowBuildingSyncData {
	TArray<FCrowWorldSyncClassLink> CollectionSyncClassLink; // 0x8
	TArray<FCrowWorldSyncAreaLink> CollectionSyncAreaLink; // 0x18
	TArray<FCrowWorldSyncNodeLink> CollectionSyncNodeLink; // 0x28
	TArray<FCrowWorldSyncBuildingLink> CollectionBuildingLink; // 0x38
	TArray<FCrowWorldSyncBuildingPropLink> CollectionBuildingPropLink; // 0x48
	TArray<FCrowWorldSyncWorldPropLink> CollectionWorldPropLink; // 0x58
};

struct FTViewTarget {
	AActor* Target; // 0x0
	FMinimalViewInfo POV; // 0x10
	APlayerState* PlayerState; // 0x5f0
};

struct FNiagaraFloat {
	float Value; // 0x0
};

struct FBox {
	FVector Min; // 0x0
	FVector Max; // 0xc
	char IsValid; // 0x18
};

struct FARTraceResult {
	float DistanceFromCamera; // 0x0
	EARLineTraceChannels TraceChannel; // 0x4
	FTransform LocalTransform; // 0x10
	UARTrackedGeometry* TrackedGeometry; // 0x40
};

struct FCrowWeaponAnimData {
	FName SrpingArmID; // 0x0
	char SpringArmId; // 0x8
};

struct FFrameMetrics {
	float TotalElapsedTime; // 0x0
	float FrameDelta; // 0x4
	int32_t FrameNumber; // 0x8
	int32_t NumDroppedFrames; // 0xc
};

struct FLocalizedIconInfos {
	TArray<FLocalizedIconInfo> IconData; // 0x0
};

struct FBrushEffectCurves {
	bool bUseCurveChannel; // 0x0
	UCurveFloat* ElevationCurveAsset; // 0x8
	float ChannelEdgeOffset; // 0x10
	float ChannelDepth; // 0x14
	float CurveRampWidth; // 0x18
};

struct FCrowWorldAutoDetectParentPair {
	uint32_t ChildActorIndex; // 0x0
	uint32_t ParentActorIndex; // 0x4
};

struct FCrowParachuteSkinTableRow {
	FString HelpText; // 0x168
	UMaterialInterface* Skin; // 0x178
	UMaterialInterface* SkinLod; // 0x180
};

struct FCrowTestAmmo {
	ECrowAmmoType AmmoType; // 0x0
	uint32_t Count; // 0x4
};

struct FPropertyAccessSegment {
	FName Name; // 0x0
	UStruct* Struct; // 0x8
	TFieldPath<FProperty> Property; // 0x10
	UFunction* Function; // 0x30
	int32_t ArrayIndex; // 0x38
	uint16_t Flags; // 0x3c
};

struct FCrowDynamicFoliageRenderTarget {
	float CaptureSize; // 0x0
	float PixelSizePerMeter; // 0x4
	UTextureRenderTarget2D* RenderTarget; // 0x8
	UMaterialParameterCollection* CrowParamCollection; // 0x10
};

struct FAnimNode_ScaleChainLength {
	FPoseLink InputPose; // 0x10
	float DefaultChainLength; // 0x20
	FBoneReference ChainStartBone; // 0x24
	FBoneReference ChainEndBone; // 0x34
	FVector TargetLocation; // 0x44
	float Alpha; // 0x50
	FInputScaleBias AlphaScaleBias; // 0x58
	EScaleChainInitialLength ChainInitialLength; // 0x60
};

struct FCLSCharacterAimBobInfo {
	float AlphaBasis; // 0x0
	float AlphaStand; // 0x4
	float AlphaCrouch; // 0x8
	float AlphaProne; // 0xc
	float CycleSpeed; // 0x10
	UCurveFloat* HoldBreathDownSpeedCurve; // 0x18
	UCurveFloat* HoldBreathUpSpeedCurve; // 0x20
	FVector2D PlayRateMinMax; // 0x28
};

struct FTetherSimulationSegment {
	uint32_t SegmentUniqueId; // 0x0
	FSplineSegmentInfo SplineSegmentInfo; // 0x4
	float Length; // 0x34
	TArray<FTetherSimulationParticle> Particles; // 0x38
	float SimulationTime; // 0x48
	bool bInvalidated; // 0x4c
};

struct FSessionServiceLog {
	FName Category; // 0x0
	FString Data; // 0x8
	FGuid InstanceId; // 0x18
	double TimeSeconds; // 0x28
	char Verbosity; // 0x30
};

struct FActorSequenceObjectReferenceMap {
	TArray<FGuid> BindingIds; // 0x0
	TArray<FActorSequenceObjectReferences> References; // 0x10
};

struct FCrowTeamInfo {
	char TeamID; // 0x0
	FString SquadKey; // 0x8
	ECrowSquadRole SquadRole; // 0x18
	uint32_t SquadPoint; // 0x1c
	FString SquadName; // 0x20
};

struct FSceneComponentInstanceData {
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x68
};

struct FEdGraphPinReference {
	TWeakObjectPtr<UEdGraphNode> OwningNode; // 0x0
	FGuid PinId; // 0x8
};

struct FParticleRandomSeedInfo {
	FName ParameterName; // 0x0
	char bGetSeedFromInstance : 1; // 0x8
	char bInstanceSeedIsIndex : 1; // 0x8
	char bResetSeedOnEmitterLooping : 1; // 0x8
	char bRandomlySelectSeedArray : 1; // 0x8
	TArray<int32_t> RandomSeeds; // 0x10
};

struct FFrameTime {
	FFrameNumber FrameNumber; // 0x0
	float SubFrame; // 0x4
};

struct FCrowWeaponLoadoutPreset {
	char LoadoutType; // 0x0
	char PresetIndex; // 0x1
	FString LoadoutName; // 0x8
	int64_t Expiration; // 0x18
	bool Loacked; // 0x20
	TMap<char, FCrowWeaponSlot> WeaponEquipmentMap; // 0x28
};

struct FInputAxisKeyMapping {
	FName AxisName; // 0x0
	float Scale; // 0x8
	FKey Key; // 0x10
};

struct FCrowWorldLightProbeAssetData {
	UCrowWorldAssetLightProbe* LightProbeAsset; // 0x0
	FTransform LightProbeTransform; // 0x10
	float Intensity; // 0x40
	float AttenuationRadius; // 0x44
	float SourceRadius; // 0x48
};

struct FGameplayTagContainer {
	TArray<FGameplayTag> GameplayTags; // 0x0
	TArray<FGameplayTag> ParentTags; // 0x10
};

struct FDrawerItemInfo {
	UWorld* World; // 0x50
};

struct FInt32Range {
	FInt32RangeBound LowerBound; // 0x0
	FInt32RangeBound UpperBound; // 0x8
};

struct FCrowWeaponData {
	uint32_t WeaponKey; // 0x30
	ECrowWeaponSubType WeaponSubType; // 0x34
	uint16_t AmmoCount; // 0x36
	uint16_t AmmoInClip; // 0x38
	uint16_t MaxAmmoInClip; // 0x3a
	FCrowWeaponPartsData PartsDatas[0x9]; // 0x40
};

struct FQuartzPulseOverrideStep {
	int32_t NumberOfPulses; // 0x0
	EQuartzCommandQuantization PulseDuration; // 0x4
};

struct FSoundClassAdjuster {
	USoundClass* SoundClassObject; // 0x0
	float VolumeAdjuster; // 0x8
	float PitchAdjuster; // 0xc
	float LowPassFilterFrequency; // 0x10
	char bApplyToChildren : 1; // 0x14
	float VoiceCenterChannelVolumeAdjuster; // 0x18
};

struct FCrowWorldLayoutActorCache {
	AActor* Actor; // 0x0
	USceneComponent* RootComponent; // 0x8
	FTransform ActorTransform; // 0x10
	TArray<USceneComponent*> Components; // 0x40
};

struct FCrowWeaponTableRow {
	uint32_t GroupIndex; // 0x168
	uint32_t ShopIndex; // 0x16c
	FString HelpText; // 0x170
	ECrowWeaponSubType WeaponSubType; // 0x180
	ECrowWeaponUIType WeaponUIType; // 0x181
	FCrowWeaponPartsOptions WeaponOptions; // 0x184
	int32_t ExpTableIndex; // 0x1c8
	uint32_t ExpShareIndex; // 0x1cc
	UCrowWeaponCrosshairBase* CrosshairFP; // 0x1d0
	UCrowWeaponCrosshairBase* CrosshairTP; // 0x1d8
	ACrowWeaponBase* OverrideClass; // 0x1e0
	uint32_t OverrideProjectileWeaponIndex; // 0x1e8
	bool CanPeekLeft; // 0x1ec
	bool CanPeekRight; // 0x1ed
	bool Exposed; // 0x1ee
	float WeaponModelNoramlFOV; // 0x1f0
	float WeaponModelAimFOV; // 0x1f4
	ECrowWeaponAimMode AimMode; // 0x1f8
	float AimFOV; // 0x1fc
	float AimTime; // 0x200
	float AimZoomTime; // 0x204
	UCurveFloat* AimCurveX; // 0x208
	UCurveFloat* AimCurveY; // 0x210
	UCrowWeaponZoomWidget* ZoomWidgetClass; // 0x218
	FCLSCharacterAimBobInfo AimmingBob; // 0x220
	bool IsUseAimTick; // 0x250
	float HoldBreathLimitTime; // 0x254
	float HoldBreathCoolTime; // 0x258
	float HoldBreathLimitOverCoolTime; // 0x25c
	bool UsePostProcess; // 0x260
	FPostProcessSettings PostProcessSettings; // 0x270
	FSoftObjectPath Mesh1P; // 0x7c0
	ACrowWeaponPartsActor* MeshClass1P; // 0x7d8
	UAnimInstance* Mesh1PAnim; // 0x7e0
	FVector ModelScale1P; // 0x7e8
	FSoftObjectPath Mesh3P; // 0x7f8
	ACrowWeaponPartsActor* MeshClass3P; // 0x810
	UAnimInstance* Mesh3PAnim; // 0x818
	FSoftObjectPath Mesh3PAttached; // 0x820
	FSoftObjectPath OptimizationMesh3P; // 0x838
	TArray<UMaterialInterface*> Materials1P; // 0x850
	TArray<UMaterialInterface*> Materials3P; // 0x860
	UMaterialInterface* OptimizationMaterial3P; // 0x870
	FVector ModelScale3P; // 0x878
	FVector SubRootOffset; // 0x884
	FWeaponAnimationInfo WeaponAnimation; // 0x890
	FCLSWeaponAnimation CharacterAnimation; // 0xa40
	FString BarrelDefaultTextIndex; // 0xc70
	FString MagazineDefaultTextIndex; // 0xc80
	FString MuzzleDefaultTextIndex; // 0xc90
	FString PistolGripDefaultTextIndex; // 0xca0
	FString PrimarySightDefaultTextIndex; // 0xcb0
	FString SecondarySightDefaultTextIndex; // 0xcc0
	FString SideBarrelDefaultTextIndex; // 0xcd0
	FString StockDefaultTextIndex; // 0xce0
	FString UnderBarrelDefaultTextIndex; // 0xcf0
	FSoftObjectPath PrimarySightMount1P; // 0xd00
	TArray<UMaterialInterface*> PrimarySightMountMaterials1P; // 0xd18
	FSoftObjectPath PrimarySightMount3P; // 0xd28
	TArray<UMaterialInterface*> PrimarySightMountMaterials3P; // 0xd40
	FSoftObjectPath SecondarySightMount1P; // 0xd50
	TArray<UMaterialInterface*> SecondarySightMountMaterials1P; // 0xd68
	FSoftObjectPath SecondarySightMount3P; // 0xd78
	TArray<UMaterialInterface*> SecondarySightMountMaterials3P; // 0xd90
	FSoftObjectPath SideBarrelMount1P; // 0xda0
	TArray<UMaterialInterface*> SideBarrelMountMaterials1P; // 0xdb8
	FSoftObjectPath SideBarrelMount3P; // 0xdc8
	TArray<UMaterialInterface*> SideBarrelMountMaterials3P; // 0xde0
	FSoftObjectPath UnderBarrelMount1P; // 0xdf0
	TArray<UMaterialInterface*> UnderBarrelMountMaterials1P; // 0xe08
	FSoftObjectPath UnderBarrelMount3P; // 0xe18
	TArray<UMaterialInterface*> UnderBarrelMountMaterials3P; // 0xe30
	UPaperSprite* CombindIcon; // 0xe40
	uint32_t DefaultCharmIndex; // 0xe48
	bool IsEquipCharm; // 0xe4c
	TArray<FName> StickerSocketNames; // 0xe50
	TArray<FVector> StickerScale; // 0xe60
	TArray<float> StickerAngle; // 0xe70
	int32_t StickerSocketMaxCount; // 0xe80
	TArray<int32_t> DefaultSticker; // 0xe88
	FString AmmoTextIndex; // 0xe98
	UCurveFloat* AmmoSpeedCurve; // 0xea8
	UCurveFloat* TrajectoryCurve; // 0xeb0
	FWeaponDefaultAmmoCount GameModeAmmoCount; // 0xeb8
	int32_t DefaultAmmoInClip; // 0xed0
	FWeaponDamageSettings DamageSettings; // 0xed8
	float AmmoSpeed; // 0xf00
	float AmmoLifeTime; // 0xf04
	float AmmoDistance; // 0xf08
	float AmmoGravityScale; // 0xf0c
	float PenetrationPower; // 0xf10
	float PenetrationDistance; // 0xf14
	float PenetrationDecrease; // 0xf18
	bool bIsInfiniteAmmo; // 0xf1c
	float AmmoDamageUIValue; // 0xf20
	FWeaponShellEjectInfo ShellEjectInfo; // 0xf28
	ACrowProjectileShell* ShellClipClass; // 0xf48
	float FireSpeed; // 0xf50
	float BurstFireSpeed; // 0xf54
	int32_t FireCount; // 0xf58
	float FireSpeedUIValue; // 0xf5c
	UParticleSystem* MuzzleFX_1P; // 0xf60
	UNiagaraSystem* MuzzleFX_1P_N; // 0xf68
	bool Attach_MuzzleFX_1P; // 0xf70
	UParticleSystem* MuzzleFX_3P; // 0xf78
	UNiagaraSystem* MuzzleFX_3P_N; // 0xf80
	bool Attach_MuzzleFX_3P; // 0xf88
	uint32_t SpawnSmokeFireCount; // 0xf8c
	UParticleSystem* MuzzleSmokeFX; // 0xf90
	UParticleSystem* Backblast_3P; // 0xf98
	UNiagaraSystem* Backblast_3P_N; // 0xfa0
	ACrowFoliageAffectorActor* FoliageAffector; // 0xfa8
	float AttackRange; // 0xfb0
	float TraceRadius; // 0xfb4
	bool IsEnableSingleShot; // 0xfb8
	bool IsEnableBurstShot; // 0xfb9
	bool IsEnableNormalShot; // 0xfba
	int32_t BurstShotCount; // 0xfbc
	float BurstShotDelay; // 0xfc0
	bool IsCanCooking; // 0xfc4
	float CookTime; // 0xfc8
	FColor DynamicLightColor; // 0xfcc
	float DynamicLightRadiusMin; // 0xfd0
	float DynamicLightRadiusMax; // 0xfd4
	float DynamicLightIntensityMin; // 0xfd8
	float DynamicLightIntensityMax; // 0xfdc
	UAkAudioEvent* SelectSound_W; // 0xfe0
	UAkAudioEvent* FireSound_W; // 0xfe8
	UAkAudioEvent* ContinuousFireSound_1P_W; // 0xff0
	UAkAudioEvent* FireEndSound_1P_W; // 0xff8
	UAkAudioEvent* FireSound_3P_W; // 0x1000
	UAkAudioEvent* ContinuousFireSound_3P_W; // 0x1008
	UAkAudioEvent* FireEndSound_3P_W; // 0x1010
	UAkAudioEvent* DryFireSound_W; // 0x1018
	UAkAudioEvent* AimAnmationSound_W; // 0x1020
	bool IsEnableSpread; // 0x1028
	float SpreadMax; // 0x102c
	float SpreadUIValue; // 0x1030
	FWeaponSpreadInfo NormalSpreadInfo; // 0x1038
	FWeaponSpreadInfo AimSpreadInfo; // 0x10e8
	bool IsEnableRecoil; // 0x1198
	float RecoilUIValue; // 0x119c
	float RecoilDecrease; // 0x11a0
	FWeaponRecoilInfo NormalRecoilInfo; // 0x11a8
	FWeaponRecoilInfo AimRecoilInfo; // 0x11c8
	FWeaponCameraShakeInfo CameraShakeInfo; // 0x11e8
	UPaperSprite* WeaponEquipSlotSprite; // 0x1200
	float ReloadUIValue; // 0x1208
	float TrajectoryMaxDistance; // 0x120c
	float TrajectoryLastSlope; // 0x1210
	float DropMaxDistance; // 0x1214
};

struct FCrowWorldAmmoTypeDamageSetting {
	float DamageMultiply; // 0x0
};

struct FAnimNode_PoseHandler {
	UPoseAsset* PoseAsset; // 0x38
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

struct FInterpCurvePointVector2D {
	float InVal; // 0x0
	FVector2D OutVal; // 0x4
	FVector2D ArriveTangent; // 0xc
	FVector2D LeaveTangent; // 0x14
	EInterpCurveMode InterpMode; // 0x1c
};

struct FCrowDecalTypeArray {
	TArray<UCrowDecalComponent*> Array; // 0x0
};

struct FAkPluginInfo {
	FString Name; // 0x0
	uint32_t PluginID; // 0x10
	FString dll; // 0x18
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

struct FARFaceUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FVector LeftEyePosition; // 0x18
	FVector RightEyePosition; // 0x24
	FVector LookAtTarget; // 0x30
};

struct FIntMargin {
	int32_t Left; // 0x0
	int32_t Top; // 0x4
	int32_t Right; // 0x8
	int32_t Bottom; // 0xc
};

struct FEyeTrackerStereoGazeData {
	FVector LeftEyeOrigin; // 0x0
	FVector LeftEyeDirection; // 0xc
	FVector RightEyeOrigin; // 0x18
	FVector RightEyeDirection; // 0x24
	FVector FixationPoint; // 0x30
	float ConfidenceValue; // 0x3c
};

struct FNCPool {
	TArray<FNCPoolElement> FreeElements; // 0x0
	TArray<UNiagaraComponent*> InUseComponents_Auto; // 0x10
	TArray<UNiagaraComponent*> InUseComponents_Manual; // 0x20
};

struct FEditPivotTarget {
	UTransformProxy* TransformProxy; // 0x0
	UTransformGizmo* TransformGizmo; // 0x8
};

struct FResponseChannel {
	FName Channel; // 0x0
	ECollisionResponse Response; // 0x8
};

struct FCrowWorldDestructionSimulationActor {
	ACrowWorldSimulationActor* SimulationActor; // 0x0
	FName CollisionProfileName; // 0x8
	float ImpulseMagnitude; // 0x10
};

struct FCrowGameModeInfo {
	ECrowGameMode SelectedGameMode; // 0x0
	TArray<FCrowMatchInfo> GameModeInfoArray; // 0x8
	TArray<FCrowMatchInfo> QuickMatchInfoArray; // 0x18
	TArray<FCrowCustomMatchInfo> CustomMatchInfoArray; // 0x28
};

struct FCrowCharacterMontageDepends {
	UAnimMontage* MontageStandToCrouch; // 0x0
	UAnimMontage* MontageStandToProne; // 0x8
	UAnimMontage* MontageCrouchToStand; // 0x10
	UAnimMontage* MontageCrouchToProne; // 0x18
	UAnimMontage* MontageProneToStand; // 0x20
	UAnimMontage* MontageProneToCrouch; // 0x28
	UAnimMontage* MontageStandTurnLeft; // 0x30
	UAnimMontage* MontageStandTurnRight; // 0x38
	UAnimMontage* MontageCrouchTurnLeft; // 0x40
	UAnimMontage* MontageCrouchTurnRight; // 0x48
};

struct FCrowClothHeadTableRow {
	ECrowClothPartHeadType SubClothType; // 0x258
};

struct FSkyCreatorSunLightSettings {
	float Intensity; // 0x0
	FLinearColor LightColor; // 0x4
	float Temperature; // 0x14
	float VolumetricScatteringIntensity; // 0x18
	FLinearColor AtmosphereDiskColorScale; // 0x1c
};

struct FCrowTriggerTutorialHUD {
	FName Text; // 0x0
	UMaterialInstance* Icon; // 0x8
	float Duration; // 0x10
};

struct FInAppPurchaseProductRequest2 {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FCrowFreeConquestCondition {
	bool bIsEnable; // 0x0
	float ActiveTime; // 0x4
	int32_t ActivePoint; // 0x8
	int32_t ActivePointGap; // 0xc
	float CountdownTime; // 0x10
};

struct FUPSPathData {
	TArray<FVector> PathPoints; // 0x0
	bool bPathIsValid; // 0x10
};

struct FCrowVloumetricCloudMaterial {
	int32_t MaxCount; // 0x0
	UMaterialInterface* VolumeMaterial; // 0x8
};

struct FCrowWeaponStickerTableRow {
	FCrowDecalInfo DecalInfo; // 0x168
	int32_t Grade; // 0x1b8
	ECrowStickerType Type; // 0x1bc
	UTexture* DecalImage; // 0x1c0
};

struct FBPEditorBookmarkNode {
	FGuid NodeGuid; // 0x0
	FGuid ParentGuid; // 0x10
	FText DisplayName; // 0x20
};

struct FAnimNotifyArray {
	TArray<FAnimNotifyEventReference> Notifies; // 0x0
};

struct FBTDecoratorLogic {
	EBTDecoratorLogic Operation; // 0x0
	uint16_t Number; // 0x2
};

struct FCrowWeaponStickerInfo {
	ECrowWeaponPartsType PartsType; // 0x0
	int32_t SlotIndex; // 0x4
};

struct FVector2D {
	float X; // 0x0
	float Y; // 0x4
};

struct FCrowSceneTableRow {
	ECrowSceneType Type; // 0x8
	uint32_t ReplicationSettingsIndex; // 0xc
	FSoftObjectPath Map; // 0x10
	FSoftObjectPath ResultLevel; // 0x28
	FSoftObjectPath AtmosphereLevel; // 0x40
	FSoftObjectPath ModMapSprite; // 0x58
	FSoftObjectPath WorldMapSprite; // 0x70
	FSoftObjectPath RedWorldMapSprite; // 0x88
	FSoftObjectPath BlueWorldMapSprite; // 0xa0
	FSoftObjectPath RespawnImpossibleWorldMapSprite; // 0xb8
	FSoftObjectPath LevelSequenceRed; // 0xd0
	FSoftObjectPath LevelSequenceBlue; // 0xe8
	FSoftObjectPath LevelSequenceStartPlay; // 0x100
	FSoftObjectPath EndLevelSequenceRed; // 0x118
	FSoftObjectPath EndLevelSequenceBlue; // 0x130
	float EndLevelSequencePlayTime; // 0x148
	ECrowGameMode GameMode; // 0x14c
	FSoftObjectPath TransitionGameMode; // 0x150
	ACrowSceneBase* SceneClass; // 0x168
	FText Name; // 0x170
	FText SubName; // 0x188
	FText Description; // 0x1a0
	UTexture2D* DefaultIcon; // 0x1b8
	UPaperSprite* DefaultIconSprite; // 0x1c0
	bool IsDefault; // 0x1c8
	bool IsBGMRandomPlay; // 0x1c9
	UAkAudioEvent* BGMStartEvent; // 0x1d0
	UAkAudioEvent* BGMEndEvent; // 0x1d8
	FCrowModeWeapon EnableWeaponType; // 0x1e0
	TArray<float> ArrayWorldMapZoomMultiply; // 0x1e8
	TArray<float> ArrayMinimapZoomMultiply; // 0x1f8
	float EnemyFireDist; // 0x208
	float EnemyFireCompassDist; // 0x20c
	float MaxHealth; // 0x210
	float DyingHealth; // 0x214
	bool IsLock; // 0x218
	bool IsHidden; // 0x219
	uint32_t LoadSceneIndex; // 0x21c
	FCrowGameIconDisplayInfo CharacterIconAlive_Squad; // 0x220
	FCrowGameIconDisplayInfo CharacterIconDying_Squad; // 0x2a8
	FCrowGameIconDisplayInfo CharacterIconDeath_Squad; // 0x330
	FCrowGameIconDisplayInfo CharacterIconAlive_Team; // 0x3b8
	FCrowGameIconDisplayInfo CharacterIconDying_Team; // 0x440
	FCrowGameIconDisplayInfo CharacterIconDeath_Team; // 0x4c8
	FCrowGameIconDisplayInfo CharacterIconDisplayInfoEnemy; // 0x550
	FCrowGameIconDisplayInfo CharacterIconObserver; // 0x5d8
	float ReadyToSpreadParachuteHeight; // 0x660
	float ParachuteSpreadLimitZ; // 0x664
	FCrowLoadingInfo SceneLoadingInfo; // 0x668
};

struct FCrowIngameReplicatedScore {
	uint32_t KillCount; // 0x0
	uint32_t DeathCount; // 0x4
	uint32_t ComboKillCount; // 0x8
};

struct FCrowClothMaskTableRow {
	ECrowClothPartMaskType SubClothType; // 0x258
	bool bIsGasMask; // 0x259
};

struct FSkinWeightProfileInfo {
	FName Name; // 0x0
	FPerPlatformBool DefaultProfile; // 0x8
	FPerPlatformInt DefaultProfileFromLODIndex; // 0xc
};

struct FNiagaraEmitterHandle {
	FGuid ID; // 0x0
	FName IdName; // 0x10
	bool bIsEnabled; // 0x18
	FName Name; // 0x1c
	UNiagaraEmitter* Instance; // 0x28
};

struct FMovieSceneByteChannel {
	TArray<FFrameNumber> Times; // 0x8
	char DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<char> Values; // 0x20
	UEnum* Enum; // 0x30
};

struct FBasedPosition {
	AActor* Base; // 0x0
	FVector position; // 0x8
	FVector CachedBaseLocation; // 0x14
	FRotator CachedBaseRotation; // 0x20
	FVector CachedTransPosition; // 0x2c
};

struct FCrowWorldCameraAttachedFX {
	UFXSystemAsset* FxAsset; // 0x0
	ERendererStencilMask CustomDepthStencilMask; // 0x8
	int32_t CustomDepthStencilValue; // 0xc
};

struct FBodyInstance {
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

struct FAnimNode_SteamVRSetWristTransform {
	FPoseLink ReferencePose; // 0x10
	EHandSkeleton HandSkeleton; // 0x20
	FPoseLink TargetPose; // 0x28
};

struct FAkSpatialAudioSettings {
	uint32_t MaxSoundPropagationDepth; // 0x0
	uint32_t DiffractionFlags; // 0x4
	float MovementThreshold; // 0x8
	uint32_t NumberOfPrimaryRays; // 0xc
	uint32_t ReflectionOrder; // 0x10
	bool EnableDiffractionOnReflections; // 0x14
	bool EnableDirectPathDiffraction; // 0x15
	float MaximumPathLength; // 0x18
	bool EnableTransmission; // 0x1c
};

struct FMovieSceneSequenceReplProperties {
	FFrameTime LastKnownPosition; // 0x0
	EMovieScenePlayerStatus LastKnownStatus; // 0x8
	int32_t LastKnownNumLoops; // 0xc
};

struct FBakedStateExitTransition {
	int32_t CanTakeDelegateIndex; // 0x0
	int32_t CustomResultNodeIndex; // 0x4
	int32_t TransitionIndex; // 0x8
	bool bDesiredTransitionReturnValue; // 0xc
	bool bAutomaticRemainingTimeRule; // 0xd
	TArray<int32_t> PoseEvaluatorLinks; // 0x10
};

struct FDatasmithCameraLensSettingsTemplate {
	float MaxFStop; // 0x0
};

struct FPlayerReservation {
	FUniqueNetIdRepl UniqueId; // 0x0
	FString ValidationStr; // 0x28
	FString Platform; // 0x38
	bool bAllowCrossplay; // 0x48
	float ElapsedTime; // 0x4c
};

struct FAkWaapiUri {
	FString Uri; // 0x0
};

struct FNavigationSegmentLink {
	FVector LeftStart; // 0x30
	FVector LeftEnd; // 0x3c
	FVector RightStart; // 0x48
	FVector RightEnd; // 0x54
};

struct FXRGestureConfig {
	bool bTap; // 0x0
	bool bHold; // 0x1
	ESpatialInputGestureAxis AxisGesture; // 0x2
	bool bNavigationAxisX; // 0x3
	bool bNavigationAxisY; // 0x4
	bool bNavigationAxisZ; // 0x5
};

struct FTearOffActorInfo {
	AActor* Actor; // 0x8
};

struct FPurchaseConfirmation {
	FString PackageName; // 0x10
	PurchaseType Type; // 0x48
};

struct FParameterGroupData {
	FString GroupName; // 0x0
	int32_t GroupSortPriority; // 0x10
};

struct FUE4RetargettingRefs {
	bool bIsInitialized; // 0x0
	bool bIsRightHanded; // 0x1
	FVector KnuckleAverageMS_UE4; // 0x4
	FVector WristSideDirectionLS_UE4; // 0x10
	FVector WristForwardLS_UE4; // 0x1c
};

struct FCrowSkinMaterial {
	UMaterialInstance* SkinMaterialIns_1P; // 0x0
	UMaterialInstance* SkinMaterialIns_3P; // 0x8
	UMaterialInstance* SkinMaterialIns_3P_LOD; // 0x10
};

struct FClusterNode_DEPRECATED {
	FVector BoundMin; // 0x0
	int32_t FirstChild; // 0xc
	FVector BoundMax; // 0x10
	int32_t LastChild; // 0x1c
	int32_t FirstInstance; // 0x20
	int32_t LastInstance; // 0x24
};

struct FLevelSequenceBindingReferences {
	TMap<FGuid, FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x0
	TSet<FGuid> AnimSequenceInstances; // 0x50
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

struct FCrowPhysMatEffectPair {
	FSoftObjectPath PhysicalMaterial; // 0x0
	FSoftObjectPath Particle; // 0x18
};

struct FCrowWorldSplineLinkedMeta {
	FCrowWorldSplineUID OwnerSplineUID; // 0x0
	int32_t OwnerPointIndex; // 0x10
	FName OwnerSocketName; // 0x14
	FCrowWorldSplineUID LinkedSplineUID; // 0x1c
	int32_t LinkedPointIndex; // 0x2c
	FName LinkedSocketName; // 0x30
	FDateTime LastUpdated; // 0x38
};

struct FFullyLoadedPackagesInfo {
	EFullyLoadPackageType FullyLoadType; // 0x0
	FString Tag; // 0x8
	TArray<FName> PackagesToLoad; // 0x18
	TArray<UObject*> LoadedObjects; // 0x28
};

struct FActiveForceFeedbackEffect {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x0
};

struct FDropNoteInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FString Comment; // 0x18
};

struct FRigidBodyState {
	FVector_NetQuantize100 position; // 0x0
	FQuat Quaternion; // 0x10
	FVector_NetQuantize100 LinVel; // 0x20
	FVector_NetQuantize100 AngVel; // 0x2c
	char Flags; // 0x38
};

struct FNiagaraBool {
	int32_t Value; // 0x0
};

struct FMovieSceneGeometryCacheSectionTemplateParameters {
	FFrameNumber SectionStartTime; // 0x40
	FFrameNumber SectionEndTime; // 0x44
};

struct FWeaponSpreadPoseInfo {
	float Default; // 0x0
	float Increase; // 0x4
	float IncreaseMax; // 0x8
	float Decrease; // 0xc
};

struct FNavigationLink {
	FVector Left; // 0x30
	FVector Right; // 0x3c
};

struct FPatrolPointLink {
	AUPSPatrolPoint* PatrolPoint; // 0x0
	FGameplayTag LinkTag; // 0x8
};

struct FMaterialShadingModelField {
	uint16_t ShadingModelField; // 0x0
};

struct FTakeHitInfo {
	float ActualDamage; // 0x0
	UObject* DamageTypeClass; // 0x8
	TWeakObjectPtr<ACharacter> PawnInstigator; // 0x10
	TWeakObjectPtr<AActor> DamageCauser; // 0x18
	int32_t DamageEventClassID; // 0x20
	char bKilled : 1; // 0x24
	char EnsureReplicationByte; // 0x28
	FDamageEvent GeneralDamageEvent; // 0x30
	FPointDamageEvent PointDamageEvent; // 0x40
	FRadialDamageEvent RadialDamageEvent; // 0xf0
};

struct FScrollBarStyle {
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

struct FAnimNode_LayeredBoneBlend {
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

struct FCameraShakeDuration {
	float Duration; // 0x0
	ECameraShakeDurationType Type; // 0x4
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

struct FMovieSceneTrackInstanceComponent {
	UMovieSceneSection* Owner; // 0x0
	UMovieSceneTrackInstance* TrackInstanceClass; // 0x8
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

struct FChaosBreakingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinRadius; // 0x4
	float MinSpeed; // 0x8
	float MinMass; // 0xc
	float MaxDistance; // 0x10
	EChaosBreakingSortMethod SortMethod; // 0x14
};

struct FMovieSceneSubSectionData {
	TWeakObjectPtr<UMovieSceneSubSection> Section; // 0x0
	FGuid ObjectBindingId; // 0x8
	ESectionEvaluationFlags Flags; // 0x18
};

struct FCrowCarWeaponAnimData {
	char SpringArmId; // 0x0
};

struct FPaperTileSetTerrain {
	FString TerrainName; // 0x0
	int32_t CenterTileIndex; // 0x10
};

struct FCrowSafeBoxAreaInfo {
	FVector Location; // 0x0
	float Radius; // 0xc
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

struct FTagAndValue {
	FName Tag; // 0x0
	FString Value; // 0x8
};

struct FAttributesForEdge {
	FEdgeID EdgeID; // 0x0
	FMeshElementAttributeList EdgeAttributes; // 0x8
};

struct FMeshSectionInfoMap {
	TMap<uint32_t, FMeshSectionInfo> Map; // 0x0
};

struct FReplicatedVehicleState {
	float SteeringInput; // 0x0
	float ThrottleInput; // 0x4
	float BrakeInput; // 0x8
	float HandbrakeInput; // 0xc
	int32_t CurrentGear; // 0x10
};

struct FAnimSyncMarker {
	FName MarkerName; // 0x0
	float Time; // 0x8
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

struct FTransformMeshesTarget {
	UTransformProxy* TransformProxy; // 0x0
	UTransformGizmo* TransformGizmo; // 0x8
};

struct FAnimNode_ApplyAdditive {
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

struct FCrowWorldSyncNodeData {
	int32_t SyncNodeIndex; // 0x0
	TArray<FCrowWorldSyncBuildingData> BuildingDatas; // 0x8
	FCrowWorldSyncDestructible WorldPropsDestroyed; // 0x18
};

struct FPawnActionEvent {
	UPawnAction* Action; // 0x0
};

struct FCrowClothItem {
	ECrowItemType ItemType; // 0x0
	uint32_t ItemIndex; // 0x4
	USkeletalMeshComponent* SkeletalMeshComponent; // 0x8
	USkeletalMesh* SkeletalMeshAsset; // 0x18
	TArray<UMaterialInterface*> OverrideMaterials; // 0x20
	TArray<FCrowClothItemMaterial> ItemMaterials; // 0x30
};

struct FPrimaryAssetRulesOverride {
	FPrimaryAssetId PrimaryAssetId; // 0x0
	FPrimaryAssetRules Rules; // 0x10
};

struct FCLSCharacterHandIK {
	FTransform LeftHand; // 0x0
	FTransform RightHand; // 0x30
	bool bLeftValidIKTransform; // 0x60
	bool bRightValidIKTransform; // 0x61
};

struct FCrowShopItemData {
	UPaperSprite* ShopItemIcon; // 0x0
	FName ShopItemName; // 0x8
	ECrowShopItemStateType StateType; // 0x10
	uint32_t Cost; // 0x14
	uint32_t Count; // 0x18
};

struct FCrowWorldDestructionSetting {
	float DurationMin; // 0x0
	float DurationMax; // 0x4
	float ExplosionRadialDamage; // 0x8
	float ExplosionDamageRadius; // 0xc
	float ExplosionDamageDelay; // 0x10
	UCrowChainExplosionDamageType* ChainExplosionDamageType; // 0x18
	FCrowWorldDestructionSimulation Simulation; // 0x20
	FCrowWorldDestructionSimulationActor SimulationActor; // 0xb0
	FCrowWorldDestructionFxStart FxStart; // 0xc8
	FCrowWorldDestructionFxAttached FxAttached; // 0xf0
	FCrowWorldDestructionFxHitGround FxHitGround; // 0x110
};

struct FCrowUserExpTableRow {
	int32_t Level; // 0x8
	int64_t Exp; // 0x10
	FText ClassName; // 0x18
	FText ClassRankName; // 0x30
	UPaperSprite* ClassIcon; // 0x48
	UPaperSprite* ClassIconSmall; // 0x50
};

struct FRawDistributionFloat {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	UDistributionFloat* Distribution; // 0x28
};

struct FAutomationExecutionEntry {
	FAutomationEvent Event; // 0x0
	FString Filename; // 0x38
	int32_t LineNumber; // 0x48
	FDateTime Timestamp; // 0x50
};

struct FHairSolverSettings {
	bool EnableSimulation; // 0x0
	EGroomNiagaraSolvers NiagaraSolver; // 0x1
	TSoftObjectPtr<UNiagaraSystem> CustomSystem; // 0x8
	int32_t SubSteps; // 0x30
	int32_t IterationCount; // 0x34
};

struct FDatasmithAssetImportOptions {
	FName PackagePath; // 0x0
};

struct FLiveLinkFrameData {
	TArray<FTransform> Transforms; // 0x0
	TArray<FLiveLinkCurveElement> CurveElements; // 0x10
	FLiveLinkWorldTime WorldTime; // 0x20
	FLiveLinkMetaData MetaData; // 0x30
};

struct FComponentReference {
	AActor* OtherActor; // 0x0
	FName ComponentProperty; // 0x8
	FString PathToComponent; // 0x10
};

struct FLevelSequenceObject {
	LazyObjectProperty ObjectOrOwner; // 0x0
	FString ComponentName; // 0x20
	TWeakObjectPtr<UObject> CachedComponent; // 0x30
};

struct FPropertyAccessCopy {
	int32_t AccessIndex; // 0x0
	int32_t DestAccessStartIndex; // 0x4
	int32_t DestAccessEndIndex; // 0x8
	EPropertyAccessCopyType Type; // 0xc
};

struct FCurveTrack {
	FName CurveName; // 0x0
	TArray<float> CurveWeights; // 0x8
};

struct FCrowWorldActorLayout {
	char UseActorDestruction : 1; // 0x0
	char UseWorldActorLOD : 1; // 0x0
	char SkipItemDestroyedFlag : 1; // 0x0
	char DestroyedFlagInCluster : 1; // 0x0
	char DestroyedFlagInLandmark : 1; // 0x0
	char AutoDetectParentActor : 1; // 0x0
	TArray<FCrowWorldActorLayoutItem> LayoutItems; // 0x8
	FCrowWorldActorLayoutItemLookups LayoutItemLookups; // 0x18
	TArray<FCrowWorldLayoutItemAnimation> LayoutItemAnimations; // 0x58
	FCrowWorldActorDestruction ActorDestruction; // 0x68
	FCrowWorldActorLOD ActorLOD; // 0x80
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

struct FCrowVehicleSeatCell {
	ACrowPlayerStateBase* PlayerState; // 0x10
};

struct FNiagaraParameterStore {
	UObject* Owner; // 0x8
	TArray<FNiagaraVariableWithOffset> SortedParameterOffsets; // 0x10
	TArray<char> ParameterData; // 0x20
	TArray<UNiagaraDataInterface*> DataInterfaces; // 0x30
	TArray<UObject*> UObjects; // 0x40
};

struct FCrowWorldAnimationState {
	int16_t LayoutItemIndex; // 0x0
	int16_t DynamicStateIndex; // 0x2
	char bAnimationFinished : 1; // 0x4
	char bAnimateRotation : 1; // 0x4
	char bAnimateLocation : 1; // 0x4
	float TimeBegin; // 0x8
	float Duration; // 0xc
	UCurveFloat* AnimationCurve; // 0x10
	FVector SlideLocationFrom; // 0x18
	FVector SlideLocationTo; // 0x24
	FVector HingeLocation; // 0x30
	FQuat HingeRotationFrom; // 0x40
	FQuat HingeRotationTo; // 0x50
};

struct FCrowMatchInfo {
	ECrowGameMode GameMode; // 0x0
	TArray<uint32_t> GameMapIndexArray; // 0x8
};

struct FVertexToMove {
	FVertexID VertexID; // 0x0
	FVector NewVertexPosition; // 0x4
};

struct FAnimSlotGroup {
	FName GroupName; // 0x0
	TArray<FName> SlotNames; // 0x8
};

struct FCrowWorldStaticMeshMaterialSet {
	uint32_t HashKey; // 0x8
	TSoftClassPtr<UObject> ParentWorldActorClass; // 0x10
	TArray<TSoftObjectPtr<UMaterialInstance>> MaterialPaths; // 0x38
	TArray<uint32_t> TextureNums; // 0x48
};

struct FAnimNode_RotorHandler {
	TArray<FRotorAnimData> RotorAnimDatas; // 0xd0
};

struct FStaticParameterBase {
	FMaterialParameterInfo ParameterInfo; // 0x0
	bool bOverride; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FHairCardsClusterSettings {
	float ClusterDecimation; // 0x0
	EHairCardsClusterType Type; // 0x4
	bool bUseGuide; // 0x5
};

struct FCrowLandWheelsEngineSetting {
	bool Debug; // 0x0
	FCrowVehicleInputSetting AccelerationInput; // 0x4
	FCrowVehicleInputSetting BrakeInput; // 0xc
	float MaxRPM; // 0x14
	float MaxRPMReverse; // 0x18
	float MaxTorque; // 0x1c
	float IdleBrake; // 0x20
	FRuntimeFloatCurve TorqueCurveNormalized; // 0x28
	TArray<FCrowLandWheelsGearSetting> GearBox; // 0xb0
	float GearFinalRatio; // 0xc0
	float GearSwitchDelay; // 0xc4
	float GearKeepDelay; // 0xc8
	float GearResetRPM; // 0xcc
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

struct FCrowWorldLayoutItemAnim {
	float Duration; // 0x0
	UCurveFloat* AnimationCurve; // 0x8
	UAkAudioEvent* Sound; // 0x10
	bool HasQuickAction; // 0x18
	float DurationQuick; // 0x1c
	UCurveFloat* AnimationCurveQuick; // 0x20
	UAkAudioEvent* SoundQuick; // 0x28
};

struct FAREnvironmentProbeUpdatePayload {
	FTransform WorldTransform; // 0x0
};

struct FActorSequenceObjectReferences {
	TArray<FActorSequenceObjectReference> Array; // 0x0
};

struct FEventGraphFastCallPair {
	UFunction* FunctionToPatch; // 0x0
	int32_t EventGraphCallOffset; // 0x8
};

struct FViewTargetTransitionParams {
	float BlendTime; // 0x0
	EViewTargetBlendFunction BlendFunction; // 0x4
	float BlendExp; // 0x8
	char bLockOutgoing : 1; // 0xc
};

struct FMaterialRemapIndex {
	uint32_t ImportVersionKey; // 0x0
	TArray<int32_t> MaterialRemap; // 0x8
};

struct FEnvQueryRequest {
	UEnvQuery* QueryTemplate; // 0x0
	UObject* Owner; // 0x8
	UWorld* World; // 0x10
};

struct FCrowTireAndWheelSetting {
	bool Debug; // 0x0
	bool IsDrivingWheel; // 0x1
	bool ApplyBrake; // 0x2
	FCrowLandWheelsWheelSetting Wheel; // 0x4
	FCrowLandWheelsBrakeSetting Brake; // 0x14
	FCrowLandWheelsFrictionSetting Friction; // 0x20
	FCrowLandWheelsSteeringSetting Steering; // 0x38
	FCrowLandWheelsSuspensionSetting Suspension; // 0xd0
	FCrowLandWheelsDamageSetting Damage; // 0xf0
	float StationaryTime; // 0x104
	float StationaryDistanceSquare; // 0x108
	float StationaryRotationSpeedDegree; // 0x10c
};

struct FVehicleEventSetup {
	FVehicleEventParameterFactor EventParameterFactor; // 0x0
	TArray<FVehicleEvent> EventList; // 0x10
	TArray<FVehicleEvent> SubEventList; // 0x20
};

struct FCrowWorldDestructionSyncData {
	FVector Origin; // 0x0
	float MaxRadius; // 0xc
	TMap<uint32_t, FCrowWorldDestructionSyncDataActor> ActorDataCollection; // 0x10
	TArray<uint32_t> FullyDestroyedActors; // 0x60
};

struct FBPVariableMetaDataEntry {
	FName DataKey; // 0x0
	FString DataValue; // 0x8
};

struct FPreviewMeshCollectionEntry {
	TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x0
};

struct FMaterialSpriteElement {
	UMaterialInterface* Material; // 0x0
	UCurveFloat* DistanceToOpacityCurve; // 0x8
	char bSizeIsInScreenSpace : 1; // 0x10
	float BaseSizeX; // 0x14
	float BaseSizeY; // 0x18
	UCurveFloat* DistanceToSizeCurve; // 0x20
};

struct FMovieSceneActorReferenceData {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneActorReferenceKey> KeyValues; // 0x40
};

struct FVehicleEventSync {
	bool IsStartEvent; // 0x0
	UCrowFxReplicatorComponent* FxReplicator; // 0x8
};

struct FMovieSceneSequenceID {
	uint32_t Value; // 0x0
};

struct FFoliageTypeObject {
	UObject* FoliageTypeObject; // 0x0
	UFoliageType* TypeInstance; // 0x8
	bool bIsAsset; // 0x10
	UFoliageType_InstancedStaticMesh* Type; // 0x18
};

struct FCrowLandWheelsBrakeSetting {
	float MaxTorque; // 0x0
	float MaxTorqueNoSlip; // 0x4
	float Speed; // 0x8
};

struct FCrowHLODTableRow {
	FName PackageName; // 0x8
	bool Build; // 0x10
};

struct FCrowPingVehicleSubInfo {
	FText ChatMessageStringKey; // 0x0
	UAkAudioEvent* PingSound; // 0x18
};

struct FAssetEditorOrbitCameraPosition {
	bool bIsSet; // 0x0
	FVector CamOrbitPoint; // 0x4
	FVector CamOrbitZoom; // 0x10
	FRotator CamOrbitRotation; // 0x1c
};

struct FActorLayer {
	FName Name; // 0x0
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

struct FCrowLandWheelsStatusRotation {
	float Rotation; // 0x0
	float RotationSpeed; // 0x4
	float RotationTorque; // 0x8
	float SlipForward; // 0xc
	float SlipRight; // 0x10
	float SlipRatio; // 0x14
};

struct FDebugCameraControllerSettingsViewModeIndex {
	EViewModeIndex ViewModeIndex; // 0x8
};

struct FNiagaraSystemCompileRequest {
	TArray<UObject*> RootObjects; // 0x8
};

struct FDatasmithMeshSectionInfoMapTemplate {
	TMap<uint32_t, FDatasmithMeshSectionInfoTemplate> Map; // 0x0
};

struct FCrowWeaponAniStateInfo {
	ECrowWeaponState WeaponState; // 0x0
	ECrowWeaponFireState FireState; // 0x1
	bool bIsFiring; // 0x2
	bool bIsReloadShort; // 0x3
	bool bIsLoopFireAni; // 0x4
};

struct FAnimNode_CarDashBoardHandler {
	FCrowCarDashBoardHandlerAnimSetup SpeedAnimSetup; // 0xc8
	FCrowCarDashBoardHandlerAnimSetup RPMAnimSetup; // 0xd4
	FBoneReference SpeedBoneReference; // 0xe0
	FBoneReference RPMBoneReference; // 0xf0
	TArray<FBoneReference> BoneReferences; // 0x100
};

struct FARPoseUpdatePayload {
	FTransform WorldTransform; // 0x0
	TArray<FTransform> JointTransforms; // 0x30
};

struct FCrowWorldMaterialParameterScalar {
	FName ParameterName; // 0x0
	float DefaultValue; // 0x8
};

struct FNamedFilmbackPreset {
	FString Name; // 0x0
	FCameraFilmbackSettings FilmbackSettings; // 0x10
};

struct FCrowUserInfoBase {
	uint64_t ServerKey; // 0x0
	FString AuthToken; // 0x8
	FString NickName; // 0x18
	uint32_t Level; // 0x28
	uint64_t Exp; // 0x30
	uint64_t BattlePassExp; // 0x38
	uint64_t CharacterInvenNo; // 0x40
	char Team; // 0x48
	TArray<FCrowItemData> InvenItemArray; // 0x50
	TArray<FCrowWeaponLevel> WeaponLevelArray; // 0x60
	TArray<FCrowWeaponData> UnlockedWeaponArray; // 0x70
	TArray<int32_t> UnlockedEyeColorArray; // 0x80
	TArray<FCrowWeaponAccData> UnlockWeaponEquipAccArray; // 0x90
	TArray<FCrowItemData> ItemEquipmentArray; // 0xa0
	TArray<FCrowSquadWeapon> ProvidedSquadWeaponArray; // 0xb0
	FCrowUserCharacterInfo CharacterInfo; // 0xc0
	FString SquadKey; // 0xf8
	uint64_t SquadOrder; // 0x108
	uint64_t Coin; // 0x110
	FString SavaedUserOptions; // 0x118
	TArray<uint32_t> UnlockedWeaponSkinArray; // 0x128
	TArray<uint32_t> UnlockesWeaponStickerArray; // 0x138
	TArray<int32_t> UnlockesSprayArray; // 0x148
	TArray<int32_t> UnlockedTattooArray; // 0x158
	TMap<int32_t, int32_t> SpraySlotArray; // 0x168
	TMap<int32_t, FCrowWeaponLoadoutPreset> WeaponLoadoutPresetMap; // 0x1b8
	TMap<uint32_t, uint32_t> WeaponSkinApplyInfo; // 0x208
	TMap<char, FCrowOutfitPreset> CharacterOutfitPresetMap; // 0x258
	TArray<uint32_t> EmotionIndexs; // 0x2a8
	TArray<uint32_t> EmotionIndexsInSlot; // 0x2b8
	TArray<uint32_t> ResultMVPIndexs; // 0x2c8
	uint32_t ResultMVPIndex; // 0x2d8
	FCrowWeaponLoadoutPreset SquadWeaponLoadoutPreset; // 0x2e0
	int32_t SelectedLoadoutPreset; // 0x358
	char SelectedOutfitPreset; // 0x35c
	uint64_t RCPPoint; // 0x360
	uint64_t GPoint; // 0x368
	TArray<FCrowNewItem> NewItemArray; // 0x370
	TArray<FCrowNewItem> NewItemShopInven; // 0x380
	TArray<uint32_t> VehicleSkinArray; // 0x390
	TMap<uint32_t, uint32_t> VehicleSkinEquipMap; // 0x3a0
	TArray<FCrowBuffData> ActivatedBuffArray; // 0x3f0
	TMap<char, char> RandomBoxBuyCount; // 0x400
	TArray<uint32_t> UnlockedParachuteSkinArray; // 0x450
	uint32_t ParachuteSkinIndex; // 0x460
	TMap<uint64_t, FCrowPartyInvitation> SendInvatePartyUserMap; // 0x468
	TMap<uint64_t, FCrowPartyInvitation> ReceivedInvatePartyUserMap; // 0x4b8
	TMap<uint64_t, FCrowGameFriendInfo> FollowFriendInfoMap; // 0x508
	TMap<uint64_t, FCrowGameFriendInfo> FriendInfoMap; // 0x558
	TMap<uint64_t, FCrowGameFriendInfo> RequestFriendInfoMap; // 0x5a8
	TMap<uint64_t, FCrowGameFriendInfo> SentFriendInfoMap; // 0x5f8
	TMap<uint64_t, FCrowRecentGamePlayUserInfo> RecentGamePlayUserInfoMap; // 0x648
	TMap<uint64_t, FCrowGameFriendInfo> SearchFriendInfoMap; // 0x698
	TMap<uint64_t, FCrowPartyMember> PartyMemberMap; // 0x6e8
	ECrowCommunityFollowOption AllowFollow; // 0x738
	ECrowCommunityPartyOption AllowParty; // 0x739
	char EnterParty; // 0x73a
	FCrowParty Party; // 0x740
	bool MatchExist; // 0x780
	FString Ip; // 0x788
	uint32_t Port; // 0x798
	ECrowGameMode MapMode; // 0x79c
	uint32_t MapIndex; // 0x7a0
	ECrowCameraLimitMode CameraLimitMode; // 0x7a4
	ECrowControlType ControlType; // 0x7a5
	int32_t DailyMissionEndDate; // 0x7a8
	int32_t WeeklyMissionEndDate; // 0x7ac
	TArray<FCrowMissionInfo> MissionArray; // 0x7b0
	TArray<FCrowItemData> ShopInventoryItems; // 0x7c0
	FCrowBattlePassSeasonData UserBattlePassSeasonData; // 0x7d0
	FCrowServerRegionInfo ServerRegionInfo; // 0x7f8
};

struct FAttributesForVertex {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexAttributes; // 0x8
};

struct FCrowWorldSyncGrid {
	float GridSize; // 0x0
	FVector2D WorldOrigin2D; // 0x4
};

struct FEasingComponentData {
	UMovieSceneSection* Section; // 0x0
};

struct FMagicLeapEyeBlinkState {
	bool LeftEyeBlinked; // 0x0
	bool RightEyeBlinked; // 0x1
};

struct FCrowAssistDamageInfo {
	float ActualDamage; // 0x0
	ECrowDamageCauser DamageCauser; // 0x4
	ECrowItemType ItemType; // 0x5
	uint16_t ItemIndex; // 0x6
	float Percent; // 0x8
};

struct FCrowWoldSplineDeformData {
	TMap<UStaticMesh*, FCrowWoldSplineDeformSetting> Setting; // 0x0
};

struct FCrowCharacterAnimPrivateWeaponTPRow {
	UAnimSequence* StandIdle; // 0x8
	UAnimSequence* CrouchIdle; // 0x10
	UAnimSequence* ProneIdle; // 0x18
	UAnimSequence* StandGundown; // 0x20
	UAnimSequence* CrouchGundown; // 0x28
	UAnimSequenceBase* StandRelaxed; // 0x30
	UAnimSequenceBase* CrouchRelaxed; // 0x38
	UAnimSequence* OverlayLeftHand; // 0x40
	UAnimSequence* OverlayRightHand; // 0x48
	UBlendSpace* StandMovement; // 0x50
	UBlendSpace* CrouchMovement; // 0x58
	UBlendSpace* ProneMovement; // 0x60
	UBlendSpace* StandMoveGundown; // 0x68
	UBlendSpace* CrouchMoveGundown; // 0x70
	UAnimSequence* JumpStart; // 0x78
	UAnimSequence* JumpApex; // 0x80
	UAnimSequence* JumpLoop; // 0x88
	UAnimSequence* JumpFlail; // 0x90
	UAnimSequence* JumpLand; // 0x98
	UAnimSequence* JumpLandAdditive; // 0xa0
	UAnimSequence* JumpLandDelay; // 0xa8
	UAnimSequence* StandToCrouch; // 0xb0
	UAnimSequence* StandToProne; // 0xb8
	UAnimSequence* CrouchToStand; // 0xc0
	UAnimSequence* CrouchToProne; // 0xc8
	UAnimSequence* ProneToStand; // 0xd0
	UAnimSequence* ProneToCrouch; // 0xd8
	UAnimSequence* StandTurnLeft; // 0xe0
	UAnimSequence* StandTurnRight; // 0xe8
	UAnimSequence* CrouchTurnLeft; // 0xf0
	UAnimSequence* CrouchTurnRight; // 0xf8
	UAnimSequence* StandPeekLeftStart; // 0x100
	UAnimSequence* StandPeekLeftLoop; // 0x108
	UAnimSequence* StandPeekLeftEnd; // 0x110
	UAnimSequence* StandPeekRightStart; // 0x118
	UAnimSequence* StandPeekRightLoop; // 0x120
	UAnimSequence* StandPeekRightEnd; // 0x128
	UAnimSequence* CrouchPeekLeftStart; // 0x130
	UAnimSequence* CrouchPeekLeftLoop; // 0x138
	UAnimSequence* CrouchPeekLeftEnd; // 0x140
	UAnimSequence* CrouchPeekRightStart; // 0x148
	UAnimSequence* CrouchPeekRightLoop; // 0x150
	UAnimSequence* CrouchPeekRightEnd; // 0x158
	UAnimSequence* Equip; // 0x160
	UAnimSequence* UnEquip; // 0x168
	UAimOffsetBlendSpace* DefaultAimOffset; // 0x170
	UAimOffsetBlendSpace* StandAimOffset; // 0x178
	UAimOffsetBlendSpace* CrouchAimOffset; // 0x180
	UAimOffsetBlendSpace* ProneAimOffset; // 0x188
};

struct FMovieSceneRootEvaluationTemplateInstance {
	TWeakObjectPtr<UMovieSceneSequence> WeakRootSequence; // 0x0
	UMovieSceneCompiledDataManager* CompiledDataManager; // 0x8
	UMovieSceneEntitySystemLinker* EntitySystemLinker; // 0x18
	TMap<FMovieSceneSequenceID, UObject*> DirectorInstances; // 0x90
};

struct FCrowMainMedalInfo {
	uint32_t Index; // 0x0
	uint32_t GroupIndex; // 0x4
	uint32_t CompleteCount; // 0x8
	uint32_t TotalCompleteCount; // 0xc
	uint32_t Order; // 0x10
	ECrowMedalType MedalType; // 0x14
};

struct FBlueprintInputAxisKeyDelegateBinding {
	FKey AxisKey; // 0x8
	FName FunctionNameToBind; // 0x20
};

struct FTriggerCollisionInfo {
	FName ID; // 0x0
	FName TargetCollisionName; // 0x8
	UPrimitiveComponent* TargetCollision; // 0x10
};

struct FLocationServicesData {
	float Timestamp; // 0x0
	float Longitude; // 0x4
	float Latitude; // 0x8
	float HorizontalAccuracy; // 0xc
	float VerticalAccuracy; // 0x10
	float Altitude; // 0x14
};

struct FCameraCutInfo {
	FVector Location; // 0x0
	float Timestamp; // 0xc
};

struct FSoundWaveSpectralTimeData {
	TArray<FSoundWaveSpectralDataEntry> Data; // 0x0
	float TimeSec; // 0x10
};

struct FRedirector {
	FName OldName; // 0x0
	FName NewName; // 0x8
};

struct FEyeTrackerGazeData {
	FVector GazeOrigin; // 0x0
	FVector GazeDirection; // 0xc
	FVector FixationPoint; // 0x18
	float ConfidenceValue; // 0x24
};

struct FCrowWorldMaterialParameterOverride {
	UMaterialParameterCollection* TargetCollection; // 0x0
	TArray<FCrowWorldMaterialParameterScalar> ScalarValues; // 0x8
	TArray<FCrowWorldMaterialParameterVector> VectorValues; // 0x18
};

struct FRealCurve {
	float DefaultValue; // 0x68
	ERichCurveExtrapolation PreInfinityExtrap; // 0x6c
	ERichCurveExtrapolation PostInfinityExtrap; // 0x6d
};

struct FCrowSoundScriptData {
	ECrowSoundScriptConditionType ConditionType; // 0x0
	UAkAudioEvent* SoundScriptEventRed_M; // 0x8
	UAkAudioEvent* SoundScriptEventBlue_M; // 0x10
	UAkAudioEvent* SoundScriptEventRed_F; // 0x18
	UAkAudioEvent* SoundScriptEventBlue_F; // 0x20
	float Parameter; // 0x28
	float SoundScriptCoolTime; // 0x2c
	float Distance; // 0x30
	TArray<ECrowGameMode> IgnoreGameModes; // 0x38
};

struct FCrowWorldSyncHubStaticMeshInfoRow {
	TSoftObjectPtr<UStaticMesh> StaticMesh; // 0x8
	uint32_t Tris; // 0x30
	char LODNum; // 0x34
	char MaterialNum; // 0x35
	char OverrideMaterialNum; // 0x36
	int16_t TextureNum; // 0x38
	float TextureRuntimeMemory; // 0x3c
	TArray<uint32_t> LODTris; // 0x40
	TArray<uint32_t> LODMaterialNums; // 0x50
	uint32_t LastLODMaterialNum; // 0x60
};

struct FAkAmbSoundCheckpointRecord {
	bool bCurrentlyPlaying; // 0x0
};

struct FPawnActionStack {
	UPawnAction* TopAction; // 0x0
};

struct FCrowWeaponPartsTableRow {
	TMap<FString, FCrowPartModelInfo> Models; // 0x168
	TArray<FString> WeaponArray; // 0x1b8
	FCrowWeaponPartsOptions Options; // 0x1c8
	UPaperSprite* CombindIcon; // 0x210
	TArray<UPaperSprite*> CombindIcons; // 0x218
	TArray<FName> StickerSocketNames; // 0x228
	int32_t StickerSocketMaxCount; // 0x238
	TArray<FVector> StickerScale; // 0x240
	TArray<float> StickerAngle; // 0x250
	TArray<int32_t> DefaultSticker; // 0x260
	FCrowPartModelInfo DummyInfo; // 0x270
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

struct FAIDataProviderTypedValue {
	UObject* PropertyType; // 0x20
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

struct FRollbackNetStartupActorInfo {
	UObject* Archetype; // 0x8
	ULevel* Level; // 0x38
	TArray<UObject*> ObjReferences; // 0xa0
};

struct FAkMidiProgramChange {
	char ProgramNum; // 0x2
};

struct FStaticMeshVertexColorLODData {
	TArray<FPaintedVertex> PaintedVertices; // 0x0
	TArray<FColor> VertexBufferColors; // 0x10
	uint32_t LODIndex; // 0x20
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

struct FHardwareCursorReference {
	FName CursorPath; // 0x0
	FVector2D HotSpot; // 0x8
};

struct FMovieSceneAudioSectionTemplate {
	UMovieSceneAudioSection* AudioSection; // 0x20
};

struct FSoundSubmixSpectralAnalysisBandSettings {
	float BandFrequency; // 0x0
	int32_t AttackTimeMsec; // 0x4
	int32_t ReleaseTimeMsec; // 0x8
	float QFactor; // 0xc
};

struct FCrowWorldDestructionLinkInfo {
	int32_t IndexOrigin; // 0x0
	int32_t Count; // 0x4
};

struct FAppleImageUtilsImageConversionResult {
	FString Error; // 0x0
	TArray<char> ImageData; // 0x10
};

struct FCrowMiningPointInfo {
	ECrowMiningPointState CurrentState; // 0x0
	char OwnerTeamID; // 0x1
};

struct FCrowWeaponTimeChecker {
	ACrowPlayerControllerBase* PlayerController; // 0x18
	TArray<FCrowWeaponTimeInfo> TimeInfoArray; // 0x20
	TArray<FCrowWeaponTimeInfo> TimeStamps; // 0x30
	int32_t YellowFlagCount; // 0x40
	int32_t TimePenalty; // 0x44
	FCrowWeaponTimeInfo LastTimeInfo; // 0x48
	float ClientOffsetTotal; // 0x68
	float ClientOffsetAverage; // 0x6c
	float ClientOffsetVariance; // 0x70
	float ClientTimeRatio; // 0x74
	int32_t TimeDeviationErrorCount; // 0x78
	int32_t TimeDeviationValidCount; // 0x7c
	int32_t TimeRatioErrorCount; // 0x80
	int32_t TimeRatioValidCount; // 0x84
};

struct FCrowWeaponPartsDataServer {
	uint16_t WeaponKey; // 0x0
	ECrowWeaponPartsType PartsType; // 0x2
	uint16_t PartsIndex; // 0x4
};

struct FWeightmapData {
	TArray<UTexture2D*> Textures; // 0x0
	TArray<FWeightmapLayerAllocationInfo> LayerAllocations; // 0x10
	TArray<ULandscapeWeightmapUsage*> TextureUsages; // 0x20
};

struct FLevelCollection {
	AGameStateBase* GameState; // 0x8
	UNetDriver* NetDriver; // 0x10
	UDemoNetDriver* DemoNetDriver; // 0x18
	ULevel* PersistentLevel; // 0x20
	TSet<ULevel*> Levels; // 0x28
};

struct FSubmixEffectFlexiverbSettings {
	float PreDelay; // 0x0
	float DecayTime; // 0x4
	float RoomDampening; // 0x8
	int32_t Complexity; // 0xc
};

struct FNiagaraSystemScalabilityOverrides {
	TArray<FNiagaraSystemScalabilityOverride> Overrides; // 0x0
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

struct FPreviewAssetAttachContainer {
	TArray<FPreviewAttachedObjectPair> AttachedObjects; // 0x0
};

struct FCrowWorldDestructionSyncCacheItem {
	ACrowWorldActor* WorldActor; // 0x0
	int16_t LayoutItemIndex; // 0x8
};

struct FMagicLeapImageTargetState {
	EMagicLeapImageTargetStatus TrackingStatus; // 0x0
	FVector Location; // 0x4
	FRotator Rotation; // 0x10
};

struct FCrowItemTableBaseRow {
	FString TextIndex; // 0x10
	FText Name; // 0x20
	FText ItemTypeName; // 0x38
	FText Description; // 0x50
	FText ItemInfoWidgetDesc; // 0x68
	bool bIsHidden; // 0x80
	ECrowItemGrade ItemGrade; // 0x81
	UPaperSprite* DefaultIcon; // 0x88
	UPaperSprite* PictogramIcon; // 0x90
	uint32_t MaxStackCount; // 0x98
	char InventorySortOrder; // 0x9c
	uint32_t MaxInvenItemCount; // 0xa0
	bool ItemDeleteCheck; // 0xa4
	float ItemDeleteTime; // 0xa8
	FCrowGameIconDisplayInfo IconDisplayInfo; // 0xb0
	UAkAudioEvent* PingSound; // 0x138
	float MeshBoundsScale; // 0x140
	bool CalcBoundsOnDedicatedServer; // 0x144
	UAkAudioEvent* DragStartSound; // 0x148
	UAkAudioEvent* EquipSound; // 0x150
	UAkAudioEvent* AddInvenSound; // 0x158
	UAkAudioEvent* DropItemSound; // 0x160
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

struct FCrowBuildingDynamicParts {
	FCrowBuildingDynamicPartsAsset Asset; // 0x8
	FCrowBuildingDynamicPartsDestruction Destruction; // 0x20
	FCrowBuildingDynamicPartsAnim AnimOpen; // 0x90
	FCrowBuildingDynamicPartsAnim AnimClose; // 0xc0
	FCrowBuildingDynamicPartsAnim AnimBlocked; // 0xf0
};

struct FInt32RangeBound {
	ERangeBoundTypes Type; // 0x0
	int32_t Value; // 0x4
};

struct FWaterBrushEffectTerracing {
	float TerraceAlpha; // 0x0
	float TerraceSpacing; // 0x4
	float TerraceSmoothness; // 0x8
	float MaskLength; // 0xc
	float MaskStartOffset; // 0x10
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

struct FSimulatedRootMotionReplicatedMove {
	float Time; // 0x0
	FRepRootMotionMontage RootMotion; // 0x8
};

struct FNiagaraRandInfo {
	int32_t Seed1; // 0x0
	int32_t Seed2; // 0x4
	int32_t Seed3; // 0x8
};

struct FCrowGroupSetWeight {
	uint32_t ItemIndex; // 0x0
	float Weight; // 0x4
};

struct FCrowScoreListItemData {
	FString PlayerNickName; // 0x0
	ECrowSquadRole SquadRole; // 0x10
	bool bIsLocalPlayer; // 0x11
	bool bIsDeath; // 0x12
	char KillCount; // 0x13
	char DeathCount; // 0x14
};

struct FComboBoxStyle {
	FComboButtonStyle ComboButtonStyle; // 0x8
	FSlateSound PressedSlateSound; // 0x3c0
	FSlateSound SelectionChangeSlateSound; // 0x3d8
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

struct FBrushEffectCurlNoise {
	float Curl1Amount; // 0x0
	float Curl2Amount; // 0x4
	float Curl1Tiling; // 0x8
	float Curl2Tiling; // 0xc
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

struct FSkyCreatorWindSettings {
	float LowCloudWindDirection; // 0x0
	float LowCloudWindSpeed; // 0x4
	float HighCloudWindDirection; // 0x8
	float HighCloudWindSpeed; // 0xc
	float CloudNoiseWindDirection; // 0x10
	float CloudNoiseWindSpeedHorizontal; // 0x14
	float CloudNoiseWindSpeedVertical; // 0x18
	float PrecipitationWindDirection; // 0x1c
	float PrecipitationWindSpeed; // 0x20
};

struct FBoolParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneBoolChannel ParameterCurve; // 0x8
};

struct FBranchFilter {
	FName BoneName; // 0x0
	int32_t BlendDepth; // 0x8
};

struct FLiveLinkLightFrameData {
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

struct FUdpMockMessage {
	TArray<char> Data; // 0x0
};

struct FCrowConquestPointInfo {
	char RedTeam_ToFriendly_OnePeople; // 0x0
	char RedTeam_ToFriendly_TwoPeople; // 0x1
	char RedTeam_ToFriendly_ThreePeople; // 0x2
	char RedTeam_ToFriendly_MorePeople; // 0x3
	char RedTeam_ToNeutral_OnePeople; // 0x4
	char RedTeam_ToNeutral_TwoPeople; // 0x5
	char RedTeam_ToNeutral_ThreePeople; // 0x6
	char RedTeam_ToNeutral_MorePeople; // 0x7
	char BlueTeam_ToFriendly_OnePeople; // 0x8
	char BlueTeam_ToFriendly_TwoPeople; // 0x9
	char BlueTeam_ToFriendly_ThreePeople; // 0xa
	char BlueTeam_ToFriendly_MorePeople; // 0xb
	char BlueTeam_ToNeutral_OnePeople; // 0xc
	char BlueTeam_ToNeutral_TwoPeople; // 0xd
	char BlueTeam_ToNeutral_ThreePeople; // 0xe
	char BlueTeam_ToNeutral_MorePeople; // 0xf
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

struct FQuat {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FSkyCreatorExposureSettings {
	float ExposureCompensation; // 0x0
};

struct FModularHandlerParam {
	AActor* TargetActor; // 0x0
	FCrowBuildingPartsInfo PartsInfo; // 0x10
};

struct FMovieSceneIntegerChannel {
	TArray<FFrameNumber> Times; // 0x8
	int32_t DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x1c
	TArray<int32_t> Values; // 0x20
};

struct FSourceEffectWaveShaperSettings {
	float Amount; // 0x0
	float OutputGainDb; // 0x4
};

struct FCrowAICharacterParameter {
	float SightRadius; // 0x0
	float LoseSightRadius; // 0x4
	float LoseSightRadiusTime; // 0x8
	float IgnoreSightDegreesRadius; // 0xc
	float FindCoverPointRadius; // 0x10
	float IgnoreCoverPointDistanceFromAIBot; // 0x14
	float IgnoreCoverPointDistanceFromTarget; // 0x18
	float DamageNotifyRadius; // 0x1c
};

struct FCrowWeaponPartSkinListTable {
	ECrowItemType WeaponPartsType; // 0x0
	TArray<FCrowWeaponPartSkinTable> WeaponPartsSkins; // 0x8
};

struct FAkWwiseObjectDetails {
	FString ItemName; // 0x0
	FString ItemPath; // 0x10
	FString ItemId; // 0x20
};

struct FCachedAnimAssetPlayerData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FMovieSceneCameraAnimSectionData {
	UCameraAnim* CameraAnim; // 0x0
	float PlayRate; // 0x8
	float PlayScale; // 0xc
	float BlendInTime; // 0x10
	float BlendOutTime; // 0x14
	bool bLooping; // 0x18
};

struct FCrowLandWheelsStatusSurface {
	char IsContacting : 1; // 0x0
	char HitCount; // 0x1
	float AngleDot; // 0x4
	float NormalRatio; // 0x8
	float EngineTorqueMultiply; // 0xc
	float FrictionMultiply; // 0x10
	AActor* OtherActor; // 0x18
	USkeletalMeshComponent* OtherSKC; // 0x20
	UPhysicalMaterial* OverlapMaterial; // 0x28
	FVector OverlapPosition; // 0x30
	FHitResult HitResult; // 0x3c
};

struct FCompositeSection {
	FName SectionName; // 0x30
	float StartTime; // 0x38
	FName NextSectionName; // 0x3c
	TArray<UAnimMetaData*> MetaData; // 0x48
};

struct FCrowWorldActorLOD {
	float BoundingSphereRadius; // 0x0
	FVector BoundingSphereCenter; // 0x4
	TArray<float> LODLevelCameraDistanceOverride; // 0x10
	TArray<FCrowWorldActorMeshLOD> MeshLODArray; // 0x20
	TArray<FBitFlagArray> LayoutItemShowFlags; // 0x30
	TArray<FBitFlagArray> MeshLODShowFlags; // 0x40
	FBitFlagArray CameraDistanceOverrideFlags; // 0x50
	TArray<float> CameraDistanceOverrides; // 0x68
};

struct FAnimNode_CrowLandWheelsHandler {
	TMap<FName, FCrowLandWheelsHandlerAnimSetup> WheelAnimSetup; // 0xc8
	TArray<FLandWheelLookupData> Wheels; // 0x118
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

struct FLandscapeComponentMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
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

struct FSlateChildSize {
	float Value; // 0x0
	ESlateSizeRule SizeRule; // 0x4
};

struct FOverlapResult {
	TWeakObjectPtr<AActor> Actor; // 0x0
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x8
	char bBlockingHit : 1; // 0x14
};

struct FCrowTestWeapon {
	uint32_t WeaponIndex; // 0x0
	uint32_t SkinIndex; // 0x4
	uint32_t PartsBarrel; // 0x8
	uint32_t PartsMagazine; // 0xc
	uint32_t PartsMuzzle; // 0x10
	uint32_t PartsPistolGrip; // 0x14
	uint32_t PartsPrimarySight; // 0x18
	uint32_t PartsSecondarySight; // 0x1c
	uint32_t PartsSideBarrel; // 0x20
	uint32_t PartsStock; // 0x24
	uint32_t PartsUnderBarrel; // 0x28
	uint32_t CharmIndex; // 0x2c
	TArray<int32_t> StickerIndex; // 0x30
};

struct FSkyCreatorSkyAtmosphereSettings {
	float RayleighScatteringScale; // 0x0
	FLinearColor RayleighScattering; // 0x4
	float RayleighExponentialDistribution; // 0x14
	float MieScatteringScale; // 0x18
	FLinearColor MieScattering; // 0x1c
	float MieAbsorptionScale; // 0x2c
	FLinearColor MieAbsorption; // 0x30
	float MieAnisotropy; // 0x40
	float MieExponentialDistribution; // 0x44
	float AbsorptionScale; // 0x48
	FLinearColor Absorption; // 0x4c
	FLinearColor SkyLuminanceFactor; // 0x5c
};

struct FWeaponAnimSequence {
	UAnimSequence* Pawn1P; // 0x0
	UAnimSequence* Pawn3P; // 0x8
};

struct FMovieSceneEventChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneEvent> KeyValues; // 0x18
};

struct FCrowLerpTranslationInfo {
	FVector2D NewTranslation; // 0x0
	FVector2D StartTranslation; // 0x8
	FVector2D EndTranslation; // 0x10
	FVector2D CurrentTranslation; // 0x18
	float Alpha; // 0x20
	float IncAlpha; // 0x24
	float Speed; // 0x28
};

struct FAkGeometrySurfacePropertiesToMap {
	TSoftObjectPtr<UAkAcousticTexture> AcousticTexture; // 0x0
	float OcclusionValue; // 0x28
};

struct FMediaSoundComponentSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
};

struct FMovieSceneEvaluationOperand {
	FGuid ObjectBindingId; // 0x0
	FMovieSceneSequenceID SequenceID; // 0x10
};

struct FInterpCurveTwoVectors {
	TArray<FInterpCurvePointTwoVectors> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FCrowWorldSplinePoleConnectionInfo {
	TMap<FName, FName> CorrespondingSocket; // 0x0
};

struct FCrowLobbyNoiseAnimInfo {
	TArray<UAnimMontage*> NoiseAnimations; // 0x0
	int32_t MinSecond; // 0x10
	int32_t MaxSecond; // 0x14
	UAnimMontage* PrePlayNoiseAnimations; // 0x18
};

struct FVectorDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FAnimNode_CopyPoseFromMesh {
	TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComponent; // 0x10
	char bUseAttachedParent : 1; // 0x18
	char bCopyCurves : 1; // 0x18
	bool bCopyCustomAttributes; // 0x19
	char bUseMeshPose : 1; // 0x1a
	FName RootBoneToCopy; // 0x1c
};

struct FHairAdvancedRenderingSettings {
	bool bUseStableRasterization; // 0x0
	bool bScatterSceneLighting; // 0x1
};

struct FCrowWorldStaticMeshVariationRow {
	int32_t ActorInstanceCount; // 0x8
	TSoftClassPtr<UObject> StaticMesh; // 0x10
	int32_t MaterialSetNum; // 0x38
	int32_t TextureNum; // 0x3c
	TArray<FCrowWorldStaticMeshMaterialSet> MaterialSetInfo; // 0x40
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

struct FHairGroupsInterpolation {
	FHairDecimationSettings DecimationSettings; // 0x0
	FHairInterpolationSettings InterpolationSettings; // 0x8
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

struct FActiveHapticFeedbackEffect {
	UHapticFeedbackEffect_Base* HapticEffect; // 0x0
};

struct FCrowWorldDataHandlerActorItem {
	AActor* ActorClass; // 0x0
	UCrowWorldDataActorCheckerBase* Checker; // 0x8
};

struct FCrowWorldSyncDynamicState {
	uint16_t Count; // 0x0
	FMultiBitArrayUint32 DynamicStates; // 0x8
};

struct FCustomAttributePerBoneData {
	int32_t BoneTreeIndex; // 0x0
	TArray<FCustomAttribute> Attributes; // 0x8
};

struct FFractureEffect {
	UParticleSystem* ParticleSystem; // 0x0
	USoundBase* Sound; // 0x8
};

struct FCrowIngameItemScore {
	uint16_t Index; // 0x58
};

struct FFilterOptionPerAxis {
	bool bX; // 0x0
	bool bY; // 0x1
	bool bZ; // 0x2
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

struct FAnimNode_BlendSpaceEvaluator {
	float NormalizedTime; // 0xe8
};

struct FCrowWeaponPartsStickerData {
	TArray<int32_t> Stickers; // 0x0
};

struct FScreenMessageString {
	uint64_t Key; // 0x0
	FString ScreenMessage; // 0x8
	FColor DisplayColor; // 0x18
	float TimeToDisplay; // 0x1c
	float CurrentTimeDisplayed; // 0x20
	FVector2D TextScale; // 0x24
};

struct FMovieSceneVector2DKeyStruct {
	FVector2D Vector; // 0x28
};

struct FAIDataProviderValue {
	UAIDataProvider* DataBinding; // 0x10
	FName DataField; // 0x18
};

struct FClothingAssetData_Legacy {
	FName AssetName; // 0x0
	FString ApexFileName; // 0x8
	bool bClothPropertiesChanged; // 0x18
	FClothPhysicsProperties_Legacy PhysicsProperties; // 0x1c
};

struct FMovieSceneVectorKeyStructBase {
	FFrameNumber Time; // 0x8
};

struct FStaticTerrainLayerWeightParameter {
	int32_t WeightmapIndex; // 0x24
	bool bWeightBasedBlend; // 0x28
};

struct FGuideConfig {
	bool bActive; // 0x0
	bool bVisibleState; // 0x1
	bool bImportTrigger; // 0x2
	bool bPlayTrigger; // 0x3
};

struct FPropertyAccessCopyBatch {
	TArray<FPropertyAccessCopy> Copies; // 0x0
};

struct FLinearConstraint {
	float Limit; // 0x14
	ELinearConstraintMotion XMotion; // 0x18
	ELinearConstraintMotion YMotion; // 0x19
	ELinearConstraintMotion ZMotion; // 0x1a
};

struct FBlendBoneByChannelEntry {
	FBoneReference SourceBone; // 0x0
	FBoneReference TargetBone; // 0x10
	bool bBlendTranslation; // 0x20
	bool bBlendRotation; // 0x21
	bool bBlendScale; // 0x22
};

struct FInlineTextImageStyle {
	FSlateBrush Image; // 0x8
	int16_t Baseline; // 0x90
};

struct FCrowAlwaysRelevantReplicationInfo {
	uint32_t StreamLevelReplicationNumPerFrame; // 0x0
	uint32_t NumBuckets; // 0x4
};

struct FSubTrackGroup {
	FString GroupName; // 0x0
	TArray<int32_t> TrackIndices; // 0x10
	char bIsCollapsed : 1; // 0x20
	char bIsSelected : 1; // 0x20
};

struct FRecoilData {
	int32_t Order; // 0x8
	int32_t Distance; // 0xc
	FVector Direction; // 0x10
};

struct FAnchors {
	FVector2D Minimum; // 0x0
	FVector2D Maximum; // 0x8
};

struct FAnimNode_RotationMultiplier {
	FBoneReference TargetBone; // 0xc8
	FBoneReference SourceBone; // 0xd8
	float Multiplier; // 0xe8
	EBoneAxis RotationAxisToRefer; // 0xec
	bool bIsAdditive; // 0xed
};

struct FMovieSceneGeometryCacheSectionTemplate {
	FMovieSceneGeometryCacheSectionTemplateParameters Params; // 0x20
};

struct FAnimNotifyEventReference {
	UObject* NotifySource; // 0x8
};

struct FCrowLandWheelsSimEngine {
	AActor* OwnerActor; // 0x0
	FCrowLandWheelsEngineSetting EngineSetting; // 0x8
	FCrowLandWheelsSimEngineOutput EngineOutput; // 0xd8
	int16_t ZeroGearPosition; // 0xf0
	int16_t GearIndexMin; // 0xf2
	int16_t GearIndexMax; // 0xf4
	bool GearBoxReady; // 0xf6
	FCrowVehicleInputValue AccelerationInput; // 0xf8
	float TargetAccelerationInput; // 0x100
	float EngineRPM; // 0x104
	float MultiplyMaxEngineRPMForward; // 0x108
	float MultiplyMaxEngineRPMReverse; // 0x10c
	float ExternRotationSpeed; // 0x110
	int16_t CurrentGearIndex; // 0x114
	int16_t TargetGearIndex; // 0x116
	float GearChangeTimeRemain; // 0x118
	float GearKeepTimeRemain; // 0x11c
};

struct FUPSPatrolComponentPathData {
	TWeakObjectPtr<UUPSPatrolComponent> PatrolComponent; // 0x18
};

struct FBitFlagArray {
	int16_t MaxFlagCount; // 0x0
	TArray<uint32_t> FlagBlocks; // 0x8
};

struct FClothCollisionData {
	TArray<FClothCollisionPrim_Sphere> Spheres; // 0x0
	TArray<FClothCollisionPrim_SphereConnection> SphereConnections; // 0x10
	TArray<FClothCollisionPrim_Convex> Convexes; // 0x20
	TArray<FClothCollisionPrim_Box> Boxes; // 0x30
};

struct FUserWidgetPool {
	TArray<UUserWidget*> ActiveWidgets; // 0x0
	TArray<UUserWidget*> InactiveWidgets; // 0x10
};

struct FStringArray {
	TArray<FString> Strings; // 0x0
};

struct FCrowCharacterAnimWeapon {
	UAnimSequenceBase* Equip; // 0x0
	UAnimSequenceBase* UnEquip; // 0x8
	UAnimSequenceBase* Reload; // 0x10
	UAnimSequenceBase* ReloadShort; // 0x18
	UAnimSequenceBase* PreFire; // 0x20
	UAnimSequenceBase* Fire; // 0x28
	UAnimSequenceBase* AimFire; // 0x30
	UAnimSequenceBase* PostFire; // 0x38
};

struct FMagicLeapARPinObjectIdList {
	TSet<FString> ObjectIdList; // 0x0
};

struct FCrowWorldSplineSegmentPropInfo {
	TArray<TWeakObjectPtr<ACrowWorldPropActor>> PropActors; // 0x0
};

struct FCrowWorldEventModeInfo {
	int32_t ActivationEventLimit; // 0x0
	TArray<FCrowWorldEventGroupInfo> Groups; // 0x8
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

struct FPoseDataContainer {
	TArray<FSmartName> PoseNames; // 0x0
	TArray<FName> Tracks; // 0x10
	TMap<FName, int32_t> TrackMap; // 0x20
	TArray<FPoseData> Poses; // 0x70
	TArray<FAnimCurveBase> Curves; // 0x80
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

struct FPreviewAttachedObjectPair {
	TSoftObjectPtr<UObject> AttachedObject; // 0x0
	UObject* Object; // 0x28
	FName AttachedTo; // 0x30
};

struct FDatasmithCameraLookatTrackingSettingsTemplate {
	char bEnableLookAtTracking : 1; // 0x0
	char bAllowRoll : 1; // 0x0
	TSoftObjectPtr<AActor> ActorToTrack; // 0x8
};

struct FNamedCurveValue {
	FName Name; // 0x0
	float Value; // 0x8
};

struct FLatentActionInfo {
	int32_t Linkage; // 0x0
	int32_t UUID; // 0x4
	FName ExecutionFunction; // 0x8
	UObject* CallbackTarget; // 0x10
};

struct FKAggregateGeom {
	TArray<FKSphereElem> SphereElems; // 0x0
	TArray<FKBoxElem> BoxElems; // 0x10
	TArray<FKSphylElem> SphylElems; // 0x20
	TArray<FKConvexElem> ConvexElems; // 0x30
	TArray<FKTaperedCapsuleElem> TaperedCapsuleElems; // 0x40
};

struct FCrowCharacterSoundSetup {
	UAkAudioEvent* IdleBreathSound; // 0x0
	UAkAudioEvent* IdleBreathEndSound; // 0x8
	UAkAudioEvent* SprintSound; // 0x10
	UAkAudioEvent* SprintEndSound; // 0x18
	UAkAudioEvent* JumpLadingSound; // 0x20
	UAkAudioEvent* WaterBreathSound; // 0x28
	UAkAudioEvent* DeathSound; // 0x30
	TMap<ECrowDamageCauser, UAkAudioEvent*> DeathSoundByType; // 0x38
	UAkAudioEvent* DeadItemDropSound; // 0x88
};

struct FInputScaleBias {
	float Scale; // 0x0
	float Bias; // 0x4
};

struct FTimecode {
	int32_t Hours; // 0x0
	int32_t Minutes; // 0x4
	int32_t Seconds; // 0x8
	int32_t Frames; // 0xc
	bool bDropFrameFormat; // 0x10
};

struct FMovieSceneTangentData {
	float ArriveTangent; // 0x0
	float LeaveTangent; // 0x4
	float ArriveTangentWeight; // 0x8
	float LeaveTangentWeight; // 0xc
	ERichCurveTangentWeightMode TangentWeightMode; // 0x10
};

struct FCrowPartyMember {
	uint64_t CharacterInvenNo; // 0x0
	uint64_t ServerKey; // 0x8
	uint64_t SteamId; // 0x10
	uint64_t OrderNo; // 0x18
	uint32_t Level; // 0x20
	FString NickName; // 0x28
	ECrowLobbyPartyUserScene Scene; // 0x38
	ECrowLobbyPartyUserState State; // 0x39
	TArray<FCrowItemData> InvenItemArray; // 0x40
	TMap<int32_t, FCrowWeaponData> WeaponEquipmentMap; // 0x50
	TMap<int32_t, FCrowWeaponAccData> WeaponAccMap; // 0xa0
	FCrowUserCharacterInfo CharacterInfo; // 0xf0
};

struct FSearchBoxStyle {
	FEditableTextBoxStyle TextBoxStyle; // 0x8
	FSlateFontInfo ActiveFontInfo; // 0x800
	FSlateBrush UpArrowImage; // 0x858
	FSlateBrush DownArrowImage; // 0x8e0
	FSlateBrush GlassImage; // 0x968
	FSlateBrush ClearImage; // 0x9f0
	FMargin ImagePadding; // 0xa78
	bool bLeftAlignButtons; // 0xa88
};

struct FST_DamageMaterialDurability {
	float currentDurability; // 0x0
	float DurabilityMAX; // 0x4
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

struct FMovieSceneTangentDataSerializationHelper {
	float ArriveTangent; // 0x0
	float LeaveTangent; // 0x4
	ERichCurveTangentWeightMode TangentWeightMode; // 0x8
	float ArriveTangentWeight; // 0xc
	float LeaveTangentWeight; // 0x10
};

struct FMovieSceneKeyTimeStruct {
	FFrameNumber Time; // 0x8
};

struct FMagicLeapTrackingMeshInfo {
	FTimespan Timestamp; // 0x0
	TArray<FMagicLeapMeshBlockInfo> BlockData; // 0x8
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

struct FAnimationStateBase {
	FName StateName; // 0x0
};

struct FAnimCurveParam {
	FName Name; // 0x0
};

struct FCrowBattlePassLevelInfoTableRow {
	uint32_t RequiredTotalExp; // 0x8
};

struct FDatasmithReimportOptions {
	bool bUpdateActors; // 0x0
	bool bRespawnDeletedActors; // 0x1
};

struct FDatasmithMeshSectionInfoTemplate {
	int32_t MaterialIndex; // 0x0
};

struct FMovieSceneNiagaraSystemTrackImplementation {
	FFrameNumber SpawnSectionStartFrame; // 0x10
	FFrameNumber SpawnSectionEndFrame; // 0x14
	ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior; // 0x18
	ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior; // 0x1c
	ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior; // 0x20
	ENiagaraAgeUpdateMode AgeUpdateMode; // 0x24
};

struct FAnimNode_ObserveBone {
	FBoneReference BoneToObserve; // 0xc8
	EBoneControlSpace DisplaySpace; // 0xd8
	bool bRelativeToRefPose; // 0xd9
	FVector Translation; // 0xdc
	FRotator Rotation; // 0xe8
	FVector Scale; // 0xf4
};

struct FAkAudioEventTrackKey {
	float Time; // 0x0
	UAkAudioEvent* AkAudioEvent; // 0x8
	FString EventName; // 0x10
};

struct FCrowSkydivingSettingss {
	float ForwardRate; // 0x0
	float RightRate; // 0x4
	float DownRate; // 0x8
	float DefaultMinScaleValue; // 0xc
	float DefaultIdleScaleValue; // 0x10
	float ForwardMaxScaleValue; // 0x14
	float InputYawScale; // 0x18
	float InputPitchScale; // 0x1c
	float InputRollScale; // 0x20
	float AnimationAxisForwardValueScale; // 0x24
	float AnimationAxisRightValueScale; // 0x28
	float MaxFlySpeed; // 0x2c
	float BrakingDecelerationFlying; // 0x30
	FVector2D ViewPitchMinMax; // 0x34
	FVector2D ViewRollMinMax; // 0x3c
	FVector CameraSocketOffset; // 0x44
	FRotator CameraRotation; // 0x50
	FCrowSkydivingCameraDirections CameraDirection; // 0x60
	bool bInheritYaw; // 0x90
	bool bInheritPitch; // 0x91
	bool bInheritRoll; // 0x92
	bool bUseControllerRotationYaw; // 0x93
	bool bUseControllerRotationPitch; // 0x94
	bool bUseControllerRotationRoll; // 0x95
};

struct FCrowVehicleDamageSetup {
	AActor* DestroyedActorTemplate; // 0x0
	float MaxHP; // 0x8
	float SevereHP; // 0xc
	float BurningDotDamage; // 0x10
	UCrowDamageType* DamageType; // 0x18
	FWeaponDamageSettings DamageSettings; // 0x20
	TArray<FCrowVehicleDamageEffect> DamageEffectList; // 0x48
	FCrowVehicleEnginePowerDrop EnginePowerDrop; // 0x58
};

struct FCustomProfile {
	FName Name; // 0x0
	TArray<FResponseChannel> CustomResponses; // 0x8
};

struct FChildActorComponentInstanceData {
	AActor* ChildActorClass; // 0xb8
	FName ChildActorName; // 0xc0
	TArray<FChildActorAttachedActorInfo> AttachedActors; // 0xc8
};

struct FST_BrokenBone {
	bool bIsDetach; // 0x0
	float ImpulseDetachPower; // 0x4
	bool bIsImmediatelyHide; // 0x8
	UParticleSystem* ImpactParticle; // 0x10
	FName SocketParticle; // 0x18
	UAkAudioEvent* ImpactAudioEvent; // 0x20
	bool IsDamageDisable; // 0x28
	bool IsCanTakeDamageBullet; // 0x29
	bool IsNoDamageToBody; // 0x2a
	bool bIsSwing1; // 0x2b
	bool bIsSwing2; // 0x2c
	float Swing1Limit; // 0x30
	float Swing1Offset; // 0x34
	float Swing2Limit; // 0x38
	float Swing2Offset; // 0x3c
	float Durability_Morph; // 0x40
	float Durability_Swing; // 0x44
	float Durability; // 0x48
	float Durability_MorphMAX; // 0x4c
	bool bIsDetachedAlready; // 0x54
	bool bIsSwingAlready; // 0x55
	TArray<FName> WithTakeDamageBoneNames; // 0x58
	FST_DamageMaterialSlot DamageMaterialSlot; // 0x68
	TArray<FName> GroupConstraintNames; // 0x78
	float LastMorphWeight; // 0x88
	float LastMaterialWeight; // 0x8c
};

struct FCrowCarDashBoardHandlerAnimSetup {
	FName BoneName; // 0x0
	float RotationMultiply; // 0x8
};

struct FSourceEffectChainEntry {
	USoundEffectSourcePreset* Preset; // 0x0
	char bBypass : 1; // 0x8
};

struct FCrowWorldActorData {
	uint32_t WorldActorIndex; // 0x0
	int16_t ActorLayoutIndex; // 0x4
	int16_t ActorDestructibleFlagLookupInSector; // 0x6
	int16_t ActorDestructibleFlagLookupInCluster; // 0x8
	int16_t ActorDestructibleFlagLookupInLandmark; // 0xa
	int16_t DestructibleFlagOrigin; // 0xc
	int16_t DynamicStateOrigin; // 0xe
	FTransform WorldTransform; // 0x10
};

struct FCrowTakeWeaponExpInfo {
	uint32_t ExpShareIndex; // 0x0
	uint32_t WaeponExp; // 0x4
	uint32_t WaeponBuffExp; // 0x8
	uint32_t KillCount; // 0xc
	uint32_t HeadShotCount; // 0x10
};

struct FMovieSceneNiagaraFloatParameterSectionTemplate {
	FMovieSceneFloatChannel FloatChannel; // 0x40
};

struct FSkelMeshSkinWeightInfo {
	int32_t Bones[0xc]; // 0x0
	char Weights[0xc]; // 0x30
};

struct FMovieSceneObjectPathChannel {
	UObject* PropertyClass; // 0x8
	TArray<FFrameNumber> Times; // 0x10
	TArray<FMovieSceneObjectPathChannelKeyValue> Values; // 0x20
	FMovieSceneObjectPathChannelKeyValue DefaultValue; // 0x30
};

struct FCrowBattlePassCostTableRow {
	uint32_t RCPCost; // 0x8
};

struct FCrowWorldActorDestruction {
	float MaxHP; // 0x0
	UCrowWorldDamageCheckerBase* DamageChecker; // 0x8
	UCrowWorldDestructionAUD* DestructionAUD; // 0x10
};

struct FCrowEtcTableRow {
	FString HelpText; // 0x168
	ECrowEtcItemType EtcItemType; // 0x178
	int64_t DurationTime; // 0x180
};

struct FPerlinLayerProperties {
	float Frequency; // 0x0
	float Intensity; // 0x4
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

struct FMovieSceneMediaPlayerPropertySectionTemplate {
	UMediaSource* MediaSource; // 0x38
	FFrameNumber SectionStartFrame; // 0x40
	bool bLoop; // 0x44
};

struct FMovieSceneEvaluationFieldEntity {
	FMovieSceneEvaluationFieldEntityKey Key; // 0x0
	int32_t SharedMetaDataIndex; // 0xc
};

struct FMovieSceneOrderedEvaluationKey {
	FMovieSceneEvaluationKey Key; // 0x0
	uint16_t SetupIndex; // 0xc
	uint16_t TearDownIndex; // 0xe
};

struct FConstraintDrive {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float MaxForce; // 0x8
	char bEnablePositionDrive : 1; // 0xc
	char bEnableVelocityDrive : 1; // 0xc
};

struct FCrowProjectileCheckerBoneInfo {
	float DistanceWithWeight; // 0x0
	float BoneDistanceXY; // 0x4
	float BoneDistanceZ; // 0x8
	FName BoneName; // 0xc
	FVector BoneLocation; // 0x14
};

struct FStaticMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FName ImportedMaterialSlotName; // 0x10
	FMeshUVChannelInfo UVChannelData; // 0x18
};

struct FConnectionAlwaysRelevantNodePair {
	UNetConnection* NetConnection; // 0x0
	UReplicationGraphNode_AlwaysRelevant_ForConnection* Node; // 0x8
};

struct FAnimationSetup {
	UAnimSequence* AnimSequence; // 0x0
	UAnimSharingStateInstance* AnimBlueprint; // 0x8
	FPerPlatformInt NumRandomizedInstances; // 0x10
	FPerPlatformBool Enabled; // 0x14
};

struct FMovieSceneGeometryCollectionParams {
	FSoftObjectPath GeometryCollectionCache; // 0x8
	FFrameNumber StartFrameOffset; // 0x20
	FFrameNumber EndFrameOffset; // 0x24
	float PlayRate; // 0x28
};

struct FGrainTableEntry {
	int32_t SampleIndex; // 0x0
	float RPM; // 0x4
};

struct FCrowLandWheelsFrictionSetting {
	float FrictionLongSlip; // 0x0
	float FrictionLatSlip; // 0x4
	float FrictionMagnitudeMax; // 0x8
	float SlipRatioLongMax; // 0xc
	float SlipForceLongMax; // 0x10
	float SlipRatioThresholdSpeed; // 0x14
};

struct FNetworkEmulationProfileDescription {
	FString ProfileName; // 0x0
	FString ToolTip; // 0x10
};

struct FSourceEffectEnvelopeFollowerSettings {
	float AttackTime; // 0x0
	float ReleaseTime; // 0x4
	EEnvelopeFollowerPeakMode PeakMode; // 0x8
	bool bIsAnalogMode; // 0x9
};

struct FAnimNode_MachineGunHandler {
	TArray<FCrowMachineGunBoneInfo> BoneInfoArray; // 0xc8
	UCrowWeaponCharacterAnimInst* WeaponCharacterAnimInst; // 0xd8
	TArray<FBoneReference> BoneReferences; // 0xe0
};

struct FCrowMessageBoxInfo {
	FText Message; // 0x0
	ECrowMBType MBType; // 0x18
	bool IsShowedMouseCursor; // 0x19
};

struct FFunctionExpressionOutput {
	UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x0
	FGuid ExpressionOutputId; // 0x8
	FExpressionOutput Output; // 0x18
};

struct FSourceEffectBitCrusherBaseSettings {
	float SampleRate; // 0x0
	float BitDepth; // 0x4
};

struct FAnimNode_CopyBone {
	FBoneReference SourceBone; // 0xc8
	FBoneReference TargetBone; // 0xd8
	bool bCopyTranslation; // 0xe8
	bool bCopyRotation; // 0xe9
	bool bCopyScale; // 0xea
	EBoneControlSpace ControlSpace; // 0xeb
};

struct FCrowWorldSyncIndexes {
	TArray<uint32_t> EnterSectorIndex; // 0x0
	TArray<uint32_t> LeaveSectorIndex; // 0x10
	TArray<uint32_t> EnterClusterIndex; // 0x20
	TArray<uint32_t> LeaveClusterIndex; // 0x30
};

struct FCrowPawnReplicationInfo {
	bool UseGridReplication; // 0x0
	uint32_t CellSize; // 0x4
	uint32_t NumBuckets; // 0x8
	float ReplicationLevelPerDistance; // 0xc
	TArray<FCrowReplicationPerFrames> ReplicationLevelList; // 0x10
};

struct FAnimPhysSphericalLimit {
	FBoneReference DrivingBone; // 0x0
	FVector SphereLocalOffset; // 0x10
	float LimitRadius; // 0x1c
	ESphericalLimitType LimitType; // 0x20
};

struct FOverlayItem {
	FTimespan StartTime; // 0x0
	FTimespan EndTime; // 0x8
	FString Text; // 0x10
	FVector2D position; // 0x20
};

struct FARQRCodeUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	FVector Extents; // 0x50
	FString QRCode; // 0x60
};

struct FCrowArmorTableRow {
	FString HelpText; // 0x168
	ECrowArmorType ArmorType; // 0x178
	int32_t ArmorTier; // 0x17c
	FSoftObjectPath Mesh3P; // 0x180
	float HP; // 0x198
	float Reduction; // 0x19c
	bool Head; // 0x1a0
	bool neck_01; // 0x1a1
	bool clavicle_l; // 0x1a2
	bool clavicle_r; // 0x1a3
	bool spine_01; // 0x1a4
	bool spine_02; // 0x1a5
	bool spine_03; // 0x1a6
	bool upperarm_l; // 0x1a7
	bool upperarm_r; // 0x1a8
	bool lowerarm_l; // 0x1a9
	bool lowerarm_r; // 0x1aa
	bool hand_l; // 0x1ab
	bool hand_r; // 0x1ac
	bool Pelvis; // 0x1ad
	bool thigh_l; // 0x1ae
	bool thigh_r; // 0x1af
	bool calf_l; // 0x1b0
	bool calf_r; // 0x1b1
	bool foot_l; // 0x1b2
	bool foot_r; // 0x1b3
};

struct FCrowWeaponGroundDustEffectParam {
	bool bUseMinParamWhenMaxDistance; // 0x0
	float MaxDistance; // 0x4
	float Scale; // 0x8
};

struct FReferenceBoneFrame {
	FBoneReference Bone; // 0x0
	FAxis Axis; // 0x10
};

struct FCrowCharacterLookLimit {
	FRotator Min; // 0x0
	FRotator Max; // 0xc
};

struct FCrowBuildingPartsState {
	char IsValidParts : 1; // 0x0
	char IsDestroyedParts : 1; // 0x0
	char CanReceiveDamage : 1; // 0x0
	char PartsStateValue; // 0x1
	char PartsProperty; // 0x2
	TArray<FCrowBuildingPartsElement> Elements; // 0x8
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

struct FBasicMeshProperties {
	float LoopResolution; // 0x0
	float CurveSimplificationMultiplier; // 0x4
	FBasicMeshGenerationOptions MeshGenerationOptions; // 0x8
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

struct FDialogueWaveParameter {
	UDialogueWave* DialogueWave; // 0x0
	FDialogueContext Context; // 0x8
};

struct FCLSMovementSettingsStance {
	FCLSMovementSettings Standing; // 0x0
	FCLSMovementSettings Crouching; // 0x20
	FCLSMovementSettings Prone; // 0x40
};

struct FNodeObject {
	FName Name; // 0x0
	FName ParentName; // 0x8
};

struct FClothCollisionPrim_Convex {
	TArray<FPlane> Planes; // 0x0
	TArray<FVector> SurfacePoints; // 0x10
	int32_t BoneIndex; // 0x20
};

struct FCrowExceptionalDamageTableRow {
	uint32_t Index; // 0x8
	bool bIsDot; // 0xc
	float Term; // 0x10
	float Damage; // 0x14
};

struct FRuntimeFloatCurve {
	FRichCurve EditorCurveData; // 0x0
	UCurveFloat* ExternalCurve; // 0x80
};

struct FCrowBuildingCustomLODParts {
	int16_t PartsIndex; // 0x0
	int16_t LODLevel; // 0x2
};

struct FEditedDocumentInfo {
	FSoftObjectPath EditedObjectPath; // 0x0
	FVector2D SavedViewOffset; // 0x18
	float SavedZoomAmount; // 0x20
	UObject* EditedObject; // 0x28
};

struct FNiagaraEmitterScalabilitySettings {
	FNiagaraPlatformSet Platforms; // 0x0
	char bScaleSpawnCount : 1; // 0x30
	float SpawnCountScale; // 0x34
};

struct FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FNiagaraSystemScalabilitySettingsArray {
	TArray<FNiagaraSystemScalabilitySettings> Settings; // 0x0
};

struct FCableMeshGenerationPointInfo {
	float DistanceToNearestContactPoint; // 0x0
	float Looseness; // 0x4
	float DistanceToSegmentLine; // 0x8
	float SlackRatio; // 0xc
	float SegmentLength; // 0x10
	float SegmentLineDistance; // 0x14
};

struct FMovieSceneNiagaraVectorParameterSectionTemplate {
	FMovieSceneFloatChannel VectorChannels[0x4]; // 0x40
	int32_t ChannelsUsed; // 0x2c0
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

struct FMagicLeapSharedWorldLocalData {
	TArray<FMagicLeapSharedWorldPinData> LocalPins; // 0x0
};

struct FLandscapeLayerStruct {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
};

struct FMovieSceneNiagaraBoolParameterSectionTemplate {
	FMovieSceneBoolChannel BoolChannel; // 0x40
};

struct FCrowLandscapeBounds {
	int32_t MinX; // 0x0
	int32_t MinY; // 0x4
	int32_t MaxX; // 0x8
	int32_t MaxY; // 0xc
};

struct FDatasmithRetessellationOptions {
	EDatasmithCADRetessellationRule RetessellationRule; // 0x10
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

struct FFloatDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FCrowWorldLightProbeVolumeSetting {
	int32_t VolumeOpenCheckStep; // 0x0
	int32_t OpenGroupDistance; // 0x4
	int32_t OpenGroupRadius; // 0x8
	int32_t OpenAreaPercentMax; // 0xc
	float DistanceToSurface; // 0x10
	int32_t MaxLightProbePerVolume; // 0x14
	int32_t MinOpenCount; // 0x18
	int32_t MaxOpenCount; // 0x1c
};

struct FAkCommunicationSettingsWithSystemInitialization {
	bool InitializeSystemComms; // 0x20
};

struct FKeySlotSimpleJsonNode {
	int32_t S; // 0x0
	char I : 1; // 0x4
	FString A; // 0x8
	FString K; // 0x18
	char L : 1; // 0x28
	char C : 1; // 0x28
};

struct FBatchedPoint {
	FVector position; // 0x0
	FLinearColor Color; // 0xc
	float PointSize; // 0x1c
	float RemainingLifeTime; // 0x20
	char DepthPriority; // 0x24
};

struct FSmartName {
	FName DisplayName; // 0x0
};

struct FHairBendConstraint {
	bool SolveBend; // 0x0
	bool ProjectBend; // 0x1
	float BendDamping; // 0x4
	float BendStiffness; // 0x8
	FRuntimeFloatCurve BendScale; // 0x10
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

struct FCustomOutput {
	FName OutputName; // 0x0
	ECustomMaterialOutputType OutputType; // 0x8
};

struct FKSphylElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius; // 0x48
	float Length; // 0x4c
};

struct FRestrictedConfigInfo {
	FString RestrictedConfigName; // 0x0
	TArray<FString> Owners; // 0x10
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

struct FNiagaraStatScope {
	FName FullName; // 0x0
	FName FriendlyName; // 0x8
};

struct FHairInterpolationSettings {
	bool bOverrideGuides; // 0x0
	float HairToGuideDensity; // 0x4
	EHairInterpolationQuality InterpolationQuality; // 0x8
	EHairInterpolationWeight InterpolationDistance; // 0x9
	bool bRandomizeGuide; // 0xa
	bool bUseUniqueGuide; // 0xb
};

struct FNiagaraSystemUpdateContext {
	TArray<UNiagaraComponent*> ComponentsToReset; // 0x0
	TArray<UNiagaraComponent*> ComponentsToReInit; // 0x10
	TArray<UNiagaraComponent*> ComponentsToNotifySimDestroy; // 0x20
	TArray<UNiagaraSystem*> SystemSimsToDestroy; // 0x30
};

struct FGeomSelection {
	int32_t Type; // 0x0
	int32_t Index; // 0x4
	int32_t SelectionIndex; // 0x8
};

struct FSoundAttenuationPluginSettings {
	TArray<USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray; // 0x0
	TArray<UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray; // 0x10
	TArray<UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray; // 0x20
};

struct FTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UTexture* ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x18
};

struct FCrowBuildingEditorLayout {
	TArray<FCrowBuildingEditorPartsData> DataArray; // 0x0
	TArray<FCrowBuildingEditorPropData> PropArray; // 0x10
	TArray<FCrowBuildingEditorItemSpawnerData> ItemSpawnerArray; // 0x20
	TArray<FCrowBuildingPartsOverride> PartsOverrides; // 0x30
	TArray<FCrowBuildingEditorMeshData> SubMeshArray; // 0x40
};

struct FMagicLeapSharedWorldSharedData {
	TArray<FGuid> PinIDs; // 0x0
};

struct FCrowLandWheelsSimEngineOutput {
	float Brake; // 0x0
	float Torque; // 0x4
	float RotationSpeedMax; // 0x8
};

struct FPrimitiveMaterialRef {
	UPrimitiveComponent* Primitive; // 0x0
	UDecalComponent* Decal; // 0x8
	int32_t ElementIndex; // 0x10
};

struct FCrowMovementRotorValues {
	float Pitch; // 0x0
	float Yaw; // 0x4
	float Roll; // 0x8
	float Collective; // 0xc
	float MoveForward; // 0x10
	float MoveRight; // 0x14
};

struct FROscillator {
	FFOscillator Pitch; // 0x0
	FFOscillator Yaw; // 0xc
	FFOscillator Roll; // 0x18
};

struct FAimConstraintDescription {
	FAxis LookAt_Axis; // 0x10
	FAxis LookUp_Axis; // 0x20
	bool bUseLookUp; // 0x30
	FVector LookUpTarget; // 0x34
};

struct FBrushEffectSmoothBlending {
	float InnerSmoothDistance; // 0x0
	float OuterSmoothDistance; // 0x4
};

struct FCrowRewardTableRow {
	FString HelpText; // 0x10
	TArray<FCrowRewardItem> Items; // 0x20
};

struct FMovieSceneGeometryCollectionSectionTemplate {
	FMovieSceneGeometryCollectionSectionTemplateParameters Params; // 0x20
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

struct FQuartzClockSettings {
	FQuartzTimeSignature TimeSignature; // 0x0
	bool bIgnoreLevelChange; // 0x18
};

struct FCrowBuildingHISMCDetail {
	char bIsDestructible : 1; // 0x0
	char bHasInteraction : 1; // 0x0
	char bHasDoorSlide : 1; // 0x0
	char bHasDoorHinge1 : 1; // 0x0
	char bHasDoorHinge2 : 1; // 0x0
	char bIsGlassMaterial : 1; // 0x0
	char bIsTranslucent : 1; // 0x0
	char bIsNoDecal : 1; // 0x0
	char bIsCharacterInteraction : 1; // 0x1
	char DestructionType; // 0x2
	float MassOverride; // 0x4
	FVector SlideDistance; // 0x8
	FVector HingeLocation1; // 0x14
	FRotator HingeRotator1; // 0x20
	FVector HingeLocation2; // 0x2c
	FRotator HingeRotator2; // 0x38
	FVector BoundingBoxCenter; // 0x44
	FVector DestructibleSocket; // 0x50
};

struct FCrowScoreInfoTDM {
	char TeamID; // 0x0
	uint32_t Score; // 0x4
};

struct FNamedLensPreset {
	FString Name; // 0x0
	FCameraLensSettings LensSettings; // 0x10
};

struct FNiagaraHalfVector4 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
	uint16_t Z; // 0x4
	uint16_t W; // 0x6
};

struct FConstraintBaseParams {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float Restitution; // 0x8
	float ContactDistance; // 0xc
	char bSoftConstraint : 1; // 0x10
};

struct FAISenseAffiliationFilter {
	char bDetectEnemies : 1; // 0x0
	char bDetectNeutrals : 1; // 0x0
	char bDetectFriendlies : 1; // 0x0
};

struct FWeightedBlendable {
	float Weight; // 0x0
	UObject* Object; // 0x8
};

struct FAutoCompleteNode {
	int32_t IndexChar; // 0x0
	TArray<int32_t> AutoCompleteListIndices; // 0x8
};

struct FMovieSceneColorSectionTemplate {
	FMovieSceneFloatChannel Curves[0x4]; // 0x38
	EMovieSceneBlendType BlendType; // 0x2b8
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

struct FGuid {
	int32_t A; // 0x0
	int32_t B; // 0x4
	int32_t C; // 0x8
	int32_t D; // 0xc
};

struct FLiveLinkTransformFrameData {
	FTransform Transform; // 0xa0
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

struct FInterpCurveQuat {
	TArray<FInterpCurvePointQuat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FCrowWorldLightProbeCollector {
	TArray<FCrowWorldLightProbeAssetData> LightProbeAssetDatas; // 0x0
	TArray<FTransform> LightPathArray; // 0x10
	UWorld* World; // 0x20
	UCrowWorldMapConfig* MapConfig; // 0x28
	UDirectionalLightComponent* DirectionalLight; // 0x30
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

struct FCrowPlayerLevelRewardTableRow {
	int32_t Level; // 0x8
	TArray<FCrowUnLockItemTable> UnlockItems; // 0x10
};

struct FEngineServiceAuthGrant {
	FString UserName; // 0x0
	FString UserToGrant; // 0x10
};

struct FAkAdvancedInitializationSettings {
	uint32_t IO_MemorySize; // 0x0
	uint32_t IO_Granularity; // 0x4
	float TargetAutoStreamBufferLength; // 0x8
	bool UseStreamCache; // 0xc
	uint32_t MaximumPinnedBytesInCache; // 0x10
	bool EnableGameSyncPreparation; // 0x14
	uint32_t ContinuousPlaybackLookAhead; // 0x18
	uint32_t MonitorQueuePoolSize; // 0x1c
	uint32_t MaximumHardwareTimeoutMs; // 0x20
	bool DebugOutOfRangeCheckEnabled; // 0x24
	float DebugOutOfRangeLimit; // 0x28
	FAkAdvancedSpatialAudioSettings SpatialAudioSettings; // 0x2c
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

struct FVectorParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	FLinearColor ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x20
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

struct FLightmassLightSettings {
	float IndirectLightingSaturation; // 0x0
	float ShadowExponent; // 0x4
	bool bUseAreaShadowsForStationaryLight; // 0x8
};

struct FAINoiseEvent {
	FVector NoiseLocation; // 0x4
	float Loudness; // 0x10
	float MaxRange; // 0x14
	AActor* Instigator; // 0x18
	FName Tag; // 0x20
};

struct FCrowWorldClientObjects {
	UCrowWorldLODUpdater* LODUpdater; // 0x0
	UCrowWorldOcclusion* WorldOcclusion; // 0x8
	UCrowWorldFoliage* WorldFoliage; // 0x10
	UCrowWorldTerrainSetup* WorldTerrainSetup; // 0x18
};

struct FMulticastRecordOptions {
	FString FuncPathName; // 0x0
	bool bServerSkip; // 0x10
	bool bClientSkip; // 0x11
};

struct FCrowWeaponPartsTypeDataServer {
	uint16_t WeaponKey; // 0x0
	ECrowWeaponPartsType PartsType; // 0x2
};

struct FSourceEffectPhaserSettings {
	float WetLevel; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	EPhaserLFOType LFOType; // 0xc
	bool UseQuadraturePhase; // 0xd
};

struct FCLSPoseExplicit {
	UAnimSequenceBase* Anim; // 0x0
	float ExplicitTime; // 0x8
};

struct FCLSVelocityBlend {
	float F; // 0x0
	float B; // 0x4
	float L; // 0x8
	float R; // 0xc
};

struct FProneIKOffsets {
	FVector Pelvis; // 0x0
	FVector Spine; // 0xc
	FVector LeftArm; // 0x18
	FVector RightArm; // 0x24
	FVector LeftCalf; // 0x30
	FVector RightCalf; // 0x3c
	FVector LeftFoot; // 0x48
	FVector RightFoot; // 0x54
};

struct FBatchedLine {
	FVector Start; // 0x0
	FVector End; // 0xc
	FLinearColor Color; // 0x18
	float Thickness; // 0x28
	float RemainingLifeTime; // 0x2c
	char DepthPriority; // 0x30
};

struct FSubmixEffectDynamicProcessorFilterSettings {
	char bEnabled : 1; // 0x0
	float Cutoff; // 0x4
	float GainDb; // 0x8
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

struct FSpriteGeometryShape {
	ESpriteShapeType ShapeType; // 0x0
	TArray<FVector2D> Vertices; // 0x8
	FVector2D BoxSize; // 0x18
	FVector2D BoxPosition; // 0x20
	float Rotation; // 0x28
	bool bNegativeWinding; // 0x2c
};

struct FEditableTextStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x60
	FSlateBrush BackgroundImageSelected; // 0x88
	FSlateBrush BackgroundImageComposing; // 0x110
	FSlateBrush CaretImage; // 0x198
};

struct FCapturedPixelsID {
	TMap<FName, FName> Identifiers; // 0x0
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

struct FCrowVehicleEntityPoolTank {
	int32_t CountPerGroup; // 0x0
	int32_t MaxElementIndex; // 0x4
	TArray<FCrowVehicleEntityTank> PoolArray; // 0x8
	TArray<int32_t> RecycleIndexes; // 0x18
};

struct FChangeVertexInstancesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs; // 0x8
	TArray<FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole; // 0x18
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

struct FCustomMeshTriangle {
	FVector Vertex0; // 0x0
	FVector Vertex1; // 0xc
	FVector Vertex2; // 0x18
};

struct FAutoCompleteCommand {
	FString Command; // 0x0
	FString Desc; // 0x10
};

struct FTrackInstanceInputComponent {
	UMovieSceneSection* Section; // 0x0
	int32_t OutputIndex; // 0x8
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

struct FMovieSceneTimecodeSource {
	FTimecode Timecode; // 0x0
	FFrameNumber DeltaFrame; // 0x14
};

struct FCrowMovementSetting {
	float JumpRatioHorizontal; // 0x0
	float MaxFallVelocityZ; // 0x4
	float LandImpactVelocityRatio; // 0x8
	float FlailStartVelocity; // 0xc
	float LandRecoveryOnDefault; // 0x10
	float LandRecoveryOnFlail; // 0x14
	float CantActionRecovery; // 0x18
	float SwimSpeed; // 0x1c
	float FastSwimSpeed; // 0x20
	float SwimmingAcceleration; // 0x24
	float DiveAcceleration; // 0x28
	float SwimmingDeceleration; // 0x2c
	float BuoyancySurface; // 0x30
	float BuoyancyUnderwater; // 0x34
	float DiveImpactDelayTime; // 0x38
	float DiveImpactBuoyancy; // 0x3c
	float DiveImpactDelayDecel; // 0x40
	float DiveImpactSpeedXY; // 0x44
	float DiveImpactSpeedZ; // 0x48
	float CrouchLimitDepth; // 0x4c
	float ProneLimitDepth; // 0x50
	float DrownedMoveDelay; // 0x54
	float DrownedMoveSpeed; // 0x58
	float DrowendBuoyancy; // 0x5c
};

struct FAnimNode_ModifyCurve {
	FPoseLink SourcePose; // 0x10
	TArray<float> CurveValues; // 0x20
	TArray<FName> CurveNames; // 0x30
	float Alpha; // 0x50
	EModifyCurveApplyMode ApplyMode; // 0x54
};

struct FMaterialLayersFunctions {
	TArray<UMaterialFunctionInterface*> Layers; // 0x0
	TArray<UMaterialFunctionInterface*> Blends; // 0x10
	TArray<bool> LayerStates; // 0x20
	FString KeyString; // 0x30
};

struct FAkMidiNoteOnOff {
	char Note; // 0x2
	char Velocity; // 0x3
};

struct FFontParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UFont* FontValue; // 0x10
	int32_t FontPage; // 0x18
	FGuid ExpressionGUID; // 0x1c
};

struct FCrowBuildingEditorMeshAsset {
	UStaticMesh* StaticMesh; // 0x0
	TArray<UMaterialInterface*> MaterialOverrides; // 0x8
};

struct FCrowCharacterSwimBodyPartsSetting {
	FCrowCharacterSwimFXSetting Head_FX; // 0x0
	FCrowCharacterSwimFXSetting HandLeft_FX; // 0x50
	FCrowCharacterSwimFXSetting HandRight_FX; // 0xa0
	FCrowCharacterSwimFXSetting Chest_FX; // 0xf0
	FCrowCharacterSwimFXSetting Waist_FX; // 0x140
};

struct FARSessionPayload {
	int32_t ConfigFlags; // 0x0
	UMaterialInterface* DefaultMeshMaterial; // 0x8
	UMaterialInterface* DefaultWireframeMeshMaterial; // 0x10
};

struct FExposedValueCopyRecord {
	int32_t CopyIndex; // 0x0
	EPostCopyOperation PostCopyOperation; // 0x4
};

struct FLiveLinkTimeCode_Base_DEPRECATED {
	int32_t Seconds; // 0x0
	int32_t Frames; // 0x4
	FLiveLinkFrameRate FrameRate; // 0x8
};

struct FCrowLinearCurveKey {
	float Time; // 0x0
	float Value; // 0x4
};

struct FCrowWorldPropSetting {
	UStaticMesh* TargetMesh; // 0x0
	UDestructibleMesh* DestructibleMesh; // 0x8
	float ImpactMin; // 0x10
	float ImpactMax; // 0x14
	bool IsPointDamage; // 0x18
	bool IsRadialDamage; // 0x19
	bool IsVehicleCollision; // 0x1a
	bool bSimulatePhysics; // 0x1b
	bool bWallTypeBlock; // 0x1c
};

struct FSourceEffectEQSettings {
	TArray<FSourceEffectEQBand> EQBands; // 0x0
};

struct FWorldPSCPool {
	TMap<UParticleSystem*, FPSCPool> WorldParticleSystemPools; // 0x0
};

struct FMeshElementAttributeData {
	FName AttributeName; // 0x0
	int32_t AttributeIndex; // 0x8
	FMeshElementAttributeValue AttributeValue; // 0x10
};

struct FTapDelayInfo {
	ETapLineMode TapLineMode; // 0x0
	float DelayLength; // 0x4
	float Gain; // 0x8
	int32_t OutputChannel; // 0xc
	float PanInDegrees; // 0x10
	int32_t TapId; // 0x14
};

struct FCrowWoldSplineDeformSetting {
	float DeformWidth; // 0x0
	float SideFalloffWidth; // 0x4
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

struct FCrowAmmoTableRow {
	FString HelpText; // 0x168
	ECrowAmmoType AmmoType; // 0x178
	FString EffectKey; // 0x180
	ECrowAmmoFireType AmmoFireType; // 0x190
	uint32_t DropItemCount; // 0x194
	FSoftObjectPath Mesh3P; // 0x198
	bool bIsMoveMeshOrigin; // 0x1b0
	UDamageType* DamegeType; // 0x1b8
	ACrowProjectileBase* ProjectileActor; // 0x1c0
	TMap<FString, ACrowProjectileBase*> ProjectileActorOverride; // 0x1c8
	ACrowProjectileShell* ShellClass; // 0x218
	ACrowFoliageAffectorActor* ExplosionFoliageAffector; // 0x220
};

struct FCustomizedToolMenuSection {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FAnimNode_BoneDrivenController {
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

struct FMovieSceneTimeWarping {
	FFrameNumber Start; // 0x0
	FFrameNumber End; // 0x4
};

struct FCrowVehicleUpdateCacheBase {
	bool IsValidCache; // 0x0
	bool UseSubstepping; // 0x1
	int32_t ElementIndex; // 0x4
	float DeltaTime; // 0x8
	float InverseDeltaTime; // 0xc
	float WorldGravity; // 0x10
	float WaterCrashImpulse; // 0x14
	UWorld* TraceWorld; // 0x18
	AActor* OwnerActor; // 0x20
	USkeletalMeshComponent* BodySKC; // 0x28
	FTransform BodyTransform; // 0x40
	FVector BodyLocation; // 0x70
	FVector BodyForward; // 0x7c
	FVector BodyRight; // 0x88
	FVector BodyUp; // 0x94
	FVector BodyCOM; // 0xa0
	FVector BodyAcceleration; // 0xac
	FVector BodyVelocity; // 0xb8
	FVector BodyAngularVelocity; // 0xc4
	float BodySpeed; // 0xd0
	float BodySpeedForward; // 0xd4
	float BodySpeedRight; // 0xd8
	float TotalMass; // 0xdc
};

struct FAnimSequenceTrackContainer {
	TArray<FRawAnimSequenceTrack> AnimationTracks; // 0x0
	TArray<FName> TrackNames; // 0x10
};

struct FGameplayTagQuery {
	int32_t TokenStreamVersion; // 0x0
	TArray<FGameplayTag> TagDictionary; // 0x8
	TArray<char> QueryTokenStream; // 0x18
	FString UserDescription; // 0x28
	FString AutoDescription; // 0x38
};

struct FLocalizedAppName {
	FString LanguageCode; // 0x0
	FString AppName; // 0x10
};

struct FStaticMeshSourceModel {
	FMeshBuildSettings BuildSettings; // 0x0
	FMeshReductionSettings ReductionSettings; // 0x30
	float LODDistance; // 0x54
	FPerPlatformFloat ScreenSize; // 0x58
	FString SourceImportFilename; // 0x60
};

struct FVertexToCreate {
	FMeshElementAttributeList VertexAttributes; // 0x0
	FVertexID OriginalVertexID; // 0x10
};

struct FCrowWorldSyncDestructible {
	uint16_t Count; // 0x0
	FBitArrayUint32 DestroyedFlags; // 0x8
};

struct FPoseDriverTransform {
	FVector TargetTranslation; // 0x0
	FRotator TargetRotation; // 0xc
};

struct FRootMotionSource_RadialForce {
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

struct FPartyReservation {
	int32_t TeamNum; // 0x0
	FUniqueNetIdRepl PartyLeader; // 0x8
	TArray<FPlayerReservation> PartyMembers; // 0x30
	TArray<FPlayerReservation> RemovedPartyMembers; // 0x40
};

struct FTTVectorTrack {
	UCurveVector* CurveVector; // 0x20
};

struct FBlackboardKeySelector {
	TArray<UBlackboardKeyType*> AllowedTypes; // 0x0
	FName SelectedKeyName; // 0x10
	UBlackboardKeyType* SelectedKeyType; // 0x18
	char SelectedKeyID; // 0x20
	char bNoneIsAllowedValue : 1; // 0x24
};

struct FMovieSceneColorKeyStruct {
	FLinearColor Color; // 0x8
	FFrameNumber Time; // 0x18
};

struct FBasicParticleData {
	FVector position; // 0x0
	float Size; // 0xc
	FVector Velocity; // 0x10
};

struct FVertexAttributesForPolygonHole {
	TArray<FMeshElementAttributeList> VertexAttributeList; // 0x0
};

struct FSteamVRActionSet {
	FString Path; // 0x0
};

struct FSteamVRInputBindingInfo {
	FName DevicePathName; // 0x0
	FName InputPathName; // 0x8
	FName ModeName; // 0x10
	FName SlotName; // 0x18
};

struct FCrowLobbyScoreProfileInfo {
	FString UserNickName; // 0x0
	int32_t Level; // 0x10
	FString ClanName; // 0x18
	int32_t ClanMarkIndex; // 0x28
	int32_t ClanBgIndex; // 0x2c
	int32_t UserSeasonLevel; // 0x30
	int32_t MercenaryRank; // 0x34
	int32_t SeasonRank; // 0x38
	int32_t RecentConquestWinCount; // 0x3c
	int32_t RecentConquestLoseCount; // 0x40
	int32_t RecentSquadMatchAverageRank; // 0x44
	FCrowLobbyScoreProfileRankInfo ConquestRankInfo; // 0x48
	FCrowLobbyScoreProfileRankInfo SquadRankInfo; // 0x68
};

struct FIntPoint {
	int32_t X; // 0x0
	int32_t Y; // 0x4
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

struct FMovieSceneSkeletalAnimationSectionTemplate {
	FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x20
};

struct FPerSkeletonAnimationSharingSetup {
	USkeleton* Skeleton; // 0x0
	USkeletalMesh* SkeletalMesh; // 0x8
	UAnimSharingTransitionInstance* BlendAnimBlueprint; // 0x10
	UAnimSharingAdditiveInstance* AdditiveAnimBlueprint; // 0x18
	UAnimationSharingStateProcessor* StateProcessorClass; // 0x20
	TArray<FAnimationStateEntry> AnimationStates; // 0x28
};

struct FRenderingPolygonGroup {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
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

struct FCrowWorldSyncPartsOverride {
	int16_t PartsIndex; // 0x0
	FTransform RelativeTransform; // 0x10
};

struct FCrowWorldSyncCameraInfo {
	FVector CameraRebasedLocation; // 0x0
	FVector CameraLocation; // 0xc
	FMatrix CameraMatrix; // 0x20
	bool IsAiming; // 0x60
	bool IsLookingTablet; // 0x61
};

struct FSplineCurves {
	FInterpCurveVector position; // 0x0
	FInterpCurveQuat Rotation; // 0x18
	FInterpCurveVector Scale; // 0x30
	FInterpCurveFloat ReparamTable; // 0x48
	USplineMetadata* MetaData; // 0x60
	uint32_t Version; // 0x68
};

struct FVariantDependency {
	TSoftObjectPtr<UVariantSet> VariantSet; // 0x0
	TSoftObjectPtr<UVariant> Variant; // 0x28
	bool bEnabled; // 0x50
};

struct FEquirectProps {
	FBox2D LeftUVRect; // 0x0
	FBox2D RightUVRect; // 0x14
	FVector2D LeftScale; // 0x28
	FVector2D RightScale; // 0x30
	FVector2D LeftBias; // 0x38
	FVector2D RightBias; // 0x40
};

struct FAnimNode_StateMachine {
	int32_t StateMachineIndexInClass; // 0x10
	int32_t MaxTransitionsPerFrame; // 0x14
	bool bSkipFirstUpdateTransition; // 0x18
	bool bReinitializeOnBecomingRelevant; // 0x19
};

struct FCrowWorldActorLODSetting {
	TArray<float> LODLevelCameraDistance; // 0x0
	int32_t MinNumberOfCores; // 0x10
	int32_t MaxNumberOfCores; // 0x14
	int32_t MinCountPerThread; // 0x18
};

struct FNiagaraHalfVector2 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
};

struct FTranslationTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FMagicLeapPolygon {
	TArray<FVector> Vertices; // 0x0
};

struct FCrowSupplyItemInfo {
	int32_t SupplyItemTableIndex; // 0x0
	int32_t MaxSpawnCount; // 0x4
};

struct FCLSSpeedAtteunationOnSlope {
	float SpeedAttenuationSlopeStartAngle; // 0x0
	float SpeedAttenuationSlopeEndAngle; // 0x4
	float SpeedAtteunationTotalValue; // 0x8
	float SprintInhibitionSlopeAngle; // 0xc
};

struct FCrowWorldLightGroup {
	FVector Center; // 0x0
	float Radius; // 0xc
	float OpenRatio; // 0x10
	TArray<FVector> LocationArray; // 0x18
};

struct FPerPlatformInt {
	int32_t Default; // 0x0
};

struct FAkHololensAdvancedInitializationSettings {
	uint32_t AudioAPI; // 0x38
	bool GlobalFocus; // 0x3c
	bool UseHeadMountedDisplayAudioDevice; // 0x3d
};

struct FWeaponAnimSequenceSet {
	FWeaponAnimSequence Stand; // 0x0
	FWeaponAnimSequence Crouch; // 0x10
	FWeaponAnimSequence Prostrate; // 0x20
};

struct FUniqueNetIdRepl {
	TArray<char> ReplicationBytes; // 0x18
};

struct FAnimParentNodeAssetOverride {
	UAnimationAsset* NewAsset; // 0x0
	FGuid ParentNodeGuid; // 0x8
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

struct FCLSMovementSettings {
	float WalkSpeed; // 0x0
	float RunSpeed; // 0x4
	float SprintSpeed; // 0x8
	UCurveVector* MovementCurve; // 0x10
	UCurveFloat* RotationRateCurve; // 0x18
};

struct FAkAndroidAdvancedInitializationSettings {
	uint32_t AudioAPI; // 0x38
	bool RoundFrameSizeToHardwareSize; // 0x3c
};

struct FDatasmithTessellationOptions {
	float ChordTolerance; // 0x0
	float MaxEdgeLength; // 0x4
	float NormalTolerance; // 0x8
	EDatasmithCADStitchingTechnique StitchingTechnique; // 0xc
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

struct FWeaponShellEjectInfo {
	float EjectingBulletMinSpeed; // 0x0
	float EjectingBulletMaxSpeed; // 0x4
	float EjectingBulletHorizontalAngle; // 0x8
	float EjectingBulletVerticalAngle; // 0xc
	float EjectingBulletSpinMinSpeed; // 0x10
	float EjectingBulletSpinMaxSpeed; // 0x14
	UParticleSystem* EjectingBulletEffect; // 0x18
};

struct FNameCurve {
	TArray<FNameCurveKey> Keys; // 0x68
};

struct FHapticFeedbackDetails_Curve {
	FRuntimeFloatCurve Frequency; // 0x0
	FRuntimeFloatCurve Amplitude; // 0x88
};

struct FCrowPersonalMailInfo {
	FString Sender; // 0x10
};

struct FCLSLadderAnimSet {
	FCLSAnimation LadderBottomEnter; // 0x0
	FCLSAnimation LadderBottomExit; // 0x20
	FCLSAnimation LadderTopEnter; // 0x40
	FCLSAnimation LadderTopExit; // 0x60
	FCLSAnimation LadderIdle; // 0x80
	FCLSAnimation LadderUp; // 0xa0
	FCLSAnimation LadderDown; // 0xc0
	UAnimSequence* NoRootMotionLadderUp; // 0xe0
	UAnimSequence* NoRootMotionLadderDown; // 0xe8
};

struct FCrowLobbyScoreWeapon {
	int32_t ExpShareIndex; // 0x0
	int64_t Exp; // 0x8
	int32_t WeasponUsedGainExp; // 0x10
	int32_t Kill; // 0x14
	int32_t Headshot; // 0x18
	int32_t Assist; // 0x1c
	int32_t Faint; // 0x20
	int64_t Damage; // 0x28
	int32_t UsedCount; // 0x30
	int64_t RecoveryHp; // 0x38
	int32_t HpUsedCount; // 0x40
	int32_t TankKill; // 0x44
	int32_t HelicopterKill; // 0x48
	int32_t Vehiclekill; // 0x4c
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

struct FInterpolationParameter {
	float InterpolationTime; // 0x0
	EFilterInterpolationType InterpolationType; // 0x4
};

struct FLocoCameraSettingsByStance {
	FLocoCameraSettingsByGait Standing; // 0x0
	FLocoCameraSettingsByGait Crouching; // 0x50
	FLocoCameraSettingsByGait Prone; // 0xa0
	FLocoCameraSettingsByGait Swimming; // 0xf0
};

struct FCrowResultMVPTableRow {
	FString HelpText; // 0x168
	FText NameKey; // 0x178
	FText DescriptionKey; // 0x190
	UPaperSprite* Icon; // 0x1a8
	UAnimMontage* AnimMontage; // 0x1b0
	UAnimMontage* LobbyAnimMontage; // 0x1b8
	TArray<FCrowResultMVPObjectInfo> Objects; // 0x1c0
};

struct FAnimNode_PoseDriver {
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

struct FAnimNode_UseCachedPose {
	FPoseLink LinkToCachingNode; // 0x10
	FName CachePoseName; // 0x20
};

struct FCrowWorldSyncClassLink {
	int32_t ClassIndex; // 0x0
	int32_t InstanceCount; // 0x4
	uint32_t PropFlags; // 0x8
	FString ClassFullPath; // 0x10
};

struct FCLSMovementSettingsData {
	FCLSMovementSettingsStance OnGround; // 0x8
	FCLSMovementSettingsStance OnInjured; // 0x68
	FCLSMovementSettingsSwim OnSwimming; // 0xc8
	FCLSMovementSettingsLadder OnLadder; // 0x110
};

struct FAkAudioSession {
	EAkAudioSessionCategory AudioSessionCategory; // 0x0
	uint32_t AudioSessionCategoryOptions; // 0x4
	EAkAudioSessionMode AudioSessionMode; // 0x8
};

struct FCachedAnimStateArray {
	TArray<FCachedAnimStateData> States; // 0x0
};

struct FButtonStyle {
	FSlateBrush Normal; // 0x8
	FSlateBrush Hovered; // 0x90
	FSlateBrush Pressed; // 0x118
	FSlateBrush Disabled; // 0x1a0
	FMargin NormalPadding; // 0x228
	FMargin PressedPadding; // 0x238
	FSlateSound PressedSlateSound; // 0x248
	FSlateSound HoveredSlateSound; // 0x260
};

struct FCurveEdTab {
	FString TabName; // 0x0
	TArray<FCurveEdEntry> Curves; // 0x10
	float ViewStartInput; // 0x20
	float ViewEndInput; // 0x24
	float ViewStartOutput; // 0x28
	float ViewEndOutput; // 0x2c
};

struct FCrowWeaponSlot {
	char Slot; // 0x0
	uint32_t ItemIndex; // 0x4
	uint32_t SkinIndex; // 0x8
	uint32_t CharmIndex; // 0xc
	TArray<int32_t> Stickers; // 0x10
	TArray<FCrowWeaponPartsSlot> WearParts; // 0x20
};

struct FInterpCurveVector2D {
	TArray<FInterpCurvePointVector2D> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FCrowWorldClientCluster {
	FCrowWorldReplicationCluster ClusterData; // 0x0
	TMap<uint32_t, ACrowWorldActor*> WorldActors; // 0x20
};

struct FNiagaraPlatformSetConflictInfo {
	int32_t SetAIndex; // 0x0
	int32_t SetBIndex; // 0x4
	TArray<FNiagaraPlatformSetConflictEntry> Conflicts; // 0x8
};

struct FNiagaraHalf {
	uint16_t Value; // 0x0
};

struct FMovieSceneBoolPropertySectionTemplate {
	FMovieSceneBoolChannel BoolCurve; // 0x38
};

struct FAlwaysRelevantActorInfo {
	UNetConnection* Connection; // 0x0
	AActor* LastViewer; // 0x8
	AActor* LastViewTarget; // 0x10
};

struct FCrowLandWheelsVirtualSuspension {
	AActor* OwnerActor; // 0x0
	char bValidElement : 1; // 0x8
	char bVehicleAwake : 1; // 0x8
	int32_t ElementIndex; // 0xc
	int32_t ElementCountPerGroup; // 0x10
	ACrowVehicleUpdater* VehicleUpdater; // 0x18
	FCrowTireAndWheelSetting WheelSetting; // 0x20
	FCrowLandWheelsTankSetting TankSetting; // 0x130
	float TrackLocalY; // 0x1f0
	USplineComponent* TrackSpline; // 0x1f8
	UInstancedStaticMeshComponent* TrackISM; // 0x200
	TArray<FCrowLandWheelsTrackSplineNode> SplineNodes; // 0x228
	TArray<FTransform> TrackInstanceTransforms; // 0x238
	FVector DrivingForceLocation; // 0x248
	FVector FrontWheelLocation; // 0x254
	FVector BackWheelLocation; // 0x260
	FVector WorldLocation; // 0x26c
	FVector SuspensionVelocity; // 0x278
	int16_t WheelGroupIndex; // 0x284
	int32_t VirtualSuspensionIndex; // 0x288
	float CountFloat; // 0x28c
	float TotalMassForSuspension; // 0x290
	float TotalTravelDistance; // 0x294
	int32_t TrackUpdateFrame; // 0x298
	FCrowLandWheelsStatusRotation RotationCurrent; // 0x29c
	FCrowLandWheelsStatusSurface SurfaceCurrent; // 0x2b8
	FCrowLandWheelsStatusSpring SpringCurrent; // 0x380
	FVector SubstepDrivingForce; // 0x390
	FVector AccelerationForceFront; // 0x39c
	FVector AccelerationForceBack; // 0x3a8
	float DebugDrivingForceForward; // 0x3b4
	float DebugDrivingForceRight; // 0x3b8
	float DebugDrivingSpringDefault; // 0x3bc
};

struct FPerBoneInterpolation {
	FBoneReference BoneReference; // 0x0
	float InterpolationSpeedPerSec; // 0x10
};

struct FCrowVehiclePoolVirtualSuspension {
	int32_t CountPerGroup; // 0x0
	int32_t MaxElementIndex; // 0x4
	TArray<FCrowLandWheelsVirtualSuspension> PoolArray; // 0x8
	TArray<int32_t> RecycleIndexes; // 0x18
};

struct FCrowWorldReplicationSyncData {
	TArray<uint32_t> SectorDropArray; // 0x0
	TArray<uint32_t> ClusterDropArray; // 0x10
	TArray<FCrowWorldReplicationCluster> ClusterArray; // 0x20
	TArray<FCrowWorldReplicationSector> SectorArray; // 0x30
};

struct FNiagaraTypeDefinition {
	UObject* ClassStructOrEnum; // 0x0
	uint16_t UnderlyingType; // 0x8
};

struct FCrowClothTableBaseRow {
	FString HelpText; // 0x168
	FString SortGroup; // 0x178
	USkeletalMesh* ClothMesh_FP; // 0x188
	USkeletalMesh* ClothMesh_FP_Loose; // 0x190
	USkeletalMesh* ClothMesh_TP; // 0x198
	USkeletalMesh* ClothMesh_TP_Loose; // 0x1a0
	USkeletalMesh* ClothMesh_FP_Female; // 0x1a8
	USkeletalMesh* ClothMesh_FP_Loose_Female; // 0x1b0
	USkeletalMesh* ClothMesh_TP_Female; // 0x1b8
	USkeletalMesh* ClothMesh_TP_Loose_Female; // 0x1c0
	UPaperSprite* DefaultIcon_Female; // 0x1c8
	TArray<FCrowChangeRenderClothParts> ChangeRenderClothParts; // 0x1d0
	TArray<UMaterialInterface*> Materials1P; // 0x1e0
	TArray<UMaterialInterface*> Materials3P; // 0x1f0
	TArray<UMaterialInterface*> Materials1P_Female; // 0x200
	TArray<UMaterialInterface*> Materials3P_Female; // 0x210
	FName WeaponAttachSocket; // 0x220
	ECrowClothExpertSkill ExpertSkill; // 0x228
	char ExpertSkillCount; // 0x22c
	TArray<ECrowAmmoType> ExpertSkillAmmoTypeArray; // 0x230
	FText ExpertSkillDesc; // 0x240
};

struct FInterpControlPoint {
	FVector PositionControlPoint; // 0x0
	bool bPositionIsRelative; // 0xc
};

struct FSoundTrackKey {
	float Time; // 0x0
	float Volume; // 0x4
	float Pitch; // 0x8
	USoundBase* Sound; // 0x10
};

struct FCLSComponentTransform {
	FMatrix TransformMatrix; // 0x0
	FTransform Transform; // 0x40
	UPrimitiveComponent* Component; // 0x70
	FHitResult HitResult; // 0x78
	FString ComponentName; // 0x108
};

struct FLiveLinkBaseFrameData {
	FLiveLinkWorldTime WorldTime; // 0x0
	FLiveLinkMetaData MetaData; // 0x10
	TArray<float> PropertyValues; // 0x70
};

struct FST_PreImpactInfo {
	FVector LastLocation; // 0x0
	float LastHitTime; // 0xc
};

struct FCrowSubTitleDataRow {
	int32_t Index; // 0x8
	TArray<FCrowSubTitleInfo> ArraySubTitle; // 0x10
};

struct FCrowWorldGenerateSubLevelSetting {
	FString MapAssetName; // 0x0
	FString GeneratedSubLevelFolder; // 0x10
	TArray<FString> EditorSubLevelKeywords; // 0x20
	TArray<FString> EditorSubLevelExceptions; // 0x30
	TArray<FString> AtmosphereKeywords; // 0x40
	UHierarchicalLODSetup* HLODSetupActorLevel; // 0x50
	UHierarchicalLODSetup* HLODSetupFarLevel; // 0x58
	UHierarchicalLODSetup* HLODSetupFlgLevel; // 0x60
};

struct FCLSDynamicMontageParams {
	UAnimSequenceBase* Animation; // 0x0
	float BlendInTime; // 0x8
	float BlendOutTime; // 0xc
	float PlayRate; // 0x10
	float StartTime; // 0x14
};

struct FCrowPostProcessQualitySetting {
	TArray<UMaterialInterface*> MaterialInterfaces; // 0x0
	TSet<FString> MaterialNames; // 0x10
};

struct FSimpleMemberReference {
	UObject* MemberParent; // 0x0
	FName MemberName; // 0x8
	FGuid MemberGuid; // 0x10
};

struct FIndexArray {
	TArray<int32_t> Indexes; // 0x0
};

struct FTetherCableProperties {
	float CableWidth; // 0x0
	FTetherCableSimulationOptions SimulationOptions; // 0x4
	ECableMeshGenerationType MeshType; // 0x34
	FBasicMeshProperties BasicMeshProperties; // 0x38
	FCustomMeshProperties CustomMeshProperties; // 0x58
	TArray<UMaterialInterface*> Materials; // 0x90
};

struct FWorldMeteorEventInfo {
	ECrowMeteorEventState MeteorState; // 0x0
	FVector CurrentLocation; // 0x4
};

struct FAnimNode_TwoWayBlend {
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

struct FCLSCharacterAdditionalVehicle {
	ECLSVehicleType VehicleType; // 0x0
	ECLSVehicleSeatType VehicleSeatType; // 0x1
	float MovingDirectionForwardAngleRatio; // 0x4
	float MovingDirectionRightAngleRatio; // 0x8
	FVector2D Strain; // 0xc
	bool bInvalidData; // 0x14
};

struct FSettingBehaviourToDisplayText {
	FName BehaviourName; // 0x0
	FText DisplayText; // 0x8
	FText LocalizationKey; // 0x20
};

struct FSubtitleCue {
	FText Text; // 0x0
	float Time; // 0x18
};

struct FNameCurveKey {
	float Time; // 0x0
	FName Value; // 0x4
};

struct FAnimNode_CCDIK {
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

struct FCrowBattleSetup {
	float MaxHealth; // 0x0
	float DyingSecond; // 0x4
	float ReviveSecond; // 0x8
	float StopBleedingPercent; // 0xc
	float OverBleedingPercent; // 0x10
	float ReviveHealth; // 0x14
	int32_t CanReviveMAX; // 0x18
	float DyingHealth; // 0x1c
};

struct FCrowConquestMeteorInfo {
	bool bIsEnable; // 0x0
	float ActiveTimeMin; // 0x4
	float ActiveTimeMax; // 0x8
	int32_t ActiveCountMin; // 0xc
	int32_t ActiveCountMax; // 0x10
	float NextActiveDelayMin; // 0x14
	float NextActiveDelayMax; // 0x18
	FWeaponDamageSettings GasDamage; // 0x20
	UDamageType* GasDamegeType; // 0x48
};

struct FCrowClassReplicationInfo {
	FString Description; // 0x0
	AActor* Class; // 0x10
	float CullDistance; // 0x18
};

struct FPerPlatformFloat {
	float Default; // 0x0
};

struct FCrowCharacterPartDamageData {
	FString HelpText; // 0x8
	FName BoneName; // 0x18
	float DamageMultiply; // 0x20
	UParticleSystem* Particle_Bullet; // 0x28
	UParticleSystem* Particle_Slash; // 0x30
	UParticleSystem* Particle_ZombiePunch; // 0x38
	FCrowDecalInfo BulletDecalInfo; // 0x40
	FCrowDecalInfo BodyDecalInfo; // 0x90
	FCrowDecalInfo MeleeDecalInfo; // 0xe0
	FCrowDecalInfo MeleeBodyDecalInfo; // 0x130
	UParticleSystem* Particle_Bullet_Zombie; // 0x180
	UParticleSystem* Particle_Slash_Zombie; // 0x188
	UParticleSystem* Particle_ZombiePunch_Zombie; // 0x190
	FCrowDecalInfo BulletDecalInfo_Zombie; // 0x198
	FCrowDecalInfo BodyDecalInfo_Zombie; // 0x1e8
	FCrowDecalInfo MeleeDecalInfo_Zombie; // 0x238
	FCrowDecalInfo MeleeBodyDecalInfo_Zombie; // 0x288
	UAkAudioEvent* HitSound_Bullet_W; // 0x2d8
	UAkAudioEvent* HitSound_Slash_W; // 0x2e0
	TMap<ECrowWeaponUIType, float> WeaponTypeMultipleDamage; // 0x2e8
};

struct FRigTransformConstraint {
	EConstraintTransform TranformType; // 0x0
	FName ParentSpace; // 0x4
	float Weight; // 0xc
};

struct FCrowBattlePassPackageTableRow {
	FString HelpText; // 0x8
	char SeasonIndex; // 0x18
	char FreePayType; // 0x19
	uint16_t NeededLevel; // 0x1a
	uint32_t RewardIndex; // 0x1c
};

struct FAkXboxOneApuHeapInitializationSettings {
	uint32_t CachedSize; // 0x0
	uint32_t NonCachedSize; // 0x4
};

struct FCrowFoliageFXRow {
	TSoftObjectPtr<UParticleSystem> Particle; // 0x8
	TSoftObjectPtr<UNiagaraSystem> Particle_N; // 0x30
	UAkAudioEvent* Sound_W; // 0x58
	FString GroupName; // 0x60
	FString EnterState; // 0x70
	FString OverlapState; // 0x80
	FString ExitState; // 0x90
	FString VolumeParamName; // 0xa0
};

struct FCrowWorldEventWidgetInfo {
	ECrowWorldEventWidgetType Type; // 0x0
	FText Titile; // 0x8
	FText Description; // 0x20
	UObject* Image; // 0x38
	ACrowWorldEventBase* EventBase; // 0x40
};

struct FWaterSplineCurveDefaults {
	float DefaultDepth; // 0x0
	float DefaultWidth; // 0x4
	float DefaultVelocity; // 0x8
	float DefaultAudioIntensity; // 0xc
};

struct FCrowWorldSplinePropSetting {
	bool bUserStartProp; // 0x0
	ACrowWorldPropActor* StartProp; // 0x8
	bool bUseEndProp; // 0x10
	ACrowWorldPropActor* EndProp; // 0x18
};

struct FUpdateLevelVisibilityLevelInfo {
	FName PackageName; // 0x0
	FName Filename; // 0x8
	char bIsVisible : 1; // 0x10
};

struct FAnimNotifyEvent {
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

struct FClothLODDataCommon {
	FClothPhysicalMeshData PhysicalMeshData; // 0x0
	FClothCollisionData CollisionData; // 0xf8
	bool bUseMultipleInfluences; // 0x138
	float SkinningKernelRadius; // 0x13c
};

struct FClothCollisionPrim_SphereConnection {
	int32_t SphereIndices[0x2]; // 0x0
};

struct FModularSynthPreset {
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

struct FCrowResultScenePlayer {
	AActor* PlayerTransform; // 0x0
	UAnimMontage* AnimMontage; // 0x8
};

struct FCrowSwimGroundDustEffect {
	TSoftObjectPtr<UParticleSystem> ImpactParticle; // 0x0
};

struct FMeshTriCoordinate {
	int32_t Tri; // 0x0
	FVector BaryCoord; // 0x4
};

struct FCrowVehicleImpactDamageData {
	float VelocitySizeMin; // 0x0
	float VelocitySizeMax; // 0x4
	float Damage; // 0x8
};

struct FKeySlotCategoryInfo {
	ESettingKeySlotCategory KeySlotCategory; // 0x0
	TArray<FName> ActionOrAxisNames; // 0x8
};

struct FDataTableCategoryHandle {
	UDataTable* DataTable; // 0x0
	FName ColumnName; // 0x8
	FName RowContents; // 0x10
};

struct FWaterBodyHeightmapSettings {
	EWaterBrushBlendType BlendMode; // 0x0
	bool bInvertShape; // 0x1
	FWaterFalloffSettings FalloffSettings; // 0x4
	FWaterBrushEffects Effects; // 0x18
	int32_t Priority; // 0x78
};

struct FARSessionStatus {
	FString AdditionalInfo; // 0x0
	EARSessionStatus Status; // 0x10
};

struct FCrowClanExpTableRow {
	int32_t Level; // 0xc
	int32_t Exp; // 0x10
	int32_t HappyTimeBonus; // 0x14
};

struct FGameNameRedirect {
	FName OldGameName; // 0x0
	FName NewGameName; // 0x8
};

struct FSoundWaveEnvelopeTimeData {
	float Amplitude; // 0x0
	float TimeSec; // 0x4
};

struct FMovieSceneEventSectionData {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FEventPayload> KeyValues; // 0x18
};

struct FNiagaraEventScriptProperties {
	EScriptExecutionMode ExecutionMode; // 0x28
	uint32_t SpawnNumber; // 0x2c
	uint32_t MaxEventsPerFrame; // 0x30
	FGuid SourceEmitterID; // 0x34
	FName SourceEventName; // 0x44
	bool bRandomSpawnNumber; // 0x4c
	uint32_t MinSpawnNumber; // 0x50
};

struct FScrollBoxStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x90
	FSlateBrush LeftShadowBrush; // 0x118
	FSlateBrush RightShadowBrush; // 0x1a0
};

struct FMovieSceneSlomoSectionTemplate {
	FMovieSceneFloatChannel SlomoCurve; // 0x20
};

struct FGameplayTagRedirect {
	FName OldTagName; // 0x0
	FName NewTagName; // 0x8
};

struct FVehicleInputRate {
	float RiseRate; // 0x0
	float FallRate; // 0x4
};

struct FScalarParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel ParameterCurve; // 0x8
};

struct FCrowRespawnTimeInfo {
	float BodyDisplay; // 0x0
	float KillerSpectating; // 0x4
	float MyTeamSpectating; // 0x8
	float RespawnWait; // 0xc
	float SkipSpectating; // 0x10
};

struct FCrowSaveGameServerExpInfo {
	uint32_t TotalBuffExpPoint; // 0x8
	uint32_t TakeExpPoint[0xa]; // 0xc
	TArray<FCrowTakeWeaponExpInfo> TakeWeaponExpInfo; // 0x38
	TArray<FCrowMissionInfo> MissionStateInfo; // 0x48
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

struct FCrowWorldLandmarkData {
	TArray<uint32_t> ActorIndexArray; // 0x0
};

struct FUnderwaterPostProcessSettings {
	bool bEnabled; // 0x0
	float Priority; // 0x4
	float BlendRadius; // 0x8
	float BlendWeight; // 0xc
	FPostProcessSettings PostProcessSettings; // 0x10
	UMaterialInterface* UnderwaterPostProcessMaterial; // 0x560
};

struct FCrowItemData {
	ECrowItemType ItemType; // 0x8
	uint32_t ItemIndex; // 0xc
	uint32_t ItemCount; // 0x10
	uint64_t ItemInvenNo; // 0x18
	char ItemState; // 0x20
	uint32_t ItemCost; // 0x24
	char ItemTeamID; // 0x28
};

struct FNavCollisionCylinder {
	FVector Offset; // 0x0
	float Radius; // 0xc
	float Height; // 0x10
};

struct FCrowVehicleImpactDamageTableRow {
	EVehicleIdentity VehicleType; // 0x8
	TArray<FCrowVehicleImpactDamageData> ImpactDataArray; // 0x10
};

struct FARPlaneUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	FVector Center; // 0x50
	FVector Extents; // 0x5c
	TArray<FVector> BoundaryVertices; // 0x68
	EARObjectClassification ObjectClassification; // 0x78
};

struct FCharacterHitInfoClient {
	FVector FireLocation; // 0x0
	float ActualDamage; // 0xc
	FName BoneName; // 0x10
	char AttackerType; // 0x18
};

struct FSkelMeshMergeUVTransformMapping {
	TArray<FSkelMeshMergeUVTransform> UVTransformsPerMesh; // 0x0
};

struct FCrowWorldDataHandlerComponentItem {
	USceneComponent* ComponentClass; // 0x0
	UCrowWorldAsset* WorldAssetClass; // 0x8
};

struct FVirtualKeyboardOptions {
	bool bEnableAutocorrect; // 0x0
};

struct FMovieSceneSegmentIdentifier {
	int32_t IdentifierIndex; // 0x0
};

struct FBlackboardEntry {
	FName EntryName; // 0x0
	UBlackboardKeyType* KeyType; // 0x8
	char bInstanceSynced : 1; // 0x10
};

struct FCrowMailAccountReward {
	FString HelpText; // 0x10
	uint32_t RewardIndex; // 0x20
	uint32_t RewardSentenceIndex; // 0x24
	uint32_t RewardTimeIndex; // 0x28
};

struct FAnimPhysPlanarLimit {
	FBoneReference DrivingBone; // 0x0
	FTransform PlaneTransform; // 0x10
};

struct FChildActorAttachedActorInfo {
	TWeakObjectPtr<AActor> Actor; // 0x0
	FName SocketName; // 0x8
	FTransform RelativeTransform; // 0x10
};

struct FPassengerSeat {
	int32_t Index; // 0x0
	APawn* Passenger; // 0x8
	bool EnableBoard; // 0x10
	EVehicleSeatType SeatType; // 0x11
};

struct FLevelSequenceBindingReferenceArray {
	TArray<FLevelSequenceBindingReference> References; // 0x0
};

struct FAnimGraphBlendOptions {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
};

struct FSkeletalMeshSamplingRegionMaterialFilter {
	FName MaterialName; // 0x0
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

struct FAkCommunicationSettingsWithCommSelection {
	EAkCommSystem CommunicationSystem; // 0x20
};

struct FCrowCloudVisualizeMesh {
	UStaticMeshComponent* CloudMesh; // 0x0
	UStaticMeshComponent* InsideMesh; // 0x8
	UStaticMeshComponent* OutsideMesh; // 0x10
	UStaticMeshComponent* FixArtifactsMesh; // 0x18
	UStaticMeshComponent* CurrentCloudMesh; // 0x20
	UStaticMeshComponent* CurrentBoundaryMesh; // 0x28
	TArray<UStaticMeshComponent*> Meshes; // 0x30
};

struct FMovieSceneBindingOverrideData {
	FMovieSceneObjectBindingID ObjectBindingId; // 0x0
	TWeakObjectPtr<UObject> Object; // 0x18
	bool bOverridesDefault; // 0x20
};

struct FActorPerceptionUpdateInfo {
	int32_t TargetId; // 0x0
	TWeakObjectPtr<AActor> Target; // 0x4
	FAIStimulus Stimulus; // 0xc
};

struct FSpectatorReservation {
	FUniqueNetIdRepl SpectatorId; // 0x0
	FPlayerReservation Spectator; // 0x28
};

struct FSlotAnimationTrack {
	FName SlotName; // 0x0
	FAnimTrack AnimTrack; // 0x8
};

struct FAnimationGroupReference {
	FName GroupName; // 0x0
	EAnimGroupRole GroupRole; // 0x8
	EAnimSyncGroupScope GroupScope; // 0x9
};

struct FCrowLandWheelsUpdateCache {
	FCrowLandWheelsBodySetting BodySetting; // 0xe0
	float ChasisMassPerWheel; // 0x200
	float TotalMassPerWheel; // 0x204
	int16_t ActiveWheelCount; // 0x208
};

struct FAudioComponentParam {
	FName ParamName; // 0x0
	float FloatParam; // 0x8
	bool BoolParam; // 0xc
	int32_t IntParam; // 0x10
	USoundWave* SoundWaveParam; // 0x18
};

struct FMagicLeapARPinQuery {
	TSet<EMagicLeapARPinType> Types; // 0x0
	int32_t MaxResults; // 0x50
	FVector TargetPoint; // 0x54
	float Radius; // 0x60
	bool bSorted; // 0x64
};

struct FWidgetNavigationData {
	EUINavigationRule Rule; // 0x0
	FName WidgetToFocus; // 0x4
	TWeakObjectPtr<UWidget> Widget; // 0xc
	FDelegate CustomDelegate; // 0x14
};

struct FBoneFilter {
	bool bExcludeSelf; // 0x0
	FName BoneName; // 0x4
};

struct FCLSTPTraceParams {
	FVector TraceOrigin; // 0x0
	float TraceRadius; // 0xc
	ETraceTypeQuery TraceChannel; // 0x10
};

struct FSubdivisionLimitData {
	TArray<FVector> VertexPositions; // 0x0
	TArray<FSubdivisionLimitSection> Sections; // 0x10
	TArray<FSubdividedWireEdge> SubdividedWireEdges; // 0x20
};

struct FCrowBuildingModularItemMaterial {
	TArray<UMaterialInterface*> StyleMaterials; // 0x0
};

struct FOptionalMovieSceneBlendType {
	EMovieSceneBlendType BlendType; // 0x0
	bool bIsValid; // 0x1
};

struct FAutomationEvent {
	EAutomationEventType Type; // 0x0
	FString Message; // 0x8
	FString Context; // 0x18
	FGuid Artifact; // 0x28
};

struct FMovieSceneObjectPropertyTemplate {
	FMovieSceneObjectPathChannel ObjectChannel; // 0x38
};

struct FCrowProcessMineralInfo {
	float Percent; // 0x0
	FString DialogTextIndex; // 0x8
};

struct FEngineServiceAuthDeny {
	FString UserName; // 0x0
	FString UserToDeny; // 0x10
};

struct FSkelMeshMergeSectionMapping_BP {
	TArray<int32_t> SectionIDs; // 0x0
};

struct FCrowLevelStreamingDistanceTableRow {
	int32_t StreamingDistance; // 0x8
};

struct FVMFunctionSpecifier {
	FName Key; // 0x0
	FName Value; // 0x8
};

struct FCrowSurfaceDataSkidMark {
	TSoftObjectPtr<UParticleSystem> MarkParticle; // 0x0
	float MinSpeed; // 0x28
	TSoftObjectPtr<UParticleSystem> TireSlipParticle; // 0x30
	TSoftObjectPtr<UParticleSystem> TireSlipFlatParticle; // 0x58
	TSoftObjectPtr<UParticleSystem> TireSlipDestroyParticle; // 0x80
	float MinSlipForward; // 0xa8
	float MinSlipRight; // 0xac
	float MinSlipRPM; // 0xb0
	TSoftObjectPtr<UParticleSystem> TouchDownParticle; // 0xb8
	float MinHeightTouchDown; // 0xe0
};

struct FCustomMeshProperties {
	TSoftObjectPtr<UStaticMesh> SourceMeshReference; // 0x0
	float OffsetRotation; // 0x28
	int32_t NumInstances; // 0x2c
	bool bFitToCableWidth; // 0x30
};

struct FTimerHandle {
	uint64_t Handle; // 0x0
};

struct FCrowSubTitleInfo {
	FTimespan StartTime; // 0x0
	FTimespan EndTime; // 0x8
	FText Description; // 0x10
};

struct FCrowVloumetricCloudMaterialDynamic {
	int32_t MaxCount; // 0x0
	UMaterialInstanceDynamic* Mid; // 0x8
};

struct FMovieSceneIntegerPropertySectionTemplate {
	FMovieSceneIntegerChannel IntegerCurve; // 0x38
	EMovieSceneBlendType BlendType; // 0xc8
};

struct FLandmassFalloffSettings {
	EBrushFalloffMode FalloffMode; // 0x0
	float FalloffAngle; // 0x4
	float FalloffWidth; // 0x8
	float EdgeOffset; // 0xc
	float ZOffset; // 0x10
};

struct FMovieSceneEvaluationTemplate {
	TMap<FMovieSceneTrackIdentifier, FMovieSceneEvaluationTrack> Tracks; // 0x0
	FGuid SequenceSignature; // 0xa0
	FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber; // 0xb0
	FMovieSceneTemplateGenerationLedger TemplateLedger; // 0xb8
};

struct FSoundModulationDefaultRoutingSettings {
	EModulationRouting VolumeRouting; // 0x40
	EModulationRouting PitchRouting; // 0x41
	EModulationRouting HighpassRouting; // 0x42
	EModulationRouting LowpassRouting; // 0x43
};

struct FNiagaraVariableAttributeBinding {
	FNiagaraVariableBase ParamMapVariable; // 0x0
	FNiagaraVariable DataSetVariable; // 0x10
	FNiagaraVariable RootVariable; // 0x30
	ENiagaraBindingSource BindingSourceMode; // 0x50
	char bBindingExistsOnSource : 1; // 0x54
	char bIsCachedParticleValue : 1; // 0x54
};

struct FMovieScene2DTransformMask {
	uint32_t Mask; // 0x0
};

struct FBlueprintEditorPromotionSettings {
	FFilePath FirstMeshPath; // 0x0
	FFilePath SecondMeshPath; // 0x10
	FFilePath DefaultParticleAsset; // 0x20
};

struct FAnimNode_Inertialization {
	FPoseLink Source; // 0x10
};

struct FBranchingPoint {
	FName EventName; // 0x30
	float DisplayTime; // 0x38
	float TriggerTimeOffset; // 0x3c
};

struct FFindFloorResult {
	char bBlockingHit : 1; // 0x0
	char bWalkableFloor : 1; // 0x0
	char bLineTrace : 1; // 0x0
	float FloorDist; // 0x4
	float LineDist; // 0x8
	FHitResult HitResult; // 0xc
};

struct FPackedRGB10A2N {
	int32_t Packed; // 0x0
};

struct FSolverTrailingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FCrowVehicleEntityPoolLandWheels {
	int32_t CountPerGroup; // 0x0
	int32_t MaxElementIndex; // 0x4
	TArray<FCrowVehicleEntityLandWheels> PoolArray; // 0x8
	TArray<int32_t> RecycleIndexes; // 0x18
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

struct FCrowBuildingSubMesh {
	int32_t SubMeshPartsIndex; // 0x0
	FTransform RelativeTransform; // 0x10
};

struct FCrowIngameRecordIntValue {
	uint32_t Value; // 0x0
	uint32_t IncValue; // 0x4
};

struct FLandscapeInfoLayerSettings {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
	FName LayerName; // 0x8
};

struct FLevelSequenceAnimSequenceLinkItem {
	FGuid SkelTrackGuid; // 0x0
	FSoftObjectPath PathToAnimSequence; // 0x10
	bool bExportTransforms; // 0x28
	bool bExportCurves; // 0x29
	bool bRecordInWorldSpace; // 0x2a
};

struct FNamedTransform {
	FTransform Value; // 0x0
	FName Name; // 0x30
};

struct FBrushEffectDisplacement {
	float DisplacementHeight; // 0x0
	float DisplacementTiling; // 0x4
	UTexture2D* Texture; // 0x8
	float Midpoint; // 0x10
	FLinearColor Channel; // 0x14
	float WeightmapInfluence; // 0x24
};

struct FFrameNumberRangeBound {
	ERangeBoundTypes Type; // 0x0
	FFrameNumber Value; // 0x4
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

struct FMagicLeapPlaneBoundaries {
	FGuid ID; // 0x0
	TArray<FMagicLeapPlaneBoundary> Boundaries; // 0x10
};

struct FCrowLobbyRankRecords {
	TArray<FCrowLobbyRankRecord> RankList; // 0x0
};

struct FCrowTeamInfoTDM {
	char TeamID; // 0x0
	TArray<ACrowPlayerStateBase*> PlayerStateArray; // 0x8
	uint32_t PreRank; // 0x18
};

struct FAnimationTransitionRule {
	FName RuleToExecute; // 0x0
	bool TransitionReturnVal; // 0x8
	int32_t TransitionIndex; // 0xc
};

struct FVertexInstanceToCreate {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
	FVertexInstanceID OriginalVertexInstanceID; // 0x18
};

struct FAIDataProviderIntValue {
	int32_t DefaultValue; // 0x30
};

struct FHairCardsTextureSettings {
	int32_t AtlasMaxResolution; // 0x0
	int32_t PixelPerCentimeters; // 0x4
	int32_t LengthTextureCount; // 0x8
	int32_t DensityTextureCount; // 0xc
};

struct FSkyCreatorMoonLightSettings {
	float Intensity; // 0x0
	FLinearColor LightColor; // 0x4
	float Temperature; // 0x14
	float VolumetricScatteringIntensity; // 0x18
	FLinearColor AtmosphereDiskColorScale; // 0x1c
};

struct FCrowLandWheelsSuspensionSetting {
	ECollisionChannel SuspensionTraceChannel; // 0x0
	float SuspensionLength; // 0x4
	float SuspensionOffset; // 0x8
	float SuspensionTopBump; // 0xc
	float SuspensionBottomBump; // 0x10
	float SpringPower; // 0x14
	float DampingRatio; // 0x18
	float MultiplyOnSkeletalMesh; // 0x1c
};

struct FCrowSupplySpawnInfo {
	int32_t SupplyItemIndex; // 0x0
	int32_t CurrentSpawendCount; // 0x4
	int32_t SpawnCountMAX; // 0x8
};

struct FPrimaryAssetId {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FName PrimaryAssetName; // 0x8
};

struct FMarkerSyncAnimPosition {
	FName PreviousMarkerName; // 0x0
	FName NextMarkerName; // 0x8
	float PositionBetweenMarkers; // 0x10
};

struct FCrowLobbyScoreInfoSet {
	TArray<FCrowLobbyScoreProfileInfo> Infos; // 0x0
};

struct FCrowCustomMatchInfo {
	ECrowGameMode GameMode; // 0x0
	uint32_t MapIndex; // 0x4
};

struct FCrowSquadMemberKillInfo {
	int32_t Level; // 0x0
	ECrowSquadRole SquadRole; // 0x4
	FString NickName; // 0x8
	int32_t DropCount; // 0x18
};

struct FRadialDamageEvent {
	FRadialDamageParams Params; // 0x10
	FVector Origin; // 0x24
	TArray<FHitResult> ComponentHits; // 0x30
};

struct FMovieSceneEntitySystemGraph {
	FMovieSceneEntitySystemGraphNodes Nodes; // 0x80
};

struct FInt32Interval {
	int32_t Min; // 0x0
	int32_t Max; // 0x4
};

struct FAnimNode_MultiWayBlend {
	TArray<FPoseLink> Poses; // 0x10
	TArray<float> DesiredAlphas; // 0x20
	FInputScaleBias AlphaScaleBias; // 0x40
	bool bAdditiveNode; // 0x48
	bool bNormalizeAlpha; // 0x49
};

struct FMovieSceneObjectBindingID {
	int32_t SequenceID; // 0x0
	EMovieSceneObjectBindingSpace Space; // 0x4
	FGuid Guid; // 0x8
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

struct FAITouchEvent {
	AActor* TouchReceiver; // 0x10
	AActor* OtherActor; // 0x18
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

struct FCrowWorldDestructionFxStart {
	FName FxSocketName; // 0x0
	UFXSystemAsset* FxOnDestroyed; // 0x8
	UAkAudioEvent* SoundDestroyed; // 0x10
	TArray<UFXSystemAsset*> FxOnDestroyedArray; // 0x18
};

struct FCrowCloudAnimInfo {
	bool bLoop; // 0x0
	float LoopStartTime; // 0x4
	float AnimStartTime; // 0x8
	float MinTime; // 0xc
	float MaxTime; // 0x10
};

struct FNiagaraInt32 {
	int32_t Value; // 0x0
};

struct FCrowRandomBoxItemListTableRow {
	uint32_t Index; // 0x8
	ECrowItemGrade Grade; // 0xc
	uint32_t RewardTableIndex; // 0x10
};

struct FCLSGroundPose {
	UAnimSequenceBase* BasePose; // 0x0
	TMap<ECLSBasePoseType, int32_t> PoseFrameMap; // 0x8
};

struct FCLSAnimation {
	UAnimMontage* TP; // 0x0
	UAnimMontage* FP; // 0x8
	UAnimMontage* TP_Prone; // 0x10
	UAnimMontage* FP_Prone; // 0x18
};

struct FMovieSceneParticleSectionTemplate {
	FMovieSceneParticleChannel ParticleKeys; // 0x20
};

struct FCachedPropertyPath {
	TArray<FPropertyPathSegment> Segments; // 0x0
	UFunction* CachedFunction; // 0x18
};

struct FTimelineEventEntry {
	float Time; // 0x0
	FDelegate EventFunc; // 0x4
};

struct FMovieSceneEvaluationFieldEntityMetaData {
	FFrameNumber ForcedTime; // 0x0
	ESectionEvaluationFlags Flags; // 0x8
	char bEvaluateInSequencePreRoll : 1; // 0x9
	char bEvaluateInSequencePostRoll : 1; // 0x9
};

struct FVehicleEngineData {
	FRuntimeFloatCurve TorqueCurve; // 0x0
	float MaxRPM; // 0x88
	float MOI; // 0x8c
	float DampingRateFullThrottle; // 0x90
	float DampingRateZeroThrottleClutchEngaged; // 0x94
	float DampingRateZeroThrottleClutchDisengaged; // 0x98
};

struct FCrowFoliageInteractionAttenuation {
	bool bInvRatio; // 0x0
	float MaxDistance; // 0x4
	float MaxValue; // 0x8
	ECrowFoliageBendingInterpType InterpType; // 0xc
};

struct FCrowHideWidgetInfo {
	UWidget* Widget; // 0x0
};

struct FMovieScenePropertyBinding {
	FName PropertyName; // 0x0
	FName PropertyPath; // 0x8
	bool bCanUseClassLookup; // 0x10
};

struct FCrowFoliageAffectByDistance {
	bool UseDistance; // 0x0
	float AffectDistanceMax; // 0x4
	float ScaleInterpStartDist; // 0x8
	float ScaleMin; // 0xc
	float ScaleMax; // 0x10
	float PowerInterpStartDist; // 0x14
	float PowerMin; // 0x18
	float PowerMax; // 0x1c
};

struct FPaperTileMetadata {
	FName UserDataName; // 0x0
	FSpriteGeometryCollection CollisionData; // 0x8
	char TerrainMembership[0x4]; // 0x38
};

struct FNiagaraMaterialOverride {
	UMaterialInterface* Material; // 0x0
	uint32_t MaterialSubIndex; // 0x8
	UNiagaraRendererProperties* EmitterRendererProperty; // 0x10
};

struct FSoundWaveSpectralDataPerSound {
	TArray<FSoundWaveSpectralData> SpectralData; // 0x0
	float PlaybackTime; // 0x10
	USoundWave* SoundWave; // 0x18
};

struct FA2Pose {
	TArray<FTransform> Bones; // 0x0
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

struct FKeyToTexture {
	FKey Key; // 0x0
	UTexture2D* Texture; // 0x18
	UPaperSprite* Sprite; // 0x20
};

struct FCrowCurrencyTableRow {
	FString HelpText; // 0x168
	ECrowItemType CurrencyType; // 0x178
	ACrowItemCurrencyBase* CurrencyClass; // 0x180
	FSoftObjectPath Mesh3P; // 0x188
	TArray<FCrowCurrencyMeshInfo> MeshArray; // 0x1a0
};

struct FCrowRotorSpinInfo {
	FName RotorBoneName; // 0x0
	float RotorSpinPerSec; // 0x8
	FVector RotorAxis; // 0xc
	TArray<FName> HideRotorBoneNames; // 0x18
	FCrowVehicleFxTemplate StartEngineFxTemplate; // 0x28
	FCrowVehicleFxTemplate ReadyFxTemplate; // 0x90
	FCrowVehicleFxTemplate ShutDownFxTemplate; // 0xf8
};

struct FCrowSkydivingCameraDirections {
	float ResetCameraForwardTime; // 0x0
	EEasingFunc ResetEasingType; // 0x4
	FRotator ResetCameraForwardDestination; // 0x8
	float CameraForwardTime; // 0x14
	EEasingFunc EasingType; // 0x18
	FRotator CameraForwardDestination; // 0x1c
	UCurveFloat* CameraDistanceCurve; // 0x28
};

struct FTwoVectors {
	FVector v1; // 0x0
	FVector v2; // 0xc
};

struct FBandwidthTestGenerator {
	TArray<FBandwidthTestItem> ReplicatedBuffers; // 0x0
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

struct FHLODProxyMesh {
	LazyObjectProperty LODActor; // 0x0
	UStaticMesh* StaticMesh; // 0x20
	FName Key; // 0x28
};

struct FBoneNode {
	FName Name; // 0x0
	int32_t ParentIndex; // 0x8
	EBoneTranslationRetargetingMode TranslationRetargetingMode; // 0xc
};

struct FTetherSimulationModel {
	FTransform SimulationBaseWorldTransform; // 0x10
	TArray<FTetherSimulationSegment> Segments; // 0x40
};

struct FAnimNode_SkeletalControlBase {
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

struct FVehicleImpactDamageEvent {
	float Damage; // 0x10
	char VehicleImpactType; // 0x14
	FVector_NetQuantizeNormal ShotDirection; // 0x18
	FHitResult HitInfo; // 0x24
};

struct FTentDistribution {
	float TipAltitude; // 0x0
	float TipValue; // 0x4
	float Width; // 0x8
};

struct FHairGroupsRendering {
	FName MaterialSlotName; // 0x0
	UMaterialInterface* Material; // 0x8
	FHairGeometrySettings GeometrySettings; // 0x10
	FHairShadowSettings ShadowSettings; // 0x20
	FHairAdvancedRenderingSettings AdvancedSettings; // 0x2c
};

struct FFloatInterval {
	float Min; // 0x0
	float Max; // 0x4
};

struct FAnimNode_SequencePlayer {
	UAnimSequenceBase* Sequence; // 0x38
	float PlayRateBasis; // 0x40
	float PlayRate; // 0x44
	FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x48
	float StartPosition; // 0x78
	bool bLoopAnimation; // 0x7c
};

struct FParameterChannelNames {
	FText R; // 0x0
	FText G; // 0x18
	FText B; // 0x30
	FText A; // 0x48
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

struct FSubdividedWireEdge {
	int32_t EdgeVertex0PositionIndex; // 0x0
	int32_t EdgeVertex1PositionIndex; // 0x4
};

struct FCrowRandomSetWeight {
	int32_t ItemIndex; // 0x0
	float Weight; // 0x4
};

struct FNamedColor {
	FColor Value; // 0x0
	FName Name; // 0x4
};

struct FBlendProfileBoneEntry {
	FBoneReference BoneReference; // 0x0
	float BlendScale; // 0x10
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

struct FNetDriverDefinition {
	FName DefName; // 0x0
	FName DriverClassName; // 0x8
	FName DriverClassNameFallback; // 0x10
};

struct FSourceEffectFilterSettings {
	ESourceEffectFilterCircuit FilterCircuit; // 0x0
	ESourceEffectFilterType FilterType; // 0x1
	float CutoffFrequency; // 0x4
	float FilterQ; // 0x8
	TArray<FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation; // 0x10
};

struct FCLSVaultParams {
	UAnimMontage* AnimMontage; // 0x0
	UCurveVector* PositionCorrectionCurve; // 0x8
	float StartingPosition; // 0x10
	float PlayRate; // 0x14
	FVector StartingOffset; // 0x18
	float BlendOutTime; // 0x24
};

struct FCrowBuildingEditorPropData {
	ACrowWorldPropActor* PropAsset; // 0x0
	FTransform RelativeTransform; // 0x10
};

struct FEngineShowFlagsSetting {
	FString ShowFlagName; // 0x0
	bool Enabled; // 0x10
};

struct FActionKeySlot {
	ESettingKeySlotType SlotType; // 0x0
	FInputActionKeyMapping ActionMapping; // 0x8
};

struct FCrowWeaponPartsPistolGripTableRow {
	FString HelpText; // 0x2f8
};

struct FCrowWeaponCheckInfo {
	float LastClientTime; // 0x0
	uint32_t LastAmmoCount; // 0x4
	TArray<float> ClientTimeArray; // 0x8
};

struct FQuartzQuantizationBoundary {
	EQuartzCommandQuantization Quantization; // 0x0
	float Multiplier; // 0x4
	EQuarztQuantizationReference CountingReferencePoint; // 0x8
};

struct FKShapeElem {
	float RestOffset; // 0x8
	FName Name; // 0xc
	char bContributeToMass : 1; // 0x18
	ECollisionEnabled CollisionEnabled; // 0x19
};

struct FCrowTeamPawnPair {
	char TeamID; // 0x0
	ACrowCharacterBase* CharacterPawn; // 0x8
};

struct FIntVector {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Z; // 0x8
};

struct FTTEventTrack {
	FName FunctionName; // 0x18
	UCurveFloat* CurveKeys; // 0x20
};

struct FNiagaraMaterialAttributeBinding {
	FName MaterialParameterName; // 0x0
	FNiagaraVariableBase NiagaraVariable; // 0x8
	FNiagaraVariableBase ResolvedNiagaraVariable; // 0x14
	FNiagaraVariableBase NiagaraChildVariable; // 0x20
};

struct FVector2DParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x8
	FMovieSceneFloatChannel YCurve; // 0xa8
};

struct FMovieSceneSkeletalAnimationSectionTemplateParameters {
	FFrameNumber SectionStartTime; // 0xd8
	FFrameNumber SectionEndTime; // 0xdc
};

struct FMovieSceneEvaluationFieldEntityKey {
	TWeakObjectPtr<UObject> EntityOwner; // 0x0
	uint32_t EntityID; // 0x8
};

struct FRadialBoxSettings {
	bool bDistributeItemsEvenly; // 0x0
	float AngleBetweenItems; // 0x4
	float StartingAngle; // 0x8
};

struct FStreamingTextureBuildInfo {
	uint32_t PackedRelativeBox; // 0x0
	int32_t TextureLevelIndex; // 0x4
	float TexelFactor; // 0x8
};

struct FVectorCurve {
	FRichCurve FloatCurves[0x3]; // 0x18
};

struct FTransformBase {
	FName Node; // 0x0
	FTransformBaseConstraint Constraints[0x2]; // 0x8
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

struct FCrowConquestSkillTableRow {
	FString TextIndex; // 0x8
	ECrowConquestSkill Type; // 0x18
	FString GroupKey; // 0x20
	FText SkillName; // 0x30
	UPaperSprite* DefaultIcon; // 0x48
	int32_t Price; // 0x50
	float CoolTime; // 0x54
	UUserWidget* CursorClass; // 0x58
	AActor* SkillObjectClass; // 0x60
};

struct FCrowIngameSkillRecord {
	ECrowConquestSkill ConquestSkill; // 0x58
};

struct FCrowBuffData {
	FText Name; // 0x30
	FText Description; // 0x48
	UPaperSprite* BuffIcon; // 0x60
	ECrowBuffEventType BuffEventType; // 0x68
	ECrowBuffType BuffType; // 0x69
	ECrowWeaponUIType WeaponUIType; // 0x6a
	ECrowBuffValueType BuffValueType; // 0x6b
	uint32_t BuffIntValue; // 0x6c
	float BuffFloatValue; // 0x70
	uint64_t DurationTime; // 0x78
	uint64_t EndTime; // 0x80
};

struct FPSCPoolElem {
	UParticleSystemComponent* PSC; // 0x0
};

struct FSplineInstanceData {
	bool bSplineHasBeenEdited; // 0xb8
	FSplineCurves SplineCurves; // 0xc0
	FSplineCurves SplineCurvesPreUCS; // 0x130
};

struct FInputRange {
	float Min; // 0x0
	float Max; // 0x4
};

struct FCrowWorldLightProbeGrid {
	TArray<FCrowWorldLightProbeGridValue> LightProbeGridData; // 0x0
	FCrowWorldLightProbeSetting LightProbeSetting; // 0x10
	FCrowWorldLightProbeVolumeSetting LightProbeVolumeSetting; // 0x5c
	UWorld* World; // 0x80
	FVector LightForward; // 0x88
	FVector WorldPosition; // 0x94
	float Radius; // 0xa0
	float Height; // 0xa4
	int32_t CheckStep; // 0xa8
	int32_t GridCountRadius; // 0xac
	bool ShowDebug; // 0xb0
};

struct FVolumeControlStyle {
	FSliderStyle SliderStyle; // 0x8
	FSlateBrush HighVolumeImage; // 0x348
	FSlateBrush MidVolumeImage; // 0x3d0
	FSlateBrush LowVolumeImage; // 0x458
	FSlateBrush NoVolumeImage; // 0x4e0
	FSlateBrush MutedImage; // 0x568
};

struct FLiveLinkCameraBlueprintData {
	FLiveLinkCameraStaticData StaticData; // 0x8
	FLiveLinkCameraFrameData FrameData; // 0x30
};

struct FAkMidiPitchBend {
	char ValueLsb; // 0x2
	char ValueMsb; // 0x3
	int32_t FullValue; // 0x4
};

struct FAkMidiNoteAftertouch {
	char Note; // 0x2
	char Value; // 0x3
};

struct FMovieSceneSequenceCompilerMaskStruct {
	char bHierarchy : 1; // 0x0
	char bEvaluationTemplate : 1; // 0x0
	char bEvaluationTemplateField : 1; // 0x0
	char bEntityComponentField : 1; // 0x0
};

struct FCrowRotorGroundFx {
	EPhysicalSurface PhysicalSurface; // 0x8
	UParticleSystem* GroundFx; // 0x10
};

struct FCrowWeaponSkinTableRow {
	uint32_t SkinIndex; // 0x168
	int32_t WeaponIndex; // 0x16c
	FText SkinName; // 0x170
	UPaperSprite* SkinIcon; // 0x188
	bool NotUse; // 0x190
	FCrowWeaponSkinInfoTable WeaponSkinInfo; // 0x198
};

struct FPredictProjectilePathResult {
	TArray<FPredictProjectilePathPointData> PathData; // 0x0
	FPredictProjectilePathPointData LastTraceDestination; // 0x10
	FHitResult HitResult; // 0x2c
};

struct FAkAcousticSurface {
	uint32_t Texture; // 0x0
	float Occlusion; // 0x4
	FString Name; // 0x8
};

struct FLiveLinkWorldTime {
	double Time; // 0x0
	double Offset; // 0x8
};

struct FCrowSkyRespawnCondition {
	bool bIsEnable; // 0x0
	float ActiveTime; // 0x4
	int32_t ActivePoint; // 0x8
	int32_t ActivePointGap; // 0xc
	float ActiveCountdownTime; // 0x10
	int32_t DeativePointGap; // 0x14
	float DeactiveCountdownTime; // 0x18
};

struct FLandmassTerrainCarvingSettings {
	EBrushBlendType BlendMode; // 0x0
	bool bInvertShape; // 0x1
	FLandmassFalloffSettings FalloffSettings; // 0x4
	FLandmassBrushEffectsList Effects; // 0x18
	int32_t Priority; // 0x78
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

struct FBrushEffectBlurring {
	bool bBlurShape; // 0x0
	int32_t Radius; // 0x4
};

struct FAITeamStimulusEvent {
	AActor* Broadcaster; // 0x28
	AActor* Enemy; // 0x30
};

struct FMagicLeapPlaneBoundary {
	FMagicLeapPolygon Polygon; // 0x0
	TArray<FMagicLeapPolygon> Holes; // 0x10
};

struct FIntegralCurve {
	TArray<FIntegralKey> Keys; // 0x68
	int32_t DefaultValue; // 0x78
	bool bUseDefaultValueBeforeFirstKey; // 0x7c
};

struct FConeConstraint {
	float Swing1LimitDegrees; // 0x14
	float Swing2LimitDegrees; // 0x18
	EAngularConstraintMotion Swing1Motion; // 0x1c
	EAngularConstraintMotion Swing2Motion; // 0x1d
};

struct FRootMotionSource_MoveToForce {
	FVector StartLocation; // 0x98
	FVector TargetLocation; // 0xa4
	bool bRestrictSpeedToExpected; // 0xb0
	UCurveVector* PathOffsetCurve; // 0xb8
};

struct FTimelineLinearColorTrack {
	UCurveLinearColor* LinearColorCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName LinearColorPropertyName; // 0x20
};

struct FMovieSceneTrackDisplayOptions {
	char bShowVerticalFrames : 1; // 0x0
};

struct FCrowSquadMatchRespawnInfo {
	USizeBox* Root; // 0x0
	UTextBlock* TB_SquadNum; // 0x8
	UImage* IMG_SquadBack; // 0x10
	UTextBlock* TB_NickName; // 0x18
	UTextBlock* TB_CoolTime; // 0x20
	UCrowButton* WB_Buttom; // 0x28
	ACrowPlayerStateSquadMatch* PlayerState; // 0x30
	float EnableRespawnDelayAfterDead; // 0x38
};

struct FComponentSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FCrowReplicationRPCPolicyInfo {
	AActor* Class; // 0x0
	FName FunctionName; // 0x8
	bool ForceSend; // 0x10
};

struct FSettingItem {
	FString ItemTextLocalKey; // 0x0
	FString ItemUniqueName; // 0x10
	ESettingCategoryType ItemCategory; // 0x20
	ESettingsSlotType ItemSlotType; // 0x21
	FString CosoleCommand; // 0x28
	bool bValueParameter; // 0x38
	uint32_t Index; // 0x3c
	float Value; // 0x40
	float MinValue; // 0x44
	float MaxValue; // 0x48
	float StepValue; // 0x4c
	ESettingsSlotIndexedValueFillType IndexedValueFillType; // 0x50
	TArray<FString> IndexedValueLocalKeys; // 0x58
	TArray<FString> SubItemUniqueNames; // 0x68
	TArray<FStringArray> ActivationSubItemUniqueNames; // 0x78
	TArray<FString> DeActivationItemUniqueNames; // 0x88
	bool ActivationApply; // 0x98
	bool ImmediatelyApply; // 0x99
	bool AskMaintainApply; // 0x9a
};

struct FCrowVehicleSkinLeftButtonInfo {
	FText LabelText; // 0x0
	FString UserData; // 0x18
};

struct FAnimNode_Constraint {
	FBoneReference BoneToModify; // 0xc8
	TArray<FConstraint> ConstraintSetup; // 0xd8
	TArray<float> ConstraintWeights; // 0xe8
};

struct FHairGroupCardsTextures {
	UTexture2D* DepthTexture; // 0x0
	UTexture2D* CoverageTexture; // 0x8
	UTexture2D* TangentTexture; // 0x10
	UTexture2D* AttributeTexture; // 0x18
	UTexture2D* AuxilaryDataTexture; // 0x20
};

struct FCrowScopeEffectInfo {
	UParticleSystemComponent* Effect; // 0x0
};

struct FPolygonGroupForPolygon {
	FPolygonID PolygonID; // 0x0
	FPolygonGroupID PolygonGroupID; // 0x4
};

struct FAkChannelMask {
	int32_t ChannelMask; // 0x0
};

struct FMovieSceneSequencePlaybackParams {
	FFrameTime Frame; // 0x0
	float Time; // 0x8
	FString MarkedFrame; // 0x10
	EMovieScenePositionType PositionType; // 0x20
	EUpdatePositionMethod UpdateMethod; // 0x21
};

struct FAIDamageEvent {
	float Amount; // 0x0
	FVector Location; // 0x4
	FVector HitLocation; // 0x10
	AActor* DamagedActor; // 0x20
	AActor* Instigator; // 0x28
};

struct FSoundWaveEnvelopeDataPerSound {
	float Envelope; // 0x0
	float PlaybackTime; // 0x4
	USoundWave* SoundWave; // 0x8
};

struct FCrowFoliageAffectorDrawParam {
	char bOwnerWasRecentlyRendered : 1; // 0x0
	char bWind : 1; // 0x0
	ECrowFoliageAffectorAnimState AnimState; // 0x1
	float DistanceFromCamera; // 0x4
	float StartAnimTime; // 0x8
	float AffectorAlpha; // 0xc
	float AffectorRotation; // 0x10
	FVector AffectorScale; // 0x14
	FVector AffectorLocation; // 0x20
	UMaterialInstanceDynamic* Mid; // 0x30
};

struct FCrowEventPageTableRow {
	FText HelpText; // 0x10
	ECrowShopProductType Page_Link_type; // 0x28
	ECrowShopProductSubType Page_LinkSub_Type; // 0x29
	float BannerScrollDelayTime; // 0x2c
	TSoftObjectPtr<UTexture2D> Images; // 0x30
};

struct FCrowSampleCharacterInfo {
	char FaceIndex; // 0x0
	char HairIndex; // 0x1
	char HairColorIndex; // 0x2
	char BeardIndex; // 0x3
	char BeardColorIndex; // 0x4
	char EyeColorIndex; // 0x5
	TArray<FCrowClothItemData> ClothesList; // 0x8
};

struct FAkPoly {
	UAkAcousticTexture* Texture; // 0x0
	float Occlusion; // 0x8
	bool EnableSurface; // 0xc
};

struct FKConvexElem {
	TArray<FVector> VertexData; // 0x30
	TArray<int32_t> IndexData; // 0x40
	FBox ElemBox; // 0x50
	FTransform Transform; // 0x70
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

struct FMovieSceneObjectBindingIDs {
	TArray<FMovieSceneObjectBindingID> IDs; // 0x0
};

struct FAkGeometryData {
	TArray<FVector> Vertices; // 0x0
	TArray<FAkAcousticSurface> Surfaces; // 0x10
	TArray<FAkTriangle> Triangles; // 0x20
	TArray<UPhysicalMaterial*> ToOverrideAcousticTexture; // 0x30
	TArray<UPhysicalMaterial*> ToOverrideOcclusion; // 0x40
};

struct FMagicLeapIdentityAttribute {
	EMagicLeapIdentityKey Attribute; // 0x0
	FString Value; // 0x8
};

struct FSHAHashData {
	char Hash[0x14]; // 0x0
};

struct FCrowBuildingModularItem {
	UStaticMesh* StaticMesh; // 0x0
	FCrowBuildingModularItemMaterial StaticMeshMaterials; // 0x8
	TArray<UStaticMesh*> OptionalMeshes; // 0x18
	TArray<FCrowBuildingModularItemMaterial> OptionalMeshesMaterials; // 0x28
};

struct FCrowCharacterProneIKSetup {
	bool bUseDrawDebugLine; // 0x0
	FName SpineBoneName; // 0x4
	FName PelvisBoneName; // 0xc
	FName LeftArmBoneName; // 0x14
	FName RightArmBoneName; // 0x1c
	FName LeftCalfBoneName; // 0x24
	FName RightCalfBoneName; // 0x2c
	FName LeftFootBoneName; // 0x34
	FName RightFootBoneName; // 0x3c
	float TraceLengthAbove; // 0x44
	float TraceLengthBelow; // 0x48
	float InterpSpeedTranslation; // 0x4c
	float InterpSpeedRotation; // 0x50
};

struct FCLSLeanAmount {
	float LR; // 0x0
	float FB; // 0x4
};

struct FAnimSetMeshLinkup {
	TArray<int32_t> BoneToTrackTable; // 0x0
};

struct FProceduralFoliageInstance {
	FQuat Rotation; // 0x0
	FVector Location; // 0x10
	float Age; // 0x1c
	FVector Normal; // 0x20
	float Scale; // 0x2c
	UFoliageType* Type; // 0x30
};

struct FCrowFoliageInfluenceRange {
	bool bOverrideStart; // 0x0
	float Start; // 0x4
	float Target; // 0x8
};

struct FSubmixEffectDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	float DelayLength; // 0x8
};

struct FInputBlendPose {
	TArray<FBranchFilter> BranchFilters; // 0x0
};

struct FCrowWorldSyncBuildingLink {
	int32_t BuildingIndex; // 0x0
	int32_t BuildingClassIndex; // 0x4
	int32_t ParentSyncNodeIndex; // 0x8
	int32_t LocalIndexInSyncNode; // 0xc
	int32_t ParentSyncAreaIndex; // 0x10
	int32_t LocalIndexInSyncArea; // 0x14
	FTransform InitialTransform; // 0x20
	TArray<int32_t> BuildingStaticPropIndexes; // 0x50
	TArray<int32_t> BuildingDynamicPropIndexes; // 0x60
	TArray<int32_t> BuildingItemSpawnerIndexes; // 0x70
	TArray<FCrowWorldSyncPartsOverride> BuildingPartsOverrides; // 0x80
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

struct FCrowActorOverlapRef {
	ACrowCharacterPawn* TargetCharacter; // 0x0
	uint32_t RefCount; // 0x8
};

struct FCrowLobbyScoreRank {
	uint32_t playerId; // 0x0
	int64_t RankNo; // 0x8
	int32_t Level; // 0x10
	int64_t Score; // 0x18
	FString UserNickName; // 0x20
	int64_t ClanNo; // 0x30
	FString ClanName; // 0x38
	int32_t ClanMark; // 0x48
	int32_t ClanBackground; // 0x4c
	int64_t PlayTimeSec; // 0x50
	int32_t PlayCount; // 0x58
};

struct FSoundWaveSpectralDataEntry {
	float Magnitude; // 0x0
	float NormalizedMagnitude; // 0x4
};

struct FInstancedStaticMeshInstanceData {
	FMatrix Transform; // 0x0
};

struct FMovieSceneSectionEvalOptions {
	bool bCanEditCompletionMode; // 0x0
	EMovieSceneCompletionMode CompletionMode; // 0x1
};

struct FCrowPartModelInfo {
	FSoftObjectPath Mesh1P; // 0x0
	ACrowWeaponPartsActor* MeshClass1P; // 0x18
	UAnimInstance* AnimClass1P; // 0x20
	TArray<UMaterialInterface*> Materials1P; // 0x28
	FSoftObjectPath Mesh3P; // 0x38
	ACrowWeaponPartsActor* MeshClass3P; // 0x50
	UAnimInstance* AnimClass3P; // 0x58
	TArray<UMaterialInterface*> Materials3P; // 0x60
	FSoftObjectPath SimpleMesh3P; // 0x70
};

struct FCrowSampleWeaponInfo {
	uint32_t ItemIndex; // 0x0
	uint16_t Barrel; // 0x4
	uint16_t Magazine; // 0x6
	uint16_t Muzzle; // 0x8
	uint16_t PistolGrip; // 0xa
	uint16_t PrimarySight; // 0xc
	uint16_t SecondarySight; // 0xe
	uint16_t SideBarrel; // 0x10
	uint16_t Stock; // 0x12
	uint16_t UnderBarrel; // 0x14
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

struct FFontOutlineSettings {
	int32_t OutlineSize; // 0x0
	bool bSeparateFillAlpha; // 0x4
	bool bApplyOutlineToDropShadows; // 0x5
	UObject* OutlineMaterial; // 0x8
	FLinearColor OutlineColor; // 0x10
};

struct FReferencePose {
	FName PoseName; // 0x0
	TArray<FTransform> ReferencePose; // 0x8
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

struct FCrowMeteorInfo {
	ACrowMeteorEventActor* MeteorActor; // 0x0
	float MeteorActiveDelay; // 0x8
	float MeteorSpawnDelay; // 0xc
};

struct FWaterBrushEffectCurlNoise {
	float Curl1Amount; // 0x0
	float Curl2Amount; // 0x4
	float Curl1Tiling; // 0x8
	float Curl2Tiling; // 0xc
};

struct FRawDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FBuildPromotionTestSettings {
	FFilePath DefaultStaticMeshAsset; // 0x0
	FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10
	FBuildPromotionOpenAssetSettings OpenAssets; // 0x160
	FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1c0
	FFilePath SourceControlMaterial; // 0x1e0
};

struct FNiagaraScriptVariableBinding {
	FName Name; // 0x0
};

struct FFilePath {
	FString FilePath; // 0x0
};

struct FSkelMeshComponentLODInfo {
	TArray<bool> HiddenMaterials; // 0x0
};

struct FSoundGroup {
	ESoundGroup SoundGroup; // 0x0
	FString DisplayName; // 0x8
	char bAlwaysDecompressOnLoad : 1; // 0x18
	float DecompressedDuration; // 0x1c
};

struct FOculusCapsuleCollider {
	UCapsuleComponent* Capsule; // 0x0
	EBone BoneId; // 0x8
};

struct FCrowFoliageParam {
	bool bEnable; // 0x0
	float MeshHeight; // 0x4
	float BendingPower; // 0x8
	float MaxRotationAngle; // 0xc
	float AddSine1; // 0x10
	float AddSine2; // 0x14
	TSoftObjectPtr<UTexture> DynamicFoliageMask; // 0x18
};

struct FCrowWorldSplineAddMeshSetting {
	bool bUseStartMesh; // 0x0
	UStaticMesh* StartMesh; // 0x8
	ECrowWorldSplineMeshAxis StartMeshAxis; // 0x10
	bool bUseEndMesh; // 0x11
	UStaticMesh* EndMesh; // 0x18
	ECrowWorldSplineMeshAxis EndMeshAxis; // 0x20
};

struct FPerBoneBlendWeight {
	int32_t SourceIndex; // 0x0
	float BlendWeight; // 0x4
};

struct FCrowWeaponPartsStockTableRow {
	FString HelpText; // 0x2f8
};

struct FCrowVoiceChatChannelTableRow {
	ECrowVoiceChannel VoiceChannel; // 0x8
	ECrowVoiceChannelType ChatType; // 0x9
	int32_t AudibleDistance; // 0xc
	int32_t ConversationalDistance; // 0x10
	float AudioFadeIntensityByDistance; // 0x14
	ECrowVoiceAudioFadeModel AudioFadeModel; // 0x18
};

struct FCrowBuildingPropertyPerClass {
	TArray<FBitArrayUint32> LODShowFlags; // 0x0
	TArray<char> PartsProperties; // 0x10
};

struct FCharacterHitInfo {
	float ActualDamage; // 0x0
	UObject* DamageTypeClass; // 0x8
	int32_t DamageEventClassID; // 0x10
	AActor* DamageCauser; // 0x18
	FName BoneName; // 0x20
	AController* DamageController; // 0x28
	FDamageEvent GeneralDamageEvent; // 0x30
	FPointDamageEvent PointDamageEvent; // 0x40
	FRadialDamageEvent RadialDamageEvent; // 0xf0
};

struct FSoundModulationDestinationSettings {
	float Value; // 0x0
	USoundModulatorBase* Modulator; // 0x8
};

struct FMagicLeapImageTargetSettings {
	UTexture2D* ImageTexture; // 0x0
	FString Name; // 0x8
	float LongerDimension; // 0x18
	bool bIsStationary; // 0x1c
	bool bIsEnabled; // 0x1d
};

struct FInAppPurchaseReceiptInfo2 {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FCrowLandWheelsAntiRoll {
	int16_t WheelIndexLeft; // 0x0
	int16_t WheelIndexRight; // 0x2
	float AntiRollStrength; // 0x4
	float SpringDiffThreshold; // 0x8
};

struct FAkWindowsAdvancedInitializationSettings {
	uint32_t AudioAPI; // 0x38
	bool GlobalFocus; // 0x3c
	bool UseHeadMountedDisplayAudioDevice; // 0x3d
};

struct FPatchId {
	int32_t ID; // 0x0
};

struct FCrowFxTypeArrayy {
	TArray<UParticleSystemComponent*> Array; // 0x0
	float LastSpawnWorldTime; // 0x10
};

struct FBehaviorTreeTemplateInfo {
	UBehaviorTree* Asset; // 0x0
	UBTCompositeNode* Template; // 0x8
};

struct FCrowLobbyScoreMyInfo {
	int32_t SeasonRank; // 0x0
	int32_t SeasonLevel; // 0x4
	int32_t FavoriteWeaponIndex; // 0x8
	int32_t FavoriteWeaponUseCount; // 0xc
	FCrowLobbyScoreInfo MercenaryInfo; // 0x10
	FCrowLobbyScoreInfo SeasonoInfo; // 0x48
};

struct FAIDynamicParam {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
	FBlackboardKeySelector BBKey; // 0x10
};

struct FAssetBundleData {
	TArray<FAssetBundleEntry> Bundles; // 0x0
};

struct FCrowVehicleForceAndDamage {
	TArray<FCrowVehicleForceItem> Forces; // 0x0
	TArray<FCrowVehicleDamageItem> Damages; // 0x10
	TMap<int32_t, int32_t> LookupForce; // 0x20
	TMap<int32_t, int32_t> LookupDamage; // 0x70
};

struct FAkPropertyToControl {
	FString ItemProperty; // 0x0
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

struct FCrowSupplyBaseDataRow {
	int32_t Index; // 0x8
	TArray<FCrowSupplyItemInfo> ArraySupplyItems; // 0x10
};

struct FCLSCameraParameters {
	ECLSViewMode DesiredViewMode; // 0x0
	bool bRightShoulder; // 0x1
};

struct FARMeshUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	EARObjectClassification ObjectClassification; // 0x50
};

struct FNiagaraTypeDefinitionHandle {
	int32_t RegisteredTypeIndex; // 0x0
};

struct FCrowProjectileCheckInfo {
	uint32_t ProjectileUID; // 0x4
	float ServerTimeBegin; // 0x8
	float ClientTimeBegin; // 0xc
	char WeaponItemType; // 0x10
	uint32_t WeaponIndex; // 0x14
	float PartsOptionAttackRange; // 0x18
	FVector StartLocation; // 0x1c
	FVector ShootDirection; // 0x28
	FVector ViewNormal; // 0x34
	FRotator SpreadRotation; // 0x40
	float SpreadSize; // 0x4c
	FCrowTrajectoryCalculator TrajectoryCalculator; // 0x50
	ACrowWeaponBase* WeaponBase; // 0x158
	ACrowCharacterBase* OwnerCharacter; // 0x160
	ACrowVehiclePawn* OwnerVehicle; // 0x168
	FVector OwnerLocation; // 0x170
	FVector CharacterLocation; // 0x17c
	FVector WeaponLocation; // 0x188
};

struct FSynth2DSliderStyle {
	FSlateBrush NormalThumbImage; // 0x8
	FSlateBrush DisabledThumbImage; // 0x90
	FSlateBrush NormalBarImage; // 0x118
	FSlateBrush DisabledBarImage; // 0x1a0
	FSlateBrush BackgroundImage; // 0x228
	float BarThickness; // 0x2b0
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

struct FFoliageVertexColorChannelMask {
	char UseMask : 1; // 0x0
	float MaskThreshold; // 0x4
	char InvertMask : 1; // 0x8
};

struct FAnimNode_RigidBody {
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

struct FCrowSupplyBoxRow {
	ECrowSupplyBoxType SupplyBoxType; // 0x8
	uint16_t CoolTimeSeconds; // 0xa
	FString HelpText; // 0x10
};

struct FExponentialHeightFogData {
	float FogDensity; // 0x0
	float FogHeightFalloff; // 0x4
	float FogHeightOffset; // 0x8
};

struct FInterpLookupTrack {
	TArray<FInterpLookupPoint> Points; // 0x0
};

struct FTypefaceEntry {
	FName Name; // 0x0
	FFontData Font; // 0x8
};

struct FMovieSceneEntityComponentField {
	FMovieSceneEvaluationFieldEntityTree PersistentEntityTree; // 0x0
	FMovieSceneEvaluationFieldEntityTree OneShotEntityTree; // 0x60
	TArray<FMovieSceneEvaluationFieldEntity> Entities; // 0xc0
	TArray<FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData; // 0xd0
	TArray<FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData; // 0xe0
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

struct FAISightEvent {
	AActor* SeenActor; // 0x8
	AActor* Observer; // 0x10
};

struct FScaleTrack {
	TArray<FVector> ScaleKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FNiagaraParameters {
	TArray<FNiagaraVariable> Parameters; // 0x0
};

struct FCrowCharacterAnimCommonRow {
	UAnimSequenceBase* DeathStandF; // 0x8
	UAnimSequenceBase* DeathStandB; // 0x10
	UAnimSequenceBase* DeathStandL; // 0x18
	UAnimSequenceBase* DeathStandR; // 0x20
	UAnimSequenceBase* DeathCrouchF; // 0x28
	UAnimSequenceBase* DeathCrouchB; // 0x30
	UAnimSequenceBase* DeathCrouchL; // 0x38
	UAnimSequenceBase* DeathCrouchR; // 0x40
	UAnimSequenceBase* DeathProneF; // 0x48
	UAnimSequenceBase* DeathProneB; // 0x50
	UAnimSequenceBase* DeathProneL; // 0x58
	UAnimSequenceBase* DeathProneR; // 0x60
	TArray<UAnimSequenceBase*> DeathBurningArray; // 0x68
	UAnimSequenceBase* DamageHitHead; // 0x78
	UAnimSequenceBase* DamageHitBody; // 0x80
	UAnimSequenceBase* DamageHitLeftArm; // 0x88
	UAnimSequenceBase* DamageHitRightArm; // 0x90
	UAnimSequenceBase* DamageHitLeftLeg; // 0x98
	UAnimSequenceBase* DamageHitRightLeg; // 0xa0
	UAnimSequenceBase* DamageBurning; // 0xa8
	UAnimSequenceBase* InjuredStand; // 0xb0
	UAnimSequenceBase* InjuredCrouch; // 0xb8
	UAnimSequenceBase* InjuredProne; // 0xc0
	UAnimMontage* InjuredSave_1P; // 0xc8
	UAnimMontage* InjuredSave_3P; // 0xd0
};

struct FCrowMercenaryLevelTableRow {
	int32_t Level; // 0x8
	int64_t Points; // 0x10
	FText MercenaryName; // 0x18
	UPaperSprite* MercenaryIcon; // 0x30
	UPaperSprite* MercenaryIconSmall; // 0x38
	int32_t ResetLevel; // 0x40
	bool DynamicRank; // 0x44
	int32_t MinRank; // 0x48
	int32_t MaxRank; // 0x4c
};

struct FCachedAnimStateData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
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

struct FEventPayload {
	FName EventName; // 0x0
	FMovieSceneEventParameters Parameters; // 0x8
};

struct FLiveLinkCameraFrameData {
	float FieldOfView; // 0xd0
	float AspectRatio; // 0xd4
	float FocalLength; // 0xd8
	float Aperture; // 0xdc
	float FocusDistance; // 0xe0
	ELiveLinkCameraProjectionMode ProjectionMode; // 0xe4
};

struct FCrowAICharacterSpawnData {
	ECrowTeamID TeamID; // 0x0
	uint32_t TotalSpawnAICharacter; // 0x4
	uint32_t MaxSpawnAICharacterSameTime; // 0x8
	float SpawnTime; // 0xc
	ACrowAICharacterController* SpawnAIChatacterControllerTemplate; // 0x10
	ACrowAICharacterPawn* SpawnAICharacterPawnTemplate; // 0x18
	TArray<FCrowAICharacterData> SpawnAICharacterDataList; // 0x20
	AUPSPatrolPoint* IntroPatrolPoint; // 0x30
	ACrowAICharacterCoverPoint* IntroCoverPoint; // 0x38
	AUPSPatrolPoint* InitialPatrolPoint; // 0x40
};

struct FCrowSprayTableRow {
	int32_t SprayIndex; // 0x168
	FText HelpText; // 0x170
	FText NameKey; // 0x188
	FText DescKey; // 0x1a0
	TSoftObjectPtr<UPaperSprite> IconImage; // 0x1b8
	TSoftObjectPtr<UTexture> DecalImage; // 0x1e0
	ESprayType SprayType; // 0x208
	FCrowDecalInfo DecalInfo; // 0x210
};

struct FSettingUserConfigItem {
	FString Setting; // 0x0
	float Value; // 0x10
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

struct FCollisionResponseTemplate {
	FName Name; // 0x0
	ECollisionEnabled CollisionEnabled; // 0x8
	bool bCanModify; // 0xa
	FName ObjectTypeName; // 0x2c
	TArray<FResponseChannel> CustomResponses; // 0x38
};

struct FSimpleCurve {
	ERichCurveInterpMode InterpMode; // 0x70
	TArray<FSimpleCurveKey> Keys; // 0x78
};

struct FQualifiedFrameTime {
	FFrameTime Time; // 0x0
	FFrameRate Rate; // 0x8
};

struct FMovieSceneCameraShakeSourceTrigger {
	UCameraShakeBase* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraShakePlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
};

struct FMovieSceneVectorKeyStruct {
	FVector Vector; // 0x28
};

struct FCrowSupplyAmmoInfo {
	FString AmmoTextIndex; // 0x0
	bool IsPercent; // 0x10
	float IncreaseValue; // 0x14
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

struct FClothConstraintSetupNv {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
};

struct FAudioVolumeSubmixOverrideSettings {
	USoundSubmix* Submix; // 0x0
	TArray<USoundEffectSubmixPreset*> SubmixEffectChain; // 0x8
	float CrossfadeTime; // 0x18
};

struct FCrowCharacterSwimActionSetting {
	FCrowCharacterSwimBodyPartsSetting Idle; // 0x0
	FCrowCharacterSwimBodyPartsSetting ForwardSpeed_1; // 0x190
	FCrowCharacterSwimBodyPartsSetting ForwardSpeed_2; // 0x320
	FCrowCharacterSwimBodyPartsSetting BackSpeed_1; // 0x4b0
	FCrowCharacterSwimBodyPartsSetting DivingForwardSpeed_1; // 0x640
	FName EnterFX_SocketName; // 0x7d0
	FCrowCharacterSwimFXSetting EnterFX; // 0x7d8
	UAkAudioEvent* EnterSound_W; // 0x828
	FName DeepEnterFX_SocketName; // 0x830
	FCrowCharacterSwimFXSetting DeepEnterFX; // 0x838
	UAkAudioEvent* DeepEnterSound_W; // 0x888
	FName DeepExitFX_SocketName; // 0x890
	FCrowCharacterSwimFXSetting DeepExitFX; // 0x898
	UAkAudioEvent* DeepExitSound_W; // 0x8e8
	FName ExitFX_SocketName; // 0x8f0
	FCrowCharacterSwimFXSetting ExitFX; // 0x8f8
	UAkAudioEvent* ExitSound_W; // 0x948
};

struct FWorldEventInfo {
	float RemainTime; // 0x0
	ECrowWorldEventState EventState; // 0x4
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

struct FRuntimeCurveLinearColor {
	FRichCurve ColorCurves[0x4]; // 0x0
	UCurveLinearColor* ExternalCurve; // 0x200
};

struct FCrowRankingScheduleTableRow {
	FString HelpText; // 0x10
	ECrowRankingRecordType RankingRecordType; // 0x20
	ECrowRankingPeriodType PeriodType; // 0x21
	int32_t RankingDateInfoIndex; // 0x24
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

struct FCrowPickupItemList {
	ACrowItemBase* ItemBase; // 0x0
};

struct FNamedSlotBinding {
	FName Name; // 0x0
	UWidget* Content; // 0x8
};

struct FLiveLinkTimeSynchronizationSettings {
	FFrameRate FrameRate; // 0x0
	FFrameNumber FrameOffset; // 0x8
};

struct FAngularDriveConstraint {
	FConstraintDrive TwistDrive; // 0x0
	FConstraintDrive SwingDrive; // 0x10
	FConstraintDrive SlerpDrive; // 0x20
	FRotator OrientationTarget; // 0x30
	FVector AngularVelocityTarget; // 0x3c
	EAngularDriveMode AngularDriveMode; // 0x48
};

struct FCameraFilmbackSettings {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
	float SensorAspectRatio; // 0x8
};

struct FPlane {
	float W; // 0xc
};

struct FBranchingPointMarker {
	int32_t NotifyIndex; // 0x0
	float TriggerTime; // 0x4
	EAnimNotifyEventType NotifyEventType; // 0x8
};

struct FAnimNode_CLSDistanceMatch {
	FName CurveName; // 0x80
	float Distance; // 0x88
	bool bBadDataLog; // 0x8c
};

struct FCrowLandWheelsSteeringSetting {
	float MaxAngle; // 0x0
	float RaiseSpeed; // 0x4
	float FallSpeed; // 0x8
	FRuntimeFloatCurve SteeringCurve; // 0x10
};

struct FCrowPartyInvitationUserInfo {
	uint64_t ServerKey; // 0x0
	FString NickName; // 0x8
};

struct FCrowItemDropDataServer {
	bool IsEquipment; // 0x0
	char SlotIndex; // 0x1
	FRotator Rotation; // 0x4
	int32_t ItemCount; // 0x10
	float Distance; // 0x14
};

struct FTransformBaseConstraint {
	TArray<FRigTransformConstraint> TransformConstraints; // 0x0
};

struct FLinearColor {
	float R; // 0x0
	float G; // 0x4
	float B; // 0x8
	float A; // 0xc
};

struct FStatColorMapping {
	FString StatName; // 0x0
	TArray<FStatColorMapEntry> ColorMap; // 0x10
	char DisableBlend : 1; // 0x20
};

struct FCrowLevelLayerTableRow {
	ECrowLevelLayer LevelLayer; // 0x8
};

struct FTransformNoScale {
	FVector Location; // 0x0
	FQuat Rotation; // 0x10
};

struct FAnimationEventBinding {
	UWidgetAnimation* Animation; // 0x0
	FDelegate Delegate; // 0x8
	EWidgetAnimationEvent AnimationEvent; // 0x18
	FName UserTag; // 0x1c
};

struct FGeometryCollectionSource {
	FSoftObjectPath SourceGeometryObject; // 0x0
	FTransform LocalTransform; // 0x20
	TArray<UMaterialInterface*> SourceMaterial; // 0x50
};

struct FCrowGridReplicationInfo {
	float CellSize; // 0x0
	uint32_t NumBuckets; // 0x4
};

struct FRotorAnimData {
	int32_t ProxyDataIndex; // 0x0
	FBoneReference RotorBoneRefrence; // 0x4
};

struct FSupportedAreaData {
	FString AreaClassName; // 0x0
	int32_t AreaID; // 0x10
	UObject* AreaClass; // 0x18
};

struct FMovieSceneAkAudioEventTemplate {
	UMovieSceneAkAudioEventSection* Section; // 0x20
};

struct FRecordedTransformTrack {
	TArray<FRecordedFrame> Records; // 0x0
};

struct FST_DamageMaterialSlot {
	FName DamageMaterialSlotName; // 0x0
	FName DamageMaterialParamName; // 0x8
};

struct FARImageUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	UARCandidateImage* DetectedImage; // 0x50
	FVector2D EstimatedSize; // 0x58
};

struct FMovieSceneNiagaraParameterSectionTemplate {
	FNiagaraVariable Parameter; // 0x20
};

struct FEngineServiceTerminate {
	FString UserName; // 0x0
};

struct FCrowCustomRoomInfo {
	uint64_t RoomIndex; // 0x40
	ECrowCustomRoomState State; // 0x48
	int32_t MatchingUserCount; // 0x4c
	FString HostName; // 0x50
	uint64_t HostId; // 0x60
	TMap<uint64_t, FCrowCustomUserInfo> UserInfoes; // 0x68
};

struct FCrowBuildingDynamicPartsAnim {
	float Duration; // 0x0
	UCurveFloat* AnimationCurve; // 0x8
	UAkAudioEvent* Sound; // 0x10
	bool HasQuickAction; // 0x18
	float DurationQuick; // 0x1c
	UCurveFloat* AnimationCurveQuick; // 0x20
	UAkAudioEvent* SoundQuick; // 0x28
};

struct FCameraLookatTrackingSettings {
	char bEnableLookAtTracking : 1; // 0x0
	char bDrawDebugLookAtTrackingPosition : 1; // 0x0
	float LookAtTrackingInterpSpeed; // 0x4
	TSoftObjectPtr<AActor> ActorToTrack; // 0x18
	FVector RelativeOffset; // 0x40
	char bAllowRoll : 1; // 0x4c
};

struct FCrowCharacterAimOffsetVehicle {
	UAimOffsetBlendSpace* AimOffsetIdle; // 0x0
	TMap<ECrowWeaponSubType, UAimOffsetBlendSpace*> AimOffsetPrivateWeapon; // 0x8
};

struct FMovieSceneBinding {
	FGuid ObjectGuid; // 0x0
	FString BindingName; // 0x10
	TArray<UMovieSceneTrack*> Tracks; // 0x20
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

struct FUPSPatrolPointPathData {
	TWeakObjectPtr<AUPSPatrolPoint> FirstPoint; // 0x18
	TWeakObjectPtr<AUPSPatrolPoint> SecondPoint; // 0x20
};

struct FCrowHeavyBomberInfo {
	float ActiveTime; // 0x0
	FVector Location; // 0x4
};

struct FAnimNode_SplineIK {
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

struct FLandWheelLookupData {
	int32_t WheelIndex; // 0x0
	FBoneReference BoneReference; // 0x4
	bool bUseSteerAnlge; // 0x14
	bool bUseRotationAngle; // 0x15
	float RotationMultiply; // 0x18
};

struct FAssetMapping {
	UAnimationAsset* SourceAsset; // 0x0
	UAnimationAsset* TargetAsset; // 0x8
};

struct FInterpEdSelKey {
	UInterpGroup* Group; // 0x0
	UInterpTrack* Track; // 0x8
	int32_t KeyIndex; // 0x10
	float UnsnappedPosition; // 0x14
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

struct FTimelineFloatTrack {
	UCurveFloat* FloatCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName FloatPropertyName; // 0x20
};

struct FCrowPackedInt32 {
	uint32_t Value; // 0x0
};

struct FTTPropertyTrack {
	FName PropertyName; // 0x18
};

struct FMeshInstancingSettings {
	AActor* ActorClassToUse; // 0x0
	int32_t InstanceReplacementThreshold; // 0x8
	EMeshInstancingReplacementMethod MeshReplacementMethod; // 0xc
	bool bSkipMeshesWithVertexColors; // 0xd
	bool bUseHLODVolumes; // 0xe
	UInstancedStaticMeshComponent* ISMComponentToUse; // 0x10
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

struct FCrowTakePointDamage {
	ECrowItemType ItemType; // 0x0
	uint16_t WeaponIndex; // 0x2
	uint16_t AmmoIndex; // 0x4
	FPointDamageEvent DamageEvent; // 0x8
};

struct FLiveLinkSourcePreset {
	FGuid Guid; // 0x0
	ULiveLinkSourceSettings* Settings; // 0x10
	FText SourceType; // 0x18
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

struct FAkCommonInitializationSettings {
	uint32_t MaximumNumberOfMemoryPools; // 0x0
	uint32_t MaximumNumberOfPositioningPaths; // 0x4
	uint32_t CommandQueueSize; // 0x8
	uint32_t SamplesPerFrame; // 0xc
	FAkMainOutputSettings MainOutputSettings; // 0x10
	float StreamingLookAheadRatio; // 0x38
	uint16_t NumberOfRefillsInVoice; // 0x3c
	FAkSpatialAudioSettings SpatialAudioSettings; // 0x40
};

struct FLiveLinkLightStaticData {
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

struct FCrowResultMVPObjectInfo {
	USkeletalMesh* Mesh; // 0x0
	UAnimationAsset* AnimAsset; // 0x8
};

struct FCrowBoatsUpdateCache {
	UCrowBoatsConfigBody* BodyConfig; // 0xe0
};

struct FLaunchOnTestSettings {
	FFilePath LaunchOnTestmap; // 0x0
	FString DeviceID; // 0x10
};

struct FKTaperedCapsuleElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius0; // 0x48
	float Radius1; // 0x4c
	float Length; // 0x50
};

struct FLevelNameAndTime {
	FString LevelName; // 0x0
	uint32_t LevelChangeTimeInMS; // 0x10
};

struct FEngineServiceNotification {
	FString Text; // 0x0
	double TimeSeconds; // 0x10
};

struct FSkeletalMeshMergeParams {
	TArray<FSkelMeshMergeSectionMapping_BP> MeshSectionMappings; // 0x0
	TArray<FSkelMeshMergeUVTransformMapping> UVTransformsPerMesh; // 0x10
	TArray<USkeletalMesh*> MeshesToMerge; // 0x20
	int32_t StripTopLODS; // 0x30
	char bNeedsCpuAccess : 1; // 0x34
	char bSkeletonBefore : 1; // 0x34
	USkeleton* Skeleton; // 0x38
	UPhysicsAsset* PhysicsAsset; // 0x40
	USkeletalMesh* ReferenceSkeletalMesh; // 0x48
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

struct FCrowRefPoseOverride {
	USkeletalMesh* SkeletalMesh; // 0x0
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

struct FCrowWorldDestructionLink {
	TMap<uint32_t, uint32_t> LinkedParentActors; // 0x8
	TMap<uint32_t, FCrowWorldDestructionLinkInfo> DestructionLinkInfos; // 0x58
	TArray<uint32_t> WorldActorIndexArray; // 0xa8
};

struct FCrowClothHairTableRow {
	ECrowClothPartHairType SubClothType; // 0x258
};

struct FCrowLinearCurve {
	TArray<FCrowLinearCurveKey> KeyArray; // 0x18
};

struct FNavCollisionBox {
	FVector Offset; // 0x0
	FVector Extent; // 0xc
};

struct FNiagaraVariable {
	TArray<char> VarData; // 0x10
};

struct FNavigationFilterArea {
	UNavArea* AreaClass; // 0x0
	float TravelCostOverride; // 0x8
	float EnteringCostOverride; // 0xc
	char bIsExcluded : 1; // 0x10
	char bOverrideTravelCost : 1; // 0x10
	char bOverrideEnteringCost : 1; // 0x10
};

struct FGizmoVec2ParameterChange {
	FVector2D InitialValue; // 0x0
	FVector2D CurrentValue; // 0x8
};

struct FCrowWorldSplinePointSetting {
	bool bDefault; // 0x0
	bool bStartOrEndMesh; // 0x1
	bool bOverride; // 0x2
	ECrowWorldSplineMeshAxis Axis; // 0x3
	UStaticMesh* StaticMesh; // 0x8
	bool bAlwaysFit; // 0x10
	bool bRestrictMeshNum; // 0x11
	int32_t MaxMeshNum; // 0x14
	bool bCastShadow; // 0x18
};

struct FCrowLandWheelsTireAndWheel {
	bool IsFlipWheelRotation; // 0x0
	bool ShowDebug; // 0x1
	bool UseOverrideWheelLocation; // 0x2
	FName BodySocketName; // 0x4
	FName SkeletalBoneName; // 0xc
	FVector OverrideWheelLocation; // 0x14
	FVector Offset; // 0x20
	FVector SweepOffset; // 0x2c
	UCrowLandWheelsConfigTireAndWheel* WheelConfigClass; // 0x38
	UCrowLandWheelsConfigTireAndWheel* WheelConfigClassFlat; // 0x40
	UCrowLandWheelsConfigTireAndWheel* WheelConfigClassDestroyed; // 0x48
};

struct FMovieSceneAkAudioRTPCTemplate {
	UMovieSceneAkAudioRTPCSection* Section; // 0x20
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

struct FCollectionParameterBase {
	FName ParameterName; // 0x0
	FGuid ID; // 0x8
};

struct FNiagaraDataSetID {
	FName Name; // 0x0
	ENiagaraDataSetType Type; // 0x8
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

struct FCachedAnimRelevancyData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FAdaptorPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FAdaptorTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FAnimationSharingScalability {
	FPerPlatformBool UseBlendTransitions; // 0x0
	FPerPlatformFloat BlendSignificanceValue; // 0x4
	FPerPlatformInt MaximumNumberConcurrentBlends; // 0x8
	FPerPlatformFloat TickSignificanceValue; // 0xc
};

struct FPSCPool {
	TArray<FPSCPoolElem> FreeElements; // 0x0
	TArray<UParticleSystemComponent*> InUseComponents_Auto; // 0x10
	TArray<UParticleSystemComponent*> InUseComponents_Manual; // 0x20
};

struct FPlatformInterfaceData {
	FName DataName; // 0x0
	EPlatformInterfaceDataType Type; // 0x8
	int32_t IntValue; // 0xc
	float FloatValue; // 0x10
	FString StringValue; // 0x18
	UObject* ObjectValue; // 0x28
};

struct FNiagaraParameterScopeInfo {
	ENiagaraParameterScope Scope; // 0x0
	FString NamespaceString; // 0x8
};

struct FMeshUVChannelInfo {
	bool bInitialized; // 0x0
	bool bOverrideDensities; // 0x1
	float LocalUVDensities[0x4]; // 0x4
};

struct FEditorElement {
	int32_t Indices[0x3]; // 0x0
	float Weights[0x3]; // 0xc
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

struct FHmdUserProfileField {
	FString FieldName; // 0x0
	FString FieldValue; // 0x10
};

struct FAkWwiseItemToControl {
	FAkWwiseObjectDetails ItemPicked; // 0x0
	FString ItemPath; // 0x30
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

struct FMovieSceneTransformMask {
	uint32_t Mask; // 0x0
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

struct FCrowUnLockWeaponPartListTable {
	ECrowItemType WeaponPartsType; // 0x0
	TArray<FCrowUnLockWeaponPartTable> UnlockWeaponPartsIndexes; // 0x8
};

struct FCrowConquestResultInfo {
	char WinnerTeam; // 0x0
	uint16_t RedTeamConquestCount; // 0x2
	uint16_t BlueTeamConquestCount; // 0x4
	uint16_t RedTeamConquestPoint; // 0x6
	uint16_t BlueTeamConquestPoint; // 0x8
	TArray<FCrowResultTopPlayerInfo> TopSquadPlayerArray; // 0x10
};

struct FLinearDriveConstraint {
	FVector PositionTarget; // 0x0
	FVector VelocityTarget; // 0xc
	FConstraintDrive XDrive; // 0x18
	FConstraintDrive YDrive; // 0x28
	FConstraintDrive ZDrive; // 0x38
	char bEnablePositionDrive : 1; // 0x48
};

struct FMovieSceneTrackIdentifier {
	uint32_t Value; // 0x0
};

struct FAssetManagerRedirect {
	FString Old; // 0x0
	FString New; // 0x10
};

struct FDirectoryPath {
	FString Path; // 0x0
};

struct FVector4 {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FMovieSceneFloatChannel {
	ERichCurveExtrapolation PreInfinityExtrap; // 0x8
	ERichCurveExtrapolation PostInfinityExtrap; // 0x9
	TArray<FFrameNumber> Times; // 0x10
	TArray<FMovieSceneFloatValue> Values; // 0x20
	float DefaultValue; // 0x30
	bool bHasDefaultValue; // 0x34
	FMovieSceneKeyHandleMap KeyHandles; // 0x38
	FFrameRate TickResolution; // 0x98
};

struct FCrowWorldAnimationInstance {
	int8_t DynamicState; // 0x0
	char bIsValidInstance : 1; // 0x1
	char bTriggersActivated : 1; // 0x1
	FTransform InitialRelativeTransform; // 0x10
	FTransform InitialWorldTransform; // 0x40
	USceneComponent* LayoutItemComponent; // 0x70
	TArray<UCrowWorldTrigger*> TriggerComponents; // 0x78
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

struct FAttributesForVertexInstance {
	FVertexInstanceID VertexInstanceID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
};

struct FAnimSlotDesc {
	FName SlotName; // 0x0
	int32_t NumChannels; // 0x8
};

struct FPatrolPointSettings {
	TArray<FPatrolPointScript> PatrolPointScripts; // 0x0
	TArray<FEnemyActionSelector> PatrolPointActions; // 0x10
	bool bUseEnemyActionsPreset; // 0x20
	UUPSEnemyActionsPreset* EnemyActionsPreset; // 0x28
	EEnemyActionsExecutionType EnemyActionsExecutionType; // 0x30
	bool bRotateOnPointAfterReach; // 0x31
	float ReachRadius; // 0x34
	UUPSPatrolPointSolver* NextPatrolPointSolver; // 0x38
};

struct FCrowFirstRespawnInfo {
	char TeamID; // 0x0
	ECrowSquadRole SquadRole; // 0x1
};

struct FCrowWorldEventGroupInfo {
	float ActivationTimeMin; // 0x0
	float ActivationTimeMax; // 0x4
	float ReactivationTimeMin; // 0x8
	float ReactivationTimeMax; // 0xc
	ECrowWorldEventActivationType ActivationType; // 0x10
	TArray<ACrowWorldEventBase*> EventList; // 0x18
};

struct FCrowWorldSplinePointSettingEdit {
	int32_t Index; // 0x0
	FCrowWorldSplinePointSetting Setting; // 0x8
};

struct FCrowRandomItemWeight {
	uint32_t ItemIndex; // 0x0
	int32_t CountMin; // 0x4
	int32_t CountMax; // 0x8
	float Weight; // 0xc
};

struct FWalkableSlopeOverride {
	EWalkableSlopeBehavior WalkableSlopeBehavior; // 0x0
	float WalkableSlopeAngle; // 0x4
};

struct FSubmixEffectTapDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	TArray<FTapDelayInfo> Taps; // 0x8
};

struct FDockTabStyle {
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

struct FNiagaraSystemScalabilityOverride {
	char bOverrideDistanceSettings : 1; // 0x48
	char bOverrideInstanceCountSettings : 1; // 0x48
	char bOverridePerSystemInstanceCountSettings : 1; // 0x48
	char bOverrideTimeSinceRendererSettings : 1; // 0x48
};

struct FLiveLinkSubjectName {
	FName Name; // 0x0
};

struct FCrowWorldDestructionCacheItem {
	ACrowMeshDestructionActor* DestructionActor; // 0x0
	FBoxSphereBounds ComponentBounds; // 0x8
	float TimeRegistered; // 0x24
};

struct FAxis {
	FVector Axis; // 0x0
	bool bInLocalSpace; // 0xc
};

struct FRootMotionSourceGroup {
	char bHasAdditiveSources : 1; // 0x28
	char bHasOverrideSources : 1; // 0x28
	char bHasOverrideSourcesWithIgnoreZAccumulate : 1; // 0x28
	char bIsAdditiveVelocityApplied : 1; // 0x28
	FRootMotionSourceSettings LastAccumulatedSettings; // 0x29
	FVector_NetQuantize10 LastPreAdditiveVelocity; // 0x2c
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

struct FBoneMirrorInfo {
	int32_t SourceIndex; // 0x0
	EAxis BoneFlipAxis; // 0x4
};

struct FLevelVisibilityComponentData {
	UMovieSceneLevelVisibilitySection* Section; // 0x0
};

struct FBoneMirrorExport {
	FName BoneName; // 0x0
	FName SourceBoneName; // 0x8
	EAxis BoneFlipAxis; // 0x10
};

struct FCrowWorldSyncAreaLink {
	int32_t SyncAreaIndex; // 0x0
	TArray<int32_t> BuildingIndexes; // 0x8
	TArray<int32_t> WorldPropIndexes; // 0x18
	TArray<int32_t> WorldDynamicPropIndexes; // 0x28
};

struct FCrowRandomBoxTableRow {
	uint32_t GPoint; // 0x168
	uint32_t RCPPoint; // 0x16c
	uint32_t CardTableIndex; // 0x170
	FSoftObjectPath ModelingInfo; // 0x178
	UParticleSystem* RandomEffect; // 0x190
	bool CountingSwitch; // 0x198
	uint16_t CompleteCounting; // 0x19a
	ECrowItemGrade CompleteCountingGrade; // 0x19c
	TArray<FCrowRandomBoxProbability> Probability; // 0x1a0
	uint32_t RandomBoxItemListIndex; // 0x1b0
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

struct FNiagaraScriptHighlight {
	FLinearColor Color; // 0x0
	FText DisplayName; // 0x10
};

struct FPaperSpriteAtlasSlot {
	TSoftObjectPtr<UPaperSprite> SpriteRef; // 0x0
	int32_t AtlasIndex; // 0x28
	int32_t X; // 0x2c
	int32_t Y; // 0x30
	int32_t Width; // 0x34
	int32_t Height; // 0x38
};

struct FWeaponRecoilInfo {
	bool IsRandom; // 0x0
	UDataTable* RecoilTable; // 0x8
	UCurveFloat* IncreaseCurve; // 0x10
	float IncreaseTime; // 0x18
	float BurstModeRate; // 0x1c
};

struct FCrowParty {
	FString UniqueId; // 0x0
	uint64_t LeaderServerKey; // 0x10
	int32_t MatchingElapsedTime; // 0x18
	int32_t MatchingUserCount; // 0x1c
	int32_t MaxGamePlayUserCount; // 0x20
	ECrowGameMode MatchingType; // 0x24
	TArray<FCrowMatchInfo> GameModeInfoArray; // 0x28
	ECrowCameraLimitMode CameraLimitMode; // 0x38
	ECrowControlType ControlType; // 0x39
};

struct FA2CSPose {
	TArray<char> ComponentSpaceFlags; // 0x18
};

struct FAnimationTransitionBetweenStates {
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

struct FWrappedStringElement {
	FString Value; // 0x0
	FVector2D LineExtent; // 0x10
};

struct FCachedKeyToActionInfo {
	UPlayerInput* PlayerInput; // 0x0
};

struct FInterpCurvePointQuat {
	float InVal; // 0x0
	FQuat OutVal; // 0x10
	FQuat ArriveTangent; // 0x20
	FQuat LeaveTangent; // 0x30
	EInterpCurveMode InterpMode; // 0x40
};

struct FRichImageRow {
	FSlateBrush Brush; // 0x8
};

struct FNiagaraGraphViewSettings {
	FVector2D Location; // 0x0
	float Zoom; // 0x8
	bool bIsValid; // 0xc
};

struct FCrowSquadRewardInfo {
	char Index; // 0x0
	ECrowSquadRewardState State; // 0x1
};

struct FCrowLobbyScoreRankSet {
	TArray<FCrowLobbyScoreRank> RankList; // 0x0
};

struct FCrowCloudCollisionEvent {
	float ElapsedOverlapTime; // 0x0
	TWeakObjectPtr<AActor> DamageCauser; // 0x4
	TWeakObjectPtr<APlayerController> PlayerController; // 0xc
	TWeakObjectPtr<ACrowCharacterPawn> CharacterPawn; // 0x14
};

struct FVehicleEventParameterFactor {
	float MaxSpeed; // 0x0
	float MaxRPM; // 0x4
	float MaxWheelSpin; // 0x8
};

struct FNiagaraComponentPropertyBinding {
	FNiagaraVariableAttributeBinding AttributeBinding; // 0x0
	FName PropertyName; // 0x58
	FNiagaraTypeDefinition PropertyType; // 0x60
	FName MetadataSetterName; // 0x70
	FNiagaraVariable WritableValue; // 0x78
};

struct FEditorImportWorkflowDefinition {
	FFilePath ImportFilePath; // 0x0
	TArray<FImportFactorySettingValues> FactorySettings; // 0x10
};

struct FCrowWorldDestructionSimulation {
	UStaticMesh* SimulationSMC; // 0x0
	TArray<UMaterialInterface*> MaterialOverridesSMC; // 0x8
	float MassOverrideSMC; // 0x18
	USkeletalMesh* SimulationSKC; // 0x20
	TArray<FName> SimulationBoneNames; // 0x28
	TArray<FName> HideBoneNames; // 0x38
	TArray<UMaterialInterface*> MaterialOverridesSKC; // 0x48
	FName ImpulseSocket; // 0x58
	FName ImpulseTargetBone; // 0x60
	float ImpulseMagnitude; // 0x68
	FName CollisionProfileName; // 0x6c
	bool UseBreakingBones; // 0x74
	TArray<FName> BreakingBoneNames; // 0x78
	float BreakingBoneTime; // 0x88
};

struct FAnimationState {
	TArray<FAnimationTransitionRule> Transitions; // 0x8
	int32_t StateRootNodeIndex; // 0x18
	int32_t StartNotify; // 0x1c
	int32_t EndNotify; // 0x20
	int32_t FullyBlendedNotify; // 0x24
};

struct FCrowModPointInfo {
	ECrowModPointIndex Index; // 0x0
	uint32_t Exp; // 0x4
	uint32_t Money; // 0x8
	ECrowMedalShowType MedalShowType; // 0xc
	FString MedalNameKey; // 0x10
	UPaperSprite* MedalIconSprite; // 0x20
	FString MedalSoundName; // 0x28
};

struct FGerstnerWaveOctave {
	int32_t NumWaves; // 0x0
	float AmplitudeScale; // 0x4
	float MainDirection; // 0x8
	float SpreadAngle; // 0xc
	bool bUniformSpread; // 0x10
};

struct FWaterCurveSettings {
	bool bUseCurveChannel; // 0x0
	UCurveFloat* ElevationCurveAsset; // 0x8
	float ChannelEdgeOffset; // 0x10
	float ChannelDepth; // 0x14
	float CurveRampWidth; // 0x18
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

struct FDestructibleDepthParameters {
	EImpactDamageOverride ImpactDamageOverride; // 0x0
};

struct FPrimaryAssetRules {
	int32_t Priority; // 0x0
	int32_t ChunkId; // 0x4
	bool bApplyRecursively; // 0x8
	EPrimaryAssetCookRule CookRule; // 0x9
};

struct FOrbitOptions {
	char bProcessDuringSpawn : 1; // 0x0
	char bProcessDuringUpdate : 1; // 0x0
	char bUseEmitterTime : 1; // 0x0
};

struct FMovieSceneEntitySystemGraphNode {
	UMovieSceneEntitySystem* System; // 0x20
};

struct FAIRequestID {
	uint32_t RequestID; // 0x0
};

struct FCrowLandWheelsDamageSetting {
	float DrivingForceMultiply; // 0x0
	float WheelDampingRatioAdd; // 0x4
	float TireBumpForSuspension; // 0x8
	float TireBumpFrequency; // 0xc
	float EngineTorqueLimit; // 0x10
};

struct FCrowBuildingPartsInfo {
	ACrowBuildingActor* BuildingActor; // 0x0
	int16_t IndexInHISMCKeyArray; // 0x8
	int16_t PartsIndexInLayout; // 0xa
	int8_t PartsSubMeshIndex; // 0xc
	char Hidden; // 0xd
	FTransform RelativeTransform; // 0x10
};

struct FMovieSceneFieldEntry_ChildTemplate {
	uint16_t ChildIndex; // 0x0
	ESectionEvaluationFlags Flags; // 0x2
	FFrameNumber ForcedTime; // 0x4
};

struct FCrowChatTypeText {
	ECrowChatType ChatType; // 0x0
	FName ChatText; // 0x4
};

struct FSkeletalMeshSamplingRegion {
	FName Name; // 0x0
	int32_t LODIndex; // 0x8
	char bSupportUniformlyDistributedSampling : 1; // 0xc
	TArray<FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters; // 0x10
	TArray<FSkeletalMeshSamplingRegionBoneFilter> BoneFilters; // 0x20
};

struct FBeamModifierOptions {
	char bModify : 1; // 0x0
	char bScale : 1; // 0x0
	char bLock : 1; // 0x0
};

struct FCompressedTrack {
	TArray<char> ByteStream; // 0x0
	TArray<float> Times; // 0x10
	float Mins[0x3]; // 0x20
	float Ranges[0x3]; // 0x2c
};

struct FCableMeshGenerationCurveDescription {
	TArray<FCableMeshGenerationPoint> Points; // 0x0
	FVector StartTangent; // 0x10
	FVector EndTangent; // 0x1c
};

struct FCrowWeaponFireSound {
	UAkAudioEvent* FireSound; // 0x0
	UAkAudioEvent* ContinuousFireSound; // 0x8
	UAkAudioEvent* FireEndSound; // 0x10
};

struct FCrowFoliageInfluenceSequenceSetting {
	FCrowFoliageInfluenceRange BendingMaskScale; // 0x0
	FCrowFoliageInfluenceRange BendingStrength; // 0xc
	FCrowFoliageInfluenceRange WindMaskScale; // 0x18
	FCrowFoliageInfluenceRange WindMaskPlantStrength; // 0x24
	FCrowFoliageInfluenceRange WindMaskTreeStrength; // 0x30
	ECrowFoliageBendingInterpType InfluenceInterpType; // 0x3c
	float InfluenceInterpTime; // 0x40
	bool ComponentInactive; // 0x44
};

struct FCrowLandWheelsMovementData {
	FTransform NetTransform; // 0x0
	FVector NetVelocity; // 0x30
	FVector NetAngularVelocity; // 0x3c
};

struct FInAppPurchaseRestoreInfo {
	FString Identifier; // 0x0
	FString ReceiptData; // 0x10
	FString TransactionIdentifier; // 0x20
};

struct FAkMidiChannelAftertouch {
	char Value; // 0x2
};

struct FCrowCharacterPeekSetup {
	float FPCameraAngle; // 0x0
	float InterpSpeed; // 0x4
};

struct FMovementGroupMemberInfo {
	AUPSGroupMemberMovementPoint* GroupMemberMovementPointActor; // 0x0
	FVector GroupMemberLocation; // 0x8
};

struct FCrowWorldSplineLinkedPoint {
	TMap<FName, FCrowWorldSplineLinkedMeta> MetaDatas; // 0x0
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

struct FPluginRedirect {
	FString OldPluginName; // 0x0
	FString NewPluginName; // 0x10
};

struct FEpicSynth1Patch {
	ESynth1PatchSource PatchSource; // 0x0
	TArray<FSynth1PatchCable> PatchCables; // 0x8
};

struct FFxReplicator_AudioTemplate {
	float FadeOutTime; // 0x0
	USoundCue* Audio; // 0x8
};

struct FCrowLobbyScoreProfileRankInfo {
	int32_t KillCount; // 0x0
	int32_t AssistCount; // 0x4
	int32_t DeathCount; // 0x8
	int32_t InjuredCount; // 0xc
	int64_t Score; // 0x10
	int32_t PlayCount; // 0x18
	int32_t PlayTimeSec; // 0x1c
};

struct FMovieSceneEvaluationMetaData {
	TArray<FMovieSceneSequenceID> ActiveSequences; // 0x0
	TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities; // 0x10
};

struct FScrollBorderStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x90
};

struct FLiveLinkMetaData {
	TMap<FName, FString> StringMetadata; // 0x0
	FQualifiedFrameTime SceneTime; // 0x50
};

struct FCrowPingTableRow {
	bool UseSquadColor; // 0x8
	ECrowPingType PingType; // 0x9
	FText Name; // 0x10
	UPaperSprite* DefaultIcon; // 0x28
	UPaperSprite* DefaultWorldMapIcon; // 0x30
	bool UseIconBG; // 0x38
	FLinearColor PingColor; // 0x3c
	UParticleSystem* PingFX; // 0x50
	ECrowIconType IconType; // 0x58
	float WorldMapIconScale; // 0x5c
	float DisplayMapIconDistance; // 0x60
	float IndicatorIconScale; // 0x64
	float IndicatorHeightOffset; // 0x68
	float DisplaySymbolDistance; // 0x6c
	float DisplayNameDistance; // 0x70
	float DisplayDistanceDistance; // 0x74
	float ScaleMin; // 0x78
	float ScaleMax; // 0x7c
	float ScaleMinDistance; // 0x80
	float ScaleMaxDistance; // 0x84
	float IconChangeMinDistance; // 0x88
	float AlphaMin; // 0x8c
	float AlphaMax; // 0x90
	float AlphaMinDistance; // 0x94
	float AlphaMaxDistance; // 0x98
	bool Visible_WorldMap; // 0x9c
	bool Visible_MiniMap; // 0x9d
	bool Visible_RespawnMap; // 0x9e
	float LifeTime; // 0xa0
	char MaxSpawnCount; // 0xa4
	FText ChatMessageStringKey; // 0xa8
	UAkAudioEvent* PingSound; // 0xc0
	UAkAudioEvent* PingResponseSound; // 0xc8
	FText ResponseMessage; // 0xd0
	TMap<EVehicleIdentity, FCrowPingVehicleSubInfo> PingVehicleSubInfos; // 0xe8
	FCrowPingVehicleSubInfo Default; // 0x138
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

struct FCrowMailInfo {
	int64_t MailNo; // 0x0
	uint32_t RewardIndex; // 0x8
	char RewardFlag; // 0xc
};

struct FMovieSceneFloatValue {
	float Value; // 0x0
	FMovieSceneTangentData Tangent; // 0x4
	ERichCurveInterpMode InterpMode; // 0x18
	ERichCurveTangentMode TangentMode; // 0x19
	char PaddingByte; // 0x1a
};

struct FSpriteCategoryInfo {
	FName Category; // 0x0
	FText DisplayName; // 0x8
	FText Description; // 0x20
};

struct FCrowWeaponSkinTableData {
	uint32_t SkinIndex; // 0x0
	FText SkinName; // 0x8
	UPaperSprite* SkinIcon; // 0x20
	ECrowItemGrade ItemGrade; // 0x28
	bool NotUse; // 0x29
	TArray<FCrowWeaponSkinInfoTableData> WeaponSkinInfos; // 0x30
};

struct FDamageEvent {
	UDamageType* DamageTypeClass; // 0x8
};

struct FDistanceDatum {
	float FadeInDistanceStart; // 0x0
	float FadeInDistanceEnd; // 0x4
	float FadeOutDistanceStart; // 0x8
	float FadeOutDistanceEnd; // 0xc
	float Volume; // 0x10
};

struct FCrowBuildingCustomLOD {
	UStaticMesh* StaticMesh; // 0x0
	UStaticMesh* ExtraMesh; // 0x8
	bool SkipExtraMesh; // 0x10
	bool ShowLODBodyAsExtra; // 0x11
	TArray<UMaterialInterface*> MaterialOverrides; // 0x18
	TMap<int16_t, int16_t> LODParts; // 0x28
};

struct FCrowWorldActorLayoutItemInstance {
	char bDestroyedInstance : 1; // 0x0
	char bDestructibleInstance : 1; // 0x0
	char bDestroyParent : 1; // 0x0
	char bDestroyOnVehicleOverlap : 1; // 0x0
	char bDestroyByShockwave : 1; // 0x0
	char bNeedDecalReceiver : 1; // 0x0
	char bInteractiveInstance : 1; // 0x0
	char bComponentVisibility : 1; // 0x0
	char bShakeOnDamage : 1; // 0x1
	char ClientOnlyDestroy : 1; // 0x1
	char bSoundOccluder : 1; // 0x1
	int8_t DynamicState; // 0x2
	int16_t OwnerLayoutItemIndex; // 0x4
	int16_t AttachParentIndex; // 0x6
	FName AttachParentSocketName; // 0x8
	float HealthPoint; // 0x10
	float RelayDamageRatioToParent; // 0x14
	float OverlapImpactResistRatio; // 0x18
	float OverlapImpactResistMax; // 0x1c
	USceneComponent* Component; // 0x20
	UStaticMeshComponent* DecalReceiver; // 0x28
	TArray<UPrimitiveComponent*> RemainMeshComponents; // 0x30
	UCrowWorldBreakableAUD* BreakableAUD; // 0x40
	UCrowWorldDestructionAUD* DestructionAUD; // 0x48
	UCrowWorldDamageCheckerBase* DamageChecker; // 0x50
};

struct FTransformCurve {
	FVectorCurve TranslationCurve; // 0x18
	FVectorCurve RotationCurve; // 0x1b0
	FVectorCurve ScaleCurve; // 0x348
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

struct FCrowBuildingPartsElement {
	float CurrentHP; // 0x0
	char CanReceiveDamage : 1; // 0x4
	char IsDestructible : 1; // 0x4
	char HasInteraction : 1; // 0x4
	int32_t HISMCInfoIndex; // 0x8
	int32_t RemainsHISMCInfoIndex; // 0xc
	EPhysicalSurface SurfaceType; // 0x10
};

struct FCrowRepGraphSettings {
	FString Description; // 0x0
	FCrowClassRouteAndReplicationInfo ClassRouteAndReplication; // 0x10
	FCrowAlwaysRelevantReplicationInfo AlwaysRelevantReplication; // 0x30
	FCrowPawnReplicationInfo PawnReplication; // 0x38
	FCrowGridReplicationInfo GridReplication; // 0x58
	FCrowPlayerStateReplicationInfo PlayerStateReplication; // 0x60
};

struct FCrowWorldReplicationLandmark {
	FBitFlagArray ActorDestroyedFlags; // 0x0
};

struct FNetViewer {
	UNetConnection* Connection; // 0x0
	AActor* InViewer; // 0x8
	AActor* ViewTarget; // 0x10
	FVector ViewLocation; // 0x18
	FVector ViewDir; // 0x24
};

struct FRadialDamageParams {
	float BaseDamage; // 0x0
	float MinimumDamage; // 0x4
	float InnerRadius; // 0x8
	float OuterRadius; // 0xc
	float DamageFalloff; // 0x10
};

struct FNavAgentProperties {
	float AgentRadius; // 0x4
	float AgentHeight; // 0x8
	float AgentStepHeight; // 0xc
	float NavWalkingSearchHeightScale; // 0x10
	FSoftClassPath PreferredNavData; // 0x18
};

struct FNiagaraSpawnInfo {
	int32_t Count; // 0x0
	float InterpStartDt; // 0x4
	float IntervalDt; // 0x8
	int32_t SpawnGroup; // 0xc
};

struct FCLSVehiclePose {
	UBlendSpaceBase* DriverAO; // 0x0
	UAnimSequenceBase* BasePose; // 0x8
	int32_t RelaxedFrameIndex; // 0x10
	int32_t BattleFrameIndex; // 0x14
	UBlendSpaceBase* AimOffsetRelaxed; // 0x18
	UBlendSpaceBase* AimOffsetBattle; // 0x20
};

struct FOculusMR_PlaneMeshTriangle {
	FVector Vertex0; // 0x0
	FVector2D UV0; // 0xc
	FVector Vertex1; // 0x14
	FVector2D UV1; // 0x20
	FVector Vertex2; // 0x28
	FVector2D UV2; // 0x34
};

struct FCrowVehicleUpdaterItem {
	char IsValidElement : 1; // 0x0
	char IsValidComponent : 1; // 0x0
	char IsLegacyUpdate : 1; // 0x0
	char IsVehicleSKC : 1; // 0x0
	char IsFarFromCamera : 1; // 0x0
	char IsSafeToUpdateClient : 1; // 0x0
	int8_t CounterSafeToUpdateClient; // 0x1
	UCrowVehicleMovementBase* VehicleMovement; // 0x8
	UCrowVehicleFloodingComponent* VehicleFloodingComponent; // 0x10
	USkeletalMeshComponent* BodySKC; // 0x18
	UCrowVehicleSKC* VehicleSKC; // 0x20
	AActor* OwnerActor; // 0x28
};

struct FCrowVehicleInputValue {
	float CurrentValue; // 0x0
	float TargetValue; // 0x4
};

struct FNCPoolElement {
	UNiagaraComponent* Component; // 0x0
};

struct FAIDataProviderBoolValue {
	bool DefaultValue; // 0x30
};

struct FSectionEvaluationData {
	int32_t ImplIndex; // 0x0
	FFrameNumber ForcedTime; // 0x4
	ESectionEvaluationFlags Flags; // 0x8
};

struct FCrowWorldDestructionSyncDataActor {
	TArray<int16_t> DestroyedLayoutItems; // 0x0
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

struct FFxReplicator_WwiseAudioTemplate {
	bool bIsCheckViewToggleEvent; // 0x0
	FName AttachPointName; // 0x4
	UAkAudioEvent* FPEvent; // 0x10
	UAkAudioEvent* TPEvent; // 0x18
	UAkAudioEvent* FPEndEvent; // 0x20
	UAkAudioEvent* TPEndEvent; // 0x28
};

struct FCrowPlayerConstructionMessage {
	FString BuildGuideMessage; // 0x0
	FString CancelGuideMessage; // 0x10
	FString CancelBuildGuideMessage; // 0x20
	FString CannotBuildHereMessage; // 0x30
	FString TooFarToBuildMessage; // 0x40
};

struct FFontData {
	FString FontFilename; // 0x0
	EFontHinting Hinting; // 0x10
	EFontLoadingPolicy LoadingPolicy; // 0x11
	int32_t SubFaceIndex; // 0x14
	UObject* FontFaceAsset; // 0x18
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

struct FProcMeshTangent {
	FVector TangentX; // 0x0
	bool bFlipTangentY; // 0xc
};

struct FMovieSceneNestedSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x0
	FMovieSceneTimeWarping Warping; // 0xc
};

struct FMovieSceneCameraShakeSourceTriggerChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneCameraShakeSourceTrigger> KeyValues; // 0x18
};

struct FLensSettings {
	FLensBloomSettings Bloom; // 0x0
	FLensImperfectionSettings Imperfections; // 0xb8
	float ChromaticAberration; // 0xd8
};

struct FSplitterStyle {
	FSlateBrush HandleNormalBrush; // 0x8
	FSlateBrush HandleHighlightBrush; // 0x90
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

struct FRotator {
	float Pitch; // 0x0
	float Yaw; // 0x4
	float Roll; // 0x8
};

struct FAnimGroupInfo {
	FName Name; // 0x0
	FLinearColor Color; // 0x8
};

struct FRootMotionFinishVelocitySettings {
	ERootMotionFinishVelocityMode Mode; // 0x0
	FVector SetVelocity; // 0x4
	float ClampVelocity; // 0x10
};

struct FCLSVaultAsset {
	UAnimMontage* AnimMontage; // 0x0
	UCurveVector* PositionCorrectionCurve; // 0x8
	FVector StartingOffset; // 0x10
	float LowHeight; // 0x1c
	float LowPlayRate; // 0x20
	float LowStartPosition; // 0x24
	float HighHeight; // 0x28
	float HighPlayRate; // 0x2c
	float HighStartPosition; // 0x30
	float BlendOutTime; // 0x34
	float JumpOverCurveOffset; // 0x38
};

struct FCrowFixItemInfo {
	ECrowItemType ItemType; // 0x0
	uint32_t ItemIndex; // 0x4
	int32_t Count; // 0x8
};

struct FMemberReference {
	UObject* MemberParent; // 0x0
	FString MemberScope; // 0x8
	FName MemberName; // 0x18
	FGuid MemberGuid; // 0x20
	bool bSelfContext; // 0x30
	bool bWasDeprecated; // 0x31
};

struct FNiagaraVariableInfo {
	FNiagaraVariable Variable; // 0x0
	FText Definition; // 0x20
	UNiagaraDataInterface* DataInterface; // 0x38
};

struct FCrowModeWeapon {
	bool Primary01; // 0x0
	bool Primary02; // 0x1
	bool Melee; // 0x2
	bool Throw; // 0x3
	bool Kit; // 0x4
	bool Heal; // 0x5
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

struct FCrowWorldSyncDestroyArea {
	int32_t BitFlagIndex; // 0x0
	float Radius; // 0x4
	FVector Center; // 0x8
};

struct FAnimSegment {
	UAnimSequenceBase* AnimReference; // 0x0
	float StartPos; // 0x8
	float AnimStartTime; // 0xc
	float AnimEndTime; // 0x10
	float AnimPlayRate; // 0x14
	int32_t LoopingCount; // 0x18
};

struct FCrowRankingDateInfoTableRow {
	FString HelpText; // 0x10
	ECrowRankingPeriodType PeriodType; // 0x20
	FDateTime StartTime; // 0x28
	FDateTime EndTime; // 0x30
	FDateTime BaseStartTime; // 0x38
	FDateTime BaseEndTime; // 0x40
	FText Description; // 0x48
};

struct FLevelSequenceCameraSettings {
	bool bOverrideAspectRatioAxisConstraint; // 0x0
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x1
};

struct FCrowWorldSyncServerControllerContainer {
	TMap<ACrowWorldReplicationController*, int32_t> Controllers; // 0x0
};

struct FCrowVehicleSkinTableRow {
	FString HelpText; // 0x168
	ECrowVehicleType VehicleType; // 0x178
	FString VehicleTextIndex; // 0x180
	TArray<FString> SkinShareVehicleArray; // 0x190
	TArray<UMaterialInterface*> SkinArray; // 0x1a0
	bool bDisplayChangeSkin; // 0x1b0
};

struct FSlotEvaluationPose {
	EAdditiveAnimationType AdditiveType; // 0x0
	float Weight; // 0x4
};

struct FAIMoveRequest {
	AActor* GoalActor; // 0x0
};

struct FCrowBuildingDemolitionSetting {
	UStaticMesh* RemainBodyMesh; // 0x0
	USkeletalMesh* DemolitionMesh; // 0x8
	TArray<UMaterialInterface*> RemainMeshMaterials; // 0x10
	TArray<UMaterialInterface*> DemolitionMeshMaterials; // 0x20
	FName DemolitionRootBoneName; // 0x30
	FName HideRootBoneName; // 0x38
	FVector ImpulseOffset; // 0x40
	float ImpulseRadius; // 0x4c
	float ImpulseStrengthMin; // 0x50
	float ImpulseStrengthMax; // 0x54
	bool UseVelChange; // 0x58
	float Duration; // 0x5c
	UStaticMesh* BasePartsMesh; // 0x60
	UAkAudioEvent* SoundAsset; // 0x68
};

struct FCrowCloudScapeUpdateData {
	bool bEnvCloud; // 0x0
	int32_t DataArrayIndex; // 0x4
	int32_t Index; // 0x8
	float RotationRate; // 0xc
	float TranslateDuration; // 0x10
	float ScaleDuration; // 0x14
	FDateTime StartUtcTime; // 0x18
	float Density; // 0x20
	float HeightRatio; // 0x24
	float MaxScaleZ; // 0x28
	float CloudMoveTime; // 0x2c
	bool bNoCollision; // 0x30
	bool bMove; // 0x31
	bool bScale; // 0x32
	FVector Scale; // 0x34
	FVector VisualScale; // 0x40
	FVector Location; // 0x4c
	FVector CloudLocation; // 0x58
	FRotator Rotation; // 0x64
	FLinearColor Orientation; // 0x70
	FVector StartScale; // 0x80
	FVector CloudCollisionScale; // 0x8c
	FTransform CloudPathTM; // 0xa0
	FSplineCurves CloudPath; // 0xd0
	UCurveFloat* ScaleCurve; // 0x140
	UCurveFloat* MoveRateCurve; // 0x148
	UCurveFloat* DensityCurve; // 0x150
	UCurveFloat* HeightCurve; // 0x158
	UCrowCloudDamage* CloudDamageSetting; // 0x160
};

struct FCrowDeathZoneVolumeActor {
	APawn* EnterPawn; // 0x0
	float TimeSecond; // 0x8
};

struct FCrowWeaponSpreadChecker {
	ACrowPlayerControllerBase* PlayerController; // 0x0
};

struct FWeaponDamageSettings {
	float MinDamege; // 0x0
	float MaxDamege; // 0x4
	float MinRadius; // 0x8
	float MaxRadius; // 0xc
	float Falloff; // 0x10
	UCurveFloat* DropDistanceCurve; // 0x18
	float FriendlyFireDamage; // 0x20
	uint32_t DotDamageSeconds; // 0x24
};

struct FComboButtonStyle {
	FButtonStyle ButtonStyle; // 0x8
	FSlateBrush DownArrowImage; // 0x280
	FVector2D ShadowOffset; // 0x308
	FLinearColor ShadowColorAndOpacity; // 0x310
	FSlateBrush MenuBorderBrush; // 0x320
	FMargin MenuBorderPadding; // 0x3a8
};

struct FMeshSectionInfo {
	int32_t MaterialIndex; // 0x0
	bool bEnableCollision; // 0x4
	bool bCastShadow; // 0x5
	bool bVisibleInRayTracing; // 0x6
	bool bForceOpaque; // 0x7
};

struct FRichCurve {
	TArray<FRichCurveKey> Keys; // 0x70
};

struct FGizmoFloatParameterChange {
	float InitialValue; // 0x0
	float CurrentValue; // 0x4
};

struct FFrameNumber {
	int32_t Value; // 0x0
};

struct FScalarParameterAtlasInstanceData {
	bool bIsUsedAsAtlasPosition; // 0x0
	TSoftObjectPtr<UCurveLinearColor> Curve; // 0x8
	TSoftObjectPtr<UCurveLinearColorAtlas> Atlas; // 0x30
};

struct FFunctionCaller {
	FName FunctionName; // 0x0
};

struct FCrowVehicleFallsDamageTableRow {
	EVehicleIdentity VehicleType; // 0x20
};

struct FGameModeName {
	FString Name; // 0x0
	FSoftClassPath GameMode; // 0x10
};

struct FWaterBrushEffectCurves {
	bool bUseCurveChannel; // 0x0
	UCurveFloat* ElevationCurveAsset; // 0x8
	float ChannelEdgeOffset; // 0x10
	float ChannelDepth; // 0x14
	float CurveRampWidth; // 0x18
};

struct FCLSTurnInPlaceAsset {
	UAnimSequenceBase* Animation; // 0x0
	float AnimatedAngle; // 0x8
	FName SlotName; // 0xc
	float PlayRate; // 0x14
	bool bScaleTurnAngle; // 0x18
};

struct FInterpCurvePointVector {
	float InVal; // 0x0
	FVector OutVal; // 0x4
	FVector ArriveTangent; // 0x10
	FVector LeaveTangent; // 0x1c
	EInterpCurveMode InterpMode; // 0x28
};

struct FColorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel RedCurve; // 0x8
	FMovieSceneFloatChannel GreenCurve; // 0xa8
	FMovieSceneFloatChannel BlueCurve; // 0x148
	FMovieSceneFloatChannel AlphaCurve; // 0x1e8
};

struct FBakedAnimationStateMachine {
	FName MachineName; // 0x0
	int32_t InitialState; // 0x8
	TArray<FBakedAnimationState> States; // 0x10
	TArray<FAnimationTransitionBetweenStates> Transitions; // 0x20
};

struct FNiagaraInputConditionMetadata {
	FName InputName; // 0x0
	TArray<FString> TargetValues; // 0x8
};

struct FAnimNode_SingleNode {
	FPoseLink SourcePose; // 0x10
};

struct FCrowVehicleSeatInfo {
	FString PlayerNickName; // 0x0
};

struct FCLSCharacterAdditionalSwim {
	bool bFloorHit; // 0x0
	float ImmersionDepth; // 0x4
	float TargetAdjust; // 0x8
};

struct FWaterBrushEffectBlurring {
	bool bBlurShape; // 0x0
	int32_t Radius; // 0x4
};

struct FWidgetTransform {
	FVector2D Translation; // 0x0
	FVector2D Scale; // 0x8
	FVector2D Shear; // 0x10
	float Angle; // 0x18
};

struct FCrowBuildingPartsOverride {
	int16_t PartsIndex; // 0x0
	FTransform RelativeTransform; // 0x10
};

struct FSkeletonToMeshLinkup {
	TArray<int32_t> SkeletonToMeshTable; // 0x0
	TArray<int32_t> MeshToSkeletonTable; // 0x10
};

struct FCrowRewardItem {
	ECrowItemType ItemType; // 0x0
	uint32_t ItemCount; // 0x4
	uint32_t ItemIndex; // 0x8
	FString TitleLocalStringKey; // 0x10
	FString DescLocalStringKey; // 0x20
};

struct FPhysicalMaterialInput {
	UPhysicalMaterial* PhysicalMaterial; // 0x0
	FExpressionInput Input; // 0x8
};

struct FNiagaraVariableBase {
	FName Name; // 0x0
	FNiagaraTypeDefinitionHandle TypeDefHandle; // 0x8
};

struct FNiagaraDataInterfaceGPUParamInfo {
	FString DataInterfaceHLSLSymbol; // 0x0
	FString DIClassName; // 0x10
	TArray<FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions; // 0x20
};

struct FEnvQueryResult {
	UEnvQueryItemType* ItemType; // 0x10
	int32_t OptionIndex; // 0x2c
	int32_t QueryID; // 0x30
};

struct FMediaPlayerOptions {
	FMediaPlayerTrackOptions Tracks; // 0x0
	FTimespan SeekTime; // 0x20
	EMediaPlayerOptionBooleanOverride PlayOnOpen; // 0x28
	EMediaPlayerOptionBooleanOverride Loop; // 0x29
};

struct FCrowWorldSyncServerPlayerState {
	TArray<uint32_t> ActiveSectors; // 0x0
	TArray<uint32_t> ActiveClusters; // 0x10
};

struct FStreamingRenderAssetPrimitiveInfo {
	UStreamableRenderAsset* RenderAsset; // 0x0
	FBoxSphereBounds Bounds; // 0x8
	float TexelFactor; // 0x24
	uint32_t PackedRelativeBox; // 0x28
	char bAllowInvalidTexelFactorWhenUnregistered : 1; // 0x2c
};

struct FTransformParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel Translation[0x3]; // 0x8
	FMovieSceneFloatChannel Rotation[0x3]; // 0x1e8
	FMovieSceneFloatChannel Scale[0x3]; // 0x3c8
};

struct FTransformConstraint {
	FConstraintDescription Operator; // 0x0
	FName SourceNode; // 0x10
	FName TargetNode; // 0x18
	float Weight; // 0x20
	bool bMaintainOffset; // 0x24
};

struct FGraphAssetPlayerInformation {
	TArray<int32_t> PlayerNodeIndices; // 0x0
};

struct FNode {
	FName Name; // 0x0
	FName ParentName; // 0x8
	FTransform Transform; // 0x10
	FString DisplayName; // 0x40
	bool bAdvanced; // 0x50
};

struct FCrowCharacterAnimPrivateWeaponFPRow {
	UAnimSequence* StandIdle; // 0x8
	UAnimSequence* StandGundown; // 0x10
	UAnimSequenceBase* StandRelaxed; // 0x18
	UAnimSequence* Stand2ndaryDirected; // 0x20
	UBlendSpace* WeaponSway; // 0x28
	UAnimSequence* OverlayLeftHand; // 0x30
	UAnimSequence* OverlayRightHand; // 0x38
	UBlendSpace* StandMovement; // 0x40
	UBlendSpace* CrouchMovement; // 0x48
	UBlendSpace* ProneMovement; // 0x50
	UAnimSequence* JumpStart; // 0x58
	UAnimSequence* JumpLoop; // 0x60
	UAnimSequence* JumpFlail; // 0x68
	UAnimSequence* JumpLand; // 0x70
	UAnimSequence* JumpLandDelayed; // 0x78
	UAnimSequence* StandToProne; // 0x80
	UAnimSequence* ProneToStand; // 0x88
	UAnimSequence* Equip; // 0x90
	UAnimSequence* UnEquip; // 0x98
};

struct FBoneReference {
	FName BoneName; // 0x0
};

struct FBTCompositeChild {
	UBTCompositeNode* ChildComposite; // 0x0
	UBTTaskNode* ChildTask; // 0x8
	TArray<UBTDecorator*> Decorators; // 0x10
	TArray<FBTDecoratorLogic> DecoratorOps; // 0x20
};

struct FCrowBuildingDecalData {
	FTransform RelativeTransform; // 0x0
	int32_t SortOrder; // 0x30
	FVector DecalSize; // 0x34
	UMaterialInterface* DecalMaterial; // 0x40
};

struct FNiagaraUserRedirectionParameterStore {
	TMap<FNiagaraVariable, FNiagaraVariable> UserParameterRedirects; // 0x78
};

struct FPolygonToCreate {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FVertexAndAttributes> PerimeterVertices; // 0x8
	FPolygonID OriginalPolygonID; // 0x18
	EPolygonEdgeHardness PolygonEdgeHardness; // 0x1c
};

struct FCLSGripPose {
	UAnimSequence* TP; // 0x0
	UAnimSequence* FP; // 0x8
};

struct FCLSViewModeParameters {
	ECLSViewMode DesiredViewMode; // 0x0
	ECLSViewMode ActualViewMode; // 0x1
	float FirstPersonInTime; // 0x4
	float FirstPersonOutTime; // 0x8
	float FirstPersonChangeRate; // 0xc
	float ThirdPersonChangeRate; // 0x10
	bool bIsImmediately; // 0x14
};

struct FSubdivisionLimitSection {
	TArray<FSubdividedQuad> SubdividedQuads; // 0x0
};

struct FCustomChannelSetup {
	ECollisionChannel Channel; // 0x0
	ECollisionResponse DefaultResponse; // 0x1
	bool bTraceType; // 0x2
	bool bStaticObject; // 0x3
	FName Name; // 0x4
};

struct FCrowIngameScoreIntValue {
	uint32_t Value; // 0x0
	uint32_t IncValue; // 0x4
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

struct FPackedRGBA16N {
	int32_t XY; // 0x0
	int32_t ZW; // 0x4
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

struct FDialogueContextMapping {
	FDialogueContext Context; // 0x0
	USoundWave* SoundWave; // 0x18
	FString LocalizationKeyFormat; // 0x20
	UDialogueSoundWaveProxy* Proxy; // 0x30
};

struct FCrowWorldGrid {
	int8_t GridLevel; // 0x0
	float GridSize; // 0x4
	float GridSizeHalf; // 0x8
	float HeightLimit; // 0xc
	FVector2D WorldOrigin2D; // 0x10
};

struct FPoseLinkBase {
	int32_t LinkID; // 0x0
};

struct FInterpCurveFloat {
	TArray<FInterpCurvePointFloat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FCrowWeaponPartsOptions {
	float AimSpreadDefault; // 0x0
	float HipFireSpreadDefault; // 0x4
	float Recoil; // 0x8
	float RecoilHorizontal; // 0xc
	float RecoilVertical; // 0x10
	float FireSpeed; // 0x14
	float RecoilDecrease; // 0x18
	float AmmoVelocity; // 0x1c
	float AmmoDamage; // 0x20
	float AmmoDamageMin; // 0x24
	float AmmoDamageMax; // 0x28
	float AmmoDamageDropDistance; // 0x2c
	float Reload; // 0x30
	float AimShake; // 0x34
	float AimTime; // 0x38
	float CharacterMoveSpeed; // 0x3c
	float AttackRange; // 0x40
};

struct FTableRowStyle {
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

struct FRawCurveTracks {
	TArray<FFloatCurve> FloatCurves; // 0x0
};

struct FNiagaraVariableDataInterfaceBinding {
	FNiagaraVariable BoundVariable; // 0x0
};

struct FFootIKOffsets {
	FVector LeftFoot; // 0x0
	FVector RightFoot; // 0xc
	float Pelvis; // 0x18
};

struct FWaterBrushEffects {
	FWaterBrushEffectBlurring Blurring; // 0x0
	FWaterBrushEffectCurlNoise CurlNoise; // 0x8
	FWaterBrushEffectDisplacement Displacement; // 0x18
	FWaterBrushEffectSmoothBlending SmoothBlending; // 0x40
	FWaterBrushEffectTerracing Terracing; // 0x48
};

struct FMovieScenePropertySectionData {
	FName PropertyName; // 0x0
	FString PropertyPath; // 0x8
};

struct FWidgetAnimationBinding {
	FName WidgetName; // 0x0
	FName SlotWidgetName; // 0x8
	FGuid AnimationGuid; // 0x10
	bool bIsRootWidget; // 0x20
};

struct FCrowRandomBoxProbability {
	ECrowItemGrade ItemGrade; // 0x0
	float ProbabilityValue; // 0x4
};

struct FBlueprintInputKeyDelegateBinding {
	FInputChord InputChord; // 0x8
	EInputEvent InputKeyEvent; // 0x28
	FName FunctionNameToBind; // 0x2c
};

struct FCrowPartyInvitation {
	uint64_t ServerKey; // 0x0
	FString NickName; // 0x8
};

struct FPropertyPathSegment {
	FName Name; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* Struct; // 0x10
};

struct FAnimNode_CustomProperty {
	TArray<FName> SourcePropertyNames; // 0x10
	TArray<FName> DestPropertyNames; // 0x20
	UObject* TargetInstance; // 0x30
};

struct FCrowMailRewardSentence {
	FString HelpText; // 0x10
	FText RewardSentense; // 0x20
};

struct FChaosBreakEvent {
	UPrimitiveComponent* Component; // 0x0
	FVector Location; // 0x8
	FVector Velocity; // 0x14
	FVector AngularVelocity; // 0x20
	float Mass; // 0x2c
};

struct FTextureSourceBlock {
	int32_t BlockX; // 0x0
	int32_t BlockY; // 0x4
	int32_t SizeX; // 0x8
	int32_t SizeY; // 0xc
	int32_t NumSlices; // 0x10
	int32_t NumMips; // 0x14
};

struct FAnimTickRecord {
	UAnimationAsset* SourceAsset; // 0x0
};

struct FCLSWeaponAnimation {
	FCLSAnimation Select; // 0x0
	FCLSAnimation Deselect; // 0x20
	FCLSAnimation SelectLeftSide; // 0x40
	FCLSAnimation DeselectLeftSide; // 0x60
	FCLSAnimation PreFire; // 0x80
	TArray<FCLSAnimation> FireArray; // 0xa0
	FCLSAnimation PostFire; // 0xb0
	FCLSAnimation ChangeFireMode; // 0xd0
	FCLSMagazineAnimation MagazineAnim; // 0xf0
	FCLSMagazineAnimation ProneMagazineAnim; // 0x190
};

struct FCrowCharacterAnimPrivateReloadRow {
	UAnimSequenceBase* ReloadTP; // 0x8
	UAnimSequenceBase* ReloadTPShort; // 0x10
	UAnimSequenceBase* ReloadFP; // 0x18
	UAnimSequenceBase* ReloadFPShort; // 0x20
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

struct FClanInfo {
	int32_t ClanId; // 0x0
	FString ClanName; // 0x8
	FString ClanNotice; // 0x18
	int32_t ClanMark; // 0x28
	int32_t ClanRankingMonth; // 0x2c
	int32_t ClanRankingTotal; // 0x30
	int32_t ClanMarkBG; // 0x34
	int32_t ClanLeval; // 0x38
	int32_t ClanMemberCurrent; // 0x3c
	int32_t ClanMemberMax; // 0x40
	int64_t MonthContributionPoint; // 0x48
	int64_t TotalContributionPoint; // 0x50
	int32_t HappyTimeHour; // 0x58
	int32_t HappyTimeMinute; // 0x5c
	EClanJoinType ClanInviteType; // 0x60
	EClanAuthority ClanAuthority; // 0x61
	TArray<FCrewInfo> ClanUserList; // 0x68
};

struct FMovieSceneEvaluationGroupLUTIndex {
	int32_t NumInitPtrs; // 0x0
	int32_t NumEvalPtrs; // 0x4
};

struct FNavDataConfig {
	FName Name; // 0x30
	FColor Color; // 0x38
	FVector DefaultQueryExtent; // 0x3c
	AActor* NavigationDataClass; // 0x48
	TSoftClassPtr<UObject> NavDataClass; // 0x50
};

struct FNiagaraCollisionEventPayload {
	FVector CollisionPos; // 0x0
	FVector CollisionNormal; // 0xc
	FVector CollisionVelocity; // 0x18
	int32_t ParticleIndex; // 0x24
	int32_t PhysicalMaterialIndex; // 0x28
};

struct FCrowDotDamageFxInfo {
	UParticleSystem* ParticleFX; // 0x0
	FVector LocationOffset; // 0x8
	FRotator RotationOffset; // 0x14
	FName NameCharacterBone; // 0x20
};

struct FLightmassDirectionalLightSettings {
	float LightSourceAngle; // 0xc
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

struct FCrowWorldLinkedActorData {
	uint32_t ChildWorldActorIndex; // 0x0
	uint32_t ParentWorldActorIndex; // 0x4
};

struct FAudioEQEffect {
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

struct FCrowAdjustMapInfo {
	ECrowGameMode GameMode; // 0x0
	int32_t MapIndex; // 0x4
	bool DefaultMap; // 0x8
	bool ModeDefault; // 0x9
	bool QuickModeDefault; // 0xa
};

struct FEventTrackKey {
	float Time; // 0x0
	FName EventName; // 0x4
};

struct FCrowItemColorTableRowBase {
	uint32_t Index; // 0x8
	FLinearColor Color; // 0xc
	FLinearColor RootColor; // 0x1c
};

struct FKeySlotSimpleJsonData {
	TArray<FKeySlotSimpleJsonNode> Datas; // 0x0
};

struct FARVideoFormat {
	int32_t FPS; // 0x0
	int32_t Width; // 0x4
	int32_t Height; // 0x8
};

struct FCrowWorldSyncBuildingData {
	int32_t BuildingIndex; // 0x0
	FCrowWorldSyncDestructible LayoutDestroyed; // 0x8
	FCrowWorldSyncDynamicState LayoutDynamicStates; // 0x20
	FCrowWorldSyncDestructible BuildingPropsDestroyed; // 0x48
};

struct FAnimNode_MakeDynamicAdditive {
	FPoseLink Base; // 0x10
	FPoseLink Additive; // 0x20
	bool bMeshSpaceAdditive; // 0x30
};

struct FCrowBattlePassSeasonTableRow {
	FString HelpIndex; // 0x8
	char SeasonIndex; // 0x18
	FText SeasonText; // 0x20
	FString SeasonStartTime; // 0x38
	FString SeasonEndTime; // 0x48
};

struct FInterpCurvePointTwoVectors {
	float InVal; // 0x0
	FTwoVectors OutVal; // 0x4
	FTwoVectors ArriveTangent; // 0x1c
	FTwoVectors LeaveTangent; // 0x34
	EInterpCurveMode InterpMode; // 0x4c
};

struct FSolverBreakingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FVertexPair {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
};

struct FCrowLobbyScoreInfo {
	int32_t Rank; // 0x0
	int32_t Level; // 0x4
	FString UserNickName; // 0x8
	int64_t Score; // 0x18
	int32_t AverageScore; // 0x20
	int32_t PlayCount; // 0x24
	int32_t PlayTimeSec; // 0x28
	int32_t WinCount; // 0x2c
	int32_t LoseCount; // 0x30
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

struct FFloatCurve {
	FRichCurve FloatCurve; // 0x18
};

struct FAnimNotifyTrack {
	FName TrackName; // 0x0
	FLinearColor TrackColor; // 0x8
};

struct FParticleReplayTrackKey {
	float Time; // 0x0
	float Duration; // 0x4
	int32_t ClipIDNumber; // 0x8
};

struct FCrowWorldActorDestructionState {
	float ActorHealthPoint; // 0x0
	float ActorMaxHP; // 0x4
	UCrowWorldDamageCheckerBase* ActorDamageChecker; // 0x8
	UCrowWorldDestructionAUD* ActorDestructionAUD; // 0x10
	TArray<UPrimitiveComponent*> RemainMeshComponents; // 0x18
};

struct FAnimNode_Trail {
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

struct FSpriteInstanceData {
	FMatrix Transform; // 0x0
	UPaperSprite* SourceSprite; // 0x40
	FColor VertexColor; // 0x48
	int32_t MaterialIndex; // 0x4c
};

struct FMovieSceneCameraShakeSourceTriggerSectionTemplate {
	TArray<FFrameNumber> TriggerTimes; // 0x20
	TArray<FMovieSceneCameraShakeSourceTrigger> TriggerValues; // 0x30
};

struct FMovieSceneComponentMaterialSectionTemplate {
	int32_t MaterialIndex; // 0x80
};

struct FCrowVehicleSeatWeaponData {
	TArray<ACrowWeaponVehicle*> WeaponArray; // 0x0
};

struct FCrowCustomModeInvitation {
	uint64_t RoomIndex; // 0x0
	uint64_t playerId; // 0x8
	FString NickName; // 0x10
};

struct FTimedDataInputEvaluationData {
	float DistanceToNewestSampleSeconds; // 0x0
	float DistanceToOldestSampleSeconds; // 0x4
};

struct FCrowIngameScoreBase {
	TMap<FString, FCrowIngameScoreIntValue> IntValuePropertys; // 0x8
};

struct FKey {
	FName KeyName; // 0x0
};

struct FCrowBuildingEditorItemSpawnerData {
	ACrowItemSpawner* ItemSpawnerAsset; // 0x0
	FTransform RelativeTransform; // 0x10
};

struct FBoneReductionSetting {
	TArray<FName> BonesToRemove; // 0x0
};

struct FCLSMagazineAnimation {
	FCLSAnimation Reload; // 0x0
	FCLSAnimation ReloadShort; // 0x20
	FCLSAnimation ReloadStart; // 0x40
	FCLSAnimation ReloadLoop; // 0x60
	FCLSAnimation ReloadEnd; // 0x80
};

struct FCrowUnLockItemTable {
	ECrowItemType ItemType; // 0x0
	TArray<int32_t> UnlockItemIndexes; // 0x8
};

struct FEdGraphTerminalType {
	FName TerminalCategory; // 0x0
	FName TerminalSubCategory; // 0x8
	TWeakObjectPtr<UObject> TerminalSubCategoryObject; // 0x10
	bool bTerminalIsConst; // 0x18
	bool bTerminalIsWeakPointer; // 0x19
	bool bTerminalIsUObjectWrapper; // 0x1a
};

struct FCrowWorldPlayerControllerInfo {
	float NextUpdateSynTime; // 0x0
	char IsValidController; // 0x4
	char bServerInitAck; // 0x5
	uint32_t SectorIndex; // 0x8
	uint32_t ClusterIndex; // 0xc
	FBox SectorBox; // 0x10
	FBox ClusterBox; // 0x2c
	FVector LastUpdateSynLocation; // 0x48
	ACrowWorldReplicationController* ReplicationController; // 0x58
	APlayerController* PlayerController; // 0x60
	UCrowWorldSyncClientWorker* ClientWorker; // 0x68
};

struct FTrackedGeometryGroup {
	AARActor* ARActor; // 0x0
	UARComponent* ARComponent; // 0x8
	UARTrackedGeometry* TrackedGeometry; // 0x10
};

struct FSourceEffectChorusBaseSettings {
	float Depth; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	float WetLevel; // 0xc
	float DryLevel; // 0x10
	float Spread; // 0x14
};

struct FVisitedPoint {
	TWeakObjectPtr<AUPSPatrolPoint> FirstPoint; // 0x0
	TWeakObjectPtr<AUPSPatrolPoint> SecondPoint; // 0x8
};

struct FCrowWorldLightProbeGridValue {
	FVector Location; // 0x0
	int32_t Flag; // 0xc
	float OpenRatio; // 0x10
	int32_t Increment; // 0x14
};

struct FCrowSkeletalMeshMergeMaterials {
	TArray<UMaterialInterface*> Materials; // 0x0
};

struct FRawAnimSequenceTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<FQuat> RotKeys; // 0x10
	TArray<FVector> ScaleKeys; // 0x20
};

struct FAnimNode_AimOffsetLookAt {
	FPoseLink BasePose; // 0x150
	int32_t LODThreshold; // 0x160
	FName SourceSocketName; // 0x164
	FName PivotSocketName; // 0x16c
	FVector LookAtLocation; // 0x174
	FVector SocketAxis; // 0x180
	float Alpha; // 0x18c
};

struct FBlueprintWidgetAnimationDelegateBinding {
	EWidgetAnimationEvent Action; // 0x0
	FName AnimationToBind; // 0x4
	FName FunctionNameToBind; // 0xc
	FName UserTag; // 0x14
};

struct FCrowMovementHeliValues {
	float Yaw; // 0x0
	float Pitch; // 0x4
	float Roll; // 0x8
	float Collective; // 0xc
};

struct FNiagaraDataSetProperties {
	FNiagaraDataSetID ID; // 0x0
	TArray<FNiagaraVariable> Variables; // 0x10
};

struct FElementID {
	int32_t IDValue; // 0x0
};

struct FLightingChannels {
	char bChannel0 : 1; // 0x0
	char bChannel1 : 1; // 0x0
	char bChannel2 : 1; // 0x0
};

struct FCrowLobbyProfileRecord {
	FString UserNickName; // 0x0
	int32_t Level; // 0x10
	FString ClanName; // 0x18
	int32_t ClanMarkIndex; // 0x28
	int32_t ClanBgIndex; // 0x2c
	int32_t UserSeasonLevel; // 0x30
	int32_t MercenaryRank; // 0x34
	int32_t SeasonRank; // 0x38
	int32_t ConquestWinCount; // 0x3c
	int32_t ConquestLoseCount; // 0x40
	int32_t ConquestDrawCount; // 0x44
	int32_t ConquestInvalidityCount; // 0x48
	int32_t RecentConquestWinCount; // 0x4c
	int32_t RecentConquestLoseCount; // 0x50
	int32_t RecentSquadMatchAverageRank; // 0x54
	FCrowLobbyProfileRankRecord ConquestRank; // 0x58
	FCrowLobbyProfileRankRecord SquadRank; // 0x78
};

struct FSynthSlateStyle {
	ESynthSlateSizeType SizeType; // 0x8
	ESynthSlateColorStyle ColorStyle; // 0x9
};

struct FFOscillator {
	float Amplitude; // 0x0
	float Frequency; // 0x4
	EInitialOscillatorOffset InitialOffset; // 0x8
	EOscillatorWaveform Waveform; // 0x9
};

struct FCrowItemAssetElement {
	USkeletalMesh* SKC; // 0x0
	UStaticMesh* SMC; // 0x8
	TArray<UMaterialInterface*> Materials; // 0x10
	bool IsFP; // 0x20
};

struct FCrowGameFriendInfo {
	uint64_t ServerKey; // 0x0
	uint64_t SteamId; // 0x8
	uint32_t Level; // 0x10
	FString NickName; // 0x18
	ECrowLobbyFriendState State; // 0x28
	ECrowGameMode GameMode; // 0x2c
};

struct FTrackToSkeletonMap {
	int32_t BoneTreeIndex; // 0x0
};

struct FCompositeFont {
	FTypeface DefaultTypeface; // 0x0
	FCompositeFallbackFont FallbackTypeface; // 0x10
	TArray<FCompositeSubFont> SubTypefaces; // 0x28
};

struct FCrowCustomDisplayRoomInfo {
	uint64_t RoomIndex; // 0x0
	FString RoomName; // 0x8
	ECrowGameMode GameMode; // 0x18
	uint32_t MapIndex; // 0x1c
	ECrowCustomRoomState State; // 0x20
	int32_t MatchingUserCount; // 0x24
	int32_t MaxGamePlayUserCount; // 0x28
	bool UsePassWord; // 0x2c
	FString HostName; // 0x30
	int32_t PlaySec; // 0x40
};

struct FCustomizedToolMenu {
	FName Name; // 0x0
	TMap<FName, FCustomizedToolMenuEntry> Entries; // 0x8
	TMap<FName, FCustomizedToolMenuSection> Sections; // 0x58
	TMap<FName, FCustomizedToolMenuNameArray> EntryOrder; // 0xa8
	TArray<FName> SectionOrder; // 0xf8
};

struct FLevelSequenceSnapshotSettings {
	char ZeroPadAmount; // 0x0
	FFrameRate FrameRate; // 0x4
};

struct FParticleCurvePair {
	FString CurveName; // 0x0
	UObject* CurveObject; // 0x10
};

struct FCLSCharacterAdditionalLadder {
	float LadderStepPosition; // 0x0
	float LadderStepHeight; // 0x4
	ECLSLadderState LadderState; // 0x8
};

struct FRenderingPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FMovieSceneEventTriggerData {
	FMovieSceneEventPtrs Ptrs; // 0x0
	FGuid ObjectBindingId; // 0x28
};

struct FColorGradingSettings {
	FColorGradePerRangeSettings Global; // 0x0
	FColorGradePerRangeSettings Shadows; // 0x50
	FColorGradePerRangeSettings Midtones; // 0xa0
	FColorGradePerRangeSettings Highlights; // 0xf0
	float ShadowsMax; // 0x140
	float HighlightsMin; // 0x144
};

struct FSolverBreakingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FCrowWorldGridActors {
	char bNearGrid : 1; // 0x0
	TArray<UStaticMeshComponent*> SMCList; // 0x8
};

struct FMovieSceneSequenceHierarchyNode {
	FMovieSceneSequenceID ParentID; // 0x0
	TArray<FMovieSceneSequenceID> Children; // 0x8
};

struct FFloatRangeBound {
	ERangeBoundTypes Type; // 0x0
	float Value; // 0x4
};

struct FSubmixEffectFilterSettings {
	ESubmixFilterType FilterType; // 0x0
	ESubmixFilterAlgorithm FilterAlgorithm; // 0x1
	float FilterFrequency; // 0x4
	float FilterQ; // 0x8
};

struct FGenericTeamId {
	char TeamID; // 0x0
};

struct FAnimNode_ApplyLimits {
	TArray<FAngularRangeLimit> AngularRangeLimits; // 0xc8
	TArray<FVector> AngularOffsets; // 0xd8
};

struct FLocalizedIconInfo {
	FString LanguageCode; // 0x0
	FDirectoryPath IconModelPath; // 0x10
	FDirectoryPath IconPortalPath; // 0x20
};

struct FSubmixEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
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

struct FCrowLoadingInfo {
	FText ModeName; // 0x0
	FText MapName; // 0x18
	TArray<FText> ModeDescriptionList; // 0x30
	TArray<FText> ModeTipTextList; // 0x40
	TArray<TSoftObjectPtr<UTexture2D>> LoadingImageList; // 0x50
};

struct FQuartzTimeSignature {
	int32_t NumBeats; // 0x0
	EQuartzTimeSignatureQuantization BeatType; // 0x4
	TArray<FQuartzPulseOverrideStep> OptionalPulseOverride; // 0x8
};

struct FHairDecimationSettings {
	float CurveDecimation; // 0x0
	float VertexDecimation; // 0x4
};

struct FSkyCreatorWeatherSettings {
	FSkyCreatorSkyAtmosphereSettings SkyAtmosphereSettings; // 0x0
	FSkyCreatorVolumetricCloudSettings VolumetricCloudSettings; // 0x6c
	FSkyCreatorSkyLightSettings SkyLightSettings; // 0xf8
	FSkyCreatorSunLightSettings SunLightSettings; // 0x10c
	FSkyCreatorMoonLightSettings MoonLightSettings; // 0x138
	FSkyCreatorExponentialHeightFogSettings ExponentialHeightFogSettings; // 0x164
	FSkyCreatorStarMapSettings StarMapSettings; // 0x1c8
	FSkyCreatorWeatherFXSettings WeatherFXSettings; // 0x1fc
	FSkyCreatorWindSettings WindSettings; // 0x220
	FSkyCreatorExposureSettings ExposureSettings; // 0x244
};

struct FCrowKillInfo {
	ACrowPlayerStateBase* Attacker; // 0x0
	ACrowPlayerStateBase* Victim; // 0x8
	ECrowDamageCauser DamageCauser; // 0x10
	ECrowItemType ItemType; // 0x11
	uint32_t WeaponIndex; // 0x14
	float ActualDamage; // 0x18
	FName BoneName; // 0x1c
	bool IsFirstKill; // 0x24
};

struct FMagicLeapTouchpadGesture {
	EControllerHand hand; // 0x0
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

struct FCrowBuildingHitTestParam {
	AActor* SweepActor; // 0x0
};

struct FSteamVRSkeletonTransform {
	FTransform Root; // 0x0
	FTransform wrist; // 0x30
	FTransform Thumb_1; // 0x60
	FTransform Thumb_2; // 0x90
	FTransform Thumb_3; // 0xc0
	FTransform Thumb_4; // 0xf0
	FTransform Index_1; // 0x120
	FTransform Index_2; // 0x150
	FTransform Index_3; // 0x180
	FTransform Index_4; // 0x1b0
	FTransform Index_5; // 0x1e0
	FTransform Middle_1; // 0x210
	FTransform Middle_2; // 0x240
	FTransform Middle_3; // 0x270
	FTransform Middle_4; // 0x2a0
	FTransform Middle_5; // 0x2d0
	FTransform Ring_1; // 0x300
	FTransform Ring_2; // 0x330
	FTransform Ring_3; // 0x360
	FTransform Ring_4; // 0x390
	FTransform Ring_5; // 0x3c0
	FTransform Pinky_1; // 0x3f0
	FTransform Pinky_2; // 0x420
	FTransform Pinky_3; // 0x450
	FTransform Pinky_4; // 0x480
	FTransform Pinky_5; // 0x4b0
	FTransform Aux_Thumb; // 0x4e0
	FTransform Aux_Index; // 0x510
	FTransform Aux_Middle; // 0x540
	FTransform Aux_Ring; // 0x570
	FTransform Aux_Pinky; // 0x5a0
};

struct FCrowWorldSyncBuildingPropLink {
	int32_t BuildingPropIndex; // 0x0
	int32_t BuildingPropClassIndex; // 0x4
	int32_t ParentBuildingIndex; // 0x8
	int32_t LocalIndexInBuilding; // 0xc
	uint32_t PropFlags; // 0x10
	FTransform InitialTransform; // 0x20
};

struct FNiagaraScriptDataInterfaceCompileInfo {
	FName Name; // 0x0
	int32_t UserPtrIdx; // 0x8
	FNiagaraTypeDefinition Type; // 0x10
	FName RegisteredParameterMapRead; // 0x20
	FName RegisteredParameterMapWrite; // 0x28
	bool bIsPlaceholder; // 0x30
};

struct FCrowCharacterTableRow {
	FString HelpText; // 0x168
	ACrowCharacterPawn* CharacterClass; // 0x178
};

struct FCullDistanceSizePair {
	float Size; // 0x0
	float CullDistance; // 0x4
};

struct FSourceEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FCrowPersonalResultWeaponPartsEvent {
	ECrowWeaponPartsType PartsType; // 0x0
	uint32_t PartsIndex; // 0x4
};

struct FCrowInputLerp {
	float MaxInputValue; // 0x0
	float LerpAmount; // 0x4
	float MovedValuePerSecond; // 0x8
	float CurrentAddedInputAlpha; // 0xc
};

struct FHyperlinkStyle {
	FButtonStyle UnderlineStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x280
	FMargin Padding; // 0x4f0
};

struct FImportFactorySettingValues {
	FString SettingName; // 0x0
	FString Value; // 0x10
};

struct FNodeChain {
	TArray<FName> Nodes; // 0x0
};

struct FCrowProjectileFireData {
	bool IsLocalFire; // 0x0
	bool IsAI; // 0x1
	bool IsFirstPerson; // 0x2
	bool IsPenetration; // 0x3
	int16_t PenetrationCount; // 0x4
	AActor* FireActor; // 0x8
	ACrowWeaponBase* WeaponBase; // 0x10
	TArray<AActor*> IgnoreActor; // 0x18
	ECrowItemType ItemType; // 0x28
	uint16_t WeaponIndex; // 0x2a
	FVector StartLocation; // 0x2c
	FVector EndLocation; // 0x38
	FVector Direction; // 0x44
	FVector EffectStartLocation; // 0x50
	FCrowAmmoTableRow AmmoTable; // 0x60
	FCrowWeaponTableRow WeaponTable; // 0x290
	bool IsRightClickAction; // 0x14b0
	float ProjectileDistance; // 0x14b4
	float PenetrationDistValue; // 0x14b8
	float PenetrationImpactValue; // 0x14bc
	char RemainCookingTime; // 0x14c0
	bool IsCooking; // 0x14c1
	bool IsLockOn; // 0x14c2
	AActor* LockOnActor; // 0x14c8
};

struct FCrowWorldUsedObjectPathInfo {
	TMap<FString, uint32_t> ClassPaths; // 0x0
	TSet<FString> StaticMeshPaths; // 0x50
	TSet<FString> MaterialPaths; // 0xa0
	TSet<FString> TexturePaths; // 0xf0
	TMap<FString, FCrowWorldStaticMeshVariationInfo> SMVariationInfo; // 0x140
};

struct FARPose2D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FVector2D> JointLocations; // 0x28
	TArray<bool> IsJointTracked; // 0x38
};

struct FCrowBuildingEditorSubMesh {
	UStaticMesh* StaticMesh; // 0x0
	TArray<UMaterialInterface*> MaterialOverrides; // 0x8
	FName AttachSocketName; // 0x18
};

struct FAkAdvancedSpatialAudioSettings {
	float DiffractionShadowAttenuationFactor; // 0x0
	float DiffractionShadowDegrees; // 0x4
};

struct FRepAttachment {
	AActor* AttachParent; // 0x0
	FVector_NetQuantize100 LocationOffset; // 0x8
	FVector_NetQuantize100 RelativeScale3D; // 0x14
	FRotator RotationOffset; // 0x20
	FName AttachSocket; // 0x2c
	USceneComponent* AttachComponent; // 0x38
};

struct FScalarParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	float ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FMovieSceneEvaluationGroup {
	TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x0
	TArray<FMovieSceneFieldEntry_EvaluationTrack> TrackLUT; // 0x10
	TArray<FMovieSceneFieldEntry_ChildTemplate> SectionLUT; // 0x20
};

struct FBlendSample {
	UAnimSequence* Animation; // 0x0
	FVector SampleValue; // 0x8
	float RateScale; // 0x14
};

struct FCrowLandWheelsStatusSpring {
	float SpringPosition; // 0x0
	float DamperSpeed; // 0x4
	float SpringForceMagnitude; // 0x8
	float SpringForceApplied; // 0xc
};

struct FCheckBoxStyle {
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

struct FAnimNode_PoseBlendNode {
	FPoseLink SourcePose; // 0x80
	EAlphaBlendOption BlendOption; // 0x90
	UCurveFloat* CustomCurve; // 0x98
};

struct FBlendSampleData {
	int32_t SampleDataIndex; // 0x0
	UAnimSequence* Animation; // 0x8
	float TotalWeight; // 0x10
	float Time; // 0x14
	float PreviousTime; // 0x18
	float SamplePlayRate; // 0x1c
};

struct FCrowMachineGunBoneInfo {
	int32_t LimitAmmoInClip; // 0x0
	FName BoneName; // 0x4
};

struct FCrowVehicleWidgetSeatIcon {
	FName SeatImageName; // 0x0
	FName SeatSquadWidgetName; // 0x8
};

struct FRigConfiguration {
	URig* Rig; // 0x0
	TArray<FNameMapping> BoneMappingTable; // 0x8
};

struct FTypeface {
	TArray<FTypefaceEntry> Fonts; // 0x0
};

struct FNiagaraScriptDataUsageInfo {
	bool bReadsAttributeData; // 0x0
};

struct FSplineIKCachedBoneData {
	FBoneReference Bone; // 0x0
	int32_t RefSkeletonIndex; // 0x10
};

struct FLocoCameraSettings {
	float TargetArmLength; // 0x0
	float CameraLagSpeed; // 0x4
	FVector SocketOffset; // 0x8
};

struct FAnimNode_TwistCorrectiveNode {
	FReferenceBoneFrame BaseFrame; // 0xc8
	FReferenceBoneFrame TwistFrame; // 0xe8
	FAxis TwistPlaneNormalAxis; // 0x108
	float RangeMax; // 0x118
	float RemappedMin; // 0x11c
	float RemappedMax; // 0x120
	FAnimCurveParam Curve; // 0x124
};

struct FClothVertBoneData {
	int32_t NumInfluences; // 0x0
	uint16_t BoneIndices[0xc]; // 0x4
	float BoneWeights[0xc]; // 0x1c
};

struct FNiagaraMatrix {
	FVector4 Row0; // 0x0
	FVector4 Row1; // 0x10
	FVector4 Row2; // 0x20
	FVector4 Row3; // 0x30
};

struct FBlueprintInputActionDelegateBinding {
	FName InputActionName; // 0x4
	EInputEvent InputKeyEvent; // 0xc
	FName FunctionNameToBind; // 0x10
};

struct FNiagaraModuleDependency {
	FName ID; // 0x0
	ENiagaraModuleDependencyType Type; // 0x8
	ENiagaraModuleDependencyScriptConstraint ScriptConstraint; // 0x9
	FText Description; // 0x10
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

struct FLiveLinkSubjectRepresentation {
	FLiveLinkSubjectName Subject; // 0x0
	ULiveLinkRole* Role; // 0x8
};

struct FMovieScene3DScaleKeyStruct {
	FVector Scale; // 0x8
	FFrameNumber Time; // 0x14
};

struct FCLSVehiclePoseSet {
	UAnimSequenceBase* BasePose; // 0x8
	UBlendSpaceBase* DriverAO; // 0x10
	TMap<int32_t, FCLSVehiclePoseInfo> InfoMap; // 0x18
};

struct FSteamVRAction {
	FName Name; // 0x0
	FString Path; // 0x8
};

struct FCLSVehiclePoseInfo {
	int32_t RelaxedFrameIndex; // 0x0
	int32_t BattleFrameIndex; // 0x4
	UBlendSpaceBase* AimOffsetRelaxed; // 0x8
	UBlendSpaceBase* AimOffsetBattle; // 0x10
};

struct FBakedStringCustomAttribute {
	FName AttributeName; // 0x0
	FStringCurve StringCurve; // 0x8
};

struct FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	bool EnableMultiCoreRendering; // 0x34
};

struct FCrowBattleContainer {
	UCrowBattleShape* BattleShape; // 0x0
	UCrowBattleStatus* BattleStatus; // 0x8
	UCrowBattleIdentity* BattleIdentity; // 0x10
	UCrowBattleDamageHandlerBase* BattleDamageHandler; // 0x18
};

struct FCrowIngameMedalRecord {
	ECrowMedalType MedalType; // 0x58
};

struct FCrowWorldEditorActorBuildCache {
	TArray<TWeakObjectPtr<ACrowWorldEditorActor>> TargetActors; // 0x0
	int32_t CurrentIndex; // 0x10
};

struct FCrowDynamicFoliageWindSetting {
	float Intensity; // 0x0
	float IntensityMul_Grass; // 0x4
	float IntensityMul_Bush; // 0x8
	float IntensityMul_Tree; // 0xc
	float Speed; // 0x10
	float Weight; // 0x14
	float DirectionPower; // 0x18
};

struct FCrowAICharacterData {
	FString NickName; // 0x0
	char FaceIndex; // 0x10
	char HairIndex; // 0x11
	char HairColorIndex; // 0x12
	char BeardIndex; // 0x13
	char BeardColorIndex; // 0x14
	char EyeColorIndex; // 0x15
	TArray<FCrowTestWeapon> WeaponItemList; // 0x18
	TArray<FCrowItemData> EquipItemList; // 0x28
	TArray<FCrowClothItemData> ClothItemList; // 0x38
	TArray<uint32_t> TattooIndexList; // 0x48
	ECrowTeamID TeamID; // 0x58
};

struct FCrowWeaponPartsData {
	bool IsEnable; // 0x0
	uint32_t Index; // 0x4
	bool bNew; // 0x8
	TArray<int32_t> Stickers; // 0x10
};

struct FCrowModeEnableChatTableRow {
	ECrowGameMode GameMode; // 0x8
	TArray<ECrowChatType> EnableChatTypes; // 0x10
};

struct FDebugDisplayProperty {
	UObject* Obj; // 0x0
	UObject* WithinClass; // 0x8
};

struct FCrowSquadWidgetInfo {
	int32_t SquadRole; // 0x0
	UGridSlot* GridSlot; // 0x8
};

struct FAnimNode_RotationOffsetBlendSpace {
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

struct FHairGroupInfoWithVisibility {
	bool bIsVisible; // 0x14
};

struct FSkyCreatorVolumetricCloudMaterials {
	UMaterialInterface* VolumetricCloudMaterial_GC0_MSAOC0; // 0x0
	UMaterialInterface* VolumetricCloudMaterial_GC0_MSAOC1; // 0x8
	UMaterialInterface* VolumetricCloudMaterial_GC0_MSAOC2; // 0x10
	UMaterialInterface* VolumetricCloudMaterial_GC1_MSAOC0; // 0x18
	UMaterialInterface* VolumetricCloudMaterial_GC1_MSAOC1; // 0x20
	UMaterialInterface* VolumetricCloudMaterial_GC1_MSAOC2; // 0x28
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

struct FCrowReplicationPerFrames {
	uint32_t ReplicationPerFrames; // 0x0
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

struct FDestructibleDebrisParameters {
	float DebrisLifetimeMin; // 0x0
	float DebrisLifetimeMax; // 0x4
	float DebrisMaxSeparationMin; // 0x8
	float DebrisMaxSeparationMax; // 0xc
	FBox ValidBounds; // 0x10
};

struct FMovieSceneBoolChannel {
	TArray<FFrameNumber> Times; // 0x8
	bool DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<bool> Values; // 0x20
};

struct FCrowFallsDamageTableRow {
	EPhysicalSurface SurfaceType; // 0x8
	float MinRange; // 0xc
	float MaxRange; // 0x10
	ECrowFallsDamageType DamageType; // 0x14
	float Damage; // 0x18
};

struct FDecalData {
	UMaterial* DecalMaterial; // 0x0
	float DecalSize; // 0x8
	float LifeSpan; // 0xc
};

struct FCLSCharacterBattleStanceTime {
	float ToReady; // 0x0
	float ToRelaxed; // 0x4
	float ToKeepDirectedOnWalk; // 0x8
	float ToReadyOnWalkStop; // 0xc
};

struct FTetherSegmentSimulationParams {
	bool bShouldSimulateSegment; // 0x0
	FTetherSegmentSimulationOptions SimulationOptions; // 0x1
};

struct FCrowWheeledFxSetup {
	FCrowVehicleFxTemplate StartEngineFxTemplate; // 0x0
	FCrowVehicleFxTemplate ReadyFxTemplate; // 0x68
	FCrowVehicleFxTemplate ShutDownFxTemplate; // 0xd0
	FCrowVehicleFxTemplate HornFxTemplate; // 0x138
	FCrowVehicleFxTemplate HornOffFxTemplate; // 0x1a0
	FCrowVehicleFxTemplate ImmergeFxTemplate; // 0x208
};

struct FNDIStaticMeshSectionFilter {
	TArray<int32_t> AllowedMaterialSlots; // 0x0
};

struct FInAppPurchaseProductRequest {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FMovieSceneStringChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FString> Values; // 0x18
	FString DefaultValue; // 0x28
	bool bHasDefaultValue; // 0x38
};

struct FCrowCustomFilterInfo {
	ECrowCustomRoomState RoomState; // 0x0
	ECrowGameMode GameMode; // 0x4
	ECrowCustomFilterMaxUser MaxUser; // 0x8
	ECrowCustomFilterReaminSlot ReaminSlot; // 0x9
};

struct FNiagaraCompileEvent {
	FNiagaraCompileEventSeverity Severity; // 0x0
	FString Message; // 0x8
	FGuid NodeGuid; // 0x18
	FGuid PinGuid; // 0x28
	TArray<FGuid> StackGuids; // 0x38
};

struct FMatrix {
	FPlane XPlane; // 0x0
	FPlane YPlane; // 0x10
	FPlane ZPlane; // 0x20
	FPlane WPlane; // 0x30
};

struct FCrowWorldGenerateHLODSetting {
	bool PersistentLevelHLOD; // 0x0
	int32_t LODBuildBatchCount; // 0x4
	TArray<float> MaxSizeForEachLOD; // 0x8
	bool StopAtBuildFail; // 0x18
};

struct FAnimNode_CurveSource {
	FPoseLink SourcePose; // 0x10
	FName SourceBinding; // 0x20
	float Alpha; // 0x28
	TScriptInterface<ICurveSourceInterface> CurveSource; // 0x30
};

struct FCrowPackedInt64 {
	uint64_t Value; // 0x0
};

struct FCrowLandWheelsStatusSteering {
	float Angle; // 0x0
	float Steering; // 0x4
	float TargetInput; // 0x8
};

struct FCrowCustomRoomSettingInfo {
	FString RoomName; // 0x8
	FString PassWord; // 0x18
	ECrowGameMode GameMode; // 0x28
	uint32_t MapIndex; // 0x2c
	int32_t MaxGamePlayUserCount; // 0x30
	int32_t WinPoint; // 0x34
	int32_t PlaySec; // 0x38
	bool Watch; // 0x3c
	bool Intrusion; // 0x3d
};

struct FVehicleDamageParameter {
	EVehicleDamageParameterType Type; // 0x0
	float Parameter; // 0x4
	bool ClearParameter; // 0x8
};

struct FCrowSquadPlayer {
	ACrowPlayerStateBase* PlayerState; // 0x0
	ECrowSquadRole SquadRole; // 0x8
	uint64_t SquadOrder; // 0x10
	uint32_t FirstRespawnAreaID; // 0x18
};

struct FClassMapKey {
	UObject* Class; // 0x0
};

struct FCrowWorldLayoutItemAnimation {
	char IsValidAnimation : 1; // 0x0
	char bHasStateHolderParent : 1; // 0x0
	char bHasAnyGeometry : 1; // 0x0
	char bHasBody : 1; // 0x0
	char bHasTrigger1 : 1; // 0x0
	char bHasTrigger2 : 1; // 0x0
	char bHasChecker1 : 1; // 0x0
	char bHasChecker2 : 1; // 0x0
	char bHasTrace : 1; // 0x1
	char bHasHinge1 : 1; // 0x1
	char bHasHinge2 : 1; // 0x1
	char bHasSlideTarget : 1; // 0x1
	int16_t StateHolderParentIndex; // 0x2
	FString LocalTextKey_Open; // 0x8
	FString LocalTextKey_Close; // 0x18
	FVector HingeLocation1; // 0x28
	FRotator HingeRotator1; // 0x34
	FVector HingeLocation2; // 0x40
	FRotator HingeRotator2; // 0x4c
	FVector SlideTarget; // 0x58
	TArray<UBodySetup*> BodySetups; // 0x68
	FCrowWorldLayoutItemAnim AnimOpen; // 0x78
	FCrowWorldLayoutItemAnim AnimClose; // 0xa8
	FCrowWorldLayoutItemAnim AnimBlocked; // 0xd8
};

struct FNodeHierarchyWithUserData {
	FNodeHierarchyData Hierarchy; // 0x8
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

struct FMagicLeapResult {
	bool bSuccess; // 0x0
	FString AdditionalInfo; // 0x8
};

struct FLiveLinkCurveElement {
	FName CurveName; // 0x0
	float CurveValue; // 0x8
};

struct FCrowConquestLineInfo {
	UCrowWidgetBase* IconWidgetFrom; // 0x0
	UCrowWidgetBase* IconWidgetTo; // 0x8
	ACrowConquestArea* AreaFrom; // 0x10
	ACrowConquestArea* AreaTo; // 0x18
	UCrowConquestLineWidget* LineWidget; // 0x20
	ECrowConquestLineType LineType; // 0x28
	bool FlipHorizontal; // 0x2c
};

struct FInputActionSpeechMapping {
	FName ActionName; // 0x0
	FName SpeechKeyword; // 0x8
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

struct FCrowClothItemData {
	ECrowClothPartsMesh ItemType; // 0x0
	uint32_t ItemIndex; // 0x4
	uint64_t ItemInvenNo; // 0x8
};

struct FCrowBuildingEditorDefaultLOD {
	int16_t LODLevel; // 0x8
	ECrowBuildingPartsLODType LODType; // 0xa
	bool AlwaysHiddenInGame; // 0xb
	bool AlwaysUseStaticMesh; // 0xc
	bool AlwaysUseISMC; // 0xd
	TArray<TSoftObjectPtr<UStaticMesh>> Meshes; // 0x10
	TArray<TSoftObjectPtr<UBlueprint>> BuildingParts; // 0x20
};

struct FCrowWeaponLevel {
	uint32_t SharedIndex; // 0x0
	uint32_t Level; // 0x4
	uint32_t Exp; // 0x8
};

struct FCrowFxSpawnTesterItem {
	float Duration; // 0x0
	float PlayTime; // 0x4
	FVector Location; // 0x8
};

struct FRepMovementTolerance {
	float position; // 0x0
	float LinearVelocity; // 0x4
	float Rotation; // 0x8
	float AngularVelocity; // 0xc
};

struct FCrowCloudScapeSetting {
	int32_t Index; // 0x0
	FTransform Transform; // 0x10
	FTransform SplineCurveTM; // 0x40
	FSplineCurves SplineCurves; // 0x70
	FVector CloudCollisionScale; // 0xe0
	bool bEnvCloud; // 0xec
	bool bNoCollision; // 0xed
	bool bMove; // 0xee
	bool bScale; // 0xef
	float Density; // 0xf0
	float MaxScaleZ; // 0xf4
	float RotationRate; // 0xf8
	float CloudMoveTime; // 0xfc
	UCurveFloat* ScaleAnimCurve; // 0x100
	UCurveFloat* MoveRateCurve; // 0x108
	UCurveFloat* DensityCurve; // 0x110
	UCurveFloat* HeightCurve; // 0x118
	FVector CloudMeshScale; // 0x120
	UStaticMesh* CloudMesh; // 0x130
	UStaticMesh* BoundaryMesh_Inside; // 0x138
	UStaticMesh* BoundaryMesh_Outside; // 0x140
	UStaticMesh* MeshForFixArtifacts; // 0x148
	UMaterialInterface* CloudMaterial; // 0x150
	UMaterialInterface* BoundaryMaterial_Inside; // 0x158
	UMaterialInterface* BoundaryMaterial_Outside; // 0x160
	UMaterialInterface* MaterialForFixArtifacts; // 0x168
	UCrowCloudDamage* CloudDamageSetting; // 0x170
};

struct FLiveLinkRefSkeleton {
	TArray<FName> BoneNames; // 0x0
	TArray<int32_t> BoneParents; // 0x10
};

struct FCameraLensSettings {
	float MinFocalLength; // 0x0
	float MaxFocalLength; // 0x4
	float MinFStop; // 0x8
	float MaxFStop; // 0xc
	float MinimumFocusDistance; // 0x10
	int32_t DiaphragmBladeCount; // 0x14
};

struct FCrowVehicleForceItem {
	USkeletalMeshComponent* TargetSKC; // 0x0
	FVector ForceTotal; // 0x8
};

struct FFormatArgumentData {
	FString ArgumentName; // 0x0
	EFormatArgumentType ArgumentValueType; // 0x10
	FText ArgumentValue; // 0x18
	int32_t ArgumentValueInt; // 0x30
	float ArgumentValueFloat; // 0x34
	ETextGender ArgumentValueGender; // 0x38
};

struct FCrowWorldSyncActor {
	int32_t SyncActorIndex; // 0x0
	ECrowWorldSyncActorType SyncActorType; // 0x4
};

struct FParticleEditorPromotionSettings {
	FFilePath DefaultParticleAsset; // 0x0
};

struct FClothCollisionPrim_Sphere {
	int32_t BoneIndex; // 0x0
	float Radius; // 0x4
	FVector LocalPosition; // 0x8
};

struct FAkExternalSourceInfo {
	FString ExternalSrcName; // 0x0
	AkCodecId CodecID; // 0x10
	FString Filename; // 0x18
	UAkExternalMediaAsset* ExternalSourceAsset; // 0x28
	bool IsStreamed; // 0x30
};

struct FCrowClothPatchTableRow {
	UMaterialInstance* PatchMaterial; // 0x258
};

struct FCrowConquestAreaInfo {
	bool Initialized; // 0x0
	bool EnableConquestRedTeam; // 0x1
	bool EnableConquestBlueTeam; // 0x2
	FString DisplayName; // 0x8
	char ConquestTeam; // 0x18
	char GroupConquestTeam; // 0x19
	char RequireConquestPoint; // 0x1a
	char RedTeamConquestPoint; // 0x1b
	char BlueTeamConquestPoint; // 0x1c
	ECrowConquestBattleState BattleState; // 0x1d
};

struct FStaticMaterialLayersParameter {
	FMaterialLayersFunctions Value; // 0x28
};

struct FVertexIndexAndInstanceID {
	int32_t ContourIndex; // 0x0
	FVertexInstanceID VertexInstanceID; // 0x4
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

struct FChaosPhysicsSettings {
	EChaosThreadingMode DefaultThreadingModel; // 0x0
	EChaosSolverTickMode DedicatedThreadTickMode; // 0x1
	EChaosBufferMode DedicatedThreadBufferMode; // 0x2
};

struct FNiagaraCompileHash {
	TArray<char> DataHash; // 0x0
};

struct FRichTextStyleRow {
	FTextBlockStyle TextStyle; // 0x8
};

struct FSolverCollisionFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
};

struct FCrowVehicleDeltaVelocity {
	float Forward; // 0x0
	float Right; // 0x4
	float Duration; // 0x8
};

struct FPropertyAccessIndirectionChain {
	TFieldPath<FProperty> Property; // 0x0
	int32_t IndirectionStartIndex; // 0x20
	int32_t IndirectionEndIndex; // 0x24
	int32_t EventId; // 0x28
};

struct FActiveCameraShakeInfo {
	UCameraShakeBase* ShakeInstance; // 0x0
	TWeakObjectPtr<UCameraShakeSourceComponent> ShakeSource; // 0x8
};

struct FCrowWorldSyncHubNodeInfoRow {
	int32_t SyncAreaIndex; // 0x8
	int32_t SyncNodeIndex; // 0xc
	int32_t ActorNum; // 0x10
	uint32_t StaticMeshCount; // 0x14
	float TextureRuntimeMemory; // 0x18
	uint32_t LOD0_Tris; // 0x1c
	uint32_t LOD1_Tris; // 0x20
	uint32_t LOD2_Tris; // 0x24
	uint32_t LOD3_Tris; // 0x28
	uint32_t LOD0_Drawcalls; // 0x2c
	uint32_t LOD1_Drawcalls; // 0x30
	uint32_t LOD2_Drawcalls; // 0x34
	uint32_t LOD3_Drawcalls; // 0x38
	TArray<uint32_t> LODTris; // 0x40
	TArray<uint32_t> LODMaterialNums; // 0x50
};

struct FCrowWorldSyncDataSetting {
	UDataTable* SyncDataTable; // 0x0
	float SyncAreaSize; // 0x8
	float SyncNodeSize; // 0xc
	FVector2D WorldOrigin2D; // 0x10
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

struct FHelpDescriptionData {
	EMouseButtonType ButtonType; // 0x0
	EKeyInputType KeyInputType; // 0x1
	FString DescriptionText; // 0x8
	bool IsFrontKey; // 0x18
};

struct FWorldMeteorObjectInfo {
	FSoftObjectPath Object; // 0x0
	ACrowWorldPropActor* PropClass; // 0x18
	FTransform Transform; // 0x20
};

struct FNiagaraBoundParameter {
	FNiagaraVariable Parameter; // 0x0
	int32_t SrcOffset; // 0x20
	int32_t DestOffset; // 0x24
};

struct FInlineEditableTextBlockStyle {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x800
};

struct FCrowLootPickupItemData {
	FString UserName; // 0x0
	TArray<ACrowItemBase*> ItemList; // 0x10
	ACrowPickupInventory* PickUpInvenActor; // 0x20
};

struct FRuntimeVirtualTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	URuntimeVirtualTexture* ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x18
};

struct FMovieSceneMarkedFrame {
	FFrameNumber FrameNumber; // 0x0
	FString Label; // 0x8
};

struct FNamedNetDriver {
	UNetDriver* NetDriver; // 0x0
};

struct FCrowClothBeardTableRow {
	TMap<FString, USkeletalMesh*> RaceBeardMeshList; // 0x258
};

struct FCrowZombieInfo {
	float ZombieTransfromWaitingTime; // 0x0
	float HP; // 0x4
	float HealDelayByDamage; // 0x8
	float HealPerSecond; // 0xc
	uint16_t DefaultEnergy; // 0x10
	uint16_t MaxEnergy; // 0x12
	uint16_t EnergyLossPerSecond; // 0x14
	uint16_t GetEnergyByHit; // 0x16
	uint16_t GetEnergyByKill; // 0x18
	float GetEnergyRateByQon; // 0x1c
	float RunSpeedRate; // 0x20
	float JumpSpeedRate; // 0x24
	float EnemyScanDistance; // 0x28
	FCrowGameIconDisplayInfo DisplayInfo; // 0x30
	UParticleSystem* AttachEffect; // 0xb8
	UParticleSystem* ChangeZombieEffect; // 0xc0
	UParticleSystem* ZombieDeathEffect; // 0xc8
	TArray<FCrowZombieDamgeInfo> DamageRateArray; // 0xd0
	TArray<FCrowZombieHeartBeatInfo> HeartBeatInfoArray; // 0xe0
	FPostProcessSettings PostProcess; // 0xf0
	FWeaponDamageSettings ExplosionDamage; // 0x640
	UDamageType* ExplosionDamegeType; // 0x668
};

struct FLandscapeMaterialTextureStreamingInfo {
	FName TextureName; // 0x0
	float TexelFactor; // 0x8
};

struct FMeshElementAttributeList {
	TArray<FMeshElementAttributeData> Attributes; // 0x0
};

struct FCrowCharacterAnimProxy {
	TMap<int32_t, FName> GroundNotMovingStates; // 0x760
	TMap<int32_t, FName> GroundMainStates; // 0x7b0
	TMap<int32_t, FName> GroundWeaponStates; // 0x800
	TMap<int32_t, FName> VehicleWeaponStates; // 0x850
	UCrowCharacterAnimInst* AnimInstance; // 0xb00
};

struct FCrowCharacterSwimFXSetting {
	TSoftObjectPtr<UParticleSystem> FX; // 0x0
	TSoftObjectPtr<UNiagaraSystem> FX_N; // 0x28
};

struct FBakedCustomAttributePerBoneData {
	int32_t BoneTreeIndex; // 0x0
	TArray<FBakedStringCustomAttribute> StringAttributes; // 0x8
	TArray<FBakedIntegerCustomAttribute> IntAttributes; // 0x18
	TArray<FBakedFloatCustomAttribute> FloatAttributes; // 0x28
};

struct FInterpGroupActorInfo {
	FName ObjectName; // 0x0
	TArray<AActor*> Actors; // 0x8
};

struct FMovieSceneNiagaraColorParameterSectionTemplate {
	FMovieSceneFloatChannel RedChannel; // 0x40
	FMovieSceneFloatChannel GreenChannel; // 0xe0
	FMovieSceneFloatChannel BlueChannel; // 0x180
	FMovieSceneFloatChannel AlphaChannel; // 0x220
};

struct FTetherCableSimulationOptions {
	float SimulationDuration; // 0x0
	float SubstepTime; // 0x4
	bool bEnableStiffness; // 0x8
	int32_t StiffnessSolverIterations; // 0xc
	float Drag; // 0x10
	bool bEnableCollision; // 0x14
	bool bEnableSelfCollision; // 0x15
	FCollisionProfileName CollisionProfile; // 0x18
	float CollisionWidthScale; // 0x20
	float CollisionFriction; // 0x24
	float ParticleDistanceScale; // 0x28
	float ConstraintsEaseInTime; // 0x2c
};

struct FRootMotionSourceSettings {
	char Flags; // 0x0
};

struct FBox2D {
	FVector2D Min; // 0x0
	FVector2D Max; // 0x8
	char bIsValid; // 0x10
};

struct FPatrolPointScript {
	UUPSPatrolPointScript* PatrolPointScript; // 0x0
};

struct FCrowWorldPropertyVehicle {
	float WorldOceanZ; // 0x0
	float WorldAltitudeLimitZ; // 0x4
};

struct FConstraintData {
	FConstraintDescriptor Constraint; // 0x0
	float Weight; // 0x10
	bool bMaintainOffset; // 0x14
	FTransform Offset; // 0x20
	FTransform CurrentTransform; // 0x50
};

struct FDatasmithCameraFocusSettingsTemplate {
	ECameraFocusMethod FocusMethod; // 0x0
	float ManualFocusDistance; // 0x4
};

struct FAnchorData {
	FMargin Offsets; // 0x0
	FAnchors Anchors; // 0x10
	FVector2D Alignment; // 0x20
};

struct FCrowWorldReplicationGlobalData {
	FCrowWorldReplicationLandmark LandmarkData; // 0x0
};

struct FSlateColor {
	FLinearColor SpecifiedColor; // 0x0
	ESlateColorStylingMode ColorUseRule; // 0x10
};

struct FAnimNode_SaveCachedPose {
	FPoseLink Pose; // 0x10
	FName CachePoseName; // 0x20
};

struct FAkXboxOneAdvancedInitializationSettings {
	uint16_t MaximumNumberOfXMAVoices; // 0x38
	bool UseHardwareCodecLowLatencyMode; // 0x3a
};

struct FAnimNode_BlendListByInt {
	int32_t ActiveChildIndex; // 0x98
};

struct FCrowBuildingGeneratedParts {
	char IsValidParts : 1; // 0x0
	char IsSubMeshParts : 1; // 0x0
	char PartsProperty; // 0x1
	int32_t ParentPartsIndex; // 0x4
	TArray<FCrowBuildingHISMCKey> HISMCKeys; // 0x8
	FTransform RelativeTransform; // 0x20
	TArray<FCrowBuildingSubMesh> SubMeshes; // 0x50
};

struct FSolverTrailingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FMTDResult {
	FVector Direction; // 0x0
	float Distance; // 0xc
};

struct FFloatRange {
	FFloatRangeBound LowerBound; // 0x0
	FFloatRangeBound UpperBound; // 0x8
};

struct FHairGroupInfo {
	int32_t GroupID; // 0x0
	int32_t NumCurves; // 0x4
	int32_t NumGuides; // 0x8
	int32_t NumCurveVertices; // 0xc
	int32_t NumGuideVertices; // 0x10
};

struct FAnimNotifyQueue {
	TArray<FAnimNotifyEventReference> AnimNotifies; // 0x10
	TMap<FName, FAnimNotifyArray> UnfilteredMontageAnimNotifies; // 0x20
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

struct FPhysicsConstraintProfileHandle {
	FConstraintProfileProperties ProfileProperties; // 0x0
	FName ProfileName; // 0x10c
};

struct FNiagaraTypeLayoutInfo {
	TArray<uint32_t> FloatComponentByteOffsets; // 0x0
	TArray<uint32_t> FloatComponentRegisterOffsets; // 0x10
	TArray<uint32_t> Int32ComponentByteOffsets; // 0x20
	TArray<uint32_t> Int32ComponentRegisterOffsets; // 0x30
	TArray<uint32_t> HalfComponentByteOffsets; // 0x40
	TArray<uint32_t> HalfComponentRegisterOffsets; // 0x50
};

struct FNiagaraEmitterScalabilitySettingsArray {
	TArray<FNiagaraEmitterScalabilitySettings> Settings; // 0x0
};

struct FVirtualTextureSpacePoolConfig {
	int32_t MinTileSize; // 0x0
	int32_t MaxTileSize; // 0x4
	TArray<EPixelFormat> Formats; // 0x8
	int32_t SizeInMegabyte; // 0x18
	bool bAllowSizeScale; // 0x1c
	uint32_t ScalabilityGroup; // 0x20
};

struct FCLSCommonAnimList {
	TArray<FCLSAnimation> AnimArray; // 0x0
};

struct FCrowLandWheelsStateSuspension {
	char Detached : 1; // 0x0
	char DisabledSpring : 1; // 0x0
	char DisabledDriving : 1; // 0x0
	char DisabledBraking : 1; // 0x0
	char DisabledSteering : 1; // 0x0
	char DisabledTireFlat : 1; // 0x0
	char DisabledTireDestroyed : 1; // 0x0
	float EfficiencySpring; // 0x4
	float EfficiencyDriving; // 0x8
	float EfficiencyBraking; // 0xc
	float EfficiencySteering; // 0x10
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

struct FMovieSceneFloatChannelSerializationHelper {
	ERichCurveExtrapolation PreInfinityExtrap; // 0x0
	ERichCurveExtrapolation PostInfinityExtrap; // 0x1
	TArray<int32_t> Times; // 0x8
	TArray<FMovieSceneFloatValueSerializationHelper> Values; // 0x18
	float DefaultValue; // 0x28
	bool bHasDefaultValue; // 0x2c
};

struct FMovieSceneActorReferenceKey {
	FMovieSceneObjectBindingID Object; // 0x0
	FName ComponentName; // 0x18
	FName SocketName; // 0x20
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

struct FCrowVehicleSuspensionTrace {
	AActor* OwnerActor; // 0x40
	FHitResult HitResult; // 0x50
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

struct FCrowWorldActorLODState {
	UStaticMeshComponent* LODMeshComponent; // 0x0
};

struct FCrowWorldClientSector {
	FCrowWorldReplicationSector SectorData; // 0x8
	TMap<uint32_t, ACrowWorldActor*> WorldActors; // 0x50
	TMap<uint32_t, ACrowWorldActor*> ClusterActors; // 0xa0
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

struct FCrowDialogTableRow {
	FText Message; // 0x10
	UPaperSprite* Icon; // 0x28
	FLinearColor IconColor; // 0x30
	bool GuideDisplay; // 0x40
	FText GuideTitle; // 0x48
	FSoftObjectPath GuideImage; // 0x60
	FText GuideDesc; // 0x78
	UAkAudioEvent* Sound; // 0x90
	float DisplayTime; // 0x98
	float DelayTime; // 0x9c
};

struct FBuildPromotionNewProjectSettings {
	FDirectoryPath NewProjectFolderOverride; // 0x0
	FString NewProjectNameOverride; // 0x10
};

struct FMovementProperties {
	char bCanCrouch : 1; // 0x0
	char bCanJump : 1; // 0x0
	char bCanWalk : 1; // 0x0
	char bCanSwim : 1; // 0x0
	char bCanFly : 1; // 0x0
};

struct FRotorProxyData {
	FName RotorBoneName; // 0x0
	FRotator RotorAxis; // 0x8
	FRotator RotorRotation; // 0x14
};

struct FCrowSquadMatchRewardTableRow {
	FString TextIndex; // 0x10
	ECrowSquadMatchReward Type; // 0x20
	FText RewardName; // 0x28
	UPaperSprite* DefaultIcon; // 0x40
	uint32_t ObjectivePoint; // 0x48
	float SpawnHeight; // 0x4c
	AActor* RewardObjectClass01; // 0x50
	AActor* RewardObjectClass02; // 0x58
	FString RewardObjectIndex; // 0x60
	ACrowSquadRewardPreviewActor* PreviewActorClass; // 0x70
	UParticleSystem* SmokeEffect; // 0x78
	FCrowGameIconDisplayInfo IconInfo; // 0x80
	FString DialogKey; // 0x108
};

struct FCrowVehicleSpawnWeight {
	FString TextIndex; // 0x0
	float Weight; // 0x10
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

struct FNavLinkCustomInstanceData {
	uint32_t NavLinkUserId; // 0x68
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

struct FCustomDefine {
	FString DefineName; // 0x0
	FString DefineValue; // 0x10
};

struct FBlueprintCookedComponentInstancingData {
	TArray<FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; // 0x0
	bool bHasValidCookedData; // 0x21
};

struct FPaperFlipbookKeyFrame {
	UPaperSprite* Sprite; // 0x0
	int32_t FrameRun; // 0x8
};

struct FCrowAccSlotWidgetInfo {
	ECrowWeaponAccType WeaponAccType; // 0x0
	uint32_t AccTableIndex; // 0x4
	UPaperSprite* IconSprite; // 0x8
	FText AccName; // 0x10
	ECrowItemGrade ItemGrade; // 0x28
};

struct FCrowZombieHeartBeatInfo {
	float Percent; // 0x0
	float AniSpeed; // 0x4
	FLinearColor Color; // 0x8
	FString Dialog; // 0x18
};

struct FSpriteDrawCallRecord {
	FVector Destination; // 0x0
	UTexture* BaseTexture; // 0x10
	FColor Color; // 0x48
};

struct FWaterBrushEffectSmoothBlending {
	float InnerSmoothDistance; // 0x0
	float OuterSmoothDistance; // 0x4
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

struct FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
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

struct FHairGeometrySettings {
	float HairWidth; // 0x0
	float HairRootScale; // 0x4
	float HairTipScale; // 0x8
	float HairClipScale; // 0xc
};

struct FTetherSimulationParticle {
	uint32_t ParticleUniqueId; // 0x0
	bool bFree; // 0x4
	FVector position; // 0x8
	FVector OldPosition; // 0x14
};

struct FAkMidiEventBase {
	EAkMidiEventType Type; // 0x0
	char Chan; // 0x1
};

struct FAkBoolPropertyToControl {
	FString ItemProperty; // 0x0
};

struct FMovieSceneMaterialParameterCollectionTemplate {
	UMaterialParameterCollection* MPC; // 0x80
};

struct FMovieSceneEvaluationFieldSharedEntityMetaData {
	FGuid ObjectBindingId; // 0x0
};

struct FCrowWorldSyncBuildingItemSpawnerLink {
	int32_t BuildingItemSpawnerIndex; // 0x0
	int32_t BuildingItemSpawnerClassIndex; // 0x4
	int32_t ParentBuildingIndex; // 0x8
	int32_t LocalIndexInBuilding; // 0xc
	FTransform InitialTransform; // 0x10
};

struct FCollisionImpactData {
	TArray<FRigidBodyContactInfo> ContactInfos; // 0x0
	FVector TotalNormalImpulse; // 0x10
	FVector TotalFrictionImpulse; // 0x1c
	bool bIsVelocityDeltaUnderThreshold; // 0x28
};

struct FMovieSceneSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x0
	TArray<FMovieSceneNestedSequenceTransform> NestedTransforms; // 0x10
};

struct FFollicleMaskOptions {
	UGroomAsset* Groom; // 0x0
	EFollicleMaskChannel Channel; // 0x8
};

struct FCachedAnimTransitionData {
	FName StateMachineName; // 0x0
	FName FromStateName; // 0x8
	FName ToStateName; // 0x10
};

struct FWindowStyle {
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

struct FEQSParametrizedQueryExecutionRequest {
	UEnvQuery* QueryTemplate; // 0x0
	TArray<FAIDynamicParam> QueryConfig; // 0x8
	FBlackboardKeySelector EQSQueryBlackboardKey; // 0x18
	EEnvQueryRunMode RunMode; // 0x40
	char bUseBBKeyForQueryTemplate : 1; // 0x44
};

struct FCrowWorldSMCShakingState {
	FTransform BeginShakeTransform; // 0x0
	FTransform NextShakeTransform; // 0x30
	char Shaking : 1; // 0x60
	char NextTimeStep : 1; // 0x60
	float ShakeDuration; // 0x64
	float ShakeTimeLeft; // 0x68
	float ShakeStepTime; // 0x6c
	float ShakeStepLeft; // 0x70
	float ShakeOffset; // 0x74
	FVector ShakeOffsetVector; // 0x78
	float ShakeOffsetMultiply; // 0x84
};

