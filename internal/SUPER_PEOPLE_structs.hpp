// Created by BlueFire1337
// Updated 2022-01-27
// Generated 2022-02-02

#pragma once

struct FCompositeFallbackFont {
	FTypeface Typeface; // 0x0
	float ScalingFactor; // 0x10
};

struct FResponse_AddItem {
	uint32_t C; // 0x0
	FString E; // 0x8
	FResponse_AddItem_Rec D; // 0x18
};

struct FG2C_Notify_Emergency_Data {
	TArray<FG2C_Notify_Emergency_Array> notify_emergency; // 0x0
};

struct FAnalysisClientGameExchangePartsData {
	int32_t weapon_slot_index; // 0x0
	int32_t weapon_id; // 0x4
	FString weapon_name; // 0x8
	FAnalysisClientGameItemPartsData equip_parts_info; // 0x18
	FAnalysisClientGameItemPartsData unequip_parts_info; // 0x30
};

struct FNiagaraScriptHighlight {
	FLinearColor Color; // 0x0
	FText DisplayName; // 0x10
};

struct FBoolParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneBoolChannel ParameterCurve; // 0x8
};

struct FPerkDeckData : FTableRowBase {
	FText DisplayWeaponName; // 0x8
	TSoftObjectPtr<UObject> ClassIcon; // 0x20
	TSoftObjectPtr<UObject> CohIcon; // 0x48
	TMap<EWeaponType, float> FirstExpertWeapon; // 0x70
	TArray<FPerkDeckElement> PerkCards; // 0xc0
	TSoftObjectPtr<UObject> TitleImage; // 0xd0
	ESuperPeopleClass ClassEnum; // 0xf8
	TSoftObjectPtr<UObject> TeamInfoClassIcon; // 0x100
	bool bNotKeepClass; // 0x128
	FText WeaponDescription; // 0x130
	FText DisplayClassName; // 0x148
	TSoftObjectPtr<UObject> ClassSelectIcon; // 0x160
	TSoftObjectPtr<UObject> ClassIcon_Widget; // 0x188
	FPerkDeckNewbieAdvantage Beginner_Advantage; // 0x1b0
	FPerkLevelUpData PerkLevelUpData; // 0x1c8
	int32_t ID; // 0x340
	TArray<FPerkDeckNewbieAdvantage> Defeat_Advantage; // 0x348
	TSoftObjectPtr<UObject> NoClassWeaponImage; // 0x358
	FName WeaponKey; // 0x380
	int32_t ClassType; // 0x388
	TArray<FName> WeaponItems; // 0x390
	TArray<FName> SupplyItems; // 0x3a0
	TMap<EWeaponType, float> SecondExpertWeapon; // 0x3b0
	TMap<FName, float> ExpertWeaponModifier; // 0x400
	FText DisplayName; // 0x450
	TArray<int32_t> CraftedWeaponIDs; // 0x468
	FText Description; // 0x478
	TArray<FName> ClassBuffNames; // 0x490
	int32_t PerkDeckWeight; // 0x4a0
	FName BoostTypeKey; // 0x4a4
};

struct FMovieSceneTemplateGenerationLedger {
	FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x0
	TMap<FGuid, FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x8
	TMap<FGuid, FMovieSceneFrameRange> SubSectionRanges; // 0x58
};

struct FCoherentUIGTViewInfo {
	int32_t Width; // 0x0
	int32_t Height; // 0x4
	bool IsTransparent; // 0x8
	float ClickThroughAlphaThreshold; // 0xc
	float AnimationFrameDefer; // 0x10
};

struct FPoseDataContainer {
	TArray<FSmartName> PoseNames; // 0x0
	TArray<FName> Tracks; // 0x10
	TMap<FName, int32_t> TrackMap; // 0x20
	TArray<FPoseData> Poses; // 0x70
	TArray<FAnimCurveBase> Curves; // 0x80
};

struct FCustomDefine {
	FString DefineName; // 0x0
	FString DefineValue; // 0x10
};

struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore {
	TMap<FNiagaraVariable, FNiagaraVariable> UserParameterRedirects; // 0xb8
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

struct FTurnAnims {
	FTurnInPlaceAnimInfo Unarmed_Stand_Turn_L_91; // 0x0
	FTurnInPlaceAnimInfo Unarmed_Stand_Turn_L_181; // 0x20
	FTurnInPlaceAnimInfo Unarmed_Stand_Turn_R_91; // 0x40
	FTurnInPlaceAnimInfo Unarmed_Stand_Turn_R_181; // 0x60
	FTurnInPlaceAnimInfo Unarmed_Crouch_Turn_L_91; // 0x80
	FTurnInPlaceAnimInfo Unarmed_Crouch_Turn_L_181; // 0xa0
	FTurnInPlaceAnimInfo Unarmed_Crouch_Turn_R_91; // 0xc0
	FTurnInPlaceAnimInfo Unarmed_Crouch_Turn_R_181; // 0xe0
	FTurnInPlaceAnimInfo Unarmed_Prone_Turn_L_46; // 0x100
	FTurnInPlaceAnimInfo Unarmed_Prone_Turn_R_46; // 0x120
	FTurnInPlaceAnimInfo Rifle_Stand_Turn_L_91; // 0x140
	FTurnInPlaceAnimInfo Rifle_Stand_Turn_L_181; // 0x160
	FTurnInPlaceAnimInfo Rifle_Stand_Turn_R_91; // 0x180
	FTurnInPlaceAnimInfo Rifle_Stand_Turn_R_181; // 0x1a0
	FTurnInPlaceAnimInfo Rifle_Crouch_Turn_L_91; // 0x1c0
	FTurnInPlaceAnimInfo Rifle_Crouch_Turn_L_181; // 0x1e0
	FTurnInPlaceAnimInfo Rifle_Crouch_Turn_R_91; // 0x200
	FTurnInPlaceAnimInfo Rifle_Crouch_Turn_R_181; // 0x220
	FTurnInPlaceAnimInfo Rifle_Prone_Turn_L_46; // 0x240
	FTurnInPlaceAnimInfo Rifle_Prone_Turn_R_46; // 0x260
	FTurnInPlaceAnimInfo Pistol_Stand_Turn_L_91; // 0x280
	FTurnInPlaceAnimInfo Pistol_Stand_Turn_L_181; // 0x2a0
	FTurnInPlaceAnimInfo Pistol_Stand_Turn_R_91; // 0x2c0
	FTurnInPlaceAnimInfo Pistol_Stand_Turn_R_181; // 0x2e0
	FTurnInPlaceAnimInfo Pistol_Crouch_Turn_L_91; // 0x300
	FTurnInPlaceAnimInfo Pistol_Crouch_Turn_L_181; // 0x320
	FTurnInPlaceAnimInfo Pistol_Crouch_Turn_R_91; // 0x340
	FTurnInPlaceAnimInfo Pistol_Crouch_Turn_R_181; // 0x360
	FTurnInPlaceAnimInfo Pistol_Prone_Turn_L_46; // 0x380
	FTurnInPlaceAnimInfo Pistol_Prone_Turn_R_46; // 0x3a0
	FTurnInPlaceAnimInfo Descent_Turn_L; // 0x3c0
	FTurnInPlaceAnimInfo Descent_Turn_R; // 0x3e0
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

struct FBuffData : FTableRowBase {
	UBravoHotelBuffBase* BuffClass; // 0x8
	EBuffTargetType BuffTarget; // 0x10
	TSoftObjectPtr<UObject> CohIcon; // 0x18
	FText DisplayName; // 0x40
	FText Description; // 0x58
	FColor BorderColor; // 0x70
	FColor BGColor; // 0x74
	int32_t DisplayLevel; // 0x78
	FName EffectSet; // 0x7c
	float ReadyTime; // 0x84
	float BuffTime; // 0x88
	float CoolTime; // 0x8c
	float Chance; // 0x90
	int32_t LimitCount; // 0x94
	TArray<FString> SubBuffIndex; // 0x98
	TArray<FString> StartBuffIndex; // 0xa8
	TArray<FString> EndBuffIndex; // 0xb8
	FString SpecialCondition; // 0xc8
	float PlusValue; // 0xd8
	float PercentValue; // 0xdc
	bool bReverseCondition; // 0xe0
	bool bUseableInVehicle; // 0xe1
	TArray<FName> TargetItemIndex; // 0xe8
	TArray<FName> EquipedItemIndex; // 0xf8
	TArray<EWeaponType> WeaponType; // 0x108
	TArray<FName> BoneName; // 0x118
	TArray<FString> State; // 0x128
	TArray<FString> ETC; // 0x138
	FString Param01; // 0x148
	FString Param02; // 0x158
	FString Param03; // 0x168
	FString Param04; // 0x178
};

struct FC2G_SetCloseMatchMakingTag {
	FString Type; // 0x0
	FC2G_SetCloseMatchMakingTag_Data Data; // 0x10
};

struct FC2G_PartySelectMap {
	FString Type; // 0x0
	FC2G_PartySelectMap_Data Data; // 0x10
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

struct FMeshTriCoordinate {
	int32_t Tri; // 0x0
	FVector BaryCoord; // 0x4
};

struct FARSharedWorldReplicationState {
	int32_t PreviewImageOffset; // 0x0
	int32_t ARWorldOffset; // 0x4
};

struct FTextureSourceBlock {
	int32_t BlockX; // 0x0
	int32_t BlockY; // 0x4
	int32_t SizeX; // 0x8
	int32_t SizeY; // 0xc
	int32_t NumSlices; // 0x10
	int32_t NumMips; // 0x14
};

struct FMutableModelParameterProperties {
	FString Name; // 0x0
	EMutableParameterType Type; // 0x10
	int32_t ImageDescriptionCount; // 0x14
	TArray<FMutableModelParameterValue> PossibleValues; // 0x18
	FMutableParamUIMetadata ParamUIMetadata; // 0x28
};

struct FDebugAircraftWorldInfo {
	FVector RightVectorStartWorldPos; // 0x0
	FVector RightVectorEndWorldPos; // 0xc
	FVector ChangedStartWorldPos; // 0x18
	FVector ChangedEndWorldPos; // 0x24
	FVector IgnoreAreaWorldPos; // 0x30
	float IgnoreAreaRadius; // 0x3c
};

struct FPendingReleaseSkeletalMeshInfo {
	USkeletalMesh* SkeletalMesh; // 0x0
	double Timestamp; // 0x8
};

struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel VectorChannels[0x4]; // 0x48
	int32_t ChannelsUsed; // 0x2c8
};

struct FAwsIdentityIdRequest {
	FString IdentityPoolId; // 0x0
	TMap<FString, FString> Logins; // 0x10
};

struct FNiagaraEmitterScalabilitySettings {
	FNiagaraPlatformSet Platforms; // 0x0
	char bScaleSpawnCount : 1; // 0x20
	float SpawnCountScale; // 0x24
};

struct FAssistInfo {
	ABravoHotelPlayerState* TargetPS; // 0x0
	float HitTime; // 0x8
	float DamageAmount; // 0xc
};

struct FCompilationOptions {
	bool bTextureCompression; // 0x0
	int32_t OptimizationLevel; // 0x4
	bool bUseParallelCompilation; // 0x8
	bool bUseDiskCompilation; // 0x9
};

struct FMagicLeapLightEstimationAmbientGlobalState {
	TArray<float> AmbientIntensityNits; // 0x0
	FTimespan Timestamp; // 0x10
};

struct FStructSerializerMapTestStruct {
	TMap<int32_t, FString> IntToStr; // 0x0
	TMap<FString, FString> StrToStr; // 0x50
	TMap<FString, FVector> StrToVec; // 0xa0
	TMap<FString, FStructSerializerBuiltinTestStruct> StrToStruct; // 0xf0
};

struct FOptionalMovieSceneBlendType {
	EMovieSceneBlendType BlendType; // 0x0
	bool bIsValid; // 0x1
};

struct FMovieSceneOrderedEvaluationKey {
	FMovieSceneEvaluationKey Key; // 0x0
	uint16_t SetupIndex; // 0xc
	uint16_t TearDownIndex; // 0xe
};

struct FEngineShowFlagsSetting {
	FString ShowFlagName; // 0x0
	bool Enabled; // 0x10
};

struct FLoadBuildingInfo {
	FString BuildingName; // 0x0
	FVector Location; // 0x10
	bool isinbluezone; // 0x1c
};

struct FAnimNode_RefPose : FAnimNode_Base {
	ERefPoseType RefPoseType; // 0x10
};

struct FRedirector {
	FName OldName; // 0x0
	FName NewName; // 0x8
};

struct FItemEffectInfo {
	TMap<FName, FLinearColor> RootParticleColor; // 0x0
	TMap<FName, FLinearColor> StaticMeshColor; // 0x50
};

struct FPerkLevelUpWeight {
	int32_t LevelCount; // 0x0
	float Weight; // 0x4
	float Beginner_Weight; // 0x8
	TArray<float> Defeat_Weight; // 0x10
};

struct FExcelGradientFill {
	ExcelGradientFillType Type; // 0x0
	float Degree; // 0x4
	FMargin Distance; // 0x8
	TMap<float, FExcelColor> Stops; // 0x18
};

struct FPooledCameraShakes {
	TArray<UCameraShake*> PooledShakes; // 0x0
};

struct FSeasonQuestInfo {
	int32_t QuestIndex; // 0x0
	int32_t CurrentScore; // 0x4
	int32_t MaxScore; // 0x8
};

struct FPerPlatformFloat {
	float Default; // 0x0
};

struct FAnalysisClientOutGameTutorialPlayCompleteData {
	int32_t play_time; // 0x0
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

struct FExpressionOutput {
	FName OutputName; // 0x0
};

struct FDamageModifierByWeapon {
	EWeaponType WeaponType; // 0x0
	float Value; // 0x4
};

struct FMovementProperties {
	char bCanCrouch : 1; // 0x0
	char bCanJump : 1; // 0x0
	char bCanWalk : 1; // 0x0
	char bCanSwim : 1; // 0x0
	char bCanFly : 1; // 0x0
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

struct FRollbackNetStartupActorInfo {
	UObject* Archetype; // 0x8
	ULevel* Level; // 0x38
	TArray<UObject*> ObjReferences; // 0xa0
};

struct FSubstanceInstanceDesc {
	FString Name; // 0x0
	TArray<FSubstanceInputDesc> Inputs; // 0x10
};

struct FTrajectoryInitialConditions {
	FVector InitialVelocity; // 0x0
	FVector InitialWorldLocation; // 0xc
	FRotator InitialRotation; // 0x18
	float t0; // 0x24
	FVector v0direction; // 0x28
	float v0length; // 0x34
	float PenRestDeltaTime; // 0x38
	FVector PenRestLocation; // 0x3c
	float PenDeceleration; // 0x48
};

struct FDisplacementCasterSettings {
	FString MaterialChannel; // 0x0
	EOpacityChannelComponent OpacityChannelComponent; // 0x10
	EDitherType DitherType; // 0x14
	EFillMode FillMode; // 0x18
	FString OpacityChannel; // 0x20
	char UseMultisampling : 1; // 0x30
	float DistanceScaling; // 0x34
	EOutputImageFileFormat OutputImageFileFormat; // 0x38
	EOutputDDSCompressionType OutputDDSCompressionType; // 0x3c
	uint32_t Dilation; // 0x40
	char GenerateScalarDisplacement : 1; // 0x44
	EOutputPixelFormat OutputPixelFormat; // 0x48
	char GenerateTangentSpaceDisplacement : 1; // 0x4c
	int32_t NormalMapTexCoordLevel; // 0x50
};

struct FSM_SetMachineState : FAnimNode_Base {
	FPoseLink BasePose; // 0x10
	FName FSM; // 0x20
	FName ASM; // 0x28
	bool EveryFrame; // 0x30
};

struct FItemSearchLog {
	int32_t item_id; // 0x0
	FIntLocation Location; // 0x4
};

struct FConditionedWeaponInfo {
	TArray<FName> TargetItemIDs; // 0x0
	TArray<EWeaponType> WeaponTypes; // 0x10
};

struct FBravoHotelPartyInfo {
	FString PartyID; // 0x0
	int32_t LeaderIndex; // 0x10
	TArray<FBravoHotelPartyMemberInfo> Members; // 0x18
};

struct FCurveEdTab {
	FString TabName; // 0x0
	TArray<FCurveEdEntry> Curves; // 0x10
	float ViewStartInput; // 0x20
	float ViewEndInput; // 0x24
	float ViewStartOutput; // 0x28
	float ViewEndOutput; // 0x2c
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

struct FRequest_CheatCommand {
	FString Command; // 0x0
	FString Parameter; // 0x10
};

struct FPrecomputedLightInstanceData : FSceneComponentInstanceData {
	FTransform Transform; // 0xb0
	FGuid LightGuid; // 0xe0
	int32_t PreviewShadowMapChannel; // 0xf0
};

struct FClimbData {
	float TargetHeight; // 0x0
	float MaxDistance; // 0x4
	UAnimMontage* Montage; // 0x8
	UAnimMontage* OneHandMontage; // 0x10
	UAnimMontage* TwoHandMontage; // 0x18
	float FallingRate; // 0x20
	FVector DettachLaunch; // 0x24
	FVector CameraPosition; // 0x30
	FVector CameraSecondPosition; // 0x3c
	float CameraTime; // 0x48
	float CameraSecondTime; // 0x4c
	float CameraOutTime; // 0x50
	FVector StartPosition; // 0x54
	bool bWalkToStartPosition; // 0x60
	bool bSlide; // 0x61
	bool bUseHeightCurve; // 0x62
	FName CameraBone; // 0x64
	bool bHandToWeaponIK; // 0x6c
	float PlaySpeed; // 0x70
	FName OverrideKey; // 0x74
	UCurveVector* CurveFPP; // 0x80
	float CameraYawLimit_FPP; // 0x88
	float CameraPitchMax_FPP; // 0x8c
	float CameraPitchMin_FPP; // 0x90
	bool bFixCameraBaseLocation_FPP; // 0x94
};

struct FLandscapeSplineSegmentConnection {
	ULandscapeSplineControlPoint* ControlPoint; // 0x0
	float TangentLen; // 0x8
	FName SocketName; // 0xc
};

struct FResponse_CreateDefaultPC {
	uint32_t C; // 0x0
	FString E; // 0x8
	FResponse_CreateDefaultPC_Rec D; // 0x18
};

struct FCompletedCasting {
	int32_t BackpackSlotIndex; // 0x0
	int32_t ID; // 0x4
};

struct FSplineIKCachedBoneData {
	FBoneReference Bone; // 0x0
	int32_t RefSkeletonIndex; // 0x10
};

struct FLiveLinkTimeCode_Base_DEPRECATED {
	int32_t Seconds; // 0x0
	int32_t Frames; // 0x4
	FLiveLinkFrameRate FrameRate; // 0x8
};

struct FAnimNode_PoseByName : FAnimNode_PoseHandler {
	FName PoseName; // 0x78
	float PoseWeight; // 0x80
};

struct FCustomizableObjectExportOptions {
	bool bTextureCompression; // 0x0
	FString TargetPlatform; // 0x8
};

struct FAnimSetMeshLinkup {
	TArray<int32_t> BoneToTrackTable; // 0x0
};

struct FConstraintBaseParams {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float Restitution; // 0x8
	float ContactDistance; // 0xc
	char bSoftConstraint : 1; // 0x10
};

struct FRigTransformConstraint {
	EConstraintTransform TranformType; // 0x0
	FName ParentSpace; // 0x4
	float Weight; // 0xc
};

struct FExtraDebugInfo {
	UBravoHotelItemSpawnBoxComponent* ItemBox; // 0x0
	FName RandomSpawnKey; // 0x8
};

struct FAnalysisClientSupplyItemInfoData {
	FString slot1_item_id; // 0x0
	FString slot2_item_id; // 0x10
	FString slot3_item_id; // 0x20
	FString slot4_item_id; // 0x30
	FString slot5_item_id; // 0x40
};

struct FAnalysisClientGameBattleHitRateData {
	TArray<FAnalysisClientGameHitRateWeaponInfo> weapon_info; // 0x0
};

struct FQuestTaskCondition {
	TArray<FName> TargetItemIndex; // 0x0
	TArray<FName> EquipedItemIndex; // 0x10
	TArray<EWeaponType> WeaponType; // 0x20
	TArray<FName> BoneName; // 0x30
	TArray<FString> State; // 0x40
	TArray<FString> Action; // 0x50
	TArray<FString> ETC; // 0x60
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

struct FStreamingRenderAssetPrimitiveInfo {
	UStreamableRenderAsset* RenderAsset; // 0x0
	FBoxSphereBounds Bounds; // 0x8
	float TexelFactor; // 0x24
	uint32_t PackedRelativeBox; // 0x28
	char bAllowInvalidTexelFactorWhenUnregistered : 1; // 0x2c
};

struct FAkMidiNoteAftertouch : FAkMidiEventBase {
	char Note; // 0x2
	char Value; // 0x3
};

struct FNiagaraParameterScopeInfo {
	ENiagaraParameterScope Scope; // 0x0
	FString NamespaceString; // 0x8
};

struct FGroupRewardElement {
	int32_t ID; // 0x0
	int32_t MinCount; // 0x4
	int32_t MaxCount; // 0x8
	int32_t Rate; // 0xc
	int32_t DuplicateCount; // 0x10
};

struct FG2C_Notify_Emergency_Array {
	FString Language; // 0x0
	FString notify; // 0x10
};

struct FMovieSceneSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x0
	TArray<FMovieSceneNestedSequenceTransform> NestedTransforms; // 0x10
};

struct FAkPropertyToControl {
	FString ItemProperty; // 0x0
};

struct FInventoryItemInfo {
	FDataTableRowHandle Item; // 0x0
	int32_t Quantity; // 0x10
	int32_t Index; // 0x14
	UInventoryComponent* ContainedInventory; // 0x18
	AActor* Owner; // 0x20
	EInventoryItemState State; // 0x28
	float PickedTimeSeconds; // 0x2c
	float Durability; // 0x30
	float MaxDurability; // 0x34
	TArray<FName> AdditionalBuffs; // 0x38
	TArray<FName> ItemOptions; // 0x48
	EItemBindType ItemBindType; // 0x58
	int32_t BindedPlayerUniqueID; // 0x5c
	FName ItemWeaponID; // 0x60
	FString DivisionParent; // 0x68
	EPickupRoot PickupRoot; // 0x78
	FString ItemUID; // 0x80
	float ServerWorldTime; // 0x90
};

struct FOverlapResult {
	TWeakObjectPtr<AActor> Actor; // 0x0
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x8
	char bBlockingHit : 1; // 0x14
};

struct FDataEventClientGameBattle : FDataEventBase {
	UBravoHotelDamageType* DamageTypeClass; // 0x60
	AActor* AttackerActor; // 0x68
	APlayerState* AttackerPlayerState; // 0x70
	AActor* VictimActor; // 0x78
	APlayerState* VictimPlayerState; // 0x80
};

struct FCustomInput {
	FName InputName; // 0x0
	FExpressionInput Input; // 0x8
};

struct FRequest_AcceptFriend {
	FString user_id; // 0x0
};

struct FBoxSphereBounds {
	FVector Origin; // 0x0
	FVector BoxExtent; // 0xc
	float SphereRadius; // 0x18
};

struct FMatchEndSimpleResult {
	bool bAllDead; // 0x0
	ABravoHotelPlayerState* Killer; // 0x8
	bool IsWeaponKill; // 0x10
	FText WeaponName; // 0x18
	int32_t WeaponLevel; // 0x30
	int32_t WeaponRarity; // 0x34
	FDamageTypeTable DamageTypeRow; // 0x38
	bool bDeathByHeadshot; // 0xa0
	bool Replicate; // 0xa1
	FDiedDamagePlayerInfo DiedDamagePlayerInfo; // 0xa4
	TArray<FDiedDamageInfo> DamageInfos; // 0x100
};

struct FCameraPreviewInfo {
	APawn* PawnClass; // 0x0
	UAnimSequence* AnimSeq; // 0x8
	FVector Location; // 0x10
	FRotator Rotation; // 0x1c
	APawn* PawnInst; // 0x28
};

struct FConstraintOffset {
	FVector Translation; // 0x0
	FQuat Rotation; // 0x10
	FVector Scale; // 0x20
	FTransform Parent; // 0x30
};

struct FCustomizableObjectBoolParameterValue {
	FString ParameterName; // 0x0
	bool ParameterValue; // 0x10
	FString UID; // 0x18
};

struct FStatColorMapEntry {
	float In; // 0x0
	FColor Out; // 0x4
};

struct FEyeTrackerGazeData {
	FVector GazeOrigin; // 0x0
	FVector GazeDirection; // 0xc
	FVector FixationPoint; // 0x18
	float ConfidenceValue; // 0x24
};

struct FC2G_EnterLobby {
	FString Type; // 0x0
	FC2G_EnterLobby_Data Data; // 0x10
};

struct FSoundGroup {
	ESoundGroup SoundGroup; // 0x0
	FString DisplayName; // 0x8
	char bAlwaysDecompressOnLoad : 1; // 0x18
	float DecompressedDuration; // 0x1c
};

struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSegmentIdentifier SegmentID; // 0x8
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

struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneFloatChannel FadeCurve; // 0x20
	FLinearColor FadeColor; // 0xc0
	char bFadeAudio : 1; // 0xd0
};

struct FMaterialEffectInfo {
	float EffectTimer; // 0x0
	char EffectIndex; // 0x4
	TArray<UBHBMaterialEffectBase*> MaterialEffectBuffs; // 0x8
};

struct FMovieSceneTrackLabels {
	TArray<FString> Strings; // 0x0
};

struct FSolverIterations {
	int32_t SolverIterations; // 0x0
	int32_t JointIterations; // 0x4
	int32_t CollisionIterations; // 0x8
	int32_t SolverPushOutIterations; // 0xc
	int32_t JointPushOutIterations; // 0x10
	int32_t CollisionPushOutIterations; // 0x14
};

struct FDatasmithTessellationOptions {
	float ChordTolerance; // 0x0
	float MaxEdgeLength; // 0x4
	float NormalTolerance; // 0x8
	EDatasmithCADStitchingTechnique StitchingTechnique; // 0xc
};

struct FRepDamageBuffInfo {
	uint16_t ItemKey; // 0x0
	uint16_t BuffKey; // 0x2
	FName ItemIndex; // 0x4
	FName BuffIndex; // 0xc
};

struct FAnalysisDSConnectFailData {
	FString URL; // 0x0
	EDSConnectionType Type; // 0x10
	FString Error; // 0x18
	FString reason; // 0x28
	int32_t retry; // 0x38
	int32_t connecting_fail_time; // 0x3c
	FString Version; // 0x40
};

struct FProjectDirectoryPath {
	FDirectoryPath DirectoryPath; // 0x0
};

struct FClothVertBoneData {
	int32_t NumInfluences; // 0x0
	uint16_t BoneIndices[0xc]; // 0x4
	float BoneWeights[0xc]; // 0x1c
};

struct FPaperSpriteSocket {
	FTransform LocalTransform; // 0x0
	FName SocketName; // 0x30
};

struct FKBoxElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float X; // 0x48
	float Y; // 0x4c
	float Z; // 0x50
};

struct FConstraintDrive {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float MaxForce; // 0x8
	char bEnablePositionDrive : 1; // 0xc
	char bEnableVelocityDrive : 1; // 0xc
};

struct FAnimNode_PoseSnapshot : FAnimNode_Base {
	FName SnapshotName; // 0x10
	FPoseSnapshot Snapshot; // 0x18
	ESnapshotSourceMode Mode; // 0x50
};

struct FRequest_DS_MatchReward {
	FString map_name; // 0x0
	char game_mode; // 0x10
	char battle_mode; // 0x11
	FPlayerMatchReward match_reward; // 0x18
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

struct FSlateFontInfo {
	UObject* FontObject; // 0x0
	UObject* FontMaterial; // 0x8
	FFontOutlineSettings OutlineSettings; // 0x10
	FName TypefaceFontName; // 0x40
	int32_t Size; // 0x48
};

struct FAimConstraintDescription : FConstraintDescriptionEx {
	FAxis LookAt_Axis; // 0x10
	FAxis LookUp_Axis; // 0x20
	bool bUseLookUp; // 0x30
	FVector LookUpTarget; // 0x34
};

struct FExposureSettings {
	float FixedEV100; // 0x0
	bool bFixed; // 0x4
};

struct FFullyLoadedPackagesInfo {
	EFullyLoadPackageType FullyLoadType; // 0x0
	FString Tag; // 0x8
	TArray<FName> PackagesToLoad; // 0x18
	TArray<UObject*> LoadedObjects; // 0x28
};

struct FGroupReward : FTableRowBase {
	int32_t ID; // 0x8
	FText DisplayName; // 0x10
	int32_t DrawCount; // 0x28
	TArray<FGroupRewardElement> Rewards; // 0x30
};

struct FAnimationSharingScalability {
	FPerPlatformBool UseBlendTransitions; // 0x0
	FPerPlatformFloat BlendSignificanceValue; // 0x4
	FPerPlatformInt MaximumNumberConcurrentBlends; // 0x8
	FPerPlatformFloat TickSignificanceValue; // 0xc
};

struct FAnimNode_ModifyCurve : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
	TArray<float> CurveValues; // 0x20
	TArray<FName> CurveNames; // 0x30
	float ALPHA; // 0x50
	EModifyCurveApplyMode ApplyMode; // 0x54
};

struct FSourceEffectChainEntry {
	USoundEffectSourcePreset* Preset; // 0x0
	char bBypass : 1; // 0x8
};

struct FBuffEffectSetData : FTableRowBase {
	TMap<FName, UParticleSystem*> CharacterParticleStart; // 0x8
	TMap<FName, UParticleSystem*> CharacterParticleIng; // 0x58
	TMap<FName, UParticleSystem*> CharacterParticleEnd; // 0xa8
	TArray<TSoftObjectPtr<UAkAudioEvent>> Sound2DStart; // 0xf8
	TArray<TSoftObjectPtr<UAkAudioEvent>> Sound2DEnd; // 0x108
	TArray<TSoftObjectPtr<UAkAudioEvent>> Sound3DStart; // 0x118
	TArray<TSoftObjectPtr<UAkAudioEvent>> Sound3DEnd; // 0x128
	TArray<TSoftObjectPtr<UAkAudioEvent>> SoundFollowStart; // 0x138
	TArray<TSoftObjectPtr<UAkAudioEvent>> SoundFollowEnd; // 0x148
};

struct FCoh_LocalPlayerInfo {
	FString UID; // 0x0
	FString Name; // 0x10
};

struct FEditorImportWorkflowDefinition {
	FFilePath ImportFilePath; // 0x0
	TArray<FImportFactorySettingValues> FactorySettings; // 0x10
};

struct FInputAlphaBoolBlend {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
	EAlphaBlendOption BlendOption; // 0x8
	bool bInitialized; // 0x9
	UCurveFloat* CustomCurve; // 0x10
	FAlphaBlend AlphaBlend; // 0x18
};

struct FExposedValueHandler {
	FName BoundFunction; // 0x0
	TArray<FExposedValueCopyRecord> CopyRecords; // 0x8
	UFunction* Function; // 0x18
	TFieldPath<FStructProperty> ValueHandlerNodeProperty; // 0x20
};

struct FPerkLevelUpData : FTableRowBase {
	int32_t ID; // 0x8
	FText UltimateName; // 0x10
	FText UltimateDesc; // 0x28
	FText DisplayUltimateName; // 0x40
	FText DisplayUltimateDesc; // 0x58
	TSoftObjectPtr<UObject> UltimateImage; // 0x70
	TSoftObjectPtr<UObject> UltimateIcon; // 0x98
	TSoftObjectPtr<UAkAudioEvent> UltimateGainSound; // 0xc0
	FName UlimatePerkName; // 0xe8
	TArray<int32_t> UlimateLevels; // 0xf0
	FName UlimateNecessaryPerk; // 0x100
	TArray<FName> GetUltimateEffects; // 0x108
	TMap<int32_t, int32_t> AddLevelByKill; // 0x118
	TArray<FPerkLevelUpElement> PerkLevels; // 0x168
};

struct FBravoHotelPostProcessSettings : FTableRowBase {
	bool bEnable; // 0x8
	FPostProcessSettings PostProcessSettings; // 0x10
	float Priority; // 0x5d0
	UCurveFloat* BlendCurve; // 0x5d8
	bool bUseSkyLightSettings; // 0x5e0
	float SkyLightIntensity; // 0x5e4
	FColor SkyLightOcclusionTint; // 0x5e8
	UPostProcessComponent* PostProcess; // 0x5f0
	FTimeline BlendTimeline; // 0x5f8
	bool bIsReversing; // 0x690
};

struct FPreviewAssetAttachContainer {
	TArray<FPreviewAttachedObjectPair> AttachedObjects; // 0x0
};

struct FSKeyInput {
	FKey Input_3_484CF56342A117E3CBA042A394CBD033; // 0x0
	bool UseNegativeAxis_9_CA016842430D7150D94F0AABC0B31CAE; // 0x18
};

struct FMovieSceneLevelVisibilitySectionTemplate : FMovieSceneEvalTemplate {
	ELevelVisibility Visibility; // 0x20
	TArray<FName> LevelNames; // 0x28
};

struct FAIDataProviderFloatValue : FAIDataProviderTypedValue {
	float DefaultValue; // 0x30
};

struct FSentenceData : FTableRowBase {
	FText SpeakerName; // 0x8
	FText SentenceText; // 0x20
	int32_t FaceIndex; // 0x38
	bool bNeedInput; // 0x3c
	bool bHoldOnVoicePlay; // 0x3d
	float NextTime; // 0x40
	UAkAudioEvent* VoiceEvent; // 0x48
	TMap<FName, UAkAudioEvent*> ChannelVoiceEvent; // 0x50
	TArray<FName> AdditionalEvents; // 0xa0
};

struct FAnalysisClientOutGameDataHead {
	int32_t DateTime; // 0x0
	FString UserID; // 0x8
	FString NickName; // 0x18
	int32_t Level; // 0x28
	int32_t exp; // 0x2c
};

struct FFrameTime {
	FFrameNumber FrameNumber; // 0x0
	float SubFrame; // 0x4
};

struct FKawaiiPhysicsSettings {
	float Damping; // 0x0
	float WorldDampingLocation; // 0x4
	float WorldDampingRotation; // 0x8
	float Stiffness; // 0xc
	float Radius; // 0x10
	float LimitAngle; // 0x14
};

struct FBlendSample {
	UAnimSequence* Animation; // 0x0
	FVector SampleValue; // 0x8
	float RateScale; // 0x14
};

struct FCameraLensSettings {
	float MinFocalLength; // 0x0
	float MaxFocalLength; // 0x4
	float MinFStop; // 0x8
	float MaxFStop; // 0xc
	float MinimumFocusDistance; // 0x10
	int32_t DiaphragmBladeCount; // 0x14
};

struct FUserActivity {
	FString ActionName; // 0x0
};

struct FPaperSpriteAtlasSlot {
	TSoftObjectPtr<UPaperSprite> SpriteRef; // 0x0
	int32_t AtlasIndex; // 0x28
	int32_t X; // 0x2c
	int32_t Y; // 0x30
	int32_t Width; // 0x34
	int32_t Height; // 0x38
};

struct FExcelColor {
	ExcelColorType Type; // 0x0
	int32_t ColorIndex; // 0x4
	FLinearColor ColorValue; // 0x8
	float Tint; // 0x18
	bool IsAutoColor; // 0x1c
};

struct FAnalysisClientGameCharacterMiniData {
	bool bIsAI; // 0x0
	TArray<int32_t> skill_perk_id; // 0x8
	FAnalysisClientGameWeaponData current_weapon; // 0x18
	FString equip_helmet; // 0x60
	int32_t helmet_durability; // 0x70
	FString equip_armour; // 0x78
	int32_t armour_durability; // 0x88
	int32_t fire_type; // 0x8c
	int32_t zoom_type; // 0x90
};

struct FSynth2DSliderStyle : FSlateWidgetStyle {
	FSlateBrush NormalThumbImage; // 0x8
	FSlateBrush DisabledThumbImage; // 0x90
	FSlateBrush NormalBarImage; // 0x118
	FSlateBrush DisabledBarImage; // 0x1a0
	FSlateBrush BackgroundImage; // 0x228
	float BarThickness; // 0x2b0
};

struct FNodeHierarchyData {
	TArray<FNodeObject> Nodes; // 0x0
	TArray<FTransform> Transforms; // 0x10
	TMap<FName, int32_t> NodeNameToIndexMapping; // 0x20
};

struct FBannerData {
	int32_t dev2; // 0x0
	int32_t ceo3; // 0x4
	int32_t qa; // 0x8
	int32_t nx; // 0xc
	int32_t review; // 0x10
	int32_t cbt; // 0x14
};

struct FResponse_Google_AccessToken {
	FString access_token; // 0x0
	int32_t expires_in; // 0x10
	FString token_type; // 0x18
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

struct FPerSkeletonAnimationSharingSetup {
	UAnimationSharingStateProcessor* StateProcessorClass; // 0x0
	UAnimSharingTransitionInstance* BlendAnimBlueprint; // 0x8
	USkeletalMesh* SkeletalMesh; // 0x10
	USkeleton* Skeleton; // 0x18
	TArray<FAnimationStateEntry> AnimationStates; // 0x20
	UAnimSharingAdditiveInstance* AdditiveAnimBlueprint; // 0x30
};

struct FAnalysisDataBaseHead {
	int32_t DateTime; // 0x0
	FString match_id; // 0x8
	FString game_server_id; // 0x18
	FString MapName; // 0x28
	int32_t GameViewType; // 0x38
	int32_t GameMode; // 0x3c
	int32_t BattleMode; // 0x40
	FString cqr_type; // 0x48
	int32_t bluezone_id; // 0x58
	FString ip; // 0x60
	FString Training; // 0x70
	FString Clean; // 0x80
	int32_t ai_grade; // 0x90
	int32_t class_select_mode; // 0x94
};

struct FG2C_PartyWhoLeaved_Data {
	FString uidLeaved; // 0x0
	FString uidBoss; // 0x10
};

struct FMappingImageSettings {
	char GenerateMappingImage : 1; // 0x0
	char GenerateTexCoords : 1; // 0x0
	char GenerateTangents : 1; // 0x0
	uint32_t InputMaterialCount; // 0x4
	char UseFullRetexturing : 1; // 0x8
	char ApplyNewMaterialIds : 1; // 0x8
	uint32_t OutputMaterialCount; // 0xc
	char ReplaceMappingImages : 1; // 0x10
	uint32_t MaximumLayers; // 0x14
	char AllowTransparencyMapping : 1; // 0x18
	char UseAutomaticTextureSize : 1; // 0x18
	float AutomaticTextureSizeMultiplier; // 0x1c
	char ForcePower2Texture : 1; // 0x20
	char OnlyParameterizeInvalidUVs : 1; // 0x20
	int32_t TexCoordLevel; // 0x24
	FString TexCoordName; // 0x28
	ETexCoordGeneratorType TexCoordGeneratorType; // 0x38
	TArray<FInputMaterialSettings> InputMaterialSettings; // 0x40
	TArray<FOutputMaterialSettings> OutputMaterialSettings; // 0x50
	FChartAggregatorSettings ChartAggregatorSettings; // 0x60
	FParameterizerSettings ParameterizerSettings; // 0xa0
};

struct FItemSpawnRate {
	FString ItemName; // 0x0
	float SpawnRate; // 0x10
};

struct FBravoHotelMapTableRow : FTableRowBase {
	int32_t ID; // 0x8
	FString DisplayName; // 0x10
	FString Mode; // 0x20
	int32_t BattleRoyaleWaitingTime; // 0x30
	int32_t BattleRoyaleReadyTime; // 0x34
	float ParachuteAvailableDistance; // 0x38
	float ForcingParachuteDistance; // 0x3c
	TSoftObjectPtr<UDataTable> PlayZoneDataTable; // 0x40
	TArray<TSoftObjectPtr<UObject>> DefaultPlayZoneImageList; // 0x68
	TSoftObjectPtr<UTexture2D> UIResource; // 0x78
	TSoftObjectPtr<UTexture2D> WeightMapResource; // 0xa0
	TSoftObjectPtr<UBravoHotelWeightMapData> WeightmapData; // 0xc8
	TSoftObjectPtr<UBravoHotelAudioAmbientMapData> AudioAmbientMap; // 0xf0
	int32_t WeightMapRadiusCheckCount; // 0x118
	FVector2D CenterPosOfWorld; // 0x11c
	FVector2D SizeOfWorld; // 0x124
	float DisableDescentDistance; // 0x12c
	FVector2D WorldCenterForAircraft; // 0x130
	FVector2D WorldSizeForAircraft; // 0x138
	int32_t MiniMapZoomLevel; // 0x140
	float TimeBeforeLoading; // 0x144
	int32_t Map_Mode_Reward_Solo; // 0x148
	int32_t Map_Mode_Reward_Duo; // 0x14c
	int32_t Map_Mode_Reward_Squad; // 0x150
	FString PackageName; // 0x158
	bool IgnoreArea_MakeAirCraftLine; // 0x168
	FVector AreaLocation; // 0x16c
	float AreaRadius; // 0x178
	ELoadingScreenType LoadingScreenType; // 0x17c
	bool bUsingMinDistanceMakeAirCraftLine; // 0x17d
	float MinDistanceRate; // 0x180
	int32_t TryCountMinDistanceMakeAirCraftLine; // 0x184
};

struct FNiagaraScriptVariableBinding {
	FName Name; // 0x0
};

struct FPrimaryAssetType {
	FName Name; // 0x0
};

struct FBravoHotelDamageEvent_Radial : FRadialDamageEvent {
	AController* AttackerPC; // 0x48
	AActor* AttackerActor; // 0x50
	TMap<uint16_t, float> AdditionalBuffIndexes; // 0x58
	FVector FireLocation; // 0xa8
	FDataEventDamageBuffInfo AttackerBuffInfo; // 0xb8
};

struct FNuclearInfo {
	float TargetingRadius; // 0x0
	float AreaRadius; // 0x4
	float AnnounceRadius; // 0x8
};

struct FPlayerReservation {
	FUniqueNetIdRepl UniqueID; // 0x0
	FString ValidationStr; // 0x28
	FString Platform; // 0x38
	bool bAllowCrossplay; // 0x48
	float ElapsedTime; // 0x4c
};

struct FEngineServiceAuthGrant {
	FString UserName; // 0x0
	FString UserToGrant; // 0x10
};

struct FReferenceBoneFrame {
	FBoneReference Bone; // 0x0
	FAxis Axis; // 0x10
};

struct FBattelRoyalInfo {
	int32_t live_time; // 0x0
	int32_t total_move_distance; // 0x4
	int32_t open_invisible_drop_box_count; // 0x8
	int32_t open_air_drop_box_count; // 0xc
	int32_t destory_supply_helicopter_count; // 0x10
	float heal_amount; // 0x14
	int32_t boost_amount; // 0x18
	int32_t air_walk_distance; // 0x1c
	int32_t max_air_walk_distance; // 0x20
};

struct FG2C_MatchSuccess {
	FString Type; // 0x0
	FG2C_MatchSuccess_Data Data; // 0x10
};

struct FUserWidgetInfoForReplay {
	FString KeyName; // 0x0
	FString FilePath; // 0x10
};

struct FBodyInstance {
	ECollisionChannel ObjectType; // 0x6
	ECollisionEnabled CollisionEnabled; // 0x8
	ESleepFamily SleepFamily; // 0xa
	EDOFMode DOFMode; // 0xb
	char bUseCCD : 1; // 0xd
	char bIgnoreAnalyticCollisions : 1; // 0xd
	char bNotifyRigidBodyCollision : 1; // 0xd
	char bIgnoreCollisionsWithoutImpulse : 1; // 0xd
	char bContactModification : 1; // 0xd
	char bSimulatePhysics : 1; // 0xd
	char bOverrideMass : 1; // 0xd
	char bEnableGravity : 1; // 0xd
	char bAutoWeld : 1; // 0xe
	char bStartAwake : 1; // 0xe
	char bGenerateWakeEvents : 1; // 0xe
	char bUpdateMassWhenScaleChanges : 1; // 0xe
	char bLockTranslation : 1; // 0xe
	char bLockRotation : 1; // 0xe
	char bLockXTranslation : 1; // 0xe
	char bLockYTranslation : 1; // 0xe
	char bLockZTranslation : 1; // 0xf
	char bLockXRotation : 1; // 0xf
	char bLockYRotation : 1; // 0xf
	char bLockZRotation : 1; // 0xf
	char bOverrideMaxAngularVelocity : 1; // 0xf
	char bOverrideMaxDepenetrationVelocity : 1; // 0xf
	char bOverrideWalkableSlopeOnInstance : 1; // 0x10
	char bInterpolateWhenSubStepping : 1; // 0x10
	FName CollisionProfileName; // 0x20
	char PositionSolverIterationCount; // 0x28
	char VelocitySolverIterationCount; // 0x29
	FCollisionResponse CollisionResponses; // 0x30
	float MaxDepenetrationVelocity; // 0x60
	float MassInKgOverride; // 0x64
	float LinearDamping; // 0x70
	float AngularDamping; // 0x74
	FVector CustomDOFPlaneNormal; // 0x78
	FVector COMNudge; // 0x84
	float MassScale; // 0x90
	FVector InertiaTensorScale; // 0x94
	FWalkableSlopeOverride WalkableSlopeOverride; // 0xb0
	UPhysicalMaterial* PhysMaterialOverride; // 0xc0
	float MaxAngularVelocity; // 0xc8
	float CustomSleepThresholdMultiplier; // 0xcc
	float StabilizationThresholdMultiplier; // 0xd0
	float PhysicsBlendWeight; // 0xd4
};

struct FSlotEvaluationPose {
	EAdditiveAnimationType AdditiveType; // 0x0
	float Weight; // 0x4
};

struct FSeasonTierUpElement {
	int32_t TierID; // 0x0
	int32_t NextTierID; // 0x4
	FText DisplayName; // 0x8
	TSoftObjectPtr<UObject> UMGIcon; // 0x20
	TSoftObjectPtr<UObject> CohIcon; // 0x48
	int32_t Point; // 0x70
	int32_t Rank; // 0x74
	int32_t PromotePoint; // 0x78
	EPromotionCondition PromoteCondition; // 0x7c
	float TargetValueToPromote; // 0x80
	int32_t PromoteRewardRP; // 0x84
	int32_t PromotePenaltyRP; // 0x88
	int32_t DemotePoint; // 0x8c
	EPromotionCondition DemoteCondition; // 0x90
	float TargetValueToDemote; // 0x94
	int32_t DemoteRewardRP; // 0x98
	int32_t DemotePenaltyRP; // 0x9c
	int32_t NextSeasonStartPoint; // 0xa0
	float FirstKillRP; // 0xa4
	float KillRP; // 0xa8
	float AIKillRP; // 0xac
	float FirstResurrectionRP; // 0xb0
	float ResurrectionRP; // 0xb4
	float AssistRP; // 0xb8
	float SaveRP; // 0xbc
	float MatchRankMinRP; // 0xc0
	float MatchRankMaxRP; // 0xc4
	float MatchRankRPZeroRate; // 0xc8
	float TotalMaxRP; // 0xcc
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

struct FRequest_LoginSteam {
	FString Client_version; // 0x0
	int32_t os; // 0x10
	FString session_ticket; // 0x18
	FString entry_code; // 0x28
	FString hardware_info; // 0x38
};

struct FMovieSceneEvaluationTrackSegments {
	TArray<int32_t> SegmentIdentifierToIndex; // 0x0
	TArray<FMovieSceneSegment> SortedSegments; // 0x10
};

struct FBravoHotelPlayZoneData {
	int32_t ID; // 0x0
	FName MapKey; // 0x4
	FString DisplayName; // 0x10
	FString AdditionalOption; // 0x20
	bool bCustomSetting; // 0x30
	bool bDev; // 0x31
	FString CQRKey; // 0x38
	int32_t MaxPlayerCount; // 0x48
	int32_t AutoStartPlayerCount; // 0x4c
	FVector2D CircleCenterPos; // 0x50
	float CircleRadius; // 0x58
	float DamagePerSecondOutOfCircle; // 0x5c
	bool UsingInitialRandomCircle; // 0x60
	float InitialRandomCircleRadius; // 0x64
	float InitialRandomCircleDeviation; // 0x68
	float InitialRandomCircleMinAngle; // 0x6c
	float InitialRandomCircleMaxAngle; // 0x70
	bool bShowFirstTarget; // 0x74
	bool UsingWidgetMapDataForAircraft; // 0x75
	bool ShowMessage; // 0x76
	TArray<TSoftObjectPtr<UObject>> PlayZoneImageList; // 0x78
	FText BlueZoneTitle; // 0x88
	FText BlueZoneDesc; // 0xa0
	TArray<FPlayZoneInfo> PlayZoneInfos; // 0xb8
	int32_t SelectedPlayZoneInfoIndex; // 0xc8
	FName RedZoneTableID; // 0xcc
	FName ExpertWeaponTableID; // 0xd4
	float AircraftAltitude; // 0xdc
	float AircrafSpeed; // 0xe0
	int32_t OverrideUltimateLevel; // 0xe4
	FName PerkClassRuleKey; // 0xe8
	FName ResuscitationTypeKey; // 0xf0
	FName AIItemSettingType; // 0xf8
	bool LastPhaseBlueZonePositionIsCenter; // 0x100
	TArray<FName> ItemWorldSpawnDataTableList; // 0x108
	bool UsingOuterCircle; // 0x118
	FVector2D OuterCircleCenterPos; // 0x11c
	float OuterCircleRadius; // 0x124
	float OuterCircleDamageDelay; // 0x128
	float OuterCircleDamagePerSecond; // 0x12c
	FAreaItemSpawnDataList AreaItemSpawnList; // 0x130
	FAreaOverrideStandardGroupDataList AreaOverrideStandardGroupDataList; // 0x140
	TArray<FName> AreaSpawnRateKeyList; // 0x150
	FName BlueZoneSpawnRateKey; // 0x160
	TArray<FName> VehicleAreaSpawnRateKeyList; // 0x168
	FName VehicleBlueZoneSpawnRateKey; // 0x178
	bool bNotUseForceParachuteSeaLevelZ; // 0x180
};

struct FAkCommonInitializationSettingsWithSampleRate : FAkCommonInitializationSettings {
	uint32_t SampleRate; // 0x60
};

struct FPaperTileSetTerrain {
	FString TerrainName; // 0x0
	int32_t CenterTileIndex; // 0x10
};

struct FResuscitationAnimSet {
	UAnimSequence* ToCriticalTime; // 0x0
	UAnimSequence* CriticalTimeIdle; // 0x8
	UAnimSequence* Resuscitated; // 0x10
	FAnimSlot Resuscitation; // 0x18
};

struct FSubmixEffectDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	float DelayLength; // 0x8
};

struct FSlateBrush {
	FVector2D ImageSize; // 0x8
	FMargin Margin; // 0x10
	FSlateColor TintColor; // 0x20
	UObject* ResourceObject; // 0x48
	FName ResourceName; // 0x50
	FBox2D UVRegion; // 0x58
	ESlateBrushDrawType DrawAs; // 0x6c
	ESlateBrushTileType tiling; // 0x6d
	ESlateBrushMirrorType Mirroring; // 0x6e
	ESlateBrushImageType ImageType; // 0x6f
	char bIsDynamicallyLoaded : 1; // 0x80
	char bHasUObject : 1; // 0x80
};

struct FBravoHotelPingInfo {
	bool HasMarker; // 0x0
	AActor* TargetActor; // 0x8
	AActor* OwnerActor; // 0x10
	FVector WorldLocation; // 0x18
	int32_t IconTableID; // 0x24
	bool IsDirectPing; // 0x28
	EPingType PingType; // 0x29
	int32_t TargetTableIndex; // 0x2c
	EItemPingIconType ItemPingType; // 0x30
};

struct FItemDebugDetailInfo {
	FString ItemName; // 0x0
	int32_t Count; // 0x10
};

struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase {
	float ReachPrecision; // 0xc8
	int32_t MaxIterations; // 0xcc
	TArray<FAnimLegIKDefinition> LegsDefinition; // 0xd0
};

struct FWidgetAnimationBinding {
	FName WidgetName; // 0x0
	FName SlotWidgetName; // 0x8
	FGuid AnimationGuid; // 0x10
	bool bIsRootWidget; // 0x20
};

struct FSupplyBoxAssignmentInfo {
	uint32_t Guid; // 0x0
	FVector Location; // 0x4
	float AssignmentTime; // 0x10
	float AssignmentDelayTime; // 0x14
	ABHPersonalSupplyBox* AssignSupplyBox; // 0x18
	AActor* Spawner; // 0x20
	bool IsTest; // 0x28
};

struct FMovieScene2DTransformSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel Translation[0x2]; // 0x48
	FMovieSceneFloatChannel Rotation; // 0x188
	FMovieSceneFloatChannel Scale[0x2]; // 0x228
	FMovieSceneFloatChannel Shear[0x2]; // 0x368
	EMovieSceneBlendType BlendType; // 0x4a8
	FMovieScene2DTransformMask Mask; // 0x4ac
};

struct FEditorMapPerformanceTestDefinition {
	FSoftObjectPath PerformanceTestmap; // 0x0
	int32_t TestTimer; // 0x18
};

struct FAnalysisDataGameInfo {
	int32_t flight_start_loc_x; // 0x0
	int32_t flight_start_loc_y; // 0x4
	int32_t flight_start_loc_z; // 0x8
	int32_t flight_end_loc_x; // 0xc
	int32_t flight_end_loc_y; // 0x10
	int32_t flight_end_loc_z; // 0x14
	int32_t bluezone_circle_x; // 0x18
	int32_t bluezone_circle_y; // 0x1c
	int32_t bluezone_radius; // 0x20
	int32_t matching_player; // 0x24
	int32_t matching_ai_player; // 0x28
	int32_t escape_player; // 0x2c
	FString start_game_time; // 0x30
	FString end_game_time; // 0x40
};

struct FAppleImageUtilsImageConversionResult {
	FString Error; // 0x0
	TArray<char> ImageData; // 0x10
};

struct FG2C_PartyWhoPing_Data {
	FString UID; // 0x0
	uint32_t Ping; // 0x10
};

struct FBoolTrackKey {
	float Time; // 0x0
	char Value : 1; // 0x4
};

struct FMovieSceneTrackDisplayOptions {
	char bShowVerticalFrames : 1; // 0x0
};

struct FSpawnPerkColorRate {
	float RedBookRate; // 0x0
	float GreenBookRate; // 0x4
	float BlueBookRate; // 0x8
	float WhiteBookRate; // 0xc
	float BlackBookRate; // 0x10
};

struct FCustomizableObjectFloatParameterValue {
	FString ParameterName; // 0x0
	float ParameterValue; // 0x10
	FString UID; // 0x18
	TArray<float> ParameterRangeValues; // 0x28
};

struct FG2C_PartyLeave_Data {
	uint32_t C; // 0x0
	FString E; // 0x8
};

struct FSpawnedItemInfo {
	FVector Loc; // 0x0
	FRotator Rot; // 0xc
	FVector ForwardVector; // 0x18
};

struct FBoneMirrorInfo {
	int32_t SourceIndex; // 0x0
	EAxis BoneFlipAxis; // 0x4
};

struct FMutableModelParameterValue {
	FString Name; // 0x0
	int32_t Value; // 0x10
};

struct FBravoHotelItemPresetForBlackMarket {
	FName PresetName; // 0x0
	TArray<FString> ItemList; // 0x8
};

struct FAbnormalDamageData {
	float event_time; // 0x0
	FString case_string; // 0x8
	FString damage_type; // 0x18
	int32_t damage_type_index; // 0x28
	int32_t damage_weapon_id; // 0x2c
	FString damage_weapon_name; // 0x30
	FString hit_bone; // 0x40
	int32_t Damage; // 0x50
	int32_t Distance; // 0x54
	FAnalysisClientGameCharacterMiniData attacker_info; // 0x58
	FAnalysisClientGameCharacterData victim_info; // 0xf0
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

struct FPhysicsConstraintProfileHandle {
	FConstraintProfileProperties ProfileProperties; // 0x0
	FName ProfileName; // 0x104
};

struct FAnimNode_Inertialization : FAnimNode_Base {
	FPoseLink Source; // 0x10
};

struct FLevelSequenceBindingReference {
	FString PackageName; // 0x0
	FSoftObjectPath ExternalObjectPath; // 0x10
	FString ObjectPath; // 0x28
};

struct FComponentKey {
	UObject* OwnerClass; // 0x0
	FName SCSVariableName; // 0x8
	FGuid AssociatedGuid; // 0x10
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

struct FAIPhaseItemSettingInfo {
	int32_t Phase; // 0x0
	TArray<FName> EquipItems; // 0x8
	TArray<FName> DropItems; // 0x18
};

struct FNiagaraParameterStore {
	UObject* Owner; // 0x8
	TArray<FNiagaraVariableWithOffset> SortedParameterOffsets; // 0x10
	TArray<char> ParameterData; // 0x20
	TArray<UNiagaraDataInterface*> DataInterfaces; // 0x30
	TArray<UObject*> UObjects; // 0x40
};

struct FNamedNetDriver {
	UNetDriver* NetDriver; // 0x0
};

struct FRootMotionSource_MoveToForce : FRootMotionSource {
	FVector StartLocation; // 0x98
	FVector TargetLocation; // 0xa4
	bool bRestrictSpeedToExpected; // 0xb0
	UCurveVector* PathOffsetCurve; // 0xb8
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

struct FAreaSkillInfo {
	float Radius; // 0x0
	float RemainTime; // 0x4
	FString Param01; // 0x8
	FString Param02; // 0x18
};

struct FEditorElement {
	int32_t Indices[0x3]; // 0x0
	float Weights[0x3]; // 0xc
};

struct FStaticParameterBase {
	FMaterialParameterInfo ParameterInfo; // 0x0
	bool bOverride; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FG2C_MatchFail {
	FString Type; // 0x0
	FG2C_MatchFail_Data Data; // 0x10
};

struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams {
	FFrameNumber SectionStartTime; // 0xd8
	FFrameNumber SectionEndTime; // 0xdc
};

struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase {
	FBoneReference SourceBone; // 0xc8
	FBoneReference TargetBone; // 0xd8
	bool bCopyTranslation; // 0xe8
	bool bCopyRotation; // 0xe9
	bool bCopyScale; // 0xea
	EBoneControlSpace ControlSpace; // 0xeb
};

struct FNCPoolElement {
	UNiagaraComponent* Component; // 0x0
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

struct FMyInfo {
	int32_t CurrentAmmo; // 0x0
	int32_t CapacityAmmo; // 0x4
	int32_t TotalAmmo; // 0x8
	EWeaponFireMode Mode; // 0xc
	int32_t CurrentEnergy; // 0x10
	int32_t MaxEnergy; // 0x14
	int32_t CurrentHealth; // 0x18
	int32_t MaxHealth; // 0x1c
	int32_t ShortTimeHealth; // 0x20
	int32_t TargetHealth; // 0x24
	float BackpackPercent; // 0x28
	bool bIsFirstPerson; // 0x2c
	int32_t Stance; // 0x30
	bool bIsHeadbanging; // 0x34
};

struct FVirtualBone {
	FName TargetBoneName; // 0x4
	FName VirtualBoneName; // 0x10
	FName SourceBoneName; // 0x1c
};

struct FBravoHotelThrowingWeaponItemInfo {
	FInventoryItemInfo ItemInfo; // 0x0
	FInventoryItemDetailInfo ItemDetailInfo; // 0x98
	bool PrevItem; // 0x528
};

struct FFlyingInfo {
	int32_t diving_time; // 0x0
	int32_t diving_location_loc_x; // 0x4
	int32_t diving_location_loc_y; // 0x8
	int32_t diving_location_loc_z; // 0xc
	int32_t parachute_time; // 0x10
	int32_t parachute_loc_x; // 0x14
	int32_t parachute_loc_y; // 0x18
	int32_t parachute_loc_z; // 0x1c
	int32_t landing_time; // 0x20
	int32_t landing_loc_x; // 0x24
	int32_t landing_loc_y; // 0x28
	int32_t landing_loc_z; // 0x2c
	int32_t flying_distance; // 0x30
};

struct FLogItemInfo {
	int32_t Index; // 0x0
	bool DataSet; // 0x4
	bool RunAsyncLoad; // 0x5
	bool CompleteAsyncLoad; // 0x6
	bool RunTask; // 0x7
	bool CompleteTask; // 0x8
	FName ItemName; // 0xc
	float Distance; // 0x14
};

struct FAnalysisClientOutGameData {
	EClientOutGameContentsType contentType; // 0x0
	FString Base; // 0x8
	FString Msg; // 0x18
	FString nowDate; // 0x28
	FString ApiPhase; // 0x38
};

struct FNiagaraVMExecutableData {
	TArray<char> ByteCode; // 0x0
	TArray<char> OptimizedByteCode; // 0x10
	int32_t NumTempRegisters; // 0x20
	int32_t NumUserPtrs; // 0x24
	FNiagaraParameters Parameters; // 0x28
	FNiagaraParameters InternalParameters; // 0x38
	TMap<FName, FNiagaraParameters> DataSetToParameters; // 0x48
	TArray<FNiagaraVariable> Attributes; // 0x98
	FNiagaraScriptDataUsageInfo DataUsage; // 0xa8
	TArray<FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo; // 0xb0
	TArray<FVMExternalFunctionBindingInfo> CalledVMExternalFunctions; // 0xc0
	TArray<FNiagaraDataSetID> ReadDataSets; // 0xd0
	TArray<FNiagaraDataSetProperties> WriteDataSets; // 0xe0
	TArray<FNiagaraStatScope> StatScopes; // 0xf0
	TArray<FNiagaraDataInterfaceGPUParamInfo> DIParamInfo; // 0x100
	ENiagaraScriptCompileStatus LastCompileStatus; // 0x110
	TArray<FSimulationStageMetaData> SimulationStageMetaData; // 0x118
};

struct FAnimNode_LinkedAnimLayer : FAnimNode_LinkedAnimGraph {
	UAnimLayerInterface* Interface; // 0xa0
	FName Layer; // 0xa8
};

struct FNameCurve : FIndexedCurve {
	TArray<FNameCurveKey> Keys; // 0x68
};

struct FBravoHotelTimeOfDaySimulateInformation {
	ETimeOfDayType TOD_Begin; // 0x0
	ETimeOfDayType TOD_End; // 0x1
	float DL_Rotation_TransitionTime; // 0x4
	float PostTransitionDelayTime; // 0x8
	float PostTransitionTime; // 0xc
};

struct FResponse_CraftWeapon_Weapon {
	int32_t table_index; // 0x0
	int32_t table_base_index; // 0x4
	int32_t Durability; // 0x8
	TMap<FString, int32_t> options; // 0x10
	FString item_id; // 0x60
	FString created; // 0x70
};

struct FNiagaraFloat {
	float Value; // 0x0
};

struct FMovieSceneSequenceReplProperties {
	FFrameTime LastKnownPosition; // 0x0
	EMovieScenePlayerStatus LastKnownStatus; // 0x8
	int32_t LastKnownNumLoops; // 0xc
};

struct FVertexInstanceToCreate {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
	FVertexInstanceID OriginalVertexInstanceID; // 0x18
};

struct FHitInfo {
	AActor* HitActor; // 0x20
};

struct FGameModeName {
	FString Name; // 0x0
	FSoftClassPath GameMode; // 0x10
};

struct FMeshSectionInfo {
	int32_t MaterialIndex; // 0x0
	bool bEnableCollision; // 0x4
	bool bCastShadow; // 0x5
	bool bForceOpaque; // 0x6
	bool bHidden; // 0x7
};

struct FCarScanUIInfo {
	TArray<FVector> VehicleLocations; // 0x0
	FVector TryLocation; // 0x10
	float ScanTime; // 0x1c
};

struct FAnalysisDediItemSpawnData {
	int32_t total_box_count; // 0x0
	int32_t spawn_box_count; // 0x4
	TArray<FAnalysisDediItemData> item_spawn_info; // 0x8
};

struct FResponse_FriendPendingListArray {
	TArray<FResponse_FriendInfo_Rec> pendingInviteInfoList; // 0x0
};

struct FKSphereElem : FKShapeElem {
	FVector Center; // 0x30
	float Radius; // 0x3c
};

struct FCQRInfo : FTableRowBase {
	FText PlayerCountText; // 0x8
};

struct FEnvQueryResult {
	UEnvQueryItemType* ItemType; // 0x10
	int32_t OptionIndex; // 0x2c
	int32_t QueryID; // 0x30
};

struct FItemDivisionDebug {
	FName ItemName; // 0x0
	int32_t DivisionCnt; // 0x8
	int32_t SpawnCnt; // 0xc
	bool CompleteDivision; // 0x10
	bool CompleteSpawed; // 0x11
};

struct FLocationServicesData {
	float Timestamp; // 0x0
	float Longitude; // 0x4
	float Latitude; // 0x8
	float HorizontalAccuracy; // 0xc
	float VerticalAccuracy; // 0x10
	float Altitude; // 0x14
};

struct FRewardItemInfo {
	int32_t table_index; // 0x0
	int32_t Count; // 0x4
};

struct FMapPlayerInfo {
	ABravoHotelPlayerState* PlayerState; // 0x0
	FVector2D Position; // 0x8
	float Angle; // 0x10
	UBravoHotelPlayerIconWidget* PlayerIconWidget; // 0x18
	bool HasMarker; // 0x20
	FVector2D MarkerPosition; // 0x24
	UBravoHotelPlayerMarkerWidget* PlayerMarkerWidget; // 0x30
	bool HasRoutePing; // 0x38
	TArray<FVector2D> RoutePositions; // 0x40
	UBravoHotelRoutePingWidget* RoutePingWidget; // 0x50
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

struct FVehicleInfo {
	int32_t explosion_count; // 0x0
	int32_t destroy_tire_count; // 0x4
	int32_t total_damage; // 0x8
	int32_t road_kill_count; // 0xc
};

struct FVoiceTalkState {
	FString UserName; // 0x0
	int32_t Volume; // 0x10
	bool bIsMute; // 0x14
	int32_t TeamPlayerIndex; // 0x18
	int32_t Ping; // 0x1c
};

struct FG2C_FriendWhoInvite {
	FString Type; // 0x0
	FG2C_FriendWhoInvite_Data Data; // 0x10
};

struct FMovieSceneCameraAnimSectionData {
	UCameraAnim* CameraAnim; // 0x0
	float PlayRate; // 0x8
	float PlayScale; // 0xc
	float BlendInTime; // 0x10
	float BlendOutTime; // 0x14
	bool bLooping; // 0x18
};

struct FUVMapSettings {
	FVector Size; // 0x0
	FVector2D UVTile; // 0xc
	FVector Position; // 0x14
	FRotator Rotation; // 0x20
	FVector Scale; // 0x2c
};

struct FOpacityCasterSettings {
	FString MaterialChannel; // 0x0
	EOpacityChannelComponent OpacityChannelComponent; // 0x10
	EDitherType DitherType; // 0x14
	EFillMode FillMode; // 0x18
	FString OpacityChannel; // 0x20
	char UseMultisampling : 1; // 0x30
	char OutputSRGB : 1; // 0x30
	EOutputImageFileFormat OutputImageFileFormat; // 0x34
	EOutputDDSCompressionType OutputDDSCompressionType; // 0x38
	uint32_t Dilation; // 0x3c
	EOutputOpacityType OutputOpacityType; // 0x40
	EOutputPixelFormat OutputPixelFormat; // 0x44
};

struct FSAudioUpdateStruct {
	UAudioComponent* AudioEmittor_5_EC37367D413769EBC8347085400A4A09; // 0x0
	EAudioType AudioType_4_3CDAA07D4BB9A7FC4028B7A4994A497E; // 0x8
	float OriginalVolumeMultiplier_11_352BE51B46F8B38B523630B64B21A772; // 0xc
};

struct FItemSlotInfo {
	TArray<FStandardGroupItemInfo> StandardGroupItemInfos; // 0x0
	TMap<FString, FBoxItemInfo> BoxList; // 0x10
	int32_t TotalDivisionCount; // 0x60
};

struct FItemCrafting : FTableRowBase {
	FName ID; // 0x8
	FText CategoryName; // 0x10
	FText DisplayName; // 0x28
	FText Description; // 0x40
	int32_t BaseItemID; // 0x58
	int32_t MaterialGroupItemID; // 0x5c
	int32_t GoldCost; // 0x60
	int32_t ResultItemID; // 0x64
	int32_t ItemId; // 0x68
	FText RandomOptionDesc; // 0x70
	TArray<int32_t> ResultOptionIDList; // 0x88
	TSoftObjectPtr<UPaperSprite> SlotIconTexture_PaperSprite; // 0x98
	TSoftObjectPtr<UPaperSprite> DragIconTexture_PaperSprite; // 0xc0
	TSoftObjectPtr<UPaperSprite> CategoryIconTexture_PaperSprite; // 0xe8
	FText DisplayWeaponType; // 0x110
};

struct FRewardPoint {
	int32_t RankPoint; // 0x0
	int32_t KillPoint; // 0x4
	int32_t HitPoint; // 0x8
	int32_t SurvivalPoint; // 0xc
};

struct FPerkVechicleInfo {
	bool NeedUpdate; // 0x0
	TArray<APawn*> VehicleList; // 0x8
	TArray<FVector> VehicleLocationList; // 0x18
};

struct FVehicleStandardGroup : FTableRowBase {
	TArray<FVehicleSpawnInfo> VehicleStandardGroupInfos; // 0x8
};

struct FG2C_PartyWhoUpdatedPCInfo_Data {
	FString UID; // 0x0
	FPartyPCInfo pc_info; // 0x10
};

struct FCoh_PartyInfo {
	FString PartyID; // 0x0
	FString LeaderUID; // 0x10
	bool IsInvite; // 0x20
	TArray<FCoh_PartyMemberInfo> Members; // 0x28
};

struct FRedisPubSub_StartPlay : FRedisPubSub_Header {
	FString Mode; // 0x10
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
	int32_t HierarchicalBias; // 0x94
	FMovieSceneSequenceInstanceDataPtr InstanceData; // 0x98
	FGuid SubSectionSignature; // 0xb8
	FMovieSceneSequenceTransform OuterToInnerTransform; // 0xc8
};

struct FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneMediaSectionParams Params; // 0x20
};

struct FMovieSceneFloatChannelSerializationHelper {
	ERichCurveExtrapolation PreInfinityExtrap; // 0x0
	ERichCurveExtrapolation PostInfinityExtrap; // 0x1
	TArray<int32_t> Times; // 0x8
	TArray<FMovieSceneFloatValueSerializationHelper> Values; // 0x18
	float DefaultValue; // 0x28
	bool bHasDefaultValue; // 0x2c
};

struct FExcelBorderSide {
	FExcelColor Color; // 0x0
	ExcelBorderStyle Style; // 0x20
};

struct FMaterialParameterCollectionInfo {
	FGuid StateID; // 0x0
	UMaterialParameterCollection* ParameterCollection; // 0x10
};

struct FKShapeElem {
	float RestOffset; // 0x8
	FName Name; // 0xc
	char bContributeToMass : 1; // 0x18
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

struct FRequest_CraftWeapon_BaseWeapon {
	int32_t table_base_index; // 0x0
	FString item_id; // 0x8
};

struct FItemAmountInfo : FTableRowBase {
	int32_t Amount; // 0x8
};

struct FC2G_PartyEntrustSomeone {
	FString Type; // 0x0
	FC2G_PartyEntrustSomeone_Data Data; // 0x10
};

struct FGizmoVec2ParameterChange {
	FVector2D InitialValue; // 0x0
	FVector2D CurrentValue; // 0x8
};

struct FCameraMoveData {
	UCurveFloat* InCurve; // 0x18
	UCurveFloat* InHeightCurve; // 0x20
	UCurveFloat* SecondCurve; // 0x38
	UCurveFloat* SecondHeightCurve; // 0x40
	UCurveFloat* OutCurve; // 0x58
	UCurveVector* CurveFPP; // 0x60
};

struct FAirCraftBoardingPlayerInfo {
	int32_t PlayerUniqueID; // 0x0
	bool IsDescent; // 0x4
	char AirCraftID; // 0x5
	char SeatID; // 0x6
};

struct FARSkeletonDefinition {
	int32_t NumJoints; // 0x0
	TArray<FName> JointNames; // 0x8
	TArray<int32_t> ParentIndices; // 0x18
};

struct FAnalysisClientGameKnockDownedVictimData {
	FString damage_type; // 0x0
	int32_t damage_type_index; // 0x10
	int32_t damage_weapon_id; // 0x14
	FString damage_weapon_name; // 0x18
	FString hit_bone; // 0x28
	int32_t Damage; // 0x38
	int32_t Distance; // 0x3c
	int32_t team_kill; // 0x40
	FAnalysisClientGameCharacterData attacker_info; // 0x48
	FAnalysisClientGameCharacterMiniData victim_info; // 0x118
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

struct FItemRarityInfo {
	EItemRarity Rarity; // 0x0
	FName ItemName; // 0x4
};

struct FReplicatedVehicleState {
	float SteeringInput; // 0x0
	float ThrottleInput; // 0x4
	float BrakeInput; // 0x8
	float HandbrakeInput; // 0xc
	int32_t CurrentGear; // 0x10
};

struct FNiagaraParameters {
	TArray<FNiagaraVariable> Parameters; // 0x0
};

struct FConfigData {
	FString service_status; // 0x0
	uint32_t client_version_least; // 0x10
	uint32_t client_version_latest; // 0x14
	FString ui_lobby; // 0x18
	FString api_wait; // 0x28
	FString api_auth; // 0x38
	FString api_game; // 0x48
	FString api_websocket; // 0x58
	FString wait_status; // 0x68
	TArray<FRegionConfigData> ping_display_by_region; // 0x78
	FString log_target_for_client; // 0x88
	FKinesisConfigData log_target_for_client_to_kinesis; // 0x98
	FString log_target_for_dedi; // 0x118
	FString replay_min_supported_version; // 0x128
	FString replay_transfer_bucket; // 0x138
	FString evidential_data_bucket; // 0x148
	FGoogleClientConfigData log_target_for_client_to_google; // 0x158
	bool find_close_match_making_tag; // 0x188
	uint32_t first_match_try_timeout_seconds; // 0x18c
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

struct FVehicleAreaSpawnRateInfo {
	FLocalSpawnRate Data; // 0x0
	TMap<FName, FVehicleAreaSpawnDetailInfo> AreaList; // 0x28
};

struct FEyeTrackerStereoGazeData {
	FVector LeftEyeOrigin; // 0x0
	FVector LeftEyeDirection; // 0xc
	FVector RightEyeOrigin; // 0x18
	FVector RightEyeDirection; // 0x24
	FVector FixationPoint; // 0x30
	float ConfidenceValue; // 0x3c
};

struct FC2G_PartyInvite {
	FString Type; // 0x0
	FC2G_PartyInvite_Data Data; // 0x10
};

struct FCollectionReference {
	FName CollectionName; // 0x0
};

struct FAirCraftBoardingPlayerList {
	TArray<FAirCraftBoardingPlayerInfo> AirCraftBoardingPlayerList; // 0x0
};

struct FLogBuildCountData {
	int32_t BuildingCount; // 0x0
	int32_t DetectiongBoxCount; // 0x4
	int32_t StandardBoxCount; // 0x8
	int32_t ItemBoxCount; // 0xc
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

struct FNode {
	FName Name; // 0x0
	FName ParentName; // 0x8
	FTransform Transform; // 0x10
	FString DisplayName; // 0x40
	bool bAdvanced; // 0x50
};

struct FResponse_Weapon_List {
	uint32_t C; // 0x0
	FString E; // 0x8
	FResponse_Weapon_List_Array D; // 0x18
};

struct FNiagaraScriptDataInterfaceInfo {
	UNiagaraDataInterface* DataInterface; // 0x0
	FName Name; // 0x8
	int32_t UserPtrIdx; // 0x10
	FNiagaraTypeDefinition Type; // 0x18
	FName RegisteredParameterMapRead; // 0x28
	FName RegisteredParameterMapWrite; // 0x30
};

struct FLiveLinkTimeSynchronizationSettings {
	FFrameRate FrameRate; // 0x0
	FFrameNumber FrameOffset; // 0x8
};

struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector Vector; // 0x28
};

struct FTransformConstraintDescription : FConstraintDescriptionEx {
	ETransformConstraintType TransformType; // 0x10
};

struct FLinearColor {
	float R; // 0x0
	float G; // 0x4
	float B; // 0x8
	float A; // 0xc
};

struct FRequest_CreateDefaultPC {
	FPCLooks pc_looks; // 0x0
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

struct FParticleEditorPromotionSettings {
	FFilePath DefaultParticleAsset; // 0x0
};

struct FGoldInfo {
	int32_t account_gold_game_start; // 0x0
	int32_t account_gold_game_end; // 0x4
	FGainGold gain_gold_info; // 0x8
	FUseGold use_gold_info; // 0x14
};

struct FResponse_Login_Rec {
	bool created; // 0x0
	FString UID; // 0x8
	bool go_to_create_pc; // 0x18
	FString auth_token; // 0x20
	FString Language; // 0x30
	bool clean_campaign_joined; // 0x40
	FString Msg; // 0x48
	bool force_apply_match_making_tag; // 0x58
	FString match_making_tag; // 0x60
};

struct FCharacterClassTypeData : FTableRowBase {
	int32_t ID; // 0x8
	FText DisplayName; // 0x10
	FText Description; // 0x28
	FName MaterialID; // 0x40
	int32_t MaterialCount; // 0x48
	TArray<FName> DefaultClothes; // 0x50
	TArray<FName> EquipClothes; // 0x60
	TArray<FRandomEquipClothesData> RandomEquipClothes; // 0x70
	FLookInfo LookInfo; // 0x80
	TArray<FName> DefaultPerk; // 0x98
	TArray<FName> MaleFace; // 0xa8
	TArray<FName> MaleHair; // 0xb8
	TArray<FName> FemaleFace; // 0xc8
	TArray<FName> FemaleHair; // 0xd8
};

struct FBuildPromotionOpenAssetSettings {
	FFilePath BlueprintAsset; // 0x0
	FFilePath MaterialAsset; // 0x10
	FFilePath ParticleSystemAsset; // 0x20
	FFilePath SkeletalMeshAsset; // 0x30
	FFilePath StaticMeshAsset; // 0x40
	FFilePath TextureAsset; // 0x50
};

struct FEventGraphFastCallPair {
	UFunction* FunctionToPatch; // 0x0
	int32_t EventGraphCallOffset; // 0x8
};

struct FPhysicalAnimationProfile {
	FName ProfileName; // 0x0
	FPhysicalAnimationData PhysicalAnimationData; // 0x8
};

struct FMediaSoundComponentSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
};

struct FRichImageRow : FTableRowBase {
	FSlateBrush Brush; // 0x8
};

struct FNiagaraBoundParameter {
	FNiagaraVariable Parameter; // 0x0
	int32_t SrcOffset; // 0x28
	int32_t DestOffset; // 0x2c
};

struct FQuat {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FDatasmithCameraLensSettingsTemplate {
	float MaxFStop; // 0x0
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

struct FQuestEventInfo {
	FString PlayerUID; // 0x0
	EQuestTaskType QuestTaskType; // 0x10
	FQuestTaskCondition Condition; // 0x18
	int32_t AddValue; // 0x88
};

struct FCapturedPixelsID {
	TMap<FName, FName> Identifiers; // 0x0
};

struct FBravoHotelPCLooks {
	int32_t gender; // 0x0
	int32_t face; // 0x4
	int32_t face_color; // 0x8
	int32_t hair; // 0xc
	int32_t hair_color; // 0x10
	int32_t makeup; // 0x14
};

struct FBravoHotelErrorStringData : FTableRowBase {
	FText DisplayString; // 0x8
	bool bShowCode; // 0x20
	bool bShowExtraDescription; // 0x21
	FText Desc; // 0x28
};

struct FTimelineEventEntry {
	float Time; // 0x0
	FDelegate EventFunc; // 0x4
};

struct FInputMaterialSettings {
	int32_t MaterialMapping; // 0x0
};

struct FDestructibleParameters {
	FDestructibleDamageParameters DamageParameters; // 0x0
	FDestructibleDebrisParameters DebrisParameters; // 0x1c
	FDestructibleAdvancedParameters AdvancedParameters; // 0x48
	FDestructibleSpecialHierarchyDepths SpecialHierarchyDepths; // 0x58
	TArray<FDestructibleDepthParameters> DepthParameters; // 0x70
	FDestructibleParametersFlag Flags; // 0x80
};

struct FARVideoFormat {
	int32_t FPS; // 0x0
	int32_t Width; // 0x4
	int32_t Height; // 0x8
};

struct FCustomizedToolMenuNameArray {
	TArray<FName> Names; // 0x0
};

struct FTemplateSequenceInstanceData : FMovieSceneSequenceInstanceData {
	FMovieSceneEvaluationOperand Operand; // 0x8
};

struct FSubdividedWireEdge {
	int32_t EdgeVertex0PositionIndex; // 0x0
	int32_t EdgeVertex1PositionIndex; // 0x4
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

struct FInterpCurvePointFloat {
	float InVal; // 0x0
	float OutVal; // 0x4
	float ArriveTangent; // 0x8
	float LeaveTangent; // 0xc
	EInterpCurveMode InterpMode; // 0x10
};

struct FAIItemSettingData : FTableRowBase {
	TArray<FAIPhaseItemSettingInfo> PhaseItemSettingInfo; // 0x8
};

struct FSeasonEndReward : FTableRowBase {
	int32_t ID; // 0x8
	TArray<FSeasonEndRewardElement> Tiers; // 0x10
};

struct FMailMessage : FTableRowBase {
	int32_t ID; // 0x8
	int32_t Name; // 0xc
	FString DisplayName; // 0x10
	FString DisplayDesc; // 0x20
	ECommunicatorType DefaultSender; // 0x30
	ECommunicatorType DefaultReceiver; // 0x31
	EMailMsgType Type; // 0x32
	EMailMsgSaveOption SaveOption; // 0x33
	EMailMsgTag Tag; // 0x34
	FText TagString; // 0x38
	EMailMsgTag Tag_Additional; // 0x50
	FText Tag_AdditionalString; // 0x58
	bool CustomMessage; // 0x70
	bool Attached_Items; // 0x71
	int32_t LifeTime; // 0x74
	int32_t LifeTime_AfterRead; // 0x78
	FText TitleTemplate; // 0x80
	FString TitleTemplate_Desc; // 0x98
	FString TitleTemplate_DataName; // 0xa8
	FString TitleTemplate_DataField; // 0xb8
	FText MessageTemplate; // 0xc8
	FString MessageTemplate_Desc; // 0xe0
	FString MessageTemplate_DataName; // 0xf0
	FString MessageTemplate_DataField; // 0x100
};

struct FG2C_FriendWhoAccept_Data {
	FString inviteUid; // 0x0
	FString invitePlayerName; // 0x10
};

struct FNiagaraEventReceiverProperties {
	FName Name; // 0x0
	FName SourceEventGenerator; // 0x8
	FName SourceEmitter; // 0x10
};

struct FInputRange {
	float Min; // 0x0
	float MAX; // 0x4
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

struct FTentDistribution {
	float TipAltitude; // 0x0
	float TipValue; // 0x4
	float Width; // 0x8
};

struct FStreamingTextureBuildInfo {
	uint32_t PackedRelativeBox; // 0x0
	int32_t TextureLevelIndex; // 0x4
	float TexelFactor; // 0x8
};

struct FAnalysisClientGameIllegalSuspectCharacterData {
	int32_t loc_x; // 0x0
	int32_t loc_y; // 0x4
	int32_t loc_z; // 0x8
	FString UserID; // 0x10
	FString NickName; // 0x20
	int32_t ClassIndex; // 0x30
	int32_t Level; // 0x34
	int32_t max_hp; // 0x38
	int32_t current_hp; // 0x3c
	int32_t current_max_hp; // 0x40
	TArray<int32_t> skill_perk_id; // 0x48
	TArray<int32_t> skill_perk_cooltime_id; // 0x58
	FAnalysisClientGameIllegalSuspectWeaponData Weapon; // 0x68
	FString equip_helmet; // 0xc8
	int32_t helmet_durability; // 0xd8
	FString equip_armour; // 0xe0
	int32_t armour_durability; // 0xf0
	int32_t fire_type; // 0xf4
	int32_t zoom_type; // 0xf8
	int32_t Distance; // 0xfc
	int32_t max_distance; // 0x100
	int32_t damage_count; // 0x104
	int32_t headshot_damage_count; // 0x108
	FString ip; // 0x110
};

struct FAnalysisPartsData {
	int32_t grip; // 0x0
	int32_t magazine; // 0x4
	int32_t muzzledevice; // 0x8
	int32_t sight; // 0xc
	int32_t stock; // 0x10
};

struct FLevelStreamingStatus {
	FName PackageName; // 0x0
	char bShouldBeLoaded : 1; // 0x8
	char bShouldBeVisible : 1; // 0x8
	uint32_t LODIndex; // 0xc
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

struct FDataKeyInfo {
	FString CharacterIndex; // 0x0
	FString NickName; // 0x10
	bool bIsAI; // 0x20
};

struct FSimpleStringData : FTableRowBase {
	FString MainString; // 0x8
};

struct FRedZoneData {
	ERedZoneSelectType RedZoneSelectType; // 0x0
	float MinSpawnDelay; // 0x4
	float MaxSpawnDelay; // 0x8
	float SpawnRate; // 0xc
	int32_t AppearPhase; // 0x10
	bool isOverwriteBombData; // 0x14
	FRedZoneBombData RedZoneBombData; // 0x18
};

struct FTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UTexture* ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x18
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

struct FResponse_DSList {
	uint32_t C; // 0x0
	FString E; // 0x8
	FCustomMatchDSList D; // 0x18
};

struct FSubdivisionLimitData {
	TArray<FVector> VertexPositions; // 0x0
	TArray<FSubdivisionLimitSection> Sections; // 0x10
	TArray<FSubdividedWireEdge> SubdividedWireEdges; // 0x20
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

struct FSoundAttenuationPluginSettings {
	TArray<USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray; // 0x0
	TArray<UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray; // 0x10
	TArray<UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray; // 0x20
};

struct FGamePlayRecord {
	FString UserID; // 0x0
	FString NickName; // 0x10
	bool bIsAI; // 0x20
	FPlayRecordInfo play_record_info; // 0x28
};

struct FResponse_PCInfo {
	FString pc_id; // 0x0
	uint32_t class_type_index; // 0x10
	uint32_t class_data_index; // 0x14
	FPCLooks looks; // 0x18
	TArray<FEquippedSlotInfo> wear_item; // 0x30
	TArray<FEquippedSlotInfo> Weapon; // 0x40
	TArray<FEquippedSlotInfo> perk; // 0x50
	uint32_t exp; // 0x60
};

struct FCachedPropertyPath {
	TArray<FPropertyPathSegment> Segments; // 0x0
	UFunction* CachedFunction; // 0x18
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

struct FResponse_Header {
	uint32_t C; // 0x0
	FString E; // 0x8
};

struct FCollisionProfileName {
	FName Name; // 0x0
};

struct FMaterialSpriteElement {
	UMaterialInterface* Material; // 0x0
	UCurveFloat* DistanceToOpacityCurve; // 0x8
	char bSizeIsInScreenSpace : 1; // 0x10
	float BaseSizeX; // 0x14
	float BaseSizeY; // 0x18
	UCurveFloat* DistanceToSizeCurve; // 0x20
};

struct FPlayerSeasonInfo {
	bool is_bought_season_ticket; // 0x0
	uint32_t season_level; // 0x4
	uint32_t season_exp; // 0x8
	uint32_t season_rp; // 0xc
	char tier_game_mode; // 0x10
	uint32_t tier_id; // 0x14
};

struct FBravoHotelHitResults {
	TArray<FHitResult> HitResults; // 0x0
};

struct FBravoHotelLevelStreamSettings : FTableRowBase {
	bool bEnable; // 0x8
	FString WorldDefault_LightLevelString; // 0x10
	FString CustomDefault_LightLevelString; // 0x20
	TArray<FString> AfterGameStart_LightLevelString; // 0x30
};

struct FRandomEquipClothesData : FTableRowBase {
	TArray<FName> EquipClothes; // 0x8
};

struct FFontData {
	FString FontFilename; // 0x0
	EFontHinting Hinting; // 0x10
	EFontLoadingPolicy LoadingPolicy; // 0x11
	int32_t SubFaceIndex; // 0x14
	UObject* FontFaceAsset; // 0x18
};

struct FConeConstraint : FConstraintBaseParams {
	float Swing1LimitDegrees; // 0x14
	float Swing2LimitDegrees; // 0x18
	EAngularConstraintMotion Swing1Motion; // 0x1c
	EAngularConstraintMotion Swing2Motion; // 0x1d
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

struct FSourceEffectMidSideSpreaderSettings {
	EStereoChannelMode InputMode; // 0x0
	float SpreadAmount; // 0x4
	EStereoChannelMode OutputMode; // 0x8
	bool bEqualPower; // 0x9
};

struct FInputChord {
	FKey Key; // 0x0
	char bShift : 1; // 0x18
	char bCtrl : 1; // 0x18
	char bAlt : 1; // 0x18
	char bCmd : 1; // 0x18
};

struct FAudioComponentParam {
	FName ParamName; // 0x0
	float FloatParam; // 0x8
	bool BoolParam; // 0xc
	int32_t IntParam; // 0x10
	USoundWave* SoundWaveParam; // 0x18
};

struct FRestrictedConfigInfo {
	FString RestrictedConfigName; // 0x0
	TArray<FString> Owners; // 0x10
};

struct FAnimationRecordingSettings {
	bool bRecordInWorldSpace; // 0x0
	bool bRemoveRootAnimation; // 0x1
	bool bAutoSaveAsset; // 0x2
	float SampleRate; // 0x4
	float Length; // 0x8
	ERichCurveInterpMode InterpMode; // 0xc
	ERichCurveTangentMode TangentMode; // 0xd
};

struct FSourceEffectEnvelopeFollowerSettings {
	float AttackTime; // 0x0
	float ReleaseTime; // 0x4
	EEnvelopeFollowerPeakMode PeakMode; // 0x8
	bool bIsAnalogMode; // 0x9
};

struct FAreaOverrideStandardGroupData {
	FVector2D CenterLocation; // 0x0
	float Radius; // 0x8
	TMap<FName, FName> ExchangeInfos; // 0x10
	TMap<FName, FRandomSpawn> Items; // 0x60
};

struct FRepRecoilInfo {
	float VertClampMin; // 0x0
	float VertClampMax; // 0x4
	float VertSpeed; // 0x8
	float VertRecoveryClamp; // 0xc
	float VertRecoveryModifier; // 0x10
	float HorSpeed; // 0x14
	float HorTendency; // 0x18
	float HorLeftMax; // 0x1c
	float HorRightMax; // 0x20
	float Speed; // 0x24
	float RecoverySpeed; // 0x28
	float PatternScale; // 0x2c
	float CrouchModifier; // 0x30
	float ProneModifier; // 0x34
	float DecreaseRecoilPatternScale; // 0x38
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

struct FAttachedUsableItem_ScalarParamData {
	FName Key; // 0x0
	float BeginValue; // 0x8
	float EndValue; // 0xc
};

struct FNiagaraPlatformSetConflictInfo {
	int32_t SetAIndex; // 0x0
	int32_t SetBIndex; // 0x4
	TArray<FNiagaraPlatformSetConflictEntry> Conflicts; // 0x8
};

struct FLiveLinkBaseStaticData {
	TArray<FName> PropertyNames; // 0x0
};

struct FBravoHotelLocalPingInfo {
	int32_t PingIndex; // 0x0
	FVector WorldLocation; // 0x4
	FLinearColor PingColor; // 0x10
	EPingType PingType; // 0x20
	UPaperSprite* IconImage; // 0x28
};

struct FUdpMockMessage {
	TArray<char> Data; // 0x0
};

struct FRequest_EquipItem {
	uint32_t item_mid; // 0x0
	FString item_name; // 0x8
	int32_t inven_item_slot; // 0x18
	int32_t equip_item_slot; // 0x1c
};

struct FAwsKinesisObject {
	FString StreamName; // 0x0
	FString Data; // 0x10
	FString PartitionKey; // 0x20
};

struct FStructSerializerSetTestStruct {
	TSet<FString> StrSet; // 0x0
	TSet<int32_t> IntSet; // 0x50
	TSet<FName> NameSet; // 0xa0
	TSet<FStructSerializerBuiltinTestStruct> StructSet; // 0xf0
};

struct FAnimGroupInfo {
	FName Name; // 0x0
	FLinearColor Color; // 0x8
};

struct FResponse_MaterialList_Array {
	TArray<FResponse_MaterialList_Data> material_list; // 0x0
};

struct FParachuteInfo {
	bool Visibility; // 0x0
	bool ParachuteImage; // 0x1
	bool PlayerImage; // 0x2
	float ParachutePoint; // 0x4
	float TerrainHeight; // 0x8
	float Speed; // 0xc
	float Angle; // 0x10
	FVector2D ParachutePos; // 0x14
};

struct FCommonMessageInfo {
	FString Message; // 0x0
	float HideTime; // 0x10
};

struct FNoticeTextData : FTableRowBase {
	int32_t ID; // 0x8
	FText MainText; // 0x10
};

struct FMovieSceneMediaPlayerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	UMediaSource* MediaSource; // 0x48
	FFrameNumber SectionStartFrame; // 0x50
	bool bLoop; // 0x54
};

struct FLiveLinkCurveElement {
	FName CurveName; // 0x0
	float CurveValue; // 0x8
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

struct FCachedAnimStateArray {
	TArray<FCachedAnimStateData> States; // 0x0
};

struct FMeshUVChannelInfo {
	bool bInitialized; // 0x0
	bool bOverrideDensities; // 0x1
	float LocalUVDensities[0x4]; // 0x4
};

struct FItemRecipeData : FTableRowBase {
	FName ResultItem; // 0x8
	bool RepairRecipe; // 0x10
	bool TopRecipe; // 0x11
	float CombineTime; // 0x14
	TArray<FName> GroupRewardIDs; // 0x18
	TArray<FItemRecipeMaterialElement> MaterialItems; // 0x28
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

struct FBoneFilter {
	bool bExcludeSelf; // 0x0
	FName BoneName; // 0x4
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

struct FAnalysisClientGameBattleVictimData {
	FString damage_type; // 0x0
	int32_t damage_type_index; // 0x10
	int32_t damage_weapon_id; // 0x14
	FString damage_weapon_name; // 0x18
	FString hit_bone; // 0x28
	int32_t Damage; // 0x38
	int32_t Distance; // 0x3c
	FAnalysisClientGameCharacterData attacker_info; // 0x40
	FAnalysisClientGameCharacterMiniData victim_info; // 0x110
};

struct FDatasmithMeshSectionInfoMapTemplate {
	TMap<uint32_t, FDatasmithMeshSectionInfoTemplate> Map; // 0x0
};

struct FVertexWeightSettings {
	char UseVertexWeightsInReducer : 1; // 0x0
	char UseVertexWeightsInTexcoordGenerator : 1; // 0x0
	FString WeightsFromColorName; // 0x8
	int32_t WeightsFromColorLevel; // 0x18
	EWeightsFromColorComponent WeightsFromColorComponent; // 0x1c
	float WeightsFromColorMultiplier; // 0x20
	EWeightsFromColorMode WeightsFromColorMode; // 0x24
};

struct FResponse_PlayerSaveScore {
	uint32_t C; // 0x0
	FString E; // 0x8
	FResponse_PlayerName_Rec D; // 0x18
};

struct FC2G_PartyWhoPing {
	FString Type; // 0x0
	FC2G_PartyWhoPing_Data Data; // 0x10
};

struct FRequest_PlayerScore {
	FString player_name; // 0x0
	FResponse_PlayerScore_Rec D; // 0x10
};

struct FAnalysisClientGameGoldenTimeRevivalCharacterData {
	int32_t loc_x; // 0x0
	int32_t loc_y; // 0x4
	int32_t loc_z; // 0x8
	FString UserID; // 0x10
	FString NickName; // 0x20
	int32_t ClassIndex; // 0x30
	int32_t Level; // 0x34
	int32_t use_gold; // 0x38
	int32_t remain_gold; // 0x3c
};

struct FBravoHotelLoserScore : FTableRowBase {
	int32_t Level; // 0x8
	float RankPoint; // 0xc
	float DefeatMaxPoint; // 0x10
	float ScoreOnDefeat; // 0x14
	float ScoreOnZeroKill; // 0x18
	float ScoreOnZeroAssist; // 0x1c
	float ScoreOnWin; // 0x20
	float ScorePerKill; // 0x24
	float ScorePerAssist; // 0x28
};

struct FFormatArgumentData {
	FString ArgumentName; // 0x0
	EFormatArgumentType ArgumentValueType; // 0x10
	FText ArgumentValue; // 0x18
	int32_t ArgumentValueInt; // 0x30
	float ArgumentValueFloat; // 0x34
	ETextGender ArgumentValueGender; // 0x38
};

struct FAngularDriveConstraint {
	FConstraintDrive TwistDrive; // 0x0
	FConstraintDrive SwingDrive; // 0x10
	FConstraintDrive SlerpDrive; // 0x20
	FRotator OrientationTarget; // 0x30
	FVector AngularVelocityTarget; // 0x3c
	EAngularDriveMode AngularDriveMode; // 0x48
};

struct FBravoHotelDefaultBalanceData : FTableRowBase {
	float BaseHealth; // 0x8
	float BaseBreath; // 0xc
	float UseBreath; // 0x10
	float RegainBreath; // 0x14
	float NoBreathDamage; // 0x18
	float BaseCarryWeight; // 0x1c
	float SteadySecond; // 0x20
	float NoSteadySecond; // 0x24
	float KnockDamage; // 0x28
	float ReviveTime; // 0x2c
	float RevivedHealth; // 0x30
	float ResuscitationTime; // 0x34
	float ResuscitatedHealthModify; // 0x38
	float CoinDropMin; // 0x3c
	float CoinDropMax; // 0x40
	float CoinDropHeadShotMin; // 0x44
	float CoinDropHeadShotMax; // 0x48
	float FrontAngle; // 0x4c
	float BackAngle; // 0x50
	float FarDitanceOfDamageReduce; // 0x54
	float CloseDitanceOfDamageReduce; // 0x58
	UCurveFloat* BlueZoneBorderCurve; // 0x60
	float OverHealLimitValue; // 0x68
	float OverHealTime; // 0x6c
	float UpperOverHealRate; // 0x70
	float LowerOverHealRate; // 0x74
};

struct FRequest_Login {
	FString Client_version; // 0x0
	int32_t os; // 0x10
	FString guest_id; // 0x18
};

struct FNiagaraSystemScalabilitySettingsArray {
	TArray<FNiagaraSystemScalabilitySettings> Settings; // 0x0
};

struct FPickupItem {
	bool Visibility; // 0x0
	bool NotEnoughSpace; // 0x1
	bool SeperateAmmo; // 0x2
	bool bNeedItem; // 0x3
	bool bFullNeedItem; // 0x4
	FText DisplayName; // 0x8
	int32_t Quantity; // 0x20
	FString ItemMessage; // 0x28
	TSoftObjectPtr<UPaperSprite> TexturePtr; // 0x38
	EItemType ItemType; // 0x60
	EItemRarity Rarity; // 0x61
	FText Desc; // 0x68
	FText CombineTargetText; // 0x80
};

struct FSuppliedWeapon {
	uint32_t table_index; // 0x0
	FString item_id; // 0x8
	uint32_t Durability; // 0x18
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

struct FAnimSlotInfo {
	FName SlotName; // 0x0
	TArray<float> ChannelWeights; // 0x8
};

struct FResponse_AskLoginAvailable_Rec {
	bool approved; // 0x0
	FString entry_code; // 0x8
	uint32_t waiting_user; // 0x18
	bool not_available; // 0x1c
};

struct FWidgetNavigationData {
	EUINavigationRule Rule; // 0x0
	FName WidgetToFocus; // 0x4
	TWeakObjectPtr<UWidget> Widget; // 0xc
	FDelegate CustomDelegate; // 0x14
};

struct FActiveCameraShakeInfo {
	UCameraShake* ShakeInstance; // 0x0
	TWeakObjectPtr<UCameraShakeSourceComponent> ShakeSource; // 0x8
};

struct FLastLocationGatherInfo {
	UNetConnection* Connection; // 0x0
	FVector LastLocation; // 0x8
	FVector LastOutOfRangeLocationCheck; // 0x14
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

struct FMulticastRecordOptions {
	FString FuncPathName; // 0x0
	bool bServerSkip; // 0x10
	bool bClientSkip; // 0x11
};

struct FResponse_Weapon_List_Array {
	TArray<FResponse_Weapon_List_Data> weapon_list; // 0x0
};

struct FVehicleEngineData {
	FRuntimeFloatCurve TorqueCurve; // 0x0
	float MaxRPM; // 0x88
	float MOI; // 0x8c
	float TorqueScale; // 0x90
	float DampingRateFullThrottle; // 0x94
	float DampingRateZeroThrottleClutchEngaged; // 0x98
	float DampingRateZeroThrottleClutchDisengaged; // 0x9c
};

struct FNiagaraCompileEvent {
	FNiagaraCompileEventSeverity Severity; // 0x0
	FString Message; // 0x8
	FGuid NodeGuid; // 0x18
	FGuid PinGuid; // 0x28
	TArray<FGuid> StackGuids; // 0x38
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

struct FReportVictimLogData {
	UBravoHotelDamageType* DamageTypeClass; // 0x0
	FString HitBone; // 0x8
};

struct FStaticComponentMaskParameter : FStaticParameterBase {
	bool R; // 0x24
	bool G; // 0x25
	bool B; // 0x26
	bool A; // 0x27
};

struct FVOscillator {
	FFOscillator X; // 0x0
	FFOscillator Y; // 0xc
	FFOscillator Z; // 0x18
};

struct FBravoHotelSmartPingIconSettings : FTableRowBase {
	UPaperSprite* Icon; // 0x8
	UPaperSprite* MenuIcon; // 0x10
	FText DisplayName; // 0x18
	FBravoHotelSmartPingIconAppearanceSettings Appearance; // 0x30
	FBravoHotelSmartPingIconAnimationSettings Animation; // 0x4c
	FBravoHotelSmartPingIconSoundSettings Sound; // 0x68
	FBravoHotelSmartPingIconAdvancedSettings Advanced; // 0x80
	FText Msg; // 0x90
	EPingType PingType; // 0xa8
	float IconSize; // 0xac
	char Rarity; // 0xb0
};

struct FNiagaraSystemCompileRequest {
	TArray<UObject*> RootObjects; // 0x8
};

struct FAssetMapping {
	UAnimationAsset* SourceAsset; // 0x0
	UAnimationAsset* TargetAsset; // 0x8
};

struct FParameterDecorations {
	TArray<UTexture2D*> Images; // 0x0
};

struct FAIMoveRequest {
	AActor* GoalActor; // 0x0
};

struct FMovieSceneBindingOverrideData {
	FMovieSceneObjectBindingID ObjectBindingID; // 0x0
	TWeakObjectPtr<UObject> Object; // 0x18
	bool bOverridesDefault; // 0x20
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

struct FRequest_DelItem {
	uint32_t item_mid; // 0x0
	FString item_name; // 0x8
	int32_t item_slot; // 0x18
};

struct FG2C_MatchCancel {
	FString Type; // 0x0
	FG2C_MatchCancel_Data Data; // 0x10
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

struct FG2C_PartyYouJoined {
	FString Type; // 0x0
	FG2C_PartyYouJoined_Data Data; // 0x10
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

struct FNiagaraCompileHashVisitorDebugInfo {
	FString Object; // 0x0
	TArray<FString> PropertyKeys; // 0x10
	TArray<FString> PropertyValues; // 0x20
};

struct FFoliageVertexColorChannelMask {
	char UseMask : 1; // 0x0
	float MaskThreshold; // 0x4
	char InvertMask : 1; // 0x8
};

struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate {
	FNiagaraVariable Parameter; // 0x20
};

struct FC2G_FriendList {
	FString Type; // 0x0
	FC2G_FriendList_Data Data; // 0x10
};

struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer {
	FPoseLink BasePose; // 0xe0
	int32_t LODThreshold; // 0xf0
	float ALPHA; // 0xf4
	FInputScaleBias AlphaScaleBias; // 0xf8
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x100
	FName AlphaCurveName; // 0x148
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x150
	EAnimAlphaInputType AlphaInputType; // 0x184
	bool bAlphaBoolEnabled; // 0x185
};

struct FModularSynthPresetBankEntry {
	FString PresetName; // 0x0
	FModularSynthPreset Preset; // 0x10
};

struct FRequest_DS_MakeSupplyBoxUsed {
	FString user_id; // 0x0
	uint32_t table_index; // 0x10
	FString item_id; // 0x18
};

struct FBravoHotelMatchRewardTableRow : FTableRowBase {
	int32_t Reward_ID; // 0x8
	FText map_name; // 0x10
	FText Mode_Name; // 0x28
	FBravoHotelPersonalReward PersonalReward; // 0x40
	FBravoHotelRankReward RankReward; // 0x64
	FBravoHotelRandomReward RandomReward; // 0x80
};

struct FClusterNode_DEPRECATED {
	FVector BoundMin; // 0x0
	int32_t FirstChild; // 0xc
	FVector BoundMax; // 0x10
	int32_t LastChild; // 0x1c
	int32_t FirstInstance; // 0x20
	int32_t LastInstance; // 0x24
};

struct FNiagaraPlatformSetConflictEntry {
	FName ProfileName; // 0x0
	int32_t QualityLevelMask; // 0x8
};

struct FLevelSequenceSnapshotSettings {
	char ZeroPadAmount; // 0x0
	FFrameRate FrameRate; // 0x4
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

struct FRepPerkInfo : FFastArraySerializerItem {
	uint16_t PerkIndex; // 0xc
	char InGamelevel; // 0xe
};

struct FAnimCurveParam {
	FName Name; // 0x0
};

struct FPerkDeckInfo {
	FPerkDeckClassInfo ClassInfo; // 0x0
	int32_t ChangeDeckCount; // 0x28
	TArray<FName> ExpertSupplyItems; // 0x30
	TArray<FName> ExpertSupplyWeaponItems; // 0x40
	TArray<FName> ExpertFreeSupplyItems; // 0x50
	TArray<FName> ExpertFreeSupplyWeaponItems; // 0x60
};

struct FEdGraphTerminalType {
	FName TerminalCategory; // 0x0
	FName TerminalSubCategory; // 0x8
	TWeakObjectPtr<UObject> TerminalSubCategoryObject; // 0x10
	bool bTerminalIsConst; // 0x18
	bool bTerminalIsWeakPointer; // 0x19
};

struct FDamageTypeTable : FTableRowBase {
	int32_t ID; // 0x8
	UDamageType* StaticClass; // 0x10
	TSoftObjectPtr<UPaperSprite> IconTexture_PaperSprite; // 0x18
	FText CauserText; // 0x40
	UAnimMontage* HitedMontage; // 0x58
	bool IsClassSkill; // 0x60
};

struct FSpawnItemsInBox {
	FDataTableRowHandle Item; // 0x0
	EItemRarity Rarity; // 0x10
};

struct FSettingValueData {
	CheatParamType Type; // 0x0
	TArray<FString> ValueList; // 0x8
};

struct FItemCountData {
	int32_t Index; // 0x0
	int32_t Count; // 0x4
};

struct FActorPoolInfo {
	UObject* ActorClass; // 0x0
	TArray<AActor*> PoolingActors; // 0x8
	TArray<AActor*> ActiveActors; // 0x18
	UWorld* CurrentWorld; // 0x28
};

struct FResponse_invenList {
	uint32_t C; // 0x0
	FString E; // 0x8
	FResponse_InvenListArray D; // 0x18
};

struct FProjectDirectoriesPath {
	TArray<FDirectoryPath> DirectoriesPath; // 0x0
};

struct FC2G_GoToDediWhenYouWerePlaying {
	FString Type; // 0x0
	FC2G_GoToDediWhenYouWerePlaying_Data Data; // 0x10
};

struct FDataEventClientGameDied : FDataEventBase {
	UBravoHotelDamageType* DamageTypeClass; // 0x60
	APlayerState* KnockDownAttackerPlayerState; // 0x68
	APlayerState* KillerPlayerState; // 0x70
	APlayerState* AttackerPlayerState; // 0x78
	APlayerState* VictimPlayerState; // 0x80
};

struct FAIDynamicParam {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
	FBlackboardKeySelector BBKey; // 0x10
};

struct FKAggregateGeom {
	TArray<FKSphereElem> SphereElems; // 0x0
	TArray<FKBoxElem> BoxElems; // 0x10
	TArray<FKSphylElem> SphylElems; // 0x20
	TArray<FKConvexElem> ConvexElems; // 0x30
	TArray<FKTaperedCapsuleElem> TaperedCapsuleElems; // 0x40
};

struct FBattleRoyalPhaseInfo {
	bool bUsingWeightMap; // 0x0
	float DamagePerSecondOutOfCircle; // 0x4
	FPersonalSupplyPhaseInfo PersonalSupplyPhaseInfo; // 0x8
	TArray<float> TransportProbabilities; // 0x38
	float CriticalTimeLimitTime; // 0x48
	float LocalDeviation; // 0x4c
	TArray<FTransportAircraftInfo> TransportAircraftInfos; // 0x50
	FName TransportRandomItemKey; // 0x60
	float WaitingTime; // 0x68
	float TargetCircleRate; // 0x6c
	FVector SurvivalCirclePos; // 0x70
	float DelayTime; // 0x7c
	float FixTransportAltitude; // 0x80
	TArray<FAddPerkInfo> AddPerkInfos; // 0x88
	int32_t TransportMaxCount; // 0x98
	bool UsingFixTransportAltitude; // 0x9c
	float ShrinkTime; // 0xa0
	bool EnableUsingDelayAddPerk; // 0xa4
	float TransportStartingAddValue; // 0xa8
	float TransportAltitude; // 0xac
	float SurvivalCircleRaidus; // 0xb0
	int32_t TransportMinCount; // 0xb4
};

struct FLiveLinkSubjectRepresentation {
	FLiveLinkSubjectName Subject; // 0x0
	ULiveLinkRole* Role; // 0x8
};

struct FKConvexElem : FKShapeElem {
	TArray<FVector> VertexData; // 0x30
	TArray<int32_t> IndexData; // 0x40
	FBox ElemBox; // 0x50
	FTransform Transform; // 0x70
};

struct FBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FKey AxisKey; // 0x8
	FName FunctionNameToBind; // 0x20
};

struct FRichCurve : FRealCurve {
	TArray<FRichCurveKey> Keys; // 0x70
};

struct FBPEditorBookmarkNode {
	FGuid NodeGuid; // 0x0
	FGuid ParentGuid; // 0x10
	FText DisplayName; // 0x20
};

struct FSkeletalMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FMeshUVChannelInfo UVChannelData; // 0x10
};

struct FAnalysisClientGameDataHead {
	int32_t DateTime; // 0x0
	FString match_id; // 0x8
	FString game_server_id; // 0x18
	FString MapName; // 0x28
	int32_t GameViewType; // 0x38
	int32_t GameMode; // 0x3c
	int32_t BattleMode; // 0x40
	FString cqr_type; // 0x48
	int32_t bluezone_id; // 0x58
	int32_t phase_info; // 0x5c
	int32_t current_survival_player; // 0x60
	int32_t current_survival_team; // 0x64
	int32_t team_id; // 0x68
	int32_t team_cnt; // 0x6c
	int32_t current_rank; // 0x70
	FString UserID; // 0x78
	FString NickName; // 0x88
	int32_t ClassIndex; // 0x98
	int32_t expert_weapon_id; // 0x9c
	FString expert_weapon_name; // 0xa0
	int32_t Level; // 0xb0
	FString Training; // 0xb8
	int32_t loser_score; // 0xc8
	int32_t current_hp; // 0xcc
	int32_t max_hp; // 0xd0
	int32_t overheal; // 0xd4
	int32_t loc_x; // 0xd8
	int32_t loc_y; // 0xdc
	int32_t loc_z; // 0xe0
	int32_t isinbluezone; // 0xe4
	int32_t isinredzone; // 0xe8
};

struct FAnalysisClientGameThrowableUseData {
	int32_t item_id; // 0x0
	FString item_name; // 0x8
	int32_t item_count; // 0x18
	TArray<int32_t> skill_perk_id; // 0x20
	int32_t landing_distance; // 0x30
	int32_t landing_loc_x; // 0x34
	int32_t landing_loc_y; // 0x38
	int32_t landing_loc_z; // 0x3c
};

struct FWeaponItem {
	float Power; // 0x0
	int32_t EffectiveRange; // 0x4
	float Stability; // 0x8
	int32_t Firingrate; // 0xc
	int32_t Ammo; // 0x10
	FString PickupWeaponText; // 0x18
	FString AmmoInfo; // 0x28
	TSoftObjectPtr<UPaperSprite> TexturePtr; // 0x38
	EItemRarity Rarity; // 0x60
	FText Desc; // 0x68
	bool WeaponLockVisibility; // 0x80
	bool IsMyWeapon; // 0x81
	bool BindInfoVisibility; // 0x82
	FString BindInfoNickName; // 0x88
	FString BindInfoDesc; // 0x98
	int32_t BindLevel; // 0xa8
	TArray<FAbilitySlot> AbilitySlot; // 0xb0
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

struct FBaseProtocolLog {
	FString UserID; // 0x0
	FString NickName; // 0x10
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

struct FHoudiniEvent {
	FVector Position; // 0x0
	FVector Normal; // 0xc
	float Impulse; // 0x18
	FVector Velocity; // 0x1c
	int32_t POINTID; // 0x28
	float Time; // 0x2c
	float LIFE; // 0x30
	FLinearColor Color; // 0x34
	int32_t Type; // 0x44
};

struct FMinimalViewInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x18
	float DesiredFOV; // 0x1c
	float OrthoWidth; // 0x24
	float OrthoNearClipPlane; // 0x28
	float OrthoFarClipPlane; // 0x2c
	float AspectRatio; // 0x30
	char bConstrainAspectRatio : 1; // 0x34
	char bUseFieldOfViewForLOD : 1; // 0x34
	ECameraProjectionMode ProjectionMode; // 0x38
	float PostProcessBlendWeight; // 0x3c
	FPostProcessSettings PostProcessSettings; // 0x40
	FVector2D OffCenterProjectionOffset; // 0x600
};

struct FLevelNameAndTime {
	FString LevelName; // 0x0
	uint32_t LevelChangeTimeInMS; // 0x10
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
	bool bNeedsPrimaryStreaming; // 0x52
};

struct FLiveLinkSourceBufferManagementSettings {
	bool bValidEngineTimeEnabled; // 0x0
	float ValidEngineTime; // 0x4
	float EngineTimeOffset; // 0x8
	double EngineTimeClockOffset; // 0x10
	FFrameRate TimecodeFrameRate; // 0x18
	bool bGenerateSubFrame; // 0x20
	bool bUseTimecodeSmoothLatest; // 0x21
	FFrameRate SourceTimecodeFrameRate; // 0x24
	bool bValidTimecodeFrameEnabled; // 0x2c
	int32_t ValidTimecodeFrame; // 0x30
	float TimecodeFrameOffset; // 0x34
	double TimecodeClockOffset; // 0x38
	int32_t LatestOffset; // 0x40
	int32_t MaxNumberOfFrameToBuffered; // 0x44
	bool bKeepAtLeastOneFrame; // 0x48
};

struct FCurveTrack {
	FName CurveName; // 0x0
	TArray<float> CurveWeights; // 0x8
};

struct FNiagaraStatScope {
	FName FullName; // 0x0
	FName FriendlyName; // 0x8
};

struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneActorReferenceData ActorReferenceData; // 0x48
};

struct FBravoHotelAbilityModifier {
	float Health; // 0x0
	float Usablehealth; // 0x4
	float Bandage; // 0x8
	float Adrenaline; // 0xc
	int32_t Capacity; // 0x10
	float Fuel; // 0x14
	float DereaseReloadTimePercent; // 0x18
	float MoveSpeedPercent; // 0x1c
	FBravoHotelAbilityModifierArmor ArmorInfo; // 0x20
	FBravoHotelAbilityModifierDetail Detail; // 0x78
};

struct FAIDataProviderIntValue : FAIDataProviderTypedValue {
	int32_t DefaultValue; // 0x30
};

struct FGameplayTagCategoryRemap {
	FString BaseCategory; // 0x0
	TArray<FString> RemapCategories; // 0x10
};

struct FInterpCurveVector2D {
	TArray<FInterpCurvePointVector2D> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
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
	EAudioOutputTarget OutputTarget; // 0x2c
	ESoundWaveLoadingBehavior LoadingBehavior; // 0x2d
	USoundSubmix* DefaultSubmix; // 0x30
};

struct FARPose2D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FVector2D> JointLocations; // 0x28
	TArray<bool> IsJointTracked; // 0x38
};

struct FAnimNode_RigidBody : FAnimNode_SkeletalControlBase {
	UPhysicsAsset* OverridePhysicsAsset; // 0xc8
	FVector OverrideWorldGravity; // 0x168
	FVector ExternalForce; // 0x174
	FVector ComponentLinearAccScale; // 0x180
	FVector ComponentLinearVelScale; // 0x18c
	FVector ComponentAppliedLinearAccClamp; // 0x198
	float CachedBoundsScale; // 0x1a4
	FBoneReference BaseBoneRef; // 0x1a8
	ECollisionChannel OverlapChannel; // 0x1b8
	ESimulationSpace SimulationSpace; // 0x1b9
	bool bForceDisableCollisionBetweenConstraintBodies; // 0x1ba
	char bEnableWorldGeometry : 1; // 0x1bc
	char bOverrideWorldGravity : 1; // 0x1bc
	char bTransferBoneVelocities : 1; // 0x1bc
	char bFreezeIncomingPoseOnStart : 1; // 0x1bc
	char bClampLinearTranslationLimitToRefPose : 1; // 0x1bc
	FSolverIterations OverrideSolverIterations; // 0x1c0
};

struct FClothLODDataCommon {
	FClothPhysicalMeshData PhysicalMeshData; // 0x0
	FClothCollisionData CollisionData; // 0xf8
};

struct FRepairSettings {
	char UseTJunctionRemover : 1; // 0x0
	float TJuncDist; // 0x4
	float WeldDist; // 0x8
	char WeldOnlyBorderVertices : 1; // 0xc
	char WeldOnlyWithinMaterial : 1; // 0xc
	char WeldOnlyWithinSceneNode : 1; // 0xc
	char WeldOnlyBetweenSceneNodes : 1; // 0xc
	char UseWelding : 1; // 0xc
	uint32_t ProgressivePasses; // 0x10
};

struct FIntegralKey {
	float Time; // 0x0
	int32_t Value; // 0x4
};

struct FInterpCurveVector {
	TArray<FInterpCurvePointVector> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FWeaponAttachmentInfo {
	TMap<EWeaponAttachmentType, EWeaponAttachmentUseType> AttachmentSlotUseInfo; // 0x0
	TMap<EWeaponAttachmentType, FWeaponAttachmentUseInfoMap> AllowedAttachmentList; // 0x50
	FName Socket_WeaponSight; // 0xa0
	FName Socket_FrontSightWithScope; // 0xa8
	FName Socket_Rail; // 0xb0
	FName Socket_Grip; // 0xb8
	FName Socket_Magazine; // 0xc0
	FName Socket_ButtStock; // 0xc8
	FName Socket_MuzzleDevice; // 0xd0
	FName Socket_Barrel; // 0xd8
	FName Socket_TacticalAttachment; // 0xe0
	TSoftObjectPtr<UStaticMesh> Sight_FrontSightWithScope; // 0xe8
	TSoftObjectPtr<UStaticMesh> Sight_Rail; // 0x110
	TMap<EWeaponAttachmentGrip, TSoftObjectPtr<UStaticMesh>> Meshes_Grip; // 0x138
	TMap<EWeaponAttachmentMagazine, TSoftObjectPtr<UStaticMesh>> Meshes_Magazine; // 0x188
	TMap<EWeaponAttachmentStock, TSoftObjectPtr<UStaticMesh>> Meshes_Stock; // 0x1d8
	TMap<EWeaponAttachmentMuzzleDevice, TSoftObjectPtr<USkeletalMesh>> Meshes_MuzzleDevice; // 0x228
	TMap<EWeaponAttachmentBarrel, TSoftObjectPtr<USkeletalMesh>> Meshes_Barrel; // 0x278
	TMap<EWeaponAttachmentItem, FBravoHotelReloadInfo> OverrideReloadInfos; // 0x2c8
};

struct FResponse_MoveItem {
	uint32_t C; // 0x0
	FString E; // 0x8
	FResponse_MoveItem_Rec D; // 0x18
};

struct FMovieSceneFloatValue {
	float Value; // 0x0
	FMovieSceneTangentData Tangent; // 0x4
	ERichCurveInterpMode InterpMode; // 0x18
	ERichCurveTangentMode TangentMode; // 0x19
	char PaddingByte; // 0x1a
};

struct FAkCommunicationSettingsWithSystemInitialization : FAkCommunicationSettings {
	bool InitializeSystemComms; // 0x20
};

struct FSpawnBaseInfo {
	int32_t MinDistance; // 0x0
	int32_t MaxDistance; // 0x4
	bool UsingRate; // 0x8
	float MinDistanceRate; // 0xc
	float MaxDistanceRate; // 0x10
	float Degree; // 0x14
	float BuildingSpawnRate; // 0x18
	float LocalDeviation; // 0x1c
	int32_t DistanceCheckCount; // 0x20
};

struct FRepClientCharacterReconnectInfo {
	char bRepIsCrouched : 1; // 0x0
	char bRepIsProned : 1; // 0x0
	char bRepNeedOwnerStopLadder : 1; // 0x0
};

struct FCharacterAbilityData : FTableRowBase {
	ECharacterAbilityType AbilityType; // 0x8
	EAbilityCase AbilityCase; // 0x9
	float AbilityValue; // 0xc
};

struct FCollisionResponseTemplate {
	FName Name; // 0x0
	ECollisionEnabled CollisionEnabled; // 0x8
	bool bCanModify; // 0xa
	FName ObjectTypeName; // 0x2c
	TArray<FResponseChannel> CustomResponses; // 0x38
};

struct FRequest_CheckPlayerName {
	FString player_name; // 0x0
};

struct FDirectorTrackCut {
	float Time; // 0x0
	float TransitionTime; // 0x4
	FName TargetCamGroup; // 0x8
	int32_t ShotNumber; // 0x10
};

struct FARTraceResult {
	float DistanceFromCamera; // 0x0
	EARLineTraceChannels TraceChannel; // 0x4
	FTransform LocalToTrackingTransform; // 0x10
	UARTrackedGeometry* TrackedGeometry; // 0x40
};

struct FRawDistributionVector : FRawDistribution {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	FVector MinValueVec; // 0x28
	FVector MaxValueVec; // 0x34
	UDistributionVector* Distribution; // 0x40
};

struct FG2C_PartyWhoUpdateTierID_Array {
	FString UID; // 0x0
	uint32_t tier_id; // 0x10
};

struct FAddPerkInfoArray {
	TArray<FAddPerkInfo> AddPerkInfoArray; // 0x0
};

struct FAnalysisClientOutGameMatchingCancelData {
	int32_t GameViewType; // 0x0
	int32_t BattleMode; // 0x4
	FString matching_start_time; // 0x8
	FString matching_cancel_time; // 0x18
};

struct FBox {
	FVector Min; // 0x0
	FVector MAX; // 0xc
	char IsValid; // 0x18
};

struct FStaticMeshComponentInstanceData : FPrimitiveComponentInstanceData {
	UStaticMesh* StaticMesh; // 0xf0
	TArray<FStaticMeshVertexColorLODData> VertexColorLODs; // 0xf8
	TArray<FGuid> CachedStaticLighting; // 0x108
	TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x118
};

struct FBombingInfo {
	float BombDamage; // 0x0
	float BombDistance; // 0x4
	float BombRange; // 0x8
	float BombHeight; // 0xc
	float BombDelayTime; // 0x10
	float BombTargetDelayTime; // 0x14
	FVector Location; // 0x18
};

struct FMagicLeapHandMesh {
	int32_t Version; // 0x0
	int32_t DataCount; // 0x4
	TArray<FMagicLeapHandMeshBlock> Data; // 0x8
};

struct FG2C_Login {
	FString Type; // 0x0
	FG2C_Login_Data Data; // 0x10
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

struct FMutableParamUIMetadata {
	FString ObjectFriendlyName; // 0x0
	FString UISectionName; // 0x10
	int32_t UIOrder; // 0x20
	TSoftObjectPtr<UTexture2D> UIThumbnail; // 0x28
	TMap<FString, FString> ExtraInformation; // 0x50
	TMap<FString, TSoftObjectPtr<UObject>> ExtraAssets; // 0xa0
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

struct FNiagaraDataInterfaceGPUParamInfo {
	FString DataInterfaceHLSLSymbol; // 0x0
	FString DIClassName; // 0x10
	TArray<FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions; // 0x20
};

struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector2D Vector; // 0x28
};

struct FG2C_PartyWhoVoiceChat {
	FString Type; // 0x0
	FG2C_PartyWhoVoiceChat_Data Data; // 0x10
};

struct FMagicLeapSharedWorldSharedData {
	TArray<FGuid> PinIDs; // 0x0
};

struct FItemTypeProb {
	EItemType ItemType; // 0x0
	float ProbSum; // 0x4
};

struct FRandomStream {
	int32_t InitialSeed; // 0x0
	int32_t Seed; // 0x4
};

struct FSM_ExitEvent {
	char StateID; // 0x0
	char NextStateID; // 0x1
	FName NextStateName; // 0x4
};

struct FCachedKeyToActionInfo {
	UPlayerInput* PlayerInput; // 0x0
};

struct FDebugFloatHistory {
	TArray<float> Samples; // 0x0
	float MaxSamples; // 0x10
	float MinValue; // 0x14
	float MaxValue; // 0x18
	bool bAutoAdjustMinMax; // 0x1c
};

struct FSwarmDebugOptions {
	char bDistributionEnabled : 1; // 0x0
	char bForceContentExport : 1; // 0x0
	char bInitialized : 1; // 0x0
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

struct FAkXboxOneAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint16_t MaximumNumberOfXMAVoices; // 0x38
	bool UseHardwareCodecLowLatencyMode; // 0x3a
};

struct FTransformCurve : FAnimCurveBase {
	FVectorCurve TranslationCurve; // 0x18
	FVectorCurve RotationCurve; // 0x1b0
	FVectorCurve ScaleCurve; // 0x348
};

struct FSlateColor {
	FLinearColor SpecifiedColor; // 0x0
	ESlateColorStylingMode ColorUseRule; // 0x10
};

struct FRepInvalidHitInfo {
	float Distance; // 0x0
	float Dot; // 0x4
	int32_t PlayerId; // 0x8
	uint16_t ProjectileId; // 0xc
	float DoubtScore; // 0x10
	float LevelLoadingProgress; // 0x14
	AActor* HitActor; // 0x18
};

struct FC2G_SetCloseMatchMakingTag_Data {
	FString match_making_tag; // 0x0
};

struct FBravoHotelBlueZoneInfo : FTableRowBase {
	FBravoHotelPlayZoneData PlayZoneData; // 0x8
	TArray<FBattleRoyalPhaseInfo> BattleRoyalePhaseInfo; // 0x190
	FName RowName_AddPerkInfos; // 0x1a0
};

struct FTeamInfo {
	TArray<TWeakObjectPtr<ABravoHotelPlayerState>> MemberStates; // 0x8
};

struct FBlendParameter {
	FString DisplayName; // 0x0
	float Min; // 0x10
	float MAX; // 0x14
	int32_t GridNum; // 0x18
};

struct FGroupItem : FTableRowBase {
	int32_t ID; // 0x8
	FText DisplayName; // 0x10
	TArray<FGroupItemElement> Items; // 0x28
};

struct FMagicLeapRaycastHitResult {
	EMagicLeapRaycastResultState HitState; // 0x0
	FVector HitPoint; // 0x4
	FVector Normal; // 0x10
	float Confidence; // 0x1c
	int32_t UserData; // 0x20
};

struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base {
	TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComponent; // 0x10
	bool bUseAttachedParent; // 0x18
	bool bCopyCurves; // 0x19
};

struct FTimelineVectorTrack {
	UCurveVector* VectorCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName VectorPropertyName; // 0x20
};

struct FRandomPackageProbability {
	int32_t ID; // 0x0
	int32_t Min; // 0x4
	int32_t MAX; // 0x8
	int32_t Rate; // 0xc
	int32_t DuplicateCount; // 0x10
	FText DisplayName; // 0x18
};

struct FSceneComponentInstanceData : FActorComponentInstanceData {
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x58
};

struct FSubmixEffectReverbFastSettings {
	bool bBypass; // 0x0
	float Density; // 0x4
	float Diffusion; // 0x8
	float Gain; // 0xc
	float GainHF; // 0x10
	float DecayTime; // 0x14
	float DecayHFRatio; // 0x18
	float ReflectionsGain; // 0x1c
	float ReflectionsDelay; // 0x20
	float LateGain; // 0x24
	float LateDelay; // 0x28
	float AirAbsorptionGainHF; // 0x2c
	float WetLevel; // 0x30
	float DryLevel; // 0x34
};

struct FReverbSettings {
	bool bApplyReverb; // 0x0
	UReverbEffect* ReverbEffect; // 0x8
	USoundEffectSubmixPreset* ReverbPluginEffect; // 0x10
	float Volume; // 0x18
	float FadeTime; // 0x1c
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

struct FIndexedCurve {
	FKeyHandleMap KeyHandlesToIndices; // 0x8
};

struct FTextBlockStyle : FSlateWidgetStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x58
	FVector2D ShadowOffset; // 0x80
	FLinearColor ShadowColorAndOpacity; // 0x88
	FSlateColor SelectedBackgroundColor; // 0x98
	FLinearColor HighlightColor; // 0xc0
	FSlateBrush HighlightShape; // 0xd0
	FSlateBrush StrikeBrush; // 0x158
	FSlateBrush UnderlineBrush; // 0x1e0
};

struct FAITouchEvent {
	AActor* TouchReceiver; // 0x10
	AActor* OtherActor; // 0x18
};

struct FSubmixEffectTapDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	TArray<FTapDelayInfo> Taps; // 0x8
};

struct FBeamModifierOptions {
	char bModify : 1; // 0x0
	char bScale : 1; // 0x0
	char bLock : 1; // 0x0
};

struct FFloatRange {
	FFloatRangeBound LowerBound; // 0x0
	FFloatRangeBound UpperBound; // 0x8
};

struct FPolygonToSplit {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexPair> VertexPairsToSplitAt; // 0x8
};

struct FC2G_TrainingModeOff {
	FString Type; // 0x0
};

struct FClothParameterMask_Legacy {
	FName MaskName; // 0x0
	EWeightMapTargetCommon CurrentTarget; // 0x8
	float MaxValue; // 0xc
	float MinValue; // 0x10
	TArray<float> Values; // 0x18
	bool bEnabled; // 0x28
};

struct FRBFParams {
	int32_t TargetDimensions; // 0x0
	ERBFSolverType SolverType; // 0x4
	float Radius; // 0x8
	ERBFFunctionType Function; // 0xc
	ERBFDistanceMethod DistanceMethod; // 0xd
	EBoneAxis TwistAxis; // 0xe
	float WeightThreshold; // 0x10
	ERBFNormalizeMethod NormalizeMethod; // 0x14
	FVector MedianReference; // 0x18
	float MedianMin; // 0x24
	float MedianMax; // 0x28
};

struct FStaticTerrainLayerWeightParameter : FStaticParameterBase {
	int32_t WeightmapIndex; // 0x24
	bool bWeightBasedBlend; // 0x28
};

struct FBravoHotelSpreadInfo {
	float ShotSpread; // 0x0
	float Base; // 0x4
	float AOSModifier; // 0x8
	float ADSModifier; // 0xc
	float FiringBase; // 0x10
	float CrouchModifier; // 0x14
	float ProneModifier; // 0x18
	float WalkModifier; // 0x1c
	float RunModifier; // 0x20
	float JumpModifier; // 0x24
	float MaxLimit; // 0x28
	char bUseShotPattern : 1; // 0x2c
	TArray<FVector> PatternDivideList; // 0x30
};

struct FAnalysisClientGameIllegalSuspectWeaponData {
	int32_t item_id; // 0x0
	FString item_name; // 0x8
	bool is_expert_weapon; // 0x18
	FString max_item_id; // 0x20
	int32_t grade; // 0x30
	int32_t enchant; // 0x34
	int32_t perk_id_2; // 0x38
	int32_t perk_id_3; // 0x3c
	int32_t perk_id_4; // 0x40
	int32_t perk_id_5; // 0x44
	FAnalysisPartsData parts_id; // 0x48
};

struct FC2G_MatchCancel {
	FString Type; // 0x0
	FC2G_MatchCancel_Data Data; // 0x10
};

struct FEngineServiceExecuteCommand {
	FString Command; // 0x0
	FString UserName; // 0x10
};

struct FOverlayItem {
	FTimespan StartTime; // 0x0
	FTimespan EndTime; // 0x8
	FString Text; // 0x10
	FVector2D Position; // 0x20
};

struct FAnalysisClientGameData {
	EClientGameContentsType contentType; // 0x0
	FString Base; // 0x8
	FString Msg; // 0x18
	FString nowDate; // 0x28
	FString ApiPhase; // 0x38
};

struct FG2C_PartyWhoReady_Data {
	FString UID; // 0x0
	bool is_ready; // 0x10
};

struct FRawAnimSequenceTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<FQuat> RotKeys; // 0x10
	TArray<FVector> ScaleKeys; // 0x20
};

struct FAttributesForEdge {
	FEdgeID EdgeID; // 0x0
	FMeshElementAttributeList EdgeAttributes; // 0x8
};

struct FRenderingPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FTViewTarget {
	AActor* Target; // 0x0
	FMinimalViewInfo POV; // 0x10
	APlayerState* PlayerState; // 0x660
};

struct FChangeEquipResult {
	bool Equip; // 0x0
	bool UnEquip; // 0x1
	FName ItemKey; // 0x4
};

struct FMagicLeapMeshBlockRequest {
	FGuid BlockID; // 0x0
	EMagicLeapMeshLOD LevelOfDetail; // 0x10
};

struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct {
	FVector Scale; // 0x8
	FFrameNumber Time; // 0x14
};

struct FChangeKeySlotInfo {
	bool IsChangedMainKey; // 0x0
	bool IsChangedSubKey; // 0x1
	UBravoHotelSettingSlotWidget* Slot; // 0x8
};

struct FNCPool {
	TArray<FNCPoolElement> FreeElements; // 0x0
	TArray<UNiagaraComponent*> InUseComponents_Auto; // 0x10
	TArray<UNiagaraComponent*> InUseComponents_Manual; // 0x20
};

struct FAnalysisClientGameIteractionData {
	FString Action; // 0x0
	FString Target; // 0x10
	int32_t loc_x; // 0x20
	int32_t loc_y; // 0x24
	int32_t loc_z; // 0x28
};

struct FVector2DParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x8
	FMovieSceneFloatChannel YCurve; // 0xa8
};

struct FAreaItemSpawnData {
	FVector2D CenterLocation; // 0x0
	float Radius; // 0x8
	TArray<FItemStandardGroupInfo> List; // 0x10
};

struct FAnalysisClientOutGameLobbyUIActionData {
	int32_t before_scene_type; // 0x0
	int32_t after_scene_type; // 0x4
};

struct FAnimNode_CurveSource : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
	FName SourceBinding; // 0x20
	float ALPHA; // 0x28
	TScriptInterface<ICurveSourceInterface> CurveSource; // 0x30
};

struct FRepHitResultInfo {
	AActor* DamageTarget; // 0x0
	UPrimitiveComponent* HitComponent; // 0x8
	int16_t BoneIndex; // 0x10
	int16_t ExtraIndex; // 0x12
	FVector_NetQuantize ImpactPoint; // 0x14
	float PenetrationDepth; // 0x20
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

struct FMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams {
	FFrameNumber SectionStartTime; // 0x30
	FFrameNumber SectionEndTime; // 0x34
};

struct FBoneSocketTarget {
	bool bUseSocket; // 0x0
	FBoneReference BoneReference; // 0x4
	FSocketReference SocketReference; // 0x20
};

struct FC2G_PartyAccept {
	FString Type; // 0x0
	FC2G_PartyAccept_Data Data; // 0x10
};

struct FSubmixEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FSVideoResolution {
	int32_t X_2_B2EB3ED14C87FB595290E6B07B273BAE; // 0x0
	int32_t Y_5_EBC461F945CA941644341489CB1BA22F; // 0x4
};

struct FExpressionInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FMyPluginStruct {
	FString TestString; // 0x0
};

struct FItemWorldSpawnInfo {
	FName ItemId; // 0x0
	int32_t Cnt; // 0x8
};

struct FAnchors {
	FVector2D Minimum; // 0x0
	FVector2D Maximum; // 0x8
};

struct FG2C_PartyWhoReady {
	FString Type; // 0x0
	FG2C_PartyWhoReady_Data Data; // 0x10
};

struct FBasedPosition {
	AActor* Base; // 0x0
	FVector Position; // 0x8
	FVector CachedBaseLocation; // 0x14
	FRotator CachedBaseRotation; // 0x20
	FVector CachedTransPosition; // 0x2c
};

struct FSpawnPerkData {
	ABravoHotelBuilding* Building; // 0x0
	int32_t Count; // 0x8
	FTransform Transform; // 0x10
	float SpawnDelay; // 0x40
	FSpawnPerkColorRate BookColorRate; // 0x44
};

struct FAnalysisClientGameBattleAttackerData {
	FString damage_type; // 0x0
	int32_t damage_type_index; // 0x10
	int32_t damage_weapon_id; // 0x14
	FString damage_weapon_name; // 0x18
	FString hit_bone; // 0x28
	int32_t Damage; // 0x38
	int32_t Distance; // 0x3c
	FAnalysisClientGameCharacterMiniData attacker_info; // 0x40
	FAnalysisClientGameCharacterData victim_info; // 0xd8
};

struct FCharacterDiedInfo {
	int32_t DiedUID; // 0x0
	int32_t KillerUID; // 0x4
	int32_t KnockUID; // 0x8
	FDamageEvent DiedDamageEvent; // 0x10
	float EventTime; // 0x20
};

struct FChunkPartData {
	FGuid Guid; // 0x0
	uint32_t Offset; // 0x10
	uint32_t Size; // 0x14
};

struct FBravoHotelConditionedAbilityState {
	UObject* OwnerObject; // 0x58
};

struct FRequest_Matching {
	char battle_mode; // 0x0
	FString map_name; // 0x8
};

struct FExcelBorder {
	FExcelBorderSide Start; // 0x0
	FExcelBorderSide End; // 0x24
	FExcelBorderSide Top; // 0x48
	FExcelBorderSide Bottom; // 0x6c
	FExcelBorderSide Horizontal; // 0x90
	FExcelBorderSide Vertical; // 0xb4
	FExcelBorderSide Diagonal; // 0xd8
	ExcelBorderDiagonalDirection DiagonalDirection; // 0xfc
};

struct FStatColorMapping {
	FString StatName; // 0x0
	TArray<FStatColorMapEntry> ColorMap; // 0x10
	char DisableBlend : 1; // 0x20
};

struct FRepCharacterAppearanceInfo {
	int32_t FaceID; // 0x0
	int32_t FaceColorID; // 0x4
	int32_t HairID; // 0x8
	int32_t HairColorID; // 0xc
	int8_t gender; // 0x10
};

struct FNiagaraEmitterScalabilityOverrides {
	TArray<FNiagaraEmitterScalabilityOverride> Overrides; // 0x0
};

struct FAudioQualitySettings {
	FText DisplayName; // 0x0
	int32_t MaxChannels; // 0x18
};

struct FLocalizedIconInfos {
	TArray<FLocalizedIconInfo> IconData; // 0x0
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

struct FFastArraySerializerItem {
	int32_t ReplicationID; // 0x0
	int32_t ReplicationKey; // 0x4
	int32_t MostRecentArrayReplicationKey; // 0x8
};

struct FLiveLinkCameraBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkCameraStaticData StaticData; // 0x8
	FLiveLinkCameraFrameData FrameData; // 0x30
};

struct FResponse_Login {
	uint32_t C; // 0x0
	FString E; // 0x8
	FResponse_Login_Rec D; // 0x18
};

struct FMovieSceneActorReferenceData : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneActorReferenceKey> KeyValues; // 0x40
};

struct FLevelStreamingWrapper {
	ULevelStreaming* StreamingLevel; // 0x0
};

struct FRootMotionSourceSettings {
	char Flags; // 0x0
};

struct FOutGamePCData {
	FString os_name; // 0x0
	FString cpu_name; // 0x10
	FString gpu_name; // 0x20
	FString mac_address; // 0x30
	FString ip_address; // 0x40
	FString install_storage_type; // 0x50
	float game_view_width; // 0x60
	float game_view_height; // 0x64
	FString Client_version; // 0x68
};

struct FCustomizedMaterialTexture2D {
	FName Name; // 0x0
	UTexture2D* Texture; // 0x8
};

struct FAnalysisClientOutGameLoginSucessData {
	FOutGamePCData pc_data; // 0x0
};

struct FG2C_PartyWhoOnline {
	FString Type; // 0x0
	FG2C_PartyWhoOnline_Data Data; // 0x10
};

struct FClothCollisionPrim_Box {
	FVector LocalPosition; // 0x0
	FQuat LocalRotation; // 0x10
	FVector HalfExtents; // 0x20
	int32_t BoneIndex; // 0x2c
};

struct FG2C_PartyInvite_Data {
	uint32_t C; // 0x0
	FString E; // 0x8
	FString toUid; // 0x18
};

struct FCustomizableObjectIdentifier {
	FString CustomizableObjectGroupName; // 0x0
	FString CustomizableObjectName; // 0x10
	FString Guid; // 0x20
};

struct FInterpCurveQuat {
	TArray<FInterpCurvePointQuat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FExcelNumberFormat {
	int32_t ID; // 0x0
	FString FormatString; // 0x8
};

struct FG2C_Notify_Alarm {
	FString Type; // 0x0
	FG2C_Notify_Alarm_Data Data; // 0x10
};

struct FItemCompareInfo {
	int32_t Value; // 0x0
	int32_t CompareValue; // 0x4
	ECompareItemType CompareType; // 0x8
	FString CompareString; // 0x10
};

struct FLuminComponentElement {
	FString Name; // 0x0
	FString VisibleName; // 0x10
	FString ExecutableName; // 0x20
	ELuminComponentType ComponentType; // 0x30
	TArray<FLuminComponentSubElement> ExtraComponentSubElements; // 0x38
};

struct FMagicLeapMeshBlockInfo {
	FGuid BlockID; // 0x0
	FVector BlockPosition; // 0x10
	FRotator BlockOrientation; // 0x1c
	FVector BlockDimensions; // 0x28
	FTimespan Timestamp; // 0x38
	EMagicLeapMeshState BlockState; // 0x40
};

struct FPartyInfo {
	FString PartyID; // 0x0
	FString uidBoss; // 0x10
	TArray<FPartyUser> partyUserList; // 0x20
	FSelectedMapInfo SelectedMapInfo; // 0x30
};

struct FAutoCompleteNode {
	int32_t IndexChar; // 0x0
	TArray<int32_t> AutoCompleteListIndices; // 0x8
};

struct FStreamingLevelsToConsider {
	TArray<FLevelStreamingWrapper> StreamingLevels; // 0x0
};

struct FG2C_MatchRequest {
	FString Type; // 0x0
	FG2C_MatchRequest_Data Data; // 0x10
};

struct FSubmixEffectReverbSettings {
	float Density; // 0x0
	float Diffusion; // 0x4
	float Gain; // 0x8
	float GainHF; // 0xc
	float DecayTime; // 0x10
	float DecayHFRatio; // 0x14
	float ReflectionsGain; // 0x18
	float ReflectionsDelay; // 0x1c
	float LateGain; // 0x20
	float LateDelay; // 0x24
	float AirAbsorptionGainHF; // 0x28
	float WetLevel; // 0x2c
	float DryLevel; // 0x30
};

struct FClothCollisionPrim_Sphere {
	int32_t BoneIndex; // 0x0
	float Radius; // 0x4
	FVector LocalPosition; // 0x8
};

struct FPCLooks {
	uint32_t gender; // 0x0
	uint32_t face; // 0x4
	uint32_t face_color; // 0x8
	uint32_t hair; // 0xc
	uint32_t hair_color; // 0x10
	uint32_t makeup; // 0x14
};

struct FChaosBreakingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinRadius; // 0x4
	float MinSpeed; // 0x8
	float MinMass; // 0xc
	float MaxDistance; // 0x10
	EChaosBreakingSortMethod SortMethod; // 0x14
};

struct FMovieScenePropertySectionData {
	FName PropertyName; // 0x0
	FString PropertyPath; // 0x8
	FName FunctionName; // 0x18
	FName NotifyFunctionName; // 0x20
};

struct FMatrix {
	FPlane XPlane; // 0x0
	FPlane YPlane; // 0x10
	FPlane ZPlane; // 0x20
	FPlane WPlane; // 0x30
};

struct FMachinePayloadData {
	TArray<UStateAction*> Actions; // 0x0
};

struct FVehicleInputRate {
	float RiseRate; // 0x0
	float FallRate; // 0x4
};

struct FHyperlinkStyle : FSlateWidgetStyle {
	FButtonStyle UnderlineStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x280
	FMargin Padding; // 0x4e8
};

struct FSeasonTierElement {
	int32_t TierID; // 0x0
	FText DisplayName; // 0x8
	TSoftObjectPtr<UObject> UMGIcon; // 0x20
	TSoftObjectPtr<UObject> CohIcon; // 0x48
	TSoftObjectPtr<UObject> SmallIcon; // 0x70
};

struct FBoostTypeElement {
	float StepStart; // 0x0
	float BoostDecreasePerSec; // 0x4
	bool bShowHealUI; // 0x8
	bool bShowSpeedUI; // 0x9
	TArray<FName> BuffKeys; // 0x10
};

struct FItemWeapon : FTableRowBase {
	FName WeaponName; // 0x8
	int32_t Rarity; // 0x10
	int32_t Level; // 0x14
	int32_t MaxLevel; // 0x18
	int32_t SupplyCost; // 0x1c
	int32_t LevelUpgradeCost; // 0x20
	int32_t LevelUpgradeGroupItemID; // 0x24
	int32_t RepairGroupItemID; // 0x28
	TArray<FName> RepairFactor; // 0x30
	FName WeaponFatigueKey; // 0x40
	int32_t FatigueTableID; // 0x48
	int32_t DurabilityMax; // 0x4c
	int32_t DurabilityRate; // 0x50
	float Damage; // 0x54
	float VertRecoil; // 0x58
	float HorRecoil; // 0x5c
	float Spread; // 0x60
	int32_t MagSize; // 0x64
	int32_t ItemId; // 0x68
	FName ItemName; // 0x6c
	FText DisplayName; // 0x78
	FText Description; // 0x90
	TSoftObjectPtr<UPaperSprite> SlotIconTexture_PaperSprite; // 0xa8
	TSoftObjectPtr<UPaperSprite> DragIconTexture_PaperSprite; // 0xd0
	UArmoryDataAsset* DataAsset; // 0xf8
	FText DisplayWeaponType; // 0x100
	float DamageMod; // 0x118
	float VertRecoilMod; // 0x11c
	float HorRecoilMod; // 0x120
	float SpreadMod; // 0x124
	float MagSizeMod; // 0x128
};

struct FMovieSceneAkAudioEventTemplate : FMovieSceneEvalTemplate {
	UMovieSceneAkAudioEventSection* Section; // 0x20
};

struct FDataEventClientGameRevival : FDataEventBase {
	APlayerState* RevivedPlayerState; // 0x60
	APlayerState* SaviorPlayerState; // 0x68
};

struct FRequest_LoginAccount {
	FString Client_version; // 0x0
	int32_t os; // 0x10
	FString account; // 0x18
	bool allowed_only_if_exists; // 0x28
	FString entry_code; // 0x30
	FString hardware_info; // 0x40
	FString ipn_code; // 0x50
};

struct FInputScaleBias {
	float Scale; // 0x0
	float Bias; // 0x4
};

struct FLiveLinkRefSkeleton {
	TArray<FName> BoneNames; // 0x0
	TArray<int32_t> BoneParents; // 0x10
};

struct FMovieSceneEvent {
	FMovieSceneEventPtrs Ptrs; // 0x0
};

struct FAnimNode_SkeletalControlBase : FAnimNode_Base {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int32_t LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float ALPHA; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x88
};

struct FParticleCurvePair {
	FString CurveName; // 0x0
	UObject* CurveObject; // 0x10
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

struct FBackupSlotData {
	UBravoHotelSettingSlotWidget* Slot; // 0x0
	float OldValue; // 0x8
};

struct FG2C_PartyWhoPing {
	FString Type; // 0x0
	FG2C_PartyWhoPing_Data Data; // 0x10
};

struct FTTLinearColorTrack : FTTPropertyTrack {
	UCurveLinearColor* CurveLinearColor; // 0x20
};

struct FEnvDirection {
	UEnvQueryContext* LineFrom; // 0x0
	UEnvQueryContext* LineTo; // 0x8
	UEnvQueryContext* Rotation; // 0x10
	EEnvDirection DirMode; // 0x18
};

struct FGameplayTag {
	FName TagName; // 0x0
};

struct FGridBlendSample {
	FEditorElement GridElement; // 0x0
	float BlendWeight; // 0x18
};

struct FAnimationActiveTransitionEntry {
	UBlendProfile* BlendProfile; // 0xb8
};

struct FFractureMaterial {
	FVector2D UVScale; // 0x0
	FVector2D UVOffset; // 0x8
	FVector Tangent; // 0x10
	float UAngle; // 0x1c
	int32_t InteriorElementIndex; // 0x20
};

struct FResponse_PlayerInfo {
	uint32_t C; // 0x0
	FString E; // 0x8
	FResponse_PlayerInfo_Rec D; // 0x18
};

struct FSeasonEndRewardElement {
	int32_t Point; // 0x0
	int32_t Rank; // 0x4
	TArray<FItemCountData> SeasonEndRewards; // 0x8
	int32_t index_01; // 0x18
	int32_t count_01; // 0x1c
	int32_t index_02; // 0x20
	int32_t count_02; // 0x24
	int32_t index_03; // 0x28
	int32_t count_03; // 0x2c
	int32_t index_04; // 0x30
	int32_t count_04; // 0x34
	int32_t index_05; // 0x38
	int32_t count_05; // 0x3c
	int32_t index_06; // 0x40
	int32_t count_06; // 0x44
	int32_t index_07; // 0x48
	int32_t count_07; // 0x4c
	int32_t index_08; // 0x50
	int32_t count_08; // 0x54
	int32_t index_09; // 0x58
	int32_t count_09; // 0x5c
	int32_t Index_11; // 0x60
	int32_t Count_11; // 0x64
};

struct FGameSettingCQRElement {
	FString cqr; // 0x0
	int32_t Value; // 0x10
};

struct FGraphReference {
	UEdGraph* MacroGraph; // 0x0
	UBlueprint* GraphBlueprint; // 0x8
	FGuid GraphGuid; // 0x10
};

struct FLayerActorStats {
	UObject* Type; // 0x0
	int32_t Total; // 0x8
};

struct FTeamColorRow : FTableRowBase {
	FText Code; // 0x8
	int32_t R; // 0x20
	int32_t G; // 0x24
	int32_t B; // 0x28
};

struct FProfileParameterDat {
	FString ProfileName; // 0x0
	TArray<FCustomizableObjectBoolParameterValue> BoolParameters; // 0x10
	TArray<FCustomizableObjectIntParameterValue> IntParameters; // 0x20
	TArray<FCustomizableObjectFloatParameterValue> FloatParameters; // 0x30
	TArray<FCustomizableObjectTextureParameterValue> TextureParameters; // 0x40
	TArray<FCustomizableObjectVectorParameterValue> VectorParameters; // 0x50
	TArray<FCustomizableObjectProjectorParameterValue> ProjectorParameters; // 0x60
};

struct FResponse_Matching {
	uint32_t C; // 0x0
	FString E; // 0x8
	FResponse_Matching_Rec D; // 0x18
};

struct FSkeletalMeshSamplingBuiltData {
	TArray<FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData; // 0x0
	TArray<FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData; // 0x10
};

struct FSplineMeshInstanceData : FSceneComponentInstanceData {
	FVector StartPos; // 0xa8
	FVector EndPos; // 0xb4
	FVector StartTangent; // 0xc0
	FVector EndTangent; // 0xcc
};

struct FAnalysisDataBase {
	EContentsType contentType; // 0x0
	FAnalysisDataBaseHead Base; // 0x8
	FString Msg; // 0xa0
	FString nowDate; // 0xb0
	FString ApiPhase; // 0xc0
};

struct FAnalysisClientGameDiedDeathData {
	FString damage_type; // 0x0
	int32_t damage_type_index; // 0x10
	int32_t damage_weapon_id; // 0x14
	FString damage_weapon_name; // 0x18
	FString hit_bone; // 0x28
	int32_t Damage; // 0x38
	int32_t Distance; // 0x3c
	int32_t team_kill; // 0x40
	FAnalysisClientGameCharacterData knockdown_attacker_info; // 0x48
	FAnalysisClientGameCharacterData killer_info; // 0x118
	FAnalysisClientGameCharacterData attacker_info; // 0x1e8
	FAnalysisClientGameDiedVictimCharacterMiniData victim_info; // 0x2b8
};

struct FInt32Range {
	FInt32RangeBound LowerBound; // 0x0
	FInt32RangeBound UpperBound; // 0x8
};

struct FRepVehicleControlStates {
	bool bHasLeftSteeringInput; // 0x0
	bool bHasRightSteeringInput; // 0x1
	bool bHasThrottleInput; // 0x2
	bool bHasBrakeInput; // 0x3
	bool bIsIdleBraking; // 0x4
	bool bHasHandbrakeInput; // 0x5
	bool bUsingAirControlInput; // 0x6
	int8_t CurrentGear; // 0x7
};

struct FResponse_WeaponList {
	uint32_t C; // 0x0
	FString E; // 0x8
	FResponse_WeaponListArray D; // 0x18
};

struct FReplayReportVictimInfo {
	FString VictimNickName; // 0x0
	FString DamageType; // 0x10
	FString HitBone; // 0x20
};

struct FItemRecipeTreeData : FTableRowBase {
	FName CurrentRecipe; // 0x8
	FName CurrentItem; // 0x10
	int32_t Count; // 0x18
	FName RepairRecipe; // 0x1c
};

struct FGenericTeamId {
	char TeamID; // 0x0
};

struct FMovieSceneByteChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	char DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<char> Values; // 0x20
	UEnum* Enum; // 0x30
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

struct FLiveLinkFrameData {
	TArray<FTransform> Transforms; // 0x0
	TArray<FLiveLinkCurveElement> CurveElements; // 0x10
	FLiveLinkWorldTime WorldTime; // 0x20
	FLiveLinkMetaData MetaData; // 0x30
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

struct FBPVariableMetaDataEntry {
	FName DataKey; // 0x0
	FString DataValue; // 0x8
};

struct FWheelInfo {
	int32_t Index; // 0x0
	bool Show; // 0x4
};

struct FAxis {
	FVector Axis; // 0x0
	bool bInLocalSpace; // 0xc
};

struct FPerBoneBlendWeights {
	TArray<FPerBoneBlendWeight> BoneBlendWeights; // 0x0
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
	TWeakObjectPtr<UPhysicalMaterial> PhysMaterial; // 0x60
	TWeakObjectPtr<AActor> Actor; // 0x68
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x70
	FName BoneName; // 0x78
	FName MyBoneName; // 0x80
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

struct FJsonObjectWrapper {
	FString JsonString; // 0x0
};

struct FCurrencyData : FTableRowBase {
	int32_t ID; // 0x8
	FText DisplayName; // 0x10
	FText Description; // 0x28
	TSoftObjectPtr<UTexture2D> SlotIconTexture; // 0x40
	int32_t Limit; // 0x68
	int32_t Price; // 0x6c
};

struct FItemSpawingInfoTableRow : FTableRowBase {
	FDataTableRowHandle Item; // 0x8
	int32_t DefaultSpawnItemQuantiy; // 0x18
	int32_t NumSpawnsMin; // 0x1c
	int32_t NumSpawnsMax; // 0x20
	bool bHasFollwingItem; // 0x24
	FDataTableRowHandle FollowingItem; // 0x28
	int32_t DefaultFollowingItemSpawnQuantiy; // 0x38
	int32_t NumFollowingSpawnsMin; // 0x3c
	int32_t NumFollowingSpawnsMax; // 0x40
};

struct FMagicLeapPolygon {
	TArray<FVector> Vertices; // 0x0
};

struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneObjectPathChannel ObjectChannel; // 0x48
};

struct FCustomFieldData {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FSKeyMapping {
	FString Name_47_08EFD38348F7DCF7A978B48A231BE99A; // 0x0
	float Scale_34_289CBB724D0D417AFBCABCB49A6C3F69; // 0x10
	bool CantBeNone_117_2C54633F41F83AFF31CE7DB0A0248175; // 0x14
	TArray<FSKeyInput> PrimaryCombination_108_2AC9E34F451AA6057A0AA4BC145374A3; // 0x18
	TArray<FSKeyInput> SecondaryCombination_109_A8394862473F9E9DAA35718F45B72892; // 0x28
};

struct FAirCraftBoardingInfo {
	bool IsDescent; // 0x0
	bool IsMyTeam; // 0x1
	int32_t PlayerUniqueID; // 0x4
	char AirCraftID; // 0x8
	char SeatID; // 0x9
};

struct FItemAppearanceData : FTableRowBase {
	int32_t ID; // 0x8
	FText DisplayName; // 0x10
	FText Description; // 0x28
	EWearableItemType Slot; // 0x40
	TArray<FItemAppearanceColorData> Color; // 0x48
};

struct FBravoHotelGameData {
	FBravoHotelMapTableRow MapData; // 0x0
	FBravoHotelPlayZoneData PlayZoneBaseData; // 0x188
	TArray<FBattleRoyalPhaseInfo> PlayZonePhaseList; // 0x310
	UBravoHotelWeightMapData* WeightMapInfo; // 0x320
};

struct FPlanarLimit : FCollisionLimitBase {
	FPlane Plane; // 0x50
};

struct FQuestTaskElement {
	EQuestTaskType QuestTaskType; // 0x0
	int32_t GoalValue; // 0x4
	int32_t ProgressRate; // 0x8
	FText TaskTitle; // 0x10
	FText TaskDesc; // 0x28
	FQuestTaskCondition Condition; // 0x40
};

struct FMovieSceneBinding {
	FGuid ObjectGuid; // 0x0
	FString BindingName; // 0x10
	TArray<UMovieSceneTrack*> Tracks; // 0x20
};

struct FMovieSceneEventPayloadVariable {
	FString Value; // 0x0
};

struct FNiagaraVariable : FNiagaraVariableBase {
	TArray<char> VarData; // 0x18
};

struct FResponse_Matching_Rec {
	FString ipaddr; // 0x0
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

struct FCustomizableObjectProjector {
	FVector Position; // 0x0
	FVector Direction; // 0xc
	FVector Up; // 0x18
	FVector Scale; // 0x24
	ECustomizableObjectProjectorType ProjectionType; // 0x30
	float Angle; // 0x34
};

struct FAnimNode_Slot : FAnimNode_Base {
	FPoseLink Source; // 0x10
	FName SlotName; // 0x20
	bool bAlwaysUpdateSourcePose; // 0x28
};

struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer {
	float NormalizedTime; // 0xe0
};

struct FNiagaraRandInfo {
	int32_t Seed1; // 0x0
	int32_t Seed2; // 0x4
	int32_t Seed3; // 0x8
};

struct FExcelCellRangeReference {
	FExcelCellReference TopLeft; // 0x0
	FExcelCellReference BottomRight; // 0x8
};

struct FCoh_ForceMatching {
	FString HostIP; // 0x0
	int32_t Port; // 0x10
	FString Token; // 0x18
	FString Key; // 0x28
	int32_t MatchNum; // 0x38
	FString Map; // 0x40
	bool SpectatorOnly; // 0x50
	FString AddOptions; // 0x58
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
	int32_t DisableRootMotionCount; // 0x188
};

struct FDepthFieldGlowInfo {
	char bEnableGlow : 1; // 0x0
	FLinearColor GlowColor; // 0x4
	FVector2D GlowOuterRadius; // 0x14
	FVector2D GlowInnerRadius; // 0x1c
};

struct FBravoHotelDepthOfFieldDetailInfo {
	bool bUseDepthOfField; // 0x0
	float FocalDistance; // 0x4
	float CircleDOF_Fstop; // 0x8
};

struct FResponse_FriendInfo_Rec {
	FString UID; // 0x0
	FString player_name; // 0x10
	FString status; // 0x20
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
	char bFilterLowSpanSequences : 1; // 0x3c
	char bFilterLowSpanFromTileCache : 1; // 0x3c
	char bFixedTilePoolSize : 1; // 0x3c
};

struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase {
	int32_t ActiveChildIndex; // 0x98
};

struct FRigConfiguration {
	URig* Rig; // 0x8
	TArray<FNameMapping> BoneMappingTable; // 0x10
};

struct FNavigationSegmentLink : FNavigationLinkBase {
	FVector LeftStart; // 0x30
	FVector LeftEnd; // 0x3c
	FVector RightStart; // 0x48
	FVector RightEnd; // 0x54
};

struct FMaterialFunctionInfo {
	FGuid StateID; // 0x0
	UMaterialFunctionInterface* Function; // 0x10
};

struct FParticleRandomSeedInfo {
	FName ParameterName; // 0x0
	char bGetSeedFromInstance : 1; // 0x8
	char bInstanceSeedIsIndex : 1; // 0x8
	char bResetSeedOnEmitterLooping : 1; // 0x8
	char bRandomlySelectSeedArray : 1; // 0x8
	TArray<int32_t> RandomSeeds; // 0x10
};

struct FConstraint {
	FBoneReference TargetBone; // 0x0
	EConstraintOffsetOption OffsetOption; // 0x10
	ETransformConstraintType TransformType; // 0x11
	FFilterOptionPerAxis PerAxis; // 0x12
};

struct FAkMidiGeneric : FAkMidiEventBase {
	char Param1; // 0x2
	char Param2; // 0x3
};

struct FAnimTickRecord {
	UAnimationAsset* SourceAsset; // 0x0
};

struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel FloatChannel; // 0x48
};

struct FPurchaseInfo {
	FString Identifier; // 0x0
	FString DisplayName; // 0x10
	FString DisplayDescription; // 0x20
	FString DisplayPrice; // 0x30
};

struct FSettingSlotListInfo {
	FText Title; // 0x0
	float SettingValue; // 0x18
};

struct FAnalysisClientSupplyBoxChangeData {
	int32_t current_gold; // 0x0
	int32_t setting_gold; // 0x4
	FAnalysisClientSupplyItemInfoData supply_item_info; // 0x8
};

struct FRequest_PlayerName {
	FString player_name; // 0x0
};

struct FStaticParameterSet {
	TArray<FStaticSwitchParameter> StaticSwitchParameters; // 0x0
	TArray<FStaticComponentMaskParameter> StaticComponentMaskParameters; // 0x10
	TArray<FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters; // 0x20
	TArray<FStaticMaterialLayersParameter> MaterialLayersParameters; // 0x30
};

struct FMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams {
	FFrameNumber SectionStartTime; // 0x40
	FFrameNumber SectionEndTime; // 0x44
};

struct FCoh_Query {
	FName TableName; // 0x0
	bool AllRows; // 0x8
	bool ArrayType; // 0x9
	bool LocalizationKey; // 0xa
	TArray<FName> RowNames; // 0x10
};

struct FKTaperedCapsuleElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius0; // 0x48
	float Radius1; // 0x4c
	float Length; // 0x50
};

struct FResponse_CheckPlayerName_Rec {
	bool is_available; // 0x0
};

struct FCustomizableObjectIdPair {
	FString CustomizableObjectGroupName; // 0x0
	FString CustomizableObjectName; // 0x10
};

struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
	FRotator Rotation; // 0x14
	FVector Scale; // 0x20
	FFrameNumber Time; // 0x2c
};

struct FUniqueNetIdRepl : FUniqueNetIdWrapper {
	TArray<char> ReplicationBytes; // 0x18
};

struct FRequestMessage : FTableRowBase {
	FText RequestMessage; // 0x8
	bool IsAmmoRequest; // 0x20
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

struct FStructSerializerTestStruct {
	FStructSerializerNumericTestStruct Numerics; // 0x0
	FStructSerializerBooleanTestStruct Booleans; // 0x30
	FStructSerializerObjectTestStruct Objects; // 0x38
	FStructSerializerBuiltinTestStruct Builtins; // 0xe0
	FStructSerializerArrayTestStruct Arrays; // 0x170
	FStructSerializerMapTestStruct Maps; // 0x1d0
	FStructSerializerSetTestStruct Sets; // 0x310
};

struct FAkXboxOneApuHeapInitializationSettings {
	uint32_t CachedSize; // 0x0
	uint32_t NonCachedSize; // 0x4
};

struct FRootMotionFinishVelocitySettings {
	ERootMotionFinishVelocityMode Mode; // 0x0
	FVector SetVelocity; // 0x4
	float ClampVelocity; // 0x10
};

struct FAreaSpawnDetailInfo {
	TArray<UBravoHotelItemSpawnBoxComponent*> ItemBoxList; // 0x0
};

struct FRepVehicleMovement : FRepMovement {
	char bHasLinearVelocity : 1; // 0x34
	char bHasAngularVelocity : 1; // 0x34
};

struct FAnimNode_StateMachine : FAnimNode_Base {
	int32_t StateMachineIndexInClass; // 0x10
	int32_t MaxTransitionsPerFrame; // 0x14
	bool bSkipFirstUpdateTransition; // 0x18
	bool bReinitializeOnBecomingRelevant; // 0x19
};

struct FAkAndroidAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x38
	bool RoundFrameSizeToHardwareSize; // 0x3c
};

struct FClothCollisionPrim_SphereConnection {
	int32_t SphereIndices[0x2]; // 0x0
};

struct FChaosTrailingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
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

struct FAnalysisClientGameEnegyBarItemUseData {
	int32_t item_id; // 0x0
	FString item_name; // 0x8
	int32_t current_buff_id; // 0x18
	int32_t current_buff_time; // 0x1c
	int32_t to_be_buff_id; // 0x20
	int32_t to_be_buff_time; // 0x24
	int32_t stack_cnt; // 0x28
};

struct FLiveLinkLightBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkLightStaticData StaticData; // 0x8
	FLiveLinkLightFrameData FrameData; // 0x30
};

struct FSkeletalMeshSamplingRegionBoneFilter {
	FName BoneName; // 0x0
	char bIncludeOrExclude : 1; // 0x8
	char bApplyToChildren : 1; // 0x8
};

struct FCrosshairTextureInfo {
	TSoftObjectPtr<UPaperSprite> CenterTexture; // 0x0
	TSoftObjectPtr<UPaperSprite> LeftTexture; // 0x28
	TSoftObjectPtr<UPaperSprite> TopTexture; // 0x50
	TSoftObjectPtr<UPaperSprite> RightTexture; // 0x78
	TSoftObjectPtr<UPaperSprite> BottomTexture; // 0xa0
	FLinearColor CenterColor; // 0xc8
	FLinearColor LeftColor; // 0xd8
	FLinearColor TopColor; // 0xe8
	FLinearColor RightColor; // 0xf8
	FLinearColor BottomColor; // 0x108
	FVector2D CenterDeltaPosition; // 0x118
	FVector2D LeftDeltaPosition; // 0x120
	FVector2D TopDeltaPosition; // 0x128
	FVector2D RightDeltaPosition; // 0x130
	FVector2D BottomDeltaPosition; // 0x138
	float TextureScale; // 0x140
};

struct FBP-CoherentTextureStructure {
	TArray<UTexture2D*> Res_6_7655B472457462A8D53C148A56E4FAB8; // 0x0
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

struct FClothConstraintSetup_Legacy {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
};

struct FEnvQueryRequest {
	UEnvQuery* QueryTemplate; // 0x0
	UObject* Owner; // 0x8
	UWorld* World; // 0x10
};

struct FNamedCurveValue {
	FName Name; // 0x0
	float Value; // 0x8
};

struct FReplayDiedKillerInfo {
	FString UserName; // 0x0
	int32_t UniquePlayerId; // 0x10
	bool IsHeadShot; // 0x14
	int32_t WeaponIndex; // 0x18
	int32_t DamageTypeID; // 0x1c
};

struct FLocalizedIconInfo {
	FString LanguageCode; // 0x0
	FDirectoryPath IconModelPath; // 0x10
	FDirectoryPath IconPortalPath; // 0x20
};

struct FDatasmithStaticMeshImportOptions {
	EDatasmithImportLightmapMin MinLightmapResolution; // 0x0
	EDatasmithImportLightmapMax MaxLightmapResolution; // 0x1
	bool bGenerateLightmapUVs; // 0x2
	bool bRemoveDegenerates; // 0x3
};

struct FRegionConfigData {
	FString region; // 0x0
	bool use_close_match_making_tag; // 0x10
	FString ec2_endpoint_url; // 0x18
	TArray<FString> match_making_tag_list; // 0x28
};

struct FMovieSceneSequenceHierarchyNode {
	FMovieSceneSequenceID ParentID; // 0x0
	TArray<FMovieSceneSequenceID> Children; // 0x8
};

struct FNoticeData : FTableRowBase {
	FText Notice_String; // 0x8
	FString AdminDesc; // 0x20
};

struct FQuestTaskInfo {
	FName QuestKey; // 0x0
	int32_t Index; // 0x8
	EQuestState State; // 0xc
	int32_t CurrentValue; // 0x10
};

struct FMovieSceneTrackEvalOptions {
	char bCanEvaluateNearestSection : 1; // 0x0
	char bEvalNearestSection : 1; // 0x0
	char bEvaluateInPreroll : 1; // 0x0
	char bEvaluateInPostroll : 1; // 0x0
	char bEvaluateNearestSection : 1; // 0x0
};

struct FIntegralCurve : FIndexedCurve {
	TArray<FIntegralKey> Keys; // 0x68
	int32_t DefaultValue; // 0x78
	bool bUseDefaultValueBeforeFirstKey; // 0x7c
};

struct FInstancedStaticMeshLightMapInstanceData {
	FTransform Transform; // 0x0
	TArray<FGuid> MapBuildDataIds; // 0x30
};

struct FResponse_FriendPendingList {
	uint32_t C; // 0x0
	FString E; // 0x8
	FResponse_FriendPendingListArray D; // 0x18
};

struct FChildActorComponentInstanceData : FSceneComponentInstanceData {
	AActor* ChildActorClass; // 0xa8
	FName ChildActorName; // 0xb0
	TArray<FChildActorAttachedActorInfo> AttachedActors; // 0xb8
};

struct FNiagaraInputConditionMetadata {
	FName InputName; // 0x0
	TArray<FString> TargetValues; // 0x8
};

struct FCrosshairData {
	UTexture2D* Texture; // 0x0
	FVector2D BasePosition; // 0x8
	FVector2D BaseSize; // 0x10
	FVector2D BeginUV; // 0x18
	FVector2D EndUV; // 0x20
	FLinearColor TintColor; // 0x28
	float SpreadScaleFactor; // 0x38
};

struct FNiagaraTypeDefinition {
	UObject* ClassStructOrEnum; // 0x0
	uint16_t UnderlyingType; // 0x8
};

struct FNiagaraSystemScalabilityOverrides {
	TArray<FNiagaraSystemScalabilityOverride> Overrides; // 0x0
};

struct FMovieSceneExpansionState {
	bool bExpanded; // 0x0
};

struct FConstraintDescriptionEx {
	FFilterOptionPerAxis AxesFilterOption; // 0x8
};

struct FMaterialCachedParameterEntry {
	TArray<uint64_t> NameHashes; // 0x0
	TArray<FMaterialParameterInfo> ParameterInfos; // 0x10
	TArray<FGuid> ExpressionGuids; // 0x20
	TArray<bool> Overrides; // 0x30
};

struct FPrimitiveMaterialRef {
	UPrimitiveComponent* Primitive; // 0x0
	UDecalComponent* Decal; // 0x8
	int32_t ElementIndex; // 0x10
};

struct FRepSimulatedHittedDamage {
	TArray<FRepHitDamageInfo> DamageInfoList; // 0x0
};

struct FItemGroup : FTableRowBase {
	TArray<FItemGroupInfo> Items; // 0x8
};

struct FMovieSceneTrackIdentifier {
	uint32_t Value; // 0x0
};

struct FWidgetTransform {
	FVector2D Translation; // 0x0
	FVector2D Scale; // 0x8
	FVector2D Shear; // 0x10
	float Angle; // 0x18
};

struct FBehaviorInfo {
	UInputBehavior* Behavior; // 0x0
};

struct FInterpCurvePointVector {
	float InVal; // 0x0
	FVector OutVal; // 0x4
	FVector ArriveTangent; // 0x10
	FVector LeaveTangent; // 0x1c
	EInterpCurveMode InterpMode; // 0x28
};

struct FMovieSceneEvaluationTrack {
	FGuid ObjectBindingID; // 0x0
	uint16_t EvaluationPriority; // 0x10
	EEvaluationMethod EvaluationMethod; // 0x12
	FMovieSceneEvaluationTrackSegments Segments; // 0x18
	UMovieSceneTrack* SourceTrack; // 0x38
	FSectionEvaluationDataTree EvaluationTree; // 0x40
	TArray<FMovieSceneEvalTemplatePtr> ChildTemplates; // 0xa0
	FMovieSceneTrackImplementationPtr TrackTemplate; // 0xb0
	FName EvaluationGroup; // 0xe8
	char bEvaluateInPreroll : 1; // 0xf0
	char bEvaluateInPostroll : 1; // 0xf0
	char bTearDownPriority : 1; // 0xf0
};

struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	FMovieSceneCameraAnimSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
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

struct FBranchingPoint : FAnimLinkableElement {
	FName EventName; // 0x30
	float DisplayTime; // 0x38
	float TriggerTimeOffset; // 0x3c
};

struct FMagicLeapSharedWorldPinData {
	FGuid PinID; // 0x0
	FMagicLeapARPinState PinState; // 0x10
};

struct FAnimationState : FAnimationStateBase {
	TArray<FAnimationTransitionRule> Transitions; // 0x8
	int32_t StateRootNodeIndex; // 0x18
	int32_t StartNotify; // 0x1c
	int32_t EndNotify; // 0x20
	int32_t FullyBlendedNotify; // 0x24
};

struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase {
	FBoneReference TargetBone; // 0xc8
	FBoneReference SourceBone; // 0xd8
	float Multiplier; // 0xe8
	EBoneAxis RotationAxisToRefer; // 0xec
	bool bIsAdditive; // 0xed
};

struct FSpriteCategoryInfo {
	FName Category; // 0x0
	FText DisplayName; // 0x8
	FText Description; // 0x20
};

struct FAreaSpawnRateInfo {
	FLocalSpawnRate Data; // 0x0
	TArray<UBravoHotelItemStandardGroupBoxComponent*> StandardGroupList; // 0x28
	TMap<FName, FAreaSpawnDetailInfo> AreaList; // 0x38
};

struct FMovieSceneEvaluationField {
	TArray<FMovieSceneFrameRange> Ranges; // 0x0
	TArray<FMovieSceneEvaluationGroup> Groups; // 0x10
	TArray<FMovieSceneEvaluationMetaData> MetaData; // 0x20
};

struct FTypefaceEntry {
	FName Name; // 0x0
	FFontData Font; // 0x8
};

struct FSignificanceCriteriaSetup {
	bool bCheckVisibility; // 0x0
	bool bUseAsScreenSize; // 0x1
	TArray<float> Criterias; // 0x8
	TArray<float> CriteriaWhenVisible; // 0x18
};

struct FAnimParentNodeAssetOverride {
	UAnimationAsset* NewAsset; // 0x0
	FGuid ParentNodeGuid; // 0x8
};

struct FInputActionKeyMapping {
	FName ActionName; // 0x0
	char bShift : 1; // 0x8
	char bCtrl : 1; // 0x8
	char bAlt : 1; // 0x8
	char bCmd : 1; // 0x8
	FKey Key; // 0x10
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

struct FAnimSegment {
	UAnimSequenceBase* AnimReference; // 0x0
	float StartPos; // 0x8
	float AnimStartTime; // 0xc
	float AnimEndTime; // 0x10
	float AnimPlayRate; // 0x14
	int32_t LoopingCount; // 0x18
};

struct FPoseSnapshot {
	TArray<FTransform> LocalTransforms; // 0x0
	TArray<FName> BoneNames; // 0x10
	FName SkeletalMeshName; // 0x20
	FName SnapshotName; // 0x28
	bool bIsValid; // 0x30
};

struct FGameplayTagTableRow : FTableRowBase {
	FName Tag; // 0x8
	FString DevComment; // 0x10
};

struct FDiedDamagePlayerInfo_Player {
	int32_t Health; // 0x0
	int32_t MaxHealth; // 0x4
	FEquippedItemInfo HelmetInfo; // 0x8
	FEquippedItemInfo ArmorInfo; // 0x14
	FEquippedItemInfo BagInfo; // 0x20
};

struct FLiveLinkBasicBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkBaseStaticData StaticData; // 0x8
	FLiveLinkBaseFrameData FrameData; // 0x18
};

struct FMagicLeapSharedWorldAlignmentTransforms {
	TArray<FTransform> AlignmentTransforms; // 0x0
};

struct FPluginRedirect {
	FString OldPluginName; // 0x0
	FString NewPluginName; // 0x10
};

struct FSlateSound {
	UObject* ResourceObject; // 0x0
};

struct FAnimPhysSphericalLimit {
	FBoneReference DrivingBone; // 0x0
	FVector SphereLocalOffset; // 0x10
	float LimitRadius; // 0x1c
	ESphericalLimitType LimitType; // 0x20
};

struct FBravoHotelDeviation {
	float Base; // 0x0
	float BaseAOS; // 0x4
	float BaseADS; // 0x8
	float RecoilGain; // 0xc
	float RecoilGainAOS; // 0x10
	float RecoilGainADS; // 0x14
	float MaxLimit; // 0x18
	float MoveModifierLimit; // 0x1c
	float MoveVelocityClamp; // 0x20
	float CrouchModifier; // 0x24
	float ProneModifier; // 0x28
};

struct FGameSettingClassChangeInfoElement {
	FString battle_mode; // 0x0
	int32_t class_select_mode_price; // 0x10
	int32_t random_change_refresh_max_count; // 0x14
	TArray<int32_t> random_change_price; // 0x18
	int32_t scope_select_refresh_max_count; // 0x28
	TArray<int32_t> scope_select_price; // 0x30
	int32_t scope_select_count; // 0x40
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

struct FActorSequenceObjectReference {
	EActorSequenceObjectReferenceType Type; // 0x0
	FGuid ActorId; // 0x4
	FString PathToComponent; // 0x18
};

struct FMatchResultInfo {
	int32_t rp; // 0x0
	int32_t Rank; // 0x4
	int32_t team_count; // 0x8
	bool is_top_rank; // 0xc
	int32_t kill_count; // 0x10
	int32_t ai_kill_count; // 0x14
	int32_t death; // 0x18
	int32_t sequence_kill; // 0x1c
	int32_t team_alive_count; // 0x20
	int32_t team_kill_count; // 0x24
	int32_t assist_count; // 0x28
	int32_t total_damage; // 0x2c
	int32_t loser_score; // 0x30
	int32_t clean_score; // 0x34
};

struct FAreaItemSpawnDataList {
	TArray<FAreaItemSpawnData> List; // 0x0
};

struct FBandwidthTestGenerator {
	TArray<FBandwidthTestItem> ReplicatedBuffers; // 0x0
};

struct FCrossMeshManager {
	UStaticMesh* Prototype; // 0x0
	AActor* Owner; // 0x8
	UStaticMeshComponent* SideMesh; // 0x10
	int32_t SocketIndex; // 0x18
};

struct FBravoHotelAttachmentInfo {
	float ReloadDurationMultiplier; // 0x0
	float ADSSpeedMultiplier; // 0x4
	float AmmoSpeedMultiplier; // 0x8
	float AutoFireRateMultiplier; // 0xc
	float BaseSpreadMultiplier; // 0x10
	float FiringBaseSpreadMultiplier; // 0x14
	float DeviationMultiplier; // 0x18
	float RecoilHorizontalMultiplier; // 0x1c
	float RecoilVerticalMultiplier; // 0x20
	float RecoilRecoveryMultiplier; // 0x24
	float DecreaseRecoilPatternScale; // 0x28
	float AnimationKickMultiplier; // 0x2c
	float SwayMultiplier; // 0x30
	TArray<int32_t> ZeroingDistance; // 0x38
};

struct FBravoHotelFriendInfo : FBravoHotelUserInfo {
	EPresenceState State; // 0x90
};

struct FRepProjectileInfo {
	FVector_NetQuantize Location; // 0x0
	FRotator OriginRotation; // 0xc
	TArray<FRotator> SpreadRotations; // 0x18
	char NumBulletsAndSpreadBit; // 0x28
	char bIsCharacterInfoData : 1; // 0x29
	uint16_t CharacterInfoBit; // 0x2a
	char Index; // 0x2c
	float ShotFoV; // 0x30
	EWeaponFireMode FireMode; // 0x34
	float ProjectileVelocity; // 0x38
	float TerminalVelocity; // 0x3c
	bool bIsBoltAction; // 0x40
	FRepRecoilInfo RecoilInfo; // 0x44
	float LeanDegreeMax; // 0x80
	float ADSSpeed; // 0x84
	float Deviation; // 0x88
	uint16_t UniqueID; // 0x8c
	char bHasAuthority : 1; // 0x8e
	AActor* AuthorityController; // 0x90
	float Time; // 0x98
	float DamageRate; // 0x9c
	char LevelVisibleRate; // 0xa0
};

struct FSkeletalMeshSamplingRegion {
	FName Name; // 0x0
	int32_t LODIndex; // 0x8
	char bSupportUniformlyDistributedSampling : 1; // 0xc
	TArray<FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters; // 0x10
	TArray<FSkeletalMeshSamplingRegionBoneFilter> BoneFilters; // 0x20
};

struct FCoh_LocalizationString {
	FString Key; // 0x0
	FText SourceString; // 0x10
};

struct FEquippedItemInfo {
	int32_t ItemId; // 0x0
	float Durability; // 0x4
	float MaxDurability; // 0x8
};

struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase {
	TArray<FAngularRangeLimit> AngularRangeLimits; // 0xc8
	TArray<FVector> AngularOffsets; // 0xd8
};

struct FNavAgentProperties : FMovementProperties {
	float AgentRadius; // 0x4
	float AgentHeight; // 0x8
	float AgentStepHeight; // 0xc
	float NavWalkingSearchHeightScale; // 0x10
	FSoftClassPath PreferredNavData; // 0x18
};

struct FCollisionImpactData {
	TArray<FRigidBodyContactInfo> ContactInfos; // 0x0
	FVector TotalNormalImpulse; // 0x10
	FVector TotalFrictionImpulse; // 0x1c
};

struct FStructSerializerByteArray {
	int32_t Dummy1; // 0x0
	TArray<char> ByteArray; // 0x8
	int32_t Dummy2; // 0x18
	TArray<int8_t> Int8Array; // 0x20
	int32_t Dummy3; // 0x30
};

struct FMovieSceneIntegerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneIntegerChannel IntegerCurve; // 0x48
	EMovieSceneBlendType BlendType; // 0xd8
};

struct FPlatformInterfaceData {
	FName DataName; // 0x0
	EPlatformInterfaceDataType Type; // 0x8
	int32_t IntValue; // 0xc
	float FloatValue; // 0x10
	FString StringValue; // 0x18
	UObject* ObjectValue; // 0x28
};

struct FAIPredictionEvent {
	AActor* Requestor; // 0x0
	AActor* PredictedActor; // 0x8
};

struct FReductionSettings {
	char ReductionTargetTriangleRatioEnabled : 1; // 0x0
	float ReductionTargetTriangleRatio; // 0x4
	char ReductionTargetTriangleCountEnabled : 1; // 0x8
	uint32_t ReductionTargetTriangleCount; // 0xc
	char ReductionTargetMaxDeviationEnabled : 1; // 0x10
	float ReductionTargetMaxDeviation; // 0x14
	char ReductionTargetOnScreenSizeEnabled : 1; // 0x18
	uint32_t ReductionTargetOnScreenSize; // 0x1c
	EReductionTargetStopCondition ReductionTargetStopCondition; // 0x20
	EReductionHeuristics ReductionHeuristics; // 0x24
	float GeometryImportance; // 0x28
	float MaterialImportance; // 0x2c
	float TextureImportance; // 0x30
	float ShadingImportance; // 0x34
	float GroupImportance; // 0x38
	float VertexColorImportance; // 0x3c
	float EdgeSetImportance; // 0x40
	float SkinningImportance; // 0x44
	float CurvatureImportance; // 0x48
	char CreateGeomorphGeometry : 1; // 0x4c
	char AllowDegenerateTexCoords : 1; // 0x4c
	char KeepSymmetry : 1; // 0x4c
	char UseAutomaticSymmetryDetection : 1; // 0x4c
	char UseSymmetryQuadRetriangulator : 1; // 0x4c
	ESymmetryAxis SymmetryAxis; // 0x50
	float SymmetryOffset; // 0x54
	float SymmetryDetectionTolerance; // 0x58
	EDataCreationPreferences DataCreationPreferences; // 0x5c
	char GenerateGeomorphData : 1; // 0x60
	float OutwardMoveMultiplier; // 0x64
	float InwardMoveMultiplier; // 0x68
	float MaxEdgeLength; // 0x6c
	char UseHighQualityNormalCalculation : 1; // 0x70
	int32_t ProcessSelectionSetID; // 0x74
	FString ProcessSelectionSetName; // 0x78
	char MergeGeometries : 1; // 0x88
	char KeepUnprocessedSceneMeshes : 1; // 0x88
	char LockGeometricBorder : 1; // 0x88
};

struct FNavigationFilterArea {
	UNavArea* AreaClass; // 0x0
	float TravelCostOverride; // 0x8
	float EnteringCostOverride; // 0xc
	char bIsExcluded : 1; // 0x10
	char bOverrideTravelCost : 1; // 0x10
	char bOverrideEnteringCost : 1; // 0x10
};

struct FRMAFoliageToolsBuffer {
	TArray<FTransform> Transform; // 0x0
	TArray<UStaticMesh*> Mesh; // 0x10
};

struct FAnalysisClientGameVehicleSeatData {
	int32_t targetseat_index; // 0x0
	int32_t preseat_index; // 0x4
	int32_t driving_time; // 0x8
	int32_t driving_distance; // 0xc
	FAnalysisClientGameVehicleData vehicle_info; // 0x10
};

struct FMolotovFlameDotDamageInfo {
	int32_t DamageTime; // 0x0
	float DamageAmount; // 0x4
	FDamageEvent DamageEvent; // 0x8
	AController* EventInstigator; // 0x18
	AActor* DamageCauser; // 0x20
	int32_t InFlameCount; // 0x28
};

struct FCompositeFont {
	FTypeface DefaultTypeface; // 0x0
	FCompositeFallbackFont FallbackTypeface; // 0x10
	TArray<FCompositeSubFont> SubTypefaces; // 0x28
};

struct FDebugDisplayProperty {
	UObject* Obj; // 0x0
	UObject* WithinClass; // 0x8
};

struct FAkWaapiFieldNames {
	FString FieldName; // 0x0
};

struct FItemEquipData : FTableRowBase {
	TSoftClassPtr<UObject> EquippableItemClass; // 0x8
	FName MutableUniqueKey; // 0x30
	char bUseEquippedStaticMesh : 1; // 0x38
	TSoftObjectPtr<UStaticMesh> EquippedStaticMesh; // 0x40
	TSoftObjectPtr<USkeletalMesh> EquippedSkeletalMesh; // 0x68
};

struct FCoh_PartyMemberInfo {
	FString UID; // 0x0
	FString Name; // 0x10
	bool IsReady; // 0x20
	bool IsVoiceChat; // 0x21
	bool IsLeader; // 0x22
	bool IsOnline; // 0x23
	FString clientStatus; // 0x28
	int32_t SeasonTierID; // 0x38
	FString AccessRegion; // 0x40
	int32_t Ping; // 0x50
	FString steamID; // 0x58
	FVector2D Pos; // 0x68
	int32_t ClassDataIndex; // 0x70
	FString ClassName; // 0x78
	int32_t ClassLevel; // 0x88
};

struct FBravoHotelReloadInfo {
	ELoadingType LoadingType; // 0x0
	bool bNeedBoltActionAfterReload; // 0x1
	bool bUseTacticalReload; // 0x2
	float ReloadTime; // 0x4
	float TacticalReloadTime; // 0x8
	float StripperClipReloadTime; // 0xc
	float SingleBulletInitialTime; // 0x10
	float SingleBulletRepeatTime; // 0x14
	FAnimSlot ReloadPlayerAnim; // 0x18
	FAnimSlot ReloadWeaponAnim; // 0x28
	FAnimSlot ReloadPronePlayerAnim; // 0x38
	FAnimSlot ReloadProneWeaponAnim; // 0x48
	FAnimSlot ReloadVehiclePlayerAnim; // 0x58
	FAnimSlot TacticalReloadPlayerAnim; // 0x68
	FAnimSlot TacticalReloadWeaponAnim; // 0x78
	FAnimSlot TacticalReloadPronePlayerAnim; // 0x88
	FAnimSlot TacticalReloadProneWeaponAnim; // 0x98
	FAnimSlot TacticalReloadVehiclePlayerAnim; // 0xa8
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

struct FAnalysisClientGameItemPartsData {
	int32_t parts_slot_index; // 0x0
	int32_t parts_id; // 0x4
	FString parts_name; // 0x8
};

struct FWeaponSlot {
	TArray<EWeaponType> AllowedWeaponTypes; // 0x0
};

struct FScrollBorderStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x90
};

struct FSpriteGeometryShape {
	ESpriteShapeType ShapeType; // 0x0
	TArray<FVector2D> Vertices; // 0x8
	FVector2D BoxSize; // 0x18
	FVector2D BoxPosition; // 0x20
	float Rotation; // 0x28
	bool bNegativeWinding; // 0x2c
};

struct FResponse_InviteFriend {
	uint32_t C; // 0x0
	FString E; // 0x8
	FResponse_InviteFriend_Rec D; // 0x18
};

struct FSearchInstinctInfo {
	float CycleTime; // 0x0
	float Radius; // 0x4
	float ErrorDistRange; // 0x8
	float FoundRadius; // 0xc
	float Duration; // 0x10
};

struct FMaterialEditorPromotionSettings {
	FFilePath DefaultMaterialAsset; // 0x0
	FFilePath DefaultDiffuseTexture; // 0x10
	FFilePath DefaultNormalTexture; // 0x20
};

struct FKSphylElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius; // 0x48
	float Length; // 0x4c
};

struct FNiagaraBool {
	int32_t Value; // 0x0
};

struct FAudioCaptureDeviceInfo {
	FName DeviceName; // 0x0
	int32_t NumInputChannels; // 0x8
	int32_t SampleRate; // 0xc
};

struct FSettingData {
	bool ImmediateAttachment; // 0x0
	bool InheritAttachment; // 0x1
	bool ShowPerkSlot; // 0x2
	bool SupplyBox; // 0x3
	bool SmartPing; // 0x4
};

struct FDamageInfoByWeaponInfo {
	int32_t base_weapon_index; // 0x0
	int32_t shot_count; // 0x4
	int32_t hitshot_count; // 0x8
	int32_t headshot_count; // 0xc
	int32_t kill_count; // 0x10
	int32_t Damage; // 0x14
	int32_t far_distance; // 0x18
};

struct FG2C_PartyEntrustSomeone {
	FString Type; // 0x0
	FG2C_PartyEntrustSomeone_Data Data; // 0x10
};

struct FCollisionLimitBase {
	FBoneReference DrivingBone; // 0x0
	FVector OffsetLocation; // 0x10
	FRotator OffsetRotation; // 0x1c
	FVector Location; // 0x28
	FQuat Rotation; // 0x40
};

struct FMovieSceneSectionGroup {
	TArray<TWeakObjectPtr<UMovieSceneSection>> Sections; // 0x0
};

struct FBatchedPoint {
	FVector Position; // 0x0
	FLinearColor Color; // 0xc
	float PointSize; // 0x1c
	float RemainingLifeTime; // 0x20
	char DepthPriority; // 0x24
};

struct FAnchorData {
	FMargin Offsets; // 0x0
	FAnchors Anchors; // 0x10
	FVector2D Alignment; // 0x20
};

struct FBoxItemInfo {
	bool IsDivision; // 0x0
	int32_t DivisionCount; // 0x4
	int32_t SelectCount; // 0x8
};

struct FInputAxisConfigEntry {
	FName AxisKeyName; // 0x0
	FInputAxisProperties AxisProperties; // 0x8
};

struct FCoh_KillMessageInfo {
	int32_t Type; // 0x0
	FString TYPE1_Killer; // 0x8
	FString TYPE1_Block_01; // 0x18
	FString TYPE1_Victim; // 0x28
	FString TYPE1_Block_02; // 0x38
	FString TYPE1_Weapon; // 0x48
	FString TYPE1_AliverCount; // 0x58
	FString TYPE2_Victim; // 0x68
	FString TYPE2_Block_01; // 0x78
	FString TYPE2_Block_02; // 0x88
	FString TYPE2_AliveCount01; // 0x98
	FString TYPE2_AliveCount02; // 0xa8
	int32_t FontColorIndex; // 0xb8
};

struct FFontParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UFont* FontValue; // 0x10
	int32_t FontPage; // 0x18
	FGuid ExpressionGUID; // 0x1c
};

struct FResponse_SearchPlayer_Rec {
	FString user_id; // 0x0
	FString Name; // 0x10
};

struct FBravoHotelAbilityModifierDetail {
	float CastingSeconds; // 0x0
	FName UseableMeshAttachSlotName; // 0x4
	FAnimSlot AnimSlot_Stand; // 0x10
	FAnimSlot AnimSlot_Prone; // 0x20
};

struct FResuscitationTypeData : FTableRowBase {
	float ModifyPerCountSelf; // 0x8
	float ModifyPerCountOther; // 0xc
	TMap<int32_t, float> CostPerCountSelf; // 0x10
	TMap<int32_t, float> CostPerCountOther; // 0x60
};

struct FLiveLinkSubjectPreset {
	FLiveLinkSubjectKey Key; // 0x0
	ULiveLinkRole* Role; // 0x18
	ULiveLinkSubjectSettings* Settings; // 0x20
	ULiveLinkVirtualSubject* VirtualSubject; // 0x28
	bool bEnabled; // 0x30
};

struct FReductionPipelineSettings : FSimplygonPipelineSettings {
	FReductionSettings ReductionSettings; // 0x8
	FRepairSettings RepairSettings; // 0x98
	FNormalCalculationSettings NormalCalculationSettings; // 0xac
	FVisibilitySettings VisibilitySettings; // 0xb8
	FBoneSettings BoneSettings; // 0x100
	FVertexWeightSettings VertexWeightSettings; // 0x150
	FMappingImageSettings MappingImageSettings; // 0x178
	TArray<USimplygonMaterialCaster*> MaterialPropertyCasters; // 0x220
};

struct FDestructibleSpecialHierarchyDepths {
	int32_t SupportDepth; // 0x0
	int32_t MinimumFractureDepth; // 0x4
	bool bEnableDebris; // 0x8
	int32_t DebrisDepth; // 0xc
	int32_t EssentialDepth; // 0x10
};

struct FCustomMeshTriangle {
	FVector Vertex0; // 0x0
	FVector Vertex1; // 0xc
	FVector Vertex2; // 0x18
};

struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x10
	FPoseLink Additive; // 0x20
	bool bMeshSpaceAdditive; // 0x30
};

struct FInterpolationParameter {
	float InterpolationTime; // 0x0
	EFilterInterpolationType InterpolationType; // 0x4
};

struct FAnimBlueprintFunction {
	FName Name; // 0x0
	FName Group; // 0x8
	int32_t OutputPoseNodeIndex; // 0x10
	TArray<FName> InputPoseNames; // 0x18
	TArray<int32_t> InputPoseNodeIndices; // 0x28
	bool bImplemented; // 0x60
};

struct FCheatParamInfo {
	FString Hint; // 0x0
	CheatParamType ParamType; // 0x10
};

struct FPerkInfo {
	EPerkSlotFlag Slot; // 0x0
	FName PerkName; // 0x4
	int32_t PerkID; // 0xc
	int32_t InGamelevel; // 0x10
	int32_t CurrentExp; // 0x14
};

struct FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x30
	float PlayRateBasis; // 0x38
	float PlayRate; // 0x3c
	FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x40
	float StartPosition; // 0x70
	bool bLoopAnimation; // 0x74
};

struct FAnimationStateBase {
	FName StateName; // 0x0
};

struct FWeaponBaseData : FTableRowBase {
	FName WeaponKey; // 0x8
	int32_t ID; // 0x10
	EWeaponType WeaponType; // 0x14
	FText DisplayName; // 0x18
	FText DisplayDesc; // 0x30
	FText DisplayWeaponType; // 0x48
	FText DisplayRangeType; // 0x60
	int32_t Display_Damage; // 0x78
	int32_t Display_EffectiveRange; // 0x7c
	int32_t Display_Accuracy; // 0x80
	int32_t Display_RateofFire; // 0x84
	FName Display_AmmoInfo; // 0x88
	TSoftObjectPtr<UPaperSprite> SlotIconTexture_PaperSprite; // 0x90
	TSoftObjectPtr<UPaperSprite> DragIconTexture_PaperSprite; // 0xb8
	bool IsArmoryWeapon; // 0xe0
	FName ItemKey; // 0xe4
	FName TopRecipe; // 0xec
	int32_t Display_MagSize; // 0xf4
	UArmoryDataAsset* DataAsset; // 0xf8
	FName AmmoTableKey; // 0x100
	UDataTable* PerBoneDamageTable; // 0x108
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

struct FKickData : FTableRowBase {
	FText Title; // 0x8
	FText Desc; // 0x20
	FText AdminDesc; // 0x38
};

struct FInterpLookupTrack {
	TArray<FInterpLookupPoint> Points; // 0x0
};

struct FAkWwiseItemToControl {
	FAkWwiseObjectDetails ItemPicked; // 0x0
	FString ItemPath; // 0x30
};

struct FInterpLookupPoint {
	FName GroupName; // 0x0
	float Time; // 0x8
};

struct FNiagaraSystemUpdateContext {
	TArray<UNiagaraComponent*> ComponentsToReset; // 0x0
	TArray<UNiagaraComponent*> ComponentsToReInit; // 0x10
	TArray<UNiagaraSystem*> SystemSimsToDestroy; // 0x20
};

struct FAIDataProviderValue {
	UAIDataProvider* DataBinding; // 0x10
	FName DataField; // 0x18
};

struct FPartyUser {
	FString UID; // 0x0
	FString playerName; // 0x10
	bool IsReady; // 0x20
	bool IsOnline; // 0x21
	bool IsVoiceChat; // 0x22
	FString clientStatus; // 0x28
	uint32_t SeasonTierID; // 0x38
	FString matchMakingTag; // 0x40
	FString steamID; // 0x50
};

struct FCompositionGraphCapturePasses {
	TArray<FString> Value; // 0x0
};

struct FTireFrictionScalePair {
	UTireType* TireType; // 0x0
	float FrictionScale; // 0x8
};

struct FSubmixEffectSubmixEQSettings {
	TArray<FSubmixEffectEQBand> EQBands; // 0x0
};

struct FRichTextStyleRow : FTableRowBase {
	FTextBlockStyle TextStyle; // 0x8
};

struct FSoftObjectPath {
	FName AssetPathName; // 0x0
	FString SubPathString; // 0x8
};

struct FInterpCurvePointLinearColor {
	float InVal; // 0x0
	FLinearColor OutVal; // 0x4
	FLinearColor ArriveTangent; // 0x14
	FLinearColor LeaveTangent; // 0x24
	EInterpCurveMode InterpMode; // 0x34
};

struct FVehicleSpawnDebugDataList {
	TArray<FVehicleSpawnDebugData> List; // 0x0
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

struct FMovieSceneEvaluationOperand {
	FGuid ObjectBindingID; // 0x0
	FMovieSceneSequenceID SequenceID; // 0x10
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

struct FMovieSceneAkAudioRTPCTemplate : FMovieSceneEvalTemplate {
	UMovieSceneAkAudioRTPCSection* Section; // 0x20
};

struct FKillAliveInfo {
	bool Visibility; // 0x0
	int32_t KillCount; // 0x4
	int32_t AssistCount; // 0x8
	int32_t AliveCount; // 0xc
	int32_t AliveTeamCount; // 0x10
};

struct FCullDistancePreset {
	FString Name; // 0x0
	FInt32Interval MinMax; // 0x10
};

struct FPlanarLimitData : FCollisionLimitDataBase {
	FPlane Plane; // 0x50
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

struct FImageWriteOptions {
	EDesiredImageFormat Format; // 0x0
	FDelegate OnComplete; // 0x4
	int32_t CompressionQuality; // 0x14
	bool bOverwriteFile; // 0x18
	bool bAsync; // 0x19
};

struct FMatchResultUIInfo {
	int32_t FinalRank; // 0x0
	int32_t GainedRP; // 0x4
	FRewardPoint GoldPoint; // 0x8
	TArray<FRewardItemInfo> RewardItemList; // 0x18
	TArray<FRewardItemInfo> DropedItemList; // 0x28
	TArray<FResultMessageInfo> Message; // 0x38
	float TotalDamage; // 0x48
	float LifeTime; // 0x4c
};

struct FSupplyBoxInfo {
	uint32_t table_index; // 0x0
	FString item_id; // 0x8
	TArray<FWeaponInfo> weapons; // 0x18
	TArray<FEquipmentInfo> equipments; // 0x28
	bool expanded; // 0x38
	uint32_t count_of_supply; // 0x3c
	uint32_t free_supply_ticket; // 0x40
};

struct FAnalysisClientGameTechReportData {
	FAnalysisClientGamePCData pc_data; // 0x0
	FAnalysisClientGameTrackFPSData fps_data; // 0x88
	FAnalysisClientGameLoadingData loading_data; // 0xd8
};

struct FAnimNode_RotateRootBone : FAnimNode_Base {
	FPoseLink BasePose; // 0x10
	float Pitch; // 0x20
	float Yaw; // 0x24
	FInputScaleBiasClamp PitchScaleBiasClamp; // 0x28
	FInputScaleBiasClamp YawScaleBiasClamp; // 0x58
	FRotator MeshToComponent; // 0x88
};

struct FAutomationEvent {
	EAutomationEventType Type; // 0x0
	FString Message; // 0x8
	FString Context; // 0x18
	FGuid Artifact; // 0x28
};

struct FAutoCompleteCommand {
	FString Command; // 0x0
	FString Desc; // 0x10
};

struct FMovieSceneTransformMask {
	uint32_t Mask; // 0x0
};

struct FColorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel RedCurve; // 0x8
	FMovieSceneFloatChannel GreenCurve; // 0xa8
	FMovieSceneFloatChannel BlueCurve; // 0x148
	FMovieSceneFloatChannel AlphaCurve; // 0x1e8
};

struct FBuffHandle : FFastArraySerializerItem {
	uint16_t Key; // 0xc
};

struct FPointDamageEvent : FDamageEvent {
	float Damage; // 0x10
	FVector_NetQuantizeNormal ShotDirection; // 0x14
	FHitResult HitInfo; // 0x20
};

struct FG2C_PartyLeave {
	FString Type; // 0x0
	FG2C_PartyLeave_Data Data; // 0x10
};

struct FAssetData {
	FName ObjectPath; // 0x0
	FName PackageName; // 0x8
	FName PackagePath; // 0x10
	FName AssetName; // 0x18
	FName AssetClass; // 0x20
};

struct FMaterialShadingModelField {
	uint16_t ShadingModelField; // 0x0
};

struct FPlayRecordInfo {
	int32_t game_view_type; // 0x0
	int32_t battle_mode; // 0x4
	int32_t game_mode; // 0x8
	FString map_info; // 0x10
	int64_t start_time; // 0x20
	int32_t reconnected_count; // 0x28
	FClassInfo class_info; // 0x30
	FGoldInfo gold_info; // 0x58
	FMatchResultInfo match_result_info; // 0x84
	FBattelRoyalInfo battle_royal_info; // 0xbc
	FDamageInfos damage_info; // 0xe0
	FShotInfo shot_info; // 0x100
	FWeaponDurabilityInfo weapon_durability_info; // 0x110
	FVehicleInfo vehicle_info; // 0x140
	FFlyingInfo flying_info; // 0x150
	FEquipment_info Equipment_info; // 0x188
	FString extra_data; // 0x248
};

struct FClothConstraintSetupNv {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
};

struct FA2Pose {
	TArray<FTransform> Bones; // 0x0
};

struct FViewTargetTransitionParams {
	float BlendTime; // 0x0
	EViewTargetBlendFunction BlendFunction; // 0x4
	float BlendExp; // 0x8
	char bLockOutgoing : 1; // 0xc
};

struct FPerkDeckClassInfo {
	FName DeckName; // 0x0
	TArray<FName> PerkCards; // 0x8
	TArray<FName> ExpertWeapons; // 0x18
};

struct FItemAppearanceColorData {
	FName ColorID; // 0x0
	TSoftObjectPtr<UPaperSprite> IconEx; // 0x8
	FName MutableUniqueKey; // 0x30
};

struct FAircraftCinematic {
	ULevelSequence* LevelSequence; // 0x0
	UAkAudioEvent* LevelSequenceBGM; // 0x8
};

struct FExcelAlignment {
	bool ShrinkToFit; // 0x0
	bool WrapText; // 0x1
	int32_t Indent; // 0x4
	int32_t TextRotation; // 0x8
	ExcelHorizontalAlignment HorizontalAlignment; // 0xc
	ExcelVerticalAlignment VerticalAlignment; // 0xd
};

struct FSourceEffectEQSettings {
	TArray<FSourceEffectEQBand> EQBands; // 0x0
};

struct FNewbieBuff : FTableRowBase {
	TArray<int32_t> CommonBuffNames; // 0x8
	TArray<FSpecificClassBuff> SuperPeopleClassBuffNames; // 0x18
	float SupplyProbabilityModifyer; // 0x28
	FName ExpertWeaponTableID; // 0x2c
};

struct FRequest_LoginName {
	FString Client_version; // 0x0
	int32_t os; // 0x10
	FString player_name; // 0x18
	bool allowed_only_if_exists; // 0x28
	FHardWareInfo hardware_info; // 0x30
};

struct FSplineInstanceData : FSceneComponentInstanceData {
	bool bSplineHasBeenEdited; // 0xa8
	FSplineCurves SplineCurves; // 0xb0
	FSplineCurves SplineCurvesPreUCS; // 0x118
};

struct FSupplyItem : FTableRowBase {
	int32_t ID; // 0x8
	FText DisplayName; // 0x10
	FText Description; // 0x28
	TSoftObjectPtr<UObject> SlotIconTexture_PaperSprite; // 0x40
	FText ItemSortType; // 0x68
	int32_t SupplyGoldCost; // 0x80
	TArray<FItemCountData> Items; // 0x88
	TSoftObjectPtr<UStaticMesh> StaticMesh; // 0x98
	TSoftObjectPtr<UParticleSystem> SupplyMeshParticle; // 0xc0
	FName SupplyMeshParticleSocketName; // 0xe8
	TArray<FVector2D> ToolTipLocationOffset; // 0xf0
};

struct FAISenseAffiliationFilter {
	char bDetectEnemies : 1; // 0x0
	char bDetectNeutrals : 1; // 0x0
	char bDetectFriendlies : 1; // 0x0
};

struct FGenerateOption : FTableRowBase {
	int32_t ID; // 0x8
	TArray<FName> GroupRewardIDs; // 0x10
};

struct FAnalysisAbnormalData {
	TArray<FAbnormalDamageData> Abnormal_Damage; // 0x0
};

struct FTransformBase {
	FName Node; // 0x0
	FTransformBaseConstraint Constraints[0x2]; // 0x8
};

struct FSphericalLimitData : FCollisionLimitDataBase {
	float Radius; // 0x50
	ESphericalLimitType LimitType; // 0x54
};

struct FExpertWeaponSimpleElement {
	FName WeaponDataID; // 0x0
	float Weight; // 0x8
};

struct FResponse_CraftWeapon {
	uint32_t C; // 0x0
	FString E; // 0x8
	FResponse_CraftWeapon_Data D; // 0x18
};

struct FAkAudioSession {
	EAkAudioSessionCategory AudioSessionCategory; // 0x0
	uint32_t AudioSessionCategoryOptions; // 0x4
	EAkAudioSessionMode AudioSessionMode; // 0x8
};

struct FLandscapeLayerComponentData {
	FHeightmapData HeightmapData; // 0x0
	FWeightmapData WeightmapData; // 0x8
};

struct FCachedAnimStateData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FMeshElementAttributeData {
	FName AttributeName; // 0x0
	int32_t AttributeIndex; // 0x8
	FMeshElementAttributeValue AttributeValue; // 0x10
};

struct FDamageBuffInfo {
	int32_t ItemKey; // 0x0
	int32_t BuffKey; // 0x4
	FName ItemIndex; // 0x8
	FName BuffIndex; // 0x10
};

struct FMovieScene2DTransformMask {
	uint32_t Mask; // 0x0
};

struct FConnectionAlwaysRelevantNodePair {
	UNetConnection* NetConnection; // 0x0
	UReplicationGraphNode_AlwaysRelevant_ForConnection* Node; // 0x8
};

struct FNetViewer {
	UNetConnection* Connection; // 0x0
	AActor* InViewer; // 0x8
	AActor* ViewTarget; // 0x10
	FVector ViewLocation; // 0x18
	FVector ViewDir; // 0x24
};

struct FFontCharacter {
	int32_t StartU; // 0x0
	int32_t StartV; // 0x4
	int32_t USize; // 0x8
	int32_t VSize; // 0xc
	char TextureIndex; // 0x10
	int32_t VerticalOffset; // 0x14
};

struct FEffectTransitionInfo {
	AStaticMeshActor* Actor; // 0x0
	AStaticMeshActor* SupplyActorRef; // 0x8
	float ScalarParameterValue; // 0x10
	bool Visible; // 0x14
};

struct FAnalysisClientGameRecoveryItemUseData {
	int32_t item_id; // 0x0
	FString item_name; // 0x8
	int32_t item_recovery_hp; // 0x18
	int32_t stack_cnt; // 0x1c
};

struct FPreviewAttachedObjectPair {
	TSoftObjectPtr<UObject> AttachedObject; // 0x0
	UObject* Object; // 0x28
	FName AttachedTo; // 0x30
};

struct FShootingInfo {
	FVector StartPos; // 0x0
	FVector EndPos; // 0xc
	float ShootingLength; // 0x18
	float HitTime; // 0x1c
};

struct FAkMainOutputSettings {
	FString AudioDeviceShareset; // 0x0
	uint32_t DeviceID; // 0x10
	EAkPanningRule PanningRule; // 0x14
	EAkChannelConfigType ChannelConfigType; // 0x18
	uint32_t ChannelMask; // 0x1c
	uint32_t NumberOfChannels; // 0x20
};

struct FG2C_FriendList_Data {
	TArray<FFriendInfo> friendInfoList; // 0x0
};

struct FLandscapeComponentMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FExpertWeaponItemMarkerInfo {
	FVector2D Pos; // 0x0
	FVector2D PrePos; // 0x8
	UWidget* Widget; // 0x10
	FExpertWeaponPingInfo PingInfo; // 0x18
};

struct FAnimGraphBlendOptions {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
};

struct FBoneReductionSetting {
	TArray<FName> BonesToRemove; // 0x8
};

struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct {
	FRotator Rotation; // 0x8
	FFrameNumber Time; // 0x14
};

struct FNormalCalculationSettings {
	char ReplaceNormals : 1; // 0x0
	char ReplaceTangents : 1; // 0x0
	float HardEdgeAngle; // 0x4
	char RepairInvalidNormals : 1; // 0x8
	char ReorthogonalizeTangentSpace : 1; // 0x8
	char ScaleByArea : 1; // 0x8
	char ScaleByAngle : 1; // 0x8
	char SnapNormalsToFlatSurfaces : 1; // 0x8
};

struct FUpdateLevelStreamingLevelStatus {
	FName PackageName; // 0x0
	int32_t LODIndex; // 0x8
	char bNewShouldBeLoaded : 1; // 0xc
	char bNewShouldBeVisible : 1; // 0xc
	char bNewShouldBlockOnLoad : 1; // 0xc
};

struct FAkAcousticSurface {
	uint32_t Texture; // 0x0
	float Occlusion; // 0x4
	FString Name; // 0x8
};

struct FLensImperfectionSettings {
	UTexture* DirtMask; // 0x0
	float DirtMaskIntensity; // 0x8
	FLinearColor DirtMaskTint; // 0xc
};

struct FResponse_PlayerInfo_Rec {
	FString server_name; // 0x0
	FString now; // 0x10
	FString db; // 0x20
	uint32_t uid_local; // 0x30
	uint64_t uid_global; // 0x38
	FString Name; // 0x40
	uint32_t Level; // 0x50
	uint32_t xp; // 0x54
	uint32_t Gold; // 0x58
	uint32_t energy; // 0x5c
	FString energy_updated_at; // 0x60
	uint32_t buy_coin; // 0x70
	uint32_t free_coin; // 0x74
	uint32_t sex; // 0x78
	uint32_t face; // 0x7c
	uint32_t hairstyle; // 0x80
	uint32_t intro; // 0x84
};

struct FAnimNode_ApplyMeshSpaceAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x10
	FPoseLink Additive; // 0x20
	EAnimAlphaInputType AlphaInputType; // 0x30
	float ALPHA; // 0x34
	char bAlphaBoolEnabled : 1; // 0x38
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x40
	FName AlphaCurveName; // 0x88
	FInputScaleBias AlphaScaleBias; // 0x90
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x98
	int32_t LODThreshold; // 0xc8
};

struct FMovieSceneSequenceHierarchy {
	TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> SubSequences; // 0x0
	TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> Hierarchy; // 0x50
};

struct FRepPointDamageInfo {
	AActor* DamageTarget; // 0x0
	AActor* DamageCauser; // 0x8
	AController* Instigator; // 0x10
	UDamageType* DamageTypeClass; // 0x18
	UPrimitiveComponent* HitComponent; // 0x20
	FVector_NetQuantizeNormal ShotDirection; // 0x28
	FVector_NetQuantize ImpactPoint; // 0x34
	int16_t BoneIndex; // 0x40
	int16_t ExtraIndex; // 0x42
	float ImpulsePower; // 0x44
	float Damage; // 0x48
	float ProjectileGravity; // 0x4c
	uint16_t ProjectileId; // 0x50
	FVector_NetQuantize FireLocation; // 0x54
	FDataEventDamageBuffInfo AttackerBuffInfo; // 0x60
};

struct FNetworkEmulationProfileDescription {
	FString ProfileName; // 0x0
	FString Tooltip; // 0x10
};

struct FNavLinkCustomInstanceData : FActorComponentInstanceData {
	uint32_t NavLinkUserId; // 0x58
};

struct FC2G_PartyWhoPing_Data {
	uint32_t Ping; // 0x0
};

struct FVirtualTextureBuildSettings {
	int32_t TileSize; // 0x0
	int32_t TileBorderSize; // 0x4
	bool bEnableCompressCrunch; // 0x8
	bool bEnableCompressZlib; // 0x9
};

struct FProjectileHitInfo {
	TMap<uint16_t, FHitInfo> ProjectileHitInfos; // 0x8
};

struct FAnalysisClientGameIllegalReportData {
	int32_t report_type; // 0x0
	int32_t report_index; // 0x4
	TArray<int32_t> illegal_program_index; // 0x8
	FString replay_version; // 0x18
	FString replay_filename; // 0x28
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

struct FG2C_PartyWhoMatchMakingTag {
	FString Type; // 0x0
	FG2C_PartyWhoMatchMakingTag_Data Data; // 0x10
};

struct FPaperTileInfo {
	UPaperTileSet* TileSet; // 0x0
	int32_t PackedTileIndex; // 0x8
};

struct FAkBoolPropertyToControl {
	FString ItemProperty; // 0x0
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

struct FSubmixEffectConvolutionReverbSettings {
	float NormalizationVolumeDb; // 0x0
	float SurroundRearChannelBleedDb; // 0x4
	bool bInvertRearChannelBleedPhase; // 0x8
	bool bSurroundRearChannelFlip; // 0x9
	float SurroundRearChannelBleedAmount; // 0xc
	UAudioImpulseResponse* ImpulseResponse; // 0x10
	bool AllowHArdwareAcceleration; // 0x18
};

struct FUpdateAchievementData {
	FString PlayerUID; // 0x0
	int32_t AchievementID; // 0x10
	int32_t AddValue; // 0x14
};

struct FColor {
	char B; // 0x0
	char G; // 0x1
	char R; // 0x2
	char A; // 0x3
};

struct FMarkerSyncAnimPosition {
	FName PreviousMarkerName; // 0x0
	FName NextMarkerName; // 0x8
	float PositionBetweenMarkers; // 0x10
};

struct FSectionEvaluationData {
	int32_t ImplIndex; // 0x0
	FFrameNumber ForcedTime; // 0x4
	ESectionEvaluationFlags Flags; // 0x8
};

struct FConstrainComponentPropName {
	FName ComponentName; // 0x0
};

struct FSoundWaveSpectralDataEntry {
	float Magnitude; // 0x0
	float NormalizedMagnitude; // 0x4
};

struct FEditorImportExportTestDefinition {
	FFilePath ImportFilePath; // 0x0
	FString ExportFileExtension; // 0x10
	bool bSkipExport; // 0x20
	TArray<FImportFactorySettingValues> FactorySettings; // 0x28
};

struct FBravoHotelTeamColorRow : FTableRowBase {
	FLinearColor Color; // 0x8
};

struct FNavCollisionCylinder {
	FVector Offset; // 0x0
	float Radius; // 0xc
	float Height; // 0x10
};

struct FMatchClassInfo {
	uint32_t change_count; // 0x0
	FString Info; // 0x8
	FString selection_info; // 0x18
};

struct FG2C_PartyWhoEnterLobby_Data {
	FString UID; // 0x0
};

struct FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
};

struct FAkGeometryData {
	TArray<FVector> Vertices; // 0x0
	TArray<FAkAcousticSurface> Surfaces; // 0x10
	TArray<FAkTriangle> Triangles; // 0x20
	TArray<UPhysicalMaterial*> ToOverrideAcousticTexture; // 0x30
	TArray<UPhysicalMaterial*> ToOverrideOcclusion; // 0x40
};

struct FDebugAirCraftInfo {
	FVector2D RightVectorStart; // 0x0
	FVector2D RightVectorEnd; // 0x8
	FVector2D ChangedStartPos; // 0x10
	FVector2D ChangedEndPos; // 0x18
	FVector2D IgnoreAreaPos; // 0x20
	float IgnoreAreaRadius; // 0x28
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

struct FEdGraphSchemaAction_NewNode : FEdGraphSchemaAction {
	UEdGraphNode* NodeTemplate; // 0x100
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

struct FMorphTargetVertexIndex {
	int32_t MorphIndex; // 0x0
	int32_t VertexIndex; // 0x4
};

struct FGrassInput {
	FName Name; // 0x0
	ULandscapeGrassType* GrassType; // 0x8
	FExpressionInput Input; // 0x10
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

struct FSubdivisionLimitSection {
	TArray<FSubdividedQuad> SubdividedQuads; // 0x0
};

struct FResponse_AddItem_Rec {
	uint32_t item_mid; // 0x0
	FString item_name; // 0x8
	uint32_t item_slot; // 0x18
};

struct FCoherentWidgetInfo {
	UWidget* Widget; // 0x0
	bool FinishLoad; // 0x8
};

struct FAIDataProviderTypedValue : FAIDataProviderValue {
	UObject* PropertyType; // 0x20
};

struct FPersonalSupplyPhaseInfo {
	float Probability; // 0x0
	float ProbabilityWithTeam; // 0x4
	float MinAssignmentDelayTime; // 0x8
	float AddAssignmentDelayTime; // 0xc
	float AssignmentRange; // 0x10
	float MaxAssignmentRange; // 0x14
	float Degree; // 0x18
	bool UsingDistanceRate; // 0x1c
	float MinAssignmentRangeRate; // 0x20
	float MaxAssignmentRangeRate; // 0x24
	bool IndividualAssignmentDelayTime; // 0x28
	float ItemSpawnVolume; // 0x2c
};

struct FVehicleAreaSpawnDetailInfo {
	TArray<UBravoHotelVehicleStandardGroupBoxComponent*> StandardGroupList; // 0x0
	TArray<FVehicleBoxDetailInfo> VehicleBoxList; // 0x10
};

struct FExpertWeaponPingInfo {
	int32_t PingIndex; // 0x0
	ABravoHotelPickup* ExpertWeaponItem; // 0x8
	AActor* LocationActor; // 0x10
	UPaperSprite* Image; // 0x18
	char Rarity; // 0x20
	bool EffectReinforce; // 0x21
	bool bSetData; // 0x22
};

struct FNiagaraSpawnInfo {
	int32_t Count; // 0x0
	float InterpStartDt; // 0x4
	float IntervalDt; // 0x8
	int32_t SpawnGroup; // 0xc
};

struct FAnalysisClientGameVehicleBattleData {
	FString damage_type; // 0x0
	int32_t damage_type_index; // 0x10
	int32_t damage_weapon_id; // 0x14
	FString damage_weapon_name; // 0x18
	FString hit_bone; // 0x28
	int32_t Damage; // 0x38
	int32_t Distance; // 0x3c
	FAnalysisClientGameCharacterData attacker_info; // 0x40
	FAnalysisClientGameVehicleData vehicle_info; // 0x110
};

struct FBuildingInfo_UI {
	FVector2D BuildingPosition; // 0x0
	FString BuildingName; // 0x8
};

struct FLandscapeSplineConnection {
	ULandscapeSplineSegment* Segment; // 0x0
	char End : 1; // 0x8
};

struct FC2G_GoToDediWhenYouWerePlaying_Data {
	bool is_go; // 0x0
};

struct FG2C_PartyKickSomeone {
	FString Type; // 0x0
	FG2C_PartyKickSomeone_Data Data; // 0x10
};

struct FBlendSampleData {
	int32_t SampleDataIndex; // 0x0
	UAnimSequence* Animation; // 0x8
	float TotalWeight; // 0x10
	float Time; // 0x14
	float PreviousTime; // 0x18
	float SamplePlayRate; // 0x1c
};

struct FRequest_InviteFriend {
	FString user_id; // 0x0
};

struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings {
	char bOverrideSpawnCountScale : 1; // 0x28
};

struct FLiveLinkCameraFrameData : FLiveLinkTransformFrameData {
	float FieldOfView; // 0xd0
	float AspectRatio; // 0xd4
	float FocalLength; // 0xd8
	float Aperture; // 0xdc
	float FocusDistance; // 0xe0
	ELiveLinkCameraProjectionMode ProjectionMode; // 0xe4
};

struct FNiagaraScriptDataUsageInfo {
	bool bReadsAttributeData; // 0x0
};

struct FBravoHotelBlackMarketDataType {
	FName ItemRowName; // 0x0
	TSoftObjectPtr<UPaperSprite> ItemIconTextureEx; // 0x8
	TSoftObjectPtr<UObject> ItemIconImage; // 0x30
	FText ItemName; // 0x58
	float Weight; // 0x70
	EBlackmarketTabType TabType; // 0x74
	EItemType ItemType; // 0x75
	EWeaponType WeaponType; // 0x76
	EWeaponAttachmentType AttachmentType; // 0x77
	EWearableItemType WearableType; // 0x78
	EDevelopmentStatus DevelopmentStatus; // 0x79
	FName CompatibleAmmoName; // 0x7c
	float Damage; // 0x84
	float FireRate; // 0x88
	int32_t NormalMagSize; // 0x8c
	TArray<EWeaponFireMode> AllowedFireModes; // 0x90
	float ReloadTime; // 0xa0
	float ProjectileVelocity; // 0xa4
	float MoveSpeedModifier; // 0xa8
	int32_t AmmoCount; // 0xac
	float TotalWeight; // 0xb0
	float DecreaseReloadTime; // 0xb4
	float VerticalReduce; // 0xb8
	float HorizentalReduce; // 0xbc
	float IncreaseRateoffire; // 0xc0
	float BurstSpeed; // 0xc4
	float Armor; // 0xc8
	int32_t Capacity; // 0xcc
	float Health; // 0xd0
	float Adrenaline; // 0xd4
	float Fuel; // 0xd8
	EPerkSlotFlag EquipableSlot; // 0xdc
	TArray<FName> EquipableClass; // 0xe0
	FText Description; // 0xf0
	TArray<FString> ItemList; // 0x108
};

struct FPIELoginSettingsInternal {
	FString ID; // 0x0
	FString Token; // 0x10
	FString Type; // 0x20
	TArray<char> TokenBytes; // 0x30
};

struct FAnalysisDediItemData {
	int32_t item_id; // 0x0
	FString item_name; // 0x8
	int32_t item_count; // 0x18
	int32_t item_stack_count; // 0x1c
};

struct FExternalToolDefinition {
	FString ToolName; // 0x0
	FFilePath ExecutablePath; // 0x10
	FString CommandLineOptions; // 0x20
	FDirectoryPath WorkingDirectory; // 0x30
	FString ScriptExtension; // 0x40
	FDirectoryPath ScriptDirectory; // 0x50
};

struct FPSCPool {
	TArray<FPSCPoolElem> FreeElements; // 0x0
	TArray<UParticleSystemComponent*> InUseComponents_Auto; // 0x10
	TArray<UParticleSystemComponent*> InUseComponents_Manual; // 0x20
};

struct FG2C_PartyInvited_From_Data {
	FString partyTicket; // 0x0
	FString FromUID; // 0x10
	FString fromPlayerName; // 0x20
};

struct FSmartName {
	FName DisplayName; // 0x0
};

struct FQuestData : FTableRowBase {
	int32_t ID; // 0x8
	FName NextQuestKey; // 0xc
	FText QuestTitle; // 0x18
	FText QuestDesc; // 0x30
	TArray<FQuestTaskElement> Tasks; // 0x48
};

struct FEngineServicePong {
	FString CurrentLevel; // 0x0
	int32_t EngineVersion; // 0x10
	bool HasBegunPlay; // 0x14
	FGuid InstanceId; // 0x18
	FString InstanceType; // 0x28
	FGuid SessionID; // 0x38
	float WorldTimeSeconds; // 0x48
};

struct FNiagaraMeshMaterialOverride {
	UMaterialInterface* ExplicitMat; // 0x0
	FNiagaraUserParameterBinding UserParamBinding; // 0x8
};

struct FAnalysisClientGameIllegalVictimWeaponData {
	int32_t item_id; // 0x0
	FString item_name; // 0x8
	bool is_expert_weapon; // 0x18
	int32_t grade; // 0x1c
	int32_t enchant; // 0x20
	int32_t perk_id_2; // 0x24
	int32_t perk_id_3; // 0x28
	int32_t perk_id_4; // 0x2c
	int32_t perk_id_5; // 0x30
	FAnalysisPartsData parts_id; // 0x34
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

struct FTemplateSequenceBindingOverrideData {
	TWeakObjectPtr<UObject> Object; // 0x0
	bool bOverridesDefault; // 0x8
};

struct FForceFeedbackParameters {
	FName Tag; // 0x0
	bool bLooping; // 0x8
	bool bIgnoreTimeDilation; // 0x9
	bool bPlayWhilePaused; // 0xa
};

struct FHLODProxyMesh {
	LazyObjectProperty LODActor; // 0x0
	UStaticMesh* StaticMesh; // 0x20
	FName Key; // 0x28
};

struct FScaleTrack {
	TArray<FVector> ScaleKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FCompassUnit {
	UWidget* Widget; // 0x0
	float Angle; // 0x8
};

struct FBlendBoneByChannelEntry {
	FBoneReference SourceBone; // 0x0
	FBoneReference TargetBone; // 0x10
	bool bBlendTranslation; // 0x20
	bool bBlendRotation; // 0x21
	bool bBlendScale; // 0x22
};

struct FBravoHotelMovePoint {
	FName AreaName; // 0x0
	FVector TargetPoint; // 0x8
	FRotator TargetRotate; // 0x14
};

struct FCaptureResolution {
	int32_t ResX; // 0x0
	int32_t ResY; // 0x4
};

struct FVector4Distribution {
	FDistributionLookupTable Table; // 0x0
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

struct FInt32RangeBound {
	ERangeBoundTypes Type; // 0x0
	int32_t Value; // 0x4
};

struct FCapsuleLimit : FCollisionLimitBase {
	float Radius; // 0x50
	float Length; // 0x54
};

struct FWorldPSCPool {
	TMap<UParticleSystem*, FPSCPool> WorldParticleSystemPools; // 0x0
};

struct FCoh_MouseEventData {
	ECoh_EventType Type; // 0x0
	ECoh_MouseButton Button; // 0x1
	int32_t X; // 0x4
	int32_t Y; // 0x8
	float WheelX; // 0xc
	float WheelY; // 0x10
	FString InputGroupName; // 0x18
	bool bDoubleClick; // 0x28
};

struct FTimedCameraPostProcessData {
	UCameraPostProcessPreset* CameraPostProcess; // 0x18
};

struct FGoogleCloud_PubSub {
	TArray<FPubSub_Message> messages; // 0x0
};

struct FWeaponCompare {
	bool CompareRating; // 0x0
	FItemComparefloatInfo Power; // 0x8
	FItemCompareInfo EffectiveRange; // 0x28
	FItemComparefloatInfo Stability; // 0x48
	FItemCompareInfo Firingrate; // 0x68
	FItemCompareInfo Ammo; // 0x88
	FText PickupWeaponText; // 0xa8
	FText WeaponItemComparingName; // 0xc0
	FString AmmoInfo; // 0xd8
	TSoftObjectPtr<UPaperSprite> TexturePtr; // 0xe8
	EItemRarity PickupRarity; // 0x110
	FText Desc; // 0x118
	bool WeaponLockVisibility; // 0x130
	bool IsMyWeapon; // 0x131
	bool BindInfoVisibility; // 0x132
	FString BindInfoNickName; // 0x138
	FString BindInfoDesc; // 0x148
	int32_t BindLevel; // 0x158
	TArray<FAbilitySlot> AbilitySlot; // 0x160
};

struct FBlueprintComponentChangedPropertyInfo {
	FName PropertyName; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* PropertyScope; // 0x10
};

struct FMovieSceneSubSectionData {
	TWeakObjectPtr<UMovieSceneSubSection> Section; // 0x0
	FGuid ObjectBindingID; // 0x8
	ESectionEvaluationFlags Flags; // 0x18
};

struct FFunctionExpressionOutput {
	UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x0
	FGuid ExpressionOutputId; // 0x8
	FExpressionOutput Output; // 0x18
};

struct FMediaCaptureDevice {
	FText DisplayName; // 0x0
	FString URL; // 0x18
};

struct FLiveLinkSourceDebugInfo {
	FLiveLinkSubjectName SubjectName; // 0x0
	int32_t SnapshotIndex; // 0x8
	int32_t NumberOfBufferAtSnapshot; // 0xc
};

struct FCachedAnimTransitionData {
	FName StateMachineName; // 0x0
	FName FromStateName; // 0x8
	FName ToStateName; // 0x10
};

struct FRepVehicleCollisionEvent {
	UPrimitiveComponent* HitComponent; // 0x0
	int16_t InstanceIndex; // 0x8
	FVector_NetQuantize ImpactPoint; // 0xc
	FVector_NetQuantizeNormal ImpactNormal; // 0x18
	float ForwardSpeedKmH; // 0x24
};

struct FProceduralFoliageInstance {
	FVector Location; // 0x0
	FQuat Rotation; // 0x10
	FVector Normal; // 0x20
	float Age; // 0x2c
	float Scale; // 0x30
	UFoliageType* Type; // 0x38
};

struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow {
	bool bAllowNonRestrictedChildren; // 0x20
};

struct FSubstanceFloatInputDesc : FSubstanceInputDesc {
	TArray<float> Min; // 0x18
	TArray<float> MAX; // 0x28
	TArray<float> Default; // 0x38
};

struct FWeaponFatigueData : FTableRowBase {
	int32_t ID; // 0x8
	TMap<int32_t, float> FatigueMap; // 0x10
};

struct FSubtitleCue {
	FText Text; // 0x0
	float Time; // 0x18
};

struct FCrosshairTableRow : FTableRowBase {
	float SpreadDistance; // 0x8
	FCrosshairTextureInfo TextureInfo; // 0x10
	bool bUseCrosshairOnADS; // 0x158
	float SpreadDistance_ADS; // 0x15c
	FCrosshairTextureInfo TextureInfo_ADS; // 0x160
};

struct FSpawnBoxList {
	TArray<UBravoHotelItemSpawnBoxComponent*> List; // 0x0
};

struct FSoundTrackKey {
	float Time; // 0x0
	float Volume; // 0x4
	float Pitch; // 0x8
	USoundBase* Sound; // 0x10
};

struct FRepClimbInfo {
	FVector_NetQuantize TargetPosition; // 0x0
	FVector_NetQuantizeNormal WallNormal; // 0xc
	float HitHeight; // 0x18
	float WallThickness; // 0x1c
	UAnimMontage* PlayMontage; // 0x20
	bool bBreakWindow; // 0x28
	bool bClimbOver; // 0x29
	bool bSprint; // 0x2a
	bool bLedgeGrab; // 0x2b
	bool bLedgeGrabBlocked; // 0x2c
	UParkourWindowComponent* TargetComponent; // 0x30
	int8_t ClimbDataIndex; // 0x38
};

struct FBP-SavedInventoryItemStructure {
	FString ItemCommandString_23_11C9379C4A2BE25F4BFADD8CBA3978CC; // 0x0
	bool bEquip_9_A19EFA7A4F6CDA9056F641902DB36B2B; // 0x10
	int32_t SlotIndex_14_2F87447C4959EFB11C4D328275A0351E; // 0x14
	int32_t CustomType_26_75F60B7440E043592BCFC68101490C3D; // 0x18
};

struct FBravoHotelPersonalReward {
	int32_t GoldPerkill; // 0x0
	int32_t ExpPerKill; // 0x4
	int32_t PerDMG_BaseDMG; // 0x8
	int32_t GoldPerDMG; // 0xc
	int32_t ExpPerDMG; // 0x10
	int32_t PerTime_BaseTime; // 0x14
	int32_t PerTime_TimeLimit; // 0x18
	int32_t GoldPerTime; // 0x1c
	int32_t ExpPerTime; // 0x20
};

struct FNiagaraEmitterScriptProperties {
	UNiagaraScript* Script; // 0x0
	TArray<FNiagaraEventReceiverProperties> EventReceivers; // 0x8
	TArray<FNiagaraEventGeneratorProperties> EventGenerators; // 0x18
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

struct FMovieSceneSequenceID {
	uint32_t Value; // 0x0
};

struct FAnalysisClientGameCharacterData {
	bool bIsAI; // 0x0
	int32_t loc_x; // 0x4
	int32_t loc_y; // 0x8
	int32_t loc_z; // 0xc
	FString UserID; // 0x10
	FString NickName; // 0x20
	int32_t ClassIndex; // 0x30
	int32_t Level; // 0x34
	int32_t max_hp; // 0x38
	int32_t current_hp; // 0x3c
	TArray<int32_t> skill_perk_id; // 0x40
	FAnalysisClientGameWeaponData current_weapon; // 0x50
	FString equip_helmet; // 0x98
	int32_t helmet_durability; // 0xa8
	FString equip_armour; // 0xb0
	int32_t armour_durability; // 0xc0
	int32_t fire_type; // 0xc4
	int32_t zoom_type; // 0xc8
};

struct FBoneNode {
	int32_t ParentIndex; // 0x4
	FName Name; // 0xc
	EBoneTranslationRetargetingMode TranslationRetargetingMode; // 0x15
};

struct FPubSub_Message {
	FPubSub_Attribute Attributes; // 0x0
	FString Data; // 0x20
};

struct FPerPlatformInt {
	int32_t Default; // 0x0
};

struct FBandwidthTestItem {
	TArray<char> Kilobyte; // 0x0
};

struct FG2C_FriendWhoInvite_Data {
	FString FromUID; // 0x0
	FString fromPlayerName; // 0x10
};

struct FCompositeSection : FAnimLinkableElement {
	FName SectionName; // 0x30
	float StartTime; // 0x38
	FName NextSectionName; // 0x3c
	TArray<UAnimMetaData*> MetaData; // 0x48
};

struct FG2C_PartyWhoUpdatedPCInfo {
	FString Type; // 0x0
	FG2C_PartyWhoUpdatedPCInfo_Data Data; // 0x10
};

struct FColorCasterSettings {
	FString MaterialChannel; // 0x0
	EOpacityChannelComponent OpacityChannelComponent; // 0x10
	EDitherType DitherType; // 0x14
	EFillMode FillMode; // 0x18
	FString OpacityChannel; // 0x20
	char UseMultisampling : 1; // 0x30
	char BakeOpacityInAlpha : 1; // 0x30
	EOutputImageFileFormat OutputImageFileFormat; // 0x34
	EOutputDDSCompressionType OutputDDSCompressionType; // 0x38
	uint32_t Dilation; // 0x3c
	EOutputOpacityType OutputOpacityType; // 0x40
	EOutputPixelFormat OutputPixelFormat; // 0x44
	char SkipCastingIfNoInputChannel : 1; // 0x48
	char OutputSRGB : 1; // 0x48
};

struct FVertexInstancesForPolygonHole {
	TArray<FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs; // 0x0
};

struct FAnimNode_PoseDriver : FAnimNode_PoseHandler {
	FPoseLink SourcePose; // 0x78
	TArray<FBoneReference> SourceBones; // 0x88
	TArray<FBoneReference> OnlyDriveBones; // 0x98
	TArray<FPoseDriverTarget> PoseTargets; // 0xa8
	FBoneReference EvalSpaceBone; // 0xe8
	FRBFParams RBFParams; // 0xf8
	EPoseDriverSource DriveSource; // 0x124
	EPoseDriverOutput DriveOutput; // 0x125
	char bOnlyDriveSelectedBones : 1; // 0x126
};

struct FEulerTransform {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FVector Scale; // 0x18
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

struct FLiveLinkInterpolationSettings {
	bool bUseInterpolation; // 0x0
	float InterpolationOffset; // 0x4
};

struct FNiagaraEmitterHandle {
	FGuid ID; // 0x0
	FName IdName; // 0x10
	bool bIsEnabled; // 0x18
	FName Name; // 0x1c
	UNiagaraEmitter* Instance; // 0x28
};

struct FVolumeControlStyle : FSlateWidgetStyle {
	FSliderStyle SliderStyle; // 0x8
	FSlateBrush HighVolumeImage; // 0x348
	FSlateBrush MidVolumeImage; // 0x3d0
	FSlateBrush LowVolumeImage; // 0x458
	FSlateBrush NoVolumeImage; // 0x4e0
	FSlateBrush MutedImage; // 0x568
};

struct FNiagaraScriptDataInterfaceCompileInfo {
	FName Name; // 0x0
	int32_t UserPtrIdx; // 0x8
	FNiagaraTypeDefinition Type; // 0x10
	FName RegisteredParameterMapRead; // 0x20
	FName RegisteredParameterMapWrite; // 0x28
	bool bIsPlaceholder; // 0x30
};

struct FInventoryItemInfoArray {
	TArray<FInventoryItemInfo> ItemInfos; // 0x0
};

struct FWeaponAbilityData : FTableRowBase {
	FName WeaponKey; // 0x8
	FText DisplayName; // 0x10
	FText DisplayDesc; // 0x28
	FName AK_EventKey; // 0x40
	float CrosshairIncrease; // 0x48
	float CrosshairDecreaseSpeed; // 0x4c
	float CrosshairInterpSpeed; // 0x50
	UPaperSprite* SilhouetteIconTexture_PaperSprite; // 0x58
	EWeaponType WeaponType; // 0x60
	EThrowingWeaponType ThrowingWeaponType; // 0x61
	FText DisplayWeaponType; // 0x68
	FText DisplayRangeType; // 0x80
	int32_t Display_Damage; // 0x98
	int32_t Display_EffectiveRange; // 0x9c
	int32_t Display_Accuracy; // 0xa0
	int32_t Display_RateofFire; // 0xa4
	FName Display_AmmoInfo; // 0xa8
	FName AllowedAmmoName; // 0xb0
	float MinDamage; // 0xb8
	float MaxDamage; // 0xbc
	float Accuracy; // 0xc0
	float FireRate; // 0xc4
	float FireRateBurst; // 0xc8
	float Weight; // 0xcc
	int32_t NormalMagSize; // 0xd0
	int32_t LargeMagSize; // 0xd4
	FBravoHotelReloadInfo ReloadInfo; // 0xd8
	TArray<EWeaponFireMode> AllowedFireModes; // 0x190
	float ProjectileVelocity; // 0x1a0
	float TerminalVelocity; // 0x1a4
	int32_t BurstCount; // 0x1a8
	int32_t BulletsPerShot; // 0x1ac
	bool bIsBoltAction; // 0x1b0
	float BoltActionTime; // 0x1b4
	float ADSToReloadDelayTime; // 0x1b8
	float MoveSpeedModifier; // 0x1bc
	FBravoHotelSpreadInfo Spread; // 0x1c0
	FBravoHotelDeviation Deviation; // 0x200
	FBravoHotelRecoilInfo Recoil; // 0x230
	FBravoHotelDepthOfFieldBaseInfo DepthOfField; // 0x350
	FBravoHotelArmsLag ArmsLag; // 0x3a0
};

struct FCrosshairDataMap {
	TMap<ECrosshairPosition, FCrosshairData> Map; // 0x0
};

struct FVertexToMove {
	FVertexID VertexID; // 0x0
	FVector NewVertexPosition; // 0x4
};

struct FInAppPurchaseRestoreInfo {
	FString Identifier; // 0x0
	FString ReceiptData; // 0x10
	FString TransactionIdentifier; // 0x20
};

struct FLoserScoreElement {
	int32_t match_rating; // 0x0
	int32_t loser_level; // 0x4
	float max_score; // 0x8
	float score_by_rank; // 0xc
	float score_on_defeat; // 0x10
	float score_on_zero_kill; // 0x14
	float score_on_zero_assist; // 0x18
	float score_on_win; // 0x1c
	float score_per_kill; // 0x20
	float score_per_assist; // 0x24
};

struct FMK3DKillData {
	FString VictimNetId; // 0x0
	FString KillerName; // 0x10
	float KillerAppearanceTime; // 0x20
	FString VictimName; // 0x28
};

struct FLocalSpawnRate : FTableRowBase {
	FVector CenterLocation; // 0x8
	float Radius; // 0x14
	TArray<FHighTypeSpawnRate> highTypeList; // 0x18
};

struct FSKeyActionSave {
	FString ActionName_27_5885F13F40BEDA6C8B8F749EAEC64BBA; // 0x0
	FString Category_10_6A9C009143C58E50DF299AA2409B06BD; // 0x10
	FString Name_12_284B813542040EB40314D6A629BCF640; // 0x20
	float Scale_25_55DAC9F048835ECFBB2123B59FBB6835; // 0x30
	bool Primary_15_7375BAE94E1228E31B871684158CC790; // 0x34
	FKey KeyInput_26_669892994CD4745AD57CF4BDF708E2A0; // 0x38
	bool NegativeAxis_22_17736552415A5EA125B225BE5B8415AE; // 0x50
	bool EmptyCombination_29_A96B2E8F49C8DDD0067652A02233A112; // 0x51
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

struct FResponse_Google_JWT {
	FString access_token; // 0x0
	int32_t expires_in; // 0x10
	FString token_type; // 0x18
};

struct FInAppPurchaseReceiptInfo2 {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FNamedFilmbackPreset {
	FString Name; // 0x0
	FCameraFilmbackSettings FilmbackSettings; // 0x10
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
	FName ScopeName; // 0xc0
	ENiagaraScriptParameterUsage Usage; // 0xc8
	bool bIsStaticSwitch; // 0xcc
	int32_t StaticSwitchDefaultValue; // 0xd0
	bool bAddedToNodeGraphDeepCopy; // 0xd4
	bool bOutputIsPersistent; // 0xd5
	FName CachedNamespacelessVariableName; // 0xd8
	bool bCreatedInSystemEditor; // 0xe0
	bool bUseLegacyNameString; // 0xe1
};

struct FDestructibleAdvancedParameters {
	float DamageCap; // 0x0
	float ImpactVelocityThreshold; // 0x4
	float MaxChunkSpeed; // 0x8
	float FractureImpulseScale; // 0xc
};

struct FChaosBreakingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Mass; // 0x18
};

struct FCustomizableObjectVectorParameterValue {
	FString ParameterName; // 0x0
	FLinearColor ParameterValue; // 0x10
	FString UID; // 0x20
};

struct FStringCurveKey {
	float Time; // 0x0
	FString Value; // 0x8
};

struct FResponse_ScoreListArray {
	TArray<FResponse_PlayerScore_Rec> score_list; // 0x0
};

struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel RedChannel; // 0x48
	FMovieSceneFloatChannel GreenChannel; // 0xe8
	FMovieSceneFloatChannel BlueChannel; // 0x188
	FMovieSceneFloatChannel AlphaChannel; // 0x228
};

struct FAkMidiChannelAftertouch : FAkMidiEventBase {
	char Value; // 0x2
};

struct FDatasmithStaticParameterSetTemplate {
	TMap<FName, bool> StaticSwitchParameters; // 0x0
};

struct FSubmixEffectFilterSettings {
	ESubmixFilterType FilterType; // 0x0
	ESubmixFilterAlgorithm FilterAlgorithm; // 0x1
	float FilterFrequency; // 0x4
	float FilterQ; // 0x8
};

struct FG2C_PartyYouJoined_Data {
	FPartyInfo PartyInfo; // 0x0
	bool is_invite; // 0x68
};

struct FPrimaryAssetId {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FName PrimaryAssetName; // 0x8
};

struct FHitDamageLogInfo {
	EBroadCastKillMessageType DamageResult; // 0x0
	ABravoHotelPlayerState* TargetPlayerState; // 0x8
	float Defense; // 0x10
	int32_t HitCount; // 0x14
	int32_t DamageTypeRowID; // 0x18
	bool bIsHeadShot; // 0x1c
	FBravoHotelWeaponInfo WeaponInfo; // 0x20
	float Damage; // 0xb50
	int32_t WeaponLevel; // 0xb54
	bool bIsWeaponKill; // 0xb58
};

struct FAttackDamageWidgetInfo {
	AActor* DamageCauser; // 0x0
	AActor* TargetPawn; // 0x8
	float CurrentHitTimeSecond; // 0x10
	UUserWidget* Widget; // 0x18
	float Damage; // 0x20
	FString HitType; // 0x28
	float LifeTime; // 0x38
	bool bRand; // 0x3c
	FVector ImpactPoint; // 0x40
};

struct FResponse_PlayerScoreList {
	uint32_t C; // 0x0
	FString E; // 0x8
	FResponse_ScoreListArray D; // 0x18
};

struct FAnimSequenceTrackContainer {
	TArray<FRawAnimSequenceTrack> AnimationTracks; // 0x0
	TArray<FName> TrackNames; // 0x10
};

struct FQuestInfo {
	FName QuestKey; // 0x0
	int32_t ID; // 0x8
	EQuestState State; // 0xc
	int32_t CurrentProgress; // 0x10
	int32_t GoalProgress; // 0x14
	TArray<FQuestTaskInfo> Tasks; // 0x18
};

struct FInt32Interval {
	int32_t Min; // 0x0
	int32_t MAX; // 0x4
};

struct FPerkClassRuleData : FTableRowBase {
	TMap<FName, int32_t> PerkClassNumCap; // 0x8
	TMap<FName, float> PerkClassWeightModifier; // 0x58
};

struct FNormalCasterSettings {
	FString MaterialChannel; // 0x0
	EOpacityChannelComponent OpacityChannelComponent; // 0x10
	EDitherType DitherType; // 0x14
	EFillMode FillMode; // 0x18
	FString OpacityChannel; // 0x20
	char UseMultisampling : 1; // 0x30
	char FlipBackfacingNormals : 1; // 0x30
	EOutputImageFileFormat OutputImageFileFormat; // 0x34
	EOutputDDSCompressionType OutputDDSCompressionType; // 0x38
	uint32_t Dilation; // 0x3c
	char GenerateTangentSpaceNormals : 1; // 0x40
	EOutputPixelFormat OutputPixelFormat; // 0x44
	char FlipGreen : 1; // 0x48
	char CalculateBitangentPerFragment : 1; // 0x48
	char NormalizeInterpolatedTangentSpace : 1; // 0x48
};

struct FCarScanInfo {
	float CarScanRange; // 0x0
	float CarScanDuration; // 0x4
	bool bCarScanOutOfRange; // 0x8
};

struct FClothCollisionData {
	TArray<FClothCollisionPrim_Sphere> Spheres; // 0x0
	TArray<FClothCollisionPrim_SphereConnection> SphereConnections; // 0x10
	TArray<FClothCollisionPrim_Convex> Convexes; // 0x20
	TArray<FClothCollisionPrim_Box> Boxes; // 0x30
};

struct FAkWwiseObjectDetails {
	FString ItemName; // 0x0
	FString ItemPath; // 0x10
	FString ItemId; // 0x20
};

struct FCustomizedToolMenu {
	FName Name; // 0x0
	TMap<FName, FCustomizedToolMenuEntry> Entries; // 0x8
	TMap<FName, FCustomizedToolMenuSection> Sections; // 0x58
	TMap<FName, FCustomizedToolMenuNameArray> EntryOrder; // 0xa8
	TArray<FName> SectionOrder; // 0xf8
};

struct FWorldSpawnItemInfo {
	int32_t SpawnBoxID; // 0x0
	ABravoHotelPickup* SpawnItem; // 0x8
};

struct FRequest_MoveItem {
	uint32_t item_mid; // 0x0
	FString item_name; // 0x8
	int32_t inven_old_item_slot; // 0x18
	int32_t inven_new_item_slot; // 0x1c
};

struct FBravoHotelDepthOfFieldBaseInfo {
	TMap<EWeaponAttachmentItem, FBravoHotelDepthOfFieldDetailInfo> DetailInfo; // 0x0
};

struct FMKReplayReportInfo {
	FString ReporterName; // 0x0
	FString SuspectName; // 0x10
	int32_t ReportType; // 0x20
	int32_t ReplayTime; // 0x24
};

struct FBravoHotelFireCameraShakeInfo {
	int32_t BulletCountForMultiFire; // 0x0
	UCameraShake* FireCameraShake; // 0x8
	UCameraShake* FireCameraShake_ADS_SingleFire; // 0x10
	UCameraShake* FireCameraShake_ADS_MultiFire; // 0x18
};

struct FG2C_PartyInvite {
	FString Type; // 0x0
	FG2C_PartyInvite_Data Data; // 0x10
};

struct FRemeshingPipelineSettings : FSimplygonPipelineSettings {
	FRemeshingSettings RemeshingSettings; // 0x8
	FBoneSettings BoneSettings; // 0x40
	FGeometryCullingSettings GeometryCullingSettings; // 0x90
	FVisibilitySettings VisibilitySettings; // 0xc0
	FMappingImageSettings MappingImageSettings; // 0x108
	TArray<USimplygonMaterialCaster*> MaterialPropertyCasters; // 0x1b0
};

struct FResponse_Equipitem_Rec {
	uint32_t item_mid; // 0x0
	FString item_name; // 0x8
	int32_t inven_item_slot; // 0x18
	int32_t equip_item_slot; // 0x1c
};

struct FLinearConstraint : FConstraintBaseParams {
	float Limit; // 0x14
	ELinearConstraintMotion XMotion; // 0x18
	ELinearConstraintMotion YMotion; // 0x19
	ELinearConstraintMotion ZMotion; // 0x1a
};

struct FMaterialItemDistanceInfo {
	float Distance; // 0x0
	ABravoHotelPickup* MaterialItem; // 0x8
};

struct FMagicLeapPlaneBoundary {
	FMagicLeapPolygon Polygon; // 0x0
	TArray<FMagicLeapPolygon> Holes; // 0x10
};

struct FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FInputChord InputChord; // 0x8
	EInputEvent InputKeyEvent; // 0x28
	FName FunctionNameToBind; // 0x2c
};

struct FAttenuationSubmixSendSettings {
	USoundSubmix* Submix; // 0x0
	ESubmixSendMethod SubmixSendMethod; // 0x8
	float SubmixSendLevelMin; // 0xc
	float SubmixSendLevelMax; // 0x10
	float SubmixSendDistanceMin; // 0x14
	float SubmixSendDistanceMax; // 0x18
	float ManualSubmixSendLevel; // 0x1c
	FRuntimeFloatCurve CustomSubmixSendCurve; // 0x20
};

struct FStructRedirect {
	FName OldStructName; // 0x0
	FName NewStructName; // 0x8
};

struct FConditionedSound {
	int32_t ConditionMask; // 0x0
	UAkAudioEvent* Event; // 0x8
};

struct FUserWidgetPool {
	TArray<UUserWidget*> ActiveWidgets; // 0x0
	TArray<UUserWidget*> InactiveWidgets; // 0x10
};

struct FNodeChain {
	TArray<FName> Nodes; // 0x0
};

struct FPackedNormal {
	char X; // 0x0
	char Y; // 0x1
	char Z; // 0x2
	char W; // 0x3
};

struct FAkWaapiUri {
	FString Uri; // 0x0
};

struct FAnalysisClientGameLoadingData {
	bool game_start; // 0x0
	int32_t loading_seconds; // 0x4
	int32_t relative_loading_seconds; // 0x8
};

struct FResponse_CreatePlayer {
	uint32_t C; // 0x0
	FString E; // 0x8
	FResponse_CreatePlayer_Rec D; // 0x18
};

struct FPerkBaseData : FTableRowBase {
	int32_t ID; // 0x8
	FText DisplayName; // 0x10
	FText DisplayShortName; // 0x28
	FText Description; // 0x40
	FText Tooltip; // 0x58
	TSoftObjectPtr<UObject> SlotIconTexture; // 0x70
	int32_t MaxGrade; // 0x98
	int32_t grade; // 0x9c
	FName TextTableIndex; // 0xa0
	TArray<FName> EquipableClass; // 0xa8
	char EquipableSlot; // 0xb8
	FName SpecialWeaponName; // 0xbc
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

struct FMidTypeSpawnRate {
	FString midTypeName; // 0x0
	float SpawnRate; // 0x10
	TArray<FItemSpawnRate> ItemList; // 0x18
};

struct FProjectVersionData {
	uint32_t Major; // 0x0
	uint32_t Minor; // 0x4
	uint32_t Patch; // 0x8
	uint32_t Hotfix; // 0xc
	uint32_t ChangeList; // 0x10
	uint32_t MaxRemoteChangelist; // 0x14
	uint32_t MinRemoteChangelist; // 0x18
	uint32_t ReplayVersion; // 0x1c
	FString GeeGeeAppId; // 0x20
};

struct FLimitedCollection : FTableRowBase {
	int32_t StackableMaxCount; // 0x8
	FText Notice; // 0x10
};

struct FAwsIdentityIDResponse {
	FString IdentityId; // 0x0
};

struct FWeightmapLayerAllocationInfo {
	ULandscapeLayerInfoObject* LayerInfo; // 0x0
	char WeightmapTextureIndex; // 0x8
	char WeightmapTextureChannel; // 0x9
};

struct FWeightedBlendables {
	TArray<FWeightedBlendable> Array; // 0x0
};

struct FAnimNode_AssetPlayerBase : FAnimNode_Base {
	int32_t GroupIndex; // 0x10
	EAnimGroupRole GroupRole; // 0x14
	bool bIgnoreForRelevancyTest; // 0x15
	float BlendWeight; // 0x18
	float InternalTimeAccumulator; // 0x1c
};

struct FAkWindowsAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x38
	bool GlobalFocus; // 0x3c
	bool UseHeadMountedDisplayAudioDevice; // 0x3d
};

struct FAnalysisClientClassChangeData {
	int32_t use_gold; // 0x0
	int32_t after_gold; // 0x4
	int32_t before_class; // 0x8
	int32_t change_class; // 0xc
	int32_t class_select_mode; // 0x10
	int32_t class_select_type; // 0x14
	bool is_recommended_select; // 0x18
};

struct FAnalysisClientGameItemSearchData {
	int32_t search_type; // 0x0
	int32_t select_item_id; // 0x4
	TArray<FItemSearchLog> find_recipe_list; // 0x8
};

struct FPerkInGameData : FTableRowBase {
	FText DisplayName; // 0x8
	TMap<FString, FText> DisplayNameValues; // 0x20
	FText Description; // 0x70
	TMap<FString, FText> DescriptionValues; // 0x88
	FText PopupName; // 0xd8
	FText PopupNewDesc; // 0xf0
	FText PopupLevelUpDesc; // 0x108
	TMap<FString, FText> PopupLevelUpDescValues; // 0x120
	TSoftObjectPtr<UAkAudioEvent> PopupNewSound; // 0x170
	FName DisplayKey; // 0x198
	int32_t DisplayPower; // 0x1a0
	int32_t DisplaySpeed; // 0x1a4
	int32_t DisplayDefense; // 0x1a8
	int32_t Level; // 0x1ac
	int32_t MaxLevel; // 0x1b0
	int32_t NextLevelExp; // 0x1b4
	TArray<FName> BuffNames; // 0x1b8
};

struct FG2C_MatchRequest_Data {
	FString person; // 0x0
	FString Mode; // 0x10
	FString Map; // 0x20
	int32_t how; // 0x30
};

struct FGeometryCullingSettings {
	char UseClippingPlanes : 1; // 0x0
	int32_t ClippingPlaneSelectionSetID; // 0x4
	FString ClippingPlaneSelectionSetName; // 0x8
	char UseClippingGeometry : 1; // 0x18
	int32_t ClippingGeometrySelectionSetID; // 0x1c
	FString ClippingGeometrySelectionSetName; // 0x20
};

struct FGameplayTagContainer {
	TArray<FGameplayTag> GameplayTags; // 0x0
	TArray<FGameplayTag> ParentTags; // 0x10
};

struct FMagicLeapPlaneBoundaries {
	FGuid ID; // 0x0
	TArray<FMagicLeapPlaneBoundary> Boundaries; // 0x10
};

struct FSoundConcurrencySettings {
	int32_t MaxCount; // 0x0
	char bLimitToOwner : 1; // 0x4
	EMaxConcurrentResolutionRule ResolutionRule; // 0x8
	float VolumeScale; // 0xc
	float VolumeScaleAttackTime; // 0x10
	char bVolumeScaleCanRelease : 1; // 0x14
	float VolumeScaleReleaseTime; // 0x18
	float VoiceStealReleaseTime; // 0x1c
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

struct FTransformNoScale {
	FVector Location; // 0x0
	FQuat Rotation; // 0x10
};

struct FSoundModulationParameter {
	FName Control; // 0x0
	float Value; // 0x8
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

struct FHideObjectInfo {
	TArray<FHideObjectSingleInfo> Objects; // 0x0
	FString TagName; // 0x10
};

struct FAnimationSetup {
	UAnimSequence* AnimSequence; // 0x0
	UAnimSharingStateInstance* AnimBlueprint; // 0x8
	FPerPlatformInt NumRandomizedInstances; // 0x10
	FPerPlatformBool Enabled; // 0x14
};

struct FInterpCurvePointTwoVectors {
	float InVal; // 0x0
	FTwoVectors OutVal; // 0x4
	FTwoVectors ArriveTangent; // 0x1c
	FTwoVectors LeaveTangent; // 0x34
	EInterpCurveMode InterpMode; // 0x4c
};

struct FNiagaraParameterDataSetBinding {
	int32_t ParameterOffset; // 0x0
	int32_t DataSetComponentOffset; // 0x4
};

struct FReplayFireEvent {
	FString NetGUID; // 0x0
	FRepProjectileInfo ProjectileInfo; // 0x10
};

struct FFilmStockSettings {
	float Slope; // 0x0
	float Toe; // 0x4
	float Shoulder; // 0x8
	float BlackClip; // 0xc
	float WhiteClip; // 0x10
};

struct FJoinGameUserData {
	FName Name; // 0x0
	int32_t UniqueID; // 0x8
};

struct FSkeletalMeshSamplingInfo {
	TArray<FSkeletalMeshSamplingRegion> Regions; // 0x0
	FSkeletalMeshSamplingBuiltData BuiltData; // 0x10
};

struct FNamedVector {
	FVector Value; // 0x0
	FName Name; // 0xc
};

struct FMTDResult {
	FVector Direction; // 0x0
	float Distance; // 0xc
};

struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x20
};

struct FParticleReplayTrackKey {
	float Time; // 0x0
	float Duration; // 0x4
	int32_t ClipIDNumber; // 0x8
};

struct FBPInterfaceDescription {
	UInterface* Interface; // 0x0
	TArray<UEdGraph*> Graphs; // 0x8
};

struct FBranchFilter {
	FName BoneName; // 0x0
	int32_t BlendDepth; // 0x8
};

struct FLaunchOnTestSettings {
	FFilePath LaunchOnTestmap; // 0x0
	FString DeviceID; // 0x10
};

struct FFOscillator {
	float Amplitude; // 0x0
	float Frequency; // 0x4
	EInitialOscillatorOffset InitialOffset; // 0x8
	EOscillatorWaveform Waveform; // 0x9
};

struct FCharacterMutableTagData {
	int16_t HelmetLevel; // 0x0
	int16_t ArmorLevel; // 0x2
	int16_t BackpackLevel; // 0x4
	bool bHoodOn; // 0x6
	bool bPonyDynamicOn; // 0x7
	bool bCoatDynamicOn; // 0x8
	bool bSkirtDynamicOn; // 0x9
	bool bSkirtDynamicOff; // 0xa
	bool bBackpackDynamicOff; // 0xb
	FString TargetBackpackPhysicsBone; // 0x10
	bool bUseBack03_Slot; // 0x20
	bool bUseRPG_Slot; // 0x21
	bool bOuter; // 0x22
	bool bGhillie; // 0x23
	bool bHalfGhillie; // 0x24
};

struct FMovieSceneTangentData {
	float ArriveTangent; // 0x0
	float LeaveTangent; // 0x4
	float ArriveTangentWeight; // 0x8
	float LeaveTangentWeight; // 0xc
	ERichCurveTangentWeightMode TangentWeightMode; // 0x10
};

struct FSessionServicePing {
	FString UserName; // 0x0
};

struct FItemSpawnLimitInfo {
	int32_t MaxLimitCnt; // 0x0
	int32_t UserCnt1; // 0x4
	int32_t LimitCnt1; // 0x8
	int32_t UserCnt2; // 0xc
	int32_t LimitCnt2; // 0x10
};

struct FCameraLookatTrackingSettings {
	char bEnableLookAtTracking : 1; // 0x0
	char bDrawDebugLookAtTrackingPosition : 1; // 0x0
	float LookAtTrackingInterpSpeed; // 0x4
	TSoftObjectPtr<AActor> ActorToTrack; // 0x18
	FVector RelativeOffset; // 0x40
	char bAllowRoll : 1; // 0x4c
};

struct FAnimNode_RandomPlayer : FAnimNode_Base {
	TArray<FRandomPlayerSequenceEntry> Entries; // 0x10
	bool bShuffleMode; // 0x70
};

struct FFloatCurve : FAnimCurveBase {
	FRichCurve FloatCurve; // 0x18
};

struct FRootMotionSourceGroup {
	char bHasAdditiveSources : 1; // 0x28
	char bHasOverrideSources : 1; // 0x28
	char bHasOverrideSourcesWithIgnoreZAccumulate : 1; // 0x28
	char bIsAdditiveVelocityApplied : 1; // 0x28
	FRootMotionSourceSettings LastAccumulatedSettings; // 0x29
	FVector_NetQuantize10 LastPreAdditiveVelocity; // 0x2c
};

struct FFrameNumber {
	int32_t Value; // 0x0
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

struct FG2C_Update_AuthToken {
	FString Type; // 0x0
	FG2C_Update_AuthToken_Data Data; // 0x10
};

struct FEnvNamedValue {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
};

struct FEquirectProps {
	FBox2D LeftUVRect; // 0x0
	FBox2D RightUVRect; // 0x14
	FVector2D LeftScale; // 0x28
	FVector2D RightScale; // 0x30
	FVector2D LeftBias; // 0x38
	FVector2D RightBias; // 0x40
};

struct FTimeStretchCurveInstance {
	bool bHasValidData; // 0x0
};

struct FResponse_CraftWeapon_Material {
	int32_t table_index; // 0x0
	FString item_id; // 0x8
	int32_t stack_count; // 0x18
};

struct FAnimationTransitionRule {
	FName RuleToExecute; // 0x0
	bool TransitionReturnVal; // 0x8
	int32_t TransitionIndex; // 0xc
};

struct FBuildPromotionTestSettings {
	FFilePath DefaultStaticMeshAsset; // 0x0
	FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10
	FBuildPromotionOpenAssetSettings OpenAssets; // 0x160
	FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1c0
	FFilePath SourceControlMaterial; // 0x1e0
};

struct FBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputAxisName; // 0x4
	FName FunctionNameToBind; // 0xc
};

struct FKillBroadcastKillerInfo {
	ABravoHotelPlayerState* PlayerState; // 0x0
	bool IsHeadShot; // 0x8
	bool IsSelfKill; // 0x9
	bool IsTeamKill; // 0xa
	bool IsWeaponKill; // 0xb
	FBravoHotelWeaponInfo WeaponInfo; // 0x10
	FDamageTypeTable DamageTypeRow; // 0xb40
};

struct FLogWeaponSlots {
	TArray<FLogEquippedWeaponInfo> weapon_slots; // 0x0
};

struct FAddPerkInfos : FTableRowBase {
	TArray<FAddPerkInfoArray> AddPerkInfos; // 0x8
};

struct FTearOffActorInfo {
	AActor* Actor; // 0x8
};

struct FProgressBarStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundImage; // 0x8
	FSlateBrush FillImage; // 0x90
	FSlateBrush MarqueeImage; // 0x118
};

struct FGuid {
	int32_t A; // 0x0
	int32_t B; // 0x4
	int32_t C; // 0x8
	int32_t D; // 0xc
};

struct FRepWCLevelVisibilityInfo {
	int32_t TileIndex; // 0x0
	char bIsVisible : 1; // 0x4
};

struct FRepVehicleSeatInfo {
	char bIsOccupied : 1; // 0x0
	AActor* Occupant; // 0x8
};

struct FGeneratedMesh {
	int32_t ID; // 0x0
	UStaticMesh* Mesh; // 0x8
};

struct FCoh_Reward {
	int32_t TableIndex; // 0x0
	int32_t Count; // 0x4
};

struct FGamePerformanceMonitoringData {
	FString Timestamp; // 0x0
	float AverageFPS; // 0x10
	uint32_t Phase; // 0x14
	uint32_t PlayerCount; // 0x18
	uint32_t HitchCount; // 0x1c
};

struct FAnalysisClientGameReporterDataHead {
	int32_t DateTime; // 0x0
	FString match_id; // 0x8
	FString game_server_id; // 0x18
	FString MapName; // 0x28
	int32_t GameViewType; // 0x38
	int32_t GameMode; // 0x3c
	int32_t BattleMode; // 0x40
	FString cqr_type; // 0x48
	int32_t bluezone_id; // 0x58
	int32_t phase_info; // 0x5c
	int32_t current_survival_player; // 0x60
	int32_t current_survival_team; // 0x64
	int32_t team_id; // 0x68
	int32_t team_cnt; // 0x6c
	int32_t current_rank; // 0x70
	FString UserID; // 0x78
	FString NickName; // 0x88
};

struct FSelecteSearchMaterialItemInfo {
	FName TopRecipeItem; // 0x0
	FName SelectRecipeItem; // 0x8
};

struct FLevelUpInfo {
	int32_t UpCount; // 0x0
	float SpawnDelay; // 0x4
};

struct FMovieSceneTangentDataSerializationHelper {
	float ArriveTangent; // 0x0
	float LeaveTangent; // 0x4
	ERichCurveTangentWeightMode TangentWeightMode; // 0x8
	float ArriveTangentWeight; // 0xc
	float LeaveTangentWeight; // 0x10
};

struct FClassInfo {
	uint32_t pc_class_type_index; // 0x0
	uint32_t base_weapon_index; // 0x4
	TArray<uint32_t> ignore_pc_class_type_indexs; // 0x8
	bool is_get_ultimate_skill; // 0x18
	int32_t Level; // 0x1c
	int32_t level_up_by_book; // 0x20
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

struct FPlayerMuteList {
	bool bHasVoiceHandshakeCompleted; // 0x30
	int32_t VoiceChannelIdx; // 0x34
};

struct FMovieSceneEventTemplateBase : FMovieSceneEvalTemplate {
	TArray<FMovieSceneObjectBindingID> EventReceivers; // 0x20
	char bFireEventsWhenForwards : 1; // 0x30
	char bFireEventsWhenBackwards : 1; // 0x30
};

struct FMovieSceneEvaluationTemplateSerialNumber {
	uint32_t Value; // 0x0
};

struct FEventTrackKey {
	float Time; // 0x0
	FName EventName; // 0x4
};

struct FGameSettingInfo {
	TArray<FDeckBlockElement> classindex_activeinfos; // 0x0
	bool redzone_active; // 0x10
	bool vehicle_active; // 0x11
	int32_t ultimate_unlocklevel; // 0x14
	int32_t standby_timer; // 0x18
	int32_t ready_timer; // 0x1c
	TArray<FGameSettingCQRElement> cqr_quickstartinfos; // 0x20
	TArray<FGameSettingClassSelectInfoElement> class_select_info; // 0x30
	TArray<FGameSettingClassChangeInfoElement> class_change_info; // 0x40
	int32_t newbie_play_count; // 0x50
	TArray<int32_t> loser_level_score; // 0x58
	TArray<FLoserScoreElement> loser_scores; // 0x68
	TArray<FString> user_score_test_uid; // 0x78
};

struct FItemEffectSubParticleInfo {
	UParticleSystem* Particle; // 0x0
	EItemEffectSubParticleSpawnState SpawnType; // 0x8
	TMap<FName, FLinearColor> ParticleColor; // 0x10
	FVector Scale; // 0x60
};

struct FChangeVertexInstancesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs; // 0x8
	TArray<FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole; // 0x18
};

struct FMediaPlayerOptions {
	FMediaPlayerTrackOptions Tracks; // 0x0
	FTimespan SeekTime; // 0x20
	EMediaPlayerOptionBooleanOverride PlayOnOpen; // 0x28
	EMediaPlayerOptionBooleanOverride Loop; // 0x29
};

struct FCheaCommandSubInfo {
	CheatSubType SubType; // 0x0
	TArray<FCheaCommandInfo> CommandList; // 0x8
};

struct FAttributesForVertexInstance {
	FVertexInstanceID VertexInstanceID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
};

struct FSimulatedRootMotionReplicatedMove {
	float Time; // 0x0
	FRepRootMotionMontage RootMotion; // 0x8
};

struct FResponse_InvenListArray {
	TArray<FResponse_ItemList_Rec> inventory; // 0x0
};

struct FAnimNotifyQueue {
	TArray<FAnimNotifyEventReference> AnimNotifies; // 0x10
	TMap<FName, FAnimNotifyArray> UnfilteredMontageAnimNotifies; // 0x20
};

struct FBravoHotelFallingAnimParameters {
	float StartTime; // 0x0
	float ApexTime; // 0x4
	float EndTime; // 0x8
};

struct FRootMotionMovementParams {
	bool bHasRootMotion; // 0x0
	float BlendWeight; // 0x4
	FTransform RootMotionTransform; // 0x10
};

struct FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer {
	FPoseLink BasePose; // 0x140
	int32_t LODThreshold; // 0x150
	FName SourceSocketName; // 0x154
	FName PivotSocketName; // 0x15c
	FVector LookAtLocation; // 0x164
	FVector SocketAxis; // 0x170
	float ALPHA; // 0x17c
};

struct FPlane : FVector {
	float W; // 0xc
};

struct FDataTableCategoryHandle {
	UDataTable* DataTable; // 0x0
	FName ColumnName; // 0x8
	FName RowContents; // 0x10
};

struct FAnimNotifyArray {
	TArray<FAnimNotifyEventReference> Notifies; // 0x0
};

struct FAnalysisClientGameKnockDownedAttackData {
	FString damage_type; // 0x0
	int32_t damage_type_index; // 0x10
	int32_t damage_weapon_id; // 0x14
	FString damage_weapon_name; // 0x18
	FString hit_bone; // 0x28
	int32_t Damage; // 0x38
	int32_t Distance; // 0x3c
	int32_t team_kill; // 0x40
	FAnalysisClientGameCharacterMiniData attacker_info; // 0x48
	FAnalysisClientGameCharacterData victim_info; // 0xe0
};

struct FAkMidiCc : FAkMidiEventBase {
	EAkMidiCcValues Cc; // 0x2
	char Value; // 0x3
};

struct FStaticSwitchParameter : FStaticParameterBase {
	bool Value; // 0x24
};

struct FNodeHierarchyWithUserData {
	FNodeHierarchyData Hierarchy; // 0x8
};

struct FResponse_InviteFriend_Rec {
	FString invite_user_id; // 0x0
};

struct FBookSpawnInfo {
	FSpawnPerkInfo SpawnPerkInfo; // 0x0
	FTimerHandle SpawnBookTimerHandle; // 0x50
};

struct FTextureFormatSettings {
	TextureCompressionSettings CompressionSettings; // 0x0
	char CompressionNoAlpha : 1; // 0x1
	char CompressionNone : 1; // 0x1
	char CompressionYCoCg : 1; // 0x1
	char SRGB : 1; // 0x1
};

struct FNodeItem {
	FName ParentName; // 0x0
	FTransform Transform; // 0x10
};

struct FLightingChannels {
	char bChannel0 : 1; // 0x0
	char bChannel1 : 1; // 0x0
	char bChannel2 : 1; // 0x0
};

struct FDestructibleDepthParameters {
	EImpactDamageOverride ImpactDamageOverride; // 0x0
};

struct FG2C_PartyKickSomeone_Data {
	uint32_t C; // 0x0
	FString E; // 0x8
	FString D; // 0x18
};

struct FEpicSynth1Patch {
	ESynth1PatchSource PatchSource; // 0x0
	TArray<FSynth1PatchCable> PatchCables; // 0x8
};

struct FTimelineFloatTrack {
	UCurveFloat* FloatCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName FloatPropertyName; // 0x20
};

struct FG2C_Update_AuthToken_Data {
	FString auth_token; // 0x0
};

struct FG2C_Notify_Alarm_Data {
	int32_t notify_alarm; // 0x0
};

struct FTwistConstraint : FConstraintBaseParams {
	float TwistLimitDegrees; // 0x14
	EAngularConstraintMotion TwistMotion; // 0x18
};

struct FAssetRegistryDependencyOptions {
	bool bIncludeSoftPackageReferences; // 0x0
	bool bIncludeHardPackageReferences; // 0x1
	bool bIncludeSearchableNames; // 0x2
	bool bIncludeSoftManagementReferences; // 0x3
	bool bIncludeHardManagementReferences; // 0x4
};

struct FAnimBlueprintFunctionData {
	TFieldPath<FStructProperty> OutputPoseNodeProperty; // 0x0
	TArray<TFieldPath<FStructProperty>> InputPoseNodeProperties; // 0x20
	TArray<TFieldPath<FProperty>> InputProperties; // 0x30
};

struct FDatasmithStaticMaterialTemplate {
	FName MaterialSlotName; // 0x0
	UMaterialInterface* MaterialInterface; // 0x8
};

struct FPawnActionEvent {
	UPawnAction* Action; // 0x0
};

struct FExcelFill {
	ExcelFillType Type; // 0x0
	FExcelPatternFill PatternFill; // 0x4
	FExcelGradientFill GradientFill; // 0x48
};

struct FDatasmithCameraFocusSettingsTemplate {
	ECameraFocusMethod FocusMethod; // 0x0
	float ManualFocusDistance; // 0x4
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

struct FRotationLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
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

struct FCameraEffectData : FTableRowBase {
	float Duration; // 0x8
	UParticleSystem* Particle_TPP; // 0x10
	UParticleSystem* Particle_FPP; // 0x18
	FVector ParticlePivot; // 0x20
	TMap<FName, FLinearColor> EffectColor; // 0x30
};

struct FVehicleGearData {
	float Ratio; // 0x0
	float DownRatio; // 0x4
	float UpRatio; // 0x8
};

struct FRedisPubSub_LoadMap : FRedisPubSub_Header {
	FString map_name; // 0x10
};

struct FHideObjectSingleInfo {
	UObject* HideObject; // 0x0
};

struct FSourceEffectStereoDelaySettings {
	EStereoDelaySourceEffect DelayMode; // 0x0
	float DelayTimeMsec; // 0x4
	float Feedback; // 0x8
	float DelayRatio; // 0xc
	float WetLevel; // 0x10
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

struct FVehicleRandomSpawn : FTableRowBase {
	TArray<FVehicleSpawnRate> List; // 0x8
};

struct FEdGraphPinReference {
	TWeakObjectPtr<UEdGraphNode> OwningNode; // 0x0
	FGuid PinID; // 0x8
};

struct FReplayDiedSaveInfo {
	FReplayDiedKillerInfo Attacker; // 0x0
	FReplayDiedKillerInfo KnockOut; // 0x20
	FReplayDiedKillerInfo Killer; // 0x40
	FReplayDiedPlayerInfo SubKiller; // 0x60
	FReplayDiedPlayerInfo Died; // 0x78
	TArray<FReplayDiedPlayerInfo> Assist; // 0x90
	bool IsFinallyKill; // 0xa0
	int32_t KillCount; // 0xa4
	EBroadCastKillMessageType BroadCastKillMessageType; // 0xa8
};

struct FSteamFriendInfo {
	FUniqueNetIdRepl UniqueNetId; // 0x0
	FString DisplayName; // 0x28
	FString RealName; // 0x38
	ESteamPresenceState OnlineState; // 0x48
	bool bIsOnline; // 0x49
	bool bIsPlaying; // 0x4a
	bool bIsPlayingThisGame; // 0x4b
	bool bIsJoinable; // 0x4c
	bool bHasVoiceSupport; // 0x4d
};

struct FSupplyBoxItemInfo {
	FName Name; // 0x0
	AStaticMeshActor* Actor; // 0x8
	UParticleSystemComponent* SupplyMeshParticle; // 0x10
	int32_t Idx; // 0x18
	TArray<FVector2D> ToolTipOffset; // 0x20
};

struct FSourceEffectPhaserSettings {
	float WetLevel; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	EPhaserLFOType LFOType; // 0xc
	bool UseQuadraturePhase; // 0xd
};

struct FStandardGroupItemInfo {
	FName StandardGroupItemKey; // 0x0
	int32_t Count; // 0x8
};

struct FColorGradePerRangeSettings {
	FVector4 Saturation; // 0x0
	FVector4 Contrast; // 0x10
	FVector4 Gamma; // 0x20
	FVector4 Gain; // 0x30
	FVector4 Offset; // 0x40
};

struct FChaosTrailingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinAngularSpeed; // 0xc
	float MaxDistance; // 0x10
	EChaosTrailingSortMethod SortMethod; // 0x14
};

struct FVector4 {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FFontRenderInfo {
	char bClipText : 1; // 0x0
	char bEnableShadow : 1; // 0x0
	FDepthFieldGlowInfo GlowInfo; // 0x4
};

struct FVMExternalFunctionBindingInfo {
	FName Name; // 0x0
	FName OwnerName; // 0x8
	TArray<bool> InputParamLocations; // 0x10
	int32_t NumOutputs; // 0x20
	TArray<FVMFunctionSpecifier> FunctionSpecifiers; // 0x28
};

struct FBoostTypeData : FTableRowBase {
	float BoostMax; // 0x8
	TArray<FBoostTypeElement> BoostDefine; // 0x10
};

struct FDatasmithAssetImportOptions {
	FName PackagePath; // 0x0
};

struct FAnalysisClientGameDiedKillData {
	FString damage_type; // 0x0
	int32_t damage_type_index; // 0x10
	int32_t damage_weapon_id; // 0x14
	FString damage_weapon_name; // 0x18
	FString hit_bone; // 0x28
	int32_t Damage; // 0x38
	int32_t Distance; // 0x3c
	int32_t team_kill; // 0x40
	FAnalysisClientGameCharacterData knockdown_attacker_info; // 0x48
	FAnalysisClientGameCharacterData killer_info; // 0x118
	FAnalysisClientGameCharacterMiniData attacker_info; // 0x1e8
	FAnalysisClientGameDiedVictimCharacterData victim_info; // 0x280
};

struct FDataEventClientGameIllegalUsers : FDataEventBase {
	FAnalysisClientGameIllegalReportUserData ReportUserData; // 0x58
};

struct FMagicLeapTrackingMeshInfo {
	FTimespan Timestamp; // 0x0
	TArray<FMagicLeapMeshBlockInfo> BlockData; // 0x8
};

struct FSKeyConflict {
	UBP_KeyCombination_C* ConflictingCombination_12_3DB110B5406338347E3A6897032E00F8; // 0x0
	EKeyConflict ConflictType_7_4EB561DE4E1187B4D868FAB6B58BCAE3; // 0x8
};

struct FLiveLinkTime {
	double WorldTime; // 0x0
	FQualifiedFrameTime SceneTime; // 0x8
};

struct FResultMessageInfo {
	int32_t Amount; // 0x0
	ENormalType Type; // 0x4
};

struct FResuscitationMarkerInfo {
	FVector2D Pos; // 0x0
	FVector2D PrePos; // 0x8
	UWidget* Widget; // 0x10
	ABravoHotelPlayerState* PlayerState; // 0x18
};

struct FRepSimulatedDeathInfo {
	char bRagdollStartForce : 1; // 0x0
	FVector_NetQuantize RagdollStartForce; // 0x4
	FVector_NetQuantizeNormal DeathRotation; // 0x10
	UAnimMontage* Anim1P; // 0x20
	UAnimMontage* Anim3P; // 0x28
};

struct FG2C_SetCloseMatchMakingTag {
	FString Type; // 0x0
	FG2C_SetCloseMatchMakingTag_Data Data; // 0x10
};

struct FAnalysisClientGameWeaponData {
	int32_t item_id; // 0x0
	FString item_name; // 0x8
	bool is_expert_weapon; // 0x18
	int32_t grade; // 0x1c
	int32_t enchant; // 0x20
	int32_t perk_id_2; // 0x24
	int32_t perk_id_3; // 0x28
	int32_t perk_id_4; // 0x2c
	int32_t perk_id_5; // 0x30
	FAnalysisPartsData parts_id; // 0x34
};

struct FSeatInfo {
	int32_t Index; // 0x0
	bool Show; // 0x4
	bool Mine; // 0x5
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

struct FPerkLevelUpElement {
	int32_t Level; // 0x0
	int32_t MaxLevel; // 0x4
	FText DisplayName; // 0x8
	FText DisplayDesc; // 0x20
	int32_t DisplayPower; // 0x38
	int32_t DisplaySpeed; // 0x3c
	int32_t DisplayDefense; // 0x40
	TArray<FName> BuffNames; // 0x48
};

struct FHmdUserProfile {
	FString Name; // 0x0
	FString gender; // 0x10
	float PlayerHeight; // 0x20
	float EyeHeight; // 0x24
	float IPD; // 0x28
	FVector2D NeckToEyeDistance; // 0x2c
	TArray<FHmdUserProfileField> ExtraFields; // 0x38
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

struct FMaterialCachedParameters {
	FMaterialCachedParameterEntry Entries[0x5]; // 0x0
	TArray<float> ScalarValues; // 0x140
	TArray<FLinearColor> VectorValues; // 0x150
	TArray<UTexture*> TextureValues; // 0x160
	TArray<UFont*> FontValues; // 0x170
	TArray<int32_t> FontPageValues; // 0x180
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextureValues; // 0x190
};

struct FSoundWaveSpectralDataPerSound {
	TArray<FSoundWaveSpectralData> SpectralData; // 0x0
	float PlaybackTime; // 0x10
	USoundWave* SoundWave; // 0x18
};

struct FRawDistributionFloat : FRawDistribution {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	UDistributionFloat* Distribution; // 0x28
};

struct FCoherentSavedSettings {
	FString UserID; // 0x0
	bool bArmory; // 0x10
	bool bInventory; // 0x11
	bool bSupplybox; // 0x12
	bool bInviteBox; // 0x13
};

struct FSourceEffectBitCrusherSettings {
	float CrushedSampleRate; // 0x0
	float CrushedBits; // 0x4
};

struct FMargin {
	float Left; // 0x0
	float Top; // 0x4
	float Right; // 0x8
	float Bottom; // 0xc
};

struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneIntegerChannel IntegerChannel; // 0x48
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

struct FSliderStyle : FSlateWidgetStyle {
	FSlateBrush NormalBarImage; // 0x8
	FSlateBrush HoveredBarImage; // 0x90
	FSlateBrush DisabledBarImage; // 0x118
	FSlateBrush NormalThumbImage; // 0x1a0
	FSlateBrush HoveredThumbImage; // 0x228
	FSlateBrush DisabledThumbImage; // 0x2b0
	float BarThickness; // 0x338
};

struct FResponse_FriendListArray {
	TArray<FResponse_FriendInfo_Rec> friendInfoList; // 0x0
};

struct FActorSequenceObjectReferences {
	TArray<FActorSequenceObjectReference> Array; // 0x0
};

struct FPerkDeckNewbieAdvantage {
	TArray<FExpertWeaponSimpleElement> ExpertWeaponOverride; // 0x0
	bool bRecommend; // 0x10
	float PerkDeckWeightModifier; // 0x14
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

struct FItemMaterialData : FTableRowBase {
	int32_t ID; // 0x8
	FText DisplayName; // 0x10
	FText Description; // 0x28
	int32_t Rarity; // 0x40
	int32_t Slot; // 0x44
	FName TargetIngameItem; // 0x48
	int32_t CraftingID; // 0x50
	TSoftObjectPtr<UObject> SlotIconTexture; // 0x58
	TSoftObjectPtr<UObject> SlotIconTexture1024; // 0x80
	UArmoryDataAsset* DataAsset; // 0xa8
	int32_t Limit; // 0xb0
	int32_t Price; // 0xb4
	FText Filter; // 0xb8
};

struct FSocketReference {
	FName SocketName; // 0x30
};

struct FA2CSPose : FA2Pose {
	TArray<char> ComponentSpaceFlags; // 0x18
};

struct FLiveLinkWorldTime {
	double Time; // 0x0
	double Offset; // 0x8
};

struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0xc8
	TArray<FConstraint> ConstraintSetup; // 0xd8
	TArray<float> ConstraintWeights; // 0xe8
};

struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore {
	int32_t ParameterSize; // 0xb8
	uint32_t PaddedParameterSize; // 0xbc
	TArray<FNiagaraScriptExecutionPaddingInfo> PaddingInfo; // 0xc0
	char bInitialized : 1; // 0xd0
};

struct FPerBoneInterpolation {
	FBoneReference BoneReference; // 0x0
	float InterpolationSpeedPerSec; // 0x10
};

struct FResponse_SearchPlayer {
	uint32_t C; // 0x0
	FString E; // 0x8
	FResponse_SearchPlayer_Rec D; // 0x18
};

struct FLiveLinkMetaData {
	TMap<FName, FString> StringMetadata; // 0x0
	FQualifiedFrameTime SceneTime; // 0x50
};

struct FExposedValueCopyRecord {
	FName SourcePropertyName; // 0x0
	FName SourceSubPropertyName; // 0x8
	int32_t SourceArrayIndex; // 0x10
	bool bInstanceIsTarget; // 0x14
	EPostCopyOperation PostCopyOperation; // 0x15
	ECopyType CopyType; // 0x16
	TFieldPath<FProperty> DestProperty; // 0x18
	int32_t DestArrayIndex; // 0x38
	int32_t Size; // 0x3c
	TFieldPath<FProperty> CachedSourceProperty; // 0x40
	TFieldPath<FProperty> CachedSourceStructSubProperty; // 0x60
};

struct FSupplyBox : FTableRowBase {
	int32_t ID; // 0x8
	FText DisplayName; // 0x10
	FText Description; // 0x28
	TSoftObjectPtr<UObject> CohIcon; // 0x40
	int32_t CoolTime; // 0x68
	int32_t CoolTimeResetGoldCost; // 0x6c
	int32_t CastingTime; // 0x70
	int32_t DefaultWeaponSlotCount; // 0x74
	int32_t MaxWeaponSlotCount; // 0x78
	int32_t DefaultEquipSlotCount; // 0x7c
	int32_t MaxEquipSlotCount; // 0x80
	int32_t SlotExpansionPrice; // 0x84
	int32_t Price; // 0x88
};

struct FBatchedLine {
	FVector Start; // 0x0
	FVector End; // 0xc
	FLinearColor Color; // 0x18
	float Thickness; // 0x28
	float RemainingLifeTime; // 0x2c
	char DepthPriority; // 0x30
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

struct FDialogueContext {
	UDialogueVoice* Speaker; // 0x0
	TArray<UDialogueVoice*> Targets; // 0x8
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

struct FItemSpawnState {
	int32_t CurAliveUserCnt; // 0x0
	int32_t MaxLimitSpawnCnt; // 0x4
	int32_t EnableCurMaxSpawnCnt; // 0x8
	int32_t CurSpawnedCnt; // 0xc
	int32_t TotalSpawnedCntFromBox; // 0x10
};

struct FSeasonPlan : FTableRowBase {
	int32_t ID; // 0x8
	FText DisplayName; // 0x10
	int64_t StartTime; // 0x28
	int64_t EndTime; // 0x30
	int64_t GoldPrice; // 0x38
	int64_t CashPrice; // 0x40
	int32_t LastSeasonID; // 0x48
	int32_t TierTableID; // 0x4c
	int32_t TierUpTableID; // 0x50
	int32_t SeasonEndRewardTableID; // 0x54
	int32_t MaxLevel; // 0x58
	int32_t ExpTableID; // 0x5c
	int32_t QuestTableID; // 0x60
};

struct FInputActionSpeechMapping {
	FName ActionName; // 0x0
	FName SpeechKeyword; // 0x8
};

struct FGameSettingClassSelectInfoElement {
	FString battle_mode; // 0x0
	int32_t class_select_mode; // 0x10
	int32_t current_status; // 0x14
	int32_t current_status_view; // 0x18
	int32_t current_status_party; // 0x1c
	int32_t duplicate_select_possible; // 0x20
	int32_t random_possible; // 0x24
};

struct FResponse_MaterialList {
	uint32_t C; // 0x0
	FString E; // 0x8
	FResponse_MaterialList_Array D; // 0x18
};

struct FC2G_PartyLeave {
	FString Type; // 0x0
	FC2G_PartyLeave_Data Data; // 0x10
};

struct FLevelSequenceCameraSettings {
	bool bOverrideAspectRatioAxisConstraint; // 0x0
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x1
};

struct FSpawnItemResult {
	FDataTableRowHandle Item; // 0x0
	TArray<FName> BuffNames; // 0x10
	int32_t Count; // 0x20
	FString DivisionParent; // 0x28
	bool bAmmoItemFromWeapon; // 0x38
	FName TargetWeaponItemKey; // 0x3c
};

struct FEditedDocumentInfo {
	FSoftObjectPath EditedObjectPath; // 0x0
	FVector2D SavedViewOffset; // 0x18
	float SavedZoomAmount; // 0x20
	UObject* EditedObject; // 0x28
};

struct FBuildingDebug {
	FName StandardGroupKey; // 0x0
	TMap<FName, FItemDivisionDebugList> ItemDivisionDebugList; // 0x8
};

struct FScreenMessageString {
	uint64_t Key; // 0x0
	FString ScreenMessage; // 0x8
	FColor DisplayColor; // 0x18
	float TimeToDisplay; // 0x1c
	float CurrentTimeDisplayed; // 0x20
	FVector2D TextScale; // 0x24
};

struct FOutGameAccountData {
	int32_t Level; // 0x0
	int32_t exp; // 0x4
};

struct FAINoiseEvent {
	FVector NoiseLocation; // 0x4
	float Loudness; // 0x10
	float MaxRange; // 0x14
	AActor* Instigator; // 0x18
	FName Tag; // 0x20
};

struct FBlueprintEditorPromotionSettings {
	FFilePath FirstMeshPath; // 0x0
	FFilePath SecondMeshPath; // 0x10
	FFilePath DefaultParticleAsset; // 0x20
};

struct FReferencePose {
	TArray<FTransform> ReferencePose; // 0x0
	FName PoseName; // 0x14
};

struct FStaticMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FName ImportedMaterialSlotName; // 0x10
	FMeshUVChannelInfo UVChannelData; // 0x18
};

struct FFloatRangeBound {
	ERangeBoundTypes Type; // 0x0
	float Value; // 0x4
};

struct FBravoHotelBuffUIInfo {
	int32_t Key; // 0x0
	TSoftObjectPtr<UObject> CohIcon; // 0x8
	bool bCoolTime; // 0x30
	bool bActive; // 0x31
	float Timer; // 0x34
	float MaxTime; // 0x38
	FColor BorderColor; // 0x3c
	FColor BGColor; // 0x40
	FText DisplayName; // 0x48
	FText Description; // 0x60
	int32_t DisplayLevel; // 0x78
	FString Param; // 0x80
};

struct FNiagaraPlatformSet {
	int32_t QualityLevelMask; // 0x0
	TArray<FNiagaraDeviceProfileStateEntry> DeviceProfileStates; // 0x8
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

struct FIntPoint {
	int32_t X; // 0x0
	int32_t Y; // 0x4
};

struct FSideMeshManager {
	UStaticMesh* Prototype; // 0x0
	AActor* Owner; // 0x8
	UHierarchicalInstancedStaticMeshComponent* SideMeshes; // 0x10
	int32_t SocketIndex; // 0x18
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

struct FLocationBoneSocketInfo {
	FName BoneSocketName; // 0x0
	FVector Offset; // 0x8
};

struct FActiveHapticFeedbackEffect {
	UHapticFeedbackEffect_Base* HapticEffect; // 0x0
};

struct FSeasonTierUp : FTableRowBase {
	int32_t ID; // 0x8
	TArray<FSeasonTierUpElement> Tiers; // 0x10
};

struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneBoolChannel BoolChannel; // 0x48
};

struct FResponse_CreatePlayer_Rec {
	FString user_id; // 0x0
	FString auth_token; // 0x10
};

struct FAnimNode_ScaleChainLength : FAnimNode_Base {
	FPoseLink InputPose; // 0x10
	float DefaultChainLength; // 0x20
	FBoneReference ChainStartBone; // 0x24
	FBoneReference ChainEndBone; // 0x34
	FVector TargetLocation; // 0x44
	float ALPHA; // 0x50
	FInputScaleBias AlphaScaleBias; // 0x58
	EScaleChainInitialLength ChainInitialLength; // 0x60
};

struct FAnimNode_LinkedAnimGraph : FAnimNode_CustomProperty {
	TArray<FPoseLink> InputPoses; // 0x58
	TArray<FName> InputPoseNames; // 0x68
	UAnimInstance* InstanceClass; // 0x78
	FName Tag; // 0x80
	char bReceiveNotifiesFromLinkedInstances : 1; // 0x98
	char bPropagateNotifiesToLinkedInstances : 1; // 0x98
};

struct FRequest_LoginGeegeeWithSteam {
	FString Client_version; // 0x0
	int32_t os; // 0x10
	FString ott; // 0x18
	FString session_ticket; // 0x28
	FString entry_code; // 0x38
	FString hardware_info; // 0x48
	FString geegee_project_id; // 0x58
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

struct FRuntimeVirtualTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	URuntimeVirtualTexture* ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x18
};

struct FAwsAuthChallengeResponse {
	TMap<FString, FString> AuthenticationResult; // 0x0
};

struct FPerBoneBlendWeight {
	int32_t SourceIndex; // 0x0
	float BlendWeight; // 0x4
};

struct FG2C_Notify_Emergency {
	FString Type; // 0x0
	FG2C_Notify_Emergency_Data Data; // 0x10
};

struct FDataEventClientGameVehicle : FDataEventBase {
	AActor* VehicleActor; // 0x70
};

struct FItemAbilityData : FTableRowBase {
	FName WeaponId; // 0x8
	EWeaponType WeaponType; // 0x10
	EThrowingWeaponType ThrowingWeaponType; // 0x11
	EWeaponAttachmentType WeaponAttachmentType; // 0x12
	EWeaponAttachmentItem WeaponAttachmentItem; // 0x13
	FBravoHotelAbilityModifier Ability; // 0x18
	FBravoHotelAttachmentInfo AttachmentInfo; // 0xc0
	TArray<FName> EquipedBuffName; // 0x108
	TArray<FName> UsingBuffName; // 0x118
	bool bMovableDuringUse; // 0x128
};

struct FAnalysisDediSupplyBoxData {
	int32_t event_time; // 0x0
	FString UserID; // 0x8
	FString NickName; // 0x18
	int32_t loc_x; // 0x28
	int32_t loc_y; // 0x2c
	int32_t loc_z; // 0x30
	int32_t box_loc_x; // 0x34
	int32_t box_loc_y; // 0x38
	int32_t box_loc_z; // 0x3c
	FString spawner_name; // 0x40
};

struct FSeasonTier : FTableRowBase {
	int32_t ID; // 0x8
	int64_t StartTime; // 0x10
	TArray<FSeasonTierElement> Tiers; // 0x18
};

struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	TArray<FName> BrushPropertyNamePath; // 0x80
};

struct FMovieSceneMarkedFrame {
	FFrameNumber FrameNumber; // 0x0
	FString Label; // 0x8
};

struct FLoadingScreenData : FTableRowBase {
	ELoadingScreenType LoadingType; // 0x8
	TArray<TSoftObjectPtr<UTexture2D>> ImageList; // 0x10
	TArray<FText> TitleList; // 0x20
	TArray<FText> DescList; // 0x30
};

struct FGamePlayerMatchingRPInfo {
	FString UserID; // 0x0
	FString NickName; // 0x10
	int32_t Rating; // 0x20
	FString Training; // 0x28
	FString TeamID; // 0x38
	int32_t TeamRating; // 0x48
	FString PartyID; // 0x50
	int32_t PartyRating; // 0x60
};

struct FSeasonEXP : FTableRowBase {
	int32_t ID; // 0x8
	FText DisplayName; // 0x10
	TArray<FSeasonEXPElement> Levels; // 0x28
};

struct FAnalysisClientGamePCData {
	FString os_name; // 0x0
	FString cpu_name; // 0x10
	FString gpu_name; // 0x20
	FString mac_address; // 0x30
	FString install_storage_type; // 0x40
	float game_view_width; // 0x50
	float game_view_height; // 0x54
	uint64_t total_physical_memory; // 0x58
	uint64_t used_physical_memory; // 0x60
	uint64_t total_virtual_memory; // 0x68
	uint64_t used_virtual_memory; // 0x70
	int32_t texture_quality; // 0x78
	int32_t view_distance_quality; // 0x7c
	float avg_graphics_quality; // 0x80
	bool is_blacklisted_graphics_driver; // 0x84
};

struct FSendHttpLog : FBaseProtocolLog {
	FString route; // 0x30
};

struct FWeightedBlendable {
	float Weight; // 0x0
	UObject* Object; // 0x8
};

struct FVisibilityTrackKey {
	float Time; // 0x0
	EVisibilityTrackAction Action; // 0x4
	EVisibilityTrackCondition ActiveCondition; // 0x5
};

struct FAnalysisClientGameRevivalCharacterData {
	int32_t loc_x; // 0x0
	int32_t loc_y; // 0x4
	int32_t loc_z; // 0x8
	FString UserID; // 0x10
	FString NickName; // 0x20
	int32_t ClassIndex; // 0x30
	int32_t Level; // 0x34
};

struct FCompressedTrack {
	TArray<char> ByteStream; // 0x0
	TArray<float> Times; // 0x10
	float Mins[0x3]; // 0x20
	float Ranges[0x3]; // 0x2c
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

struct FRealCurve : FIndexedCurve {
	float DefaultValue; // 0x68
	ERichCurveExtrapolation PreInfinityExtrap; // 0x6c
	ERichCurveExtrapolation PostInfinityExtrap; // 0x6d
};

struct FLocalSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FSoundWaveEnvelopeDataPerSound {
	float Envelope; // 0x0
	float PlaybackTime; // 0x4
	USoundWave* SoundWave; // 0x8
};

struct FG2C_SetCloseMatchMakingTag_Data {
	uint32_t C; // 0x0
	FString E; // 0x8
	FString D; // 0x18
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

struct FAlwaysRelevantActorInfo {
	UNetConnection* Connection; // 0x0
	AActor* LastViewer; // 0x8
	AActor* LastViewTarget; // 0x10
};

struct FNiagaraEmitterScalabilitySettingsArray {
	TArray<FNiagaraEmitterScalabilitySettings> Settings; // 0x0
};

struct FForceFeedbackChannelDetails {
	char bAffectsLeftLarge : 1; // 0x0
	char bAffectsLeftSmall : 1; // 0x0
	char bAffectsRightLarge : 1; // 0x0
	char bAffectsRightSmall : 1; // 0x0
	FRuntimeFloatCurve Curve; // 0x8
};

struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase {
	FBoneReference RightHandFK; // 0xc8
	FBoneReference LeftHandFK; // 0xd8
	FBoneReference RightHandIK; // 0xe8
	FBoneReference LeftHandIK; // 0xf8
	TArray<FBoneReference> IKBonesToMove; // 0x108
	float HandFKWeight; // 0x118
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

struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x30
	float ExplicitTime; // 0x38
	bool bShouldLoop; // 0x3c
	bool bTeleportToExplicitTime; // 0x3d
	ESequenceEvalReinit ReinitializationBehavior; // 0x3e
	float StartPosition; // 0x40
};

struct FChunkInfoData {
	FGuid Guid; // 0x0
	uint64_t Hash; // 0x10
	FSHAHashData ShaHash; // 0x18
	int64_t FileSize; // 0x30
	char GroupNumber; // 0x38
};

struct FParameterUIData {
	FString Name; // 0x0
	FMutableParamUIMetadata ParamUIMetadata; // 0x10
	EMutableParameterType Type; // 0x100
	TArray<FIntegerParameterUIData> ArrayIntegerParameterOption; // 0x108
	ECustomizableObjectGroupType IntegerParameterGroupType; // 0x118
	bool bDontCompressRuntimeTextures; // 0x119
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

struct FDataTableRowHandle {
	UDataTable* DataTable; // 0x0
	FName RowName; // 0x8
};

struct FG2C_PartyClientStatus {
	FString Type; // 0x0
	FG2C_PartyClientStatus_Data Data; // 0x10
};

struct FSupplySlotInfo {
	int32_t Idx; // 0x0
	AActor* Slot; // 0x8
};

struct FAnalysisClientGameItemData {
	int32_t loc_x; // 0x0
	int32_t loc_y; // 0x4
	int32_t loc_z; // 0x8
	int32_t pickup_root; // 0xc
	int32_t slot_index; // 0x10
	int32_t item_id; // 0x14
	FString item_name; // 0x18
	int32_t stack; // 0x28
	int32_t Durability; // 0x2c
	int32_t item_type; // 0x30
	int32_t WearableItemType; // 0x34
	int32_t WeaponAttachmentType; // 0x38
	int32_t current_weight; // 0x3c
};

struct FC2G_PartyClientStatus_Data {
	FString clientStatus; // 0x0
};

struct FTestPoint {
	FVector2D StartPoint; // 0x0
	FVector2D EndPoint; // 0x8
	FVector2D CenterPos; // 0x10
	FVector2D StartStartPos; // 0x18
	FVector2D StartEndPos; // 0x20
	FVector2D EndStartPos; // 0x28
	FVector2D EndEndPos; // 0x30
	FVector2D WorldStartPoint; // 0x38
	FVector2D WorldEndPoint; // 0x40
	FVector2D WorldSize; // 0x48
	FVector2D WorldCenter; // 0x50
};

struct FPOV {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x18
};

struct FGameNameRedirect {
	FName OldGameName; // 0x0
	FName NewGameName; // 0x8
};

struct FBuffSlot {
	TArray<FBravoHotelBuffUIInfo> UIBuff; // 0x0
};

struct FItemOption : FTableRowBase {
	int32_t ID; // 0x8
	FText DisplayName; // 0x10
	TArray<FName> BuffIDs; // 0x28
	FText Description; // 0x38
	TSoftObjectPtr<UObject> SlotIconTexture_PaperSprite; // 0x50
	TSoftObjectPtr<UObject> DragIconTexture_PaperSprite; // 0x78
	int32_t Rarity; // 0xa0
	int32_t Display_Damage; // 0xa4
	int32_t Display_EffectiveRange; // 0xa8
	int32_t Display_Accuracy; // 0xac
	int32_t Display_RateofFire; // 0xb0
	int32_t NormalMagSize; // 0xb4
};

struct FLowEntryRegexCaptureGroup {
	int32_t CaptureGroupNumber; // 0x0
	int32_t BeginIndex; // 0x4
	int32_t EndIndex; // 0x8
	FString Match; // 0x10
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

struct FMeshMergingSettings {
	int32_t TargetLightMapResolution; // 0x0
	EUVOutput OutputUVs[0x8]; // 0x4
	FMaterialProxySettings MaterialSettings; // 0xc
	int32_t GutterSize; // 0x98
	int32_t SpecificLOD; // 0x9c
	EMeshLODSelectionType LODSelectionType; // 0xa0
	char bGenerateLightMapUV : 1; // 0xa1
	char bComputedLightMapResolution : 1; // 0xa1
	char bPivotPointAtZero : 1; // 0xa1
	char bMergePhysicsData : 1; // 0xa1
	char bMergeMaterials : 1; // 0xa1
	char bCreateMergedMaterial : 1; // 0xa1
	char bBakeVertexDataToMesh : 1; // 0xa1
	char bUseVertexDataForBakingMaterial : 1; // 0xa1
	char bUseTextureBinning : 1; // 0xa2
	char bReuseMeshLightmapUVs : 1; // 0xa2
	char bMergeEquivalentMaterials : 1; // 0xa2
	char bUseLandscapeCulling : 1; // 0xa2
	char bIncludeImposters : 1; // 0xa2
	char bAllowDistanceField : 1; // 0xa2
};

struct FPolygonToCreate {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FVertexAndAttributes> PerimeterVertices; // 0x8
	FPolygonID OriginalPolygonID; // 0x18
	EPolygonEdgeHardness PolygonEdgeHardness; // 0x1c
};

struct FNavDataConfig : FNavAgentProperties {
	FName Name; // 0x30
	FColor Color; // 0x38
	FVector DefaultQueryExtent; // 0x3c
	AActor* NavigationDataClass; // 0x48
	TSoftClassPtr<UObject> NavDataClass; // 0x50
};

struct FLoginInfo {
	TMap<FString, FString> AppIDs; // 0x0
	TMap<FString, FString> Keys; // 0x50
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

struct FMovieSceneActorReferenceKey {
	FMovieSceneObjectBindingID Object; // 0x0
	FName ComponentName; // 0x18
	FName SocketName; // 0x20
};

struct FGrassVariety {
	UStaticMesh* GrassMesh; // 0x0
	FPerPlatformFloat GrassDensity; // 0x8
	bool bUseGrid; // 0xc
	float PlacementJitter; // 0x10
	ECullDistancePreset CullDistancePreset; // 0x14
	bool bOverrideCullDistance; // 0x15
	FPerPlatformInt StartCullDistance; // 0x18
	FPerPlatformInt EndCullDistance; // 0x1c
	int32_t MinLOD; // 0x20
	EGrassScaling Scaling; // 0x24
	FFloatInterval ScaleX; // 0x28
	FFloatInterval ScaleY; // 0x30
	FFloatInterval ScaleZ; // 0x38
	bool RandomRotation; // 0x40
	bool AlignToSurface; // 0x41
	bool bUseLandscapeLightmap; // 0x42
	FLightingChannels LightingChannels; // 0x43
	bool bReceivesDecals; // 0x44
	bool bCastDynamicShadow; // 0x45
	bool bKeepInstanceBufferCPUCopy; // 0x46
};

struct FBakedAnimationStateMachine {
	FName MachineName; // 0x0
	int32_t InitialState; // 0x8
	TArray<FBakedAnimationState> States; // 0x10
	TArray<FAnimationTransitionBetweenStates> Transitions; // 0x20
};

struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base {
	FComponentSpacePoseLink ComponentPose; // 0x10
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

struct FPositionHistory {
	TArray<FVector> Positions; // 0x0
	float Range; // 0x10
};

struct FElementID {
	int32_t IDValue; // 0x0
};

struct FAnimationEventBinding {
	UWidgetAnimation* Animation; // 0x0
	FDelegate Delegate; // 0x8
	EWidgetAnimationEvent AnimationEvent; // 0x18
	FName UserTag; // 0x1c
};

struct FSlotAnimationTrack {
	FName SlotName; // 0x0
	FAnimTrack AnimTrack; // 0x8
};

struct FRequest_UserResultDataList_Rec {
	FString user_id; // 0x0
	FString player_name; // 0x10
	uint16_t Rank; // 0x20
	char team_id; // 0x22
	double Weight; // 0x28
};

struct FExcelFont {
	FString Name; // 0x0
	float Size; // 0x10
	bool IsBold; // 0x14
	bool IsItalic; // 0x15
	bool IsSuperScript; // 0x16
	bool IsStrikeThrough; // 0x17
	bool IsOutline; // 0x18
	bool IsShadow; // 0x19
	ExcelUnderlineType UnderlineType; // 0x1a
	FExcelColor Color; // 0x1c
	int32_t Family; // 0x3c
	int32_t Charset; // 0x40
	FString Scheme; // 0x48
};

struct FAnalysisClientGameVehicleData {
	int32_t loc_x; // 0x0
	int32_t loc_y; // 0x4
	int32_t loc_z; // 0x8
	FString vehicle_name; // 0x10
	FString vehicle_uid; // 0x20
	int32_t hp; // 0x30
	int32_t Fuel; // 0x34
	int32_t tire1_hp; // 0x38
	int32_t tire2_hp; // 0x3c
	int32_t tire3_hp; // 0x40
	int32_t tire4_hp; // 0x44
	int32_t Speed; // 0x48
	FString seat1_uid; // 0x50
	FString seat2_uid; // 0x60
	FString seat3_uid; // 0x70
	FString seat4_uid; // 0x80
	FString seat5_uid; // 0x90
	FString seat6_uid; // 0xa0
};

struct FSkeletalMeshSamplingRegionMaterialFilter {
	FName MaterialName; // 0x0
};

struct FVMFunctionSpecifier {
	FName Key; // 0x0
	FName Value; // 0x8
};

struct FHeaderRowStyle : FSlateWidgetStyle {
	FTableColumnHeaderStyle ColumnStyle; // 0x8
	FTableColumnHeaderStyle LastColumnStyle; // 0x4d8
	FSplitterStyle ColumnSplitterStyle; // 0x9a8
	FSlateBrush BackgroundBrush; // 0xac0
	FSlateColor ForegroundColor; // 0xb48
};

struct FTeamMemberInfo {
	int32_t TeamIndex; // 0x0
	int32_t MemberIndex; // 0x4
	FVector Location; // 0x8
};

struct FSM_Link {
	FName NextState; // 0x0
	FName Function; // 0x8
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
	char bOverride_FilmWhitePoint : 1; // 0x3
	char bOverride_FilmSaturation : 1; // 0x3
	char bOverride_FilmChannelMixerRed : 1; // 0x3
	char bOverride_FilmChannelMixerGreen : 1; // 0x3
	char bOverride_FilmChannelMixerBlue : 1; // 0x3
	char bOverride_FilmContrast : 1; // 0x3
	char bOverride_FilmDynamicRange : 1; // 0x4
	char bOverride_FilmHealAmount : 1; // 0x4
	char bOverride_FilmToeAmount : 1; // 0x4
	char bOverride_FilmShadowTint : 1; // 0x4
	char bOverride_FilmShadowTintBlend : 1; // 0x4
	char bOverride_FilmShadowTintAmount : 1; // 0x4
	char bOverride_FilmSlope : 1; // 0x4
	char bOverride_FilmToe : 1; // 0x4
	char bOverride_FilmShoulder : 1; // 0x5
	char bOverride_FilmBlackClip : 1; // 0x5
	char bOverride_FilmWhiteClip : 1; // 0x5
	char bOverride_FilmicTonemapper : 1; // 0x5
	char bOverride_TonemapperSharpen : 1; // 0x5
	char bOverride_UseVolumetricFogEmissive : 1; // 0x5
	char bOverride_VolumetricFogEmissive : 1; // 0x5
	char bOverride_SceneColorTint : 1; // 0x5
	char bOverride_SceneFringeIntensity : 1; // 0x6
	char bOverride_ChromaticAberrationStartOffset : 1; // 0x6
	char bOverride_AmbientCubemapTint : 1; // 0x6
	char bOverride_AmbientCubemapIntensity : 1; // 0x6
	char bOverride_BloomMethod : 1; // 0x6
	char bOverride_BloomIntensity : 1; // 0x6
	char bOverride_BloomThreshold : 1; // 0x6
	char bOverride_Bloom1Tint : 1; // 0x6
	char bOverride_Bloom1Size : 1; // 0x7
	char bOverride_Bloom2Size : 1; // 0x7
	char bOverride_Bloom2Tint : 1; // 0x7
	char bOverride_Bloom3Tint : 1; // 0x7
	char bOverride_Bloom3Size : 1; // 0x7
	char bOverride_Bloom4Tint : 1; // 0x7
	char bOverride_Bloom4Size : 1; // 0x7
	char bOverride_Bloom5Tint : 1; // 0x7
	char bOverride_Bloom5Size : 1; // 0x8
	char bOverride_Bloom6Tint : 1; // 0x8
	char bOverride_Bloom6Size : 1; // 0x8
	char bOverride_BloomSizeScale : 1; // 0x8
	char bOverride_BloomConvolutionTexture : 1; // 0x8
	char bOverride_BloomConvolutionSize : 1; // 0x8
	char bOverride_BloomConvolutionCenterUV : 1; // 0x8
	char bOverride_BloomConvolutionPreFilter : 1; // 0x8
	char bOverride_BloomConvolutionPreFilterMin : 1; // 0x9
	char bOverride_BloomConvolutionPreFilterMax : 1; // 0x9
	char bOverride_BloomConvolutionPreFilterMult : 1; // 0x9
	char bOverride_BloomConvolutionBufferScale : 1; // 0x9
	char bOverride_BloomDirtMaskIntensity : 1; // 0x9
	char bOverride_BloomDirtMaskTint : 1; // 0x9
	char bOverride_BloomDirtMask : 1; // 0x9
	char bOverride_CameraShutterSpeed : 1; // 0x9
	char bOverride_CameraISO : 1; // 0xa
	char bOverride_AutoExposureMethod : 1; // 0xa
	char bOverride_AutoExposureLowPercent : 1; // 0xa
	char bOverride_AutoExposureHighPercent : 1; // 0xa
	char bOverride_AutoExposureMinBrightness : 1; // 0xa
	char bOverride_AutoExposureMaxBrightness : 1; // 0xa
	char bOverride_AutoExposureCalibrationConstant : 1; // 0xa
	char bOverride_AutoExposureSpeedUp : 1; // 0xa
	char bOverride_AutoExposureSpeedDown : 1; // 0xb
	char bOverride_AutoExposureBias : 1; // 0xb
	char bOverride_AutoExposureBiasCurve : 1; // 0xb
	char bOverride_AutoExposureMeterMask : 1; // 0xb
	char bOverride_AutoExposureApplyPhysicalCameraExposure : 1; // 0xb
	char bOverride_HistogramLogMin : 1; // 0xb
	char bOverride_HistogramLogMax : 1; // 0xb
	char bOverride_LensFlareIntensity : 1; // 0xb
	char bOverride_LensFlareTint : 1; // 0xc
	char bOverride_LensFlareTints : 1; // 0xc
	char bOverride_LensFlareBokehSize : 1; // 0xc
	char bOverride_LensFlareBokehShape : 1; // 0xc
	char bOverride_LensFlareThreshold : 1; // 0xc
	char bOverride_VignetteIntensity : 1; // 0xc
	char bOverride_GrainIntensity : 1; // 0xc
	char bOverride_GrainJitter : 1; // 0xc
	char bOverride_AmbientOcclusionIntensity : 1; // 0xd
	char bOverride_AmbientOcclusionIntensitySubsurfaceProfile : 1; // 0xd
	char bOverride_AmbientOcclusionStaticFraction : 1; // 0xd
	char bOverride_AmbientOcclusionRadius : 1; // 0xd
	char bOverride_AmbientOcclusionFadeDistance : 1; // 0xd
	char bOverride_AmbientOcclusionFadeRadius : 1; // 0xd
	char bOverride_AmbientOcclusionDistance : 1; // 0xd
	char bOverride_AmbientOcclusionRadiusInWS : 1; // 0xd
	char bOverride_AmbientOcclusionPower : 1; // 0xe
	char bOverride_AmbientOcclusionBias : 1; // 0xe
	char bOverride_AmbientOcclusionQuality : 1; // 0xe
	char bOverride_AmbientOcclusionMipBlend : 1; // 0xe
	char bOverride_AmbientOcclusionMipScale : 1; // 0xe
	char bOverride_AmbientOcclusionMipThreshold : 1; // 0xe
	char bOverride_RayTracingAO : 1; // 0x10
	char bOverride_RayTracingAOSamplesPerPixel : 1; // 0x10
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
	char bOverride_LPVReflectionIntensity : 1; // 0x18
	char bOverride_LPVReflectionLength : 1; // 0x18
	char bOverride_LPVReflectionOcclusion : 1; // 0x18
	char bOverride_LPVHairSpecularLightingIntensity : 1; // 0x18
	char bOverride_LPVHairSpecularOcclusionIntensity : 1; // 0x18
	char bOverride_LPVHairRoughnessOverride : 1; // 0x18
	char bOverride_LPVDistantLightingIntensity : 1; // 0x18
	char bOverride_LPVEnvironmentColor : 1; // 0x18
	char bOverride_UseSeparateAOVolume : 1; // 0x19
	char bOverride_IndirectLightingColor : 1; // 0x1c
	char bOverride_IndirectLightingIntensity : 1; // 0x1c
	char bOverride_SkyLightingIntensity : 1; // 0x1c
	char bOverride_DiffuseIBLIntensity : 1; // 0x1c
	char bOverride_TwoSidedFoliageSpecularReflectionIntensity : 1; // 0x1c
	char bOverride_IndirectSpecularIntensity : 1; // 0x1c
	char bOverride_IndirectSpecularBlendFactor : 1; // 0x1c
	char bOverride_IndirectLightingDirectionality : 1; // 0x1c
	char bOverride_IndirectLightingDirectionalSourceSize : 1; // 0x1d
	char bOverride_IndirectLightingDirectionalSpecularIntensity : 1; // 0x1d
	char bOverride_ColorGradingIntensity : 1; // 0x1d
	char bOverride_ColorGradingLUT : 1; // 0x1d
	char bOverride_DepthOfFieldFocalDistance : 1; // 0x1d
	char bOverride_DepthOfFieldFstop : 1; // 0x1d
	char bOverride_DepthOfFieldMinFstop : 1; // 0x1d
	char bOverride_DepthOfFieldBladeCount : 1; // 0x1d
	char bOverride_DepthOfFieldSensorWidth : 1; // 0x1e
	char bOverride_DepthOfFieldDepthBlurRadius : 1; // 0x1e
	char bOverride_DepthOfFieldDepthBlurAmount : 1; // 0x1e
	char bOverride_DepthOfFieldFocalRegion : 1; // 0x1e
	char bOverride_DepthOfFieldNearTransitionRegion : 1; // 0x1e
	char bOverride_DepthOfFieldFarTransitionRegion : 1; // 0x1e
	char bOverride_DepthOfFieldEnabled : 1; // 0x1e
	char bOverride_DepthOfFieldScale : 1; // 0x1e
	char bOverride_DepthOfFieldNearBlurSize : 1; // 0x1f
	char bOverride_DepthOfFieldFarBlurSize : 1; // 0x1f
	char bOverride_MobileHQGaussian : 1; // 0x1f
	char bOverride_DepthOfFieldOcclusion : 1; // 0x1f
	char bOverride_DepthOfFieldSkyFocusDistance : 1; // 0x1f
	char bOverride_DepthOfFieldVignetteSize : 1; // 0x1f
	char bOverride_MotionBlurAmount : 1; // 0x1f
	char bOverride_MotionBlurMax : 1; // 0x1f
	char bOverride_MotionBlurTargetFPS : 1; // 0x20
	char bOverride_MotionBlurPerObjectSize : 1; // 0x20
	char bOverride_ScreenPercentage : 1; // 0x20
	char bOverride_ScreenSpaceReflectionIntensity : 1; // 0x20
	char bOverride_ScreenSpaceReflectionQuality : 1; // 0x20
	char bOverride_ScreenSpaceReflectionMaxRoughness : 1; // 0x20
	char bOverride_ScreenSpaceReflectionRoughnessScale : 1; // 0x20
	char bOverride_ReflectionsType : 1; // 0x24
	char bOverride_RayTracingReflectionsMaxRoughness : 1; // 0x24
	char bOverride_RayTracingReflectionsMaxBounces : 1; // 0x24
	char bOverride_RayTracingReflectionsSamplesPerPixel : 1; // 0x24
	char bOverride_RayTracingReflectionsShadows : 1; // 0x24
	char bOverride_RayTracingReflectionsTranslucency : 1; // 0x24
	char bOverride_TranslucencyType : 1; // 0x24
	char bOverride_RayTracingTranslucencyMaxRoughness : 1; // 0x24
	char bOverride_RayTracingTranslucencyRefractionRays : 1; // 0x25
	char bOverride_RayTracingTranslucencySamplesPerPixel : 1; // 0x25
	char bOverride_RayTracingTranslucencyShadows : 1; // 0x25
	char bOverride_RayTracingTranslucencyRefraction : 1; // 0x25
	char bOverride_RayTracingGI : 1; // 0x25
	char bOverride_RayTracingGIMaxBounces : 1; // 0x25
	char bOverride_RayTracingGISamplesPerPixel : 1; // 0x25
	char bOverride_PathTracingMaxBounces : 1; // 0x25
	char bOverride_PathTracingSamplesPerPixel : 1; // 0x26
	char bMobileHQGaussian : 1; // 0x28
	EBloomMethod BloomMethod; // 0x29
	EAutoExposureMethod AutoExposureMethod; // 0x2a
	float WhiteTemp; // 0x2c
	float WhiteTint; // 0x30
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
	float FilmSlope; // 0x190
	float FilmToe; // 0x194
	float FilmShoulder; // 0x198
	float FilmBlackClip; // 0x19c
	float FilmWhiteClip; // 0x1a0
	FLinearColor FilmWhitePoint; // 0x1a4
	FLinearColor FilmShadowTint; // 0x1b4
	float FilmShadowTintBlend; // 0x1c4
	float FilmShadowTintAmount; // 0x1c8
	float FilmSaturation; // 0x1cc
	FLinearColor FilmChannelMixerRed; // 0x1d0
	FLinearColor FilmChannelMixerGreen; // 0x1e0
	FLinearColor FilmChannelMixerBlue; // 0x1f0
	float FilmContrast; // 0x200
	float FilmToeAmount; // 0x204
	float FilmHealAmount; // 0x208
	float FilmDynamicRange; // 0x20c
	EFilmicTonemapperType FilmicTonemapper; // 0x210
	float TonemapperSharpen; // 0x214
	char UseVolumetricFogEmissive : 1; // 0x218
	FLinearColor VolumetricFogEmissive; // 0x21c
	FLinearColor SceneColorTint; // 0x22c
	float SceneFringeIntensity; // 0x23c
	float ChromaticAberrationStartOffset; // 0x240
	float BloomIntensity; // 0x244
	float BloomThreshold; // 0x248
	float BloomSizeScale; // 0x24c
	float Bloom1Size; // 0x250
	float Bloom2Size; // 0x254
	float Bloom3Size; // 0x258
	float Bloom4Size; // 0x25c
	float Bloom5Size; // 0x260
	float Bloom6Size; // 0x264
	FLinearColor Bloom1Tint; // 0x268
	FLinearColor Bloom2Tint; // 0x278
	FLinearColor Bloom3Tint; // 0x288
	FLinearColor Bloom4Tint; // 0x298
	FLinearColor Bloom5Tint; // 0x2a8
	FLinearColor Bloom6Tint; // 0x2b8
	float BloomConvolutionSize; // 0x2c8
	UTexture2D* BloomConvolutionTexture; // 0x2d0
	FVector2D BloomConvolutionCenterUV; // 0x2d8
	float BloomConvolutionPreFilterMin; // 0x2e0
	float BloomConvolutionPreFilterMax; // 0x2e4
	float BloomConvolutionPreFilterMult; // 0x2e8
	float BloomConvolutionBufferScale; // 0x2ec
	UTexture* BloomDirtMask; // 0x2f0
	float BloomDirtMaskIntensity; // 0x2f8
	FLinearColor BloomDirtMaskTint; // 0x2fc
	FLinearColor AmbientCubemapTint; // 0x30c
	float AmbientCubemapIntensity; // 0x31c
	UTextureCube* AmbientCubemap; // 0x320
	float CameraShutterSpeed; // 0x328
	float CameraISO; // 0x32c
	float DepthOfFieldFstop; // 0x330
	float DepthOfFieldMinFstop; // 0x334
	int32_t DepthOfFieldBladeCount; // 0x338
	float AutoExposureBias; // 0x33c
	float AutoExposureBiasBackup; // 0x340
	char bOverride_AutoExposureBiasBackup : 1; // 0x344
	char AutoExposureApplyPhysicalCameraExposure : 1; // 0x348
	UCurveFloat* AutoExposureBiasCurve; // 0x350
	UTexture* AutoExposureMeterMask; // 0x358
	float AutoExposureLowPercent; // 0x360
	float AutoExposureHighPercent; // 0x364
	float AutoExposureMinBrightness; // 0x368
	float AutoExposureMaxBrightness; // 0x36c
	float AutoExposureSpeedUp; // 0x370
	float AutoExposureSpeedDown; // 0x374
	float HistogramLogMin; // 0x378
	float HistogramLogMax; // 0x37c
	float AutoExposureCalibrationConstant; // 0x380
	float LensFlareIntensity; // 0x384
	FLinearColor LensFlareTint; // 0x388
	float LensFlareBokehSize; // 0x398
	float LensFlareThreshold; // 0x39c
	UTexture* LensFlareBokehShape; // 0x3a0
	FLinearColor LensFlareTints[0x8]; // 0x3a8
	float VignetteIntensity; // 0x428
	float GrainJitter; // 0x42c
	float GrainIntensity; // 0x430
	float AmbientOcclusionIntensity; // 0x434
	float AmbientOcclusionIntensitySubsurfaceProfile; // 0x438
	float AmbientOcclusionStaticFraction; // 0x43c
	float AmbientOcclusionRadius; // 0x440
	char AmbientOcclusionRadiusInWS : 1; // 0x444
	float AmbientOcclusionFadeDistance; // 0x448
	float AmbientOcclusionFadeRadius; // 0x44c
	float AmbientOcclusionDistance; // 0x450
	float AmbientOcclusionPower; // 0x454
	float AmbientOcclusionBias; // 0x458
	float AmbientOcclusionQuality; // 0x45c
	float AmbientOcclusionMipBlend; // 0x460
	float AmbientOcclusionMipScale; // 0x464
	float AmbientOcclusionMipThreshold; // 0x468
	char RayTracingAO : 1; // 0x46c
	int32_t RayTracingAOSamplesPerPixel; // 0x470
	FLinearColor IndirectLightingColor; // 0x474
	float IndirectLightingIntensity; // 0x484
	float SkyLightingIntensity; // 0x488
	float DiffuseIBLIntensity; // 0x48c
	float TwoSidedFoliageSpecularReflectionIntensity; // 0x490
	float IndirectSpecularIntensity; // 0x494
	float IndirectSpecularBlendFactor; // 0x498
	float IndirectLightingDirectionality; // 0x49c
	float IndirectLightingDirectionalSourceSize; // 0x4a0
	float IndirectLightingDirectionalSpecularIntensity; // 0x4a4
	ERayTracingGlobalIlluminationType RayTracingGIType; // 0x4a8
	int32_t RayTracingGIMaxBounces; // 0x4ac
	int32_t RayTracingGISamplesPerPixel; // 0x4b0
	float ColorGradingIntensity; // 0x4b4
	UTexture* ColorGradingLUT; // 0x4b8
	float DepthOfFieldSensorWidth; // 0x4c0
	float DepthOfFieldFocalDistance; // 0x4c4
	float DepthOfFieldDepthBlurAmount; // 0x4c8
	float DepthOfFieldDepthBlurRadius; // 0x4cc
	float DepthOfFieldFocalRegion; // 0x4d0
	float DepthOfFieldNearTransitionRegion; // 0x4d4
	float DepthOfFieldFarTransitionRegion; // 0x4d8
	bool bDepthOfFieldEnabled; // 0x4dc
	float DepthOfFieldScale; // 0x4e0
	float DepthOfFieldNearBlurSize; // 0x4e4
	float DepthOfFieldFarBlurSize; // 0x4e8
	float DepthOfFieldOcclusion; // 0x4ec
	float DepthOfFieldSkyFocusDistance; // 0x4f0
	float DepthOfFieldVignetteSize; // 0x4f4
	float MotionBlurAmount; // 0x4f8
	float MotionBlurMax; // 0x4fc
	int32_t MotionBlurTargetFPS; // 0x500
	float MotionBlurPerObjectSize; // 0x504
	float LPVIntensity; // 0x508
	float LPVVplInjectionBias; // 0x50c
	float LPVSize; // 0x510
	float LPVSecondaryOcclusionIntensity; // 0x514
	float LPVSecondaryBounceIntensity; // 0x518
	float LPVGeometryVolumeBias; // 0x51c
	float LPVEmissiveInjectionIntensity; // 0x520
	float LPVDirectionalOcclusionIntensity; // 0x524
	float LPVDirectionalOcclusionRadius; // 0x528
	float LPVDiffuseOcclusionExponent; // 0x52c
	float LPVSpecularOcclusionExponent; // 0x530
	float LPVDiffuseOcclusionIntensity; // 0x534
	float LPVSpecularOcclusionIntensity; // 0x538
	float LPVReflectionIntensity; // 0x53c
	float LPVReflectionLength; // 0x540
	char bLPVReflectionOcclusion : 1; // 0x544
	float LPVHairSpecularLightingIntensity; // 0x548
	float LPVHairSpecularOcclusionIntensity; // 0x54c
	float LPVHairRoughnessOverride; // 0x550
	float LPVDistantLightingIntensity; // 0x554
	FLinearColor LPVEnvironmentColor; // 0x558
	char bUseSeparateAOVolume : 1; // 0x568
	EReflectionsType ReflectionsType; // 0x569
	float ScreenSpaceReflectionIntensity; // 0x56c
	float ScreenSpaceReflectionQuality; // 0x570
	float ScreenSpaceReflectionMaxRoughness; // 0x574
	float RayTracingReflectionsMaxRoughness; // 0x578
	int32_t RayTracingReflectionsMaxBounces; // 0x57c
	int32_t RayTracingReflectionsSamplesPerPixel; // 0x580
	EReflectedAndRefractedRayTracedShadows RayTracingReflectionsShadows; // 0x584
	char RayTracingReflectionsTranslucency : 1; // 0x585
	ETranslucencyType TranslucencyType; // 0x586
	float RayTracingTranslucencyMaxRoughness; // 0x588
	int32_t RayTracingTranslucencyRefractionRays; // 0x58c
	int32_t RayTracingTranslucencySamplesPerPixel; // 0x590
	EReflectedAndRefractedRayTracedShadows RayTracingTranslucencyShadows; // 0x594
	char RayTracingTranslucencyRefraction : 1; // 0x595
	int32_t PathTracingMaxBounces; // 0x598
	int32_t PathTracingSamplesPerPixel; // 0x59c
	float LPVFadeRange; // 0x5a0
	float LPVDirectionalOcclusionFadeRange; // 0x5a4
	float ScreenPercentage; // 0x5a8
	FWeightedBlendables WeightedBlendables; // 0x5b0
};

struct FMovieSceneEventChannel : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneEvent> KeyValues; // 0x18
};

struct FSearchBoxStyle : FSlateWidgetStyle {
	FEditableTextBoxStyle TextBoxStyle; // 0x8
	FSlateFontInfo ActiveFontInfo; // 0x7f8
	FSlateBrush UpArrowImage; // 0x848
	FSlateBrush DownArrowImage; // 0x8d0
	FSlateBrush GlassImage; // 0x958
	FSlateBrush ClearImage; // 0x9e0
	FMargin ImagePadding; // 0xa68
	bool bLeftAlignButtons; // 0xa78
};

struct FAnimationGroupReference {
	FName GroupName; // 0x0
	EAnimGroupRole GroupRole; // 0x8
};

struct FMovieSceneSegmentIdentifier {
	int32_t IdentifierIndex; // 0x0
};

struct FAnimNode_RigidBody_Chaos : FAnimNode_SkeletalControlBase {
	UPhysicsAsset* OverridePhysicsAsset; // 0xc8
	FVector OverrideWorldGravity; // 0xd0
	FVector ExternalForce; // 0xdc
	FVector ComponentLinearAccScale; // 0xe8
	FVector ComponentLinearVelScale; // 0xf4
	FVector ComponentAppliedLinearAccClamp; // 0x100
	float CachedBoundsScale; // 0x10c
	FBoneReference BaseBoneRef; // 0x110
	ECollisionChannel OverlapChannel; // 0x120
	ESimulationSpace SimulationSpace; // 0x121
	bool bForceDisableCollisionBetweenConstraintBodies; // 0x122
	char bEnableWorldGeometry : 1; // 0x123
	char bOverrideWorldGravity : 1; // 0x123
	char bTransferBoneVelocities : 1; // 0x123
	char bFreezeIncomingPoseOnStart : 1; // 0x123
	char bClampLinearTranslationLimitToRefPose : 1; // 0x123
	FSolverIterations OverrideSolverIterations; // 0x124
};

struct FNiagaraEmitterCompiledData {
	TArray<FName> SpawnAttributes; // 0x0
	FNiagaraVariable EmitterSpawnIntervalVar; // 0x10
	FNiagaraVariable EmitterInterpSpawnStartDTVar; // 0x38
	FNiagaraVariable EmitterSpawnGroupVar; // 0x60
	FNiagaraVariable EmitterAgeVar; // 0x88
	FNiagaraVariable EmitterRandomSeedVar; // 0xb0
	FNiagaraVariable EmitterTotalSpawnedParticlesVar; // 0xd8
	FNiagaraDataSetCompiledData DataSetCompiledData; // 0x100
};

struct FUserWidgetInfoForReplay_T {
	FString KeyName; // 0x0
	FString FilePath; // 0x10
};

struct FMutableData {
	EWearableItemType MutableSlot; // 0x0
	FString MutableKey; // 0x8
};

struct FVector2D {
	float X; // 0x0
	float Y; // 0x4
};

struct FStatupAnimData {
	FName PreItemKey; // 0x0
	FName NewItemKey; // 0x8
	int32_t SlotIndex; // 0x10
};

struct FResponse_GetWaitingTicket_Rec {
	FString waiting_ticket; // 0x0
	FString entry_code; // 0x10
	bool not_available; // 0x20
};

struct FG2C_PartySelectMap_Data {
	FString Mode; // 0x0
	FString Map; // 0x10
	bool itself; // 0x20
	FString person; // 0x28
};

struct FNiagaraTestStructInner {
	FVector InnerVector1; // 0x0
	FVector InnerVector2; // 0xc
};

struct FPerPlatformBool {
	bool Default; // 0x0
};

struct FC2G_PartyWhoReady_Data {
	bool is_ready; // 0x0
};

struct FExcelPatternFill {
	ExcelPatternFillType Type; // 0x0
	FExcelColor ForegroundColor; // 0x4
	FExcelColor BackgroundColor; // 0x24
};

struct FC2G_MatchRequest_Data {
	FString person; // 0x0
	FString Mode; // 0x10
	FString Map; // 0x20
	int32_t how; // 0x30
};

struct FMarkerSyncData {
	TArray<FAnimSyncMarker> AuthoredSyncMarkers; // 0x0
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

struct FVertexIndexAndInstanceID {
	int32_t ContourIndex; // 0x0
	FVertexInstanceID VertexInstanceID; // 0x4
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

struct FVolumetricFogVolumeSettings {
	char bOverride_UseVolumetricFogEmissive : 1; // 0x0
	char bOverride_VolumetricFogEmissive : 1; // 0x0
	char UseVolumetricFogEmissive : 1; // 0x0
	FLinearColor VolumetricFogEmissive; // 0x4
};

struct FGaussianSumBloomSettings {
	float Intensity; // 0x0
	float threshold; // 0x4
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

struct FBoneReference {
	FName BoneName; // 0x0
};

struct FDataEventClientGameKnockDowned : FDataEventBase {
	UBravoHotelDamageType* DamageTypeClass; // 0x60
	AActor* AttackerActor; // 0x68
	APlayerState* AttackerPlayerState; // 0x70
	AActor* VictimActor; // 0x78
	APlayerState* VictimPlayerState; // 0x80
};

struct FBravoHotelTimeOfDaySettings {
	char bOverride_DL_Rotation : 1; // 0x0
	char bOverride_DL_Temperature : 1; // 0x0
	char bOverride_DL_Intensity : 1; // 0x0
	char bOverride_DL_DistanceFieldTrace : 1; // 0x0
	char bOverride_DL_RayStartOffsetDepthScale : 1; // 0x0
	char bOverride_DL_DistanceFieldShadowDistance : 1; // 0x0
	char bOverride_DL_DynamicShadowDistance : 1; // 0x0
	char bOverride_DL_VolumetricScatteringIntensity : 1; // 0x0
	char bOverride_DL_IndirectLightIntensity : 1; // 0x1
	char bOverride_SkyLight_Intensity : 1; // 0x1
	char bOverride_SkyLight_Color : 1; // 0x1
	char bOverride_SkyLight_OcclusionTint : 1; // 0x1
	char bOverride_SkyLight_OcclusionFoliageTint : 1; // 0x1
	char bOverride_SkyLight_OcclusionBarkTint : 1; // 0x1
	char bOverride_ExFog_Density : 1; // 0x1
	char bOverride_ExFog_Density_Clear : 1; // 0x1
	char bOverride_ExFog_Color : 1; // 0x2
	char bOverride_ExFog_HeightFalloff : 1; // 0x2
	char bOverride_ExFog_VolumetricFogScatteringDistribution : 1; // 0x2
	char bOverride_AF_SunMultiplier : 1; // 0x2
	char bOverride_PP_ExposureMin : 1; // 0x2
	char bOverride_PP_ExposureMax : 1; // 0x2
	char bOverride_PP_ExposureLowPercent : 1; // 0x2
	char bOverride_PP_ExposureCompensation : 1; // 0x2
	char bOverride_PP_BloomIntensity : 1; // 0x3
	char bOverride_PP_BloomThreshold : 1; // 0x3
	char bOverride_PP_LPVSize : 1; // 0x3
	char bOverride_PP_LPVIntensity : 1; // 0x3
	char bOverride_PP_LPVLightInjectionBias : 1; // 0x3
	FRotator DL_Rotation; // 0x4
	float DL_Temperature; // 0x10
	float DL_Intensity; // 0x14
	float DL_DistanceFieldTrace; // 0x18
	float DL_RayStartOffsetDepthScale; // 0x1c
	float DL_DistanceFieldShadowDistance; // 0x20
	float DL_DynamicShadowDistance; // 0x24
	float DL_VolumetricScatteringIntensity; // 0x28
	float DL_IndirectLightIntensity; // 0x2c
	float SkyLight_Intensity; // 0x30
	FLinearColor SkyLight_Color; // 0x34
	FColor SkyLight_OcclusionTint; // 0x44
	FColor SkyLight_OcclusionFoliageTint; // 0x48
	FColor SkyLight_OcclusionBarkTint; // 0x4c
	float ExFog_Density; // 0x50
	float ExFog_Density_Clear; // 0x54
	FLinearColor ExFog_Color; // 0x58
	float ExFog_HeightFalloff; // 0x68
	float ExFog_VolumetricFogScatteringDistribution; // 0x6c
	float AF_SunMultiplier; // 0x70
	float PP_ExposureMin; // 0x74
	float PP_ExposureMax; // 0x78
	float PP_ExposureLowPercent; // 0x7c
	float PP_ExposureCompensation; // 0x80
	float PP_BloomIntensity; // 0x84
	float PP_BloomThreshold; // 0x88
	float PP_LPVSize; // 0x8c
	float PP_LPVIntensity; // 0x90
	float PP_LPVLightInjectionBias; // 0x94
};

struct FG2C_Matching_On_Off {
	FString Type; // 0x0
	FG2C_Matching_On_Off_Data Data; // 0x10
};

struct FComboButtonStyle : FSlateWidgetStyle {
	FButtonStyle ButtonStyle; // 0x8
	FSlateBrush DownArrowImage; // 0x280
	FVector2D ShadowOffset; // 0x308
	FLinearColor ShadowColorAndOpacity; // 0x310
	FSlateBrush MenuBorderBrush; // 0x320
	FMargin MenuBorderPadding; // 0x3a8
};

struct FAnalysisClientGameExitData {
	int32_t exit_type; // 0x0
};

struct FNetDriverDefinition {
	FName DefName; // 0x0
	FName DriverClassName; // 0x8
	FName DriverClassNameFallback; // 0x10
};

struct FTileLODEntry {
	int32_t LODIndex; // 0x0
	int32_t Distance; // 0x4
	FLevelSimplificationDetails SimplificationDetails; // 0x8
};

struct FMovieSceneEvaluationGroup {
	TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x0
	TArray<FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT; // 0x10
};

struct FLiveLinkSubjectName {
	FName Name; // 0x0
};

struct FCustomizedToolMenuEntry {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FMovieSceneVectorPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel ComponentCurves[0x4]; // 0x48
	int32_t NumChannelsUsed; // 0x2c8
	EMovieSceneBlendType BlendType; // 0x2cc
};

struct FFontOutlineSettings {
	int32_t OutlineSize; // 0x0
	bool bSeparateFillAlpha; // 0x4
	bool bApplyOutlineToDropShadows; // 0x5
	UObject* OutlineMaterial; // 0x8
	FLinearColor OutlineColor; // 0x10
};

struct FHardwareCursorReference {
	FName CursorPath; // 0x0
	FVector2D HotSpot; // 0x8
};

struct FSubstanceInputDesc {
	FString Name; // 0x0
	ESubstanceInputType Type; // 0x10
};

struct FIntervalCountdown {
	float Interval; // 0x0
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

struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneBoolChannel BoolCurve; // 0x48
};

struct FFilePath {
	FString FilePath; // 0x0
};

struct FSingleAnimationPlayData {
	UAnimationAsset* AnimToPlay; // 0x0
	char bSavedLooping : 1; // 0x8
	char bSavedPlaying : 1; // 0x8
	float SavedPosition; // 0xc
	float SavedPlayRate; // 0x10
};

struct FBravoHotelPartyPCInfo {
	FString pc_id; // 0x0
	int32_t class_type_index; // 0x10
	int32_t class_data_index; // 0x14
	FBravoHotelPCLooks looks; // 0x18
	TArray<FBravoHotelEquippedSlotInfo> wear_item; // 0x30
	TArray<FBravoHotelEquippedSlotInfo> Weapon; // 0x40
	TArray<FBravoHotelEquippedSlotInfo> perk; // 0x50
	int32_t exp; // 0x60
};

struct FEquipment_info {
	int32_t weapon_slot1_id; // 0x0
	FString weapon_slot1_name; // 0x8
	int32_t weapon_slot2_id; // 0x18
	FString weapon_slot2_name; // 0x20
	int32_t weapon_slot3_id; // 0x30
	FString weapon_slot3_name; // 0x38
	int32_t weapon_slot4_id; // 0x48
	FString weapon_slot4_name; // 0x50
	int32_t weapon_slot5_id; // 0x60
	FString weapon_slot5_name; // 0x68
	int32_t helmet_id; // 0x78
	FString helmet_name; // 0x80
	int32_t armor_id; // 0x90
	FString armor_name; // 0x98
	int32_t bag_id; // 0xa8
	FString bag_name; // 0xb0
};

struct FTagAndValue {
	FName Tag; // 0x0
	FString Value; // 0x8
};

struct FWaitingEvent {
	float DelayTime; // 0x0
	int32_t TrialCount; // 0x4
};

struct FRecipeTreeWidgetInfo {
	UWidget* CurrentWidget; // 0x0
	int32_t RepairWidgetInfoIndex; // 0x8
	TArray<int32_t> MaterialWidgetInfoIndex; // 0x10
	TArray<UWidget*> TreeDecoWidgets; // 0x20
};

struct FLuminComponentSubElement {
	ELuminComponentSubElementType ElementType; // 0x0
	FString Value; // 0x8
};

struct FBTDecoratorLogic {
	EBTDecoratorLogic Operation; // 0x0
	uint16_t Number; // 0x2
};

struct FCheaCommandInfo {
	bool IsHotKey; // 0x0
	FString Command; // 0x8
	FString Desc; // 0x18
	TArray<FString> ParamHintList; // 0x28
};

struct FMK3DHighlightTargetEvent {
	FString ID; // 0x0
	FString Group; // 0x10
	FString MetaData; // 0x20
	int32_t Time1; // 0x30
	int32_t Time2; // 0x34
	FString TargetNetGUID; // 0x38
	FString TargetId; // 0x48
	FString TargetName; // 0x58
};

struct FFoliageTypeObject {
	UObject* FoliageTypeObject; // 0x0
	UFoliageType* TypeInstance; // 0x8
	bool bIsAsset; // 0x10
	UFoliageType_InstancedStaticMesh* Type; // 0x18
};

struct FMovieSceneEvaluationTemplate {
	TMap<FMovieSceneTrackIdentifier, FMovieSceneEvaluationTrack> Tracks; // 0x0
	FMovieSceneEvaluationField EvaluationField; // 0xa0
	FMovieSceneSequenceHierarchy Hierarchy; // 0xd0
	FGuid SequenceSignature; // 0x170
	FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber; // 0x180
	FMovieSceneTemplateGenerationLedger TemplateLedger; // 0x188
	FMovieSceneTrackFieldData TrackFieldData; // 0x230
	FMovieSceneSubSectionFieldData SubSectionFieldData; // 0x290
};

struct FSM_State {
	FName Name; // 0x0
	UStateMachineComponent* Owner; // 0x8
	FMulticastInlineDelegate OnBeginState; // 0x10
	FMulticastInlineDelegate OnUpdateState; // 0x20
	FMulticastInlineDelegate OnExitState; // 0x30
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

struct FAnalysisDediMatchingRPInfoData {
	TArray<FAnalysisDediPlayerRPInfoData> player_rp_info; // 0x0
};

struct FAkCommunicationSettingsWithCommSelection : FAkCommunicationSettings {
	EAkCommSystem CommunicationSystem; // 0x20
};

struct FNiagaraSystemCompiledData {
	FNiagaraParameterStore InstanceParamStore; // 0x0
	FNiagaraDataSetCompiledData DataSetCompiledData; // 0xb8
	FNiagaraDataSetCompiledData SpawnInstanceParamsDataSetCompiledData; // 0xf8
	FNiagaraDataSetCompiledData UpdateInstanceParamsDataSetCompiledData; // 0x138
	FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding; // 0x178
	FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding; // 0x198
	FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding; // 0x1b8
	TArray<FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings; // 0x1d8
	FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding; // 0x1e8
	FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding; // 0x208
	FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding; // 0x228
	TArray<FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings; // 0x248
};

struct FC2G_PartyWhoReady {
	FString Type; // 0x0
	FC2G_PartyWhoReady_Data Data; // 0x10
};

struct FDirectoryPath {
	FString Path; // 0x0
};

struct FLatentActionInfo {
	int32_t Linkage; // 0x0
	int32_t UUID; // 0x4
	FName ExecutionFunction; // 0x8
	UObject* CallbackTarget; // 0x10
};

struct FDatasmithReimportOptions {
	bool bUpdateActors; // 0x0
	bool bRespawnDeletedActors; // 0x1
};

struct FRenderingPolygonGroup {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
};

struct FLensBloomSettings {
	FGaussianSumBloomSettings GaussianSum; // 0x0
	FConvolutionBloomSettings Convolution; // 0x88
	EBloomMethod Method; // 0xb0
};

struct FGizmoFloatParameterChange {
	float InitialValue; // 0x0
	float CurrentValue; // 0x4
};

struct FItemDataInfo {
	int32_t LastTotalSpawnedPickUpItemCount; // 0x0
	TArray<FItemSpawnState> ItemSpawnStateList; // 0x8
	TMap<FString, FItemCountInfo> ItemLogList; // 0x18
	int32_t PickUpItemSpawnCount; // 0x68
	int32_t TotalItemSpawnCount; // 0x6c
	int32_t MaxPickUpItemSpawnCount; // 0x70
	bool UnlimitItemSpawnCnt; // 0x74
	bool ItemSpawnInBlueZone; // 0x75
	bool UsingWorldItemSpawnTalbeInBlueZone; // 0x76
	bool UsingMaxPickUpItemSpawnCount; // 0x77
	bool UsingOuterBlueZone; // 0x78
	FItemSpawnDebug ItemSpawnDebugList; // 0x80
};

struct FDrawToRenderTargetContext {
	UTextureRenderTarget2D* RenderTarget; // 0x0
};

struct FComboBoxStyle : FSlateWidgetStyle {
	FComboButtonStyle ComboButtonStyle; // 0x8
	FSlateSound PressedSlateSound; // 0x3c0
	FSlateSound SelectionChangeSlateSound; // 0x3d8
};

struct FWrappedStringElement {
	FString Value; // 0x0
	FVector2D LineExtent; // 0x10
};

struct FAnalysisClientGameItemWeaponData {
	int32_t loc_x; // 0x0
	int32_t loc_y; // 0x4
	int32_t loc_z; // 0x8
	int32_t pickup_root; // 0xc
	int32_t slot_index; // 0x10
	int32_t item_id; // 0x14
	FString item_name; // 0x18
	int32_t stack; // 0x28
	int32_t Durability; // 0x2c
	FAnalysisClientGameWeaponData Weapon; // 0x30
};

struct FRequest_LoginGeegee {
	FString Client_version; // 0x0
	int32_t os; // 0x10
	FString ott; // 0x18
	FString entry_code; // 0x28
	FString hardware_info; // 0x38
	FString geegee_project_id; // 0x48
};

struct FLightmassDirectionalLightSettings : FLightmassLightSettings {
	float LightSourceAngle; // 0xc
};

struct FMutableModelImageProperties {
	FString TextureParameterName; // 0x0
	TextureFilter Filter; // 0x10
	char SRGB : 1; // 0x14
	int32_t LODBias; // 0x18
};

struct FResponse_WeaponListArray {
	TArray<FResponse_ItemList_Rec> Weapon; // 0x0
};

struct FVehicleTableRow : FTableRowBase {
	TSoftClassPtr<UObject> VehicleClass; // 0x8
	FVector SpawnLocationOffset; // 0x30
};

struct FCollisionLimitDataBase {
	FName DrivingBoneName; // 0x0
	FVector OffsetLocation; // 0x8
	FRotator OffsetRotation; // 0x14
	FVector Location; // 0x20
	FQuat Rotation; // 0x30
	FGuid Guid; // 0x40
};

struct FSpectatorReservation {
	FUniqueNetIdRepl SpectatorId; // 0x0
	FPlayerReservation Spectator; // 0x28
};

struct FWeaponInfo {
	char slot_num; // 0x0
	uint32_t table_index; // 0x4
	FString item_id; // 0x8
	TArray<FOptionInfo> options; // 0x18
	uint32_t Durability; // 0x28
	bool supplied; // 0x2c
};

struct FReplayKillEvent {
	FString KillerName; // 0x0
	FString VictimName; // 0x10
	int32_t TimeSeconds; // 0x20
};

struct FParticleBurst {
	int32_t Count; // 0x0
	int32_t CountLow; // 0x4
	float Time; // 0x8
};

struct FMovieSceneTimecodeSource {
	FTimecode Timecode; // 0x0
	FFrameNumber DeltaFrame; // 0x14
};

struct FTimecode {
	int32_t Hours; // 0x0
	int32_t Minutes; // 0x4
	int32_t Seconds; // 0x8
	int32_t Frames; // 0xc
	bool bDropFrameFormat; // 0x10
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

struct FSpawnVehicleInfo {
	ABravoHotelVehicle* SpawnVehicleClass; // 0x0
	float VehicleProbability; // 0x8
};

struct FPurchaseConfirmation {
	FString PackageName; // 0x10
	PurchaseType Type; // 0x48
};

struct FConversationData : FTableRowBase {
	TArray<FSentenceData> SentenceData; // 0x8
};

struct FBlueprintWidgetAnimationDelegateBinding {
	EWidgetAnimationEvent Action; // 0x0
	FName AnimationToBind; // 0x4
	FName FunctionNameToBind; // 0xc
	FName UserTag; // 0x14
};

struct FGoldenTimeLogData {
	int32_t RevivedTime; // 0x0
	int32_t GoldRequest; // 0x4
	int32_t RevivedUseGold; // 0x8
	int32_t RevivedRemainGold; // 0xc
	int32_t SaviorUseGold; // 0x10
	int32_t SaviorRemainGold; // 0x14
};

struct FAnalysisClientGameItemCombineData {
	TArray<FCombineSourceItem> source_item_list; // 0x0
	int32_t result_item_id; // 0x10
	FString result_item_name; // 0x18
};

struct FMovieSceneBytePropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneByteChannel ByteCurve; // 0x48
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

struct FRewardItem {
	uint32_t table_index; // 0x0
	uint32_t Count; // 0x4
	TMap<FString, uint32_t> options; // 0x8
};

struct FItemStandardGroup : FTableRowBase {
	TArray<FItemStandardGroupInfo> ItemStandardGroupInfos; // 0x8
};

struct FLevelSequenceBindingReferenceArray {
	TArray<FLevelSequenceBindingReference> References; // 0x0
};

struct FNiagaraDataSetCompiledData {
	TArray<FNiagaraVariable> Variables; // 0x0
	TArray<FNiagaraVariableLayoutInfo> VariableLayouts; // 0x10
	uint32_t TotalFloatComponents; // 0x20
	uint32_t TotalInt32Components; // 0x24
	char bRequiresPersistentIDs : 1; // 0x28
	FNiagaraDataSetID ID; // 0x2c
	ENiagaraSimTarget SimTarget; // 0x38
};

struct FNiagaraInt32 {
	int32_t Value; // 0x0
};

struct FSourceEffectChorusSettings {
	float Depth; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	float WetLevel; // 0xc
	float DryLevel; // 0x10
	float Spread; // 0x14
};

struct FKillBroadcastUIInfo {
	FKillBroadcastKillerInfo Attacker; // 0x0
	FKillBroadcastKillerInfo KnockOut; // 0xba8
	ABravoHotelPlayerState* Killer; // 0x1750
	ABravoHotelPlayerState* SubKiller; // 0x1758
	ABravoHotelPlayerState* Died; // 0x1760
	TArray<ABravoHotelPlayerState*> Assist; // 0x1768
	bool IsFinallyKill; // 0x1778
	int32_t KillCount; // 0x177c
	EBroadCastKillMessageType BroadCastKillMessageType; // 0x1780
};

struct FNiagaraID {
	int32_t Index; // 0x0
	int32_t AcquireTag; // 0x4
};

struct FStaticMaterialLayersParameter : FStaticParameterBase {
	FMaterialLayersFunctions Value; // 0x28
};

struct FLevelSequenceBindingReferences {
	TMap<FGuid, FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x0
	TSet<FGuid> AnimSequenceInstances; // 0x50
};

struct FRepHitDamageInfo {
	int16_t Damage; // 0x0
	UBravoHotelDamageType* DamageTypeClass; // 0x8
	TWeakObjectPtr<APawn> Instigator; // 0x10
	char bTaskScheduler : 1; // 0x18
	int16_t HitPointIdx; // 0x1a
	uint16_t WeaponId; // 0x1c
	uint16_t ProjectileId; // 0x1e
};

struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate {
	TArray<FScalarParameterNameAndCurve> Scalars; // 0x20
	TArray<FBoolParameterNameAndCurve> Bools; // 0x30
	TArray<FVector2DParameterNameAndCurves> Vector2Ds; // 0x40
	TArray<FVectorParameterNameAndCurves> Vectors; // 0x50
	TArray<FColorParameterNameAndCurves> Colors; // 0x60
	TArray<FTransformParameterNameAndCurves> Transforms; // 0x70
};

struct FRootMotionSource_MoveToDynamicForce : FRootMotionSource {
	FVector StartLocation; // 0x98
	FVector InitialTargetLocation; // 0xa4
	FVector TargetLocation; // 0xb0
	bool bRestrictSpeedToExpected; // 0xbc
	UCurveVector* PathOffsetCurve; // 0xc0
	UCurveFloat* TimeMappingCurve; // 0xc8
};

struct FSettingInfo : FTableRowBase {
	bool bIsDevelopmentData; // 0x8
	ESettingBigType ParentType; // 0x9
	ESettingType Type; // 0xa
	EKeySettingType KeyType; // 0xb
	ESlotType SlotType; // 0xc
	FText Title; // 0x10
	FText Desc; // 0x28
	TArray<TSoftObjectPtr<UTexture2D>> DescImageList; // 0x40
	bool ImmediatelyApply; // 0x50
	EKeySettingSubType KeySettingSubType; // 0x51
	bool EnableChangeKey; // 0x52
	bool EnableDuplicatekeys; // 0x53
	bool IsAxisKey; // 0x54
	bool UseKeyMapping; // 0x55
	float Min; // 0x58
	float MAX; // 0x5c
	bool bIsSubType; // 0x60
	float Unit; // 0x64
	bool bIsFloatValue; // 0x68
	bool bEditableText; // 0x69
	TArray<FSettingSlotListInfo> ValueList; // 0x70
	float Default; // 0x80
};

struct FNavigationLink : FNavigationLinkBase {
	FVector Left; // 0x30
	FVector Right; // 0x3c
};

struct FBravoHotelWeaponInfo : FTableRowBase {
	FBravoHotelWeaponInfoFPSK FPSK_Info; // 0x8
	float TerminalVelocity; // 0x228
	float CrosshairDecreaseSpeed; // 0x22c
	FText DisplayName; // 0x230
	FBravoHotelDeviation Deviation; // 0x248
	int32_t BulletsPerShot; // 0x274
	FName CrosshairRowName; // 0x278
	int32_t LargeMagSize; // 0x280
	FBravoHotelRecoilInfo Recoil; // 0x288
	EThrowingWeaponType ThrowingWeaponType; // 0x3a8
	UCurveVector* Curve_Sway_Move; // 0x3b0
	float FireRateSingle; // 0x3b8
	FText DisplayRangeType; // 0x3c0
	FName Display_AmmoInfo; // 0x3d8
	FBravoHotelArmsLag ArmsLag; // 0x3e0
	int32_t BurstCount; // 0x3e8
	float ADSToReloadDelayTime; // 0x3ec
	FText DisplayDesc; // 0x3f0
	float Display_Accuracy; // 0x408
	float Display_Damage; // 0x40c
	float MinDamage; // 0x410
	float MaxDamage; // 0x414
	TSoftObjectPtr<UPaperSprite> SilhouetteIconTexture_PaperSprite; // 0x418
	FName WeaponKey; // 0x440
	float BoltActionTime; // 0x448
	FBravoHotelDepthOfFieldBaseInfo DepthOfField; // 0x450
	float CrosshairIncrease; // 0x4a0
	int32_t Display_RateofFire; // 0x4a4
	FText DisplayWeaponType; // 0x4a8
	float ProjectileVelocity; // 0x4c0
	float FireRateBurst; // 0x4c4
	int32_t Display_EffectiveRange; // 0x4c8
	float FireRateAuto; // 0x4cc
	FBravoHotelWeaponInfoADS ADS_Info; // 0x4d0
	float FireIntervalBurst; // 0x6c0
	float Weight; // 0x6c4
	TArray<EWeaponFireMode> AllowedFireModes; // 0x6c8
	FBravoHotelSpreadInfo Spread; // 0x6d8
	float CrosshairInterpSpeed; // 0x718
	FWeaponAttachmentInfo Attachment_Info; // 0x720
	FBravoHotelReloadInfo ReloadInfo; // 0xa38
	float MoveSpeedModifier; // 0xaf0
	EWeaponType WeaponType; // 0xaf4
	int32_t NormalMagSize; // 0xaf8
	UCurveVector* Curve_Sway_Idle; // 0xb00
	FName AllowedAmmoName; // 0xb08
	float Accuracy; // 0xb10
	FString AK_EventKey; // 0xb18
	bool bIsBoltAction; // 0xb28
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

struct FBravoHotelSmartPingIconAnimationSettings {
	EPingIconTransitionAnimationType Enter; // 0x0
	float EnterDuration; // 0x4
	EPingIconLoopAnimationType Loop; // 0x8
	float LoopDuration; // 0xc
	EPingIconTransitionAnimationType Exit; // 0x10
	float ExitDuration; // 0x14
};

struct FBoneSettings {
	char UseBoneReducer : 1; // 0x0
	char BoneReductionTargetBoneRatioEnabled : 1; // 0x0
	char RemoveUnusedBones : 1; // 0x0
	char LimitBonesPerVertex : 1; // 0x0
	char BoneReductionTargetBoneCountEnabled : 1; // 0x0
	char BoneReductionTargetMaxDeviationEnabled : 1; // 0x0
	uint32_t MaxBonePerVertex; // 0x4
	char BoneReductionTargetOnScreenSizeEnabled : 1; // 0x8
	EBoneReductionTargetStopCondition BoneReductionTargetStopCondition; // 0xc
	float BoneReductionTargetBoneRatio; // 0x10
	uint32_t BoneReductionTargetBoneCount; // 0x14
	float BoneReductionTargetMaxDeviation; // 0x18
	uint32_t BoneReductionTargetOnScreenSize; // 0x1c
	int32_t LockBoneSelectionSetID; // 0x20
	FString LockBoneSelectionSetName; // 0x28
	int32_t RemoveBoneSelectionSetID; // 0x38
	FString RemoveBoneSelectionSetName; // 0x40
};

struct FUsableItemText : FTableRowBase {
	int32_t Using; // 0x8
	int32_t Full; // 0xc
	int32_t NoTarget; // 0x10
};

struct FDistanceDatum {
	float FadeInDistanceStart; // 0x0
	float FadeInDistanceEnd; // 0x4
	float FadeOutDistanceStart; // 0x8
	float FadeOutDistanceEnd; // 0xc
	float Volume; // 0x10
};

struct FResponse_CreateDefaultPC_Rec {
	FString user_id; // 0x0
};

struct FBuffDamageLogData : FTableRowBase {
	EBuffDamageLogType BuffDamageLogType; // 0x8
	TSoftObjectPtr<UObject> AttackerIcon; // 0x10
	FText AttackerDescription; // 0x38
	bool ForceAttackerDisplay; // 0x50
	TSoftObjectPtr<UObject> DefenderIcon; // 0x58
	FText DefenderDescription; // 0x80
	bool ForceDefenderDisplay; // 0x98
};

struct FSimpleMemberReference {
	UObject* MemberParent; // 0x0
	FName MemberName; // 0x8
	FGuid MemberGuid; // 0x10
};

struct FGraphAssetPlayerInformation {
	TArray<int32_t> PlayerNodeIndices; // 0x0
};

struct FResponse_Weapon_List_Data {
	int32_t base_index; // 0x0
	FString item_id; // 0x8
	int32_t table_index; // 0x18
	int32_t Durability; // 0x1c
	bool Identified; // 0x20
	bool supplied; // 0x21
	TMap<FString, int32_t> options; // 0x28
	FString created; // 0x78
};

struct FCapturedPropSegment {
	FString PropertyName; // 0x0
	int32_t PropertyIndex; // 0x10
	FString ComponentName; // 0x18
};

struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneStringChannel StringCurve; // 0x48
};

struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneFloatChannel SlomoCurve; // 0x20
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

struct FWeaponAssetData : FTableRowBase {
	FBravoHotelWeaponInfoADS ADS_Info; // 0x8
	FBravoHotelWeaponInfoFPSK FPSK_Info; // 0x1f8
	FWeaponAttachmentInfo Attachment_Info; // 0x418
	UCurveVector* Curve_Sway_Idle; // 0x730
	UCurveVector* Curve_Sway_Move; // 0x738
};

struct FCoh_Response_MaterialList {
	TArray<FResponse_MaterialList_Data> material_list; // 0x0
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

struct FWeaponDurabilityInfo {
	FString item_uid; // 0x0
	int32_t item_id; // 0x10
	FString item_name; // 0x18
	int32_t before_durability; // 0x28
	int32_t after_durability; // 0x2c
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

struct FPartyReservation {
	int32_t TeamNum; // 0x0
	FUniqueNetIdRepl PartyLeader; // 0x8
	TArray<FPlayerReservation> PartyMembers; // 0x30
	TArray<FPlayerReservation> RemovedPartyMembers; // 0x40
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
	bool bHLODMaterial; // 0x88
	bool bWorldCompositionMaterial; // 0x89
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

struct FHmdUserProfileField {
	FString FieldName; // 0x0
	FString FieldValue; // 0x10
};

struct FStaticMeshVertexColorLODData {
	TArray<FPaintedVertex> PaintedVertices; // 0x0
	TArray<FColor> VertexBufferColors; // 0x10
	uint32_t LODIndex; // 0x20
};

struct FRequest_Language {
	FString Language; // 0x0
};

struct FLiveLinkSkeletonStaticData : FLiveLinkBaseStaticData {
	TArray<FName> BoneNames; // 0x10
	TArray<int32_t> BoneParents; // 0x20
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

struct FC2G_PartyKickSomeone_Data {
	FString uidKicked; // 0x0
};

struct FAkExternalSourceInfo {
	FString ExternalSrcName; // 0x0
	AkCodecId CodecID; // 0x10
	FString Filename; // 0x18
	UAkExternalMediaAsset* ExternalSourceAsset; // 0x28
	bool IsStreamed; // 0x30
};

struct FSoundWaveEnvelopeTimeData {
	float Amplitude; // 0x0
	float TimeSec; // 0x4
};

struct FPhysicalSurfaceName {
	EPhysicalSurface Type; // 0x0
	FName Name; // 0x4
};

struct FResponse_PlayInfo {
	uint32_t kill_count; // 0x0
	uint32_t play_count; // 0x4
	FString Training; // 0x8
	uint32_t loser_score; // 0x18
	uint32_t clean_score; // 0x1c
};

struct FGenerateLightmapTexCoordSettings {
	char GenerateLightmapTexCoord : 1; // 0x0
	int32_t LightmapTexCoordLevel; // 0x4
	FString LightmapTexCoordName; // 0x8
	EChartAggregatorMode ChartAggregatorMode; // 0x18
	uint32_t TextureWidth; // 0x1c
	uint32_t TextureHeight; // 0x20
	uint32_t GutterSpace; // 0x24
};

struct FAnalysisClientReactSkillData {
	TArray<int32_t> skill_perk_id; // 0x0
	int32_t perk_id; // 0x10
	FString perk_name; // 0x18
};

struct FRequest_MatchResultDataListArray {
	char battle_mode; // 0x0
	char game_mode; // 0x1
	FString match_id; // 0x8
	FString map_name; // 0x18
	FString start_time; // 0x28
	FString end_time; // 0x38
	FString dedi_ip; // 0x48
	uint32_t dedi_port; // 0x58
	TArray<FRequest_UserResultDataList_Rec> user_result; // 0x60
};

struct FNetworkWebSocket {
	UBravoHotelWebSocket* WebSocket; // 0x0
	FString ip; // 0x8
	int32_t Port; // 0x18
};

struct FG2C_Battle_Mode_Possible_Data {
	bool isBattleModeSoloPossible; // 0x0
	bool isBattleModeDuoPossible; // 0x1
	bool isBattleModeSquadPossible; // 0x2
};

struct FMovieSceneObjectBindingIDs {
	TArray<FMovieSceneObjectBindingID> IDs; // 0x0
};

struct FAkMidiEventBase {
	EAkMidiEventType Type; // 0x0
	char Chan; // 0x1
};

struct FSKeyAction {
	FString Category_51_02F7E3B1472CCCD9B03C9AAA3760BFCF; // 0x0
	TArray<FSKeyMapping> KeyMappings_53_06DB6A864A4AB13D9C9761A1848B4A2A; // 0x10
};

struct FVivoxChanelInfo {
	VoiceChannelType Type; // 0x0
	bool ShouldTransmitOnJoin; // 0x1
	FString ChannelName; // 0x8
	PTTKey AssignChanneltoPTTKey; // 0x18
};

struct FInterpCurvePointQuat {
	float InVal; // 0x0
	FQuat OutVal; // 0x10
	FQuat ArriveTangent; // 0x20
	FQuat LeaveTangent; // 0x30
	EInterpCurveMode InterpMode; // 0x40
};

struct FItemUse {
	bool Visibility; // 0x0
	bool SubInfo; // 0x1
	float Percent; // 0x4
	float RemainTime; // 0x8
	FColor Color; // 0xc
	FString Message; // 0x10
};

struct FRepNewbieData {
	bool bIsBeginner; // 0x0
	int32_t DefeatLevel; // 0x4
	FString Training; // 0x8
	int32_t LoserScore; // 0x18
};

struct FQualifiedFrameTime {
	FFrameTime Time; // 0x0
	FFrameRate Rate; // 0x8
};

struct FCustomChannelSetup {
	ECollisionChannel Channel; // 0x0
	ECollisionResponse DefaultResponse; // 0x1
	bool bTraceType; // 0x2
	bool bStaticObject; // 0x3
	FName Name; // 0x4
};

struct FInAppPurchaseProductRequest {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FAnimNode_TwoWayBlend : FAnimNode_Base {
	FPoseLink A; // 0x10
	FPoseLink B; // 0x20
	EAnimAlphaInputType AlphaInputType; // 0x30
	char bAlphaBoolEnabled : 1; // 0x31
	char bResetChildOnActivation : 1; // 0x31
	float ALPHA; // 0x34
	FInputScaleBias AlphaScaleBias; // 0x38
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x40
	FName AlphaCurveName; // 0x88
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x90
};

struct FG2C_PartyWhoVoiceChat_Data {
	FString UID; // 0x0
	bool is_voice_chat; // 0x10
};

struct FG2C_Matching_On_Off_Data {
	FString matchingOnOff; // 0x0
};

struct FMovieSceneEvaluationGroupLUTIndex {
	int32_t LUTOffset; // 0x0
	int32_t NumInitPtrs; // 0x4
	int32_t NumEvalPtrs; // 0x8
};

struct FTargetHealthInfo {
	float TargetHealth; // 0x0
	float Usablehealth; // 0x4
};

struct FRepDiedInfo {
	FRepCharacterInfo Attacker; // 0x0
	FRepCharacterInfo KnockOut; // 0x18
	APlayerState* Killer; // 0x30
	APlayerState* SubKiller; // 0x38
	APlayerState* Died; // 0x40
	TArray<APlayerState*> Assist; // 0x48
	char IsFinallyKill : 1; // 0x58
	uint16_t KillCount; // 0x5a
	uint16_t AliveCount; // 0x5c
	uint16_t KillDistance; // 0x5e
	TArray<FRepDamageInfo> DamageInfos; // 0x60
};

struct FLanguageInfo : FTableRowBase {
	FString CultureCode; // 0x8
	UFontFace* NativeB; // 0x18
	UFontFace* NativeR; // 0x20
	UFontFace* NativeEB; // 0x28
	FString OpeningMediaPath; // 0x30
	FString TutorialMediaPath; // 0x40
};

struct FAnalysisClientHeartBeatData {
	TArray<int32_t> skill_perk_id; // 0x0
	FAnalysisClientGameWeaponData primary_weapon_info; // 0x10
	FAnalysisClientGameWeaponData secondary_weapon_info; // 0x58
	int32_t pistol_id; // 0xa0
	int32_t helmet_id; // 0xa4
	int32_t armor_id; // 0xa8
	int32_t bag_id; // 0xac
	FString State; // 0xb0
	FString pose; // 0xc0
	FString Direction; // 0xd0
	int32_t Speed; // 0xe0
};

struct FSoundWaveSpectralTimeData {
	TArray<FSoundWaveSpectralDataEntry> Data; // 0x0
	float TimeSec; // 0x10
};

struct FGeometryDataCasterSettings {
	FString MaterialChannel; // 0x0
	EOpacityChannelComponent OpacityChannelComponent; // 0x10
	EDitherType DitherType; // 0x14
	EFillMode FillMode; // 0x18
	FString OpacityChannel; // 0x20
	char UseMultisampling : 1; // 0x30
	EGeometryDataFieldType GeometryDataFieldType; // 0x34
	EOutputImageFileFormat OutputImageFileFormat; // 0x38
	EOutputDDSCompressionType OutputDDSCompressionType; // 0x3c
	uint32_t Dilation; // 0x40
	uint32_t GeometryDataFieldIndex; // 0x44
	EOutputPixelFormat OutputPixelFormat; // 0x48
	float MappingInfR; // 0x4c
	float MappingSupR; // 0x50
	float MappingInfG; // 0x54
	float MappingSupG; // 0x58
	float MappingInfB; // 0x5c
	float MappingSupB; // 0x60
	float MappingInfA; // 0x64
	float MappingSupA; // 0x68
	FVector4 MappingInf; // 0x70
	FVector4 MappingSup; // 0x80
};

struct FNiagaraTypeLayoutInfo {
	TArray<uint32_t> FloatComponentByteOffsets; // 0x0
	TArray<uint32_t> FloatComponentRegisterOffsets; // 0x10
	TArray<uint32_t> Int32ComponentByteOffsets; // 0x20
	TArray<uint32_t> Int32ComponentRegisterOffsets; // 0x30
};

struct FCachedAnimAssetPlayerData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
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

struct FWeightmapData {
	TArray<UTexture2D*> Textures; // 0x0
	TArray<FWeightmapLayerAllocationInfo> LayerAllocations; // 0x10
	TArray<ULandscapeWeightmapUsage*> TextureUsages; // 0x20
};

struct FUseGold {
	int32_t paid_coin_gold; // 0x0
	int32_t paid_account_gold; // 0x4
	int32_t class_changed_gold; // 0x8
	int32_t supplybox_opened_gold; // 0xc
	int32_t request_resuscitated_gold; // 0x10
	int32_t resuscitated_gold; // 0x14
};

struct FRedisPubSub_LeaveGame : FRedisPubSub_Header {
	FString UID; // 0x10
};

struct FPlayerMatchReward {
	FString user_id; // 0x0
	uint32_t pc_class_type_index; // 0x10
	char reward_type; // 0x14
	char Rank; // 0x15
	char participants; // 0x16
	uint32_t earned_gold; // 0x18
	uint32_t earned_exp; // 0x1c
	TArray<FRewardItem> earned_items; // 0x20
	FSuppliedWeapon supplied_weapon; // 0x30
	bool save_summary; // 0x50
};

struct FMovieSceneEvaluationKey {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
	uint32_t SectionIndex; // 0x8
};

struct FResponse_SeasonInfo {
	uint32_t season_id; // 0x0
	FString begin_time; // 0x8
	FString play_end_time; // 0x18
	FString end_time; // 0x28
	uint32_t exp_table_index; // 0x38
	uint32_t quest_table_index; // 0x3c
};

struct FNiagaraMatrix {
	FVector4 Row0; // 0x0
	FVector4 Row1; // 0x10
	FVector4 Row2; // 0x20
	FVector4 Row3; // 0x30
};

struct FMovieSceneStringChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FString> Values; // 0x18
	FString DefaultValue; // 0x28
	bool bHasDefaultValue; // 0x38
};

struct FInlineTextImageStyle : FSlateWidgetStyle {
	FSlateBrush Image; // 0x8
	int16_t Baseline; // 0x90
};

struct FNameMapping {
	FName NodeName; // 0x4
	FName BoneName; // 0x10
};

struct FRepCharacterInfo {
	APlayerState* PlayerState; // 0x0
	int32_t DamageTypeID; // 0x8
	uint16_t WeaponIndex; // 0xc
	uint16_t HitPointIdx; // 0xe
	float DamageAmount; // 0x10
};

struct FIncendiaryInfo {
	bool bActive; // 0x0
	float DamageTime; // 0x4
	float FireDamage; // 0x8
	float ActiveRange; // 0xc
	float FireShrinkTime; // 0x10
};

struct FExponentialHeightFogData {
	float FogDensity; // 0x0
	float FogHeightFalloff; // 0x4
	float FogHeightOffset; // 0x8
};

struct FLandscapeInfoLayerSettings {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
	FName LayerName; // 0x8
};

struct FRandomSpawn : FTableRowBase {
	ERandomType RandomType; // 0x8
	TArray<FRandomProbability> Items; // 0x10
};

struct FPreviewMeshCollectionEntry {
	TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x0
};

struct FAnalysisDediVehicleSpawnData {
	int32_t spawner_cnt; // 0x0
	TArray<FAnalysisDediVehicleData> vehicle_spawn_info; // 0x8
};

struct FROscillator {
	FFOscillator Pitch; // 0x0
	FFOscillator Yaw; // 0xc
	FFOscillator Roll; // 0x18
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

struct FFriendInfo {
	FString UID; // 0x0
	FString player_name; // 0x10
	FString status; // 0x20
};

struct FNiagaraVariableBase {
	FName Name; // 0x0
	FNiagaraTypeDefinition TypeDef; // 0x8
};

struct FAnimNode_CustomProperty : FAnimNode_Base {
	TArray<FName> SourcePropertyNames; // 0x10
	TArray<FName> DestPropertyNames; // 0x20
	UObject* TargetInstance; // 0x30
};

struct FInterpControlPoint {
	FVector PositionControlPoint; // 0x0
	bool bPositionIsRelative; // 0xc
};

struct FDummyInfo {
	FBravoHotelPingInfo PingInfo; // 0x0
	FVector PingLocalLocation; // 0x38
	TArray<FVector> RouteInfo; // 0x48
};

struct FPlayerPawnList {
	ACharacter* Pawn; // 0x0
	FBravoHotelPartyMemberInfo PartyInfo; // 0x8
};

struct FAkAdvancedSpatialAudioSettings {
	float DiffractionShadowAttenuationFactor; // 0x0
	float DiffractionShadowDegrees; // 0x4
};

struct FOutputMaterialSettings {
	uint32_t TextureWidth; // 0x0
	uint32_t TextureHeight; // 0x4
	uint32_t MultisamplingLevel; // 0x8
	uint32_t GutterSpace; // 0xc
};

struct FDamageInfo {
	ABravoHotelPlayerController* Instigator; // 0x0
	float DamageAmount; // 0x8
};

struct FPerkInfoArray : FFastArraySerializer {
	TArray<FRepPerkInfo> Items; // 0x108
};

struct FVectorDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FBravoHotelDamageEvent_Point : FPointDamageEvent {
	AController* AttackerPC; // 0xa8
	AActor* AttackerActor; // 0xb0
	TArray<uint16_t> AdditionalBuffIndexes; // 0xb8
	FVector FireLocation; // 0xc8
	float ProjectileGravity; // 0xd4
	uint16_t ProjectileId; // 0xd8
	FDataEventDamageBuffInfo AttackerBuffInfo; // 0xe0
};

struct FItemRecipeMaterialElement : FTableRowBase {
	FName MaterialItem; // 0x8
	int32_t Count; // 0x10
};

struct FResponse_DelItem_Rec {
	uint32_t item_mid; // 0x0
	FString item_name; // 0x8
	uint32_t item_slot; // 0x18
};

struct FG2C_MatchFail_Data {
	uint32_t C; // 0x0
	FString E; // 0x8
};

struct FAnalysisClientGameDiedVictimCharacterData {
	bool bIsAI; // 0x0
	int32_t loc_x; // 0x4
	int32_t loc_y; // 0x8
	int32_t loc_z; // 0xc
	FString UserID; // 0x10
	FString NickName; // 0x20
	int32_t ClassIndex; // 0x30
	int32_t Level; // 0x34
	int32_t max_hp; // 0x38
	int32_t knockdowned; // 0x3c
	int32_t current_hp; // 0x40
	TArray<int32_t> skill_perk_id; // 0x48
	FAnalysisClientGameWeaponData current_weapon; // 0x58
	FString equip_helmet; // 0xa0
	int32_t helmet_durability; // 0xb0
	FString equip_armour; // 0xb8
	int32_t armour_durability; // 0xc8
	int32_t fire_type; // 0xcc
	int32_t zoom_type; // 0xd0
};

struct FLevelSequenceObject {
	LazyObjectProperty ObjectOrOwner; // 0x0
	FString ComponentName; // 0x20
	TWeakObjectPtr<UObject> CachedComponent; // 0x30
};

struct FInteraction {
	EInteractionType InteractionType; // 0x0
	EKeySettingType KeyType; // 0x1
	bool Visibility; // 0x2
	bool bIsAble; // 0x3
	FText Message; // 0x8
	FText MessageDesc; // 0x20
};

struct FResponse_CraftWeapon_Data {
	int32_t table_index; // 0x0
	int32_t before_gold; // 0x4
	int32_t after_gold; // 0x8
	TArray<FResponse_CraftWeapon_Material> removed_materials; // 0x10
	TArray<FResponse_CraftWeapon_Material> updated_materials; // 0x20
	FString removed_weapon_item_id; // 0x30
	FResponse_CraftWeapon_Weapon crafted_weapon; // 0x40
};

struct FBakedStateExitTransition {
	int32_t CanTakeDelegateIndex; // 0x0
	int32_t CustomResultNodeIndex; // 0x4
	int32_t TransitionIndex; // 0x8
	bool bDesiredTransitionReturnValue; // 0xc
	bool bAutomaticRemainingTimeRule; // 0xd
	TArray<int32_t> PoseEvaluatorLinks; // 0x10
};

struct FSessionServiceLog {
	FName Category; // 0x0
	FString Data; // 0x8
	FGuid InstanceId; // 0x18
	double TimeSeconds; // 0x28
	char Verbosity; // 0x30
};

struct FVisibilitySettings {
	char UseVisibilityWeightsInReducer : 1; // 0x0
	char UseVisibilityWeightsInTexcoordGenerator : 1; // 0x0
	float VisibilityWeightsPower; // 0x4
	char CullOccludedGeometry : 1; // 0x8
	char ForceVisibilityCalculation : 1; // 0x8
	char UseBackfaceCulling : 1; // 0x8
	int32_t CameraSelectionSetID; // 0xc
	FString CameraSelectionSetName; // 0x10
	int32_t OccluderSelectionSetID; // 0x20
	FString OccluderSelectionSetName; // 0x28
	float FillNonVisibleAreaThreshold; // 0x38
	char RemoveTrianglesNotOccludingOtherTriangles : 1; // 0x3c
	char ConservativeMode : 1; // 0x3c
	EComputeVisibilityMode ComputeVisibilityMode; // 0x40
};

struct FPerkUIInfo {
	EPerkSlotFlag Slot; // 0x0
	FName PerkName; // 0x4
	int32_t PerkID; // 0xc
	int32_t InGamelevel; // 0x10
	int32_t CurrentExp; // 0x14
	int32_t ActiveSkillIndex; // 0x18
	bool bActive; // 0x1c
	bool bCanActive; // 0x1d
	bool bCoolTime; // 0x1e
	float Timer; // 0x20
	float MaxTime; // 0x24
	EKeySettingType KeySettingType; // 0x28
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

struct FShapedTextOptions {
	char bOverride_TextShapingMethod : 1; // 0x0
	char bOverride_TextFlowDirection : 1; // 0x0
	ETextShapingMethod TextShapingMethod; // 0x1
	ETextFlowDirection TextFlowDirection; // 0x2
};

struct FBlackboardEntry {
	FName EntryName; // 0x0
	UBlackboardKeyType* KeyType; // 0x8
	char bInstanceSynced : 1; // 0x10
};

struct FFloatRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FResponse_AskLoginAvailable {
	uint32_t C; // 0x0
	FString E; // 0x8
	FResponse_AskLoginAvailable_Rec D; // 0x18
};

struct FAmmoSpawnAmountInfo : FTableRowBase {
	int32_t Amount; // 0x8
};

struct FMovieSceneGeometryCollectionParams {
	FSoftObjectPath GeometryCollectionCache; // 0x8
	FFrameNumber StartFrameOffset; // 0x20
	FFrameNumber EndFrameOffset; // 0x24
	float PlayRate; // 0x28
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

struct FAIRequestID {
	uint32_t RequestID; // 0x0
};

struct FInterpCurveFloat {
	TArray<FInterpCurvePointFloat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FWeaponItemLogData {
	FString MaxItemID; // 0x0
	int32_t MaxItemDamageValue; // 0x10
	int32_t MaxItemDamageCount; // 0x14
	int32_t MaxItemHeadShotCount; // 0x18
	float MaxItemDistance; // 0x1c
};

struct FIntegerParameterUIData {
	FString Name; // 0x0
	FMutableParamUIMetadata ParamUIMetadata; // 0x10
};

struct FDamageInfoByDamageTypeInfo {
	int32_t damage_type_index; // 0x0
	bool is_class_skill; // 0x4
	int32_t kill_count; // 0x8
	int32_t Damage; // 0xc
};

struct FConstraintProfileProperties {
	float ProjectionLinearTolerance; // 0x0
	float ProjectionAngularTolerance; // 0x4
	float LinearBreakThreshold; // 0x8
	float AngularBreakThreshold; // 0xc
	FLinearConstraint LinearLimit; // 0x10
	FConeConstraint ConeLimit; // 0x2c
	FTwistConstraint TwistLimit; // 0x4c
	FLinearDriveConstraint LinearDrive; // 0x68
	FAngularDriveConstraint AngularDrive; // 0xb4
	char bDisableCollision : 1; // 0x100
	char bParentDominates : 1; // 0x100
	char bEnableProjection : 1; // 0x100
	char bAngularBreakable : 1; // 0x100
	char bLinearBreakable : 1; // 0x100
};

struct FAICharacterAppearanceInfo {
	int32_t FaceID; // 0x0
	int32_t FaceColorID; // 0x4
	int32_t HairID; // 0x8
	int32_t HairColorID; // 0xc
	int32_t gender; // 0x10
};

struct FItemPickUpData : FTableRowBase {
	FName ItemEffectID; // 0x8
	bool bOverridePickupScale; // 0x10
	FVector OverlapBoxExtent; // 0x14
	float TraceSphereRadius; // 0x20
	FVector WorldStaticMeshLoc; // 0x24
	FRotator WorldStaticMeshRot; // 0x30
	FVector WorldStaticMeshScale; // 0x3c
	FVector WorldSkelMeshLoc; // 0x48
	FRotator WorldSkelMeshRot; // 0x54
	FVector WorldSkelMeshScale; // 0x60
	char bUseStaticMesh : 1; // 0x6c
	TSoftObjectPtr<UStaticMesh> WorldStaticMesh; // 0x70
	TSoftObjectPtr<USkeletalMesh> WorldSkeletalMesh; // 0x98
	float NetCullDistanceSquared; // 0xc0
	float DrawDistance; // 0xc4
	TSoftObjectPtr<UAkAudioEvent> AudioEvent; // 0xc8
};

struct FEngineServiceTerminate {
	FString UserName; // 0x0
};

struct FAttributesForVertex {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexAttributes; // 0x8
};

struct FRepSimulatedTakeDamageInfo {
	char bHeadShot : 1; // 0x0
	float Damage; // 0x4
	UBravoHotelDamageType* DamageTypeClass; // 0x8
	FVector_NetQuantize ImpactPoint; // 0x10
	FVector_NetQuantizeNormal ShotDirection; // 0x1c
	TWeakObjectPtr<APawn> Instigator; // 0x28
	int16_t HitPointIdx; // 0x30
	uint16_t WeaponId; // 0x32
	uint16_t ProjectileId; // 0x34
};

struct FPointIndexes {
	TArray<int32_t> RowIndexes; // 0x0
};

struct FTransformFilter {
	FFilterOptionPerAxis TranslationFilter; // 0x0
	FFilterOptionPerAxis RotationFilter; // 0x3
	FFilterOptionPerAxis ScaleFilter; // 0x6
};

struct FAnalysisClientGameDiedVictimCharacterMiniData {
	bool bIsAI; // 0x0
	int32_t knockdowned; // 0x4
	TArray<int32_t> skill_perk_id; // 0x8
	FAnalysisClientGameWeaponData current_weapon; // 0x18
	FString equip_helmet; // 0x60
	int32_t helmet_durability; // 0x70
	FString equip_armour; // 0x78
	int32_t armour_durability; // 0x88
	int32_t fire_type; // 0x8c
	int32_t zoom_type; // 0x90
};

struct FPerkData : FTableRowBase {
	FPerkBaseData BaseData; // 0x8
	TArray<FPerkInGameData> InGameDatas; // 0xd0
};

struct FRandomProbability {
	float Weight; // 0x0
	int32_t BundleItemAmount; // 0x4
	FDataTableRowHandle ItemRowHandle; // 0x8
	TArray<FName> BuffNames; // 0x18
	TSet<FString> Types; // 0x28
};

struct FG2C_GoToDediWhenYouWerePlaying {
	FString Type; // 0x0
	FG2C_GoToDediWhenYouWerePlaying_Data Data; // 0x10
};

struct FStaticMeshSourceModel {
	FMeshBuildSettings BuildSettings; // 0x0
	FMeshReductionSettings ReductionSettings; // 0x30
	float LODDistance; // 0x54
	FPerPlatformFloat ScreenSize; // 0x58
	FString SourceImportFilename; // 0x60
};

struct FTableRedZoneData : FTableRowBase {
	int32_t BeginPhase; // 0x8
	int32_t EndPhase; // 0xc
	FRedZoneData DefaultRedZoneData; // 0x10
	TArray<FRedZoneData> ArrayRedZoneData; // 0x68
};

struct FSM_UpdateEvent {
	char StateID; // 0x0
	float StateTime; // 0x4
};

struct FCharacterClassData : FTableRowBase {
	int32_t ID; // 0x8
	FText DisplayName; // 0x10
	FText Description; // 0x28
	int32_t TypeID; // 0x40
	int32_t Level; // 0x44
	int32_t MaxLevel; // 0x48
	int32_t NextLevelExp; // 0x4c
	FName Reward_01; // 0x50
	int32_t Reward_Value_01; // 0x58
	FName Reward_02; // 0x5c
	int32_t Reward_Value_02; // 0x64
	FName Reward_03; // 0x68
	int32_t Reward_Value_03; // 0x70
	FName Reward_04; // 0x74
	int32_t Reward_Value_04; // 0x7c
	TArray<FMaterialUnit> Reward; // 0x80
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

struct FG2C_PartyAcceptFailed {
	FString Type; // 0x0
	FG2C_PartyAcceptFailed_Data Data; // 0x10
};

struct FAkAmbSoundCheckpointRecord {
	bool bCurrentlyPlaying; // 0x0
};

struct FParameterizerSettings {
	float MaxStretch; // 0x0
	float LargeChartsImportance; // 0x4
};

struct FDynamicTextureInstance : FStreamableTextureInstance {
	UTexture2D* Texture; // 0x28
	bool bAttached; // 0x30
	float OriginalRadius; // 0x34
};

struct FAnimSlotGroup {
	TArray<FName> SlotNames; // 0x8
	FName GroupName; // 0x1c
};

struct FExpertWeaponElement {
	FName WeaponDataID; // 0x0
	float Weight; // 0x8
	TArray<FName> SupplyWeaponItems; // 0x10
	TArray<FName> SupplyItems; // 0x20
	TMap<FString, FName> PerkNames; // 0x30
	TArray<FName> FreeSupplyWeaponItems; // 0x80
	TArray<FName> FreeSupplyItems; // 0x90
};

struct FItemComparefloatInfo {
	float Value; // 0x0
	float CompareValue; // 0x4
	ECompareItemType CompareType; // 0x8
	FString CompareString; // 0x10
};

struct FTimedCameraEffectData {
	UCameraComponent* TargetCamera_TPP; // 0x8
	UCameraComponent* TargetCamera_FPP; // 0x10
	UParticleSystemComponent* SpawnedParticle_TPP; // 0x18
	UParticleSystemComponent* SpawnedParticle_FPP; // 0x20
};

struct FRootMotionExtractionStep {
	UAnimSequence* AnimSequence; // 0x0
	float StartPosition; // 0x8
	float EndPosition; // 0xc
};

struct FG2C_PartyWhoUpdateTierID {
	FString Type; // 0x0
	FG2C_PartyWhoUpdateTierID_Data Data; // 0x10
};

struct FBasedMovementInfo {
	UPrimitiveComponent* MovementBase; // 0x0
	FName BoneName; // 0x8
	FVector_NetQuantize Location; // 0x10
	FRotator Rotation; // 0x1c
	bool bServerHasBaseComponent; // 0x28
	bool bRelativeRotation; // 0x29
	bool bServerHasVelocity; // 0x2a
};

struct FNiagaraFunctionSignature {
	FName Name; // 0x0
	TArray<FNiagaraVariable> Inputs; // 0x8
	TArray<FNiagaraVariable> Outputs; // 0x18
	FName OwnerName; // 0x28
	char bRequiresContext : 1; // 0x30
	char bMemberFunction : 1; // 0x30
	char bExperimental : 1; // 0x30
	char bSupportsCPU : 1; // 0x30
	char bSupportsGPU : 1; // 0x30
	char bWriteFunction : 1; // 0x30
	TMap<FName, FName> FunctionSpecifiers; // 0x38
};

struct FMagicLeapHandMeshBlock {
	int32_t IndexCount; // 0x0
	int32_t VertexCount; // 0x4
	TArray<FVector> Vertex; // 0x8
	TArray<int32_t> Index; // 0x18
};

struct FAccountExpData : FTableRowBase {
	int32_t ID; // 0x8
	FText DisplayName; // 0x10
	FText Description; // 0x28
	int32_t Level; // 0x40
	int32_t MaxLevel; // 0x44
	int32_t LevelUPExp; // 0x48
	int32_t NextLevelExp; // 0x4c
	int32_t NextLevel; // 0x50
	int32_t GroupRewardID; // 0x54
};

struct FTTFloatTrack : FTTPropertyTrack {
	UCurveFloat* CurveFloat; // 0x20
};

struct FMovieSceneCameraShakeSectionData {
	UCameraShake* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraAnimPlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
};

struct FMovieSceneComponentTransformSectionTemplate : FMovieSceneEvalTemplate {
	FMovieScene3DTransformTemplateData TemplateData; // 0x20
};

struct FVectorParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	FLinearColor ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x20
};

struct FCollisionResponse {
	FCollisionResponseContainer ResponseToChannels; // 0x0
	TArray<FResponseChannel> ResponseArray; // 0x20
};

struct FNetAnalyticsDataConfig {
	FName DataName; // 0x0
	bool bEnabled; // 0x8
};

struct FG2C_AllUserKick {
	FString Type; // 0x0
	FG2C_AllUserKick_Data Data; // 0x10
};

struct FLandscapeProxyMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
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

struct FLandscapeMaterialTextureStreamingInfo {
	FName TextureName; // 0x0
	float TexelFactor; // 0x8
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
	char bOverride_LPVReflectionIntensity : 1; // 0x1
	char bOverride_LPVReflectionLength : 1; // 0x1
	char bOverride_LPVReflectionOcclusion : 1; // 0x1
	char bOverride_LPVHairSpecularLightingIntensity : 1; // 0x2
	char bOverride_LPVHairSpecularOcclusionIntensity : 1; // 0x2
	char bOverride_LPVHairRoughnessOverride : 1; // 0x2
	char bOverride_LPVDistantLightingIntensity : 1; // 0x2
	char bOverride_UseSeparateAOVolume : 1; // 0x2
	char bOverride_LPVEnvironmentColor : 1; // 0x2
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
	float LPVReflectionIntensity; // 0x40
	float LPVReflectionLength; // 0x44
	char bLPVReflectionOcclusion : 1; // 0x48
	float LPVHairSpecularLightingIntensity; // 0x4c
	float LPVHairSpecularOcclusionIntensity; // 0x50
	float LPVHairRoughnessOverride; // 0x54
	float LPVDistantLightingIntensity; // 0x58
	FLinearColor LPVEnvironmentColor; // 0x5c
	char bUseSeparateAOVolume : 1; // 0x6c
};

struct FPrimaryAssetRulesOverride {
	FPrimaryAssetId PrimaryAssetId; // 0x0
	FPrimaryAssetRules Rules; // 0x10
};

struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x7f8
};

struct FLogMapInfo {
	int32_t map_index; // 0x0
	int32_t magnetic_index; // 0x4
};

struct FResultSpawnItemInfo {
	int32_t SpawnBoxID; // 0x0
	FName ItemId; // 0x4
	ABravoHotelPickup* SpawnItem; // 0x10
	int32_t ItemCount; // 0x18
};

struct FCoh_MatchingSettings {
	bool bPerson; // 0x0
	FString Map; // 0x8
	int32_t TypeNum; // 0x18
	bool NeedMoreMember; // 0x1c
};

struct FLevelCollection {
	AGameStateBase* GameState; // 0x8
	UNetDriver* NetDriver; // 0x10
	UDemoNetDriver* DemoNetDriver; // 0x18
	ULevel* PersistentLevel; // 0x20
	TSet<ULevel*> Levels; // 0x28
	TArray<ULevel*> CachedLevels; // 0x78
};

struct FEQSParametrizedQueryExecutionRequest {
	UEnvQuery* QueryTemplate; // 0x0
	TArray<FAIDynamicParam> QueryConfig; // 0x8
	FBlackboardKeySelector EQSQueryBlackboardKey; // 0x18
	EEnvQueryRunMode RunMode; // 0x40
	char bUseBBKeyForQueryTemplate : 1; // 0x44
};

struct FNodeObject {
	FName Name; // 0x0
	FName ParentName; // 0x8
};

struct FItemColorData : FTableRowBase {
	int32_t ID; // 0x8
	FText DisplayName; // 0x10
	FText Description; // 0x28
	EWearableItemType Slot; // 0x40
	TSoftObjectPtr<UTexture2D> Icon; // 0x48
};

struct FSplineCurves {
	FInterpCurveVector Position; // 0x0
	FInterpCurveQuat Rotation; // 0x18
	FInterpCurveVector Scale; // 0x30
	FInterpCurveFloat ReparamTable; // 0x48
	USplineMetadata* MetaData; // 0x60
};

struct FSpriteInstanceData {
	FMatrix Transform; // 0x0
	UPaperSprite* SourceSprite; // 0x40
	FColor VertexColor; // 0x48
	int32_t MaterialIndex; // 0x4c
};

struct FSkelMeshSkinWeightInfo {
	int32_t Bones[0xc]; // 0x0
	char Weights[0xc]; // 0x30
};

struct FAnalysisClientGameRevivalData {
	int32_t revived_time; // 0x0
	FAnalysisClientGameRevivalCharacterData savior_info; // 0x8
	FAnalysisClientGameRevivalCharacterData revived_info; // 0x40
};

struct FInAppPurchaseReceiptInfo {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FAnalysisClientGameGoldenTimeRevivalData {
	int32_t revived_time; // 0x0
	int32_t gold_request; // 0x4
	FAnalysisClientGameGoldenTimeRevivalCharacterData savior_info; // 0x8
	FAnalysisClientGameGoldenTimeRevivalCharacterData revived_info; // 0x48
};

struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	int32_t MaterialIndex; // 0x80
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

struct FS_ReplayInfo {
	FString ReplayName; // 0x0
	FString FriendlyName; // 0x10
	FDateTime Timestamp; // 0x20
	int32_t LengthInMS; // 0x28
	bool bIsValid; // 0x2c
};

struct FBravoHotelDefaultWearableSetting {
	bool bUse; // 0x0
	TArray<FString> WearableTableRowList; // 0x8
};

struct FTwoVectors {
	FVector v1; // 0x0
	FVector v2; // 0xc
};

struct FStatupAnimParameters {
	float Damage; // 0x0
	float Decrement; // 0x4
	float Capacity; // 0x8
	float Attack; // 0xc
	float Speed; // 0x10
	float Health; // 0x14
	float Rarity; // 0x18
};

struct FARPose3D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FTransform> JointTransforms; // 0x28
	TArray<bool> IsJointTracked; // 0x38
	EARJointTransformSpace JointTransformSpace; // 0x48
};

struct FPerkDeckElement {
	int32_t Weight; // 0x0
	int32_t LevelUpWeight; // 0x4
	FName PerkID; // 0x8
	TMap<FName, float> RandomList; // 0x10
	int32_t PerkPhase; // 0x60
	int32_t PerkPhaseMaxCount; // 0x64
	int32_t PerkGroup; // 0x68
	int32_t MinLevel; // 0x6c
};

struct FBlendProfileBoneEntry {
	FBoneReference BoneReference; // 0x0
	float BlendScale; // 0x10
};

struct FBlockData : FTableRowBase {
	int32_t Index; // 0x8
	EBlockType Type; // 0xc
	bool Period; // 0xd
	FText Desc; // 0x10
	FString Adm_Desc; // 0x28
};

struct FG2C_Login_Data {
	uint32_t C; // 0x0
	FString E; // 0x8
	FString D; // 0x18
	FString UID; // 0x28
	FString playerName; // 0x38
	FString URL; // 0x48
	bool isCanGoDedi; // 0x58
	FString matchingOnOff; // 0x60
	bool isBattleModeSoloPossible; // 0x70
	bool isBattleModeDuoPossible; // 0x71
	bool isBattleModeSquadPossible; // 0x72
	bool isWhiteIP; // 0x73
	bool isGameViewTypeFPP; // 0x74
	bool isGameViewTypeTPP; // 0x75
};

struct FStandinProxyEntry {
	LazyObjectProperty StandinActor; // 0x0
	UStaticMesh* StaticMesh; // 0x20
	UMaterialInterface* Material; // 0x28
	TArray<UTexture2D*> Textures; // 0x30
	FName Key; // 0x40
};

struct FG2C_FriendWhoAccept {
	FString Type; // 0x0
	FG2C_FriendWhoAccept_Data Data; // 0x10
};

struct FCrowdAvoidanceSamplingPattern {
	TArray<float> Angles; // 0x0
	TArray<float> Radii; // 0x10
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

struct FCastingInfo {
	bool IsActive; // 0x0
	ECastingUIType CastingUIType; // 0x1
	FName SourceName; // 0x4
	float MaxTime; // 0xc
	ABravoHotelCharacter* Target; // 0x10
};

struct FBravoHotelWeaponInfoFPSK : FTableRowBase {
	TSoftObjectPtr<USkeletalMesh> FPSK_SkelMesh_FPP; // 0x8
	TArray<TSoftObjectPtr<UMaterialInterface>> FPSK_Materials_FPP; // 0x30
	UAnimInstance* FPSK_AnimInstance_FPP; // 0x40
	TSoftObjectPtr<USkeletalMesh> FPSK_SkelMesh_TPP; // 0x48
	TArray<TSoftObjectPtr<UMaterialInterface>> FPSK_Materials_TPP; // 0x70
	UAnimInstance* FPSK_AnimInstance_TPP; // 0x80
	TMap<EWeaponAttachmentGrip, UAnimSequence*> FPSK_GripAnims; // 0x88
	float FPSK_ADSSpeed; // 0xd8
	TMap<EWeaponAttachmentItem, float> FPSK_CameraDistance; // 0xe0
	TMap<EWeaponAttachmentItem, float> FPSK_ScopeAngleOnMove; // 0x130
	TMap<EWeaponAttachmentItem, float> FPSK_ClippingDistance; // 0x180
	TMap<EWeaponAttachmentItem, ABravoHotelSightAttachment*> FPSK_SightClasses; // 0x1d0
};

struct FTransformBaseConstraint {
	TArray<FRigTransformConstraint> TransformConstraints; // 0x0
};

struct FBravoHotelSmartPingIconAdvancedSettings {
	bool ShowInSelectionMenu; // 0x0
	bool ShowDistance; // 0x1
	bool ShowPeripheral; // 0x2
	float PeripheralEdgePercent; // 0x4
	bool AllowLocalTintOverride; // 0x8
};

struct FC2G_PartyEntrustSomeone_Data {
	FString uidEntrusted; // 0x0
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

struct FTransformParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel Translation[0x3]; // 0x8
	FMovieSceneFloatChannel Rotation[0x3]; // 0x1e8
	FMovieSceneFloatChannel Scale[0x3]; // 0x3c8
};

struct FBravoHotelArmsLag {
	float ArmsLagRotationMax; // 0x0
	float ArmsLagRotationSpeed; // 0x4
};

struct FNamedInterfaceDef {
	FName InterfaceName; // 0x0
	FString InterfaceClassName; // 0x8
};

struct FMovieSceneEnumPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneByteChannel EnumCurve; // 0x48
};

struct FAnimSlotDesc {
	FName SlotName; // 0x0
	int32_t NumChannels; // 0x8
};

struct FExcelCellReference {
	int32_t Column; // 0x0
	int32_t Row; // 0x4
};

struct FItemDebugInfo {
	FVector BuuildingLocation; // 0x0
	TMap<FString, FBuildingDebug> StandardGroupData; // 0x10
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

struct FResponse_AcceptFriend {
	uint32_t C; // 0x0
	FString E; // 0x8
	FResponse_AcceptFriend_Rec D; // 0x18
};

struct FAwsCredentialsForIdentityResponse {
	TMap<FString, FString> Credentials; // 0x0
	FString IdentityId; // 0x50
};

struct FAnimCurveBase {
	FName LastObservedName; // 0x0
	FSmartName Name; // 0x8
	int32_t CurveTypeFlags; // 0x14
};

struct FAnalysisClientPackageLoadingFailure {
	FString reason; // 0x0
};

struct FReplayCircleInfo {
	bool IsReplayCircle; // 0x0
	FVector2D ReplayCirclePos; // 0x4
	float ReplayCircleRadius; // 0xc
};

struct FDiedDamageInfo {
	bool IsWeaponKill; // 0x0
	int32_t WeaponRarity; // 0x4
	FBravoHotelWeaponInfo WeaponInfo; // 0x8
	FDamageTypeTable DamageTypeRow; // 0xb38
	TArray<int32_t> HitPartsIndexes; // 0xba0
	int32_t HitCount; // 0xbb0
	float DamageAmount; // 0xbb4
	bool bKnockOut; // 0xbb8
	EDiedDamageInfoType DiedDamageInfoType; // 0xbb9
	TArray<FDamageBuffInfo> AttackerBuffs; // 0xbc0
	TArray<FDamageBuffInfo> DefenderBuffs; // 0xbd0
};

struct FAnimNode_BlendBoneByChannel : FAnimNode_Base {
	FPoseLink A; // 0x10
	FPoseLink B; // 0x20
	TArray<FBlendBoneByChannelEntry> BoneDefinitions; // 0x30
	float ALPHA; // 0x50
	FInputScaleBias AlphaScaleBias; // 0x58
	EBoneControlSpace TransformsSpace; // 0x60
};

struct FRBFEntry {
	TArray<float> Values; // 0x0
};

struct FSupportedSubTrackInfo {
	UInterpTrack* SupportedClass; // 0x0
	FString SubTrackName; // 0x8
	int32_t GroupIndex; // 0x18
};

struct FVoiceSettings {
	USceneComponent* ComponentToAttachTo; // 0x0
	USoundAttenuation* AttenuationSettings; // 0x8
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x10
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

struct FCharacterVoiceTableRow : FTableRowBase {
	int32_t PriorityOrder; // 0x8
	ECharacterVoicePriorityType PriorityType; // 0xc
	TSoftObjectPtr<UAkAudioEvent> AudioEvent; // 0x10
	TSoftObjectPtr<UAkAudioEvent> TeamAudioEvent; // 0x38
	ECharacterVoiceRPCType RPCType; // 0x60
	float IntervalTime; // 0x64
	int32_t Repeat; // 0x68
	float CoolTime; // 0x6c
};

struct FInterpCurveLinearColor {
	TArray<FInterpCurvePointLinearColor> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FDataInfo {
	FDediDataGameInfo CurrentGameInfo; // 0x0
	TMap<FString, FDediDataCharacterInfo> CurrentCharacterInfos; // 0x88
	TMap<FString, FDediDataPlayerInfo> CurrentPlayerInfos; // 0xd8
	TMap<int32_t, FDediDataItemSpawnInfo> ItemSpawnInfos; // 0x128
	TMap<FString, FGamePlayerInfo> GamePlayerInfo; // 0x178
	TArray<FGamePlayerMatchingRPInfo> GamePlayerMatchingRPInfos; // 0x1c8
	TArray<FDataEventBlueZone> BlueZoneEvents; // 0x1d8
	TArray<FDataEventRedZone> RedZoneEvents; // 0x1e8
	TArray<FDataEventTransport> TransportEvents; // 0x1f8
	TArray<FDataEventSupply> SupplyEvents; // 0x208
	TArray<FAbnormalDamageData> AbnormalDamageEvents; // 0x218
};

struct FAkMidiNoteOnOff : FAkMidiEventBase {
	char Note; // 0x2
	char Velocity; // 0x3
};

struct FPatchId {
	int32_t ID; // 0x0
};

struct FC2G_PartyClientStatus {
	FString Type; // 0x0
	FC2G_PartyClientStatus_Data Data; // 0x10
};

struct FMK3DTargetData {
	FString TargetNetGUID; // 0x0
	FString TargetId; // 0x10
	FString TargetName; // 0x20
};

struct FAnalysisClientGameStartData {
	FString matching_start_time; // 0x0
	FString game_start_time; // 0x10
};

struct FGainGold {
	int32_t farming_gold; // 0x0
	int32_t random_bonus_gold; // 0x4
	int32_t remain_coin_gold; // 0x8
};

struct FResponse_MoveItem_Rec {
	uint32_t item_mid; // 0x0
	FString item_name; // 0x8
	int32_t inven_old_item_slot; // 0x18
	int32_t inven_new_item_slot; // 0x1c
};

struct FBuffHandleArray : FFastArraySerializer {
	TArray<FBuffHandle> Items; // 0x108
};

struct FAnalysisClientOutGameMatchingSuccessData {
	FString game_server_id; // 0x0
	FString match_making_tag; // 0x10
	int32_t GameViewType; // 0x20
	int32_t BattleMode; // 0x24
	FString matching_start_time; // 0x28
	FString matching_success_time; // 0x38
};

struct FTransformConstraint {
	FConstraintDescription Operator; // 0x0
	FName SourceNode; // 0x10
	FName TargetNode; // 0x18
	float Weight; // 0x20
	bool bMaintainOffset; // 0x24
};

struct FAwsCredentialsInfo {
	FString AccessKeyId; // 0x0
	FString SecretKey; // 0x10
	FString SessionToken; // 0x20
	double ExpirationTime; // 0x30
	bool bTokenRequest; // 0x38
};

struct FVehicleSpawnDebugData {
	FVector SpawnedLoaction; // 0x0
	FString ParentVehicleActorName; // 0x10
};

struct FAnalysisClientGameIllegalVictimCharacterData {
	int32_t team_id; // 0x0
	int32_t team_cnt; // 0x4
	int32_t current_rank; // 0x8
	FString UserID; // 0x10
	FString NickName; // 0x20
	int32_t ClassIndex; // 0x30
	int32_t Level; // 0x34
	int32_t current_hp; // 0x38
	int32_t max_hp; // 0x3c
	int32_t loc_x; // 0x40
	int32_t loc_y; // 0x44
	int32_t loc_z; // 0x48
	int32_t isinbluezone; // 0x4c
	int32_t isinredzone; // 0x50
	FString damage_type; // 0x58
	int32_t current_max_hp; // 0x68
	FString hit_bone; // 0x70
	int32_t Damage; // 0x80
	TArray<int32_t> skill_perk_id; // 0x88
	TArray<int32_t> skill_perk_cooltime_id; // 0x98
	FAnalysisClientGameIllegalVictimWeaponData Weapon; // 0xa8
	FString equip_helmet; // 0xf0
	int32_t helmet_durability; // 0x100
	FString equip_armour; // 0x108
	int32_t armour_durability; // 0x118
	int32_t fire_type; // 0x11c
	int32_t zoom_type; // 0x120
};

struct FCheatParamCurrency {
	bool is_plus; // 0x0
	uint32_t Amount; // 0x4
};

struct FNamedEmitterMaterial {
	FName Name; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FBravoHotelWardrobeDataType {
	FName ItemRowName; // 0x0
	TSoftObjectPtr<UTexture2D> ItemIconTexture; // 0x8
	FText ItemName; // 0x30
	EWearableItemType WearableType; // 0x48
};

struct FColorInfo : FTableRowBase {
	FLinearColor ColorInfo; // 0x8
	FString Desc; // 0x18
};

struct FCachedAnimRelevancyData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FStringCurve : FIndexedCurve {
	FString DefaultValue; // 0x68
	TArray<FStringCurveKey> Keys; // 0x78
};

struct FAnimNode_MultiWayBlend : FAnimNode_Base {
	TArray<FPoseLink> Poses; // 0x10
	TArray<float> DesiredAlphas; // 0x20
	FInputScaleBias AlphaScaleBias; // 0x40
	bool bAdditiveNode; // 0x48
	bool bNormalizeAlpha; // 0x49
};

struct FCustomizableObjectProjectorParameterValue {
	FString ParameterName; // 0x0
	FCustomizableObjectProjector Value; // 0x10
	FString UID; // 0x48
	TArray<FCustomizableObjectProjector> RangeValues; // 0x58
};

struct FBranchingPointMarker {
	int32_t NotifyIndex; // 0x0
	float TriggerTime; // 0x4
	EAnimNotifyEventType NotifyEventType; // 0x8
};

struct FBravoHotelRenderSettings : FTableRowBase {
	FBravoHotelTemporalAASettings TAA; // 0x8
	FBravoHotelExposureSettings Exposure; // 0x18
};

struct FG2C_Game_View_Type {
	FString Type; // 0x0
	FG2C_Game_View_Type_Data Data; // 0x10
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

struct FAnimNode_Root : FAnimNode_Base {
	FPoseLink Result; // 0x10
	FName Name; // 0x20
	FName Group; // 0x28
};

struct FHapticFeedbackDetails_Curve {
	FRuntimeFloatCurve Frequency; // 0x0
	FRuntimeFloatCurve Amplitude; // 0x88
};

struct FChartAggregatorSettings {
	EChartAggregatorMode ChartAggregatorMode; // 0x0
	ESurfaceAreaScale SurfaceAreaScale; // 0x4
	int32_t OriginalTexCoordLevel; // 0x8
	FString OriginalTexCoordName; // 0x10
	char SeparateOverlappingCharts : 1; // 0x20
	FString OriginalChartProportionsChannel; // 0x28
	char LockUVRotation : 1; // 0x38
};

struct FGeneratedTexture {
	int32_t ID; // 0x0
	FString Name; // 0x8
	UTexture2D* Texture; // 0x18
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
	EMobileCSMQuality MobileCSMQuality; // 0x8
};

struct FAnalysisClientGameHitRateWeaponInfo {
	int32_t last_saved_time; // 0x0
	int32_t item_id; // 0x4
	FString item_name; // 0x8
	int32_t shot_count; // 0x18
	int32_t hitshot_count; // 0x1c
	int32_t headshot_count; // 0x20
	int32_t kill_count; // 0x24
	int32_t headshot_kill_count; // 0x28
};

struct FResponse_Equipitem {
	uint32_t C; // 0x0
	FString E; // 0x8
	FResponse_Equipitem_Rec D; // 0x18
};

struct FNavCollisionBox {
	FVector Offset; // 0x0
	FVector Extent; // 0xc
};

struct FDestructibleChunkParameters {
	bool bIsSupportChunk; // 0x0
	bool bDoNotFracture; // 0x1
	bool bDoNotDamage; // 0x2
	bool bDoNotCrumble; // 0x3
};

struct FZeroPoint {
	int32_t Distance; // 0x0
	float Angle; // 0x4
};

struct FG2C_PartyWhoEnterLobby {
	FString Type; // 0x0
	FG2C_PartyWhoEnterLobby_Data Data; // 0x10
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

struct FVehicleSpawnRate {
	FName VehicleKey; // 0x0
	float SpawnWeight; // 0x8
};

struct FG2C_Battle_Mode_Possible {
	FString Type; // 0x0
	FG2C_Battle_Mode_Possible_Data Data; // 0x10
};

struct FInstancedStaticMeshInstanceData {
	FMatrix Transform; // 0x0
};

struct FRecordedTransformTrack {
	TArray<FRecordedFrame> Records; // 0x0
};

struct FReplicatedStaticActorDestructionInfo {
	UObject* ObjClass; // 0x30
};

struct FVertexAttributesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FMeshElementAttributeList> PerimeterVertexAttributeLists; // 0x8
	TArray<FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole; // 0x18
};

struct FLowEntryRegexMatch {
	int32_t MatchNumber; // 0x0
	int32_t BeginIndex; // 0x4
	int32_t EndIndex; // 0x8
	FString Match; // 0x10
	TArray<FLowEntryRegexCaptureGroup> CaptureGroups; // 0x20
};

struct FMaterialTextureInfo {
	float SamplingScale; // 0x0
	int32_t UVChannelIndex; // 0x4
	FName TextureName; // 0x8
};

struct FSettingInfoList {
	TArray<FSettingInfoData> List; // 0x0
};

struct FOnlineSubsystemFriends {
	FString NickName; // 0x0
	FString PlayerAvatarIcon; // 0x10
	TArray<FOnlineSubsystemFriendInfo> Friends; // 0x20
};

struct FAnalysisADSAimPattern {
	TArray<FNormalizedScreenPoint> normalizedScreenPoints; // 0x0
};

struct FNiagaraEventGeneratorProperties {
	int32_t MaxEventsPerFrame; // 0x0
	FName ID; // 0x4
	FNiagaraDataSetCompiledData DataSetCompiledData; // 0x10
};

struct FAkChannelMask {
	int32_t ChannelMask; // 0x0
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

struct FRootMotionSourceStatus {
	char Flags; // 0x0
};

struct FRepDamageInfo {
	float EventTime; // 0x0
	int32_t DamageTypeID; // 0x4
	FName WeaponItemName; // 0x8
	uint16_t WeaponItemKey; // 0x10
	TArray<int32_t> HitPartsIndexes; // 0x18
	int32_t HitCount; // 0x28
	float DamageAmount; // 0x2c
	float AttackerDamageModify; // 0x30
	float DefenderDamageModify; // 0x34
	bool bAttacker; // 0x38
	bool bNoAttacker; // 0x39
	bool bKnockOut; // 0x3a
	TArray<FRepDamageBuffInfo> AttackerBuffs; // 0x40
	TArray<FRepDamageBuffInfo> DefenderBuffs; // 0x50
};

struct FInputAxisKeyMapping {
	FName AxisActionName; // 0x0
	FName AxisName; // 0x8
	float Scale; // 0x10
	FKey Key; // 0x18
};

struct FG2C_PartyWhoJoined {
	FString Type; // 0x0
	FPartyUser Data; // 0x10
};

struct FPSCPoolElem {
	UParticleSystemComponent* PSC; // 0x0
};

struct FMovieSceneMarginSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel TopCurve; // 0x48
	FMovieSceneFloatChannel LeftCurve; // 0xe8
	FMovieSceneFloatChannel RightCurve; // 0x188
	FMovieSceneFloatChannel BottomCurve; // 0x228
	EMovieSceneBlendType BlendType; // 0x2c8
};

struct FAnalysisDediRedZoneData {
	int32_t event_time; // 0x0
	int32_t phase_index; // 0x4
	int32_t redzone_time; // 0x8
	int32_t center_loc_x; // 0xc
	int32_t center_loc_y; // 0x10
	int32_t center_loc_z; // 0x14
	int32_t circle_radius; // 0x18
	int32_t boom_count; // 0x1c
	int32_t boom_per_interval; // 0x20
	int32_t indoor_cnt; // 0x24
	int32_t outdoor_cnt; // 0x28
	int32_t boom_damage; // 0x2c
};

struct FDatasmithCameraFilmbackSettingsTemplate {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
};

struct FPerkDeckSelectInfo {
	bool bSelectOpen; // 0x0
	int32_t SelectChangeCount; // 0x4
	TArray<FPerkDeckClassInfo> PerkDeckClassInfos; // 0x8
};

struct FSolverTrailingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FMovieSceneEventRepeaterTemplate : FMovieSceneEventTemplateBase {
	FMovieSceneEventPtrs EventToTrigger; // 0x38
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

struct FMovieSceneSectionEvalOptions {
	bool bCanEditCompletionMode; // 0x0
	EMovieSceneCompletionMode CompletionMode; // 0x1
};

struct FResponse_PlayerName_Rec {
	FString player_name; // 0x0
};

struct FKeyImageTable : FTableRowBase {
	FKey Key; // 0x8
	FName DisplayName; // 0x20
};

struct FGuardianTestResult {
	bool IsTriggering; // 0x0
	ETrackedDeviceType DeviceType; // 0x1
	float ClosestDistance; // 0x4
	FVector ClosestPoint; // 0x8
	FVector ClosestPointNormal; // 0x14
};

struct FAlphaBlend {
	UCurveFloat* CustomCurve; // 0x0
	float BlendTime; // 0x8
	EAlphaBlendOption BlendOption; // 0x24
};

struct FRigidBodyContactInfo {
	FVector ContactPosition; // 0x0
	FVector ContactNormal; // 0xc
	float ContactPenetration; // 0x18
	UPhysicalMaterial* PhysMaterial[0x2]; // 0x20
};

struct FAwsChallengeParameterResponse {
	FString ChallengeName; // 0x0
	TMap<FString, FString> ChallengeParameters; // 0x10
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

struct FAwsAuthRequest {
	AwsAuthFlowType AuthFlow; // 0x0
	TMap<FString, FString> AuthParameters; // 0x8
	FString ClientId; // 0x58
};

struct FBravoHotelPartyInvitation {
	FString FromUID; // 0x0
	FString FromName; // 0x10
	FString Ticket; // 0x20
};

struct FG2C_FriendList {
	FString Type; // 0x0
	FG2C_FriendList_Data Data; // 0x10
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

struct FAssetBundleEntry {
	FPrimaryAssetId BundleScope; // 0x0
	FName BundleName; // 0x10
	TArray<FSoftObjectPath> BundleAssets; // 0x18
};

struct FDebugSupplyBoxInfo {
	int32_t UserID; // 0x0
	FString UserName; // 0x8
	FString OverlapUserName; // 0x18
	FString OverlapHitActorName; // 0x28
	int32_t SpawnMode; // 0x38
	int32_t Phase; // 0x3c
	FVector CharacterPos; // 0x40
	FSpawnBaseInfo Rule; // 0x4c
	bool IsBuildingSpawn; // 0x70
	FString BuildigName; // 0x78
	FVector BuidingBoxPos; // 0x88
	FVector AfterBuidingBoxPos; // 0x94
	FVector SpawnedPos; // 0xa0
	FVector FindWeightMapPos; // 0xac
	bool UsingSimulationBox; // 0xb8
	FVector StartSimulationPos; // 0xbc
	FVector EndSimulationPos; // 0xc8
	bool RePosition; // 0xd4
	FVector RePositionSpawnedPos; // 0xd8
	int32_t ReFindCount; // 0xe4
	TArray<FString> ReFindReason; // 0xe8
	FString Msg; // 0xf8
};

struct FInAppPurchaseRestoreInfo2 {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FG2C_PartyClientStatus_Data {
	uint32_t C; // 0x0
	FString E; // 0x8
	FString uidStatus; // 0x18
	FString clientStatus; // 0x28
};

struct FActorSequenceObjectReferenceMap {
	TArray<FGuid> BindingIds; // 0x0
	TArray<FActorSequenceObjectReferences> References; // 0x10
};

struct FTypeface {
	TArray<FTypefaceEntry> Fonts; // 0x0
};

struct FRotator {
	float Pitch; // 0x0
	float Yaw; // 0x4
	float Roll; // 0x8
};

struct FPrefabVariantRule {
	FName Scope; // 0x0
	FString Rule; // 0x8
	EPrefabVariantRuleType RuleType; // 0x18
	bool bEnable; // 0x19
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

struct FDialogueWaveParameter {
	UDialogueWave* DialogueWave; // 0x0
	FDialogueContext Context; // 0x8
};

struct FCrossActorManager {
	AActor* Prototype; // 0x0
	AActor* SideActor; // 0x8
	int32_t SocketIndex; // 0x10
};

struct FFLobbyWeaponInfo {
	FVector Offset_88_37331A3846409E881668F6A04B15E628; // 0x0
	FString Name_87_3309C6CD461A986F32E7FEB4B060DC82; // 0x10
};

struct FGeomSelection {
	int32_t Type; // 0x0
	int32_t Index; // 0x4
	int32_t SelectionIndex; // 0x8
};

struct FMovieSceneEventSectionData : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FEventPayload> KeyValues; // 0x18
};

struct FToggleTrackKey {
	float Time; // 0x0
	ETrackToggleAction ToggleAction; // 0x4
};

struct FEquipmentInfo {
	char slot_num; // 0x0
	uint32_t table_index; // 0x4
	uint32_t Count; // 0x8
};

struct FAggregationPipelineSettings : FSimplygonPipelineSettings {
	FAggregationSettings AggregationSettings; // 0x8
	FVisibilitySettings VisibilitySettings; // 0x30
	FGeometryCullingSettings GeometryCullingSettings; // 0x78
	FVertexWeightSettings VertexWeightSettings; // 0xa8
	FMappingImageSettings MappingImageSettings; // 0xd0
	FGenerateLightmapTexCoordSettings GenerateLightmapTexCoordSettings; // 0x178
	TArray<USimplygonMaterialCaster*> MaterialPropertyCasters; // 0x1a0
};

struct FMovieSceneEventTriggerTemplate : FMovieSceneEventTemplateBase {
	TArray<FFrameNumber> EventTimes; // 0x38
	TArray<FMovieSceneEventPtrs> Events; // 0x48
};

struct FFloatInterval {
	float Min; // 0x0
	float MAX; // 0x4
};

struct FBlindCharacter {
	ABravoHotelCharacter* Character; // 0x0
	FVector ImpactNormal; // 0x8
};

struct FReplayReportVictimAndSuspectLogData {
	UBravoHotelDamageType* VictimDamageTypeClass; // 0x0
	FString VictimHitBone; // 0x8
	FString SuspectIpAddress; // 0x18
	FString SuspectMaxItemID; // 0x28
	int32_t SuspectDistance; // 0x38
	int32_t SuspectMaxDistance; // 0x3c
	int32_t SuspectDamageCount; // 0x40
	int32_t SuspectHeadShotDamageCount; // 0x44
};

struct FNiagaraVariableLayoutInfo {
	uint32_t FloatComponentStart; // 0x0
	uint32_t Int32ComponentStart; // 0x4
	FNiagaraTypeLayoutInfo LayoutInfo; // 0x8
};

struct FMaterialRemapIndex {
	uint32_t ImportVersionKey; // 0x0
	TArray<int32_t> MaterialRemap; // 0x8
};

struct FAnimPhysPlanarLimit {
	FBoneReference DrivingBone; // 0x0
	FTransform PlaneTransform; // 0x10
};

struct FG2C_PartySelectMap {
	FString Type; // 0x0
	FG2C_PartySelectMap_Data Data; // 0x10
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

struct FBravoHotelVisualRecoilInfo {
	FVector VisualShake; // 0x0
	float VisualShakeSpeed; // 0xc
	FRotator VisualRecoilAngle; // 0x10
	FVector VisualRecoil; // 0x1c
	float VisualRecoilSpeed; // 0x28
	float VisualRecoilRecoverySpeed; // 0x2c
	float BackAnimation; // 0x30
	float BackAnimationSpeed; // 0x34
	float BackAnimationRecoverySpeed; // 0x38
	float HorizonWeight; // 0x3c
	UCurveFloat* BackRecoilPositionCurve; // 0x40
	UCurveFloat* VerticalRecoilPositionCurve; // 0x48
	UCurveFloat* VerticalRecoilRotationCurve; // 0x50
	UCurveFloat* HorizonRecoilPositionCurve; // 0x58
	UCurveFloat* HorizonRecoilRotationCurve; // 0x60
};

struct FMK3DHighlightKillEvent {
	int32_t Time1; // 0x0
	FString KillerName; // 0x8
	float KillerAppearanceTime; // 0x18
	FString VictimName; // 0x20
};

struct FAnalysisClientGameNetwork {
	int32_t spectated; // 0x0
	int32_t avg_ping; // 0x4
	int32_t max_ping; // 0x8
	int32_t min_ping; // 0xc
	int32_t received_pkt_bytesec; // 0x10
	int32_t received_num_pkt; // 0x14
	int32_t received_loss_ratio; // 0x18
	int32_t sended_pkt_bytesec; // 0x1c
	int32_t sended_num_pkt; // 0x20
	int32_t sended_loss_ratio; // 0x24
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

struct FC2G_PartySelectMap_Data {
	FString Mode; // 0x0
	FString Map; // 0x10
	bool itself; // 0x20
	FString person; // 0x28
};

struct FPawnActionStack {
	UPawnAction* TopAction; // 0x0
};

struct FPrimaryAssetRulesCustomOverride {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FDirectoryPath FilterDirectory; // 0x8
	FString FilterString; // 0x18
	FPrimaryAssetRules Rules; // 0x28
};

struct FTimeStretchCurveMarker {
	float Time[0x3]; // 0x0
	float ALPHA; // 0xc
};

struct FRequest_CraftWeapon {
	int32_t crafting_id; // 0x0
	FRequest_CraftWeapon_BaseWeapon base_weapon; // 0x8
};

struct FItemStandardGroupInfo {
	FName RandomSpawnItemID; // 0x0
	int32_t MinCnt; // 0x8
	int32_t MaxCnt; // 0xc
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

struct FSessionServicePong {
	bool Authorized; // 0x0
	FString BuildDate; // 0x8
	FString DeviceName; // 0x18
	FGuid InstanceId; // 0x28
	FString InstanceName; // 0x38
	FString PlatformName; // 0x48
	FGuid SessionID; // 0x58
	FString SessionName; // 0x68
	FString SessionOwner; // 0x78
	bool Standalone; // 0x88
};

struct FAnalysisClientGameIllegalReportUserData {
	FAnalysisClientGameIllegalReportData report_info; // 0x0
	FAnalysisClientGameIllegalVictimCharacterData victim_info; // 0x38
	FAnalysisClientGameIllegalSuspectCharacterData suspect_info; // 0x160
};

struct FPlayZoneInfo {
	TSoftObjectPtr<UObject> PlayZoneImage; // 0x0
	FText PlayZoneTitle; // 0x28
	FText PlayZoneDesc; // 0x40
};

struct FMovieSceneObjectPathChannelKeyValue {
	TSoftObjectPtr<UObject> SoftPtr; // 0x0
	UObject* HardPtr; // 0x28
};

struct FBravoHotelTemporalAASettings {
	float IdleTemporalAA_Weight; // 0x0
	float MovingTemporalAA_Weight; // 0x4
	float ADSTemporalAA_Weight; // 0x8
	float BlendSpeed; // 0xc
};

struct FBravoHotelExposureSettings {
	bool bEnable; // 0x0
	float CustomDeltaHeight; // 0x4
	float MinHeight; // 0x8
	float MaxHeight; // 0xc
	float MinExposureCompensation; // 0x10
	float MaxExposureCompensation; // 0x14
};

struct FBasicParticleData {
	FVector Position; // 0x0
	float Size; // 0xc
	FVector Velocity; // 0x10
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

struct FSideActorManager {
	AActor* Prototype; // 0x0
	TArray<AActor*> SideActors; // 0x8
	int32_t SocketIndex; // 0x18
};

struct FMatchRateData : FTableRowBase {
	EMatchRateCaseType MatchRateCaseType; // 0x8
	float Min; // 0xc
	float MAX; // 0x10
	float PlusPoint; // 0x14
	float MultiplyPoint; // 0x18
};

struct FBravoHotelCheatTable : FTableRowBase {
	CheatMainType MainType; // 0x8
	TArray<FCheaCommandSubInfo> SubCommandList; // 0x10
};

struct FMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneGeometryCollectionSectionTemplateParameters Params; // 0x20
};

struct FSourceEffectWaveShaperSettings {
	float Amount; // 0x0
	float OutputGainDb; // 0x4
};

struct FAudioGeometryData : FAkGeometryData {
	TArray<FVector> WorldVertices; // 0x50
};

struct FBuildMatchEnd {
	bool WinMessage; // 0x0
	bool LooseMessage; // 0x1
	bool bIsSpectated; // 0x2
	bool WinningCam; // 0x3
};

struct FReplicationMoveParameter {
	float SignificanceTickInterval; // 0x0
	int32_t DynamicFrequency; // 0x4
};

struct FSoundClassAdjuster {
	USoundClass* SoundClassObject; // 0x0
	float VolumeAdjuster; // 0x8
	float PitchAdjuster; // 0xc
	float LowPassFilterFrequency; // 0x10
	char bApplyToChildren : 1; // 0x14
	float VoiceCenterChannelVolumeAdjuster; // 0x18
};

struct FAkGeometrySurfaceOverride {
	UAkAcousticTexture* AcousticTexture; // 0x0
	char bEnableOcclusionOverride : 1; // 0x8
	float OcclusionValue; // 0xc
};

struct FMaterialParameterInfo {
	FName Name; // 0x0
	EMaterialParameterAssociation Association; // 0x8
	int32_t Index; // 0xc
};

struct FRootMotionSource_ConstantForce : FRootMotionSource {
	FVector Force; // 0x98
	UCurveFloat* StrengthOverTime; // 0xa8
};

struct FLookInfo {
	int32_t hair; // 0x0
	int32_t hair_color; // 0x4
	int32_t face; // 0x8
	int32_t face_color; // 0xc
	int32_t gender; // 0x10
};

struct FAnimSyncMarker {
	FName MarkerName; // 0x0
	float Time; // 0x8
};

struct FItemGroupInfo {
	FDataTableRowHandle ItemRowHandle; // 0x0
	FName SkinID; // 0x10
	int32_t Count; // 0x18
	float Probability; // 0x1c
};

struct FG2C_Game_View_Type_Data {
	bool isGameViewTypeFPP; // 0x0
	bool isGameViewTypeTPP; // 0x1
};

struct FMovieSceneIntegerChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	int32_t DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x1c
	TArray<int32_t> Values; // 0x20
};

struct FAggregationSettings {
	char MergeGeometries : 1; // 0x0
	int32_t ProcessSelectionSetID; // 0x4
	FString ProcessSelectionSetName; // 0x8
	char KeepUnprocessedSceneMeshes : 1; // 0x18
	char EnableGeometryCulling : 1; // 0x18
	float GeometryCullingPrecision; // 0x1c
	char SubdivideGeometryBasedOnUVTiles : 1; // 0x20
	uint32_t SubdivisionTileSize; // 0x24
};

struct FCameraFilmbackSettings {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
	float SensorAspectRatio; // 0x8
};

struct FBeamTargetData {
	FName TargetName; // 0x0
	float TargetPercentage; // 0x8
};

struct FExpandableAreaStyle : FSlateWidgetStyle {
	FSlateBrush CollapsedImage; // 0x8
	FSlateBrush ExpandedImage; // 0x90
	float RolloutAnimationSeconds; // 0x118
};

struct FSeasonQuestBaseInfo {
	uint32_t quest_index; // 0x0
	uint32_t Count; // 0x4
};

struct FLiveLinkTransformBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkTransformStaticData StaticData; // 0x8
	FLiveLinkTransformFrameData FrameData; // 0x20
};

struct FChaosCollisionEventRequestSettings {
	int32_t MaxNumberResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
	float MaxDistance; // 0x10
	EChaosCollisionSortMethod SortMethod; // 0x14
};

struct FEdgeToCreate {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
	FMeshElementAttributeList EdgeAttributes; // 0x8
	FEdgeID OriginalEdgeID; // 0x18
};

struct FDamageEvent {
	UDamageType* DamageTypeClass; // 0x8
};

struct FBuildingData {
	FVector BuildingPosition; // 0x0
	UUserWidget* SlotWidget; // 0x10
	TArray<FItemDebugDetailInfo> SpawnInfos; // 0x18
	TArray<FItemDebugDetailInfo> DivisionInfos; // 0x28
	TArray<FItemDebugDetailInfo> RateAddInfos; // 0x38
	TArray<FItemDebugDetailInfo> RateRemoveInfos; // 0x48
	TMap<FString, FBuildingDebug> StandardGroupData; // 0x58
};

struct FAnalysisClientOutGameLoginForbidData {
	FString forbid_reason; // 0x0
	FOutGamePCData pc_data; // 0x10
};

struct FCoh_LocalizationTable {
	TArray<FCoh_LocalizationString> Tbl; // 0x0
};

struct FRootMotionSource_JumpForce : FRootMotionSource {
	FRotator Rotation; // 0x98
	float Distance; // 0xa4
	float Height; // 0xa8
	bool bDisableTimeout; // 0xac
	UCurveVector* PathOffsetCurve; // 0xb0
	UCurveFloat* TimeMappingCurve; // 0xb8
};

struct FLiveLinkCurveConversionSettings {
	TMap<FString, FSoftObjectPath> CurveConversionAssetMap; // 0x0
};

struct FBasePerkInfo {
	uint32_t Type; // 0x0
	uint32_t table_index; // 0x4
};

struct FBravoHotelRandomReward {
	float RandomGoldMinRate; // 0x0
	float RandomGoldMaxRate; // 0x4
	TMap<FString, int32_t> BaseRandomGold; // 0x8
	TMap<FString, int32_t> MaxRandomGold; // 0x58
};

struct FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; // 0x0
	char bExecuteWhenPaused : 1; // 0x0
	char bOverrideParentBinding : 1; // 0x0
};

struct FMKReplayTeamInfo {
	FString NickName; // 0x0
	FString DeckName; // 0x10
	FString WeaponName; // 0x20
	int32_t ClassLevel; // 0x30
};

struct FResponse_MatchResultDataListArray {
	uint32_t C; // 0x0
	FString E; // 0x8
};

struct FAnimNode_LinkedInputPose : FAnimNode_Base {
	FName Name; // 0x10
	FName Graph; // 0x18
	FPoseLink InputPose; // 0x20
};

struct FDelegateArray {
	TArray<FDelegate> Delegates; // 0x0
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

struct FNiagaraVariableAttributeBinding {
	FNiagaraVariable BoundVariable; // 0x0
	FNiagaraVariable DataSetVariable; // 0x28
	FNiagaraVariable DefaultValueIfNonExistent; // 0x50
};

struct FReplayReportInfo {
	FString reporter_nickname; // 0x0
	FString victim_nickname; // 0x10
	FString suspect_nickname; // 0x20
	int32_t report_type; // 0x30
	int32_t replay_time; // 0x34
};

struct FLiveLinkBaseFrameData {
	FLiveLinkWorldTime WorldTime; // 0x0
	FLiveLinkMetaData MetaData; // 0x10
	TArray<float> PropertyValues; // 0x70
};

struct FLevelStreamimgPriorityByZ {
	float DistanceZ; // 0x0
	int32_t MinPriority; // 0x4
};

struct FAdaptorPolygon2Group {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
};

struct FTireConfigMaterialFriction {
	UPhysicalMaterial* PhysicalMaterial; // 0x0
	float FrictionScale; // 0x8
};

struct FEmitterDynamicParameter {
	FName ParamName; // 0x0
	char bUseEmitterTime : 1; // 0x8
	char bSpawnTimeOnly : 1; // 0x8
	EEmitterDynamicParameterValue ValueMethod; // 0xc
	char bScaleVelocityByParamValue : 1; // 0x10
	FRawDistributionFloat ParamValue; // 0x18
};

struct FPingNeedAnimationInfo {
	bool WorldMap; // 0x0
	bool MiniMap; // 0x1
	bool PlayerInfo; // 0x2
	bool Compass; // 0x3
};

struct FGamePlayerInfo {
	FGamePlayRecord GamePlayerInfo; // 0x0
	TMap<int32_t, FDamageInfoByWeaponInfo> TempWeapon; // 0x280
	TMap<int32_t, FDamageInfoByDamageTypeInfo> TempDamageType; // 0x2d0
	TMap<FString, FDataEventDamageStack> DamageEvents; // 0x320
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

struct FTimeStretchCurve {
	float SamplingRate; // 0x0
	float CurveValueMinPrecision; // 0x4
	TArray<FTimeStretchCurveMarker> Markers; // 0x8
	float Sum_dT_i_by_C_i[0x3]; // 0x18
};

struct FAkPluginInfo {
	FString Name; // 0x0
	uint32_t PluginID; // 0x10
	FString dll; // 0x18
};

struct FG2C_TrainingModeOff {
	FString Type; // 0x0
};

struct FPolygonGroupForPolygon {
	FPolygonID PolygonID; // 0x0
	FPolygonGroupID PolygonGroupID; // 0x4
};

struct FShotInfo {
	int32_t headshot_count; // 0x0
	int32_t headshot_kill_count; // 0x4
	int32_t hitshot_count; // 0x8
	int32_t all_shot_count; // 0xc
};

struct FNamedFloat {
	float Value; // 0x0
	FName Name; // 0x4
};

struct FBravoHotelDefaultItemSetting {
	bool bIsUsingIncludeMapList; // 0x0
	TArray<FString> IncludeMapList; // 0x8
	TArray<FString> ExcludeMapList; // 0x18
	TArray<FString> DefaultItemList; // 0x28
};

struct FSpawnItemInfo {
	EItemType ItemType; // 0x0
	float ItemProbability; // 0x4
};

struct FResponse_FriendList {
	uint32_t C; // 0x0
	FString E; // 0x8
	FResponse_FriendListArray D; // 0x18
};

struct FStandardGroupKeyCountInfo {
	TMap<FName, int32_t> StandardGroupKeyCountList; // 0x0
	int32_t TotalBoxCount; // 0x50
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

struct FG2C_PartyWhoMatchMakingTag_Data {
	FString UID; // 0x0
	FString match_making_tag; // 0x10
};

struct FNameCurveKey {
	float Time; // 0x0
	FName Value; // 0x4
};

struct FXRDeviceId {
	FName SystemName; // 0x0
	int32_t DeviceID; // 0x8
};

struct FAnalysisClientOutGameFirstClientRunData {
	FString progress_name; // 0x0
	int32_t tutorial_progress; // 0x10
	int32_t tutorial_movie_skiptime; // 0x14
	FOutGamePCData pc_data; // 0x18
};

struct FMaterialAttributesInput : FExpressionInput {
	int32_t PropertyConnectedBitmask; // 0xc
};

struct FAnalysisDediVehicleData {
	FString spawner_name; // 0x0
	int32_t spawner_pos_x; // 0x10
	int32_t spawner_pos_y; // 0x14
	int32_t spawner_pos_z; // 0x18
	FString vehicle_name; // 0x20
	int32_t board; // 0x30
	int32_t destroy; // 0x34
};

struct FResponse_LoginName_Rec {
	bool created; // 0x0
	FString SessionID; // 0x8
	FString session_id; // 0x18
	FString UID; // 0x28
	bool is_go_create_pc; // 0x38
	FString auth_token; // 0x40
	FString match_making_tag; // 0x50
};

struct FAnalysisClientOutGameTutorialPlayExitData {
	int32_t play_time; // 0x0
	int32_t progress; // 0x4
};

struct FPreLoadObjectsTable : FTableRowBase {
	FString Desc; // 0x8
	TSoftClassPtr<UObject> ClassPtr; // 0x18
};

struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneParticleChannel ParticleKeys; // 0x20
};

struct FSynth1PatchCable {
	float Depth; // 0x0
	ESynth1PatchDestination Destination; // 0x4
};

struct FDropBoxSlotInfo {
	UWidget* Widget_7_CFA307BA4384CD7656FFCF95024CC933; // 0x0
	FInventoryItemInfo Item_8_DD7FCAD24B54FACAF90196913C8D9039; // 0x8
};

struct FItemCountInfo {
	int32_t Division; // 0x0
	int32_t RateDivision; // 0x4
	int32_t RateDelete; // 0x8
	int32_t Spawned; // 0xc
	int32_t Gained; // 0x10
	int32_t TrySpawnPickUpCount; // 0x14
	int32_t PickUpCount; // 0x18
};

struct FWeaponAttachmentUseInfoMap {
	TMap<EWeaponAttachmentItem, EWeaponAttachmentUseType> AttachmentUseInfo; // 0x0
};

struct FStandardGroupInfo_UI {
	FString StandardGroupName; // 0x0
	FString StandardGroupKey; // 0x10
};

struct FPackedRGBA16N {
	int32_t XY; // 0x0
	int32_t ZW; // 0x4
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

struct FMaterialUnit {
	int32_t ID; // 0x0
	int32_t Count; // 0x4
};

struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FTemplateSequenceSectionTemplate : FMovieSceneEvalTemplate {
	FFrameNumber SectionStartTime; // 0x20
	FGuid OuterBindingId; // 0x24
	FMovieSceneEvaluationOperand InnerOperand; // 0x34
};

struct FEngineServiceAuthDeny {
	FString UserName; // 0x0
	FString UserToDeny; // 0x10
};

struct FSubjectMetadata {
	TMap<FName, FString> StringMetadata; // 0x0
	FTimecode SceneTimecode; // 0x50
	FFrameRate SceneFramerate; // 0x64
};

struct FResponse_GetWaitingTicket {
	uint32_t C; // 0x0
	FString E; // 0x8
	FResponse_GetWaitingTicket_Rec D; // 0x18
};

struct FSourceEffectFoldbackDistortionSettings {
	float InputGainDb; // 0x0
	float ThresholdDb; // 0x4
	float OutputGainDb; // 0x8
};

struct FSubmixEffectFlexiverbSettings {
	float PreDelay; // 0x0
	float DecayTime; // 0x4
	float RoomDampening; // 0x8
	int32_t Complexity; // 0xc
};

struct FAwsAuthChallengeRequest {
	FString ClientId; // 0x0
	FString ChallengeName; // 0x10
	TMap<FString, FString> ChallengeResponses; // 0x20
};

struct FEquippedSlotInfo {
	uint32_t Key; // 0x0
	uint32_t table_index; // 0x4
};

struct FResponse_CheckPlayerName {
	uint32_t C; // 0x0
	FString E; // 0x8
	FResponse_CheckPlayerName_Rec D; // 0x18
};

struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base {
	int32_t FramesToCachePose; // 0x48
	EEvaluatorDataSource DataSource; // 0x50
	EEvaluatorMode EvaluatorMode; // 0x51
};

struct FDataEventAbnormalDamage : FDataEventBase {
	FString CaseString; // 0x58
	UBravoHotelDamageType* DamageTypeClass; // 0x68
	AActor* AttackerActor; // 0x70
	APlayerState* AttackerPlayerState; // 0x78
	AActor* VictimActor; // 0x80
	APlayerState* VictimPlayerState; // 0x88
};

struct FBravoHotelRankReward {
	int32_t TimeBase; // 0x0
	float GoldPerTime; // 0x4
	float ExpPerTime; // 0x8
	float Ratio; // 0xc
	float Percentage; // 0x10
	float ReduceCycle; // 0x14
	float ReducePercentage; // 0x18
};

struct FTTVectorTrack : FTTPropertyTrack {
	UCurveVector* CurveVector; // 0x20
};

struct FDetectBoxSpawnItemsInfo {
	EItemType ItemType; // 0x0
	float SpawnProbability; // 0x4
};

struct FDivisionItem {
	bool DivisionComplete; // 0x0
	TArray<FSpawnItemResult> Items; // 0x8
};

struct FPointWeightMap {
	TArray<float> Values; // 0x0
};

struct FRequest_WaitingTicket {
	FString geegee_id; // 0x0
	FString steam_id; // 0x10
};

struct FMovieSceneEventSectionTemplate : FMovieSceneEventTemplateBase {
	FMovieSceneEventSectionData eventData; // 0x38
};

struct FVehicleSpawnInfo {
	FName RandomVehicleKey; // 0x0
	int32_t SpawnCount; // 0x8
};

struct FCapsuleLimitData : FCollisionLimitDataBase {
	float Radius; // 0x50
	float Length; // 0x54
};

struct FLensSettings {
	FLensBloomSettings Bloom; // 0x0
	FLensImperfectionSettings Imperfections; // 0xb8
	float ChromaticAberration; // 0xd8
};

struct FCustomPrimitiveData {
	TArray<float> Data; // 0x0
};

struct FBlueprintCookedComponentInstancingData {
	TArray<FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; // 0x0
	bool bHasValidCookedData; // 0x21
};

struct FAkMidiProgramChange : FAkMidiEventBase {
	char ProgramNum; // 0x2
};

struct FDatasmithCameraLookatTrackingSettingsTemplate {
	char bEnableLookAtTracking : 1; // 0x0
	char bAllowRoll : 1; // 0x0
	TSoftObjectPtr<AActor> ActorToTrack; // 0x8
};

struct FAnimNode_TransitionResult : FAnimNode_Base {
	bool bCanEnterTransition; // 0x10
};

struct FCachedPoseIndices {
	TArray<int32_t> OrderedSavedPoseNodeIndices; // 0x0
};

struct FMovieSceneTimeTransform {
	float TimeScale; // 0x0
	FFrameTime Offset; // 0x4
};

struct FMagicLeapARPinState {
	float Confidence; // 0x0
	float ValidRadius; // 0x4
	float RotationError; // 0x8
	float TranslationError; // 0xc
};

struct FMovieScenePossessable {
	TArray<FName> Tags; // 0x0
	FGuid Guid; // 0x10
	FString Name; // 0x20
	UObject* PossessedObjectClass; // 0x30
	FGuid ParentGuid; // 0x38
};

struct FTransform {
	FQuat Rotation; // 0x0
	FVector Translation; // 0x10
	FVector Scale3D; // 0x20
};

struct FAnimTrack {
	TArray<FAnimSegment> AnimSegments; // 0x0
};

struct FMeshSectionInfoMap {
	TMap<uint32_t, FMeshSectionInfo> Map; // 0x0
};

struct FBravoHotelEquippedSlotInfo {
	int32_t Key; // 0x0
	int32_t table_index; // 0x4
};

struct FMovieSceneBoolChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	bool DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<bool> Values; // 0x20
};

struct FSettingValue {
	ESettingType SettingType; // 0x0
	CheatParamType Type; // 0x1
	TArray<FString> ValueList; // 0x8
};

struct FAnimNode_SaveCachedPose : FAnimNode_Base {
	FPoseLink pose; // 0x10
	FName CachePoseName; // 0x20
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

struct FMovieSceneTimeWarping {
	FFrameNumber Start; // 0x0
	FFrameNumber End; // 0x4
};

struct FActiveForceFeedbackEffect {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x0
};

struct FPackedRGB10A2N {
	int32_t Packed; // 0x0
};

struct FReplayReportSuspectInfo {
	FString SuspectNickName; // 0x0
	FString SuspectIpAddress; // 0x10
	FString MaxItemID; // 0x20
	int32_t Distance; // 0x30
	int32_t MaxDistance; // 0x34
	int32_t DamageCount; // 0x38
	int32_t HeadShotDamageCount; // 0x3c
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

struct FRequest_DS_CurrencyPay {
	FString user_id; // 0x0
	uint32_t currency_index; // 0x10
	uint32_t Amount; // 0x14
	uint32_t action_code; // 0x18
};

struct FNiagaraDataSetID {
	FName Name; // 0x0
	ENiagaraDataSetType Type; // 0x8
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

struct FNamedSlotBinding {
	FName Name; // 0x0
	UWidget* Content; // 0x8
};

struct FRepCameraInfo {
	float CameraDistanceDelta; // 0x0
	FVector_NetQuantize CameraLocation_Idle; // 0x4
	FVector_NetQuantize CameraLocation_ADS; // 0x10
	float CameraHeight_Stand; // 0x1c
	float CameraHeight_Crouch; // 0x20
	float CameraHeight_Prone; // 0x24
};

struct FBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputActionName; // 0x4
	EInputEvent InputKeyEvent; // 0xc
	FName FunctionNameToBind; // 0x10
};

struct FNiagaraTestStruct {
	FVector Vector1; // 0x0
	FVector Vector2; // 0xc
	FNiagaraTestStructInner InnerStruct1; // 0x18
	FNiagaraTestStructInner InnerStruct2; // 0x30
};

struct FWheelSetup {
	UVehicleWheel* WheelClass; // 0x0
	FName BoneName; // 0x8
	FVector AdditionalOffset; // 0x10
	bool bDisableSteering; // 0x1c
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

struct FVehicleBoxDetailInfo {
	UBravoHotelVehicleSpawnBoxComponent* Box; // 0x0
	int32_t Count; // 0x8
};

struct FSettingInfoData {
	FName TableKey; // 0x0
	FSettingInfo Data; // 0x8
};

struct FARSessionStatus {
	FString AdditionalInfo; // 0x0
	EARSessionStatus status; // 0x10
};

struct FPlatformRuntimeAudioCompressionOverrides {
	bool bOverrideCompressionTimes; // 0x0
	float DurationThreshold; // 0x4
	int32_t MaxNumRandomBranches; // 0x8
	int32_t SoundCueQualityIndex; // 0xc
};

struct FAICharacterSettingData : FTableRowBase {
	FString NickName; // 0x8
	FAICharacterAppearanceInfo AppearanceInfo; // 0x18
	TArray<FName> AddItems; // 0x30
	TArray<FName> Buffs; // 0x40
	FName ItemSettingType; // 0x50
};

struct FResponse_LoginName {
	uint32_t C; // 0x0
	FString E; // 0x8
	FResponse_LoginName_Rec D; // 0x18
};

struct FImportFactorySettingValues {
	FString SettingName; // 0x0
	FString Value; // 0x10
};

struct FBroadphaseSettings {
	bool bUseMBPOnClient; // 0x0
	bool bUseMBPOnServer; // 0x1
	bool bUseMBPOuterBounds; // 0x2
	FBox MBPBounds; // 0x4
	FBox MBPOuterBounds; // 0x20
	uint32_t MBPNumSubdivs; // 0x3c
};

struct FGeometryCollectionDebugDrawActorSelectedRigidBody {
	int32_t ID; // 0x0
	AChaosSolverActor* Solver; // 0x8
	AGeometryCollectionActor* GeometryCollection; // 0x10
};

struct FKillMessageInfo {
	int32_t Type; // 0x0
	int32_t KillerTierID; // 0x4
	FString Killer; // 0x8
	int32_t VictimTierID; // 0x18
	FString Victim; // 0x20
	FString Block1; // 0x30
	FString Block2; // 0x40
	FString Weapon; // 0x50
	FString AliveCount1; // 0x60
	FString AliveCount2; // 0x70
	int32_t FontColorIndex; // 0x80
};

struct FVectorCurve : FAnimCurveBase {
	FRichCurve FloatCurves[0x3]; // 0x18
};

struct FInputBlendPose {
	TArray<FBranchFilter> BranchFilters; // 0x0
};

struct FAnalysisClientActiveSkillData {
	TArray<int32_t> skill_perk_id; // 0x0
	int32_t perk_id; // 0x10
	FString perk_name; // 0x18
	int32_t start_loc_x; // 0x28
	int32_t start_loc_y; // 0x2c
	int32_t start_loc_z; // 0x30
	int32_t end_loc_x; // 0x34
	int32_t end_loc_y; // 0x38
	int32_t end_loc_z; // 0x3c
	int32_t apply_user_cnt; // 0x40
};

struct FSourceEffectSimpleDelaySettings {
	float SpeedOfSound; // 0x0
	float DelayAmount; // 0x4
	float DryAmount; // 0x8
	float WetAmount; // 0xc
	float Feedback; // 0x10
	char bDelayBasedOnDistance : 1; // 0x14
};

struct FVectorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x8
	FMovieSceneFloatChannel YCurve; // 0xa8
	FMovieSceneFloatChannel ZCurve; // 0x148
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

struct FHeightmapData {
	UTexture2D* Texture; // 0x0
};

struct FBravoHotelWeaponInfoADS : FTableRowBase {
	bool bEnableADS; // 0x8
	TMap<EWeaponAttachmentItem, FVector> WeaponLocationList; // 0x10
	TMap<EWeaponAttachmentItem, FRotator> WeaponRotationList; // 0x60
	TMap<EWeaponAttachmentItem, FVector> WeaponScaleList; // 0xb0
	TMap<EWeaponAttachmentItem, float> FieldOfViewList; // 0x100
	TMap<EWeaponAttachmentItem, FRotator> SightRotationList; // 0x150
	TMap<EWeaponAttachmentItem, FVector> SightScaleList; // 0x1a0
};

struct FPoseDriverTransform {
	FVector TargetTranslation; // 0x0
	FRotator TargetRotation; // 0xc
};

struct FPopupWidgetInfo {
	UUserWidget* Widget; // 0x0
	bool IsGmaeAndUIMode; // 0x8
	bool ShowMouseCursorCapture; // 0x9
	bool bOnlyRemoveByObject; // 0xa
};

struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : FAkAdvancedInitializationSettings {
	bool EnableMultiCoreRendering; // 0x34
};

struct FWeaponWidgetInfo {
	bool IsEquipped; // 0x0
	int32_t SlotIndex; // 0x4
	FText Name; // 0x8
	EItemRarity WeaponLevel; // 0x20
	TSoftObjectPtr<UPaperSprite> Texture; // 0x28
	FString AmmoName; // 0x50
	int32_t Damage; // 0x60
	int32_t AdditionalDamage; // 0x64
	int32_t BulletsPerShot; // 0x68
	EWeaponFireMode Mode; // 0x6c
	bool IsFireMode; // 0x6d
	FString CurrentAmmo; // 0x70
	FString CapacityAmmo; // 0x80
	FString TotalAmmo; // 0x90
	ELoadingType LoadingType; // 0xa0
};

struct FAnalysisDediPlayerRPInfoData {
	FString UserID; // 0x0
	FString NickName; // 0x10
	int32_t Rating; // 0x20
	FString Training; // 0x28
	FString TeamID; // 0x38
	int32_t team_rating; // 0x48
	FString PartyID; // 0x50
	int32_t party_rating; // 0x60
};

struct FG2C_MatchSuccess_Data {
	FString ds; // 0x0
	FString Token; // 0x10
	FString team_id; // 0x20
	FString Key; // 0x30
	int32_t how; // 0x40
	FString player_session_id; // 0x48
	FString game_server_id; // 0x58
	FString match_making_tag; // 0x68
};

struct FAchievementInfo {
	int32_t ID; // 0x0
	EAchievementState State; // 0x4
	int32_t CurrentValue; // 0x8
	int32_t GoalValue; // 0xc
};

struct FAkCommunicationSettings {
	uint32_t PoolSize; // 0x0
	uint16_t DiscoveryBroadcastPort; // 0x4
	uint16_t CommandPort; // 0x6
	uint16_t NotificationPort; // 0x8
	FString NetworkName; // 0x10
};

struct FExplosionInfo {
	bool bActive; // 0x0
	float Damage; // 0x4
	float EffectRange; // 0x8
	float DamageFalloff; // 0xc
};

struct FLogEquippedWeaponInfo {
	int32_t weapon_index; // 0x0
	int32_t Level; // 0x4
};

struct FPurchaseItemDetails {
	FString Price; // 0x10
	FString Name; // 0x20
	PurchaseType Type; // 0x30
};

struct FMovieSceneWarpCounter {
	TArray<uint32_t> WarpCounts; // 0x0
};

struct FBuilderPoly {
	TArray<int32_t> VertexIndices; // 0x0
	int32_t Direction; // 0x10
	FName ItemName; // 0x14
	int32_t PolyFlags; // 0x1c
};

struct FMKReplayListItemInfo {
	FString Name; // 0x0
	FString FriendlyName; // 0x10
	FDateTime Timestamp; // 0x20
	int32_t SizeInBytes; // 0x28
	int32_t LengthInMS; // 0x2c
	int32_t NumViewers; // 0x30
	bool bIsLive; // 0x34
	int32_t ChangeList; // 0x38
	bool bSouldKeep; // 0x3c
	bool bIncomplete; // 0x3d
	bool bIsVersionCompatible; // 0x3e
	bool bIsCorrupted; // 0x3f
	FString GameVersion; // 0x40
	FString RecordUserId; // 0x50
	FString RecordUserNickName; // 0x60
	FString MapName; // 0x70
	int32_t BattleMode; // 0x80
	bool FPP; // 0x84
	int32_t TotalTeamCount; // 0x88
	int32_t FinalRank; // 0x8c
	int32_t Kill; // 0x90
	float LifeTime; // 0x94
	float TotalDamage; // 0x98
	FString BlueZoneTitle; // 0xa0
	int32_t BlueZoneMaxPlayerCount; // 0xb0
	TArray<FMKReplayTeamInfo> TeamInfos; // 0xb8
	float KillcamStartTime; // 0xc8
	float KillcamEndTime; // 0xcc
	bool bHaveCameraEvent; // 0xd0
	FString AdditionalInfo; // 0xd8
	int32_t MK3DReplayVersion; // 0xe8
	int32_t NetworkVersion; // 0xec
	TArray<FReplayKillEvent> KillEvent; // 0xf0
	FMKReplayReportInfo ReportInfo; // 0x100
};

struct FAbilitySlot {
	FString Icon; // 0x0
	FString Value; // 0x10
};

struct FVertexAttributesForPolygonHole {
	TArray<FMeshElementAttributeList> VertexAttributeList; // 0x0
};

struct FAnalysisClientGameEarlyTechReportData {
	FAnalysisClientGamePCData pc_data; // 0x0
	FAnalysisClientGameTrackFPSData fps_data; // 0x88
	FAnalysisClientGameLoadingData loading_data; // 0xd8
};

struct FDataEventClientGameWeapon : FDataEventBase {
	AActor* WeaponActor; // 0x60
};

struct FRandomPackage : FTableRowBase {
	int32_t ID; // 0x8
	FText DisplayName; // 0x10
	int32_t No; // 0x28
	int32_t TicketCount; // 0x2c
	TSoftObjectPtr<UObject> UMGIcon; // 0x30
	TSoftObjectPtr<UObject> CohIcon; // 0x58
	TArray<FRandomPackageProbability> Rewards; // 0x80
};

struct FLiveLinkAnimationFrameData : FLiveLinkBaseFrameData {
	TArray<FTransform> Transforms; // 0xa0
};

struct FBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding {
	EInputEvent InputKeyEvent; // 0x4
	FName FunctionNameToBind; // 0x8
};

struct FSolverBreakingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FGoogleClientConfigData {
	FString privatekey; // 0x0
	FString privateid; // 0x10
	FString iss; // 0x20
};

struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel Curves[0x4]; // 0x48
	EMovieSceneBlendType BlendType; // 0x2c8
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

struct FLocalizedAppName {
	FString LanguageCode; // 0x0
	FString AppName; // 0x10
};

struct FBravoHotelLobbyMapSetting {
	TArray<FString> IncludeMapList; // 0x0
};

struct FInterpEdSelKey {
	UInterpGroup* Group; // 0x0
	UInterpTrack* Track; // 0x8
	int32_t KeyIndex; // 0x10
	float UnsnappedPosition; // 0x14
};

struct FBlackboardKeySelector {
	TArray<UBlackboardKeyType*> AllowedTypes; // 0x0
	FName SelectedKeyName; // 0x10
	UBlackboardKeyType* SelectedKeyType; // 0x18
	char SelectedKeyID; // 0x20
	char bNoneIsAllowedValue : 1; // 0x24
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

struct FSkeletonToMeshLinkup {
	TArray<int32_t> SkeletonToMeshTable; // 0x0
	TArray<int32_t> MeshToSkeletonTable; // 0x18
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

struct FSubstanceConnection {
	FString OutputIdentifier; // 0x0
	FString InputImageIdentifier; // 0x10
};

struct FAnimNode_SingleNode : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
};

struct FSecuredVariablesCache {
	float LeanDegreeMax; // 0x0
};

struct FG2C_PartyWhoUpdateTierID_Data {
	TArray<FG2C_PartyWhoUpdateTierID_Array> party_who_update_tier_id; // 0x0
};

struct FAkGeometrySurfacePropertiesToMap {
	TSoftObjectPtr<UAkAcousticTexture> AcousticTexture; // 0x0
	float OcclusionValue; // 0x28
};

struct FAkPS4AdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t ACPBatchBufferSize; // 0x38
	bool UseHardwareCodecLowLatencyMode; // 0x3c
};

struct FAutomationExecutionEntry {
	FAutomationEvent Event; // 0x0
	FString Filename; // 0x38
	int32_t LineNumber; // 0x48
	FDateTime Timestamp; // 0x50
};

struct FAnalysisDSDisconnectData {
	FString Error; // 0x0
	FString reason; // 0x10
	int32_t connected_duration; // 0x20
	FString Version; // 0x28
};

struct FSubmixEffectDynamicProcessorFilterSettings {
	char bEnabled : 1; // 0x0
	float Cutoff; // 0x4
	float GainDb; // 0x8
};

struct FSM_BlendStateMachines : FAnimNode_Base {
	FPoseLink BasePose; // 0x10
	FPoseLink BlendPose; // 0x20
};

struct FReplayCastingEvent {
	FString NetGUID; // 0x0
	float Time; // 0x10
	int32_t ReplicateIndex; // 0x14
};

struct FAkPoly {
	UAkAcousticTexture* Texture; // 0x0
	float Occlusion; // 0x8
	bool EnableSurface; // 0xc
};

struct FSubstanceIntInputDesc : FSubstanceInputDesc {
	TArray<int32_t> Min; // 0x18
	TArray<int32_t> MAX; // 0x28
	TArray<int32_t> Default; // 0x38
};

struct FNiagaraCompileHash {
	TArray<char> DataHash; // 0x0
};

struct FWindowStyle : FSlateWidgetStyle {
	FButtonStyle MinimizeButtonStyle; // 0x8
	FButtonStyle MaximizeButtonStyle; // 0x280
	FButtonStyle RestoreButtonStyle; // 0x4f8
	FButtonStyle CloseButtonStyle; // 0x770
	FTextBlockStyle TitleTextStyle; // 0x9e8
	FSlateBrush ActiveTitleBrush; // 0xc50
	FSlateBrush InactiveTitleBrush; // 0xcd8
	FSlateBrush FlashTitleBrush; // 0xd60
	FSlateColor BackgroundColor; // 0xde8
	FSlateBrush OutlineBrush; // 0xe10
	FSlateColor OutlineColor; // 0xe98
	FSlateBrush BorderBrush; // 0xec0
	FSlateBrush BackgroundBrush; // 0xf48
	FSlateBrush ChildBackgroundBrush; // 0xfd0
};

struct FActorComponentInstanceData {
	UObject* SourceComponentTemplate; // 0x8
	EComponentCreationMethod SourceComponentCreationMethod; // 0x10
	int32_t SourceComponentTypeSerializedIndex; // 0x14
	TArray<char> SavedProperties; // 0x18
	TArray<FActorComponentDuplicatedObjectData> DuplicatedObjects; // 0x28
	TArray<UObject*> ReferencedObjects; // 0x38
	TArray<FName> ReferencedNames; // 0x48
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
	FRootMotionSourceStatus status; // 0x30
	FRootMotionSourceSettings Settings; // 0x31
	bool bInLocalSpace; // 0x32
	FRootMotionMovementParams RootMotionParams; // 0x40
	FRootMotionFinishVelocitySettings FinishVelocityParams; // 0x80
};

struct FDamageInstigatorInfo {
	ABravoHotelPlayerState* PlayerState; // 0x0
	FDamageEvent DamageEvent; // 0x8
	AActor* DamageCauser; // 0x18
	int32_t HitPointIdx; // 0x20
	float DamageAmount; // 0x24
	float Distance; // 0x28
	TArray<ABravoHotelPlayerState*> AssistPSArray; // 0x30
};

struct FC2G_PartyWhoVoiceChat_Data {
	bool is_voice_chat; // 0x0
};

struct FBoneDamageStruct : FTableRowBase {
	FName BoneName; // 0x8
	float DamageFactor; // 0x10
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

struct FImportanceTexture {
	FIntPoint Size; // 0x0
	int32_t NumMips; // 0x8
	TArray<float> MarginalCDF; // 0x10
	TArray<float> ConditionalCDF; // 0x20
	TArray<FColor> TextureData; // 0x30
	TWeakObjectPtr<UTexture2D> Texture; // 0x40
	EImportanceWeight Weighting; // 0x48
};

struct FG2C_PartyAcceptFailed_Data {
	uint32_t C; // 0x0
	FString E; // 0x8
};

struct FCustomizableObjectIntParameterValue {
	FString ParameterName; // 0x0
	FString ParameterValueName; // 0x10
	FString UID; // 0x20
	TArray<FString> ParameterRangeValueNames; // 0x30
};

struct FConditionGroup {
	EConditionType Type; // 0x0
	FString Name; // 0x8
};

struct FFloatDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FRequest_DS_MatchRewardList {
	FString map_name; // 0x0
	char game_mode; // 0x10
	char battle_mode; // 0x11
	TArray<FPlayerMatchReward> match_reward_list; // 0x18
};

struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings {
	char bOverrideDistanceSettings : 1; // 0x30
	char bOverrideInstanceCountSettings : 1; // 0x30
	char bOverrideTimeSinceRendererSettings : 1; // 0x30
};

struct FMovieSceneSpawnSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneBoolChannel Curve; // 0x20
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

struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToObserve; // 0xc8
	EBoneControlSpace DisplaySpace; // 0xd8
	bool bRelativeToRefPose; // 0xd9
	FVector Translation; // 0xdc
	FRotator Rotation; // 0xe8
	FVector Scale; // 0xf4
};

struct FAnalysisDediTransportData {
	int32_t event_time; // 0x0
	int32_t phase_index; // 0x4
	int32_t Turn; // 0x8
	int32_t loc_x; // 0xc
	int32_t loc_y; // 0x10
	int32_t loc_z; // 0x14
	TArray<int32_t> transportitem; // 0x18
};

struct FNiagaraParameterDataSetBindingCollection {
	TArray<FNiagaraParameterDataSetBinding> FloatOffsets; // 0x0
	TArray<FNiagaraParameterDataSetBinding> Int32Offsets; // 0x10
};

struct FAnalysisDediBlueZoneData {
	int32_t event_time; // 0x0
	int32_t phase_index; // 0x4
	int32_t center_loc_x; // 0x8
	int32_t center_loc_y; // 0xc
	int32_t center_loc_z; // 0x10
	int32_t circle_radius; // 0x14
	int32_t incircle_player; // 0x18
	int32_t outcircle_player; // 0x1c
	int32_t death_player_cnt; // 0x20
};

struct FItemEffectData : FTableRowBase {
	UParticleSystem* RootParticle; // 0x8
	FVector RootParticleScale; // 0x10
	FItemEffectInfo OriginEffectInfo; // 0x20
	FItemEffectInfo WeakEffectInfo; // 0xc0
	UParticleSystem* ActivateParticle; // 0x160
	UParticleSystem* DeactivateParticle; // 0x168
	TSoftObjectPtr<UParticleSystem> MeshParticle; // 0x170
	FVector MeshParticleScale; // 0x198
	FTransform MeshParticleTransform; // 0x1b0
	FName MeshParticleAttachSocketName; // 0x1e0
	TArray<FItemEffectSubParticleInfo> SubParticles; // 0x1e8
};

struct FDialogueContextMapping {
	FDialogueContext Context; // 0x0
	USoundWave* SoundWave; // 0x18
	FString LocalizationKeyFormat; // 0x20
	UDialogueSoundWaveProxy* Proxy; // 0x30
};

struct FAudioEventAssetData {
	char bLoadAsync : 1; // 0x0
	char bPrepareAsset : 1; // 0x0
	char bCleanUpPreparedAsset : 1; // 0x0
	char bUnloadFromWwise : 1; // 0x0
};

struct FRBFTarget : FRBFEntry {
	float ScaleFactor; // 0x10
	bool bApplyCustomCurve; // 0x14
	FRichCurve CustomCurve; // 0x18
	ERBFDistanceMethod DistanceMethod; // 0x98
	ERBFFunctionType FunctionType; // 0x99
};

struct FAnalysisClientOutGameTutorialMovieSkipData {
	int32_t skip_time; // 0x0
};

struct FTurnInPlaceAnimInfo {
	UAnimSequence* DynamicMontageAnim; // 0x0
	UAnimSequence* RepeatMontageAnim; // 0x8
	float TurnTime; // 0x10
	float TurnAngle; // 0x14
	float TurnTriggerAngle; // 0x18
	float PlayRate; // 0x1c
};

struct FNiagaraSystemScalabilitySettings {
	FNiagaraPlatformSet Platforms; // 0x0
	char bCullByDistance : 1; // 0x20
	char bCullMaxInstanceCount : 1; // 0x20
	char bCullByMaxTimeWithoutRender : 1; // 0x20
	float MaxDistance; // 0x24
	float MaxInstances; // 0x28
	float MaxTimeWithoutRender; // 0x2c
};

struct FWorldSpawnItemStatisticInfo {
	int32_t SpawnBoxID; // 0x0
	FString SpawnItemName; // 0x8
	int32_t SpawnItemCount; // 0x18
};

struct FScalarParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	float ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FReplayReportUserDataInfo {
	FReplayReportVictimInfo VictimInfo; // 0x0
	FReplayReportSuspectInfo SuspectInfo; // 0x30
};

struct FNiagaraUserParameterBinding {
	FNiagaraVariable Parameter; // 0x0
};

struct FAIDamageEvent {
	float Amount; // 0x0
	FVector Location; // 0x4
	FVector HitLocation; // 0x10
	AActor* DamagedActor; // 0x20
	AActor* Instigator; // 0x28
};

struct FMeshProxySettings {
	int32_t ScreenSize; // 0x0
	float VoxelSize; // 0x4
	FMaterialProxySettings MaterialSettings; // 0x8
	float MergeDistance; // 0x94
	FColor UnresolvedGeometryColor; // 0x98
	float MaxRayCastDist; // 0x9c
	float HardAngleThreshold; // 0xa0
	int32_t LightMapResolution; // 0xa4
	EProxyNormalComputationMethod NormalCalculationMethod; // 0xa8
	ELandscapeCullingPrecision LandscapeCullingPrecision; // 0xa9
	char bCalculateCorrectLODModel : 1; // 0xaa
	char bOverrideVoxelSize : 1; // 0xaa
	char bOverrideTransferDistance : 1; // 0xaa
	char bUseHardAngleThreshold : 1; // 0xaa
	char bComputeLightMapResolution : 1; // 0xaa
	char bRecalculateNormals : 1; // 0xaa
	char bUseLandscapeCulling : 1; // 0xaa
	char bAllowAdjacency : 1; // 0xaa
	char bAllowDistanceField : 1; // 0xab
	char bReuseMeshLightmapUVs : 1; // 0xab
	char bCreateCollision : 1; // 0xab
	char bAllowVertexColors : 1; // 0xab
	char bGenerateLightmapUVs : 1; // 0xab
};

struct FNiagaraCollisionEventPayload {
	FVector CollisionPos; // 0x0
	FVector CollisionNormal; // 0xc
	FVector CollisionVelocity; // 0x18
	int32_t ParticleIndex; // 0x24
	int32_t PhysicalMaterialIndex; // 0x28
};

struct FAnalysisClientGameTrackFPSData {
	FString start_record_time; // 0x0
	FString stop_record_time; // 0x10
	float avg_fps; // 0x20
	float min_fps; // 0x24
	float max_fps; // 0x28
	float standard_deviation_fps; // 0x2c
	int32_t hitch_count; // 0x30
	float under50_fps_percent; // 0x34
	float inter50_60_fps_percent; // 0x38
	float inter60_70_fps_percent; // 0x3c
	float inter70_80_fps_percent; // 0x40
	float inter80_90_fps_percent; // 0x44
	float over90_fps_percent; // 0x48
};

struct FC2G_Login {
	FString Type; // 0x0
	FC2G_Login_Data Data; // 0x10
};

struct FMagicLeapSharedWorldLocalData {
	TArray<FMagicLeapSharedWorldPinData> LocalPins; // 0x0
};

struct FRuntimeFloatCurve {
	FRichCurve EditorCurveData; // 0x0
	UCurveFloat* ExternalCurve; // 0x80
};

struct FExcelProtection {
	bool IsLocked; // 0x0
	bool IsHidden; // 0x1
};

struct FPredictProjectilePathPointData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Time; // 0x18
};

struct FBoneMirrorExport {
	FName BoneName; // 0x0
	FName SourceBoneName; // 0x8
	EAxis BoneFlipAxis; // 0x10
};

struct FRepDestructComponentInfo {
	float Damage; // 0x0
	FVector_NetQuantizeNormal Direction; // 0x4
	FVector_NetQuantize Location; // 0x10
	AController* Instigator; // 0x20
	int16_t InstanceIndex; // 0x28
};

struct FSHAHashData {
	char Hash[0x14]; // 0x0
};

struct FIntMargin {
	int32_t Left; // 0x0
	int32_t Top; // 0x4
	int32_t Right; // 0x8
	int32_t Bottom; // 0xc
};

struct FPropertyPathSegment {
	FName Name; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* Struct; // 0x10
};

struct FLandscapeLayerStruct {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
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

struct FCustomMatchInfo {
	FBravoHotelPlayZoneData PlayZoneBaseData; // 0x0
};

struct FRequest_CheatCash {
	FString Command; // 0x0
	FCheatParamCurrency Parameter; // 0x10
};

struct FAkHololensAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x38
	bool GlobalFocus; // 0x3c
	bool UseHeadMountedDisplayAudioDevice; // 0x3d
};

struct FBP-CoherentSpriteStructure {
	TArray<UPaperSprite*> Res_5_7655B472457462A8D53C148A56E4FAB8; // 0x0
};

struct FLightmassLightSettings {
	float IndirectLightingSaturation; // 0x0
	float ShadowExponent; // 0x4
	bool bUseAreaShadowsForStationaryLight; // 0x8
};

struct FVehicleCrashDamage {
	FFloatRange VelocityRange; // 0x0
	float DamageToCharacter; // 0x10
	float DamageToRigidBody; // 0x14
	float DamageReductionToCharacter; // 0x18
	float DamageReductionToRigidBody; // 0x1c
};

struct FTimelineLinearColorTrack {
	UCurveLinearColor* LinearColorCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName LinearColorPropertyName; // 0x20
};

struct FOculusMR_PlaneMeshTriangle {
	FVector Vertex0; // 0x0
	FVector2D UV0; // 0xc
	FVector Vertex1; // 0x14
	FVector2D UV1; // 0x20
	FVector Vertex2; // 0x28
	FVector2D UV2; // 0x34
};

struct FWalkableSlopeOverride {
	EWalkableSlopeBehavior WalkableSlopeBehavior; // 0x0
	float WalkableSlopeAngle; // 0x4
};

struct FPoseLinkBase {
	int32_t LinkID; // 0x0
};

struct FMovieSceneObjectPathChannel : FMovieSceneChannel {
	UObject* PropertyClass; // 0x8
	TArray<FFrameNumber> Times; // 0x10
	TArray<FMovieSceneObjectPathChannelKeyValue> Values; // 0x20
	FMovieSceneObjectPathChannelKeyValue DefaultValue; // 0x30
};

struct FRepAttachment {
	AActor* AttachParent; // 0x0
	FVector_NetQuantize100 LocationOffset; // 0x8
	FVector_NetQuantize100 RelativeScale3D; // 0x14
	FRotator RotationOffset; // 0x20
	FName AttachSocket; // 0x2c
	USceneComponent* AttachComponent; // 0x38
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
};

struct FFunctionExpressionInput {
	UMaterialExpressionFunctionInput* ExpressionInput; // 0x0
	FGuid ExpressionInputId; // 0x8
	FExpressionInput Input; // 0x18
};

struct FIntLocation {
	int32_t loc_x; // 0x0
	int32_t loc_y; // 0x4
	int32_t loc_z; // 0x8
};

struct FSoundModulation {
	TArray<USoundModulationPluginSourceSettingsBase*> Settings; // 0x0
};

struct FSourceEffectRingModulationSettings {
	ERingModulatorTypeSourceEffect ModulatorType; // 0x0
	float Frequency; // 0x4
	float Depth; // 0x8
	float DryLevel; // 0xc
	float WetLevel; // 0x10
};

struct FAngularRangeLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
	FBoneReference Bone; // 0x18
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

struct FSphericalLimit : FCollisionLimitBase {
	float Radius; // 0x50
	ESphericalLimitType LimitType; // 0x54
};

struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase {
	bool bActiveValue; // 0x98
};

struct FPaperFlipbookKeyFrame {
	UPaperSprite* Sprite; // 0x0
	int32_t FrameRun; // 0x8
};

struct FDiedDamagePlayerInfo {
	int32_t WeaponLevel; // 0x0
	FDiedDamagePlayerInfo_Player DiedInfo; // 0x4
	FDiedDamagePlayerInfo_Player KillerInfo; // 0x30
};

struct FAnalysisClientGameLiveTimeData {
	int32_t live_time; // 0x0
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

struct FSynthSlateStyle : FSlateWidgetStyle {
	ESynthSlateSizeType SizeType; // 0x8
	ESynthSlateColorStyle ColorStyle; // 0x9
};

struct FNamedColor {
	FColor Value; // 0x0
	FName Name; // 0x4
};

struct FRedisPubSub_Header {
	FString Cmd; // 0x0
};

struct FPubSub_Attribute {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FBlueprintComponentDelegateBinding {
	FName ComponentPropertyName; // 0x0
	FName DelegatePropertyName; // 0x8
	FName FunctionNameToBind; // 0x10
};

struct FVertexPair {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
};

struct FDamageInfos {
	TArray<FDamageInfoByWeaponInfo> by_weapon; // 0x0
	TArray<FDamageInfoByDamageTypeInfo> by_damage_type; // 0x10
};

struct FAnalysisDSConnectSuccessData {
	FString URL; // 0x0
	EDSConnectionType Type; // 0x10
	int32_t retry; // 0x14
	int32_t connecting_success_time; // 0x18
	FString Version; // 0x20
};

struct FAddPerkInfo {
	float MinTime; // 0x0
	float MaxTime; // 0x4
	TArray<FPerkLevelUpWeight> LevelUpWeights; // 0x8
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

struct FAIStimulus {
	float Age; // 0x0
	float ExpirationAge; // 0x4
	float Strength; // 0x8
	FVector StimulusLocation; // 0xc
	FVector ReceiverLocation; // 0x18
	FName Tag; // 0x24
	char bSuccessfullySensed : 1; // 0x38
};

struct FScalarParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel ParameterCurve; // 0x8
};

struct FCustomMatchDSList {
	TArray<FCustomMatchDS> waiting_ds_info_list; // 0x0
};

struct FPartyPCInfo {
	FString pc_id; // 0x0
	uint32_t class_type_index; // 0x10
	uint32_t class_data_index; // 0x14
	FPCLooks looks; // 0x18
	TArray<FEquippedSlotInfo> wear_item; // 0x30
	TArray<FEquippedSlotInfo> Weapon; // 0x40
	TArray<FEquippedSlotInfo> perk; // 0x50
	uint32_t exp; // 0x60
};

struct FG2C_PartyWhoLeaved {
	FString Type; // 0x0
	FG2C_PartyWhoLeaved_Data Data; // 0x10
};

struct FPassiveSoundMixModifier {
	USoundMix* SoundMix; // 0x0
	float MinVolumeThreshold; // 0x8
	float MaxVolumeThreshold; // 0xc
};

struct FTTEventTrack : FTTTrackBase {
	FName FunctionName; // 0x18
	UCurveFloat* CurveKeys; // 0x20
};

struct FAreaSkillZoneInfo {
	float StartValue; // 0x0
	float TargetValue; // 0x4
	float OwnerTargetRatio; // 0x8
	float InTime; // 0xc
	float OutTime; // 0x10
	AActor* OwnerPawn; // 0x18
};

struct FLogItemInfoData {
	TMap<int32_t, FLogItemInfo> Items; // 0x0
};

struct FNiagaraScalabilityManager {
	UNiagaraEffectType* EffectType; // 0x0
	TArray<UNiagaraComponent*> ManagedComponents; // 0x8
};

struct FSeasonQuestElement {
	int32_t ID; // 0x0
	FText DisplayName; // 0x8
	FString QuestType; // 0x20
	int32_t TargetCount; // 0x30
	FString Value01; // 0x38
	FString Value02; // 0x48
	FString Value03; // 0x58
	FString Value04; // 0x68
	int32_t LevelUpRewardIndex; // 0x78
	FString ClearType; // 0x80
	FString RewardType; // 0x90
	int32_t RewardAmount; // 0xa0
};

struct FAkAudioEventTrackKey {
	float Time; // 0x0
	UAkAudioEvent* AkAudioEvent; // 0x8
	FString EventName; // 0x10
};

struct FCameraCutInfo {
	FVector Location; // 0x0
	float Timestamp; // 0xc
};

struct FTTTrackBase {
	FName TrackName; // 0x8
	bool bIsExternalCurve; // 0x10
};

struct FMagicLeapHeadTrackingState {
	EMagicLeapHeadTrackingMode Mode; // 0x0
	EMagicLeapHeadTrackingError Error; // 0x1
	float Confidence; // 0x4
};

struct FUpdateQuestData {
	FString PlayerUID; // 0x0
	int32_t QuestID; // 0x10
	int32_t AddValue; // 0x14
};

struct FSpawnItems_DEBUG {
	FString ActorName; // 0x0
	FString BPName; // 0x10
	int32_t GroupID; // 0x20
	TArray<FWorldSpawnItemStatisticInfo> ItemList; // 0x28
};

struct FMatchEndAnimation {
	bool bWin; // 0x0
	bool bSecondPlace; // 0x1
};

struct FMarkerInfo {
	bool PreVisibility; // 0x0
	bool Visibility; // 0x1
	FVector2D Pos; // 0x4
	FVector2D PrePos; // 0xc
	int32_t IconIdx; // 0x14
	UWidget* Widget; // 0x18
	ABravoHotelPlayerState* PlayerState; // 0x20
};

struct FMaterialProperties : FTableRowBase {
	float Toughness; // 0x8
};

struct FEventPayload {
	FName EventName; // 0x0
	FMovieSceneEventParameters Parameters; // 0x8
};

struct FSolverBreakingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FEnvQueryInstanceCache {
	UEnvQuery* Template; // 0x0
};

struct FMovieSceneEulerTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieScene3DTransformTemplateData TemplateData; // 0x48
};

struct FPlayMovieInfo {
	TArray<UAkAudioEvent*> SoundList; // 0x0
};

struct FSourceEffectPannerSettings {
	float Spread; // 0x0
	float Pan; // 0x4
};

struct FC2G_MatchRequest {
	FString Type; // 0x0
	FC2G_MatchRequest_Data Data; // 0x10
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

struct FPaintedVertex {
	FVector Position; // 0x0
	FColor Color; // 0xc
	FVector4 Normal; // 0x10
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

struct FSpawnActors_DEBUG {
	FString ActorName; // 0x0
	TArray<AActor*> ActorList; // 0x10
};

struct FKinesisConfigData {
	FString cognito_kinesis_region; // 0x0
	FString cognito_user_pool_id; // 0x10
	FString cognito_user_pool_client_id; // 0x20
	FString cognito_user_name; // 0x30
	FString cognito_user_password; // 0x40
	FString cognito_identity_pool_id; // 0x50
	FString kinesis_data_stream_name; // 0x60
	FString evidential_data_bucket; // 0x70
};

struct FVertexColorCasterSettings {
	FString MaterialChannel; // 0x0
	EOpacityChannelComponent OpacityChannelComponent; // 0x10
	EDitherType DitherType; // 0x14
	EFillMode FillMode; // 0x18
	FString OpacityChannel; // 0x20
	char UseMultisampling : 1; // 0x30
	int32_t OutputColorLevel; // 0x34
	EOutputImageFileFormat OutputImageFileFormat; // 0x38
	EOutputDDSCompressionType OutputDDSCompressionType; // 0x3c
	uint32_t Dilation; // 0x40
	FString OutputColorName; // 0x48
	EOutputPixelFormat OutputPixelFormat; // 0x58
	float ColorSpaceEdgeThreshold; // 0x5c
};

struct FDestructibleDebrisParameters {
	float DebrisLifetimeMin; // 0x0
	float DebrisLifetimeMax; // 0x4
	float DebrisMaxSeparationMin; // 0x8
	float DebrisMaxSeparationMax; // 0xc
	FBox ValidBounds; // 0x10
};

struct FTrackedCamera {
	int32_t Index; // 0x0
	FString Name; // 0x8
	float FieldOfView; // 0x18
	int32_t SizeX; // 0x1c
	int32_t SizeY; // 0x20
	ETrackedDeviceType AttachedTrackedDevice; // 0x24
	FRotator CalibratedRotation; // 0x28
	FVector CalibratedOffset; // 0x34
	FRotator UserRotation; // 0x40
	FVector UserOffset; // 0x4c
	FRotator RawRotation; // 0x58
	FVector RawOffset; // 0x64
};

struct FLevelViewportInfo {
	FVector CamPosition; // 0x0
	FRotator CamRotation; // 0xc
	float CamOrthoZoom; // 0x18
	bool CamUpdated; // 0x1c
};

struct FMovieSceneCameraCutSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneObjectBindingID CameraBindingID; // 0x20
	FTransform CutTransform; // 0x40
	bool bHasCutTransform; // 0x70
	bool bIsFinalSection; // 0x71
};

struct FNamedTransform {
	FTransform Value; // 0x0
	FName Name; // 0x30
};

struct FCurbsManager {
	AActor* Owner; // 0x0
	UStaticMesh* Prototype; // 0x8
	UStaticMesh* StartPrototype; // 0x10
	UStaticMesh* EndPrototype; // 0x18
	TArray<USplineMeshComponent*> CurbsComp; // 0x20
	USplineComponent* Spline; // 0x30
	int32_t SplineIndex; // 0x38
	int32_t SocketIndex; // 0x3c
	int32_t Segmentation; // 0x40
	int32_t StepGeneration; // 0x44
	FVector Offset; // 0x48
	FVector Scale; // 0x54
	bool CurbEnable; // 0x60
	bool StartEnable; // 0x61
	bool EndEnable; // 0x62
	FInterpCurveVector SplineInfo; // 0x68
	float StartRoll; // 0x80
	float EndRoll; // 0x84
};

struct FInAppPurchaseProductRequest2 {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FPaperTileMetadata {
	FName UserDataName; // 0x0
	FSpriteGeometryCollection CollisionData; // 0x8
	char TerrainMembership[0x4]; // 0x38
};

struct FTransportAircraftInfo {
	FVector Start; // 0x0
	TArray<float> DropDistances; // 0x10
	FVector StartBlueZone; // 0x20
	FVector SecondTarget; // 0x2c
	FVector End; // 0x38
	FName RandomItemKey; // 0x44
	FVector DropBoxCurrentPos; // 0x4c
	TArray<ABravoHotelDropBoxActor*> DropBoxes; // 0x58
	FVector EndBlueZone; // 0x68
	FVector Target; // 0x74
};

struct FMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneGeometryCacheSectionTemplateParameters Params; // 0x20
};

struct FMeshInstancingSettings {
	AActor* ActorClassToUse; // 0x0
	int32_t InstanceReplacementThreshold; // 0x8
	EMeshInstancingReplacementMethod MeshReplacementMethod; // 0xc
	bool bSkipMeshesWithVertexColors; // 0xd
	bool bUseHLODVolumes; // 0xe
	UInstancedStaticMeshComponent* ISMComponentToUse; // 0x10
};

struct FC2G_PartyKickSomeone {
	FString Type; // 0x0
	FC2G_PartyKickSomeone_Data Data; // 0x10
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

struct FMaterialEffectData : FTableRowBase {
	float ActiveTime; // 0x8
	float SleepTime; // 0xc
	TMap<EWearableItemType, FString> StartMutableDatas; // 0x10
	TMap<EWearableItemType, FString> ChangeMutableDatas; // 0x60
	float TargetChangeRate; // 0xb0
	UCameraPostProcessPreset* CameraPostProcessClase; // 0xb8
	TMap<FName, FLinearColor> ColorValues; // 0xc0
	TMap<FName, float> FloatValues; // 0x110
	TMap<FName, UCurveLinearColor*> ColorCurves; // 0x160
	TMap<FName, UCurveFloat*> FloatCurves; // 0x1b0
	FName BlendOutParameterName; // 0x200
	float BlendOutSpeed; // 0x208
};

struct FChaosPhysicsSettings {
	EChaosThreadingMode DefaultThreadingModel; // 0x0
	EChaosSolverTickMode DedicatedThreadTickMode; // 0x1
	EChaosBufferMode DedicatedThreadBufferMode; // 0x2
};

struct FNiagaraDetailsLevelScaleOverrides {
	float Low; // 0x0
	float Medium; // 0x4
	float High; // 0x8
	float Epic; // 0xc
	float Cine; // 0x10
};

struct FC2G_PartyInvite_Data {
	FString toUid; // 0x0
};

struct FNiagaraScriptExecutionPaddingInfo {
	uint16_t SrcOffset; // 0x0
	uint16_t DestOffset; // 0x2
	uint16_t SrcSize; // 0x4
	uint16_t DestSize; // 0x6
};

struct FBTCompositeChild {
	UBTCompositeNode* ChildComposite; // 0x0
	UBTTaskNode* ChildTask; // 0x8
	TArray<UBTDecorator*> Decorators; // 0x10
	TArray<FBTDecoratorLogic> DecoratorOps; // 0x20
};

struct FResponse_DelItem {
	uint32_t C; // 0x0
	FString E; // 0x8
	FResponse_DelItem_Rec D; // 0x18
};

struct FCoh_ResultInfo {
	int32_t TableIndex; // 0x0
	int32_t NewTableIndex; // 0x4
	FString Identified; // 0x8
	float fatigue; // 0x18
	int32_t beforeDurability; // 0x1c
	float beforeFatigue; // 0x20
	TArray<FCoh_Reward> Rewards; // 0x28
};

struct FRangedWeaponFireSound {
	UAkAudioEvent* SingleFireEvent; // 0x0
	UAkAudioEvent* LoopStartEvent; // 0x8
	UAkAudioEvent* LoopStopEvent; // 0x10
	UAkAudioEvent* WarmupStartEvent; // 0x18
};

struct FResponse_Language {
	uint32_t C; // 0x0
	FString E; // 0x8
};

struct FTapDelayInfo {
	ETapLineMode TapLineMode; // 0x0
	float DelayLength; // 0x4
	float Gain; // 0x8
	int32_t OutputChannel; // 0xc
	float PanInDegrees; // 0x10
	int32_t TapId; // 0x14
};

struct FBravoHotelRewardItem {
	int32_t table_index; // 0x0
	int32_t RandomPackageID; // 0x4
	int32_t Count; // 0x8
	int32_t SortType; // 0xc
	TArray<int32_t> ItemOptions; // 0x10
};

struct FAnalysisClientGameEscapeData {
	FString matching_success_time; // 0x0
	FString escape_time; // 0x10
	int32_t escape_state; // 0x20
	int32_t survive_state; // 0x24
	int32_t spectated; // 0x28
	int32_t spectator_time; // 0x2c
	int32_t reported; // 0x30
};

struct FFrameRate {
	int32_t Numerator; // 0x0
	int32_t Denominator; // 0x4
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

struct FAnimSlot {
	UAnimMontage* Anim1P; // 0x0
	UAnimMontage* Anim3P; // 0x8
};

struct FPrecomputedSkyLightInstanceData : FSceneComponentInstanceData {
	FGuid LightGuid; // 0xa8
	float AverageBrightness; // 0xb8
};

struct FPrimitiveComponentInstanceData : FSceneComponentInstanceData {
	FTransform ComponentTransform; // 0xb0
	int32_t VisibilityId; // 0xe0
	UPrimitiveComponent* LODParent; // 0xe8
};

struct FInventoryItemDetailInfo : FTableRowBase {
	int32_t ID; // 0x8
	EItemType ItemType; // 0xc
	char bIsEquippable : 1; // 0xd
	char bIsMultiSlotWearable : 1; // 0xd
	EWearableItemType WearableItemType; // 0xe
	TArray<EWearableItemType> AdditionalWearableSlot; // 0x10
	EConsumablesItemType ConsumablesItemType; // 0x20
	ESuperPeopleClass SuperPeopleClassType; // 0x21
	int32_t ParentItemID; // 0x24
	EItemLifeTimeType LifeTimeType; // 0x28
	int32_t LimitOfTime; // 0x2c
	int32_t LimitOfCount; // 0x30
	EGenderType GenderType; // 0x34
	float Weight; // 0x38
	EItemRarity Rarity; // 0x3c
	int32_t CompareRating; // 0x40
	FString ItemSubType; // 0x48
	EItemPingIconType ItemPingType; // 0x58
	char bIsBackpackPuttable : 1; // 0x59
	char bIsDroppable : 1; // 0x59
	char bIsDropToFloor : 1; // 0x59
	char bIsBindable : 1; // 0x59
	int32_t MaxStack; // 0x5c
	float PickupIntervalTime; // 0x60
	char CorpseDrop : 1; // 0x64
	FName LimitedCollectionType; // 0x68
	ERewardChangeType RewardType; // 0x70
	char bInStrongbox : 1; // 0x71
	int32_t RandomPackageID; // 0x74
	int32_t PickupOutlineStencilValue; // 0x78
	TArray<FName> TypeTags; // 0x80
	EDevelopmentStatus DevelopmentStatus; // 0x90
	FText DisplayName; // 0x98
	FText DisplayShortName; // 0xb0
	FText Description; // 0xc8
	TMap<FString, FText> DescriptionValues; // 0xe0
	FName ItemSortType; // 0x130
	int32_t SortOrder; // 0x138
	FText DisplayItemType; // 0x140
	FName TopRecipe; // 0x158
	TSoftObjectPtr<UPaperSprite> SlotIconTexture_PaperSprite; // 0x160
	TSoftObjectPtr<UPaperSprite> DragIconTexture_PaperSprite; // 0x188
	TSoftObjectPtr<UPaperSprite> EnableItemTexture_PaperSprite; // 0x1b0
	UPaperSprite* MaterialPingIcon; // 0x1d8
	bool IsBundleItem; // 0x1e0
	FName ItemEffectID; // 0x1e4
	bool bOverridePickupScale; // 0x1ec
	FVector OverlapBoxExtent; // 0x1f0
	float TraceSphereRadius; // 0x1fc
	FVector WorldStaticMeshLoc; // 0x200
	FRotator WorldStaticMeshRot; // 0x20c
	FVector WorldStaticMeshScale; // 0x218
	FVector WorldSkelMeshLoc; // 0x224
	FRotator WorldSkelMeshRot; // 0x230
	FVector WorldSkelMeshScale; // 0x23c
	char bUseStaticMesh : 1; // 0x248
	TSoftObjectPtr<UStaticMesh> WorldStaticMesh; // 0x250
	TSoftObjectPtr<USkeletalMesh> WorldSkeletalMesh; // 0x278
	float NetCullDistanceSquared; // 0x2a0
	float DrawDistance; // 0x2a4
	TSoftObjectPtr<UAkAudioEvent> AudioEvent; // 0x2a8
	TSoftClassPtr<UObject> EquippableItemClass; // 0x2d0
	FName MutableUniqueKey; // 0x2f8
	char bUseEquippedStaticMesh : 1; // 0x300
	TSoftObjectPtr<UStaticMesh> EquippedStaticMesh; // 0x308
	TSoftObjectPtr<USkeletalMesh> EquippedSkeletalMesh; // 0x330
	TArray<TSoftObjectPtr<UMaterialInterface>> OverrideMeshMaterials; // 0x358
	FName WeaponId; // 0x368
	EWeaponType WeaponType; // 0x370
	EThrowingWeaponType ThrowingWeaponType; // 0x371
	EWeaponAttachmentType WeaponAttachmentType; // 0x372
	EWeaponAttachmentItem WeaponAttachmentItem; // 0x373
	FBravoHotelAbilityModifier Ability; // 0x378
	FBravoHotelAttachmentInfo AttachmentInfo; // 0x420
	TArray<FName> EquipedBuffName; // 0x468
	TArray<FName> UsingBuffName; // 0x478
	bool bMovableDuringUse; // 0x488
	bool bIsImportant; // 0x489
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

struct FSkelMeshComponentLODInfo {
	TArray<bool> HiddenMaterials; // 0x0
};

struct FItemDivisionDebugList {
	TArray<FItemDivisionDebug> List; // 0x0
	TArray<FItemDivisionDebug> RateAddList; // 0x10
	TArray<FItemDivisionDebug> RateRemoveList; // 0x20
};

struct FBehaviorTreeTemplateInfo {
	UBehaviorTree* Asset; // 0x0
	UBTCompositeNode* Template; // 0x8
};

struct FAchievementData : FTableRowBase {
	int32_t ID; // 0x8
	EAchievementType Type; // 0xc
	TArray<int32_t> GoalValues; // 0x10
	TArray<int32_t> Steps; // 0x20
	int32_t Point; // 0x30
	FText Description; // 0x38
};

struct FBox2D {
	FVector2D Min; // 0x0
	FVector2D MAX; // 0x8
	char bIsValid; // 0x10
};

struct FDebugCameraControllerSettingsViewModeIndex {
	EViewModeIndex ViewModeIndex; // 0x8
};

struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
	FFrameNumber Time; // 0x14
};

struct FResponse_EquipList {
	uint32_t C; // 0x0
	FString E; // 0x8
	FResponse_EquipListArray D; // 0x18
};

struct FRawCurveTracks {
	TArray<FFloatCurve> FloatCurves; // 0x0
};

struct FRequest_AddItem {
	uint32_t item_mid; // 0x0
	FString item_name; // 0x8
	int32_t item_slot; // 0x18
};

struct FItemWorldSpawn : FTableRowBase {
	FText Desc; // 0x8
	int32_t MaxItemSpawnCnt; // 0x20
	TArray<FItemWorldSpawnInfo> ItemWorldSpawnInfos; // 0x28
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

struct FComponentSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
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

struct FAISightEvent {
	AActor* SeenActor; // 0x8
	AActor* Observer; // 0x10
};

struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase {
	FVector4 Vector; // 0x30
};

struct FKeepedItemInfo {
	FInventoryItemInfo MainItemInfo; // 0x0
	TArray<FInventoryItemInfo> AdditionalItemInfos; // 0x98
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

struct FKey {
	FName KeyName; // 0x0
};

struct FChaosBreakEvent {
	UPrimitiveComponent* Component; // 0x0
	FVector Location; // 0x8
	FVector Velocity; // 0x14
	FVector AngularVelocity; // 0x20
	float Mass; // 0x2c
};

struct FG2C_PartyWhoOnline_Data {
	FString UID; // 0x0
	bool is_online; // 0x10
};

struct FNiagaraModuleDependency {
	FName ID; // 0x0
	ENiagaraModuleDependencyType Type; // 0x8
	ENiagaraModuleDependencyScriptConstraint ScriptConstraint; // 0x9
	FText Description; // 0x10
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

struct FLinearDriveConstraint {
	FVector PositionTarget; // 0x0
	FVector VelocityTarget; // 0xc
	FConstraintDrive XDrive; // 0x18
	FConstraintDrive YDrive; // 0x28
	FConstraintDrive ZDrive; // 0x38
	char bEnablePositionDrive : 1; // 0x48
};

struct FAreaWidgetInfo {
	FVector ServerLocation; // 0x0
	float Radius; // 0xc
	AActor* TargetActor; // 0x10
	bool bIsAutoRemove; // 0x18
	float AutoRemoveTime; // 0x1c
	FMaterialItemPingInfo PingInfo; // 0x20
	FExpertWeaponPingInfo ExpertWeaponPingInfo; // 0x50
	UPaperSprite* Image; // 0x78
	int32_t LocalPingIndex; // 0x80
};

struct FSpecificClassBuff {
	ESuperPeopleClass SpecificClass; // 0x0
	TArray<int32_t> BuffNames; // 0x8
};

struct FVehicleSpawnBoxList {
	TArray<UBravoHotelVehicleSpawnBoxComponent*> List; // 0x0
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

struct FSpatialSenseInfo {
	float SearchRadius; // 0x0
	float ErrorDistRange; // 0x4
	float FoundRadius; // 0x8
	float Duration; // 0xc
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

struct FSimulationStageMetaData {
	FName IterationSource; // 0x0
	char bSpawnOnly : 1; // 0x8
	char bWritesParticles : 1; // 0x8
	TArray<FName> OutputDestinations; // 0x10
	int32_t MinStage; // 0x20
	int32_t MaxStage; // 0x24
};

struct FSimpleCurveKey {
	float Time; // 0x0
	float Value; // 0x4
};

struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct {
	FLinearColor Color; // 0x8
	FFrameNumber Time; // 0x18
};

struct FMaskOutTexture {
	int32_t SizeX; // 0x0
	int32_t SizeY; // 0x4
	TArray<uint32_t> Data; // 0x8
};

struct FGameplayTagRedirect {
	FName OldTagName; // 0x0
	FName NewTagName; // 0x8
};

struct FFractureEffect {
	UParticleSystem* ParticleSystem; // 0x0
	USoundBase* Sound; // 0x8
	EFractureSoundType SoundType; // 0x10
};

struct FAssetEditorOrbitCameraPosition {
	bool bIsSet; // 0x0
	FVector CamOrbitPoint; // 0x4
	FVector CamOrbitZoom; // 0x10
	FRotator CamOrbitRotation; // 0x1c
};

struct FAnalysisClientOutGameExitData {
	int32_t scene_type; // 0x0
};

struct FSubTrackGroup {
	FString GroupName; // 0x0
	TArray<int32_t> TrackIndices; // 0x10
	char bIsCollapsed : 1; // 0x20
	char bIsSelected : 1; // 0x20
};

struct FSubdividedQuad {
	FSubdividedQuadVertex QuadVertex0; // 0x0
	FSubdividedQuadVertex QuadVertex1; // 0x34
	FSubdividedQuadVertex QuadVertex2; // 0x68
	FSubdividedQuadVertex QuadVertex3; // 0x9c
};

struct FOrbitOptions {
	char bProcessDuringSpawn : 1; // 0x0
	char bProcessDuringUpdate : 1; // 0x0
	char bUseEmitterTime : 1; // 0x0
};

struct FItemPingIcon : FTableRowBase {
	EItemPingIconType ItemPingType; // 0x8
	UPaperSprite* Icon; // 0x10
};

struct FAnimNode_ApplyAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x10
	FPoseLink Additive; // 0x20
	float ALPHA; // 0x30
	FInputScaleBias AlphaScaleBias; // 0x34
	int32_t LODThreshold; // 0x3c
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x40
	FName AlphaCurveName; // 0x88
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x90
	EAnimAlphaInputType AlphaInputType; // 0xc4
	bool bAlphaBoolEnabled; // 0xc5
};

struct FExpertWeaponType {
	TArray<FExpertWeaponElement> WeaponList; // 0x0
};

struct FDisplayAbility {
	int32_t DisplayPower; // 0x0
	int32_t DisplaySpeed; // 0x4
	int32_t DisplayDefense; // 0x8
};

struct FMapCompBlueZoneInfo {
	bool IsBlueZone; // 0x0
	bool IsVisibleBlueZone; // 0x1
	FVector2D CurrentSurvivalCirclePos; // 0x4
	float CurrentSurvivalCircleRadius; // 0xc
	bool IsVisibleTargetCircle; // 0x10
	FVector2D TargetSurvivalCirclePos; // 0x14
	float TargetSurvivalCircleRadius; // 0x1c
	FVector2D OuterCirclePos; // 0x20
	float OuterCircleRadius; // 0x28
};

struct FTTPropertyTrack : FTTTrackBase {
	FName PropertyName; // 0x18
};

struct FAnalysisClientOutGameCommonErrorData {
	FString module_name; // 0x0
	int32_t error_code; // 0x10
	FString error_message; // 0x18
};

struct FChildActorAttachedActorInfo {
	TWeakObjectPtr<AActor> Actor; // 0x0
	FName SocketName; // 0x8
	FTransform RelativeTransform; // 0x10
};

struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase {
	TArray<int32_t> EnumToPoseIndex; // 0x98
	char ActiveEnumValue; // 0xa8
};

struct FPoseData {
	TArray<FTransform> LocalSpacePose; // 0x0
	TMap<int32_t, int32_t> TrackToBufferIndex; // 0x10
	TArray<float> CurveData; // 0x60
};

struct FCustomProfile {
	FName Name; // 0x0
	TArray<FResponseChannel> CustomResponses; // 0x8
};

struct FG2C_PartyInvited_From {
	FString Type; // 0x0
	FG2C_PartyInvited_From_Data Data; // 0x10
};

struct FBravoHotelRecoilInfo {
	float VertClampMin; // 0x0
	float VertClampMax; // 0x4
	float VertSpeed; // 0x8
	float VertRecoveryClamp; // 0xc
	float VertRecoveryModifier; // 0x10
	float HorSpeed; // 0x14
	float HorTendency; // 0x18
	float HorLeftMax; // 0x1c
	float HorRightMax; // 0x20
	float Speed; // 0x24
	float RecoverySpeed; // 0x28
	float PatternScale; // 0x2c
	UCurveFloat* BulletCountFallingCurve; // 0x30
	float CrouchModifier; // 0x38
	float ProneModifier; // 0x3c
	UCurveVector* HorizonControlRecoilCurve; // 0x40
	TMap<EWeaponAttachmentItem, FBravoHotelVisualRecoilInfo> OverrideVisualRecoil; // 0x48
	FBravoHotelVisualRecoilInfo VisualRecoil; // 0x98
	FBravoHotelFireCameraShakeInfo FireCameraShakeInfo; // 0x100
};

struct FTeamEndInfo {
	int32_t TeamUID; // 0x0
	int32_t LastKillerTeamUID; // 0x4
	int32_t Rank; // 0x8
	TArray<FCharacterDiedInfo> DiedInfos; // 0x10
};

struct FBravoHotelPartyMemberInfo : FBravoHotelFriendInfo {
	bool bIsReady; // 0x98
	bool bIsVoiceChat; // 0x99
	bool bIsLeader; // 0x9a
	FString clientStatus; // 0xa0
	int32_t SeasonTierID; // 0xb0
	FString AccessRegion; // 0xb8
	int32_t Ping; // 0xc8
	FString steamID; // 0xd0
};

struct FHardWareInfo {
	FString full_guid; // 0x0
	FString grid; // 0x10
	FString hardware_id; // 0x20
	FString software_id; // 0x30
	FString network_id; // 0x40
};

struct FMovieScene3DAttachSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneObjectBindingID AttachBindingID; // 0x20
	FName AttachSocketName; // 0x38
	FName AttachComponentName; // 0x40
	EAttachmentRule AttachmentLocationRule; // 0x48
	EAttachmentRule AttachmentRotationRule; // 0x49
	EAttachmentRule AttachmentScaleRule; // 0x4a
	EDetachmentRule DetachmentLocationRule; // 0x4b
	EDetachmentRule DetachmentRotationRule; // 0x4c
	EDetachmentRule DetachmentScaleRule; // 0x4d
};

struct FSplitterStyle : FSlateWidgetStyle {
	FSlateBrush HandleNormalBrush; // 0x8
	FSlateBrush HandleHighlightBrush; // 0x90
};

struct FProcMeshSection {
	TArray<FProcMeshVertex> ProcVertexBuffer; // 0x0
	TArray<uint32_t> ProcIndexBuffer; // 0x10
	FBox SectionLocalBox; // 0x20
	bool bEnableCollision; // 0x3c
	bool bSectionVisible; // 0x3d
};

struct FMeshElementAttributeList {
	TArray<FMeshElementAttributeData> Attributes; // 0x0
};

struct FVertexAndAttributes {
	FVertexInstanceID VertexInstanceID; // 0x0
	FVertexID VertexID; // 0x4
	FMeshElementAttributeList PolygonVertexAttributes; // 0x8
};

struct FNamedInterface {
	FName InterfaceName; // 0x0
	UObject* InterfaceObject; // 0x8
};

struct FConstraintDescriptor {
	EConstraintType Type; // 0x0
};

struct FRadialDamageParams {
	float BaseDamage; // 0x0
	float MinimumDamage; // 0x4
	float InnerRadius; // 0x8
	float OuterRadius; // 0xc
	float DamageFalloff; // 0x10
};

struct FParameterChannelNames {
	FText R; // 0x0
	FText G; // 0x18
	FText B; // 0x30
	FText A; // 0x48
};

struct FBravoHotelHUDMessageRow : FTableRowBase {
	EHUDMessageType MessageType; // 0x8
	FString Description; // 0x10
	FText Message; // 0x20
	int32_t Priority; // 0x38
	TSoftObjectPtr<UAkAudioEvent> Sound; // 0x40
};

struct FRequest_AskLoginAvailable {
	FString waiting_ticket; // 0x0
};

struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate {
	UMaterialParameterCollection* MPC; // 0x80
};

struct FReplayDiedPlayerInfo {
	FString UserName; // 0x0
	int32_t UniquePlayerId; // 0x10
};

struct FAdaptorPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FAdaptorTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FMemberReference {
	UObject* MemberParent; // 0x0
	FString MemberScope; // 0x8
	FName MemberName; // 0x18
	FGuid MemberGuid; // 0x20
	bool bSelfContext; // 0x30
	bool bWasDeprecated; // 0x31
};

struct FMuzzleEffect {
	UParticleSystem* MuzzleFlash_3P_SingleFire; // 0x0
	UParticleSystem* MuzzleSmoke_3P_SingleFire; // 0x8
	UParticleSystem* MuzzleFlash_3P_MultiFire; // 0x10
	UParticleSystem* MuzzleSmoke_3P_MultiFire; // 0x18
	UParticleSystem* MuzzleFlash_1P_SingleFire; // 0x20
	UParticleSystem* MuzzleSmoke_1P_SingleFire; // 0x28
	UParticleSystem* MuzzleFlash_1P_MultiFire; // 0x30
	UParticleSystem* MuzzleSmoke_1P_MultiFire; // 0x38
	UParticleSystem* MuzzleFlash_1P_HighMagnificationSight; // 0x40
	UParticleSystem* MuzzleSmoke_1P_HighMagnificationSight; // 0x48
};

struct FAssetBundleData {
	TArray<FAssetBundleEntry> Bundles; // 0x0
};

struct FSelectedMapInfo {
	FString Mode; // 0x0
	FString Map; // 0x10
	bool itself; // 0x20
	FString person; // 0x28
};

struct FSoundWaveSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
	float NormalizedMagnitude; // 0x8
};

struct FPredictProjectilePathResult {
	TArray<FPredictProjectilePathPointData> PathData; // 0x0
	FPredictProjectilePathPointData LastTraceDestination; // 0x10
	FHitResult HitResult; // 0x2c
};

struct FCoh_InviteUser {
	FString Name; // 0x0
	FString UID; // 0x10
};

struct FFunctionCaller {
	FName FunctionName; // 0x0
};

struct FDediDataCharacterInfo : FDediDataInfoBase {
	FDataKeyInfo KeyInfo; // 0x0
	int32_t ClassIndex; // 0x28
	int32_t CurrentWeaponID; // 0x2c
	int32_t FinalRank; // 0x30
	int32_t GainRP; // 0x34
	FCharacterBaseInfo TotalData; // 0x38
};

struct FCoherentUIGTLoadingScreenSettings {
	float MinimumLoadingScreenDisplayTime; // 0x0
	bool bAutoCompleteWhenLoadingCompletes; // 0x4
	bool bWaitForManualStop; // 0x5
	FString URL; // 0x8
};

struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base {
	FPoseLink LocalPose; // 0x10
};

struct FGenericStruct {
	int32_t Data; // 0x0
};

struct FCombineSourceItem {
	int32_t source_item_id; // 0x0
	int32_t source_item_count; // 0x4
	FString source_item_name; // 0x8
};

struct FCoherentSound {
	UAudioComponent* Component; // 0x0
	USoundWaveProcedural* Stream; // 0x8
};

struct FNiagaraDeviceProfileStateEntry {
	FName ProfileName; // 0x0
	uint32_t QualityLevelMask; // 0x8
	uint32_t SetQualityLevelMask; // 0xc
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

struct FAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase {
	float X; // 0x30
	float Y; // 0x34
	float Z; // 0x38
	float PlayRate; // 0x3c
	bool bLoop; // 0x40
	bool bResetPlayTimeWhenBlendSpaceChanges; // 0x41
	float StartPosition; // 0x44
	UBlendSpaceBase* BlendSpace; // 0x48
	UBlendSpaceBase* PreviousBlendSpace; // 0xd8
};

struct FResponse_ChangePName {
	uint32_t C; // 0x0
	FString E; // 0x8
	FResponse_PlayerName_Rec D; // 0x18
};

struct FComponentOverrideRecord {
	UObject* ComponentClass; // 0x0
	UActorComponent* ComponentTemplate; // 0x8
	FComponentKey ComponentKey; // 0x10
	FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x30
};

struct FSoundSubmixSendInfo {
	ESendLevelControlMethod SendLevelControlMethod; // 0x0
	USoundSubmixBase* SoundSubmix; // 0x8
	float SendLevel; // 0x10
	float MinSendLevel; // 0x14
	float MaxSendLevel; // 0x18
	float MinSendDistance; // 0x1c
	float MaxSendDistance; // 0x20
	FRuntimeFloatCurve CustomSendLevelCurve; // 0x28
};

struct FInstancedStaticMeshComponentInstanceData : FSceneComponentInstanceData {
	UStaticMesh* StaticMesh; // 0xa8
	FInstancedStaticMeshLightMapInstanceData CachedStaticLighting; // 0xb0
	TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0xf0
	TArray<float> PerInstanceSMCustomData; // 0x100
	int32_t InstancingRandomSeed; // 0x130
};

struct FScalarParameterAtlasInstanceData {
	bool bIsUsedAsAtlasPosition; // 0x0
	TSoftObjectPtr<UCurveLinearColor> Curve; // 0x8
	TSoftObjectPtr<UCurveLinearColorAtlas> Atlas; // 0x30
};

struct FBravoHotelUserInfo {
	FString UID; // 0x0
	FString Name; // 0x10
	FDateTime LoggedInTime; // 0x20
	FBravoHotelPartyPCInfo PCInfo; // 0x28
};

struct FWetFogZoneInfo {
	float VisibleDistance; // 0x0
	float VisibleDistanceOwner; // 0x4
	float AdditionalSeeThroughSmokeRatio; // 0x8
};

struct FSpawnPerkInfo : FSpawnBaseInfo {
	FSpawnPerkColorRate BookColorRate; // 0x24
	float MinTime; // 0x38
	float MaxTime; // 0x3c
	int32_t MinCount; // 0x40
	int32_t MaxCount; // 0x44
	EPerkSpawnType SpawnType; // 0x48
};

struct FBravoHotelTakeDamageInfo {
	char bHeadShot : 1; // 0x0
	float Damage; // 0x4
	UBravoHotelDamageType* DamageTypeClass; // 0x8
	FVector ImpactPoint; // 0x10
	FVector ImpactNormal; // 0x1c
	FVector ShotDirection; // 0x28
	TWeakObjectPtr<APawn> Instigator; // 0x34
	int16_t HitPointIdx; // 0x3c
	uint16_t WeaponId; // 0x3e
	uint16_t ProjectileId; // 0x40
};

struct FResponse_MaterialList_Data {
	int32_t table_index; // 0x0
	FString item_id; // 0x8
	int32_t stack_count; // 0x18
	FString created; // 0x20
};

struct FOnlineSubsystemFriendInfo {
	FString PlayerId; // 0x0
	FString NickName; // 0x10
	FString AvatarIcon; // 0x20
	bool IsOnline; // 0x30
	FString ServicePlatform; // 0x38
};

struct FAnimNotifyEventReference {
	UObject* NotifySource; // 0x8
};

struct FResponse_PlayerScore_Rec {
	char battle_mode; // 0x0
	double mu; // 0x8
	double sigma; // 0x10
	double Rating; // 0x18
	double win_rating; // 0x20
	double kill_rating; // 0x28
	uint32_t matches_played; // 0x30
	uint32_t top_10s; // 0x34
	uint32_t wins; // 0x38
	uint32_t tot_playtime; // 0x3c
	uint32_t survival_time; // 0x40
	uint32_t kill_oneself; // 0x44
	double tot_distance_travelled; // 0x48
	double distance_foot; // 0x50
	double distance_swimming; // 0x58
	double distance_vehicle; // 0x60
	double acquire_weapon; // 0x68
	double recover; // 0x70
	double boost; // 0x78
	uint32_t kills; // 0x80
	double kill_rate; // 0x88
	double damage_add; // 0x90
	uint32_t assists; // 0x98
	double longest_kill; // 0xa0
	uint32_t headshots; // 0xa8
	uint32_t game_max_kills; // 0xac
	uint32_t max_continuously_kills; // 0xb0
	uint32_t road_kills; // 0xb4
	uint32_t distory_vehicles; // 0xb8
	uint32_t faint; // 0xbc
	uint32_t team_kills; // 0xc0
};

struct FMovieSceneSequenceLoopCount {
	int32_t Value; // 0x0
};

struct FMovieSceneObjectBindingID {
	int32_t SequenceID; // 0x0
	EMovieSceneObjectBindingSpace Space; // 0x4
	FGuid Guid; // 0x8
};

struct FAnimNotifyEvent : FAnimLinkableElement {
	float DisplayTime; // 0x30
	float TriggerTimeOffset; // 0x34
	float EndTriggerTimeOffset; // 0x38
	float TriggerWeightThreshold; // 0x3c
	FName NotifyName; // 0x40
	UAnimNotify* notify; // 0x48
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

struct FPrimaryAssetRules {
	int32_t Priority; // 0x0
	int32_t ChunkId; // 0x4
	bool bApplyRecursively; // 0x8
	EPrimaryAssetCookRule CookRule; // 0x9
};

struct FKickedUserInfoMap {
	TMap<FString, FString> UserAndReason; // 0x0
};

struct FDebugRecordInfo {
	FItemDataInfo ItemData; // 0x0
	TMap<int32_t, FDebugSupplyBoxInfo> PersonalSupplyBoxDebugList; // 0xe8
	TMap<FName, FVehicleSpawnDebugDataList> VehicleDebugList; // 0x138
};

struct FRemeshingSettings {
	uint32_t OnScreenSize; // 0x0
	EHoleFilling HoleFilling; // 0x4
	ERemeshingMode RemeshingMode; // 0x8
	ESurfaceTransferMode SurfaceTransferMode; // 0xc
	float HardEdgeAngle; // 0x10
	char TransferNormals : 1; // 0x14
	char TransferColors : 1; // 0x14
	int32_t ProcessSelectionSetID; // 0x18
	FString ProcessSelectionSetName; // 0x20
	char KeepUnprocessedSceneMeshes : 1; // 0x30
};

struct FSourceEffectFilterSettings {
	ESourceEffectFilterCircuit FilterCircuit; // 0x0
	ESourceEffectFilterType FilterType; // 0x1
	float CutoffFrequency; // 0x4
	float FilterQ; // 0x8
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

struct FRadialDamageEvent : FDamageEvent {
	FRadialDamageParams Params; // 0x10
	FVector Origin; // 0x24
	TArray<FHitResult> ComponentHits; // 0x30
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

struct FAkMidiPitchBend : FAkMidiEventBase {
	char ValueLsb; // 0x2
	char ValueMsb; // 0x3
	int32_t FullValue; // 0x4
};

struct FMovieSceneSpawnable {
	FTransform SpawnTransform; // 0x0
	TArray<FName> Tags; // 0x30
	bool bContinuouslyRespawn; // 0x40
	FGuid Guid; // 0x44
	FString Name; // 0x58
	UObject* ObjectTemplate; // 0x68
	TArray<FGuid> ChildPossessables; // 0x70
	ESpawnOwnership Ownership; // 0x80
	FName LevelName; // 0x84
};

struct FDatasmithMeshSectionInfoTemplate {
	int32_t MaterialIndex; // 0x0
};

struct FNavGraphNode {
	UObject* Owner; // 0x0
};

struct FBravoHotelAbilityModifierArmor {
	float Durability; // 0x0
	float Armor; // 0x4
	TSet<FName> CoverBones; // 0x8
};

struct FC2G_PartyWhoVoiceChat {
	FString Type; // 0x0
	FC2G_PartyWhoVoiceChat_Data Data; // 0x10
};

struct FNormalizedScreenPoint {
	float X; // 0x0
	float Y; // 0x4
	FString time_UTC; // 0x8
	float time_world; // 0x18
};

struct FNiagaraVariableWithOffset : FNiagaraVariableBase {
	int32_t Offset; // 0x18
};

struct FLiveLinkTransformFrameData : FLiveLinkBaseFrameData {
	FTransform Transform; // 0xa0
};

struct FSourceEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FNiagaraGraphViewSettings {
	FVector2D Location; // 0x0
	float Zoom; // 0x8
	bool bIsValid; // 0xc
};

struct FParameterGroupData {
	FString GroupName; // 0x0
	int32_t GroupSortPriority; // 0x10
};

struct FDelegateRuntimeBinding {
	FString ObjectName; // 0x0
	FName PropertyName; // 0x10
	FName FunctionName; // 0x18
	FDynamicPropertyPath SourcePath; // 0x20
	EBindingKind Kind; // 0x48
};

struct FLiveLinkSubjectKey {
	FGuid Source; // 0x0
	FLiveLinkSubjectName SubjectName; // 0x10
};

struct FPlatformInterfaceDelegateResult {
	bool bSuccessful; // 0x0
	FPlatformInterfaceData Data; // 0x8
};

struct FCompositeSubFont : FCompositeFallbackFont {
	TArray<FInt32Range> CharacterRanges; // 0x18
	FString Cultures; // 0x28
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

struct FSolverTrailingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FTranslationTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FNiagaraDataSetProperties {
	FNiagaraDataSetID ID; // 0x0
	TArray<FNiagaraVariable> Variables; // 0x10
};

struct FRedZoneBombData {
	float WarningTime; // 0x0
	float MinRange; // 0x4
	float MaxRange; // 0x8
	float BombHeight; // 0xc
	float BombInterval; // 0x10
	int32_t BombCount; // 0x14
	float AircraftRandAngle; // 0x18
	float AircraftRandWide; // 0x1c
	int32_t AircraftLoopCount; // 0x20
	TArray<float> AircraftSpawnPlan; // 0x28
	int32_t MinBombPerInterval; // 0x38
	int32_t MaxBombPerInterval; // 0x3c
};

struct FMaterialItemList {
	TArray<ABravoHotelPickup*> MaterialItemList; // 0x0
};

struct FResponseChannel {
	FName Channel; // 0x0
	ECollisionResponse Response; // 0x8
};

struct FAmbientOcclusionCasterSettings {
	FString MaterialChannel; // 0x0
	EOpacityChannelComponent OpacityChannelComponent; // 0x10
	EDitherType DitherType; // 0x14
	EFillMode FillMode; // 0x18
	FString OpacityChannel; // 0x20
	char UseMultisampling : 1; // 0x30
	uint32_t RaysPerPixel; // 0x34
	EOutputImageFileFormat OutputImageFileFormat; // 0x38
	EOutputDDSCompressionType OutputDDSCompressionType; // 0x3c
	uint32_t Dilation; // 0x40
	float OcclusionFalloff; // 0x44
	EOutputPixelFormat OutputPixelFormat; // 0x48
	float OcclusionMultiplier; // 0x4c
	char UseSimpleOcclusionMode : 1; // 0x50
};

struct FMovieSceneFloatPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel FloatFunction; // 0x48
	EMovieSceneBlendType BlendType; // 0xe8
};

struct FFrameMetrics {
	float TotalElapsedTime; // 0x0
	float FrameDelta; // 0x4
	int32_t FrameNumber; // 0x8
	int32_t NumDroppedFrames; // 0xc
};

struct FMovieSceneNestedSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x0
	FMovieSceneTimeWarping Warping; // 0xc
};

struct FVirtualTextureSpacePoolConfig {
	int32_t MinTileSize; // 0x0
	int32_t MaxTileSize; // 0x4
	TArray<EPixelFormat> Formats; // 0x8
	int32_t SizeInMegabyte; // 0x18
	bool bAllowSizeScale; // 0x1c
};

struct FCanvasIcon {
	UTexture* Texture; // 0x0
	float U; // 0x8
	float V; // 0xc
	float UL; // 0x10
	float VL; // 0x14
};

struct FCollectionScalarParameter : FCollectionParameterBase {
	float DefaultValue; // 0x18
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

struct FLODSoloTrack {
	TArray<char> SoloEnableSetting; // 0x0
};

struct FPolygonGroupToCreate {
	FMeshElementAttributeList PolygonGroupAttributes; // 0x0
	FPolygonGroupID OriginalPolygonGroupID; // 0x10
};

struct FSimpleCurve : FRealCurve {
	ERichCurveInterpMode InterpMode; // 0x70
	TArray<FSimpleCurveKey> Keys; // 0x78
};

struct FGroupItemElement {
	int32_t ID; // 0x0
	int32_t MinCount; // 0x4
	int32_t MaxCount; // 0x8
};

struct FMovieSceneTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieScene3DTransformTemplateData TemplateData; // 0x48
};

struct FInterpGroupActorInfo {
	FName ObjectName; // 0x0
	TArray<AActor*> Actors; // 0x8
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

struct FIntVector {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Z; // 0x8
};

struct FOptionInfo {
	FString Type; // 0x0
	uint32_t table_index; // 0x10
};

struct FActorPerceptionBlueprintInfo {
	AActor* Target; // 0x0
	TArray<FAIStimulus> LastSensedStimuli; // 0x8
	char bIsHostile : 1; // 0x18
};

struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation {
	FFrameNumber SpawnSectionStartFrame; // 0x10
	FFrameNumber SpawnSectionEndFrame; // 0x14
	ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior; // 0x18
	ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior; // 0x1c
	ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior; // 0x20
	ENiagaraAgeUpdateMode AgeUpdateMode; // 0x24
};

struct FEngineServiceNotification {
	FString Text; // 0x0
	double TimeSeconds; // 0x10
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
	FMeshMergingSettings MergeSetting; // 0xb8
	float DesiredBoundRadius; // 0x15c
	float DesiredFillingPercentage; // 0x160
	int32_t MinNumberOfActorsToBuild; // 0x164
};

struct FSelectLoadingScreenData {
	ELoadingScreenType LoadingType; // 0x0
	UTexture2D* Image; // 0x8
	FText Title; // 0x10
	FText Desc; // 0x28
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

struct FCoh_Response_Weapon_List {
	TArray<FResponse_Weapon_List_Data> weapon_list; // 0x0
};

struct FCustomizableObjectTextureParameterValue {
	FString ParameterName; // 0x0
	uint64_t ParameterValue; // 0x10
	FString UID; // 0x18
};

struct FSkinWeightProfileInfo {
	FName Name; // 0x0
	FPerPlatformBool DefaultProfile; // 0x8
	FPerPlatformInt DefaultProfileFromLODIndex; // 0xc
};

struct FBravoHotelSmartPingIconAppearanceSettings {
	float Scale; // 0x0
	FVector2D Anchor; // 0x4
	FLinearColor Tint; // 0xc
};

struct FRequest_CheatGold {
	FString Command; // 0x0
	FCheatParamCurrency Parameter; // 0x10
};

struct FCoh_PrivateInfo {
	FString SessionID; // 0x0
	FString AuthToken; // 0x10
	FString ApiGameUrl; // 0x20
	FString CoherentUrl; // 0x30
	FString ApiPhase; // 0x40
	FString BannerVersion; // 0x50
};

struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
};

struct FSpriteDrawCallRecord {
	FVector Destination; // 0x0
	UTexture* BaseTexture; // 0x10
	FColor Color; // 0x48
};

struct FRawDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FNiagaraVariant {
	UObject* Object; // 0x0
	UNiagaraDataInterface* DataInterface; // 0x8
	TArray<char> Bytes; // 0x10
	ENiagaraVariantMode CurrentMode; // 0x20
};

struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate {
	UMovieSceneAudioSection* AudioSection; // 0x20
};

struct FDeckBlockElement {
	int32_t Index; // 0x0
	bool Value; // 0x4
};

struct FColorGradingSettings {
	FColorGradePerRangeSettings Global; // 0x0
	FColorGradePerRangeSettings Shadows; // 0x50
	FColorGradePerRangeSettings Midtones; // 0xa0
	FColorGradePerRangeSettings Highlights; // 0xf0
	float ShadowsMax; // 0x140
	float HighlightsMin; // 0x144
};

struct FMagicLeapIdentityAttribute {
	EMagicLeapIdentityKey Attribute; // 0x0
	FString Value; // 0x8
};

struct FCollectionVectorParameter : FCollectionParameterBase {
	FLinearColor DefaultValue; // 0x18
};

struct FRepRadialDamageInfo {
	float BaseDamage; // 0x0
	float MinDamage; // 0x4
	float DamageInnerRadius; // 0x8
	float DamageOuterRadius; // 0xc
	float DamageFalloff; // 0x10
	float ImpulsePower; // 0x14
	ERadialImpulseFalloff ImpulseFalloff; // 0x18
	UDamageType* DamageTypeClass; // 0x20
	FVector_NetQuantize Origin; // 0x28
	AActor* DamageCauser; // 0x38
	AController* Instigator; // 0x40
	TArray<FRepHitResultInfo> RepHitResults; // 0x48
	FDataEventDamageBuffInfo AttackerBuffInfo; // 0x58
};

struct FLocalPingMarkerInfo {
	FVector2D Pos; // 0x0
	FVector2D PrePos; // 0x8
	UWidget* Widget; // 0x10
	FBravoHotelLocalPingInfo PingInfo; // 0x18
};

struct FSeasonQuest : FTableRowBase {
	int32_t ID; // 0x8
	TArray<FSeasonQuestElement> Quests; // 0x10
};

struct FCustomMatchDS {
	FString address; // 0x0
	FString Token; // 0x10
	FString encryption_key; // 0x20
};

struct FCustomizedToolMenuSection {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FChaosDebugSubstepControl {
	bool bPause; // 0x0
	bool bSubstep; // 0x1
	bool bStep; // 0x2
};

struct FFilterOptionPerAxis {
	bool bX; // 0x0
	bool bY; // 0x1
	bool bZ; // 0x2
};

struct FSM_BeginEvent {
	char StateID; // 0x0
	char PreviousStateID; // 0x1
	FName PreviousStateName; // 0x4
};

struct FMaterialLayersFunctions {
	TArray<UMaterialFunctionInterface*> Layers; // 0x0
	TArray<UMaterialFunctionInterface*> Blends; // 0x10
	TArray<bool> LayerStates; // 0x20
	FString KeyString; // 0x30
};

struct FConstraintData {
	FConstraintDescriptor Constraint; // 0x0
	float Weight; // 0x10
	bool bMaintainOffset; // 0x14
	FTransform Offset; // 0x20
	FTransform CurrentTransform; // 0x50
};

struct FGeneratedMaterial {
	TArray<FGeneratedTexture> Textures; // 0x0
};

struct FExpertWeaponListData : FTableRowBase {
	TMap<EWeaponType, FExpertWeaponType> ExpertWeaponType; // 0x8
};

struct FC2G_Login_Data {
	FString SessionID; // 0x0
	FString AuthToken; // 0x10
	FString match_making_tag; // 0x20
};

struct FMovieSceneFloatValueSerializationHelper {
	float Value; // 0x0
	ERichCurveInterpMode InterpMode; // 0x4
	ERichCurveTangentMode TangentMode; // 0x5
	FMovieSceneTangentDataSerializationHelper Tangent; // 0x8
};

struct FMovieSceneEvaluationMetaData {
	TArray<FMovieSceneSequenceID> ActiveSequences; // 0x0
	TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities; // 0x10
	TMap<FMovieSceneSequenceID, uint32_t> SubTemplateSerialNumbers; // 0x20
};

struct FInputAxisProperties {
	float DeadZone; // 0x0
	float Sensitivity; // 0x4
	float Exponent; // 0x8
	char bInvert : 1; // 0xc
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

struct FAnimNotifyTrack {
	FName TrackName; // 0x0
	FLinearColor TrackColor; // 0x8
};

struct FAssetManagerRedirect {
	FString Old; // 0x0
	FString New; // 0x10
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

struct FAIDataProviderBoolValue : FAIDataProviderTypedValue {
	bool DefaultValue; // 0x30
};

struct FResponse_EquipListArray {
	TArray<FResponse_ItemList_Rec> equipment; // 0x0
};

struct FBuildPromotionNewProjectSettings {
	FDirectoryPath NewProjectFolderOverride; // 0x0
	FString NewProjectNameOverride; // 0x10
};

struct FG2C_PartyEntrustSomeone_Data {
	uint32_t C; // 0x0
	FString E; // 0x8
	FString uidEntrusted; // 0x18
};

struct FMovieSceneRootEvaluationTemplateInstance {
	TMap<FMovieSceneSequenceID, UObject*> DirectorInstances; // 0x18
};

struct FChaosHandlerSet {
	TSet<UObject*> ChaosHandlers; // 0x8
};

struct FVectorRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FScrollBoxStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x90
	FSlateBrush LeftShadowBrush; // 0x118
	FSlateBrush RightShadowBrush; // 0x1a0
};

struct FHitRateWeaponLogData {
	int32_t ShotCount; // 0x0
	int32_t HitShotCount; // 0x4
	int32_t HeadShotCount; // 0x8
	int32_t KillCount; // 0xc
	int32_t HeadShotKillCount; // 0x10
};

struct FRuntimeCurveLinearColor {
	FRichCurve ColorCurves[0x4]; // 0x0
	UCurveLinearColor* ExternalCurve; // 0x200
};

struct FBuildingItemSpawnLog {
	FString LevelName; // 0x0
	FString ParentName; // 0x10
	FString BuildingName; // 0x20
	FString DetectingUserName; // 0x30
	bool DetectingBoxResult; // 0x40
	bool StandardBoxTableComplete; // 0x41
	bool IsValid; // 0x42
	FVector Location; // 0x44
	TMap<int32_t, FLogItemInfoData> Items; // 0x50
};

struct FRequest_CreatePlayer {
	FString player_name; // 0x0
	FPCLooks pc_looks; // 0x10
	TArray<uint32_t> equip_clothes; // 0x28
};

struct FSeasonEXPElement {
	int32_t Level; // 0x0
	int32_t LevelUPExp; // 0x4
	int32_t LevelUpRewardIndex; // 0x8
	int32_t LevelUpRewardCount; // 0xc
	bool ShowInTitle; // 0x10
	FText DisplayName; // 0x18
	TSoftObjectPtr<UObject> CohIcon; // 0x30
};

struct FEditableTextStyle : FSlateWidgetStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x58
	FSlateBrush BackgroundImageSelected; // 0x80
	FSlateBrush BackgroundImageComposing; // 0x108
	FSlateBrush CaretImage; // 0x190
};

struct FCurveTableRowHandle {
	UCurveTable* CurveTable; // 0x0
	FName RowName; // 0x8
};

struct FDropNoteInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FString Comment; // 0x18
};

struct FItemLocationLog {
	TArray<FVector> Locations; // 0x0
};

struct FInterpCurvePointVector2D {
	float InVal; // 0x0
	FVector2D OutVal; // 0x4
	FVector2D ArriveTangent; // 0xc
	FVector2D LeaveTangent; // 0x14
	EInterpCurveMode InterpMode; // 0x1c
};

struct FReceiveHttpLog : FBaseProtocolLog {
	FString URL; // 0x30
	int32_t responsecode; // 0x40
};

struct FMagicLeapLightEstimationColorTemperatureState {
	float ColorTemperatureKelvin; // 0x0
	FLinearColor AmbientColor; // 0x4
	FTimespan Timestamp; // 0x18
};

struct FCameraTrackingFocusSettings {
	TSoftObjectPtr<AActor> ActorToTrack; // 0x0
	FVector RelativeOffset; // 0x28
	char bDrawDebugTrackingFocusPoint : 1; // 0x34
};

struct FTimedDataInputEvaluationData {
	float DistanceToNewestSampleSeconds; // 0x0
	float DistanceToOldestSampleSeconds; // 0x4
};

struct FProcMeshTangent {
	FVector TangentX; // 0x0
	bool bFlipTangentY; // 0xc
};

struct FRequest_SearchPlayer {
	FString player_name; // 0x0
};

struct FCullDistanceSizePair {
	float Size; // 0x0
	float CullDistance; // 0x4
};

struct FRequest_DS_CurrencyGain {
	FString user_id; // 0x0
	uint32_t currency_index; // 0x10
	uint32_t Amount; // 0x14
	uint32_t action_code; // 0x18
};

struct FClothingAssetData_Legacy {
	FName AssetName; // 0x0
	FString ApexFileName; // 0x8
	bool bClothPropertiesChanged; // 0x18
	FClothPhysicsProperties_Legacy PhysicsProperties; // 0x1c
};

struct FSoundSourceBusSendInfo {
	ESourceBusSendLevelControlMethod SourceBusSendLevelControlMethod; // 0x0
	USoundSourceBus* SoundSourceBus; // 0x8
	float SendLevel; // 0x10
	float MinSendLevel; // 0x14
	float MaxSendLevel; // 0x18
	float MinSendDistance; // 0x1c
	float MaxSendDistance; // 0x20
	FRuntimeFloatCurve CustomSendLevelCurve; // 0x28
};

struct FVertexToCreate {
	FMeshElementAttributeList VertexAttributes; // 0x0
	FVertexID OriginalVertexID; // 0x10
};

struct FVirtualKeyboardOptions {
	bool bEnableAutocorrect; // 0x0
};

struct FAITeamStimulusEvent {
	AActor* Broadcaster; // 0x28
	AActor* Enemy; // 0x30
};

struct FPersonalSupplyBoxInfo {
	bool IsSpawned; // 0x0
	FVector2D Position; // 0x4
	EPersonalSupplyBoxPingType PingType; // 0xc
};

struct FPersonalSupplyBoxPingInfo {
	bool IsSpawned; // 0x0
	FVector Location; // 0x4
	EPersonalSupplyBoxPingType PingType; // 0x10
};

struct FRigidBodyState {
	FVector_NetQuantize100 Position; // 0x0
	FQuat Quaternion; // 0x10
	FVector_NetQuantize100 LinVel; // 0x20
	FVector_NetQuantize100 AngVel; // 0x2c
	char Flags; // 0x38
};

struct FMatchEndFinalResult {
	bool bIsShowingSimpleResult; // 0x0
	bool bIsMatchEnd; // 0x1
	bool bGiveUp; // 0x2
	bool bExitGame; // 0x3
};

struct FBPComponentClassOverride {
	FName ComponentName; // 0x0
	UObject* ComponentClass; // 0x8
};

struct FAnalysisClientSupplyBoxOpenData {
	int32_t open_time; // 0x0
	int32_t used_gold; // 0x4
	int32_t remain_gold; // 0x8
};

struct FNiagaraVariableDataInterfaceBinding {
	FNiagaraVariable BoundVariable; // 0x0
};

struct FAnimNode_UseCachedPose : FAnimNode_Base {
	FPoseLink LinkToCachingNode; // 0x10
	FName CachePoseName; // 0x20
};

struct FTimerHandle {
	uint64_t Handle; // 0x0
};

struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
};

struct FLevelSimplificationDetails {
	bool bCreatePackagePerAsset; // 0x0
	float DetailsPercentage; // 0x4
	FMaterialProxySettings StaticMeshMaterialSettings; // 0x8
	bool bOverrideLandscapeExportLOD; // 0x94
	int32_t LandscapeExportLOD; // 0x98
	FMaterialProxySettings LandscapeMaterialSettings; // 0x9c
	bool bBakeFoliageToLandscape; // 0x128
	bool bBakeGrassToLandscape; // 0x129
	bool bAllowDistanceField; // 0x12a
	bool bSimplifiedMeshMerge; // 0x12b
	bool bGenerateMeshNormalMap; // 0x12c
	bool bGenerateMeshMetallicMap; // 0x12d
	bool bGenerateMeshRoughnessMap; // 0x12e
	bool bGenerateMeshSpecularMap; // 0x12f
	bool bGenerateLandscapeNormalMap; // 0x130
	bool bGenerateLandscapeMetallicMap; // 0x131
	bool bGenerateLandscapeRoughnessMap; // 0x132
	bool bGenerateLandscapeSpecularMap; // 0x133
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

struct FHighTypeSpawnRate {
	FString highTypeName; // 0x0
	TArray<FMidTypeSpawnRate> midTypeList; // 0x10
};

struct FResponse_ItemList_Rec {
	uint32_t item_id; // 0x0
	uint32_t item_slot; // 0x4
	uint32_t item_mid; // 0x8
	FString item_name; // 0x10
	uint32_t item_count; // 0x20
	uint32_t item_level; // 0x24
};

struct FResponse_GamePlayerInfo {
	uint32_t selected_pc_class_type_index; // 0x0
	TArray<FResponse_PCInfo> pc_list; // 0x8
	TArray<FBasePerkInfo> all_perk_list; // 0x18
	FSupplyBoxInfo supply_box; // 0x28
	uint32_t Gold; // 0x70
	FPlayerSeasonInfo player_season_info; // 0x74
	TArray<FSeasonQuestBaseInfo> season_quest_list; // 0x90
	double rating_point; // 0xa0
	FMatchClassInfo match_class; // 0xa8
	FResponse_PlayInfo play_info; // 0xd0
	bool is_suspicious_user; // 0xf0
};

struct FC2G_PartyAccept_Data {
	FString partyTicket; // 0x0
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

struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct {
	FFrameNumber Time; // 0x8
};

struct FRotationTrack {
	TArray<FQuat> RotKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FMustSpawnItemInfo {
	int32_t ItemId; // 0x0
	int32_t ItemCount; // 0x4
};

struct FMaterialItemMarkerInfo {
	FVector2D Pos; // 0x0
	FVector2D PrePos; // 0x8
	UWidget* Widget; // 0x10
	FMaterialItemPingInfo PingInfo; // 0x18
};

struct FBravoHotelSmartPingIconSoundSettings {
	USoundBase* Enter; // 0x0
	USoundBase* Hold; // 0x8
	USoundBase* Exit; // 0x10
};

struct FG2C_GoToDediWhenYouWerePlaying_Data {
	uint32_t C; // 0x0
	FString E; // 0x8
	FString D; // 0x18
	bool is_go; // 0x28
	FString ds; // 0x30
	FString Token; // 0x40
	FString team_id; // 0x50
	FString Key; // 0x60
	int32_t how; // 0x70
	FString player_session_id; // 0x78
	bool SpectatorOnly; // 0x88
	FString AddOptions; // 0x90
};

struct FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct {
	FFrameNumber Time; // 0x8
};

struct FAkTriangle {
	uint16_t Point0; // 0x0
	uint16_t Point1; // 0x2
	uint16_t Point2; // 0x4
	uint16_t Surface; // 0x6
};

struct FAreaOverrideStandardGroupDataList {
	TArray<FAreaOverrideStandardGroupData> List; // 0x0
};

struct FMaterialItemPingInfo {
	int32_t PingIndex; // 0x0
	FName MaterialKey; // 0x4
	ABravoHotelPickup* MaterialItem; // 0x10
	AActor* LocationActor; // 0x18
	UPaperSprite* Image; // 0x20
	char Rarity; // 0x28
	bool EffectReinforce; // 0x29
};

struct FSettingInputActionKeyMapping {
	FName ActionName; // 0x0
	bool bShift; // 0x8
	bool bCtrl; // 0x9
	bool bAlt; // 0xa
	bool bCmd; // 0xb
	FKey Key; // 0x10
};

struct FCharacterBaseInfo {
	int32_t KillCount; // 0x0
	int32_t AIKillCount; // 0x4
	int32_t SequenceKillCount; // 0x8
	int32_t TempSequenceKillCount; // 0xc
	int32_t DeathCount; // 0x10
	FDateTime DeathTime; // 0x18
	FDateTime LastKillTime; // 0x20
	float LifeTime; // 0x28
	float MoveDistance; // 0x2c
	int32_t HeadShotKillCount; // 0x30
	int32_t BeHeadShotedCount; // 0x34
	int32_t BeKnockOutedCount; // 0x38
	int32_t KnockOutCount; // 0x3c
	int32_t KnockOutHeadShotCount; // 0x40
	int32_t BeKnockOutedHeadShotCount; // 0x44
	int32_t RecoveryCount; // 0x48
	int32_t BeRecoveryedCount; // 0x4c
	int32_t TeamKillCount; // 0x50
	int32_t SelfKillCount; // 0x54
	float Damage; // 0x58
	float BeDamaged; // 0x5c
	int32_t UseSkillBookItemCount; // 0x60
	int32_t UseHealItemCount; // 0x64
	int32_t UseBoostItemCount; // 0x68
};

struct FAirCraftInfo {
	FVector2D CurrentPos; // 0x0
	FVector2D StartPos; // 0x8
	FVector2D EndPos; // 0x10
	FVector2D DescentStartPos; // 0x18
	FVector2D DescentEndPos; // 0x20
	FDebugAirCraftInfo DebugData; // 0x28
	float Angle; // 0x54
	int32_t FindDescentPointCnt; // 0x58
};

struct FCollectionParameterBase {
	FName ParameterName; // 0x0
	FGuid ID; // 0x8
};

struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase {
	UPoseAsset* PoseAsset; // 0x30
};

struct FLiveLinkSourcePreset {
	FGuid Guid; // 0x0
	ULiveLinkSourceSettings* Settings; // 0x10
	FText SourceType; // 0x18
};

struct FReplayDiedInfo {
	FReplayDiedSaveInfo Info; // 0x0
	float Time; // 0xb0
};

struct FMaterialInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FPersonalSupplyBoxTransform {
	bool TraceLand; // 0x0
	int32_t Index; // 0x4
	FTransform Transform; // 0x10
};

struct FSupportedAreaData {
	FString AreaClassName; // 0x0
	int32_t AreaID; // 0x10
	UObject* AreaClass; // 0x18
};

struct FCameraCacheEntry {
	float Timestamp; // 0x0
	FMinimalViewInfo POV; // 0x10
};

struct FMovieSceneEventPtrs {
	UFunction* Function; // 0x0
	TFieldPath<FProperty> BoundObjectProperty; // 0x8
};

struct FNiagaraVariableInfo {
	FNiagaraVariable Variable; // 0x0
	FText Definition; // 0x28
	UNiagaraDataInterface* DataInterface; // 0x40
};

struct FClothCollisionPrim_Convex {
	TArray<FPlane> Planes; // 0x0
	TArray<FVector> SurfacePoints; // 0x10
	int32_t BoneIndex; // 0x20
};

struct FAction {
	bool Visibility; // 0x0
	bool State; // 0x1
	bool Ladder; // 0x2
	bool SpaceBar; // 0x3
	FString Message; // 0x8
	FString SubMessage; // 0x18
	FString BombingMessage; // 0x28
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

struct FNDIStaticMeshSectionFilter {
	TArray<int32_t> AllowedMaterialSlots; // 0x0
};

struct FFastArraySerializer {
	int32_t ArrayReplicationKey; // 0x54
	EFastArraySerializerDeltaFlags DeltaFlags; // 0x100
};

struct FCoh_Error {
	int32_t Code; // 0x0
	FString Desc; // 0x8
};

struct FGameplayTagQuery {
	int32_t TokenStreamVersion; // 0x0
	TArray<FGameplayTag> TagDictionary; // 0x8
	TArray<char> QueryTokenStream; // 0x18
	FString UserDescription; // 0x28
	FString AutoDescription; // 0x38
};

struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler {
	FPoseLink SourcePose; // 0x78
	EAlphaBlendOption BlendOption; // 0x88
	UCurveFloat* CustomCurve; // 0x90
};

struct FSlateChildSize {
	float Value; // 0x0
	ESlateSizeRule SizeRule; // 0x4
};

struct FGameplayTagSource {
	FName SourceName; // 0x0
	EGameplayTagSourceType SourceType; // 0x8
	UGameplayTagsList* SourceTagList; // 0x10
	URestrictedGameplayTagsList* SourceRestrictedTagList; // 0x18
};

struct FComponentReference {
	AActor* OtherActor; // 0x0
	FName ComponentProperty; // 0x8
	FString PathToComponent; // 0x10
};

struct FItemSpawnDebug {
	FName WorldItemSpawnTableKey; // 0x0
	FVector2D OuterCenter; // 0x8
	float OuterRadius; // 0x10
	TMap<FString, FItemDebugInfo> BuildingItemList; // 0x18
};

struct FDropBoxInfo {
	UUW-Inventory_ProximityBoxSlot_C* Widget_17_9F555C6544413391A9A0E980B295333D; // 0x0
	TArray<FDropBoxSlotInfo> Slots_12_46E5EB574C54E65B8DEFECB65EBB9C44; // 0x8
	ABravoHotelDropBoxActor* BoxActor_16_E04DB23242976A5C9714C8A725894128; // 0x18
	bool Check_19_A1947CF8439549A97364869270758D74; // 0x20
};

struct FSolverCollisionFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
};

struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate {
	int32_t MaterialIndex; // 0x20
	FMovieSceneObjectPathChannel MaterialChannel; // 0x28
};

struct FFindFloorResult {
	char bBlockingHit : 1; // 0x0
	char bWalkableFloor : 1; // 0x0
	char bLineTrace : 1; // 0x0
	float FloorDist; // 0x4
	float LineDist; // 0x8
	FHitResult HitResult; // 0xc
};

struct FNamedLensPreset {
	FString Name; // 0x0
	FCameraLensSettings LensSettings; // 0x10
};

struct FAwsCredentialsForIdentityRequest {
	FString IdentityId; // 0x0
	TMap<FString, FString> Logins; // 0x10
};

struct FTrackToSkeletonMap {
	int32_t BoneTreeIndex; // 0x0
};

struct FBravoHotelConditionState {
	ECharacterConditionType ConditionType; // 0x0
	float CheckTimer; // 0x4
	float CheckDepth; // 0x8
	TArray<int32_t> Keys; // 0x10
};

struct FG2C_MatchCancel_Data {
	uint32_t C; // 0x0
	FString E; // 0x8
};

struct FInterpCurveTwoVectors {
	TArray<FInterpCurvePointTwoVectors> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FBravoHotelMatchingSettings {
	bool bPerson; // 0x0
	FString Map; // 0x8
	EMatchingType Type; // 0x18
	bool bNeedMoreMember; // 0x19
};

struct FEditableTextBoxStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundImageNormal; // 0x8
	FSlateBrush BackgroundImageHovered; // 0x90
	FSlateBrush BackgroundImageFocused; // 0x118
	FSlateBrush BackgroundImageReadOnly; // 0x1a0
	FMargin Padding; // 0x228
	FSlateFontInfo Font; // 0x238
	FSlateColor ForegroundColor; // 0x288
	FSlateColor BackgroundColor; // 0x2b0
	FSlateColor ReadOnlyForegroundColor; // 0x2d8
	FMargin HScrollBarPadding; // 0x300
	FMargin VScrollBarPadding; // 0x310
	FScrollBarStyle ScrollBarStyle; // 0x320
};

