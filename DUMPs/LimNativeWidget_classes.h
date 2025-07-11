// Class LimNativeWidget.ChatGMEManager
// Size: 0x798 (Inherited: 0x28)
struct UChatGMEManager : UObject {
	struct ULimNative* LimNativeInstance; // 0x28(0x08)
	struct FLimNativeLowLevelWrapper ctx; // 0x30(0x10)
	struct FMulticastInlineDelegate OnEnterRoom; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)
	struct FMulticastInlineDelegate OnExitRoom; // 0x68(0x10)
	char pad_78[0x18]; // 0x78(0x18)
	struct FMulticastInlineDelegate OnRoomDisconnect; // 0x90(0x10)
	char pad_A0[0x18]; // 0xa0(0x18)
	struct FMulticastInlineDelegate OnUserUpdate; // 0xb8(0x10)
	char pad_C8[0x18]; // 0xc8(0x18)
	struct FMulticastInlineDelegate OnNumberOfUsersUpdate; // 0xe0(0x10)
	char pad_F0[0x18]; // 0xf0(0x18)
	struct FMulticastInlineDelegate OnNumberOfAudioStreamsUpdate; // 0x108(0x10)
	char pad_118[0x18]; // 0x118(0x18)
	struct FMulticastInlineDelegate OnReconnectStart; // 0x130(0x10)
	char pad_140[0x18]; // 0x140(0x18)
	struct FMulticastInlineDelegate OnReconnectSuccess; // 0x158(0x10)
	char pad_168[0x18]; // 0x168(0x18)
	struct FMulticastInlineDelegate OnSwitchRoom; // 0x180(0x10)
	char pad_190[0x18]; // 0x190(0x18)
	struct FMulticastInlineDelegate OnChangeRoomType; // 0x1a8(0x10)
	char pad_1B8[0x18]; // 0x1b8(0x18)
	struct FMulticastInlineDelegate OnAudioDataEmpty; // 0x1d0(0x10)
	char pad_1E0[0x18]; // 0x1e0(0x18)
	struct FMulticastInlineDelegate OnRoomSharingStart; // 0x1f8(0x10)
	char pad_208[0x18]; // 0x208(0x18)
	struct FMulticastInlineDelegate OnRoomSharingStop; // 0x220(0x10)
	char pad_230[0x18]; // 0x230(0x18)
	struct FMulticastInlineDelegate OnRecordCompleted; // 0x248(0x10)
	char pad_258[0x18]; // 0x258(0x18)
	struct FMulticastInlineDelegate OnRecordPreviewCompleted; // 0x270(0x10)
	char pad_280[0x18]; // 0x280(0x18)
	struct FMulticastInlineDelegate OnRecordMixCompleted; // 0x298(0x10)
	char pad_2A8[0x18]; // 0x2a8(0x18)
	struct FMulticastInlineDelegate OnAudioRouteUpdate; // 0x2c0(0x10)
	char pad_2D0[0x18]; // 0x2d0(0x18)
	struct FMulticastInlineDelegate OnSpeakerDefaultDeviceChanged; // 0x2e8(0x10)
	char pad_2F8[0x18]; // 0x2f8(0x18)
	struct FMulticastInlineDelegate OnSpeakerNewDevice; // 0x310(0x10)
	char pad_320[0x18]; // 0x320(0x18)
	struct FMulticastInlineDelegate OnSpeakerLostDevice; // 0x338(0x10)
	char pad_348[0x18]; // 0x348(0x18)
	struct FMulticastInlineDelegate OnMicNewDevice; // 0x360(0x10)
	char pad_370[0x18]; // 0x370(0x18)
	struct FMulticastInlineDelegate OnMicLostDevice; // 0x388(0x10)
	char pad_398[0x18]; // 0x398(0x18)
	struct FMulticastInlineDelegate OnMicDefaultDeviceChanged; // 0x3b0(0x10)
	char pad_3C0[0x18]; // 0x3c0(0x18)
	struct FMulticastInlineDelegate OnAudioRouteChanged; // 0x3d8(0x10)
	char pad_3E8[0x18]; // 0x3e8(0x18)
	struct FMulticastInlineDelegate OnUserVolumes; // 0x400(0x10)
	char pad_410[0x18]; // 0x410(0x18)
	struct FMulticastInlineDelegate OnChangeRoomQuality; // 0x428(0x10)
	char pad_438[0x18]; // 0x438(0x18)
	struct FMulticastInlineDelegate OnAccompanyFinish; // 0x450(0x10)
	char pad_460[0x18]; // 0x460(0x18)
	struct FMulticastInlineDelegate OnServerAudioRouteEvent; // 0x478(0x10)
	char pad_488[0x18]; // 0x488(0x18)
	struct FMulticastInlineDelegate OnCustomDataUpdate; // 0x4a0(0x10)
	char pad_4B0[0x18]; // 0x4b0(0x18)
	struct FMulticastInlineDelegate OnRealtimeASR; // 0x4c8(0x10)
	char pad_4D8[0x18]; // 0x4d8(0x18)
	struct FMulticastInlineDelegate OnChorusEvent; // 0x4f0(0x10)
	char pad_500[0x18]; // 0x500(0x18)
	struct FMulticastInlineDelegate OnChangeTeamId; // 0x518(0x10)
	char pad_528[0x18]; // 0x528(0x18)
	struct FMulticastInlineDelegate OnAudioReady; // 0x540(0x10)
	char pad_550[0x18]; // 0x550(0x18)
	struct FMulticastInlineDelegate OnHardwareTestRecordFinish; // 0x568(0x10)
	char pad_578[0x18]; // 0x578(0x18)
	struct FMulticastInlineDelegate OnHardwareTestPreviewFinish; // 0x590(0x10)
	char pad_5A0[0x18]; // 0x5a0(0x18)
	struct FMulticastInlineDelegate OnPTTRecordComplete; // 0x5b8(0x10)
	char pad_5C8[0x18]; // 0x5c8(0x18)
	struct FMulticastInlineDelegate OnPTTUploadComplete; // 0x5e0(0x10)
	char pad_5F0[0x18]; // 0x5f0(0x18)
	struct FMulticastInlineDelegate OnPTTDownloadComplete; // 0x608(0x10)
	char pad_618[0x18]; // 0x618(0x18)
	struct FMulticastInlineDelegate OnPTTPlayComplete; // 0x630(0x10)
	char pad_640[0x18]; // 0x640(0x18)
	struct FMulticastInlineDelegate OnPTTSpeech2TextComplete; // 0x658(0x10)
	char pad_668[0x18]; // 0x668(0x18)
	struct FMulticastInlineDelegate OnPTTStreamingRecognitionComplete; // 0x680(0x10)
	char pad_690[0x18]; // 0x690(0x18)
	struct FMulticastInlineDelegate OnPTTStreamingRecognitionIsRunning; // 0x6a8(0x10)
	char pad_6B8[0x18]; // 0x6b8(0x18)
	struct FMulticastInlineDelegate OnRoomManagementOperator; // 0x6d0(0x10)
	char pad_6E0[0x18]; // 0x6e0(0x18)
	struct FMulticastInlineDelegate OnPermissionResult; // 0x6f8(0x10)
	char pad_708[0x90]; // 0x708(0x90)

	void UpdateSelfPosition(struct FVector InSelfPosition); // Function LimNativeWidget.ChatGMEManager.UpdateSelfPosition // (Exec|Event|Static|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void UpdateAudioRecvRange(int32_t InRange); // Function LimNativeWidget.ChatGMEManager.UpdateAudioRecvRange // (NetReliableNetRequest|Event|Static|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	void Uninit(); // Function LimNativeWidget.ChatGMEManager.Uninit // (Net|NetRequest|Event|Static|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	void SetRangeAudioTeamID(int32_t InTeamId); // Function LimNativeWidget.ChatGMEManager.SetRangeAudioTeamID // (Net|NetReliableEvent|Static|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	void SetRangeAudioMode(enum class EChatGMERangeAudioMode InAudioMode); // Function LimNativeWidget.ChatGMEManager.SetRangeAudioMode // (Net|Event|Static|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810c80
	void SetAudioSendAndRecvRules(enum class EChatGMEAudioRouteSendType SendType, struct TArray<struct FString> SendOpenIDList, enum class EChatGMEAudioRouteRecvType RecvType, struct TArray<struct FString> RecvOpenIDList); // Function LimNativeWidget.ChatGMEManager.SetAudioSendAndRecvRules // (NetReliableNetRequest|Native|Static|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810c80
	void SelectSpeak(struct FString InDeviceID); // Function LimNativeWidget.ChatGMEManager.SelectSpeak // (NetRequest|Native|Static|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	void SelectMic(struct FString InDeviceID); // Function LimNativeWidget.ChatGMEManager.SelectMic // (NetRequest|Native|Static|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	void PreInit(); // Function LimNativeWidget.ChatGMEManager.PreInit // (Net|NetReliableNative|Static|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	void OnUserVolumesDelegate__DelegateSignature(struct FChatGMEDataUserVolumes InData); // DelegateFunction LimNativeWidget.ChatGMEManager.OnUserVolumesDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810c80
	void OnUserUpdateDelegate__DelegateSignature(struct FChatGMEDataUserUpdate InData); // DelegateFunction LimNativeWidget.ChatGMEManager.OnUserUpdateDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810c80
	void OnRoomManagementOperatorDelegate__DelegateSignature(struct FChatGMEDataRoomOperator InData); // DelegateFunction LimNativeWidget.ChatGMEManager.OnRoomManagementOperatorDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810c80
	void OnResultDelegate__DelegateSignature(struct FChatGMEDataResult Result); // DelegateFunction LimNativeWidget.ChatGMEManager.OnResultDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	void OnRecordCompletedDelegate__DelegateSignature(struct FChatGMEDataRecordCompleted InData); // DelegateFunction LimNativeWidget.ChatGMEManager.OnRecordCompletedDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810c80
	void OnNumberOfUsersUpdateDelegate__DelegateSignature(struct FChatGMEDataNumberOfUserUpdate InData); // DelegateFunction LimNativeWidget.ChatGMEManager.OnNumberOfUsersUpdateDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810c80
	void OnNumberOfAudioStreamsUpdateDelegate__DelegateSignature(struct FChatGMEDataNumberOfAudioStreamsUpdate InData); // DelegateFunction LimNativeWidget.ChatGMEManager.OnNumberOfAudioStreamsUpdateDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810c80
	void OnNotifyFileInfoDelegate__DelegateSignature(struct FChatGMEDataFileInfo InData); // DelegateFunction LimNativeWidget.ChatGMEManager.OnNotifyFileInfoDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810c80
	void OnNotifyDelegate__DelegateSignature(struct FString InData); // DelegateFunction LimNativeWidget.ChatGMEManager.OnNotifyDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	void OnGetAuthBuffer(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeGetGMETokenCallBack& RetData); // Function LimNativeWidget.ChatGMEManager.OnGetAuthBuffer // (NetRequest|Exec|Static|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467900
	void OnDeviceChangedDelegate__DelegateSignature(struct FChatGMEDataDeviceInfo InData); // DelegateFunction LimNativeWidget.ChatGMEManager.OnDeviceChangedDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	void OnChangeRoomTypeDelegate__DelegateSignature(struct FChatGMEDataChangeRoomType InData); // DelegateFunction LimNativeWidget.ChatGMEManager.OnChangeRoomTypeDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810c80
	void OnChangeRoomQualityDelegate__DelegateSignature(struct FChatGMEDataRoomQuality InData); // DelegateFunction LimNativeWidget.ChatGMEManager.OnChangeRoomQualityDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810c80
	void OnAndroidPermissionResult__DelegateSignature(bool bSuccess); // DelegateFunction LimNativeWidget.ChatGMEManager.OnAndroidPermissionResult__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	void MediaMute(struct FString InUserId, bool InMute); // Function LimNativeWidget.ChatGMEManager.MediaMute // (Net|Exec|Static|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	bool IsRoomEntered(); // Function LimNativeWidget.ChatGMEManager.IsRoomEntered // (Exec|Static|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	void Init(struct FString InUserId, struct FString InAppId, struct FString InEnvId); // Function LimNativeWidget.ChatGMEManager.Init // (NetReliableStatic|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	void HandleRecordingPermissionResult(struct TArray<struct FString>& Permissions, struct TArray<bool>& Results); // Function LimNativeWidget.ChatGMEManager.HandleRecordingPermissionResult // (Net|NetReliableExec|Native|Event|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	void HandleIOSRecordingPermissionResult(int32_t ResultType); // Function LimNativeWidget.ChatGMEManager.HandleIOSRecordingPermissionResult // (Static|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	void HandleIOSMicPermissionResult(int32_t ResultType); // Function LimNativeWidget.ChatGMEManager.HandleIOSMicPermissionResult // (Static|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	void HandleAndroidPermissionResult(struct TArray<struct FString>& Permissions, struct TArray<bool>& Results); // Function LimNativeWidget.ChatGMEManager.HandleAndroidPermissionResult // (Net|NetReliableExec|Native|Event|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	bool GetSpeakerState(); // Function LimNativeWidget.ChatGMEManager.GetSpeakerState // (NetReliableExec|Native|Event|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	struct TArray<struct FChatGMEDataDeviceInfo> GetSpeakerList(); // Function LimNativeWidget.ChatGMEManager.GetSpeakerList // (Net|Exec|Native|Event|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	struct FString GetRecordingLocalFilePath(); // Function LimNativeWidget.ChatGMEManager.GetRecordingLocalFilePath // (Net|NetReliableNetRequest|Native|Event|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	bool GetMicState(); // Function LimNativeWidget.ChatGMEManager.GetMicState // (NetReliableNetRequest|Native|Event|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	struct TArray<struct FChatGMEDataDeviceInfo> GetMicList(); // Function LimNativeWidget.ChatGMEManager.GetMicList // (Net|NetRequest|Native|Event|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810c80
	struct UChatGMEManager* GetInstance(); // Function LimNativeWidget.ChatGMEManager.GetInstance // (NetRequest|Native|Event|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	void GameUploadRecordedFile(struct FString FilePath); // Function LimNativeWidget.ChatGMEManager.GameUploadRecordedFile // (NetReliableNative|Event|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	void GameStopRecording(); // Function LimNativeWidget.ChatGMEManager.GameStopRecording // (Net|Native|Event|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	void GameStopPlayFile(); // Function LimNativeWidget.ChatGMEManager.GameStopPlayFile // (Net|Native|Event|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	void GameStartRecording(struct FString FilePath); // Function LimNativeWidget.ChatGMEManager.GameStartRecording // (NetReliableNetRequest|Exec|Event|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	int32_t GameSetSpeakerVolume(int32_t Volume); // Function LimNativeWidget.ChatGMEManager.GameSetSpeakerVolume // (NetRequest|Exec|Event|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	int32_t GameSetMicVolume(int32_t MicVolume); // Function LimNativeWidget.ChatGMEManager.GameSetMicVolume // (NetReliableExec|Event|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	void GameResumeRecording(); // Function LimNativeWidget.ChatGMEManager.GameResumeRecording // (Net|Exec|Event|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	void GamePlayRecordedFile(struct FString FilePath); // Function LimNativeWidget.ChatGMEManager.GamePlayRecordedFile // (Net|NetReliableNetRequest|Event|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	void GamePauseRecording(); // Function LimNativeWidget.ChatGMEManager.GamePauseRecording // (NetReliableNetRequest|Event|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	int32_t GameGetVoiceFileDuration(struct FString FilePath); // Function LimNativeWidget.ChatGMEManager.GameGetVoiceFileDuration // (NetRequest|Event|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	int32_t GameGetSpeakerVolume(); // Function LimNativeWidget.ChatGMEManager.GameGetSpeakerVolume // (Net|NetReliableEvent|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	int32_t GameGetSpeakerLevel(); // Function LimNativeWidget.ChatGMEManager.GameGetSpeakerLevel // (NetReliableEvent|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	int32_t GameGetMicVolume(); // Function LimNativeWidget.ChatGMEManager.GameGetMicVolume // (Net|Event|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	int32_t GameGetMicLevel(); // Function LimNativeWidget.ChatGMEManager.GameGetMicLevel // (Net|Event|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	void GameDownloadRecordedFile(struct FString FileID, struct FString FilePath); // Function LimNativeWidget.ChatGMEManager.GameDownloadRecordedFile // (Net|NetRequest|Exec|Native|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	void GameCancleRecording(); // Function LimNativeWidget.ChatGMEManager.GameCancleRecording // (NetRequest|Exec|Native|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	bool ExitRoom(); // Function LimNativeWidget.ChatGMEManager.ExitRoom // (NetRequest|Exec|Native|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	bool EnterRoom(struct FString InRoomId, enum class EChatGMERoomType InRoomType); // Function LimNativeWidget.ChatGMEManager.EnterRoom // (Exec|Native|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810c80
	void EnableSpeaker(bool InEnable); // Function LimNativeWidget.ChatGMEManager.EnableSpeaker // (NetReliableNetRequest|Native|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	void EnableMic(bool InEnable); // Function LimNativeWidget.ChatGMEManager.EnableMic // (Net|NetReliableNative|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	void DestroyInstance(); // Function LimNativeWidget.ChatGMEManager.DestroyInstance // (Net|NetReliableNative|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	void DeleteCacheFiles(); // Function LimNativeWidget.ChatGMEManager.DeleteCacheFiles // (NetReliableNative|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
	int32_t CheckPlatformMicPermission(); // Function LimNativeWidget.ChatGMEManager.CheckPlatformMicPermission // (NetReliableNative|NetResponse|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460880
};

// Class LimNativeWidget.ChatListEmojiEntryData
// Size: 0xd0 (Inherited: 0x28)
struct UChatListEmojiEntryData : UObject {
	struct FString Tag; // 0x28(0x10)
	struct FSlateBrush Image; // 0x38(0x98)
};

// Class LimNativeWidget.ChatListEntryDataBase
// Size: 0x98 (Inherited: 0x28)
struct UChatListEntryDataBase : UObject {
	enum class ELimNativeMsgContentType MessageType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FDateTime Timestamp; // 0x30(0x08)
	struct FString SenderId; // 0x38(0x10)
	struct FString SenderName; // 0x48(0x10)
	struct FString SenderAvatarUrl; // 0x58(0x10)
	enum class ELimNativeMsgState MsgState; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FString ConvID; // 0x70(0x10)
	enum class ELimNativeConvType ConvType; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString MsgId; // 0x88(0x10)
};

// Class LimNativeWidget.ChatListEntryDataText
// Size: 0xa8 (Inherited: 0x98)
struct UChatListEntryDataText : UChatListEntryDataBase {
	struct FString Message; // 0x98(0x10)
};

// Class LimNativeWidget.ChatListEntryDataSystem
// Size: 0xa8 (Inherited: 0x98)
struct UChatListEntryDataSystem : UChatListEntryDataBase {
	struct FString Message; // 0x98(0x10)
};

// Class LimNativeWidget.ChatListEntryDataVoice
// Size: 0xd0 (Inherited: 0x98)
struct UChatListEntryDataVoice : UChatListEntryDataBase {
	struct FString UUID; // 0x98(0x10)
	struct FString URL; // 0xa8(0x10)
	struct FString Size; // 0xb8(0x10)
	int32_t Duration; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// Class LimNativeWidget.ChatListEntryDataImage
// Size: 0xe0 (Inherited: 0x98)
struct UChatListEntryDataImage : UChatListEntryDataBase {
	struct FString UUID; // 0x98(0x10)
	struct FString Fmt; // 0xa8(0x10)
	struct FString URL; // 0xb8(0x10)
	int32_t Width; // 0xc8(0x04)
	int32_t Height; // 0xcc(0x04)
	struct FString Size; // 0xd0(0x10)
};

// Class LimNativeWidget.ChatListEntryDataCustomEmotion
// Size: 0xf0 (Inherited: 0x98)
struct UChatListEntryDataCustomEmotion : UChatListEntryDataBase {
	struct FString PackName; // 0x98(0x10)
	enum class ELimNativePackType PackType; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct FString EmotionName; // 0xb0(0x10)
	struct FString EmotionId; // 0xc0(0x10)
	struct FString EmotionUrl; // 0xd0(0x10)
	struct FString Desc; // 0xe0(0x10)
};

// Class LimNativeWidget.ChatListEntryDataShaderedGameCard
// Size: 0x100 (Inherited: 0x98)
struct UChatListEntryDataShaderedGameCard : UChatListEntryDataBase {
	int32_t Type; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString Text; // 0xa0(0x10)
	struct FString Title; // 0xb0(0x10)
	struct FString Detail; // 0xc0(0x10)
	struct FString Img; // 0xd0(0x10)
	struct FString URL; // 0xe0(0x10)
	struct FString Extra; // 0xf0(0x10)
};

// Class LimNativeWidget.ChatListUserEntryData
// Size: 0x78 (Inherited: 0x28)
struct UChatListUserEntryData : UObject {
	struct FString Uid; // 0x28(0x10)
	struct FString NickName; // 0x38(0x10)
	struct FString AvatarUrl; // 0x48(0x10)
	struct FString AvatarFrameUrl; // 0x58(0x10)
	enum class ELimNativeUserSexType Sex; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	int32_t VipLevel; // 0x6c(0x04)
	bool IsShowVip; // 0x70(0x01)
	enum class ELimNativeFriendStateType OnlineState; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	int32_t UnreadCount; // 0x74(0x04)
};

// Class LimNativeWidget.LimChatManager
// Size: 0x378 (Inherited: 0x28)
struct ULimChatManager : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct ULimNative* LimNativeInstance; // 0x30(0x08)
	struct UChatGMEManager* ChatGMEManager; // 0x38(0x08)
	struct FLimNativeLowLevelWrapper ctx; // 0x40(0x10)
	struct FString CurrentLanguage; // 0x50(0x10)
	struct FMulticastInlineDelegate OnLoginCallBackHandle; // 0x60(0x10)
	struct FMulticastInlineDelegate OnConvsGetCallBackHandle; // 0x70(0x10)
	struct FMulticastInlineDelegate OnNewGetMessageHandle; // 0x80(0x10)
	struct FMulticastInlineDelegate OnMessageReceivedHandle; // 0x90(0x10)
	struct FMulticastInlineDelegate OnNewMessageReceivedHandle; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnMessageSendCallBackHandle; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnNewMessageSendCallBackHandle; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnReceiveLogicMsgHandle; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnConvDiscardHandle; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnConfigInfoHandle; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnGetConnStatHandle; // 0x100(0x10)
	struct FMulticastInlineDelegate OnNetStatHandle; // 0x110(0x10)
	struct FMulticastInlineDelegate OnGetConfigChatLevelHandle; // 0x120(0x10)
	struct FMulticastInlineDelegate OnVoiceRecordComplete; // 0x130(0x10)
	struct FMulticastInlineDelegate OnVoiceUploadComplete; // 0x140(0x10)
	struct FMulticastInlineDelegate OnVoiceDownloadComplete; // 0x150(0x10)
	struct FMulticastInlineDelegate OnVoicePlayComplete; // 0x160(0x10)
	struct FMulticastInlineDelegate OnGmeEnterRoom; // 0x170(0x10)
	struct FMulticastInlineDelegate OnGmeExitRoom; // 0x180(0x10)
	struct FMulticastInlineDelegate OnPermissionResult; // 0x190(0x10)
	struct FString SelfRoleID; // 0x1a0(0x10)
	struct FChatListConvData CurrentConvData; // 0x1b0(0x18)
	struct TArray<struct FLimNativeConversationData> ConvListFullData; // 0x1c8(0x10)
	struct TArray<struct FNewChatListMessageData> ChatMsgDataList; // 0x1d8(0x10)
	struct TArray<struct FLimNativeConvChatLevelConfigData> ChatLevelDataList; // 0x1e8(0x10)
	struct TMap<struct FChatListConvData, struct FString> MsgIDMap; // 0x1f8(0x50)
	struct TArray<struct FChatListUserData> PeerDataList; // 0x248(0x10)
	struct TArray<struct FChatListUserData> FriendDataList; // 0x258(0x10)
	struct TMap<struct FChatListConvData, struct FString> BaseMsgIDMap; // 0x268(0x50)
	struct TMap<struct FChatListConvData, int32_t> UnreadMsgMap; // 0x2b8(0x50)
	struct FMulticastInlineDelegate OnGetFriendsCallBackHandle; // 0x308(0x10)
	struct FMulticastInlineDelegate OnGetUserHandle; // 0x318(0x10)
	struct FMulticastInlineDelegate OnGetUserListHandle; // 0x328(0x10)
	struct FMulticastInlineDelegate OnGetUserListStateHandle; // 0x338(0x10)
	struct FMulticastInlineDelegate OnRedHintUpdateHandle; // 0x348(0x10)
	char pad_358[0x20]; // 0x358(0x20)

	void VoiceUploadComplete(struct FChatGMEDataFileInfo InData); // Function LimNativeWidget.LimChatManager.VoiceUploadComplete // (NetReliableNative|NetResponse|Static|MulticastDelegate|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810c80
	void VoiceRecordComplete(struct FChatGMEDataFileInfo InData); // Function LimNativeWidget.LimChatManager.VoiceRecordComplete // (NetReliableExec|NetResponse|Static|MulticastDelegate|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void VoicePlayComplete(struct FChatGMEDataFileInfo InData); // Function LimNativeWidget.LimChatManager.VoicePlayComplete // (Net|NetResponse|Static|MulticastDelegate|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void VoiceDownloadComplete(struct FChatGMEDataFileInfo InData); // Function LimNativeWidget.LimChatManager.VoiceDownloadComplete // (Net|Exec|Native|Event|Static|MulticastDelegate|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void UnInitChatManager(); // Function LimNativeWidget.LimChatManager.UnInitChatManager // (Exec|Native|Event|Static|MulticastDelegate|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void SwitchConvTo(struct FChatListConvData& InConvData, bool RefreshConvList); // Function LimNativeWidget.LimChatManager.SwitchConvTo // (NetRequest|Native|Event|Static|MulticastDelegate|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void SetCtxLanguage(struct FString Lang); // Function LimNativeWidget.LimChatManager.SetCtxLanguage // (NetReliableNative|Event|Static|MulticastDelegate|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void SetConvRead(struct FChatListConvData& ConvData); // Function LimNativeWidget.LimChatManager.SetConvRead // (Net|NetReliableNetRequest|Exec|Event|Static|MulticastDelegate|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void SetConvMsgRead(struct FString ConvID, enum class ELimNativeConvType ConvType, struct FString MsgId, struct FString Extra); // Function LimNativeWidget.LimChatManager.SetConvMsgRead // (Net|Exec|Event|Static|MulticastDelegate|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void SendVoiceMessageToConv(struct FString ConvID, enum class ELimNativeConvType ConvType, struct FString FileID, struct FString Extra); // Function LimNativeWidget.LimChatManager.SendVoiceMessageToConv // (NetReliableEvent|Static|MulticastDelegate|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void SendTextMessageToConv(struct FString ConvID, enum class ELimNativeConvType ConvType, struct FString Message, struct FString Extra); // Function LimNativeWidget.LimChatManager.SendTextMessageToConv // (NetRequest|Exec|Native|Static|MulticastDelegate|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void SendTextMessage(struct FString Message, struct FString Extra); // Function LimNativeWidget.LimChatManager.SendTextMessage // (Exec|Native|Static|MulticastDelegate|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void PostInitChatManager(struct FLimNativeReportConfig ReportConfig, struct FLimNativeParkConfig ParkConfig); // Function LimNativeWidget.LimChatManager.PostInitChatManager // (Net|NetReliableExec|Native|Event|NetResponse|MulticastDelegate|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	struct UUserWidget* OpenChatUI(struct UObject* WorldContextObject, struct FString ChatWidgetPath, int32_t ZOrder); // Function LimNativeWidget.LimChatManager.OpenChatUI // (Net|NetRequest|Native|Event|NetResponse|MulticastDelegate|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnVoiceUploadCompleteDynamicDelegate__DelegateSignature(struct FChatGMEDataFileInfo FileInfo); // DelegateFunction LimNativeWidget.LimChatManager.OnVoiceUploadCompleteDynamicDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnVoiceRecordCompleteDynamicDelegate__DelegateSignature(struct FChatGMEDataFileInfo FileInfo); // DelegateFunction LimNativeWidget.LimChatManager.OnVoiceRecordCompleteDynamicDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnVoicePlayCompleteDynamicDelegate__DelegateSignature(struct FChatGMEDataFileInfo FileInfo); // DelegateFunction LimNativeWidget.LimChatManager.OnVoicePlayCompleteDynamicDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnVoiceDownloadCompleteDynamicDelegate__DelegateSignature(struct FChatGMEDataFileInfo FileInfo); // DelegateFunction LimNativeWidget.LimChatManager.OnVoiceDownloadCompleteDynamicDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnSendMessageCallBackDynamicDelegate__DelegateSignature(struct FChatListMessageData& MsgCallBack); // DelegateFunction LimNativeWidget.LimChatManager.OnSendMessageCallBackDynamicDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnRedHintUpdateDynamicDelegate__DelegateSignature(); // DelegateFunction LimNativeWidget.LimChatManager.OnRedHintUpdateDynamicDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnReceiveMessageDynamicDelegate__DelegateSignature(struct FChatListMessageData& Msg); // DelegateFunction LimNativeWidget.LimChatManager.OnReceiveMessageDynamicDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810c80
	void OnReceiveLogicMessageDynamicDelegate__DelegateSignature(int32_t MsgType, struct FLimNativeDataBizFullObj& NativeMsg); // DelegateFunction LimNativeWidget.LimChatManager.OnReceiveLogicMessageDynamicDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnOpenChatUI(); // Function LimNativeWidget.LimChatManager.OnOpenChatUI // (NetReliableNetRequest|Exec|Native|NetResponse|Static|NetMulticast|MulticastDelegate|Public|Protected|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnNewSendMessageCallBackDynamicDelegate__DelegateSignature(struct FNewChatListMessageData& MsgCallBack, struct FString RetData, int32_t Code); // DelegateFunction LimNativeWidget.LimChatManager.OnNewSendMessageCallBackDynamicDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnNewReceiveMessageDynamicDelegate__DelegateSignature(struct FNewChatListMessageData& Msg); // DelegateFunction LimNativeWidget.LimChatManager.OnNewReceiveMessageDynamicDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810c80
	void OnMiscConfigInfoHandle(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeGetMiscConfigInfoCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnMiscConfigInfoHandle // (NetReliableNetRequest|Exec|Event|NetResponse|MulticastDelegate|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnMessageSend(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnSendMsgCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnMessageSend // (Net|NetRequest|Event|NetResponse|MulticastDelegate|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnMessageReceived(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnMsgReceivedEventCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnMessageReceived // (NetReliableNetRequest|Exec|Native|NetResponse|MulticastDelegate|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnLoginDynamicDelegate__DelegateSignature(bool LoginRes, int32_t Code, struct FString RetData); // DelegateFunction LimNativeWidget.LimChatManager.OnLoginDynamicDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnLogin(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnLoginCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnLogin // (Exec|Native|NetResponse|MulticastDelegate|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnLogicMsgReceived(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnMsgLogicReceivedEventCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnLogicMsgReceived // (NetReliableNative|NetResponse|MulticastDelegate|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnLog(struct FLimNativeLowLevelWrapper& InWrapper, struct FString Data); // Function LimNativeWidget.LimChatManager.OnLog // (Net|NetRequest|Exec|NetResponse|MulticastDelegate|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnGmeExitRoomDynamicDelegate__DelegateSignature(struct FChatGMEDataResult EventResult); // DelegateFunction LimNativeWidget.LimChatManager.OnGmeExitRoomDynamicDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnGmeEnterRoomDynamicDelegate__DelegateSignature(struct FChatGMEDataResult EventResult); // DelegateFunction LimNativeWidget.LimChatManager.OnGmeEnterRoomDynamicDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnGMEAndroidPermissionDelegate__DelegateSignature(bool Result); // DelegateFunction LimNativeWidget.LimChatManager.OnGMEAndroidPermissionDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnGetUsersStateCallBackDynamicDelegate__DelegateSignature(); // DelegateFunction LimNativeWidget.LimChatManager.OnGetUsersStateCallBackDynamicDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnGetUsersCallBackDynamicDelegate__DelegateSignature(struct TArray<struct FChatListUserData>& UserDataList); // DelegateFunction LimNativeWidget.LimChatManager.OnGetUsersCallBackDynamicDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnGetUserListState(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetUsersStateCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnGetUserListState // (Net|NetRequest|NetResponse|MulticastDelegate|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnGetUserListInfo(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetUsersCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnGetUserListInfo // (NetReliableExec|Native|Event|MulticastDelegate|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnGetUserInfo(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetUserCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnGetUserInfo // (NetRequest|Native|Event|MulticastDelegate|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnGetUserCallBackDynamicDelegate__DelegateSignature(struct FChatListUserData& UserData); // DelegateFunction LimNativeWidget.LimChatManager.OnGetUserCallBackDynamicDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnGetNetStatHandle(struct FLimNativeLowLevelWrapper& InWrapper, int32_t RetData); // Function LimNativeWidget.LimChatManager.OnGetNetStatHandle // (Native|Event|MulticastDelegate|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnGetNetStatDynamicDelegate__DelegateSignature(int32_t val); // DelegateFunction LimNativeWidget.LimChatManager.OnGetNetStatDynamicDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnGetMessageInRange(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetMsgsCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnGetMessageInRange // (Net|Exec|Event|MulticastDelegate|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnGetMessageDataDynamicDelegate__DelegateSignature(int32_t Code, struct FString ConvID, enum class ELimNativeConvType ConvType); // DelegateFunction LimNativeWidget.LimChatManager.OnGetMessageDataDynamicDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnGetFriendsCallBackDynamicDelegate__DelegateSignature(struct TArray<struct FChatListUserData>& FriendList); // DelegateFunction LimNativeWidget.LimChatManager.OnGetFriendsCallBackDynamicDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810c80
	void OnGetFriends(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetFriendCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnGetFriends // (NetReliableNetRequest|Exec|Native|MulticastDelegate|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnGetConnStateHandle(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeGetConnStateCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnGetConnStateHandle // (Exec|Native|MulticastDelegate|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnGetConnStatDynamicDelegate__DelegateSignature(bool Result, int32_t val); // DelegateFunction LimNativeWidget.LimChatManager.OnGetConnStatDynamicDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnConvsGetDynamicDelegate__DelegateSignature(bool GetConvRes); // DelegateFunction LimNativeWidget.LimChatManager.OnConvsGetDynamicDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnConvRead(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnSetConvReadCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnConvRead // (NetReliableNative|MulticastDelegate|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnConvListGet(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnConvsGetCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnConvListGet // (Net|Exec|MulticastDelegate|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnConvHandleDynamicDelegate__DelegateSignature(bool Result, struct FLimNativeConvHandleCallBackData& Data); // DelegateFunction LimNativeWidget.LimChatManager.OnConvHandleDynamicDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnConvHandle(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnConvHandleCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnConvHandle // (NetReliableMulticastDelegate|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnConvChatLevelConfig(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetConvChatLevelConfigCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnConvChatLevelConfig // (Net|NetReliableExec|Native|Event|NetResponse|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnConfigInfoHandleDynamicDelegate__DelegateSignature(bool Result, int32_t val); // DelegateFunction LimNativeWidget.LimChatManager.OnConfigInfoHandleDynamicDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void OnConfigGetChatLevlDynamicDelegate__DelegateSignature(bool Result); // DelegateFunction LimNativeWidget.LimChatManager.OnConfigGetChatLevlDynamicDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void Logout(); // Function LimNativeWidget.LimChatManager.Logout // (NetReliableExec|Native|Event|NetResponse|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void Login(struct FString InAppId, struct FString InAppUserID, struct FString InToken, struct FString InRoleID, struct FString InExtra); // Function LimNativeWidget.LimChatManager.Login // (Net|NetReliableNative|Event|NetResponse|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void InitGME(struct FString InEnvId, struct FString InGMEUserID); // Function LimNativeWidget.LimChatManager.InitGME // (Net|NetRequest|Exec|Event|NetResponse|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void InitChatManager(struct FLimNativeInitConfig InitConfig, struct FString InEnvId, struct FString InGMEUserID); // Function LimNativeWidget.LimChatManager.InitChatManager // (Event|NetResponse|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void HandleGmeExitRoom(struct FChatGMEDataResult Result); // Function LimNativeWidget.LimChatManager.HandleGmeExitRoom // (Net|NetReliableExec|Native|NetResponse|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void HandleGmeEnterRoom(struct FChatGMEDataResult Result); // Function LimNativeWidget.LimChatManager.HandleGmeEnterRoom // (Net|NetReliableNetRequest|Native|NetResponse|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void GMEUploadRecordedFile(struct FString FilePath); // Function LimNativeWidget.LimChatManager.GMEUploadRecordedFile // (Net|NetRequest|Exec|Event|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void GMEStopRecording(); // Function LimNativeWidget.LimChatManager.GMEStopRecording // (NetRequest|Exec|Event|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void GMEStopPlayFile(); // Function LimNativeWidget.LimChatManager.GMEStopPlayFile // (NetRequest|Exec|Event|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void GMEStartRecording(struct FString FilePath); // Function LimNativeWidget.LimChatManager.GMEStartRecording // (Net|Exec|Event|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void GMEResumeRecording(); // Function LimNativeWidget.LimChatManager.GMEResumeRecording // (Net|Exec|Event|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void GMEPlayRecordedFile(struct FString FilePath); // Function LimNativeWidget.LimChatManager.GMEPlayRecordedFile // (NetReliableNetRequest|Event|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void GMEPauseRecording(); // Function LimNativeWidget.LimChatManager.GMEPauseRecording // (NetReliableNetRequest|Event|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	int32_t GMEGetVoiceMicLevel(struct FString FilePath); // Function LimNativeWidget.LimChatManager.GMEGetVoiceMicLevel // (Net|NetReliableEvent|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	int32_t GMEGetVoiceFileDuration(struct FString FilePath); // Function LimNativeWidget.LimChatManager.GMEGetVoiceFileDuration // (Event|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void GMEDownloadRecordedFile(struct FString FileID, struct FString FilePath); // Function LimNativeWidget.LimChatManager.GMEDownloadRecordedFile // (Net|NetRequest|Exec|Native|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	int32_t GMECheckPlatformMicPermission(); // Function LimNativeWidget.LimChatManager.GMECheckPlatformMicPermission // (NetRequest|Exec|Native|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void GMECancelRecording(); // Function LimNativeWidget.LimChatManager.GMECancelRecording // (Net|NetReliableExec|Native|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void GMEAndroidPermissionResult(bool bResult); // Function LimNativeWidget.LimChatManager.GMEAndroidPermissionResult // (Net|Exec|Native|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void GetUserListState(struct TArray<struct FString>& InUserIDList); // Function LimNativeWidget.LimChatManager.GetUserListState // (NetRequest|Native|NetResponse|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void GetUserListInfo(struct TArray<struct FString> InUserIDList); // Function LimNativeWidget.LimChatManager.GetUserListInfo // (NetReliableNetRequest|Exec|NetResponse|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void GetUserInfo(struct FString InUserId); // Function LimNativeWidget.LimChatManager.GetUserInfo // (NetRequest|Exec|NetResponse|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void GetMiscConfigInfo(); // Function LimNativeWidget.LimChatManager.GetMiscConfigInfo // (Net|NetReliableExec|NetResponse|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void GetMessageInRange(struct FString ConvID, enum class ELimNativeConvType ConvType, struct FString FromMsgId, struct FString ToMsgId); // Function LimNativeWidget.LimChatManager.GetMessageInRange // (Net|NetRequest|NetResponse|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void GetMessage(struct FChatListConvData& TargetConv); // Function LimNativeWidget.LimChatManager.GetMessage // (NetReliableNetResponse|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	struct FString GetLimSlssvr(); // Function LimNativeWidget.LimChatManager.GetLimSlssvr // (NetResponse|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	struct FString GetLimSDKRegion(); // Function LimNativeWidget.LimChatManager.GetLimSDKRegion // (NetReliableNetRequest|Exec|Native|Event|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	int32_t GetLimGameID(); // Function LimNativeWidget.LimChatManager.GetLimGameID // (NetReliableNetRequest|Exec|Native|Event|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	struct ULimChatManager* GetInstance(); // Function LimNativeWidget.LimChatManager.GetInstance // (Net|NetRequest|Exec|Native|Event|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	struct FString GetGMERecordFilePath(); // Function LimNativeWidget.LimChatManager.GetGMERecordFilePath // (Net|NetReliableExec|Native|Event|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void GetFriendList(); // Function LimNativeWidget.LimChatManager.GetFriendList // (NetReliableExec|Native|Event|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	int32_t GetFarlightDomain(); // Function LimNativeWidget.LimChatManager.GetFarlightDomain // (NetReliableExec|Native|Event|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void GetConvMessage(struct FString ConvID, enum class ELimNativeConvType ConvType, struct FString FromMsgId, struct FString ToMsgId); // Function LimNativeWidget.LimChatManager.GetConvMessage // (Net|Native|Event|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void GetConvList(); // Function LimNativeWidget.LimChatManager.GetConvList // (Native|Event|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void GetConvChatLevelConfig(); // Function LimNativeWidget.LimChatManager.GetConvChatLevelConfig // (Native|Event|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void GetConnState(); // Function LimNativeWidget.LimChatManager.GetConnState // (Net|NetReliableNetRequest|Exec|Event|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void DiscardConv(struct FString ConvID, enum class ELimNativeConvType ConvType); // Function LimNativeWidget.LimChatManager.DiscardConv // (Net|NetRequest|Native|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	void DestroyInstance(); // Function LimNativeWidget.LimChatManager.DestroyInstance // (NetRequest|Native|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31468680
	bool CheckTargetIsContainIn(struct FChatListConvData& InConvData); // Function LimNativeWidget.LimChatManager.CheckTargetIsContainIn // (Net|Native|Static|NetMulticast|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810c80
};

// Class LimNativeWidget.LimNativeWidgetSettings
// Size: 0x100 (Inherited: 0x38)
struct ULimNativeWidgetSettings : UDeveloperSettings {
	struct FString rDownloadPath; // 0x38(0x10)
	int32_t FileIOThreadIntervalMs; // 0x48(0x04)
	float CachedDiskFileExpiredDuration; // 0x4c(0x04)
	float CachedResponseExpiredDuration; // 0x50(0x04)
	int32_t CachedResponseMaxCount; // 0x54(0x04)
	struct FSoftObjectPath LocalizationTable; // 0x58(0x18)
	struct FString EnvId; // 0x70(0x10)
	struct FString GME_AppId; // 0x80(0x10)
	struct FString GME_PrivateKey; // 0x90(0x10)
	struct FString GME_Test_AppId; // 0xa0(0x10)
	struct FString GME_Test_PrivateKey; // 0xb0(0x10)
	bool bTestGmeEnv; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	float GME_EventTick; // 0xc4(0x04)
	int32_t MaxRecordingTime; // 0xc8(0x04)
	bool bShowLimSdkLog; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	struct FString Lim_SDKRegion; // 0xd0(0x10)
	int32_t Lim_GameID; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FString Lim_Slssvr; // 0xe8(0x10)
	int32_t Use_Farlight_Domain; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
};

