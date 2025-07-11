// Class MediaAssets.MediaSource
// Size: 0x80 (Inherited: 0x28)
struct UMediaSource : UObject {
	char pad_28[0x58]; // 0x28(0x58)

	bool Validate(); // Function MediaAssets.MediaSource.Validate // (NetReliableNetRequest|Exec|NetResponse|Static|NetMulticast|MulticastDelegate|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d5500
	void SetMediaOptionString(struct FName& Key, struct FString Value); // Function MediaAssets.MediaSource.SetMediaOptionString // (Net|NetReliableNetRequest|Native|NetResponse|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d5080
	void SetMediaOptionInt64(struct FName& Key, int64_t Value); // Function MediaAssets.MediaSource.SetMediaOptionInt64 // (NetRequest|Native|NetResponse|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d5080
	void SetMediaOptionFloat(struct FName& Key, float Value); // Function MediaAssets.MediaSource.SetMediaOptionFloat // (Net|Native|NetResponse|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d5080
	void SetMediaOptionBool(struct FName& Key, bool Value); // Function MediaAssets.MediaSource.SetMediaOptionBool // (NetReliableNetRequest|Exec|NetResponse|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d5080
	struct FString GetUrl(); // Function MediaAssets.MediaSource.GetUrl // (Net|NetReliableNative|Event|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d5080
};

// Class MediaAssets.BaseMediaSource
// Size: 0x88 (Inherited: 0x80)
struct UBaseMediaSource : UMediaSource {
	struct FName playerName; // 0x80(0x08)
};

// Class MediaAssets.FileMediaSource
// Size: 0xb0 (Inherited: 0x88)
struct UFileMediaSource : UBaseMediaSource {
	struct FString FilePath; // 0x88(0x10)
	bool PrecacheFile; // 0x98(0x01)
	char pad_99[0x17]; // 0x99(0x17)

	void SetFilePath(struct FString Path); // Function MediaAssets.FileMediaSource.SetFilePath // (Net|Exec|NetResponse|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170f280
};

// Class MediaAssets.MediaBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMediaBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void EnumerateWebcamCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices // (Net|NetReliableNetRequest|Exec|Event|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170f040
	void EnumerateVideoCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices // (NetReliableExec|Event|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170f280
	void EnumerateAudioCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices // (Net|NetRequest|Event|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170f280
};

// Class MediaAssets.MediaComponent
// Size: 0xc0 (Inherited: 0xb0)
struct UMediaComponent : UActorComponent {
	struct UMediaTexture* MediaTexture; // 0xb0(0x08)
	struct UMediaPlayer* MediaPlayer; // 0xb8(0x08)

	struct UMediaTexture* GetMediaTexture(); // Function MediaAssets.MediaComponent.GetMediaTexture // (Net|NetRequest|Exec|Native|NetMulticast|MulticastDelegate|Private|Protected|HasOutParms|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaComponent.GetMediaPlayer // (NetReliableExec|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170f040
};

// Class MediaAssets.MediaPlayer
// Size: 0x138 (Inherited: 0x28)
struct UMediaPlayer : UObject {
	struct FMulticastInlineDelegate OnEndReached; // 0x28(0x10)
	struct FMulticastInlineDelegate OnMediaClosed; // 0x38(0x10)
	struct FMulticastInlineDelegate OnMediaOpened; // 0x48(0x10)
	struct FMulticastInlineDelegate OnMediaOpenFailed; // 0x58(0x10)
	struct FMulticastInlineDelegate OnPlaybackResumed; // 0x68(0x10)
	struct FMulticastInlineDelegate OnPlaybackSuspended; // 0x78(0x10)
	struct FMulticastInlineDelegate OnSeekCompleted; // 0x88(0x10)
	struct FMulticastInlineDelegate OnTracksChanged; // 0x98(0x10)
	struct FTimespan CacheAhead; // 0xa8(0x08)
	struct FTimespan CacheBehind; // 0xb0(0x08)
	struct FTimespan CacheBehindGame; // 0xb8(0x08)
	bool NativeAudioOut; // 0xc0(0x01)
	bool PlayOnOpen; // 0xc1(0x01)
	char pad_C2[0x2]; // 0xc2(0x02)
	char Shuffle : 1; // 0xc4(0x01)
	char Loop : 1; // 0xc4(0x01)
	char pad_C4_2 : 6; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	struct UMediaPlaylist* Playlist; // 0xc8(0x08)
	int32_t PlaylistIndex; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FTimespan TimeDelay; // 0xd8(0x08)
	float HorizontalFieldOfView; // 0xe0(0x04)
	float VerticalFieldOfView; // 0xe4(0x04)
	struct FRotator ViewRotation; // 0xe8(0x0c)
	char pad_F4[0x2c]; // 0xf4(0x2c)
	struct FGuid PlayerGuid; // 0x120(0x10)
	char pad_130[0x8]; // 0x130(0x08)

	bool SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking // (Static|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ebc0
	bool SupportsScrubbing(); // Function MediaAssets.MediaPlayer.SupportsScrubbing // (Net|NetReliableNetRequest|Exec|Native|Event|NetResponse|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool SupportsRate(float Rate, bool Unthinned); // Function MediaAssets.MediaPlayer.SupportsRate // (NetRequest|Exec|Native|Event|NetResponse|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool SetViewRotation(struct FRotator& Rotation, bool Absolute); // Function MediaAssets.MediaPlayer.SetViewRotation // (Exec|Native|Event|NetResponse|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool SetViewField(float Horizontal, float Vertical, bool Absolute); // Function MediaAssets.MediaPlayer.SetViewField // (NetRequest|Native|Event|NetResponse|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate); // Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate // (Native|Event|NetResponse|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool SetTrackFormat(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.SetTrackFormat // (NetRequest|Exec|Event|NetResponse|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	void SetTimeDelay(struct FTimespan TimeDelay); // Function MediaAssets.MediaPlayer.SetTimeDelay // (NetReliableExec|Event|NetResponse|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool SetRate(float Rate); // Function MediaAssets.MediaPlayer.SetRate // (Net|NetReliableEvent|NetResponse|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool SetNativeVolume(float Volume); // Function MediaAssets.MediaPlayer.SetNativeVolume // (Net|Event|NetResponse|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	void SetMediaOptions(struct UMediaSource* options); // Function MediaAssets.MediaPlayer.SetMediaOptions // (Net|NetReliableExec|Native|NetResponse|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool SetLooping(bool Looping); // Function MediaAssets.MediaPlayer.SetLooping // (Net|NetReliableExec|NetResponse|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	void SetDesiredPlayerName(struct FName playerName); // Function MediaAssets.MediaPlayer.SetDesiredPlayerName // (Net|NetReliableNetRequest|Exec|Native|Event|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	void SetBlockOnTime(struct FTimespan& Time); // Function MediaAssets.MediaPlayer.SetBlockOnTime // (Net|NetRequest|Exec|Native|Event|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool SelectTrack(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.SelectTrack // (NetReliableExec|Native|Event|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool Seek(struct FTimespan& Time); // Function MediaAssets.MediaPlayer.Seek // (Exec|Native|Event|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool Rewind(); // Function MediaAssets.MediaPlayer.Rewind // (Net|NetReliableNetRequest|Native|Event|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool Reopen(); // Function MediaAssets.MediaPlayer.Reopen // (Net|NetReliableNative|Event|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool Previous(); // Function MediaAssets.MediaPlayer.Previous // (NetReliableNetRequest|Exec|Event|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	void PlayAndSeek(); // Function MediaAssets.MediaPlayer.PlayAndSeek // (Net|NetRequest|Exec|Event|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool Play(); // Function MediaAssets.MediaPlayer.Play // (Net|NetRequest|Exec|Event|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool Pause(); // Function MediaAssets.MediaPlayer.Pause // (NetRequest|Exec|Event|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool OpenUrl(struct FString URL); // Function MediaAssets.MediaPlayer.OpenUrl // (Net|Exec|Event|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool OpenSourceWithOptions(struct UMediaSource* MediaSource, struct FMediaPlayerOptions& options); // Function MediaAssets.MediaPlayer.OpenSourceWithOptions // (Net|NetRequest|Event|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	void OpenSourceLatent(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct UMediaSource* MediaSource, struct FMediaPlayerOptions& options, bool& bSuccess); // Function MediaAssets.MediaPlayer.OpenSourceLatent // (NetReliableNetRequest|Exec|Native|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool OpenSource(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlayer.OpenSource // (Net|NetReliableExec|Native|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool OpenPlaylistIndex(struct UMediaPlaylist* InPlaylist, int32_t Index); // Function MediaAssets.MediaPlayer.OpenPlaylistIndex // (Exec|Native|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool OpenPlaylist(struct UMediaPlaylist* InPlaylist); // Function MediaAssets.MediaPlayer.OpenPlaylist // (NetReliableNetRequest|Native|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool OpenFile(struct FString FilePath); // Function MediaAssets.MediaPlayer.OpenFile // (Net|NetReliableNative|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool Next(); // Function MediaAssets.MediaPlayer.Next // (NetReliableNative|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool IsReady(); // Function MediaAssets.MediaPlayer.IsReady // (Net|Native|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool IsPreparing(); // Function MediaAssets.MediaPlayer.IsPreparing // (Native|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool IsPlaying(); // Function MediaAssets.MediaPlayer.IsPlaying // (Native|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool IsPaused(); // Function MediaAssets.MediaPlayer.IsPaused // (Net|NetReliableNetRequest|Exec|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool IsLooping(); // Function MediaAssets.MediaPlayer.IsLooping // (NetReliableNetRequest|Exec|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool IsConnecting(); // Function MediaAssets.MediaPlayer.IsConnecting // (Net|NetRequest|Exec|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool IsClosed(); // Function MediaAssets.MediaPlayer.IsClosed // (Net|NetRequest|Exec|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool IsBuffering(); // Function MediaAssets.MediaPlayer.IsBuffering // (NetRequest|Exec|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool HasError(); // Function MediaAssets.MediaPlayer.HasError // (Exec|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	struct FRotator GetViewRotation(); // Function MediaAssets.MediaPlayer.GetViewRotation // (NetReliableNetRequest|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	struct FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackType // (NetReliableNetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	struct FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates // (Net|NetReliableNetRequest|Exec|Native|Event|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate // (NetRequest|Exec|Native|Event|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	struct FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackDimensions // (Net|Exec|Native|Event|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio // (NetReliableNetRequest|Native|Event|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	float GetVerticalFieldOfView(); // Function MediaAssets.MediaPlayer.GetVerticalFieldOfView // (Net|NetRequest|Native|Event|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	struct FString GetUrl(); // Function MediaAssets.MediaPlayer.GetUrl // (NetReliableNative|Event|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	struct FString GetTrackLanguage(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackLanguage // (NetReliableNetRequest|Exec|Event|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	int32_t GetTrackFormat(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackFormat // (Net|NetReliableExec|Event|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	struct FText GetTrackDisplayName(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackDisplayName // (NetReliableNetRequest|Event|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	struct FTimespan GetTimeDelay(); // Function MediaAssets.MediaPlayer.GetTimeDelay // (Net|NetRequest|Event|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	struct FTimespan GetTime(); // Function MediaAssets.MediaPlayer.GetTime // (NetRequest|Event|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	void GetSupportedRates(struct TArray<struct FFloatRange>& OutRates, bool Unthinned); // Function MediaAssets.MediaPlayer.GetSupportedRates // (Event|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	int32_t GetSelectedTrack(enum class EMediaPlayerTrack TrackType); // Function MediaAssets.MediaPlayer.GetSelectedTrack // (NetRequest|Exec|Native|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	float GetRate(); // Function MediaAssets.MediaPlayer.GetRate // (Net|NetReliableExec|Native|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	int32_t GetPlaylistIndex(); // Function MediaAssets.MediaPlayer.GetPlaylistIndex // (NetReliableNetRequest|Native|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	struct UMediaPlaylist* GetPlaylist(); // Function MediaAssets.MediaPlayer.GetPlaylist // (Net|NetRequest|Native|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	struct FName GetPlayerName(); // Function MediaAssets.MediaPlayer.GetPlayerName // (NetRequest|Native|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	int32_t GetNumTracks(enum class EMediaPlayerTrack TrackType); // Function MediaAssets.MediaPlayer.GetNumTracks // (NetReliableNative|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	int32_t GetNumTrackFormats(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetNumTrackFormats // (Net|NetReliableNetRequest|Exec|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	struct FText GetMediaName(); // Function MediaAssets.MediaPlayer.GetMediaName // (Exec|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	struct FTimespan GetLastVideoSampleProcessedTime(); // Function MediaAssets.MediaPlayer.GetLastVideoSampleProcessedTime // (Net|NetReliableNetRequest|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	struct FTimespan GetLastAudioSampleProcessedTime(); // Function MediaAssets.MediaPlayer.GetLastAudioSampleProcessedTime // (NetReliableNetRequest|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	float GetHorizontalFieldOfView(); // Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView // (Net|NetRequest|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	struct FTimespan GetDuration(); // Function MediaAssets.MediaPlayer.GetDuration // (Net|NetReliableNetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	struct FName GetDesiredPlayerName(); // Function MediaAssets.MediaPlayer.GetDesiredPlayerName // (NetReliableNetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	struct FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackType // (NetReliableNetRequest|Exec|Native|Event|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate // (Net|NetReliableExec|Native|Event|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackChannels // (Exec|Native|Event|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	void Close(); // Function MediaAssets.MediaPlayer.Close // (NetRequest|Event|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool CanPlayUrl(struct FString URL); // Function MediaAssets.MediaPlayer.CanPlayUrl // (NetReliableEvent|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool CanPlaySource(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlayer.CanPlaySource // (Net|NetReliableNetRequest|Exec|Native|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
	bool CanPause(); // Function MediaAssets.MediaPlayer.CanPause // (Net|NetReliableNetRequest|Exec|Native|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ee00
};

// Class MediaAssets.MediaPlaylist
// Size: 0x38 (Inherited: 0x28)
struct UMediaPlaylist : UObject {
	struct TArray<struct UMediaSource*> Items; // 0x28(0x10)

	bool Replace(int32_t Index, struct UMediaSource* Replacement); // Function MediaAssets.MediaPlaylist.Replace // (NetRequest|Native|Event|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170e980
	bool RemoveAt(int32_t Index); // Function MediaAssets.MediaPlaylist.RemoveAt // (Net|Native|Event|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ebc0
	bool Remove(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlaylist.Remove // (Net|NetReliableNetRequest|Exec|Event|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ebc0
	int32_t Num(); // Function MediaAssets.MediaPlaylist.Num // (Net|NetReliableNative|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ebc0
	void Insert(struct UMediaSource* MediaSource, int32_t Index); // Function MediaAssets.MediaPlaylist.Insert // (Net|Exec|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ebc0
	struct UMediaSource* GetRandom(int32_t& OutIndex); // Function MediaAssets.MediaPlaylist.GetRandom // (Net|Exec|Native|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ebc0
	struct UMediaSource* GetPrevious(int32_t& InOutIndex); // Function MediaAssets.MediaPlaylist.GetPrevious // (NetReliableNetRequest|Native|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ebc0
	struct UMediaSource* GetNext(int32_t& InOutIndex); // Function MediaAssets.MediaPlaylist.GetNext // (Net|NetRequest|Exec|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ebc0
	struct UMediaSource* Get(int32_t Index); // Function MediaAssets.MediaPlaylist.Get // (Net|NetRequest|Native|Event|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ebc0
	bool AddUrl(struct FString URL); // Function MediaAssets.MediaPlaylist.AddUrl // (Net|NetReliableNative|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ebc0
	bool AddFile(struct FString FilePath); // Function MediaAssets.MediaPlaylist.AddFile // (Native|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ebc0
	bool Add(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlaylist.Add // (NetReliableNetRequest|Exec|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170ebc0
};

// Class MediaAssets.MediaSoundComponent
// Size: 0x9f0 (Inherited: 0x7f0)
struct UMediaSoundComponent : USynthComponent {
	enum class EMediaSoundChannels Channels; // 0x7f0(0x04)
	bool DynamicRateAdjustment; // 0x7f4(0x01)
	char pad_7F5[0x3]; // 0x7f5(0x03)
	float RateAdjustmentFactor; // 0x7f8(0x04)
	struct FFloatRange RateAdjustmentRange; // 0x7fc(0x10)
	char pad_80C[0x4]; // 0x80c(0x04)
	struct UMediaPlayer* MediaPlayer; // 0x810(0x08)
	char pad_818[0x1d8]; // 0x818(0x1d8)

	void SetSpectralAnalysisSettings(struct TArray<float> InFrequenciesToAnalyze, enum class EMediaSoundComponentFFTSize InFFTSize); // Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings // (NetReliableNetRequest|Event|NetResponse|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170e740
	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer); // Function MediaAssets.MediaSoundComponent.SetMediaPlayer // (Net|NetRequest|Exec|Native|NetResponse|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170e980
	void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec); // Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings // (NetReliableNetRequest|NetResponse|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170e980
	void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled); // Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis // (NetRequest|NetResponse|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170e980
	void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing); // Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing // (Net|NetResponse|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170e980
	struct TArray<struct FMediaSoundComponentSpectralData> GetSpectralData(); // Function MediaAssets.MediaSoundComponent.GetSpectralData // (NetReliableNetRequest|Exec|Native|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170e980
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaSoundComponent.GetMediaPlayer // (Net|NetReliableExec|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170e980
	float GetEnvelopeValue(); // Function MediaAssets.MediaSoundComponent.GetEnvelopeValue // (NetRequest|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170e980
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings& OutAttenuationSettings); // Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply // (Net|NetRequest|Native|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170e980
};

// Class MediaAssets.MediaTexture
// Size: 0x188 (Inherited: 0xb8)
struct UMediaTexture : UTexture {
	enum class TextureAddress AddressX; // 0xb8(0x01)
	enum class TextureAddress AddressY; // 0xb9(0x01)
	bool AutoClear; // 0xba(0x01)
	char pad_BB[0x1]; // 0xbb(0x01)
	struct FLinearColor ClearColor; // 0xbc(0x10)
	bool EnableGenMips; // 0xcc(0x01)
	char NumMips; // 0xcd(0x01)
	char pad_CE[0x2]; // 0xce(0x02)
	struct UMediaPlayer* MediaPlayer; // 0xd0(0x08)
	char pad_D8[0xb0]; // 0xd8(0xb0)

	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer); // Function MediaAssets.MediaTexture.SetMediaPlayer // (Net|NetReliableNetRequest|Exec|Native|NetResponse|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31714540
	int32_t GetWidth(); // Function MediaAssets.MediaTexture.GetWidth // (Net|NetReliableNetRequest|NetMulticast|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170e740
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaTexture.GetMediaPlayer // (NetRequest|Exec|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170e740
	int32_t GetHeight(); // Function MediaAssets.MediaTexture.GetHeight // (NetRequest|NetResponse|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170e740
	float GetAspectRatio(); // Function MediaAssets.MediaTexture.GetAspectRatio // (Net|NetReliableNetRequest|Native|Event|Static|MulticastDelegate|Private|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170e740
};

// Class MediaAssets.PlatformMediaSource
// Size: 0x88 (Inherited: 0x80)
struct UPlatformMediaSource : UMediaSource {
	struct UMediaSource* MediaSource; // 0x80(0x08)
};

// Class MediaAssets.StreamMediaSource
// Size: 0x98 (Inherited: 0x88)
struct UStreamMediaSource : UBaseMediaSource {
	struct FString StreamUrl; // 0x88(0x10)
};

// Class MediaAssets.TimeSynchronizableMediaSource
// Size: 0x98 (Inherited: 0x88)
struct UTimeSynchronizableMediaSource : UBaseMediaSource {
	bool bUseTimeSynchronization; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	int32_t FrameDelay; // 0x8c(0x04)
	double TimeDelay; // 0x90(0x08)
};

