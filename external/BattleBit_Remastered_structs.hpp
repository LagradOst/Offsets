#pragma once

struct RenderTextureDescriptor {
	int (width)k__BackingField; // 0x0
	int (height)k__BackingField; // 0x4
	int (msaaSamples)k__BackingField; // 0x8
	int (volumeDepth)k__BackingField; // 0xc
	int (mipCount)k__BackingField; // 0x10
	GraphicsFormat _graphicsFormat; // 0x14
	GraphicsFormat (stencilFormat)k__BackingField; // 0x18
	int _depthBufferBits; // 0x1c
	TextureDimension (dimension)k__BackingField; // 0x20
	ShadowSamplingMode (shadowSamplingMode)k__BackingField; // 0x24
	VRTextureUsage (vrUsage)k__BackingField; // 0x28
	RenderTextureCreationFlags _flags; // 0x2c
	RenderTextureMemoryless (memoryless)k__BackingField; // 0x30
};

struct RenderGraphLogIndent : IDisposable {
	int m_Indentation; // 0x0
	RenderGraphLogger m_Logger; // 0x8
	bool m_Disposed; // 0x10
};

struct DateTime : IComparable {
	ulong dateData; // 0x0
};

struct PlayerLoopSystemInternal {
	Type type; // 0x0
	PlayerLoopSystem.UpdateFunction updateDelegate; // 0x8
	IntPtr updateFunction; // 0x10
	IntPtr loopConditionFunction; // 0x18
	int numSubSystems; // 0x20
};

struct FilteringSettings : IEquatable(FilteringSettings) {
	RenderQueueRange m_RenderQueueRange; // 0x0
	int m_LayerMask; // 0x8
	uint m_RenderingLayerMask; // 0xc
	int m_ExcludeMotionVectorObjects; // 0x10
	SortingLayerRange m_SortingLayerRange; // 0x14
};

struct mBuildableInstance {
	string PrefabName; // 0x0
	Vector3 Position; // 0x8
	Quaternion Rotation; // 0x14
	float HP; // 0x24
};

struct PropertyName : IEquatable(PropertyName) {
	int id; // 0x0
};

struct RemoteStorageUpdatePublishedFileResult_t : ICallbackData {
	Result Result; // 0x0
	PublishedFileId PublishedFileId; // 0x8
	bool UserNeedsToAcceptWorkshopLegalAgreement; // 0x10
};

struct AllocatorManager.TableEntry {
	IntPtr function; // 0x0
	IntPtr state; // 0x8
};

struct ThpRagdollProfile.RagdollBonesTransformUpdateJob : IJobParallelForTransform {
	float LastReceivedStreamTime; // 0x0
	int StreamRate; // 0x4
	NativeArray(Vector3) TargetRotations; // 0x8
	Vector3 TargetPosition; // 0x18
};

struct GSStatsStored_t : ICallbackData {
	Result Result; // 0x0
	ulong SteamIDUser; // 0x4
};

struct HitResult {
	bool isHit; // 0x0
	Transform Object; // 0x8
	float Distance; // 0x10
	Vector3 Normal; // 0x14
	Vector3 Point; // 0x20
};

struct ExecutionContextSwitcher {
	ExecutionContext.Reader outerEC; // 0x0
	bool outerECBelongsToScope; // 0x8
	object hecsw; // 0x10
	Thread thread; // 0x18
};

struct TMP_WordInfo {
	TMP_Text textComponent; // 0x0
	int firstCharacterIndex; // 0x8
	int lastCharacterIndex; // 0xc
	int characterCount; // 0x10
};

struct SortingLayerRange : IEquatable(SortingLayerRange) {
	short m_LowerBound; // 0x0
	short m_UpperBound; // 0x2
};

struct ActivitySecrets {
	string Match; // 0x0
	string Join; // 0x8
	string Spectate; // 0x10
};

struct EndingMap {
	int Index; // 0x0
	Map Map; // 0x8
	GameMode GameMode; // 0x10
	bool isHardcore; // 0x11
	Size TargetSize; // 0x14
	int VoteDay; // 0x18
	int VoteNight; // 0x1c
};

struct TaskAwaiter : ICriticalNotifyCompletion {
	Task m_task; // 0x0
};

struct LeaderboardScoreUploaded_t : ICallbackData {
	byte Success; // 0x0
	ulong SteamLeaderboard; // 0x8
	int Score; // 0x10
	byte ScoreChanged; // 0x14
	int GlobalRankNew; // 0x18
	int GlobalRankPrevious; // 0x1c
};

struct Playable : IPlayable {
	PlayableHandle m_Handle; // 0x0
};

struct Number.NumberBuffer {
	byte* baseAddress; // 0x0
	char* digits; // 0x8
	int precision; // 0x10
	int scale; // 0x14
	bool sign; // 0x18
};

struct RemoveUGCDependencyResult_t : ICallbackData {
	Result Result; // 0x0
	PublishedFileId PublishedFileId; // 0x8
	PublishedFileId ChildPublishedFileId; // 0x10
};

struct SteamUGCDetails_t {
	PublishedFileId PublishedFileId; // 0x0
	Result Result; // 0x8
	WorkshopFileType FileType; // 0xc
	AppId CreatorAppID; // 0x10
	AppId ConsumerAppID; // 0x14
	byte[] Title; // 0x18
	byte[] Description; // 0x20
	ulong SteamIDOwner; // 0x28
	uint TimeCreated; // 0x30
	uint TimeUpdated; // 0x34
	uint TimeAddedToUserList; // 0x38
	RemoteStoragePublishedFileVisibility Visibility; // 0x3c
	bool Banned; // 0x40
	bool AcceptedForUse; // 0x41
	bool TagsTruncated; // 0x42
	byte[] Tags; // 0x48
	ulong File; // 0x50
	ulong PreviewFile; // 0x58
	byte[] PchFileName; // 0x60
	int FileSize; // 0x68
	int PreviewFileSize; // 0x6c
	byte[] URL; // 0x70
	uint VotesUp; // 0x78
	uint VotesDown; // 0x7c
	float Score; // 0x80
	uint NumChildren; // 0x84
};

struct PartySize {
	int CurrentSize; // 0x0
	int MaxSize; // 0x4
};

struct LeaderboardFindResult_t : ICallbackData {
	ulong SteamLeaderboard; // 0x0
	byte LeaderboardFound; // 0x8
};

struct LobbyMatchList_t : ICallbackData {
	uint LobbiesMatching; // 0x0
};

struct RenderTargetIdentifier : IEquatable(RenderTargetIdentifier) {
	BuiltinRenderTextureType m_Type; // 0x0
	int m_NameID; // 0x4
	int m_InstanceID; // 0x8
	IntPtr m_BufferPointer; // 0x10
	int m_MipLevel; // 0x18
	CubemapFace m_CubeFace; // 0x1c
	int m_DepthSlice; // 0x20
};

struct AllocatorManager.TableEntry65536 {
	AllocatorManager.TableEntry4096 f0; // 0x0
	AllocatorManager.TableEntry4096 f1; // 0x10000
	AllocatorManager.TableEntry4096 f2; // 0x20000
	AllocatorManager.TableEntry4096 f3; // 0x30000
	AllocatorManager.TableEntry4096 f4; // 0x40000
	AllocatorManager.TableEntry4096 f5; // 0x50000
	AllocatorManager.TableEntry4096 f6; // 0x60000
	AllocatorManager.TableEntry4096 f7; // 0x70000
	AllocatorManager.TableEntry4096 f8; // 0x80000
	AllocatorManager.TableEntry4096 f9; // 0x90000
	AllocatorManager.TableEntry4096 f10; // 0xa0000
	AllocatorManager.TableEntry4096 f11; // 0xb0000
	AllocatorManager.TableEntry4096 f12; // 0xc0000
	AllocatorManager.TableEntry4096 f13; // 0xd0000
	AllocatorManager.TableEntry4096 f14; // 0xe0000
	AllocatorManager.TableEntry4096 f15; // 0xf0000
};

struct StyleValue {
	StylePropertyID id; // 0x0
	StyleKeyword keyword; // 0x4
	float number; // 0x8
	Color color; // 0x8
	Length length; // 0x8
	GCHandle resource; // 0x8
};

struct BrickColliders.Order {
	Vector3 Position; // 0x0
	Quaternion Rotation; // 0xc
	Vector3 Scale; // 0x1c
	int ColorID; // 0x28
};

struct HTML_CloseBrowser_t : ICallbackData {
	uint UnBrowserHandle; // 0x0
};

struct AchievementManager.FFIMethods {
	AchievementManager.FFIMethods.SetUserAchievementMethod SetUserAchievement; // 0x0
	AchievementManager.FFIMethods.FetchUserAchievementsMethod FetchUserAchievements; // 0x8
	AchievementManager.FFIMethods.CountUserAchievementsMethod CountUserAchievements; // 0x10
	AchievementManager.FFIMethods.GetUserAchievementMethod GetUserAchievement; // 0x18
	AchievementManager.FFIMethods.GetUserAchievementAtMethod GetUserAchievementAt; // 0x20
};

struct HTML_BrowserRestarted_t : ICallbackData {
	uint UnBrowserHandle; // 0x0
	uint UnOldBrowserHandle; // 0x4
};

struct TransportState.Audio {
	float Volume; // 0x0
	float Pitch; // 0x4
};

struct GlobalAchievementPercentagesReady_t : ICallbackData {
	ulong GameID; // 0x0
	Result Result; // 0x8
};

struct SmallRect {
	short Left; // 0x0
	short Top; // 0x2
	short Right; // 0x4
	short Bottom; // 0x6
};

struct InputAnalogActionHandle_t : IEquatable(InputAnalogActionHandle_t) {
	ulong Value; // 0x0
};

struct TMP_Text.TextBackingContainer {
	uint[] m_Array; // 0x0
	int m_Count; // 0x8
};

struct MaterialReference {
	int index; // 0x0
	TMP_FontAsset fontAsset; // 0x8
	TMP_SpriteAsset spriteAsset; // 0x10
	Material material; // 0x18
	bool isDefaultMaterial; // 0x20
	bool isFallbackMaterial; // 0x21
	Material fallbackMaterial; // 0x28
	float padding; // 0x30
	int referenceCount; // 0x34
};

struct StencilState : IEquatable(StencilState) {
	byte m_Enabled; // 0x0
	byte m_ReadMask; // 0x1
	byte m_WriteMask; // 0x2
	byte m_Padding; // 0x3
	byte m_CompareFunctionFront; // 0x4
	byte m_PassOperationFront; // 0x5
	byte m_FailOperationFront; // 0x6
	byte m_ZFailOperationFront; // 0x7
	byte m_CompareFunctionBack; // 0x8
	byte m_PassOperationBack; // 0x9
	byte m_FailOperationBack; // 0xa
	byte m_ZFailOperationBack; // 0xb
};

struct HTML_FileOpenDialog_t : ICallbackData {
	uint UnBrowserHandle; // 0x0
	string PchTitle; // 0x8
	string PchInitialFile; // 0x10
};

struct SteamNetAuthenticationStatus_t : ICallbackData {
	SteamNetworkingAvailability Avail; // 0x0
	byte[] DebugMsg; // 0x8
};

struct PublishedFileId : IEquatable(PublishedFileId) {
	ulong Value; // 0x0
};

struct TextureDesc {
	TextureSizeMode sizeMode; // 0x0
	int width; // 0x4
	int height; // 0x8
	int slices; // 0xc
	Vector2 scale; // 0x10
	ScaleFunc func; // 0x18
	DepthBits depthBufferBits; // 0x20
	GraphicsFormat colorFormat; // 0x24
	FilterMode filterMode; // 0x28
	TextureWrapMode wrapMode; // 0x2c
	TextureDimension dimension; // 0x30
	bool enableRandomWrite; // 0x34
	bool useMipMap; // 0x35
	bool autoGenerateMips; // 0x36
	bool isShadowMap; // 0x37
	int anisoLevel; // 0x38
	float mipMapBias; // 0x3c
	bool enableMSAA; // 0x40
	MSAASamples msaaSamples; // 0x44
	bool bindTextureMS; // 0x48
	bool useDynamicScale; // 0x49
	RenderTextureMemoryless memoryless; // 0x4c
	string name; // 0x50
	bool clearBuffer; // 0x58
	Color clearColor; // 0x5c
};

struct HTML_ShowToolTip_t : ICallbackData {
	uint UnBrowserHandle; // 0x0
	string PchMsg; // 0x8
};

struct FontAssetCreationSettings {
	string sourceFontFileName; // 0x0
	string sourceFontFileGUID; // 0x8
	int pointSizeSamplingMode; // 0x10
	int pointSize; // 0x14
	int padding; // 0x18
	int packingMode; // 0x1c
	int atlasWidth; // 0x20
	int atlasHeight; // 0x24
	int characterSetSelectionMode; // 0x28
	string characterSequence; // 0x30
	string referencedFontAssetGUID; // 0x38
	string referencedTextAssetGUID; // 0x40
	int fontStyle; // 0x48
	float fontStyleModifier; // 0x4c
	int renderMode; // 0x50
	bool includeFontFeatures; // 0x54
};

struct RenderGraphResourceRegistry.RendererListResource {
	RendererListDesc desc; // 0x0
	RendererList rendererList; // 0xc0
};

struct TMP_Vertex {
	Vector3 position; // 0x0
	Vector2 uv; // 0xc
	Vector2 uv2; // 0x14
	Vector2 uv4; // 0x1c
	Color32 color; // 0x24
};

struct NetView.RpcBuffers.Method {
	Action Target; // 0x0
	RPCPermissions Permissions; // 0x8
};

struct SteamNetworkingUtils.DebugMessage {
	NetDebugOutput Type; // 0x0
	string Msg; // 0x8
};

struct TMP_DefaultControls.Resources {
	Sprite standard; // 0x0
	Sprite background; // 0x8
	Sprite inputField; // 0x10
	Sprite knob; // 0x18
	Sprite checkmark; // 0x20
	Sprite dropdown; // 0x28
	Sprite mask; // 0x30
};

struct AnimationScriptPlayable : IPlayable {
	PlayableHandle m_Handle; // 0x0
};

struct MeshId : IEquatable(MeshId) {
	ulong m_SubId1; // 0x0
	ulong m_SubId2; // 0x8
};

struct PositionAndQuaternationStruct {
	Vector3 Position; // 0x0
	Quaternion Rotation; // 0xc
};

struct AnimationLayerMixerPlayable : IPlayable {
	PlayableHandle m_Handle; // 0x0
};

struct jvalue {
	double d; // 0x0
	long j; // 0x0
	sbyte b; // 0x0
	bool z; // 0x0
	char c; // 0x0
	IntPtr l; // 0x0
	float f; // 0x0
	short s; // 0x0
	int i; // 0x0
};

struct Bounds : IEquatable(Bounds) {
	Vector3 m_Center; // 0x0
	Vector3 m_Extents; // 0xc
};

struct BitArray64 : IBitArray {
	ulong data; // 0x0
};

struct DiscreteTime : IComparable {
	long m_DiscreteTime; // 0x0
};

struct GameConnectedClanChatMsg_t : ICallbackData {
	ulong SteamIDClanChat; // 0x0
	ulong SteamIDUser; // 0x8
	int MessageID; // 0x10
};

struct AddAppDependencyResult_t : ICallbackData {
	Result Result; // 0x0
	PublishedFileId PublishedFileId; // 0x8
	AppId AppID; // 0x10
};

struct FixedListInt128 : IEnumerable(int) {
	ushort length; // 0x0
	FixedBytes126 buffer; // 0x2
};

struct NetworkManager.FFIEvents {
	NetworkManager.FFIEvents.MessageHandler OnMessage; // 0x0
	NetworkManager.FFIEvents.RouteUpdateHandler OnRouteUpdate; // 0x8
};

struct SafeGPtrArrayHandle : IDisposable {
	RuntimeGPtrArrayHandle handle; // 0x0
};

struct GamepadTextInputDismissed_t : ICallbackData {
	bool Submitted; // 0x0
	uint SubmittedText; // 0x4
};

struct TMP_LinkInfo {
	TMP_Text textComponent; // 0x0
	int hashCode; // 0x8
	int linkIdFirstCharacterIndex; // 0xc
	int linkIdLength; // 0x10
	int linkTextfirstCharacterIndex; // 0x14
	int linkTextLength; // 0x18
	char[] linkID; // 0x20
};

struct RaycastHit2D {
	Vector2 m_Centroid; // 0x0
	Vector2 m_Point; // 0x8
	Vector2 m_Normal; // 0x10
	float m_Distance; // 0x18
	float m_Fraction; // 0x1c
	int m_Collider; // 0x20
};

struct GameOverlayActivated_t : ICallbackData {
	byte Active; // 0x0
};

struct Extents {
	Vector2 min; // 0x0
	Vector2 max; // 0x8
};

struct AnimatorControllerPlayable : IPlayable {
	PlayableHandle m_Handle; // 0x0
};

struct RendererList {
	bool (isValid)k__BackingField; // 0x0
	CullingResults cullingResult; // 0x8
	DrawingSettings drawSettings; // 0x18
	FilteringSettings filteringSettings; // 0x150
	Nullable(RenderStateBlock) stateBlock; // 0x168
};

struct X509ChainStatus {
	X509ChainStatusFlags status; // 0x0
	string info; // 0x8
};

struct GameConnectedFriendChatMsg_t : ICallbackData {
	ulong SteamIDUser; // 0x0
	int MessageID; // 0x8
};

struct FriendGameInfo_t {
	GameId GameID; // 0x0
	uint GameIP; // 0x8
	ushort GamePort; // 0xc
	ushort QueryPort; // 0xe
	ulong SteamIDLobby; // 0x10
};

struct AddUGCDependencyResult_t : ICallbackData {
	Result Result; // 0x0
	PublishedFileId PublishedFileId; // 0x8
	PublishedFileId ChildPublishedFileId; // 0x10
};

struct DebugScreenCapture {
	NativeArray(byte) (rawImageDataReference)k__BackingField; // 0x0
	TextureFormat (imageFormat)k__BackingField; // 0x10
	int (width)k__BackingField; // 0x14
	int (height)k__BackingField; // 0x18
};

struct UInt64 : IComparable {
	ulong m_value; // 0x0
};

struct SteamAppUninstalled_t : ICallbackData {
	AppId AppID; // 0x0
};

struct ThrowableInstance {
	ThrowableManager.ActiveIndex Index; // 0x0
	NetworkClient Owner; // 0x8
	bool isExists; // 0x10
	bool isMine; // 0x11
	float NetworkDestroyTime; // 0x14
	ThrownObject PrefabComponent; // 0x18
	ToolItem ParentItem; // 0x20
	bool isLoaded; // 0x28
	Transform WorldObject; // 0x30
	Vector3 Position; // 0x38
	Quaternion Rotation; // 0x44
	Vector3 Velocity; // 0x54
	float LinearVelocity; // 0x60
	Vector3 NetworkPosition; // 0x64
	Quaternion NetworkRotation; // 0x70
	bool mShouldBeLoaded; // 0x80
};

struct Int64 : IComparable {
	long m_value; // 0x0
};

struct RenderGraphResource {
	int (handle)k__BackingField; // 0x0
	RenderGraphResourceType (type)k__BackingField; // 0x4
};

struct StyleFloat : IStyleValue(float) {
	StyleKeyword m_Keyword; // 0x0
	float m_Value; // 0x4
	int m_Specificity; // 0x8
};

struct MagazineManager.MagazineInstance {
	ushort Index; // 0x0
	bool isExists; // 0x2
	AWeapon ParentWeapon; // 0x8
	int MagazineIndex; // 0x10
	int Ammo; // 0x14
	float DestroyNetworkTime; // 0x18
	bool isLoaded; // 0x1c
	MagazineInstanceBehaviour WorldMagazineInstance; // 0x20
	Vector3 ServerPosition; // 0x28
	Quaternion ServerRotation; // 0x34
	Vector3 ClientPosition; // 0x44
	Quaternion ClientRotation; // 0x50
	Vector3 Client2Server; // 0x60
	float ClientLastStreamReceived; // 0x6c
	float DistanceToLocalPlayer; // 0x70
	bool ShouldBeLoaded; // 0x74
	bool ShouldBeDestroyed; // 0x75
};

struct GSClientApprove_t : ICallbackData {
	ulong SteamID; // 0x0
	ulong OwnerSteamID; // 0x8
};

struct BroadcastUploadStart_t : ICallbackData {
	bool IsRTMP; // 0x0
};

struct Boolean : IComparable {
	bool m_value; // 0x0
};

struct EventSource.EventMetadata {
	EventDescriptor Descriptor; // 0x0
	EventTags Tags; // 0x10
	bool EnabledForAnyListener; // 0x14
	bool EnabledForETW; // 0x15
	bool HasRelatedActivityID; // 0x16
	byte TriggersActivityTracking; // 0x17
	string Name; // 0x18
	string Message; // 0x20
	ParameterInfo[] Parameters; // 0x28
	TraceLoggingEventTypes TraceLoggingEventTypes; // 0x30
	EventActivityOptions ActivityOptions; // 0x38
};

struct StorageManager.FFIMethods {
	StorageManager.FFIMethods.ReadMethod Read; // 0x0
	StorageManager.FFIMethods.ReadAsyncMethod ReadAsync; // 0x8
	StorageManager.FFIMethods.ReadAsyncPartialMethod ReadAsyncPartial; // 0x10
	StorageManager.FFIMethods.WriteMethod Write; // 0x18
	StorageManager.FFIMethods.WriteAsyncMethod WriteAsync; // 0x20
	StorageManager.FFIMethods.DeleteMethod Delete; // 0x28
	StorageManager.FFIMethods.ExistsMethod Exists; // 0x30
	StorageManager.FFIMethods.CountMethod Count; // 0x38
	StorageManager.FFIMethods.StatMethod Stat; // 0x40
	StorageManager.FFIMethods.StatAtMethod StatAt; // 0x48
	StorageManager.FFIMethods.GetPathMethod GetPath; // 0x50
};

struct Plane {
	Vector3 m_Normal; // 0x0
	float m_Distance; // 0xc
};

struct MeshUtils.EdgePair {
	MeshUtils.Edge _e; // 0x0
	MeshUtils.Edge _eSym; // 0x8
};

struct Touch {
	int m_FingerId; // 0x0
	Vector2 m_Position; // 0x4
	Vector2 m_RawPosition; // 0xc
	Vector2 m_PositionDelta; // 0x14
	float m_TimeDelta; // 0x1c
	int m_TapCount; // 0x20
	TouchPhase m_Phase; // 0x24
	TouchType m_Type; // 0x28
	float m_Pressure; // 0x2c
	float m_maximumPossiblePressure; // 0x30
	float m_Radius; // 0x34
	float m_RadiusVariance; // 0x38
	float m_AltitudeAngle; // 0x3c
	float m_AzimuthAngle; // 0x40
};

struct TimeZoneInfo.SYSTEMTIME {
	ushort wYear; // 0x0
	ushort wMonth; // 0x2
	ushort wDayOfWeek; // 0x4
	ushort wDay; // 0x6
	ushort wHour; // 0x8
	ushort wMinute; // 0xa
	ushort wSecond; // 0xc
	ushort wMilliseconds; // 0xe
};

struct Timer : MarshalByRefObject {
	int TotalSeconds; // 0x0
};

struct RemoteStorageGetPublishedItemVoteDetailsResult_t : ICallbackData {
	Result Result; // 0x0
	PublishedFileId PublishedFileId; // 0x8
	int VotesFor; // 0x10
	int VotesAgainst; // 0x14
	int Reports; // 0x18
	float FScore; // 0x1c
};

struct TMP_FontStyleStack {
	byte bold; // 0x0
	byte italic; // 0x1
	byte underline; // 0x2
	byte strikethrough; // 0x3
	byte highlight; // 0x4
	byte superscript; // 0x5
	byte subscript; // 0x6
	byte uppercase; // 0x7
	byte lowercase; // 0x8
	byte smallcaps; // 0x9
};

struct EventDispatcher.DispatchContext {
	uint m_GateCount; // 0x0
	Queue(EventDispatcher.EventRecord) m_Queue; // 0x8
};

struct GameLobbyJoinRequested_t : ICallbackData {
	ulong SteamIDLobby; // 0x0
	ulong SteamIDFriend; // 0x8
};

struct FileStat {
	string Filename; // 0x0
	ulong Size; // 0x8
	ulong LastModified; // 0x10
};

struct Navigation : IEquatable(Navigation) {
	Navigation.Mode m_Mode; // 0x0
	Selectable m_SelectOnUp; // 0x8
	Selectable m_SelectOnDown; // 0x10
	Selectable m_SelectOnLeft; // 0x18
	Selectable m_SelectOnRight; // 0x20
};

struct AWarn {
	ulong Reporter; // 0x0
	ulong Reported; // 0x8
	string Comment; // 0x10
	DateTime WarnTime; // 0x18
};

struct LeaderboardUGCSet_t : ICallbackData {
	Result Result; // 0x0
	ulong SteamLeaderboard; // 0x8
};

struct AllocatorManager.AllocatorHandle {
	int Value; // 0x0
};

struct VisibleReflectionProbe : IEquatable(VisibleReflectionProbe) {
	Bounds m_Bounds; // 0x0
	Matrix4x4 m_LocalToWorldMatrix; // 0x18
	Vector4 m_HdrData; // 0x58
	Vector3 m_Center; // 0x68
	float m_BlendDistance; // 0x74
	int m_Importance; // 0x78
	int m_BoxProjection; // 0x7c
	int m_InstanceId; // 0x80
	int m_TextureId; // 0x84
};

struct AnimationMotionXToDeltaPlayable : IPlayable {
	PlayableHandle m_Handle; // 0x0
};

struct StyleSheetCache.SheetHandleKey {
	int sheetInstanceID; // 0x0
	int index; // 0x4
};

struct DurationControl {
	DurationControl_t _inner; // 0x0
};

struct LOD {
	float screenRelativeTransitionHeight; // 0x0
	float fadeTransitionWidth; // 0x4
	Renderer[] renderers; // 0x8
};

struct SteamRelayNetworkStatus_t : ICallbackData {
	SteamNetworkingAvailability Avail; // 0x0
	int PingMeasurementInProgress; // 0x4
	SteamNetworkingAvailability AvailNetworkConfig; // 0x8
	SteamNetworkingAvailability AvailAnyRelay; // 0xc
	byte[] DebugMsg; // 0x10
};

struct RemoteStorageDownloadUGCResult_t : ICallbackData {
	Result Result; // 0x0
	ulong File; // 0x8
	AppId AppID; // 0x10
	int SizeInBytes; // 0x14
	byte[] PchFileName; // 0x18
	ulong SteamIDOwner; // 0x20
};

struct RemoteStorageAppSyncedServer_t : ICallbackData {
	AppId AppID; // 0x0
	Result Result; // 0x4
	int NumUploads; // 0x8
};

struct ExecutionContext.Reader {
	ExecutionContext m_ec; // 0x0
};

struct PhraseRecognizedEventArgs {
	ConfidenceLevel confidence; // 0x0
	SemanticMeaning[] semanticMeanings; // 0x8
	string text; // 0x10
	DateTime phraseStartTime; // 0x18
	TimeSpan phraseDuration; // 0x20
};

struct MonoEventInfo {
	Type declaring_type; // 0x0
	Type reflected_type; // 0x8
	string name; // 0x10
	MethodInfo add_method; // 0x18
	MethodInfo remove_method; // 0x20
	MethodInfo raise_method; // 0x28
	EventAttributes attrs; // 0x30
	MethodInfo[] other_methods; // 0x38
};

struct ShadowData {
	bool supportsMainLightShadows; // 0x0
	bool requiresScreenSpaceShadowResolve; // 0x1
	int mainLightShadowmapWidth; // 0x4
	int mainLightShadowmapHeight; // 0x8
	int mainLightShadowCascadesCount; // 0xc
	Vector3 mainLightShadowCascadesSplit; // 0x10
	bool supportsAdditionalLightShadows; // 0x1c
	int additionalLightsShadowmapWidth; // 0x20
	int additionalLightsShadowmapHeight; // 0x24
	bool supportsSoftShadows; // 0x28
	int shadowmapDepthBufferBits; // 0x2c
	List(Vector4) bias; // 0x30
};

struct VisualEffectActivationBehaviour.EventState {
	ExposedProperty attribute; // 0x0
	VisualEffectActivationBehaviour.AttributeType type; // 0x8
	float[] values; // 0x10
};

struct CustomLODManager.playerLodOrder {
	PlayerLOD obj; // 0x0
	int target; // 0x8
};

struct GSGameplayStats_t : ICallbackData {
	Result Result; // 0x0
	int Rank; // 0x4
	uint TotalConnects; // 0x8
	uint TotalMinutesPlayed; // 0xc
};

struct RemoteStorageEnumerateUserSharedWorkshopFilesResult_t : ICallbackData {
	Result Result; // 0x0
	int ResultsReturned; // 0x4
	int TotalResultCount; // 0x8
	PublishedFileId[] GPublishedFileId; // 0x10
};

struct VFXHierarchyAttributeMapBinder.Bone {
	Transform source; // 0x0
	float sourceRadius; // 0x8
	Transform target; // 0x10
	float targetRadius; // 0x18
};

struct TransportBehaviour.Wheel {
	VehicleWheel Collider; // 0x0
	Transform Visual; // 0x8
};

struct PhysicsScene : IEquatable(PhysicsScene) {
	int m_Handle; // 0x0
};

struct GameId {
	ulong Value; // 0x0
};

struct ValidateAuthTicketResponse_t : ICallbackData {
	ulong SteamID; // 0x0
	AuthResponse AuthSessionResponse; // 0x8
	ulong OwnerSteamID; // 0xc
};

struct InternalEncodingDataItem {
	string webName; // 0x0
	ushort codePage; // 0x8
};

struct TimeSpan : IComparable {
	long _ticks; // 0x0
};

struct AnimationRemoveScalePlayable : IPlayable {
	PlayableHandle m_Handle; // 0x0
};

struct ActivityAssets {
	string LargeImage; // 0x0
	string LargeText; // 0x8
	string SmallImage; // 0x10
	string SmallText; // 0x18
};

struct EndGameResultCallback_t : ICallbackData {
	Result Result; // 0x0
	ulong UllUniqueGameID; // 0x8
};

struct Win32_IP_ADDR_STRING {
	IntPtr Next; // 0x0
	string IpAddress; // 0x8
	string IpMask; // 0x10
	uint Context; // 0x18
};

struct DateTimeToken {
	DateTimeParse.DTT dtt; // 0x0
	TokenType suffix; // 0x4
	int num; // 0x8
};

struct HTML_JSConfirm_t : ICallbackData {
	uint UnBrowserHandle; // 0x0
	string PchMessage; // 0x8
};

struct XPathNode {
	XPathNodeInfoAtom info; // 0x0
	ushort idxSibling; // 0x8
	ushort idxParent; // 0xa
	ushort idxSimilar; // 0xc
	ushort posOffset; // 0xe
	uint props; // 0x10
	string value; // 0x18
};

struct UInt32 : IComparable {
	uint m_value; // 0x0
};

struct LobbyTransaction.FFIMethods {
	LobbyTransaction.FFIMethods.SetTypeMethod SetType; // 0x0
	LobbyTransaction.FFIMethods.SetOwnerMethod SetOwner; // 0x8
	LobbyTransaction.FFIMethods.SetCapacityMethod SetCapacity; // 0x10
	LobbyTransaction.FFIMethods.SetMetadataMethod SetMetadata; // 0x18
	LobbyTransaction.FFIMethods.DeleteMetadataMethod DeleteMetadata; // 0x20
	LobbyTransaction.FFIMethods.SetLockedMethod SetLocked; // 0x28
};

struct TagAttribute {
	int startIndex; // 0x0
	int length; // 0x4
	int hashCode; // 0x8
};

struct AvailableRoles {
	bool LeaderAllowed; // 0x0
	bool AssaultAllowed; // 0x1
	bool MedicAllowed; // 0x2
	bool EngineerAllowed; // 0x3
	bool SupportAllowed; // 0x4
	bool ReconAllowed; // 0x5
};

struct TexturePacker_JsonArray.SpriteSize {
	float w; // 0x0
	float h; // 0x4
};

struct IntPtr : ISerializable {
	void* m_value; // 0x0
};

struct MonoMethodInfo {
	Type parent; // 0x0
	Type ret; // 0x8
	MethodAttributes attrs; // 0x10
	MethodImplAttributes iattrs; // 0x14
	CallingConventions callconv; // 0x18
};

struct SerializationEntry {
	Type m_type; // 0x0
	object m_value; // 0x8
	string m_name; // 0x10
};

struct DataCollector {
	byte* scratchEnd; // 0x0
	EventSource.EventData* datasEnd; // 0x8
	GCHandle* pinsEnd; // 0x10
	EventSource.EventData* datasStart; // 0x18
	byte* scratch; // 0x20
	EventSource.EventData* datas; // 0x28
	GCHandle* pins; // 0x30
	byte[] buffer; // 0x38
	int bufferPos; // 0x40
	int bufferNesting; // 0x44
	bool writingScalars; // 0x48
};

struct AnimatorStateInfo {
	int m_Name; // 0x0
	int m_Path; // 0x4
	int m_FullPath; // 0x8
	float m_NormalizedTime; // 0xc
	float m_Length; // 0x10
	float m_Speed; // 0x14
	float m_SpeedMultiplier; // 0x18
	int m_Tag; // 0x1c
	int m_Loop; // 0x20
};

struct HlslFloat4 {
	float x; // 0x0
	float y; // 0x4
	float z; // 0x8
	float w; // 0xc
};

struct FixedBytes126 {
	FixedBytes16 offset0000; // 0x0
	FixedBytes16 offset0016; // 0x10
	FixedBytes16 offset0032; // 0x20
	FixedBytes16 offset0048; // 0x30
	FixedBytes16 offset0064; // 0x40
	FixedBytes16 offset0080; // 0x50
	FixedBytes16 offset0096; // 0x60
	byte byte0112; // 0x70
	byte byte0113; // 0x71
	byte byte0114; // 0x72
	byte byte0115; // 0x73
	byte byte0116; // 0x74
	byte byte0117; // 0x75
	byte byte0118; // 0x76
	byte byte0119; // 0x77
	byte byte0120; // 0x78
	byte byte0121; // 0x79
	byte byte0122; // 0x7a
	byte byte0123; // 0x7b
	byte byte0124; // 0x7c
	byte byte0125; // 0x7d
};

struct DateTimeResult {
	int Year; // 0x0
	int Month; // 0x4
	int Day; // 0x8
	int Hour; // 0xc
	int Minute; // 0x10
	int Second; // 0x14
	double fraction; // 0x18
	int era; // 0x20
	ParseFlags flags; // 0x24
	TimeSpan timeZoneOffset; // 0x28
	Calendar calendar; // 0x30
	DateTime parsedDate; // 0x38
	ParseFailureKind failure; // 0x40
	string failureMessageID; // 0x48
	object failureMessageFormatArgument; // 0x50
	string failureArgumentName; // 0x58
};

struct Generic6DofConstraintFloatData {
	TypedConstraintFloatData TypedConstraintData; // 0x0
	TransformFloatData RigidBodyAFrame; // 0x40
	TransformFloatData RigidBodyBFrame; // 0x80
	Vector3FloatData LinearUpperLimit; // 0xc0
	Vector3FloatData LinearLowerLimit; // 0xd0
	Vector3FloatData AngularUpperLimit; // 0xe0
	Vector3FloatData AngularLowerLimit; // 0xf0
	int UseLinearReferenceFrameA; // 0x100
	int UseOffsetForConstraintFrame; // 0x104
};

struct ExplosionResult {
	ExplosionTriggerType TriggeredObjectType; // 0x0
	object Object; // 0x8
	float DamageMultiplier; // 0x10
	Vector3 hitPoint; // 0x14
};

struct __DTString {
	string Value; // 0x0
	int Index; // 0x8
	int len; // 0xc
	char m_current; // 0x10
	CompareInfo m_info; // 0x18
	bool m_checkDigitToken; // 0x20
};

struct AttachmentSettings.Variable {
	float Addition; // 0x0
	float Multiplier; // 0x4
};

struct RemoteStorageGetPublishedFileDetailsResult_t : ICallbackData {
	Result Result; // 0x0
	PublishedFileId PublishedFileId; // 0x8
	AppId CreatorAppID; // 0x10
	AppId ConsumerAppID; // 0x14
	byte[] Title; // 0x18
	byte[] Description; // 0x20
	ulong File; // 0x28
	ulong PreviewFile; // 0x30
	ulong SteamIDOwner; // 0x38
	uint TimeCreated; // 0x40
	uint TimeUpdated; // 0x44
	RemoteStoragePublishedFileVisibility Visibility; // 0x48
	bool Banned; // 0x4c
	byte[] Tags; // 0x50
	bool TagsTruncated; // 0x58
	byte[] PchFileName; // 0x60
	int FileSize; // 0x68
	int PreviewFileSize; // 0x6c
	byte[] URL; // 0x70
	WorkshopFileType FileType; // 0x78
	bool AcceptedForUse; // 0x7c
};

struct HTML_SearchResults_t : ICallbackData {
	uint UnBrowserHandle; // 0x0
	uint UnResults; // 0x4
	uint UnCurrentMatch; // 0x8
};

struct StartPlaytimeTrackingResult_t : ICallbackData {
	Result Result; // 0x0
};

struct VideoClipPlayable : IPlayable {
	PlayableHandle m_Handle; // 0x0
};

struct PlayerLoopSystem {
	Type type; // 0x0
	PlayerLoopSystem[] subSystemList; // 0x8
	PlayerLoopSystem.UpdateFunction updateDelegate; // 0x10
	IntPtr updateFunction; // 0x18
	IntPtr loopConditionFunction; // 0x20
};

struct GameConnectedChatJoin_t : ICallbackData {
	ulong SteamIDClanChat; // 0x0
	ulong SteamIDUser; // 0x8
};

struct AudioMixerPlayable : IPlayable {
	PlayableHandle m_Handle; // 0x0
};

struct Mesh_Extents {
	Vector2 min; // 0x0
	Vector2 max; // 0x8
};

struct LayerMask {
	int m_Mask; // 0x0
};

struct ResourceLocator {
	object _value; // 0x0
	int _dataPos; // 0x8
};

struct TriangleMeshShapeData {
	CollisionShapeFloatData CollisionShapeData; // 0x0
	StridingMeshInterfaceData MeshInterface; // 0x10
	IntPtr QuantizedFloatBvh; // 0x30
	IntPtr QuantizedDoubleBvh; // 0x38
	IntPtr TriangleInfoMap; // 0x40
	float CollisionMargin; // 0x48
	int Pad; // 0x4c
};

struct HTML_SetCursor_t : ICallbackData {
	uint UnBrowserHandle; // 0x0
	uint EMouseCursor; // 0x4
};

struct ComputeNewPlayerCompatibilityResult_t : ICallbackData {
	Result Result; // 0x0
	int CPlayersThatDontLikeCandidate; // 0x4
	int CPlayersThatCandidateDoesntLike; // 0x8
	int CClanPlayersThatDontLikeCandidate; // 0xc
	ulong SteamIDCandidate; // 0x10
};

struct ScriptPlayableOutput : IPlayableOutput {
	PlayableOutputHandle m_Handle; // 0x0
};

struct FileDetailsResult_t : ICallbackData {
	Result Result; // 0x0
	ulong FileSize; // 0x8
	byte[] FileSHA; // 0x10
	uint Flags; // 0x18
};

struct Scene {
	int m_Handle; // 0x0
};

struct SoundManager.m3DSoundQueue {
	AudioClip clip; // 0x0
	Vector3 position; // 0x8
	float volume; // 0x14
	float maxDistance; // 0x18
	float minDistance; // 0x1c
	float pitch; // 0x20
	AudioRolloffMode audioRolloff; // 0x24
	bool ConsiderSpeedofSound; // 0x28
};

struct PlayableGraph {
	IntPtr m_Handle; // 0x0
	uint m_Version; // 0x8
};

struct Vec3 {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct NetworkManager.FFIMethods {
	NetworkManager.FFIMethods.GetPeerIdMethod GetPeerId; // 0x0
	NetworkManager.FFIMethods.FlushMethod Flush; // 0x8
	NetworkManager.FFIMethods.OpenPeerMethod OpenPeer; // 0x10
	NetworkManager.FFIMethods.UpdatePeerMethod UpdatePeer; // 0x18
	NetworkManager.FFIMethods.ClosePeerMethod ClosePeer; // 0x20
	NetworkManager.FFIMethods.OpenChannelMethod OpenChannel; // 0x28
	NetworkManager.FFIMethods.CloseChannelMethod CloseChannel; // 0x30
	NetworkManager.FFIMethods.SendMessageMethod SendMessage; // 0x38
};

struct LobbyTransaction {
	IntPtr MethodsPtr; // 0x0
	object MethodsStructure; // 0x8
};

struct CollisionObjectFloatData {
	IntPtr BroadphaseHandle; // 0x0
	IntPtr CollisionShape; // 0x8
	IntPtr RootCollisionShape; // 0x10
	IntPtr Name; // 0x18
	TransformFloatData WorldTransform; // 0x20
	TransformFloatData InterpolationWorldTransform; // 0x60
	Vector3FloatData InterpolationLinearVelocity; // 0xa0
	Vector3FloatData InterpolationAngularVelocity; // 0xb0
	Vector3FloatData AnisotropicFriction; // 0xc0
	float ContactProcessingThreshold; // 0xd0
	float DeactivationTime; // 0xd4
	float Friction; // 0xd8
	float RollingFriction; // 0xdc
	float Restitution; // 0xe0
	float HitFraction; // 0xe4
	float CcdSweptSphereRadius; // 0xe8
	float CcdMotionThreshold; // 0xec
	int HasAnisotropicFriction; // 0xf0
	int CollisionFlags; // 0xf4
	int IslandTag1; // 0xf8
	int CompanionId; // 0xfc
	int ActivationState1; // 0x100
	int InternalType; // 0x104
	int CheckCollideWith; // 0x108
	int Padding; // 0x10c
};

struct ColorBlock : IEquatable(ColorBlock) {
	Color m_NormalColor; // 0x0
	Color m_HighlightedColor; // 0x10
	Color m_PressedColor; // 0x20
	Color m_SelectedColor; // 0x30
	Color m_DisabledColor; // 0x40
	float m_ColorMultiplier; // 0x50
	float m_FadeDuration; // 0x54
};

struct DrawingSettings : IEquatable(DrawingSettings) {
	SortingSettings m_SortingSettings; // 0x0
	DrawingSettings.(shaderPassNames)e__FixedBuffer shaderPassNames; // 0xe0
	PerObjectData m_PerObjectData; // 0x120
	DrawRendererFlags m_Flags; // 0x124
	int m_OverrideMaterialInstanceId; // 0x128
	int m_OverrideMaterialPassIndex; // 0x12c
	int m_MainLightIndex; // 0x130
	int m_UseSrpBatcher; // 0x134
};

struct FixedBytes62 {
	FixedBytes16 offset0000; // 0x0
	FixedBytes16 offset0016; // 0x10
	FixedBytes16 offset0032; // 0x20
	byte byte0048; // 0x30
	byte byte0049; // 0x31
	byte byte0050; // 0x32
	byte byte0051; // 0x33
	byte byte0052; // 0x34
	byte byte0053; // 0x35
	byte byte0054; // 0x36
	byte byte0055; // 0x37
	byte byte0056; // 0x38
	byte byte0057; // 0x39
	byte byte0058; // 0x3a
	byte byte0059; // 0x3b
	byte byte0060; // 0x3c
	byte byte0061; // 0x3d
};

struct EventInterests {
	bool (wantsMouseMove)k__BackingField; // 0x0
	bool (wantsMouseEnterLeaveWindow)k__BackingField; // 0x1
};

struct UserStatsReceived_t : ICallbackData {
	ulong GameID; // 0x0
	Result Result; // 0x8
	ulong SteamIDUser; // 0xc
};

struct SteamInventoryFullUpdate_t : ICallbackData {
	int Handle; // 0x0
};

struct HumanBone {
	string m_BoneName; // 0x0
	string m_HumanName; // 0x8
	HumanLimit limit; // 0x10
};

struct AsyncTaskMethodBuilder {
	AsyncTaskMethodBuilder(VoidTaskResult) m_builder; // 0x0
};

struct HTML_NeedsPaint_t : ICallbackData {
	uint UnBrowserHandle; // 0x0
	string PBGRA; // 0x8
	uint UnWide; // 0x10
	uint UnTall; // 0x14
	uint UnUpdateX; // 0x18
	uint UnUpdateY; // 0x1c
	uint UnUpdateWide; // 0x20
	uint UnUpdateTall; // 0x24
	uint UnScrollX; // 0x28
	uint UnScrollY; // 0x2c
	float FlPageScale; // 0x30
	uint UnPageSerial; // 0x34
};

struct CustomLODManager.vehicleLodOrder {
	VehicleLOD obj; // 0x0
	int target; // 0x8
};

struct XmlTextReaderImpl.ParsingState {
	char[] chars; // 0x0
	int charPos; // 0x8
	int charsUsed; // 0xc
	Encoding encoding; // 0x10
	bool appendMode; // 0x18
	Stream stream; // 0x20
	Decoder decoder; // 0x28
	byte[] bytes; // 0x30
	int bytePos; // 0x38
	int bytesUsed; // 0x3c
	TextReader textReader; // 0x40
	int lineNo; // 0x48
	int lineStartPos; // 0x4c
	string baseUriStr; // 0x50
	Uri baseUri; // 0x58
	bool isEof; // 0x60
	bool isStreamEof; // 0x61
	IDtdEntityInfo entity; // 0x68
	int entityId; // 0x70
	bool eolNormalized; // 0x74
	bool entityResolvedManually; // 0x75
};

struct LobbyChatMsg_t : ICallbackData {
	ulong SteamIDLobby; // 0x0
	ulong SteamIDUser; // 0x8
	byte ChatEntryType; // 0x10
	uint ChatID; // 0x14
};

struct XRDisplaySubsystem.XRRenderParameter {
	Matrix4x4 view; // 0x0
	Matrix4x4 projection; // 0x40
	Rect viewport; // 0x80
	Mesh occlusionMesh; // 0x90
	int textureArraySlice; // 0x98
};

struct DownloadItemResult_t : ICallbackData {
	AppId AppID; // 0x0
	PublishedFileId PublishedFileId; // 0x8
	Result Result; // 0x10
};

struct SoundManager.DelayedSound {
	float TimeToPlay; // 0x0
	Vector3 Position; // 0x4
	AudioClip Clip; // 0x10
	float Volume; // 0x18
	float MaxDistance; // 0x1c
	float MinDistance; // 0x20
	float Pitch; // 0x24
	AudioRolloffMode RollOffMode; // 0x28
};

struct CookieTokenizer.RecognizedAttribute {
	string m_name; // 0x0
	CookieToken m_token; // 0x8
};

struct WallBuilder.mArea {
	bool ignoreFlag; // 0x0
	bool widthSmallFlag; // 0x1
	float HorizontalStart; // 0x4
	float HorizontalLenght; // 0x8
	float VerticalStart; // 0xc
	float VerticalLenght; // 0x10
	float HorizontalEnd; // 0x14
	float VerticalEnd; // 0x18
};

struct CultureInfo.Data {
	int ansi; // 0x0
	int ebcdic; // 0x4
	int mac; // 0x8
	int oem; // 0xc
	bool right_to_left; // 0x10
	byte list_sep; // 0x11
};

struct SteamInventoryRequestPricesResult_t : ICallbackData {
	Result Result; // 0x0
	byte[] Currency; // 0x8
};

struct WallBuilder.mBoxColliderSettings {
	Vector3 Center; // 0x0
	Vector3 Size; // 0xc
};

struct ConfiguredTaskAwaitable {
	ConfiguredTaskAwaitable.ConfiguredTaskAwaiter m_configuredTaskAwaiter; // 0x0
};

struct WordWrapState {
	int previous_WordBreak; // 0x0
	int total_CharacterCount; // 0x4
	int visible_CharacterCount; // 0x8
	int visible_SpriteCount; // 0xc
	int visible_LinkCount; // 0x10
	int firstCharacterIndex; // 0x14
	int firstVisibleCharacterIndex; // 0x18
	int lastCharacterIndex; // 0x1c
	int lastVisibleCharIndex; // 0x20
	int lineNumber; // 0x24
	float maxCapHeight; // 0x28
	float maxAscender; // 0x2c
	float maxDescender; // 0x30
	float startOfLineAscender; // 0x34
	float maxLineAscender; // 0x38
	float maxLineDescender; // 0x3c
	float pageAscender; // 0x40
	HorizontalAlignmentOptions horizontalAlignment; // 0x44
	float marginLeft; // 0x48
	float marginRight; // 0x4c
	float xAdvance; // 0x50
	float preferredWidth; // 0x54
	float preferredHeight; // 0x58
	float previousLineScale; // 0x5c
	int wordCount; // 0x60
	FontStyles fontStyle; // 0x64
	int italicAngle; // 0x68
	float fontScaleMultiplier; // 0x6c
	float currentFontSize; // 0x70
	float baselineOffset; // 0x74
	float lineOffset; // 0x78
	bool isDrivenLineSpacing; // 0x7c
	float glyphHorizontalAdvanceAdjustment; // 0x80
	float cSpace; // 0x84
	float mSpace; // 0x88
	TMP_TextInfo textInfo; // 0x90
	TMP_LineInfo lineInfo; // 0x98
	Color32 vertexColor; // 0xf4
	Color32 underlineColor; // 0xf8
	Color32 strikethroughColor; // 0xfc
	Color32 highlightColor; // 0x100
	TMP_FontStyleStack basicStyleStack; // 0x104
	TMP_TextProcessingStack(int) italicAngleStack; // 0x110
	TMP_TextProcessingStack(Color32) colorStack; // 0x130
	TMP_TextProcessingStack(Color32) underlineColorStack; // 0x150
	TMP_TextProcessingStack(Color32) strikethroughColorStack; // 0x170
	TMP_TextProcessingStack(Color32) highlightColorStack; // 0x190
	TMP_TextProcessingStack(HighlightState) highlightStateStack; // 0x1b0
	TMP_TextProcessingStack(TMP_ColorGradient) colorGradientStack; // 0x1e0
	TMP_TextProcessingStack(float) sizeStack; // 0x208
	TMP_TextProcessingStack(float) indentStack; // 0x228
	TMP_TextProcessingStack(FontWeight) fontWeightStack; // 0x248
	TMP_TextProcessingStack(int) styleStack; // 0x268
	TMP_TextProcessingStack(float) baselineStack; // 0x288
	TMP_TextProcessingStack(int) actionStack; // 0x2a8
	TMP_TextProcessingStack(MaterialReference) materialReferenceStack; // 0x2c8
	TMP_TextProcessingStack(HorizontalAlignmentOptions) lineJustificationStack; // 0x320
	int spriteAnimationID; // 0x340
	TMP_FontAsset currentFontAsset; // 0x348
	TMP_SpriteAsset currentSpriteAsset; // 0x350
	Material currentMaterial; // 0x358
	int currentMaterialIndex; // 0x360
	Extents meshExtents; // 0x364
	bool tagNoParsing; // 0x374
	bool isNonBreakingSpace; // 0x375
};

struct StopPlaytimeTrackingResult_t : ICallbackData {
	Result Result; // 0x0
};

struct IPCFailure_t : ICallbackData {
	byte FailureType; // 0x0
};

struct Int16 : IComparable {
	short m_value; // 0x0
};

struct LobbyManager.FFIMethods {
	LobbyManager.FFIMethods.GetLobbyCreateTransactionMethod GetLobbyCreateTransaction; // 0x0
	LobbyManager.FFIMethods.GetLobbyUpdateTransactionMethod GetLobbyUpdateTransaction; // 0x8
	LobbyManager.FFIMethods.GetMemberUpdateTransactionMethod GetMemberUpdateTransaction; // 0x10
	LobbyManager.FFIMethods.CreateLobbyMethod CreateLobby; // 0x18
	LobbyManager.FFIMethods.UpdateLobbyMethod UpdateLobby; // 0x20
	LobbyManager.FFIMethods.DeleteLobbyMethod DeleteLobby; // 0x28
	LobbyManager.FFIMethods.ConnectLobbyMethod ConnectLobby; // 0x30
	LobbyManager.FFIMethods.ConnectLobbyWithActivitySecretMethod ConnectLobbyWithActivitySecret; // 0x38
	LobbyManager.FFIMethods.DisconnectLobbyMethod DisconnectLobby; // 0x40
	LobbyManager.FFIMethods.GetLobbyMethod GetLobby; // 0x48
	LobbyManager.FFIMethods.GetLobbyActivitySecretMethod GetLobbyActivitySecret; // 0x50
	LobbyManager.FFIMethods.GetLobbyMetadataValueMethod GetLobbyMetadataValue; // 0x58
	LobbyManager.FFIMethods.GetLobbyMetadataKeyMethod GetLobbyMetadataKey; // 0x60
	LobbyManager.FFIMethods.LobbyMetadataCountMethod LobbyMetadataCount; // 0x68
	LobbyManager.FFIMethods.MemberCountMethod MemberCount; // 0x70
	LobbyManager.FFIMethods.GetMemberUserIdMethod GetMemberUserId; // 0x78
	LobbyManager.FFIMethods.GetMemberUserMethod GetMemberUser; // 0x80
	LobbyManager.FFIMethods.GetMemberMetadataValueMethod GetMemberMetadataValue; // 0x88
	LobbyManager.FFIMethods.GetMemberMetadataKeyMethod GetMemberMetadataKey; // 0x90
	LobbyManager.FFIMethods.MemberMetadataCountMethod MemberMetadataCount; // 0x98
	LobbyManager.FFIMethods.UpdateMemberMethod UpdateMember; // 0xa0
	LobbyManager.FFIMethods.SendLobbyMessageMethod SendLobbyMessage; // 0xa8
	LobbyManager.FFIMethods.GetSearchQueryMethod GetSearchQuery; // 0xb0
	LobbyManager.FFIMethods.SearchMethod Search; // 0xb8
	LobbyManager.FFIMethods.LobbyCountMethod LobbyCount; // 0xc0
	LobbyManager.FFIMethods.GetLobbyIdMethod GetLobbyId; // 0xc8
	LobbyManager.FFIMethods.ConnectVoiceMethod ConnectVoice; // 0xd0
	LobbyManager.FFIMethods.DisconnectVoiceMethod DisconnectVoice; // 0xd8
	LobbyManager.FFIMethods.ConnectNetworkMethod ConnectNetwork; // 0xe0
	LobbyManager.FFIMethods.DisconnectNetworkMethod DisconnectNetwork; // 0xe8
	LobbyManager.FFIMethods.FlushNetworkMethod FlushNetwork; // 0xf0
	LobbyManager.FFIMethods.OpenNetworkChannelMethod OpenNetworkChannel; // 0xf8
	LobbyManager.FFIMethods.SendNetworkMessageMethod SendNetworkMessage; // 0x100
};

struct KerningPairKey {
	uint ascii_Left; // 0x0
	uint ascii_Right; // 0x4
	uint key; // 0x8
};

struct UIntPtr : ISerializable {
	void* _pointer; // 0x0
};

struct AsyncVoidMethodBuilder {
	SynchronizationContext m_synchronizationContext; // 0x0
	AsyncMethodBuilderCore m_coreState; // 0x8
	Task m_task; // 0x18
};

struct HTML_StatusText_t : ICallbackData {
	uint UnBrowserHandle; // 0x0
	string PchMsg; // 0x8
};

struct FriendsIsFollowing_t : ICallbackData {
	Result Result; // 0x0
	ulong SteamID; // 0x4
	bool IsFollowing; // 0xc
};

struct TMP_TextUtilities.LineSegment {
	Vector3 Point1; // 0x0
	Vector3 Point2; // 0xc
};

struct UnitySynchronizationContext.WorkRequest {
	SendOrPostCallback m_DelagateCallback; // 0x0
	object m_DelagateState; // 0x8
	ManualResetEvent m_WaitHandle; // 0x10
};

struct HlslFloat {
	float val; // 0x0
};

struct GImpactMeshShapeData {
	CollisionShapeFloatData CollisionShapeData; // 0x0
	StridingMeshInterfaceData MeshInterface; // 0x10
	Vector3FloatData LocalScaling; // 0x30
	float CollisionMargin; // 0x40
	int GImpactSubType; // 0x44
};

struct UnityTls.unitytls_x509_ref {
	ulong handle; // 0x0
};

struct ApplicationManager.FFIMethods {
	ApplicationManager.FFIMethods.ValidateOrExitMethod ValidateOrExit; // 0x0
	ApplicationManager.FFIMethods.GetCurrentLocaleMethod GetCurrentLocale; // 0x8
	ApplicationManager.FFIMethods.GetCurrentBranchMethod GetCurrentBranch; // 0x10
	ApplicationManager.FFIMethods.GetOAuth2TokenMethod GetOAuth2Token; // 0x18
	ApplicationManager.FFIMethods.GetTicketMethod GetTicket; // 0x20
};

struct GlyphMarshallingStruct {
	uint index; // 0x0
	GlyphMetrics metrics; // 0x4
	GlyphRect glyphRect; // 0x18
	float scale; // 0x28
	int atlasIndex; // 0x2c
};

struct MovedFromAttributeData {
	string className; // 0x0
	string nameSpace; // 0x8
	string assembly; // 0x10
	bool classHasChanged; // 0x18
	bool nameSpaceHasChanged; // 0x19
	bool assemblyHasChanged; // 0x1a
	bool autoUdpateAPI; // 0x1b
};

struct HTTPRequestDataReceived_t : ICallbackData {
	uint Request; // 0x0
	ulong ContextValue; // 0x8
	uint COffset; // 0x10
	uint CBytesReceived; // 0x14
};

struct InputDevice : IEquatable(InputDevice) {
	ulong m_DeviceId; // 0x0
	bool m_Initialized; // 0x8
};

struct RenderingData {
	CullingResults cullResults; // 0x0
	CameraData cameraData; // 0x10
	LightData lightData; // 0x160
	ShadowData shadowData; // 0x188
	PostProcessingData postProcessingData; // 0x1c0
	bool supportsDynamicBatching; // 0x1c8
	PerObjectData perObjectData; // 0x1cc
	bool killAlphaInFinalBlit; // 0x1d0
	bool postProcessingEnabled; // 0x1d1
};

struct HandleRef {
	object m_wrapper; // 0x0
	IntPtr m_handle; // 0x8
};

struct HTML_CanGoBackAndForward_t : ICallbackData {
	uint UnBrowserHandle; // 0x0
	bool BCanGoBack; // 0x4
	bool BCanGoForward; // 0x5
};

struct InputDigitalActionHandle_t : IEquatable(InputDigitalActionHandle_t) {
	ulong Value; // 0x0
};

struct UserStatsUnloaded_t : ICallbackData {
	ulong SteamIDUser; // 0x0
};

struct GeneratedShaderInfo {
	string (generatedIncludePath)k__BackingField; // 0x0
	string (additionalIncludePaths)k__BackingField; // 0x8
	string (noiseIncludeStr)k__BackingField; // 0x10
	string (variantName)k__BackingField; // 0x18
	string (outputDir)k__BackingField; // 0x20
	string (noiseStructName)k__BackingField; // 0x28
	string (noiseStructDef)k__BackingField; // 0x30
	string (fractalStructName)k__BackingField; // 0x38
	string (fractalStructDef)k__BackingField; // 0x40
	string (fractalParamStr)k__BackingField; // 0x48
	string (noiseParamStr)k__BackingField; // 0x50
	string (functionInputStr)k__BackingField; // 0x58
	string (functionParamStr)k__BackingField; // 0x60
	string (getDefaultInputsStr)k__BackingField; // 0x68
	string (getInputsStr)k__BackingField; // 0x70
	string (getNoiseInputStr)k__BackingField; // 0x78
	string (getFractalInputStr)k__BackingField; // 0x80
	string (getDefaultFractalInputStr)k__BackingField; // 0x88
	string (getDefaultNoiseInputStr)k__BackingField; // 0x90
	string (fractalPropertyDefStr)k__BackingField; // 0x98
	int (numFractalInputs)k__BackingField; // 0xa0
	int (numNoiseInputs)k__BackingField; // 0xa4
};

struct SteamServerConnectFailure_t : ICallbackData {
	Result Result; // 0x0
	bool StillRetrying; // 0x4
};

struct ScriptableRenderContext : IEquatable(ScriptableRenderContext) {
	IntPtr m_Ptr; // 0x0
};

struct APCBehaviour.Wheel {
	Transform VisualRight; // 0x0
	Transform VisualLeft; // 0x8
	VehicleWheel WheelRight; // 0x10
	VehicleWheel WheelLeft; // 0x18
	bool Steerable; // 0x20
};

struct LightBakingOutput {
	int probeOcclusionLightIndex; // 0x0
	int occlusionMaskChannel; // 0x4
	LightmapBakeType lightmapBakeType; // 0x8
	MixedLightingMode mixedLightingMode; // 0xc
	bool isBaked; // 0x10
};

struct DeleteItemResult_t : ICallbackData {
	Result Result; // 0x0
	PublishedFileId PublishedFileId; // 0x8
};

struct MusicPlayerWantsPlayingRepeatStatus_t : ICallbackData {
	int PlayingRepeatStatus; // 0x0
};

struct SubmitPlayerResultResultCallback_t : ICallbackData {
	Result Result; // 0x0
	ulong UllUniqueGameID; // 0x4
	ulong SteamIDPlayer; // 0xc
};

struct UnsafeNativeMethods.ManifestEtw.TRACE_ENABLE_INFO {
	int IsEnabled; // 0x0
	byte Level; // 0x4
	byte Reserved1; // 0x5
	ushort LoggerId; // 0x6
	int EnableProperty; // 0x8
	int Reserved2; // 0xc
	long MatchAnyKeyword; // 0x10
	long MatchAllKeyword; // 0x18
};

struct VoiceManager.FFIMethods {
	VoiceManager.FFIMethods.GetInputModeMethod GetInputMode; // 0x0
	VoiceManager.FFIMethods.SetInputModeMethod SetInputMode; // 0x8
	VoiceManager.FFIMethods.IsSelfMuteMethod IsSelfMute; // 0x10
	VoiceManager.FFIMethods.SetSelfMuteMethod SetSelfMute; // 0x18
	VoiceManager.FFIMethods.IsSelfDeafMethod IsSelfDeaf; // 0x20
	VoiceManager.FFIMethods.SetSelfDeafMethod SetSelfDeaf; // 0x28
	VoiceManager.FFIMethods.IsLocalMuteMethod IsLocalMute; // 0x30
	VoiceManager.FFIMethods.SetLocalMuteMethod SetLocalMute; // 0x38
	VoiceManager.FFIMethods.GetLocalVolumeMethod GetLocalVolume; // 0x40
	VoiceManager.FFIMethods.SetLocalVolumeMethod SetLocalVolume; // 0x48
};

struct CustomLODManager.distancebasedLodOrder {
	StaticDistanceBasedLOD obj; // 0x0
	int target; // 0x8
};

struct HingeConstraintFloatData {
	TypedConstraintFloatData TypedConstraintData; // 0x0
	TransformFloatData RigidBodyAFrame; // 0x40
	TransformFloatData RigidBodyBFrame; // 0x80
	int UseReferenceFrameA; // 0xc0
	int AngularOnly; // 0xc4
	int EnableAngularMotor; // 0xc8
	float MotorTargetVelocity; // 0xcc
	float MaxMotorImpulse; // 0xd0
	float LowerLimit; // 0xd4
	float UpperLimit; // 0xd8
	float LimitSoftness; // 0xdc
	float BiasFactor; // 0xe0
	float RelaxationFactor; // 0xe4
};

struct RaycastHit {
	Vector3 m_Point; // 0x0
	Vector3 m_Normal; // 0xc
	uint m_FaceID; // 0x18
	float m_Distance; // 0x1c
	Vector2 m_UV; // 0x20
	int m_Collider; // 0x28
};

struct FixedBytes4094 {
	FixedBytes16 offset0000; // 0x0
	FixedBytes16 offset0016; // 0x10
	FixedBytes16 offset0032; // 0x20
	FixedBytes16 offset0048; // 0x30
	FixedBytes16 offset0064; // 0x40
	FixedBytes16 offset0080; // 0x50
	FixedBytes16 offset0096; // 0x60
	FixedBytes16 offset0112; // 0x70
	FixedBytes16 offset0128; // 0x80
	FixedBytes16 offset0144; // 0x90
	FixedBytes16 offset0160; // 0xa0
	FixedBytes16 offset0176; // 0xb0
	FixedBytes16 offset0192; // 0xc0
	FixedBytes16 offset0208; // 0xd0
	FixedBytes16 offset0224; // 0xe0
	FixedBytes16 offset0240; // 0xf0
	FixedBytes16 offset0256; // 0x100
	FixedBytes16 offset0272; // 0x110
	FixedBytes16 offset0288; // 0x120
	FixedBytes16 offset0304; // 0x130
	FixedBytes16 offset0320; // 0x140
	FixedBytes16 offset0336; // 0x150
	FixedBytes16 offset0352; // 0x160
	FixedBytes16 offset0368; // 0x170
	FixedBytes16 offset0384; // 0x180
	FixedBytes16 offset0400; // 0x190
	FixedBytes16 offset0416; // 0x1a0
	FixedBytes16 offset0432; // 0x1b0
	FixedBytes16 offset0448; // 0x1c0
	FixedBytes16 offset0464; // 0x1d0
	FixedBytes16 offset0480; // 0x1e0
	FixedBytes16 offset0496; // 0x1f0
	FixedBytes16 offset0512; // 0x200
	FixedBytes16 offset0528; // 0x210
	FixedBytes16 offset0544; // 0x220
	FixedBytes16 offset0560; // 0x230
	FixedBytes16 offset0576; // 0x240
	FixedBytes16 offset0592; // 0x250
	FixedBytes16 offset0608; // 0x260
	FixedBytes16 offset0624; // 0x270
	FixedBytes16 offset0640; // 0x280
	FixedBytes16 offset0656; // 0x290
	FixedBytes16 offset0672; // 0x2a0
	FixedBytes16 offset0688; // 0x2b0
	FixedBytes16 offset0704; // 0x2c0
	FixedBytes16 offset0720; // 0x2d0
	FixedBytes16 offset0736; // 0x2e0
	FixedBytes16 offset0752; // 0x2f0
	FixedBytes16 offset0768; // 0x300
	FixedBytes16 offset0784; // 0x310
	FixedBytes16 offset0800; // 0x320
	FixedBytes16 offset0816; // 0x330
	FixedBytes16 offset0832; // 0x340
	FixedBytes16 offset0848; // 0x350
	FixedBytes16 offset0864; // 0x360
	FixedBytes16 offset0880; // 0x370
	FixedBytes16 offset0896; // 0x380
	FixedBytes16 offset0912; // 0x390
	FixedBytes16 offset0928; // 0x3a0
	FixedBytes16 offset0944; // 0x3b0
	FixedBytes16 offset0960; // 0x3c0
	FixedBytes16 offset0976; // 0x3d0
	FixedBytes16 offset0992; // 0x3e0
	FixedBytes16 offset1008; // 0x3f0
	FixedBytes16 offset1024; // 0x400
	FixedBytes16 offset1040; // 0x410
	FixedBytes16 offset1056; // 0x420
	FixedBytes16 offset1072; // 0x430
	FixedBytes16 offset1088; // 0x440
	FixedBytes16 offset1104; // 0x450
	FixedBytes16 offset1120; // 0x460
	FixedBytes16 offset1136; // 0x470
	FixedBytes16 offset1152; // 0x480
	FixedBytes16 offset1168; // 0x490
	FixedBytes16 offset1184; // 0x4a0
	FixedBytes16 offset1200; // 0x4b0
	FixedBytes16 offset1216; // 0x4c0
	FixedBytes16 offset1232; // 0x4d0
	FixedBytes16 offset1248; // 0x4e0
	FixedBytes16 offset1264; // 0x4f0
	FixedBytes16 offset1280; // 0x500
	FixedBytes16 offset1296; // 0x510
	FixedBytes16 offset1312; // 0x520
	FixedBytes16 offset1328; // 0x530
	FixedBytes16 offset1344; // 0x540
	FixedBytes16 offset1360; // 0x550
	FixedBytes16 offset1376; // 0x560
	FixedBytes16 offset1392; // 0x570
	FixedBytes16 offset1408; // 0x580
	FixedBytes16 offset1424; // 0x590
	FixedBytes16 offset1440; // 0x5a0
	FixedBytes16 offset1456; // 0x5b0
	FixedBytes16 offset1472; // 0x5c0
	FixedBytes16 offset1488; // 0x5d0
	FixedBytes16 offset1504; // 0x5e0
	FixedBytes16 offset1520; // 0x5f0
	FixedBytes16 offset1536; // 0x600
	FixedBytes16 offset1552; // 0x610
	FixedBytes16 offset1568; // 0x620
	FixedBytes16 offset1584; // 0x630
	FixedBytes16 offset1600; // 0x640
	FixedBytes16 offset1616; // 0x650
	FixedBytes16 offset1632; // 0x660
	FixedBytes16 offset1648; // 0x670
	FixedBytes16 offset1664; // 0x680
	FixedBytes16 offset1680; // 0x690
	FixedBytes16 offset1696; // 0x6a0
	FixedBytes16 offset1712; // 0x6b0
	FixedBytes16 offset1728; // 0x6c0
	FixedBytes16 offset1744; // 0x6d0
	FixedBytes16 offset1760; // 0x6e0
	FixedBytes16 offset1776; // 0x6f0
	FixedBytes16 offset1792; // 0x700
	FixedBytes16 offset1808; // 0x710
	FixedBytes16 offset1824; // 0x720
	FixedBytes16 offset1840; // 0x730
	FixedBytes16 offset1856; // 0x740
	FixedBytes16 offset1872; // 0x750
	FixedBytes16 offset1888; // 0x760
	FixedBytes16 offset1904; // 0x770
	FixedBytes16 offset1920; // 0x780
	FixedBytes16 offset1936; // 0x790
	FixedBytes16 offset1952; // 0x7a0
	FixedBytes16 offset1968; // 0x7b0
	FixedBytes16 offset1984; // 0x7c0
	FixedBytes16 offset2000; // 0x7d0
	FixedBytes16 offset2016; // 0x7e0
	FixedBytes16 offset2032; // 0x7f0
	FixedBytes16 offset2048; // 0x800
	FixedBytes16 offset2064; // 0x810
	FixedBytes16 offset2080; // 0x820
	FixedBytes16 offset2096; // 0x830
	FixedBytes16 offset2112; // 0x840
	FixedBytes16 offset2128; // 0x850
	FixedBytes16 offset2144; // 0x860
	FixedBytes16 offset2160; // 0x870
	FixedBytes16 offset2176; // 0x880
	FixedBytes16 offset2192; // 0x890
	FixedBytes16 offset2208; // 0x8a0
	FixedBytes16 offset2224; // 0x8b0
	FixedBytes16 offset2240; // 0x8c0
	FixedBytes16 offset2256; // 0x8d0
	FixedBytes16 offset2272; // 0x8e0
	FixedBytes16 offset2288; // 0x8f0
	FixedBytes16 offset2304; // 0x900
	FixedBytes16 offset2320; // 0x910
	FixedBytes16 offset2336; // 0x920
	FixedBytes16 offset2352; // 0x930
	FixedBytes16 offset2368; // 0x940
	FixedBytes16 offset2384; // 0x950
	FixedBytes16 offset2400; // 0x960
	FixedBytes16 offset2416; // 0x970
	FixedBytes16 offset2432; // 0x980
	FixedBytes16 offset2448; // 0x990
	FixedBytes16 offset2464; // 0x9a0
	FixedBytes16 offset2480; // 0x9b0
	FixedBytes16 offset2496; // 0x9c0
	FixedBytes16 offset2512; // 0x9d0
	FixedBytes16 offset2528; // 0x9e0
	FixedBytes16 offset2544; // 0x9f0
	FixedBytes16 offset2560; // 0xa00
	FixedBytes16 offset2576; // 0xa10
	FixedBytes16 offset2592; // 0xa20
	FixedBytes16 offset2608; // 0xa30
	FixedBytes16 offset2624; // 0xa40
	FixedBytes16 offset2640; // 0xa50
	FixedBytes16 offset2656; // 0xa60
	FixedBytes16 offset2672; // 0xa70
	FixedBytes16 offset2688; // 0xa80
	FixedBytes16 offset2704; // 0xa90
	FixedBytes16 offset2720; // 0xaa0
	FixedBytes16 offset2736; // 0xab0
	FixedBytes16 offset2752; // 0xac0
	FixedBytes16 offset2768; // 0xad0
	FixedBytes16 offset2784; // 0xae0
	FixedBytes16 offset2800; // 0xaf0
	FixedBytes16 offset2816; // 0xb00
	FixedBytes16 offset2832; // 0xb10
	FixedBytes16 offset2848; // 0xb20
	FixedBytes16 offset2864; // 0xb30
	FixedBytes16 offset2880; // 0xb40
	FixedBytes16 offset2896; // 0xb50
	FixedBytes16 offset2912; // 0xb60
	FixedBytes16 offset2928; // 0xb70
	FixedBytes16 offset2944; // 0xb80
	FixedBytes16 offset2960; // 0xb90
	FixedBytes16 offset2976; // 0xba0
	FixedBytes16 offset2992; // 0xbb0
	FixedBytes16 offset3008; // 0xbc0
	FixedBytes16 offset3024; // 0xbd0
	FixedBytes16 offset3040; // 0xbe0
	FixedBytes16 offset3056; // 0xbf0
	FixedBytes16 offset3072; // 0xc00
	FixedBytes16 offset3088; // 0xc10
	FixedBytes16 offset3104; // 0xc20
	FixedBytes16 offset3120; // 0xc30
	FixedBytes16 offset3136; // 0xc40
	FixedBytes16 offset3152; // 0xc50
	FixedBytes16 offset3168; // 0xc60
	FixedBytes16 offset3184; // 0xc70
	FixedBytes16 offset3200; // 0xc80
	FixedBytes16 offset3216; // 0xc90
	FixedBytes16 offset3232; // 0xca0
	FixedBytes16 offset3248; // 0xcb0
	FixedBytes16 offset3264; // 0xcc0
	FixedBytes16 offset3280; // 0xcd0
	FixedBytes16 offset3296; // 0xce0
	FixedBytes16 offset3312; // 0xcf0
	FixedBytes16 offset3328; // 0xd00
	FixedBytes16 offset3344; // 0xd10
	FixedBytes16 offset3360; // 0xd20
	FixedBytes16 offset3376; // 0xd30
	FixedBytes16 offset3392; // 0xd40
	FixedBytes16 offset3408; // 0xd50
	FixedBytes16 offset3424; // 0xd60
	FixedBytes16 offset3440; // 0xd70
	FixedBytes16 offset3456; // 0xd80
	FixedBytes16 offset3472; // 0xd90
	FixedBytes16 offset3488; // 0xda0
	FixedBytes16 offset3504; // 0xdb0
	FixedBytes16 offset3520; // 0xdc0
	FixedBytes16 offset3536; // 0xdd0
	FixedBytes16 offset3552; // 0xde0
	FixedBytes16 offset3568; // 0xdf0
	FixedBytes16 offset3584; // 0xe00
	FixedBytes16 offset3600; // 0xe10
	FixedBytes16 offset3616; // 0xe20
	FixedBytes16 offset3632; // 0xe30
	FixedBytes16 offset3648; // 0xe40
	FixedBytes16 offset3664; // 0xe50
	FixedBytes16 offset3680; // 0xe60
	FixedBytes16 offset3696; // 0xe70
	FixedBytes16 offset3712; // 0xe80
	FixedBytes16 offset3728; // 0xe90
	FixedBytes16 offset3744; // 0xea0
	FixedBytes16 offset3760; // 0xeb0
	FixedBytes16 offset3776; // 0xec0
	FixedBytes16 offset3792; // 0xed0
	FixedBytes16 offset3808; // 0xee0
	FixedBytes16 offset3824; // 0xef0
	FixedBytes16 offset3840; // 0xf00
	FixedBytes16 offset3856; // 0xf10
	FixedBytes16 offset3872; // 0xf20
	FixedBytes16 offset3888; // 0xf30
	FixedBytes16 offset3904; // 0xf40
	FixedBytes16 offset3920; // 0xf50
	FixedBytes16 offset3936; // 0xf60
	FixedBytes16 offset3952; // 0xf70
	FixedBytes16 offset3968; // 0xf80
	FixedBytes16 offset3984; // 0xf90
	FixedBytes16 offset4000; // 0xfa0
	FixedBytes16 offset4016; // 0xfb0
	FixedBytes16 offset4032; // 0xfc0
	FixedBytes16 offset4048; // 0xfd0
	FixedBytes16 offset4064; // 0xfe0
	byte byte4080; // 0xff0
	byte byte4081; // 0xff1
	byte byte4082; // 0xff2
	byte byte4083; // 0xff3
	byte byte4084; // 0xff4
	byte byte4085; // 0xff5
	byte byte4086; // 0xff6
	byte byte4087; // 0xff7
	byte byte4088; // 0xff8
	byte byte4089; // 0xff9
	byte byte4090; // 0xffa
	byte byte4091; // 0xffb
	byte byte4092; // 0xffc
	byte byte4093; // 0xffd
};

struct ShaderInput.ShadowData {
	Matrix4x4 worldToShadowMatrix; // 0x0
	Vector4 shadowParams; // 0x40
};

struct GSClientDeny_t : ICallbackData {
	ulong SteamID; // 0x0
	DenyReason DenyReason; // 0x8
	byte[] OptionalText; // 0x10
};

struct Ephemeron {
	object key; // 0x0
	object value; // 0x8
};

struct OverlayManager.FFIMethods {
	OverlayManager.FFIMethods.IsEnabledMethod IsEnabled; // 0x0
	OverlayManager.FFIMethods.IsLockedMethod IsLocked; // 0x8
	OverlayManager.FFIMethods.SetLockedMethod SetLocked; // 0x10
	OverlayManager.FFIMethods.OpenActivityInviteMethod OpenActivityInvite; // 0x18
	OverlayManager.FFIMethods.OpenGuildInviteMethod OpenGuildInvite; // 0x20
	OverlayManager.FFIMethods.OpenVoiceSettingsMethod OpenVoiceSettings; // 0x28
};

struct BitExtentions.Box {
	Vector3 (localFrontTopLeft)k__BackingField; // 0x0
	Vector3 (localFrontTopRight)k__BackingField; // 0xc
	Vector3 (localFrontBottomLeft)k__BackingField; // 0x18
	Vector3 (localFrontBottomRight)k__BackingField; // 0x24
	Vector3 (origin)k__BackingField; // 0x30
};

struct Ray {
	Vector3 m_Origin; // 0x0
	Vector3 m_Direction; // 0xc
};

struct Light2DBlendStyle.MaskChannelFilter {
	Vector4 (mask)k__BackingField; // 0x0
	Vector4 (inverted)k__BackingField; // 0x10
};

struct JointSpring {
	float spring; // 0x0
	float damper; // 0x4
	float targetPosition; // 0x8
};

struct XmlNamedNodeMap.SmallXmlNodeList {
	object field; // 0x0
};

struct GetAppDependenciesResult_t : ICallbackData {
	Result Result; // 0x0
	PublishedFileId PublishedFileId; // 0x8
	AppId[] GAppIDs; // 0x10
	uint NumAppDependencies; // 0x18
	uint TotalNumAppDependencies; // 0x1c
};

struct AvatarImageLoaded_t : ICallbackData {
	ulong SteamID; // 0x0
	int Image; // 0x8
	int Wide; // 0xc
	int Tall; // 0x10
};

struct TerrainUtility.TerrainMap.TileCoord {
	int tileX; // 0x0
	int tileZ; // 0x4
};

struct NetAddress.IPV4 {
	ulong m_8zeros; // 0x0
	ushort m_0000; // 0x8
	ushort m_ffff; // 0xa
	byte ip0; // 0xc
	byte ip1; // 0xd
	byte ip2; // 0xe
	byte ip3; // 0xf
};

struct FixedListInt32 : IEnumerable(int) {
	ushort length; // 0x0
	FixedBytes30 buffer; // 0x2
};

struct XmlNamespaceManager.NamespaceDeclaration {
	string prefix; // 0x0
	string uri; // 0x8
	int scopeId; // 0x10
	int previousNsIndex; // 0x14
};

struct AnimationPlayableOutput : IPlayableOutput {
	PlayableOutputHandle m_Handle; // 0x0
};

struct MonoItem {
	Type Type; // 0x0
	MethodInfo MethodInfo; // 0x8
	bool IncludesParamater; // 0x10
	RPCPermissions Permissions; // 0x14
};

struct HTML_LinkAtPosition_t : ICallbackData {
	uint UnBrowserHandle; // 0x0
	uint X; // 0x4
	uint Y; // 0x8
	string PchURL; // 0x10
	bool BInput; // 0x18
	bool BLiveLink; // 0x19
};

struct CustomLODManager.staticMultipleLodOrder {
	StaticMultipleLOD obj; // 0x0
	int target; // 0x8
};

struct ConeTwistConstraintFloatData {
	TypedConstraintFloatData TypedConstraintData; // 0x0
	TransformFloatData RigidBodyAFrame; // 0x40
	TransformFloatData RigidBodyBFrame; // 0x80
	float SwingSpan1; // 0xc0
	float SwingSpan2; // 0xc4
	float TwistSpan; // 0xc8
	float LimitSoftness; // 0xcc
	float BiasFactor; // 0xd0
	float RelaxationFactor; // 0xd4
	float Damping; // 0xd8
	int Pad; // 0xdc
};

struct DriverCabin.Perspective {
	GameObject Main; // 0x0
	Camera Camera; // 0x8
	PostProcess PostProcessing; // 0x10
};

struct StridingMeshInterfaceData {
	IntPtr MeshPartsPtr; // 0x0
	Vector3FloatData Scaling; // 0x8
	int NumMeshParts; // 0x18
	int Padding; // 0x1c
};

struct PhysicsScene2D : IEquatable(PhysicsScene2D) {
	int m_Handle; // 0x0
};

struct StyleInt : IStyleValue(int) {
	StyleKeyword m_Keyword; // 0x0
	int m_Value; // 0x4
	int m_Specificity; // 0x8
};

struct CFRange {
	IntPtr Location; // 0x0
	IntPtr Length; // 0x8
};

struct TransformUpdater.WorldOrderPosition {
	Transform Transform; // 0x0
	Vector3 Position; // 0x8
};

struct CaretInfo {
	int index; // 0x0
	CaretPosition position; // 0x4
};

struct FrameData {
	ulong m_FrameID; // 0x0
	double m_DeltaTime; // 0x8
	float m_Weight; // 0x10
	float m_EffectiveWeight; // 0x14
	double m_EffectiveParentDelay; // 0x18
	float m_EffectiveParentSpeed; // 0x20
	float m_EffectiveSpeed; // 0x24
	FrameData.Flags m_Flags; // 0x28
	PlayableOutput m_Output; // 0x30
};

struct RuntimePropertyHandle {
	IntPtr value; // 0x0
};

struct TankState.Audio {
	float Volume; // 0x0
	float Pitch; // 0x4
};

struct ShadowSplitData : IEquatable(ShadowSplitData) {
	int m_CullingPlaneCount; // 0x0
	ShadowSplitData.(m_CullingPlanes)e__FixedBuffer m_CullingPlanes; // 0x4
	Vector4 m_CullingSphere; // 0xa4
	float m_ShadowCascadeBlendCullingFactor; // 0xb4
};

struct LobbyKicked_t : ICallbackData {
	ulong SteamIDLobby; // 0x0
	ulong SteamIDAdmin; // 0x8
	byte KickedDueToDisconnect; // 0x10
};

struct RuntimeTypeHandle : ISerializable {
	IntPtr value; // 0x0
};

struct DriverCamera.hit {
	Vector3 Velocity; // 0x0
	float Start; // 0xc
	float End; // 0x10
};

struct UnsafeNativeMethods.ManifestEtw.TRACE_GUID_INFO {
	int InstanceCount; // 0x0
	int Reserved; // 0x4
};

struct Lobby {
	long Id; // 0x0
	SteamId (Id)k__BackingField; // 0x0
	LobbyType Type; // 0x8
	long OwnerId; // 0x10
	string Secret; // 0x18
	uint Capacity; // 0x20
	bool Locked; // 0x24
};

struct RemotePlaySession {
	uint (Id)k__BackingField; // 0x0
};

struct GetVideoURLResult_t : ICallbackData {
	Result Result; // 0x0
	AppId VideoAppID; // 0x4
	byte[] URL; // 0x8
};

struct SubmitItemUpdateResult_t : ICallbackData {
	Result Result; // 0x0
	bool UserNeedsToAcceptWorkshopLegalAgreement; // 0x4
	PublishedFileId PublishedFileId; // 0x8
};

struct CancellationTokenRegistration : IEquatable(CancellationTokenRegistration) {
	CancellationCallbackInfo m_callbackInfo; // 0x0
	SparselyPopulatedArrayAddInfo(CancellationCallbackInfo) m_registrationInfo; // 0x8
};

struct RemoteStorageUnsubscribePublishedFileResult_t : ICallbackData {
	Result Result; // 0x0
	PublishedFileId PublishedFileId; // 0x8
};

struct P2PSessionRequest_t : ICallbackData {
	ulong SteamIDRemote; // 0x0
};

struct Screenshot {
	ScreenshotHandle Value; // 0x0
};

struct DefaultControls.Resources {
	Sprite standard; // 0x0
	Sprite background; // 0x8
	Sprite inputField; // 0x10
	Sprite knob; // 0x18
	Sprite checkmark; // 0x20
	Sprite dropdown; // 0x28
	Sprite mask; // 0x30
};

struct CustomAttributeTypedArgument {
	Type argumentType; // 0x0
	object value; // 0x8
};

struct BatchCullingContext {
	NativeArray(Plane) cullingPlanes; // 0x0
	NativeArray(BatchVisibility) batchVisibility; // 0x10
	NativeArray(int) visibleIndices; // 0x20
	LODParameters lodParameters; // 0x30
};

struct LobbyMemberTransaction.FFIMethods {
	LobbyMemberTransaction.FFIMethods.SetMetadataMethod SetMetadata; // 0x0
	LobbyMemberTransaction.FFIMethods.DeleteMetadataMethod DeleteMetadata; // 0x8
};

struct HTML_JSAlert_t : ICallbackData {
	uint UnBrowserHandle; // 0x0
	string PchMessage; // 0x8
};

struct HTML_HorizontalScroll_t : ICallbackData {
	uint UnBrowserHandle; // 0x0
	uint UnScrollMax; // 0x4
	uint UnScrollCurrent; // 0x8
	float FlPageScale; // 0xc
	bool BVisible; // 0x10
	uint UnPageSize; // 0x14
};

struct ConnectionInfo {
	NetIdentity identity; // 0x0
	long userData; // 0x88
	Socket listenSocket; // 0x90
	NetAddress address; // 0x94
	ushort pad; // 0xa6
	SteamNetworkingPOPID popRemote; // 0xa8
	SteamNetworkingPOPID popRelay; // 0xac
	ConnectionState state; // 0xb0
	int endReason; // 0xb4
	string endDebug; // 0xb8
	string connectionDescription; // 0xc0
};

struct RequestPlayersForGameFinalResultCallback_t : ICallbackData {
	Result Result; // 0x0
	ulong LSearchID; // 0x8
	ulong LUniqueGameID; // 0x10
};

struct HlslFloat3 {
	float x; // 0x0
	float y; // 0x4
	float z; // 0x8
};

struct UnityTls.unitytls_x509list_ref {
	ulong handle; // 0x0
};

struct HlslInput {
	string name; // 0x0
	HlslValueType (valueType)k__BackingField; // 0x8
	HlslFloat m_floatValue; // 0xc
	HlslFloat2 m_float2Value; // 0x10
	HlslFloat3 m_float3Value; // 0x18
	HlslFloat4 m_float4Value; // 0x24
};

struct RemoteStorageUpdateUserPublishedItemVoteResult_t : ICallbackData {
	Result Result; // 0x0
	PublishedFileId PublishedFileId; // 0x8
};

struct RuntimeMethodHandle : ISerializable {
	IntPtr value; // 0x0
};

struct User {
	long Id; // 0x0
	string Username; // 0x8
	string Discriminator; // 0x10
	string Avatar; // 0x18
	bool Bot; // 0x20
};

struct BitArray256 : IBitArray {
	ulong data1; // 0x0
	ulong data2; // 0x8
	ulong data3; // 0x10
	ulong data4; // 0x18
};

struct TMP_Offset {
	float m_Left; // 0x0
	float m_Right; // 0x4
	float m_Top; // 0x8
	float m_Bottom; // 0xc
};

struct SteamItemDetails_t {
	InventoryItemId ItemId; // 0x0
	InventoryDefId Definition; // 0x8
	ushort Quantity; // 0xc
	ushort Flags; // 0xe
};

struct XmlAtomicValue.Union {
	bool boolVal; // 0x0
	double dblVal; // 0x0
	DateTime dtVal; // 0x0
	int i32Val; // 0x0
	long i64Val; // 0x0
};

struct MaterialEffectPlayable : IPlayable {
	PlayableHandle m_Handle; // 0x0
};

struct Generic6DofSpring2ConstraintFloatData {
	TypedConstraintFloatData TypeConstraintData; // 0x0
	TransformFloatData RigidBodyAFrame; // 0x40
	TransformFloatData RigidBodyBFrame; // 0x80
	Vector3FloatData LinearUpperLimit; // 0xc0
	Vector3FloatData LinearLowerLimit; // 0xd0
	Vector3FloatData LinearBounce; // 0xe0
	Vector3FloatData LinearStopErp; // 0xf0
	Vector3FloatData LinearStopCfm; // 0x100
	Vector3FloatData LinearMotorErp; // 0x110
	Vector3FloatData LinearMotorCfm; // 0x120
	Vector3FloatData LinearTargetVelocity; // 0x130
	Vector3FloatData LinearMaxMotorForce; // 0x140
	Vector3FloatData LinearServoTarget; // 0x150
	Vector3FloatData LinearSpringStiffness; // 0x160
	Vector3FloatData LinearSpringDamping; // 0x170
	Vector3FloatData LinearEquilibriumPoint; // 0x180
	Generic6DofSpring2ConstraintFloatData.(LinearEnableMotor)e__FixedBuffer LinearEnableMotor; // 0x190
	Generic6DofSpring2ConstraintFloatData.(LinearServoMotor)e__FixedBuffer LinearServoMotor; // 0x194
	Generic6DofSpring2ConstraintFloatData.(LinearEnableSpring)e__FixedBuffer LinearEnableSpring; // 0x198
	Generic6DofSpring2ConstraintFloatData.(LinearSpringStiffnessLimited)e__FixedBuffer LinearSpringStiffnessLimited; // 0x19c
	Generic6DofSpring2ConstraintFloatData.(LinearSpringDampingLimited)e__FixedBuffer LinearSpringDampingLimited; // 0x1a0
	int Padding; // 0x1a4
	Vector3FloatData AngularUpperLimit; // 0x1a8
	Vector3FloatData AngularLowerLimit; // 0x1b8
	Vector3FloatData AngularBounce; // 0x1c8
	Vector3FloatData AngularStopErp; // 0x1d8
	Vector3FloatData AngularStopCfm; // 0x1e8
	Vector3FloatData AngularMotorErp; // 0x1f8
	Vector3FloatData AngularMotorCfm; // 0x208
	Vector3FloatData AngularTargetVelocity; // 0x218
	Vector3FloatData AngularMaxMotorForce; // 0x228
	Vector3FloatData AngularServoTarget; // 0x238
	Vector3FloatData AngularSpringStiffness; // 0x248
	Vector3FloatData AngularSpringDamping; // 0x258
	Vector3FloatData AngularEquilibriumPoint; // 0x268
	Generic6DofSpring2ConstraintFloatData.(AngularEnableMotor)e__FixedBuffer AngularEnableMotor; // 0x278
	Generic6DofSpring2ConstraintFloatData.(AngularServoMotor)e__FixedBuffer AngularServoMotor; // 0x27c
	Generic6DofSpring2ConstraintFloatData.(AngularEnableSpring)e__FixedBuffer AngularEnableSpring; // 0x280
	Generic6DofSpring2ConstraintFloatData.(AngularSpringStiffnessLimited)e__FixedBuffer AngularSpringStiffnessLimited; // 0x284
	Generic6DofSpring2ConstraintFloatData.(AngularSpringDampingLimited)e__FixedBuffer AngularSpringDampingLimited; // 0x288
	int RotateOrder; // 0x28c
};

struct ParsingInfo {
	Calendar calendar; // 0x0
	int dayOfWeek; // 0x8
	DateTimeParse.TM timeMark; // 0xc
	bool fUseHour12; // 0x10
	bool fUseTwoDigitYear; // 0x11
	bool fAllowInnerWhite; // 0x12
	bool fAllowTrailingWhite; // 0x13
	bool fCustomNumberParser; // 0x14
	DateTimeParse.MatchNumberDelegate parseNumberDelegate; // 0x18
};

struct DebrisSoundManager.mBrickRegister : IFastListItemA {
	Vector3 Position; // 0x0
	int Amount; // 0xc
	float registerTime; // 0x10
	int (FastListIndexA)k__BackingField; // 0x14
	int (FastListIndexB)k__BackingField; // 0x18
};

struct EventDescriptor {
	ushort m_id; // 0x0
	int m_traceloggingId; // 0x0
	byte m_version; // 0x2
	byte m_channel; // 0x3
	byte m_level; // 0x4
	byte m_opcode; // 0x5
	ushort m_task; // 0x6
	long m_keywords; // 0x8
};

struct PlayerRootTransformUpdateJob : IJobParallelForTransform {
	float deltaTime; // 0x0
};

struct CompoundShapeChildFloatData {
	TransformFloatData Transform; // 0x0
	IntPtr ChildShape; // 0x40
	int ChildShapeType; // 0x48
	float ChildMargin; // 0x4c
};

struct RemoteStoragePublishFileResult_t : ICallbackData {
	Result Result; // 0x0
	PublishedFileId PublishedFileId; // 0x8
	bool UserNeedsToAcceptWorkshopLegalAgreement; // 0x10
};

struct CheckFileSignature_t : ICallbackData {
	CheckFileSignature CheckFileSignature; // 0x0
};

struct SteamNetConnectionStatusChangedCallback_t : ICallbackData {
	Connection Conn; // 0x0
	ConnectionInfo Nfo; // 0x8
	ConnectionState OldState; // 0x2c0
};

struct SliderConstraintFloatData {
	TypedConstraintFloatData TypedConstraintData; // 0x0
	TransformFloatData RigidBodyAFrame; // 0x40
	TransformFloatData RigidBodyBFrame; // 0x80
	float LinearUpperLimit; // 0xc0
	float LinearLowerLimit; // 0xc4
	float AngularUpperLimit; // 0xc8
	float AngularLowerLimit; // 0xcc
	int UseLinearReferenceFrameA; // 0xd0
	int UseOffsetForConstraintFrame; // 0xd4
};

struct Double : IComparable {
	double m_value; // 0x0
};

struct BroadcastUploadStop_t : ICallbackData {
	BroadcastUploadResult Result; // 0x0
};

struct DateTimeRawInfo {
	int* num; // 0x0
	int numCount; // 0x8
	int month; // 0xc
	int year; // 0x10
	int dayOfWeek; // 0x14
	int era; // 0x18
	DateTimeParse.TM timeMark; // 0x1c
	double fraction; // 0x20
	bool hasSameDateAndTimeSeparators; // 0x28
	bool timeZone; // 0x29
};

struct SteamServersDisconnected_t : ICallbackData {
	Result Result; // 0x0
};

struct AllocatorManager.BlockHandle {
	ushort Value; // 0x0
};

struct SphericalHarmonicsL2 : IEquatable(SphericalHarmonicsL2) {
	float shr0; // 0x0
	float shr1; // 0x4
	float shr2; // 0x8
	float shr3; // 0xc
	float shr4; // 0x10
	float shr5; // 0x14
	float shr6; // 0x18
	float shr7; // 0x1c
	float shr8; // 0x20
	float shg0; // 0x24
	float shg1; // 0x28
	float shg2; // 0x2c
	float shg3; // 0x30
	float shg4; // 0x34
	float shg5; // 0x38
	float shg6; // 0x3c
	float shg7; // 0x40
	float shg8; // 0x44
	float shb0; // 0x48
	float shb1; // 0x4c
	float shb2; // 0x50
	float shb3; // 0x54
	float shb4; // 0x58
	float shb5; // 0x5c
	float shb6; // 0x60
	float shb7; // 0x64
	float shb8; // 0x68
};

struct ShaderKeyword {
	int m_KeywordIndex; // 0x0
};

struct StreamingContext {
	object m_additionalContext; // 0x0
	StreamingContextStates m_state; // 0x8
};

struct SteamRemotePlaySessionConnected_t : ICallbackData {
	uint SessionID; // 0x0
};

struct ManifestEnvelope {
	ManifestEnvelope.ManifestFormats Format; // 0x0
	byte MajorVersion; // 0x1
	byte MinorVersion; // 0x2
	byte Magic; // 0x3
	ushort TotalChunks; // 0x4
	ushort ChunkNumber; // 0x6
};

struct SetPersonaNameResponse_t : ICallbackData {
	bool Success; // 0x0
	bool LocalSuccess; // 0x1
	Result Result; // 0x4
};

struct RuntimeArgumentHandle {
	IntPtr args; // 0x0
};

struct BatchVisibility {
	int offset; // 0x0
	int instancesCount; // 0x4
	int visibleCount; // 0x8
};

struct StyleFont : IStyleValue(Font) {
	StyleKeyword m_Keyword; // 0x0
	Font m_Value; // 0x8
	int m_Specificity; // 0x10
};

struct Connection : IDisposable {
	uint (Id)k__BackingField; // 0x0
};

struct Friend.FriendGameInfo {
	ulong GameID; // 0x0
	uint GameIP; // 0x8
	ulong SteamIDLobby; // 0x10
	int ConnectionPort; // 0x18
	int QueryPort; // 0x1c
};

struct LobbyEnter_t : ICallbackData {
	ulong SteamIDLobby; // 0x0
	uint GfChatPermissions; // 0x8
	bool Locked; // 0xc
	uint EChatRoomEnterResponse; // 0x10
};

struct RenderTargetBlendState : IEquatable(RenderTargetBlendState) {
	byte m_WriteMask; // 0x0
	byte m_SourceColorBlendMode; // 0x1
	byte m_DestinationColorBlendMode; // 0x2
	byte m_SourceAlphaBlendMode; // 0x3
	byte m_DestinationAlphaBlendMode; // 0x4
	byte m_ColorBlendOperation; // 0x5
	byte m_AlphaBlendOperation; // 0x6
	byte m_Padding; // 0x7
};

struct FavoritesListChanged_t : ICallbackData {
	uint IP; // 0x0
	uint QueryPort; // 0x4
	uint ConnPort; // 0x8
	uint AppID; // 0xc
	uint Flags; // 0x10
	bool Add; // 0x14
	uint AccountId; // 0x18
};

struct CameraPlayable : IPlayable {
	PlayableHandle m_Handle; // 0x0
};

struct UnityTls.unitytls_tlsctx_callbacks {
	UnityTls.unitytls_tlsctx_read_callback read; // 0x0
	UnityTls.unitytls_tlsctx_write_callback write; // 0x8
	void* data; // 0x10
};

struct CustomLODManager.dynamicLodOrder {
	DynamicLOD obj; // 0x0
	int target; // 0x8
};

struct ParticleSystem.Particle {
	Vector3 m_Position; // 0x0
	Vector3 m_Velocity; // 0xc
	Vector3 m_AnimatedVelocity; // 0x18
	Vector3 m_InitialVelocity; // 0x24
	Vector3 m_AxisOfRotation; // 0x30
	Vector3 m_Rotation; // 0x3c
	Vector3 m_AngularVelocity; // 0x48
	Vector3 m_StartSize; // 0x54
	Color32 m_StartColor; // 0x60
	uint m_RandomSeed; // 0x64
	uint m_ParentRandomSeed; // 0x68
	float m_Lifetime; // 0x6c
	float m_StartLifetime; // 0x70
	int m_MeshIndex; // 0x74
	float m_EmitAccumulator0; // 0x78
	float m_EmitAccumulator1; // 0x7c
	uint m_Flags; // 0x80
};

struct ScriptingUtility.TestClass {
	int value; // 0x0
};

struct ComputedStyle {
	VisualElement m_Element; // 0x0
};

struct CustomLODManager.dynamicLod2Order {
	DynamicLOD2 obj; // 0x0
	int target; // 0x8
};

struct GSStatsReceived_t : ICallbackData {
	Result Result; // 0x0
	ulong SteamIDUser; // 0x4
};

struct StoreManager.FFIMethods {
	StoreManager.FFIMethods.FetchSkusMethod FetchSkus; // 0x0
	StoreManager.FFIMethods.CountSkusMethod CountSkus; // 0x8
	StoreManager.FFIMethods.GetSkuMethod GetSku; // 0x10
	StoreManager.FFIMethods.GetSkuAtMethod GetSkuAt; // 0x18
	StoreManager.FFIMethods.FetchEntitlementsMethod FetchEntitlements; // 0x20
	StoreManager.FFIMethods.CountEntitlementsMethod CountEntitlements; // 0x28
	StoreManager.FFIMethods.GetEntitlementMethod GetEntitlement; // 0x30
	StoreManager.FFIMethods.GetEntitlementAtMethod GetEntitlementAt; // 0x38
	StoreManager.FFIMethods.HasSkuEntitlementMethod HasSkuEntitlement; // 0x40
	StoreManager.FFIMethods.StartPurchaseMethod StartPurchase; // 0x48
};

struct ShaderTagId : IEquatable(ShaderTagId) {
	int m_Id; // 0x0
};

struct NetView.RuntimeNetView {
	NetView Target; // 0x0
	bool IsExists; // 0x8
	NetworkClient Owner; // 0x10
	ulong OwnerSteamID; // 0x18
};

struct BatchRendererCullingOutput {
	JobHandle cullingJobsFence; // 0x0
	Plane* cullingPlanes; // 0x10
	BatchVisibility* batchVisibility; // 0x18
	int* visibleIndices; // 0x20
	int cullingPlanesCount; // 0x28
	int batchVisibilityCount; // 0x2c
	int visibleIndicesCount; // 0x30
};

struct RegexCharClass.LowerCaseMapping {
	char _chMin; // 0x0
	char _chMax; // 0x2
	int _lcOp; // 0x4
	int _data; // 0x8
};

struct EncryptedAppTicketResponse_t : ICallbackData {
	Result Result; // 0x0
};

struct Light2D.LightStats {
	int totalLights; // 0x0
	int totalNormalMapUsage; // 0x4
	int totalVolumetricUsage; // 0x8
	uint blendStylesUsed; // 0xc
};

struct Socket : IDisposable {
	uint Id; // 0x0
};

struct RemoveAppDependencyResult_t : ICallbackData {
	Result Result; // 0x0
	PublishedFileId PublishedFileId; // 0x8
	AppId AppID; // 0x10
};

struct YogaSize {
	float width; // 0x0
	float height; // 0x4
};

struct ParticleSystem.MinMaxCurve {
	ParticleSystemCurveMode m_Mode; // 0x0
	float m_CurveMultiplier; // 0x4
	AnimationCurve m_CurveMin; // 0x8
	AnimationCurve m_CurveMax; // 0x10
	float m_ConstantMin; // 0x18
	float m_ConstantMax; // 0x1c
};

struct Char : IComparable {
	char m_value; // 0x0
};

struct AllocatorManager.Range : IDisposable {
	IntPtr Pointer; // 0x0
	int Items; // 0x8
	AllocatorManager.SmallAllocatorHandle Allocator; // 0xc
	AllocatorManager.BlockHandle Block; // 0xe
};

struct RectangleLight {
	int instanceID; // 0x0
	bool shadow; // 0x4
	LightMode mode; // 0x5
	Vector3 position; // 0x8
	Quaternion orientation; // 0x14
	LinearColor color; // 0x24
	LinearColor indirectColor; // 0x34
	float range; // 0x44
	float width; // 0x48
	float height; // 0x4c
	FalloffType falloff; // 0x50
};

struct Achievement {
	string Value; // 0x0
};

struct UserFavoriteItemsListChanged_t : ICallbackData {
	PublishedFileId PublishedFileId; // 0x0
	Result Result; // 0x8
	bool WasAddRequest; // 0xc
};

struct DTSubString {
	string s; // 0x0
	int index; // 0x8
	int length; // 0xc
	DTSubStringType type; // 0x10
	int value; // 0x14
};

struct GSClientAchievementStatus_t : ICallbackData {
	ulong SteamID; // 0x0
	byte[] PchAchievement; // 0x8
	bool Unlocked; // 0x10
};

struct SortingLayer {
	int m_Id; // 0x0
};

struct HSteamUser : IEquatable(HSteamUser) {
	int Value; // 0x0
};

struct Keyframe {
	float m_Time; // 0x0
	float m_Value; // 0x4
	float m_InTangent; // 0x8
	float m_OutTangent; // 0xc
	int m_WeightedMode; // 0x10
	float m_InWeight; // 0x14
	float m_OutWeight; // 0x18
};

struct VisualElement.Hierarchy {
	VisualElement m_Owner; // 0x0
};

struct CompoundShapeFloatData {
	CollisionShapeFloatData CollisionShapeData; // 0x0
	IntPtr ChildShapePtr; // 0x10
	int NumChildShapes; // 0x18
	float CollisionMargin; // 0x1c
};

struct GlyphValueRecord : IEquatable(GlyphValueRecord) {
	float m_XPlacement; // 0x0
	float m_YPlacement; // 0x4
	float m_XAdvance; // 0x8
	float m_YAdvance; // 0xc
};

struct NativeUdpIPv4Socket.WSAData {
	short wVersion; // 0x0
	short wHighVersion; // 0x2
	string szDescription; // 0x8
	string szSystemStatus; // 0x10
	short iMaxSockets; // 0x18
	short iMaxUdpDg; // 0x1a
	IntPtr lpVendorInfo; // 0x20
};

struct AnimatorTransitionInfo {
	int m_FullPath; // 0x0
	int m_UserName; // 0x4
	int m_Name; // 0x8
	bool m_HasFixedDuration; // 0xc
	float m_Duration; // 0x10
	float m_NormalizedTime; // 0x14
	bool m_AnyState; // 0x18
	int m_TransitionType; // 0x1c
};

struct TransformUpdater.LocalOrderRotation {
	Transform Transform; // 0x0
	Quaternion Rotation; // 0x8
};

struct HableCurve.DirectParams {
	float x0; // 0x0
	float y0; // 0x4
	float x1; // 0x8
	float y1; // 0xc
	float W; // 0x10
	float overshootX; // 0x14
	float overshootY; // 0x18
	float gamma; // 0x1c
};

struct TransformAccessArray : IDisposable {
	IntPtr m_TransformArray; // 0x0
};

struct LineInfo {
	int lineNo; // 0x0
	int linePos; // 0x4
};

struct LODParameters : IEquatable(LODParameters) {
	int m_IsOrthographic; // 0x0
	Vector3 m_CameraPosition; // 0x4
	float m_FieldOfView; // 0x10
	float m_OrthoSize; // 0x14
	int m_CameraPixelHeight; // 0x18
};

struct RenderGraphResourceRegistry.TextureResource {
	TextureDesc desc; // 0x0
	bool imported; // 0x70
	RTHandle rt; // 0x78
	int cachedHash; // 0x80
	int firstWritePassIndex; // 0x84
	int lastReadPassIndex; // 0x88
	int shaderProperty; // 0x8c
	bool wasReleased; // 0x90
};

struct AllocatorManager.Block : IDisposable {
	AllocatorManager.Range Range; // 0x0
	int BytesPerItem; // 0x10
	int AllocatedItems; // 0x14
	byte Log2Alignment; // 0x18
	byte Padding0; // 0x19
	ushort Padding1; // 0x1a
	uint Padding2; // 0x1c
};

struct DelayedSpawner.mSpawnItem {
	GameObject mPrefab; // 0x0
	float mTimeToSpawn; // 0x8
	float mLifeTime; // 0xc
	Vector3 mPosition; // 0x10
	Quaternion mRotation; // 0x1c
};

struct RemoteStorageFileWriteAsyncComplete_t : ICallbackData {
	Result Result; // 0x0
};

struct LobbyInvite_t : ICallbackData {
	ulong SteamIDUser; // 0x0
	ulong SteamIDLobby; // 0x8
	ulong GameID; // 0x10
};

struct Eyes : IEquatable(Eyes) {
	ulong m_DeviceId; // 0x0
	uint m_FeatureIndex; // 0x8
};

struct ConvexInternalShapeFloatData {
	CollisionShapeFloatData CollisionShapeData; // 0x0
	Vector3FloatData LocalScaling; // 0x10
	Vector3FloatData ImplicitShapeDimensions; // 0x20
	float CollisionMargin; // 0x30
	int Padding; // 0x34
};

struct Byte : IComparable {
	byte m_value; // 0x0
};

struct SimpleCollator.Context {
	CompareOptions Option; // 0x0
	byte* NeverMatchFlags; // 0x8
	byte* AlwaysMatchFlags; // 0x10
	byte* Buffer1; // 0x18
	byte* Buffer2; // 0x20
	int PrevCode; // 0x28
	byte* PrevSortKey; // 0x30
};

struct DownloadClanActivityCountsResult_t : ICallbackData {
	bool Success; // 0x0
};

struct BitArray8 : IBitArray {
	byte data; // 0x0
};

struct RenderGraphExecuteParams {
	int renderingWidth; // 0x0
	int renderingHeight; // 0x4
	MSAASamples msaaSamples; // 0x8
};

struct JoinPartyCallback_t : ICallbackData {
	Result Result; // 0x0
	ulong BeaconID; // 0x8
	ulong SteamIDBeaconOwner; // 0x10
	byte[] ConnectString; // 0x18
};

struct FixedListInt4096 : IEnumerable(int) {
	ushort length; // 0x0
	FixedBytes4094 buffer; // 0x2
};

struct FixedBytes16 {
	byte byte0000; // 0x0
	byte byte0001; // 0x1
	byte byte0002; // 0x2
	byte byte0003; // 0x3
	byte byte0004; // 0x4
	byte byte0005; // 0x5
	byte byte0006; // 0x6
	byte byte0007; // 0x7
	byte byte0008; // 0x8
	byte byte0009; // 0x9
	byte byte0010; // 0xa
	byte byte0011; // 0xb
	byte byte0012; // 0xc
	byte byte0013; // 0xd
	byte byte0014; // 0xe
	byte byte0015; // 0xf
};

struct RendererListDesc {
	SortingCriteria sortingCriteria; // 0x0
	PerObjectData rendererConfiguration; // 0x4
	RenderQueueRange renderQueueRange; // 0x8
	Nullable(RenderStateBlock) stateBlock; // 0x10
	Material overrideMaterial; // 0x80
	bool excludeObjectMotionVectors; // 0x88
	int layerMask; // 0x8c
	int overrideMaterialPassIndex; // 0x90
	CullingResults (cullingResult)k__BackingField; // 0x98
	Camera (camera)k__BackingField; // 0xa8
	ShaderTagId (passName)k__BackingField; // 0xb0
	ShaderTagId[] (passNames)k__BackingField; // 0xb8
};

struct MonoPropertyInfo {
	Type parent; // 0x0
	Type declaring_type; // 0x8
	string name; // 0x10
	MethodInfo get_method; // 0x18
	MethodInfo set_method; // 0x20
	PropertyAttributes attrs; // 0x28
};

struct Stream.ReadWriteParameters {
	byte[] Buffer; // 0x0
	int Offset; // 0x8
	int Count; // 0xc
};

struct Friend {
	SteamId Id; // 0x0
};

struct GameScreen_Bindings.Args.order {
	float Space; // 0x0
	Binding Binding; // 0x8
	int LangID; // 0x10
};

struct PlayableOutput : IPlayableOutput {
	PlayableOutputHandle m_Handle; // 0x0
};

struct PlayableHandle : IEquatable(PlayableHandle) {
	IntPtr m_Handle; // 0x0
	uint m_Version; // 0x8
};

struct Stream.counter {
	int Rate; // 0x0
	int Counter; // 0x4
};

struct SpinLock {
	int m_owner; // 0x0
};

struct HTTPRequestHeadersReceived_t : ICallbackData {
	uint Request; // 0x0
	ulong ContextValue; // 0x8
};

struct ThirdPersonAnimationJob : IJobParallelForTransform {
	float deltaTime; // 0x0
};

struct PlayableOutputHandle : IEquatable(PlayableOutputHandle) {
	IntPtr m_Handle; // 0x0
	uint m_Version; // 0x8
};

struct XRDisplaySubsystem.XRRenderPass {
	IntPtr displaySubsystemInstance; // 0x0
	int renderPassIndex; // 0x8
	RenderTargetIdentifier renderTarget; // 0x10
	RenderTextureDescriptor renderTargetDesc; // 0x38
	bool shouldFillOutDepth; // 0x6c
	int cullingPassIndex; // 0x70
};

struct PQHandle {
	int _handle; // 0x0
};

struct Gear {
	float MaxRPM; // 0x0
	float Torque; // 0x4
};

struct ScreenshotReady_t : ICallbackData {
	uint Local; // 0x0
	Result Result; // 0x4
};

struct AllocatorManager.SlabAllocator : IDisposable {
	AllocatorManager.Block Storage; // 0x0
	int Log2SlabSizeInBytes; // 0x20
	FixedListInt4096 Occupied; // 0x24
	long budgetInBytes; // 0x1028
	long allocatedBytes; // 0x1030
};

struct GSPolicyResponse_t : ICallbackData {
	byte Secure; // 0x0
};

struct GlyphPairKey {
	uint firstGlyphIndex; // 0x0
	uint secondGlyphIndex; // 0x4
	uint key; // 0x8
};

struct RuntimeStructs.MonoError {
	ushort error_code; // 0x0
	ushort hidden_0; // 0x2
	IntPtr hidden_1; // 0x8
	IntPtr hidden_2; // 0x10
	IntPtr hidden_3; // 0x18
	IntPtr hidden_4; // 0x20
	IntPtr hidden_5; // 0x28
	IntPtr hidden_6; // 0x30
	IntPtr hidden_7; // 0x38
	IntPtr hidden_8; // 0x40
	IntPtr hidden_11; // 0x48
	IntPtr hidden_12; // 0x50
	IntPtr hidden_13; // 0x58
	IntPtr hidden_14; // 0x60
	IntPtr hidden_15; // 0x68
	IntPtr hidden_16; // 0x70
	IntPtr hidden_17; // 0x78
	IntPtr hidden_18; // 0x80
};

struct ConfiguredTaskAwaitable.ConfiguredTaskAwaiter : ICriticalNotifyCompletion {
	Task m_task; // 0x0
	bool m_continueOnCapturedContext; // 0x8
};

struct StyleLength : IStyleValue(Length) {
	StyleKeyword m_Keyword; // 0x0
	Length m_Value; // 0x4
	int m_Specificity; // 0xc
};

struct MarkerList : ISerializationCallbackReceiver {
	List(ScriptableObject) m_Objects; // 0x0
	List(IMarker) m_Cache; // 0x8
	bool m_CacheDirty; // 0x10
	bool m_HasNotifications; // 0x11
};

struct SpriteBone {
	string m_Name; // 0x0
	Vector3 m_Position; // 0x8
	Quaternion m_Rotation; // 0x14
	float m_Length; // 0x24
	int m_ParentId; // 0x28
};

struct QuantizedBvhFloatData {
	Vector3FloatData BvhAabbMin; // 0x0
	Vector3FloatData BvhAabbMax; // 0x10
	Vector3FloatData BvhQuantization; // 0x20
	int CurNodeIndex; // 0x30
	int UseQuantization; // 0x34
	int NumContiguousLeafNodes; // 0x38
	int NumQuantizedContiguousNodes; // 0x3c
	IntPtr ContiguousNodesPtr; // 0x40
	IntPtr QuantizedContiguousNodesPtr; // 0x48
	IntPtr SubTreeInfoPtr; // 0x50
	int TraversalMode; // 0x58
	int NumSubtreeHeaders; // 0x5c
};

struct Vector3 : IEquatable(Vector3) {
	float x; // 0x0
	float X; // 0x0
	float y; // 0x4
	float Y; // 0x4
	float Z; // 0x8
	float z; // 0x8
};

struct AnimatorClipInfo {
	int m_ClipInstanceID; // 0x0
	float m_Weight; // 0x4
};

struct LobbyChatUpdate_t : ICallbackData {
	ulong SteamIDLobby; // 0x0
	ulong SteamIDUserChanged; // 0x8
	ulong SteamIDMakingChange; // 0x10
	uint GfChatMemberStateChange; // 0x18
};

struct SortingSettings : IEquatable(SortingSettings) {
	Matrix4x4 m_WorldToCameraMatrix; // 0x0
	Vector3 m_CameraPosition; // 0x40
	Vector3 m_CustomAxis; // 0x4c
	SortingCriteria m_Criteria; // 0x58
	DistanceMetric m_DistanceMetric; // 0x5c
	Matrix4x4 m_PreviousVPMatrix; // 0x60
	Matrix4x4 m_NonJitteredVPMatrix; // 0xa0
};

struct XPathNodeRef {
	XPathNode[] page; // 0x0
	int idx; // 0x8
};

struct GSClientGroupStatus_t : ICallbackData {
	ulong SteamIDUser; // 0x0
	ulong SteamIDGroup; // 0x8
	bool Member; // 0x10
	bool Officer; // 0x11
};

struct JointDrive {
	float m_PositionSpring; // 0x0
	float m_PositionDamper; // 0x4
	float m_MaximumForce; // 0x8
};

struct Decimal : IFormattable {
	int flags; // 0x0
	int hi; // 0x4
	int lo; // 0x8
	int mid; // 0xc
};

struct Light2DBlendStyle.BlendFactors {
	float multiplicative; // 0x0
	float additive; // 0x4
};

struct math.LongDoubleUnion {
	double doubleValue; // 0x0
	long longValue; // 0x0
};

struct LobbyMemberTransaction {
	IntPtr MethodsPtr; // 0x0
	object MethodsStructure; // 0x8
};

struct ArtilleryShellSound.Sound {
	AudioClip Clip; // 0x0
	float ImpactTime; // 0x8
};

struct P2PSessionConnectFail_t : ICallbackData {
	ulong SteamIDRemote; // 0x0
	byte P2PSessionError; // 0x8
};

struct RigidBodyFloatData {
	CollisionObjectFloatData CollisionObjectData; // 0x0
	Matrix3x3FloatData InvInertiaTensorWorld; // 0x110
	Vector3FloatData LinearVelocity; // 0x140
	Vector3FloatData AngularVelocity; // 0x150
	Vector3FloatData AngularFactor; // 0x160
	Vector3FloatData LinearFactor; // 0x170
	Vector3FloatData Gravity; // 0x180
	Vector3FloatData GravityAcceleration; // 0x190
	Vector3FloatData InvInertiaLocal; // 0x1a0
	Vector3FloatData TotalForce; // 0x1b0
	Vector3FloatData TotalTorque; // 0x1c0
	float InverseMass; // 0x1d0
	float LinearDamping; // 0x1d4
	float AngularDamping; // 0x1d8
	float AdditionalDampingFactor; // 0x1dc
	float AdditionalLinearDampingThresholdSqr; // 0x1e0
	float AdditionalAngularDampingThresholdSqr; // 0x1e4
	float AdditionalAngularDampingFactor; // 0x1e8
	float LinearSleepingThreshold; // 0x1ec
	float AngularSleepingThreshold; // 0x1f0
	int AdditionalDamping; // 0x1f4
};

struct TMP_GlyphValueRecord {
	float m_XPlacement; // 0x0
	float m_YPlacement; // 0x4
	float m_XAdvance; // 0x8
	float m_YAdvance; // 0xc
};

struct RelationshipManager.FFIMethods {
	RelationshipManager.FFIMethods.FilterMethod Filter; // 0x0
	RelationshipManager.FFIMethods.CountMethod Count; // 0x8
	RelationshipManager.FFIMethods.GetMethod Get; // 0x10
	RelationshipManager.FFIMethods.GetAtMethod GetAt; // 0x18
};

struct RemoteStorageAppSyncStatusCheck_t : ICallbackData {
	AppId AppID; // 0x0
	Result Result; // 0x4
};

struct Uri.Offset {
	ushort Scheme; // 0x0
	ushort User; // 0x2
	ushort Host; // 0x4
	ushort PortValue; // 0x6
	ushort Path; // 0x8
	ushort Query; // 0xa
	ushort Fragment; // 0xc
	ushort End; // 0xe
};

struct TransformFloatData {
	Matrix3x3FloatData Basis; // 0x0
	Vector3FloatData Origin; // 0x30
};

struct SkeletonBone {
	string name; // 0x0
	string parentName; // 0x8
	Vector3 position; // 0x10
	Quaternion rotation; // 0x1c
	Vector3 scale; // 0x2c
};

struct GameWebCallback_t : ICallbackData {
	byte[] URL; // 0x0
};

struct RemoteStorageSubscribePublishedFileResult_t : ICallbackData {
	Result Result; // 0x0
	PublishedFileId PublishedFileId; // 0x8
};

struct Relationship {
	RelationshipType Type; // 0x0
	User User; // 0x8
	Presence Presence; // 0x30
};

struct FixedListInt64 : IEnumerable(int) {
	ushort length; // 0x0
	FixedBytes62 buffer; // 0x2
};

struct ParticleSystem.EmissionModule {
	ParticleSystem m_ParticleSystem; // 0x0
};

struct BitArray128 : IBitArray {
	ulong data1; // 0x0
	ulong data2; // 0x8
};

struct HTML_UpdateToolTip_t : ICallbackData {
	uint UnBrowserHandle; // 0x0
	string PchMsg; // 0x8
};

struct HAuthTicket : IEquatable(HAuthTicket) {
	uint Value; // 0x0
};

struct IPv6AddressFormatter {
	ushort[] address; // 0x0
	long scopeId; // 0x8
};

struct RemoteStoragePublishedFileSubscribed_t : ICallbackData {
	PublishedFileId PublishedFileId; // 0x0
	AppId AppID; // 0x8
};

struct SequenceNode.SequenceConstructPosContext {
	SequenceNode this_; // 0x0
	BitSet firstpos; // 0x8
	BitSet lastpos; // 0x10
	BitSet lastposLeft; // 0x18
	BitSet firstposRight; // 0x20
};

struct EventProvider.EventData {
	ulong Ptr; // 0x0
	uint Size; // 0x8
	uint Reserved; // 0xc
};

struct LightData {
	int mainLightIndex; // 0x0
	int additionalLightsCount; // 0x4
	int maxPerObjectAdditionalLightsCount; // 0x8
	NativeArray(VisibleLight) visibleLights; // 0x10
	bool shadeAdditionalLightsPerVertex; // 0x20
	bool supportsMixedLighting; // 0x21
};

struct AllocatorManager.TableEntry16 {
	AllocatorManager.TableEntry f0; // 0x0
	AllocatorManager.TableEntry f1; // 0x10
	AllocatorManager.TableEntry f2; // 0x20
	AllocatorManager.TableEntry f3; // 0x30
	AllocatorManager.TableEntry f4; // 0x40
	AllocatorManager.TableEntry f5; // 0x50
	AllocatorManager.TableEntry f6; // 0x60
	AllocatorManager.TableEntry f7; // 0x70
	AllocatorManager.TableEntry f8; // 0x80
	AllocatorManager.TableEntry f9; // 0x90
	AllocatorManager.TableEntry f10; // 0xa0
	AllocatorManager.TableEntry f11; // 0xb0
	AllocatorManager.TableEntry f12; // 0xc0
	AllocatorManager.TableEntry f13; // 0xd0
	AllocatorManager.TableEntry f14; // 0xe0
	AllocatorManager.TableEntry f15; // 0xf0
};

struct RemoteStorageFileReadAsyncComplete_t : ICallbackData {
	ulong FileReadAsync; // 0x0
	Result Result; // 0x8
	uint Offset; // 0xc
	uint Read; // 0x10
};

struct SoftJointLimit {
	float m_Limit; // 0x0
	float m_Bounciness; // 0x4
	float m_ContactDistance; // 0x8
};

struct Version.VersionResult {
	Version m_parsedVersion; // 0x0
	Version.ParseFailureKind m_failure; // 0x8
	string m_exceptionArgument; // 0x10
	string m_argumentName; // 0x18
	bool m_canThrow; // 0x20
};

struct AnimationOffsetPlayable : IPlayable {
	PlayableHandle m_Handle; // 0x0
};

struct AllocatorManager.StackAllocator : IDisposable {
	AllocatorManager.Block m_storage; // 0x0
	long m_top; // 0x20
	long budgetInBytes; // 0x28
	long allocatedBytes; // 0x30
};

struct SoundManager.PlayingShotSound {
	float EndTime; // 0x0
	AudioSource Source; // 0x8
};

struct Vector3Int : IEquatable(Vector3Int) {
	int m_X; // 0x0
	int m_Y; // 0x4
	int m_Z; // 0x8
};

struct InputMode {
	InputModeType Type; // 0x0
	string Shortcut; // 0x8
};

struct RSAParameters {
	byte[] Exponent; // 0x0
	byte[] Modulus; // 0x8
	byte[] P; // 0x10
	byte[] Q; // 0x18
	byte[] DP; // 0x20
	byte[] DQ; // 0x28
	byte[] InverseQ; // 0x30
	byte[] D; // 0x38
};

struct GlobalDynamicResolutionSettings {
	bool enabled; // 0x0
	float maxPercentage; // 0x4
	float minPercentage; // 0x8
	DynamicResolutionType dynResType; // 0xc
	DynamicResUpscaleFilter upsampleFilter; // 0xd
	bool forceResolution; // 0xe
	float forcedPercentage; // 0x10
};

struct RemoteStorageDeletePublishedFileResult_t : ICallbackData {
	Result Result; // 0x0
	PublishedFileId PublishedFileId; // 0x8
};

struct JobHandle {
	IntPtr jobGroup; // 0x0
	int version; // 0x8
};

struct ImageHandle {
	ImageType Type; // 0x0
	long Id; // 0x8
	uint Size; // 0x10
};

struct FullScreenQuad.FullScreenQuadSettings {
	RenderPassEvent renderPassEvent; // 0x0
	Material material; // 0x8
};

struct HTTPRequestCompleted_t : ICallbackData {
	uint Request; // 0x0
	ulong ContextValue; // 0x8
	bool RequestSuccessful; // 0x10
	HTTPStatusCode StatusCode; // 0x14
	uint BodySize; // 0x18
};

struct IMGUIContainer.GUIGlobals {
	Matrix4x4 matrix; // 0x0
	Color color; // 0x40
	Color contentColor; // 0x50
	Color backgroundColor; // 0x60
	bool enabled; // 0x70
	bool changed; // 0x71
	int displayIndex; // 0x74
};

struct TMP_MaterialReference {
	Material material; // 0x0
	int referenceCount; // 0x8
};

struct InternalCodePageDataItem {
	ushort codePage; // 0x0
	ushort uiFamilyCodePage; // 0x2
	uint flags; // 0x4
	string Names; // 0x8
};

struct LowBatteryPower_t : ICallbackData {
	byte MinutesBatteryLeft; // 0x0
};

struct SessionMask {
	uint m_mask; // 0x0
};

struct FavoritesListAccountsUpdated_t : ICallbackData {
	Result Result; // 0x0
};

struct UserAchievementStored_t : ICallbackData {
	ulong GameID; // 0x0
	bool GroupAchievement; // 0x8
	byte[] AchievementName; // 0x10
	uint CurProgress; // 0x18
	uint MaxProgress; // 0x1c
};

struct CoreCameraValues : IEquatable(CoreCameraValues) {
	int filterMode; // 0x0
	uint cullingMask; // 0x4
	int instanceID; // 0x8
};

struct FixedBytes30 {
	FixedBytes16 offset0000; // 0x0
	byte byte0016; // 0x10
	byte byte0017; // 0x11
	byte byte0018; // 0x12
	byte byte0019; // 0x13
	byte byte0020; // 0x14
	byte byte0021; // 0x15
	byte byte0022; // 0x16
	byte byte0023; // 0x17
	byte byte0024; // 0x18
	byte byte0025; // 0x19
	byte byte0026; // 0x1a
	byte byte0027; // 0x1b
	byte byte0028; // 0x1c
	byte byte0029; // 0x1d
};

struct ColorTween : ITweenValue {
	ColorTween.ColorTweenCallback m_Target; // 0x0
	Color m_StartColor; // 0x8
	Color m_TargetColor; // 0x18
	ColorTween.ColorTweenMode m_TweenMode; // 0x28
	float m_Duration; // 0x2c
	bool m_IgnoreTimeScale; // 0x30
};

struct FriendsGetFollowerCount_t : ICallbackData {
	Result Result; // 0x0
	ulong SteamID; // 0x4
	int Count; // 0xc
};

struct CancellationCallbackCoreWorkArguments {
	SparselyPopulatedArrayFragment(CancellationCallbackInfo) m_currArrayFragment; // 0x0
	int m_currArrayIndex; // 0x8
};

struct Array.SorterGenericArray {
	Array keys; // 0x0
	Array items; // 0x8
	IComparer comparer; // 0x10
};

struct TypedConstraintFloatData {
	IntPtr RigidBodyA; // 0x0
	IntPtr RigidBodyB; // 0x8
	IntPtr Name; // 0x10
	int ObjectType; // 0x18
	int UserConstraintType; // 0x1c
	int UserConstraintId; // 0x20
	int NeedsFeedback; // 0x24
	float AppliedImpulse; // 0x28
	float DebugDrawSize; // 0x2c
	int DisableCollisionsBetweenLinkedBodies; // 0x30
	int OverrideNumSolverIterations; // 0x34
	float BreakingImpulseThreshold; // 0x38
	int IsEnabled; // 0x3c
};

struct InventoryResult : IDisposable {
	SteamInventoryResult_t _id; // 0x0
	bool (Expired)k__BackingField; // 0x4
};

struct FixedListInt512 : IEnumerable(int) {
	ushort length; // 0x0
	FixedBytes510 buffer; // 0x2
};

struct Length : IEquatable(Length) {
	float m_Value; // 0x0
	LengthUnit m_Unit; // 0x4
};

struct CollisionShapeFloatData {
	IntPtr Name; // 0x0
	int ShapeType; // 0x8
	int Padding; // 0xc
};

struct EventSourceOptions {
	EventKeywords keywords; // 0x0
	EventTags tags; // 0x8
	EventActivityOptions activityOptions; // 0xc
	byte level; // 0x10
	byte opcode; // 0x11
	byte valuesSet; // 0x12
};

struct VertexGradient {
	Color topLeft; // 0x0
	Color topRight; // 0x10
	Color bottomLeft; // 0x20
	Color bottomRight; // 0x30
};

struct GSReputation_t : ICallbackData {
	Result Result; // 0x0
	uint ReputationScore; // 0x4
	bool Banned; // 0x8
	uint BannedIP; // 0xc
	ushort BannedPort; // 0x10
	ulong BannedGameID; // 0x18
	uint BanExpires; // 0x20
};

struct ConvexHullShapeFloatData {
	ConvexInternalShapeFloatData ConvexInternalShapeData; // 0x0
	IntPtr UnscaledPointsFloatPtr; // 0x38
	IntPtr UnscaledPointsDoublePtr; // 0x40
	int NumUnscaledPoints; // 0x48
	int Padding; // 0x4c
};

struct Pint {
	uint Base; // 0x0
	uint Additional; // 0x4
};

struct Process.ProcInfo {
	IntPtr process_handle; // 0x0
	int pid; // 0x8
	string[] envVariables; // 0x10
	string UserName; // 0x18
	string Domain; // 0x20
	IntPtr Password; // 0x28
	bool LoadUserProfile; // 0x30
};

struct AnimationHumanStream {
	IntPtr stream; // 0x0
};

struct MusicPlayerWantsShuffled_t : ICallbackData {
	bool Shuffled; // 0x0
};

struct MeshPartData {
	IntPtr Vertices3F; // 0x0
	IntPtr Vertices3D; // 0x8
	IntPtr Indices32; // 0x10
	IntPtr Indices16; // 0x18
	IntPtr Indices8; // 0x20
	IntPtr Indices16_2; // 0x28
	int NumTriangles; // 0x30
	int NumVertices; // 0x34
};

struct Color : IEquatable(Color) {
	float r; // 0x0
	float g; // 0x4
	float b; // 0x8
	float a; // 0xc
};

struct TextureMixerPlayable : IPlayable {
	PlayableHandle m_Handle; // 0x0
};

struct DirectionalLight {
	int instanceID; // 0x0
	bool shadow; // 0x4
	LightMode mode; // 0x5
	Vector3 direction; // 0x8
	LinearColor color; // 0x14
	LinearColor indirectColor; // 0x24
	float penumbraWidthRadian; // 0x34
};

struct WallBuilder.mFinishedObject {
	WallBuilder.mMeshBuffer buffer; // 0x0
	WallBuilder target; // 0x8
};

struct RenderStateBlock : IEquatable(RenderStateBlock) {
	BlendState m_BlendState; // 0x0
	RasterState m_RasterState; // 0x44
	DepthState m_DepthState; // 0x54
	StencilState m_StencilState; // 0x56
	int m_StencilReference; // 0x64
	RenderStateMask m_Mask; // 0x68
};

struct XsdDateTime.Parser {
	XsdDateTime.DateTimeTypeCode typeCode; // 0x0
	int year; // 0x4
	int month; // 0x8
	int day; // 0xc
	int hour; // 0x10
	int minute; // 0x14
	int second; // 0x18
	int fraction; // 0x1c
	XsdDateTime.XsdDateTimeKind kind; // 0x20
	int zoneHour; // 0x24
	int zoneMinute; // 0x28
	string text; // 0x30
	int length; // 0x38
};

struct GUIClip.ParentClipScope : IDisposable {
	bool m_Disposed; // 0x0
};

struct JobsUtility.JobScheduleParameters {
	JobHandle Dependency; // 0x0
	int ScheduleMode; // 0x10
	IntPtr ReflectionData; // 0x18
	IntPtr JobDataPtr; // 0x20
};

struct CFStreamClientContext {
	IntPtr Version; // 0x0
	IntPtr Info; // 0x8
	IntPtr Retain; // 0x10
	IntPtr Release; // 0x18
	IntPtr CopyDescription; // 0x20
};

struct TileData {
	Sprite m_Sprite; // 0x0
	Color m_Color; // 0x8
	Matrix4x4 m_Transform; // 0x18
	GameObject m_GameObject; // 0x58
	TileFlags m_Flags; // 0x60
	Tile.ColliderType m_ColliderType; // 0x64
};

struct AllocatorManager.TableEntry4096 {
	AllocatorManager.TableEntry256 f0; // 0x0
	AllocatorManager.TableEntry256 f1; // 0x1000
	AllocatorManager.TableEntry256 f2; // 0x2000
	AllocatorManager.TableEntry256 f3; // 0x3000
	AllocatorManager.TableEntry256 f4; // 0x4000
	AllocatorManager.TableEntry256 f5; // 0x5000
	AllocatorManager.TableEntry256 f6; // 0x6000
	AllocatorManager.TableEntry256 f7; // 0x7000
	AllocatorManager.TableEntry256 f8; // 0x8000
	AllocatorManager.TableEntry256 f9; // 0x9000
	AllocatorManager.TableEntry256 f10; // 0xa000
	AllocatorManager.TableEntry256 f11; // 0xb000
	AllocatorManager.TableEntry256 f12; // 0xc000
	AllocatorManager.TableEntry256 f13; // 0xd000
	AllocatorManager.TableEntry256 f14; // 0xe000
	AllocatorManager.TableEntry256 f15; // 0xf000
};

struct SteamInventoryEligiblePromoItemDefIDs_t : ICallbackData {
	Result Result; // 0x0
	ulong SteamID; // 0x4
	int UmEligiblePromoItemDefs; // 0xc
	bool CachedData; // 0x10
};

struct AnimationOutputWeightProcessor.WeightInfo {
	Playable mixer; // 0x0
	Playable parentMixer; // 0x10
	int port; // 0x20
};

struct TMP_Text.SpecialCharacter {
	TMP_Character character; // 0x0
	TMP_FontAsset fontAsset; // 0x8
	Material material; // 0x10
	int materialIndex; // 0x18
};

struct AssociateWithClanResult_t : ICallbackData {
	Result Result; // 0x0
};

struct TimeZoneInfo.TIME_ZONE_INFORMATION {
	int Bias; // 0x0
	string StandardName; // 0x8
	TimeZoneInfo.SYSTEMTIME StandardDate; // 0x10
	int StandardBias; // 0x20
	string DaylightName; // 0x28
	TimeZoneInfo.SYSTEMTIME DaylightDate; // 0x30
	int DaylightBias; // 0x40
};

struct CylinderShapeFloatData {
	ConvexInternalShapeFloatData ConvexInternalShapeData; // 0x0
	int UpAxis; // 0x38
	int Padding; // 0x3c
};

struct DurationControl_t : ICallbackData {
	Result Result; // 0x0
	AppId Appid; // 0x4
	bool Applicable; // 0x8
	int CsecsLast5h; // 0xc
	DurationControlProgress Progress; // 0x10
	DurationControlNotification Otification; // 0x14
	int CsecsToday; // 0x18
	int CsecsRemaining; // 0x1c
};

struct AppProofOfPurchaseKeyResponse_t : ICallbackData {
	Result Result; // 0x0
	uint AppID; // 0x4
	uint CchKeyLength; // 0x8
	byte[] Key; // 0x10
};

struct SpotLight {
	int instanceID; // 0x0
	bool shadow; // 0x4
	LightMode mode; // 0x5
	Vector3 position; // 0x8
	Quaternion orientation; // 0x14
	LinearColor color; // 0x24
	LinearColor indirectColor; // 0x34
	float range; // 0x44
	float sphereRadius; // 0x48
	float coneAngle; // 0x4c
	float innerConeAngle; // 0x50
	FalloffType falloff; // 0x54
	AngularFalloffType angularFalloff; // 0x55
};

struct HTML_HideToolTip_t : ICallbackData {
	uint UnBrowserHandle; // 0x0
};

struct ChunkPtr8 {
	int Code; // 0x0
	int Length; // 0x4
	int UniqueInt1; // 0x8
	int UniqueInt2; // 0xc
	int DnaNR; // 0x10
	int NR; // 0x14
};

struct GetUserItemVoteResult_t : ICallbackData {
	PublishedFileId PublishedFileId; // 0x0
	Result Result; // 0x8
	bool VotedUp; // 0xc
	bool VotedDown; // 0xd
	bool VoteSkipped; // 0xe
};

struct InventoryItemId : IEquatable(InventoryItemId) {
	ulong Value; // 0x0
};

struct HTML_StartRequest_t : ICallbackData {
	uint UnBrowserHandle; // 0x0
	string PchURL; // 0x8
	string PchTarget; // 0x10
	string PchPostData; // 0x18
	bool BIsRedirect; // 0x20
};

struct RaycastResult {
	GameObject m_GameObject; // 0x0
	BaseRaycaster module; // 0x8
	float distance; // 0x10
	float index; // 0x14
	int depth; // 0x18
	int sortingLayer; // 0x1c
	int sortingOrder; // 0x20
	Vector3 worldPosition; // 0x24
	Vector3 worldNormal; // 0x30
	Vector2 screenPosition; // 0x3c
	int displayIndex; // 0x44
};

struct InventoryItem : IEquatable(InventoryItem) {
	InventoryItemId _id; // 0x0
	InventoryDefId _def; // 0x8
	SteamItemFlags _flags; // 0xc
	ushort _quantity; // 0x10
	Dictionary(string, string) _properties; // 0x18
};

struct PositionAndRotationStruct {
	Vector3 Position; // 0x0
	Vector3 Eular; // 0xc
};

struct Int32 : IComparable {
	int m_value; // 0x0
};

struct ActivityManager.FFIEvents {
	ActivityManager.FFIEvents.ActivityJoinHandler OnActivityJoin; // 0x0
	ActivityManager.FFIEvents.ActivitySpectateHandler OnActivitySpectate; // 0x8
	ActivityManager.FFIEvents.ActivityJoinRequestHandler OnActivityJoinRequest; // 0x10
	ActivityManager.FFIEvents.ActivityInviteHandler OnActivityInvite; // 0x18
};

struct ReservationNotificationCallback_t : ICallbackData {
	ulong BeaconID; // 0x0
	ulong SteamIDJoiner; // 0x8
};

struct GCHandle {
	int handle; // 0x0
};

struct PlayerNetworkState.hit : IComparable(PlayerNetworkState.hit) {
	float dst; // 0x0
	GameObject body; // 0x8
};

struct DiscLight {
	int instanceID; // 0x0
	bool shadow; // 0x4
	LightMode mode; // 0x5
	Vector3 position; // 0x8
	Quaternion orientation; // 0x14
	LinearColor color; // 0x24
	LinearColor indirectColor; // 0x34
	float range; // 0x44
	float radius; // 0x48
	FalloffType falloff; // 0x4c
};

struct XsdDuration {
	int years; // 0x0
	int months; // 0x4
	int days; // 0x8
	int hours; // 0xc
	int minutes; // 0x10
	int seconds; // 0x14
	uint nanoseconds; // 0x18
};

struct ParameterModifier {
	bool[] _byRef; // 0x0
};

struct Point {
	int x; // 0x0
	int y; // 0x4
};

struct GlyphRect : IEquatable(GlyphRect) {
	int m_X; // 0x0
	int m_Y; // 0x4
	int m_Width; // 0x8
	int m_Height; // 0xc
};

struct RuntimeEventHandle {
	IntPtr value; // 0x0
};

struct HTML_VerticalScroll_t : ICallbackData {
	uint UnBrowserHandle; // 0x0
	uint UnScrollMax; // 0x4
	uint UnScrollCurrent; // 0x8
	float FlPageScale; // 0xc
	bool BVisible; // 0x10
	uint UnPageSize; // 0x14
};

struct Guid.GuidResult {
	Guid parsedGuid; // 0x0
	Guid.GuidParseThrowStyle throwStyle; // 0x10
	Guid.ParseFailureKind m_failure; // 0x14
	string m_failureMessageID; // 0x18
	object m_failureMessageFormatArgument; // 0x20
	string m_failureArgumentName; // 0x28
	Exception m_innerException; // 0x30
};

struct TMP_GlyphAdjustmentRecord {
	uint m_GlyphIndex; // 0x0
	TMP_GlyphValueRecord m_GlyphValueRecord; // 0x4
};

struct Dispatch.CallbackMsg_t {
	HSteamUser m_hSteamUser; // 0x0
	CallbackType Type; // 0x4
	IntPtr Data; // 0x8
	int DataSize; // 0x10
};

struct RequestPlayersForGameResultCallback_t : ICallbackData {
	Result Result; // 0x0
	ulong LSearchID; // 0x4
	ulong SteamIDPlayerFound; // 0xc
	ulong SteamIDLobby; // 0x14
	RequestPlayersForGameResultCallback_t.PlayerAcceptState_t PlayerAcceptState; // 0x1c
	int PlayerIndex; // 0x20
	int TotalPlayersFound; // 0x24
	int TotalPlayersAcceptedGame; // 0x28
	int SuggestedTeamIndex; // 0x2c
	ulong LUniqueGameID; // 0x30
};

struct EndGamePlayer : IComparable(EndGamePlayer) {
	string PlayerName; // 0x0
	int PlayerScore; // 0x8
	byte RoomID; // 0xc
};

struct NumberOfCurrentPlayers_t : ICallbackData {
	byte Success; // 0x0
	int CPlayers; // 0x4
};

struct RuntimeFieldHandle : ISerializable {
	IntPtr value; // 0x0
};

struct HSteamPipe : IEquatable(HSteamPipe) {
	int Value; // 0x0
};

struct MicroTxnAuthorizationResponse_t : ICallbackData {
	uint AppID; // 0x0
	ulong OrderID; // 0x8
	byte Authorized; // 0x10
};

struct InventoryDefId : IEquatable(InventoryDefId) {
	int Value; // 0x0
};

struct EventProvider.SessionInfo {
	int sessionIdBit; // 0x0
	int etwSessionId; // 0x4
};

struct Dispatch.ResultCallback {
	Action continuation; // 0x0
	bool server; // 0x8
};

struct HlslFloat2 {
	float x; // 0x0
	float y; // 0x4
};

struct SteamNetworkingPOPID : IEquatable(SteamNetworkingPOPID) {
	uint Value; // 0x0
};

struct RuntimeStructs.RemoteClass {
	IntPtr default_vtable; // 0x0
	IntPtr xdomain_vtable; // 0x8
	RuntimeStructs.MonoClass* proxy_class; // 0x10
	IntPtr proxy_class_name; // 0x18
	uint interface_count; // 0x20
};

struct JSONDecoder.ScannerData {
	JObject Result; // 0x0
	int Index; // 0x8
};

struct RemoteStorageEnumerateUserSubscribedFilesResult_t : ICallbackData {
	Result Result; // 0x0
	int ResultsReturned; // 0x4
	int TotalResultCount; // 0x8
	PublishedFileId[] GPublishedFileId; // 0x10
	uint[] GRTimeSubscribed; // 0x18
};

struct SpinWait {
	int m_count; // 0x0
};

struct Variant {
	short vt; // 0x0
	ushort wReserved1; // 0x2
	ushort wReserved2; // 0x4
	ushort wReserved3; // 0x6
	BRECORD bRecord; // 0x8
	IntPtr pdispVal; // 0x8
	long llVal; // 0x8
	IntPtr bstrVal; // 0x8
	ulong ullVal; // 0x8
	byte bVal; // 0x8
	float fltVal; // 0x8
	double dblVal; // 0x8
	int lVal; // 0x8
	uint ulVal; // 0x8
	uint uintVal; // 0x8
	short iVal; // 0x8
	int intVal; // 0x8
	short boolVal; // 0x8
	ushort uiVal; // 0x8
	sbyte cVal; // 0x8
};

struct ImageDimensions {
	uint Width; // 0x0
	uint Height; // 0x4
};

struct Socket.WSABUF {
	int len; // 0x0
	IntPtr buf; // 0x8
};

struct RequestPlayersForGameProgressCallback_t : ICallbackData {
	Result Result; // 0x0
	ulong LSearchID; // 0x8
};

struct OAuth2Token {
	string AccessToken; // 0x0
	string Scopes; // 0x8
	long Expires; // 0x10
};

struct AppId {
	uint Value; // 0x0
};

struct PlayableBinding {
	string m_StreamName; // 0x0
	Object m_SourceObject; // 0x8
	Type m_SourceBindingType; // 0x10
	PlayableBinding.CreateOutputMethod m_CreateOutputMethod; // 0x18
};

struct PostProcessingData {
	ColorGradingMode gradingMode; // 0x0
	int lutSize; // 0x4
};

struct DebrisRenderer.Settings {
	RenderPassEvent renderPassEvent; // 0x0
	Mesh none; // 0x8
	Material MainMaterial; // 0x10
	Mesh MainMesh; // 0x18
	Color[] Colours; // 0x20
};

struct WheelInfoConstructionInfo {
	bool IsFrontWheel; // 0x0
	Vector3 ChassisConnectionCS; // 0x4
	float FrictionSlip; // 0x10
	float MaxSuspensionForce; // 0x14
	float MaxSuspensionTravelCm; // 0x18
	float SuspensionRestLength; // 0x1c
	float SuspensionStiffness; // 0x20
	Vector3 WheelAxleCS; // 0x24
	Vector3 WheelDirectionCS; // 0x30
	float WheelRadius; // 0x3c
	float WheelsDampingCompression; // 0x40
	float WheelsDampingRelaxation; // 0x44
};

struct SteamUGCRequestUGCDetailsResult_t : ICallbackData {
	SteamUGCDetails_t Details; // 0x0
	bool CachedData; // 0x88
};

struct ChangeNumOpenSlotsCallback_t : ICallbackData {
	Result Result; // 0x0
};

struct CameraData {
	Matrix4x4 m_ViewMatrix; // 0x0
	Matrix4x4 m_ProjectionMatrix; // 0x40
	Camera camera; // 0x80
	CameraRenderType renderType; // 0x88
	RenderTexture targetTexture; // 0x90
	RenderTextureDescriptor cameraTargetDescriptor; // 0x98
	Rect pixelRect; // 0xcc
	int pixelWidth; // 0xdc
	int pixelHeight; // 0xe0
	float aspectRatio; // 0xe4
	float renderScale; // 0xe8
	bool clearDepth; // 0xec
	CameraType cameraType; // 0xf0
	bool isDefaultViewport; // 0xf4
	bool isHdrEnabled; // 0xf5
	bool requiresDepthTexture; // 0xf6
	bool requiresOpaqueTexture; // 0xf7
	bool isSceneViewCamera; // 0xf8
	SortingCriteria defaultOpaqueSortFlags; // 0xfc
	bool isStereoEnabled; // 0x100
	int numberOfXRPasses; // 0x104
	bool isXRMultipass; // 0x108
	float maxShadowDistance; // 0x10c
	bool postProcessEnabled; // 0x110
	IEnumerator(Action(RenderTargetIdentifier, CommandBuffer)) captureActions; // 0x118
	LayerMask volumeLayerMask; // 0x120
	Transform volumeTrigger; // 0x128
	bool isStopNaNEnabled; // 0x130
	bool isDitheringEnabled; // 0x131
	AntialiasingMode antialiasing; // 0x134
	AntialiasingQuality antialiasingQuality; // 0x138
	ScriptableRenderer renderer; // 0x140
	bool resolveFinalTarget; // 0x148
};

struct GSClientKick_t : ICallbackData {
	ulong SteamID; // 0x0
	DenyReason DenyReason; // 0x8
};

struct TMP_LineInfo {
	int controlCharacterCount; // 0x0
	int characterCount; // 0x4
	int visibleCharacterCount; // 0x8
	int spaceCount; // 0xc
	int wordCount; // 0x10
	int firstCharacterIndex; // 0x14
	int firstVisibleCharacterIndex; // 0x18
	int lastCharacterIndex; // 0x1c
	int lastVisibleCharacterIndex; // 0x20
	float length; // 0x24
	float lineHeight; // 0x28
	float ascender; // 0x2c
	float baseline; // 0x30
	float descender; // 0x34
	float maxAdvance; // 0x38
	float width; // 0x3c
	float marginLeft; // 0x40
	float marginRight; // 0x44
	HorizontalAlignmentOptions alignment; // 0x48
	Extents lineExtents; // 0x4c
};

struct MusicPlayerWantsLooped_t : ICallbackData {
	bool Looped; // 0x0
};

struct SoftJointLimitSpring {
	float m_Spring; // 0x0
	float m_Damper; // 0x4
};

struct ParameterizedStrings.FormatParam {
	int _int32; // 0x0
	string _string; // 0x8
};

struct MonoIOStat {
	FileAttributes fileAttributes; // 0x0
	long Length; // 0x8
	long CreationTime; // 0x10
	long LastAccessTime; // 0x18
	long LastWriteTime; // 0x20
};

struct InputRecord {
	short EventType; // 0x0
	bool KeyDown; // 0x2
	short RepeatCount; // 0x4
	short VirtualKeyCode; // 0x6
	short VirtualScanCode; // 0x8
	char Character; // 0xa
	int ControlKeyState; // 0xc
	int pad1; // 0x10
	bool pad2; // 0x14
};

struct Resolution {
	int m_Width; // 0x0
	int m_Height; // 0x4
	int m_RefreshRate; // 0x8
};

struct UILineInfo {
	int startCharIdx; // 0x0
	int height; // 0x4
	float topY; // 0x8
	float leading; // 0xc
};

struct SteamServerInit {
	IPAddress IpAddress; // 0x0
	ushort SteamPort; // 0x8
	ushort GamePort; // 0xa
	ushort QueryPort; // 0xc
	bool Secure; // 0xe
	string VersionString; // 0x10
	string ModDir; // 0x18
	string GameDescription; // 0x20
	bool DedicatedServer; // 0x28
};

struct NetIdentity {
	NetIdentity.IdentityType type; // 0x0
	int size; // 0x4
	NetAddress netaddress; // 0x8
	ulong steamid; // 0x8
};

struct UserAchievement {
	long UserId; // 0x0
	long AchievementId; // 0x8
	byte PercentComplete; // 0x10
	string UnlockedAt; // 0x18
};

struct Discord.FFICreateParams {
	long ClientId; // 0x0
	ulong Flags; // 0x8
	IntPtr Events; // 0x10
	IntPtr EventData; // 0x18
	IntPtr ApplicationEvents; // 0x20
	uint ApplicationVersion; // 0x28
	IntPtr UserEvents; // 0x30
	uint UserVersion; // 0x38
	IntPtr ImageEvents; // 0x40
	uint ImageVersion; // 0x48
	IntPtr ActivityEvents; // 0x50
	uint ActivityVersion; // 0x58
	IntPtr RelationshipEvents; // 0x60
	uint RelationshipVersion; // 0x68
	IntPtr LobbyEvents; // 0x70
	uint LobbyVersion; // 0x78
	IntPtr NetworkEvents; // 0x80
	uint NetworkVersion; // 0x88
	IntPtr OverlayEvents; // 0x90
	uint OverlayVersion; // 0x98
	IntPtr StorageEvents; // 0xa0
	uint StorageVersion; // 0xa8
	IntPtr StoreEvents; // 0xb0
	uint StoreVersion; // 0xb8
	IntPtr VoiceEvents; // 0xc0
	uint VoiceVersion; // 0xc8
	IntPtr AchievementEvents; // 0xd0
	uint AchievementVersion; // 0xd8
};

struct NativeInputEventBuffer {
	void* eventBuffer; // 0x0
	int eventCount; // 0x8
	int sizeInBytes; // 0xc
	int capacityInBytes; // 0x10
};

struct CreateItemResult_t : ICallbackData {
	Result Result; // 0x0
	PublishedFileId PublishedFileId; // 0x8
	bool UserNeedsToAcceptWorkshopLegalAgreement; // 0x10
};

struct TransformUpdater.WorldOrderPositionRotation {
	Transform Transform; // 0x0
	Vector3 Position; // 0x8
	Quaternion Rotation; // 0x14
};

struct EventSource.Sha1ForNonSecretPurposes {
	long length; // 0x0
	uint[] w; // 0x8
	int pos; // 0x10
};

struct Light2DBlendStyle {
	bool enabled; // 0x0
	string name; // 0x8
	Light2DBlendStyle.TextureChannel maskTextureChannel; // 0x10
	float renderTextureScale; // 0x14
	Light2DBlendStyle.BlendMode blendMode; // 0x18
	Light2DBlendStyle.BlendFactors customBlendFactors; // 0x1c
};

struct SteamInventoryStartPurchaseResult_t : ICallbackData {
	Result Result; // 0x0
	ulong OrderID; // 0x8
	ulong TransID; // 0x10
};

struct UnityTls.unitytls_errorstate {
	uint magic; // 0x0
	UnityTls.unitytls_error_code code; // 0x4
	ulong reserved; // 0x8
};

struct CustomAttributeNamedArgument {
	CustomAttributeTypedArgument typedArgument; // 0x0
	MemberInfo memberInfo; // 0x10
};

struct MarketEligibilityResponse_t : ICallbackData {
	bool Allowed; // 0x0
	MarketNotAllowedReasonFlags NotAllowedReason; // 0x4
	uint TAllowedAtTime; // 0x8
	int CdaySteamGuardRequiredDays; // 0xc
	int CdayNewDeviceCooldown; // 0x10
};

struct math.IntFloatUnion {
	float floatValue; // 0x0
	int intValue; // 0x0
};

struct FixedBytes510 {
	FixedBytes16 offset0000; // 0x0
	FixedBytes16 offset0016; // 0x10
	FixedBytes16 offset0032; // 0x20
	FixedBytes16 offset0048; // 0x30
	FixedBytes16 offset0064; // 0x40
	FixedBytes16 offset0080; // 0x50
	FixedBytes16 offset0096; // 0x60
	FixedBytes16 offset0112; // 0x70
	FixedBytes16 offset0128; // 0x80
	FixedBytes16 offset0144; // 0x90
	FixedBytes16 offset0160; // 0xa0
	FixedBytes16 offset0176; // 0xb0
	FixedBytes16 offset0192; // 0xc0
	FixedBytes16 offset0208; // 0xd0
	FixedBytes16 offset0224; // 0xe0
	FixedBytes16 offset0240; // 0xf0
	FixedBytes16 offset0256; // 0x100
	FixedBytes16 offset0272; // 0x110
	FixedBytes16 offset0288; // 0x120
	FixedBytes16 offset0304; // 0x130
	FixedBytes16 offset0320; // 0x140
	FixedBytes16 offset0336; // 0x150
	FixedBytes16 offset0352; // 0x160
	FixedBytes16 offset0368; // 0x170
	FixedBytes16 offset0384; // 0x180
	FixedBytes16 offset0400; // 0x190
	FixedBytes16 offset0416; // 0x1a0
	FixedBytes16 offset0432; // 0x1b0
	FixedBytes16 offset0448; // 0x1c0
	FixedBytes16 offset0464; // 0x1d0
	FixedBytes16 offset0480; // 0x1e0
	byte byte0496; // 0x1f0
	byte byte0497; // 0x1f1
	byte byte0498; // 0x1f2
	byte byte0499; // 0x1f3
	byte byte0500; // 0x1f4
	byte byte0501; // 0x1f5
	byte byte0502; // 0x1f6
	byte byte0503; // 0x1f7
	byte byte0504; // 0x1f8
	byte byte0505; // 0x1f9
	byte byte0506; // 0x1fa
	byte byte0507; // 0x1fb
	byte byte0508; // 0x1fc
	byte byte0509; // 0x1fd
};

struct RemoteStoragePublishedFileDeleted_t : ICallbackData {
	PublishedFileId PublishedFileId; // 0x0
	AppId AppID; // 0x8
};

struct CullingResults : IEquatable(CullingResults) {
	IntPtr ptr; // 0x0
	CullingAllocationInfo* m_AllocationInfo; // 0x8
};

struct LogicalExpr.NodeSet {
	Query opnd; // 0x0
	XPathNavigator current; // 0x8
};

struct FriendsEnumerateFollowingList_t : ICallbackData {
	Result Result; // 0x0
	ulong[] GSteamID; // 0x8
	int ResultsReturned; // 0x10
	int TotalResultCount; // 0x14
};

struct BeforeRenderHelper.OrderBlock {
	int order; // 0x0
	UnityAction callback; // 0x8
};

struct Enum.EnumResult {
	object parsedEnum; // 0x0
	bool canThrow; // 0x8
	Enum.ParseFailureKind m_failure; // 0xc
	string m_failureMessageID; // 0x10
	string m_failureParameter; // 0x18
	object m_failureMessageFormatArgument; // 0x20
	Exception m_innerException; // 0x28
};

struct SteamId {
	ulong Value; // 0x0
};

struct IntervalTreeNode {
	long center; // 0x0
	int first; // 0x8
	int last; // 0xc
	int left; // 0x10
	int right; // 0x14
};

struct RectInt : IEquatable(RectInt) {
	int m_XMin; // 0x0
	int m_YMin; // 0x4
	int m_Width; // 0x8
	int m_Height; // 0xc
};

struct RenderGraphMutableResource {
	int (handle)k__BackingField; // 0x0
	RenderGraphResourceType (type)k__BackingField; // 0x4
	int (version)k__BackingField; // 0x8
};

struct Activity {
	ActivityType Type; // 0x0
	long ApplicationId; // 0x8
	string Name; // 0x10
	string State; // 0x18
	string Details; // 0x20
	ActivityTimestamps Timestamps; // 0x28
	ActivityAssets Assets; // 0x38
	ActivityParty Party; // 0x58
	ActivitySecrets Secrets; // 0x68
	bool Instance; // 0x80
};

struct Discord.FFIMethods {
	Discord.FFIMethods.DestroyHandler Destroy; // 0x0
	Discord.FFIMethods.RunCallbacksMethod RunCallbacks; // 0x8
	Discord.FFIMethods.SetLogHookMethod SetLogHook; // 0x10
	Discord.FFIMethods.GetApplicationManagerMethod GetApplicationManager; // 0x18
	Discord.FFIMethods.GetUserManagerMethod GetUserManager; // 0x20
	Discord.FFIMethods.GetImageManagerMethod GetImageManager; // 0x28
	Discord.FFIMethods.GetActivityManagerMethod GetActivityManager; // 0x30
	Discord.FFIMethods.GetRelationshipManagerMethod GetRelationshipManager; // 0x38
	Discord.FFIMethods.GetLobbyManagerMethod GetLobbyManager; // 0x40
	Discord.FFIMethods.GetNetworkManagerMethod GetNetworkManager; // 0x48
	Discord.FFIMethods.GetOverlayManagerMethod GetOverlayManager; // 0x50
	Discord.FFIMethods.GetStorageManagerMethod GetStorageManager; // 0x58
	Discord.FFIMethods.GetStoreManagerMethod GetStoreManager; // 0x60
	Discord.FFIMethods.GetVoiceManagerMethod GetVoiceManager; // 0x68
	Discord.FFIMethods.GetAchievementManagerMethod GetAchievementManager; // 0x70
};

struct RemoteStorageEnumerateUserPublishedFilesResult_t : ICallbackData {
	Result Result; // 0x0
	int ResultsReturned; // 0x4
	int TotalResultCount; // 0x8
	PublishedFileId[] GPublishedFileId; // 0x10
};

struct RegisterActivationCodeResponse_t : ICallbackData {
	RegisterActivationCodeResult Result; // 0x0
	uint PackageRegistered; // 0x4
};

struct MonoAssemblyName {
	IntPtr name; // 0x0
	IntPtr culture; // 0x8
	IntPtr hash_value; // 0x10
	IntPtr public_key; // 0x18
	MonoAssemblyName.(public_key_token)e__FixedBuffer public_key_token; // 0x20
	uint hash_alg; // 0x34
	uint hash_len; // 0x38
	uint flags; // 0x3c
	ushort major; // 0x40
	ushort minor; // 0x42
	ushort build; // 0x44
	ushort revision; // 0x46
	ushort arch; // 0x48
};

struct LeaderboardScoresDownloaded_t : ICallbackData {
	ulong SteamLeaderboard; // 0x0
	ulong SteamLeaderboardEntries; // 0x8
	int CEntryCount; // 0x10
};

struct FriendRichPresenceUpdate_t : ICallbackData {
	ulong SteamIDFriend; // 0x0
	AppId AppID; // 0x8
};

struct BrickInstance.Matrix {
	Vector3 Position; // 0x0
	Quaternion Rotation; // 0xc
	Vector3 Scale; // 0x1c
};

struct TMP_CharacterInfo {
	char character; // 0x0
	int index; // 0x4
	int stringLength; // 0x8
	TMP_TextElementType elementType; // 0xc
	TMP_TextElement textElement; // 0x10
	TMP_FontAsset fontAsset; // 0x18
	TMP_SpriteAsset spriteAsset; // 0x20
	int spriteIndex; // 0x28
	Material material; // 0x30
	int materialReferenceIndex; // 0x38
	bool isUsingAlternateTypeface; // 0x3c
	float pointSize; // 0x40
	int lineNumber; // 0x44
	int pageNumber; // 0x48
	int vertexIndex; // 0x4c
	TMP_Vertex vertex_BL; // 0x50
	TMP_Vertex vertex_TL; // 0x78
	TMP_Vertex vertex_TR; // 0xa0
	TMP_Vertex vertex_BR; // 0xc8
	Vector3 topLeft; // 0xf0
	Vector3 bottomLeft; // 0xfc
	Vector3 topRight; // 0x108
	Vector3 bottomRight; // 0x114
	float origin; // 0x120
	float xAdvance; // 0x124
	float ascender; // 0x128
	float baseLine; // 0x12c
	float descender; // 0x130
	float adjustedAscender; // 0x134
	float adjustedDescender; // 0x138
	float aspectRatio; // 0x13c
	float scale; // 0x140
	Color32 color; // 0x144
	Color32 underlineColor; // 0x148
	int underlineVertexIndex; // 0x14c
	Color32 strikethroughColor; // 0x150
	int strikethroughVertexIndex; // 0x154
	Color32 highlightColor; // 0x158
	HighlightState highlightState; // 0x15c
	FontStyles style; // 0x170
	bool isVisible; // 0x174
};

struct UserStatsStored_t : ICallbackData {
	ulong GameID; // 0x0
	Result Result; // 0x8
};

struct Single : IComparable {
	float m_value; // 0x0
};

struct TMP_MeshInfo {
	Mesh mesh; // 0x0
	int vertexCount; // 0x8
	Vector3[] vertices; // 0x10
	Vector3[] normals; // 0x18
	Vector4[] tangents; // 0x20
	Vector2[] uvs0; // 0x28
	Vector2[] uvs2; // 0x30
	Color32[] colors32; // 0x38
	int[] triangles; // 0x40
	Material material; // 0x48
};

struct GlobalStatsReceived_t : ICallbackData {
	ulong GameID; // 0x0
	Result Result; // 0x8
};

struct MeshGenerationResult : IEquatable(MeshGenerationResult) {
	MeshId (MeshId)k__BackingField; // 0x0
	Mesh (Mesh)k__BackingField; // 0x10
	MeshCollider (MeshCollider)k__BackingField; // 0x18
	MeshGenerationStatus (Status)k__BackingField; // 0x20
	MeshVertexAttributes (Attributes)k__BackingField; // 0x24
};

struct HTML_URLChanged_t : ICallbackData {
	uint UnBrowserHandle; // 0x0
	string PchURL; // 0x8
	string PchPostData; // 0x10
	bool BIsRedirect; // 0x18
	string PchPageTitle; // 0x20
	bool BNewNavigation; // 0x28
};

struct TransformUpdater.LocalOrderScale {
	Transform Transform; // 0x0
	Vector3 Scale; // 0x8
};

struct AReport {
	ulong Reporter; // 0x0
	ulong Reported; // 0x8
	ReportReason Reason; // 0x10
	DateTime ReportTime; // 0x18
};

struct FloatTween : ITweenValue {
	FloatTween.FloatTweenCallback m_Target; // 0x0
	float m_StartValue; // 0x8
	float m_TargetValue; // 0xc
	float m_Duration; // 0x10
	bool m_IgnoreTimeScale; // 0x14
};

struct ProfilingSample : IDisposable {
	CommandBuffer m_Cmd; // 0x0
	string m_Name; // 0x8
	bool m_Disposed; // 0x10
	CustomSampler m_Sampler; // 0x18
};

struct BRECORD {
	IntPtr pvRecord; // 0x0
	IntPtr pRecInfo; // 0x8
};

struct JobRanges {
	int BatchSize; // 0x0
	int NumJobs; // 0x4
	int TotalIterationCount; // 0x8
	int NumPhases; // 0xc
	IntPtr StartEndIndex; // 0x10
	IntPtr PhaseData; // 0x18
};

struct TankTurret.ZoomLevel {
	int Zoom; // 0x0
	float IndicatorShotDot; // 0x4
	float UIScale; // 0x8
};

struct UnSafeCharBuffer {
	char* m_buffer; // 0x0
	int m_totalSize; // 0x8
	int m_length; // 0xc
};

struct EventDispatcher.EventRecord {
	EventBase m_Event; // 0x0
	IPanel m_Panel; // 0x8
};

struct Vector3FloatData {
	Vector3FloatData.(floats)e__FixedBuffer floats; // 0x0
};

struct TexturePacker_JsonArray.SpriteFrame {
	float x; // 0x0
	float y; // 0x4
	float w; // 0x8
	float h; // 0xc
};

struct XRDisplaySubsystem.XRMirrorViewBlitDesc {
	IntPtr displaySubsystemInstance; // 0x0
	bool nativeBlitAvailable; // 0x8
	bool nativeBlitInvalidStates; // 0x9
	int blitParamsCount; // 0xc
};

struct Sku {
	long Id; // 0x0
	SkuType Type; // 0x8
	string Name; // 0x10
	SkuPrice Price; // 0x18
};

struct Generic6DofSpringConstraintFloatData {
	Generic6DofConstraintFloatData SixDofData; // 0x0
	Generic6DofSpringConstraintFloatData.(SpringEnabled)e__FixedBuffer SpringEnabled; // 0x108
	Generic6DofSpringConstraintFloatData.(EquilibriumPoint)e__FixedBuffer EquilibriumPoint; // 0x120
	Generic6DofSpringConstraintFloatData.(SpringStiffness)e__FixedBuffer SpringStiffness; // 0x138
	Generic6DofSpringConstraintFloatData.(SpringDamping)e__FixedBuffer SpringDamping; // 0x150
};

struct AvailableNations {
	bool USA; // 0x0
	bool RUS; // 0x1
	bool TER; // 0x2
};

struct Hashtable.bucket {
	object key; // 0x0
	object val; // 0x8
	int hash_coll; // 0x10
};

struct NightGoggle.mLightSource : IComparable(NightGoggle.mLightSource) {
	Vector3 worldPosition; // 0x0
	float Intensity; // 0xc
};

struct Rect : IEquatable(Rect) {
	float m_XMin; // 0x0
	float m_YMin; // 0x4
	float m_Width; // 0x8
	float m_Height; // 0xc
};

struct AnimationClipPlayable : IPlayable {
	PlayableHandle m_Handle; // 0x0
};

struct MusicPlayerSelectsPlaylistEntry_t : ICallbackData {
	int NID; // 0x0
};

struct TMP_FontWeightPair {
	TMP_FontAsset regularTypeface; // 0x0
	TMP_FontAsset italicTypeface; // 0x8
};

struct UInt16 : IComparable {
	ushort m_value; // 0x0
};

struct TransferedTeam {
	float RegisterTime; // 0x0
	Team Team; // 0x4
	Role Role; // 0x5
	int SquadIndex; // 0x8
	bool IsCaptain; // 0xc
	bool IsClanSquad; // 0xd
	string SquadName; // 0x10
};

struct ContourVertex {
	Vec3 Position; // 0x0
	object Data; // 0x10
};

struct GameServerChangeRequested_t : ICallbackData {
	byte[] Server; // 0x0
	byte[] Password; // 0x8
};

struct HighlightState {
	Color32 color; // 0x0
	TMP_Offset padding; // 0x4
};

struct SendMouseEvents.HitInfo {
	GameObject target; // 0x0
	Camera camera; // 0x8
};

struct TexturePlayableOutput : IPlayableOutput {
	PlayableOutputHandle m_Handle; // 0x0
};

struct LobbyManager.FFIEvents {
	LobbyManager.FFIEvents.LobbyUpdateHandler OnLobbyUpdate; // 0x0
	LobbyManager.FFIEvents.LobbyDeleteHandler OnLobbyDelete; // 0x8
	LobbyManager.FFIEvents.MemberConnectHandler OnMemberConnect; // 0x10
	LobbyManager.FFIEvents.MemberUpdateHandler OnMemberUpdate; // 0x18
	LobbyManager.FFIEvents.MemberDisconnectHandler OnMemberDisconnect; // 0x20
	LobbyManager.FFIEvents.LobbyMessageHandler OnLobbyMessage; // 0x28
	LobbyManager.FFIEvents.SpeakingHandler OnSpeaking; // 0x30
	LobbyManager.FFIEvents.NetworkMessageHandler OnNetworkMessage; // 0x38
};

struct PhotoCapture.PhotoCaptureResult {
	PhotoCapture.CaptureResultType resultType; // 0x0
	long hResult; // 0x8
};

struct RemoteStorageAppSyncedClient_t : ICallbackData {
	AppId AppID; // 0x0
	Result Result; // 0x4
	int NumDownloads; // 0x8
};

struct StoreManager.FFIEvents {
	StoreManager.FFIEvents.EntitlementCreateHandler OnEntitlementCreate; // 0x0
	StoreManager.FFIEvents.EntitlementDeleteHandler OnEntitlementDelete; // 0x8
};

struct FocusController.FocusedElement {
	VisualElement m_SubTreeRoot; // 0x0
	Focusable m_FocusedElement; // 0x8
};

struct VisibleLight : IEquatable(VisibleLight) {
	LightType m_LightType; // 0x0
	Color m_FinalColor; // 0x4
	Rect m_ScreenRect; // 0x14
	Matrix4x4 m_LocalToWorldMatrix; // 0x24
	float m_Range; // 0x64
	float m_SpotAngle; // 0x68
	int m_InstanceId; // 0x6c
	VisibleLightFlags m_Flags; // 0x70
};

struct ImageManager.FFIMethods {
	ImageManager.FFIMethods.FetchMethod Fetch; // 0x0
	ImageManager.FFIMethods.GetDimensionsMethod GetDimensions; // 0x8
	ImageManager.FFIMethods.GetDataMethod GetData; // 0x10
};

struct Squad.SquadRoles.SquadRoleStatus {
	Role role; // 0x0
	int Max; // 0x4
	int Current; // 0x8
};

struct TileAnimationData {
	Sprite[] m_AnimatedSprites; // 0x0
	float m_AnimationSpeed; // 0x8
	float m_AnimationStartTime; // 0xc
};

struct TransformUpdater.WorldOrderRotation {
	Transform Transform; // 0x0
	Quaternion Rotation; // 0x8
};

struct SteamAppInstalled_t : ICallbackData {
	AppId AppID; // 0x0
};

struct RuntimeStructs.GenericParamInfo {
	RuntimeStructs.MonoClass* pklass; // 0x0
	IntPtr name; // 0x8
	ushort flags; // 0x10
	uint token; // 0x14
	RuntimeStructs.MonoClass** constraints; // 0x18
};

struct PositionQuaternationScale {
	Vector3 Position; // 0x0
	Quaternion Rotation; // 0xc
	Vector3 Scale; // 0x1c
};

struct ShaderInput.LightData {
	Vector4 position; // 0x0
	Vector4 color; // 0x10
	Vector4 attenuation; // 0x20
	Vector4 spotDirection; // 0x30
	Vector4 occlusionProbeChannels; // 0x40
};

struct RuntimeClassHandle {
	RuntimeStructs.MonoClass* value; // 0x0
};

struct LobbySearchQuery {
	IntPtr MethodsPtr; // 0x0
	object MethodsStructure; // 0x8
};

struct StaticPlaneShapeFloatData {
	CollisionShapeFloatData CollisionShapeData; // 0x0
	Vector3FloatData LocalScaling; // 0x10
	Vector3FloatData PlaneNormal; // 0x20
	float PlaneConstant; // 0x30
	int Padding; // 0x34
};

struct AudioClipPlayable : IPlayable {
	PlayableHandle m_Handle; // 0x0
};

struct RasterState : IEquatable(RasterState) {
	CullMode m_CullingMode; // 0x0
	int m_OffsetUnits; // 0x4
	float m_OffsetFactor; // 0x8
	byte m_DepthClip; // 0xc
	byte m_Padding1; // 0xd
	byte m_Padding2; // 0xe
	byte m_Padding3; // 0xf
};

struct NetAddress {
	NetAddress.IPV4 ip; // 0x0
	ushort port; // 0x10
};

struct ShadowSliceData {
	Matrix4x4 viewMatrix; // 0x0
	Matrix4x4 projectionMatrix; // 0x40
	Matrix4x4 shadowTransform; // 0x80
	int offsetX; // 0xc0
	int offsetY; // 0xc4
	int resolution; // 0xc8
};

struct GetOPFSettingsResult_t : ICallbackData {
	Result Result; // 0x0
	AppId VideoAppID; // 0x4
};

struct GlyphPairAdjustmentRecord {
	GlyphAdjustmentRecord m_FirstAdjustmentRecord; // 0x0
	GlyphAdjustmentRecord m_SecondAdjustmentRecord; // 0x14
	FontFeatureLookupFlags m_FeatureLookupFlags; // 0x28
};

struct AllocatorManager.SmallAllocatorHandle {
	ushort Value; // 0x0
};

struct half : IEquatable(half) {
	ushort value; // 0x0
};

struct InputHandle_t : IEquatable(InputHandle_t) {
	ulong Value; // 0x0
};

struct SpriteState : IEquatable(SpriteState) {
	Sprite m_HighlightedSprite; // 0x0
	Sprite m_PressedSprite; // 0x8
	Sprite m_SelectedSprite; // 0x10
	Sprite m_DisabledSprite; // 0x18
};

struct ItemInstalled_t : ICallbackData {
	AppId AppID; // 0x0
	PublishedFileId PublishedFileId; // 0x8
};

struct NoiseTypeDescriptor {
	string name; // 0x0
	string outputDir; // 0x8
	string sourcePath; // 0x10
	NoiseDimensionFlags supportedDimensions; // 0x18
	List(HlslInput) inputStructDefinition; // 0x20
};

struct ContactFilter2D {
	bool useTriggers; // 0x0
	bool useLayerMask; // 0x1
	bool useDepth; // 0x2
	bool useOutsideDepth; // 0x3
	bool useNormalAngle; // 0x4
	bool useOutsideNormalAngle; // 0x5
	LayerMask layerMask; // 0x8
	float minDepth; // 0xc
	float maxDepth; // 0x10
	float minNormalAngle; // 0x14
	float maxNormalAngle; // 0x18
};

struct UnityTls.unitytls_key_ref {
	ulong handle; // 0x0
};

struct Hand : IEquatable(Hand) {
	ulong m_DeviceId; // 0x0
	uint m_FeatureIndex; // 0x8
};

struct ShadowDrawingSettings : IEquatable(ShadowDrawingSettings) {
	CullingResults m_CullingResults; // 0x0
	int m_LightIndex; // 0x10
	int m_UseRenderingLayerMaskTest; // 0x14
	ShadowSplitData m_SplitData; // 0x18
};

struct ParticleSystem.EmitParams {
	ParticleSystem.Particle m_Particle; // 0x0
	bool m_PositionSet; // 0x84
	bool m_VelocitySet; // 0x85
	bool m_AxisOfRotationSet; // 0x86
	bool m_RotationSet; // 0x87
	bool m_AngularVelocitySet; // 0x88
	bool m_StartSizeSet; // 0x89
	bool m_StartColorSet; // 0x8a
	bool m_RandomSeedSet; // 0x8b
	bool m_StartLifetimeSet; // 0x8c
	bool m_MeshIndexSet; // 0x8d
	bool m_ApplyShapeToPosition; // 0x8e
};

struct Matrix3x3FloatData {
	Vector3FloatData Element0; // 0x0
	Vector3FloatData Element1; // 0x10
	Vector3FloatData Element2; // 0x20
};

struct VehicleRootTransformUpdateJob : IJobParallelForTransform {
	float DeltaTime; // 0x0
	float TimeNow; // 0x4
};

struct CustomLODManager.buildingLodOrder {
	BuildingLOD obj; // 0x0
	int target; // 0x8
};

struct ConsoleScreenBufferInfo {
	Coord Size; // 0x0
	Coord CursorPosition; // 0x4
	short Attribute; // 0x8
	SmallRect Window; // 0xa
	Coord MaxWindowSize; // 0x12
};

struct Position {
	int symbol; // 0x0
	object particle; // 0x8
};

struct PersonaStateChange_t : ICallbackData {
	ulong SteamID; // 0x0
	int ChangeFlags; // 0x8
};

struct GlyphMetrics : IEquatable(GlyphMetrics) {
	float m_Width; // 0x0
	float m_Height; // 0x4
	float m_HorizontalBearingX; // 0x8
	float m_HorizontalBearingY; // 0xc
	float m_HorizontalAdvance; // 0x10
};

struct SemanticMeaning {
	string key; // 0x0
	string[] values; // 0x8
};

struct TypedReference {
	RuntimeTypeHandle type; // 0x0
	IntPtr Value; // 0x8
	IntPtr Type; // 0x10
};

struct PSNGameBootInviteResult_t : ICallbackData {
	bool GameBootInviteExists; // 0x0
	ulong SteamIDLobby; // 0x4
};

struct ContactPoint2D {
	Vector2 m_Point; // 0x0
	Vector2 m_Normal; // 0x8
	Vector2 m_RelativeVelocity; // 0x10
	float m_Separation; // 0x18
	float m_NormalImpulse; // 0x1c
	float m_TangentImpulse; // 0x20
	int m_Collider; // 0x24
	int m_OtherCollider; // 0x28
	int m_Rigidbody; // 0x2c
	int m_OtherRigidbody; // 0x30
	int m_Enabled; // 0x34
};

struct NetworkPackage {
	NetSerializer Package; // 0x0
	NetworkClient Sender; // 0x8
};

struct ParamsArray {
	object arg0; // 0x0
	object arg1; // 0x8
	object arg2; // 0x10
	object[] args; // 0x18
};

struct TexturePacker_JsonArray.Meta {
	string app; // 0x0
	string version; // 0x8
	string image; // 0x10
	string format; // 0x18
	TexturePacker_JsonArray.SpriteSize size; // 0x20
	float scale; // 0x28
	string smartupdate; // 0x30
};

struct SteamAPICallCompleted_t : ICallbackData {
	ulong AsyncCall; // 0x0
	int Callback; // 0x8
	uint ParamCount; // 0xc
};

struct VolumeHasChanged_t : ICallbackData {
	float NewVolume; // 0x0
};

struct LobbyCreated_t : ICallbackData {
	Result Result; // 0x0
	ulong SteamIDLobby; // 0x8
};

struct HTML_FinishedRequest_t : ICallbackData {
	uint UnBrowserHandle; // 0x0
	string PchURL; // 0x8
	string PchPageTitle; // 0x10
};

struct InputFeatureUsage : IEquatable(InputFeatureUsage) {
	string m_Name; // 0x0
	InputFeatureType m_InternalType; // 0x8
};

struct RemoteStoragePublishedFileUnsubscribed_t : ICallbackData {
	PublishedFileId PublishedFileId; // 0x0
	AppId AppID; // 0x8
};

struct GearConstraintFloatData {
	TypedConstraintFloatData TypedConstraintData; // 0x0
	Vector3FloatData AxisInA; // 0x40
	Vector3FloatData AxisInB; // 0x50
	float Ratio; // 0x60
	int Padding; // 0x64
};

struct CreateBeaconCallback_t : ICallbackData {
	Result Result; // 0x0
	ulong BeaconID; // 0x8
};

struct AllocatorManager.TableEntry256 {
	AllocatorManager.TableEntry16 f0; // 0x0
	AllocatorManager.TableEntry16 f1; // 0x100
	AllocatorManager.TableEntry16 f2; // 0x200
	AllocatorManager.TableEntry16 f3; // 0x300
	AllocatorManager.TableEntry16 f4; // 0x400
	AllocatorManager.TableEntry16 f5; // 0x500
	AllocatorManager.TableEntry16 f6; // 0x600
	AllocatorManager.TableEntry16 f7; // 0x700
	AllocatorManager.TableEntry16 f8; // 0x800
	AllocatorManager.TableEntry16 f9; // 0x900
	AllocatorManager.TableEntry16 f10; // 0xa00
	AllocatorManager.TableEntry16 f11; // 0xb00
	AllocatorManager.TableEntry16 f12; // 0xc00
	AllocatorManager.TableEntry16 f13; // 0xd00
	AllocatorManager.TableEntry16 f14; // 0xe00
	AllocatorManager.TableEntry16 f15; // 0xf00
};

struct GameRichPresenceJoinRequested_t : ICallbackData {
	ulong SteamIDFriend; // 0x0
	byte[] Connect; // 0x8
};

struct AnimationMixerPlayable : IPlayable {
	PlayableHandle m_Handle; // 0x0
};

struct ReaderWriterLockSlim.TimeoutTracker {
	int m_total; // 0x0
	int m_start; // 0x4
};

struct SafeStringMarshal : IDisposable {
	string str; // 0x0
	IntPtr marshaled_string; // 0x8
};

struct SearchForGameProgressCallback_t : ICallbackData {
	ulong LSearchID; // 0x0
	Result Result; // 0x8
	ulong LobbyID; // 0xc
	ulong SteamIDEndedSearch; // 0x14
	int SecondsRemainingEstimate; // 0x1c
	int CPlayersSearching; // 0x20
};

struct RenderTargetHandle {
	int (id)k__BackingField; // 0x0
};

struct TransformUpdater.LocalOrderPositionRotation {
	Transform Transform; // 0x0
	Vector3 Position; // 0x8
	Quaternion Rotation; // 0x14
};

struct CameraProperties : IEquatable(CameraProperties) {
	Rect screenRect; // 0x0
	Vector3 viewDir; // 0x10
	float projectionNear; // 0x1c
	float projectionFar; // 0x20
	float cameraNear; // 0x24
	float cameraFar; // 0x28
	float cameraAspect; // 0x2c
	Matrix4x4 cameraToWorld; // 0x30
	Matrix4x4 actualWorldToClip; // 0x70
	Matrix4x4 cameraClipToWorld; // 0xb0
	Matrix4x4 cameraWorldToClip; // 0xf0
	Matrix4x4 implicitProjection; // 0x130
	Matrix4x4 stereoWorldToClipLeft; // 0x170
	Matrix4x4 stereoWorldToClipRight; // 0x1b0
	Matrix4x4 worldToCamera; // 0x1f0
	Vector3 up; // 0x230
	Vector3 right; // 0x23c
	Vector3 transformDirection; // 0x248
	Vector3 cameraEuler; // 0x254
	Vector3 velocity; // 0x260
	float farPlaneWorldSpaceLength; // 0x26c
	uint rendererCount; // 0x270
	CameraProperties.(m_ShadowCullPlanes)e__FixedBuffer m_ShadowCullPlanes; // 0x274
	CameraProperties.(m_CameraCullPlanes)e__FixedBuffer m_CameraCullPlanes; // 0x2d4
	float baseFarDistance; // 0x334
	Vector3 shadowCullCenter; // 0x338
	CameraProperties.(layerCullDistances)e__FixedBuffer layerCullDistances; // 0x344
	int layerCullSpherical; // 0x3c4
	CoreCameraValues coreCameraValues; // 0x3c8
	uint cameraType; // 0x3d4
	int projectionIsOblique; // 0x3d8
	int isImplicitProjectionMatrix; // 0x3dc
};

struct OverlayManager.FFIEvents {
	OverlayManager.FFIEvents.ToggleHandler OnToggle; // 0x0
};

struct SimpleCollator.PreviousInfo {
	int Code; // 0x0
	byte* SortKey; // 0x8
};

struct HumanLimit {
	Vector3 m_Min; // 0x0
	Vector3 m_Max; // 0xc
	Vector3 m_Center; // 0x18
	float m_AxisLength; // 0x24
	int m_UseDefaultValues; // 0x28
};

struct GameConnectedChatLeave_t : ICallbackData {
	ulong SteamIDClanChat; // 0x0
	ulong SteamIDUser; // 0x8
	bool Kicked; // 0x10
	bool Dropped; // 0x11
};

struct TMP_Text.UnicodeChar {
	int unicode; // 0x0
	int stringIndex; // 0x4
	int length; // 0x8
};

struct Matrix4x4 : IEquatable(Matrix4x4) {
	float m00; // 0x0
	float m10; // 0x4
	float m20; // 0x8
	float m30; // 0xc
	float m01; // 0x10
	float m11; // 0x14
	float m21; // 0x18
	float m31; // 0x1c
	float m02; // 0x20
	float m12; // 0x24
	float m22; // 0x28
	float m32; // 0x2c
	float m03; // 0x30
	float m13; // 0x34
	float m23; // 0x38
	float m33; // 0x3c
};

struct InputActionSetHandle_t : IEquatable(InputActionSetHandle_t) {
	ulong Value; // 0x0
};

struct Presence {
	Status Status; // 0x0
	Activity Activity; // 0x8
};

struct TextGenerationSettings {
	Font font; // 0x0
	Color color; // 0x8
	int fontSize; // 0x18
	float lineSpacing; // 0x1c
	bool richText; // 0x20
	float scaleFactor; // 0x24
	FontStyle fontStyle; // 0x28
	TextAnchor textAnchor; // 0x2c
	bool alignByGeometry; // 0x30
	bool resizeTextForBestFit; // 0x31
	int resizeTextMinSize; // 0x34
	int resizeTextMaxSize; // 0x38
	bool updateBounds; // 0x3c
	VerticalWrapMode verticalOverflow; // 0x40
	HorizontalWrapMode horizontalOverflow; // 0x44
	Vector2 generationExtents; // 0x48
	Vector2 pivot; // 0x50
	bool generateOutOfBounds; // 0x58
};

struct GungameList.Step {
	AWeapon Weapon; // 0x0
	WeaponAttachmentData WeaponAttachments; // 0x8
	AGadget Gadget; // 0x10
	int ExtraSupplies; // 0x18
};

struct SteamRemotePlaySessionDisconnected_t : ICallbackData {
	uint SessionID; // 0x0
};

struct RemoteStorageSetUserPublishedFileActionResult_t : ICallbackData {
	Result Result; // 0x0
	PublishedFileId PublishedFileId; // 0x8
	WorkshopFileAction Action; // 0x10
};

struct HTML_BrowserReady_t : ICallbackData {
	uint UnBrowserHandle; // 0x0
};

struct RuntimeGenericParamInfoHandle {
	RuntimeStructs.GenericParamInfo* value; // 0x0
};

struct Dispatch.Callback {
	Action(IntPtr) action; // 0x0
	bool server; // 0x8
};

struct RemoteStorageFileShareResult_t : ICallbackData {
	Result Result; // 0x0
	ulong File; // 0x8
	byte[] Filename; // 0x10
};

struct GlyphValueRecord_Legacy {
	float xPlacement; // 0x0
	float yPlacement; // 0x4
	float xAdvance; // 0x8
	float yAdvance; // 0xc
};

struct Quaternion : IEquatable(Quaternion) {
	float x; // 0x0
	float X; // 0x0
	float Y; // 0x4
	float y; // 0x4
	float Z; // 0x8
	float z; // 0x8
	float w; // 0xc
	float W; // 0xc
};

struct APCBehaviour.VehicleState.Audio {
	float Volume; // 0x0
	float Pitch; // 0x4
};

struct TrackAsset.TransientBuildData {
	List(TrackAsset) trackList; // 0x0
	List(TimelineClip) clipList; // 0x8
	List(IMarker) markerList; // 0x10
};

struct SteamUGCQueryCompleted_t : ICallbackData {
	ulong Handle; // 0x0
	Result Result; // 0x8
	uint NumResultsReturned; // 0xc
	uint TotalMatchingResults; // 0x10
	bool CachedData; // 0x14
	byte[] NextCursor; // 0x18
};

struct ClanOfficerListResponse_t : ICallbackData {
	ulong SteamIDClan; // 0x0
	int COfficers; // 0x8
	byte Success; // 0xc
};

struct MusicPlayerSelectsQueueEntry_t : ICallbackData {
	int NID; // 0x0
};

struct DSAParameters {
	byte[] P; // 0x0
	byte[] Q; // 0x8
	byte[] G; // 0x10
	byte[] Y; // 0x18
	byte[] J; // 0x20
	byte[] X; // 0x28
	byte[] Seed; // 0x30
	int Counter; // 0x38
};

struct RemoteStorageAppSyncProgress_t : ICallbackData {
	byte[] CurrentFile; // 0x0
	AppId AppID; // 0x8
	uint BytesTransferredThisChunk; // 0xc
	double DAppPercentComplete; // 0x10
	bool Uploading; // 0x18
};

struct EventSource.EventData {
	long m_Ptr; // 0x0
	int m_Size; // 0x8
	int m_Reserved; // 0xc
};

struct EventDispatcherGate : IDisposable {
	EventDispatcher m_Dispatcher; // 0x0
};

struct RemoteStoragePublishFileProgress_t : ICallbackData {
	double DPercentFile; // 0x0
	bool Preview; // 0x8
};

struct RenderGraphBuilder : IDisposable {
	RenderGraph.RenderPass m_RenderPass; // 0x0
	RenderGraphResourceRegistry m_Resources; // 0x8
	bool m_Disposed; // 0x10
};

struct Sky {
	Cubemap cubemap; // 0x0
	float longitudeOffset; // 0x8
	float exposure; // 0xc
};

struct UnityTls.unitytls_tlsctx_protocolrange {
	UnityTls.unitytls_protocol min; // 0x0
	UnityTls.unitytls_protocol max; // 0x4
};

struct RuntimeStructs.GPtrArray {
	IntPtr* data; // 0x0
	int len; // 0x8
};

struct UnsafeNativeMethods.ManifestEtw.TRACE_PROVIDER_INSTANCE_INFO {
	int NextOffset; // 0x0
	int EnableCount; // 0x4
	int Pid; // 0x8
	int Flags; // 0xc
};

struct ScreenshotHandle : IEquatable(ScreenshotHandle) {
	uint Value; // 0x0
};

struct SkuPrice {
	uint Amount; // 0x0
	string Currency; // 0x8
};

struct Color32 {
	int rgba; // 0x0
	byte r; // 0x0
	byte g; // 0x1
	byte b; // 0x2
	byte a; // 0x3
};

struct CustomGradient.ColourKey {
	Color colour; // 0x0
	float time; // 0x10
};

struct VertexAttributeDescriptor : IEquatable(VertexAttributeDescriptor) {
	VertexAttribute (attribute)k__BackingField; // 0x0
	VertexAttributeFormat (format)k__BackingField; // 0x4
	int (dimension)k__BackingField; // 0x8
	int (stream)k__BackingField; // 0xc
};

struct Image : MaskableGraphic {
	uint Width; // 0x0
	uint Height; // 0x4
	byte[] Data; // 0x8
};

struct DictionaryEntry {
	object _key; // 0x0
	object _value; // 0x8
};

struct GamemodeSizeVarients {
	bool TinySizeAvailable; // 0x0
	bool SmallSizeAvailable; // 0x1
	bool MediumSizeAvailable; // 0x2
	bool BigSizeAvailable; // 0x3
	bool UlraSizeAvailable; // 0x4
};

struct DlcInstalled_t : ICallbackData {
	AppId AppID; // 0x0
};

struct CullingAllocationInfo {
	VisibleLight* visibleLightsPtr; // 0x0
	VisibleLight* visibleOffscreenVertexLightsPtr; // 0x8
	VisibleReflectionProbe* visibleReflectionProbesPtr; // 0x10
	int visibleLightCount; // 0x18
	int visibleOffscreenVertexLightCount; // 0x1c
	int visibleReflectionProbeCount; // 0x20
};

struct HeaderVariantInfo {
	string m_name; // 0x0
	CookieVariant m_variant; // 0x8
};

struct HebrewNumberParsingContext {
	HebrewNumber.HS state; // 0x0
	int result; // 0x4
};

struct ConsoleKeyInfo {
	char _keyChar; // 0x0
	ConsoleKey _key; // 0x4
	ConsoleModifiers _mods; // 0x8
};

struct BlendState : IEquatable(BlendState) {
	RenderTargetBlendState m_BlendState0; // 0x0
	RenderTargetBlendState m_BlendState1; // 0x8
	RenderTargetBlendState m_BlendState2; // 0x10
	RenderTargetBlendState m_BlendState3; // 0x18
	RenderTargetBlendState m_BlendState4; // 0x20
	RenderTargetBlendState m_BlendState5; // 0x28
	RenderTargetBlendState m_BlendState6; // 0x30
	RenderTargetBlendState m_BlendState7; // 0x38
	byte m_SeparateMRTBlendStates; // 0x40
	byte m_AlphaToMask; // 0x41
	short m_Padding; // 0x42
};

struct PaddedHeadAndTail {
	int Head; // 0x80
	int Tail; // 0x100
};

struct HTML_NewWindow_t : ICallbackData {
	uint UnBrowserHandle; // 0x0
	string PchURL; // 0x8
	uint UnX; // 0x10
	uint UnY; // 0x14
	uint UnWide; // 0x18
	uint UnTall; // 0x1c
	uint UnNewWindow_BrowserHandle_IGNORE; // 0x20
};

struct FaceInfo {
	int m_FaceIndex; // 0x0
	string m_FamilyName; // 0x8
	string m_StyleName; // 0x10
	int m_PointSize; // 0x18
	float m_Scale; // 0x1c
	float m_LineHeight; // 0x20
	float m_AscentLine; // 0x24
	float m_CapLine; // 0x28
	float m_MeanLine; // 0x2c
	float m_Baseline; // 0x30
	float m_DescentLine; // 0x34
	float m_SuperscriptOffset; // 0x38
	float m_SuperscriptSize; // 0x3c
	float m_SubscriptOffset; // 0x40
	float m_SubscriptSize; // 0x44
	float m_UnderlineOffset; // 0x48
	float m_UnderlineThickness; // 0x4c
	float m_StrikethroughOffset; // 0x50
	float m_StrikethroughThickness; // 0x54
	float m_TabWidth; // 0x58
};

struct LobbyDataUpdate_t : ICallbackData {
	ulong SteamIDLobby; // 0x0
	ulong SteamIDMember; // 0x8
	byte Success; // 0x10
};

struct DateTimeOffset : IComparable {
	DateTime m_dateTime; // 0x0
	short m_offsetMinutes; // 0x8
};

struct AnimationPosePlayable : IPlayable {
	PlayableHandle m_Handle; // 0x0
};

struct Entitlement {
	long Id; // 0x0
	EntitlementType Type; // 0x8
	long SkuId; // 0x10
};

struct TouchScreenKeyboard_InternalConstructorHelperArguments {
	uint keyboardType; // 0x0
	uint autocorrection; // 0x4
	uint multiline; // 0x8
	uint secure; // 0xc
	uint alert; // 0x10
	int characterLimit; // 0x14
};

struct RenderQueueRange : IEquatable(RenderQueueRange) {
	int m_LowerBound; // 0x0
	int m_UpperBound; // 0x4
};

struct MusicPlayerWantsVolume_t : ICallbackData {
	float NewVolume; // 0x0
};

struct RemoteStoragePublishedFileUpdated_t : ICallbackData {
	PublishedFileId PublishedFileId; // 0x0
	AppId AppID; // 0x8
	ulong Unused; // 0x10
};

struct NetView.RpcBuffers.MethodData {
	Action(NetSerializer) Target; // 0x0
	RPCPermissions Permissions; // 0x8
};

struct WheelHit {
	Vector3 m_Point; // 0x0
	Vector3 m_Normal; // 0xc
	Vector3 m_ForwardDir; // 0x18
	Vector3 m_SidewaysDir; // 0x24
	float m_Force; // 0x30
	float m_ForwardSlip; // 0x34
	float m_SidewaysSlip; // 0x38
	Collider m_Collider; // 0x40
};

struct AnimationStream {
	uint m_AnimatorBindingsVersion; // 0x0
	IntPtr constant; // 0x8
	IntPtr input; // 0x10
	IntPtr output; // 0x18
	IntPtr workspace; // 0x20
	IntPtr inputStreamAccessor; // 0x28
	IntPtr animationHandleBinder; // 0x30
};

struct AsyncMethodBuilderCore {
	IAsyncStateMachine m_stateMachine; // 0x0
	Action m_defaultContextAction; // 0x8
};

struct RemoteStorageEnumeratePublishedFilesByUserActionResult_t : ICallbackData {
	Result Result; // 0x0
	WorkshopFileAction Action; // 0x4
	int ResultsReturned; // 0x8
	int TotalResultCount; // 0xc
	PublishedFileId[] GPublishedFileId; // 0x10
	uint[] GRTimeUpdated; // 0x18
};

struct SteamInventoryResultReady_t : ICallbackData {
	int Handle; // 0x0
	Result Result; // 0x4
};

struct SByte : IComparable {
	sbyte m_value; // 0x0
};

struct RemoteStorageEnumerateWorkshopFilesResult_t : ICallbackData {
	Result Result; // 0x0
	int ResultsReturned; // 0x4
	int TotalResultCount; // 0x8
	PublishedFileId[] GPublishedFileId; // 0x10
	float[] GScore; // 0x18
	AppId AppId; // 0x20
	uint StartIndex; // 0x24
};

struct LobbyGameCreated_t : ICallbackData {
	ulong SteamIDLobby; // 0x0
	ulong SteamIDGameServer; // 0x8
	uint IP; // 0x10
	ushort Port; // 0x14
};

struct BitArray16 : IBitArray {
	ushort data; // 0x0
};

struct GetAuthSessionTicketResponse_t : ICallbackData {
	uint AuthTicket; // 0x0
	Result Result; // 0x4
};

struct SpriteIntermediateRendererInfo {
	int SpriteID; // 0x0
	int TextureID; // 0x4
	int MaterialID; // 0x8
	Color Color; // 0xc
	Matrix4x4 Transform; // 0x1c
	Bounds Bounds; // 0x5c
	int Layer; // 0x74
	int SortingLayer; // 0x78
	int SortingOrder; // 0x7c
	ulong SceneCullingMask; // 0x80
	IntPtr IndexData; // 0x88
	IntPtr VertexData; // 0x90
	int IndexCount; // 0x98
	int VertexCount; // 0x9c
	int ShaderChannelMask; // 0xa0
};

struct APCTurret.ZoomLevel {
	int Zoom; // 0x0
	float UIScale; // 0x4
};

struct RuntimeRemoteClassHandle {
	RuntimeStructs.RemoteClass* value; // 0x0
};

struct SetUserItemVoteResult_t : ICallbackData {
	PublishedFileId PublishedFileId; // 0x0
	Result Result; // 0x8
	bool VoteUp; // 0xc
};

struct PointLight {
	int instanceID; // 0x0
	bool shadow; // 0x4
	LightMode mode; // 0x5
	Vector3 position; // 0x8
	LinearColor color; // 0x14
	LinearColor indirectColor; // 0x24
	float range; // 0x34
	float sphereRadius; // 0x38
	FalloffType falloff; // 0x3c
};

struct JoinClanChatRoomCompletionResult_t : ICallbackData {
	ulong SteamIDClanChat; // 0x0
	RoomEnter ChatRoomEnterResponse; // 0x8
};

struct BulletPhysics.mCollisionOrder {
	CollisionObject target; // 0x0
	bool doRemove; // 0x8
};

struct TexturePacker_JsonArray.Frame {
	string filename; // 0x0
	TexturePacker_JsonArray.SpriteFrame frame; // 0x8
	bool rotated; // 0x18
	bool trimmed; // 0x19
	TexturePacker_JsonArray.SpriteFrame spriteSourceSize; // 0x1c
	TexturePacker_JsonArray.SpriteSize sourceSize; // 0x2c
	Vector2 pivot; // 0x34
};

struct TMP_PageInfo {
	int firstCharacterIndex; // 0x0
	int lastCharacterIndex; // 0x4
	float ascender; // 0x8
	float baseLine; // 0xc
	float descender; // 0x10
};

struct BitArray32 : IBitArray {
	uint data; // 0x0
};

struct Point2PointConstraintFloatData {
	TypedConstraintFloatData TypedConstraintData; // 0x0
	Vector3FloatData PivotInA; // 0x40
	Vector3FloatData PivotInB; // 0x50
};

struct Vector2Int : IEquatable(Vector2Int) {
	int m_X; // 0x0
	int m_Y; // 0x4
};

struct ActivityParty {
	string Id; // 0x0
	PartySize Size; // 0x8
};

struct Bone : IEquatable(Bone) {
	ulong m_DeviceId; // 0x0
	uint m_FeatureIndex; // 0x8
};

struct HSteamNetPollGroup : IEquatable(HSteamNetPollGroup) {
	uint Value; // 0x0
};

struct XmlCharType {
	byte[] charProperties; // 0x0
};

struct TransformAccess {
	IntPtr hierarchy; // 0x0
	int index; // 0x8
};

struct CancellationToken {
	CancellationTokenSource m_source; // 0x0
};

struct DepthState : IEquatable(DepthState) {
	byte m_WriteEnabled; // 0x0
	sbyte m_CompareFunction; // 0x1
};

struct RichTextTagAttribute {
	int nameHashCode; // 0x0
	int valueHashCode; // 0x4
	TagValueType valueType; // 0x8
	int valueStartIndex; // 0xc
	int valueLength; // 0x10
	TagUnitType unitType; // 0x14
};

struct SimpleCollator.Escape {
	string Source; // 0x0
	int Index; // 0x8
	int Start; // 0xc
	int End; // 0x10
	int Optional; // 0x14
};

struct CodePointIndexer.TableRange {
	int Start; // 0x0
	int End; // 0x4
	int Count; // 0x8
	int IndexStart; // 0xc
	int IndexEnd; // 0x10
};

struct LobbySearchQuery.FFIMethods {
	LobbySearchQuery.FFIMethods.FilterMethod Filter; // 0x0
	LobbySearchQuery.FFIMethods.SortMethod Sort; // 0x8
	LobbySearchQuery.FFIMethods.LimitMethod Limit; // 0x10
	LobbySearchQuery.FFIMethods.DistanceMethod Distance; // 0x18
};

struct XsdDateTime {
	DateTime dt; // 0x0
	uint extra; // 0x8
};

struct GlyphAdjustmentRecord {
	uint m_GlyphIndex; // 0x0
	GlyphValueRecord m_GlyphValueRecord; // 0x4
};

struct TimeSpanFormat.FormatLiterals {
	string AppCompatLiteral; // 0x0
	int dd; // 0x8
	int hh; // 0xc
	int mm; // 0x10
	int ss; // 0x14
	int ff; // 0x18
	string[] literals; // 0x20
};

struct CustomLODManager.dynamicDistancebasedLodOrder {
	DynamicDistanceBasedLOD obj; // 0x0
	int target; // 0x8
};

struct PostProcessingQuad.PostProcessingQuadSettings {
	RenderPassEvent renderPassEvent; // 0x0
};

struct RuntimeGPtrArrayHandle {
	RuntimeStructs.GPtrArray* value; // 0x0
};

struct CullingGroupEvent {
	int m_Index; // 0x0
	byte m_PrevState; // 0x4
	byte m_ThisState; // 0x5
};

struct Vector4 : IEquatable(Vector4) {
	float x; // 0x0
	float X; // 0x0
	float y; // 0x4
	float Y; // 0x4
	float z; // 0x8
	float Z; // 0x8
	float W; // 0xc
	float w; // 0xc
};

struct ActivityManager.FFIMethods {
	ActivityManager.FFIMethods.RegisterCommandMethod RegisterCommand; // 0x0
	ActivityManager.FFIMethods.RegisterSteamMethod RegisterSteam; // 0x8
	ActivityManager.FFIMethods.UpdateActivityMethod UpdateActivity; // 0x10
	ActivityManager.FFIMethods.ClearActivityMethod ClearActivity; // 0x18
	ActivityManager.FFIMethods.SendRequestReplyMethod SendRequestReply; // 0x20
	ActivityManager.FFIMethods.SendInviteMethod SendInvite; // 0x28
	ActivityManager.FFIMethods.AcceptInviteMethod AcceptInvite; // 0x30
};

struct UnsafeNativeMethods.ManifestEtw.EVENT_FILTER_DESCRIPTOR {
	long Ptr; // 0x0
	int Size; // 0x8
	int Type; // 0xc
};

struct VoiceManager.FFIEvents {
	VoiceManager.FFIEvents.SettingsUpdateHandler OnSettingsUpdate; // 0x0
};

struct LoadSceneParameters {
	LoadSceneMode m_LoadSceneMode; // 0x0
	LocalPhysicsMode m_LocalPhysicsMode; // 0x4
};

struct LogicalCallContext.Reader {
	LogicalCallContext m_ctx; // 0x0
};

struct StoreAuthURLResponse_t : ICallbackData {
	byte[] URL; // 0x0
};

struct Matrix : IEquatable(Matrix) {
	float M11; // 0x0
	float M12; // 0x4
	float M13; // 0x8
	float M14; // 0xc
	float M21; // 0x10
	float M22; // 0x14
	float M23; // 0x18
	float M24; // 0x1c
	float M31; // 0x20
	float M32; // 0x24
	float M33; // 0x28
	float M34; // 0x2c
	float M41; // 0x30
	float M42; // 0x34
	float M43; // 0x38
	float M44; // 0x3c
};

struct UserAchievementIconFetched_t : ICallbackData {
	GameId GameID; // 0x0
	byte[] AchievementName; // 0x8
	bool Achieved; // 0x10
	int IconHandle; // 0x14
};

struct TimeNotificationBehaviour.NotificationEntry {
	double time; // 0x0
	INotification payload; // 0x8
	bool notificationFired; // 0x10
	NotificationFlags flags; // 0x12
};

struct HTML_ChangedTitle_t : ICallbackData {
	uint UnBrowserHandle; // 0x0
	string PchTitle; // 0x8
};

struct VideoCapture.VideoCaptureResult {
	VideoCapture.CaptureResultType resultType; // 0x0
	long hResult; // 0x8
};

struct AchievementManager.FFIEvents {
	AchievementManager.FFIEvents.UserAchievementUpdateHandler OnUserAchievementUpdate; // 0x0
};

struct ContactPoint {
	Vector3 m_Point; // 0x0
	Vector3 m_Normal; // 0xc
	int m_ThisColliderInstanceID; // 0x18
	int m_OtherColliderInstanceID; // 0x1c
	float m_Separation; // 0x20
};

struct NativeOverlapped {
	IntPtr InternalLow; // 0x0
	IntPtr InternalHigh; // 0x8
	int OffsetLow; // 0x10
	int OffsetHigh; // 0x14
	IntPtr EventHandle; // 0x18
};

struct Buildable.State {
	GameObject StateObject; // 0x0
	Mesh GhostMesh; // 0x8
	float MinimumHP; // 0x10
};

struct ScriptableCullingParameters : IEquatable(ScriptableCullingParameters) {
	int m_IsOrthographic; // 0x0
	LODParameters m_LODParameters; // 0x4
	ScriptableCullingParameters.(m_CullingPlanes)e__FixedBuffer m_CullingPlanes; // 0x20
	int m_CullingPlaneCount; // 0xc0
	uint m_CullingMask; // 0xc4
	ulong m_SceneMask; // 0xc8
	ScriptableCullingParameters.(m_LayerFarCullDistances)e__FixedBuffer m_LayerFarCullDistances; // 0xd0
	int m_LayerCull; // 0x150
	Matrix4x4 m_CullingMatrix; // 0x154
	Vector3 m_Origin; // 0x194
	float m_ShadowDistance; // 0x1a0
	CullingOptions m_CullingOptions; // 0x1a4
	ReflectionProbeSortingCriteria m_ReflectionProbeSortingCriteria; // 0x1a8
	CameraProperties m_CameraProperties; // 0x1ac
	float m_AccurateOcclusionThreshold; // 0x58c
	int m_MaximumPortalCullingJobs; // 0x590
	Matrix4x4 m_StereoViewMatrix; // 0x594
	Matrix4x4 m_StereoProjectionMatrix; // 0x5d4
	float m_StereoSeparationDistance; // 0x614
	int m_maximumVisibleLights; // 0x618
};

struct RuntimeStructs.HandleStackMark {
	int size; // 0x0
	int interior_size; // 0x4
	IntPtr chunk; // 0x8
};

struct ShadowUtility.Edge : IComparable(ShadowUtility.Edge) {
	int vertexIndex0; // 0x0
	int vertexIndex1; // 0x4
	Vector4 tangent; // 0x8
	bool compareReversed; // 0x18
};

struct SquadAbility.GamemodeVariables {
	bool TinySizeAvailable; // 0x0
	bool SmallSizeAvailable; // 0x1
	bool MediumSizeAvailable; // 0x2
	bool BigSizeAvailable; // 0x3
	bool UlraSizeAvailable; // 0x4
};

struct Coord {
	short X; // 0x0
	short Y; // 0x2
};

struct RemoteStorageUserVoteDetails_t : ICallbackData {
	Result Result; // 0x0
	PublishedFileId PublishedFileId; // 0x8
	WorkshopVote Vote; // 0x10
};

struct HTML_OpenLinkInNewTab_t : ICallbackData {
	uint UnBrowserHandle; // 0x0
	string PchURL; // 0x8
};

struct StyleColor : IStyleValue(Color) {
	StyleKeyword m_Keyword; // 0x0
	Color m_Value; // 0x4
	int m_Specificity; // 0x14
};

struct CoreUnsafeUtils.FixedBufferStringQueue {
	byte* m_ReadCursor; // 0x0
	byte* m_WriteCursor; // 0x8
	byte* m_BufferEnd; // 0x10
	byte* m_BufferStart; // 0x18
	int m_BufferLength; // 0x20
	int (Count)k__BackingField; // 0x24
};

struct Guid : IFormattable {
	int _a; // 0x0
	short _b; // 0x4
	short _c; // 0x6
	byte _d; // 0x8
	byte _e; // 0x9
	byte _f; // 0xa
	byte _g; // 0xb
	byte _h; // 0xc
	byte _i; // 0xd
	byte _j; // 0xe
	byte _k; // 0xf
};

struct Grass {
	GrassIdentity Renderer; // 0x0
	Vector3 position; // 0x8
	Quaternion rotation; // 0x14
	Vector3 scale; // 0x24
	Matrix4x4 localToWorld; // 0x30
};

struct ProfilerMarker.AutoScope : IDisposable {
	IntPtr m_Ptr; // 0x0
};

struct AttachmentManager.BlurArguments {
	bool Active; // 0x0
	float Distance; // 0x4
	float Lenght; // 0x8
};

struct RelationshipManager.FFIEvents {
	RelationshipManager.FFIEvents.RefreshHandler OnRefresh; // 0x0
	RelationshipManager.FFIEvents.RelationshipUpdateHandler OnRelationshipUpdate; // 0x8
};

struct RangeInt {
	int start; // 0x0
	int length; // 0x4
};

struct BoatState.Audio {
	float Volume; // 0x0
	float Pitch; // 0x4
};

struct LightDataGI {
	int instanceID; // 0x0
	LinearColor color; // 0x4
	LinearColor indirectColor; // 0x14
	Quaternion orientation; // 0x24
	Vector3 position; // 0x34
	float range; // 0x40
	float coneAngle; // 0x44
	float innerConeAngle; // 0x48
	float shape0; // 0x4c
	float shape1; // 0x50
	LightType type; // 0x54
	LightMode mode; // 0x55
	byte shadow; // 0x56
	FalloffType falloff; // 0x57
};

struct Hash128 : IComparable {
	uint m_u32_0; // 0x0
	uint m_u32_1; // 0x4
	uint m_u32_2; // 0x8
	uint m_u32_3; // 0xc
};

struct ArgIterator {
	IntPtr sig; // 0x0
	IntPtr args; // 0x8
	int next_arg; // 0x10
	int num_args; // 0x14
};

struct RTHandleProperties {
	Vector2Int previousViewportSize; // 0x0
	Vector2Int previousRenderTargetSize; // 0x8
	Vector2Int currentViewportSize; // 0x10
	Vector2Int currentRenderTargetSize; // 0x18
	Vector4 rtHandleScale; // 0x20
};

struct TMP_Text.CharacterSubstitution {
	int index; // 0x0
	uint unicode; // 0x4
};

struct SpookyHash.U {
	ulong* p64; // 0x0
	ushort* p8; // 0x0
	ulong i; // 0x0
	uint* p32; // 0x0
};

struct CrossAppDomainSink.ProcessMessageRes {
	byte[] arrResponse; // 0x0
	CADMethodReturnMessage cadMrm; // 0x8
};

struct BoundingSphere {
	Vector3 position; // 0x0
	float radius; // 0xc
};

struct Win32_FIXED_INFO {
	string HostName; // 0x0
	string DomainName; // 0x8
	IntPtr CurrentDnsServer; // 0x10
	Win32_IP_ADDR_STRING DnsServerList; // 0x18
	NetBiosNodeType NodeType; // 0x38
	string ScopeId; // 0x40
	uint EnableRouting; // 0x48
	uint EnableProxy; // 0x4c
	uint EnableDns; // 0x50
};

struct Vector2 : IEquatable(Vector2) {
	float x; // 0x0
	float y; // 0x4
};

struct PlayerToolsProgess.ToolValues {
	uint Value0; // 0x0
	uint Value1; // 0x4
};

struct HttpWebRequest.AuthorizationState {
	HttpWebRequest request; // 0x0
	bool isProxy; // 0x8
	bool isCompleted; // 0x9
	HttpWebRequest.NtlmAuthState ntlm_auth_state; // 0xc
};

struct TimeZoneInfo.DYNAMIC_TIME_ZONE_INFORMATION {
	TimeZoneInfo.TIME_ZONE_INFORMATION TZI; // 0x0
	string TimeZoneKeyName; // 0x48
	byte DynamicDaylightTimeDisabled; // 0x50
};

struct JSONStreamEncoder.EncoderContext {
	bool IsObject; // 0x0
	bool IsEmpty; // 0x1
};

struct UnknownPackage {
	IPEndPoint Sender; // 0x0
	NetSerializer HailPackage; // 0x8
};

struct ClientGameServerDeny_t : ICallbackData {
	uint AppID; // 0x0
	uint GameServerIP; // 0x4
	ushort GameServerPort; // 0x8
	ushort Secure; // 0xa
	uint Reason; // 0xc
};

struct RaycastInfo {
	Vector3 ContactNormalWS; // 0x0
	Vector3 ContactPointWS; // 0xc
	object GroundObject; // 0x18
	Vector3 HardPointWS; // 0x20
	bool IsInContact; // 0x2c
	float SuspensionLength; // 0x30
	Vector3 WheelAxleWS; // 0x34
	Vector3 WheelDirectionWS; // 0x40
};

struct ActivityTimestamps {
	long Start; // 0x0
	long End; // 0x8
};

struct Utf8StringPointer {
	IntPtr ptr; // 0x0
};

struct TMP_SpriteInfo {
	int spriteIndex; // 0x0
	int characterIndex; // 0x4
	int vertexIndex; // 0x8
};

struct BakedGrass {
	Mesh Mesh; // 0x0
	Material LOD0; // 0x8
	Material LOD1; // 0x10
	Material LOD2; // 0x18
	int TargetLOD; // 0x20
	Material SetMaterial; // 0x28
};

struct SearchForGameResultCallback_t : ICallbackData {
	ulong LSearchID; // 0x0
	Result Result; // 0x8
	int CountPlayersInGame; // 0xc
	int CountAcceptedGame; // 0x10
	ulong SteamIDHost; // 0x14
	bool FinalCallback; // 0x1c
};

struct AudioPlayableOutput : IPlayableOutput {
	PlayableOutputHandle m_Handle; // 0x0
};

struct RenderGraphContext {
	ScriptableRenderContext renderContext; // 0x0
	CommandBuffer cmd; // 0x8
	RenderGraphObjectPool renderGraphPool; // 0x10
	RenderGraphResourceRegistry resources; // 0x18
};

struct TransformUpdater.LocalOrderPosition {
	Transform Transform; // 0x0
	Vector3 Position; // 0x8
};

struct SteamInventoryResult_t : IEquatable(SteamInventoryResult_t) {
	int Value; // 0x0
};

struct UserManager.FFIMethods {
	UserManager.FFIMethods.GetCurrentUserMethod GetCurrentUser; // 0x0
	UserManager.FFIMethods.GetUserMethod GetUser; // 0x8
	UserManager.FFIMethods.GetCurrentUserPremiumTypeMethod GetCurrentUserPremiumType; // 0x10
	UserManager.FFIMethods.CurrentUserHasFlagMethod CurrentUserHasFlag; // 0x18
};

struct ChunkPtr4 {
	int Code; // 0x0
	int Length; // 0x4
	int UniqueInt1; // 0x8
	int DnaNR; // 0xc
	int NR; // 0x10
};

struct ProfilerMarker {
	IntPtr m_Ptr; // 0x0
};

struct Array.SorterObjectArray {
	object[] keys; // 0x0
	object[] items; // 0x8
	IComparer comparer; // 0x10
};

struct TimeZoneInfo.TransitionTime : IEquatable(TimeZoneInfo.TransitionTime) {
	DateTime m_timeOfDay; // 0x0
	byte m_month; // 0x8
	byte m_week; // 0x9
	byte m_day; // 0xa
	DayOfWeek m_dayOfWeek; // 0xc
	bool m_isFixedDateRule; // 0x10
};

struct TreeInstance {
	Vector3 position; // 0x0
	float widthScale; // 0xc
	float heightScale; // 0x10
	float rotation; // 0x14
	Color32 color; // 0x18
	Color32 lightmapColor; // 0x1c
	int prototypeIndex; // 0x20
	float temporaryDistance; // 0x24
};

struct UICharInfo {
	Vector2 cursorPos; // 0x0
	float charWidth; // 0x8
};

struct UIVertex {
	Vector3 position; // 0x0
	Vector3 normal; // 0xc
	Vector4 tangent; // 0x18
	Color32 color; // 0x28
	Vector2 uv0; // 0x2c
	Vector2 uv1; // 0x34
	Vector2 uv2; // 0x3c
	Vector2 uv3; // 0x44
};

struct UserManager.FFIEvents {
	UserManager.FFIEvents.CurrentUserUpdateHandler OnCurrentUserUpdate; // 0x0
};

struct XRNodeState {
	XRNode m_Type; // 0x0
	AvailableTrackingData m_AvailableFields; // 0x4
	Vector3 m_Position; // 0x8
	Quaternion m_Rotation; // 0x14
	Vector3 m_Velocity; // 0x24
	Vector3 m_AngularVelocity; // 0x30
	Vector3 m_Acceleration; // 0x3c
	Vector3 m_AngularAcceleration; // 0x48
	int m_Tracked; // 0x54
	ulong m_UniqueID; // 0x58
};

struct LinearColor {
	float m_red; // 0x0
	float m_green; // 0x4
	float m_blue; // 0x8
	float m_intensity; // 0xc
};

