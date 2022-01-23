// Created by BlueFire1337
// Updated 2022-01-20
// Generated 2022-01-23

#pragma once

struct FSplitscreenData {
	TArray<FPerPlayerSplitscreenData> PlayerData; // 0x0
};

struct FOnlineBannerInfo {
	int32_t Index; // 0x0
	FString ImageURL; // 0x4
	FString LinkURL; // 0x14
	ObjectProperty BannerImage; // 0x24
	EOnlineImageDownloadState load_state; // 0x2c
};

struct FDamageInfo {
	ObjectProperty Controller; // 0x0
	int32_t TotalDamage; // 0x8
};

struct FMinimapObjectIconInfo {
	uint32_t bShowWhenAttachedOutLine : 1; // 0x0
};

struct FSFireInfo {
	float StartTime; // 0x0
	ObjectProperty Weapon; // 0x4
	TArray<FSHitInfo> HitInfoArray; // 0xc
};

struct FPawnClassEventData {
	FName PawnClassName; // 0x0
};

struct FMcpMessageContents {
	FString MessageId; // 0x0
	TArray<char> MessageContents; // 0x10
};

struct FCoverReference : FActorReference {
	int32_t SlotIdx; // 0x18
};

struct FSAITypeInfo {
	int32_t AINameID; // 0x0
	FString AIPawnClassPath; // 0x4
	FString AIControllerClassPath; // 0x14
	TArray<FString> InventoryPathArray; // 0x24
	FString AIName; // 0x34
	ObjectProperty AIPRI; // 0x44
	ACombatGuy_NPC* AIPawnClass; // 0x4c
	ACombatBotController* AIControllerClass; // 0x54
};

struct FQWord {
	int32_t A; // 0x0
	int32_t B; // 0x4
};

struct FParameterValueOverTime {
	FGuid ExpressionGUID; // 0x0
	float StartTime; // 0x10
	FName ParameterName; // 0x14
	uint32_t bLoop : 1; // 0x1c
	uint32_t bAutoActivate : 1; // 0x1c
	float CycleTime; // 0x20
	uint32_t bNormalizeTime : 1; // 0x24
	float OffsetTime; // 0x28
	uint32_t bOffsetFromEnd : 1; // 0x2c
};

struct FObjectDamageModifier {
	FName DamageModName; // 0x0
	float HealthThreshold; // 0x8
	ObjectProperty NewMesh; // 0xc
	ComponentProperty LightingBuildComponent; // 0x14
	TArray<FMaterialReplaceMod> MaterialReplacements; // 0x1c
	TArray<FMaterialScalarParamMod> MaterialScalarParams; // 0x2c
	TArray<FMaterialTexParamMod> MaterialTexParams; // 0x3c
	TArray<FMaterialVectorParamMod> MaterialVectorParams; // 0x4c
	TArray<ObjectProperty> Sounds; // 0x5c
	uint32_t bSelfDestruct : 1; // 0x6c
	uint32_t bStopAmbientSound : 1; // 0x6c
	TArray<FDestroyedEffectParams> DestroyedEffects; // 0x70
	uint32_t bForceDisableAttachedCover : 1; // 0x80
	TArray<FActorSpawnParams> ActorsToSpawn; // 0x84
	FSplashDamageParams SplashDamage; // 0x94
	TArray<FObjDamageModifierDependency> DependentSubObjs; // 0xa8
	uint32_t bApplied : 1; // 0xb8
	int32_t NextSpawnActorIdx; // 0xbc
	uint32_t bDisableAllCover : 1; // 0xc0
	uint32_t bLowerAllCover : 1; // 0xc0
	FExplosionMod ExploMod; // 0xc4
	uint32_t bSelfDestructAll : 1; // 0xf4
};

struct FInvenItemInfo {
	int32_t FirstSlotIndex; // 0x0
	int32_t ItemIndex; // 0x4
	int32_t RentalTime; // 0x8
	uint32_t bIsRandomBox : 1; // 0xc
	uint32_t bIsNew : 1; // 0xc
	int32_t EquipState; // 0x10
	int32_t ItemState; // 0x14
	FString StackViewCodeName; // 0x18
	TArray<int32_t> SlotList; // 0x28
};

struct FPendingClientAuth {
	ObjectProperty ClientConnection; // 0x0
	FUniqueNetId ClientUID; // 0x8
	float AuthTimestamp; // 0x10
	int32_t AuthRetryCount; // 0x14
};

struct FCheckpointRecord {
	uint32_t bCollideActors : 1; // 0x0
};

struct FGeomSelection {
	int32_t Type; // 0x0
	int32_t Index; // 0x4
	int32_t SelectionIndex; // 0x8
};

struct FTitleFileCacheEntry : FTitleFile {
	FString LogicalName; // 0x24
	FString Hash; // 0x34
	ETitleFileFileOp FileOp; // 0x44
	FPointer Ar; // 0x48
};

struct FOptionKeyBindingInfo {
	int32_t Id; // 0x0
	FString Command; // 0x4
	int32_t LabelID; // 0x14
	uint32_t bAlert : 1; // 0x18
	int32_t SelectedKeyCode; // 0x1c
	int32_t OldSelectedKeyCode; // 0x20
};

struct FDialogLocalizingData {
	int32_t TitleId; // 0x0
	int32_t MessageId; // 0x4
	int32_t InputID; // 0x8
	int32_t OKBtnLabelID; // 0xc
	int32_t CancelBtnLabelID; // 0x10
	int32_t MaxChar; // 0x14
	FString Title; // 0x18
	FString Message; // 0x28
	FString Input; // 0x38
	FString OKBtnLabel; // 0x48
	FString CancelBtnLabel; // 0x58
};

struct FRecoilDef {
	float TimeToGo; // 0x0
	float TimeDuration; // 0x4
	FVector RotAmplitude; // 0x8
	FVector RotFrequency; // 0x14
	FVector RotSinOffset; // 0x20
	FRecoilParams RotParams; // 0x2c
	FRotator RotOffset; // 0x30
	FVector LocAmplitude; // 0x3c
	FVector LocFrequency; // 0x48
	FVector LocSinOffset; // 0x54
	FRecoilParams LocParams; // 0x60
	FVector LocOffset; // 0x64
};

struct FInstancedStaticMeshMappingInfo {
	FPointer Mapping; // 0x0
	FPointer LightMap; // 0x8
	ObjectProperty LightmapTexture; // 0x10
	ObjectProperty ShadowmapTexture; // 0x18
};

struct FSystemCountInfo {
	E_SYSTEM_COUNT_TYPE _Type; // 0x0
	int32_t _Value; // 0x4
	uint32_t _bUpdate : 1; // 0x8
	FString _Text; // 0xc
};

struct FInterpCurvePointTwoVectors {
	float InVal; // 0x0
	FTwoVectors OutVal; // 0x4
	FTwoVectors ArriveTangent; // 0x1c
	FTwoVectors LeaveTangent; // 0x34
	EInterpCurveMode InterpMode; // 0x4c
};

struct FParticleEventData {
	int32_t Type; // 0x0
	FName EventName; // 0x4
	float EmitterTime; // 0xc
	FVector Location; // 0x10
	FVector Direction; // 0x1c
	FVector Velocity; // 0x28
};

struct FOccupyDataType {
	EOccupyState OccupyState; // 0x0
	int32_t OccupyingTeamIndex; // 0x4
};

struct FBehaviorEntry {
	ObjectProperty BehaviorArchetype; // 0x0
	ObjectProperty LookAtActor; // 0x8
	float BehaviorFrequency; // 0x10
	uint32_t bNeverRepeat : 1; // 0x14
	uint32_t bHasBeenUsed : 1; // 0x14
	uint32_t bCanBeUsed : 1; // 0x14
};

struct FAnimTag {
	FString Tag; // 0x0
	TArray<FString> Contains; // 0x10
};

struct FAnimSetMeshLinkup {
	TArray<int32_t> BoneToTrackTable; // 0x0
};

struct FRandomBoxGainResultInfo {
	int32_t RefRandomBoxID; // 0x0
	TArray<FRandomBoxGainItemInfo> GainItemList; // 0x4
};

struct FLightmassMaterialInterfaceSettings {
	uint32_t bCastShadowAsMasked : 1; // 0x0
	float EmissiveBoost; // 0x4
	float DiffuseBoost; // 0x8
	float SpecularBoost; // 0xc
	float ExportResolutionScale; // 0x10
	float DistanceFieldPenumbraScale; // 0x14
	uint32_t bOverrideCastShadowAsMasked : 1; // 0x18
	uint32_t bOverrideEmissiveBoost : 1; // 0x18
	uint32_t bOverrideDiffuseBoost : 1; // 0x18
	uint32_t bOverrideSpecularBoost : 1; // 0x18
	uint32_t bOverrideExportResolutionScale : 1; // 0x18
	uint32_t bOverrideDistanceFieldPenumbraScale : 1; // 0x18
};

struct FExplosionDamageAdjustment {
	EHitBodyType BodyType; // 0x0
	float DamageRatio; // 0x4
};

struct FActiveMorph {
	ObjectProperty Target; // 0x0
	float Weight; // 0x8
};

struct FMyMoneyStruct {
	int32_t MoneyType; // 0x0
	FString IconImagePath; // 0x4
	int32_t LastMoney; // 0x14
	int32_t TooltipID; // 0x18
	uint32_t bIsRefresh : 1; // 0x1c
	uint32_t bIsCharge : 1; // 0x1c
	int32_t RefreshTooltipID; // 0x20
	int32_t ChargeTooltipID; // 0x24
};

struct FTerrainFilteredMaterial {
	uint32_t UseNoise : 1; // 0x0
	float NoiseScale; // 0x4
	float NoisePercent; // 0x8
	FFilterLimit MinHeight; // 0xc
	FFilterLimit MaxHeight; // 0x1c
	FFilterLimit MinSlope; // 0x2c
	FFilterLimit MaxSlope; // 0x3c
	float Alpha; // 0x4c
	ObjectProperty Material; // 0x50
};

struct FParticleEvent_GenerateInfo {
	EParticleEventType Type; // 0x0
	int32_t Frequency; // 0x4
	int32_t LowFreq; // 0x8
	int32_t ParticleFrequency; // 0xc
	uint32_t FirstTimeOnly : 1; // 0x10
	uint32_t LastTimeOnly : 1; // 0x10
	uint32_t UseReflectedImpactVector : 1; // 0x10
	FName CustomName; // 0x14
	TArray<ObjectProperty> ParticleModuleEventsToSendToGame; // 0x1c
};

struct FMeleeAttackFactor {
	WordProperty MeleeDamage_Max; // 0x0
	float MeleeRange; // 0x4
	float MeleeHitMomemtum; // 0x8
	float MeleeHitMomemtumZ; // 0xc
	float MeleeHitedMomemtum; // 0x10
	uint32_t AutoFire : 1; // 0x14
	uint32_t bArcFire : 1; // 0x14
	TArray<float> ArcSectAnimHitTimes; // 0x18
	EWeaponArcBrandishDir ArcBrandishDir; // 0x28
	float ArcAngleDegree; // 0x2c
};

struct FMaterialSet {
	TArray<ObjectProperty> Materials; // 0x0
	TArray<int32_t> MaterialPackageIndex; // 0x10
	TArray<FString> PackageName; // 0x20
};

struct FPhysXVerticalProperties {
	FPhysXEmitterVerticalProperties Emitters; // 0x0
};

struct FCharacterLightmapInfo {
	float LitIndirectBrightness; // 0x0
	float LitIndirectContrastFactor; // 0x4
	float ShadowedIndirectBrightness; // 0x8
	float ShadowedIndirectContrastFactor; // 0xc
	float LightingContrastFactor; // 0x10
	float LightingDesaturation; // 0x14
};

struct FSeqOpOutputInputLink {
	ObjectProperty LinkedOp; // 0x0
	int32_t InputLinkIdx; // 0x8
};

struct FCompartmentRunList {
	uint32_t RigidBody : 1; // 0x0
	uint32_t Fluid : 1; // 0x0
	uint32_t Cloth : 1; // 0x0
	uint32_t SoftBody : 1; // 0x0
};

struct FMaterialTexParamMod {
	ObjectProperty MatInst; // 0x0
	FName ParamName; // 0x8
	ObjectProperty NewTexture; // 0x10
};

struct FCheatPawnInfo {
	int32_t Number; // 0x0
	char Team; // 0x4
	uint32_t bIsCrouched : 1; // 0x8
	EPhysics Physics; // 0xc
	FVector Location; // 0x10
	FRotator Rotation; // 0x1c
	AWeapon* Weapon; // 0x28
	UCBFamilyInfo* FamilyInfo; // 0x30
	UCombatInstanceItem_ArmorBase* InstanceItemInfo; // 0x38
	FArmorPointStruct AP_Buff[0x12]; // 0x40
	int32_t APForExplosion_Buff; // 0x310
	int32_t AmmorItemGrade; // 0x314
	uint32_t bFxOn : 1; // 0x318
	int32_t FXUpperItemIndex; // 0x31c
	int32_t FXFootItemIndex; // 0x320
};

struct FLUTBlender {
	TArray<ObjectProperty> LUTTextures; // 0x0
	TArray<float> LUTWeights; // 0x10
	uint32_t bHasChanged : 1; // 0x20
};

struct FTimeModifier {
	float Time; // 0x0
	float TargetStrength; // 0x4
};

struct FNotifySoundInfo {
	FName NotifyName; // 0x0
	ObjectProperty NotifySound; // 0x8
};

struct FBaseAuthSession {
	int32_t EndPointIP; // 0x0
	int32_t EndPointPort; // 0x4
	FUniqueNetId EndPointUID; // 0x8
};

struct FKismetDrawTextInfo {
	FString MessageText; // 0x0
	FString AppendedText; // 0x10
	ObjectProperty MessageFont; // 0x20
	FVector2D MessageFontScale; // 0x28
	FVector2D MessageOffset; // 0x30
	FColor MessageColor; // 0x38
	float MessageEndTime; // 0x3c
};

struct FQuestInfoData {
	int32_t QuestID; // 0x0
	int32_t QuestType; // 0x4
	int32_t QuestCurrentScore; // 0x8
	int32_t QuestCurrentStep; // 0xc
	char FirstQuest; // 0x10
	uint32_t bReceiveReward : 1; // 0x14
	char RewardStep; // 0x18
	TArray<char> RewardItemStep; // 0x1c
	uint32_t bIsQuestActive : 1; // 0x2c
};

struct FMergedMeshList {
	TArray<FMergedMeshCacheDatum> MeshList; // 0x0
};

struct FQueryMappingRequest {
	FString ExternalType; // 0x0
	ObjectProperty Request; // 0x10
};

struct FS_BaseItemInfo {
	int32_t ItemID; // 0x0
	int32_t PresetIndex; // 0x4
	ObjectProperty RefItem; // 0x8
	int32_t EquipSlot; // 0x10
	FString ItemName; // 0x14
	int32_t SlotIndex; // 0x24
};

struct FEventData {
	ObjectProperty _this; // 0x0
	ObjectProperty Target; // 0x8
	FString Type; // 0x10
	int32_t Data; // 0x20
	int32_t mouseIndex; // 0x24
	int32_t Button; // 0x28
	int32_t Index; // 0x2c
	int32_t lastIndex; // 0x30
	int32_t Id; // 0x34
};

struct FNavigationOctreeObject {
	FBox BoundingBox; // 0x0
	FVector BoxCenter; // 0x1c
	FPointer OctreeNode; // 0x28
	ObjectProperty Owner; // 0x30
	char OwnerType; // 0x38
};

struct FOutlineMangedInfo {
	int32_t ManagedID; // 0x0
	TArray<FName> CurrentOutlineEventName; // 0x4
	FGlobalOutlineEvent OverrideOutlineEventData; // 0x14
};

struct FPlaylistPopulation {
	int32_t PlaylistId; // 0x0
	int32_t WorldwideTotal; // 0x4
	int32_t RegionTotal; // 0x8
};

struct FRandomBoxOpenData {
	int32_t box_item_id; // 0x0
	int32_t old_open_count; // 0x4
	int32_t open_count; // 0x8
	int32_t old_open_bonus; // 0xc
	int32_t open_bonus; // 0x10
	int32_t total_open_count; // 0x14
	int32_t normal_jackpot_count; // 0x18
	int32_t guarantee_jackpot_count; // 0x1c
	int32_t bonus_jackpot_count; // 0x20
};

struct FShopItemInfo {
	ObjectProperty refShopItem; // 0x0
	FString CodeName; // 0x8
	FString ItemName; // 0x18
	int32_t ReferenceIndex; // 0x28
	int32_t Mainprice; // 0x2c
	int32_t PriceType; // 0x30
	uint32_t IsSelectedRepurchaseItem : 1; // 0x34
};

struct FLightValues {
	float StartTime; // 0x0
	float Radius; // 0x4
	float Brightness; // 0x8
	FColor LightColor; // 0xc
};

struct FDisplayPawnInfo {
	int32_t PlayerID; // 0x0
	FVector Location; // 0x4
	int32_t Rotation; // 0x10
	uint32_t bIsSameTeam : 1; // 0x14
	float RegisterTime; // 0x18
};

struct FSoundNodeEditorData {
	int32_t NodePosX; // 0x0
	int32_t NodePosY; // 0x4
};

struct FReverbSettings {
	uint32_t bApplyReverb : 1; // 0x0
	ReverbPreset ReverbType; // 0x4
	float Volume; // 0x8
	float FadeTime; // 0xc
};

struct FOnlineArbitrationRegistrant : FOnlineRegistrant {
	FQWord MachineId; // 0x8
	int32_t Trustworthiness; // 0x10
};

struct FSettingsData {
	ESettingsDataType Type; // 0x0
	int32_t Value1; // 0x4
	FPointer Value2; // 0x8
};

struct FSoundClassProperties {
	float Volume; // 0x0
	float Pitch; // 0x4
	float StereoBleed; // 0x8
	float LFEBleed; // 0xc
	float VoiceCenterChannelVolume; // 0x10
	float RadioFilterVolume; // 0x14
	float RadioFilterVolumeThreshold; // 0x18
	uint32_t bApplyEffects : 1; // 0x1c
	uint32_t bAlwaysPlay : 1; // 0x1c
	uint32_t bIsUISound : 1; // 0x1c
	uint32_t bIsMusic : 1; // 0x1c
	uint32_t bReverb : 1; // 0x1c
	uint32_t bCenterChannelOnly : 1; // 0x1c
	uint32_t bApplyAmbientVolumes : 1; // 0x1c
};

struct FRawDistributionVector : FRawDistribution {
	ComponentProperty Distribution; // 0x1c
};

struct FColorMaterialInput : FMaterialInput {
	uint32_t UseConstant : 1; // 0x34
	FColor Constant; // 0x38
};

struct FSoftBodyTetraLink {
	int32_t Index; // 0x0
	FVector Bary; // 0x4
};

struct FAnimNotifyEvent {
	float Time; // 0x0
	ObjectProperty Notify; // 0x4
	float Duration; // 0xc
};

struct FGameClassShortName {
	FString ShortName; // 0x0
	FString GameClassName; // 0x10
};

struct FRawDistribution {
	char Type; // 0x0
	char Op; // 0x1
	char LookupTableNumElements; // 0x2
	char LookupTableChunkSize; // 0x3
	TArray<float> LookupTable; // 0x4
	float LookupTableTimeScale; // 0x14
	float LookupTableStartTime; // 0x18
};

struct FSparseArray_Mirror {
	TArray<int32_t> Elements; // 0x0
	FBitArray_Mirror AllocationFlags; // 0x10
	int32_t FirstFreeIndex; // 0x30
	int32_t NumFreeIndices; // 0x34
};

struct FFColorVertexBuffer_Mirror {
	FPointer VfTable; // 0x0
	FPointer VertexData; // 0x8
	int32_t Data; // 0x10
	int32_t Stride; // 0x14
	int32_t NumVertices; // 0x18
};

struct FLoadingUIInfo {
	FString Title; // 0x0
	FString MapName; // 0x10
	FString ModeName; // 0x20
	FString Tip; // 0x30
	FString BGImgPath; // 0x40
	FString MinimapImgPath; // 0x50
	uint32_t bMapBeta : 1; // 0x60
	uint32_t bModeBeta : 1; // 0x60
	FString ClanMatchClanName_Left; // 0x64
	FString ClanMatchClanName_Right; // 0x74
	FString ClanMatchClanEmblemPath_Left; // 0x84
	FString ClanMatchClanEmblemPath_Right; // 0x94
	FString ClanMatchClanLevel_Left; // 0xa4
	FString ClanMatchClanLevel_Right; // 0xb4
	FString ClanMatchClanLevelColor_Left; // 0xc4
	FString ClanMatchClanLevelColor_Right; // 0xd4
	FString ClanMatchClanColor_Left; // 0xe4
	FString ClanMatchClanColor_Right; // 0xf4
	FString ClanMatchAdvantage_Left; // 0x104
	FString ClanMatchAdvantage_Right; // 0x114
	int32_t ClanMatchAdvantageColor_Left; // 0x124
	int32_t ClanMatchAdvantageColor_Right; // 0x128
	uint32_t isCompMatchUI : 1; // 0x12c
	FString CompMatchTeamName_Left; // 0x130
	FString CompMatchTeamName_Right; // 0x140
	int32_t CompMatchTeamScore_Left; // 0x150
	int32_t CompMatchTeamScore_Right; // 0x154
	int32_t CompMatchTeamIndex; // 0x158
	TArray<FLoadingCompUserData> CompMatchLeftUsers; // 0x15c
	TArray<FLoadingCompUserData> CompMatchRightUsers; // 0x16c
};

struct FPhysMaterialBelowFeet {
	FVector LastLocation; // 0x0
	ObjectProperty PhysMaterialProp; // 0xc
};

struct FPhysXEmitterVerticalLodProperties {
	float WeightForFifo; // 0x0
	float WeightForSpawnLod; // 0x4
	float SpawnLodRateVsLifeBias; // 0x8
	float RelativeFadeoutTime; // 0xc
};

struct FPhysXSimulationProperties {
	uint32_t bUseHardware : 1; // 0x0
	uint32_t bFixedTimeStep : 1; // 0x0
	float TimeStep; // 0x4
	int32_t MaxSubSteps; // 0x8
};

struct FEquipSlotStruct {
	int32_t slotType; // 0x0
	int32_t SlotIndex; // 0x4
	int32_t IconTag; // 0x8
	FString ItemName; // 0xc
	FString ItemUrl; // 0x1c
	FString ItemGradeUrl; // 0x2c
	FString ItemGradeFrameUrl; // 0x3c
	FString ItemPeriod; // 0x4c
	uint32_t IsEquip : 1; // 0x5c
	uint32_t IsProto : 1; // 0x5c
	uint32_t IsExpire : 1; // 0x5c
};

struct FLocationBoneSocketInfo {
	FName BoneSocketName; // 0x0
	FVector Offset; // 0x8
};

struct FSwarmDebugOptions {
	uint32_t bDistributionEnabled : 1; // 0x0
	uint32_t bForceContentExport : 1; // 0x0
	uint32_t bInitialized : 1; // 0x0
};

struct FPerPlayerSplitscreenData {
	float SizeX; // 0x0
	float SizeY; // 0x4
	float OriginX; // 0x8
	float OriginY; // 0xc
};

struct FFileNameToURLMapping {
	FName Filename; // 0x0
	FName UrlMapping; // 0x8
};

struct FMatchPlayInfo_Script {
	int32_t match_count; // 0x0
	int32_t win_count; // 0x4
	int32_t lose_count; // 0x8
	int32_t Kill_count; // 0xc
	int32_t Assist_count; // 0x10
	int32_t Death_count; // 0x14
	int32_t headshot_kill_count; // 0x18
	int32_t fatal_kill_count; // 0x1c
	int32_t last10_matches; // 0x20
	int32_t last10_wins; // 0x24
	int32_t last10_loses; // 0x28
	TArray<FMatchPlayHistory_Script> match_history; // 0x2c
};

struct FRepurchaseItemStruct {
	int32_t Id; // 0x0
	int32_t MoneyType; // 0x4
	int32_t IconTag; // 0x8
	int32_t periodSelect; // 0xc
	FString ItemName; // 0x10
	FString ItemImg; // 0x20
	FString ItemGrade; // 0x30
	FString categoryName; // 0x40
	FString ItemPrice; // 0x50
	FString onSale; // 0x60
	FString AddItemPath[0x5]; // 0x70
	FString Label; // 0xc0
	ObjectProperty Period; // 0xd0
	uint32_t nobuy : 1; // 0xd8
	uint32_t Select : 1; // 0xd8
	uint32_t iconNew : 1; // 0xd8
	uint32_t iconHot : 1; // 0xd8
	uint32_t iconProto : 1; // 0xd8
};

struct FRootMotionCurve {
	FName AnimName; // 0x0
	FInterpCurveVector Curve; // 0x8
	float MaxCurveTime; // 0x1c
};

struct FUIShopItemInfo {
	int32_t Id; // 0x0
	FString ItemName; // 0x4
	FString ItemCategoryName; // 0x14
	FString ItemPrice; // 0x24
	FString onSale; // 0x34
	uint32_t iconNew : 1; // 0x44
	uint32_t iconHot : 1; // 0x44
	uint32_t iconProto : 1; // 0x44
	uint32_t iconCheck : 1; // 0x44
	uint32_t iconEndSoon : 1; // 0x44
	int32_t IconTag; // 0x48
	int32_t WeaponIndex; // 0x4c
	int32_t MoneyType; // 0x50
	FString ItemImg; // 0x54
	FString buyBtnLabel; // 0x64
	int32_t buyBtnState; // 0x74
	FString RankImg; // 0x78
	FString addInfo; // 0x88
	FString ToolTip; // 0x98
	FString ItemGrade; // 0xa8
	FString ItemGradeFrame; // 0xb8
	FString buyCountLabel; // 0xc8
	FString remainTimeLabel; // 0xd8
};

struct FCrowdSpawnerPlayerInfo {
	FVector ViewLocation; // 0x0
	FRotator ViewRotation; // 0xc
	FVector PredictLocation; // 0x18
	ObjectProperty PC; // 0x24
};

struct FBoosterItem {
	int32_t BoosterItemID; // 0x0
	ObjectProperty DataTable; // 0x4
	FTimeData ExpireTime; // 0xc
	BOOSTER Type; // 0x14
	uint32_t bIsActive : 1; // 0x18
};

struct FCameraShakeRotationFactor {
	int32_t Pitch; // 0x0
	int32_t Roll; // 0x4
};

struct FCubeInfo {
	int32_t Id; // 0x0
	FString CodeName; // 0x4
	int32_t OutPutItemIndex; // 0x14
	int32_t UpdatePercent; // 0x18
};

struct FIpAddr {
	int32_t Addr; // 0x0
	int32_t Port; // 0x4
};

struct FSHVector {
	float V[0x9]; // 0x0
	float Padding[0x3]; // 0x24
};

struct FWeightRule {
	FWeightNodeRule FirstNode; // 0x0
	FWeightNodeRule SecondNode; // 0x20
};

struct FCanvasUVTri {
	FVector2D V0_Pos; // 0x0
	FVector2D V0_UV; // 0x8
	FVector2D V1_Pos; // 0x10
	FVector2D V1_UV; // 0x18
	FVector2D V2_Pos; // 0x20
	FVector2D V2_UV; // 0x28
};

struct FMcpIdMapping {
	FString McpId; // 0x0
	FString ExternalId; // 0x10
	FString ExternalType; // 0x20
};

struct FPlayerEvents {
	FGameEvents TotalEvents; // 0x0
	FWeaponEvents WeaponEvents; // 0x48
	FDamageEvents DamageAsPlayerEvents; // 0xa0
	FDamageEvents DamageAsTargetEvents; // 0xf8
	FProjectileEvents ProjectileEvents; // 0x150
	FPawnEvents PawnEvents; // 0x1a8
};

struct FClothingLodInfo {
	TArray<int32_t> LODMaterialMap; // 0x0
};

struct FSplineSoundSlot {
	ObjectProperty Wave; // 0x0
	float PitchScale; // 0x8
	float VolumeScale; // 0xc
	int32_t StartPoint; // 0x10
	int32_t EndPoint; // 0x14
	float Weight; // 0x18
	FDouble LastUpdateTime; // 0x1c
	float SourceInteriorVolume; // 0x24
	float SourceInteriorLPF; // 0x28
	float CurrentInteriorVolume; // 0x2c
	float CurrentInteriorLPF; // 0x30
};

struct FTranslationTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FGameResourceDataProvider {
	FName ProviderTag; // 0x0
	FString ProviderClassName; // 0x8
	uint32_t bExpandProviders : 1; // 0x18
	UUIResourceDataProvider* ProviderClass; // 0x1c
};

struct FDistanceDatum {
	float FadeInDistanceStart; // 0x0
	float FadeInDistanceEnd; // 0x4
	float FadeOutDistanceStart; // 0x8
	float FadeOutDistanceEnd; // 0xc
	float Volume; // 0x10
	FRawDistributionFloat FadeInDistance; // 0x14
	FRawDistributionFloat FadeOutDistance; // 0x38
};

struct FChattingInfo {
	uint32_t Id : 1; // 0x0
	FString ChatColor; // 0x4
	FString msg; // 0x14
};

struct FNamedInterface {
	FName InterfaceName; // 0x0
	ObjectProperty InterfaceObject; // 0x8
};

struct FMessengerInfo {
	int32_t userID; // 0x0
	ESessionState SessionState; // 0x4
	uint32_t bAFK : 1; // 0x8
	FString NickName; // 0xc
	char Level; // 0x1c
	FTimeData LogoutTime; // 0x20
	int32_t LogoutDurationHour; // 0x28
	int32_t RefChannelID; // 0x2c
	char ChannelNumber; // 0x30
	WordProperty RoomNumber; // 0x32
	int32_t RefModeGroupID; // 0x34
	int32_t RefModeID; // 0x38
	int32_t RefMapID; // 0x3c
	uint32_t bHasType : 1; // 0x40
	uint32_t bHasSessionState : 1; // 0x40
	uint32_t bHasAFK : 1; // 0x40
	uint32_t bHasNickname : 1; // 0x40
	uint32_t bHasLevel : 1; // 0x40
	uint32_t bHasLogoutTime : 1; // 0x40
	uint32_t bHasLogoutDuration : 1; // 0x40
	uint32_t bHasChannelID : 1; // 0x40
	uint32_t bHasChannelNumber : 1; // 0x40
	uint32_t bHasRoomNumber : 1; // 0x40
	uint32_t bHasModeID : 1; // 0x40
	uint32_t bHasMapID : 1; // 0x40
	uint32_t bHasModeGroupID : 1; // 0x40
	uint32_t bGrade : 1; // 0x40
	uint32_t bCallingCard : 1; // 0x40
	uint32_t bClanName : 1; // 0x40
	uint32_t bClanTotalPoint : 1; // 0x40
	uint32_t bTierPoint : 1; // 0x40
	uint32_t bCompetitionModeID : 1; // 0x40
	int32_t ClanPoint; // 0x44
	int32_t CallingCardID; // 0x48
	FString ClanName; // 0x4c
	int32_t ClanTotalPoint; // 0x5c
	int32_t RankPoint; // 0x60
	int32_t TierPoint; // 0x64
	int32_t CompetitionModeID; // 0x68
	int32_t ClanColorID; // 0x6c
	MessengerMemberState Type; // 0x70
	char GRADE; // 0x71
	FTimeData RegistrationTime; // 0x74
	int32_t Kill; // 0x7c
	int32_t assist; // 0x80
	int32_t death; // 0x84
	int32_t win; // 0x88
	int32_t lose; // 0x8c
};

struct FTitleFileMcp : FTitleFile {
	FPointer HttpDownloader; // 0x24
};

struct FTextWithVoice {
	ObjectProperty SoundCues; // 0x0
	int32_t TextID; // 0x8
};

struct FOnlineGameSearchQuery {
	TArray<FOnlineGameSearchORClause> OrClauses; // 0x0
	TArray<FOnlineGameSearchSortClause> SortClauses; // 0x10
};

struct FInvenTabStruct {
	int32_t LabelID; // 0x0
	FString Label; // 0x4
	uint32_t bDefaultDisabled : 1; // 0x14
	uint32_t bDisabled : 1; // 0x14
	uint32_t bSelected : 1; // 0x14
};

struct FSeqOpInputLink {
	FString LinkDesc; // 0x0
	uint32_t bHasImpulse : 1; // 0x10
	int32_t QueuedActivations; // 0x14
	uint32_t bDisabled : 1; // 0x18
	uint32_t bDisabledPIE : 1; // 0x18
	ObjectProperty LinkedOp; // 0x1c
	int32_t DrawY; // 0x24
	uint32_t bHidden : 1; // 0x28
	float ActivateDelay; // 0x2c
	uint32_t bMoving : 1; // 0x30
	uint32_t bClampedMax : 1; // 0x30
	uint32_t bClampedMin : 1; // 0x30
};

struct FDynamicLinkInfo {
	FVector LastTargetLocation; // 0x0
	FVector LastSrcLocation; // 0xc
};

struct FNavMeshPathConstraintCacheDatum {
	int32_t ListIdx; // 0x0
	ObjectProperty List[0x5]; // 0x4
};

struct FFrontEndCameraActorInfo {
	ObjectProperty FEComeraActor; // 0x0
	FName CameraTag; // 0x8
	float DefaultFOVAngle; // 0x10
};

struct FCurveEdEntry {
	ObjectProperty CurveObject; // 0x0
	FColor CurveColor; // 0x8
	FString CurveName; // 0xc
	int32_t bHideCurve; // 0x1c
	int32_t bColorCurve; // 0x20
	int32_t bFloatingPointColorCurve; // 0x24
	int32_t bClamp; // 0x28
	float ClampLow; // 0x2c
	float ClampHigh; // 0x30
};

struct FWeaponSimpleInfo {
	int32_t weaponRefItemIndex; // 0x0
	FString WeaponName; // 0x4
	FString WeaponImagePath; // 0x14
};

struct FOutlineRegisterCondition {
	FName AppliedEventName; // 0x0
	TArray<FString> RegisterableModeTypeList; // 0x8
};

struct FCurveTrack {
	FName CurveName; // 0x0
	TArray<float> CurveWeights; // 0x8
};

struct FKillTableDataType {
	FName State; // 0x0
	FString CodeName; // 0x8
	char ContinueCount; // 0x18
	eStatType_HitPart Hit; // 0x19
};

struct FCallingCardInfo {
	int32_t Id; // 0x0
	int32_t Expiration_Time; // 0x4
	int32_t Remain_Time; // 0x8
};

struct FPopupMenuStruct {
	int32_t LabelID; // 0x0
	uint32_t Category : 1; // 0x4
	uint32_t Disabled : 1; // 0x4
};

struct FTerrainDecoLayer {
	FString Name; // 0x0
	TArray<FTerrainDecoration> Decorations; // 0x10
	int32_t AlphaMapIndex; // 0x20
};

struct FSavedTeamInfo {
	int32_t TeamIndex; // 0x0
	FString TeamName; // 0x4
};

struct FPlayerResponseLine {
	int32_t PlayerNum; // 0x0
	int32_t PlayerID; // 0x4
	FString PlayerName; // 0x8
	int32_t Ping; // 0x18
	int32_t Score; // 0x1c
	int32_t StatsID; // 0x20
	TArray<FKeyValuePair> PlayerInfo; // 0x24
};

struct FBuildingMatOverrides {
	TArray<ObjectProperty> MaterialOptions; // 0x0
};

struct FDelegateArray {
	TArray<DelegateProperty> Delegates; // 0x0
};

struct FServerTimePositionInfoStruct {
	float PosX; // 0x0
	float PosY; // 0x4
};

struct FImpactInfo {
	ObjectProperty HitActor; // 0x0
	FVector HitLocation; // 0x8
	FVector HitNormal; // 0x14
	FVector RayDir; // 0x20
	FVector StartTrace; // 0x2c
	FTraceHitInfo HitInfo; // 0x38
};

struct FRecordInfo {
	FString _Name; // 0x0
	int32_t TitleId; // 0x10
	FString Desc; // 0x14
};

struct FRegistryKeyValuePair {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FRenderingPerformanceOverrides {
	uint32_t bAllowAmbientOcclusion : 1; // 0x0
	uint32_t bAllowDominantWholeSceneDynamicShadows : 1; // 0x0
	uint32_t bAllowMotionBlurSkinning : 1; // 0x0
	uint32_t bAllowTemporalAA : 1; // 0x0
	uint32_t bAllowLightShafts : 1; // 0x0
};

struct FSoundClassEditorData {
	int32_t NodePosX; // 0x0
	int32_t NodePosY; // 0x4
};

struct FCompMatchInfoStruct {
	int32_t TierPoint; // 0x0
	TArray<FMatchroomPlayerStruct> CompMatchUsers; // 0x4
	TArray<FMatchroomPlayerTierStruct> CompMatchUsersTierData; // 0x14
};

struct FBannerInfo {
	int32_t Index; // 0x0
	FString URL; // 0x4
	ObjectProperty Tex; // 0x14
};

struct FRecogVocabulary {
	TArray<FRecognisableWord> WhoDictionary; // 0x0
	TArray<FRecognisableWord> WhatDictionary; // 0x10
	TArray<FRecognisableWord> WhereDictionary; // 0x20
	FString VocabName; // 0x30
	TArray<char> VocabData; // 0x40
	TArray<char> WorkingVocabData; // 0x50
};

struct FTextureCoordinates {
	float U; // 0x0
	float V; // 0x4
	float UL; // 0x8
	float VL; // 0xc
};

struct FMobileColorGradingParams {
	float TransitionTime; // 0x0
	float Blend; // 0x4
	float Desaturation; // 0x8
	FLinearColor HighLights; // 0xc
	FLinearColor MidTones; // 0x1c
	FLinearColor Shadows; // 0x2c
};

struct FStaticMeshLODInfo {
	TArray<FStaticMeshLODElement> Elements; // 0x0
};

struct FMaterialImpactEffect {
	eEffectType EffectType; // 0x0
	ObjectProperty Sound; // 0x4
	ObjectProperty FirstPersonSound; // 0xc
	TArray<ObjectProperty> DecalMaterials; // 0x14
	float DurationOfDecal; // 0x24
	FName DecalDissolveParamName; // 0x28
	float DecalWidth; // 0x30
	float DecalHeight; // 0x34
	float DecalTickness; // 0x38
	ObjectProperty ParticleTemplate; // 0x3c
};

struct FSYSTEMSETTING_DATA {
	FString SectionName; // 0x0
	int32_t Step; // 0x10
};

struct FInputEntry {
	EInputTypes Type; // 0x0
	float Value; // 0x4
	float TimeDelta; // 0x8
	EInputMatchAction Action; // 0xc
};

struct FScalarParameterInterpStruct {
	FName ParameterName; // 0x0
	float ParameterValue; // 0x8
	float InterpTime; // 0xc
	float WarmupTime; // 0x10
};

struct FRecentParty {
	FUniqueNetId PartyLeader; // 0x0
	TArray<FUniqueNetId> PartyMembers; // 0x8
};

struct FInventoryItemInfo {
	FString ItemName; // 0x0
	int32_t InventorySlotIndex; // 0x10
	int32_t ReferenceIndex; // 0x14
	int32_t InitRentalTime; // 0x18
	float InitTickCount; // 0x1c
	int32_t PassedSec; // 0x20
	TArray<char> DecoItems; // 0x24
	char ItemState; // 0x34
	uint32_t IsNew : 1; // 0x38
	char EquipState; // 0x3c
	int32_t StackCount; // 0x40
	uint32_t IsRandomBox : 1; // 0x44
};

struct FBindCacheElement {
	FName KeyName; // 0x0
	FString MappingString; // 0x8
	int32_t FieldIndex; // 0x18
};

struct FConsoleMessage {
	FString Text; // 0x0
	FColor TextColor; // 0x10
	float MessageLife; // 0x14
	ObjectProperty PRI; // 0x18
};

struct FSocialPostImageFlags {
	uint32_t bIsUserGeneratedImage : 1; // 0x0
	uint32_t bIsGameGeneratedImage : 1; // 0x0
	uint32_t bIsAchievementImage : 1; // 0x0
	uint32_t bIsMediaImage : 1; // 0x0
};

struct FLabelSettingInfo {
	int32_t LabelID; // 0x0
	int32_t TooltipID; // 0x4
	FString FunctionName; // 0x8
	int32_t Param1; // 0x18
	int32_t Param2; // 0x1c
};

struct FSortInfo {
	int32_t _Type; // 0x0
	int32_t _LabelID; // 0x4
};

struct FBoneCopyInfo {
	FName SrcBoneName; // 0x0
	FName DstBoneName; // 0x8
	int32_t SrcBoneIndex; // 0x10
	int32_t DstBoneIndex; // 0x14
};

struct FKeymapDatum {
	FName FlashKeyname; // 0x0
	FName UnrealKeyname; // 0x8
	int32_t FlashKeyCode; // 0x10
	int32_t LocalizedID; // 0x14
};

struct FAwaitListPopUpItem {
	int32_t LabelID; // 0x0
	uint32_t bDisabled : 1; // 0x4
	uint32_t bDefaultDisabled : 1; // 0x4
};

struct FSOccupyPawnInfo {
	FVector Destination; // 0x0
	ObjectProperty Pawn; // 0xc
};

struct FFlashEffectRepStruct {
	int32_t Type; // 0x0
	float remainTime; // 0x4
};

struct FAnimBlendChild {
	FName Name; // 0x0
	ObjectProperty Anim; // 0x8
	float Weight; // 0x10
	float BlendWeight; // 0x14
	uint32_t bMirrorSkeleton : 1; // 0x18
	uint32_t bIsAdditive : 1; // 0x18
};

struct FLocalizedStringSetting {
	int32_t Id; // 0x0
	int32_t ValueIndex; // 0x4
	EOnlineDataAdvertisementType AdvertisementType; // 0x8
};

struct FToggleTrackKey {
	float Time; // 0x0
	ETrackToggleAction ToggleAction; // 0x4
};

struct FCurveEdTab {
	FString TabName; // 0x0
	TArray<FCurveEdEntry> Curves; // 0x10
	float ViewStartInput; // 0x20
	float ViewEndInput; // 0x24
	float ViewStartOutput; // 0x28
	float ViewEndOutput; // 0x2c
};

struct FLightmassLightSettings {
	float IndirectLightingScale; // 0x0
	float IndirectLightingSaturation; // 0x4
	float ShadowExponent; // 0x8
};

struct FInterpCurveTwoVectors {
	TArray<FInterpCurvePointTwoVectors> Points; // 0x0
	EInterpMethodType InterpMethod; // 0x10
};

struct FFunctionExpressionOutput {
	ObjectProperty ExpressionOutput; // 0x0
	FGuid ExpressionOutputId; // 0x8
	FExpressionOutput Output; // 0x18
};

struct FTeamSoundData {
	TArray<ObjectProperty> RoundResult; // 0x0
	TArray<ObjectProperty> RoundOverReason_TimeLimit; // 0x10
	TArray<ObjectProperty> RoundOverReason_NoRespawnGameAllDeath; // 0x20
	TArray<ObjectProperty> RoundOverReason_WinByDecision; // 0x30
	TArray<ObjectProperty> RoundOverReason_GameScoreLimit; // 0x40
	TArray<ObjectProperty> RoundOverReason_SuddenDeathKill; // 0x50
	ObjectProperty LastUserInfo; // 0x60
	TArray<ObjectProperty> MatchResult; // 0x68
	ObjectProperty RoundStartInfo; // 0x78
	ObjectProperty SuddenDeathInfo; // 0x80
	ObjectProperty RoundGoalInfo; // 0x88
	ObjectProperty GamePlayStartBGM; // 0x90
	TArray<ObjectProperty> RoundResultBGM; // 0x98
	TArray<ObjectProperty> RoundConditionSounds; // 0xa8
	TArray<ObjectProperty> RoundOverReason_MissionEnd; // 0xb8
	ObjectProperty DestroyObjectEnemy; // 0xc8
	ObjectProperty DestroyObjectFriendly; // 0xd0
	ObjectProperty C4BombPlant; // 0xd8
	ObjectProperty VIPEscapeStart; // 0xe0
	ObjectProperty VIPDeath; // 0xe8
};

struct FWeightmapLayerAllocationInfo {
	FName LayerName; // 0x0
	char WeightmapTextureIndex; // 0x8
	char WeightmapTextureChannel; // 0x9
};

struct FInterpCurvePointQuat {
	float InVal; // 0x0
	FQuat OutVal; // 0x10
	FQuat ArriveTangent; // 0x20
	FQuat LeaveTangent; // 0x30
	EInterpCurveMode InterpMode; // 0x40
};

struct FControlOptionItemInfo {
	FString KeyName; // 0x0
	int32_t Param1; // 0x10
	int32_t Param2; // 0x14
	int32_t SelectedIndex; // 0x18
	int32_t OldSelectedIndex; // 0x1c
	FString FunctionName; // 0x20
};

struct FPingInfo {
	Fdword Ping; // 0x0
	int32_t ForcePing; // 0x4
	int32_t DefaultPing; // 0x8
	FString URL; // 0xc
	int32_t Port; // 0x1c
};

struct FAgentArchetypeInfo {
	ObjectProperty AgentArchetype; // 0x0
	float FrequencyModifier; // 0x8
	int32_t MaxAllowed; // 0xc
	int32_t CurrSpawned; // 0x10
	TArray<ObjectProperty> GroupMembers; // 0x14
};

struct FSpeechRecognizedWord {
	int32_t WordId; // 0x0
	FString WordText; // 0x4
	float Confidence; // 0x14
};

struct FSDamagedActorInfo {
	ObjectProperty Target; // 0x0
	float DamageSum; // 0x8
	TArray<FSDamagedInfo> DamagedInfoList; // 0xc
};

struct FCameraPreviewInfo {
	APawn* PawnClass; // 0x0
	TArray<ObjectProperty> PreviewAnimSets; // 0x8
	FName AnimSeqName; // 0x18
	FVector Location; // 0x20
	FRotator Rotation; // 0x2c
	ObjectProperty PawnInst; // 0x38
};

struct FBoolTrackKey {
	float Time; // 0x0
	uint32_t Value : 1; // 0x4
};

struct FRandomAnimInfo {
	float Chance; // 0x0
	char LoopCountMin; // 0x4
	char LoopCountMax; // 0x5
	float BlendInTime; // 0x8
	FVector2D PlayRateRange; // 0xc
	uint32_t bStillFrame : 1; // 0x14
	char LoopCount; // 0x18
	float LastPosition; // 0x1c
};

struct FUIModeOptionStruct {
	FString OptionCodename; // 0x0
	char DefaultOptionIndex; // 0x10
	uint32_t bShow : 1; // 0x14
	int32_t OptionCount; // 0x18
	TArray<int32_t> Values; // 0x1c
};

struct FExpiredItem {
	int32_t InventorySlotIndex; // 0x0
	int32_t RefItemID; // 0x4
	FString ItemName; // 0x8
	uint32_t bShow : 1; // 0x18
};

struct FAvoidOtherSampleItem {
	int32_t RotOffset; // 0x0
	char NumMagSamples; // 0x4
	uint32_t bFallbackOnly : 1; // 0x8
};

struct FExplosionDatum {
	EExplosionEffectType EffectType; // 0x0
	ObjectProperty ExplosionSoundCue; // 0x4
	ObjectProperty ExplosionPS; // 0xc
	FDecalData ExplosionDecalData; // 0x14
	FPointLightInfo ExplosionPointLightInfo; // 0x44
};

struct FScreenShakeStruct {
	float TimeToGo; // 0x0
	float TimeDuration; // 0x4
	FVector RotAmplitude; // 0x8
	FVector RotFrequency; // 0x14
	FVector RotSinOffset; // 0x20
	FShakeParams RotParam; // 0x2c
	FVector LocAmplitude; // 0x30
	FVector LocFrequency; // 0x3c
	FVector LocSinOffset; // 0x48
	FShakeParams LocParam; // 0x54
	float FOVAmplitude; // 0x58
	float FOVFrequency; // 0x5c
	float FOVSinOffset; // 0x60
	EShakeParam FOVParam; // 0x64
	FName ShakeName; // 0x68
	uint32_t bOverrideTargetingDampening : 1; // 0x70
	float TargetingDampening; // 0x74
};

struct FQuickStart_ModeInfo {
	int32_t RefID; // 0x0
	FString Label; // 0x4
	FString Desc; // 0x14
	FString ButtonBGImgPath; // 0x24
	int32_t MapCounts[0x3]; // 0x34
};

struct FCCSCoverData {
	float TargetDist; // 0x0
	float DirectDistance; // 0x4
	uint32_t ValidPath : 1; // 0x8
	float PathDistance; // 0xc
	uint32_t IsValid : 1; // 0x10
	ObjectProperty CoverLink; // 0x14
	int32_t SlotIdx; // 0x1c
	ObjectProperty Occupier; // 0x20
};

struct FPreviewSkelMeshStruct {
	FName DisplayName; // 0x0
	TArray<ObjectProperty> PreviewSkelMesh; // 0x8
	TArray<ObjectProperty> PreviewMorphSets; // 0x18
};

struct FClanMatchRecordData {
	FString EnemyClanName; // 0x0
	int32_t EnemyEmblemID; // 0x10
	int32_t EnemyClanRank; // 0x14
	int32_t EnemyClanPoint; // 0x18
	int32_t EnemyClanColorID; // 0x1c
	int32_t EnemyClanAmatchWinScore; // 0x20
	int32_t EnemyClanAmatchLoseScore; // 0x24
	int32_t EnemyClanBmatchWinScore; // 0x28
	int32_t EnemyClanBmatchLoseScore; // 0x2c
	int32_t EnemyClanRankmatchWinScore; // 0x30
	int32_t EnemyClanRankmatchLoseScore; // 0x34
	int32_t MyClanPoint; // 0x38
	int32_t MyClanRank; // 0x3c
	int32_t MyClanColorID; // 0x40
	int32_t MyClanAmatchWinScore; // 0x44
	int32_t MyClanAmatchLoseScore; // 0x48
	int32_t MyClanBmatchWinScore; // 0x4c
	int32_t MyClanBmatchLoseScore; // 0x50
	int32_t MyClanRankmatchWinScore; // 0x54
	int32_t MyClanRankmatchLoseScore; // 0x58
	FTimeData MatchTime; // 0x5c
	int32_t ModeID; // 0x64
	int32_t MapID; // 0x68
	int32_t win; // 0x6c
	int32_t lose; // 0x70
	int32_t MyTeamIndex; // 0x74
	int32_t EnemyTeamIndex; // 0x78
	int32_t BestScoreUserId; // 0x7c
	int32_t BestKillUserId; // 0x80
	uint32_t Outcome : 1; // 0x84
	TArray<FMatchPlayerData> ClanMatchPlayer; // 0x88
	TArray<FMatchPlayerData> EnemyMatchPlayer; // 0x98
};

struct FEvolveSupplyItemInfos {
	int32_t DropCount; // 0x0
	ADroppedPickup* DroppedClass; // 0x4
};

struct FMakeroom_ModeInfo {
	int32_t IndexID; // 0x0
	int32_t RefID; // 0x4
	int32_t DefaultMapRefID; // 0x8
	int32_t DefaultModeRefID; // 0xc
	uint32_t RandomMode : 1; // 0x10
	FString Label; // 0x14
	FString Desc; // 0x24
	FString RandomBGImgPath; // 0x34
	FString ButtonBGImgPath; // 0x44
	uint32_t BetaVersion : 1; // 0x54
	int32_t MapCounts[0x3]; // 0x58
};

struct FInterpCurveVector2D {
	TArray<FInterpCurvePointVector2D> Points; // 0x0
	EInterpMethodType InterpMethod; // 0x10
};

struct FCanvasIcon {
	ObjectProperty Texture; // 0x0
	float U; // 0x8
	float V; // 0xc
	float UL; // 0x10
	float VL; // 0x14
};

struct FPlayerDataStoreGroup {
	ObjectProperty PlayerOwner; // 0x0
	TArray<ObjectProperty> DataStores; // 0x8
};

struct FQuickStart_MissionInfo {
	int32_t RefID; // 0x0
	FString Label; // 0x4
	uint32_t bDisabled : 1; // 0x14
};

struct FOutlineMaterialVectorParam {
	FName EventName; // 0x0
	FName ParameterName; // 0x8
	FLinearColor ParameterValue[0x2]; // 0x10
};

struct FOnlineGameSearchParameter {
	int32_t EntryId; // 0x0
	FName ObjectPropertyName; // 0x4
	EOnlineGameSearchEntryType EntryType; // 0xc
	EOnlineGameSearchComparisonType ComparisonType; // 0xd
};

struct FPlaylist {
	TArray<FConfiguredGameSetting> ConfiguredGames; // 0x0
	int32_t PlaylistId; // 0x10
	int32_t LoadBalanceId; // 0x14
	FString LocalizationString; // 0x18
	TArray<int32_t> ContentIds; // 0x28
	int32_t TeamSize; // 0x38
	int32_t TeamCount; // 0x3c
	int32_t MaxPartySize; // 0x40
	FString Name; // 0x44
	FString URL; // 0x54
	int32_t MatchType; // 0x64
	uint32_t bDisableDedicatedServerSearches : 1; // 0x68
	TArray<FName> MapCycle; // 0x6c
	TArray<FInventorySwap> InventorySwaps; // 0x7c
};

struct FTriangleSortSettings {
	TriangleSortOption TriangleSorting; // 0x0
	TriangleSortAxis CustomLeftRightAxis; // 0x1
	FName CustomLeftRightBoneName; // 0x4
};

struct FUpdateMatchRoomInfo {
	TArray<int32_t> AddList; // 0x0
	TArray<int32_t> DeleteList; // 0x10
	TArray<int32_t> UpdateList; // 0x20
};

struct FOnlineGameSearchResult {
	ObjectProperty GameSettings; // 0x0
	FPointer PlatformData; // 0x8
};

struct FAnimNotifyMITVTextureParam {
	uint32_t bOverride_ParameterValue : 1; // 0x0
	ObjectProperty ParameterValue; // 0x4
	FName ParameterName; // 0xc
	uint32_t bClearStartTime : 1; // 0x14
	uint32_t bOverride_Loop : 1; // 0x14
	uint32_t bLoop : 1; // 0x14
	uint32_t bOverride_AutoActivate : 1; // 0x14
	uint32_t bAutoActivate : 1; // 0x14
	uint32_t bOverride_CycleTime : 1; // 0x14
	float CycleTime; // 0x18
	uint32_t bOverride_NormalizeTime : 1; // 0x1c
	uint32_t bNormalizeTime : 1; // 0x1c
	uint32_t bOverride_OffsetTime : 1; // 0x1c
	float OffsetTime; // 0x20
	uint32_t bOverride_OffsetFromEnd : 1; // 0x24
	uint32_t bOffsetFromEnd : 1; // 0x24
};

struct FNodeChild {
	FName Name; // 0x0
	ObjectProperty Node; // 0x8
	float Weight; // 0x10
	int32_t DrawY; // 0x14
};

struct FVector4 {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FPresetData {
	int32_t ItemID; // 0x0
	ObjectProperty RefItem; // 0x4
	FString ScriptFileName; // 0xc
};

struct FLightmassDebugOptions {
	uint32_t bDebugMode : 1; // 0x0
	uint32_t bStatsEnabled : 1; // 0x0
	uint32_t bGatherBSPSurfacesAcrossComponents : 1; // 0x0
	float CoplanarTolerance; // 0x4
	uint32_t bUseDeterministicLighting : 1; // 0x8
	uint32_t bUseImmediateImport : 1; // 0x8
	uint32_t bImmediateProcessMappings : 1; // 0x8
	uint32_t bSortMappings : 1; // 0x8
	uint32_t bDumpBinaryFiles : 1; // 0x8
	uint32_t bDebugMaterials : 1; // 0x8
	uint32_t bPadMappings : 1; // 0x8
	uint32_t bDebugPaddings : 1; // 0x8
	uint32_t bOnlyCalcDebugTexelMappings : 1; // 0x8
	uint32_t bUseRandomColors : 1; // 0x8
	uint32_t bColorBordersGreen : 1; // 0x8
	uint32_t bColorByExecutionTime : 1; // 0x8
	float ExecutionTimeDivisor; // 0xc
	uint32_t bInitialized : 1; // 0x10
};

struct FRewardData {
	FString RewardItemCodeName; // 0x0
	int32_t RewardItemValue; // 0x10
	int32_t RewardItemValueType; // 0x14
};

struct FSClassAgroWeight {
	AActor* TargetClass; // 0x0
	float ClassWeight; // 0x8
};

struct FFireLink {
	TArray<char> Interactions; // 0x0
	int32_t PackedProperties_CoverPairRefAndDynamicInfo; // 0x10
	uint32_t bFallbackLink : 1; // 0x14
	uint32_t bDynamicIndexInited : 1; // 0x14
};

struct FMITVMod {
	ObjectProperty NewMITV; // 0x0
	int32_t MaterialIndex; // 0x8
};

struct FManualCoverTypeInfo {
	char SlotIndex; // 0x0
	ECoverType ManualCoverType; // 0x1
};

struct FParticleAttractorCollisionAction {
	ParticleAttractorActionType Type; // 0x0
	FString EventName; // 0x4
};

struct FDamageStorage {
	int32_t Damage; // 0x0
	float PendingClearTime; // 0x4
};

struct FNxDestructibleAdvancedParameters {
	float DamageCap; // 0x0
	float ImpactVelocityThreshold; // 0x4
	float MaxChunkSpeed; // 0x8
	float MassScaleExponent; // 0xc
	float MassScale; // 0x10
	float FractureImpulseScale; // 0x14
};

struct FRecordDataType {
	int32_t TotalCount; // 0x0
	char CurrentCount; // 0x4
};

struct FMobileDistanceFieldParams {
	float Gamma; // 0x0
	float AlphaRefVal; // 0x4
	float SmoothWidth; // 0x8
	uint32_t EnableShadow : 1; // 0xc
	FVector2D ShadowDirection; // 0x10
	FLinearColor ShadowColor; // 0x18
	float ShadowSmoothWidth; // 0x28
	FDepthFieldGlowInfo GlowInfo; // 0x2c
	int32_t BlendMode; // 0x50
};

struct FPlane : FVector {
	float W; // 0xc
};

struct FItemAbilityInfoStruct {
	FString AbilityName; // 0x0
	int32_t ViewType; // 0x10
	FString Spec; // 0x14
	int32_t EquipSpec; // 0x24
	int32_t EquipPercent; // 0x28
	int32_t LookSpec; // 0x2c
	int32_t LookPercent; // 0x30
};

struct FSkeletalMeshOptimizationSettings {
	float MaxDeviationPercentage; // 0x0
	SkeletalMeshOptimizationImportance SilhouetteImportance; // 0x4
	SkeletalMeshOptimizationImportance TextureImportance; // 0x5
	SkeletalMeshOptimizationImportance ShadingImportance; // 0x6
	SkeletalMeshOptimizationImportance SkinningImportance; // 0x7
	SkeletalMeshOptimizationNormalMode NormalMode; // 0x8
	float BoneReductionRatio; // 0xc
	int32_t MaxBonesPerVertex; // 0x10
	SkeletalMeshOptimizationType ReductionMethod; // 0x14
	float NumOfTrianglesPercentage; // 0x18
	float WeldingThreshold; // 0x1c
	uint32_t bRecalcNormals : 1; // 0x20
	float NormalsThreshold; // 0x24
};

struct FWaveformSample {
	char LeftAmplitude; // 0x0
	char RightAmplitude; // 0x1
	EWaveformFunction LeftFunction; // 0x2
	EWaveformFunction RightFunction; // 0x3
	float Duration; // 0x4
};

struct FKSphylElem {
	FMatrix TM; // 0x0
	float Radius; // 0x40
	float Length; // 0x44
	uint32_t bNoRBCollision : 1; // 0x48
	uint32_t bPerPolyShape : 1; // 0x48
};

struct FCoverInfo {
	ObjectProperty Link; // 0x0
	int32_t SlotIdx; // 0x8
};

struct FAnimByRotation {
	FRotator DesiredRotation; // 0x0
	FName AnimName; // 0xc
};

struct FInterpLookupPoint {
	FName GroupName; // 0x0
	float Time; // 0x8
};

struct FFrontEndButtonStruct {
	FString MemberName; // 0x0
	int32_t LabelID; // 0x10
	uint32_t bDefaultDisabled : 1; // 0x14
	uint32_t bDefaultSelected : 1; // 0x14
	uint32_t bDisabled : 1; // 0x14
	uint32_t bSelected : 1; // 0x14
};

struct FPresetItemInfo {
	char presetIdx; // 0x0
	char SlotIdx; // 0x1
	int32_t ItemID; // 0x4
};

struct FTitleFile {
	FString Filename; // 0x0
	EOnlineEnumerationReadState AsyncState; // 0x10
	TArray<char> Data; // 0x14
};

struct FMarkerObjectData {
	int32_t MarkerID; // 0x0
	uint32_t bUsing : 1; // 0x4
	ObjectProperty MarkerObject; // 0x8
};

struct FInventorySwap {
	FName Original; // 0x0
	FString SwapTo; // 0x8
};

struct FKCachedConvexDataElement {
	TArray<char> ConvexElementData; // 0x0
};

struct FLightingChannelContainer {
	uint32_t bInitialized : 1; // 0x0
	uint32_t BSP : 1; // 0x0
	uint32_t Static : 1; // 0x0
	uint32_t Dynamic : 1; // 0x0
	uint32_t CompositeDynamic : 1; // 0x0
	uint32_t Skybox : 1; // 0x0
	uint32_t Unnamed_2 : 1; // 0x0
	uint32_t Unnamed_3 : 1; // 0x0
	uint32_t Unnamed_4 : 1; // 0x0
	uint32_t Unnamed_5 : 1; // 0x0
	uint32_t Unnamed_6 : 1; // 0x0
	uint32_t Unnamed_7 : 1; // 0x0
	uint32_t Cinematic_2 : 1; // 0x0
	uint32_t Cinematic_3 : 1; // 0x0
	uint32_t Cinematic_4 : 1; // 0x0
	uint32_t Cinematic_5 : 1; // 0x0
	uint32_t Cinematic_6 : 1; // 0x0
	uint32_t Cinematic_7 : 1; // 0x0
	uint32_t Cinematic_8 : 1; // 0x0
	uint32_t Cinematic_9 : 1; // 0x0
	uint32_t Cinematic_10 : 1; // 0x0
	uint32_t Cinematic_11 : 1; // 0x0
	uint32_t Gameplay_2 : 1; // 0x0
	uint32_t Gameplay_3 : 1; // 0x0
	uint32_t Gameplay_4 : 1; // 0x0
	uint32_t Gameplay_5 : 1; // 0x0
	uint32_t Crowd : 1; // 0x0
};

struct FDropNoteInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FString Comment; // 0x18
};

struct FSingleChannelSound {
	ObjectProperty SourceActor; // 0x0
	ComponentProperty AudioComponent; // 0x8
	ObjectProperty SoundCue; // 0x10
};

struct FClanListDetailData {
	FString Introduce; // 0x0
	int32_t A_Match_Win; // 0x10
	int32_t A_Match_Lose; // 0x14
	int32_t B_Match_Win; // 0x18
	int32_t B_Match_Lose; // 0x1c
	int32_t Rank_Match_Win; // 0x20
	int32_t Rank_Match_Lose; // 0x24
	int32_t Region_ID; // 0x28
	int32_t RankPoint; // 0x2c
	TArray<FClanListMatchData> MatchRecord; // 0x30
};

struct FIconData {
	TArray<FIconRawData> Icons; // 0x0
	FString LinkageName; // 0x10
	FString BaseInstanceName; // 0x20
};

struct FTextSizingParameters {
	float DrawX; // 0x0
	float DrawY; // 0x4
	float DrawXL; // 0x8
	float DrawYL; // 0xc
	FVector2D Scaling; // 0x10
	ObjectProperty DrawFont; // 0x18
	FVector2D SpacingAdjust; // 0x20
	float ViewportHeight; // 0x28
};

struct FLensFlareElementMaterials {
	TArray<ObjectProperty> ElementMaterials; // 0x0
};

struct FGuid {
	int32_t A; // 0x0
	int32_t B; // 0x4
	int32_t C; // 0x8
	int32_t D; // 0xc
};

struct FUIMissionStruct {
	int32_t MissionRefID; // 0x0
	FString MissionCodename; // 0x4
	FString MissionLabel; // 0x14
	int32_t DefaultModeGroupID; // 0x24
	int32_t OpenChannel; // 0x28
	int32_t bgType; // 0x2c
	int32_t bgImageID; // 0x30
	FString OnlyChannelCodename; // 0x34
};

struct FDashBoardButtonInfo {
	int32_t LabelID; // 0x0
	int32_t TooltipID; // 0x4
	int32_t Position; // 0x8
	FString MemberName; // 0xc
	FString CodeName; // 0x1c
	uint32_t bSelected : 1; // 0x2c
	uint32_t bDisabled : 1; // 0x2c
};

struct FMenuInfo {
	uint32_t bVisible : 1; // 0x0
	int32_t LabelID; // 0x4
};

struct FSkelMeshComponentLODInfo {
	TArray<char> HiddenMaterials; // 0x0
	uint32_t bNeedsInstanceWeightUpdate : 1; // 0x10
	uint32_t bAlwaysUseInstanceWeights : 1; // 0x10
	EInstanceWeightUsage InstanceWeightUsage; // 0x14
	int32_t InstanceWeightIdx; // 0x18
};

struct FChampionshipObserverKeyState {
	uint32_t bChatUIState : 1; // 0x0
	uint32_t bSummaryUIState : 1; // 0x0
	uint32_t bIFFUIState : 1; // 0x0
	uint32_t bRoundDisplayUIState : 1; // 0x0
	uint32_t bInformationUIState : 1; // 0x0
	uint32_t bAllUIState : 1; // 0x0
	uint32_t bHpUIState : 1; // 0x0
	uint32_t bWeaponUIState : 1; // 0x0
};

struct FItemBasicInfoStruct {
	FString ItemName; // 0x0
	FString ItemFeature; // 0x10
	FString ItemImg; // 0x20
	uint32_t IsProto : 1; // 0x30
};

struct FDebugTextInfo {
	ObjectProperty SrcActor; // 0x0
	FVector SrcActorOffset; // 0x8
	FVector SrcActorDesiredOffset; // 0x14
	FString DebugText; // 0x20
	float TimeRemaining; // 0x30
	float Duration; // 0x34
	FColor TextColor; // 0x38
	uint32_t bAbsoluteLocation : 1; // 0x3c
	uint32_t bKeepAttachedToActor : 1; // 0x3c
	FVector OrigActorLocation; // 0x40
	ObjectProperty Font; // 0x4c
};

struct FSocialPostLinkInfo : FSocialPostImageInfo {
	FString TitleURL; // 0x44
	FString PictureURL; // 0x54
};

struct FDepthFieldGlowInfo {
	uint32_t bEnableGlow : 1; // 0x0
	FLinearColor GlowColor; // 0x4
	FVector2D GlowOuterRadius; // 0x14
	FVector2D GlowInnerRadius; // 0x1c
};

struct FDialogMessage {
	int32_t DialogType; // 0x0
	FDialogLocalizingData LocalizationData; // 0x4
	DelegateProperty OKBtnDelegate; // 0x6c
	DelegateProperty CancelBtnDelegate; // 0x7c
	char UseDefaultDelegate; // 0x8c
};

struct FURLInfo {
	FString Support; // 0x0
	FString notice; // 0x10
	FString CashCharge; // 0x20
	FString Maintenance; // 0x30
};

struct FSubTabInfo {
	int32_t Id; // 0x0
	FString CodeName; // 0x4
	uint32_t bHide : 1; // 0x14
};

struct FButtonEnableInfo {
	int32_t LabelID; // 0x0
	uint32_t bActivate : 1; // 0x4
	uint32_t bInvert : 1; // 0x4
	FString FunctionName; // 0x8
};

struct FCylinder {
	float Radius; // 0x0
	float Height; // 0x4
};

struct FSkillTeamAnnounceSound {
	EAnnounceableSkillType Skilltype; // 0x0
	int32_t SkillUseTeamIndex; // 0x4
	ObjectProperty OurTeamSound; // 0x8
	ObjectProperty EnemyTeamSound; // 0x10
};

struct FPointer {
	int32_t Dummy; // 0x0
};

struct FVOscillator {
	FFOscillator X; // 0x0
	FFOscillator Y; // 0xc
	FFOscillator Z; // 0x18
};

struct FInteriorSettings {
	uint32_t bIsWorldInfo : 1; // 0x0
	float ExteriorVolume; // 0x4
	float ExteriorTime; // 0x8
	float ExteriorLPF; // 0xc
	float ExteriorLPFTime; // 0x10
	float InteriorVolume; // 0x14
	float InteriorTime; // 0x18
	float InteriorLPF; // 0x1c
	float InteriorLPFTime; // 0x20
};

struct FRISListDescStruct {
	FString AddImagepath; // 0x0
	int32_t AddNameID; // 0x10
	int32_t DescNameID; // 0x14
};

struct FFontParameterValue {
	FName ParameterName; // 0x0
	ObjectProperty FontValue; // 0x8
	int32_t FontPage; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FLinearColor {
	float R; // 0x0
	float G; // 0x4
	float B; // 0x8
	float A; // 0xc
};

struct FFireCountingInfo {
	int32_t userID; // 0x0
	int32_t Round; // 0x4
	int32_t WeaponID; // 0x8
	int32_t FireCount; // 0xc
};

struct FMcpGroupList {
	FString RequesterId; // 0x0
	TArray<FMcpGroup> Groups; // 0x10
};

struct FInputEventParameters {
	int32_t PlayerIndex; // 0x0
	int32_t ControllerId; // 0x4
	FName InputKeyName; // 0x8
	EInputEvent EventType; // 0x10
	float InputDelta; // 0x14
	float DeltaTime; // 0x18
	uint32_t bAltPressed : 1; // 0x1c
	uint32_t bCtrlPressed : 1; // 0x1c
	uint32_t bShiftPressed : 1; // 0x1c
};

struct FSubscribedInputEventParameters : FInputEventParameters {
	FName InputAliasName; // 0x20
};

struct FSynchronizedActorVisibilityHistory {
	FPointer State; // 0x0
	FPointer CriticalSection; // 0x8
};

struct FGFxWidgetBinding {
	FName WidgetName; // 0x0
	UGFxObject* WidgetClass; // 0x8
};

struct FTraceHitInfo {
	ObjectProperty Material; // 0x0
	ObjectProperty PhysMaterial; // 0x8
	int32_t Item; // 0x10
	int32_t LevelIndex; // 0x14
	FName BoneName; // 0x18
	int32_t BoneIndex; // 0x20
	ComponentProperty HitComponent; // 0x24
};

struct FROscillator {
	FFOscillator Pitch; // 0x0
	FFOscillator Yaw; // 0xc
	FFOscillator Roll; // 0x18
};

struct FGameOptionUIInfo {
	ObjectProperty OptionSetting; // 0x0
	char UIID; // 0x8
	uint32_t bChangeable : 1; // 0xc
	FString TitleText; // 0x10
	char DefaultIndex; // 0x20
	TArray<FString> GameOptionSet; // 0x24
};

struct FPackedNormal {
	char X; // 0x0
	char Y; // 0x1
	char Z; // 0x2
	char W; // 0x3
};

struct FRandomBoxPickUpInfo {
	FTimeData StartTime; // 0x0
	FTimeData EndTime; // 0x8
	int32_t RepeatOption; // 0x10
	FString GroupName; // 0x14
	TArray<FCubeInfo> CubeInfoList; // 0x24
};

struct FMatrix {
	FPlane XPlane; // 0x0
	FPlane YPlane; // 0x10
	FPlane ZPlane; // 0x20
	FPlane WPlane; // 0x30
};

struct FDelayedCallbackFunctionData {
	FString FunctionName; // 0x0
	TArray<FString> FunctionParameters; // 0x10
	uint32_t bCompleted : 1; // 0x20
};

struct FMcpClashMobChallengeEvent {
	FString unique_challenge_id; // 0x0
	FString Description; // 0x10
	FString visible_date; // 0x20
	FString start_date; // 0x30
	FString end_date; // 0x40
	FString completed_date; // 0x50
	FString purge_date; // 0x60
	int32_t repeat_after_days; // 0x70
	int32_t repeat_count; // 0x74
	FString challenge_type; // 0x78
	int32_t num_attempts; // 0x88
	int32_t num_successful_attempts; // 0x8c
	int32_t goal_value; // 0x90
	int32_t goal_start_value; // 0x94
	int32_t goal_current_value; // 0x98
	uint32_t has_started : 1; // 0x9c
	uint32_t is_visible : 1; // 0x9c
	uint32_t has_completed : 1; // 0x9c
	uint32_t was_successful : 1; // 0x9c
	TArray<FMcpClashMobChallengeFile> file_list; // 0xa0
	FMcpClashMobPushNotification start_notification; // 0xb0
	FMcpClashMobPushNotification end_notification; // 0xf4
	int32_t facebook_likes; // 0x138
	FString facebook_comments; // 0x13c
	float facebook_like_scaler; // 0x14c
	float facebook_comment_scaler; // 0x150
	int32_t facebook_like_goal_progress; // 0x154
	int32_t facebook_comment_goal_progress; // 0x158
	FString facebook_id; // 0x15c
	FString facebook_post_message; // 0x16c
	uint32_t wants_facebook_posting : 1; // 0x17c
	int32_t twitter_retweets; // 0x180
	float twitter_retweets_scaler; // 0x184
	int32_t twitter_goal_progress; // 0x188
	FString twitter_id; // 0x18c
	FString twitter_message; // 0x19c
	uint32_t wants_twitter_posting : 1; // 0x1ac
};

struct FLocalAuthSession : FBaseAuthSession {
	int32_t SessionUID; // 0x10
};

struct FPlayerState {
	int32_t PlayerIndex; // 0x0
	int32_t CurrentTeamIndex; // 0x4
	float TimeSpawned; // 0x8
	float TimeAliveSinceLastDeath; // 0xc
};

struct FClanMatchData {
	int32_t A_MatchWin; // 0x0
	int32_t A_MatchLose; // 0x4
	int32_t B_MatchWin; // 0x8
	int32_t B_MatchLose; // 0xc
	int32_t Rank_MatchWin; // 0x10
	int32_t Rank_MatchLose; // 0x14
	int32_t auto_A_MatchWin; // 0x18
	int32_t auto_A_MatchLose; // 0x1c
	int32_t auto_B_MatchWin; // 0x20
	int32_t auto_B_MatchLose; // 0x24
};

struct FNewsCacheEntry {
	FString NewsUrl; // 0x0
	EOnlineEnumerationReadState ReadState; // 0x10
	EOnlineNewsType NewsType; // 0x11
	FString NewsItem; // 0x14
	float TimeOut; // 0x24
	uint32_t bIsUnicode : 1; // 0x28
	FPointer HttpDownloader; // 0x2c
};

struct FsDamageAdjustment {
	float DamageRate; // 0x0
	float penetrationRate; // 0x4
};

struct FTakeDamageData {
	ObjectProperty Victim; // 0x0
	int32_t DamageAmount; // 0x8
	ObjectProperty EventInstigator; // 0xc
	FVector HitLocation; // 0x14
	FVector Momentum; // 0x20
	UDamageType* DamageType; // 0x2c
	FPointer CombatDamageType; // 0x34
	FTraceHitInfo HitInfo; // 0x3c
	ObjectProperty DamageCauser; // 0x68
	eStatType_HitPart HitPart; // 0x70
	int32_t HealthWhenTakeDamage; // 0x74
};

struct FModeNameStruct {
	FString ModeCodeName; // 0x0
	int32_t CommonModeNameLabelID; // 0x10
	int32_t ModeNameLabelIDs[0x2]; // 0x14
	FString CommonModeNameLabel; // 0x1c
	FString ModeNameLabels[0x2]; // 0x2c
};

struct FASColorTransform {
	FLinearColor Multiply; // 0x0
	FLinearColor Add; // 0x10
};

struct FHitSound {
	ObjectProperty FirstPersonBeShotSound; // 0x0
	ObjectProperty FirstPersonBeShotVoice; // 0x8
	ObjectProperty FirstPersonHitSound; // 0x10
	ObjectProperty ThirdPersonSound; // 0x18
};

struct FCoverReplicationInfo {
	ObjectProperty Link; // 0x0
	TArray<char> SlotsEnabled; // 0x8
	TArray<char> SlotsDisabled; // 0x18
	TArray<char> SlotsAdjusted; // 0x28
	TArray<FManualCoverTypeInfo> SlotsCoverTypeChanged; // 0x38
};

struct FOnlineImageDownload {
	FString URL; // 0x0
	ObjectProperty HTTPRequest; // 0x10
	EOnlineImageDownloadState State; // 0x18
	uint32_t bPendingRemoval : 1; // 0x1c
	ObjectProperty Texture; // 0x20
};

struct FHostageTakeHitInfo {
	FVector HitLocation; // 0x0
	UDamageType* DamageType; // 0xc
	float HitTime; // 0x14
};

struct FTerrainMaterialMask {
	FQWord BitMask; // 0x0
	int32_t NumBits; // 0x8
};

struct FPositionInfoStruct {
	FString PositionName; // 0x0
	FString PositionDesc; // 0x10
	TArray<FSkillInfoStruct> SkillInfolist; // 0x20
};

struct FPlayerNickMetaData {
	FName PlayerNickName; // 0x0
	FString PlayerNickColumnName; // 0x8
};

struct FInterpEdSelKey {
	ObjectProperty Group; // 0x0
	ObjectProperty Track; // 0x8
	int32_t KeyIndex; // 0x10
	float UnsnappedPosition; // 0x14
};

struct FCustomInput {
	FString InputName; // 0x0
	FExpressionInput Input; // 0x10
};

struct FNameplateRawData : FIconRawData {
	ObjectProperty ChampionshipObserverPlayerNameTF; // 0x20
	ObjectProperty ChampionshipObserverIndexTF; // 0x28
	ObjectProperty FriendlyPlayerNameTF; // 0x30
	ObjectProperty ViewTargetHPMC; // 0x38
	ObjectProperty VCHPMC; // 0x40
	ObjectProperty PMHPMC; // 0x48
	ObjectProperty ViewTargetHP_GaugeMC; // 0x50
	ObjectProperty VCHPMC_GaugeMC; // 0x58
	ObjectProperty PMHPMC_GaugeMC; // 0x60
};

struct FNxDestructibleParameters {
	FNxDestructibleDamageParameters DamageParameters; // 0x0
	FNxDestructibleDebrisParameters DebrisParameters; // 0x14
	FNxDestructibleAdvancedParameters AdvancedParameters; // 0x40
	float DamageThreshold; // 0x58
	float DamageToRadius; // 0x5c
	float DamageCap; // 0x60
	float ForceToDamage; // 0x64
	float ImpactVelocityThreshold; // 0x68
	float MaterialStrength; // 0x6c
	float DamageToPercentDeformation; // 0x70
	float DeformationPercentLimit; // 0x74
	uint32_t bFormExtendedStructures : 1; // 0x78
	int32_t SupportDepth; // 0x7c
	int32_t MinimumFractureDepth; // 0x80
	int32_t DebrisDepth; // 0x84
	int32_t EssentialDepth; // 0x88
	float DebrisLifetimeMin; // 0x8c
	float DebrisLifetimeMax; // 0x90
	float DebrisMaxSeparationMin; // 0x94
	float DebrisMaxSeparationMax; // 0x98
	FBox ValidBounds; // 0x9c
	float MaxChunkSpeed; // 0xb8
	float MassScaleExponent; // 0xbc
	FNxDestructibleParametersFlag Flags; // 0xc0
	float GrbVolumeLimit; // 0xc4
	float GrbParticleSpacing; // 0xc8
	float FractureImpulseScale; // 0xcc
	TArray<FNxDestructibleDepthParameters> DepthParameters; // 0xd0
	int32_t DynamicChunksDominanceGroup; // 0xe0
	uint32_t UseDynamicChunksGroupsMask : 1; // 0xe4
	ERBCollisionChannel DynamicChunksChannel; // 0xe8
	FRBCollisionChannelContainer DynamicChunksCollideWithChannels; // 0xec
};

struct FSkillSaveInfo {
	int32_t remainCount; // 0x0
	float CoolTime; // 0x4
	float WorldCoolTime; // 0x8
	int32_t checkcooltime; // 0xc
	WordProperty RemainMagazineAmmo; // 0x10
	WordProperty RemainAmmoCount; // 0x12
	char RemainSubMagazineAmmo; // 0x14
	char RemainSubAmmoCount; // 0x15
	uint32_t bIsActivate : 1; // 0x18
	uint32_t bIsHold : 1; // 0x18
	uint32_t bCanBuySkill : 1; // 0x18
};

struct FMcpGroupMember {
	FString MemberId; // 0x0
	EMcpGroupAcceptState AcceptState; // 0x10
};

struct FPopupItemInfo {
	EDashBoardPopupType Id; // 0x0
	int32_t CaptionID; // 0x4
	FString CodeName; // 0x8
};

struct FViewParticleEmitterInstanceMotionBlurInfo {
	FMap_Mirror EmitterInstanceMBInfoMap; // 0x0
};

struct FUniqueNetId {
	FQWord Uid; // 0x0
};

struct FExpressionInput {
	ObjectProperty Expression; // 0x0
	int32_t OutputIndex; // 0x8
	FString InputName; // 0xc
	int32_t Mask; // 0x1c
	int32_t MaskR; // 0x20
	int32_t MaskG; // 0x24
	int32_t MaskB; // 0x28
	int32_t MaskA; // 0x2c
	int32_t GCC64_Padding; // 0x30
};

struct FSAIBeaconVisitInfo {
	ObjectProperty VisitAIBeacon; // 0x0
	int32_t VisitNumber; // 0x8
};

struct Fdword {
	int32_t A; // 0x0
};

struct FHideBoneDataByWeaponState {
	FName BoneName; // 0x0
	EWeaponState StateIndex; // 0x8
};

struct FInterpCurvePointVector2D {
	float InVal; // 0x0
	FVector2D OutVal; // 0x4
	FVector2D ArriveTangent; // 0xc
	FVector2D LeaveTangent; // 0x14
	EInterpCurveMode InterpMode; // 0x1c
};

struct FRoundConditionAudioComponentInfo {
	TArray<ComponentProperty> Sounds; // 0x0
};

struct FGivenWeaponInfo {
	FString ClassName; // 0x0
	Team ApplyTeamIndex; // 0x10
};

struct FPBRuleLink {
	ObjectProperty NextRule; // 0x0
	FName LinkName; // 0x8
};

struct FDeferredPartToSpawn {
	int32_t ChunkIndex; // 0x0
	FVector InitialVel; // 0x4
	FVector InitialAngVel; // 0x10
	float RelativeScale; // 0x1c
	uint32_t bExplosion : 1; // 0x20
};

struct FPlayerCompetitionPoint {
	int32_t Mode_ID; // 0x0
	int32_t tier_point; // 0x4
	int32_t max_tier_point; // 0x8
	int32_t prev_tier_point; // 0xc
};

struct FSeqVarLink {
	USequenceVariable* ExpectedType; // 0x0
	TArray<ObjectProperty> LinkedVariables; // 0x8
	FString LinkDesc; // 0x18
	FName LinkVar; // 0x28
	FName PropertyName; // 0x30
	uint32_t bWriteable : 1; // 0x38
	uint32_t bSequenceNeverReadsOnlyWritesToThisVar : 1; // 0x38
	uint32_t bModifiesLinkedObject : 1; // 0x38
	uint32_t bHidden : 1; // 0x38
	int32_t MinVars; // 0x3c
	int32_t MaxVars; // 0x40
	int32_t DrawX; // 0x44
	ObjectProperty CachedProperty; // 0x48
	uint32_t bAllowAnyType : 1; // 0x50
	uint32_t bMoving : 1; // 0x50
	uint32_t bClampedMax : 1; // 0x50
	uint32_t bClampedMin : 1; // 0x50
};

struct FBuyPriceStruct {
	int32_t Id; // 0x0
	FString Period; // 0x4
	FString Price; // 0x14
	int32_t Icon; // 0x24
};

struct FMap_Mirror {
	FSet_Mirror Pairs; // 0x0
};

struct FDebugNavCost {
	FString Desc; // 0x0
	int32_t Cost; // 0x10
};

struct FRecordRecentlyPlayedList {
	int32_t modeFlag; // 0x0
	TArray<FRecordRecentlyPlayed> List; // 0x4
};

struct FInviteInfo {
	int32_t HostId; // 0x0
	WordProperty Password; // 0x4
};

struct FReplicatedDamageModInfo {
	char ObjIdx; // 0x0
	char ModIdx; // 0x1
	uint32_t bPartial : 1; // 0x4
};

struct FVectorWithFlag {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	uint32_t bFlag : 1; // 0xc
};

struct FSocketLocation {
	FVector LastLocation; // 0x0
	float LastTimeSeconds; // 0xc
};

struct FOnlineCrossTitleContent : FOnlineContent {
	int32_t TitleId; // 0x60
};

struct FBoneAngleMorph {
	float Angle; // 0x0
	float TargetWeight; // 0x4
};

struct FTestChangeWeaponType {
	FName Name; // 0x0
	FString Command; // 0x8
	FString CodeName; // 0x18
	FString DisplayName; // 0x28
	uint32_t Control : 1; // 0x38
	uint32_t Alt : 1; // 0x38
};

struct FAnimNotifyMITVVectorParam {
	uint32_t bOverride_ParameterValue : 1; // 0x0
	FLinearColor ParameterValue; // 0x4
	FInterpCurveVector ParameterValueCurve; // 0x14
	FName ParameterName; // 0x28
	uint32_t bClearStartTime : 1; // 0x30
	uint32_t bOverride_Loop : 1; // 0x30
	uint32_t bLoop : 1; // 0x30
	uint32_t bOverride_AutoActivate : 1; // 0x30
	uint32_t bAutoActivate : 1; // 0x30
	uint32_t bOverride_CycleTime : 1; // 0x30
	float CycleTime; // 0x34
	uint32_t bOverride_NormalizeTime : 1; // 0x38
	uint32_t bNormalizeTime : 1; // 0x38
	uint32_t bOverride_OffsetTime : 1; // 0x38
	float OffsetTime; // 0x3c
	uint32_t bOverride_OffsetFromEnd : 1; // 0x40
	uint32_t bOffsetFromEnd : 1; // 0x40
};

struct FAddoninfo {
	int32_t ImageID; // 0x0
	int32_t TitleId; // 0x4
	int32_t DescID; // 0x8
};

struct FPointLightInfo {
	FColor LightColor; // 0x0
	float Brightness; // 0x4
	float Radius; // 0x8
	float Lifetime; // 0xc
	float FalloffExponent; // 0x10
	uint32_t bSkipIfLowFrameRate : 1; // 0x14
};

struct FCurrentPlayerStateForHUDInfo {
	uint32_t bOn : 1; // 0x0
	float RemoveTime; // 0x4
};

struct FUVCoords {
	uint32_t bCustomCoords : 1; // 0x0
	float U; // 0x4
	float V; // 0x8
	float UL; // 0xc
	float VL; // 0x10
};

struct FKCachedConvexData {
	TArray<FKCachedConvexDataElement> CachedConvexElements; // 0x0
};

struct FCharacterTransactionData {
	int32_t MyUserID; // 0x0
	FString NickName; // 0x4
	FTimeData LastAccessTime; // 0x14
	FTimeData CreateIDTime; // 0x1c
	FLevelExpData LevelDatas; // 0x24
	FLevelExpData StartingLevelDatas; // 0x2c
	int32_t Rank; // 0x34
	int32_t LastRank; // 0x38
	int32_t TutorialFinishes; // 0x3c
	TMap<None, None> LastTakeStat; // 0x40
	TMap<None, None> Stat; // 0x88
	TMap<None, None> StatObtainedInConnection; // 0xd0
	Fdword MTS_Sec; // 0x118
	uint32_t OnClanShutdownPenalty : 1; // 0x11c
};

struct FUIDataStoreInputAlias {
	FName AliasName; // 0x0
	FUIInputKeyData PlatformInputKeys[0x3]; // 0x8
};

struct FPreviewSocketEntryStruct {
	FName SocketName; // 0x0
	ObjectProperty PreviewMesh; // 0x8
	ObjectProperty AnimsetToUse; // 0x10
	FName BaseSequenceName; // 0x18
};

struct FLightMapRef {
	FPointer Reference; // 0x0
};

struct FSkillInfoStruct {
	FString ImageURL; // 0x0
	FString Name; // 0x10
	FString Desc; // 0x20
};

struct FMaterialScalarParamMod {
	ObjectProperty MatInst; // 0x0
	FName ParamName; // 0x8
	float ScalarVal; // 0x10
};

struct FMatchroomPlayerTierStruct {
	int32_t userID; // 0x0
	int32_t TierPoint; // 0x4
	int32_t Prev_TierPoint; // 0x8
	int32_t CompMatchCount; // 0xc
	int32_t EmblemEdgeID; // 0x10
};

struct FTranslationPack {
	FString ProfileName; // 0x0
	FVector Translation; // 0x10
};

struct FClassIconStruct {
	FString SmallIcon; // 0x0
	FString BigIcon; // 0x10
	int32_t SmallIconImageID; // 0x20
	int32_t BigIconImageID; // 0x24
};

struct FSendTextInfo {
	FString Text; // 0x0
	char Error_Code; // 0x10
};

struct FEmitterBaseInfo {
	ComponentProperty PSC; // 0x0
	ObjectProperty Base; // 0x8
	FVector RelativeLocation; // 0x10
	FRotator RelativeRotation; // 0x1c
	uint32_t bInheritBaseScale : 1; // 0x28
};

struct FWavePawnData {
	int32_t PawnName; // 0x0
	int32_t CR; // 0x4
	int32_t RankExp; // 0x8
	int32_t SpreadMin; // 0xc
	int32_t SpreadRand; // 0x10
	FString Desc; // 0x14
	int32_t Score; // 0x24
	int32_t ScoreStrID; // 0x28
	uint32_t bTeamBonus : 1; // 0x2c
	int32_t TeamCR; // 0x30
	int32_t TeamRankExp; // 0x34
	ObjectProperty Spawner; // 0x38
};

struct FViewOffsetData {
	FVector OffsetHigh; // 0x0
	FVector OffsetMid; // 0xc
	FVector OffsetLow; // 0x18
};

struct FRenderElementInfo {
	uint32_t bIsDragItem : 1; // 0x0
	int32_t Index; // 0x4
};

struct FBasedPosition {
	ObjectProperty Base; // 0x0
	FVector Position; // 0x8
	FVector CachedBaseLocation; // 0x14
	FRotator CachedBaseRotation; // 0x20
	FVector CachedTransPosition; // 0x2c
};

struct FTacticalMapPlayerIconInfo {
	uint32_t bActivate : 1; // 0x0
	uint32_t bActivate_Spec : 1; // 0x0
	uint32_t bDisplayWhenNoRendering : 1; // 0x0
	int32_t DisplayWhenNoRenderingDistance; // 0x4
};

struct FMatchRoomInfo {
	int32_t Number; // 0x0
	char Open_Type; // 0x4
	char Title_Type; // 0x5
	char Title_Number; // 0x6
	FString Title; // 0x8
	int32_t Mode_Group_ID; // 0x18
	int32_t Mode_ID; // 0x1c
	int32_t Map_ID; // 0x20
	char Current_User; // 0x24
	char MatchRoomState; // 0x25
	char Max_User; // 0x26
	int32_t Region; // 0x28
	uint32_t bAutoTeamBalance : 1; // 0x2c
};

struct F__ASPECT {
	int32_t aspectHoriz; // 0x0
	int32_t aspectVert; // 0x4
	TArray<F__RESOLUTION> Resolution; // 0x8
};

struct FSupportedSubTrackInfo {
	UInterpTrack* SupportedClass; // 0x0
	FString SubTrackName; // 0x8
	int32_t GroupIndex; // 0x18
};

struct FAudioEQEffect {
	FDouble RootTime; // 0x0
	float HFFrequency; // 0x8
	float HFGain; // 0xc
	float MFCutoffFrequency; // 0x10
	float MFBandwidth; // 0x14
	float MFGain; // 0x18
	float LFFrequency; // 0x1c
	float LFGain; // 0x20
};

struct FPBScope2D {
	FMatrix ScopeFrame; // 0x0
	float DimX; // 0x40
	float DimZ; // 0x44
};

struct FSoftBodySpecialBoneInfo {
	FName BoneName; // 0x0
	SoftBodyBoneType BoneType; // 0x8
	TArray<int32_t> AttachedVertexIndices; // 0xc
};

struct FInactiveStatInfo {
	int32_t PlayerID; // 0x0
	FUniqueNetId UniqueId; // 0x4
	FString PlayerName; // 0xc
	TArray<FPlayerStatInfo> stat_array; // 0x1c
};

struct FBiasedGoalActor {
	ObjectProperty Goal; // 0x0
	int32_t ExtraCost; // 0x8
};

struct FBuildingMeshInfo {
	ObjectProperty Mesh; // 0x0
	float DimX; // 0x8
	float DimZ; // 0xc
	float Chance; // 0x10
	ComponentProperty Translation; // 0x14
	ComponentProperty Rotation; // 0x1c
	uint32_t bMeshScaleTranslation : 1; // 0x24
	uint32_t bOverrideMeshLightMapRes : 1; // 0x24
	int32_t OverriddenMeshLightMapRes; // 0x28
	TArray<ObjectProperty> MaterialOverrides; // 0x2c
	TArray<FBuildingMatOverrides> SectionOverrides; // 0x3c
};

struct FRadioDisplayInfo {
	ObjectProperty Sound; // 0x0
	int32_t LocalizedStrID; // 0x8
};

struct FMcpClashMobChallengeFile {
	uint32_t should_keep_post_challenge : 1; // 0x0
	FString title_id; // 0x4
	FString file_name; // 0x14
	FString dl_name; // 0x24
	FString hash_code; // 0x34
	FString Type; // 0x44
	McpChallengeFileStatus Status; // 0x54
};

struct FPassiveWheel {
	float SteerFactor; // 0x0
	FName SkelControlName; // 0x4
	ObjectProperty WheelControl; // 0xc
	float Radius; // 0x14
	FName WheelBoneName; // 0x18
	float MaxTravel; // 0x20
	float TravelAdjustment; // 0x24
	uint32_t ParticleInitialised : 1; // 0x28
	UParticleSystemComponent* WheelPSCClass; // 0x2c
	ObjectProperty ParticleTemplate; // 0x34
	ComponentProperty WheelParticleComp; // 0x3c
	FName SlipParticleParamName; // 0x44
	FName TraceStartSocket; // 0x4c
};

struct FOnlineGameSearchORClause {
	TArray<FOnlineGameSearchParameter> OrParams; // 0x0
};

struct FTouchData {
	int32_t Handle; // 0x0
	char TouchpadIndex; // 0x4
	FVector2D Location; // 0x8
	float TotalMoveDistance; // 0x10
	FDouble InitialDeviceTime; // 0x14
	float TouchDuration; // 0x1c
	FDouble MoveEventDeviceTime; // 0x20
	float MoveDeltaTime; // 0x28
	uint32_t bInUse : 1; // 0x2c
	ObjectProperty Zone; // 0x30
	ETouchType State; // 0x38
	TArray<FTouchDataEvent> Events; // 0x3c
	float LastActiveTime; // 0x4c
};

struct FMcpGroup {
	FString OwnerId; // 0x0
	FString GroupID; // 0x10
	FString GroupName; // 0x20
	EMcpGroupAccessLevel AccessLevel; // 0x30
	TArray<FMcpGroupMember> Members; // 0x34
};

struct FDestroyedEffectParams {
	ObjectProperty ParticleEffect; // 0x0
	FVector RelativeOffset; // 0x8
	FRotator RelativeRotation; // 0x14
	float MaxSpawnDist; // 0x20
	FName SocketName; // 0x24
};

struct FSet_Mirror {
	FSparseArray_Mirror Elements; // 0x0
	int32_t InlineHash; // 0x38
	FPointer Hash; // 0x3c
	int32_t HashSize; // 0x44
};

struct FSettingsProperty {
	int32_t PropertyId; // 0x0
	FSettingsData Data; // 0x4
	EOnlineDataAdvertisementType AdvertisementType; // 0x14
};

struct FIndirectArray_Mirror {
	FPointer Data; // 0x0
	int32_t ArrayNum; // 0x8
	int32_t ArrayMax; // 0xc
};

struct FTeamState {
	int32_t TeamIndex; // 0x0
	TArray<int32_t> PlayerIndices; // 0x4
};

struct FMobilePostProcessSettings {
	uint32_t bOverride_Mobile_BlurAmount : 1; // 0x0
	uint32_t bOverride_Mobile_TransitionTime : 1; // 0x0
	uint32_t bOverride_Mobile_Bloom_Scale : 1; // 0x0
	uint32_t bOverride_Mobile_Bloom_Threshold : 1; // 0x0
	uint32_t bOverride_Mobile_Bloom_Tint : 1; // 0x0
	uint32_t bOverride_Mobile_DOF_Distance : 1; // 0x0
	uint32_t bOverride_Mobile_DOF_MinRange : 1; // 0x0
	uint32_t bOverride_Mobile_DOF_MaxRange : 1; // 0x0
	uint32_t bOverride_Mobile_DOF_NearBlurFactor : 1; // 0x0
	uint32_t bOverride_Mobile_DOF_FarBlurFactor : 1; // 0x0
	float Mobile_BlurAmount; // 0x4
	float Mobile_TransitionTime; // 0x8
	float Mobile_Bloom_Scale; // 0xc
	float Mobile_Bloom_Threshold; // 0x10
	FLinearColor Mobile_Bloom_Tint; // 0x14
	float Mobile_DOF_Distance; // 0x24
	float Mobile_DOF_MinRange; // 0x28
	float Mobile_DOF_MaxRange; // 0x2c
	float Mobile_DOF_NearBlurFactor; // 0x30
	float Mobile_DOF_FarBlurFactor; // 0x34
};

struct FSoundThemeBinding {
	FName ThemeName; // 0x0
	ObjectProperty Theme; // 0x8
	FString ThemeClassName; // 0x10
};

struct FImpulseData {
	FName BoneName; // 0x0
	float ImpulseRate; // 0x8
	float ImpulseRate_Stand; // 0xc
};

struct FPlayerListInfo {
	int32_t Index; // 0x0
	TArray<FName> Dirty; // 0x4
	uint32_t bDirty : 1; // 0x14
	FString Name; // 0x18
	int32_t Life; // 0x28
	char State; // 0x2c
	int32_t Health; // 0x30
	int32_t Percent; // 0x34
	uint32_t bLocalPlayer : 1; // 0x38
	char MilitaryClass; // 0x3c
	int32_t Score; // 0x40
	int32_t CR; // 0x44
	int32_t Rank; // 0x48
};

struct FFaceFXSoundCueKey {
	ObjectProperty FaceFXSoundCue; // 0x0
};

struct FRoundStatusInfo {
	int32_t TeamScore; // 0x0
	int32_t currentWave; // 0x4
	int32_t ObjectHealth; // 0x8
	int32_t ObjectHealthMax; // 0xc
	int32_t RemainingBotCount; // 0x10
};

struct FSubObjectInfo {
	char HealthPercentage; // 0x0
	ComponentProperty MeshComp; // 0x4
	ObjectProperty ExplosionTemplate; // 0xc
	TArray<ObjectProperty> Sounds; // 0x14
	TArray<ObjectProperty> ParticleTemplate; // 0x24
	uint32_t bDeactiveParticleWhenChangeSubObject : 1; // 0x34
	TArray<ComponentProperty> PSC; // 0x38
};

struct FbattleLog {
	FString CauserName; // 0x0
	FString VictimName; // 0x10
	int32_t TotalDamage; // 0x20
	int32_t DamagePercent; // 0x24
	int32_t LastHitBodyIndex; // 0x28
	float TimeStamp; // 0x2c
	uint32_t bVictimIsDead : 1; // 0x30
};

struct FChannelData {
	TArray<ComponentProperty> AudioComponents; // 0x0
};

struct FChampionshipTeamData {
	ObjectProperty TeamInfo; // 0x0
	TArray<FChampionshipMemberData> MemberList; // 0x8
};

struct FVectorMaterialParamMICData {
	TArray<ObjectProperty> MICs; // 0x0
	TArray<FVector> MICResetVectors; // 0x10
};

struct FClientAdjustment {
	float TimeStamp; // 0x0
	EPhysics newPhysics; // 0x4
	FVector NewLoc; // 0x8
	FVector NewVel; // 0x14
	ObjectProperty NewBase; // 0x20
	FVector NewFloor; // 0x28
	char bAckGoodMove; // 0x34
};

struct FComplaintReceiptInfo {
	int32_t MyUserID; // 0x0
	FString SendImageURL; // 0x4
	int32_t Complainer_ID; // 0x14
	char COMPLAINT_TYPE; // 0x18
	int32_t Complaint_Receipt_Time; // 0x1c
	int32_t TickCount; // 0x20
};

struct FOnlinePartyMember {
	FUniqueNetId UniqueId; // 0x0
	FString NickName; // 0x8
	char LocalUserNum; // 0x18
	ENATType NatType; // 0x19
	int32_t TitleId; // 0x1c
	uint32_t bIsLocal : 1; // 0x20
	uint32_t bIsInPartyVoice : 1; // 0x20
	uint32_t bIsTalking : 1; // 0x20
	uint32_t bIsInGameSession : 1; // 0x20
	uint32_t bIsPlayingThisGame : 1; // 0x20
	FQWord SessionId; // 0x24
	int32_t Data1; // 0x2c
	int32_t Data2; // 0x30
	int32_t Data3; // 0x34
	int32_t Data4; // 0x38
};

struct FTitleSafeZoneArea {
	float MaxPercentX; // 0x0
	float MaxPercentY; // 0x4
	float RecommendedPercentX; // 0x8
	float RecommendedPercentY; // 0xc
};

struct FAnimSlotDesc {
	FName SlotName; // 0x0
	int32_t NumChannels; // 0x8
};

struct FCompressedTrack {
	TArray<char> ByteStream; // 0x0
	TArray<float> Times; // 0x10
	float Mins[0x3]; // 0x20
	float Ranges[0x3]; // 0x2c
};

struct FPBFracMeshCompInfo {
	ComponentProperty FracMeshComp; // 0x0
	int32_t TopLevelScopeIndex; // 0x8
};

struct FSavedSkillInfo {
	ObjectProperty RefSkill; // 0x0
	uint32_t bHaveLicense : 1; // 0x8
	int32_t Rank; // 0xc
};

struct FDataEntry {
	int32_t Index; // 0x0
	ObjectProperty Object; // 0x4
	ObjectProperty Owner; // 0xc
	FName ObjectName; // 0x14
};

struct FInterpCurveFloat {
	TArray<FInterpCurvePointFloat> Points; // 0x0
	EInterpMethodType InterpMethod; // 0x10
};

struct FMcpMessage {
	FString MessageId; // 0x0
	FString TitleId; // 0x10
	FString ToUniqueUserId; // 0x20
	FString FromUniqueUserId; // 0x30
	FString FromFriendlyName; // 0x40
	FString MessageType; // 0x50
	FString ValidUntil; // 0x60
	EMcpMessageCompressionType MessageCompressionType; // 0x70
};

struct FMcpClashMobChallengeUserStatus {
	FString unique_challenge_id; // 0x0
	FString unique_user_id; // 0x10
	int32_t num_attempts; // 0x20
	int32_t num_successful_attempts; // 0x24
	int32_t goal_progress; // 0x28
	uint32_t did_complete : 1; // 0x2c
	FString last_update_time; // 0x30
	int32_t user_award_given; // 0x40
	FString accept_time; // 0x44
	FString facebook_like_time; // 0x54
	uint32_t enrolled_via_facebook : 1; // 0x64
	uint32_t liked_via_facebook : 1; // 0x64
	uint32_t commented_via_facebook : 1; // 0x64
	FString twitter_retweet_time; // 0x68
	uint32_t enrolled_via_twitter : 1; // 0x78
	uint32_t retweeted : 1; // 0x78
};

struct FParticleBurst {
	int32_t Count; // 0x0
	int32_t CountLow; // 0x4
	float Time; // 0x8
};

struct FAddMappingRequest {
	FString McpId; // 0x0
	FString ExternalId; // 0x10
	FString ExternalType; // 0x20
	ObjectProperty Request; // 0x30
};

struct FNxDestructibleDebrisParameters {
	float DebrisLifetimeMin; // 0x0
	float DebrisLifetimeMax; // 0x4
	float DebrisMaxSeparationMin; // 0x8
	float DebrisMaxSeparationMax; // 0xc
	FBox ValidBounds; // 0x10
};

struct FDecalData {
	ObjectProperty DecalMaterial; // 0x0
	float Width; // 0x8
	float Height; // 0xc
	float Thickness; // 0x10
	FVector2D RandomScalingRange; // 0x14
	float RandomRadiusOffset; // 0x1c
	float LifeSpan; // 0x20
	FVector2D BlendRange; // 0x24
	uint32_t bIsValid : 1; // 0x2c
	uint32_t ClipDecalsUsingFastPath : 1; // 0x2c
	uint32_t bRandomizeRotation : 1; // 0x2c
	uint32_t bFloorDecal : 1; // 0x2c
	uint32_t bForceDisplay : 1; // 0x2c
};

struct FAICmdHistoryItem {
	UGameAICommand* CmdClass; // 0x0
	float TimeStamp; // 0x8
	FString VerboseString; // 0xc
};

struct FRotationTrack {
	TArray<FQuat> RotKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FOnlineFriendMessage {
	FUniqueNetId SendingPlayerId; // 0x0
	FString SendingPlayerNick; // 0x8
	uint32_t bIsFriendInvite : 1; // 0x18
	uint32_t bIsGameInvite : 1; // 0x18
	uint32_t bWasAccepted : 1; // 0x18
	uint32_t bWasDenied : 1; // 0x18
	FString Message; // 0x1c
};

struct FNavReference {
	ObjectProperty Nav; // 0x0
	FGuid Guid; // 0x8
};

struct FShopItemValueStruct {
	int32_t RentalID; // 0x0
	int32_t ValueType; // 0x4
	int32_t PriceType; // 0x8
	int32_t Mainprice; // 0xc
	int32_t AddPriceType; // 0x10
	int32_t AddPrice[0x5]; // 0x14
	int32_t ValueRange[0x5]; // 0x28
	int32_t ItemPrice[0x5]; // 0x3c
	int32_t SalePrice[0x5]; // 0x50
	FTimeData SellSaleStart; // 0x64
	FTimeData SellSaleEnd; // 0x6c
	FString AddReplaceItem; // 0x74
	FString MailFormCodename; // 0x84
};

struct FTCameraCache {
	float TimeStamp; // 0x0
	FTPOV POV; // 0x4
};

struct FLandscapeWeightmapUsage {
	ComponentProperty ChannelUsage[0x4]; // 0x0
};

struct FOrbitOptions {
	uint32_t bProcessDuringSpawn : 1; // 0x0
	uint32_t bProcessDuringUpdate : 1; // 0x0
	uint32_t bUseEmitterTime : 1; // 0x0
};

struct F__RESOLUTION {
	int32_t Width; // 0x0
	int32_t Height; // 0x4
	TArray<int32_t> RefreshRate; // 0x8
};

struct FMenuListDragInfo {
	uint32_t bIsDragging : 1; // 0x0
	ObjectProperty TouchedItem; // 0x4
	FSelectedMenuItem OrigSelectedItem; // 0xc
	FVector2D StartTouch; // 0x18
	float TouchTime; // 0x20
	float ScrollAmount; // 0x24
	float AbsScrollAmount; // 0x28
	FDragHistoryData UpdateHistory[0x4]; // 0x2c
	int32_t NumUpdates; // 0x4c
	uint32_t bHasSelectedChanged : 1; // 0x50
};

struct FActiveDecalInfo {
	ComponentProperty Decal; // 0x0
	float LifetimeRemaining; // 0x8
};

struct FBoneAtom {
	FQuat Rotation; // 0x0
	FVector Translation; // 0x10
	float Scale; // 0x1c
};

struct FPBMemUsageInfo {
	ObjectProperty Building; // 0x0
	ObjectProperty Ruleset; // 0x8
	int32_t NumStaticMeshComponent; // 0x10
	int32_t NumInstancedStaticMeshComponents; // 0x14
	int32_t NumInstancedTris; // 0x18
	int32_t LightmapMemBytes; // 0x1c
	int32_t ShadowmapMemBytes; // 0x20
	int32_t LODDiffuseMemBytes; // 0x24
	int32_t LODLightingMemBytes; // 0x28
};

struct FInfoTabStruct {
	FString IconName; // 0x0
};

struct FTwoVectors {
	FVector v1; // 0x0
	FVector v2; // 0xc
};

struct FLayerBlendInput {
	FName LayerName; // 0x0
	ELandscapeLayerBlendType BlendType; // 0x8
	FExpressionInput LayerInput; // 0xc
	FExpressionInput HeightInput; // 0x40
	float PreviewWeight; // 0x74
	FPointer InstanceOverride; // 0x78
};

struct FAnimInfo {
	FName AnimSeqName; // 0x0
	ObjectProperty AnimSeq; // 0x8
	int32_t AnimLinkupIndex; // 0x10
};

struct FLandscapeLayerInfo {
	FName LayerName; // 0x0
	float Hardness; // 0x8
	uint32_t bNoWeightBlend : 1; // 0xc
	ObjectProperty PhysMaterial; // 0x10
	uint32_t bSelected : 1; // 0x18
};

struct FLabelInfo {
	FString Member; // 0x0
	int32_t Id; // 0x10
};

struct FSHitInfo {
	FString Name; // 0x0
	int32_t Distance; // 0x10
	int32_t Damage; // 0x14
	FString BodyName; // 0x18
};

struct FUseLockedItemInfo {
	FString CodeName; // 0x0
	TArray<int32_t> LockedBoxSlotList; // 0x10
	TArray<int32_t> KeySlotList; // 0x20
};

struct FExposedLink {
	FCoverReference TargetActor; // 0x0
	char ExposedScale; // 0x1c
};

struct FRBEdgeAngleInfo {
	float Angle; // 0x0
};

struct FThreadSafeCounter {
	int32_t Value; // 0x0
};

struct FFlashEffectDataStruct {
	float Distance; // 0x0
	FFlashEffectSettingStruct Settings[0x2]; // 0x4
};

struct FTableInfoContainer {
	char MaxContinueCount; // 0x0
	uint32_t bCheckHitPart : 1; // 0x4
	TMap<None, None> TableInfo; // 0x8
};

struct FConfiguredGameSetting {
	int32_t GameSettingId; // 0x0
	FString GameSettingsClassName; // 0x4
	FString URL; // 0x14
	ObjectProperty GameSettings; // 0x24
};

struct FIconRawData {
	ObjectProperty Icon; // 0x0
	FString FrameString; // 0x8
	int32_t FrameInt; // 0x18
	uint32_t bUsed : 1; // 0x1c
};

struct FRecoilFactor {
	int32_t VerticalRecoil_Max; // 0x0
	int32_t VerticalRecoil_MinVariable; // 0x4
	float VerticalRecoil_RefireAdded; // 0x8
	int32_t VerticalRecoil_InstantVariableMax; // 0xc
	int32_t HorizonRecoil_Max; // 0x10
	int32_t HorizonRecoil_MinVariable; // 0x14
	float HorizonRecoil_RefireAdded; // 0x18
	int32_t HorizonRecoil_InstantVariableMax; // 0x1c
	int32_t VerticalRecoil_RefireConstAdded; // 0x20
	int32_t HorizonRecoil_RefireConstAdded; // 0x24
	int32_t Deviation_Start; // 0x28
	int32_t Deviation_Max; // 0x2c
	int32_t Deviation_Added; // 0x30
	int32_t Deviation_RefireAdded; // 0x34
	int32_t Deviation_RefireMax; // 0x38
	int32_t AddedPitchVerticalRecoilOffset; // 0x3c
	int32_t AddedPitchVerticalRecoilMax; // 0x40
};

struct FTuningData {
	int32_t ItemID; // 0x0
	int32_t option_slot[0xa]; // 0x4
};

struct FProjectileClassEventData {
	FName ProjectileClassName; // 0x0
};

struct FInputKeyAction {
	FName InputKeyName; // 0x0
	EInputEvent InputKeyState; // 0x8
	TArray<FSeqOpOutputInputLink> TriggeredOps; // 0xc
	TArray<ObjectProperty> ActionsToExecute; // 0x1c
};

struct FLevelStreamingStatus {
	FName PackageName; // 0x0
	uint32_t bShouldBeLoaded : 1; // 0x8
	uint32_t bShouldBeVisible : 1; // 0x8
};

struct FLightmassPointLightSettings : FLightmassLightSettings {
	float LightSourceRadius; // 0xc
};

struct FLandingZone {
	ObjectProperty Anchor; // 0x0
	ComponentProperty LandingZoneDecal; // 0x8
};

struct FColor {
	char B; // 0x0
	char G; // 0x1
	char R; // 0x2
	char A; // 0x3
};

struct Fabilityinfo {
	int32_t NameID; // 0x0
	int32_t LockSpec; // 0x4
	int32_t EquipSpec; // 0x8
};

struct FBombIndicatorInfo {
	FLinearColor TicTacLight[0x2]; // 0x0
	ObjectProperty TictacSound; // 0x20
	float MaxCycleTime; // 0x28
	float MinCycleTime; // 0x2c
};

struct FObjectDamageModifierStaticLightingInfo {
	TArray<ObjectProperty> ShadowMaps; // 0x0
	TArray<ObjectProperty> ShadowVertexBuffers; // 0x10
	FLightMapRef LightMap; // 0x20
	TArray<FGuid> IrrelevantLights; // 0x28
};

struct FBasePlayerStateForHUDInfo {
	char Order; // 0x0
	float Duration_RespawnMode; // 0x4
	float Duration_NoRespawnMode; // 0x8
};

struct FPenetrationAvoidanceFeeler {
	FRotator AdjustmentRot; // 0x0
	float WorldWeight; // 0xc
	float PawnWeight; // 0x10
	FVector Extent; // 0x14
	int32_t TraceInterval; // 0x20
	int32_t FramesUntilNextTrace; // 0x24
};

struct FFiexdKeyCommandInfo {
	FString Command; // 0x0
	FName KeyName; // 0x10
};

struct FLocalizedSubtitle {
	FString LanguageExt; // 0x0
	TArray<FSubtitleCue> Subtitles; // 0x10
	uint32_t bMature : 1; // 0x20
	uint32_t bManualWordWrap : 1; // 0x20
	uint32_t bSingleLine : 1; // 0x20
};

struct FAimComponent {
	FName BoneName; // 0x0
	FAimTransform LU; // 0x10
	FAimTransform LC; // 0x30
	FAimTransform LD; // 0x50
	FAimTransform CU; // 0x70
	FAimTransform CC; // 0x90
	FAimTransform CD; // 0xb0
	FAimTransform RU; // 0xd0
	FAimTransform RC; // 0xf0
	FAimTransform RD; // 0x110
};

struct FPlayerInformation {
	FName ControllerName; // 0x0
	FString PlayerName; // 0x8
	FUniqueNetId UniqueId; // 0x18
	uint32_t bIsBot : 1; // 0x20
};

struct FMatchResultMapInfoData {
	int32_t LastMissionRefID; // 0x0
	int32_t LastModeGroupRefID; // 0x4
	int32_t LastModeRefID; // 0x8
	int32_t LastMapRefID; // 0xc
	int32_t ModeUIType; // 0x10
	int32_t HUDType; // 0x14
};

struct FEventTabStruct {
	int32_t TabID; // 0x0
	ObjectProperty TabClass; // 0x4
	FString ActivationCodeName; // 0xc
};

struct FRewardItemStruct {
	int32_t Day; // 0x0
	FString ItemImage; // 0x4
	TArray<FRewardItemData> Items; // 0x14
};

struct FParticleRandomSeedInfo {
	FName ParameterName; // 0x0
	uint32_t bGetSeedFromInstance : 1; // 0x8
	uint32_t bInstanceSeedIsIndex : 1; // 0x8
	uint32_t bResetSeedOnEmitterLooping : 1; // 0x8
	uint32_t bRandomlySelectSeedArray : 1; // 0x8
	TArray<int32_t> RandomSeeds; // 0xc
};

struct FPatrolPointInfo {
	ObjectProperty PatrolPoint; // 0x0
	int32_t SlotIdx; // 0x8
	float Dist; // 0xc
	int32_t Value; // 0x10
};

struct FOnlineStatsRow {
	FUniqueNetId PlayerID; // 0x0
	FSettingsData Rank; // 0x8
	FString NickName; // 0x18
	TArray<FOnlineStatsColumn> Columns; // 0x28
};

struct FLinearDOFSetup {
	char bLimited; // 0x0
	float LimitSize; // 0x4
};

struct FSAimRocket {
	FName Name; // 0x0
	int32_t Count; // 0x8
	FVector AimPSLocList[0x4]; // 0xc
};

struct FFlagParticleParam {
	FName Name; // 0x0
	FVector Vector; // 0x8
};

struct FMcpUserCloudFileInfo : FEmsFile {
	FString CreationDate; // 0x34
	FString LastUpdateDate; // 0x44
	FString CompressionType; // 0x54
};

struct FMergedMeshCacheDatum {
	Fdword ObjectID; // 0x0
	TArray<FString> MeshPartName; // 0x4
	ObjectProperty MergedMesh; // 0x14
	int32_t ReferenceCounter; // 0x1c
	EMeshGroup MeshGroupLabel; // 0x20
};

struct FMatchroomStruct {
	int32_t RegionID; // 0x0
	int32_t RoomIndex; // 0x4
	char RoomNameType; // 0x8
	char RoomNameCode; // 0x9
	FString RoomName; // 0xc
	char RoomState; // 0x1c
	char RoomOpenType; // 0x1d
	char RoomHostPreemptionState; // 0x1e
	int32_t CurrentPlayerCount; // 0x20
	int32_t RefMissionIndex; // 0x24
	int32_t RefModeIndex; // 0x28
	int32_t RefMapIndex; // 0x2c
	int32_t RefRealMapIndex_forRandom; // 0x30
	int32_t RefModeGroupIndex; // 0x34
	TArray<char> GameOptions; // 0x38
	int32_t AllowedMinLevel; // 0x48
	int32_t AllowedMaxLevel; // 0x4c
	FString MapName; // 0x50
	FString ModeName; // 0x60
	int32_t MapImageID; // 0x70
	int32_t MaxPlayerCount; // 0x74
	uint32_t bThirdSpectator : 1; // 0x78
	uint32_t bAllowIntrusion : 1; // 0x78
	uint32_t bAutoTeamBalance : 1; // 0x78
	int32_t PeaceMakerClanID; // 0x7c
	int32_t ViperCircleClanID; // 0x80
};

struct FOnlineStatsColumn {
	int32_t ColumnNo; // 0x0
	FSettingsData StatValue; // 0x4
};

struct FPolyReference {
	FActorReference OwningPylon; // 0x0
	int32_t PolyId; // 0x18
	FPointer CachedPoly; // 0x1c
};

struct FSubTrackGroup {
	FString GroupName; // 0x0
	TArray<int32_t> TrackIndices; // 0x10
	uint32_t bIsCollapsed : 1; // 0x20
	uint32_t bIsSelected : 1; // 0x20
};

struct FCCSMoveCmdData {
	CCSMoveCmd MoveCmd; // 0x0
	FVector Position; // 0x4
};

struct FMatchPlayHistoryInfo {
	FString VsClanName; // 0x0
	int32_t ChannelID; // 0x10
	int32_t ModeID; // 0x14
	int32_t MapID; // 0x18
	int32_t Score[0x2]; // 0x1c
	int32_t Kill; // 0x24
	int32_t assist; // 0x28
	int32_t death; // 0x2c
	int32_t MatchResult; // 0x30
	int32_t HeadShotKill; // 0x34
	int32_t FatalShotKill; // 0x38
	FTimeData MatchEndTime; // 0x3c
	int32_t MatchTeam; // 0x44
};

struct FMaterialInput {
	ObjectProperty Expression; // 0x0
	int32_t OutputIndex; // 0x8
	FString InputName; // 0xc
	int32_t Mask; // 0x1c
	int32_t MaskR; // 0x20
	int32_t MaskG; // 0x24
	int32_t MaskB; // 0x28
	int32_t MaskA; // 0x2c
	int32_t GCC64_Padding; // 0x30
};

struct FGrainInfoData {
	int32_t GrainExp; // 0x0
	int32_t GrainMoney; // 0x4
	int32_t GrainMedal; // 0x8
	int32_t GrainClanExp; // 0xc
	int32_t GrainClanTotalExp; // 0x10
	int32_t GrainMyRankPoint; // 0x14
	int32_t GrainClanRankPoint; // 0x18
};

struct FNavMeshPathParams {
	FPointer Interface; // 0x0
	uint32_t bCanMantle : 1; // 0x8
	uint32_t bNeedsMantleValidityTest : 1; // 0x8
	uint32_t bAbleToSearch : 1; // 0x8
	FVector SearchExtent; // 0xc
	float SearchLaneMultiplier; // 0x18
	FVector SearchStart; // 0x1c
	float MaxDropHeight; // 0x28
	float MinWalkableZ; // 0x2c
	float MaxHoverDistance; // 0x30
};

struct FPresetGeneratedPoint {
	float KeyIn; // 0x0
	float KeyOut; // 0x4
	uint32_t TangentsValid : 1; // 0x8
	float TangentIn; // 0xc
	float TangentOut; // 0x10
	EInterpCurveMode IntepMode; // 0x14
};

struct FIntPoint {
	int32_t X; // 0x0
	int32_t Y; // 0x4
};

struct FBlendInfo {
	TArray<FName> BranchStartBoneName; // 0x0
	float BlendInTime; // 0x10
	uint32_t bForceLocalSpaceBlend : 1; // 0x14
	float PlayRate; // 0x18
};

struct FFunctionExpressionInput {
	ObjectProperty ExpressionInput; // 0x0
	FGuid ExpressionInputId; // 0x8
	FExpressionInput Input; // 0x18
};

struct FInterpCurvePointLinearColor {
	float InVal; // 0x0
	FLinearColor OutVal; // 0x4
	FLinearColor ArriveTangent; // 0x14
	FLinearColor LeaveTangent; // 0x24
	EInterpCurveMode InterpMode; // 0x34
};

struct FMultiCueSplineSoundSlot {
	ObjectProperty SoundCue; // 0x0
	float PitchScale; // 0x8
	float VolumeScale; // 0xc
	int32_t StartPoint; // 0x10
	int32_t EndPoint; // 0x14
	FDouble LastUpdateTime; // 0x18
	float SourceInteriorVolume; // 0x20
	float SourceInteriorLPF; // 0x24
	float CurrentInteriorVolume; // 0x28
	float CurrentInteriorLPF; // 0x2c
	uint32_t bPlaying : 1; // 0x30
};

struct FRigidBodyState {
	FVector Position; // 0x0
	FQuat Quaternion; // 0x10
	FVector LinVel; // 0x20
	FVector AngVel; // 0x2c
	char bNewData; // 0x38
};

struct FShakeParams {
	EShakeParam X; // 0x0
	EShakeParam Y; // 0x1
	EShakeParam Z; // 0x2
	char Padding; // 0x3
};

struct FPlayerMember {
	int32_t TeamNum; // 0x0
	int32_t Skill; // 0x4
	FUniqueNetId NetId; // 0x8
};

struct FNamedObjectProperty {
	FName ObjectPropertyName; // 0x0
	FString ObjectPropertyValue; // 0x8
};

struct FSeasonPassData {
	int32_t PassType; // 0x0
	uint32_t bPremium : 1; // 0x4
	int32_t Level; // 0x8
	int32_t clearFreeLevel; // 0xc
	int32_t clearPremiumLevel; // 0x10
	int32_t beforeFreeClearLevel; // 0x14
	int32_t beforePremiumLevel; // 0x18
	int32_t Exp; // 0x1c
};

struct FInterpCurvePointVector {
	float InVal; // 0x0
	FVector OutVal; // 0x4
	FVector ArriveTangent; // 0x10
	FVector LeaveTangent; // 0x1c
	EInterpCurveMode InterpMode; // 0x28
};

struct FSDistanceCheck {
	EDistanceType CheckType; // 0x0
	float Distance; // 0x4
	BTConditionOperator DistanceOp; // 0x8
};

struct FAnimSetCallbackData {
	ObjectProperty CallbackOwner; // 0x0
	FName CallBackFunctionName; // 0x8
	FString AnimSetName; // 0x10
	char Gender; // 0x20
};

struct FShopTabStruct {
	int32_t LabelID; // 0x0
	FString Label; // 0x4
	FString CodeName; // 0x14
	uint32_t bDefaultDisabled : 1; // 0x24
	uint32_t bDisabled : 1; // 0x24
	uint32_t bSelected : 1; // 0x24
};

struct FMorphNodeConn {
	TArray<ObjectProperty> ChildNodes; // 0x0
	FName ConnName; // 0x10
	int32_t DrawY; // 0x18
};

struct FRepurchaseItem {
	int32_t InvenSlotIndex; // 0x0
	int32_t RefItemID; // 0x4
	int32_t RentalIndex; // 0x8
};

struct FRBCornerAngleInfo {
	float Angle; // 0x0
	float CornerSize; // 0x4
};

struct FStatColorMapping {
	FString StatName; // 0x0
	TArray<FStatColorMapEntry> ColorMap; // 0x10
	uint32_t DisableBlend : 1; // 0x20
};

struct FCachedWeaponInfo_GrenadeInfo {
	uint32_t bNeedUpdate : 1; // 0x0
	int32_t GrenadeACount; // 0x4
	int32_t GrenadeBCount; // 0x8
	FName EventType; // 0xc
};

struct FMissionActorInfo {
	TArray<ObjectProperty> ActorList; // 0x0
};

struct FClientBeaconConnection {
	FUniqueNetId PartyLeader; // 0x0
	float ElapsedHeartbeatTime; // 0x8
	FPointer Socket; // 0xc
};

struct FAnimSlotInfo {
	FName SlotName; // 0x0
	TArray<float> ChannelWeights; // 0x8
};

struct FLightmassCustomSettingInfo {
	FColor LightmapColor; // 0x0
	float LightmapBrightness; // 0x4
	float LightmapDesaturation; // 0x8
	FColor MinLightmapFactor; // 0xc
	FColor MinShadowFactor; // 0x10
	float Desaturation; // 0x14
};

struct FSExactLocationInfo {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FObjectCacheDatum {
	FString ObjectName; // 0x0
	UObject* ObjectClass; // 0x10
	ObjectProperty ObjectData; // 0x18
	EObjectCacheTypes ObjectType; // 0x20
	int32_t ReferenceCounter; // 0x24
};

struct FSelectedMenuItem {
	int32_t Index; // 0x0
	float Offset; // 0x4
	uint32_t bEndOfList : 1; // 0x8
};

struct FAnimGroup {
	TArray<ObjectProperty> SeqNodes; // 0x0
	ObjectProperty SynchMaster; // 0x10
	ObjectProperty NotifyMaster; // 0x18
	FName GroupName; // 0x20
	float RateScale; // 0x28
	float SynchPctPosition; // 0x2c
};

struct FDecalReceiver {
	ComponentProperty Component; // 0x0
	FPointer RenderData; // 0x8
};

struct FAdvancedColorSenseStruct {
	FVector SceneShadows; // 0x0
	FVector SceneHighLights; // 0xc
	FVector SceneMidTones; // 0x18
};

struct FConnectedPeerInfo {
	FUniqueNetId PlayerID; // 0x0
	ENATType NatType; // 0x8
	uint32_t bLostConnectionToHost : 1; // 0xc
};

struct FObjectIconInfo {
	ObjectProperty Actor; // 0x0
	EObjectIconType Type; // 0x8
	int32_t Priority; // 0xc
	int32_t DescriptionID; // 0x10
};

struct FRoundInfo {
	int32_t Round; // 0x0
	int32_t Winner; // 0x4
	int32_t PlayTime; // 0x8
	TArray<FPlayInfo> VCTeamInfo; // 0xc
	TArray<FPlayInfo> PMTeamInfo; // 0x1c
};

struct FSlotMoveRef {
	FPolyReference Poly; // 0x0
	FBasedPosition Dest; // 0x24
	int32_t Direction; // 0x5c
};

struct FSettingsPropertyPropertyMetaData {
	int32_t Id; // 0x0
	FName Name; // 0x4
	FString ColumnHeaderText; // 0xc
	EPropertyValueMappingType MappingType; // 0x1c
	TArray<FIdToStringMapping> ValueMappings; // 0x20
	TArray<FSettingsData> PredefinedValues; // 0x30
	float MinVal; // 0x40
	float MaxVal; // 0x44
	float RangeIncrement; // 0x48
};

struct FDamagePerPlayer {
	ObjectProperty Attacker; // 0x0
	TArray<FDamageStorage> DamageList; // 0x8
	float LastHitTime; // 0x18
};

struct FParticleSystemReplayFrame {
	TArray<FParticleEmitterReplayFrame> Emitters; // 0x0
};

struct FAnimNotifyObjectData {
	UAnimNotify* AnimNotifyClass; // 0x0
	FName AnimSeqName; // 0x8
	ObjectProperty ObjectData; // 0x10
};

struct FTerrainPatchBounds {
	float MinHeight; // 0x0
	float MaxHeight; // 0x4
	float MaxDisplacement; // 0x8
};

struct FFrontendActorAccessoryInfo {
	ComponentProperty AccessoryMesh; // 0x0
	UCombatAccessory_Base* AccessoryClass; // 0x8
};

struct FParticleReplayTrackKey {
	float Time; // 0x0
	float Duration; // 0x4
	int32_t ClipIDNumber; // 0x8
};

struct FClientBandwidthTestData {
	EMeshBeaconBandwidthTestType TestType; // 0x0
	EMeshBeaconBandwidthTestState CurrentState; // 0x1
	int32_t NumBytesToSendTotal; // 0x4
	int32_t NumBytesSentTotal; // 0x8
	int32_t NumBytesSentLast; // 0xc
	float ElapsedTestTime; // 0x10
};

struct FPrimitiveMaterialRef {
	ComponentProperty Primitive; // 0x0
	int32_t MaterialIndex; // 0x8
};

struct FObjectDestoryBounsInfo {
	float RankExp; // 0x0
	float InGameCR; // 0x4
};

struct FWeaponClassEventData {
	FName WeaponClassName; // 0x0
};

struct FItemDescStruct {
	FString Title; // 0x0
	FString Contents; // 0x10
};

struct FHudLocalizedMessage {
	ULocalMessage* Message; // 0x0
	FString StringMessage; // 0x8
	int32_t Switch; // 0x18
	float EndOfLife; // 0x1c
	float Lifetime; // 0x20
	float PosY; // 0x24
	FColor DrawColor; // 0x28
	int32_t FontSize; // 0x2c
	ObjectProperty StringFont; // 0x30
	float DX; // 0x38
	float DY; // 0x3c
	uint32_t Drawn : 1; // 0x40
	int32_t Count; // 0x44
	ObjectProperty OptionalObject; // 0x48
};

struct FSkeletalMeshMaterialInfo {
	int32_t MaterialIndex; // 0x0
	ObjectProperty Material; // 0x4
};

struct FCommunityContentFile {
	int32_t ContentId; // 0x0
	int32_t FileId; // 0x4
	int32_t ContentType; // 0x8
	int32_t FileSize; // 0xc
	FUniqueNetId Owner; // 0x10
	int32_t DownloadCount; // 0x18
	float AverageRating; // 0x1c
	int32_t RatingCount; // 0x20
	int32_t LastRatingGiven; // 0x24
	FString LocalFilePath; // 0x28
};

struct FTextureLinkedListMirror {
	FPointer Element; // 0x0
	FPointer Next; // 0x8
	FPointer PrevLink; // 0x10
};

struct FUIAxisEmulationDefinition {
	FName AxisInputKey; // 0x0
	FName AdjacentAxisInputKey; // 0x8
	uint32_t bEmulateButtonPress : 1; // 0x10
	FName InputKeyToEmulate[0x2]; // 0x14
};

struct FBeamModifierOptions {
	uint32_t bModify : 1; // 0x0
	uint32_t bScale : 1; // 0x0
	uint32_t bLock : 1; // 0x0
};

struct FActorHitInfo {
	ObjectProperty HitActor; // 0x0
	char NumHits; // 0x8
	FImpactInfo Impact; // 0xc
};

struct FItemTuningDataUI {
	int32_t tuning_value[0xa]; // 0x0
	int32_t renew_count[0xa]; // 0x28
};

struct FCamFocusPointParams {
	ObjectProperty FocusActor; // 0x0
	FName FocusBoneName; // 0x8
	FVector FocusWorldLoc; // 0x10
	float CameraFOV; // 0x1c
	FVector2D InterpSpeedRange; // 0x20
	FVector2D InFocusFOV; // 0x28
	uint32_t bAlwaysFocus : 1; // 0x30
	uint32_t bAdjustCamera : 1; // 0x30
	uint32_t bIgnoreTrace : 1; // 0x30
	float FocusPitchOffsetDeg; // 0x34
};

struct FPlatformInterfaceData {
	FName DataName; // 0x0
	EPlatformInterfaceDataType Type; // 0x8
	int32_t IntValue; // 0xc
	float FloatValue; // 0x10
	FString StringValue; // 0x14
	ObjectProperty ObjectValue; // 0x24
};

struct FSplineConnection {
	ComponentProperty SplineComponent; // 0x0
	ObjectProperty ConnectTo; // 0x8
};

struct FTouchDataEvent {
	ETouchType EventType; // 0x0
	char TouchpadIndex; // 0x1
	FVector2D Location; // 0x4
	FDouble DeviceTime; // 0xc
};

struct FMaterialFunctionInfo {
	FGuid StateId; // 0x0
	ObjectProperty Function; // 0x10
};

struct FMITVParam {
	ObjectProperty MITV; // 0x0
	TArray<FScalarParameterValueOverTime> SavedScalarValue; // 0x8
	TArray<FVectorParameterValueOverTime> SavedVectorValue; // 0x18
	TArray<FLinearColorParameterValueOverTime> SavedLinearColorValue; // 0x28
	TArray<FTextureParameterValueOverTime> SavedTextureValue; // 0x38
	int32_t MaterialIndexInMesh; // 0x48
	uint32_t bOverridedAutoActiveAll : 1; // 0x4c
	uint32_t SavedbAutoActivate : 1; // 0x4c
	uint32_t bApplyPlayRate : 1; // 0x4c
	float SavedPlayRate; // 0x50
};

struct FWeaponEquipInfo {
	int32_t DataLoadType; // 0x0
	FString CodeName[0x9]; // 0x4
	FString ETCWeapon; // 0x94
};

struct FSoundTrackKey {
	float Time; // 0x0
	float Volume; // 0x4
	float Pitch; // 0x8
	ObjectProperty Sound; // 0xc
};

struct FExpressionOutput {
	FString OutputName; // 0x0
	int32_t Mask; // 0x10
	int32_t MaskR; // 0x14
	int32_t MaskG; // 0x18
	int32_t MaskB; // 0x1c
	int32_t MaskA; // 0x20
};

struct FLevelGridCellCoordinate {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Z; // 0x8
};

struct FConnectionBandwidthStats {
	int32_t UpstreamRate; // 0x0
	int32_t DownstreamRate; // 0x4
	int32_t RoundtripLatency; // 0x8
};

struct FSeqOpOutputLink {
	TArray<FSeqOpOutputInputLink> Links; // 0x0
	FString LinkDesc; // 0x10
	uint32_t bHasImpulse : 1; // 0x20
	uint32_t bDisabled : 1; // 0x20
	uint32_t bDisabledPIE : 1; // 0x20
	ObjectProperty LinkedOp; // 0x24
	float ActivateDelay; // 0x2c
	int32_t DrawY; // 0x30
	uint32_t bHidden : 1; // 0x34
	uint32_t bMoving : 1; // 0x34
	uint32_t bClampedMax : 1; // 0x34
	uint32_t bClampedMin : 1; // 0x34
	uint32_t bIsActivated : 1; // 0x34
};

struct FTrailSample {
	float RelativeTime; // 0x0
	FVector FirstEdgeSample; // 0x4
	FVector ControlPointSample; // 0x10
	FVector SecondEdgeSample; // 0x1c
};

struct FPolySegmentSpan {
	FPointer Poly; // 0x0
	FVector P1; // 0x8
	FVector P2; // 0x14
};

struct FClanListMatchData {
	int32_t ModeID; // 0x0
	int32_t MapID; // 0x4
	FString OtherClanName; // 0x8
	char WinCount; // 0x18
	char OtherWinCount; // 0x19
	uint32_t Outcome : 1; // 0x1c
	FTimeData MatchTime; // 0x20
};

struct FLODSoloTrack {
	TArray<char> SoloEnableSetting; // 0x0
};

struct FScreenShakeAnimStruct {
	ObjectProperty Anim; // 0x0
	uint32_t bUseDirectionalAnimVariants : 1; // 0x8
	ObjectProperty Anim_Left; // 0xc
	ObjectProperty Anim_Right; // 0x14
	ObjectProperty Anim_Rear; // 0x1c
	float AnimPlayRate; // 0x24
	float AnimScale; // 0x28
	float AnimBlendInTime; // 0x2c
	float AnimBlendOutTime; // 0x30
	uint32_t bRandomSegment : 1; // 0x34
	float RandomSegmentDuration; // 0x38
	uint32_t bSingleInstance : 1; // 0x3c
};

struct FRecoilProfileData {
	FName ProfileName; // 0x0
	FRecoilDef Data; // 0x8
};

struct FMatchPlayHistory_Script {
	FString Vs_clan_name; // 0x0
	int32_t Channel_ID; // 0x10
	int32_t Mode_ID; // 0x14
	int32_t Map_ID; // 0x18
	int32_t PM_score; // 0x1c
	int32_t VC_score; // 0x20
	int32_t Kill_count; // 0x24
	int32_t Assist_count; // 0x28
	int32_t Death_count; // 0x2c
	int32_t Match_result; // 0x30
	int32_t Head_shot_count; // 0x34
	int32_t Fatal_shot_count; // 0x38
	uint32_t bClan_match : 1; // 0x3c
};

struct FEventTrackKey {
	float Time; // 0x0
	FName EventName; // 0x4
};

struct FStaticMeshLODElement {
	ObjectProperty Material; // 0x0
	TArray<ObjectProperty> MaterialSetList; // 0x8
	TArray<int32_t> MaterialSetPackageIndex; // 0x18
	TArray<FName> MaterialSetPackageName; // 0x28
	uint32_t bEnableShadowCasting : 1; // 0x38
	uint32_t bEnableCollision : 1; // 0x40
};

struct FMobileInputZoneClassMap {
	FString Name; // 0x0
	UMobileInputZone* ClassType; // 0x10
};

struct FFilterLimit {
	uint32_t Enabled : 1; // 0x0
	float Base; // 0x4
	float NoiseScale; // 0x8
	float NoiseAmount; // 0xc
};

struct FVideoOptionPresetInfo {
	int32_t OptionItemIndex; // 0x0
	uint32_t bIsCustom : 1; // 0x4
	TArray<int32_t> SelectedByLevel; // 0x8
};

struct FBoneMirrorInfo {
	int32_t SourceIndex; // 0x0
	EAxis BoneFlipAxis; // 0x4
};

struct FDisplayData {
	int32_t win; // 0x0
	int32_t lose; // 0x4
	int32_t Kill; // 0x8
	int32_t HeadShotKill; // 0xc
	int32_t FatalKill; // 0x10
	int32_t death; // 0x14
	int32_t Suicide; // 0x18
	int32_t Runaway; // 0x1c
	int32_t bestScore; // 0x20
	int32_t bestKill; // 0x24
	int32_t BestAssist; // 0x28
	int32_t BestMission; // 0x2c
	int32_t assist; // 0x30
	FString CreateIDTime; // 0x34
	FString PlayTime; // 0x44
	int32_t Score; // 0x54
};

struct FFontParameterValueOverTime : FParameterValueOverTime {
	ObjectProperty FontValue; // 0x30
	int32_t FontPage; // 0x38
};

struct FSkelControlModifier {
	FName SkelControlName; // 0x0
	TArray<FTimeModifier> Modifiers; // 0x8
};

struct FScrNoticeInfo {
	FString msg; // 0x0
	int32_t EndTime; // 0x10
};

struct FDirHit {
	uint32_t bUsed : 1; // 0x0
	uint32_t bFadeIn : 1; // 0x0
	uint32_t bDirectAttack : 1; // 0x0
	int32_t AttackerPlayerID; // 0x4
	FVector HitLocation; // 0x8
	float Lifetime; // 0x14
};

struct FTextureUVs {
	float U; // 0x0
	float V; // 0x4
	float UL; // 0x8
	float VL; // 0xc
};

struct FReportPlayerInfo {
	int32_t Id; // 0x0
	TArray<COMPLAINT_TYPE> TypeList; // 0x4
};

struct FSItemFX {
	ObjectProperty PS_FX; // 0x0
	ComponentProperty PSC_FX; // 0x8
};

struct FVector2MaterialInput : FMaterialInput {
	uint32_t UseConstant : 1; // 0x34
	float ConstantX; // 0x38
	float ConstantY; // 0x3c
};

struct FTerrainDecoration {
	ObjectProperty Factory; // 0x0
	float MinScale; // 0x8
	float MaxScale; // 0xc
	float Density; // 0x10
	float SlopeRotationBlend; // 0x14
	int32_t RandSeed; // 0x18
	TArray<FTerrainDecorationInstance> Instances; // 0x1c
};

struct FEdgePointer {
	FPointer Dummy; // 0x0
};

struct FPlayInfo {
	int32_t userID; // 0x0
	int32_t Kill; // 0x4
	int32_t death; // 0x8
	int32_t assist; // 0xc
	int32_t Score; // 0x10
};

struct FRequiredMobileInputConfig {
	FString GroupName; // 0x0
	TArray<FString> RequireZoneNames; // 0x10
	uint32_t bIsAttractModeGroup : 1; // 0x20
};

struct FSwitchObjectCase {
	ObjectProperty ObjectValue; // 0x0
	uint32_t bFallThru : 1; // 0x8
	uint32_t bDefaultValue : 1; // 0x8
};

struct FASDisplayInfo {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float Rotation; // 0xc
	float XRotation; // 0x10
	float YRotation; // 0x14
	float XScale; // 0x18
	float YScale; // 0x1c
	float ZScale; // 0x20
	float Alpha; // 0x24
	uint32_t Visible : 1; // 0x28
	uint32_t hasX : 1; // 0x28
	uint32_t hasY : 1; // 0x28
	uint32_t hasZ : 1; // 0x28
	uint32_t hasRotation : 1; // 0x28
	uint32_t hasXRotation : 1; // 0x28
	uint32_t hasYRotation : 1; // 0x28
	uint32_t hasXScale : 1; // 0x28
	uint32_t hasYScale : 1; // 0x28
	uint32_t hasZScale : 1; // 0x28
	uint32_t hasAlpha : 1; // 0x28
	uint32_t hasVisible : 1; // 0x28
};

struct FCommunityContentMetadata {
	int32_t ContentType; // 0x0
	TArray<FSettingsProperty> MetadataItems; // 0x4
};

struct FMcpMessageList {
	FString ToUniqueUserId; // 0x0
	TArray<FMcpMessage> Messages; // 0x10
};

struct FPartyReservation {
	int32_t TeamNum; // 0x0
	FUniqueNetId PartyLeader; // 0x4
	TArray<FPlayerReservation> PartyMembers; // 0xc
};

struct FPurchaseInfo {
	FString Identifier; // 0x0
	FString DisplayName; // 0x10
	FString DisplayDescription; // 0x20
	FString DisplayPrice; // 0x30
};

struct FFireLinkItem {
	ECoverType SrcType; // 0x0
	ECoverAction SrcAction; // 0x1
	ECoverType DestType; // 0x2
	ECoverAction DestAction; // 0x3
};

struct FFullyLoadedPackagesInfo {
	EFullyLoadPackageType FullyLoadType; // 0x0
	FString Tag; // 0x4
	TArray<FName> PackagesToLoad; // 0x14
	TArray<ObjectProperty> LoadedObjects; // 0x24
};

struct FKeyValuePair {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FCustomAnimOnIdleData {
	FName EventName; // 0x0
	FName AnimSeqName; // 0x8
	float BlendInTime; // 0x10
	float BlendOutTime; // 0x14
	uint32_t bLooping : 1; // 0x18
	uint32_t bOverride : 1; // 0x18
};

struct FLightmassWorldInfoSettings {
	float StaticLightingLevelScale; // 0x0
	int32_t NumIndirectLightingBounces; // 0x4
	FColor EnvironmentColor; // 0x8
	float EnvironmentIntensity; // 0xc
	uint32_t bEnableAdvancedEnvironmentColor : 1; // 0x10
	FColor EnvironmentSunColor; // 0x14
	float EnvironmentSunIntensity; // 0x18
	float EnvironmentLightTerminatorAngle; // 0x1c
	FVector EnvironmentLightDirection; // 0x20
	float EmissiveBoost; // 0x2c
	float DiffuseBoost; // 0x30
	float SpecularBoost; // 0x34
	float IndirectNormalInfluenceBoost; // 0x38
	uint32_t bUseAmbientOcclusion : 1; // 0x3c
	uint32_t bEnableImageReflectionShadowing : 1; // 0x3c
	float DirectIlluminationOcclusionFraction; // 0x40
	float IndirectIlluminationOcclusionFraction; // 0x44
	float OcclusionExponent; // 0x48
	float FullyOccludedSamplesFraction; // 0x4c
	float MaxOcclusionDistance; // 0x50
	uint32_t bVisualizeMaterialDiffuse : 1; // 0x54
	uint32_t bVisualizeAmbientOcclusion : 1; // 0x54
	uint32_t bCompressShadowmap : 1; // 0x54
};

struct FLensFlareElementCurvePair {
	FString CurveName; // 0x0
	ObjectProperty CurveObject; // 0x10
};

struct FAwesomiumInfo {
	int32_t Index; // 0x0
	FString ImageURL; // 0x4
	FString LinkURL; // 0x14
};

struct FPhysXSceneProperties {
	FPhysXSimulationProperties PrimaryScene; // 0x0
	FPhysXSimulationProperties CompartmentRigidBody; // 0xc
	FPhysXSimulationProperties CompartmentFluid; // 0x18
	FPhysXSimulationProperties CompartmentCloth; // 0x24
	FPhysXSimulationProperties CompartmentSoftBody; // 0x30
};

struct FApexModuleDestructibleSettings {
	int32_t MaxChunkIslandCount; // 0x0
	int32_t MaxShapeCount; // 0x4
	int32_t MaxRrbActorCount; // 0x8
	float MaxChunkSeparationLOD; // 0xc
	uint32_t bOverrideMaxChunkSeparationLOD : 1; // 0x10
};

struct FTIP_Transition {
	FName TransName; // 0x0
	FName AnimName; // 0x8
	float PlayRate; // 0x10
};

struct FGameEvents {
	FMap_Mirror Events; // 0x0
};

struct FTextureParameterValue {
	FName ParameterName; // 0x0
	ObjectProperty ParameterValue; // 0x8
	FGuid ExpressionGUID; // 0x10
};

struct FGameCrowdAttachmentInfo {
	ObjectProperty StaticMesh; // 0x0
	float Chance; // 0x8
	FVector Scale3D; // 0xc
};

struct FCarriedObjectBounsInfo {
	float RankExp; // 0x0
	float InGameCR; // 0x4
};

struct FUIScoreboardData {
	int32_t Uid; // 0x0
	char TeamIndex; // 0x4
	char TotalRanking; // 0x5
	char TeamRanking; // 0x6
	FString LevelIconPath; // 0x8
	FString ClanIconPath; // 0x18
	FString ClanEdgeIconPath; // 0x28
	FString RankIconPath; // 0x38
	FString TierIconPath; // 0x48
	FString PlayerName; // 0x58
	FString CCardIconPath; // 0x68
	FString RandomBoxUrl; // 0x78
	int32_t Score; // 0x88
	int32_t Kill; // 0x8c
	int32_t death; // 0x90
	int32_t assist; // 0x94
	int32_t Life; // 0x98
	int32_t Gold; // 0x9c
	int32_t Exp; // 0xa0
	int32_t RandomBoxEffectType; // 0xa4
	int32_t GoldPercent; // 0xa8
	int32_t ExpPercent; // 0xac
	TArray<BOOSTER> BoosterItemList; // 0xb0
	uint32_t bMe : 1; // 0xc0
};

struct FDamageParameters {
	EDamageParameterOverrideMode OverrideMode; // 0x0
	float BaseDamage; // 0x4
	float Radius; // 0x8
	float Momentum; // 0xc
};

struct FChannelPropertyInfo {
	int32_t MaxUser; // 0x0
	int32_t UserCount; // 0x4
};

struct FSoundOptionItemInfo {
	FString KeyName; // 0x0
	int32_t SelectedIndex; // 0x10
	int32_t OldSelectedIndex; // 0x14
	FString FunctionName; // 0x18
	FString InitDataFunctionName; // 0x28
	FString SetValueFunctionName; // 0x38
	TArray<int32_t> ItemNameID; // 0x48
	TArray<FString> ItemNameString; // 0x58
};

struct FWeaponStatType {
	int32_t GrouppingWeaponID; // 0x0
	FString DisplayName; // 0x4
	int32_t killcount; // 0x14
	int32_t HeadshotKillCount; // 0x18
	int32_t FatalKillCount; // 0x1c
	int32_t ImageID; // 0x20
};

struct FCachedTerrainMaterialArray {
	TArray<FPointer> CachedMaterials; // 0x0
};

struct FGameCrowdAttachmentList {
	FName SocketName; // 0x0
	TArray<FGameCrowdAttachmentInfo> List; // 0x8
};

struct FEventsBase {
	FGameEvents TotalEvents; // 0x0
	TArray<FGameEvents> EventsByClass; // 0x48
};

struct FRelatedKillDataInfo {
	ObjectProperty Target; // 0x0
	int32_t killcount; // 0x8
};

struct FModeStatInfo {
	int32_t ModeID; // 0x0
	int32_t MatchCount; // 0x4
	int32_t win; // 0x8
	int32_t lose; // 0xc
	int32_t Kill; // 0x10
	int32_t assist; // 0x14
	int32_t death; // 0x18
	int32_t HeadShotKill; // 0x1c
	int32_t FatalKill; // 0x20
	int32_t Runaway; // 0x24
};

struct FRecoilParams {
	ERecoilStart X; // 0x0
	ERecoilStart Y; // 0x1
	ERecoilStart Z; // 0x2
	char Padding; // 0x3
};

struct FEquipItemInfo {
	int32_t PresetIndex; // 0x0
	int32_t InventorySlotIndex; // 0x4
	int32_t EquipSlotType; // 0x8
};

struct FScopeMaterialVectorParameter {
	FName ParameterName; // 0x0
	FLinearColor ParameterValue; // 0x8
};

struct FGameSessionInformation {
	int32_t AppTitleID; // 0x0
	int32_t PlatformType; // 0x4
	FString Language; // 0x8
	FString GameplaySessionTimestamp; // 0x18
	float GameplaySessionStartTime; // 0x28
	float GameplaySessionEndTime; // 0x2c
	uint32_t bGameplaySessionInProgress : 1; // 0x30
	FString GameplaySessionID; // 0x34
	FString GameClassName; // 0x44
	FString MapName; // 0x54
	FString MapURL; // 0x64
	int32_t SessionInstance; // 0x74
	int32_t GameTypeId; // 0x78
	FUniqueNetId OwningNetId; // 0x7c
	int32_t PlaylistId; // 0x84
};

struct FPlayerStateEffectType {
	uint32_t bIsBeginState : 1; // 0x0
	uint32_t bNeedUpdate : 1; // 0x0
	uint32_t bForceUpdate : 1; // 0x0
	DelegateProperty OnBegin; // 0x4
	DelegateProperty OnUpdate; // 0x14
	DelegateProperty OnEnd; // 0x24
};

struct FNamedSession {
	FName SessionName; // 0x0
	FPointer SessionInfo; // 0x8
	ObjectProperty GameSettings; // 0x10
	TArray<FOnlineRegistrant> Registrants; // 0x18
	TArray<FOnlineArbitrationRegistrant> ArbitrationRegistrants; // 0x28
};

struct FGameplayEventsHeader {
	int32_t EngineVersion; // 0x0
	int32_t StatsWriterVersion; // 0x4
	int32_t StreamOffset; // 0x8
	int32_t AggregateOffset; // 0xc
	int32_t FooterOffset; // 0x10
	int32_t TotalStreamSize; // 0x14
	int32_t FileSize; // 0x18
	FString FilterClass; // 0x1c
	int32_t Flags; // 0x2c
};

struct FTimeData {
	WordProperty Year; // 0x0
	WordProperty Day; // 0x2
	char Month; // 0x4
	char Hour; // 0x5
	char Min; // 0x6
	char Sec; // 0x7
};

struct FTeamEvents {
	FGameEvents TotalEvents; // 0x0
	FWeaponEvents WeaponEvents; // 0x48
	FDamageEvents DamageAsPlayerEvents; // 0xa0
	FDamageEvents DamageAsTargetEvents; // 0xf8
	FProjectileEvents ProjectileEvents; // 0x150
	FPawnEvents PawnEvents; // 0x1a8
};

struct FSPracticeGameHotKeyInfo {
	TArray<FString> Keys; // 0x0
	int32_t DescriptionID; // 0x10
};

struct FCameraCutInfo {
	FVector Location; // 0x0
	float TimeStamp; // 0xc
};

struct FScreenMessageString {
	FQWord Key; // 0x0
	FString ScreenMessage; // 0x8
	FColor DisplayColor; // 0x18
	float TimeToDisplay; // 0x1c
	float CurrentTimeDisplayed; // 0x20
};

struct FClanAttendRewardData {
	FString Thumbnail; // 0x0
	int32_t ImageID; // 0x10
	int32_t RewardNumber; // 0x14
	FString RewardCodename; // 0x18
};

struct FMMStats_Timer {
	uint32_t bInProgress : 1; // 0x0
	FDouble MSecs; // 0x4
};

struct FHostMigrationState {
	EHostMigrationProgress HostMigrationProgress; // 0x0
	float HostMigrationElapsedTime; // 0x4
	float HostMigrationTravelCountdown; // 0x8
	FString HostMigrationTravelURL; // 0xc
	uint32_t bHostMigrationEnabled : 1; // 0x1c
};

struct FSAIWeaponInfo {
	float Weight; // 0x0
	FString Path; // 0x4
	FString BehaviorTreePath; // 0x14
	int32_t UsableAIBeaconIndex; // 0x24
	AInventory* InventoryClass; // 0x28
	ObjectProperty BehaviorTreeTemplate; // 0x30
};

struct FFaceFXTrackKey {
	float StartTime; // 0x0
	FString FaceFXGroupName; // 0x4
	FString FaceFXSeqName; // 0x14
};

struct FButtonInfo {
	FString Member; // 0x0
	FString CodeName; // 0x10
	int32_t Id; // 0x20
};

struct FHitCountingInfo {
	int32_t HitIndex; // 0x0
	int32_t userID; // 0x4
	int32_t Round; // 0x8
	int32_t WeaponID; // 0xc
	EHitBodyType HitPart; // 0x10
	int32_t Distance; // 0x14
	int32_t Damage; // 0x18
	uint32_t bKill : 1; // 0x1c
	int32_t targetUserID; // 0x20
	FString HitTime; // 0x24
	int32_t FireCount; // 0x34
};

struct FMailBoxInfo {
	int32_t Id; // 0x0
	char Type; // 0x4
	int32_t SenderLevel; // 0x8
	FString SenderNick; // 0xc
	FString senderClanName; // 0x1c
	char State; // 0x2c
	FString Title; // 0x30
	FString Message; // 0x40
	int32_t Money[0x6]; // 0x50
	TArray<FAttachItemInfo> ItemList; // 0x68
	FTimeData SendTime; // 0x78
	int32_t Expiration_Time; // 0x80
	int32_t battle_pass_exp; // 0x84
};

struct FLandscapeLayerStruct {
	ObjectProperty LayerInfoObj; // 0x0
	uint32_t bSelected : 1; // 0x8
};

struct FQueuedActivationInfo {
	ObjectProperty ActivatedEvent; // 0x0
	ObjectProperty InOriginator; // 0x8
	ObjectProperty InInstigator; // 0x10
	TArray<int32_t> ActivateIndices; // 0x18
	uint32_t bPushTop : 1; // 0x28
};

struct FSMoveTowardState {
	ObjectProperty Goal; // 0x0
	ObjectProperty ViewFocus; // 0x8
	float DesiredOffset; // 0x10
	uint32_t bStrafe : 1; // 0x14
	uint32_t bShouldWalk : 1; // 0x14
};

struct FRecordRecentlyPlayed {
	FString VsClanName; // 0x0
	int32_t ChannelID; // 0x10
	int32_t ModeID; // 0x14
	int32_t MapID; // 0x18
	int32_t WinningScore[0x2]; // 0x1c
	FTimeData MatchEndTime; // 0x24
	int32_t Kill; // 0x2c
	int32_t assist; // 0x30
	int32_t death; // 0x34
	char MatchResult; // 0x38
	int32_t HeadShotKill; // 0x3c
	int32_t FatalShotKill; // 0x40
};

struct FDynamicResourceProviderDefinition {
	FName ProviderTag; // 0x0
	FString ProviderClassName; // 0x8
	UUIResourceCombinationProvider* ProviderClass; // 0x18
};

struct FDamageClassEventData {
	FName DamageClassName; // 0x0
};

struct FSDamagedInfo {
	float Damage; // 0x0
	float DamageTime; // 0x4
};

struct FHitDamageInfo {
	uint32_t bUsed : 1; // 0x0
	uint32_t bDisplayed : 1; // 0x0
	float HitTime; // 0x4
	FVector VictimLocation; // 0x8
	int32_t VictimColliHeight; // 0x14
	int32_t VictimHitDamage; // 0x18
};

struct FLevelExpData {
	int32_t AccountLevel; // 0x0
	int32_t AccountExp; // 0x4
};

struct FApexClothingAssetInfo {
	TArray<FApexClothingLodInfo> ClothingLodInfo; // 0x0
	FName ClothingAssetName; // 0x10
};

struct FSteamAchievementData {
	int32_t Id; // 0x0
	FString APIName; // 0x4
	uint32_t bAchieved : 1; // 0x14
	FString DisplayName; // 0x18
	FString Description; // 0x28
	int32_t IconImage; // 0x38
	int32_t ArchievementValue; // 0x3c
};

struct FBox {
	FVector Min; // 0x0
	FVector Max; // 0xc
	char IsValid; // 0x18
};

struct FAimTransform {
	FQuat Quaternion; // 0x0
	FVector Translation; // 0x10
};

struct FLevelStreamingData {
	uint32_t bShouldBeLoaded : 1; // 0x0
	uint32_t bShouldBeVisible : 1; // 0x0
	uint32_t bShouldBlockOnLoad : 1; // 0x0
	ObjectProperty Level; // 0x4
};

struct FRegisterUserRequest {
	FString UDID; // 0x0
	FString McpId; // 0x10
	ObjectProperty Request; // 0x20
};

struct FMenuListMovementInfo {
	uint32_t bIsMoving : 1; // 0x0
	FSelectedMenuItem OrigSelectedItem; // 0x4
	float FullMovement; // 0x10
	float TotalTime; // 0x14
	float CurrentTime; // 0x18
};

struct FArmorMeshInfo {
	ObjectProperty LeftMesh; // 0x0
	ObjectProperty RightMesh; // 0x8
	char LeftMaterialSet; // 0x10
	char RightMaterialSet; // 0x11
};

struct FWeaponFireData {
	int32_t WeaponID; // 0x0
	FVector FireLocation_Transition; // 0x4
	int32_t DBWriterID; // 0x10
};

struct FStatSaveCondition {
	uint32_t bLoseStat : 1; // 0x0
	uint32_t bDesertionStat : 1; // 0x0
	uint32_t bOtherStat : 1; // 0x0
};

struct FSplashDamageParams {
	float BaseDamage; // 0x0
	float DamageRadius; // 0x4
	UDamageType* DamageType; // 0x8
	float Momentum; // 0x10
};

struct FEmsFile {
	FString Hash; // 0x0
	FString DLName; // 0x10
	FString Filename; // 0x20
	int32_t FileSize; // 0x30
};

struct FSavedHitPartInfo {
	EHitBodyType HitPart; // 0x0
	FString HitPartName; // 0x4
};

struct FIdToStringMapping {
	int32_t Id; // 0x0
	FName Name; // 0x4
};

struct FListener {
	ObjectProperty PortalVolume; // 0x0
	FVector Location; // 0x8
	FVector Up; // 0x14
	FVector Right; // 0x20
	FVector Front; // 0x2c
	FVector Velocity; // 0x38
};

struct FSMMaterialSetterDatum {
	int32_t MaterialIndex; // 0x0
	ObjectProperty TheMaterial; // 0x4
};

struct FDragHistoryData {
	float TouchTime; // 0x0
	float TouchCoord; // 0x4
};

struct FLaunchNotificationInfo {
	uint32_t bWasLaunchedViaNotification : 1; // 0x0
	FNotificationInfo Notification; // 0x4
};

struct FArmorPointStruct {
	int32_t Point[0xa]; // 0x0
};

struct FCachedWeaponInfo_AmmoCntInfo {
	uint32_t bNeedUpdate : 1; // 0x0
	int32_t AmmoCount; // 0x4
	int32_t MaxMagazineCount; // 0x8
	int32_t RemainAmmoCount; // 0xc
	int32_t ChamberCount; // 0x10
	FName EventType; // 0x14
};

struct FScalarParameterValue {
	FName ParameterName; // 0x0
	float ParameterValue; // 0x8
	FGuid ExpressionGUID; // 0xc
};

struct FLightmassPrimitiveSettings {
	uint32_t bUseTwoSidedLighting : 1; // 0x0
	uint32_t bShadowIndirectOnly : 1; // 0x0
	uint32_t bUseEmissiveForStaticLighting : 1; // 0x0
	float EmissiveLightFalloffExponent; // 0x4
	float EmissiveLightExplicitInfluenceRadius; // 0x8
	float EmissiveBoost; // 0xc
	float DiffuseBoost; // 0x10
	float SpecularBoost; // 0x14
	float FullyOccludedSamplesFraction; // 0x18
};

struct FTrailSamplePoint {
	float RelativeTime; // 0x0
	FTrailSocketSamplePoint FirstEdgeSample; // 0x4
	FTrailSocketSamplePoint ControlPointSample; // 0x1c
	FTrailSocketSamplePoint SecondEdgeSample; // 0x34
};

struct FKeyBind {
	FName Name; // 0x0
	FString Command; // 0x8
	uint32_t Control : 1; // 0x18
	uint32_t Shift : 1; // 0x18
	uint32_t Alt : 1; // 0x18
	uint32_t bIgnoreCtrl : 1; // 0x18
	uint32_t bIgnoreShift : 1; // 0x18
	uint32_t bIgnoreAlt : 1; // 0x18
};

struct FUIKeyRepeatData {
	FName CurrentRepeatKey; // 0x0
	FDouble NextRepeatTime; // 0x8
};

struct FKAggregateGeom {
	TArray<FKSphereElem> SphereElems; // 0x0
	TArray<FKBoxElem> BoxElems; // 0x10
	TArray<FKSphylElem> SphylElems; // 0x20
	TArray<FKConvexElem> ConvexElems; // 0x30
	FPointer RenderInfo; // 0x40
	uint32_t bSkipCloseAndParallelChecks : 1; // 0x48
};

struct FApexClothingLodInfo {
	TArray<int32_t> ClothingSectionInfo; // 0x0
};

struct FHideBoneDataByScreenPos {
	FName TrackingSocketName; // 0x0
	ObjectProperty TrackingSocket; // 0x8
	FName HideBoneName; // 0x10
	int32_t HideBoneIndex; // 0x18
	float DegreeFromCenter; // 0x1c
	float DotFromCenter; // 0x20
};

struct FCrosshairOptionItemInfo {
	FString KeyName; // 0x0
	TArray<int32_t> ItemNameID; // 0x10
	TArray<FString> ItemNameString; // 0x20
	int32_t SelectedIndex; // 0x30
	int32_t OldSelectedIndex; // 0x34
	FString FunctionName; // 0x38
	FString InitDataFunctionName; // 0x48
	FString SetValueFunctionName; // 0x58
};

struct FMessengerListStruct {
	int32_t LabelID; // 0x0
	FString Label; // 0x4
	uint32_t bOpened : 1; // 0x14
	uint32_t bOpenWhenInit : 1; // 0x14
};

struct FTexture2DMipMap {
	FUntypedBulkData_Mirror Data; // 0x0
	int32_t SizeX; // 0x40
	int32_t SizeY; // 0x44
};

struct FParticleEmitterInstanceMotionBlurInfo {
	FMap_Mirror ParticleMBInfoMap; // 0x0
};

struct FMatchPlayerData {
	FString UserName; // 0x0
	int32_t EmblemID; // 0x10
	int32_t userID; // 0x14
	int32_t Kill; // 0x18
	int32_t death; // 0x1c
	int32_t assist; // 0x20
	int32_t Score; // 0x24
	int32_t Level; // 0x28
	int32_t GameLevel; // 0x2c
	uint32_t Desert : 1; // 0x30
};

struct FDamagePair {
	FName DamageCauserName; // 0x0
	FDamageParameters Params; // 0x8
};

struct FParticleEmitterReplayFrame {
	int32_t EmitterType; // 0x0
	int32_t OriginalEmitterIndex; // 0x4
	FPointer FrameState; // 0x8
};

struct FIniLocFileEntry {
	FString Filename; // 0x0
	FString DLName; // 0x10
	FString HashCode; // 0x20
	uint32_t bIsUnicode : 1; // 0x30
	EOnlineEnumerationReadState ReadState; // 0x34
};

struct FMapSymbolDescriptionInfo {
	EObjectIconType iconType; // 0x0
	int32_t DescriptionID; // 0x4
};

struct FWorldFractureSettings {
	float ChanceOfPhysicsChunkOverride; // 0x0
	uint32_t bEnableChanceOfPhysicsChunkOverride : 1; // 0x4
	uint32_t bLimitExplosionChunkSize : 1; // 0x4
	float MaxExplosionChunkSize; // 0x8
	uint32_t bLimitDamageChunkSize : 1; // 0xc
	float MaxDamageChunkSize; // 0x10
	int32_t MaxNumFacturedChunksToSpawnInAFrame; // 0x14
	float FractureExplosionVelScale; // 0x18
};

struct FAnimNotifyMITVScalarParam {
	uint32_t bOverride_ParameterValue : 1; // 0x0
	float ParameterValue; // 0x4
	FInterpCurveFloat ParameterValueCurve; // 0x8
	FName ParameterName; // 0x1c
	uint32_t bClearStartTime : 1; // 0x24
	uint32_t bOverride_Loop : 1; // 0x24
	uint32_t bLoop : 1; // 0x24
	uint32_t bOverride_AutoActivate : 1; // 0x24
	uint32_t bAutoActivate : 1; // 0x24
	uint32_t bOverride_CycleTime : 1; // 0x24
	float CycleTime; // 0x28
	uint32_t bOverride_NormalizeTime : 1; // 0x2c
	uint32_t bNormalizeTime : 1; // 0x2c
	uint32_t bOverride_OffsetTime : 1; // 0x2c
	float OffsetTime; // 0x30
	uint32_t bOverride_OffsetFromEnd : 1; // 0x34
	uint32_t bOffsetFromEnd : 1; // 0x34
};

struct FSubtitleCue {
	FString Text; // 0x0
	float Time; // 0x10
};

struct FTouchTracker {
	int32_t Handle; // 0x0
	int32_t TouchpadIndex; // 0x4
	FVector2D Location; // 0x8
	EInputEvent EventType; // 0x10
	uint32_t bTrapInput : 1; // 0x14
};

struct FOnlineFriend {
	FUniqueNetId UniqueId; // 0x0
	FQWord SessionId; // 0x8
	FString NickName; // 0x10
	FString PresenceInfo; // 0x20
	EOnlineFriendState FriendState; // 0x30
	uint32_t bIsOnline : 1; // 0x34
	uint32_t bIsPlaying : 1; // 0x34
	uint32_t bIsPlayingThisGame : 1; // 0x34
	uint32_t bIsJoinable : 1; // 0x34
	uint32_t bHasVoiceSupport : 1; // 0x34
	uint32_t bHaveInvited : 1; // 0x34
	uint32_t bHasInvitedYou : 1; // 0x34
};

struct FNearbyDynamicItem {
	ObjectProperty Dynamic; // 0x0
};

struct FSourceTexture2DRegion {
	int32_t OffsetX; // 0x0
	int32_t OffsetY; // 0x4
	int32_t SizeX; // 0x8
	int32_t SizeY; // 0xc
	int32_t DestOffsetX; // 0x10
	int32_t DestOffsetY; // 0x14
	ObjectProperty Texture2D; // 0x18
};

struct FAwaitList {
	int32_t userID; // 0x0
	FString NickName; // 0x4
	int32_t Exp; // 0x14
	int32_t CallingCardID; // 0x18
	FString ClanName; // 0x1c
	int32_t EmblemID; // 0x2c
	int32_t EmblemEdgeID; // 0x30
	int32_t ClanExp; // 0x34
	int32_t ClanColorID; // 0x38
	int32_t TierPoint; // 0x3c
	int32_t CompetitionModeID; // 0x40
	int32_t ClanBeforeSeasonTier; // 0x44
};

struct FActorSpawnParams {
	ObjectProperty Factory; // 0x0
	ObjectProperty RigidBodyMesh; // 0x8
	FVector MinLinearVel; // 0x10
	FVector MaxLinearVel; // 0x1c
	FVector MinAngularVel; // 0x28
	FVector MaxAngularVel; // 0x34
	ECollisionType CollisionType; // 0x40
	ERBCollisionChannel RBChannel; // 0x41
	FVector RelativeOffset; // 0x44
	FRotator RelativeRotation; // 0x50
	float LifeTimeSeconds; // 0x5c
	float MaxSpawnDist; // 0x60
};

struct FPresetItemStruct {
	FString Label; // 0x0
	FString mainTitle; // 0x10
	FString MainImg; // 0x20
	FString SubTitle; // 0x30
	FString SubImg; // 0x40
	FString NearTitle; // 0x50
	FString NearImg; // 0x60
	FString ThrowImg_Left; // 0x70
	FString ThrowImg_Right; // 0x80
	FString ArmorImg; // 0x90
	FString ArmorTitle; // 0xa0
	uint32_t ArmorProto : 1; // 0xb0
	uint32_t MainProto : 1; // 0xb0
	uint32_t SubProto : 1; // 0xb0
	uint32_t NearProto : 1; // 0xb0
};

struct FInterpCurveLinearColor {
	TArray<FInterpCurvePointLinearColor> Points; // 0x0
	EInterpMethodType InterpMethod; // 0x10
};

struct FRecogUserData {
	int32_t ActiveVocabularies; // 0x0
	TArray<char> UserData; // 0x4
};

struct FPresetSlotState {
	int32_t PresetIndex; // 0x0
	int32_t WeaponID; // 0x4
	uint32_t LaserOn : 1; // 0x8
	uint32_t SilencerOn : 1; // 0x8
};

struct FDebugDisplayProperty {
	ObjectProperty Obj; // 0x0
	FName PropertyName; // 0x8
	uint32_t bSpecialProperty : 1; // 0x10
};

struct FMeshPart {
	EPartType PartType; // 0x0
	ObjectProperty Mesh; // 0x4
	ObjectProperty Material; // 0xc
	char MaterialSet; // 0x14
	uint32_t bIsMainMesh : 1; // 0x18
	uint32_t bConstructMaterialInstance : 1; // 0x18
};

struct FParticleEventKismetData : FParticleEventData {
	uint32_t UsePSysCompLocation : 1; // 0x34
	FVector Normal; // 0x38
};

struct FAimOffsetProfile {
	FName ProfileName; // 0x0
	FVector2D HorizontalRange; // 0x8
	FVector2D VerticalRange; // 0x10
	TArray<FAimComponent> AimComponents; // 0x18
	FName AnimName_LU; // 0x28
	FName AnimName_LC; // 0x30
	FName AnimName_LD; // 0x38
	FName AnimName_CU; // 0x40
	FName AnimName_CC; // 0x48
	FName AnimName_CD; // 0x50
	FName AnimName_RU; // 0x58
	FName AnimName_RC; // 0x60
	FName AnimName_RD; // 0x68
};

struct FMaterialReplaceMod {
	ObjectProperty NewMaterial; // 0x0
	int32_t MaterialIndex; // 0x8
};

struct FIFFObjectData {
	uint32_t bUsing : 1; // 0x0
	ObjectProperty IFFObject; // 0x4
};

struct FRBSplitInfo {
	uint32_t bFixSize : 1; // 0x0
	float FixedSize; // 0x4
	float ExpandRatio; // 0x8
	FName SplitName; // 0xc
};

struct FServerResponseLine {
	int32_t ServerID; // 0x0
	FString IP; // 0x4
	int32_t Port; // 0x14
	int32_t QueryPort; // 0x18
	FString ServerName; // 0x1c
	FString MapName; // 0x2c
	FString GameType; // 0x3c
	int32_t CurrentPlayers; // 0x4c
	int32_t MaxPlayers; // 0x50
	int32_t Ping; // 0x54
	TArray<FKeyValuePair> ServerInfo; // 0x58
	TArray<FPlayerResponseLine> PlayerInfo; // 0x68
};

struct FInGameSingleResource {
	ObjectProperty Resource; // 0x0
	FString ResourcePath; // 0x8
	Fdword StringHash; // 0x18
};

struct FCachedChampionshipPlayerInfoStruct {
	int32_t Index; // 0x0
	int32_t userID; // 0x4
	FString PlayerName; // 0x8
	FString WeaponName; // 0x18
	int32_t TeamIndex; // 0x28
	int32_t HealthMax; // 0x2c
	int32_t Health; // 0x30
	int32_t TotalKillCounts; // 0x34
	int32_t Status; // 0x38
	int32_t WeaponID; // 0x3c
	uint32_t bHasC4 : 1; // 0x40
	uint32_t bNeedUpdateIndex : 1; // 0x40
	uint32_t bNeedUpdatePlayerName : 1; // 0x40
	uint32_t bNeedUpdateTeamIndex : 1; // 0x40
	uint32_t bNeedUpdateHealthMax : 1; // 0x40
	uint32_t bNeedUpdateHealth : 1; // 0x40
	uint32_t bNeedUpdateTotalKillCounts : 1; // 0x40
	uint32_t bNeedUpdateStaus : 1; // 0x40
	uint32_t bNeedUpdateHasC4 : 1; // 0x40
	uint32_t bNeedUpdateWeaponName : 1; // 0x40
	uint32_t bFinishChecked : 1; // 0x40
};

struct FActionTableDataType {
	FName Action; // 0x0
	FName Event; // 0x8
	FString CodeName; // 0x10
};

struct FRotator {
	int32_t Pitch; // 0x0
	int32_t Yaw; // 0x4
	int32_t Roll; // 0x8
};

struct FTickableActors {
	ObjectProperty PreviousTickableActor; // 0x0
	ObjectProperty PostTickableActor; // 0x8
};

struct FNetViewer {
	ObjectProperty InViewer; // 0x0
	ObjectProperty Viewer; // 0x8
	FVector ViewLocation; // 0x10
	FVector ViewDir; // 0x1c
};

struct FNamedNetDriver {
	FName NetDriverName; // 0x0
	FPointer NetDriver; // 0x8
};

struct FLevelStreamingNameCombo {
	ObjectProperty Level; // 0x0
	FName LevelName; // 0x8
};

struct FKillMarkStringStruct {
	int32_t KMStringID; // 0x0
	FString KMName; // 0x4
};

struct FEventUploadConfig {
	EEventUploadType UploadType; // 0x0
	FString UploadUrl; // 0x4
	float TimeOut; // 0x14
	uint32_t bUseCompression : 1; // 0x18
};

struct FMatchroomPingLevel {
	char RegionID; // 0x0
	int32_t pingLevel; // 0x4
};

struct FScoreStruct {
	float Score; // 0x0
	float MissionScore; // 0x4
};

struct FVector2D {
	float X; // 0x0
	float Y; // 0x4
};

struct FMaterialSetListMaterialDatum {
	Fdword ObjectID; // 0x0
	ObjectProperty MaterialSetListMaterial; // 0x4
	int32_t ReferenceCounter; // 0xc
	FDouble LastAccessTime; // 0x10
};

struct FAITypeInfo {
	FString PawnClassName; // 0x0
	FString ControllerClassName; // 0x10
	TArray<FString> WeaponClassName; // 0x20
	FString CCSBTTreeName; // 0x30
	APawn* PawnClass; // 0x40
	ACombatBotController* ControllerClass; // 0x48
	TArray<ACombatWeapon*> WeaponClass; // 0x50
	ObjectProperty CCSBTTree; // 0x60
};

struct FFontImportOptionsData {
	FString FontName; // 0x0
	float Height; // 0x10
	uint32_t bEnableAntialiasing : 1; // 0x14
	uint32_t bEnableBold : 1; // 0x14
	uint32_t bEnableItalic : 1; // 0x14
	uint32_t bEnableUnderline : 1; // 0x14
	uint32_t bAlphaOnly : 1; // 0x14
	EFontImportCharacterSet CharacterSet; // 0x18
	FString Chars; // 0x1c
	FString UnicodeRange; // 0x2c
	FString CharsFilePath; // 0x3c
	FString CharsFileWildcard; // 0x4c
	uint32_t bCreatePrintableOnly : 1; // 0x5c
	uint32_t bIncludeASCIIRange : 1; // 0x5c
	FLinearColor ForegroundColor; // 0x60
	uint32_t bEnableDropShadow : 1; // 0x70
	int32_t TexturePageWidth; // 0x74
	int32_t TexturePageMaxHeight; // 0x78
	int32_t XPadding; // 0x7c
	int32_t YPadding; // 0x80
	int32_t ExtendBoxTop; // 0x84
	int32_t ExtendBoxBottom; // 0x88
	int32_t ExtendBoxRight; // 0x8c
	int32_t ExtendBoxLeft; // 0x90
	uint32_t bEnableLegacyMode : 1; // 0x94
	int32_t Kerning; // 0x98
	uint32_t bUseDistanceFieldAlpha : 1; // 0x9c
	int32_t DistanceFieldScaleFactor; // 0xa0
	float DistanceFieldScanRadiusScale; // 0xa4
};

struct FAutoCompleteNode {
	int32_t IndexChar; // 0x0
	TArray<int32_t> AutoCompleteListIndices; // 0x4
	TArray<FPointer> ChildNodes; // 0x14
};

struct FAttractLocationBoneSocketInfo {
	FName BoneSocketName; // 0x0
	FVector Offset; // 0x8
};

struct FRClickPopupMenuItem {
	int32_t NameCode; // 0x0
	int32_t userID; // 0x4
	uint32_t Disabled : 1; // 0x8
	uint32_t HostOnly : 1; // 0x8
};

struct FRecentInteraction {
	FName InteractionTag; // 0x0
	float InteractionDelay; // 0x8
};

struct FNameplateData {
	TArray<FNameplateRawData> Icons; // 0x0
	FString LinkageName; // 0x10
	FString BaseInstanceName; // 0x20
};

struct FGameSpecialMoveInfo {
	FName SpecialMoveName; // 0x0
	UGameSpecialMove* SpecialMoveClass; // 0x8
	ObjectProperty SpecialMoveInstance; // 0x10
};

struct FRawAnimSequenceTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<FQuat> RotKeys; // 0x10
};

struct FMatchOnOffInfo {
	uint32_t bHide : 1; // 0x0
	int32_t modeFlag; // 0x4
	FString CodeName; // 0x8
};

struct FPreviewAnimSetsStruct {
	FName DisplayName; // 0x0
	TArray<ObjectProperty> PreviewAnimSets; // 0x8
};

struct FDirectorTrackCut {
	float Time; // 0x0
	float TransitionTime; // 0x4
	FName TargetCamGroup; // 0x8
	int32_t ShotNumber; // 0x10
};

struct FPeriodAttendDay {
	int32_t attend_day; // 0x0
	uint32_t attend_check : 1; // 0x4
	uint32_t is_receive_reward : 1; // 0x4
};

struct FsBoneTransform {
	FVector vLoc; // 0x0
	FRotator rRot; // 0xc
};

struct FPlatformInterfaceDelegateResult {
	uint32_t bSuccessful : 1; // 0x0
	FPlatformInterfaceData Data; // 0x4
};

struct FEventStringParam {
	FString ParamName; // 0x0
	FString ParamValue; // 0x10
};

struct FMatchroomPlayerStruct {
	int32_t userID; // 0x0
	FString NickName; // 0x4
	int32_t Level; // 0x14
	int32_t Kill; // 0x18
	int32_t assist; // 0x1c
	int32_t death; // 0x20
	char Team; // 0x24
	char Slotstate; // 0x25
	float EnteredTick; // 0x28
	int32_t ClanID; // 0x2c
	FString ClanName; // 0x30
	int32_t EmblemID; // 0x40
	int32_t EmblemEdgeID; // 0x44
	int32_t CCardID; // 0x48
	uint32_t bNoManner : 1; // 0x4c
	int32_t ClanExp; // 0x50
	int32_t ClanRankPoint; // 0x54
	int32_t ClanColorID; // 0x58
	int32_t TierPoint; // 0x5c
	int32_t CompMatchCount; // 0x60
	TArray<FMatchroomPingLevel> PingLevelArray; // 0x64
};

struct FMatchResultData {
	ERoundCountType RoundCountType; // 0x0
	Team WinnerTeamIndex; // 0x1
	int32_t RoundOverPoints[0x2]; // 0x4
	int32_t BestScorePlayerUserID; // 0xc
	int32_t BestKillPlayerUserID; // 0x10
	int32_t BestAssistPlayerUserID; // 0x14
	int32_t BestMissionScorePlayerUserID; // 0x18
	uint32_t bChangeTeam : 1; // 0x1c
	uint32_t bRankingMatch : 1; // 0x1c
	uint32_t bCanRematch : 1; // 0x1c
	float RematchRemainTime; // 0x20
	TArray<FMatchResultPlayerData> PlayerResultList; // 0x24
	char AIWave; // 0x34
	int32_t AIObjectHealth; // 0x38
	EAIRewardRank RewardRank; // 0x3c
};

struct FUIModeMapStruct {
	FString ModeName; // 0x0
	FString ModeGroupName; // 0x10
	FString MapName; // 0x20
	int32_t MinimapImageID; // 0x30
	uint32_t BetaVersion : 1; // 0x34
};

struct FCompetitionInfo {
	int32_t ModeID; // 0x0
	int32_t TierPoint; // 0x4
	int32_t MaxTierPoint; // 0x8
};

struct FRepArrayData {
	ObjectProperty Property; // 0x0
	int32_t ArrayIndex; // 0x8
};

struct FPlayerVoiceChat {
	int32_t Uid; // 0x0
	int32_t UI_Index; // 0x4
	FString PlayerName; // 0x8
	int32_t VC_Status; // 0x18
	uint32_t IsMuted : 1; // 0x1c
};

struct FMatineeRawDistributionFloat : FRawDistributionFloat {
	float MatineeValue; // 0x24
	uint32_t bInMatinee : 1; // 0x28
};

struct FSwitchRange {
	int32_t Min; // 0x0
	int32_t Max; // 0x4
};

struct FReplicatedMeshInfo {
	ComponentProperty MeshComponent; // 0x0
	FVector NewLoc; // 0x8
	FRotator NewRot; // 0x14
};

struct FRewardItemData {
	FString ItemName; // 0x0
	FString Image; // 0x10
	FString ValueType; // 0x20
	FString Value; // 0x30
};

struct FSReachableCheck {
	uint32_t bDirectReachable : 1; // 0x0
	uint32_t bReachable : 1; // 0x0
};

struct FLimitAddScoreCountStruct {
	int32_t AddScoreCount; // 0x0
	char SpawnID; // 0x4
};

struct FBuyItemInfoStruct {
	FString ItemName; // 0x0
	FString ItemCategory; // 0x10
	FString imgUrl; // 0x20
	uint32_t newIcon : 1; // 0x30
	uint32_t buyIcon : 1; // 0x30
	uint32_t protoIcon : 1; // 0x30
};

struct FVectorMaterialInput : FMaterialInput {
	uint32_t UseConstant : 1; // 0x34
	FVector Constant; // 0x38
};

struct FAlternateRoute {
	TArray<ObjectProperty> RouteCache; // 0x0
};

struct FItemAddonStruct {
	FString AddImg; // 0x0
	FString AddTitle; // 0x10
	FString AddDesc; // 0x20
};

struct FGameTypePrefix {
	FString Prefix; // 0x0
	uint32_t bUsesCommonPackage : 1; // 0x10
	FString GameType; // 0x14
	TArray<FString> AdditionalGameTypes; // 0x24
	TArray<FString> ForcedObjects; // 0x34
};

struct FViewTargetTransitionParams {
	float BlendTime; // 0x0
	EViewTargetBlendFunction BlendFunction; // 0x4
	float BlendExp; // 0x8
	uint32_t bLockOutgoing : 1; // 0xc
};

struct FLableDataType {
	FString ASBindingName; // 0x0
	int32_t ASLableIndex; // 0x10
};

struct FChildBoneBlendInfo {
	TArray<float> TargetPerBoneWeight; // 0x0
	FName InitTargetStartBone; // 0x10
	float InitPerBoneIncrease; // 0x18
	FName OldStartBone; // 0x1c
	float OldBoneIncrease; // 0x24
	TArray<char> TargetRequiredBones; // 0x28
};

struct FKCachedConvexData_Mirror {
	TArray<int32_t> CachedConvexElements; // 0x0
};

struct FBranchInfo {
	FName BoneName; // 0x0
	float PerBoneWeightIncrease; // 0x8
};

struct FRandomBoxGainItemInfo {
	int32_t RefRandomBoxCubeID; // 0x0
	int32_t GainGameMoney; // 0x4
	int32_t GainMedal; // 0x8
	int32_t GainGCoin; // 0xc
	int32_t GainMCoin; // 0x10
	int32_t GainBSCoin; // 0x14
	int32_t RefItemID; // 0x18
	int32_t RentalTime; // 0x1c
};

struct FSocialPostImageInfo {
	FSocialPostImageFlags Flags; // 0x0
	FString MessageText; // 0x4
	FString TitleText; // 0x14
	FString PictureCaption; // 0x24
	FString PictureDescription; // 0x34
};

struct FDragElementInfo {
	uint32_t bIsDragging : 1; // 0x0
	int32_t IndexFrom; // 0x4
	uint32_t bIsOver : 1; // 0x8
	int32_t IndexOver; // 0xc
	uint32_t bCanDropInOver : 1; // 0x10
	FVector2D OrigTouch; // 0x14
	FVector2D CurTouch; // 0x1c
	ETouchType EventType; // 0x24
};

struct FAnimBlendInfo {
	FName AnimName; // 0x0
	FAnimInfo AnimInfo; // 0x8
	float Weight; // 0x1c
};

struct FSynchGroup {
	TArray<ObjectProperty> SeqNodes; // 0x0
	ObjectProperty MasterNode; // 0x10
	FName GroupName; // 0x18
	uint32_t bFireSlaveNotifies : 1; // 0x20
	float RateScale; // 0x24
};

struct FClientConnectionBandwidthTestData {
	EMeshBeaconBandwidthTestState CurrentState; // 0x0
	EMeshBeaconBandwidthTestType TestType; // 0x1
	int32_t BytesTotalNeeded; // 0x4
	int32_t BytesReceived; // 0x8
	FDouble RequestTestStartTime; // 0xc
	FDouble TestStartTime; // 0x14
	FConnectionBandwidthStats BandwidthStats; // 0x1c
};

struct FTerrainLayer {
	FString Name; // 0x0
	ObjectProperty Setup; // 0x10
	int32_t AlphaMapIndex; // 0x18
	uint32_t Highlighted : 1; // 0x1c
	uint32_t WireframeHighlighted : 1; // 0x1c
	uint32_t Hidden : 1; // 0x1c
	FColor HighlightColor; // 0x20
	FColor WireframeColor; // 0x24
	int32_t MinX; // 0x28
	int32_t MinY; // 0x2c
	int32_t MaxX; // 0x30
	int32_t MaxY; // 0x34
};

struct FClientConnectionInfo {
	int32_t PlayerID; // 0x0
	ObjectProperty Player; // 0x4
};

struct FDestructibleSubobject {
	FName SubObjName; // 0x0
	ComponentProperty Mesh; // 0x8
	TArray<FObjectDamageModifier> DamageMods; // 0x10
	float DefaultHealth; // 0x20
	FObjectDamageModifier UndoMod; // 0x24
	int32_t ActiveDamageModIdx; // 0x11c
	UDamageType* LastHitDamageType; // 0x120
};

struct FVideoOptionItemInfo {
	FString KeyName; // 0x0
	int32_t Type; // 0x10
	TArray<int32_t> ItemNameID; // 0x14
	TArray<FString> ItemNameString; // 0x24
	int32_t SelectedIndex; // 0x34
	int32_t OldSelectedIndex; // 0x38
	FString FunctionName; // 0x3c
	FString InitDataFunctionName; // 0x4c
	FString SetValueFunctionName; // 0x5c
};

struct FMcpUserCloudFilesEntry {
	FString userID; // 0x0
	TArray<FTitleFileWeb> DownloadedFiles; // 0x10
	TArray<FMcpUserCloudFileInfo> EnumeratedFiles; // 0x20
	ObjectProperty HTTPRequestEnumerateFiles; // 0x30
};

struct FUIInputKeyData {
	FRawInputKeyEventData InputKeyData; // 0x0
	FString ButtonFontMarkupString; // 0xc
};

struct FOctreeElementId {
	FPointer Node; // 0x0
	int32_t ElementIndex; // 0x8
};

struct FSpecialMoveStruct {
	FName SpecialMoveName; // 0x0
	ObjectProperty InteractionPawn; // 0x8
	ObjectProperty InteractionActor; // 0x10
	int32_t Flags; // 0x18
};

struct FKSphereElem {
	FMatrix TM; // 0x0
	float Radius; // 0x40
	uint32_t bNoRBCollision : 1; // 0x44
	uint32_t bPerPolyShape : 1; // 0x44
};

struct FSkelMeshActorControlTarget {
	FName ControlName; // 0x0
	ObjectProperty TargetActor; // 0x8
};

struct FObjectiveAnnouncementInfo {
	ObjectProperty AnnouncementSound; // 0x0
	FString AnnouncementText; // 0x8
};

struct FStaticMeshPart {
	ObjectProperty Mesh; // 0x0
	char MaterialSet; // 0x8
};

struct FUSSMaterialImpactEffect {
	ObjectProperty Sound; // 0x0
	ObjectProperty ParticleTemplate; // 0x8
};

struct FChampionshipMemberData {
	int32_t PlayerID; // 0x0
	FString PlayerName; // 0x4
	ObjectProperty PRI; // 0x14
	char Index; // 0x1c
};

struct FChattingUserInfo {
	int32_t userID; // 0x0
	FString ClanName; // 0x4
	FString ClanColor; // 0x14
};

struct FParticleEventDeathData : FParticleEventData {
	float ParticleTime; // 0x34
};

struct FMcpClashMobPushNotification {
	TArray<FString> device_tokens; // 0x0
	FString badge_type; // 0x10
	FString Sound; // 0x20
	FString Message; // 0x30
	FMcpClashMobPushNotificationParams Params; // 0x40
};

struct FSVsibleCheck {
	uint32_t bVisible : 1; // 0x0
};

struct FAudioComponentParam {
	FName ParamName; // 0x0
	float FloatParam; // 0x8
	ObjectProperty WaveParam; // 0xc
};

struct FAttachItemInfo {
	int32_t Id; // 0x0
	int32_t Value; // 0x4
	char Type; // 0x8
};

struct FStringIdToStringMapping {
	int32_t Id; // 0x0
	FName Name; // 0x4
	uint32_t bIsWildcard : 1; // 0xc
};

struct FClanJoinMemberList {
	int32_t userID; // 0x0
	FString NickName; // 0x4
	char Level; // 0x14
	FTimeData RegistrationTime; // 0x18
};

struct FPBVariationInfo {
	FName VariationName; // 0x0
	uint32_t bMeshOnTopOfFacePoly : 1; // 0x8
};

struct FURL {
	FString Protocol; // 0x0
	FString Host; // 0x10
	int32_t Port; // 0x20
	FString Map; // 0x24
	TArray<FString> Op; // 0x34
	FString Portal; // 0x44
	int32_t Valid; // 0x54
};

struct FPreviewSocketStruct {
	FName DisplayName; // 0x0
	TArray<FPreviewSocketEntryStruct> Attachments; // 0x8
	int32_t RelatedPreviewAnimsetIndex; // 0x18
};

struct FTerrainBVTree {
	TArray<int32_t> Nodes; // 0x0
};

struct FFootstepSoundInfo {
	FName MaterialType; // 0x0
	ObjectProperty Sound; // 0x8
	ObjectProperty CrouchSound; // 0x10
};

struct FEvolveEquipInfo {
	int32_t DataLoadType; // 0x0
	FString CodeName[0x9]; // 0x4
	FString ETCWeapon; // 0x94
};

struct FKeyBindingInfo {
	FName BindName; // 0x0
	FString Command; // 0x8
};

struct FPositionStruct {
	int32_t Index; // 0x0
	FString KeyValue; // 0x4
	FString Position; // 0x14
};

struct FAutomatedTestingDatum {
	int32_t NumberOfMatchesPlayed; // 0x0
	int32_t NumMapListCyclesDone; // 0x4
};

struct FCompetitiveBindModeStruct {
	FString SeasonGroup; // 0x0
	uint32_t isShowHistory : 1; // 0x10
	TArray<FString> ModeCodeName; // 0x14
};

struct FMakeroom_MissionInfo {
	int32_t IndexID; // 0x0
	int32_t RefID; // 0x4
	int32_t DefaultModeRefID; // 0x8
	int32_t DefaultModeGroupID; // 0xc
	int32_t bgType; // 0x10
	FString bgUrl; // 0x14
	FString Label; // 0x24
	uint32_t bDisabled : 1; // 0x34
};

struct FTPOV {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x18
};

struct FPathSizeInfo {
	FName Desc; // 0x0
	float Radius; // 0x8
	float Height; // 0xc
	float CrouchHeight; // 0x10
	char PathColor; // 0x14
};

struct FLinearColorParameterValueOverTime : FParameterValueOverTime {
	FLinearColor ParameterValue; // 0x30
	FInterpCurveLinearColor ParameterValueCurve; // 0x40
};

struct FColumnMetaData {
	int32_t Id; // 0x0
	FName Name; // 0x4
	FString ColumnName; // 0xc
};

struct FActorToLookAt {
	ObjectProperty Actor; // 0x0
	float Rating; // 0x8
	float EnteredTime; // 0xc
	float LastKnownDistance; // 0x10
	float StartTimeBeingLookedAt; // 0x14
	uint32_t CurrentlyBeingLookedAt : 1; // 0x18
};

struct FSavedUserInfo {
	int32_t Uid; // 0x0
	FString UserName; // 0x4
};

struct FMICParam {
	ObjectProperty MIC; // 0x0
	FName SavedScalarParam; // 0x8
	float SavedScalarValue; // 0x10
	FName SavedVectorParam; // 0x14
	FLinearColor SavedVectorValue; // 0x1c
	FName SavedTextureParam; // 0x2c
	ObjectProperty SavedTextureValue; // 0x34
	int32_t MaterialIndexInMesh; // 0x3c
};

struct FMakeroom_MapInfo {
	int32_t IndexID; // 0x0
	int32_t RefID; // 0x4
	int32_t RefModeID; // 0x8
	int32_t SizeType; // 0xc
	FString Label; // 0x10
	FString EventDesc; // 0x20
	FString SizeDesc; // 0x30
	FString MaxPlayerCountDesc; // 0x40
	FString ButtonBGImgPath; // 0x50
	FString SummaryBGImgPath; // 0x60
	FString MinimapImgPath; // 0x70
	uint32_t bIcon_New : 1; // 0x80
	uint32_t bIcon_Event : 1; // 0x80
	uint32_t bIcon_Pop : 1; // 0x80
	uint32_t bDisabled : 1; // 0x80
	uint32_t BetaVersion : 1; // 0x80
};

struct FRenderCommandFence_Mirror {
	int32_t NumPendingFences; // 0x0
};

struct FLookInMatchRoomUserInfo {
	FString Nick; // 0x0
	int32_t Id; // 0x10
	int32_t Level; // 0x14
	char Team; // 0x18
	int32_t Enter_Tick; // 0x1c
	int32_t clan_id; // 0x20
	int32_t Emblem_ID; // 0x24
	int32_t Calling_Card_ID; // 0x28
	FString Clan_Name; // 0x2c
	int32_t Clan_Exp; // 0x3c
	int32_t Clan_Ranking_Point; // 0x40
	int32_t ClanColorID; // 0x44
};

struct FInGameSingleResourceList {
	TArray<FInGameSingleResource> ResourceList; // 0x0
};

struct FAutoCompleteCommand {
	FString Command; // 0x0
	FString Desc; // 0x10
};

struct FPlayerStorageArrayProvider {
	int32_t PlayerStorageId; // 0x0
	ObjectProperty Provider; // 0x4
};

struct FRigidBodyContactInfo {
	FVector ContactPosition; // 0x0
	FVector ContactNormal; // 0xc
	float ContactPenetration; // 0x18
	FVector ContactVelocity[0x2]; // 0x1c
	ObjectProperty PhysMaterial[0x2]; // 0x34
};

struct FUnlockSkillData {
	FString UnlockSkill; // 0x0
	MilitaryClassType ClassType; // 0x10
	CombatSkillType Skilltype; // 0x11
};

struct FGCReference {
	ObjectProperty m_object; // 0x0
	int32_t m_count; // 0x8
	int32_t m_statid; // 0xc
};

struct FUIModeGroupStruct {
	int32_t ModeGroupRefID; // 0x0
	FString ModeGroupCodename; // 0x4
	FString BindMissionCodename; // 0x14
	int32_t SelectType; // 0x24
	int32_t DefaultModeRefID; // 0x28
	FString DisplayName; // 0x2c
	FString DisplayThumbnail; // 0x3c
	FString BGThumbnail; // 0x4c
	int32_t BGThumbnailImgID; // 0x5c
	FString TitleImg; // 0x60
	int32_t TitleImgID; // 0x70
	FString DisplayDescription; // 0x74
	FString DisplayModeName; // 0x84
	FString DisplayModeThumbnail; // 0x94
	int32_t DisplayModeThumbnailImgID; // 0xa4
	uint32_t BetaVersion : 1; // 0xa8
	int32_t MatchMakingID; // 0xac
};

struct FChannelInfo {
	int32_t Index; // 0x0
	FString CodeName; // 0x4
	int32_t Level_Block; // 0x14
	int32_t Level_Low; // 0x18
	int32_t Level_High; // 0x1c
	int32_t KAD_Block; // 0x20
	int32_t KAD_Min; // 0x24
	int32_t KAD_Max; // 0x28
	int32_t Clan_Block; // 0x2c
	int32_t Championship_Block; // 0x30
	int32_t ChampionshipTF; // 0x34
	int32_t OpenChannel; // 0x38
	int32_t TitleId; // 0x3c
	int32_t DescriptionID; // 0x40
	int32_t Ping_Block; // 0x44
	int32_t DesignType; // 0x48
	int32_t Server; // 0x4c
	int32_t ChannelState; // 0x50
	TArray<FChannelPropertyInfo> ChannelPropertyList; // 0x54
};

struct FPhysEffectInfo {
	float Threshold; // 0x0
	float ReFireDelay; // 0x4
	ObjectProperty Effect; // 0x8
	ObjectProperty Sound; // 0x10
};

struct FRotTransitionInfo {
	float RotationOffset; // 0x0
	FName TransName; // 0x4
};

struct FOnlinePlayerScore {
	FUniqueNetId PlayerID; // 0x0
	int32_t TeamID; // 0x8
	int32_t Score; // 0xc
};

struct FPhysXEmitterVerticalProperties {
	uint32_t bDisableLod : 1; // 0x0
	int32_t ParticlesLodMin; // 0x4
	int32_t ParticlesLodMax; // 0x8
	int32_t PacketsPerPhysXParticleSystemMax; // 0xc
	uint32_t bApplyCylindricalPacketCulling : 1; // 0x10
	float SpawnLodVsFifoBias; // 0x14
};

struct FLocalizedStringSettingMetaData {
	int32_t Id; // 0x0
	FName Name; // 0x4
	FString ColumnHeaderText; // 0xc
	TArray<FStringIdToStringMapping> ValueMappings; // 0x1c
};

struct FInGameResource {
	TArray<ObjectProperty> ResourceList; // 0x0
	int32_t ResourceLength; // 0x10
	UObject* ResourceClass; // 0x14
	int32_t CurrentIndex; // 0x1c
};

struct FParticleCurvePair {
	FString CurveName; // 0x0
	ObjectProperty CurveObject; // 0x10
};

struct FMaterialReferenceList {
	ObjectProperty TargetMaterial; // 0x0
	TArray<FPrimitiveMaterialRef> AffectedMaterialRefs; // 0x8
	TArray<FPostProcessMaterialRef> AffectedPPChainMaterialRefs; // 0x18
};

struct FStaticMeshComponentLODInfo {
	TArray<ObjectProperty> ShadowMaps; // 0x0
	TArray<ObjectProperty> ShadowVertexBuffers; // 0x10
	FPointer LightMap; // 0x20
	FPointer OverrideVertexColors; // 0x28
	TArray<FPaintedVertex> PaintedVertices; // 0x30
};

struct FCollisionImpactData {
	TArray<FRigidBodyContactInfo> ContactInfos; // 0x0
	FVector TotalNormalForceVector; // 0x10
	FVector TotalFrictionForceVector; // 0x1c
};

struct FGameplayEventMetaData {
	int32_t EventID; // 0x0
	FName EventName; // 0x4
	FGameStatGroup StatGroup; // 0xc
	int32_t EventDataType; // 0x14
};

struct FKConvexElem {
	TArray<FVector> VertexData; // 0x0
	TArray<FPlane> PermutedVertexData; // 0x10
	TArray<int32_t> FaceTriData; // 0x20
	TArray<FVector> EdgeDirections; // 0x30
	TArray<FVector> FaceNormalDirections; // 0x40
	TArray<FPlane> FacePlaneData; // 0x50
	FBox ElemBox; // 0x60
};

struct FStatColorMapEntry {
	float In; // 0x0
	FColor Out; // 0x4
};

struct FAuthSession : FBaseAuthSession {
	EAuthStatus AuthStatus; // 0x10
	int32_t AuthTicketUID; // 0x14
};

struct FActorReference {
	ObjectProperty Actor; // 0x0
	FGuid Guid; // 0x8
};

struct FNavMeshPathGoalEvaluatorCacheDatum {
	int32_t ListIdx; // 0x0
	ObjectProperty List[0x5]; // 0x4
};

struct FFunctionTable {
	FPointer TargetFunction; // 0x0
	FName FunctionName; // 0x8
};

struct FSavedTransform {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
};

struct FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FHideBoneDataByZoomState {
	FName BoneName; // 0x0
	EZoomState StateIndex; // 0x8
};

struct FOnlineProfileSetting {
	EOnlineProfilePropertyOwner Owner; // 0x0
	uint32_t bIsKeep : 1; // 0x4
	FSettingsProperty ProfileSetting; // 0x8
};

struct FGamePlayOptionItemInfo {
	FString KeyName; // 0x0
	int32_t SelectedIndex; // 0x10
	int32_t OldSelectedIndex; // 0x14
	FString FunctionName; // 0x18
};

struct FScalarParameterValueOverTime : FParameterValueOverTime {
	float ParameterValue; // 0x30
	FInterpCurveFloat ParameterValueCurve; // 0x34
};

struct FGameEvent {
	TArray<float> EventCountByTimePeriod; // 0x0
};

struct FInstancedStaticMeshInstanceData {
	FMatrix Transform; // 0x0
	FVector2D LightmapUVBias; // 0x40
	FVector2D ShadowmapUVBias; // 0x48
};

struct FUIModeGroupBindStruct {
	FString ModeGroupName; // 0x0
	FString ModeName; // 0x10
	uint32_t BetaVersion : 1; // 0x20
};

struct FTextureParameterValueOverTime : FParameterValueOverTime {
	ObjectProperty ParameterValue; // 0x30
};

struct FSplineMeshParams {
	FVector StartPos; // 0x0
	FVector StartTangent; // 0xc
	FVector2D StartScale; // 0x18
	float StartRoll; // 0x20
	FVector2D StartOffset; // 0x24
	FVector EndPos; // 0x2c
	FVector EndTangent; // 0x38
	FVector2D EndScale; // 0x44
	float EndRoll; // 0x4c
	FVector2D EndOffset; // 0x50
};

struct FExchangeAddMoneyStruct {
	int32_t MoneyType; // 0x0
	int32_t MainMoney; // 0x4
	int32_t BonusMoney; // 0x8
};

struct FMobileInputGroup {
	FString GroupName; // 0x0
	TArray<ObjectProperty> AssociatedZones; // 0x10
};

struct FMcpUserStatus {
	FString McpId; // 0x0
	FString UDID; // 0x10
	FString CountryCode; // 0x20
	FString LastActiveDate; // 0x30
	int32_t DaysInactive; // 0x40
	uint32_t bIsBanned : 1; // 0x44
};

struct FCachedWeaponInfo_BaseInfo {
	uint32_t bNeedUpdate : 1; // 0x0
	FString WeaponName; // 0x4
	uint32_t bWithChamber : 1; // 0x14
	WeaponUIType MainWeaponUIType; // 0x18
	GrenadeUIType SubGrenadeUIType; // 0x19
	int32_t WeaponID; // 0x1c
};

struct FScalarMaterialInput : FMaterialInput {
	uint32_t UseConstant : 1; // 0x34
	float Constant; // 0x38
};

struct FClothSpecialBoneInfo {
	FName BoneName; // 0x0
	ClothBoneType BoneType; // 0x8
	TArray<int32_t> AttachedVertexIndices; // 0xc
};

struct FSeqVar_Data {
	FName VarName; // 0x0
	USequenceVariable* SeqVarClass; // 0x8
	int32_t IntData; // 0x10
	float FloatData; // 0x14
	FVector VectorData; // 0x18
	FString StringData; // 0x24
	uint32_t BoolData : 1; // 0x34
};

struct FBasicCrosshairSetting {
	int32_t CrosshairClr; // 0x0
	uint32_t DotOnly : 1; // 0x4
	char BasicCrosshairType; // 0x8
	uint32_t UseCenterDot : 1; // 0xc
	char Outline; // 0x10
	char Alpha; // 0x11
	float Scale; // 0x14
	char ShadowType; // 0x18
	char CenterOffset; // 0x19
	char Thickness; // 0x1a
	uint32_t DoSpread : 1; // 0x1c
};

struct FWrappedStringElement {
	FString Value; // 0x0
	FVector2D LineExtent; // 0x10
};

struct FAnimNotifyMITVLinearColorParam {
	uint32_t bOverride_ParameterValue : 1; // 0x0
	FLinearColor ParameterValue; // 0x4
	FInterpCurveLinearColor ParameterValueCurve; // 0x14
	FName ParameterName; // 0x28
	uint32_t bClearStartTime : 1; // 0x30
	uint32_t bOverride_Loop : 1; // 0x30
	uint32_t bLoop : 1; // 0x30
	uint32_t bOverride_AutoActivate : 1; // 0x30
	uint32_t bAutoActivate : 1; // 0x30
	uint32_t bOverride_CycleTime : 1; // 0x30
	float CycleTime; // 0x34
	uint32_t bOverride_NormalizeTime : 1; // 0x38
	uint32_t bNormalizeTime : 1; // 0x38
	uint32_t bOverride_OffsetTime : 1; // 0x38
	float OffsetTime; // 0x3c
	uint32_t bOverride_OffsetFromEnd : 1; // 0x40
	uint32_t bOffsetFromEnd : 1; // 0x40
};

struct FNotificationMessageInfo {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FCombatPC_RestoreGameKillData {
	uint32_t NeedAddData : 1; // 0x0
	int32_t CurrentIndex; // 0x4
	TArray<int32_t> GameKillCountKeyArray; // 0x8
};

struct FPathStore {
	TArray<FEdgePointer> EdgeList; // 0x0
};

struct FVehicleState {
	FRigidBodyState RBState; // 0x0
	char ServerBrake; // 0x40
	char ServerGas; // 0x41
	char ServerSteering; // 0x42
	char ServerRise; // 0x43
	uint32_t bServerHandbrake : 1; // 0x44
	int32_t ServerView; // 0x48
};

struct FLightmassDirectionalLightSettings : FLightmassLightSettings {
	float LightSourceAngle; // 0xc
};

struct FInterpCurveVector {
	TArray<FInterpCurvePointVector> Points; // 0x0
	EInterpMethodType InterpMethod; // 0x10
};

struct FSocialPostPrivileges {
	uint32_t bCanPostImage : 1; // 0x0
	uint32_t bCanPostLink : 1; // 0x0
};

struct FCurveKey {
	FName CurveName; // 0x0
	float Weight; // 0x8
};

struct FsMouseSens {
	uint32_t bUseAllMode : 1; // 0x0
	uint32_t bUseAutoScale : 1; // 0x0
	float ZoomMouseSens[0xa]; // 0x4
};

struct FCrouchSpamValue {
	char CrouchSlowPercent; // 0x0
	float CrouchSpamCrouchblendTime; // 0x4
	float CrouchSpamStandTime; // 0x8
};

struct FInlinePointerArray_Mirror {
	FPointer InlineData; // 0x0
	FArray_Mirror SecondaryData; // 0x8
};

struct FExplosionMod {
	FName SocketName; // 0x0
	float Damage; // 0x8
	float DamageRadius; // 0xc
	FVector RelativeLocation; // 0x10
	FRotator RelativeRotation; // 0x1c
	AActor* ActorClassToIgnoreForDamage; // 0x28
};

struct FServerInfo {
	int32_t Id; // 0x0
	int32_t TitleId; // 0x4
	int32_t DescriptionID; // 0x8
};

struct FPerBoneMaskInfo {
	TArray<FBranchInfo> BranchList; // 0x0
	float DesiredWeight; // 0x10
	float BlendTimeToGo; // 0x14
	TArray<FWeightRule> WeightRuleList; // 0x18
	uint32_t bWeightBasedOnNodeRules : 1; // 0x28
	uint32_t bDisableForNonLocalHumanPlayers : 1; // 0x28
	uint32_t bPendingBlend : 1; // 0x28
	TArray<float> PerBoneWeights; // 0x2c
	TArray<char> TransformReqBone; // 0x3c
	int32_t TransformReqBoneIndex; // 0x4c
};

struct FTickableActorList {
	TArray<ObjectProperty> ActorList; // 0x0
};

struct FTableInfoType {
	FString CodeName; // 0x0
	int32_t Score; // 0x10
	int32_t RankExp; // 0x14
	int32_t CreditPoint; // 0x18
	int32_t ModeDependencyScore; // 0x1c
	FName KillType; // 0x20
	int32_t LocalizedStrID; // 0x28
};

struct FMatchroomButtonStruct {
	int32_t TooltipID; // 0x0
	FString ToolTip; // 0x4
	uint32_t bDefaultSelected : 1; // 0x14
	uint32_t bDefaultDisabled : 1; // 0x14
	uint32_t bSelected : 1; // 0x14
	uint32_t bDisabled : 1; // 0x14
	FString MemberName; // 0x18
	uint32_t bUpdateTooltip : 1; // 0x28
	uint32_t bUpdateSelected : 1; // 0x28
	uint32_t bUpdateDisabled : 1; // 0x28
};

struct FMultiMap_Mirror {
	FSet_Mirror Pairs; // 0x0
};

struct FSwitchClassInfo {
	FName ClassName; // 0x0
	char bFallThru; // 0x8
};

struct FFilterInfo {
	int32_t Id; // 0x0
	int32_t Filtertype1; // 0x4
	int32_t Filtertype2; // 0x8
	int32_t Filtertype3; // 0xc
};

struct FHeadTrackingKey {
	float Time; // 0x0
	EHeadTrackingAction Action; // 0x4
};

struct FSelectedTerrainVertex {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Weight; // 0x8
};

struct FWatchingPlayerData {
	int32_t playerIndex_zeroBase; // 0x0
	Team TeamIndex; // 0x4
};

struct FRotationPack {
	FString ProfileName; // 0x0
	FRotator Rotation; // 0x10
};

struct FTeamInformation {
	int32_t TeamIndex; // 0x0
	FString TeamName; // 0x4
	FColor TeamColor; // 0x14
	int32_t MaxSize; // 0x18
};

struct FPBParamSwatch {
	FName SwatchName; // 0x0
	TArray<FPBMaterialParam> Params; // 0x8
};

struct FTakeHitInfo {
	FVector HitLocation; // 0x0
	FVector Momentum; // 0xc
	UDamageType* DamageType; // 0x18
	ObjectProperty InstigatedBy; // 0x20
	char HitBoneIndex; // 0x28
	ObjectProperty PhysicalMaterial; // 0x2c
	float Damage; // 0x34
	FVector RadialDamageOrigin; // 0x38
};

struct FExternalTexture {
	FString Resource; // 0x0
	ObjectProperty Texture; // 0x10
};

struct FSClassAgroScore {
	AActor* TargetClass; // 0x0
	float ClassWeight; // 0x8
};

struct FExplosionDecal {
	EDecalTraceDir Dir; // 0x0
	float TraceDistance; // 0x4
	FDecalData Decal; // 0x8
	TArray<FCombatDecalParam> Params; // 0x38
	uint32_t bWorldSpaceDir : 1; // 0x48
};

struct FVisiblePortalInfo {
	ObjectProperty Source; // 0x0
	ObjectProperty Destination; // 0x8
};

struct FVectorParameterValue {
	FName ParameterName; // 0x0
	FLinearColor ParameterValue; // 0x8
	FGuid ExpressionGUID; // 0x18
};

struct FMusicTrackStruct {
	ObjectProperty TheSoundCue; // 0x0
	uint32_t bAutoPlay : 1; // 0x8
	uint32_t bPersistentAcrossLevels : 1; // 0x8
	float FadeInTime; // 0xc
	float FadeInVolumeLevel; // 0x10
	float FadeOutTime; // 0x14
	float FadeOutVolumeLevel; // 0x18
	FString MP3Filename; // 0x1c
};

struct FCBTakeHitInfo {
	WordProperty Damage; // 0x0
	WordProperty DamagePercent; // 0x2
	FVector HitLocation; // 0x4
	FVector Momentum; // 0x10
	UDamageType* DamageType; // 0x1c
	int32_t HitBodyIndex; // 0x24
	ObjectProperty Causer; // 0x28
	FString CauserName; // 0x30
	int32_t CauserID; // 0x40
	uint32_t bFlag : 1; // 0x44
};

struct FGlobalOutlineEvent {
	FName EventName; // 0x0
	Team ApplyTeamIndex; // 0x8
	float StartTimeSecond; // 0xc
};

struct FCurrentPostProcessVolumeInfo {
	FPostProcessSettings LastSettings; // 0x0
	ObjectProperty LastVolumeUsed; // 0x164
	float BlendStartTime; // 0x16c
	float LastBlendTime; // 0x170
};

struct FControllerMap {
	FName KeyName; // 0x0
	FString XBoxMapping; // 0x8
	FString PS3Mapping; // 0x18
};

struct FAccessoryMeshInfo {
	ObjectProperty AccessoryMesh; // 0x0
	char AccessoryMaterialSet; // 0x8
};

struct FNxDestructibleDepthParameters {
	uint32_t TAKE_IMPACT_DAMAGE : 1; // 0x0
	uint32_t IGNORE_POSE_UPDATES : 1; // 0x0
	uint32_t IGNORE_RAYCAST_CALLBACKS : 1; // 0x0
	uint32_t IGNORE_CONTACT_CALLBACKS : 1; // 0x0
	uint32_t USER_FLAG_1 : 1; // 0x0
	uint32_t USER_FLAG_2 : 1; // 0x0
	uint32_t USER_FLAG_3 : 1; // 0x0
	uint32_t USER_FLAG_4 : 1; // 0x0
	EImpactDamageOverride ImpactDamageOverride; // 0x4
};

struct FInterpCurvePointFloat {
	float InVal; // 0x0
	float OutVal; // 0x4
	float ArriveTangent; // 0x8
	float LeaveTangent; // 0xc
	EInterpCurveMode InterpMode; // 0x10
};

struct FCachedPlayerInfo {
	FString PlayerName; // 0x0
	int32_t Score; // 0x10
	int32_t Kill; // 0x14
	int32_t death; // 0x18
	int32_t assist; // 0x1c
	int32_t SpecialScore; // 0x20
	int32_t LastKillTime; // 0x24
	int32_t userID; // 0x28
	FString LevelImageName; // 0x2c
	int32_t LevelImageID; // 0x3c
	FString ClassImageName; // 0x40
	int32_t ClassImageID; // 0x50
	FString RankImageName; // 0x54
	int32_t RankImageID; // 0x64
	int32_t Level; // 0x68
	int32_t Ranking; // 0x6c
	char Ping; // 0x70
	char TeamIndex; // 0x71
	uint32_t bIsSpectator : 1; // 0x74
	uint32_t bIsLive : 1; // 0x74
	uint32_t bSelectedClass : 1; // 0x74
	uint32_t bNeedUpdate : 1; // 0x74
	int32_t ClanID; // 0x78
	FString ClanEmblemImageName; // 0x7c
	int32_t ClanEmblemImageID; // 0x8c
	int32_t ClanEmblemEdgeImageID; // 0x90
	FString ClanName; // 0x94
	FString ClanLevel; // 0xa4
	FString ClanLevelColor; // 0xb4
	int32_t ClanColorID; // 0xc4
	uint32_t bHasC4 : 1; // 0xc8
	int32_t Life; // 0xcc
	int32_t TierPoint; // 0xd0
	int32_t TierImageSmall; // 0xd4
	int32_t TierImageBig; // 0xd8
};

struct FDouble {
	int32_t A; // 0x0
	int32_t B; // 0x4
};

struct FPostProcessSettings {
	uint32_t bOverride_EnableBloom : 1; // 0x0
	uint32_t bOverride_EnableDOF : 1; // 0x0
	uint32_t bOverride_EnableMotionBlur : 1; // 0x0
	uint32_t bOverride_EnableSceneEffect : 1; // 0x0
	uint32_t bOverride_AllowAmbientOcclusion : 1; // 0x0
	uint32_t bOverride_OverrideRimShaderColor : 1; // 0x0
	uint32_t bOverride_Bloom_Scale : 1; // 0x0
	uint32_t bOverride_Bloom_Threshold : 1; // 0x0
	uint32_t bOverride_Bloom_Tint : 1; // 0x0
	uint32_t bOverride_Bloom_ScreenBlendThreshold : 1; // 0x0
	uint32_t bOverride_Bloom_InterpolationDuration : 1; // 0x0
	uint32_t bOverride_DOF_FalloffExponent : 1; // 0x0
	uint32_t bOverride_DOF_BlurKernelSize : 1; // 0x0
	uint32_t bOverride_DOF_BlurBloomKernelSize : 1; // 0x0
	uint32_t bOverride_DOF_MaxNearBlurAmount : 1; // 0x0
	uint32_t bOverride_DOF_MinBlurAmount : 1; // 0x0
	uint32_t bOverride_DOF_MaxFarBlurAmount : 1; // 0x0
	uint32_t bOverride_DOF_FocusType : 1; // 0x0
	uint32_t bOverride_DOF_FocusInnerRadius : 1; // 0x0
	uint32_t bOverride_DOF_FocusDistance : 1; // 0x0
	uint32_t bOverride_DOF_FocusPosition : 1; // 0x0
	uint32_t bOverride_DOF_InterpolationDuration : 1; // 0x0
	uint32_t bOverride_DOF_BokehTexture : 1; // 0x0
	uint32_t bOverride_MotionBlur_MaxVelocity : 1; // 0x0
	uint32_t bOverride_MotionBlur_Amount : 1; // 0x0
	uint32_t bOverride_MotionBlur_FullMotionBlur : 1; // 0x0
	uint32_t bOverride_MotionBlur_CameraRotationThreshold : 1; // 0x0
	uint32_t bOverride_MotionBlur_CameraTranslationThreshold : 1; // 0x0
	uint32_t bOverride_MotionBlur_InterpolationDuration : 1; // 0x0
	uint32_t bOverride_Scene_Desaturation : 1; // 0x0
	uint32_t bOverride_Scene_Colorize : 1; // 0x0
	uint32_t bOverride_Scene_TonemapperScale : 1; // 0x0
	uint32_t bOverride_Scene_ImageGrainScale : 1; // 0x4
	uint32_t bOverride_Scene_HighLights : 1; // 0x4
	uint32_t bOverride_Scene_MidTones : 1; // 0x4
	uint32_t bOverride_Scene_Shadows : 1; // 0x4
	uint32_t bOverride_Scene_InterpolationDuration : 1; // 0x4
	uint32_t bOverride_Scene_ColorGradingLUT : 1; // 0x4
	uint32_t bOverride_RimShader_Color : 1; // 0x4
	uint32_t bOverride_RimShader_InterpolationDuration : 1; // 0x4
	uint32_t bOverride_MobileColorGrading : 1; // 0x4
	uint32_t bEnableBloom : 1; // 0x4
	uint32_t bEnableDOF : 1; // 0x4
	uint32_t bEnableMotionBlur : 1; // 0x4
	uint32_t bEnableSceneEffect : 1; // 0x4
	uint32_t bAllowAmbientOcclusion : 1; // 0x4
	uint32_t bOverrideRimShaderColor : 1; // 0x4
	float Bloom_Scale; // 0x8
	float Bloom_Threshold; // 0xc
	FColor Bloom_Tint; // 0x10
	float Bloom_ScreenBlendThreshold; // 0x14
	float Bloom_InterpolationDuration; // 0x18
	float DOF_BlurBloomKernelSize; // 0x1c
	float DOF_FalloffExponent; // 0x20
	float DOF_BlurKernelSize; // 0x24
	float DOF_MaxNearBlurAmount; // 0x28
	float DOF_MinBlurAmount; // 0x2c
	float DOF_MaxFarBlurAmount; // 0x30
	EFocusType DOF_FocusType; // 0x34
	float DOF_FocusInnerRadius; // 0x38
	float DOF_FocusDistance; // 0x3c
	FVector DOF_FocusPosition; // 0x40
	float DOF_InterpolationDuration; // 0x4c
	ObjectProperty DOF_BokehTexture; // 0x50
	float MotionBlur_MaxVelocity; // 0x58
	float MotionBlur_Amount; // 0x5c
	uint32_t MotionBlur_FullMotionBlur : 1; // 0x60
	float MotionBlur_CameraRotationThreshold; // 0x64
	float MotionBlur_CameraTranslationThreshold; // 0x68
	float MotionBlur_InterpolationDuration; // 0x6c
	float Scene_Desaturation; // 0x70
	FVector Scene_Colorize; // 0x74
	float Scene_TonemapperScale; // 0x80
	float Scene_ImageGrainScale; // 0x84
	FVector Scene_HighLights; // 0x88
	FVector Scene_MidTones; // 0x94
	FVector Scene_Shadows; // 0xa0
	float Scene_InterpolationDuration; // 0xac
	FLinearColor RimShader_Color; // 0xb0
	float RimShader_InterpolationDuration; // 0xc0
	ObjectProperty ColorGrading_LookupTable; // 0xc4
	FLUTBlender ColorGradingLUT; // 0xcc
	FMobileColorGradingParams MobileColorGrading; // 0xf0
	FMobilePostProcessSettings MobilePostProcess; // 0x12c
};

struct FAmmorInfo {
	EObjectGradeType ItemGrade; // 0x0
	int32_t AP; // 0x4
	int32_t APForExplosion; // 0x8
};

struct FKillerInfoStruct {
	uint32_t bNeedUpdate : 1; // 0x0
	FString KillerName; // 0x4
	int32_t KillCount_Killer; // 0x14
	int32_t KillCount_Me; // 0x18
	int32_t killTypeStrID; // 0x1c
	int32_t KillCauserStrID; // 0x20
	int32_t KillCauserIconImageID; // 0x24
	FString KillCauserGradeImagePath; // 0x28
};

struct FTAlphaBlend {
	float AlphaIn; // 0x0
	float AlphaOut; // 0x4
	float AlphaTarget; // 0x8
	float BlendTime; // 0xc
	float BlendTimeToGo; // 0x10
	AlphaBlendType BlendType; // 0x14
};

struct FGameStatGroup {
	EGameStatGroups Group; // 0x0
	int32_t Level; // 0x4
};

struct FUIMenuInputMap {
	FName FieldName; // 0x0
	FName Set; // 0x8
	FString MappedText; // 0x10
};

struct FBoneMirrorExport {
	FName BoneName; // 0x0
	FName SourceBoneName; // 0x8
	EAxis BoneFlipAxis; // 0x10
};

struct FDominantShadowInfo {
	FMatrix WorldToLight; // 0x0
	FMatrix LightToWorld; // 0x40
	FBox LightSpaceImportanceBounds; // 0x80
	int32_t ShadowMapSizeX; // 0x9c
	int32_t ShadowMapSizeY; // 0xa0
};

struct FTextureGroupContainer {
	uint32_t TEXTUREGROUP_World : 1; // 0x0
	uint32_t TEXTUREGROUP_WorldNormalMap : 1; // 0x0
	uint32_t TEXTUREGROUP_WorldSpecular : 1; // 0x0
	uint32_t TEXTUREGROUP_Character : 1; // 0x0
	uint32_t TEXTUREGROUP_CharacterNormalMap : 1; // 0x0
	uint32_t TEXTUREGROUP_CharacterSpecular : 1; // 0x0
	uint32_t TEXTUREGROUP_Weapon : 1; // 0x0
	uint32_t TEXTUREGROUP_WeaponNormalMap : 1; // 0x0
	uint32_t TEXTUREGROUP_WeaponSpecular : 1; // 0x0
	uint32_t TEXTUREGROUP_Vehicle : 1; // 0x0
	uint32_t TEXTUREGROUP_VehicleNormalMap : 1; // 0x0
	uint32_t TEXTUREGROUP_VehicleSpecular : 1; // 0x0
	uint32_t TEXTUREGROUP_Cinematic : 1; // 0x0
	uint32_t TEXTUREGROUP_Effects : 1; // 0x0
	uint32_t TEXTUREGROUP_EffectsNotFiltered : 1; // 0x0
	uint32_t TEXTUREGROUP_Skybox : 1; // 0x0
	uint32_t TEXTUREGROUP_UI : 1; // 0x0
	uint32_t TEXTUREGROUP_Lightmap : 1; // 0x0
	uint32_t TEXTUREGROUP_RenderTarget : 1; // 0x0
	uint32_t TEXTUREGROUP_MobileFlattened : 1; // 0x0
	uint32_t TEXTUREGROUP_ProcBuilding_Face : 1; // 0x0
	uint32_t TEXTUREGROUP_ProcBuilding_LightMap : 1; // 0x0
	uint32_t TEXTUREGROUP_Shadowmap : 1; // 0x0
	uint32_t TEXTUREGROUP_ColorLookupTable : 1; // 0x0
	uint32_t TEXTUREGROUP_Terrain_Heightmap : 1; // 0x0
	uint32_t TEXTUREGROUP_Terrain_Weightmap : 1; // 0x0
	uint32_t TEXTUREGROUP_ImageBasedReflection : 1; // 0x0
	uint32_t TEXTUREGROUP_Bokeh : 1; // 0x0
	uint32_t TEXTUREGROUP_WorldCubeMap : 1; // 0x0
};

struct FClientMeshBeaconConnection {
	FUniqueNetId PlayerNetId; // 0x0
	float ElapsedHeartbeatTime; // 0x8
	FPointer Socket; // 0xc
	uint32_t bConnectionAccepted : 1; // 0x14
	FClientConnectionBandwidthTestData BandwidthTest; // 0x18
	ENATType NatType; // 0x40
	uint32_t bCanHostVs : 1; // 0x44
	float GoodHostRatio; // 0x48
	TArray<FConnectionBandwidthStats> BandwidthHistory; // 0x4c
	int32_t MinutesSinceLastTest; // 0x5c
};

struct FCameraAnimData {
	ObjectProperty CameraAnimAsset; // 0x0
	float AnimScale; // 0x8
	float AnimRate; // 0xc
	float BlendInTime; // 0x10
	float BlendOutTime; // 0x14
	float AnimDuration; // 0x18
	uint32_t bLoop : 1; // 0x1c
};

struct FParticleSystemLOD {
	uint32_t bLit : 1; // 0x0
};

struct FOnlineRegistrant {
	FUniqueNetId PlayerNetId; // 0x0
};

struct FSkelControlListHead {
	FName BoneName; // 0x0
	ObjectProperty ControlHead; // 0x8
};

struct FSkelMaterialSetterDatum {
	int32_t MaterialIndex; // 0x0
	ObjectProperty TheMaterial; // 0x4
};

struct FStepByStepRewardType {
	int32_t Count; // 0x0
	FString RewardCodename; // 0x4
};

struct FEffectTypeHitSound {
	FHitSound BodyTypeHitSounds[0xa]; // 0x0
};

struct FNamedInterfaceDef {
	FName InterfaceName; // 0x0
	FString InterfaceClassName; // 0x8
};

struct FCovPosInfo {
	ObjectProperty Link; // 0x0
	int32_t LtSlotIdx; // 0x8
	int32_t RtSlotIdx; // 0xc
	float LtToRtPct; // 0x10
	FVector Location; // 0x14
	FVector Normal; // 0x20
	FVector Tangent; // 0x2c
};

struct FQuat {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FDataTableInfo {
	UCombatDataTableType* RefTableClass; // 0x0
	FString XML; // 0x8
};

struct FMcpClashMobPushNotificationParams {
	int32_t bah; // 0x0
};

struct FCCSTargetData {
	ObjectProperty Pawn; // 0x0
	FVector Position; // 0x8
	FVector LKP; // 0x14
	float LKPAge; // 0x20
	float Range2D; // 0x24
	float Range3D; // 0x28
	uint32_t CanShoot : 1; // 0x2c
	uint32_t IsAware : 1; // 0x2c
	uint32_t IsFiring : 1; // 0x2c
	uint32_t IsVisible : 1; // 0x2c
};

struct FLocalTalker {
	uint32_t bHasVoice : 1; // 0x0
	uint32_t bHasNetworkedVoice : 1; // 0x0
	uint32_t bIsRecognizingSpeech : 1; // 0x0
	uint32_t bWasTalking : 1; // 0x0
	uint32_t bIsTalking : 1; // 0x0
	uint32_t bIsRegistered : 1; // 0x0
};

struct FOverrideSkill {
	int32_t LeaderboardId; // 0x0
	TArray<FUniqueNetId> Players; // 0x4
	TArray<FDouble> Mus; // 0x14
	TArray<FDouble> Sigmas; // 0x24
};

struct FAttachment {
	ComponentProperty Component; // 0x0
	FName BoneName; // 0x8
	FVector RelativeLocation; // 0x10
	FRotator RelativeRotation; // 0x1c
	FVector RelativeScale; // 0x28
};

struct FUIModeStruct {
	int32_t ModeRefID; // 0x0
	FString ModeCodeName; // 0x4
	FString ModeLabel; // 0x14
	FString ModeDesc; // 0x24
	FString ModeImageName; // 0x34
	int32_t ModeImageID; // 0x44
	int32_t DefaultMapRefID; // 0x48
	uint32_t BetaVersion : 1; // 0x4c
	int32_t StartableMinUser; // 0x50
	int32_t ModeUIType; // 0x54
	int32_t HUDType; // 0x58
	FUIModeOptionStruct MapOptionList[0x12]; // 0x5c
};

struct FIngameMarkerInfo {
	int32_t Uid; // 0x0
	int32_t Type; // 0x4
	uint32_t is3DMarker : 1; // 0x8
	FVector Location; // 0xc
};

struct FServerAuthRetry {
	FUniqueNetId ClientUID; // 0x0
	int32_t AuthRetryCount; // 0x8
};

struct FPBMaterialParam {
	FName ParamName; // 0x0
	FLinearColor Color; // 0x8
};

struct FDialogInfo {
	ObjectProperty DialogMC; // 0x0
	int32_t Id; // 0x8
	FString DialogName; // 0xc
	DelegateProperty OKBtnDelegate; // 0x1c
	DelegateProperty CancelBtnDelegate; // 0x2c
};

struct FRemoteTalker {
	FUniqueNetId TalkerId; // 0x0
	float LastNotificationTime; // 0x8
	uint32_t bWasTalking : 1; // 0xc
	uint32_t bIsTalking : 1; // 0xc
	uint32_t bIsRegistered : 1; // 0xc
};

struct FPlayerReservation {
	FUniqueNetId NetId; // 0x0
	int32_t Skill; // 0x8
	int32_t XpLevel; // 0xc
	FDouble Mu; // 0x10
	FDouble Sigma; // 0x18
	float ElapsedSessionTime; // 0x20
};

struct FFixTextInfo {
	FString Member; // 0x0
	int32_t Id; // 0x10
};

struct FRBCollisionChannelContainer {
	uint32_t Default : 1; // 0x0
	uint32_t Nothing : 1; // 0x0
	uint32_t Pawn : 1; // 0x0
	uint32_t Vehicle : 1; // 0x0
	uint32_t Water : 1; // 0x0
	uint32_t GameplayPhysics : 1; // 0x0
	uint32_t EffectPhysics : 1; // 0x0
	uint32_t Untitled1 : 1; // 0x0
	uint32_t Untitled2 : 1; // 0x0
	uint32_t Untitled3 : 1; // 0x0
	uint32_t Untitled4 : 1; // 0x0
	uint32_t Cloth : 1; // 0x0
	uint32_t FluidDrain : 1; // 0x0
	uint32_t SoftBody : 1; // 0x0
	uint32_t FracturedMeshPart : 1; // 0x0
	uint32_t BlockingVolume : 1; // 0x0
	uint32_t DeadPawn : 1; // 0x0
	uint32_t Clothing : 1; // 0x0
	uint32_t ClothingCollision : 1; // 0x0
};

struct FKBoxElem {
	FMatrix TM; // 0x0
	float X; // 0x40
	float Y; // 0x44
	float Z; // 0x48
	uint32_t bNoRBCollision : 1; // 0x4c
	uint32_t bPerPolyShape : 1; // 0x4c
};

struct FGameSearchCfg {
	UOnlineGameSearch* GameSearchClass; // 0x0
	UOnlineGameSettings* DefaultGameSettingsClass; // 0x8
	UUIDataProvider_Settings* SearchResultsProviderClass; // 0x10
	ObjectProperty DesiredSettingsProvider; // 0x18
	ObjectProperty Search; // 0x20
	FName SearchName; // 0x28
};

struct FASValue {
	ASType Type; // 0x0
	uint32_t B : 1; // 0x4
	float N; // 0x8
	int32_t I; // 0xc
	FString S; // 0x10
};

struct FMcpChallengeUserRequest {
	FString UniqueUserId; // 0x0
	TArray<FMcpChallengeRequest> ChallengeStatusRequests; // 0x10
	TArray<FMcpChallengeRequest> ChallengeAcceptRequests; // 0x20
	TArray<FMcpChallengeRequest> ChallengeUpdateProgressRequests; // 0x30
	TArray<FMcpChallengeRequest> ChallengeUpdateRewardRequests; // 0x40
};

struct FTViewTarget {
	ObjectProperty Target; // 0x0
	ObjectProperty Controller; // 0x8
	FTPOV POV; // 0x10
	float AspectRatio; // 0x2c
	ObjectProperty PRI; // 0x30
};

struct FInterpLookupTrack {
	TArray<FInterpLookupPoint> Points; // 0x0
};

struct FBeamTargetData {
	FName TargetName; // 0x0
	float TargetPercentage; // 0x8
};

struct FEvolveSupplyPointInfos {
	int32_t PointCount; // 0x0
	int32_t PointMin; // 0x4
	int32_t PointMax; // 0x8
	int32_t SupplyGrade; // 0xc
};

struct FBuyItemStruct {
	FString ItemName; // 0x0
	FString ItemCategory; // 0x10
	FString imgUrl; // 0x20
	uint32_t newIcon : 1; // 0x30
	uint32_t hotIcon : 1; // 0x30
	uint32_t protoIcon : 1; // 0x30
	uint32_t buyIcon : 1; // 0x30
};

struct FCompetitionStringIDInfo {
	int32_t Season; // 0x0
	int32_t emblem; // 0x4
	int32_t NoEmblem; // 0x8
	int32_t Score; // 0xc
	int32_t NoScore; // 0x10
};

struct FBoxSphereBounds {
	FVector Origin; // 0x0
	FVector BoxExtent; // 0xc
	float SphereRadius; // 0x18
};

struct FCoverMeshes {
	ObjectProperty Base; // 0x0
	ObjectProperty LeanLeft; // 0x8
	ObjectProperty LeanRight; // 0x10
	ObjectProperty LeanLeftPref; // 0x18
	ObjectProperty LeanRightPref; // 0x20
	ObjectProperty Climb; // 0x28
	ObjectProperty Mantle; // 0x30
	ObjectProperty SlipLeft; // 0x38
	ObjectProperty SlipRight; // 0x40
	ObjectProperty SwatLeft; // 0x48
	ObjectProperty SwatRight; // 0x50
	ObjectProperty PopUp; // 0x58
	ObjectProperty PlayerOnly; // 0x60
};

struct FWorldCube {
	ObjectProperty TextureCube; // 0x0
	FVector Location; // 0x8
};

struct FPBScopeProcessInfo {
	ObjectProperty OwningBuilding; // 0x0
	ObjectProperty Ruleset; // 0x8
	FName RulesetVariation; // 0x10
	uint32_t bGenerateLODPoly : 1; // 0x18
	uint32_t bPartOfNonRect : 1; // 0x18
};

struct FIFFInfo {
	EIFFType IFFType; // 0x0
	FString NickName; // 0x4
	char HealthState; // 0x14
	int32_t userID; // 0x18
	int32_t ScreenX; // 0x1c
	int32_t ScreenY; // 0x20
	char SpecialEquipType; // 0x24
	uint32_t bUsingRadio : 1; // 0x28
	uint32_t bKiller : 1; // 0x28
	FString ClanName; // 0x2c
	int32_t ClanColorID; // 0x3c
	FString RankImageName; // 0x40
	int32_t RankImageID; // 0x50
	char ChampionshipIndex; // 0x54
	float FlashRate; // 0x58
};

struct FVectorParameterValueOverTime : FParameterValueOverTime {
	FLinearColor ParameterValue; // 0x30
	FInterpCurveVector ParameterValueCurve; // 0x40
};

struct FPresetTabStruct {
	int32_t Index; // 0x0
	FString Label; // 0x4
};

struct FAggregateEventMapping {
	int32_t EventID; // 0x0
	int32_t AggregateID; // 0x4
	int32_t TargetAggregateID; // 0x8
};

struct FShowFlags_Mirror {
	FQWord flags0; // 0x0
	FQWord flags1; // 0x8
};

struct FClanMatchInfoStruct {
	int32_t Id; // 0x0
	FString ClanName; // 0x4
	int32_t EmblemID; // 0x14
	char MemberCount; // 0x18
	int32_t ClanExp; // 0x1c
	int32_t ClanRankPoint; // 0x20
	int32_t ClanColorID; // 0x24
};

struct FPostProcessMaterialRef {
	ObjectProperty Effect; // 0x0
};

struct FWeaponLevelInfo {
	uint32_t bArrivalGet : 1; // 0x0
	int32_t ArrivalGetPlayerID; // 0x4
	uint32_t bJug : 1; // 0x8
	int32_t NextLevelPoint; // 0xc
	int32_t Id; // 0x10
	int32_t Rank; // 0x14
	FString GroupCodeName; // 0x18
	FString FirstArrivalCodeName; // 0x28
	FString ScriptFilePri; // 0x38
	int32_t ArrivalEquipType; // 0x48
	TArray<FWeaponEquipInfo> WeaponEquipList; // 0x4c
};

struct FVelocityObstacleStat {
	FVector Position; // 0x0
	FVector Velocity; // 0xc
	float Radius; // 0x18
	int32_t Priority; // 0x1c
};

struct FFragmentGroup {
	TArray<int32_t> FragmentIndices; // 0x0
	uint32_t bGroupIsRooted : 1; // 0x10
};

struct FLimitBuyItemData {
	int32_t item_id; // 0x0
	int32_t buy_count; // 0x4
	int32_t reset_remain_sec; // 0x8
};

struct FInputExpireTimeInfo {
	FName StateName; // 0x0
	float InputExpireTime; // 0x8
};

struct FInterpPointOnSpline {
	FVector Position; // 0x0
	float InVal; // 0xc
	float Length; // 0x10
};

struct FUntypedBulkData_Mirror {
	FPointer VfTable; // 0x0
	int32_t BulkDataFlags; // 0x8
	int32_t ElementCount; // 0xc
	int32_t BulkDataOffsetInFile; // 0x10
	int32_t BulkDataSizeOnDisk; // 0x14
	int32_t SavedBulkDataFlags; // 0x18
	int32_t SavedElementCount; // 0x1c
	int32_t SavedBulkDataOffsetInFile; // 0x20
	int32_t SavedBulkDataSizeOnDisk; // 0x24
	FPointer BulkData; // 0x28
	int32_t LockStatus; // 0x30
	FPointer AttachedAr; // 0x34
	int32_t bShouldFreeOnEmpty; // 0x3c
};

struct FMcpUncompressMessageRequest {
	FString MessageId; // 0x0
	TArray<char> SourceBuffer; // 0x10
	TArray<char> DestBuffer; // 0x20
	int32_t OutUncompressedSize; // 0x30
	FPointer UncompressionWorker; // 0x34
};

struct FSProjectileCamera {
	float MaxPlayTime; // 0x0
	float StartDelay; // 0x4
	float FirstFollowTime; // 0x8
	float RotateSpeed; // 0xc
	float KeepDistance; // 0x10
	float RecoverTime; // 0x14
};

struct FSkeletalMeshLODInfo {
	float Distance; // 0x0
	float DisplayFactor; // 0x4
	float LODHysteresis; // 0x8
	TArray<int32_t> LODMaterialMap; // 0xc
	TArray<char> bEnableShadowCasting; // 0x1c
	TArray<TriangleSortOption> TriangleSorting; // 0x2c
	TArray<FTriangleSortSettings> TriangleSortSettings; // 0x3c
	uint32_t bDisableCompressions : 1; // 0x4c
	uint32_t bHasBeenSimplified : 1; // 0x4c
};

struct FSeqEventLink {
	USequenceEvent* ExpectedType; // 0x0
	TArray<ObjectProperty> LinkedEvents; // 0x8
	FString LinkDesc; // 0x18
	int32_t DrawX; // 0x28
	uint32_t bHidden : 1; // 0x2c
	uint32_t bMoving : 1; // 0x2c
	uint32_t bClampedMax : 1; // 0x2c
	uint32_t bClampedMin : 1; // 0x2c
};

struct FPlayerStatInfo {
	int32_t DBID; // 0x0
	int32_t Value; // 0x4
};

struct FExcelExternalCallType {
	int32_t PublicID; // 0x0
	int32_t PersonalID; // 0x4
	int32_t GameSetID; // 0x8
	int32_t DBID; // 0xc
};

struct FWorldAttractorData {
	uint32_t bEnabled : 1; // 0x0
	FVector Location; // 0x4
	EWorldAttractorFalloffType FalloffType; // 0x10
	float FalloffExponent; // 0x14
	float Range; // 0x18
	float Strength; // 0x1c
};

struct FMatchHistoryInfo {
	int32_t MatchCount; // 0x0
	int32_t win; // 0x4
	int32_t lose; // 0x8
	int32_t Kill; // 0xc
	int32_t assist; // 0x10
	int32_t death; // 0x14
	int32_t HeadShotKill; // 0x18
	int32_t FatalShotKill; // 0x1c
	int32_t Runaway; // 0x20
	TArray<FMatchPlayHistoryInfo> MatchPlayHistoryList; // 0x24
};

struct FQuickStart_MapInfo {
	int32_t RefID; // 0x0
	int32_t SizeType; // 0x4
	FString Label; // 0x8
	FString EventDesc; // 0x18
	FString SizeDesc; // 0x28
	FString MaxPlayerCountDesc; // 0x38
	FString ButtonBGImgPath; // 0x48
	FString SummaryBGImgPath; // 0x58
	FString MinimapImgPath; // 0x68
	uint32_t bIcon_New : 1; // 0x78
	uint32_t bIcon_Event : 1; // 0x78
	uint32_t bIcon_Pop : 1; // 0x78
	uint32_t bDisabled : 1; // 0x78
};

struct FWeightNodeRule {
	FName NodeName; // 0x0
	ObjectProperty CachedNode; // 0x8
	ObjectProperty CachedSlotNode; // 0x10
	EWeightCheck WeightCheck; // 0x18
	int32_t ChildIndex; // 0x1c
};

struct FBlockAndReportLabelSettingInfo {
	FString LabelString; // 0x0
	int32_t LabelID; // 0x10
};

struct FRawInputKeyEventData {
	FName InputKeyName; // 0x0
	char ModifierKeyFlags; // 0x8
};

struct FCustomAIData {
	float Tactics; // 0x0
	float StrafingAbility; // 0x4
	float Accuracy; // 0x8
	float Aggressiveness; // 0xc
	float CombatStyle; // 0x10
	float Jumpiness; // 0x14
	float ReactionTime; // 0x18
	FString FavoriteWeapon; // 0x1c
};

struct FCharacterInfo {
	FString CharID; // 0x0
	FString FamilyID; // 0x10
	FString CharName; // 0x20
	FString Description; // 0x30
	FString PreviewImageMarkup; // 0x40
	FString Faction; // 0x50
	FCustomAIData AIData; // 0x60
};

struct FEvolveLevelInfo {
	char GRADE; // 0x0
	int32_t MinLevelPoint; // 0x4
	int32_t MaxLevelPoint; // 0x8
	float AmmoRatio; // 0xc
	TArray<FEvolveEquipInfo> EquipInfo; // 0x10
};

struct FOnlineContent {
	EOnlineContentType ContentType; // 0x0
	char UserIndex; // 0x1
	uint32_t bIsCorrupt : 1; // 0x4
	int32_t DeviceID; // 0x8
	int32_t LicenseMask; // 0xc
	FString FriendlyName; // 0x10
	FString Filename; // 0x20
	FString ContentPath; // 0x30
	TArray<FString> ContentPackages; // 0x40
	TArray<FString> ContentFiles; // 0x50
};

struct FMaterialVectorParamMod {
	ObjectProperty MatInst; // 0x0
	FName ParamName; // 0x8
	FLinearColor VectorVal; // 0x10
};

struct FDisplayBannerInfo {
	int32_t CurrnetHyperLinkURLIndex; // 0x0
	int32_t CurrentTextureIndex; // 0x4
	TArray<ObjectProperty> TextureList; // 0x8
	TArray<FString> HyperLinkURL; // 0x18
};

struct FFloatMaterialParamMICData {
	TArray<ObjectProperty> MICs; // 0x0
	TArray<float> MICResetFloats; // 0x10
};

struct FPaintedVertex {
	FVector Position; // 0x0
	FPackedNormal Normal; // 0xc
	FColor Color; // 0x10
};

struct FSoundEventMapping {
	FName SoundEventName; // 0x0
	ObjectProperty SoundToPlay; // 0x8
};

struct FUIAxisEmulationData : FUIKeyRepeatData {
	uint32_t bEnabled : 1; // 0x10
};

struct FClientConnectionRequest {
	FUniqueNetId PlayerNetId; // 0x0
	ENATType NatType; // 0x8
	uint32_t bCanHostVs : 1; // 0xc
	float GoodHostRatio; // 0x10
	TArray<FConnectionBandwidthStats> BandwidthHistory; // 0x14
	int32_t MinutesSinceLastTest; // 0x24
};

struct FMcpChallengeRequest {
	FString UniqueChallengeId; // 0x0
	ObjectProperty HTTPRequest; // 0x10
};

struct FRelevantDelayInfo {
	FString PropertyName; // 0x0
	float RelevantDelayTime; // 0x10
	float FrontSideCheckDelayDelta; // 0x14
	FMap_Mirror LastUpdateInfo; // 0x18
};

struct FAmbientSoundSlot {
	ObjectProperty Wave; // 0x0
	float PitchScale; // 0x8
	float VolumeScale; // 0xc
	float Weight; // 0x10
};

struct FTrailSocketSamplePoint {
	FVector Position; // 0x0
	FVector Velocity; // 0xc
};

struct FCoverSlot {
	ObjectProperty SlotOwner; // 0x0
	float SlotValidAfterTime; // 0x8
	ECoverType ForceCoverType; // 0xc
	ECoverType CoverType; // 0xd
	ECoverLocationDescription LocationDescription; // 0xe
	FVector LocationOffset; // 0x10
	FRotator RotationOffset; // 0x1c
	TArray<ECoverAction> Actions; // 0x28
	TArray<FFireLink> FireLinks; // 0x38
	TArray<FFireLink> RejectedFireLinks; // 0x48
	TArray<int32_t> ExposedCoverPackedProperties; // 0x58
	int32_t TurnTargetPackedProperties; // 0x68
	TArray<FSlotMoveRef> SlipRefs; // 0x6c
	TArray<FCoverInfo> OverlapClaimsList; // 0x7c
	uint32_t bLeanLeft : 1; // 0x8c
	uint32_t bLeanRight : 1; // 0x8c
	uint32_t bForceCanPopUp : 1; // 0x8c
	uint32_t bCanPopUp : 1; // 0x8c
	uint32_t bCanMantle : 1; // 0x8c
	uint32_t bCanClimbUp : 1; // 0x8c
	uint32_t bForceCanCoverSlip_Left : 1; // 0x8c
	uint32_t bForceCanCoverSlip_Right : 1; // 0x8c
	uint32_t bCanCoverSlip_Left : 1; // 0x8c
	uint32_t bCanCoverSlip_Right : 1; // 0x8c
	uint32_t bCanSwatTurn_Left : 1; // 0x8c
	uint32_t bCanSwatTurn_Right : 1; // 0x8c
	uint32_t bEnabled : 1; // 0x8c
	uint32_t bAllowPopup : 1; // 0x8c
	uint32_t bAllowMantle : 1; // 0x8c
	uint32_t bAllowCoverSlip : 1; // 0x8c
	uint32_t bAllowClimbUp : 1; // 0x8c
	uint32_t bAllowSwatTurn : 1; // 0x8c
	uint32_t bForceNoGroundAdjust : 1; // 0x8c
	uint32_t bPlayerOnly : 1; // 0x8c
	uint32_t bPreferLeanOverPopup : 1; // 0x8c
	uint32_t bDestructible : 1; // 0x8c
	uint32_t bSelected : 1; // 0x8c
	uint32_t bFailedToFindSurface : 1; // 0x8c
};

struct FCullDistanceSizePair {
	float Size; // 0x0
	float CullDistance; // 0x4
};

struct FEmitterDynamicParameter {
	FName ParamName; // 0x0
	uint32_t bUseEmitterTime : 1; // 0x8
	uint32_t bSpawnTimeOnly : 1; // 0x8
	EEmitterDynamicParameterValue ValueMethod; // 0xc
	uint32_t bScaleVelocityByParamValue : 1; // 0x10
	FRawDistributionFloat ParamValue; // 0x14
};

struct FClanJoinList {
	int32_t ClanID; // 0x0
};

struct FParticleSysParam {
	FName Name; // 0x0
	EParticleSysParamType ParamType; // 0x8
	float Scalar; // 0xc
	float Scalar_Low; // 0x10
	FVector Vector; // 0x14
	FVector Vector_Low; // 0x20
	FColor Color; // 0x2c
	ObjectProperty Actor; // 0x30
	ObjectProperty Material; // 0x38
};

struct FRandomBoxShopItemInfo {
	int32_t InvenSlotIndex; // 0x0
	int32_t RefItemID; // 0x4
	int32_t PriceType; // 0x8
};

struct FMatchResultPlayerData {
	int32_t userID; // 0x0
	FString NickName; // 0x4
	int32_t Level; // 0x14
	Team TeamIndex; // 0x18
	int32_t Score; // 0x1c
	int32_t ModeScore; // 0x20
	int32_t PlayedTime; // 0x24
	int32_t Kill; // 0x28
	int32_t assist; // 0x2c
	int32_t death; // 0x30
	int32_t Life; // 0x34
	int32_t CRPoint_Acquired; // 0x38
	int32_t CRPoint_Used; // 0x3c
	char PlayedMilitaryBranch; // 0x40
	char Rank; // 0x41
	char TotalRanking; // 0x42
	char TeamRanking; // 0x43
	int32_t Gold; // 0x44
	int32_t Exp; // 0x48
	int32_t ClanID; // 0x4c
	int32_t EmblemID; // 0x50
	int32_t EmblemEdgeID; // 0x54
	int32_t ClanPoint; // 0x58
	int32_t ClanExp; // 0x5c
	FString ClanName; // 0x60
	int32_t ClanColorID; // 0x70
	int32_t CCardID; // 0x74
	TArray<int32_t> BoosterItemList; // 0x78
	TArray<int32_t> RewardItemList; // 0x88
	int32_t TierPoint; // 0x98
	int32_t CompMatchCount; // 0x9c
};

struct FActivateOp {
	ObjectProperty ActivatorOp; // 0x0
	ObjectProperty Op; // 0x8
	int32_t InputIdx; // 0x10
	float RemainingDelay; // 0x14
};

struct FCustomAnimData {
	TArray<FName> WeapAnimSeqName; // 0x0
	TArray<FName> WeapAttachAnimSeqName; // 0x10
	TArray<FName> PawnAnimSeqName; // 0x20
	float BlendInTime; // 0x30
	float BlendOutTime; // 0x34
	float PawnAnimBlendInTime; // 0x38
	float PawnAnimBlendOutTime; // 0x3c
	float PlayRate; // 0x40
	float AdditionalPlayTime; // 0x44
	uint32_t bModifyAnimRate : 1; // 0x48
	uint32_t bLooping : 1; // 0x48
	uint32_t bOverride : 1; // 0x48
	uint32_t bForceLocalSpaceBlend : 1; // 0x48
	uint32_t bFullBody : 1; // 0x48
};

struct FForbiddenWeapon {
	WEAPON_TYPES ForbiddenWeaponType; // 0x0
	ACombatWeapon* ReplaceWeapon; // 0x4
};

struct FSendConsumeItemInfo {
	int32_t InvenSlot; // 0x0
	int32_t RefItemIndex; // 0x4
};

struct FFontRenderInfo {
	uint32_t bClipText : 1; // 0x0
	uint32_t bEnableShadow : 1; // 0x0
	FDepthFieldGlowInfo GlowInfo; // 0x4
};

struct FArray_Mirror {
	FPointer Data; // 0x0
	int32_t ArrayNum; // 0x8
	int32_t ArrayMax; // 0xc
};

struct FAnimSetBakeAndPruneStatus {
	FString AnimSetName; // 0x0
	uint32_t bReferencedButUnused : 1; // 0x10
	uint32_t bSkipBakeAndPrune : 1; // 0x10
	uint32_t bSkipCooking : 1; // 0x10
};

struct FTutorial_Dialogue {
	int32_t SpeakerNameIndex; // 0x0
	int32_t SubtitleTextIndex; // 0x4
	ObjectProperty VoiceSoundcue; // 0x8
	float DelayTime; // 0x10
	float ShowTime; // 0x14
};

struct FAvatarItemInfo {
	int32_t ItemID; // 0x0
};

struct FMeshInfo {
	ComponentProperty MeshComp; // 0x0
	int32_t DamageThreshold; // 0x8
};

struct FTimerData {
	uint32_t bLoop : 1; // 0x0
	uint32_t bPaused : 1; // 0x0
	FName FuncName; // 0x4
	float Rate; // 0xc
	float Count; // 0x10
	float TimerTimeDilation; // 0x14
	ObjectProperty TimerObj; // 0x18
};

struct FSAgroCheck {
	float VisibleWeight; // 0x0
	float DistanceWeight; // 0x4
	float OrientWeight; // 0x8
	float RecentlyDamagedWeight; // 0xc
	TArray<FSClassAgroWeight> ClassAgroInfos; // 0x10
};

struct FTerrainDecorationInstance {
	ComponentProperty Component; // 0x0
	float X; // 0x8
	float Y; // 0xc
	float Scale; // 0x10
	int32_t Yaw; // 0x14
};

struct FDefaultInventoryInfo {
	TArray<AInventory*> LoadedInventoryClass; // 0x0
	TArray<FString> InventoryClassName; // 0x10
};

struct FParticleEventCollideData : FParticleEventData {
	float ParticleTime; // 0x34
	FVector Normal; // 0x38
	float Time; // 0x44
	int32_t Item; // 0x48
	FName BoneName; // 0x4c
};

struct FFacebookFriend {
	FString Name; // 0x0
	FString Id; // 0x10
};

struct FProfileStatData {
	int32_t win; // 0x0
	int32_t lose; // 0x4
	int32_t Kill; // 0x8
	int32_t death; // 0xc
	int32_t assist; // 0x10
	int32_t HeadShotKill; // 0x14
	int32_t FatalKill; // 0x18
	int32_t ClanWin; // 0x1c
	int32_t ClanLose; // 0x20
	int32_t ClanKill; // 0x24
	int32_t ClanDeath; // 0x28
	int32_t ClanAssist; // 0x2c
	int32_t ClanHeadShotKill; // 0x30
	int32_t ClanFatalKill; // 0x34
};

struct FAchievementDetails {
	int32_t Id; // 0x0
	FString AchievementName; // 0x4
	FString Description; // 0x14
	FString HowTo; // 0x24
	ObjectProperty Image; // 0x34
	char MonthEarned; // 0x3c
	char DayEarned; // 0x3d
	char YearEarned; // 0x3e
	char DayOfWeekEarned; // 0x3f
	int32_t GamerPoints; // 0x40
	uint32_t bIsSecret : 1; // 0x44
	uint32_t bWasAchievedOnline : 1; // 0x44
	uint32_t bWasAchievedOffline : 1; // 0x44
};

struct FCCSSystemConfigData {
	float MaxSightRadius; // 0x0
	float MaxBehindSightRadius; // 0x4
	float MaxHearingRadius; // 0x8
	float VisionCone; // 0xc
	float CoverQueryRadius; // 0x10
	TArray<ETargetSelectionConfig> TargetSelection; // 0x14
	ECCSMovementConfig Movement; // 0x24
	ECCSDetermineCanShootConfig DetermineCanShoot; // 0x25
	float TargetAwarenessTickDelayTime; // 0x28
};

struct FRawDistributionFloat : FRawDistribution {
	ComponentProperty Distribution; // 0x1c
};

struct FSceneInfo {
	eFrontEndScene Scene; // 0x0
	FName StateName; // 0x4
	ESceneType SceneType; // 0xc
	eFrontEndScene PreScene; // 0xd
	eFrontEndScene NextScene; // 0xe
	FName CameraName; // 0x10
};

struct FWarmUpInfo {
	FString stUserName; // 0x0
	uint32_t bComplete : 1; // 0x10
};

struct FPostProcessSettingsOverride {
	FPostProcessSettings Settings; // 0x0
	uint32_t bBlendingIn : 1; // 0x164
	uint32_t bBlendingOut : 1; // 0x164
	float CurrentBlendInTime; // 0x168
	float CurrentBlendOutTime; // 0x16c
	float BlendInDuration; // 0x170
	float BlendOutDuration; // 0x174
	float BlendStartTime; // 0x178
	FInterpCurveFloat TimeAlphaCurve; // 0x17c
	uint32_t bEffectMaintain : 1; // 0x190
	float EffectMaintainDuration; // 0x194
	float CurrentEffectMaintainTime; // 0x198
};

struct FSavedWeaponInfo {
	int32_t WeaponIndex; // 0x0
	FString WeaponName; // 0x4
};

struct FOnlineGameSearchSortClause {
	int32_t EntryId; // 0x0
	FName ObjectPropertyName; // 0x4
	EOnlineGameSearchEntryType EntryType; // 0xc
	EOnlineGameSearchSortType SortType; // 0xd
};

struct FVisibilityTrackKey {
	float Time; // 0x0
	EVisibilityTrackAction Action; // 0x4
	EVisibilityTrackCondition ActiveCondition; // 0x5
};

struct FPendingMarkerData {
	int32_t MarkerID; // 0x0
	FVector MarkerLocation; // 0x4
};

struct FFontCharacter {
	int32_t StartU; // 0x0
	int32_t StartV; // 0x4
	int32_t USize; // 0x8
	int32_t VSize; // 0xc
	char TextureIndex; // 0x10
	int32_t VerticalOffset; // 0x14
};

struct FObjDamageModifierDependency {
	FName DependentSubObjName; // 0x0
	float MaxHealthToAllow; // 0x8
	int32_t DependentSubObjIdx; // 0xc
};

struct FCrowdSpawnInfoItem {
	ObjectProperty SeqSpawner; // 0x0
	uint32_t bSpawningActive : 1; // 0x8
	float SpawnRate; // 0xc
	int32_t SpawnNum; // 0x10
	float Remainder; // 0x14
	TArray<ObjectProperty> ActiveAgents; // 0x18
	TArray<FAgentArchetypeInfo> AgentArchetypes; // 0x28
	float AgentFrequencySum; // 0x38
	float MaxSpawnDist; // 0x3c
	float MaxSpawnDistSq; // 0x40
	float MinBehindSpawnDist; // 0x44
	float MinBehindSpawnDistSq; // 0x48
	float AgentWarmupTime; // 0x4c
	uint32_t bForceObstacleChecking : 1; // 0x50
	uint32_t bForceNavMeshPathing : 1; // 0x50
	uint32_t bEnableCrowdLightEnvironment : 1; // 0x50
	uint32_t bCastShadows : 1; // 0x50
	FLightingChannelContainer AgentLightingChannel; // 0x54
	int32_t NumAgentsToTickPerFrame; // 0x58
	int32_t LastAgentTickedIndex; // 0x5c
	TArray<ObjectProperty> PotentialSpawnPoints; // 0x60
	float SpawnPrioritizationInterval; // 0x70
	int32_t PrioritizationIndex; // 0x74
	int32_t PrioritizationUpdateIndex; // 0x78
	TArray<ObjectProperty> PrioritizedSpawnPoints; // 0x7c
	float PlayerPositionPredictionTime; // 0x8c
};

struct FSubObjectStaticLightingInfo {
	TArray<FObjectDamageModifierStaticLightingInfo> StaticLightingInfos; // 0x0
	FObjectDamageModifierStaticLightingInfo UndamagedStaticLightingInfo; // 0x10
};

struct FCompressedImpactInfo {
	ObjectProperty HitActor; // 0x0
	FVector HitLocation; // 0x8
	FCompressedTraceHitInfo HitInfo; // 0x14
};

struct FAnimNotifyVectorParameter {
	FName ParameterName; // 0x0
	FLinearColor StartParameterValue; // 0x8
	FLinearColor EndParameterValue; // 0x18
};

struct FCurrentPlayerMet {
	int32_t TeamNum; // 0x0
	int32_t Skill; // 0x4
	FUniqueNetId NetId; // 0x8
};

struct FInputMatchRequest {
	TArray<FInputEntry> Inputs; // 0x0
	ObjectProperty MatchActor; // 0x10
	FName MatchFuncName; // 0x18
	DelegateProperty MatchDelegate; // 0x20
	FName FailedFuncName; // 0x30
	FName RequestName; // 0x38
	int32_t MatchIdx; // 0x40
	float LastMatchTime; // 0x44
};

struct FFriendsQuery {
	FUniqueNetId UniqueId; // 0x0
	uint32_t bIsFriend : 1; // 0x8
};

struct FClanInformation {
	FString ClanName; // 0x0
	int32_t Rank; // 0x10
	FString ClanMaster; // 0x14
	int32_t ClanPoint; // 0x24
	int32_t ClanMembers; // 0x28
	int32_t A_Match_Win; // 0x2c
	int32_t A_Match_Lose; // 0x30
	int32_t B_Match_Win; // 0x34
	int32_t B_Match_Lose; // 0x38
	int32_t Total_Match_Win; // 0x3c
	int32_t Total_Match_Lose; // 0x40
};

struct FUITacticalGearStruct {
	char Id; // 0x0
	int32_t Cost; // 0x4
	FString ItemName; // 0x8
	TArray<FString> DescList; // 0x18
	uint32_t bEnoughMoney : 1; // 0x28
	uint32_t bAllowedMode : 1; // 0x28
	uint32_t bUpdateEnoughMoney : 1; // 0x28
	uint32_t bUpdateAllowedMode : 1; // 0x28
};

struct FSendNickInfo {
	char Error_Code; // 0x0
	FString NickName; // 0x4
};

struct FTypeAliasInfo {
	FName Name; // 0x0
	FString ClassType; // 0x8
};

struct FFlashEffectSettingStruct {
	float Time; // 0x0
	float InabilityTime; // 0x4
	float Intensities[0x2]; // 0x8
};

struct FSTargetExplodeLocationInfo {
	char btFlag; // 0x0
	FVector Location; // 0x4
};

struct FSpeedTreeStaticLight {
	FGuid Guid; // 0x0
	ObjectProperty BranchShadowMap; // 0x10
	ObjectProperty FrondShadowMap; // 0x18
	ObjectProperty LeafMeshShadowMap; // 0x20
	ObjectProperty LeafCardShadowMap; // 0x28
	ObjectProperty BillboardShadowMap; // 0x30
};

struct FOutlineProperty {
	FName EventName; // 0x0
	float IntenseCycleTime; // 0x8
	float ColorIntense; // 0xc
	float WidthMaxDistance; // 0x10
	float CullDistance; // 0x14
	FColor Color; // 0x18
	FString OverrideMaterialName; // 0x1c
	ObjectProperty OverrideMaterial; // 0x2c
	char Width; // 0x34
	char MinWidth; // 0x35
	EBlendMode BlendMode; // 0x36
	char StencilID; // 0x37
	uint32_t bUseOriginalMaterial : 1; // 0x38
	uint32_t bSuppressOtherOutline : 1; // 0x38
	uint32_t DrawOnlyHidden : 1; // 0x38
	uint32_t DisableDepthTest : 1; // 0x38
	uint32_t EnableDepthWrite : 1; // 0x38
	uint32_t bOverlaySurface : 1; // 0x38
	uint32_t bDisableForeground : 1; // 0x38
};

struct FBitArray_Mirror {
	FPointer IndirectData; // 0x0
	int32_t InlineData[0x4]; // 0x8
	int32_t NumBits; // 0x18
	int32_t MaxBits; // 0x1c
};

struct FAudioClassInfo {
	int32_t NumResident; // 0x0
	int32_t SizeResident; // 0x4
	int32_t NumRealTime; // 0x8
	int32_t SizeRealTime; // 0xc
};

struct FClanList {
	int32_t ClanID; // 0x0
	FString ClanName; // 0x4
	FString ClanMasterName; // 0x14
	int32_t Region; // 0x24
	int32_t MemberCurrentCount; // 0x28
	int32_t MemberMaxCount; // 0x2c
	WordProperty ClanMasterLevel; // 0x30
	WordProperty EmblemID; // 0x32
	WordProperty EmblemEdgeID; // 0x34
	FTimeData RegistrationTime; // 0x38
	int32_t A_Match_Win; // 0x40
	int32_t A_Match_Lose; // 0x44
	int32_t B_Match_Win; // 0x48
	int32_t B_Match_Lose; // 0x4c
	int32_t Total_Match_Win; // 0x50
	int32_t Total_Match_Lose; // 0x54
	int32_t ClanExp; // 0x58
	int32_t ClanRankPoint; // 0x5c
	int32_t ClanColorID; // 0x60
};

struct FNotificationInfo {
	uint32_t bIsLocal : 1; // 0x0
	FString MessageBody; // 0x4
	int32_t BadgeNumber; // 0x14
	TArray<FNotificationMessageInfo> MessageInfo; // 0x18
};

struct FNxDestructibleParametersFlag {
	uint32_t ACCUMULATE_DAMAGE : 1; // 0x0
	uint32_t ASSET_DEFINED_SUPPORT : 1; // 0x0
	uint32_t WORLD_SUPPORT : 1; // 0x0
	uint32_t DEBRIS_TIMEOUT : 1; // 0x0
	uint32_t DEBRIS_MAX_SEPARATION : 1; // 0x0
	uint32_t CRUMBLE_SMALLEST_CHUNKS : 1; // 0x0
	uint32_t ACCURATE_RAYCASTS : 1; // 0x0
	uint32_t USE_VALID_BOUNDS : 1; // 0x0
	uint32_t FORM_EXTENDED_STRUCTURES : 1; // 0x0
};

struct FFOscillator {
	float Amplitude; // 0x0
	float Frequency; // 0x4
	EInitialOscillatorOffset InitialOffset; // 0x8
};

struct FMaterialViewRelevance {
	uint32_t bOpaque : 1; // 0x0
	uint32_t bTranslucent : 1; // 0x0
	uint32_t bDistortion : 1; // 0x0
	uint32_t bOneLayerDistortionRelevance : 1; // 0x0
	uint32_t bLit : 1; // 0x0
	uint32_t bUsesSceneColor : 1; // 0x0
};

struct FPBEdgeInfo {
	FVector EdgeEnd; // 0x0
	FVector EdgeStart; // 0xc
	int32_t ScopeAIndex; // 0x18
	EScopeEdge ScopeAEdge; // 0x1c
	int32_t ScopeBIndex; // 0x20
	EScopeEdge ScopeBEdge; // 0x24
	float EdgeAngle; // 0x28
};

struct FMcpCompressMessageRequest {
	TArray<char> SourceBuffer; // 0x0
	TArray<char> DestBuffer; // 0x10
	int32_t OutCompressedSize; // 0x20
	ObjectProperty Request; // 0x24
	FPointer CompressionWorker; // 0x2c
};

struct FSHVectorRGB {
	FSHVector R; // 0x0
	FSHVector G; // 0x30
	FSHVector B; // 0x60
};

struct FLoadingCompUserData {
	int32_t userID; // 0x0
	FString UserName; // 0x4
	FString ClanName; // 0x14
	int32_t ClanColorID; // 0x24
	int32_t CoverIndex; // 0x28
	FString ClanImage; // 0x2c
	FString ClanEdgeImage; // 0x3c
	FString RankImage; // 0x4c
	FString TierImage; // 0x5c
	FString CallingCardURL; // 0x6c
	int32_t LoadingStatus; // 0x7c
};

struct FPropertyInfo {
	FName PropertyName; // 0x0
	uint32_t bModifyProperty : 1; // 0x8
	FString PropertyValue; // 0xc
};

struct FSoundClassAdjuster {
	ESoundClassName SoundClassName; // 0x0
	FName SoundClass; // 0x4
	float VolumeAdjuster; // 0xc
	float PitchAdjuster; // 0x10
	uint32_t bApplyToChildren : 1; // 0x14
	float VoiceCenterChannelVolumeAdjuster; // 0x18
};

struct FDSConnectionDelayInfo {
	int32_t MessageType; // 0x0
	float DelayTime; // 0x4
};

struct FPBFaceUVInfo {
	FVector2D Offset; // 0x0
	FVector2D Size; // 0x8
};

struct FRecognisableWord {
	int32_t Id; // 0x0
	FString ReferenceWord; // 0x4
	FString PhoneticWord; // 0x14
};

struct FTitleFileWeb : FTitleFile {
	FString StringData; // 0x24
	ObjectProperty HTTPRequest; // 0x34
	EMcpFileCompressionType FileCompressionType; // 0x3c
};

struct FOccupiedTeamMemberInfo {
	int32_t TeamIndex; // 0x0
	TArray<ObjectProperty> MemberPawn; // 0x4
};

struct FChattingDisplayInfo {
	int32_t LabelID; // 0x0
	FString Label; // 0x4
	FString Msg_ColorList[0x2]; // 0x14
	FString CallSign_ColorList[0x2]; // 0x34
	FString ClanNalme_ColorList[0x2]; // 0x54
};

struct FAnimControlTrackKey {
	float StartTime; // 0x0
	FName AnimSeqName; // 0x4
	float AnimStartOffset; // 0xc
	float AnimEndOffset; // 0x10
	float AnimPlayRate; // 0x14
	uint32_t bLooping : 1; // 0x18
	uint32_t bReverse : 1; // 0x18
};

struct FRankMetaData {
	FName RankName; // 0x0
	FString RankColumnName; // 0x8
};

struct FEnemyPosition {
	FVector Position; // 0x0
	FVector Velocity; // 0xc
	float Time; // 0x18
};

struct FDisplayTable {
	FString OtherPlayerName; // 0x0
	int32_t OtherPlayerTotalDamage; // 0x10
	int32_t OtherDamagePercent; // 0x14
	int32_t MyTotalDamage; // 0x18
	int32_t MyDamagePercent; // 0x1c
	int32_t OtherPlayerLastHitBodyIndex; // 0x20
	int32_t MyLastHitBodyIndex; // 0x24
	EKillType KillType; // 0x28
	float TimeStamp; // 0x2c
};

struct FBonePair {
	FName Bones[0x2]; // 0x0
};

struct FNxDestructibleDamageParameters {
	float DamageThreshold; // 0x0
	float DamageSpread; // 0x4
	float ImpactDamage; // 0x8
	float ImpactResistance; // 0xc
	int32_t DefaultImpactDamageDepth; // 0x10
};

struct FPBMeshCompInfo {
	ComponentProperty MeshComp; // 0x0
	int32_t TopLevelScopeIndex; // 0x8
};

struct FCameraShakeInstance {
	ObjectProperty SourceShake; // 0x0
	FName SourceShakeName; // 0x8
	float OscillatorTimeRemaining; // 0x10
	uint32_t bBlendingIn : 1; // 0x14
	float CurrentBlendInTime; // 0x18
	uint32_t bBlendingOut : 1; // 0x1c
	float CurrentBlendOutTime; // 0x20
	FVector LocSinOffset; // 0x24
	FVector RotSinOffset; // 0x30
	float FOVSinOffset; // 0x3c
	float Scale; // 0x40
	ObjectProperty AnimInst; // 0x44
	ECameraAnimPlaySpace PlaySpace; // 0x4c
	FMatrix UserPlaySpaceMatrix; // 0x50
};

struct FInterpCurveQuat {
	TArray<FInterpCurvePointQuat> Points; // 0x0
	EInterpMethodType InterpMethod; // 0x10
};

struct FSuicideStateStruct {
	uint32_t bNeedUpdate : 1; // 0x0
	uint32_t bSuicide : 1; // 0x0
};

struct FLensFlareElement {
	FName ElementName; // 0x0
	float RayDistance; // 0x8
	uint32_t bIsEnabled : 1; // 0xc
	uint32_t bUseSourceDistance : 1; // 0xc
	uint32_t bNormalizeRadialDistance : 1; // 0xc
	uint32_t bModulateColorBySource : 1; // 0xc
	FVector Size; // 0x10
	TArray<ObjectProperty> LFMaterials; // 0x1c
	FRawDistributionFloat LFMaterialIndex; // 0x2c
	FRawDistributionFloat Scaling; // 0x50
	FRawDistributionVector AxisScaling; // 0x74
	FRawDistributionFloat Rotation; // 0x98
	uint32_t bOrientTowardsSource : 1; // 0xbc
	FRawDistributionVector Color; // 0xc0
	FRawDistributionFloat Alpha; // 0xe4
	FRawDistributionVector Offset; // 0x108
	FRawDistributionVector DistMap_Scale; // 0x12c
	FRawDistributionVector DistMap_Color; // 0x150
	FRawDistributionFloat DistMap_Alpha; // 0x174
};

struct FMoneyInfo {
	FString DisplayName; // 0x0
	FString ImagePath; // 0x10
};

struct FUserInfoTooltipInfo {
	int32_t userID; // 0x0
	FString NickName; // 0x4
	int32_t Level; // 0x14
	FString LevelName; // 0x18
	ESessionState SessionState; // 0x28
	int32_t refChannelIndex; // 0x2c
	FString ServerName; // 0x30
	char ChannelNumber; // 0x40
	FString ChannelName; // 0x44
	WordProperty MatchroomNumber; // 0x54
	int32_t RefModeIndex; // 0x58
	int32_t RefModeGroupIndex; // 0x5c
	FString ModeName; // 0x60
	int32_t X; // 0x70
	int32_t Y; // 0x74
};

struct FCombatDecalParam {
	FName ParamName; // 0x0
	float Min; // 0x8
	float Max; // 0xc
};

struct FRenderCommandFence {
	int32_t NumPendingFences; // 0x0
};

struct FAnimNotifyScalarParameter {
	FName ParameterName; // 0x0
	float StartParameterValue; // 0x8
	float EndParameterValue; // 0xc
};

struct FCompressedTraceHitInfo {
	ObjectProperty PhysMaterial; // 0x0
	int32_t Item; // 0x8
	int32_t BoneIndex; // 0xc
	uint32_t bNoDecal : 1; // 0x10
};

struct FLocalTalkerSteam : FLocalTalker {
	EMuteType MuteType; // 0x4
};

struct FUIRangeData {
	float CurrentValue; // 0x0
	float MinValue; // 0x4
	float MaxValue; // 0x8
	float NudgeValue; // 0xc
	uint32_t bIntRange : 1; // 0x10
};

struct FGameSettingsCfg {
	UOnlineGameSettings* GameSettingsClass; // 0x0
	ObjectProperty Provider; // 0x8
	ObjectProperty GameSettings; // 0x10
	FName SettingsName; // 0x18
};

struct FUIMapStruct {
	int32_t MapRefID; // 0x0
	FString MapCodeName; // 0x4
	FString MapLabel; // 0x14
	MATCHROOM_MAP_OPTION_SIZE MapSize; // 0x24
	int32_t MapButtonImgID; // 0x28
	int32_t MapBGImgID; // 0x2c
	int32_t MinimapImgID; // 0x30
	uint32_t BetaVersion : 1; // 0x34
	int32_t ModeRefID; // 0x38
};

