// Class AnoSDK.AnoSDK
// Size: 0x88 (Inherited: 0x28)
struct UAnoSDK : UObject {
	struct FMulticastInlineDelegate OnAnoRecvAntiData; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)
	struct FMulticastInlineDelegate OnAnoSentDataToSvr; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
	struct FMulticastInlineDelegate OnAnoSentCoreData; // 0x58(0x10)
	char pad_68[0x8]; // 0x68(0x08)
	struct FMulticastInlineDelegate OnAnoSentCoreTimeData; // 0x70(0x10)
	char pad_80[0x8]; // 0x80(0x08)

	void OnAnoSentAntiData__DelegateSignature(struct FAnoSDKAntiData AntiData); // DelegateFunction AnoSDK.AnoSDK.OnAnoSentAntiData__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f328119a0
	void OnAnoRecvAntiData__DelegateSignature(int32_t Type, struct FString AntiData); // DelegateFunction AnoSDK.AnoSDK.OnAnoRecvAntiData__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d40c0
	struct UAnoSDK* GetInstance(); // Function AnoSDK.AnoSDK.GetInstance // (Net|NetRequest|Native|Event|NetMulticast|Protected|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d40c0
	void DestoryInstance(); // Function AnoSDK.AnoSDK.DestoryInstance // (NetRequest|Native|Event|NetMulticast|Protected|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d40c0
	void AnoUESDKSetUserInfo(enum class ETssSDKEntryId EntryId, struct FString OpenId); // Function AnoSDK.AnoSDK.AnoUESDKSetUserInfo // (Native|Event|NetMulticast|Protected|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f328119a0
	void AnoUESDKSetCSChannelDomain(struct FString DomainName); // Function AnoSDK.AnoSDK.AnoUESDKSetCSChannelDomain // (Net|NetReliableNetRequest|Native|Event|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d40c0
	void AnoUESDKSetChannelIP(struct FString IP); // Function AnoSDK.AnoSDK.AnoUESDKSetChannelIP // (Net|NetReliableNetRequest|Native|Event|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d40c0
	void AnoUESDKSendSDKCoreData(); // Function AnoSDK.AnoSDK.AnoUESDKSendSDKCoreData // (Exec|Native|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d40c0
	void AnoUESDKSendDataToSvr(); // Function AnoSDK.AnoSDK.AnoUESDKSendDataToSvr // (Exec|Native|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d40c0
	void AnoUESDKSendCoreTimeData(); // Function AnoSDK.AnoSDK.AnoUESDKSendCoreTimeData // (Net|NetReliableNetRequest|Exec|Event|NetMulticast|Protected|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d40c0
	void AnoUESDKReportThreadShutDown(); // Function AnoSDK.AnoSDK.AnoUESDKReportThreadShutDown // (Native|Public|Private|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d40c0
	void AnoUESDKReportThreadInit(); // Function AnoSDK.AnoSDK.AnoUESDKReportThreadInit // (Native|Public|Private|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d40c0
	void AnoUESDKRegistInfoListener(); // Function AnoSDK.AnoSDK.AnoUESDKRegistInfoListener // (Exec|Native|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d40c0
	void AnoUESDKOnResume(); // Function AnoSDK.AnoSDK.AnoUESDKOnResume // (Exec|Native|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d40c0
	void AnoUESDKOnRecvSignature(struct FString Name, struct FString Buf, int32_t Len, int32_t Crc); // Function AnoSDK.AnoSDK.AnoUESDKOnRecvSignature // (NetReliableExec|Event|NetMulticast|Protected|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d40c0
	void AnoUESDKOnRecvData(struct FString Data); // Function AnoSDK.AnoSDK.AnoUESDKOnRecvData // (Net|NetReliableNetRequest|Native|Event|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d40c0
	void AnoUESDKOnPause(); // Function AnoSDK.AnoSDK.AnoUESDKOnPause // (Exec|Native|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d40c0
	void AnoUESDKIoctl(int32_t Request, struct FString Cmd); // Function AnoSDK.AnoSDK.AnoUESDKIoctl // (NetReliableNetRequest|Event|NetMulticast|Protected|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d40c0
	void AnoUESDKInit(int32_t GameID, struct FString AppKey); // Function AnoSDK.AnoSDK.AnoUESDKInit // (NetReliableEvent|NetMulticast|Protected|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d40c0
};

// Class AnoSDK.AnoSDKSettings
// Size: 0x40 (Inherited: 0x38)
struct UAnoSDKSettings : UDeveloperSettings {
	bool bEnableAnoSDK; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

