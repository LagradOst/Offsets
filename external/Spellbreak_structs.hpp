// Created by BlueFire1337
// Updated 2022-01-27
// Generated 2022-02-02

#pragma once

struct FPartyPrivacySettings {
	EPartyType PartyType; // 0x0
	EPartyInviteRestriction PartyInviteRestriction; // 0x1
	bool bOnlyLeaderFriendsCanJoin; // 0x2
};

struct FClientWriteEventResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString EventId; // 0x8
};

struct FRBFTarget : FRBFEntry {
	TArray<float> Values; // 0x0
	float ScaleFactor; // 0x10
	bool bApplyCustomCurve; // 0x14
	FRichCurve CustomCurve; // 0x18
};

struct FBTDecoratorLogic {
	EBTDecoratorLogic Operation; // 0x0
	uint16_t Number; // 0x2
};

struct FGroupsChangeMemberRoleRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString DestinationRoleId; // 0x8
	UPlayFabJsonObject* Group; // 0x18
	TArray<UPlayFabJsonObject*> Members; // 0x20
	FString OriginRoleId; // 0x30
};

struct FClientValidateWindowsReceiptResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FMultiplayerCreateRemoteUserResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString ExpirationTime; // 0x8
	FString Password; // 0x18
	FString Username; // 0x28
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

struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base {
	FPoseLink LocalPose; // 0x10
};

struct FCollectionVectorParameter : FCollectionParameterBase {
	FName ParameterName; // 0x0
	FGuid ID; // 0xc
	FLinearColor DefaultValue; // 0x1c
};

struct FClientUnlinkFacebookInstantGamesIdRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString FacebookInstantGamesId; // 0x8
};

struct FDepthFieldGlowInfo {
	char bEnableGlow : 1; // 0x0
	FLinearColor GlowColor; // 0x4
	FVector2D GlowOuterRadius; // 0x14
	FVector2D GlowInnerRadius; // 0x1c
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

struct FClientGetPlayFabIDsFromTwitchIDsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FSubsurfaceProfileStruct {
	float ScatterRadius; // 0x0
	FLinearColor SubsurfaceColor; // 0x4
	FLinearColor FalloffColor; // 0x14
	FLinearColor BoundaryColorBleed; // 0x24
	float ExtinctionScale; // 0x34
	float NormalScale; // 0x38
	float ScatteringDistribution; // 0x3c
	float IOR; // 0x40
	float Roughness0; // 0x44
	float Roughness1; // 0x48
	float LobeMix; // 0x4c
};

struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FNiagaraVariable Parameter; // 0x20
	FMovieSceneIntegerChannel IntegerChannel; // 0x58
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

struct FXActionPhase {
	float StartTime; // 0x0
	float EndTime; // 0x4
	FGameplayTag PhaseName; // 0x8
};

struct FClientLinkTwitchAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientGetCharacterDataRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CharacterId; // 0x8
	int32_t IfChangedFromDataVersion; // 0x18
	FString KeyS; // 0x20
	FString PlayFabId; // 0x30
};

struct FServerLoginWithXboxRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* InfoRequestParameters; // 0x10
	FString XboxToken; // 0x18
};

struct FBlendSampleData {
	int32_t SampleDataIndex; // 0x0
	UAnimSequence* Animation; // 0x8
	float TotalWeight; // 0x10
	float Time; // 0x14
	float PreviousTime; // 0x18
	float SamplePlayRate; // 0x1c
};

struct FSubTrackGroup {
	FString GroupName; // 0x0
	TArray<int32_t> TrackIndices; // 0x10
	char bIsCollapsed : 1; // 0x20
	char bIsSelected : 1; // 0x20
};

struct FGFriendsMenuPanelDef {
	FGameplayTag PanelTag; // 0x0
	FText PanelTitle; // 0x10
	UGFriendsPanelWidget* PanelClass; // 0x28
	bool bPanelNeedsRemoteConfig; // 0x30
};

struct FClientLinkXboxAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool ForceLink; // 0x8
	FString XboxToken; // 0x10
};

struct FRigidBodyContactInfo {
	FVector ContactPosition; // 0x0
	FVector ContactNormal; // 0xc
	float ContactPenetration; // 0x18
	UPhysicalMaterial* PhysMaterial[0x2]; // 0x20
};

struct FCollectionParameterBase {
	FName ParameterName; // 0x0
	FGuid ID; // 0xc
};

struct FMatchmakerAuthUserResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	bool Authorized; // 0x8
	FString PlayFabId; // 0x10
};

struct FXRangedAttackAction_CustomState : FXActionCustomState {
	EXRangedAttackPayload Payload; // 0x8
	int32_t NumAttackPointsOverride; // 0xc
};

struct FSoundClassProperties {
	float Volume; // 0x0
	float Pitch; // 0x4
	float StereoBleed; // 0x8
	float LFEBleed; // 0xc
	float VoiceCenterChannelVolume; // 0x10
	float RadioFilterVolume; // 0x14
	float RadioFilterVolumeThreshold; // 0x18
	char bApplyEffects : 1; // 0x1c
	char bAlwaysPlay : 1; // 0x1c
	char bIsUISound : 1; // 0x1c
	char bIsMusic : 1; // 0x1c
	char bReverb : 1; // 0x1c
	float Default2DReverbSendAmount; // 0x20
	char bCenterChannelOnly : 1; // 0x24
	char bApplyAmbientVolumes : 1; // 0x24
	EAudioOutputTarget OutputTarget; // 0x28
};

struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int32_t LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float Alpha; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8c
	FBoneReference RightHandFK; // 0xd0
	FBoneReference LeftHandFK; // 0xe4
	FBoneReference RightHandIK; // 0xf8
	FBoneReference LeftHandIK; // 0x10c
	TArray<FBoneReference> IKBonesToMove; // 0x120
	float HandFKWeight; // 0x130
};

struct FClientPayForPurchaseRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Currency; // 0x8
	FString OrderId; // 0x18
	FString ProviderName; // 0x28
	FString ProviderTransactionId; // 0x38
};

struct FAkWwiseObjectDetails {
	FString ItemName; // 0x0
	FString ItemPath; // 0x10
	FString ItemId; // 0x20
};

struct FAkAudioSession {
	EAkAudioSessionCategory AudioSessionCategory; // 0x0
	uint32_t AudioSessionCategoryOptions; // 0x4
	EAkAudioSessionMode AudioSessionMode; // 0x8
};

struct FDialogueContext {
	UDialogueVoice* Speaker; // 0x0
	TArray<UDialogueVoice*> Targets; // 0x8
};

struct FGSphereEffectDefinition : FGSphereEffectDefinitionBase {
	EGEffectStateRequirement Requirement; // 0x0
	FXScaledEffectClass Effect; // 0x8
	bool bMaintainAfterOverlapEnds; // 0x20
	bool bConstantlyReapply; // 0x21
	bool bUseActorInstigator; // 0x22
};

struct FXElementalFXDef_Decal : FXElementalFXDef {
	bool bUseRadiusRange; // 0x0
	FVector2D ValidRadiusRange; // 0x4
	FXElementalVector Offset; // 0xc
	FXElementalRotator Rotation; // 0x38
	FXElementalVector Size; // 0x58
	bool bNormalizeSize; // 0x84
	FVector BaseSize; // 0x88
	TArray<FXElementalFXParam> StaticParameters; // 0x98
	FGameplayTagContainer RequiredTags; // 0xa8
	FGameplayTagContainer IgnoredTags; // 0xc8
	UMaterialInterface* Material; // 0xe8
	TArray<UMaterialInterface*> Materials; // 0xf0
	float LifeTime; // 0x100
	float FadeDuration; // 0x104
	TArray<FXMaterialCrossfade> Crossfades; // 0x108
	TWeakObjectPtr<UDecalComponent> Instance; // 0x118
};

struct FBox2D {
	FVector2D Min; // 0x0
	FVector2D Max; // 0x8
	char bIsValid; // 0x10
};

struct FClientConsumeItemRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CharacterId; // 0x8
	int32_t ConsumeCount; // 0x18
	FString ItemInstanceId; // 0x20
};

struct FLandscapeLayerStruct {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
};

struct FDataTableRowHandle {
	UDataTable* DataTable; // 0x0
	FName RowName; // 0x8
};

struct FClientUnlinkPSNAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FPreviewAssetAttachContainer {
	TArray<FPreviewAttachedObjectPair> AttachedObjects; // 0x0
};

struct FServerGrantItemsToUserRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Annotation; // 0x8
	FString CatalogVersion; // 0x18
	FString ItemIds; // 0x28
	FString PlayFabId; // 0x38
};

struct FAdminGetTaskInstanceRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString TaskInstanceId; // 0x8
};

struct FRigUnit_Subtract_FloatFloat : FRigUnit_BinaryFloatOp {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	float Argument0; // 0x28
	float Argument1; // 0x2c
	float Result; // 0x30
};

struct FClientUnlinkTwitchAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAnimSlotDesc {
	FName SlotName; // 0x0
	int32_t NumChannels; // 0xc
};

struct FGAccoladeDataTableRow : FTableRowBase {
	FText Title; // 0x8
	FText Description; // 0x20
	int32_t Tier; // 0x38
	UTexture2D* IconTexture; // 0x40
	FGAccoladeRewardDataJSON Rewards; // 0x48
	TArray<FGAccoladeTriggerJSON> Triggers; // 0xa0
	int32_t RequiredTally; // 0xb0
	FString NextAccoladeClass; // 0xb8
};

struct FAnimNode_StateMachine : FAnimNode_Base {
	int32_t StateMachineIndexInClass; // 0x10
	int32_t MaxTransitionsPerFrame; // 0x14
	bool bSkipFirstUpdateTransition; // 0x18
	bool bReinitializeOnBecomingRelevant; // 0x19
};

struct FServerRemoveGenericIDRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* GenericId; // 0x8
	FString PlayFabId; // 0x10
};

struct FAIDataProviderFloatValue : FAIDataProviderTypedValue {
	UProperty* CachedProperty; // 0x8
	UAIDataProvider* DataBinding; // 0x10
	FName DataField; // 0x18
	UProperty* PropertyType; // 0x28
	float DefaultValue; // 0x30
};

struct FSoundAttenuationPluginSettings {
	TArray<USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray; // 0x0
	TArray<UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray; // 0x10
	TArray<UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray; // 0x20
};

struct FServerRefreshGameServerInstanceHeartbeatResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FRedirector {
	FName OldName; // 0x0
	FName NewName; // 0xc
};

struct FNiagaraStatScope {
	FName FullName; // 0x0
	FName FriendlyName; // 0xc
};

struct FGPartyReadinessVisual {
	float FrameOpacity; // 0x0
	float CircleBGOpacity; // 0x4
	FSlateBrush IconBrush; // 0x8
	FLinearColor IconColor; // 0x98
};

struct FGOutlineType {
	bool Toon; // 0x0
	bool Targeted; // 0x1
	bool Wolfsblood; // 0x2
	bool ViewTarget; // 0x3
	bool Character; // 0x4
	bool KuwastrokaExclude; // 0x5
	bool SkySphere; // 0x6
	bool TeamOutline; // 0x7
};

struct FMovieSceneNiagaraSystemTrackTemplate : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
};

struct FMaterialTextureInfo {
	float SamplingScale; // 0x0
	int32_t UVChannelIndex; // 0x4
	FName TextureName; // 0x8
};

struct FClientGameServerRegionsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString BuildVersion; // 0x8
};

struct FMultiplayerUploadCertificateRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* GameCertificate; // 0x8
};

struct FGAppliedBoonEffect {
	FName EffectStackName; // 0x0
	int32_t AppliedAmount; // 0xc
	EXRarity Rarity; // 0x10
};

struct FHyperlinkStyle : FSlateWidgetStyle {
	FButtonStyle UnderlineStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x2b0
	FMargin Padding; // 0x540
};

struct FClientAddSharedGroupMembersRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabIds; // 0x8
	FString SharedGroupId; // 0x18
};

struct FClientUpdatePlayerStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	TArray<UPlayFabJsonObject*> Statistics; // 0x8
};

struct FAttributesForVertex {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexAttributes; // 0x8
};

struct FEyeTrackerStereoGazeData {
	FVector LeftEyeOrigin; // 0x0
	FVector LeftEyeDirection; // 0xc
	FVector RightEyeOrigin; // 0x18
	FVector RightEyeDirection; // 0x24
	FVector FixationPoint; // 0x30
	float ConfidenceValue; // 0x3c
};

struct FBoxSphereBounds {
	FVector Origin; // 0x0
	FVector BoxExtent; // 0xc
	float SphereRadius; // 0x18
};

struct FMovieSceneBindingOverrideData {
	FMovieSceneObjectBindingID ObjectBindingID; // 0x0
	TWeakObjectPtr<UObject> Object; // 0x18
	bool bOverridesDefault; // 0x20
};

struct FAkWwiseItemToControl {
	FAkWwiseObjectDetails ItemPicked; // 0x0
	FString ItemPath; // 0x30
};

struct FAIDataProviderValue {
	UProperty* CachedProperty; // 0x8
	UAIDataProvider* DataBinding; // 0x10
	FName DataField; // 0x18
};

struct FAdminUpdateCatalogItemsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	TArray<UPlayFabJsonObject*> Catalog; // 0x8
	FString CatalogVersion; // 0x18
	bool SetAsDefaultCatalog; // 0x28
};

struct FFontOutlineSettings {
	int32_t OutlineSize; // 0x0
	bool bSeparateFillAlpha; // 0x4
	bool bApplyOutlineToDropShadows; // 0x5
	UObject* OutlineMaterial; // 0x8
	FLinearColor OutlineColor; // 0x10
};

struct FClientUpdateAvatarUrlRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString ImageUrl; // 0x8
};

struct FClientAndroidDevicePushNotificationRegistrationResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientGrantCharacterToUserRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
	FString CharacterName; // 0x18
	FString ItemId; // 0x28
};

struct FMediaPlayerOptions {
	FMediaPlayerTrackOptions Tracks; // 0x0
	FTimespan SeekTime; // 0x20
	EMediaPlayerOptionBooleanOverride PlayOnOpen; // 0x28
	EMediaPlayerOptionBooleanOverride Loop; // 0x29
};

struct FProceduralLayerData {
	TMap<UTexture2D*, UTexture2D*> Heightmaps; // 0x0
};

struct FServerUnlockContainerItemRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ContainerItemId; // 0x28
	FString PlayFabId; // 0x38
};

struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneObjectPathChannel ObjectChannel; // 0x58
};

struct FMaterialAttributesInput : FExpressionInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
	int32_t PropertyConnectedBitmask; // 0x10
};

struct FMovieSceneByteChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	char DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<char> Values; // 0x20
	UEnum* Enum; // 0x30
};

struct FAdminExportMasterPlayerDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString JobReceiptId; // 0x8
};

struct FSlateColor {
	FLinearColor SpecifiedColor; // 0x0
	ESlateColorStylingMode ColorUseRule; // 0x10
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

struct FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
	FString QueueName; // 0x10
};

struct FSoundAttenuationSettings : FBaseAttenuationSettings {
	EAttenuationDistanceModel DistanceAlgorithm; // 0x8
	EAttenuationShape AttenuationShape; // 0x9
	float dBAttenuationAtMax; // 0xc
	FVector AttenuationShapeExtents; // 0x10
	float ConeOffset; // 0x1c
	float FalloffDistance; // 0x20
	FRuntimeFloatCurve CustomAttenuationCurve; // 0x28
	char bAttenuate : 1; // 0xb0
	char bSpatialize : 1; // 0xb0
	char bAttenuateWithLPF : 1; // 0xb0
	char bEnableListenerFocus : 1; // 0xb0
	char bEnableFocusInterpolation : 1; // 0xb0
	char bEnableOcclusion : 1; // 0xb0
	char bEnableReverbSend : 1; // 0xb0
	char bUseComplexCollisionForOcclusion : 1; // 0xb0
	char bApplyNormalizationToStereoSounds : 1; // 0xb1
	char bEnableLogFrequencyScaling : 1; // 0xb1
	ESoundSpatializationAlgorithm SpatializationAlgorithm; // 0xb2
	EAirAbsorptionMethod AbsorptionMethod; // 0xb3
	ECollisionChannel OcclusionTraceChannel; // 0xb4
	EReverbSendMethod ReverbSendMethod; // 0xb5
	float OmniRadius; // 0xb8
	float StereoSpread; // 0xbc
	float LPFRadiusMin; // 0xc0
	float LPFRadiusMax; // 0xc4
	FRuntimeFloatCurve CustomLowpassAirAbsorptionCurve; // 0xc8
	FRuntimeFloatCurve CustomHighpassAirAbsorptionCurve; // 0x150
	float LPFFrequencyAtMin; // 0x1d8
	float LPFFrequencyAtMax; // 0x1dc
	float HPFFrequencyAtMin; // 0x1e0
	float HPFFrequencyAtMax; // 0x1e4
	float FocusAzimuth; // 0x1e8
	float NonFocusAzimuth; // 0x1ec
	float FocusDistanceScale; // 0x1f0
	float NonFocusDistanceScale; // 0x1f4
	float FocusPriorityScale; // 0x1f8
	float NonFocusPriorityScale; // 0x1fc
	float FocusVolumeAttenuation; // 0x200
	float NonFocusVolumeAttenuation; // 0x204
	float FocusAttackInterpSpeed; // 0x208
	float FocusReleaseInterpSpeed; // 0x20c
	float OcclusionLowPassFilterFrequency; // 0x210
	float OcclusionVolumeAttenuation; // 0x214
	float OcclusionInterpolationTime; // 0x218
	float ReverbWetLevelMin; // 0x21c
	float ReverbWetLevelMax; // 0x220
	float ReverbDistanceMin; // 0x224
	float ReverbDistanceMax; // 0x228
	float ManualReverbSendLevel; // 0x22c
	FRuntimeFloatCurve CustomReverbSendCurve; // 0x230
	FSoundAttenuationPluginSettings PluginSettings; // 0x2b8
};

struct FLayerActorStats {
	UObject* Type; // 0x0
	int32_t Total; // 0x8
};

struct FMaterialEditorPromotionSettings {
	FFilePath DefaultMaterialAsset; // 0x0
	FFilePath DefaultDiffuseTexture; // 0x10
	FFilePath DefaultNormalTexture; // 0x20
};

struct FMovieSceneParticleParameterSectionTemplate : FMovieSceneParameterSectionTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	TArray<FScalarParameterNameAndCurve> Scalars; // 0x20
	TArray<FVectorParameterNameAndCurves> Vectors; // 0x30
	TArray<FColorParameterNameAndCurves> Colors; // 0x40
};

struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	TArray<FScalarParameterNameAndCurve> Scalars; // 0x20
	TArray<FVectorParameterNameAndCurves> Vectors; // 0x30
	TArray<FColorParameterNameAndCurves> Colors; // 0x40
	int32_t MaterialIndex; // 0x50
};

struct FAdminDeletePlayerRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabId; // 0x8
};

struct FAdminGetPolicyResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString PolicyName; // 0x8
	TArray<UPlayFabJsonObject*> Statements; // 0x18
};

struct FGroupsAddMembersRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Group; // 0x8
	TArray<UPlayFabJsonObject*> Members; // 0x10
	FString RoleId; // 0x20
};

struct FAdminRefundPurchaseRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString OrderId; // 0x8
	FString PlayFabId; // 0x18
	FString Reason; // 0x28
};

struct FTriangleID : FElementID {
	int32_t IDValue; // 0x0
};

struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow {
	FName Tag; // 0x8
	FString DevComment; // 0x18
	bool bAllowNonRestrictedChildren; // 0x28
};

struct FMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams {
	UGeometryCache* GeometryCacheAsset; // 0x0
	FFrameNumber StartFrameOffset; // 0x8
	FFrameNumber EndFrameOffset; // 0xc
	float PlayRate; // 0x10
	char bReverse : 1; // 0x14
	float StartOffset; // 0x18
	float EndOffset; // 0x1c
	FSoftObjectPath GeometryCache; // 0x20
	FFrameNumber SectionStartTime; // 0x40
	FFrameNumber SectionEndTime; // 0x44
};

struct FClientGetTitlePublicKeyRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString TitleSharedSecret; // 0x8
};

struct FAdminResetUserStatisticsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMultiplayerGetAssetUploadUrlRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Filename; // 0x8
};

struct FGAchievementTriggerJSON {
	FName ListenTable; // 0x0
	FString Query; // 0x10
	TMap<FName, FString> Properties; // 0x20
};

struct FMeshProxySettings {
	int32_t ScreenSize; // 0x0
	float VoxelSize; // 0x4
	FMaterialProxySettings MaterialSettings; // 0x8
	bool bReusePreviousLOD; // 0x78
	float MergeDistance; // 0x7c
	FColor UnresolvedGeometryColor; // 0x80
	float MaxRayCastDist; // 0x84
	float HardAngleThreshold; // 0x88
	int32_t LightMapResolution; // 0x8c
	EProxyNormalComputationMethod NormalCalculationMethod; // 0x90
	ELandscapeCullingPrecision LandscapeCullingPrecision; // 0x91
	char bCalculateCorrectLODModel : 1; // 0x92
	char bOverrideVoxelSize : 1; // 0x92
	char bOverrideTransferDistance : 1; // 0x92
	char bUseHardAngleThreshold : 1; // 0x92
	char bComputeLightMapResolution : 1; // 0x92
	char bRecalculateNormals : 1; // 0x92
	char bUseLandscapeCulling : 1; // 0x92
	char bAllowAdjacency : 1; // 0x92
	char bAllowDistanceField : 1; // 0x93
	char bReuseMeshLightmapUVs : 1; // 0x93
	char bCreateCollision : 1; // 0x93
	char bAllowVertexColors : 1; // 0x93
	char bGenerateLightmapUVs : 1; // 0x93
};

struct FRepAttachment {
	AActor* AttachParent; // 0x0
	FVector_NetQuantize100 LocationOffset; // 0x8
	FVector_NetQuantize100 RelativeScale3D; // 0x14
	FRotator RotationOffset; // 0x20
	FName AttachSocket; // 0x2c
	USceneComponent* AttachComponent; // 0x38
};

struct FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
};

struct FPrimaryAssetRulesCustomOverride {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FDirectoryPath FilterDirectory; // 0x10
	FString FilterString; // 0x20
	FPrimaryAssetRules Rules; // 0x30
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
	int32_t BaseLOD; // 0x38
};

struct FClientUpdateSharedGroupDataRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Data; // 0x8
	FString KeysToRemove; // 0x10
	EUserDataPermission Permission; // 0x20
	FString SharedGroupId; // 0x28
};

struct FDestructibleDebrisParameters {
	float DebrisLifetimeMin; // 0x0
	float DebrisLifetimeMax; // 0x4
	float DebrisMaxSeparationMin; // 0x8
	float DebrisMaxSeparationMax; // 0xc
	FBox ValidBounds; // 0x10
};

struct FServerSetGameServerInstanceStateRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString LobbyId; // 0x8
	EGameInstanceState State; // 0x18
};

struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FNiagaraVariable Parameter; // 0x20
	FMovieSceneFloatChannel VectorChannels[0x4]; // 0x58
	int32_t ChannelsUsed; // 0x2d8
};

struct FSHAHashData {
	char Hash[0x14]; // 0x0
};

struct FClientWriteClientCharacterEventRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Body; // 0x8
	FString CharacterId; // 0x10
	FString EventName; // 0x20
	FString Timestamp; // 0x30
};

struct FBehaviorTreeTemplateInfo {
	UBehaviorTree* Asset; // 0x0
	UBTCompositeNode* Template; // 0x8
};

struct FClothCollisionPrim_Sphere {
	int32_t BoneIndex; // 0x0
	float Radius; // 0x4
	FVector LocalPosition; // 0x8
};

struct FTransformConstraintDescription : FConstraintDescriptionEx {
	FFilterOptionPerAxis AxesFilterOption; // 0x8
	ETransformConstraintType TransformType; // 0x10
};

struct FMovieSceneEvaluationOperand {
	FGuid ObjectBindingID; // 0x0
	FMovieSceneSequenceID SequenceID; // 0x10
};

struct FNameMapping {
	FName NodeName; // 0x0
	FName BoneName; // 0xc
};

struct FAdminCreateTaskResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString TaskId; // 0x8
};

struct FClientAcceptTradeResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Trade; // 0x8
};

struct FProcMeshSection {
	TArray<FProcMeshVertex> ProcVertexBuffer; // 0x0
	TArray<uint32_t> ProcIndexBuffer; // 0x10
	FBox SectionLocalBox; // 0x20
	bool bEnableCollision; // 0x3c
	bool bSectionVisible; // 0x3d
};

struct FJumpLinkData {
	AXBotController* Controller; // 0x0
	UXCharacterMovement* Movement; // 0x8
	EXJumpLinkLeg Leg; // 0x10
	FVector Destination; // 0x14
	float ZOffsetFromDestination; // 0x20
	FVector2D DirectionFromDestinationXY; // 0x24
	FVector2D SideXY; // 0x2c
	FAIRequestID RequestID; // 0x34
};

struct FInterpCurveTwoVectors {
	TArray<FInterpCurvePointTwoVectors> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FServerGetCharacterStatisticsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CharacterStatistics; // 0x18
	FString PlayFabId; // 0x20
};

struct FClientGetTradeStatusResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Trade; // 0x8
};

struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct {
	FLinearColor Color; // 0x8
	FFrameNumber Time; // 0x18
};

struct FLatentActionInfo {
	int32_t Linkage; // 0x0
	int32_t UUID; // 0x4
	FName ExecutionFunction; // 0x8
	UObject* CallbackTarget; // 0x18
};

struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int32_t LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float Alpha; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8c
	FBoneReference TargetBone; // 0xd0
	FBoneReference SourceBone; // 0xe4
	float Multiplier; // 0xf8
	EBoneAxis RotationAxisToRefer; // 0xfc
	bool bIsAdditive; // 0xfd
};

struct FBlendTarget {
	FTransform Transform; // 0x0
	float Weight; // 0x30
};

struct FClientGetPlayFabIDsFromGoogleIDsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString GoogleIDs; // 0x8
};

struct FLevelSequenceSnapshotSettings {
	char ZeroPadAmount; // 0x0
	FFrameRate FrameRate; // 0x4
};

struct FXElementalFXDef {
	bool bUseRadiusRange; // 0x0
	FVector2D ValidRadiusRange; // 0x4
	FXElementalVector Offset; // 0xc
	FXElementalRotator Rotation; // 0x38
	FXElementalVector Size; // 0x58
	bool bNormalizeSize; // 0x84
	FVector BaseSize; // 0x88
	TArray<FXElementalFXParam> StaticParameters; // 0x98
	FGameplayTagContainer RequiredTags; // 0xa8
	FGameplayTagContainer IgnoredTags; // 0xc8
};

struct FRawDistributionVector : FRawDistribution {
	FDistributionLookupTable Table; // 0x0
	float MinValue; // 0x28
	float MaxValue; // 0x2c
	FVector MinValueVec; // 0x30
	FVector MaxValueVec; // 0x3c
	UDistributionVector* Distribution; // 0x48
};

struct FDatasmithCameraLookatTrackingSettingsTemplate {
	char bEnableLookAtTracking : 1; // 0x0
	AActor* ActorToTrack; // 0x8
};

struct FClientReceiveData {
	APlayerController* LocalPC; // 0x0
	FName MessageType; // 0x8
	int32_t MessageIndex; // 0x14
	FString MessageString; // 0x18
	APlayerState* RelatedPlayerState_2; // 0x28
	APlayerState* RelatedPlayerState_3; // 0x30
	UObject* OptionalObject; // 0x38
};

struct FAdminGetUserInventoryResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Inventory; // 0x8
	FString PlayFabId; // 0x18
	UPlayFabJsonObject* VirtualCurrency; // 0x28
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x30
};

struct FClientUpdateSharedGroupDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FRigUnit_InverseQuaterion : FRigUnit_UnaryQuaternionOp {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FQuat Argument; // 0x30
	FQuat Result; // 0x40
};

struct FSlateBrush {
	FVector2D ImageSize; // 0x8
	FMargin Margin; // 0x10
	FSlateColor TintColor; // 0x20
	UObject* ResourceObject; // 0x48
	FName ResourceName; // 0x50
	FBox2D UVRegion; // 0x5c
	ESlateBrushDrawType DrawAs; // 0x70
	ESlateBrushTileType Tiling; // 0x71
	ESlateBrushMirrorType Mirroring; // 0x72
	ESlateBrushImageType ImageType; // 0x73
	char bIsDynamicallyLoaded : 1; // 0x88
	char bHasUObject : 1; // 0x88
};

struct FPrimaryAssetTypeInfo {
	FName PrimaryAssetType; // 0x0
	UClass* AssetBaseClass; // 0x10
	UObject* AssetBaseClassLoaded; // 0x40
	bool bHasBlueprintClasses; // 0x48
	bool bIsEditorOnly; // 0x49
	TArray<FDirectoryPath> Directories; // 0x50
	TArray<FSoftObjectPath> SpecificAssets; // 0x60
	FPrimaryAssetRules Rules; // 0x70
	TArray<FString> AssetScanPaths; // 0x80
	bool bIsDynamicAsset; // 0x90
	int32_t NumberOfAssets; // 0x94
};

struct FROscillator {
	FFOscillator Pitch; // 0x0
	FFOscillator Yaw; // 0xc
	FFOscillator Roll; // 0x18
};

struct FClientLinkTwitchAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString AccessToken; // 0x8
	bool ForceLink; // 0x18
};

struct FMovieSceneTrackIdentifier {
	uint32_t Value; // 0x0
};

struct FHierarchicalSimplification {
	float TransitionScreenSize; // 0x0
	float OverrideDrawDistance; // 0x4
	char bUseOverrideDrawDistance : 1; // 0x8
	char bAllowSpecificExclusion : 1; // 0x8
	char bSimplifyMesh : 1; // 0x8
	char bGenerateSingleCluster : 1; // 0x8
	char bOnlyGenerateClustersForVolumes : 1; // 0x8
	char bReusePreviousLevelClusters : 1; // 0x8
	FMeshProxySettings ProxySetting; // 0xc
	FMeshMergingSettings MergeSetting; // 0xa0
	float DesiredBoundRadius; // 0x12c
	float DesiredFillingPercentage; // 0x130
	int32_t MinNumberOfActorsToBuild; // 0x134
};

struct FTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UTexture* ParameterValue; // 0x18
	FGuid ExpressionGUID; // 0x20
};

struct FAdminGrantItemsToUsersResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> ItemGrantResults; // 0x8
};

struct FClientUpdateUserDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	int32_t DataVersion; // 0x8
};

struct FEdGraphPinReference {
	TWeakObjectPtr<UEdGraphNode> OwningNode; // 0x0
	FGuid PinId; // 0x8
};

struct FMultiplayerGetMatchmakingTicketRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool EscapeObject; // 0x8
	FString QueueName; // 0x10
	FString TicketId; // 0x20
};

struct FNiagaraEmitterSpawnAttributes {
	TArray<FName> SpawnAttributes; // 0x0
};

struct FGChapterRewardLevel {
	int32_t Level; // 0x0
	TArray<FGChapterReward> Rewards; // 0x8
};

struct FAkWaapiUri {
	FString Uri; // 0x0
};

struct FPrimaryAssetType {
	FName Name; // 0x0
};

struct FChildActorAttachedActorInfo {
	TWeakObjectPtr<AActor> Actor; // 0x0
	FName SocketName; // 0x8
	FTransform RelativeTransform; // 0x20
};

struct FMovieSceneIntegerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneIntegerChannel IntegerCurve; // 0x58
	EMovieSceneBlendType BlendType; // 0xe8
};

struct FClientAddOrUpdateContactEmailRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString EmailAddress; // 0x8
};

struct FXAimableFireModeState {
	bool bAiming; // 0x0
};

struct FAdminUpdatePolicyRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool OverwritePolicy; // 0x8
	FString PolicyName; // 0x10
	TArray<UPlayFabJsonObject*> Statements; // 0x20
};

struct FLocalizationGetLanguageListRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FRootMotionSource_RadialForce : FRootMotionSource {
	uint16_t Priority; // 0x10
	uint16_t LocalID; // 0x12
	ERootMotionAccumulateMode AccumulateMode; // 0x14
	FName InstanceName; // 0x18
	float StartTime; // 0x24
	float CurrentTime; // 0x28
	float PreviousTime; // 0x2c
	float Duration; // 0x30
	FRootMotionSourceStatus Status; // 0x34
	FRootMotionSourceSettings Settings; // 0x35
	bool bInLocalSpace; // 0x36
	FRootMotionMovementParams RootMotionParams; // 0x40
	FRootMotionFinishVelocitySettings FinishVelocityParams; // 0x80
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

struct FServerGrantItemsToUserResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> ItemGrantResults; // 0x8
};

struct FGOverlappedTarget {
	AActor* Target; // 0x0
	FVector TargetPoint; // 0x8
	UParticleSystemComponent* Beam; // 0x18
	bool bFromServer; // 0x20
};

struct FTableColumnHeaderStyle : FSlateWidgetStyle {
	FSlateBrush SortPrimaryAscendingImage; // 0x8
	FSlateBrush SortPrimaryDescendingImage; // 0x98
	FSlateBrush SortSecondaryAscendingImage; // 0x128
	FSlateBrush SortSecondaryDescendingImage; // 0x1b8
	FSlateBrush NormalBrush; // 0x248
	FSlateBrush HoveredBrush; // 0x2d8
	FSlateBrush MenuDropdownImage; // 0x368
	FSlateBrush MenuDropdownNormalBorderBrush; // 0x3f8
	FSlateBrush MenuDropdownHoveredBorderBrush; // 0x488
};

struct FClientGetPlayerCombinedInfoRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* InfoRequestParameters; // 0x8
	FString PlayFabId; // 0x10
};

struct FBoneReference {
	FName BoneName; // 0x0
};

struct FAdminGetServerBuildInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString ActiveRegions; // 0x8
	FString BuildId; // 0x18
	FString Comment; // 0x28
	FString ErrorMessage; // 0x38
	int32_t MaxGamesPerHost; // 0x48
	int32_t MinFreeGameSlots; // 0x4c
	EGameBuildStatus Status; // 0x50
	FString Timestamp; // 0x58
	FString TitleId; // 0x68
};

struct FMultiplayerGetServerBackfillTicketRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool EscapeObject; // 0x8
	FString QueueName; // 0x10
	FString TicketId; // 0x20
};

struct FMultiplayerUntagContainerImageRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString ImageName; // 0x8
	FString Tag; // 0x18
};

struct FSlateSound {
	UObject* ResourceObject; // 0x0
};

struct FInputBlendPose {
	TArray<FBranchFilter> BranchFilters; // 0x0
};

struct FLiveLinkRefSkeleton {
	TArray<FName> BoneNames; // 0x0
	TArray<int32_t> BoneParents; // 0x10
};

struct FLiveLinkPingMessage {
	FGuid PollRequest; // 0x0
};

struct FGroupsListGroupMembersRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Group; // 0x8
};

struct FServerRemoveSharedGroupMembersResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAkPS4AdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t IO_MemorySize; // 0x0
	float TargetAutoStreamBufferLength; // 0x4
	bool UseStreamCache; // 0x8
	uint32_t MaximumPinnedBytesInCache; // 0xc
	int32_t PrepareEventMemoryPoolID; // 0x10
	bool EnableGameSyncPreparation; // 0x14
	uint32_t ContinuousPlaybackLookAhead; // 0x18
	uint32_t MonitorPoolSize; // 0x1c
	uint32_t MonitorQueuePoolSize; // 0x20
	uint32_t MaximumHardwareTimeoutMs; // 0x24
	FAkAdvancedSpatialAudioSettings SpatialAudioSettings; // 0x28
	bool EnableMultiCoreRendering; // 0x30
	uint32_t ACPBatchBufferSize; // 0x34
	bool UseHardwareCodecLowLatencyMode; // 0x38
};

struct FGRecentIndicatedDamage {
	FVector HitSourceLocation; // 0x0
	float Timestamp; // 0xc
	float StartTimestamp; // 0x10
	float DamageTotal; // 0x14
	bool bIsHealthDamage; // 0x18
};

struct FSlateFontInfo {
	UObject* FontObject; // 0x0
	UObject* FontMaterial; // 0x8
	FFontOutlineSettings OutlineSettings; // 0x10
	FName TypefaceFontName; // 0x40
	int32_t Size; // 0x4c
};

struct FMovieScenePossessable {
	TArray<FName> Tags; // 0x0
	FGuid Guid; // 0x10
	FString Name; // 0x20
	UObject* PossessedObjectClass; // 0x30
	FGuid ParentGuid; // 0x38
};

struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieSceneCameraShakeSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FServerDeletePushNotificationTemplateResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAITouchEvent {
	AActor* TouchReceiver; // 0x10
	AActor* OtherActor; // 0x18
};

struct FLevelStreamingWrapper {
	ULevelStreaming* StreamingLevel; // 0x0
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

struct FInterpCurveLinearColor {
	TArray<FInterpCurvePointLinearColor> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FRigConfiguration {
	URig* Rig; // 0x0
	TArray<FNameMapping> BoneMappingTable; // 0x8
};

struct FXGameplayTagRequirements {
	FGameplayTagContainer RequireTags; // 0x0
	FGameplayTagContainer IgnoreTags; // 0x20
};

struct FKSphylElem : FKShapeElem {
	float RestOffset; // 0x8
	FName Name; // 0xc
	char bContributeToMass : 1; // 0x1c
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius; // 0x48
	float Length; // 0x4c
};

struct FStreamingTexturePrimitiveInfo {
	UTexture2D* Texture; // 0x0
	FBoxSphereBounds Bounds; // 0x8
	float TexelFactor; // 0x24
	uint32_t PackedRelativeBox; // 0x28
};

struct FServerGetTitleNewsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> News; // 0x8
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

struct FGAccoladeTriggerJSON {
	FName ListenTable; // 0x0
	FString Query; // 0x10
	TMap<FName, FString> Properties; // 0x20
};

struct FLiveLinkFrameData {
	TArray<FTransform> Transforms; // 0x0
	TArray<FLiveLinkCurveElement> CurveElements; // 0x10
	FLiveLinkWorldTime WorldTime; // 0x20
	FLiveLinkMetaData MetaData; // 0x30
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

struct FLiveLinkInterpolationSettings {
	float InterpolationOffset; // 0x0
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

struct FCameraTrackingFocusSettings {
	AActor* ActorToTrack; // 0x0
	FVector RelativeOffset; // 0x30
	char bDrawDebugTrackingFocusPoint : 1; // 0x3c
};

struct FMultiplayerCreateServerMatchmakingTicketRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t GiveUpAfterSeconds; // 0x8
	TArray<UPlayFabJsonObject*> Members; // 0x10
	FString QueueName; // 0x20
};

struct FClientGetPlayFabIDsFromTwitchIDsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString TwitchIds; // 0x8
};

struct FServerDeleteCharacterFromUserResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAnimCurveParam {
	FName Name; // 0x0
};

struct FSoundClassAdjuster {
	USoundClass* SoundClassObject; // 0x0
	float VolumeAdjuster; // 0x8
	float PitchAdjuster; // 0xc
	char bApplyToChildren : 1; // 0x10
	float VoiceCenterChannelVolumeAdjuster; // 0x14
};

struct FServerGetUserDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Data; // 0x8
	int32_t DataVersion; // 0x10
	FString PlayFabId; // 0x18
};

struct FXIKFootLocation {
	FVector LimbRootLocation; // 0x0
	FVector OriginLocation; // 0xc
	FVector ActualLocation; // 0x18
	FVector NewLocation; // 0x24
};

struct FClientGetPlayerStatisticsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Statistics; // 0x8
};

struct FCollisionResponse {
	FCollisionResponseContainer ResponseToChannels; // 0x0
	TArray<FResponseChannel> ResponseArray; // 0x20
};

struct FDestructibleChunkParameters {
	bool bIsSupportChunk; // 0x0
	bool bDoNotFracture; // 0x1
	bool bDoNotDamage; // 0x2
	bool bDoNotCrumble; // 0x3
};

struct FCapturedPixelsID {
	TMap<FName, FName> Identifiers; // 0x0
};

struct FGPlatformDataTableRow : FTableRowBase {
	UTexture2D* IconSmall; // 0x8
	UTexture2D* IconLarge; // 0x10
};

struct FXConeDamageParams : FRadialDamageParams {
	float BaseDamage; // 0x0
	float MinimumDamage; // 0x4
	float InnerRadius; // 0x8
	float OuterRadius; // 0xc
	float DamageFalloff; // 0x10
	float ArcAngleDegrees; // 0x14
	FVector ForwardVector; // 0x18
};

struct FAdminIncrementLimitedEditionItemAvailabilityResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMultiplayerListBuildSummariesResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> BuildSummaries; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FAkBoolPropertyToControl {
	FString ItemProperty; // 0x0
};

struct FDirectorTrackCut {
	float Time; // 0x0
	float TransitionTime; // 0x4
	FName TargetCamGroup; // 0x8
	int32_t ShotNumber; // 0x14
};

struct FXPelvisAdjustmentInterp {
	float Stiffness; // 0x0
	float Damping; // 0x4
};

struct FClientValidateIOSReceiptRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
	FString CurrencyCode; // 0x18
	int32_t PurchasePrice; // 0x28
	FString ReceiptData; // 0x30
};

struct FCachedAnimStateArray {
	TArray<FCachedAnimStateData> States; // 0x0
};

struct FEditableTextStyle : FSlateWidgetStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x60
	FSlateBrush BackgroundImageSelected; // 0x88
	FSlateBrush BackgroundImageComposing; // 0x118
	FSlateBrush CaretImage; // 0x1a8
};

struct FAnimNotifyEvent : FAnimLinkableElement {
	UAnimMontage* LinkedMontage; // 0x8
	int32_t SlotIndex; // 0x10
	int32_t SegmentIndex; // 0x14
	EAnimLinkMethod LinkMethod; // 0x18
	EAnimLinkMethod CachedLinkMethod; // 0x19
	float SegmentBeginTime; // 0x1c
	float SegmentLength; // 0x20
	float LinkValue; // 0x24
	UAnimSequenceBase* LinkedSequence; // 0x28
	float DisplayTime; // 0x30
	float TriggerTimeOffset; // 0x34
	float EndTriggerTimeOffset; // 0x38
	float TriggerWeightThreshold; // 0x3c
	FName NotifyName; // 0x40
	UAnimNotify* Notify; // 0x50
	UAnimNotifyState* NotifyStateClass; // 0x58
	float Duration; // 0x60
	FAnimLinkableElement EndLink; // 0x68
	bool bConvertedFromBranchingPoint; // 0x98
	EMontageNotifyTickType MontageTickType; // 0x99
	float NotifyTriggerChance; // 0x9c
	ENotifyFilterType NotifyFilterType; // 0xa0
	int32_t NotifyFilterLOD; // 0xa4
	bool bTriggerOnDedicatedServer; // 0xa8
	bool bTriggerOnFollower; // 0xa9
	int32_t TrackIndex; // 0xac
};

struct FMultiplayerGetMultiplayerServerDetailsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> ConnectedPlayers; // 0x8
	FString FQDN; // 0x18
	FString IPV4Address; // 0x28
	FString LastStateTransitionTime; // 0x38
	TArray<UPlayFabJsonObject*> Ports; // 0x48
	FString Region; // 0x58
	FString ServerId; // 0x68
	FString SessionId; // 0x78
	FString State; // 0x88
	FString VmId; // 0x98
};

struct FServerUpdateBansRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	TArray<UPlayFabJsonObject*> Bans; // 0x8
};

struct FBoneRef {
	FBoneReference Bone; // 0x0
};

struct FCompositeFallbackFont {
	FTypeface Typeface; // 0x0
	float ScalingFactor; // 0x10
};

struct FNetDriverDefinition {
	FName DefName; // 0x0
	FName DriverClassName; // 0xc
	FName DriverClassNameFallback; // 0x18
};

struct FClientUpdateUserTitleDisplayNameRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString DisplayName; // 0x8
};

struct FFaceDetectionResult {
	TArray<FDetectedFace> DetectedFaces; // 0x0
};

struct FServerGetCharacterDataRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CharacterId; // 0x8
	int32_t IfChangedFromDataVersion; // 0x18
	FString KeyS; // 0x20
	FString PlayFabId; // 0x30
};

struct FParticleCurvePair {
	FString CurveName; // 0x0
	UObject* CurveObject; // 0x10
};

struct FServerNotifyMatchmakerPlayerLeftResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	EPlayerConnectionState PlayerState; // 0x8
};

struct FRigUnit_Control_StaticMesh : FRigUnit_Control {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FEulerTransform Transform; // 0x28
	FTransform Base; // 0x50
	FTransform InitTransform; // 0x80
	FTransform Result; // 0xb0
	FTransformFilter Filter; // 0xe0
};

struct FGQuestDatumList {
	TArray<FGQuestDatum> Quests; // 0x0
	int32_t TrackedQuestCount; // 0x10
};

struct FAudioComponentParam {
	FName ParamName; // 0x0
	float FloatParam; // 0xc
	bool BoolParam; // 0x10
	int32_t IntParam; // 0x14
	USoundWave* SoundWaveParam; // 0x18
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

struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int32_t LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float Alpha; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8c
	FBoneReference BoneToObserve; // 0xd0
	EBoneControlSpace DisplaySpace; // 0xe4
	bool bRelativeToRefPose; // 0xe5
	FVector Translation; // 0xe8
	FRotator Rotation; // 0xf4
	FVector Scale; // 0x100
};

struct FJoinabilitySettings {
	FName SessionName; // 0x0
	bool bPublicSearchable; // 0xc
	bool bAllowInvites; // 0xd
	bool bJoinViaPresence; // 0xe
	bool bJoinViaPresenceFriendsOnly; // 0xf
	int32_t MaxPlayers; // 0x10
	int32_t MaxPartySize; // 0x14
};

struct FGroupsRemoveGroupApplicationRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FServerGetUserBansRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabId; // 0x8
};

struct FMovieSceneTangentDataSerializationHelper {
	float ArriveTangent; // 0x0
	float LeaveTangent; // 0x4
	ERichCurveTangentWeightMode TangentWeightMode; // 0x8
	float ArriveTangentWeight; // 0xc
	float LeaveTangentWeight; // 0x10
};

struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int32_t LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float Alpha; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8c
	FBoneReference SpringBone; // 0xd0
	float MaxDisplacement; // 0xe4
	float SpringStiffness; // 0xe8
	float SpringDamping; // 0xec
	float ErrorResetThresh; // 0xf0
	char bLimitDisplacement : 1; // 0x130
	char bTranslateX : 1; // 0x130
	char bTranslateY : 1; // 0x130
	char bTranslateZ : 1; // 0x130
	char bRotateX : 1; // 0x130
	char bRotateY : 1; // 0x130
	char bRotateZ : 1; // 0x130
};

struct FClientLinkWindowsHelloAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString DeviceName; // 0x8
	bool ForceLink; // 0x18
	FString PublicKey; // 0x20
	FString Username; // 0x30
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

struct FClientSubtractUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t Amount; // 0x8
	FString VirtualCurrency; // 0x10
};

struct FRigHierarchyRef {
	bool bUseBaseHierarchy; // 0x8
	FName Name; // 0xc
};

struct FXCosmeticSetTableRow : FTableRowBase {
	FPrimaryAssetId OutfitId; // 0x8
	FPrimaryAssetId ArtifactId; // 0x20
	FPrimaryAssetId AfterglowId; // 0x38
	FPrimaryAssetId CloudburstId; // 0x50
	FPrimaryAssetId TriumphId; // 0x68
	FPrimaryAssetId CardId; // 0x80
	FPrimaryAssetId BadgeId; // 0x98
	FPrimaryAssetId TitleId; // 0xb0
};

struct FInstancedStaticMeshLightMapInstanceData {
	FTransform Transform; // 0x0
	TArray<FGuid> MapBuildDataIds; // 0x30
};

struct FRawDistributionFloat : FRawDistribution {
	FDistributionLookupTable Table; // 0x0
	float MinValue; // 0x28
	float MaxValue; // 0x2c
	UDistributionFloat* Distribution; // 0x30
};

struct FAdminGetTaskInstancesResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Summaries; // 0x8
};

struct FGBoonItemDefinition {
	AActor* Item; // 0x0
	int32_t Amount; // 0x8
	FText DisplayName; // 0x10
	FText Description; // 0x28
};

struct FMovementProperties {
	char bCanCrouch : 1; // 0x0
	char bCanJump : 1; // 0x0
	char bCanWalk : 1; // 0x0
	char bCanSwim : 1; // 0x0
	char bCanFly : 1; // 0x0
};

struct FMovieSceneOrderedEvaluationKey {
	FMovieSceneEvaluationKey Key; // 0x0
	uint32_t EvaluationIndex; // 0xc
};

struct FClientGetPublisherDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Data; // 0x8
};

struct FAnimGroupInfo {
	FName Name; // 0x0
	FLinearColor Color; // 0xc
};

struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int32_t LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float Alpha; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8c
	TArray<FAngularRangeLimit> AngularRangeLimits; // 0xd0
	TArray<FVector> AngularOffsets; // 0xe0
};

struct FMultiplayerCreateBuildAliasRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString AliasName; // 0x8
	TArray<UPlayFabJsonObject*> BuildSelectionCriteria; // 0x18
};

struct FDataDeleteFilesRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
	FString FileNames; // 0x10
	int32_t ProfileVersion; // 0x20
};

struct FEdGraphSchemaAction_NewNode : FEdGraphSchemaAction {
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
	UEdGraphNode* NodeTemplate; // 0x100
};

struct FAdminModifyServerBuildResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString ActiveRegions; // 0x8
	FString BuildId; // 0x18
	FString CommandLineTemplate; // 0x28
	FString Comment; // 0x38
	FString ExecutablePath; // 0x48
	int32_t MaxGamesPerHost; // 0x58
	int32_t MinFreeGameSlots; // 0x5c
	EGameBuildStatus Status; // 0x60
	FString Timestamp; // 0x68
	FString TitleId; // 0x78
};

struct FVertexToCreate {
	FMeshElementAttributeList VertexAttributes; // 0x0
	FVertexID OriginalVertexID; // 0x10
};

struct FAnimNode_Trail : FAnimNode_SkeletalControlBase {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int32_t LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float Alpha; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8c
	FBoneReference TrailBone; // 0x100
	int32_t ChainLength; // 0x114
	EAxis ChainBoneAxis; // 0x118
	char bInvertChainBoneAxis : 1; // 0x119
	char bLimitStretch : 1; // 0x119
	char bLimitRotation : 1; // 0x119
	char bUsePlanarLimit : 1; // 0x119
	char bActorSpaceFakeVel : 1; // 0x119
	char bReorientParentToChild : 1; // 0x119
	float MaxDeltaTime; // 0x11c
	uint32_t UnwindingSize; // 0x120
	float RelaxationSpeedScale; // 0x124
	FRuntimeFloatCurve TrailRelaxationSpeed; // 0x128
	FInputScaleBiasClamp RelaxationSpeedScaleInputProcessor; // 0x1b0
	TArray<FRotationLimit> RotationLimits; // 0x1e0
	TArray<FVector> RotationOffsets; // 0x1f0
	TArray<FAnimPhysPlanarLimit> PlanarLimits; // 0x200
	float StretchLimit; // 0x210
	FVector FakeVelocity; // 0x214
	FBoneReference BaseJoint; // 0x220
	float LastBoneRotationAnimAlphaBlend; // 0x234
};

struct FServerDeletePushNotificationTemplateRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PushNotificationTemplateId; // 0x8
};

struct FMeshTriCoordinate {
	int32_t Tri; // 0x0
	FVector BaryCoord; // 0x4
};

struct FGroupsListGroupApplicationsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Applications; // 0x8
};

struct FInterpCurvePointVector {
	float InVal; // 0x0
	FVector OutVal; // 0x4
	FVector ArriveTangent; // 0x10
	FVector LeaveTangent; // 0x1c
	EInterpCurveMode InterpMode; // 0x28
};

struct FClientGetCharacterStatisticsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* CharacterStatistics; // 0x8
};

struct FClientGetContentDownloadUrlResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString URL; // 0x8
};

struct FClientLoginWithXboxRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool CreateAccount; // 0x8
	FString EncryptedRequest; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x20
	FString PlayerSecret; // 0x28
	FString XboxToken; // 0x38
};

struct FGPromptData {
	bool bUseWidget; // 0x0
	FText Text; // 0x8
	EHorizontalAlignment HAlignment; // 0x20
	EVerticalAlignment VAlignment; // 0x21
	bool bAlignHorizontallyWithin; // 0x22
	bool bAlignVerticallyWithin; // 0x23
	FVector2D TranslationAdjustment; // 0x24
};

struct FClientGetTitleDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Data; // 0x8
};

struct FGroupsIsMemberResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	bool IsMember; // 0x8
};

struct FRigUnit_BinaryQuaternionOp : FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FQuat Argument0; // 0x30
	FQuat Argument1; // 0x40
	FQuat Result; // 0x50
};

struct FGUpgradeableTierArray {
	TArray<FPrimaryAssetId> UpgradeableTiers; // 0x0
};

struct FMovieSceneTimecodeSource {
	FTimecode Timecode; // 0x0
	FFrameNumber DeltaFrame; // 0x14
};

struct FPhysicsConstraintProfileHandle {
	FConstraintProfileProperties ProfileProperties; // 0x0
	FName ProfileName; // 0x104
};

struct FAdminDeleteContentRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Key; // 0x8
};

struct FClientLinkSteamAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool ForceLink; // 0x8
	FString SteamTicket; // 0x10
};

struct FMaterialLayersFunctions {
	TArray<UMaterialFunctionInterface*> Layers; // 0x0
	TArray<UMaterialFunctionInterface*> Blends; // 0x10
	TArray<bool> LayerStates; // 0x20
	FString KeyString; // 0x30
};

struct FServerDeregisterGameResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FTimelineEventEntry {
	float Time; // 0x0
	DelegateProperty EventFunc; // 0x4
};

struct FInterpCurveVector2D {
	TArray<FInterpCurvePointVector2D> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FAutoCompleteNode {
	int32_t IndexChar; // 0x0
	TArray<int32_t> AutoCompleteListIndices; // 0x8
};

struct FNiagaraParameters {
	TArray<FNiagaraVariable> Parameters; // 0x0
};

struct FGAttributeModModifierEffect_Context : FXGameplayEffectContext {
	TArray<FXGameplayEffectHandle> TrackedEffects; // 0x8
	TArray<AActor*> TrackedActors; // 0x18
	bool bEverActivated; // 0x28
	TArray<UXAttributeModModifier*> AppliedModifiers; // 0x30
};

struct FXGeneratedLootEntry {
	UObject* Item; // 0x0
	int32_t SpawnAmount; // 0x8
};

struct FBranchingPoint : FAnimLinkableElement {
	UAnimMontage* LinkedMontage; // 0x8
	int32_t SlotIndex; // 0x10
	int32_t SegmentIndex; // 0x14
	EAnimLinkMethod LinkMethod; // 0x18
	EAnimLinkMethod CachedLinkMethod; // 0x19
	float SegmentBeginTime; // 0x1c
	float SegmentLength; // 0x20
	float LinkValue; // 0x24
	UAnimSequenceBase* LinkedSequence; // 0x28
	FName EventName; // 0x30
	float DisplayTime; // 0x3c
	float TriggerTimeOffset; // 0x40
};

struct FClientGetLeaderboardAroundCharacterResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FServerUpdateUserInternalDataRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Data; // 0x8
	FString KeysToRemove; // 0x10
	FString PlayFabId; // 0x20
};

struct FPawnActionEvent {
	UPawnAction* Action; // 0x0
};

struct FServerSetFriendTagsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString FriendPlayFabId; // 0x8
	FString PlayFabId; // 0x18
	FString Tags; // 0x28
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
	FCaptureResolution Resolution; // 0x4c
	bool bEnableTextureStreaming; // 0x54
	bool bCinematicEngineScalability; // 0x55
	bool bCinematicMode; // 0x56
	bool bAllowMovement; // 0x57
	bool bAllowTurning; // 0x58
	bool bShowPlayer; // 0x59
	bool bShowHUD; // 0x5a
	bool bUsePathTracer; // 0x5b
	int32_t PathTracerSamplePerPixel; // 0x5c
};

struct FServerLinkServerCustomIdResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientGetCharacterDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString CharacterId; // 0x8
	UPlayFabJsonObject* Data; // 0x18
	int32_t DataVersion; // 0x20
};

struct FQosPingServerInfo {
	FString Address; // 0x0
	int32_t Port; // 0x10
};

struct FClientGetCharacterLeaderboardRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CharacterType; // 0x8
	int32_t MaxResultsCount; // 0x18
	int32_t StartPosition; // 0x1c
	FString StatisticName; // 0x20
};

struct FClientWriteClientPlayerEventRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Body; // 0x8
	FString EventName; // 0x10
	FString Timestamp; // 0x20
};

struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore {
	UObject* Owner; // 0x8
	TMap<FNiagaraVariable, int32_t> ParameterOffsets; // 0x10
	TArray<char> ParameterData; // 0x60
	TArray<UNiagaraDataInterface*> DataInterfaces; // 0x70
	TMap<FNiagaraVariable, FNiagaraVariable> UserParameterRedirects; // 0xe8
};

struct FInterpCurvePointVector2D {
	float InVal; // 0x0
	FVector2D OutVal; // 0x4
	FVector2D ArriveTangent; // 0xc
	FVector2D LeaveTangent; // 0x14
	EInterpCurveMode InterpMode; // 0x1c
};

struct FEdGraphPinType {
	FName PinCategory; // 0x0
	FName PinSubCategory; // 0xc
	TWeakObjectPtr<UObject> PinSubCategoryObject; // 0x18
	FSimpleMemberReference PinSubCategoryMemberReference; // 0x20
	FEdGraphTerminalType PinValueType; // 0x48
	EPinContainerType ContainerType; // 0x6c
	char bIsArray : 1; // 0x6d
	char bIsReference : 1; // 0x6d
	char bIsConst : 1; // 0x6d
	char bIsWeakPointer : 1; // 0x6d
};

struct FWeightedBlendables {
	TArray<FWeightedBlendable> Array; // 0x0
};

struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneActorReferenceData ActorReferenceData; // 0x58
};

struct FSplineMeshInstanceData : FSceneComponentInstanceData {
	UObject* SourceComponentTemplate; // 0x8
	EComponentCreationMethod SourceComponentCreationMethod; // 0x10
	int32_t SourceComponentTypeSerializedIndex; // 0x14
	TArray<char> SavedProperties; // 0x18
	TArray<FActorComponentDuplicatedObjectData> DuplicatedObjects; // 0x28
	TArray<UObject*> ReferencedObjects; // 0x38
	TArray<FName> ReferencedNames; // 0x48
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x58
	FVector StartPos; // 0xa8
	FVector EndPos; // 0xb4
	FVector StartTangent; // 0xc0
	FVector EndTangent; // 0xcc
};

struct FWidgetNavigationData {
	EUINavigationRule Rule; // 0x0
	FName WidgetToFocus; // 0x4
	TWeakObjectPtr<UWidget> Widget; // 0x10
	DelegateProperty CustomDelegate; // 0x18
};

struct FFilmStockSettings {
	float Slope; // 0x0
	float Toe; // 0x4
	float Shoulder; // 0x8
	float BlackClip; // 0xc
	float WhiteClip; // 0x10
};

struct FClientConsumePSNEntitlementsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
	int32_t ServiceLabel; // 0x18
};

struct FMatchmakerPlayerJoinedResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMultiplayerGetQueueStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString QueueName; // 0x8
};

struct FMultiplayerGetMultiplayerServerLogsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Region; // 0x8
	FString ServerId; // 0x18
};

struct FMovieSceneFloatChannelSerializationHelper {
	ERichCurveExtrapolation PreInfinityExtrap; // 0x0
	ERichCurveExtrapolation PostInfinityExtrap; // 0x1
	TArray<int32_t> Times; // 0x8
	TArray<FMovieSceneFloatValueSerializationHelper> Values; // 0x18
	float DefaultValue; // 0x28
	bool bHasDefaultValue; // 0x2c
};

struct FDatasmithImportBaseOptions {
	EDatasmithImportScene SceneHandling; // 0x0
	bool bIncludeGeometry; // 0x1
	bool bIncludeMaterial; // 0x2
	bool bIncludeLight; // 0x3
	bool bIncludeCamera; // 0x4
	bool bIncludeAnimation; // 0x5
	FDatasmithAssetImportOptions AssetOptions; // 0x8
	FDatasmithStaticMeshImportOptions StaticMeshOptions; // 0x14
};

struct FVerticesForEdge {
	FEdgeID EdgeID; // 0x0
	FVertexID NewVertexID0; // 0x4
	FVertexID NewVertexID1; // 0x8
};

struct FNodeItem {
	FName ParentName; // 0x0
	FTransform Transform; // 0x10
};

struct FCustomMeshTriangle {
	FVector Vertex0; // 0x0
	FVector Vertex1; // 0xc
	FVector Vertex2; // 0x18
};

struct FControlRigSequenceObjectReference {
	UControlRig* ControlRigClass; // 0x0
};

struct FGCategoryButtonStyleState {
	FGCategoryButtonStyleStateViewground Background; // 0x0
	FGCategoryButtonStyleStateViewground Foreground; // 0x8
};

struct FGroupsGetGroupRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Group; // 0x8
	FString GroupName; // 0x10
};

struct FConstraintDrive {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float MaxForce; // 0x8
	char bEnablePositionDrive : 1; // 0xc
	char bEnableVelocityDrive : 1; // 0xc
};

struct FClientUpdateCharacterDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	int32_t DataVersion; // 0x8
};

struct FAdminCreateActionsOnPlayerSegmentTaskRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Description; // 0x8
	bool IsActive; // 0x18
	FString Name; // 0x20
	UPlayFabJsonObject* Parameter; // 0x30
	FString Schedule; // 0x38
};

struct FLandscapeSplineSegmentConnection {
	ULandscapeSplineControlPoint* ControlPoint; // 0x0
	float TangentLen; // 0x8
	FName SocketName; // 0xc
};

struct FGraphReference {
	UEdGraph* MacroGraph; // 0x0
	UBlueprint* GraphBlueprint; // 0x8
	FGuid GraphGuid; // 0x10
};

struct FLevelSequenceBindingReferences {
	TMap<FGuid, FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x0
	TSet<FGuid> AnimSequenceInstances; // 0x50
};

struct FServerUnlinkXboxAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FGGauntletBoneAdjustment {
	EGGauntletHand Hand; // 0x0
	TArray<EGWeaponType> Elements; // 0x8
	bool bSpecificRarities; // 0x18
	TArray<EXRarity> Rarities; // 0x20
	FVector ScaleLowerArm01; // 0x30
	FVector ScaleLowerArm02; // 0x3c
	FVector ScaleLowerArm03; // 0x48
};

struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct {
	FFrameNumber Time; // 0x8
};

struct FGroupsListGroupInvitationsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Invitations; // 0x8
};

struct FClientAddUsernamePasswordRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Email; // 0x8
	FString Password; // 0x18
	FString Username; // 0x28
};

struct FGAccoladeTrigger {
	FGameplayTag ListenTable; // 0x0
	UGEventQuery* Query; // 0x10
	TMap<FGameplayTag, FString> Properties; // 0x18
};

struct FWeightmapLayerAllocationInfo {
	ULandscapeLayerInfoObject* LayerInfo; // 0x0
	char WeightmapTextureIndex; // 0x8
	char WeightmapTextureChannel; // 0x9
};

struct FServerGrantCharacterToUserRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CharacterName; // 0x8
	FString CharacterType; // 0x18
	FString PlayFabId; // 0x28
};

struct FClothCollisionPrim_SphereConnection {
	int32_t SphereIndices[0x2]; // 0x0
};

struct FServerSendPushNotificationRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	TArray<UPlayFabJsonObject*> AdvancedPlatformDelivery; // 0x8
	FString Message; // 0x18
	UPlayFabJsonObject* Package; // 0x28
	FString Recipient; // 0x30
	FString Subject; // 0x40
	FString TargetPlatforms; // 0x50
};

struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FNiagaraVariable Parameter; // 0x20
};

struct FServerRevokeInventoryResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FXActiveActionCueContainer : FFastArraySerializer {
	TArray<FXActiveActionCue> Items; // 0xb0
	UXGameplayEffectContainer* Owner; // 0xc0
};

struct FMultiplayerGetServerBackfillTicketResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString CancellationReasonString; // 0x8
	FString Created; // 0x18
	int32_t GiveUpAfterSeconds; // 0x28
	FString MatchID; // 0x30
	TArray<UPlayFabJsonObject*> Members; // 0x40
	FString QueueName; // 0x50
	UPlayFabJsonObject* ServerDetails; // 0x60
	FString Status; // 0x68
	FString TicketId; // 0x78
};

struct FMultiplayerCreateBuildWithManagedContainerRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString BuildName; // 0x8
	EContainerFlavor ContainerFlavor; // 0x18
	TArray<UPlayFabJsonObject*> GameAssetReferences; // 0x20
	TArray<UPlayFabJsonObject*> GameCertificateReferences; // 0x30
	UPlayFabJsonObject* InstrumentationConfiguration; // 0x40
	UPlayFabJsonObject* MetaData; // 0x48
	int32_t MultiplayerServerCountPerVm; // 0x50
	TArray<UPlayFabJsonObject*> Ports; // 0x58
	TArray<UPlayFabJsonObject*> RegionConfigurations; // 0x68
	FString StartMultiplayerServerCommand; // 0x78
	EAzureVmSize VmSize; // 0x88
};

struct FServerGetCharacterLeaderboardResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FNiagaraTestStructInner {
	FVector InnerVector1; // 0x0
	FVector InnerVector2; // 0xc
};

struct FAuthenticationValidateEntityTokenResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
	ELoginIdentityProvider IdentityProvider; // 0x10
	UPlayFabJsonObject* Lineage; // 0x18
};

struct FServerSetGameServerInstanceDataRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString GameServerData; // 0x8
	FString LobbyId; // 0x18
};

struct FDataAbortFileUploadsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
	FString FileNames; // 0x10
	int32_t ProfileVersion; // 0x20
};

struct FAdminGetPlayerProfileRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabId; // 0x8
	UPlayFabJsonObject* ProfileConstraints; // 0x18
};

struct FXGameplayAppliedEffectStack {
	TArray<FXGameplayEffectHandle> Effects; // 0x0
};

struct FAnimationSetup {
	UAnimSequence* AnimSequence; // 0x0
	UAnimSharingStateInstance* AnimBlueprint; // 0x30
	FPerPlatformInt NumRandomizedInstances; // 0x38
	FPerPlatformBool Enabled; // 0x3c
};

struct FGNarrativePresentationDataTableRow : FTableRowBase {
	FText Title; // 0x8
	FName NPCName; // 0x20
	FText Text; // 0x30
	UAkAudioEvent* VoiceOverStart; // 0x48
	UAkAudioEvent* VoiceOverStop; // 0x50
	FGameplayTag BackgroundSceneTag; // 0x58
	FColor OuterGlowColor; // 0x64
	FColor InnerGlowColor1; // 0x68
	FColor InnerGlowColor2; // 0x6c
};

struct FGroupsUpdateGroupRoleRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t ExpectedProfileVersion; // 0x8
	UPlayFabJsonObject* Group; // 0x10
	FString RoleId; // 0x18
	FString RoleName; // 0x28
};

struct FAkMainOutputSettings {
	FString AudioDeviceShareset; // 0x0
	uint32_t DeviceID; // 0x10
	EAkPanningRule PanningRule; // 0x14
	EAkChannelConfigType ChannelConfigType; // 0x18
	uint32_t ChannelMask; // 0x1c
	uint32_t NumberOfChannels; // 0x20
};

struct FConstraintOffset {
	FVector Translation; // 0x0
	FQuat Rotation; // 0x10
	FVector Scale; // 0x20
	FTransform Parent; // 0x30
};

struct FMovieSceneObjectPathChannelKeyValue {
	UObject* SoftPtr; // 0x0
	UObject* HardPtr; // 0x30
};

struct FServerGetRandomResultTablesResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Tables; // 0x8
};

struct FServerGetPlayerStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabId; // 0x8
	FString StatisticNames; // 0x18
	TArray<UPlayFabJsonObject*> StatisticNameVersions; // 0x28
};

struct FAdminAddVirtualCurrencyTypesRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	TArray<UPlayFabJsonObject*> VirtualCurrencies; // 0x8
};

struct FQosDatacenterInfo {
	FString ID; // 0x0
	FString RegionId; // 0x10
	bool bEnabled; // 0x20
	TArray<FQosPingServerInfo> Servers; // 0x28
};

struct FGEffectSource {
	TArray<FXScaledEffectClass> EffectsToApply; // 0x0
	float EffectScale; // 0x10
	float EffectDurationScale; // 0x14
	TArray<FXGameplayEffectHandle> AppliedEffects; // 0x18
	UObject* Source; // 0x28
};

struct FRigUnit_ConvertRotationToVector : FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FRotator Input; // 0x28
	FVector Result; // 0x34
};

struct FClientLinkCustomIDResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FRigUnit_BinaryFloatOp : FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	float Argument0; // 0x28
	float Argument1; // 0x2c
	float Result; // 0x30
};

struct FXElementalFXDef_StaticMesh : FXElementalFXDef {
	bool bUseRadiusRange; // 0x0
	FVector2D ValidRadiusRange; // 0x4
	FXElementalVector Offset; // 0xc
	FXElementalRotator Rotation; // 0x38
	FXElementalVector Size; // 0x58
	bool bNormalizeSize; // 0x84
	FVector BaseSize; // 0x88
	TArray<FXElementalFXParam> StaticParameters; // 0x98
	FGameplayTagContainer RequiredTags; // 0xa8
	FGameplayTagContainer IgnoredTags; // 0xc8
	UStaticMesh* StaticMesh; // 0xe8
	UMaterialInterface* MaterialOverride; // 0xf0
	TArray<FXMaterialCrossfade> Crossfades; // 0xf8
	TWeakObjectPtr<UStaticMeshComponent> Instance; // 0x108
};

struct FXSkinAnimationProfileRig {
	UAnimSequence* IdleSequence; // 0x0
	UAnimMontage* IntroMontage; // 0x8
	TArray<UAnimMontage*> FidgetMontages; // 0x10
};

struct FServerGetPlayerCombinedInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* InfoResultPayload; // 0x8
	FString PlayFabId; // 0x10
};

struct FGSynchronizedTick {
	float Timestamp; // 0x0
	float Mana; // 0x4
	float BankedMana; // 0x8
	float TimeSinceLastLevitation; // 0xc
	float LevitationTimePassed; // 0x10
	float LevitationManaPenaltyTimeLeft; // 0x14
	bool bLevitating; // 0x18
	bool bLevitateProvidingLift; // 0x19
	bool bLevitationStartedMidAir; // 0x1a
	bool bLevitationStarted; // 0x1b
};

struct FStructSerializerNumericTestStruct {
	uint8_t Int8; // 0x0
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

struct FNetAnalyticsDataConfig {
	FName DataName; // 0x0
	bool bEnabled; // 0xc
};

struct FMultiplayerGetMatchmakingTicketResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString CancellationReasonString; // 0x8
	FString Created; // 0x18
	UPlayFabJsonObject* Creator; // 0x28
	int32_t GiveUpAfterSeconds; // 0x30
	FString MatchID; // 0x38
	TArray<UPlayFabJsonObject*> Members; // 0x48
	TArray<UPlayFabJsonObject*> MembersToMatchWith; // 0x58
	FString QueueName; // 0x68
	FString Status; // 0x78
	FString TicketId; // 0x88
};

struct FGScoreEventInfo {
	int32_t TeamId; // 0x0
	bool bIsExile; // 0x4
	bool bIsKiller; // 0x5
	int32_t PointsAwarded; // 0x8
	int32_t Team1Score; // 0xc
	int32_t Team2Score; // 0x10
	FVector ExileLocation; // 0x14
};

struct FCloudScriptExecuteEntityCloudScriptRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
	FString FunctionName; // 0x10
	UPlayFabJsonObject* FunctionParameter; // 0x20
	bool GeneratePlayStreamEvent; // 0x28
	ECloudScriptRevisionOption RevisionSelection; // 0x29
	int32_t SpecificRevision; // 0x2c
};

struct FMultiplayerListBuildAliasesForTitleResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> BuildAliases; // 0x8
};

struct FXPredictProjectilePathParams {
	FVector StartLocation; // 0x0
	FVector LaunchVelocity; // 0xc
	bool bTraceWithCollision; // 0x18
	float ProjectileRadius; // 0x1c
	float SizeScaleOverTime; // 0x20
	float InitialSizeScale; // 0x24
	float DestinationSizeScale; // 0x28
	float MaxSimTime; // 0x2c
	bool bTraceWithChannel; // 0x30
	ECollisionChannel TraceChannel; // 0x31
	float PointTraceDistance; // 0x34
	TArray<EObjectTypeQuery> ObjectTypes; // 0x38
	TArray<AActor*> ActorsToIgnore; // 0x48
	float SimFrequency; // 0x58
	float OverrideGravityZ; // 0x5c
	float GravityZOverTime; // 0x60
	float DestinationGravityZ; // 0x64
	float TerminalZVelocity; // 0x68
	EDrawDebugTrace DrawDebugType; // 0x6c
	float DrawDebugTime; // 0x70
	bool bTraceComplex; // 0x74
};

struct FClientGetPlayFabIDsFromGenericIDsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FClientUnlinkAndroidDeviceIDRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString AndroidDeviceId; // 0x8
};

struct FSpriteDrawCallRecord {
	FVector Destination; // 0x0
	UTexture* BaseTexture; // 0x10
	FColor Color; // 0x48
};

struct FMovieSceneActorReferenceData : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneActorReferenceKey> KeyValues; // 0x30
};

struct FAdminUpdatePlayerStatisticDefinitionRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	EStatisticAggregationMethod AggregationMethod; // 0x8
	FString StatisticName; // 0x10
	EStatisticResetIntervalOption VersionChangeInterval; // 0x20
};

struct FClientGetWindowsHelloChallengeResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString Challenge; // 0x8
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
	char bEvaluateInPreroll : 1; // 0xf4
	char bEvaluateInPostroll : 1; // 0xf4
};

struct FCustomProfile {
	FName Name; // 0x0
	TArray<FResponseChannel> CustomResponses; // 0x10
};

struct FBatchedPoint {
	FVector Position; // 0x0
	FLinearColor Color; // 0xc
	float PointSize; // 0x1c
	float RemainingLifeTime; // 0x20
	char DepthPriority; // 0x24
};

struct FClientUnlinkAndroidDeviceIDResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FLevelViewportInfo {
	FVector CamPosition; // 0x0
	FRotator CamRotation; // 0xc
	float CamOrthoZoom; // 0x18
	bool CamUpdated; // 0x1c
};

struct FLocalizationGetLanguageListResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString LanguageList; // 0x8
};

struct FAdminGetMatchmakerGameInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString BuildVersion; // 0x8
	FString EndTime; // 0x18
	FString LobbyId; // 0x28
	FString Mode; // 0x38
	FString Players; // 0x48
	ERegion Region; // 0x58
	FString ServerIPV4Address; // 0x60
	FString ServerIPV6Address; // 0x70
	int32_t ServerPort; // 0x80
	FString ServerPublicDNSName; // 0x88
	FString StartTime; // 0x98
	FString TitleId; // 0xa8
};

struct FDataSetObjectsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	int32_t ProfileVersion; // 0x8
	TArray<UPlayFabJsonObject*> SetResults; // 0x10
};

struct FServerGetFriendsListResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Friends; // 0x8
};

struct FSegmentEntry : FFastArraySerializerItem {
	int32_t ReplicationID; // 0x0
	int32_t ReplicationKey; // 0x4
	int32_t MostRecentArrayReplicationKey; // 0x8
	char ID; // 0xc
	FVector Position; // 0x10
	char State; // 0x1c
};

struct FXActionRelativeTime {
	FGameplayTag PhaseAnchor; // 0x0
	float OffsetSeconds; // 0xc
};

struct FClientPayForPurchaseResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	int32_t CreditApplied; // 0x8
	FString OrderId; // 0x10
	FString ProviderData; // 0x20
	FString ProviderToken; // 0x30
	FString PurchaseConfirmationPageURL; // 0x40
	FString PurchaseCurrency; // 0x50
	int32_t PurchasePrice; // 0x60
	ETransactionStatus Status; // 0x64
	UPlayFabJsonObject* VCAmount; // 0x68
	UPlayFabJsonObject* VirtualCurrency; // 0x70
};

struct FDataDeleteFilesResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
	int32_t ProfileVersion; // 0x10
};

struct FAnimNode_ControlRig_ExternalSource : FAnimNode_ControlRigBase {
	TArray<FName> RigHierarchyItemNameMapping; // 0x10
	TWeakObjectPtr<UNodeMappingContainer> NodeMappingContainer; // 0x20
	TWeakObjectPtr<UControlRig> ControlRig; // 0x28
};

struct FClientLoginResult : FPlayFabLoginResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x8
	UPlayFabJsonObject* EntityToken; // 0x10
	UPlayFabJsonObject* InfoResultPayload; // 0x18
	FString LastLoginTime; // 0x20
	bool NewlyCreated; // 0x30
	FString PlayFabId; // 0x38
	FString SessionTicket; // 0x48
	UPlayFabJsonObject* SettingsForUser; // 0x58
	UPlayFabJsonObject* TreatmentAssignment; // 0x60
};

struct FSoundWaveEnvelopeTimeData {
	float Amplitude; // 0x0
	float TimeSec; // 0x4
};

struct FBlendProfileBoneEntry {
	FBoneReference BoneReference; // 0x0
	float BlendScale; // 0x14
};

struct FGGeneratedBoon {
	TArray<UTexture2D*> Icons; // 0x0
	FText Name; // 0x10
	FText Description; // 0x28
	TArray<EXRarity> Rarities; // 0x40
	int32_t OptionIndex; // 0x50
};

struct FServerServerLoginResult : FPlayFabLoginResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x8
	UPlayFabJsonObject* EntityToken; // 0x10
	UPlayFabJsonObject* InfoResultPayload; // 0x18
	FString LastLoginTime; // 0x20
	bool NewlyCreated; // 0x30
	FString PlayFabId; // 0x38
	FString SessionTicket; // 0x48
	UPlayFabJsonObject* SettingsForUser; // 0x58
	UPlayFabJsonObject* TreatmentAssignment; // 0x60
};

struct FClientCreateSharedGroupResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString SharedGroupId; // 0x8
};

struct FMovieSceneParticleChannel : FMovieSceneByteChannel {
	TArray<FFrameNumber> Times; // 0x8
	char DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<char> Values; // 0x20
	UEnum* Enum; // 0x30
};

struct FRigUnit_ApplyFK : FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FRigHierarchyRef HierarchyRef; // 0x28
	FName Joint; // 0x40
	FTransform Transform; // 0x50
	FTransformFilter Filter; // 0x80
	EApplyTransformMode ApplyTransformMode; // 0x89
	ETransformSpaceMode ApplyTransformSpace; // 0x8a
	FTransform BaseTransform; // 0x90
	FName BaseJoint; // 0xc0
};

struct FAdaptorPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FAdaptorTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FXAutoAimSearchResult {
	TWeakObjectPtr<AActor> Target; // 0x0
	FVector TargetOffset; // 0x8
	EXAutoAimState State; // 0x14
	float AssistAlpha; // 0x18
	float MagnetismAlpha; // 0x1c
};

struct FAdminAbortTaskInstanceRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString TaskInstanceId; // 0x8
};

struct FServerGetPlayersSegmentsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabId; // 0x8
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

struct FMovieSceneExpansionState {
	bool bExpanded; // 0x0
};

struct FAdminUpdatePlayerSharedSecretResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FPoseData {
	TArray<FTransform> LocalSpacePose; // 0x0
	TMap<int32_t, int32_t> TrackToBufferIndex; // 0x10
	TArray<float> CurveData; // 0x60
};

struct FTransformConstraint {
	FConstraintDescription Operator; // 0x0
	FName SourceNode; // 0x10
	FName TargetNode; // 0x1c
	float Weight; // 0x28
	bool bMaintainOffset; // 0x2c
};

struct FXBotCombatTargetState {
	AXCharacter* Character; // 0x0
};

struct FDataInitiateFileUploadsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
	int32_t ProfileVersion; // 0x10
	TArray<UPlayFabJsonObject*> UploadDetails; // 0x18
};

struct FAudioEQEffect {
	float FrequencyCenter0; // 0x8
	float Gain0; // 0xc
	float Bandwidth0; // 0x10
	float FrequencyCenter1; // 0x14
	float Gain1; // 0x18
	float Bandwidth1; // 0x1c
	float FrequencyCenter2; // 0x20
	float Gain2; // 0x24
	float Bandwidth2; // 0x28
	float FrequencyCenter3; // 0x2c
	float Gain3; // 0x30
	float Bandwidth3; // 0x34
};

struct FConstraintDescriptor {
	EConstraintType Type; // 0x0
};

struct FMovieSceneRootEvaluationTemplateInstance {
	TMap<FMovieSceneSequenceID, UObject*> DirectorInstances; // 0x18
};

struct FClientStartPurchaseRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
	TArray<UPlayFabJsonObject*> Items; // 0x18
	FString StoreId; // 0x28
};

struct FXLootDataTableRowWeights {
	float Weight; // 0x0
	FName SubTableRowName; // 0x4
	int32_t SubTableRollCount; // 0x10
	UObject* Item; // 0x18
	int32_t MinAmount; // 0x20
	int32_t MaxAmount; // 0x24
	UXLootTableRowRequirement* Requirement; // 0x28
	bool bNegateRequirement; // 0x30
	TArray<FGameplayTag> RequirementTagParameters; // 0x38
	TArray<float> RequirementValueParameters; // 0x48
	TArray<FPrimaryAssetId> RequirementAssetIdParameters; // 0x58
	FGameplayTag UniquenessTag; // 0x68
};

struct FMovieSceneSequenceReplProperties {
	FFrameTime LastKnownPosition; // 0x0
	EMovieScenePlayerStatus LastKnownStatus; // 0x8
	int32_t LastKnownNumLoops; // 0xc
};

struct FServerDeleteSharedGroupRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString SharedGroupId; // 0x8
};

struct FDatasmithStaticMaterialTemplate {
	FName MaterialSlotName; // 0x0
	UMaterialInterface* MaterialInterface; // 0x10
};

struct FGEquipmentMapping {
	FGameplayTag SlotTag; // 0x0
	UObject* ItemActorClass; // 0x10
};

struct FGToastInfo {
	EGToastNotificationType ToastType; // 0x0
	FString PlayerId; // 0x8
	FString PlayerName; // 0x18
};

struct FServerNotifyMatchmakerPlayerLeftRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString LobbyId; // 0x8
	FString PlayFabId; // 0x18
};

struct FGCosmeticCardDataTableRow : FGCosmeticItemDataTableRow {
	FText DisplayName; // 0x8
	FText Description; // 0x20
	UTexture2D* IconTexture; // 0x38
	EXRarity Rarity; // 0x68
	FPrimaryAssetId UpgradesInto; // 0x6c
	FText UpgradeableSetDisplayName; // 0x88
	FText UpgradeableSetRequirementsDescription; // 0xa0
	UTexture2D* CardTexture; // 0xb8
};

struct FGCosmeticItemDataTableRow : FTableRowBase {
	FText DisplayName; // 0x8
	FText Description; // 0x20
	UTexture2D* IconTexture; // 0x38
	EXRarity Rarity; // 0x68
	FPrimaryAssetId UpgradesInto; // 0x6c
	FText UpgradeableSetDisplayName; // 0x88
	FText UpgradeableSetRequirementsDescription; // 0xa0
};

struct FClientRegisterPlayFabUserRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString DisplayName; // 0x8
	FString Email; // 0x18
	FString EncryptedRequest; // 0x28
	UPlayFabJsonObject* InfoRequestParameters; // 0x38
	FString Password; // 0x40
	FString PlayerSecret; // 0x50
	bool RequireBothUsernameAndEmail; // 0x60
	FString Username; // 0x68
};

struct FServerGetCatalogItemsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Catalog; // 0x8
};

struct FScoreResult {
	bool bIsValid; // 0x0
	float Score; // 0x4
};

struct FAdminGetContentUploadUrlRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString ContentType; // 0x8
	FString Key; // 0x18
};

struct FAdminCreatePlayerSharedSecretResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString SecretKey; // 0x8
};

struct FDetectedFaceFeature2D : FDetectedFeature2D {
	float Confidence; // 0x0
	FBox2D BoundingBox; // 0x4
	EDetectedFaceFeatureType FeatureType; // 0x18
};

struct FSlateChildSize {
	float Value; // 0x0
	ESlateSizeRule SizeRule; // 0x4
};

struct FServerGetUserInventoryResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Inventory; // 0x8
	FString PlayFabId; // 0x18
	UPlayFabJsonObject* VirtualCurrency; // 0x28
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x30
};

struct FClientUpdateCharacterStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CharacterStatistics; // 0x18
};

struct FAdminCreatePlayerStatisticDefinitionResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Statistic; // 0x8
};

struct FLocationBoneSocketInfo {
	FName BoneSocketName; // 0x0
	FVector Offset; // 0xc
};

struct FAdminGetCloudScriptVersionsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Versions; // 0x8
};

struct FMultiplayerListPartyQosServersRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Version; // 0x8
};

struct FServerConsumeItemRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CharacterId; // 0x8
	int32_t ConsumeCount; // 0x18
	FString ItemInstanceId; // 0x20
	FString PlayFabId; // 0x30
};

struct FClientGetAccountInfoRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Email; // 0x8
	FString PlayFabId; // 0x18
	FString TitleDisplayName; // 0x28
	FString Username; // 0x38
};

struct FKSphereElem : FKShapeElem {
	float RestOffset; // 0x8
	FName Name; // 0xc
	char bContributeToMass : 1; // 0x1c
	FVector Center; // 0x30
	float Radius; // 0x3c
};

struct FLevelSimplificationDetails {
	bool bCreatePackagePerAsset; // 0x0
	float DetailsPercentage; // 0x4
	FMaterialProxySettings StaticMeshMaterialSettings; // 0x8
	bool bOverrideLandscapeExportLOD; // 0x78
	int32_t LandscapeExportLOD; // 0x7c
	FMaterialProxySettings LandscapeMaterialSettings; // 0x80
	bool bBakeFoliageToLandscape; // 0xf0
	bool bBakeGrassToLandscape; // 0xf1
	AStaticMeshActor* PlacedMeshClass; // 0xf8
	bool bGenerateMeshNormalMap; // 0x100
	bool bGenerateMeshMetallicMap; // 0x101
	bool bGenerateMeshRoughnessMap; // 0x102
	bool bGenerateMeshSpecularMap; // 0x103
	bool bGenerateLandscapeNormalMap; // 0x104
	bool bGenerateLandscapeMetallicMap; // 0x105
	bool bGenerateLandscapeRoughnessMap; // 0x106
	bool bGenerateLandscapeSpecularMap; // 0x107
};

struct FEventGraphFastCallPair {
	UFunction* FunctionToPatch; // 0x0
	int32_t EventGraphCallOffset; // 0x8
};

struct FServerRevokeInventoryItemRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
};

struct FAkWindowsAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t IO_MemorySize; // 0x0
	float TargetAutoStreamBufferLength; // 0x4
	bool UseStreamCache; // 0x8
	uint32_t MaximumPinnedBytesInCache; // 0xc
	int32_t PrepareEventMemoryPoolID; // 0x10
	bool EnableGameSyncPreparation; // 0x14
	uint32_t ContinuousPlaybackLookAhead; // 0x18
	uint32_t MonitorPoolSize; // 0x1c
	uint32_t MonitorQueuePoolSize; // 0x20
	uint32_t MaximumHardwareTimeoutMs; // 0x24
	FAkAdvancedSpatialAudioSettings SpatialAudioSettings; // 0x28
	bool EnableMultiCoreRendering; // 0x30
	uint32_t AudioAPI; // 0x34
	bool GlobalFocus; // 0x38
	bool UseHeadMountedDisplayAudioDevice; // 0x39
};

struct FLiveLinkClearSubject {
	FName SubjectName; // 0x0
};

struct FAnimNode_RandomPlayer : FAnimNode_Base {
	TArray<FRandomPlayerSequenceEntry> Entries; // 0x10
	bool bShuffleMode; // 0x64
};

struct FMovieSceneMarginSectionTemplate : FMovieScenePropertySectionTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneFloatChannel TopCurve; // 0x58
	FMovieSceneFloatChannel LeftCurve; // 0xf8
	FMovieSceneFloatChannel RightCurve; // 0x198
	FMovieSceneFloatChannel BottomCurve; // 0x238
	EMovieSceneBlendType BlendType; // 0x2d8
};

struct FAdminGetPlayerStatisticVersionsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString StatisticName; // 0x8
};

struct FSkelMeshSkinWeightInfo {
	int32_t Bones[0x8]; // 0x0
	char Weights[0x8]; // 0x20
};

struct FGroupsCreateGroupRoleResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	int32_t ProfileVersion; // 0x8
	FString RoleId; // 0x10
	FString RoleName; // 0x20
};

struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase {
	FFrameNumber Time; // 0x8
	FVector4 Vector; // 0x30
};

struct FGWeaponDisplayInfo {
	FText DisplayName; // 0x0
	FText Description; // 0x18
	UTexture2D* IconTexture; // 0x30
	EXRarity Rarity; // 0x38
	EGWeaponType WeaponType; // 0x39
};

struct FInputAxisProperties {
	float DeadZone; // 0x0
	float Sensitivity; // 0x4
	float Exponent; // 0x8
	char bInvert : 1; // 0xc
};

struct FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieSceneMediaSectionParams Params; // 0x20
};

struct FGTeamDefinition {
	FGenericTeamId TeamId; // 0x0
	FText DisplayName; // 0x8
	FLinearColor FriendlyColor; // 0x20
	FLinearColor EnemyColor; // 0x30
	UMaterialInterface* Icon; // 0x40
};

struct FMultiplayerGetMultiplayerServerLogsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString LogDownloadUrl; // 0x8
};

struct FResponseChannel {
	FName Channel; // 0x0
	ECollisionResponse response; // 0xc
};

struct FMovieSceneSequenceID {
	uint32_t Value; // 0x0
};

struct FStaticMeshVertexColorLODData {
	TArray<FPaintedVertex> PaintedVertices; // 0x0
	TArray<FColor> VertexBufferColors; // 0x10
	uint32_t LODIndex; // 0x20
};

struct FGOfferWidgetData {
	FPrimaryAssetId AssetId; // 0x0
	TArray<FString> OfferIds; // 0x18
	TArray<FPrimaryAssetId> RewardIds; // 0x28
};

struct FClientWriteTitleEventRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Body; // 0x8
	FString EventName; // 0x10
	FString Timestamp; // 0x20
};

struct FAssetBundleEntry {
	FPrimaryAssetId BundleScope; // 0x0
	FName BundleName; // 0x18
	TArray<FSoftObjectPath> BundleAssets; // 0x28
};

struct FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FServerAddFriendRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString FriendEmail; // 0x8
	FString FriendPlayFabId; // 0x18
	FString FriendTitleDisplayName; // 0x28
	FString FriendUsername; // 0x38
	FString PlayFabId; // 0x48
};

struct FClientLoginWithEmailAddressRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Email; // 0x8
	UPlayFabJsonObject* InfoRequestParameters; // 0x18
	FString Password; // 0x20
};

struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieSceneFloatChannel FadeCurve; // 0x20
	FLinearColor FadeColor; // 0xc0
	char bFadeAudio : 1; // 0xd0
};

struct FSessionServicePing {
	FString Username; // 0x0
};

struct FMultiplayerCreateBuildWithCustomContainerResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString BuildId; // 0x8
	FString BuildName; // 0x18
	EContainerFlavor ContainerFlavor; // 0x28
	FString ContainerRunCommand; // 0x30
	FString CreationTime; // 0x40
	UPlayFabJsonObject* CustomGameContainerImage; // 0x50
	TArray<UPlayFabJsonObject*> GameAssetReferences; // 0x58
	TArray<UPlayFabJsonObject*> GameCertificateReferences; // 0x68
	UPlayFabJsonObject* MetaData; // 0x78
	int32_t MultiplayerServerCountPerVm; // 0x80
	TArray<UPlayFabJsonObject*> Ports; // 0x88
	TArray<UPlayFabJsonObject*> RegionConfigurations; // 0x98
	EAzureVmSize VmSize; // 0xa8
};

struct FBeamModifierOptions {
	char bModify : 1; // 0x0
	char bScale : 1; // 0x0
	char bLock : 1; // 0x0
};

struct FSplitterStyle : FSlateWidgetStyle {
	FSlateBrush HandleNormalBrush; // 0x8
	FSlateBrush HandleHighlightBrush; // 0x98
};

struct FSingleAnimationPlayData {
	UAnimationAsset* AnimToPlay; // 0x0
	char bSavedLooping : 1; // 0x8
	char bSavedPlaying : 1; // 0x8
	float SavedPosition; // 0xc
	float SavedPlayRate; // 0x10
};

struct FMultiplayerListServerBackfillTicketsForPlayerRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
	FString QueueName; // 0x10
};

struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase {
	int32_t GroupIndex; // 0x10
	EAnimGroupRole GroupRole; // 0x14
	bool bIgnoreForRelevancyTest; // 0x15
	float BlendWeight; // 0x18
	float InternalTimeAccumulator; // 0x1c
	UPoseAsset* PoseAsset; // 0x30
};

struct FXSwitchMapEntry {
	FGameplayTag SignalMatches; // 0x0
	UXActionTransistor* Then; // 0x10
	bool bMatchExact; // 0x18
};

struct FSimpleCurve : FRealCurve {
	FKeyHandleMap KeyHandlesToIndices; // 0x8
	ERichCurveExtrapolation PreInfinityExtrap; // 0x68
	ERichCurveExtrapolation PostInfinityExtrap; // 0x69
	float DefaultValue; // 0x6c
	ERichCurveInterpMode InterpMode; // 0x70
	TArray<FSimpleCurveKey> KeyS; // 0x78
};

struct FARVideoFormat {
	int32_t FPS; // 0x0
	int32_t Width; // 0x4
	int32_t Height; // 0x8
};

struct FAdminRevokeBansRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString BanIds; // 0x8
};

struct FClientGetLeaderboardForUsersCharactersRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t MaxResultsCount; // 0x8
	FString StatisticName; // 0x10
};

struct FMultiplayerListQosServersRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FTireFrictionScalePair {
	UTireType* TireType; // 0x0
	float FrictionScale; // 0x8
};

struct FPerBoneInterpolation {
	FBoneReference BoneReference; // 0x0
	float InterpolationSpeedPerSec; // 0x14
};

struct FEditorImportWorkflowDefinition {
	FFilePath ImportFilePath; // 0x0
	TArray<FImportFactorySettingValues> FactorySettings; // 0x10
};

struct FWidgetAnimationBinding {
	FName WidgetName; // 0x0
	FName SlotWidgetName; // 0xc
	FGuid AnimationGuid; // 0x18
	bool bIsRootWidget; // 0x28
};

struct FClientLoginWithCustomIDRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool CreateAccount; // 0x8
	FString CustomId; // 0x10
	FString EncryptedRequest; // 0x20
	UPlayFabJsonObject* InfoRequestParameters; // 0x30
	FString PlayerSecret; // 0x38
};

struct FA2CSPose : FA2Pose {
	TArray<FTransform> Bones; // 0x0
	TArray<char> ComponentSpaceFlags; // 0x18
};

struct FCameraPreviewInfo {
	APawn* PawnClass; // 0x0
	UAnimSequence* AnimSeq; // 0x8
	FVector Location; // 0x10
	FRotator Rotation; // 0x1c
	APawn* PawnInst; // 0x28
};

struct FTTEventTrack : FTTTrackBase {
	FName TrackName; // 0x8
	bool bIsExternalCurve; // 0x14
	FName FunctionName; // 0x18
	UCurveFloat* CurveKeys; // 0x28
};

struct FServerGetContentDownloadUrlRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString HttpMethod; // 0x8
	FString Key; // 0x18
	bool ThruCDN; // 0x28
};

struct FServerGetUserBansResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FServerGetPlayFabIDsFromFacebookIDsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString FacebookIDs; // 0x8
};

struct FGroupsBlockEntityRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FXActionEffect {
	FXScaledEffectClass ScaledEffect; // 0x0
	bool bRemoveOnActionEnd; // 0x18
};

struct FNiagaraParameterStore {
	UObject* Owner; // 0x8
	TMap<FNiagaraVariable, int32_t> ParameterOffsets; // 0x10
	TArray<char> ParameterData; // 0x60
	TArray<UNiagaraDataInterface*> DataInterfaces; // 0x70
};

struct FGameplayTagCategoryRemap {
	FString BaseCategory; // 0x0
	TArray<FString> RemapCategories; // 0x10
};

struct FAdminSetTitleDataRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Key; // 0x8
	FString Value; // 0x18
};

struct FAnimNode_StateResult : FAnimNode_Root {
	FPoseLink Result; // 0x10
};

struct FLightmassDirectionalLightSettings : FLightmassLightSettings {
	float IndirectLightingSaturation; // 0x0
	float ShadowExponent; // 0x4
	bool bUseAreaShadowsForStationaryLight; // 0x8
	float LightSourceAngle; // 0xc
};

struct FServerExecuteCloudScriptServerRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString FunctionName; // 0x8
	UPlayFabJsonObject* FunctionParameter; // 0x18
	bool GeneratePlayStreamEvent; // 0x20
	FString PlayFabId; // 0x28
	ECloudScriptRevisionOption RevisionSelection; // 0x38
	int32_t SpecificRevision; // 0x3c
};

struct FSubmixEffectDynamicsProcessorSettings {
	ESubmixEffectDynamicsProcessorType DynamicsProcessorType; // 0x0
	ESubmixEffectDynamicsPeakMode PeakMode; // 0x1
	float LookAheadMsec; // 0x4
	float AttackTimeMsec; // 0x8
	float ReleaseTimeMsec; // 0xc
	float ThresholdDb; // 0x10
	float Ratio; // 0x14
	float KneeBandwidthDb; // 0x18
	float InputGainDb; // 0x1c
	float OutputGainDb; // 0x20
	char bChannelLinked : 1; // 0x24
	char bAnalogMode : 1; // 0x24
};

struct FActorSequenceObjectReferences {
	TArray<FActorSequenceObjectReference> Array; // 0x0
};

struct FProceduralLayer {
	FName Name; // 0x0
	bool Visible; // 0xc
	float Weight; // 0x10
	TArray<FLandscapeProceduralLayerBrush> Brushes; // 0x18
	TArray<uint8_t> HeightmapBrushOrderIndices; // 0x28
	TArray<uint8_t> WeightmapBrushOrderIndices; // 0x38
};

struct FServerRevokeBansResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FAIDynamicParam {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0xc
	float Value; // 0x10
	FBlackboardKeySelector BBKey; // 0x18
};

struct FPreviewAttachedObjectPair {
	UObject* AttachedObject; // 0x0
	UObject* Object; // 0x30
	FName AttachedTo; // 0x38
};

struct FBasedMovementInfo {
	UPrimitiveComponent* MovementBase; // 0x0
	FName BoneName; // 0x8
	FVector_NetQuantize100 Location; // 0x14
	FRotator Rotation; // 0x20
	bool bServerHasBaseComponent; // 0x2c
	bool bRelativeRotation; // 0x2d
	bool bServerHasVelocity; // 0x2e
};

struct FGroupsListGroupInvitationsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Group; // 0x8
};

struct FClientListUsersCharactersRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabId; // 0x8
};

struct FMultiplayerCreateMatchmakingTicketRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Creator; // 0x8
	int32_t GiveUpAfterSeconds; // 0x10
	TArray<UPlayFabJsonObject*> MembersToMatchWith; // 0x18
	FString QueueName; // 0x28
};

struct FMultiplayerListVirtualMachineSummariesRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString BuildId; // 0x8
	int32_t PageSize; // 0x18
	FString Region; // 0x20
	FString SkipToken; // 0x30
};

struct FServerGetUserAccountInfoRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabId; // 0x8
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

struct FServerGetPlayerCombinedInfoRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* InfoRequestParameters; // 0x8
	FString PlayFabId; // 0x10
};

struct FMovieSceneTrackLabels {
	TArray<FString> Strings; // 0x0
};

struct FSlotEvaluationPose {
	EAdditiveAnimationType AdditiveType; // 0x0
	float Weight; // 0x4
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

struct FMultiplayerGetMultiplayerServerDetailsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString BuildId; // 0x8
	FString Region; // 0x18
	FString SessionId; // 0x28
};

struct FInterpControlPoint {
	FVector PositionControlPoint; // 0x0
	bool bPositionIsRelative; // 0xc
};

struct FAkCommonInitializationSettingsWithSampleRate : FAkCommonInitializationSettings {
	uint32_t MaximumNumberOfMemoryPools; // 0x0
	uint32_t MaximumNumberOfPositioningPaths; // 0x4
	uint32_t DefaultPoolSize; // 0x8
	float MemoryCutoffThreshold; // 0xc
	uint32_t CommandQueueSize; // 0x10
	uint32_t SamplesPerFrame; // 0x14
	FAkMainOutputSettings MainOutputSettings; // 0x18
	float StreamingLookAheadRatio; // 0x40
	uint32_t StreamManagerPoolSize; // 0x44
	uint32_t LowerEnginePoolSize; // 0x48
	float LowerEngineMemoryCutoffThreshold; // 0x4c
	uint16_t NumberOfRefillsInVoice; // 0x50
	FAkSpatialAudioSettings SpatialAudioSettings; // 0x54
	uint32_t SampleRate; // 0x68
};

struct FAnimNode_RotateRootBone : FAnimNode_Base {
	FPoseLink BasePose; // 0x10
	float Pitch; // 0x20
	float Yaw; // 0x24
	FInputScaleBiasClamp PitchScaleBiasClamp; // 0x28
	FInputScaleBiasClamp YawScaleBiasClamp; // 0x58
	FRotator MeshToComponent; // 0x88
};

struct FEventsWriteEventsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString AssignedEventIds; // 0x8
};

struct FGExileEventEffect : FGEventEffect {
	UXGameplayEffect* EffectClass; // 0x0
	float EffectScale; // 0x8
	float EffectDurationScale; // 0xc
	bool bApplyOnceOnly; // 0x10
	TWeakObjectPtr<UObject> EffectSource; // 0x14
	bool bApplyOnAllyExiles; // 0x20
	bool bApplyOnNPCExiles; // 0x21
};

struct FClientLoginWithWindowsHelloRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString ChallengeSignature; // 0x8
	UPlayFabJsonObject* InfoRequestParameters; // 0x18
	FString PublicKeyHint; // 0x20
};

struct FServerGetPublisherDataRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString KeyS; // 0x8
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

struct FScrollBorderStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x98
};

struct FSoundSourceBusSendInfo {
	float SendLevel; // 0x0
	USoundSourceBus* SoundSourceBus; // 0x8
};

struct FServerSendPushNotificationFromTemplateRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PushNotificationTemplateId; // 0x8
	FString Recipient; // 0x18
};

struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int32_t LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float Alpha; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8c
	float ReachPrecision; // 0xd0
	int32_t MaxIterations; // 0xd4
	TArray<FAnimLegIKDefinition> LegsDefinition; // 0xd8
};

struct FA2Pose {
	TArray<FTransform> Bones; // 0x0
};

struct FServerGetTitleDataRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString KeyS; // 0x8
};

struct FMaterialQualityOverrides {
	bool bDiscardQualityDuringCook; // 0x0
	bool bEnableOverride; // 0x1
	bool bForceFullyRough; // 0x2
	bool bForceNonMetal; // 0x3
	bool bForceDisableLMDirectionality; // 0x4
	bool bForceLQReflections; // 0x5
	bool bDisableMaterialNormalCalculation; // 0x6
	EMobileCSMQuality MobileCSMQuality; // 0x7
};

struct FServerModifyItemUsesResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString ItemInstanceId; // 0x8
	int32_t RemainingUses; // 0x18
};

struct FAdminGetActionsOnPlayersInSegmentTaskInstanceResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Parameter; // 0x8
	UPlayFabJsonObject* Summary; // 0x10
};

struct FMultiplayerRolloverContainerRegistryCredentialsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FGroupsListMembershipRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
};

struct FGPerkLoadout {
	TArray<FString> AssetIds; // 0x0
};

struct FLiveLinkPongMessage {
	FString ProviderName; // 0x0
	FString MachineName; // 0x10
	FGuid PollRequest; // 0x20
};

struct FPointDamageEvent : FDamageEvent {
	UDamageType* DamageTypeClass; // 0x8
	float Damage; // 0x10
	FVector_NetQuantizeNormal ShotDirection; // 0x14
	FHitResult HitInfo; // 0x20
};

struct FServerGetTimeRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FSubdivisionLimitSection {
	TArray<FSubdividedQuad> SubdividedQuads; // 0x0
};

struct FPSCPoolElem {
	UParticleSystemComponent* PSC; // 0x0
};

struct FDatacenterQosInstance {
	FQosDatacenterInfo Definition; // 0x0
	EQosDatacenterResult Result; // 0x38
	int32_t AvgPingMs; // 0x3c
	TArray<int32_t> PingResults; // 0x40
	FDateTime LastCheckTimestamp; // 0x58
	bool bUsable; // 0x60
};

struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneStringChannel StringCurve; // 0x58
};

struct FAdminListVirtualCurrencyTypesResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> VirtualCurrencies; // 0x8
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

struct FFontRenderInfo {
	char bClipText : 1; // 0x0
	char bEnableShadow : 1; // 0x0
	FDepthFieldGlowInfo GlowInfo; // 0x4
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
	float HistogramLogMin; // 0x28
	float HistogramLogMax; // 0x2c
	float CalibrationConstant; // 0x30
};

struct FGElementalFXOverride {
	FGElementalFX ElementalFX; // 0x0
	EGElementType RequiredElementType; // 0x10
	FGElementalState RequiredStates; // 0x18
	FGElementalState ExcludedStates; // 0x20
};

struct FRenderDataPerHeightmap {
	UTexture2D* OriginalHeightmap; // 0x0
	TArray<ULandscapeComponent*> Components; // 0x10
	FIntPoint TopLeftSectionBase; // 0x20
};

struct FAxisSettings {
	EAxis YawRotationAxis; // 0x0
	float BodyOrientationAlpha; // 0x4
};

struct FAnchorData {
	FMargin Offsets; // 0x0
	FAnchors Anchors; // 0x10
	FVector2D Alignment; // 0x20
};

struct FConstraintInstance {
	FName JointName; // 0x18
	FName ConstraintBone1; // 0x24
	FName ConstraintBone2; // 0x30
	FVector Pos1; // 0x3c
	FVector PriAxis1; // 0x48
	FVector SecAxis1; // 0x54
	FVector Pos2; // 0x60
	FVector PriAxis2; // 0x6c
	FVector SecAxis2; // 0x78
	FRotator AngularRotationOffset; // 0x84
	char bScaleLinearLimits : 1; // 0x90
	FConstraintProfileProperties ProfileInstance; // 0x98
};

struct FClientGetPaymentTokenResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString OrderId; // 0x8
	FString ProviderToken; // 0x18
};

struct FSplineInstanceData : FSceneComponentInstanceData {
	UObject* SourceComponentTemplate; // 0x8
	EComponentCreationMethod SourceComponentCreationMethod; // 0x10
	int32_t SourceComponentTypeSerializedIndex; // 0x14
	TArray<char> SavedProperties; // 0x18
	TArray<FActorComponentDuplicatedObjectData> DuplicatedObjects; // 0x28
	TArray<UObject*> ReferencedObjects; // 0x38
	TArray<FName> ReferencedNames; // 0x48
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x58
	bool bSplineHasBeenEdited; // 0xa8
	FSplineCurves SplineCurves; // 0xb0
	FSplineCurves SplineCurvesPreUCS; // 0x110
};

struct FBatchedLine {
	FVector Start; // 0x0
	FVector End; // 0xc
	FLinearColor Color; // 0x18
	float Thickness; // 0x28
	float RemainingLifeTime; // 0x2c
	char DepthPriority; // 0x30
};

struct FRigUnit_QuaternionToAngle : FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FVector Axis; // 0x28
	FQuat Argument; // 0x40
	float Angle; // 0x50
};

struct FCameraCutInfo {
	FVector Location; // 0x0
	float Timestamp; // 0xc
};

struct FIntVector {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Z; // 0x8
};

struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer {
	int32_t GroupIndex; // 0x10
	EAnimGroupRole GroupRole; // 0x14
	bool bIgnoreForRelevancyTest; // 0x15
	float BlendWeight; // 0x18
	float InternalTimeAccumulator; // 0x1c
	float X; // 0x30
	float Y; // 0x34
	float Z; // 0x38
	float PlayRate; // 0x3c
	bool bLoop; // 0x40
	bool bResetPlayTimeWhenBlendSpaceChanges; // 0x41
	float StartPosition; // 0x44
	UBlendSpaceBase* BlendSpace; // 0x48
	UBlendSpaceBase* PreviousBlendSpace; // 0xd8
	FPoseLink BasePose; // 0xe0
	int32_t LODThreshold; // 0xf0
	float Alpha; // 0xf4
	FInputScaleBias AlphaScaleBias; // 0xf8
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x100
	FName AlphaCurveName; // 0x148
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x154
	EAnimAlphaInputType AlphaInputType; // 0x188
	bool bAlphaBoolEnabled; // 0x189
};

struct FMultiplayerUpdateBuildAliasRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString AliasId; // 0x8
	FString AliasName; // 0x18
	TArray<UPlayFabJsonObject*> BuildSelectionCriteria; // 0x28
};

struct FMultiplayerEmptyResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerAwardSteamAchievementResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> AchievementResults; // 0x8
};

struct FClientGetPlayerStatisticVersionsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> StatisticVersions; // 0x8
};

struct FAdminGetCatalogItemsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
};

struct FPlayFabBaseModel {
	FPlayFabError responseError; // 0x0
	UPlayFabJsonObject* responseData; // 0x38
};

struct FMovieSceneGeometryCacheParams {
	UGeometryCache* GeometryCacheAsset; // 0x0
	FFrameNumber StartFrameOffset; // 0x8
	FFrameNumber EndFrameOffset; // 0xc
	float PlayRate; // 0x10
	char bReverse : 1; // 0x14
	float StartOffset; // 0x18
	float EndOffset; // 0x1c
	FSoftObjectPath GeometryCache; // 0x20
};

struct FAdminSetupPushNotificationRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Credential; // 0x8
	FString Key; // 0x18
	FString Name; // 0x28
	bool OverwriteOldARN; // 0x38
	EPushSetupPlatform Platform; // 0x39
};

struct FAdminGetCatalogItemsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Catalog; // 0x8
};

struct FXActionCustomState_Emote : FXActionCustomState {
	FPrimaryAssetId CosmeticEmoteId; // 0x8
	float EmoteDuration; // 0x20
};

struct FClientLinkGoogleAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMaterialInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FServerGrantCharacterToUserResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString CharacterId; // 0x8
};

struct FActorComponentTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x40
};

struct FUserPlatform {
	FString PlatformStr; // 0x0
};

struct FStructSerializerArrayTestStruct {
	TArray<int32_t> Int32Array; // 0x0
	int32_t StaticSingleElement; // 0x10
	int32_t StaticInt32Array[0x3]; // 0x14
	float StaticFloatArray[0x3]; // 0x20
	TArray<FVector> VectorArray; // 0x30
};

struct FMediaSoundComponentSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
};

struct FClientUninkOpenIdConnectRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString ConnectionId; // 0x8
};

struct FFullyLoadedPackagesInfo {
	EFullyLoadPackageType FullyLoadType; // 0x0
	FString Tag; // 0x8
	TArray<FName> PackagesToLoad; // 0x18
	TArray<UObject*> LoadedObjects; // 0x28
};

struct FMovieSceneFloatValue {
	float Value; // 0x0
	ERichCurveInterpMode InterpMode; // 0x4
	ERichCurveTangentMode TangentMode; // 0x5
	FMovieSceneTangentData Tangent; // 0x8
};

struct FAdminRunTaskResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString TaskInstanceId; // 0x8
};

struct FServerSetGameServerInstanceDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMarkerSyncData {
	TArray<FAnimSyncMarker> AuthoredSyncMarkers; // 0x0
};

struct FConstraintTarget {
	FTransform Transform; // 0x0
	float Weight; // 0x30
	bool bMaintainOffset; // 0x34
	FTransformFilter Filter; // 0x35
};

struct FAnimCurveBase {
	FName LastObservedName; // 0x0
	FSmartName Name; // 0xc
	int32_t CurveTypeFlags; // 0x1c
};

struct FVertexToMove {
	FVertexID VertexID; // 0x0
	FVector NewVertexPosition; // 0x4
};

struct FNiagaraVMExecutableDataId {
	FGuid CompilerVersionID; // 0x0
	ENiagaraScriptUsage ScriptUsageType; // 0x10
	FGuid ScriptUsageTypeID; // 0x14
	TArray<FString> AdditionalDefines; // 0x28
	FGuid BaseScriptID; // 0x38
	TArray<FGuid> ReferencedDependencyIds; // 0x48
};

struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString FacebookInstantGamesIds; // 0x8
};

struct FAnimNode_OrientationWarp : FAnimNode_Base {
	FPoseLink BasePose; // 0x10
	float LocomotionAngle; // 0x20
	FAxisSettings Settings; // 0x24
	TArray<FBoneRef> SpineBones; // 0x30
	FBoneReference IKFootRootBone; // 0x40
};

struct FGCategoryButtonStyle {
	FGCategoryButtonStyleState Default; // 0x0
	FGCategoryButtonStyleState Active; // 0x10
	FGCategoryButtonStyleState Locked; // 0x20
};

struct FRotationTrack {
	TArray<FQuat> RotKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FClientCreateSharedGroupRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString SharedGroupId; // 0x8
};

struct FPackedRGB10A2N {
	int32_t Packed; // 0x0
};

struct FCompositeSubFont : FCompositeFallbackFont {
	FTypeface Typeface; // 0x0
	float ScalingFactor; // 0x10
	TArray<FInt32Range> CharacterRanges; // 0x18
	FString Cultures; // 0x28
};

struct FAnimNode_AssetPlayerBase : FAnimNode_Base {
	int32_t GroupIndex; // 0x10
	EAnimGroupRole GroupRole; // 0x14
	bool bIgnoreForRelevancyTest; // 0x15
	float BlendWeight; // 0x18
	float InternalTimeAccumulator; // 0x1c
};

struct FAnimNode_BlendBoneByChannel : FAnimNode_Base {
	FPoseLink A; // 0x10
	FPoseLink B; // 0x20
	TArray<FBlendBoneByChannelEntry> BoneDefinitions; // 0x30
	float Alpha; // 0x50
	FInputScaleBias AlphaScaleBias; // 0x58
	EBoneControlSpace TransformsSpace; // 0x60
};

struct FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct {
	FFrameNumber Time; // 0x8
};

struct FServerUnlockContainerInstanceRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ContainerItemInstanceId; // 0x28
	FString KeyItemInstanceId; // 0x38
	FString PlayFabId; // 0x48
};

struct FXLootDataTableRow : FTableRowBase {
	TArray<FXLootDataTableRowWeights> WeightedEntries; // 0x8
};

struct FST_GridRef2D {
	int32_t X; // 0x0
	int32_t Y; // 0x4
};

struct FRollbackNetStartupActorInfo {
	UObject* Archetype; // 0x10
	ULevel* Level; // 0x30
	TArray<UObject*> ObjReferences; // 0x98
};

struct FVirtualTextureLayer {
	ETextureSourceFormat Format; // 0x0
	bool bCompressed; // 0x1
	bool bHasAlpha; // 0x2
	TextureCompressionSettings CompressionSettings; // 0x3
};

struct FClientLoginWithNintendoSwitchDeviceIdRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool CreateAccount; // 0x8
	FString EncryptedRequest; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x20
	FString NintendoSwitchDeviceId; // 0x28
	FString PlayerSecret; // 0x38
};

struct FXSavedCharacterState {
	FVector Position; // 0x0
	FRotator Rotation; // 0xc
	FRotator ViewRotation; // 0x18
	FVector Velocity; // 0x24
	bool bTeleported; // 0x30
	float ServerTime; // 0x34
	float ClientTime; // 0x38
};

struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FAdminModifyMatchmakerGameModesRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString BuildVersion; // 0x8
	TArray<UPlayFabJsonObject*> GameModes; // 0x18
};

struct FGShrineLootRow {
	AGGameMode* GameModeClass; // 0x0
	FDataTableRowHandle LootRow; // 0x8
};

struct FDatasmithTessellationOptions {
	float ChordTolerance; // 0x0
	float MaxEdgeLength; // 0x4
	float NormalTolerance; // 0x8
	EDatasmithCADStitchingTechnique StitchingTechnique; // 0xc
};

struct FEdgeToCreate {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
	TArray<FPolygonID> ConnectedPolygons; // 0x8
	FMeshElementAttributeList EdgeAttributes; // 0x18
	FEdgeID OriginalEdgeID; // 0x28
};

struct FBPVariableMetaDataEntry {
	FName DataKey; // 0x0
	FString DataValue; // 0x10
};

struct FBuilderPoly {
	TArray<int32_t> VertexIndices; // 0x0
	int32_t Direction; // 0x10
	FName ItemName; // 0x14
	int32_t PolyFlags; // 0x20
};

struct FClientGetStoreItemsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* MarketingData; // 0x18
	EPfSourceType Source; // 0x20
	TArray<UPlayFabJsonObject*> Store; // 0x28
	FString StoreId; // 0x38
};

struct FClientEmptyResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAdminAddPlayerTagResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAnimNode_Mirror : FAnimNode_Base {
	FPoseLink BasePose; // 0x10
	UMirrorTable* MirrorTable; // 0x20
};

struct FClientLinkGoogleAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool ForceLink; // 0x8
	FString ServerAuthCode; // 0x10
};

struct FNiagaraScriptDataInterfaceCompileInfo {
	FName Name; // 0x0
	int32_t UserPtrIdx; // 0xc
	FNiagaraTypeDefinition Type; // 0x10
	TArray<FNiagaraFunctionSignature> RegisteredFunctions; // 0x28
	FName RegisteredParameterMapRead; // 0x38
	FName RegisteredParameterMapWrite; // 0x44
	bool bIsPlaceholder; // 0x50
};

struct FVector_NetQuantizeNormal : FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FParameterGroupData {
	FString GroupName; // 0x0
	int32_t GroupSortPriority; // 0x10
};

struct FFontCharacter {
	int32_t StartU; // 0x0
	int32_t StartV; // 0x4
	int32_t USize; // 0x8
	int32_t VSize; // 0xc
	char TextureIndex; // 0x10
	int32_t VerticalOffset; // 0x14
};

struct FServerSetGameServerInstanceStateResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FRigUnit_ConvertRotation : FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FRotator Input; // 0x28
	FQuat Result; // 0x40
};

struct FAdminGetCloudScriptRevisionResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString CreatedAt; // 0x8
	TArray<UPlayFabJsonObject*> Files; // 0x18
	bool IsPublished; // 0x28
	int32_t Revision; // 0x2c
	int32_t Version; // 0x30
};

struct FGPingReactionInfo {
	int32_t SquadMateID; // 0x0
	EGPingReactionType PingReactionType; // 0x4
	float Timestamp; // 0x8
};

struct FMultiplayerJoinMatchmakingTicketResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientExecuteCloudScriptRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString FunctionName; // 0x8
	UPlayFabJsonObject* FunctionParameter; // 0x18
	bool GeneratePlayStreamEvent; // 0x20
	ECloudScriptRevisionOption RevisionSelection; // 0x21
	int32_t SpecificRevision; // 0x24
};

struct FVectorParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	FLinearColor ParameterValue; // 0x14
	FGuid ExpressionGUID; // 0x24
};

struct FGameNameRedirect {
	FName OldGameName; // 0x0
	FName NewGameName; // 0xc
};

struct FMovieSceneFloatValueSerializationHelper {
	float Value; // 0x0
	ERichCurveInterpMode InterpMode; // 0x4
	ERichCurveTangentMode TangentMode; // 0x5
	FMovieSceneTangentDataSerializationHelper Tangent; // 0x8
};

struct FClientLoginWithKongregateRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString AuthTicket; // 0x8
	bool CreateAccount; // 0x18
	FString EncryptedRequest; // 0x20
	UPlayFabJsonObject* InfoRequestParameters; // 0x30
	FString KongregateId; // 0x38
	FString PlayerSecret; // 0x48
};

struct FRootMotionSourceSettings {
	char Flags; // 0x0
};

struct FRigUnit_Divide_FloatFloat : FRigUnit_BinaryFloatOp {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	float Argument0; // 0x28
	float Argument1; // 0x2c
	float Result; // 0x30
};

struct FSkeletalMeshSamplingRegionBoneFilter {
	FName BoneName; // 0x0
	char bIncludeOrExclude : 1; // 0xc
	char bApplyToChildren : 1; // 0xc
};

struct FAdminIncrementPlayerStatisticVersionResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* StatisticVersion; // 0x8
};

struct FAdminGetAllSegmentsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FRBFParams {
	int32_t TargetDimensions; // 0x0
	float Radius; // 0x4
	ERBFFunctionType Function; // 0x8
	ERBFDistanceMethod DistanceMethod; // 0x9
	EBoneAxis TwistAxis; // 0xa
	float WeightThreshold; // 0xc
};

struct FFrameRate {
	int32_t Numerator; // 0x0
	int32_t Denominator; // 0x4
};

struct FBlueprintComponentChangedPropertyInfo {
	FName PropertyName; // 0x0
	int32_t ArrayIndex; // 0xc
	UStruct* PropertyScope; // 0x10
};

struct FAdminUpdatePlayerSharedSecretRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool Disabled; // 0x8
	FString FriendlyName; // 0x10
	FString SecretKey; // 0x20
};

struct FMultiplayerRolloverContainerRegistryCredentialsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString DnsName; // 0x8
	FString Password; // 0x18
	FString Username; // 0x28
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

struct FFormatArgumentData {
	FString ArgumentName; // 0x0
	EFormatArgumentType ArgumentValueType; // 0x10
	FText ArgumentValue; // 0x18
	int32_t ArgumentValueInt; // 0x30
	float ArgumentValueFloat; // 0x34
	ETextGender ArgumentValueGender; // 0x38
};

struct FDatasmithMeshSectionInfoMapTemplate {
	TMap<uint32_t, FDatasmithMeshSectionInfoTemplate> Map; // 0x0
};

struct FRenderingPolygonGroup {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
};

struct FVector_NetQuantize : FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FClientUnlinkKongregateAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAkAdvancedSpatialAudioSettings {
	float DiffractionShadowAttenuationFactor; // 0x0
	float DiffractionShadowDegrees; // 0x4
};

struct FServerEmptyResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerGetPlayFabIDsFromSteamIDsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString SteamStringIDs; // 0x8
};

struct FAnimNode_WheelHandler : FAnimNode_SkeletalControlBase {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int32_t LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float Alpha; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8c
};

struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base {
	TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComponent; // 0x10
	bool bUseAttachedParent; // 0x18
	bool bCopyCurves; // 0x19
};

struct FMovieSceneTransformMask {
	uint32_t Mask; // 0x0
};

struct FServerGetCharacterInventoryRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString PlayFabId; // 0x28
};

struct FAdminDeletePlayerSharedSecretResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FNamedFloat {
	float Value; // 0x0
	FName Name; // 0x4
};

struct FClientGetCharacterInventoryRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
};

struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct {
	FVector Scale; // 0x8
	FFrameNumber Time; // 0x14
};

struct FGSpellTypeTagEntry {
	EGWeaponType SpellType; // 0x0
	FGameplayTag SpellTag; // 0x4
};

struct FMovieSceneBytePropertySectionTemplate : FMovieScenePropertySectionTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneByteChannel ByteCurve; // 0x58
};

struct FXScaledEffectClass {
	UXGameplayEffect* EffectClass; // 0x0
	float Scale; // 0x8
	float DurationScale; // 0xc
	bool bClientAutonomous; // 0x10
};

struct FClientGetTimeResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString Time; // 0x8
};

struct FExpandableAreaStyle : FSlateWidgetStyle {
	FSlateBrush CollapsedImage; // 0x8
	FSlateBrush ExpandedImage; // 0x98
	float RolloutAnimationSeconds; // 0x128
};

struct FServerAuthenticateSessionTicketResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* UserInfo; // 0x8
};

struct FLandscapeProxyMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FClientRemoveSharedGroupMembersRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabIds; // 0x8
	FString SharedGroupId; // 0x18
};

struct FMovieSceneEventSectionData : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FEventPayload> KeyValues; // 0x18
};

struct FMovieSceneEventTemplateBase : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	TArray<FMovieSceneObjectBindingID> EventReceivers; // 0x20
	char bFireEventsWhenForwards : 1; // 0x30
	char bFireEventsWhenBackwards : 1; // 0x30
};

struct FGRuneItemDataTableRow : FXItemDataTableRow {
	FText DisplayName; // 0x8
	FText Description; // 0x20
	UTexture2D* IconTexture; // 0x38
	EXRarity Rarity; // 0x40
	TArray<FName> GameplayTags; // 0x48
	int32_t MaxStackSize; // 0x58
	bool bAutoPickup; // 0x5c
	bool bDestroyOnDrop; // 0x5d
	bool bDropOnUnequip; // 0x5e
	bool bAutoUnequip; // 0x5f
	int32_t Amount; // 0x60
	EGRuneType RuneType; // 0x68
	FString SkillClass; // 0x70
	TArray<FXScaledEffectClassJSON> PassiveEffects; // 0x80
	FText DynamicTutorialText; // 0x90
	FText DynamicTutorialText_Aiming; // 0xa8
};

struct FBlueprintEditorPromotionSettings {
	FFilePath FirstMeshPath; // 0x0
	FFilePath SecondMeshPath; // 0x10
	FFilePath DefaultParticleAsset; // 0x20
};

struct FGTutorialCosmetic {
	FPrimaryAssetId AssetId; // 0x0
	UTexture2D* PortraitTexture; // 0x18
};

struct FTextBlockStyle : FSlateWidgetStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x60
	FVector2D ShadowOffset; // 0x88
	FLinearColor ShadowColorAndOpacity; // 0x90
	FSlateColor SelectedBackgroundColor; // 0xa0
	FLinearColor HighlightColor; // 0xc8
	FSlateBrush HighlightShape; // 0xd8
	FSlateBrush StrikeBrush; // 0x168
	FSlateBrush UnderlineBrush; // 0x1f8
	ETextConvertCaseMode ConvertCase; // 0x288
	bool bShowDisabledEffect; // 0x289
};

struct FActiveForceFeedbackEffect {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x0
};

struct FAnimPhysSphericalLimit {
	FBoneReference DrivingBone; // 0x0
	FVector SphereLocalOffset; // 0x14
	float LimitRadius; // 0x20
	ESphericalLimitType LimitType; // 0x24
};

struct FServerBanUsersResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FTimeStretchCurveMarker {
	float Time[0x3]; // 0x0
	float Alpha; // 0xc
};

struct FClientGetStoreItemsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
	FString StoreId; // 0x18
};

struct FCachedKeyToActionInfo {
	UPlayerInput* PlayerInput; // 0x0
};

struct FGCachedPingData {
	bool bMapPing; // 0x0
	bool bHasFocusPing; // 0x1
	AGPingBase* FocusPing; // 0x8
	bool bHasActor; // 0x10
	AActor* Actor; // 0x18
	bool bHasLocation; // 0x20
	FVector Location; // 0x24
};

struct FRigUnit_Subtract_VectorVector : FRigUnit_BinaryVectorOp {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FVector Argument0; // 0x28
	FVector Argument1; // 0x34
	FVector Result; // 0x40
};

struct FClassRedirect {
	FName ObjectName; // 0x0
	FName OldClassName; // 0xc
	FName NewClassName; // 0x18
	FName OldSubobjName; // 0x24
	FName NewSubobjName; // 0x30
	FName NewClassClass; // 0x3c
	FName NewClassPackage; // 0x48
	bool InstanceOnly; // 0x54
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

struct FClientUnlockContainerItemResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> GrantedItems; // 0x8
	FString UnlockedItemInstanceId; // 0x18
	FString UnlockedWithItemInstanceId; // 0x28
	UPlayFabJsonObject* VirtualCurrency; // 0x38
};

struct FClientUpdateCharacterDataRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CharacterId; // 0x8
	UPlayFabJsonObject* Data; // 0x18
	FString KeysToRemove; // 0x20
	EUserDataPermission Permission; // 0x30
};

struct FServerGetLeaderboardAroundUserRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t MaxResultsCount; // 0x8
	FString PlayFabId; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x20
	FString StatisticName; // 0x28
	bool UseSpecificVersion; // 0x38
	int32_t Version; // 0x3c
};

struct FRigUnit_FABRIK : FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FRigHierarchyRef HierarchyRef; // 0x28
	FName StartJoint; // 0x40
	FName EndJoint; // 0x4c
	float Precision; // 0x58
	int32_t MaxIterations; // 0x5c
};

struct FAutoCompleteCommand {
	FString Command; // 0x0
	FString Desc; // 0x10
};

struct FXBakedSplineMesh {
	AXBakeableSplineMesh* ParentActor; // 0x0
	UStaticMesh* StaticMesh; // 0x20
	FName Key; // 0x28
};

struct FClientRemoveSharedGroupMembersResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FXServerMoveExpectedResult : FXServerMoveExpectedResult_NoBase {
	FVector_NetQuantize100 PositionResult; // 0x0
	char MovementModeResult; // 0xc
	UXAction* ExpectedAction; // 0x10
	char ExpectedActionTime; // 0x18
	UPrimitiveComponent* ClientMovementBase; // 0x20
	FName ClientBaseBoneName; // 0x28
};

struct FServerModifyItemUsesRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString ItemInstanceId; // 0x8
	FString PlayFabId; // 0x18
	int32_t UsesToAdd; // 0x28
};

struct FXLandscapeComponentCache {
	TMap<FName, FXLandscapeLayerCache> LayerCacheMap; // 0x0
};

struct FSkeletalMeshComponentEndPhysicsTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x40
};

struct FMaterialRemapIndex {
	uint32_t ImportVersionKey; // 0x0
	TArray<int32_t> MaterialRemap; // 0x8
};

struct FXWeaponFireModeData {
	float RandomAngleSpreadIncreasedByShots; // 0x0
	float RandomAngleSpreadIncreasedByMoving; // 0x4
	float RandomAngleSpreadIncreasedByFalling; // 0x8
	float TimeSinceLastFire; // 0xc
	float ViewKickAlpha; // 0x10
	FRotator ViewKickLastShot; // 0x14
	FRotator CurrentViewKick; // 0x20
};

struct FPlane : FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FProfilesGetEntityProfilesRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool DataAsObject; // 0x8
	TArray<UPlayFabJsonObject*> Entities; // 0x10
};

struct FStructSerializerMapTestStruct {
	TMap<int32_t, FString> IntToStr; // 0x0
	TMap<FString, FString> StrToStr; // 0x50
	TMap<FString, FVector> StrToVec; // 0xa0
};

struct FAnimNode_LiveLinkPose : FAnimNode_Base {
	FName SubjectName; // 0x10
	ULiveLinkRetargetAsset* RetargetAsset; // 0x20
	ULiveLinkRetargetAsset* CurrentRetargetAsset; // 0x28
};

struct FServerGetPlayFabIDsFromPSNAccountIDsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t IssuerId; // 0x8
	FString PSNAccountIDs; // 0x10
};

struct FRigUnit_Example : FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FString TestInputString; // 0x28
	FEulerTransform TestInOutTransform; // 0x38
	FVector TestInputVector; // 0x5c
	int32_t TestInputInteger; // 0x68
	UObject* TestInputObject; // 0x70
	FVector TestOutputVector; // 0x78
	float TestInputFloat; // 0x84
	TArray<float> TestInputFloatArray; // 0x88
	TArray<FTransform> TestInputTransformArray; // 0x98
	FRigHierarchyRef HierarchyRef; // 0xa8
	float TestOutputFloat; // 0xc0
	FRigUnitReference_Example TestUnitReferenceInput; // 0xc8
	FRigUnitReference_Example TestUnitReferenceOutput; // 0xd0
};

struct FPrefabLODSettings {
	float ScreenSize; // 0x0
	float ClusterDesiredBoundsRadius; // 0x4
	float ClusterDesiredFillingPercentage; // 0x8
	int32_t MinActorsToCluster; // 0xc
	bool bReusePreviousLevelClusters; // 0x10
	bool bForceSingleCluster; // 0x11
	bool bSimplifyMeshAndMaterials; // 0x12
	FMeshProxySettings SimplifySettings; // 0x14
	FMeshMergingSettings MergeSettings; // 0xa8
};

struct FAdminGetPlayerTagsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Namespace; // 0x8
	FString PlayFabId; // 0x18
};

struct FAnimationHierarchy : FNodeHierarchyWithUserData {
	FNodeHierarchyData Hierarchy; // 0x8
	TArray<FConstraintNodeData> UserData; // 0x78
};

struct FGPlayerDeathInfo {
	FString VictimName; // 0x0
	FString KillerName; // 0x10
	bool bIsVictim; // 0x20
	bool bVictimIsAlly; // 0x21
	bool bIsKiller; // 0x22
	bool bIsAssist; // 0x23
	bool bKillerIsAlly; // 0x24
	bool bIsDeath; // 0x25
	bool bIsDisconnect; // 0x26
	bool bIsSelfKill; // 0x27
	FGameplayTagContainer DamageCauserTags; // 0x28
	uint16_t DamageContribution; // 0x48
};

struct FXElementalFXDef_Sound : FXElementalFXDef {
	bool bUseRadiusRange; // 0x0
	FVector2D ValidRadiusRange; // 0x4
	FXElementalVector Offset; // 0xc
	FXElementalRotator Rotation; // 0x38
	FXElementalVector Size; // 0x58
	bool bNormalizeSize; // 0x84
	FVector BaseSize; // 0x88
	TArray<FXElementalFXParam> StaticParameters; // 0x98
	FGameplayTagContainer RequiredTags; // 0xa8
	FGameplayTagContainer IgnoredTags; // 0xc8
	UAkAudioEvent* Event; // 0xe8
	bool bAttached; // 0xf0
	float FadeOutDuration; // 0xf4
	int32_t EventInstanceID; // 0xf8
};

struct FAdminResolvePurchaseDisputeResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString PurchaseStatus; // 0x8
};

struct FMovieSceneEvaluationTrackSegments {
	TArray<int32_t> SegmentIdentifierToIndex; // 0x0
	TArray<FMovieSceneSegment> SortedSegments; // 0x10
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

struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int32_t LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float Alpha; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8c
	FTransform EffectorTransform; // 0xd0
	FBoneSocketTarget EffectorTarget; // 0x100
	FBoneReference TipBone; // 0x170
	FBoneReference RootBone; // 0x184
	float Precision; // 0x198
	int32_t MaxIterations; // 0x19c
	EBoneControlSpace EffectorTransformSpace; // 0x1a0
	EBoneRotationSource EffectorRotationSource; // 0x1a1
};

struct FBlueprintWidgetAnimationDelegateBinding {
	EWidgetAnimationEvent Action; // 0x0
	FName AnimationToBind; // 0x4
	FName FunctionNameToBind; // 0x10
	FName UserTag; // 0x1c
};

struct FInputRange {
	float Min; // 0x0
	float Max; // 0x4
};

struct FAdminGetContentUploadUrlResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString URL; // 0x8
};

struct FDatasmithStaticParameterSetTemplate {
	TMap<FName, bool> StaticSwitchParameters; // 0x0
};

struct FAttributesForEdge {
	FEdgeID EdgeID; // 0x0
	FMeshElementAttributeList EdgeAttributes; // 0x8
};

struct FGWindExplosionEntry {
	AGEffectSphere* SphereClass; // 0x0
	FGElementalState RequiredStates; // 0x8
	FGElementalState ExcludedStates; // 0x10
};

struct FXGameSignificanceManagerThreshold {
	float Distance; // 0x0
	EXGameSignificanceLevel Level; // 0x4
};

struct FSubtitleCue {
	FText Text; // 0x0
	float Time; // 0x18
};

struct FCompositeSection : FAnimLinkableElement {
	UAnimMontage* LinkedMontage; // 0x8
	int32_t SlotIndex; // 0x10
	int32_t SegmentIndex; // 0x14
	EAnimLinkMethod LinkMethod; // 0x18
	EAnimLinkMethod CachedLinkMethod; // 0x19
	float SegmentBeginTime; // 0x1c
	float SegmentLength; // 0x20
	float LinkValue; // 0x24
	UAnimSequenceBase* LinkedSequence; // 0x28
	FName SectionName; // 0x30
	float StartTime; // 0x3c
	FName NextSectionName; // 0x40
	TArray<UAnimMetaData*> MetaData; // 0x50
};

struct FLevelCollection {
	AGameStateBase* GameState; // 0x8
	UNetDriver* NetDriver; // 0x10
	UDemoNetDriver* DemoNetDriver; // 0x18
	ULevel* PersistentLevel; // 0x20
	TSet<ULevel*> Levels; // 0x28
};

struct FClientConfirmPurchaseRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString OrderId; // 0x8
};

struct FServerGetLeaderboardRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t MaxResultsCount; // 0x8
	UPlayFabJsonObject* ProfileConstraints; // 0x10
	int32_t StartPosition; // 0x18
	FString StatisticName; // 0x20
	bool UseSpecificVersion; // 0x30
	int32_t Version; // 0x34
};

struct FMovieSceneEnumPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneByteChannel EnumCurve; // 0x58
};

struct FAdminGetMatchmakerGameModesRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString BuildVersion; // 0x8
};

struct FDetectedFace : FDetectedFeatureRegion {
	float Confidence; // 0x0
	TArray<FVector2D> Points; // 0x8
	FBox2D BoundingBox; // 0x18
	TArray<FDetectedFaceFeature2D> Features; // 0x30
	TArray<FDetectedFaceFeatureRegion> FeatureRegions; // 0x40
};

struct FActiveHapticFeedbackEffect {
	UHapticFeedbackEffect_Base* HapticEffect; // 0x0
};

struct FInputAxisKeyMapping {
	FName AxisName; // 0x0
	float Scale; // 0xc
	FKey Key; // 0x10
};

struct FAdminGetPlayerSegmentsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FAnimationEventBinding {
	UWidgetAnimation* Animation; // 0x0
	DelegateProperty Delegate; // 0x8
	EWidgetAnimationEvent AnimationEvent; // 0x1c
	FName UserTag; // 0x20
};

struct FClientGetCharacterInventoryResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString CharacterId; // 0x8
	TArray<UPlayFabJsonObject*> Inventory; // 0x18
	UPlayFabJsonObject* VirtualCurrency; // 0x28
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x30
};

struct FClientUnlinkIOSDeviceIDRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString DeviceID; // 0x8
};

struct FCloudScriptExecuteCloudScriptResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	int32_t APIRequestsIssued; // 0x8
	UPlayFabJsonObject* Error; // 0x10
	int32_t ExecutionTimeSeconds; // 0x18
	FString FunctionName; // 0x20
	UPlayFabJsonObject* FunctionResult; // 0x30
	bool FunctionResultTooLarge; // 0x38
	int32_t HttpRequestsIssued; // 0x3c
	TArray<UPlayFabJsonObject*> Logs; // 0x40
	bool LogsTooLarge; // 0x50
	int32_t MemoryConsumedBytes; // 0x54
	int32_t ProcessorTimeSeconds; // 0x58
	int32_t Revision; // 0x5c
};

struct FInterpCurvePointLinearColor {
	float InVal; // 0x0
	FLinearColor OutVal; // 0x4
	FLinearColor ArriveTangent; // 0x14
	FLinearColor LeaveTangent; // 0x24
	EInterpCurveMode InterpMode; // 0x34
};

struct FMultiplayerListMultiplayerServersRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString BuildId; // 0x8
	int32_t PageSize; // 0x18
	FString Region; // 0x20
	FString SkipToken; // 0x30
};

struct FRenderingPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FGBoonTier {
	int32_t Weight; // 0x0
	TArray<UGBoonGenerator*> Generators; // 0x8
	bool bIsStarterTier; // 0x18
};

struct FProfilesGetEntityProfileRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool DataAsObject; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
};

struct FBlendBoneByChannelEntry {
	FBoneReference SourceBone; // 0x0
	FBoneReference TargetBone; // 0x14
	bool bBlendTranslation; // 0x28
	bool bBlendRotation; // 0x29
	bool bBlendScale; // 0x2a
};

struct FRootMotionSourceGroup {
	char bHasAdditiveSources : 1; // 0xe8
	char bHasOverrideSources : 1; // 0xe8
	char bIsAdditiveVelocityApplied : 1; // 0xe8
	FRootMotionSourceSettings LastAccumulatedSettings; // 0xe9
	FVector_NetQuantize10 LastPreAdditiveVelocity; // 0xec
};

struct FMovieSceneTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieScene3DTransformTemplateData TemplateData; // 0x58
};

struct FProfilesSetGlobalPolicyRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	TArray<UPlayFabJsonObject*> Permissions; // 0x8
};

struct FAnimationSharingScalability {
	FPerPlatformBool UseBlendTransitions; // 0x0
	FPerPlatformFloat BlendSignificanceValue; // 0x4
	FPerPlatformInt MaximumNumberConcurrentBlends; // 0x8
	FPerPlatformFloat TickSignificanceValue; // 0xc
};

struct FMultiplayerListServerBackfillTicketsForPlayerResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString TicketIds; // 0x8
};

struct FXAnimNode_SpeedWarp : FAnimNode_SkeletalControlBase {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int32_t LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float Alpha; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8c
	FBoneReference IKFootRootBone; // 0xd0
	TArray<FXIKBones> FootDefinitions; // 0xe8
	FBoneReference PelvisBone; // 0xf8
	EAxis VelocityAxis; // 0x10c
	float SpeedScaling; // 0x110
	float PelvisAdjustmentAlpha; // 0x114
	float MaxIterations; // 0x118
	FXPelvisAdjustmentInterp PelvisAdjustmentInterp; // 0x11c
};

struct FGClashMatchStatEntry {
	int32_t PlayerId; // 0x0
	FGenericTeamId TeamId; // 0x4
	FString PlayerPublicBlobData; // 0x8
	FString PlayerDisplayName; // 0x18
	int32_t KillCount; // 0x28
	int32_t DeathCount; // 0x2c
	int32_t AssistCount; // 0x30
	int32_t DamageInflicted; // 0x34
};

struct FLevelSequenceObject {
	UObject* ObjectOrOwner; // 0x0
	FString ComponentName; // 0x20
	TWeakObjectPtr<UObject> CachedComponent; // 0x30
};

struct FServerGetLeaderboardAroundCharacterResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FIntegralKey {
	float Time; // 0x0
	int32_t Value; // 0x4
};

struct FBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; // 0x0
	char bExecuteWhenPaused : 1; // 0x0
	char bOverrideParentBinding : 1; // 0x0
	FKey AxisKey; // 0x8
	FName FunctionNameToBind; // 0x28
};

struct FRootMotionSource {
	uint16_t Priority; // 0x10
	uint16_t LocalID; // 0x12
	ERootMotionAccumulateMode AccumulateMode; // 0x14
	FName InstanceName; // 0x18
	float StartTime; // 0x24
	float CurrentTime; // 0x28
	float PreviousTime; // 0x2c
	float Duration; // 0x30
	FRootMotionSourceStatus Status; // 0x34
	FRootMotionSourceSettings Settings; // 0x35
	bool bInLocalSpace; // 0x36
	FRootMotionMovementParams RootMotionParams; // 0x40
	FRootMotionFinishVelocitySettings FinishVelocityParams; // 0x80
};

struct FXActionState {
	UXAction* Action; // 0x0
	AActor* ActionOwner; // 0x18
	FGameplayTagContainer Tags; // 0x20
	TArray<FXActionTaggedPeriod> TaggedPeriods; // 0x40
	int32_t Stamp; // 0x50
	UAnimMontage* Montage; // 0x58
	UXActionComponent* OwnerComponent; // 0x60
	float PrevPlayhead; // 0x68
	float Playhead; // 0x6c
	float LastMontagePosition; // 0x70
	float Duration; // 0x74
	float SpeedScale; // 0x78
	float MaxLookbackTime; // 0x7c
	TArray<FXActionPhase> OverridePhases; // 0x80
	TArray<FXGameplayEffectHandle> AppliedActionEffects; // 0x90
};

struct FDatasmithMeshSectionInfoTemplate {
	int32_t MaterialIndex; // 0x0
};

struct FServerWriteEventResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString EventId; // 0x8
};

struct FGroupsUpdateGroupResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString OperationReason; // 0x8
	int32_t ProfileVersion; // 0x18
	EOperationTypes SetResult; // 0x1c
};

struct FDataFinalizeFileUploadsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
	FString FileNames; // 0x10
};

struct FServerGrantItemsToUsersRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
	TArray<UPlayFabJsonObject*> ItemGrants; // 0x18
};

struct FMovieSceneEasingSettings {
	int32_t AutoEaseInDuration; // 0x0
	int32_t AutoEaseOutDuration; // 0x4
	TScriptInterface<Class> EaseIn; // 0x8
	bool bManualEaseIn; // 0x18
	int32_t ManualEaseInDuration; // 0x1c
	TScriptInterface<Class> EaseOut; // 0x20
	bool bManualEaseOut; // 0x30
	int32_t ManualEaseOutDuration; // 0x34
};

struct FRotator {
	float Pitch; // 0x0
	float Yaw; // 0x4
	float Roll; // 0x8
};

struct FAnimNode_SubInstance : FAnimNode_Base {
	FPoseLink InPose; // 0x10
	UAnimInstance* InstanceClass; // 0x20
	FName Tag; // 0x28
	TArray<FName> SourcePropertyNames; // 0x38
	TArray<FName> DestPropertyNames; // 0x48
	UAnimInstance* InstanceToRun; // 0x58
	TArray<UProperty*> InstanceProperties; // 0x60
	TArray<UProperty*> SubInstanceProperties; // 0x70
};

struct FServerReportPlayerServerRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Comment; // 0x8
	FString ReporteeId; // 0x18
	FString ReporterId; // 0x28
};

struct FServerGetPlayerProfileResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* PlayerProfile; // 0x8
};

struct FClientConsumePSNEntitlementsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> ItemsGranted; // 0x8
};

struct FGAxisDisplayNameMapping {
	FText PositiveString; // 0x0
	FText NegativeString; // 0x18
};

struct FServerUpdateSharedGroupDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FGSpeakerDefinitionDataTableRow : FTableRowBase {
	FText DisplayName; // 0x8
	FText Title; // 0x20
	TMap<FGameplayTag, UTexture2D*> Avatars; // 0x38
};

struct FGClashMatchTeamStats {
	TMap<FString, FGClashMatchStatEntry> Stats; // 0x0
};

struct FVector2D {
	float X; // 0x0
	float Y; // 0x4
};

struct FXColorsByPalette {
	TMap<FGameplayTag, FLinearColor> ColorsByPalette; // 0x0
};

struct FServerGetPlayFabIDsFromFacebookIDsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FConstraint {
	FBoneReference TargetBone; // 0x0
	EConstraintOffsetOption OffsetOption; // 0x14
	ETransformConstraintType TransformType; // 0x15
	FFilterOptionPerAxis PerAxis; // 0x16
};

struct FAdminUpdateRandomResultTablesRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
	TArray<UPlayFabJsonObject*> Tables; // 0x18
};

struct FMultiplayerListContainerImagesResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString Images; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FNiagaraTestStruct {
	FVector Vector1; // 0x0
	FVector Vector2; // 0xc
	FNiagaraTestStructInner InnerStruct1; // 0x18
	FNiagaraTestStructInner InnerStruct2; // 0x30
};

struct FRigUnit_ConvertTransform : FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FTransform Input; // 0x30
	FEulerTransform Result; // 0x60
};

struct FAkPropertyToControl {
	FString ItemProperty; // 0x0
};

struct FGroupsDeleteGroupRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Group; // 0x8
};

struct FServerGetPlayerTagsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString PlayFabId; // 0x8
	FString Tags; // 0x18
};

struct FGTrackedCharacterStats {
	float TrackingIndex; // 0x0
	FTransform TrackedTransform; // 0x10
	float TrackedHealth; // 0x40
	float TrackedArmor; // 0x44
	float TrackedMana; // 0x48
	FRotator TrackedCameraRotation; // 0x4c
	bool bValid; // 0x58
};

struct FAIPredictionEvent {
	AActor* Requestor; // 0x0
	AActor* PredictedActor; // 0x8
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
	char bOverride_SceneColorTint : 1; // 0x5
	char bOverride_SceneFringeIntensity : 1; // 0x5
	char bOverride_ChromaticAberrationStartOffset : 1; // 0x5
	char bOverride_AmbientCubemapTint : 1; // 0x5
	char bOverride_AmbientCubemapIntensity : 1; // 0x5
	char bOverride_BloomMethod : 1; // 0x6
	char bOverride_BloomIntensity : 1; // 0x6
	char bOverride_BloomThreshold : 1; // 0x6
	char bOverride_Bloom1Tint : 1; // 0x6
	char bOverride_Bloom1Size : 1; // 0x6
	char bOverride_Bloom2Size : 1; // 0x6
	char bOverride_Bloom2Tint : 1; // 0x6
	char bOverride_Bloom3Tint : 1; // 0x6
	char bOverride_Bloom3Size : 1; // 0x7
	char bOverride_Bloom4Tint : 1; // 0x7
	char bOverride_Bloom4Size : 1; // 0x7
	char bOverride_Bloom5Tint : 1; // 0x7
	char bOverride_Bloom5Size : 1; // 0x7
	char bOverride_Bloom6Tint : 1; // 0x7
	char bOverride_Bloom6Size : 1; // 0x7
	char bOverride_BloomSizeScale : 1; // 0x7
	char bOverride_BloomConvolutionTexture : 1; // 0x8
	char bOverride_BloomConvolutionSize : 1; // 0x8
	char bOverride_BloomConvolutionCenterUV : 1; // 0x8
	char bOverride_BloomConvolutionPreFilter : 1; // 0x8
	char bOverride_BloomConvolutionPreFilterMin : 1; // 0x8
	char bOverride_BloomConvolutionPreFilterMax : 1; // 0x8
	char bOverride_BloomConvolutionPreFilterMult : 1; // 0x8
	char bOverride_BloomConvolutionBufferScale : 1; // 0x8
	char bOverride_BloomDirtMaskIntensity : 1; // 0x9
	char bOverride_BloomDirtMaskTint : 1; // 0x9
	char bOverride_BloomDirtMask : 1; // 0x9
	char bOverride_CameraShutterSpeed : 1; // 0x9
	char bOverride_CameraISO : 1; // 0x9
	char bOverride_AutoExposureMethod : 1; // 0x9
	char bOverride_AutoExposureLowPercent : 1; // 0x9
	char bOverride_AutoExposureHighPercent : 1; // 0x9
	char bOverride_AutoExposureMinBrightness : 1; // 0xa
	char bOverride_AutoExposureMaxBrightness : 1; // 0xa
	char bOverride_AutoExposureCalibrationConstant : 1; // 0xa
	char bOverride_AutoExposureSpeedUp : 1; // 0xa
	char bOverride_AutoExposureSpeedDown : 1; // 0xa
	char bOverride_AutoExposureBias : 1; // 0xa
	char bOverride_AutoExposureBiasCurve : 1; // 0xa
	char bOverride_AutoExposureMobileBias : 1; // 0xa
	char bOverride_HistogramLogMin : 1; // 0xb
	char bOverride_HistogramLogMax : 1; // 0xb
	char bOverride_LensFlareIntensity : 1; // 0xb
	char bOverride_LensFlareTint : 1; // 0xb
	char bOverride_LensFlareTints : 1; // 0xb
	char bOverride_LensFlareBokehSize : 1; // 0xb
	char bOverride_LensFlareBokehShape : 1; // 0xb
	char bOverride_LensFlareThreshold : 1; // 0xb
	char bOverride_VignetteIntensity : 1; // 0xc
	char bOverride_GrainIntensity : 1; // 0xc
	char bOverride_GrainJitter : 1; // 0xc
	char bOverride_AmbientOcclusionIntensity : 1; // 0xc
	char bOverride_AmbientOcclusionStaticFraction : 1; // 0xc
	char bOverride_AmbientOcclusionRadius : 1; // 0xc
	char bOverride_AmbientOcclusionFadeDistance : 1; // 0xc
	char bOverride_AmbientOcclusionFadeRadius : 1; // 0xc
	char bOverride_AmbientOcclusionDistance : 1; // 0xd
	char bOverride_AmbientOcclusionRadiusInWS : 1; // 0xd
	char bOverride_AmbientOcclusionPower : 1; // 0xd
	char bOverride_AmbientOcclusionBias : 1; // 0xd
	char bOverride_AmbientOcclusionQuality : 1; // 0xd
	char bOverride_AmbientOcclusionMipBlend : 1; // 0xd
	char bOverride_AmbientOcclusionMipScale : 1; // 0xd
	char bOverride_AmbientOcclusionMipThreshold : 1; // 0xd
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
	char bOverride_DepthOfFieldMaxBokehSize : 1; // 0x17
	char bOverride_DepthOfFieldNearBlurSize : 1; // 0x17
	char bOverride_DepthOfFieldFarBlurSize : 1; // 0x18
	char bOverride_DepthOfFieldMethod : 1; // 0x18
	char bOverride_MobileHQGaussian : 1; // 0x18
	char bOverride_DepthOfFieldBokehShape : 1; // 0x18
	char bOverride_DepthOfFieldOcclusion : 1; // 0x18
	char bOverride_DepthOfFieldColorThreshold : 1; // 0x18
	char bOverride_DepthOfFieldSizeThreshold : 1; // 0x18
	char bOverride_DepthOfFieldSkyFocusDistance : 1; // 0x18
	char bOverride_DepthOfFieldVignetteSize : 1; // 0x19
	char bOverride_MotionBlurAmount : 1; // 0x19
	char bOverride_MotionBlurMax : 1; // 0x19
	char bOverride_MotionBlurPerObjectSize : 1; // 0x19
	char bOverride_ScreenPercentage : 1; // 0x19
	char bOverride_ScreenSpaceReflectionIntensity : 1; // 0x19
	char bOverride_ScreenSpaceReflectionQuality : 1; // 0x19
	char bOverride_ScreenSpaceReflectionMaxRoughness : 1; // 0x19
	char bOverride_ScreenSpaceReflectionRoughnessScale : 1; // 0x1a
	char bOverride_ReflectionsType : 1; // 0x1c
	char bOverride_RayTracingReflectionsMaxRoughness : 1; // 0x1c
	char bOverride_RayTracingReflectionsMaxBounces : 1; // 0x1c
	char bOverride_RayTracingReflectionsSamplesPerPixel : 1; // 0x1c
	char bOverride_RayTracingReflectionsShadows : 1; // 0x1c
	char bOverride_TranslucencyType : 1; // 0x1c
	char bOverride_RayTracingTranslucencyMaxRoughness : 1; // 0x1c
	char bOverride_RayTracingTranslucencyRefractionRays : 1; // 0x1c
	char bOverride_RayTracingTranslucencySamplesPerPixel : 1; // 0x1d
	char bOverride_RayTracingTranslucencyShadows : 1; // 0x1d
	char bOverride_RayTracingTranslucencyRefraction : 1; // 0x1d
	char bOverride_RayTracingGI : 1; // 0x1d
	char bOverride_RayTracingGIMaxBounces : 1; // 0x1d
	char bOverride_RayTracingGISamplesPerPixel : 1; // 0x1d
	char bOverride_PathTracingMaxBounces : 1; // 0x1d
	char bOverride_PathTracingSamplesPerPixel : 1; // 0x1d
	char bMobileHQGaussian : 1; // 0x20
	EBloomMethod BloomMethod; // 0x21
	EAutoExposureMethod AutoExposureMethod; // 0x22
	EDepthOfFieldMethod DepthOfFieldMethod; // 0x23
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
	float FilmSlope; // 0x180
	float FilmToe; // 0x184
	float FilmShoulder; // 0x188
	float FilmBlackClip; // 0x18c
	float FilmWhiteClip; // 0x190
	FLinearColor FilmWhitePoint; // 0x194
	FLinearColor FilmShadowTint; // 0x1a4
	float FilmShadowTintBlend; // 0x1b4
	float FilmShadowTintAmount; // 0x1b8
	float FilmSaturation; // 0x1bc
	FLinearColor FilmChannelMixerRed; // 0x1c0
	FLinearColor FilmChannelMixerGreen; // 0x1d0
	FLinearColor FilmChannelMixerBlue; // 0x1e0
	float FilmContrast; // 0x1f0
	float FilmToeAmount; // 0x1f4
	float FilmHealAmount; // 0x1f8
	float FilmDynamicRange; // 0x1fc
	FLinearColor SceneColorTint; // 0x200
	float SceneFringeIntensity; // 0x210
	float ChromaticAberrationStartOffset; // 0x214
	float BloomIntensity; // 0x218
	float BloomThreshold; // 0x21c
	float BloomSizeScale; // 0x220
	float Bloom1Size; // 0x224
	float Bloom2Size; // 0x228
	float Bloom3Size; // 0x22c
	float Bloom4Size; // 0x230
	float Bloom5Size; // 0x234
	float Bloom6Size; // 0x238
	FLinearColor Bloom1Tint; // 0x23c
	FLinearColor Bloom2Tint; // 0x24c
	FLinearColor Bloom3Tint; // 0x25c
	FLinearColor Bloom4Tint; // 0x26c
	FLinearColor Bloom5Tint; // 0x27c
	FLinearColor Bloom6Tint; // 0x28c
	float BloomConvolutionSize; // 0x29c
	UTexture2D* BloomConvolutionTexture; // 0x2a0
	FVector2D BloomConvolutionCenterUV; // 0x2a8
	float BloomConvolutionPreFilterMin; // 0x2b0
	float BloomConvolutionPreFilterMax; // 0x2b4
	float BloomConvolutionPreFilterMult; // 0x2b8
	float BloomConvolutionBufferScale; // 0x2bc
	UTexture* BloomDirtMask; // 0x2c0
	float BloomDirtMaskIntensity; // 0x2c8
	FLinearColor BloomDirtMaskTint; // 0x2cc
	FLinearColor AmbientCubemapTint; // 0x2dc
	float AmbientCubemapIntensity; // 0x2ec
	UTextureCube* AmbientCubemap; // 0x2f0
	float CameraShutterSpeed; // 0x2f8
	float CameraISO; // 0x2fc
	float DepthOfFieldFstop; // 0x300
	float DepthOfFieldMinFstop; // 0x304
	int32_t DepthOfFieldBladeCount; // 0x308
	float AutoExposureBias; // 0x30c
	UCurveFloat* AutoExposureBiasCurve; // 0x310
	float AutoExposureLowPercent; // 0x318
	float AutoExposureHighPercent; // 0x31c
	float AutoExposureMinBrightness; // 0x320
	float AutoExposureMaxBrightness; // 0x324
	float AutoExposureSpeedUp; // 0x328
	float AutoExposureSpeedDown; // 0x32c
	float HistogramLogMin; // 0x330
	float HistogramLogMax; // 0x334
	float AutoExposureCalibrationConstant; // 0x338
	float AutoExposureMobileBias; // 0x33c
	float LensFlareIntensity; // 0x340
	FLinearColor LensFlareTint; // 0x344
	float LensFlareBokehSize; // 0x354
	float LensFlareThreshold; // 0x358
	UTexture* LensFlareBokehShape; // 0x360
	FLinearColor LensFlareTints[0x8]; // 0x368
	float VignetteIntensity; // 0x3e8
	float GrainJitter; // 0x3ec
	float GrainIntensity; // 0x3f0
	float AmbientOcclusionIntensity; // 0x3f4
	float AmbientOcclusionStaticFraction; // 0x3f8
	float AmbientOcclusionRadius; // 0x3fc
	char AmbientOcclusionRadiusInWS : 1; // 0x400
	float AmbientOcclusionFadeDistance; // 0x404
	float AmbientOcclusionFadeRadius; // 0x408
	float AmbientOcclusionDistance; // 0x40c
	float AmbientOcclusionPower; // 0x410
	float AmbientOcclusionBias; // 0x414
	float AmbientOcclusionQuality; // 0x418
	float AmbientOcclusionMipBlend; // 0x41c
	float AmbientOcclusionMipScale; // 0x420
	float AmbientOcclusionMipThreshold; // 0x424
	int32_t RayTracingAOSamplesPerPixel; // 0x428
	FLinearColor IndirectLightingColor; // 0x42c
	float IndirectLightingIntensity; // 0x43c
	char RayTracingGI : 1; // 0x440
	int32_t RayTracingGIMaxBounces; // 0x444
	int32_t RayTracingGISamplesPerPixel; // 0x448
	float ColorGradingIntensity; // 0x44c
	UTexture* ColorGradingLUT; // 0x450
	float DepthOfFieldSensorWidth; // 0x458
	float DepthOfFieldFocalDistance; // 0x45c
	float DepthOfFieldDepthBlurAmount; // 0x460
	float DepthOfFieldDepthBlurRadius; // 0x464
	float DepthOfFieldFocalRegion; // 0x468
	float DepthOfFieldNearTransitionRegion; // 0x46c
	float DepthOfFieldFarTransitionRegion; // 0x470
	float DepthOfFieldScale; // 0x474
	float DepthOfFieldMaxBokehSize; // 0x478
	float DepthOfFieldNearBlurSize; // 0x47c
	float DepthOfFieldFarBlurSize; // 0x480
	float DepthOfFieldOcclusion; // 0x484
	UTexture* DepthOfFieldBokehShape; // 0x488
	float DepthOfFieldColorThreshold; // 0x490
	float DepthOfFieldSizeThreshold; // 0x494
	float DepthOfFieldSkyFocusDistance; // 0x498
	float DepthOfFieldVignetteSize; // 0x49c
	float MotionBlurAmount; // 0x4a0
	float MotionBlurMax; // 0x4a4
	float MotionBlurPerObjectSize; // 0x4a8
	float LPVIntensity; // 0x4ac
	float LPVVplInjectionBias; // 0x4b0
	float LPVSize; // 0x4b4
	float LPVSecondaryOcclusionIntensity; // 0x4b8
	float LPVSecondaryBounceIntensity; // 0x4bc
	float LPVGeometryVolumeBias; // 0x4c0
	float LPVEmissiveInjectionIntensity; // 0x4c4
	float LPVDirectionalOcclusionIntensity; // 0x4c8
	float LPVDirectionalOcclusionRadius; // 0x4cc
	float LPVDiffuseOcclusionExponent; // 0x4d0
	float LPVSpecularOcclusionExponent; // 0x4d4
	float LPVDiffuseOcclusionIntensity; // 0x4d8
	float LPVSpecularOcclusionIntensity; // 0x4dc
	EReflectionsType ReflectionsType; // 0x4e0
	float ScreenSpaceReflectionIntensity; // 0x4e4
	float ScreenSpaceReflectionQuality; // 0x4e8
	float ScreenSpaceReflectionMaxRoughness; // 0x4ec
	float RayTracingReflectionsMaxRoughness; // 0x4f0
	int32_t RayTracingReflectionsMaxBounces; // 0x4f4
	int32_t RayTracingReflectionsSamplesPerPixel; // 0x4f8
	EReflectedAndRefractedRayTracedShadows RayTracingReflectionsShadows; // 0x4fc
	ETranslucencyType TranslucencyType; // 0x4fd
	float RayTracingTranslucencyMaxRoughness; // 0x500
	int32_t RayTracingTranslucencyRefractionRays; // 0x504
	int32_t RayTracingTranslucencySamplesPerPixel; // 0x508
	EReflectedAndRefractedRayTracedShadows RayTracingTranslucencyShadows; // 0x50c
	char RayTracingTranslucencyRefraction : 1; // 0x50d
	int32_t PathTracingMaxBounces; // 0x510
	int32_t PathTracingSamplesPerPixel; // 0x514
	float LPVFadeRange; // 0x518
	float LPVDirectionalOcclusionFadeRange; // 0x51c
	float ScreenPercentage; // 0x520
	FWeightedBlendables WeightedBlendables; // 0x528
};

struct FAdminAddServerBuildResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString ActiveRegions; // 0x8
	FString BuildId; // 0x18
	FString CommandLineTemplate; // 0x28
	FString Comment; // 0x38
	FString ExecutablePath; // 0x48
	int32_t MaxGamesPerHost; // 0x58
	int32_t MinFreeGameSlots; // 0x5c
	EGameBuildStatus Status; // 0x60
	FString Timestamp; // 0x68
	FString TitleId; // 0x78
};

struct FMovieScene3DAttachSectionTemplate : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieSceneObjectBindingID AttachBindingID; // 0x20
	FName AttachSocketName; // 0x38
	FName AttachComponentName; // 0x44
	EAttachmentRule AttachmentLocationRule; // 0x50
	EAttachmentRule AttachmentRotationRule; // 0x51
	EAttachmentRule AttachmentScaleRule; // 0x52
	EDetachmentRule DetachmentLocationRule; // 0x53
	EDetachmentRule DetachmentRotationRule; // 0x54
	EDetachmentRule DetachmentScaleRule; // 0x55
};

struct FVolumeControlStyle : FSlateWidgetStyle {
	FSliderStyle SliderStyle; // 0x8
	FSlateBrush HighVolumeImage; // 0x378
	FSlateBrush MidVolumeImage; // 0x408
	FSlateBrush LowVolumeImage; // 0x498
	FSlateBrush NoVolumeImage; // 0x528
	FSlateBrush MutedImage; // 0x5b8
};

struct FAdminGetPublisherDataRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString KeyS; // 0x8
};

struct FAdminSetPublishedRevisionRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t Revision; // 0x8
	int32_t Version; // 0xc
};

struct FServerGetPlayersInSegmentRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString ContinuationToken; // 0x8
	int32_t MaxBatchSize; // 0x18
	int32_t SecondsToLive; // 0x1c
	FString SegmentId; // 0x20
};

struct FRootMotionSource_ConstantForce : FRootMotionSource {
	uint16_t Priority; // 0x10
	uint16_t LocalID; // 0x12
	ERootMotionAccumulateMode AccumulateMode; // 0x14
	FName InstanceName; // 0x18
	float StartTime; // 0x24
	float CurrentTime; // 0x28
	float PreviousTime; // 0x2c
	float Duration; // 0x30
	FRootMotionSourceStatus Status; // 0x34
	FRootMotionSourceSettings Settings; // 0x35
	bool bInLocalSpace; // 0x36
	FRootMotionMovementParams RootMotionParams; // 0x40
	FRootMotionFinishVelocitySettings FinishVelocityParams; // 0x80
	FVector Force; // 0x98
	UCurveFloat* StrengthOverTime; // 0xa8
};

struct FServerRedeemCouponRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString CouponCode; // 0x28
	FString PlayFabId; // 0x38
};

struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x868
};

struct FGGatewayLock {
	AActor* Actor; // 0x0
	float UnlockTime; // 0x8
};

struct FGOfferWidgetSettings {
	FVector2D Position; // 0x0
	FVector2D Size; // 0x8
	FVector2D SizeHovered; // 0x10
	FSlateBrush Brush; // 0x18
	UTexture2D* ForegroundImage; // 0xa8
};

struct FAkWaapiFieldNames {
	FString FieldName; // 0x0
};

struct FClientUnlinkGoogleAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FGGatewayPendingTransport {
	AActor* Actor; // 0x0
	float TransportTime; // 0x8
};

struct FAISightEvent {
	AActor* SeenActor; // 0x8
	AActor* Observer; // 0x10
};

struct FRigUnit_Add_FloatFloat : FRigUnit_BinaryFloatOp {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	float Argument0; // 0x28
	float Argument1; // 0x2c
	float Result; // 0x30
};

struct FAlphaBlend {
	UCurveFloat* CustomCurve; // 0x0
	float BlendTime; // 0x8
	EAlphaBlendOption BlendOption; // 0x24
};

struct FAdminDeletePlayerResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FXOSMFriendData {
	FXOSMAccountId AccountId; // 0x0
	FString DisplayName; // 0x18
	EXOSMFriendStatus Status; // 0x28
	EXOSMOnlinePresence OnlinePresence; // 0x29
};

struct FAINoiseEvent {
	FVector NoiseLocation; // 0x4
	float Loudness; // 0x10
	float MaxRange; // 0x14
	AActor* Instigator; // 0x18
	FName Tag; // 0x20
};

struct FAnimNode_UseCachedPose : FAnimNode_Base {
	FPoseLink LinkToCachingNode; // 0x10
	FName CachePoseName; // 0x20
};

struct FGColorSwatchEntry {
	FText Description; // 0x0
	FGameplayTag ColorPurpose; // 0x18
};

struct FXLandscapeLayerCache {
	TArray<char> Cache; // 0x0
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

struct FClientConsumeItemResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString ItemInstanceId; // 0x8
	int32_t RemainingUses; // 0x18
};

struct FMovieSceneObjectPathChannel : FMovieSceneChannel {
	UObject* PropertyClass; // 0x8
	TArray<FFrameNumber> Times; // 0x10
	TArray<FMovieSceneObjectPathChannelKeyValue> Values; // 0x20
	FMovieSceneObjectPathChannelKeyValue DefaultValue; // 0x30
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
	FKey AltInputKey; // 0x58
};

struct FRigUnit_Clamp_Float : FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	float Value; // 0x28
	float Min; // 0x2c
	float Max; // 0x30
	float Result; // 0x34
};

struct FColorGradingSettings {
	FColorGradePerRangeSettings Global; // 0x0
	FColorGradePerRangeSettings Shadows; // 0x50
	FColorGradePerRangeSettings Midtones; // 0xa0
	FColorGradePerRangeSettings Highlights; // 0xf0
	float ShadowsMax; // 0x140
	float HighlightsMin; // 0x144
};

struct FPolygonGroupID : FElementID {
	int32_t IDValue; // 0x0
};

struct FEditorImportExportTestDefinition {
	FFilePath ImportFilePath; // 0x0
	FString ExportFileExtension; // 0x10
	bool bSkipExport; // 0x20
	TArray<FImportFactorySettingValues> FactorySettings; // 0x28
};

struct FXGameParticleBucketInfo {
	FName Tag; // 0x0
	TArray<int32_t> MaxCount; // 0x10
	int32_t NumTicksBetweenSignificanceChanges; // 0x20
};

struct FFunctionExpressionInput {
	UMaterialExpressionFunctionInput* ExpressionInput; // 0x0
	FGuid ExpressionInputId; // 0x8
	FExpressionInput Input; // 0x18
};

struct FGroupsListMembershipResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Groups; // 0x8
};

struct FGroupsGetGroupResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString AdminRoleId; // 0x8
	FString Created; // 0x18
	UPlayFabJsonObject* Group; // 0x28
	FString GroupName; // 0x30
	FString MemberRoleId; // 0x40
	int32_t ProfileVersion; // 0x50
	UPlayFabJsonObject* Roles; // 0x58
};

struct FPolygonToSplit {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexPair> VertexPairsToSplitAt; // 0x8
};

struct FElementID {
	int32_t IDValue; // 0x0
};

struct FClientGetPlayerProfileRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabId; // 0x8
	UPlayFabJsonObject* ProfileConstraints; // 0x18
};

struct FXHitScanTraceState {
	AController* Controller; // 0x0
	FVector StartLocation; // 0x8
	FVector EndLocation; // 0x14
	float TraceRadius; // 0x20
	ECollisionChannel Channel; // 0x24
	FVector RewindOffset; // 0x28
};

struct FServerReportPlayerServerResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	int32_t SubmissionsRemaining; // 0x8
};

struct FARSessionStatus {
	FString AdditionalInfo; // 0x0
	EARSessionStatus Status; // 0x10
};

struct FXAttributeModEffect {
	FGameplayTag AttributeName; // 0x0
	int32_t AttributeIndex; // 0xc
	FXAttributeMod Mod; // 0x10
	UObject* RequiredClass; // 0x18
};

struct FGOfferWidgetRaritySettings {
	UTexture2D* BorderImage; // 0x0
	FLinearColor BackgroundDefaultColor1; // 0x8
	FLinearColor BackgroundDefaultColor2; // 0x18
	FLinearColor BackgroundActiveColor1; // 0x28
	FLinearColor BackgroundActiveColor2; // 0x38
	FLinearColor GlowColor; // 0x48
	FLinearColor BorderColor; // 0x58
};

struct FSpriteGeometryShape {
	ESpriteShapeType ShapeType; // 0x0
	TArray<FVector2D> Vertices; // 0x8
	FVector2D BoxSize; // 0x18
	FVector2D BoxPosition; // 0x20
	float Rotation; // 0x28
	bool bNegativeWinding; // 0x2c
};

struct FLensBloomSettings {
	FGaussianSumBloomSettings GaussianSum; // 0x0
	FConvolutionBloomSettings Convolution; // 0x88
	EBloomMethod Method; // 0xb0
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
	FName MipFilter; // 0x4c
	float Downscale; // 0x58
	ETextureDownscaleOptions DownscaleOptions; // 0x5c
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

struct FAdminGetTasksResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Tasks; // 0x8
};

struct FKConvexElem : FKShapeElem {
	float RestOffset; // 0x8
	FName Name; // 0xc
	char bContributeToMass : 1; // 0x1c
	TArray<FVector> VertexData; // 0x30
	FBox ElemBox; // 0x40
	FTransform Transform; // 0x60
};

struct FAnimNode_ApplyAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x10
	FPoseLink Additive; // 0x20
	float Alpha; // 0x30
	FInputScaleBias AlphaScaleBias; // 0x34
	int32_t LODThreshold; // 0x3c
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x40
	FName AlphaCurveName; // 0x88
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x94
	EAnimAlphaInputType AlphaInputType; // 0xc8
	bool bAlphaBoolEnabled; // 0xc9
};

struct FClientGetUserDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Data; // 0x8
	int32_t DataVersion; // 0x10
};

struct FMatchmakerPlayerLeftResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAnimNode_RigidBody : FAnimNode_SkeletalControlBase {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int32_t LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float Alpha; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8c
	UPhysicsAsset* OverridePhysicsAsset; // 0xd0
	FVector OverrideWorldGravity; // 0x170
	FVector ExternalForce; // 0x17c
	FVector ComponentLinearAccScale; // 0x188
	FVector ComponentLinearVelScale; // 0x194
	FVector ComponentAppliedLinearAccClamp; // 0x1a0
	float CachedBoundsScale; // 0x1ac
	FBoneReference BaseBoneRef; // 0x1b0
	ECollisionChannel OverlapChannel; // 0x1c4
	ESimulationSpace SimulationSpace; // 0x1c5
	bool bForceDisableCollisionBetweenConstraintBodies; // 0x1c6
	char bEnableWorldGeometry : 1; // 0x1c8
	char bOverrideWorldGravity : 1; // 0x1c8
	char bTransferBoneVelocities : 1; // 0x1c8
	char bFreezeIncomingPoseOnStart : 1; // 0x1c8
	char bClampLinearTranslationLimitToRefPose : 1; // 0x1c8
};

struct FNiagaraScriptDataUsageInfo {
	bool bReadsAttributeData; // 0x0
};

struct FNiagaraFloat {
	float Value; // 0x0
};

struct FRawDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FNiagaraVariableAttributeBinding {
	FNiagaraVariable BoundVariable; // 0x0
	FNiagaraVariable DataSetVariable; // 0x38
	FNiagaraVariable DefaultValueIfNonExistent; // 0x70
};

struct FGScrollItemDataTableRow : FXItemDataTableRow {
	FText DisplayName; // 0x8
	FText Description; // 0x20
	UTexture2D* IconTexture; // 0x38
	EXRarity Rarity; // 0x40
	TArray<FName> GameplayTags; // 0x48
	int32_t MaxStackSize; // 0x58
	bool bAutoPickup; // 0x5c
	bool bDestroyOnDrop; // 0x5d
	bool bDropOnUnequip; // 0x5e
	bool bAutoUnequip; // 0x5f
	int32_t Amount; // 0x60
	TArray<FXScaledEffectClassJSON> Effects; // 0x68
	TArray<FXScaledEffectClassJSON> ApplyOnceEffects; // 0x78
	FString NextTierScroll; // 0x88
	FName CharacterClassTag; // 0x98
	bool IgnoreOnRevive; // 0xa4
};

struct FCompositeFont {
	FTypeface DefaultTypeface; // 0x0
	FCompositeFallbackFont FallbackTypeface; // 0x10
	TArray<FCompositeSubFont> SubTypefaces; // 0x28
};

struct FTypefaceEntry {
	FName Name; // 0x0
	FFontData Font; // 0x10
};

struct FClothCollisionPrim_Convex {
	TArray<FPlane> Planes; // 0x0
	int32_t BoneIndex; // 0x10
};

struct FAdminGetUserBansRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabId; // 0x8
};

struct FClientRemoveGenericIDResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAkCommunicationSettings {
	uint32_t PoolSize; // 0x0
	uint16_t DiscoveryBroadcastPort; // 0x4
	uint16_t CommandPort; // 0x6
	uint16_t NotificationPort; // 0x8
	FString NetworkName; // 0x10
};

struct FPlatformInterfaceData {
	FName DataName; // 0x0
	EPlatformInterfaceDataType Type; // 0xc
	int32_t IntValue; // 0x10
	float FloatValue; // 0x14
	FString StringValue; // 0x18
	UObject* ObjectValue; // 0x28
};

struct FTTLinearColorTrack : FTTPropertyTrack {
	FName TrackName; // 0x8
	bool bIsExternalCurve; // 0x14
	FName PropertyName; // 0x18
	UCurveLinearColor* CurveLinearColor; // 0x28
};

struct FBoneMirrorInfo {
	int32_t SourceIndex; // 0x0
	EAxis BoneFlipAxis; // 0x4
};

struct FInputScaleBias {
	float Scale; // 0x0
	float Bias; // 0x4
};

struct FScalarParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel ParameterCurve; // 0x10
};

struct FXSignalChange {
	float TimePassed; // 0x0
	FGameplayTag ChangeValue; // 0x4
	AActor* Instigator; // 0x10
};

struct FNavCollisionBox {
	FVector Offset; // 0x0
	FVector Extent; // 0xc
};

struct FFractureEffect {
	UParticleSystem* ParticleSystem; // 0x0
	USoundBase* Sound; // 0x8
};

struct FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
};

struct FMaterialParameterInfo {
	FName Name; // 0x0
	EMaterialParameterAssociation Association; // 0xc
	int32_t Index; // 0x10
};

struct FMTDResult {
	FVector Direction; // 0x0
	float Distance; // 0xc
};

struct FNiagaraEventScriptProperties : FNiagaraEmitterScriptProperties {
	UNiagaraScript* Script; // 0x0
	TArray<FNiagaraEventReceiverProperties> EventReceivers; // 0x8
	TArray<FNiagaraEventGeneratorProperties> EventGenerators; // 0x18
	EScriptExecutionMode ExecutionMode; // 0x28
	uint32_t SpawnNumber; // 0x2c
	uint32_t MaxEventsPerFrame; // 0x30
	FGuid SourceEmitterID; // 0x34
	FName SourceEventName; // 0x44
	bool bRandomSpawnNumber; // 0x50
	uint32_t MinSpawnNumber; // 0x54
};

struct FGLeagueTierDataTableRow : FTableRowBase {
	UGLeagueDivision* Division; // 0x8
	int32_t Tier; // 0x10
	FText DisplayName; // 0x18
	int32_t PromotionXP; // 0x30
	int32_t XPLostPerMatch; // 0x34
	bool bCanDropToLowerTier; // 0x38
};

struct FGPendingTeleport {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	bool bIsRestart; // 0x18
};

struct FGroupsCreateGroupResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString AdminRoleId; // 0x8
	FString Created; // 0x18
	UPlayFabJsonObject* Group; // 0x28
	FString GroupName; // 0x30
	FString MemberRoleId; // 0x40
	int32_t ProfileVersion; // 0x50
	UPlayFabJsonObject* Roles; // 0x58
};

struct FServerGetPlayFabIDsFromXboxLiveIDsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FAdminDeleteMasterPlayerAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString JobReceiptId; // 0x8
	FString TitleIds; // 0x18
};

struct FRigUnit_BlendTransform : FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FTransform Source; // 0x30
	TArray<FBlendTarget> Targets; // 0x60
	FTransform Result; // 0x70
};

struct FServerMoveItemToCharacterFromUserResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FXMinimalReplicationTagCountMap {
	UXGameplayEffectContainer* Owner; // 0x50
};

struct FPrecomputedLightInstanceData : FSceneComponentInstanceData {
	UObject* SourceComponentTemplate; // 0x8
	EComponentCreationMethod SourceComponentCreationMethod; // 0x10
	int32_t SourceComponentTypeSerializedIndex; // 0x14
	TArray<char> SavedProperties; // 0x18
	TArray<FActorComponentDuplicatedObjectData> DuplicatedObjects; // 0x28
	TArray<UObject*> ReferencedObjects; // 0x38
	TArray<FName> ReferencedNames; // 0x48
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x58
	FTransform Transform; // 0xb0
	FGuid LightGuid; // 0xe0
	int32_t PreviewShadowMapChannel; // 0xf0
};

struct FAdminDeletePlayerSharedSecretRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString SecretKey; // 0x8
};

struct FDestructibleSpecialHierarchyDepths {
	int32_t SupportDepth; // 0x0
	int32_t MinimumFractureDepth; // 0x4
	bool bEnableDebris; // 0x8
	int32_t DebrisDepth; // 0xc
	int32_t EssentialDepth; // 0x10
};

struct FNiagaraEmitterHandle {
	FGuid ID; // 0x0
	FName IdName; // 0x10
	bool bIsEnabled; // 0x1c
	FName Name; // 0x20
	UNiagaraEmitter* Instance; // 0x30
};

struct FNiagaraBool {
	int32_t Value; // 0x0
};

struct FMultiplayerCreateServerBackfillTicketResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString TicketId; // 0x8
};

struct FSubmixEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FGFeedbackTagBasedMeshMaterial {
	FGameplayTag Tag; // 0x0
	FName ComponentHideWhileActiveTag; // 0xc
	FGameplayTag SkipTransitionTag; // 0x18
	UMaterialInterface* MaterialCaster; // 0x28
	UMaterialInterface* MaterialViewer; // 0x30
	FName RTPCKey; // 0x38
	bool bShowPropsWhileActive; // 0x44
	bool bShowWeaponsWhileActive; // 0x45
	float TransitionDuration; // 0x48
	FVector OverrideTransitionVector; // 0x4c
	bool bShowBaseMeshesUnderneath; // 0x58
	float Progress; // 0x5c
	TArray<USkeletalMeshComponent*> Meshes; // 0x60
	bool bIsActive; // 0x70
	bool bReversing; // 0x71
};

struct FConeConstraint : FConstraintBaseParams {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float Restitution; // 0x8
	float ContactDistance; // 0xc
	char bSoftConstraint : 1; // 0x10
	float Swing1LimitDegrees; // 0x14
	float Swing2LimitDegrees; // 0x18
	EAngularConstraintMotion Swing1Motion; // 0x1c
	EAngularConstraintMotion Swing2Motion; // 0x1d
};

struct FParticleEditorPromotionSettings {
	FFilePath DefaultParticleAsset; // 0x0
};

struct FMultiplayerCancelAllServerBackfillTicketsForPlayerResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FGArenaActorCache {
	TArray<AActor*> Actors; // 0x0
};

struct FGroupsRemoveMembersRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Group; // 0x8
	TArray<UPlayFabJsonObject*> Members; // 0x10
	FString RoleId; // 0x20
};

struct FRecordedTransformTrack {
	TArray<FRecordedFrame> Records; // 0x0
};

struct FWorldPSCPool {
	TMap<UParticleSystem*, FPSCPool> WorldParticleSystemPools; // 0x0
};

struct FAdminCreatePlayerSharedSecretRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString FriendlyName; // 0x8
};

struct FAdminRemovePlayerTagResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FXAdditionalProjectileEffects {
	TArray<FXScaledDamageEffectClass> List; // 0x0
};

struct FBTCompositeChild {
	UBTCompositeNode* ChildComposite; // 0x0
	UBTTaskNode* ChildTask; // 0x8
	TArray<UBTDecorator*> Decorators; // 0x10
	TArray<FBTDecoratorLogic> DecoratorOps; // 0x20
};

struct FGChapterWeekDataTableRow : FTableRowBase {
	FText Title; // 0x8
	TArray<FPrimaryAssetId> StoryQuestIds; // 0x20
	TArray<FPrimaryAssetId> HonorQuestIds; // 0x30
	FPrimaryAssetId IntroNarrativeId; // 0x40
	FPrimaryAssetId QuestsCompleteNarrativeId; // 0x58
	FPrimaryAssetId StorySoFarNarrativeId; // 0x70
	FPrimaryAssetId BriefingNarrativeId; // 0x88
	FGameplayTag SceneTag; // 0xa0
};

struct FMultiplayerListBuildSummariesRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t PageSize; // 0x8
	FString SkipToken; // 0x10
};

struct FMovieSceneTangentData {
	float ArriveTangent; // 0x0
	float LeaveTangent; // 0x4
	ERichCurveTangentWeightMode TangentWeightMode; // 0x8
	float ArriveTangentWeight; // 0xc
	float LeaveTangentWeight; // 0x10
};

struct FEnvQueryResult {
	UEnvQueryItemType* ItemType; // 0x10
	int32_t OptionIndex; // 0x2c
	int32_t QueryID; // 0x30
};

struct FGSurveyQuestion {
	FName TrackingId; // 0x0
	FText Prompt; // 0x10
	TArray<FGSurveyAnswer> Answers; // 0x28
};

struct FServerCreateSharedGroupRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString SharedGroupId; // 0x8
};

struct FGElementalFXCue {
	TArray<FXElementalFXDef_Decal> Decals; // 0x0
	TArray<FXElementalFXDef_ParticleSystem> ParticleSystems; // 0x10
	TArray<FXElementalFXDef_StaticMesh> StaticMeshes; // 0x20
	TArray<FXElementalFXDef_Sound> Sounds; // 0x30
	TArray<FXElementalFXDef_Mask> Masks; // 0x40
	TArray<FXElementalFXDef_Rumble> Rumbles; // 0x50
	FGElementalState RequiredStates; // 0x60
	FGElementalState ExcludedStates; // 0x68
	FGElementalState ForceKillParticlesTransitionStates; // 0x70
	TArray<FGElementalState> EffectCombosThatForceKillParticles; // 0x78
	bool bRestrictToRadiusRange; // 0x88
	float MinRadius; // 0x8c
	float MaxRadius; // 0x90
	bool ForceDeactivateParticles; // 0x94
};

struct FDataFinalizeFileUploadsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* MetaData; // 0x10
	int32_t ProfileVersion; // 0x18
};

struct FServerGetPlayerStatisticVersionsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> StatisticVersions; // 0x8
};

struct FUdpMockMessage {
	TArray<char> Data; // 0x0
};

struct FXNPCSpawnInfo {
	AXBotController* ControllerClass; // 0x0
	AXCharacter* PawnClass; // 0x8
	TArray<FXScaledEffectClass> EffectClasses; // 0x10
	FDataTableRowHandle CosmeticSetRow; // 0x20
	FDataTableRowHandle DisplayNameRow; // 0x38
	FDataTableRowHandle LootRow; // 0x50
	TArray<AActor*> ItemsForInventory; // 0x68
	FGenericTeamId TeamId; // 0x78
	int32_t SpawnCount; // 0x7c
};

struct FXScaledEffectClassJSON {
	FString EffectClass; // 0x0
	float Scale; // 0x10
	float DurationScale; // 0x14
	bool bClientAutonomous; // 0x18
};

struct FEyeTrackerGazeData {
	FVector GazeOrigin; // 0x0
	FVector GazeDirection; // 0xc
	FVector FixationPoint; // 0x18
	float ConfidenceValue; // 0x24
};

struct FAdminResetPasswordRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Password; // 0x8
	FString Token; // 0x18
};

struct FGroupsIsMemberRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Group; // 0x10
	FString RoleId; // 0x18
};

struct FOverlayItem {
	FTimespan StartTime; // 0x0
	FTimespan EndTime; // 0x8
	FString Text; // 0x10
	FVector2D Position; // 0x20
};

struct FClientLoginWithOpenIdConnectRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString ConnectionId; // 0x8
	bool CreateAccount; // 0x18
	FString EncryptedRequest; // 0x20
	FString IdToken; // 0x30
	UPlayFabJsonObject* InfoRequestParameters; // 0x40
	FString PlayerSecret; // 0x48
};

struct FMultiplayerGetContainerRegistryCredentialsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString DnsName; // 0x8
	FString Password; // 0x18
	FString Username; // 0x28
};

struct FXGameplayEffectHandle {
	int32_t Handle; // 0x0
	TWeakObjectPtr<UXGameplayEffectContainer> OwningContainer; // 0x4
};

struct FClientUnlinkGameCenterAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FXInteractionCellData {
	int32_t NumInteractives; // 0x0
	TArray<char> Seeds; // 0x8
	TArray<char> State; // 0x18
};

struct FFloatCurve : FAnimCurveBase {
	FName LastObservedName; // 0x0
	FSmartName Name; // 0xc
	int32_t CurveTypeFlags; // 0x1c
	FRichCurve FloatCurve; // 0x20
};

struct FBroadphaseSettings {
	bool bUseMBPOnClient; // 0x0
	bool bUseMBPOnServer; // 0x1
	FBox MBPBounds; // 0x4
	uint32_t MBPNumSubdivs; // 0x20
};

struct FClientStartPurchaseResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Contents; // 0x8
	FString OrderId; // 0x18
	TArray<UPlayFabJsonObject*> PaymentOptions; // 0x28
	UPlayFabJsonObject* VirtualCurrencyBalances; // 0x38
};

struct FTutorialStep {
	FText Description; // 0x0
	TArray<FString> InputActions; // 0x18
	FText ControllerDescription; // 0x28
	TArray<FString> ControllerInputActions; // 0x40
	int32_t MaxInputs; // 0x50
};

struct FTextPresetSettings {
	FDataTableRowHandle Preset; // 0x0
	bool bItalicsEnabled; // 0x18
	bool bBoldEnabled; // 0x19
};

struct FCameraFocusSettings {
	ECameraFocusMethod FocusMethod; // 0x0
	float ManualFocusDistance; // 0x4
	FCameraTrackingFocusSettings TrackingFocusSettings; // 0x8
	char bDrawDebugFocusPlane : 1; // 0x48
	FColor DebugFocusPlaneColor; // 0x4c
	char bSmoothFocusChanges : 1; // 0x50
	float FocusSmoothingInterpSpeed; // 0x54
	float FocusOffset; // 0x58
};

struct FMultiplayerJoinMatchmakingTicketRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Member; // 0x8
	FString QueueName; // 0x10
	FString TicketId; // 0x20
};

struct FLevelSequencePlayerSnapshot {
	FString MasterName; // 0x0
	FQualifiedFrameTime MasterTime; // 0x10
	FQualifiedFrameTime SourceTime; // 0x20
	FString CurrentShotName; // 0x30
	FQualifiedFrameTime CurrentShotLocalTime; // 0x40
	FQualifiedFrameTime CurrentShotSourceTime; // 0x50
	FString SourceTimecode; // 0x60
	UCameraComponent* CameraComponent; // 0x70
	FLevelSequenceSnapshotSettings Settings; // 0x78
	ULevelSequence* ActiveShot; // 0x88
	FMovieSceneSequenceID ShotID; // 0x90
};

struct FGWidgetBrushStyle {
	FSlateBrush Brush; // 0x0
	ESlateVisibility Visibility; // 0x90
};

struct FTranslationTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FClientSetFriendTagsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString FriendPlayFabId; // 0x8
	FString Tags; // 0x18
};

struct FMovieSceneEvent {
	FName FunctionName; // 0x0
};

struct FMovieSceneSequenceHierarchy {
	TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> SubSequences; // 0x0
	TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> Hierarchy; // 0x50
};

struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FServerGetPlayerStatisticsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString PlayFabId; // 0x8
	TArray<UPlayFabJsonObject*> Statistics; // 0x18
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

struct FClientConsumeXboxEntitlementsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
	FString XboxToken; // 0x18
};

struct FBakedAnimationStateMachine {
	FName MachineName; // 0x0
	int32_t InitialState; // 0xc
	TArray<FBakedAnimationState> States; // 0x10
	TArray<FAnimationTransitionBetweenStates> Transitions; // 0x20
};

struct FEmitterDynamicParameter {
	FName ParamName; // 0x0
	char bUseEmitterTime : 1; // 0xc
	char bSpawnTimeOnly : 1; // 0xc
	EEmitterDynamicParameterValue ValueMethod; // 0x10
	char bScaleVelocityByParamValue : 1; // 0x14
	FRawDistributionFloat ParamValue; // 0x18
};

struct FStatColorMapping {
	FString StatName; // 0x0
	TArray<FStatColorMapEntry> ColorMap; // 0x10
	char DisableBlend : 1; // 0x20
};

struct FSkeletalMeshClothBuildParams {
	TWeakObjectPtr<UClothingAssetBase> TargetAsset; // 0x0
	int32_t TargetLod; // 0x8
	bool bRemapParameters; // 0xc
	FString AssetName; // 0x10
	int32_t LODIndex; // 0x20
	int32_t SourceSection; // 0x24
	bool bRemoveFromMesh; // 0x28
	UPhysicsAsset* PhysicsAsset; // 0x30
};

struct FAdminAddLocalizedNewsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientGetPlayerCombinedInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* InfoResultPayload; // 0x8
	FString PlayFabId; // 0x10
};

struct FClientLoginWithFacebookRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString AccessToken; // 0x8
	bool CreateAccount; // 0x18
	FString EncryptedRequest; // 0x20
	UPlayFabJsonObject* InfoRequestParameters; // 0x30
	FString PlayerSecret; // 0x38
};

struct FScalarMaterialInput : FMaterialInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FClientUnlinkCustomIDRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CustomId; // 0x8
};

struct FServerUpdateUserDataRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Data; // 0x8
	FString KeysToRemove; // 0x10
	EUserDataPermission Permission; // 0x20
	FString PlayFabId; // 0x28
};

struct FNiagaraVariableMetaData {
	TMap<FName, FString> PropertyMetaData; // 0x0
	FText Description; // 0x50
	FText CategoryName; // 0x68
	int32_t EditorSortPriority; // 0x80
	int32_t CallSortPriority; // 0x84
	TArray<TWeakObjectPtr<UObject>> ReferencerNodes; // 0x88
};

struct FAdminGetMatchmakerGameInfoRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString LobbyId; // 0x8
};

struct FClientUnlinkIOSDeviceIDResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMovieSceneEvaluationTemplateSerialNumber {
	uint32_t Value; // 0x0
};

struct FStaticMeshSourceModel {
	FMeshBuildSettings BuildSettings; // 0x0
	FMeshReductionSettings ReductionSettings; // 0x30
	float LODDistance; // 0x54
	FPerPlatformFloat ScreenSize; // 0x58
	FString SourceImportFilename; // 0x60
};

struct FAkAndroidAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t IO_MemorySize; // 0x0
	float TargetAutoStreamBufferLength; // 0x4
	bool UseStreamCache; // 0x8
	uint32_t MaximumPinnedBytesInCache; // 0xc
	int32_t PrepareEventMemoryPoolID; // 0x10
	bool EnableGameSyncPreparation; // 0x14
	uint32_t ContinuousPlaybackLookAhead; // 0x18
	uint32_t MonitorPoolSize; // 0x1c
	uint32_t MonitorQueuePoolSize; // 0x20
	uint32_t MaximumHardwareTimeoutMs; // 0x24
	FAkAdvancedSpatialAudioSettings SpatialAudioSettings; // 0x28
	bool EnableMultiCoreRendering; // 0x30
	bool RoundFrameSizeToHardwareSize; // 0x34
};

struct FPoseLinkBase {
	int32_t LinkID; // 0x0
};

struct FGLeagueXPDivision {
	TMap<UGLeagueDivision*, int32_t> LeagueXPByDivision; // 0x0
};

struct FGButtonListItemVerticalContentStyleState {
	FDataTableRowHandle IconColor; // 0x0
	FDataTableRowHandle TextColor; // 0x18
	ETextConvertCaseMode TextCaseMode; // 0x30
	FGWidgetBrushStyle FiligreeStyle; // 0x38
	FGWidgetBrushStyle DividerStyle; // 0xd0
	FGWidgetBrushStyle LockIconStyle; // 0x168
};

struct FGChosenPerkData {
	UGCharacterPerk* Perk; // 0x0
	int32_t CurrentLevel; // 0x8
};

struct FGCosmeticTriumphDataTableRow : FGCosmeticItemDataTableRow {
	FText DisplayName; // 0x8
	FText Description; // 0x20
	UTexture2D* IconTexture; // 0x38
	EXRarity Rarity; // 0x68
	FPrimaryAssetId UpgradesInto; // 0x6c
	FText UpgradeableSetDisplayName; // 0x88
	FText UpgradeableSetRequirementsDescription; // 0xa0
	UAnimMontage* Montage; // 0xb8
	UAnimMontage* MontageMaleOverride; // 0xc0
};

struct FGTutorialStepDynamicText {
	FText Text; // 0x0
	TMap<FString, FString> UntranslatedArgs; // 0x18
};

struct FMultiplayerCreateServerBackfillTicketRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t GiveUpAfterSeconds; // 0x8
	TArray<UPlayFabJsonObject*> Members; // 0x10
	FString QueueName; // 0x20
	UPlayFabJsonObject* ServerDetails; // 0x30
};

struct FXAttributeMod {
	EXAttributeModificationType ModificationType; // 0x0
	float Amount; // 0x4
};

struct FClothVertBoneData {
	int32_t NumInfluences; // 0x0
	uint16_t BoneIndices[0x8]; // 0x4
	float BoneWeights[0x8]; // 0x14
};

struct FGWearableItemDataTableRow : FXItemDataTableRow {
	FText DisplayName; // 0x8
	FText Description; // 0x20
	UTexture2D* IconTexture; // 0x38
	EXRarity Rarity; // 0x40
	TArray<FName> GameplayTags; // 0x48
	int32_t MaxStackSize; // 0x58
	bool bAutoPickup; // 0x5c
	bool bDestroyOnDrop; // 0x5d
	bool bDropOnUnequip; // 0x5e
	bool bAutoUnequip; // 0x5f
	int32_t Amount; // 0x60
	TArray<FXScaledEffectClassJSON> EquipEffects; // 0x68
	TArray<FXScaledEffectClassJSON> EquipEffectsWhenNew; // 0x78
};

struct FGGamepadButtonBinding {
	FText DisplayText; // 0x0
	FName Binding; // 0x18
	FKey Key; // 0x28
	bool bRequiresLeftTriggerHeld; // 0x48
};

struct FInstancedStaticMeshComponentInstanceData : FSceneComponentInstanceData {
	UObject* SourceComponentTemplate; // 0x8
	EComponentCreationMethod SourceComponentCreationMethod; // 0x10
	int32_t SourceComponentTypeSerializedIndex; // 0x14
	TArray<char> SavedProperties; // 0x18
	TArray<FActorComponentDuplicatedObjectData> DuplicatedObjects; // 0x28
	TArray<UObject*> ReferencedObjects; // 0x38
	TArray<FName> ReferencedNames; // 0x48
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x58
	UStaticMesh* StaticMesh; // 0xa8
	FInstancedStaticMeshLightMapInstanceData CachedStaticLighting; // 0xb0
	TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0xf0
	int32_t InstancingRandomSeed; // 0x120
};

struct FGroupsInviteToGroupRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool AutoAcceptOutstandingApplication; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* Group; // 0x18
	FString RoleId; // 0x20
};

struct FRadialDamageEvent : FDamageEvent {
	UDamageType* DamageTypeClass; // 0x8
	FRadialDamageParams Params; // 0x10
	FVector Origin; // 0x24
	TArray<FHitResult> ComponentHits; // 0x30
};

struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	TArray<FScalarParameterNameAndCurve> Scalars; // 0x20
	TArray<FVectorParameterNameAndCurves> Vectors; // 0x30
	TArray<FColorParameterNameAndCurves> Colors; // 0x40
	UMaterialParameterCollection* MPC; // 0x50
};

struct FKBoxElem : FKShapeElem {
	float RestOffset; // 0x8
	FName Name; // 0xc
	char bContributeToMass : 1; // 0x1c
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float X; // 0x48
	float Y; // 0x4c
	float Z; // 0x50
};

struct FMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieSceneGeometryCacheSectionTemplateParameters Params; // 0x20
};

struct FSpriteInstanceData {
	FMatrix Transform; // 0x0
	UPaperSprite* SourceSprite; // 0x40
	FColor VertexColor; // 0x48
	int32_t MaterialIndex; // 0x4c
};

struct FAnimationState : FAnimationStateBase {
	FName StateName; // 0x0
	TArray<FAnimationTransitionRule> Transitions; // 0x10
	int32_t StateRootNodeIndex; // 0x20
	int32_t StartNotify; // 0x24
	int32_t EndNotify; // 0x28
	int32_t FullyBlendedNotify; // 0x2c
};

struct FVoiceSettings {
	USceneComponent* ComponentToAttachTo; // 0x0
	USoundAttenuation* AttenuationSettings; // 0x8
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x10
};

struct FStructSerializerObjectTestStruct {
	UObject* Class; // 0x0
	UObject* ObjectPtr; // 0x8
};

struct FClientLinkKongregateAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientGetPlayFabIDsFromSteamIDsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString SteamStringIDs; // 0x8
};

struct FNamedInterfaceDef {
	FName InterfaceName; // 0x0
	FString InterfaceClassName; // 0x10
};

struct FColor {
	char B; // 0x0
	char G; // 0x1
	char R; // 0x2
	char A; // 0x3
};

struct FLevelSequenceBindingReferenceArray {
	TArray<FLevelSequenceBindingReference> References; // 0x0
};

struct FAdminGetCloudScriptRevisionRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t Revision; // 0x8
	int32_t Version; // 0xc
};

struct FServerGrantItemsToCharacterRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Annotation; // 0x8
	FString CatalogVersion; // 0x18
	FString CharacterId; // 0x28
	FString ItemIds; // 0x38
	FString PlayFabId; // 0x48
};

struct FServerLinkXboxAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAssetManagerRedirect {
	FString Old; // 0x0
	FString New; // 0x10
};

struct FClientUnlinkFacebookAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMultiplayerShutdownMultiplayerServerRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString BuildId; // 0x8
	FString Region; // 0x18
	FString SessionId; // 0x28
};

struct FAdminGrantItemsToUsersRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
	TArray<UPlayFabJsonObject*> ItemGrants; // 0x18
};

struct FPaperTileMetadata {
	FName UserDataName; // 0x0
	FSpriteGeometryCollection CollisionData; // 0x10
	char TerrainMembership[0x4]; // 0x40
};

struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	TArray<FScalarParameterNameAndCurve> Scalars; // 0x20
	TArray<FVectorParameterNameAndCurves> Vectors; // 0x30
	TArray<FColorParameterNameAndCurves> Colors; // 0x40
};

struct FXIKBones {
	FBoneReference IKFootBone; // 0x0
	FBoneReference FKFootBone; // 0x14
};

struct FInputAlphaBoolBlend {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
	EAlphaBlendOption BlendOption; // 0x8
	bool bInitialized; // 0x9
	UCurveFloat* CustomCurve; // 0x10
	FAlphaBlend AlphaBlend; // 0x18
};

struct FClientGetPlayFabIDsFromPSNAccountIDsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FRigUnit_MultiplyQuaternion : FRigUnit_BinaryQuaternionOp {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FQuat Argument0; // 0x30
	FQuat Argument1; // 0x40
	FQuat Result; // 0x50
};

struct FActorSequenceObjectReference {
	EActorSequenceObjectReferenceType Type; // 0x0
	FGuid ActorId; // 0x4
	FString PathToComponent; // 0x18
};

struct FClientLinkAndroidDeviceIDResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientGetTimeRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FGChordBinding {
	FName Name; // 0x0
	FInputChord Primary; // 0x10
	FInputChord Alternate; // 0x38
	float Scale; // 0x60
};

struct FLinearColor {
	float R; // 0x0
	float G; // 0x4
	float B; // 0x8
	float A; // 0xc
};

struct FAnimNode_Slot : FAnimNode_Base {
	FPoseLink Source; // 0x10
	FName SlotName; // 0x20
	bool bAlwaysUpdateSourcePose; // 0x2c
};

struct FDataSetObjectsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
	int32_t ExpectedProfileVersion; // 0x10
	TArray<UPlayFabJsonObject*> Objects; // 0x18
};

struct FGameplayTagQuery {
	int32_t TokenStreamVersion; // 0x0
	TArray<FGameplayTag> TagDictionary; // 0x8
	TArray<char> QueryTokenStream; // 0x18
	FString UserDescription; // 0x28
	FString AutoDescription; // 0x38
};

struct FClientModifyUserVirtualCurrencyResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	int32_t Balance; // 0x8
	int32_t BalanceChange; // 0xc
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FClientRefreshPSNAuthTokenRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString AuthCode; // 0x8
	int32_t IssuerId; // 0x18
	FString RedirectUri; // 0x20
};

struct FMeshMergingSettings {
	int32_t TargetLightMapResolution; // 0x0
	EUVOutput OutputUVs[0x8]; // 0x4
	FMaterialProxySettings MaterialSettings; // 0xc
	int32_t GutterSize; // 0x7c
	int32_t SpecificLOD; // 0x80
	EMeshLODSelectionType LODSelectionType; // 0x84
	char bGenerateLightMapUV : 1; // 0x85
	char bComputedLightMapResolution : 1; // 0x85
	char bPivotPointAtZero : 1; // 0x85
	char bMergePhysicsData : 1; // 0x85
	char bMergeMaterials : 1; // 0x85
	char bBakeVertexDataToMesh : 1; // 0x85
	char bUseVertexDataForBakingMaterial : 1; // 0x85
	char bUseTextureBinning : 1; // 0x85
	char bReuseMeshLightmapUVs : 1; // 0x86
	char bMergeEquivalentMaterials : 1; // 0x86
	char bUseLandscapeCulling : 1; // 0x86
	char bIncludeImposters : 1; // 0x86
	char bAllowDistanceField : 1; // 0x86
	char TriangleReductionPercent; // 0x87
};

struct FServerModifyUserVirtualCurrencyResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	int32_t Balance; // 0x8
	int32_t BalanceChange; // 0xc
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FMovieSceneBinding {
	FGuid ObjectGuid; // 0x0
	FString BindingName; // 0x10
	TArray<UMovieSceneTrack*> Tracks; // 0x20
};

struct FVertexPair {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
};

struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneBoolChannel BoolCurve; // 0x58
};

struct FLiveLinkTimeCode_Base_DEPRECATED {
	int32_t Seconds; // 0x0
	int32_t Frames; // 0x4
	FLiveLinkFrameRate FrameRate; // 0x8
};

struct FGNearbySoundInfo {
	double Volume; // 0x0
	FVector SoundLocation; // 0x8
};

struct FNamedTransform {
	FTransform Value; // 0x0
	FName Name; // 0x30
};

struct FClientUnlinkSteamAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FLevelSequenceCameraSettings {
	bool bOverrideAspectRatioAxisConstraint; // 0x0
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x1
};

struct FGInputListener {
	UUserWidget* Owner; // 0x0
	FName Action; // 0x8
	bool bConsume; // 0x14
	FGameplayTagContainer DisableGamepadInputTags; // 0x18
	DelegateProperty OnActivate; // 0x38
	bool bIsListening; // 0x4c
};

struct FGeomComponentCacheParameters {
	EGeometryCollectionCacheType CacheMode; // 0x0
	UGeometryCollectionCache* TargetCache; // 0x8
	float ReverseCacheBeginTime; // 0x10
	bool SaveCollisionData; // 0x14
	int32_t CollisionDataMaxSize; // 0x18
	bool DoCollisionDataSpatialHash; // 0x1c
	float SpatialHashRadius; // 0x20
	int32_t MaxCollisionPerCell; // 0x24
	bool SaveTrailingData; // 0x28
	int32_t TrailingDataSizeMax; // 0x2c
	float TrailingMinSpeedThreshold; // 0x30
	float TrailingMinVolumeThreshold; // 0x34
};

struct FGCharacterAlert {
	FText Text; // 0x0
	EGCharacterAlertType AlertType; // 0x18
	bool bIsPositive; // 0x19
};

struct FXInstructionCustomState_Actor : FXInstructionCustomState {
	TWeakObjectPtr<AActor> Actor; // 0x8
};

struct FInstancedStaticMeshInstanceData {
	FMatrix Transform; // 0x0
};

struct FMarkerSyncAnimPosition {
	FName PreviousMarkerName; // 0x0
	FName NextMarkerName; // 0xc
	float PositionBetweenMarkers; // 0x18
};

struct FClientUnlinkFacebookAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FServerGetPlayFabIDsFromSteamIDsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FAnimNode_SingleNode : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
};

struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase {
	TArray<FPoseLink> BlendPose; // 0x10
	TArray<float> BlendTime; // 0x20
	EAlphaBlendOption BlendType; // 0x30
	bool bResetChildOnActivation; // 0x31
	UCurveFloat* CustomBlendCurve; // 0x38
	UBlendProfile* BlendProfile; // 0x40
	int32_t ActiveChildIndex; // 0x98
};

struct FGMainMenuHeaderNavEntry {
	FText Text; // 0x0
	FGameplayTag Pane; // 0x18
	bool bEnabled; // 0x24
};

struct FClientLoginWithFacebookInstantGamesIdRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool CreateAccount; // 0x8
	FString EncryptedRequest; // 0x10
	FString FacebookInstantGamesSignature; // 0x20
	UPlayFabJsonObject* InfoRequestParameters; // 0x30
	FString PlayerSecret; // 0x38
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

struct FXServerMoveRequest {
	float Timestamp; // 0x0
	char LastCorrectionStamp; // 0x4
	FVector_NetQuantize10 Acceleration; // 0x8
	uint32_t ClientProjectileAim; // 0x14
	char Flags; // 0x18
	uint32_t ClientYawPitch; // 0x1c
};

struct FCollisionProfileName {
	FName Name; // 0x0
};

struct FExposureSettings {
	float FixedEV100; // 0x0
	bool bFixed; // 0x4
};

struct FStreamingLevelsToConsider {
	TArray<FLevelStreamingWrapper> StreamingLevels; // 0x0
};

struct FCollectionReference {
	FName CollectionName; // 0x0
};

struct FServerGetPlayFabIDsFromGenericIDsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FMovieSceneCameraShakeSectionData {
	UCameraShake* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraAnimPlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
};

struct FVehicleEngineData {
	FRuntimeFloatCurve TorqueCurve; // 0x0
	float MaxRPM; // 0x88
	float MOI; // 0x8c
	float DampingRateFullThrottle; // 0x90
	float DampingRateZeroThrottleClutchEngaged; // 0x94
	float DampingRateZeroThrottleClutchDisengaged; // 0x98
};

struct FAdminSetPublishedRevisionResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FLandscapeSplineInterpPoint {
	FVector Center; // 0x0
	FVector Left; // 0xc
	FVector Right; // 0x18
	FVector FalloffLeft; // 0x24
	FVector FalloffRight; // 0x30
	float StartEndFalloff; // 0x3c
};

struct FAnimNode_Root : FAnimNode_Base {
	FPoseLink Result; // 0x10
};

struct FAdminGetUserDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Data; // 0x8
	int32_t DataVersion; // 0x10
	FString PlayFabId; // 0x18
};

struct FAdminResetUserStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabId; // 0x8
};

struct FBPVariableDescription {
	FName VarName; // 0x0
	FGuid VarGuid; // 0xc
	FEdGraphPinType VarType; // 0x20
	FString FriendlyName; // 0x90
	FText Category; // 0xa0
	uint64_t PropertyFlags; // 0xb8
	FName RepNotifyFunc; // 0xc0
	ELifetimeCondition ReplicationCondition; // 0xcc
	TArray<FBPVariableMetaDataEntry> MetaDataArray; // 0xd0
	FString DefaultValue; // 0xe0
};

struct FAimConstraintDescription : FConstraintDescriptionEx {
	FFilterOptionPerAxis AxesFilterOption; // 0x8
	FAxis LookAt_Axis; // 0x10
	FAxis LookUp_Axis; // 0x20
	bool bUseLookUp; // 0x30
	FVector LookUpTarget; // 0x34
};

struct FFoliageVertexColorChannelMask {
	char UseMask : 1; // 0x0
	float MaskThreshold; // 0x4
	char InvertMask : 1; // 0x8
};

struct FCachedPropertyPath {
	TArray<FPropertyPathSegment> Segments; // 0x0
	UFunction* CachedFunction; // 0x18
};

struct FAdminUpdateBansResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FAdminRevokeInventoryItemRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
};

struct FXElementalFXDef_Rumble : FXElementalFXDef {
	bool bUseRadiusRange; // 0x0
	FVector2D ValidRadiusRange; // 0x4
	FXElementalVector Offset; // 0xc
	FXElementalRotator Rotation; // 0x38
	FXElementalVector Size; // 0x58
	bool bNormalizeSize; // 0x84
	FVector BaseSize; // 0x88
	TArray<FXElementalFXParam> StaticParameters; // 0x98
	FGameplayTagContainer RequiredTags; // 0xa8
	FGameplayTagContainer IgnoredTags; // 0xc8
	UForceFeedbackEffect* Effect; // 0xe8
	UForceFeedbackAttenuation* Attenuation; // 0xf0
	float Intensity; // 0xf8
	bool bLooping; // 0xfc
	TWeakObjectPtr<UForceFeedbackComponent> Instance; // 0x100
};

struct FServerSetGameServerInstanceTagsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FRichCurve : FRealCurve {
	FKeyHandleMap KeyHandlesToIndices; // 0x8
	ERichCurveExtrapolation PreInfinityExtrap; // 0x68
	ERichCurveExtrapolation PostInfinityExtrap; // 0x69
	float DefaultValue; // 0x6c
	TArray<FRichCurveKey> KeyS; // 0x70
};

struct FServerGetTitleDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Data; // 0x8
};

struct FMultiplayerListPartyQosServersResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	int32_t PageSize; // 0x8
	TArray<UPlayFabJsonObject*> QosServers; // 0x10
	FString SkipToken; // 0x20
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

struct FAssetEditorOrbitCameraPosition {
	bool bIsSet; // 0x0
	FVector CamOrbitPoint; // 0x4
	FVector CamOrbitZoom; // 0x10
	FRotator CamOrbitRotation; // 0x1c
};

struct FXServerMoveExpectedResult_NoBase {
	FVector_NetQuantize100 PositionResult; // 0x0
	char MovementModeResult; // 0xc
	UXAction* ExpectedAction; // 0x10
	char ExpectedActionTime; // 0x18
};

struct FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; // 0x0
	char bExecuteWhenPaused : 1; // 0x0
	char bOverrideParentBinding : 1; // 0x0
};

struct FServerGetStoreItemsServerRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
	FString PlayFabId; // 0x18
	FString StoreId; // 0x28
};

struct FParticleRandomSeedInfo {
	FName ParameterName; // 0x0
	char bGetSeedFromInstance : 1; // 0xc
	char bInstanceSeedIsIndex : 1; // 0xc
	char bResetSeedOnEmitterLooping : 1; // 0xc
	char bRandomlySelectSeedArray : 1; // 0xc
	TArray<int32_t> RandomSeeds; // 0x10
};

struct FRigUnit_QuaternionFromAxisAndAngle : FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FVector Axis; // 0x28
	float Angle; // 0x34
	FQuat Result; // 0x40
};

struct FReferenceBoneFrame {
	FBoneReference Bone; // 0x0
	FAxis Axis; // 0x14
};

struct FAdminUpdateTaskRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Description; // 0x8
	UPlayFabJsonObject* Identifier; // 0x18
	bool IsActive; // 0x20
	FString Name; // 0x28
	UPlayFabJsonObject* Parameter; // 0x38
	FString Schedule; // 0x40
	EScheduledTaskType Type; // 0x50
};

struct FClientRegisterWithWindowsHelloRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString DeviceName; // 0x8
	FString EncryptedRequest; // 0x18
	UPlayFabJsonObject* InfoRequestParameters; // 0x28
	FString PlayerSecret; // 0x30
	FString PublicKey; // 0x40
	FString Username; // 0x50
};

struct FRigUnit_ConvertVectorToRotation : FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FVector Input; // 0x28
	FRotator Result; // 0x34
};

struct FGAchievementInfoRepl {
	FString ID; // 0x0
	int32_t CurrentTally; // 0x10
	int32_t RequiredTally; // 0x14
};

struct FWrappedStringElement {
	FString Value; // 0x0
	FVector2D LineExtent; // 0x10
};

struct FBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; // 0x0
	char bExecuteWhenPaused : 1; // 0x0
	char bOverrideParentBinding : 1; // 0x0
	FName InputAxisName; // 0x4
	FName FunctionNameToBind; // 0x10
};

struct FGAchievementTrigger {
	FGameplayTag ListenTable; // 0x0
	UGEventQuery* Query; // 0x10
	TMap<FGameplayTag, FString> Properties; // 0x18
};

struct FGBoonEffectDescription {
	FName StackName; // 0x0
	TArray<FXScaledEffectClass> Effects; // 0x10
	FText Description; // 0x20
	FText DisplayName; // 0x38
	EXRarity Rarity; // 0x50
	UTexture2D* Icon; // 0x58
	float MaxTotalScale; // 0x60
};

struct FClientAddGenericIDResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FOptionalMovieSceneBlendType {
	EMovieSceneBlendType BlendType; // 0x0
	bool bIsValid; // 0x1
};

struct FGPaletteOption {
	FText Name; // 0x0
	FGameplayTag Tag; // 0x18
};

struct FAnimNode_MultiWayBlend : FAnimNode_Base {
	TArray<FPoseLink> Poses; // 0x10
	TArray<float> DesiredAlphas; // 0x20
	FInputScaleBias AlphaScaleBias; // 0x40
	bool bAdditiveNode; // 0x48
	bool bNormalizeAlpha; // 0x49
};

struct FEditorMapPerformanceTestDefinition {
	FSoftObjectPath PerformanceTestmap; // 0x0
	int32_t TestTimer; // 0x20
};

struct FMovieSceneTrackEvalOptions {
	char bCanEvaluateNearestSection : 1; // 0x0
	char bEvalNearestSection : 1; // 0x0
	char bEvaluateInPreroll : 1; // 0x0
	char bEvaluateInPostroll : 1; // 0x0
	char bEvaluateNearestSection : 1; // 0x0
};

struct FMapBackgroundLevel {
	UTexture2D* BackgroundTexture; // 0x0
	UTextureRenderTarget2D* RenderTarget; // 0x8
	UTextureRenderTarget2D* Overlay; // 0x10
	float LevelHeight; // 0x18
	FVector2D SamplingResolution; // 0x1c
};

struct FBoneReductionSetting {
	TArray<FName> BonesToRemove; // 0x0
};

struct FAttributesForVertexInstance {
	FVertexInstanceID VertexInstanceID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
};

struct FCachedAnimAssetPlayerData {
	FName StateMachineName; // 0x0
	FName StateName; // 0xc
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

struct FAnimationGroupReference {
	FName GroupName; // 0x0
	EAnimGroupRole GroupRole; // 0xc
};

struct FScalarParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	float ParameterValue; // 0x14
	FGuid ExpressionGUID; // 0x18
};

struct FAdminGetContentListResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Contents; // 0x8
	int32_t ItemCount; // 0x18
	int32_t TotalSize; // 0x1c
};

struct FBlackboardKeySelector {
	TArray<UBlackboardKeyType*> AllowedTypes; // 0x0
	FName SelectedKeyName; // 0x10
	UBlackboardKeyType* SelectedKeyType; // 0x20
	char SelectedKeyID; // 0x28
	char bNoneIsAllowedValue : 1; // 0x2c
};

struct FAuthenticationGetEntityTokenRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
};

struct FGroupsApplyToGroupResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
	FString Expires; // 0x10
	UPlayFabJsonObject* Group; // 0x20
};

struct FMultiplayerBuildAliasDetailsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString AliasId; // 0x8
	FString AliasName; // 0x18
	TArray<UPlayFabJsonObject*> BuildSelectionCriteria; // 0x28
	int32_t PageSize; // 0x38
	FString SkipToken; // 0x40
};

struct FNiagaraDataInterfaceGPUParamInfo {
	FString DataInterfaceHLSLSymbol; // 0x0
	FString DIClassName; // 0x10
};

struct FClientUnlinkXboxAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieSceneObjectBindingID PathBindingID; // 0x20
	FMovieSceneFloatChannel TimingCurve; // 0x38
	MovieScene3DPathSection_Axis FrontAxisEnum; // 0xd8
	MovieScene3DPathSection_Axis UpAxisEnum; // 0xd9
	char bFollow : 1; // 0xdc
	char bReverse : 1; // 0xdc
	char bForceUpright : 1; // 0xdc
};

struct FClothConstraintSetup {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
};

struct FServerGetUserDataRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t IfChangedFromDataVersion; // 0x8
	FString KeyS; // 0x10
	FString PlayFabId; // 0x20
};

struct FGCosmeticTypeConfigDataTableRow : FTableRowBase {
	UGBackplateConfiguration* BackplateConfigClass; // 0x8
	bool bPlacardEnabled; // 0x10
	UGCosmeticIconButton* WidgetClass; // 0x18
	FVector2D WidgetSize; // 0x20
	int32_t ColumnCount; // 0x28
};

struct FEnvNamedValue {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0xc
	float Value; // 0x10
};

struct FClientRegisterForIOSPushNotificationResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientUnlinkXboxAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString XboxToken; // 0x8
};

struct FDynamicPropertyPath : FCachedPropertyPath {
	TArray<FPropertyPathSegment> Segments; // 0x0
	UFunction* CachedFunction; // 0x18
};

struct FNameCurveKey {
	float Time; // 0x0
	FName Value; // 0x4
};

struct FLensSettings {
	FLensBloomSettings Bloom; // 0x0
	FLensImperfectionSettings Imperfections; // 0xb8
	float ChromaticAberration; // 0xd8
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

struct FServerGetLeaderboardAroundCharacterRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CharacterId; // 0x8
	FString CharacterType; // 0x18
	int32_t MaxResultsCount; // 0x28
	FString PlayFabId; // 0x30
	FString StatisticName; // 0x40
};

struct FClientSetPlayerSecretResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerWriteServerCharacterEventRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Body; // 0x8
	FString CharacterId; // 0x10
	FString EventName; // 0x20
	FString PlayFabId; // 0x30
	FString Timestamp; // 0x40
};

struct FClientRedeemCouponRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString CouponCode; // 0x28
};

struct FLiveLinkTimeCode : FLiveLinkTimeCode_Base_DEPRECATED {
	int32_t Seconds; // 0x0
	int32_t Frames; // 0x4
	FLiveLinkFrameRate FrameRate; // 0x8
};

struct FClothPhysicalMeshData {
	TArray<FVector> Vertices; // 0x0
	TArray<FVector> Normals; // 0x10
	TArray<uint32_t> Indices; // 0x20
	TArray<float> MaxDistances; // 0x30
	TArray<float> BackstopDistances; // 0x40
	TArray<float> BackstopRadiuses; // 0x50
	TArray<float> AnimDriveMultipliers; // 0x60
	TArray<float> InverseMasses; // 0x70
	TArray<FClothVertBoneData> BoneData; // 0x80
	int32_t MaxBoneWeights; // 0x90
	int32_t NumFixedVerts; // 0x94
	TArray<uint32_t> SelfCollisionIndices; // 0x98
};

struct FServerMoveItemToUserFromCharacterResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FLayerBlendInput {
	FName LayerName; // 0x0
	ELandscapeLayerBlendType BlendType; // 0xc
	FExpressionInput LayerInput; // 0x10
	FExpressionInput HeightInput; // 0x2c
	float PreviewWeight; // 0x48
	FVector ConstLayerInput; // 0x4c
	float ConstHeightInput; // 0x58
};

struct FInterpolationParameter {
	float InterpolationTime; // 0x0
	EFilterInterpolationType InterpolationType; // 0x4
};

struct FRigUnit_Multiply_FloatFloat : FRigUnit_BinaryFloatOp {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	float Argument0; // 0x28
	float Argument1; // 0x2c
	float Result; // 0x30
};

struct FInputAxisConfigEntry {
	FName AxisKeyName; // 0x0
	FInputAxisProperties AxisProperties; // 0xc
};

struct FXGameplayAttribute {
	float BaseValue; // 0x0
	float CalculatedValue; // 0x4
	TArray<FXAttributeMod> Mods; // 0x8
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

struct FVector_NetQuantize100 : FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FAdminGetServerBuildUploadURLRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString BuildId; // 0x8
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

struct FGInstructionCustomState_Ping : FXInstructionCustomState {
	TWeakObjectPtr<AGPingBase> PingActor; // 0x8
};

struct FPartyMemberRepData : FOnlinePartyRepDataBase {
	FUserPlatform Platform; // 0x20
	FUniqueNetIdRepl PlatformUniqueId; // 0x68
	FString PlatformSessionId; // 0xc8
	ECrossplayPreference CrossplayPreference; // 0x109
};

struct FServerGetCharacterDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString CharacterId; // 0x8
	UPlayFabJsonObject* Data; // 0x18
	int32_t DataVersion; // 0x20
	FString PlayFabId; // 0x28
};

struct FTTFloatTrack : FTTPropertyTrack {
	FName TrackName; // 0x8
	bool bIsExternalCurve; // 0x14
	FName PropertyName; // 0x18
	UCurveFloat* CurveFloat; // 0x28
};

struct FAdminRevokeAllBansForUserResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FAdminSetPublisherDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerGrantItemsToCharacterResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> ItemGrantResults; // 0x8
};

struct FFilterOptionPerAxis {
	bool bX; // 0x0
	bool bY; // 0x1
	bool bZ; // 0x2
};

struct FGPerkLoadoutState {
	UGCharacterPerk* PerkClass; // 0x0
	FGameplayTag SlotTag; // 0x8
	int32_t Level; // 0x14
};

struct FAnimSequenceTrackContainer {
	TArray<FRawAnimSequenceTrack> AnimationTracks; // 0x0
	TArray<FName> TrackNames; // 0x10
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

struct FServerRemovePlayerTagRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabId; // 0x8
	FString TagName; // 0x18
};

struct FGInspectionAnimationState {
	EXInspectionState Start; // 0x0
	EXInspectionState Current; // 0x1
	EXInspectionState End; // 0x2
};

struct FClientLoginWithSteamRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool CreateAccount; // 0x8
	FString EncryptedRequest; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x20
	FString PlayerSecret; // 0x28
	FString SteamTicket; // 0x38
};

struct FServerRefreshGameServerInstanceHeartbeatRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString LobbyId; // 0x8
};

struct FClientLoginWithTwitchRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString AccessToken; // 0x8
	bool CreateAccount; // 0x18
	FString EncryptedRequest; // 0x20
	UPlayFabJsonObject* InfoRequestParameters; // 0x30
	FString PlayerSecret; // 0x38
};

struct FEngineServiceAuthDeny {
	FString Username; // 0x0
	FString UserToDeny; // 0x10
};

struct FAnimNode_ScaleChainLength : FAnimNode_Base {
	FPoseLink InputPose; // 0x10
	float DefaultChainLength; // 0x20
	FBoneReference ChainStartBone; // 0x24
	FBoneReference ChainEndBone; // 0x38
	FVector TargetLocation; // 0x4c
	float Alpha; // 0x58
	FInputScaleBias AlphaScaleBias; // 0x60
	EScaleChainInitialLength ChainInitialLength; // 0x68
};

struct FServerDeletePlayerRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabId; // 0x8
};

struct FWeightedBlendable {
	float Weight; // 0x0
	UObject* Object; // 0x8
};

struct FRootMotionSource_MoveToDynamicForce : FRootMotionSource {
	uint16_t Priority; // 0x10
	uint16_t LocalID; // 0x12
	ERootMotionAccumulateMode AccumulateMode; // 0x14
	FName InstanceName; // 0x18
	float StartTime; // 0x24
	float CurrentTime; // 0x28
	float PreviousTime; // 0x2c
	float Duration; // 0x30
	FRootMotionSourceStatus Status; // 0x34
	FRootMotionSourceSettings Settings; // 0x35
	bool bInLocalSpace; // 0x36
	FRootMotionMovementParams RootMotionParams; // 0x40
	FRootMotionFinishVelocitySettings FinishVelocityParams; // 0x80
	FVector StartLocation; // 0x98
	FVector InitialTargetLocation; // 0xa4
	FVector TargetLocation; // 0xb0
	bool bRestrictSpeedToExpected; // 0xbc
	UCurveVector* PathOffsetCurve; // 0xc0
	UCurveFloat* TimeMappingCurve; // 0xc8
};

struct FAdminExportMasterPlayerDataRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabId; // 0x8
};

struct FGroupsListGroupBlocksResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> BlockedEntities; // 0x8
};

struct FAkMidiChannelAftertouch : FAkMidiEventBase {
	EAkMidiEventType Type; // 0x0
	char Chan; // 0x1
	char Value; // 0x2
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

struct FMultiplayerListMultiplayerServersResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> MultiplayerServerSummaries; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FServerSetPublisherDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FSkeletalMeshComponentClothTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x40
};

struct FTimelineLinearColorTrack {
	UCurveLinearColor* LinearColorCurve; // 0x0
	DelegateProperty InterpFunc; // 0x8
	FName TrackName; // 0x1c
	FName LinearColorPropertyName; // 0x28
	UStructProperty* LinearColorProperty; // 0x38
};

struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieScenePropertySectionData PropertyData; // 0x20
};

struct FServerAddSharedGroupMembersRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabIds; // 0x8
	FString SharedGroupId; // 0x18
};

struct FClientLinkSteamAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FRuntimeFloatCurve {
	FRichCurve EditorCurveData; // 0x0
	UCurveFloat* ExternalCurve; // 0x80
};

struct FLinearConstraint : FConstraintBaseParams {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float Restitution; // 0x8
	float ContactDistance; // 0xc
	char bSoftConstraint : 1; // 0x10
	float Limit; // 0x14
	ELinearConstraintMotion XMotion; // 0x18
	ELinearConstraintMotion YMotion; // 0x19
	ELinearConstraintMotion ZMotion; // 0x1a
};

struct FClientValidateWindowsReceiptRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
	FString CurrencyCode; // 0x18
	int32_t PurchasePrice; // 0x28
	FString Receipt; // 0x30
};

struct FXGameplayAppliedEffectMap {
	TMap<FGameplayTag, FXGameplayAppliedEffectStack> Map; // 0x0
};

struct FSoundTrackKey {
	float Time; // 0x0
	float Volume; // 0x4
	float Pitch; // 0x8
	USoundBase* Sound; // 0x10
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

struct FAnimNode_RefPose : FAnimNode_Base {
	ERefPoseType RefPoseType; // 0x10
};

struct FTransformCurve : FAnimCurveBase {
	FName LastObservedName; // 0x0
	FSmartName Name; // 0xc
	int32_t CurveTypeFlags; // 0x1c
	FVectorCurve TranslationCurve; // 0x20
	FVectorCurve RotationCurve; // 0x1c0
	FVectorCurve ScaleCurve; // 0x360
};

struct FLightmassMaterialInterfaceSettings {
	char bCastShadowAsMasked : 1; // 0x0
	float EmissiveBoost; // 0x4
	float DiffuseBoost; // 0x8
	float ExportResolutionScale; // 0xc
	char bOverrideCastShadowAsMasked : 1; // 0x10
	char bOverrideEmissiveBoost : 1; // 0x10
	char bOverrideDiffuseBoost : 1; // 0x10
	char bOverrideExportResolutionScale : 1; // 0x10
};

struct FGNavInfo {
	DelegateProperty Delegate; // 0x0
	float InitialAxisValue; // 0x14
};

struct FComponentSpacePoseLink : FPoseLinkBase {
	int32_t LinkID; // 0x0
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

struct FPendingVisibilityLevelInfo {
	ULevel* Level; // 0x0
	FTransform LevelTransform; // 0x10
};

struct FAdminGetTitleDataRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString KeyS; // 0x8
};

struct FMovieSceneEvaluationGroup {
	TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x0
	TArray<FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT; // 0x10
};

struct FPolygonGroupForPolygon {
	FPolygonID PolygonID; // 0x0
	FPolygonGroupID PolygonGroupID; // 0x4
};

struct FGAddDamageAdjustmentRuleEffect_Context : FXGameplayEffectContext {
	TArray<FXGameplayEffectHandle> TrackedEffects; // 0x8
	TArray<AActor*> TrackedActors; // 0x18
	bool bEverActivated; // 0x28
	TArray<UGDamageAdjustmentRule*> AppliedAdjustmentRules; // 0x30
};

struct FXElementalFXDef_ParticleSystem : FXElementalFXDef {
	bool bUseRadiusRange; // 0x0
	FVector2D ValidRadiusRange; // 0x4
	FXElementalVector Offset; // 0xc
	FXElementalRotator Rotation; // 0x38
	FXElementalVector Size; // 0x58
	bool bNormalizeSize; // 0x84
	FVector BaseSize; // 0x88
	TArray<FXElementalFXParam> StaticParameters; // 0x98
	FGameplayTagContainer RequiredTags; // 0xa8
	FGameplayTagContainer IgnoredTags; // 0xc8
	UParticleSystem* ParticleSystem; // 0xe8
	bool bCastShadows; // 0xf0
	bool bHasSkillFeedback; // 0xf1
	FGameplayTag SkillTag; // 0xf4
	FXElementalFXParam SkillParam; // 0x100
	TWeakObjectPtr<UParticleSystemComponent> Instance; // 0x130
};

struct FXCharacterBasedMovementRep {
	FVector Location; // 0x0
	UPrimitiveComponent* MovementBase; // 0x10
	FName BoneName; // 0x18
	float Yaw; // 0x24
	bool bServerHasBaseComponent; // 0x28
	bool bRelativeRotation; // 0x29
	bool bServerHasVelocity; // 0x2a
};

struct FClientGetPlayFabIDsFromKongregateIDsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FCurveEdTab {
	FString TabName; // 0x0
	TArray<FCurveEdEntry> Curves; // 0x10
	float ViewStartInput; // 0x20
	float ViewEndInput; // 0x24
	float ViewStartOutput; // 0x28
	float ViewEndOutput; // 0x2c
};

struct FGroupsListGroupBlocksRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Group; // 0x8
};

struct FPacketSimulationSettings {
	int32_t PktLoss; // 0x0
	int32_t PktLossMaxSize; // 0x4
	int32_t PktLossMinSize; // 0x8
	int32_t PktOrder; // 0xc
	int32_t PktDup; // 0x10
	int32_t PktLag; // 0x14
	int32_t PktLagVariance; // 0x18
};

struct FClusterNode_DEPRECATED {
	FVector BoundMin; // 0x0
	int32_t FirstChild; // 0xc
	FVector BoundMax; // 0x10
	int32_t LastChild; // 0x1c
	int32_t FirstInstance; // 0x20
	int32_t LastInstance; // 0x24
};

struct FVirtualBone {
	FName SourceBoneName; // 0x0
	FName TargetBoneName; // 0xc
	FName VirtualBoneName; // 0x18
};

struct FClientPurchaseItemRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ItemId; // 0x28
	int32_t Price; // 0x38
	FString StoreId; // 0x40
	FString VirtualCurrency; // 0x50
};

struct FMultiplayerGetMatchRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool EscapeObject; // 0x8
	FString MatchID; // 0x10
	FString QueueName; // 0x20
	bool ReturnMemberAttributes; // 0x30
};

struct FServerConsumeItemResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString ItemInstanceId; // 0x8
	int32_t RemainingUses; // 0x18
};

struct FSubmixEffectSubmixEQSettings {
	TArray<FSubmixEffectEQBand> EQBands; // 0x0
};

struct FLocationServicesData {
	float Timestamp; // 0x0
	float Longitude; // 0x4
	float Latitude; // 0x8
	float HorizontalAccuracy; // 0xc
	float VerticalAccuracy; // 0x10
	float Altitude; // 0x14
};

struct FXItemDataTableRow : FTableRowBase {
	FText DisplayName; // 0x8
	FText Description; // 0x20
	UTexture2D* IconTexture; // 0x38
	EXRarity Rarity; // 0x40
	TArray<FName> GameplayTags; // 0x48
	int32_t MaxStackSize; // 0x58
	bool bAutoPickup; // 0x5c
	bool bDestroyOnDrop; // 0x5d
	bool bDropOnUnequip; // 0x5e
	bool bAutoUnequip; // 0x5f
	int32_t Amount; // 0x60
};

struct FAkMidiEventBase {
	EAkMidiEventType Type; // 0x0
	char Chan; // 0x1
};

struct FAdminGetTasksRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Identifier; // 0x8
};

struct FServerRegisterGameResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString LobbyId; // 0x8
};

struct FGCompassIconScaleInfo {
	double MinScale; // 0x0
	double MinScaleRange; // 0x8
	double MaxScale; // 0x10
	double MaxScaleRange; // 0x18
};

struct FMovieSceneEvaluationField {
	TArray<FMovieSceneFrameRange> Ranges; // 0x0
	TArray<FMovieSceneEvaluationGroup> Groups; // 0x10
	TArray<FMovieSceneEvaluationMetaData> MetaData; // 0x20
};

struct FGQuestStepJSON {
	TArray<FGQuestTriggerJSON> Triggers; // 0x0
};

struct FLiveLinkTimeSynchronizationSettings {
	FFrameRate FrameRate; // 0x0
};

struct FChannelDefinition {
	FName ChannelName; // 0x0
	FName ClassName; // 0xc
	UObject* ChannelClass; // 0x18
	int32_t StaticChannelIndex; // 0x20
	bool bTickOnCreate; // 0x24
	bool bServerOpen; // 0x25
	bool bClientOpen; // 0x26
	bool bInitialServer; // 0x27
	bool bInitialClient; // 0x28
};

struct FEngineServiceNotification {
	FString Text; // 0x0
	double TimeSeconds; // 0x10
};

struct FGPotionItemDataTableRow : FXItemDataTableRow {
	FText DisplayName; // 0x8
	FText Description; // 0x20
	UTexture2D* IconTexture; // 0x38
	EXRarity Rarity; // 0x40
	TArray<FName> GameplayTags; // 0x48
	int32_t MaxStackSize; // 0x58
	bool bAutoPickup; // 0x5c
	bool bDestroyOnDrop; // 0x5d
	bool bDropOnUnequip; // 0x5e
	bool bAutoUnequip; // 0x5f
	int32_t Amount; // 0x60
	TArray<FXScaledEffectClassJSON> Effects; // 0x68
	float ConsumeDuration; // 0x78
};

struct FAdminEmptyResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientValidateGooglePlayPurchaseResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FStaticComponentMaskParameter {
	FMaterialParameterInfo ParameterInfo; // 0x0
	bool R; // 0x14
	bool G; // 0x15
	bool B; // 0x16
	bool A; // 0x17
	bool bOverride; // 0x18
	FGuid ExpressionGUID; // 0x1c
};

struct FMemberReference {
	UObject* MemberParent; // 0x0
	FString MemberScope; // 0x8
	FName MemberName; // 0x18
	FGuid MemberGuid; // 0x24
	bool bSelfContext; // 0x34
	bool bWasDeprecated; // 0x35
};

struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x20
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
	DelegateProperty TimelinePostUpdateFunc; // 0x50
	DelegateProperty TimelineFinishedFunc; // 0x64
	TWeakObjectPtr<UObject> PropertySetObject; // 0x78
	FName DirectionPropertyName; // 0x80
	UProperty* DirectionProperty; // 0xa0
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
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8c
};

struct FPerBoneBlendWeight {
	int32_t SourceIndex; // 0x0
	float BlendWeight; // 0x4
};

struct FClientRemoveFriendResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FImageWriteOptions {
	EDesiredImageFormat Format; // 0x0
	DelegateProperty OnComplete; // 0x4
	int32_t CompressionQuality; // 0x18
	bool bOverwriteFile; // 0x1c
	bool bAsync; // 0x1d
};

struct FDialogueWaveParameter {
	UDialogueWave* DialogueWave; // 0x0
	FDialogueContext Context; // 0x8
};

struct FSkeletalMeshLODInfo {
	FPerPlatformFloat ScreenSize; // 0x0
	float LODHysteresis; // 0x4
	TArray<int32_t> LODMaterialMap; // 0x8
	FSkeletalMeshOptimizationSettings ReductionSettings; // 0x18
	TArray<FBoneReference> BonesToRemove; // 0x58
	TArray<FBoneReference> BonesToPrioritize; // 0x68
	float WeightOfPrioritization; // 0x78
	UAnimSequence* BakePose; // 0x80
	UAnimSequence* BakePoseOverride; // 0x88
	FString SourceImportFilename; // 0x90
	char bHasBeenSimplified : 1; // 0xa0
	char bHasPerLODVertexColors : 1; // 0xa0
	char bAllowCPUAccess : 1; // 0xa0
	char bSupportUniformlyDistributedSampling : 1; // 0xa0
};

struct FProfilesSetEntityProfilePolicyRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
	TArray<UPlayFabJsonObject*> Statements; // 0x10
};

struct FAnimNode_AnimDynamics : FAnimNode_SkeletalControlBase {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int32_t LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float Alpha; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8c
	float LinearDampingOverride; // 0xd0
	float AngularDampingOverride; // 0xd4
	FBoneReference RelativeSpaceBone; // 0x140
	FBoneReference BoundBone; // 0x154
	FBoneReference ChainEnd; // 0x168
	FVector BoxExtents; // 0x17c
	FVector LocalJointOffset; // 0x188
	float GravityScale; // 0x194
	FVector GravityOverride; // 0x198
	float LinearSpringConstant; // 0x1a4
	float AngularSpringConstant; // 0x1a8
	float WindScale; // 0x1ac
	FVector ComponentLinearAccScale; // 0x1b0
	FVector ComponentLinearVelScale; // 0x1bc
	FVector ComponentAppliedLinearAccClamp; // 0x1c8
	float AngularBiasOverride; // 0x1d4
	int32_t NumSolverIterationsPreUpdate; // 0x1d8
	int32_t NumSolverIterationsPostUpdate; // 0x1dc
	FAnimPhysConstraintSetup ConstraintSetup; // 0x1e0
	TArray<FAnimPhysSphericalLimit> SphericalLimits; // 0x228
	float SphereCollisionRadius; // 0x238
	FVector ExternalForce; // 0x23c
	TArray<FAnimPhysPlanarLimit> PlanarLimits; // 0x248
	AnimPhysCollisionType CollisionType; // 0x258
	AnimPhysSimSpaceType SimulationSpace; // 0x259
	char bUseSphericalLimits : 1; // 0x25c
	char bUsePlanarLimit : 1; // 0x25c
	char bDoUpdate : 1; // 0x25c
	char bDoEval : 1; // 0x25c
	char bOverrideLinearDamping : 1; // 0x25c
	char bOverrideAngularBias : 1; // 0x25c
	char bOverrideAngularDamping : 1; // 0x25c
	char bEnableWind : 1; // 0x25c
	char bUseGravityOverride : 1; // 0x25d
	char bLinearSpring : 1; // 0x25d
	char bAngularSpring : 1; // 0x25d
	char bChain : 1; // 0x25d
};

struct FXElementalVector {
	bool bInherit; // 0x0
	FVector Value; // 0x4
	FVector Padding; // 0x10
	bool bRandomize; // 0x1c
	FVector RandomValue; // 0x20
};

struct FAdminModifyServerBuildRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString ActiveRegions; // 0x8
	FString BuildId; // 0x18
	FString CommandLineTemplate; // 0x28
	FString Comment; // 0x38
	FString ExecutablePath; // 0x48
	int32_t MaxGamesPerHost; // 0x58
	int32_t MinFreeGameSlots; // 0x5c
	FString Timestamp; // 0x60
};

struct FHLODProxyMesh {
	ALODActor* LODActor; // 0x0
	UStaticMesh* StaticMesh; // 0x20
	FName Key; // 0x28
};

struct FClientGetCharacterLeaderboardResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FDropTimecode {
	FTimecode Timecode; // 0x0
	int32_t FrameRate; // 0x14
	bool bColorFraming; // 0x18
	bool bRunningForward; // 0x19
	bool bNewFrame; // 0x1a
};

struct FXApplicationAttributeRequirement {
	FGameplayTag AttributeTag; // 0x0
	float ChangeRemaining; // 0xc
	float ChangeThreshold; // 0x10
};

struct FSocketReference {
	FName SocketName; // 0x30
};

struct FMovieSceneControlRigInstanceData : FMovieSceneSequenceInstanceData {
	bool bAdditive; // 0x8
	bool bApplyBoneFilter; // 0x9
	FInputBlendPose BoneFilter; // 0x10
	FMovieSceneFloatChannel Weight; // 0x20
	FMovieSceneEvaluationOperand Operand; // 0xc0
};

struct FRigUnit_TwoBoneIKFK : FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FRigHierarchyRef HierarchyRef; // 0x28
	FName StartJoint; // 0x40
	FName EndJoint; // 0x4c
	bool bUsePoleTarget; // 0x58
	FVector PoleTarget; // 0x5c
	float Spin; // 0x68
	FTransform EndEffector; // 0x70
	float IKBlend; // 0xa0
	FTransform StartJointFKTransform; // 0xb0
	FTransform MidJointFKTransform; // 0xe0
	FTransform EndJointFKTransform; // 0x110
};

struct FClientListUsersCharactersResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Characters; // 0x8
};

struct FMatchmakerStartGameRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Build; // 0x8
	FString CustomCommandLineData; // 0x18
	FString ExternalMatchmakerEventEndpoint; // 0x28
	FString GameMode; // 0x38
	ERegion Region; // 0x48
};

struct FWorldContext {
	FURL LastURL; // 0xd8
	FURL LastRemoteURL; // 0x140
	UPendingNetGame* PendingNetGame; // 0x1a8
	TArray<FFullyLoadedPackagesInfo> PackagesToFullyLoad; // 0x1b0
	TArray<ULevel*> LoadedLevelsForPendingMapChange; // 0x1d0
	TArray<UObjectReferencer*> ObjectReferencers; // 0x1f8
	TArray<FLevelStreamingStatus> PendingLevelStreamingStatusUpdates; // 0x208
	UGameViewportClient* GameViewport; // 0x218
	UGameInstance* OwningGameInstance; // 0x220
	TArray<FNamedNetDriver> ActiveNetDrivers; // 0x228
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

struct FMovieSceneCameraAnimSectionData {
	UCameraAnim* CameraAnim; // 0x0
	float PlayRate; // 0x8
	float PlayScale; // 0xc
	float BlendInTime; // 0x10
	float BlendOutTime; // 0x14
	bool bLooping; // 0x18
};

struct FFontParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UFont* FontValue; // 0x18
	int32_t FontPage; // 0x20
	FGuid ExpressionGUID; // 0x24
};

struct FAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase {
	int32_t GroupIndex; // 0x10
	EAnimGroupRole GroupRole; // 0x14
	bool bIgnoreForRelevancyTest; // 0x15
	float BlendWeight; // 0x18
	float InternalTimeAccumulator; // 0x1c
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

struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FGLeagueXPDivisionJSON {
	TMap<FString, int32_t> LeagueXPByDivisionJSON; // 0x0
};

struct FClientOpenTradeRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString AllowedPlayerIds; // 0x8
	FString OfferedInventoryInstanceIds; // 0x18
	FString RequestedCatalogItemIds; // 0x28
};

struct FPhysicalSurfaceName {
	EPhysicalSurface Type; // 0x0
	FName Name; // 0x4
};

struct FPoseDriverTarget {
	TArray<FPoseDriverTransform> BoneTransforms; // 0x0
	FRotator TargetRotation; // 0x10
	float TargetScale; // 0x1c
	bool bApplyCustomCurve; // 0x20
	FRichCurve CustomCurve; // 0x28
	FName DrivenName; // 0xa8
};

struct FServerLoginWithServerCustomIdRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* InfoRequestParameters; // 0x10
	FString PlayerSecret; // 0x18
	FString ServerCustomId; // 0x28
};

struct FXCharacterMovementRep {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Yaw; // 0x18
	bool bApplyingAccelerationInMovementDirection; // 0x1c
};

struct FMovieSceneStringChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FString> Values; // 0x18
	FString DefaultValue; // 0x28
	bool bHasDefaultValue; // 0x38
};

struct FCachedAnimStateData {
	FName StateMachineName; // 0x0
	FName StateName; // 0xc
};

struct FAdminListOpenIdConnectionRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FClientReportPlayerClientRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Comment; // 0x8
	FString ReporteeId; // 0x18
};

struct FCustomInput {
	FName InputName; // 0x0
	FExpressionInput Input; // 0xc
};

struct FIntMargin {
	int32_t Left; // 0x0
	int32_t Top; // 0x4
	int32_t Right; // 0x8
	int32_t Bottom; // 0xc
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

struct FSliderStyle : FSlateWidgetStyle {
	FSlateBrush NormalBarImage; // 0x8
	FSlateBrush HoveredBarImage; // 0x98
	FSlateBrush DisabledBarImage; // 0x128
	FSlateBrush NormalThumbImage; // 0x1b8
	FSlateBrush HoveredThumbImage; // 0x248
	FSlateBrush DisabledThumbImage; // 0x2d8
	float BarThickness; // 0x368
};

struct FLiveLinkRetargetAssetReference {
	ULiveLinkRetargetAsset* CurrentRetargetAsset; // 0x0
};

struct FRigUnit_QuaternionToAxisAndAngle : FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FQuat Argument; // 0x30
	FVector Axis; // 0x40
	float Angle; // 0x4c
};

struct FSoundConcurrencySettings {
	int32_t MaxCount; // 0x0
	char bLimitToOwner : 1; // 0x4
	EMaxConcurrentResolutionRule ResolutionRule; // 0x8
	float VolumeScale; // 0xc
};

struct FRealCurve : FIndexedCurve {
	FKeyHandleMap KeyHandlesToIndices; // 0x8
	ERichCurveExtrapolation PreInfinityExtrap; // 0x68
	ERichCurveExtrapolation PostInfinityExtrap; // 0x69
	float DefaultValue; // 0x6c
};

struct FCachedAnimRelevancyData {
	FName StateMachineName; // 0x0
	FName StateName; // 0xc
};

struct FClientGetFriendLeaderboardRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool IncludeFacebookFriends; // 0x8
	bool IncludeSteamFriends; // 0x9
	int32_t MaxResultsCount; // 0xc
	UPlayFabJsonObject* ProfileConstraints; // 0x10
	int32_t StartPosition; // 0x18
	FString StatisticName; // 0x20
	bool UseSpecificVersion; // 0x30
	int32_t Version; // 0x34
	FString XboxToken; // 0x38
};

struct FMultiplayerGetTitleMultiplayerServersQuotasResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Quotas; // 0x8
};

struct FGPostGameClassStats {
	EGGameMode GameMode; // 0x0
	EGGameVariantRule ModeVariantRule; // 0x1
	UGCharacterClass* ChosenClass; // 0x8
	TArray<UGCharacterPerk*> ChosenPerks; // 0x10
	float XPGained; // 0x20
	float LeagueXPGained; // 0x24
	float ChapterReputationGained; // 0x28
	float KillCount; // 0x2c
	float AssistCount; // 0x30
	float DamageCount; // 0x34
	float TimeSurvived; // 0x38
	TArray<FPrimaryAssetId> Accolades; // 0x40
	TArray<FPrimaryAssetId> Quests; // 0x50
	float LeagueMatchEntryCost; // 0x60
};

struct FBuildPromotionTestSettings {
	FFilePath DefaultStaticMeshAsset; // 0x0
	FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10
	FBuildPromotionOpenAssetSettings OpenAssets; // 0x160
	FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1c0
	FFilePath SourceControlMaterial; // 0x1e0
};

struct FXGameplayAppliedEffect : FFastArraySerializerItem {
	int32_t ReplicationID; // 0x0
	int32_t ReplicationKey; // 0x4
	int32_t MostRecentArrayReplicationKey; // 0x8
	float PeriodTimeLeft; // 0xc
	float TimeLeft; // 0x10
	TMap<FGameplayTag, float> RemovalAtributeChangeRemainingMap; // 0x18
	FXGameplayEffectHandle Handle; // 0x68
	TArray<FXGameplayEffectHandle> ChildEffects; // 0x80
	UXGameplayEffect* EffectClass; // 0xa8
	FXGameplayEffectApplicationParams ApplicationParams; // 0xb0
	bool bAuthIsActive; // 0xd8
	bool bLocalIsActive; // 0xd9
	float ServerTimeApplied; // 0xdc
	float ServerTimePaused; // 0xe0
	float AppliedDuration; // 0xe4
};

struct FAIDataProviderBoolValue : FAIDataProviderTypedValue {
	UProperty* CachedProperty; // 0x8
	UAIDataProvider* DataBinding; // 0x10
	FName DataField; // 0x18
	UProperty* PropertyType; // 0x28
	bool DefaultValue; // 0x30
};

struct FPerPlatformBool {
	bool Default; // 0x0
};

struct FClientAddFriendRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString FriendEmail; // 0x8
	FString FriendPlayFabId; // 0x18
	FString FriendTitleDisplayName; // 0x28
	FString FriendUsername; // 0x38
};

struct FXActiveActionCue : FFastArraySerializerItem {
	int32_t ReplicationID; // 0x0
	int32_t ReplicationKey; // 0x4
	int32_t MostRecentArrayReplicationKey; // 0x8
	AXActionCue* CueClass; // 0x10
	FXActionCueParameters CueParams; // 0x18
};

struct FVisibilityTrackKey {
	float Time; // 0x0
	EVisibilityTrackAction Action; // 0x4
	EVisibilityTrackCondition ActiveCondition; // 0x5
};

struct FXUsablesInRange {
	TArray<TWeakObjectPtr<AXUsableActor>> List; // 0x0
};

struct FMovieSceneSubSequenceData {
	FSoftObjectPath Sequence; // 0x0
	FMovieSceneSequenceTransform RootToSequenceTransform; // 0x20
	FFrameRate TickResolution; // 0x2c
	FMovieSceneSequenceID DeterministicSequenceID; // 0x34
	FMovieSceneFrameRange PlayRange; // 0x38
	FMovieSceneFrameRange PreRollRange; // 0x48
	FMovieSceneFrameRange PostRollRange; // 0x58
	int32_t HierarchicalBias; // 0x68
	FMovieSceneSequenceInstanceDataPtr InstanceData; // 0x70
	FGuid SubSectionSignature; // 0x90
	FMovieSceneSequenceTransform OuterToInnerTransform; // 0xa0
};

struct FMatchmakerAuthUserRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString AuthorizationTicket; // 0x8
};

struct FLODSoloTrack {
	TArray<char> SoloEnableSetting; // 0x0
};

struct FStaticParameterSet {
	TArray<FStaticSwitchParameter> StaticSwitchParameters; // 0x0
	TArray<FStaticComponentMaskParameter> StaticComponentMaskParameters; // 0x10
	TArray<FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters; // 0x20
	TArray<FStaticMaterialLayersParameter> MaterialLayersParameters; // 0x30
};

struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString MasterPlayerAccountIds; // 0x8
};

struct FAutomationExecutionEntry {
	FAutomationEvent Event; // 0x0
	FString Filename; // 0x38
	int32_t LineNumber; // 0x48
	FDateTime Timestamp; // 0x50
};

struct FAdminBanUsersResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FDetectedFeature {
	float Confidence; // 0x0
};

struct FEdgeID : FElementID {
	int32_t IDValue; // 0x0
};

struct FAdminRevokeAllBansForUserRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabId; // 0x8
};

struct FMultiplayerListQosServersForTitleRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FServerGetLeaderboardAroundUserResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int32_t Version; // 0x28
};

struct FRotationLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
};

struct FMovieSceneEventSectionTemplate : FMovieSceneEventTemplateBase {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	TArray<FMovieSceneObjectBindingID> EventReceivers; // 0x20
	char bFireEventsWhenForwards : 1; // 0x30
	char bFireEventsWhenBackwards : 1; // 0x30
	FMovieSceneEventSectionData EventData; // 0x38
};

struct FMaterialFunctionInfo {
	FGuid StateId; // 0x0
	UMaterialFunctionInterface* Function; // 0x10
};

struct FClientRemoveContactEmailRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FAngularDriveConstraint {
	FConstraintDrive TwistDrive; // 0x0
	FConstraintDrive SwingDrive; // 0x10
	FConstraintDrive SlerpDrive; // 0x20
	FRotator OrientationTarget; // 0x30
	FVector AngularVelocityTarget; // 0x3c
	EAngularDriveMode AngularDriveMode; // 0x48
};

struct FAdminListVirtualCurrencyTypesRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FPlayerReservation {
	FUniqueNetIdRepl UniqueId; // 0x0
	FString ValidationStr; // 0x28
	FString Platform; // 0x38
	bool bAllowCrossplay; // 0x48
	float ElapsedTime; // 0x4c
};

struct FXProcessDescriptor {
	FString ID; // 0x0
	TArray<FString> Args; // 0x10
	TMap<FString, FString> Env; // 0x20
	bool bAttached; // 0x70
};

struct FPrecomputedSkyLightInstanceData : FSceneComponentInstanceData {
	UObject* SourceComponentTemplate; // 0x8
	EComponentCreationMethod SourceComponentCreationMethod; // 0x10
	int32_t SourceComponentTypeSerializedIndex; // 0x14
	TArray<char> SavedProperties; // 0x18
	TArray<FActorComponentDuplicatedObjectData> DuplicatedObjects; // 0x28
	TArray<UObject*> ReferencedObjects; // 0x38
	TArray<FName> ReferencedNames; // 0x48
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x58
	FGuid LightGuid; // 0xa8
	float AverageBrightness; // 0xb8
};

struct FChangeVertexInstancesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs; // 0x8
	TArray<FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole; // 0x18
};

struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	int32_t MaterialIndex; // 0x20
	FMovieSceneObjectPathChannel MaterialChannel; // 0x28
};

struct FGCosmeticSkinDataTableRow : FGCosmeticItemDataTableRow {
	FText DisplayName; // 0x8
	FText Description; // 0x20
	UTexture2D* IconTexture; // 0x38
	EXRarity Rarity; // 0x68
	FPrimaryAssetId UpgradesInto; // 0x6c
	FText UpgradeableSetDisplayName; // 0x88
	FText UpgradeableSetRequirementsDescription; // 0xa0
	UXCharacterSkin* SkinData; // 0xb8
	UTexture2D* FullBodyTexture; // 0xe8
};

struct FAdminRemoveServerBuildResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAnimNode_CCDIK : FAnimNode_SkeletalControlBase {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int32_t LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float Alpha; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8c
	FVector EffectorLocation; // 0xd0
	EBoneControlSpace EffectorLocationSpace; // 0xdc
	FBoneSocketTarget EffectorTarget; // 0xe0
	FBoneReference TipBone; // 0x150
	FBoneReference RootBone; // 0x164
	float Precision; // 0x178
	int32_t MaxIterations; // 0x17c
	bool bStartFromTail; // 0x180
	bool bEnableRotationLimit; // 0x181
	TArray<float> RotationLimitPerJoints; // 0x188
};

struct FDestructibleDepthParameters {
	EImpactDamageOverride ImpactDamageOverride; // 0x0
};

struct FMatchmakerPlayerLeftRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString LobbyId; // 0x8
	FString PlayFabId; // 0x18
};

struct FEndPhysicsTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x40
};

struct FGenericTeamId {
	char TeamId; // 0x0
};

struct FClothConfig {
	EClothingWindMethod WindMethod; // 0x0
	FClothConstraintSetup VerticalConstraintConfig; // 0x4
	FClothConstraintSetup HorizontalConstraintConfig; // 0x14
	FClothConstraintSetup BendConstraintConfig; // 0x24
	FClothConstraintSetup ShearConstraintConfig; // 0x34
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

struct FVirtualKeyboardOptions {
	bool bEnableAutocorrect; // 0x0
};

struct FGameModeName {
	FString Name; // 0x0
	FSoftClassPath GameMode; // 0x10
};

struct FPrimaryAssetId {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FName PrimaryAssetName; // 0xc
};

struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString NintendoSwitchDeviceIds; // 0x8
};

struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int32_t LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float Alpha; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8c
	FBoneReference BoneToModify; // 0xd0
	FVector Translation; // 0xe4
	FRotator Rotation; // 0xf0
	FVector Scale; // 0xfc
	EBoneModificationMode TranslationMode; // 0x108
	EBoneModificationMode RotationMode; // 0x109
	EBoneModificationMode ScaleMode; // 0x10a
	EBoneControlSpace TranslationSpace; // 0x10b
	EBoneControlSpace RotationSpace; // 0x10c
	EBoneControlSpace ScaleSpace; // 0x10d
};

struct FMovieSceneEvaluationKey {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
	uint32_t SectionIndex; // 0x8
};

struct FMultiplayerGetRemoteLoginEndpointResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString IPV4Address; // 0x8
	int32_t Port; // 0x18
};

struct FMultiplayerEnableMultiplayerServersForTitleResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	ETitleMultiplayerServerEnabledStatus Status; // 0x8
};

struct FGPerkLevelData {
	FText Description; // 0x0
	TArray<FXScaledEffectClass> Effects; // 0x18
};

struct FModulatorContinuousParams {
	FName ParameterName; // 0x0
	float Default; // 0xc
	float MinInput; // 0x10
	float MaxInput; // 0x14
	float MinOutput; // 0x18
	float MaxOutput; // 0x1c
	ModulationParamMode ParamMode; // 0x20
};

struct FServerGetPlayFabIDsFromXboxLiveIDsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Sandbox; // 0x8
	FString XboxLiveAccountIDs; // 0x18
};

struct FServerRedeemCouponResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> GrantedItems; // 0x8
};

struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString NintendoSwitchDeviceIds; // 0x8
};

struct FAIRequestID {
	uint32_t RequestID; // 0x0
};

struct FNiagaraCollisionEventPayload {
	FVector CollisionPos; // 0x0
	FVector CollisionNormal; // 0xc
	FVector CollisionVelocity; // 0x18
	int32_t ParticleIndex; // 0x24
	int32_t PhysicalMaterialIndex; // 0x28
};

struct FGSkillActivationEffect : FGTriggeredActivationEffect {
	UXGameplayEffect* EffectClass; // 0x0
	float EffectScale; // 0x8
	float EffectDurationScale; // 0xc
	bool bApplyOnceOnly; // 0x10
	APawn* EffectInstigator; // 0x18
	TWeakObjectPtr<UObject> EffectSource; // 0x20
};

struct FNamedLensPreset {
	FString Name; // 0x0
	FCameraLensSettings LensSettings; // 0x10
};

struct FColorGradePerRangeSettings {
	FVector4 Saturation; // 0x0
	FVector4 Contrast; // 0x10
	FVector4 Gamma; // 0x20
	FVector4 Gain; // 0x30
	FVector4 Offset; // 0x40
};

struct FPhysicalAnimationProfile {
	FName ProfileName; // 0x0
	FPhysicalAnimationData PhysicalAnimationData; // 0xc
};

struct FAdminGetTitleDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Data; // 0x8
};

struct FGMapClosureDefinition {
	float TimeUntilClosingStart; // 0x0
	float Radius; // 0x4
	float CloseDuration; // 0x8
	float DPS; // 0xc
	float DPSWhileClosing; // 0x10
	bool bGrantReward; // 0x14
	FVector StartingCenter; // 0x18
	FVector TargetCenter; // 0x24
	float StartTime; // 0x30
};

struct FServerSendCustomAccountRecoveryEmailResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAdminLookupUserAccountInfoRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Email; // 0x8
	FString PlayFabId; // 0x18
	FString TitleDisplayName; // 0x28
	FString Username; // 0x38
};

struct FAudioQualitySettings {
	FText DisplayName; // 0x0
	int32_t MaxChannels; // 0x18
};

struct FGroupsEmptyResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FPaperSpriteSocket {
	FTransform LocalTransform; // 0x0
	FName SocketName; // 0x30
};

struct FGAchievementDataTableRow : FTableRowBase {
	FString ID; // 0x8
	bool bCumulative; // 0x18
	FString ItemCategory; // 0x20
	bool bMustBePlayerReward; // 0x30
	bool bMustBeClassReward; // 0x31
	TArray<FGAchievementTriggerJSON> Triggers; // 0x38
	int32_t RequiredTally; // 0x48
	FString PlatformStatName; // 0x50
};

struct FGCosmeticCategoryInfo {
	FText LabelLocalized; // 0x0
	FGameplayTag PaneTag; // 0x18
};

struct FAdminGetPlayerTagsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString PlayFabId; // 0x8
	FString Tags; // 0x18
};

struct FAdminListOpenIdConnectionResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Connections; // 0x8
};

struct FAdminSendAccountRecoveryEmailRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Email; // 0x8
	FString EmailTemplateId; // 0x18
};

struct FClientValidateIOSReceiptResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FPaperTileInfo {
	UPaperTileSet* TileSet; // 0x0
	int32_t PackedTileIndex; // 0x8
};

struct FAnimSegment {
	UAnimSequenceBase* AnimReference; // 0x0
	float StartPos; // 0x8
	float AnimStartTime; // 0xc
	float AnimEndTime; // 0x10
	float AnimPlayRate; // 0x14
	int32_t LoopingCount; // 0x18
};

struct FPolygonToCreate {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FVertexAndAttributes> PerimeterVertices; // 0x8
	FPolygonID OriginalPolygonID; // 0x18
	EPolygonEdgeHardness PolygonEdgeHardness; // 0x1c
};

struct FGridBlendSample {
	FEditorElement GridElement; // 0x0
	float BlendWeight; // 0x18
};

struct FClientGetSharedGroupDataRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool GetMembers; // 0x8
	FString KeyS; // 0x10
	FString SharedGroupId; // 0x20
};

struct FMultiplayerListCertificateSummariesRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t PageSize; // 0x8
	FString SkipToken; // 0x10
};

struct FGSpeakerDialogDataTableRow : FTableRowBase {
	FDataTableRowHandle SpeakerDefinition; // 0x8
	FGameplayTag Mood; // 0x20
	FText DialogLine; // 0x30
	float Duration; // 0x48
	UAkAudioEvent* VoiceOverStart; // 0x50
};

struct FClientUnlockContainerInstanceRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ContainerItemInstanceId; // 0x28
	FString KeyItemInstanceId; // 0x38
};

struct FDialogueContextMapping {
	FDialogueContext Context; // 0x0
	USoundWave* SoundWave; // 0x18
	FString LocalizationKeyFormat; // 0x20
	UDialogueSoundWaveProxy* Proxy; // 0x30
};

struct FConstraintNodeData {
	FTransform RelativeParent; // 0x0
	FConstraintOffset ConstraintOffset; // 0x30
	FName LinkedNode; // 0x90
	TArray<FTransformConstraint> Constraints; // 0xa0
};

struct FPaperTileSetTerrain {
	FString TerrainName; // 0x0
	int32_t CenterTileIndex; // 0x10
};

struct FEnvQueryInstanceCache {
	UEnvQuery* Template; // 0x0
};

struct FButtonStyle : FSlateWidgetStyle {
	FSlateBrush Normal; // 0x8
	FSlateBrush Hovered; // 0x98
	FSlateBrush Pressed; // 0x128
	FSlateBrush Disabled; // 0x1b8
	FMargin NormalPadding; // 0x248
	FMargin PressedPadding; // 0x258
	FSlateSound PressedSlateSound; // 0x268
	FSlateSound HoveredSlateSound; // 0x288
};

struct FVertexID : FElementID {
	int32_t IDValue; // 0x0
};

struct FDrawToRenderTargetContext {
	UTextureRenderTarget2D* RenderTarget; // 0x0
};

struct FDebugDisplayProperty {
	UObject* Obj; // 0x0
	UObject* WithinClass; // 0x8
};

struct FAIMoveRequest {
	AActor* GoalActor; // 0x0
};

struct FWidgetComponentInstanceData : FSceneComponentInstanceData {
	UObject* SourceComponentTemplate; // 0x8
	EComponentCreationMethod SourceComponentCreationMethod; // 0x10
	int32_t SourceComponentTypeSerializedIndex; // 0x14
	TArray<char> SavedProperties; // 0x18
	TArray<FActorComponentDuplicatedObjectData> DuplicatedObjects; // 0x28
	TArray<UObject*> ReferencedObjects; // 0x38
	TArray<FName> ReferencedNames; // 0x48
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x58
};

struct FGroupsCreateGroupRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
	FString GroupName; // 0x10
};

struct FDelegateArray {
	TArray<DelegateProperty> Delegates; // 0x0
};

struct FBlueprintComponentDelegateBinding {
	FName ComponentPropertyName; // 0x0
	FName DelegatePropertyName; // 0xc
	FName FunctionNameToBind; // 0x18
};

struct FClientGetFriendLeaderboardAroundPlayerResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int32_t Version; // 0x28
};

struct FBakedStateExitTransition {
	int32_t CanTakeDelegateIndex; // 0x0
	int32_t CustomResultNodeIndex; // 0x4
	int32_t TransitionIndex; // 0x8
	bool bDesiredTransitionReturnValue; // 0xc
	bool bAutomaticRemainingTimeRule; // 0xd
	TArray<int32_t> PoseEvaluatorLinks; // 0x10
};

struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieSceneCameraAnimSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FCameraLensSettings {
	float MinFocalLength; // 0x0
	float MaxFocalLength; // 0x4
	float MinFStop; // 0x8
	float MaxFStop; // 0xc
	float MinimumFocusDistance; // 0x10
	int32_t DiaphragmBladeCount; // 0x14
};

struct FClientGetPlayerTradesRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	ETradeStatus StatusFilter; // 0x8
};

struct FNavDataConfig : FNavAgentProperties {
	char bCanCrouch : 1; // 0x0
	char bCanJump : 1; // 0x0
	char bCanWalk : 1; // 0x0
	char bCanSwim : 1; // 0x0
	char bCanFly : 1; // 0x0
	float AgentRadius; // 0x4
	float AgentHeight; // 0x8
	float AgentStepHeight; // 0xc
	float NavWalkingSearchHeightScale; // 0x10
	FSoftClassPath PreferredNavData; // 0x18
	FName Name; // 0x38
	FColor Color; // 0x44
	FVector DefaultQueryExtent; // 0x48
	AActor* NavigationDataClass; // 0x58
	FSoftClassPath NavigationDataClassName; // 0x60
};

struct FPSCPool {
	TArray<FPSCPoolElem> FreeElements; // 0x0
};

struct FServerUpdatePlayerStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool ForceUpdate; // 0x8
	FString PlayFabId; // 0x10
	TArray<UPlayFabJsonObject*> Statistics; // 0x20
};

struct FPrimitiveComponentInstanceData : FSceneComponentInstanceData {
	UObject* SourceComponentTemplate; // 0x8
	EComponentCreationMethod SourceComponentCreationMethod; // 0x10
	int32_t SourceComponentTypeSerializedIndex; // 0x14
	TArray<char> SavedProperties; // 0x18
	TArray<FActorComponentDuplicatedObjectData> DuplicatedObjects; // 0x28
	TArray<UObject*> ReferencedObjects; // 0x38
	TArray<FName> ReferencedNames; // 0x48
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x58
	FTransform ComponentTransform; // 0xb0
	int32_t VisibilityId; // 0xe0
	UPrimitiveComponent* LODParent; // 0xe8
};

struct FAdminGetPlayersSegmentsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabId; // 0x8
};

struct FClientGetUserDataRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t IfChangedFromDataVersion; // 0x8
	FString KeyS; // 0x10
	FString PlayFabId; // 0x20
};

struct FMovieSceneVisibilitySectionTemplate : FMovieSceneBoolPropertySectionTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneBoolChannel BoolCurve; // 0x58
};

struct FMultiplayerListVirtualMachineSummariesResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	int32_t PageSize; // 0x8
	FString SkipToken; // 0x10
	TArray<UPlayFabJsonObject*> VirtualMachines; // 0x20
};

struct FActorPerceptionBlueprintInfo {
	AActor* Target; // 0x0
	TArray<FAIStimulus> LastSensedStimuli; // 0x8
	char bIsHostile : 1; // 0x18
};

struct FXRDeviceId {
	FName SystemName; // 0x0
	int32_t DeviceID; // 0xc
};

struct FClientLinkNintendoSwitchDeviceIdResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientUnlinkGameCenterAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FXCharacterAudioAdjustments {
	TMap<FGameplayTag, float> VolumeModifiers; // 0x0
	float OverallVolumeScale; // 0x50
	bool bIsLocallyControlled; // 0x54
};

struct FAnimNotifyEventReference {
	UObject* NotifySource; // 0x8
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

struct FAdminGetStoreItemsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
	FString StoreId; // 0x18
};

struct FPooledCameraShakes {
	TArray<UCameraShake*> PooledShakes; // 0x0
};

struct FServerGetRandomResultTablesRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
	FString TableIDs; // 0x18
};

struct FGLevelRewardsDataTableRow : FTableRowBase {
	TArray<FGLevelRewards> LevelEntries; // 0x8
};

struct FControlRigSequenceObjectReferences {
	TArray<FControlRigSequenceObjectReference> Array; // 0x0
};

struct FMovieSceneEvaluationGroupLUTIndex {
	int32_t LUTOffset; // 0x0
	int32_t NumInitPtrs; // 0x4
	int32_t NumEvalPtrs; // 0x8
};

struct FClientUnlinkKongregateAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FBlackboardEntry {
	FName EntryName; // 0x0
	UBlackboardKeyType* KeyType; // 0x10
	char bInstanceSynced : 1; // 0x18
};

struct FGChapterKeyDataTableRow : FTableRowBase {
	FText DisplayName; // 0x8
	EXRarity Rarity; // 0x20
	float ReputationMultiplier; // 0x24
	UTexture2D* IconTexture; // 0x28
};

struct FTickAnimationSharingFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x40
};

struct FGAccoladeRewardData {
	int32_t XP; // 0x0
	TMap<EGGameMode, FGLeagueXPDivision> LeagueXPByGameMode; // 0x8
};

struct FGLevelRewards {
	int32_t Level; // 0x0
	TArray<FPrimaryAssetId> Rewards; // 0x8
};

struct FAnimationBudgetAllocatorParameters {
	float BudgetInMs; // 0x0
	float MinQuality; // 0x4
	int32_t MaxTickRate; // 0x8
	float WorkUnitSmoothingSpeed; // 0xc
	float AlwaysTickFalloffAggression; // 0x10
	float InterpolationFalloffAggression; // 0x14
	int32_t InterpolationMaxRate; // 0x18
	int32_t MaxInterpolatedComponents; // 0x1c
	float InterpolationTickMultiplier; // 0x20
	float InitialEstimatedWorkUnitTimeMs; // 0x24
	int32_t MaxTickedOffsreenComponents; // 0x28
	int32_t StateChangeThrottleInFrames; // 0x2c
	float BudgetFactorBeforeReducedWork; // 0x30
	float BudgetFactorBeforeReducedWorkEpsilon; // 0x34
	float BudgetPressureSmoothingSpeed; // 0x38
	int32_t ReducedWorkThrottleMinInFrames; // 0x3c
	int32_t ReducedWorkThrottleMaxInFrames; // 0x40
	float BudgetFactorBeforeAggressiveReducedWork; // 0x44
	int32_t ReducedWorkThrottleMaxPerFrame; // 0x48
	float BudgetPressureBeforeEmergencyReducedWork; // 0x4c
};

struct FAdminGetUserBansResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FGServerInfo {
	FString ID; // 0x0
	FString MatchmakingMatchId; // 0x10
	FString Mode; // 0x20
	FString Region; // 0x30
};

struct FProcMeshTangent {
	FVector TangentX; // 0x0
	bool bFlipTangentY; // 0xc
};

struct FBranchFilter {
	FName BoneName; // 0x0
	int32_t BlendDepth; // 0xc
};

struct FMultiplayerGetAssetUploadUrlResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString AssetUploadUrl; // 0x8
	FString Filename; // 0x18
};

struct FClientUpdateUserDataRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Data; // 0x8
	FString KeysToRemove; // 0x10
	EUserDataPermission Permission; // 0x20
};

struct FAdminUpdateCloudScriptResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	int32_t Revision; // 0x8
	int32_t Version; // 0xc
};

struct FStringCurve : FIndexedCurve {
	FKeyHandleMap KeyHandlesToIndices; // 0x8
	FString DefaultValue; // 0x68
	TArray<FStringCurveKey> KeyS; // 0x78
};

struct FAIDataProviderStructValue : FAIDataProviderValue {
	UProperty* CachedProperty; // 0x8
	UAIDataProvider* DataBinding; // 0x10
	FName DataField; // 0x18
};

struct FMultiplayerListQosServersForTitleResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	int32_t PageSize; // 0x8
	TArray<UPlayFabJsonObject*> QosServers; // 0x10
	FString SkipToken; // 0x20
};

struct FNodeHierarchyData {
	TArray<FNodeObject> Nodes; // 0x0
	TArray<FTransform> Transforms; // 0x10
	TMap<FName, int32_t> NodeNameToIndexMapping; // 0x20
};

struct FSplineIKCachedBoneData {
	FBoneReference Bone; // 0x0
	int32_t RefSkeletonIndex; // 0x14
};

struct FClientUpdateUserTitleDisplayNameResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString DisplayName; // 0x8
};

struct FClientGetPlayerProfileResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* PlayerProfile; // 0x8
};

struct FGActiveSkillActorSpawn {
	AActor* ActorClass; // 0x0
	EAttachmentRule AttachmentRule; // 0x8
	FName SocketName; // 0xc
};

struct FPoseLink : FPoseLinkBase {
	int32_t LinkID; // 0x0
};

struct FNiagaraEmitterScriptProperties {
	UNiagaraScript* Script; // 0x0
	TArray<FNiagaraEventReceiverProperties> EventReceivers; // 0x8
	TArray<FNiagaraEventGeneratorProperties> EventGenerators; // 0x18
};

struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int32_t LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float Alpha; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8c
	FBoneReference BoneToModify; // 0xd0
	FBoneSocketTarget LookAtTarget; // 0xf0
	FVector LookAtLocation; // 0x160
	FAxis LookAt_Axis; // 0x16c
	bool bUseLookUpAxis; // 0x17c
	EInterpolationBlend InterpolationType; // 0x17d
	FAxis LookUp_Axis; // 0x180
	float LookAtClamp; // 0x190
	float InterpolationTime; // 0x194
	float InterpolationTriggerThreashold; // 0x198
};

struct FVectorCurve : FAnimCurveBase {
	FName LastObservedName; // 0x0
	FSmartName Name; // 0xc
	int32_t CurveTypeFlags; // 0x1c
	FRichCurve FloatCurves[0x3]; // 0x20
};

struct FMovieSceneAkAudioEventTemplate : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	UMovieSceneAkAudioEventSection* Section; // 0x20
};

struct FVOscillator {
	FFOscillator X; // 0x0
	FFOscillator Y; // 0xc
	FFOscillator Z; // 0x18
};

struct FGAccoladeRewardDataJSON {
	int32_t XP; // 0x0
	TMap<EGGameMode, FGLeagueXPDivisionJSON> LeagueXPByGameModeJSON; // 0x8
};

struct FAnimNotifyArray {
	TArray<FAnimNotifyEventReference> Notifies; // 0x0
};

struct FGCompassIconWidgetEntry {
	UXUserWidget* IconWidget; // 0x0
	AActor* TargetActor; // 0x8
	FGCompassIconScaleInfo ScaleInfo; // 0x10
	FVector CachedTargetLoc; // 0x30
};

struct FNavAgentProperties : FMovementProperties {
	char bCanCrouch : 1; // 0x0
	char bCanJump : 1; // 0x0
	char bCanWalk : 1; // 0x0
	char bCanSwim : 1; // 0x0
	char bCanFly : 1; // 0x0
	float AgentRadius; // 0x4
	float AgentHeight; // 0x8
	float AgentStepHeight; // 0xc
	float NavWalkingSearchHeightScale; // 0x10
	FSoftClassPath PreferredNavData; // 0x18
};

struct FXRewindReplicationData {
	FInterpCurveVector LocationCurve; // 0x0
	FInterpCurveQuat RotationCurve; // 0x18
	float ElapsedTime; // 0x30
};

struct FSimpleCurveKey {
	float Time; // 0x0
	float Value; // 0x4
};

struct FVertexIndexAndInstanceID {
	int32_t ContourIndex; // 0x0
	FVertexInstanceID VertexInstanceID; // 0x4
};

struct FLinearDriveConstraint {
	FVector PositionTarget; // 0x0
	FVector VelocityTarget; // 0xc
	FConstraintDrive XDrive; // 0x18
	FConstraintDrive YDrive; // 0x28
	FConstraintDrive ZDrive; // 0x38
	char bEnablePositionDrive : 1; // 0x48
};

struct FServerGetPlayFabIDsFromGenericIDsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	TArray<UPlayFabJsonObject*> GenericIDs; // 0x8
};

struct FServerSendCustomAccountRecoveryEmailRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Email; // 0x8
	FString EmailTemplateId; // 0x18
	FString Username; // 0x28
};

struct FDestructibleAdvancedParameters {
	float DamageCap; // 0x0
	float ImpactVelocityThreshold; // 0x4
	float MaxChunkSpeed; // 0x8
	float FractureImpulseScale; // 0xc
};

struct FServerGetPlayerStatisticVersionsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString StatisticName; // 0x8
};

struct FUserActivity {
	FString ActionName; // 0x0
};

struct FGroupsRemoveGroupInvitationRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FClientGetPlayerTagsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Namespace; // 0x8
	FString PlayFabId; // 0x18
};

struct FDynamicTextureInstance : FStreamableTextureInstance {
	UTexture2D* Texture; // 0x28
	bool bAttached; // 0x30
	float OriginalRadius; // 0x34
};

struct FAdminGetRandomResultTablesResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Tables; // 0x8
};

struct FRigJoint {
	FName Name; // 0x0
	FName ParentName; // 0xc
	int32_t ParentIndex; // 0x18
	FTransform InitialTransform; // 0x20
	FTransform GlobalTransform; // 0x50
	FTransform LocalTransform; // 0x80
	TArray<int32_t> Dependents; // 0xb0
};

struct FTimerHandle {
	uint64_t Handle; // 0x0
};

struct FGAttributeChangeEventEffect_Context : FXGameplayEffectContext {
	TArray<FXGameplayEffectHandle> TrackedEffects; // 0x8
	TArray<AActor*> TrackedActors; // 0x18
	bool bEverActivated; // 0x28
	TArray<FGTrackedAttributeChange> TrackedChanges; // 0x30
	float CachedDelta; // 0x40
};

struct FGMapClosureState {
	EGMapClosureState State; // 0x0
	int32_t ClosureIndex; // 0x4
};

struct FTransformBase {
	FName Node; // 0x0
	FTransformBaseConstraint Constraints[0x2]; // 0x10
};

struct FGSquadMateStatusIcon {
	FGameplayTag StatusTag; // 0x0
	UTexture2D* Texture; // 0x10
};

struct FCompositionGraphCapturePasses {
	TArray<FString> Value; // 0x0
};

struct FClientGetPaymentTokenRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString TokenProvider; // 0x8
};

struct FPrimaryAssetRulesOverride {
	FPrimaryAssetId PrimaryAssetId; // 0x0
	FPrimaryAssetRules Rules; // 0x18
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

struct FBoneFilter {
	bool bExcludeSelf; // 0x0
	FName BoneName; // 0x4
};

struct FDestructibleParameters {
	FDestructibleDamageParameters DamageParameters; // 0x0
	FDestructibleDebrisParameters DebrisParameters; // 0x1c
	FDestructibleAdvancedParameters AdvancedParameters; // 0x48
	FDestructibleSpecialHierarchyDepths SpecialHierarchyDepths; // 0x58
	TArray<FDestructibleDepthParameters> DepthParameters; // 0x70
	FDestructibleParametersFlag Flags; // 0x80
};

struct FNiagaraTypeDefinition {
	UStruct* Struct; // 0x0
	UEnum* Enum; // 0x8
};

struct FBasedPosition {
	AActor* Base; // 0x0
	FVector Position; // 0x8
	FVector CachedBaseLocation; // 0x14
	FRotator CachedBaseRotation; // 0x20
	FVector CachedTransPosition; // 0x2c
};

struct FMovieSceneAudioSectionTemplateData {
	USoundBase* Sound; // 0x0
	FFrameNumber AudioStartOffset; // 0x8
	double SectionStartTimeSeconds; // 0x10
	FMovieSceneFloatChannel AudioPitchMultiplierCurve; // 0x18
	FMovieSceneFloatChannel AudioVolumeCurve; // 0xb8
	int32_t RowIndex; // 0x158
	bool bOverrideAttenuation; // 0x15c
	USoundAttenuation* AttenuationSettings; // 0x160
	DelegateProperty OnQueueSubtitles; // 0x168
	FScriptMulticastDelegate OnAudioFinished; // 0x180
	FScriptMulticastDelegate OnAudioPlaybackPercent; // 0x190
};

struct FNiagaraEventReceiverProperties {
	FName Name; // 0x0
	FName SourceEventGenerator; // 0xc
	FName SourceEmitter; // 0x18
};

struct FGCosmeticDropTrailDataTableRow : FGCosmeticItemDataTableRow {
	FText DisplayName; // 0x8
	FText Description; // 0x20
	UTexture2D* IconTexture; // 0x38
	EXRarity Rarity; // 0x68
	FPrimaryAssetId UpgradesInto; // 0x6c
	FText UpgradeableSetDisplayName; // 0x88
	FText UpgradeableSetRequirementsDescription; // 0xa0
	USkeletalMesh* SkeletalMesh; // 0xb8
	float RotationYaw; // 0xe8
	float RotationPitch; // 0xec
	float RotationRoll; // 0xf0
	UClass* DropLandingCueClass; // 0xf8
};

struct FNamedNetDriver {
	UNetDriver* NetDriver; // 0x0
};

struct FClientAddOrUpdateContactEmailResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FGAttackActivationEffect : FGTriggeredActivationEffect {
	UXGameplayEffect* EffectClass; // 0x0
	float EffectScale; // 0x8
	float EffectDurationScale; // 0xc
	bool bApplyOnceOnly; // 0x10
	APawn* EffectInstigator; // 0x18
	TWeakObjectPtr<UObject> EffectSource; // 0x20
	bool bSpecificFireMode; // 0x28
	bool bAddOnlyToFiringWeapon; // 0x29
	AGWeaponActor* SpecificClass; // 0x30
	int32_t FireMode; // 0x38
	EGAttackActivationEffectTriggerMode ActivationTriggerMode; // 0x3c
	FGameplayTag QuestEventTag; // 0x40
};

struct FMultiplayerGetContainerRegistryCredentialsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
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

struct FClientGetLeaderboardAroundCharacterRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CharacterId; // 0x8
	FString CharacterType; // 0x18
	int32_t MaxResultsCount; // 0x28
	FString StatisticName; // 0x30
};

struct FRawCurveTracks {
	TArray<FFloatCurve> FloatCurves; // 0x0
	TArray<FTransformCurve> BakedTransformCurves; // 0x10
	TArray<FVectorCurve> BakedVectorCurves; // 0x20
};

struct FUniqueNetIdRepl : FUniqueNetIdWrapper {
	TArray<char> ReplicationBytes; // 0x18
};

struct FXGameplayEffectContext {
	TArray<FXGameplayEffectHandle> TrackedEffects; // 0x8
	TArray<AActor*> TrackedActors; // 0x18
	bool bEverActivated; // 0x28
};

struct FWidgetTransform {
	FVector2D Translation; // 0x0
	FVector2D Scale; // 0x8
	FVector2D Shear; // 0x10
	float Angle; // 0x18
};

struct FAdminGetPlayerProfileResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* PlayerProfile; // 0x8
};

struct FXActionCustomState_Potion : FXActionCustomState_OverrideDuration {
	float DurationOverride; // 0x8
	FName PotionType; // 0x10
};

struct FDropNoteInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FString Comment; // 0x18
};

struct FGSpeakerDialogBuffer {
	UImage* Avatar; // 0x0
	URichTextBlock* Name; // 0x8
	URichTextBlock* Text; // 0x10
};

struct FAdminGetPlayersInSegmentRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString ContinuationToken; // 0x8
	int32_t MaxBatchSize; // 0x18
	int32_t SecondsToLive; // 0x1c
	FString SegmentId; // 0x20
};

struct FServerGetCharacterStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CharacterId; // 0x8
	FString PlayFabId; // 0x18
};

struct FFindFloorResult {
	char bBlockingHit : 1; // 0x0
	char bWalkableFloor : 1; // 0x0
	char bLineTrace : 1; // 0x0
	float FloorDist; // 0x4
	float LineDist; // 0x8
	FHitResult HitResult; // 0xc
};

struct FSegmentArray : FFastArraySerializer {
	TArray<FSegmentEntry> Items; // 0xb0
};

struct FAdminModifyMatchmakerGameModesResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FTimeStretchCurveInstance {
	bool bHasValidData; // 0x0
};

struct FGElementalFX {
	UParticleSystem* ParticleSystem; // 0x0
	UAkAudioEvent* Sound; // 0x8
};

struct FLiveLinkMetaData {
	TMap<FName, FString> StringMetadata; // 0x0
	FQualifiedFrameTime SceneTime; // 0x50
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

struct FMultiplayerGetBuildRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString BuildId; // 0x8
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

struct FMultiplayerGetBuildAliasRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString AliasId; // 0x8
};

struct FBoneNode {
	FName Name; // 0x0
	int32_t ParentIndex; // 0xc
	EBoneTranslationRetargetingMode TranslationRetargetingMode; // 0x10
};

struct FMovieSceneAdditiveCameraAnimationTemplate : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
};

struct FMultiplayerListAssetSummariesResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> AssetSummaries; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FClientStartGameResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString Expires; // 0x8
	FString LobbyId; // 0x18
	FString Password; // 0x28
	FString ServerIPV4Address; // 0x38
	FString ServerIPV6Address; // 0x48
	int32_t ServerPort; // 0x58
	FString ServerPublicDNSName; // 0x60
	FString Ticket; // 0x70
};

struct FMovieSceneEventChannel : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneEvent> KeyValues; // 0x18
};

struct FStringCurveKey {
	float Time; // 0x0
	FString Value; // 0x8
};

struct FAdminResetCharacterStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CharacterId; // 0x8
	FString PlayFabId; // 0x18
};

struct FServerGetServerCustomIDsFromPlayFabIDsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabIds; // 0x8
};

struct FInterpCurvePointTwoVectors {
	float InVal; // 0x0
	FTwoVectors OutVal; // 0x4
	FTwoVectors ArriveTangent; // 0x1c
	FTwoVectors LeaveTangent; // 0x34
	EInterpCurveMode InterpMode; // 0x4c
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

struct FMovieSceneVectorPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneFloatChannel ComponentCurves[0x4]; // 0x58
	int32_t NumChannelsUsed; // 0x2d8
	EMovieSceneBlendType BlendType; // 0x2dc
};

struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase {
	FFrameNumber Time; // 0x8
	FVector Vector; // 0x28
};

struct FAkPoly {
	UAkAcousticTexture* Texture; // 0x0
	bool EnableSurface; // 0x8
};

struct FMovieSceneSectionParameters {
	FFrameNumber StartFrameOffset; // 0x0
	float TimeScale; // 0x4
	int32_t HierarchicalBias; // 0x8
	float StartOffset; // 0xc
	float PrerollTime; // 0x10
	float PostrollTime; // 0x14
};

struct FGChannelUserData {
	TWeakObjectPtr<AGCharacter> User; // 0x0
	FVector Origin; // 0x8
};

struct FCrowdAvoidanceSamplingPattern {
	TArray<float> Angles; // 0x0
	TArray<float> Radii; // 0x10
};

struct FCameraLookatTrackingSettings {
	char bEnableLookAtTracking : 1; // 0x0
	char bDrawDebugLookAtTrackingPosition : 1; // 0x0
	float LookAtTrackingInterpSpeed; // 0x4
	AActor* ActorToTrack; // 0x18
	FVector RelativeOffset; // 0x48
	char bAllowRoll : 1; // 0x54
};

struct FAdminRemovePlayerTagRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabId; // 0x8
	FString TagName; // 0x18
};

struct FChunkPartData {
	FGuid Guid; // 0x0
	uint32_t Offset; // 0x10
	uint32_t Size; // 0x14
};

struct FMultiplayerDeleteAssetRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Filename; // 0x8
};

struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase {
	TArray<FPoseLink> BlendPose; // 0x10
	TArray<float> BlendTime; // 0x20
	EAlphaBlendOption BlendType; // 0x30
	bool bResetChildOnActivation; // 0x31
	UCurveFloat* CustomBlendCurve; // 0x38
	UBlendProfile* BlendProfile; // 0x40
	TArray<int32_t> EnumToPoseIndex; // 0x98
	char ActiveEnumValue; // 0xa8
};

struct FGPingActorClassMapping {
	EGPingReactionType PingReactionType; // 0x0
	AActor* ContextActorClass; // 0x8
	AGPingBase* PingActorClass; // 0x10
};

struct FLandscapeEditToolRenderData {
	UMaterialInterface* ToolMaterial; // 0x0
	UMaterialInterface* GizmoMaterial; // 0x8
	int32_t SelectedType; // 0x10
	int32_t DebugChannelR; // 0x14
	int32_t DebugChannelG; // 0x18
	int32_t DebugChannelB; // 0x1c
	UTexture2D* DataTexture; // 0x20
};

struct FAdminUpdateRandomResultTablesResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FPackedNormal {
	char X; // 0x0
	char Y; // 0x1
	char Z; // 0x2
	char W; // 0x3
};

struct FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer {
	int32_t GroupIndex; // 0x10
	EAnimGroupRole GroupRole; // 0x14
	bool bIgnoreForRelevancyTest; // 0x15
	float BlendWeight; // 0x18
	float InternalTimeAccumulator; // 0x1c
	float X; // 0x30
	float Y; // 0x34
	float Z; // 0x38
	float PlayRate; // 0x3c
	bool bLoop; // 0x40
	bool bResetPlayTimeWhenBlendSpaceChanges; // 0x41
	float StartPosition; // 0x44
	UBlendSpaceBase* BlendSpace; // 0x48
	UBlendSpaceBase* PreviousBlendSpace; // 0xd8
	FPoseLink BasePose; // 0x140
	int32_t LODThreshold; // 0x150
	FName SourceSocketName; // 0x154
	FName PivotSocketName; // 0x160
	FVector LookAtLocation; // 0x16c
	FVector SocketAxis; // 0x178
	float Alpha; // 0x184
};

struct FAdminListBuildsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Builds; // 0x8
};

struct FServerAddSharedGroupMembersResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FEngineServiceAuthGrant {
	FString Username; // 0x0
	FString UserToGrant; // 0x10
};

struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
	FFrameNumber Time; // 0x14
};

struct FSupportedSubTrackInfo {
	UInterpTrack* SupportedClass; // 0x0
	FString SubTrackName; // 0x8
	int32_t GroupIndex; // 0x18
};

struct FAdminRevokeInventoryItemsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Errors; // 0x8
};

struct FXBotAimingPreferences {
	float MomentumSensitivity; // 0x0
	float CompensationRateScale; // 0x4
	float AdditionalReactionTime; // 0x8
	bool bAdjustTowardGround; // 0xc
	float GroundAdjustDistance; // 0x10
};

struct FUpdateLevelVisibilityLevelInfo {
	FName PackageName; // 0x0
	char bIsVisible : 1; // 0xc
};

struct FClientGetPlayerSegmentsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FPlayerMuteList {
	bool bHasVoiceHandshakeCompleted; // 0x30
	int32_t VoiceChannelIdx; // 0x34
};

struct FTypeface {
	TArray<FTypefaceEntry> Fonts; // 0x0
};

struct FMeshBuildSettings {
	char bUseMikkTSpace : 1; // 0x0
	char bRecomputeNormals : 1; // 0x0
	char bRecomputeTangents : 1; // 0x0
	char bRemoveDegenerates : 1; // 0x0
	char bBuildAdjacencyBuffer : 1; // 0x0
	char bBuildReversedIndexBuffer : 1; // 0x0
	char bUseHighPrecisionTangentBasis : 1; // 0x0
	char bUseFullPrecisionUVs : 1; // 0x0
	char bGenerateLightmapUVs : 1; // 0x1
	char bGenerateDistanceFieldAsIfTwoSided : 1; // 0x1
	int32_t MinLightmapResolution; // 0x4
	int32_t SrcLightmapIndex; // 0x8
	int32_t DstLightmapIndex; // 0xc
	float BuildScale; // 0x10
	FVector BuildScale3D; // 0x14
	float DistanceFieldResolutionScale; // 0x20
	UStaticMesh* DistanceFieldReplacementMesh; // 0x28
};

struct FClientGetPlayFabIDsFromGameCenterIDsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString GameCenterIDs; // 0x8
};

struct FSourceEffectChainEntry {
	USoundEffectSourcePreset* Preset; // 0x0
	char bBypass : 1; // 0x8
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

struct FClientLinkIOSDeviceIDResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAdminDeleteTitleResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FVMExternalFunctionBindingInfo {
	FName Name; // 0x0
	FName OwnerName; // 0xc
	TArray<bool> InputParamLocations; // 0x18
	int32_t NumOutputs; // 0x28
};

struct FInterpCurveVector {
	TArray<FInterpCurvePointVector> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FXScaledDamageEffectClass : FXScaledEffectClass {
	UXGameplayEffect* EffectClass; // 0x0
	float Scale; // 0x8
	float DurationScale; // 0xc
	bool bClientAutonomous; // 0x10
	bool bScaleEffectByDamage; // 0x18
	bool bApplyToTeammates; // 0x19
	EXScaledDamageEffectApplicationTrigger EffectApplicationTrigger; // 0x1a
};

struct FXElementalRotator {
	bool bInherit; // 0x0
	FRotator Value; // 0x4
	bool bRandomize; // 0x10
	FRotator RandomValue; // 0x14
};

struct FXWeaponLastFire {
	FVector_NetQuantize Pos; // 0x0
	FRotator Rot; // 0xc
	bool bUsingLeftWeapon; // 0x18
	char Stamp; // 0x19
	int32_t FireMode; // 0x1c
	EXRangedAttackPayload Payload; // 0x20
};

struct FAdminGetStoreItemsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* MarketingData; // 0x18
	EPfSourceType Source; // 0x20
	TArray<UPlayFabJsonObject*> Store; // 0x28
	FString StoreId; // 0x38
};

struct FMultiplayerDeleteRemoteUserRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString BuildId; // 0x8
	FString Region; // 0x18
	FString Username; // 0x28
	FString VmId; // 0x38
};

struct FMovieSceneEulerTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieScene3DTransformTemplateData TemplateData; // 0x58
};

struct FMatchmakerPlayerJoinedRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString LobbyId; // 0x8
	FString PlayFabId; // 0x18
};

struct FGroupsCreateGroupRoleRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Group; // 0x8
	FString RoleId; // 0x10
	FString RoleName; // 0x20
};

struct FInterpCurveQuat {
	TArray<FInterpCurvePointQuat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FQualifiedFrameTime {
	FFrameTime Time; // 0x0
	FFrameRate Rate; // 0x8
};

struct FCollisionImpactData {
	TArray<FRigidBodyContactInfo> ContactInfos; // 0x0
	FVector TotalNormalImpulse; // 0x10
	FVector TotalFrictionImpulse; // 0x1c
};

struct FAISenseAffiliationFilter {
	char bDetectEnemies : 1; // 0x0
	char bDetectNeutrals : 1; // 0x0
	char bDetectFriendlies : 1; // 0x0
};

struct FCustomFieldData {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FAkMidiNoteAftertouch : FAkMidiEventBase {
	EAkMidiEventType Type; // 0x0
	char Chan; // 0x1
	char Note; // 0x2
	char Value; // 0x3
};

struct FServerLinkPSNAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FControlRigSequenceObjectReferenceMap {
	TArray<FGuid> BindingIds; // 0x0
	TArray<FControlRigSequenceObjectReferences> References; // 0x10
};

struct FMovieSceneAkAudioRTPCTemplate : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	UMovieSceneAkAudioRTPCSection* Section; // 0x20
};

struct FGElementalExplosion {
	AXExplosionDecalActor* ExplosionActorClass; // 0x0
	TArray<FXElementalFXDef_ParticleSystem> ParticleSystems; // 0x8
	TArray<FXElementalFXDef_Sound> Sounds; // 0x18
	bool bOrientToImpactNormal; // 0x28
	float BaseRadius; // 0x2c
	FGElementalState RequiredStates; // 0x30
	FGElementalState ExcludedStates; // 0x38
	FGameplayTagContainer RequiredTags; // 0x40
	FGameplayTagContainer IgnoredTags; // 0x60
	bool bRestrictToRadiusRange; // 0x80
	float MinRadius; // 0x84
	float MaxRadius; // 0x88
};

struct FVector4 {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FMovieSceneSequenceTransform {
	float TimeScale; // 0x0
	FFrameTime Offset; // 0x4
};

struct FIntPoint {
	int32_t X; // 0x0
	int32_t Y; // 0x4
};

struct FAdminCreateCloudScriptTaskRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Description; // 0x8
	bool IsActive; // 0x18
	FString Name; // 0x20
	UPlayFabJsonObject* Parameter; // 0x30
	FString Schedule; // 0x38
};

struct FServerUnlinkPSNAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabId; // 0x8
};

struct FGSphereEffectDefinitionBase {
	EGEffectStateRequirement Requirement; // 0x0
	FXScaledEffectClass Effect; // 0x8
};

struct FXPoisonBurstDamageThreshold {
	int32_t Count; // 0x0
	float Damage; // 0x4
};

struct FGroupsListGroupApplicationsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Group; // 0x8
};

struct FClientAddGenericIDRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* GenericId; // 0x8
};

struct FServerUpdateAvatarUrlRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString ImageUrl; // 0x8
	FString PlayFabId; // 0x18
};

struct FLobbyPlayerStateActorInfo : FFastArraySerializerItem {
	int32_t ReplicationID; // 0x0
	int32_t ReplicationKey; // 0x4
	int32_t MostRecentArrayReplicationKey; // 0x8
	ALobbyBeaconPlayerState* LobbyPlayerState; // 0x10
};

struct FGSurveyAnswer {
	FText Text; // 0x0
	FName NextQuestionId; // 0x18
};

struct FAkMidiNoteOnOff : FAkMidiEventBase {
	EAkMidiEventType Type; // 0x0
	char Chan; // 0x1
	char Note; // 0x2
	char Velocity; // 0x3
};

struct FDataGetObjectsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Objects; // 0x10
	int32_t ProfileVersion; // 0x18
};

struct FCurveTrack {
	FName CurveName; // 0x0
	TArray<float> CurveWeights; // 0x10
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

struct FGameplayTagRedirect {
	FName OldTagName; // 0x0
	FName NewTagName; // 0xc
};

struct FServerGetPlayerProfileRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabId; // 0x8
	UPlayFabJsonObject* ProfileConstraints; // 0x18
};

struct FPartyReservation {
	int32_t TeamNum; // 0x0
	FUniqueNetIdRepl PartyLeader; // 0x8
	TArray<FPlayerReservation> PartyMembers; // 0x30
};

struct FClientGetPurchaseResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString OrderId; // 0x8
	FString PaymentProvider; // 0x18
	FString PurchaseDate; // 0x28
	FString TransactionId; // 0x38
	FString TransactionStatus; // 0x48
};

struct FCachedAnimTransitionData {
	FName StateMachineName; // 0x0
	FName FromStateName; // 0xc
	FName ToStateName; // 0x18
};

struct FClientLinkFacebookInstantGamesIdResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FVertexInstancesForPolygonHole {
	TArray<FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs; // 0x0
};

struct FSubdividedWireEdge {
	int32_t EdgeVertex0PositionIndex; // 0x0
	int32_t EdgeVertex1PositionIndex; // 0x4
};

struct FClothLODData {
	FClothPhysicalMeshData PhysicalMeshData; // 0x0
	FClothCollisionData CollisionData; // 0xa8
};

struct FVectorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x10
	FMovieSceneFloatChannel YCurve; // 0xb0
	FMovieSceneFloatChannel ZCurve; // 0x150
};

struct FPolygonGroupToCreate {
	FMeshElementAttributeList PolygonGroupAttributes; // 0x0
	FPolygonGroupID OriginalPolygonGroupID; // 0x10
};

struct FSavedMaterialSwap {
	TWeakObjectPtr<UPrimitiveComponent> Primitive; // 0x0
	int32_t SwappedIndex; // 0x8
	UMaterialInterface* SwappedMaterial; // 0x10
};

struct FMovieScene2DTransformMask {
	uint32_t Mask; // 0x0
};

struct FXTalentSetTableRow : FTableRowBase {
	FPrimaryAssetId MindTalentId; // 0x8
	FPrimaryAssetId BodyTalentId; // 0x20
	FPrimaryAssetId SpiritTalentId; // 0x38
};

struct FFontData {
	FString FontFilename; // 0x0
	EFontHinting Hinting; // 0x10
	EFontLoadingPolicy LoadingPolicy; // 0x11
	int32_t SubFaceIndex; // 0x14
	UObject* FontFaceAsset; // 0x18
};

struct FServerUpdateCharacterStatisticsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FXNoiseEventSettings {
	float Loudness; // 0x0
	float MaxRange; // 0x4
	FName Tag; // 0x8
};

struct FDockTabStyle : FSlateWidgetStyle {
	FButtonStyle CloseButtonStyle; // 0x8
	FSlateBrush NormalBrush; // 0x2b0
	FSlateBrush ActiveBrush; // 0x340
	FSlateBrush ColorOverlayTabBrush; // 0x3d0
	FSlateBrush ColorOverlayIconBrush; // 0x460
	FSlateBrush ForegroundBrush; // 0x4f0
	FSlateBrush HoveredBrush; // 0x580
	FSlateBrush ContentAreaBrush; // 0x610
	FSlateBrush TabWellBrush; // 0x6a0
	FMargin TabPadding; // 0x730
	float OverlapWidth; // 0x740
	FSlateColor FlashColor; // 0x748
};

struct FClientAddUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t Amount; // 0x8
	FString VirtualCurrency; // 0x10
};

struct FMovieScenePropertySectionData {
	FName PropertyName; // 0x0
	FString PropertyPath; // 0x10
	FName FunctionName; // 0x20
	FName NotifyFunctionName; // 0x2c
};

struct FAnimSetMeshLinkup {
	TArray<int32_t> BoneToTrackTable; // 0x0
};

struct FServerMoveItemToUserFromCharacterRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
};

struct FPIELoginSettingsInternal {
	FString ID; // 0x0
	FString Token; // 0x10
	FString Type; // 0x20
	TArray<char> TokenBytes; // 0x30
};

struct FConstraintData {
	FConstraintDescriptor Constraint; // 0x0
	float Weight; // 0x10
	bool bMaintainOffset; // 0x14
	FTransform Offset; // 0x20
	FTransform CurrentTransform; // 0x50
};

struct FClientConfirmPurchaseResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Items; // 0x8
	FString OrderId; // 0x18
	FString PurchaseDate; // 0x28
};

struct FServerGetUserInventoryRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabId; // 0x8
};

struct FProviderPollResult {
	FString Name; // 0x10
	FString MachineName; // 0x20
};

struct FMultiplayerListContainerImagesRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t PageSize; // 0x8
	FString SkipToken; // 0x10
};

struct FClientRedeemCouponResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> GrantedItems; // 0x8
};

struct FAnimTickRecord {
	UAnimationAsset* SourceAsset; // 0x0
};

struct FGCompassPoolIconList {
	TArray<UXUserWidget*> IconList; // 0x0
};

struct FGCosmeticTitleDataTableRow : FGCosmeticItemDataTableRow {
	FText DisplayName; // 0x8
	FText Description; // 0x20
	UTexture2D* IconTexture; // 0x38
	EXRarity Rarity; // 0x68
	FPrimaryAssetId UpgradesInto; // 0x6c
	FText UpgradeableSetDisplayName; // 0x88
	FText UpgradeableSetRequirementsDescription; // 0xa0
	FText TitleDisplayText; // 0xb8
};

struct FClientUnlinkNintendoSwitchDeviceIdRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString NintendoSwitchDeviceId; // 0x8
};

struct FMultiplayerGetMatchResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString MatchID; // 0x8
	TArray<UPlayFabJsonObject*> Members; // 0x18
	FString RegionPreferences; // 0x28
	UPlayFabJsonObject* ServerDetails; // 0x38
};

struct FAkAdvancedInitializationSettings {
	uint32_t IO_MemorySize; // 0x0
	float TargetAutoStreamBufferLength; // 0x4
	bool UseStreamCache; // 0x8
	uint32_t MaximumPinnedBytesInCache; // 0xc
	int32_t PrepareEventMemoryPoolID; // 0x10
	bool EnableGameSyncPreparation; // 0x14
	uint32_t ContinuousPlaybackLookAhead; // 0x18
	uint32_t MonitorPoolSize; // 0x1c
	uint32_t MonitorQueuePoolSize; // 0x20
	uint32_t MaximumHardwareTimeoutMs; // 0x24
	FAkAdvancedSpatialAudioSettings SpatialAudioSettings; // 0x28
};

struct FAdminDeleteStoreRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
	FString StoreId; // 0x18
};

struct FDetectedFaceFeatureRegion : FDetectedFeatureRegion {
	float Confidence; // 0x0
	TArray<FVector2D> Points; // 0x8
	EDetectedFaceFeatureType FeatureType; // 0x18
};

struct FXRichTextStyleRow : FRichTextStyleRow {
	FTextBlockStyle TextStyle; // 0x8
	FGameplayTag ColorPurposeTag; // 0x298
};

struct FHeaderRowStyle : FSlateWidgetStyle {
	FTableColumnHeaderStyle ColumnStyle; // 0x8
	FTableColumnHeaderStyle LastColumnStyle; // 0x520
	FSplitterStyle ColumnSplitterStyle; // 0xa38
	FSlateBrush BackgroundBrush; // 0xb60
	FSlateColor ForegroundColor; // 0xbf0
};

struct FEnvDirection {
	UEnvQueryContext* LineFrom; // 0x0
	UEnvQueryContext* LineTo; // 0x8
	UEnvQueryContext* Rotation; // 0x10
	EEnvDirection DirMode; // 0x18
};

struct FJsonObjectWrapper {
	FString JsonString; // 0x0
};

struct FQuat {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FClientGetCatalogItemsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Catalog; // 0x8
};

struct FAngularRangeLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
	FBoneReference Bone; // 0x18
};

struct FClientLinkCustomIDRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CustomId; // 0x8
	bool ForceLink; // 0x18
};

struct FCapturedPropSegment {
	FString PropertyName; // 0x0
	int32_t PropertyIndex; // 0x10
	FString ComponentName; // 0x18
};

struct FMovieSceneTemplateGenerationLedger {
	FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x0
	TMap<FGuid, FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x8
	TMap<FGuid, FMovieSceneFrameRange> SubSectionRanges; // 0x58
};

struct FClientEmptyResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientGetAccountInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* AccountInfo; // 0x8
};

struct FXQueuedMeleeDamage {
	float Time; // 0x0
	UXMeleeDamageApplication* Applier; // 0x8
	FXMeleeDamageEvent DamageEvent; // 0x10
};

struct FGroupsAcceptGroupApplicationRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FClientUnlinkSteamAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientUnlinkWindowsHelloAccountResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FShapedTextOptions {
	char bOverride_TextShapingMethod : 1; // 0x0
	char bOverride_TextFlowDirection : 1; // 0x0
	ETextShapingMethod TextShapingMethod; // 0x1
	ETextFlowDirection TextFlowDirection; // 0x2
};

struct FAdminAddPlayerTagRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabId; // 0x8
	FString TagName; // 0x18
};

struct FMultiplayerCancelServerBackfillTicketResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FGShockwaveTrailEntry {
	AActor* TrailActorClass; // 0x0
	FGElementalState RequiredStates; // 0x8
	FGElementalState ExcludedStates; // 0x10
	float Padding; // 0x18
	float ScalingThreshold; // 0x1c
	float ScaleAtStart; // 0x20
	float ScaleAtThreshold; // 0x24
	bool bServerOnly; // 0x28
	bool bClientOnly; // 0x29
};

struct FTTTrackBase {
	FName TrackName; // 0x8
	bool bIsExternalCurve; // 0x14
};

struct FDataGetFilesResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* MetaData; // 0x10
	int32_t ProfileVersion; // 0x18
};

struct FWalkableSlopeOverride {
	EWalkableSlopeBehavior WalkableSlopeBehavior; // 0x0
	float WalkableSlopeAngle; // 0x4
};

struct FEditorElement {
	int32_t Indices[0x3]; // 0x0
	float Weights[0x3]; // 0xc
};

struct FAdminGetPlayedTitleListRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabId; // 0x8
};

struct FRigUnit_UnaryQuaternionOp : FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FQuat Argument; // 0x30
	FQuat Result; // 0x40
};

struct FGameplayTagTableRow : FTableRowBase {
	FName Tag; // 0x8
	FString DevComment; // 0x18
};

struct FPlatformInterfaceDelegateResult {
	bool bSuccessful; // 0x0
	FPlatformInterfaceData Data; // 0x8
};

struct FInterpCurvePointQuat {
	float InVal; // 0x0
	FQuat OutVal; // 0x10
	FQuat ArriveTangent; // 0x20
	FQuat LeaveTangent; // 0x30
	EInterpCurveMode InterpMode; // 0x40
};

struct FServerGetSharedGroupDataRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool GetMembers; // 0x8
	FString KeyS; // 0x10
	FString SharedGroupId; // 0x20
};

struct FServerAuthenticateSessionTicketRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString SessionTicket; // 0x8
};

struct FNDIStaticMeshSectionFilter {
	TArray<int32_t> AllowedMaterialSlots; // 0x0
};

struct FMeshElementAttributeList {
	TArray<FMeshElementAttributeData> Attributes; // 0x0
};

struct FNamedFilmbackPreset {
	FString Name; // 0x0
	FCameraFilmbackSettings FilmbackSettings; // 0x10
};

struct FSessionServiceLog {
	FName Category; // 0x0
	FString Data; // 0x10
	FGuid InstanceId; // 0x20
	double TimeSeconds; // 0x30
	char Verbosity; // 0x38
};

struct FMultiplayerListQosServersResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	int32_t PageSize; // 0x8
	TArray<UPlayFabJsonObject*> QosServers; // 0x10
	FString SkipToken; // 0x20
};

struct FGenericStruct {
	int32_t Data; // 0x0
};

struct FKAggregateGeom {
	TArray<FKSphereElem> SphereElems; // 0x0
	TArray<FKBoxElem> BoxElems; // 0x10
	TArray<FKSphylElem> SphylElems; // 0x20
	TArray<FKConvexElem> ConvexElems; // 0x30
	TArray<FKTaperedCapsuleElem> TaperedCapsuleElems; // 0x40
};

struct FAdminRemoveVirtualCurrencyTypesRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	TArray<UPlayFabJsonObject*> VirtualCurrencies; // 0x8
};

struct FServerUpdateBansResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FServerGetLeaderboardForUsersCharactersResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FRecordedFrame {
	TArray<FTransform> Transforms; // 0x0
	TArray<int32_t> TransformIndices; // 0x10
	TArray<int32_t> PreviousTransformIndices; // 0x20
	TArray<bool> DisabledFlags; // 0x30
	TArray<FSolverCollisionData> Collisions; // 0x40
	TArray<FSolverTrailingData> Trailings; // 0x50
	float Timestamp; // 0x60
};

struct FGPendingTrailSpawn {
	FGShockwaveTrailEntry Entry; // 0x0
	FVector SpawnPosition; // 0x30
	FRotator SpawnRotator; // 0x3c
};

struct FRadialDamageParams {
	float BaseDamage; // 0x0
	float MinimumDamage; // 0x4
	float InnerRadius; // 0x8
	float OuterRadius; // 0xc
	float DamageFalloff; // 0x10
};

struct FDatasmithReimportOptions {
	bool bUpdateActors; // 0x0
	bool bRespawnDeletedActors; // 0x1
};

struct FGSidebarOption {
	FText Label; // 0x0
	FSlateBrush IconBrush; // 0x18
	FGameplayTag MenuTag; // 0xa8
};

struct FComboButtonStyle : FSlateWidgetStyle {
	FButtonStyle ButtonStyle; // 0x8
	FSlateBrush DownArrowImage; // 0x2b0
	FSlateBrush MenuBorderBrush; // 0x340
	FMargin MenuBorderPadding; // 0x3d0
};

struct FCheckBoxStyle : FSlateWidgetStyle {
	ESlateCheckBoxType CheckBoxType; // 0x8
	FSlateBrush UncheckedImage; // 0x10
	FSlateBrush UncheckedHoveredImage; // 0xa0
	FSlateBrush UncheckedPressedImage; // 0x130
	FSlateBrush CheckedImage; // 0x1c0
	FSlateBrush CheckedHoveredImage; // 0x250
	FSlateBrush CheckedPressedImage; // 0x2e0
	FSlateBrush UndeterminedImage; // 0x370
	FSlateBrush UndeterminedHoveredImage; // 0x400
	FSlateBrush UndeterminedPressedImage; // 0x490
	FMargin Padding; // 0x520
	FSlateColor ForegroundColor; // 0x530
	FSlateColor BorderBackgroundColor; // 0x558
	FSlateSound CheckedSlateSound; // 0x580
	FSlateSound UncheckedSlateSound; // 0x5a0
	FSlateSound HoveredSlateSound; // 0x5c0
};

struct FGroupsUpdateGroupRoleResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString OperationReason; // 0x8
	int32_t ProfileVersion; // 0x18
	EOperationTypes SetResult; // 0x1c
};

struct FXServerMoveAdjustment {
	char CorrectionStamp; // 0x0
	float Timestamp; // 0x4
	float ServerTime; // 0x8
	FVector Location; // 0xc
	FVector Velocity; // 0x18
	float Yaw; // 0x24
	UPrimitiveComponent* Base; // 0x28
	FName BaseBoneName; // 0x30
	bool bHasBase; // 0x3c
	bool bBaseRelativePosition; // 0x3d
	char MovementMode; // 0x3e
	FXNetActionState ActionNetState; // 0x40
	float ActionPlayhead; // 0x68
};

struct FServerGetLeaderboardResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int32_t Version; // 0x28
};

struct FServerGetStoreItemsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* MarketingData; // 0x18
	EPfSourceType Source; // 0x20
	TArray<UPlayFabJsonObject*> Store; // 0x28
	FString StoreId; // 0x38
};

struct FDamageEvent {
	UDamageType* DamageTypeClass; // 0x8
};

struct FAdminGetUserDataRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t IfChangedFromDataVersion; // 0x8
	FString KeyS; // 0x10
	FString PlayFabId; // 0x20
};

struct FServerEmptyResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAuthenticationGetEntityTokenResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
	FString EntityToken; // 0x10
	FString TokenExpiration; // 0x20
};

struct FXLootSpawnLayerOverride {
	FName LandscapeLayer; // 0x0
	FDataTableRowHandle LootRow; // 0x10
	float LayerWeight; // 0x28
};

struct FServerUnlinkXboxAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabId; // 0x8
	FString XboxToken; // 0x18
};

struct FServerUnlinkServerCustomIdRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabId; // 0x8
	FString ServerCustomId; // 0x18
};

struct FProgressBarStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundImage; // 0x8
	FSlateBrush FillImage; // 0x98
	FSlateBrush MarqueeImage; // 0x128
};

struct FClientUnlinkWindowsHelloAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PublicKeyHint; // 0x8
};

struct FGameplayTag {
	FName TagName; // 0x0
};

struct FMultiplayerCancelMatchmakingTicketResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMultiplayerListMatchmakingTicketsForPlayerResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString TicketIds; // 0x8
};

struct FStructSerializerBuiltinTestStruct {
	FGuid Guid; // 0x0
	FName Name; // 0x10
	FString String; // 0x20
	FRotator Rotator; // 0x30
	FText Text; // 0x40
	FVector Vector; // 0x58
};

struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int32_t LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float Alpha; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8c
	FReferenceBoneFrame BaseFrame; // 0xd0
	FReferenceBoneFrame TwistFrame; // 0xf4
	FAxis TwistPlaneNormalAxis; // 0x118
	float RangeMax; // 0x128
	float RemappedMin; // 0x12c
	float RemappedMax; // 0x130
	FAnimCurveParam Curve; // 0x134
};

struct FMeshSectionInfo {
	int32_t MaterialIndex; // 0x0
	bool bEnableCollision; // 0x4
	bool bCastShadow; // 0x5
};

struct FClientGetUserInventoryResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Inventory; // 0x8
	UPlayFabJsonObject* VirtualCurrency; // 0x18
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x20
};

struct FServerSubtractUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t Amount; // 0x8
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FKeyBind {
	FKey Key; // 0x0
	FString Command; // 0x20
	char Control : 1; // 0x30
	char Shift : 1; // 0x30
	char Alt : 1; // 0x30
	char Cmd : 1; // 0x30
	char bIgnoreCtrl : 1; // 0x30
	char bIgnoreShift : 1; // 0x30
	char bIgnoreAlt : 1; // 0x30
	char bIgnoreCmd : 1; // 0x30
	char bDisabled : 1; // 0x31
};

struct FGStoreOfferDataTableRow : FTableRowBase {
	EXRarity Rarity; // 0x8
	FPrimaryAssetType CosmeticType; // 0xc
	FText DisplayName; // 0x18
	FText Description; // 0x30
	UTexture2D* OfferTexture; // 0x48
	TArray<FPrimaryAssetId> RewardIds; // 0x78
	TArray<FPrimaryAssetId> BundledOfferIds; // 0x88
	bool UniquePurchase; // 0x98
};

struct FClientGetUserInventoryRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FChildActorComponentInstanceData : FSceneComponentInstanceData {
	UObject* SourceComponentTemplate; // 0x8
	EComponentCreationMethod SourceComponentCreationMethod; // 0x10
	int32_t SourceComponentTypeSerializedIndex; // 0x14
	TArray<char> SavedProperties; // 0x18
	TArray<FActorComponentDuplicatedObjectData> DuplicatedObjects; // 0x28
	TArray<UObject*> ReferencedObjects; // 0x38
	TArray<FName> ReferencedNames; // 0x48
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x58
	FName ChildActorName; // 0xa8
	TArray<FChildActorAttachedActorInfo> AttachedActors; // 0xb8
};

struct FXInstructionState {
	FXInstructionStateParams Params; // 0x8
	bool bVisible; // 0x30
	bool bPauseTimers; // 0x31
	float CreationTime; // 0x34
};

struct FXNetActionState {
	UXAction* Action; // 0x0
	AActor* ActionOwner; // 0x8
	char Stamp; // 0x10
};

struct FServerUpdateUserInventoryItemDataRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CharacterId; // 0x8
	UPlayFabJsonObject* Data; // 0x18
	FString ItemInstanceId; // 0x20
	FString KeysToRemove; // 0x30
	FString PlayFabId; // 0x40
};

struct FRigUnit_GetJointTransform : FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FRigHierarchyRef HierarchyRef; // 0x28
	FName Joint; // 0x40
	ETransformGetterType Type; // 0x4c
	ETransformSpaceMode TransformSpace; // 0x4d
	FTransform BaseTransform; // 0x50
	FName BaseJoint; // 0x80
	FTransform Output; // 0x90
};

struct FXRadialDamageEvent : FRadialDamageEvent {
	UDamageType* DamageTypeClass; // 0x8
	FRadialDamageParams Params; // 0x10
	FVector Origin; // 0x24
	TArray<FHitResult> ComponentHits; // 0x30
	FGameplayTagContainer SourceTags; // 0x40
};

struct FNiagaraVMExecutableData {
	TArray<char> ByteCode; // 0x0
	int32_t NumUserPtrs; // 0x10
	FNiagaraParameters Parameters; // 0x18
	FNiagaraParameters InternalParameters; // 0x28
	TMap<FName, FNiagaraParameters> DataSetToParameters; // 0x38
	TArray<FNiagaraVariable> Attributes; // 0x88
	FNiagaraScriptDataUsageInfo DataUsage; // 0x98
	TArray<FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo; // 0xa0
	TArray<FVMExternalFunctionBindingInfo> CalledVMExternalFunctions; // 0xb0
	TArray<FNiagaraDataSetID> ReadDataSets; // 0xc0
	TArray<FNiagaraDataSetProperties> WriteDataSets; // 0xd0
	TArray<FNiagaraStatScope> StatScopes; // 0xe0
	FString LastHlslTranslation; // 0xf0
	FString LastHlslTranslationGPU; // 0x100
	FString LastAssemblyTranslation; // 0x110
	uint32_t LastOpCount; // 0x120
	TArray<FNiagaraDataInterfaceGPUParamInfo> DIParamInfo; // 0x128
	TArray<FString> ParameterCollectionPaths; // 0x138
	ENiagaraScriptCompileStatus LastCompileStatus; // 0x148
	bool bReadsAttributeData; // 0x149
	FString ErrorMsg; // 0x150
	float CompileTime; // 0x160
};

struct FPluginRedirect {
	FString OldPluginName; // 0x0
	FString NewPluginName; // 0x10
};

struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams {
	UAnimSequenceBase* Animation; // 0x0
	FFrameNumber StartFrameOffset; // 0x8
	FFrameNumber EndFrameOffset; // 0xc
	float PlayRate; // 0x10
	char bReverse : 1; // 0x14
	FName SlotName; // 0x18
	FMovieSceneFloatChannel Weight; // 0x28
	bool bSkipAnimNotifiers; // 0xc8
	bool bForceCustomMode; // 0xc9
	float StartOffset; // 0xcc
	float EndOffset; // 0xd0
	FFrameNumber SectionStartTime; // 0xd8
	FFrameNumber SectionEndTime; // 0xdc
};

struct FGGamepadButtonLayout {
	FName Name; // 0x0
	TArray<FGGamepadButtonBinding> BindingsToSet; // 0x10
};

struct FSectionEvaluationData {
	int32_t ImplIndex; // 0x0
	FFrameNumber ForcedTime; // 0x4
	ESectionEvaluationFlags Flags; // 0x8
};

struct FCameraCacheEntry {
	float Timestamp; // 0x0
	FMinimalViewInfo POV; // 0x10
};

struct FClientGetPlayFabIDsFromSteamIDsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FSkeletalMeshSamplingBuiltData {
	TArray<FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData; // 0x0
	TArray<FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData; // 0x10
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

struct FLiveLinkSubjectFrameMessage {
	FName SubjectName; // 0x0
	TArray<FTransform> Transforms; // 0x10
	TArray<FLiveLinkCurveElement> Curves; // 0x20
	FLiveLinkMetaData MetaData; // 0x30
	double Time; // 0x90
};

struct FAdminDeleteOpenIdConnectionRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString ConnectionId; // 0x8
};

struct FInterpGroupActorInfo {
	FName ObjectName; // 0x0
	TArray<AActor*> Actors; // 0x10
};

struct FEngineServiceExecuteCommand {
	FString Command; // 0x0
	FString Username; // 0x10
};

struct FRigUnit_BinaryTransformOp : FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FTransform Argument0; // 0x30
	FTransform Argument1; // 0x60
	FTransform Result; // 0x90
};

struct FSoundWaveSpectralTimeData {
	TArray<FSoundWaveSpectralDataEntry> Data; // 0x0
	float TimeSec; // 0x10
};

struct FScreenMessageString {
	uint64_t Key; // 0x0
	FString ScreenMessage; // 0x8
	FColor DisplayColor; // 0x18
	float TimeToDisplay; // 0x1c
	float CurrentTimeDisplayed; // 0x20
	FVector2D TextScale; // 0x24
};

struct FProfilesGetGlobalPolicyRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FAkAmbSoundCheckpointRecord {
	bool bCurrentlyPlaying; // 0x0
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

struct FXSynchronizedVolumeEntrance {
	float Timestamp; // 0x0
	AXSynchronizedVolume* Volume; // 0x8
};

struct FAnimNode_ResetRoot : FAnimNode_SkeletalControlBase {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int32_t LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float Alpha; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8c
};

struct FServerRevokeInventoryItemsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FClientGetFriendsListRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool IncludeFacebookFriends; // 0x8
	bool IncludeSteamFriends; // 0x9
	UPlayFabJsonObject* ProfileConstraints; // 0x10
	FString XboxToken; // 0x18
};

struct FFunctionExpressionOutput {
	UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x0
	FGuid ExpressionOutputId; // 0x8
	FExpressionOutput Output; // 0x18
};

struct FGroupsApplyToGroupRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool AutoAcceptOutstandingInvite; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* Group; // 0x18
};

struct FServerGetUserAccountInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* UserInfo; // 0x8
};

struct FPoseDriverTransform {
	FVector TargetTranslation; // 0x0
	FRotator TargetRotation; // 0xc
};

struct FXTestSerializeStruct {
	TArray<float> TestArray; // 0x0
};

struct FToggleTrackKey {
	float Time; // 0x0
	ETrackToggleAction ToggleAction; // 0x4
};

struct FAdminBlankResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FEditedDocumentInfo {
	FSoftObjectPath EditedObjectPath; // 0x0
	FVector2D SavedViewOffset; // 0x20
	float SavedZoomAmount; // 0x28
	UObject* EditedObject; // 0x30
};

struct FTimeStretchCurve {
	float SamplingRate; // 0x0
	float CurveValueMinPrecision; // 0x4
	TArray<FTimeStretchCurveMarker> Markers; // 0x8
	float Sum_dT_i_by_C_i[0x3]; // 0x18
};

struct FNetViewer {
	UNetConnection* Connection; // 0x0
	AActor* InViewer; // 0x8
	AActor* ViewTarget; // 0x10
	FVector ViewLocation; // 0x18
	FVector ViewDir; // 0x24
};

struct FAnimationTransitionBetweenStates : FAnimationStateBase {
	FName StateName; // 0x0
	int32_t PreviousState; // 0xc
	int32_t NextState; // 0x10
	float CrossfadeDuration; // 0x14
	int32_t StartNotify; // 0x18
	int32_t EndNotify; // 0x1c
	int32_t InterruptNotify; // 0x20
	EAlphaBlendOption BlendMode; // 0x24
	UCurveFloat* CustomCurve; // 0x28
	UBlendProfile* BlendProfile; // 0x30
	ETransitionLogicType LogicType; // 0x38
};

struct FConstrainComponentPropName {
	FName ComponentName; // 0x0
};

struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int32_t LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float Alpha; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8c
	FBoneReference SourceBone; // 0xd0
	FBoneReference TargetBone; // 0xe4
	bool bCopyTranslation; // 0xf8
	bool bCopyRotation; // 0xf9
	bool bCopyScale; // 0xfa
	EBoneControlSpace ControlSpace; // 0xfb
};

struct FServerDeletePlayerResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientUnlinkFacebookInstantGamesIdResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerRegisterGameRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Build; // 0x8
	FString GameMode; // 0x18
	FString LobbyId; // 0x28
	ERegion Region; // 0x38
	FString ServerIPV4Address; // 0x40
	FString ServerIPV6Address; // 0x50
	FString ServerPort; // 0x60
	FString ServerPublicDNSName; // 0x70
	UPlayFabJsonObject* Tags; // 0x80
};

struct FGBoonUpgradePerkEntry {
	FGameplayTagContainer CategoryTags; // 0x0
	UTexture2D* Icon; // 0x20
};

struct FXInputChordedIconKey {
	TArray<FString> IconKeys; // 0x0
};

struct FAnimNode_ControlRigBase : FAnimNode_Base {
	TArray<FName> RigHierarchyItemNameMapping; // 0x10
	TWeakObjectPtr<UNodeMappingContainer> NodeMappingContainer; // 0x20
};

struct FGCharacterLoadoutState {
	TArray<AActor*> EquipmentSourceItemClasses; // 0x0
	TArray<FGPerkLoadoutState> PerkStates; // 0x10
	float HealthState; // 0x20
	float ArmorState; // 0x24
};

struct FMovieSceneSequenceHierarchyNode {
	FMovieSceneSequenceID ParentID; // 0x0
	TArray<FMovieSceneSequenceID> Children; // 0x8
};

struct FAdminUpdateUserInternalDataRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Data; // 0x8
	FString KeysToRemove; // 0x10
	FString PlayFabId; // 0x20
};

struct FServerDeregisterGameRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString LobbyId; // 0x8
};

struct FAdminUpdateCloudScriptRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString DeveloperPlayFabId; // 0x8
	TArray<UPlayFabJsonObject*> Files; // 0x18
	bool Publish; // 0x28
};

struct FIndexedCurve {
	FKeyHandleMap KeyHandlesToIndices; // 0x8
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
	TArray<UParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame; // 0x20
};

struct FPaintedVertex {
	FVector Position; // 0x0
	FVector4 Normal; // 0x10
	FColor Color; // 0x20
};

struct FServerAddGenericIDRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* GenericId; // 0x8
	FString PlayFabId; // 0x10
};

struct FStreamingTextureBuildInfo {
	uint32_t PackedRelativeBox; // 0x0
	int32_t TextureLevelIndex; // 0x4
	float TexelFactor; // 0x8
};

struct FProfilesSetProfileLanguageRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
	int32_t ExpectedVersion; // 0x10
	FString Language; // 0x18
};

struct FGCooldownTransitionAnimProps {
	UCurveFloat* AnimCurve; // 0x0
	FName PropertyName; // 0x8
};

struct FProceduralFoliageInstance {
	FVector Location; // 0x0
	FQuat Rotation; // 0x10
	FVector Normal; // 0x20
	float Age; // 0x2c
	float Scale; // 0x30
	UFoliageType_InstancedStaticMesh* Type; // 0x38
};

struct FEngineServiceTerminate {
	FString Username; // 0x0
};

struct FGCosmeticArtifactDataTableRow : FGCosmeticItemDataTableRow {
	FText DisplayName; // 0x8
	FText Description; // 0x20
	UTexture2D* IconTexture; // 0x38
	EXRarity Rarity; // 0x68
	FPrimaryAssetId UpgradesInto; // 0x6c
	FText UpgradeableSetDisplayName; // 0x88
	FText UpgradeableSetRequirementsDescription; // 0xa0
	UClass* ItemClass; // 0xb8
};

struct FGCosmeticRunTrailDataTableRow : FGCosmeticItemDataTableRow {
	FText DisplayName; // 0x8
	FText Description; // 0x20
	UTexture2D* IconTexture; // 0x38
	EXRarity Rarity; // 0x68
	FPrimaryAssetId UpgradesInto; // 0x6c
	FText UpgradeableSetDisplayName; // 0x88
	FText UpgradeableSetRequirementsDescription; // 0xa0
	UParticleSystem* Trail; // 0xb8
	FString TopSocket; // 0xe8
	FString BottomSocket; // 0xf8
	FString AttachmentSocket; // 0x108
	float EndDelay; // 0x118
};

struct FAdminUpdateUserDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	int32_t DataVersion; // 0x8
};

struct FPurchaseInfo {
	FString Identifier; // 0x0
	FString DisplayName; // 0x10
	FString DisplayDescription; // 0x20
	FString DisplayPrice; // 0x30
};

struct FInt32Interval {
	int32_t Min; // 0x0
	int32_t Max; // 0x4
};

struct FMovieSceneIntegerChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	int32_t DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x1c
	TArray<int32_t> Values; // 0x20
};

struct FPerBoneBlendWeights {
	TArray<FPerBoneBlendWeight> BoneBlendWeights; // 0x0
};

struct FCompilerNativizationOptions {
	FName PlatformName; // 0x0
	bool ServerOnlyPlatform; // 0xc
	bool ClientOnlyPlatform; // 0xd
	bool bExcludeMonolithicHeaders; // 0xe
	TArray<FName> ExcludedModules; // 0x10
	TSet<FSoftObjectPath> ExcludedAssets; // 0x20
	TArray<FString> ExcludedFolderPaths; // 0x70
};

struct FStaticMeshComponentInstanceData : FPrimitiveComponentInstanceData {
	UObject* SourceComponentTemplate; // 0x8
	EComponentCreationMethod SourceComponentCreationMethod; // 0x10
	int32_t SourceComponentTypeSerializedIndex; // 0x14
	TArray<char> SavedProperties; // 0x18
	TArray<FActorComponentDuplicatedObjectData> DuplicatedObjects; // 0x28
	TArray<UObject*> ReferencedObjects; // 0x38
	TArray<FName> ReferencedNames; // 0x48
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x58
	FTransform ComponentTransform; // 0xb0
	int32_t VisibilityId; // 0xe0
	UPrimitiveComponent* LODParent; // 0xe8
	UStaticMesh* StaticMesh; // 0xf0
	TArray<FStaticMeshVertexColorLODData> VertexColorLODs; // 0xf8
	TArray<FGuid> CachedStaticLighting; // 0x108
	TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x118
};

struct FRegionQosInstance {
	FQosRegionInfo Definition; // 0x0
	TArray<FDatacenterQosInstance> DatacenterOptions; // 0x30
};

struct FXAutoAimSearchParameters {
	float AssistInnerRadius; // 0x0
	float AssistOuterRadius; // 0x4
	float MagnetismInnerRadius; // 0x8
	float MagnetismOuterRadius; // 0xc
	float FilterArc; // 0x10
	float FilterDistance; // 0x14
	float TargetUpOffsetScale; // 0x18
	float TargetDownOffsetScale; // 0x1c
};

struct FComponentSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FClientLinkFacebookAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAdminListBuildsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FGParticleInterrupt {
	FVector PauseLocation; // 0x0
	FVector UnpauseLocation; // 0xc
};

struct FVectorMaterialInput : FMaterialInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FXLootPopRules {
	float YawRange; // 0x0
	float YawJitter; // 0x4
	float MaxYawDiff; // 0x8
	float PitchMin; // 0xc
	float PitchMax; // 0x10
	float PitchJitter; // 0x14
	float Speed; // 0x18
};

struct FServerSendEmailFromTemplateResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FGroupsListMembershipOpportunitiesRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
};

struct FAdminDeleteMasterPlayerAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString MetaData; // 0x8
	FString PlayFabId; // 0x18
};

struct FServerSavePushNotificationTemplateRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString AndroidPayload; // 0x8
	FString ID; // 0x18
	FString IOSPayload; // 0x28
	UPlayFabJsonObject* LocalizedPushNotificationTemplates; // 0x38
	FString Name; // 0x40
};

struct FGPaneScaleRule {
	FGameplayTag GroupTag; // 0x0
	float Scale; // 0xc
};

struct FXMaskedIconMaterialGroup {
	UMaterialInterface* OutlinedMat; // 0x0
	UMaterialInterface* NonOutlinedMat; // 0x8
};

struct FClientGetPurchaseRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString OrderId; // 0x8
};

struct FRandomStream {
	int32_t InitialSeed; // 0x0
	int32_t Seed; // 0x4
};

struct FBuildPromotionOpenAssetSettings {
	FFilePath BlueprintAsset; // 0x0
	FFilePath MaterialAsset; // 0x10
	FFilePath ParticleSystemAsset; // 0x20
	FFilePath SkeletalMeshAsset; // 0x30
	FFilePath StaticMeshAsset; // 0x40
	FFilePath TextureAsset; // 0x50
};

struct FPaperFlipbookKeyFrame {
	UPaperSprite* Sprite; // 0x0
	int32_t FrameRun; // 0x8
};

struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieSceneAudioSectionTemplateData AudioData; // 0x20
};

struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base {
	FComponentSpacePoseLink ComponentPose; // 0x10
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

struct FClientLinkPSNAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FSceneComponentInstanceData : FActorComponentInstanceData {
	UObject* SourceComponentTemplate; // 0x8
	EComponentCreationMethod SourceComponentCreationMethod; // 0x10
	int32_t SourceComponentTypeSerializedIndex; // 0x14
	TArray<char> SavedProperties; // 0x18
	TArray<FActorComponentDuplicatedObjectData> DuplicatedObjects; // 0x28
	TArray<UObject*> ReferencedObjects; // 0x38
	TArray<FName> ReferencedNames; // 0x48
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x58
};

struct FCollisionResponseTemplate {
	FName Name; // 0x0
	ECollisionEnabled CollisionEnabled; // 0xc
	FName ObjectTypeName; // 0x10
	TArray<FResponseChannel> CustomResponses; // 0x20
	FString HelpMessage; // 0x30
	bool bCanModify; // 0x40
};

struct FServerSetTitleDataRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Key; // 0x8
	FString Value; // 0x18
};

struct FGReplicatedMapDivision {
	FVector Center; // 0x0
	FVector Normal; // 0xc
	float Scale; // 0x18
};

struct FXInteractiveLocator {
	ULevel* Level; // 0x0
	int32_t CellID; // 0x8
	int32_t CellIndex; // 0xc
	int32_t SpawnIndex; // 0x10
};

struct FClothCollisionData {
	TArray<FClothCollisionPrim_Sphere> Spheres; // 0x0
	TArray<FClothCollisionPrim_SphereConnection> SphereConnections; // 0x10
	TArray<FClothCollisionPrim_Convex> Convexes; // 0x20
};

struct FMaterialParameterCollectionInfo {
	FGuid StateId; // 0x0
	UMaterialParameterCollection* ParameterCollection; // 0x10
};

struct FGAttachComponentEffect_Context : FXGameplayEffectContext {
	TArray<FXGameplayEffectHandle> TrackedEffects; // 0x8
	TArray<AActor*> TrackedActors; // 0x18
	bool bEverActivated; // 0x28
	TWeakObjectPtr<UActorComponent> AttachedComponent; // 0x30
};

struct FNodeObject {
	FName Name; // 0x0
	FName ParentName; // 0xc
};

struct FSkeletalMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FMeshUVChannelInfo UVChannelData; // 0x14
};

struct FClientGetSharedGroupDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Data; // 0x8
	FString Members; // 0x10
};

struct FAnimNode_ControlRig : FAnimNode_ControlRigBase {
	TArray<FName> RigHierarchyItemNameMapping; // 0x10
	TWeakObjectPtr<UNodeMappingContainer> NodeMappingContainer; // 0x20
	FPoseLink Source; // 0x28
	UControlRig* ControlRigClass; // 0x38
	UControlRig* ControlRig; // 0x40
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

struct FClientGetPlayFabIDsFromFacebookIDsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString FacebookIDs; // 0x8
};

struct FRBFEntry {
	TArray<float> Values; // 0x0
};

struct FAdminAddNewsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Body; // 0x8
	FString Timestamp; // 0x18
	FString Title; // 0x28
};

struct FServerSetTitleDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FPredictProjectilePathResult {
	TArray<FPredictProjectilePathPointData> PathData; // 0x0
	FPredictProjectilePathPointData LastTraceDestination; // 0x10
	FHitResult HitResult; // 0x2c
};

struct FClientCancelTradeResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Trade; // 0x8
};

struct FGPotionImpact {
	float Health; // 0x0
	float Armor; // 0x4
};

struct FMeshTriangle {
	FVertexInstanceID VertexInstanceID0; // 0x0
	FVertexInstanceID VertexInstanceID1; // 0x4
	FVertexInstanceID VertexInstanceID2; // 0x8
};

struct FFloatRangeBound {
	ERangeBoundTypes Type; // 0x0
	float Value; // 0x4
};

struct FMovieSceneObjectBindingID {
	int32_t SequenceID; // 0x0
	EMovieSceneObjectBindingSpace Space; // 0x4
	FGuid Guid; // 0x8
};

struct FCharacterViewPointInfo {
	FVector ViewLocation; // 0x0
	FRotator ViewRotation; // 0xc
	FVector Velocity; // 0x18
};

struct FNiagaraDataSetProperties {
	FNiagaraDataSetID ID; // 0x0
	TArray<FNiagaraVariable> Variables; // 0x10
};

struct FDatasmithCameraLensSettingsTemplate {
	float MaxFStop; // 0x0
};

struct FExpressionInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FAdminCreatePlayerStatisticDefinitionRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	EStatisticAggregationMethod AggregationMethod; // 0x8
	FString StatisticName; // 0x10
	EStatisticResetIntervalOption VersionChangeInterval; // 0x20
};

struct FProfilesSetGlobalPolicyResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerGetServerCustomIDsFromPlayFabIDsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FClientGetCatalogItemsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
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

struct FIntegralCurve : FIndexedCurve {
	FKeyHandleMap KeyHandlesToIndices; // 0x8
	TArray<FIntegralKey> KeyS; // 0x68
	int32_t DefaultValue; // 0x78
	bool bUseDefaultValueBeforeFirstKey; // 0x7c
};

struct FXGameplayTagRequirementsJSON {
	TArray<FName> RequireTags; // 0x0
	TArray<FName> IgnoreTags; // 0x10
};

struct FScrollBarStyle : FSlateWidgetStyle {
	FSlateBrush HorizontalBackgroundImage; // 0x8
	FSlateBrush VerticalBackgroundImage; // 0x98
	FSlateBrush VerticalTopSlotImage; // 0x128
	FSlateBrush HorizontalTopSlotImage; // 0x1b8
	FSlateBrush VerticalBottomSlotImage; // 0x248
	FSlateBrush HorizontalBottomSlotImage; // 0x2d8
	FSlateBrush NormalThumbImage; // 0x368
	FSlateBrush HoveredThumbImage; // 0x3f8
	FSlateBrush DraggedThumbImage; // 0x488
};

struct FComponentReference {
	AActor* OtherActor; // 0x0
	FName ComponentProperty; // 0x8
};

struct FClientGetPhotonAuthenticationTokenRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PhotonApplicationId; // 0x8
};

struct FPoseDataContainer {
	TArray<FSmartName> PoseNames; // 0x0
	TArray<FName> Tracks; // 0x10
	TMap<FName, int32_t> TrackMap; // 0x20
	TArray<FPoseData> Poses; // 0x70
	TArray<FAnimCurveBase> Curves; // 0x80
};

struct FMovieSceneFloatPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneFloatChannel FloatFunction; // 0x58
	EMovieSceneBlendType BlendType; // 0xf8
};

struct FForceFeedbackParameters {
	FName Tag; // 0x0
	bool bLooping; // 0xc
	bool bIgnoreTimeDilation; // 0xd
	bool bPlayWhilePaused; // 0xe
};

struct FAdminGetAllSegmentsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FAdminGetServerBuildInfoRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString BuildId; // 0x8
};

struct FAuthenticationValidateEntityTokenRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString EntityToken; // 0x8
};

struct FAdminAddLocalizedNewsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Body; // 0x8
	FString Language; // 0x18
	FString NewsId; // 0x28
	FString Title; // 0x38
};

struct FClientAttributeInstallRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Adid; // 0x8
	FString Idfa; // 0x18
};

struct FSkeletalMeshSamplingRegion {
	FName Name; // 0x0
	int32_t LODIndex; // 0xc
	char bSupportUniformlyDistributedSampling : 1; // 0x10
	TArray<FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters; // 0x18
	TArray<FSkeletalMeshSamplingRegionBoneFilter> BoneFilters; // 0x28
};

struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer {
	int32_t GroupIndex; // 0x10
	EAnimGroupRole GroupRole; // 0x14
	bool bIgnoreForRelevancyTest; // 0x15
	float BlendWeight; // 0x18
	float InternalTimeAccumulator; // 0x1c
	float X; // 0x30
	float Y; // 0x34
	float Z; // 0x38
	float PlayRate; // 0x3c
	bool bLoop; // 0x40
	bool bResetPlayTimeWhenBlendSpaceChanges; // 0x41
	float StartPosition; // 0x44
	UBlendSpaceBase* BlendSpace; // 0x48
	UBlendSpaceBase* PreviousBlendSpace; // 0xd8
	float NormalizedTime; // 0xe0
};

struct FServerGetContentDownloadUrlResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString URL; // 0x8
};

struct FAdminAddNewsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString NewsId; // 0x8
};

struct FSmartName {
	FName DisplayName; // 0x0
};

struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
	FRotator Rotation; // 0x14
	FVector Scale; // 0x20
	FFrameNumber Time; // 0x2c
};

struct FPawnActionStack {
	UPawnAction* TopAction; // 0x0
};

struct FEdGraphTerminalType {
	FName TerminalCategory; // 0x0
	FName TerminalSubCategory; // 0xc
	TWeakObjectPtr<UObject> TerminalSubCategoryObject; // 0x18
	bool bTerminalIsConst; // 0x20
	bool bTerminalIsWeakPointer; // 0x21
};

struct FGRewardEntry {
	FPrimaryAssetId AssetId; // 0x0
	int32_t Quantity; // 0x18
	FPrimaryAssetId SubtypeAssetId; // 0x1c
};

struct FRigUnit_MultiplyTransform : FRigUnit_BinaryTransformOp {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FTransform Argument0; // 0x30
	FTransform Argument1; // 0x60
	FTransform Result; // 0x90
};

struct FMultiplayerDeleteBuildRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString BuildId; // 0x8
};

struct FLightmassLightSettings {
	float IndirectLightingSaturation; // 0x0
	float ShadowExponent; // 0x4
	bool bUseAreaShadowsForStationaryLight; // 0x8
};

struct FRigUnit_Divide_VectorVector : FRigUnit_BinaryVectorOp {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FVector Argument0; // 0x28
	FVector Argument1; // 0x34
	FVector Result; // 0x40
};

struct FNavigationLink : FNavigationLinkBase {
	float LeftProjectHeight; // 0x0
	float MaxFallDownLength; // 0x4
	ENavLinkDirection Direction; // 0x8
	float SnapRadius; // 0x10
	float SnapHeight; // 0x14
	FNavAgentSelector SupportedAgents; // 0x18
	char bSupportsAgent0 : 1; // 0x1c
	char bSupportsAgent1 : 1; // 0x1c
	char bSupportsAgent2 : 1; // 0x1c
	char bSupportsAgent3 : 1; // 0x1c
	char bSupportsAgent4 : 1; // 0x1c
	char bSupportsAgent5 : 1; // 0x1c
	char bSupportsAgent6 : 1; // 0x1c
	char bSupportsAgent7 : 1; // 0x1c
	char bSupportsAgent9 : 1; // 0x1d
	char bSupportsAgent10 : 1; // 0x1d
	char bSupportsAgent8 : 1; // 0x1d
	char bSupportsAgent11 : 1; // 0x1d
	char bSupportsAgent12 : 1; // 0x1d
	char bSupportsAgent13 : 1; // 0x1d
	char bSupportsAgent14 : 1; // 0x1d
	char bSupportsAgent15 : 1; // 0x1d
	char bUseSnapHeight : 1; // 0x20
	char bSnapToCheapestArea : 1; // 0x20
	char bCustomFlag0 : 1; // 0x20
	char bCustomFlag1 : 1; // 0x20
	char bCustomFlag2 : 1; // 0x20
	char bCustomFlag3 : 1; // 0x20
	char bCustomFlag4 : 1; // 0x20
	char bCustomFlag5 : 1; // 0x20
	char bCustomFlag6 : 1; // 0x21
	char bCustomFlag7 : 1; // 0x21
	UNavAreaBase* AreaClass; // 0x28
	FVector Left; // 0x38
	FVector Right; // 0x44
};

struct FXMaterialParamFadeDefinition {
	TMap<FName, float> TargetValues; // 0x0
	TMap<FName, float> InitialValues; // 0x50
	float FadeDuration; // 0xa0
	UMaterialInstanceDynamic* Mid; // 0xa8
	float RelativeTime; // 0xb0
};

struct FAdminUpdateUserDataRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Data; // 0x8
	FString KeysToRemove; // 0x10
	EUserDataPermission Permission; // 0x20
	FString PlayFabId; // 0x28
};

struct FAkCommunicationSettingsWithSystemInitialization : FAkCommunicationSettings {
	uint32_t PoolSize; // 0x0
	uint16_t DiscoveryBroadcastPort; // 0x4
	uint16_t CommandPort; // 0x6
	uint16_t NotificationPort; // 0x8
	FString NetworkName; // 0x10
	bool InitializeSystemComms; // 0x20
};

struct FXGenericTextTableRow : FTableRowBase {
	FText Text; // 0x8
};

struct FAnimSlotGroup {
	FName GroupName; // 0x0
	TArray<FName> SlotNames; // 0x10
};

struct FAkCommonInitializationSettings {
	uint32_t MaximumNumberOfMemoryPools; // 0x0
	uint32_t MaximumNumberOfPositioningPaths; // 0x4
	uint32_t DefaultPoolSize; // 0x8
	float MemoryCutoffThreshold; // 0xc
	uint32_t CommandQueueSize; // 0x10
	uint32_t SamplesPerFrame; // 0x14
	FAkMainOutputSettings MainOutputSettings; // 0x18
	float StreamingLookAheadRatio; // 0x40
	uint32_t StreamManagerPoolSize; // 0x44
	uint32_t LowerEnginePoolSize; // 0x48
	float LowerEngineMemoryCutoffThreshold; // 0x4c
	uint16_t NumberOfRefillsInVoice; // 0x50
	FAkSpatialAudioSettings SpatialAudioSettings; // 0x54
};

struct FClientSendAccountRecoveryEmailResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FVector4Distribution {
	FDistributionLookupTable Table; // 0x0
};

struct FPrimitiveComponentPostPhysicsTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x40
};

struct FAdminUpdateBansRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	TArray<UPlayFabJsonObject*> Bans; // 0x8
};

struct FAimTarget {
	float Weight; // 0x0
	FTransform Transform; // 0x10
	FVector AlignVector; // 0x40
};

struct FKey {
	FName KeyName; // 0x0
};

struct FLandscapeProceduralLayerBrush {
	ALandscapeBlueprintCustomBrush* BPCustomBrush; // 0x0
};

struct FLiveLinkSubjectName {
	FName Name; // 0x0
};

struct FAdminUpdatePlayerStatisticDefinitionResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Statistic; // 0x8
};

struct FClientLinkGameCenterAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerGetSharedGroupDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Data; // 0x8
	FString Members; // 0x10
};

struct FLightingChannels {
	char bChannel0 : 1; // 0x0
	char bChannel1 : 1; // 0x0
	char bChannel2 : 1; // 0x0
};

struct FXLookInputState {
	FVector2D StickDirection; // 0x0
	float StickMagnitude; // 0x8
	float StickMaxedDuration; // 0xc
};

struct FTrackToSkeletonMap {
	int32_t BoneTreeIndex; // 0x0
};

struct FCameraFilmbackSettings {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
	float SensorAspectRatio; // 0x8
};

struct FClientSendAccountRecoveryEmailRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Email; // 0x8
	FString EmailTemplateId; // 0x18
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

struct FServerGetPlayerSegmentsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FXActionTaggedPeriod {
	FXActionRelativeTime TimeStart; // 0x0
	FXActionRelativeTime TimeEnd; // 0x10
	FGameplayTag Tag; // 0x20
};

struct FAdminSendAccountRecoveryEmailResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerLinkPSNAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString AuthCode; // 0x8
	bool ForceLink; // 0x18
	int32_t IssuerId; // 0x1c
	FString PlayFabId; // 0x20
	FString RedirectUri; // 0x30
};

struct FNiagaraModuleDependency {
	FName ID; // 0x0
	ENiagaraModuleDependencyType Type; // 0xc
	ENiagaraModuleDependencyScriptConstraint ScriptConstraint; // 0xd
	FText Description; // 0x10
};

struct FHardwareCursorReference {
	FName CursorPath; // 0x0
	FVector2D HotSpot; // 0xc
};

struct FClientLoginWithIOSDeviceIDRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool CreateAccount; // 0x8
	FString DeviceID; // 0x10
	FString DeviceModel; // 0x20
	FString EncryptedRequest; // 0x30
	UPlayFabJsonObject* InfoRequestParameters; // 0x40
	FString OS; // 0x48
	FString PlayerSecret; // 0x58
};

struct FGuid {
	int32_t A; // 0x0
	int32_t B; // 0x4
	int32_t C; // 0x8
	int32_t D; // 0xc
};

struct FMultiplayerCancelMatchmakingTicketRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString QueueName; // 0x8
	FString TicketId; // 0x18
};

struct FMovieSceneSkeletalAnimationParams {
	UAnimSequenceBase* Animation; // 0x0
	FFrameNumber StartFrameOffset; // 0x8
	FFrameNumber EndFrameOffset; // 0xc
	float PlayRate; // 0x10
	char bReverse : 1; // 0x14
	FName SlotName; // 0x18
	FMovieSceneFloatChannel Weight; // 0x28
	bool bSkipAnimNotifiers; // 0xc8
	bool bForceCustomMode; // 0xc9
	float StartOffset; // 0xcc
	float EndOffset; // 0xd0
};

struct FStaticMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FName ImportedMaterialSlotName; // 0x14
	FMeshUVChannelInfo UVChannelData; // 0x20
};

struct FMovieSceneLiveLinkSectionTemplate : FMovieScenePropertySectionTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneLiveLinkTemplateData TemplateData; // 0x58
};

struct FTransformBaseConstraint {
	TArray<FRigTransformConstraint> TransformConstraints; // 0x0
};

struct FClientUnlinkNintendoSwitchDeviceIdResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FSoftObjectPath {
	FName AssetPathName; // 0x0
	FString SubPathString; // 0x10
};

struct FServerGetPlayFabIDsFromPSNAccountIDsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FConstraintBaseParams {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float Restitution; // 0x8
	float ContactDistance; // 0xc
	char bSoftConstraint : 1; // 0x10
};

struct FClientGetPlayFabIDsFromXboxLiveIDsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Sandbox; // 0x8
	FString XboxLiveAccountIDs; // 0x18
};

struct FForceFeedbackChannelDetails {
	char bAffectsLeftLarge : 1; // 0x0
	char bAffectsLeftSmall : 1; // 0x0
	char bAffectsRightLarge : 1; // 0x0
	char bAffectsRightSmall : 1; // 0x0
	FRuntimeFloatCurve Curve; // 0x8
};

struct FProfilesGetEntityProfileResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Profile; // 0x8
};

struct FSplineCurves {
	FInterpCurveVector Position; // 0x0
	FInterpCurveQuat Rotation; // 0x18
	FInterpCurveVector Scale; // 0x30
	FInterpCurveFloat ReparamTable; // 0x48
};

struct FGConsumePotionAction_CustomState : FXActionCustomState_Potion {
	float DurationOverride; // 0x8
	FName PotionType; // 0x10
	TArray<FXGameplayEffectHandle> AppliedEffects; // 0x20
	UGPotionItem* Potion; // 0x30
	UMaterialInstanceDynamic* LiquidMID; // 0x38
};

struct FGExplosionProjectileEffect_Context : FXGameplayEffectContext {
	TArray<FXGameplayEffectHandle> TrackedEffects; // 0x8
	TArray<AActor*> TrackedActors; // 0x18
	bool bEverActivated; // 0x28
	TArray<AGProjectile*> CachedProjectileClass; // 0x30
	TArray<FVector> CachedLocationOffset; // 0x40
	TArray<float> CachedCone; // 0x50
};

struct FServerWriteTitleEventRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Body; // 0x8
	FString EventName; // 0x10
	FString Timestamp; // 0x20
};

struct FLocalSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FVertexAttributesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FMeshElementAttributeList> PerimeterVertexAttributeLists; // 0x8
	TArray<FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole; // 0x18
};

struct FProfilesSetEntityProfilePolicyResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Permissions; // 0x8
};

struct FMultiplayerCreateBuildWithCustomContainerRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString BuildName; // 0x8
	EContainerFlavor ContainerFlavor; // 0x18
	UPlayFabJsonObject* ContainerImageReference; // 0x20
	FString ContainerRunCommand; // 0x28
	TArray<UPlayFabJsonObject*> GameAssetReferences; // 0x38
	TArray<UPlayFabJsonObject*> GameCertificateReferences; // 0x48
	UPlayFabJsonObject* MetaData; // 0x58
	int32_t MultiplayerServerCountPerVm; // 0x60
	TArray<UPlayFabJsonObject*> Ports; // 0x68
	TArray<UPlayFabJsonObject*> RegionConfigurations; // 0x78
	EAzureVmSize VmSize; // 0x88
};

struct FBPEditorBookmarkNode {
	FGuid NodeGuid; // 0x0
	FGuid ParentGuid; // 0x10
	FText DisplayName; // 0x20
};

struct FOverlapResult {
	TWeakObjectPtr<AActor> Actor; // 0x0
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x8
	char bBlockingHit : 1; // 0x14
};

struct FServerGetAllSegmentsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FSoftClassPath : FSoftObjectPath {
	FName AssetPathName; // 0x0
	FString SubPathString; // 0x10
};

struct FAdminUpdateCatalogItemsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAdminGetPlayerStatisticDefinitionsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Statistics; // 0x8
};

struct FExponentialHeightFogInterpParams {
	float FogDensity; // 0x0
	FLinearColor FogInscatteringColor; // 0x4
	float DirectionalInscatteringExponent; // 0x14
	float DirectionalInscatteringStartDistance; // 0x18
	FLinearColor DirectionalInscatteringColor; // 0x1c
	float FogHeightFalloff; // 0x2c
	float FogMaxOpacity; // 0x30
	float StartDistance; // 0x34
};

struct FAdminUpdateUserTitleDisplayNameRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString DisplayName; // 0x8
	FString PlayFabId; // 0x18
};

struct FGroupsUnblockEntityRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Group; // 0x10
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

struct FInterpCurvePointFloat {
	float InVal; // 0x0
	float OutVal; // 0x4
	float ArriveTangent; // 0x8
	float LeaveTangent; // 0xc
	EInterpCurveMode InterpMode; // 0x10
};

struct FEngineShowFlagsSetting {
	FString ShowFlagName; // 0x0
	bool Enabled; // 0x10
};

struct FScrollBoxStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x98
	FSlateBrush LeftShadowBrush; // 0x128
	FSlateBrush RightShadowBrush; // 0x1b8
};

struct FGRewardEntryLevel {
	FGRewardEntry Entry; // 0x0
	int32_t Level; // 0x34
	bool bRequiresChapterKey; // 0x38
};

struct FAdaptorTriangleID : FElementID {
	int32_t IDValue; // 0x0
};

struct FMultiplayerDeleteBuildAliasRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString AliasId; // 0x8
};

struct FClientAddFriendResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	bool Created; // 0x8
};

struct FVector2MaterialInput : FMaterialInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FClientCurrentGamesResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	int32_t GameCount; // 0x8
	TArray<UPlayFabJsonObject*> Games; // 0x10
	int32_t PlayerCount; // 0x20
};

struct FAssetData {
	FName ObjectPath; // 0x0
	FName PackageName; // 0xc
	FName PackagePath; // 0x18
	FName AssetName; // 0x24
	FName AssetClass; // 0x30
};

struct FSoundWaveSpectralDataEntry {
	float Magnitude; // 0x0
	float NormalizedMagnitude; // 0x4
};

struct FServerGetFriendLeaderboardRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool IncludeFacebookFriends; // 0x8
	bool IncludeSteamFriends; // 0x9
	int32_t MaxResultsCount; // 0xc
	FString PlayFabId; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x20
	int32_t StartPosition; // 0x28
	FString StatisticName; // 0x30
	bool UseSpecificVersion; // 0x40
	int32_t Version; // 0x44
	FString XboxToken; // 0x48
};

struct FGButtonListItemVerticalContentStyle {
	FGButtonListItemVerticalContentStyleState Default; // 0x0
	FGButtonListItemVerticalContentStyleState Focused; // 0x200
	FGButtonListItemVerticalContentStyleState Selected; // 0x400
	FGButtonListItemVerticalContentStyleState Disabled; // 0x600
};

struct FRigUnit_TransformConstraint : FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FRigHierarchyRef HierarchyRef; // 0x28
	FName Joint; // 0x40
	ETransformSpaceMode BaseTransformSpace; // 0x4c
	FTransform BaseTransform; // 0x50
	FName BaseJoint; // 0x80
	TArray<FConstraintTarget> Targets; // 0x90
};

struct FServerGetAllSegmentsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FMultiplayerEnableMultiplayerServersForTitleRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FInterpEdSelKey {
	UInterpGroup* Group; // 0x0
	UInterpTrack* Track; // 0x8
	int32_t KeyIndex; // 0x10
	float UnsnappedPosition; // 0x14
};

struct FMeshInstancingSettings {
	AActor* ActorClassToUse; // 0x0
	int32_t InstanceReplacementThreshold; // 0x8
	EMeshInstancingReplacementMethod MeshReplacementMethod; // 0xc
	bool bSkipMeshesWithVertexColors; // 0xd
	bool bUseHLODVolumes; // 0xe
};

struct FAdminAddServerBuildRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString ActiveRegions; // 0x8
	FString BuildId; // 0x18
	FString CommandLineTemplate; // 0x28
	FString Comment; // 0x38
	FString ExecutablePath; // 0x48
	int32_t MaxGamesPerHost; // 0x58
	int32_t MinFreeGameSlots; // 0x5c
};

struct FGrassInput {
	FName Name; // 0x0
	ULandscapeGrassType* GrassType; // 0x10
	FExpressionInput Input; // 0x18
};

struct FPaperSpriteAtlasSlot {
	UPaperSprite* SpriteRef; // 0x0
	int32_t AtlasIndex; // 0x30
	int32_t X; // 0x34
	int32_t Y; // 0x38
	int32_t Width; // 0x3c
	int32_t Height; // 0x40
};

struct FAnimationStateBase {
	FName StateName; // 0x0
};

struct FAdminGetPlayerIdFromAuthTokenResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString PlayFabId; // 0x8
};

struct FServerAddCharacterVirtualCurrencyRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t Amount; // 0x8
	FString CharacterId; // 0x10
	FString PlayFabId; // 0x20
	FString VirtualCurrency; // 0x30
};

struct FAdminDeleteTitleRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FHapticFeedbackDetails_Curve {
	FRuntimeFloatCurve Frequency; // 0x0
	FRuntimeFloatCurve Amplitude; // 0x88
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

struct FClientGetLeaderboardForUsersCharactersResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FAdminGetPlayerSharedSecretsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> SharedSecrets; // 0x8
};

struct FGCooldownStateMaterial {
	EGCooldownState CooldownState; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FProfilesGetEntityProfilesResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Profiles; // 0x8
};

struct FAdminCheckLimitedEditionItemAvailabilityRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
	FString ItemId; // 0x18
};

struct FFOscillator {
	float Amplitude; // 0x0
	float Frequency; // 0x4
	EInitialOscillatorOffset InitialOffset; // 0x8
	EOscillatorWaveform Waveform; // 0x9
};

struct FMultiplayerGetTitleMultiplayerServersQuotasRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FBeamTargetData {
	FName TargetName; // 0x0
	float TargetPercentage; // 0xc
};

struct FGArenaDataTableRow : FTableRowBase {
	FGameplayTag MainTag; // 0x8
	FGameplayTag BoundsTag; // 0x14
	FGameplayTag CameraTag; // 0x20
	FText DisplayName; // 0x30
	UTexture2D* SelectorPreviewImage; // 0x48
};

struct FClientAndroidDevicePushNotificationRegistrationRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString ConfirmationMessage; // 0x8
	FString DeviceToken; // 0x18
	bool SendPushNotificationConfirmation; // 0x28
};

struct FCurveTableRowHandle {
	UCurveTable* CurveTable; // 0x0
	FName RowName; // 0x8
};

struct FGMapSpawnDetails {
	int32_t NumRows; // 0x0
	int32_t NumCols; // 0x4
	FVector2D TileSize; // 0x8
	FVector2D CoordOrigin; // 0x10
};

struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase {
	TArray<FPoseLink> BlendPose; // 0x10
	TArray<float> BlendTime; // 0x20
	EAlphaBlendOption BlendType; // 0x30
	bool bResetChildOnActivation; // 0x31
	UCurveFloat* CustomBlendCurve; // 0x38
	UBlendProfile* BlendProfile; // 0x40
	bool bActiveValue; // 0x98
};

struct FMeshUVChannelInfo {
	bool bInitialized; // 0x0
	bool bOverrideDensities; // 0x1
	float LocalUVDensities[0x4]; // 0x4
};

struct FCullDistanceSizePair {
	float Size; // 0x0
	float CullDistance; // 0x4
};

struct FPlayFabError {
	bool HasError; // 0x0
	int32_t ErrorCode; // 0x4
	FString ErrorName; // 0x8
	FString ErrorMessage; // 0x18
	FString ErrorDetails; // 0x28
};

struct FJumpLinkDebugData {
	float InputScale; // 0x0
	bool bJump; // 0x4
	float TimeToDestZ; // 0x8
};

struct FRootMotionExtractionStep {
	UAnimSequence* AnimSequence; // 0x0
	float StartPosition; // 0x8
	float EndPosition; // 0xc
};

struct FClientAddUsernamePasswordResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString Username; // 0x8
};

struct FExponentialHeightFogData {
	float FogDensity; // 0x0
	float FogHeightFalloff; // 0x4
	float FogHeightOffset; // 0x8
};

struct FAxis {
	FVector Axis; // 0x0
	bool bInLocalSpace; // 0xc
};

struct FRuntimeCurveLinearColor {
	FRichCurve ColorCurves[0x4]; // 0x0
	UCurveLinearColor* ExternalCurve; // 0x200
};

struct FPackedRGBA16N {
	int32_t XY; // 0x0
	int32_t ZW; // 0x4
};

struct FRootMotionFinishVelocitySettings {
	ERootMotionFinishVelocityMode Mode; // 0x0
	FVector SetVelocity; // 0x4
	float ClampVelocity; // 0x10
};

struct FClientGetPlayFabIDsFromKongregateIDsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString KongregateIDs; // 0x8
};

struct FMovieSceneActorReferenceKey {
	FMovieSceneObjectBindingID Object; // 0x0
};

struct FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; // 0x0
	char bExecuteWhenPaused : 1; // 0x0
	char bOverrideParentBinding : 1; // 0x0
	FInputChord InputChord; // 0x8
	EInputEvent InputKeyEvent; // 0x30
	FName FunctionNameToBind; // 0x34
};

struct FNiagaraID {
	int32_t Index; // 0x0
	int32_t AcquireTag; // 0x4
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

struct FGReplicatedDamageInfo {
	int16_t HealthChange; // 0x0
	char HealthHitFlags; // 0x2
	int16_t ArmorChange; // 0x4
	int16_t ManaChange; // 0x6
	FVector_NetQuantize SourceLocation; // 0x8
	FVector_NetQuantize LocalHitLocation; // 0x14
	char HitFlags; // 0x20
	char ReplicationStamp; // 0x21
};

struct FLevelNameAndTime {
	FString LevelName; // 0x0
	uint32_t LevelChangeTimeInMS; // 0x10
};

struct FMovieSceneEventRepeaterTemplate : FMovieSceneEventTemplateBase {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	TArray<FMovieSceneObjectBindingID> EventReceivers; // 0x20
	char bFireEventsWhenForwards : 1; // 0x30
	char bFireEventsWhenBackwards : 1; // 0x30
	FName EventToTrigger; // 0x38
};

struct FAtmospherePrecomputeInstanceData : FSceneComponentInstanceData {
	UObject* SourceComponentTemplate; // 0x8
	EComponentCreationMethod SourceComponentCreationMethod; // 0x10
	int32_t SourceComponentTypeSerializedIndex; // 0x14
	TArray<char> SavedProperties; // 0x18
	TArray<FActorComponentDuplicatedObjectData> DuplicatedObjects; // 0x28
	TArray<UObject*> ReferencedObjects; // 0x38
	TArray<FName> ReferencedNames; // 0x48
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x58
};

struct FInterpCurveFloat {
	TArray<FInterpCurvePointFloat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FProfilesGetGlobalPolicyResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Permissions; // 0x8
};

struct FPhysicalAnimationData {
	FName BodyName; // 0x0
	char bIsLocalSimulation : 1; // 0xc
	float OrientationStrength; // 0x10
	float AngularVelocityStrength; // 0x14
	float PositionStrength; // 0x18
	float VelocityStrength; // 0x1c
	float MaxLinearForce; // 0x20
	float MaxAngularForce; // 0x24
};

struct FNavCollisionCylinder {
	FVector Offset; // 0x0
	float Radius; // 0xc
	float Height; // 0x10
};

struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : FAkAdvancedInitializationSettings {
	uint32_t IO_MemorySize; // 0x0
	float TargetAutoStreamBufferLength; // 0x4
	bool UseStreamCache; // 0x8
	uint32_t MaximumPinnedBytesInCache; // 0xc
	int32_t PrepareEventMemoryPoolID; // 0x10
	bool EnableGameSyncPreparation; // 0x14
	uint32_t ContinuousPlaybackLookAhead; // 0x18
	uint32_t MonitorPoolSize; // 0x1c
	uint32_t MonitorQueuePoolSize; // 0x20
	uint32_t MaximumHardwareTimeoutMs; // 0x24
	FAkAdvancedSpatialAudioSettings SpatialAudioSettings; // 0x28
	bool EnableMultiCoreRendering; // 0x30
};

struct FServerGetPlayersInSegmentResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString ContinuationToken; // 0x8
	TArray<UPlayFabJsonObject*> PlayerProfiles; // 0x18
	int32_t ProfilesInSegment; // 0x28
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

struct FClientGetPlayFabIDsFromFacebookIDsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FRigUnit_ConvertQuaternion : FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FQuat Input; // 0x30
	FRotator Result; // 0x40
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

struct FGameplayTagContainer {
	TArray<FGameplayTag> GameplayTags; // 0x0
	TArray<FGameplayTag> ParentTags; // 0x10
};

struct FMediaCaptureDevice {
	FText DisplayName; // 0x0
	FString URL; // 0x18
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

struct FSwarmDebugOptions {
	char bDistributionEnabled : 1; // 0x0
	char bForceContentExport : 1; // 0x0
	char bInitialized : 1; // 0x0
};

struct FGCharacterPerkDataTableLevel {
	FText Description; // 0x0
	TArray<FXScaledEffectClassJSON> Effects; // 0x18
};

struct FGTextWidgetEntry {
	AActor* HitActor; // 0x0
	FVector HitLocation; // 0x8
	int32_t OffsetIndex; // 0x14
	float CreationTime; // 0x18
	UGCombatTextWidget* Widget; // 0x20
};

struct FAdminCheckLimitedEditionItemAvailabilityResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	int32_t Amount; // 0x8
};

struct FGroupsListGroupMembersResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Members; // 0x8
};

struct FMaterialSpriteElement {
	UMaterialInterface* Material; // 0x0
	UCurveFloat* DistanceToOpacityCurve; // 0x8
	char bSizeIsInScreenSpace : 1; // 0x10
	float BaseSizeX; // 0x14
	float BaseSizeY; // 0x18
	UCurveFloat* DistanceToSizeCurve; // 0x20
};

struct FClientLinkPSNAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString AuthCode; // 0x8
	bool ForceLink; // 0x18
	int32_t IssuerId; // 0x1c
	FString RedirectUri; // 0x20
};

struct FAkXBoxOneAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t IO_MemorySize; // 0x0
	float TargetAutoStreamBufferLength; // 0x4
	bool UseStreamCache; // 0x8
	uint32_t MaximumPinnedBytesInCache; // 0xc
	int32_t PrepareEventMemoryPoolID; // 0x10
	bool EnableGameSyncPreparation; // 0x14
	uint32_t ContinuousPlaybackLookAhead; // 0x18
	uint32_t MonitorPoolSize; // 0x1c
	uint32_t MonitorQueuePoolSize; // 0x20
	uint32_t MaximumHardwareTimeoutMs; // 0x24
	FAkAdvancedSpatialAudioSettings SpatialAudioSettings; // 0x28
	bool EnableMultiCoreRendering; // 0x30
	uint32_t ShapeDefaultPoolSize; // 0x34
	uint16_t MaximumNumberOfXMAVoices; // 0x38
	bool UseHardwareCodecLowLatencyMode; // 0x3a
};

struct FNiagaraDataSetID {
	FName Name; // 0x0
	ENiagaraDataSetType Type; // 0xc
};

struct FClientPurchaseItemResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FXUsableActorLandingSpot {
	bool bLanded; // 0x0
	FVector_NetQuantize LandingLocation; // 0x4
};

struct FEQSParametrizedQueryExecutionRequest {
	UEnvQuery* QueryTemplate; // 0x0
	TArray<FAIDynamicParam> QueryConfig; // 0x8
	FBlackboardKeySelector EQSQueryBlackboardKey; // 0x18
	EEnvQueryRunMode RunMode; // 0x48
	char bUseBBKeyForQueryTemplate : 1; // 0x4c
};

struct FMultiplayerListContainerImageTagsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString ImageName; // 0x8
};

struct FXInstructionCustomState_LoadoutAimable : FXInstructionCustomState_Item {
	TWeakObjectPtr<UXItemComponent> Item; // 0x8
	TArray<FXAimableFireModeState> StateByFireMode; // 0x10
};

struct FParticleBurst {
	int32_t Count; // 0x0
	int32_t CountLow; // 0x4
	float Time; // 0x8
};

struct FServerRemoveSharedGroupMembersRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabIds; // 0x8
	FString SharedGroupId; // 0x18
};

struct FClientGetLeaderboardRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t MaxResultsCount; // 0x8
	UPlayFabJsonObject* ProfileConstraints; // 0x10
	int32_t StartPosition; // 0x18
	FString StatisticName; // 0x20
	bool UseSpecificVersion; // 0x30
	int32_t Version; // 0x34
};

struct FNiagaraInt32 {
	int32_t Value; // 0x0
};

struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FNiagaraVariable Parameter; // 0x20
	FMovieSceneFloatChannel RedChannel; // 0x58
	FMovieSceneFloatChannel GreenChannel; // 0xf8
	FMovieSceneFloatChannel BlueChannel; // 0x198
	FMovieSceneFloatChannel AlphaChannel; // 0x238
};

struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore {
	UObject* Owner; // 0x8
	TMap<FNiagaraVariable, int32_t> ParameterOffsets; // 0x10
	TArray<char> ParameterData; // 0x60
	TArray<UNiagaraDataInterface*> DataInterfaces; // 0x70
	int32_t ParameterSize; // 0xe8
	uint32_t PaddedParameterSize; // 0xec
	TArray<FNiagaraScriptExecutionPaddingInfo> PaddingInfo; // 0xf0
	char bInitialized : 1; // 0x100
};

struct FBakedAnimationState {
	FName StateName; // 0x0
	TArray<FBakedStateExitTransition> Transitions; // 0x10
	int32_t StateRootNodeIndex; // 0x20
	int32_t StartNotify; // 0x24
	int32_t EndNotify; // 0x28
	int32_t FullyBlendedNotify; // 0x2c
	bool bIsAConduit; // 0x30
	int32_t EntryRuleNodeIndex; // 0x34
	TArray<int32_t> PlayerNodeIndices; // 0x38
	bool bAlwaysResetOnEntry; // 0x48
};

struct FPrimaryAssetRules {
	int32_t Priority; // 0x0
	bool bApplyRecursively; // 0x4
	int32_t ChunkId; // 0x8
	EPrimaryAssetCookRule CookRule; // 0xc
};

struct FLiveLinkCurveElement {
	FName CurveName; // 0x0
	float CurveValue; // 0xc
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
	FName MyBoneName; // 0x84
};

struct FColorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel RedCurve; // 0x10
	FMovieSceneFloatChannel GreenCurve; // 0xb0
	FMovieSceneFloatChannel BlueCurve; // 0x150
	FMovieSceneFloatChannel AlphaCurve; // 0x1f0
};

struct FGQuestTrigger {
	FGameplayTag ListenTable; // 0x0
	UGEventQuery* Query; // 0x10
	TMap<FGameplayTag, FString> Properties; // 0x18
	EGQuestQueryOperation Operation; // 0x68
};

struct FGRewardDataTableRow : FTableRowBase {
	TArray<FGRewardEntry> RewardEntries; // 0x8
};

struct FEnvQueryRequest {
	UEnvQuery* QueryTemplate; // 0x0
	UObject* Owner; // 0x8
	UWorld* World; // 0x10
};

struct FClientStartGameRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString BuildVersion; // 0x8
	FString CharacterId; // 0x18
	FString CustomCommandLineData; // 0x28
	FString GameMode; // 0x38
	ERegion Region; // 0x48
	FString StatisticName; // 0x50
};

struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
	FMovieSceneSegmentIdentifier SegmentId; // 0x8
};

struct FPassiveSoundMixModifier {
	USoundMix* SoundMix; // 0x0
	float MinVolumeThreshold; // 0x8
	float MaxVolumeThreshold; // 0xc
};

struct FMirrorBone {
	FName BoneName; // 0x0
	EAxis MirrorAxis; // 0xc
	EAxis FlipAxis; // 0xd
	FRotator RotationOffset; // 0x10
	bool IsTwinBone; // 0x1c
	FName TwinBoneName; // 0x20
	bool MirrorTranslation; // 0x2c
};

struct FSubdivisionLimitData {
	TArray<FVector> VertexPositions; // 0x0
	TArray<FSubdivisionLimitSection> Sections; // 0x10
	TArray<FSubdividedWireEdge> SubdividedWireEdges; // 0x20
};

struct FGElementalState {
	bool bIgnited; // 0x0
	bool bFrozen; // 0x1
	bool bVaporized; // 0x2
	bool bToxic; // 0x3
	bool bElectrified; // 0x4
};

struct FPerPlatformInt {
	int32_t Default; // 0x0
};

struct FSocialChatChannelConfig {
	USocialUser* SocialUser; // 0x0
	TArray<USocialChatChannel*> ListenChannels; // 0x18
};

struct FClientGetCharacterStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CharacterId; // 0x8
};

struct FServerAddUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t Amount; // 0x8
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FPOV {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x18
};

struct FAdminSetupPushNotificationResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString ARN; // 0x8
};

struct FXElementalFXDef_Mask : FXElementalFXDef {
	bool bUseRadiusRange; // 0x0
	FVector2D ValidRadiusRange; // 0x4
	FXElementalVector Offset; // 0xc
	FXElementalRotator Rotation; // 0x38
	FXElementalVector Size; // 0x58
	bool bNormalizeSize; // 0x84
	FVector BaseSize; // 0x88
	TArray<FXElementalFXParam> StaticParameters; // 0x98
	FGameplayTagContainer RequiredTags; // 0xa8
	FGameplayTagContainer IgnoredTags; // 0xc8
	UTexture2D* Texture; // 0xe8
	float FadeInDuration; // 0xf0
	float FadeOutDuration; // 0xf4
	float Radius; // 0xf8
	float FadeOutDelay; // 0xfc
	EXTerrainMaskType Type; // 0x100
};

struct FScaleTrack {
	TArray<FVector> ScaleKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FSlotAnimationTrack {
	FName SlotName; // 0x0
	FAnimTrack AnimTrack; // 0x10
};

struct FClientRegisterForIOSPushNotificationRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString ConfirmationMessage; // 0x8
	FString DeviceToken; // 0x18
	bool SendPushNotificationConfirmation; // 0x28
};

struct FMatchmakerStartGameResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString GameID; // 0x8
	FString ServerIPV4Address; // 0x18
	FString ServerIPV6Address; // 0x28
	int32_t ServerPort; // 0x38
	FString ServerPublicDNSName; // 0x40
};

struct FGQuestCategoryDataTableRow : FTableRowBase {
	FText DisplayText; // 0x8
	FText DisplayTextNonPlural; // 0x20
	UTexture2D* IconTexture; // 0x38
};

struct FXMatchStartCondition {
	float MinFillPercent; // 0x0
	float MinWaitTime; // 0x4
	float MaxWaitTime; // 0x8
	float InitialWaitTime; // 0xc
	float IncrementalWaitTime; // 0x10
};

struct FRigUnit_AimConstraint : FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FRigHierarchyRef HierarchyRef; // 0x28
	FName Joint; // 0x40
	EAimMode AimMode; // 0x4c
	EAimMode UpMode; // 0x4d
	FVector AimVector; // 0x50
	FVector UpVector; // 0x5c
	TArray<FAimTarget> AimTargets; // 0x68
	TArray<FAimTarget> UpTargets; // 0x78
};

struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase {
	FFrameNumber Time; // 0x8
	FVector2D Vector; // 0x28
};

struct FAdminRevokeInventoryResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FLevelSequenceBindingReference {
	FString PackageName; // 0x0
	FSoftObjectPath ExternalObjectPath; // 0x10
	FString ObjectPath; // 0x30
};

struct FFrameTime {
	FFrameNumber FrameNumber; // 0x0
	float SubFrame; // 0x4
};

struct FMovieSceneSequenceLoopCount {
	int32_t Value; // 0x0
};

struct FBlendParameter {
	FString DisplayName; // 0x0
	float Min; // 0x10
	float Max; // 0x14
	int32_t GridNum; // 0x18
};

struct FMargin {
	float Left; // 0x0
	float Top; // 0x4
	float Right; // 0x8
	float Bottom; // 0xc
};

struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base {
	int32_t FramesToCachePose; // 0x48
	EEvaluatorDataSource DataSource; // 0x50
	EEvaluatorMode EvaluatorMode; // 0x51
};

struct FLiveLinkSubjectDataMessage {
	FLiveLinkRefSkeleton RefSkeleton; // 0x0
	FName SubjectName; // 0x20
};

struct FGArenaBounds {
	FVector2D Center; // 0x0
	float Radius; // 0x8
};

struct FServerGetTimeResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString Time; // 0x8
};

struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieSceneFloatChannel SlomoCurve; // 0x20
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

struct FKShapeElem {
	float RestOffset; // 0x8
	FName Name; // 0xc
	char bContributeToMass : 1; // 0x1c
};

struct FDataGetFilesRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
};

struct FRigTransformConstraint {
	EConstraintTransform TranformType; // 0x0
	FName ParentSpace; // 0x4
	float Weight; // 0x10
};

struct FReplicatedVehicleState {
	float SteeringInput; // 0x0
	float ThrottleInput; // 0x4
	float BrakeInput; // 0x8
	float HandbrakeInput; // 0xc
	int32_t CurrentGear; // 0x10
};

struct FXInstructionCustomState_Item : FXInstructionCustomState {
	TWeakObjectPtr<UXItemComponent> Item; // 0x8
};

struct FAnchors {
	FVector2D Minimum; // 0x0
	FVector2D Maximum; // 0x8
};

struct FEventPayload {
	FName EventName; // 0x0
	FMovieSceneEventParameters Parameters; // 0x10
};

struct FClientUnlockContainerItemRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ContainerItemId; // 0x28
};

struct FAdminSetTitleDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FRootMotionSourceStatus {
	char Flags; // 0x0
};

struct FClientLinkOpenIdConnectRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString ConnectionId; // 0x8
	bool ForceLink; // 0x18
	FString IdToken; // 0x20
};

struct FAIDataProviderIntValue : FAIDataProviderTypedValue {
	UProperty* CachedProperty; // 0x8
	UAIDataProvider* DataBinding; // 0x10
	FName DataField; // 0x18
	UProperty* PropertyType; // 0x28
	int32_t DefaultValue; // 0x30
};

struct FClientRegisterPlayFabUserResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* EntityToken; // 0x8
	FString PlayFabId; // 0x10
	FString SessionTicket; // 0x20
	UPlayFabJsonObject* SettingsForUser; // 0x30
	FString Username; // 0x38
};

struct FClientOpenTradeResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Trade; // 0x8
};

struct FClientValidateAmazonReceiptResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FMultiplayerCancelServerBackfillTicketRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString QueueName; // 0x8
	FString TicketId; // 0x18
};

struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x10
	FPoseLink Additive; // 0x20
	bool bMeshSpaceAdditive; // 0x30
};

struct FBodyInstance {
	ECollisionChannel ObjectType; // 0x6
	ECollisionEnabled CollisionEnabled; // 0x8
	ESleepFamily SleepFamily; // 0xa
	EDOFMode DOFMode; // 0xb
	char bUseCCD : 1; // 0xc
	char bNotifyRigidBodyCollision : 1; // 0xc
	char bSimulatePhysics : 1; // 0xc
	char bOverrideMass : 1; // 0xc
	char bEnableGravity : 1; // 0xc
	char bAutoWeld : 1; // 0xc
	char bStartAwake : 1; // 0xc
	char bGenerateWakeEvents : 1; // 0xd
	char bUpdateMassWhenScaleChanges : 1; // 0xd
	char bLockTranslation : 1; // 0xd
	char bLockRotation : 1; // 0xd
	char bLockXTranslation : 1; // 0xd
	char bLockYTranslation : 1; // 0xd
	char bLockZTranslation : 1; // 0xd
	char bLockXRotation : 1; // 0xd
	char bLockYRotation : 1; // 0xe
	char bLockZRotation : 1; // 0xe
	char bOverrideMaxAngularVelocity : 1; // 0xe
	char bOverrideMaxDepenetrationVelocity : 1; // 0xe
	char bOverrideWalkableSlopeOnInstance : 1; // 0xe
	char bInterpolateWhenSubStepping : 1; // 0xe
	FName CollisionProfileName; // 0x1c
	FCollisionResponse CollisionResponses; // 0x28
	float MaxDepenetrationVelocity; // 0x58
	float MassInKgOverride; // 0x5c
	float LinearDamping; // 0x68
	float AngularDamping; // 0x6c
	FVector CustomDOFPlaneNormal; // 0x70
	FVector COMNudge; // 0x7c
	float MassScale; // 0x88
	FVector InertiaTensorScale; // 0x8c
	FWalkableSlopeOverride WalkableSlopeOverride; // 0xa8
	UPhysicalMaterial* PhysMaterialOverride; // 0xb8
	float MaxAngularVelocity; // 0xc0
	float CustomSleepThresholdMultiplier; // 0xc4
	float StabilizationThresholdMultiplier; // 0xc8
	float PhysicsBlendWeight; // 0xcc
	int32_t PositionSolverIterationCount; // 0xd0
	int32_t VelocitySolverIterationCount; // 0xd4
};

struct FAdminResetCharacterStatisticsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAdminGetServerBuildUploadURLResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString URL; // 0x8
};

struct FMovieSceneTrackDisplayOptions {
	char bShowVerticalFrames : 1; // 0x0
};

struct FDirectoryPath {
	FString Path; // 0x0
};

struct FImportFactorySettingValues {
	FString SettingName; // 0x0
	FString Value; // 0x10
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

struct FClientGetPlayerStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString StatisticNames; // 0x8
	TArray<UPlayFabJsonObject*> StatisticNameVersions; // 0x18
};

struct FClientLinkIOSDeviceIDRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString DeviceID; // 0x8
	FString DeviceModel; // 0x18
	bool ForceLink; // 0x28
	FString OS; // 0x30
};

struct FAnimNode_SaveCachedPose : FAnimNode_Base {
	FPoseLink Pose; // 0x10
	FName CachePoseName; // 0x20
};

struct FServerSubtractCharacterVirtualCurrencyRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t Amount; // 0x8
	FString CharacterId; // 0x10
	FString PlayFabId; // 0x20
	FString VirtualCurrency; // 0x30
};

struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieSceneParticleChannel ParticleKeys; // 0x20
};

struct FDatasmithCameraFocusSettingsTemplate {
	ECameraFocusMethod FocusMethod; // 0x0
	float ManualFocusDistance; // 0x4
};

struct FSkeletalMeshSamplingInfo {
	TArray<FSkeletalMeshSamplingRegion> Regions; // 0x0
	FSkeletalMeshSamplingBuiltData BuiltData; // 0x10
};

struct FTireConfigMaterialFriction {
	UPhysicalMaterial* PhysicalMaterial; // 0x0
	float FrictionScale; // 0x8
};

struct FInterpLookupTrack {
	TArray<FInterpLookupPoint> Points; // 0x0
};

struct FServerUnlinkServerCustomIdResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FGBoonTierInstances {
	TArray<UGBoonGenerator*> Generators; // 0x0
};

struct FMovieSceneBoolChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	bool DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<bool> Values; // 0x20
};

struct FReverbSettings {
	bool bApplyReverb; // 0x0
	UReverbEffect* ReverbEffect; // 0x8
	USoundEffectSubmixPreset* ReverbPluginEffect; // 0x10
	float Volume; // 0x18
	float FadeTime; // 0x1c
};

struct FClientValidateGooglePlayPurchaseRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
	FString CurrencyCode; // 0x18
	int32_t PurchasePrice; // 0x28
	FString ReceiptJson; // 0x30
	FString Signature; // 0x40
};

struct FPartyPlatformSessionInfo {
	FName OSSName; // 0x0
	FString SessionId; // 0x10
	FUniqueNetIdRepl OwnerPrimaryId; // 0x20
};

struct FGDamageEventEffect : FGEventEffect {
	UXGameplayEffect* EffectClass; // 0x0
	float EffectScale; // 0x8
	float EffectDurationScale; // 0xc
	bool bApplyOnceOnly; // 0x10
	TWeakObjectPtr<UObject> EffectSource; // 0x14
	EGDamageEventType DamageEventType; // 0x20
	AActor* RequiredDamageCauserType; // 0x28
	bool bScaleEffectByDamage; // 0x30
	bool bApplyToTeammates; // 0x31
};

struct FNode {
	FName Name; // 0x0
	FName ParentName; // 0xc
	FTransform Transform; // 0x20
	FString DisplayName; // 0x50
	bool bAdvanced; // 0x60
};

struct FClientLoginWithAndroidDeviceIDRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString AndroidDevice; // 0x8
	FString AndroidDeviceId; // 0x18
	bool CreateAccount; // 0x28
	FString EncryptedRequest; // 0x30
	UPlayFabJsonObject* InfoRequestParameters; // 0x40
	FString OS; // 0x48
	FString PlayerSecret; // 0x58
};

struct FMovieSceneEvaluationMetaData {
	TArray<FMovieSceneSequenceID> ActiveSequences; // 0x0
	TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities; // 0x10
	TMap<FMovieSceneSequenceID, uint32_t> SubTemplateSerialNumbers; // 0x20
};

struct FGroupsDeleteRoleRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Group; // 0x8
	FString RoleId; // 0x10
};

struct FBoneMirrorExport {
	FName BoneName; // 0x0
	FName SourceBoneName; // 0xc
	EAxis BoneFlipAxis; // 0x18
};

struct FNiagaraScriptDataInterfaceInfo {
	UNiagaraDataInterface* DataInterface; // 0x0
	FName Name; // 0x8
	int32_t UserPtrIdx; // 0x14
	FNiagaraTypeDefinition Type; // 0x18
	FName RegisteredParameterMapRead; // 0x30
	FName RegisteredParameterMapWrite; // 0x3c
};

struct FGroupsAcceptGroupInvitationRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FClientGameServerRegionsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Regions; // 0x8
};

struct FFastArraySerializerItem {
	int32_t ReplicationID; // 0x0
	int32_t ReplicationKey; // 0x4
	int32_t MostRecentArrayReplicationKey; // 0x8
};

struct FAnimNode_ModifyCurve : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
	TArray<float> CurveValues; // 0x20
	TArray<FName> CurveNames; // 0x30
	float Alpha; // 0x50
	EModifyCurveApplyMode ApplyMode; // 0x54
};

struct FGPUSpriteEmitterInfo {
	UParticleModuleRequired* RequiredModule; // 0x0
	UParticleModuleSpawn* SpawnModule; // 0x8
	UParticleModuleSpawnPerUnit* SpawnPerUnitModule; // 0x10
	TArray<UParticleModule*> SpawnModules; // 0x18
	FGPUSpriteLocalVectorFieldInfo LocalVectorField; // 0x30
	FFloatDistribution VectorFieldScale; // 0xa0
	FFloatDistribution DragCoefficient; // 0xc8
	FFloatDistribution PointAttractorStrength; // 0xf0
	FFloatDistribution Resilience; // 0x118
	FVector ConstantAcceleration; // 0x140
	FVector PointAttractorPosition; // 0x14c
	float PointAttractorRadiusSq; // 0x158
	FVector OrbitOffsetBase; // 0x15c
	FVector OrbitOffsetRange; // 0x168
	FVector2D InvMaxSize; // 0x174
	float InvRotationRateScale; // 0x17c
	float MaxLifetime; // 0x180
	int32_t MaxParticleCount; // 0x184
	EParticleScreenAlignment ScreenAlignment; // 0x188
	EParticleAxisLock LockAxisFlag; // 0x189
	char bEnableCollision : 1; // 0x18c
	EParticleCollisionMode CollisionMode; // 0x190
	char bRemoveHMDRoll : 1; // 0x194
	float MinFacingCameraBlendDistance; // 0x198
	float MaxFacingCameraBlendDistance; // 0x19c
	FRawDistributionVector DynamicColor; // 0x1a0
	FRawDistributionFloat DynamicAlpha; // 0x1f0
	FRawDistributionVector DynamicColorScale; // 0x228
	FRawDistributionFloat DynamicAlphaScale; // 0x278
};

struct FGFriendRequestResultStrings {
	FText AlertText; // 0x0
	bool bPositive; // 0x18
	FText BodyText; // 0x20
};

struct FClientLinkXboxAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FBPInterfaceDescription {
	UInterface* Interface; // 0x0
	TArray<UEdGraph*> Graphs; // 0x8
};

struct FTViewTarget {
	AActor* Target; // 0x0
	FMinimalViewInfo POV; // 0x10
	APlayerState* PlayerState; // 0x5a0
};

struct FServerGetLeaderboardForUsersCharactersRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t MaxResultsCount; // 0x8
	FString PlayFabId; // 0x10
	FString StatisticName; // 0x20
};

struct FWindowStyle : FSlateWidgetStyle {
	FButtonStyle MinimizeButtonStyle; // 0x8
	FButtonStyle MaximizeButtonStyle; // 0x2b0
	FButtonStyle RestoreButtonStyle; // 0x558
	FButtonStyle CloseButtonStyle; // 0x800
	FTextBlockStyle TitleTextStyle; // 0xaa8
	FSlateBrush ActiveTitleBrush; // 0xd38
	FSlateBrush InactiveTitleBrush; // 0xdc8
	FSlateBrush FlashTitleBrush; // 0xe58
	FSlateColor BackgroundColor; // 0xee8
	FSlateBrush OutlineBrush; // 0xf10
	FSlateColor OutlineColor; // 0xfa0
	FSlateBrush BorderBrush; // 0xfc8
	FSlateBrush BackgroundBrush; // 0x1058
	FSlateBrush ChildBackgroundBrush; // 0x10e8
};

struct FGInstructionCustomState_NewPerk : FXInstructionCustomState {
	UObject* PerkClass; // 0x8
	int32_t PerkLevel; // 0x10
};

struct FAdminGetContentListRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Prefix; // 0x8
};

struct FMovieSceneSubSectionData {
	TWeakObjectPtr<UMovieSceneSubSection> Section; // 0x0
	FGuid ObjectBindingID; // 0x8
	ESectionEvaluationFlags Flags; // 0x18
};

struct FClientGetPlayerTradesResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> AcceptedTrades; // 0x8
	TArray<UPlayFabJsonObject*> OpenedTrades; // 0x18
};

struct FGRMTOfferData {
	FPrimaryAssetId AssetId; // 0x0
	TArray<FString> ProviderOfferIds; // 0x18
	TArray<FPrimaryAssetId> RewardAssetIds; // 0x28
	FText DisplayPrice; // 0x38
};

struct FScalarParameterAtlasInstanceData {
	bool bIsUsedAsAtlasPosition; // 0x0
	UCurveLinearColor* Curve; // 0x8
	UCurveLinearColorAtlas* Atlas; // 0x38
};

struct FControlRigComponentInstanceData : FActorComponentInstanceData {
	UObject* SourceComponentTemplate; // 0x8
	EComponentCreationMethod SourceComponentCreationMethod; // 0x10
	int32_t SourceComponentTypeSerializedIndex; // 0x14
	TArray<char> SavedProperties; // 0x18
	TArray<FActorComponentDuplicatedObjectData> DuplicatedObjects; // 0x28
	TArray<UObject*> ReferencedObjects; // 0x38
	TArray<FName> ReferencedNames; // 0x48
	UControlRig* AnimControlRig; // 0x58
};

struct FDatasmithCameraFilmbackSettingsTemplate {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
};

struct FGBackplateMaterialOverrides {
	TArray<UMaterialInterface*> BackplateMaterialOverrides; // 0x0
};

struct FVector_NetQuantize10 : FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FStatColorMapEntry {
	float In; // 0x0
	FColor Out; // 0x4
};

struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FNiagaraVariable Parameter; // 0x20
	FMovieSceneFloatChannel FloatChannel; // 0x58
};

struct FGClassAndRank {
	UGCharacterClass* Class; // 0x0
	int32_t UnlockRank; // 0x8
};

struct FMinimalViewInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x18
	float DesiredFOV; // 0x1c
	float BaseFOV; // 0x20
	float OrthoWidth; // 0x24
	float OrthoNearClipPlane; // 0x28
	float OrthoFarClipPlane; // 0x2c
	float AspectRatio; // 0x30
	char bConstrainAspectRatio : 1; // 0x34
	char bUseFieldOfViewForLOD : 1; // 0x34
	ECameraProjectionMode ProjectionMode; // 0x38
	float PostProcessBlendWeight; // 0x3c
	FPostProcessSettings PostProcessSettings; // 0x40
	FVector2D OffCenterProjectionOffset; // 0x580
};

struct FClientGetTitleNewsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t Count; // 0x8
};

struct FXActionCueParameters {
	bool bFireAndForget; // 0x0
	bool bOwnerOnly; // 0x1
	bool bInheritActorRotation; // 0x2
	FVector Destination; // 0x4
	FVector OverrideNormal; // 0x10
	FVector OverrideLocation; // 0x1c
};

struct FAssetMapping {
	UAnimationAsset* SourceAsset; // 0x0
	UAnimationAsset* TargetAsset; // 0x8
};

struct FTwoVectors {
	FVector v1; // 0x0
	FVector v2; // 0xc
};

struct FStaticSwitchParameter {
	FMaterialParameterInfo ParameterInfo; // 0x0
	bool Value; // 0x14
	bool bOverride; // 0x15
	FGuid ExpressionGUID; // 0x18
};

struct FClientUpdateCharacterStatisticsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FNavigationSegmentLink : FNavigationLinkBase {
	float LeftProjectHeight; // 0x0
	float MaxFallDownLength; // 0x4
	ENavLinkDirection Direction; // 0x8
	float SnapRadius; // 0x10
	float SnapHeight; // 0x14
	FNavAgentSelector SupportedAgents; // 0x18
	char bSupportsAgent0 : 1; // 0x1c
	char bSupportsAgent1 : 1; // 0x1c
	char bSupportsAgent2 : 1; // 0x1c
	char bSupportsAgent3 : 1; // 0x1c
	char bSupportsAgent4 : 1; // 0x1c
	char bSupportsAgent5 : 1; // 0x1c
	char bSupportsAgent6 : 1; // 0x1c
	char bSupportsAgent7 : 1; // 0x1c
	char bSupportsAgent8 : 1; // 0x1d
	char bSupportsAgent11 : 1; // 0x1d
	char bSupportsAgent10 : 1; // 0x1d
	char bSupportsAgent9 : 1; // 0x1d
	char bSupportsAgent12 : 1; // 0x1d
	char bSupportsAgent13 : 1; // 0x1d
	char bSupportsAgent14 : 1; // 0x1d
	char bSupportsAgent15 : 1; // 0x1d
	char bUseSnapHeight : 1; // 0x20
	char bSnapToCheapestArea : 1; // 0x20
	char bCustomFlag0 : 1; // 0x20
	char bCustomFlag1 : 1; // 0x20
	char bCustomFlag2 : 1; // 0x20
	char bCustomFlag3 : 1; // 0x20
	char bCustomFlag4 : 1; // 0x20
	char bCustomFlag5 : 1; // 0x20
	char bCustomFlag6 : 1; // 0x21
	char bCustomFlag7 : 1; // 0x21
	UNavAreaBase* AreaClass; // 0x28
	FVector LeftStart; // 0x38
	FVector LeftEnd; // 0x44
	FVector RightStart; // 0x50
	FVector RightEnd; // 0x5c
};

struct FMultiplayerCancelAllMatchmakingTicketsForPlayerResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerAwardSteamAchievementRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	TArray<UPlayFabJsonObject*> Achievements; // 0x8
};

struct FServerGetFriendsListRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool IncludeFacebookFriends; // 0x8
	bool IncludeSteamFriends; // 0x9
	FString PlayFabId; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x20
	FString XboxToken; // 0x28
};

struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	TArray<FScalarParameterNameAndCurve> Scalars; // 0x20
	TArray<FVectorParameterNameAndCurves> Vectors; // 0x30
	TArray<FColorParameterNameAndCurves> Colors; // 0x40
	TArray<FName> BrushPropertyNamePath; // 0x50
};

struct FRigUnit_MergeHierarchy : FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FRigHierarchyRef TargetHierarchy; // 0x28
	FRigHierarchyRef SourceHierarchy; // 0x40
};

struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase {
	int32_t GroupIndex; // 0x10
	EAnimGroupRole GroupRole; // 0x14
	bool bIgnoreForRelevancyTest; // 0x15
	float BlendWeight; // 0x18
	float InternalTimeAccumulator; // 0x1c
	UAnimSequenceBase* Sequence; // 0x30
	float ExplicitTime; // 0x38
	bool bShouldLoop; // 0x3c
	bool bTeleportToExplicitTime; // 0x3d
	ESequenceEvalReinit ReinitializationBehavior; // 0x3e
	float StartPosition; // 0x40
};

struct FConstraintDescriptionEx {
	FFilterOptionPerAxis AxesFilterOption; // 0x8
};

struct FClientRestoreIOSPurchasesRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
	FString ReceiptData; // 0x18
};

struct FGSpawnProjectileEffect_Context : FXGameplayEffectContext {
	TArray<FXGameplayEffectHandle> TrackedEffects; // 0x8
	TArray<AActor*> TrackedActors; // 0x18
	bool bEverActivated; // 0x28
	int32_t TotalProcs; // 0x30
};

struct FBaseAttenuationSettings {
	EAttenuationDistanceModel DistanceAlgorithm; // 0x8
	EAttenuationShape AttenuationShape; // 0x9
	float dBAttenuationAtMax; // 0xc
	FVector AttenuationShapeExtents; // 0x10
	float ConeOffset; // 0x1c
	float FalloffDistance; // 0x20
	FRuntimeFloatCurve CustomAttenuationCurve; // 0x28
};

struct FMultiplayerCreateBuildWithManagedContainerResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString BuildId; // 0x8
	FString BuildName; // 0x18
	EContainerFlavor ContainerFlavor; // 0x28
	FString CreationTime; // 0x30
	TArray<UPlayFabJsonObject*> GameAssetReferences; // 0x40
	TArray<UPlayFabJsonObject*> GameCertificateReferences; // 0x50
	UPlayFabJsonObject* InstrumentationConfiguration; // 0x60
	UPlayFabJsonObject* MetaData; // 0x68
	int32_t MultiplayerServerCountPerVm; // 0x70
	TArray<UPlayFabJsonObject*> Ports; // 0x78
	TArray<UPlayFabJsonObject*> RegionConfigurations; // 0x88
	FString StartMultiplayerServerCommand; // 0x98
	EAzureVmSize VmSize; // 0xa8
};

struct FRootMotionSource_JumpForce : FRootMotionSource {
	uint16_t Priority; // 0x10
	uint16_t LocalID; // 0x12
	ERootMotionAccumulateMode AccumulateMode; // 0x14
	FName InstanceName; // 0x18
	float StartTime; // 0x24
	float CurrentTime; // 0x28
	float PreviousTime; // 0x2c
	float Duration; // 0x30
	FRootMotionSourceStatus Status; // 0x34
	FRootMotionSourceSettings Settings; // 0x35
	bool bInLocalSpace; // 0x36
	FRootMotionMovementParams RootMotionParams; // 0x40
	FRootMotionFinishVelocitySettings FinishVelocityParams; // 0x80
	FRotator Rotation; // 0x98
	float Distance; // 0xa4
	float Height; // 0xa8
	bool bDisableTimeout; // 0xac
	UCurveVector* PathOffsetCurve; // 0xb0
	UCurveFloat* TimeMappingCurve; // 0xb8
};

struct FGroupsInviteToGroupResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString Expires; // 0x8
	UPlayFabJsonObject* Group; // 0x18
	UPlayFabJsonObject* InvitedByEntity; // 0x20
	UPlayFabJsonObject* InvitedEntity; // 0x28
	FString RoleId; // 0x30
};

struct FFloatDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FMultiplayerListCertificateSummariesResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> CertificateSummaries; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
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

struct FRigHierarchyContainer {
	FRigHierarchy BaseHierarchy; // 0x60
};

struct FVertexAttributesForPolygonHole {
	TArray<FMeshElementAttributeList> VertexAttributeList; // 0x0
};

struct FGInstructionCustomState_NewSkill : FXInstructionCustomState {
	UObject* SkillClass; // 0x8
};

struct FARTraceResult {
	float DistanceFromCamera; // 0x0
	EARLineTraceChannels TraceChannel; // 0x4
	FTransform LocalToTrackingTransform; // 0x10
	UARTrackedGeometry* TrackedGeometry; // 0x40
};

struct FAdminRunTaskRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Identifier; // 0x8
};

struct FClientLoginWithGameCenterRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool CreateAccount; // 0x8
	FString EncryptedRequest; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x20
	FString PlayerId; // 0x28
	FString PlayerSecret; // 0x38
	FString PublicKeyUrl; // 0x48
	FString Salt; // 0x58
	FString Signature; // 0x68
	FString Timestamp; // 0x78
};

struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	ETitleMultiplayerServerEnabledStatus Status; // 0x8
};

struct FPoseSnapshot {
	TArray<FTransform> LocalTransforms; // 0x0
	TArray<FName> BoneNames; // 0x10
	FName SkeletalMeshName; // 0x20
	FName SnapshotName; // 0x2c
	bool bIsValid; // 0x38
};

struct FAnimSyncMarker {
	FName MarkerName; // 0x0
	float Time; // 0xc
};

struct FServerGetCharacterInventoryResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString CharacterId; // 0x8
	TArray<UPlayFabJsonObject*> Inventory; // 0x18
	FString PlayFabId; // 0x28
	UPlayFabJsonObject* VirtualCurrency; // 0x38
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x40
};

struct FMultiplayerCreateMatchmakingTicketResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString TicketId; // 0x8
};

struct FLandscapeComponentMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FRepRootMotionMontage {
	bool bIsActive; // 0x0
	UAnimMontage* AnimMontage; // 0x8
	float Position; // 0x10
	FVector_NetQuantize100 Location; // 0x14
	FRotator Rotation; // 0x20
	UPrimitiveComponent* MovementBase; // 0x30
	FName MovementBaseBoneName; // 0x38
	bool bRelativePosition; // 0x44
	bool bRelativeRotation; // 0x45
	FRootMotionSourceGroup AuthoritativeRootMotion; // 0x48
	FVector_NetQuantize10 Acceleration; // 0x140
	FVector_NetQuantize10 LinearVelocity; // 0x14c
};

struct FGInstructionWidgetParamConfig {
	FGameplayTagContainer GameplayTags; // 0x0
	FXInstructionStateParams InstructionStateParams; // 0x20
};

struct FGVoiceChatChannelData {
	FString ChannelName; // 0x0
	FString Token; // 0x10
};

struct FMultiplayerUpdateBuildRegionsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString BuildId; // 0x8
	TArray<UPlayFabJsonObject*> BuildRegions; // 0x18
};

struct FServerSendPushNotificationResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FExposedValueCopyRecord {
	FName SourcePropertyName; // 0x0
	FName SourceSubPropertyName; // 0xc
	int32_t SourceArrayIndex; // 0x18
	bool bInstanceIsTarget; // 0x1c
	EPostCopyOperation PostCopyOperation; // 0x1d
	ECopyType CopyType; // 0x1e
	UProperty* DestProperty; // 0x20
	int32_t DestArrayIndex; // 0x28
	int32_t Size; // 0x2c
	UProperty* CachedSourceProperty; // 0x30
	UProperty* CachedSourceStructSubProperty; // 0x38
};

struct FBlueprintCookedComponentInstancingData {
	bool bIsValid; // 0x0
	TArray<FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; // 0x8
};

struct FClientAddSharedGroupMembersResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientGetPlayFabIDsFromXboxLiveIDsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FServerUpdateCharacterDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	int32_t DataVersion; // 0x8
};

struct FXNavToolActorStateConfiguration {
	EXNavToolActorState State; // 0x0
	FLinearColor StateColor; // 0x4
	UTexture2D* StateIcon; // 0x18
};

struct FLandscapeSplineConnection {
	ULandscapeSplineSegment* Segment; // 0x0
	char End : 1; // 0x8
};

struct FFloatRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FAdminDeleteStoreResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMovieSceneSpawnable {
	FTransform SpawnTransform; // 0x0
	TArray<FName> Tags; // 0x30
	FGuid Guid; // 0x40
	FString Name; // 0x50
	UObject* ObjectTemplate; // 0x60
	TArray<FGuid> ChildPossessables; // 0x68
	ESpawnOwnership Ownership; // 0x78
	FName LevelName; // 0x7c
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

struct FReferencePose {
	FName PoseName; // 0x0
	TArray<FTransform> ReferencePose; // 0x10
};

struct FClientReportPlayerClientResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	int32_t SubmissionsRemaining; // 0x8
};

struct FClothingAssetData_Legacy {
	FName AssetName; // 0x0
	FString ApexFileName; // 0x10
	bool bClothPropertiesChanged; // 0x20
	FClothPhysicsProperties_Legacy PhysicsProperties; // 0x24
};

struct FSubjectMetadata {
	TMap<FName, FString> StringMetadata; // 0x0
	FTimecode SceneTimecode; // 0x50
	FFrameRate SceneFramerate; // 0x64
};

struct FParticleReplayTrackKey {
	float Time; // 0x0
	float Duration; // 0x4
	int32_t ClipIDNumber; // 0x8
};

struct FAdminGetPublisherDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Data; // 0x8
};

struct FMultiplayerMultiplayerEmptyRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FServerModifyCharacterVirtualCurrencyResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	int32_t Balance; // 0x8
	FString VirtualCurrency; // 0x10
};

struct FXMeleeDamageEvent : FPointDamageEvent {
	UDamageType* DamageTypeClass; // 0x8
	float Damage; // 0x10
	FVector_NetQuantizeNormal ShotDirection; // 0x14
	FHitResult HitInfo; // 0x20
	float ReceiptTime; // 0xb0
	float InstigationTime; // 0xb4
};

struct FAnimLegIKDefinition {
	FBoneReference IKFootBone; // 0x0
	FBoneReference FKFootBone; // 0x14
	int32_t NumBonesInLimb; // 0x28
	float MinRotationAngle; // 0x2c
	EAxis FootBoneForwardAxis; // 0x30
	EAxis HingeRotationAxis; // 0x31
	bool bEnableRotationLimit; // 0x32
	bool bEnableKneeTwistCorrection; // 0x33
};

struct FBlendSample {
	UAnimSequence* Animation; // 0x0
	FVector SampleValue; // 0x8
	float RateScale; // 0x14
};

struct FAdminSetPlayerSecretRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayerSecret; // 0x8
	FString PlayFabId; // 0x18
};

struct FClientGetLeaderboardAroundPlayerRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t MaxResultsCount; // 0x8
	FString PlayFabId; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x20
	FString StatisticName; // 0x28
	bool UseSpecificVersion; // 0x38
	int32_t Version; // 0x3c
};

struct FMultiplayerRequestMultiplayerServerRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* BuildAliasParams; // 0x8
	FString BuildId; // 0x10
	FString InitialPlayers; // 0x20
	FString PreferredRegions; // 0x30
	FString SessionCookie; // 0x40
	FString SessionId; // 0x50
};

struct FServerSetPlayerSecretRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayerSecret; // 0x8
	FString PlayFabId; // 0x18
};

struct FAdminSetPlayerSecretResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FNiagaraVariable {
	FName Name; // 0x0
	FNiagaraTypeDefinition TypeDef; // 0x10
	TArray<char> VarData; // 0x28
};

struct FXGameplayEffectApplicationParams {
	UXGameplayEffect* EffectClass; // 0x0
	APawn* Instigator; // 0x8
	UObject* Source; // 0x10
	float EffectScale; // 0x18
	float DurationScale; // 0x1c
	bool bClientAutonomous; // 0x20
};

struct FVertexInstanceToCreate {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
	FVertexInstanceID OriginalVertexInstanceID; // 0x18
};

struct FVehicleInputRate {
	float RiseRate; // 0x0
	float FallRate; // 0x4
};

struct FAnimNode_TransitionResult : FAnimNode_Base {
	bool bCanEnterTransition; // 0x10
};

struct FChunkInfoData {
	FGuid Guid; // 0x0
	uint64_t Hash; // 0x10
	FSHAHashData ShaHash; // 0x18
	int64_t FileSize; // 0x30
	char GroupNumber; // 0x38
};

struct FAdminBanUsersRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	TArray<UPlayFabJsonObject*> Bans; // 0x8
};

struct FNamedColor {
	FColor Value; // 0x0
	FName Name; // 0x4
};

struct FAdminSubtractUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t Amount; // 0x8
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FXPointDamageEvent : FPointDamageEvent {
	UDamageType* DamageTypeClass; // 0x8
	float Damage; // 0x10
	FVector_NetQuantizeNormal ShotDirection; // 0x14
	FHitResult HitInfo; // 0x20
	FGameplayTagContainer SourceTags; // 0xb0
};

struct FMultiplayerListAssetSummariesRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t PageSize; // 0x8
	FString SkipToken; // 0x10
};

struct FFloatInterval {
	float Min; // 0x0
	float Max; // 0x4
};

struct FAdminUpdateStoreItemsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* MarketingData; // 0x18
	TArray<UPlayFabJsonObject*> Store; // 0x20
	FString StoreId; // 0x30
};

struct FXActionCustomState_OverrideDuration : FXActionCustomState {
	float DurationOverride; // 0x8
};

struct FServerCreateSharedGroupResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString SharedGroupId; // 0x8
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

struct FParticleSystemWorldManagerTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x40
};

struct FAdminModifyUserVirtualCurrencyResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	int32_t Balance; // 0x8
	int32_t BalanceChange; // 0xc
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FXTextPresetDataTableRow : FTableRowBase {
	FSlateFontInfo DefaultFont; // 0x8
	FSlateFontInfo ItalicFont; // 0x60
	FSlateFontInfo BoldFont; // 0xb8
	FSlateFontInfo ItalicBoldFont; // 0x110
};

struct FGEquipmentUpgradeInfo {
	float KnowledgeCharges; // 0x0
	float Overcharges; // 0x4
	float Charges; // 0x8
	float RemainingCooldown; // 0xc
	FGameplayTagContainer Tags; // 0x10
};

struct FAdminGetRandomResultTablesRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
};

struct FServerBanUsersRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	TArray<UPlayFabJsonObject*> Bans; // 0x8
};

struct FRootMotionSource_MoveToForce : FRootMotionSource {
	uint16_t Priority; // 0x10
	uint16_t LocalID; // 0x12
	ERootMotionAccumulateMode AccumulateMode; // 0x14
	FName InstanceName; // 0x18
	float StartTime; // 0x24
	float CurrentTime; // 0x28
	float PreviousTime; // 0x2c
	float Duration; // 0x30
	FRootMotionSourceStatus Status; // 0x34
	FRootMotionSourceSettings Settings; // 0x35
	bool bInLocalSpace; // 0x36
	FRootMotionMovementParams RootMotionParams; // 0x40
	FRootMotionFinishVelocitySettings FinishVelocityParams; // 0x80
	FVector StartLocation; // 0x98
	FVector TargetLocation; // 0xa4
	bool bRestrictSpeedToExpected; // 0xb0
	UCurveVector* PathOffsetCurve; // 0xb8
};

struct FServerGrantItemsToUsersResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> ItemGrantResults; // 0x8
};

struct FDatasmithStaticMeshImportOptions {
	EDatasmithImportLightmapMin MinLightmapResolution; // 0x0
	EDatasmithImportLightmapMax MaxLightmapResolution; // 0x1
	bool bGenerateLightmapUVs; // 0x2
	bool bRemoveDegenerates; // 0x3
};

struct FAssetBundleData {
	TArray<FAssetBundleEntry> Bundles; // 0x0
};

struct FLaunchOnTestSettings {
	FFilePath LaunchOnTestmap; // 0x0
	FString DeviceID; // 0x10
};

struct FClientGetPlayFabIDsFromGoogleIDsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FMovieSceneMarkedFrame {
	FFrameNumber FrameNumber; // 0x0
	FString Label; // 0x8
};

struct FCharacterMovementComponentPostPhysicsTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x40
};

struct FMultiplayerGetBuildResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString BuildId; // 0x8
	FString BuildName; // 0x18
	FString BuildStatus; // 0x28
	EContainerFlavor ContainerFlavor; // 0x38
	FString ContainerRunCommand; // 0x40
	FString CreationTime; // 0x50
	UPlayFabJsonObject* CustomGameContainerImage; // 0x60
	TArray<UPlayFabJsonObject*> GameAssetReferences; // 0x68
	TArray<UPlayFabJsonObject*> GameCertificateReferences; // 0x78
	UPlayFabJsonObject* InstrumentationConfiguration; // 0x88
	UPlayFabJsonObject* MetaData; // 0x90
	int32_t MultiplayerServerCountPerVm; // 0x98
	TArray<UPlayFabJsonObject*> Ports; // 0xa0
	TArray<UPlayFabJsonObject*> RegionConfigurations; // 0xb0
	FString StartMultiplayerServerCommand; // 0xc0
	EAzureVmSize VmSize; // 0xd0
};

struct FAnimNode_PoseSnapshot : FAnimNode_Base {
	FName SnapshotName; // 0x10
	FPoseSnapshot Snapshot; // 0x20
	ESnapshotSourceMode Mode; // 0x60
};

struct FGTutorialStepTextOverride {
	TArray<FGTutorialStepDynamicText> Texts; // 0x0
};

struct FServerGetTitleNewsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t Count; // 0x8
};

struct FServerGetCharacterLeaderboardRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CharacterType; // 0x8
	int32_t MaxResultsCount; // 0x18
	int32_t StartPosition; // 0x1c
	FString StatisticName; // 0x20
};

struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int32_t LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float Alpha; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8c
	FBoneReference BoneToModify; // 0xd0
	TArray<FConstraint> ConstraintSetup; // 0xe8
	TArray<float> ConstraintWeights; // 0xf8
};

struct FAkMidiProgramChange : FAkMidiEventBase {
	EAkMidiEventType Type; // 0x0
	char Chan; // 0x1
	char ProgramNum; // 0x2
};

struct FServerRevokeBansRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString BanIds; // 0x8
};

struct FGBotDeathReport {
	FVector LandingLocation; // 0x0
	float LandingTime; // 0xc
	FVector DeathLocation; // 0x10
	float DeathTime; // 0x1c
	AController* KillInstigator; // 0x20
	int32_t InventoryItemCount; // 0x28
	FString InventoryStateStr; // 0x30
};

struct FVertexInstanceID : FElementID {
	int32_t IDValue; // 0x0
};

struct FClientLoginWithPlayFabRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* InfoRequestParameters; // 0x8
	FString Password; // 0x10
	FString Username; // 0x20
};

struct FClientGetPlayFabIDsFromGameCenterIDsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FStructSerializerTestStruct {
	FStructSerializerNumericTestStruct Numerics; // 0x0
	FStructSerializerBooleanTestStruct Booleans; // 0x30
	FStructSerializerObjectTestStruct Objects; // 0x38
	FStructSerializerBuiltinTestStruct Builtins; // 0x48
	FStructSerializerArrayTestStruct Arrays; // 0xb0
	FStructSerializerMapTestStruct Maps; // 0xf0
};

struct FServerAddPlayerTagRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabId; // 0x8
	FString TagName; // 0x18
};

struct FRigHierarchy {
	TArray<FRigJoint> Joints; // 0x0
	TMap<FName, int32_t> NameToIndexMapping; // 0x10
};

struct FRigUnit_GetRelativeTransform : FRigUnit_BinaryTransformOp {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FTransform Argument0; // 0x30
	FTransform Argument1; // 0x60
	FTransform Result; // 0x90
};

struct FViewTargetTransitionParams {
	float BlendTime; // 0x0
	EViewTargetBlendFunction BlendFunction; // 0x4
	float BlendExp; // 0x8
	char bLockOutgoing : 1; // 0xc
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

struct FPerPlatformFloat {
	float Default; // 0x0
};

struct FServerMoveItemToCharacterFromUserRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
};

struct FNiagaraSystemCompileRequest {
	TArray<UObject*> RootObjects; // 0x8
};

struct FAdminResolvePurchaseDisputeRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString OrderId; // 0x8
	EResolutionOutcome Outcome; // 0x18
	FString PlayFabId; // 0x20
	FString Reason; // 0x30
};

struct FRigUnit_CreateHierarchy : FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FRigHierarchyRef NewHierarchy; // 0x28
	FRigHierarchyRef SourceHierarchy; // 0x40
	FName Root; // 0x58
};

struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct {
	FRotator Rotation; // 0x8
	FFrameNumber Time; // 0x14
};

struct FGHighlightParams {
	bool bHighlightLoot; // 0x0
	bool bHighlightCharacters; // 0x1
	float Range; // 0x4
};

struct FXJumpAnim {
	UAnimSequence* StartAnim; // 0x0
	UAnimSequence* ApexAnim; // 0x8
	UAnimSequence* FallingAnim; // 0x10
	UAnimSequence* LandingAnim; // 0x18
	FVector StartLocation; // 0x20
	FVector ApexLocation; // 0x2c
	FVector LandingLocation; // 0x38
	float StartAnimPosition; // 0x44
	float LandingAnimPosition; // 0x48
	bool bReachedApex; // 0x4c
};

struct FAIStimulus {
	float Age; // 0x0
	float ExpirationAge; // 0x4
	float Strength; // 0x8
	FVector StimulusLocation; // 0xc
	FVector ReceiverLocation; // 0x18
	FName Tag; // 0x24
	char bSuccessfullySensed : 1; // 0x40
};

struct FLiveLinkFrameRate : FFrameRate {
	int32_t Numerator; // 0x0
	int32_t Denominator; // 0x4
};

struct FGCosmeticTypeDataTableRow : FTableRowBase {
	UTexture2D* Background; // 0x8
	UTexture2D* Foreground; // 0x38
};

struct FAkChannelMask {
	int32_t ChannelMask; // 0x0
};

struct FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase {
	int32_t GroupIndex; // 0x10
	EAnimGroupRole GroupRole; // 0x14
	bool bIgnoreForRelevancyTest; // 0x15
	float BlendWeight; // 0x18
	float InternalTimeAccumulator; // 0x1c
	UAnimSequenceBase* Sequence; // 0x30
	float PlayRateBasis; // 0x38
	float PlayRate; // 0x3c
	FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x40
	float StartPosition; // 0x70
	bool bLoopAnimation; // 0x74
};

struct FSkeletalMeshSamplingRegionMaterialFilter {
	FName MaterialName; // 0x0
};

struct FClientMatchmakeResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString Expires; // 0x8
	FString LobbyId; // 0x18
	int32_t PollWaitTimeMS; // 0x28
	FString ServerIPV4Address; // 0x30
	FString ServerIPV6Address; // 0x40
	int32_t ServerPort; // 0x50
	FString ServerPublicDNSName; // 0x58
	EMatchmakeStatus Status; // 0x68
	FString Ticket; // 0x70
};

struct FGChapterReward {
	FPrimaryAssetId ID; // 0x0
	bool bRequiresChapterKey; // 0x18
};

struct FMultiplayerListMatchmakingTicketsForPlayerRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
	FString QueueName; // 0x10
};

struct FFloatRange {
	FFloatRangeBound LowerBound; // 0x0
	FFloatRangeBound UpperBound; // 0x8
};

struct FAnimNode_ApplyMeshSpaceAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x10
	FPoseLink Additive; // 0x20
	float Alpha; // 0x30
	FInputScaleBias AlphaScaleBias; // 0x34
	int32_t LODThreshold; // 0x3c
};

struct FGCachedPotionImpact {
	float CharHealth; // 0x0
	float CharArmor; // 0x4
	FGPotionImpact PotionImpact; // 0x8
};

struct FMovieSceneEditorData {
	TMap<FString, FMovieSceneExpansionState> ExpansionStates; // 0x0
	double ViewStart; // 0x50
	double ViewEnd; // 0x58
	double WorkStart; // 0x60
	double WorkEnd; // 0x68
	TSet<FFrameNumber> MarkedFrames; // 0x70
	FFloatRange WorkingRange; // 0xc0
	FFloatRange ViewRange; // 0xd0
};

struct FRigUnit_Distance_VectorVector : FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FVector Argument0; // 0x28
	FVector Argument1; // 0x34
	float Result; // 0x40
};

struct FAnimNotifyTrack {
	FName TrackName; // 0x0
	FLinearColor TrackColor; // 0xc
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

struct FPredictProjectilePathPointData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Time; // 0x18
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

struct FAnimNode_BlendListBase : FAnimNode_Base {
	TArray<FPoseLink> BlendPose; // 0x10
	TArray<float> BlendTime; // 0x20
	EAlphaBlendOption BlendType; // 0x30
	bool bResetChildOnActivation; // 0x31
	UCurveFloat* CustomBlendCurve; // 0x38
	UBlendProfile* BlendProfile; // 0x40
};

struct FClientGetTitleNewsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> News; // 0x8
};

struct FInt32Range {
	FInt32RangeBound LowerBound; // 0x0
	FInt32RangeBound UpperBound; // 0x8
};

struct FRichTextStyleRow : FTableRowBase {
	FTextBlockStyle TextStyle; // 0x8
};

struct FAdminRefundPurchaseResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString PurchaseStatus; // 0x8
};

struct FAdminIncrementPlayerStatisticVersionRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString StatisticName; // 0x8
};

struct FClientLinkWindowsHelloAccountResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerUpdatePlayerStatisticsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneFloatChannel Curves[0x4]; // 0x58
	EMovieSceneBlendType BlendType; // 0x2d8
};

struct FAdminAddUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t Amount; // 0x8
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FGTrackedAttributeChange {
	float Amount; // 0x0
	float Timestamp; // 0x4
};

struct FGEventTableData {
	TArray<UGEventRow*> Data; // 0x0
};

struct FBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; // 0x0
	char bExecuteWhenPaused : 1; // 0x0
	char bOverrideParentBinding : 1; // 0x0
	EInputEvent InputKeyEvent; // 0x4
	FName FunctionNameToBind; // 0x8
};

struct FAnimPhysPlanarLimit {
	FBoneReference DrivingBone; // 0x0
	FTransform PlaneTransform; // 0x20
};

struct FAdminGetPlayersInSegmentResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString ContinuationToken; // 0x8
	TArray<UPlayFabJsonObject*> PlayerProfiles; // 0x18
	int32_t ProfilesInSegment; // 0x28
};

struct FParticleSysParam {
	FName Name; // 0x0
	EParticleSysParamType ParamType; // 0xc
	float Scalar; // 0x10
	float Scalar_Low; // 0x14
	FVector Vector; // 0x18
	FVector Vector_Low; // 0x24
	FColor Color; // 0x30
	AActor* Actor; // 0x38
	UMaterialInterface* Material; // 0x40
};

struct FAkAudioEventTrackKey {
	float Time; // 0x0
	UAkAudioEvent* AkAudioEvent; // 0x8
	FString EventName; // 0x10
};

struct FNamedVector {
	FVector Value; // 0x0
	FName Name; // 0xc
};

struct FOrbitOptions {
	char bProcessDuringSpawn : 1; // 0x0
	char bProcessDuringUpdate : 1; // 0x0
	char bUseEmitterTime : 1; // 0x0
};

struct FNamedCurveValue {
	FName Name; // 0x0
	float Value; // 0xc
};

struct FClientCancelTradeRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString TradeId; // 0x8
};

struct FClientGetPublisherDataRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString KeyS; // 0x8
};

struct FSkeletonToMeshLinkup {
	TArray<int32_t> SkeletonToMeshTable; // 0x0
	TArray<int32_t> MeshToSkeletonTable; // 0x10
};

struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FRigUnit_ToSwingAndTwist : FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FQuat Input; // 0x30
	FVector TwistAxis; // 0x40
	FQuat Swing; // 0x50
	FQuat Twist; // 0x60
};

struct FExpressionOutput {
	FName OutputName; // 0x0
};

struct FAnimNode_PoseDriver : FAnimNode_PoseHandler {
	int32_t GroupIndex; // 0x10
	EAnimGroupRole GroupRole; // 0x14
	bool bIgnoreForRelevancyTest; // 0x15
	float BlendWeight; // 0x18
	float InternalTimeAccumulator; // 0x1c
	UPoseAsset* PoseAsset; // 0x30
	FPoseLink SourcePose; // 0x68
	TArray<FBoneReference> SourceBones; // 0x78
	TArray<FBoneReference> OnlyDriveBones; // 0x88
	TArray<FPoseDriverTarget> PoseTargets; // 0x98
	FBoneReference EvalSpaceBone; // 0xd8
	FRBFParams RBFParams; // 0xec
	EPoseDriverSource DriveSource; // 0xfc
	EPoseDriverOutput DriveOutput; // 0xfd
	char bOnlyDriveSelectedBones : 1; // 0xfe
};

struct FAutomationEvent {
	EAutomationEventType Type; // 0x0
	FString Message; // 0x8
	FString Context; // 0x18
	FGuid Artifact; // 0x28
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

struct FClientDeviceInfoRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Info; // 0x8
};

struct FXMaterialCrossfade {
	TArray<FName> ParameterNames; // 0x0
	bool bElementalDuration; // 0x10
	EXDurationSource DurationSource; // 0x11
	float Duration; // 0x14
	UMaterialInterface* TargetMaterial; // 0x18
};

struct FClientUnlinkCustomIDResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientGetContentDownloadUrlRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString HttpMethod; // 0x8
	FString Key; // 0x18
	bool ThruCDN; // 0x28
};

struct FBuildPromotionNewProjectSettings {
	FDirectoryPath NewProjectFolderOverride; // 0x0
	FString NewProjectNameOverride; // 0x10
};

struct FVectorRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FClientAcceptTradeRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString AcceptedInventoryInstanceIds; // 0x8
	FString OfferingPlayerId; // 0x18
	FString TradeId; // 0x28
};

struct FBox {
	FVector Min; // 0x0
	FVector Max; // 0xc
	char IsValid; // 0x18
};

struct FMovieSceneLiveLinkTemplateData {
	TArray<FMovieSceneFloatChannel> FloatChannels; // 0x0
	FLiveLinkFrameData TemplateToPush; // 0x10
	FLiveLinkRefSkeleton RefSkeleton; // 0xa0
	FName SubjectName; // 0xc0
	TArray<bool> ChannelMask; // 0xd0
};

struct FAkMidiGeneric : FAkMidiEventBase {
	EAkMidiEventType Type; // 0x0
	char Chan; // 0x1
	char Param1; // 0x2
	char Param2; // 0x3
};

struct FServerListUsersCharactersResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Characters; // 0x8
};

struct FServerUpdateUserDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	int32_t DataVersion; // 0x8
};

struct FMaterialProxySettings {
	FIntPoint TextureSize; // 0x0
	float GutterSpace; // 0x8
	float MetallicConstant; // 0xc
	float RoughnessConstant; // 0x10
	float SpecularConstant; // 0x14
	float OpacityConstant; // 0x18
	float OpacityMaskConstant; // 0x1c
	float AmbientOcclusionConstant; // 0x20
	ETextureSizingType TextureSizingType; // 0x24
	EMaterialMergeType MaterialMergeType; // 0x25
	EBlendMode BlendMode; // 0x26
	char bNormalMap : 1; // 0x27
	char bMetallicMap : 1; // 0x27
	char bRoughnessMap : 1; // 0x27
	char bSpecularMap : 1; // 0x27
	char bEmissiveMap : 1; // 0x27
	char bOpacityMap : 1; // 0x27
	char bOpacityMaskMap : 1; // 0x27
	char bAmbientOcclusionMap : 1; // 0x27
	FIntPoint DiffuseTextureSize; // 0x28
	FIntPoint NormalTextureSize; // 0x30
	FIntPoint MetallicTextureSize; // 0x38
	FIntPoint RoughnessTextureSize; // 0x40
	FIntPoint SpecularTextureSize; // 0x48
	FIntPoint EmissiveTextureSize; // 0x50
	FIntPoint OpacityTextureSize; // 0x58
	FIntPoint OpacityMaskTextureSize; // 0x60
	FIntPoint AmbientOcclusionTextureSize; // 0x68
};

struct FGAttributeChangeEffect : FGTriggeredActivationEffect {
	UXGameplayEffect* EffectClass; // 0x0
	float EffectScale; // 0x8
	float EffectDurationScale; // 0xc
	bool bApplyOnceOnly; // 0x10
	APawn* EffectInstigator; // 0x18
	TWeakObjectPtr<UObject> EffectSource; // 0x20
	FGameplayTag Attribute; // 0x28
	EGAttributeChangeType AttributeChangeType; // 0x34
	TArray<UXGameplayEffect*> CausersToIgnore; // 0x38
	EGAttributeChangeEffectScalingType ScalingType; // 0x48
};

struct FClientLinkFacebookAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString AccessToken; // 0x8
	bool ForceLink; // 0x18
};

struct FStaticMaterialLayersParameter {
	FMaterialParameterInfo ParameterInfo; // 0x0
	FMaterialLayersFunctions Value; // 0x18
	bool bOverride; // 0x58
	FGuid ExpressionGUID; // 0x5c
};

struct FUpdateLevelStreamingLevelStatus {
	FName PackageName; // 0x0
	int32_t LODIndex; // 0xc
	char bNewShouldBeLoaded : 1; // 0x10
	char bNewShouldBeVisible : 1; // 0x10
	char bNewShouldBlockOnLoad : 1; // 0x10
};

struct FAdminUpdateUserTitleDisplayNameResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString DisplayName; // 0x8
};

struct FMultiplayerGetQueueStatisticsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	int32_t NumberOfPlayersMatching; // 0x8
	UPlayFabJsonObject* TimeToMatchStatisticsInSeconds; // 0x10
};

struct FClientGetFriendsListResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Friends; // 0x8
};

struct FRigUnit_BinaryVectorOp : FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FVector Argument0; // 0x28
	FVector Argument1; // 0x34
	FVector Result; // 0x40
};

struct FRigUnit_Add_VectorVector : FRigUnit_BinaryVectorOp {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FVector Argument0; // 0x28
	FVector Argument1; // 0x34
	FVector Result; // 0x40
};

struct FTTVectorTrack : FTTPropertyTrack {
	FName TrackName; // 0x8
	bool bIsExternalCurve; // 0x14
	FName PropertyName; // 0x18
	UCurveVector* CurveVector; // 0x28
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

struct FXBotAggroEntry {
	TWeakObjectPtr<AActor> Actor; // 0x0
	float Value; // 0x8
	float TimeSinceLastSensed; // 0xc
};

struct FDataInitiateFileUploadsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
	FString FileNames; // 0x10
	int32_t ProfileVersion; // 0x20
};

struct FVehicleGearData {
	float Ratio; // 0x0
	float DownRatio; // 0x4
	float UpRatio; // 0x8
};

struct FMultiplayerRequestMultiplayerServerResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> ConnectedPlayers; // 0x8
	FString FQDN; // 0x18
	FString IPV4Address; // 0x28
	FString LastStateTransitionTime; // 0x38
	TArray<UPlayFabJsonObject*> Ports; // 0x48
	FString Region; // 0x58
	FString ServerId; // 0x68
	FString SessionId; // 0x78
	FString State; // 0x88
	FString VmId; // 0x98
};

struct FServerRevokeAllBansForUserResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FGRequirementItemCondition {
	AActor* ItemActorClass; // 0x0
	int32_t Amount; // 0x8
};

struct FAkMidiPitchBend : FAkMidiEventBase {
	EAkMidiEventType Type; // 0x0
	char Chan; // 0x1
	char ValueLsb; // 0x2
	char ValueMsb; // 0x3
	int32_t FullValue; // 0x4
};

struct FXInItemScaleRule {
	FGameplayTagContainer TagsToScale; // 0x0
	FGameplayTagContainer TagsToIgnore; // 0x20
	FGameplayTagContainer TagsToAdd; // 0x40
	float ScaleChance; // 0x60
	float PickupScale; // 0x64
};

struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int32_t LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float Alpha; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8c
	FBoneReference SourceBone; // 0xd0
	UCurveFloat* DrivingCurve; // 0xe8
	float Multiplier; // 0xf0
	float RangeMin; // 0xf4
	float RangeMax; // 0xf8
	float RemappedMin; // 0xfc
	float RemappedMax; // 0x100
	FName ParameterName; // 0x104
	FBoneReference TargetBone; // 0x110
	EDrivenDestinationMode DestinationMode; // 0x124
	EDrivenBoneModificationMode ModificationMode; // 0x125
	EComponentType SourceComponent; // 0x126
	char bUseRange : 1; // 0x127
	char bAffectTargetTranslationX : 1; // 0x127
	char bAffectTargetTranslationY : 1; // 0x127
	char bAffectTargetTranslationZ : 1; // 0x127
	char bAffectTargetRotationX : 1; // 0x127
	char bAffectTargetRotationY : 1; // 0x127
	char bAffectTargetRotationZ : 1; // 0x127
	char bAffectTargetScaleX : 1; // 0x127
	char bAffectTargetScaleY : 1; // 0x128
	char bAffectTargetScaleZ : 1; // 0x128
};

struct FPartyRepData : FOnlinePartyRepDataBase {
	FPartyPrivacySettings PrivacySettings; // 0x20
	TArray<FPartyPlatformSessionInfo> PlatformSessions; // 0x60
};

struct FXWeaponParticleHandData {
	FXWeaponParticleData LeftHandData; // 0x0
	FXWeaponParticleData RightHandData; // 0x40
	bool bSpawnForEachShot; // 0x80
};

struct FLandscapeInfoLayerSettings {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
	FName LayerName; // 0x8
};

struct FAnimParentNodeAssetOverride {
	UAnimationAsset* NewAsset; // 0x0
	FGuid ParentNodeGuid; // 0x8
};

struct FAdminCreateOpenIdConnectionRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString ClientId; // 0x8
	FString ClientSecret; // 0x18
	FString ConnectionId; // 0x28
	FString IssuerDiscoveryUrl; // 0x38
	UPlayFabJsonObject* IssuerInformation; // 0x48
};

struct FXColorCollectionDataTableRow : FTableRowBase {
	TArray<FLinearColor> Colors; // 0x8
};

struct FControlRigOperator {
	EControlRigOpCode OpCode; // 0x0
	FString PropertyPath1; // 0x8
	FString PropertyPath2; // 0x18
};

struct FEventTrackKey {
	float Time; // 0x0
	FName EventName; // 0x4
};

struct FClientSetPlayerSecretRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString EncryptedRequest; // 0x8
	FString PlayerSecret; // 0x18
};

struct FClientGetPhotonAuthenticationTokenResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString PhotonCustomAuthenticationToken; // 0x8
};

struct FAnimationTransitionRule {
	FName RuleToExecute; // 0x0
	bool TransitionReturnVal; // 0xc
	int32_t TransitionIndex; // 0x10
};

struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler {
	int32_t GroupIndex; // 0x10
	EAnimGroupRole GroupRole; // 0x14
	bool bIgnoreForRelevancyTest; // 0x15
	float BlendWeight; // 0x18
	float InternalTimeAccumulator; // 0x1c
	UPoseAsset* PoseAsset; // 0x30
	FPoseLink SourcePose; // 0x68
	EAlphaBlendOption BlendOption; // 0x78
	UCurveFloat* CustomCurve; // 0x80
};

struct FAnimNode_PoseByName : FAnimNode_PoseHandler {
	int32_t GroupIndex; // 0x10
	EAnimGroupRole GroupRole; // 0x14
	bool bIgnoreForRelevancyTest; // 0x15
	float BlendWeight; // 0x18
	float InternalTimeAccumulator; // 0x1c
	UPoseAsset* PoseAsset; // 0x30
	FName PoseName; // 0x68
	float PoseWeight; // 0x74
};

struct FXInstructionStateParams {
	UXUserWidget* WidgetClass; // 0x0
	FGameplayTag PriorityTag; // 0x8
	float AppearanceDelay; // 0x14
	float AppearanceDuration; // 0x18
	float ResurfaceDelay; // 0x1c
	bool bOnlyShowOnce; // 0x20
	bool bHideWhileItemFocused; // 0x21
};

struct FAIDataProviderTypedValue : FAIDataProviderValue {
	UProperty* CachedProperty; // 0x8
	UAIDataProvider* DataBinding; // 0x10
	FName DataField; // 0x18
	UProperty* PropertyType; // 0x28
};

struct FLandscapeWeightmapUsage {
	ULandscapeComponent* ChannelUsage[0x4]; // 0x0
};

struct FInt32RangeBound {
	ERangeBoundTypes Type; // 0x0
	int32_t Value; // 0x4
};

struct FServerRemoveFriendRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString FriendPlayFabId; // 0x8
	FString PlayFabId; // 0x18
};

struct FAdminUpdateStoreItemsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerRedeemMatchmakerTicketResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString Error; // 0x8
	bool TicketIsValid; // 0x18
	UPlayFabJsonObject* UserInfo; // 0x20
};

struct FNiagaraMatrix {
	FVector4 Row0; // 0x0
	FVector4 Row1; // 0x10
	FVector4 Row2; // 0x20
	FVector4 Row3; // 0x30
};

struct FRigidBodyState {
	FVector_NetQuantize100 Position; // 0x0
	FQuat Quaternion; // 0x10
	FVector_NetQuantize100 LinVel; // 0x20
	FVector_NetQuantize100 AngVel; // 0x2c
	char Flags; // 0x38
};

struct FServerSetPublisherDataRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Key; // 0x8
	FString Value; // 0x18
};

struct FRigUnit_ConvertEulerTransform : FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FEulerTransform Input; // 0x28
	FTransform Result; // 0x50
};

struct FAkSpatialAudioSettings {
	uint32_t SpatialAudioPoolSize; // 0x0
	uint32_t MaxSoundPropagationDepth; // 0x4
	uint32_t DiffractionFlags; // 0x8
	float MovementThreshold; // 0xc
};

struct FGSphereAppliedEffect {
	AActor* Target; // 0x0
	FXGameplayEffectHandle EffectHandle; // 0x8
	EGEffectStateRequirement Requirement; // 0x20
};

struct FNiagaraSpawnInfo {
	int32_t Count; // 0x0
	float InterpStartDt; // 0x4
	float IntervalDt; // 0x8
	int32_t SpawnGroup; // 0xc
};

struct FBoneSocketTarget {
	bool bUseSocket; // 0x0
	FBoneReference BoneReference; // 0x4
	FSocketReference SocketReference; // 0x20
};

struct FSoundSubmixSendInfo {
	float SendLevel; // 0x0
	USoundSubmix* SoundSubmix; // 0x8
};

struct FXDelayedGameplayEffect_Context : FXGameplayEffectContext {
	TArray<FXGameplayEffectHandle> TrackedEffects; // 0x8
	TArray<AActor*> TrackedActors; // 0x18
	bool bEverActivated; // 0x28
	FXGameplayEffectHandle AppliedHandle; // 0x30
	APawn* InstigatorForDelayedEffect; // 0x48
	UObject* SourceForDelayedEffect; // 0x50
};

struct FTimecode {
	int32_t Hours; // 0x0
	int32_t Minutes; // 0x4
	int32_t Seconds; // 0x8
	int32_t Frames; // 0xc
	bool bDropFrameFormat; // 0x10
};

struct FFoliageTypeObject {
	UObject* FoliageTypeObject; // 0x0
	UFoliageType_InstancedStaticMesh* TypeInstance; // 0x8
	bool bIsAsset; // 0x10
	UFoliageType_InstancedStaticMesh* Type; // 0x18
};

struct FTableRowStyle : FSlateWidgetStyle {
	FSlateBrush SelectorFocusedBrush; // 0x8
	FSlateBrush ActiveHoveredBrush; // 0x98
	FSlateBrush ActiveBrush; // 0x128
	FSlateBrush InactiveHoveredBrush; // 0x1b8
	FSlateBrush InactiveBrush; // 0x248
	FSlateBrush EvenRowBackgroundHoveredBrush; // 0x2d8
	FSlateBrush EvenRowBackgroundBrush; // 0x368
	FSlateBrush OddRowBackgroundHoveredBrush; // 0x3f8
	FSlateBrush OddRowBackgroundBrush; // 0x488
	FSlateColor TextColor; // 0x518
	FSlateColor SelectedTextColor; // 0x540
	FSlateBrush DropIndicator_Above; // 0x568
	FSlateBrush DropIndicator_Onto; // 0x5f8
	FSlateBrush DropIndicator_Below; // 0x688
};

struct FServerSetGameServerInstanceTagsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString LobbyId; // 0x8
	UPlayFabJsonObject* Tags; // 0x18
};

struct FBoolTrackKey {
	float Time; // 0x0
	char Value : 1; // 0x4
};

struct FCaptureResolution {
	int32_t ResX; // 0x0
	int32_t ResY; // 0x4
};

struct FStructRedirect {
	FName OldStructName; // 0x0
	FName NewStructName; // 0xc
};

struct FStructSerializerBooleanTestStruct {
	bool BoolFalse; // 0x0
	bool BoolTrue; // 0x1
	uint32_t Bitfield; // 0x4
};

struct FMovieSceneEventTriggerTemplate : FMovieSceneEventTemplateBase {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	TArray<FMovieSceneObjectBindingID> EventReceivers; // 0x20
	char bFireEventsWhenForwards : 1; // 0x30
	char bFireEventsWhenBackwards : 1; // 0x30
	TArray<FFrameNumber> EventTimes; // 0x38
	TArray<FName> EventFunctions; // 0x48
};

struct FServerGetCatalogItemsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
};

struct FAdaptorPolygon2Group {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
};

struct FTimelineFloatTrack {
	UCurveFloat* FloatCurve; // 0x0
	DelegateProperty InterpFunc; // 0x8
	FName TrackName; // 0x1c
	FName FloatPropertyName; // 0x28
	UFloatProperty* FloatProperty; // 0x38
};

struct FXCharacterHitFX {
	UXHitFX* HitFX; // 0x0
	float Timestamp; // 0x8
};

struct FControlRigBindingTemplate : FMovieSceneSpawnSectionTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieSceneBoolChannel Curve; // 0x20
};

struct FBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; // 0x0
	char bExecuteWhenPaused : 1; // 0x0
	char bOverrideParentBinding : 1; // 0x0
	FName InputActionName; // 0x4
	EInputEvent InputKeyEvent; // 0x10
	FName FunctionNameToBind; // 0x14
};

struct FClientRemoveContactEmailResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FGCharacterPerkDataTableRow : FXItemDataTableRow {
	FText DisplayName; // 0x8
	FText Description; // 0x20
	UTexture2D* IconTexture; // 0x38
	EXRarity Rarity; // 0x40
	TArray<FName> GameplayTags; // 0x48
	int32_t MaxStackSize; // 0x58
	bool bAutoPickup; // 0x5c
	bool bDestroyOnDrop; // 0x5d
	bool bDropOnUnequip; // 0x5e
	bool bAutoUnequip; // 0x5f
	int32_t Amount; // 0x60
	TArray<FGCharacterPerkDataTableLevel> Levels; // 0x68
	int32_t Cost; // 0x78
	FString RequirementClass; // 0x80
	int32_t RequirementRank; // 0x90
	TArray<FString> CooldownEffects; // 0x98
	TArray<FString> ActiveEffects; // 0xa8
	TArray<FName> TriggerEventTags; // 0xb8
	bool Available; // 0xc8
};

struct FAdminGetPolicyRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PolicyName; // 0x8
};

struct FGOutlineTargetEntry {
	AGCharacter* Target; // 0x0
	UWidgetComponent* Widget; // 0x8
	float TimeToRemove; // 0x10
};

struct FMultiplayerCreateRemoteUserRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString BuildId; // 0x8
	FString ExpirationTime; // 0x18
	FString Region; // 0x28
	FString Username; // 0x38
	FString VmId; // 0x48
};

struct FExposedValueHandler {
	FName BoundFunction; // 0x0
	TArray<FExposedValueCopyRecord> CopyRecords; // 0x10
	UFunction* Function; // 0x20
	UStructProperty* ValueHandlerNodeProperty; // 0x28
};

struct FGQuestDatum {
	FPrimaryAssetId ID; // 0x0
	FName Category; // 0x18
	int32_t CurrentStep; // 0x24
	int32_t MaxProgressValue; // 0x28
	int32_t PrevProgressValue; // 0x2c
	int32_t NextProgressValue; // 0x30
	bool bComplete; // 0x34
	bool bIsTracked; // 0x35
	FString DialogLineId; // 0x38
	bool bExpiresAtEndOfWeek; // 0x48
};

struct FLiveLinkWorldTime {
	double Time; // 0x0
	double Offset; // 0x8
};

struct FPropertyPathSegment {
	FName Name; // 0x0
	int32_t ArrayIndex; // 0xc
	UStruct* Struct; // 0x10
	UField* Field; // 0x18
};

struct FAdminUpdatePolicyResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString PolicyName; // 0x8
	TArray<UPlayFabJsonObject*> Statements; // 0x18
};

struct FServerExecuteCloudScriptResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	int32_t APIRequestsIssued; // 0x8
	UPlayFabJsonObject* Error; // 0x10
	int32_t ExecutionTimeSeconds; // 0x18
	FString FunctionName; // 0x20
	UPlayFabJsonObject* FunctionResult; // 0x30
	bool FunctionResultTooLarge; // 0x38
	int32_t HttpRequestsIssued; // 0x3c
	TArray<UPlayFabJsonObject*> Logs; // 0x40
	bool LogsTooLarge; // 0x50
	int32_t MemoryConsumedBytes; // 0x54
	int32_t ProcessorTimeSeconds; // 0x58
	int32_t Revision; // 0x5c
};

struct FGAccoladeCompleteInfo {
	FString AssetId; // 0x0
	int32_t Iteration; // 0x10
	float Timestamp; // 0x14
};

struct FComponentKey {
	UObject* OwnerClass; // 0x0
	FName SCSVariableName; // 0x8
	FGuid AssociatedGuid; // 0x14
};

struct FSkelMeshComponentLODInfo {
	TArray<bool> HiddenMaterials; // 0x0
};

struct FAdminDeleteTaskRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Identifier; // 0x8
};

struct FMatrix {
	FPlane XPlane; // 0x0
	FPlane YPlane; // 0x10
	FPlane ZPlane; // 0x20
	FPlane WPlane; // 0x30
};

struct FAnimNode_SplineIK : FAnimNode_SkeletalControlBase {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int32_t LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float Alpha; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8c
	FBoneReference StartBone; // 0xd0
	FBoneReference EndBone; // 0xe4
	ESplineBoneAxis BoneAxis; // 0xf8
	bool bAutoCalculateSpline; // 0xf9
	int32_t PointCount; // 0xfc
	TArray<FTransform> ControlPoints; // 0x100
	float Roll; // 0x110
	float TwistStart; // 0x114
	float TwistEnd; // 0x118
	FAlphaBlend TwistBlend; // 0x120
	float Stretch; // 0x150
	float Offset; // 0x154
};

struct FGBannerStyle {
	FSlateBrush BackgroundBrush; // 0x0
	FSlateBrush IconBrush; // 0x90
	FDataTableRowHandle TextColor; // 0x120
};

struct FGMeshParameterBackup {
	TWeakObjectPtr<UMaterialInstanceDynamic> Material; // 0x0
	float Value; // 0x8
};

struct FRestrictedConfigInfo {
	FString RestrictedConfigName; // 0x0
	TArray<FString> Owners; // 0x10
};

struct FXScriptedBotEncounterSpawn {
	TArray<AXScriptedBotSpawner*> ScriptedSpawners; // 0x0
	float DelayToNextSpawn; // 0x10
	bool bDestroyOnCompletion; // 0x14
	bool bSpawnAsAlly; // 0x15
};

struct FStaticTerrainLayerWeightParameter {
	FMaterialParameterInfo ParameterInfo; // 0x0
	bool bOverride; // 0x14
	FGuid ExpressionGUID; // 0x18
	int32_t WeightmapIndex; // 0x28
	bool bWeightBasedBlend; // 0x2c
};

struct FClientGetLeaderboardAroundPlayerResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int32_t Version; // 0x28
};

struct FXGameplayAppliedEffectContainer : FFastArraySerializer {
	UXGameplayEffectContainer* Owner; // 0xb0
	TArray<FXGameplayAppliedEffect> Items; // 0xb8
};

struct FRigUnit_ConvertQuaternionToVector : FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FQuat Input; // 0x30
	FVector Result; // 0x40
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

struct FAdminLookupUserAccountInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* UserInfo; // 0x8
};

struct FTransformFilter {
	FFilterOptionPerAxis TranslationFilter; // 0x0
	FFilterOptionPerAxis RotationFilter; // 0x3
	FFilterOptionPerAxis ScaleFilter; // 0x6
};

struct FTwistConstraint : FConstraintBaseParams {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float Restitution; // 0x8
	float ContactDistance; // 0xc
	char bSoftConstraint : 1; // 0x10
	float TwistLimitDegrees; // 0x14
	EAngularConstraintMotion TwistMotion; // 0x18
};

struct FDetectedFeature2D : FDetectedFeature {
	float Confidence; // 0x0
	FBox2D BoundingBox; // 0x4
};

struct FNamedSlotBinding {
	FName Name; // 0x0
	UWidget* Content; // 0x10
};

struct FNavGraphNode {
	UObject* Owner; // 0x0
};

struct FNavigationFilterArea {
	UNavArea* AreaClass; // 0x0
	float TravelCostOverride; // 0x8
	float EnteringCostOverride; // 0xc
	char bIsExcluded : 1; // 0x10
	char bOverrideTravelCost : 1; // 0x10
	char bOverrideEnteringCost : 1; // 0x10
};

struct FMeshElementAttributeData {
	FName AttributeName; // 0x0
	int32_t AttributeIndex; // 0xc
	FMeshElementAttributeValue AttributeValue; // 0x10
};

struct FClientLoginWithGoogleAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool CreateAccount; // 0x8
	FString EncryptedRequest; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x20
	FString PlayerSecret; // 0x28
	FString ServerAuthCode; // 0x38
};

struct FDatasmithAssetImportOptions {
	FName PackagePath; // 0x0
};

struct FDelegateRuntimeBinding {
	FString ObjectName; // 0x0
	FName PropertyName; // 0x10
	FName FunctionName; // 0x1c
	FDynamicPropertyPath SourcePath; // 0x28
	EBindingKind Kind; // 0x50
};

struct FSimulatedRootMotionReplicatedMove {
	float Time; // 0x0
	FRepRootMotionMontage RootMotion; // 0x8
};

struct FClientRestoreIOSPurchasesResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FClientLinkAndroidDeviceIDRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString AndroidDevice; // 0x8
	FString AndroidDeviceId; // 0x18
	bool ForceLink; // 0x28
	FString OS; // 0x30
};

struct FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x40
};

struct FNodeChain {
	TArray<FName> Nodes; // 0x0
};

struct FAdminGetDataReportRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t Day; // 0x8
	int32_t Month; // 0xc
	FString ReportName; // 0x10
	int32_t Year; // 0x20
};

struct FGQuestDataTableRow : FTableRowBase {
	FText Title; // 0x8
	FText Description; // 0x20
	FText LongDescription; // 0x38
	FName Category; // 0x50
	TArray<FGQuestStepJSON> Steps; // 0x60
	int32_t RequiredTally; // 0x70
	TArray<FPrimaryAssetId> Rewards; // 0x78
	TArray<EGQuestAllowedMode> AllowedModes; // 0x88
	FString DialogLineId; // 0x98
	FPrimaryAssetId NarrativeId; // 0xa8
	FPrimaryAssetId BriefingNarrativeId; // 0xc0
};

struct FSoundWaveSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
	float NormalizedMagnitude; // 0x8
};

struct FAdminSetPublisherDataRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Key; // 0x8
	FString Value; // 0x18
};

struct FServerLinkServerCustomIdRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool ForceLink; // 0x8
	FString PlayFabId; // 0x10
	FString ServerCustomId; // 0x20
};

struct FSimpleMemberReference {
	UObject* MemberParent; // 0x0
	FName MemberName; // 0x8
	FGuid MemberGuid; // 0x14
};

struct FRootMotionMovementParams {
	bool bHasRootMotion; // 0x0
	float BlendWeight; // 0x4
	FTransform RootMotionTransform; // 0x10
};

struct FInputActionKeyMapping {
	FName ActionName; // 0x0
	char bShift : 1; // 0xc
	char bCtrl : 1; // 0xc
	char bAlt : 1; // 0xc
	char bCmd : 1; // 0xc
	FKey Key; // 0x10
};

struct FServerEvaluateRandomResultTableResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString ResultItemId; // 0x8
};

struct FInAppPurchaseProductRequest {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FClientGrantCharacterToUserResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString CharacterId; // 0x8
	FString CharacterType; // 0x18
	bool Result; // 0x28
};

struct FAkXBoxOneApuHeapInitializationSettings {
	uint32_t CachedSize; // 0x0
	uint32_t NonCachedSize; // 0x4
};

struct FMultiplayerCancelAllMatchmakingTicketsForPlayerRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
	FString QueueName; // 0x10
};

struct FCanvasIcon {
	UTexture* Texture; // 0x0
	float U; // 0x8
	float V; // 0xc
	float UL; // 0x10
	float VL; // 0x14
};

struct FWheelSetup {
	UVehicleWheel* WheelClass; // 0x0
	FName BoneName; // 0x8
	FVector AdditionalOffset; // 0x14
	bool bDisableSteering; // 0x20
};

struct FGrassVariety {
	UStaticMesh* GrassMesh; // 0x0
	FPerPlatformFloat GrassDensity; // 0x8
	bool bUseGrid; // 0xc
	float PlacementJitter; // 0x10
	FPerPlatformInt StartCullDistance; // 0x14
	FPerPlatformInt EndCullDistance; // 0x18
	int32_t MinLOD; // 0x1c
	EGrassScaling Scaling; // 0x20
	FFloatInterval ScaleX; // 0x24
	FFloatInterval ScaleY; // 0x2c
	FFloatInterval ScaleZ; // 0x34
	bool RandomRotation; // 0x3c
	bool AlignToSurface; // 0x3d
	bool bUseLandscapeLightmap; // 0x3e
	FLightingChannels LightingChannels; // 0x3f
	bool bReceivesDecals; // 0x40
	bool bCastDynamicShadow; // 0x41
	bool bKeepInstanceBufferCPUCopy; // 0x42
};

struct FInAppPurchaseRestoreInfo {
	FString Identifier; // 0x0
	FString ReceiptData; // 0x10
	FString TransactionIdentifier; // 0x20
};

struct FGQuestStep {
	TArray<FGQuestTrigger> Triggers; // 0x0
};

struct FTestMovieSceneEvalTemplate : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
};

struct FAnimNode_LayeredBoneBlend : FAnimNode_Base {
	FPoseLink BasePose; // 0x10
	TArray<FPoseLink> BlendPoses; // 0x20
	TArray<FInputBlendPose> LayerSetup; // 0x30
	TArray<float> BlendWeights; // 0x40
	bool bMeshSpaceRotationBlend; // 0x50
	ECurveBlendOption CurveBlendOption; // 0x51
	bool bBlendRootMotionBasedOnRootBone; // 0x52
	int32_t LODThreshold; // 0x54
	TArray<FPerBoneBlendWeight> PerBoneBlendWeights; // 0x58
	FGuid SkeletonGuid; // 0x68
	FGuid VirtualBoneGuid; // 0x78
};

struct FForceFeedbackAttenuationSettings : FBaseAttenuationSettings {
	EAttenuationDistanceModel DistanceAlgorithm; // 0x8
	EAttenuationShape AttenuationShape; // 0x9
	float dBAttenuationAtMax; // 0xc
	FVector AttenuationShapeExtents; // 0x10
	float ConeOffset; // 0x1c
	float FalloffDistance; // 0x20
	FRuntimeFloatCurve CustomAttenuationCurve; // 0x28
};

struct FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMultiplayerGetRemoteLoginEndpointRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString BuildId; // 0x8
	FString Region; // 0x18
	FString VmId; // 0x28
};

struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString FacebookInstantGamesIds; // 0x8
};

struct FGModeFilter {
	TArray<FPrimaryAssetId> Filter; // 0x0
	EGFilterType FilterType; // 0x10
	TArray<EGGameVariantRule> VariantFilter; // 0x18
	bool bAllowNullVariant; // 0x28
	EGFilterType VariantFilterType; // 0x29
};

struct FXProjectileMovement {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FRotator Rotation; // 0x18
};

struct FVectorDistribution {
	FDistributionLookupTable Table; // 0x0
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

struct FAnimNode_CopyBoneDelta : FAnimNode_SkeletalControlBase {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int32_t LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float Alpha; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8c
	FBoneReference SourceBone; // 0xd0
	FBoneReference TargetBone; // 0xe4
	bool bCopyTranslation; // 0xf8
	bool bCopyRotation; // 0xf9
	bool bCopyScale; // 0xfa
	CopyBoneDeltaMode CopyMode; // 0xfb
	float TranslationMultiplier; // 0xfc
	float RotationMultiplier; // 0x100
	float ScaleMultiplier; // 0x104
};

struct FDataGetObjectsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
	bool EscapeObject; // 0x10
};

struct FAnimSlotInfo {
	FName SlotName; // 0x0
	TArray<float> ChannelWeights; // 0x10
};

struct FSpinBoxStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundBrush; // 0x8
	FSlateBrush HoveredBackgroundBrush; // 0x98
	FSlateBrush ActiveFillBrush; // 0x128
	FSlateBrush InactiveFillBrush; // 0x1b8
	FSlateBrush ArrowsImage; // 0x248
	FSlateColor ForegroundColor; // 0x2d8
	FMargin TextPadding; // 0x300
};

struct FSearchBoxStyle : FSlateWidgetStyle {
	FEditableTextBoxStyle TextBoxStyle; // 0x8
	FSlateFontInfo ActiveFontInfo; // 0x868
	FSlateBrush UpArrowImage; // 0x8c0
	FSlateBrush DownArrowImage; // 0x950
	FSlateBrush GlassImage; // 0x9e0
	FSlateBrush ClearImage; // 0xa70
	FMargin ImagePadding; // 0xb00
	bool bLeftAlignButtons; // 0xb10
};

struct FNamedEmitterMaterial {
	FName Name; // 0x0
	UMaterialInterface* Material; // 0x10
};

struct FAdminGetUserInventoryRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabId; // 0x8
};

struct FClientGetPlayerSegmentsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FClientGetPlayFabIDsFromGenericIDsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	TArray<UPlayFabJsonObject*> GenericIDs; // 0x8
};

struct FClientGetPlayerTagsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString PlayFabId; // 0x8
	FString Tags; // 0x18
};

struct FAdminUpdateOpenIdConnectionRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString ClientId; // 0x8
	FString ClientSecret; // 0x18
	FString ConnectionId; // 0x28
	FString IssuerDiscoveryUrl; // 0x38
	UPlayFabJsonObject* IssuerInformation; // 0x48
};

struct FTTPropertyTrack : FTTTrackBase {
	FName TrackName; // 0x8
	bool bIsExternalCurve; // 0x14
	FName PropertyName; // 0x18
};

struct FServerRemovePlayerTagResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerLoginWithXboxIdRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* InfoRequestParameters; // 0x10
	FString Sandbox; // 0x18
	FString XboxId; // 0x28
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
};

struct FGameplayTagSource {
	FName SourceName; // 0x0
	EGameplayTagSourceType SourceType; // 0xc
	UGameplayTagsList* SourceTagList; // 0x10
	URestrictedGameplayTagsList* SourceRestrictedTagList; // 0x18
};

struct FSessionServicePong {
	bool Authorized; // 0x0
	FString BuildDate; // 0x8
	FString DeviceName; // 0x18
	FGuid InstanceId; // 0x28
	FString InstanceName; // 0x38
	bool IsConsoleBuild; // 0x48
	FString PlatformName; // 0x50
	FGuid SessionId; // 0x60
	FString SessionName; // 0x70
	FString SessionOwner; // 0x80
	bool Standalone; // 0x90
};

struct FProfilesSetProfileLanguageResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	EOperationTypes OperationResult; // 0x8
	int32_t VersionNumber; // 0xc
};

struct FStaticMeshComponentLODInfo {
	TArray<FPaintedVertex> PaintedVertices; // 0x20
};

struct FAdminRevokeInventoryItemsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FAdminResetPasswordResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientGetWindowsHelloChallengeRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PublicKeyHint; // 0x8
};

struct FClientRemoveFriendRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString FriendPlayFabId; // 0x8
};

struct FNameCurve : FIndexedCurve {
	FKeyHandleMap KeyHandlesToIndices; // 0x8
	TArray<FNameCurveKey> KeyS; // 0x68
};

struct FGChapterDataTableRow : FTableRowBase {
	FText DisplayName; // 0x8
	FText Subtitle; // 0x20
	TArray<FPrimaryAssetId> ChapterKeys; // 0x38
	UCurveTable* ReputationLevelProgression; // 0x48
	TArray<FGChapterRewardLevel> ReputationRewards; // 0x50
	UTexture2D* ChapterIcon; // 0x60
	UDataTable* DialogTable; // 0x68
	FPrimaryAssetId StoryCompleteBriefingId; // 0x98
	FPrimaryAssetId StoryCompleteNarrativeId; // 0xb0
	TArray<FPrimaryAssetId> StoryQuestIds; // 0xc8
};

struct FXActionEventInfo {
	FGameplayTag Signal; // 0x0
	FName Event; // 0xc
	UXActionComponent* Owner; // 0x18
	AActor* Instigator; // 0x20
	float FastForwardTime; // 0x28
};

struct FAdminRevokeBansResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FServerWriteServerPlayerEventRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Body; // 0x8
	FString EventName; // 0x10
	FString PlayFabId; // 0x20
	FString Timestamp; // 0x30
};

struct FClientSetFriendTagsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
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
	int32_t DisableRootMotionCount; // 0x180
};

struct FMovieSceneSpawnSectionTemplate : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieSceneBoolChannel Curve; // 0x20
};

struct FSpriteCategoryInfo {
	FName Category; // 0x0
	FText DisplayName; // 0x10
	FText Description; // 0x28
};

struct FDataAbortFileUploadsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Entity; // 0x8
	int32_t ProfileVersion; // 0x10
};

struct FPrimitiveMaterialRef {
	UPrimitiveComponent* Primitive; // 0x0
	UDecalComponent* Decal; // 0x8
	int32_t ElementIndex; // 0x10
};

struct FLensImperfectionSettings {
	UTexture* DirtMask; // 0x0
	float DirtMaskIntensity; // 0x8
	FLinearColor DirtMaskTint; // 0xc
};

struct FAdminGetCloudScriptVersionsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FMultiplayerListContainerImageTagsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString Tags; // 0x8
};

struct FAdminGetTaskInstancesRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString StartedAtRangeFrom; // 0x8
	FString StartedAtRangeTo; // 0x18
	ETaskInstanceStatus StatusFilter; // 0x28
	UPlayFabJsonObject* TaskIdentifier; // 0x30
};

struct FClientGetFriendLeaderboardAroundPlayerRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool IncludeFacebookFriends; // 0x8
	bool IncludeSteamFriends; // 0x9
	int32_t MaxResultsCount; // 0xc
	FString PlayFabId; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x20
	FString StatisticName; // 0x28
	bool UseSpecificVersion; // 0x38
	int32_t Version; // 0x3c
	FString XboxToken; // 0x40
};

struct FServerUpdateCharacterDataRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CharacterId; // 0x8
	UPlayFabJsonObject* Data; // 0x18
	FString KeysToRemove; // 0x20
	EUserDataPermission Permission; // 0x30
	FString PlayFabId; // 0x38
};

struct FClientGetLeaderboardResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int32_t Version; // 0x28
};

struct FPerSkeletonAnimationSharingSetup {
	USkeleton* Skeleton; // 0x0
	USkeletalMesh* SkeletalMesh; // 0x30
	UAnimSharingTransitionInstance* BlendAnimBlueprint; // 0x60
	UAnimSharingAdditiveInstance* AdditiveAnimBlueprint; // 0x68
	UAnimationSharingStateProcessor* StateProcessorClass; // 0x70
	TArray<FAnimationStateEntry> AnimationStates; // 0x78
};

struct FAnimationActiveTransitionEntry {
	UBlendProfile* BlendProfile; // 0xb8
};

struct FSubdividedQuad {
	FSubdividedQuadVertex QuadVertex0; // 0x0
	FSubdividedQuadVertex QuadVertex1; // 0x34
	FSubdividedQuadVertex QuadVertex2; // 0x68
	FSubdividedQuadVertex QuadVertex3; // 0x9c
};

struct FXColorPaletteDataTableRow : FTableRowBase {
	FLinearColor Color; // 0x8
};

struct FTimelineVectorTrack {
	UCurveVector* VectorCurve; // 0x0
	DelegateProperty InterpFunc; // 0x8
	FName TrackName; // 0x1c
	FName VectorPropertyName; // 0x28
	UStructProperty* VectorProperty; // 0x38
};

struct FMovieSceneLevelVisibilitySectionTemplate : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	ELevelVisibility Visibility; // 0x20
	TArray<FName> LevelNames; // 0x28
};

struct FAkMidiCc : FAkMidiEventBase {
	EAkMidiEventType Type; // 0x0
	char Chan; // 0x1
	EAkMidiCcValues Cc; // 0x2
	char Value; // 0x3
};

struct FMovieSceneCameraCutSectionTemplate : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieSceneObjectBindingID CameraBindingID; // 0x20
	FTransform CutTransform; // 0x40
	bool bHasCutTransform; // 0x70
};

struct FDataTableCategoryHandle {
	UDataTable* DataTable; // 0x0
	FName ColumnName; // 0x8
	FName RowContents; // 0x14
};

struct FInputChord {
	FKey Key; // 0x0
	char bShift : 1; // 0x20
	char bCtrl : 1; // 0x20
	char bAlt : 1; // 0x20
	char bCmd : 1; // 0x20
};

struct FTagAndValue {
	FName Tag; // 0x0
	FString Value; // 0x10
};

struct FPlatformRuntimeAudioCompressionOverrides {
	bool bOverrideCompressionTimes; // 0x0
	float DurationThreshold; // 0x4
	int32_t MaxNumRandomBranches; // 0x8
	int32_t SoundCueQualityIndex; // 0xc
};

struct FStartPhysicsTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x40
};

struct FAdminGetPlayerSharedSecretsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FClientUnlinkTwitchAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
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

struct FAnimNotifyQueue {
	TArray<FAnimNotifyEventReference> AnimNotifies; // 0x10
	TMap<FName, FAnimNotifyArray> UnfilteredMontageAnimNotifies; // 0x20
};

struct FAdminGetDataReportResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString DownloadUrl; // 0x8
};

struct FAdminGetMatchmakerGameModesResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> GameModes; // 0x8
};

struct FClientExecuteCloudScriptResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	int32_t APIRequestsIssued; // 0x8
	UPlayFabJsonObject* Error; // 0x10
	int32_t ExecutionTimeSeconds; // 0x18
	FString FunctionName; // 0x20
	UPlayFabJsonObject* FunctionResult; // 0x30
	bool FunctionResultTooLarge; // 0x38
	int32_t HttpRequestsIssued; // 0x3c
	TArray<UPlayFabJsonObject*> Logs; // 0x40
	bool LogsTooLarge; // 0x50
	int32_t MemoryConsumedBytes; // 0x54
	int32_t ProcessorTimeSeconds; // 0x58
	int32_t Revision; // 0x5c
};

struct FClientGetTitleDataRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString KeyS; // 0x8
};

struct FServerMoveItemToCharacterFromCharacterRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString GivingCharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
	FString ReceivingCharacterId; // 0x38
};

struct FLobbyPlayerStateInfoArray : FFastArraySerializer {
	TArray<FLobbyPlayerStateActorInfo> Players; // 0xb0
	ALobbyBeaconState* ParentState; // 0xc0
};

struct FGTeleportAction_CustomState : FXActionCustomState {
	TArray<FXGameplayEffectHandle> AppliedEffects; // 0x8
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

struct FColorMaterialInput : FMaterialInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FServerRevokeAllBansForUserRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabId; // 0x8
};

struct FXSkinAudioRTPC {
	FName Name; // 0x0
	float Value; // 0xc
};

struct FFrameNumber {
	int32_t Value; // 0x0
};

struct FARSharedWorldReplicationState {
	int32_t PreviewImageOffset; // 0x0
	int32_t ARWorldOffset; // 0x4
};

struct FLightmassPointLightSettings : FLightmassLightSettings {
	float IndirectLightingSaturation; // 0x0
	float ShadowExponent; // 0x4
	bool bUseAreaShadowsForStationaryLight; // 0x8
};

struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString TitleId; // 0x8
	UPlayFabJsonObject* TitlePlayerAccounts; // 0x18
};

struct FServerUnlockContainerItemResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> GrantedItems; // 0x8
	FString UnlockedItemInstanceId; // 0x18
	FString UnlockedWithItemInstanceId; // 0x28
	UPlayFabJsonObject* VirtualCurrency; // 0x38
};

struct FServerDeleteCharacterFromUserRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CharacterId; // 0x8
	FString PlayFabId; // 0x18
	bool SaveCharacterInventory; // 0x28
};

struct FNiagaraFunctionSignature {
	FName Name; // 0x0
	TArray<FNiagaraVariable> Inputs; // 0x10
	TArray<FNiagaraVariable> Outputs; // 0x20
	FName OwnerName; // 0x30
	bool bRequiresContext; // 0x3c
	bool bMemberFunction; // 0x3d
};

struct FClientAttributeInstallResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMovieSceneSectionEvalOptions {
	bool bCanEditCompletionMode; // 0x0
	EMovieSceneCompletionMode CompletionMode; // 0x1
};

struct FEventsWriteEventsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	TArray<UPlayFabJsonObject*> Events; // 0x8
};

struct FExternalToolDefinition {
	FString ToolName; // 0x0
	FFilePath ExecutablePath; // 0x10
	FString CommandLineOptions; // 0x20
	FDirectoryPath WorkingDirectory; // 0x30
	FString ScriptExtension; // 0x40
	FDirectoryPath ScriptDirectory; // 0x50
};

struct FMovieSceneComponentTransformSectionTemplate : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieScene3DTransformTemplateData TemplateData; // 0x20
};

struct FGRumbleActionBarContextActionData {
	FText ActionText; // 0x0
	UTexture2D* ActionIcon; // 0x18
};

struct FGEventEffect {
	UXGameplayEffect* EffectClass; // 0x0
	float EffectScale; // 0x8
	float EffectDurationScale; // 0xc
	bool bApplyOnceOnly; // 0x10
	TWeakObjectPtr<UObject> EffectSource; // 0x14
};

struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
};

struct FAdminIncrementLimitedEditionItemAvailabilityRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t Amount; // 0x8
	FString CatalogVersion; // 0x10
	FString ItemId; // 0x20
};

struct FServerUpdateCharacterStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CharacterStatistics; // 0x18
	FString PlayFabId; // 0x20
};

struct FVertexAndAttributes {
	FVertexInstanceID VertexInstanceID; // 0x0
	FVertexID VertexID; // 0x4
	FMeshElementAttributeList PolygonVertexAttributes; // 0x8
};

struct FMovieSceneSegmentIdentifier {
	int32_t IdentifierIndex; // 0x0
};

struct FGWeaponItemDataTableRow : FXItemDataTableRow {
	FText DisplayName; // 0x8
	FText Description; // 0x20
	UTexture2D* IconTexture; // 0x38
	EXRarity Rarity; // 0x40
	TArray<FName> GameplayTags; // 0x48
	int32_t MaxStackSize; // 0x58
	bool bAutoPickup; // 0x5c
	bool bDestroyOnDrop; // 0x5d
	bool bDropOnUnequip; // 0x5e
	bool bAutoUnequip; // 0x5f
	int32_t Amount; // 0x60
	FText SpellDynamicTutorialText; // 0x68
	FText SpellDynamicTutorialText_Aiming; // 0x80
	FText SorceryDynamicTutorialText; // 0x98
	FText SorceryDynamicTutorialText_Aiming; // 0xb0
	UTexture2D* PrimaryAttackIcon; // 0xc8
	UTexture2D* PrimaryAttackHUDIcon; // 0xd0
	UTexture2D* SecondaryAttackHUDIcon; // 0xd8
	FText PrimaryAttackName; // 0xe0
	FText PrimaryAttackDescription; // 0xf8
	UTexture2D* SecondaryAttackIcon; // 0x110
	FText SecondaryAttackName; // 0x118
	FText SecondaryAttackDescription; // 0x130
	EXRarity SkinAdjustmentRarity; // 0x148
};

struct FXWeaponParticleData {
	UParticleSystem* ParticleSystem; // 0x0
	FVector ParticleScale; // 0x8
	EXWeaponParticleOriginType OriginType; // 0x14
	bool bAttach; // 0x15
	FName Socket; // 0x18
	FVector TranslationOffset; // 0x24
	FRotator RotationOffset; // 0x30
};

struct FNiagaraEventGeneratorProperties {
	int32_t MaxEventsPerFrame; // 0x0
	FName ID; // 0x4
	FNiagaraDataSetProperties SetProps; // 0x10
};

struct FRawAnimSequenceTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<FQuat> RotKeys; // 0x10
	TArray<FVector> ScaleKeys; // 0x20
};

struct FClientLinkGameCenterAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool ForceLink; // 0x8
	FString GameCenterId; // 0x10
	FString PublicKeyUrl; // 0x20
	FString Salt; // 0x30
	FString Signature; // 0x40
	FString Timestamp; // 0x50
};

struct FServerListUsersCharactersRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString PlayFabId; // 0x8
};

struct FGBotNamesDataTableRow : FTableRowBase {
	TArray<FString> DisplayNames; // 0x8
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
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x94
};

struct FNamedInterface {
	FName InterfaceName; // 0x0
	UObject* InterfaceObject; // 0x10
};

struct FXAimAssistPredictionInfo {
	float ProjectileSpeed; // 0x0
	float ProjectileGravityScale; // 0x4
	FVector2D MagnetismScale; // 0x8
	float BendingScale; // 0x10
};

struct FGPortalSpawnRingProfile {
	int32_t SpawnPointsInRing; // 0x0
	float RingRadius; // 0x4
	TArray<bool> OccupiedSpawnPoints; // 0x8
};

struct FClientGetTitlePublicKeyResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString RSAPublicKey; // 0x8
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

struct FCustomChannelSetup {
	ECollisionChannel Channel; // 0x0
	FName Name; // 0x4
	ECollisionResponse DefaultResponse; // 0x10
	bool bTraceType; // 0x11
	bool bStaticObject; // 0x12
};

struct FNiagaraVariableInfo {
	FNiagaraVariable Variable; // 0x0
	FText Definition; // 0x38
	UNiagaraDataInterface* DataInterface; // 0x50
};

struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FNiagaraVariable Parameter; // 0x20
	FMovieSceneBoolChannel BoolChannel; // 0x58
};

struct FClientUnlinkGoogleAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FServerMoveItemToCharacterFromCharacterResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerAddPlayerTagResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
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

struct FPlayFabLoginResultCommon : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x8
};

struct FGroupsListMembershipOpportunitiesResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Applications; // 0x8
	TArray<UPlayFabJsonObject*> Invitations; // 0x18
};

struct FTransform {
	FQuat Rotation; // 0x0
	FVector Translation; // 0x10
	FVector Scale3D; // 0x20
};

struct FGCosmeticBadgeDataTableRow : FGCosmeticItemDataTableRow {
	FText DisplayName; // 0x8
	FText Description; // 0x20
	UTexture2D* IconTexture; // 0x38
	EXRarity Rarity; // 0x68
	FPrimaryAssetId UpgradesInto; // 0x6c
	FText UpgradeableSetDisplayName; // 0x88
	FText UpgradeableSetRequirementsDescription; // 0xa0
	UTexture2D* BadgeTexture; // 0xb8
};

struct FGroupsUpdateGroupRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString AdminRoleId; // 0x8
	int32_t ExpectedProfileVersion; // 0x18
	UPlayFabJsonObject* Group; // 0x20
	FString GroupName; // 0x28
	FString MemberRoleId; // 0x38
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

struct FClientCurrentGamesRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString BuildVersion; // 0x8
	FString GameMode; // 0x18
	ERegion Region; // 0x28
	FString StatisticName; // 0x30
	UPlayFabJsonObject* TagFilter; // 0x40
};

struct FGLobbyPropertyDataTableRow : FTableRowBase {
	FText DisplayName; // 0x8
	UGGameModeProperty* WidgetClass; // 0x20
};

struct FClientRemoveGenericIDRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* GenericId; // 0x8
};

struct FXSharedActionTriggerSet {
	FGameplayTag Tag; // 0x0
	TArray<UXActionTrigger*> Triggers; // 0x10
};

struct FAITeamStimulusEvent {
	AActor* Broadcaster; // 0x28
	AActor* Enemy; // 0x30
};

struct FAIDamageEvent {
	float Amount; // 0x0
	FVector Location; // 0x4
	FVector HitLocation; // 0x10
	AActor* DamagedActor; // 0x20
	AActor* Instigator; // 0x28
};

struct FComboBoxStyle : FSlateWidgetStyle {
	FComboButtonStyle ComboButtonStyle; // 0x8
	FSlateSound PressedSlateSound; // 0x3e8
	FSlateSound SelectionChangeSlateSound; // 0x408
};

struct FNodeHierarchyWithUserData {
	FNodeHierarchyData Hierarchy; // 0x8
};

struct FInlineTextImageStyle : FSlateWidgetStyle {
	FSlateBrush Image; // 0x8
	int16_t Baseline; // 0x98
};

struct FEulerTransform {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FVector Scale; // 0x18
};

struct FServerRedeemMatchmakerTicketRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString LobbyId; // 0x8
	FString Ticket; // 0x18
};

struct FClientGetPlayFabIDsFromPSNAccountIDsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t IssuerId; // 0x8
	FString PSNAccountIDs; // 0x10
};

struct FMatchmakerUserInfoResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Inventory; // 0x8
	bool IsDeveloper; // 0x18
	FString PlayFabId; // 0x20
	FString SteamId; // 0x30
	FString TitleDisplayName; // 0x40
	FString Username; // 0x50
	UPlayFabJsonObject* VirtualCurrency; // 0x60
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x68
};

struct FSupportedAreaData {
	FString AreaClassName; // 0x0
	int32_t AreaID; // 0x10
	UObject* AreaClass; // 0x18
};

struct FFractureMaterial {
	FVector2D UVScale; // 0x0
	FVector2D UVOffset; // 0x8
	FVector Tangent; // 0x10
	float UAngle; // 0x1c
	int32_t InteriorElementIndex; // 0x20
};

struct FFilePath {
	FString FilePath; // 0x0
};

struct FGTraitChange {
	float ActualChange; // 0x0
	float PreviousValue; // 0x4
	int32_t Trait; // 0x8
	char HitType; // 0xc
};

struct FRigUnit_Multiply_VectorVector : FRigUnit_BinaryVectorOp {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FVector Argument0; // 0x28
	FVector Argument1; // 0x34
	FVector Result; // 0x40
};

struct FAdminGetPlayerStatisticVersionsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> StatisticVersions; // 0x8
};

struct FClientLinkFacebookInstantGamesIdRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString FacebookInstantGamesSignature; // 0x8
	bool ForceLink; // 0x18
};

struct FServerLinkXboxAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool ForceLink; // 0x8
	FString PlayFabId; // 0x10
	FString XboxToken; // 0x20
};

struct FGQuestTriggerJSON {
	FName ListenTable; // 0x0
	FString Query; // 0x10
	TMap<FName, FString> Properties; // 0x20
	EGQuestQueryOperation Operation; // 0x70
};

struct FGTriggeredActivationEffect {
	UXGameplayEffect* EffectClass; // 0x0
	float EffectScale; // 0x8
	float EffectDurationScale; // 0xc
	bool bApplyOnceOnly; // 0x10
	APawn* EffectInstigator; // 0x18
	TWeakObjectPtr<UObject> EffectSource; // 0x20
};

struct FBranchingPointMarker {
	int32_t NotifyIndex; // 0x0
	float TriggerTime; // 0x4
	EAnimNotifyEventType NotifyEventType; // 0x8
};

struct FAdminGetPlayerStatisticDefinitionsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FServerGetPublisherDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Data; // 0x8
};

struct FGCategoryButtonStyleStateViewground {
	float Desaturation; // 0x0
	float Opacity; // 0x4
};

struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FEditableTextBoxStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundImageNormal; // 0x8
	FSlateBrush BackgroundImageHovered; // 0x98
	FSlateBrush BackgroundImageFocused; // 0x128
	FSlateBrush BackgroundImageReadOnly; // 0x1b8
	FMargin Padding; // 0x248
	FSlateFontInfo Font; // 0x258
	FSlateColor ForegroundColor; // 0x2b0
	FSlateColor BackgroundColor; // 0x2d8
	FSlateColor ReadOnlyForegroundColor; // 0x300
	FMargin HScrollBarPadding; // 0x328
	FMargin VScrollBarPadding; // 0x338
	FScrollBarStyle ScrollBarStyle; // 0x348
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

struct FDistanceDatum {
	float FadeInDistanceStart; // 0x0
	float FadeInDistanceEnd; // 0x4
	float FadeOutDistanceStart; // 0x8
	float FadeOutDistanceEnd; // 0xc
	float Volume; // 0x10
};

struct FActorSequenceObjectReferenceMap {
	TArray<FGuid> BindingIds; // 0x0
	TArray<FActorSequenceObjectReferences> References; // 0x10
};

struct FClientConsumeXboxEntitlementsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FMultiplayerDeleteCertificateRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Name; // 0x8
};

struct FServerEvaluateRandomResultTableRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
	FString TableId; // 0x18
};

struct FClothParameterMask_PhysMesh {
	FName MaskName; // 0x0
	MaskTarget_PhysMesh CurrentTarget; // 0xc
	float MaxValue; // 0x10
	float MinValue; // 0x14
	TArray<float> Values; // 0x18
	bool bEnabled; // 0x28
};

struct FClientMatchmakeRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString BuildVersion; // 0x8
	FString CharacterId; // 0x18
	FString GameMode; // 0x28
	FString LobbyId; // 0x38
	ERegion Region; // 0x48
	bool StartNewIfNoneFound; // 0x49
	FString StatisticName; // 0x50
	UPlayFabJsonObject* TagFilter; // 0x60
};

struct FFrameMetrics {
	float TotalElapsedTime; // 0x0
	float FrameDelta; // 0x4
	int32_t FrameNumber; // 0x8
	int32_t NumDroppedFrames; // 0xc
};

struct FServerUnlinkPSNAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerGetPlayerTagsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Namespace; // 0x8
	FString PlayFabId; // 0x18
};

struct FClientValidateAmazonReceiptRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString CatalogVersion; // 0x8
	FString CurrencyCode; // 0x18
	int32_t PurchasePrice; // 0x28
	FString ReceiptId; // 0x30
	FString UserId; // 0x40
};

struct FSoundGroup {
	ESoundGroup SoundGroup; // 0x0
	FString DisplayName; // 0x8
	char bAlwaysDecompressOnLoad : 1; // 0x18
	float DecompressedDuration; // 0x1c
};

struct FRigUnit_Control : FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FEulerTransform Transform; // 0x28
	FTransform Base; // 0x50
	FTransform InitTransform; // 0x80
	FTransform Result; // 0xb0
	FTransformFilter Filter; // 0xe0
};

struct FMatchmakerUserInfoRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	int32_t MinCatalogVersion; // 0x8
	FString PlayFabId; // 0x10
};

struct FGeomSelection {
	int32_t Type; // 0x0
	int32_t Index; // 0x4
	int32_t SelectionIndex; // 0x8
};

struct FKTaperedCapsuleElem : FKShapeElem {
	float RestOffset; // 0x8
	FName Name; // 0xc
	char bContributeToMass : 1; // 0x1c
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius0; // 0x48
	float Radius1; // 0x4c
	float Length; // 0x50
};

struct FLiveLinkVirtualSubject {
	TArray<FName> Subjects; // 0x0
	FGuid Source; // 0x20
};

struct FPreviewMeshCollectionEntry {
	USkeletalMesh* SkeletalMesh; // 0x0
};

struct FDebugFloatHistory {
	TArray<float> Samples; // 0x0
	float MaxSamples; // 0x10
	float MinValue; // 0x14
	float MaxValue; // 0x18
	bool bAutoAdjustMinMax; // 0x1c
};

struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int32_t LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float Alpha; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8c
	FBoneReference IKBone; // 0xd0
	float StartStretchRatio; // 0xe4
	float MaxStretchScale; // 0xe8
	FVector EffectorLocation; // 0xec
	FBoneSocketTarget EffectorTarget; // 0x100
	FVector JointTargetLocation; // 0x170
	FBoneSocketTarget JointTarget; // 0x180
	FAxis TwistAxis; // 0x1f0
	EBoneControlSpace EffectorLocationSpace; // 0x200
	EBoneControlSpace JointTargetLocationSpace; // 0x201
	char bAllowStretching : 1; // 0x202
	char bTakeRotationFromEffectorSpace : 1; // 0x202
	char bMaintainEffectorRelRot : 1; // 0x202
	char bAllowTwist : 1; // 0x202
};

struct FServerSetPlayerSecretResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerSendEmailFromTemplateRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString EmailTemplateId; // 0x8
	FString PlayFabId; // 0x18
};

struct FGCooldownTransitionAnim {
	EGCooldownState OutState; // 0x0
	EGCooldownState InState; // 0x1
	UMaterialInterface* AnimMaterial; // 0x8
	TArray<FGCooldownTransitionAnimProps> AnimProps; // 0x10
};

struct FGProjectileCauserAttributeMod {
	FXAttributeMod Mod; // 0x0
	bool bScaledByEffectScale; // 0x8
};

struct FCompressedTrack {
	TArray<char> ByteStream; // 0x0
	TArray<float> Times; // 0x10
	float Mins[0x3]; // 0x20
	float Ranges[0x3]; // 0x2c
};

struct FAdminGetPlayerIdFromAuthTokenRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString Token; // 0x8
	EAuthTokenType TokenType; // 0x18
};

struct FClientUnlinkPSNAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FDetectedFeatureRegion : FDetectedFeature {
	float Confidence; // 0x0
	TArray<FVector2D> Points; // 0x8
};

struct FClientGetTradeStatusRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString OfferingPlayerId; // 0x8
	FString TradeId; // 0x18
};

struct FRigUnit_ConvertVectorToQuaternion : FRigUnit {
	FName RigUnitName; // 0x8
	FName RigUnitStructName; // 0x14
	EUnitExecutionType ExecutionType; // 0x20
	FVector Input; // 0x28
	FQuat Result; // 0x40
};

struct FComponentOverrideRecord {
	UObject* ComponentClass; // 0x0
	UActorComponent* ComponentTemplate; // 0x8
	FComponentKey ComponentKey; // 0x10
	FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x38
};

struct FMeshSectionInfoMap {
	TMap<uint32_t, FMeshSectionInfo> Map; // 0x0
};

struct FGTutorialMultiLootPickupEntry {
	AXUsableActor* LootClass; // 0x0
	FDataTableRowHandle InstructorRow; // 0x8
	AActor* LootMarker; // 0x20
	AActor* LootInstance; // 0x28
	FGameplayTag CalloutTag; // 0x30
};

struct FXElementalFXParam {
	FName ParameterName; // 0x0
	EXElementalFXParamType ParameterType; // 0xc
	float ScalarValue; // 0x10
	FVector VectorValue; // 0x14
	FLinearColor ColorValue; // 0x20
};

struct FClientLinkNintendoSwitchDeviceIdRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	bool ForceLink; // 0x8
	FString NintendoSwitchDeviceId; // 0x10
};

struct FAnimNode_CurveSource : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
	FName SourceBinding; // 0x20
	float Alpha; // 0x2c
	TScriptInterface<Class> CurveSource; // 0x30
};

struct FServerRevokeInventoryItemsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	TArray<UPlayFabJsonObject*> Errors; // 0x8
};

struct FFunctionCaller {
	FName FunctionName; // 0x0
};

struct FNavigationLinkBase {
	float LeftProjectHeight; // 0x0
	float MaxFallDownLength; // 0x4
	ENavLinkDirection Direction; // 0x8
	float SnapRadius; // 0x10
	float SnapHeight; // 0x14
	FNavAgentSelector SupportedAgents; // 0x18
	char bSupportsAgent0 : 1; // 0x1c
	char bSupportsAgent1 : 1; // 0x1c
	char bSupportsAgent2 : 1; // 0x1c
	char bSupportsAgent3 : 1; // 0x1c
	char bSupportsAgent4 : 1; // 0x1c
	char bSupportsAgent5 : 1; // 0x1c
	char bSupportsAgent6 : 1; // 0x1c
	char bSupportsAgent7 : 1; // 0x1c
	char bSupportsAgent8 : 1; // 0x1d
	char bSupportsAgent9 : 1; // 0x1d
	char bSupportsAgent10 : 1; // 0x1d
	char bSupportsAgent11 : 1; // 0x1d
	char bSupportsAgent12 : 1; // 0x1d
	char bSupportsAgent13 : 1; // 0x1d
	char bSupportsAgent14 : 1; // 0x1d
	char bSupportsAgent15 : 1; // 0x1d
	char bUseSnapHeight : 1; // 0x20
	char bSnapToCheapestArea : 1; // 0x20
	char bCustomFlag0 : 1; // 0x20
	char bCustomFlag1 : 1; // 0x20
	char bCustomFlag2 : 1; // 0x20
	char bCustomFlag3 : 1; // 0x20
	char bCustomFlag4 : 1; // 0x20
	char bCustomFlag5 : 1; // 0x20
	char bCustomFlag6 : 1; // 0x21
	char bCustomFlag7 : 1; // 0x21
	UNavAreaBase* AreaClass; // 0x28
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

struct FGKeyBinding {
	FName Name; // 0x0
	FKey PrimaryKey; // 0x10
	FKey AlternateKey; // 0x30
	float Scale; // 0x50
};

struct FPolygonID : FElementID {
	int32_t IDValue; // 0x0
};

struct FGCosmeticEmoteDataTableRow : FGCosmeticItemDataTableRow {
	FText DisplayName; // 0x8
	FText Description; // 0x20
	UTexture2D* IconTexture; // 0x38
	EXRarity Rarity; // 0x68
	FPrimaryAssetId UpgradesInto; // 0x6c
	FText UpgradeableSetDisplayName; // 0x88
	FText UpgradeableSetRequirementsDescription; // 0xa0
	UAnimMontage* EmoteMontage; // 0xb8
	UAnimMontage* EmoteMontageMaleOverride; // 0xe8
};

struct FXGameSignificanceManagerGroup {
	EXGameSignificanceTag Tag; // 0x0
	TArray<FXGameSignificanceManagerThreshold> Thresholds; // 0x8
	float NotRecentlyRenderedPenalty; // 0x18
};

struct FAdminGetCloudScriptTaskInstanceResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	UPlayFabJsonObject* Parameter; // 0x8
	UPlayFabJsonObject* Summary; // 0x10
};

struct FAdminGetPlayedTitleListResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString TitleIds; // 0x8
};

struct FInterpLookupPoint {
	FName GroupName; // 0x0
	float Time; // 0xc
};

struct FXInventoryItemState {
	UXItemComponent* ItemClass; // 0x0
};

struct FAdminRemoveServerBuildRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString BuildId; // 0x8
};

struct FReplicatedStaticActorDestructionInfo {
	UObject* ObjClass; // 0x20
};

struct FQosRegionInfo {
	FText DisplayName; // 0x0
	FString RegionId; // 0x18
	bool bEnabled; // 0x28
	bool bVisible; // 0x29
	bool bAutoAssignable; // 0x2a
};

struct FClientUpdatePlayerStatisticsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FLevelStreamingStatus {
	FName PackageName; // 0x0
	char bShouldBeLoaded : 1; // 0xc
	char bShouldBeVisible : 1; // 0xc
	uint32_t LODIndex; // 0x10
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

struct FClientLinkKongregateAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString AuthTicket; // 0x8
	bool ForceLink; // 0x18
	FString KongregateId; // 0x20
};

struct FMovieScene2DTransformSectionTemplate : FMovieScenePropertySectionTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneFloatChannel Translation[0x2]; // 0x58
	FMovieSceneFloatChannel Rotation; // 0x198
	FMovieSceneFloatChannel Scale[0x2]; // 0x238
	FMovieSceneFloatChannel Shear[0x2]; // 0x378
	EMovieSceneBlendType BlendType; // 0x4b8
	FMovieScene2DTransformMask Mask; // 0x4bc
};

struct FServerSavePushNotificationTemplateResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
	FString PushNotificationTemplateId; // 0x8
};

struct FActorTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x40
};

struct FCollectionScalarParameter : FCollectionParameterBase {
	FName ParameterName; // 0x0
	FGuid ID; // 0xc
	float DefaultValue; // 0x1c
};

struct FClientLoginWithPSNRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString AuthCode; // 0x8
	bool CreateAccount; // 0x18
	FString EncryptedRequest; // 0x20
	UPlayFabJsonObject* InfoRequestParameters; // 0x30
	int32_t IssuerId; // 0x38
	FString PlayerSecret; // 0x40
	FString RedirectUri; // 0x50
};

struct FST_SparseGridCellTile {
	FST_GridRef2D Start; // 0x0
	FST_GridRef2D End; // 0x8
};

struct FNiagaraVariableDataInterfaceBinding {
	FNiagaraVariable BoundVariable; // 0x0
};

struct FServerUpdateSharedGroupDataRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	UPlayFabJsonObject* Data; // 0x8
	FString KeysToRemove; // 0x10
	EUserDataPermission Permission; // 0x20
	FString SharedGroupId; // 0x28
};

struct FRichImageRow : FTableRowBase {
	FSlateBrush Brush; // 0x8
};

struct FDistributionLookupTable {
	char Op; // 0x0
	char EntryCount; // 0x1
	char EntryStride; // 0x2
	char SubEntryStride; // 0x3
	float TimeScale; // 0x4
	float TimeBias; // 0x8
	TArray<float> Values; // 0x10
	char LockFlag; // 0x20
};

struct FClientGetPlayerStatisticVersionsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
	FString StatisticName; // 0x8
};

struct FAnimTrack {
	TArray<FAnimSegment> AnimSegments; // 0x0
};

struct FXTrackedAssistTarget {
	TWeakObjectPtr<UXAimAssistTargetComponent> TargetComponent; // 0x0
	float Value; // 0x8
	float Weight; // 0xc
	bool bTrackingSecondary; // 0x10
	FVector PrimaryLeadLocation; // 0x14
	FVector SecondaryLeadLocation; // 0x20
	float StrengthScale; // 0x2c
	FVector2D MagnetismScale; // 0x30
};

struct FAppleImageUtilsImageConversionResult {
	FString Error; // 0x0
	TArray<char> ImageData; // 0x10
};

