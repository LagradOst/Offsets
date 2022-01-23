// Created by BlueFire1337
// Updated 2022-01-20
// Generated 2022-01-23

namespace off {
	constexpr auto GNames = 0x1ce2098;
	constexpr auto GObjects = 0x1ce2a10;
	constexpr auto UEngine = 0x1ceff68;
}

struct UDistributionFloat : UComponent {
	FPointer VfTable_FCurveEdInterface; // 0x70
	uint32_t bCanBeBaked : 1; // 0x78
	uint32_t bIsDirty : 1; // 0x78
};

struct UActorFactoryFracturedStaticMesh : UActorFactory {
	ObjectProperty FracturedStaticMesh; // 0x9c
	FVector DrawScale3D; // 0xa4
};

struct UActorFactoryVehicle : UActorFactory {
	AVehicle* VehicleClass; // 0x9c
};

struct UParticleModuleAccelerationBase : UParticleModule {
	uint32_t bAlwaysInWorldSpace : 1; // 0x68
};

struct UCombatExplosion : UGameExplosion {
	float MinDamage; // 0x148
	float FullDamageRadius; // 0x14c
	float AmbientExploDamageRadius; // 0x150
	FDecalData DecalData; // 0x154
	float DecalTraceDistance; // 0x184
	ObjectProperty RadialuBlurMaterial; // 0x188
	float RadialBlurFallOffExponent; // 0x190
	float RadialBlurScale; // 0x194
	uint32_t ForceHitNormalCheckForDecal : 1; // 0x198
	uint32_t bIgnoreBlock : 1; // 0x198
	uint32_t bIgnoreBlockForCamShake : 1; // 0x198
	uint32_t bIgnoreCamShake : 1; // 0x198
	uint32_t IsPlantExplosion : 1; // 0x198
	TArray<FExplosionDamageAdjustment> DamageAdjustmentList; // 0x19c
	float DamageRatioForInstigator; // 0x1ac
	float CheckOffSet; // 0x1b0
	FRotator AddParticleSpawnRotation; // 0x1b4
};

struct AFracturedStaticMeshPart : AFracturedStaticMeshActor {
	float DestroyPartRadiusFactor; // 0x2d8
	ObjectProperty BaseFracturedMeshActor; // 0x2dc
	uint32_t bHasBeenRecycled : 1; // 0x2e4
	uint32_t bChangeRBChannelWhenAsleep : 1; // 0x2e4
	uint32_t bCompositeThatExplodesOnImpact : 1; // 0x2e4
	float LastSpawnTime; // 0x2e8
	int32_t PartPoolIndex; // 0x2ec
	float FracPartGravScale; // 0x2f0
	ERBCollisionChannel AsleepRBChannel; // 0x2f4
	FVector OldVelocity; // 0x2f8
	float CurrentVibrationLevel; // 0x304
	float LastImpactSoundTime; // 0x308
};

struct UDistributionFloatConstant : UDistributionFloat {
	float Constant; // 0x7c
};

struct UParticleModuleColor : UParticleModuleColorBase {
	FRawDistributionVector StartColor; // 0x68
	FRawDistributionFloat StartAlpha; // 0x8c
	uint32_t bClampAlpha : 1; // 0xb0
};

struct ADynamicPylon : APylon {
	uint32_t bMoving : 1; // 0x454
};

struct USeqCond_SwitchObject : USeqCond_SwitchBase {
	TArray<FSwitchObjectCase> SupportedValues; // 0xec
};

struct AAISpawnPoint : ANavigationPoint {
	EAITeamInfo TeamIndex; // 0x33c
	FColor TeamColor[0x3]; // 0x340
};

struct UMcpUserManager : UMcpUserManagerBase {
	TArray<FMcpUserStatus> UserStatuses; // 0xb8
	FString RegisterUserMcpUrl; // 0xc8
	FString RegisterUserEmailUrl; // 0xd8
	FString RegisterUserFacebookUrl; // 0xe8
	FString QueryUserUrl; // 0xf8
	FString QueryUsersUrl; // 0x108
	FString DeleteUserUrl; // 0x118
	TArray<FRegisterUserRequest> RegisterUserRequests; // 0x128
	TArray<ObjectProperty> QueryUsersRequests; // 0x138
	TArray<ObjectProperty> DeleteUserRequests; // 0x148
};

struct UCombatDataTableRefShopCategory : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString CodeName; // 0x70
	int32_t IndexType; // 0x80
	FString ShopCodename; // 0x84
	int32_t ServiceType; // 0x94
	int32_t SubCategoryType; // 0x98
	int32_t DisplaynameID; // 0x9c
};

struct UUIDataProvider_SettingsArray : UUIDataProvider {
	ObjectProperty Settings; // 0x70
	int32_t SettingsId; // 0x78
	FName SettingsName; // 0x7c
	FString ColumnHeaderText; // 0x84
	TArray<FIdToStringMapping> Values; // 0x94
};

struct UCombatFrontEnd_UserInfo : UCombatFrontEnd_Object {
	TArray<int32_t> MainTabIDList; // 0xd0
	FSubTabInfo SubTabList[0x9]; // 0xe0
	FCompetitionStringIDInfo _CompetitionStringIDInfo[0x3]; // 0x1b8
	FRecordInfo _RecordInfo[0xd]; // 0x1f4
	ObjectProperty UserInfoTran; // 0x3c8
	ObjectProperty MissionList; // 0x3d0
};

struct USeqAct_Log : USequenceAction {
	uint32_t bOutputToScreen : 1; // 0x108
	uint32_t bIncludeObjComment : 1; // 0x108
	float TargetDuration; // 0x10c
	FVector TargetOffset; // 0x110
	FString LogMessage; // 0x11c
};

struct USplineAudioComponent : UAudioComponent {
	float ListenerScopeRadius; // 0x2a0
	int32_t ClosestPointOnSplineIndex; // 0x2a4
	TArray<FInterpPointOnSpline> Points; // 0x2a8
};

struct UOnlinePlaylistProvider : UUIResourceDataProvider {
	int32_t PlaylistId; // 0x94
	TArray<FName> PlaylistGameTypeNames; // 0x98
	FString DisplayName; // 0xa8
	int32_t Priority; // 0xb8
};

struct UMaterialExpressionDistance : UMaterialExpression {
	FExpressionInput A; // 0xb0
	FExpressionInput B; // 0xe4
};

struct AVolumePathNode : APathNode {
	float StartingRadius; // 0x33c
	float StartingHeight; // 0x340
};

struct UAnimNotify_Kismet : UAnimNotify {
	FName NotifyName; // 0x60
};

struct UDrawConeComponent : UPrimitiveComponent {
	FColor ConeColor; // 0x250
	float ConeRadius; // 0x254
	float ConeAngle; // 0x258
	int32_t ConeSides; // 0x25c
};

struct USeqAct_Switch : USequenceAction {
	int32_t LinkCount; // 0x108
	int32_t IncrementAmount; // 0x10c
	uint32_t bLooping : 1; // 0x110
	uint32_t bAutoDisableLinks : 1; // 0x110
	TArray<int32_t> Indices; // 0x114
};

struct UUIDataStore_DynamicResource : UUIDataStore {
	ObjectProperty ProfileProvider; // 0x98
	ObjectProperty GameResourceDataStore; // 0xa0
	TArray<FDynamicResourceProviderDefinition> ResourceProviderDefinitions; // 0xa8
	FMultiMap_Mirror ResourceProviders; // 0xb8
};

struct AFluidInfluenceActor : AActor {
	ComponentProperty FlowDirection; // 0x244
	ComponentProperty Sprite; // 0x24c
	ComponentProperty InfluenceComponent; // 0x254
	uint32_t bActive : 1; // 0x25c
	uint32_t bToggled : 1; // 0x25c
};

struct UCombatFrontEnd_CharacterInfo : UCombatFrontEnd_Scene {
	ObjectProperty TabList[0x4]; // 0xd0
};

struct ANxGenericForceFieldBox : ANxGenericForceField {
	ComponentProperty RenderComponent; // 0x338
	FVector BoxExtent; // 0x340
};

struct UCombatDataTableRefPingGroupBindRegion : UCombatDataTableType {
	int32_t Index; // 0x6c
	int32_t ServiceRegionID; // 0x70
	int32_t PingGroupID; // 0x74
};

struct ACombatProjectile : AProjectile {
	uint32_t bSuppressAudio : 1; // 0x2a0
	uint32_t bAutoStartInFlightAudio : 1; // 0x2a0
	uint32_t bIgnoreInstigatorCollision : 1; // 0x2a0
	uint32_t bAddBaseVelocity : 1; // 0x2a0
	uint32_t bThrowSound : 1; // 0x2a0
	uint32_t bRegisterIndicator : 1; // 0x2a0
	uint32_t bInitRotation : 1; // 0x2a0
	uint32_t bDeactivateTrailWhenStopped : 1; // 0x2a0
	uint32_t bUseZeroExtentCollision : 1; // 0x2a0
	uint32_t bStopSimulation : 1; // 0x2a0
	uint32_t BounceOnAPawn : 1; // 0x2a0
	uint32_t bWaitForEffects : 1; // 0x2a0
	uint32_t bIgnoreEventChangedInstigator : 1; // 0x2a0
	uint32_t bIgnoreCamShake : 1; // 0x2a0
	uint32_t bIgnoreBlockForCamShake : 1; // 0x2a0
	ComponentProperty InFlightSound; // 0x2a4
	ObjectProperty InFlightSoundTemplate; // 0x2ac
	ObjectProperty TrailTemplate; // 0x2b4
	ComponentProperty TrailPSC; // 0x2bc
	ComponentProperty ProjLightEnvironment; // 0x2c4
	float ExploCameraEffectRadius; // 0x2cc
	float TossZ; // 0x2d0
	float TossUpDegree; // 0x2d4
	float GravityScale; // 0x2d8
	float IndicatorPriority; // 0x2dc
	float GrenadeIndicatorsUpdateCycle; // 0x2e0
	float GrenadeIndicatorsLastUpdateTime; // 0x2e4
	float RegisterIndicatorDelayTime; // 0x2e8
	float SimFixedFPS; // 0x2ec
	float SimFixedTimeStep; // 0x2f0
	float SimInternalAdvanceTime; // 0x2f4
	int32_t WeaponIndex; // 0x2f8
	FVector InitialLocation; // 0x2fc
	FRotator InitialRotation; // 0x308
	FVector InitialVelocity; // 0x314
	char NotifyMovement; // 0x320
	EExplosionEffectType ExplosionEffectType; // 0x321
	FVector LastHitNormal; // 0x324
	ComponentProperty Mesh; // 0x330
	ComponentProperty SkeletalMeshComp; // 0x338
	ComponentProperty StaticMeshComp; // 0x340
	FMeshPart ProjSkeletalMeshParts; // 0x348
	FStaticMeshPart ProjStaticMeshParts; // 0x364
	ObjectProperty ProjSkeletalPhysicsAsset; // 0x370
	TArray<FExplosionDamageAdjustment> DamageAdjustmentList; // 0x378
	float DamageRatioForInstigator; // 0x388
	float AIModeDamageRate; // 0x38c
};

struct USeqAct_SetInt : USeqAct_SetSequenceVariable {
	int32_t Target; // 0x108
	TArray<int32_t> Value; // 0x10c
};

struct UCombatFrontEnd_Sort : UCombatFrontEnd_Object {
	FSortInfo InvenSortList[0x5]; // 0xd0
	FSortInfo ShopSortList[0x5]; // 0xf8
	int32_t CurrentSceneType; // 0x120
	int32_t SelectSortID; // 0x124
	uint32_t bAllSelect : 1; // 0x128
	TArray<int32_t> FilterIDList; // 0x12c
};

struct UOnlineSubsystemCommonImpl : UOnlineSubsystem {
	FPointer VoiceEngine; // 0x1bc
	int32_t MaxLocalTalkers; // 0x1c4
	int32_t MaxRemoteTalkers; // 0x1c8
	uint32_t bIsUsingSpeechRecognition : 1; // 0x1cc
	ObjectProperty GameInterfaceImpl; // 0x1d0
	ObjectProperty AuthInterfaceImpl; // 0x1d8
};

struct UCoverMeshComponent : UStaticMeshComponent {
	TArray<FCoverMeshes> Meshes; // 0x2f4
	FVector LocationOffset; // 0x304
	ObjectProperty AutoAdjustOn; // 0x310
	ObjectProperty AutoAdjustOff; // 0x318
	ObjectProperty Disabled; // 0x320
	uint32_t bShowWhenNotSelected : 1; // 0x328
};

struct UCombatAnimNodeSeq_Offset : UAnimNodeSequence {
	uint32_t bUseOffset : 1; // 0x158
	float StartOffset; // 0x15c
	FName AlternativeAnimSeqName; // 0x160
	ObjectProperty Weapon; // 0x168
};

struct USeqAct_CombatPlayRandomBoxScene : USequenceAction {
	int32_t RandomBoxGrade; // 0x108
};

struct UCombatDataTableRefDefine : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString DefineName; // 0x70
	E_VALUE_TYPE ValueType; // 0x80
	FString Value; // 0x84
};

struct UShadowMap2D : UObject {
	ObjectProperty Texture; // 0x60
	FVector2D CoordinateScale; // 0x68
	FVector2D CoordinateBias; // 0x70
	FGuid LightGuid; // 0x78
	uint32_t bIsShadowFactorTexture : 1; // 0x88
	ComponentProperty Component; // 0x8c
	int32_t InstanceIndex; // 0x94
};

struct UCombatAnimNodeSeqWeap : UCombatAnimNodeSequence {
	FName DefaultAnim; // 0x16c
	FName DualPistolAnim; // 0x174
	FName SinglePistolAnim; // 0x17c
	FName ShoulderRocketAnim; // 0x184
	FName StingerAnim; // 0x18c
};

struct UPBRuleNodeSize : UPBRuleNodeBase {
	EProcBuildingAxis SizeAxis; // 0x70
	float DecisionSize; // 0x74
	uint32_t bUseTopLevelScopeSize : 1; // 0x78
};

struct UParticleModuleMeshRotation : UParticleModuleRotationBase {
	FRawDistributionVector StartRotation; // 0x68
	uint32_t bInheritParent : 1; // 0x8c
};

struct ACombatIngameVoteManager : AReplicationInfo {
	int32_t CurrentVoteType; // 0x244
	int32_t VoteMaxTime; // 0x248
	int32_t VoteMaxCoolTime; // 0x24c
	int32_t VoteCanRound; // 0x250
	int32_t VoteRemainTime; // 0x254
	int32_t VoteCoolTime; // 0x258
	int32_t VoteStartUserCount; // 0x25c
	int32_t TeamIndex; // 0x260
	ObjectProperty CurrentVoteClass; // 0x264
};

struct UCombatVoiceInterfaceVivox : UObject {
	FString KeyString; // 0x60
	FString PlayerName; // 0x70
	FString VivoxAccountName; // 0x80
	FString VivoxAccountUri; // 0x90
	FString VivoxEchoChannelUri; // 0xa0
	FString VivoxTestChannelUri; // 0xb0
	FString VivoxTeamChannelUri; // 0xc0
	TArray<FString> VivoxAccountNames; // 0xd0
	uint32_t bCombineLogin : 1; // 0xe0
	uint32_t bIsConnected : 1; // 0xe0
	uint32_t bIsLoggedIn : 1; // 0xe0
	uint32_t bIsChannelJoined : 1; // 0xe0
	int32_t SerialNumber; // 0xe4
	ObjectProperty CPC; // 0xe8
	float RefuseVoiceMeterEnergy; // 0xf0
	float CurrentRefuseVoiceMeterEnergy; // 0xf4
	TArray<FDelayedCallbackFunctionData> DelayedCallbackFunctions; // 0xf8
	float DelayedCallbackFunctionsCheckTimerDelta; // 0x108
	float DelayedCallbackFunctionsCheckCycle; // 0x10c
	FString OSInputDeviceName; // 0x110
	FString APPInputDeviceName; // 0x120
	TArray<FString> InputDeviceNameList; // 0x130
};

struct UGFxAction_SetVariable : USequenceAction {
	ObjectProperty Movie; // 0x108
	FString Variable; // 0x110
};

struct UPBRuleNodeTransform : UPBRuleNodeBase {
	ComponentProperty Translation; // 0x70
	ComponentProperty Rotation; // 0x78
	ComponentProperty Scale; // 0x80
};

struct UInterpTrackInstAnimControl : UInterpTrackInst {
	float LastUpdatePosition; // 0x60
};

struct UMaterialExpressionRotateAboutAxis : UMaterialExpression {
	FExpressionInput NormalizedRotationAxisAndAngle; // 0xb0
	FExpressionInput PositionOnAxis; // 0xe4
	FExpressionInput Position; // 0x118
};

struct AMaterialInstanceTimeVaryingActor : AActor {
	ObjectProperty MatInst; // 0x244
};

struct USeqAct_Interp : USeqAct_Latent {
	TMap<None, None> SavedActorTransforms; // 0x120
	TMap<None, None> SavedActorVisibilities; // 0x168
	float PlayRate; // 0x1b0
	float Position; // 0x1b4
	float ForceStartPosition; // 0x1b8
	uint32_t bIsPlaying : 1; // 0x1bc
	uint32_t bPaused : 1; // 0x1bc
	uint32_t bIsBeingEdited : 1; // 0x1bc
	uint32_t bLooping : 1; // 0x1bc
	uint32_t bRewindOnPlay : 1; // 0x1bc
	uint32_t bNoResetOnRewind : 1; // 0x1bc
	uint32_t bRewindIfAlreadyPlaying : 1; // 0x1bc
	uint32_t bReversePlayback : 1; // 0x1bc
	uint32_t bInterpForPathBuilding : 1; // 0x1bc
	uint32_t bForceStartPos : 1; // 0x1bc
	uint32_t bDisableRadioFilter : 1; // 0x1bc
	uint32_t bClientSideOnly : 1; // 0x1bc
	uint32_t bSkipUpdateIfNotVisible : 1; // 0x1bc
	uint32_t bIsSkippable : 1; // 0x1bc
	uint32_t bShouldShowGore : 1; // 0x1bc
	TArray<ObjectProperty> LinkedCover; // 0x1c0
	ObjectProperty InterpData; // 0x1d0
	TArray<ObjectProperty> GroupInst; // 0x1d8
	AMatineeActor* ReplicatedActorClass; // 0x1e8
	ObjectProperty ReplicatedActor; // 0x1f0
	int32_t PreferredSplitScreenNum; // 0x1f8
	TArray<FCameraCutInfo> CameraCuts; // 0x1fc
	float TerminationTime; // 0x20c
	FRenderingPerformanceOverrides RenderingOverrides; // 0x210
	char ConstantCameraAnim; // 0x214
	float ConstantCameraAnimRate; // 0x218
};

struct UInterpTrackFloatBase : UInterpTrack {
	FInterpCurveFloat FloatTrack; // 0xa0
	float CurveTension; // 0xb4
};

struct UCCSBTMelee : UCCSBTScriptBehavior {
	float BlendInTime; // 0xd4
	float BlendOutTime; // 0xd8
	FName MeleeBlendName; // 0xdc
	FName MeleeSequenceName; // 0xe4
	ObjectProperty MeleeBlend; // 0xec
	ObjectProperty MeleeSequence; // 0xf4
};

struct UCBGunMuzzleFlashLight : UCombatExplosionLight {
	TArray<FLightValues> RedTeamTimeShift; // 0x26c
	TArray<FLightValues> BlueTeamTimeShift; // 0x27c
};

struct UCombatHUD_MarkerContainer : UCombatHUDEntity_Base {
	ObjectProperty AttachLayerMC; // 0xc0
	TArray<FMarkerObjectData> Markers; // 0xc8
	TArray<FPendingMarkerData> PendingMarkerList; // 0xd8
};

struct ULensFlareComponent : UPrimitiveComponent {
	ObjectProperty Template; // 0x250
	ComponentProperty PreviewInnerCone; // 0x258
	ComponentProperty PreviewOuterCone; // 0x260
	ComponentProperty PreviewRadius; // 0x268
	uint32_t bAutoActivate : 1; // 0x270
	uint32_t bIsActive : 1; // 0x270
	uint32_t bHasTranslucency : 1; // 0x270
	uint32_t bHasUnlitTranslucency : 1; // 0x270
	uint32_t bHasUnlitDistortion : 1; // 0x270
	uint32_t bUsesSceneColor : 1; // 0x270
	uint32_t bHasSeparateTranslucency : 1; // 0x270
	uint32_t bUseTrueConeCalculation : 1; // 0x270
	uint32_t bVisibleForMobile : 1; // 0x270
	uint32_t bForceRendering : 1; // 0x270
	float OuterCone; // 0x274
	float InnerCone; // 0x278
	float ConeFudgeFactor; // 0x27c
	float Radius; // 0x280
	float MinStrength; // 0x284
	FLinearColor SourceColor; // 0x288
	TArray<FLensFlareElementMaterials> Materials; // 0x298
	FPointer ReleaseResourcesFence; // 0x2a8
	float NextTraceTime; // 0x2b0
};

struct UExporter : UObject {
	TArray<FString> FormatExtension; // 0x68
	TArray<FString> FormatDescription; // 0x78
};

struct UAnimSequence : UObject {
	FName SequenceName; // 0x60
	TArray<FAnimNotifyEvent> Notifies; // 0x68
	TArray<ObjectProperty> MetaData; // 0x78
	TArray<FSkelControlModifier> BoneControlModifiers; // 0x88
	float SequenceLength; // 0x98
	int32_t NumFrames; // 0x9c
	float RateScale; // 0xa0
	float TargetLength; // 0xa4
	uint32_t bNoLoopingInterpolation : 1; // 0xa8
	uint32_t ShowMeshFlippedInEditor : 1; // 0xa8
	uint32_t bIsAdditive : 1; // 0xa8
	uint32_t bAdditiveBuiltLooping : 1; // 0xa8
	uint32_t bDoNotOverrideCompression : 1; // 0xa8
	uint32_t bHasBeenUsed : 1; // 0xa8
	uint32_t bWasCompressedWithoutTranslations : 1; // 0xa8
	uint32_t bRotationOnly : 1; // 0xa8
	TArray<FRawAnimSequenceTrack> RawAnimData; // 0xac
	TArray<FRawAnimSequenceTrack> RawAnimationData; // 0xbc
	TArray<FTranslationTrack> TranslationData; // 0xcc
	TArray<FRotationTrack> RotationData; // 0xdc
	TArray<FCurveTrack> CurveData; // 0xec
	AnimationCompressionFormat TranslationCompressionFormat; // 0xfc
	AnimationCompressionFormat RotationCompressionFormat; // 0xfd
	AnimationKeyFormat KeyEncodingFormat; // 0xfe
	TArray<int32_t> CompressedTrackOffsets; // 0x100
	TArray<char> CompressedByteStream; // 0x110
	FPointer TranslationCodec; // 0x120
	FPointer RotationCodec; // 0x128
	TArray<FBoneAtom> AdditiveRefPose; // 0x130
	TArray<FRawAnimSequenceTrack> AdditiveBasePose; // 0x140
	int32_t EncodingPkgVersion; // 0x150
	float UseScore; // 0x154
};

struct UParticleEmitter : UObject {
	FName EmitterName; // 0x60
	int32_t SubUVDataOffset; // 0x68
	EEmitterRenderMode EmitterRenderMode; // 0x6c
	TArray<ObjectProperty> LODLevels; // 0x70
	uint32_t ConvertedModules : 1; // 0x80
	uint32_t bCollapsed : 1; // 0x80
	uint32_t bIsSoloing : 1; // 0x80
	uint32_t bCookedOut : 1; // 0x80
	int32_t PeakActiveParticles; // 0x84
	int32_t InitialAllocationCount; // 0x88
	TArray<float> MediumDetailSpawnRateScale; // 0x8c
};

struct UNxForceFieldComponent : UPrimitiveComponent {
	ObjectProperty Shape; // 0x250
	ComponentProperty DrawComponent; // 0x258
	int32_t ExcludeChannel; // 0x260
	uint32_t bForceActive : 1; // 0x264
	uint32_t bDestroyWhenInactive : 1; // 0x264
	FRBCollisionChannelContainer CollideWithChannels; // 0x268
	float Duration; // 0x26c
	FPointer ForceField; // 0x270
	TArray<FPointer> ConvexMeshes; // 0x278
	TArray<FPointer> ExclusionShapes; // 0x288
	TArray<FPointer> ExclusionShapePoses; // 0x298
	int32_t SceneIndex; // 0x2a8
	float ElapsedTime; // 0x2ac
	ComponentProperty RenderComponent; // 0x2b0
	FPointer RBPhysScene; // 0x2b8
};

struct USeqAct_SetCameraTarget : USequenceAction {
	ObjectProperty CameraTarget; // 0x108
	FViewTargetTransitionParams TransitionParams; // 0x110
};

struct UMicroTransactionBase : UPlatformInterfaceBase {
	TArray<FPurchaseInfo> AvailableProducts; // 0x80
	FString LastError; // 0x90
	FString LastErrorSolution; // 0xa0
};

struct UCombatDataTableRefRematchOption : UCombatDataTableType {
	FString CodeName; // 0x6c
	int32_t StartableMinUser; // 0x7c
	int32_t GroupMinUser; // 0x80
	uint32_t AutoBalance : 1; // 0x84
	int32_t CountdownWaitSec; // 0x88
};

struct AGamePlayEvent_Kill : AActor {
	int32_t KillPacketCount; // 0x244
	FTakeDamageData SavedTakeDamageData; // 0x248
	float LastKillTimeResetTime; // 0x2c0
	int32_t LongShotCondition; // 0x2c4
	float AssistCondition; // 0x2c8
	float DangerousKillCondition; // 0x2cc
	float RescueConditionTime; // 0x2d0
	float RescueCondition; // 0x2d4
	int32_t MultiKillConditon; // 0x2d8
	int32_t ComeBackCondition; // 0x2dc
	int32_t EnemyKillCondition; // 0x2e0
	float TeamRevengeCondition; // 0x2e4
	int32_t ConsecutiveAssistCondition; // 0x2e8
	int32_t ConsecutiveKillCondition; // 0x2ec
	TArray<FKillTableDataType> TableDataList; // 0x2f0
	TArray<FTableInfoContainer> TableInfoList; // 0x300
	TArray<FName> RegisteredStates; // 0x310
	uint32_t bSuicide : 1; // 0x320
	TArray<int32_t> OtherPlayerRewardMask; // 0x324
	char ProcessingStateIndex; // 0x334
	TMap<None, None> Achievement; // 0x338
	FString CurrentMissionNameOfVictim; // 0x380
	ObjectProperty VictimPawn; // 0x390
	ObjectProperty KillerPawn; // 0x398
	ObjectProperty VictimCombatPawn; // 0x3a0
	ObjectProperty KillerCombatPawn; // 0x3a8
	ObjectProperty VictimController; // 0x3b0
	ObjectProperty KillerController; // 0x3b8
	ObjectProperty KillerPRI; // 0x3c0
	ObjectProperty VictimPRI; // 0x3c8
	ObjectProperty VictimCombatPRI; // 0x3d0
	ObjectProperty KillerCombatPRI; // 0x3d8
};

struct UCombatHUD_GOContainer : UCombatHUDEntity_Base {
	TArray<ObjectProperty> Components; // 0xc0
	int32_t Count; // 0xd0
	int32_t LastGOLocalMessageID; // 0xd4
};

struct UCombatDataTableRefItemUnLockRecipe : UCombatDataTableType {
	FString ItemCodeName; // 0x6c
	FString KeyCodeName; // 0x7c
	FString OutPutItemCodeName; // 0x8c
};

struct UMaterialExpressionStaticComponentMaskParameter : UMaterialExpressionParameter {
	FExpressionInput Input; // 0xd0
	uint32_t DefaultR : 1; // 0x104
	uint32_t DefaultG : 1; // 0x104
	uint32_t DefaultB : 1; // 0x104
	uint32_t DefaultA : 1; // 0x104
	FPointer InstanceOverride; // 0x108
};

struct ANxTornadoForceField : ANxForceField {
	float RadialStrength; // 0x298
	float RotationalStrength; // 0x29c
	float LiftStrength; // 0x2a0
	float ForceRadius; // 0x2a4
	float ForceTopRadius; // 0x2a8
	float LiftFalloffHeight; // 0x2ac
	float EscapeVelocity; // 0x2b0
	float ForceHeight; // 0x2b4
	float HeightOffset; // 0x2b8
	uint32_t BSpecialRadialForceMode : 1; // 0x2bc
	FPointer Kernel; // 0x2c0
};

struct UCombatOnlineMetaphors : UObject {
	float BUFF_ADDMAINAMMO_MIN; // 0x60
	float BUFF_ADDMAINAMMO_MAX; // 0x64
	float BUFF_ADDSUBAMMO_MIN; // 0x68
	float BUFF_ADDSUBAMMO_MAX; // 0x6c
	float BUFF_RELOADING_RATE_MIN; // 0x70
	float BUFF_RELOADING_RATE_MAX; // 0x74
	float BUFF_WEAPONCHANGE_RATE_MIN; // 0x78
	float BUFF_WEAPONCHANGE_RATE_MAX; // 0x7c
	float BUFF_MAXAUTOCUREHEALTH_MIN; // 0x80
	float BUFF_MAXAUTOCUREHEALTH_MAX; // 0x84
	float BUFF_HEALTHCURE_RATE_MIN; // 0x88
	float BUFF_HEALTHCURE_RATE_MAX; // 0x8c
	float BUFF_CROUCHSPEED_RATE_MIN; // 0x90
	float BUFF_CROUCHSPEED_RATE_MAX; // 0x94
	float BUFF_FPSSPEED_RATE_MIN; // 0x98
	float BUFF_FPSSPEED_RATE_MAX; // 0x9c
	float BUFF_ACCELATION_RATE_MIN; // 0xa0
	float BUFF_ACCELATION_RATE_MAX; // 0xa4
	float BUFF_RUNSPEED_RATE_MIN; // 0xa8
	float BUFF_RUNSPEED_RATE_MAX; // 0xac
	float BUFF_SPRINTSPEED_RATE_MIN; // 0xb0
	float BUFF_SPRINTSPEED_RATE_MAX; // 0xb4
	float BUFF_DETAILEDRADAR_DISTANCE_MIN; // 0xb8
	float BUFF_DETAILEDRADAR_DISTANCE_MAX; // 0xbc
	float BUFF_RADAR_RANGE_MIN; // 0xc0
	float BUFF_RADAR_RANGE_MAX; // 0xc4
	float BUFF_GUNATTACK_RATE_MIN; // 0xc8
	float BUFF_GUNATTACK_RATE_MAX; // 0xcc
	float BUFF_GUNGUARD_RATE_MIN; // 0xd0
	float BUFF_GUNGUARD_RATE_MAX; // 0xd4
	float BUFF_MELEEATTACK_RATE_MIN; // 0xd8
	float BUFF_MELEEATTACK_RATE_MAX; // 0xdc
	float BUFF_MELEEGUARD_RATE_MIN; // 0xe0
	float BUFF_MELEEGUARD_RATE_MAX; // 0xe4
	float BUFF_EXPLOSIVEATTACK_RATE_MIN; // 0xe8
	float BUFF_EXPLOSIVEATTACK_RATE_MAX; // 0xec
	float BUFF_EXPLOSIVEGUARD_RATE_MIN; // 0xf0
	float BUFF_EXPLOSIVEGUARD_RATE_MAX; // 0xf4
};

struct UCombatAnimBlendByDeath : UCombatAnimBlendBase {
	ObjectProperty Owner; // 0x144
	uint32_t bIsDeadOld : 1; // 0x14c
	float UndeadTime; // 0x150
	float NoAnimTheshold; // 0x154
};

struct ACombatAmmoPickupFactory : ACombatWeaponPickupFactory {
	int32_t MainAmmoRate; // 0x44c
	int32_t SubAmmoRate; // 0x450
	int32_t GrenadeRate_A; // 0x454
	int32_t GrenadeRate_B; // 0x458
	int32_t GrenadeRate_C; // 0x45c
};

struct UCombatFrontEnd_Login : UCombatFrontEnd_Scene {
	int32_t IDLabelID; // 0xd0
	int32_t PWLabelID; // 0xd4
	int32_t CheckBoxLabelID; // 0xd8
	int32_t OKBtnLabelID; // 0xdc
	int32_t CancelBtnLabelID; // 0xe0
	int32_t AccountBtnLabelID; // 0xe4
	int32_t OptionBtnLabelID; // 0xe8
	int32_t ExitBtnLabelID; // 0xec
	uint32_t bNeedLocalize : 1; // 0xf0
	uint32_t bSaveUserInfo : 1; // 0xf0
	FString loginID; // 0xf4
	FString userPW; // 0x104
	int32_t FailedLoginCount; // 0x114
	ObjectProperty StatusTF; // 0x118
};

struct UGripActionNode_MoveRightAndLeft : UCombatAIActionNodeBase {
	uint32_t bIsWalking : 1; // 0xf4
	float DirChangeTime; // 0xf8
};

struct UProcBuildingRuleset : UObject {
	ObjectProperty RootRule; // 0x60
	uint32_t bBeingEdited : 1; // 0x68
	uint32_t bEnableInteriorTexture : 1; // 0x68
	uint32_t bLODOnlyRoof : 1; // 0x68
	uint32_t bPickRandomSwatch : 1; // 0x68
	ObjectProperty DefaultRoofMaterial; // 0x6c
	ObjectProperty DefaultFloorMaterial; // 0x74
	ObjectProperty DefaultNonRectWallMaterial; // 0x7c
	float RoofZOffset; // 0x84
	float NotRoofZOffset; // 0x88
	float FloorZOffset; // 0x8c
	float NotFloorZOffset; // 0x90
	float RoofPolyInset; // 0x94
	float FloorPolyInset; // 0x98
	float BuildingLODSpecular; // 0x9c
	float RoofEdgeScopeRaise; // 0xa0
	ObjectProperty LODCubemap; // 0xa4
	ObjectProperty InteriorTexture; // 0xac
	TArray<FPBVariationInfo> Variations; // 0xb4
	TArray<FPBParamSwatch> ParamSwatches; // 0xc4
};

struct UParticleModuleTrailSource : UParticleModuleTrailBase {
	ETrail2SourceMethod SourceMethod; // 0x68
	EParticleSourceSelectionMethod SelectionMethod; // 0x69
	FName SourceName; // 0x6c
	FRawDistributionFloat SourceStrength; // 0x74
	uint32_t bLockSourceStength : 1; // 0x98
	uint32_t bInheritRotation : 1; // 0x98
	int32_t SourceOffsetCount; // 0x9c
	TArray<FVector> SourceOffsetDefaults; // 0xa0
};

struct UCombatDialog : UCombatCommon_Base {
	ObjectProperty OKBtn; // 0xac
	ObjectProperty CancelBtn; // 0xb4
	DelegateProperty OKBtnDelegate; // 0xbc
	DelegateProperty CancelBtnDelegate; // 0xcc
};

struct ACombatTutorialGameReplicationInfo : ACombatAIGameReplicationInfo {
	TArray<ObjectProperty> Bombsites; // 0x400
	TArray<ObjectProperty> Bombs; // 0x410
	int32_t TotalBombsites; // 0x420
	int32_t TotalBombs; // 0x424
	WordProperty PlantedBombSettingTime; // 0x428
};

struct UGameCrowdAgentBehavior : UObject {
	ECrowdBehaviorEvent MyEventType; // 0x60
	ECrowdBehaviorEvent ViralBehaviorEvent; // 0x61
	float DurationOfBehavior; // 0x64
	float TimeUntilStopBehavior; // 0x68
	uint32_t bIdleBehavior : 1; // 0x6c
	uint32_t bFaceActionTargetFirst : 1; // 0x6c
	uint32_t bIsViralBehavior : 1; // 0x6c
	uint32_t bPassOnIsViralBehaviorFlag : 1; // 0x6c
	ObjectProperty ActionTarget; // 0x70
	float MaxPlayerDistance; // 0x78
	float ViralRadius; // 0x7c
	float DurationBeforeBecomesViral; // 0x80
	float TimeToBecomeViral; // 0x84
	float DurationOfViralBehaviorPropagation; // 0x88
	float TimeToStopPropagatingViralBehavior; // 0x8c
	ObjectProperty MyAgent; // 0x90
	FColor DebugBehaviorColor; // 0x98
};

struct USeqAct_SetCRandEXP : USequenceAction {
	int32_t CR; // 0x108
	int32_t Exp; // 0x10c
};

struct UUIDataStore_OnlineGameSearch : UUIDataStore_Remote {
	FName SearchResultsName; // 0x98
	ObjectProperty OnlineSub; // 0xa0
	TScriptInterface<Class> GameInterface; // 0xa8
	TArray<FGameSearchCfg> GameSearchCfgList; // 0xb8
	int32_t SelectedIndex; // 0xc8
	int32_t ActiveSearchIndex; // 0xcc
};

struct UUIResourceCombinationProvider : UUIDataProvider {
	ObjectProperty StaticDataProvider; // 0x70
	ObjectProperty ProfileProvider; // 0x78
};

struct UUISceneClient : UUIRoot {
	FPointer VfTable_FExec; // 0x70
	FPointer RenderViewport; // 0x78
	FIntPoint MousePosition; // 0x80
	ObjectProperty DataStoreManager; // 0x88
	FMatrix CanvasToScreen; // 0x90
	FMatrix InvCanvasToScreen; // 0xd0
	ObjectProperty UIScenePostProcess; // 0x110
	uint32_t bEnablePostProcess : 1; // 0x118
};

struct UCombatFPMuzzleFlashLight : UPointLightComponent {
	uint32_t bInitialized : 1; // 0x240
	float Lifetime; // 0x244
	int32_t TimeShiftIndex; // 0x248
	TArray<FLightValues> TimeShift; // 0x24c
	DelegateProperty __OnLightFinished__Delegate; // 0x25c
};

struct ACombatPlayerControllerBase : AGamePlayerController {
	float AirSpeed; // 0x750
	ObjectProperty CBHUD; // 0x754
	ObjectProperty UIDataStore_PendingDialogMessage; // 0x75c
	ObjectProperty UIDataStore_ETC; // 0x764
	ObjectProperty CombatPRI; // 0x76c
	uint32_t bAimAssistEnabled : 1; // 0x774
	uint32_t bMeleeAssistEnabled : 1; // 0x774
	uint32_t bIsLocalPC : 1; // 0x774
	uint32_t bIgnoreWeaponInput : 1; // 0x774
	uint32_t bIgnoreInput : 1; // 0x774
	uint32_t bScreenShotRequest : 1; // 0x774
	ObjectProperty CameraAnimPlayer; // 0x778
	ObjectProperty CurrentCameraAnimInstant; // 0x780
	FPostProcessSettings CamOverridePostProcess; // 0x788
	float ZoomFOVRatio; // 0x8ec
	ObjectProperty CombatCheatManager; // 0x8f0
	float CurrentInputExpireTime; // 0x8f8
	int32_t MaxWallHackCaptureCounter; // 0x8fc
	int32_t CurrentWallHackCaptureCounter; // 0x900
	char LastHackType; // 0x904
	char GRADE; // 0x905
};

struct USeqAct_CombatMeshTransform : USequenceAction {
	ObjectProperty Original; // 0x108
	ObjectProperty NewMesh; // 0x110
};

struct UOnlineImageDownloaderWeb : UObject {
	TArray<FOnlineImageDownload> DownloadImages; // 0x60
	int32_t MaxSimultaneousDownloads; // 0x70
	DelegateProperty __OnOnlineImageDownloaded__Delegate; // 0x74
};

struct UCombatAIActionBase : UObject {
	uint32_t bUseScriptTick : 1; // 0x60
	BTExecutionResult LastExecuteResult; // 0x64
	ObjectProperty Bot; // 0x68
	FName DebugName; // 0x70
};

struct ACombatProj_SpecialGrenade : ACombatProj_Grenade {
	float Lifetime; // 0x3f4
};

struct USeqVar_RandomFloat : USeqVar_Float {
	float Min; // 0xa4
	float Max; // 0xa8
};

struct UCombatStatisticsTransaction : UObject {
	ObjectProperty MissionList; // 0x60
	FMatchResultData ResultData; // 0x68
	FGrainInfoData UI_GrainData; // 0xa8
	TMap<None, None> Quest_InfoMap; // 0xc4
	FMatchResultMapInfoData MatchResultMap_InfoData; // 0x10c
	ObjectProperty CombatDBManager; // 0x124
	FString CachedClanName[0x2]; // 0x12c
	int32_t CachedClanID[0x2]; // 0x14c
	int32_t AttendID; // 0x154
	uint32_t bNeedPlayStampAnimation : 1; // 0x158
	uint32_t bNeedForceGotoEventScene : 1; // 0x158
	char InternetCafe_Benefit; // 0x15c
	int32_t DisperseRematchReason; // 0x160
};

struct UCombatAIDecisionComponent : UActorComponent {
	uint32_t bTriggered : 1; // 0x88
};

struct UUIDataStore_OnlineGameSettings : UUIDataStore_Settings {
	TArray<FGameSettingsCfg> GameSettingsCfgList; // 0x98
	UUIDataProvider_Settings* SettingsProviderClass; // 0xa8
	int32_t SelectedIndex; // 0xb0
};

struct ACombatArmsRacePRI : ACombatPlayerReplicationInfo {
	int32_t WeaponLevel; // 0x520
	int32_t KillPoint; // 0x524
	int32_t TotalKillPoint; // 0x528
	uint32_t bTopUser : 1; // 0x52c
	uint32_t oldTopUser : 1; // 0x52c
};

struct UAnimNodeBlendList : UAnimNodeBlendBase {
	TArray<float> TargetWeight; // 0x100
	float BlendTimeToGo; // 0x110
	int32_t ActiveChildIndex; // 0x114
	uint32_t bPlayActiveChild : 1; // 0x118
	uint32_t bForceChildFullWeightWhenBecomingRelevant : 1; // 0x118
	uint32_t bSkipBlendWhenNotRendered : 1; // 0x118
	float SliderPosition; // 0x11c
};

struct UCombatDamageType : UDamageType {
	FPointer VfTable_IInterface_CombatWeaponType; // 0x90
	uint32_t bCausesBlood : 1; // 0x98
	uint32_t bSimplifiedAnimDeath : 1; // 0x98
	uint32_t bCausesBloodSplatterDecals : 1; // 0x98
	uint32_t bFriendlyFire : 1; // 0x98
	uint32_t bIgnoreReward : 1; // 0x98
	uint32_t bPlacedWorld : 1; // 0x98
	uint32_t bDamagedBySkill : 1; // 0x98
	uint32_t bDamagedByPlayer : 1; // 0x98
	ObjectProperty DeathTimeDilationAnim; // 0x9c
	float SimplifiedMomentumFactor; // 0xa4
	float SimplifiedDeathUpkick; // 0xa8
	FName DeathStatsName; // 0xac
	FName SuicideStatsName; // 0xb4
	FString DeathString; // 0xbc
	FString FemaleSuicide; // 0xcc
	FString MaleSuicide; // 0xdc
	float TeammateDamageRate; // 0xec
	float SelfDamageRate; // 0xf0
	WEAPON_TYPES WeaponType; // 0xf4
	ECombatDamageType DamageType; // 0xf5
	char DamageAnimIndex; // 0xf6
	char SubIndex; // 0xf7
	FString WeaponStatType; // 0xf8
	TArray<FName> WeaponTypeName; // 0x108
};

struct UCombatSkill_UAVPatrol : UCombatActiveSkill {
	float PatrolTime; // 0xc8
	float FlightHeight; // 0xcc
	ObjectProperty UAV; // 0xd0
	FString UAV_ClassName; // 0xd8
};

struct AController : AActor {
	FPointer VfTable_IInterface_NavigationHandle; // 0x244
	ObjectProperty Pawn; // 0x24c
	ObjectProperty PlayerReplicationInfo; // 0x254
	int32_t PlayerNum; // 0x25c
	ObjectProperty NextController; // 0x260
	uint32_t bIsPlayer : 1; // 0x268
	uint32_t bGodMode : 1; // 0x268
	uint32_t bSoaking : 1; // 0x268
	uint32_t bSlowerZAcquire : 1; // 0x268
	uint32_t bNotifyPostLanded : 1; // 0x268
	uint32_t bNotifyApex : 1; // 0x268
	uint32_t bOverrideSearchStart : 1; // 0x268
	uint32_t bAdvancedTactics : 1; // 0x268
	uint32_t bCanDoSpecial : 1; // 0x268
	uint32_t bAdjusting : 1; // 0x268
	uint32_t bPreparingMove : 1; // 0x268
	uint32_t bForceStrafe : 1; // 0x268
	uint32_t bLOSflag : 1; // 0x268
	uint32_t bSkipExtraLOSChecks : 1; // 0x268
	uint32_t bNotifyFallingHitWall : 1; // 0x268
	uint32_t bEarlyOutOfSighTestsForSameType : 1; // 0x268
	uint32_t bPreciseDestination : 1; // 0x268
	uint32_t bSeeFriendly : 1; // 0x268
	uint32_t bUsingPathLanes : 1; // 0x268
	char bFire; // 0x26c
	char bAltFire; // 0x26d
	float MinHitWall; // 0x270
	UNavigationHandle* NavigationHandleClass; // 0x274
	ObjectProperty NavigationHandle; // 0x27c
	FVector OverrideSearchStart; // 0x284
	float MoveTimer; // 0x290
	ObjectProperty MoveTarget; // 0x294
	FBasedPosition DestinationPosition; // 0x29c
	FBasedPosition FocalPosition; // 0x2d4
	ObjectProperty Focus; // 0x30c
	ObjectProperty GoalList[0x4]; // 0x314
	FBasedPosition AdjustPosition; // 0x334
	ObjectProperty StartSpot; // 0x36c
	TArray<ObjectProperty> RouteCache; // 0x374
	ObjectProperty CurrentPath; // 0x384
	ObjectProperty NextRoutePath; // 0x38c
	FVector CurrentPathDir; // 0x394
	ObjectProperty RouteGoal; // 0x3a0
	float RouteDist; // 0x3a8
	float LastRouteFind; // 0x3ac
	ObjectProperty PendingMover; // 0x3b0
	ObjectProperty FailedMoveTarget; // 0x3b8
	int32_t MoveFailureCount; // 0x3c0
	float GroundPitchTime; // 0x3c4
	ObjectProperty ShotTarget; // 0x3c8
	ObjectProperty LastFailedReach; // 0x3d0
	float FailedReachTime; // 0x3d8
	FVector FailedReachLocation; // 0x3dc
	float SightCounter; // 0x3e8
	float SightCounterInterval; // 0x3ec
	float InUseNodeCostMultiplier; // 0x3f0
	int32_t HighJumpNodeCostModifier; // 0x3f4
	float MaxMoveTowardPawnTargetTime; // 0x3f8
	ObjectProperty Enemy; // 0x3fc
	TArray<FVisiblePortalInfo> VisiblePortals; // 0x404
	float LaneOffset; // 0x414
	FRotator OldBasedRotation; // 0x418
	FVector NavMeshPath_SearchExtent_Modifier; // 0x424
};

struct UTimeDilationAnim : UObject {
	ObjectProperty TimeDilationInterpGroup; // 0x60
	float AnimLength; // 0x68
};

struct ULandscapeLayerInfoObject : UObject {
	FName LayerName; // 0x60
	ObjectProperty PhysMaterial; // 0x68
	float Hardness; // 0x70
	uint32_t bNoWeightBlend : 1; // 0x74
};

struct USequenceVariable : USequenceObject {
	FName VarName; // 0x98
};

struct UPBRuleNodeWindowWall : UPBRuleNodeBase {
	float CellMaxSizeX; // 0x70
	float CellMaxSizeZ; // 0x74
	float WindowSizeX; // 0x78
	float WindowSizeZ; // 0x7c
	float WindowPosX; // 0x80
	float WindowPosZ; // 0x84
	uint32_t bScaleWindowWithCell : 1; // 0x88
	float YOffset; // 0x8c
	ObjectProperty Material; // 0x90
};

struct ACombatWeapAttachMeshActor : ASkeletalMeshActorMAT {
	ACombatWeapon* WeaponClass; // 0x2b4
	TArray<FMeshPart> SubPartList; // 0x2bc
	TArray<ComponentProperty> SubPartCompList; // 0x2cc
	uint32_t bShowSilence : 1; // 0x2dc
	uint32_t bShowLaserSite : 1; // 0x2dc
	uint32_t bUseFirstWeaponMesh : 1; // 0x2dc
	ComponentProperty LaserSitePSC; // 0x2e0
};

struct USeqEvent_MobileMotion : USeqEvent_MobileBase {
	float Roll; // 0x128
	float Pitch; // 0x12c
	float Yaw; // 0x130
	float DeltaRoll; // 0x134
	float DeltaPitch; // 0x138
	float DeltaYaw; // 0x13c
};

struct UCombatLocalPlayer : ULocalPlayer {
	eCombatPostProcess CurrentCombatPostProcess; // 0x434
	FPostProcessSettings MotionBlurPPSettings; // 0x438
	FPostProcessSettings ExposedPPSettings; // 0x59c
	FPostProcessSettings FlashbangPPSettings; // 0x700
	FPostProcessSettings WarmupPPSettings; // 0x864
	FPostProcessSettings CountdownPPSettings; // 0x9c8
	FPostProcessSettings RoundPPSettings; // 0xb2c
	FPostProcessSettings RoundOverPPSettings; // 0xc90
	FPostProcessSettings MatchOverPPSettings; // 0xdf4
	uint32_t bEnableMotionBlur : 1; // 0xf58
	uint32_t FullMotionBlur : 1; // 0xf58
	uint32_t MatrialOverlap : 1; // 0xf58
	float RunMaxVelocity; // 0xf5c
	float RunMotionBlurAmount; // 0xf60
	float RunMotionBlurSoftEdge; // 0xf64
	float RunCamRotationThreshold; // 0xf68
	float RunCamTranslationThreshold; // 0xf6c
	float RunInterpolationDuration; // 0xf70
	float ExposedBlendInTime; // 0xf74
	float ExposedDuration; // 0xf78
	float ExposedBlendOutTime; // 0xf7c
	float ExposedInterpolationDuration; // 0xf80
	float ExposedDesaturation; // 0xf84
	FVector ExposedHighLights; // 0xf88
	FVector ExposedMidTones; // 0xf94
	FVector ExposedShadows; // 0xfa0
	float FlashbangBlendInTime; // 0xfac
	float FlashbangDuration; // 0xfb0
	float FlashbangBlendOutTime; // 0xfb4
	float FlashbangInterpolationDuration; // 0xfb8
	float FlashbangDesaturation; // 0xfbc
	FVector FlashbangHighLights; // 0xfc0
	FVector FlashbangMidTones; // 0xfcc
	FVector FlashbangShadows; // 0xfd8
	float BlendTotalTime; // 0xfe4
	float CurrentBlendTime; // 0xfe8
	ObjectProperty MatFlashbang; // 0xfec
	ObjectProperty texCaptureFlashbang; // 0xff4
	float WarmupBlendInTime; // 0xffc
	float WarmupDuration; // 0x1000
	float WarmupBlendOutTime; // 0x1004
	float WarmupInterpolationDuration; // 0x1008
	float WarmupDesaturation; // 0x100c
	FVector WarmupHighLights; // 0x1010
	FVector WarmupMidTones; // 0x101c
	FVector WarmupShadows; // 0x1028
	float CountdownBlendInTime; // 0x1034
	float CountdownDuration; // 0x1038
	float CountdownBlendOutTime; // 0x103c
	float CountdownInterpolationDuration; // 0x1040
	float CountdownDesaturation; // 0x1044
	FVector CountdownHighLights; // 0x1048
	FVector CountdownMidTones; // 0x1054
	FVector CountdownShadows; // 0x1060
	float RoundBlendInTime; // 0x106c
	float RoundDuration; // 0x1070
	float RoundBlendOutTime; // 0x1074
	float RoundInterpolationDuration; // 0x1078
	float RoundDesaturation; // 0x107c
	FVector RoundHighLights; // 0x1080
	FVector RoundMidTones; // 0x108c
	FVector RoundShadows; // 0x1098
	float RoundOverBlendInTime; // 0x10a4
	float RoundOverDuration; // 0x10a8
	float RoundOverBlendOutTime; // 0x10ac
	float RoundOverInterpolationDuration; // 0x10b0
	float RoundOverDesaturation; // 0x10b4
	FVector RoundOverHighLights; // 0x10b8
	FVector RoundOverMidTones; // 0x10c4
	FVector RoundOverShadows; // 0x10d0
	float MatchOverBlendInTime; // 0x10dc
	float MatchOverDuration; // 0x10e0
	float MatchOverBlendOutTime; // 0x10e4
	float MatchOverInterpolationDuration; // 0x10e8
	float MatchOverDesaturation; // 0x10ec
	FVector MatchOverHighLights; // 0x10f0
	FVector MatchOverMidTones; // 0x10fc
	FVector MatchOverShadows; // 0x1108
	float FPMaxVelocity; // 0x1114
	float FPMotionBlurAmount; // 0x1118
	float FPMotionBlurSoftEdge; // 0x111c
	float FPCamRotationThreshold; // 0x1120
	float FPCamTranslationThreshold; // 0x1124
	float FPInterpolationDuration; // 0x1128
	TArray<FAdvancedColorSenseStruct> AdvancedColorSense; // 0x112c
};

struct UCCSBTMoveIntoBestCover : UCCSBTMoveIntoCover {
	float IdealShootingDistance; // 0xc4
	uint32_t ExcludeCurrentCover : 1; // 0xc8
};

struct UCombatHUD_OccupiedArea : UCombatHUD_GameObject {
	ObjectProperty AreaVolume; // 0x1b0
};

struct USpeedTree : UObject {
	uint32_t bLegacySpeedTree : 1; // 0x60
	FPointer SRH; // 0x64
	float LeafStaticShadowOpacity; // 0x6c
	ObjectProperty Branch1Material; // 0x70
	ObjectProperty Branch2Material; // 0x78
	ObjectProperty FrondMaterial; // 0x80
	ObjectProperty LeafCardMaterial; // 0x88
	ObjectProperty LeafMeshMaterial; // 0x90
	ObjectProperty BillboardMaterial; // 0x98
	float WindStrength; // 0xa0
	FVector WindDirection; // 0xa4
};

struct UCombatAIActionNode_SelectTarget : UCombatAIActionNodeBase {
	float VisibleWeight; // 0xf4
	float DistanceWeight; // 0xf8
	float OrientWeight; // 0xfc
	float RecentlyDamagedWeight; // 0x100
	TArray<FSClassAgroScore> ClassAgroScores; // 0x104
};

struct AWaterVolume : APhysicsVolume {
	ObjectProperty EntrySound; // 0x2d0
	AActor* EntryActor; // 0x2d8
	ObjectProperty ExitSound; // 0x2e0
	AActor* ExitActor; // 0x2e8
};

struct UGripActionNode_Shoot : UCombatAIActionNodeBase {
	ECurAITarget CurAITarget; // 0xf4
	int32_t FireCountPerBurst; // 0xf8
	int32_t BurstCount; // 0xfc
	float DelayBetweenBursts; // 0x100
	int32_t CurBurstCount; // 0x104
	float LastBurstTime; // 0x108
};

struct UMCPBase : UMcpServiceBase {
	FPointer VfTable_FTickableObject; // 0x78
};

struct USoundNodeWaveParam : USoundNode {
	FName WaveParameterName; // 0x74
};

struct USceneCaptureReflectComponent : USceneCaptureComponent {
	ObjectProperty TextureTarget; // 0xd0
	float ScaleFOV; // 0xd8
};

struct UCombatDataTableRefCrosshair : UCombatDataTableType {
	int32_t Id; // 0x6c
	uint32_t DotOnly : 1; // 0x70
	uint32_t UseCenterDot : 1; // 0x70
	char BasicCrosshairType; // 0x74
	char Thickness; // 0x75
};

struct UGFxAction_OpenMovie : USequenceAction {
	ObjectProperty Movie; // 0x108
	UGFxMoviePlayer* MoviePlayerClass; // 0x110
	ObjectProperty MoviePlayer; // 0x118
	uint32_t bTakeFocus : 1; // 0x120
	uint32_t bCaptureInput : 1; // 0x120
	uint32_t bStartPaused : 1; // 0x120
	uint32_t bEnableGammaCorrection : 1; // 0x120
	uint32_t bDisplayWithHudOff : 1; // 0x120
	GFxRenderTextureMode RenderTextureMode; // 0x124
	ObjectProperty RenderTexture; // 0x128
	TArray<FName> CaptureKeys; // 0x130
	TArray<FName> FocusIgnoreKeys; // 0x140
};

struct ACombatPlayerReplicationInfoBase : APlayerReplicationInfo {
	ObjectProperty CachedPawn; // 0x324
	ObjectProperty KillerForOutline; // 0x32c
	uint32_t bIsLive : 1; // 0x334
	uint32_t bClientExposedByLocalPlayer : 1; // 0x334
	uint32_t bClientExposedByUAV : 1; // 0x334
	FBasePlayerStateForHUDInfo BasePlayerStateForHUDList[0x5]; // 0x338
	FCurrentPlayerStateForHUDInfo CurrentHUDPlayerStateList[0x5]; // 0x374
	int32_t KillerOutlineManagedID; // 0x39c
	ObjectProperty KillerCachedPawn; // 0x3a0
};

struct UPointLightComponent : ULightComponent {
	float ShadowRadiusMultiplier; // 0x1a8
	float Radius; // 0x1ac
	float FalloffExponent; // 0x1b0
	float ShadowFalloffExponent; // 0x1b4
	float MinShadowFalloffRadius; // 0x1b8
	FMatrix CachedParentToWorld; // 0x1c0
	FVector Translation; // 0x200
	FPlane ShadowPlane; // 0x210
	ComponentProperty PreviewLightRadius; // 0x220
	FLightmassPointLightSettings LightmassSettings; // 0x228
	ComponentProperty PreviewLightSourceRadius; // 0x238
};

struct USeqEvent_LOS : USequenceEvent {
	float ScreenCenterDistance; // 0x128
	float TriggerDistance; // 0x12c
	uint32_t bCheckForObstructions : 1; // 0x130
};

struct USVehicleSimCar : USVehicleSimBase {
	float ChassisTorqueScale; // 0xc0
	FInterpCurveFloat MaxSteerAngleCurve; // 0xc4
	float SteerSpeed; // 0xd8
	float ReverseThrottle; // 0xdc
	float EngineBrakeFactor; // 0xe0
	float MaxBrakeTorque; // 0xe4
	float StopThreshold; // 0xe8
	uint32_t bIsDriving : 1; // 0xec
	float ActualSteering; // 0xf0
	float TimeSinceThrottle; // 0xf4
};

struct ULocalPlayer : UPlayer {
	FPointer VfTable_FObserverInterface; // 0x8c
	int32_t ControllerId; // 0x94
	ObjectProperty ViewportClient; // 0x98
	FVector2D Origin; // 0xa0
	FVector2D Size; // 0xa8
	ObjectProperty PlayerPostProcess; // 0xb0
	TArray<ObjectProperty> PlayerPostProcessChains; // 0xb8
	uint32_t bForceDefaultPostProcessChain : 1; // 0xc8
	uint32_t bWantToResetToMapDefaultPP : 1; // 0xc8
	uint32_t bSentSplitJoin : 1; // 0xc8
	uint32_t bPendingServerAuth : 1; // 0xc8
	FPointer ViewState; // 0xcc
	FPointer ViewState2; // 0xd4
	FSynchronizedActorVisibilityHistory ActorVisibilityHistory; // 0xdc
	FVector LastViewLocation; // 0xec
	FCurrentPostProcessVolumeInfo CurrentPPInfo; // 0xf8
	FCurrentPostProcessVolumeInfo LevelPPInfo; // 0x26c
	TArray<FPostProcessSettingsOverride> ActivePPOverrides; // 0x3e0
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x3f0
	FString LastMap; // 0x3f4
	ObjectProperty TagContext; // 0x404
	TScriptInterface<Class> CachedAuthInt; // 0x40c
	float ServerAuthTimestamp; // 0x41c
	int32_t ServerAuthTimeout; // 0x420
	int32_t ServerAuthRetryCount; // 0x424
	int32_t MaxServerAuthRetryCount; // 0x428
	FUniqueNetId ServerAuthUID; // 0x42c
};

struct UCombatAnimNodeSeqHitDirection : UCombatAnimNodeSequence {
	FName DefaultAnim; // 0x16c
	FName LeftAnim; // 0x174
	FName RightAnim; // 0x17c
	FName FrontAnim; // 0x184
	FName BackAnim; // 0x18c
	FName FrontLeftAnim; // 0x194
	FName FrontRightAnim; // 0x19c
	FName BackLeftAnim; // 0x1a4
	FName BackRightAnim; // 0x1ac
	char RandomFactor; // 0x1b4
	EDirectionalSeqMode DirMode; // 0x1b5
	char LastDirIdx; // 0x1b6
	float FrontHitThreshold; // 0x1b8
	float DirAngle; // 0x1bc
	float SliderPosition; // 0x1c0
	ObjectProperty OwnerPawn; // 0x1c4
};

struct UCombatDataTableRefTierSeason : UCombatDataTableType {
	FString ModeCodeName; // 0x6c
	FString TierCodeName; // 0x7c
	int32_t SeasonStringID; // 0x8c
	FString SeasonNumber; // 0x90
};

struct AMutator : AInfo {
	ObjectProperty NextMutator; // 0x244
	TArray<FString> GroupNames; // 0x24c
	uint32_t bUserAdded : 1; // 0x25c
};

struct AApexDestructibleActor : AActor {
	ComponentProperty LightEnvironment; // 0x244
	uint32_t bFractureMaterialOverride : 1; // 0x24c
	TArray<ObjectProperty> FractureMaterials; // 0x250
	ComponentProperty StaticDestructibleComponent; // 0x260
	int32_t LOD; // 0x268
	TArray<char> VisibilityFactors; // 0x26c
	TArray<ObjectProperty> FractureSounds; // 0x27c
	TArray<ObjectProperty> FractureParticleEffects; // 0x28c
};

struct UCCSBTSimpleFlee : UCCSBTScriptBehavior {
	float FleeDistance; // 0xd4
	FVector CachedEnemyPosition; // 0xd8
	FVector CachedPawnPosition; // 0xe4
	uint32_t CachedResult : 1; // 0xf0
	float CachedMaxDist2D; // 0xf4
	ObjectProperty MoveToHandle; // 0xf8
};

struct UCombatHUD_CharacterInfo : UCombatHUDEntity_Base {
	int32_t LastHealth; // 0xc0
	int32_t LastHealthMax; // 0xc4
	FString LastRankName; // 0xc8
	FString LastRankIconPath; // 0xd8
	int32_t LastPositionType; // 0xe8
};

struct UMaterialExpressionFontSample : UMaterialExpression {
	ObjectProperty Font; // 0xb0
	int32_t FontTexturePage; // 0xb8
};

struct UPBRuleNodeSplit : UPBRuleNodeBase {
	EProcBuildingAxis SplitAxis; // 0x70
	TArray<FRBSplitInfo> SplitSetup; // 0x74
};

struct UCombatHUD_ChampionshipSpectatedPlayerInfo : UCombatHUDEntity_Base {
	FString LastPlayerName; // 0xc0
};

struct USeqAct_AttachToEvent : USequenceAction {
	uint32_t bPreferController : 1; // 0x108
};

struct UCombatDynamicDecal : UDecalComponent {
	ObjectProperty MITV_Decal; // 0x3d0
	ObjectProperty MIC_Decal; // 0x3d8
	float Lifetime; // 0x3e0
};

struct UParticleModuleKillHeight : UParticleModuleKillBase {
	FRawDistributionFloat Height; // 0x68
	uint32_t bAbsolute : 1; // 0x8c
	uint32_t bFloor : 1; // 0x8c
	uint32_t bApplyPSysScale : 1; // 0x8c
};

struct USeqVar_Vector : USequenceVariable {
	FVector VectValue; // 0xa0
};

struct UParticleModuleUberRainSplashA : UParticleModuleUberBase {
	FRawDistributionFloat Lifetime; // 0x78
	FRawDistributionVector StartSize; // 0x9c
	FRawDistributionVector StartRotation; // 0xc0
	uint32_t bInheritParent : 1; // 0xe4
	uint32_t MultiplyX : 1; // 0xe4
	uint32_t MultiplyY : 1; // 0xe4
	uint32_t MultiplyZ : 1; // 0xe4
	FRawDistributionVector LifeMultiplier; // 0xe8
	FRawDistributionVector ColorOverLife; // 0x10c
	FRawDistributionFloat AlphaOverLife; // 0x130
};

struct USeqAct_CastToInt : USeqAct_SetSequenceVariable {
	uint32_t bTruncate : 1; // 0x108
	float Value; // 0x10c
	int32_t IntResult; // 0x110
};

struct ACombatCubeMapBoxVolume : AVolume {
	FBoxSphereBounds BrushBounds; // 0x280
	FVector BoxMin; // 0x29c
	FVector BoxMax; // 0x2a8
};

struct UDistributionFloatUniform : UDistributionFloat {
	float Min; // 0x7c
	float Max; // 0x80
};

struct UParticleModuleTypeDataMesh : UParticleModuleTypeDataBase {
	ObjectProperty Mesh; // 0x68
	uint32_t CastShadows : 1; // 0x70
	uint32_t DoCollisions : 1; // 0x70
	uint32_t bAllowMotionBlur : 1; // 0x70
	uint32_t bOverrideMaterial : 1; // 0x70
	uint32_t bCameraFacing : 1; // 0x70
	uint32_t bApplyParticleRotationAsSpin : 1; // 0x70
	EMeshScreenAlignment MeshAlignment; // 0x74
	EParticleAxisLock AxisLockOption; // 0x75
	EMeshCameraFacingUpAxis CameraFacingUpAxisOption; // 0x76
	EMeshCameraFacingOptions CameraFacingOption; // 0x77
	float Pitch; // 0x78
	float Roll; // 0x7c
	float Yaw; // 0x80
};

struct UCCSBTOrientTowardTarget : UGripBTNode {
	ECCSAlertnessState Alertness; // 0xbc
};

struct ACombatLCTFGame : ACombatPVPGame {
	float EnableTouchTime; // 0x788
	FCarriedObjectBounsInfo CarriedObjectBouns; // 0x78c
	TArray<char> AddedFlagPointID; // 0x794
};

struct UGFxInteraction : UInteraction {
	FPointer VfTable_FCallbackEventDevice; // 0xb0
	uint32_t bFakeMobileTouches : 1; // 0xb8
};

struct UCombatCommunityTransaction : UObject {
	ESessionState MySessionState; // 0x60
	uint32_t bMyAFKState : 1; // 0x64
	uint32_t bInMaintenanceScene : 1; // 0x64
	uint32_t bNeedChangeClanPassword : 1; // 0x64
	uint32_t bMessengerVisible : 1; // 0x64
	uint32_t bIsGMChatPenalty : 1; // 0x64
	TMap<None, None> MessengerMap; // 0x68
	int32_t Count_SuggestionList; // 0xb0
	int32_t Count_FriendList; // 0xb4
	int32_t Count_BlockList; // 0xb8
	int32_t ClanID; // 0xbc
	FString ClanName; // 0xc0
	int32_t ClanPoint; // 0xd0
	int32_t ClanLevel; // 0xd4
	FString ClanLevelColor; // 0xd8
	int32_t ClanTotalPoint; // 0xe8
	int32_t ClanMaxMember; // 0xec
	FClanMatchData ClanMatchRecord; // 0xf0
	TMap<None, None> ClanNameMap; // 0x118
	TArray<FClanMatchRecordData> ClanRankMatchRecordDataList; // 0x160
	TArray<FClanMatchRecordData> ClanAMatchRecordDataList; // 0x170
	TArray<FClanMatchRecordData> ClanBMatchRecordDataList; // 0x180
	TArray<FClanMatchRecordData> ClanAllMatchRecordDataList; // 0x190
	int32_t Count_ClanList; // 0x1a0
	WordProperty EmblemID; // 0x1a4
	int32_t ClanColorID; // 0x1a8
	FTimeData ClanRegistrationTime; // 0x1ac
	WordProperty RegionID; // 0x1b4
	int32_t ClanRankPoint; // 0x1b8
	int32_t MyRankPoint; // 0x1bc
	int32_t PrevSeasonRankingPoint; // 0x1c0
	int32_t PrevSeasonRankingTier; // 0x1c4
	TMap<None, None> ClanJoinMemberMap; // 0x1c8
	TArray<FString> LastWhisperList; // 0x210
	WordProperty CCardID; // 0x220
	TMap<None, None> ScrNoticeInfoMap; // 0x224
	float PenaltySec; // 0x26c
};

struct UCombatAIAction_Sleep : UCombatAIActionBase {
	ObjectProperty ActionNode; // 0x78
};

struct UAnimNodeBlendByBase : UAnimNodeBlendList {
	EBaseBlendType Type; // 0x120
	FName ActorTag; // 0x124
	AActor* ActorClass; // 0x12c
	float BlendTime; // 0x134
	ObjectProperty CachedBase; // 0x138
};

struct UUIPropertyDataProvider : UUIDataProvider {
	TArray<UProperty*> ComplexPropertyTypes; // 0x70
	DelegateProperty __CanSupportComplexPropertyType__Delegate; // 0x80
};

struct UCombatFrontEnd_CharacterInfo_BattleTab : UCombatFrontEnd_CharacterInfo_TabBase {
	TArray<int32_t> BattleTabList; // 0x68
};

struct ACombatExplosionActor : AGameExplosionActor {
	ObjectProperty ActiveTimeDilationAnim; // 0x2bc
	ComponentProperty ExplosionParticleComponent; // 0x2c4
	FRotator ExplosionParticleSystemRotation; // 0x2cc
	uint32_t ShowDebugLines : 1; // 0x2d8
};

struct USwatTurnReachSpec : UForcedReachSpec {
	char SpecDirection; // 0xc8
};

struct USceneCaptureComponent : UActorComponent {
	uint32_t bEnabled : 1; // 0x88
	uint32_t bEnablePostProcess : 1; // 0x88
	uint32_t bEnableFog : 1; // 0x88
	uint32_t bUseMainScenePostProcessSettings : 1; // 0x88
	uint32_t bSkipUpdateIfTextureUsersOccluded : 1; // 0x88
	uint32_t bSkipUpdateIfOwnerOccluded : 1; // 0x88
	uint32_t bSkipRenderingDepthPrepass : 1; // 0x88
	FColor ClearColor; // 0x8c
	ESceneCaptureViewMode ViewMode; // 0x90
	int32_t SceneLOD; // 0x94
	float FrameRate; // 0x98
	ObjectProperty PostProcess; // 0x9c
	float MaxUpdateDist; // 0xa4
	float MaxViewDistanceOverride; // 0xa8
	float MaxStreamingUpdateDist; // 0xac
	FPointer CaptureInfo; // 0xb0
	FPointer ViewState; // 0xb8
	TArray<FPointer> PostProcessProxies; // 0xc0
};

struct ULevel : ULevelBase {
	float LightmapTotalSize; // 0x1d8
	float ShadowmapTotalSize; // 0x1dc
};

struct ACombatTDMGameBase : ACombatPVPGame {
	WordProperty SuddenDeathTime; // 0x788
};

struct USeqAct_Gate : USequenceAction {
	uint32_t bOpen : 1; // 0x108
	int32_t AutoCloseCount; // 0x10c
	int32_t CurrentCloseCount; // 0x110
};

struct UCombatHUD_VoiceChatTalking : UCombatHUDEntity_Base {
	TArray<FString> CurrentTalkingUsers; // 0xc0
};

struct UPhysicsLODVerticalEmitter : UObject {
	int32_t ParticlePercentage; // 0x60
};

struct ASVehicle : AVehicle {
	ComponentProperty SimObj; // 0x5d8
	TArray<ComponentProperty> Wheels; // 0x5e0
	FVector COMOffset; // 0x5f0
	FVector InertiaTensorMultiplier; // 0x5fc
	uint32_t bStayUpright : 1; // 0x608
	uint32_t bUseSuspensionAxis : 1; // 0x608
	uint32_t bUpdateWheelShapes : 1; // 0x608
	uint32_t bVehicleOnGround : 1; // 0x608
	uint32_t bVehicleOnWater : 1; // 0x608
	uint32_t bIsInverted : 1; // 0x608
	uint32_t bChassisTouchingGround : 1; // 0x608
	uint32_t bWasChassisTouchingGroundLastTick : 1; // 0x608
	uint32_t bCanFlip : 1; // 0x608
	uint32_t bFlipRight : 1; // 0x608
	uint32_t bIsUprighting : 1; // 0x608
	uint32_t bOutputHandbrake : 1; // 0x608
	uint32_t bHoldingDownHandbrake : 1; // 0x608
	float StayUprightRollResistAngle; // 0x60c
	float StayUprightPitchResistAngle; // 0x610
	float StayUprightStiffness; // 0x614
	float StayUprightDamping; // 0x618
	ObjectProperty StayUprightConstraintSetup; // 0x61c
	ObjectProperty StayUprightConstraintInstance; // 0x624
	float HeavySuspensionShiftPercent; // 0x62c
	float MaxSpeed; // 0x630
	float MaxAngularVelocity; // 0x634
	float TimeOffGround; // 0x638
	float UprightLiftStrength; // 0x63c
	float UprightTorqueStrength; // 0x640
	float UprightTime; // 0x644
	float UprightStartTime; // 0x648
	ComponentProperty EngineSound; // 0x64c
	ComponentProperty SquealSound; // 0x654
	ObjectProperty CollisionSound; // 0x65c
	ObjectProperty EnterVehicleSound; // 0x664
	ObjectProperty ExitVehicleSound; // 0x66c
	float CollisionIntervalSecs; // 0x674
	float SquealThreshold; // 0x678
	float SquealLatThreshold; // 0x67c
	float LatAngleVolumeMult; // 0x680
	float EngineStartOffsetSecs; // 0x684
	float EngineStopOffsetSecs; // 0x688
	float LastCollisionSoundTime; // 0x68c
	float OutputBrake; // 0x690
	float OutputGas; // 0x694
	float OutputSteering; // 0x698
	float OutputRise; // 0x69c
	float ForwardVel; // 0x6a0
	int32_t NumPoweredWheels; // 0x6a4
	FVector BaseOffset; // 0x6a8
	float CamDist; // 0x6b4
	int32_t DriverViewPitch; // 0x6b8
	int32_t DriverViewYaw; // 0x6bc
	FVehicleState VState; // 0x6c0
	float AngErrorAccumulator; // 0x710
	float RadialImpulseScaling; // 0x714
};

struct UCombatDataTableRefARaceEquip : UCombatDataTableType {
	int32_t DataLoadType; // 0x6c
	FString GroupCodeName; // 0x70
	FString PrimaryWeapon; // 0x80
	FString SubWeapon; // 0x90
	FString MeleeWeapon; // 0xa0
	FString ETCWeapon; // 0xb0
	FString ChipA; // 0xc0
};

struct UScriptViewportClient : UObject {
	FPointer VfTable_FViewportClient; // 0x60
};

struct UNavMeshGoalFilter_MinPathDistance : UNavMeshGoal_Filter {
	int32_t MinDistancePathShouldBe; // 0x6c
};

struct UParticleModuleMaterialByParameter : UParticleModuleMaterialBase {
	TArray<FName> MaterialParameters; // 0x68
	TArray<ObjectProperty> DefaultMaterials; // 0x78
};

struct USeqCond_CompareBool : USequenceCondition {
	uint32_t bResult : 1; // 0xec
};

struct USoundNodeAttenuation : USoundNode {
	uint32_t bAttenuate : 1; // 0x74
	uint32_t bSpatialize : 1; // 0x74
	uint32_t bAttenuateWithLPF : 1; // 0x74
	float dBAttenuationAtMax; // 0x78
	float OmniRadius; // 0x7c
	SoundDistanceModel DistanceAlgorithm; // 0x80
	ESoundDistanceCalc DistanceType; // 0x81
	float RadiusMin; // 0x84
	float RadiusMax; // 0x88
	float LPFRadiusMin; // 0x8c
	float LPFRadiusMax; // 0x90
};

struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	FUntypedBulkData_Mirror CollisionHeightData; // 0x250
	TArray<FName> ComponentLayers; // 0x290
	FUntypedBulkData_Mirror DominantLayerData; // 0x2a0
	int32_t SectionBaseX; // 0x2e0
	int32_t SectionBaseY; // 0x2e4
	int32_t CollisionSizeQuads; // 0x2e8
	float CollisionScale; // 0x2ec
	TArray<char> CollisionQuadFlags; // 0x2f0
	TArray<ObjectProperty> PhysicalMaterials; // 0x300
	FPointer RBHeightfield; // 0x310
	FBoxSphereBounds CachedBoxSphereBounds; // 0x318
	uint32_t bIncludeHoles : 1; // 0x334
	uint32_t bHeightFieldDataHasHole : 1; // 0x334
};

struct UCombatAIAction_Roamming : UCombatAIActionBase {
	ObjectProperty ActionNode; // 0x78
	ObjectProperty Goal; // 0x80
	ObjectProperty NextActor; // 0x88
};

struct UCombatHUD_Hostage : UCombatHUD_GameObject {
	ObjectProperty Target; // 0x1b0
	ObjectProperty HPStateBarMC; // 0x1b8
	ObjectProperty HPMC; // 0x1c0
	int32_t LastDisplayHealth; // 0x1c8
	uint32_t LastGodMode : 1; // 0x1cc
};

struct UCombatFrontEnd_MainLobby : UCombatFrontEnd_Scene {
	FButtonInfo SortButtonList[0x7]; // 0xd0
	FButtonInfo RoomButtonList[0x5]; // 0x15c
	ObjectProperty LobbyTran; // 0x1c0
	ObjectProperty MatchMemberClass; // 0x1c8
	int32_t SelectMatchRoomNumber; // 0x1d0
	int32_t EnterMatchRoomNumber; // 0x1d4
};

struct UGripCondNode_TargetExistence : UGripConditionNode {
	ECurAITarget CurAITarget; // 0xec
	uint32_t bNegative : 1; // 0xf0
};

struct ACameraLocationPoint : AActor {
	float CameraActorFOV; // 0x244
	FPostProcessSettings CameraActorOverridePostProcess; // 0x248
};

struct UPath_AvoidInEscapableNodes : UPathConstraint {
	int32_t Radius; // 0x6c
	int32_t Height; // 0x70
	int32_t MaxFallSpeed; // 0x74
	int32_t MoveFlags; // 0x78
};

struct UParticleModuleAttractorParticle : UParticleModuleAttractorBase {
	FName EmitterName; // 0x68
	FRawDistributionFloat Range; // 0x70
	uint32_t bStrengthByDistance : 1; // 0x94
	uint32_t bAffectBaseVelocity : 1; // 0x94
	uint32_t bRenewSource : 1; // 0x94
	uint32_t bInheritSourceVel : 1; // 0x94
	FRawDistributionFloat Strength; // 0x98
	EAttractorParticleSelectionMethod SelectionMethod; // 0xbc
	int32_t LastSelIndex; // 0xc0
};

struct ANxGenericForceFieldBrush : AVolume {
	int32_t ExcludeChannel; // 0x280
	FRBCollisionChannelContainer CollideWithChannels; // 0x284
	ERBCollisionChannel RBChannel; // 0x288
	FFB_ForceFieldCoordinates Coordinates; // 0x289
	FVector Constant; // 0x28c
	FVector PositionMultiplierX; // 0x298
	FVector PositionMultiplierY; // 0x2a4
	FVector PositionMultiplierZ; // 0x2b0
	FVector PositionTarget; // 0x2bc
	FVector VelocityMultiplierX; // 0x2c8
	FVector VelocityMultiplierY; // 0x2d4
	FVector VelocityMultiplierZ; // 0x2e0
	FVector VelocityTarget; // 0x2ec
	FVector Noise; // 0x2f8
	FVector FalloffLinear; // 0x304
	FVector FalloffQuadratic; // 0x310
	float TorusRadius; // 0x31c
	FPointer ForceField; // 0x320
	TArray<FPointer> ConvexMeshes; // 0x328
	TArray<FPointer> ExclusionShapes; // 0x338
	TArray<FPointer> ExclusionShapePoses; // 0x348
	FPointer LinearKernel; // 0x358
};

struct ACombatBotReplicationInfo : ACombatPlayerReplicationInfoBase {
	int32_t SpawnerID; // 0x3a8
	int32_t Cost; // 0x3ac
	int32_t BotGroupID; // 0x3b0
	int32_t BotID; // 0x3b4
};

struct ANxForceFieldRadial : ANxForceField {
	ObjectProperty Shape; // 0x298
	ComponentProperty DrawComponent; // 0x2a0
	float ForceStrength; // 0x2a8
	float ForceRadius; // 0x2ac
	float SelfRotationStrength; // 0x2b0
	ERadialImpulseFalloff ForceFalloff; // 0x2b4
	FPointer Kernel; // 0x2b8
};

struct ACombatGame : ACombatGameFrame {
	UCombatGameMessage* CombatGameMessageClass; // 0x4c0
	UCombatLocalMessage* CombatErrorMessageClass; // 0x4c8
	UCombatStatStorageBase* CombatStatStorageClass; // 0x4d0
	ACombatPlayerReplicationInfoBase* BotReplicationInfoClass; // 0x4d8
	UCombatGameScore* CombatGameScoreClass; // 0x4e0
	char ModeDifficulty; // 0x4e8
	ERoundResultReason RoundResultReason; // 0x4e9
	char RankSystemID; // 0x4ea
	char BindRegion; // 0x4eb
	EMatchType e_MatchType; // 0x4ec
	ObjectProperty SentinelManager; // 0x4f0
	uint32_t bUseSentinel : 1; // 0x4f8
	uint32_t bCheckForceGameOver : 1; // 0x4f8
	uint32_t bSupportsRespawn : 1; // 0x4f8
	uint32_t bCountDown : 1; // 0x4f8
	uint32_t bDirtyRoundOverCheck : 1; // 0x4f8
	uint32_t bCanBeBaseForPawns : 1; // 0x4f8
	uint32_t bIsWarmupHolding : 1; // 0x4f8
	uint32_t bUseClassSystem : 1; // 0x4f8
	uint32_t bInitPSListInGroup : 1; // 0x4f8
	uint32_t bCanTeamChange : 1; // 0x4f8
	uint32_t bIsBlockingJoin : 1; // 0x4f8
	uint32_t bUseParachuteRespawn : 1; // 0x4f8
	uint32_t bForfeitedMatch : 1; // 0x4f8
	uint32_t bSkipSkillLicense : 1; // 0x4f8
	uint32_t bOpenNewMatch : 1; // 0x4f8
	uint32_t bDemoRec : 1; // 0x4f8
	uint32_t bInfiniteWeaponReload : 1; // 0x4f8
	TArray<ACombatPlayerStart*> PlayerStartClass; // 0x4fc
	TArray<FString> PlayerStartClassPath; // 0x50c
	FString SavePortal; // 0x51c
	TArray<int32_t> ReadiedPlayerList; // 0x52c
	int32_t GoalRound; // 0x53c
	int32_t GoalMission; // 0x540
	WordProperty TimeLimitSec; // 0x544
	int32_t InitCR; // 0x548
	float DefaultInvulnerableTime; // 0x54c
	TArray<float> RespawnDelay; // 0x550
	float DroppedWeaponLifeSpan; // 0x560
	float ReasonMsgWaitTime; // 0x564
	float WinnerMsgWaitTime; // 0x568
	float RestartWait; // 0x56c
	float MatchEndWait; // 0x570
	float MatchWarmingupTime; // 0x574
	float CompetitiveMatchWarmingupTime; // 0x578
	float CompetitiveMatchWarmingupMinimumTime; // 0x57c
	float TempSecTime; // 0x580
	ObjectProperty CBLog; // 0x584
	int32_t GameLogID; // 0x58c
	TArray<FInactiveStatInfo> InactiveStatArray; // 0x590
	TArray<FForbiddenWeapon> ForbiddenWeaponList; // 0x5a0
	TArray<EWeaponGroup> ForbiddenEWeaponGroup; // 0x5b0
	TArray<RISSlot> ForbiddenRISList; // 0x5c0
	float HealthModifier; // 0x5d0
	int32_t BotSpawnCount; // 0x5d4
	int32_t ClassSelectCondition; // 0x5d8
	TArray<ObjectProperty> PendingPlayers; // 0x5dc
	TArray<ObjectProperty> CombatPCs; // 0x5ec
	ObjectProperty CBGRI; // 0x5fc
	TArray<ObjectProperty> PSListInGroup; // 0x604
	ObjectProperty CombatDBManager; // 0x614
	int32_t MapID; // 0x61c
	int32_t ModeID; // 0x620
	float TeamChangeMsgWaitTime; // 0x624
	TArray<FClientConnectionInfo> ClientConnections; // 0x628
	float JoinBlockConditionTime; // 0x638
	float JoinBlockConditionScore; // 0x63c
	float BlockJoinCheckTime; // 0x640
	FString GameModeGuideStr; // 0x644
	float LastTestMessageTime; // 0x654
	TArray<FString> PengindTestMessageList; // 0x658
	int32_t StartedMemberCount; // 0x668
	TArray<FString> SavePRIStatModeList; // 0x66c
};

struct ACBWeaponAttachment_ParachuteBase : ACBWeaponAttachment_ETC {
	float TranslationOffset; // 0x424
};

struct AGamePawn : APawn {
	uint32_t bLastHitWasHeadShot : 1; // 0x558
	uint32_t bRespondToExplosions : 1; // 0x558
};

struct UCombatStatDataStore : UObject {
	FName EventType; // 0x60
	int32_t OldRank; // 0x68
	int32_t newRank; // 0x6c
	int32_t ScoringTableIndex; // 0x70
	UDamageType* DamageType; // 0x74
	ObjectProperty Weapon; // 0x7c
	float RespawnTime; // 0x84
	int32_t WeaponID; // 0x88
	eStatType_HitPart HitPart; // 0x8c
	float LoginTime; // 0x90
	float MatchStartTime; // 0x94
	FStatSaveCondition SaveCondition; // 0x98
	ObjectProperty PRI; // 0x9c
	uint32_t bDesertion : 1; // 0xa4
	uint32_t bWinner : 1; // 0xa4
	float SavedPlayTime; // 0xa8
	float SavedRespawnTime; // 0xac
};

struct UMcpServiceConfig : UObject {
	FString Protocol; // 0x60
	FString Domain; // 0x70
	FString TitleId; // 0x80
	FString AppKey; // 0x90
	FString AppSecret; // 0xa0
};

struct USeqEvent_TakeDamage : USequenceEvent {
	float MinDamageAmount; // 0x128
	float DamageThreshold; // 0x12c
	TArray<UDamageType*> DamageTypes; // 0x130
	TArray<UDamageType*> IgnoreDamageTypes; // 0x140
	float CurrentDamage; // 0x150
	uint32_t bResetDamageOnToggle : 1; // 0x154
};

struct UInterpTrackInstFloatProp : UInterpTrackInstProperty {
	FPointer FloatProp; // 0x70
	float ResetFloat; // 0x78
	FPointer DistributionProp; // 0x7c
};

struct USeqAct_AccessObjectList : USeqAct_SetSequenceVariable {
	ObjectProperty OutputObject; // 0x108
	int32_t ObjectIndex; // 0x110
};

struct UMobileMenuObject : UObject {
	uint32_t bHasBeenInitialized : 1; // 0x60
	uint32_t bRelativeLeft : 1; // 0x60
	uint32_t bRelativeTop : 1; // 0x60
	uint32_t bRelativeWidth : 1; // 0x60
	uint32_t bRelativeHeight : 1; // 0x60
	uint32_t bApplyGlobalScaleLeft : 1; // 0x60
	uint32_t bApplyGlobalScaleTop : 1; // 0x60
	uint32_t bApplyGlobalScaleWidth : 1; // 0x60
	uint32_t bApplyGlobalScaleHeight : 1; // 0x60
	uint32_t bHeightRelativeToWidth : 1; // 0x60
	uint32_t bXOffsetIsActual : 1; // 0x60
	uint32_t bYOffsetIsActual : 1; // 0x60
	uint32_t bIsActive : 1; // 0x60
	uint32_t bIsHidden : 1; // 0x60
	uint32_t bIsTouched : 1; // 0x60
	uint32_t bIsHighlighted : 1; // 0x60
	uint32_t bTellSceneBeforeRendering : 1; // 0x60
	float Left; // 0x64
	float Top; // 0x68
	float Width; // 0x6c
	float Height; // 0x70
	float InitialLeft; // 0x74
	float InitialTop; // 0x78
	float InitialWidth; // 0x7c
	float InitialHeight; // 0x80
	float AuthoredGlobalScale; // 0x84
	float TopLeeway; // 0x88
	float BottomLeeway; // 0x8c
	float LeftLeeway; // 0x90
	float RightLeeway; // 0x94
	float XOffset; // 0x98
	float YOffset; // 0x9c
	FString Tag; // 0xa0
	ObjectProperty InputOwner; // 0xb0
	float Opacity; // 0xb8
	ObjectProperty OwnerScene; // 0xbc
	FString RelativeToTag; // 0xc4
	ObjectProperty RelativeTo; // 0xd4
};

struct USceneCapture2DComponent : USceneCaptureComponent {
	ObjectProperty TextureTarget; // 0xd0
	float FieldOfView; // 0xd8
	float NearPlane; // 0xdc
	float FarPlane; // 0xe0
	uint32_t bUpdateMatrices : 1; // 0xe4
	FMatrix ViewMatrix; // 0xf0
	FMatrix ProjMatrix; // 0x130
};

struct USeqAct_ControlMovieTexture : USequenceAction {
	ObjectProperty MovieTexture; // 0x108
};

struct UCombatDataTableRefSteamItem : UCombatDataTableType {
	FString ITEM_CODE_NAME; // 0x6c
};

struct USeqAct_GameCrowdPopulationManagerToggle : USequenceAction {
	float WarmupPopulationPct; // 0x108
	ObjectProperty CrowdAgentList; // 0x10c
	uint32_t bClearOldArchetypes : 1; // 0x114
	uint32_t bEnableCrowdLightEnvironment : 1; // 0x114
	uint32_t bCastShadows : 1; // 0x114
	uint32_t bFillPotentialSpawnPoints : 1; // 0x114
	uint32_t bForceObstacleChecking : 1; // 0x114
	uint32_t bForceNavMeshPathing : 1; // 0x114
	uint32_t bIndividualSpawner : 1; // 0x114
	int32_t MaxAgents; // 0x118
	float SpawnRate; // 0x11c
	FLightingChannelContainer AgentLightingChannel; // 0x120
	float MaxSpawnDist; // 0x124
	float MinBehindSpawnDist; // 0x128
	TArray<ObjectProperty> PotentialSpawnPoints; // 0x12c
	float AgentWarmupTime; // 0x13c
	int32_t NumAgentsToTickPerFrame; // 0x140
	TArray<ObjectProperty> LastSpawnedList; // 0x144
};

struct UPartyBeaconHost : UPartyBeacon {
	TArray<FClientBeaconConnection> Clients; // 0x98
	int32_t NumTeams; // 0xa8
	int32_t NumPlayersPerTeam; // 0xac
	int32_t NumReservations; // 0xb0
	int32_t NumConsumedReservations; // 0xb4
	TArray<FPartyReservation> Reservations; // 0xb8
	FName OnlineSessionName; // 0xc8
	int32_t ConnectionBacklog; // 0xd0
	int32_t ForceTeamNum; // 0xd4
	int32_t ReservedHostTeamNum; // 0xd8
	uint32_t bBestFitTeamAssignment : 1; // 0xdc
	EPartyBeaconHostState BeaconState; // 0xe0
	DelegateProperty __OnReservationChange__Delegate; // 0xe4
	DelegateProperty __OnReservationsFull__Delegate; // 0xf4
	DelegateProperty __OnClientCancellationReceived__Delegate; // 0x104
};

struct UCombatDataTableRefRandomBoxCost : UCombatDataTableType {
	FString ItemCodeName; // 0x6c
	int32_t BoxResourceIndex; // 0x7c
	uint32_t bChangeScene : 1; // 0x80
};

struct UInterpTrackInstColorProp : UInterpTrackInstProperty {
	FPointer ColorProp; // 0x70
	FColor ResetColor; // 0x78
};

struct UOnlineStatsRead : UOnlineStats {
	int32_t ViewId; // 0x70
	int32_t SortColumnId; // 0x74
	TArray<int32_t> ColumnIds; // 0x78
	int32_t TotalRowsInView; // 0x88
	TArray<FOnlineStatsRow> Rows; // 0x8c
	TArray<FColumnMetaData> ColumnMappings; // 0x9c
	FString ViewName; // 0xac
	int32_t TitleId; // 0xbc
};

struct UCombatHUD_Preset : UCombatHUD_PresetSelectScene {
	FString DescriptionStr; // 0xc0
	ObjectProperty DescriptionMC; // 0xd0
};

struct UCombatCameraThirdPersonCameraMode_Dead : UCombatCameraThirdPersonCameraMode_default {
	FName TargetBoneName; // 0x268
	float DistanceFromTarget; // 0x270
	float CamHeightOffset; // 0x274
	float MaxCamPitchLimit; // 0x278
	uint32_t bFollowKillerPawn : 1; // 0x27c
	uint32_t bDrawDebug : 1; // 0x27c
	float FollowKillerPawnDelayTime; // 0x280
	float FollowKillerPawnDuration; // 0x284
	float KillerPawnHeightOffset; // 0x288
	float DeathCamRotInterpSpeed; // 0x28c
	float DeathCamInterpolationTime; // 0x290
	float DeathCamInterpolationExp; // 0x294
	ObjectProperty DeadCamAnim; // 0x298
	float DeadCamAnimBlendInTime; // 0x2a0
	float DeadCamAnimBlendOutTime; // 0x2a4
	FVector DeathCamStartLocation; // 0x2a8
	FVector DeathCamEndLocation; // 0x2b4
	FRotator DeathCamRotation; // 0x2c0
	float ActiveTimeSeconds; // 0x2cc
	int32_t UnrealMaxCamPitchLimit; // 0x2d0
};

struct USeqAct_SetMatInstScalarParam : USequenceAction {
	ObjectProperty MatInst; // 0x108
	FName ParamName; // 0x110
	float ScalarValue; // 0x118
};

struct UParticleModuleColorScaleOverLife : UParticleModuleColorBase {
	FRawDistributionVector ColorScaleOverLife; // 0x68
	FRawDistributionFloat AlphaScaleOverLife; // 0x8c
	uint32_t bEmitterTime : 1; // 0xb0
};

struct UParticleModuleSizeScale : UParticleModuleSizeBase {
	FRawDistributionVector SizeScale; // 0x68
	uint32_t EnableX : 1; // 0x8c
	uint32_t EnableY : 1; // 0x8c
	uint32_t EnableZ : 1; // 0x8c
};

struct ACombatWaveBotController : ACombatBotController_GuyBase {
	float LastJumpOverWallTime; // 0x5e8
};

struct UCombatAnimNotify_HideBone : UAnimNotify {
	FName TargetBoneName; // 0x60
	uint32_t bHideBone : 1; // 0x68
	float NotifyDuration; // 0x6c
};

struct USeqAct_Latent : USequenceAction {
	TArray<ObjectProperty> LatentActors; // 0x108
	uint32_t bAborted : 1; // 0x118
	float LatentActivationTime; // 0x11c
};

struct UCombatDataRefAttend : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString CodeName; // 0x70
	int32_t Day; // 0x80
	FString RewardTableCodeName; // 0x84
};

struct UParticleModuleTypeDataTrail : UParticleModuleTypeDataBase {
	uint32_t RenderGeometry : 1; // 0x68
	uint32_t RenderLines : 1; // 0x68
	uint32_t RenderTessellation : 1; // 0x68
	uint32_t Tapered : 1; // 0x68
	uint32_t SpawnByDistance : 1; // 0x68
	int32_t TessellationFactor; // 0x6c
	FRawDistributionFloat Tension; // 0x70
	FVector SpawnDistance; // 0x94
};

struct UCombatFrontEnd_ClanJoinPopup : UCombatFrontEnd_Object {
	uint32_t bNeedInitClanPasswordLabel : 1; // 0xd0
	int32_t nClanID; // 0xd4
	ClanPopupMode PopupMode; // 0xd8
};

struct UAnimationCompressionAlgorithm_PerTrackCompression : UAnimationCompressionAlgorithm_RemoveLinearKeys {
	float MaxZeroingThreshold; // 0x94
	float MaxPosDiffBitwise; // 0x98
	float MaxAngleDiffBitwise; // 0x9c
	TArray<AnimationCompressionFormat> AllowedRotationFormats; // 0xa0
	TArray<AnimationCompressionFormat> AllowedTranslationFormats; // 0xb0
	uint32_t bResampleAnimation : 1; // 0xc0
	uint32_t bUseAdaptiveError : 1; // 0xc0
	uint32_t bUseOverrideForEndEffectors : 1; // 0xc0
	uint32_t bUseAdaptiveError2 : 1; // 0xc0
	float ResampledFramerate; // 0xc4
	int32_t MinKeysForResampling; // 0xc8
	int32_t TrackHeightBias; // 0xcc
	float ParentingDivisor; // 0xd0
	float ParentingDivisorExponent; // 0xd4
	float RotationErrorSourceRatio; // 0xd8
	float TranslationErrorSourceRatio; // 0xdc
	float MaxErrorPerTrackRatio; // 0xe0
	float PerturbationProbeSize; // 0xe4
	FPointer PerReductionCachedData; // 0xe8
};

struct UGameExplosionContent : UObject {
	uint32_t bAutoControllerVibration : 1; // 0x60
	uint32_t bOrientCameraShakeTowardsEpicenter : 1; // 0x60
	ObjectProperty ExplosionSound; // 0x64
	ObjectProperty CamShake; // 0x6c
	ObjectProperty CamShake_Left; // 0x74
	ObjectProperty CamShake_Right; // 0x7c
	ObjectProperty CamShake_Rear; // 0x84
	float CamShakeInnerRadius; // 0x8c
	float CamShakeOuterRadius; // 0x90
	float CamShakeFalloff; // 0x94
	AEmitterCameraLensEffectBase* CameraLensEffect; // 0x98
	float CameraLensEffectRadius; // 0xa0
	ComponentProperty ExploLight; // 0xa4
	float ExploLightFadeOutTime; // 0xac
	ComponentProperty ExploRadialBlur; // 0xb0
	float ExploRadialBlurFadeOutTime; // 0xb8
	float ExploRadialBlurMaxBlur; // 0xbc
	ObjectProperty ParticleEmitterTemplate; // 0xc0
	ObjectProperty FogVolumeArchetype; // 0xc8
};

struct UUIDataProvider_OnlinePlayerStorageArray : UUIDataProvider {
	ObjectProperty PlayerStorage; // 0x70
	int32_t PlayerStorageId; // 0x78
	FString ColumnHeaderText; // 0x7c
	TArray<FName> Values; // 0x8c
};

struct USVehicleSimTank : USVehicleSimCar {
	float LeftTrackVel; // 0xf8
	float RightTrackVel; // 0xfc
	float LeftTrackTorque; // 0x100
	float RightTrackTorque; // 0x104
	float MaxEngineTorque; // 0x108
	float EngineDamping; // 0x10c
	float InsideTrackTorqueFactor; // 0x110
	float SteeringLatStiffnessFactor; // 0x114
	float TurnInPlaceThrottle; // 0x118
	float TurnMaxGripReduction; // 0x11c
	float TurnGripScaleRate; // 0x120
	uint32_t bTurnInPlaceOnSteer : 1; // 0x124
};

struct UCombatDataTableRefCubeBox : UCombatDataTableType {
	FString CubeCodeName; // 0x6c
	int32_t GiveType; // 0x7c
	int32_t ValueMin; // 0x80
	int32_t ValueMax; // 0x84
	FString OutputCodeName; // 0x88
	int32_t JackpotValue; // 0x98
	int32_t OutputGrade; // 0x9c
	int32_t EffectType; // 0xa0
	int32_t FrameType; // 0xa4
	int32_t TagType; // 0xa8
};

struct AZoneInfo : AInfo {
	float KillZ; // 0x244
	float SoftKill; // 0x248
	UKillZDamageType* KillZDamageType; // 0x24c
	uint32_t bSoftKillZ : 1; // 0x254
};

struct UCombatDataTableRefRank : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString CodeName; // 0x70
	int32_t RankName; // 0x80
	FString BigIconName; // 0x84
	FString SmallIconName; // 0x94
	int32_t ImageID_Big; // 0xa4
	int32_t ImageID_Small; // 0xa8
};

struct USkelControl_TwistBone : USkelControlBase {
	FName SourceBoneName; // 0xd0
	float TwistAngleScale; // 0xd8
};

struct ANxTornadoForceFieldCapsule : ANxTornadoForceField {
	ComponentProperty RenderComponent; // 0x2c8
};

struct USpeedTreeActorFactory : UActorFactory {
	ObjectProperty SpeedTree; // 0x9c
};

struct UDownloadableContentManager : UObject {
	TArray<FPointer> DLCConfigCacheChanges; // 0x60
	TArray<FString> InstalledDLC; // 0x70
	FMap_Mirror NonPackageFilePathMap; // 0x80
	TArray<UObject*> ClassesToReload; // 0xc8
	TArray<ObjectProperty> ObjectsToReload; // 0xd8
	TArray<FString> QueuedFullyLoadPackageInis; // 0xe8
	ObjectProperty GameEngine; // 0xf8
	DelegateProperty __OnRefreshComplete__Delegate; // 0x100
};

struct ULightEnvironmentComponent : UActorComponent {
	uint32_t bEnabled : 1; // 0x88
	uint32_t bForceNonCompositeDynamicLights : 1; // 0x88
	uint32_t bAllowDynamicShadowsOnTranslucency : 1; // 0x88
	uint32_t bAllowPreShadow : 1; // 0x88
	uint32_t bTranslucencyShadowed : 1; // 0x88
	float DominantShadowFactor; // 0x8c
	ComponentProperty AffectingDominantLight; // 0x90
	TArray<ComponentProperty> AffectedComponents; // 0x98
};

struct UCBCharInfo : UObject {
	TArray<FCharacterInfo> Characters; // 0x60
	TArray<UCBFamilyInfo*> Families; // 0x70
	float LOD1DisplayFactor; // 0x80
	float LOD2DisplayFactor; // 0x84
	float LOD3DisplayFactor; // 0x88
};

struct UMaterialExpressionComment : UMaterialExpression {
	int32_t PosX; // 0xb0
	int32_t PosY; // 0xb4
	int32_t SizeX; // 0xb8
	int32_t SizeY; // 0xbc
	FString Text; // 0xc0
};

struct UGameCrowdBehavior_RunFromPanic : UGameCrowdAgentBehavior {
	ObjectProperty PanicFocus; // 0x9c
};

struct UActorComponent : UComponent {
	FPointer Scene; // 0x70
	ObjectProperty Owner; // 0x78
	uint32_t bAttached : 1; // 0x80
	uint32_t bTickInEditor : 1; // 0x80
	uint32_t bNeedsReattach : 1; // 0x80
	uint32_t bNeedsUpdateTransform : 1; // 0x80
	ETickingGroup TickGroup; // 0x84
};

struct APrecomputedVisibilityOverrideVolume : AVolume {
	TArray<ObjectProperty> OverrideVisibleActors; // 0x280
	TArray<ObjectProperty> OverrideInvisibleActors; // 0x290
};

struct UTexture : USurface {
	uint32_t SRGB : 1; // 0x60
	uint32_t RGBE : 1; // 0x60
	uint32_t bIsSourceArtUncompressed : 1; // 0x60
	uint32_t CompressionNoAlpha : 1; // 0x60
	uint32_t CompressionNone : 1; // 0x60
	uint32_t CompressionNoMipmaps : 1; // 0x60
	uint32_t CompressionFullDynamicRange : 1; // 0x60
	uint32_t DeferCompression : 1; // 0x60
	uint32_t NeverStream : 1; // 0x60
	uint32_t bDitherMipMapAlpha : 1; // 0x60
	uint32_t bPreserveBorderR : 1; // 0x60
	uint32_t bPreserveBorderG : 1; // 0x60
	uint32_t bPreserveBorderB : 1; // 0x60
	uint32_t bPreserveBorderA : 1; // 0x60
	uint32_t bNoTiling : 1; // 0x60
	uint32_t bForcePVRTC4 : 1; // 0x60
	uint32_t bAsyncResourceReleaseHasBeenStarted : 1; // 0x60
	uint32_t bUseCinematicMipLevels : 1; // 0x60
	uint32_t IsMipmappedSourceArt : 1; // 0x60
	float UnpackMin[0x4]; // 0x64
	float UnpackMax[0x4]; // 0x74
	FUntypedBulkData_Mirror SourceArt; // 0x84
	TextureCompressionSettings CompressionSettings; // 0xc4
	TextureFilter Filter; // 0xc5
	TextureGroup LODGroup; // 0xc6
	TextureGroup CachedLODGroup; // 0xc7
	TextureMipGenSettings MipGenSettings; // 0xc8
	ETextureFilterEdgeType TextureFilterEdgeType; // 0xc9
	int32_t LODBias; // 0xcc
	int32_t CachedCombinedLODBias; // 0xd0
	int32_t NumCinematicMipLevels; // 0xd4
	FPointer Resource; // 0xd8
	float AdjustBrightness; // 0xe0
	float AdjustBrightnessCurve; // 0xe4
	float AdjustVibrance; // 0xe8
	float AdjustSaturation; // 0xec
	float AdjustRGBCurve; // 0xf0
	float AdjustHue; // 0xf4
	int32_t InternalFormatLODBias; // 0xf8
	float BrightnessStep; // 0xfc
	int32_t ApplyFilteringMip; // 0x100
	float FilterAngle; // 0x104
	float MipFilterAnglePerLevelScale; // 0x108
	float FilterEdgeWidth; // 0x10c
	int32_t NumSourceArtMips; // 0x110
	int32_t SourceArtWidth; // 0x114
	int32_t SourceArtHeight; // 0x118
};

struct UAnimNodeBlendPerBone : UAnimNodeBlend {
	uint32_t bForceLocalSpaceBlend : 1; // 0x110
	TArray<FName> BranchStartBoneName; // 0x114
	TArray<float> Child2PerBoneWeight; // 0x124
	TArray<char> LocalToCompReqBones; // 0x134
};

struct UCBUIDataStore_TacticalGear : UUIDataStore_Settings {
	TArray<FUITacticalGearStruct> UITacticalGearList; // 0x98
};

struct UPBRuleNodeRepeat : UPBRuleNodeBase {
	EProcBuildingAxis RepeatAxis; // 0x70
	float RepeatMaxSize; // 0x74
};

struct UCombatHUD_BattleLog : UCombatHUDEntity_Base {
	uint32_t bDisplayed : 1; // 0xc0
};

struct UMaterialExpressionDivide : UMaterialExpression {
	FExpressionInput A; // 0xb0
	FExpressionInput B; // 0xe4
};

struct UDistributionFloatParameterBase : UDistributionFloatConstant {
	FName ParameterName; // 0x80
	float MinInput; // 0x88
	float MaxInput; // 0x8c
	float MinOutput; // 0x90
	float MaxOutput; // 0x94
	DistributionParamMode ParamMode; // 0x98
};

struct UNavMeshGoalFilter_OutOfViewFrom : UNavMeshGoal_Filter {
	FPointer GoalPoly; // 0x6c
	FVector OutOfViewLocation; // 0x74
};

struct USeqAct_SetBool : USeqAct_SetSequenceVariable {
	uint32_t DefaultValue : 1; // 0x108
};

struct ALiftCenter : ANavigationPoint {
	ObjectProperty MyLift; // 0x33c
	float MaxDist2D; // 0x344
	FVector LiftOffset; // 0x348
	uint32_t bJumpLift : 1; // 0x354
	float CollisionHeight; // 0x358
	ObjectProperty LiftTrigger; // 0x35c
};

struct AAccessControl : AInfo {
	TArray<FString> IPPolicies; // 0x244
	TArray<FUniqueNetId> BannedIDs; // 0x254
	FString IPBanned; // 0x264
	FString WrongPassword; // 0x274
	FString NeedPassword; // 0x284
	FString SessionBanned; // 0x294
	FString KickedMsg; // 0x2a4
	FString DefaultKickReason; // 0x2b4
	FString IdleKickReason; // 0x2c4
	AAdmin* AdminClass; // 0x2d4
	FString AdminPassword; // 0x2dc
	FString GamePassword; // 0x2ec
	FString ACDisplayText[0x3]; // 0x2fc
	FString ACDescText[0x3]; // 0x32c
	uint32_t bDontAddDefaultAdmin : 1; // 0x35c
	uint32_t bAuthenticateClients : 1; // 0x35c
	uint32_t bAuthenticateServer : 1; // 0x35c
	uint32_t bAuthenticateListenHost : 1; // 0x35c
	uint32_t bAuthDelegatesRegistered : 1; // 0x35c
	uint32_t bPendingListenAuth : 1; // 0x35c
	int32_t MaxAuthRetryCount; // 0x360
	int32_t AuthRetryDelay; // 0x364
	ObjectProperty OnlineSub; // 0x368
	TScriptInterface<Class> CachedAuthInt; // 0x370
	TArray<FPendingClientAuth> ClientsPendingAuth; // 0x380
	TArray<FServerAuthRetry> ServerAuthRetries; // 0x390
	int32_t ListenAuthTicketUID; // 0x3a0
	int32_t ListenAuthRetryCount; // 0x3a4
};

struct UCombatDataTableRefDrop : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString CodeName; // 0x70
	FString RefPickupCodeName[0x5]; // 0x80
	int32_t DropRate[0x5]; // 0xd0
};

struct UParticleModuleRequired : UParticleModule {
	ObjectProperty Material; // 0x68
	EParticleScreenAlignment ScreenAlignment; // 0x70
	EParticleSortMode SortMode; // 0x71
	EParticleBurstMethod ParticleBurstMethod; // 0x72
	EParticleSubUVInterpMethod InterpolationMethod; // 0x73
	EScalePivotType ScalePivotType; // 0x74
	EEmitterNormalsMode EmitterNormalsMode; // 0x75
	uint32_t bAllowImageFlipping : 1; // 0x78
	uint32_t bSquareImageFlipping : 1; // 0x78
	uint32_t bUseLocalSpace : 1; // 0x78
	uint32_t bKillOnDeactivate : 1; // 0x78
	uint32_t bKillOnCompleted : 1; // 0x78
	uint32_t bRequiresSorting : 1; // 0x78
	uint32_t bUseLegacyEmitterTime : 1; // 0x78
	uint32_t bEnableNearParticleCulling : 1; // 0x78
	uint32_t bEnableFarParticleCulling : 1; // 0x78
	uint32_t bEmitterDurationUseRange : 1; // 0x78
	uint32_t bDurationRecalcEachLoop : 1; // 0x78
	uint32_t bEmitterDelayUseRange : 1; // 0x78
	uint32_t bDelayFirstLoopOnly : 1; // 0x78
	uint32_t bScaleUV : 1; // 0x78
	uint32_t bDirectUV : 1; // 0x78
	uint32_t bOverrideSystemMacroUV : 1; // 0x78
	uint32_t bUseMaxDrawCount : 1; // 0x78
	uint32_t bOrbitModuleAffectsVelocityAlignment : 1; // 0x78
	float NearCullDistance; // 0x7c
	float NearFadeDistance; // 0x80
	float FarFadeDistance; // 0x84
	float FarCullDistance; // 0x88
	float EmitterDuration; // 0x8c
	float EmitterDurationLow; // 0x90
	int32_t EmitterLoops; // 0x94
	FRawDistributionFloat SpawnRate; // 0x98
	TArray<FParticleBurst> BurstList; // 0xbc
	float EmitterDelay; // 0xcc
	float EmitterDelayLow; // 0xd0
	int32_t SubImages_Horizontal; // 0xd4
	int32_t SubImages_Vertical; // 0xd8
	float RandomImageTime; // 0xdc
	int32_t RandomImageChanges; // 0xe0
	FVector MacroUVPosition; // 0xe4
	float MacroUVRadius; // 0xf0
	int32_t MaxDrawCount; // 0xf4
	float DownsampleThresholdScreenFraction; // 0xf8
	FVector NormalsSphereCenter; // 0xfc
	FVector NormalsCylinderDirection; // 0x108
};

struct UCombatAnimNodeCopyBoneTranslation : UAnimNodeBlendBase {
	ObjectProperty CachedAimNode; // 0x100
	FName OldAimProfileName; // 0x108
	TArray<FBoneCopyInfo> DefaultBoneCopyArray; // 0x110
	TArray<FBoneCopyInfo> DualWieldBoneCopyArray; // 0x120
	TArray<FBoneCopyInfo> ActiveBoneCopyArray; // 0x130
	TArray<char> RequiredBones; // 0x140
};

struct UCombatAudioChannelSystem : UObject {
	TMap<None, None> ChannelMap; // 0x60
	TArray<FChannelData> Channels; // 0xa8
};

struct AEmitter : AActor {
	ComponentProperty ParticleSystemComponent; // 0x244
	ComponentProperty LightEnvironment; // 0x24c
	uint32_t bDestroyOnSystemFinish : 1; // 0x254
	uint32_t bPostUpdateTickGroup : 1; // 0x254
	uint32_t bClientSideOnly : 1; // 0x254
	uint32_t bCurrentlyActive : 1; // 0x254
};

struct UAnimNodeRandom : UAnimNodeBlendList {
	TArray<FRandomAnimInfo> RandomInfo; // 0x120
	ObjectProperty PlayingSeqNode; // 0x130
	int32_t PendingChildIndex; // 0x138
	uint32_t bPickedPendingChildIndex : 1; // 0x13c
};

struct UMorphNodeWeight : UMorphNodeWeightBase {
	float NodeWeight; // 0x84
};

struct AAmbientSoundSimpleToggleable : AAmbientSoundSimple {
	uint32_t bCurrentlyPlaying : 1; // 0x270
	uint32_t bFadeOnToggle : 1; // 0x270
	uint32_t bIgnoreAutoPlay : 1; // 0x270
	float FadeInDuration; // 0x274
	float FadeInVolumeLevel; // 0x278
	float FadeOutDuration; // 0x27c
	float FadeOutVolumeLevel; // 0x280
};

struct UCombatDataTableRefClanExp : UCombatDataTableType {
	int32_t Level; // 0x6c
	int32_t GoalExp; // 0x70
	FString LevelColor; // 0x74
	FString BoosterCodeName; // 0x84
};

struct UNavMeshGoal_ClosestActorInList : UNavMeshPathGoalEvaluator {
	TArray<FBiasedGoalActor> GoalList; // 0x7c
	FMultiMap_Mirror PolyToGoalActorMap; // 0x8c
	FPointer CachedAnchorPoly; // 0xd4
};

struct UAnimNodeBlendByProperty : UAnimNodeBlendList {
	FName PropertyName; // 0x120
	uint32_t bUseOwnersBase : 1; // 0x128
	uint32_t bForceUpdate : 1; // 0x128
	uint32_t bUseSpecificBlendTimes : 1; // 0x128
	uint32_t bSynchronizeNodesInEditor : 1; // 0x128
	FName CachedPropertyName; // 0x12c
	FPointer CachedFloatProperty; // 0x134
	FPointer CachedBoolProperty; // 0x13c
	FPointer CachedByteProperty; // 0x144
	ObjectProperty CachedOwner; // 0x14c
	float BlendTime; // 0x154
	float FloatPropMin; // 0x158
	float FloatPropMax; // 0x15c
	float BlendToChild1Time; // 0x160
	float BlendToChild2Time; // 0x164
};

struct ACombatAIGame : ACombatPVEGame {
	int32_t PlayerLifeCount; // 0x784
	int32_t PlayerMaxLifeCount; // 0x788
	int32_t RespawnWaitTime; // 0x78c
	Team BOT_TEAM; // 0x790
	Team PLAYER_TEAM; // 0x791
	ObjectProperty CurrentSequence; // 0x794
	int32_t WaveStartTime; // 0x79c
	int32_t PlayerHealthForNoLife; // 0x7a0
};

struct ACombatProj_Decoy : ACombatProj_SpecialGrenade {
	float RadarExposeRange; // 0x3f8
	ComponentProperty EnemyAttachPSC; // 0x3fc
	ComponentProperty FriendlyAttachPSC; // 0x404
};

struct UCombatFrontEnd_ClausePopup : UCombatFrontEnd_Object {
	FString URL; // 0xd0
};

struct ACombatAIGameReplicationInfo : ACBGameReplicationInfo {
	ObjectProperty MissionActor; // 0x380
	int32_t WaveCount; // 0x388
	int32_t WaveStartTime; // 0x38c
	int32_t PlayTime; // 0x390
	int32_t CurrentWaveRemainBotCount; // 0x394
	FSAimRocket RepAimRocket; // 0x398
	TArray<ObjectProperty> SeqAct_ProjAttackArray; // 0x3d4
	uint32_t bInitProjAttackSequence : 1; // 0x3e4
	EAIRewardRank RewardRank; // 0x3e8
	int32_t ValidComboTime; // 0x3ec
	TArray<ObjectProperty> ComboList; // 0x3f0
};

struct UCombatFrontEnd_ItemSellPopup : UCombatFrontEnd_Object {
	FInvenItemInfo SellItemInfo; // 0xd0
	TArray<int32_t> SellSlotList; // 0x108
};

struct UCCSBTShoot : UGripBTNode {
	int32_t FireBurstPerShot; // 0xbc
	float DelayBetweenBursts; // 0xc0
};

struct UMobileMenuImage : UMobileMenuObject {
	ObjectProperty Image; // 0xdc
	MenuImageDrawStyle ImageDrawStyle; // 0xe4
	FUVCoords ImageUVs; // 0xe8
	FLinearColor ImageColor; // 0xfc
};

struct USeqAct_MobileAddInputZones : USequenceAction {
	FName ZoneName; // 0x108
	ObjectProperty NewZone; // 0x110
};

struct UCombatDataTableRefStat : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString CodeName; // 0x70
	int32_t StatName; // 0x80
	int32_t StatDesc; // 0x84
	int32_t RecordType; // 0x88
	char GameSetTableKey; // 0x8c
	char DataSetTableKey; // 0x8d
	char ConstValueKey; // 0x8e
	WordProperty Event; // 0x90
	FString RefModeCodeName; // 0x94
	FString RefMapCodeName; // 0xa4
	FString RefStatGroupCodeName; // 0xb4
	FString RefItemCodeName; // 0xc4
	FString RefRankCodeName; // 0xd4
	FString RefScoringCodeName; // 0xe4
};

struct UCombatPracticePlayerInput : UCombatPlayerInput {
	TArray<FKeyBind> PracticeKeyBindings; // 0x3f8
};

struct UApexDynamicComponent : UApexComponentBase {
	FPointer ComponentDynamicResources; // 0x27c
};

struct USeqVar_Float : USequenceVariable {
	float FloatValue; // 0xa0
};

struct UOnlineGameInterfaceImpl : UObject {
	ObjectProperty OwningSubsystem; // 0x60
	ObjectProperty GameSettings; // 0x68
	ObjectProperty GameSearch; // 0x70
	TArray<DelegateProperty> CreateOnlineGameCompleteDelegates; // 0x78
	TArray<DelegateProperty> UpdateOnlineGameCompleteDelegates; // 0x88
	TArray<DelegateProperty> DestroyOnlineGameCompleteDelegates; // 0x98
	TArray<DelegateProperty> JoinOnlineGameCompleteDelegates; // 0xa8
	TArray<DelegateProperty> MigrateOnlineGameCompleteDelegates; // 0xb8
	TArray<DelegateProperty> JoinMigratedOnlineGameCompleteDelegates; // 0xc8
	TArray<DelegateProperty> RecalculateSkillRatingCompleteDelegates; // 0xd8
	TArray<DelegateProperty> StartOnlineGameCompleteDelegates; // 0xe8
	TArray<DelegateProperty> EndOnlineGameCompleteDelegates; // 0xf8
	TArray<DelegateProperty> FindOnlineGamesCompleteDelegates; // 0x108
	TArray<DelegateProperty> CancelFindOnlineGamesCompleteDelegates; // 0x118
	ELanBeaconState LanBeaconState; // 0x128
	char LanNonce[0x8]; // 0x129
	int32_t LanAnnouncePort; // 0x134
	int32_t LanGameUniqueId; // 0x138
	int32_t LanPacketPlatformMask; // 0x13c
	float LanQueryTimeLeft; // 0x140
	float LanQueryTimeout; // 0x144
	FPointer LanBeacon; // 0x148
	FPointer SessionInfo; // 0x150
	DelegateProperty __OnFindOnlineGamesComplete__Delegate; // 0x158
	DelegateProperty __OnCreateOnlineGameComplete__Delegate; // 0x168
	DelegateProperty __OnUpdateOnlineGameComplete__Delegate; // 0x178
	DelegateProperty __OnDestroyOnlineGameComplete__Delegate; // 0x188
	DelegateProperty __OnCancelFindOnlineGamesComplete__Delegate; // 0x198
	DelegateProperty __OnJoinOnlineGameComplete__Delegate; // 0x1a8
	DelegateProperty __OnRegisterPlayerComplete__Delegate; // 0x1b8
	DelegateProperty __OnUnregisterPlayerComplete__Delegate; // 0x1c8
	DelegateProperty __OnStartOnlineGameComplete__Delegate; // 0x1d8
	DelegateProperty __OnEndOnlineGameComplete__Delegate; // 0x1e8
	DelegateProperty __OnArbitrationRegistrationComplete__Delegate; // 0x1f8
	DelegateProperty __OnGameInviteAccepted__Delegate; // 0x208
	DelegateProperty __OnRecalculateSkillRatingComplete__Delegate; // 0x218
	DelegateProperty __OnMigrateOnlineGameComplete__Delegate; // 0x228
	DelegateProperty __OnJoinMigratedOnlineGameComplete__Delegate; // 0x238
	DelegateProperty __OnQosStatusChanged__Delegate; // 0x248
};

struct USeqEvent_RemoteEvent : USequenceEvent {
	FName EventName; // 0x128
	uint32_t bStatusIsOk : 1; // 0x130
};

struct UMaterialExpressionClamp : UMaterialExpression {
	FExpressionInput Input; // 0xb0
	FExpressionInput Min; // 0xe4
	FExpressionInput Max; // 0x118
};

struct UCommandlet : UObject {
	FString HelpDescription; // 0x60
	FString HelpUsage; // 0x70
	FString HelpWebLink; // 0x80
	TArray<FString> HelpParamNames; // 0x90
	TArray<FString> HelpParamDescriptions; // 0xa0
	uint32_t IsServer : 1; // 0xb0
	uint32_t IsClient : 1; // 0xb0
	uint32_t IsEditor : 1; // 0xb0
	uint32_t LogToConsole : 1; // 0xb0
	uint32_t ShowErrorCount : 1; // 0xb0
};

struct UWebRequest : UObject {
	FString RemoteAddr; // 0x60
	FString URI; // 0x70
	FString UserName; // 0x80
	FString Password; // 0x90
	int32_t ContentLength; // 0xa0
	FString ContentType; // 0xa4
	ERequestType RequestType; // 0xb4
	FMap_Mirror HeaderMap; // 0xb8
	FMap_Mirror VariableMap; // 0x100
};

struct AStaticMeshActor : AStaticMeshActorBase {
	ComponentProperty StaticMeshComponent; // 0x244
	uint32_t bDisableAutoBaseOnProcBuilding : 1; // 0x24c
	uint32_t bProxy : 1; // 0x24c
	uint32_t bHiddenByProxy : 1; // 0x24c
	uint32_t OldCastShadow : 1; // 0x24c
	uint32_t OldAcceptsLights : 1; // 0x24c
};

struct UPath_TowardPoint : UPathConstraint {
	FVector GoalPoint; // 0x6c
};

struct UMaterialExpressionNormalize : UMaterialExpression {
	FExpressionInput VectorInput; // 0xb0
};

struct UCameraModifier_CameraShake : UCameraModifier {
	TArray<FCameraShakeInstance> ActiveShakes; // 0x80
	float SplitScreenShakeScale; // 0x90
};

struct UCombatWeaponRISBase_Aiming : UCombatWeaponRISBase_SkeletalmeshComponent {
	TArray<float> WorldFOVMagnification; // 0xc44
	TArray<float> OverrideForegroundFOV; // 0xc54
	TArray<float> OverrideWeaponBobRatio; // 0xc64
	TArray<float> OverrideWeaponLagRatio; // 0xc74
	TArray<float> OverrideWeaponZoomDuration; // 0xc84
	TArray<float> OverrideWeaponFOVDelayRatio; // 0xc94
	TArray<float> OverrideZoomRotLagRatio; // 0xca4
	float OverrideWeaponFOVInterpSpeed; // 0xcb4
	TArray<FVector> OverrideViewOffset; // 0xcb8
	TArray<float> OverrideBobDamping; // 0xcc8
	TArray<float> OverrideBobDampingZ; // 0xcd8
	TArray<float> OverrideZoomAnimBlendTimes; // 0xce8
	TArray<FHideBoneDataByScreenPos> OverrideHideBoneDataByScreenPos; // 0xcf8
};

struct UCombatGameEventBase : UObject {
	DelegateProperty __OnGetReward__Delegate; // 0x60
};

struct UCombatAnimNotify_HideBoneForAttachedMesh : UCombatAnimNotify_HideBone {
	FName AttachedBoneName; // 0x70
	FName AttachedSocketName; // 0x78
};

struct ACombatProj_ExplosiveBase : ACombatProjectile {
	uint32_t bAutoDestroyOnExplosion : 1; // 0x390
	uint32_t bHasExploded : 1; // 0x390
	uint32_t bAttachExplosionToHitMover : 1; // 0x390
	uint32_t IsCollideTeammatePawn : 1; // 0x390
	uint32_t IgniteWhenToss : 1; // 0x390
	float MinDamage; // 0x394
	float FullDamageRadius; // 0x398
	float DamageFalloffExp; // 0x39c
	ObjectProperty ExplosionTemplate; // 0x3a0
	ObjectProperty GrenadeBounceSound; // 0x3a8
	char TeamNum; // 0x3b0
	EObjectGradeType ObjectGrade; // 0x3b1
	float TimeBeforeBeep; // 0x3b4
	float TimeAfterBeep; // 0x3b8
	int32_t MaxBounceCountToArm; // 0x3bc
	int32_t BounceCount; // 0x3c0
	float VelocityDampingFactor; // 0x3c4
	float StopSimulatingVelocitySqrThreshhold; // 0x3c8
	float Bounciness; // 0x3cc
	ComponentProperty BouncedComp; // 0x3d0
	int32_t BP; // 0x3d8
	AGameExplosionActor* ExplosionActorClass; // 0x3dc
};

struct ACombatLCTFFlagPoint : ANavigationPoint {
	Team OwnerTeam; // 0x33c
	EFlagPointType PointType; // 0x33d
	char SpawnID; // 0x33e
	char PointID; // 0x33f
	int32_t MaxHoistedCount; // 0x340
	ComponentProperty Mesh; // 0x344
	ComponentProperty StaticMeshComp; // 0x34c
	ObjectProperty FlagPointStaticMesh; // 0x354
	int32_t AreaNameID; // 0x35c
	int32_t MissionGoalArrayIndex; // 0x360
	uint32_t IsStayFlag : 1; // 0x364
	TArray<int32_t> HoistedID; // 0x368
};

struct UCombatFrontEnd_BaseShop : UCombatFrontEnd_Maintenance {
	ObjectProperty ItemListClass; // 0xe4
	ObjectProperty ItemDetailinfoClass; // 0xec
	int32_t SelectedMainTab; // 0xf4
	int32_t SelectedSubTab; // 0xf8
	int32_t SelectedInfoTab; // 0xfc
	int32_t SelectedInfoTabType; // 0x100
	int32_t CashUnit; // 0x104
	int32_t priceID; // 0x108
	FString CurrentCodeName; // 0x10c
	FString CurrentSearchtext; // 0x11c
	char CurrentPresetTab; // 0x12c
	int32_t CurrentClothItemRefIndex; // 0x130
	int32_t CurrentSelectedItemID; // 0x134
	int32_t AutoSelectItemID; // 0x138
	int32_t AutoSelectMainTab; // 0x13c
	uint32_t bSortRepurchaseItems : 1; // 0x140
	uint32_t bSelectedHotItem : 1; // 0x140
	uint32_t bSelectedNewItem : 1; // 0x140
	uint32_t bSelectedCashItem : 1; // 0x140
	uint32_t bMoveShop : 1; // 0x140
	FString ShopCodename; // 0x144
	TArray<FShopTabStruct> MainTabInfo; // 0x154
	FShopTabStruct SubTabAllInfo; // 0x164
	TArray<FShopTabStruct> SubTabWeaponInfo; // 0x18c
	TArray<FShopTabStruct> SubTabCharInfo; // 0x19c
	TArray<FShopTabStruct> SubTabItemInfo; // 0x1ac
	TArray<FShopTabStruct> SubTabPackageInfo; // 0x1bc
	FInfoTabStruct ItemTabInfo[0x3]; // 0x1cc
};

struct ACombatWeaponBase_Melee : ACombatWeapon {
	FMeleeAttackFactor MeleeFactors[0x2]; // 0x1ec8
	uint32_t bHitPawn : 1; // 0x1f28
	uint32_t bHitWorldActor : 1; // 0x1f28
	uint32_t bContinousAttack : 1; // 0x1f28
	int32_t LastAttackIndex; // 0x1f2c
	TArray<ObjectProperty> VictimsSaveList; // 0x1f30
	int32_t ArcSectIndex; // 0x1f40
};

struct UCombatBusterGameScore : UCombatGameScore {
	float BusterDamageScoreRatio; // 0x60
	float BusterDamageMissionScoreRatio; // 0x64
	float BusterDamageCRRatio; // 0x68
	float BusterDamageRankExpRatio; // 0x6c
};

struct UCombatFrontEnd_Exit : UCombatFrontEnd_Object {
	int32_t ShowRewardRank; // 0xd0
	DelegateProperty __CallSetMission__Delegate; // 0xd4
};

struct UMaterialExpressionFontSampleParameter : UMaterialExpressionFontSample {
	FName ParameterName; // 0xbc
	FGuid ExpressionGUID; // 0xc4
	FName Group; // 0xd4
};

struct ADynamicSMActor : AActor {
	ComponentProperty StaticMeshComponent; // 0x244
	ComponentProperty LightEnvironment; // 0x24c
	ObjectProperty ReplicatedMesh; // 0x254
	ObjectProperty ReplicatedMaterial0; // 0x25c
	ObjectProperty ReplicatedMaterial1; // 0x264
	uint32_t bForceStaticDecals : 1; // 0x26c
	uint32_t bPawnCanBaseOn : 1; // 0x26c
	uint32_t bSafeBaseIfAsleep : 1; // 0x26c
	FVector ReplicatedMeshTranslation; // 0x270
	FRotator ReplicatedMeshRotation; // 0x27c
	FVector ReplicatedMeshScale3D; // 0x288
};

struct UCombatHUD_NoticePosition : UCombatHUDEntity_Base {
	EUIGameStatus CurrentStatus; // 0xc0
	uint32_t bTryShowNoticeposition : 1; // 0xc4
	float LastUpdateTime; // 0xc8
};

struct UCombatPracticeGameMovie : UCombatTeamGameMovie {
	ObjectProperty PracticeGameHelpMC; // 0xad0
	ObjectProperty PracticeGameRoundStatusMC; // 0xad8
	ObjectProperty PracticeGameMessage; // 0xae0
};

struct UInterpTrackHeadTracking : UInterpTrack {
	TArray<FHeadTrackingKey> HeadTrackingTrack; // 0xa0
	TArray<FName> TrackControllerName; // 0xb0
	float LookAtActorRadius; // 0xc0
	uint32_t bDisableBeyondLimit : 1; // 0xc4
	uint32_t bLookAtPawns : 1; // 0xc4
	float MaxLookAtTime; // 0xc8
	float MinLookAtTime; // 0xcc
	float MaxInterestTime; // 0xd0
	TArray<AActor*> ActorClassesToLookAt; // 0xd4
	TArray<FName> TargetBoneNames; // 0xe4
};

struct USeqVar_Int : USequenceVariable {
	int32_t IntValue; // 0xa0
};

struct ACBInventoryManager : AInventoryManager {
	uint32_t bInfiniteAmmo : 1; // 0x270
	ObjectProperty PreviousWeapon; // 0x274
};

struct USeqCond_CompareInt : USequenceCondition {
	int32_t ValueA; // 0xec
	int32_t ValueB; // 0xf0
};

struct USkeletalMeshComponent : UMeshComponent {
	ObjectProperty SkeletalMesh; // 0x260
	ComponentProperty AttachedToSkelComponent; // 0x268
	ObjectProperty AnimTreeTemplate; // 0x270
	ObjectProperty Animations; // 0x278
	TArray<ObjectProperty> AnimTickArray; // 0x280
	TArray<ObjectProperty> AnimAlwaysTickArray; // 0x290
	TArray<int32_t> AnimTickRelevancyArray; // 0x2a0
	TArray<float> AnimTickWeightsArray; // 0x2b0
	TArray<ObjectProperty> SkelControlTickArray; // 0x2c0
	ObjectProperty PhysicsAsset; // 0x2d0
	ObjectProperty PhysicsAssetInstance; // 0x2d8
	FPointer ApexClothing; // 0x2e0
	float PhysicsWeight; // 0x2e8
	float GlobalAnimRateScale; // 0x2ec
	float StreamingDistanceMultiplier; // 0x2f0
	FPointer MeshObject; // 0x2f4
	FColor WireframeColor; // 0x2fc
	TArray<FBoneAtom> SpaceBases; // 0x300
	TArray<FBoneAtom> LocalAtoms; // 0x310
	TArray<FBoneAtom> CachedLocalAtoms; // 0x320
	TArray<FBoneAtom> CachedSpaceBases; // 0x330
	int32_t LowUpdateFrameRate; // 0x340
	TArray<char> RequiredBones; // 0x344
	TArray<char> ComposeOrderedRequiredBones; // 0x354
	ComponentProperty ParentAnimComponent; // 0x364
	TArray<int32_t> ParentBoneMap; // 0x36c
	TArray<ObjectProperty> AnimSets; // 0x37c
	TArray<ObjectProperty> TemporarySavedAnimSets; // 0x38c
	TArray<ObjectProperty> MorphSets; // 0x39c
	TArray<FActiveMorph> ActiveMorphs; // 0x3ac
	TArray<FActiveMorph> ActiveCurveMorphs; // 0x3bc
	TMap<None, None> MorphTargetIndexMap; // 0x3cc
	TArray<FAttachment> Attachments; // 0x414
	TArray<char> SkelControlIndex; // 0x424
	TArray<char> PostPhysSkelControlIndex; // 0x434
	int32_t ForcedLodModel; // 0x444
	int32_t MinLodModel; // 0x448
	int32_t PredictedLODLevel; // 0x44c
	int32_t OldPredictedLODLevel; // 0x450
	float AnimationLODDistanceFactor; // 0x454
	int32_t AnimationLODFrameRate; // 0x458
	float MaxDistanceFactor; // 0x45c
	TArray<char> MaterialSet; // 0x460
	int32_t bForceWireframe; // 0x470
	int32_t bForceRefpose; // 0x474
	int32_t bOldForceRefPose; // 0x478
	uint32_t bNoSkeletonUpdate : 1; // 0x47c
	int32_t bDisplayBones; // 0x480
	int32_t bShowPrePhysBones; // 0x484
	int32_t bHideSkin; // 0x488
	int32_t bForceRawOffset; // 0x48c
	int32_t bIgnoreControllers; // 0x490
	int32_t bTransformFromAnimParent; // 0x494
	int32_t TickTag; // 0x498
	int32_t InitTag; // 0x49c
	int32_t CachedAtomsTag; // 0x4a0
	int32_t bUseSingleBodyPhysics; // 0x4a4
	int32_t bRequiredBonesUpToDate; // 0x4a8
	float MinDistFactorForKinematicUpdate; // 0x4ac
	int32_t FramesPhysicsAsleep; // 0x4b0
	int32_t SkipRateForTickAnimNodesAndGetBoneAtoms; // 0x4b4
	uint32_t bSkipTickAnimNodes : 1; // 0x4b8
	uint32_t bSkipGetBoneAtoms : 1; // 0x4b8
	uint32_t bInterpolateBoneAtoms : 1; // 0x4b8
	uint32_t bHasValidBodies : 1; // 0x4b8
	uint32_t bSkipAllUpdateWhenPhysicsAsleep : 1; // 0x4b8
	uint32_t bComponentUseFixedSkelBounds : 1; // 0x4b8
	uint32_t bUseBoundsFromParentAnimComponent : 1; // 0x4b8
	uint32_t bConsiderAllBodiesForBounds : 1; // 0x4b8
	uint32_t bUpdateSkelWhenNotRendered : 1; // 0x4b8
	uint32_t bIgnoreControllersWhenNotRendered : 1; // 0x4b8
	uint32_t bTickAnimNodesWhenNotRendered : 1; // 0x4b8
	uint32_t bNotUpdatingKinematicDueToDistance : 1; // 0x4b8
	uint32_t bForceDiscardRootMotion : 1; // 0x4b8
	uint32_t bNotifyRootMotionProcessed : 1; // 0x4b8
	uint32_t bRootMotionModeChangeNotify : 1; // 0x4b8
	uint32_t bRootMotionExtractedNotify : 1; // 0x4b8
	uint32_t bProcessingRootMotion : 1; // 0x4b8
	uint32_t bDisableFaceFXMaterialInstanceCreation : 1; // 0x4b8
	uint32_t bDisableFaceFX : 1; // 0x4b8
	uint32_t bAnimTreeInitialised : 1; // 0x4b8
	uint32_t bForceMeshObjectUpdate : 1; // 0x4b8
	uint32_t bHasPhysicsAssetInstance : 1; // 0x4b8
	uint32_t bUpdateKinematicBonesFromAnimation : 1; // 0x4b8
	uint32_t bUpdateJointsFromAnimation : 1; // 0x4b8
	uint32_t bSkelCompFixed : 1; // 0x4b8
	uint32_t bHasHadPhysicsBlendedIn : 1; // 0x4b8
	uint32_t bForceUpdateAttachmentsInTick : 1; // 0x4b8
	uint32_t bEnableFullAnimWeightBodies : 1; // 0x4b8
	uint32_t bPerBoneVolumeEffects : 1; // 0x4b8
	uint32_t bPerBoneMotionBlur : 1; // 0x4b8
	uint32_t bSyncActorLocationToRootRigidBody : 1; // 0x4b8
	uint32_t bUseRawData : 1; // 0x4b8
	uint32_t bDisableWarningWhenAnimNotFound : 1; // 0x4bc
	uint32_t bOverrideAttachmentOwnerVisibility : 1; // 0x4bc
	uint32_t bNeedsToDeleteHitMask : 1; // 0x4bc
	uint32_t bPauseAnims : 1; // 0x4bc
	uint32_t bChartDistanceFactor : 1; // 0x4bc
	uint32_t bEnableLineCheckWithBounds : 1; // 0x4bc
	uint32_t bCanHighlightSelectedSections : 1; // 0x4bc
	uint32_t bUpdateMorphWhenParentAnimComponentExists : 1; // 0x4bc
	FVector LineCheckBoundsScale; // 0x4c0
	uint32_t bEnableClothSimulation : 1; // 0x4cc
	uint32_t bDisableClothCollision : 1; // 0x4cc
	uint32_t bClothFrozen : 1; // 0x4cc
	uint32_t bAutoFreezeClothWhenNotRendered : 1; // 0x4cc
	uint32_t bClothAwakeOnStartup : 1; // 0x4cc
	uint32_t bClothBaseVelClamp : 1; // 0x4cc
	uint32_t bClothBaseVelInterp : 1; // 0x4cc
	uint32_t bAttachClothVertsToBaseBody : 1; // 0x4cc
	uint32_t bIsClothOnStaticObject : 1; // 0x4cc
	uint32_t bUpdatedFixedClothVerts : 1; // 0x4cc
	uint32_t bClothPositionalDampening : 1; // 0x4cc
	uint32_t bClothWindRelativeToOwner : 1; // 0x4cc
	uint32_t bRecentlyRendered : 1; // 0x4cc
	uint32_t bCacheAnimSequenceNodes : 1; // 0x4cc
	uint32_t bNeedsInstanceWeightUpdate : 1; // 0x4cc
	uint32_t bAlwaysUseInstanceWeights : 1; // 0x4cc
	uint32_t bUpdateComposeSkeletonPasses : 1; // 0x4cc
	uint32_t bValidTemporarySavedAnimSets : 1; // 0x4cc
	TArray<FBonePair> InstanceVertexWeightBones; // 0x4d0
	TArray<FSkelMeshComponentLODInfo> LODInfo; // 0x4e0
	FVector FrozenLocalToWorldPos; // 0x4f0
	FRotator FrozenLocalToWorldRot; // 0x4fc
	FVector ClothExternalForce; // 0x508
	FVector ClothWind; // 0x514
	FVector ClothBaseVelClampRange; // 0x520
	float ClothBlendWeight; // 0x52c
	float ClothDynamicBlendWeight; // 0x530
	float ClothBlendMinDistanceFactor; // 0x534
	float ClothBlendMaxDistanceFactor; // 0x538
	FVector MinPosDampRange; // 0x53c
	FVector MaxPosDampRange; // 0x548
	FVector MinPosDampScale; // 0x554
	FVector MaxPosDampScale; // 0x560
	FPointer ClothSim; // 0x56c
	int32_t SceneIndex; // 0x574
	TArray<FVector> ClothMeshPosData; // 0x578
	TArray<FVector> ClothMeshNormalData; // 0x588
	TArray<int32_t> ClothMeshIndexData; // 0x598
	int32_t NumClothMeshVerts; // 0x5a8
	int32_t NumClothMeshIndices; // 0x5ac
	TArray<int32_t> ClothMeshParentData; // 0x5b0
	int32_t NumClothMeshParentIndices; // 0x5c0
	TArray<FVector> ClothMeshWeldedPosData; // 0x5c4
	TArray<FVector> ClothMeshWeldedNormalData; // 0x5d4
	TArray<int32_t> ClothMeshWeldedIndexData; // 0x5e4
	int32_t ClothDirtyBufferFlag; // 0x5f4
	ERBCollisionChannel ClothRBChannel; // 0x5f8
	FRBCollisionChannelContainer ClothRBCollideWithChannels; // 0x5fc
	float ClothForceScale; // 0x600
	float ClothImpulseScale; // 0x604
	float ClothAttachmentTearFactor; // 0x608
	uint32_t bClothUseCompartment : 1; // 0x60c
	float MinDistanceForClothReset; // 0x610
	FVector LastClothLocation; // 0x614
	ERBCollisionChannel ApexClothingRBChannel; // 0x620
	FRBCollisionChannelContainer ApexClothingRBCollideWithChannels; // 0x624
	ERBCollisionChannel ApexClothingCollisionRBChannel; // 0x628
	uint32_t bAutoFreezeApexClothingWhenNotRendered : 1; // 0x62c
	uint32_t bLocalSpaceWind : 1; // 0x62c
	FVector WindVelocity; // 0x630
	float WindVelocityBlendTime; // 0x63c
	uint32_t bSkipInitClothing : 1; // 0x640
	FPointer SoftBodySim; // 0x644
	int32_t SoftBodySceneIndex; // 0x64c
	uint32_t bEnableSoftBodySimulation : 1; // 0x650
	TArray<FVector> SoftBodyTetraPosData; // 0x654
	TArray<int32_t> SoftBodyTetraIndexData; // 0x664
	int32_t NumSoftBodyTetraVerts; // 0x674
	int32_t NumSoftBodyTetraIndices; // 0x678
	float SoftBodyImpulseScale; // 0x67c
	uint32_t bSoftBodyFrozen : 1; // 0x680
	uint32_t bAutoFreezeSoftBodyWhenNotRendered : 1; // 0x680
	uint32_t bSoftBodyAwakeOnStartup : 1; // 0x680
	uint32_t bSoftBodyUseCompartment : 1; // 0x680
	ERBCollisionChannel SoftBodyRBChannel; // 0x684
	FRBCollisionChannelContainer SoftBodyRBCollideWithChannels; // 0x688
	FPointer SoftBodyASVPlane; // 0x68c
	ObjectProperty LimitMaterial; // 0x694
	FBoneAtom RootMotionDelta; // 0x6a0
	FVector RootMotionVelocity; // 0x6c0
	FVector RootBoneTranslation; // 0x6cc
	FVector RootMotionAccelScale; // 0x6d8
	ERootMotionMode RootMotionMode; // 0x6e4
	ERootMotionMode PreviousRMM; // 0x6e5
	ERootMotionMode PendingRMM; // 0x6e6
	ERootMotionMode OldPendingRMM; // 0x6e7
	int32_t bRMMOneFrameDelay; // 0x6e8
	ERootMotionRotationMode RootMotionRotationMode; // 0x6ec
	EAnimRotationOnly AnimRotationOnly; // 0x6ed
	EFaceFXBlendMode FaceFXBlendMode; // 0x6ee
	FPointer FaceFXActorInstance; // 0x6f0
	ComponentProperty CachedFaceFXAudioComp; // 0x6f8
	TArray<char> BoneVisibilityStates; // 0x700
	FBoneAtom LocalToWorldBoneAtom; // 0x710
	float ProgressiveDrawingFraction; // 0x730
	char CustomSortAlternateIndexMode; // 0x734
	char MaxMipMapOffset; // 0x735
	char NumberOfAsyncLoadingMaterial; // 0x736
	TArray<FName> MorphTargetsQueried; // 0x738
	TArray<ComponentProperty> PoolSMComponents; // 0x748
	uint32_t bUseTickOptimization : 1; // 0x758
	uint32_t bAsyncLoadingForMaterial : 1; // 0x758
	int32_t TickCount; // 0x75c
	int32_t LastDropRate; // 0x760
	float LastDropRateChange; // 0x764
	float AccumulatedDroppedDeltaTime; // 0x768
	float ComponentDroppedDeltaTime; // 0x76c
};

struct USeqAct_GameInfo : USequenceAction {
	TArray<ObjectProperty> Instigator; // 0x108
};

struct UCombatSkelCtrl_Spring : USkelControlSingleBone {
	uint32_t bInitialized : 1; // 0x100
	ObjectProperty OwnerPawn; // 0x104
	FName AttachedBoneName; // 0x10c
	ObjectProperty BodyInstance; // 0x114
	FRotator MaxAngle; // 0x11c
	FRotator MinAngle; // 0x128
	float Falloff; // 0x134
	float SpringStiffness; // 0x138
	float AVModifier; // 0x13c
	FRotator CurrentAngle; // 0x140
	float RandomPortion; // 0x14c
	FVector LastHitMomentum; // 0x150
	float LastHitTime; // 0x15c
	float MomentumPortion; // 0x160
};

struct USeqAct_ToggleOutLine : USeqAct_Toggle {
	FColor OutlineColor; // 0x108
	char OutlineWidth; // 0x10c
	char OutlineMinWidth; // 0x10d
	EBlendMode OutlineBlendMode; // 0x10e
	char StencilID; // 0x10f
	float OutLineColorIntense; // 0x110
	float OutLineIntenseCycleTime; // 0x114
	float OutLineCullDistance; // 0x118
	float OutlineWidthMaxDistance; // 0x11c
	uint32_t DrawOnlyHidden : 1; // 0x120
	uint32_t DisableDepthTest : 1; // 0x120
	uint32_t EnableDepthWriteOutline : 1; // 0x120
	ObjectProperty OutlineMaterialOverride; // 0x124
};

struct UCombatSkelCtrl_Recoil : UGameSkelCtrl_Recoil {
	uint32_t TestRecoil : 1; // 0x14c
	int32_t GunIndex; // 0x150
	TArray<FRecoilProfileData> RecoilArray; // 0x154
};

struct UCombatDataTableRefGear : UCombatDataTableType {
	int32_t Index; // 0x6c
	int32_t Cost; // 0x70
	int32_t NameID; // 0x74
	int32_t TooltipDescID; // 0x78
	FString IconName; // 0x7c
	FString ScriptFile; // 0x8c
};

struct UCombatFrontEnd_Community : UCombatFrontEnd_Object {
	FMessengerListStruct MessengerListInfos[0x6]; // 0xd0
	int32_t MessengerPopupLabelIDList[0x9]; // 0x160
	FString UserName_FriendWith; // 0x184
	FString UserName_AddBlackList; // 0x194
	int32_t UserID_BreakFriend; // 0x1a4
	FString UserName_ClanInvite; // 0x1a8
	int32_t Banish_UserID; // 0x1b8
	int32_t Invite_ClanID; // 0x1bc
	EMessengerStateType MessengerState; // 0x1c0
	uint32_t bDisplayedNoList : 1; // 0x1c4
	uint32_t bDisplayedUserInfoTooltip : 1; // 0x1c4
	FUserInfoTooltipInfo CurrentUserInfoTooltipInfo; // 0x1c8
	TArray<FPopupItemInfo> Items_FriendsRequestsPopup; // 0x240
	TArray<FPopupItemInfo> Items_MyFriendsPopup; // 0x250
	TArray<FPopupItemInfo> Items_ClanPopup; // 0x260
	TArray<FPopupItemInfo> Items_BlockedUsersPopup; // 0x270
	FString NoFriendLabel; // 0x280
	FString NoClanLabel; // 0x290
	FString NoClanMemberLabel; // 0x2a0
};

struct UCombatFrontEnd_Event : UCombatFrontEnd_Scene {
	int32_t CurrentViewTabIndex; // 0xd0
	TArray<FEventTabStruct> EventTabList; // 0xd4
	ObjectProperty TabList[0xa]; // 0xe4
};

struct UParticleModuleVelocityOverLifetime : UParticleModuleVelocityBase {
	FRawDistributionVector VelOverLife; // 0x6c
	uint32_t Absolute : 1; // 0x90
};

struct UTextureFlipBook : UTexture2D {
	FPointer VfTable_FTickableObject; // 0x214
	float TimeIntoMovie; // 0x21c
	float TimeSinceLastFrame; // 0x220
	float HorizontalScale; // 0x224
	float VerticalScale; // 0x228
	uint32_t bPaused : 1; // 0x22c
	uint32_t bStopped : 1; // 0x22c
	uint32_t bLooping : 1; // 0x22c
	uint32_t bAutoPlay : 1; // 0x22c
	int32_t HorizontalImages; // 0x230
	int32_t VerticalImages; // 0x234
	TextureFlipBookMethod FBMethod; // 0x238
	float FrameRate; // 0x23c
	float FrameTime; // 0x240
	int32_t CurrentRow; // 0x244
	int32_t CurrentColumn; // 0x248
	float RenderOffsetU; // 0x24c
	float RenderOffsetV; // 0x250
	FPointer ReleaseResourcesFence; // 0x254
};

struct UInterpTrackFaceFX : UInterpTrack {
	TArray<ObjectProperty> FaceFXAnimSets; // 0xa0
	TArray<FFaceFXTrackKey> FaceFXSeqs; // 0xb0
	ObjectProperty CachedActorFXAsset; // 0xc0
	TArray<FFaceFXSoundCueKey> FaceFXSoundCueKeys; // 0xc8
};

struct USeqAct_PlaySound : USeqAct_Latent {
	ObjectProperty PlaySound; // 0x120
	float ExtraDelay; // 0x128
	uint32_t bDelayReached : 1; // 0x12c
	uint32_t bSuppressSubtitles : 1; // 0x12c
	uint32_t bStopped : 1; // 0x12c
	float SoundDuration; // 0x130
	float FadeInTime; // 0x134
	float FadeOutTime; // 0x138
	float VolumeMultiplier; // 0x13c
	float PitchMultiplier; // 0x140
	float BeforeEndTime; // 0x144
};

struct UCombatHUD_ObserverRevivalWeapon : UCombatHUDEntity_Base {
	char LastReservedPreset; // 0xc0
	FString TitleMessage; // 0xc4
	FString PresetKeyName[0x3]; // 0xd4
};

struct UParticleModuleSubUV : UParticleModuleSubUVBase {
	FRawDistributionFloat SubImageIndex; // 0x68
	uint32_t bUseRealTime : 1; // 0x8c
};

struct USeqAct_SetMatInstVectorParam : USequenceAction {
	ObjectProperty MatInst; // 0x108
	FName ParamName; // 0x110
	FLinearColor VectorValue; // 0x118
};

struct ACombatDroppedEvolvePoint_Supply : ACombatDroppedEvolvePoint {
	int32_t PointMin; // 0x350
	int32_t PointMax; // 0x354
	int32_t SupplyGrade; // 0x358
};

struct USeqAct_ToggleHidden : USeqAct_Toggle {
	uint32_t bToggleBasedActors : 1; // 0x108
	TArray<AActor*> IgnoreBasedClasses; // 0x10c
};

struct USplineComponent : UPrimitiveComponent {
	FInterpCurveVector SplineInfo; // 0x250
	float SplineCurviness; // 0x264
	FColor SplineColor; // 0x268
	float SplineDrawRes; // 0x26c
	float SplineArrowSize; // 0x270
	uint32_t bSplineDisabled : 1; // 0x274
	FInterpCurveFloat SplineReparamTable; // 0x278
};

struct UCombatHUD_ObserverHelp : UCombatHUDEntity_Base {
	uint32_t bInitKeyData : 1; // 0xc0
};

struct UNavMeshGoal_OutOfViewFrom : UNavMeshPathGoalEvaluator {
	FPointer GoalPoly; // 0x7c
	FVector OutOfViewLocation; // 0x84
	uint32_t bShowDebug : 1; // 0x90
};

struct UCombatAnimNotify_AttachStaticMesh : UAnimNotify {
	FName SocketName; // 0x60
	FName TargetBoneName; // 0x68
	ObjectProperty StaticMesh; // 0x70
	ObjectProperty CurrStaticMesh; // 0x78
	int32_t TargetBoneIndex; // 0x80
	FMatrix SocketMatrix; // 0x90
};

struct UInterpTrackParticleReplay : UInterpTrack {
	TArray<FParticleReplayTrackKey> TrackKeys; // 0xa0
	uint32_t bIsCapturingReplay : 1; // 0xb0
};

struct AKeypoint : AActor {
	ComponentProperty SpriteComp; // 0x244
};

struct AMaterialInstanceActor : AActor {
	ObjectProperty MatInst; // 0x244
};

struct UMaterialExpressionDynamicParameter : UMaterialExpression {
	TArray<FString> ParamNames; // 0xb0
};

struct UForceFeedbackManager : UObject {
	uint32_t bAllowsForceFeedback : 1; // 0x60
	uint32_t bIsPaused : 1; // 0x60
	ObjectProperty FFWaveform; // 0x64
	int32_t CurrentSample; // 0x6c
	float ElapsedTime; // 0x70
	float ScaleAllWaveformsBy; // 0x74
	ObjectProperty WaveformInstigator; // 0x78
};

struct UDynamicLightEnvironmentComponent : ULightEnvironmentComponent {
	FPointer State; // 0xa8
	float InvisibleUpdateTime; // 0xb0
	float MinTimeBetweenFullUpdates; // 0xb4
	float VelocityUpdateTimeScale; // 0xb8
	float ShadowInterpolationSpeed; // 0xbc
	int32_t NumVolumeVisibilitySamples; // 0xc0
	float LightingBoundsScale; // 0xc4
	FLinearColor AmbientShadowColor; // 0xc8
	FVector AmbientShadowSourceDirection; // 0xd8
	FLinearColor AmbientGlow; // 0xe4
	float AmbientGlowCycleTime; // 0xf4
	float LightDistance; // 0xf8
	float ShadowDistance; // 0xfc
	uint32_t bCastShadows : 1; // 0x100
	uint32_t bCompositeShadowsFromDynamicLights : 1; // 0x100
	uint32_t bForceCompositeAllLights : 1; // 0x100
	uint32_t bAffectedBySmallDynamicLights : 1; // 0x100
	uint32_t bUseBooleanEnvironmentShadowing : 1; // 0x100
	uint32_t bShadowFromEnvironment : 1; // 0x100
	uint32_t bDynamic : 1; // 0x100
	uint32_t bSynthesizeDirectionalLight : 1; // 0x100
	uint32_t bSynthesizeSHLight : 1; // 0x100
	uint32_t bRequiresNonLatentUpdates : 1; // 0x100
	uint32_t bTraceFromClosestBoundsPoint : 1; // 0x100
	uint32_t bIsCharacterLightEnvironment : 1; // 0x100
	uint32_t bIsFirstPersonLightEnvironment : 1; // 0x100
	uint32_t bOverrideOwnerLightingChannels : 1; // 0x100
	uint32_t bAlwaysInfluencedByDominantDirectionalLight : 1; // 0x100
	float ModShadowFadeoutTime; // 0x104
	float ModShadowFadeoutExponent; // 0x108
	FLinearColor MaxModulatedShadowColor; // 0x10c
	float DominantShadowTransitionStartDistance; // 0x11c
	float DominantShadowTransitionEndDistance; // 0x120
	float MinShadowAngle; // 0x124
	EDynamicLightEnvironmentBoundsMethod BoundsMethod; // 0x128
	FBoxSphereBounds OverriddenBounds; // 0x12c
	FLightingChannelContainer OverriddenLightingChannels; // 0x148
	TArray<ComponentProperty> OverriddenLightComponents; // 0x14c
	float IndirectLightingIntense; // 0x15c
	float MinimumLightingIntense; // 0x160
	float MinimumIndirectLightingIntense; // 0x164
};

struct UMobileMenuScene : UObject {
	FString MenuName; // 0x60
	TArray<ObjectProperty> MenuObjects; // 0x70
	ObjectProperty SceneCaptionFont; // 0x80
	ObjectProperty InputOwner; // 0x88
	uint32_t bSceneDoesNotRequireInput : 1; // 0x90
	uint32_t bRelativeLeft : 1; // 0x90
	uint32_t bRelativeTop : 1; // 0x90
	uint32_t bRelativeWidth : 1; // 0x90
	uint32_t bRelativeHeight : 1; // 0x90
	uint32_t bApplyGlobalScaleLeft : 1; // 0x90
	uint32_t bApplyGlobalScaleTop : 1; // 0x90
	uint32_t bApplyGlobalScaleWidth : 1; // 0x90
	uint32_t bApplyGlobalScaleHeight : 1; // 0x90
	char TouchpadIndex; // 0x94
	float Left; // 0x98
	float Top; // 0x9c
	float Width; // 0xa0
	float Height; // 0xa4
	float InitialLeft; // 0xa8
	float InitialTop; // 0xac
	float InitialWidth; // 0xb0
	float InitialHeight; // 0xb4
	float AuthoredGlobalScale; // 0xb8
	float Opacity; // 0xbc
	ObjectProperty UITouchSound; // 0xc0
	ObjectProperty UIUnTouchSound; // 0xc8
};

struct USeqAct_CombatTutorial_HelpOn : USequenceAction {
	int32_t HelpTitle; // 0x108
	int32_t HelpDesc; // 0x10c
	FString GBACommandToSkip; // 0x110
};

struct UAnimNotify_PlayFaceFXAnim : UAnimNotify_Scripted {
	ObjectProperty FaceFXAnimSetRef; // 0x60
	FString GroupName; // 0x68
	FString AnimName; // 0x78
	ObjectProperty SoundCueToPlay; // 0x88
	uint32_t bOverridePlayingAnim : 1; // 0x90
	float PlayFrequency; // 0x94
};

struct UCombatDataRefDecorationParticle : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString DecalParticle; // 0x70
};

struct UCombatFrontEnd_Exchange : UCombatFrontEnd_Object {
	uint32_t bNeedCheckFocusBack : 1; // 0xd0
	FString PriceIconImage; // 0xd4
	int32_t BuyMoneyType; // 0xe4
	int32_t BuySelectIndex; // 0xe8
	int32_t LastRequestMin; // 0xec
	int32_t PublisherCash; // 0xf0
	TArray<int32_t> BulletSaleList; // 0xf4
};

struct ACombatWeapon_Plant : ACombatWeapon_Skill_Weapon {
	uint32_t bMartyrdom : 1; // 0x1ee8
};

struct UShadowMapTexture2D : UTexture2D {
	int32_t ShadowmapFlags; // 0x214
};

struct APlayerReplicationInfo : AReplicationInfo {
	float Score; // 0x244
	WordProperty Deaths; // 0x248
	char Ping; // 0x24a
	ETTSSpeaker TTSSpeaker; // 0x24b
	char RealPing; // 0x24c
	int32_t NumLives; // 0x250
	FString PlayerName; // 0x254
	FString OldName; // 0x264
	int32_t PlayerID; // 0x274
	ObjectProperty Team; // 0x278
	uint32_t bAdmin : 1; // 0x280
	uint32_t bIsSpectator : 1; // 0x280
	uint32_t bOnlySpectator : 1; // 0x280
	uint32_t bWaitingPlayer : 1; // 0x280
	uint32_t bReadyToPlay : 1; // 0x280
	uint32_t bOutOfLives : 1; // 0x280
	uint32_t bBot : 1; // 0x280
	uint32_t bHasBeenWelcomed : 1; // 0x280
	uint32_t bIsInactive : 1; // 0x280
	uint32_t bFromPreviousLevel : 1; // 0x280
	int32_t StartTime; // 0x284
	FString StringSpectating; // 0x288
	FString StringUnknown; // 0x298
	int32_t Kills; // 0x2a8
	UGameMessage* GameMessageClass; // 0x2ac
	float ExactPing; // 0x2b4
	float ExactRealPing; // 0x2b8
	FString SavedNetworkAddress; // 0x2bc
	FUniqueNetId UniqueId; // 0x2cc
	FUniqueNetId SteamId; // 0x2d4
	FName SessionName; // 0x2dc
	FAutomatedTestingDatum AutomatedTestingData; // 0x2e4
	int32_t StatConnectionCounts; // 0x2ec
	int32_t StatPingTotals; // 0x2f0
	int32_t StatPingMin; // 0x2f4
	int32_t StatPingMax; // 0x2f8
	int32_t StatPKLTotal; // 0x2fc
	int32_t StatPKLMin; // 0x300
	int32_t StatPKLMax; // 0x304
	int32_t StatMaxInBPS; // 0x308
	int32_t StatAvgInBPS; // 0x30c
	int32_t StatMaxOutBPS; // 0x310
	int32_t StatAvgOutBPS; // 0x314
	int32_t RecoilSetCount; // 0x318
	ObjectProperty Avatar; // 0x31c
};

struct UGameplayEventsWriterBase : UGameplayEvents {
	ObjectProperty Game; // 0x1c0
};

struct USeqAct_SetApexClothingParam : USequenceAction {
	uint32_t bEnableApexClothingSimulation : 1; // 0x108
};

struct ACombatGamePlayerCamera : AGamePlayerCamera {
	uint32_t bDOFUpdated : 1; // 0x620
	uint32_t bAdjustDOF : 1; // 0x620
	uint32_t bSetRotateCamPosition : 1; // 0x620
	float DOF_InterpolationDuration; // 0x624
	float DOF_BlurKernelSize; // 0x628
	float DOF_FalloffExponent; // 0x62c
	float DOF_FocusDistance; // 0x630
	float DOF_FocusInnerRadius; // 0x634
	EFocusType DOF_FocusType; // 0x638
	float DOF_MaxFarBlurAmount; // 0x63c
	float DOF_MaxNearBlurAmount; // 0x640
	FVector DOFTraceExtent; // 0x644
	float DOFDistanceInterpSpeed; // 0x650
	float LastDOFRadius; // 0x654
	float LastDOFDistance; // 0x658
	float DOF_RadiusFalloff; // 0x65c
	FVector2D DOF_RadiusRange; // 0x660
	FVector2D DOF_RadiusDistRange; // 0x668
	FVector RotateCamPostion; // 0x670
	FRotator RotateCamRotation; // 0x67c
	FVector RotateCamViewPoint; // 0x688
	int32_t RotateCamYaw; // 0x694
	int32_t RotateCamYawDelta; // 0x698
	float UnitRotateCamDistance; // 0x69c
	float RotateCamDistance; // 0x6a0
	float RotateCamTraceRange; // 0x6a4
};

struct AFluidSurfaceActor : AActor {
	ComponentProperty FluidComponent; // 0x244
	ObjectProperty ProjectileEntryEffect; // 0x24c
};

struct UPathGoalEvaluator : UObject {
	ObjectProperty NextEvaluator; // 0x60
	ObjectProperty GeneratedGoal; // 0x68
	int32_t MaxPathVisits; // 0x70
	int32_t CacheIdx; // 0x74
};

struct USeqVar_RandomInt : USeqVar_Int {
	int32_t Min; // 0xa4
	int32_t Max; // 0xa8
};

struct UCombatDataTableRefModeGroupBindMode : UCombatDataTableType {
	FString ModeCodeName; // 0x6c
	FString ModeGroupCodename; // 0x7c
	int32_t BetaVersion; // 0x8c
};

struct UMaterialExpression : UObject {
	int32_t EditorX; // 0x60
	int32_t EditorY; // 0x64
	uint32_t bRealtimePreview : 1; // 0x68
	uint32_t bNeedToUpdatePreview : 1; // 0x68
	uint32_t bIsParameterExpression : 1; // 0x68
	uint32_t bShowOutputNameOnPin : 1; // 0x68
	uint32_t bHidePreviewWindow : 1; // 0x68
	uint32_t bShowInputs : 1; // 0x68
	uint32_t bShowOutputs : 1; // 0x68
	uint32_t bUsedByStaticParameterSet : 1; // 0x68
	ObjectProperty Material; // 0x6c
	ObjectProperty Function; // 0x74
	FString Desc; // 0x7c
	FColor BorderColor; // 0x8c
	TArray<FName> MenuCategories; // 0x90
	TArray<FExpressionOutput> Outputs; // 0xa0
};

struct USeqVar_ObjectVolume : USeqVar_Object {
	float LastUpdateTime; // 0xc4
	TArray<ObjectProperty> ContainedObjects; // 0xc8
	TArray<UObject*> ExcludeClassList; // 0xd8
	uint32_t bCollidingOnly : 1; // 0xe8
};

struct UCombatHUD_KickUserSelect : UCombatHUDEntity_Base {
	TArray<FBlockAndReportLabelSettingInfo> BlockAndReportLabelSettingInfos; // 0xc0
	int32_t ReportPlayerID; // 0xd0
};

struct UAnimObject : UObject {
	ComponentProperty SkelComponent; // 0x60
};

struct UParticleModuleTypeDataMeshPhysX : UParticleModuleTypeDataMesh {
	ObjectProperty PhysXParSys; // 0x84
	EPhysXMeshRotationMethod PhysXRotationMethod; // 0x8c
	float FluidRotationCoefficient; // 0x90
	FPhysXEmitterVerticalLodProperties VerticalLod; // 0x94
	float ZOffset; // 0xa4
};

struct UParticleModuleSubUVDirect : UParticleModuleSubUVBase {
	FRawDistributionVector SubUVPosition; // 0x68
	FRawDistributionVector SubUVSize; // 0x8c
};

struct UNavMeshGoal_WithinDistanceEnvelope : UNavMeshPathGoalEvaluator {
	float MaxDistance; // 0x7c
	float MinDistance; // 0x80
	float MinTraversalDist; // 0x84
	FVector EnvelopeTestPoint; // 0x88
};

struct ACombatBombsiteVolume : AVolume {
	FString BombsiteName; // 0x280
	EObjectIconType MapIconType; // 0x290
	ObjectProperty SiteEffect; // 0x294
	float SiteEffectSizeRatio; // 0x29c
	int32_t PlantedBombID; // 0x2a0
};

struct ANxCylindricalForceFieldCapsule : ANxCylindricalForceField {
	ComponentProperty RenderComponent; // 0x2c8
};

struct UCombatGFxMoviePlayer : UGFxMoviePlayer {
	ObjectProperty CBTableDepot; // 0x1e4
	ObjectProperty OSS; // 0x1ec
	ObjectProperty ChannelTran; // 0x1f4
	ObjectProperty LobbyChatTran; // 0x1fc
	ObjectProperty CTran; // 0x204
	ObjectProperty ITran; // 0x20c
	ObjectProperty STran; // 0x214
	ObjectProperty LTran; // 0x21c
	ObjectProperty CommuTran; // 0x224
	ObjectProperty ClanTran; // 0x22c
	ObjectProperty MailTran; // 0x234
	ObjectProperty AwaitTran; // 0x23c
	ObjectProperty RandomBoxTran; // 0x244
	ObjectProperty GameOptionTran; // 0x24c
	ObjectProperty UserInfoTran; // 0x254
	ObjectProperty MainContainer; // 0x25c
	ObjectProperty CommandMC; // 0x264
	ObjectProperty SystemCounterMC; // 0x26c
	ObjectProperty NoticeMC; // 0x274
	FString MoviePath; // 0x27c
	ObjectProperty myHUD; // 0x28c
	FString IconImageHeadPath; // 0x294
	FString EmptyImageName; // 0x2a4
	FString PreLoadPackagePath; // 0x2b4
	ObjectProperty DialogManager; // 0x2c4
	ObjectProperty ChatManager; // 0x2cc
	UCombatChatManager* ChatManagerClass; // 0x2d4
	ObjectProperty OptionClass; // 0x2dc
	ObjectProperty OverImmersionGuardClass; // 0x2e4
	ObjectProperty VoiceChatOptionClass; // 0x2ec
	uint32_t bIsChatFocus : 1; // 0x2f4
	TArray<FURLInfo> URLList; // 0x2f8
};

struct USeqEvent_HudRenderImage : USeqEvent_HudRender {
	FLinearColor DisplayColor; // 0x140
	FVector DisplayLocation; // 0x150
	ObjectProperty DisplayTexture; // 0x15c
	float XL; // 0x164
	float YL; // 0x168
	float U; // 0x16c
	float V; // 0x170
	float UL; // 0x174
	float VL; // 0x178
};

struct UUIDataProvider_OnlineFriendMessages : UUIDataProvider_OnlinePlayerDataBase {
	TArray<FOnlineFriendMessage> Messages; // 0x74
	FString SendingPlayerNameCol; // 0x84
	FString bIsFriendInviteCol; // 0x94
	FString bWasAcceptedCol; // 0xa4
	FString bWasDeniedCol; // 0xb4
	FString MessageCol; // 0xc4
	FString LastInviteFrom; // 0xd4
};

struct USeqEvent_ParticleEvent : USequenceEvent {
	EParticleEventOutputType EventType; // 0x128
	FVector EventPosition; // 0x12c
	float EventEmitterTime; // 0x138
	FVector EventVelocity; // 0x13c
	float EventParticleTime; // 0x148
	FVector EventNormal; // 0x14c
	uint32_t UseRelfectedImpactVector : 1; // 0x158
};

struct UCombatGameTableDepot : UObject {
	ObjectProperty LocalizedTextTable; // 0x60
	ObjectProperty LocalizedChatCommandDataTable; // 0x68
	TArray<ObjectProperty> refTable; // 0x70
	TMap<None, None> MapCodeNameMap; // 0x80
	TMap<None, None> ModeCodeNameMap; // 0xc8
	TMap<None, None> ModeGroupCodeNameMap; // 0x110
	TMap<None, None> MissionCodeNameMap; // 0x158
	TMap<None, None> InitItemCodeNameMap; // 0x1a0
	TMap<None, None> ItemCodeNameMap; // 0x1e8
	TMap<None, None> ShopCodeNameMap; // 0x230
	TMap<None, None> ShopCategoryTabMap; // 0x278
	TMap<None, None> ShopCategoryCodeNameMap; // 0x2c0
	TMap<None, None> ShopItemCodeNameMap; // 0x308
	TMap<None, None> ShopItemGroupMap; // 0x350
	TMap<None, None> ShopItemShortcutMap; // 0x398
	TMap<None, None> AchievementCodeNameMap; // 0x3e0
	TMap<None, None> GameScoringCodeNameMap; // 0x428
	TMap<None, None> StatCodeNameMap; // 0x470
	TMap<None, None> PickupCodeNameMap; // 0x4b8
	TMap<None, None> DropCodeNameMap; // 0x500
	TMap<None, None> GroupSkillCodeNameMap; // 0x548
	TMap<None, None> SkillLicenseCodeNameMap; // 0x590
	TMap<None, None> RankCodeNameMap; // 0x5d8
	TMap<None, None> ModeOptionCodeNameMap; // 0x620
	TMap<None, None> ItemDetailinfoMap; // 0x668
	TMap<None, None> ItemClassNameMap; // 0x6b0
	TMap<None, None> ItemAttachmentWeaponNameMap; // 0x6f8
	TMap<None, None> CallingCardNameMap; // 0x740
	TMap<None, None> ShopSellItemMap; // 0x788
	TMap<None, None> EmblemNameMap; // 0x7d0
	TMap<None, None> QuestNameMap; // 0x818
	TMap<None, None> HelpTabCodeNameMap; // 0x860
	TMap<None, None> HelpDetailInfoCodeNameMap; // 0x8a8
	TMap<None, None> StatWeaponGroupNameMap; // 0x8f0
	TMap<None, None> SystemImageMap; // 0x938
	TMap<None, None> BoostCodeNameMap; // 0x980
	TMap<None, None> ShopItemPriceMap; // 0x9c8
	TMap<None, None> RewardCodeNameMap; // 0xa10
	TMap<None, None> ModeGuideCodeNameMap; // 0xa58
	TMap<None, None> FrontEndModeMap; // 0xaa0
	TMap<None, None> ModeTipCodeNameMap; // 0xae8
	TMap<None, None> BGMNameMap; // 0xb30
	TMap<None, None> AttendCodeNameMap; // 0xb78
	TMap<None, None> DefineCodeNameMap; // 0xbc0
	TMap<None, None> KillComboCodeNameMap; // 0xc08
	TMap<None, None> AIRewardRankCodeNameMap; // 0xc50
	TMap<None, None> TypeDefineDataMap; // 0xc98
	TMap<None, None> RandomBoxCubeCodeNameMap; // 0xce0
	TMap<None, None> RematchOptionCodeNameMap; // 0xd28
	TMap<None, None> GameChannelMap; // 0xd70
	TMap<None, None> GameChannelPropertyMap; // 0xdb8
	TMap<None, None> SystemTextColorMap; // 0xe00
	TMap<None, None> LimitSaleMap; // 0xe48
	TMap<None, None> SteamItemMap; // 0xe90
	TMap<None, None> TierMap; // 0xed8
	TMap<None, None> TierSeasonMap; // 0xf20
	TMap<None, None> PenaltyMap; // 0xf68
	TMap<None, None> PenaltyBindMap; // 0xfb0
	TMap<None, None> FormulaMap; // 0xff8
	TMap<None, None> QuestShortcutMap; // 0x1040
	TMap<None, None> ExchangeCashMap; // 0x1088
	TMap<None, None> TodayGameMap; // 0x10d0
	TMap<None, None> TodayGameBindModeMap; // 0x1118
	TMap<None, None> CompetitivePenaltyMap; // 0x1160
	int32_t MaxRank; // 0x11a8
	uint32_t bFinishedLoadAllTables : 1; // 0x11ac
	TMap<None, None> ItemUnLockRecipeMap; // 0x11b0
	TMap<None, None> CompetitiveBindModeSeasonMap; // 0x11f8
	TMap<None, None> CompetitiveSeasonMap; // 0x1240
	TMap<None, None> PingGroupMap; // 0x1288
	TMap<None, None> PingGroupRegionMap; // 0x12d0
	TMap<None, None> NationTableMap; // 0x1318
	TMap<None, None> SupportUserGroupMap; // 0x1360
	TMap<None, None> PeriodAttendRewardMap; // 0x13a8
	TMap<None, None> MatchMakingRatingMap; // 0x13f0
	TMap<None, None> MatchMakingOptionMap; // 0x1438
	TMap<None, None> MarkerOptionMap; // 0x1480
	TMap<None, None> ARaceEquipMap; // 0x14c8
	TMap<None, None> ShopRotationMap; // 0x1510
	TMap<None, None> EvolveModeEquipMap; // 0x1558
	TMap<None, None> EvolveModeOptionMap; // 0x15a0
	TMap<None, None> ExtendPeriodBindMap; // 0x15e8
	TMap<None, None> SeasonPassMap; // 0x1630
	TMap<None, None> ClanColorMap; // 0x1678
	TMap<None, None> ClanMarkMap; // 0x16c0
	TMap<None, None> ItemOptionMap; // 0x1708
	TMap<None, None> ItemOptionBindMap; // 0x1750
	TMap<None, None> ClanTierEmblemMap; // 0x1798
	TArray<FDataTableInfo> DataTableList; // 0x17e0
	TArray<RefTableType> UnnecessaryDataTableListOnDedi; // 0x17f0
	TArray<FName> StatTableEventKeyList; // 0x1800
};

struct ACombatPawn_SentryGun : ACombatPawn_AttackSkillActor {
	uint32_t Reloading : 1; // 0x1274
	FName ReloadAnim; // 0x1278
	ObjectProperty BaseControl; // 0x1280
};

struct ULevelStreamingDistance : ULevelStreaming {
	FVector Origin; // 0x100
	float MaxDistance; // 0x10c
};

struct UFaceFXAnimSet : UObject {
	FPointer InternalFaceFXAnimSet; // 0x60
	TArray<char> RawFaceFXAnimSetBytes; // 0x68
	TArray<char> RawFaceFXMiniSessionBytes; // 0x78
	int32_t NumLoadErrors; // 0x88
};

struct UCombatRescueGameMovie : UCombatTeamGameMovie {
	ObjectProperty HostageContainer; // 0xad0
	uint32_t bUpdate : 1; // 0xad8
	ObjectProperty HostageStateMovie; // 0xadc
	ObjectProperty RepairTimeBarMC; // 0xae4
};

struct AKActor : ADynamicSMActor {
	uint32_t bDamageAppliesImpulse : 1; // 0x294
	uint32_t bWakeOnLevelStart : 1; // 0x294
	uint32_t bCurrentSlide : 1; // 0x294
	uint32_t bSlideActive : 1; // 0x294
	uint32_t bEnableStayUprightSpring : 1; // 0x294
	uint32_t bLimitMaxPhysicsVelocity : 1; // 0x294
	uint32_t bNeedsRBStateReplication : 1; // 0x294
	uint32_t bDisableClientSidePawnInteractions : 1; // 0x294
	ComponentProperty ImpactEffectComponent; // 0x298
	ComponentProperty ImpactSoundComponent; // 0x2a0
	ComponentProperty ImpactSoundComponent2; // 0x2a8
	float LastImpactTime; // 0x2b0
	FPhysEffectInfo ImpactEffectInfo; // 0x2b4
	ComponentProperty SlideEffectComponent; // 0x2cc
	ComponentProperty SlideSoundComponent; // 0x2d4
	float LastSlideTime; // 0x2dc
	FPhysEffectInfo SlideEffectInfo; // 0x2e0
	float StayUprightTorqueFactor; // 0x2f8
	float StayUprightMaxTorque; // 0x2fc
	float MaxPhysicsVelocity; // 0x300
	FRigidBodyState RBState; // 0x310
	float AngErrorAccumulator; // 0x350
	FVector ReplicatedDrawScale3D; // 0x354
	FVector InitialLocation; // 0x360
	FRotator InitialRotation; // 0x36c
};

struct UCombatFrontEnd_Channel : UCombatFrontEnd_Scene {
	FButtonInfo ButtonList[0x3]; // 0xd0
	int32_t BoosterList[0x2]; // 0x10c
	ObjectProperty ChannelTran; // 0x114
	int32_t SelectChannelIndex; // 0x11c
	TArray<FOnlineBannerInfo> BannerImgDownloadData; // 0x120
	TArray<FBannerInfo> BannerImgURL; // 0x130
	int32_t BannerDurationTime; // 0x140
};

struct UCombatGameViewportClient : UGameViewportClient {
	FString HintLocFileName; // 0x1a0
	TArray<F__ASPECT> ScreenResList; // 0x1b0
	uint32_t bShowReflectionsOnly : 1; // 0x1c0
	uint32_t bShowSpawnGroupIndex : 1; // 0x1c0
	TArray<FColor> BitMapForScreenShot; // 0x1c4
	TArray<FName> FlushkeyInputNames; // 0x1d4
};

struct ALiftExit : ANavigationPoint {
	ObjectProperty MyLiftCenter; // 0x33c
	uint32_t bExitOnly : 1; // 0x344
};

struct ACombatPlayerStart : APlayerStart {
	FVector StartVelocityInTheAir; // 0x34c
	uint32_t bPlaceInTheAir : 1; // 0x358
	uint32_t bUseFirstSpawn : 1; // 0x358
	char AreaIndex; // 0x35c
	ComponentProperty TeamSpriteComponent; // 0x360
	ComponentProperty InTheAirSpriteComponent; // 0x368
	ComponentProperty InTheAirArrowComponent; // 0x370
	FVector FloorLocation; // 0x378
};

struct USeqAct_SetParticleSysParam : USequenceAction {
	TArray<FParticleSysParam> InstanceParameters; // 0x108
	uint32_t bOverrideScalar : 1; // 0x118
	float ScalarValue; // 0x11c
};

struct UParticleModuleLocation_Seeded : UParticleModuleLocation {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x94
};

struct ACombatRescueGameHUD : ACombatTeamGameHUD {
	uint32_t bStateNameDirty : 1; // 0x62c
	uint32_t bMovePositionDirty : 1; // 0x62c
};

struct USeqAct_RemoveState : USequenceAction {
	FString StateName; // 0x108
};

struct UParticleModuleTypeDataBeam : UParticleModuleTypeDataBase {
	EBeamMethod BeamMethod; // 0x68
	EBeamEndPointMethod EndPointMethod; // 0x69
	FRawDistributionFloat Distance; // 0x6c
	FRawDistributionVector EndPoint; // 0x90
	int32_t TessellationFactor; // 0xb4
	FRawDistributionFloat EmitterStrength; // 0xb8
	FRawDistributionFloat TargetStrength; // 0xdc
	FRawDistributionVector EndPointDirection; // 0x100
	int32_t TextureTile; // 0x124
	uint32_t RenderGeometry : 1; // 0x128
	uint32_t RenderDirectLine : 1; // 0x128
	uint32_t RenderLines : 1; // 0x128
	uint32_t RenderTessellation : 1; // 0x128
};

struct UGameThirdPersonCamera : UGameCameraBase {
	float WorstLocBlockedPct; // 0x6c
	float WorstLocPenetrationExtentScale; // 0x70
	float PenetrationBlendOutTime; // 0x74
	float PenetrationBlendInTime; // 0x78
	float PenetrationBlockedPct; // 0x7c
	float PenetrationExtentScale; // 0x80
	FVector LastActualOriginOffset; // 0x84
	FVector LastActualCameraOrigin; // 0x90
	FRotator LastActualCameraOriginRot; // 0x9c
	float OriginOffsetInterpSpeed; // 0xa8
	FVector LastViewOffset; // 0xac
	float LastCamFOV; // 0xb8
	FVector LastIdealCameraOrigin; // 0xbc
	FRotator LastIdealCameraOriginRot; // 0xc8
	ObjectProperty ThirdPersonCamDefault; // 0xd4
	UGameThirdPersonCameraMode* ThirdPersonCamDefaultClass; // 0xdc
	ObjectProperty CurrentCamMode; // 0xe4
	float LastHeightAdjustment; // 0xec
	float LastPitchAdjustment; // 0xf0
	float LastYawAdjustment; // 0xf4
	float LeftoverPitchAdjustment; // 0xf8
	float Focus_BackOffStrength; // 0xfc
	float Focus_StepHeightAdjustment; // 0x100
	int32_t Focus_MaxTries; // 0x104
	float Focus_FastAdjustKickInTime; // 0x108
	float LastFocusChangeTime; // 0x10c
	FVector ActualFocusPointWorldLoc; // 0x110
	FVector LastFocusPointLoc; // 0x11c
	FCamFocusPointParams FocusPoint; // 0x128
	uint32_t bFocusPointSet : 1; // 0x160
	uint32_t bFocusPointSuccessful : 1; // 0x160
	uint32_t bDoingACameraTurn : 1; // 0x160
	uint32_t bTurnAlignTargetWhenFinished : 1; // 0x160
	uint32_t bDrawDebug : 1; // 0x160
	uint32_t bDoingDirectLook : 1; // 0x160
	uint32_t bDebugChangedCameraMode : 1; // 0x160
	uint32_t bDoSeamlessPivotTransition : 1; // 0x160
	float TurnCurTime; // 0x164
	int32_t TurnStartAngle; // 0x168
	int32_t TurnEndAngle; // 0x16c
	float TurnTotalTime; // 0x170
	float TurnDelay; // 0x174
	int32_t LastPostCamTurnYaw; // 0x178
	int32_t DirectLookYaw; // 0x17c
	float DirectLookInterpSpeed; // 0x180
	float WorstLocInterpSpeed; // 0x184
	FVector LastWorstLocationLocal; // 0x188
	FVector LastWorstLocation; // 0x194
	FVector LastPreModifierCameraLoc; // 0x1a0
	FRotator LastPreModifierCameraRot; // 0x1ac
	TArray<FPenetrationAvoidanceFeeler> PenetrationAvoidanceFeelers; // 0x1b8
	FVector LastOffsetAdjustment; // 0x1c8
};

struct UInterpTrackMove : UInterpTrack {
	FInterpCurveVector PosTrack; // 0xa0
	FInterpCurveVector EulerTrack; // 0xb4
	FInterpLookupTrack LookupTrack; // 0xc8
	FName LookAtGroupName; // 0xd8
	float LinCurveTension; // 0xe0
	float AngCurveTension; // 0xe4
	uint32_t bUseQuatInterpolation : 1; // 0xe8
	uint32_t bShowArrowAtKeys : 1; // 0xe8
	uint32_t bDisableMovement : 1; // 0xe8
	uint32_t bShowTranslationOnCurveEd : 1; // 0xe8
	uint32_t bShowRotationOnCurveEd : 1; // 0xe8
	uint32_t bHide3DTrack : 1; // 0xe8
	EInterpTrackMoveFrame MoveFrame; // 0xec
	EInterpTrackMoveRotMode RotMode; // 0xed
};

struct ACombatMapPoint : AActor {
	EObjectIconType iconType; // 0x244
	int32_t DesStringID; // 0x248
	int32_t Priority; // 0x24c
	FName MapPointName; // 0x250
};

struct UGripBTInterface : UObject {
	float DeltaTime; // 0x60
	float Time; // 0x64
	ObjectProperty Blackboard; // 0x68
	ObjectProperty ActionFramework; // 0x70
};

struct AKActorSpawnable : AKActor {
	uint32_t bRecycleScaleToZero : 1; // 0x378
	uint32_t bScalingToZero : 1; // 0x378
};

struct UPartyBeacon : UObject {
	FPointer VfTable_FTickableObject; // 0x60
	int32_t PartyBeaconPort; // 0x68
	FPointer Socket; // 0x6c
	uint32_t bIsInTick : 1; // 0x74
	uint32_t bWantsDeferredDestroy : 1; // 0x74
	uint32_t bShouldTick : 1; // 0x74
	float HeartbeatTimeout; // 0x78
	float ElapsedHeartbeatTime; // 0x7c
	FName BeaconName; // 0x80
	DelegateProperty __OnDestroyComplete__Delegate; // 0x88
};

struct UTerrainWeightMapTexture : UTexture2D {
	ObjectProperty ParentTerrain; // 0x214
	TArray<FPointer> WeightedMaterials; // 0x21c
};

struct UNavMeshGoal_At : UNavMeshPathGoalEvaluator {
	FVector Goal; // 0x7c
	float GoalDist; // 0x88
	uint32_t bKeepPartial : 1; // 0x8c
	uint32_t bWeightPartialByDist : 1; // 0x8c
	uint32_t bGoalInSamePolyAsAnchor : 1; // 0x8c
	float PartialDistSq; // 0x90
	FPointer GoalPoly; // 0x94
	FPointer PartialGoal; // 0x9c
};

struct UAnimNodeSynch : UAnimNodeBlendBase {
	TArray<FSynchGroup> Groups; // 0x100
};

struct UCombatDataTableRefClanAttendanceReward : UCombatDataTableType {
	int32_t Idx; // 0x6c
	int32_t ClanLevel; // 0x70
	FClanAttendRewardData AttendReward[0x2]; // 0x74
};

struct UInterpTrackInstSound : UInterpTrackInst {
	float LastUpdatePosition; // 0x60
	ComponentProperty PlayAudioComp; // 0x64
};

struct ACombatDemGameReplicationInfo : ACBGameReplicationInfo {
	TArray<ObjectProperty> Bombsites; // 0x380
	TArray<ObjectProperty> Bombs; // 0x390
	int32_t TotalBombsites; // 0x3a0
	int32_t TotalBombs; // 0x3a4
	WordProperty PlantedBombSettingTime; // 0x3a8
};

struct ACombatDroppedSupplies_MediKit : ACombatDroppedSupplies {
	int32_t HealRate; // 0x35c
};

struct ACombatAssasinGame : ACombatPVPGame {
	uint32_t bVIPMove : 1; // 0x788
	uint32_t bVIPalive : 1; // 0x788
	EGamePhase GameStatus; // 0x78c
	WordProperty EVACRemainTime; // 0x78e
};

struct UMcpUserCloudFileDownload : UMcpServiceBase {
	FString EnumerateCloudFilesUrl; // 0x78
	FString ReadCloudFileUrl; // 0x88
	FString WriteCloudFileUrl; // 0x98
	FString DeleteCloudFileUrl; // 0xa8
	TArray<FMcpUserCloudFilesEntry> UserCloudFileRequests; // 0xb8
	TArray<DelegateProperty> EnumerateUserFilesCompleteDelegates; // 0xc8
	TArray<DelegateProperty> ReadUserFileCompleteDelegates; // 0xd8
	TArray<DelegateProperty> WriteUserFileCompleteDelegates; // 0xe8
	TArray<DelegateProperty> DeleteUserFileCompleteDelegates; // 0xf8
	DelegateProperty __OnEnumerateUserFilesComplete__Delegate; // 0x108
	DelegateProperty __OnReadUserFileComplete__Delegate; // 0x118
	DelegateProperty __OnWriteUserFileComplete__Delegate; // 0x128
	DelegateProperty __OnDeleteUserFileComplete__Delegate; // 0x138
};

struct UGripBTComment : UGripBTNode {
	uint32_t bMoveNodesInBox : 1; // 0xbc
	uint32_t bWrapped : 1; // 0xbc
	uint32_t bLimitFontSize : 1; // 0xbc
	uint32_t bDrawBox : 1; // 0xbc
	uint32_t bFilled : 1; // 0xbc
	int32_t SizeX; // 0xc0
	int32_t SizeY; // 0xc4
	int32_t BorderWidth; // 0xc8
	FColor BorderColor; // 0xcc
	FColor FillColor; // 0xd0
};

struct AStaticMeshCollectionActor : AStaticMeshActorBase {
	TArray<ComponentProperty> StaticMeshComponents; // 0x244
	int32_t MaxStaticMeshComponents; // 0x254
};

struct USoundCue : UObject {
	FName SoundClass; // 0x60
	ESoundClassName SoundClassName; // 0x68
	uint32_t bDebug : 1; // 0x6c
	ObjectProperty FirstNode; // 0x70
	TMap<None, None> EditorData; // 0x78
	float MaxAudibleDistance; // 0xc0
	float VolumeMultiplier; // 0xc4
	float PitchMultiplier; // 0xc8
	float Duration; // 0xcc
	ObjectProperty FaceFXAnimSetRef; // 0xd0
	FString FaceFXGroupName; // 0xd8
	FString FaceFXAnimName; // 0xe8
	int32_t MaxConcurrentPlayCount; // 0xf8
	int32_t CurrentPlayCount; // 0xfc
	FName SoundGroup; // 0x100
};

struct USeqAct_GetVectorComponents : USequenceAction {
	FVector InVector; // 0x108
	float X; // 0x114
	float Y; // 0x118
	float Z; // 0x11c
};

struct USequenceObject : UObject {
	int32_t ObjInstanceVersion; // 0x60
	ObjectProperty ParentSequence; // 0x64
	FString ObjName; // 0x6c
	FString ObjComment; // 0x7c
	uint32_t bDeletable : 1; // 0x8c
	uint32_t bDrawFirst : 1; // 0x8c
	uint32_t bDrawLast : 1; // 0x8c
	uint32_t bOutputObjCommentToScreen : 1; // 0x8c
	uint32_t bSuppressAutoComment : 1; // 0x8c
	int32_t DrawWidth; // 0x90
	int32_t DrawHeight; // 0x94
};

struct ACombatSplineActor : ASplineActor {
	uint32_t bSpawnPoint : 1; // 0x2ac
	uint32_t bMovementOnly : 1; // 0x2ac
	uint32_t bFixedTrack : 1; // 0x2ac
	uint32_t bSkipDestroy : 1; // 0x2ac
	uint32_t bAddedSplineActorList : 1; // 0x2ac
	float MovementSpeedModifier; // 0x2b0
	float WaitingPeriod; // 0x2b4
	FColor DefaultPointColor; // 0x2b8
	FColor WaitingPointColor; // 0x2bc
	FColor MovementPointColor; // 0x2c0
	char TeamIndex; // 0x2c4
	ESplineSpeedType MovementSpeedType; // 0x2c5
	ESplineActorType SPawnActorType; // 0x2c6
	ComponentProperty SpriteComp; // 0x2c8
	ComponentProperty SphereComp; // 0x2d0
};

struct ACombatOccupiedAreaData : AReplicationInfo {
	int32_t TotalOccupierNum; // 0x244
	float UpdateOccupationTime; // 0x248
	int32_t OccupationScore; // 0x24c
	ObjectProperty Target; // 0x250
	ObjectProperty Team; // 0x258
};

struct UMobileInputZone : UObject {
	EZoneType Type; // 0x60
	char TouchpadIndex; // 0x61
	EZoneState State; // 0x62
	EZoneSlideType SlideType; // 0x63
	FString Caption; // 0x64
	FName InputKey; // 0x74
	FName HorizontalInputKey; // 0x7c
	FName TapInputKey; // 0x84
	FName DoubleTapInputKey; // 0x8c
	float VertMultiplier; // 0x94
	float HorizMultiplier; // 0x98
	float Acceleration; // 0x9c
	float Smoothing; // 0xa0
	float EscapeVelocityStrength; // 0xa4
	uint32_t bScalePawnMovement : 1; // 0xa8
	uint32_t bRelativeX : 1; // 0xa8
	uint32_t bRelativeY : 1; // 0xa8
	uint32_t bRelativeSizeX : 1; // 0xa8
	uint32_t bRelativeSizeY : 1; // 0xa8
	uint32_t bActiveSizeYFromX : 1; // 0xa8
	uint32_t bSizeYFromSizeX : 1; // 0xa8
	uint32_t bApplyGlobalScaleToActiveSizes : 1; // 0xa8
	uint32_t bCenterX : 1; // 0xa8
	uint32_t bCenterY : 1; // 0xa8
	uint32_t bIsInvisible : 1; // 0xa8
	uint32_t bQuickDoubleTap : 1; // 0xa8
	uint32_t bCenterOnEvent : 1; // 0xa8
	uint32_t bSliderHasTrack : 1; // 0xa8
	uint32_t bFloatingTiltZone : 1; // 0xa8
	uint32_t bUseGentleTransitions : 1; // 0xa8
	uint32_t bAllowFirstDeltaForTrackballZone : 1; // 0xa8
	uint32_t bRenderGuides : 1; // 0xa8
	uint32_t bIsDoubleTapAndHold : 1; // 0xa8
	float X; // 0xac
	float Y; // 0xb0
	float SizeX; // 0xb4
	float SizeY; // 0xb8
	float ActiveSizeX; // 0xbc
	float ActiveSizeY; // 0xc0
	float InitialX; // 0xc4
	float InitialY; // 0xc8
	float InitialSizeX; // 0xcc
	float InitialSizeY; // 0xd0
	float InitialActiveSizeX; // 0xd4
	float InitialActiveSizeY; // 0xd8
	float AuthoredGlobalScale; // 0xdc
	float Border; // 0xe0
	float ResetCenterAfterInactivityTime; // 0xe4
	float TapDistanceConstraint; // 0xe8
	float ActivateTime; // 0xec
	float DeactivateTime; // 0xf0
	FColor RenderColor; // 0xf4
	float InactiveAlpha; // 0xf8
	float CaptionXAdjustment; // 0xfc
	float CaptionYAdjustment; // 0x100
	ObjectProperty OverrideTexture1; // 0x104
	FString OverrideTexture1Name; // 0x10c
	FTextureUVs OverrideUVs1; // 0x11c
	ObjectProperty OverrideTexture2; // 0x12c
	FString OverrideTexture2Name; // 0x134
	FTextureUVs OverrideUVs2; // 0x144
	FVector2D InitialLocation; // 0x154
	FVector2D CurrentLocation; // 0x15c
	FVector2D CurrentCenter; // 0x164
	FVector2D InitialCenter; // 0x16c
	FVector2D PreviousLocations[0x6]; // 0x174
	float PreviousMoveDeltaTimes[0x6]; // 0x1a4
	int32_t PreviousLocationCount; // 0x1bc
	float LastTouchTime; // 0x1c0
	float TimeSinceLastTapRepeat; // 0x1c4
	float AnimatingFadeOpacity; // 0x1c8
	ObjectProperty InputOwner; // 0x1cc
	float TransitionTime; // 0x1d4
	FVector2D EscapeVelocity; // 0x1d8
	TArray<ObjectProperty> MobileSeqEventHandlers; // 0x1e0
	FVector2D LastAxisValues; // 0x1f0
	float TotalActiveTime; // 0x1f8
	float LastWentActiveTime; // 0x1fc
	DelegateProperty __OnProcessInputDelegate__Delegate; // 0x200
	DelegateProperty __OnTapDelegate__Delegate; // 0x210
	DelegateProperty __OnDoubleTapDelegate__Delegate; // 0x220
	DelegateProperty __OnProcessSlide__Delegate; // 0x230
	DelegateProperty __OnPreDrawZone__Delegate; // 0x240
	DelegateProperty __OnPostDrawZone__Delegate; // 0x250
};

struct ACombatVisBlocker : AActor {
	ComponentProperty CC; // 0x244
	TArray<ObjectProperty> InVolumePawnList; // 0x24c
};

struct ACombatWeaponPickupFactory_MeleeMode : ACombatWeaponPickupFactory {
	uint32_t bDropWeaponOnDeath : 1; // 0x44c
	uint32_t bRespawnDelaying : 1; // 0x44c
	float RespawnDelayedTime; // 0x450
};

struct UInterpTrack : UObject {
	FPointer VfTable_FInterpEdInputInterface; // 0x60
	FPointer CurveEdVTable; // 0x68
	TArray<ObjectProperty> SubTracks; // 0x70
	UInterpTrackInst* TrackInstClass; // 0x80
	ETrackActiveCondition ActiveCondition; // 0x88
	FString TrackTitle; // 0x8c
	uint32_t bOnePerGroup : 1; // 0x9c
	uint32_t bDirGroupOnly : 1; // 0x9c
	uint32_t bDisableTrack : 1; // 0x9c
	uint32_t bIsAnimControlTrack : 1; // 0x9c
	uint32_t bSubTrackOnly : 1; // 0x9c
	uint32_t bVisible : 1; // 0x9c
	uint32_t bIsSelected : 1; // 0x9c
	uint32_t bIsRecording : 1; // 0x9c
	uint32_t bIsCollapsed : 1; // 0x9c
};

struct UCombatDataTableRefSystemTextColor : UCombatDataTableType {
	int32_t GRADE; // 0x6c
	FString TextColor; // 0x70
};

struct UCombatHandGripController : USkelControlSingleBone {
	FName WeaponBoneName; // 0x100
	FName WeaponBoneName_Left; // 0x108
	FName GripSocketName; // 0x110
};

struct UAnimNotify_Sound : UAnimNotify {
	ObjectProperty SoundCue; // 0x60
	TArray<ObjectProperty> SoundCueList; // 0x68
	TArray<FName> SoundGroupList; // 0x78
	uint32_t bFollowActor : 1; // 0x88
	uint32_t bIgnoreIfActorHidden : 1; // 0x88
	uint32_t bPlaySoundcueByActor : 1; // 0x88
	FName BoneName; // 0x8c
	float PercentToPlay; // 0x94
	float VolumeMultiplier; // 0x98
	float PitchMultiplier; // 0x9c
};

struct ACombatLCTFFlagActor : AActor {
	uint32_t bIsActive : 1; // 0x244
	uint32_t SetTeamMax : 1; // 0x244
	uint32_t bFlagReusable : 1; // 0x244
	uint32_t HeldShowPositionSameTeam : 1; // 0x244
	uint32_t HeldShowPositionOtherTeam : 1; // 0x244
	uint32_t DroppedTeamReset : 1; // 0x244
	uint32_t DroppedCanPickOtherTeam : 1; // 0x244
	uint32_t DroppedPickToSpawnOtherTeam : 1; // 0x244
	uint32_t DroppedShowPositionSameTeam : 1; // 0x244
	uint32_t DroppedShowPositionOtherTeam : 1; // 0x244
	uint32_t bTouchFlag : 1; // 0x244
	int32_t LCTFActorIndex; // 0x248
	Team OwnerTeam; // 0x24c
	Team OriginalTeam; // 0x24d
	char SpawnID; // 0x24e
	char HoistedID; // 0x24f
	FName AttachmentSocket; // 0x250
	float AttachScale; // 0x258
	ComponentProperty SkelMesh; // 0x25c
	ComponentProperty LightEnvironment; // 0x264
	float DroppedBackTime; // 0x26c
	ComponentProperty PSC; // 0x270
	ObjectProperty HomeBase; // 0x278
	ObjectProperty HoistedPoint; // 0x280
	FName StateName; // 0x288
	int32_t missionArrayIndex; // 0x290
	float SkelScale; // 0x294
	ObjectProperty HeldPRI; // 0x298
};

struct UCombatAnim_TurnInPlace_Player : UAnimNodeSequenceBlendBase {
	TArray<FTIP_Transition> TIP_Transitions; // 0x168
	float TransitionBlendTime; // 0x178
	int32_t ActiveChildIndex; // 0x17c
	float BlendTimeToGo; // 0x180
};

struct UInterpTrackInstVisibility : UInterpTrackInst {
	EVisibilityTrackAction Action; // 0x60
	float LastUpdatePosition; // 0x64
};

struct UOnlineTitleFileDownloadBase : UMCPBase {
	TArray<DelegateProperty> ReadTitleFileCompleteDelegates; // 0x80
	TArray<DelegateProperty> RequestTitleFileListCompleteDelegates; // 0x90
	FString BaseUrl; // 0xa0
	FString RequestFileListURL; // 0xb0
	FString RequestFileURL; // 0xc0
	float TimeOut; // 0xd0
	TArray<FFileNameToURLMapping> FilesToUrls; // 0xd4
	DelegateProperty __OnReadTitleFileComplete__Delegate; // 0xe4
	DelegateProperty __OnRequestTitleFileListComplete__Delegate; // 0xf4
};

struct USkelControlFootPlacement : USkelControlLimb {
	float FootOffset; // 0x128
	EAxis FootUpAxis; // 0x12c
	FRotator FootRotOffset; // 0x130
	uint32_t bInvertFootUpAxis : 1; // 0x13c
	uint32_t bOrientFootToGround : 1; // 0x13c
	uint32_t bOnlyEnableForUpAdjustment : 1; // 0x13c
	float MaxUpAdjustment; // 0x140
	float MaxDownAdjustment; // 0x144
	float MaxFootOrientAdjust; // 0x148
};

struct ACameraActor : AActor {
	uint32_t bConstrainAspectRatio : 1; // 0x244
	uint32_t bCamOverridePostProcess : 1; // 0x244
	float AspectRatio; // 0x248
	float FOVAngle; // 0x24c
	float CamOverridePostProcessAlpha; // 0x250
	FPostProcessSettings CamOverridePostProcess; // 0x254
	ComponentProperty DrawFrustum; // 0x3b8
	ComponentProperty MeshComp; // 0x3c0
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x3c8
};

struct UAnalyticEventsBase : UPlatformInterfaceBase {
	uint32_t bSessionInProgress : 1; // 0x80
};

struct UCombatWeaponRISBase_LaserPoint : UCombatWeaponRISBase_SkeletalmeshComponent {
	FLinearColor TeamColor[0x2]; // 0xc44
	FName FirstPersonBoneName; // 0xc64
	FName TeamColorParameterName; // 0xc6c
	ComponentProperty ThirdPersonPSC; // 0xc74
	ObjectProperty ThirdPersonPSCTemplate; // 0xc7c
	FName ThirdPersonSocketName; // 0xc84
	FName ParticleLengthParameterName; // 0xc8c
	float ParticleLengthUpdateDelay; // 0xc94
	ObjectProperty LaserSightOnSnd; // 0xc98
	ObjectProperty LaserSightOffSnd; // 0xca0
	ObjectProperty LaserPointMI; // 0xca8
	float LastParticleLengthUpdateTime; // 0xcb0
};

struct ATerrain : AInfo {
	TArray<FTerrainHeight> Heights; // 0x244
	TArray<FTerrainInfoData> InfoData; // 0x254
	TArray<FTerrainLayer> Layers; // 0x264
	int32_t NormalMapLayer; // 0x274
	TArray<FTerrainDecoLayer> DecoLayers; // 0x278
	TArray<FAlphaMap> AlphaMaps; // 0x288
	TArray<ComponentProperty> TerrainComponents; // 0x298
	int32_t NumSectionsX; // 0x2a8
	int32_t NumSectionsY; // 0x2ac
	TArray<FTerrainWeightedMaterial> WeightedMaterials; // 0x2b0
	TArray<ObjectProperty> WeightedTextureMaps; // 0x2c0
	int32_t MaxTesselationLevel; // 0x2d0
	int32_t MinTessellationLevel; // 0x2d4
	float TesselationDistanceScale; // 0x2d8
	float TessellationCheckDistance; // 0x2dc
	int32_t CollisionTesselationLevel; // 0x2e0
	FCachedTerrainMaterialArray CachedTerrainMaterials[0x2]; // 0x2e4
	int32_t NumVerticesX; // 0x304
	int32_t NumVerticesY; // 0x308
	int32_t NumPatchesX; // 0x30c
	int32_t NumPatchesY; // 0x310
	int32_t MaxComponentSize; // 0x314
	int32_t StaticLightingResolution; // 0x318
	uint32_t bIsOverridingLightResolution : 1; // 0x31c
	uint32_t bBilinearFilterLightmapGeneration : 1; // 0x31c
	uint32_t bCastShadow : 1; // 0x31c
	uint32_t bForceDirectLightMap : 1; // 0x31c
	uint32_t bCastDynamicShadow : 1; // 0x31c
	uint32_t bEnableSpecular : 1; // 0x31c
	uint32_t bBlockRigidBody : 1; // 0x31c
	uint32_t bAllowRigidBodyUnderneath : 1; // 0x31c
	uint32_t bAcceptsDynamicLights : 1; // 0x31c
	uint32_t bMorphingEnabled : 1; // 0x31c
	uint32_t bMorphingGradientsEnabled : 1; // 0x31c
	uint32_t bLocked : 1; // 0x31c
	uint32_t bHeightmapLocked : 1; // 0x31c
	uint32_t bShowingCollision : 1; // 0x31c
	uint32_t bUseWorldOriginTextureUVs : 1; // 0x31c
	uint32_t bShowWireframe : 1; // 0x31c
	ObjectProperty TerrainPhysMaterialOverride; // 0x320
	FLightingChannelContainer LightingChannels; // 0x328
	FLightmassPrimitiveSettings LightmassSettings; // 0x32c
	FPointer ReleaseResourcesFence; // 0x348
	int32_t EditorTessellationLevel; // 0x350
	TArray<FSelectedTerrainVertex> SelectedVertices; // 0x354
	FColor WireframeColor; // 0x364
};

struct APrefabInstance : AActor {
	ObjectProperty TemplatePrefab; // 0x244
	int32_t TemplateVersion; // 0x24c
	TMap<None, None> ArchetypeToInstanceMap; // 0x250
	ObjectProperty SequenceInstance; // 0x298
	int32_t PI_PackageVersion; // 0x2a0
	int32_t PI_LicenseePackageVersion; // 0x2a4
	TArray<char> PI_Bytes; // 0x2a8
	TArray<ObjectProperty> PI_CompleteObjects; // 0x2b8
	TArray<ObjectProperty> PI_ReferencedObjects; // 0x2c8
	TArray<FString> PI_SavedNames; // 0x2d8
	TMap<None, None> PI_ObjectMap; // 0x2e8
};

struct USoundNodeDistanceCrossFade : USoundNode {
	TArray<FDistanceDatum> CrossFadeInput; // 0x74
};

struct UCCSAFMoveToActor : UGripAFActionHandle {
	ObjectProperty Target; // 0x64
	ECCSMovementType MovementType; // 0x6c
	ECCSAlertnessState Alertness; // 0x6d
};

struct UMaterialExpressionFlipBookSample : UMaterialExpressionTextureSample {
	int32_t CoordinateIndex; // 0x120
};

struct UCombatHUD_Base : UGFxObject {
	ObjectProperty Owner; // 0xa0
	FString FontHTMLString; // 0xa8
	uint32_t bIsDisplayed : 1; // 0xb8
	uint32_t bOn : 1; // 0xb8
	uint32_t bMiniHUDMode : 1; // 0xb8
};

struct UMeshBeacon : UObject {
	FPointer VfTable_FTickableObject; // 0x60
	int32_t MeshBeaconPort; // 0x68
	FPointer Socket; // 0x6c
	uint32_t bIsInTick : 1; // 0x74
	uint32_t bWantsDeferredDestroy : 1; // 0x74
	uint32_t bShouldTick : 1; // 0x74
	float HeartbeatTimeout; // 0x78
	float ElapsedHeartbeatTime; // 0x7c
	FName BeaconName; // 0x80
	int32_t SocketSendBufferSize; // 0x88
	int32_t SocketReceiveBufferSize; // 0x8c
	int32_t MaxBandwidthTestBufferSize; // 0x90
	int32_t MinBandwidthTestBufferSize; // 0x94
	float MaxBandwidthTestSendTime; // 0x98
	float MaxBandwidthTestReceiveTime; // 0x9c
	int32_t MaxBandwidthHistoryEntries; // 0xa0
};

struct UParticleModuleEventGenerator : UParticleModuleEventBase {
	TArray<FParticleEvent_GenerateInfo> Events; // 0x68
};

struct UCombatHUD_HitDamageBoard : UCombatHUDEntity_Base {
	TArray<ObjectProperty> BoardList; // 0xc0
	TArray<ObjectProperty> BoardList_DamageTF; // 0xd0
};

struct UCombatDataTableRefReward : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString CodeName; // 0x70
	int32_t ShowItemImage; // 0x80
	int32_t RewardGameMoney; // 0x84
	TArray<FRewardData> RewardDataList; // 0x88
	FString MailFormCodename; // 0x98
	int32_t Medal; // 0xa8
	int32_t BSCoin; // 0xac
	int32_t MCoin; // 0xb0
	int32_t GCoin; // 0xb4
	int32_t WinCoin; // 0xb8
	int32_t BattlePassExp; // 0xbc
};

struct UGamePlayEvent_Action : UObject {
	TArray<FActionTableDataType> TableDataList; // 0x60
	TArray<FTableInfoType> TableInfoList; // 0x70
	TArray<FName> ActionTargetList; // 0x80
	TArray<FName> EventTypeList; // 0x90
	TArray<int32_t> RegisteredActions; // 0xa0
};

struct UCombatDataTableType : UObject {
	int32_t EntryIndex; // 0x60
	ObjectProperty DataTable; // 0x64
};

struct USkelControlLimb : USkelControlBase {
	FVector EffectorLocation; // 0xd0
	EBoneControlSpace EffectorLocationSpace; // 0xdc
	EBoneControlSpace JointTargetLocationSpace; // 0xdd
	EBoneControlSpace JointOffsetSpace; // 0xde
	EAxis BoneAxis; // 0xdf
	EAxis JointAxis; // 0xe0
	FName EffectorSpaceBoneName; // 0xe4
	FVector JointTargetLocation; // 0xec
	FName JointTargetSpaceBoneName; // 0xf8
	FVector JointOffset; // 0x100
	FName JointOffsetBoneName; // 0x10c
	uint32_t bInvertBoneAxis : 1; // 0x114
	uint32_t bInvertJointAxis : 1; // 0x114
	uint32_t bRotateJoint : 1; // 0x114
	uint32_t bMaintainEffectorRelRot : 1; // 0x114
	uint32_t bTakeRotationFromEffectorSpace : 1; // 0x114
	uint32_t bAllowStretching : 1; // 0x114
	FVector2D StretchLimits; // 0x118
	FName StretchRollBoneName; // 0x120
};

struct UCameraShake : UObject {
	uint32_t bSingleInstance : 1; // 0x60
	uint32_t bRandomAnimSegment : 1; // 0x60
	float OscillationDuration; // 0x64
	float OscillationBlendInTime; // 0x68
	float OscillationBlendOutTime; // 0x6c
	FROscillator RotOscillation; // 0x70
	FVOscillator LocOscillation; // 0x94
	FFOscillator FOVOscillation; // 0xb8
	ObjectProperty Anim; // 0xc4
	float AnimPlayRate; // 0xcc
	float AnimScale; // 0xd0
	float AnimBlendInTime; // 0xd4
	float AnimBlendOutTime; // 0xd8
	float RandomAnimSegmentDuration; // 0xdc
};

struct UCCSBTScriptCover : UCCSBTScriptBehavior {
	ObjectProperty CurrHandle; // 0xd4
	ObjectProperty EnterHandle; // 0xdc
	ObjectProperty GetOutHandle; // 0xe4
	ObjectProperty FireHandle; // 0xec
	ObjectProperty ExitHandle; // 0xf4
	FCCSCoverData Cover; // 0xfc
	ScriptCoverState CoverState; // 0x124
};

struct UCCSAFIdle : UGripAFActionHandle {
	ECCSAlertnessState Alertness; // 0x64
};

struct APlayerCollectorGame : AGameInfo {
	int32_t NumberOfClientsToWaitFor; // 0x4c0
	FString URLToLoad; // 0x4c4
};

struct UActorFactoryArchetype : UActorFactory {
	ObjectProperty ArchetypeActor; // 0x9c
};

struct UKismetBookMark : UBookMark2D {
	FString BookMarkSequencePathName; // 0x6c
};

struct UPBRuleNodeBase : UObject {
	TArray<FPBRuleLink> NextRules; // 0x60
};

struct UCombatSteamAchivementManager : UObject {
	TArray<FSteamAchievementData> SteamAchievements; // 0x60
};

struct UParticleModuleTrailSpawn : UParticleModuleTrailBase {
	ComponentProperty SpawnDistanceMap; // 0x68
	float MinSpawnVelocity; // 0x70
};

struct UGripAFActionHandle : UObject {
	int32_t Handle; // 0x60
};

struct UUIDataProvider_OnlineFriends : UUIDataProvider_OnlinePlayerDataBase {
	TArray<FOnlineFriend> FriendsList; // 0x74
	FString NickNameCol; // 0x84
	FString PresenceInfoCol; // 0x94
	FString FriendStateCol; // 0xa4
	FString bIsOnlineCol; // 0xb4
	FString bIsPlayingCol; // 0xc4
	FString bIsPlayingThisGameCol; // 0xd4
	FString bIsJoinableCol; // 0xe4
	FString bHasVoiceSupportCol; // 0xf4
	FString bHaveInvitedCol; // 0x104
	FString bHasInvitedYouCol; // 0x114
	FString OfflineText; // 0x124
	FString OnlineText; // 0x134
	FString AwayText; // 0x144
	FString BusyText; // 0x154
};

struct UCombatDataTableRefShopTab : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString MainTab; // 0x70
	FString SubTab; // 0x80
};

struct UOutlineManager : UObject {
	TArray<FOutlineProperty> OutlinePropertyList; // 0x60
	TArray<FOutlineProperty> ForegroundOutlinePropertyList; // 0x70
	TArray<FOutlineMaterialVectorParam> OutlineMaterialParamList; // 0x80
	TArray<FOutlineRegisterCondition> OutlineRegisterConditionList; // 0x90
	ObjectProperty CombatPC; // 0xa0
	TArray<FOutlineMangedInfo> ManagedInfoList; // 0xa8
	TArray<FOutlineMangedInfo> ManagedInfoListBot; // 0xb8
	TArray<FGlobalOutlineEvent> GlobalOutlineEventList; // 0xc8
	TMap<None, None> OutlineConditionIndexMap; // 0xd8
};

struct UPhysXParticleSystem : UObject {
	int32_t MaxParticles; // 0x60
	int32_t ParticleSpawnReserve; // 0x64
	ERBCollisionChannel RBChannel; // 0x68
	ESimulationMethod SimulationMethod; // 0x69
	EPacketSizeMultiplier PacketSizeMultiplier; // 0x6a
	FRBCollisionChannelContainer RBCollideWithChannels; // 0x6c
	float CollisionDistance; // 0x70
	float RestitutionWithStaticShapes; // 0x74
	float RestitutionWithDynamicShapes; // 0x78
	float FrictionWithStaticShapes; // 0x7c
	float FrictionWithDynamicShapes; // 0x80
	float StaticFrictionWithStaticShapes; // 0x84
	float StaticFrictionWithDynamicShapes; // 0x88
	uint32_t bDynamicCollision : 1; // 0x8c
	uint32_t bDisableGravity : 1; // 0x8c
	uint32_t bStaticCollision : 1; // 0x8c
	uint32_t bTwoWayCollision : 1; // 0x8c
	uint32_t bDestroy : 1; // 0x8c
	uint32_t bSyncFailed : 1; // 0x8c
	uint32_t bIsInGame : 1; // 0x8c
	float MaxMotionDistance; // 0x90
	float Damping; // 0x94
	FVector ExternalAcceleration; // 0x98
	float RestParticleDistance; // 0xa4
	float RestDensity; // 0xa8
	float KernelRadiusMultiplier; // 0xac
	float Stiffness; // 0xb0
	float Viscosity; // 0xb4
	float CollisionResponseCoefficient; // 0xb8
	FPointer CascadeScene; // 0xbc
	FPointer PSys; // 0xc4
};

struct ATriggerStreamingLevel : ATrigger {
	TArray<FLevelStreamingData> Levels; // 0x254
};

struct UDistributionFloatUniformCurve : UDistributionFloat {
	FInterpCurveVector2D ConstantCurve; // 0x7c
};

struct UMaterialExpressionCustomTexture : UMaterialExpression {
	ObjectProperty Texture; // 0xb0
};

struct UCombatDataTableRefMatchMaking : UCombatDataTableType {
	int32_t Id; // 0x6c
	int32_t MaxUser; // 0x70
	int32_t StartableMinUser; // 0x74
	FString SupportGroupCodeName; // 0x78
	uint32_t ReturnBackPlayedGame : 1; // 0x88
	int32_t RatingLowLock; // 0x8c
	int32_t RatingHighLock; // 0x90
	int32_t SearchTimeOut; // 0x94
	int32_t RefusePrevMatch; // 0x98
	int32_t RefuseCommunityGroupMatchup; // 0x9c
	int32_t TeamGroupLimit; // 0xa0
	FString OptionCodename; // 0xa4
	FString RematchOptionCodeName; // 0xb4
	int32_t PingID; // 0xc4
};

struct ULocalMessage : UObject {
	uint32_t bIsSpecial : 1; // 0x60
	uint32_t bIsUnique : 1; // 0x60
	uint32_t bIsPartiallyUnique : 1; // 0x60
	uint32_t bIsConsoleMessage : 1; // 0x60
	uint32_t bBeep : 1; // 0x60
	uint32_t bCountInstances : 1; // 0x60
	float Lifetime; // 0x64
	FColor DrawColor; // 0x68
	float PosY; // 0x6c
	int32_t FontSize; // 0x70
};

struct UCombatInstanceItemManager : UObject {
	UCombatInstanceItem* InstanceItemList[0x4]; // 0x60
	UCombatAccessory_Base* AccessoryItemInfo; // 0x80
};

struct UClient : UObject {
	float MinDesiredFrameRate; // 0x68
	float DisplayGamma; // 0x6c
	float InitialButtonRepeatDelay; // 0x70
	float ButtonRepeatDelay; // 0x74
};

struct ADynamicAnchor : ANavigationPoint {
	ObjectProperty CurrentUser; // 0x33c
};

struct ATcpLink : AInternetLink {
	ELinkState LinkState; // 0x268
	FIpAddr RemoteAddr; // 0x26c
	ATcpLink* AcceptClass; // 0x274
	TArray<char> SendFIFO; // 0x27c
	FString RecvBuf; // 0x28c
};

struct UCanvas : UObject {
	ObjectProperty Font; // 0x60
	float OrgX; // 0x68
	float OrgY; // 0x6c
	float ClipX; // 0x70
	float ClipY; // 0x74
	float CurX; // 0x78
	float CurY; // 0x7c
	float CurZ; // 0x80
	float CurYL; // 0x84
	FColor DrawColor; // 0x88
	uint32_t bCenter : 1; // 0x8c
	uint32_t bNoSmooth : 1; // 0x8c
	int32_t SizeX; // 0x90
	int32_t SizeY; // 0x94
	FPointer Canvas; // 0x98
	FPointer SceneView; // 0xa0
	FPlane ColorModulate; // 0xb0
	ObjectProperty DefaultTexture; // 0xc0
};

struct UCombatHUD_BombsitesContainer : UCombatHUD_GOContainer {
	float GoMsgUpdateTime; // 0xd8
};

struct UMcpClashMobManager : UMcpClashMobBase {
	FString ChallengeListUrl; // 0xe8
	FString ChallengeStatusUrl; // 0xf8
	FString ChallengeMultiStatusUrl; // 0x108
	FString AcceptChallengeUrl; // 0x118
	FString UpdateChallengeProgressUrl; // 0x128
	FString UpdateRewardProgressUrl; // 0x138
	ObjectProperty HTTPRequestChallengeList; // 0x148
	TArray<FMcpChallengeUserRequest> ChallengeUserRequests; // 0x150
	TArray<FMcpClashMobChallengeEvent> ChallengeEvents; // 0x160
	TArray<FMcpClashMobChallengeUserStatus> ChallengeUserStatus; // 0x170
	FMcpClashMobChallengeUserStatus TempChallengeUserStatus; // 0x180
	TArray<FMcpClashMobChallengeUserStatus> TempChallengeUserStatusArray; // 0x1fc
	TScriptInterface<Class> FileCache; // 0x20c
	ObjectProperty FileDownloader; // 0x21c
};

struct ATriggeredPath : ANavigationPoint {
	uint32_t bOpen : 1; // 0x33c
	ObjectProperty MyTrigger; // 0x340
};

struct UMaterialExpressionFloor : UMaterialExpression {
	FExpressionInput Input; // 0xb0
};

struct UGripAction_MoveToward : UCombatAIActionBase {
	ObjectProperty ActionNode; // 0x78
};

struct UCombatHUD_MarkerObject : UCombatHUD_GameObject {
	ObjectProperty Container; // 0x1b0
	int32_t MarkerID; // 0x1b8
	float MaxLifeTime; // 0x1bc
	float RemainLifeTime; // 0x1c0
	int32_t CurrentAlpha; // 0x1c4
	FVector WorldLocation; // 0x1c8
};

struct USeqAct_RangeSwitch : USequenceAction {
	TArray<FSwitchRange> Ranges; // 0x108
};

struct UPhysicsAsset : UObject {
	TArray<ObjectProperty> BodySetup; // 0x60
	FMap_Mirror BodySetupIndexMap; // 0x70
	TArray<int32_t> BoundsBodies; // 0xb8
	TArray<ObjectProperty> ConstraintSetup; // 0xc8
	ObjectProperty DefaultInstance; // 0xd8
};

struct UHTTPDownload : UDownload {
	FString RedirectToURL; // 0x74
	uint32_t UseCompression : 1; // 0x84
	FString ProxyServerHost; // 0xaa4
	int32_t ProxyServerPort; // 0xab4
	uint32_t MaxRedirection : 1; // 0xab8
	float ConnectionTimeout; // 0xabc
};

struct UInterpTrackInstVectorProp : UInterpTrackInstProperty {
	FPointer VectorProp; // 0x70
	FVector ResetVector; // 0x78
};

struct UMaterialExpressionPower : UMaterialExpression {
	FExpressionInput Base; // 0xb0
	FExpressionInput Exponent; // 0xe4
};

struct UCombatDataTableRefWeaponGroup : UCombatDataTableType {
	int32_t Id; // 0x6c
	FString GroupName; // 0x70
};

struct USeqAct_SubtractInt : USeqAct_SetSequenceVariable {
	int32_t ValueA; // 0x108
	int32_t ValueB; // 0x10c
	float FloatResult; // 0x110
	int32_t IntResult; // 0x114
};

struct UParticleLightEnvironmentComponent : UDynamicLightEnvironmentComponent {
	int32_t ReferenceCount; // 0x168
	int32_t NumPooledReuses; // 0x16c
	ObjectProperty SharedInstigator; // 0x170
	ObjectProperty SharedParticleSystem; // 0x178
	uint32_t bAllowDLESharing : 1; // 0x180
};

struct UColorGradingEffect : UPostProcessEffect {
	FLUTBlender PreviousLUTBlender; // 0x88
};

struct UCombatHUD_ObserverInfo : UCombatHUDEntity_Base {
	int32_t LastHealth; // 0xc0
	int32_t LastAmmoCount; // 0xc4
	int32_t LastMagazineCount; // 0xc8
	int32_t LastGrenadeA; // 0xcc
	int32_t LastGrenadeB; // 0xd0
	FString LastWeaponName; // 0xd4
	uint32_t LastHasBomb : 1; // 0xe4
	uint32_t LastShowBullet : 1; // 0xe4
	int32_t LastLevel; // 0xe8
	int32_t LastTierPoint; // 0xec
	int32_t LastCCardID; // 0xf0
	FString LastLevelImgPath; // 0xf4
	FString LastTierImgSmallPath; // 0x104
	FString LastCCardPath; // 0x114
	int32_t LastKillCount; // 0x124
};

struct UCombatItemTransaction : UObject {
	TArray<FInventoryItemInfo> InventoryItemInfos; // 0x60
	TArray<FEquipItemInfo> EquipItemInfos; // 0x70
	TArray<FEquipItemInfo> SimulatedEquipItemInfos; // 0x80
	TArray<FEquipItemInfo> SendEuipItemInfos; // 0x90
	TArray<FEquipItemInfo> UnchangedEquipItemInfos; // 0xa0
	TArray<FShopItemInfo> OriShopItemInfos; // 0xb0
	TArray<FShopItemInfo> ShopItemInfos; // 0xc0
	TArray<int32_t> ServiceOffShopItemList; // 0xd0
	TArray<FExpiredItem> ExpiredItems; // 0xe0
	TArray<FRepurchaseItem> SelectedRepurchaseItems; // 0xf0
	uint32_t bShopItemsSorting : 1; // 0x100
	uint32_t bExpiredEquipItem : 1; // 0x100
	TArray<FS_BaseItemInfo> BaseItemList; // 0x104
	TArray<FString> DefaultPresetName; // 0x114
	int32_t SendActiveItemInventorySlotIndex; // 0x124
	TArray<FFilterInfo> FilterList; // 0x128
	TArray<FBoosterItem> BoosterItemList; // 0x138
	char SelectedGearSetIndex; // 0x148
	TArray<ObjectProperty> ItemBuyAfterList; // 0x14c
	int32_t PendingSlotID; // 0x15c
	TArray<FCallingCardInfo> CallingCardInfoList; // 0x160
	FRandomBoxGainResultInfo RandomBoxGainResult; // 0x170
	FRandomBoxShopItemInfo ReservedOpenRandomBoxShopItem; // 0x184
	FUseLockedItemInfo UseLockedItem; // 0x190
	FSendConsumeItemInfo CurSendConsumeItemInfo; // 0x1c0
	TMap<None, None> BuyLimitSaleItems; // 0x1c8
	TMap<None, None> BulletSaleTimeDate; // 0x210
	TArray<ObjectProperty> InitActiveRefItemList; // 0x258
	TMap<None, None> LimitBuyItemMap; // 0x268
	TArray<FSeasonPassData> SeasonPassArray; // 0x2b0
	int32_t CurrentSeasonPassSeason; // 0x2c0
	TMap<None, None> TuningMap; // 0x2c4
};

struct UGripBTClearState : UGripBTNode {
	FString StateName; // 0xbc
};

struct ACombatCheatPawn : ACombatGuy_NPC {
	char CheatPawnTeamNum; // 0x11f0
	int32_t SpawnNumber; // 0x11f4
	FString SpawnName; // 0x11f8
};

struct UCombatDataTableRefExp : UCombatDataTableType {
	int32_t Level; // 0x6c
	int32_t GoalExp; // 0x70
	FString SmallImage; // 0x74
	int32_t ImageID_Small; // 0x84
	FString BigImage; // 0x88
	int32_t ImageID_Big; // 0x98
	int32_t LevelNameID; // 0x9c
	FString LevelUpTopImage; // 0xa0
	int32_t ImageID_LevelUpTop; // 0xb0
	FString LevelUpBottomImage; // 0xb4
	int32_t ImageID_LevelUpBottom; // 0xc4
	FString RewardCodename; // 0xc8
	int32_t ImageID_RewardCode; // 0xd8
};

struct UChildConnection : UNetConnection {
	ObjectProperty Parent; // 0xb0ac
};

struct USeqEvent_HudRenderText : USeqEvent_HudRender {
	ObjectProperty DisplayFont; // 0x140
	FColor DisplayColor; // 0x148
	FVector DisplayLocation; // 0x14c
	FString DisplayText; // 0x158
	ETextDrawMethod TextDrawMethod; // 0x168
};

struct ADecalActorBase : AActor {
	FPointer VfTable_IEditorLinkSelectionInterface; // 0x244
	ComponentProperty Decal; // 0x24c
};

struct USequenceOp : USequenceObject {
	uint32_t bIsActivated : 1; // 0x98
	uint32_t bIsCurrentDebuggerOp : 1; // 0x98
	uint32_t bActive : 1; // 0x98
	uint32_t bLatentExecution : 1; // 0x98
	uint32_t bAutoActivateOutputLinks : 1; // 0x98
	uint32_t bHaveMovingVarConnector : 1; // 0x98
	uint32_t bHaveMovingInputConnector : 1; // 0x98
	uint32_t bHaveMovingOutputConnector : 1; // 0x98
	uint32_t bPendingVarConnectorRecalc : 1; // 0x98
	uint32_t bPendingInputConnectorRecalc : 1; // 0x98
	uint32_t bPendingOutputConnectorRecalc : 1; // 0x98
	uint32_t bIsBreakpointSet : 1; // 0x98
	uint32_t bIsHiddenBreakpointSet : 1; // 0x98
	TArray<FSeqOpInputLink> InputLinks; // 0x9c
	TArray<FSeqOpOutputLink> OutputLinks; // 0xac
	TArray<FSeqVarLink> VariableLinks; // 0xbc
	TArray<FSeqEventLink> EventLinks; // 0xcc
	int32_t PlayerIndex; // 0xdc
	char GamepadID; // 0xe0
	int32_t ActivateCount; // 0xe4
	int32_t SearchTag; // 0xe8
};

struct USequenceEvent : USequenceOp {
	TArray<ObjectProperty> DuplicateEvts; // 0xec
	ObjectProperty Originator; // 0xfc
	ObjectProperty Instigator; // 0x104
	float ActivationTime; // 0x10c
	int32_t TriggerCount; // 0x110
	int32_t MaxTriggerCount; // 0x114
	float ReTriggerDelay; // 0x118
	uint32_t bEnabled : 1; // 0x11c
	uint32_t bPlayerOnly : 1; // 0x11c
	uint32_t bRegistered : 1; // 0x11c
	uint32_t bClientSideOnly : 1; // 0x11c
	char Priority; // 0x120
	int32_t MaxWidth; // 0x124
};

struct UTerrainLayerSetup : UObject {
	TArray<FTerrainFilteredMaterial> Materials; // 0x60
};

struct UCombatCharacterTransaction : UObject {
	TMap<None, None> PlayerCompetitionPointInfo; // 0x60
	uint32_t NeedBackToCompetitionGame : 1; // 0xa8
	FCharacterTransactionData PlayerData; // 0xac
	TArray<FRecordRecentlyPlayed> TempMyRecordRecentlyPlayed; // 0x1cc
	TArray<FRecordRecentlyPlayedList> MyRecordRecentlyPlayedList; // 0x1dc
	char MAX_RECORD_RECENTLY_PLAYED; // 0x1ec
	FLevelExpData UI_LevelData; // 0x1f0
	int32_t UI_Money; // 0x1f8
	TArray<FMatchOnOffInfo> PlayerPageMatchOnOffInfoList; // 0x1fc
	TArray<FMatchOnOffInfo> MyPageMatchOnOffInfoList; // 0x20c
	TArray<FMatchOnOffInfo> ClanPageMatchOnOffInfoList; // 0x21c
	TArray<int32_t> CurrentCompetitiveModeList; // 0x22c
	TArray<FRandomBoxOpenData> RandomBoxOpenList; // 0x23c
	TArray<int32_t> QueuedReservedPeriodAttendIdx; // 0x24c
};

struct AGameAIController : AAIController {
	ObjectProperty CommandList; // 0x454
	uint32_t bHasRunawayCommandList : 1; // 0x45c
	uint32_t bAILogging : 1; // 0x45c
	uint32_t bAILogToWindow : 1; // 0x45c
	uint32_t bFlushAILogEachLine : 1; // 0x45c
	uint32_t bMapBasedLogName : 1; // 0x45c
	uint32_t bAIDrawDebug : 1; // 0x45c
	uint32_t bAIBroken : 1; // 0x45c
	ObjectProperty AILogFile; // 0x460
	float DebugTextMaxLen; // 0x468
	TArray<FAICmdHistoryItem> CommandHistory; // 0x46c
	int32_t CommandHistoryNum; // 0x47c
	TArray<FName> AILogFilter; // 0x480
	FString DemoActionString; // 0x490
};

struct UInterpTrackVectorMaterialParam : UInterpTrackVectorBase {
	TArray<FMaterialReferenceList> Materials; // 0xb8
	ObjectProperty Material; // 0xc8
	FName ParamName; // 0xd0
	uint32_t bNeedsMaterialRefsUpdate : 1; // 0xd8
};

struct UAnimNodeScalePlayRate : UAnimNodeBlendBase {
	float ScaleByValue; // 0x100
};

struct UCombatInGameBattleLog : UObject {
	TArray<FbattleLog> BattleLogData; // 0x60
	TArray<FDisplayTable> OtherPlayersTables; // 0x70
	FDisplayTable MyTable; // 0x80
	FString LocalPlayerName; // 0xb0
	int32_t KillerIndex; // 0xc0
	TArray<FString> SupportedGameNames; // 0xc4
	uint32_t bActive : 1; // 0xd4
	ObjectProperty BattleLogMC; // 0xd8
	ObjectProperty LocalPC; // 0xe0
	float DisplayTableSettingDelayTime; // 0xe8
};

struct UMcpUserManagerBase : UMcpServiceBase {
	FString McpUserManagerClassName; // 0x78
	DelegateProperty __OnRegisterUserComplete__Delegate; // 0x88
	DelegateProperty __OnQueryUsersComplete__Delegate; // 0x98
	DelegateProperty __OnDeleteUserComplete__Delegate; // 0xa8
};

struct UInteractiveFoliageComponent : UStaticMeshComponent {
	FPointer FoliageSceneProxy; // 0x2f4
};

struct USceneCapture2DHitMaskComponent : USceneCaptureComponent {
	ObjectProperty TextureTarget; // 0xd0
	ComponentProperty SkeletalMeshComp; // 0xd8
	int32_t MaterialIndex; // 0xe0
	int32_t ForceLOD; // 0xe4
	int32_t HitMaskCullDistance; // 0xe8
	float FadingStartTimeSinceHit; // 0xec
	float FadingPercentage; // 0xf0
	float FadingDurationTime; // 0xf4
	float FadingIntervalTime; // 0xf8
};

struct UCombatAnimNodeSequence : UAnimNodeSequence {
	uint32_t bAutoStart : 1; // 0x158
	uint32_t bLoopLastSequence : 1; // 0x158
	TArray<FName> SeqStack; // 0x15c
};

struct ACombatGuyBase : ACombatPawn {
	float Client_DistanceOfCorsshairTargetForUI; // 0x111c
	float CheckTargetedForUI_DotMin; // 0x1120
	float CheckTargetedForUI_DotMax; // 0x1124
};

struct UGripActionNode_Sleep : UCombatAIActionNodeBase {
	float Duration; // 0xf4
	float StartTimeSeconds; // 0xf8
};

struct USavedMove : UObject {
	ObjectProperty NextMove; // 0x60
	float TimeStamp; // 0x68
	float Delta; // 0x6c
	uint32_t bRun : 1; // 0x70
	uint32_t bDuck : 1; // 0x70
	uint32_t bPressedJump : 1; // 0x70
	uint32_t bDoubleJump : 1; // 0x70
	uint32_t bPreciseDestination : 1; // 0x70
	uint32_t bForceRMVelocity : 1; // 0x70
	uint32_t bForceMaxAccel : 1; // 0x70
	uint32_t bRootMotionFromInterpCurve : 1; // 0x70
	EDoubleClickDir DoubleClickMove; // 0x74
	EPhysics SavedPhysics; // 0x75
	ERootMotionMode RootMotionMode; // 0x76
	FVector StartLocation; // 0x78
	FVector StartRelativeLocation; // 0x84
	FVector StartVelocity; // 0x90
	FVector StartFloor; // 0x9c
	FVector SavedLocation; // 0xa8
	FVector SavedVelocity; // 0xb4
	FVector SavedRelativeLocation; // 0xc0
	FVector RMVelocity; // 0xcc
	FVector Acceleration; // 0xd8
	FRotator Rotation; // 0xe4
	ObjectProperty StartBase; // 0xf0
	ObjectProperty EndBase; // 0xf8
	float CustomTimeDilation; // 0x100
	float AccelDotThreshold; // 0x104
	float RootMotionInterpCurrentTime; // 0x108
	FVector RootMotionInterpCurveLastValue; // 0x10c
};

struct UFailedConnect : ULocalMessage {
	FString FailMessage[0x4]; // 0x74
};

struct UCombatDataTableRefQuest : UCombatDataTableType {
	int32_t Index; // 0x6c
	int32_t QuestNameID; // 0x70
	int32_t QuestObjectiveID; // 0x74
	int32_t QuestDescriptionID; // 0x78
	FString ShortCutCodeName; // 0x7c
	int32_t TotalCount; // 0x8c
	int32_t TotalCountType; // 0x90
	int32_t TotalStep; // 0x94
	int32_t MissionProgressStringID; // 0x98
	char QuestGroup; // 0x9c
	char QuestType; // 0x9d
	int32_t OpenPublisher; // 0xa0
	uint32_t ShowGauge : 1; // 0xa4
	int32_t QuestTab; // 0xa8
	int32_t ReturnUserType; // 0xac
	TArray<FStepByStepRewardType> StepByStepReward; // 0xb0
};

struct ANxCylindricalForceField : ANxForceField {
	float RadialStrength; // 0x298
	float RotationalStrength; // 0x29c
	float LiftStrength; // 0x2a0
	float ForceRadius; // 0x2a4
	float ForceTopRadius; // 0x2a8
	float LiftFalloffHeight; // 0x2ac
	float EscapeVelocity; // 0x2b0
	float ForceHeight; // 0x2b4
	float HeightOffset; // 0x2b8
	uint32_t UseSpecialRadialForce : 1; // 0x2bc
	FPointer Kernel; // 0x2c0
};

struct UMcpServiceBase : UObject {
	FString McpConfigClassName; // 0x60
	ObjectProperty McpConfig; // 0x70
};

struct UCombatLCTFMovie : UCombatTeamGameMovie {
	ObjectProperty CTFContainer; // 0xad0
	ObjectProperty CTFMovie; // 0xad8
	uint32_t bUpdate : 1; // 0xae0
	uint32_t bUpdateFlagGet : 1; // 0xae0
	int32_t LastTeamMission[0x2]; // 0xae4
};

struct UCombatDataTableRefInitItem : UCombatDataTableType {
	FString CodeName; // 0x6c
	int32_t bActive; // 0x7c
	int32_t PresetEquip[0x3]; // 0x80
};

struct ACombatAI_TDMBase : ACombatBotController_GuyBase {
	uint32_t bThrowedGrenadeCount : 1; // 0x5e8
	ObjectProperty AIPawn_TDMBase; // 0x5ec
	ObjectProperty AIGame_TDMBase; // 0x5f4
	int32_t UsableAIBeaconIndex; // 0x5fc
};

struct UCCSBTCombatSwitchWeapon : UGripBTScriptBehavior {
	EWeaponGroup WeaponSlotIndex; // 0xcc
	ObjectProperty bc; // 0xd0
};

struct UMaterialExpressionTransformPosition : UMaterialExpression {
	FExpressionInput Input; // 0xb0
	EMaterialPositionTransformSource TransformSourceType; // 0xe4
	EMaterialPositionTransform TransformType; // 0xe5
};

struct AWebConnection : ATcpLink {
	ObjectProperty WebServer; // 0x29c
	FString ReceivedData; // 0x2a4
	ObjectProperty Request; // 0x2b4
	ObjectProperty Response; // 0x2bc
	ObjectProperty Application; // 0x2c4
	uint32_t bDelayCleanup : 1; // 0x2cc
	int32_t RawBytesExpecting; // 0x2d0
	int32_t MaxValueLength; // 0x2d4
	int32_t MaxLineLength; // 0x2d8
	int32_t ConnID; // 0x2dc
};

struct ACombatDemolitionPC : ACombatPC {
	TArray<ObjectProperty> TriggerUsedList; // 0xbe4
	FSExactLocationInfo PawnExactLocation; // 0xbf4
};

struct UMaterialExpressionVectorParameter : UMaterialExpressionParameter {
	FLinearColor DefaultValue; // 0xd0
};

struct UCombatDataTableRefQuestShortcut : UCombatDataTableType {
	FString CodeName; // 0x6c
	FString ChannelCodeName; // 0x7c
	FString ModeGroupCodename; // 0x8c
	int32_t OpenWorld; // 0x9c
};

struct UPBRuleNodeVariation : UPBRuleNodeBase {
	uint32_t bVariationOfScopeOnLeft : 1; // 0x70
};

struct UActorFactoryAmbientSoundSimple : UActorFactory {
	ObjectProperty SoundNodeWave; // 0x9c
};

struct UParticleModuleKillBox : UParticleModuleKillBase {
	FRawDistributionVector LowerLeftCorner; // 0x68
	FRawDistributionVector UpperRightCorner; // 0x8c
	uint32_t bAbsolute : 1; // 0xb0
	uint32_t bKillInside : 1; // 0xb0
	uint32_t bAxisAlignedAndFixedSize : 1; // 0xb0
};

struct UPlatformInterfaceBase : UObject {
	TArray<FDelegateArray> AllDelegates; // 0x60
	DelegateProperty __PlatformInterfaceDelegate__Delegate; // 0x70
};

struct UCombatAnimBlendBase : UAnimNodeBlendList {
	float BlendTime; // 0x120
	TArray<float> ChildBlendTimes; // 0x124
	TArray<AlphaBlendType> ChildBlendType; // 0x134
};

struct UCombatHUD_ExitContainer : UCombatHUD_GOContainer {
	ObjectProperty MapPointActor; // 0xd8
};

struct USeqAct_Destroy : USequenceAction {
	uint32_t bDestroyBasedActors : 1; // 0x108
	TArray<AActor*> IgnoreBasedClasses; // 0x10c
};

struct UParticleModuleLocation : UParticleModuleLocationBase {
	FRawDistributionVector StartLocation; // 0x68
	float DistributeOverNPoints; // 0x8c
	float DistributeThreshold; // 0x90
};

struct USeqAct_Trace : USequenceAction {
	uint32_t bTraceActors : 1; // 0x108
	uint32_t bTraceWorld : 1; // 0x108
	FVector TraceExtent; // 0x10c
	FVector StartOffset; // 0x118
	FVector EndOffset; // 0x124
	ObjectProperty HitObject; // 0x130
	float Distance; // 0x138
	FVector HitLocation; // 0x13c
};

struct ACombatEvolveGunPRI : ACombatPlayerReplicationInfo {
	int32_t CurrentPoint; // 0x520
	int32_t CurrentWeaponIndex; // 0x524
	int32_t CurrentGrade; // 0x528
	int32_t AllEvolvePoint; // 0x52c
	int32_t LastAllEvolvePoint; // 0x530
};

struct ACombatBombardActor : AActor {
	float BombardDelay; // 0x244
	int32_t BombardNum; // 0x248
	int32_t PerBombNum; // 0x24c
	ACombatProjectile* PClass; // 0x250
	int32_t CurBombardNum; // 0x258
	float BombardX; // 0x25c
	float BombardY; // 0x260
	float BombardHeight; // 0x264
	float StartDelay; // 0x268
	float PreDelay; // 0x26c
	float AddedHeight; // 0x270
	ComponentProperty Mesh; // 0x274
	ObjectProperty BombardSound; // 0x27c
	ObjectProperty WarnigSound; // 0x284
	ObjectProperty AirWhipSound; // 0x28c
	int32_t LocalizedMSGIndex; // 0x294
	ObjectProperty DustTemplate; // 0x298
	ComponentProperty DustPSC; // 0x2a0
	ComponentProperty LockOnPSC; // 0x2a8
	float StartDustDelay; // 0x2b0
	uint32_t bShowLockOnEffectOnSameTeam : 1; // 0x2b4
	uint32_t AlreadyExcute : 1; // 0x2b4
	char CallerTeam; // 0x2b8
	int32_t WeaponIndex; // 0x2bc
	FName EventName; // 0x2c0
};

struct USeqAct_CombatTutorial_QuestOn : USequenceAction {
	FString QuestID; // 0x108
	int32_t QuestTextIdx; // 0x118
	int32_t QuestCompletedTextIdx; // 0x11c
};

struct UCombatAnimBlendPerBone_Multi : UAnimNodeBlendPerBone {
	TArray<FBlendInfo> BlendInfoArr; // 0x144
	ObjectProperty Owner; // 0x154
	int32_t ActiveChildIndex; // 0x15c
	int32_t LastActiveChild; // 0x160
	float SliderPosition; // 0x164
};

struct AGameCrowdReplicationActor : AActor {
	ObjectProperty Spawner; // 0x244
	uint32_t bSpawningActive : 1; // 0x24c
	int32_t DestroyAllCount; // 0x250
};

struct UParticleModuleUberLTISIVCL : UParticleModuleUberBase {
	FRawDistributionFloat Lifetime; // 0x78
	FRawDistributionVector StartSize; // 0x9c
	FRawDistributionVector StartVelocity; // 0xc0
	FRawDistributionFloat StartVelocityRadial; // 0xe4
	FRawDistributionVector ColorOverLife; // 0x108
	FRawDistributionFloat AlphaOverLife; // 0x12c
};

struct UCombatGameEngine : UGameEngine {
	UOnlineSubsystem* OnlineSubsystemDedicatedSvrClass; // 0xb98
	ObjectProperty TableDepot; // 0xba0
	UCombatGameTableDepot* ServerTableDepotClass; // 0xba8
	UCombatGameTableDepot* ClientTableDepotClass; // 0xbb0
	ObjectProperty BGMPlayer; // 0xbb8
	TArray<FString> SuppressList; // 0xbc0
	TArray<FSYSTEMSETTING_DATA> ChangedInGameSystemSetting; // 0xbd0
	TArray<FSYSTEMSETTING_DATA> CacheInGameSystemSetting; // 0xbe0
	uint32_t IsFrontEndScene : 1; // 0xbf0
	TArray<FWorldCube> WorldCubeList; // 0xbf4
	ObjectProperty PendingLevelPackage; // 0xc04
	ObjectProperty PendingLevelLinkerLoad; // 0xc0c
	ObjectProperty PendingLevelWorld; // 0xc14
	float DefaultMapLoadingDelay; // 0xc1c
	ObjectProperty AE; // 0xc20
	int32_t UpdateEnterFrameTime; // 0xc28
	int32_t GDIBrushCounter; // 0xc2c
	int32_t GDIDCCounter; // 0xc30
	int32_t GDIFontCounter; // 0xc34
	float ObjectPoolTimerDelta; // 0xc38
	ObjectProperty Vivox; // 0xc3c
	ObjectProperty VoiceChatUsers; // 0xc44
	ObjectProperty BannerManager; // 0xc4c
};

struct UCombatHUD_ExitObject : UCombatHUD_GameObject {
	char iconType; // 0x1b0
	EVIPIconType LastVIPIconType; // 0x1b1
	int32_t LastVIPHealthPercent; // 0x1b4
};

struct APlayerController : AController {
	ObjectProperty Player; // 0x430
	ObjectProperty PlayerCamera; // 0x438
	ACamera* CameraClass; // 0x440
	uint32_t bFrozen : 1; // 0x448
	uint32_t bPressedJump : 1; // 0x448
	uint32_t bDoubleJump : 1; // 0x448
	uint32_t bUpdatePosition : 1; // 0x448
	uint32_t bUpdating : 1; // 0x448
	uint32_t bNeverSwitchOnPickup : 1; // 0x448
	uint32_t bCheatFlying : 1; // 0x448
	uint32_t bCameraPositionLocked : 1; // 0x448
	uint32_t bShortConnectTimeOut : 1; // 0x448
	uint32_t bPendingDestroy : 1; // 0x448
	uint32_t bWasSpeedHack : 1; // 0x448
	uint32_t bWasSaturated : 1; // 0x448
	uint32_t bAimingHelp : 1; // 0x448
	uint32_t bCameraCut : 1; // 0x448
	uint32_t bClientSimulatingViewTarget : 1; // 0x448
	uint32_t bHasVoiceHandshakeCompleted : 1; // 0x448
	uint32_t bCinematicMode : 1; // 0x448
	uint32_t bInteractiveMode : 1; // 0x448
	uint32_t bCinemaDisableInputMove : 1; // 0x448
	uint32_t bCinemaDisableInputLook : 1; // 0x448
	uint32_t bRenderHUDFullScreen : 1; // 0x448
	uint32_t bIgnoreNetworkMessages : 1; // 0x448
	uint32_t bShowKismetDrawText : 1; // 0x448
	uint32_t bReplicateAllPawns : 1; // 0x448
	uint32_t bIsUsingStreamingVolumes : 1; // 0x448
	uint32_t bIsExternalUIOpen : 1; // 0x448
	uint32_t bIsControllerConnected : 1; // 0x448
	uint32_t bCheckSoundOcclusion : 1; // 0x448
	uint32_t bDebugCameraAnims : 1; // 0x448
	uint32_t bBlockCameraAnimsFromOverridingPostProcess : 1; // 0x448
	uint32_t bLogHearSoundOverflow : 1; // 0x448
	uint32_t bCheckRelevancyThroughPortals : 1; // 0x448
	uint32_t bDebugClientAdjustPosition : 1; // 0x44c
	float MaxResponseTime; // 0x450
	float WaitDelay; // 0x454
	ObjectProperty AcknowledgedPawn; // 0x458
	EDoubleClickDir DoubleClickDir; // 0x460
	char bIgnoreMoveInput; // 0x461
	char bIgnoreLookInput; // 0x462
	char bRun; // 0x463
	char bDuck; // 0x464
	char NetPlayerIndex; // 0x465
	ObjectProperty ViewTarget; // 0x468
	ObjectProperty RealViewTarget; // 0x470
	ObjectProperty ControllingDirTrackInst; // 0x478
	float FOVAngle; // 0x480
	float DesiredFOV; // 0x484
	float DefaultFOV; // 0x488
	float LODDistanceFactor; // 0x48c
	FRotator TargetViewRotation; // 0x490
	float TargetEyeHeight; // 0x49c
	FRotator BlendedTargetViewRotation; // 0x4a0
	ObjectProperty myHUD; // 0x4ac
	ObjectProperty mySecondaryHUD; // 0x4b4
	USavedMove* SavedMoveClass; // 0x4bc
	ObjectProperty SavedMoves; // 0x4c4
	ObjectProperty FreeMoves; // 0x4cc
	ObjectProperty PendingMove; // 0x4d4
	FVector LastAckedAccel; // 0x4dc
	float CurrentTimeStamp; // 0x4e8
	float LastUpdateTime; // 0x4ec
	float ServerTimeStamp; // 0x4f0
	float TimeMargin; // 0x4f4
	float ClientUpdateTime; // 0x4f8
	float MaxTimeMargin; // 0x4fc
	float LastActiveTime; // 0x500
	int32_t ClientCap; // 0x504
	float DynamicPingThreshold; // 0x508
	float LastPingUpdate; // 0x50c
	float LastRealPingUpdate; // 0x510
	float LastSpeedHackLog; // 0x514
	float MAXPOSITIONERRORSQUARED; // 0x518
	float MAXNEARZEROVELOCITYSQUARED; // 0x51c
	FClientAdjustment PendingAdjustment; // 0x520
	int32_t GroundPitch; // 0x558
	ObjectProperty CheatManager; // 0x55c
	ACheatManager* CheatClass; // 0x564
	ObjectProperty PlayerInput; // 0x56c
	UPlayerInput* InputClass; // 0x574
	FVector FailedPathStart; // 0x57c
	ComponentProperty CylinderComponent; // 0x588
	FString ForceFeedbackManagerClassName; // 0x590
	ObjectProperty ForceFeedbackManager; // 0x5a0
	TArray<ObjectProperty> Interactions; // 0x5a8
	TArray<FUniqueNetId> VoiceMuteList; // 0x5b8
	TArray<FUniqueNetId> GameplayVoiceMuteList; // 0x5c8
	TArray<FUniqueNetId> VoicePacketFilter; // 0x5d8
	TArray<FConnectedPeerInfo> ConnectedPeers; // 0x5e8
	TArray<FUniqueNetId> BestNextHostPeers; // 0x5f8
	ObjectProperty MigratedSearchToJoin; // 0x608
	ObjectProperty OnlineSub; // 0x610
	TScriptInterface<Class> VoiceInterface; // 0x618
	ObjectProperty OnlinePlayerData; // 0x628
	float InteractDistance; // 0x630
	FName DelayedJoinSessionName; // 0x634
	TArray<FInputMatchRequest> InputRequests; // 0x63c
	float LastBroadcastTime; // 0x64c
	FString LastBroadcastString[0x4]; // 0x650
	TArray<FName> PendingMapChangeLevelNames; // 0x690
	ObjectProperty MyCoverReplicator; // 0x6a0
	TArray<FDebugTextInfo> DebugTextList; // 0x6a8
	float SpectatorCameraSpeed; // 0x6b8
	ObjectProperty PendingSwapConnection; // 0x6bc
	float MinRespawnDelay; // 0x6c4
	int32_t MaxConcurrentHearSounds; // 0x6c8
	TArray<ComponentProperty> HearSoundActiveComponents; // 0x6cc
	TArray<ComponentProperty> HearSoundPoolComponents; // 0x6dc
	TArray<ObjectProperty> HiddenActors; // 0x6ec
	float LastSpectatorStateSynchTime; // 0x6fc
	TArray<FSingleChannelSound> SingleChannelSounds; // 0x700
	DelegateProperty __OnMissingPeersUnregistered__Delegate; // 0x710
	DelegateProperty __CanUnpause__Delegate; // 0x720
	DelegateProperty __InputMatchDelegate__Delegate; // 0x730
};

struct UInterpTrackSound : UInterpTrackVectorBase {
	TArray<FSoundTrackKey> Sounds; // 0xb8
	uint32_t bPlayOnReverse : 1; // 0xc8
	uint32_t bContinueSoundOnMatineeEnd : 1; // 0xc8
	uint32_t bSuppressSubtitles : 1; // 0xc8
	uint32_t bTreatAsDialogue : 1; // 0xc8
};

struct UInterpTrackLinearColorBase : UInterpTrack {
	FInterpCurveLinearColor LinearColorTrack; // 0xa0
	float CurveTension; // 0xb4
};

struct ACombatProj_Grenade : ACombatProj_ExplosiveBase {
	uint32_t IsStickyBomb : 1; // 0x3e4
	uint32_t bShoutWarning : 1; // 0x3e4
	float WarningDistance; // 0x3e8
	float ForWardAdditionalTossRate; // 0x3ec
	float BackWardAdditionalTossRate; // 0x3f0
};

struct UMaterialExpressionFresnel : UMaterialExpression {
	float Exponent; // 0xb0
	FExpressionInput Normal; // 0xb4
};

struct UMobileMenuBarItem : UObject {
	int32_t Width; // 0x60
	int32_t Height; // 0x64
	FVector2D VpPos; // 0x68
};

struct ACombatGroupStart : ACombatPlayerStart {
	uint32_t bPlayer : 1; // 0x384
	int32_t GroupID; // 0x388
};

struct UInterpTrackFade : UInterpTrackFloatBase {
	uint32_t bPersistFade : 1; // 0xb8
};

struct USeqAct_ActorFactory : USeqAct_Latent {
	uint32_t bEnabled : 1; // 0x120
	uint32_t bIsSpawning : 1; // 0x120
	uint32_t bCheckSpawnCollision : 1; // 0x120
	ObjectProperty Factory; // 0x124
	EPointSelection PointSelection; // 0x12c
	TArray<ObjectProperty> SpawnPoints; // 0x130
	TArray<FVector> SpawnLocations; // 0x140
	TArray<FVector> SpawnOrientations; // 0x150
	int32_t SpawnCount; // 0x160
	float SpawnDelay; // 0x164
	int32_t LastSpawnIdx; // 0x168
	int32_t CurrentSpawnIdx; // 0x16c
	int32_t SpawnedCount; // 0x170
	float RemainingDelay; // 0x174
};

struct USimpleSplineNonLoopAudioComponent : USimpleSplineAudioComponent {
	float DelayMin; // 0x2f0
	float DelayMax; // 0x2f4
	float PitchMin; // 0x2f8
	float PitchMax; // 0x2fc
	float VolumeMin; // 0x300
	float VolumeMax; // 0x304
	int32_t CurrentSlotIndex; // 0x308
	float UsedVolumeModulation; // 0x30c
	float UsedPitchModulation; // 0x310
	float NextSoundTime; // 0x314
};

struct UAnimNotify_PawnMaterialParam : UAnimNotify_Scripted {
	TArray<FScalarParameterInterpStruct> ScalarParameterInterpArray; // 0x60
};

struct UCombatDataTableRefDecomposition : UCombatDataTableType {
	int32_t DecompositionType; // 0x6c
	int32_t TypeTime; // 0x70
	int32_t Type1; // 0x74
	int32_t Type2; // 0x78
	int32_t Type3; // 0x7c
	int32_t Type4; // 0x80
	int32_t DefaultTP; // 0x84
	int32_t TPMultiply; // 0x88
	int32_t OptionConefficient; // 0x8c
	int32_t OptionPlus; // 0x90
};

struct USeqAct_SetVector : USeqAct_SetSequenceVariable {
	FVector DefaultValue; // 0x108
};

struct USeqAct_WaitForLevelsVisible : USeqAct_Latent {
	TArray<FName> LevelNames; // 0x120
	uint32_t bShouldBlockOnLoad : 1; // 0x130
};

struct UGameCrowdGroup : UObject {
	TArray<ObjectProperty> Members; // 0x60
};

struct USeqAct_ProjectileFactory : USeqAct_ActorFactory {
	ObjectProperty PSTemplate; // 0x178
	FName SocketName; // 0x180
	FName BoneName; // 0x188
};

struct UCombatImpactLight : UPointLightComponent {
	float StartBrightness; // 0x240
	float Lifetime; // 0x244
	float PassedTime; // 0x248
	DelegateProperty __OnLightFinished__Delegate; // 0x24c
};

struct ASceneCaptureCubeMapActor : ASceneCaptureActor {
	ComponentProperty StaticMesh; // 0x24c
	ObjectProperty CubeMaterialInst; // 0x254
};

struct UInterpTrackFloatMaterialParam : UInterpTrackFloatBase {
	TArray<FMaterialReferenceList> Materials; // 0xb8
	ObjectProperty Material; // 0xc8
	FName ParamName; // 0xd0
	uint32_t bNeedsMaterialRefsUpdate : 1; // 0xd8
};

struct ANxRadialForceField : ANxForceField {
	ComponentProperty RenderComponent; // 0x298
	float ForceStrength; // 0x2a0
	float ForceRadius; // 0x2a4
	ERadialImpulseFalloff ForceFalloff; // 0x2a8
	FPointer LinearKernel; // 0x2ac
};

struct UGameSkelCtrl_Recoil : USkelControlBase {
	uint32_t bBoneSpaceRecoil : 1; // 0xd0
	uint32_t bPlayRecoil : 1; // 0xd0
	uint32_t bOldPlayRecoil : 1; // 0xd0
	uint32_t bApplyControl : 1; // 0xd0
	FRecoilDef Recoil; // 0xd4
	FVector2D Aim; // 0x144
};

struct UActorFactoryAmbientSound : UActorFactory {
	ObjectProperty AmbientSoundCue; // 0x9c
};

struct UParticleSystemReplay : UObject {
	int32_t ClipIDNumber; // 0x60
	TArray<FParticleSystemReplayFrame> Frames; // 0x64
};

struct UForceFieldShapeBox : UForceFieldShape {
	ComponentProperty Shape; // 0x60
};

struct UPartyBeaconClient : UPartyBeacon {
	FOnlineGameSearchResult HostPendingRequest; // 0x98
	FPartyReservation PendingRequest; // 0xa8
	EPartyBeaconClientState ClientBeaconState; // 0xc4
	EPartyBeaconClientRequest ClientBeaconRequestType; // 0xc5
	float ReservationRequestTimeout; // 0xc8
	float ReservationRequestElapsedTime; // 0xcc
	FString ResolverClassName; // 0xd0
	UClientBeaconAddressResolver* ResolverClass; // 0xe0
	ObjectProperty Resolver; // 0xe8
	DelegateProperty __OnReservationRequestComplete__Delegate; // 0xf0
	DelegateProperty __OnReservationCountUpdated__Delegate; // 0x100
	DelegateProperty __OnTravelRequestReceived__Delegate; // 0x110
	DelegateProperty __OnHostIsReady__Delegate; // 0x120
	DelegateProperty __OnHostHasCancelled__Delegate; // 0x130
};

struct UParticleModuleAttractorBoneSocket : UParticleModuleAttractorBase {
	EBoneSocketAttractorFalloffType FalloffType; // 0x68
	ELocationBoneSocketDestination DestinationType; // 0x69
	ELocationBoneSocketDestSelectionMethod SelectionMethod; // 0x6a
	uint32_t bParticleLifeRelative : 1; // 0x6c
	uint32_t bAttractAlongLengthOfBone : 1; // 0x6c
	FRawDistributionFloat FalloffExponent; // 0x70
	FRawDistributionFloat Range; // 0x94
	FRawDistributionFloat Strength; // 0xb8
	FRawDistributionFloat CollisionRadius; // 0xdc
	FRawDistributionFloat DragCoefficient; // 0x100
	FRawDistributionFloat DragRadius; // 0x124
	FVector UniversalOffset; // 0x148
	TArray<FAttractLocationBoneSocketInfo> SourceLocations; // 0x154
	FName SkelMeshActorParamName; // 0x164
};

struct UCombatAnimBlendByZoom : UAnimNodeBlendPerBone {
	ObjectProperty Owner; // 0x144
	float BlendTimeToZoom; // 0x14c
	float BlendTimeToNormal; // 0x150
	EZoomState LastZoomState; // 0x154
};

struct ACombatHUD : AHUD {
	UCombatGFxMoviePlayer* MovieClass; // 0x564
	ObjectProperty Movie; // 0x56c
	UCombatHUDSoundGroup* HUDSoundGroupClass; // 0x574
	ObjectProperty HUDSoundGroup; // 0x57c
	uint32_t bDrawPauser : 1; // 0x584
	uint32_t bTick : 1; // 0x584
	uint32_t bDebugAI : 1; // 0x584
	uint32_t bShowServerTime : 1; // 0x584
	FString ChangeListVersion; // 0x588
	ObjectProperty AudioChannelSystem; // 0x598
	TArray<FServerTimePositionInfoStruct> ServerTimePositionInfo; // 0x5a0
	int32_t ServerTimePosition; // 0x5b0
};

struct UParticleModuleRotationOverLifetime : UParticleModuleRotationBase {
	FRawDistributionFloat RotationOverLife; // 0x68
	uint32_t Scale : 1; // 0x8c
};

struct UUIDataStore_MenuItems : UUIDataStore_GameResource {
	FName CurrentGameSettingsTag; // 0xf0
	FMultiMap_Mirror OptionProviders; // 0xf8
	TArray<ObjectProperty> DynamicProviders; // 0x140
};

struct UAnimNode_MultiBlendPerBone : UAnimNodeBlendBase {
	ObjectProperty PawnOwner; // 0x100
	TArray<FPerBoneMaskInfo> MaskList; // 0x108
	EBlendType RotationBlendType; // 0x118
};

struct USeqAct_ParticleEventGenerator : USequenceAction {
	uint32_t bEnabled : 1; // 0x108
	uint32_t bUseEmitterLocation : 1; // 0x108
	ObjectProperty Instigator; // 0x10c
	TArray<FString> EventNames; // 0x114
	float EventTime; // 0x124
	FVector EventLocation; // 0x128
	FVector EventDirection; // 0x134
	FVector EventVelocity; // 0x140
	FVector EventNormal; // 0x14c
};

struct APortalTeleporter : ASceneCapturePortalActor {
	ObjectProperty SisterPortal; // 0x25c
	int32_t TextureResolutionX; // 0x264
	int32_t TextureResolutionY; // 0x268
	ObjectProperty MyMarker; // 0x26c
	uint32_t bMovablePortal : 1; // 0x274
	uint32_t bAlwaysTeleportNonPawns : 1; // 0x274
	uint32_t bCanTeleportVehicles : 1; // 0x274
};

struct ACombatAIGameRadarCore : ACombatRadarCore {
	UObject* BotClass; // 0x46c
};

struct UCombatHUD_Bombsite : UCombatHUD_GameObject {
	ObjectProperty BombsiteObject; // 0x1b0
};

struct USoundNodeConcatenator : USoundNode {
	TArray<float> InputVolume; // 0x74
};

struct UCombatDataTableRefTypeDefine : UCombatDataTableType {
	int32_t CodeID; // 0x6c
	char BUY_AFTER; // 0x70
	FString BUY_UC_FILE; // 0x74
	int32_t String_ID; // 0x84
	FString CODE_NAME; // 0x88
};

struct UCombatDataTableRefPingGroup : UCombatDataTableType {
	int32_t GroupID; // 0x6c
	int32_t PingUpper; // 0x70
};

struct UCombatFrontEnd_ChangePropernounPopup : UCombatFrontEnd_Object {
	char PopupMode; // 0xd0
	TArray<FSendTextInfo> SendTextList; // 0xd4
	FString SendText; // 0xe4
};

struct UCombatDataTableRefExtendPeriodBind : UCombatDataTableType {
	FString ItemCodeName; // 0x6c
	FString PeriodCode; // 0x7c
	int32_t TotalProb; // 0x8c
	int32_t Type; // 0x90
};

struct UNavMeshGoal_PolyEncompassesAI : UNavMeshPathGoalEvaluator {
	FVector OverrideExtentToCheck; // 0x7c
};

struct UCombatAnim_AimOffset : UAnimNodeAimOffset {
	ObjectProperty CombatPawnOwner; // 0x160
	uint32_t bOnlyUpdateIn360Aiming : 1; // 0x168
	uint32_t bTurnOffWhenReloadingWeapon : 1; // 0x168
	uint32_t bOnlyUpdateOnBecomeRelevant : 1; // 0x168
	uint32_t bDoingWeaponReloadInterp : 1; // 0x168
	float ReloadingBlendTime; // 0x16c
	float ReloadingBlendTimeToGo; // 0x170
	FVector2D LastAimOffset; // 0x174
	FVector2D LastPostProcessedAimOffset; // 0x17c
	float TurnAroundTimeToGo; // 0x184
	float TurnAroundBlendTime; // 0x188
};

struct USoundNodeWave : USoundNode {
	int32_t CompressionQuality; // 0x74
	uint32_t bForceRealTimeDecompression : 1; // 0x78
	uint32_t bLoopingSound : 1; // 0x78
	uint32_t bDynamicResource : 1; // 0x78
	uint32_t bUseTTS : 1; // 0x78
	uint32_t bProcedural : 1; // 0x78
	uint32_t bMature : 1; // 0x78
	uint32_t bManualWordWrap : 1; // 0x78
	uint32_t bSingleLine : 1; // 0x78
	ETTSSpeaker TTSSpeaker; // 0x7c
	EDecompressionType DecompressionType; // 0x7d
	EDetailMode MobileDetailMode; // 0x7e
	FString SpokenText; // 0x80
	float Volume; // 0x90
	float Pitch; // 0x94
	float Duration; // 0x98
	int32_t NumChannels; // 0x9c
	int32_t SampleRate; // 0xa0
	FUntypedBulkData_Mirror RawData; // 0xa4
	FPointer VorbisDecompressor; // 0xe4
	FPointer RawPCMData; // 0xec
	int32_t RawPCMDataSize; // 0xf4
	FUntypedBulkData_Mirror CompressedPCData; // 0xf8
	FUntypedBulkData_Mirror CompressedXbox360Data; // 0x138
	FUntypedBulkData_Mirror CompressedPS3Data; // 0x178
	FUntypedBulkData_Mirror CompressedWiiUData; // 0x1b8
	FUntypedBulkData_Mirror CompressedIPhoneData; // 0x1f8
	FUntypedBulkData_Mirror CompressedFlashData; // 0x238
	int32_t ResourceID; // 0x278
	int32_t ResourceSize; // 0x27c
	FPointer ResourceData; // 0x280
	TArray<FSubtitleCue> Subtitles; // 0x288
	TArray<FLocalizedSubtitle> LocalizedSubtitles; // 0x298
};

struct UUISoundTheme : UObject {
	TArray<FSoundEventMapping> SoundEventBindings; // 0x60
};

struct UCombatFlocking : UObject {
	float Apply_Distance; // 0x60
	float Cohesion_Force; // 0x64
	float Alignment_Force; // 0x68
	float Separation_Force; // 0x6c
	float Separation_MaxDistance; // 0x70
	float Avoidance_Force; // 0x74
	float Avoidance_MaxDistance; // 0x78
	float Target_Weight; // 0x7c
};

struct ACombatChampionshipObserverPC : ACombatPC {
	FWatchingPlayerData WatchingPlayerInfo; // 0xbe4
	uint32_t bShowObserverTeamColor : 1; // 0xbec
	ObjectProperty ChampionshipManager; // 0xbf0
};

struct UCombatSkelCtrl_CantileverBeam : USkelControlLookAt {
	FVector WorldSpaceGoal; // 0x16c
	FVector InitialWorldSpaceGoalOffset; // 0x178
	FVector Velocity; // 0x184
	float SpringStiffness; // 0x190
	float SpringDamping; // 0x194
	float PercentBeamVelocityTransfer; // 0x198
	DelegateProperty __EntireBeamVelocity__Delegate; // 0x19c
};

struct UAnimNodeAimOffset : UAnimNodeBlendBase {
	FVector2D Aim; // 0x100
	FVector2D AngleOffset; // 0x108
	uint32_t bForceAimDir : 1; // 0x110
	uint32_t bBakeFromAnimations : 1; // 0x110
	uint32_t bPassThroughWhenNotRendered : 1; // 0x110
	uint32_t bSynchronizeNodesInEditor : 1; // 0x110
	int32_t PassThroughAtOrAboveLOD; // 0x114
	EAnimAimDir ForcedAimDir; // 0x118
	TArray<char> RequiredBones; // 0x11c
	TArray<char> AimCpntIndexLUT; // 0x12c
	ObjectProperty TemplateNode; // 0x13c
	TArray<FAimOffsetProfile> Profiles; // 0x144
	int32_t CurrentProfileIndex; // 0x154
	FName RefPoseForBake; // 0x158
};

struct UCCSBTCombatChangeBTTree : UGripBTScriptBehavior {
	ObjectProperty bc; // 0xcc
	ObjectProperty NewBTTree; // 0xd4
};

struct UCombatAnimBlendByDamage : UAnimNodeBlendPerBone {
	ObjectProperty Owner; // 0x144
	float DamageAnimBlendOutTime; // 0x14c
	float DamageAnimBlendInTime; // 0x150
	float MinDamageAnimDuration; // 0x154
	float DamageAnimLength; // 0x158
	float ElapsedDamageAnimTime; // 0x15c
};

struct UTextureRenderTarget2D : UTextureRenderTarget {
	int32_t SizeX; // 0x124
	int32_t SizeY; // 0x128
	EPixelFormat Format; // 0x12c
	TextureAddress AddressX; // 0x12d
	TextureAddress AddressY; // 0x12e
	FLinearColor ClearColor; // 0x130
	uint32_t bForceLinearGamma : 1; // 0x140
};

struct UOnlineProfileSettings : UOnlinePlayerStorage {
	TArray<int32_t> ProfileSettingIds; // 0xa4
	TArray<FOnlineProfileSetting> DefaultSettings; // 0xb4
	TArray<FIdToStringMapping> OwnerMappings; // 0xc4
};

struct UCombatDataTableRefServiceRegion : UCombatDataTableType {
	int32_t Id; // 0x6c
	FString CodeName; // 0x70
	FString URL; // 0x80
	int32_t Port; // 0x90
	int32_t RegionNameID; // 0x94
};

struct ACombatRescuePC : ACombatPC {
	char SpawnAreaIndex; // 0xbe4
	uint32_t bIsRepair : 1; // 0xbe8
	uint32_t bIsReporting : 1; // 0xbe8
};

struct UAnimationCompressionAlgorithm_RemoveEverySecondKey : UAnimationCompressionAlgorithm {
	int32_t MinKeys; // 0x78
	uint32_t bStartAtSecondKey : 1; // 0x7c
};

struct UCombatDataTableRefAIRewardRank : UCombatDataTableType {
	FString ModeCodeName; // 0x6c
	char GRADE; // 0x7c
	int32_t Object_Min; // 0x80
	int32_t Object_Max; // 0x84
};

struct USeqEvent_MobileSwipe : USeqEvent_MobileRawInput {
	float Tolerance; // 0x13c
	float MinDistance; // 0x140
	FVector2D InitialTouch; // 0x144
	TArray<ObjectProperty> TouchedActors; // 0x14c
	float TraceDistance; // 0x15c
};

struct UUIDataStore : UUIDataProvider {
	FName Tag; // 0x70
	TArray<DelegateProperty> RefreshSubscriberNotifies; // 0x78
	DelegateProperty __OnDataStoreValueUpdated__Delegate; // 0x88
};

struct UCCSAFGetOutCover : UGripAFActionHandle {
	ObjectProperty CoverLink; // 0x64
	ObjectProperty Target; // 0x6c
};

struct UCombatDataTableRefClanMark : UCombatDataTableType {
	int32_t Idx; // 0x6c
	int32_t ClanTier; // 0x70
	int32_t NameString; // 0x74
};

struct UCombatHUD_IFFObject : UCombatHUDComponent_Base {
	ObjectProperty Container; // 0xbc
	ObjectProperty BombMC; // 0xc4
	ObjectProperty RadioMC; // 0xcc
	ObjectProperty KillerMC; // 0xd4
	ObjectProperty RankIconMC; // 0xdc
	ObjectProperty HPMC; // 0xe4
	ObjectProperty AggroMC; // 0xec
	ObjectProperty FriendlyNameMC; // 0xf4
	ObjectProperty EnemyNameMC; // 0xfc
	ObjectProperty FlashIconMC; // 0x104
	uint32_t bIsDisplayRadio : 1; // 0x10c
	uint32_t bIsDisplayKiller : 1; // 0x10c
	uint32_t bFlashIconVisible : 1; // 0x10c
	uint32_t bCurrentIFFEnemy : 1; // 0x10c
	FString LastRankIcon; // 0x110
	FString LastClanName; // 0x120
	FString LastClanColor; // 0x130
	int32_t LastRankIconImageID; // 0x140
	int32_t LastClanColorID; // 0x144
	float MinLocatorScale; // 0x148
	float MaxLocatorScale; // 0x14c
	float DistanceForMinScale; // 0x150
	float LocatorScale; // 0x154
	int32_t LastLocatorScale; // 0x158
	FIFFInfo CurrentIFFInfo; // 0x15c
	float IFFUpdateTime; // 0x1b8
};

struct UObject {
	FPointer VfTableObject; // 0x0
	FPointer HashNext; // 0x8
	FQWord ObjectFlags; // 0x10
	FPointer HashOuterNext; // 0x18
	FPointer StateFrame; // 0x20
	ObjectProperty Linker; // 0x28
	FPointer LinkerIndex; // 0x30
	int32_t ObjectInternalInteger; // 0x38
	int32_t NetIndex; // 0x3c
	ObjectProperty Outer; // 0x40
	FName Name; // 0x48
	UObject* Class; // 0x50
	ObjectProperty ObjectArchetype; // 0x58
};

struct UUIDataStore_InputAlias : UUIDataStore_StringBase {
	TArray<FUIDataStoreInputAlias> InputAliases; // 0x98
	TMap<None, None> InputAliasLookupMap; // 0xa8
};

struct ACombatRepairingArea : AActor {
	ComponentProperty Mesh; // 0x244
};

struct UCombatFrontEnd_Event_AttendanceCheckTab : UCombatFrontEnd_Event_TabBase {
	TArray<FRewardItemStruct> RewardItemList; // 0x6c
};

struct UMcpClashMobBase : UMcpServiceBase {
	FString McpClashMobClassName; // 0x78
	DelegateProperty __OnQueryChallengeListComplete__Delegate; // 0x88
	DelegateProperty __OnDownloadChallengeFileComplete__Delegate; // 0x98
	DelegateProperty __OnAcceptChallengeComplete__Delegate; // 0xa8
	DelegateProperty __OnQueryChallengeUserStatusComplete__Delegate; // 0xb8
	DelegateProperty __OnUpdateChallengeUserProgressComplete__Delegate; // 0xc8
	DelegateProperty __OnUpdateChallengeUserRewardComplete__Delegate; // 0xd8
};

struct ACBWeaponAttachment : AActor {
	ComponentProperty Mesh; // 0x244
	TArray<FMeshPart> MeshParts; // 0x24c
	ObjectProperty PhysicsAsset; // 0x25c
	float BoundsScaleForHolster; // 0x264
	float DefaultBoundsScale; // 0x268
	uint32_t bAlwaysShowTheHolster : 1; // 0x26c
	uint32_t UseGripIK : 1; // 0x26c
	uint32_t bExistLauncherGripSocket : 1; // 0x26c
	uint32_t bCalculateGripOffset : 1; // 0x26c
	uint32_t bInitWeaponMesh : 1; // 0x26c
	FName ExtraEffectSocket; // 0x270
	ComponentProperty MuzzleFlashPSC; // 0x278
	ObjectProperty MuzzleFlashPSCTemplate; // 0x280
	ObjectProperty MuzzleFlashPSCSilencerTemplate; // 0x288
	ComponentProperty ExtraPSC; // 0x290
	ObjectProperty ExtraPSCTemplate; // 0x298
	ObjectProperty TracerPSCTemplate; // 0x2a0
	ObjectProperty TracerPSCTemplate3rd; // 0x2a8
	UCombatExplosionLight* MuzzleFlashLightClass; // 0x2b0
	UCombatExplosionLight* MuzzleLowDetailFlashLightClass; // 0x2b8
	ComponentProperty MuzzleFlashLight; // 0x2c0
	float MuzzleFlashDuration; // 0x2c8
	FName AttachmentSocket; // 0x2cc
	FName AttachmentSocket_Inven; // 0x2d4
	ObjectProperty BulletWhip; // 0x2dc
	float BulletWhipRadius; // 0x2e4
	float BulletWhipAdditionalHeight; // 0x2e8
	float MaxImpactEffectDistance; // 0x2ec
	float MaxFireEffectDistance; // 0x2f0
	float MaxDecalRangeSq; // 0x2f4
	int32_t SpawnTracerPerNum; // 0x2f8
	int32_t SpawnTracerPerNumForFP; // 0x2fc
	FName WeapAimProfileName[0x2]; // 0x300
	ObjectProperty CustomAnim; // 0x310
	FString WeaponMasterAnimSet[0x2]; // 0x318
	FString WeaponSubAnimSet[0x2]; // 0x338
	FString AttachmentAnimSet[0x2]; // 0x358
	FName HandGripSocket[0x2]; // 0x378
	FName LauncherGripSocket[0x2]; // 0x388
	FString InvenAnimSeq; // 0x398
	float InvenAnimChances[0x3]; // 0x3a8
	WeapFireAnimType FireAnimType; // 0x3b4
	EGender HoldersGender; // 0x3b5
	char bPendingToLoadAsyncAnimSet; // 0x3b6
	TArray<FAnimNotifyObjectData> AnimNotifyData; // 0x3b8
	float CharacterAnimSetBlendTime; // 0x3c8
	float LastAnimSetBlendTime; // 0x3cc
	ComponentProperty PSC_ShellEject; // 0x3d0
	int32_t RecoilIndex; // 0x3d8
	TArray<FHideBoneDataByWeaponState> HideBoneDataByWeapState; // 0x3dc
	TArray<FName> CachedHideBoneData; // 0x3ec
	FName HolsterSocketName; // 0x3fc
	FName HolsterBoneName; // 0x404
	ObjectProperty OwnerWeapon; // 0x40c
	ObjectProperty IronSightTMNodeRear; // 0x414
	ObjectProperty IronSightTMNodeFront; // 0x41c
};

struct UMaterialInstance : UMaterialInterface {
	ObjectProperty PhysMaterial; // 0x214
	ObjectProperty Parent; // 0x21c
	ObjectProperty PhysMaterialMask; // 0x224
	int32_t PhysMaterialMaskUVChannel; // 0x22c
	ObjectProperty BlackPhysicalMaterial; // 0x230
	ObjectProperty WhitePhysicalMaterial; // 0x238
	uint32_t bHasStaticPermutationResource : 1; // 0x240
	uint32_t bStaticPermutationDirty : 1; // 0x240
	uint32_t ReentrantFlag : 1; // 0x240
	uint32_t bNeedsMaterialFlattening : 1; // 0x240
	FPointer StaticParameters[0x2]; // 0x244
	FPointer StaticPermutationResources[0x2]; // 0x254
	FPointer Resources[0x3]; // 0x264
	TArray<ObjectProperty> ReferencedTextures; // 0x27c
	FGuid ParentLightingGuid; // 0x28c
};

struct USeqAct_CastToFloat : USeqAct_SetSequenceVariable {
	int32_t Value; // 0x108
	float FloatResult; // 0x10c
};

struct UUIDataStore_GameState : UUIDataStore {
	DelegateProperty __OnRefreshDataFieldValue__Delegate; // 0x98
};

struct USeqAct_CombatTeamCert : USequenceAction {
	Team TeamIndex; // 0x108
	uint32_t IsAI : 1; // 0x10c
	uint32_t IgnoreTeam : 1; // 0x10c
	int32_t MaxCount; // 0x110
	int32_t CurrentCount; // 0x114
};

struct UParticleModulePhysicsVolumes : UParticleModuleWorldForcesBase {
	FRawDistributionFloat GlobalInfluence; // 0x68
	EParticleLevelInfluenceType LevelInfluenceType; // 0x8c
};

struct ALadder : ANavigationPoint {
	ObjectProperty MyLadder; // 0x33c
	ObjectProperty LadderList; // 0x344
};

struct AKActorFromStatic : AKActor {
	ObjectProperty MyStaticMeshActor; // 0x378
	float MaxImpulseSpeed; // 0x380
};

struct UCombatDataTableRefModeGuide : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString CodeName; // 0x70
	int32_t Type; // 0x80
	int32_t ModeNameText; // 0x84
	int32_t ModeHighlightText; // 0x88
	int32_t AttackTitleText; // 0x8c
	int32_t DefenseTitleText; // 0x90
	int32_t AttackDetailText; // 0x94
	int32_t DefenseDetailText; // 0x98
	FString ImageName; // 0x9c
	int32_t ImageID; // 0xac
	int32_t WeaponText[0x3]; // 0xb0
	FString ModeCodeName; // 0xbc
};

struct UCombatDataTableRefShopValue : UCombatDataTableType {
	int32_t Index; // 0x6c
	int32_t RentalID; // 0x70
	int32_t ValueType; // 0x74
	int32_t ValueRange[0x5]; // 0x78
	int32_t PriceType; // 0x8c
	int32_t ItemPrice[0x5]; // 0x90
	int32_t Mainprice; // 0xa4
	int32_t SalePrice[0x5]; // 0xa8
	int32_t AddPriceType; // 0xbc
	int32_t AddPrice[0x5]; // 0xc0
	FTimeData SellStart; // 0xd4
	FTimeData SellEnd; // 0xdc
	FString AddReplaceItem; // 0xe4
	FString MailFormCodename; // 0xf4
};

struct ACombatPawn : APawn {
	float CustomGravityScaling; // 0x558
	uint32_t bUseBotWeaponMovement : 1; // 0x55c
	uint32_t bAllowDiagonalLadderClimb : 1; // 0x55c
	uint32_t bCheckVelocityLotation : 1; // 0x55c
	uint32_t bInitSavedLocation : 1; // 0x55c
	uint32_t bRotationFollowsVelocity : 1; // 0x55c
	uint32_t bUpdateEyeheight : 1; // 0x55c
	uint32_t bApplyInstanceItem : 1; // 0x55c
	uint32_t PowerBullet_Buff : 1; // 0x55c
	uint32_t bIsBlockedByPawnCollision : 1; // 0x55c
	uint32_t bIsInvulnerable : 1; // 0x55c
	uint32_t bJustLanded : 1; // 0x55c
	uint32_t bLandRecovery : 1; // 0x55c
	uint32_t bCanDisplayIconInTacticalMap : 1; // 0x55c
	uint32_t bIgnorePitch : 1; // 0x55c
	uint32_t DoDeathAnimPhysBlend : 1; // 0x55c
	uint32_t bPlayDamageAnim : 1; // 0x55c
	uint32_t IsMoving : 1; // 0x55c
	uint32_t bIsLocalPawn : 1; // 0x55c
	uint32_t bIsCheatPawn : 1; // 0x55c
	uint32_t bCheckPhysWalkingLedges : 1; // 0x55c
	uint32_t bWeaponImpactAttenuate : 1; // 0x55c
	uint32_t bSaveSkill : 1; // 0x55c
	uint32_t bLeftFootDown : 1; // 0x55c
	uint32_t bRespawnAction : 1; // 0x55c
	uint32_t IgnoreKillZ : 1; // 0x55c
	uint32_t DeathCertificate : 1; // 0x55c
	uint32_t WasCrouchedOnDeath : 1; // 0x55c
	uint32_t bStuckHandsOnDeath : 1; // 0x55c
	uint32_t bPotentialWallSmash : 1; // 0x55c
	uint32_t bFinishedPrePlayDyingCheck : 1; // 0x55c
	uint32_t IgnoreAimoffset : 1; // 0x55c
	uint32_t UpdateHandGripPos : 1; // 0x55c
	uint32_t bDirtyWeaponAmmo : 1; // 0x560
	uint32_t bGodMode : 1; // 0x560
	uint32_t bProcessFellOutOfWorld : 1; // 0x560
	uint32_t OnParachute : 1; // 0x560
	uint32_t bNeedToUpdateSkelpose : 1; // 0x560
	uint32_t bAIIgnoreAimDir : 1; // 0x560
	uint32_t bIgnoreDamagedDecelerationRatio : 1; // 0x560
	uint32_t bCanStaminaRecover : 1; // 0x560
	uint32_t bBlockCrouch : 1; // 0x560
	uint32_t bSetForceSpamGrade : 1; // 0x560
	uint32_t bOnFlashInability : 1; // 0x560
	ObjectProperty CachedPRI; // 0x564
	FVector DyingLocation; // 0x56c
	float FlyingAirSpeed; // 0x578
	ELadderClimbType LadderClimbType; // 0x57c
	EPawnBuffState PawnBuffState; // 0x57d
	char AccessoryEnableSlot[0x6]; // 0x57e
	EIFFDisplayType IFFDisplayType; // 0x584
	char RecoilCount; // 0x585
	EVelocityState VelocityState; // 0x586
	ERotationStep RotationYaw; // 0x587
	EHand IKHand; // 0x588
	char CombatPawnTeamNum; // 0x589
	char PenetrateBeforeHit; // 0x58a
	char CrouchSpamGrade; // 0x58b
	float LadderStrafingSpeed; // 0x58c
	float StrafeAllowDegreeOnLadder; // 0x590
	float StrafeAllowValueOnLadder; // 0x594
	float AttachingDegreeOnLadder; // 0x598
	float AttachingValueOnLadder; // 0x59c
	float AllowedClimbUpDegreeOnLadder; // 0x5a0
	float AllowedClimbUpValueOnLadder; // 0x5a4
	float AllowedClimbDownDegreeOnLadder; // 0x5a8
	float AllowedClimbDownValueOnLadder; // 0x5ac
	float VelocityReduceRatioForLanding; // 0x5b0
	float VelocityReduceRatioOnWalkingJump; // 0x5b4
	ObjectProperty DialogObj; // 0x5b8
	FVector PrevLocation; // 0x5c0
	FCBTakeHitInfo LastTakeHitInfo; // 0x5cc
	FCBTakeHitInfo LastTakeHitInfoByLocalPlayer; // 0x614
	FVector MeshTranslationOffset; // 0x65c
	FVector2D MeshTranslationIntegralOffset; // 0x668
	FVector FixedMeshTranslationOffset; // 0x670
	float CrouchTranslationOffset; // 0x67c
	float CrouchStartTime; // 0x680
	float CrouchLength; // 0x684
	float MeshTranslationKpAmt; // 0x688
	float MeshTranslationKiAmt; // 0x68c
	float MeshTranslationFallingSpeed; // 0x690
	float MeshTranslationZSpeed; // 0x694
	FVector CombatSavedLocation; // 0x698
	float OldZ; // 0x6a4
	float TossWeaponSpeed; // 0x6a8
	float TossSwappedWeaponSpeed; // 0x6ac
	ObjectProperty RootRotControl; // 0x6b0
	ObjectProperty AimNode; // 0x6b8
	ObjectProperty CrouchNode; // 0x6c0
	TArray<ObjectProperty> RecoilNodes; // 0x6c8
	ObjectProperty LookAtCtrl; // 0x6d8
	ObjectProperty MyCombatWeapon; // 0x6e0
	TArray<ObjectProperty> PassiveWeaponList; // 0x6e8
	TArray<ObjectProperty> MyGrenadeWeapon; // 0x6f8
	TArray<ObjectProperty> MyPrimaryWeapon; // 0x708
	float SlopeBoostFriction; // 0x718
	FVector2D CurrentSkelAim; // 0x71c
	float BackwardSpeedPct; // 0x724
	float StandardGroundSpeed; // 0x728
	float AddMainAmmo_Buff; // 0x72c
	float AddSubAmmo_Buff; // 0x730
	float AddMainMagazineAmmo_Buff; // 0x734
	float AddSubMagazineAmmo_Buff; // 0x738
	float MaxMainMagazineAmmo_Buff; // 0x73c
	float MaxSubMagazineAmmo_Buff; // 0x740
	float ReloadingRate_Buff; // 0x744
	float WeaponChangeRate_Buff; // 0x748
	float MaxHealthRate_Buff; // 0x74c
	float HealthCureRate_Buff; // 0x750
	float MaxAutoCureHealthModifier_Buff; // 0x754
	float GroundCrouchSpeedRate_Buff; // 0x758
	float GroundAccelationRate_Buff; // 0x75c
	float GroundRunSpeedRate_Buff; // 0x760
	float GroundWalkingSpeedRate_Buff; // 0x764
	float DetailedRadarDistance_Buff; // 0x768
	float RadarRange_Buff; // 0x76c
	float GunAttackRate_Buff; // 0x770
	float GunGuardRate_Buff; // 0x774
	float MeleeAttackRate_Buff; // 0x778
	float MeleeGuardRate_Buff; // 0x77c
	float ExplosiveAttackRate_Buff; // 0x780
	float ExplosiveGuardRate_Buff; // 0x784
	int32_t AddGrenade_Buff; // 0x788
	float InstanceItem_GroundCrouchSpeedRate_Buff; // 0x78c
	float InstanceItem_GroundAccelationRate_Buff; // 0x790
	float InstanceItem_GroundRunSpeedRate_Buff; // 0x794
	float InstanceItem_GroundWalkingSpeedRate_Buff; // 0x798
	FArmorPointStruct AP_Buff[0x12]; // 0x79c
	int32_t APForExplosion_Buff; // 0xa6c
	float ShortenRespawnDelay_Buff; // 0xa70
	float DamagedAccelerationRatio_Buff; // 0xa74
	float GunAttackRateForAI; // 0xa78
	float MeleeAttackRateForAI; // 0xa7c
	float GrenadeAttackRateForAI; // 0xa80
	int32_t IgnoreCheckExpose; // 0xa84
	float RepFootStepSoundMultiplier; // 0xa88
	UCBPawnSoundGroup* SoundGroupClass; // 0xa8c
	UCBFamilyInfo* CurrCharClassInfo; // 0xa94
	UCombatInstanceItem_ArmorBase* CurrInstanceItemClassInfo; // 0xa9c
	ComponentProperty Left_Armor; // 0xaa4
	ComponentProperty Right_Armor; // 0xaac
	UCombatAccessory_Base* AccessoryClassInfo[0x6]; // 0xab4
	ComponentProperty AccessorySkeletalMeshComp[0x6]; // 0xae4
	float DefaultMeshScale; // 0xb14
	FName FamiliInfoType; // 0xb18
	UCombatVoiceBase* RadioVoiceClass; // 0xb20
	ComponentProperty LightEnvironment; // 0xb28
	float Bob; // 0xb30
	float Bob_Y; // 0xb34
	float Bob_Y_Freq; // 0xb38
	float BobSeperationFactor; // 0xb3c
	float AppliedBob; // 0xb40
	float bobtime; // 0xb44
	FVector WalkBob; // 0xb48
	float CameraScale; // 0xb54
	float CurrentCameraScale; // 0xb58
	float CameraScaleMin; // 0xb5c
	float CameraScaleMax; // 0xb60
	float CameraZOffset; // 0xb64
	ObjectProperty FullBodyAnimSlot; // 0xb68
	ObjectProperty TopHalfAnimSlot; // 0xb70
	ObjectProperty TopHalfParentNode; // 0xb78
	ObjectProperty PhysAssetForDeath; // 0xb80
	FVector CamOffset; // 0xb88
	float HeroCameraScale; // 0xb94
	int32_t HeroCameraPitch; // 0xb98
	int32_t HealthGaugeStep; // 0xb9c
	TArray<FCameraShakeRotationFactor> CameraShake_DecreaseByDepense; // 0xba0
	TArray<int32_t> HitRangeForCameraShake; // 0xbb0
	FCameraShakeRotationFactor CameraShakeMinRange; // 0xbc0
	FCameraShakeRotationFactor CameraShakeMaxRange; // 0xbc8
	float CameraShakeSpeed; // 0xbd0
	float CameraShakeRecoverSpeed; // 0xbd4
	float CameraShakeRandom; // 0xbd8
	FRotator CameraShakeOffset; // 0xbdc
	FRotator AutoCorrectCameraShakeOffset; // 0xbe8
	FRotator DeltaCameraShake; // 0xbf4
	float MaxFootstepDistSq; // 0xc00
	float MaxJumpSoundDistSq; // 0xc04
	float NoLandedSoundVelZSize; // 0xc08
	float MaxDistForBloodSplatter; // 0xc0c
	float CrounchEyeHeight; // 0xc10
	float DeathRagdollTime; // 0xc14
	FVectorWithFlag CompressedLastImpactLocation; // 0xc18
	ObjectProperty TurnInPlaceNode; // 0xc28
	float ViewTargetRotationInterpolationSpeed; // 0xc30
	int32_t InterpolatedRemoteViewPitch; // 0xc34
	float YawInterpolationSpeed; // 0xc38
	int32_t InterpolatedYaw; // 0xc3c
	float EyeHeightInterpolationSpeed; // 0xc40
	float InterpolatedEyeHeight; // 0xc44
	float AimAssistDamageMultiplier; // 0xc48
	float MeleeAssistDamageMultiplier; // 0xc4c
	float LastAimRotationTime; // 0xc50
	FRotator LastAimRotation; // 0xc54
	FVectorWithFlag VelocityWithIsMoving; // 0xc60
	float VelocityMutiplyRatioToCollideOtherPawn; // 0xc70
	float SlideFriction; // 0xc74
	ComponentProperty WeaponImpactUndampedSound; // 0xc78
	ComponentProperty WeaponImpactUndampedVoice; // 0xc80
	float PhysicCorpses; // 0xc88
	float SpawnProtectionAmbientCycleTime; // 0xc8c
	FLinearColor SpawnProtectionAmbientGlow; // 0xc90
	ComponentProperty GetterPickupEffectComp; // 0xca0
	ComponentProperty PawnCollision; // 0xca8
	ObjectProperty ActiveTimeDilationAnim; // 0xcb0
	TArray<ObjectProperty> DyingExplosionActorsForTimeDilation; // 0xcb8
	int32_t ViewTargetRotation; // 0xcc8
	ObjectProperty CBInvManager; // 0xccc
	ComponentProperty ShadowDecal; // 0xcd4
	float BelowFeetCheckDistance; // 0xcdc
	float BelowFeetCheckDistanceSq; // 0xce0
	FPhysMaterialBelowFeet LastPhysMatBelowFeet; // 0xce4
	FName FootDownBoneName[0x2]; // 0xcf8
	FVector FootExtent; // 0xd08
	float CurrentTerminalVelocity; // 0xd14
	float LeftDeathAnimTime; // 0xd18
	float ReachedGoalSplineTime; // 0xd1c
	ObjectProperty IFFObject; // 0xd20
	int32_t LocalHitBodyIndex; // 0xd28
	FVector LocalHitDir; // 0xd2c
	FName LastHitBone; // 0xd38
	float WallSmashMod; // 0xd40
	float MomentumEff; // 0xd44
	FVector OnDeathVelocity; // 0xd48
	float RagdollPushEff; // 0xd54
	FName RagdollPushBone; // 0xd58
	float RagdollUpKick; // 0xd60
	float NoRagdollVelocity; // 0xd64
	float WallSmashDist; // 0xd68
	float RagdollTraceStartOffset; // 0xd6c
	ObjectProperty HandGripIKNode[0x2]; // 0xd70
	float BanzaiImpulse; // 0xd80
	int32_t WallCheckSpreadYaw; // 0xd84
	float RollBob; // 0xd88
	FArmorPointStruct AmmorPoint[0x12]; // 0xd8c
	int32_t AmmorPointForExplosion; // 0x105c
	int32_t AmmorItemGrade; // 0x1060
	TArray<FImpulseData> PhysBodyImpulseMap; // 0x1064
	FVector StoredHandGrip; // 0x1074
	float fReplicatedCustomTimeD; // 0x1080
	int32_t CriticalDamagePitch; // 0x1084
	float LastApplyFamilyInfoTime; // 0x1088
	ObjectProperty ChaFXUpperItem; // 0x108c
	ObjectProperty ChaFXFootItem; // 0x1094
	ObjectProperty TrophySkillObject; // 0x109c
	ObjectProperty SentryGunSkillObject; // 0x10a4
	float AdditionalDamagedDecelerationRatio; // 0x10ac
	float MaxDamagedDecelerationRatio; // 0x10b0
	TArray<FCrouchSpamValue> CrouchValue; // 0x10b4
	float CrouchStamina; // 0x10c4
	float CrouchStaminaMax; // 0x10c8
	float CrouchStaminaRecoverForSec; // 0x10cc
	float CrouchStaminaUseValue; // 0x10d0
	float CrouchStaminaHoldTime; // 0x10d4
	float CrouchSpamGradeZeroRange; // 0x10d8
	float CrouchSpamGradeOneRange; // 0x10dc
	float CrouchSpamGradeTwoRange; // 0x10e0
	float CrouchSpamGradeThreeRange; // 0x10e4
	int32_t ForceSpamGradeLevel; // 0x10e8
	FFlashEffectRepStruct FlashEffectInfo; // 0x10ec
	FFlashEffectRepStruct CurrentFlashEffectInfo; // 0x10f4
	float FlashEffectSyncDeltaTime; // 0x10fc
	float FlashEffectSyncDelay; // 0x1100
	float FlashEffectMaxTime; // 0x1104
	float FlashEffectStartTime; // 0x1108
	DelegateProperty __OnDetachDroppedWeapon__Delegate; // 0x110c
};

struct UParticleModuleParameterDynamic_Seeded : UParticleModuleParameterDynamic {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct AGameCrowdAgentSkeletal : AGameCrowdAgent {
	ComponentProperty SkeletalMeshComponent; // 0x4c4
	ObjectProperty SpeedBlendNode; // 0x4cc
	ObjectProperty FullBodySlot; // 0x4d4
	ObjectProperty ActionSeqNode; // 0x4dc
	ObjectProperty WalkSeqNode; // 0x4e4
	ObjectProperty RunSeqNode; // 0x4ec
	ObjectProperty AgentTree; // 0x4f4
	TArray<FName> WalkAnimNames; // 0x4fc
	TArray<FName> RunAnimNames; // 0x50c
	TArray<FName> IdleAnimNames; // 0x51c
	TArray<FName> DeathAnimNames; // 0x52c
	float SpeedBlendStart; // 0x53c
	float SpeedBlendEnd; // 0x540
	float AnimVelRate; // 0x544
	float MaxSpeedBlendChangeSpeed; // 0x548
	FName MoveSyncGroupName; // 0x54c
	TArray<FGameCrowdAttachmentList> Attachments; // 0x554
	float MaxTargetAcquireTime; // 0x564
	uint32_t bUseRootMotionVelocity : 1; // 0x568
	uint32_t bAllowSkeletonUpdateChangeBasedOnTickResult : 1; // 0x568
	uint32_t bTickWhenNotVisible : 1; // 0x568
	uint32_t bIsPlayingIdleAnimation : 1; // 0x568
	uint32_t bIsPlayingDeathAnimation : 1; // 0x568
	uint32_t bIsPlayingImportantAnimation : 1; // 0x568
	uint32_t bAnimateThisTick : 1; // 0x568
	float NotVisibleDisableTickTime; // 0x56c
	float MaxAnimationDistance; // 0x570
	float MaxAnimationDistanceSq; // 0x574
};

struct ACombatWavePawnBase : ACombatGuy_NPC {
	FPointer VfTable_Iinterface_WavePawn; // 0x11f0
	FWavePawnData WavePawnData; // 0x11f8
};

struct UExponentialHeightFogComponent : UActorComponent {
	uint32_t bEnabled : 1; // 0x88
	uint32_t Low : 1; // 0x88
	uint32_t Medium : 1; // 0x88
	uint32_t High : 1; // 0x88
	float FogHeight; // 0x8c
	float FogDensity; // 0x90
	float FogHeightFalloff; // 0x94
	float FogMaxOpacity; // 0x98
	float StartDistance; // 0x9c
	float LightTerminatorAngle; // 0xa0
	float OppositeLightBrightness; // 0xa4
	FColor OppositeLightColor; // 0xa8
	float LightInscatteringBrightness; // 0xac
	FColor LightInscatteringColor; // 0xb0
	EDetailMode DetailMode; // 0xb4
};

struct UMaterialExpressionTextureSampleParameterNormal : UMaterialExpressionTextureSampleParameter {
	FPointer InstanceOverride; // 0x140
};

struct UCombatDataTableRefSeasonInfo : UCombatDataTableType {
	FString Category; // 0x6c
	int32_t Season; // 0x7c
	FTimeData StartTime; // 0x80
	FTimeData EndTime; // 0x88
};

struct UGameCrowd_ListOfAgents : UObject {
	TArray<FAgentArchetypeInfo> ListOfAgents; // 0x60
};

struct USoundNodeModulator : USoundNode {
	float PitchMin; // 0x74
	float PitchMax; // 0x78
	float VolumeMin; // 0x7c
	float VolumeMax; // 0x80
	FRawDistributionFloat PitchModulation; // 0x84
	FRawDistributionFloat VolumeModulation; // 0xa8
};

struct USeqVar_String : USequenceVariable {
	FString StrValue; // 0xa0
};

struct UParticleModuleRotation : UParticleModuleRotationBase {
	FRawDistributionFloat StartRotation; // 0x68
};

struct UCombatDataTableRefModeTip : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString CodeName; // 0x70
	FString Reference; // 0x80
	int32_t StringID_MIN; // 0x90
	int32_t StringID_MAX; // 0x94
};

struct UCombatDataTableRefItemOptionBind : UCombatDataTableType {
	FString OPTypeCode; // 0x6c
	int32_t OptionType; // 0x7c
	int32_t ValueMin; // 0x80
	int32_t ValueMax; // 0x84
	int32_t RandomValue; // 0x88
	int32_t SpecialValue1; // 0x8c
	int32_t SpecialValue2; // 0x90
	int32_t StringID; // 0x94
	FString UIIcon; // 0x98
};

struct UMobileMenuElement : UObject {
	FVector2D VpPos; // 0x60
	FVector2D VpSize; // 0x68
	uint32_t bIsVisible : 1; // 0x70
	uint32_t bIsActive : 1; // 0x70
};

struct UCombatHUDEntity_Base : UCombatHUD_Base {
	EActivateType LastActivateType; // 0xbc
};

struct UGripActionFramework : UObject {
	FPointer NativeFramework; // 0x60
};

struct USoundNodeWaveStreaming : USoundNodeWave {
	TArray<char> QueuedAudio; // 0x2a8
	float InactiveDuration; // 0x2b8
};

struct UCombatRadioSystem : UObject {
	TArray<FKeyBindingInfo> RadioKeyBindings; // 0x60
	uint32_t bIsBlockingRadioKey : 1; // 0x70
	uint32_t bIsRadioKeyBinding : 1; // 0x70
	uint32_t bSelectingSuccess : 1; // 0x70
	int32_t RadioKeyBlockTime; // 0x74
	int32_t AutoHideTime; // 0x78
	ObjectProperty UIObject; // 0x7c
	ObjectProperty MarkerMenuUIObject; // 0x84
	ObjectProperty OwnerPC; // 0x8c
	RadioKeyType LastSelectTabIndex; // 0x94
};

struct UCombatHUD_CTFPointArea : UCombatHUD_GameObject {
	ObjectProperty AreaVolume; // 0x1b0
	ObjectProperty flag; // 0x1b8
	int32_t TargetIndex; // 0x1c0
	uint32_t IsArea : 1; // 0x1c4
};

struct ACombatWaitingServer : ACombatGameFrame {
	int32_t InitializeDelayTime; // 0x4c0
};

struct UCombatDataTableRefItemOption : UCombatDataTableType {
	FString OPCode; // 0x6c
	int32_t OPSlot; // 0x7c
	FString OPTypeCode; // 0x80
	int32_t OPTP; // 0x90
	FString OPItemCode; // 0x94
	int32_t OPItemCount; // 0xa4
	int32_t OPRetryType; // 0xa8
	int32_t OPRetryValue; // 0xac
	int32_t OPRetryValue2; // 0xb0
};

struct USeqAct_PlayMusicTrack : USequenceAction {
	FMusicTrackStruct MusicTrack; // 0x108
};

struct USeqAct_SetVelocity : USequenceAction {
	FVector VelocityDir; // 0x108
	float VelocityMag; // 0x114
	uint32_t bVelocityRelativeToActorRotation : 1; // 0x118
};

struct UGameCrowdBehavior_WaitInQueue : UGameCrowdAgentBehavior {
	uint32_t bStoppingBehavior : 1; // 0x9c
	ObjectProperty QueuePosition; // 0xa0
};

struct UGameplayEventsReader : UGameplayEvents {
	TArray<ObjectProperty> RegisteredHandlers; // 0x1c0
};

struct APylon : ANavigationPoint {
	FPointer VfTable_IEditorLinkSelectionInterface; // 0x33c
	FPointer VfTable_IInterface_NavigationHandle; // 0x344
	FPointer NavMeshPtr; // 0x34c
	FPointer ObstacleMesh; // 0x354
	FPointer DynamicObstacleMesh; // 0x35c
	FPointer WorkingSetPtr; // 0x364
	FPointer PathObjectsThatAffectThisPylon; // 0x36c
	TArray<FVector> NextPassSeedList; // 0x374
	FOctreeElementId OctreeId; // 0x384
	FPointer OctreeIWasAddedTo; // 0x390
	ObjectProperty NextPylon; // 0x398
	TArray<ObjectProperty> ExpansionVolumes; // 0x3a0
	float ExpansionRadius; // 0x3b0
	float MaxExpansionRadius; // 0x3b4
	ComponentProperty PylonRadiusPreview; // 0x3b8
	uint32_t bImportedMesh : 1; // 0x3c0
	uint32_t bUseExpansionSphereOverride : 1; // 0x3c0
	uint32_t bNeedsCostCheck : 1; // 0x3c0
	uint32_t bPylonInHighLevelPath : 1; // 0x3c0
	uint32_t bUseRecast : 1; // 0x3c0
	uint32_t bAllowRecastGenerator : 1; // 0x3c0
	uint32_t bDrawEdgePolys : 1; // 0x3c0
	uint32_t bDrawPolyBounds : 1; // 0x3c0
	uint32_t bRenderInShowPaths : 1; // 0x3c0
	uint32_t bDrawWalkableSurface : 1; // 0x3c0
	uint32_t bDrawObstacleSurface : 1; // 0x3c0
	uint32_t bSolidObstaclesInGame : 1; // 0x3c0
	uint32_t bBuildThisPylon : 1; // 0x3c0
	uint32_t bDisabled : 1; // 0x3c0
	uint32_t bForceObstacleMeshCollision : 1; // 0x3c0
	FVector ExpansionSphereCenter; // 0x3c4
	ComponentProperty RenderingComp; // 0x3d0
	ComponentProperty BrokenSprite; // 0x3d8
	TArray<ObjectProperty> ImposterPylons; // 0x3e0
	TArray<ObjectProperty> OnBuild_DisableCollisionForThese; // 0x3f0
	TArray<ObjectProperty> OnBuild_EnableCollisionForThese; // 0x400
	float MaxPolyHeight_Optional; // 0x410
	char NavMeshGenerator; // 0x414
	TArray<FKAggregateGeom> VoxelFilterBounds; // 0x418
	TArray<FMatrix> VoxelFilterTM; // 0x428
	int32_t DebugEdgeCount; // 0x438
	FVector DebugPathExtent; // 0x43c
	FVector DebugPathStartLocation; // 0x448
};

struct UMaterialExpressionBumpOffset : UMaterialExpression {
	FExpressionInput Coordinate; // 0xb0
	FExpressionInput Height; // 0xe4
	FExpressionInput HeightRatioInput; // 0x118
	float HeightRatio; // 0x14c
	float ReferencePlane; // 0x150
};

struct UParticleModuleSpawn : UParticleModuleSpawnBase {
	FRawDistributionFloat Rate; // 0x6c
	FRawDistributionFloat RateScale; // 0x90
	EParticleBurstMethod ParticleBurstMethod; // 0xb4
	TArray<FParticleBurst> BurstList; // 0xb8
};

struct USeqEvent_Console : USequenceEvent {
	FName ConsoleEventName; // 0x128
	FString EventDesc; // 0x130
};

struct ACombatWeapon_Supplies : ACombatWeapon_Skill_Weapon {
	UCombatSkill_Supplies* SuppliesSKillClass; // 0x1ee8
	EDroppedSuppliesType DropType; // 0x1ef0
};

struct UPathConstraint : UObject {
	int32_t CacheIdx; // 0x60
	ObjectProperty NextConstraint; // 0x64
};

struct UTexture2D : UTexture {
	FIndirectArray_Mirror Mips; // 0x11c
	FIndirectArray_Mirror CachedPVRTCMips; // 0x12c
	FIndirectArray_Mirror CachedATITCMips; // 0x13c
	int32_t CachedFlashMipsMaxResolution; // 0x14c
	FUntypedBulkData_Mirror CachedFlashMips; // 0x150
	int32_t SizeX; // 0x190
	int32_t SizeY; // 0x194
	int32_t OriginalSizeX; // 0x198
	int32_t OriginalSizeY; // 0x19c
	EPixelFormat Format; // 0x1a0
	TextureAddress AddressX; // 0x1a1
	TextureAddress AddressY; // 0x1a2
	uint32_t bIsStreamable : 1; // 0x1a4
	uint32_t bHasCancelationPending : 1; // 0x1a4
	uint32_t bHasBeenLoadedFromPersistentArchive : 1; // 0x1a4
	uint32_t bForceMiplevelsToBeResident : 1; // 0x1a4
	uint32_t bGlobalForceMipLevelsToBeResident : 1; // 0x1a4
	uint32_t bIsCompositingSource : 1; // 0x1a4
	uint32_t bHasBeenPaintedInEditor : 1; // 0x1a4
	float ForceMipLevelsToBeResidentTimestamp; // 0x1a8
	FName TextureFileCacheName; // 0x1ac
	FGuid TextureFileCacheGuid; // 0x1b4
	int32_t RequestedMips; // 0x1c4
	int32_t ResidentMips; // 0x1c8
	int32_t MipsToRemoveOnCompress; // 0x1cc
	FThreadSafeCounter PendingMipChangeRequestStatus; // 0x1d0
	TArray<char> SystemMemoryData; // 0x1d4
	FTextureLinkedListMirror StreamableTexturesLink; // 0x1e4
	int32_t StreamingIndex; // 0x1fc
	int32_t MipTailBaseIdx; // 0x200
	FPointer ResourceMem; // 0x204
	int32_t FirstResourceMemMip; // 0x20c
	float Timer; // 0x210
};

struct AUIDisplayPoint : AActor {
	FString NameText; // 0x244
};

struct UTitleFileDownloadCache : UMCPBase {
	TArray<FTitleFileCacheEntry> TitleFiles; // 0x80
	TArray<DelegateProperty> LoadCompleteDelegates; // 0x90
	TArray<DelegateProperty> SaveCompleteDelegates; // 0xa0
	DelegateProperty __OnLoadTitleFileComplete__Delegate; // 0xb0
	DelegateProperty __OnSaveTitleFileComplete__Delegate; // 0xc0
};

struct UMaterialExpressionFmod : UMaterialExpression {
	FExpressionInput A; // 0xb0
	FExpressionInput B; // 0xe4
};

struct USeqAct_LevelVisibility : USeqAct_Latent {
	ObjectProperty Level; // 0x120
	FName LevelName; // 0x128
	uint32_t bStatusIsOk : 1; // 0x130
};

struct UGripActionNode_Crouch : UCombatAIActionNodeBase {
	uint32_t SavedCanCrouch : 1; // 0xf4
};

struct USVehicleSimBase : UActorComponent {
	float WheelSuspensionStiffness; // 0x88
	float WheelSuspensionDamping; // 0x8c
	float WheelSuspensionBias; // 0x90
	float WheelLongExtremumSlip; // 0x94
	float WheelLongExtremumValue; // 0x98
	float WheelLongAsymptoteSlip; // 0x9c
	float WheelLongAsymptoteValue; // 0xa0
	float WheelLatExtremumSlip; // 0xa4
	float WheelLatExtremumValue; // 0xa8
	float WheelLatAsymptoteSlip; // 0xac
	float WheelLatAsymptoteValue; // 0xb0
	float WheelInertia; // 0xb4
	uint32_t bWheelSpeedOverride : 1; // 0xb8
	uint32_t bClampedFrictionModel : 1; // 0xb8
	uint32_t bAutoDrive : 1; // 0xb8
	float AutoDriveSteer; // 0xbc
};

struct USeqAct_CombatTutorial_HideBombIconsOnHUD : USequenceAction {
	uint32_t HideBombs : 1; // 0x108
	uint32_t HideBombSites : 1; // 0x108
};

struct AGamePlayerController : APlayerController {
	uint32_t bWarnCrowdMembers : 1; // 0x740
	uint32_t bDebugCrowdAwareness : 1; // 0x740
	uint32_t bIsWarmupPaused : 1; // 0x740
	float AgentAwareRadius; // 0x744
	FName CurrentSoundMode; // 0x748
};

struct UCombatHUD_Aim : UCombatHUDEntity_Base {
	ObjectProperty HitMarkMC; // 0xc0
	ObjectProperty BasicCrosshair_TopMC; // 0xc8
	ObjectProperty BasicCrosshair_LeftMC; // 0xd0
	ObjectProperty BasicCrosshair_BottomMC; // 0xd8
	ObjectProperty BasicCrosshair_RightMC; // 0xe0
	ObjectProperty BasicCrosshair_Dot; // 0xe8
	ObjectProperty BasicCrosshair_Circle; // 0xf0
	ObjectProperty GLCrosshairMC; // 0xf8
	ObjectProperty RLCrosshairMC; // 0x100
	int32_t LastCrosshairType; // 0x108
	int32_t LastCrosshairRadius; // 0x10c
	int32_t LastCrosshairLengthRate; // 0x110
	uint32_t bIsDisplayed_Basic : 1; // 0x114
	uint32_t bIsDisplayed_Dot : 1; // 0x114
	uint32_t bIsDisplayed_Circle : 1; // 0x114
	uint32_t bIsDisplayed_GL : 1; // 0x114
	uint32_t bIsDisplayed_RL : 1; // 0x114
	uint32_t bIsReloadingDisplayed : 1; // 0x114
	uint32_t bIsLaserSightDisplayed : 1; // 0x114
	uint32_t JustInitiated : 1; // 0x114
	FBasicCrosshairSetting BasicCHSetting; // 0x118
};

struct ULightFunction : UObject {
	ObjectProperty SourceMaterial; // 0x60
	FVector Scale; // 0x68
	float DisabledBrightness; // 0x74
};

struct UCombatAnimBlend_SimpleJump : UCombatAnimBlendBase {
	ObjectProperty OwnerPawn; // 0x144
};

struct UParticleModuleCollisionActor : UParticleModuleCollision {
	TArray<FName> ActorsToCollideWith; // 0x140
	uint32_t bCheckPawnCollisions : 1; // 0x150
};

struct USeqAct_MissionEvent : USeqAct_GameInfo {
	FName EventName; // 0x118
	uint32_t bValidMatchInProgress : 1; // 0x120
	float fReservedProperty; // 0x124
	int32_t iReservedProperty; // 0x128
};

struct ULineBatchComponent : UPrimitiveComponent {
	FPointer FPrimitiveDrawInterfaceVfTable; // 0x250
	FPointer FPrimitiveDrawInterfaceView; // 0x258
	TArray<FPointer> BatchedLines; // 0x260
	TArray<FPointer> BatchedPoints; // 0x270
	float DefaultLifeTime; // 0x280
};

struct USeqAct_PlayCameraAnim : USequenceAction {
	ObjectProperty CameraAnim; // 0x108
	uint32_t bLoop : 1; // 0x110
	uint32_t bRandomStartTime : 1; // 0x110
	float BlendInTime; // 0x114
	float BlendOutTime; // 0x118
	float Rate; // 0x11c
	float IntensityScale; // 0x120
	ECameraAnimPlaySpace PlaySpace; // 0x124
	ObjectProperty UserDefinedSpaceActor; // 0x128
};

struct UWebResponse : UObject {
	TArray<FString> Headers; // 0x60
	FMap_Mirror ReplacementMap; // 0x70
	FString IncludePath; // 0xb8
	FString CharSet; // 0xc8
	ObjectProperty Connection; // 0xd8
	uint32_t bSentText : 1; // 0xe0
	uint32_t bSentResponse : 1; // 0xe0
};

struct UCombatDataTableRefPenaltyBind : UCombatDataTableType {
	FString Penalty; // 0x6c
	FString ModeGroup; // 0x7c
};

struct UMaterialExpressionConstantClamp : UMaterialExpression {
	FExpressionInput Input; // 0xb0
	float Min; // 0xe4
	float Max; // 0xe8
};

struct UMantleReachSpec : UForcedReachSpec {
	uint32_t bClimbUp : 1; // 0xc8
};

struct USeqAct_CombatTutorial_PointAI : USequenceAction {
	ObjectProperty AIPawn; // 0x108
};

struct UCombatRewardDataBase : UObject {
	ObjectProperty Owner; // 0x60
	TArray<FRelatedKillDataInfo> RelatedKillData; // 0x68
	TMap<None, None> RecordData; // 0x78
	TArray<int32_t> KillMarkHistory; // 0xc0
	TArray<FTableInfoType> PendingTableInfoList; // 0xd0
	TMap<None, None> Map_WeaponID_DBID; // 0xe0
	TMap<None, None> Map_WeaponID_InitialKillCount; // 0x128
	TMap<None, None> Map_WeaponID_CurrentGameKillCount; // 0x170
};

struct USeqVar_Bool : USequenceVariable {
	int32_t bValue; // 0xa0
};

struct UDistributionVectorConstant : UDistributionVector {
	FVector Constant; // 0x7c
	uint32_t bLockAxes : 1; // 0x88
	EDistributionVectorLockFlags LockedAxes; // 0x8c
};

struct UNavMeshPathGoalEvaluator : UObject {
	ObjectProperty NextEvaluator; // 0x60
	int32_t MaxPathVisits; // 0x68
	uint32_t bAlwaysCallEvaluateGoal : 1; // 0x6c
	uint32_t bDoPartialAStar : 1; // 0x6c
	int32_t NumNodesThrownOut; // 0x70
	int32_t NumNodesProcessed; // 0x74
	int32_t MaxOpenListSize; // 0x78
};

struct ALensFlareSource : AActor {
	ComponentProperty LensFlareComp; // 0x244
	uint32_t bCurrentlyActive : 1; // 0x24c
};

struct AActor : UObject {
	TArray<ComponentProperty> Components; // 0x60
	TArray<ComponentProperty> AllComponents; // 0x70
	FVector Location; // 0x80
	FRotator Rotation; // 0x8c
	float DrawScale; // 0x98
	FVector DrawScale3D; // 0x9c
	FVector PrePivot; // 0xa8
	FRenderCommandFence DetachFence; // 0xb4
	float CustomTimeDilation; // 0xb8
	EPhysics Physics; // 0xbc
	ENetRole RemoteRole; // 0xbd
	ENetRole Role; // 0xbe
	ECollisionType CollisionType; // 0xbf
	ECollisionType ReplicatedCollisionType; // 0xc0
	ETickingGroup TickGroup; // 0xc1
	ObjectProperty Owner; // 0xc4
	ObjectProperty Base; // 0xcc
	TArray<FTimerData> Timers; // 0xd4
	uint32_t bStatic : 1; // 0xe4
	uint32_t bHidden : 1; // 0xe4
	uint32_t bNoDelete : 1; // 0xe4
	uint32_t bDeleteMe : 1; // 0xe4
	uint32_t bTicked : 1; // 0xe4
	uint32_t bOnlyOwnerSee : 1; // 0xe4
	uint32_t bTickIsDisabled : 1; // 0xe4
	uint32_t bWorldGeometry : 1; // 0xe4
	uint32_t bIgnoreRigidBodyPawns : 1; // 0xe4
	uint32_t bOrientOnSlope : 1; // 0xe4
	uint32_t bIgnoreEncroachers : 1; // 0xe4
	uint32_t bPushedByEncroachers : 1; // 0xe4
	uint32_t bDestroyedByInterpActor : 1; // 0xe4
	uint32_t bRouteBeginPlayEvenIfStatic : 1; // 0xe4
	uint32_t bIsMoving : 1; // 0xe4
	uint32_t bAlwaysEncroachCheck : 1; // 0xe4
	uint32_t bHasAlternateTargetLocation : 1; // 0xe4
	uint32_t bCanStepUpOn : 1; // 0xe4
	uint32_t bNetTemporary : 1; // 0xe4
	uint32_t bOnlyRelevantToOwner : 1; // 0xe4
	uint32_t bNetDirty : 1; // 0xe4
	uint32_t bAlwaysRelevant : 1; // 0xe4
	uint32_t bReplicateInstigator : 1; // 0xe4
	uint32_t bReplicateMovement : 1; // 0xe4
	uint32_t bReplicateCollision : 1; // 0xe4
	uint32_t bReplicateHidden : 1; // 0xe4
	uint32_t bReplicateVelocity : 1; // 0xe4
	uint32_t bReplicateRotation : 1; // 0xe4
	uint32_t bSkipActorPropertyReplication : 1; // 0xe4
	uint32_t bUpdateSimulatedPosition : 1; // 0xe4
	uint32_t bTearOff : 1; // 0xe4
	uint32_t bOnlyDirtyReplication : 1; // 0xe4
	uint32_t bAllowFluidSurfaceInteraction : 1; // 0xe8
	uint32_t bDemoRecording : 1; // 0xe8
	uint32_t bDemoOwner : 1; // 0xe8
	uint32_t bForceDemoRelevant : 1; // 0xe8
	uint32_t bNetInitialRotation : 1; // 0xe8
	uint32_t bReplicateRigidBodyLocation : 1; // 0xe8
	uint32_t bKillDuringLevelTransition : 1; // 0xe8
	uint32_t bExchangedRoles : 1; // 0xe8
	uint32_t bConsiderAllStaticMeshComponentsForStreaming : 1; // 0xe8
	uint32_t bDebug : 1; // 0xe8
	uint32_t bPostRenderIfNotVisible : 1; // 0xe8
	uint32_t bUseHighNetUpdateFrequency : 1; // 0xe8
	uint32_t bForceNetUpdate : 1; // 0xe8
	uint32_t bPendingNetUpdate : 1; // 0xe8
	uint32_t bHardAttach : 1; // 0xe8
	uint32_t bIgnoreBaseRotation : 1; // 0xe8
	uint32_t bShadowParented : 1; // 0xe8
	uint32_t bSkipAttachedMoves : 1; // 0xe8
	uint32_t bCanBeAdheredTo : 1; // 0xe8
	uint32_t bCanBeFrictionedTo : 1; // 0xe8
	uint32_t bHurtEntry : 1; // 0xe8
	uint32_t bGameRelevant : 1; // 0xe8
	uint32_t bMovable : 1; // 0xe8
	uint32_t bDestroyInPainVolume : 1; // 0xe8
	uint32_t bCanBeDamaged : 1; // 0xe8
	uint32_t bShouldBaseAtStartup : 1; // 0xe8
	uint32_t bPendingDelete : 1; // 0xe8
	uint32_t bCanTeleport : 1; // 0xe8
	uint32_t bAlwaysTick : 1; // 0xe8
	uint32_t bBlocksNavigation : 1; // 0xe8
	uint32_t BlockRigidBody : 1; // 0xe8
	uint32_t bCollideWhenPlacing : 1; // 0xe8
	uint32_t bCollideActors : 1; // 0xec
	uint32_t bCollideWorld : 1; // 0xec
	uint32_t bCollideComplex : 1; // 0xec
	uint32_t bBlockActors : 1; // 0xec
	uint32_t bProjTarget : 1; // 0xec
	uint32_t bBlocksTeleport : 1; // 0xec
	uint32_t bMoveIgnoresDestruction : 1; // 0xec
	uint32_t bProjectileMoveSingleBlocking : 1; // 0xec
	uint32_t bNoEncroachCheck : 1; // 0xec
	uint32_t bCollideAsEncroacher : 1; // 0xec
	uint32_t bPhysRigidBodyOutOfWorldCheck : 1; // 0xec
	uint32_t bComponentOutsideWorld : 1; // 0xec
	uint32_t bForceOctreeSNFilter : 1; // 0xec
	uint32_t bForceOctreeMNFilter : 1; // 0xec
	uint32_t bRigidBodyWasAwake : 1; // 0xec
	uint32_t bCallRigidBodyWakeEvents : 1; // 0xec
	uint32_t bBounce : 1; // 0xec
	uint32_t bJustTeleported : 1; // 0xec
	uint32_t bEnableMobileTouch : 1; // 0xec
	uint32_t bNetInitial : 1; // 0xec
	uint32_t bNetOwner : 1; // 0xec
	uint32_t bHiddenEd : 1; // 0xec
	uint32_t bEditable : 1; // 0xec
	uint32_t bHiddenEdGroup : 1; // 0xec
	uint32_t bHiddenEdLayer : 1; // 0xec
	uint32_t bHiddenEdCustom : 1; // 0xec
	uint32_t bHiddenEdTemporary : 1; // 0xec
	uint32_t bHiddenEdLevel : 1; // 0xec
	uint32_t bHiddenEdScene : 1; // 0xec
	uint32_t bEdShouldSnap : 1; // 0xec
	uint32_t bTempEditor : 1; // 0xec
	uint32_t bPathColliding : 1; // 0xec
	uint32_t bPathTemp : 1; // 0xf0
	uint32_t bScriptInitialized : 1; // 0xf0
	uint32_t bLockLocation : 1; // 0xf0
	uint32_t bForceAllowKismetModification : 1; // 0xf0
	uint32_t bDebugEffectIsRelevant : 1; // 0xf0
	int32_t SkelMeshCompTickTag; // 0xf4
	int32_t NetTag; // 0xf8
	float NetUpdateTime; // 0xfc
	float NetUpdateFrequency; // 0x100
	float InvNetUpdateFrequency; // 0x104
	float HighNetUpdateFrequency; // 0x108
	float NetPriority; // 0x10c
	float LastNetUpdateTime; // 0x110
	float TimeSinceLastTick; // 0x114
	ObjectProperty Instigator; // 0x118
	ObjectProperty WorldInfo; // 0x120
	float LifeSpan; // 0x128
	float CreationTime; // 0x12c
	float LastRenderTime; // 0x130
	FName Tag; // 0x134
	FName InitialState; // 0x13c
	FName Layer; // 0x144
	FName Group; // 0x14c
	FQWord HiddenEditorViews; // 0x154
	TArray<ObjectProperty> Touching; // 0x15c
	TArray<ObjectProperty> Children; // 0x16c
	float LatentFloat; // 0x17c
	ObjectProperty LatentSeqNode; // 0x180
	ObjectProperty PhysicsVolume; // 0x188
	FVector Velocity; // 0x190
	FVector Acceleration; // 0x19c
	FVector AngularVelocity; // 0x1a8
	ComponentProperty BaseSkelComponent; // 0x1b4
	FName BaseBoneName; // 0x1bc
	TArray<ObjectProperty> Attached; // 0x1c4
	FVector RelativeLocation; // 0x1d4
	FRotator RelativeRotation; // 0x1e0
	ComponentProperty CollisionComponent; // 0x1ec
	int32_t OverlapTag; // 0x1f4
	FRotator RotationRate; // 0x1f8
	ObjectProperty PendingTouch; // 0x204
	ULocalMessage* MessageClass; // 0x20c
	TArray<USequenceEvent*> SupportedEvents; // 0x214
	TArray<ObjectProperty> GeneratedEvents; // 0x224
	TArray<ObjectProperty> LatentActions; // 0x234
};

struct UMaterialExpressionFluidNormal : UMaterialExpression {
	FExpressionInput Coordinates; // 0xb0
};

struct USkelControlSingleBone : USkelControlBase {
	uint32_t bApplyTranslation : 1; // 0xd0
	uint32_t bApplyRotation : 1; // 0xd0
	uint32_t bAddTranslation : 1; // 0xd0
	uint32_t bAddRotation : 1; // 0xd0
	uint32_t bRemoveMeshRotation : 1; // 0xd0
	FVector BoneTranslation; // 0xd4
	EBoneControlSpace BoneTranslationSpace; // 0xe0
	EBoneControlSpace BoneRotationSpace; // 0xe1
	FName TranslationSpaceBoneName; // 0xe4
	FRotator BoneRotation; // 0xec
	FName RotationSpaceBoneName; // 0xf8
};

struct URB_ConstraintInstance : UObject {
	ObjectProperty Owner; // 0x60
	ComponentProperty OwnerComponent; // 0x68
	int32_t ConstraintIndex; // 0x70
	int32_t SceneIndex; // 0x74
	uint32_t bInHardware : 1; // 0x78
	uint32_t bLinearXPositionDrive : 1; // 0x78
	uint32_t bLinearXVelocityDrive : 1; // 0x78
	uint32_t bLinearYPositionDrive : 1; // 0x78
	uint32_t bLinearYVelocityDrive : 1; // 0x78
	uint32_t bLinearZPositionDrive : 1; // 0x78
	uint32_t bLinearZVelocityDrive : 1; // 0x78
	uint32_t bSwingPositionDrive : 1; // 0x78
	uint32_t bSwingVelocityDrive : 1; // 0x78
	uint32_t bTwistPositionDrive : 1; // 0x78
	uint32_t bTwistVelocityDrive : 1; // 0x78
	uint32_t bAngularSlerpDrive : 1; // 0x78
	uint32_t bTerminated : 1; // 0x78
	FPointer ConstraintData; // 0x7c
	FVector LinearPositionTarget; // 0x84
	FVector LinearVelocityTarget; // 0x90
	float LinearDriveSpring; // 0x9c
	float LinearDriveDamping; // 0xa0
	float LinearDriveForceLimit; // 0xa4
	FQuat AngularPositionTarget; // 0xb0
	FVector AngularVelocityTarget; // 0xc0
	float AngularDriveSpring; // 0xcc
	float AngularDriveDamping; // 0xd0
	float AngularDriveForceLimit; // 0xd4
	FPointer DummyKinActor; // 0xd8
};

struct UAnimNodeFrame : UAnimObject {
	int32_t SizeX; // 0x68
	int32_t SizeY; // 0x6c
	int32_t BorderWidth; // 0x70
	uint32_t bDrawBox : 1; // 0x74
	uint32_t bFilled : 1; // 0x74
	uint32_t bTileFill : 1; // 0x74
	FColor BorderColor; // 0x78
	FColor FillColor; // 0x7c
};

struct UMultiFont : UFont {
	TArray<float> ResolutionTestTable; // 0x1a0
};

struct UParticleModuleLocationEmitter : UParticleModuleLocationBase {
	FName EmitterName; // 0x68
	ELocationEmitterSelectionMethod SelectionMethod; // 0x70
	uint32_t InheritSourceVelocity : 1; // 0x74
	uint32_t bInheritSourceRotation : 1; // 0x74
	float InheritSourceVelocityScale; // 0x78
	float InheritSourceRotationScale; // 0x7c
};

struct ACombatDroppedWeapon : ACombatDroppedBase {
	uint32_t bUseMeshInterpolation : 1; // 0x320
	uint32_t bClearRemainAmmo : 1; // 0x320
	uint32_t bShowPickupWeaponUI : 1; // 0x320
	ObjectProperty Weapon; // 0x324
	ObjectProperty KillerPRI; // 0x32c
	WordProperty RemainAmmoCount; // 0x334
	char RemainSubAmmoCount; // 0x336
	char RemainSubMagazineAmmo; // 0x337
	WordProperty RemainMagazineAmmo; // 0x338
};

struct ADebugCameraController : AGamePlayerController {
	FName PrimaryKey; // 0x750
	FName SecondaryKey; // 0x758
	FName UnselectKey; // 0x760
	uint32_t bShowSelectedInfo : 1; // 0x768
	uint32_t bDrawDebugText : 1; // 0x768
	uint32_t bIsFrozenRendering : 1; // 0x768
	AHUD* HUDClass; // 0x76c
	ObjectProperty OriginalControllerRef; // 0x774
	ObjectProperty OriginalPlayer; // 0x77c
	ComponentProperty DrawFrustum; // 0x784
	ObjectProperty SelectedActor; // 0x78c
	ComponentProperty SelectedComponent; // 0x794
};

struct UCombatHUD_TutorialLeveObject : UCombatHUD_GameObject {
	ObjectProperty TargetObject; // 0x1b0
	TArray<FString> IconFrameLabels; // 0x1b8
};

struct UCombatLocaizedChatCommandData : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString StringVal_INT; // 0x70
	FString StringVal_LOCAL; // 0x80
};

struct URB_Spring : UActorComponent {
	ComponentProperty Component1; // 0x88
	FName BoneName1; // 0x90
	ComponentProperty Component2; // 0x98
	FName BoneName2; // 0xa0
	int32_t SceneIndex; // 0xa8
	uint32_t bInHardware : 1; // 0xac
	uint32_t bEnableForceMassRatio : 1; // 0xac
	FPointer SpringData; // 0xb0
	float TimeSinceActivation; // 0xb8
	float MinBodyMass; // 0xbc
	float SpringSaturateDist; // 0xc0
	float SpringMaxForce; // 0xc4
	float MaxForceMassRatio; // 0xc8
	FInterpCurveFloat SpringMaxForceTimeScale; // 0xcc
	float DampSaturateVel; // 0xe0
	float DampMaxForce; // 0xe4
};

struct UActorFactoryActor : UActorFactory {
	AActor* ActorClass; // 0x9c
};

struct AEmitterCameraLensEffectBase : AEmitter {
	ObjectProperty PS_CameraEffect; // 0x258
	ObjectProperty PS_CameraEffectNonExtremeContent; // 0x260
	float BaseFOV; // 0x268
	float DistFromCamera; // 0x26c
	uint32_t bAllowMultipleInstances : 1; // 0x270
	TArray<AEmitterCameraLensEffectBase*> EmittersToTreatAsSame; // 0x274
	ObjectProperty BaseCamera; // 0x284
	ESceneDepthPriorityGroup DepthGroup; // 0x28c
};

struct USeqAct_SetDOFParams : USeqAct_Latent {
	float FalloffExponent; // 0x120
	float BlurKernelSize; // 0x124
	float MaxNearBlurAmount; // 0x128
	float MinBlurAmount; // 0x12c
	float MaxFarBlurAmount; // 0x130
	float FocusInnerRadius; // 0x134
	float FocusDistance; // 0x138
	FVector FocusPosition; // 0x13c
	float InterpolateSeconds; // 0x148
	float InterpolateElapsed; // 0x14c
	float OldFalloffExponent; // 0x150
	float OldBlurKernelSize; // 0x154
	float OldMaxNearBlurAmount; // 0x158
	float OldMinBlurAmount; // 0x15c
	float OldMaxFarBlurAmount; // 0x160
	float OldFocusInnerRadius; // 0x164
	float OldFocusDistance; // 0x168
	FVector OldFocusPosition; // 0x16c
};

struct UPath_TowardGoal : UPathConstraint {
	ObjectProperty GoalActor; // 0x6c
};

struct USceneCaptureCubeMapComponent : USceneCaptureComponent {
	ObjectProperty TextureTarget; // 0xd0
	float NearPlane; // 0xd8
	float FarPlane; // 0xdc
	FVector WorldLocation; // 0xe0
};

struct UDrawSphereComponent : UPrimitiveComponent {
	FColor SphereColor; // 0x250
	ObjectProperty SphereMaterial; // 0x254
	float SphereRadius; // 0x25c
	int32_t SphereSides; // 0x260
	uint32_t bDrawWireSphere : 1; // 0x264
	uint32_t bDrawLitSphere : 1; // 0x264
	uint32_t bDrawOnlyIfSelected : 1; // 0x264
};

struct UActorFactoryDynamicSM : UActorFactory {
	ObjectProperty StaticMesh; // 0x9c
	FVector DrawScale3D; // 0xa4
	uint32_t bNoEncroachCheck : 1; // 0xb0
	uint32_t bNotifyRigidBodyCollision : 1; // 0xb0
	uint32_t bBlockRigidBody : 1; // 0xb0
	uint32_t bUseCompartment : 1; // 0xb0
	uint32_t bCastDynamicShadow : 1; // 0xb0
	ECollisionType CollisionType; // 0xb4
};

struct ACombatWeapon_ETC : ACombatWeapon {
	FCameraAnimData AttachedCameraAnim; // 0x1ec8
};

struct ULensFlare : UObject {
	FLensFlareElement SourceElement; // 0x60
	ObjectProperty SourceMesh; // 0x1f8
	ESceneDepthPriorityGroup SourceDPG; // 0x200
	ESceneDepthPriorityGroup ReflectionsDPG; // 0x201
	TArray<FLensFlareElement> Reflections; // 0x204
	float OuterCone; // 0x214
	float InnerCone; // 0x218
	float ConeFudgeFactor; // 0x21c
	float Radius; // 0x220
	uint32_t bUseTrueConeCalculation : 1; // 0x224
	uint32_t bUseFixedRelativeBoundingBox : 1; // 0x224
	uint32_t bRenderDebugLines : 1; // 0x224
	uint32_t ThumbnailImageOutOfDate : 1; // 0x224
	float MinStrength; // 0x228
	FRawDistributionFloat ScreenPercentageMap; // 0x22c
	FBox FixedRelativeBoundingBox; // 0x250
	ObjectProperty CurveEdSetup; // 0x26c
	int32_t ReflectionCount; // 0x274
	FRotator ThumbnailAngle; // 0x278
	float ThumbnailDistance; // 0x284
	ObjectProperty ThumbnailImage; // 0x288
};

struct ACBGameReplicationInfo : AGameReplicationInfo {
	FName InitGameStatus; // 0x2a8
	int32_t CountDownTime; // 0x2b0
	int32_t LastCountDownTime; // 0x2b4
	int32_t GoalRound; // 0x2b8
	int32_t GoalMission; // 0x2bc
	int32_t CurrentRound; // 0x2c0
	int32_t ModeID; // 0x2c4
	char RankSystemID; // 0x2c8
	char SpawnGroupIndex; // 0x2c9
	char BindRegion; // 0x2ca
	ObjectProperty PCOwner; // 0x2cc
	uint32_t bIsSuddenDeath : 1; // 0x2d4
	uint32_t UseRigidBodyForInformation : 1; // 0x2d4
	uint32_t bIsChampionship : 1; // 0x2d4
	uint32_t bUseParachuteRespawn : 1; // 0x2d4
	uint32_t bSkipSkillLicense : 1; // 0x2d4
	uint32_t bSupportPickUpItem : 1; // 0x2d4
	TArray<ObjectProperty> DecoyActors; // 0x2d8
	ObjectProperty ResourcePool; // 0x2e8
	ACombatGame* CombatGameClass; // 0x2f0
	FMissionActorInfo TeamMissionActor[0x2]; // 0x2f8
	FMissionActorInfo NeutralMissionActor; // 0x318
	TArray<ObjectProperty> PlayerPRIArray; // 0x328
	ObjectProperty ChampionshipManager; // 0x338
	ObjectProperty CombatSMManager; // 0x340
	FName CurrentGameClassShortName; // 0x348
	ObjectProperty GamePlayKillEvent; // 0x350
	ObjectProperty GamePlayActionEvent; // 0x358
	TArray<ObjectProperty> PickupItemActors; // 0x360
	int32_t TotalPickupItemsCount; // 0x370
	int32_t SeqAct_CombatDelayTime; // 0x374
	int32_t CompetitiveWarmingUpReamainTime; // 0x378
	int32_t RandomRecoilSeed; // 0x37c
};

struct UCombatFrontEnd_BuyItem : UCombatFrontEnd_Object {
	ObjectProperty RefItem; // 0xd0
	ObjectProperty refShopItem; // 0xd8
	ObjectProperty RefItemDetailinfo; // 0xe0
	int32_t PriceType; // 0xe8
	int32_t priceID; // 0xec
	int32_t BuyItemSlotIndex; // 0xf0
	char SelectPresetTab; // 0xf4
	char RecvType; // 0xf5
	int32_t PresetLabelIDList[0x3]; // 0xf8
	FAddoninfo AddOnInfoList[0xa]; // 0x104
	Fabilityinfo AbilityInfoList[0x7]; // 0x17c
};

struct ACCSController : AAIController {
	ObjectProperty BehaviorTreeTemplate; // 0x454
	ObjectProperty ScriptNodeCache; // 0x45c
	ObjectProperty BTInterface; // 0x464
	FPointer Brain; // 0x46c
	FPointer MeatPuppet; // 0x474
	FCCSSystemConfigData SystemConfig; // 0x47c
	TArray<ETargetSelectionConfig> TargetSelection; // 0x4a8
	TScriptInterface<Class> CCSPawn; // 0x4b8
	ObjectProperty SecondaryNavigationHandle; // 0x4c8
	int32_t FireBurstCount; // 0x4d0
	ObjectProperty AimingFocus; // 0x4d4
	FRotator AimingRot; // 0x4dc
	char CCSTeam; // 0x4e8
	ETargetSelectionConfig TargetType; // 0x4e9
	char PathFindErrCount; // 0x4ea
	ComponentProperty DebugVizComponent; // 0x4ec
	TArray<ObjectProperty> NoiseMakers; // 0x4f4
	FSMoveTowardState paramMoveTowardState; // 0x504
	uint32_t bPauseBTWhenScriptedMove : 1; // 0x51c
	FVector PathFindDestPosition; // 0x520
	ObjectProperty PathFindPrevPathActor; // 0x52c
};

struct UNavigationHandle : UObject {
	ObjectProperty AnchorPylon; // 0x60
	FPointer AnchorPoly; // 0x68
	FPathStore PathCache; // 0x70
	FPointer BestUnfinishedPathPoint; // 0x80
	FPointer CurrentEdge; // 0x88
	FPointer SubGoal_DestPoly; // 0x90
	FBasedPosition FinalDestination; // 0x98
	uint32_t bSkipRouteCacheUpdates : 1; // 0xd0
	uint32_t bUseORforEvaluateGoal : 1; // 0xd0
	uint32_t bDebugConstraintsAndGoalEvals : 1; // 0xd0
	uint32_t bUltraVerbosePathDebugging : 1; // 0xd0
	uint32_t bVisualPathDebugging : 1; // 0xd0
	uint32_t bDebug_Breadcrumbs : 1; // 0xd0
	ObjectProperty PathConstraintList; // 0xd4
	ObjectProperty PathGoalList; // 0xdc
	FNavMeshPathParams CachedPathParams; // 0xe4
	EPathFindingError LastPathError; // 0x118
	float LastPathFailTime; // 0x11c
	FVector Breadcrumbs[0xa]; // 0x120
	int32_t BreadCrumbMostRecentIdx; // 0x198
	float BreadCrumbDistanceInterval; // 0x19c
};

struct USeqAct_GiveInventory : USequenceAction {
	TArray<AInventory*> InventoryList; // 0x108
	uint32_t bClearExisting : 1; // 0x118
	uint32_t bForceReplace : 1; // 0x118
};

struct ACombatBusterHUD : ACombatTeamGameHUD {
	float BusterActorDamageStateDelay; // 0x62c
	int32_t BusterDamageScoreLocalizedID; // 0x630
};

struct UMaterialExpressionSceneDepth : UMaterialExpression {
	FExpressionInput Coordinates; // 0xb0
	uint32_t bNormalize : 1; // 0xe4
};

struct UNavMeshPath_WithinTraversalDist : UNavMeshPathConstraint {
	float MaxTraversalDist; // 0x78
	uint32_t bSoft : 1; // 0x7c
	float SoftStartPenalty; // 0x80
};

struct USoundNodeOscillator : USoundNode {
	uint32_t bModulateVolume : 1; // 0x74
	uint32_t bModulatePitch : 1; // 0x74
	float AmplitudeMin; // 0x78
	float AmplitudeMax; // 0x7c
	float FrequencyMin; // 0x80
	float FrequencyMax; // 0x84
	float OffsetMin; // 0x88
	float OffsetMax; // 0x8c
	float CenterMin; // 0x90
	float CenterMax; // 0x94
	FRawDistributionFloat Amplitude; // 0x98
	FRawDistributionFloat Frequency; // 0xbc
	FRawDistributionFloat Offset; // 0xe0
	FRawDistributionFloat Center; // 0x104
};

struct UCombatMatchroomClanMatching : UCombatMatchroomAutoMatchingBase {
	int32_t TeamRankingPoint; // 0x7c
};

struct UMaterialExpressionQualitySwitch : UMaterialExpression {
	FExpressionInput High; // 0xb0
	FExpressionInput Low; // 0xe4
};

struct UCombatDataTableRefPickup : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString CodeName; // 0x70
	int32_t MainAmmoRate; // 0x80
	int32_t SubAmmoRate; // 0x84
	int32_t GrenadeRate_A; // 0x88
	int32_t GrenadeRate_B; // 0x8c
	int32_t GrenadeRate_C; // 0x90
	int32_t CureHealthRate; // 0x94
	FString ScriptFileName; // 0x98
	int32_t StringID; // 0xa8
};

struct UCombatItemFXBase : UObject {
	FSItemFX ItemFX[0x2]; // 0x60
};

struct UMcpIdMappingBase : UMcpServiceBase {
	FString McpIdMappingClassName; // 0x78
	DelegateProperty __OnAddMappingComplete__Delegate; // 0x88
	DelegateProperty __OnQueryMappingsComplete__Delegate; // 0x98
};

struct UInterpTrackFloatProp : UInterpTrackFloatBase {
	FName PropertyName; // 0xb8
};

struct UCombatAnimNotify_MaterialParam : UAnimNotify {
	FAnimNotifyScalarParameter ScalarConstantParam; // 0x60
	FAnimNotifyVectorParameter VectorConstantParam; // 0x70
	FTextureParameterValue TextureConstantParam; // 0x98
	TArray<FMICParam> SavedMICParam; // 0xb8
	float AnimStartTime; // 0xc8
	float NotifyDuration; // 0xcc
};

struct ACombatPickupFactory : APickupFactory {
	ComponentProperty BaseMesh; // 0x368
	ComponentProperty LightEnvironment; // 0x370
	uint32_t bCheckTeam : 1; // 0x378
	uint32_t bUpdatingPickup : 1; // 0x378
	uint32_t bFloatingPickup : 1; // 0x378
	uint32_t bRotatingPickup : 1; // 0x378
	uint32_t bForceDelayedSpawn : 1; // 0x378
	uint32_t bDelayedSpawn : 1; // 0x378
	uint32_t bForceRespawn : 1; // 0x378
	Team TeamIndex; // 0x37c
	ObjectProperty RespawnSound; // 0x380
	ObjectProperty PickupSound; // 0x388
	ObjectProperty EnemyPickupSound; // 0x390
	float BobTimer; // 0x398
	float BobOffset; // 0x39c
	float BobSpeed; // 0x3a0
	float BobBaseOffset; // 0x3a4
	float YawRotationRate; // 0x3a8
	ComponentProperty SpinningParticleEffects; // 0x3ac
	ObjectProperty SpinningParticleTemplate; // 0x3b4
	float RespawnTime; // 0x3bc
};

struct UInterpTrackVectorBase : UInterpTrack {
	FInterpCurveVector VectorTrack; // 0xa0
	float CurveTension; // 0xb4
};

struct UCombatBusterMovie : UCombatTeamGameMovie {
	ObjectProperty BusterContainer; // 0xad0
	ObjectProperty BusterMovie; // 0xad8
	uint32_t bUpdate : 1; // 0xae0
};

struct UCombatDataTableRefMap : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString CodeName; // 0x70
	FString Filename; // 0x80
	int32_t DisplayName; // 0x90
	MATCHROOM_MAP_OPTION_SIZE MapSize; // 0x94
	int32_t DescAi; // 0x98
	int32_t ImageID_DisplayThumbnail; // 0x9c
	int32_t ImageID_Title; // 0xa0
	int32_t ImageID_Loading; // 0xa4
	int32_t ImageID_Minimap; // 0xa8
	int32_t ImageID_BGThumbnail; // 0xac
};

struct UCombatDataTableRefEvolveEquip : UCombatDataTableType {
	FString GroupCodeName; // 0x6c
	FString PrimaryWeapon; // 0x7c
	FString SubWeapon; // 0x8c
	FString MeleeWeapon; // 0x9c
	FString ETCWeapon; // 0xac
	FString ChipA; // 0xbc
};

struct ACombatPC : ACombatPlayerControllerBase {
	FName CameraActorTag; // 0x908
	FName CameraStyle; // 0x910
	float SprayUseDelay; // 0x918
	float SprayDistance; // 0x91c
	int32_t SprayCount; // 0x920
	float SprayLifeSpan; // 0x924
	ObjectProperty SpraySound_Fail; // 0x928
	TArray<ObjectProperty> SprayDecalActors; // 0x930
	int32_t SprayLastUseIndex; // 0x940
	float SprayLastUseTime; // 0x944
	uint32_t bSprayPreview : 1; // 0x948
	uint32_t bNoCrosshair : 1; // 0x948
	uint32_t bInitializedPresetList : 1; // 0x948
	uint32_t bKeepSpectatingCamMode : 1; // 0x948
	uint32_t bReadyForFlashbang : 1; // 0x948
	uint32_t bCaptureFlashbang : 1; // 0x948
	uint32_t bLastSendCrouched : 1; // 0x948
	uint32_t bLastSendMoving : 1; // 0x948
	uint32_t bCanDisplayHitInfomation : 1; // 0x948
	uint32_t bCanDisplayGainAward : 1; // 0x948
	uint32_t bCanDisplayScoring : 1; // 0x948
	uint32_t bCanDisplayPreset : 1; // 0x948
	uint32_t bQuickPresetChange : 1; // 0x948
	uint32_t BeDamaged : 1; // 0x948
	uint32_t UISoundPlaying : 1; // 0x948
	uint32_t bForceRestart : 1; // 0x948
	uint32_t bHideTeamIFF : 1; // 0x948
	uint32_t bVivoxSet : 1; // 0x948
	ObjectProperty SprayPreviewDecalActor; // 0x94c
	float SprayPreviewDelay; // 0x954
	float SprayLastPreviewTime; // 0x958
	int32_t CachedSprayID; // 0x95c
	float NetworkDisconnectCheckTime; // 0x960
	float NetworkDisconnectAllowTime; // 0x964
	float HighPingShootAllowTime; // 0x968
	float HighPingShootMaxTime; // 0x96c
	int32_t HighPingValue; // 0x970
	float HighPingDetectTime; // 0x974
	int32_t LocalPresetList_First[0x9]; // 0x978
	int32_t LocalPresetList_Sec[0x9]; // 0x99c
	int32_t LocalPresetList_Third[0x9]; // 0x9c0
	char CurrentPreset; // 0x9e4
	char ReservedPreset; // 0x9e5
	EPhysics LastSendPhysics; // 0x9e6
	EMouseSensMode CurrentMouseSensMode; // 0x9e7
	char LockedPresetSceneCount; // 0x9e8
	char LockedPresetSceneCountMax; // 0x9e9
	PLAYERSTART_TYPE PlayerStartType; // 0x9ea
	char LogoutReason; // 0x9eb
	float LastPresetPressTime; // 0x9ec
	float PresetInputDelay; // 0x9f0
	ObjectProperty EntryPostProcessChain; // 0x9f4
	TArray<ObjectProperty> OldPostProcessChain; // 0x9fc
	ObjectProperty CBLocalPlayer; // 0xa0c
	float CheckSpectatorDelay; // 0xa14
	FName DefaultSpectatingCamMode; // 0xa18
	FName SavedSpectatingCamMode; // 0xa20
	ObjectProperty StatStorage; // 0xa28
	ObjectProperty CombatLogData; // 0xa30
	float NetMoveDeltaWhenNotMoved; // 0xa38
	FRotator LastSentRotation; // 0xa3c
	float InputExpireTime; // 0xa48
	ObjectProperty CombatPawn; // 0xa4c
	int32_t DropClaymoreCount; // 0xa54
	ObjectProperty DroppedWeapon; // 0xa58
	ObjectProperty DroppedSupplies[0x2]; // 0xa60
	TArray<ObjectProperty> DropClaymoreList; // 0xa70
	ObjectProperty PresetManager; // 0xa80
	ObjectProperty presetUI; // 0xa88
	ObjectProperty myCombatTeamGameHUD; // 0xa90
	ObjectProperty KillerIFFObject; // 0xa98
	int32_t AdjustPositionCounter; // 0xaa0
	int32_t AdjustPositionUpdateCounter; // 0xaa4
	float SpectatingMouseSens; // 0xaa8
	ObjectProperty CurrentMinimapActor; // 0xaac
	float LastClientOnlineTime; // 0xab4
	float LastInvalidNetworkTime; // 0xab8
	TArray<FDisplayPawnInfo> AliveDisplayPawnList; // 0xabc
	TArray<FDisplayPawnInfo> DeadDisplayPawnList; // 0xacc
	int32_t CriticalDamageamount; // 0xadc
	TArray<ObjectProperty> UAVActorList; // 0xae0
	TArray<ObjectProperty> SentrygunList; // 0xaf0
	TArray<ObjectProperty> TrophyturretList; // 0xb00
	ObjectProperty OutlineManager; // 0xb10
	TArray<FGlobalOutlineEvent> GlobalOutlineEventList; // 0xb18
	float CheckViewTargetLookAtDuration; // 0xb28
	ObjectProperty LockedPresetScene; // 0xb2c
	FName LockedPresetSceneState; // 0xb34
	ObjectProperty DeployedSkillActors[0x2]; // 0xb3c
	TArray<char> Redeploying; // 0xb4c
	ObjectProperty spawnPointUI; // 0xb5c
	ObjectProperty InGameBattleLog; // 0xb64
	int32_t AdvancedColorIndex; // 0xb6c
	float CheckMouseSensStartTime; // 0xb70
	float CheckMouseSensLoopDelay; // 0xb74
	float CheckMouseSensEndTime; // 0xb78
	FString LoginTokenPartA; // 0xb7c
	FString LoginTokenPartB; // 0xb8c
	FString JoinTokenPartA; // 0xb9c
	FString JoinTokenPartB; // 0xbac
	TArray<FPresetSlotState> PresetSlotStateArray; // 0xbbc
	FCombatPC_RestoreGameKillData RestoreKillData; // 0xbcc
};

struct ACombatWeapon_Shotgun_Base : ACombatWeapon {
	int32_t TransientShotgunDamage; // 0x1ec8
};

struct UPBRuleNodeAlternate : UPBRuleNodeBase {
	EProcBuildingAxis RepeatAxis; // 0x70
	float ASize; // 0x74
	float BMaxSize; // 0x78
	uint32_t bInvertPatternOrder : 1; // 0x7c
	uint32_t bEqualSizeAB : 1; // 0x7c
};

struct AComBatPC_AIGame : ACombatPC {
	ObjectProperty AIAggroMeSound; // 0xbe4
	ObjectProperty AIAggroMeReleaseSound; // 0xbec
};

struct UCombatGameThirdPersonCamera : UGameThirdPersonCamera {
	ObjectProperty ThirdPersonCamDead; // 0x1d4
	UGameThirdPersonCameraMode* ThirdPersonCamDeadClass; // 0x1dc
	ObjectProperty ThirdPersonCamSpectator; // 0x1e4
	UGameThirdPersonCameraMode* ThirdPersonCamSpectatorClass; // 0x1ec
	ObjectProperty LocalPC; // 0x1f4
};

struct USeqAct_MITV_Activate : USequenceAction {
	float DurationOfMITV; // 0x108
};

struct UDamageType : UObject {
	uint32_t bArmorStops : 1; // 0x60
	uint32_t bCausedByWorld : 1; // 0x60
	uint32_t bExtraMomentumZ : 1; // 0x60
	uint32_t bCausesFracture : 1; // 0x60
	uint32_t bRadialDamageVelChange : 1; // 0x60
	float KDamageImpulse; // 0x64
	float KDeathVel; // 0x68
	float KDeathUpKick; // 0x6c
	float RadialDamageImpulse; // 0x70
	float VehicleDamageScaling; // 0x74
	float VehicleMomentumScaling; // 0x78
	ObjectProperty DamagedFFWaveform; // 0x7c
	ObjectProperty KilledFFWaveform; // 0x84
	float FracturedMeshDamage; // 0x8c
};

struct UDecalComponent : UPrimitiveComponent {
	ObjectProperty DecalMaterial; // 0x250
	float Width; // 0x258
	float Height; // 0x25c
	float TileX; // 0x260
	float TileY; // 0x264
	float OffsetX; // 0x268
	float OffsetY; // 0x26c
	float DecalRotation; // 0x270
	float FieldOfView; // 0x274
	float NearPlane; // 0x278
	float FarPlane; // 0x27c
	FVector Location; // 0x280
	FRotator Orientation; // 0x28c
	FVector HitLocation; // 0x298
	FVector HitNormal; // 0x2a4
	FVector HitTangent; // 0x2b0
	FVector HitBinormal; // 0x2bc
	uint32_t bNoClip : 1; // 0x2c8
	uint32_t bStaticDecal : 1; // 0x2c8
	uint32_t bProjectOnBackfaces : 1; // 0x2c8
	uint32_t bProjectOnHidden : 1; // 0x2c8
	uint32_t bProjectOnBSP : 1; // 0x2c8
	uint32_t bProjectOnStaticMeshes : 1; // 0x2c8
	uint32_t bProjectOnSkeletalMeshes : 1; // 0x2c8
	uint32_t bProjectOnTerrain : 1; // 0x2c8
	uint32_t bFlipBackfaceDirection : 1; // 0x2c8
	uint32_t bMovableDecal : 1; // 0x2c8
	uint32_t bHasBeenAttached : 1; // 0x2c8
	uint32_t bDecalMaterialSetAtRunTime : 1; // 0x2c8
	uint32_t bUseForShadow : 1; // 0x2c8
	uint32_t bForceAllowedlInGame : 1; // 0x2c8
	ComponentProperty HitComponent; // 0x2cc
	FName HitBone; // 0x2d4
	int32_t HitNodeIndex; // 0x2dc
	int32_t HitLevelIndex; // 0x2e0
	int32_t FracturedStaticMeshComponentIndex; // 0x2e4
	TArray<int32_t> HitNodeIndices; // 0x2e8
	TArray<FDecalReceiver> DecalReceivers; // 0x2f8
	TArray<FPointer> StaticReceivers; // 0x308
	FPointer ReleaseResourcesFence; // 0x318
	TArray<FPlane> Planes; // 0x320
	float DepthBias; // 0x330
	float SlopeScaleDepthBias; // 0x334
	int32_t SortOrder; // 0x338
	float BackfaceAngle; // 0x33c
	FVector2D BlendRange; // 0x340
	float StreamingDistanceMultiplier; // 0x348
	EDecalTransform DecalTransform; // 0x34c
	EFilterMode FilterMode; // 0x34d
	TArray<ObjectProperty> Filter; // 0x350
	TArray<ComponentProperty> ReceiverImages; // 0x360
	FVector ParentRelativeLocation; // 0x370
	FRotator ParentRelativeOrientation; // 0x37c
	FMatrix ParentRelLocRotMatrix; // 0x390
};

struct UCCSAFMoveTo : UGripAFActionHandle {
	FVector Target; // 0x64
	ECCSMovementType MovementType; // 0x70
	ECCSAlertnessState Alertness; // 0x71
};

struct UPrefab : UObject {
	int32_t PrefabVersion; // 0x60
	TArray<ObjectProperty> PrefabArchetypes; // 0x64
	TArray<ObjectProperty> RemovedArchetypes; // 0x74
	ObjectProperty PrefabSequence; // 0x84
};

struct UCombatFrontEndBannerManager : UObject {
	float ImageDurationTime; // 0x60
	float ImageLastTime; // 0x64
	int32_t NumberOfImages; // 0x68
	uint32_t bIsReady : 1; // 0x6c
	int32_t BannerTextureWidth; // 0x70
	int32_t BannerTextureHeight; // 0x74
	TArray<FOnlineBannerInfo> OnlineBannerInfos; // 0x78
	FDisplayBannerInfo DisplayBannerInfos[0x2]; // 0x88
};

struct ANavMeshObstacle : AActor {
	FPointer VfTable_IInterface_NavMeshPathObstacle; // 0x244
	uint32_t bEnabled : 1; // 0x24c
	uint32_t bPreserveInternalGeo : 1; // 0x24c
};

struct AFrameworkGame : AGameInfo {
	TArray<FRequiredMobileInputConfig> RequiredMobileInputConfigs; // 0x4c0
};

struct UHttpRequestWindowsMcp : UHttpRequestWindows {
	FString AppID; // 0xa0
	FString AppSecret; // 0xb0
};

struct UParticleModuleMeshRotation_Seeded : UParticleModuleMeshRotation {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x90
};

struct UCombatAnimBlendBySlotActive : UAnimNodeBlendPerBone {
	ObjectProperty ChildSlot; // 0x144
};

struct USeqAct_LevelStreaming : USeqAct_LevelStreamingBase {
	ObjectProperty Level; // 0x124
	FName LevelName; // 0x12c
	uint32_t bStatusIsOk : 1; // 0x134
};

struct UParticleModuleLocationPrimitiveSphere : UParticleModuleLocationPrimitiveBase {
	FRawDistributionFloat StartRadius; // 0xb4
};

struct UGameExplosion : UObject {
	uint32_t bDirectionalExplosion : 1; // 0x60
	uint32_t bIgnoreInstigator : 1; // 0x60
	uint32_t bAllowTeammateCringes : 1; // 0x60
	uint32_t bFullDamageToAttachee : 1; // 0x60
	uint32_t bAttachExplosionEmitterToAttachee : 1; // 0x60
	uint32_t bPerformRadialBlurRelevanceCheck : 1; // 0x60
	uint32_t bCausesFracture : 1; // 0x60
	uint32_t bAllowPerMaterialFX : 1; // 0x60
	uint32_t bParticleSystemIsBeingOverriddenDontUsePhysMatVersion : 1; // 0x60
	uint32_t bSkipDefaultPhysMatParticleSystem : 1; // 0x60
	uint32_t bUseMapSpecificValues : 1; // 0x60
	uint32_t bUseOverlapCheck : 1; // 0x60
	uint32_t bOrientCameraShakeTowardsEpicenter : 1; // 0x60
	uint32_t bAutoControllerVibration : 1; // 0x60
	float DirectionalExplosionAngleDeg; // 0x64
	float DamageDelay; // 0x68
	float Damage; // 0x6c
	float DamageRadius; // 0x70
	float DamageFalloffExponent; // 0x74
	ObjectProperty ActorToIgnoreForDamage; // 0x78
	AActor* ActorClassToIgnoreForDamage; // 0x80
	AActor* ActorClassToIgnoreForKnockdownsAndCringes; // 0x88
	UDamageType* MyDamageType; // 0x90
	float KnockDownRadius; // 0x98
	float KnockDownStrength; // 0x9c
	float CringeRadius; // 0xa0
	FVector2D CringeDuration; // 0xa4
	float MomentumTransferScale; // 0xac
	ObjectProperty ParticleEmitterTemplate; // 0xb0
	float ExplosionEmitterScale; // 0xb8
	ObjectProperty HitActor; // 0xbc
	FVector HitLocation; // 0xc4
	FVector HitNormal; // 0xd0
	ObjectProperty ExplosionSound; // 0xdc
	ObjectProperty ExplosionSoundHurtSomeone; // 0xe4
	ComponentProperty ExploLight; // 0xec
	float ExploLightFadeOutTime; // 0xf4
	ComponentProperty ExploRadialBlur; // 0xf8
	float ExploRadialBlurFadeOutTime; // 0x100
	float ExploRadialBlurMaxBlur; // 0x104
	float FractureMeshRadius; // 0x108
	float FracturePartVel; // 0x10c
	ObjectProperty CamShake; // 0x110
	ObjectProperty CamShake_Left; // 0x118
	ObjectProperty CamShake_Right; // 0x120
	ObjectProperty CamShake_Rear; // 0x128
	float CamShakeInnerRadius; // 0x130
	float CamShakeOuterRadius; // 0x134
	float CamShakeFalloff; // 0x138
	AEmitterCameraLensEffectBase* CameraLensEffect; // 0x13c
	float CameraLensEffectRadius; // 0x144
};

struct AGameInfo : AInfo {
	uint32_t bRestartLevel : 1; // 0x244
	uint32_t bPauseable : 1; // 0x244
	uint32_t bTeamGame : 1; // 0x244
	uint32_t bGameEnded : 1; // 0x244
	uint32_t bOverTime : 1; // 0x244
	uint32_t bDelayedStart : 1; // 0x244
	uint32_t bWaitingToStartMatch : 1; // 0x244
	uint32_t bChangeLevels : 1; // 0x244
	uint32_t bAlreadyChanged : 1; // 0x244
	uint32_t bAdminCanPause : 1; // 0x244
	uint32_t bGameRestarted : 1; // 0x244
	uint32_t bLevelChange : 1; // 0x244
	uint32_t bKickLiveIdlers : 1; // 0x244
	uint32_t bUsingArbitration : 1; // 0x244
	uint32_t bHasArbitratedHandshakeBegun : 1; // 0x244
	uint32_t bNeedsEndGameHandshake : 1; // 0x244
	uint32_t bIsEndGameHandshakeComplete : 1; // 0x244
	uint32_t bHasEndGameHandshakeBegun : 1; // 0x244
	uint32_t bFixedPlayerStart : 1; // 0x244
	uint32_t bDoFearCostFallOff : 1; // 0x244
	uint32_t bUseSeamlessTravel : 1; // 0x244
	uint32_t bHasNetworkError : 1; // 0x244
	uint32_t bRequiresPushToTalk : 1; // 0x244
	uint32_t bIsStandbyCheckingEnabled : 1; // 0x244
	uint32_t bIsStandbyCheckingOn : 1; // 0x244
	uint32_t bHasStandbyCheatTriggered : 1; // 0x244
	FString SubLevelPostFix; // 0x248
	FString CauseEventCommand; // 0x258
	FString BugLocString; // 0x268
	FString BugRotString; // 0x278
	TArray<ObjectProperty> PendingArbitrationPCs; // 0x288
	TArray<ObjectProperty> ArbitrationPCs; // 0x298
	float ArbitrationHandshakeTimeout; // 0x2a8
	float GameDifficulty; // 0x2ac
	int32_t GoreLevel; // 0x2b0
	float GameSpeed; // 0x2b4
	int32_t MaxBotSpawnPerTick; // 0x2b8
	int32_t CurBotSpawnNumber; // 0x2bc
	APawn* DefaultPawnClass; // 0x2c0
	AHUD* HUDType; // 0x2c8
	AHUD* SecondaryHUDType; // 0x2d0
	int32_t MaxSpectators; // 0x2d8
	int32_t MaxSpectatorsAllowed; // 0x2dc
	int32_t NumSpectators; // 0x2e0
	int32_t MaxPlayers; // 0x2e4
	int32_t MaxPlayersAllowed; // 0x2e8
	int32_t NumPlayers; // 0x2ec
	int32_t NumBots; // 0x2f0
	int32_t NumTravellingPlayers; // 0x2f4
	int32_t CurrentID; // 0x2f8
	FString DefaultPlayerName; // 0x2fc
	FString GameName; // 0x30c
	float FearCostFallOff; // 0x31c
	int32_t GoalScore; // 0x320
	int32_t MaxLives; // 0x324
	int32_t TimeLimit; // 0x328
	ULocalMessage* DeathMessageClass; // 0x32c
	UGameMessage* GameMessageClass; // 0x334
	ObjectProperty BaseMutator; // 0x33c
	AAccessControl* AccessControlClass; // 0x344
	ObjectProperty AccessControl; // 0x34c
	ABroadcastHandler* BroadcastHandlerClass; // 0x354
	ObjectProperty BroadcastHandler; // 0x35c
	AAutoTestManager* AutoTestManagerClass; // 0x364
	ObjectProperty MyAutoTestManager; // 0x36c
	APlayerController* PlayerControllerClass; // 0x374
	APlayerReplicationInfo* PlayerReplicationInfoClass; // 0x37c
	AGameReplicationInfo* GameReplicationInfoClass; // 0x384
	ObjectProperty GameReplicationInfo; // 0x38c
	ObjectProperty PopulationManager; // 0x394
	ACrowdPopulationManagerBase* PopulationManagerClass; // 0x39c
	FString GripAIManagerClassPath; // 0x3a4
	ObjectProperty GripAIManagerHolder; // 0x3b4
	float MaxIdleTime; // 0x3bc
	float MaxTimeMargin; // 0x3c0
	float TimeMarginSlack; // 0x3c4
	float MinTimeMargin; // 0x3c8
	TArray<ObjectProperty> InactivePRIArray; // 0x3cc
	TArray<DelegateProperty> Pausers; // 0x3dc
	ObjectProperty OnlineSub; // 0x3ec
	TScriptInterface<Class> GameInterface; // 0x3f4
	UOnlineStatsWrite* OnlineStatsWriteClass; // 0x404
	int32_t LeaderboardId; // 0x40c
	int32_t ArbitratedLeaderboardId; // 0x410
	ObjectProperty CoverReplicatorBase; // 0x414
	UOnlineGameSettings* OnlineGameSettingsClass; // 0x41c
	FString ServerOptions; // 0x424
	int32_t AdjustedNetSpeed; // 0x434
	float LastNetSpeedUpdateTime; // 0x438
	int32_t TotalNetBandwidth; // 0x43c
	int32_t MinDynamicBandwidth; // 0x440
	int32_t MaxDynamicBandwidth; // 0x444
	float StandbyRxCheatTime; // 0x448
	float StandbyTxCheatTime; // 0x44c
	int32_t BadPingThreshold; // 0x450
	float PercentMissingForRxStandby; // 0x454
	float PercentMissingForTxStandby; // 0x458
	float PercentForBadPing; // 0x45c
	float JoinInProgressStandbyWaitTime; // 0x460
	ObjectProperty StreamingPauseIcon; // 0x464
	TArray<FGameClassShortName> GameInfoClassAliases; // 0x46c
	FString DefaultGameType; // 0x47c
	TArray<FGameTypePrefix> DefaultMapPrefixes; // 0x48c
	TArray<FGameTypePrefix> CustomMapPrefixes; // 0x49c
	int32_t AnimTreePoolSize; // 0x4ac
	DelegateProperty __CanUnpause__Delegate; // 0x4b0
};

struct ANxTornadoAngularForceFieldCapsule : ANxTornadoAngularForceField {
	ComponentProperty RenderComponent; // 0x2cc
};

struct UCombatAnimNotify_MITVParam : UAnimNotify {
	uint32_t bOverride_AutoActiveAll : 1; // 0x60
	uint32_t bAutoActivateAll : 1; // 0x60
	uint32_t bApplyPlayRate : 1; // 0x60
	TArray<FAnimNotifyMITVScalarParam> ScalarParam; // 0x64
	TArray<FAnimNotifyMITVVectorParam> VectorParam; // 0x74
	TArray<FAnimNotifyMITVLinearColorParam> LinearColorParam; // 0x84
	TArray<FAnimNotifyMITVTextureParam> TextureParam; // 0x94
	TArray<FMITVParam> SavedMITVParam; // 0xa4
	float AnimStartTime; // 0xb4
	float NotifyDuration; // 0xb8
};

struct APlayerStart : ANavigationPoint {
	uint32_t bEnabled : 1; // 0x33c
	uint32_t bPrimaryStart : 1; // 0x33c
	uint32_t bBestStart : 1; // 0x33c
	int32_t TeamIndex; // 0x340
	int32_t Score; // 0x344
	int32_t SelectionIndex; // 0x348
};

struct UMorphNodePose : UMorphNodeBase {
	ObjectProperty Target; // 0x74
	FName MorphName; // 0x7c
	float Weight; // 0x84
};

struct ASpeedTreeActor : AActor {
	ComponentProperty SpeedTreeComponent; // 0x244
};

struct UParticleModuleCameraOffset : UParticleModuleCameraBase {
	FRawDistributionFloat CameraOffset; // 0x68
	uint32_t bSpawnTimeOnly : 1; // 0x8c
	EParticleCameraOffsetUpdateMethod UpdateMethod; // 0x90
};

struct USoundNodeDelay : USoundNode {
	float DelayMin; // 0x74
	float DelayMax; // 0x78
	FRawDistributionFloat DelayDuration; // 0x7c
};

struct UMaterialExpressionCeil : UMaterialExpression {
	FExpressionInput Input; // 0xb0
};

struct USeqAct_CombatGameOver : USequenceAction {
	Team Winner; // 0x108
	ERoundResultReason Reason; // 0x109
};

struct UCombatDataTableRefRoomName : UCombatDataTableType {
	int32_t Code; // 0x6c
	int32_t DisplayID; // 0x70
};

struct UCombatHUDSoundGroup : UObject {
	ObjectProperty GameOverQuestion; // 0x60
	ObjectProperty Target; // 0x68
};

struct UDrawCapsuleComponent : UPrimitiveComponent {
	FColor CapsuleColor; // 0x250
	ObjectProperty CapsuleMaterial; // 0x254
	float CapsuleHeight; // 0x25c
	float CapsuleRadius; // 0x260
	uint32_t bDrawWireCapsule : 1; // 0x264
	uint32_t bDrawLitCapsule : 1; // 0x264
	uint32_t bDrawOnlyIfSelected : 1; // 0x264
};

struct ARB_Thruster : ARigidBodyBase {
	uint32_t bThrustEnabled : 1; // 0x244
	float ThrustStrength; // 0x248
};

struct URB_RadialImpulseComponent : UPrimitiveComponent {
	ERadialImpulseFalloff ImpulseFalloff; // 0x250
	float ImpulseStrength; // 0x254
	float ImpulseRadius; // 0x258
	uint32_t bVelChange : 1; // 0x25c
	uint32_t bCauseFracture : 1; // 0x25c
	ComponentProperty PreviewSphere; // 0x260
};

struct UCombatDataTableRefMatchMakingOption : UCombatDataTableType {
	FString CodeName; // 0x6c
	int32_t ServiceRegionID; // 0x7c
	FString PingCodeName; // 0x80
	FString RatingCodeName; // 0x90
};

struct UParticleModuleLocationWorldOffset_Seeded : UParticleModuleLocationWorldOffset {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x94
};

struct ACombatVolumetricsActor : AActor {
	ObjectProperty VolumetricsMI; // 0x244
	ObjectProperty ParentVolumetricsMat; // 0x24c
	ComponentProperty StaticMeshComponent; // 0x254
	FColor EffectColor; // 0x25c
	float Distance; // 0x260
	float FalloffExponent; // 0x264
	float Opacity; // 0x268
};

struct UInterpGroupAI : UInterpGroup {
	FName StageMarkGroup; // 0x98
	uint32_t SnapToRootBoneLocationWhenFinished : 1; // 0xa0
	uint32_t bNoEncroachmentCheck : 1; // 0xa0
	uint32_t bDisableWorldCollision : 1; // 0xa0
	uint32_t bIgnoreLegacyHeightAdjust : 1; // 0xa0
	uint32_t bRecreatePreviewPawn : 1; // 0xa0
	uint32_t bRefreshStageMarkGroup : 1; // 0xa0
};

struct UParticleModuleColor_Seeded : UParticleModuleColor {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xb4
};

struct UCCSActorFactory : UActorFactory {
	ACCSController* ControllerClass; // 0x9c
	ObjectProperty BehaviorTree; // 0xa4
	APawn* PawnClass; // 0xac
	FString PawnName; // 0xb4
	FCCSSystemConfigData Config; // 0xc4
	uint32_t bGiveDefaultInventory : 1; // 0xf0
	TArray<AInventory*> InventoryList; // 0xf4
	int32_t TeamIndex; // 0x104
};

struct USeqAct_FinishSequence : USequenceAction {
	FString OutputLabel; // 0x108
};

struct UCombatDataTableRefCompetitiveSeason : UCombatDataTableType {
	FString SeasonCodeName; // 0x6c
	FString ModeGroupCodename; // 0x7c
};

struct UCombatDataTableRefShopSellItem : UCombatDataTableType {
	int32_t TimeCondition; // 0x6c
	int32_t OverlapCondition; // 0x70
	int32_t MoneyType; // 0x74
	int32_t SellCost; // 0x78
	FString CodeName; // 0x7c
};

struct UCombatSkelCtrl_Hinge : USkelControlSingleBone {
	uint32_t bInitialized : 1; // 0x100
	ObjectProperty OwnerPawn; // 0x104
	FName AttachedBoneName; // 0x10c
	ObjectProperty BodyInstance; // 0x114
	float MaxAngle; // 0x11c
	EAxis PivotAxis; // 0x120
	float AVModifier; // 0x124
	float CurrentAngle; // 0x128
	float SpringStiffness; // 0x12c
};

struct UTextureMovie : UTexture {
	int32_t SizeX; // 0x11c
	int32_t SizeY; // 0x120
	EPixelFormat Format; // 0x124
	TextureAddress AddressX; // 0x125
	TextureAddress AddressY; // 0x126
	EMovieStreamSource MovieStreamSource; // 0x127
	UCodecMovie* DecoderClass; // 0x128
	ObjectProperty Decoder; // 0x130
	uint32_t Paused : 1; // 0x138
	uint32_t Stopped : 1; // 0x138
	uint32_t Looping : 1; // 0x138
	uint32_t ResetOnLastFrame : 1; // 0x138
	uint32_t AutoPlay : 1; // 0x138
	FUntypedBulkData_Mirror Data; // 0x13c
	FPointer ReleaseCodecFence; // 0x17c
};

struct UPBRuleNodeEdgeAngle : UPBRuleNodeBase {
	EProcBuildingEdge Edge; // 0x70
	TArray<FRBEdgeAngleInfo> Angles; // 0x74
};

struct ACombatSEIGameReplicationInfo : ACBGameReplicationInfo {
	TArray<ObjectProperty> OccupiedAreas; // 0x380
	int32_t TotalOccupiedAreaNum; // 0x390
};

struct USeqEvent_TouchInput : USequenceEvent {
	uint32_t bTrapInput : 1; // 0x128
	int32_t AllowedPlayerIndex; // 0x12c
	int32_t AllowedTouchIndex; // 0x130
	int32_t AllowedTouchpadIndex; // 0x134
};

struct UOnlineEventsInterfaceMcp : UMCPBase {
	TArray<FEventUploadConfig> EventUploadConfigs; // 0x80
	TArray<FPointer> MCPEventPostObjects; // 0x90
	TArray<EEventUploadType> DisabledUploadTypes; // 0xa0
	uint32_t bBinaryStats : 1; // 0xb0
};

struct UCombatDataTableRefCompetitiveBindMode : UCombatDataTableType {
	FString SeasonCodeName; // 0x6c
	FString ModeCodeName; // 0x7c
	FString SeasonGroup; // 0x8c
	uint32_t SeasonHistory : 1; // 0x9c
	uint32_t IsRegularMode : 1; // 0x9c
	FTimeData ModeStart; // 0xa0
	FTimeData ModeEnd; // 0xa8
	int32_t PlacementMatchCount; // 0xb0
	int32_t DefaultTierPoint; // 0xb4
};

struct UParticleModuleSizeMultiplyVelocity : UParticleModuleSizeBase {
	FRawDistributionVector VelocityMultiplier; // 0x68
	uint32_t MultiplyX : 1; // 0x8c
	uint32_t MultiplyY : 1; // 0x8c
	uint32_t MultiplyZ : 1; // 0x8c
	FVector CapMaxSize; // 0x90
	FVector CapMinSize; // 0x9c
};

struct UWindowsClient : UClient {
	UAudioDevice* AudioDeviceClass; // 0x1e4
	int32_t AllowJoystickInput; // 0x21c
};

struct UPrimitiveComponentFactory : UObject {
	uint32_t CollideActors : 1; // 0x60
	uint32_t BlockActors : 1; // 0x60
	uint32_t BlockZeroExtent : 1; // 0x60
	uint32_t BlockNonZeroExtent : 1; // 0x60
	uint32_t BlockRigidBody : 1; // 0x60
	uint32_t HiddenGame : 1; // 0x60
	uint32_t HiddenEditor : 1; // 0x60
	uint32_t CastShadow : 1; // 0x60
};

struct UCombatFrontEnd_SpecialGoodsInfoPopup : UCombatFrontEnd_Object {
	DelegateProperty __SpecialGoodsSort__Delegate; // 0xd0
};

struct UBookMark : UObject {
	FVector Location; // 0x60
	FRotator Rotation; // 0x6c
	TArray<FString> HiddenLevels; // 0x78
};

struct UCombatPassiveSkill : UCombatSkill {
	float MaxHealthRate_Buff; // 0x80
	float MaxAutoCureHealthModifier_Buff; // 0x84
	float HealthCureRate_Buff; // 0x88
	float AddMainAmmo_Buff; // 0x8c
	float AddSubAmmo_Buff; // 0x90
	float AddMainMagazineAmmo_Buff; // 0x94
	float AddSubMagazineAmmo_Buff; // 0x98
	float MaxMainMagazineAmmo_Buff; // 0x9c
	float MaxSubMagazineAmmo_Buff; // 0xa0
	float WeaponReloadSpeedRate_Buff; // 0xa4
	float WeaponChangeRate_Buff; // 0xa8
	float GroundCrouchSpeedRate_Buff; // 0xac
	float GroundWalkingSpeedRate_Buff; // 0xb0
	float GroundRunSpeedRate_Buff; // 0xb4
	float GroundAccelationRate_Buff; // 0xb8
	float GunAttackRate_Buff; // 0xbc
	float MeleeAttackRate_Buff; // 0xc0
	float ExplosiveAttackRate_Buff; // 0xc4
	float GunGuardRate_Buff; // 0xc8
	float MeleeGuardRate_Buff; // 0xcc
	float ExplosiveGuardRate_Buff; // 0xd0
	float DetailedRadarDistance_Buff; // 0xd4
	float RadarRange_Buff; // 0xd8
	int32_t AddGrenade_Buff; // 0xdc
};

struct UNetConnection : UPlayer {
	TArray<ObjectProperty> Children; // 0xb080
};

struct UActorFactorySkeletalMesh : UActorFactory {
	ObjectProperty SkeletalMesh; // 0x9c
	ObjectProperty AnimSet; // 0xa4
	FName AnimSequenceName; // 0xac
};

struct ACombatRescueGameBase : ACombatPVPGame {
	WordProperty LastMissionTime; // 0x788
};

struct UApexStaticDestructibleComponent : UApexStaticComponent {
	float SleepEnergyThreshold; // 0x27c
	float SleepDamping; // 0x280
	FPointer ApexDestructibleActor; // 0x284
	FPointer ApexDestructiblePreview; // 0x28c
	uint32_t bIsThumbnailComponent : 1; // 0x294
};

struct UCombatDemolitionMovie : UCombatTeamGameMovie {
	ObjectProperty BombContainer; // 0xad0
	int32_t BombsiteCount; // 0xad8
	int32_t BombCount; // 0xadc
	uint32_t bUpdateEquippedBomb : 1; // 0xae0
	uint32_t bUpdateEquippedBombSite : 1; // 0xae0
	uint32_t bIsDisplayedBombLimitTime : 1; // 0xae0
	uint32_t bStartSpectDefuseUI : 1; // 0xae0
	int32_t LastBombDefuseTimeCount; // 0xae4
};

struct UParticleModuleUberRainDrops : UParticleModuleUberBase {
	float LifetimeMin; // 0x78
	float LifetimeMax; // 0x7c
	FVector StartSizeMin; // 0x80
	FVector StartSizeMax; // 0x8c
	FVector StartVelocityMin; // 0x98
	FVector StartVelocityMax; // 0xa4
	float StartVelocityRadialMin; // 0xb0
	float StartVelocityRadialMax; // 0xb4
	FVector ColorOverLife; // 0xb8
	float AlphaOverLife; // 0xc4
	uint32_t bIsUsingCylinder : 1; // 0xc8
	uint32_t bPositive_X : 1; // 0xc8
	uint32_t bPositive_Y : 1; // 0xc8
	uint32_t bPositive_Z : 1; // 0xc8
	uint32_t bNegative_X : 1; // 0xc8
	uint32_t bNegative_Y : 1; // 0xc8
	uint32_t bNegative_Z : 1; // 0xc8
	uint32_t bSurfaceOnly : 1; // 0xc8
	uint32_t bVelocity : 1; // 0xc8
	uint32_t bRadialVelocity : 1; // 0xc8
	float PC_VelocityScale; // 0xcc
	FVector PC_StartLocation; // 0xd0
	float PC_StartRadius; // 0xdc
	float PC_StartHeight; // 0xe0
	CylinderHeightAxis PC_HeightAxis; // 0xe4
	FVector StartLocationMin; // 0xe8
	FVector StartLocationMax; // 0xf4
};

struct UCombatHUD_TacticalMapAndScoreboard : UCombatHUDEntity_Base {
	ObjectProperty Radar_LPIconMC; // 0xc0
	ObjectProperty CompassMC; // 0xc8
	ObjectProperty TopDepthIconContainerMC; // 0xd0
	ObjectProperty FriendlyIconContainerMC; // 0xd8
	ObjectProperty EnemyIconContainerMC; // 0xe0
	ObjectProperty ObjectIconContainerMC; // 0xe8
	ObjectProperty NameplateContainerMC; // 0xf0
	int32_t NameplateLocDelta_X; // 0xf8
	int32_t NameplateLocDelta_Y; // 0xfc
	int32_t ChampionshipObserverNameplateLocDelta_X; // 0x100
	int32_t ChampionshipObserverNameplateLocDelta_Y; // 0x104
	ObjectProperty MapMC; // 0x108
	FMatrix IconMatrix; // 0x110
	FIconData IconDatas[0x6]; // 0x150
	FNameplateData NameplateIconDatas; // 0x270
	uint32_t bIgnoreMinimap : 1; // 0x2a0
	uint32_t bIgnoreWholeMap : 1; // 0x2a0
	uint32_t bIgnoreScoreboard : 1; // 0x2a0
	EScoreboardType scoreboardType; // 0x2a4
	FString LastModeName; // 0x2a8
	DelegateProperty __OnUpdateTacticalMap__Delegate; // 0x2b8
};

struct UParticleSystemComponent : UPrimitiveComponent {
	ObjectProperty Template; // 0x250
	uint32_t bForceUnlitParticle : 1; // 0x258
	uint32_t bAutoActivate : 1; // 0x258
	uint32_t bWasCompleted : 1; // 0x258
	uint32_t bSuppressSpawning : 1; // 0x258
	uint32_t bWasDeactivated : 1; // 0x258
	uint32_t bResetOnDetach : 1; // 0x258
	uint32_t bUpdateOnDedicatedServer : 1; // 0x258
	uint32_t bJustAttached : 1; // 0x258
	uint32_t bIsActive : 1; // 0x258
	uint32_t bHasBeenActivated : 1; // 0x258
	uint32_t bWarmingUp : 1; // 0x258
	uint32_t bIsCachedInPool : 1; // 0x258
	uint32_t bOverrideLODMethod : 1; // 0x258
	uint32_t bSkipUpdateDynamicDataDuringTick : 1; // 0x258
	uint32_t bSkipBoundsUpdate : 1; // 0x258
	uint32_t bUpdateComponentInTick : 1; // 0x258
	uint32_t bDeferredBeamUpdate : 1; // 0x258
	uint32_t bForcedInActive : 1; // 0x258
	uint32_t bIsWarmingUp : 1; // 0x258
	uint32_t bIsViewRelevanceDirty : 1; // 0x258
	uint32_t bRecacheViewRelevance : 1; // 0x258
	uint32_t bLODUpdatePending : 1; // 0x258
	uint32_t bSkipSpawnCountCheck : 1; // 0x258
	UParticleLightEnvironmentComponent* LightEnvironmentClass; // 0x25c
	ObjectProperty LightEnvironmentSharedInstigator; // 0x264
	int32_t MaxLightEnvironmentPooledReuses; // 0x26c
	TArray<FPointer> EmitterInstances; // 0x270
	TArray<ComponentProperty> SMComponents; // 0x280
	TArray<ObjectProperty> SMMaterialInterfaces; // 0x290
	TArray<ComponentProperty> SkelMeshComponents; // 0x2a0
	TArray<FViewParticleEmitterInstanceMotionBlurInfo> ViewMBInfoArray; // 0x2b0
	TArray<FParticleSysParam> InstanceParameters; // 0x2c0
	FVector OldPosition; // 0x2d0
	FVector PartSysVelocity; // 0x2dc
	float WarmupTime; // 0x2e8
	float WarmupTickRate; // 0x2ec
	int32_t LODLevel; // 0x2f0
	float SecondsBeforeInactive; // 0x2f4
	float TimeSinceLastForceUpdateTransform; // 0x2f8
	float MaxTimeBeforeForceUpdateTransform; // 0x2fc
	float AccumTickTime; // 0x300
	ParticleSystemLODMethod LODMethod; // 0x304
	ParticleReplayState ReplayState; // 0x305
	int32_t CurrentUpdateFixedLOD; // 0x308
	TArray<FMaterialViewRelevance> CachedViewRelevanceFlags; // 0x30c
	TArray<ObjectProperty> ReplayClips; // 0x31c
	int32_t ReplayClipIDNumber; // 0x32c
	int32_t ReplayFrameIndex; // 0x330
	float AccumLODDistanceCheckTime; // 0x334
	TArray<FParticleEventSpawnData> SpawnEvents; // 0x338
	TArray<FParticleEventDeathData> DeathEvents; // 0x348
	TArray<FParticleEventCollideData> CollisionEvents; // 0x358
	TArray<FParticleEventKismetData> KismetEvents; // 0x368
	TArray<FParticleEventAttractorCollideData> AttractorCollisionEvents; // 0x378
	FPointer ReleaseResourcesFence; // 0x388
	float CustomTimeDilation; // 0x390
	float EmitterDelay; // 0x394
	ComponentProperty RadialBlurComp; // 0x398
	DelegateProperty __OnSystemFinished__Delegate; // 0x3a0
};

struct UPhysicsAssetInstance : UObject {
	ObjectProperty Owner; // 0x60
	int32_t RootBodyIndex; // 0x68
	TArray<ObjectProperty> Bodies; // 0x6c
	TArray<ObjectProperty> Constraints; // 0x7c
	FMap_Mirror CollisionDisableTable; // 0x8c
	float LinearSpringScale; // 0xd4
	float LinearDampingScale; // 0xd8
	float LinearForceLimitScale; // 0xdc
	float AngularSpringScale; // 0xe0
	float AngularDampingScale; // 0xe4
	float AngularForceLimitScale; // 0xe8
	uint32_t bInitBodies : 1; // 0xec
};

struct UCombatServerRewardData : UCombatRewardDataBase {
	int32_t AssistInLife; // 0x1b8
	float LastMultiKillTime; // 0x1bc
	char MultiKillCount; // 0x1c0
	TArray<FDamagePerPlayer> DamagePerPlayers; // 0x1c4
	int32_t ConsecutiveDeathCount; // 0x1d4
	float LastDeathTime; // 0x1d8
	int32_t BestKillCount; // 0x1dc
	int32_t LastLifeKillCount; // 0x1e0
	ObjectProperty TeamRevengeTarget; // 0x1e4
	ObjectProperty RevengeTarget; // 0x1ec
};

struct ADecalManager : AActor {
	ComponentProperty DecalTemplate; // 0x244
	TArray<ComponentProperty> PoolDecals; // 0x24c
	int32_t MaxActiveDecals; // 0x25c
	float DecalLifeSpan; // 0x260
	float DecalDepthBias; // 0x264
	FVector2D DecalBlendRange; // 0x268
	TArray<FActiveDecalInfo> ActiveDecals; // 0x270
};

struct UApexComponentBase : UMeshComponent {
	FPointer ComponentBaseResources; // 0x260
	FRenderCommandFence_Mirror ReleaseResourcesFence; // 0x268
	ObjectProperty Asset; // 0x26c
	FColor WireframeColor; // 0x274
	uint32_t bAssetChanged : 1; // 0x278
};

struct USeqAct_IsInObjectList : USequenceAction {
	uint32_t bCheckForAllObjects : 1; // 0x108
	uint32_t bObjectFound : 1; // 0x108
};

struct UParticleModuleTypeDataTrail2 : UParticleModuleTypeDataBase {
	int32_t TessellationFactor; // 0x68
	float TessellationFactorDistance; // 0x6c
	float TessellationStrength; // 0x70
	int32_t TextureTile; // 0x74
	int32_t Sheets; // 0x78
	int32_t MaxTrailCount; // 0x7c
	int32_t MaxParticleInTrailCount; // 0x80
	uint32_t bClipSourceSegement : 1; // 0x84
	uint32_t bClearTangents : 1; // 0x84
	uint32_t RenderGeometry : 1; // 0x84
	uint32_t RenderDirectLine : 1; // 0x84
	uint32_t RenderLines : 1; // 0x84
	uint32_t RenderTessellation : 1; // 0x84
};

struct UUIGameInfoSummary : UUIResourceDataProvider {
	FString ClassName; // 0x94
	FString GameAcronym; // 0xa4
	FString MapPrefix; // 0xb4
	uint32_t bIsTeamGame : 1; // 0xc4
	uint32_t bIsDisabled : 1; // 0xc4
	FString GameSettingsClassName; // 0xc8
	FString GameName; // 0xd8
	FString Description; // 0xe8
};

struct UMaterialExpressionTextureSample : UMaterialExpression {
	ObjectProperty Texture; // 0xb0
	FExpressionInput Coordinates; // 0xb8
	FExpressionInput TextureObject; // 0xec
};

struct UParticleModuleTypeDataRibbon : UParticleModuleTypeDataBase {
	int32_t MaxTessellationBetweenParticles; // 0x68
	int32_t SheetsPerTrail; // 0x6c
	int32_t MaxTrailCount; // 0x70
	int32_t MaxParticleInTrailCount; // 0x74
	uint32_t bDeadTrailsOnDeactivate : 1; // 0x78
	uint32_t bDeadTrailsOnSourceLoss : 1; // 0x78
	uint32_t bClipSourceSegement : 1; // 0x78
	uint32_t bEnablePreviousTangentRecalculation : 1; // 0x78
	uint32_t bTangentRecalculationEveryFrame : 1; // 0x78
	uint32_t bSpawnInitialParticle : 1; // 0x78
	uint32_t bRenderGeometry : 1; // 0x78
	uint32_t bRenderSpawnPoints : 1; // 0x78
	uint32_t bRenderTangents : 1; // 0x78
	uint32_t bRenderTessellation : 1; // 0x78
	uint32_t bEnableTangentDiffInterpScale : 1; // 0x78
	ETrailsRenderAxisOption RenderAxis; // 0x7c
	float TangentSpawningScalar; // 0x80
	float TilingDistance; // 0x84
	float DistanceTessellationStepSize; // 0x88
	float TangentTessellationScalar; // 0x8c
};

struct UGripBTScriptNodeCache : UObject {
	TArray<ObjectProperty> ScriptNodes; // 0x60
};

struct UCombatDataTableRefCompetitivePenalty : UCombatDataTableType {
	FString ModeGroupCodename; // 0x6c
	int32_t AcceptPoint; // 0x7c
	int32_t AcceptAlertTime; // 0x80
	int32_t AcceptTime; // 0x84
	int32_t AcceptInterval; // 0x88
	int32_t DecreasePoint; // 0x8c
};

struct UOnlineGameSettings : USettings {
	int32_t NumPublicConnections; // 0xa0
	int32_t NumPrivateConnections; // 0xa4
	int32_t NumOpenPublicConnections; // 0xa8
	int32_t NumOpenPrivateConnections; // 0xac
	FQWord ServerNonce; // 0xb0
	uint32_t bShouldAdvertise : 1; // 0xb8
	uint32_t bIsLanMatch : 1; // 0xb8
	uint32_t bUsesStats : 1; // 0xb8
	uint32_t bAllowJoinInProgress : 1; // 0xb8
	uint32_t bAllowInvites : 1; // 0xb8
	uint32_t bUsesPresence : 1; // 0xb8
	uint32_t bAllowJoinViaPresence : 1; // 0xb8
	uint32_t bAllowJoinViaPresenceFriendsOnly : 1; // 0xb8
	uint32_t bUsesArbitration : 1; // 0xb8
	uint32_t bAntiCheatProtected : 1; // 0xb8
	uint32_t bWasFromInvite : 1; // 0xb8
	uint32_t bIsDedicated : 1; // 0xb8
	uint32_t bHasSkillUpdateInProgress : 1; // 0xb8
	uint32_t bShouldShrinkArbitratedSessions : 1; // 0xb8
	FString OwningPlayerName; // 0xbc
	FUniqueNetId OwningPlayerId; // 0xcc
	int32_t PingInMs; // 0xd4
	float MatchQuality; // 0xd8
	EOnlineGameState GameState; // 0xdc
	int32_t BuildUniqueId; // 0xe0
};

struct UUIDataProvider_OnlinePlayerStorage : UUIDataProvider_OnlinePlayerDataBase {
	ObjectProperty Profile; // 0x74
	FName ProviderName; // 0x7c
	uint32_t bWasErrorLastRead : 1; // 0x84
	uint32_t bIsExternalUIOpen : 1; // 0x84
	uint32_t bNeedsDeferredRefresh : 1; // 0x84
	TArray<FPlayerStorageArrayProvider> PlayerStorageArrayProviders; // 0x88
	int32_t DeviceStorageSizeNeeded; // 0x98
};

struct ACombatLCTFModePRI : ACombatPlayerReplicationInfo {
	ObjectProperty CTFFlag; // 0x520
	int32_t TakeCount; // 0x528
	int32_t TakeFlagSpawnID; // 0x52c
	TArray<FLimitAddScoreCountStruct> AddScoreCountList; // 0x530
	uint32_t bHaveCTFFlag : 1; // 0x540
	uint32_t bFirstExtortion : 1; // 0x540
	WordProperty TotalCTFScore; // 0x544
};

struct UParticleModuleRadialBlur : UParticleModuleLocationPrimitiveBase {
	ObjectProperty OpacityMaterial; // 0xb4
	FRawDistributionFloat BlurScale; // 0xbc
	FRawDistributionFloat BlurFalloffExponent; // 0xe0
	FRawDistributionFloat BlurOpacity; // 0x104
	float MaxCullDistance; // 0x128
	float DistanceFalloffExponent; // 0x12c
};

struct UCombatFrontEnd_CallingCardPage : UCombatFrontEnd_Object {
	FFrontEndButtonStruct CallingCardButtonInfo[0x2]; // 0xd0
	FFrontEndButtonStruct CallingCardTabInfo[0x2]; // 0x100
	TArray<FCallingCardInfo> CallingCardInfoList; // 0x130
	char SHOW_CALLINGCARD_COUNT; // 0x140
	int32_t selectID; // 0x144
};

struct UMaterialExpressionTextureSampleParameterEnvCube : UMaterialExpressionTextureSampleParameterCubeLOD {
	EEnvCubeType BoundingType; // 0x178
};

struct AInternetLink : AInfo {
	ELinkMode LinkMode; // 0x244
	ELineMode InLineMode; // 0x245
	ELineMode OutLineMode; // 0x246
	EReceiveMode ReceiveMode; // 0x247
	FPointer Socket; // 0x248
	int32_t Port; // 0x250
	FPointer RemoteSocket; // 0x254
	FPointer PrivateResolveInfo; // 0x25c
	int32_t DataPending; // 0x264
};

struct APhysicsVolume : AVolume {
	FVector ZoneVelocity; // 0x280
	uint32_t bVelocityAffectsWalking : 1; // 0x28c
	uint32_t bPainCausing : 1; // 0x28c
	uint32_t bAIShouldIgnorePain : 1; // 0x28c
	uint32_t bEntryPain : 1; // 0x28c
	uint32_t BACKUP_bPainCausing : 1; // 0x28c
	uint32_t bDestructive : 1; // 0x28c
	uint32_t bNoInventory : 1; // 0x28c
	uint32_t bMoveProjectiles : 1; // 0x28c
	uint32_t bBounceVelocity : 1; // 0x28c
	uint32_t bNeutralZone : 1; // 0x28c
	uint32_t bCrowdAgentsPlayDeathAnim : 1; // 0x28c
	uint32_t bPhysicsOnContact : 1; // 0x28c
	uint32_t bWaterVolume : 1; // 0x28c
	float GroundFriction; // 0x290
	float TerminalVelocity; // 0x294
	float DamagePerSec; // 0x298
	UDamageType* DamageType; // 0x29c
	int32_t Priority; // 0x2a4
	float FluidFriction; // 0x2a8
	float PainInterval; // 0x2ac
	float RigidBodyDamping; // 0x2b0
	float MaxDampingForce; // 0x2b4
	ObjectProperty PainTimer; // 0x2b8
	ObjectProperty DamageInstigator; // 0x2c0
	ObjectProperty NextPhysicsVolume; // 0x2c8
};

struct USeqCond_IncrementFloat : USequenceCondition {
	float IncrementAmount; // 0xec
	float ValueA; // 0xf0
	float ValueB; // 0xf4
};

struct UInterpTrackInstFaceFX : UInterpTrackInst {
	uint32_t bFirstUpdate : 1; // 0x60
	float LastUpdatePosition; // 0x64
};

struct ACombatGuy_NPC : ACombatGuyBase {
	FPointer VfTable_ICCSPawn; // 0x1128
	float MaxAccelRate; // 0x1130
	float MaxAirSpeed; // 0x1134
	float MaxGroundSpeed; // 0x1138
	float MeshScale; // 0x113c
	FString PrimaryWeapon; // 0x1140
	FString SecondaryWeapon; // 0x1150
	FString MeleeWeapon; // 0x1160
	ECCSMovementType MovementType; // 0x1170
	ECCSAlertnessState AlertnessState; // 0x1171
	ECCSCoverPose WantedCoverPose; // 0x1172
	ECCSCoverPose CurrentCoverPose; // 0x1173
	uint32_t bShouldCover : 1; // 0x1174
	uint32_t bInCover : 1; // 0x1174
	uint32_t ThrowRecheck : 1; // 0x1174
	uint32_t bIsReplicateCurTargetName : 1; // 0x1174
	float CoverPct; // 0x1178
	float CoverPoseBlendTimeOverride; // 0x117c
	FVector2D AimPitchRange; // 0x1180
	FVector2D AimYawRange; // 0x1188
	float FollowAimingYawInterpSpeed; // 0x1190
	float TurnToTargetYawInterpSpeed; // 0x1194
	float DefaultRotationYawRate; // 0x1198
	ObjectProperty LookAtCtrl2; // 0x119c
	ObjectProperty LookAtMount; // 0x11a4
	ObjectProperty LookAtMount2; // 0x11ac
	ObjectProperty AITarget; // 0x11b4
	int32_t AINameStringIndex; // 0x11bc
	ObjectProperty AmbientSoundCue; // 0x11c0
	ComponentProperty AmbientSoundComponent; // 0x11c8
	FString RepCurTargetName; // 0x11d0
	FString OldCurTargetName; // 0x11e0
};

struct UMobilePlayerInput : UPlayerInput {
	FTouchData Touches[0x5]; // 0x2ec
	ObjectProperty InteractiveObject; // 0x47c
	FDouble InteractiveObjectLastTime; // 0x484
	TArray<FMobileInputGroup> MobileInputGroups; // 0x48c
	int32_t CurrentMobileGroup; // 0x49c
	TArray<ObjectProperty> MobileInputZones; // 0x4a0
	TArray<FMobileInputZoneClassMap> MobileInputZoneClasses; // 0x4b0
	float MobilePitch; // 0x4c0
	float MobilePitchCenter; // 0x4c4
	float MobilePitchMultiplier; // 0x4c8
	float MobileYaw; // 0x4cc
	float MobileYawCenter; // 0x4d0
	float MobileYawMultiplier; // 0x4d4
	float MobilePitchDeadzoneSize; // 0x4d8
	float MobileYawDeadzoneSize; // 0x4dc
	float MobileDoubleTapTime; // 0x4e0
	float MobileMinHoldForTap; // 0x4e4
	float MobileTapRepeatTime; // 0x4e8
	uint32_t bAllowTouchesInCinematic : 1; // 0x4ec
	uint32_t bDisableTouchInput : 1; // 0x4ec
	uint32_t bAbsoluteTouchLocations : 1; // 0x4ec
	uint32_t bFakeMobileTouches : 1; // 0x4ec
	uint32_t bDisableSceneRender : 1; // 0x4ec
	float ZoneTimeout; // 0x4f0
	TArray<ObjectProperty> MobileMenuStack; // 0x4f4
	FString NativeDebugString; // 0x504
	float MobileInactiveTime; // 0x514
	TArray<ObjectProperty> MobileSeqEventHandlers; // 0x518
	TArray<ObjectProperty> MobileRawInputSeqEventHandlers; // 0x528
	FVector2D MobileViewportOffset; // 0x538
	FVector2D MobileViewportSize; // 0x540
	DelegateProperty __OnTouchNotHandledInMenu__Delegate; // 0x548
	DelegateProperty __OnPreviewTouch__Delegate; // 0x558
	DelegateProperty __OnInputTouch__Delegate; // 0x568
};

struct UAnimTree : UAnimNodeBlendBase {
	ObjectProperty AnimTreeTemplate; // 0x100
	uint32_t bEnablePooling : 1; // 0x108
	uint32_t bUseSavedPose : 1; // 0x108
	uint32_t bBeingEdited : 1; // 0x108
	uint32_t bParentNodeArrayBuilt : 1; // 0x108
	uint32_t bRebuildAnimTickArray : 1; // 0x108
	TArray<FAnimGroup> AnimGroups; // 0x10c
	TArray<FName> PrioritizedSkelBranches; // 0x11c
	TArray<FName> ComposePrePassBoneNames; // 0x12c
	TArray<FName> ComposePostPassBoneNames; // 0x13c
	TArray<ObjectProperty> RootMorphNodes; // 0x14c
	TArray<FSkelControlListHead> SkelControlLists; // 0x15c
	TArray<FBoneAtom> SavedPose; // 0x16c
	TArray<ObjectProperty> AnimTickArray; // 0x17c
	float ElapsedBlendTime; // 0x18c
	float AnimsetsBlendTime; // 0x190
};

struct UFluidSurfaceComponent : UPrimitiveComponent {
	ObjectProperty FluidMaterial; // 0x250
	int32_t LightMapResolution; // 0x258
	FLightmassPrimitiveSettings LightmassSettings; // 0x25c
	uint32_t EnableSimulation : 1; // 0x278
	uint32_t EnableDetail : 1; // 0x278
	uint32_t bTiling : 1; // 0x278
	uint32_t bPause : 1; // 0x278
	uint32_t bShowSimulationNormals : 1; // 0x278
	uint32_t bShowSimulationPosition : 1; // 0x278
	uint32_t bShowDetailNormals : 1; // 0x278
	uint32_t bShowDetailPosition : 1; // 0x278
	uint32_t bShowFluidSimulation : 1; // 0x278
	uint32_t bShowFluidDetail : 1; // 0x278
	uint32_t bTestRipple : 1; // 0x278
	uint32_t bTestRippleCenterOnDetail : 1; // 0x278
	int32_t SimulationQuadsX; // 0x27c
	int32_t SimulationQuadsY; // 0x280
	float GridSpacing; // 0x284
	float GridSpacingLowRes; // 0x288
	ObjectProperty TargetSimulation; // 0x28c
	float GPUTessellationFactor; // 0x294
	float FluidDamping; // 0x298
	float FluidTravelSpeed; // 0x29c
	float FluidHeightScale; // 0x2a0
	float FluidUpdateRate; // 0x2a4
	float ForceImpact; // 0x2a8
	float ForceContinuous; // 0x2ac
	float LightingContrast; // 0x2b0
	ObjectProperty TargetDetail; // 0x2b4
	float DeactivationDistance; // 0x2bc
	int32_t DetailResolution; // 0x2c0
	float DetailSize; // 0x2c4
	float DetailDamping; // 0x2c8
	float DetailTravelSpeed; // 0x2cc
	float DetailTransfer; // 0x2d0
	float DetailHeightScale; // 0x2d4
	float DetailUpdateRate; // 0x2d8
	float NormalLength; // 0x2dc
	float TestRippleSpeed; // 0x2e0
	float TestRippleFrequency; // 0x2e4
	float TestRippleRadius; // 0x2e8
	float FluidWidth; // 0x2ec
	float FluidHeight; // 0x2f0
	float TestRippleTime; // 0x2f4
	float TestRippleAngle; // 0x2f8
	float DeactivationTimer; // 0x2fc
	float ViewDistance; // 0x300
	FVector SimulationPosition; // 0x304
	FVector DetailPosition; // 0x310
	TArray<char> ClampMap; // 0x31c
	TArray<ObjectProperty> ShadowMaps; // 0x32c
	FLightMapRef LightMap; // 0x33c
	FPointer FluidSimulation; // 0x344
};

struct ACombatPendingPC : APlayerController {
	uint32_t bUpdateWorldCam : 1; // 0x740
};

struct UAnimNotify_PlayParticleEffect : UAnimNotify {
	ObjectProperty PSTemplate; // 0x60
	uint32_t bIsExtremeContent : 1; // 0x68
	uint32_t bAttach : 1; // 0x68
	uint32_t bPreview : 1; // 0x68
	uint32_t bSkipIfOwnerIsHidden : 1; // 0x68
	ObjectProperty PSNonExtremeContentTemplate; // 0x6c
	FName SocketName; // 0x74
	FName BoneName; // 0x7c
	FName BoneSocketModuleActorName; // 0x84
};

struct UCombatSkill : UObject {
	ESkillType Skilltype; // 0x60
	char SkillGroup; // 0x61
	ObjectProperty SkillOwner; // 0x64
	FString SkillCodeName; // 0x6c
	int32_t refIndex; // 0x7c
};

struct UCombatFrontEnd_Storage : UCombatFrontEnd_Scene {
	TArray<FLabelInfo> LabelList; // 0xd0
	FButtonInfo ButtonList[0x9]; // 0xe0
	FMoneyInfo MoneyList[0x6]; // 0x224
	ObjectProperty MailTran; // 0x2e4
	int32_t TabType; // 0x2ec
	int32_t ShowPageNum; // 0x2f0
	int32_t TotalPage; // 0x2f4
	int32_t selectID; // 0x2f8
	int32_t MaxCheckCount; // 0x2fc
	uint32_t bAllCheck : 1; // 0x300
	uint32_t bShowReceiveFailedDialog : 1; // 0x300
	TArray<int32_t> CheckList; // 0x304
	TArray<int32_t> ReceiveIDList; // 0x314
	TArray<int32_t> ReadIDList; // 0x324
	eFrontEndScene NextScene; // 0x334
};

struct ACheatManager : AActor {
	FString ViewingFrom; // 0x244
	FString OwnCamera; // 0x254
	ObjectProperty OnlineSub; // 0x264
	ObjectProperty OwnerPC; // 0x26c
	ObjectProperty Pawn; // 0x274
};

struct ASceneCaptureActor : AActor {
	ComponentProperty SceneCapture; // 0x244
};

struct UParticleModuleLocationEmitterDirect : UParticleModuleLocationBase {
	FName EmitterName; // 0x68
};

struct ANxRadialCustomForceField : ANxRadialForceField {
	float SelfRotationStrength; // 0x2b4
	FPointer Kernel; // 0x2b8
};

struct UCombatDataTableRefClanRegion : UCombatDataTableType {
	int32_t Index; // 0x6c
	int32_t RegionStringID; // 0x70
};

struct UImageBasedReflectionComponent : UStaticMeshComponent {
	uint32_t bEnabled : 1; // 0x2f4
	uint32_t bTwoSided : 1; // 0x2f4
	ObjectProperty ReflectionTexture; // 0x2f8
	FLinearColor ReflectionColor; // 0x300
};

struct UApexDestructibleDamageParameters : UObject {
	TArray<FDamagePair> DamageMap; // 0x60
};

struct UParticleModuleLocationPrimitiveCylinder : UParticleModuleLocationPrimitiveBase {
	uint32_t RadialVelocity : 1; // 0xb4
	uint32_t bAdjustForWorldSpace : 1; // 0xb4
	FRawDistributionFloat StartRadius; // 0xb8
	FRawDistributionFloat StartHeight; // 0xdc
	CylinderHeightAxis HeightAxis; // 0x100
};

struct UParticleModuleParameterDynamic : UParticleModuleParameterBase {
	TArray<FEmitterDynamicParameter> DynamicParams; // 0x68
	int32_t UpdateFlags; // 0x78
	uint32_t bUsesVelocity : 1; // 0x7c
};

struct UGameplayEvents : UObject {
	FPointer Archive; // 0x60
	FString StatsFileName; // 0x68
	FGameplayEventsHeader Header; // 0x78
	FGameSessionInformation CurrentSessionInfo; // 0xa8
	TArray<FPlayerInformation> PlayerList; // 0x130
	TArray<FTeamInformation> TeamList; // 0x140
	TArray<FGameplayEventMetaData> SupportedEvents; // 0x150
	TArray<FWeaponClassEventData> WeaponClassArray; // 0x160
	TArray<FDamageClassEventData> DamageClassArray; // 0x170
	TArray<FProjectileClassEventData> ProjectileClassArray; // 0x180
	TArray<FPawnClassEventData> PawnClassArray; // 0x190
	TArray<FString> ActorArray; // 0x1a0
	TArray<FString> SoundCueArray; // 0x1b0
};

struct AWorldInfo : AZoneInfo {
	FPostProcessSettings DefaultPostProcessSettings; // 0x258
	ObjectProperty WorldPostProcessChain; // 0x3bc
	uint32_t bPersistPostProcessToNextLevel : 1; // 0x3c4
	uint32_t bFogEnabled : 1; // 0x3c4
	uint32_t bBumpOffsetEnabled : 1; // 0x3c4
	uint32_t bUseGammaCorrection : 1; // 0x3c4
	uint32_t bMapNeedsLightingFullyRebuilt : 1; // 0x3c4
	uint32_t bMapHasMultipleDominantLightsAffectingOnePrimitive : 1; // 0x3c4
	uint32_t bMapHasPathingErrors : 1; // 0x3c4
	uint32_t bRequestedBlockOnAsyncLoading : 1; // 0x3c4
	uint32_t bBegunPlay : 1; // 0x3c4
	uint32_t bPlayersOnly : 1; // 0x3c4
	uint32_t bPlayersOnlyPending : 1; // 0x3c4
	uint32_t bSuspendAI : 1; // 0x3c4
	uint32_t bDropDetail : 1; // 0x3c4
	uint32_t bAggressiveLOD : 1; // 0x3c4
	uint32_t bStartup : 1; // 0x3c4
	uint32_t bPathsRebuilt : 1; // 0x3c4
	uint32_t bHasPathNodes : 1; // 0x3c4
	uint32_t bIsMenuLevel : 1; // 0x3c4
	uint32_t bDebugPauseExecution : 1; // 0x3c4
	uint32_t bDebugStepExecution : 1; // 0x3c4
	uint32_t bUseConsoleInput : 1; // 0x3c4
	uint32_t bMinimizeBSPSections : 1; // 0x3c4
	uint32_t bNoDefaultInventoryForPlayer : 1; // 0x3c4
	uint32_t bNoPathWarnings : 1; // 0x3c4
	uint32_t bNoMobileMapWarnings : 1; // 0x3c4
	uint32_t bHighPriorityLoading : 1; // 0x3c4
	uint32_t bHighPriorityLoadingLocal : 1; // 0x3c4
	uint32_t bUseProcBuildingRulesetOverride : 1; // 0x3c4
	uint32_t bInteractiveMode : 1; // 0x3c4
	uint32_t bSupportDoubleBufferedPhysics : 1; // 0x3c4
	uint32_t bPhysicsIgnoreDeltaTime : 1; // 0x3c4
	uint32_t bEnableChanceOfPhysicsChunkOverride : 1; // 0x3c4
	uint32_t bLimitExplosionChunkSize : 1; // 0x3c8
	uint32_t bLimitDamageChunkSize : 1; // 0x3c8
	uint32_t bPrecomputeVisibility : 1; // 0x3c8
	uint32_t bIgnoreOcclusionQueries : 1; // 0x3c8
	uint32_t bPlaceCellsOnSurfaces : 1; // 0x3c8
	uint32_t bAllowTemporalAA : 1; // 0x3c8
	uint32_t bUseGlobalIllumination : 1; // 0x3c8
	uint32_t bForceNoPrecomputedLighting : 1; // 0x3c8
	uint32_t bHaveActiveCrowd : 1; // 0x3c8
	uint32_t bAllowHostMigration : 1; // 0x3c8
	uint32_t bGameplayFramePause : 1; // 0x3c8
	float SquintModeKernelSize; // 0x3cc
	ObjectProperty HighestPriorityPostProcessVolume; // 0x3d0
	FReverbSettings DefaultReverbSettings; // 0x3d8
	FInteriorSettings DefaultAmbientZoneSettings; // 0x3e8
	float FogStart; // 0x40c
	float FogEnd; // 0x410
	FColor FogColor; // 0x414
	float BumpEnd; // 0x418
	ObjectProperty HighestPriorityReverbVolume; // 0x41c
	TArray<ObjectProperty> MassiveLODOverrideVolumes; // 0x424
	TArray<ObjectProperty> PortalVolumes; // 0x434
	TArray<ObjectProperty> EnvironmentVolumes; // 0x444
	TArray<ObjectProperty> StreamingLevels; // 0x454
	FDouble LastTimeUnbuiltLightingWasEncountered; // 0x464
	float TimeDilation; // 0x46c
	float DemoPlayTimeDilation; // 0x470
	float TimeSeconds; // 0x474
	float RealTimeSeconds; // 0x478
	float AudioTimeSeconds; // 0x47c
	float DeltaSeconds; // 0x480
	float PauseDelay; // 0x484
	float RealTimeToUnPause; // 0x488
	ObjectProperty Pauser; // 0x48c
	ObjectProperty DefaultTexture; // 0x494
	ObjectProperty WireframeTexture; // 0x49c
	ObjectProperty WhiteSquareTexture; // 0x4a4
	ObjectProperty LargeVertex; // 0x4ac
	ObjectProperty BSPVertex; // 0x4b4
	TArray<FString> DeferredExecs; // 0x4bc
	ObjectProperty GRI; // 0x4cc
	ENetMode NetMode; // 0x4d4
	ETravelType NextTravelType; // 0x4d5
	EVisibilityAggressiveness VisibilityAggressiveness; // 0x4d6
	EPreferredLightmapType PreferredLightmapType; // 0x4d7
	ELightingBuildQuality LevelLightingQuality; // 0x4d8
	FString ComputerName; // 0x4dc
	FString EngineVersion; // 0x4ec
	FString MinNetVersion; // 0x4fc
	ObjectProperty Game; // 0x50c
	float StallZ; // 0x514
	float WorldGravityZ; // 0x518
	float DefaultGravityZ; // 0x51c
	float GlobalGravityZ; // 0x520
	float RBPhysicsGravityScaling; // 0x524
	ObjectProperty NavigationPointList; // 0x528
	ObjectProperty ControllerList; // 0x530
	ObjectProperty PawnList; // 0x538
	ObjectProperty CoverList; // 0x540
	ObjectProperty PylonList; // 0x548
	float MoveRepSize; // 0x550
	TArray<FNetViewer> ReplicationViewers; // 0x554
	FString NextURL; // 0x564
	float NextSwitchCountdown; // 0x574
	int32_t PackedLightAndShadowMapTextureSize; // 0x578
	FVector DefaultColorScale; // 0x57c
	AGameInfo* DefaultGameType; // 0x588
	TArray<AGameInfo*> GameTypesSupportedOnThisMap; // 0x590
	TArray<ObjectProperty> ClientDestroyedActorContent; // 0x5a0
	TArray<FName> PreparingLevelNames; // 0x5b0
	FName CommittedPersistentLevelName; // 0x5c0
	ObjectProperty PersistentMapForcedObjects; // 0x5c8
	ComponentProperty MusicComp; // 0x5d0
	FMusicTrackStruct CurrentMusicTrack; // 0x5d8
	FMusicTrackStruct ReplicatedMusicTrack; // 0x604
	FString Title; // 0x630
	FString Author; // 0x640
	ObjectProperty MyMapInfo; // 0x650
	FString EmitterPoolClassPath; // 0x658
	ObjectProperty MyEmitterPool; // 0x668
	FString DecalManagerClassPath; // 0x670
	ObjectProperty MyDecalManager; // 0x680
	FString FractureManagerClassPath; // 0x688
	ObjectProperty MyFractureManager; // 0x698
	FString ParticleEventManagerClassPath; // 0x6a0
	ObjectProperty MyParticleEventManager; // 0x6b0
	ObjectProperty ProcBuildingRulesetOverride; // 0x6b8
	int32_t SkelMeshCompTickTagCount; // 0x6c0
	float MaxPhysicsDeltaTime; // 0x6c4
	int32_t MaxPhysicsSubsteps; // 0x6c8
	FPhysXSceneProperties PhysicsProperties; // 0x6cc
	TArray<FCompartmentRunList> CompartmentRunFrames; // 0x708
	float DefaultSkinWidth; // 0x718
	float ApexLODResourceBudget; // 0x71c
	float ApexDestructionLODResourceValue; // 0x720
	float ApexClothingLODResourceValue; // 0x724
	FApexModuleDestructibleSettings DestructibleSettings; // 0x728
	ObjectProperty EmitterVertical; // 0x73c
	FPhysXVerticalProperties VerticalProperties; // 0x744
	TArray<FPointer> WorldAttractors; // 0x75c
	float ChanceOfPhysicsChunkOverride; // 0x76c
	float MaxExplosionChunkSize; // 0x770
	float MaxDamageChunkSize; // 0x774
	float FractureExplosionVelScale; // 0x778
	int32_t MaxNumFacturedChunksToSpawnInAFrame; // 0x77c
	int32_t NumFacturedChunksSpawnedThisFrame; // 0x780
	float FracturedMeshWeaponDamage; // 0x784
	int32_t VisibilityCellSize; // 0x788
	float CharacterLitIndirectBrightness; // 0x78c
	float CharacterLitIndirectContrastFactor; // 0x790
	float CharacterShadowedIndirectBrightness; // 0x794
	float CharacterShadowedIndirectContrastFactor; // 0x798
	float CharacterLightingContrastFactor; // 0x79c
	float CharacterLightingDesaturation; // 0x7a0
	int32_t CharacterLightEnvironment; // 0x7a4
	FCharacterLightmapInfo LowCharacterLightmapInfo; // 0x7a8
	FCharacterLightmapInfo HighCharacterLightmapInfo; // 0x7c0
	float FirstPersonLitIndirectBrightness; // 0x7d8
	float FirstPersonLitIndirectContrastFactor; // 0x7dc
	float FirstPersonShadowedIndirectBrightness; // 0x7e0
	float FirstPersonShadowedIndirectContrastFactor; // 0x7e4
	float FirstPersonLightingContrastFactor; // 0x7e8
	float FirstPersonLightingDesaturation; // 0x7ec
	FCharacterLightmapInfo LowFirstPersonLightmapInfo; // 0x7f0
	FCharacterLightmapInfo HighFirstPersonLightmapInfo; // 0x808
	ObjectProperty ImageReflectionEnvironmentTexture; // 0x820
	FLinearColor ImageReflectionEnvironmentColor; // 0x828
	float ImageReflectionEnvironmentRotation; // 0x838
	FMap_Mirror ScreenMessages; // 0x83c
	TArray<FScreenMessageString> PriorityScreenMessages; // 0x884
	FLightmassWorldInfoSettings LightmassSettings; // 0x894
	TMap<None, None> NavMeshPathConstraintCache; // 0x8ec
	TMap<None, None> NavMeshPathGoalEvaluatorCache; // 0x934
	ObjectProperty PopulationManager; // 0x97c
	FHostMigrationState PeerHostMigration; // 0x984
	float HostMigrationTimeout; // 0x9a4
	ObjectProperty FirstPhysicsVolume; // 0x9a8
	FLinearColor DecalShadowColor; // 0x9b0
	TArray<FWorldCube> WorldCubeList; // 0x9c0
	TArray<ObjectProperty> SplineActorList; // 0x9d0
	FLightmassCustomSettingInfo LowLightmass; // 0x9e0
	FLightmassCustomSettingInfo HighLightmass; // 0x9f8
	float OutsideColorAndOcclusionThreshold; // 0xa10
	float BokehColorAndOcclusionThreshold; // 0xa14
	float ScalarDifferenceThreshold; // 0xa18
	ObjectProperty CurrentMinimapActor; // 0xa1c
	ObjectProperty HighestPriorityLabelVolume; // 0xa24
	TArray<FTickableActors> TickableActorsArray; // 0xa2c
	TArray<FTickableActorList> TickableActorListArray; // 0xa3c
	ObjectProperty WorldStartCamera; // 0xa4c
};

struct UActorFactoryFogVolumeConstantDensityInfo : UActorFactory {
	ObjectProperty SelectedMaterial; // 0x9c
	uint32_t bNothingSelected : 1; // 0xa4
};

struct ACombatProj_SmokeGrenade : ACombatProj_Grenade {
	ObjectProperty SmokeTemplate; // 0x3f4
	ComponentProperty SmokePSC; // 0x3fc
	float SmokeDuration; // 0x404
	float VolumeHeight; // 0x408
	float VolumeRadius; // 0x40c
	ObjectProperty StartSound; // 0x410
	ObjectProperty SmokeLoopingSound; // 0x418
	ComponentProperty SmokeLoopingSoundCom; // 0x420
	uint32_t Is : 1; // 0x428
};

struct UPBRuleNodeLODQuad : UPBRuleNodeBase {
	float MassiveLODDistanceScale; // 0x70
};

struct ADroppedPickup : AActor {
	ObjectProperty Inventory; // 0x244
	AInventory* InventoryClass; // 0x24c
	ObjectProperty PickupCache; // 0x254
	uint32_t bFadeOut : 1; // 0x25c
	uint32_t bCheckObstaclesOnTouch : 1; // 0x25c
};

struct UCombatCommon_Command : UCombatCommon_Base {
	FString CommandList[0xe]; // 0xac
};

struct USeqAct_ProjAttack : USeqAct_Latent {
	ACombatProjectile* ProjectileClass; // 0x120
	float SpawnHegiht; // 0x128
	float RandomRadius; // 0x12c
	float InitDelay; // 0x130
	int32_t MaxSpawnCount; // 0x134
	ObjectProperty AimPS; // 0x138
	uint32_t bUseWarningMessage : 1; // 0x140
	ObjectProperty Instigator; // 0x144
	TArray<FVector> SpawnLocationList; // 0x14c
	TArray<FVector> DestinationList; // 0x15c
	TArray<FVector> AimPSLocList; // 0x16c
	int32_t ProjSpawnCount; // 0x17c
};

struct UCombatFrontEnd_Help : UCombatFrontEnd_Object {
	int32_t MaxSubTabNum; // 0xd0
	uint32_t bIsFirstOpen : 1; // 0xd4
	uint32_t FirstEverPlay : 1; // 0xd4
};

struct UCCSBTCombatThrowGrenade : UGripBTScriptBehavior {
	ObjectProperty CAIP; // 0xcc
	ObjectProperty CCSController; // 0xd4
	FRotator FireRor; // 0xdc
	ObjectProperty Target; // 0xe8
};

struct UCombatMatchroomAutoMatchingBase : UCombatMatchroomBase {
	int32_t RoomState_PracticeBtn_old; // 0x74
	int32_t MyState_PracticeBtn_old; // 0x78
};

struct UCombatEvolveGunGameScore : UCombatGameScore {
	int32_t DefaultEvolvePoint; // 0x60
	TArray<float> EvolvePointRatioByGradeUpper; // 0x64
	TArray<float> EvolvePointRatioByGradeLower; // 0x74
};

struct UCombatDataTableRefResultReward : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString ItemCodeName; // 0x70
	int32_t EffectType; // 0x80
	int32_t StringID; // 0x84
	int32_t SmallIconID; // 0x88
};

struct UApexDestructibleAsset : UApexAsset {
	FPointer MApexAsset; // 0x80
	TArray<ObjectProperty> Materials; // 0x88
	TArray<ObjectProperty> FractureMaterials; // 0x98
	ObjectProperty DefaultPhysMaterial; // 0xa8
	FPointer MDestructibleThumbnailComponent; // 0xb0
	uint32_t bHasUniqueAssetMaterialNames : 1; // 0xb8
	uint32_t bDynamic : 1; // 0xb8
	FString CrumbleEmitterName; // 0xbc
	FString DustEmitterName; // 0xcc
	FNxDestructibleParameters DestructibleParameters; // 0xdc
};

struct UUIDataStore_OnlineStats : UUIDataStore_Remote {
	TArray<UOnlineStatsRead*> StatsReadClasses; // 0x98
	FName StatsReadName; // 0xa8
	FPlayerNickMetaData PlayerNickData; // 0xb0
	FRankMetaData RankNameMetaData; // 0xc8
	FName TotalRowsName; // 0xe0
	TArray<ObjectProperty> StatsReadObjects; // 0xe8
	ObjectProperty StatsRead; // 0xf8
	EStatsFetchType CurrentReadType; // 0x100
	TScriptInterface<Class> StatsInterface; // 0x104
	TScriptInterface<Class> PlayerInterface; // 0x114
};

struct UInterpTrackInstEvent : UInterpTrackInst {
	float LastUpdatePosition; // 0x60
};

struct UCombatDataTableRefGameChannelProperty : UCombatDataTableType {
	FString GameChannel; // 0x6c
	int32_t DescriptionID; // 0x7c
};

struct UCombatArmsRaceMovie : UCombatTeamGameMovie {
	ObjectProperty LastTopPlayer[0x2]; // 0xad0
};

struct UMaterialExpressionLightmassReplace : UMaterialExpression {
	FExpressionInput Realtime; // 0xb0
	FExpressionInput Lightmass; // 0xe4
};

struct UMaterialExpressionAntialiasedTextureMask : UMaterialExpressionTextureSampleParameter2D {
	float Threshold; // 0x140
	ETextureColorChannel Channel; // 0x144
};

struct ALevelGridVolume : AVolume {
	FString LevelGridVolumeName; // 0x280
	LevelGridCellShape CellShape; // 0x290
	int32_t Subdivisions[0x3]; // 0x294
	float LoadingDistance; // 0x2a0
	float KeepLoadedRange; // 0x2a4
	FKConvexElem CellConvexElem; // 0x2a8
};

struct USeqAct_SetMesh : USequenceAction {
	ObjectProperty NewSkeletalMesh; // 0x108
	ObjectProperty NewStaticMesh; // 0x110
	EMeshType MeshType; // 0x118
	uint32_t bIsAllowedToMove : 1; // 0x11c
	uint32_t bAllowDecalsToReattach : 1; // 0x11c
};

struct UMaterialExpressionSphereMask : UMaterialExpression {
	FExpressionInput A; // 0xb0
	FExpressionInput B; // 0xe4
	FExpressionInput Radius; // 0x118
	FExpressionInput Hardness; // 0x14c
	float AttenuationRadius; // 0x180
	float HardnessPercent; // 0x184
};

struct UCombatUserInfoTransaction : UObject {
	int32_t ConnectTime; // 0x60
	int32_t Level; // 0x64
	int32_t LevelExp; // 0x68
	int32_t PlayTime; // 0x6c
	int32_t CallingCardID; // 0x70
	int32_t LastRank; // 0x74
	int32_t Rank; // 0x78
	int32_t EmblemID; // 0x7c
	int32_t ClanExp; // 0x80
	int32_t RankingPoint; // 0x84
	int32_t ClanColorID; // 0x88
	int32_t EmblemEdgeID; // 0x8c
	FString NickName; // 0x90
	FString ClanName; // 0xa0
	TMap<None, None> ModeStatListMap; // 0xb0
	FMatchHistoryInfo MatchHistoryList[0x9]; // 0xf8
	TMap<None, None> CompetitionListMap; // 0x2cc
};

struct UCombatStaticMeshManager : UObject {
	ObjectProperty CBGRI; // 0x60
	TArray<ObjectProperty> SMRIList; // 0x68
};

struct ACombatBusterGame : ACombatPVPGame {
	FObjectDestoryBounsInfo ObjectDestoryBouns; // 0x788
};

struct AAutoTestManager : AInfo {
	uint32_t bAutomatedPerfTesting : 1; // 0x244
	uint32_t bAutoContinueToNextRound : 1; // 0x244
	uint32_t bUsingAutomatedTestingMapList : 1; // 0x244
	uint32_t bAutomatedTestingWithOpen : 1; // 0x244
	uint32_t bExitOnCyclesComplete : 1; // 0x244
	uint32_t bCheckingForFragmentation : 1; // 0x244
	uint32_t bCheckingForMemLeaks : 1; // 0x244
	uint32_t bDoingASentinelRun : 1; // 0x244
	uint32_t bSentinelStreamingLevelStillLoading : 1; // 0x244
	int32_t AutomatedPerfRemainingTime; // 0x248
	int32_t AutomatedTestingMapIndex; // 0x24c
	TArray<FString> AutomatedMapTestingList; // 0x250
	int32_t NumAutomatedMapTestingCycles; // 0x260
	int32_t NumberOfMatchesPlayed; // 0x264
	int32_t NumMapListCyclesDone; // 0x268
	FString AutomatedTestingExecCommandToRunAtStartMatch; // 0x26c
	FString AutomatedMapTestingTransitionMap; // 0x27c
	FString SentinelTaskDescription; // 0x28c
	FString SentinelTaskParameter; // 0x29c
	FString SentinelTagDesc; // 0x2ac
	ObjectProperty SentinelPC; // 0x2bc
	TArray<FVector> SentinelTravelArray; // 0x2c4
	int32_t SentinelNavigationIdx; // 0x2d4
	int32_t SentinelIdx; // 0x2d8
	int32_t NumRotationsIncrement; // 0x2dc
	int32_t TravelPointsIncrement; // 0x2e0
	int32_t NumMinutesPerMap; // 0x2e4
	TArray<FString> CommandsToRunAtEachTravelTheWorldNode; // 0x2e8
	FString CommandStringToExec; // 0x2f8
};

struct UCombatInstanceItem : UObject {
	int32_t AmmorGrade; // 0x60
	FArmorPointStruct AP[0x12]; // 0x64
	int32_t APForExplosion; // 0x334
	float ShortenRespawnDelay; // 0x338
	float DamagedAccelerationRatio; // 0x33c
	float RankExpUpRatio; // 0x340
	FString HudIconName; // 0x344
	uint32_t PowerBullet : 1; // 0x354
	float GroundCrouchSpeedRate_Buff; // 0x358
	float GroundWalkingSpeedRate_Buff; // 0x35c
	float GroundRunSpeedRate_Buff; // 0x360
	float GroundAccelationRate_Buff; // 0x364
	UCombatItemFXBase* ItemFXClass; // 0x368
};

struct ULightmassLevelSettings : UObject {
	int32_t NumIndirectLightingBounces; // 0x60
	FColor EnvironmentColor; // 0x64
	float EnvironmentIntensity; // 0x68
	float EmissiveBoost; // 0x6c
	float DiffuseBoost; // 0x70
	float SpecularBoost; // 0x74
	uint32_t bUseAmbientOcclusion : 1; // 0x78
	uint32_t bVisualizeAmbientOcclusion : 1; // 0x78
	float DirectIlluminationOcclusionFraction; // 0x7c
	float IndirectIlluminationOcclusionFraction; // 0x80
	float OcclusionExponent; // 0x84
	float FullyOccludedSamplesFraction; // 0x88
	float MaxOcclusionDistance; // 0x8c
};

struct UCombatUIDataStore_StringAliasBindingMap : UUIDataStore_StringAliasMap {
	int32_t FakePlatform; // 0xf4
	FMap_Mirror CommandToBindNames; // 0xf8
	TArray<FControllerMap> ControllerMapArray; // 0x140
};

struct UInterpTrackEvent : UInterpTrack {
	TArray<FEventTrackKey> EventTrack; // 0xa0
	uint32_t bFireEventsWhenForwards : 1; // 0xb0
	uint32_t bFireEventsWhenBackwards : 1; // 0xb0
	uint32_t bFireEventsWhenJumpingForwards : 1; // 0xb0
};

struct UCombatGameMessage : UCombatLocalMessage {
	TArray<FName> RegisteredMessage; // 0x74
};

struct AAIDebugCameraController : ADebugCameraController {
	ObjectProperty AIManager; // 0x79c
	ObjectProperty SelectedPawn; // 0x7a4
	EAIDebugCameraType CameraType; // 0x7ac
	FName PCCameraType; // 0x7b0
	uint32_t bPressUp : 1; // 0x7b8
	uint32_t bPressDown : 1; // 0x7b8
	uint32_t bPressLeft : 1; // 0x7b8
	uint32_t bPressRight : 1; // 0x7b8
	FMatrix RelativeRotMat; // 0x7c0
	FVector RelativeLoc; // 0x800
	float RelativeDist; // 0x80c
	float RelativeDistZ; // 0x810
	FRotator RelativeRot; // 0x814
	TArray<FString> DebugCategories; // 0x820
};

struct ACombatWavePawn_JuggernautBase : ACombatWavePawnBase {
	uint32_t bUseChainSawEffect : 1; // 0x1238
};

struct UInterpTrackInstHeadTracking : UInterpTrackInst {
	EHeadTrackingAction Action; // 0x60
	TMap<None, None> CurrentActorMap; // 0x64
	ComponentProperty Mesh; // 0xac
	TArray<ObjectProperty> TrackControls; // 0xb4
	float LastUpdatePosition; // 0xc4
};

struct UCombatDataTableRefAchievement : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString CodeName; // 0x70
	FString Stat; // 0x80
	int32_t Type; // 0x90
	int32_t Activation; // 0x94
	int32_t Level; // 0x98
	int32_t RelativeGoal; // 0x9c
	int32_t Goal; // 0xa0
	int32_t Money; // 0xa4
	int32_t ExpPoint; // 0xa8
	int32_t AchievementPoint; // 0xac
	int32_t Param[0x3]; // 0xb0
	int32_t NameCode; // 0xbc
	int32_t Step; // 0xc0
	FString ImagePath; // 0xc4
	int32_t StatNumber; // 0xd4
};

struct ACBCheatManager : AGripCheatManager {
	ObjectProperty TableDepot; // 0x29c
	TArray<FDSConnectionDelayInfo> DSConnectionDelay; // 0x2a4
	float CameraRollSpeed; // 0x2b4
	float CameraRollAcceleration; // 0x2b8
	float CameraRollFriction; // 0x2bc
	float CurrentCamRollAcceleration; // 0x2c0
	float CurrentCamRollSpeed; // 0x2c4
	FFontRenderInfo FontInfo; // 0x2c8
	uint32_t bShowMyPawnAnimNodeSeq : 1; // 0x2f0
	uint32_t bShowOtherPawnAnimNodeSeq : 1; // 0x2f0
	uint32_t bShowDebugOtherPawn : 1; // 0x2f0
	uint32_t bShowWeaponAnimNodeSeq : 1; // 0x2f0
	uint32_t bShowWeapAttachAnimNodeSeq : 1; // 0x2f0
	uint32_t bShowFirstZoomAnimNodeSeq : 1; // 0x2f0
	uint32_t bShowPawnBuff : 1; // 0x2f0
	uint32_t bDisplayClassSystemLog : 1; // 0x2f0
	uint32_t bDebugSoundMode : 1; // 0x2f0
	uint32_t bScreenShotMode : 1; // 0x2f0
	uint32_t bSwitchObjectuse : 1; // 0x2f0
	uint32_t bWeaponAsyncLoadedActor : 1; // 0x2f0
	uint32_t bDrawArcAttackLine : 1; // 0x2f0
	FName PawnBoneName; // 0x2f4
	TArray<FName> CameraTypeList; // 0x2fc
	ACombatProj_ExplosiveBase* TestProjectileClass; // 0x30c
	float TestProjectileRadius; // 0x314
	float TestProjectileHeight; // 0x318
	char TestProjectileNum; // 0x31c
	char TestProjectileTeamNum; // 0x31d
	float TestProjectileDelay; // 0x320
	FVector TestProjectileDestination; // 0x324
	ObjectProperty StatUnitTest; // 0x330
	TArray<int32_t> MatchroomPlayMapList; // 0x338
};

struct UFracturedSkinnedMeshComponent : UFracturedBaseComponent {
	FPointer ComponentSkinResources; // 0x31c
	TArray<FMatrix> FragmentTransforms; // 0x324
	TArray<ComponentProperty> DependentComponents; // 0x334
	uint32_t bBecameVisible : 1; // 0x344
	uint32_t bFragmentTransformsChanged : 1; // 0x344
};

struct UOnlinePlaylistManager : UObject {
	FPointer VfTable_FTickableObject; // 0x60
	TArray<FPlaylist> Playlists; // 0x68
	TArray<FString> PlaylistFileNames; // 0x78
	TArray<FName> DatastoresToRefresh; // 0x88
	int32_t DownloadCount; // 0x98
	int32_t SuccessfulCount; // 0x9c
	int32_t VersionNumber; // 0xa0
	TArray<FPlaylistPopulation> PopulationData; // 0xa4
	int32_t WorldwideTotalPlayers; // 0xb4
	int32_t RegionTotalPlayers; // 0xb8
	TScriptInterface<Class> TitleFileInterface; // 0xbc
	FString PopulationFileName; // 0xcc
	float NextPlaylistPopulationUpdateTime; // 0xdc
	float PlaylistPopulationUpdateInterval; // 0xe0
	int32_t MinPlaylistIdToReport; // 0xe4
	int32_t CurrentPlaylistId; // 0xe8
	FName EventsInterfaceName; // 0xec
	int32_t DataCenterId; // 0xf4
	FString DataCenterFileName; // 0xf8
	float LastPlaylistDownloadTime; // 0x108
	float PlaylistRefreshInterval; // 0x10c
	DelegateProperty __OnReadPlaylistComplete__Delegate; // 0x110
	DelegateProperty __OnPlaylistPopulationDataUpdated__Delegate; // 0x120
};

struct USequenceAction : USequenceOp {
	FName HandlerName; // 0xec
	uint32_t bCallHandler : 1; // 0xf4
	TArray<ObjectProperty> Targets; // 0xf8
};

struct UCombatAIActionNode_MoveToward : UCombatAIActionNodeBase {
	uint32_t bIsWalking : 1; // 0xf4
};

struct ANxForceField : AActor {
	int32_t ExcludeChannel; // 0x244
	uint32_t bForceActive : 1; // 0x248
	FRBCollisionChannelContainer CollideWithChannels; // 0x24c
	ERBCollisionChannel RBChannel; // 0x250
	FPointer ForceField; // 0x254
	TArray<FPointer> ConvexMeshes; // 0x25c
	TArray<FPointer> ExclusionShapes; // 0x26c
	TArray<FPointer> ExclusionShapePoses; // 0x27c
	FPointer U2NRotation; // 0x28c
	int32_t SceneIndex; // 0x294
};

struct UMobileMenuBar : UMobileMenuObject {
	uint32_t bIsVertical : 1; // 0xdc
	uint32_t bDirty : 1; // 0xdc
	int32_t SelectedIndex; // 0xe0
	int32_t FirstItem; // 0xe4
	TArray<ObjectProperty> Items; // 0xe8
};

struct USeqAct_AIMoveToActor : USeqAct_Latent {
	uint32_t bPauseBT : 1; // 0x120
	uint32_t bInterruptable : 1; // 0x120
	uint32_t bPickClosest : 1; // 0x120
	TArray<ObjectProperty> Destination; // 0x124
	float MovementSpeedModifier; // 0x134
	ObjectProperty LookAt; // 0x138
	int32_t LastDestinationChoice; // 0x140
};

struct UCombatDataTableRefBGM : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString CodeName; // 0x70
	FString Country; // 0x80
	char SceneIndex; // 0x90
	char StartMonth; // 0x91
	char StartDate; // 0x92
	char EndMonth; // 0x93
	char EndDate; // 0x94
	FString BGMPath; // 0x98
};

struct UCombatAIActionNode_Roamming : UCombatAIActionNodeBase {
	uint32_t bIsWalking : 1; // 0xf4
	float MaxPathLength; // 0xf8
};

struct UCombatAccessory_Base : UCombatInstanceItem {
	ETuningCostumeSlot SlotNumber; // 0x370
	FAccessoryMeshInfo MeshInfo; // 0x374
	FName AttachSocketName; // 0x380
};

struct UInterpTrackInstMove : UInterpTrackInst {
	FVector ResetLocation; // 0x60
	FRotator ResetRotation; // 0x6c
	FMatrix InitialTM; // 0x80
	FQuat InitialQuat; // 0xc0
};

struct UCombatHUD_SelectSkillList : UCombatHUDEntity_Base {
	uint32_t bTryShowSkillList : 1; // 0xc0
	uint32_t binitCreateSkilldata : 1; // 0xc0
	int32_t CurrentGroupIndex; // 0xc4
	TArray<int32_t> UnlockAnimPlayedIndices; // 0xc8
};

struct UCombatFrontEnd_ToolTip : UCombatFrontEnd_Object {
	uint32_t bInitTooltipLocalization : 1; // 0xd0
	FString WeaponLocalizationInfos[0x6]; // 0xd4
	FString ClothesChipLocalizationInfos[0x14]; // 0x134
	FString html_br; // 0x274
	FString html_img; // 0x284
};

struct UConsole : UInteraction {
	ObjectProperty ConsoleTargetPlayer; // 0xb0
	ObjectProperty DefaultTexture_Black; // 0xb8
	ObjectProperty DefaultTexture_White; // 0xc0
	FName ConsoleKey; // 0xc8
	FName TypeKey; // 0xd0
	int32_t MaxScrollbackSize; // 0xd8
	TArray<FString> Scrollback; // 0xdc
	int32_t SBHead; // 0xec
	int32_t SBPos; // 0xf0
	int32_t HistoryTop; // 0xf4
	int32_t HistoryBot; // 0xf8
	int32_t HistoryCur; // 0xfc
	FString History[0x10]; // 0x100
	uint32_t bNavigatingHistory : 1; // 0x200
	uint32_t bCaptureKeyInput : 1; // 0x200
	uint32_t bCtrl : 1; // 0x200
	uint32_t bEnableUI : 1; // 0x200
	uint32_t bAutoCompleteLocked : 1; // 0x200
	uint32_t bRequireCtrlToNavigateAutoComplete : 1; // 0x200
	uint32_t bIsRuntimeAutoCompleteUpToDate : 1; // 0x200
	FString TypedStr; // 0x204
	int32_t TypedStrPos; // 0x214
	TArray<FAutoCompleteCommand> ManualAutoCompleteList; // 0x218
	TArray<FAutoCompleteCommand> AutoCompleteList; // 0x228
	int32_t AutoCompleteIndex; // 0x238
	FAutoCompleteNode AutoCompleteTree; // 0x23c
	TArray<int32_t> AutoCompleteIndices; // 0x260
};

struct UCombatUIDataProvider_MenuOption : UUIResourceDataProvider {
	TArray<FName> GameModeCodenameSet; // 0x94
	MATCHROOM_MODE_OPTION_TYPE OptionMarkUp; // 0xa4
	FName OptionType; // 0xa8
	FName UIType; // 0xb0
	FName UILocationType; // 0xb8
	FString IniName; // 0xc0
};

struct UMaterialExpressionSubtract : UMaterialExpression {
	FExpressionInput A; // 0xb0
	FExpressionInput B; // 0xe4
};

struct UCombatDataTableRefSeasonPass : UCombatDataTableType {
	int32_t Season; // 0x6c
	int32_t PassType; // 0x70
	int32_t Level; // 0x74
	int32_t Exp; // 0x78
	int32_t TotalExp; // 0x7c
	FString CodenameRewardFree; // 0x80
	FString CodenameRewardCharge; // 0x90
};

struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	uint32_t bIsLayerThumbnail : 1; // 0x2dc
	int32_t DataWeightmapIndex; // 0x2e0
	int32_t DataWeightmapSize; // 0x2e4
};

struct USeqEvent_HudRender : USequenceEvent {
	TArray<ObjectProperty> Targets; // 0x128
	uint32_t bIsActive : 1; // 0x138
	float AuthoredGlobalScale; // 0x13c
};

struct ADemoRecSpectator : ACombatPC {
	uint32_t bFindPlayer : 1; // 0xbe4
	uint32_t bLockRotationToViewTarget : 1; // 0xbe4
	uint32_t bAutoSwitchPlayers : 1; // 0xbe4
	ObjectProperty MyRealViewTarget; // 0xbe8
	ObjectProperty LastViewTargetPawn; // 0xbf0
	float AutoSwitchPlayerInterval; // 0xbf8
};

struct AGamePlayerCamera : ACamera {
	ObjectProperty ThirdPersonCam; // 0x594
	UGameCameraBase* ThirdPersonCameraClass; // 0x59c
	ObjectProperty FixedCam; // 0x5a4
	UGameCameraBase* FixedCameraClass; // 0x5ac
	ObjectProperty CurrentCamera; // 0x5b4
	uint32_t bUseForcedCamFOV : 1; // 0x5bc
	uint32_t bInterpolateCamChanges : 1; // 0x5bc
	uint32_t bResetInterp : 1; // 0x5bc
	float ForcedCamFOV; // 0x5c0
	ObjectProperty LastViewTarget; // 0x5c4
	float SplitScreenShakeScale; // 0x5cc
	ObjectProperty LastTargetBase; // 0x5d0
	FMatrix LastTargetBaseTM; // 0x5e0
};

struct AMobileDebugCameraController : ADebugCameraController {
	int32_t OldMobileGroup; // 0x79c
	ObjectProperty MPI; // 0x7a0
};

struct AGameCrowdDestination : AGameCrowdInteractionPoint {
	FPointer VfTable_IEditorLinkSelectionInterface; // 0x250
	uint32_t bKillWhenReached : 1; // 0x258
	uint32_t bAllowAsPreviousDestination : 1; // 0x258
	uint32_t bAvoidWhenPanicked : 1; // 0x258
	uint32_t bSkipBehaviorIfPanicked : 1; // 0x258
	uint32_t bFleeDestination : 1; // 0x258
	uint32_t bMustReachExactly : 1; // 0x258
	uint32_t bHasRestrictions : 1; // 0x258
	uint32_t bAllowsSpawning : 1; // 0x258
	uint32_t bAllowCloudSpawning : 1; // 0x258
	uint32_t bAllowVisibleSpawning : 1; // 0x258
	uint32_t bLineSpawner : 1; // 0x258
	uint32_t bSpawnAtEdge : 1; // 0x258
	uint32_t bSoftPerimeter : 1; // 0x258
	uint32_t bIsVisible : 1; // 0x258
	uint32_t bWillBeVisible : 1; // 0x258
	uint32_t bCanSpawnHereNow : 1; // 0x258
	uint32_t bIsBeyondSpawnDistance : 1; // 0x258
	uint32_t bAdjacentToVisibleNode : 1; // 0x258
	uint32_t bHasNavigationMesh : 1; // 0x258
	TArray<ObjectProperty> NextDestinations; // 0x25c
	ObjectProperty QueueHead; // 0x26c
	int32_t Capacity; // 0x274
	float Frequency; // 0x278
	int32_t CustomerCount; // 0x27c
	TArray<AGameCrowdAgent*> SupportedAgentClasses; // 0x280
	TArray<ObjectProperty> SupportedArchetypes; // 0x290
	TArray<AGameCrowdAgent*> RestrictedAgentClasses; // 0x2a0
	TArray<ObjectProperty> RestrictedArchetypes; // 0x2b0
	float ExactReachTolerance; // 0x2c0
	FName InteractionTag; // 0x2c4
	float InteractionDelay; // 0x2cc
	TArray<FBehaviorEntry> ReachedBehaviors; // 0x2d0
	ObjectProperty AgentEnRoute; // 0x2e0
	float Priority; // 0x2e8
	float LastSpawnTime; // 0x2ec
	ObjectProperty MyPopMgr; // 0x2f0
};

struct UInterpTrackInstTimeDilation : UInterpTrackInst {
	float OldTimeDilation; // 0x60
};

struct UCombatDataTableRefKillCombo : UCombatDataTableType {
	FString ModeCodeName; // 0x6c
	int32_t ComboTime; // 0x7c
	int32_t Count; // 0x80
	int32_t Description; // 0x84
	FString SoundCue; // 0x88
	int32_t BonusPoint; // 0x98
	int32_t ModeID; // 0x9c
};

struct UCombatHUD_Message_RoundOver : UCombatHUDEntity_Base {
	FString RoundWinLabel; // 0xc0
	FString RoundLoseLabel; // 0xd0
	FString MatchEndWinLabel; // 0xe0
	FString MatchEndLoseLabel; // 0xf0
	FString AISuccessLabel; // 0x100
	FString AIFailLabel; // 0x110
	FString AIPlayTimeLabel; // 0x120
	FString AIWaveLabel; // 0x130
	FString AIDefendMarkHpLabel; // 0x140
	FString AITeamScoreLabel; // 0x150
	int32_t RoundWinReasonLabelID; // 0x160
	int32_t RoundLoseReasonLabelID; // 0x164
	FString RoundWinReasonLabel; // 0x168
	FString RoundLoseReasonLabel; // 0x178
};

struct UAnimNodeAdditiveBlending : UAnimNodeBlend {
	uint32_t bPassThroughWhenNotRendered : 1; // 0x110
};

struct UCombatDecal : UDecalComponent {
	ObjectProperty MITV_Decal; // 0x3d0
	float MinExplosionThickness; // 0x3d8
};

struct UNxForceFieldGenericComponent : UNxForceFieldComponent {
	float RoughExtentX; // 0x2c0
	float RoughExtentY; // 0x2c4
	float RoughExtentZ; // 0x2c8
	FFG_ForceFieldCoordinates Coordinates; // 0x2cc
	FVector Constant; // 0x2d0
	FVector PositionMultiplierX; // 0x2dc
	FVector PositionMultiplierY; // 0x2e8
	FVector PositionMultiplierZ; // 0x2f4
	FVector PositionTarget; // 0x300
	FVector VelocityMultiplierX; // 0x30c
	FVector VelocityMultiplierY; // 0x318
	FVector VelocityMultiplierZ; // 0x324
	FVector VelocityTarget; // 0x330
	FVector Noise; // 0x33c
	FVector FalloffLinear; // 0x348
	FVector FalloffQuadratic; // 0x354
	float TorusRadius; // 0x360
	FPointer Kernel; // 0x364
};

struct ACombatBusterModePRI : ACombatPlayerReplicationInfo {
	WordProperty BusterDamage; // 0x520
	WordProperty LastBusterDamage; // 0x522
};

struct UGripBTScriptNode : UGripBTNode {
	ObjectProperty Owner; // 0xbc
	uint32_t ConditionCache : 1; // 0xc4
	int32_t NodeTitleOverride; // 0xc8
};

struct UPhysicalMaterial : UObject {
	int32_t MaterialIndex; // 0x60
	float Friction; // 0x64
	float Restitution; // 0x68
	uint32_t bForceConeFriction : 1; // 0x6c
	uint32_t bEnableAnisotropicFriction : 1; // 0x6c
	FVector AnisoFrictionDir; // 0x70
	float FrictionV; // 0x7c
	float Density; // 0x80
	float AngularDamping; // 0x84
	float LinearDamping; // 0x88
	float MagneticResponse; // 0x8c
	float WindResponse; // 0x90
	float ImpactThreshold; // 0x94
	float ImpactReFireDelay; // 0x98
	ObjectProperty ImpactEffect; // 0x9c
	ObjectProperty ImpactSound; // 0xa4
	float SlideThreshold; // 0xac
	float SlideReFireDelay; // 0xb0
	ObjectProperty SlideEffect; // 0xb4
	ObjectProperty SlideSound; // 0xbc
	ObjectProperty FractureSoundExplosion; // 0xc4
	ObjectProperty FractureSoundSingle; // 0xcc
	ObjectProperty Parent; // 0xd4
	ObjectProperty PhysicalMaterialProperty; // 0xdc
};

struct UCombatDataTableRefTodayGameBindMode : UCombatDataTableType {
	FString TodayGameCodeName; // 0x6c
	FString ModeCodeName; // 0x7c
	int32_t DisplaynameID; // 0x8c
	int32_t DisplayDescriptionID; // 0x90
	int32_t DisplayModeNameID; // 0x94
	int32_t DisplayThumbnailImageID; // 0x98
	int32_t BGThumbnailImageID; // 0x9c
	int32_t ModeThumbnailImageID; // 0xa0
};

struct AFogVolumeDensityInfo : AInfo {
	ComponentProperty DensityComponent; // 0x244
	ComponentProperty AutomaticMeshComponent; // 0x24c
	uint32_t bEnabled : 1; // 0x254
};

struct UFogVolumeLinearHalfspaceDensityComponent : UFogVolumeDensityComponent {
	float PlaneDistanceFactor; // 0xd4
	FPlane HalfspacePlane; // 0xe0
};

struct UCameraAnim : UObject {
	ObjectProperty CameraInterpGroup; // 0x60
	float AnimLength; // 0x68
	FBox BoundingBox; // 0x6c
	FPostProcessSettings BasePPSettings; // 0x88
	float BasePPSettingsAlpha; // 0x1ec
	float BaseFOV; // 0x1f0
};

struct UDistributionVectorUniformRange : UDistributionVector {
	FVector MaxHigh; // 0x7c
	FVector MaxLow; // 0x88
	FVector MinHigh; // 0x94
	FVector MinLow; // 0xa0
};

struct UMobileMenuInventory : UMobileMenuObject {
	TArray<ObjectProperty> Slots; // 0xdc
	TArray<ObjectProperty> Items; // 0xec
	float SideLeewayPercent; // 0xfc
	FRenderElementInfo CurrentElement; // 0x100
	FDragElementInfo Drag; // 0x108
	FVector2D ScaleSize; // 0x130
	uint32_t bRenderDragItem : 1; // 0x138
	DelegateProperty __OnUpdateItemInSlot__Delegate; // 0x13c
	DelegateProperty __DoCanPutItemInSlot__Delegate; // 0x14c
	DelegateProperty __OnUpdateDrag__Delegate; // 0x15c
};

struct UMaterialExpressionConstant : UMaterialExpression {
	float R; // 0xb0
};

struct AInteractiveFoliageActor : AStaticMeshActor {
	ComponentProperty CylinderComponent; // 0x250
	FVector TouchingActorEntryPosition; // 0x258
	FVector FoliageVelocity; // 0x264
	FVector FoliageForce; // 0x270
	FVector FoliagePosition; // 0x27c
	float FoliageDamageImpulseScale; // 0x288
	float FoliageTouchImpulseScale; // 0x28c
	float FoliageStiffness; // 0x290
	float FoliageStiffnessQuadratic; // 0x294
	float FoliageDamping; // 0x298
	float MaxDamageImpulse; // 0x29c
	float MaxTouchImpulse; // 0x2a0
	float MaxForce; // 0x2a4
	float Mass; // 0x2a8
};

struct UHttpFactory : UObject {
	FString HttpRequestClassName; // 0x60
};

struct UCombatFrontEnd_MedalShop : UCombatFrontEnd_BaseShop {
	int32_t EndRemainTime[0x3]; // 0x1fc
};

struct UCombatFrontEnd_MatchMember : UCombatFrontEnd_Object {
	int32_t MatchroomNumber; // 0xd0
	int32_t X; // 0xd4
	int32_t Y; // 0xd8
};

struct ABlockingVolume : AVolume {
	uint32_t bBlockCamera : 1; // 0x280
};

struct UMaterialInterface : USurface {
	FRenderCommandFence_Mirror ParentRefFence; // 0x60
	FLightmassMaterialInterfaceSettings LightmassSettings; // 0x64
	uint32_t bHasQualitySwitch : 1; // 0x80
	uint32_t bAutoFlattenMobile : 1; // 0x80
	uint32_t bAutoFlattenMobileNormalTexture : 1; // 0x80
	uint32_t bMobileAllowFog : 1; // 0x80
	uint32_t bGenerateSubUV : 1; // 0x80
	uint32_t bUseMobileSpecular : 1; // 0x80
	uint32_t bUseMobileVertexSpecular : 1; // 0x80
	uint32_t bUseMobilePixelSpecular : 1; // 0x80
	uint32_t bUseMobileBumpOffset : 1; // 0x80
	uint32_t bLockColorBlending : 1; // 0x80
	uint32_t bUseMobileUniformColorMultiply : 1; // 0x80
	uint32_t bUseMobileVertexColorMultiply : 1; // 0x80
	uint32_t bUseMobileDetailNormal : 1; // 0x80
	uint32_t bBaseTextureTransformed : 1; // 0x80
	uint32_t bEmissiveTextureTransformed : 1; // 0x80
	uint32_t bNormalTextureTransformed : 1; // 0x80
	uint32_t bMaskTextureTransformed : 1; // 0x80
	uint32_t bDetailTextureTransformed : 1; // 0x80
	uint32_t bUseMobileWaveVertexMovement : 1; // 0x80
	uint32_t bMobileEnableBounceLight : 1; // 0x80
	FColor FlattenBackgroundColor; // 0x84
	ObjectProperty MobileBaseTexture; // 0x88
	ObjectProperty FlattenedTexture; // 0x90
	EMobileTexCoordsSource MobileBaseTextureTexCoordsSource; // 0x98
	EMobileAmbientOcclusionSource MobileAmbientOcclusionSource; // 0x99
	EMobileSpecularMask MobileSpecularMask; // 0x9a
	EMobileEmissiveColorSource MobileEmissiveColorSource; // 0x9b
	EMobileValueSource MobileEmissiveMaskSource; // 0x9c
	EMobileValueSource MobileEnvironmentMaskSource; // 0x9d
	EMobileEnvironmentBlendMode MobileEnvironmentBlendMode; // 0x9e
	EMobileValueSource MobileRimLightingMaskSource; // 0x9f
	EMobileTexCoordsSource MobileMaskTextureTexCoordsSource; // 0xa0
	EMobileAlphaValueSource MobileAlphaValueSource; // 0xa1
	EMobileTexCoordsSource MobileDetailTextureTexCoordsSource; // 0xa2
	EMobileTextureBlendFactorSource MobileTextureBlendFactorSource; // 0xa3
	EMobileColorMultiplySource MobileColorMultiplySource; // 0xa4
	ObjectProperty MobileNormalTexture; // 0xa8
	float SubUVFrameRate; // 0xb0
	int32_t SubUVFrameCountAlongAxes; // 0xb4
	float SubUVFrameSize; // 0xb8
	FLinearColor MobileSpecularColor; // 0xbc
	float MobileSpecularPower; // 0xcc
	ObjectProperty MobileEmissiveTexture; // 0xd0
	FLinearColor MobileEmissiveColor; // 0xd8
	ObjectProperty MobileEnvironmentTexture; // 0xe8
	float MobileEnvironmentAmount; // 0xf0
	FLinearColor MobileEnvironmentColor; // 0xf4
	float MobileEnvironmentFresnelAmount; // 0x104
	float MobileEnvironmentFresnelExponent; // 0x108
	float MobileRimLightingStrength; // 0x10c
	float MobileRimLightingExponent; // 0x110
	FLinearColor MobileRimLightingColor; // 0x114
	float MobileBumpOffsetReferencePlane; // 0x124
	float MobileBumpOffsetHeightRatio; // 0x128
	ObjectProperty MobileMaskTexture; // 0x12c
	float MobileOpacityMultiplier; // 0x134
	ObjectProperty MobileDetailTexture; // 0x138
	ObjectProperty MobileDetailTexture2; // 0x140
	ObjectProperty MobileDetailTexture3; // 0x148
	FLinearColor DefaultUniformColor; // 0x150
	FLinearColor MobileDefaultUniformColor; // 0x160
	float TransformCenterX; // 0x170
	float MobileTransformCenterX; // 0x174
	float TransformCenterY; // 0x178
	float MobileTransformCenterY; // 0x17c
	float PannerSpeedX; // 0x180
	float MobilePannerSpeedX; // 0x184
	float PannerSpeedY; // 0x188
	float MobilePannerSpeedY; // 0x18c
	float RotateSpeed; // 0x190
	float MobileRotateSpeed; // 0x194
	float FixedScaleX; // 0x198
	float MobileFixedScaleX; // 0x19c
	float FixedScaleY; // 0x1a0
	float MobileFixedScaleY; // 0x1a4
	float SineScaleX; // 0x1a8
	float MobileSineScaleX; // 0x1ac
	float SineScaleY; // 0x1b0
	float MobileSineScaleY; // 0x1b4
	float SineScaleFrequencyMultipler; // 0x1b8
	float MobileSineScaleFrequencyMultipler; // 0x1bc
	float FixedOffsetX; // 0x1c0
	float MobileFixedOffsetX; // 0x1c4
	float FixedOffsetY; // 0x1c8
	float MobileFixedOffsetY; // 0x1cc
	float MobileTangentVertexFrequencyMultiplier; // 0x1d0
	float MobileVerticalFrequencyMultiplier; // 0x1d4
	float MobileMaxVertexMovementAmplitude; // 0x1d8
	float MobileSwayFrequencyMultiplier; // 0x1dc
	float MobileSwayMaxAngle; // 0x1e0
	FVector MobileDirectionalLightDirection; // 0x1e4
	float MobileDirectionalLightBrightness; // 0x1f0
	FColor MobileDirectionalLightColor; // 0x1f4
	FVector MobileBounceLightDirection; // 0x1f8
	float MobileBounceLightBrightness; // 0x204
	FColor MobileBounceLightColor; // 0x208
	float MobileSkyLightBrightness; // 0x20c
	FColor MobileSkyLightColor; // 0x210
};

struct UEngine : USubsystem {
	ObjectProperty TinyFont; // 0x68
	FString TinyFontName; // 0x70
	ObjectProperty SmallFont; // 0x80
	FString SmallFontName; // 0x88
	ObjectProperty MediumFont; // 0x98
	FString MediumFontName; // 0xa0
	ObjectProperty LargeFont; // 0xb0
	FString LargeFontName; // 0xb8
	ObjectProperty SubtitleFont; // 0xc8
	FString SubtitleFontName; // 0xd0
	TArray<ObjectProperty> AdditionalFonts; // 0xe0
	TArray<FString> AdditionalFontNames; // 0xf0
	UConsole* ConsoleClass; // 0x100
	FString ConsoleClassName; // 0x108
	UGameViewportClient* GameViewportClientClass; // 0x118
	FString GameViewportClientClassName; // 0x120
	UDataStoreClient* DataStoreClientClass; // 0x130
	FString DataStoreClientClassName; // 0x138
	ULocalPlayer* LocalPlayerClass; // 0x148
	FString LocalPlayerClassName; // 0x150
	ObjectProperty DefaultMaterial; // 0x160
	FString DefaultMaterialName; // 0x168
	ObjectProperty DefaultDecalMaterial; // 0x178
	FString DefaultDecalMaterialName; // 0x180
	ObjectProperty DefaultTexture; // 0x190
	FString DefaultTextureName; // 0x198
	ObjectProperty WireframeMaterial; // 0x1a8
	FString WireframeMaterialName; // 0x1b0
	ObjectProperty EmissiveTexturedMaterial; // 0x1c0
	FString EmissiveTexturedMaterialName; // 0x1c8
	ObjectProperty GeomMaterial; // 0x1d8
	FString GeomMaterialName; // 0x1e0
	ObjectProperty DefaultFogVolumeMaterial; // 0x1f0
	FString DefaultFogVolumeMaterialName; // 0x1f8
	ObjectProperty TickMaterial; // 0x208
	FString TickMaterialName; // 0x210
	ObjectProperty CrossMaterial; // 0x220
	FString CrossMaterialName; // 0x228
	ObjectProperty LevelColorationLitMaterial; // 0x238
	FString LevelColorationLitMaterialName; // 0x240
	ObjectProperty LevelColorationUnlitMaterial; // 0x250
	FString LevelColorationUnlitMaterialName; // 0x258
	ObjectProperty LightingTexelDensityMaterial; // 0x268
	FString LightingTexelDensityName; // 0x270
	ObjectProperty LevelMipmapMaterial; // 0x280
	FString LevelMipmapName; // 0x288
	ObjectProperty ShadedLevelColorationLitMaterial; // 0x298
	FString ShadedLevelColorationLitMaterialName; // 0x2a0
	ObjectProperty ShadedLevelColorationUnlitMaterial; // 0x2b0
	FString ShadedLevelColorationUnlitMaterialName; // 0x2b8
	ObjectProperty RemoveSurfaceMaterial; // 0x2c8
	FString RemoveSurfaceMaterialName; // 0x2d0
	ObjectProperty VertexColorMaterial; // 0x2e0
	FString VertexColorMaterialName; // 0x2e8
	ObjectProperty VertexColorViewModeMaterial_ColorOnly; // 0x2f8
	FString VertexColorViewModeMaterialName_ColorOnly; // 0x300
	ObjectProperty VertexColorViewModeMaterial_AlphaAsColor; // 0x310
	FString VertexColorViewModeMaterialName_AlphaAsColor; // 0x318
	ObjectProperty VertexColorViewModeMaterial_RedOnly; // 0x328
	FString VertexColorViewModeMaterialName_RedOnly; // 0x330
	ObjectProperty VertexColorViewModeMaterial_GreenOnly; // 0x340
	FString VertexColorViewModeMaterialName_GreenOnly; // 0x348
	ObjectProperty VertexColorViewModeMaterial_BlueOnly; // 0x358
	FString VertexColorViewModeMaterialName_BlueOnly; // 0x360
	ObjectProperty HeatmapMaterial; // 0x370
	FString HeatmapMaterialName; // 0x378
	ObjectProperty BoneWeightMaterial; // 0x388
	FString BoneWeightMaterialName; // 0x390
	ObjectProperty TangentColorMaterial; // 0x3a0
	FString TangentColorMaterialName; // 0x3a8
	ObjectProperty MobileEmulationMasterMaterial; // 0x3b8
	FString MobileEmulationMasterMaterialName; // 0x3c0
	ObjectProperty ProcBuildingSimpleMaterial; // 0x3d0
	FString ProcBuildingSimpleMaterialName; // 0x3d8
	ObjectProperty BuildingQuadStaticMesh; // 0x3e8
	FString BuildingQuadStaticMeshName; // 0x3f0
	float ProcBuildingLODColorTexelsPerWorldUnit; // 0x400
	float ProcBuildingLODLightingTexelsPerWorldUnit; // 0x404
	int32_t MaxProcBuildingLODColorTextureSize; // 0x408
	int32_t MaxProcBuildingLODLightingTextureSize; // 0x40c
	uint32_t UseProcBuildingLODTextureCropping : 1; // 0x410
	uint32_t ForcePowerOfTwoProcBuildingLODTextures : 1; // 0x410
	uint32_t bCombineSimilarMappings : 1; // 0x410
	uint32_t bRenderLightMapDensityGrayscale : 1; // 0x410
	uint32_t bUseSound : 1; // 0x410
	uint32_t bUseBackgroundLevelStreaming : 1; // 0x410
	uint32_t bSubtitlesEnabled : 1; // 0x410
	uint32_t bSubtitlesForcedOff : 1; // 0x410
	uint32_t bSmoothFrameRate : 1; // 0x410
	uint32_t bCheckForMultiplePawnsSpawnedInAFrame : 1; // 0x410
	uint32_t bShouldGenerateSimpleLightmaps : 1; // 0x410
	uint32_t bForceStaticTerrain : 1; // 0x410
	uint32_t bForceCPUSkinning : 1; // 0x410
	uint32_t bUsePostProcessEffects : 1; // 0x410
	uint32_t bOnScreenKismetWarnings : 1; // 0x410
	uint32_t bEnableKismetLogging : 1; // 0x410
	uint32_t bAllowMatureLanguage : 1; // 0x410
	uint32_t bDisablePhysXHardwareSupport : 1; // 0x410
	uint32_t bPauseOnLossOfFocus : 1; // 0x410
	uint32_t bCheckParticleRenderSize : 1; // 0x410
	uint32_t bEnableColorClear : 1; // 0x410
	uint32_t bAreConstraintsDirty : 1; // 0x410
	uint32_t bHasPendingGlobalReattach : 1; // 0x410
	uint32_t bEnableOnScreenDebugMessages : 1; // 0x410
	uint32_t bEnableOnScreenDebugMessagesDisplay : 1; // 0x410
	uint32_t bSuppressMapWarnings : 1; // 0x410
	uint32_t bCookSeparateSharedMPGameContent : 1; // 0x410
	uint32_t bUseRecastNavMesh : 1; // 0x410
	uint32_t bDisableAILogging : 1; // 0x410
	uint32_t bUseNormalMapsForSimpleLightMaps : 1; // 0x410
	uint32_t bStartWithMatineeCapture : 1; // 0x410
	uint32_t bCompressMatineeCapture : 1; // 0x410
	uint32_t bUseLagarithCodec : 1; // 0x414
	uint32_t bLockReadOnlyLevels : 1; // 0x414
	uint32_t bUseRelevantDelay : 1; // 0x414
	uint32_t bShaderDebugDump : 1; // 0x414
	float MaxRMSDForCombiningMappings; // 0x418
	int32_t ImageReflectionTextureSize; // 0x41c
	FLinearColor LightingOnlyBrightness; // 0x420
	TArray<FColor> LightComplexityColors; // 0x430
	TArray<FLinearColor> ShaderComplexityColors; // 0x440
	float MaxPixelShaderAdditiveComplexityCount; // 0x450
	float MinTextureDensity; // 0x454
	float IdealTextureDensity; // 0x458
	float MaxTextureDensity; // 0x45c
	float MinLightMapDensity; // 0x460
	float IdealLightMapDensity; // 0x464
	float MaxLightMapDensity; // 0x468
	float RenderLightMapDensityGrayscaleScale; // 0x46c
	float RenderLightMapDensityColorScale; // 0x470
	FLinearColor LightMapDensityVertexMappedColor; // 0x474
	FLinearColor LightMapDensitySelectedColor; // 0x484
	TArray<FStatColorMapping> StatColorMappings; // 0x494
	ObjectProperty EditorBrushMaterial; // 0x4a4
	FString EditorBrushMaterialName; // 0x4ac
	ObjectProperty DefaultPhysMaterial; // 0x4bc
	FString DefaultPhysMaterialName; // 0x4c4
	ObjectProperty LandscapeHolePhysMaterial; // 0x4d4
	FString LandscapeHolePhysMaterialName; // 0x4dc
	ObjectProperty ApexDamageParams; // 0x4ec
	FString ApexDamageParamsName; // 0x4f4
	ObjectProperty TerrainErrorMaterial; // 0x504
	FString TerrainErrorMaterialName; // 0x50c
	int32_t TerrainMaterialMaxTextureCount; // 0x51c
	int32_t TerrainTessellationCheckCount; // 0x520
	float TerrainTessellationCheckDistance; // 0x524
	UOnlineSubsystem* OnlineSubsystemClass; // 0x528
	FString DefaultOnlineSubsystemName; // 0x530
	ObjectProperty DefaultPostProcess; // 0x540
	FString DefaultPostProcessName; // 0x548
	ObjectProperty ThumbnailSkeletalMeshPostProcess; // 0x558
	FString ThumbnailSkeletalMeshPostProcessName; // 0x560
	ObjectProperty ThumbnailParticleSystemPostProcess; // 0x570
	FString ThumbnailParticleSystemPostProcessName; // 0x578
	ObjectProperty ThumbnailMaterialPostProcess; // 0x588
	FString ThumbnailMaterialPostProcessName; // 0x590
	ObjectProperty DefaultUIScenePostProcess; // 0x5a0
	FString DefaultUIScenePostProcessName; // 0x5a8
	ObjectProperty DefaultUICaretMaterial; // 0x5b8
	FString DefaultUICaretMaterialName; // 0x5c0
	ObjectProperty SceneCaptureReflectActorMaterial; // 0x5d0
	FString SceneCaptureReflectActorMaterialName; // 0x5d8
	ObjectProperty SceneCaptureCubeActorMaterial; // 0x5e8
	FString SceneCaptureCubeActorMaterialName; // 0x5f0
	ObjectProperty ScreenDoorNoiseTexture; // 0x600
	FString ScreenDoorNoiseTextureName; // 0x608
	ObjectProperty ImageGrainNoiseTexture; // 0x618
	FString ImageGrainNoiseTextureName; // 0x620
	ObjectProperty RandomAngleTexture; // 0x630
	FString RandomAngleTextureName; // 0x638
	ObjectProperty RandomNormalTexture; // 0x648
	FString RandomNormalTextureName; // 0x650
	ObjectProperty RandomMirrorDiscTexture; // 0x660
	FString RandomMirrorDiscTextureName; // 0x668
	ObjectProperty WeightMapPlaceholderTexture; // 0x678
	FString WeightMapPlaceholderTextureName; // 0x680
	ObjectProperty LightMapDensityTexture; // 0x690
	FString LightMapDensityTextureName; // 0x698
	ObjectProperty TextureMipmapTexture; // 0x6a8
	FString TextureMipmapTextureName; // 0x6b0
	ObjectProperty LightMapDensityNormal; // 0x6c0
	FString LightMapDensityNormalName; // 0x6c8
	ObjectProperty SMAASearchTexture; // 0x6d8
	FString SMAASearchTextureName; // 0x6e0
	ObjectProperty SMAAAreaTexture; // 0x6f0
	FString SMAAAreaTextureName; // 0x6f8
	ObjectProperty DefaultSound; // 0x708
	FString DefaultSoundName; // 0x710
	float TimeBetweenPurgingPendingKillObjects; // 0x720
	int32_t GarbageLimitMemorySize; // 0x724
	FString GarbageLimitMemorySize_x64; // 0x728
	float LoadObjAsyncDelayTimeForIntruder; // 0x738
	ObjectProperty Client; // 0x73c
	TArray<ObjectProperty> GamePlayers; // 0x744
	ObjectProperty GameViewport; // 0x754
	TArray<FString> DeferredCommands; // 0x75c
	int32_t TickCycles; // 0x76c
	int32_t GameCycles; // 0x770
	int32_t ClientCycles; // 0x774
	float MaxSmoothedFrameRate; // 0x778
	float MinSmoothedFrameRate; // 0x77c
	int32_t NumPawnsAllowedToBeSpawnedInAFrame; // 0x780
	FPointer RemoteControlExec; // 0x784
	FPointer MobileMaterialEmulator; // 0x78c
	FColor C_WorldBox; // 0x794
	FColor C_BrushWire; // 0x798
	FColor C_AddWire; // 0x79c
	FColor C_SubtractWire; // 0x7a0
	FColor C_SemiSolidWire; // 0x7a4
	FColor C_NonSolidWire; // 0x7a8
	FColor C_WireBackground; // 0x7ac
	FColor C_ScaleBoxHi; // 0x7b0
	FColor C_VolumeCollision; // 0x7b4
	FColor C_BSPCollision; // 0x7b8
	FColor C_OrthoBackground; // 0x7bc
	FColor C_Volume; // 0x7c0
	FColor C_BrushShape; // 0x7c4
	float StreamingDistanceFactor; // 0x7c8
	FString ScoutClassName; // 0x7cc
	ETransitionType TransitionType; // 0x7dc
	LUT_STATE LUTState; // 0x7dd
	FString TransitionDescription; // 0x7e0
	FString TransitionGameType; // 0x7f0
	float MeshLODRange; // 0x800
	float CameraRotationThreshold; // 0x804
	float CameraTranslationThreshold; // 0x808
	float PrimitiveProbablyVisibleTime; // 0x80c
	float PercentUnoccludedRequeries; // 0x810
	float MaxOcclusionPixelsFraction; // 0x814
	int32_t MaxFluidNumVerts; // 0x818
	float FluidSimulationTimeLimit; // 0x81c
	int32_t MaxParticleResize; // 0x820
	int32_t MaxParticleResizeWarn; // 0x824
	int32_t MaxParticleVertexMemory; // 0x828
	int32_t MaxParticleSpriteCount; // 0x82c
	int32_t MaxParticleSubUVCount; // 0x830
	int32_t BeginUPTryCount; // 0x834
	TArray<FDropNoteInfo> PendingDroppedNotes; // 0x838
	FString DynamicCoverMeshComponentName; // 0x848
	float NetClientTicksPerSecond; // 0x858
	float MaxTrackedOcclusionIncrement; // 0x85c
	float TrackedOcclusionStepSize; // 0x860
	FLinearColor DefaultSelectedMaterialColor; // 0x864
	FLinearColor DefaultHoveredMaterialColor; // 0x874
	FLinearColor SelectedMaterialColor; // 0x884
	FLinearColor UnselectedMaterialColor; // 0x894
	TArray<FName> IgnoreSimulatedFuncWarnings; // 0x8a4
	int32_t ScreenSaverInhibitorSemaphore; // 0x8b4
	FPointer ScreenSaverInhibitor; // 0x8b8
	ObjectProperty GlobalTranslationContext; // 0x8c0
	FDouble LoadingMovieStartTime; // 0x8c8
	FString MatineeCaptureName; // 0x8d0
	FString MatineePackageCaptureName; // 0x8e0
	FString VisibleLevelsForMatineeCapture; // 0x8f0
	int32_t MatineeCaptureFPS; // 0x900
	int32_t MatineeCaptureType; // 0x904
	FLinearColor RimShader_Color; // 0x908
	float RimShader_InterpolationDuration; // 0x918
	TArray<FString> PresetLUT; // 0x91c
	ObjectProperty PresetLUTTexture; // 0x92c
	ObjectProperty OldPresetLUTTexture; // 0x934
	FString GrayLUT; // 0x93c
	ObjectProperty GrayLUTTexture; // 0x94c
	FString MatchWinLUT; // 0x954
	ObjectProperty MatchWinLUTTexture; // 0x964
	FString MatchLoseLUT; // 0x96c
	ObjectProperty MatchLoseLUTTexture; // 0x97c
	ObjectProperty CurrentLUTTexture; // 0x984
	float LUT_FadeIn_Time; // 0x98c
	float LUT_FadeOut_Time; // 0x990
	float LUT_Duration_Time; // 0x994
	int32_t GoreLevel; // 0x998
	TArray<int32_t> BucketScore; // 0x99c
	TArray<int32_t> VRAMQuantity; // 0x9ac
};

struct UAnimationCompressionAlgorithm : UObject {
	uint32_t ApplyChanges : 1; // 0x60
	uint32_t bNeedsSkeleton : 1; // 0x60
	FString Description; // 0x64
	AnimationCompressionFormat TranslationCompressionFormat; // 0x74
	AnimationCompressionFormat RotationCompressionFormat; // 0x75
};

struct UCombatFrontEndMoviePlayer : UCombatGFxMoviePlayer {
	ObjectProperty CurrentGI; // 0x308
	ObjectProperty FrontEndScenes[0x18]; // 0x310
	ObjectProperty CurrentScene; // 0x3d0
	ObjectProperty DashboardClass; // 0x3d8
	ObjectProperty ChatClass; // 0x3e0
	ObjectProperty MessengerClass; // 0x3e8
	ObjectProperty BuyItemClass; // 0x3f0
	ObjectProperty ItemSellPopupClass; // 0x3f8
	ObjectProperty QuickStartClass; // 0x400
	ObjectProperty UserInfoClass; // 0x408
	ObjectProperty CallingCardClass; // 0x410
	ObjectProperty HelpClass; // 0x418
	ObjectProperty AwaitListClass; // 0x420
	ObjectProperty RepurchaseClass; // 0x428
	ObjectProperty ExchangepopupClass; // 0x430
	ObjectProperty RandomBoxPickUpClass; // 0x438
	ObjectProperty ClausePopupClass; // 0x440
	ObjectProperty ChangePropernounPopup; // 0x448
	ObjectProperty AccessTermsClass; // 0x450
	ObjectProperty AttendanceEventPopupClass; // 0x458
	ObjectProperty RandomBoxShopBuyPopupClass; // 0x460
	ObjectProperty RotationInfoPopupClass; // 0x468
	ObjectProperty CompetitiveRewardInfoPopupClass; // 0x470
	ObjectProperty SpecialGoodsInfoPopupClass; // 0x478
	ObjectProperty ExtendPeriodItemPopupClass; // 0x480
	ObjectProperty SeasonPassPopupClass; // 0x488
	ObjectProperty LoginOTPClass; // 0x490
	ObjectProperty ClanInfoChangePopup; // 0x498
	ObjectProperty ClanRewardInfoPopup; // 0x4a0
	ObjectProperty WeaponTuningPopup; // 0x4a8
	ObjectProperty SortClass; // 0x4b0
	uint32_t bAllFlashLoaded : 1; // 0x4b8
	uint32_t bBuyItemTryPayment : 1; // 0x4b8
	uint32_t bIgnorePressEvent : 1; // 0x4b8
	uint32_t bPlayBGM : 1; // 0x4b8
	uint32_t bDisplayedShowRoom : 1; // 0x4b8
	uint32_t bIsOpenRandomBox : 1; // 0x4b8
	int32_t InviteDialogID; // 0x4bc
	TArray<ObjectProperty> PopupList; // 0x4c0
	ObjectProperty UIDataStore_Mission; // 0x4d0
	ObjectProperty UIDataStore_ETC; // 0x4d8
	eFrontEndScene ReservedScene; // 0x4e0
	ObjectProperty ShowRoomClass; // 0x4e4
	ObjectProperty LogOut_BattleInfoPopUp; // 0x4ec
	int32_t DevReserveOpenRandomBoxID; // 0x4f4
};

struct UActorFactoryEmitter : UActorFactory {
	ObjectProperty ParticleSystem; // 0x9c
};

struct USkelControlHandlebars : USkelControlSingleBone {
	EAxis WheelRollAxis; // 0x100
	EAxis HandlebarRotateAxis; // 0x101
	FName WheelBoneName; // 0x104
	uint32_t bInvertRotation : 1; // 0x10c
	int32_t SteerWheelBoneIndex; // 0x110
};

struct UCombatDataTableRefEvolveModeOption : UCombatDataTableType {
	FString MapCodeName; // 0x6c
	int32_t FirstCreateTime; // 0x7c
	int32_t RecreateTime; // 0x80
	int32_t CreateImpactTime; // 0x84
	int32_t JackpotStartTime; // 0x88
	int32_t JackpotMaxTime; // 0x8c
	int32_t JackpotMinProb; // 0x90
	int32_t JackpotMaxProb; // 0x94
};

struct UInterpTrackInstBoolProp : UInterpTrackInstProperty {
	FPointer BoolProp; // 0x70
	int32_t BitMask; // 0x78
	uint32_t ResetBool : 1; // 0x7c
};

struct UCombatDBManager : UObject {
	TArray<FExcelExternalCallType> ExcelExternalCallStorage; // 0x60
	TMap<None, None> ModeGrouping; // 0x70
	TArray<int32_t> PrimaryWeaponGroupping; // 0xb8
	TArray<int32_t> SubWeaponGroupping; // 0xc8
	TArray<int32_t> MeleeWeaponGroupping; // 0xd8
	TArray<int32_t> ThrowWeaponGroupping; // 0xe8
};

struct UPrefabSequence : USequence {
	ObjectProperty OwnerPrefab; // 0x174
};

struct ASplineLoftActor : ASplineActor {
	float ScaleX; // 0x2ac
	float ScaleY; // 0x2b0
	TArray<ComponentProperty> SplineMeshComps; // 0x2b4
	ObjectProperty DeformMesh; // 0x2c4
	TArray<ObjectProperty> DeformMeshMaterials; // 0x2cc
	float Roll; // 0x2dc
	FVector WorldXDir; // 0x2e0
	FVector2D Offset; // 0x2ec
	uint32_t bSmoothInterpRollAndScale : 1; // 0x2f4
	uint32_t bAcceptsLights : 1; // 0x2f4
	ComponentProperty MeshLightEnvironment; // 0x2f8
	float MeshMaxDrawDistance; // 0x300
};

struct UCombatHUD_WeaponInfo : UCombatHUDEntity_Base {
	int32_t LastAmmoCount; // 0xc0
	int32_t LastRemainAmmoCount; // 0xc4
	int32_t LastChamberAmmoCount; // 0xc8
	WeaponUIType LastUIType; // 0xcc
	GrenadeUIType LastSelectedGrenadeSlot; // 0xcd
	FString LastGrenadeSlotACount; // 0xd0
	FString LastGrenadeSlotBCount; // 0xe0
	int32_t LastGrenadeSlotAType; // 0xf0
	int32_t LastGrenadeSlotBType; // 0xf4
};

struct USeqAct_SetMatInstTexParam : USequenceAction {
	ObjectProperty MatInst; // 0x108
	ObjectProperty NewTexture; // 0x110
	FName ParamName; // 0x118
};

struct UParticleModuleVelocityCone : UParticleModuleVelocityBase {
	FRawDistributionFloat Angle; // 0x6c
	FRawDistributionFloat Velocity; // 0x90
	FVector Direction; // 0xb4
};

struct ACombatRSCGameReplicationInfo : ACBGameReplicationInfo {
	ObjectProperty HostageActor; // 0x380
	SceneType CurrentScene; // 0x388
};

struct UAnimNotify_ForceField : UAnimNotify {
	ComponentProperty ForceFieldComponent; // 0x60
	uint32_t bAttach : 1; // 0x68
	FName SocketName; // 0x6c
	FName BoneName; // 0x74
};

struct UCombatSceneCapture2DComponent : USceneCapture2DComponent {
	float SurfaceWidth; // 0x170
	float SurfaceHeight; // 0x174
	uint32_t bUseMainSceneProjectionMatrix : 1; // 0x178
	uint32_t bCaptureSceneOnce : 1; // 0x178
};

struct UCombatFrontEnd_TacticalGear : UCombatFrontEnd_Object {
	int32_t LastGearIndex; // 0xd0
	FString EquipNoticeString; // 0xd4
	FString PriceString; // 0xe4
	FString ConditionString_Title; // 0xf4
	FString ConditionString_EnoughMoney; // 0x104
	FString ConditionString_AllowedMode; // 0x114
};

struct UInterpTrackInstSlomo : UInterpTrackInst {
	float OldTimeDilation; // 0x60
};

struct UHttpRequestInterface : UHttpBaseInterface {
	DelegateProperty __OnProcessRequestComplete__Delegate; // 0x60
};

struct UInterpCurveEdSetup : UObject {
	TArray<FCurveEdTab> Tabs; // 0x60
	int32_t ActiveTab; // 0x70
};

struct USeqVar_Group : USeqVar_Object {
	FName GroupName; // 0xc4
	uint32_t bCachedList : 1; // 0xcc
	TArray<ObjectProperty> Actors; // 0xd0
};

struct UParticleModuleWorldAttractor : UParticleModuleWorldForcesBase {
	uint32_t bParticleLifeRelative : 1; // 0x68
	FRawDistributionFloat AttractorInfluence; // 0x6c
};

struct UCombatDataTableRefTier : UCombatDataTableType {
	FString TierCodeName; // 0x6c
	int32_t Tier; // 0x7c
	int32_t GoalTierPoint; // 0x80
	int32_t NameID; // 0x84
	FString Img1; // 0x88
	FString Img2; // 0x98
	FString TierUpImg; // 0xa8
	int32_t ImageID_Small; // 0xb8
	int32_t ImageID_Big; // 0xbc
	int32_t ImageID_TierUp; // 0xc0
	int32_t Profile_Tier_Edge; // 0xc4
};

struct USequenceFrame : USequenceObject {
	int32_t SizeX; // 0x98
	int32_t SizeY; // 0x9c
	int32_t BorderWidth; // 0xa0
	uint32_t bDrawBox : 1; // 0xa4
	uint32_t bFilled : 1; // 0xa4
	uint32_t bTileFill : 1; // 0xa4
	FColor BorderColor; // 0xa8
	FColor FillColor; // 0xac
};

struct USeqAct_CheckInput : USequenceAction {
	int32_t AllowedPlayerIndex; // 0x108
	TArray<FName> InputNames; // 0x10c
	uint32_t bIsAllKeyBlock : 1; // 0x11c
	uint32_t bIsKeyCheckFinished : 1; // 0x11c
};

struct UNavMeshPathConstraint : UObject {
	ObjectProperty NextConstraint; // 0x60
	int32_t NumNodesProcessed; // 0x68
	int32_t NumThrownOutNodes; // 0x6c
	float AddedDirectCost; // 0x70
	float AddedHeuristicCost; // 0x74
};

struct UCombatSkill_AirStrike : UCombatActiveSkill {
	EAnnounceableSkillType AnnounceSkill; // 0xc8
};

struct UAnimNotify_Trails : UAnimNotify {
	ObjectProperty PSTemplate; // 0x60
	uint32_t bIsExtremeContent : 1; // 0x68
	uint32_t bPreview : 1; // 0x68
	uint32_t bPreviewForceExplicit : 1; // 0x68
	uint32_t bSkipIfOwnerIsHidden : 1; // 0x68
	uint32_t bResampleRequired : 1; // 0x68
	FName FirstEdgeSocketName; // 0x6c
	FName ControlPointSocketName; // 0x74
	FName SecondEdgeSocketName; // 0x7c
	float LastStartTime; // 0x84
	float EndTime; // 0x88
	float SampleTimeStep; // 0x8c
	TArray<FTrailSamplePoint> TrailSampleData; // 0x90
	float SamplesPerSecond; // 0xa0
	TArray<FTrailSample> TrailSampledData; // 0xa4
	float CurrentTime; // 0xb4
	float TimeStep; // 0xb8
	ObjectProperty AnimNodeSeq; // 0xbc
};

struct UGripCondNode_TargetReachable : UGripConditionNode {
	ECurAITarget CurAITarget; // 0xec
	uint32_t bNegative : 1; // 0xf0
};

struct UAnimNotify_ViewShake : UAnimNotify_Scripted {
	float Duration; // 0x60
	FVector RotAmplitude; // 0x64
	FVector RotFrequency; // 0x70
	FVector LocAmplitude; // 0x7c
	FVector LocFrequency; // 0x88
	float FOVAmplitude; // 0x94
	float FOVFrequency; // 0x98
	uint32_t bDoControllerVibration : 1; // 0x9c
	uint32_t bUseBoneLocation : 1; // 0x9c
	float ShakeRadius; // 0xa0
	FName BoneName; // 0xa4
	ObjectProperty ShakeParams; // 0xac
};

struct UPostProcessChain : UObject {
	TArray<ObjectProperty> Effects; // 0x60
};

struct USlotToSlotReachSpec : UForcedReachSpec {
	char SpecDirection; // 0xc8
};

struct UOnlinePlaylistGameTypeProvider : UUIResourceDataProvider {
	FName PlaylistGameTypeName; // 0x94
	FString DisplayName; // 0x9c
	FString Description; // 0xac
	int32_t GameTypeId; // 0xbc
};

struct UCodecMovie : UObject {
	float PlaybackDuration; // 0x60
};

struct USoundNodeDoppler : USoundNode {
	float DopplerIntensity; // 0x74
};

struct USeqAct_Teleport : USequenceAction {
	uint32_t bUpdateRotation : 1; // 0x108
	uint32_t bCheckOverlap : 1; // 0x108
	float TeleportDistance; // 0x10c
	TArray<ObjectProperty> TeleportVolumes; // 0x110
};

struct ASkeletalMeshActorMAT : ASkeletalMeshCinematicActor {
	TArray<ObjectProperty> SlotNodes; // 0x2a4
};

struct ATrigger_LOS : ATrigger {
	TArray<ObjectProperty> PCsWithLOS; // 0x254
};

struct UCombatAIGameMovie : UCombatTeamGameMovie {
	ObjectProperty WaveModePlayerList; // 0xad0
	ObjectProperty WaveModePlayTime; // 0xad8
	ObjectProperty Message_WarningMC; // 0xae0
	int32_t LastPlayTime; // 0xae8
	uint32_t bCanUpdateOrder : 1; // 0xaec
	uint32_t bNeedUpdateOrder : 1; // 0xaec
	TArray<FPlayerListInfo> PlayerListData; // 0xaf0
	ObjectProperty RoundStatusOption; // 0xb00
	ObjectProperty LevelObjectContainer; // 0xb08
	ObjectProperty AIDefenseKillComboMC; // 0xb10
};

struct UCBPhysicalMaterialProperty : UPhysicalMaterialPropertyBase {
	FName MaterialType; // 0x60
	EHitBodyType TempletType; // 0x68
	ePenetrationType PenetrationType; // 0x69
	TArray<FMaterialImpactEffect> ImpactEffects; // 0x6c
	TArray<FMaterialImpactEffect> LowGoreImpactEffects; // 0x7c
	ObjectProperty FootStepSound; // 0x8c
	ObjectProperty JumpingSound; // 0x94
	ObjectProperty LandedSound; // 0x9c
	ObjectProperty FootStepParticleTemplate; // 0xa4
	int32_t HitPriority; // 0xac
	FPointLightInfo ImpactPointLightInfo; // 0xb0
	TArray<FExplosionDatum> ExplosionData; // 0xc8
};

struct USkelControlSpline : USkelControlBase {
	int32_t SplineLength; // 0xd0
	EAxis SplineBoneAxis; // 0xd4
	ESplineControlRotMode BoneRotMode; // 0xd5
	uint32_t bInvertSplineBoneAxis : 1; // 0xd8
	float EndSplineTension; // 0xdc
	float StartSplineTension; // 0xe0
};

struct UOnlineSubsystem : UObject {
	FPointer VfTable_FTickableObject; // 0x60
	TScriptInterface<Class> AccountInterface; // 0x68
	TScriptInterface<Class> PlayerInterface; // 0x78
	TScriptInterface<Class> PlayerInterfaceEx; // 0x88
	TScriptInterface<Class> SystemInterface; // 0x98
	TScriptInterface<Class> GameInterface; // 0xa8
	TScriptInterface<Class> ContentInterface; // 0xb8
	TScriptInterface<Class> VoiceInterface; // 0xc8
	TScriptInterface<Class> StatsInterface; // 0xd8
	TScriptInterface<Class> NewsInterface; // 0xe8
	TScriptInterface<Class> PartyChatInterface; // 0xf8
	TScriptInterface<Class> TitleFileInterface; // 0x108
	TScriptInterface<Class> TitleFileCacheInterface; // 0x118
	TScriptInterface<Class> UserCloudInterface; // 0x128
	TScriptInterface<Class> SharedCloudInterface; // 0x138
	TScriptInterface<Class> SocialInterface; // 0x148
	TScriptInterface<Class> AuthInterface; // 0x158
	TArray<FNamedInterface> NamedInterfaces; // 0x168
	TArray<FNamedInterfaceDef> NamedInterfaceDefs; // 0x178
	TArray<FNamedSession> Sessions; // 0x188
	uint32_t bUseBuildIdOverride : 1; // 0x198
	uint32_t IsProfileExist : 1; // 0x198
	int32_t BuildIdOverride; // 0x19c
	FString IniLocPatcherClassName; // 0x1a0
	ObjectProperty Patcher; // 0x1b0
	float AsyncMinCompletionTime; // 0x1b8
};

struct ACombatPawn_TrophyTurret : ACombatPawn_AttackSkillActor {
	FSTargetExplodeLocationInfo TargetExplodeLocationInfo; // 0x1274
	float IdleRotDegPerSecond; // 0x1284
	float AimRotDegPerSecond; // 0x1288
	float MaxAimTime; // 0x128c
	float FireHoldTime; // 0x1290
	FName FireAnim; // 0x1294
	float FireCoolTime; // 0x129c
	ObjectProperty FireMuzzlePS; // 0x12a0
	ObjectProperty FireSound; // 0x12a8
	ComponentProperty TouchComponent; // 0x12b0
	TArray<ACombatProjectile*> EnableCheckActorClasses; // 0x12b8
	TArray<ACombatProjectile*> ForbiddenCheckActorClasses; // 0x12c8
	ACombatProj_ExplosiveBase* ExplosionProjClass; // 0x12d8
	TArray<ObjectProperty> TouchedProjectiles; // 0x12e0
	FRotator DesiredAimRotation; // 0x12f0
	ObjectProperty AimControl; // 0x12fc
	ObjectProperty TrophyTurretAnimState; // 0x1304
	ETrophyState CurTrophyState; // 0x130c
	FVector SavedTargetExplodeLocation; // 0x1310
	int32_t WeaponIndex; // 0x131c
};

struct AGameCrowdInfoVolume : AVolume {
	TArray<ObjectProperty> PotentialSpawnPoints; // 0x280
};

struct UDrawFrustumComponent : UPrimitiveComponent {
	FColor FrustumColor; // 0x250
	float FrustumAngle; // 0x254
	float FrustumAspectRatio; // 0x258
	float FrustumStartDist; // 0x25c
	float FrustumEndDist; // 0x260
	ObjectProperty Texture; // 0x264
};

struct ASceneCapture2DActor : ASceneCaptureActor {
	ComponentProperty DrawFrustum; // 0x24c
};

struct UInterpTrackInstLinearColorProp : UInterpTrackInstProperty {
	FPointer ColorProp; // 0x70
	FLinearColor ResetColor; // 0x78
};

struct ULightmappedSurfaceCollection : UObject {
	ObjectProperty SourceModel; // 0x60
	TArray<int32_t> Surfaces; // 0x68
};

struct ABrush : AActor {
	ECsgOper CsgOper; // 0x244
	FColor BrushColor; // 0x248
	int32_t PolyFlags; // 0x24c
	uint32_t bColored : 1; // 0x250
	uint32_t bSolidWhenSelected : 1; // 0x250
	uint32_t bPlaceableFromClassBrowser : 1; // 0x250
	ObjectProperty Brush; // 0x254
	ComponentProperty BrushComponent; // 0x25c
	TArray<FGeomSelection> SavedSelections; // 0x264
};

struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	TArray<FLayerBlendInput> Layers; // 0xb0
	FGuid ExpressionGUID; // 0xc0
};

struct USeqAct_SetFloat : USeqAct_SetSequenceVariable {
	float Target; // 0x108
	TArray<float> Value; // 0x10c
};

struct UMaterialExpressionTextureSampleParameter : UMaterialExpressionTextureSample {
	FName ParameterName; // 0x120
	FGuid ExpressionGUID; // 0x128
	FName Group; // 0x138
};

struct UParticleModuleTrailTaper : UParticleModuleTrailBase {
	ETrailTaperMethod TaperMethod; // 0x68
	FRawDistributionFloat TaperFactor; // 0x6c
};

struct UMaterialExpressionAdd : UMaterialExpression {
	FExpressionInput A; // 0xb0
	FExpressionInput B; // 0xe4
};

struct UCombatDialogManager : UObject {
	TScriptInterface<Class> OwnerMovie; // 0x60
	int32_t DefaultOKBtnLabelID; // 0x70
	int32_t DefaultCancelBtnLabelID; // 0x74
	int32_t DefaultTitleLabelID; // 0x78
	FString DefaultOKBtnLabel; // 0x7c
	FString DefaultCancelBtnLabel; // 0x8c
	FString DefaultTitleLabel; // 0x9c
	TArray<FDialogInfo> DialogInfos; // 0xac
	TArray<char> DialogUseInfos; // 0xbc
	uint32_t bIgnoreCreateDailog : 1; // 0xcc
};

struct UCombatFrontEnd_MatchResult : UCombatFrontEnd_Scene {
	ObjectProperty DataStoreMission; // 0xd0
	FString UsedMilitaryBranchLabel; // 0xd8
	FString InGameRankLabel; // 0xe8
	FString CRPointLabel; // 0xf8
	FString UsedCRPointLabel; // 0x108
	FString AcquiredCRPointLabel; // 0x118
	FString AIWaveLabel; // 0x128
	char RoundType; // 0x138
	char MyTeamIndex; // 0x139
	char WinnerTeamIndex; // 0x13a
	char MyUsedMilitaryBranchType; // 0x13b
	int32_t PMScore; // 0x13c
	int32_t VCScore; // 0x140
	FString ModeNameString; // 0x144
	FString MapNameString; // 0x154
	FString GoalString; // 0x164
	uint32_t bBetaMode : 1; // 0x174
	uint32_t bBetaMap : 1; // 0x174
	uint32_t MyLevelUp : 1; // 0x174
	uint32_t bClanMatch : 1; // 0x174
	uint32_t bClanChange : 1; // 0x174
	uint32_t bClanRankMatch : 1; // 0x174
	uint32_t bCompSquadClan : 1; // 0x174
	uint32_t bAiMatch : 1; // 0x174
	uint32_t bHasModeScore : 1; // 0x174
	FString MyPlayedTimeString; // 0x178
	FString MyNameString; // 0x188
	FString ClanIconPathString; // 0x198
	FString ClanEdgeIconPathString; // 0x1a8
	FString ClanNameString; // 0x1b8
	FString ClanColor; // 0x1c8
	int32_t MyPrevLevel; // 0x1d8
	int32_t MyCurLevel; // 0x1dc
	int32_t MyGainExp; // 0x1e0
	int32_t MyGainGameMoney; // 0x1e4
	int32_t MyGainGameMedal; // 0x1e8
	int32_t MyTeamRanking; // 0x1ec
	int32_t MyTotalRanking; // 0x1f0
	int32_t MyKillCount; // 0x1f4
	int32_t MyDeathCount; // 0x1f8
	int32_t MyAssistCount; // 0x1fc
	int32_t MyLifeCount; // 0x200
	int32_t MyScore; // 0x204
	int32_t MyModeScore; // 0x208
	FString MyUsedMilitaryBranchString; // 0x20c
	int32_t MyRank; // 0x21c
	FString MyRankNameString; // 0x220
	int32_t MyUsedCRPoint; // 0x230
	int32_t MyAcquiredCRPoint; // 0x234
	FString MyCurrentLevelIconUrl; // 0x238
	FString MyCurrentSalaryIconUrl; // 0x248
	FString MyNextLevelIconUrl; // 0x258
	FString MyNextSalaryIconUrl; // 0x268
	FString MyPromotionName; // 0x278
	FString MyClanPoint; // 0x288
	FString MyClanLevel; // 0x298
	FString MyClanLevelColor; // 0x2a8
	int32_t nChannelType; // 0x2b8
	FString ViperCircleClanName; // 0x2bc
	FString PeaceMakerClanName; // 0x2cc
	FString BestScorePlayerName; // 0x2dc
	FString BestKillPlayerName; // 0x2ec
	FString BestAssistPlayerName; // 0x2fc
	FString BestMissionScorePlayerName; // 0x30c
	FString BestScoreLevelUrl; // 0x31c
	FString BestKillLevelUrl; // 0x32c
	FString BestAssistLevelUrl; // 0x33c
	FString BestMissionScoreLevelUrl; // 0x34c
	FString BestScoreEmblemUrl; // 0x35c
	FString BestKillEmblemUrl; // 0x36c
	FString BestAssistEmblemUrl; // 0x37c
	FString BestMissionScoreEmblemUrl; // 0x38c
	FString BestScoreEmblemEdgeUrl; // 0x39c
	FString BestKillEmblemEdgeUrl; // 0x3ac
	FString BestAssistEmblemEdgeUrl; // 0x3bc
	FString BestMissionScoreEmblemEdgeUrl; // 0x3cc
	FString bestScoreClanName; // 0x3dc
	FString bestKillClanName; // 0x3ec
	FString BestAssistClanName; // 0x3fc
	FString BestMissionScoreClanName; // 0x40c
	FString BestScoreClanColor; // 0x41c
	FString BestKillClanColor; // 0x42c
	FString BestAssistClanColor; // 0x43c
	FString BestMissionScoreClanColor; // 0x44c
	FString BestScoreClanLevel; // 0x45c
	FString BestKillClanLevel; // 0x46c
	FString BestAssistClanLevel; // 0x47c
	FString BestMissionScoreClanLevel; // 0x48c
	FString BestScoreClanLevelColor; // 0x49c
	FString BestKillClanLevelColor; // 0x4ac
	FString BestAssistClanLevelColor; // 0x4bc
	FString BestMissionScoreClanLevelColor; // 0x4cc
	FString BestScoreTierUrl; // 0x4dc
	FString BestKillTierUrl; // 0x4ec
	FString BestAssistTierUrl; // 0x4fc
	FString BestMissionScoreTierUrl; // 0x50c
	int32_t bestScore; // 0x51c
	int32_t bestKill; // 0x520
	int32_t BestAssist; // 0x524
	int32_t BestMissionScore; // 0x528
	int32_t ModeUIType; // 0x52c
	TArray<FUIScoreboardData> ScoreboardList; // 0x530
	int32_t RETURN_TO_MATCHROOM_TIME_MAX; // 0x540
	int32_t ReturnToMatchroomTime; // 0x544
	int32_t SelectedIndex; // 0x548
	int32_t CurrentModeGroupIndex; // 0x54c
};

struct UCombatDataTable : UObject {
	UObject* EntryClass; // 0x60
	TArray<FDataEntry> table; // 0x68
	FString Description; // 0x78
	FString XMLPath; // 0x88
	FString ReferenceDataTablePath; // 0x98
	int32_t CopyIndex; // 0xa8
	uint32_t bForcedProperty : 1; // 0xac
	uint32_t AutoSortEnable : 1; // 0xac
	TMap<None, None> TableMap; // 0xb0
	TArray<FTypeAliasInfo> TypeAlias; // 0xf8
};

struct UCombatAnimBlendHostage : UAnimNodeBlendList {
	ObjectProperty HostageActor; // 0x120
};

struct ACombatDecalManager : ADecalManager {
	float MinDecalDistanceSq; // 0x280
	TArray<ObjectProperty> ActiveSprays; // 0x284
	TArray<ObjectProperty> LevelDecals; // 0x294
	float SprayDecalBaseDepthBias; // 0x2a4
	float LevelDecalBaseDepthBias; // 0x2a8
	DelegateProperty __SpraySort__Delegate; // 0x2ac
};

struct UDominantSpotLightComponent : USpotLightComponent {
	FDominantShadowInfo DominantLightShadowInfo; // 0x270
	FArray_Mirror DominantLightShadowMap; // 0x320
};

struct UCombatActiveSkill : UCombatSkill {
	TArray<FGivenWeaponInfo> GivenWeaponClassName; // 0x80
	TArray<FString> GivenWeaponClassNameOnFinished; // 0x90
	uint32_t bDiscardInventoryOnFinished : 1; // 0xa0
	uint32_t bActivatedSkill : 1; // 0xa0
	TArray<FString> StartUpResources; // 0xa4
	FName ActiveActionVoiceName; // 0xb4
	int32_t WeaponIndex; // 0xbc
	FName ActiveSkillType; // 0xc0
};

struct UCCSAFGetInCover : UGripAFActionHandle {
	ObjectProperty CoverLink; // 0x64
	ObjectProperty Target; // 0x6c
};

struct UCombatDataRefDecorationColor : UCombatDataTableType {
	int32_t Index; // 0x6c
	char Color_R; // 0x70
	char Color_G; // 0x71
	char Color_B; // 0x72
};

struct UMaterialExpressionCustom : UMaterialExpression {
	FString Code; // 0xb0
	ECustomMaterialOutputType OutputType; // 0xc0
	FString Description; // 0xc4
	TArray<FCustomInput> Inputs; // 0xd4
};

struct UCombatDataTableRefRandomBox : UCombatDataTableType {
	FString ItemCodeName; // 0x6c
	FString CubeCodeName; // 0x7c
	int32_t DrawType; // 0x8c
	int32_t CubeGivePercent; // 0x90
	int32_t JackpotGuranteeCount; // 0x94
	int32_t JackpotGuranteeReset; // 0x98
	int32_t JackpotBonusCount; // 0x9c
	int32_t JackpotBonusReset; // 0xa0
};

struct AInventory : AActor {
	ObjectProperty Inventory; // 0x244
	ObjectProperty InvManager; // 0x24c
	FString ItemName; // 0x254
	uint32_t bDropOnDeath : 1; // 0x264
	uint32_t bDelayedSpawn : 1; // 0x264
	uint32_t bPredictRespawns : 1; // 0x264
	float RespawnTime; // 0x268
	float MaxDesireability; // 0x26c
	FString PickupMessage; // 0x270
	ObjectProperty PickupSound; // 0x280
	FString PickupForce; // 0x288
	ADroppedPickup* DroppedPickupClass; // 0x298
	ComponentProperty DroppedPickupMesh; // 0x2a0
	ComponentProperty PickupFactoryMesh; // 0x2a8
	ComponentProperty DroppedPickupParticles; // 0x2b0
	ObjectProperty DroppedPickupGetterParticles; // 0x2b8
};

struct UNavMeshGoalFilter_NotNearOtherAI : UNavMeshGoal_Filter {
	float DistanceToCheck; // 0x6c
};

struct UParticleModuleMeshRotationRate : UParticleModuleRotationRateBase {
	FRawDistributionVector StartRotationRate; // 0x68
};

struct UDataStoreClient : UUIRoot {
	TArray<FString> GlobalDataStoreClasses; // 0x70
	TArray<ObjectProperty> GlobalDataStores; // 0x80
	TArray<FString> PlayerDataStoreClassNames; // 0x90
	TArray<UUIDataStore*> PlayerDataStoreClasses; // 0xa0
	TArray<FPlayerDataStoreGroup> PlayerDataStores; // 0xb0
};

struct UCombatObjectPool : UObject {
	int32_t PoolLimitSize; // 0x60
	int32_t CurMemSize; // 0x64
	int32_t ReferenceCounterMax; // 0x68
	int32_t ReferenceCounterIncrement; // 0x6c
	int32_t ReferenceCounterDecrement; // 0x70
	float ObjectCacheGarbageCollectionCycle; // 0x74
	float ObjectCacheLifeTime; // 0x78
	TArray<FObjectCacheDatum> ObjectCache; // 0x7c
	int32_t MergedDataCacheMax; // 0x8c
	int32_t MergedDataPutReferenceCounterValue; // 0x90
	int32_t MergedDataReferenceCounterMax; // 0x94
	int32_t MergedDataReferenceCounterIncrement; // 0x98
	int32_t MergedDataReferenceCounterDecrement; // 0x9c
	FMergedMeshList MergedMeshCache[0x3]; // 0xa0
	int32_t MSMaterialDataPutReferenceCounterValue; // 0xd0
	int32_t MSMaterialDataReferenceCounterMax; // 0xd4
	int32_t MSMaterialDataReferenceCounterIncrement; // 0xd8
	int32_t MSMaterialDataReferenceCounterDecrement; // 0xdc
	float MSMaterialCacheLifeTime; // 0xe0
	float MSMaterialCacheGarbageCollectionCycle; // 0xe4
	TArray<FMaterialSetListMaterialDatum> MSMaterialList; // 0xe8
};

struct UCombatDataTableRefPreset : UCombatDataTableType {
	int32_t PresetNum; // 0x6c
	int32_t PresetNameID; // 0x70
	FString PrimaryWeapon; // 0x74
	FString SubWeapon; // 0x84
	FString MeleeWeapon; // 0x94
	FString GrenadeA; // 0xa4
	FString GrenadeB; // 0xb4
	FString GrenadeC; // 0xc4
	FString Chip_A; // 0xd4
	FString Chip_B; // 0xe4
	FString Chip_C; // 0xf4
	FString Chip_D; // 0x104
};

struct UCombatTestRTMoviePlayer : UCombatGFxMoviePlayer {
	ObjectProperty MyRenderTarget; // 0x308
};

struct UMaterialExpressionScreenPosition : UMaterialExpression {
	uint32_t ScreenAlign : 1; // 0xb0
};

struct USoundNodeModulatorContinuous : USoundNode {
	FRawDistributionFloat PitchModulation; // 0x74
	FRawDistributionFloat VolumeModulation; // 0x98
};

struct UGameSpecialMove : UObject {
	ObjectProperty PawnOwner; // 0x60
	FName Handle; // 0x68
	float LastCanDoSpecialMoveTime; // 0x70
	uint32_t bLastCanDoSpecialMove : 1; // 0x74
	uint32_t bReachPreciseDestination : 1; // 0x74
	uint32_t bReachedPreciseDestination : 1; // 0x74
	uint32_t bReachPreciseRotation : 1; // 0x74
	uint32_t bReachedPreciseRotation : 1; // 0x74
	uint32_t bForcePrecisePosition : 1; // 0x74
	FVector PreciseDestination; // 0x78
	ObjectProperty PreciseDestBase; // 0x84
	FVector PreciseDestRelOffset; // 0x8c
	float PreciseRotationInterpolationTime; // 0x98
	FRotator PreciseRotation; // 0x9c
};

struct UCombatAnimNotify_StopCustomAnim : UAnimNotify {
	float BlendOutTime; // 0x60
};

struct UPBRuleNodeExtractTopBottom : UPBRuleNodeBase {
	float ExtractTopZ; // 0x70
	float ExtractNotTopZ; // 0x74
	float ExtractBottomZ; // 0x78
	float ExtractNotBottomZ; // 0x7c
};

struct ACombatWeapon_Bomb : ACombatWeapon {
	float PlantAnimDuraion; // 0x1ec8
	FLinearColor BombLightColor; // 0x1ecc
	ObjectProperty IndicatorMIC; // 0x1edc
	ObjectProperty ThirdIndicatorMIC; // 0x1ee4
	uint32_t bNeedToSwitchWeapon : 1; // 0x1eec
	uint32_t bIgnoreMove : 1; // 0x1eec
	ObjectProperty Bomb; // 0x1ef0
};

struct AWebServer : ATcpLink {
	FString ServerName; // 0x29c
	FString Applications[0xa]; // 0x2ac
	FString ApplicationPaths[0xa]; // 0x34c
	uint32_t bEnabled : 1; // 0x3ec
	int32_t ListenPort; // 0x3f0
	int32_t MaxConnections; // 0x3f4
	int32_t DefaultApplication; // 0x3f8
	int32_t ExpirationSeconds; // 0x3fc
	FString ServerURL; // 0x400
	ObjectProperty ApplicationObjects[0xa]; // 0x410
	int32_t ConnectionCount; // 0x460
	int32_t ConnID; // 0x464
};

struct UCombatAnimNodePreAnim : UAnimNodeBlend {
	uint32_t bSkipPlayingPreAnimWhenNotRendered : 1; // 0x110
};

struct UKMeshProps : UObject {
	FVector COMNudge; // 0x60
	FKAggregateGeom AggGeom; // 0x6c
};

struct ACombatTeamBlockingVolume : ABlockingVolume {
	Team IgnoreBlockTeam; // 0x284
};

struct UMultiProviderAnalytics : UAnalyticEventsBase {
	TArray<FString> AnalyticsProviderClassNames; // 0x84
	TArray<ObjectProperty> AnalyticsProviders; // 0x94
};

struct UCombatHUD_WarmUp : UCombatHUDEntity_Base {
	TArray<FWarmUpInfo> WarmUpPmInfos; // 0xc0
	TArray<FWarmUpInfo> WarmUpVcInfos; // 0xd0
};

struct USequence : USequenceOp {
	FPointer LogFile; // 0xec
	TArray<ObjectProperty> SequenceObjects; // 0xf4
	TArray<ObjectProperty> ActiveSequenceOps; // 0x104
	TArray<ObjectProperty> NestedSequences; // 0x114
	TArray<ObjectProperty> UnregisteredEvents; // 0x124
	TArray<FActivateOp> DelayedActivatedOps; // 0x134
	TArray<ObjectProperty> DelayedLatentOps; // 0x144
	uint32_t bEnabled : 1; // 0x154
	TArray<FQueuedActivationInfo> QueuedActivations; // 0x158
	int32_t DefaultViewX; // 0x168
	int32_t DefaultViewY; // 0x16c
	float DefaultViewZoom; // 0x170
};

struct UCombatHUD_GameModeHelp : UCombatHUDEntity_Base {
	uint32_t bShow : 1; // 0xc0
};

struct UCombatAnimBlendDirectional : UAnimNodeBlendDirectional {
	TArray<ObjectProperty> TorsoControllers; // 0x11c
	TArray<FName> TorsoControllerNames; // 0x12c
	uint32_t EditorPreview : 1; // 0x13c
	float FullBwdThreshold; // 0x140
	float SkelBlendOutTime; // 0x144
	ObjectProperty Owner; // 0x148
};

struct UCombatCTFGameScore : UCombatGameScore {
	FScoreStruct FlagHoistedScore; // 0x60
};

struct UCombatRandomBoxTransaction : UObject {
	TArray<FRandomBoxPickUpInfo> RandomBoxPickUpList; // 0x60
};

struct UMeshBeaconClient : UMeshBeacon {
	FOnlineGameSearchResult HostPendingRequest; // 0xa4
	FClientConnectionRequest ClientPendingRequest; // 0xb4
	FClientBandwidthTestData CurrentBandwidthTest; // 0xdc
	EMeshBeaconClientState ClientBeaconState; // 0xf0
	EMeshBeaconPacketType ClientBeaconRequestType; // 0xf1
	float ConnectionRequestTimeout; // 0xf4
	float ConnectionRequestElapsedTime; // 0xf8
	FString ResolverClassName; // 0xfc
	UClientBeaconAddressResolver* ResolverClass; // 0x10c
	ObjectProperty Resolver; // 0x114
	uint32_t bUsingRegisteredAddr : 1; // 0x11c
	DelegateProperty __OnConnectionRequestResult__Delegate; // 0x120
	DelegateProperty __OnReceivedBandwidthTestRequest__Delegate; // 0x130
	DelegateProperty __OnReceivedBandwidthTestResults__Delegate; // 0x140
	DelegateProperty __OnTravelRequestReceived__Delegate; // 0x150
	DelegateProperty __OnCreateNewSessionRequestReceived__Delegate; // 0x160
};

struct USeqAct_StreamInTextures : USeqAct_Latent {
	uint32_t bLocationBased : 1; // 0x120
	uint32_t bStreamingActive : 1; // 0x120
	uint32_t bHasTriggeredAllLoaded : 1; // 0x120
	float Seconds; // 0x124
	float StreamingDistanceMultiplier; // 0x128
	int32_t NumWantingResourcesID; // 0x12c
	float StopTimestamp; // 0x130
	TArray<ObjectProperty> LocationActors; // 0x134
	TArray<ObjectProperty> ForceMaterials; // 0x144
	FTextureGroupContainer CinematicTextureGroups; // 0x154
	int32_t SelectedCinematicTextureGroups; // 0x158
};

struct UCombatFrontEnd_Achieve : UCombatFrontEnd_Scene {
	int32_t RETURN_TO_MATCHRESULT_TIME_MAX; // 0xd0
	int32_t ReturnToMatchResultTime; // 0xd4
	int32_t PrevLevel; // 0xd8
	int32_t CurLevel; // 0xdc
	uint32_t bQuest : 1; // 0xe0
	FString RewardCodename; // 0xe4
	TArray<int32_t> RewardItemList; // 0xf4
	int32_t ModeID; // 0x104
	int32_t CurTier; // 0x108
	int32_t NewTier; // 0x10c
};

struct UGripBTObject : UObject {
	int32_t dummyVarJustSoTheClassDoesNotStartWithAnEnum; // 0x60
	uint32_t childrenCollapsed : 1; // 0x64
};

struct UGripBTStateCondition : UGripBTBooleanCondition {
	FString StateName; // 0xc0
};

struct ACombatSeizeGameBase : ACombatPVPGame {
	int32_t MaxTeamOccupationNum; // 0x788
	float PhasedOccupyTimeInterval[0x3]; // 0x78c
};

struct ACombatTutorialGamePRI : ACombatAIModePRI {
	uint32_t bHasBomb : 1; // 0x534
};

struct USeqAct_CombatTutorial_QuestOff : USequenceAction {
	FString QuestID; // 0x108
	uint32_t ResetAll : 1; // 0x118
};

struct UCombatDataTableRefFormula : UCombatDataTableType {
	FString CodeName; // 0x6c
	FString Params[0xa]; // 0x7c
};

struct UMcpGroupsBase : UMcpServiceBase {
	FString McpGroupsManagerClassName; // 0x78
	TArray<FMcpGroupList> GroupLists; // 0x88
	DelegateProperty __OnCreateGroupComplete__Delegate; // 0x98
	DelegateProperty __OnDeleteGroupComplete__Delegate; // 0xa8
	DelegateProperty __OnQueryGroupsComplete__Delegate; // 0xb8
	DelegateProperty __OnQueryGroupMembersComplete__Delegate; // 0xc8
	DelegateProperty __OnAddGroupMembersComplete__Delegate; // 0xd8
	DelegateProperty __OnRemoveGroupMembersComplete__Delegate; // 0xe8
	DelegateProperty __OnDeleteAllGroupsComplete__Delegate; // 0xf8
	DelegateProperty __OnQueryGroupInvitesComplete__Delegate; // 0x108
	DelegateProperty __OnAcceptGroupInviteComplete__Delegate; // 0x118
};

struct UMorphNodeWeightByBoneAngle : UMorphNodeWeightBase {
	float Angle; // 0x84
	float NodeWeight; // 0x88
	FName BaseBoneName; // 0x8c
	EAxis BaseBoneAxis; // 0x94
	EAxis AngleBoneAxis; // 0x95
	uint32_t bInvertBaseBoneAxis : 1; // 0x98
	uint32_t bInvertAngleBoneAxis : 1; // 0x98
	uint32_t bControlMaterialParameter : 1; // 0x98
	FName AngleBoneName; // 0x9c
	int32_t MaterialSlotId; // 0xa4
	FName ScalarParameterName; // 0xa8
	ObjectProperty MaterialInstanceConstant; // 0xb0
	TArray<FBoneAngleMorph> WeightArray; // 0xb8
};

struct ACombatParachuteVolume : AVolume {
	ParachuteState UnTouchState; // 0x280
};

struct UAnimationCompressionAlgorithm_Automatic : UAnimationCompressionAlgorithm {
	float MaxEndEffectorError; // 0x78
	uint32_t bTryFixedBitwiseCompression : 1; // 0x7c
	uint32_t bTryPerTrackBitwiseCompression : 1; // 0x7c
	uint32_t bTryLinearKeyRemovalCompression : 1; // 0x7c
	uint32_t bTryIntervalKeyRemoval : 1; // 0x7c
	uint32_t bRunCurrentDefaultCompressor : 1; // 0x7c
	uint32_t bAutoReplaceIfExistingErrorTooGreat : 1; // 0x7c
	uint32_t bRaiseMaxErrorToExisting : 1; // 0x7c
};

struct UMorphNodeWeightBase : UMorphNodeBase {
	TArray<FMorphNodeConn> NodeConns; // 0x74
};

struct UAutoNavMeshPathObstacleUnregister : UObject {
	TScriptInterface<Class> PathObstacleRef; // 0x60
};

struct UMaterialExpressionConstant4Vector : UMaterialExpression {
	float R; // 0xb0
	float G; // 0xb4
	float B; // 0xb8
	float A; // 0xbc
};

struct USeqAct_ChangeCollision : USequenceAction {
	uint32_t bCollideActors : 1; // 0x108
	uint32_t bBlockActors : 1; // 0x108
	uint32_t bIgnoreEncroachers : 1; // 0x108
	ECollisionType CollisionType; // 0x10c
};

struct ALandscapeProxy : AInfo {
	FGuid LandscapeGuid; // 0x244
	int32_t MaxLODLevel; // 0x254
	ObjectProperty DefaultPhysMaterial; // 0x258
	float StreamingDistanceMultiplier; // 0x260
	ObjectProperty LandscapeMaterial; // 0x264
	float LODDistanceFactor; // 0x26c
	TArray<ComponentProperty> LandscapeComponents; // 0x270
	TArray<ComponentProperty> CollisionComponents; // 0x280
	TMap<None, None> MaterialInstanceConstantMap; // 0x290
	TMap<None, None> WeightmapUsageMap; // 0x2d8
	float StaticLightingResolution; // 0x320
	ObjectProperty LandscapeActor; // 0x324
	uint32_t bIsProxy : 1; // 0x32c
	uint32_t bIsSetup : 1; // 0x32c
	uint32_t bResetup : 1; // 0x32c
	uint32_t bIsMovingToLevel : 1; // 0x32c
	FLightmassPrimitiveSettings LightmassSettings; // 0x330
	TArray<FLandscapeLayerStruct> LayerInfoObjs; // 0x34c
	int32_t ComponentSizeQuads; // 0x35c
	int32_t SubsectionSizeQuads; // 0x360
	int32_t NumSubsections; // 0x364
};

struct AMobileTouchInputVolume : AVolume {
	uint32_t bEnabled : 1; // 0x280
};

struct UInterpTrackSkelControlStrength : UInterpTrackFloatBase {
	FName SkelControlName; // 0xb8
};

struct APawn : AActor {
	FPointer VfTable_IInterface_Speaker; // 0x244
	float MaxStepHeight; // 0x24c
	float MaxJumpHeight; // 0x250
	float WalkableFloorZ; // 0x254
	float LedgeCheckThreshold; // 0x258
	FVector PartialLedgeMoveDir; // 0x25c
	ObjectProperty Controller; // 0x268
	ObjectProperty NextPawn; // 0x270
	float NetRelevancyTime; // 0x278
	ObjectProperty LastRealViewer; // 0x27c
	ObjectProperty LastViewer; // 0x284
	uint32_t bScriptTickSpecial : 1; // 0x28c
	uint32_t bUpAndOut : 1; // 0x28c
	uint32_t bIsWalking : 1; // 0x28c
	uint32_t bWantsToCrouch : 1; // 0x28c
	uint32_t bIsCrouched : 1; // 0x28c
	uint32_t bTryToUncrouch : 1; // 0x28c
	uint32_t bCanCrouch : 1; // 0x28c
	uint32_t bCrawler : 1; // 0x28c
	uint32_t bReducedSpeed : 1; // 0x28c
	uint32_t bJumpCapable : 1; // 0x28c
	uint32_t bCanJump : 1; // 0x28c
	uint32_t bCanWalk : 1; // 0x28c
	uint32_t bCanSwim : 1; // 0x28c
	uint32_t bCanFly : 1; // 0x28c
	uint32_t bCanClimbLadders : 1; // 0x28c
	uint32_t bCanStrafe : 1; // 0x28c
	uint32_t bAvoidLedges : 1; // 0x28c
	uint32_t bStopAtLedges : 1; // 0x28c
	uint32_t bAllowLedgeOverhang : 1; // 0x28c
	uint32_t bPartiallyOverLedge : 1; // 0x28c
	uint32_t bSimulateGravity : 1; // 0x28c
	uint32_t bIgnoreForces : 1; // 0x28c
	uint32_t bCanWalkOffLedges : 1; // 0x28c
	uint32_t bCanBeBaseForPawns : 1; // 0x28c
	uint32_t bSimGravityDisabled : 1; // 0x28c
	uint32_t bDirectHitWall : 1; // 0x28c
	uint32_t bPushesRigidBodies : 1; // 0x28c
	uint32_t bForceFloorCheck : 1; // 0x28c
	uint32_t bForceKeepAnchor : 1; // 0x28c
	uint32_t bCanMantle : 1; // 0x28c
	uint32_t bCanClimbUp : 1; // 0x28c
	uint32_t bCanClimbCeilings : 1; // 0x28c
	uint32_t bCanSwatTurn : 1; // 0x290
	uint32_t bCanLeap : 1; // 0x290
	uint32_t bCanCoverSlip : 1; // 0x290
	uint32_t bDisplayPathErrors : 1; // 0x290
	uint32_t bCanPickupInventory : 1; // 0x290
	uint32_t bAmbientCreature : 1; // 0x290
	uint32_t bLOSHearing : 1; // 0x290
	uint32_t bMuffledHearing : 1; // 0x290
	uint32_t bDontPossess : 1; // 0x290
	uint32_t bRollToDesired : 1; // 0x290
	uint32_t bStationary : 1; // 0x290
	uint32_t bCachedRelevant : 1; // 0x290
	uint32_t bNoWeaponFiring : 1; // 0x290
	uint32_t bModifyReachSpecCost : 1; // 0x290
	uint32_t bModifyNavPointDest : 1; // 0x290
	uint32_t bPathfindsAsVehicle : 1; // 0x290
	uint32_t bPrevBypassSimulatedClientPhysics : 1; // 0x290
	uint32_t bRunPhysicsWithNoController : 1; // 0x290
	uint32_t bForceMaxAccel : 1; // 0x290
	uint32_t bLimitFallAccel : 1; // 0x290
	uint32_t bReplicateHealthToAll : 1; // 0x290
	uint32_t bForceRMVelocity : 1; // 0x290
	uint32_t bForceRegularVelocity : 1; // 0x290
	uint32_t bPlayedDeath : 1; // 0x290
	uint32_t bDesiredRotationSet : 1; // 0x290
	uint32_t bLockDesiredRotation : 1; // 0x290
	uint32_t bUnlockWhenReached : 1; // 0x290
	uint32_t bNeedsBaseTickedFirst : 1; // 0x290
	uint32_t bUsedByMatinee : 1; // 0x290
	uint32_t bRootMotionFromInterpCurve : 1; // 0x290
	uint32_t bDebugShowCameraLocation : 1; // 0x290
	uint32_t bFastAttachedMove : 1; // 0x290
	uint32_t bSyncLocationToRigidbody : 1; // 0x294
	EPhysics WalkingPhysics; // 0x298
	EPathSearchType PathSearchType; // 0x299
	char RemoteViewPitch; // 0x29a
	char FlashCount; // 0x29b
	char FiringMode; // 0x29c
	float UncrouchTime; // 0x2a0
	float CrouchHeight; // 0x2a4
	float CrouchRadius; // 0x2a8
	int32_t FullHeight; // 0x2ac
	float NonPreferredVehiclePathMultiplier; // 0x2b0
	ObjectProperty PathConstraintList; // 0x2b4
	ObjectProperty PathGoalList; // 0x2bc
	float DesiredSpeed; // 0x2c4
	float MaxDesiredSpeed; // 0x2c8
	float HearingThreshold; // 0x2cc
	float Alertness; // 0x2d0
	float SightRadius; // 0x2d4
	float PeripheralVision; // 0x2d8
	float AvgPhysicsTime; // 0x2dc
	float Mass; // 0x2e0
	float Buoyancy; // 0x2e4
	float MeleeRange; // 0x2e8
	ObjectProperty Anchor; // 0x2ec
	int32_t AnchorItem; // 0x2f4
	ObjectProperty LastAnchor; // 0x2f8
	float FindAnchorFailedTime; // 0x300
	float LastValidAnchorTime; // 0x304
	float DestinationOffset; // 0x308
	float NextPathRadius; // 0x30c
	FVector SerpentineDir; // 0x310
	float SerpentineDist; // 0x31c
	float SerpentineTime; // 0x320
	float SpawnTime; // 0x324
	int32_t MaxPitchLimit; // 0x328
	float GroundSpeed; // 0x32c
	float WaterSpeed; // 0x330
	float AirSpeed; // 0x334
	float LadderSpeed; // 0x338
	float AccelRate; // 0x33c
	float JumpZ; // 0x340
	float OutofWaterZ; // 0x344
	float MaxOutOfWaterStepHeight; // 0x348
	float AirControl; // 0x34c
	float WalkingPct; // 0x350
	float MovementSpeedModifier; // 0x354
	float CrouchedPct; // 0x358
	float MaxFallSpeed; // 0x35c
	float AIMaxFallSpeedFactor; // 0x360
	float BaseEyeHeight; // 0x364
	float EyeHeight; // 0x368
	FVector Floor; // 0x36c
	float SplashTime; // 0x378
	ObjectProperty HeadVolume; // 0x37c
	WordProperty Health; // 0x384
	WordProperty HealthMax; // 0x386
	float BreathTime; // 0x388
	float UnderWaterTime; // 0x38c
	float LastPainTime; // 0x390
	float KismetDeathDelayTime; // 0x394
	FVector RMVelocity; // 0x398
	FVector noise1spot; // 0x3a4
	float noise1time; // 0x3b0
	ObjectProperty noise1other; // 0x3b4
	float noise1loudness; // 0x3bc
	FVector noise2spot; // 0x3c0
	float noise2time; // 0x3cc
	ObjectProperty noise2other; // 0x3d0
	float noise2loudness; // 0x3d8
	float SoundDampening; // 0x3dc
	float DamageScaling; // 0x3e0
	FString MenuName; // 0x3e4
	AAIController* ControllerClass; // 0x3f4
	ObjectProperty PlayerReplicationInfo; // 0x3fc
	ObjectProperty OnLadder; // 0x404
	FName LandMovementState; // 0x40c
	FName WaterMovementState; // 0x414
	ObjectProperty LastStartSpot; // 0x41c
	float LastStartTime; // 0x424
	FVector TakeHitLocation; // 0x428
	UDamageType* HitDamageType; // 0x434
	FVector TearOffMomentum; // 0x43c
	ComponentProperty Mesh; // 0x448
	ComponentProperty CylinderComponent; // 0x450
	float RBPushRadius; // 0x458
	float RBPushStrength; // 0x45c
	ObjectProperty DrivenVehicle; // 0x460
	float AlwaysRelevantDistanceSquared; // 0x468
	float BacksideAlwaysRelevantDistanceSquared; // 0x46c
	float VehicleCheckRadius; // 0x470
	ObjectProperty LastHitBy; // 0x474
	float ViewPitchMin; // 0x47c
	float ViewPitchMax; // 0x480
	int32_t AllowedYawError; // 0x484
	FRotator DesiredRotation; // 0x488
	AInventoryManager* InventoryManagerClass; // 0x494
	ObjectProperty InvManager; // 0x49c
	ObjectProperty Weapon; // 0x4a4
	FVector FlashLocation; // 0x4ac
	FVector LastFiringFlashLocation; // 0x4b8
	int32_t ShotCount; // 0x4c4
	ComponentProperty PreRagdollCollisionComponent; // 0x4c8
	ObjectProperty PhysicsPushBody; // 0x4d0
	int32_t FailedLandingCount; // 0x4d8
	TArray<ObjectProperty> SlotNodes; // 0x4dc
	TArray<ObjectProperty> InterpGroupList; // 0x4ec
	ComponentProperty FacialAudioComp; // 0x4fc
	ObjectProperty MIC_PawnMat; // 0x504
	ObjectProperty MIC_PawnHair; // 0x50c
	TArray<FScalarParameterInterpStruct> ScalarParameterInterpArray; // 0x514
	FRootMotionCurve RootMotionInterpCurve; // 0x524
	float RootMotionInterpRate; // 0x544
	float RootMotionInterpCurrentTime; // 0x548
	FVector RootMotionInterpCurveLastValue; // 0x54c
};

struct ACombatFrontEndActor : AActor {
	ComponentProperty CharacterMesh; // 0x244
	UCBFamilyInfo* Char_InfoClass; // 0x24c
	ObjectProperty Char_RootRotControl; // 0x254
	ObjectProperty Char_FullBodyAnimSlot; // 0x25c
	ObjectProperty Char_TopHalfAnimSlot; // 0x264
	ObjectProperty Char_TopHalfParentNode; // 0x26c
	EGender Char_GenderType; // 0x274
	Team Char_TeamIndex; // 0x275
	char IKHand; // 0x276
	char PhysUnFreezeCounter; // 0x277
	int32_t CurrentCharacterRefItemIndex; // 0x278
	ObjectProperty Char_PhysicAsset; // 0x27c
	ComponentProperty WeaponMesh; // 0x284
	ACombatWeapon* WP_WeaponClass; // 0x28c
	ObjectProperty WP_CustomAnim; // 0x294
	int32_t CurrentWeaponRefItemIndex; // 0x29c
	ComponentProperty LeftArmorMesh; // 0x2a0
	ComponentProperty RightArmorMesh; // 0x2a8
	UCombatInstanceItem_ArmorBase* ArmorClass; // 0x2b0
	int32_t CurrentArmorItemIndex; // 0x2b8
	ComponentProperty FXUpperPSC; // 0x2bc
	ComponentProperty FXFootPSC; // 0x2c4
	UCombatItemFXBase* FXUpperClass; // 0x2cc
	UCombatItemFXBase* FXFootClass; // 0x2d4
	TArray<FFrontendActorAccessoryInfo> AccessoryInfo; // 0x2dc
	uint32_t bShowActor : 1; // 0x2ec
	uint32_t bDoRotation : 1; // 0x2ec
	float DefaultMouseInputDuration; // 0x2f0
	int32_t DefaultMouseMovementPixel; // 0x2f4
	float DefaultRotationDegree; // 0x2f8
	float DefaultRotationInterpolationSpeed; // 0x2fc
	float DefaultRotationInterpolationSpeed_Max; // 0x300
	int32_t LastMouseInput_X; // 0x304
	float LastMouseInputTime; // 0x308
	float YawInterpolationSpeed; // 0x30c
	FRotator TargetRot; // 0x310
	ObjectProperty HandGripIKNode[0x2]; // 0x31c
	ObjectProperty InvenAnimset[0x2]; // 0x32c
	FString InvenAnimSetName[0x2]; // 0x33c
	ObjectProperty RandomNode; // 0x35c
	TArray<FName> UnfixedBoneNames; // 0x364
};

struct ULevelStreamingAlwaysLoaded : ULevelStreaming {
	uint32_t bIsProceduralBuildingLODLevel : 1; // 0x100
};

struct UMaterialExpressionParticleMacroUV : UMaterialExpression {
	uint32_t bUseViewSpace : 1; // 0xb0
};

struct UCombatTDMMovie : UCombatTeamGameMovie {
	ObjectProperty PickupItemContainer; // 0xad0
	int32_t PickupLocatorNum; // 0xad8
};

struct AAmbientSoundSimple : AAmbientSound {
	ObjectProperty AmbientProperties; // 0x258
	ObjectProperty SoundCueInstance; // 0x260
	ObjectProperty SoundNodeInstance; // 0x268
};

struct ADebugCameraHUD : AHUD {
	uint32_t bDrawDebugText : 1; // 0x564
};

struct ACombatStaticMeshActor : AStaticMeshActor {
	WordProperty MeshActorIndex; // 0x250
};

struct UCombatAnimBlendByParts : UAnimNodeBlendList {
	ObjectProperty Owner; // 0x120
	uint32_t IgnoreNewHit : 1; // 0x128
	uint32_t WasFinishing : 1; // 0x128
};

struct UCombatDataTableRefModeMap : UCombatDataTableType {
	FString ModeCodeName; // 0x6c
	FString ModeGroupName; // 0x7c
	FString MapCodeName; // 0x8c
	int32_t ImageID_Minimap; // 0x9c
	int32_t BetaVersion; // 0xa0
};

struct UMobileMenuButton : UMobileMenuObject {
	ObjectProperty Images[0x2]; // 0xdc
	FUVCoords ImagesUVs[0x2]; // 0xec
	FLinearColor ImageColor; // 0x114
	FString Caption; // 0x124
	FLinearColor CaptionColor; // 0x134
};

struct AImageReflection : AActor {
	uint32_t bEnabled : 1; // 0x244
	ComponentProperty ReflectionComponent; // 0x248
	ComponentProperty ImageReflectionComponent; // 0x250
};

struct UUIWeaponSummary : UUIResourceDataProvider {
	FString ClassPathName; // 0x94
	FString FriendlyName; // 0xa4
	FString WeaponDescription; // 0xb4
	uint32_t bIsDisabled : 1; // 0xc4
};

struct UCombatClassSystem : UObject {
	ObjectProperty OwnerActor; // 0x60
	uint32_t bTestMode : 1; // 0x68
	uint32_t bAlreadySeverChangeClassNotify : 1; // 0x68
	uint32_t bAlreadySelectMilitaryClass : 1; // 0x68
	uint32_t bSelectMilitaryClass : 1; // 0x68
	char BeforGroupIndex; // 0x6c
	float AutoSelectMilitaryClassTime; // 0x70
};

struct USeqEvent_MobileInput : USeqEvent_MobileZoneBase {
	float XAxisValue; // 0x138
	float YAxisValue; // 0x13c
	float CenterX; // 0x140
	float CenterY; // 0x144
	float CurrentX; // 0x148
	float CurrentY; // 0x14c
};

struct UPrimitiveComponent : UActorComponent {
	int32_t Tag; // 0x88
	FBoxSphereBounds Bounds; // 0x8c
	FPointer SceneInfo; // 0xa8
	int32_t DetachFence; // 0xb0
	float LocalToWorldDeterminant; // 0xb4
	FMatrix LocalToWorld; // 0xc0
	int32_t MotionBlurInfoIndex; // 0x100
	TArray<FPointer> DecalList; // 0x104
	TArray<ComponentProperty> DecalsToReattach; // 0x114
	ComponentProperty ShadowParent; // 0x124
	ComponentProperty ReplacementPrimitive; // 0x12c
	ComponentProperty FogVolumeComponent; // 0x134
	ComponentProperty OverrideLightComponent; // 0x13c
	ComponentProperty LightEnvironment; // 0x144
	ComponentProperty PreviousLightEnvironment; // 0x14c
	float MinDrawDistance; // 0x154
	float MassiveLODDistance; // 0x158
	float MaxDrawDistance; // 0x15c
	float CachedMaxDrawDistance; // 0x160
	float MotionBlurInstanceScale; // 0x164
	float CullDistance; // 0x168
	float CachedCullDistance; // 0x16c
	ESceneDepthPriorityGroup DepthPriorityGroup; // 0x170
	ESceneDepthPriorityGroup ViewOwnerDepthPriorityGroup; // 0x171
	EDetailMode DetailMode; // 0x172
	ERBCollisionChannel RBChannel; // 0x173
	char RBDominanceGroup; // 0x174
	char PreviewEnvironmentShadowing; // 0x175
	FColor OutlineColor; // 0x178
	char OutlineWidth; // 0x17c
	char OutlineMinWidth; // 0x17d
	EBlendMode OutlineBlendMode; // 0x17e
	char StencilID; // 0x17f
	uint32_t bUseViewOwnerDepthPriorityGroup : 1; // 0x180
	uint32_t bAllowCullDistanceVolume : 1; // 0x180
	uint32_t HiddenGame : 1; // 0x180
	uint32_t HiddenEditor : 1; // 0x180
	uint32_t bOwnerNoSee : 1; // 0x180
	uint32_t bOnlyOwnerSee : 1; // 0x180
	uint32_t bIgnoreOwnerHidden : 1; // 0x180
	uint32_t bUseAsOccluder : 1; // 0x180
	uint32_t bAllowApproximateOcclusion : 1; // 0x180
	uint32_t bFirstFrameOcclusion : 1; // 0x180
	uint32_t bIgnoreNearPlaneIntersection : 1; // 0x180
	uint32_t bSelectable : 1; // 0x180
	uint32_t bForceMipStreaming : 1; // 0x180
	uint32_t bAcceptsDecals : 1; // 0x180
	uint32_t bAcceptsDecalsDuringGameplay : 1; // 0x180
	uint32_t bAcceptsStaticDecals : 1; // 0x180
	uint32_t bAcceptsDynamicDecals : 1; // 0x180
	uint32_t bIsRefreshingDecals : 1; // 0x180
	uint32_t bAllowDecalAutomaticReAttach : 1; // 0x180
	uint32_t bUsePerInstanceHitProxies : 1; // 0x180
	uint32_t CastShadow : 1; // 0x180
	uint32_t bForceDirectLightMap : 1; // 0x180
	uint32_t bCastDynamicShadow : 1; // 0x180
	uint32_t bCastStaticShadow : 1; // 0x180
	uint32_t bSelfShadowOnly : 1; // 0x180
	uint32_t bNoModSelfShadow : 1; // 0x180
	uint32_t bAcceptsDynamicDominantLightShadows : 1; // 0x180
	uint32_t bCastHiddenShadow : 1; // 0x180
	uint32_t bCastShadowAsTwoSided : 1; // 0x180
	uint32_t bAcceptsLights : 1; // 0x180
	uint32_t bAcceptsDynamicLights : 1; // 0x180
	uint32_t bUseOnePassLightingOnTranslucency : 1; // 0x180
	uint32_t bUsePrecomputedShadows : 1; // 0x184
	uint32_t bHasExplicitShadowParent : 1; // 0x184
	uint32_t bAllowAmbientOcclusion : 1; // 0x184
	uint32_t CollideActors : 1; // 0x184
	uint32_t AlwaysCheckCollision : 1; // 0x184
	uint32_t BlockActors : 1; // 0x184
	uint32_t BlockZeroExtent : 1; // 0x184
	uint32_t BlockNonZeroExtent : 1; // 0x184
	uint32_t CanBlockCamera : 1; // 0x184
	uint32_t BlockRigidBody : 1; // 0x184
	uint32_t bBlockFootPlacement : 1; // 0x184
	uint32_t bDisableAllRigidBody : 1; // 0x184
	uint32_t bSkipRBGeomCreation : 1; // 0x184
	uint32_t bNotifyRigidBodyCollision : 1; // 0x184
	uint32_t bFluidDrain : 1; // 0x184
	uint32_t bFluidTwoWay : 1; // 0x184
	uint32_t bIgnoreRadialImpulse : 1; // 0x184
	uint32_t bIgnoreRadialForce : 1; // 0x184
	uint32_t bIgnoreForceField : 1; // 0x184
	uint32_t bUseCompartment : 1; // 0x184
	uint32_t AlwaysLoadOnClient : 1; // 0x184
	uint32_t AlwaysLoadOnServer : 1; // 0x184
	uint32_t bIgnoreHiddenActorsMembership : 1; // 0x184
	uint32_t AbsoluteTranslation : 1; // 0x184
	uint32_t AbsoluteRotation : 1; // 0x184
	uint32_t AbsoluteScale : 1; // 0x184
	uint32_t bAllowShadowFade : 1; // 0x184
	uint32_t bSupportedOnMobile : 1; // 0x184
	uint32_t bWasSNFiltered : 1; // 0x184
	uint32_t Low : 1; // 0x184
	uint32_t Medium : 1; // 0x184
	uint32_t High : 1; // 0x184
	uint32_t DrawOutLine : 1; // 0x188
	uint32_t DrawOnlyHidden : 1; // 0x188
	uint32_t DisableDepthTestOutline : 1; // 0x188
	uint32_t EnableDepthWriteOutline : 1; // 0x188
	TArray<int32_t> OctreeNodes; // 0x18c
	int32_t TranslucencySortPriority; // 0x19c
	int32_t VisibilityId; // 0x1a0
	FLightingChannelContainer LightingChannels; // 0x1a4
	FRBCollisionChannelContainer RBCollideWithChannels; // 0x1a8
	ObjectProperty PhysMaterialOverride; // 0x1ac
	ObjectProperty BodyInstance; // 0x1b4
	FMatrix CachedParentToWorld; // 0x1c0
	FVector Translation; // 0x200
	FRotator Rotation; // 0x20c
	float Scale; // 0x218
	FVector Scale3D; // 0x21c
	float BoundsScale; // 0x228
	float LastSubmitTime; // 0x22c
	float LastRenderTime; // 0x230
	float ScriptRigidBodyCollisionThreshold; // 0x234
	float OutLineColorIntense; // 0x238
	float OutLineIntenseCycleTime; // 0x23c
	float OutLineCullDistance; // 0x240
	ObjectProperty OutlineMaterialOverride; // 0x244
	float OutlineWidthMaxDistance; // 0x24c
};

struct ACombatEffectKillZoneVolume : AVolume {
	FString ZoneName; // 0x280
};

struct UDistributionFloatConstantCurve : UDistributionFloat {
	FInterpCurveFloat ConstantCurve; // 0x7c
};

struct UInterpTrackColorProp : UInterpTrackVectorBase {
	FName PropertyName; // 0xb8
};

struct UCombatDataTableRefBasicChat : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString CodeName; // 0x70
	int32_t Size; // 0x80
	FString DisplayName; // 0x84
};

struct USeqAct_ConvertToString : USequenceAction {
	uint32_t bIncludeVarComment : 1; // 0x108
	FString VarSeparator; // 0x10c
	int32_t NumberOfInputs; // 0x11c
};

struct AMobileDebugCameraHUD : AMobileHUD {
	uint32_t bDrawDebugText : 1; // 0x680
};

struct UMaterialExpressionPanner : UMaterialExpression {
	FExpressionInput Coordinate; // 0xb0
	FExpressionInput Time; // 0xe4
	float SpeedX; // 0x118
	float SpeedY; // 0x11c
};

struct UCombatAnimBlendByIdle : UCombatAnimBlendBase {
	float IdleSpeedThreshold; // 0x144
	float IdleBlendDelay; // 0x148
	float IdleSpeedThresholdSqr; // 0x14c
	float TimeFromLastMovement; // 0x150
	ObjectProperty CombatPawnOwner; // 0x154
};

struct UParticleModuleLocationPrimitiveCylinder_Seeded : UParticleModuleLocationPrimitiveCylinder {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x104
};

struct UBrushComponent : UPrimitiveComponent {
	ObjectProperty Brush; // 0x250
	FKAggregateGeom BrushAggGeom; // 0x258
	FPointer BrushPhysDesc; // 0x2a4
	FKCachedConvexData_Mirror CachedPhysBrushData; // 0x2ac
	int32_t CachedPhysBrushDataVersion; // 0x2bc
	uint32_t bBlockComplexCollisionTrace : 1; // 0x2c0
};

struct USeqAct_PlayAgentAnimation : USeqAct_Latent {
	TArray<FName> AnimationList; // 0x120
	float BlendInTime; // 0x130
	float BlendOutTime; // 0x134
	uint32_t bUseRootMotion : 1; // 0x138
	uint32_t bFaceActionTargetFirst : 1; // 0x138
	uint32_t bLooping : 1; // 0x138
	uint32_t bBlendBetweenAnims : 1; // 0x138
	int32_t LoopIndex; // 0x13c
	float LoopTime; // 0x140
	ObjectProperty ActionTarget; // 0x144
};

struct UParticleModuleTypeDataPhysX : UParticleModuleTypeDataBase {
	ObjectProperty PhysXParSys; // 0x68
	FPhysXEmitterVerticalLodProperties VerticalLod; // 0x70
};

struct USeqAct_Delay : USeqAct_Latent {
	uint32_t bDelayActive : 1; // 0x120
	uint32_t bStartWillRestart : 1; // 0x120
	float DefaultDuration; // 0x124
	float Duration; // 0x128
	float LastUpdateTime; // 0x12c
	float RemainingTime; // 0x130
};

struct USeqAct_Deproject : USequenceAction {
	float ScreenX; // 0x108
	float ScreenY; // 0x10c
	float TraceDistance; // 0x110
	ObjectProperty HitObject; // 0x114
	FVector HitLocation; // 0x11c
	FVector HitNormal; // 0x128
};

struct UMaterialExpressionStaticSwitchParameter : UMaterialExpressionStaticBoolParameter {
	FExpressionInput A; // 0xdc
	FExpressionInput B; // 0x110
};

struct UCloudStorageBase : UPlatformInterfaceBase {
	TArray<FString> LocalCloudFiles; // 0x80
	uint32_t bSuppressDelegateCalls : 1; // 0x90
};

struct UCombatFrontEnd_Event_TabBase : UObject {
	ObjectProperty ParentMoviePlayer; // 0x60
	uint32_t bShowTab : 1; // 0x68
};

struct UInterpTrackDirector : UInterpTrack {
	TArray<FDirectorTrackCut> CutTrack; // 0xa0
	uint32_t bSimulateCameraCutsOnClients : 1; // 0xb0
};

struct UAnimNodeBlendBySpeed : UAnimNodeBlendList {
	float Speed; // 0x120
	int32_t LastChannel; // 0x124
	float BlendUpTime; // 0x128
	float BlendDownTime; // 0x12c
	float BlendDownPerc; // 0x130
	TArray<float> Constraints; // 0x134
	uint32_t bUseAcceleration : 1; // 0x144
	float BlendUpDelay; // 0x148
	float BlendDownDelay; // 0x14c
	float BlendDelayRemaining; // 0x150
};

struct UCombatCameraThirdPersonCameraMode_default : UGameThirdPersonCameraMode_Default {
	uint32_t bResetInterpolationOnActive : 1; // 0x264
};

struct ACombatDestructibleObject : AActor {
	ObjectProperty AmbientSoundCue; // 0x244
	ComponentProperty AmbientSoundComponent; // 0x24c
	int32_t ObjInstanceVersion; // 0x254
	uint32_t bComponentsSetUp : 1; // 0x258
	uint32_t bShutDown : 1; // 0x258
	uint32_t bHasBeenDestroyed : 1; // 0x258
	uint32_t bInitRBPhysCalled : 1; // 0x258
	uint32_t bLimitDamageTypes : 1; // 0x258
	uint32_t bAllowCompleteDestruction : 1; // 0x258
	uint32_t bCastStaticShadow : 1; // 0x258
	uint32_t bInternalPathsEnabled : 1; // 0x258
	TArray<UDamageType*> VulnerableToDamageType; // 0x25c
	TArray<UDamageType*> InstaKillDamageType; // 0x26c
	TArray<UDamageType*> IgnoreDamageType; // 0x27c
	float SelfDestructAllDelay; // 0x28c
	ComponentProperty LightEnvironment; // 0x290
	ComponentProperty LightEnvironmentToUseForActorSpawnParams; // 0x298
	FLightingChannelContainer LightingChannelsToUseForActorSpawnParams; // 0x2a0
	ObjectProperty ExplosionTemplate; // 0x2a4
	ObjectProperty CauserController; // 0x2ac
	TArray<FDestructibleSubobject> SubObjects; // 0x2b4
	TArray<FSubObjectStaticLightingInfo> SubObjectLightingInfos; // 0x2c4
	TArray<float> SubObjectHealths; // 0x2d4
	TArray<float> TempDamageCache; // 0x2e4
	char ResetCount; // 0x2f4
	char ProcessedMods[0x20]; // 0x2f5
	FReplicatedDamageModInfo ReplicatedDamageMods[0x20]; // 0x318
	float ClosestLocalPlayerSqDist; // 0x418
};

struct UMcpIdMappingManager : UMcpIdMappingBase {
	TArray<FMcpIdMapping> AccountMappings; // 0xa8
	FString AddMappingUrl; // 0xb8
	FString QueryMappingUrl; // 0xc8
	TArray<FAddMappingRequest> AddMappingRequests; // 0xd8
	TArray<FQueryMappingRequest> QueryMappingRequests; // 0xe8
};

struct UCombatFrontEnd_ExtendPeriodItemPopup : UCombatFrontEnd_Object {
	FInvenItemInfo TargetItemInfo; // 0xd0
	int32_t CurrentSelectType; // 0x108
};

struct UNavMeshGoal_Random : UNavMeshPathGoalEvaluator {
	int32_t MinDist; // 0x7c
	float BestRating; // 0x80
	FPointer PartialGoal; // 0x84
};

struct USkelControlBase : UAnimObject {
	FName ControlName; // 0x68
	float ControlStrength; // 0x70
	float BlendInTime; // 0x74
	float BlendOutTime; // 0x78
	AlphaBlendType BlendType; // 0x7c
	uint32_t bPostPhysicsController : 1; // 0x80
	uint32_t bSetStrengthFromAnimNode : 1; // 0x80
	uint32_t bInitializedCachedNodeList : 1; // 0x80
	uint32_t bControlledByAnimMetada : 1; // 0x80
	uint32_t bInvertMetadataWeight : 1; // 0x80
	uint32_t bPropagateSetActive : 1; // 0x80
	uint32_t bIgnoreWhenNotRendered : 1; // 0x80
	uint32_t bShouldTickInScript : 1; // 0x80
	uint32_t bShouldTickOwner : 1; // 0x80
	uint32_t bEnableEaseInOut : 1; // 0x80
	float StrengthTarget; // 0x84
	float BlendTimeToGo; // 0x88
	TArray<FName> StrengthAnimNodeNameList; // 0x8c
	TArray<ObjectProperty> CachedNodeList; // 0x9c
	float AnimMetadataWeight; // 0xac
	int32_t AnimMetaDataUpdateTag; // 0xb0
	float BoneScale; // 0xb4
	int32_t ControlTickTag; // 0xb8
	int32_t IgnoreAtOrAboveLOD; // 0xbc
	ObjectProperty NextControl; // 0xc0
	int32_t ControlPosX; // 0xc8
	int32_t ControlPosY; // 0xcc
};

struct USeqAct_Timer : USequenceAction {
	float ActivationTime; // 0x108
	float Time; // 0x10c
};

struct UCombatDataTableRefClanColor : UCombatDataTableType {
	int32_t Idx; // 0x6c
	int32_t R; // 0x70
	int32_t G; // 0x74
	int32_t B; // 0x78
};

struct UParticleModuleLocationSkelVertSurface : UParticleModuleLocationBase {
	ELocationSkelVertSurfaceSource SourceType; // 0x68
	FVector UniversalOffset; // 0x6c
	uint32_t bUpdatePositionEachFrame : 1; // 0x78
	uint32_t bOrientMeshEmitters : 1; // 0x78
	uint32_t bEnforceNormalCheck : 1; // 0x78
	FName SkelMeshActorParamName; // 0x7c
	TArray<FName> ValidAssociatedBones; // 0x84
	FVector NormalToCompare; // 0x94
	float NormalCheckToleranceDegrees; // 0xa0
	float NormalCheckTolerance; // 0xa4
	TArray<int32_t> ValidMaterialIndices; // 0xa8
};

struct UFogVolumeSphericalDensityComponent : UFogVolumeDensityComponent {
	float MaxDensity; // 0xd4
	FVector SphereCenter; // 0xd8
	float SphereRadius; // 0xe4
	ComponentProperty PreviewSphereRadius; // 0xe8
};

struct UCombatDataTableRefEvolveLevelup : UCombatDataTableType {
	int32_t WeaponRank; // 0x6c
	int32_t RankPointMin; // 0x70
	int32_t RankPointMax; // 0x74
	float AmmoRatio; // 0x78
	float AutoTime; // 0x7c
	int32_t AutoScore; // 0x80
	FString RespawnWeaponGroupCodename; // 0x84
};

struct UCBFamilyInfo : UObject {
	FMeshPart CharacterMesh; // 0x60
	FString PortraitIconPath; // 0x7c
	ObjectProperty ArmMesh; // 0x8c
	ObjectProperty PhysAsset; // 0x94
	ObjectProperty PhysAssetForDeath; // 0x9c
	TArray<ObjectProperty> AnimSets; // 0xa4
	UCBPawnSoundGroup* SoundGroupClass; // 0xb4
	FString DefaultRadioVoiceClassName; // 0xbc
	TArray<FString> RadioVoice_TargetModeName; // 0xcc
	TArray<ObjectProperty> BloodSplatterDecalMaterials; // 0xdc
	TArray<ObjectProperty> BloodSplatterDecalMaterialFloors; // 0xec
	TArray<ObjectProperty> LowGoreBloodSplatterDecalMaterials; // 0xfc
	TArray<ObjectProperty> LowGoreBloodSplatterDecalMaterialFloors; // 0x10c
	ObjectProperty HeadBloodForFPPSCTemplate; // 0x11c
	ObjectProperty BloodForFPMuzzleFlashPSCTemplate; // 0x124
	ObjectProperty LowgoreHeadBloodloodForFPPSCTemplate; // 0x12c
	ObjectProperty LowGoreBloodForFPMuzzleFlashPSCTemplate; // 0x134
	float DefaultMeshScale; // 0x13c
	float MaxHealthRate_Buff; // 0x140
	float MaxAutoCureHealthModifier_Buff; // 0x144
	float HealthCureRate_Buff; // 0x148
	float AddMainAmmo_Buff; // 0x14c
	float AddSubAmmo_Buff; // 0x150
	float AddMainMagazineAmmo_Buff; // 0x154
	float AddSubMagazineAmmo_Buff; // 0x158
	float MaxMainMagazineAmmo_Buff; // 0x15c
	float MaxSubMagazineAmmo_Buff; // 0x160
	float WeaponReloadSpeedRate_Buff; // 0x164
	float WeaponChangeRate_Buff; // 0x168
	float GroundCrouchSpeedRate_Buff; // 0x16c
	float GroundWalkingSpeedRate_Buff; // 0x170
	float GroundRunSpeedRate_Buff; // 0x174
	float MaxGroundSpeed; // 0x178
	float GroundAccelationRate_Buff; // 0x17c
	float GunAttackRate_Buff; // 0x180
	float GunGuardRate_Buff; // 0x184
	float MeleeAttackRate_Buff; // 0x188
	float MeleeGuardRate_Buff; // 0x18c
	float ExplosiveAttackRate_Buff; // 0x190
	float ExplosiveGuardRate_Buff; // 0x194
	float DetailedRadarDistance_Buff; // 0x198
	float RadarRange_Buff; // 0x19c
	float ShortenRespawnDelay_Buff; // 0x1a0
	FName RefDropCodeName; // 0x1a4
	float AdditionalDamagedDecelerationRatio; // 0x1ac
	float MaxDamagedDecelerationRatio; // 0x1b0
	FName FamilyInfoType; // 0x1b4
	int32_t OverridePostProcessChain; // 0x1bc
	int32_t OverrideLowPostProcessChain; // 0x1c0
	uint32_t bIsFemale : 1; // 0x1c4
	uint32_t bCanPickupWeapon : 1; // 0x1c4
	uint32_t bCanSelectSkillClass : 1; // 0x1c4
	uint32_t bCanPickupSupplies : 1; // 0x1c4
};

struct UMaterialFunction : UObject {
	FGuid StateId; // 0x60
	FString Description; // 0x70
	uint32_t bExposeToLibrary : 1; // 0x80
	uint32_t bReentrantFlag : 1; // 0x80
	TArray<FString> LibraryCategories; // 0x84
	TArray<ObjectProperty> FunctionExpressions; // 0x94
};

struct AWorldAttractor : AActor {
	uint32_t bEnabled : 1; // 0x244
	float LoopDuration; // 0x248
	float CurrentTime; // 0x24c
	EWorldAttractorFalloffType FalloffType; // 0x250
	FMatineeRawDistributionFloat FalloffExponent; // 0x254
	FMatineeRawDistributionFloat Range; // 0x280
	FMatineeRawDistributionFloat Strength; // 0x2ac
	float CollisionRadius; // 0x2d8
	FMatineeRawDistributionFloat DragCoefficient; // 0x2dc
	FMatineeRawDistributionFloat DragRadius; // 0x308
};

struct UCombatDataTableRefGameServer : UCombatDataTableType {
	int32_t Server; // 0x6c
	int32_t TitleId; // 0x70
	int32_t DescriptionID; // 0x74
};

struct UAnimNodeBlendBase : UAnimNode {
	TArray<FAnimBlendChild> Children; // 0xe8
	uint32_t bFixNumChildren : 1; // 0xf8
	AlphaBlendType BlendType; // 0xfc
};

struct APortalMarker : ANavigationPoint {
	ObjectProperty MyPortal; // 0x33c
};

struct UGFxMoviePlayer : UObject {
	FPointer pMovie; // 0x60
	FPointer pCaptureKeys; // 0x68
	FPointer pFocusIgnoreKeys; // 0x70
	TMap<None, None> ASUClasses; // 0x78
	TMap<None, None> ASUObjects; // 0xc0
	int32_t NextASUObject; // 0x108
	ObjectProperty MovieInfo; // 0x10c
	uint32_t bMovieIsOpen : 1; // 0x114
	uint32_t bDisplayWithHudOff : 1; // 0x114
	uint32_t bEnableGammaCorrection : 1; // 0x114
	uint32_t bWidgetsInitializedThisFrame : 1; // 0x114
	uint32_t bLogUnhandedWidgetInitializations : 1; // 0x114
	uint32_t bAllowInput : 1; // 0x114
	uint32_t bAllowFocus : 1; // 0x114
	uint32_t bAutoPlay : 1; // 0x114
	uint32_t bPauseGameWhileActive : 1; // 0x114
	uint32_t bDisableWorldRendering : 1; // 0x114
	uint32_t bCloseOnLevelChange : 1; // 0x114
	uint32_t bOnlyOwnerFocusable : 1; // 0x114
	uint32_t bForceFullViewport : 1; // 0x114
	uint32_t bDiscardNonOwnerInput : 1; // 0x114
	uint32_t bCaptureInput : 1; // 0x114
	uint32_t bCaptureMouseInput : 1; // 0x114
	uint32_t bIgnoreMouseInput : 1; // 0x114
	uint32_t bIsSplitscreenLayoutModified : 1; // 0x114
	uint32_t bShowHardwareMouseCursor : 1; // 0x114
	uint32_t bBlurLesserMovies : 1; // 0x114
	uint32_t bHideLesserMovies : 1; // 0x114
	uint32_t bIsPriorityBlurred : 1; // 0x114
	uint32_t bIsPriorityHidden : 1; // 0x114
	uint32_t bIgnoreVisibilityEffect : 1; // 0x114
	uint32_t bIgnoreBlurEffect : 1; // 0x114
	ObjectProperty RenderTexture; // 0x118
	int32_t LocalPlayerOwnerIndex; // 0x120
	ObjectProperty ExternalInterface; // 0x124
	TArray<FName> CaptureKeys; // 0x12c
	TArray<FName> FocusIgnoreKeys; // 0x13c
	TArray<FExternalTexture> ExternalTextures; // 0x14c
	TArray<FSoundThemeBinding> SoundThemes; // 0x15c
	GFxTimingMode TimingMode; // 0x16c
	GFxRenderTextureMode RenderTextureMode; // 0x16d
	char Priority; // 0x16e
	TArray<FGFxWidgetBinding> WidgetBindings; // 0x170
	TMap<None, None> WidgetPathBindings; // 0x180
	ObjectProperty SplitscreenLayoutObject; // 0x1c8
	int32_t SplitscreenLayoutYAdjust; // 0x1d0
	DelegateProperty __OnPostAdvance__Delegate; // 0x1d4
};

struct UParticleModuleMeshRotationRate_Seeded : UParticleModuleMeshRotationRate {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x8c
};

struct ACombatAIGameTDMBase : ACombatTDMGame {
	TArray<FSAITypeInfo> AITypeInfoArray; // 0x78c
	TArray<FSAIWeaponInfo> PrimaryWeaponInfoArray; // 0x79c
	TArray<FSAIWeaponInfo> SubWeaponInfoArray; // 0x7ac
	TArray<FSAIWeaponInfo> MeleeWeaponInfoArray; // 0x7bc
	TArray<FSAIWeaponInfo> GrenadeWeaponInfoArray; // 0x7cc
	Team AITeam; // 0x7dc
	Team PlayerTeam; // 0x7dd
	float AIRespawnDelay; // 0x7e0
	float AIInvulnerableTime; // 0x7e4
	TArray<ObjectProperty> BTResouceArray; // 0x7e8
	ObjectProperty AIMan; // 0x7f8
	int32_t CurrentlyBotID; // 0x800
};

struct ACombatTeamGameHUD : ACombatHUD {
	EUIGameStatus UIState; // 0x5b4
	EUIPlayerState PrevUIPlayerState; // 0x5b5
	EUIPlayerState CurrentUIPlayerState; // 0x5b6
	EUIGameStatus CurrentUIGameStatus; // 0x5b7
	float RoundOverDisplayTime; // 0x5b8
	ACombatRadarCore* NavigationClass; // 0x5bc
	ObjectProperty NavigationActor; // 0x5c4
	ObjectProperty RadioSystem; // 0x5cc
	float HitAmount; // 0x5d4
	TArray<FName> WeaponAmmoRedEffect; // 0x5d8
	float LocationLabelUpdateTime; // 0x5e8
	uint32_t IsDisplaySelectingWeapon : 1; // 0x5ec
	uint32_t bPrintScoreboardDebugMsg : 1; // 0x5ec
	uint32_t IsTeamChange : 1; // 0x5ec
	uint32_t bDisplayViewTargetKillMark : 1; // 0x5ec
	float TimerDuration_UpdatePlayerScore; // 0x5f0
	float TimerDuration_ChampionshipPlayerInfoUI; // 0x5f4
	int32_t TacticalMapRankLabelID; // 0x5f8
	ObjectProperty pendingMarkerUI; // 0x5fc
	TArray<FModeNameStruct> ModeNameList; // 0x604
	FString LastVictimName; // 0x614
	ObjectProperty UIDataStore_HUD; // 0x624
};

struct UInterpGroup : UObject {
	FPointer VfTable_FInterpEdInputInterface; // 0x60
	TArray<ObjectProperty> InterpTracks; // 0x68
	FName GroupName; // 0x78
	FColor GroupColor; // 0x80
	TArray<ObjectProperty> GroupAnimSets; // 0x84
	uint32_t bCollapsed : 1; // 0x94
	uint32_t bVisible : 1; // 0x94
	uint32_t bIsFolder : 1; // 0x94
	uint32_t bIsParented : 1; // 0x94
	uint32_t bIsSelected : 1; // 0x94
};

struct UCombatDataTableRefTodayGame : UCombatDataTableType {
	int32_t Idx; // 0x6c
	FString CodeName; // 0x70
	int32_t DayInfo; // 0x80
	FString ModeGroupCodename; // 0x84
	FTimeData StartDay; // 0x94
	FTimeData EndDay; // 0x9c
};

struct AMobileHUD : AHUD {
	uint32_t bShowGameHud : 1; // 0x564
	uint32_t bShowMobileHud : 1; // 0x564
	uint32_t bForceMobileHUD : 1; // 0x564
	uint32_t bShowMobileTilt : 1; // 0x564
	uint32_t bDebugTouches : 1; // 0x564
	uint32_t bDebugZones : 1; // 0x564
	uint32_t bDebugZonePresses : 1; // 0x564
	uint32_t bShowMotionDebug : 1; // 0x564
	ObjectProperty JoystickBackground; // 0x568
	FTextureUVs JoystickBackgroundUVs; // 0x570
	ObjectProperty JoystickHat; // 0x580
	FTextureUVs JoystickHatUVs; // 0x588
	ObjectProperty ButtonImages[0x2]; // 0x598
	FTextureUVs ButtonUVs[0x2]; // 0x5a8
	ObjectProperty ButtonFont; // 0x5c8
	FColor ButtonCaptionColor; // 0x5d0
	ObjectProperty TrackballBackground; // 0x5d4
	FTextureUVs TrackballBackgroundUVs; // 0x5dc
	ObjectProperty TrackballTouchIndicator; // 0x5ec
	FTextureUVs TrackballTouchIndicatorUVs; // 0x5f4
	ObjectProperty SliderImages[0x4]; // 0x604
	FTextureUVs SliderUVs[0x4]; // 0x624
	float MobileTiltX; // 0x664
	float MobileTiltY; // 0x668
	float MobileTiltSize; // 0x66c
	TArray<ObjectProperty> KismetRenderEvents; // 0x670
};

struct UCombatDataTableRefGameChannel : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString CodeName; // 0x70
	int32_t Level_Block; // 0x80
	int32_t Level_Low; // 0x84
	int32_t Level_High; // 0x88
	int32_t KAD_Block; // 0x8c
	int32_t KAD_Min; // 0x90
	int32_t KAD_Max; // 0x94
	int32_t Clan_Block; // 0x98
	int32_t Championship_Block; // 0x9c
	int32_t ChampionshipTF; // 0xa0
	int32_t OpenChannel; // 0xa4
	int32_t OpenWorld; // 0xa8
	int32_t TitleId; // 0xac
	int32_t DescriptionID; // 0xb0
	int32_t Ping_Block; // 0xb4
	int32_t PingCount; // 0xb8
	int32_t PingTolerance; // 0xbc
	int32_t OpenPublisher; // 0xc0
	int32_t DesignType; // 0xc4
	int32_t Server; // 0xc8
	int32_t ChannelState; // 0xcc
};

struct UParticleModuleBeamNoise : UParticleModuleBeamBase {
	uint32_t bLowFreq_Enabled : 1; // 0x68
	uint32_t bNRScaleEmitterTime : 1; // 0x68
	uint32_t bSmooth : 1; // 0x68
	uint32_t bNoiseLock : 1; // 0x68
	uint32_t bOscillate : 1; // 0x68
	uint32_t bUseNoiseTangents : 1; // 0x68
	uint32_t bTargetNoise : 1; // 0x68
	uint32_t bApplyNoiseScale : 1; // 0x68
	int32_t Frequency; // 0x6c
	int32_t Frequency_LowRange; // 0x70
	FRawDistributionVector NoiseRange; // 0x74
	FRawDistributionFloat NoiseRangeScale; // 0x98
	FRawDistributionVector NoiseSpeed; // 0xbc
	float NoiseLockRadius; // 0xe0
	float NoiseLockTime; // 0xe4
	float NoiseTension; // 0xe8
	FRawDistributionFloat NoiseTangentStrength; // 0xec
	int32_t NoiseTessellation; // 0x110
	float FrequencyDistance; // 0x114
	FRawDistributionFloat NoiseScale; // 0x118
};

struct AReverbVolume : AVolume {
	float Priority; // 0x280
	uint32_t bEnabled : 1; // 0x284
	FReverbSettings Settings; // 0x288
	FInteriorSettings AmbientZoneSettings; // 0x298
	ObjectProperty NextLowerPriorityVolume; // 0x2bc
};

struct USeqAct_ConsoleCommand : USequenceAction {
	FString Command; // 0x108
	TArray<FString> Commands; // 0x118
};

struct UNavMeshGoal_Null : UNavMeshPathGoalEvaluator {
	FPointer PartialGoal; // 0x7c
};

struct UCombatExplosionLight : UPointLightComponent {
	uint32_t bInitialized : 1; // 0x240
	float Lifetime; // 0x244
	int32_t TimeShiftIndex; // 0x248
	TArray<FLightValues> TimeShift; // 0x24c
	DelegateProperty __OnLightFinished__Delegate; // 0x25c
};

struct UMaterialExpressionStaticBoolParameter : UMaterialExpressionParameter {
	uint32_t DefaultValue : 1; // 0xd0
	uint32_t ExtendedCaptionDisplay : 1; // 0xd0
	FPointer InstanceOverride; // 0xd4
};

struct UMorphNodeWeightByBoneRotation : UMorphNodeWeightBase {
	float Angle; // 0x84
	float NodeWeight; // 0x88
	FName BoneName; // 0x8c
	EAxis BoneAxis; // 0x94
	uint32_t bInvertBoneAxis : 1; // 0x98
	uint32_t bControlMaterialParameter : 1; // 0x98
	TArray<FBoneAngleMorph> WeightArray; // 0x9c
	int32_t MaterialSlotId; // 0xac
	FName ScalarParameterName; // 0xb0
	ObjectProperty MaterialInstanceConstant; // 0xb8
};

struct UModelComponent : UPrimitiveComponent {
	ObjectProperty Model; // 0x250
	int32_t ZoneIndex; // 0x258
	int32_t ComponentIndex; // 0x25c
	TArray<FPointer> Nodes; // 0x260
	TArray<FPointer> Elements; // 0x270
};

struct UCombatAIAction_MoveToward : UCombatAIActionBase {
	ObjectProperty ActionNode; // 0x78
	ObjectProperty LastPathFindResultActor; // 0x80
};

struct UAppNotificationsBase : UPlatformInterfaceBase {
	FLaunchNotificationInfo AppLaunchNotification; // 0x80
	DelegateProperty __OnReceivedLocalNotification__Delegate; // 0xac
	DelegateProperty __OnReceivedRemoteNotification__Delegate; // 0xbc
};

struct USeqAct_CombatDisplayMessage : USequenceAction {
	FString Message; // 0x108
};

struct USeqVar_Named : USequenceVariable {
	USequenceVariable* ExpectedType; // 0xa0
	FName FindVarName; // 0xa8
	uint32_t bStatusIsOk : 1; // 0xb0
};

struct UMorphTarget : UObject {
	TArray<int32_t> MorphLODModels; // 0x60
	int32_t MaterialSlotId; // 0x70
	FName ScalarParameterName; // 0x74
};

struct ACombatProj_Plant : ACombatProj_ExplosiveBase {
	int32_t Health; // 0x3e4
	char TeamNumIndex; // 0x3e8
	FName StateName; // 0x3ec
	int32_t PlayerID; // 0x3f4
	float ExplosionDelayTime; // 0x3f8
	float DirectionalExplosionAngle; // 0x3fc
	float AmbientExploDamageRadius; // 0x400
	FRotator DropRotation; // 0x404
	float VolumeRadius; // 0x410
	float VolumeOffSetX; // 0x414
	float VolumeTouchHegiht; // 0x418
	float LastPawnCheckTime; // 0x41c
	uint32_t bExplosionAngleDrawDebug : 1; // 0x420
	uint32_t bStartExplosionTimer : 1; // 0x420
	uint32_t bChangedLocation : 1; // 0x420
	ComponentProperty AllyLensFEffect; // 0x424
	ComponentProperty EnemyLensFEffect; // 0x42c
	FName EffectSocketName; // 0x434
	ObjectProperty DetectSound; // 0x43c
	ComponentProperty TouchCylinder; // 0x444
	TArray<ObjectProperty> CheckPawnList; // 0x44c
};

struct AWeapon : AInventory {
	char CurrentFireMode; // 0x2c0
	TArray<FName> FiringStatesArray; // 0x2c4
	TArray<EWeaponFireType> WeaponFireTypes; // 0x2d4
	TArray<ADroppedPickup*> WeaponFirePickup; // 0x2e4
	WordProperty RecoilSeed; // 0x2f4
	TArray<AProjectile*> WeaponProjectiles; // 0x2f8
	TArray<float> FireInterval; // 0x308
	TArray<float> Spread; // 0x318
	TArray<float> InstantHitDamage; // 0x328
	TArray<float> InstantHitMomentum; // 0x338
	TArray<UDamageType*> InstantHitDamageTypes; // 0x348
	float EquipTime; // 0x358
	float PutDownTime; // 0x35c
	FVector FireOffset; // 0x360
	uint32_t bWeaponPutDown : 1; // 0x36c
	uint32_t bCanThrow : 1; // 0x36c
	uint32_t bWasOptionalSet : 1; // 0x36c
	uint32_t bWasDoNotActivate : 1; // 0x36c
	uint32_t bInstantHit : 1; // 0x36c
	uint32_t bMeleeWeapon : 1; // 0x36c
	float WeaponRange; // 0x370
	ComponentProperty Mesh; // 0x374
	float DefaultAnimSpeed; // 0x37c
	float Priority; // 0x380
	ObjectProperty AIController; // 0x384
	TArray<char> ShouldFireOnRelease; // 0x38c
	float AIRating; // 0x39c
	float CachedMaxRange; // 0x3a0
};

struct UGripBTTimer : UGripBTNode {
	float MinDuration; // 0xbc
	float MaxDuration; // 0xc0
};

struct UGFxEngine : UObject {
	TArray<FGCReference> GCReferences; // 0x60
	int32_t RefCount; // 0x70
};

struct UCBUIDataStore_Mission : UUIDataStore_Settings {
	TArray<FUIMissionStruct> MissionList; // 0x98
	TArray<FUIModeGroupStruct> ModeGroupList; // 0xa8
	TArray<FUIModeStruct> ModeList; // 0xb8
	TArray<FUIMapStruct> MapList; // 0xc8
	TArray<FUIModeGroupBindStruct> ModeGroupBindList; // 0xd8
	TArray<FUIModeMapStruct> ModeMapList; // 0xe8
	TArray<int32_t> MissionServiceOffList; // 0xf8
	TArray<int32_t> MissionModeServiceOffList; // 0x108
	TArray<int32_t> ModeServiceOffList; // 0x118
	TArray<int32_t> ModeMapServiceOffList; // 0x128
	TArray<int32_t> MapServiceOffList; // 0x138
	TArray<int32_t> ModeGroupServiceOffList; // 0x148
};

struct ADoorMarker : ANavigationPoint {
	ObjectProperty MyDoor; // 0x33c
	EDoorType DoorType; // 0x344
	ObjectProperty DoorTrigger; // 0x348
	uint32_t bWaitUntilCompletelyOpened : 1; // 0x350
	uint32_t bInitiallyClosed : 1; // 0x350
	uint32_t bBlockedWhenClosed : 1; // 0x350
	uint32_t bDoorOpen : 1; // 0x350
	uint32_t bTempDisabledCollision : 1; // 0x350
};

struct UCombatChampionshipManager : UObject {
	TArray<FChampionshipTeamData> ChampionshipTeamList; // 0x60
};

struct UCombatFrontEnd_RandomBoxShop : UCombatFrontEnd_Maintenance {
	ObjectProperty PkgItemListGFxObj; // 0xe4
	ObjectProperty PkgItemInfoGFxObj; // 0xec
	ObjectProperty CoinBarGFxObj; // 0xf4
	int32_t SelectedMainTab; // 0xfc
	int32_t SelectedItemID; // 0x100
	int32_t SelectedInfoTab; // 0x104
	int32_t SelectedInfoTabType; // 0x108
	int32_t SelectedPriceIndex; // 0x10c
	TArray<FShopTabStruct> MainCoinTabInfo; // 0x110
	uint32_t bViewItemInfo : 1; // 0x120
	int32_t CurrentClothItemRefIndex; // 0x124
	int32_t AutoSelectItemID; // 0x128
	int32_t AutoSelectMainTab; // 0x12c
	TArray<int32_t> CheckList; // 0x130
	int32_t EndRemainTime; // 0x140
};

struct UInterpTrackLinearColorProp : UInterpTrackLinearColorBase {
	FName PropertyName; // 0xb8
};

struct ACrowdAgentBase : AActor {
	FPointer VfTable_IInterface_NavigationHandle; // 0x244
};

struct UTerrainComponent : UPrimitiveComponent {
	TArray<ObjectProperty> ShadowMaps; // 0x250
	TArray<FGuid> IrrelevantLights; // 0x260
	FPointer TerrainObject; // 0x270
	int32_t SectionBaseX; // 0x278
	int32_t SectionBaseY; // 0x27c
	int32_t SectionSizeX; // 0x280
	int32_t SectionSizeY; // 0x284
	int32_t TrueSectionSizeX; // 0x288
	int32_t TrueSectionSizeY; // 0x28c
	FLightMapRef LightMap; // 0x290
	TArray<FTerrainPatchBounds> PatchBounds; // 0x298
	TArray<FTerrainMaterialMask> BatchMaterials; // 0x2a8
	int32_t FullBatch; // 0x2b8
	FTerrainBVTree BVTree; // 0x2bc
	TArray<FVector> CollisionVertices; // 0x2cc
	FPointer RBHeightfield; // 0x2dc
	uint32_t bDisplayCollisionLevel : 1; // 0x2e4
};

struct UIniLocPatcher : UObject {
	TArray<FIniLocFileEntry> Files; // 0x60
	uint32_t bRequestEmsFileList : 1; // 0x70
	int32_t MaxCachedFileAge; // 0x74
	TScriptInterface<Class> TitleFileInterface; // 0x78
	TScriptInterface<Class> TitleFileCacheInterface; // 0x88
	TArray<DelegateProperty> ReadTitleFileCompleteDelegates; // 0x98
	DelegateProperty __OnReadTitleFileComplete__Delegate; // 0xa8
	DelegateProperty __OnAllTitleFilesCompleted__Delegate; // 0xb8
};

struct UCombatClanTransaction : UObject {
	TMap<None, None> ClanListMap; // 0x60
	int32_t ClanListTotalPage; // 0xa8
	TMap<None, None> ClanJoinMap; // 0xac
	FClanListDetailData ClanListDetailInfo; // 0xf4
};

struct AInventoryManager : AActor {
	ObjectProperty InventoryChain; // 0x244
	ObjectProperty PendingWeapon; // 0x24c
	ObjectProperty LastAttemptedSwitchToWeapon; // 0x254
	uint32_t bMustHoldWeapon : 1; // 0x25c
	TArray<int32_t> PendingFire; // 0x260
};

struct UMaterialEffect : UPostProcessEffect {
	ObjectProperty Material; // 0x88
};

struct UCombatWeaponRISBase_Scope : UCombatWeaponRISBase_Aiming {
	ObjectProperty FPCustomAnim; // 0xd08
	FName FireAnimName; // 0xd10
	ObjectProperty ScopeMaterial; // 0xd18
	FScopeMaterialVectorParameter ReadyToFireParam; // 0xd20
	FScopeMaterialVectorParameter UnavailableToFireParam; // 0xd38
	uint32_t bLastReadyToFire : 1; // 0xd50
};

struct AGameExplosionActor : AActor {
	uint32_t bHasExploded : 1; // 0x244
	uint32_t bExplodeMoreThanOnce : 1; // 0x244
	uint32_t bTrackExplosionParticleSystemLifespan : 1; // 0x244
	uint32_t bDrawDebug : 1; // 0x244
	ComponentProperty ExplosionLight; // 0x248
	ComponentProperty ExplosionRadialBlur; // 0x250
	float LightFadeTime; // 0x258
	float LightFadeTimeRemaining; // 0x25c
	float LightInitialBrightness; // 0x260
	float RadialBlurFadeTime; // 0x264
	float RadialBlurFadeTimeRemaining; // 0x268
	float RadialBlurMaxBlurAmount; // 0x26c
	ObjectProperty ExplosionTemplate; // 0x270
	ComponentProperty RadialImpulseComponent; // 0x278
	ObjectProperty InstigatorController; // 0x280
	ObjectProperty HitActorFromPhysMaterialTrace; // 0x288
	FVector HitLocationFromPhysMaterialTrace; // 0x290
	ObjectProperty Attachee; // 0x29c
	ObjectProperty AttacheeController; // 0x2a4
	float DirectionalExplosionMinDot; // 0x2ac
	FVector ExplosionDirection; // 0x2b0
};

struct ACombatArmsRaceGame : ACombatTDMGameBase {
	TArray<FWeaponLevelInfo> WeaponLevelList; // 0x78c
};

struct UFont : UObject {
	TArray<FFontCharacter> Characters; // 0x60
	TArray<ObjectProperty> Textures; // 0x70
	TMap<None, None> CharRemap; // 0x80
	int32_t IsRemapped; // 0xc8
	float EmScale; // 0xcc
	float Ascent; // 0xd0
	float Descent; // 0xd4
	float Leading; // 0xd8
	int32_t Kerning; // 0xdc
	FFontImportOptionsData ImportOptions; // 0xe0
	int32_t NumCharacters; // 0x188
	TArray<int32_t> MaxCharHeight; // 0x18c
	float ScalingFactor; // 0x19c
};

struct UGameThirdPersonCameraMode : UObject {
	ObjectProperty ThirdPersonCam; // 0x60
	float FOVAngle; // 0x68
	float BlendTime; // 0x6c
	uint32_t bLockedToViewTarget : 1; // 0x70
	uint32_t bDirectLook : 1; // 0x70
	uint32_t bFollowTarget : 1; // 0x70
	uint32_t bInterpLocation : 1; // 0x70
	uint32_t bUsePerAxisOriginLocInterp : 1; // 0x70
	uint32_t bInterpRotation : 1; // 0x70
	uint32_t bRotInterpSpeedConstant : 1; // 0x70
	uint32_t bDoPredictiveAvoidance : 1; // 0x70
	uint32_t bValidateWorstLoc : 1; // 0x70
	uint32_t bSkipCameraCollision : 1; // 0x70
	uint32_t bSmoothViewOffsetPitchChanges : 1; // 0x70
	uint32_t bApplyDeltaViewOffset : 1; // 0x70
	uint32_t bAdjustDOF : 1; // 0x70
	uint32_t bDOFUpdated : 1; // 0x70
	uint32_t bNoFOVPostProcess : 1; // 0x70
	uint32_t bInterpViewOffsetOnlyForCamTransition : 1; // 0x70
	float FollowingInterpSpeed_Pitch; // 0x74
	float FollowingInterpSpeed_Yaw; // 0x78
	float FollowingInterpSpeed_Roll; // 0x7c
	float FollowingCameraVelThreshold; // 0x80
	float OriginLocInterpSpeed; // 0x84
	FVector PerAxisOriginLocInterpSpeed; // 0x88
	float OriginRotInterpSpeed; // 0x94
	FVector StrafeLeftAdjustment; // 0x98
	FVector StrafeRightAdjustment; // 0xa4
	float StrafeOffsetScalingThreshold; // 0xb0
	float StrafeOffsetInterpSpeedIn; // 0xb4
	float StrafeOffsetInterpSpeedOut; // 0xb8
	FVector LastStrafeOffset; // 0xbc
	FVector RunFwdAdjustment; // 0xc8
	FVector RunBackAdjustment; // 0xd4
	float RunOffsetScalingThreshold; // 0xe0
	float RunOffsetInterpSpeedIn; // 0xe4
	float RunOffsetInterpSpeedOut; // 0xe8
	FVector LastRunOffset; // 0xec
	FVector WorstLocOffset; // 0xf8
	FVector TargetRelativeCameraOriginOffset; // 0x104
	FViewOffsetData ViewOffset; // 0x110
	FViewOffsetData ViewOffset_ViewportAdjustments[0x6]; // 0x134
	float DOF_FalloffExponent; // 0x20c
	float DOF_BlurKernelSize; // 0x210
	float DOF_FocusInnerRadius; // 0x214
	float DOF_MaxNearBlurAmount; // 0x218
	float DOF_MaxFarBlurAmount; // 0x21c
	float LastDOFRadius; // 0x220
	float LastDOFDistance; // 0x224
	float DOFDistanceInterpSpeed; // 0x228
	FVector DOFTraceExtent; // 0x22c
	float DOF_RadiusFalloff; // 0x238
	FVector2D DOF_RadiusRange; // 0x23c
	FVector2D DOF_RadiusDistRange; // 0x244
	float ViewOffsetInterp; // 0x24c
	float OffsetAdjustmentInterpSpeed; // 0x250
	ECameraViewportTypes CurrentViewportType; // 0x254
};

struct USeqEvent_Touch : USequenceEvent {
	TArray<AActor*> ClassProximityTypes; // 0x128
	TArray<AActor*> IgnoredClassProximityTypes; // 0x138
	uint32_t bForceOverlapping : 1; // 0x148
	uint32_t bUseInstigator : 1; // 0x148
	uint32_t bAllowDeadPawns : 1; // 0x148
	TArray<ObjectProperty> TouchedList; // 0x14c
};

struct UParticleModuleEventReceiverBase : UParticleModuleEventBase {
	EParticleEventType EventGeneratorType; // 0x68
	FName EventName; // 0x6c
};

struct UGripActionNode_SwitchWeapon : UCombatAIActionNodeBase {
	EWeaponGroup WeaponGroup; // 0xf4
};

struct UCombatHUD_RadioMessage : UCombatHUDEntity_Base {
	FLableDataType LableData[0x2]; // 0xc0
	DelegateProperty __OnGetRadioMsgKeyBinding__Delegate; // 0xe8
	DelegateProperty __OnSetRadioKeyBinding__Delegate; // 0xf8
};

struct UAnimMetaData_SkelControlKeyFrame : UAnimMetaData_SkelControl {
	TArray<FTimeModifier> KeyFrames; // 0x7c
};

struct UCombatWeaponRISBase : UObject {
	ObjectProperty OwnerWeapon; // 0x60
	uint32_t bIsFirstPersonCam : 1; // 0x68
	uint32_t bIsAttachedToWeapon : 1; // 0x68
	uint32_t bAutoAttachToWeapon : 1; // 0x68
	uint32_t bCallTickFunction : 1; // 0x68
	FFunctionTable FunctionTableForWeaponState[0x1e]; // 0x6c
	FFunctionTable FunctionTableForRISState[0xa]; // 0x24c
	RISSlot RISSlotIndex; // 0x2ec
	FCustomAnimData PartStateInfo[0x1e]; // 0x2f0
	float ActivePartTime; // 0xbd8
	float DeactivePartTime; // 0xbdc
	TArray<char> SavedWeaponPropery; // 0xbe0
};

struct UCombatVoiceChatUserList : UObject {
	TMap<None, None> UserMap; // 0x60
	FPlayerVoiceChat SelfData; // 0xa8
	int32_t myUID; // 0xc8
	TArray<FString> TalkingUserList; // 0xcc
};

struct UGFxObject : UObject {
	int32_t Value[0xc]; // 0x60
	TArray<FGFxWidgetBinding> SubWidgetBindings; // 0x90
};

struct UCCSBTSetHealth : UCCSBTScriptBehavior {
	int32_t Health; // 0xd4
};

struct UNavMeshGoalFilter_PolyEncompassesAI : UNavMeshGoal_Filter {
	FVector OverrideExtentToCheck; // 0x6c
};

struct AUSSWeapon : AWeapon {
	FName WeaponSocketName; // 0x3a4
	FName MuzzleFlashSocketName; // 0x3ac
	TArray<int32_t> ShotPerFireBurst; // 0x3b4
	float AimingTolerance; // 0x3c4
	int32_t ShotInBurstCount; // 0x3c8
	AUSSWeaponAttachment* WeaponAttachmentClass; // 0x3cc
	ObjectProperty CCSController; // 0x3d4
};

struct AGripAIManagerHolder : AActor {
	FPointer AIManager; // 0x244
};

struct UAnimNotify_CameraEffect : UAnimNotify {
	AEmitterCameraLensEffectBase* CameraLensEffect; // 0x60
};

struct UFaceFXAsset : UObject {
	FPointer FaceFXActor; // 0x60
	TArray<char> RawFaceFXActorBytes; // 0x68
	TArray<char> RawFaceFXSessionBytes; // 0x78
	TArray<ObjectProperty> MountedFaceFXAnimSets; // 0x88
	int32_t NumLoadErrors; // 0x98
};

struct UParticleModuleVelocity : UParticleModuleVelocityBase {
	FRawDistributionVector StartVelocity; // 0x6c
	FRawDistributionFloat StartVelocityRadial; // 0x90
};

struct UParticleModuleBeamTarget : UParticleModuleBeamBase {
	Beam2SourceTargetMethod TargetMethod; // 0x68
	Beam2SourceTargetTangentMethod TargetTangentMethod; // 0x69
	FName TargetName; // 0x6c
	FRawDistributionVector Target; // 0x74
	uint32_t bTargetAbsolute : 1; // 0x98
	uint32_t bLockTarget : 1; // 0x98
	uint32_t bLockTargetTangent : 1; // 0x98
	uint32_t bLockTargetStength : 1; // 0x98
	FRawDistributionVector TargetTangent; // 0x9c
	FRawDistributionFloat TargetStrength; // 0xc0
	float LockRadius; // 0xe4
};

struct UParticleModuleTypeDataApex : UParticleModuleTypeDataBase {
	ObjectProperty ApexIOFX; // 0x68
	ObjectProperty ApexEmitter; // 0x70
};

struct UMaterialExpressionMaterialFunctionCall : UMaterialExpression {
	ObjectProperty MaterialFunction; // 0xb0
	TArray<FFunctionExpressionInput> FunctionInputs; // 0xb8
	TArray<FFunctionExpressionOutput> FunctionOutputs; // 0xc8
};

struct UCombatDataTableRefRankUp : UCombatDataTableType {
	int32_t Id; // 0x6c
	int32_t Rank; // 0x70
	int32_t GoalExp; // 0x74
	TArray<FUnlockSkillData> UnlockSkillList; // 0x78
	uint32_t bLastRank : 1; // 0x88
	FString RankCodeName; // 0x8c
};

struct ACombatProj_FlashBang : ACombatProj_Grenade {
	float fFlashbangSoundTime; // 0x3f4
};

struct UActorFactoryDecal : UActorFactory {
	ObjectProperty DecalMaterial; // 0x9c
};

struct USeqAct_ForceFeedback : USequenceAction {
	ObjectProperty FFWaveform; // 0x108
	UWaveFormBase* PredefinedWaveForm; // 0x110
};

struct AImageReflectionSceneCapture : AImageReflection {
	float DepthRange; // 0x258
	float ColorRange; // 0x25c
};

struct UStaticMeshComponentFactory : UMeshComponentFactory {
	ObjectProperty StaticMesh; // 0x74
};

struct UCombatInstanceItem_ArmorBase : UCombatInstanceItem {
	FArmorMeshInfo MeshInfo[0x2]; // 0x370
};

struct UInterpGroupCamera : UInterpGroup {
	ObjectProperty CameraAnimInst; // 0x98
	float CompressTolerance; // 0xa0
	float VelocityRate; // 0xa4
};

struct ASplineActor : AActor {
	TArray<FSplineConnection> Connections; // 0x244
	FVector SplineActorTangent; // 0x254
	FColor SplineColor; // 0x260
	uint32_t bDisableDestination : 1; // 0x264
	uint32_t bAlreadyVisited : 1; // 0x264
	TArray<ObjectProperty> LinksFrom; // 0x268
	ObjectProperty nextOrdered; // 0x278
	ObjectProperty prevOrdered; // 0x280
	ObjectProperty previousPath; // 0x288
	int32_t bestPathWeight; // 0x290
	int32_t visitedWeight; // 0x294
	FInterpCurveFloat SplineVelocityOverTime; // 0x298
};

struct UCCSBTScriptCondition : UGripBTScriptCondition {
	ObjectProperty Controller; // 0xcc
};

struct UInterpData : USequenceVariable {
	float InterpLength; // 0xa0
	float PathBuildTime; // 0xa4
	TArray<ObjectProperty> InterpGroups; // 0xa8
	ObjectProperty CurveEdSetup; // 0xb8
	float EdSectionStart; // 0xc0
	float EdSectionEnd; // 0xc4
	uint32_t bShouldBakeAndPrune : 1; // 0xc8
	TArray<FAnimSetBakeAndPruneStatus> BakeAndPruneStatus; // 0xcc
	ObjectProperty CachedDirectorGroup; // 0xdc
};

struct UGripBTDummyCondition : UGripBTBooleanCondition {
	uint32_t PreConditionResult : 1; // 0xc0
};

struct UApexGenericAsset : UApexAsset {
	FPointer MApexAsset; // 0x80
};

struct UCombatDialogCombiinationAudio : UObject {
	TArray<ObjectProperty> CombiinationSoundCues; // 0x60
	int32_t TotalWords; // 0x70
	int32_t nowPlayingWordNum; // 0x74
	ObjectProperty Owner; // 0x78
	ComponentProperty DialogAC; // 0x80
};

struct UGFxEvent_FSCommand : USequenceEvent {
	ObjectProperty Movie; // 0x128
	FString FSCommand; // 0x130
	ObjectProperty Handler; // 0x140
};

struct UMaterialExpressionFrac : UMaterialExpression {
	FExpressionInput Input; // 0xb0
};

struct ANxForceFieldSpawnable : AActor {
	ComponentProperty ForceFieldComponent; // 0x244
};

struct UCombatMatchroomBase : UObject {
	float Cur_MatchStart_WaitTime; // 0x60
	float Old_MatchStart_WaitTime; // 0x64
	ObjectProperty Owner; // 0x68
	int32_t nChannel; // 0x70
};

struct UCombatAnimBlendByFall : UCombatAnimBlendBase {
	float PreLandTime; // 0x144
	float PreLandStartUprightTime; // 0x148
	EBlendFallTypes FallState; // 0x14c
	float LastFallingVelocity; // 0x150
	ObjectProperty CachedLeanNode; // 0x154
};

struct USeqAct_MultiLevelStreaming : USeqAct_LevelStreamingBase {
	TArray<FLevelStreamingNameCombo> Levels; // 0x124
	uint32_t bUnloadAllOtherLevels : 1; // 0x134
	uint32_t bStatusIsOk : 1; // 0x134
};

struct UParticleModuleLocationPrimitiveBase : UParticleModuleLocationBase {
	uint32_t Positive_X : 1; // 0x68
	uint32_t Positive_Y : 1; // 0x68
	uint32_t Positive_Z : 1; // 0x68
	uint32_t Negative_X : 1; // 0x68
	uint32_t Negative_Y : 1; // 0x68
	uint32_t Negative_Z : 1; // 0x68
	uint32_t SurfaceOnly : 1; // 0x68
	uint32_t Velocity : 1; // 0x68
	FRawDistributionFloat VelocityScale; // 0x6c
	FRawDistributionVector StartLocation; // 0x90
};

struct USoundNodeLooping : USoundNode {
	uint32_t bLoopIndefinitely : 1; // 0x74
	float LoopCountMin; // 0x78
	float LoopCountMax; // 0x7c
	FRawDistributionFloat LoopCount; // 0x80
};

struct UActorFactoryRigidBody : UActorFactoryDynamicSM {
	uint32_t bStartAwake : 1; // 0xb8
	uint32_t bDamageAppliesImpulse : 1; // 0xb8
	uint32_t bLocalSpaceInitialVelocity : 1; // 0xb8
	uint32_t bEnableStayUprightSpring : 1; // 0xb8
	FVector InitialVelocity; // 0xbc
	ComponentProperty AdditionalVelocity; // 0xc8
	ComponentProperty InitialAngularVelocity; // 0xd0
	ERBCollisionChannel RBChannel; // 0xd8
	float StayUprightTorqueFactor; // 0xdc
	float StayUprightMaxTorque; // 0xe0
};

struct UCombatFrontEnd_RotationInfoPopup : UCombatFrontEnd_Object {
	int32_t MaxRotationGroup; // 0xd0
	int32_t CurrentRotationGroup; // 0xd4
	int32_t CurrentPriceType; // 0xd8
};

struct USeqAct_AndGate : USequenceAction {
	uint32_t bOpen : 1; // 0x108
	TArray<char> LinkedOutputFiredStatus; // 0x10c
	TArray<FPointer> LinkedOutputs; // 0x11c
};

struct USeqAct_IgnoreInput : USequenceAction {
	uint32_t bMoveInputIgnore : 1; // 0x108
	uint32_t bLookInputIgnore : 1; // 0x108
	uint32_t bWeaponInputIgnore : 1; // 0x108
};

struct UGFxRawData : UObject {
	TArray<char> RawData; // 0x60
	TArray<FString> ReferencedSwfs; // 0x70
	TArray<ObjectProperty> References; // 0x80
	TArray<ObjectProperty> UserReferences; // 0x90
};

struct UMorphNodeBase : UAnimObject {
	FName NodeName; // 0x68
	uint32_t bDrawSlider : 1; // 0x70
};

struct USubsystem : UObject {
	FPointer VfTable_FExec; // 0x60
};

struct UForceFieldShapeSphere : UForceFieldShape {
	ComponentProperty Shape; // 0x60
};

struct ACombatFreeForAllGame : ACombatManyTeamGame {
	WordProperty SuddenDeathTime; // 0x788
};

struct ARB_ConstraintActor : ARigidBodyBase {
	ObjectProperty ConstraintActor1; // 0x244
	ObjectProperty ConstraintActor2; // 0x24c
	ComponentProperty TargetConstraintMesh1; // 0x254
	ComponentProperty TargetConstraintMesh2; // 0x25c
	ObjectProperty ConstraintSetup; // 0x264
	ObjectProperty ConstraintInstance; // 0x26c
	uint32_t bDisableCollision : 1; // 0x274
	uint32_t bUpdateActor1RefFrame : 1; // 0x274
	uint32_t bUpdateActor2RefFrame : 1; // 0x274
	ObjectProperty PulleyPivotActor1; // 0x278
	ObjectProperty PulleyPivotActor2; // 0x280
};

struct USeqAct_SetWorldAttractorParam : USequenceAction {
	TArray<ObjectProperty> Attractor; // 0x108
	uint32_t bEnabledField : 1; // 0x118
	uint32_t bFalloffTypeField : 1; // 0x118
	uint32_t bFalloffExponentField : 1; // 0x118
	uint32_t bRangeField : 1; // 0x118
	uint32_t bStrengthField : 1; // 0x118
	uint32_t bEnabled : 1; // 0x118
	EWorldAttractorFalloffType FalloffType; // 0x11c
	FRawDistributionFloat FalloffExponent; // 0x120
	FRawDistributionFloat Range; // 0x144
	FRawDistributionFloat Strength; // 0x168
};

struct USeqAct_CombatTutorial_MessageOn : USequenceAction {
	int32_t MessageTextID; // 0x108
	TArray<FString> GBA_Commnads; // 0x10c
};

struct AStaticLightCollectionActor : ALight {
	TArray<ComponentProperty> LightComponents; // 0x250
	int32_t MaxLightComponents; // 0x260
};

struct UCombatAnimBlendByPhysics : UCombatAnimBlendBase {
	ObjectProperty POwner; // 0x144
	int32_t PhysicsMap[0xc]; // 0x14c
	char LastPhysics; // 0x17c
};

struct UCBUIDataStore_QuickstartSetting : UUIDataStore_Settings {
	int32_t CurrentSelections[0x5]; // 0x98
};

struct UCombatAnimNodeJumpLeanOffset : UAnimNodeAimOffset {
	float JumpLeanStrength; // 0x160
	float MaxLeanChangeSpeed; // 0x164
	float LeanBackRatio; // 0x168
	uint32_t bMultiplyByZVelocity : 1; // 0x16c
	ObjectProperty CachedAimNode; // 0x170
	FName OldAimProfileName; // 0x178
	FVector2D PreBlendAim; // 0x180
	float LeanWeight; // 0x188
	float LeanWeightTarget; // 0x18c
	float BlendTimeToGo; // 0x190
	int32_t LastYaw; // 0x194
	float IgnoredLateralVelThreshold; // 0x198
	float StandardSpeed; // 0x19c
};

struct UGameWaveForms : UObject {
	ObjectProperty CameraShakeMediumShort; // 0x60
	ObjectProperty CameraShakeMediumLong; // 0x68
	ObjectProperty CameraShakeBigShort; // 0x70
	ObjectProperty CameraShakeBigLong; // 0x78
};

struct USeqEvent_RigidBodyCollision : USequenceEvent {
	float MinCollisionVelocity; // 0x128
};

struct UCombatDataTableRefSupportUserGroup : UCombatDataTableType {
	FString CodeName; // 0x6c
	int32_t UserCount; // 0x7c
};

struct USeqAct_LevelStreamingBase : USeqAct_Latent {
	uint32_t bMakeVisibleAfterLoad : 1; // 0x120
	uint32_t bShouldBlockOnLoad : 1; // 0x120
};

struct UCombatHUD_AIMissionActor : UCombatHUD_GameObject {
	ObjectProperty TargetActor; // 0x1b0
	int32_t LastDisplayHealth; // 0x1b8
	MissionActorUIState LastUIState; // 0x1bc
};

struct USeqCond_IsLoggedIn : USequenceCondition {
	int32_t NumNeededLoggedIn; // 0xec
};

struct UCombatLobbyTransaction : UObject {
	int32_t ChannelIndex; // 0x60
	int32_t ChannelPropertyNumber; // 0x64
	TMap<None, None> MatchRoomInfoMap; // 0x68
	FUpdateMatchRoomInfo UpdateMatchRoom; // 0xb0
	TArray<FLookInMatchRoomUserInfo> LookInMatchRoomUserList; // 0xe0
};

struct UParticleModuleSubUVSelect : UParticleModuleSubUVBase {
	FRawDistributionVector SubImageSelect; // 0x68
};

struct UTextureRenderTargetCube : UTextureRenderTarget {
	int32_t SizeX; // 0x124
	EPixelFormat Format; // 0x128
};

struct AExponentialHeightFog : AInfo {
	ComponentProperty Component; // 0x244
	uint32_t bEnabled : 1; // 0x24c
};

struct USeqAct_SetSkelControlTarget : USequenceAction {
	FName SkelControlName; // 0x108
	TArray<ObjectProperty> TargetActors; // 0x110
};

struct UUIDataStore_OnlinePlaylists : UUIDataStore {
	FString ProviderClassName; // 0x98
	UUIResourceDataProvider* ProviderClass; // 0xa8
	TArray<ObjectProperty> RankedDataProviders; // 0xb0
	TArray<ObjectProperty> UnrankedDataProviders; // 0xc0
	TArray<ObjectProperty> RecModeDataProviders; // 0xd0
	TArray<ObjectProperty> PrivateDataProviders; // 0xe0
	ObjectProperty PlaylistMan; // 0xf0
};

struct UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations : UNavMeshPathConstraint {
	FVector Location; // 0x78
	FVector Rotation; // 0x84
	float DistanceToCheck; // 0x90
	TArray<FVector> LocationsToCheck; // 0x94
};

struct UAnimNodeSequenceBlendBase : UAnimNodeSequence {
	TArray<FAnimBlendInfo> Anims; // 0x158
};

struct UCombatInGameLocalSoundGroup_Base : UCombatHUDSoundGroup {
	ObjectProperty CountDownSound; // 0x70
	ObjectProperty RespawnSound; // 0x78
	ObjectProperty PresetChangeInfo[0x3]; // 0x80
	ObjectProperty TeamChangeSound; // 0x98
	TArray<FTeamSoundData> TeamSoundDataList; // 0xa0
	ObjectProperty RadioWindowOpenSound; // 0xb0
	ObjectProperty RadioWindowCloseSound; // 0xb8
	ObjectProperty SkillBuySound_Success; // 0xc0
	ObjectProperty SkillBuySound_Fail; // 0xc8
	ObjectProperty SelectPlayerClass; // 0xd0
	ObjectProperty HostageVocieList[0x6]; // 0xd8
	ObjectProperty AnnounceSoundList[0x3]; // 0x108
	ObjectProperty C4BombPickupSound; // 0x120
	ObjectProperty C4BombDropSound; // 0x128
	ObjectProperty C4BombPlantBGM; // 0x130
	ObjectProperty ModeScoreGettingSound; // 0x138
	ObjectProperty SpearTacRespawn; // 0x140
	ObjectProperty StartWaveSound; // 0x148
	ObjectProperty SuccessedWaveSound; // 0x150
	ObjectProperty FailedWaveSound; // 0x158
	ObjectProperty WarningSound; // 0x160
	ObjectProperty ExplotionBeepSound; // 0x168
	ComponentProperty ExplosionBeepSoundComponent; // 0x170
	ObjectProperty ChangedViewTargetOnSpectator; // 0x178
	TArray<ObjectProperty> AIRewardRankSound; // 0x180
	ObjectProperty SupplyDestroySound; // 0x190
	ObjectProperty SupplyCreateSoonSound; // 0x198
	ObjectProperty SupplyCreateSound; // 0x1a0
};

struct UAnimNodeCrossfader : UAnimNodeBlend {
	FName DefaultAnimSeqName; // 0x110
	uint32_t bDontBlendOutOneShot : 1; // 0x118
	float PendingBlendOutTimeOneShot; // 0x11c
};

struct USeqAct_SetInitialCover : USequenceAction {
	TArray<ObjectProperty> Actors; // 0x108
};

struct UCombatHUD_CompetitionWarmUp : UCombatHUDEntity_Base {
	int32_t UI_ReaminSecond; // 0xc0
};

struct UParticleModuleEventReceiverSound : UParticleModuleEventReceiverBase {
	ObjectProperty SoundCue; // 0x74
	float DelayTime; // 0x7c
	float LastUpdateTime; // 0x80
	PME_SOUND SoundState; // 0x84
};

struct UCBPawnSoundGroup : UObject {
	ObjectProperty DyingSound; // 0x60
	ObjectProperty HealStartSound; // 0x68
	ObjectProperty HealEndSound; // 0x70
	TArray<FFootstepSoundInfo> FootstepSounds; // 0x78
	ObjectProperty DefaultFootstepSound; // 0x88
	ObjectProperty DefaultCrouchFootstepSound; // 0x90
	TArray<FFootstepSoundInfo> JumpingSounds; // 0x98
	ObjectProperty DefaultJumpingSound; // 0xa8
	TArray<FFootstepSoundInfo> LandingSounds; // 0xb0
	ObjectProperty DefaultLandingSound; // 0xc0
	ObjectProperty FallingDamageLandSound; // 0xc8
	FTextWithVoice ReloadingSound; // 0xd0
	FTextWithVoice SeeOurTeamDeathSound; // 0xdc
	FTextWithVoice SeeEnemyDeathSound; // 0xe8
	FTextWithVoice ThrowGreSound; // 0xf4
	FTextWithVoice GrenadeWarningSound; // 0x100
	FTextWithVoice SpecialGreSound; // 0x10c
	ObjectProperty KillVoiceSound; // 0x118
	ObjectProperty OutOfAmmoVoice; // 0x120
	ObjectProperty AutoHealVoice; // 0x128
	ObjectProperty SpawnVoice; // 0x130
	FEffectTypeHitSound EffectTypeHitSounds[0xb]; // 0x138
};

struct UCombatDataTableRefClanSection : UCombatDataTableType {
	char GRADE; // 0x6c
	int32_t SectionStart; // 0x70
	int32_t SectionEnd; // 0x74
};

struct UMobileMenuLabel : UMobileMenuObject {
	FString Caption; // 0xdc
	ObjectProperty TextFont; // 0xec
	FColor TextColor; // 0xf4
	FColor TouchedColor; // 0xf8
	float TextXScale; // 0xfc
	float TextYScale; // 0x100
	uint32_t bAutoSize : 1; // 0x104
};

struct UParticleModuleVelocityBase : UParticleModule {
	uint32_t bInWorldSpace : 1; // 0x68
	uint32_t bApplyOwnerScale : 1; // 0x68
};

struct ACombatDroppedEvolvePoint : ACombatDroppedBase {
	int32_t GRADE; // 0x320
	int32_t ForcePoint; // 0x324
	char TeamID; // 0x328
	ObjectProperty Weapon; // 0x32c
	ObjectProperty SavedWeapon; // 0x334
	ObjectProperty EnemyWeaponEffect; // 0x33c
	ComponentProperty WeaponParticleComponent; // 0x344
	uint32_t bAddPrivatePoint : 1; // 0x34c
	uint32_t bAddTeamPoint : 1; // 0x34c
};

struct UParticleModuleAcceleration : UParticleModuleAccelerationBase {
	FRawDistributionVector Acceleration; // 0x6c
	uint32_t bApplyOwnerScale : 1; // 0x90
};

struct UCombatFrontEnd_CharacterInfo_TabBase : UObject {
	ObjectProperty ParentMoviePlayer; // 0x60
};

struct UCBUIDataStore_PendingDialogMessage : UUIDataStore_Settings {
	TArray<FDialogMessage> DialogMessageList; // 0x98
};

struct UStaticMeshSocket : UObject {
	FName SocketName; // 0x60
	FVector RelativeLocation; // 0x68
	FRotator RelativeRotation; // 0x74
	FVector RelativeScale; // 0x80
	ComponentProperty PreviewSkelComp; // 0x8c
};

struct UCombatMatchroomCompetitive : UCombatMatchroomAutoMatchingBase {
	int32_t TeamRankingPoint; // 0x7c
	int32_t CompMatchDialogID; // 0x80
};

struct UOnlineAuthInterfaceImpl : UObject {
	FPointer VfTable_IOnlineAuthInterface; // 0x60
	ObjectProperty OwningSubsystem; // 0x68
	uint32_t bAuthReady : 1; // 0x70
	FSparseArray_Mirror ClientAuthSessions; // 0x74
	FSparseArray_Mirror ServerAuthSessions; // 0xac
	FSparseArray_Mirror PeerAuthSessions; // 0xe4
	FSparseArray_Mirror LocalClientAuthSessions; // 0x11c
	FSparseArray_Mirror LocalServerAuthSessions; // 0x154
	FSparseArray_Mirror LocalPeerAuthSessions; // 0x18c
	TArray<DelegateProperty> AuthReadyDelegates; // 0x1c4
	TArray<DelegateProperty> ClientAuthRequestDelegates; // 0x1d4
	TArray<DelegateProperty> ServerAuthRequestDelegates; // 0x1e4
	TArray<DelegateProperty> ClientAuthResponseDelegates; // 0x1f4
	TArray<DelegateProperty> ServerAuthResponseDelegates; // 0x204
	TArray<DelegateProperty> ClientAuthCompleteDelegates; // 0x214
	TArray<DelegateProperty> ServerAuthCompleteDelegates; // 0x224
	TArray<DelegateProperty> ClientAuthEndSessionRequestDelegates; // 0x234
	TArray<DelegateProperty> ServerAuthRetryRequestDelegates; // 0x244
	TArray<DelegateProperty> ClientConnectionCloseDelegates; // 0x254
	TArray<DelegateProperty> ServerConnectionCloseDelegates; // 0x264
	DelegateProperty __OnAuthReady__Delegate; // 0x274
	DelegateProperty __OnClientAuthRequest__Delegate; // 0x284
	DelegateProperty __OnServerAuthRequest__Delegate; // 0x294
	DelegateProperty __OnClientAuthResponse__Delegate; // 0x2a4
	DelegateProperty __OnServerAuthResponse__Delegate; // 0x2b4
	DelegateProperty __OnClientAuthComplete__Delegate; // 0x2c4
	DelegateProperty __OnServerAuthComplete__Delegate; // 0x2d4
	DelegateProperty __OnClientAuthEndSessionRequest__Delegate; // 0x2e4
	DelegateProperty __OnServerAuthRetryRequest__Delegate; // 0x2f4
	DelegateProperty __OnClientConnectionClose__Delegate; // 0x304
	DelegateProperty __OnServerConnectionClose__Delegate; // 0x314
};

struct UCombatFrontEnd_Chat : UCombatFrontEnd_Object {
	FString LastWhisperSenderName; // 0xd0
	int32_t TabLabelIDList[0x3]; // 0xe0
	int32_t PopUpLabelIDList[0x5]; // 0xec
	uint32_t bPlayScrNotice : 1; // 0x100
	int32_t CurrentTabType; // 0x104
	FString CurrentWhisperID; // 0x108
};

struct UCombatHUD_Buster : UCombatHUD_GameObject {
	ObjectProperty TargetActor; // 0x1b0
	int32_t TargetIndex; // 0x1b8
	int32_t LastDisplayHealth; // 0x1bc
	MissionActorUIState LastUIState; // 0x1c0
};

struct USeqAct_MultiplyFloat : USeqAct_SetSequenceVariable {
	float ValueA; // 0x108
	float ValueB; // 0x10c
	float FloatResult; // 0x110
	int32_t IntResult; // 0x114
};

struct UMaterialExpressionCosine : UMaterialExpression {
	FExpressionInput Input; // 0xb0
	float Period; // 0xe4
};

struct UInterpTrackInstToggle : UInterpTrackInst {
	ETrackToggleAction Action; // 0x60
	float LastUpdatePosition; // 0x64
	uint32_t bSavedActiveState : 1; // 0x68
};

struct AWindPointSource : AInfo {
	ComponentProperty Component; // 0x244
};

struct UCombatFrontEnd_Event_MissionTab : UCombatFrontEnd_Event_TabBase {
	FString MissionState_TextColor[0x2]; // 0x6c
	TArray<QUEST_GROUP> QuestGroupList; // 0x8c
};

struct ACoverLink : ANavigationPoint {
	uint32_t GLOBAL_bUseSlotMarkers : 1; // 0x33c
	uint32_t bDisabled : 1; // 0x33c
	uint32_t bClaimAllSlots : 1; // 0x33c
	uint32_t bAutoSort : 1; // 0x33c
	uint32_t bAutoAdjust : 1; // 0x33c
	uint32_t bCircular : 1; // 0x33c
	uint32_t bLooped : 1; // 0x33c
	uint32_t bPlayerOnly : 1; // 0x33c
	uint32_t bDynamicCover : 1; // 0x33c
	uint32_t bFractureOnTouch : 1; // 0x33c
	uint32_t bDebug_FireLinks : 1; // 0x33c
	uint32_t bDebug_ExposedLinks : 1; // 0x33c
	uint32_t bDebug_CoverGen : 1; // 0x33c
	uint32_t bDoAutoSlotDensityFixup : 1; // 0x33c
	float LeanTraceDist; // 0x340
	TArray<FCoverSlot> Slots; // 0x344
	TArray<FDynamicLinkInfo> DynamicLinkInfos; // 0x354
	TArray<ObjectProperty> Claims; // 0x364
	float InvalidateDistance; // 0x374
	float MaxFireLinkDist; // 0x378
	FVector CircularOrigin; // 0x37c
	float CircularRadius; // 0x388
	float AlignDist; // 0x38c
	float AutoCoverSlotInterval; // 0x390
	float StandHeight; // 0x394
	float MidHeight; // 0x398
	FVector StandingLeanOffset; // 0x39c
	FVector CrouchLeanOffset; // 0x3a8
	FVector PopupOffset; // 0x3b4
	float SlipDist; // 0x3c0
	float TurnDist; // 0x3c4
	float DangerScale; // 0x3c8
	ObjectProperty NextCoverLink; // 0x3cc
	ECoverLocationDescription LocationDescription; // 0x3d4
};

struct USeqAct_CameraLookAt : USequenceAction {
	uint32_t bAffectCamera : 1; // 0x108
	uint32_t bAlwaysFocus : 1; // 0x108
	uint32_t bAdjustCamera : 1; // 0x108
	uint32_t bTurnInPlace : 1; // 0x108
	uint32_t bIgnoreTrace : 1; // 0x108
	uint32_t bAffectHead : 1; // 0x108
	uint32_t bRotatePlayerWithCamera : 1; // 0x108
	uint32_t bToggleGodMode : 1; // 0x108
	uint32_t bLeaveCameraRotation : 1; // 0x108
	uint32_t bDisableInput : 1; // 0x108
	uint32_t bUsedTimer : 1; // 0x108
	uint32_t bCheckLineOfSight : 1; // 0x108
	FVector2D InterpSpeedRange; // 0x10c
	FVector2D InFocusFOV; // 0x114
	FName FocusBoneName; // 0x11c
	FString TextDisplay; // 0x124
	float TotalTime; // 0x134
	float CameraFOV; // 0x138
	float RemainingTime; // 0x13c
};

struct UGFxAction_SetCaptureKeys : USequenceAction {
	ObjectProperty Movie; // 0x108
	TArray<FName> CaptureKeys; // 0x110
};

struct UCombatSkillManager : UObject {
	TArray<FString> AcceptSkillList; // 0x60
	TArray<ObjectProperty> CombatActiveSkillList; // 0x70
	TArray<ObjectProperty> CombatPassiveSkillList; // 0x80
	TArray<FSkillSaveInfo> ActiveSkillSaveData; // 0x90
	ObjectProperty OwnerPRI; // 0xa0
	char LastSkillGroupNum; // 0xa8
	int32_t LastCheckTime[0x4]; // 0xac
	TArray<FSavedSkillInfo> SavedActiveSkillList; // 0xbc
	TArray<FSavedSkillInfo> SavedPassiveSkillList; // 0xcc
	uint32_t SkipCooltime : 1; // 0xdc
	uint32_t bInfiniteSkill : 1; // 0xdc
	UCombatSkillSoundGroup* SkillSoundGroup; // 0xe0
};

struct UCombatHUD_NoticeHotKey : UCombatHUDEntity_Base {
	FString HotKeyFontColor; // 0xc0
	FString ItemFontColor; // 0xd0
	FString PrevHotKey; // 0xe0
	FString PrevActionName; // 0xf0
};

struct UUIDataStore_Registry : UUIDataStore {
	TArray<FRegistryKeyValuePair> RegistryData; // 0x98
};

struct ACombatDummyClientController : ACombatBotController_GuyBase {
	FString GripControllerManagerClassPath; // 0x5e8
	ObjectProperty GripControllerManagerHolder; // 0x5f8
};

struct USeqAct_SetMotionBlurParams : USeqAct_Latent {
	float MotionBlurAmount; // 0x120
	float InterpolateSeconds; // 0x124
	float InterpolateElapsed; // 0x128
	float OldMotionBlurAmount; // 0x12c
};

struct UParticleModuleUberRainSplashB : UParticleModuleUberBase {
	FRawDistributionFloat Lifetime; // 0x78
	FRawDistributionVector StartSize; // 0x9c
	FRawDistributionVector ColorOverLife; // 0xc0
	FRawDistributionFloat AlphaOverLife; // 0xe4
	FRawDistributionVector LifeMultiplier; // 0x108
	uint32_t MultiplyX : 1; // 0x12c
	uint32_t MultiplyY : 1; // 0x12c
	uint32_t MultiplyZ : 1; // 0x12c
	FRawDistributionFloat StartRotationRate; // 0x130
};

struct UCombatFrontEnd_CreateCharacter : UCombatFrontEnd_Scene {
	TArray<FSendNickInfo> SendNickList; // 0xd0
	FString SendNick; // 0xe0
};

struct USoundNodeMixer : USoundNode {
	TArray<float> InputVolume; // 0x74
};

struct USkelControl_CCD_IK : USkelControlBase {
	FVector EffectorLocation; // 0xd0
	EBoneControlSpace EffectorLocationSpace; // 0xdc
	FName EffectorSpaceBoneName; // 0xe0
	FVector EffectorTranslationFromBone; // 0xe8
	int32_t NumBones; // 0xf4
	int32_t MaxPerBoneIterations; // 0xf8
	int32_t IterationsCount; // 0xfc
	float Precision; // 0x100
	uint32_t bStartFromTail : 1; // 0x104
	uint32_t bNoTurnOptimization : 1; // 0x104
	TArray<float> AngleConstraint; // 0x108
	float MaxAngleSteps; // 0x118
};

struct UMaterialExpressionTextureSampleParameterFlipbook : UMaterialExpressionTextureSampleParameter2D {
	int32_t CoordinateIndex; // 0x140
};

struct UDistributionFloatUniformRange : UDistributionFloat {
	float MaxHigh; // 0x7c
	float MaxLow; // 0x80
	float MinHigh; // 0x84
	float MinLow; // 0x88
	uint32_t bMirrorMaxMin : 1; // 0x8c
};

struct UActorFactoryStaticMesh : UActorFactory {
	ObjectProperty StaticMesh; // 0x9c
	FVector DrawScale3D; // 0xa4
};

struct UMeshBeaconHost : UMeshBeacon {
	TArray<FClientMeshBeaconConnection> ClientConnections; // 0xa4
	TArray<FUniqueNetId> PendingPlayerConnections; // 0xb4
	FUniqueNetId OwningPlayerId; // 0xc4
	uint32_t bAllowBandwidthTesting : 1; // 0xcc
	int32_t ConnectionBacklog; // 0xd0
	DelegateProperty __OnReceivedClientConnectionRequest__Delegate; // 0xd4
	DelegateProperty __OnStartedBandwidthTest__Delegate; // 0xe4
	DelegateProperty __OnFinishedBandwidthTest__Delegate; // 0xf4
	DelegateProperty __OnAllPendingPlayersConnected__Delegate; // 0x104
	DelegateProperty __OnReceivedClientCreateNewSessionResult__Delegate; // 0x114
};

struct UAnimSet : UObject {
	uint32_t bAnimRotationOnly : 1; // 0x60
	TArray<FName> TrackBoneNames; // 0x64
	TArray<ObjectProperty> Sequences; // 0x74
	TMap<None, None> SequenceCache; // 0x84
	TArray<FAnimSetMeshLinkup> LinkupCache; // 0xcc
	TMap<None, None> SkelMesh2LinkupCache; // 0xdc
	TArray<char> BoneUseAnimTranslation; // 0x124
	TArray<char> ForceUseMeshTranslation; // 0x134
	TArray<FName> UseTranslationBoneNames; // 0x144
	TArray<FName> ForceMeshTranslationBoneNames; // 0x154
	FName PreviewSkelMeshName; // 0x164
	FName BestRatioSkelMeshName; // 0x16c
};

struct ACombatProj_Rocket : ACombatProj_ExplosiveBase {
	float RocketLifetime; // 0x3e4
};

struct UCombatFirstAnimBlendByZoom : UCombatAnimBlendBase {
	uint32_t bUseBlendTime : 1; // 0x144
	ObjectProperty Weapon; // 0x148
	EZoomState LastZoomState; // 0x150
};

struct UInterpFilter : UObject {
	FString Caption; // 0x60
};

struct AKAsset : AActor {
	ComponentProperty SkeletalMeshComponent; // 0x244
	uint32_t bDamageAppliesImpulse : 1; // 0x24c
	uint32_t bWakeOnLevelStart : 1; // 0x24c
	uint32_t bBlockPawns : 1; // 0x24c
	ObjectProperty ReplicatedMesh; // 0x250
	ObjectProperty ReplicatedPhysAsset; // 0x258
};

struct UTexture2DComposite : UTexture {
	TArray<FSourceTexture2DRegion> SourceRegions; // 0x11c
	int32_t MaxTextureSize; // 0x12c
	int32_t DestSizeX; // 0x130
	int32_t DestSizeY; // 0x134
};

struct USeqAct_ActivateRemoteEvent : USequenceAction {
	ObjectProperty Instigator; // 0x108
	FName EventName; // 0x110
	uint32_t bStatusIsOk : 1; // 0x118
};

struct USeqEvent_Used : USequenceEvent {
	uint32_t bAimToInteract : 1; // 0x128
	float InteractDistance; // 0x12c
	FString InteractText; // 0x130
	ObjectProperty InteractIcon; // 0x140
	TArray<AActor*> ClassProximityTypes; // 0x148
	TArray<AActor*> IgnoredClassProximityTypes; // 0x158
};

struct UArrowComponent : UPrimitiveComponent {
	FColor ArrowColor; // 0x250
	float ArrowSize; // 0x254
	uint32_t bTreatAsASprite : 1; // 0x258
};

struct UApexClothingAsset : UApexAsset {
	TArray<FClothingLodInfo> LodMaterialInfo; // 0x80
	FPointer MApexAsset; // 0x90
	TArray<ObjectProperty> Materials; // 0x98
	ObjectProperty ApexClothingLibrary; // 0xa8
	uint32_t bUseHardwareCloth : 1; // 0xb0
	uint32_t bFallbackSkinning : 1; // 0xb0
	uint32_t bSlowStart : 1; // 0xb0
	uint32_t bRecomputeNormals : 1; // 0xb0
	uint32_t bAllowAdaptiveTargetFrequency : 1; // 0xb0
	uint32_t bResetAfterTeleport : 1; // 0xb0
	uint32_t bHasUniqueAssetMaterialNames : 1; // 0xb0
	uint32_t IgnoreInitialTrigger : 1; // 0xb0
	int32_t UVChannelForTangentUpdate; // 0xb4
	float MaxDistanceBlendTime; // 0xb8
	float ContinuousRotationThreshold; // 0xbc
	float ContinuousDistanceThreshold; // 0xc0
	float LodWeightsMaxDistance; // 0xc4
	float LodWeightsDistanceWeight; // 0xc8
	float LodWeightsBias; // 0xcc
	float LodWeightsBenefitsBias; // 0xd0
	float LODDecayTime; // 0xd4
	ObjectProperty SoundOnMove; // 0xd8
	ObjectProperty SoundOnRest; // 0xe0
	ObjectProperty SoundWhileMoving; // 0xe8
	float SpeedThresholdOnMove; // 0xf0
	float SpeedThresholdOnRest; // 0xf4
};

struct UForceFeedbackWaveform : UObject {
	uint32_t bIsLooping : 1; // 0x60
	TArray<FWaveformSample> Samples; // 0x64
	float WaveformFalloffStartDistance; // 0x74
	float MaxWaveformDistance; // 0x78
};

struct ARB_RadialImpulseActor : ARigidBodyBase {
	ComponentProperty RenderComponent; // 0x244
	ComponentProperty ImpulseComponent; // 0x24c
	char ImpulseCount; // 0x254
};

struct UParticleModuleSpawnBase : UParticleModule {
	uint32_t bProcessSpawnRate : 1; // 0x68
	uint32_t bProcessBurstList : 1; // 0x68
};

struct UMorphNodeMultiPose : UMorphNodeBase {
	TArray<ObjectProperty> Targets; // 0x74
	TArray<FName> MorphNames; // 0x84
	TArray<float> Weights; // 0x94
};

struct UDistributionVectorUniformCurve : UDistributionVector {
	FInterpCurveTwoVectors ConstantCurve; // 0x7c
	uint32_t bLockAxes1 : 1; // 0x90
	uint32_t bLockAxes2 : 1; // 0x90
	uint32_t bUseExtremes : 1; // 0x90
	EDistributionVectorLockFlags LockedAxes[0x2]; // 0x94
	EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x96
};

struct UInterpTrackInstVectorMaterialParam : UInterpTrackInst {
	TArray<FVectorMaterialParamMICData> MICInfos; // 0x60
	ObjectProperty InstancedTrack; // 0x70
};

struct UMeshComponent : UPrimitiveComponent {
	TArray<ObjectProperty> Materials; // 0x250
};

struct UFontImportOptions : UObject {
	FFontImportOptionsData Data; // 0x60
};

struct UJsonObject : UObject {
	FMap_Mirror ValueMap; // 0x60
	FMap_Mirror ObjectMap; // 0xa8
	TArray<FString> ValueArray; // 0xf0
	TArray<ObjectProperty> ObjectArray; // 0x100
};

struct UCombatHUD_Surrender : UCombatHUDEntity_Base {
	char CurrentTeamIndex; // 0xc0
	int32_t UI_RemainSecond; // 0xc4
	uint32_t bCanVote : 1; // 0xc8
};

struct ACombatWeaponPickupFactory : ACombatPickupFactory {
	ACombatWeapon* WeaponPickupClass; // 0x3c0
	float WeaponPickupScaling; // 0x3c8
	uint32_t bIsActive : 1; // 0x3cc
	uint32_t bDrawOutline : 1; // 0x3cc
	uint32_t bDisplayHUDIcon : 1; // 0x3cc
	uint32_t bDropSameInventoryGroup : 1; // 0x3cc
	uint32_t bDestroySameInventoryGroup : 1; // 0x3cc
	FOutlineProperty OutlineColorForComrade; // 0x3d0
	FOutlineProperty OutlineColorForEnemy; // 0x40c
	EObjectIconType HUDIconType; // 0x448
};

struct UOnlinePlayerStorage : UObject {
	int32_t VersionNumber; // 0x60
	int32_t VersionSettingsId; // 0x64
	int32_t SaveCountSettingId; // 0x68
	TArray<FOnlineProfileSetting> ProfileSettings; // 0x6c
	TArray<FOnlineProfileSetting> TempProfileSettings; // 0x7c
	TArray<FSettingsPropertyPropertyMetaData> ProfileMappings; // 0x8c
	EOnlinePlayerStorageAsyncState AsyncState; // 0x9c
	int32_t DeviceID; // 0xa0
};

struct UCombatLocaizedTextData : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString StringVal; // 0x70
};

struct UPath_WithinTraversalDist : UPathConstraint {
	float MaxTraversalDist; // 0x6c
	uint32_t bSoft : 1; // 0x70
	float SoftStartPenalty; // 0x74
};

struct UCCSBTCombatMovementOnlyNode : UGripBTBooleanCondition {
	uint32_t bClearEnemy : 1; // 0xc0
};

struct UAnimNotify_Footstep : UAnimNotify {
	int32_t FootDown; // 0x60
};

struct ACombatBarricade : ATrigger {
	ComponentProperty StaticMeshComponent; // 0x254
	int32_t Health; // 0x25c
	int32_t OldHealth; // 0x260
	int32_t HealthMax; // 0x264
	int32_t CurrentHealth; // 0x268
	int32_t LastSubObjectIndex; // 0x26c
	uint32_t bIsActive : 1; // 0x270
	uint32_t OldbIsActive : 1; // 0x270
	uint32_t bIgnoreSameTeamDamage : 1; // 0x270
	uint32_t bGod : 1; // 0x270
	Team OwnerTeam; // 0x274
	MissionActorUIState UIState; // 0x275
	FOutlineProperty OutlineColorForComrade; // 0x278
	FOutlineProperty OutlineColorForEnemy; // 0x2b4
	ObjectProperty ExplosionTemplate; // 0x2f0
	TArray<FSubObjectInfo> SubObjectInfos; // 0x2f8
	TArray<FDamageInfo> DamageInfoList; // 0x308
	ComponentProperty LightEnvironment; // 0x318
	TArray<ObjectProperty> DestinationList; // 0x320
	TArray<FSOccupyPawnInfo> OccupyDestination; // 0x330
	int32_t CurOccupyDestIndex; // 0x340
};

struct UCombatCommon_OverImmersionGuard : UCombatCommon_Base {
	E_RATINGICON Icon1; // 0xac
	E_RATINGICON Icon2; // 0xad
	FString HourCountStr; // 0xb0
	FString WarningStr; // 0xc0
};

struct ULevelStreaming : UObject {
	FName PackageName; // 0x60
	ObjectProperty LoadedLevel; // 0x68
	FVector Offset; // 0x70
	FMatrix LevelTransform; // 0x80
	FVector OldOffset; // 0xc0
	uint32_t bIsVisible : 1; // 0xcc
	uint32_t bHasLoadRequestPending : 1; // 0xcc
	uint32_t bHasUnloadRequestPending : 1; // 0xcc
	uint32_t bShouldBeVisibleInEditor : 1; // 0xcc
	uint32_t bBoundingBoxVisible : 1; // 0xcc
	uint32_t bLocked : 1; // 0xcc
	uint32_t bIsFullyStatic : 1; // 0xcc
	uint32_t bShouldBeLoaded : 1; // 0xcc
	uint32_t bShouldBeVisible : 1; // 0xcc
	uint32_t bShouldBlockOnLoad : 1; // 0xcc
	uint32_t bDrawOnLevelStatusMap : 1; // 0xcc
	uint32_t bIsRequestingUnloadAndRemoval : 1; // 0xcc
	FColor DrawColor; // 0xd0
	TArray<ObjectProperty> EditorStreamingVolumes; // 0xd4
	float MinTimeBetweenVolumeUnloadRequests; // 0xe4
	float LastVolumeUnloadRequestTime; // 0xe8
	ObjectProperty EditorGridVolume; // 0xec
	int32_t GridPosition[0x3]; // 0xf4
};

struct USeqAct_GetDistance : USequenceAction {
	float Distance; // 0x108
};

struct UBlurEffect : UPostProcessEffect {
	int32_t BlurKernelSize; // 0x88
};

struct URB_Handle : UActorComponent {
	ComponentProperty GrabbedComponent; // 0x88
	FName GrabbedBoneName; // 0x90
	int32_t SceneIndex; // 0x98
	uint32_t bInHardware : 1; // 0x9c
	uint32_t bRotationConstrained : 1; // 0x9c
	uint32_t bInterpolating : 1; // 0x9c
	FPointer HandleData; // 0xa0
	FPointer KinActorData; // 0xa8
	float LinearDamping; // 0xb0
	float LinearStiffness; // 0xb4
	FVector LinearStiffnessScale3D; // 0xb8
	FVector LinearDampingScale3D; // 0xc4
	float AngularDamping; // 0xd0
	float AngularStiffness; // 0xd4
	FVector Destination; // 0xd8
	FVector StepSize; // 0xe4
	FVector Location; // 0xf0
};

struct AGroupActorBase : AActor {
	uint32_t bLocked : 1; // 0x244
	uint32_t bResetProxy : 1; // 0x244
	uint32_t bRemergeProxy : 1; // 0x244
};

struct UPostProcessEffect : UObject {
	uint32_t bShowInEditor : 1; // 0x60
	uint32_t bShowInGame : 1; // 0x60
	uint32_t bUseWorldSettings : 1; // 0x60
	uint32_t bAffectsLightingOnly : 1; // 0x60
	FName EffectName; // 0x64
	int32_t NodePosY; // 0x6c
	int32_t NodePosX; // 0x70
	int32_t DrawWidth; // 0x74
	int32_t DrawHeight; // 0x78
	int32_t OutDrawY; // 0x7c
	int32_t InDrawY; // 0x80
	ESceneDepthPriorityGroup SceneDPG; // 0x84
	ESceneDepthPriorityGroup SecondSceneDPG; // 0x85
};

struct UCombatMain_FrontEnd : UCombatMain_Base {
	uint32_t bPwTextFocus : 1; // 0xac
	uint32_t bShowWall : 1; // 0xac
};

struct ACombatDroppedSupplies_AmmoKit : ACombatDroppedSupplies {
	int32_t MainAmmoRate; // 0x35c
	int32_t SubAmmoRate; // 0x360
	int32_t GrenadeRate_A; // 0x364
	int32_t GrenadeRate_B; // 0x368
	int32_t GrenadeRate_C; // 0x36c
};

struct UCombatDataTableRefGameScoring : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString CodeName; // 0x70
	int32_t Score; // 0x80
	int32_t SeizeScore; // 0x84
	int32_t CreditPoint; // 0x88
	int32_t RankExp; // 0x8c
	int32_t ScoreName; // 0x90
	FString ImagePath; // 0x94
	int32_t ImageID; // 0xa4
	int32_t BGImgType; // 0xa8
	int32_t CountImgType; // 0xac
	int32_t Count; // 0xb0
	EScoringDisplayType Type; // 0xb4
	EScoringGradeType GRADE; // 0xb5
	char ScoringDisplayLocation; // 0xb6
	char ScoringTextColorNumber; // 0xb7
	FString SoundPath; // 0xb8
};

struct UGFxAction_CloseMovie : USequenceAction {
	ObjectProperty Movie; // 0x108
	uint32_t bUnload : 1; // 0x110
};

struct UParticleModuleBeamModifier : UParticleModuleBeamBase {
	BeamModifierType ModifierType; // 0x68
	FBeamModifierOptions PositionOptions; // 0x6c
	FRawDistributionVector Position; // 0x70
	FBeamModifierOptions TangentOptions; // 0x94
	FRawDistributionVector Tangent; // 0x98
	uint32_t bAbsoluteTangent : 1; // 0xbc
	FBeamModifierOptions StrengthOptions; // 0xc0
	FRawDistributionFloat Strength; // 0xc4
};

struct UClientBeaconAddressResolver : UObject {
	int32_t BeaconPort; // 0x60
	FName BeaconName; // 0x64
};

struct USeqAct_SetSoundMode : USequenceAction {
	ObjectProperty SoundMode; // 0x108
	uint32_t bTopPriority : 1; // 0x110
};

struct UMaterialExpressionAbs : UMaterialExpression {
	FExpressionInput Input; // 0xb0
};

struct UOutLineEffect : UPostProcessEffect {
	TArray<ObjectProperty> UnSuppressMaterialType; // 0x88
};

struct UMaterialExpressionMultiply : UMaterialExpression {
	FExpressionInput A; // 0xb0
	FExpressionInput B; // 0xe4
};

struct UUIResourceDataProvider : UUIPropertyDataProvider {
	uint32_t bSkipDuringEnumeration : 1; // 0x90
};

struct ACombatWeaponBase_Parachute : ACombatWeapon_ETC {
	float OverrideGravityScalingForPawn[0x3]; // 0x1ee8
	float OverrideViewPitchMax[0x3]; // 0x1ef4
	float OverrideTerminalVelocity[0x3]; // 0x1f00
	float OverrideAirControl; // 0x1f0c
	float OverrideMaxFallSpeed; // 0x1f10
	float LandedAnimDuration; // 0x1f14
	ObjectProperty FallingSound; // 0x1f18
	ParachuteState InitialParachuteState; // 0x1f20
	ParachuteState CurrentParachuteState; // 0x1f21
	uint32_t bParachuteOpenOnPressJump : 1; // 0x1f24
	ObjectProperty LandingZoneMaterialForAlly; // 0x1f28
	ObjectProperty LandingZoneMaterialForEnemy; // 0x1f30
	float LandingZoneSize; // 0x1f38
	float LandingZoneDecalDepth; // 0x1f3c
	ComponentProperty FallingSoundCom; // 0x1f40
	ObjectProperty InstigatorAnchor; // 0x1f48
	ObjectProperty LastInstigatorAnchor; // 0x1f50
};

struct UCombatHUD_SelectPosition : UCombatHUDEntity_Base {
	EUIGameStatus CurrentStatus; // 0xc0
	float LastUpdateTime; // 0xc4
	uint32_t bTryShowSelectposition : 1; // 0xc8
	int32_t CurrentSelectPositionIndex; // 0xcc
	ObjectProperty SelectInfo; // 0xd0
};

struct ACombatPVPGame : ACombatTeamGame {
	uint32_t IsPracticeGame : 1; // 0x784
};

struct UCCSBTHealth : UCCSBTScriptCondition {
	BTConditionOperator Operator; // 0xd4
	int32_t Threshold; // 0xd8
};

struct ACullDistanceVolume : AVolume {
	TArray<FCullDistanceSizePair> CullDistances; // 0x280
	uint32_t bEnabled : 1; // 0x290
};

struct ACombatTeamGame : ACombatGame {
	ACBTeamInfo* TeamInfoClass; // 0x67c
	TArray<ObjectProperty> Teams; // 0x684
	int32_t ParticipatingTeamCount; // 0x694
	TArray<int32_t> PlayerStartCount; // 0x698
	TArray<float> InvulnerableTime; // 0x6a8
	TArray<float> InvulnerableTimeInTheAir; // 0x6b8
	FDefaultInventoryInfo DefaultInventory[0x2]; // 0x6c8
	FDefaultInventoryInfo DefaultInventorySpawnInTheAir[0x2]; // 0x708
	EUIRoundPoint RoundOverPointType; // 0x748
	char MatchEndResultType; // 0x749
	int32_t ClanMemberCheckCount; // 0x74c
	uint32_t bCheckClanMemberCount : 1; // 0x750
	TArray<FString> VivoxTeamKeyword; // 0x754
	TArray<int32_t> VCMarkerUserList; // 0x764
	TArray<int32_t> PMMarkerUserList; // 0x774
};

struct ADynamicTriggerVolume : ATriggerVolume {
	uint32_t bEnabled : 1; // 0x280
};

struct UGripActionNode_AimingFocus : UCombatAIActionNodeBase {
	uint32_t bReleaseAimingFocus : 1; // 0xf4
	ECurAITarget CurAITarget; // 0xf8
};

struct USeqAct_AssignController : USequenceAction {
	AController* ControllerClass; // 0x108
};

struct UCombatHUD_GrenadeIndicator : UCombatHUDEntity_Base {
	ObjectProperty Indicators[0x4]; // 0xc0
	ObjectProperty GrenadeIconMC[0x4]; // 0xe0
	uint32_t bShowInit : 1; // 0x100
};

struct USeqAct_PrepareMapChange : USeqAct_Latent {
	FName MainLevelName; // 0x120
	TArray<FName> InitiallyLoadedSecondaryLevelNames; // 0x128
	uint32_t bIsHighPriority : 1; // 0x138
	uint32_t bStatusIsOk : 1; // 0x138
};

struct USeqEvent_AISeeEnemy : USequenceEvent {
	float MaxSightDistance; // 0x128
};

struct ADynamicPhysicsVolume : APhysicsVolume {
	uint32_t bEnabled : 1; // 0x2d0
};

struct UCombatAnimNotify_SwitchAnim : UAnimNotify {
	float BlendInTime; // 0x60
	float BlendOutTime; // 0x64
	FName NewAnim; // 0x68
};

struct AVolume : ABrush {
	ObjectProperty AssociatedActor; // 0x274
	uint32_t bForcePawnWalk : 1; // 0x27c
	uint32_t bProcessAllActors : 1; // 0x27c
	uint32_t bPawnsOnly : 1; // 0x27c
};

struct UGameCameraBase : UObject {
	ObjectProperty PlayerCamera; // 0x60
	uint32_t bResetCameraInterpolation : 1; // 0x68
};

struct UCombatHUD_BigSizeStringTextBox : UCombatHUD_Base {
	ObjectProperty TextField; // 0xbc
	FString msg; // 0xc4
};

struct ANxTornadoAngularForceField : ANxForceField {
	float RadialStrength; // 0x298
	float RotationalStrength; // 0x29c
	float LiftStrength; // 0x2a0
	float ForceRadius; // 0x2a4
	float ForceTopRadius; // 0x2a8
	float LiftFalloffHeight; // 0x2ac
	float EscapeVelocity; // 0x2b0
	float ForceHeight; // 0x2b4
	float HeightOffset; // 0x2b8
	uint32_t BSpecialRadialForceMode : 1; // 0x2bc
	float SelfRotationStrength; // 0x2c0
	FPointer Kernel; // 0x2c4
};

struct ULandscapeInfo : UObject {
	FGuid LandscapeGuid; // 0x60
	TMap<None, None> LayerInfoMap; // 0x70
	FPointer DataInterface; // 0xb8
	TMap<None, None> XYtoComponentMap; // 0xc0
	TMap<None, None> XYtoCollisionComponentMap; // 0x108
	ObjectProperty LandscapeProxy; // 0x150
	TMap<None, None> XYtoAddCollisionMap; // 0x158
	FSet_Mirror Proxies; // 0x1a0
	FSet_Mirror SelectedComponents; // 0x1e8
	FSet_Mirror SelectedCollisionComponents; // 0x230
	FSet_Mirror SelectedRegionComponents; // 0x278
	TMap<None, None> SelectedRegion; // 0x2c0
	uint32_t bIsValid : 1; // 0x308
};

struct UCombatAIActionNode_Sleep : UCombatAIActionNodeBase {
	float SleepTime; // 0xf4
};

struct UInterpTrackFloatParticleParam : UInterpTrackFloatBase {
	FName ParamName; // 0xb8
};

struct USeqEvent_ProjectileLanded : USequenceEvent {
	float MaxDistance; // 0x128
};

struct UInstancedFoliageSettings : UObject {
	float Density; // 0x60
	float Radius; // 0x64
	float ScaleMinX; // 0x68
	float ScaleMinY; // 0x6c
	float ScaleMinZ; // 0x70
	float ScaleMaxX; // 0x74
	float ScaleMaxY; // 0x78
	float ScaleMaxZ; // 0x7c
	uint32_t LockScaleX : 1; // 0x80
	uint32_t LockScaleY : 1; // 0x80
	uint32_t LockScaleZ : 1; // 0x80
	uint32_t AlignToNormal : 1; // 0x80
	uint32_t RandomYaw : 1; // 0x80
	uint32_t UniformScale : 1; // 0x80
	uint32_t ReapplyDensity : 1; // 0x80
	uint32_t ReapplyRadius : 1; // 0x80
	uint32_t ReapplyAlignToNormal : 1; // 0x80
	uint32_t ReapplyRandomYaw : 1; // 0x80
	uint32_t ReapplyScaleX : 1; // 0x80
	uint32_t ReapplyScaleY : 1; // 0x80
	uint32_t ReapplyScaleZ : 1; // 0x80
	uint32_t ReapplyRandomPitchAngle : 1; // 0x80
	uint32_t ReapplyGroundSlope : 1; // 0x80
	uint32_t ReapplyHeight : 1; // 0x80
	uint32_t ReapplyLandscapeLayer : 1; // 0x80
	uint32_t ReapplyZOffset : 1; // 0x80
	uint32_t IsSelected : 1; // 0x80
	uint32_t ShowNothing : 1; // 0x80
	uint32_t ShowPaintSettings : 1; // 0x80
	uint32_t ShowInstanceSettings : 1; // 0x80
	float AlignMaxAngle; // 0x84
	float RandomPitchAngle; // 0x88
	float GroundSlope; // 0x8c
	float HeightMin; // 0x90
	float HeightMax; // 0x94
	FName LandscapeLayer; // 0x98
	float ZOffsetMin; // 0xa0
	float ZOffsetMax; // 0xa4
	int32_t MaxInstancesPerCluster; // 0xa8
	float MaxClusterRadius; // 0xac
	float ReapplyDensityAmount; // 0xb0
	int32_t StartCullDistance; // 0xb4
	int32_t EndCullDistance; // 0xb8
	FoliageCullOption CullOption; // 0xbc
	int32_t DisplayOrder; // 0xc0
};

struct UCombatFirstAnimBlendByIdle : UCombatAnimBlendBase {
	ObjectProperty Weapon; // 0x144
};

struct UParticleModuleMeshRotationRateOverLife : UParticleModuleRotationRateBase {
	FRawDistributionVector RotRate; // 0x68
	uint32_t bScaleRotRate : 1; // 0x8c
};

struct UMaterialExpressionPixelDepth : UMaterialExpression {
	uint32_t bNormalize : 1; // 0xb0
};

struct UCombatBGMPlayer : UObject {
	ComponentProperty BGM_AC; // 0x60
	ObjectProperty BGMSoundCue; // 0x68
};

struct AStaticMeshActorBasedOnExtremeContent : AActor {
	ComponentProperty StaticMeshComponent; // 0x244
	TArray<FSMMaterialSetterDatum> ExtremeContent; // 0x24c
	TArray<FSMMaterialSetterDatum> NonExtremeContent; // 0x25c
};

struct UMaterialExpressionSine : UMaterialExpression {
	FExpressionInput Input; // 0xb0
	float Period; // 0xe4
};

struct APlayerStartGroup : ANavigationPoint {
	char SpawnGroupIndex; // 0x33c
	TArray<ObjectProperty> NavPointList; // 0x340
};

struct UMaterialExpressionComponentMask : UMaterialExpression {
	FExpressionInput Input; // 0xb0
	uint32_t R : 1; // 0xe4
	uint32_t G : 1; // 0xe4
	uint32_t B : 1; // 0xe4
	uint32_t A : 1; // 0xe4
};

struct UMaterialExpressionDepthOfFieldFunction : UMaterialExpression {
	EDepthOfFieldFunctionValue FunctionValue; // 0xb0
	FExpressionInput Depth; // 0xb4
};

struct UPBRuleNodeCorner : UPBRuleNodeBase {
	float CornerSize; // 0x70
	TArray<FRBCornerAngleInfo> Angles; // 0x74
	float FlatThreshold; // 0x84
	uint32_t bNoMeshForConcaveCorners : 1; // 0x88
	uint32_t bUseAdjacentRulesetForRightGap : 1; // 0x88
	EPBCornerType CornerType; // 0x8c
	float CornerShapeOffset; // 0x90
	int32_t RoundTesselation; // 0x94
	float RoundCurvature; // 0x98
};

struct UFracturedStaticMeshComponent : UFracturedBaseComponent {
	TArray<char> FragmentNeighborsVisible; // 0x31c
	FBox VisibleBox; // 0x32c
	uint32_t bUseSkinnedRendering : 1; // 0x348
	uint32_t bUseVisibleVertsForBounds : 1; // 0x348
	uint32_t bTopFragmentsRootNonDestroyable : 1; // 0x348
	uint32_t bBottomFragmentsRootNonDestroyable : 1; // 0x348
	float TopBottomFragmentDistThreshold; // 0x34c
	ObjectProperty LoseChunkOutsideMaterialOverride; // 0x350
	float FragmentBoundsMaxZ; // 0x358
	float FragmentBoundsMinZ; // 0x35c
	ComponentProperty SkinnedComponent; // 0x360
};

struct ACBWeaponAttachment_DualWeaponBase : ACBWeaponAttachment {
	ComponentProperty DualMesh; // 0x424
	ComponentProperty MuzzleFlashPSCForDual; // 0x42c
	ObjectProperty TracerPSCTemplateForDual; // 0x434
	ComponentProperty MuzzleFlashLightForDual; // 0x43c
	ComponentProperty PSC_ShellEjectForDual; // 0x444
	uint32_t bRightFired : 1; // 0x44c
	FVector RightElbowPos; // 0x450
	FVector LeftElbowPos; // 0x45c
	FName AttachmentSocket_Left; // 0x468
};

struct ANxGenericForceFieldCapsule : ANxGenericForceField {
	ComponentProperty RenderComponent; // 0x338
	float CapsuleHeight; // 0x340
	float CapsuleRadius; // 0x344
};

struct AEmitterSpawnable : AEmitter {
	ObjectProperty ParticleTemplate; // 0x258
};

struct UCombatFrontEnd_MatchRoom : UCombatFrontEnd_Scene {
	ObjectProperty PlayerListClass; // 0xd0
	ObjectProperty RoomDetailInfoClass; // 0xd8
	ObjectProperty PopupClass; // 0xe0
	ObjectProperty TacticalGearClass; // 0xe8
	ObjectProperty MissionList; // 0xf0
	ObjectProperty BecameHostSound; // 0xf8
	ObjectProperty MatchAbortedSound; // 0x100
	ObjectProperty MatchroomClass[0x6]; // 0x108
	ObjectProperty CurrentMatchroomClass; // 0x138
	EMatchroomType CurrentMatchroomType; // 0x140
	uint32_t bIgnoreShortKey : 1; // 0x144
	uint32_t bHostMode : 1; // 0x144
	uint32_t bLastDashboardDisable : 1; // 0x144
	int32_t nChannel; // 0x148
	int32_t nSelectedId; // 0x14c
	int32_t CompMatchDialogID; // 0x150
	FMatchroomButtonStruct MatchroomButtonInfo[0x9]; // 0x154
	int32_t ReadyButtonLabelIDList[0x5]; // 0x2e0
	FString ReadyButtonLabelList[0x5]; // 0x2f4
	FRClickPopupMenuItem PopupMenuSetup[0x8]; // 0x344
	TArray<FGameOptionUIInfo> GameOptionUIInfos; // 0x3a4
	FString ChangeOptionNotifyMessage_MaxUser; // 0x3b4
	FString ChangeOptionNotifyMessage_GoalKill; // 0x3c4
	FString ChangeOptionNotifyMessage_GoalPoint; // 0x3d4
	FString ChangeOptionNotifyMessage_GoalWave; // 0x3e4
	FString ChangeOptionNotifyMessage_LimitTime; // 0x3f4
	FString ChangeOptionNotifyMessage_WinRound; // 0x404
	FString ChangeOptionNotifyMessage_HalfChange; // 0x414
	FString ChangeOptionNotifyMessage_AutoTeamBalance; // 0x424
	FString ChangeOptionNotifyMessage_AllChat; // 0x434
	FString ChangeOptionNotifyMessage_DeathChat; // 0x444
	FString ChangeOptionNotifyMessage_ThirdCamera; // 0x454
	FString OptionMaxUserLabel; // 0x464
	FString OptionAIMaxUserLavel; // 0x474
	FString OptionGoalKillLabel; // 0x484
	FString OptionGoalPointLabel; // 0x494
	FString OptionGoalWaveLabel; // 0x4a4
	FString OptionRoundLabel; // 0x4b4
	FString OptionMissionLabel; // 0x4c4
	FString OptionPlayTimeMinLabel; // 0x4d4
	FString OptionPlayTimeMinSecLabel; // 0x4e4
	FString OptionHalfChangeOnLabel; // 0x4f4
	FString OptionHalfChangeOffLabel; // 0x504
	FString OptionAutoTeamBalanceOnLabel; // 0x514
	FString OptionAutoTeamBalanceOffLabel; // 0x524
	FString OptionAutoCampOnLabel; // 0x534
	FString OptionAutoCampOffLabel; // 0x544
	FString OptionSaveClanRecordLabel; // 0x554
	FString OptionAllChatOnLabel; // 0x564
	FString OptionAllChatOffLabel; // 0x574
	FString OptionDeathChatOnLabel; // 0x584
	FString OptionDeathChatOffLabel; // 0x594
	FString OptionDifficultyEasyLabel; // 0x5a4
	FString OptionDifficultyNormalLabel; // 0x5b4
	FString OptionDifficultyHardLabel; // 0x5c4
	FString OptionThirdCameraOnLabel; // 0x5d4
	FString OptionThirdCameraOffLabel; // 0x5e4
	FString TeamList_LeftTeamLabel; // 0x5f4
	FString TeamList_RightTeamLabel; // 0x604
	FString TeamList_AutoBalanceTeamLabel; // 0x614
	FString TeamList_AutoCampTeamLabel; // 0x624
};

struct UOnlineTitleFileDownloadMcp : UOnlineTitleFileDownloadBase {
	TArray<FTitleFileMcp> TitleFiles; // 0x104
	int32_t DownloadCount; // 0x114
};

struct UCCSBTCrouch : UCCSBTScriptBehavior {
	uint32_t bCrouch : 1; // 0xd4
	ECCSMovementSpeed Speed; // 0xd8
};

struct UCombatAnimNotify_StopFrame : UAnimNotify {
	float PassedTime; // 0x60
};

struct USeqAct_MultiplyInt : USeqAct_SetSequenceVariable {
	int32_t ValueA; // 0x108
	int32_t ValueB; // 0x10c
	float FloatResult; // 0x110
	int32_t IntResult; // 0x114
};

struct UCombatMapInfo : UMapInfo {
	float VisibilityModifier; // 0x60
};

struct UTranslatorTag : UObject {
	FName Tag; // 0x60
};

struct USeqAct_DivideFloat : USeqAct_SetSequenceVariable {
	float ValueA; // 0x108
	float ValueB; // 0x10c
	float FloatResult; // 0x110
	int32_t IntResult; // 0x114
};

struct UCombatAnimNodeScaleRateBySpeed : UAnimNodeScaleRateBySpeed {
	float FallingScale; // 0x108
	float RigidBodyScale; // 0x10c
	uint32_t UsePawnGroundSpeed : 1; // 0x110
	ObjectProperty Owner; // 0x114
};

struct UParticleModuleAttractorLine : UParticleModuleAttractorBase {
	FVector EndPoint0; // 0x68
	FVector EndPoint1; // 0x74
	FRawDistributionFloat Range; // 0x80
	FRawDistributionFloat Strength; // 0xa4
};

struct USeqAct_CCSTriggerEvent : USequenceAction {
	FString EventType; // 0x108
};

struct UGenericParamListStatEntry : UObject {
	FPointer StatEvent; // 0x60
	ObjectProperty Writer; // 0x68
};

struct UCombatAnim_BlendList : UAnimNodeBlendList {
	TArray<float> ChildBlendInTime; // 0x120
	TArray<char> BlockSetActiveChildWhenRelevant; // 0x130
};

struct APylonSeed : AActor {
	FPointer VfTable_IInterface_NavMeshPathObject; // 0x244
};

struct UOnlineGameSearch : USettings {
	int32_t MaxSearchResults; // 0xa0
	FLocalizedStringSetting Query; // 0xa4
	uint32_t bIsLanQuery : 1; // 0xb0
	uint32_t bUsesArbitration : 1; // 0xb0
	uint32_t bIsSearchInProgress : 1; // 0xb0
	UOnlineGameSettings* GameSettingsClass; // 0xb4
	TArray<FOnlineGameSearchResult> Results; // 0xbc
	FOverrideSkill ManualSkillOverride; // 0xcc
	TArray<FNamedObjectProperty> NamedProperties; // 0x100
	FOnlineGameSearchQuery FilterQuery; // 0x110
	FString AdditionalSearchCriteria; // 0x130
	int32_t PingBucketSize; // 0x140
	int32_t NumPingProbes; // 0x144
	int32_t MaxPingBytes; // 0x148
};

struct UAnimNodeBlendDirectional : UAnimNodeBlendBase {
	float DirDegreesPerSecond; // 0x100
	float DirAngle; // 0x104
	int32_t SingleAnimAtOrAboveLOD; // 0x108
	FRotator RotationOffset; // 0x10c
	uint32_t bUseAcceleration : 1; // 0x118
};

struct USeqEvent_MobileObjectPicker : USeqEvent_MobileRawInput {
	float TraceDistance; // 0x13c
	uint32_t bCheckonTouch : 1; // 0x140
	FVector FinalTouchLocation; // 0x144
	FVector FinalTouchNormal; // 0x150
	ObjectProperty FinalTouchObject; // 0x15c
	TArray<ObjectProperty> Targets; // 0x164
};

struct UMorphTargetSet : UObject {
	TArray<ObjectProperty> Targets; // 0x60
	ObjectProperty BaseSkelMesh; // 0x70
	FArray_Mirror RawWedgePointIndices; // 0x78
};

struct UGripCondNode_TargetRange : UGripConditionNode {
	ECurAITarget CurAITarget; // 0xec
	BTConditionOperator Op; // 0xed
	uint32_t bIs2DRange : 1; // 0xf0
	float Distance; // 0xf4
};

struct UGameAICmd_Hover_MoveToGoal_Mesh : UGameAICommand {
	ObjectProperty Find; // 0x84
	float Radius; // 0x8c
	uint32_t bWasFiring : 1; // 0x90
	uint32_t bFinalApproach : 1; // 0x90
	uint32_t bFallbackMoveToMesh : 1; // 0x90
	float DesiredHoverHeight; // 0x94
	float CurrentHoverHeight; // 0x98
	float SubGoalReachDist; // 0x9c
	float GoalDistance; // 0xa0
	FVector IntermediatePoint; // 0xa4
	FVector LastMovePoint; // 0xb0
	int32_t NumMovePointFails; // 0xbc
	int32_t MaxMovePointFails; // 0xc0
	FVector FallbackDest; // 0xc4
	ObjectProperty MoveToActor; // 0xd0
	FBasedPosition LastMoveTargetPathLocation; // 0xd8
	FVector InitialFinalDestination; // 0x110
};

struct UImageReflectionShadowPlaneComponent : UPrimitiveComponent {
	uint32_t bEnabled : 1; // 0x250
	FPlane ReflectionPlane; // 0x260
};

struct AComBatPC_AIGameTDMStandAlone : ACombatPC {
	TArray<AInventory*> AllWeaponArray; // 0xbe4
};

struct UMaterialExpressionSceneTexture : UMaterialExpression {
	FExpressionInput Coordinates; // 0xb0
	ESceneTextureType SceneTextureType; // 0xe4
	uint32_t ScreenAlign : 1; // 0xe8
};

struct USkelControlTrail : USkelControlBase {
	int32_t ChainLength; // 0xd0
	EAxis ChainBoneAxis; // 0xd4
	uint32_t bInvertChainBoneAxis : 1; // 0xd8
	uint32_t bLimitStretch : 1; // 0xd8
	uint32_t bActorSpaceFakeVel : 1; // 0xd8
	uint32_t bHadValidStrength : 1; // 0xd8
	float TrailRelaxation; // 0xdc
	float StretchLimit; // 0xe0
	FVector FakeVelocity; // 0xe4
	float ThisTimstep; // 0xf0
	TArray<FVector> TrailBoneLocations; // 0xf4
	FMatrix OldLocalToWorld; // 0x110
};

struct UCombatAnimNodeSequenceByBoneRotation : UAnimNodeSequence {
	FName BoneName; // 0x158
	EAxis BoneAxis; // 0x160
	TArray<FAnimByRotation> AnimList; // 0x164
};

struct UMcpGroupsManager : UMcpGroupsBase {
	FString CreateGroupUrl; // 0x128
	FString DeleteGroupUrl; // 0x138
	FString QueryGroupsUrl; // 0x148
	FString QueryGroupMembersUrl; // 0x158
	FString AddGroupMembersUrl; // 0x168
	FString RemoveGroupMembersUrl; // 0x178
	FString DeleteAllGroupsUrl; // 0x188
	FString AcceptGroupInviteUrl; // 0x198
	FString RejectGroupInviteUrl; // 0x1a8
	DelegateProperty __OnQueryGroupsRequestComplete__Delegate; // 0x1b8
	DelegateProperty __OnQueryGroupMembersRequestComplete__Delegate; // 0x1c8
	DelegateProperty __OnAddGroupMembersRequestComplete__Delegate; // 0x1d8
	DelegateProperty __OnAcceptGroupInviteRequestComplete__Delegate; // 0x1e8
};

struct UCombatHUD_HitIndicator : UCombatHUDEntity_Base {
	ObjectProperty Direction[0x7]; // 0xc0
};

struct UInterpTrackToggle : UInterpTrack {
	TArray<FToggleTrackKey> ToggleTrack; // 0xa0
	uint32_t bActivateSystemEachUpdate : 1; // 0xb0
	uint32_t bActivateWithJustAttachedFlag : 1; // 0xb0
	uint32_t bFireEventsWhenForwards : 1; // 0xb0
	uint32_t bFireEventsWhenBackwards : 1; // 0xb0
	uint32_t bFireEventsWhenJumpingForwards : 1; // 0xb0
};

struct UGripCondNode_WeaponPossession : UGripConditionNode {
	EWeaponGroup WeaponGroup; // 0xec
	uint32_t bNegative : 1; // 0xf0
};

struct UWindPointSourceComponent : UWindDirectionalSourceComponent {
	ComponentProperty PreviewRadiusComponent; // 0xa0
	float Radius; // 0xa8
};

struct USeqAct_CombatTutorial_Dialogue : USequenceAction {
	TArray<FTutorial_Dialogue> Dialogues; // 0x108
	int32_t Cnt; // 0x118
};

struct UMaterialInstanceConstant : UMaterialInstance {
	TArray<FFontParameterValue> FontParameterValues; // 0x29c
	TArray<FScalarParameterValue> ScalarParameterValues; // 0x2ac
	TArray<FTextureParameterValue> TextureParameterValues; // 0x2bc
	TArray<FVectorParameterValue> VectorParameterValues; // 0x2cc
};

struct UCombatAwaitTransaction : UObject {
	TMap<None, None> AwaitListMap; // 0x60
	TMap<None, None> InviteInfoMap; // 0xa8
	int32_t AwaitListTotalPage; // 0xf0
};

struct ACombatEvolveGunSupplyPointActor : ACombatStaticMeshActor {
	int32_t CurrentState; // 0x254
	uint32_t bIsInvulnerable : 1; // 0x258
	uint32_t bCreatedSupply : 1; // 0x258
	uint32_t bFirstSpawn : 1; // 0x258
	uint32_t bJackpotSupply : 1; // 0x258
	int32_t Health; // 0x25c
	int32_t HealthJackpot; // 0x260
	int32_t HealthMax; // 0x264
	int32_t CurrentHealth; // 0x268
	int32_t LastSubObjectIndex; // 0x26c
	FOutlineProperty OutlineColor_Default; // 0x270
	FOutlineProperty OutlineColor_Jackpot; // 0x2ac
	TArray<FSubObjectInfo> SubObjectInfos; // 0x2e8
	ObjectProperty ExplosionTemplate; // 0x2f8
	ComponentProperty LightEnvironment; // 0x300
	float SpawnProtectTime; // 0x308
	FLinearColor SpawnProtectionAmbientGlow; // 0x30c
	float SpawnProtectionAmbientCycleTime; // 0x31c
	UDamageType* CreateDamageType; // 0x320
	int32_t UISortPriority; // 0x328
	int32_t MissionActorArrayIndex; // 0x32c
	int32_t CurrentMakeTime; // 0x330
	TArray<FEvolveSupplyPointInfos> SupplyPointArray; // 0x334
	TArray<FEvolveSupplyItemInfos> SupplyItemArray; // 0x344
	float TossSpeed; // 0x354
	TArray<FEvolveSupplyPointInfos> SupplyPointArrayJackpot; // 0x358
	TArray<FEvolveSupplyItemInfos> SupplyItemArrayJackpot; // 0x368
	float TossSpeedJackpot; // 0x378
	MissionActorUIState UIState; // 0x37c
	FString HumanReadableName; // 0x380
};

struct UInterpTrackInstFloatMaterialParam : UInterpTrackInst {
	TArray<FFloatMaterialParamMICData> MICInfos; // 0x60
	ObjectProperty InstancedTrack; // 0x70
};

struct UInterpTrackInstFloatParticleParam : UInterpTrackInst {
	float ResetFloat; // 0x60
};

struct ACombatHandActor : AActor {
	ObjectProperty OwnerPlayer; // 0x244
	ObjectProperty CurrentWeapon; // 0x24c
	ComponentProperty Mesh; // 0x254
	ComponentProperty LightEnvironment; // 0x25c
	UCombatAccessory_Base* AccessoryClass; // 0x264
};

struct USeqCond_Increment : USequenceCondition {
	int32_t IncrementAmount; // 0xec
	int32_t ValueA; // 0xf0
	int32_t ValueB; // 0xf4
};

struct ACombatHostageActor : AActor {
	int32_t MoveHealthMax; // 0x244
	int32_t TransformObjectHealthMax; // 0x248
	float CanTalkDistance; // 0x24c
	float SqrtCanTalkDistance; // 0x250
	ObjectProperty RepairingArea; // 0x254
	uint32_t bGodMode : 1; // 0x25c
	uint32_t bTestMode : 1; // 0x25c
	uint32_t bIsTransformation : 1; // 0x25c
	uint32_t bIsRepair : 1; // 0x25c
	int32_t Health; // 0x260
	FString HostageName; // 0x264
	ComponentProperty Mesh; // 0x274
	FReplicatedMeshInfo ReplicatedMesh; // 0x27c
	FName AnimNodeSlot; // 0x29c
	float AnimTime_UnlockHandcuffs; // 0x2a4
	FName UnlockHandcuffsAnim; // 0x2a8
	float AnimTime_GroggyStart; // 0x2b0
	FName GroggyStartAnim; // 0x2b4
	float AnimTime_GroggyEnd; // 0x2bc
	FName GroggyEndAnim; // 0x2c0
	float AnimTime_CoverStart; // 0x2c8
	FName CoverStartAnim; // 0x2cc
	float AnimTime_Death; // 0x2d4
	FName DeathAnim; // 0x2d8
	FName HitAnim; // 0x2e0
	FName CoverHitAnim; // 0x2e8
	ObjectProperty FullBodyAnimSlot; // 0x2f0
	ComponentProperty CylinderComponent; // 0x2f8
	HostageAnimType AnimState; // 0x300
	HostageVoiceType currentVoiceState; // 0x301
	FName StateName; // 0x304
	FString currentStateUIName; // 0x30c
	FString IconName; // 0x31c
	ObjectProperty SequnceObject; // 0x32c
	float MoveTrackEndTime; // 0x334
	float AnimPosition; // 0x338
	float MovingRate; // 0x33c
	ObjectProperty HitParticleTemplate; // 0x340
	ObjectProperty HitSound; // 0x348
	FHostageTakeHitInfo LastTakeHitInfo; // 0x350
	ObjectProperty Test_TalkSound; // 0x368
	TArray<FPassiveWheel> Wheels; // 0x370
	int32_t RepairingPlayerCount; // 0x380
	int32_t LastRepairingPlayerCount; // 0x384
	int32_t MaxRepairingPlayerCount; // 0x388
	TArray<ObjectProperty> RepairingPlayers; // 0x38c
	TArray<float> RepairTime; // 0x39c
	float RepairingTime; // 0x3ac
	float TimeForUnit; // 0x3b0
	int32_t HealthHealStep; // 0x3b4
	ComponentProperty HostageVocieSounds[0x6]; // 0x3b8
};

struct UCombatAnimBlendByMovement : UCombatAnimBlendBase {
	ObjectProperty Owner; // 0x144
};

struct UCombatCommon_Base : UGFxObject {
	ObjectProperty Owner; // 0xa0
	uint32_t bNeedInit : 1; // 0xa8
	uint32_t bPopUp : 1; // 0xa8
	uint32_t bDisplayed : 1; // 0xa8
};

struct UActorFactoryApexClothing : UActorFactorySkeletalMesh {
	TArray<ObjectProperty> ClothingAssets; // 0xb4
	ERBCollisionChannel ClothingRBChannel; // 0xc4
	FRBCollisionChannelContainer ClothingRBCollideWithChannels; // 0xc8
};

struct ACombatWeapon_Skill_Weapon : ACombatWeapon {
	FName FireActionVoiceName; // 0x1ec8
	ObjectProperty TargetActor; // 0x1ed0
	FVector TargetLoc; // 0x1ed8
	uint32_t bForceFireAmmunition : 1; // 0x1ee4
};

struct UDOFAndBloomEffect : UDOFEffect {
	float BloomScale; // 0xb4
	float BloomThreshold; // 0xb8
	FColor BloomTint; // 0xbc
	float BloomScreenBlendThreshold; // 0xc0
	float SceneMultiplier; // 0xc4
	float BlurBloomKernelSize; // 0xc8
	uint32_t bEnableReferenceDOF : 1; // 0xcc
	EDOFType DepthOfFieldType; // 0xd0
	EDOFQuality DepthOfFieldQuality; // 0xd1
	ObjectProperty BokehTexture; // 0xd4
};

struct ARadialBlurActor : AActor {
	ComponentProperty RadialBlur; // 0x244
};

struct UNxForceFieldRadialComponent : UNxForceFieldComponent {
	float ForceStrength; // 0x2c0
	float ForceRadius; // 0x2c4
	float SelfRotationStrength; // 0x2c8
	ERadialImpulseFalloff ForceFalloff; // 0x2cc
	FPointer Kernel; // 0x2d0
};

struct USeqVar_Player : USeqVar_Object {
	TArray<ObjectProperty> Players; // 0xc4
	uint32_t bAllPlayers : 1; // 0xd4
	int32_t PlayerIdx; // 0xd8
};

struct UTexture2DDynamic : UTexture {
	int32_t SizeX; // 0x11c
	int32_t SizeY; // 0x120
	EPixelFormat Format; // 0x124
	int32_t NumMips; // 0x128
	uint32_t bIsResolveTarget : 1; // 0x12c
	TArray<char> PixelData; // 0x130
};

struct UCombatCommon_SystemCounter : UCombatCommon_Base {
	TArray<FSystemCountInfo> SystemCountList; // 0xac
};

struct ACombatDemModePRI : ACombatPlayerReplicationInfo {
	uint32_t bHasBomb : 1; // 0x520
	int32_t BombPlantedCount; // 0x524
	int32_t BombDefusedCount; // 0x528
};

struct UCombatAssasinMovie : UCombatTeamGameMovie {
	uint32_t bTestMode : 1; // 0xad0
	ObjectProperty ExitContainer; // 0xad4
};

struct UMaterialExpressionRotator : UMaterialExpression {
	FExpressionInput Coordinate; // 0xb0
	FExpressionInput Time; // 0xe4
	float CenterX; // 0x118
	float CenterY; // 0x11c
	float Speed; // 0x120
};

struct UGripBTNode : UGripBTObject {
	ObjectProperty ParentNode; // 0x68
	TArray<FNodeChild> Children; // 0x70
	float RandomWeight; // 0x80
	FName NodeName; // 0x84
	FString NodeDescription; // 0x8c
	FString Comment; // 0x9c
	FName DefaultTitle; // 0xac
	BTExecutionResult LastExecutionResult; // 0xb4
	BTEvaluationResult LastEvaluationResult; // 0xb5
	int32_t DummyVarJustSoBaseClassDontEndWithAByteToAvoidCompilerWarning; // 0xb8
};

struct ACombatOccupiedAreaVolume : AVolume {
	FFlagParticleParam ParticleParamList_Unocuupied; // 0x280
	FFlagParticleParam ParticleParamList_Battling; // 0x294
	FFlagParticleParam ParticleParamList_OurTeam; // 0x2a8
	FFlagParticleParam ParticleParamList_Enemy; // 0x2bc
	ObjectProperty SeizeEffect; // 0x2d0
	ComponentProperty SeizePSC; // 0x2d8
	float SeizeEffectSizeRatio; // 0x2e0
	int32_t FirstOccupiedTeamIndex; // 0x2e4
	TArray<ObjectProperty> OccupationAreaDatas; // 0x2e8
	TArray<FOccupiedTeamMemberInfo> WithInTeamInfo; // 0x2f8
	FOccupyDataType CurrentOccupyState; // 0x308
	int32_t AreaID; // 0x310
	FString AreaName; // 0x314
	uint32_t bDirectGoalSetting : 1; // 0x324
	int32_t GoalScore; // 0x328
	ObjectProperty TargetFlagActor; // 0x32c
};

struct USeqAct_DivideInt : USeqAct_SetSequenceVariable {
	int32_t ValueA; // 0x108
	int32_t ValueB; // 0x10c
	float FloatResult; // 0x110
	int32_t IntResult; // 0x114
};

struct UCombatHUD_MagazineState : UCombatHUDEntity_Base {
	int32_t LastMagazineState; // 0xc0
	uint32_t bInitLabels : 1; // 0xc4
	FString StateString[0x4]; // 0xc8
	FString StateFontColor[0x4]; // 0x108
};

struct UMaterialExpressionTextureCoordinate : UMaterialExpression {
	int32_t CoordinateIndex; // 0xb0
	float UTiling; // 0xb4
	float VTiling; // 0xb8
	uint32_t UnMirrorU : 1; // 0xbc
	uint32_t UnMirrorV : 1; // 0xbc
};

struct USeqAct_ModifyProperty : USequenceAction {
	TArray<FPropertyInfo> Properties; // 0x108
};

struct UPBRuleNodeComment : UPBRuleNodeBase {
	int32_t SizeX; // 0x70
	int32_t SizeY; // 0x74
	int32_t BorderWidth; // 0x78
	FColor BorderColor; // 0x7c
	uint32_t bFilled : 1; // 0x80
	FColor FillColor; // 0x84
};

struct USwfMovie : UGFxRawData {
	uint32_t bUsesFontlib : 1; // 0xa0
	uint32_t bSetSRGBOnImportedTextures : 1; // 0xa0
	uint32_t bPackTextures : 1; // 0xa0
	uint32_t bForceSquarePacking : 1; // 0xa0
	int32_t PackTextureSize; // 0xa4
	FlashTextureRescale TextureRescale; // 0xa8
	FString TextureFormat; // 0xac
	int32_t RTTextures; // 0xbc
	int32_t RTVideoTextures; // 0xc0
};

struct UPath_AlongLine : UPathConstraint {
	FVector Direction; // 0x6c
};

struct UTcpNetDriver : UNetDriver {
	uint32_t AllowPlayerPortUnreach : 1; // 0x1e0
	uint32_t LogPortUnreach : 1; // 0x1e4
};

struct UInstancedStaticMeshComponent : UStaticMeshComponent {
	TArray<FInstancedStaticMeshInstanceData> PerInstanceData; // 0x2f4
	TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x304
	int32_t NumPendingLightmaps; // 0x314
	int32_t ComponentJoinKey; // 0x318
	TArray<FInstancedStaticMeshMappingInfo> CachedMappings; // 0x31c
	int32_t InstancingRandomSeed; // 0x32c
	int32_t InstanceStartCullDistance; // 0x330
	int32_t InstanceEndCullDistance; // 0x334
	uint32_t bDontResolveInstancedLightmaps : 1; // 0x338
};

struct ACombatDestructibleSMActor : ACombatStaticMeshActor {
	TArray<FMeshInfo> MeshInfoList; // 0x254
	char CurrentMeshInfoIndex; // 0x264
	int32_t CurrentDamage; // 0x268
};

struct UCombatHUDOption_AIWaveRoundStatus : UObject {
	FRoundStatusInfo RoundStatus; // 0x60
	int32_t ObjectHealthWarningCondition; // 0x74
};

struct UCBUIDataStore_HUD : UUIDataStore_Settings {
	FCachedWeaponInfo_BaseInfo myCachedWeaponInfo_BaseInfo; // 0x98
	FCachedWeaponInfo_AmmoCntInfo myCachedWeaponInfo_AmmoCntInfo; // 0xb8
	FCachedWeaponInfo_GrenadeInfo myCachedWeaponInfo_GrenadeInfo; // 0xd4
	TArray<FCachedPlayerInfo> CachedPlayerInfoList; // 0xe8
	FCachedPlayerInfo MyInfo; // 0xf8
	uint32_t bNeedUpdateMyInfo : 1; // 0x1d4
	uint32_t bNeedUpdateScoreboard_VC : 1; // 0x1d4
	uint32_t bNeedUpdateScoreboard_PM : 1; // 0x1d4
	uint32_t bNeedUpdataScoreboard_FPS : 1; // 0x1d4
	uint32_t bShowLog : 1; // 0x1d4
	int32_t LastFPS; // 0x1d8
	int32_t LastAIPlayTime; // 0x1dc
	FKillerInfoStruct KillerInfoForUI; // 0x1e0
	TArray<FCachedChampionshipPlayerInfoStruct> CachedChampionshipPlayerInfoList; // 0x218
	FChampionshipObserverKeyState ObserverKeyState; // 0x228
	FSuicideStateStruct SuicideStateForUI; // 0x22c
	EWinType RoundWinType; // 0x230
};

struct UInterpTrackMorphWeight : UInterpTrackFloatBase {
	FName MorphNodeName; // 0xb8
};

struct USeqAct_DrawText : USequenceAction {
	float DisplayTimeSeconds; // 0x108
	uint32_t bDisplayOnObject : 1; // 0x10c
	FKismetDrawTextInfo DrawTextInfo; // 0x110
};

struct UCombatDataTableRefClanTierEmblem : UCombatDataTableType {
	int32_t ClanTier; // 0x6c
	int32_t outlineImg; // 0x70
};

struct UCombatAnimNotify_CameraEffect : UAnimNotify_CameraEffect {
	FString PS_CameraEffect; // 0x68
	FString PS_CameraEffectNonExtremeContent; // 0x78
	float LifeSpan; // 0x88
	float DistFromCamera; // 0x8c
	float BaseFOV; // 0x90
	ESceneDepthPriorityGroup DepthGroup; // 0x94
	uint32_t bClearCameraEffectOnStopAnim : 1; // 0x98
};

struct UDrawQuadComponent : UPrimitiveComponent {
	ObjectProperty Texture; // 0x250
	float Width; // 0x258
	float Height; // 0x25c
};

struct ACombatPracticeGame : ACombatPVPGame {
	char MaxCheatPawns; // 0x788
	float RespawnTime; // 0x78c
	TArray<FCheatPawnInfo> CheatPawnInfoList; // 0x790
	int32_t SpawnKeyCount; // 0x7a0
	uint32_t bProjectileCamera : 1; // 0x7a4
	uint32_t bIsOnlyClient : 1; // 0x7a4
	uint32_t bTogglePracticeGameTimer : 1; // 0x7a4
	TArray<FSPracticeGameHotKeyInfo> HotKeyUIs; // 0x7a8
};

struct UCombatAnimMetaData_SkelControl : UAnimMetaData_SkelControl {
	float AccumulatedWeight; // 0x7c
};

struct UGripBTNumericCondition : UGripBTNode {
	BTConditionOperator Operator; // 0xbc
	int32_t Threshold; // 0xc0
	int32_t Value; // 0xc4
};

struct USeqAct_GetVelocity : USequenceAction {
	float VelocityMag; // 0x108
	FVector VelocityVect; // 0x10c
};

struct UGripAction_MoveRightAndLeft : UCombatAIActionBase {
	ObjectProperty ActionNode; // 0x78
	char CurDir; // 0x80
	float MoveStartTime; // 0x84
};

struct UCombatInGameOptionMenu : UCombatHUDEntity_Base {
	TArray<FMenuInfo> MenuInfoList; // 0xc0
};

struct ANxGenericForceField : ANxForceField {
	FFG_ForceFieldCoordinates Coordinates; // 0x298
	FVector Constant; // 0x29c
	FVector PositionMultiplierX; // 0x2a8
	FVector PositionMultiplierY; // 0x2b4
	FVector PositionMultiplierZ; // 0x2c0
	FVector PositionTarget; // 0x2cc
	FVector VelocityMultiplierX; // 0x2d8
	FVector VelocityMultiplierY; // 0x2e4
	FVector VelocityMultiplierZ; // 0x2f0
	FVector VelocityTarget; // 0x2fc
	FVector Noise; // 0x308
	FVector FalloffLinear; // 0x314
	FVector FalloffQuadratic; // 0x320
	float TorusRadius; // 0x32c
	FPointer LinearKernel; // 0x330
};

struct USkeletalMeshSocket : UObject {
	FName SocketName; // 0x60
	FName BoneName; // 0x68
	FVector RelativeLocation; // 0x70
	FRotator RelativeRotation; // 0x7c
	FVector RelativeScale; // 0x88
	ComponentProperty PreviewSkelComp; // 0x94
};

struct UMaterialExpressionTextureSampleLOD : UMaterialExpressionTextureSample {
	float TextureLODFactor; // 0x120
	FExpressionInput LODFactor; // 0x124
};

struct APortalVolume : AVolume {
	TArray<ObjectProperty> Portals; // 0x280
};

struct UParticleModuleUberLTISIVCLILIRSSBLIRR : UParticleModuleUberBase {
	FRawDistributionFloat Lifetime; // 0x78
	FRawDistributionVector StartSize; // 0x9c
	FRawDistributionVector StartVelocity; // 0xc0
	FRawDistributionFloat StartVelocityRadial; // 0xe4
	FRawDistributionVector ColorOverLife; // 0x108
	FRawDistributionFloat AlphaOverLife; // 0x12c
	FRawDistributionVector StartLocation; // 0x150
	FRawDistributionFloat StartRotation; // 0x174
	FRawDistributionVector SizeLifeMultiplier; // 0x198
	uint32_t SizeMultiplyX : 1; // 0x1bc
	uint32_t SizeMultiplyY : 1; // 0x1bc
	uint32_t SizeMultiplyZ : 1; // 0x1bc
	FRawDistributionFloat StartRotationRate; // 0x1c0
};

struct ARB_LineImpulseActor : ARigidBodyBase {
	float ImpulseStrength; // 0x244
	float ImpulseRange; // 0x248
	uint32_t bVelChange : 1; // 0x24c
	uint32_t bStopAtFirstHit : 1; // 0x24c
	uint32_t bCauseFracture : 1; // 0x24c
	ComponentProperty Arrow; // 0x250
	char ImpulseCount; // 0x258
};

struct UMaterialExpressionStaticBool : UMaterialExpression {
	uint32_t Value : 1; // 0xb0
};

struct USeqAct_AddInt : USeqAct_SetSequenceVariable {
	int32_t ValueA; // 0x108
	int32_t ValueB; // 0x10c
	float FloatResult; // 0x110
	int32_t IntResult; // 0x114
};

struct USoundMode : UObject {
	uint32_t bApplyEQ : 1; // 0x60
	FAudioEQEffect EQSettings; // 0x64
	TArray<FSoundClassAdjuster> SoundClassEffects; // 0x88
	float InitialDelay; // 0x98
	float FadeInTime; // 0x9c
	float Duration; // 0xa0
	float FadeOutTime; // 0xa4
};

struct UCombatChampionshipObserverInput : UCombatPlayerInputBase {
	TArray<FKeyBind> ObserverKeyBindings; // 0x2ec
	ObjectProperty CameraData; // 0x2fc
	float FOV_Min; // 0x304
	float FOV_Max; // 0x308
	float SpectatorCameraSpeed_Min; // 0x30c
	float SpectatorCameraSpeed_Max; // 0x310
	int32_t LastSelectedFreeCamPoint; // 0x314
};

struct UInterpTrackAnimControl : UInterpTrackFloatBase {
	TArray<ObjectProperty> AnimSets; // 0xb8
	FName SlotName; // 0xc8
	TArray<FAnimControlTrackKey> AnimSeqs; // 0xd0
	uint32_t bEnableRootMotion : 1; // 0xe0
	uint32_t bSkipAnimNotifiers : 1; // 0xe0
	uint32_t bSkipAnimNotifiersOnDediServer : 1; // 0xe0
};

struct UCCSAFOrientToward : UGripAFActionHandle {
	FVector Target; // 0x64
	ECCSAlertnessState Alertness; // 0x70
};

struct ACombatFlashExplosionActor : ACombatExplosionActor {
	TArray<FFlashEffectDataStruct> FlashEffectDataList; // 0x2dc
	float DefaultFlashEffectPlayTime; // 0x2ec
	DelegateProperty __RangeSort__Delegate; // 0x2f0
};

struct UCombatHUD_RoundStatusBar : UCombatHUDEntity_Base {
	ObjectProperty MinTF; // 0xc0
	ObjectProperty SecTF; // 0xc8
	int32_t LastWinCondition; // 0xd0
	FString C4Label; // 0xd4
	ObjectProperty Option; // 0xe4
	int32_t TimerState; // 0xec
};

struct ANxForceFieldGeneric : ANxForceField {
	ObjectProperty Shape; // 0x298
	ComponentProperty DrawComponent; // 0x2a0
	float RoughExtentX; // 0x2a8
	float RoughExtentY; // 0x2ac
	float RoughExtentZ; // 0x2b0
	FFG_ForceFieldCoordinates Coordinates; // 0x2b4
	FVector Constant; // 0x2b8
	FVector PositionMultiplierX; // 0x2c4
	FVector PositionMultiplierY; // 0x2d0
	FVector PositionMultiplierZ; // 0x2dc
	FVector PositionTarget; // 0x2e8
	FVector VelocityMultiplierX; // 0x2f4
	FVector VelocityMultiplierY; // 0x300
	FVector VelocityMultiplierZ; // 0x30c
	FVector VelocityTarget; // 0x318
	FVector Noise; // 0x324
	FVector FalloffLinear; // 0x330
	FVector FalloffQuadratic; // 0x33c
	float TorusRadius; // 0x348
	FPointer LinearKernel; // 0x34c
};

struct UAnimNodeScaleRateBySpeed : UAnimNodeScalePlayRate {
	float BaseSpeed; // 0x104
};

struct UCombatFrontEnd_Dashboard : UCombatFrontEnd_Object {
	FDashBoardButtonInfo DashBoardButtonList[0xe]; // 0xd0
	ObjectProperty TopBar; // 0x370
	FString LastPlayerName; // 0x378
	int32_t LastCCardID; // 0x388
	FString LastCCardIconPath; // 0x38c
	FString LastClanName; // 0x39c
	FString LastClanIconName; // 0x3ac
	FString LastClanIconPath; // 0x3bc
	FString LastClanLevel; // 0x3cc
	FString LastClanLevelColor; // 0x3dc
	int32_t LastLevel; // 0x3ec
	int32_t LastExpGuage; // 0x3f0
	FString LastLevelIconPath; // 0x3f4
	int32_t LastCurExp; // 0x404
	int32_t LastNextExp; // 0x408
	int32_t LastTierPoint; // 0x40c
	FString LastTierIconPath; // 0x410
	TArray<FMyMoneyStruct> LastMyMoneyInfo; // 0x420
	int32_t LastOnlineFriendCount; // 0x430
	uint32_t bLastNewSuggestionFriend : 1; // 0x434
	uint32_t bLastNewMail : 1; // 0x434
	uint32_t bLastExpiresMail : 1; // 0x434
	uint32_t bLastNoManner : 1; // 0x434
	int32_t LastNewMailCount; // 0x438
	int32_t BulletSaleEffectTimeOut; // 0x43c
	int32_t BulletSaleEffectLineCount; // 0x440
	int32_t PenaltyTimeMinute_UI; // 0x444
	int32_t PenaltyPoint_UI; // 0x448
	TArray<FPopupItemInfo> DashBoardPopup; // 0x44c
};

struct UUIDataProvider_OnlinePartyChatList : UUIDataProvider_OnlinePlayerDataBase {
	TArray<FOnlinePartyMember> PartyMembersList; // 0x74
	TArray<FString> NatTypes; // 0x84
	FString NickNameCol; // 0x94
	FString NatTypeCol; // 0xa4
	FString IsLocalCol; // 0xb4
	FString IsInPartyVoiceCol; // 0xc4
	FString IsTalkingCol; // 0xd4
	FString IsInGameSessionCol; // 0xe4
	FString IsPlayingThisGameCol; // 0xf4
};

struct ACombatSeizeFlagActor : AActor {
	ComponentProperty FlagMesh; // 0x244
	ComponentProperty LightEnvironment; // 0x24c
	FSkeletalMeshMaterialInfo FlagMaterialList_Unocuupied; // 0x254
	FSkeletalMeshMaterialInfo FlagMaterialList_Battling; // 0x260
	FSkeletalMeshMaterialInfo FlagMaterialList_OurTeam; // 0x26c
	FSkeletalMeshMaterialInfo FlagMaterialList_Enemy; // 0x278
};

struct UParticleModule : UObject {
	uint32_t bSpawnModule : 1; // 0x60
	uint32_t bUpdateModule : 1; // 0x60
	uint32_t bFinalUpdateModule : 1; // 0x60
	uint32_t bCurvesAsColor : 1; // 0x60
	uint32_t b3DDrawMode : 1; // 0x60
	uint32_t bSupported3DDrawMode : 1; // 0x60
	uint32_t bEnabled : 1; // 0x60
	uint32_t bEditable : 1; // 0x60
	uint32_t LODDuplicate : 1; // 0x60
	uint32_t bSupportsRandomSeed : 1; // 0x60
	uint32_t bRequiresLoopingNotification : 1; // 0x60
	char LODValidity; // 0x64
};

struct AAmbientSound : AKeypoint {
	uint32_t bAutoPlay : 1; // 0x24c
	uint32_t bIsPlaying : 1; // 0x24c
	ComponentProperty AudioComponent; // 0x250
};

struct UActorFactoryPhysicsAsset : UActorFactory {
	ObjectProperty PhysicsAsset; // 0x9c
	ObjectProperty SkeletalMesh; // 0xa4
	uint32_t bStartAwake : 1; // 0xac
	uint32_t bDamageAppliesImpulse : 1; // 0xac
	uint32_t bNotifyRigidBodyCollision : 1; // 0xac
	uint32_t bUseCompartment : 1; // 0xac
	uint32_t bCastDynamicShadow : 1; // 0xac
	FVector InitialVelocity; // 0xb0
	FVector DrawScale3D; // 0xbc
};

struct UMaterialExpressionDeriveNormalZ : UMaterialExpression {
	FExpressionInput InXY; // 0xb0
};

struct UCombatChatManager : UObject {
	TScriptInterface<Class> MainChatUI; // 0x60
	TScriptInterface<Class> MirrorChatUI; // 0x70
	FChattingDisplayInfo ChattingDisplayInfoList[0x18]; // 0x80
	FChattingDisplayInfo GameManagerChattingDisplayInfo; // 0xb60
	FString DefaultColor; // 0xbd4
	char ChattingType; // 0xbe4
	FString MsgColor; // 0xbe8
	FString ChatUserColor; // 0xbf8
	FString ClanNameColor; // 0xc08
	TArray<FChattingInfo> ChatListInfo; // 0xc18
};

struct UCombatFrontEnd_WeaponTuningPopup : UCombatFrontEnd_Object {
	int32_t CurrentTab; // 0xd0
	int32_t CurrentSelectedSlot; // 0xd4
	int32_t PendingOptionIdx; // 0xd8
};

struct UTranslationContext : UObject {
	TArray<ObjectProperty> TranslatorTags; // 0x60
};

struct USeqCond_SwitchClass : USeqCond_SwitchBase {
	TArray<FSwitchClassInfo> ClassArray; // 0xec
};

struct UCombatDataTableRefMatchMakingByRating : UCombatDataTableType {
	FString CodeName; // 0x6c
	int32_t SectionStartRating; // 0x7c
	int32_t RatingAllowRange; // 0x80
	int32_t RatingAllowTime; // 0x84
	int32_t ExtendRating; // 0x88
	int32_t ExtendMaxRating; // 0x8c
	int32_t ExtendInterval; // 0x90
	int32_t EmergencyTime; // 0x94
	int32_t ShowStringTime; // 0x98
};

struct UMaterialExpressionFunctionOutput : UMaterialExpression {
	FString OutputName; // 0xb0
	FString Description; // 0xc0
	int32_t SortPriority; // 0xd0
	FExpressionInput A; // 0xd4
	uint32_t bLastPreviewed : 1; // 0x108
	FGuid Id; // 0x10c
};

struct UInterpTrackVisibility : UInterpTrack {
	TArray<FVisibilityTrackKey> VisibilityTrack; // 0xa0
	uint32_t bFireEventsWhenForwards : 1; // 0xb0
	uint32_t bFireEventsWhenBackwards : 1; // 0xb0
	uint32_t bFireEventsWhenJumpingForwards : 1; // 0xb0
};

struct UCombatVoiceBase : UObject {
	TArray<FNotifySoundInfo> NotifySoundList; // 0x60
	TArray<FRadioDisplayInfo> LeftKeyInfos; // 0x70
	TArray<FRadioDisplayInfo> RightKeyInfos; // 0x80
	int32_t VoiceSoundType; // 0x90
};

struct ANxForceFieldTornado : ANxForceField {
	ObjectProperty Shape; // 0x298
	ComponentProperty DrawComponent; // 0x2a0
	float RadialStrength; // 0x2a8
	float RotationalStrength; // 0x2ac
	float LiftStrength; // 0x2b0
	float ForceRadius; // 0x2b4
	float ForceTopRadius; // 0x2b8
	float LiftFalloffHeight; // 0x2bc
	float EscapeVelocity; // 0x2c0
	float ForceHeight; // 0x2c4
	float HeightOffset; // 0x2c8
	uint32_t BSpecialRadialForceMode : 1; // 0x2cc
	float SelfRotationStrength; // 0x2d0
	FPointer Kernel; // 0x2d4
};

struct UCombatDataTableRefBoosterItem : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString CodeName; // 0x70
	FString CHANNEL_CODENAME; // 0x80
	FString ITEM_CODENAME; // 0x90
	int32_t TOOLTIP_ID; // 0xa0
	int32_t BUFF_EXP; // 0xa4
	int32_t BUFF_GOLD; // 0xa8
	int32_t BUFF_ATTEND_REWARD; // 0xac
	int32_t DAY_INFO; // 0xb0
	FTimeData BOOSTER_START; // 0xb4
	FTimeData BOOSTER_END; // 0xbc
	char BOOSTER_TYPE; // 0xc4
	char Level; // 0xc5
	char UI_VISIBLE; // 0xc6
};

struct UMaterialExpressionAppendVector : UMaterialExpression {
	FExpressionInput A; // 0xb0
	FExpressionInput B; // 0xe4
};

struct UCombatTutorialGameMovie : UCombatTeamGameMovie {
	ObjectProperty BombContainer; // 0xad0
	ObjectProperty TutorialLOContainer; // 0xad8
	int32_t BombsiteCount; // 0xae0
	int32_t BombCount; // 0xae4
	int32_t LOCount; // 0xae8
	uint32_t bUpdateEquippedBomb : 1; // 0xaec
	uint32_t bUpdateEquippedBombSite : 1; // 0xaec
	uint32_t bIsDisplayedBombLimitTime : 1; // 0xaec
	uint32_t bStartSpectDefuseUI : 1; // 0xaec
	int32_t LastBombDefuseTimeCount; // 0xaf0
};

struct UDOFEffect : UPostProcessEffect {
	float FalloffExponent; // 0x88
	float BlurKernelSize; // 0x8c
	float MaxNearBlurAmount; // 0x90
	float MinBlurAmount; // 0x94
	float MaxFarBlurAmount; // 0x98
	EFocusType FocusType; // 0x9c
	float FocusInnerRadius; // 0xa0
	float FocusDistance; // 0xa4
	FVector FocusPosition; // 0xa8
};

struct UGoal_AtActor : UPathGoalEvaluator {
	ObjectProperty GoalActor; // 0x78
	float GoalDist; // 0x80
	uint32_t bKeepPartial : 1; // 0x84
};

struct USeqAct_SetString : USeqAct_SetSequenceVariable {
	FString Target; // 0x108
	FString Value; // 0x118
};

struct UPBRuleNodeCycle : UPBRuleNodeBase {
	EProcBuildingAxis RepeatAxis; // 0x70
	float RepeatSize; // 0x74
	int32_t CycleSize; // 0x78
	uint32_t bFixRepeatSize : 1; // 0x7c
};

struct UCombatInGameResourcePool : UObject {
	int32_t MaxWeaponMaterialSet; // 0x60
	float MinImpactDecalDistance; // 0x64
	float ImpactDecalDepthBias; // 0x68
	float ImpactDecalDepthBiasStep; // 0x6c
	float ImpactDecalSlopeScaleDepthBias; // 0x70
	uint32_t bIgnoreNearImpactDecal : 1; // 0x74
	FString DefaultPhysMaterialName; // 0x78
	FString DefaultAirPhysMaterialName; // 0x88
	FInGameResource Resource[0x5]; // 0x98
	ObjectProperty OuterActor; // 0x138
	float MinImpactDecalDistanceSq; // 0x140
	ObjectProperty DefaultPhysMaterial; // 0x144
	ObjectProperty DefaultAirPhysMaterial; // 0x14c
	TArray<ObjectProperty> CachedSkillData; // 0x154
	TArray<ObjectProperty> CachedModeWeaponData; // 0x164
	FInGameSingleResourceList WeaponMasterAnimSet[0x2]; // 0x174
	FInGameSingleResourceList WeaponSubAnimSet[0x2]; // 0x194
	FInGameSingleResourceList AttachmentAnimSet[0x2]; // 0x1b4
	FIndirectArray_Mirror WeaponMasterAnimSetCallbackList; // 0x1d4
	FIndirectArray_Mirror WeaponSubAnimSetCallbackList; // 0x1e4
	FIndirectArray_Mirror AttachmentAnimSetCallbackList; // 0x1f4
	TArray<ObjectProperty> LocalMeshesForPreloadTexture; // 0x204
	TArray<ObjectProperty> PreloadMaterialList; // 0x214
	TArray<FLandingZone> ParachuteLandingZone; // 0x224
	DelegateProperty __OnLoadAsyncAnimSetFinished__Delegate; // 0x234
};

struct ACombatSentinelManager : AInfo {
	uint32_t bDoingASentinelRun : 1; // 0x244
	int32_t CurrentMapId; // 0x248
	int32_t CurrentModeIdx; // 0x24c
	FPointer RemoteDB; // 0x250
};

struct UHttpRequestWindows : UHttpRequestInterface {
	FPointer Request; // 0x70
	FString RequestVerb; // 0x78
	FPointer RequestURL; // 0x88
	TArray<char> Payload; // 0x90
};

struct USeqAct_CombatTutorial_HideHUD : USequenceAction {
	uint32_t HideHUD : 1; // 0x108
};

struct ACombatIngameVote_Base : AReplicationInfo {
	TArray<int32_t> VoteOKUserList; // 0x244
	TArray<int32_t> VoteNoUserList; // 0x254
	TArray<int32_t> VoteWaitUserList; // 0x264
	ObjectProperty manager; // 0x274
	int32_t TargetUID; // 0x27c
	int32_t VoteOKCount; // 0x280
	int32_t VoteNoCount; // 0x284
	int32_t VoteWaitCount; // 0x288
	FString senderName; // 0x28c
	FString TargetName; // 0x29c
};

struct UCombatDataTableRefSystemImage : UCombatDataTableType {
	int32_t ImageID; // 0x6c
	int32_t GRADE; // 0x70
	E_SYSTEM_IMAGE_TYPE ImageType; // 0x74
};

struct UCombatSkillSoundGroup : UObject {
	TArray<FSkillTeamAnnounceSound> AnnounceSkillTeamSounds; // 0x60
};

struct UCombatChampionshipCameraManager : UObject {
	FString filePath; // 0x60
	FString Section_MapName; // 0x70
	TArray<FString> Key_SpotName; // 0x80
};

struct UMaterialExpressionDestDepth : UMaterialExpression {
	uint32_t bNormalize : 1; // 0xb0
};

struct USoundNodeAmbient : USoundNode {
	uint32_t bAttenuate : 1; // 0x74
	uint32_t bSpatialize : 1; // 0x74
	uint32_t bAttenuateWithLPF : 1; // 0x74
	float dBAttenuationAtMax; // 0x78
	SoundDistanceModel DistanceModel; // 0x7c
	float RadiusMin; // 0x80
	float RadiusMax; // 0x84
	float LPFRadiusMin; // 0x88
	float LPFRadiusMax; // 0x8c
	float PitchMin; // 0x90
	float PitchMax; // 0x94
	float VolumeMin; // 0x98
	float VolumeMax; // 0x9c
	TArray<FAmbientSoundSlot> SoundSlots; // 0xa0
};

struct AComBatPC_PracticeGame : ACombatPC {
	TArray<AInventory*> AllWeaponArray; // 0xbe4
};

struct AFractureManager : AActor {
	int32_t FSMPartPoolSize; // 0x244
	uint32_t bEnableAntiVibration : 1; // 0x248
	uint32_t bEnableSpawnChunkEffectForRadialDamage : 1; // 0x248
	float DestroyVibrationLevel; // 0x24c
	float DestroyMinAngVel; // 0x250
	float ExplosionVelScale; // 0x254
	TArray<ObjectProperty> PartPool; // 0x258
	TArray<int32_t> FreeParts; // 0x268
	TArray<ObjectProperty> ActorsWithDeferredPartsToSpawn; // 0x278
};

struct UParticleModuleSpawnPerUnit : UParticleModuleSpawnBase {
	float UnitScalar; // 0x6c
	FRawDistributionFloat SpawnPerUnit; // 0x70
	uint32_t bIgnoreSpawnRateWhenMoving : 1; // 0x94
	uint32_t bIgnoreMovementAlongX : 1; // 0x94
	uint32_t bIgnoreMovementAlongY : 1; // 0x94
	uint32_t bIgnoreMovementAlongZ : 1; // 0x94
	float MovementTolerance; // 0x98
	float MaxFrameDistance; // 0x9c
	float MinFrameDistance; // 0xa0
};

struct UTextureRenderTarget : UTexture {
	uint32_t bUpdateImmediate : 1; // 0x11c
	uint32_t bNeedsTwoCopies : 1; // 0x11c
	uint32_t bRenderOnce : 1; // 0x11c
	float TargetGamma; // 0x120
};

struct UCombatAnimNotify_ChangeWeapAttachMeshSocket : UAnimNotify {
	FName NewSocketName; // 0x60
	FName DefaultSocketNameForPreview; // 0x68
	ComponentProperty PreviewSkelComp; // 0x70
};

struct UCombatDataTableRefModeOption : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString CodeName; // 0x70
	int32_t Show; // 0x80
	int32_t DefaultOption; // 0x84
	int32_t OptionCount; // 0x88
	TArray<int32_t> Option; // 0x8c
	int32_t UsingStringAll; // 0x9c
	int32_t StringAll; // 0xa0
	int32_t String0; // 0xa4
	int32_t String1; // 0xa8
	int32_t String2; // 0xac
};

struct UPlatformInterfaceWebResponse : UObject {
	FString OriginalURL; // 0x60
	int32_t ResponseCode; // 0x70
	int32_t Tag; // 0x74
	FMap_Mirror Headers; // 0x78
	FString StringResponse; // 0xc0
	TArray<char> BinaryResponse; // 0xd0
};

struct AVehicle : APawn {
	ObjectProperty Driver; // 0x558
	uint32_t bDriving : 1; // 0x560
	uint32_t bDriverIsVisible : 1; // 0x560
	uint32_t bAttachDriver : 1; // 0x560
	uint32_t bTurnInPlace : 1; // 0x560
	uint32_t bSeparateTurretFocus : 1; // 0x560
	uint32_t bFollowLookDir : 1; // 0x560
	uint32_t bHasHandbrake : 1; // 0x560
	uint32_t bScriptedRise : 1; // 0x560
	uint32_t bDuckObstacles : 1; // 0x560
	uint32_t bAvoidReversing : 1; // 0x560
	uint32_t bRetryPathfindingWithDriver : 1; // 0x560
	uint32_t bIgnoreStallZ : 1; // 0x560
	uint32_t bDoExtraNetRelevancyTraces : 1; // 0x560
	TArray<FVector> ExitPositions; // 0x564
	float ExitRadius; // 0x574
	FVector ExitOffset; // 0x578
	float Steering; // 0x584
	float Throttle; // 0x588
	float Rise; // 0x58c
	FVector TargetLocationAdjustment; // 0x590
	float DriverDamageMult; // 0x59c
	float MomentumMult; // 0x5a0
	UDamageType* CrushedDamageType; // 0x5a4
	float MinCrushSpeed; // 0x5ac
	float ForceCrushPenetration; // 0x5b0
	char StuckCount; // 0x5b4
	float ThrottleTime; // 0x5b8
	float StuckTime; // 0x5bc
	float OldSteering; // 0x5c0
	float OnlySteeringStartTime; // 0x5c4
	float OldThrottle; // 0x5c8
	float AIMoveCheckTime; // 0x5cc
	float VehicleMovingTime; // 0x5d0
	float TurnTime; // 0x5d4
};

struct UCombatDataTableRefClanSeasonReward : UCombatDataTableType {
	int32_t Season; // 0x6c
	int32_t GRADE; // 0x70
	int32_t SectionStart; // 0x74
	int32_t SectionEnd; // 0x78
	int32_t ClanRewardTitle1; // 0x7c
	int32_t ClanRewardImg1; // 0x80
	int32_t ClanRewardDesc1; // 0x84
	int32_t ClanRewardTitle2; // 0x88
	int32_t ClanRewardImg2; // 0x8c
	int32_t ClanRewardDesc2; // 0x90
};

struct AAIController : AController {
	uint32_t bAdjustFromWalls : 1; // 0x430
	uint32_t bReverseScriptedRoute : 1; // 0x430
	float Skill; // 0x434
	ObjectProperty ScriptedMoveTarget; // 0x438
	ObjectProperty ScriptedRoute; // 0x440
	int32_t ScriptedRouteIndex; // 0x448
	ObjectProperty ScriptedFocus; // 0x44c
};

struct UAnimNotify_Rumble : UAnimNotify {
	UWaveFormBase* PredefinedWaveForm; // 0x60
	ObjectProperty WaveForm; // 0x68
	uint32_t bCheckForBasedPlayer : 1; // 0x70
	float EffectRadius; // 0x74
};

struct ACombatSEIModePRI : ACombatPlayerReplicationInfo {
	int32_t OccupyingAreaID; // 0x520
	int32_t OccupationScore; // 0x524
};

struct UCombatFrontEnd_ClanInfoChangePopup : UCombatFrontEnd_Object {
	FString SavedClanName; // 0xd0
	int32_t SavedID; // 0xe0
};

struct UCombatSkelCtrl_WeaponLag : USkelControlSingleBone {
	int32_t PreviewIdx; // 0x100
	TArray<FTranslationPack> Translations; // 0x104
	TArray<FRotationPack> Rotations; // 0x114
};

struct UCombatHUD_Chat : UCombatHUDComponent_Base {
	FString LastWhisperSenderName; // 0xbc
};

struct UParticleModuleAttractorPoint : UParticleModuleAttractorBase {
	FRawDistributionVector Position; // 0x68
	FRawDistributionFloat Range; // 0x8c
	FRawDistributionFloat Strength; // 0xb0
	uint32_t StrengthByDistance : 1; // 0xd4
	uint32_t bAffectBaseVelocity : 1; // 0xd4
	uint32_t bOverrideVelocity : 1; // 0xd4
	uint32_t bUseWorldSpacePosition : 1; // 0xd4
};

struct URB_BodySetup : UKMeshProps {
	ESleepFamily SleepFamily; // 0xb8
	FName BoneName; // 0xbc
	uint32_t bFixed : 1; // 0xc4
	uint32_t bNoCollision : 1; // 0xc4
	uint32_t bBlockZeroExtent : 1; // 0xc4
	uint32_t bBlockNonZeroExtent : 1; // 0xc4
	uint32_t bEnableContinuousCollisionDetection : 1; // 0xc4
	uint32_t bAlwaysFullAnimWeight : 1; // 0xc4
	uint32_t bConsiderForBounds : 1; // 0xc4
	ObjectProperty PhysMaterial; // 0xc8
	float MassScale; // 0xd0
	TArray<FPointer> CollisionGeom; // 0xd4
	TArray<FVector> CollisionGeomScale3D; // 0xe4
	TArray<FVector> PreCachedPhysScale; // 0xf4
	TArray<FKCachedConvexData> PreCachedPhysData; // 0x104
	int32_t PreCachedPhysDataVersion; // 0x114
};

struct UWebApplication : UObject {
	ObjectProperty WorldInfo; // 0x60
	ObjectProperty WebServer; // 0x68
	FString Path; // 0x70
};

struct UParticleModuleOrientationAxisLock : UParticleModuleOrientationBase {
	EParticleAxisLock LockAxisFlags; // 0x68
};

struct UOnlineSubsystemCombatDedicatedSvr : UOnlineSubsystemCombatBase {
	TArray<FPresetItemInfo> PresetWeaponTransition; // 0x1bc
	TArray<FAvatarItemInfo> AvatarItemTransition; // 0x1cc
	TArray<FTuningData> TuningDataTransition; // 0x1dc
};

struct AEnvironmentVolume : AVolume {
	FPointer VfTable_IInterface_NavMeshPathObstacle; // 0x280
	FPointer VfTable_IInterface_NavMeshPathObject; // 0x288
	uint32_t bSplitNavMesh : 1; // 0x290
};

struct UCombatDataTableRefPickUpDisplay : UCombatDataTableType {
	int32_t Min; // 0x6c
	int32_t Max; // 0x70
	int32_t String_ID; // 0x74
};

struct ACombatTutorialLevelObject : ATrigger {
	uint32_t HideOnHUD : 1; // 0x254
	int32_t DisplaynameID; // 0x258
	Tutorial_LO_Type LevelObjectType; // 0x25c
};

struct UCombatCCSActorFactory : UCCSActorFactory {
	int32_t AISpreadMin; // 0x108
	int32_t AISpreadRandom; // 0x10c
	int32_t Health; // 0x110
	float AIGroundSpeed; // 0x114
};

struct URadialBlurComponent : UActorComponent {
	ObjectProperty Material; // 0x88
	ESceneDepthPriorityGroup DepthPriorityGroup; // 0x90
	float BlurScale; // 0x94
	float BlurFalloffExponent; // 0x98
	float BlurOpacity; // 0x9c
	float MaxCullDistance; // 0xa0
	float DistanceFalloffExponent; // 0xa4
	uint32_t bRenderAsVelocity : 1; // 0xa8
	uint32_t bEnabled : 1; // 0xa8
	FMatrix LocalToWorld; // 0xb0
	ComponentProperty OwnerPSC; // 0xf0
};

struct ATestSplittingVolume : AVolume {
	FPointer VfTable_IInterface_NavMeshPathObject; // 0x280
};

struct UEdCoordSystem : UObject {
	FMatrix M; // 0x60
	FString Desc; // 0xa0
};

struct ALandscape : ALandscapeProxy {
	TArray<FName> LayerNames; // 0x368
	TArray<FLandscapeLayerInfo> LayerInfos; // 0x378
};

struct UNavMeshPath_MinDistBetweenSpecsOfType : UNavMeshPathConstraint {
	float MinDistBetweenEdgeTypes; // 0x78
	FVector InitLocation; // 0x7c
	ENavMeshEdgeType EdgeType; // 0x88
	float Penalty; // 0x8c
};

struct ULandscapeComponent : UPrimitiveComponent {
	int32_t SectionBaseX; // 0x250
	int32_t SectionBaseY; // 0x254
	int32_t ComponentSizeQuads; // 0x258
	int32_t SubsectionSizeQuads; // 0x25c
	int32_t NumSubsections; // 0x260
	ObjectProperty OverrideMaterial; // 0x264
	ObjectProperty MaterialInstance; // 0x26c
	TArray<FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x274
	TArray<ObjectProperty> WeightmapTextures; // 0x284
	FVector4 WeightmapScaleBias; // 0x2a0
	float WeightmapSubsectionOffset; // 0x2b0
	FVector4 HeightmapScaleBias; // 0x2c0
	ObjectProperty HeightmapTexture; // 0x2d0
	FBoxSphereBounds CachedBoxSphereBounds; // 0x2d8
	FBox CachedLocalBox; // 0x2f4
	TArray<ObjectProperty> ShadowMaps; // 0x310
	TArray<FGuid> IrrelevantLights; // 0x320
	FLightMapRef LightMap; // 0x330
	FPointer EditToolRenderData; // 0x338
	int32_t CollisionMipLevel; // 0x340
	FPointer PlatformData; // 0x344
	int32_t PlatformDataSize; // 0x34c
	uint32_t bNeedPostUndo : 1; // 0x350
	int32_t ForcedLOD; // 0x354
	char NeighborLOD[0x8]; // 0x358
	char NeighborLODBias[0x8]; // 0x360
	int32_t LODBias; // 0x368
};

struct UCameraModifier : UObject {
	uint32_t bDisabled : 1; // 0x60
	uint32_t bPendingDisable : 1; // 0x60
	uint32_t bExclusive : 1; // 0x60
	uint32_t bDebug : 1; // 0x60
	ObjectProperty CameraOwner; // 0x64
	char Priority; // 0x6c
	float AlphaInTime; // 0x70
	float AlphaOutTime; // 0x74
	float Alpha; // 0x78
	float TargetAlpha; // 0x7c
};

struct UCombatWeaponRISBase_GrenadeLauncher : UCombatWeaponRISBase_SkeletalmeshComponent {
	FName OverrideDataName; // 0xc44
	float WorldFOVMagnification; // 0xc4c
	uint32_t bUseLauncherForegroundFOV : 1; // 0xc50
	float LauncherForegroundFOV; // 0xc54
	float LauncherZoomInDelayRatio; // 0xc58
	float LauncherZoomOutDelayRatio; // 0xc5c
	float OverrideWeaponBobRatio; // 0xc60
	float OverrideWeaponLagRatio; // 0xc64
	float OverrideZoomRotLagRatio; // 0xc68
	ObjectProperty OverrideWeaponFireSnd; // 0xc6c
	ObjectProperty OverrideWeaponFireSnd3rd; // 0xc74
	ObjectProperty OverrideMuzzleFlashPSCTemplateForGrenade; // 0xc7c
	ObjectProperty OverrideMuzzleFlashPSCTemplateForGrenade3rd; // 0xc84
};

struct USeqEvent_Input : USequenceEvent {
	uint32_t bTrapInput : 1; // 0x128
	int32_t AllowedPlayerIndex; // 0x12c
	TArray<FName> InputNames; // 0x130
};

struct USeqAct_RandomSwitch : USeqAct_Switch {
	TArray<int32_t> AutoDisabledIndices; // 0x124
};

struct USeqAct_AddRemoveFaceFXAnimSet : USequenceAction {
	TArray<ObjectProperty> FaceFXAnimSets; // 0x108
};

struct UParticleModuleUberLTISIVCLIL : UParticleModuleUberBase {
	FRawDistributionFloat Lifetime; // 0x78
	FRawDistributionVector StartSize; // 0x9c
	FRawDistributionVector StartVelocity; // 0xc0
	FRawDistributionFloat StartVelocityRadial; // 0xe4
	FRawDistributionVector ColorOverLife; // 0x108
	FRawDistributionFloat AlphaOverLife; // 0x12c
	FRawDistributionVector StartLocation; // 0x150
};

struct UCombatDataTableRefItemDetailinfo : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString CodeName; // 0x70
	int32_t Accuracy; // 0x80
	int32_t Damage; // 0x84
	int32_t Range; // 0x88
	int32_t RateOfFire; // 0x8c
	int32_t Recoil; // 0x90
	int32_t Mobility; // 0x94
	int32_t CurrentAmmo; // 0x98
	int32_t ReserveAmmo; // 0x9c
	FString AddImage_Path[0xa]; // 0xa0
	int32_t AddImage_ID[0xa]; // 0x140
	int32_t AddImage_NameID[0xa]; // 0x168
	int32_t AddImage_DescID[0xa]; // 0x190
};

struct UDemoRecDriver : UNetDriver {
	FString DemoSpectatorClass; // 0x20c
	int32_t MaxRewindPoints; // 0x2b4
	float RewindPointInterval; // 0x2bc
	int32_t NumRecentRewindPoints; // 0x2c0
};

struct ASkeletalMeshActor : AActor {
	uint32_t bDamageAppliesImpulse : 1; // 0x244
	uint32_t bShouldDoAnimNotifies : 1; // 0x244
	uint32_t bForceSaveInCheckpoint : 1; // 0x244
	uint32_t bCollideActors_OldValue : 1; // 0x244
	uint32_t bShouldShadowParentAllAttachedActors : 1; // 0x244
	ComponentProperty SkeletalMeshComponent; // 0x248
	ComponentProperty LightEnvironment; // 0x250
	ComponentProperty FacialAudioComp; // 0x258
	ObjectProperty ReplicatedMesh; // 0x260
	ObjectProperty ReplicatedMaterial0; // 0x268
	ObjectProperty ReplicatedMaterial1; // 0x270
	TArray<FSkelMeshActorControlTarget> ControlTargets; // 0x278
	TArray<ObjectProperty> InterpGroupList; // 0x288
	FName SavedAnimSeqName; // 0x298
	float SavedCurrentTime; // 0x2a0
};

struct UCombatDataTableRefMailCategory : UCombatDataTableType {
	int32_t TabType; // 0x6c
	int32_t MailType; // 0x70
};

struct UCombatDataTableRefFrontEndMode : UCombatDataTableType {
	FString CodeName; // 0x6c
	char ActivationType; // 0x7c
};

struct UCombatLogData : UObject {
	TArray<FWeaponFireData> FireDataList; // 0x60
	ObjectProperty DataOwner; // 0x70
	int32_t TransientFireCount; // 0x78
};

struct ACombatASAGameReplicationInfo : ACombatTDMGameReplicationInfo {
	char GameStatus; // 0x380
};

struct UCombatFrontEnd_MakeRoom : UCombatFrontEnd_Scene {
	TArray<FMakeroom_MissionInfo> Makeroom_MissionInfos; // 0xd0
	TArray<FMakeroom_ModeInfo> Makeroom_ModeInfos; // 0xe0
	TArray<FMakeroom_MapInfo> Makeroom_MapInfos; // 0xf0
	int32_t MissionLabelID; // 0x100
	int32_t ModeLabelID; // 0x104
	int32_t DescLabelID; // 0x108
	int32_t ModeSetupLabelID; // 0x10c
	int32_t MapSetupLabelID; // 0x110
	int32_t CurretMapLabelID; // 0x114
	int32_t BrandNewLabelID; // 0x118
	int32_t PopularityLabelID; // 0x11c
	int32_t EventLabelID; // 0x120
	int32_t MaxUserCountLabelID; // 0x124
	int32_t ChangeModeLabelID; // 0x128
	int32_t ChangeMapLabelID; // 0x12c
	FString ModeSetupLabel; // 0x130
	FString MapSetupLabel; // 0x140
	FFrontEndButtonStruct ButtonInfo[0x7]; // 0x150
	int32_t SelectedMissionIndex; // 0x1f8
	int32_t SelectedModeIndex; // 0x1fc
	int32_t SelectedMapIndex; // 0x200
	int32_t SelectedModeGroupIndex; // 0x204
	uint32_t bRandomMode : 1; // 0x208
	uint32_t bNeedUpdatePassword : 1; // 0x208
	uint32_t IsPracticeRoom : 1; // 0x208
	FString SelectedMissionName; // 0x20c
	FString SelectedModeName; // 0x21c
	FString SelectedMapName; // 0x22c
	FString SelectedMapMaxPlayerCount; // 0x23c
	FString SelectedMapBGPath; // 0x24c
	int32_t LastPassword; // 0x25c
	EMakeRoomMode CurrentUIMode; // 0x260
	EMakeRoomScene CurrentSetupType; // 0x261
	E_COMPETITIVE_MATCH_TYPE CurrentCompetitiveType; // 0x262
	ObjectProperty DataStoreMission; // 0x264
	int32_t nChannel; // 0x26c
	int32_t RefChannelID; // 0x270
	int32_t RegionID; // 0x274
};

struct UMaterialExpressionScalarParameter : UMaterialExpressionParameter {
	float DefaultValue; // 0xd0
};

struct USeqAct_SetActiveAnimChild : USequenceAction {
	FName NodeName; // 0x108
	int32_t ChildIndex; // 0x110
	float BlendTime; // 0x114
};

struct UInteraction : UUIRoot {
	DelegateProperty __OnReceivedNativeInputKey__Delegate; // 0x70
	DelegateProperty __OnReceivedNativeInputAxis__Delegate; // 0x80
	DelegateProperty __OnReceivedNativeInputChar__Delegate; // 0x90
	DelegateProperty __OnInitialize__Delegate; // 0xa0
};

struct UActorFactory : UObject {
	AActor* GameplayActorClass; // 0x60
	FString MenuName; // 0x68
	int32_t MenuPriority; // 0x78
	int32_t AlternateMenuPriority; // 0x7c
	FString NewActorClassName; // 0x80
	AActor* NewActorClass; // 0x90
	uint32_t bPlaceable : 1; // 0x98
	uint32_t bShowInEditorQuickMenu : 1; // 0x98
};

struct UCCSAFEnterCover : UGripAFActionHandle {
	ObjectProperty CoverLink; // 0x64
	ObjectProperty Target; // 0x6c
};

struct UDrawBoxComponent : UPrimitiveComponent {
	FColor BoxColor; // 0x250
	ObjectProperty BoxMaterial; // 0x254
	FVector BoxExtent; // 0x25c
	uint32_t bDrawWireBox : 1; // 0x268
	uint32_t bDrawLitBox : 1; // 0x268
	uint32_t bDrawOnlyIfSelected : 1; // 0x268
};

struct USeqAct_ToggleInput : USeqAct_Toggle {
	uint32_t bToggleMovement : 1; // 0x108
	uint32_t bToggleTurning : 1; // 0x108
};

struct USeqAct_AttachToActor : USequenceAction {
	uint32_t bDetach : 1; // 0x108
	uint32_t bHardAttach : 1; // 0x108
	uint32_t bUseRelativeOffset : 1; // 0x108
	uint32_t bUseRelativeRotation : 1; // 0x108
	FName BoneName; // 0x10c
	FVector RelativeOffset; // 0x114
	FRotator RelativeRotation; // 0x120
};

struct UFractureMaterial : UObject {
	ObjectProperty FractureEffect; // 0x60
	ObjectProperty FractureSound; // 0x68
};

struct UCombatChannelTransaction : UObject {
	TMap<None, None> ServerInfoMap; // 0x60
	TMap<None, None> ChannelInfoMap; // 0xa8
	int32_t SigleGameType; // 0xf0
};

struct USeqAct_SpawnGroupIndex : USeqAct_GameInfo {
	char SpawnGroupIndex; // 0x118
};

struct UCombatFrontEnd_ClanList : UCombatFrontEnd_Scene {
	ObjectProperty PopupClass; // 0xd0
	FClanInformation CurrentClanInfo; // 0xd8
	ObjectProperty DataStoreMission; // 0x11c
	TArray<FFixTextInfo> FixTextList; // 0x124
	TArray<int32_t> SortMenuIDList; // 0x134
	int32_t ShowPageNum; // 0x144
	int32_t TotalPage; // 0x148
	int32_t ShowType; // 0x14c
	int32_t MyClanID; // 0x150
	int32_t SelectClanID; // 0x154
	int32_t joinState; // 0x158
	FString SearchClanName; // 0x15c
};

struct UParticleModuleBeamSource : UParticleModuleBeamBase {
	Beam2SourceTargetMethod SourceMethod; // 0x68
	Beam2SourceTargetTangentMethod SourceTangentMethod; // 0x69
	FName SourceName; // 0x6c
	uint32_t bSourceAbsolute : 1; // 0x74
	uint32_t bLockSource : 1; // 0x74
	uint32_t bLockSourceTangent : 1; // 0x74
	uint32_t bLockSourceStength : 1; // 0x74
	FRawDistributionVector Source; // 0x78
	FRawDistributionVector SourceTangent; // 0x9c
	FRawDistributionFloat SourceStrength; // 0xc0
};

struct UCombatFrontEndLocalSoundGroup_Base : UCombatHUDSoundGroup {
	ObjectProperty EnterScene[0x18]; // 0x70
	ObjectProperty WarnInvalidNickName; // 0x130
	ObjectProperty MainLobby_SearchRoom; // 0x138
	ObjectProperty MainLobby_OptionMenu; // 0x140
	ObjectProperty MatchRoom_Intrude; // 0x148
	TArray<ObjectProperty> MatchRoom_ChangeTeam; // 0x150
	ObjectProperty MatchRoom_RoomState[0x7]; // 0x160
	ObjectProperty Matchroom_StartMatch; // 0x198
	ObjectProperty Matchroom_StartMatchCountDown; // 0x1a0
	ObjectProperty AlramFriendSuggestion; // 0x1a8
	ObjectProperty MailBox_NewMail; // 0x1b0
	ObjectProperty MailBox_UnreadMail; // 0x1b8
};

struct UMaterialExpressionCrossProduct : UMaterialExpression {
	FExpressionInput A; // 0xb0
	FExpressionInput B; // 0xe4
};

struct UGameViewportClient : UScriptViewportClient {
	FPointer VfTable_FExec; // 0x68
	FPointer Viewport; // 0x70
	FPointer ViewportFrame; // 0x78
	TArray<ObjectProperty> GlobalInteractions; // 0x80
	UUIInteraction* UIControllerClass; // 0x90
	ObjectProperty UIController; // 0x98
	ObjectProperty ViewportConsole; // 0xa0
	FExportShowFlags_Mirror ShowFlags; // 0xa8
	FString LoadingMessage; // 0xb8
	FString SavingMessage; // 0xc8
	FString ConnectingMessage; // 0xd8
	FString PausedMessage; // 0xe8
	FString PrecachingMessage; // 0xf8
	uint32_t bShowTitleSafeZone : 1; // 0x108
	uint32_t bDisplayHardwareMouseCursor : 1; // 0x108
	uint32_t bOverrideDiffuseAndSpecular : 1; // 0x108
	uint32_t bIsPlayInEditorViewport : 1; // 0x108
	uint32_t bShowSystemMouseCursor : 1; // 0x108
	uint32_t bDisableWorldRendering : 1; // 0x108
	uint32_t bDebugNoGFxUI : 1; // 0x108
	FTitleSafeZoneArea TitleSafeZone; // 0x10c
	TArray<FSplitscreenData> SplitscreenInfo; // 0x11c
	ESplitScreenType DesiredSplitscreenType; // 0x12c
	ESplitScreenType ActiveSplitscreenType; // 0x12d
	ESplitScreenType Default2PSplitType; // 0x12e
	ESplitScreenType Default3PSplitType; // 0x12f
	FString ProgressMessage[0x2]; // 0x130
	float ProgressTimeOut; // 0x150
	float ProgressFadeTime; // 0x154
	TArray<FDebugDisplayProperty> DebugProperties; // 0x158
	FPointer ScaleformInteraction; // 0x168
	DelegateProperty __HandleInputKey__Delegate; // 0x170
	DelegateProperty __HandleInputAxis__Delegate; // 0x180
	DelegateProperty __HandleInputChar__Delegate; // 0x190
};

struct AInstancedFoliageActor : AActor {
	FMap_Mirror FoliageMeshes; // 0x244
	ObjectProperty SelectedMesh; // 0x28c
	TArray<ComponentProperty> InstancedStaticMeshComponents; // 0x294
};

struct USeqAct_SetLocation : USeqAct_SetSequenceVariable {
	uint32_t bSetLocation : 1; // 0x108
	uint32_t bSetRotation : 1; // 0x108
	FVector LocationValue; // 0x10c
	FRotator RotationValue; // 0x118
	ObjectProperty Target; // 0x124
};

struct UGripBTLoop : UGripBTNode {
	int32_t TimesToLoop; // 0xbc
};

struct UGameAICommand : UAICommandBase {
	ObjectProperty ChildCommand; // 0x60
	FName ChildStatus; // 0x68
	ObjectProperty GameAIOwner; // 0x70
	FName Status; // 0x78
	uint32_t bAllowNewSameClassInstance : 1; // 0x80
	uint32_t bReplaceActiveSameClassInstance : 1; // 0x80
	uint32_t bAborted : 1; // 0x80
	uint32_t bIgnoreNotifies : 1; // 0x80
	uint32_t bIgnoreStepAside : 1; // 0x80
	uint32_t bPendingPop : 1; // 0x80
};

struct UParticleModuleMeshMaterial : UParticleModuleMaterialBase {
	TArray<ObjectProperty> MeshMaterials; // 0x68
};

struct USeqAct_Possess : USequenceAction {
	ObjectProperty PawnToPossess; // 0x108
	uint32_t bKillOldPawn : 1; // 0x110
	uint32_t bTryToLeaveVehicle : 1; // 0x110
};

struct UNxForceFieldCylindricalComponent : UNxForceFieldComponent {
	float RadialStrength; // 0x2c0
	float RotationalStrength; // 0x2c4
	float LiftStrength; // 0x2c8
	float ForceRadius; // 0x2cc
	float ForceTopRadius; // 0x2d0
	float LiftFalloffHeight; // 0x2d4
	float EscapeVelocity; // 0x2d8
	float ForceHeight; // 0x2dc
	float HeightOffset; // 0x2e0
	uint32_t UseSpecialRadialForce : 1; // 0x2e4
	FPointer Kernel; // 0x2e8
};

struct UParticleModuleRotation_Seeded : UParticleModuleRotation {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x8c
};

struct UInterpGroupTimeDilation : UInterpGroup {
	ObjectProperty TimeDilationAnimInst; // 0x98
	float CompressTolerance; // 0xa0
};

struct USeqCond_CompareFloat : USequenceCondition {
	float ValueA; // 0xec
	float ValueB; // 0xf0
};

struct UFacebookIntegration : UPlatformInterfaceBase {
	FString AppID; // 0x80
	TArray<FString> Permissions; // 0x90
	FString UserName; // 0xa0
	FString userID; // 0xb0
	FString AccessToken; // 0xc0
	TArray<FFacebookFriend> FriendsList; // 0xd0
};

struct UAnimationCompressionAlgorithm_RemoveTrivialKeys : UAnimationCompressionAlgorithm {
	float MaxPosDiff; // 0x78
	float MaxAngleDiff; // 0x7c
};

struct UCombatInstanceItem_Spray : UCombatInstanceItem {
	ObjectProperty SprayMaterial; // 0x370
	float Width; // 0x378
	float Height; // 0x37c
	uint32_t bDeathSpray : 1; // 0x380
};

struct UCombatCommon_Option : UCombatCommon_Base {
	E_OPTION_MODE_Index OptionMode; // 0xac
	E_OPTION_TAB_Index SelectedTab; // 0xad
	E_GAMEPLAY_SUBTAB_Index SelectedGamePlaySubTab; // 0xae
	E_Control_SUBTAB_Index SelectedControlSubTab; // 0xaf
	int32_t LabelSettingInfoIndex; // 0xb0
	TArray<FLabelSettingInfo> LabelSettingInfos; // 0xb4
	int32_t ButtonEnableInfoIndex; // 0xc4
	TArray<FButtonEnableInfo> ButtonEnableInfos; // 0xc8
	TArray<FVideoOptionItemInfo> VideoOptionInfos; // 0xd8
	int32_t VideoOptionInitDataIndex; // 0xe8
	int32_t VideoOptionSetValueIndex; // 0xec
	TArray<FVideoOptionPresetInfo> VideoPresets; // 0xf0
	int32_t ControlValueSettingInfoIndex; // 0x100
	TArray<FControlOptionItemInfo> ControlOptionInfos; // 0x104
	int32_t SoundValueSettingInfoIndex; // 0x114
	TArray<FSoundOptionItemInfo> SoundOptionInfos; // 0x118
	int32_t SoundOptionInitDataIndex; // 0x128
	int32_t SoundOptionSetValueIndex; // 0x12c
	FString VoiceInputModBindingKeyString; // 0x130
	int32_t GamePlayValueSettingInfoIndex; // 0x140
	TArray<FGamePlayOptionItemInfo> GamePlayOptionInfos; // 0x144
	int32_t CrosshairOptionItemInfoIndex; // 0x154
	TArray<FCrosshairOptionItemInfo> CrosshairOptionItemInfos; // 0x158
	TArray<FOptionKeyBindingInfo> KeyBindingInfos; // 0x168
	int32_t SelectedKeySlotIndex; // 0x178
	int32_t OldSelectedKeySlotIndex; // 0x17c
	TArray<FKeymapDatum> UnbindingKeys; // 0x180
	TArray<FString> RatingStrings; // 0x190
	uint32_t CrosshairSettingsChanged : 1; // 0x1a0
	int32_t VivoxDeviceIndex; // 0x1a4
	int32_t VivoxOldDeviceIndex; // 0x1a8
};

struct USoundNodeRandom : USoundNode {
	TArray<float> Weights; // 0x74
	int32_t PreselectAtLevelLoad; // 0x84
	uint32_t bRandomizeWithoutReplacement : 1; // 0x88
	TArray<char> HasBeenUsed; // 0x8c
	int32_t NumRandomUsed; // 0x9c
};

struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor {
	TMap<None, None> SelectedData; // 0x244
};

struct UMaterial : UMaterialInterface {
	ObjectProperty PhysMaterial; // 0x214
	UPhysicalMaterial* PhysicalMaterial; // 0x21c
	ObjectProperty PhysMaterialMask; // 0x224
	int32_t PhysMaterialMaskUVChannel; // 0x22c
	ObjectProperty BlackPhysicalMaterial; // 0x230
	ObjectProperty WhitePhysicalMaterial; // 0x238
	FColorMaterialInput DiffuseColor; // 0x240
	FScalarMaterialInput DiffusePower; // 0x27c
	FColorMaterialInput SpecularColor; // 0x2b8
	FScalarMaterialInput SpecularPower; // 0x2f4
	FVectorMaterialInput Normal; // 0x330
	FColorMaterialInput EmissiveColor; // 0x374
	FScalarMaterialInput Opacity; // 0x3b0
	FScalarMaterialInput OpacityMask; // 0x3ec
	float OpacityMaskClipValue; // 0x428
	float ShadowDepthBias; // 0x42c
	FVector2MaterialInput Distortion; // 0x430
	EBlendMode BlendMode; // 0x470
	EMaterialLightingModel LightingModel; // 0x471
	EMaterialTessellationMode D3D11TessellationMode; // 0x472
	FColorMaterialInput CustomLighting; // 0x474
	FColorMaterialInput CustomSkylightDiffuse; // 0x4b0
	FVectorMaterialInput AnisotropicDirection; // 0x4ec
	FScalarMaterialInput TwoSidedLightingMask; // 0x530
	FColorMaterialInput TwoSidedLightingColor; // 0x56c
	FVectorMaterialInput WorldPositionOffset; // 0x5a8
	FVectorMaterialInput WorldDisplacement; // 0x5ec
	FScalarMaterialInput TessellationMultiplier; // 0x630
	FColorMaterialInput SubsurfaceInscatteringColor; // 0x66c
	FColorMaterialInput SubsurfaceAbsorptionColor; // 0x6a8
	FScalarMaterialInput SubsurfaceScatteringRadius; // 0x6e4
	uint32_t EnableSubsurfaceScattering : 1; // 0x720
	uint32_t EnableSeparateTranslucency : 1; // 0x720
	uint32_t bEnableMaskedAntialiasing : 1; // 0x720
	uint32_t TwoSided : 1; // 0x720
	uint32_t TwoSidedSeparatePass : 1; // 0x720
	uint32_t bDisableDepthTest : 1; // 0x720
	uint32_t bSceneTextureRenderBehindTranslucency : 1; // 0x720
	uint32_t bAllowFog : 1; // 0x720
	uint32_t bTranslucencyReceiveDominantShadowsFromStatic : 1; // 0x720
	uint32_t bTranslucencyInheritDominantShadowsFromOpaque : 1; // 0x720
	uint32_t bAllowTranslucencyDoF : 1; // 0x720
	uint32_t bUseOneLayerDistortion : 1; // 0x720
	uint32_t bUseLitTranslucencyDepthPass : 1; // 0x720
	uint32_t bUseLitTranslucencyPostRenderDepthPass : 1; // 0x720
	uint32_t bCastLitTranslucencyShadowAsMasked : 1; // 0x720
	uint32_t bUsedAsLightFunction : 1; // 0x720
	uint32_t bUsedWithFogVolumes : 1; // 0x720
	uint32_t bUsedAsSpecialEngineMaterial : 1; // 0x720
	uint32_t bUsedWithSkeletalMesh : 1; // 0x720
	uint32_t bUsedWithTerrain : 1; // 0x720
	uint32_t bUsedWithLandscape : 1; // 0x720
	uint32_t bUsedWithFracturedMeshes : 1; // 0x720
	uint32_t bUsedWithParticleSystem : 1; // 0x720
	uint32_t bUsedWithParticleSprites : 1; // 0x720
	uint32_t bUsedWithBeamTrails : 1; // 0x720
	uint32_t bUsedWithParticleSubUV : 1; // 0x720
	uint32_t bUsedWithSpeedTree : 1; // 0x720
	uint32_t bUsedWithStaticLighting : 1; // 0x720
	uint32_t bUsedWithLensFlare : 1; // 0x720
	uint32_t bUsedWithGammaCorrection : 1; // 0x720
	uint32_t bUsedWithInstancedMeshParticles : 1; // 0x720
	uint32_t bUsedWithFluidSurfaces : 1; // 0x720
	uint32_t bUsedWithDecals : 1; // 0x724
	uint32_t bUsedWithMaterialEffect : 1; // 0x724
	uint32_t bUsedWithMorphTargets : 1; // 0x724
	uint32_t bUsedWithRadialBlur : 1; // 0x724
	uint32_t bUsedWithInstancedMeshes : 1; // 0x724
	uint32_t bUsedWithSplineMeshes : 1; // 0x724
	uint32_t bUsedWithAPEXMeshes : 1; // 0x724
	uint32_t bUsedWithScreenDoorFade : 1; // 0x724
	uint32_t bEnableCrackFreeDisplacement : 1; // 0x724
	uint32_t bUseImageBasedReflections : 1; // 0x724
	uint32_t Wireframe : 1; // 0x724
	uint32_t bPerPixelCameraVector : 1; // 0x724
	uint32_t bAllowLightmapSpecular : 1; // 0x724
	uint32_t bIsFallbackMaterial : 1; // 0x724
	uint32_t bUsesDistortion : 1; // 0x724
	uint32_t bIsMasked : 1; // 0x724
	uint32_t bIsPreviewMaterial : 1; // 0x724
	uint32_t bUsedWithWorldCube : 1; // 0x724
	uint32_t bAllowOutline : 1; // 0x724
	uint32_t bAllowTranslucentWithoutDOF : 1; // 0x724
	uint32_t bUsedWithZoomRatio : 1; // 0x724
	float ImageReflectionNormalDampening; // 0x728
	FPointer MaterialResources[0x2]; // 0x72c
	FPointer DefaultMaterialInstances[0x3]; // 0x73c
	int32_t EditorX; // 0x754
	int32_t EditorY; // 0x758
	int32_t EditorPitch; // 0x75c
	int32_t EditorYaw; // 0x760
	TArray<ObjectProperty> Expressions; // 0x764
	TArray<FMaterialFunctionInfo> MaterialFunctionInfos; // 0x774
	TMap<None, None> EditorParameters; // 0x784
	TArray<ObjectProperty> ReferencedTextures; // 0x7cc
};

struct UCombatMailTransaction : UObject {
	TMap<None, None> MailBoxListMap; // 0x60
	int32_t TotalPage; // 0xa8
	int32_t NewCount[0x3]; // 0xac
	int32_t ExpiresCount; // 0xb8
};

struct ACombatDemolitionRadarCore : ACombatRadarCore {
	EObjectIconType AllyWithC4IconNameList[0x5]; // 0x46c
	char ExplosionAreaIconOffset; // 0x471
};

struct ACombatRadarCore : AActor {
	ObjectProperty CurrentMinimapActor; // 0x244
	TArray<ObjectProperty> MapPointList; // 0x24c
	EMapScoreMode TacticalMapMode; // 0x25c
	EMapScoreMode CachedMapModeBeforePressKey; // 0x25d
	EObjectIconType AllyIconNameList[0x5]; // 0x25e
	EObjectIconType EnemyIconNameList[0x5]; // 0x263
	float RadarRange; // 0x268
	int32_t MiniMapSize[0x3]; // 0x26c
	int32_t MiniMapSizeType; // 0x278
	int32_t WholeMapFrameSizeX; // 0x27c
	int32_t WholeMapFrameSizeY; // 0x280
	float HalfWholeMapFrameSizeX; // 0x284
	float HalfWholeMapFrameSizeY; // 0x288
	int32_t WholeMapHybridFrameSizeX; // 0x28c
	int32_t WholeMapHybridFrameSizeY; // 0x290
	float HalfWholeMapHybridFrameSizeX; // 0x294
	float HalfWholeMapHybridFrameSizeY; // 0x298
	int32_t BroadcastingMapFrameSizeX; // 0x29c
	int32_t BroadcastingMapFrameSizeY; // 0x2a0
	float HalfBroadcastingMapFrameSizeX; // 0x2a4
	float HalfBroadcastingMapFrameSizeY; // 0x2a8
	float CurrentHalfMapFrameSizeX; // 0x2ac
	float CurrentHalfMapFrameSizeY; // 0x2b0
	int32_t DefaultMapTextureSizeX; // 0x2b4
	int32_t DefaultMapTextureSizeY; // 0x2b8
	TArray<FObjectIconInfo> ObjectIconList; // 0x2bc
	uint32_t bFinishObjectIconList : 1; // 0x2cc
	uint32_t bNeedUpdateMapSymbol : 1; // 0x2cc
	TArray<FIngameMarkerInfo> IngameMarkerList; // 0x2d0
	int32_t LastLocationLabelID; // 0x2e0
	ObjectProperty TacticalMapUI; // 0x2e4
	FTacticalMapPlayerIconInfo AllyIconsInfoList[0x5]; // 0x2ec
	FTacticalMapPlayerIconInfo EnemyIconsInfoList[0x5]; // 0x314
	FMinimapObjectIconInfo MinimapObjectIconinfos[0x4a]; // 0x33c
	ObjectProperty OwnerMovie; // 0x464
};

struct USeqVar_Object : USequenceVariable {
	ObjectProperty ObjValue; // 0xa0
	FVector ActorLocation; // 0xa8
	TArray<UObject*> SupportedClasses; // 0xb4
};

struct UGFxAction_GetVariable : USequenceAction {
	ObjectProperty Movie; // 0x108
	FString Variable; // 0x110
};

struct UUberPostProcessEffect : UDOFBloomMotionBlurEffect {
	FVector SceneShadows; // 0xf0
	FVector SceneHighLights; // 0xfc
	FVector SceneMidTones; // 0x108
	float SceneDesaturation; // 0x114
	FVector SceneColorize; // 0x118
	ETonemapperType TonemapperType; // 0x124
	EPostProcessAAType PostProcessAAType; // 0x125
	float TonemapperRange; // 0x128
	float TonemapperToeFactor; // 0x12c
	float TonemapperScale; // 0x130
	float MotionBlurSoftEdgeKernelSize; // 0x134
	uint32_t bEnableImageGrain : 1; // 0x138
	uint32_t bScaleEffectsWithViewSize : 1; // 0x138
	uint32_t bUseColorEdgeDetectionForSMAA : 1; // 0x138
	uint32_t bEnableHDRTonemapper : 1; // 0x138
	float SceneImageGrainScale; // 0x13c
	float BloomWeightSmall; // 0x140
	float BloomWeightMedium; // 0x144
	float BloomWeightLarge; // 0x148
	float BloomSizeScaleSmall; // 0x14c
	float BloomSizeScaleMedium; // 0x150
	float BloomSizeScaleLarge; // 0x154
	float EdgeDetectionThreshold; // 0x158
	float SMAAEdgeDetectionThreshold; // 0x15c
	FLUTBlender PreviousLUTBlender; // 0x160
	float SceneHDRTonemapperScale; // 0x184
};

struct ACombatDroppedSupplies : ACombatDroppedBase {
	EDroppedSuppliesType SuppliesType; // 0x320
	ETeamIdentifyState CurrentIdentifyState; // 0x321
	FLinearColor TeamIdentifyColor[0x3]; // 0x324
	ObjectProperty TeamIdentifyMIC; // 0x354
};

struct AInterpActor : ADynamicSMActor {
	uint32_t bShouldSaveForCheckpoint : 1; // 0x294
	uint32_t bMonitorMover : 1; // 0x294
	uint32_t bMonitorZVelocity : 1; // 0x294
	uint32_t bDestroyProjectilesOnEncroach : 1; // 0x294
	uint32_t bContinueOnEncroachPhysicsObject : 1; // 0x294
	uint32_t bStopOnEncroach : 1; // 0x294
	uint32_t bShouldShadowParentAllAttachedActors : 1; // 0x294
	uint32_t bIsLift : 1; // 0x294
	ObjectProperty MyMarker; // 0x298
	float MaxZVelocity; // 0x2a0
	float StayOpenTime; // 0x2a4
	ObjectProperty OpenSound; // 0x2a8
	ObjectProperty OpeningAmbientSound; // 0x2b0
	ObjectProperty OpenedSound; // 0x2b8
	ObjectProperty CloseSound; // 0x2c0
	ObjectProperty ClosingAmbientSound; // 0x2c8
	ObjectProperty ClosedSound; // 0x2d0
	ComponentProperty AmbientSoundComponent; // 0x2d8
};

struct UCombatDataTableRefMarkerOption : UCombatDataTableType {
	FString MarkerGroupID; // 0x6c
	int32_t Id; // 0x7c
	int32_t RadioMessageString; // 0x80
	int32_t SoundID; // 0x84
	int32_t MarkerUIImage; // 0x88
	int32_t MarkerUIString; // 0x8c
	int32_t MarkerIngameImage; // 0x90
	int32_t MarkerType; // 0x94
};

struct UGameAICmd_Hover_MoveToGoal : UGameAICommand {
	ObjectProperty Path; // 0x84
	ObjectProperty Find; // 0x8c
	ObjectProperty Goal; // 0x94
	float Radius; // 0x9c
	uint32_t bWasFiring : 1; // 0xa0
	float DesiredHoverHeight; // 0xa4
	float CurrentHoverHeight; // 0xa8
	float SubGoalReachDist; // 0xac
	float GoalDistance; // 0xb0
	FVector MoveVectDest; // 0xb4
	ObjectProperty CurrentSpec; // 0xc0
};

struct UParticleModuleKillVolume : UParticleModuleKillBase {
	FString VolumeName; // 0x68
	FRawDistributionVector LowerLeftCorner; // 0x78
	FRawDistributionVector UpperRightCorner; // 0x9c
	FRawDistributionFloat Height; // 0xc0
	uint32_t bAbsolute : 1; // 0xe4
	uint32_t bKillInside : 1; // 0xe4
	uint32_t bAxisAlignedAndFixedSize : 1; // 0xe4
	uint32_t bFloor : 1; // 0xe4
	uint32_t bApplyPSysScale : 1; // 0xe4
	ParticleKillVolumeType KillVolumeType; // 0xe8
};

struct UParticleModuleEventReceiverKillParticles : UParticleModuleEventReceiverBase {
	uint32_t bStopSpawning : 1; // 0x74
};

struct ARoute : AInfo {
	FPointer VfTable_IEditorLinkSelectionInterface; // 0x244
	ERouteType RouteType; // 0x24c
	TArray<FActorReference> RouteList; // 0x250
	float FudgeFactor; // 0x260
	int32_t RouteIndexOffset; // 0x264
};

struct AColorScaleVolume : AVolume {
	FVector ColorScale; // 0x280
	float InterpTime; // 0x28c
};

struct USkelControl_Multiply : USkelControlBase {
	float Multiplier; // 0xd0
};

struct USeqAct_CombatDelay : USeqAct_Delay {
	uint32_t bDisplayHUD : 1; // 0x134
	int32_t NotifyTime; // 0x138
};

struct ACombatEvolveGunSupplyPointActorManager : AActor {
	int32_t InitMakeTime; // 0x244
	int32_t MakeTime; // 0x248
	int32_t AlertMakeTime; // 0x24c
	int32_t JackpotMinTime; // 0x250
	int32_t JackpotMaxTime; // 0x254
	int32_t JackpotMinPercent; // 0x258
	int32_t JackpotMaxPercent; // 0x25c
	TArray<ObjectProperty> SupplyActorList; // 0x260
	int32_t nextIndex; // 0x270
	uint32_t bNextJackpot : 1; // 0x274
};

struct USeqEvent_MobileRawInput : USequenceEvent {
	int32_t TouchIndex; // 0x128
	int32_t TouchpadIndex; // 0x12c
	float TouchLocationX; // 0x130
	float TouchLocationY; // 0x134
	float TimeStamp; // 0x138
};

struct UCombatFrontEnd_SeasonPassPopup : UCombatFrontEnd_Object {
	int32_t CurrentPassType; // 0xd0
	int32_t CurrentPassUpgradeItem; // 0xd4
};

struct UCombatAIAction_SelectTarget : UCombatAIActionBase {
	ObjectProperty ActionNode; // 0x78
};

struct UParticleModuleSizeScaleByTime : UParticleModuleSizeBase {
	FRawDistributionVector SizeScaleByTime; // 0x68
	uint32_t bEnableX : 1; // 0x8c
	uint32_t bEnableY : 1; // 0x8c
	uint32_t bEnableZ : 1; // 0x8c
};

struct UCombatFrontEnd_QuickStart : UCombatFrontEnd_Scene {
	TArray<FQuickStart_MissionInfo> QuickStart_MissionInfos; // 0xd0
	TArray<FQuickStart_ModeInfo> QuickStart_ModeInfos; // 0xe0
	TArray<FQuickStart_MapInfo> QuickStart_MapInfos; // 0xf0
	FFrontEndButtonStruct QStartButtonInfo[0x3]; // 0x100
	int32_t StatusLabels[0x2]; // 0x148
	int32_t PlayersLabels[0x2]; // 0x150
	ObjectProperty DataStoreMission; // 0x158
	ObjectProperty QSSetting; // 0x160
};

struct AProjectile : AActor {
	float Speed; // 0x244
	float MaxSpeed; // 0x248
	uint32_t bSwitchToZeroCollision : 1; // 0x24c
	uint32_t bBlockedByInstigator : 1; // 0x24c
	uint32_t bBegunPlay : 1; // 0x24c
	uint32_t bRotationFollowsVelocity : 1; // 0x24c
	uint32_t bIgnoreFoliageTouch : 1; // 0x24c
	ObjectProperty ZeroCollider; // 0x250
	ComponentProperty ZeroColliderComponent; // 0x258
	float Damage; // 0x260
	float DamageRadius; // 0x264
	float MomentumTransfer; // 0x268
	UDamageType* MyDamageType; // 0x26c
	ObjectProperty SpawnSound; // 0x274
	ObjectProperty ImpactSound; // 0x27c
	ObjectProperty InstigatorController; // 0x284
	ObjectProperty ImpactedActor; // 0x28c
	float NetCullDistanceSquared; // 0x294
	ComponentProperty CylinderComponent; // 0x298
};

struct UMobileMenuList : UMobileMenuObject {
	uint32_t bIsVerticalList : 1; // 0xdc
	uint32_t bForceSelectedToLineup : 1; // 0xdc
	uint32_t bTapToScrollToItem : 1; // 0xdc
	uint32_t bLoops : 1; // 0xdc
	float SelectedOffset; // 0xe0
	TArray<ObjectProperty> Items; // 0xe4
	FSelectedMenuItem SelectedItem; // 0xf4
	FMenuListDragInfo Drag; // 0x100
	FMenuListMovementInfo Movement; // 0x154
	float Deacceleration; // 0x170
	float EaseOutExp; // 0x174
	FIntPoint ScreenSize; // 0x178
	int32_t FirstVisible; // 0x180
	int32_t LastVisible; // 0x184
	float EndOfListSupression; // 0x188
};

struct USpeedTreeComponentFactory : UPrimitiveComponentFactory {
	ComponentProperty SpeedTreeComponent; // 0x64
};

struct UMaterialExpressionTransform : UMaterialExpression {
	FExpressionInput Input; // 0xb0
	EMaterialVectorCoordTransformSource TransformSourceType; // 0xe4
	EMaterialVectorCoordTransform TransformType; // 0xe5
};

struct UCCSBTScriptBehavior : UGripBTScriptBehavior {
	ObjectProperty Controller; // 0xcc
};

struct USeqEvent_MobileButton : USeqEvent_MobileZoneBase {
	uint32_t bWasActiveLastFrame : 1; // 0x138
	uint32_t bSendPressedOnlyOnTouchDown : 1; // 0x138
	uint32_t bSendPressedOnlyOnTouchUp : 1; // 0x138
};

struct UAnimNodeSequence : UAnimNode {
	FName AnimSeqName; // 0xe8
	float Rate; // 0xf0
	uint32_t bPlaying : 1; // 0xf4
	uint32_t bLooping : 1; // 0xf4
	uint32_t bCauseActorAnimEnd : 1; // 0xf4
	uint32_t bCauseActorAnimPlay : 1; // 0xf4
	uint32_t bZeroRootRotation : 1; // 0xf4
	uint32_t bZeroRootTranslation : 1; // 0xf4
	uint32_t bDisableWarningWhenAnimNotFound : 1; // 0xf4
	uint32_t bNoNotifies : 1; // 0xf4
	uint32_t bForceRefposeWhenNotPlaying : 1; // 0xf4
	uint32_t bIsIssuingNotifies : 1; // 0xf4
	uint32_t bForceAlwaysSlave : 1; // 0xf4
	uint32_t bSynchronize : 1; // 0xf4
	uint32_t bReverseSync : 1; // 0xf4
	uint32_t bShowTimeLineSlider : 1; // 0xf4
	uint32_t bLoopCameraAnim : 1; // 0xf4
	uint32_t bRandomizeCameraAnimLoopStartTime : 1; // 0xf4
	uint32_t bEditorOnlyAddRefPoseToAdditiveAnimation : 1; // 0xf4
	uint32_t bCheckForFinishAnimEarly : 1; // 0xf4
	uint32_t bBlendingOut : 1; // 0xf4
	float CurrentTime; // 0xf8
	float PreviousTime; // 0xfc
	float EndTime; // 0x100
	ObjectProperty AnimSeq; // 0x104
	int32_t AnimLinkupIndex; // 0x10c
	float NotifyWeightThreshold; // 0x110
	FName SynchGroupName; // 0x114
	float SynchPosOffset; // 0x11c
	ObjectProperty CameraAnim; // 0x120
	ObjectProperty ActiveCameraAnimInstance; // 0x128
	float CameraAnimScale; // 0x130
	float CameraAnimPlayRate; // 0x134
	float CameraAnimBlendInTime; // 0x138
	float CameraAnimBlendOutTime; // 0x13c
	ERootBoneAxis RootBoneOption[0x3]; // 0x140
	ERootRotationOption RootRotationOption[0x3]; // 0x143
	TArray<ObjectProperty> MetaDataSkelControlList; // 0x148
};

struct UCombatAnim_TurnInPlace : UAnimNodeBlend {
	uint32_t bInitialized : 1; // 0x110
	uint32_t bDelayBlendOutToPlayAnim : 1; // 0x110
	uint32_t bPlayingTurnTransition : 1; // 0x110
	uint32_t bNoTransitionForInstantTurn : 1; // 0x110
	uint32_t PawnJustSeen : 1; // 0x110
	uint32_t PawnNotSeen : 1; // 0x110
	uint32_t bDoingInstantTurn : 1; // 0x110
	int32_t LastPawnYaw; // 0x114
	float PawnRotationRate; // 0x118
	int32_t YawOffset; // 0x11c
	ObjectProperty CombatPawnOwner; // 0x120
	ObjectProperty CachedBaseCombatPawn; // 0x128
	ObjectProperty CachedBase; // 0x130
	TArray<FRotTransitionInfo> RotTransitions; // 0x138
	float TransitionBlendInTime; // 0x148
	float TransitionBlendOutTime; // 0x14c
	int32_t CurrentTransitionIndex; // 0x150
	float TransitionThresholdAngle; // 0x154
	TArray<ObjectProperty> PlayerNodes; // 0x158
	TArray<ObjectProperty> BlendNodes; // 0x168
	TArray<FName> BlendNodesNameList; // 0x178
	float BlendNodesBlendInTime; // 0x188
	float BlendNodesBlendOutTime; // 0x18c
};

struct UGripBTTree : UGripBTPriority {
	TArray<ObjectProperty> AllTreeNodes; // 0xbc
	uint32_t bBeingEdited : 1; // 0xcc
};

struct ACombatFrontEndPC : ACombatPlayerControllerBase {
	ObjectProperty MyComBatHUD; // 0x908
	ObjectProperty TableDepot; // 0x910
	uint32_t bShopZoom : 1; // 0x918
	uint32_t bInvenZoom : 1; // 0x918
	uint32_t bCameraZoom : 1; // 0x918
	uint32_t bNeedOverridePostProcess : 1; // 0x918
	TArray<ObjectProperty> StartPosition; // 0x91c
	FString PawnDisplayPositionName; // 0x92c
	FString PawnShopDisplayPositionName; // 0x93c
	FString PawnRandomBoxShopDisplayPositionName; // 0x94c
	ObjectProperty FEPlayerActor; // 0x95c
	TArray<FInputExpireTimeInfo> InputExpireTime; // 0x964
	float DisconnectMatchServerTime; // 0x974
	TArray<FFrontEndCameraActorInfo> FrontEndCameraActorInfos; // 0x978
	int32_t CameraZoomState; // 0x988
	float LastMouseScrollTime; // 0x98c
	FPostProcessSettings CameraOverridePostProcess; // 0x990
	FName ZoomInCameraLocationActorName; // 0xaf4
	FName ZoomOutCameraLocationActorName; // 0xafc
	ObjectProperty ZoomInCameraLocationActor; // 0xb04
	ObjectProperty ZoomOutCameraLocationActor; // 0xb0c
	FName ZoomInShopCameraLocationActorName; // 0xb14
	FName ZoomOutShopCameraLocationActorName; // 0xb1c
	FName ChannelCameraLocationActorName; // 0xb24
	ObjectProperty ZoomInShopCameraLocationActor; // 0xb2c
	ObjectProperty ZoomOutShopCameraLocationActor; // 0xb34
	ObjectProperty ChannelCameraLocationActor; // 0xb3c
	FName ZoomInRandomBoxShopCameraLocationActorName; // 0xb44
	ObjectProperty ZoomInRandomBoxShopCameraLocationActor; // 0xb4c
	float AccumDeltaTime; // 0xb54
	float MouseWheelDeltaTime; // 0xb58
	float LerpAmount; // 0xb5c
	int32_t TutorialModeIndex; // 0xb60
	int32_t TutorialMapIndex; // 0xb64
};

struct AAISwitchablePylon : APylon {
	uint32_t bOpen : 1; // 0x454
};

struct AGameCrowdInteractionPoint : AActor {
	uint32_t bIsEnabled : 1; // 0x244
	ComponentProperty CylinderComponent; // 0x248
};

struct UOnlineRecentPlayersList : UObject {
	TArray<FUniqueNetId> RecentPlayers; // 0x60
	TArray<FRecentParty> RecentParties; // 0x70
	FRecentParty LastParty; // 0x80
	int32_t MaxRecentPlayers; // 0x98
	int32_t MaxRecentParties; // 0x9c
	int32_t RecentPlayersAddIndex; // 0xa0
	int32_t RecentPartiesAddIndex; // 0xa4
	TArray<FCurrentPlayerMet> CurrentPlayers; // 0xa8
};

struct UTimeDilationAnimInst : UObject {
	ObjectProperty TimeDilationAnim; // 0x60
	ObjectProperty InterpGroupInst; // 0x68
	float CurTime; // 0x70
	uint32_t bLooping : 1; // 0x74
	uint32_t bFinished : 1; // 0x74
	float PlayRate; // 0x78
	float RemainingTime; // 0x7c
	ObjectProperty FloatTrack; // 0x80
	ObjectProperty FloatInst; // 0x88
};

struct UMcpServerTimeManager : UMcpServerTimeBase {
	FString TimeStampUrl; // 0x98
	FString LastTimeStamp; // 0xa8
	ObjectProperty HTTPRequestServerTime; // 0xb8
};

struct UInterpTrackInstSkelControlStrength : UInterpTrackInst {
	uint32_t bSavedControlledByAnimMetaData : 1; // 0x60
};

struct UCombatSEIMovie : UCombatTeamGameMovie {
	ObjectProperty OccupiedAreaContainer; // 0xad0
	int32_t OccupiedAreaCount; // 0xad8
};

struct UCombatAnimBlendBaseByZoom : UCombatAnimBlendBase {
	ObjectProperty Weapon; // 0x144
};

struct UParticleSystem : UObject {
	FVector Origin; // 0x60
	FRotator RotOrigin; // 0x6c
	int32_t Prioty; // 0x78
	EParticleSystemUpdateMode SystemUpdateMode; // 0x7c
	ParticleSystemLODMethod LODMethod; // 0x7d
	EParticleSystemOcclusionBoundsMethod OcclusionBoundsMethod; // 0x7e
	ESceneDepthPriorityGroup OverrideDPG; // 0x7f
	float UpdateTime_FPS; // 0x80
	float UpdateTime_Delta; // 0x84
	float WarmupTime; // 0x88
	float WarmupTickRate; // 0x8c
	TArray<ObjectProperty> Emitters; // 0x90
	ComponentProperty PreviewComponent; // 0xa0
	uint32_t bLit : 1; // 0xa8
	uint32_t bOrientZAxisTowardCamera : 1; // 0xa8
	uint32_t UpdateFixedLOD : 1; // 0xa8
	uint32_t bRegenerateLODDuplicate : 1; // 0xa8
	uint32_t bUseFixedRelativeBoundingBox : 1; // 0xa8
	uint32_t bShouldResetPeakCounts : 1; // 0xa8
	uint32_t bHasPhysics : 1; // 0xa8
	uint32_t bUseRealtimeThumbnail : 1; // 0xa8
	uint32_t ThumbnailImageOutOfDate : 1; // 0xa8
	uint32_t bSkipSpawnCountCheck : 1; // 0xa8
	uint32_t bUseDelayRange : 1; // 0xa8
	ObjectProperty CurveEdSetup; // 0xac
	float LODDistanceCheckTime; // 0xb4
	TArray<float> LODDistances; // 0xb8
	TArray<FParticleSystemLOD> LODSettings; // 0xc8
	FBox FixedRelativeBoundingBox; // 0xd8
	float SecondsBeforeInactive; // 0xf4
	float Delay; // 0xf8
	float DelayLow; // 0xfc
	FVector MacroUVPosition; // 0x100
	float MacroUVRadius; // 0x10c
	FBox CustomOcclusionBounds; // 0x110
	TArray<FLODSoloTrack> SoloTracking; // 0x12c
};

struct UMaterialExpressionTerrainLayerSwitch : UMaterialExpression {
	FPointer InstanceOverride; // 0xb0
	FExpressionInput LayerUsed; // 0xb8
	FExpressionInput LayerNotUsed; // 0xec
	FName ParameterName; // 0x120
	uint32_t PreviewUsed : 1; // 0x128
	FGuid ExpressionGUID; // 0x12c
};

struct USeqAct_ControlGameMovie : USeqAct_Latent {
	FString MovieName; // 0x120
	int32_t StartOfRenderingMovieFrame; // 0x130
	int32_t EndOfRenderingMovieFrame; // 0x134
};

struct URB_BodyInstance : UObject {
	ComponentProperty OwnerComponent; // 0x60
	int32_t BodyIndex; // 0x68
	FVector Velocity; // 0x6c
	FVector PreviousVelocity; // 0x78
	int32_t SceneIndex; // 0x84
	FPointer BodyData; // 0x88
	FPointer BoneSpring; // 0x90
	FPointer BoneSpringKinActor; // 0x98
	uint32_t bEnableBoneSpringLinear : 1; // 0xa0
	uint32_t bEnableBoneSpringAngular : 1; // 0xa0
	uint32_t bDisableOnOverextension : 1; // 0xa0
	uint32_t bNotifyOwnerOnOverextension : 1; // 0xa0
	uint32_t bTeleportOnOverextension : 1; // 0xa0
	uint32_t bUseKinActorForBoneSpring : 1; // 0xa0
	uint32_t bMakeSpringToBaseCollisionComponent : 1; // 0xa0
	uint32_t bOnlyCollideWithPawns : 1; // 0xa0
	uint32_t bEnableCollisionResponse : 1; // 0xa0
	uint32_t bPushBody : 1; // 0xa0
	uint32_t bForceUnfixed : 1; // 0xa0
	uint32_t bInstanceAlwaysFullAnimWeight : 1; // 0xa0
	uint32_t SuppressPopup : 1; // 0xa0
	float BoneLinearSpring; // 0xa4
	float BoneLinearDamping; // 0xa8
	float BoneAngularSpring; // 0xac
	float BoneAngularDamping; // 0xb0
	float OverextensionThreshold; // 0xb4
	float CustomGravityFactor; // 0xb8
	float LastEffectPlayedTime; // 0xbc
	ObjectProperty PhysMaterialOverride; // 0xc0
	float ContactReportForceThreshold; // 0xc8
	float InstanceMassScale; // 0xcc
	float InstanceDampingScale; // 0xd0
};

struct UCombatFrontEnd_AwaitList : UCombatFrontEnd_Object {
	int32_t ShowType; // 0xd0
	int32_t ShowPageNum; // 0xd4
	int32_t TotalPage; // 0xd8
	int32_t TitleId; // 0xdc
	int32_t L_NoUserID; // 0xe0
	int32_t M_NoUserID; // 0xe4
	int32_t RegisterID; // 0xe8
	int32_t UnRegisterID; // 0xec
	FAwaitListPopUpItem AwaitListPopUpInfo[0x4]; // 0xf0
	char OptionType; // 0x110
	TArray<int32_t> Invite_UserID_List; // 0x114
};

struct UParticleModuleLocationPrimitiveSphere_Seeded : UParticleModuleLocationPrimitiveSphere {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xd8
};

struct USeqEvent_AnalogInput : USequenceEvent {
	uint32_t bTrapInput : 1; // 0x128
	int32_t AllowedPlayerIndex; // 0x12c
	TArray<FName> InputNames; // 0x130
};

struct USeqAct_SetPhysics : USequenceAction {
	EPhysics newPhysics; // 0x108
};

struct USeqAct_AddFloat : USeqAct_SetSequenceVariable {
	float ValueA; // 0x108
	float ValueB; // 0x10c
	float FloatResult; // 0x110
	int32_t IntResult; // 0x114
};

struct UGameFixedCamera : UGameCameraBase {
	float DefaultFOV; // 0x6c
};

struct UTerrainMaterial : UObject {
	FMatrix LocalToMapping; // 0x60
	ETerrainMappingType MappingType; // 0xa0
	float MappingScale; // 0xa4
	float MappingRotation; // 0xa8
	float MappingPanU; // 0xac
	float MappingPanV; // 0xb0
	ObjectProperty Material; // 0xb4
	ObjectProperty DisplacementMap; // 0xbc
	float DisplacementScale; // 0xc4
};

struct UDistributionVectorUniform : UDistributionVector {
	FVector Max; // 0x7c
	FVector Min; // 0x88
	uint32_t bLockAxes : 1; // 0x94
	uint32_t bUseExtremes : 1; // 0x94
	EDistributionVectorLockFlags LockedAxes; // 0x98
	EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x99
};

struct UMobileMenuObjectProxy : UMobileMenuObject {
	DelegateProperty __OnTouchEvent__Delegate; // 0xdc
	DelegateProperty __OnRenderObject__Delegate; // 0xec
};

struct USoundNodeEnveloper : USoundNode {
	float LoopStart; // 0x74
	float LoopEnd; // 0x78
	float DurationAfterLoop; // 0x7c
	int32_t LoopCount; // 0x80
	uint32_t bLoopIndefinitely : 1; // 0x84
	uint32_t bLoop : 1; // 0x84
	ComponentProperty VolumeInterpCurve; // 0x88
	ComponentProperty PitchInterpCurve; // 0x90
};

struct UMaterialExpressionConstant3Vector : UMaterialExpression {
	float R; // 0xb0
	float G; // 0xb4
	float B; // 0xb8
};

struct UCombatAnimBlendByDamageType : UAnimNodeBlendList {
	ObjectProperty Owner; // 0x120
};

struct UCombatAnim_TurnInPlace_Rotator : UAnimNodeBlendBase {
	ObjectProperty CombatPawnOwner; // 0x100
	ObjectProperty TurnInPlaceNode; // 0x108
};

struct UMaterialExpressionTextureObject : UMaterialExpression {
	ObjectProperty Texture; // 0xb0
};

struct ACombatSEIModeTeamInfo : ACBTeamInfo {
	uint32_t bFirstOccupation : 1; // 0x2e0
};

struct USoundNodeAmbientNonLoop : USoundNodeAmbient {
	float DelayMin; // 0xb0
	float DelayMax; // 0xb4
	FRawDistributionFloat DelayTime; // 0xb8
};

struct UMaterialExpressionIf : UMaterialExpression {
	FExpressionInput A; // 0xb0
	FExpressionInput B; // 0xe4
	FExpressionInput AGreaterThanB; // 0x118
	FExpressionInput AEqualsB; // 0x14c
	FExpressionInput ALessThanB; // 0x180
};

struct UCombatDataTableRefNation : UCombatDataTableType {
	FString CodeName; // 0x6c
	int32_t Order; // 0x7c
	int32_t LauncherStringID; // 0x80
	int32_t RegionID; // 0x84
	int32_t DefaultServiceRegionID; // 0x88
	int32_t DefaultPing; // 0x8c
};

struct ARB_CylindricalForceActor : ARigidBodyBase {
	ComponentProperty RenderComponent; // 0x244
	float RadialStrength; // 0x24c
	float RotationalStrength; // 0x250
	float LiftStrength; // 0x254
	float LiftFalloffHeight; // 0x258
	float EscapeVelocity; // 0x25c
	float ForceRadius; // 0x260
	float ForceTopRadius; // 0x264
	float ForceHeight; // 0x268
	float HeightOffset; // 0x26c
	uint32_t bForceActive : 1; // 0x270
	uint32_t bForceApplyToCloth : 1; // 0x270
	uint32_t bForceApplyToFluid : 1; // 0x270
	uint32_t bForceApplyToRigidBodies : 1; // 0x270
	uint32_t bForceApplyToProjectiles : 1; // 0x270
	FRBCollisionChannelContainer CollideWithChannels; // 0x274
};

struct UDrawCylinderComponent : UPrimitiveComponent {
	FColor CylinderColor; // 0x250
	ObjectProperty CylinderMaterial; // 0x254
	float CylinderRadius; // 0x25c
	float CylinderTopRadius; // 0x260
	float CylinderHeight; // 0x264
	float CylinderHeightOffset; // 0x268
	int32_t CylinderSides; // 0x26c
	uint32_t bDrawWireCylinder : 1; // 0x270
	uint32_t bDrawLitCylinder : 1; // 0x270
	uint32_t bDrawOnlyIfSelected : 1; // 0x270
};

struct ARB_ForceFieldExcludeVolume : AVolume {
	int32_t ForceFieldChannel; // 0x280
	int32_t SceneIndex; // 0x284
};

struct UCCSBTShootFromCover : UGripBTNode {
	int32_t FireBurstPerShot; // 0xbc
	float DelayBetweenBursts; // 0xc0
};

struct USystem : USubsystem {
	int32_t StaleCacheDays; // 0x68
	int32_t MaxStaleCacheSize; // 0x6c
	int32_t MaxOverallCacheSize; // 0x70
	int32_t PackageSizeSoftLimit; // 0x74
	float AsyncIOBandwidthLimit; // 0x78
	FString SavePath; // 0x7c
	FString CachePath; // 0x8c
	FString CacheExt; // 0x9c
	TArray<FString> Paths; // 0xac
	TArray<FString> SeekFreePCPaths; // 0xbc
	TArray<FString> ScriptPaths; // 0xcc
	TArray<FString> FRScriptPaths; // 0xdc
	TArray<FString> CutdownPaths; // 0xec
	TArray<FName> Suppress; // 0xfc
	TArray<FString> Extensions; // 0x10c
	TArray<FString> SeekFreePCExtensions; // 0x11c
	TArray<FString> LocalizationPaths; // 0x12c
	FString TextureFileCacheExtension; // 0x13c
	TArray<FString> KorScriptPaths; // 0x14c
	TArray<FString> ForceServerSideOnlyPaths; // 0x15c
};

struct AGameCrowdBehaviorPoint : AGameCrowdInteractionPoint {
	float RadiusOfBehaviorEvent; // 0x250
	float DurationOfBehaviorEvent; // 0x254
	ECrowdBehaviorEvent EventType; // 0x258
	uint32_t bRequireLOS : 1; // 0x25c
	ObjectProperty Initiator; // 0x260
};

struct UCylinderComponent : UPrimitiveComponent {
	float CollisionHeight; // 0x250
	float CollisionRadius; // 0x254
	FColor CylinderColor; // 0x258
	uint32_t bDrawBoundingBox : 1; // 0x25c
	uint32_t bDrawNonColliding : 1; // 0x25c
	uint32_t bAlwaysRenderIfSelected : 1; // 0x25c
};

struct UMaterialExpressionConstantBiasScale : UMaterialExpression {
	FExpressionInput Input; // 0xb0
	float Bias; // 0xe4
	float Scale; // 0xe8
};

struct UGameStatsAggregator : UGameplayEventsHandler {
	ObjectProperty GameState; // 0x88
	TArray<FAggregateEventMapping> AggregatesList; // 0x90
	FMap_Mirror AggregateEventsMapping; // 0xa0
	TArray<FGameplayEventMetaData> AggregateEvents; // 0xe8
	TArray<int32_t> AggregatesFound; // 0xf8
	FGameEvents AllGameEvents; // 0x108
	TArray<FTeamEvents> AllTeamEvents; // 0x150
	TArray<FPlayerEvents> AllPlayerEvents; // 0x160
	FWeaponEvents AllWeaponEvents; // 0x170
	FProjectileEvents AllProjectileEvents; // 0x1c8
	FPawnEvents AllPawnEvents; // 0x220
	FDamageEvents AllDamageEvents; // 0x278
};

struct UGripActionNode_SelectEnemy : UCombatAIActionNodeBase {
	EAITargetSelectType AITargetSelectType; // 0xf4
	uint32_t bDistanceCheck : 1; // 0xf8
	uint32_t bVisibleCheck : 1; // 0xf8
	uint32_t bReachableCheck : 1; // 0xf8
	FSDistanceCheck DistanceCheckInfo; // 0xfc
	FSVsibleCheck VisibleCheckInfo; // 0x108
	FSReachableCheck ReachableCheckInfo; // 0x10c
};

struct ULightmassPrimitiveSettingsObject : UObject {
	FLightmassPrimitiveSettings LightmassSettings; // 0x60
};

struct UGripBTCooldown : UGripBTNode {
	float MinCooldown; // 0xbc
	float MaxCooldown; // 0xc0
};

struct UDownloadableContentEnumerator : UObject {
	TArray<FOnlineContent> DLCBundles; // 0x60
	FString DLCRootDir; // 0x70
	TArray<DelegateProperty> FindDLCDelegates; // 0x80
	DelegateProperty __OnFindDLCComplete__Delegate; // 0x90
};

struct UParticleModuleColorScaleOverDensity : UParticleModuleColorBase {
	FRawDistributionVector ColorScaleOverDensity; // 0x68
	FRawDistributionFloat AlphaScaleOverDensity; // 0x8c
};

struct UAudioComponent : UActorComponent {
	ObjectProperty SoundCue; // 0x88
	ObjectProperty CueFirstNode; // 0x90
	TArray<FAudioComponentParam> InstanceParameters; // 0x98
	uint32_t bUseOwnerLocation : 1; // 0xa8
	uint32_t bAutoPlay : 1; // 0xa8
	uint32_t bAutoDestroy : 1; // 0xa8
	uint32_t bStopWhenOwnerDestroyed : 1; // 0xa8
	uint32_t bShouldRemainActiveIfDropped : 1; // 0xa8
	uint32_t bWasOccluded : 1; // 0xa8
	uint32_t bSuppressSubtitles : 1; // 0xa8
	uint32_t bWasPlaying : 1; // 0xa8
	uint32_t bAllowSpatialization : 1; // 0xa8
	uint32_t bFinished : 1; // 0xa8
	uint32_t bApplyRadioFilter : 1; // 0xa8
	uint32_t bRadioFilterSelected : 1; // 0xa8
	uint32_t bPreviewComponent : 1; // 0xa8
	uint32_t bIgnoreForFlushing : 1; // 0xa8
	float StereoBleed; // 0xac
	float LFEBleed; // 0xb0
	uint32_t bEQFilterApplied : 1; // 0xb4
	uint32_t bAlwaysPlay : 1; // 0xb4
	uint32_t bIsUISound : 1; // 0xb4
	uint32_t bIsMusic : 1; // 0xb4
	uint32_t bReverb : 1; // 0xb4
	uint32_t bCenterChannelOnly : 1; // 0xb4
	TArray<FPointer> WaveInstances; // 0xb8
	TArray<char> SoundNodeData; // 0xc8
	TMap<None, None> SoundNodeOffsetMap; // 0xd8
	FMultiMap_Mirror SoundNodeResetWaveMap; // 0x120
	FPointer Listener; // 0x168
	float PlaybackTime; // 0x170
	ObjectProperty PortalVolume; // 0x174
	FVector Location; // 0x17c
	FVector ComponentLocation; // 0x188
	ObjectProperty LastOwner; // 0x194
	float SubtitlePriority; // 0x19c
	float FadeInStartTime; // 0x1a0
	float FadeInStopTime; // 0x1a4
	float FadeInTargetVolume; // 0x1a8
	float FadeOutStartTime; // 0x1ac
	float FadeOutStopTime; // 0x1b0
	float FadeOutTargetVolume; // 0x1b4
	float AdjustVolumeStartTime; // 0x1b8
	float AdjustVolumeStopTime; // 0x1bc
	float AdjustVolumeTargetVolume; // 0x1c0
	float CurrAdjustVolumeTargetVolume; // 0x1c4
	ObjectProperty CurrentNotifyBufferFinishedHook; // 0x1c8
	FVector CurrentLocation; // 0x1d0
	FVector CurrentVelocity; // 0x1dc
	float CurrentVolume; // 0x1e8
	float CurrentPitch; // 0x1ec
	float CurrentHighFrequencyGain; // 0x1f0
	int32_t CurrentUseSpatialization; // 0x1f4
	int32_t CurrentNotifyOnLoop; // 0x1f8
	float OmniRadius; // 0x1fc
	float CurrentVolumeMultiplier; // 0x200
	float CurrentPitchMultiplier; // 0x204
	float CurrentHighFrequencyGainMultiplier; // 0x208
	float CurrentVoiceCenterChannelVolume; // 0x20c
	float CurrentRadioFilterVolume; // 0x210
	float CurrentRadioFilterVolumeThreshold; // 0x214
	FDouble LastUpdateTime; // 0x218
	float SourceInteriorVolume; // 0x220
	float SourceInteriorLPF; // 0x224
	float CurrentInteriorVolume; // 0x228
	float CurrentInteriorLPF; // 0x22c
	FVector LastLocation; // 0x230
	FInteriorSettings LastInteriorSettings; // 0x23c
	int32_t LastReverbVolumeIndex; // 0x260
	float VolumeMultiplier; // 0x264
	float PitchMultiplier; // 0x268
	float HighFrequencyGainMultiplier; // 0x26c
	float OcclusionCheckInterval; // 0x270
	float LastOcclusionCheckTime; // 0x274
	ComponentProperty PreviewSoundRadius; // 0x278
	DelegateProperty __OnAudioFinished__Delegate; // 0x280
	DelegateProperty __OnQueueSubtitles__Delegate; // 0x290
};

struct UCombatFrontEnd_Base : UGFxObject {
	ObjectProperty Owner; // 0xa0
	uint32_t bNeedInit : 1; // 0xa8
	FString ShowAction; // 0xac
	FString HideAction; // 0xbc
};

struct UCombatHUD_SystemCounter : UCombatCommon_SystemCounter {
	ObjectProperty UIDataStore_HUD; // 0xbc
	int32_t MyUserID; // 0xc4
};

struct UPath_WithinDistanceEnvelope : UPathConstraint {
	float MaxDistance; // 0x6c
	float MinDistance; // 0x70
	uint32_t bSoft : 1; // 0x74
	uint32_t bOnlyThrowOutNodesThatLeaveEnvelope : 1; // 0x74
	float SoftStartPenalty; // 0x78
	FVector EnvelopeTestPoint; // 0x7c
};

struct URB_ConstraintSetup : UObject {
	FName JointName; // 0x60
	FName ConstraintBone1; // 0x68
	FName ConstraintBone2; // 0x70
	FVector Pos1; // 0x78
	FVector PriAxis1; // 0x84
	FVector SecAxis1; // 0x90
	FVector Pos2; // 0x9c
	FVector PriAxis2; // 0xa8
	FVector SecAxis2; // 0xb4
	FVector PulleyPivot1; // 0xc0
	FVector PulleyPivot2; // 0xcc
	uint32_t bEnableProjection : 1; // 0xd8
	uint32_t bLinearLimitSoft : 1; // 0xd8
	uint32_t bLinearBreakable : 1; // 0xd8
	uint32_t bSwingLimited : 1; // 0xd8
	uint32_t bTwistLimited : 1; // 0xd8
	uint32_t bSwingLimitSoft : 1; // 0xd8
	uint32_t bTwistLimitSoft : 1; // 0xd8
	uint32_t bAngularBreakable : 1; // 0xd8
	uint32_t bIsPulley : 1; // 0xd8
	uint32_t bMaintainMinDistance : 1; // 0xd8
	FLinearDOFSetup LinearXSetup; // 0xdc
	FLinearDOFSetup LinearYSetup; // 0xe4
	FLinearDOFSetup LinearZSetup; // 0xec
	float LinearLimitStiffness; // 0xf4
	float LinearLimitDamping; // 0xf8
	float LinearBreakThreshold; // 0xfc
	float Swing1LimitAngle; // 0x100
	float Swing2LimitAngle; // 0x104
	float TwistLimitAngle; // 0x108
	float SwingLimitStiffness; // 0x10c
	float SwingLimitDamping; // 0x110
	float TwistLimitStiffness; // 0x114
	float TwistLimitDamping; // 0x118
	float AngularBreakThreshold; // 0x11c
	float PulleyRatio; // 0x120
};

struct UCombatDataTableRefMailForm : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString CodeName; // 0x70
	int32_t WriterStringID; // 0x80
	int32_t TitleStringID; // 0x84
	int32_t DescStringID; // 0x88
};

struct ACombatAIPawn_TDMBase : ACombatGuy_NPC {
	ObjectProperty AI_TDMBase; // 0x11f0
	ObjectProperty AIGame_TDMBase; // 0x11f8
	UCombatInstanceItem* BotArmorClass; // 0x1200
	uint32_t bIsAIFemale : 1; // 0x1208
};

struct UOnlineNewsInterfaceMcp : UMCPBase {
	TArray<FNewsCacheEntry> NewsItems; // 0x80
	TArray<DelegateProperty> ReadNewsDelegates; // 0x90
	uint32_t bNeedsTicking : 1; // 0xa0
	DelegateProperty __OnReadNewsCompleted__Delegate; // 0xa4
};

struct UCCSBTIdle : UGripBTNode {
	ECCSAlertnessState Alertness; // 0xbc
};

struct UFogVolumeConstantDensityComponent : UFogVolumeDensityComponent {
	float Density; // 0xd4
};

struct UMultiCueSplineAudioComponent : USplineAudioComponent {
	TArray<FMultiCueSplineSoundSlot> SoundSlots; // 0x2b8
	int32_t CurrentSlotIndex; // 0x2c8
};

struct UCombatHUD_BlockAndReport : UCombatHUDEntity_Base {
	FString ImageReportURL; // 0xc0
	TArray<FBlockAndReportLabelSettingInfo> BlockAndReportLabelSettingInfos; // 0xd0
	TArray<FBlockAndReportLabelSettingInfo> BlockAndReportRadioButtonInfos; // 0xe0
	TArray<FReportPlayerInfo> ReportReceiptList; // 0xf0
	int32_t ReportPlayerID; // 0x100
};

struct UGripBTRandom : UGripBTNode {
	uint32_t RunAll : 1; // 0xbc
};

struct USkeletalMesh : UObject {
	FBoxSphereBounds Bounds; // 0x60
	TArray<ObjectProperty> Materials; // 0x7c
	TArray<FMaterialSet> MaterialSetList; // 0x8c
	TArray<ObjectProperty> ClothingAssets; // 0x9c
	TArray<FApexClothingAssetInfo> ClothingLodMap; // 0xac
	FVector Origin; // 0xbc
	FRotator RotOrigin; // 0xc8
	TArray<int32_t> RefSkeleton; // 0xd4
	int32_t SkeletalDepth; // 0xe4
	TMap<None, None> NameIndexMap; // 0xe8
	FIndirectArray_Mirror LODModels; // 0x130
	FPointer SourceData; // 0x140
	TArray<FBoneAtom> RefBasesInvMatrix; // 0x148
	TArray<FBoneMirrorInfo> SkelMirrorTable; // 0x158
	EAxis SkelMirrorAxis; // 0x168
	EAxis SkelMirrorFlipAxis; // 0x169
	TArray<ObjectProperty> Sockets; // 0x16c
	TArray<FString> BoneBreakNames; // 0x17c
	TArray<BoneBreakOption> BoneBreakOptions; // 0x18c
	TArray<FSkeletalMeshLODInfo> LODInfo; // 0x19c
	TArray<FSkeletalMeshOptimizationSettings> OptimizationSettings; // 0x1ac
	TArray<FName> PerPolyCollisionBones; // 0x1bc
	TArray<FName> AddToParentPerPolyCollisionBone; // 0x1cc
	TArray<int32_t> PerPolyBoneKDOPs; // 0x1dc
	uint32_t bPerPolyUseSoftWeighting : 1; // 0x1ec
	uint32_t bUseSimpleLineCollision : 1; // 0x1ec
	uint32_t bUseSimpleBoxCollision : 1; // 0x1ec
	uint32_t bForceCPUSkinning : 1; // 0x1ec
	uint32_t bUseFullPrecisionUVs : 1; // 0x1ec
	uint32_t bHasBeenSimplified : 1; // 0x1ec
	ObjectProperty FaceFXAsset; // 0x1f0
	int32_t LODBiasPC; // 0x1f8
	int32_t LODBiasPS3; // 0x1fc
	int32_t LODBiasXbox360; // 0x200
	TArray<FPointer> ClothMesh; // 0x204
	TArray<float> ClothMeshScale; // 0x214
	TArray<int32_t> ClothToGraphicsVertMap; // 0x224
	TArray<float> ClothMovementScale; // 0x234
	ClothMovementScaleGen ClothMovementScaleGenMode; // 0x244
	float ClothToAnimMeshMaxDist; // 0x248
	uint32_t bLimitClothToAnimMesh : 1; // 0x24c
	TArray<int32_t> ClothWeldingMap; // 0x250
	int32_t ClothWeldingDomain; // 0x260
	TArray<int32_t> ClothWeldedIndices; // 0x264
	uint32_t bForceNoWelding : 1; // 0x274
	int32_t NumFreeClothVerts; // 0x278
	TArray<int32_t> ClothIndexBuffer; // 0x27c
	TArray<FName> ClothBones; // 0x28c
	int32_t ClothHierarchyLevels; // 0x29c
	uint32_t bEnableClothBendConstraints : 1; // 0x2a0
	uint32_t bEnableClothDamping : 1; // 0x2a0
	uint32_t bUseClothCOMDamping : 1; // 0x2a0
	float ClothStretchStiffness; // 0x2a4
	float ClothBendStiffness; // 0x2a8
	float ClothDensity; // 0x2ac
	float ClothThickness; // 0x2b0
	float ClothDamping; // 0x2b4
	int32_t ClothIterations; // 0x2b8
	int32_t ClothHierarchicalIterations; // 0x2bc
	float ClothFriction; // 0x2c0
	float ClothRelativeGridSpacing; // 0x2c4
	float ClothPressure; // 0x2c8
	float ClothCollisionResponseCoefficient; // 0x2cc
	float ClothAttachmentResponseCoefficient; // 0x2d0
	float ClothAttachmentTearFactor; // 0x2d4
	float ClothSleepLinearVelocity; // 0x2d8
	float HardStretchLimitFactor; // 0x2dc
	uint32_t bHardStretchLimit : 1; // 0x2e0
	uint32_t bEnableClothOrthoBendConstraints : 1; // 0x2e0
	uint32_t bEnableClothSelfCollision : 1; // 0x2e0
	uint32_t bEnableClothPressure : 1; // 0x2e0
	uint32_t bEnableClothTwoWayCollision : 1; // 0x2e0
	TArray<FClothSpecialBoneInfo> ClothSpecialBones; // 0x2e4
	uint32_t bEnableClothLineChecks : 1; // 0x2f4
	uint32_t bClothMetal : 1; // 0x2f4
	float ClothMetalImpulseThreshold; // 0x2f8
	float ClothMetalPenetrationDepth; // 0x2fc
	float ClothMetalMaxDeformationDistance; // 0x300
	uint32_t bEnableClothTearing : 1; // 0x304
	float ClothTearFactor; // 0x308
	int32_t ClothTearReserve; // 0x30c
	uint32_t bEnableValidBounds : 1; // 0x310
	FVector ValidBoundsMin; // 0x314
	FVector ValidBoundsMax; // 0x320
	FMap_Mirror ClothTornTriMap; // 0x32c
	TArray<int32_t> SoftBodySurfaceToGraphicsVertMap; // 0x374
	TArray<int32_t> SoftBodySurfaceIndices; // 0x384
	TArray<FVector> SoftBodyTetraVertsUnscaled; // 0x394
	TArray<int32_t> SoftBodyTetraIndices; // 0x3a4
	TArray<FSoftBodyTetraLink> SoftBodyTetraLinks; // 0x3b4
	TArray<FPointer> CachedSoftBodyMeshes; // 0x3c4
	TArray<float> CachedSoftBodyMeshScales; // 0x3d4
	TArray<FName> SoftBodyBones; // 0x3e4
	TArray<FSoftBodySpecialBoneInfo> SoftBodySpecialBones; // 0x3f4
	float SoftBodyVolumeStiffness; // 0x404
	float SoftBodyStretchingStiffness; // 0x408
	float SoftBodyDensity; // 0x40c
	float SoftBodyParticleRadius; // 0x410
	float SoftBodyDamping; // 0x414
	int32_t SoftBodySolverIterations; // 0x418
	float SoftBodyFriction; // 0x41c
	float SoftBodyRelativeGridSpacing; // 0x420
	float SoftBodySleepLinearVelocity; // 0x424
	uint32_t bEnableSoftBodySelfCollision : 1; // 0x428
	float SoftBodyAttachmentResponse; // 0x42c
	float SoftBodyCollisionResponse; // 0x430
	float SoftBodyDetailLevel; // 0x434
	int32_t SoftBodySubdivisionLevel; // 0x438
	uint32_t bSoftBodyIsoSurface : 1; // 0x43c
	uint32_t bEnableSoftBodyDamping : 1; // 0x43c
	uint32_t bUseSoftBodyCOMDamping : 1; // 0x43c
	float SoftBodyAttachmentThreshold; // 0x440
	uint32_t bEnableSoftBodyTwoWayCollision : 1; // 0x444
	float SoftBodyAttachmentTearFactor; // 0x448
	uint32_t bEnableSoftBodyLineChecks : 1; // 0x44c
	uint32_t bHasVertexColors : 1; // 0x44c
	TArray<char> GraphicsIndexIsCloth; // 0x450
	TArray<float> CachedStreamingTextureFactors; // 0x460
	float StreamingDistanceMultiplier; // 0x470
	int32_t ReleaseResourcesFence; // 0x474
	FQWord SkelMeshRUID; // 0x478
	int32_t OldMinDesiredLODLevel; // 0x480
	uint32_t bUseClothingAssetMaterial : 1; // 0x484
};

struct APotentialClimbWatcher : AInfo {
	ObjectProperty OwnerPawn; // 0x244
};

struct UMaterialExpressionOneMinus : UMaterialExpression {
	FExpressionInput Input; // 0xb0
};

struct USeqAct_SwitchWeapon : USequenceAction {
	int32_t WeaponNumber; // 0x108
};

struct ACombatDemolitionGame : ACombatPVPGame {
	ObjectProperty PlantedBomb; // 0x788
};

struct UGameUISceneClient : UUISceneClient {
	float LatestDeltaTime; // 0x11c
	FDouble DoubleClickStartTime; // 0x120
	FIntPoint DoubleClickStartPosition; // 0x128
	FMap_Mirror InitialPressedKeys; // 0x130
	uint32_t bUpdateInputProcessingStatus : 1; // 0x178
	uint32_t bUpdateSceneViewportSizes : 1; // 0x178
	uint32_t bEnableDebugInput : 1; // 0x178
	uint32_t bRenderDebugInfo : 1; // 0x178
	uint32_t bCaptureUnprocessedInput : 1; // 0x178
	TArray<FName> NavAliases; // 0x17c
	TArray<FName> AxisInputKeys; // 0x18c
};

struct UMaterialExpressionSquareRoot : UMaterialExpression {
	FExpressionInput Input; // 0xb0
};

struct UCombatWeaponRISBase_modifiedIronSight : UCombatWeaponRISBase_IronSight {
	uint32_t IronSight : 1; // 0xd08
};

struct UCombatDataTableRefShop : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString CodeName; // 0x70
	int32_t ShopNameID; // 0x80
};

struct USettings : UObject {
	TArray<FLocalizedStringSetting> LocalizedSettings; // 0x60
	TArray<FSettingsProperty> Properties; // 0x70
	TArray<FLocalizedStringSettingMetaData> LocalizedSettingsMappings; // 0x80
	TArray<FSettingsPropertyPropertyMetaData> PropertyMappings; // 0x90
};

struct USkyLightComponent : ULightComponent {
	int32_t SelectLight; // 0x1a8
	float LowLowerBrightness; // 0x1ac
	FColor LowLowerColor; // 0x1b0
	float LowBrightness; // 0x1b4
	FColor LowColor; // 0x1b8
	float HighLowerBrightness; // 0x1bc
	FColor HighLowerColor; // 0x1c0
	float HighBrightness; // 0x1c4
	FColor HighColor; // 0x1c8
	float LowerBrightness; // 0x1cc
	FColor LowerColor; // 0x1d0
};

struct UPath_MinDistBetweenSpecsOfType : UPathConstraint {
	float MinDistBetweenSpecTypes; // 0x6c
	FVector InitLocation; // 0x70
	UReachSpec* ReachSpecClass; // 0x7c
};

struct ACombatAIModePRI : ACombatPlayerReplicationInfo {
	int32_t LifeCount; // 0x520
	int32_t MaxLifeCount; // 0x524
	uint32_t bGiveRewardLife : 1; // 0x528
	int32_t ConsecutiveCombo; // 0x52c
	int32_t CurrentStep; // 0x530
};

struct UGameplayEventsHandler : UObject {
	TArray<int32_t> EventIDFilter; // 0x60
	TArray<FGameStatGroup> GroupFilter; // 0x70
	ObjectProperty Reader; // 0x80
};

struct UCombatRadialBlurComponent : URadialBlurComponent {
	float LifeSpan; // 0xf8
	FVector Translation; // 0xfc
	uint32_t AbsoluteTranslation : 1; // 0x108
	float CurrentLifeSpan; // 0x10c
	float InitialBlurScale; // 0x110
	DelegateProperty __OnBlurFinished__Delegate; // 0x114
};

struct UOnlineSubsystemPC : UOnlineSubsystemCommonImpl {
	FString LoggedInPlayerName; // 0x1e0
	FUniqueNetId LoggedInPlayerId; // 0x1f0
	TArray<FPointer> AsyncTasks; // 0x1f8
	FString ProfileDataDirectory; // 0x208
	FString ProfileDataExtension; // 0x218
	TArray<DelegateProperty> ReadProfileSettingsDelegates; // 0x228
	TArray<DelegateProperty> WriteProfileSettingsDelegates; // 0x238
	ObjectProperty CachedProfile; // 0x248
	TArray<DelegateProperty> SpeechRecognitionCompleteDelegates; // 0x250
	TArray<DelegateProperty> ReadFriendsDelegates; // 0x260
	TArray<DelegateProperty> FriendsChangeDelegates; // 0x270
	TArray<DelegateProperty> MutingChangeDelegates; // 0x280
	DelegateProperty __OnLoginChange__Delegate; // 0x290
	DelegateProperty __OnLoginCancelled__Delegate; // 0x2a0
	DelegateProperty __OnMutingChange__Delegate; // 0x2b0
	DelegateProperty __OnReadTitleFileComplete__Delegate; // 0x2c0
	DelegateProperty __OnPlayerTalkingStateChange__Delegate; // 0x2d0
	DelegateProperty __OnFriendsChange__Delegate; // 0x2e0
	DelegateProperty __OnLoginFailed__Delegate; // 0x2f0
	DelegateProperty __OnLogoutCompleted__Delegate; // 0x300
	DelegateProperty __OnReadProfileSettingsComplete__Delegate; // 0x310
	DelegateProperty __OnWriteProfileSettingsComplete__Delegate; // 0x320
	DelegateProperty __OnLoginStatusChange__Delegate; // 0x330
	DelegateProperty __OnReadFriendsComplete__Delegate; // 0x340
	DelegateProperty __OnRecognitionComplete__Delegate; // 0x350
	DelegateProperty __OnReadOnlineStatsComplete__Delegate; // 0x360
	DelegateProperty __OnFlushOnlineStatsComplete__Delegate; // 0x370
	DelegateProperty __OnRegisterHostStatGuidComplete__Delegate; // 0x380
	DelegateProperty __OnLinkStatusChange__Delegate; // 0x390
	DelegateProperty __OnExternalUIChange__Delegate; // 0x3a0
	DelegateProperty __OnControllerChange__Delegate; // 0x3b0
	DelegateProperty __OnConnectionStatusChange__Delegate; // 0x3c0
	DelegateProperty __OnStorageDeviceChange__Delegate; // 0x3d0
	DelegateProperty __OnKeyboardInputComplete__Delegate; // 0x3e0
	DelegateProperty __OnWritePlayerStorageComplete__Delegate; // 0x3f0
	DelegateProperty __OnReadPlayerStorageForNetIdComplete__Delegate; // 0x400
	DelegateProperty __OnReadPlayerStorageComplete__Delegate; // 0x410
	DelegateProperty __OnAddFriendByNameComplete__Delegate; // 0x420
	DelegateProperty __OnFriendInviteReceived__Delegate; // 0x430
	DelegateProperty __OnReceivedGameInvite__Delegate; // 0x440
	DelegateProperty __OnJoinFriendGameComplete__Delegate; // 0x450
	DelegateProperty __OnFriendMessageReceived__Delegate; // 0x460
	DelegateProperty __OnUnlockAchievementComplete__Delegate; // 0x470
	DelegateProperty __OnReadAchievementsComplete__Delegate; // 0x480
};

struct ACombatSquadAI : ACombatTeamOwnedInfo {
	ObjectProperty RouteObjective; // 0x24c
	TArray<ObjectProperty> ObjectiveRouteCache; // 0x254
	TArray<ObjectProperty> PreviousObjectiveRouteCache; // 0x264
	ObjectProperty PendingSquadRouteMaker; // 0x274
	int32_t SquadRouteIteration; // 0x27c
	TArray<FAlternateRoute> SquadRoutes; // 0x280
	int32_t MaxSquadRoutes; // 0x290
};

struct AHUD : AActor {
	FColor WhiteColor; // 0x244
	FColor GreenColor; // 0x248
	FColor RedColor; // 0x24c
	ObjectProperty PlayerOwner; // 0x250
	uint32_t bLostFocusPaused : 1; // 0x258
	uint32_t bShowHUD : 1; // 0x258
	uint32_t bShowScores : 1; // 0x258
	uint32_t bShowDebugInfo : 1; // 0x258
	uint32_t bShowBadConnectionAlert : 1; // 0x258
	uint32_t bShowDirectorInfoDebug : 1; // 0x258
	uint32_t bShowDirectorInfoHUD : 1; // 0x258
	uint32_t bMessageBeep : 1; // 0x258
	uint32_t bShowOverlays : 1; // 0x258
	float HudCanvasScale; // 0x25c
	TArray<ObjectProperty> PostRenderedActors; // 0x260
	TArray<FConsoleMessage> ConsoleMessages; // 0x270
	FColor ConsoleColor; // 0x280
	int32_t ConsoleMessageCount; // 0x284
	int32_t ConsoleFontSize; // 0x288
	int32_t MessageFontOffset; // 0x28c
	int32_t MaxHUDAreaMessageCount; // 0x290
	FHudLocalizedMessage LocalMessages[0x8]; // 0x294
	float ConsoleMessagePosX; // 0x514
	float ConsoleMessagePosY; // 0x518
	ObjectProperty Canvas; // 0x51c
	float LastHUDRenderTime; // 0x524
	float RenderDelta; // 0x528
	float SizeX; // 0x52c
	float SizeY; // 0x530
	float CenterX; // 0x534
	float CenterY; // 0x538
	float RatioX; // 0x53c
	float RatioY; // 0x540
	TArray<FName> DebugDisplay; // 0x544
	TArray<FKismetDrawTextInfo> KismetTextInfo; // 0x554
};

struct UMaterialExpressionDesaturation : UMaterialExpression {
	FExpressionInput Input; // 0xb0
	FExpressionInput Percent; // 0xe4
	FLinearColor LuminanceFactors; // 0x118
};

struct UCombatDataTableRefShopItem : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString CodeName; // 0x70
	int32_t CategoryIndex; // 0x80
	int32_t Service; // 0x84
	int32_t LimitBuyType; // 0x88
	int32_t LimitBuyCount; // 0x8c
	int32_t OpenPublisher; // 0x90
	uint32_t ShowEndTime : 1; // 0x94
	FTimeData SellStart; // 0x98
	FTimeData SellEnd; // 0xa0
	FTimeData RentalEndDate; // 0xa8
	int32_t RentalID; // 0xb0
	int32_t SpecialGoods; // 0xb4
	int32_t SpecialGoodsString; // 0xb8
	int32_t DisplaynameID; // 0xbc
	FString Thumbnail; // 0xc0
	int32_t BackImage; // 0xd0
	int32_t ImageID; // 0xd4
	int32_t EffectDescID; // 0xd8
	int32_t ItemDescID; // 0xdc
	int32_t ItemTag; // 0xe0
	int32_t GetType; // 0xe4
	int32_t LobbyImage; // 0xe8
	FString GroupName; // 0xec
	int32_t GroupIdx; // 0xfc
	FString ShopShortcut; // 0x100
	int32_t ReturnUserType; // 0x110
};

struct UCombatFrontEnd_RandomBox : UCombatFrontEnd_Scene {
	eFrontEndScene FromOpenedScene; // 0xd0
	RandomBoxActionState ActionState; // 0xd1
	uint32_t bContinueOpening : 1; // 0xd4
	uint32_t bHasCardCover : 1; // 0xd4
	uint32_t RemainReOpenCountX10 : 1; // 0xd4
	uint32_t bReOpenProcessing : 1; // 0xd4
	int32_t RemainReOpenCount; // 0xd8
	float ReOpenDelay; // 0xdc
};

struct UMcpMessageManager : UMcpMessageBase {
	FPointer VfTable_FTickableObject; // 0xec
	FString CreateMessageUrl; // 0xf4
	FString DeleteMessageUrl; // 0x104
	FString QueryMessagesUrl; // 0x114
	FString QueryMessageContentsUrl; // 0x124
	FString DeleteAllMessagesUrl; // 0x134
	TArray<FMcpCompressMessageRequest> CompressMessageRequests; // 0x144
	TArray<FMcpUncompressMessageRequest> UncompressMessageRequests; // 0x154
};

struct ACoverGroup : AInfo {
	TArray<FActorReference> CoverLinkRefs; // 0x244
	float AutoSelectRadius; // 0x254
	float AutoSelectHeight; // 0x258
};

struct ACombatStaticMeshReplicationInfo : AReplicationInfo {
	char MeshStateList[0x100]; // 0x244
	ObjectProperty MeshActorList[0x100]; // 0x344
	int32_t SMRIIndex; // 0xb44
};

struct UGripBTSetState : UGripBTNode {
	FString StateName; // 0xbc
};

struct UCombatDataTableRefMoneyDisplay : UCombatDataTableType {
	uint32_t bDisplay : 1; // 0x6c
	uint32_t Toggle_Renew : 1; // 0x6c
	uint32_t Toggle_Charge : 1; // 0x6c
	FString CodeName; // 0x70
	int32_t MoneyType; // 0x80
	int32_t ImageID_Icon; // 0x84
	int32_t ImageID_Lobby; // 0x88
	int32_t Display_Name; // 0x8c
	int32_t Display_Tooltip; // 0x90
	int32_t Renew_Tooltip; // 0x94
	int32_t Charge_Tooltip; // 0x98
};

struct UAmbientOcclusionEffect : UPostProcessEffect {
	FLinearColor OcclusionColor; // 0x88
	float OcclusionPower; // 0x98
	float OcclusionScale; // 0x9c
	float OcclusionBias; // 0xa0
	float MinOcclusion; // 0xa4
	uint32_t SSAO2 : 1; // 0xa8
	uint32_t bAngleBasedSSAO : 1; // 0xa8
	float OcclusionRadius; // 0xac
	float OcclusionAttenuation; // 0xb0
	EAmbientOcclusionQuality OcclusionQuality; // 0xb4
	float OcclusionFadeoutMinDistance; // 0xb8
	float OcclusionFadeoutMaxDistance; // 0xbc
	float HaloDistanceThreshold; // 0xc0
	float HaloDistanceScale; // 0xc4
	float HaloOcclusion; // 0xc8
	float EdgeDistanceThreshold; // 0xcc
	float EdgeDistanceScale; // 0xd0
	float FilterDistanceScale; // 0xd4
	int32_t FilterSize; // 0xd8
	float HistoryConvergenceTime; // 0xdc
	float HistoryWeightConvergenceTime; // 0xe0
};

struct AImageReflectionShadowPlane : AActor {
	uint32_t bEnabled : 1; // 0x244
	ComponentProperty ReflectionShadowComponent; // 0x248
};

struct UParticleLODLevel : UObject {
	int32_t Level; // 0x60
	uint32_t bEnabled : 1; // 0x64
	uint32_t ConvertedModules : 1; // 0x64
	ObjectProperty RequiredModule; // 0x68
	TArray<ObjectProperty> Modules; // 0x70
	ObjectProperty TypeDataModule; // 0x80
	ObjectProperty SpawnModule; // 0x88
	ObjectProperty EventGenerator; // 0x90
	TArray<ObjectProperty> SpawningModules; // 0x98
	TArray<ObjectProperty> SpawnModules; // 0xa8
	TArray<ObjectProperty> UpdateModules; // 0xb8
	TArray<ObjectProperty> OrbitModules; // 0xc8
	TArray<ObjectProperty> EventReceiverModules; // 0xd8
	int32_t PeakActiveParticles; // 0xe8
};

struct AHeightFog : AInfo {
	ComponentProperty Component; // 0x244
	uint32_t bEnabled : 1; // 0x24c
};

struct UCombatDataRefDecorationDecal : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString DecalTexture; // 0x70
};

struct USeqEvent_InGameClientEvent : USequenceEvent {
	FName EventName; // 0x128
	Team TeamIndex; // 0x130
};

struct UParticleModuleLifetime_Seeded : UParticleModuleLifetime {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x8c
};

struct UUIMapSummary : UUIResourceDataProvider {
	FString MapName; // 0x94
	FString ScreenshotPathName; // 0xa4
	FString DisplayName; // 0xb4
	FString Description; // 0xc4
};

struct UCCSBTSelectTarget : UGripBTNode {
	ECCSSelectTargetAlgorithm TargetSelectionAlgorithm; // 0xbc
};

struct USeqAct_SetDamageInstigator : USequenceAction {
	ObjectProperty DamageInstigator; // 0x108
};

struct UCombatFrontEnd_Inventory : UCombatFrontEnd_Maintenance {
	FInvenTabStruct MainTabInfo[0x4]; // 0xe4
	FInvenTabStruct SubTabAllInfo; // 0x144
	FInvenTabStruct SubTabWeaponInfo[0x6]; // 0x15c
	FInvenTabStruct SubTabCharInfo[0x2]; // 0x1ec
	FInvenTabStruct SubTabItemInfo[0x5]; // 0x21c
	FInfoTabStruct ItemTabInfo[0x3]; // 0x294
	int32_t SelectedMainTab; // 0x2c4
	int32_t SelectedSubTab; // 0x2c8
	int32_t SelectedInfoTabType; // 0x2cc
	int32_t SelectedInfoTab; // 0x2d0
	TArray<FS_BaseItemInfo> PresetItemlist; // 0x2d4
	uint32_t bInvenOpen : 1; // 0x2e4
	uint32_t bWaitforChangeStateActiveItem : 1; // 0x2e4
	uint32_t bSelectAscending : 1; // 0x2e4
	int32_t CurrentPresetTab; // 0x2e8
	int32_t CurrentPresetSlotIndex; // 0x2ec
	int32_t CurrentSelectedItemListSlotIndex; // 0x2f0
	int32_t CurrentClothItemRefIndex; // 0x2f4
	ObjectProperty ItemPresetClass; // 0x2f8
	ObjectProperty ItemListClass; // 0x300
	ObjectProperty ItemDetailinfoClass; // 0x308
	int32_t PendingConsumeItemRefIndex; // 0x310
	FString CurrentSearchtext; // 0x314
	TArray<int32_t> PendingDecompoisitionSlot; // 0x324
	TArray<FInvenItemInfo> InvenItemList; // 0x334
	int32_t SelectSortType; // 0x344
};

struct ANavigationPoint : AActor {
	uint32_t bEndPoint : 1; // 0x244
	uint32_t bTransientEndPoint : 1; // 0x244
	uint32_t bHideEditorPaths : 1; // 0x244
	uint32_t bCanReach : 1; // 0x244
	uint32_t bBlocked : 1; // 0x244
	uint32_t bOneWayPath : 1; // 0x244
	uint32_t bNeverUseStrafing : 1; // 0x244
	uint32_t bAlwaysUseStrafing : 1; // 0x244
	uint32_t bForceNoStrafing : 1; // 0x244
	uint32_t bAutoBuilt : 1; // 0x244
	uint32_t bSpecialMove : 1; // 0x244
	uint32_t bNoAutoConnect : 1; // 0x244
	uint32_t bNotBased : 1; // 0x244
	uint32_t bPathsChanged : 1; // 0x244
	uint32_t bDestinationOnly : 1; // 0x244
	uint32_t bSourceOnly : 1; // 0x244
	uint32_t bSpecialForced : 1; // 0x244
	uint32_t bMustBeReachable : 1; // 0x244
	uint32_t bBlockable : 1; // 0x244
	uint32_t bFlyingPreferred : 1; // 0x244
	uint32_t bMayCausePain : 1; // 0x244
	uint32_t bAlreadyVisited : 1; // 0x244
	uint32_t bVehicleDestination : 1; // 0x244
	uint32_t bMakeSourceOnly : 1; // 0x244
	uint32_t bMustTouchToReach : 1; // 0x244
	uint32_t bCanWalkOnToReach : 1; // 0x244
	uint32_t bBuildLongPaths : 1; // 0x244
	uint32_t bBlockedForVehicles : 1; // 0x244
	uint32_t bPreferredVehiclePath : 1; // 0x244
	uint32_t bHasCrossLevelPaths : 1; // 0x244
	uint32_t bShouldSaveForCheckpoint : 1; // 0x244
	FNavigationOctreeObject NavOctreeObject; // 0x248
	TArray<ObjectProperty> PathList; // 0x284
	TArray<FActorReference> Volumes; // 0x294
	int32_t visitedWeight; // 0x2a4
	int32_t bestPathWeight; // 0x2a8
	ObjectProperty nextNavigationPoint; // 0x2ac
	ObjectProperty nextOrdered; // 0x2b4
	ObjectProperty prevOrdered; // 0x2bc
	ObjectProperty previousPath; // 0x2c4
	int32_t Cost; // 0x2cc
	int32_t ExtraCost; // 0x2d0
	int32_t TransientCost; // 0x2d4
	int32_t FearCost; // 0x2d8
	TArray<FDebugNavCost> CostArray; // 0x2dc
	ObjectProperty InventoryCache; // 0x2ec
	float InventoryDist; // 0x2f4
	float LastDetourWeight; // 0x2f8
	ComponentProperty CylinderComponent; // 0x2fc
	FCylinder MaxPathSize; // 0x304
	FGuid NavGuid; // 0x30c
	ComponentProperty GoodSprite; // 0x31c
	ComponentProperty BadSprite; // 0x324
	int32_t NetworkID; // 0x32c
	ObjectProperty AnchoredPawn; // 0x330
	float LastAnchoredPawnTime; // 0x338
};

struct UMcpServerTimeBase : UMcpServiceBase {
	FString McpServerTimeClassName; // 0x78
	DelegateProperty __OnQueryServerTimeComplete__Delegate; // 0x88
};

struct UStaticMeshComponent : UMeshComponent {
	ComponentProperty PreviewLightRadius; // 0x260
	int32_t ForcedLodModel; // 0x268
	int32_t PreviousLODLevel; // 0x26c
	ObjectProperty StaticMesh; // 0x270
	FColor WireframeColor; // 0x278
	uint32_t bIgnoreInstanceForTextureStreaming : 1; // 0x27c
	uint32_t bOverrideLightMapResolution : 1; // 0x27c
	uint32_t bOverrideLightMapRes : 1; // 0x27c
	int32_t OverriddenLightMapResolution; // 0x280
	int32_t OverriddenLightMapRes; // 0x284
	float OverriddenLODMaxRange; // 0x288
	float StreamingDistanceMultiplier; // 0x28c
	int32_t SubDivisionStepSize; // 0x290
	uint32_t bUseSubDivisions : 1; // 0x294
	uint32_t bForceStaticDecals : 1; // 0x294
	uint32_t bCanHighlightSelectedSections : 1; // 0x294
	uint32_t bUseSimpleLightmapModifications : 1; // 0x294
	ELightmapModificationFunction SimpleLightmapModificationFunction; // 0x298
	uint32_t bNeverBecomeDynamic : 1; // 0x29c
	TArray<FGuid> IrrelevantLights; // 0x2a0
	TArray<FStaticMeshComponentLODInfo> LODData; // 0x2b0
	TArray<FAttachment> Attachments; // 0x2c0
	int32_t VertexPositionVersionNumber; // 0x2d0
	FLightmassPrimitiveSettings LightmassSettings; // 0x2d4
	char MaterialSet; // 0x2f0
};

struct USeqAct_HeadTrackingControl : USequenceAction {
	TArray<FName> TrackControllerName; // 0x108
	float LookAtActorRadius; // 0x118
	uint32_t bDisableBeyondLimit : 1; // 0x11c
	uint32_t bLookAtPawns : 1; // 0x11c
	float MaxLookAtTime; // 0x120
	float MinLookAtTime; // 0x124
	float MaxInterestTime; // 0x128
	TArray<AActor*> ActorClassesToLookAt; // 0x12c
	TArray<FName> TargetBoneNames; // 0x13c
	TArray<ObjectProperty> LookAtTargets; // 0x14c
	TMap<None, None> ActorToComponentMap; // 0x15c
};

struct ULightComponent : UActorComponent {
	FPointer SceneInfo; // 0x88
	FMatrix WorldToLight; // 0x90
	FMatrix LightToWorld; // 0xd0
	FGuid LightGuid; // 0x110
	FGuid LightmapGuid; // 0x120
	float Brightness; // 0x130
	FColor LightColor; // 0x134
	ObjectProperty Function; // 0x138
	uint32_t bEnabled : 1; // 0x140
	uint32_t CastShadows : 1; // 0x140
	uint32_t CastStaticShadows : 1; // 0x140
	uint32_t CastDynamicShadows : 1; // 0x140
	uint32_t bCastCompositeShadow : 1; // 0x140
	uint32_t bAffectCompositeShadowDirection : 1; // 0x140
	uint32_t bNonModulatedSelfShadowing : 1; // 0x140
	uint32_t bSelfShadowOnly : 1; // 0x140
	uint32_t bAllowPreShadow : 1; // 0x140
	uint32_t bForceDynamicLight : 1; // 0x140
	uint32_t UseDirectLightMap : 1; // 0x140
	uint32_t bHasLightEverBeenBuiltIntoLightMap : 1; // 0x140
	uint32_t bCanAffectDynamicPrimitivesOutsideDynamicChannel : 1; // 0x140
	uint32_t bRenderLightShafts : 1; // 0x140
	uint32_t bUseImageReflectionSpecular : 1; // 0x140
	uint32_t bPrecomputedLightingIsValid : 1; // 0x140
	uint32_t bExplicitlyAssignedLight : 1; // 0x140
	uint32_t bAllowCompositingIntoDLE : 1; // 0x140
	ComponentProperty LightEnvironment; // 0x144
	FLightingChannelContainer LightingChannels; // 0x14c
	ELightAffectsClassification LightAffectsClassification; // 0x150
	ELightShadowMode LightShadowMode; // 0x151
	FLinearColor ModShadowColor; // 0x154
	float ModShadowFadeoutTime; // 0x164
	float ModShadowFadeoutExponent; // 0x168
	int32_t LightListIndex; // 0x16c
	EShadowProjectionTechnique ShadowProjectionTechnique; // 0x170
	EShadowFilterQuality ShadowFilterQuality; // 0x171
	int32_t MinShadowResolution; // 0x174
	int32_t MaxShadowResolution; // 0x178
	int32_t ShadowFadeResolution; // 0x17c
	float OcclusionDepthRange; // 0x180
	float BloomScale; // 0x184
	float BloomThreshold; // 0x188
	float BloomScreenBlendThreshold; // 0x18c
	FColor BloomTint; // 0x190
	float RadialBlurPercent; // 0x194
	float OcclusionMaskDarkness; // 0x198
	float ReflectionSpecularBrightness; // 0x19c
	EDetailMode DetailMode; // 0x1a0
	uint32_t Low : 1; // 0x1a4
	uint32_t Medium : 1; // 0x1a4
	uint32_t High : 1; // 0x1a4
};

struct UGripBlackboard : UObject {
	FPointer BB; // 0x60
};

struct UCBUIDataStore_ETC : UUIDataStore_Settings {
	eFrontEndScene InputExpireGoalScene; // 0x98
	TArray<FString> ModeCodenameSetForSingleRoundUI; // 0x9c
	TArray<FString> ModeCodenameSetForMultiRoundUI; // 0xac
	FString LoadingUI_Title; // 0xbc
	FString LoadingUI_DefaultBGImage; // 0xcc
	FString LoadingUI_DefaultBGImagePath; // 0xdc
	FString LoadingUI_DefaultMinimapImage; // 0xec
	FString LoadingUI_DefaultMinimapImagePath; // 0xfc
	FLoadingUIInfo LoadingUIInfos; // 0x10c
	int32_t ClanRankGradePoint; // 0x288
	uint32_t IntrudeState : 1; // 0x28c
};

struct USeqEvent_MobileLook : USeqEvent_MobileZoneBase {
	float Yaw; // 0x138
	float StickStrength; // 0x13c
	FVector RotationVector; // 0x140
};

struct UCombatHUD_IFFContainer : UCombatHUDEntity_Base {
	ObjectProperty AttachLayerMC; // 0xc0
	TArray<FIFFObjectData> IFFs; // 0xc8
	int32_t IFFObjectCreateRange; // 0xd8
};

struct UUIInteraction : UInteraction {
	FPointer VfTable_FExec; // 0xb0
	FPointer VfTable_FGlobalDataStoreClientManager; // 0xb8
	FPointer VfTable_FCallbackEventDevice; // 0xc0
	ObjectProperty UIManager; // 0xc8
	UUIManager* UIManagerClass; // 0xd0
	UGameUISceneClient* SceneClientClass; // 0xd8
	ObjectProperty SceneClient; // 0xe0
	TArray<FName> SupportedDoubleClickKeys; // 0xe8
	ObjectProperty DataStoreManager; // 0xf8
	uint32_t bProcessInput : 1; // 0x100
	float UIJoystickDeadZone; // 0x104
	float UIAxisMultiplier; // 0x108
	float AxisRepeatDelay; // 0x10c
	float MouseButtonRepeatDelay; // 0x110
	float DoubleClickTriggerSeconds; // 0x114
	int32_t DoubleClickPixelTolerance; // 0x118
	FUIKeyRepeatData MouseButtonRepeatInfo; // 0x11c
	TArray<FUIAxisEmulationDefinition> ConfiguredAxisEmulationDefinitions; // 0x12c
	TMap<None, None> AxisEmulationDefinitions; // 0x13c
	FUIAxisEmulationData AxisInputEmulation[0x4]; // 0x184
};

struct AGameCrowdDestinationQueuePoint : AGameCrowdInteractionPoint {
	ObjectProperty NextQueuePosition; // 0x250
	ObjectProperty PreviousQueuePosition; // 0x258
	ObjectProperty QueuedAgent; // 0x260
	ObjectProperty QueueDestination; // 0x268
	uint32_t bClearingQueue : 1; // 0x270
	uint32_t bPendingAdvance : 1; // 0x270
	float AverageReactionTime; // 0x274
	UGameCrowdBehavior_WaitInQueue* QueueBehaviorClass; // 0x278
};

struct UUIDataProvider_OnlinePlayerDataBase : UUIDataProvider {
	int32_t PlayerControllerId; // 0x70
};

struct UUIDataStore_StringAliasMap : UUIDataStore_StringBase {
	TArray<FUIMenuInputMap> MenuInputMapArray; // 0x98
	FMap_Mirror MenuInputSets; // 0xa8
	int32_t PlayerIndex; // 0xf0
};

struct UCCSATBlendListBase : UAnimNodeBlendList {
	float BlendTime; // 0x120
};

struct UInput : UInteraction {
	TArray<FKeyBind> Bindings; // 0xb0
	TArray<FName> PressedKeys; // 0xc0
	int32_t CurrentControllerId; // 0xd0
	EInputEvent CurrentEvent; // 0xd4
	float CurrentDelta; // 0xd8
	float CurrentDeltaTime; // 0xdc
	TMap<None, None> NameToPtr; // 0xe0
	TArray<FPointer> AxisArray; // 0x128
	TArray<ObjectProperty> CachedInputEvents; // 0x138
	TArray<ObjectProperty> CachedAnalogInputEvents; // 0x148
	TArray<ObjectProperty> CachedTouchInputEvents; // 0x158
	ObjectProperty CachedCheckInputEvent; // 0x168
	TArray<FName> CachedIgnoreKeys; // 0x170
	FString EscapeKeyName; // 0x180
	TArray<FTouchTracker> CurrentTouches; // 0x190
};

struct UNavMeshPath_Toward : UNavMeshPathConstraint {
	uint32_t bBiasAgainstHighLevelPath : 1; // 0x78
	float OutOfHighLevelPathBias; // 0x7c
	ObjectProperty GoalActor; // 0x80
	FVector GoalPoint; // 0x88
};

struct ABroadcastHandler : AInfo {
	int32_t SentText; // 0x244
	uint32_t bMuteSpectators : 1; // 0x248
};

struct USpotLightComponent : UPointLightComponent {
	float InnerConeAngle; // 0x240
	float OuterConeAngle; // 0x244
	float LightShaftConeAngle; // 0x248
	ComponentProperty PreviewInnerCone; // 0x24c
	ComponentProperty PreviewOuterCone; // 0x254
	FRotator Rotation; // 0x25c
};

struct ACombatDestroyableActor : AActor {
	int32_t Health; // 0x244
	char TeamIndex; // 0x248
	ComponentProperty Mesh; // 0x24c
};

struct UCombatFrontEnd_Scene : UCombatFrontEnd_Base {
	uint32_t bShowTopBar : 1; // 0xcc
	uint32_t bNeedBGM : 1; // 0xcc
	uint32_t bUseMouse : 1; // 0xcc
	uint32_t bWhiteListCheck : 1; // 0xcc
};

struct UGameEngine : UEngine {
	ObjectProperty GPendingLevel; // 0x9bc
	FString PendingLevelPlayerControllerClassName; // 0x9c4
	FURL LastURL; // 0x9d4
	FURL LastRemoteURL; // 0xa2c
	TArray<FString> ServerActors; // 0xa84
	FString TravelURL; // 0xa94
	char TravelType; // 0xaa4
	uint32_t bWorldWasLoadedThisTick : 1; // 0xaa8
	uint32_t bSystemSettingChangeTiming : 1; // 0xaa8
	uint32_t bCheckForMovieCapture : 1; // 0xaa8
	uint32_t bTriggerPostLoadMap : 1; // 0xaa8
	uint32_t bStartedLoadMapMovie : 1; // 0xaa8
	uint32_t bShouldCommitPendingMapChange : 1; // 0xaa8
	uint32_t bClearAnimSetLinkupCachesOnLoadMap : 1; // 0xaa8
	uint32_t bEnableSecondaryDisplay : 1; // 0xaa8
	uint32_t bEnableSecondaryViewport : 1; // 0xaa8
	ObjectProperty OnlineSubsystem; // 0xaac
	ObjectProperty DLCEnumerator; // 0xab4
	FString DownloadableContentEnumeratorClassName; // 0xabc
	ObjectProperty DLCManager; // 0xacc
	FString DownloadableContentManagerClassName; // 0xad4
	TArray<FName> LevelsToLoadForPendingMapChange; // 0xae4
	TArray<ObjectProperty> LoadedLevelsForPendingMapChange; // 0xaf4
	FString PendingMapChangeFailureDescription; // 0xb04
	float MaxDeltaTime; // 0xb14
	FString SecondaryViewportClientClassName; // 0xb18
	TArray<ObjectProperty> SecondaryViewportClients; // 0xb28
	TArray<FPointer> SecondaryViewportFrames; // 0xb38
	TArray<FLevelStreamingStatus> PendingLevelStreamingStatusUpdates; // 0xb48
	TArray<ObjectProperty> ObjectReferencers; // 0xb58
	TArray<FFullyLoadedPackagesInfo> PackagesToFullyLoad; // 0xb68
	TArray<FNamedNetDriver> NamedNetDrivers; // 0xb78
	TArray<FAnimTag> AnimTags; // 0xb88
};

struct UFracturedStaticMesh : UStaticMesh {
	float CoreMeshScale; // 0x1e8
	uint32_t bSliceUsingCoreCollision : 1; // 0x21c
	ObjectProperty FragmentDestroyEffect; // 0x220
	TArray<ObjectProperty> FragmentDestroyEffects; // 0x228
	float FragmentDestroyEffectScale; // 0x238
	float FragmentHealthScale; // 0x23c
	float FragmentMinHealth; // 0x240
	float FragmentMaxHealth; // 0x244
	uint32_t bUniformFragmentHealth : 1; // 0x248
	float ChunkLinVel; // 0x24c
	float ChunkAngVel; // 0x250
	float ChunkLinHorizontalScale; // 0x254
	float ExplosionVelScale; // 0x258
	uint32_t bCompositeChunksExplodeOnImpact : 1; // 0x25c
	uint32_t bFixIsolatedChunks : 1; // 0x260
	uint32_t bAlwaysBreakOffIsolatedIslands : 1; // 0x264
	uint32_t bSpawnPhysicsChunks : 1; // 0x268
	float ChanceOfPhysicsChunk; // 0x26c
	float ExplosionChanceOfPhysicsChunk; // 0x270
	float NormalPhysicsChunkScaleMin; // 0x274
	float NormalPhysicsChunkScaleMax; // 0x278
	float ExplosionPhysicsChunkScaleMin; // 0x27c
	float ExplosionPhysicsChunkScaleMax; // 0x280
	float MinConnectionSupportArea; // 0x284
	ObjectProperty DynamicOutsideMaterial; // 0x288
	ObjectProperty LoseChunkOutsideMaterial; // 0x290
	int32_t OutsideMaterialIndex; // 0x298
};

struct ACombatPawn_AttackSkillActor : ACombatGuy_NPC {
	ATTCK_SKILL_ACTOR ActorTypeIndex; // 0x11f0
	FString HudIconPath; // 0x11f4
	float Lifetime; // 0x1204
	ObjectProperty Summoner; // 0x1208
	uint32_t Deployed : 1; // 0x1210
	uint32_t SmokingHot : 1; // 0x1210
	FName DeployAnim; // 0x1214
	float DeployTime; // 0x121c
	ComponentProperty IFF_Effect; // 0x1220
	ObjectProperty IFF_FriendTemplate; // 0x1228
	ObjectProperty IFF_FoeTemplate; // 0x1230
	ObjectProperty IFF_CoolingTemplate; // 0x1238
	float SmokePct; // 0x1240
	ComponentProperty DamageEffectPSC; // 0x1244
	ObjectProperty DamageEffectPSCTemplate; // 0x124c
	FName DamageEffectSocketName; // 0x1254
	ObjectProperty DamageSound; // 0x125c
	ObjectProperty ExploEmitter; // 0x1264
	ObjectProperty DeathSound; // 0x126c
};

struct UBookMark2D : UObject {
	float Zoom2D; // 0x60
	FIntPoint Location; // 0x64
};

struct UMaterialExpressionDepthBiasedBlend : UMaterialExpression {
	uint32_t bNormalize : 1; // 0xb0
	float BiasScale; // 0xb4
	FExpressionInput RGB; // 0xb8
	FExpressionInput Alpha; // 0xec
	FExpressionInput Bias; // 0x120
};

struct UDominantDirectionalLightComponent : UDirectionalLightComponent {
	FDominantShadowInfo DominantLightShadowInfo; // 0x1d0
	FArray_Mirror DominantLightShadowMap; // 0x280
};

struct UCombatDataTableRefPublisherWorld : UCombatDataTableType {
	int32_t PublisherID; // 0x6c
	int32_t WorldID; // 0x70
};

struct UParticleModuleMeshRotationRateMultiplyLife : UParticleModuleRotationRateBase {
	FRawDistributionVector LifeMultiplier; // 0x68
};

struct UCombatAICond_TargetExistenceDetail : UCCSBTScriptCondition {
	ETargetType Target; // 0xd4
	BTConditionOperator DistanceOperator; // 0xd5
	uint32_t EnableDistanceCheck : 1; // 0xd8
	uint32_t EnableVisibleCheck : 1; // 0xd8
	uint32_t Visible : 1; // 0xd8
	float Distance; // 0xdc
};

struct UGripCondNode_TargetDirection : UGripConditionNode {
	ECurAITarget CurAITarget; // 0xec
	BTConditionOperator Op; // 0xed
	float dotValue; // 0xf0
};

struct UGripBTEventCondition : UGripBTBooleanCondition {
	EventLifetime Lifetime; // 0xc0
	FString EventType; // 0xc4
};

struct AEmitterPool : AActor {
	ComponentProperty PSCTemplate; // 0x244
	TArray<ComponentProperty> PoolComponents; // 0x24c
	TArray<ComponentProperty> ActiveComponents; // 0x25c
	int32_t MaxActiveEffects; // 0x26c
	uint32_t bLogPoolOverflow : 1; // 0x270
	uint32_t bLogPoolOverflowList : 1; // 0x270
	TArray<FEmitterBaseInfo> RelativePSCs; // 0x274
	float SMC_MIC_ReductionTime; // 0x284
	float SMC_MIC_CurrentReductionTime; // 0x288
	int32_t IdealStaticMeshComponents; // 0x28c
	int32_t IdealMaterialInstanceConstants; // 0x290
	TArray<ComponentProperty> FreeSMComponents; // 0x294
	TArray<ObjectProperty> FreeMatInstConsts; // 0x2a4
};

struct UActorFactoryAI : UActorFactory {
	AAIController* ControllerClass; // 0x9c
	APawn* PawnClass; // 0xa4
	FString PawnName; // 0xac
	uint32_t bGiveDefaultInventory : 1; // 0xbc
	TArray<AInventory*> InventoryList; // 0xc0
	int32_t TeamIndex; // 0xd0
};

struct UActorFactoryCombatWeapAttachMeshActor : UActorFactorySkeletalMesh {
	FString DefaultSkeletalMesh; // 0xb4
};

struct UCombatDataTableRefMode : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString CodeName; // 0x70
	FString DefaultMapCodename; // 0x80
	FString modeType; // 0x90
	int32_t ModeUIType; // 0xa0
	int32_t HUDType; // 0xa4
	int32_t RankSysID; // 0xa8
	int32_t DisplayName; // 0xac
	int32_t DisplayOption; // 0xb0
	int32_t DisplayName_NoHtml; // 0xb4
	FString AiModeMatchRoomThumbnail; // 0xb8
	FString AiModeSocreBoardThumbnail; // 0xc8
	int32_t ImageID; // 0xd8
	int32_t AiModeMatchRoomThumbnailID; // 0xdc
	int32_t AiModeSocreBoardThumbnailID; // 0xe0
	FString MaxUser; // 0xe4
	FString Goal; // 0xf4
	FString Mission; // 0x104
	FString MatchEndScore; // 0x114
	FString PlayTime; // 0x124
	FString ThirdCameraView; // 0x134
	FString FreeCameraView; // 0x144
	FString DeathChat; // 0x154
	FString AllChat; // 0x164
	FString Rush; // 0x174
	FString AutoTeamBalance; // 0x184
	FString LimitLevel; // 0x194
	FString Observer; // 0x1a4
	FString Difficulty; // 0x1b4
	FString HalfChange; // 0x1c4
	char ApplyGearSet; // 0x1d4
	FString AutoTeamChange; // 0x1d8
	FString ApplyClanRecord; // 0x1e8
	FString RequiredClanMember; // 0x1f8
	int32_t Category; // 0x208
	int32_t StartableMinUser; // 0x20c
	int32_t PasswordSet; // 0x210
	int32_t LimitedClanMember; // 0x214
	FString MarkerGroupID; // 0x218
};

struct UCombatDataTableRefFilter : UCombatDataTableType {
	int32_t Index; // 0x6c
	int32_t SceneType; // 0x70
	int32_t MainMenu; // 0x74
	int32_t SubMenu; // 0x78
	int32_t MenuNameID; // 0x7c
	int32_t ItemType[0x3]; // 0x80
};

struct UObjectReferencer : UObject {
	TArray<ObjectProperty> ReferencedObjects; // 0x60
};

struct UMaterialExpressionStaticSwitch : UMaterialExpression {
	uint32_t DefaultValue : 1; // 0xb0
	uint32_t ExtendedCaptionDisplay : 1; // 0xb0
	FExpressionInput A; // 0xb4
	FExpressionInput B; // 0xe8
	FExpressionInput Value; // 0x11c
};

struct UCombatHUD_EvolveSupply : UCombatHUD_GameObject {
	ObjectProperty TargetActor; // 0x1b0
	int32_t TargetIndex; // 0x1b8
	int32_t LastDisplayHealth; // 0x1bc
	MissionActorUIState LastUIState; // 0x1c0
	float WaitActiveTime; // 0x1c4
	float OldWaitActiveTime; // 0x1c8
};

struct AMobileMenuGame : AGameInfo {
	UMobileMenuScene* InitialSceneToDisplayClass; // 0x4c0
};

struct UAnimNodeSlot : UAnimNodeBlendBase {
	uint32_t bIsPlayingCustomAnim : 1; // 0x100
	uint32_t bEarlyAnimEndNotify : 1; // 0x100
	uint32_t bSkipBlendWhenNotRendered : 1; // 0x100
	uint32_t bAdditiveAnimationsOverrideSource : 1; // 0x100
	uint32_t bIsBeingUsedByInterpGroup : 1; // 0x100
	uint32_t bDontAddToAlwaysTickArray : 1; // 0x100
	float PendingBlendOutTime; // 0x104
	int32_t CustomChildIndex; // 0x108
	int32_t TargetChildIndex; // 0x10c
	TArray<float> TargetWeight; // 0x110
	float BlendTimeToGo; // 0x120
};

struct UParticleModuleLocationStaticVertSurface : UParticleModuleLocationBase {
	ELocationStaticVertSurfaceSource SourceType; // 0x68
	FVector UniversalOffset; // 0x6c
	uint32_t bUpdatePositionEachFrame : 1; // 0x78
	uint32_t bOrientMeshEmitters : 1; // 0x78
	uint32_t bEnforceNormalCheck : 1; // 0x78
	FName StaticMeshActorParamName; // 0x7c
	FVector NormalToCompare; // 0x84
	float NormalCheckToleranceDegrees; // 0x90
	float NormalCheckTolerance; // 0x94
	TArray<int32_t> ValidMaterialIndices; // 0x98
};

struct UCombatEvolveGunMovie : UCombatTeamGameMovie {
	ObjectProperty SupplyContainer; // 0xad0
	uint32_t bUpdate : 1; // 0xad8
};

struct UPath_AvoidActor : UPathConstraint {
	ObjectProperty AvoidTarget; // 0x6c
};

struct UCombatDataTableRefHelpDetailInfo : UCombatDataTableType {
	FString CodeName; // 0x6c
	int32_t TabNameID; // 0x7c
	int32_t HighlightTextID; // 0x80
	int32_t DetailInfoTextID; // 0x84
	FString ImageName; // 0x88
	int32_t ImageID; // 0x98
};

struct UCombatFrontEnd_AttendanceEvent : UCombatFrontEnd_Object {
	int32_t CurrentAttendID; // 0xd0
	uint32_t bShow : 1; // 0xd4
};

struct UParticleModuleRotationRate_Seeded : UParticleModuleRotationRate {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x8c
};

struct USeqAct_GetLocationAndRotation : USequenceAction {
	FVector Location; // 0x108
	FVector RotationVector; // 0x114
	FVector Rotation; // 0x120
	FName SocketOrBoneName; // 0x12c
};

struct UCCSAFFireBurst : UGripAFActionHandle {
	ObjectProperty Target; // 0x64
};

struct UInterpGroupInstAI : UInterpGroupInst {
	ObjectProperty AIGroup; // 0x88
	EPhysics SavedPhysics; // 0x90
	uint32_t bSavedNoEncroachCheck : 1; // 0x94
	uint32_t bSavedCollideActors : 1; // 0x94
	uint32_t bSavedBlockActors : 1; // 0x94
	ObjectProperty StageMarkActor; // 0x98
};

struct UCombatDataTableRefPeriodAttend : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString CodeName; // 0x70
	int32_t MaxAttend; // 0x80
	FTimeData ServiceStartTime; // 0x84
	FTimeData ServiceEndTime; // 0x8c
	int32_t Event_UI_Layout; // 0x94
	int32_t EventNameStringID; // 0x98
	int32_t EventTooltipStringID; // 0x9c
};

struct ACBTeamInfo : ATeamInfo {
	TArray<ObjectProperty> TeamMembers; // 0x264
	WordProperty Kills; // 0x274
	WordProperty AssistCount; // 0x276
	WordProperty DeathCount; // 0x278
	char WinRounds; // 0x27a
	char AliveMemberCount; // 0x27b
	char SkillGlobalCooltime[0x10]; // 0x27c
	char RepNotifyActiveSkilltime; // 0x28c
	uint32_t bWasPlayerInRoundStart : 1; // 0x290
	uint32_t bIsActiveSkillCooltime : 1; // 0x290
	uint32_t bActiveTimer : 1; // 0x290
	uint32_t bUseClassSystem : 1; // 0x290
	uint32_t bIsSetGlobalSkill : 1; // 0x290
	WordProperty CurrentMissionCount; // 0x294
	int32_t SkillOwnerplayerID; // 0x298
	WordProperty CurrentSkillGlobalCooltime[0x10]; // 0x29c
	float CoolCheckTime; // 0x2bc
	float MissionScore; // 0x2c0
	int32_t OriginalTeamIndex; // 0x2c4
	ObjectProperty LastUser; // 0x2c8
	int32_t ClanMatch_MainClanID; // 0x2d0
	int32_t ClanMatch_ModeID; // 0x2d4
	ObjectProperty VoteManager; // 0x2d8
};

struct USeqAct_CameraShake : USequenceAction {
	ObjectProperty Shake; // 0x108
	float ShakeScale; // 0x110
	uint32_t bDoControllerVibration : 1; // 0x114
	uint32_t bRadialShake : 1; // 0x114
	uint32_t bOrientTowardRadialEpicenter : 1; // 0x114
	float RadialShake_InnerRadius; // 0x118
	float RadialShake_OuterRadius; // 0x11c
	float RadialShake_Falloff; // 0x120
	ECameraAnimPlaySpace PlaySpace; // 0x124
	ObjectProperty LocationActor; // 0x128
};

struct ACombatDroppedBase : ADroppedPickup {
	ComponentProperty Mesh; // 0x260
	ComponentProperty MyLightEnvironment; // 0x268
	ComponentProperty CylinderComponent; // 0x270
	float PickupableDist; // 0x278
	FRotator DropRotation; // 0x27c
	FRotator LandedRotation; // 0x288
	float TossSpeed; // 0x294
	float TossZ; // 0x298
	float CylinderRadiusOnFalling; // 0x29c
	float CustomGravityScaling; // 0x2a0
	float PickupableDelayTime; // 0x2a4
	FOutlineProperty OutlineProperty; // 0x2a8
	ObjectProperty PickupSound; // 0x2e4
	ObjectProperty EnemyPickupSound; // 0x2ec
	ObjectProperty DroppedSound; // 0x2f4
	float PickupableDistSq; // 0x2fc
	float MeshHeightOffset; // 0x300
	float InitialLifeSpan; // 0x304
	TArray<FName> AdditionalHideBone; // 0x308
	uint32_t bPickupable : 1; // 0x318
	uint32_t bInitDroppedPickupMesh : 1; // 0x318
	uint32_t bPickUpByTouching : 1; // 0x318
	uint32_t bDropSameInventoryGroup : 1; // 0x318
	uint32_t bDestroySameInventoryGroup : 1; // 0x318
	uint32_t bGiveInventory : 1; // 0x318
	char ValidTeamIndex; // 0x31c
};

struct UUICharacterSummary : UUIResourceDataProvider {
	FString ClassPathName; // 0x94
	FString CharacterName; // 0xa4
	FString CharacterBio; // 0xb4
	uint32_t bIsDisabled : 1; // 0xc4
};

struct UCombatLockedPresetScene : UInteraction {
	uint32_t bDisplayLockPreset : 1; // 0xb0
	uint32_t bDisplayPresetSelectWaitingScene : 1; // 0xb0
	uint32_t bSelected : 1; // 0xb0
	uint32_t bForceShowing : 1; // 0xb0
	FKeyBindingInfo LockPresetSceneKeyBindings; // 0xb4
};

struct UHttpResponseWindows : UHttpResponseInterface {
	FPointer Response; // 0x60
	TArray<char> Payload; // 0x68
};

struct UCombatFrontEnd_Repurchase : UCombatFrontEnd_Object {
	uint32_t IsBuyAndEquip : 1; // 0xd0
	uint32_t bInit : 1; // 0xd0
	uint32_t bIsShow : 1; // 0xd0
	int32_t CashUnit; // 0xd4
	int32_t priceID; // 0xd8
	int32_t BuyShopItemID; // 0xdc
	int32_t BuyItemSlotIndex; // 0xe0
	char CurrentPresetTab; // 0xe4
	FString CurrentCodeName; // 0xe8
	TArray<FRepurchaseItem> RepurchaseItemList; // 0xf8
	int32_t CurrentSpendonMoney; // 0x108
	int32_t CurrentSpendonCash; // 0x10c
	int32_t CurrentSpendonMedal; // 0x110
};

struct UCombatDataTableRefCallingCard : UCombatDataTableType {
	int32_t NAME_TEXT; // 0x6c
	int32_t Id; // 0x70
	int32_t ImageID; // 0x74
	FString CCard_AssetName; // 0x78
	FString CodeName; // 0x88
};

struct UCombatDataTableRefARaceLevelUp : UCombatDataTableType {
	int32_t Id; // 0x6c
	int32_t Rank; // 0x70
	int32_t LevelPoint; // 0x74
	FString GroupCodeName; // 0x78
	FString UIItemCodeName; // 0x88
	int32_t ArrivalEquipType; // 0x98
	FString FirstArrivalCodeName; // 0x9c
	FString ScriptFilePri; // 0xac
};

struct UCCSBTCombatTargetExistence : UGripBTBooleanCondition {
	uint32_t CurrentTarget : 1; // 0xc0
	uint32_t ClosestEnemy : 1; // 0xc0
	uint32_t VisibleEnemy : 1; // 0xc0
	uint32_t LowestLKPAgeEnemy : 1; // 0xc0
	uint32_t EnemyAware : 1; // 0xc0
	ETargetCheckMethods CheckMethod; // 0xc4
};

struct UNavMeshGoal_GenericFilterContainer : UNavMeshPathGoalEvaluator {
	TArray<ObjectProperty> GoalFilters; // 0x7c
	FPointer SuccessfulGoal; // 0x8c
	ObjectProperty MyNavigationHandle; // 0x94
	TArray<FVector> SeedLocations; // 0x9c
};

struct UMaterialExpressionDotProduct : UMaterialExpression {
	FExpressionInput A; // 0xb0
	FExpressionInput B; // 0xe4
};

struct UReachSpec : UObject {
	FPointer NavOctreeObject; // 0x60
	int32_t Distance; // 0x68
	FVector Direction; // 0x6c
	ObjectProperty Start; // 0x78
	FActorReference End; // 0x80
	int32_t CollisionRadius; // 0x98
	int32_t CollisionHeight; // 0x9c
	int32_t reachFlags; // 0xa0
	int32_t MaxLandingVelocity; // 0xa4
	char bPruned; // 0xa8
	char PathColorIndex; // 0xa9
	uint32_t bAddToNavigationOctree : 1; // 0xac
	uint32_t bCanCutCorners : 1; // 0xac
	uint32_t bCheckForObstructions : 1; // 0xac
	uint32_t bSkipPrune : 1; // 0xac
	uint32_t bDisabled : 1; // 0xac
	TArray<UReachSpec*> PruneSpecList; // 0xb0
	ObjectProperty BlockedBy; // 0xc0
};

struct UInterpTrackInstParticleReplay : UInterpTrackInst {
	float LastUpdatePosition; // 0x60
};

struct UInterpTrackSkelControlScale : UInterpTrackFloatBase {
	FName SkelControlName; // 0xb8
};

struct UNavMeshPath_WithinDistanceEnvelope : UNavMeshPathConstraint {
	float MaxDistance; // 0x78
	float MinDistance; // 0x7c
	uint32_t bSoft : 1; // 0x80
	uint32_t bOnlyThrowOutNodesThatLeaveEnvelope : 1; // 0x80
	float SoftStartPenalty; // 0x84
	FVector EnvelopeTestPoint; // 0x88
};

struct UCombatHUD_KillMark : UCombatHUDEntity_Base {
	TArray<FKillMarkStringStruct> KMStringList; // 0xc0
	FString ImagePath; // 0xd0
	FString SoundPath; // 0xe0
};

struct USkelControlLookAt : USkelControlBase {
	FVector TargetLocation; // 0xd0
	EBoneControlSpace TargetLocationSpace; // 0xdc
	EAxis LookAtAxis; // 0xdd
	EAxis UpAxis; // 0xde
	EBoneControlSpace AllowRotationSpace; // 0xdf
	FName TargetSpaceBoneName; // 0xe0
	uint32_t bInvertLookAtAxis : 1; // 0xe8
	uint32_t bDefineUpAxis : 1; // 0xe8
	uint32_t bInvertUpAxis : 1; // 0xe8
	uint32_t bUnAffectedByOwnerRotation : 1; // 0xe8
	uint32_t bEnableLimit : 1; // 0xe8
	uint32_t bLimitBasedOnRefPose : 1; // 0xe8
	uint32_t bDisableBeyondLimit : 1; // 0xe8
	uint32_t bNotifyBeyondLimit : 1; // 0xe8
	uint32_t bShowLimit : 1; // 0xe8
	uint32_t bAllowRotationX : 1; // 0xe8
	uint32_t bAllowRotationY : 1; // 0xe8
	uint32_t bAllowRotationZ : 1; // 0xe8
	float TargetLocationInterpSpeed; // 0xec
	FVector DesiredTargetLocation; // 0xf0
	FVector ActorSpaceLookAtTarget; // 0xfc
	float MaxAngle; // 0x108
	float OuterMaxAngle; // 0x10c
	float DeadZoneAngle; // 0x110
	FVector2D RotationAngleRangeX; // 0x114
	FVector2D RotationAngleRangeY; // 0x11c
	FVector2D RotationAngleRangeZ; // 0x124
	FName AllowRotationOtherBoneName; // 0x12c
	float LookAtAlpha; // 0x134
	float LookAtAlphaTarget; // 0x138
	float LookAtAlphaBlendTimeToGo; // 0x13c
	FVector LimitLookDir; // 0x140
	FVector BaseLookDir; // 0x14c
	FVector BaseBonePos; // 0x158
	float LastCalcTime; // 0x164
	int32_t ControlBoneIndex; // 0x168
};

struct UAnimNode : UAnimObject {
	uint32_t bRelevant : 1; // 0x68
	uint32_t bJustBecameRelevant : 1; // 0x68
	uint32_t bTickDuringPausedAnims : 1; // 0x68
	uint32_t bEditorOnly : 1; // 0x68
	uint32_t bDisableCaching : 1; // 0x68
	uint32_t bCallScriptEventOnInit : 1; // 0x68
	uint32_t bCallScriptEventOnBecomeRelevant : 1; // 0x68
	uint32_t bCallScriptEventOnCeaseRelevant : 1; // 0x68
	int32_t NodeTickTag; // 0x6c
	int32_t NodeInitTag; // 0x70
	int32_t NodeEndEventTick; // 0x74
	int32_t TickArrayIndex; // 0x78
	int32_t NodeCachedAtomsTag; // 0x7c
	float NodeTotalWeight; // 0x80
	TArray<ObjectProperty> ParentNodes; // 0x84
	FName NodeName; // 0x94
	TArray<FBoneAtom> CachedBoneAtoms; // 0x9c
	char CachedNumDesiredBones; // 0xac
	FBoneAtom CachedRootMotionDelta; // 0xb0
	int32_t bCachedHasRootMotion; // 0xd0
	TArray<FCurveKey> CachedCurveKeys; // 0xd4
	int32_t SearchTag; // 0xe4
};

struct UCombatHUD_GameObject : UCombatHUDComponent_Base {
	float UI_GO_LOCATOR_LOCATION_Z; // 0xbc
	ObjectProperty PC; // 0xc0
	ObjectProperty GRI; // 0xc8
	FString LastGameObjectIconLabel; // 0xd0
	FString LastGameObjectName; // 0xe0
	FVector LastLocatorUILocation; // 0xf0
	int32_t LastGameObjectDistance; // 0xfc
	int32_t LastLevelObjectTeam; // 0x100
	ObjectProperty ScreenColBox; // 0x104
	float RootMCWidth; // 0x10c
	float RootMCHeight; // 0x110
	ObjectProperty RootMC; // 0x114
	ObjectProperty DistanceTF; // 0x11c
	ObjectProperty NameTF; // 0x124
	ObjectProperty DirectionMC; // 0x12c
	int32_t LastDirection; // 0x134
	uint32_t bIsInFront : 1; // 0x138
	uint32_t bClampedLocation : 1; // 0x138
	uint32_t bDirectionArrowDisplayed : 1; // 0x138
	ObjectProperty AttackMC; // 0x13c
	FVector LocatorCoord; // 0x144
	int32_t LocatorScale; // 0x150
	int32_t LastLocatorScale; // 0x154
	FVector SubjectWorldDrawLocation; // 0x158
	float MinLocatorScale; // 0x164
	float MaxLocatorScale; // 0x168
	float DistanceForMinScale; // 0x16c
	FVector LocatorAreaRatio; // 0x170
	int32_t LastLocatorAlpha; // 0x17c
	float AlphaValue_CrosshairNearArea; // 0x180
	float AlphaValue_CrosshairFarArea; // 0x184
	float RadiusRatio_CrosshairNearArea; // 0x188
	float RadiusRatio_CrosshairFarArea; // 0x18c
	FString RootMCInstanceName; // 0x190
	FString SizeMCInstanceName; // 0x1a0
};

struct UGameThirdPersonCameraMode_Default : UGameThirdPersonCameraMode {
	float WorstLocAimingZOffset; // 0x258
	uint32_t bTemporaryOriginRotInterp : 1; // 0x25c
	float TemporaryOriginRotInterpSpeed; // 0x260
};

struct UCombatDataTableRefShopRotation : UCombatDataTableType {
	FString ItemCodeName; // 0x6c
	int32_t ItemNameID; // 0x7c
	int32_t ItemImageID; // 0x80
	int32_t ItemPriceType; // 0x84
	int32_t ItemPriceValue; // 0x88
	int32_t RotationGroup; // 0x8c
	int32_t Tier; // 0x90
	FTimeData RotationStart; // 0x94
	FTimeData RotationEnd; // 0x9c
};

struct AFracturedStaticMeshActor : AActor {
	int32_t MaxPartsToSpawnAtOnce; // 0x244
	ComponentProperty FracturedStaticMeshComponent; // 0x248
	ComponentProperty SkinnedComponent; // 0x250
	TArray<int32_t> ChunkHealth; // 0x258
	uint32_t bHasShownMissingSoundWarning : 1; // 0x268
	uint32_t bBreakChunksOnActorTouch : 1; // 0x268
	uint32_t bShouldSaveForCheckpoint : 1; // 0x268
	TArray<UDamageType*> FracturedByDamageType; // 0x26c
	float ChunkHealthScale; // 0x27c
	TArray<ObjectProperty> OverrideFragmentDestroyEffects; // 0x280
	float FractureCullMinDistance; // 0x290
	float FractureCullMaxDistance; // 0x294
	TArray<FDeferredPartToSpawn> DeferredPartsToSpawn; // 0x298
	FPhysEffectInfo PartImpactEffect; // 0x2a8
	ObjectProperty ExplosionFractureSound; // 0x2c0
	ObjectProperty SingleChunkFractureSound; // 0x2c8
	ObjectProperty MI_LoseChunkPreviousMaterial; // 0x2d0
};

struct UHeadTrackingComponent : UActorComponent {
	TArray<FName> TrackControllerName; // 0x88
	float LookAtActorRadius; // 0x98
	uint32_t bDisableBeyondLimit : 1; // 0x9c
	float MaxLookAtTime; // 0xa0
	float MinLookAtTime; // 0xa4
	float MaxInterestTime; // 0xa8
	TArray<AActor*> ActorClassesToLookAt; // 0xac
	TArray<FName> TargetBoneNames; // 0xbc
	TMap<None, None> CurrentActorMap; // 0xcc
	ComponentProperty SkeletalMeshComp; // 0x114
	TArray<ObjectProperty> TrackControls; // 0x11c
	FVector RootMeshLocation; // 0x12c
	FRotator RootMeshRotation; // 0x138
};

struct UCombatAIActionNodeBase : UCCSBTScriptBehavior {
	UCombatAIActionBase* AIActionClass; // 0xd4
	ObjectProperty Bot; // 0xdc
	ObjectProperty AIAction; // 0xe4
	ObjectProperty Blackboard; // 0xec
};

struct UCombatDataTableRefSkill : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString CodeName; // 0x70
	FString GroupCodeName; // 0x80
	FString LicenseCodeName; // 0x90
	int32_t ActiveUser; // 0xa0
	int32_t Skilltype; // 0xa4
	int32_t SkillCategory; // 0xa8
	int32_t Cost; // 0xac
	int32_t Count; // 0xb0
	char CoolTimeType; // 0xb4
	int32_t CoolTime; // 0xb8
	FString ScriptFile; // 0xbc
	uint32_t HoldSkill : 1; // 0xcc
	int32_t ItemName; // 0xd0
	FString HUDIcon; // 0xd4
	int32_t Description; // 0xe4
	int32_t ImageID; // 0xe8
};

struct ACamera : AActor {
	ObjectProperty PCOwner; // 0x244
	FName CameraStyle; // 0x24c
	float DefaultFOV; // 0x254
	uint32_t bLockedFOV : 1; // 0x258
	uint32_t bConstrainAspectRatio : 1; // 0x258
	uint32_t bEnableFading : 1; // 0x258
	uint32_t bFadeAudio : 1; // 0x258
	uint32_t bForceDisableTemporalAA : 1; // 0x258
	uint32_t bEnableColorScaling : 1; // 0x258
	uint32_t bEnableColorScaleInterp : 1; // 0x258
	uint32_t bUseClientSideCameraUpdates : 1; // 0x258
	uint32_t bDebugClientSideCamera : 1; // 0x258
	uint32_t bShouldSendClientSideCameraUpdate : 1; // 0x258
	float LockedFOV; // 0x25c
	float ConstrainedAspectRatio; // 0x260
	float DefaultAspectRatio; // 0x264
	float OffAxisYawAngle; // 0x268
	float OffAxisPitchAngle; // 0x26c
	FColor FadeColor; // 0x270
	float FadeAmount; // 0x274
	float CamOverridePostProcessAlpha; // 0x278
	FPostProcessSettings CamPostProcessSettings; // 0x27c
	FRenderingPerformanceOverrides RenderingOverrides; // 0x3e0
	FVector ColorScale; // 0x3e4
	FVector DesiredColorScale; // 0x3f0
	FVector OriginalColorScale; // 0x3fc
	float ColorScaleInterpDuration; // 0x408
	float ColorScaleInterpStartTime; // 0x40c
	FTCameraCache CameraCache; // 0x410
	FTCameraCache LastFrameCameraCache; // 0x430
	FTViewTarget ViewTarget; // 0x450
	FTViewTarget PendingViewTarget; // 0x488
	float BlendTimeToGo; // 0x4c0
	FViewTargetTransitionParams BlendParams; // 0x4c4
	TArray<ObjectProperty> ModifierList; // 0x4d4
	float FreeCamDistance; // 0x4e4
	FVector FreeCamOffset; // 0x4e8
	FVector2D FadeAlpha; // 0x4f4
	float FadeTime; // 0x4fc
	float FadeTimeRemaining; // 0x500
	float FadeDelay; // 0x504
	TArray<ObjectProperty> CameraLensEffects; // 0x508
	ObjectProperty CameraShakeCamMod; // 0x518
	UCameraModifier_CameraShake* CameraShakeCamModClass; // 0x520
	ObjectProperty AnimInstPool[0x8]; // 0x528
	TArray<ObjectProperty> ActiveAnims; // 0x568
	TArray<ObjectProperty> FreeAnims; // 0x578
	ObjectProperty AnimCameraActor; // 0x588
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x590
};

struct USeqEvent_MobileZoneBase : USeqEvent_MobileBase {
	FString TargetZoneName; // 0x128
};

struct ACombatWeapon : AWeapon {
	FPointer VfTable_IInterface_CombatWeaponType; // 0x3a4
	ObjectProperty SlideNode; // 0x3ac
	uint32_t bPlayAmmoChat : 1; // 0x3b4
	uint32_t bPlayFireSound : 1; // 0x3b4
	uint32_t bPlayingFiringSound : 1; // 0x3b4
	uint32_t bAutofire : 1; // 0x3b4
	uint32_t bNotAutofireReFireCheck : 1; // 0x3b4
	uint32_t bAutoSwitchEmptyWeapon : 1; // 0x3b4
	uint32_t bAutoDestroyEmptyWeapon : 1; // 0x3b4
	uint32_t bCanEquipEmptyWeapon : 1; // 0x3b4
	uint32_t bIgnorePutdownEmptyWeapon : 1; // 0x3b4
	uint32_t bRestoreZoomStatebyFire : 1; // 0x3b4
	uint32_t EnableSoonZoom : 1; // 0x3b4
	uint32_t bCrosshairinZOOM : 1; // 0x3b4
	uint32_t bUseActualSpreadUI : 1; // 0x3b4
	uint32_t bIgnoreFiringStateOnRadar : 1; // 0x3b4
	uint32_t bAutoReload : 1; // 0x3b4
	uint32_t bCancelReloadingByFire : 1; // 0x3b4
	uint32_t bClearPendingFire : 1; // 0x3b4
	uint32_t bShowReloadingUI : 1; // 0x3b4
	uint32_t UseHitpriority : 1; // 0x3b4
	uint32_t bMagType : 1; // 0x3b4
	uint32_t bSilencerSupport : 1; // 0x3b4
	uint32_t bRealTimeRecoilRecover : 1; // 0x3b4
	uint32_t bRoundTrip : 1; // 0x3b4
	uint32_t bAddBlendOutTimeAtAnimDuration : 1; // 0x3b4
	uint32_t bClearFireDelayOnEndFire : 1; // 0x3b4
	uint32_t bGetFromPickupFactory : 1; // 0x3b4
	uint32_t bUseCameraShake : 1; // 0x3b4
	uint32_t IsVerticalRecoilMax : 1; // 0x3b4
	uint32_t IsSilencerAttached : 1; // 0x3b4
	uint32_t bTrySilencerAttach : 1; // 0x3b4
	uint32_t bRemoveVerticalRecoil : 1; // 0x3b4
	uint32_t bRemoveHorizonRecoil : 1; // 0x3b4
	uint32_t bNoSpread : 1; // 0x3b8
	uint32_t bMaxSpread : 1; // 0x3b8
	uint32_t bLastRightRecoil : 1; // 0x3b8
	uint32_t bSuppressSounds : 1; // 0x3b8
	uint32_t bEnableFirstPersonMuzzleFlash : 1; // 0x3b8
	uint32_t bTargetFrictionEnabled : 1; // 0x3b8
	uint32_t bInfiniteSpareAmmo : 1; // 0x3b8
	uint32_t bInfiniteExtraAmmo : 1; // 0x3b8
	uint32_t bInfiniteWeaponReload : 1; // 0x3b8
	uint32_t AllowShellEjectPerBullet : 1; // 0x3b8
	uint32_t bZoomDisabled : 1; // 0x3b8
	uint32_t bPreloadTextures : 1; // 0x3b8
	uint32_t bInitWeaponMesh : 1; // 0x3b8
	uint32_t bIsLocalWeapon : 1; // 0x3b8
	uint32_t bIsAIWeapon : 1; // 0x3b8
	uint32_t bReceiveOwnerEvents : 1; // 0x3b8
	uint32_t bisDropped : 1; // 0x3b8
	uint32_t AcceptPendingFire : 1; // 0x3b8
	uint32_t bUseTickIsDisabled : 1; // 0x3b8
	uint32_t bAsyncLoadedActor : 1; // 0x3b8
	uint32_t bEnableHackCheck : 1; // 0x3b8
	uint32_t bEnableNotifyHitTime : 1; // 0x3b8
	uint32_t bIsFullReloading : 1; // 0x3b8
	uint32_t bNeedNotifyWeaponAmmoChanged : 1; // 0x3b8
	uint32_t WeaponMeshFilpped : 1; // 0x3b8
	uint32_t CannotBeFilpped : 1; // 0x3b8
	uint32_t EnableBoneTransform : 1; // 0x3b8
	uint32_t IsIronSight : 1; // 0x3b8
	uint32_t bSpawnGunTrail : 1; // 0x3b8
	uint32_t bRepFlipMesh : 1; // 0x3b8
	uint32_t bHoldmode : 1; // 0x3b8
	uint32_t bEnableRecoilRandom : 1; // 0x3b8
	int32_t MinDamage; // 0x3bc
	int32_t MaxDamage; // 0x3c0
	float MinDamageRate; // 0x3c4
	int32_t SilencerDamagePenalty; // 0x3c8
	TArray<FsDamageAdjustment> DamageAdjustment; // 0x3cc
	TArray<FsDamageAdjustment> DamageAdjustmentVSPowerBullet; // 0x3dc
	float MaxDamageRange; // 0x3ec
	float MinDamageRange; // 0x3f0
	float PenetrationDamageRate; // 0x3f4
	float DamagedDecelerationRatio; // 0x3f8
	float ZoomCancelDelaybyFire; // 0x3fc
	EZoomState LastZoomStateByFire; // 0x400
	ECrosshairType MainCrosshair; // 0x401
	ECrosshairType UnderBarrelCrosshair; // 0x402
	char SubAmmoCount; // 0x403
	char ServerSubAmmoCount; // 0x404
	char ServerSubMagazineAmmo; // 0x405
	char MaxSubAmmoCount; // 0x406
	char SubMagazineAmmo; // 0x407
	char SubMaxMagazineAmmo; // 0x408
	char SubAmmoPerReload; // 0x409
	RISSlot ChangingRISSlot; // 0x40a
	EObjectGradeType ObjectGrade; // 0x40b
	EFirstRecoilDir LeftrightStart; // 0x40c
	char ObjectPenetrationNum; // 0x40d
	char PersonPenetrationNum; // 0x40e
	char CurrObjectPenetrationNum; // 0x40f
	char CurrPersonPenetrationNum; // 0x410
	EFirstRecoilDir bLastRecoilDir; // 0x411
	EWeaponGroup InventoryGroup; // 0x412
	char SlotIndex; // 0x413
	WEAPON_TYPES WeaponType; // 0x414
	char MeshSlideIndex; // 0x415
	AlphaBlendType MeshSlideBlendType; // 0x416
	AlphaBlendType RotLagBlendType; // 0x417
	EZoomState ZoomState; // 0x418
	EZoomState PreviousZoomState; // 0x419
	char WeaponState; // 0x41a
	EWeaponState PreWeaponState; // 0x41b
	char ActiveRISSlot; // 0x41c
	char PreviousActiveRISSlot; // 0x41d
	char DeactivatedRISSlot; // 0x41e
	EBoneGimmickType GimmickType; // 0x41f
	EBloodTexOnWeaponStatus BloodTexStatus; // 0x420
	char AltFireBlock[0x5]; // 0x421
	EObjectIconType HUDDroppedPickupIconType; // 0x426
	float BulletDropDelay; // 0x428
	float Durability; // 0x42c
	float ControlAccuracy; // 0x430
	float SpreadRateForUI; // 0x434
	float SpreadMaxForUI; // 0x438
	int32_t MaxActualSpreadForCrosshairLength; // 0x43c
	int32_t MaxRecoilForCrosshairLegnth; // 0x440
	WordProperty AmmoCount; // 0x444
	int32_t ShardNumber; // 0x448
	WordProperty ServerAmmoCount; // 0x44c
	WordProperty ServerMagazineAmmo; // 0x44e
	WordProperty ModeMaxAmmoCount; // 0x450
	WordProperty MaxAmmoCount; // 0x452
	WordProperty WeaponAmmoStart; // 0x454
	WordProperty MagazineAmmo; // 0x456
	WordProperty OldMagazineAmmo; // 0x458
	WordProperty MaxMagazineAmmo; // 0x45a
	WordProperty AmmoPerReload; // 0x45c
	TArray<char> ClientShotCountOnFiring; // 0x460
	TArray<char> ServerShotCountOnFiring; // 0x470
	float LastFiringTime; // 0x480
	float ReloadTime; // 0x484
	float ReloadingActionTime; // 0x488
	float PreReloadingActionTime; // 0x48c
	float PreReloadTime; // 0x490
	float PostReloadTime; // 0x494
	float RevertMagazineAmmoTime; // 0x498
	float ActivePartTimeList[0x5]; // 0x49c
	float DeactivePartTimeList[0x5]; // 0x4b0
	float CurrentFireDelayTime; // 0x4c4
	int32_t ScreenShakePitchAdhustment; // 0x4c8
	int32_t ScreenShakeYawAdhustment; // 0x4cc
	float RecoilTime; // 0x4d0
	float RecoilAutoCorrectDelay; // 0x4d4
	FName SilencerBoneName; // 0x4d8
	FName LaserBoneName; // 0x4e0
	FName LaserSiteBoneName; // 0x4e8
	FName ScopeBoneName; // 0x4f0
	float SilencerEquipTime; // 0x4f8
	FString Decalstring; // 0x4fc
	ObjectProperty DecalTexture; // 0x50c
	float FireDelayTime; // 0x514
	TArray<float> PreFireDelayTime; // 0x518
	AProjectile* InstantProjectile; // 0x528
	int32_t BP[0xa]; // 0x530
	float InstantProjectileHitNormalAddScale; // 0x558
	float FirstpersonTracerSpawnDistance; // 0x55c
	TArray<FRecoilFactor> RecoilFactorForHipShotView; // 0x560
	TArray<FRecoilFactor> RecoilFactorForFirstZoomedView; // 0x570
	TArray<FRecoilFactor> RecoilFactorForSecZoomedView; // 0x580
	float RecoilInterpSpeed; // 0x590
	float RecoilAutoCorrectSpeed; // 0x594
	int32_t Leftrightreactionswitch; // 0x598
	int32_t RecoilSpeedDownFirstRadius; // 0x59c
	int32_t RecoilSpeedDownSecondRadius; // 0x5a0
	float SpreadCorrectInterpOuterSpeed; // 0x5a4
	float SpreadCorrectInterpInnerSpeed; // 0x5a8
	float SpreadOuterSpeedAccuracy; // 0x5ac
	float LastFiredTimeSeconds; // 0x5b0
	float LastProjectileTimeSeconds; // 0x5b4
	float ValidRefireToleranceTime; // 0x5b8
	int32_t AddedPitchVerticalRecoilSum; // 0x5bc
	FRotator WeaponRecoilOffset; // 0x5c0
	FRotator LastFiredRecoilOffset; // 0x5cc
	FRotator AutoCorrectWeaponRecoilOffset; // 0x5d8
	float RecoilAutoCorrectTime; // 0x5e4
	float fPitch; // 0x5e8
	float fYaw; // 0x5ec
	int32_t FiredAmmo; // 0x5f0
	int32_t ValidFiredNum; // 0x5f4
	float Accuracy; // 0x5f8
	int32_t CurrentRecoilFactorType; // 0x5fc
	FRecoilFactor CurRecoilFactor; // 0x600
	FRotator DeltaRecoil; // 0x644
	TArray<int32_t> ShotCost; // 0x650
	TArray<FCameraShakeRotationFactor> CameraShake_IncreaseByWeapon; // 0x660
	TArray<float> CameraShake_HitBodyAdjust; // 0x670
	ACBWeaponAttachment* AttachmentClass; // 0x680
	ObjectProperty WeaponAttachment; // 0x688
	int32_t SoundCueIndex; // 0x690
	TArray<ObjectProperty> WeaponFireSnd3rd; // 0x694
	TArray<ObjectProperty> WeaponFireSnd; // 0x6a4
	ObjectProperty WeaponDryFireSnd; // 0x6b4
	ObjectProperty ZoomInSound; // 0x6bc
	ObjectProperty ZoomOutSound; // 0x6c4
	ObjectProperty ZoomInSound3rd; // 0x6cc
	ObjectProperty ZoomOutSound3rd; // 0x6d4
	ObjectProperty WeaponBulletDropSnd; // 0x6dc
	ObjectProperty WeaponChangeSnd; // 0x6e4
	TArray<float> BobDamping; // 0x6ec
	TArray<float> BobDampingZ; // 0x6fc
	TArray<float> WeaponBobSoundRatio; // 0x70c
	float MaxPitchLag; // 0x71c
	float MaxYawLag; // 0x720
	float LastRotUpdate; // 0x724
	FRotator LastRotation; // 0x728
	FVector LastLocation; // 0x734
	float OldLeadMag[0x2]; // 0x740
	int32_t OldRotDiff[0x2]; // 0x748
	float OldMaxDiff[0x2]; // 0x750
	float RotChgSpeed; // 0x758
	float ReturnChgSpeed; // 0x75c
	FName MuzzleFlashSocket; // 0x760
	FName SilencerMuzzleFlashSocket; // 0x768
	FName LauncherMuzzleFlashSocket; // 0x770
	FName HeadBloodSocket; // 0x778
	FName BloodSocket; // 0x780
	FName ExtraEffectSocket; // 0x788
	FName ShellEjectSocket; // 0x790
	ComponentProperty MuzzleFlashPSC; // 0x798
	ObjectProperty MuzzleFlashPSCTemplate; // 0x7a0
	ObjectProperty MuzzleFlashPSCTemplateForSilencer; // 0x7a8
	ObjectProperty MuzzleFlashPSCTemplateForGrenade; // 0x7b0
	ObjectProperty MuzzleFlashPSCTemplateForGrenade3rd; // 0x7b8
	ComponentProperty MuzzleFlashLight; // 0x7c0
	UCombatFPMuzzleFlashLight* MuzzleFlashLightClass; // 0x7c8
	float MuzzleFlashDuration; // 0x7d0
	TArray<FVector> PlayerViewOffset; // 0x7d4
	FVector CurrentPlayerViewOffset; // 0x7e4
	float CurrentRating; // 0x7f0
	int32_t AIWeaponSpreadRandom; // 0x7f4
	float AIModeDamageRate; // 0x7f8
	float TargetFrictionDistanceMin; // 0x7fc
	float TargetFrictionDistanceMax; // 0x800
	FVector TargetFrictionOffset; // 0x804
	float TargetAdhesionAimDistZ; // 0x810
	float TargetAdhesionAimDistY; // 0x814
	float AimAssistSpreadMultiplier; // 0x818
	float RunSpeed; // 0x81c
	float WalkingPct; // 0x820
	float CrouchedPct; // 0x824
	float AccelRate; // 0x828
	float JumpZ; // 0x82c
	float MaxGroundSpeed; // 0x830
	int32_t PickAddAmmo; // 0x834
	FString WeaponStatType; // 0x838
	ComponentProperty PSC_ShellEject; // 0x848
	int32_t ShotInBurstCount; // 0x850
	TArray<int32_t> ShotPerFireBurst; // 0x854
	int32_t FiredBulletNum; // 0x864
	ObjectProperty PitchControl[0x2]; // 0x868
	ObjectProperty YawControl[0x2]; // 0x878
	ObjectProperty TransControl[0x4]; // 0x888
	TArray<FName> PitchControlName; // 0x8a8
	TArray<FName> YawControlName; // 0x8b8
	TArray<FName> TransControlName; // 0x8c8
	FString WeaponCodeName; // 0x8d8
	FString WeaponName; // 0x8e8
	ObjectProperty RefItem; // 0x8f8
	int32_t WeaponID; // 0x900
	int32_t OriginalWeaponID; // 0x904
	FVector2D MeshSlide; // 0x908
	FVector2D MeshSlideSpeed; // 0x910
	FVector2D MeshSlideComebackSpeed; // 0x918
	FVector2D MeshSlideComebackThreshold; // 0x920
	FVector2D MeshSlideStartThreshold; // 0x928
	TArray<float> ForegroundFOV; // 0x930
	TArray<float> WorldFOV; // 0x940
	float LastForegroundFOV; // 0x950
	float LastWorldFOV; // 0x954
	float ForegroundFOVAppliedRISList; // 0x958
	TArray<float> WeaponBobRatio; // 0x95c
	TArray<float> WeaponLagRatio; // 0x96c
	TArray<float> WeaponZoomDuration; // 0x97c
	TArray<float> WeaponFOVDelayRatio; // 0x98c
	TArray<float> ZoomRotLagRatio; // 0x99c
	float FOVInterpSpeed; // 0x9ac
	TArray<float> ZoomAnimBlendTimes; // 0x9b0
	float ZoomStateChangedTime; // 0x9c0
	float ZoomStateChangeDurationRatio; // 0x9c4
	float CurrentWeaponZoomDuration; // 0x9c8
	float WeaponStateChangedTime; // 0x9cc
	FName WeaponStateName[0x1e]; // 0x9d0
	FCustomAnimData StateInfo[0x1e]; // 0xac0
	FCustomAnimData OverrideStateInfo[0x1e]; // 0x13a8
	FCustomAnimData CurrentStateInfo; // 0x1c90
	ObjectProperty CustomAnim; // 0x1cdc
	ObjectProperty CustomAnimOnIdle; // 0x1ce4
	TArray<FCustomAnimOnIdleData> CustomAnimOnIdleData; // 0x1cec
	TArray<ObjectProperty> RISList; // 0x1cfc
	TArray<ObjectProperty> TickableRISList; // 0x1d0c
	UCombatWeaponRISBase* DefaultRISList[0x5]; // 0x1d1c
	TArray<FHideBoneDataByWeaponState> HideBoneDataByWeapState; // 0x1d44
	TArray<FHideBoneDataByZoomState> HideBoneDataByZoomState; // 0x1d54
	TArray<FHideBoneDataByScreenPos> HideBoneDataByScreenPos; // 0x1d64
	TArray<FName> CachedHideBoneData; // 0x1d74
	TArray<RISSlot> SavedDeactiveParts; // 0x1d84
	TArray<FMeshPart> MeshParts; // 0x1d94
	TArray<FName> AlwaysHideBoneName; // 0x1da4
	FSocketLocation FirstMuzzleFlashLoc; // 0x1db4
	FSocketLocation ThirdMuzzleFlashLoc; // 0x1dc4
	int32_t RelatedSkillGroupID; // 0x1dd4
	float IdleVel; // 0x1dd8
	float IdleVelocitySquareForRecoil; // 0x1ddc
	ObjectProperty CombatInstigator; // 0x1de0
	ComponentProperty WeaponMesh; // 0x1de8
	float ZoomLv1MouseSensRatio; // 0x1df0
	float ZoomLv2MouseSensRatio; // 0x1df4
	int32_t ExposuredBulletNum; // 0x1df8
	TArray<FName> BulletNames; // 0x1dfc
	TArray<FName> BulletHeadNames; // 0x1e0c
	int32_t LastReloadedNum; // 0x1e1c
	int32_t HideBoneNum; // 0x1e20
	FVector Last_PV; // 0x1e24
	FVector2D MeshBob_WalkingMod; // 0x1e30
	float CurrentBloodTexValue; // 0x1e38
	float BloodTexDuration; // 0x1e3c
	float StartBloodTexTime; // 0x1e40
	float CurrentBloodTexBlendTime; // 0x1e44
	float BloodTexBlendTotalTime; // 0x1e48
	FName BloodScalarParam; // 0x1e4c
	float AllowedDelayTimeFromLastFiringTime; // 0x1e54
	float ValidFiringDistance; // 0x1e58
	float ValidHitBoundScale; // 0x1e5c
	float AllowTraceRangeRatio; // 0x1e60
	float ValidShotGunFiringDistance; // 0x1e64
	int32_t ValidShotGunNumHits; // 0x1e68
	float ProjectileFireDelay; // 0x1e6c
	float ValidNotifyHitTimeMag; // 0x1e70
	float LastNotifyHitTime; // 0x1e74
	FName LastNotifyHitActorName; // 0x1e78
	int32_t killcount; // 0x1e80
	TArray<FsBoneTransform> ABoneTransforms; // 0x1e84
	ObjectProperty BoneTransformNode; // 0x1e94
	ObjectProperty IronSightNodeRear; // 0x1e9c
	ObjectProperty IronSightNodeFront; // 0x1ea4
	FRotator IronSightRotRear; // 0x1eac
	FRotator IronSightRotFront; // 0x1eb8
	int32_t DroppedCount; // 0x1ec4
};

struct USoundNode : UObject {
	int32_t NodeUpdateHint; // 0x60
	TArray<ObjectProperty> ChildNodes; // 0x64
};

struct ALevelStreamingVolume : AVolume {
	TArray<ObjectProperty> StreamingLevels; // 0x280
	uint32_t bEditorPreVisOnly : 1; // 0x290
	uint32_t bDisabled : 1; // 0x290
	uint32_t bTestDistanceToVolume : 1; // 0x290
	EStreamingVolumeUsage StreamingUsage; // 0x294
	EStreamingVolumeUsage Usage; // 0x295
	float TestVolumeDistance; // 0x298
};

struct UCombatHUD_PickupItemLocator : UCombatHUD_GameObject {
	ObjectProperty PickupItemObject; // 0x1b0
	EObjectIconType PickupIconType; // 0x1b8
};

struct UWaveFormBase : UObject {
	ObjectProperty TheWaveForm; // 0x60
};

struct USplineMeshComponent : UStaticMeshComponent {
	FSplineMeshParams SplineParams; // 0x2f4
	FVector SplineXDir; // 0x34c
	uint32_t bSmoothInterpRollScale : 1; // 0x358
};

struct UUIDataStore_OnlinePlayerData : UUIDataStore_Remote {
	ObjectProperty FriendsProvider; // 0x98
	int32_t PlayerControllerId; // 0xa0
	FString PlayerNick; // 0xa4
	FString ProfileSettingsClassName; // 0xb4
	UOnlineProfileSettings* ProfileSettingsClass; // 0xc4
	ObjectProperty ProfileProvider; // 0xcc
	FString ProfileProviderClassName; // 0xd4
	UUIDataProvider_OnlineProfileSettings* ProfileProviderClass; // 0xe4
	FString PlayerStorageClassName; // 0xec
	UOnlinePlayerStorage* PlayerStorageClass; // 0xfc
	ObjectProperty StorageProvider; // 0x104
	FString StorageProviderClassName; // 0x10c
	UUIDataProvider_OnlinePlayerStorage* StorageProviderClass; // 0x11c
	ObjectProperty FriendMessagesProvider; // 0x124
	ObjectProperty AchievementsProvider; // 0x12c
	FString FriendsProviderClassName; // 0x134
	UUIDataProvider_OnlineFriends* FriendsProviderClass; // 0x144
	FString FriendMessagesProviderClassName; // 0x14c
	UUIDataProvider_OnlineFriendMessages* FriendMessagesProviderClass; // 0x15c
	FString AchievementsProviderClassName; // 0x164
	UUIDataProvider_PlayerAchievements* AchievementsProviderClass; // 0x174
	FString PartyChatProviderClassName; // 0x17c
	UUIDataProvider_OnlinePartyChatList* PartyChatProviderClass; // 0x18c
	ObjectProperty PartyChatProvider; // 0x194
};

struct UGameCrowdBehavior_PlayAnimation : UGameCrowdAgentBehavior {
	TArray<FName> AnimationList; // 0x9c
	float BlendInTime; // 0xac
	float BlendOutTime; // 0xb0
	uint32_t bUseRootMotion : 1; // 0xb4
	uint32_t bLookAtPlayer : 1; // 0xb4
	uint32_t bLooping : 1; // 0xb4
	uint32_t bBlendBetweenAnims : 1; // 0xb4
	ObjectProperty CustomActionTarget; // 0xb8
	int32_t LoopIndex; // 0xc0
	float LoopTime; // 0xc4
	ObjectProperty AnimSequence; // 0xc8
	int32_t AnimationIndex; // 0xd0
};

struct ACombatPawn_PracticeGame : ACombatGuy_Player {
	FSProjectileCamera ProjectileCameraInfo; // 0x1164
	float ProjStartTime; // 0x117c
	FVector ProjCameraLocation; // 0x1180
	FRotator ProjCameraRotation; // 0x118c
	float FirstFollowSpeed; // 0x1198
	float RecoverStartTime; // 0x119c
	ObjectProperty ProjViewTarget; // 0x11a0
	uint32_t bIsPlayingProjCamera : 1; // 0x11a8
	FVector SavedCameraLocation; // 0x11ac
	FRotator SavedCameraRotation; // 0x11b8
};

struct UParticleModuleColorOverLife : UParticleModuleColorBase {
	FRawDistributionVector ColorOverLife; // 0x68
	FRawDistributionFloat AlphaOverLife; // 0x8c
	uint32_t bClampAlpha : 1; // 0xb0
};

struct UParticleModuleTypeDataAnimTrail : UParticleModuleTypeDataBase {
	FName ControlEdgeName; // 0x68
	int32_t SheetsPerTrail; // 0x70
	uint32_t bDeadTrailsOnDeactivate : 1; // 0x74
	uint32_t bClipSourceSegement : 1; // 0x74
	uint32_t bEnablePreviousTangentRecalculation : 1; // 0x74
	uint32_t bTangentRecalculationEveryFrame : 1; // 0x74
	uint32_t bRenderGeometry : 1; // 0x74
	uint32_t bRenderSpawnPoints : 1; // 0x74
	uint32_t bRenderTangents : 1; // 0x74
	uint32_t bRenderTessellation : 1; // 0x74
	float TilingDistance; // 0x78
	float DistanceTessellationStepSize; // 0x7c
	float TangentTessellationScalar; // 0x80
};

struct ACombatCubeMapActor : ASceneCaptureCubeMapActor {
	ObjectProperty CapturedTextureCube; // 0x25c
};

struct UCombatDataTableRefShortcut : UCombatDataTableType {
	FString ChannelCodeName; // 0x6c
	FString MissionCodename; // 0x7c
	FString ModeGroupCodename; // 0x8c
	uint32_t Disable : 1; // 0x9c
	int32_t Group; // 0xa0
	int32_t ShortcutImageID; // 0xa4
	int32_t ShortcutNameID; // 0xa8
	int32_t Level; // 0xac
	int32_t OpenWorld; // 0xb0
};

struct UActorFactoryApexDestructible : UActorFactory {
	uint32_t bStartAwake : 1; // 0x9c
	ERBCollisionChannel RBChannel; // 0xa0
	FRBCollisionChannelContainer CollideWithChannels; // 0xa4
	ObjectProperty DestructibleAsset; // 0xa8
};

struct UCombatDataTableRefHelpTab : UCombatDataTableType {
	FString CodeName; // 0x6c
	int32_t Category; // 0x7c
	int32_t TabNameID; // 0x80
	FString SubCodeName[0x14]; // 0x84
};

struct UCombatHUD_KillDeathList : UCombatHUDEntity_Base {
	FString KillDeathList_KillTypeIcons[0x7]; // 0xc0
};

struct UCombatFrontEnd_MatchroomPopup : UCombatFrontEnd_Object {
	uint32_t bNeedInitChangeRoomLabel : 1; // 0xd0
	int32_t ChangeRoomLabelID; // 0xd4
	int32_t OKBtnLabelID; // 0xd8
	int32_t CancelBtnLabelID; // 0xdc
	FString ChangeRoomLabel; // 0xe0
	FString OKBtnLabel; // 0xf0
	FString CancelBtnLabel; // 0x100
};

struct UUIDataStore_GameResource : UUIDataStore {
	TArray<FGameResourceDataProvider> ElementProviderTypes; // 0x98
	FMultiMap_Mirror ListElementProviders; // 0xa8
};

struct UAnimNodeBlend : UAnimNodeBlendBase {
	float Child2Weight; // 0x100
	float Child2WeightTarget; // 0x104
	float BlendTimeToGo; // 0x108
	uint32_t bSkipBlendWhenNotRendered : 1; // 0x10c
};

struct UMaterialExpressionTerrainLayerCoords : UMaterialExpression {
	ETerrainCoordMappingType MappingType; // 0xb0
	float MappingScale; // 0xb4
	float MappingRotation; // 0xb8
	float MappingPanU; // 0xbc
	float MappingPanV; // 0xc0
};

struct UGripCondNode_TargetHealth : UGripConditionNode {
	ECurAITarget CurAITarget; // 0xec
	BTConditionOperator Op; // 0xed
	int32_t Health; // 0xf0
};

struct AWindDirectionalSource : AInfo {
	ComponentProperty Component; // 0x244
};

struct AVolumeTimer : AInfo {
	ObjectProperty V; // 0x244
};

struct UCombatDemolitionGameMessage : UCombatGameMessage {
	int32_t BombPickupTextID; // 0x84
	int32_t BombDropTextID; // 0x88
};

struct ACombatSprayDecalActor : ACombatDecalActorMovable {
	int32_t SprayID; // 0x254
	float Angle; // 0x258
	float SprayedTime; // 0x25c
	float SprayDecalFarPlane; // 0x260
	float SprayFloatDist; // 0x264
	float SprayPreviewAlpha; // 0x268
	int32_t SpraySyncTime; // 0x26c
	ObjectProperty SpraySound_1p; // 0x270
	ObjectProperty SpraySound_3p; // 0x278
	ObjectProperty SprayMIC; // 0x280
	ObjectProperty CachedDecalManager; // 0x288
	ObjectProperty CachedGRI; // 0x290
	FVector LastSprayLocation; // 0x298
	uint32_t bIsPreviewSpray : 1; // 0x2a4
};

struct UOnlineStatsWrite : UOnlineStats {
	TArray<FStringIdToStringMapping> StatMappings; // 0x70
	TArray<FSettingsProperty> Properties; // 0x80
	TArray<int32_t> ViewIds; // 0x90
	TArray<int32_t> ArbitratedViewIds; // 0xa0
	int32_t RatingId; // 0xb0
	DelegateProperty __OnStatsWriteComplete__Delegate; // 0xb4
};

struct UCombatGameOptionTransaction : UObject {
	char Invite_Auto_Regist; // 0x60
	char Friend_Invite_Refuse; // 0x61
	char Minimap_Size_Step; // 0x62
	char Save_Minimap_Size_Step; // 0x63
};

struct UCombatStatStorageBase : UObject {
	ObjectProperty StorageOwner; // 0x60
	ObjectProperty StatDataStore; // 0x68
	TArray<FPlayerStatInfo> TempSaveStat; // 0x70
	uint32_t Processed : 1; // 0x80
	FStatSaveCondition StatSaveCondition_PlayerMode[0x4]; // 0x84
};

struct USaveGameSummary : UObject {
	FName BaseLevel; // 0x60
	FString Description; // 0x68
};

struct UGripBTRaiseEvent : UGripBTNode {
	FString EventType; // 0xbc
};

struct UGripActionNode_MoveToward : UCombatAIActionNodeBase {
	ECurAITarget DestinationType; // 0xf4
	uint32_t bIsWalking : 1; // 0xf8
	float RePathFindChangeDist; // 0xfc
};

struct UParticleModuleSizeMultiplyLife : UParticleModuleSizeBase {
	FRawDistributionVector LifeMultiplier; // 0x68
	uint32_t MultiplyX : 1; // 0x8c
	uint32_t MultiplyY : 1; // 0x8c
	uint32_t MultiplyZ : 1; // 0x8c
};

struct ACombatBot : AAIController {
	ObjectProperty Squad; // 0x454
	ComponentProperty DecisionComponent; // 0x45c
	ObjectProperty TemporaryFocus; // 0x464
	uint32_t bExecutingWhatToDoNext : 1; // 0x46c
	uint32_t bScriptSpecialJumpCost : 1; // 0x46c
	uint32_t bForceRefreshRoute : 1; // 0x46c
	uint32_t bTargetAlternateLoc : 1; // 0x46c
	uint32_t bEnemyInfoValid : 1; // 0x46c
	uint32_t bEnemyIsVisible : 1; // 0x46c
	uint32_t bLeadTarget : 1; // 0x46c
	uint32_t bJumpOverWall : 1; // 0x46c
	uint32_t bPlannedJump : 1; // 0x46c
	uint32_t bInDodgeMove : 1; // 0x46c
	uint32_t bEnemyAcquired : 1; // 0x46c
	uint32_t bNeedDelayedLeaveVehicle : 1; // 0x46c
	uint32_t bAllowRouteReuse : 1; // 0x46c
	uint32_t bUsingSquadRoute : 1; // 0x46c
	uint32_t bUsePreviousSquadRoute : 1; // 0x46c
	char ScriptedFireMode; // 0x470
	float EnemyVisibilityTime; // 0x474
	ObjectProperty VisibleEnemy; // 0x478
	ObjectProperty LastBlockingVehicle; // 0x480
	ObjectProperty CurrentlyTrackedEnemy; // 0x488
	TArray<FEnemyPosition> SavedPositions; // 0x490
	FVector ImpactVelocity; // 0x4a0
	int32_t AcquisitionYawRate; // 0x4ac
	float HearingThreshold; // 0x4b0
	float RespawnPredictionTime; // 0x4b4
	float WarningDelay; // 0x4b8
	ObjectProperty WarningProjectile; // 0x4bc
	FVector MonitorStartLoc; // 0x4c4
	ObjectProperty MonitoredPawn; // 0x4d0
	float MonitorMaxDistSq; // 0x4d8
	FVector LastSeenPos; // 0x4dc
	FVector LastSeeingPos; // 0x4e8
	float LastSeenTime; // 0x4f4
	float TrackingReactionTime; // 0x4f8
	float BaseTrackingReactionTime; // 0x4fc
	FVector TrackedVelocity; // 0x500
	ObjectProperty SquadRouteGoal; // 0x50c
	ObjectProperty BlockedAimTarget; // 0x514
	float LastIterativeCheck; // 0x51c
	float AimUpdateFrequency; // 0x520
	float LastAimUpdateTime; // 0x524
	float ErrorUpdateFrequency; // 0x528
	float LastErrorUpdateTime; // 0x52c
	float CurrentAimError; // 0x530
	float DodgeLandZ; // 0x534
	ObjectProperty FearSpots[0x2]; // 0x538
	float DodgeToGoalPct; // 0x548
	float MultiJumpZ; // 0x54c
	ObjectProperty PresetManager; // 0x550
};

struct UPlayer : UObject {
	FPointer VfTable_FExec; // 0x60
	ObjectProperty Actor; // 0x68
	int32_t CurrentNetSpeed; // 0x70
	int32_t ConfiguredInternetSpeed; // 0x74
	int32_t ConfiguredLanSpeed; // 0x78
	float PP_DesaturationMultiplier; // 0x7c
	float PP_HighlightsMultiplier; // 0x80
	float PP_MidTonesMultiplier; // 0x84
	float PP_ShadowsMultiplier; // 0x88
};

struct UCombatUIDataStore_StringAliasMap : UUIDataStore_StringAliasMap {
	int32_t FakePlatform; // 0xf4
};

struct ATeleporter : ANavigationPoint {
	FString URL; // 0x33c
	FName ProductRequired; // 0x34c
	uint32_t bChangesVelocity : 1; // 0x354
	uint32_t bChangesYaw : 1; // 0x354
	uint32_t bReversesX : 1; // 0x354
	uint32_t bReversesY : 1; // 0x354
	uint32_t bReversesZ : 1; // 0x354
	uint32_t bEnabled : 1; // 0x354
	uint32_t bCanTeleportVehicles : 1; // 0x354
	FVector TargetVelocity; // 0x358
	float LastFired; // 0x364
};

struct UParticleModuleSourceMovement : UParticleModuleLocationBase {
	FRawDistributionVector SourceMovementScale; // 0x68
};

struct ACombatTeamOwnedInfo : AReplicationInfo {
	ObjectProperty Team; // 0x244
};

struct UCombatAnimBlendByRISSlot : UCombatAnimBlendBase {
	ObjectProperty Owner; // 0x144
	RISSlot ActivatedSlot; // 0x14c
};

struct UCombatWeaponRISBase_SkeletalmeshComponent : UCombatWeaponRISBase {
	ComponentProperty FirstPersonSkelComponent; // 0xbf0
	ObjectProperty FirstPersonPhysicsAsset; // 0xbf8
	FName FirstPersonNameToAttach; // 0xc00
	uint32_t bIsAttachToFirstPersonSocket : 1; // 0xc08
	uint32_t bIsAttachToThirdPersonSocket : 1; // 0xc08
	TArray<FMeshPart> FirstPersonMeshParts; // 0xc0c
	ComponentProperty ThirdPersonSkelComponent; // 0xc1c
	ObjectProperty ThirdPersonPhysicsAsset; // 0xc24
	FName ThirdPersonNameToAttach; // 0xc2c
	TArray<FMeshPart> ThirdPersonMeshParts; // 0xc34
};

struct UParticleModuleAccelerationOverLifetime : UParticleModuleAccelerationBase {
	FRawDistributionVector AccelOverLife; // 0x6c
};

struct USeqVar_Character : USeqVar_Object {
	APawn* PawnClass; // 0xc4
};

struct UCCSBTActionWhileMoving : UCCSBTMoveTo {
	float DelayBetweenBursts; // 0xc4
	EMoveTargetType Target; // 0xc8
	EUpperBodyActionType Action; // 0xc9
};

struct AGameCrowdPopulationManager : ACrowdPopulationManagerBase {
	FPointer VfTable_IInterface_NavigationHandle; // 0x244
	FCrowdSpawnInfoItem CloudSpawnInfo; // 0x24c
	TArray<FCrowdSpawnInfoItem> ScriptedSpawnInfo; // 0x2dc
	ObjectProperty ActiveCrowdInfoVolume; // 0x2ec
	TArray<ObjectProperty> GlobalPotentialSpawnPoints; // 0x2f4
	float SplitScreenNumReduction; // 0x304
	float PlayerPositionPredictionTime; // 0x308
	float HeadVisibilityOffset; // 0x30c
	UNavigationHandle* NavigationHandleClass; // 0x310
	ObjectProperty NavigationHandle; // 0x318
	ObjectProperty QueryingAgent; // 0x320
	TArray<FCrowdSpawnerPlayerInfo> PlayerInfo; // 0x328
	float LastPlayerInfoUpdateTime; // 0x338
	uint32_t bDebugSpawns : 1; // 0x33c
	uint32_t bPauseCrowd : 1; // 0x33c
};

struct UMaterialExpressionDepthBiasBlend : UMaterialExpressionTextureSample {
	uint32_t bNormalize : 1; // 0x120
	float BiasScale; // 0x124
	FExpressionInput Bias; // 0x128
};

struct UNavMeshGoal_Filter : UObject {
	uint32_t bShowDebug : 1; // 0x60
	int32_t NumNodesThrownOut; // 0x64
	int32_t NumNodesProcessed; // 0x68
};

struct UCCSBTMoveTo : UGripBTNode {
	uint32_t DummyVarToAvoidUnrealScriptCompilerErrorWhenDeclaringAnEnumVarAsFirstVariable : 1; // 0xbc
	ECCSMovementSpeed Speed; // 0xc0
	ECCSAlertnessState Alertness; // 0xc1
	ECCSMovementType MovementType; // 0xc2
};

struct AScout : APawn {
	TArray<FPathSizeInfo> PathSizes; // 0x558
	float TestJumpZ; // 0x568
	float TestGroundSpeed; // 0x56c
	float TestMaxFallSpeed; // 0x570
	float TestFallSpeed; // 0x574
	float MaxLandingVelocity; // 0x578
	int32_t MinNumPlayerStarts; // 0x57c
	UReachSpec* DefaultReachSpecClass; // 0x580
	TArray<FColor> EdgePathColors; // 0x588
	float NavMeshGen_StepSize; // 0x598
	float NavMeshGen_EntityHalfHeight; // 0x59c
	float NavMeshGen_StartingHeightOffset; // 0x5a0
	float NavMeshGen_MaxDropHeight; // 0x5a4
	float NavMeshGen_MaxStepHeight; // 0x5a8
	float NavMeshGen_VertZDeltaSnapThresh; // 0x5ac
	float NavMeshGen_MinPolyArea; // 0x5b0
	float NavMeshGen_BorderBackfill_CheckDist; // 0x5b4
	float NavMeshGen_MinMergeDotAreaThreshold; // 0x5b8
	float NavMeshGen_MinMergeDotSmallArea; // 0x5bc
	float NavMeshGen_MinMergeDotLargeArea; // 0x5c0
	float NavMeshGen_MaxPolyHeight; // 0x5c4
	float NavMeshGen_HeightMergeThreshold; // 0x5c8
	float NavMeshGen_EdgeMaxDelta; // 0x5cc
	float NavMeshGen_MaxGroundCheckSize; // 0x5d0
	float NavMeshGen_MinEdgeLength; // 0x5d4
	uint32_t NavMeshGen_ExpansionDoObstacleMeshSimplification : 1; // 0x5d8
	uint32_t bHightlightOneWayReachSpecs : 1; // 0x5d8
	float MinMantleFallDist; // 0x5dc
	float MaxMantleFallDist; // 0x5e0
	float MinMantleLateralDist; // 0x5e4
	float MaxMantleLateralDist; // 0x5e8
	float MaxMantleFallTime; // 0x5ec
};

struct UCoverSlipReachSpec : UForcedReachSpec {
	char SpecDirection; // 0xc8
};

struct UCombatDataTableRefImagePath : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString FullImagePath; // 0x70
};

struct USeqEvent_AnimNotify : USequenceEvent {
	FName NotifyName; // 0x128
};

struct ACombatCTFGameReplicationInfo : ACBGameReplicationInfo {
	int32_t VC_FlagScore; // 0x380
	int32_t PM_FlagScore; // 0x384
};

struct USeqAct_SetPawnSpeed : USequenceAction {
	float GroundSpeed; // 0x108
	TArray<ObjectProperty> Actors; // 0x10c
};

struct UNavMeshPath_AlongLine : UNavMeshPathConstraint {
	FVector Direction; // 0x78
};

struct UAnimNodePlayCustomAnim : UAnimNodeBlend {
	uint32_t bIsPlayingCustomAnim : 1; // 0x110
	float CustomPendingBlendOutTime; // 0x114
};

struct AAIBeacon : ANavigationPoint {
	char EnableAITypeIndex; // 0x33c
	EAITeamInfo EnableTeamIndex; // 0x33d
	int32_t EnableMaxClaim; // 0x340
	TArray<ObjectProperty> ClaimAIArray; // 0x344
};

struct UCombatDemoRecSpectatorMovie : UCombatTeamGameMovie {
	ObjectProperty DemoRecPlayerMC; // 0xad0
	int32_t LastFrame; // 0xad8
	uint32_t bRewinding : 1; // 0xadc
	uint32_t bForwarding : 1; // 0xadc
	int32_t targetFrame; // 0xae0
};

struct UCombatFrontEnd_RandomBoxShopBuyPopup : UCombatFrontEnd_Object {
	ObjectProperty OwnerShop; // 0xd0
	FString CurrentRefShopItemGroupName; // 0xd8
	FString CurrentItemName; // 0xe8
	int32_t CurrentGroupIndex; // 0xf8
	int32_t CurrentPriceIndex; // 0xfc
	int32_t CurrentPriceType; // 0x100
	int32_t CurrentPrice; // 0x104
	uint32_t _lock : 1; // 0x108
};

struct UDistributionVectorConstantCurve : UDistributionVector {
	FInterpCurveVector ConstantCurve; // 0x7c
	uint32_t bLockAxes : 1; // 0x90
	EDistributionVectorLockFlags LockedAxes; // 0x94
};

struct UOnlineSubsystemCombat : UOnlineSubsystemCombatBase {
	FString IPAddress; // 0x1bc
	int32_t PortNumber; // 0x1cc
	FString IPAddressPmang; // 0x1d0
	int32_t PortNumberPmang; // 0x1e0
	ObjectProperty CharacterTransaction; // 0x1e4
	ObjectProperty ItemTransaction; // 0x1ec
	ObjectProperty StatisticsTransaction; // 0x1f4
	ObjectProperty ChannelTransaction; // 0x1fc
	ObjectProperty LobbyTransaction; // 0x204
	ObjectProperty ClanTransaction; // 0x20c
	ObjectProperty CommunityTransaction; // 0x214
	ObjectProperty MailTransaction; // 0x21c
	ObjectProperty AwaitTransaction; // 0x224
	ObjectProperty RandomBoxTransaction; // 0x22c
	ObjectProperty GameOptionTransaction; // 0x234
	ObjectProperty UserInfoTransaction; // 0x23c
	eFrontEndScene wantScene; // 0x244
	ELoginStatus LoggedInStatus; // 0x245
	ObjectProperty CachedProfile; // 0x248
	TArray<FPointer> AsyncTasks; // 0x250
	FString ProfileDataDirectory; // 0x260
	FString ProfileDataExtension; // 0x270
	FString ProfileMessageDataExtension; // 0x280
	FString LoggedInPlayerName; // 0x290
	FString LoggedInPlayerSteamIDStr; // 0x2a0
	TArray<DelegateProperty> ReadProfileSettingsDelegates; // 0x2b0
	TArray<DelegateProperty> WriteProfileSettingsDelegates; // 0x2c0
	uint32_t bShowProtocolLogToChat : 1; // 0x2d0
	uint32_t bImmersionDisplayed : 1; // 0x2d0
	uint32_t bNotifyDelayedPreMTSReset : 1; // 0x2d0
	uint32_t bJustBecameClanMaster : 1; // 0x2d0
	uint32_t bNeedBackToGame : 1; // 0x2d0
	uint32_t bIsUsingSpeechRecognition : 1; // 0x2d0
	FComplaintReceiptInfo CurrentComplaintReceiptInfo; // 0x2d4
	FString GameSerialNumber; // 0x2f8
	float ImmersionCylcleTime; // 0x308
	float ImmersionElapsedTime; // 0x30c
	float ImmersionLifeTime; // 0x310
	int32_t ImmersionHourCount; // 0x314
	FString ClanNotice; // 0x318
	FString ClanIntroduce; // 0x328
	FString WebServerIPAddress; // 0x338
	FString MACAddress; // 0x348
	FString WarnetKey; // 0x358
	int32_t MaxLocalTalkers; // 0x368
	int32_t MaxRemoteTalkers; // 0x36c
	TArray<FUniqueNetId> MuteList; // 0x370
	FPointer VoiceEngine; // 0x380
	TArray<DelegateProperty> TalkingDelegates; // 0x388
	TArray<DelegateProperty> SpeechRecognitionCompleteDelegates; // 0x398
	int32_t LoggedInPlayerNum; // 0x3a8
	FUniqueNetId LoggedInPlayerId; // 0x3ac
	FLocalTalkerSteam CurrentLocalTalker; // 0x3b4
	TArray<FRemoteTalker> RemoteTalkers; // 0x3bc
	TArray<FUniqueNetId> ListenerList; // 0x3cc
	ObjectProperty BannerImageDownloader; // 0x3dc
	DelegateProperty __OnReadProfileSettingsComplete__Delegate; // 0x3e4
	DelegateProperty __OnWriteProfileSettingsComplete__Delegate; // 0x3f4
	DelegateProperty __OnPlayerTalkingStateChange__Delegate; // 0x404
	DelegateProperty __OnRecognitionComplete__Delegate; // 0x414
};

struct UCCSBTCombatReloadWeapon : UGripBTScriptBehavior {
	ObjectProperty bc; // 0xcc
};

struct ACombatHUD_PracticeGame : ACombatTeamGameHUD {
	ObjectProperty PracticeGameMovie; // 0x62c
};

struct UParticleModuleVelocity_Seeded : UParticleModuleVelocity {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xb4
};

struct UOnlineTitleFileDownloadWeb : UOnlineTitleFileDownloadBase {
	TArray<FTitleFileWeb> TitleFiles; // 0x104
};

struct UCurveEdPresetCurve : UObject {
	FString CurveName; // 0x60
	TArray<FPresetGeneratedPoint> Points; // 0x70
};

struct UCombatMain_Base : UGFxObject {
	ObjectProperty Owner; // 0xa0
	uint32_t bShowMouse : 1; // 0xa8
	uint32_t bBackUpMouse : 1; // 0xa8
};

struct UCombatHUD_MarkerMenu : UCombatHUDEntity_Base {
	ObjectProperty OwnerSystem; // 0xc0
	FString CurrentMarkerGroupID; // 0xc8
};

struct UParticleModuleRotationRate : UParticleModuleRotationRateBase {
	FRawDistributionFloat StartRotationRate; // 0x68
};

struct AProcBuilding : AVolume {
	TArray<FPBMeshCompInfo> BuildingMeshCompInfos; // 0x280
	TArray<FPBFracMeshCompInfo> BuildingFracMeshCompInfos; // 0x290
	ComponentProperty SimpleMeshComp; // 0x2a0
	uint32_t bGenerateRoofMesh : 1; // 0x2a8
	uint32_t bGenerateFloorMesh : 1; // 0x2a8
	uint32_t bApplyRulesToRoof : 1; // 0x2a8
	uint32_t bApplyRulesToFloor : 1; // 0x2a8
	uint32_t bSplitWallsAtRoofLevels : 1; // 0x2a8
	uint32_t bSplitWallsAtWallEdges : 1; // 0x2a8
	uint32_t bQuickEdited : 1; // 0x2a8
	uint32_t bBuildingBrushCollision : 1; // 0x2a8
	uint32_t bDebugDrawEdgeInfo : 1; // 0x2a8
	uint32_t bDebugDrawScopes : 1; // 0x2a8
	TArray<ComponentProperty> LODMeshComps; // 0x2ac
	int32_t NumMeshedTopLevelScopes; // 0x2bc
	float MaxFacadeZ; // 0x2c0
	float MinFacadeZ; // 0x2c4
	TArray<ObjectProperty> OverlappingBuildings; // 0x2c8
	float SimpleMeshMassiveLODDistance; // 0x2d8
	float RenderToTexturePullBackAmount; // 0x2dc
	int32_t RoofLightmapRes; // 0x2e0
	int32_t NonRectWallLightmapRes; // 0x2e4
	FName ParamSwatchName; // 0x2e8
	TArray<FPBMaterialParam> BuildingMaterialParams; // 0x2f0
	ObjectProperty LowLODPersistentActor; // 0x300
	ComponentProperty CurrentSimpleMeshComp; // 0x308
	ObjectProperty CurrentSimpleMeshActor; // 0x310
	int32_t BuildingInstanceVersion; // 0x318
};

struct USeqAct_CameraFade : USequenceAction {
	FColor FadeColor; // 0x108
	FVector2D FadeAlpha; // 0x10c
	float FadeOpacity; // 0x114
	float FadeTime; // 0x118
	uint32_t bPersistFade : 1; // 0x11c
	uint32_t bFadeAudio : 1; // 0x11c
	float FadeTimeRemaining; // 0x120
	TArray<ObjectProperty> CachedPCs; // 0x124
};

struct ADynamicBlockingVolume : ABlockingVolume {
	uint32_t bEnabled : 1; // 0x284
};

struct AUSSWeaponAttachment : AActor {
	ComponentProperty WeapMeshComp; // 0x244
	FName MuzzleFlashSocketName; // 0x24c
	ComponentProperty MuzzleFlashMesh; // 0x254
	uint32_t MuzzleFlashAttached : 1; // 0x25c
	float MuzzleFlashDuration; // 0x260
	FUSSMaterialImpactEffect DefaultImpactEffect; // 0x264
};

struct UFactory : UObject {
	UObject* SupportedClass; // 0x60
	UObject* ContextClass; // 0x68
	FString Description; // 0x70
	TArray<FString> Formats; // 0x80
	uint32_t bCreateNew : 1; // 0x90
	uint32_t bEditAfterNew : 1; // 0x90
	uint32_t bEditorImport : 1; // 0x90
	uint32_t bText : 1; // 0x90
	int32_t AutoPriority; // 0x94
	TArray<FString> ValidGameNames; // 0x98
};

struct USpriteComponent : UPrimitiveComponent {
	ObjectProperty Sprite; // 0x250
	uint32_t bIsScreenSizeScaled : 1; // 0x258
	float ScreenSize; // 0x25c
	float U; // 0x260
	float UL; // 0x264
	float V; // 0x268
	float VL; // 0x26c
};

struct UCombatFrontEnd_Maintenance : UCombatFrontEnd_Scene {
	int32_t ShopType; // 0xd0
	TArray<FRISListDescStruct> RISInfoList; // 0xd4
};

struct USeqAct_IgnoreKeys : USequenceAction {
	int32_t AllowedPlayerIndex; // 0x108
	TArray<FName> IgnoreKeyNames; // 0x10c
	uint32_t bIsClearIgnoreKeys : 1; // 0x11c
};

struct UCCSVisualizationComponent : UPrimitiveComponent {
	FPointer SceneProxy; // 0x250
};

struct ACombatWeapon_Grenade : ACombatWeapon {
	uint32_t bMartyrdom : 1; // 0x1ec8
	uint32_t IsAlreadyMakeProjectile : 1; // 0x1ec8
};

struct AGameCheatManager : ACheatManager {
	ObjectProperty DebugCameraControllerRef; // 0x27c
	ADebugCameraController* DebugCameraControllerClass; // 0x284
	FString DebugCameraControllerClassName; // 0x28c
};

struct USeqEvent_PlayerSpawned : USequenceEvent {
	ObjectProperty SpawnPoint; // 0x128
};

struct AGameCrowdAgent : ACrowdAgentBase {
	FPointer VfTable_IInterface_RVO; // 0x24c
	ObjectProperty MyGroup; // 0x254
	FVector PreferredVelocity; // 0x25c
	FVector PendingVelocity; // 0x268
	ObjectProperty CurrentDestination; // 0x274
	ObjectProperty BehaviorDestination; // 0x27c
	ObjectProperty PreviousDestination; // 0x284
	float InterpZTranslation; // 0x28c
	int32_t Health; // 0x290
	float DeadBodyDuration; // 0x294
	ComponentProperty LightEnvironment; // 0x298
	int32_t ConformTraceFrameCount; // 0x2a0
	TArray<FNearbyDynamicItem> NearbyDynamics; // 0x2a4
	uint32_t bUniformScale : 1; // 0x2b4
	uint32_t bCheckForObstacles : 1; // 0x2b4
	uint32_t bUseNavMeshPathing : 1; // 0x2b4
	uint32_t bWantsSeePlayerNotification : 1; // 0x2b4
	uint32_t bAllowPitching : 1; // 0x2b4
	uint32_t bHitObstacle : 1; // 0x2b4
	uint32_t bBadHitNormal : 1; // 0x2b4
	uint32_t bSimulateThisTick : 1; // 0x2b4
	uint32_t bPotentialEncounter : 1; // 0x2b4
	uint32_t bIsPanicked : 1; // 0x2b4
	uint32_t bWantsGroupIdle : 1; // 0x2b4
	uint32_t bPreferVisibleDestination : 1; // 0x2b4
	uint32_t bPreferVisibleDestinationOnSpawn : 1; // 0x2b4
	uint32_t bHasNotifiedSpawner : 1; // 0x2b4
	uint32_t bIsInSpawnPool : 1; // 0x2b4
	uint32_t bPaused : 1; // 0x2b4
	EConformType ConformType; // 0x2b8
	float ConformTraceDist; // 0x2bc
	int32_t ConformTraceInterval; // 0x2c0
	int32_t CurrentConformTraceInterval; // 0x2c4
	float LastGroundZ; // 0x2c8
	float AwareRadius; // 0x2cc
	float AvoidOtherRadius; // 0x2d0
	TArray<FAvoidOtherSampleItem> AvoidOtherSampleList; // 0x2d4
	float PENALTY_COEFF_ANGLETOGOAL; // 0x2e4
	float PENALTY_COEFF_ANGLETOVEL; // 0x2e8
	float PENALTY_COEFF_MAG; // 0x2ec
	float MIN_PENALTY_THRESHOLD; // 0x2f0
	float LastProgressTime; // 0x2f4
	float LastFallbackActiveTime; // 0x2f8
	float MaxPathLaneValue; // 0x2fc
	float CurrentPathLaneValue; // 0x300
	int32_t ExtraPathCost; // 0x304
	float RotateToTargetSpeed; // 0x308
	float MaxYawRate; // 0x30c
	FVector MeshMinScale3D; // 0x310
	FVector MeshMaxScale3D; // 0x31c
	float EyeZOffset; // 0x328
	float ProximityLODDist; // 0x32c
	float VisibleProximityLODDist; // 0x330
	FVector LastKnownGoodPosition; // 0x334
	float GroundOffset; // 0x340
	FVector IntermediatePoint; // 0x344
	FVector SearchExtent; // 0x350
	UNavigationHandle* NavigationHandleClass; // 0x35c
	ObjectProperty NavigationHandle; // 0x364
	int32_t ObstacleCheckCount; // 0x36c
	float WalkableFloorZ; // 0x370
	float LastPathingAttempt; // 0x374
	float LastUpdateTime; // 0x378
	float NotVisibleLifeSpan; // 0x37c
	ObjectProperty MyArchetype; // 0x380
	float MaxWalkingSpeed; // 0x388
	float MaxRunningSpeed; // 0x38c
	float MaxSpeed; // 0x390
	TArray<FRecentInteraction> RecentInteractions; // 0x394
	float BeaconMaxDist; // 0x3a4
	FVector BeaconOffset; // 0x3a8
	ObjectProperty BeaconTexture; // 0x3b4
	FLinearColor BeaconColor; // 0x3bc
	ObjectProperty AmbientSoundCue; // 0x3cc
	ComponentProperty AmbientSoundComponent; // 0x3d4
	ObjectProperty CurrentBehavior; // 0x3dc
	float CurrentBehaviorActivationTime; // 0x3e4
	TArray<FBehaviorEntry> EncounterAgentBehaviors; // 0x3e8
	TArray<FBehaviorEntry> SeePlayerBehaviors; // 0x3f8
	float MaxSeePlayerDistSq; // 0x408
	float SeePlayerInterval; // 0x40c
	TArray<FBehaviorEntry> SpawnBehaviors; // 0x410
	TArray<FBehaviorEntry> UneasyBehaviors; // 0x420
	TArray<FBehaviorEntry> AlertBehaviors; // 0x430
	TArray<FBehaviorEntry> PanicBehaviors; // 0x440
	TArray<FBehaviorEntry> RandomBehaviors; // 0x450
	TArray<FBehaviorEntry> TakeDamageBehaviors; // 0x460
	float RandomBehaviorInterval; // 0x470
	float ForceUpdateTime; // 0x474
	float ReachThreshold; // 0x478
	TArray<FBehaviorEntry> GroupWaitingBehaviors; // 0x47c
	float DesiredGroupRadius; // 0x48c
	float DesiredGroupRadiusSq; // 0x490
	float MaxLOSLifeDistanceSq; // 0x494
	TScriptInterface<Class> MySpawner; // 0x498
	FVector SpawnOffset; // 0x4a8
	float InitialLastRenderTime; // 0x4b4
	FColor DebugAgentColor; // 0x4b8
	ObjectProperty DebugSpawnDest; // 0x4bc
};

struct UCombatAwesomium : UObject {
	TArray<FAwesomiumInfo> AwesomiumList; // 0x60
	float AwesomiumDurationTime; // 0x70
	float AwesomiumLastTime; // 0x74
};

struct UAnimNodeSequenceBlendByAim : UAnimNodeSequenceBlendBase {
	FVector2D Aim; // 0x168
	FVector2D PreviousAim; // 0x170
	FVector2D HorizontalRange; // 0x178
	FVector2D VerticalRange; // 0x180
	FVector2D AngleOffset; // 0x188
	FName AnimName_LU; // 0x190
	FName AnimName_LC; // 0x198
	FName AnimName_LD; // 0x1a0
	FName AnimName_CU; // 0x1a8
	FName AnimName_CC; // 0x1b0
	FName AnimName_CD; // 0x1b8
	FName AnimName_RU; // 0x1c0
	FName AnimName_RC; // 0x1c8
	FName AnimName_RD; // 0x1d0
};

struct USeqAct_GetProperty : USequenceAction {
	FName PropertyName; // 0x108
};

struct UCombatFrontEnd_Object : UCombatFrontEnd_Base {
	uint32_t bPopUp : 1; // 0xcc
	uint32_t bDisplayed : 1; // 0xcc
};

struct UComponent : UObject {
	UObject* TemplateOwnerClass; // 0x60
	FName TemplateName; // 0x68
};

struct UMotionBlurEffect : UPostProcessEffect {
	float MaxVelocity; // 0x88
	float MotionBlurAmount; // 0x8c
	uint32_t FullMotionBlur : 1; // 0x90
	float CameraRotationThreshold; // 0x94
	float CameraTranslationThreshold; // 0x98
};

struct USeqAct_FeatureTest : USeqAct_Log {
	FString FreezeAtParameters; // 0x12c
	float ScreenShotDelay; // 0x13c
	FString ScreenShotName; // 0x140
	float RemainingScreenShotDelay; // 0x150
};

struct USeqAct_CombatBotSpawn : USeqAct_Latent {
	ACombatGuy_NPC* PawnClass; // 0x120
	ACombatBotController* ControllerClass; // 0x128
	int32_t SpawnCount; // 0x130
	TArray<ObjectProperty> SpawnPoints; // 0x134
	ObjectProperty BehaviorTree; // 0x144
	uint32_t bGiveDefaultInventory : 1; // 0x14c
	uint32_t bIsSpawning : 1; // 0x14c
	TArray<AInventory*> InventoryList; // 0x150
	float SpawnedDelay; // 0x160
	float LastSpawnedTime; // 0x164
	int32_t LastSpawnPointIndex; // 0x168
	int32_t SpawnedCount; // 0x16c
	int32_t DiedCount; // 0x170
};

struct USeqAct_MobileRemoveInputZone : USequenceAction {
	FString ZoneName; // 0x108
};

struct UAudioDevice : USubsystem {
	int32_t MaxChannels; // 0x68
	int32_t CommonAudioPoolSize; // 0x6c
	float LowPassFilterResonance; // 0x70
	float MinCompressedDurationEditor; // 0x74
	float MinCompressedDurationGame; // 0x78
	FString ChirpInSoundNodeWaveName; // 0x7c
	ObjectProperty ChirpInSoundNodeWave; // 0x8c
	FString ChirpOutSoundNodeWaveName; // 0x94
	ObjectProperty ChirpOutSoundNodeWave; // 0xa4
	FPointer CommonAudioPool; // 0xac
	int32_t CommonAudioPoolFreeBytes; // 0xb4
	TArray<ComponentProperty> AudioComponents; // 0xb8
	TArray<FPointer> Sources; // 0xc8
	TArray<FPointer> FreeSources; // 0xd8
	TMap<None, None> WaveInstanceSourceMap; // 0xe8
	uint32_t bGameWasTicking : 1; // 0x130
	uint32_t bSoundSpawningEnabled : 1; // 0x130
	TArray<FListener> Listeners; // 0x134
	FQWord CurrentTick; // 0x144
	TMap<None, None> SoundClasses; // 0x14c
	TMap<None, None> SourceSoundClasses; // 0x194
	TMap<None, None> CurrentSoundClasses; // 0x1dc
	TMap<None, None> DestinationSoundClasses; // 0x224
	TMap<None, None> SoundModes; // 0x26c
	FPointer Effects; // 0x2b4
	FName BaseSoundModeName; // 0x2bc
	ObjectProperty CurrentMode; // 0x2c4
	FDouble SoundModeStartTime; // 0x2cc
	FDouble SoundModeFadeInStartTime; // 0x2d4
	FDouble SoundModeFadeInEndTime; // 0x2dc
	FDouble SoundModeEndTime; // 0x2e4
	int32_t ListenerVolumeIndex; // 0x2ec
	FInteriorSettings ListenerInteriorSettings; // 0x2f0
	FDouble InteriorStartTime; // 0x314
	FDouble InteriorEndTime; // 0x31c
	FDouble ExteriorEndTime; // 0x324
	FDouble InteriorLPFEndTime; // 0x32c
	FDouble ExteriorLPFEndTime; // 0x334
	float InteriorVolumeInterp; // 0x33c
	float InteriorLPFInterp; // 0x340
	float ExteriorVolumeInterp; // 0x344
	float ExteriorLPFInterp; // 0x348
	ComponentProperty TestAudioComponent; // 0x34c
	FPointer TextToSpeech; // 0x354
	EDebugState DebugState; // 0x35c
	float TransientMasterVolume; // 0x360
	float LastUpdateTime; // 0x364
};

struct UCCSBTCombatPatrol : UCCSBTMoveToActor {
	float TargetSelectionCycleTime; // 0xc4
	float VisibleRange; // 0xc8
	ECCSSelectTargetAlgorithm TargetSelectionAlgorithm; // 0xcc
};

struct USeqAct_ModifyCover : USequenceAction {
	TArray<int32_t> Slots; // 0x108
	ECoverType ManualCoverType; // 0x118
	uint32_t bManualAdjustPlayersOnly : 1; // 0x11c
};

struct UUIDataProvider_PlayerAchievements : UUIDataProvider_OnlinePlayerDataBase {
	TArray<FAchievementDetails> Achievements; // 0x74
};

struct ACoverReplicator : AReplicationInfo {
	TArray<FCoverReplicationInfo> CoverReplicationData; // 0x244
};

struct ACombatGuy_Player : ACombatGuyBase {
	uint32_t bNeedAutoHeal : 1; // 0x1128
	uint32_t bPlayAutoHealStopEffect : 1; // 0x1128
	int32_t AddHealth; // 0x112c
	float AutoHealTime; // 0x1130
	int32_t AutoHealAmount; // 0x1134
	float MaxAutoHealHealthModifier; // 0x1138
	float AutoHealConditionTime; // 0x113c
	TArray<ObjectProperty> GrenadeIndicators; // 0x1140
	ACombatHandActor* HandActorClass; // 0x1150
	ObjectProperty HandActor; // 0x1158
	float DamageMultiplierForTest; // 0x1160
};

struct ACombatAIManager : AGripAIManagerHolder {
	TArray<FAITypeInfo> AITypeList; // 0x24c
	FString DefaultBotControllerClassName; // 0x25c
	uint32_t bUseFlocking : 1; // 0x26c
	ObjectProperty FlockingObj; // 0x270
	ObjectProperty GameInfo; // 0x278
	ACombatBotController* DefaultBotControllerClass; // 0x280
	TArray<FString> DebugCategoryList; // 0x288
	ObjectProperty CurDebugTarget; // 0x298
	TArray<ObjectProperty> BotList; // 0x2a0
	TArray<ObjectProperty> AIBeaconArray; // 0x2b0
};

struct ACombatEvolveGunGame : ACombatTDMGameBase {
	TArray<float> AddAmmoRatioByRankLower; // 0x78c
	ADroppedPickup* EvolvePointClass; // 0x79c
	TArray<FString> AllWeaponScriptName; // 0x7a4
	ObjectProperty SupplyManager; // 0x7b4
	TArray<FEvolveLevelInfo> WeaponLevelList; // 0x7bc
};

struct UParticleModuleAttractorSkelVertSurface : UParticleModuleAttractorBase {
	EVertSurfaceAttractorFalloffType FalloffType; // 0x68
	EAttractorSkelVertSurfaceDestination DestinationType; // 0x69
	uint32_t bParticleLifeRelative : 1; // 0x6c
	uint32_t bEnforceNormalCheck : 1; // 0x6c
	FRawDistributionFloat FalloffExponent; // 0x70
	FRawDistributionFloat Range; // 0x94
	FRawDistributionFloat Strength; // 0xb8
	FRawDistributionFloat CollisionRadius; // 0xdc
	FRawDistributionFloat DragCoefficient; // 0x100
	FRawDistributionFloat DragRadius; // 0x124
	FVector UniversalOffset; // 0x148
	FName SkelMeshActorParamName; // 0x154
	TArray<FName> ValidAssociatedBones; // 0x15c
	FVector NormalToCompare; // 0x16c
	float NormalCheckToleranceDegrees; // 0x178
	float NormalCheckTolerance; // 0x17c
	TArray<int32_t> ValidMaterialIndices; // 0x180
};

struct UCombatFrontEnd_ClanHome : UCombatFrontEnd_Scene {
	FString ClanMaster; // 0xd0
	int32_t MyUserID; // 0xe0
	int32_t MyGrade; // 0xe4
	int32_t SendUserID; // 0xe8
	int32_t SendGrade; // 0xec
	int32_t PopupState; // 0xf0
	ObjectProperty PopupClass; // 0xf4
	int32_t SelectedMatchTab; // 0xfc
	ObjectProperty DataStoreMission; // 0x100
	TArray<FClanMatchRecordData> MatchRecordList; // 0x108
	FPopupMenuStruct PopupMenuData[0xa]; // 0x118
	TArray<int32_t> PopupMenuIDs; // 0x168
	TArray<int32_t> SelfPopupMenuIDs; // 0x178
	TArray<int32_t> JoinPopupMenuIDs; // 0x188
};

struct UFluidInfluenceComponent : UPrimitiveComponent {
	uint32_t bActive : 1; // 0x250
	uint32_t RaindropFillEntireFluid : 1; // 0x250
	uint32_t bIsToggleTriggered : 1; // 0x250
	ObjectProperty FluidActor; // 0x254
	EInfluenceType InfluenceType; // 0x25c
	float MaxDistance; // 0x260
	float WaveStrength; // 0x264
	float WaveFrequency; // 0x268
	float WavePhase; // 0x26c
	float WaveRadius; // 0x270
	float RaindropAreaRadius; // 0x274
	float RaindropRadius; // 0x278
	float RaindropStrength; // 0x27c
	float RaindropRate; // 0x280
	float FlowSpeed; // 0x284
	int32_t FlowNumRipples; // 0x288
	float FlowSideMotionRadius; // 0x28c
	float FlowWaveRadius; // 0x290
	float FlowStrength; // 0x294
	float FlowFrequency; // 0x298
	float SphereOuterRadius; // 0x29c
	float SphereInnerRadius; // 0x2a0
	float SphereStrength; // 0x2a4
	float CurrentAngle; // 0x2a8
	float CurrentTimer; // 0x2ac
	ObjectProperty CurrentFluidActor; // 0x2b0
};

struct UPresetManager : UObject {
	FString PresetCode_First[0x9]; // 0x60
	FString PresetCode_Sec[0x9]; // 0xf0
	FString PresetCode_Third[0x9]; // 0x180
	FString PresetCode_Fourth[0x9]; // 0x210
	FPresetData PresetData_First[0x9]; // 0x2a0
	FPresetData PresetData_Sec[0x9]; // 0x39c
	FPresetData PresetData_Third[0x9]; // 0x498
	FPresetData PresetData_Fourth[0x9]; // 0x594
	TMap<None, None> TuningMap; // 0x690
	TArray<FString> ArmorData; // 0x6d8
	FAmmorInfo AmmorPoint; // 0x6e8
	TArray<FTestChangeWeaponType> PrimaryWeapon; // 0x6f4
	TArray<FTestChangeWeaponType> SubWeapon; // 0x704
	TArray<FTestChangeWeaponType> ArmorSet; // 0x714
	ObjectProperty TableDepot; // 0x724
	int32_t PresetData_ChaFXUpperItemID; // 0x72c
	int32_t PresetData_ChaFXFootItemID; // 0x730
	int32_t PresetData_C4TimeReduceItemID; // 0x734
	int32_t PresetData_SprayID; // 0x738
	int32_t PresetData_AccessoryID[0x6]; // 0x73c
	TArray<int32_t> SkillItemIndex; // 0x754
	int32_t GearSetItemIndex[0x3]; // 0x764
	TArray<AInventory*> InvListToPreventGC; // 0x770
};

struct UWindDirectionalSourceComponent : UActorComponent {
	FPointer SceneProxy; // 0x88
	float Strength; // 0x90
	float Phase; // 0x94
	float Frequency; // 0x98
	float Speed; // 0x9c
};

struct UCombatGameTrophyTouchComponent : UPrimitiveComponent {
	float MinRadius; // 0x250
	float MaxRadius; // 0x254
	float MinDegree_XYPlane; // 0x258
	float MaxDegree_XYPlane; // 0x25c
	int32_t SphereSides; // 0x260
};

struct UStaticMesh : UObject {
	TArray<FStaticMeshLODInfo> LODInfo; // 0x70
	float LODDistanceRatio; // 0x80
	float LODMaxRange; // 0x84
	int32_t LightMapResolution; // 0x98
	int32_t LightMapCoordinateIndex; // 0x9c
	TArray<ObjectProperty> Sockets; // 0xa0
	ObjectProperty BodySetup; // 0x108
	uint32_t UseSimpleLineCollision : 1; // 0x14c
	uint32_t UseSimpleBoxCollision : 1; // 0x150
	uint32_t UseSimpleRigidBodyCollision : 1; // 0x154
	uint32_t UseFullPrecisionUVs : 1; // 0x158
	uint32_t bUsedForInstancing : 1; // 0x15c
	int32_t ConsolePreallocateInstanceCount; // 0x160
	uint32_t bUseMaximumStreamingTexelRatio : 1; // 0x164
	uint32_t bPartitionForEdgeGeometry : 1; // 0x168
	uint32_t bCanBecomeDynamic : 1; // 0x16c
	uint32_t bStripComplexCollisionForConsole : 1; // 0x174
	uint32_t bPerLODStaticLightingForInstancing : 1; // 0x178
	float StreamingDistanceMultiplier; // 0x17c
};

struct UParticleModuleEventReceiverSpawn : UParticleModuleEventReceiverBase {
	FRawDistributionFloat SpawnCount; // 0x74
	uint32_t bUseParticleTime : 1; // 0x98
	uint32_t bUsePSysLocation : 1; // 0x98
	uint32_t bInheritVelocity : 1; // 0x98
	FRawDistributionVector InheritVelocityScale; // 0x9c
};

struct UParticleModuleSize : UParticleModuleSizeBase {
	FRawDistributionVector StartSize; // 0x68
};

struct ACombatPlayerReplicationInfo : ACombatPlayerReplicationInfoBase {
	float InGameCR; // 0x3a8
	float TotalGameCR; // 0x3ac
	uint32_t bChangedCR : 1; // 0x3b0
	uint32_t bAllSkillReady : 1; // 0x3b0
	uint32_t bIsLastman : 1; // 0x3b0
	uint32_t bSkillTest : 1; // 0x3b0
	uint32_t bDelayApplySkill : 1; // 0x3b0
	uint32_t bDelayApplyCooltime : 1; // 0x3b0
	uint32_t bChangedSkillOption : 1; // 0x3b0
	uint32_t bActiveUAV : 1; // 0x3b0
	uint32_t bSelectedMilitaryClass : 1; // 0x3b0
	uint32_t bClientReadyToPlay : 1; // 0x3b0
	uint32_t bNeedLoadGameKillCount : 1; // 0x3b0
	uint32_t bBestScorePlayer : 1; // 0x3b0
	uint32_t bBestKillPlayer : 1; // 0x3b0
	uint32_t bBestAssistPlayer : 1; // 0x3b0
	uint32_t bBestModeScorePlayer : 1; // 0x3b0
	uint32_t bChampionshipSettingDone : 1; // 0x3b0
	uint32_t bEnableChaFXItem : 1; // 0x3b0
	uint32_t bSessionConnected : 1; // 0x3b0
	WordProperty AccumulatedAssist; // 0x3b4
	int32_t pendingAssistCount; // 0x3b8
	WordProperty ScoreKills; // 0x3bc
	WordProperty SuicideCount; // 0x3be
	WordProperty HeadShotCount; // 0x3c0
	ObjectProperty RewardData; // 0x3c4
	int32_t LastKillTime; // 0x3cc
	int32_t RespawnCount; // 0x3d0
	char Rank; // 0x3d4
	char SavedActiveSkillOption[0x4]; // 0x3d5
	char bRepNotifySavedSkillOption; // 0x3d9
	char RepNotifyApplyInstanceItem; // 0x3da
	char RepNotifyApplyAccessoryItem; // 0x3db
	char RepNotifyAcceptSkillList; // 0x3dc
	char RepNotifyCoolTime; // 0x3dd
	char NotifySkillReset; // 0x3de
	MilitaryClassType MilitaryClass; // 0x3df
	char SortOrder; // 0x3e0
	char ChampionshipIndex; // 0x3e1
	char AccountGrade; // 0x3e2
	char WinRounds; // 0x3e3
	char LoseRounds; // 0x3e4
	char ActionAchievement[0xa]; // 0x3e5
	char ActionAchievement_StartIndex; // 0x3ef
	char ActionAchievement_EndIndex; // 0x3f0
	float RankExp; // 0x3f4
	FString RankName; // 0x3f8
	FString RankBigIconName; // 0x408
	FString RankSmallIconName; // 0x418
	int32_t RankBigIconImageID; // 0x428
	int32_t RankSmallIconImageID; // 0x42c
	FString OldRankBigIconName; // 0x430
	int32_t OldRankBigIconImageID; // 0x440
	ObjectProperty CombatClassSystem; // 0x444
	ObjectProperty SkillManager; // 0x44c
	ObjectProperty InstanceItemManager; // 0x454
	FString SkillManagerClassName; // 0x45c
	UCombatInstanceItem* InstanceItems[0x4]; // 0x46c
	UCombatAccessory_Base* AccessoryItem; // 0x48c
	int32_t AcceptSkillItemIndexList[0x10]; // 0x494
	int32_t RepNotifyPassiveSkillIndex; // 0x4d4
	FString SkillCoolTimeCodeName; // 0x4d8
	TArray<FString> CharClassInfoData; // 0x4e8
	UCBFamilyInfo* CurrCharClassInfo; // 0x4f8
	int32_t ChaFXUpperItemID; // 0x500
	int32_t ChaFXFootItemID; // 0x504
	int32_t RepC4TimeReduceItemID; // 0x508
	UCombatInstanceItem_C4TimeReduceKitBase* C4TimeReduceItemClass; // 0x50c
	int32_t ClanID; // 0x514
	int32_t PingWarnningCount; // 0x518
	int32_t MarkerID; // 0x51c
};

struct UGripActionNode_SelectAIBeacon : UCombatAIActionNodeBase {
	float MaxRange; // 0xf4
};

struct UCombatDataTableRefCompetitiveRewardPopup : UCombatDataTableType {
	int32_t PopupTableType; // 0x6c
	int32_t FirstTextID; // 0x70
	int32_t RewardToken; // 0x74
	int32_t RewardMedal; // 0x78
	int32_t RewardCodename[0x4]; // 0x7c
	uint32_t RewardCallingCard : 1; // 0x8c
	uint32_t RewardSpray : 1; // 0x8c
};

struct UCombatDominationMovie : UCombatSEIMovie {
	ObjectProperty TestMultiLineTF; // 0xadc
};

struct USeqEvent_Mover : USequenceEvent {
	float StayOpenTime; // 0x128
};

struct UOnlineStats : UObject {
	TArray<FStringIdToStringMapping> ViewIdMappings; // 0x60
};

struct USeqAct_PlayFaceFXAnim : USequenceAction {
	ObjectProperty FaceFXAnimSetRef; // 0x108
	FString FaceFXGroupName; // 0x110
	FString FaceFXAnimName; // 0x120
	ObjectProperty SoundCueToPlay; // 0x130
};

struct URB_ConstraintDrawComponent : UPrimitiveComponent {
	ObjectProperty LimitMaterial; // 0x250
};

struct USeqAct_ToggleCinematicMode : USequenceAction {
	uint32_t bDisableMovement : 1; // 0x108
	uint32_t bDisableTurning : 1; // 0x108
	uint32_t bHidePlayer : 1; // 0x108
	uint32_t bDisableInput : 1; // 0x108
	uint32_t bHideHUD : 1; // 0x108
	uint32_t bDeadBodies : 1; // 0x108
	uint32_t bDroppedPickups : 1; // 0x108
};

struct UParticleModuleOrbit : UParticleModuleOrbitBase {
	EOrbitChainMode ChainMode; // 0x6c
	FRawDistributionVector OffsetAmount; // 0x70
	FOrbitOptions OffsetOptions; // 0x94
	FRawDistributionVector RotationAmount; // 0x98
	FOrbitOptions RotationOptions; // 0xbc
	FRawDistributionVector RotationRateAmount; // 0xc0
	FOrbitOptions RotationRateOptions; // 0xe4
};

struct APickupFactory : ANavigationPoint {
	uint32_t bOnlyReplicateHidden : 1; // 0x33c
	uint32_t bPickupHidden : 1; // 0x33c
	uint32_t bPredictRespawns : 1; // 0x33c
	uint32_t bIsSuperItem : 1; // 0x33c
	uint32_t bRespawnPaused : 1; // 0x33c
	AInventory* InventoryType; // 0x340
	float RespawnEffectTime; // 0x348
	float MaxDesireability; // 0x34c
	ComponentProperty PickupMesh; // 0x350
	ObjectProperty ReplacementFactory; // 0x358
	ObjectProperty OriginalFactory; // 0x360
};

struct UParticleModuleLifetime : UParticleModuleLifetimeBase {
	FRawDistributionFloat Lifetime; // 0x68
};

struct USeqAct_ApplySoundNode : USequenceAction {
	ObjectProperty PlaySound; // 0x108
	ObjectProperty ApplyNode; // 0x110
};

struct AFileWriter : AInfo {
	FPointer ArchivePtr; // 0x244
	FString Filename; // 0x24c
	FWFileType FileType; // 0x25c
	uint32_t bFlushEachWrite : 1; // 0x260
	uint32_t bWantsAsyncWrites : 1; // 0x260
};

struct USeqVar_ObjectList : USeqVar_Object {
	char RandomObjectCount; // 0xc4
	TArray<ObjectProperty> ObjList; // 0xc8
};

struct ASceneCaptureReflectActor : ASceneCaptureActor {
	ComponentProperty StaticMesh; // 0x24c
	ObjectProperty ReflectMaterialInst; // 0x254
};

struct ATrigger : AActor {
	ComponentProperty CylinderComponent; // 0x244
	uint32_t bRecentlyTriggered : 1; // 0x24c
	uint32_t bDisplayHitEffects : 1; // 0x24c
	float AITriggerDelay; // 0x250
};

struct ACBWeaponAttachment_ShotGunBase : ACBWeaponAttachment {
	ObjectProperty OwnerShotgunWeapon; // 0x424
	int32_t SimulatedAccuracy; // 0x42c
};

struct UDirectionalLightComponent : ULightComponent {
	float TraceDistance; // 0x1a8
	float WholeSceneDynamicShadowRadius; // 0x1ac
	int32_t NumWholeSceneDynamicShadowCascades; // 0x1b0
	float CascadeDistributionExponent; // 0x1b4
	FLightmassDirectionalLightSettings LightmassSettings; // 0x1b8
};

struct UFogVolumeConeDensityComponent : UFogVolumeDensityComponent {
	float MaxDensity; // 0xd4
	FVector ConeVertex; // 0xd8
	float ConeRadius; // 0xe4
	FVector ConeAxis; // 0xe8
	float ConeMaxAngle; // 0xf4
	ComponentProperty PreviewCone; // 0xf8
};

struct UGameStateObject : UGameplayEventsHandler {
	FArray_Mirror TeamStates; // 0x88
	FArray_Mirror PlayerStates; // 0x98
	GameSessionType SessionType; // 0xa8
	uint32_t bIsMatchStarted : 1; // 0xac
	uint32_t bIsRoundStarted : 1; // 0xac
	int32_t RoundNumber; // 0xb0
	int32_t MaxRoundNumber; // 0xb4
};

struct UNetDriver : USubsystem {
	float ConnectionTimeout; // 0x9c
	float InitialConnectTimeout; // 0xa0
	float ConnectionTimeoutReal; // 0xa4
	float InitialConnectTimeoutReal; // 0xa8
	uint32_t DistributeNetUpdateTime : 1; // 0xac
	float KeepAliveTime; // 0xb0
	float RelevantTimeout; // 0xb4
	float SpawnPrioritySeconds; // 0xb8
	float ServerTravelPause; // 0xbc
	int32_t MaxClientRate; // 0xc0
	int32_t MaxInternetClientRate; // 0xc4
	int32_t NetServerMaxTickRate; // 0xc8
	uint32_t bClampListenServerTickRate : 1; // 0xcc
	uint32_t AllowDownloads : 1; // 0xd0
	uint32_t AllowPeerConnections : 1; // 0xd4
	uint32_t AllowPeerVoice : 1; // 0xd8
	int32_t MaxDownloadSize; // 0xf4
	TArray<FString> DownloadManagers; // 0xf8
	FString NetConnectionClassName; // 0x1a4
};

struct UGripBTCutoff : UGripBTNumericCondition {
	int32_t Cutoff; // 0xc8
};

struct UParticleModuleUberRainImpacts : UParticleModuleUberBase {
	FRawDistributionFloat Lifetime; // 0x78
	FRawDistributionVector StartSize; // 0x9c
	FRawDistributionVector StartRotation; // 0xc0
	uint32_t bInheritParent : 1; // 0xe4
	uint32_t MultiplyX : 1; // 0xe4
	uint32_t MultiplyY : 1; // 0xe4
	uint32_t MultiplyZ : 1; // 0xe4
	uint32_t bIsUsingCylinder : 1; // 0xe4
	uint32_t bPositive_X : 1; // 0xe4
	uint32_t bPositive_Y : 1; // 0xe4
	uint32_t bPositive_Z : 1; // 0xe4
	uint32_t bNegative_X : 1; // 0xe4
	uint32_t bNegative_Y : 1; // 0xe4
	uint32_t bNegative_Z : 1; // 0xe4
	uint32_t bSurfaceOnly : 1; // 0xe4
	uint32_t bVelocity : 1; // 0xe4
	uint32_t bRadialVelocity : 1; // 0xe4
	FRawDistributionVector LifeMultiplier; // 0xe8
	FRawDistributionFloat PC_VelocityScale; // 0x10c
	FRawDistributionVector PC_StartLocation; // 0x130
	FRawDistributionFloat PC_StartRadius; // 0x154
	FRawDistributionFloat PC_StartHeight; // 0x178
	CylinderHeightAxis PC_HeightAxis; // 0x19c
	FRawDistributionVector ColorOverLife; // 0x1a0
	FRawDistributionFloat AlphaOverLife; // 0x1c4
};

struct UCombatAnimNodeSequenceBlendBase : UAnimNodeSequenceBlendBase {
	int32_t DominantIdx; // 0x168
	float DominanceThreshold; // 0x16c
};

struct UForceFieldShapeCapsule : UForceFieldShape {
	ComponentProperty Shape; // 0x60
};

struct ACombatTDMMeleeModePRI : ACombatPlayerReplicationInfo {
	uint32_t bHasSpecialWeapon : 1; // 0x520
	uint32_t bLastHasSpecialWeapon : 1; // 0x520
};

struct UParticleModuleOrbitBase : UParticleModule {
	uint32_t bUseEmitterTime : 1; // 0x68
};

struct UAnimMetaData_SkelControl : UAnimMetaData {
	TArray<FName> SkelControlNameList; // 0x60
	uint32_t bFullControlOverController : 1; // 0x70
	FName SkelControlName; // 0x74
};

struct UCombatMeshBuilder : UObject {
	EMeshCompositionType MeshCompositionType; // 0x60
};

struct UGripConditionNode : UCCSBTScriptCondition {
	ObjectProperty ScriptBlackBoard; // 0xd4
	ObjectProperty Bot; // 0xdc
	ObjectProperty BotPawn; // 0xe4
};

struct ACombatSuicideVolume : AVolume {
	UDamageType* DamageType; // 0x280
};

struct ATargetPoint : AKeypoint {
	int32_t SpawnRefCount; // 0x24c
};

struct ACombatTrigger_Bomb : ACombatTrigger {
	FSExactLocationInfo C4ExactLocation; // 0x258
	int32_t BombID; // 0x264
	FName StateName; // 0x268
	int32_t BombPlantTime; // 0x270
	int32_t BombPlantTimeCount; // 0x274
	WordProperty BombDefuseTime; // 0x278
	WordProperty BombDefuseTimeCount; // 0x27a
	WordProperty BombTimeLimit; // 0x27c
	float DroppedPickupCoolTime; // 0x280
	ACombatWeapon* BombClass; // 0x284
	FVector SpawnLocation; // 0x28c
	FRotator SpawnRotation; // 0x298
	int32_t PlanterID; // 0x2a4
	ObjectProperty PlanterTeam; // 0x2a8
	ObjectProperty Planter; // 0x2b0
	ObjectProperty PlanterController; // 0x2b8
	ComponentProperty BombMesh; // 0x2c0
	ObjectProperty PlantedIndicatorMITV; // 0x2c8
	ObjectProperty DefusedIndicatorMITV; // 0x2d0
	ObjectProperty LensFlareMITV; // 0x2d8
	ObjectProperty DefaultIndicatorMaterial; // 0x2e0
	ComponentProperty LEDLensFEffect; // 0x2e8
	FBombIndicatorInfo IndicatorInfo[0x4]; // 0x2f0
	EBombIndicatorState IndicatorState; // 0x3b0
	EBombTickState LastTickState; // 0x3b1
	Team ObtainableTeam; // 0x3b2
	float TicTacCycleIntervalTime; // 0x3b4
	float TicTacCycleDeltaTime; // 0x3b8
	ObjectProperty ExplosionTemplate; // 0x3bc
	ObjectProperty DroppedSound; // 0x3c4
	ObjectProperty PickupSound; // 0x3cc
	ComponentProperty DefuseAC; // 0x3d4
	ObjectProperty DefuseStartSoundCue; // 0x3dc
	ObjectProperty DefuseSuccessSoundCue; // 0x3e4
	int32_t BombWeaponID; // 0x3ec
	float CylinderRadiusOnFalling; // 0x3f0
	float TossSpeed; // 0x3f4
	float TossZ; // 0x3f8
	FOutlineProperty OutlineColorForComrade; // 0x3fc
	FOutlineProperty OutlineColorForEnemy; // 0x438
	FOutlineProperty OutlineColorWhenPlanted; // 0x474
	ObjectProperty SavedInstigator; // 0x4b0
};

struct UGripBTDummyAction : UGripBTNode {
	BTExecutionResult NextExecutionResult; // 0xbc
	uint32_t NextPreConditionResult : 1; // 0xc0
	uint32_t Interruptible : 1; // 0xc0
	float Duration; // 0xc4
};

struct UGFxAction_Invoke : USequenceAction {
	ObjectProperty Movie; // 0x108
	FString MethodName; // 0x110
	TArray<FASValue> Arguments; // 0x120
};

struct ACombatSkillActor_UAV : ACombatDestroyableActor {
	ComponentProperty LightEnvironment; // 0x254
	uint32_t SmokingHot : 1; // 0x25c
	float DetectionArea; // 0x260
	float DetectionAreaSquare; // 0x264
	float DeathTime; // 0x268
	float SmokeThreshold; // 0x26c
	ObjectProperty ExploEmitter; // 0x270
	ObjectProperty SmokePSCTemplate; // 0x278
	ComponentProperty SmokePSC; // 0x280
	ComponentProperty IFF_Effect; // 0x288
	ObjectProperty IFF_FriendTemplate; // 0x290
	ObjectProperty IFF_FoeTemplate; // 0x298
};

struct AAIDebugCameraHUD : ADebugCameraHUD {
	int32_t CrossHairLength; // 0x568
	TArray<ObjectProperty> LadderVolumeArray; // 0x56c
	uint32_t bInit : 1; // 0x57c
};

struct UCombatDataTableRefSkillLicense : UCombatDataTableType {
	int32_t Index; // 0x6c
	int32_t GRADE; // 0x70
	FString LicenseCodeName; // 0x74
	FString ItemCodeName; // 0x84
};

struct ACombatBusterActor : ACombatStaticMeshActor {
	float HealthRatio; // 0x254
	int32_t Health; // 0x258
	uint32_t bIsActive : 1; // 0x25c
	uint32_t bIgnoreSameTeamDamage : 1; // 0x25c
	int32_t HealthMax; // 0x260
	int32_t CurrentHealth; // 0x264
	int32_t LastSubObjectIndex; // 0x268
	int32_t MissionActorArrayIndex; // 0x26c
	Team OwnerTeam; // 0x270
	MissionActorUIState UIState; // 0x271
	FOutlineProperty OutlineColorForComrade; // 0x274
	FOutlineProperty OutlineColorForEnemy; // 0x2b0
	ObjectProperty ExplosionTemplate; // 0x2ec
	TArray<FSubObjectInfo> SubObjectInfos; // 0x2f4
	int32_t UISortPriority; // 0x304
	ComponentProperty LightEnvironment; // 0x308
	TArray<FDamageInfo> DamageInfoList; // 0x310
	FString HumanReadableName; // 0x320
};

struct UFacebookWindows : UFacebookIntegration {
	FPointer VfTable_FTickableObject; // 0xe0
	FPointer ChildProcHandle; // 0xe8
};

struct USoundNodeAttenuationAndGain : USoundNode {
	uint32_t bAttenuate : 1; // 0x74
	uint32_t bSpatialize : 1; // 0x74
	uint32_t bAttenuateWithLPF : 1; // 0x74
	float dBAttenuationAtMax; // 0x78
	float OmniRadius; // 0x7c
	SoundDistanceModel GainDistanceAlgorithm; // 0x80
	SoundDistanceModel AttenuateDistanceAlgorithm; // 0x81
	ESoundDistanceCalc DistanceType; // 0x82
	float MinimalVolume; // 0x84
	float RadiusMin; // 0x88
	float RadiusPeak; // 0x8c
	float RadiusMax; // 0x90
	float LPFMinimal; // 0x94
	float LPFRadiusMin; // 0x98
	float LPFRadiusPeak; // 0x9c
	float LPFRadiusMax; // 0xa0
};

struct UParticleModuleLocationBoneSocket : UParticleModuleLocationBase {
	ELocationBoneSocketSource SourceType; // 0x68
	ELocationBoneSocketSelectionMethod SelectionMethod; // 0x69
	FVector UniversalOffset; // 0x6c
	TArray<FLocationBoneSocketInfo> SourceLocations; // 0x78
	uint32_t bUpdatePositionEachFrame : 1; // 0x88
	uint32_t bOrientMeshEmitters : 1; // 0x88
	uint32_t bInheritVelocityAtSpawn : 1; // 0x88
	FName SkelMeshActorParamName; // 0x8c
	float LastUpdateTime; // 0x94
};

struct UDistributionVectorParameterBase : UDistributionVectorConstant {
	FName ParameterName; // 0x90
	FVector MinInput; // 0x98
	FVector MaxInput; // 0xa4
	FVector MinOutput; // 0xb0
	FVector MaxOutput; // 0xbc
	DistributionParamMode ParamModes[0x3]; // 0xc8
};

struct USeqAct_ToggleConstraintDrive : USequenceAction {
	uint32_t bEnableAngularPositionDrive : 1; // 0x108
	uint32_t bEnableAngularVelocityDrive : 1; // 0x108
	uint32_t bEnableLinearPositionDrive : 1; // 0x108
	uint32_t bEnableLinearvelocityDrive : 1; // 0x108
};

struct UParticleModuleUberBase : UParticleModule {
	TArray<FName> RequiredModules; // 0x68
};

struct UCodecMovieFallback : UCodecMovie {
	float CurrentTime; // 0x64
};

struct UParticleModuleSizeScaleOverDensity : UParticleModuleSizeBase {
	FRawDistributionVector SizeScaleOverDensity; // 0x68
};

struct UTextureCube : UTexture {
	int32_t SizeX; // 0x11c
	int32_t SizeY; // 0x120
	EPixelFormat Format; // 0x124
	int32_t NumMips; // 0x128
	uint32_t bIsCubemapValid : 1; // 0x12c
	ObjectProperty FacePosX; // 0x130
	ObjectProperty FaceNegX; // 0x138
	ObjectProperty FacePosY; // 0x140
	ObjectProperty FaceNegY; // 0x148
	ObjectProperty FacePosZ; // 0x150
	ObjectProperty FaceNegZ; // 0x158
};

struct UInterpTrackMoveAxis : UInterpTrackFloatBase {
	EInterpMoveAxis MoveAxis; // 0xb8
	FInterpLookupTrack LookupTrack; // 0xbc
};

struct UAnimNodeBlendMultiBone : UAnimNodeBlendBase {
	TArray<FChildBoneBlendInfo> BlendTargetList; // 0x100
	TArray<char> SourceRequiredBones; // 0x110
};

struct UParticleModuleSubUVMovie : UParticleModuleSubUV {
	uint32_t bUseEmitterTime : 1; // 0x90
	FRawDistributionFloat FrameRate; // 0x94
	int32_t StartingFrame; // 0xb8
};

struct UGripBTFloatCondition : UGripBTNode {
	BTConditionOperator Operator; // 0xbc
	float Threshold; // 0xc0
	float Value; // 0xc4
};

struct UHeightFogComponent : UActorComponent {
	uint32_t bEnabled : 1; // 0x88
	uint32_t Low : 1; // 0x88
	uint32_t Medium : 1; // 0x88
	uint32_t High : 1; // 0x88
	float Height; // 0x8c
	float Density; // 0x90
	float LightBrightness; // 0x94
	FColor LightColor; // 0x98
	float ExtinctionDistance; // 0x9c
	float StartDistance; // 0xa0
	EDetailMode DetailMode; // 0xa4
};

struct UUIDataProvider_Settings : UUIPropertyDataProvider {
	ObjectProperty Settings; // 0x90
	uint32_t bIsAListRow : 1; // 0x98
};

struct ACombatLabelVolume : AVolume {
	int32_t LocationLabelID; // 0x280
	ObjectProperty NextLowerPriorityVolume; // 0x284
	float Priority; // 0x28c
};

struct UActorFactoryLensFlare : UActorFactory {
	ObjectProperty LensFlareObject; // 0x9c
};

struct USeqAct_SetObject : USeqAct_SetSequenceVariable {
	ObjectProperty DefaultValue; // 0x108
	ObjectProperty Value; // 0x110
};

struct UNavMeshPath_SameCoverLink : UNavMeshPathConstraint {
	ObjectProperty TestLink; // 0x78
};

struct UMaterialExpressionDepthBiasedAlpha : UMaterialExpression {
	uint32_t bNormalize : 1; // 0xb0
	float BiasScale; // 0xb4
	FExpressionInput Alpha; // 0xb8
	FExpressionInput Bias; // 0xec
};

struct UNavMeshGoalFilter_OutSideOfDotProductWedge : UNavMeshGoal_Filter {
	FVector Location; // 0x6c
	FVector Rotation; // 0x78
	float Epsilon; // 0x84
};

struct UInterpTrackBoolProp : UInterpTrack {
	TArray<FBoolTrackKey> BoolTrack; // 0xa0
	FName PropertyName; // 0xb0
};

struct UCombatHUD_Bomb : UCombatHUD_GameObject {
	ObjectProperty BombObject; // 0x1b0
	FName LastBombStateName; // 0x1b8
};

struct UPBRuleNodeQuad : UPBRuleNodeBase {
	ObjectProperty Material; // 0x70
	float RepeatMaxSizeX; // 0x78
	float RepeatMaxSizeZ; // 0x7c
	int32_t QuadLightmapRes; // 0x80
	float YOffset; // 0x84
	uint32_t bDisableMaterialRepeat : 1; // 0x88
};

struct ACombatAIPawn_SelfDestuctBase : ACombatWavePawnBase {
	ObjectProperty PS_DeathExplosion; // 0x1238
	ObjectProperty SC_DeathExplosion; // 0x1240
	UDamageType* DamageType_DeathExplosion; // 0x1248
	float Momentum_DeathExplosion; // 0x1250
	int32_t Damage_DeathExplosion; // 0x1254
	float DamageRadius_DeathExplosion; // 0x1258
	FString WeaponCodeName; // 0x125c
	int32_t WeaponID; // 0x126c
};

struct UCombatDataTableRefLimitSale : UCombatDataTableType {
	FString ItemCodeName; // 0x6c
	int32_t Level; // 0x7c
	int32_t LimitCount; // 0x80
};

struct ATeamInfo : AReplicationInfo {
	FString TeamName; // 0x244
	int32_t Size; // 0x254
	float Score; // 0x258
	int32_t TeamIndex; // 0x25c
	FColor TeamColor; // 0x260
};

struct UPMESTG_LeaveADecalBase : UParticleModuleEventSendToGame {
	UPhysicalMaterialPropertyBase* PhysicalMaterialPropertyClass; // 0x60
};

struct UGripBTBooleanCondition : UGripBTNode {
	uint32_t Negate : 1; // 0xbc
};

struct USVehicleWheel : UComponent {
	float Steer; // 0x70
	float MotorTorque; // 0x74
	float BrakeTorque; // 0x78
	float ChassisTorque; // 0x7c
	uint32_t bPoweredWheel : 1; // 0x80
	uint32_t bHoverWheel : 1; // 0x80
	uint32_t bCollidesVehicles : 1; // 0x80
	uint32_t bCollidesPawns : 1; // 0x80
	uint32_t bIsSquealing : 1; // 0x80
	uint32_t bWheelOnGround : 1; // 0x80
	float SteerFactor; // 0x84
	FName SkelControlName; // 0x88
	ObjectProperty WheelControl; // 0x90
	FName BoneName; // 0x98
	FVector BoneOffset; // 0xa0
	float WheelRadius; // 0xac
	float SuspensionTravel; // 0xb0
	float SuspensionSpeed; // 0xb4
	ObjectProperty WheelParticleSystem; // 0xb8
	EWheelSide Side; // 0xc0
	float LongSlipFactor; // 0xc4
	float LatSlipFactor; // 0xc8
	float HandbrakeLongSlipFactor; // 0xcc
	float HandbrakeLatSlipFactor; // 0xd0
	float ParkedSlipFactor; // 0xd4
	FVector WheelPosition; // 0xd8
	float SpinVel; // 0xe4
	float LongSlipRatio; // 0xe8
	float LatSlipAngle; // 0xec
	FVector ContactNormal; // 0xf0
	FVector LongDirection; // 0xfc
	FVector LatDirection; // 0x108
	float ContactForce; // 0x114
	float LongImpulse; // 0x118
	float LatImpulse; // 0x11c
	float DesiredSuspensionPosition; // 0x120
	float SuspensionPosition; // 0x124
	float CurrentRotation; // 0x128
	FPointer WheelShape; // 0x12c
	int32_t WheelMaterialIndex; // 0x134
	UParticleSystemComponent* WheelPSCClass; // 0x138
	ComponentProperty WheelParticleComp; // 0x140
	FName SlipParticleParamName; // 0x148
};

struct UPBRuleNodeEdgeMesh : UPBRuleNodeBase {
	float FlatThreshold; // 0x70
	float MainXPullIn; // 0x74
};

struct UCombatInstanceItem_C4TimeReduceKitBase : UCombatInstanceItem {
	int32_t ReducePlantTime; // 0x370
	int32_t ReduceDefuseTime; // 0x374
};

struct USeqAct_SetVectorComponents : USequenceAction {
	FVector OutVector; // 0x108
	float X; // 0x114
	float Y; // 0x118
	float Z; // 0x11c
};

struct USpeedTreeComponent : UPrimitiveComponent {
	ObjectProperty SpeedTree; // 0x250
	uint32_t bUseLeafCards : 1; // 0x258
	uint32_t bUseLeafMeshes : 1; // 0x258
	uint32_t bUseBranches : 1; // 0x258
	uint32_t bUseFronds : 1; // 0x258
	uint32_t bUseBillboards : 1; // 0x258
	float Lod3DStart; // 0x25c
	float Lod3DEnd; // 0x260
	float LodBillboardStart; // 0x264
	float LodBillboardEnd; // 0x268
	float LodLevelOverride; // 0x26c
	ObjectProperty Branch1Material; // 0x270
	ObjectProperty Branch2Material; // 0x278
	ObjectProperty FrondMaterial; // 0x280
	ObjectProperty LeafCardMaterial; // 0x288
	ObjectProperty LeafMeshMaterial; // 0x290
	ObjectProperty BillboardMaterial; // 0x298
	TArray<FSpeedTreeStaticLight> StaticLights; // 0x2a0
	FLightMapRef BranchLightMap; // 0x2b0
	FLightMapRef FrondLightMap; // 0x2b8
	FLightMapRef LeafMeshLightMap; // 0x2c0
	FLightMapRef LeafCardLightMap; // 0x2c8
	FLightMapRef BillboardLightMap; // 0x2d0
	FMatrix RotationOnlyMatrix; // 0x2e0
	FLightmassPrimitiveSettings LightmassSettings; // 0x320
};

struct UParticleModuleSizeScaleByDistance : UParticleModuleSizeBase {
	FRawDistributionVector SizeScaleByDistance; // 0x68
	uint32_t bEnableX : 1; // 0x8c
	uint32_t bEnableY : 1; // 0x8c
	uint32_t bEnableZ : 1; // 0x8c
	uint32_t bCalculatePerParticleDistance : 1; // 0x8c
};

struct USceneCapturePortalComponent : USceneCaptureComponent {
	ObjectProperty TextureTarget; // 0xd0
	float ScaleFOV; // 0xd8
	ObjectProperty ViewDestination; // 0xdc
};

struct UNxForceFieldTornadoComponent : UNxForceFieldComponent {
	float RadialStrength; // 0x2c0
	float RotationalStrength; // 0x2c4
	float LiftStrength; // 0x2c8
	float ForceRadius; // 0x2cc
	float ForceTopRadius; // 0x2d0
	float LiftFalloffHeight; // 0x2d4
	float EscapeVelocity; // 0x2d8
	float ForceHeight; // 0x2dc
	float HeightOffset; // 0x2e0
	uint32_t BSpecialRadialForceMode : 1; // 0x2e4
	float SelfRotationStrength; // 0x2e8
	FPointer Kernel; // 0x2ec
};

struct UCombatPlayerInput : UCombatPlayerInputBase {
	float LastDuckTime; // 0x2ec
	uint32_t bHoldDuck : 1; // 0x2f0
	uint32_t bAutoCenterPitch : 1; // 0x2f0
	uint32_t ToggleMoveTest : 1; // 0x2f0
	EDoubleClickDir ForcedDoubleClick; // 0x2f4
	float PitchAutoCenterSpeed; // 0x2f8
	float PitchAutoCenterSpeedRoadieRun; // 0x2fc
	float PitchAutoCenterDelay; // 0x300
	float DuckDelayTime; // 0x304
	float PitchAutoCenterDelayCount; // 0x308
	float PitchAutoCenterHorizonOffset; // 0x30c
	float ForcePitchCenteringSpeed; // 0x310
	float ForcedPitchCenteringHorizonOffset; // 0x314
	FVector2D PitchAutoCenterTargetPitchWindow; // 0x318
	float SprintTurnScale; // 0x320
	float SlidingTurnScale; // 0x324
	float MouseSensitivityMax; // 0x328
	float MouseSensitivityMin; // 0x32c
	float MouseSensitivityStep; // 0x330
	float WeaponMouseSens; // 0x334
	FsMouseSens PresetWeaponMouseSens[0x4]; // 0x338
	int32_t bForceWalk; // 0x3e8
	int32_t bForceLeft; // 0x3ec
	float ForceTurn; // 0x3f0
	float LastToggleChaFXItemTime; // 0x3f4
};

struct AMatineeActor : AActor {
	ObjectProperty InterpAction; // 0x244
	uint32_t bIsPlaying : 1; // 0x24c
	uint32_t bReversePlayback : 1; // 0x24c
	uint32_t bPaused : 1; // 0x24c
	uint32_t AllAIGroupsInitialized : 1; // 0x24c
	float PlayRate; // 0x250
	float Position; // 0x254
	FName AIGroupNames[0xa]; // 0x258
	ObjectProperty AIGroupPawns[0xa]; // 0x2a8
	int32_t AIGroupInitStage[0xa]; // 0x2f8
	float ClientSidePositionErrorTolerance; // 0x320
};

struct UMaterialExpressionLinearInterpolate : UMaterialExpression {
	FExpressionInput A; // 0xb0
	FExpressionInput B; // 0xe4
	FExpressionInput Alpha; // 0x118
};

struct UInterpTrackInstDirector : UInterpTrackInst {
	ObjectProperty OldViewTarget; // 0x60
	FRenderingPerformanceOverrides OldRenderingOverrides; // 0x68
};

struct UCombatProfileSettings : UOnlineProfileSettings {
	TArray<FString> DigitalButtonActionsToCommandMapping; // 0xd4
	TArray<FName> KeyMappingArray; // 0xe4
	TArray<FString> OptionMappingArray; // 0xf4
	TArray<FKeymapDatum> KeymapData; // 0x104
	TArray<FFiexdKeyCommandInfo> FiexdKeyCommandInfos; // 0x114
	TArray<int32_t> ReservedData; // 0x124
};

struct UMaterialExpressionTime : UMaterialExpression {
	uint32_t bIgnorePause : 1; // 0xb0
};

struct UMaterialInstanceTimeVarying : UMaterialInstance {
	uint32_t bAutoActivateAll : 1; // 0x29c
	float Duration; // 0x2a0
	float PlayRate; // 0x2a4
	TArray<FFontParameterValueOverTime> FontParameterValues; // 0x2a8
	TArray<FScalarParameterValueOverTime> ScalarParameterValues; // 0x2b8
	TArray<FTextureParameterValueOverTime> TextureParameterValues; // 0x2c8
	TArray<FVectorParameterValueOverTime> VectorParameterValues; // 0x2d8
	TArray<FLinearColorParameterValueOverTime> LinearColorParameterValues; // 0x2e8
};

struct USoundClass : UObject {
	FSoundClassProperties Properties; // 0x60
	TArray<FName> ChildClassNames; // 0x80
	uint32_t bIsChild : 1; // 0x90
	TMap<None, None> EditorData; // 0x94
};

struct UInGameAdManager : UPlatformInterfaceBase {
	uint32_t bShouldPauseWhileAdOpen : 1; // 0x80
};

struct UCombatDataTableRefMission : UCombatDataTableType {
	int32_t Index; // 0x6c
	FString CodeName; // 0x70
	FString DefaultModeCodename; // 0x80
	int32_t DisplayName; // 0x90
	FString DefaultModeGroupCodename; // 0x94
	int32_t OpenChannel; // 0xa4
	int32_t ImageID_Bg; // 0xa8
	FString OnlyChannelCodename; // 0xac
};

struct UParticleModuleColorByParameter : UParticleModuleColorBase {
	FName ColorParam; // 0x68
	FColor DefaultColor; // 0x70
};

struct ACombatSEIGamePC : ACombatPC {
	uint32_t bGainOccupiedPoint : 1; // 0xbe4
	uint32_t bShowLogSeizeScore : 1; // 0xbe4
	ObjectProperty CombatSEIPRI; // 0xbe8
};

struct UParticleModuleRotationRateMultiplyLife : UParticleModuleRotationRateBase {
	FRawDistributionFloat LifeMultiplier; // 0x68
};

struct UCombatDataTableRefModeGroup : UCombatDataTableType {
	FString CodeName; // 0x6c
	int32_t Index; // 0x7c
	FString BindMission; // 0x80
	FString DefaultMode; // 0x90
	int32_t SelectType; // 0xa0
	int32_t DisplayName; // 0xa4
	int32_t DisplayDescription; // 0xa8
	int32_t DisplayModeName; // 0xac
	int32_t ImageID_DisplayThumbnail; // 0xb0
	int32_t ImageID_BGThumbnail; // 0xb4
	int32_t ImageID_Title; // 0xb8
	int32_t ImageID_ModeThumbnail; // 0xbc
	int32_t MatchMakingID; // 0xc0
	int32_t RegionPingGroupID; // 0xc4
	uint32_t ShowLevel : 1; // 0xc8
	uint32_t ShowDeath : 1; // 0xc8
	uint32_t ShowRevenge : 1; // 0xc8
};

struct ACombatArmsRaceGameReplicationInfo : ACombatTDMGameReplicationInfo {
	int32_t TopKill[0x2]; // 0x380
	ObjectProperty VC_TopPRI; // 0x388
	ObjectProperty PM_TopPRI; // 0x390
};

struct UParticleModuleVelocityInheritParent : UParticleModuleVelocityBase {
	FRawDistributionVector Scale; // 0x6c
};

struct UMeshComponentFactory : UPrimitiveComponentFactory {
	TArray<ObjectProperty> Materials; // 0x64
};

struct UParticleModuleCollision : UParticleModuleCollisionBase {
	FRawDistributionVector DampingFactor; // 0x68
	FRawDistributionVector DampingFactorRotation; // 0x8c
	FRawDistributionFloat MaxCollisions; // 0xb0
	EParticleCollisionComplete CollisionCompletionOption; // 0xd4
	uint32_t bApplyPhysics : 1; // 0xd8
	uint32_t bPawnsDoNotDecrementCount : 1; // 0xd8
	uint32_t bOnlyVerticalNormalsDecrementCount : 1; // 0xd8
	uint32_t bDropDetail : 1; // 0xd8
	uint32_t bCollideOnlyIfVisible : 1; // 0xd8
	uint32_t bCollideWithWorld : 1; // 0xd8
	uint32_t bCollideWithWorldAttractors : 1; // 0xd8
	FRawDistributionFloat ParticleMass; // 0xdc
	float DirScalar; // 0x100
	float VerticalFudgeFactor; // 0x104
	FRawDistributionFloat DelayAmount; // 0x108
	float MaxCollisionDistance; // 0x12c
	TArray<FParticleAttractorCollisionAction> ParticleAttractorCollisionActions; // 0x130
};

struct UCombatAnimNodeAdditveBlending : UAnimNodeAdditiveBlending {
	uint32_t PlaySequenceOnRelevant : 1; // 0x114
};

struct UMaterialExpressionTextureSampleParameterCubeLOD : UMaterialExpressionTextureSampleParameterCube {
	float TextureLODFactor; // 0x140
	FExpressionInput LODFactor; // 0x144
};

struct USeqAct_ModifyHealth : USequenceAction {
	UDamageType* DamageType; // 0x108
	float Momentum; // 0x110
	float Amount; // 0x114
	float Radius; // 0x118
	uint32_t bHeal : 1; // 0x11c
	uint32_t bRadial : 1; // 0x11c
	uint32_t bFalloff : 1; // 0x11c
	ObjectProperty Instigator; // 0x120
};

struct UMobileMenuListItem : UMobileMenuElement {
	float Width; // 0x74
	float Height; // 0x78
};

struct UFogVolumeDensityComponent : UActorComponent {
	ObjectProperty FogMaterial; // 0x88
	ObjectProperty DefaultFogVolumeMaterial; // 0x90
	uint32_t bEnabled : 1; // 0x98
	uint32_t bAffectsTranslucency : 1; // 0x98
	uint32_t bOnlyAffectsTranslucency : 1; // 0x98
	FLinearColor SimpleLightColor; // 0x9c
	FLinearColor ApproxFogLightColor; // 0xac
	float StartDistance; // 0xbc
	float MaxDistance; // 0xc0
	TArray<ObjectProperty> FogVolumeActors; // 0xc4
};

struct USpeechRecognition : UObject {
	FString Language; // 0x60
	float ConfidenceThreshhold; // 0x70
	TArray<FRecogVocabulary> Vocabularies; // 0x74
	TArray<char> VoiceData; // 0x84
	TArray<char> WorkingVoiceData; // 0x94
	TArray<char> UserData; // 0xa4
	FRecogUserData InstanceData[0x4]; // 0xb4
	uint32_t bDirty : 1; // 0x104
	uint32_t bInitialised : 1; // 0x104
	FPointer FnxVoiceData; // 0x108
};

struct USimpleSplineAudioComponent : USplineAudioComponent {
	uint32_t bAttenuateWithLPF : 1; // 0x2b8
	float LPFRadiusMin; // 0x2bc
	float LPFRadiusMax; // 0x2c0
	float dBAttenuationAtMax; // 0x2c4
	float FlattenAttenuationRadius; // 0x2c8
	SoundDistanceModel DistanceAlgorithm; // 0x2cc
	float RadiusMin; // 0x2d0
	float RadiusMax; // 0x2d4
	TArray<FSplineSoundSlot> SoundSlots; // 0x2d8
	ObjectProperty NotifyBufferFinishedHook; // 0x2e8
};

struct UInterpTrackVectorProp : UInterpTrackVectorBase {
	FName PropertyName; // 0xb8
};

struct UFracturedBaseComponent : UStaticMeshComponent {
	FPointer ComponentBaseResources; // 0x2f4
	FRenderCommandFence_Mirror ReleaseResourcesFence; // 0x2fc
	TArray<char> VisibleFragments; // 0x300
	uint32_t bVisibilityHasChanged : 1; // 0x310
	uint32_t bVisibilityReset : 1; // 0x310
	uint32_t bInitialVisibilityValue : 1; // 0x310
	uint32_t bUseDynamicIndexBuffer : 1; // 0x310
	uint32_t bUseDynamicIBWithHiddenFragments : 1; // 0x310
	int32_t NumResourceIndices; // 0x314
	int32_t bResetStaticMesh; // 0x318
};

struct USeqVar_External : USequenceVariable {
	USequenceVariable* ExpectedType; // 0xa0
	FString VariableLabel; // 0xa8
};

struct UAnimationCompressionAlgorithm_RemoveLinearKeys : UAnimationCompressionAlgorithm {
	float MaxPosDiff; // 0x78
	float MaxAngleDiff; // 0x7c
	float MaxEffectorDiff; // 0x80
	float MinEffectorDiff; // 0x84
	float EffectorDiffSocket; // 0x88
	float ParentKeyScale; // 0x8c
	uint32_t bRetarget : 1; // 0x90
	uint32_t bActuallyFilterLinearKeys : 1; // 0x90
};

struct UAnimNotify_ClothingMaxDistanceScale : UAnimNotify {
	float StartScale; // 0x60
	float EndScale; // 0x64
	EMaxDistanceScaleMode ScaleMode; // 0x68
	float Duration; // 0x6c
};

struct AUSSPawn : APawn {
	FPointer VfTable_ICCSPawn; // 0x558
	ECCSMovementType MovementType; // 0x560
	ECCSAlertnessState AlertnessState; // 0x561
	ECCSCoverPose WantedCoverPose; // 0x562
	ECCSCoverPose CurrentCoverPose; // 0x563
	uint32_t bInCrouchedPosture : 1; // 0x564
	uint32_t bShouldCover : 1; // 0x564
	uint32_t bInCover : 1; // 0x564
	float CoverPct; // 0x568
	float CoverPoseBlendTimeOverride; // 0x56c
	FVector2D AimCurrentSkel; // 0x570
	FVector2D AimPitchRange; // 0x578
	FVector2D AimYawRange; // 0x580
	float MaxPitchSpeed; // 0x588
	float MaxYawSpeed; // 0x58c
	AUSSWeaponAttachment* CurrentWeaponAttachmentClass; // 0x590
	ObjectProperty CurrentWeaponAttachment; // 0x598
	float WeaponHeight; // 0x5a0
	ObjectProperty BloodParticleSystem; // 0x5a4
	TArray<ObjectProperty> AimNodes; // 0x5ac
};

struct UCCSBTCombatMelee : UGripBTScriptBehavior {
	ObjectProperty CAIP; // 0xcc
};

struct UCombatFrontEnd_Clan : UCombatFrontEnd_Scene {
	FString ReqClanName; // 0xd0
	int32_t RequiredMoney; // 0xe0
	ObjectProperty PopupClass; // 0xe4
};

struct ACombatWeaponBase_MiniGunBase : ACombatWeapon {
	ObjectProperty BarrelSpinningStartCue; // 0x1ec8
	ObjectProperty BarrelSpinningLoopCue; // 0x1ed0
	ObjectProperty BarrelSpinningStopCue; // 0x1ed8
	float SpinUpTime; // 0x1ee0
	float SpinDownTime; // 0x1ee4
	float SpinDownTime_ActiveCooling; // 0x1ee8
	float CurrentBarrelRotAccel; // 0x1eec
	float CurrentBarrelRotRate; // 0x1ef0
	float BarrelRotRateFiringThreshold; // 0x1ef4
	float MaxBarrelRotRate; // 0x1ef8
	ObjectProperty BarrelSkelCtrl; // 0x1efc
};

struct UMcpMessageBase : UMcpServiceBase {
	FString McpMessageManagerClassName; // 0x78
	EMcpMessageCompressionType CompressionType; // 0x88
	TArray<FMcpMessageContents> MessageContentsList; // 0x8c
	TArray<FMcpMessageList> MessageLists; // 0x9c
	DelegateProperty __OnCreateMessageComplete__Delegate; // 0xac
	DelegateProperty __OnDeleteMessageComplete__Delegate; // 0xbc
	DelegateProperty __OnQueryMessagesComplete__Delegate; // 0xcc
	DelegateProperty __OnQueryMessageContentsComplete__Delegate; // 0xdc
};

struct ALadderVolume : APhysicsVolume {
	FRotator WallDir; // 0x2d0
	FVector LookDir; // 0x2dc
	FVector ClimbDir; // 0x2e8
	ObjectProperty LadderList; // 0x2f4
	uint32_t bNoPhysicalLadder : 1; // 0x2fc
	uint32_t bAutoPath : 1; // 0x2fc
	uint32_t bAllowLadderStrafing : 1; // 0x2fc
	ObjectProperty PendingClimber; // 0x300
	ComponentProperty WallDirArrow; // 0x308
};

struct UParticleModuleLocationDirect : UParticleModuleLocationBase {
	FRawDistributionVector Location; // 0x68
	FRawDistributionVector LocationOffset; // 0x8c
	FRawDistributionVector ScaleFactor; // 0xb0
	FRawDistributionVector Direction; // 0xd4
};

struct UParticleModuleSize_Seeded : UParticleModuleSize {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x8c
};

struct USphericalHarmonicLightComponent : ULightComponent {
	FSHVectorRGB WorldSpaceIncidentLighting; // 0x1b0
	uint32_t bRenderBeforeModShadows : 1; // 0x240
};

struct UApexAsset : UObject {
	FString OriginalApexName; // 0x60
	TArray<ComponentProperty> ApexComponents; // 0x70
};

struct UCameraAnimInst : UObject {
	ObjectProperty CamAnim; // 0x60
	ObjectProperty InterpGroupInst; // 0x68
	float CurTime; // 0x70
	uint32_t bLooping : 1; // 0x74
	uint32_t bFinished : 1; // 0x74
	uint32_t bAutoReleaseWhenFinished : 1; // 0x74
	uint32_t bBlendingIn : 1; // 0x74
	uint32_t bBlendingOut : 1; // 0x74
	float BlendInTime; // 0x78
	float BlendOutTime; // 0x7c
	float CurBlendInTime; // 0x80
	float CurBlendOutTime; // 0x84
	float PlayRate; // 0x88
	float BasePlayScale; // 0x8c
	float TransientScaleModifier; // 0x90
	float CurrentBlendWeight; // 0x94
	float RemainingTime; // 0x98
	ObjectProperty MoveTrack; // 0x9c
	ObjectProperty MoveInst; // 0xa4
	ObjectProperty SourceAnimNode; // 0xac
	ECameraAnimPlaySpace PlaySpace; // 0xb4
	FMatrix UserPlaySpaceMatrix; // 0xc0
	FPostProcessSettings LastPPSettings; // 0x100
	float LastPPSettingsAlpha; // 0x264
	FVector LastCameraLoc; // 0x268
	float VelocityRate; // 0x274
};

struct UCombatHUD_ChampionshipPlayerInfoListContainer : UCombatHUDEntity_Base {
	ObjectProperty DefenseTeamListMC; // 0xc0
	ObjectProperty AttackTeamListMC; // 0xc8
	uint32_t bStopTimer : 1; // 0xd0
};

struct UGripCondNode_TargetVisible : UGripConditionNode {
	ECurAITarget CurAITarget; // 0xec
	uint32_t bNegative : 1; // 0xf0
};

struct UDistributionVector : UComponent {
	FPointer VfTable_FCurveEdInterface; // 0x70
	uint32_t bCanBeBaked : 1; // 0x78
	uint32_t bIsDirty : 1; // 0x78
};

struct UPBRuleNodeMesh : UPBRuleNodeBase {
	TArray<FBuildingMeshInfo> BuildingMeshes; // 0x70
	FBuildingMeshInfo PartialOccludedBuildingMesh; // 0x80
	uint32_t bDoOcclusionTest : 1; // 0xcc
	uint32_t bBlockAll : 1; // 0xcc
};

struct AGameReplicationInfo : AReplicationInfo {
	AGameInfo* GameClass; // 0x244
	uint32_t bStopCountDown : 1; // 0x24c
	uint32_t bMatchHasBegun : 1; // 0x24c
	uint32_t bMatchIsOver : 1; // 0x24c
	uint32_t bIsMatchInProgress : 1; // 0x24c
	WordProperty RemainingTime; // 0x250
	WordProperty ElapsedTime; // 0x252
	WordProperty RemainingMinute; // 0x254
	int32_t GoalScore; // 0x258
	int32_t TimeLimit; // 0x25c
	TArray<ObjectProperty> Teams; // 0x260
	FString ServerName; // 0x270
	ObjectProperty Winner; // 0x280
	TArray<ObjectProperty> PRIArray; // 0x288
	TArray<ObjectProperty> InactivePRIArray; // 0x298
};

struct UCombatAnimNodeSeqDirection : UCombatAnimNodeSequenceBlendBase {
	float BlendSpeed; // 0x170
	uint32_t Use8WayBlend : 1; // 0x174
	uint32_t bInterpolateWeights : 1; // 0x174
	float DirAngle; // 0x178
	float LastDirAngle; // 0x17c
	float LastRelevantTime; // 0x180
	float FullBwdThreshold; // 0x184
	float TooSlowSpeed; // 0x188
	TArray<float> TargetPlayRateData; // 0x18c
	ObjectProperty AOwner; // 0x19c
};

struct UImageReflectionComponent : UActorComponent {
	ObjectProperty ReflectionTexture; // 0x88
};

struct UGameMessage : ULocalMessage {
	FString SwitchLevelMessage; // 0x74
	FString LeftMessage; // 0x84
	FString FailedTeamMessage; // 0x94
	FString FailedPlaceMessage; // 0xa4
	FString FailedSpawnMessage; // 0xb4
	FString EnteredMessage; // 0xc4
	FString MaxedOutMessage; // 0xd4
	FString ArbitrationMessage; // 0xe4
	FString OvertimeMessage; // 0xf4
	FString GlobalNameChange; // 0x104
	FString NewTeamMessage; // 0x114
	FString NewTeamMessageTrailer; // 0x124
	FString NoNameChange; // 0x134
	FString VoteStarted; // 0x144
	FString VotePassed; // 0x154
	FString MustHaveStats; // 0x164
	FString CantBeSpectator; // 0x174
	FString CantBePlayer; // 0x184
	FString BecameSpectator; // 0x194
	FString NewPlayerMessage; // 0x1a4
	FString KickWarning; // 0x1b4
	FString NewSpecMessage; // 0x1c4
	FString SpecEnteredMessage; // 0x1d4
};

struct UCombatDataTableRefExchangeCash : UCombatDataTableType {
	int32_t Id; // 0x6c
	int32_t item_idx; // 0x70
	int32_t CashType; // 0x74
	int32_t Group; // 0x78
	int32_t Publisher; // 0x7c
	int32_t Value; // 0x80
	int32_t Price; // 0x84
	int32_t ValueTitle; // 0x88
	int32_t SalePrice; // 0x8c
	int32_t LimitBuyCount; // 0x90
	FString ItemCodeName; // 0x94
	int32_t SaleCategoryString; // 0xa4
	int32_t LobbyNotifierString; // 0xa8
	uint32_t PopupNotifier : 1; // 0xac
	FTimeData SaleTimeStart; // 0xb0
	FTimeData SaleTimeEnd; // 0xb8
	int32_t ReturnUserType; // 0xc0
	int32_t ClientID; // 0xc4
};

struct ASkeletalMeshActorBasedOnExtremeContent : ASkeletalMeshActor {
	TArray<FSkelMaterialSetterDatum> ExtremeContent; // 0x2a4
	TArray<FSkelMaterialSetterDatum> NonExtremeContent; // 0x2b4
};

struct ARB_RadialForceActor : ARigidBodyBase {
	ComponentProperty RenderComponent; // 0x244
	float ForceStrength; // 0x24c
	float ForceRadius; // 0x250
	float SwirlStrength; // 0x254
	float SpinTorque; // 0x258
	ERadialImpulseFalloff ForceFalloff; // 0x25c
	ERadialForceType RadialForceMode; // 0x25d
	uint32_t bForceActive : 1; // 0x260
	uint32_t bForceApplyToCloth : 1; // 0x260
	uint32_t bForceApplyToFluid : 1; // 0x260
	uint32_t bForceApplyToRigidBodies : 1; // 0x260
	uint32_t bForceApplyToProjectiles : 1; // 0x260
	FRBCollisionChannelContainer CollideWithChannels; // 0x264
};

struct UCombatStatStorage : UCombatStatStorageBase {
	FStatSaveCondition StatSaveCondition_ClanMode[0x4]; // 0x94
	FStatSaveCondition StatSaveCondition_Competitive[0x4]; // 0xa4
};

struct UMaterialExpressionTerrainLayerWeight : UMaterialExpression {
	FPointer InstanceOverride; // 0xb0
	FExpressionInput Base; // 0xb8
	FExpressionInput Layer; // 0xec
	FName ParameterName; // 0x120
	float PreviewWeight; // 0x128
	FGuid ExpressionGUID; // 0x12c
};

struct UMaterialExpressionFunctionInput : UMaterialExpression {
	FExpressionInput Preview; // 0xb0
	FString InputName; // 0xe4
	FString Description; // 0xf4
	FGuid Id; // 0x104
	EFunctionInputType InputType; // 0x114
	FVector4 PreviewValue; // 0x120
	uint32_t bUsePreviewValueAsDefault : 1; // 0x130
	uint32_t bCompilingFunctionPreview : 1; // 0x130
	int32_t SortPriority; // 0x134
};

struct ACombatPawn_FlyingVehicle : ACombatGuy_NPC {
	float TransformDamageRate; // 0x11f0
	DamageEffectStep TransformNum; // 0x11f4
	DamageEffectStep CurrentTransformNum; // 0x11f5
	ObjectProperty ExploEmitter; // 0x11f8
	ComponentProperty DamageEffectPSC; // 0x1200
	ObjectProperty DamageEffectPSCTemplate; // 0x1208
	FName DamageEffectSocketName; // 0x1210
	ObjectProperty ExplosionSound; // 0x1218
};

struct UAnimNodeMirror : UAnimNodeBlendBase {
	uint32_t bEnableMirroring : 1; // 0x100
};

struct APostProcessVolume : AVolume {
	float Priority; // 0x280
	uint32_t bOverrideWorldPostProcessChain : 1; // 0x284
	uint32_t bEnabled : 1; // 0x284
	FPostProcessSettings Settings; // 0x288
	ObjectProperty NextLowerPriorityVolume; // 0x3ec
};

struct UCombatDataTableRefItem : UCombatDataTableType {
	int32_t Index; // 0x6c
	int32_t ItemStringID; // 0x70
	int32_t ChaNameID; // 0x74
	int32_t ExclusiveMode; // 0x78
	int32_t RequireLevel; // 0x7c
	int32_t DetailOverall; // 0x80
	int32_t ItemGrade; // 0x84
	int32_t Decomposition; // 0x88
	int32_t ImageID_HUDWeaapon; // 0x8c
	int32_t ImageID_Lobby; // 0x90
	int32_t ImageID_Preset; // 0x94
	int32_t AbilityDescriptionID; // 0x98
	int32_t DescriptionID; // 0x9c
	int32_t ExtendPeriod; // 0xa0
	char Service; // 0xa4
	char Type1; // 0xa5
	char Type2; // 0xa6
	char Type3; // 0xa7
	char Type4; // 0xa8
	char RequireTarget; // 0xa9
	char StackCount; // 0xaa
	FString CodeName; // 0xac
	FString OriginalCodeName; // 0xbc
	FString PRIScriptFile; // 0xcc
	FString SUBScriptFile; // 0xdc
	FString PRIVoiceFile; // 0xec
	FString SUBVoiceFile; // 0xfc
	FString StackViewCodeName; // 0x10c
	FString OptionCode; // 0x11c
	FName PRIAttachmentWeapon; // 0x12c
	FName SUBAttachmentWeapon; // 0x134
	uint32_t bSteamItem : 1; // 0x13c
	FString ScriptPrePix; // 0x140
};

struct USeqAct_SubtractFloat : USeqAct_SetSequenceVariable {
	float ValueA; // 0x108
	float ValueB; // 0x10c
	float FloatResult; // 0x110
	int32_t IntResult; // 0x114
};

struct UDOFBloomMotionBlurEffect : UDOFAndBloomEffect {
	float MaxVelocity; // 0xdc
	float MotionBlurAmount; // 0xe0
	uint32_t FullMotionBlur : 1; // 0xe4
	float CameraRotationThreshold; // 0xe8
	float CameraTranslationThreshold; // 0xec
};

struct UActorFactoryTutorialAI : UCCSActorFactory {
	int32_t PawnNameLocalizationID; // 0x108
};

struct ACombatWaveFlyingVehicleBase : ACombatPawn_FlyingVehicle {
	FPointer VfTable_Iinterface_WavePawn; // 0x1220
	FWavePawnData WavePawnData; // 0x1228
};

struct UCombatAnimNotify_SpawnKActor : UAnimNotify {
	FName SocketName; // 0x60
	FName TargetBoneName; // 0x68
	ObjectProperty StaticMesh; // 0x70
	float LifeSpan; // 0x78
	uint32_t bSkipIfLowFrameRate : 1; // 0x7c
	AKActorSpawnable* KActorClass; // 0x80
	FVector KActorLinearVelocity; // 0x88
	FVector KActorAngularVelocity; // 0x94
	int32_t TargetBoneIndex; // 0xa0
	FMatrix SocketMatrix; // 0xb0
	ObjectProperty PreviewKActor; // 0xf0
	ComponentProperty PreviewSMC; // 0xf8
};

struct ACombatPatrolPoint : ANavigationPoint {
	int32_t Priority; // 0x33c
};

struct USeqAct_ModifyObjectList : USeqAct_SetSequenceVariable {
	int32_t ListEntriesCount; // 0x108
};

struct USkelControlWheel : USkelControlSingleBone {
	float WheelDisplacement; // 0x100
	float WheelMaxRenderDisplacement; // 0x104
	float WheelRoll; // 0x108
	EAxis WheelRollAxis; // 0x10c
	EAxis WheelSteeringAxis; // 0x10d
	float WheelSteering; // 0x110
	uint32_t bInvertWheelRoll : 1; // 0x114
	uint32_t bInvertWheelSteering : 1; // 0x114
};

struct ACombatFrontEndInfo : ACombatGameFrame {
	TArray<FSceneInfo> SceneList; // 0x4c0
	eFrontEndScene CurrentScene; // 0x4d0
	eFrontEndScene CurrentMainScene; // 0x4d1
	FName CurrentCameraName; // 0x4d4
	uint32_t bShowSceneMessege : 1; // 0x4dc
	float GameTitleDisplaySec; // 0x4e0
	float GameTitleDisplaySec_WithoutAge; // 0x4e4
	float LoadingSceneTime; // 0x4e8
	float LoadingSceneTimeLimit; // 0x4ec
};

struct UCombatDataTableRefPenalty : UCombatDataTableType {
	int32_t Idx; // 0x6c
	FString CodeName; // 0x70
	int32_t ApplyRunawayCount; // 0x80
	int32_t CountAlleviationMinute; // 0x84
};

struct UClipPadEntry : UObject {
	FString Title; // 0x60
	FString Text; // 0x70
};

struct UUIRoot : UObject {
	TArray<FString> BadCapsLocContexts; // 0x60
};

struct USeqAct_SetMaterial : USequenceAction {
	ObjectProperty NewMaterial; // 0x108
	int32_t MaterialIndex; // 0x110
};

struct UMaterialExpressionConstant2Vector : UMaterialExpression {
	float R; // 0xb0
	float G; // 0xb4
};

struct UInterpGroupInst : UObject {
	ObjectProperty Group; // 0x60
	ObjectProperty GroupActor; // 0x68
	TArray<ObjectProperty> TrackInst; // 0x70
	FPointer CachedCamOverridePostProcess; // 0x80
};

struct UGFxClikWidget : UGFxObject {
	DelegateProperty __EventListener__Delegate; // 0xa0
};

struct USeqAct_CombatSetGravity : USequenceAction {
	float Gravity; // 0x108
};

struct USeqEvent_SequenceActivated : USequenceEvent {
	FString InputLabel; // 0x128
};

struct UInterpTrackInstProperty : UInterpTrackInst {
	ObjectProperty PropertyUpdateCallback; // 0x60
	ObjectProperty PropertyOuterObjectInst; // 0x68
};

struct ACombatMinimapActor : AActor {
	ObjectProperty MiniMapTexture; // 0x244
	float OpacityRatio; // 0x24c
	uint32_t ShowEditorWidget : 1; // 0x250
	uint32_t PrimaryMinimap : 1; // 0x250
	uint32_t UseMinimapActorRadarRange : 1; // 0x250
	float RadarRange; // 0x254
	float WholeMapScaleVaule; // 0x258
	int32_t WholeMapVCTeamRotationVaule; // 0x25c
	int32_t WholeMapPMTeamRotationVaule; // 0x260
	int32_t WholeMapRotationVaule; // 0x264
	int32_t WorldSizeX; // 0x268
	int32_t WorldSizeY; // 0x26c
};

struct AGameCrowdAgentSM : AGameCrowdAgent {
	ComponentProperty Mesh; // 0x4c4
	ObjectProperty MeshColor; // 0x4cc
};

struct UCombatTeamGameMovie : UCombatGFxMoviePlayer {
	ObjectProperty myPC; // 0x308
	ObjectProperty myPRI; // 0x310
	ObjectProperty currentGRI; // 0x318
	ObjectProperty CharacterInfoMC; // 0x320
	int32_t LastCredit; // 0x328
	ObjectProperty WeaponInfoMC; // 0x32c
	ObjectProperty AimClass; // 0x334
	uint32_t bIsReloading : 1; // 0x33c
	uint32_t bIsChangingWeapon : 1; // 0x33c
	uint32_t bNeedTimeLimitUI : 1; // 0x33c
	uint32_t bIsDisplayedTimeLimit : 1; // 0x33c
	uint32_t bNeedClearRoundStatus : 1; // 0x33c
	uint32_t bShowRoundWinCount : 1; // 0x33c
	uint32_t bShowRoundPoint : 1; // 0x33c
	uint32_t bSupportRespawn : 1; // 0x33c
	uint32_t bIsDead : 1; // 0x33c
	uint32_t bIsMatchHasFinished : 1; // 0x33c
	ObjectProperty HitIndicatorMC; // 0x340
	FDirHit DirHits[0x7]; // 0x348
	float MaxDrawDirHitTime; // 0x3f0
	float UpdateDirHitTime; // 0x3f4
	ObjectProperty RoundStatusMC; // 0x3f8
	int32_t LastTeamPoint[0x2]; // 0x400
	int32_t LastTeamMemeber[0x2]; // 0x408
	int32_t LastWinRounds[0x2]; // 0x410
	int32_t LastRemainTime_Min; // 0x418
	int32_t LastRemainTime_Sec; // 0x41c
	ObjectProperty RespawnProgressBarMC; // 0x420
	ObjectProperty GlobalMessageMC; // 0x428
	ObjectProperty Message_PersonalMC; // 0x430
	ObjectProperty Message_Personal_AutoMC; // 0x438
	ObjectProperty IFFContainerClass; // 0x440
	ObjectProperty KillDeathListMC; // 0x448
	ObjectProperty OptionMenuClass; // 0x450
	ObjectProperty BlockAndReportClass; // 0x458
	ObjectProperty GameModeHelpClass; // 0x460
	TArray<FWeaponSimpleInfo> CachedWeaponSimpleInfos; // 0x468
	ObjectProperty ScoringListMC; // 0x478
	ObjectProperty ScoringRightMC; // 0x480
	ObjectProperty HelpImageMC; // 0x488
	ObjectProperty KillMarkMC; // 0x490
	ObjectProperty DamageBoardContainer; // 0x498
	FHitDamageInfo HitDamageInfos[0x14]; // 0x4a0
	ObjectProperty BombsiteContainer; // 0x6d0
	ObjectProperty MarkerContainer; // 0x6d8
	ObjectProperty DeviceCoolTimerMC; // 0x6e0
	ObjectProperty BombProgressBar; // 0x6e8
	ObjectProperty PresetWindowMC; // 0x6f0
	ObjectProperty PresetHelpMC; // 0x6f8
	ObjectProperty PresetTimerMC; // 0x700
	ObjectProperty PresetSelectWaitingMC; // 0x708
	int32_t ShowRervPresetTime; // 0x710
	ObjectProperty SpawnPointMC; // 0x714
	ObjectProperty ChattingMC; // 0x71c
	EUIChatType LastChatType; // 0x724
	char HUD_TickGroup; // 0x725
	ERoundCountType RoundCountType; // 0x726
	ObjectProperty RoundStartMC; // 0x728
	ObjectProperty CountDownMC; // 0x730
	ObjectProperty RoundOverMC; // 0x738
	ObjectProperty RadioMessageMC; // 0x740
	ObjectProperty MarkerMenuMC; // 0x748
	ObjectProperty WarmUpMC; // 0x750
	ObjectProperty CompetitionWarmUpMC; // 0x758
	ObjectProperty GrenadeIndicatorMC; // 0x760
	int32_t GI_DISPLAY_DISTANCE_MAX; // 0x768
	float GrenadeIndicator_Display_Update_Cycle; // 0x76c
	float GrenadeIndicator_Display_AccumulationTime; // 0x770
	ObjectProperty ObserverInfoMC; // 0x774
	ObjectProperty ObserverHelpMC; // 0x77c
	ObjectProperty DeathCamRecordMC; // 0x784
	ObjectProperty ChampionshipPlayerInfoListContainerMC; // 0x78c
	ObjectProperty ChampionshipSpectatedPlayerInfoMC; // 0x794
	ObjectProperty BattleLogMC; // 0x79c
	ObjectProperty SurrenderMC; // 0x7a4
	ObjectProperty KickUserSelectMC; // 0x7ac
	ObjectProperty SurrenderSelectPopupMC; // 0x7b4
	ObjectProperty TestTF_Right; // 0x7bc
	ObjectProperty RankUpMessageMC; // 0x7c4
	ObjectProperty TestMessageBoxMC; // 0x7cc
	ObjectProperty NoticeHotKeyMC; // 0x7d4
	ObjectProperty MagazineStateMC; // 0x7dc
	ObjectProperty SelectPositionMC; // 0x7e4
	ObjectProperty SelectSkillListMC; // 0x7ec
	ObjectProperty OccupationMsgMC; // 0x7f4
	ObjectProperty NoticePositionMC; // 0x7fc
	ObjectProperty ChangeTeamMC; // 0x804
	ObjectProperty VoiceChatPlayerMC; // 0x80c
	int32_t MAXPLAYERNUM; // 0x814
	int32_t MaxPlayerOfTeam; // 0x818
	float DamageBoardOffsetX; // 0x81c
	float DamageBoardOffsetY; // 0x820
	TArray<ObjectProperty> ControlUIObjects; // 0x824
	FPlayerStateEffectType PlayerStateEffects[0x7]; // 0x834
	FString InputExpireMsg; // 0x9a0
	TArray<FMapSymbolDescriptionInfo> GlogbalMapSymbolDescriptionInfos; // 0x9b0
	TArray<FMapSymbolDescriptionInfo> ForModeMapSymbolDescriptionInfos; // 0x9c0
	FClassIconStruct ClassIconList[0x4]; // 0x9d0
	int32_t FriendlyIFFMaxDistance; // 0xa70
	ObjectProperty TestBigTextField; // 0xa74
	int32_t CrosshairLegthMaxPercent; // 0xa7c
	TArray<FRoundConditionAudioComponentInfo> RoundConditionAudioComponents; // 0xa80
	ObjectProperty ChampionshipObserverDebugField; // 0xa90
	ObjectProperty TutorialDialog; // 0xa98
	ObjectProperty TutorialHelp; // 0xaa0
	ObjectProperty TutorialQuest; // 0xaa8
	ObjectProperty TutorialMessage; // 0xab0
	ObjectProperty StatusEffectMC; // 0xab8
	DelegateProperty __StateEffectVoid__Delegate; // 0xac0
};

struct ACombatTrigger : ATrigger {
	float InteractDistance; // 0x254
};

struct UScriptedTexture : UTextureRenderTarget2D {
	uint32_t bNeedsUpdate : 1; // 0x144
	uint32_t bSkipNextClear : 1; // 0x144
	DelegateProperty __Render__Delegate; // 0x148
};

struct UPlayerInput : UInput {
	uint32_t bUsingGamepad : 1; // 0x1a0
	uint32_t bInvertMouse : 1; // 0x1a0
	uint32_t bInvertTurn : 1; // 0x1a0
	uint32_t bWasForward : 1; // 0x1a0
	uint32_t bWasBack : 1; // 0x1a0
	uint32_t bWasLeft : 1; // 0x1a0
	uint32_t bWasRight : 1; // 0x1a0
	uint32_t bEdgeForward : 1; // 0x1a0
	uint32_t bEdgeBack : 1; // 0x1a0
	uint32_t bEdgeLeft : 1; // 0x1a0
	uint32_t bEdgeRight : 1; // 0x1a0
	uint32_t bEnableMouseSmoothing : 1; // 0x1a0
	uint32_t bEnableFOVScaling : 1; // 0x1a0
	uint32_t bLockTurnUntilRelease : 1; // 0x1a0
	FName LastAxisKeyName; // 0x1a4
	float DoubleClickTimer; // 0x1ac
	float DoubleClickTime; // 0x1b0
	float DoubleClickDelay; // 0x1b4
	float MouseSensitivity; // 0x1b8
	float aBaseX; // 0x1bc
	float aBaseY; // 0x1c0
	float aBaseZ; // 0x1c4
	float aMouseX; // 0x1c8
	float aMouseY; // 0x1cc
	float aForward; // 0x1d0
	float aTurn; // 0x1d4
	float aStrafe; // 0x1d8
	float aUp; // 0x1dc
	float aLookUp; // 0x1e0
	float aRightAnalogTrigger; // 0x1e4
	float aLeftAnalogTrigger; // 0x1e8
	float aPS3AccelX; // 0x1ec
	float aPS3AccelY; // 0x1f0
	float aPS3AccelZ; // 0x1f4
	float aPS3Gyro; // 0x1f8
	float aWiiUPointerX; // 0x1fc
	float aWiiUPointerY; // 0x200
	FVector aTilt; // 0x204
	FVector aRotationRate; // 0x210
	FVector aGravity; // 0x21c
	FVector aAcceleration; // 0x228
	FVector aTouch[0x5]; // 0x234
	FVector aBackTouch[0x5]; // 0x270
	float RawJoyUp; // 0x2ac
	float RawJoyRight; // 0x2b0
	float RawJoyLookRight; // 0x2b4
	float RawJoyLookUp; // 0x2b8
	float MoveForwardSpeed; // 0x2bc
	float MoveStrafeSpeed; // 0x2c0
	float LookRightScale; // 0x2c4
	float LookUpScale; // 0x2c8
	char bStrafe; // 0x2cc
	char bXAxis; // 0x2cd
	char bYAxis; // 0x2ce
	float ZeroTime[0x2]; // 0x2d0
	float SmoothedMouse[0x2]; // 0x2d8
	int32_t MouseSamples; // 0x2e0
	float MouseSamplingTotal; // 0x2e4
	float AutoUnlockTurnTime; // 0x2e8
};

struct ACombatBotController : ACCSController {
	FPointer VfTable_Iinterface_SplinePath; // 0x534
	uint32_t bCanTick : 1; // 0x53c
	uint32_t bHasCaller : 1; // 0x53c
	uint32_t FixedRotation : 1; // 0x53c
	uint32_t bWriteDamagedActorList : 1; // 0x53c
	int32_t AISpreadMin; // 0x540
	int32_t AISpreadRandom; // 0x544
	float DamageMultiflyer; // 0x548
	ObjectProperty CombatPawn; // 0x54c
	ObjectProperty CallerController; // 0x554
	ObjectProperty StartSplineActor; // 0x55c
	ObjectProperty GoalSplineActor; // 0x564
	TArray<ObjectProperty> SplineRoute; // 0x56c
	float PassedSplineLength; // 0x57c
	FVector SplineCenter; // 0x580
	FVector SplinePositionOffset; // 0x58c
	ESplineActorType SplineAIType; // 0x598
	TArray<ObjectProperty> AIActionList; // 0x59c
	ObjectProperty AIManager; // 0x5ac
	int32_t OverrideShotPerFireBurst; // 0x5b4
	TArray<FSDamagedActorInfo> DamagedActorList; // 0x5b8
	FPointer CCSBB; // 0x5c8
	ObjectProperty CurAIBeacon; // 0x5d0
	TArray<FSAIBeaconVisitInfo> AIBeaconVisitInfoArray; // 0x5d8
};

struct ALight : AActor {
	ComponentProperty LightComponent; // 0x244
	uint32_t bEnabled : 1; // 0x24c
};

struct UDynamicSpriteComponent : USpriteComponent {
	FInterpCurveFloat AnimatedScale; // 0x270
	FInterpCurveLinearColor AnimatedColor; // 0x284
	FInterpCurveVector2D AnimatedPosition; // 0x298
	FVector LocationOffset; // 0x2ac
	int32_t LoopCount; // 0x2b8
};

struct AGravityVolume : APhysicsVolume {
	float GravityZ; // 0x2d0
};

struct USeqAct_DelaySwitch : USeqAct_Latent {
	int32_t LinkCount; // 0x120
	int32_t CurrentIdx; // 0x124
	float SwitchDelay; // 0x128
	float NextLinkTime; // 0x12c
};

struct UMaterialExpressionParameter : UMaterialExpression {
	FName ParameterName; // 0xb0
	FGuid ExpressionGUID; // 0xb8
	FName Group; // 0xc8
};

struct UPBRuleNodeSubRuleset : UPBRuleNodeBase {
	ObjectProperty SubRuleset; // 0x70
};

struct UCombatDataTableRefChannelBindRegion : UCombatDataTableType {
	FString ChannelCodeName; // 0x6c
	int32_t ServiceRegionID; // 0x7c
};

struct UCombatDataTableRefEmblem : UCombatDataTableType {
	int32_t Id; // 0x6c
	int32_t ImageID; // 0x70
	FString Emblem_AssetName; // 0x74
};

struct UAnimNotify_Script : UAnimNotify {
	FName NotifyName; // 0x60
	FName NotifyTickName; // 0x68
	FName NotifyEndName; // 0x70
};

struct UUIDataProvider_MenuItem : UUIResourceDataProvider {
	EMenuOptionType OptionType; // 0x94
	TArray<FName> OptionSet; // 0x98
	FString DataStoreMarkup; // 0xa8
	FString DescriptionMarkup; // 0xb8
	FName RequiredGameMode; // 0xc8
	FString FriendlyName; // 0xd0
	FString CustomFriendlyName; // 0xe0
	FString Description; // 0xf0
	uint32_t bEditableCombo : 1; // 0x100
	uint32_t bNumericCombo : 1; // 0x100
	uint32_t bKeyboardOrMouseOption : 1; // 0x100
	uint32_t bOnlineOnly : 1; // 0x100
	uint32_t bOfflineOnly : 1; // 0x100
	uint32_t bSearchAllInis : 1; // 0x100
	uint32_t bRemoveOn360 : 1; // 0x100
	uint32_t bRemoveOnPC : 1; // 0x100
	uint32_t bRemoveOnPS3 : 1; // 0x100
	int32_t EditBoxMaxLength; // 0x104
	FUIRangeData RangeData; // 0x108
	TArray<FName> SchemaCellFields; // 0x11c
	FString IniName; // 0x12c
};

struct UCombatDataTableRefPeriodAttendReward : UCombatDataTableType {
	FString AttendCodeName; // 0x6c
	int32_t AttendDay; // 0x7c
	FString RewardCodename; // 0x80
};

struct USeqAct_SetState : USequenceAction {
	FString StateName; // 0x108
};

struct UPBRuleNodeRandom : UPBRuleNodeBase {
	int32_t NumOutputs; // 0x70
	int32_t MinNumExecuted; // 0x74
	int32_t MaxNumExecuted; // 0x78
};

struct UParticleModuleTypeDataBeam2 : UParticleModuleTypeDataBase {
	EBeam2Method BeamMethod; // 0x68
	EBeamTaperMethod TaperMethod; // 0x69
	int32_t TextureTile; // 0x6c
	float TextureTileDistance; // 0x70
	int32_t Sheets; // 0x74
	int32_t MaxBeamCount; // 0x78
	float Speed; // 0x7c
	int32_t InterpolationPoints; // 0x80
	uint32_t bAlwaysOn : 1; // 0x84
	uint32_t RenderGeometry : 1; // 0x84
	uint32_t RenderDirectLine : 1; // 0x84
	uint32_t RenderLines : 1; // 0x84
	uint32_t RenderTessellation : 1; // 0x84
	int32_t UpVectorStepSize; // 0x88
	FName BranchParentName; // 0x8c
	FRawDistributionFloat Distance; // 0x94
	FRawDistributionFloat TaperFactor; // 0xb8
	FRawDistributionFloat TaperScale; // 0xdc
};

struct ACombatWeapon_Guided_Weapon : ACombatWeapon_Skill_Weapon {
	ComponentProperty GuidedPSC; // 0x1ee8
	ObjectProperty SimulatingEffect; // 0x1ef0
	ObjectProperty TargetingEffect; // 0x1ef8
};

