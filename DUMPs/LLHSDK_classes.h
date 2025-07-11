// Class LLHSDK.LLHSDKAppUtils
// Size: 0x28 (Inherited: 0x28)
struct ULLHSDKAppUtils : UObject {

	bool SDKConfigIsDebug(); // Function LLHSDK.LLHSDKAppUtils.SDKConfigIsDebug // (Net|NetRequest|Exec|Event|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467000
	bool IsSimulator(); // Function LLHSDK.LLHSDKAppUtils.IsSimulator // (Net|NetReliableNetRequest|Native|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314676c0
	bool IsPackageInstalled(struct FString InPackageName); // Function LLHSDK.LLHSDKAppUtils.IsPackageInstalled // (NetRequest|Native|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314676c0
	bool IsGrayRelease(); // Function LLHSDK.LLHSDKAppUtils.IsGrayRelease // (NetReliableNative|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314676c0
	struct FString GetVersionName(); // Function LLHSDK.LLHSDKAppUtils.GetVersionName // (Net|NetReliableNetRequest|Exec|Native|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314676c0
	struct FString GetVersionCode(); // Function LLHSDK.LLHSDKAppUtils.GetVersionCode // (Net|NetReliableNetRequest|Exec|Native|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314676c0
	struct FString GetSDKVersionName(); // Function LLHSDK.LLHSDKAppUtils.GetSDKVersionName // (Net|NetReliableNetRequest|Exec|Native|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314676c0
	struct FString GetSDKVersionCode(); // Function LLHSDK.LLHSDKAppUtils.GetSDKVersionCode // (Net|NetReliableNetRequest|Exec|Native|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314676c0
	struct FString GetRunningProcessName(); // Function LLHSDK.LLHSDKAppUtils.GetRunningProcessName // (Net|NetReliableNetRequest|Exec|Native|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314676c0
	struct FString GetOperatingSystemId(); // Function LLHSDK.LLHSDKAppUtils.GetOperatingSystemId // (Net|NetReliableNetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314676c0
	struct ULLHSDKAppUtils* GetInstance(); // Function LLHSDK.LLHSDKAppUtils.GetInstance // (Net|NetReliableNetRequest|Native|Event|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314676c0
	int64_t GetGameTime(); // Function LLHSDK.LLHSDKAppUtils.GetGameTime // (NetReliableNetRequest|Native|Event|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314676c0
	struct FString GetGameID(); // Function LLHSDK.LLHSDKAppUtils.GetGameID // (Net|NetReliableNetRequest|Exec|Native|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314676c0
	struct FString GetEnvId(); // Function LLHSDK.LLHSDKAppUtils.GetEnvId // (NetRequest|Native|Event|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314676c0
	struct FString GetDeviceUUID(); // Function LLHSDK.LLHSDKAppUtils.GetDeviceUUID // (Net|NetReliableNetRequest|Exec|Native|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314676c0
	struct FString GetChannelID(); // Function LLHSDK.LLHSDKAppUtils.GetChannelID // (Net|NetReliableNetRequest|Exec|Native|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314676c0
	struct FString GetBiosUUID(); // Function LLHSDK.LLHSDKAppUtils.GetBiosUUID // (Net|Exec|Event|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314676c0
	struct FString GetAppName(); // Function LLHSDK.LLHSDKAppUtils.GetAppName // (Net|NetRequest|Event|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314676c0
	struct FString GetAppIDRaw(); // Function LLHSDK.LLHSDKAppUtils.GetAppIDRaw // (Net|NetReliableEvent|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314676c0
	struct FString GetAppID(); // Function LLHSDK.LLHSDKAppUtils.GetAppID // (Net|Event|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314676c0
	void DestoryInstance(); // Function LLHSDK.LLHSDKAppUtils.DestoryInstance // (NetReliableExec|Native|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314676c0
};

// Class LLHSDK.LLHSDKCustomerService
// Size: 0x40 (Inherited: 0x28)
struct ULLHSDKCustomerService : UObject {
	struct FMulticastInlineDelegate OnReceiveNotification; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)

	void ShowCustomerServicePage(struct FString ExtInfoStr); // Function LLHSDK.LLHSDKCustomerService.ShowCustomerServicePage // (Net|NetReliableNetRequest|Native|Event|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467240
	void SetCustomerServiceDebug(bool& bIsPspDebug, struct FString PlayerId, int64_t ServerId); // Function LLHSDK.LLHSDKCustomerService.SetCustomerServiceDebug // (Net|NetRequest|Exec|Event|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467480
	void OnReceiveNotification__DelegateSignature(int32_t NotificationType); // DelegateFunction LLHSDK.LLHSDKCustomerService.OnReceiveNotification__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467480
	struct ULLHSDKCustomerService* GetInstance(); // Function LLHSDK.LLHSDKCustomerService.GetInstance // (Exec|Native|Event|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467480
	void DestoryInstance(); // Function LLHSDK.LLHSDKCustomerService.DestoryInstance // (Net|NetReliableExec|Native|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467480
};

// Class LLHSDK.LLHSDKDeviceUtils
// Size: 0x48 (Inherited: 0x28)
struct ULLHSDKDeviceUtils : UObject {
	struct FMulticastInlineDelegate OnGoogleAdID; // 0x28(0x10)
	struct FMulticastInlineDelegate OnDeviceScore; // 0x38(0x10)

	void OnGoogleAdID__DelegateSignature(struct FString GoogleAdID); // DelegateFunction LLHSDK.LLHSDKDeviceUtils.OnGoogleAdID__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	void OnDeviceScore__DelegateSignature(int32_t DeviceScore); // DelegateFunction LLHSDK.LLHSDKDeviceUtils.OnDeviceScore__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467240
	bool IsEmulator(); // Function LLHSDK.LLHSDKDeviceUtils.IsEmulator // (Net|NetReliableExec|Native|Event|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467240
	struct FString GetTotalRAM(); // Function LLHSDK.LLHSDKDeviceUtils.GetTotalRAM // (NetReliableNetRequest|Exec|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467240
	struct FString GetTotalMemorySize(); // Function LLHSDK.LLHSDKDeviceUtils.GetTotalMemorySize // (NetRequest|Exec|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467240
	struct FString GetTimezoneName(); // Function LLHSDK.LLHSDKDeviceUtils.GetTimezoneName // (NetReliableExec|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467240
	struct FString GetOSVersion(); // Function LLHSDK.LLHSDKDeviceUtils.GetOSVersion // (Net|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467240
	enum class ELLHSDKNetworkType GetNetworkTypeEnum(); // Function LLHSDK.LLHSDKDeviceUtils.GetNetworkTypeEnum // (Net|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810dc0
	struct FString GetNetworkType(); // Function LLHSDK.LLHSDKDeviceUtils.GetNetworkType // (Net|NetReliableNetRequest|Exec|Native|Event|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467240
	struct FString GetMacAddress(); // Function LLHSDK.LLHSDKDeviceUtils.GetMacAddress // (Net|NetReliableNetRequest|Exec|Native|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467240
	struct ULLHSDKDeviceUtils* GetInstance(); // Function LLHSDK.LLHSDKDeviceUtils.GetInstance // (Net|Exec|Native|Event|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467240
	struct FString GetIMSI(); // Function LLHSDK.LLHSDKDeviceUtils.GetIMSI // (Net|NetReliableNetRequest|Exec|Native|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467240
	struct FString GetIDFA(); // Function LLHSDK.LLHSDKDeviceUtils.GetIDFA // (Net|NetReliableNetRequest|Exec|Native|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467240
	void GetGoogleAdID(); // Function LLHSDK.LLHSDKDeviceUtils.GetGoogleAdID // (Net|NetReliableNetRequest|Native|Event|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467240
	struct FString GetDeviceType(); // Function LLHSDK.LLHSDKDeviceUtils.GetDeviceType // (Net|NetReliableNetRequest|Exec|Native|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467240
	void GetDeviceScore(); // Function LLHSDK.LLHSDKDeviceUtils.GetDeviceScore // (Net|NetReliableNative|Event|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467240
	struct FString GetDeviceModel(); // Function LLHSDK.LLHSDKDeviceUtils.GetDeviceModel // (Net|Native|Event|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467240
	struct FString GetDeviceID(); // Function LLHSDK.LLHSDKDeviceUtils.GetDeviceID // (Net|NetReliableNetRequest|Exec|Event|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467240
	struct FString GetDeviceCarrier(); // Function LLHSDK.LLHSDKDeviceUtils.GetDeviceCarrier // (Net|NetReliableNetRequest|Exec|Native|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467240
	struct FString GetDeviceBrand(); // Function LLHSDK.LLHSDKDeviceUtils.GetDeviceBrand // (Net|NetRequest|Exec|Event|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467240
	struct FString GetDeviceAbi(); // Function LLHSDK.LLHSDKDeviceUtils.GetDeviceAbi // (Net|NetReliableNetRequest|Exec|Native|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467240
	struct FString GetCPUModel(); // Function LLHSDK.LLHSDKDeviceUtils.GetCPUModel // (Net|NetReliableExec|Event|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467240
	struct FString GetCPUHardWareName(); // Function LLHSDK.LLHSDKDeviceUtils.GetCPUHardWareName // (Net|NetReliableExec|Event|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467240
	struct FString GetAvailableRAM(); // Function LLHSDK.LLHSDKDeviceUtils.GetAvailableRAM // (Net|NetReliableNetRequest|Event|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467240
	struct FString GetAndroidID(); // Function LLHSDK.LLHSDKDeviceUtils.GetAndroidID // (Net|NetReliableNetRequest|Exec|Native|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467240
	void DestoryInstance(); // Function LLHSDK.LLHSDKDeviceUtils.DestoryInstance // (Net|NetReliableExec|Native|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467240
};

// Class LLHSDK.LLHSDKLocalization
// Size: 0x28 (Inherited: 0x28)
struct ULLHSDKLocalization : UObject {

	void SetLocaleName(struct FString InLocale); // Function LLHSDK.LLHSDKLocalization.SetLocaleName // (NetRequest|Native|Event|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466700
	void SetLocale(enum class ELLHSDKSupportedLanguage InLocale); // Function LLHSDK.LLHSDKLocalization.SetLocale // (NetReliableNative|Event|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467000
	struct FString GetLocaleName(); // Function LLHSDK.LLHSDKLocalization.GetLocaleName // (Net|NetReliableNetRequest|Exec|Native|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467000
	struct FLLHSDKLocaleInfo GetLocaleInfo(); // Function LLHSDK.LLHSDKLocalization.GetLocaleInfo // (NetRequest|Exec|Native|Event|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467000
	enum class ELLHSDKSupportedLanguage GetLocaleEnum(); // Function LLHSDK.LLHSDKLocalization.GetLocaleEnum // (Net|NetReliableExec|Native|Event|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467000
	struct ULLHSDKLocalization* GetInstance(); // Function LLHSDK.LLHSDKLocalization.GetInstance // (Net|Exec|Native|Event|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467000
	void DestoryInstance(); // Function LLHSDK.LLHSDKLocalization.DestoryInstance // (NetRequest|Exec|Native|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467000
};

// Class LLHSDK.LLHSDKLogin
// Size: 0x128 (Inherited: 0x28)
struct ULLHSDKLogin : UObject {
	struct FMulticastInlineDelegate OnInitFinish; // 0x28(0x10)
	struct FMulticastInlineDelegate OnLoginFinish; // 0x38(0x10)
	struct FMulticastInlineDelegate OnLoginFailed; // 0x48(0x10)
	struct FMulticastInlineDelegate OnBindFinish; // 0x58(0x10)
	struct FMulticastInlineDelegate OnSwitchAccountFinish; // 0x68(0x10)
	struct FMulticastInlineDelegate OnSwitchAccountFailed; // 0x78(0x10)
	struct FMulticastInlineDelegate OnProtocolClick; // 0x88(0x10)
	struct FMulticastInlineDelegate OnLimSteamSDKInited; // 0x98(0x10)
	struct FMulticastInlineDelegate OnSteamAutoLogin; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnSteamRegister; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnGetSteamRegisterUrl; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnGetThirdPartyLoginResult; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnSteamBindUrlGet; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnSteamLoginResultSet; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnSteamGetAccountInfo; // 0x108(0x10)
	struct FMulticastInlineDelegate OnSteamBindFinish; // 0x118(0x10)

	void UpdateSteamCallBack(); // Function LLHSDK.LLHSDKLogin.UpdateSteamCallBack // (Net|NetReliableNetRequest|Static|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
	void SwitchOrLinkAccount(); // Function LLHSDK.LLHSDKLogin.SwitchOrLinkAccount // (Net|NetReliableNetRequest|Static|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	bool SteamRegister(struct FString Params); // Function LLHSDK.LLHSDKLogin.SteamRegister // (NetRequest|Static|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	bool SteamLoginResultSet(struct FString Params); // Function LLHSDK.LLHSDKLogin.SteamLoginResultSet // (NetReliableStatic|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	bool SteamGetAccountInfo(struct FString Params); // Function LLHSDK.LLHSDKLogin.SteamGetAccountInfo // (Net|NetReliableNetRequest|Exec|Native|Event|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	void SteamFree(); // Function LLHSDK.LLHSDKLogin.SteamFree // (Net|NetReliableNetRequest|Exec|Native|Event|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	bool SteamBindUrlGet(struct FString Params); // Function LLHSDK.LLHSDKLogin.SteamBindUrlGet // (NetRequest|Exec|Native|Event|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	bool SteamAutoLogin(struct FString Params); // Function LLHSDK.LLHSDKLogin.SteamAutoLogin // (NetReliableExec|Native|Event|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	void ShowProtocolViewV2Ok(); // Function LLHSDK.LLHSDKLogin.ShowProtocolViewV2Ok // (Exec|Native|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	void ShowProtocolViewV2Confirm(); // Function LLHSDK.LLHSDKLogin.ShowProtocolViewV2Confirm // (Net|Exec|Native|Event|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	struct FLLHSDKLoginUserInfo QueryCurrentUserInfo(); // Function LLHSDK.LLHSDKLogin.QueryCurrentUserInfo // (Net|NetReliableExec|Event|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	struct FLLHSDKLoginUser QueryCurrentUser(); // Function LLHSDK.LLHSDKLogin.QueryCurrentUser // (NetReliableNetRequest|Event|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	bool OpenSteamBindPage(struct FString URL); // Function LLHSDK.LLHSDKLogin.OpenSteamBindPage // (Net|NetReliableEvent|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	void OnProtocolClick__DelegateSignature(bool bConfirmed); // DelegateFunction LLHSDK.LLHSDKLogin.OnProtocolClick__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	void OnLoginFinish__DelegateSignature(struct FString AppUid, struct FString AppToken, enum class ELLHSDKLoginType LoginType); // DelegateFunction LLHSDK.LLHSDKLogin.OnLoginFinish__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	void OnLoginFailed__DelegateSignature(enum class ELLHSDKLoginType LoginType, int32_t ErrorCode); // DelegateFunction LLHSDK.LLHSDKLogin.OnLoginFailed__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	void OnInitFinish__DelegateSignature(); // DelegateFunction LLHSDK.LLHSDKLogin.OnInitFinish__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	void OnBindFinish__DelegateSignature(bool bSuccess, struct FString AppUid, struct FString AppToken, enum class ELLHSDKLoginType LoginType); // DelegateFunction LLHSDK.LLHSDKLogin.OnBindFinish__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	void Logout(); // Function LLHSDK.LLHSDKLogin.Logout // (Exec|Native|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	struct FString LoginUserInfo_ToString(struct FLLHSDKLoginUserInfo& InUserInfo); // Function LLHSDK.LLHSDKLogin.LoginUserInfo_ToString // (Net|Exec|Native|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810dc0
	struct FString LoginUser_ToString(struct FLLHSDKLoginUser& InUser); // Function LLHSDK.LLHSDKLogin.LoginUser_ToString // (Net|NetRequest|Exec|Native|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810dc0
	void Login(); // Function LLHSDK.LLHSDKLogin.Login // (Net|Exec|Native|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	void LimSteamSDKCallBack__DelegateSignature(struct FString Datas); // DelegateFunction LLHSDK.LLHSDKLogin.LimSteamSDKCallBack__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	void LimOnSteamLoginResultSet__DelegateSignature(struct FString AppUid, struct FString AppToken, struct FString AppId); // DelegateFunction LLHSDK.LLHSDKLogin.LimOnSteamLoginResultSet__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	bool IsInitFinish(); // Function LLHSDK.LLHSDKLogin.IsInitFinish // (Net|NetReliableNative|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	bool IsCurrentUserNewReg(); // Function LLHSDK.LLHSDKLogin.IsCurrentUserNewReg // (NetReliableExec|Native|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	bool InitLimSteamSDK(struct FString Params); // Function LLHSDK.LLHSDKLogin.InitLimSteamSDK // (Native|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	struct FString GetSteamToken(); // Function LLHSDK.LLHSDKLogin.GetSteamToken // (Exec|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	bool GetSteamRegisterUrl(struct FString Params); // Function LLHSDK.LLHSDKLogin.GetSteamRegisterUrl // (Net|NetRequest|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	struct ULLHSDKLogin* GetInstance(); // Function LLHSDK.LLHSDKLogin.GetInstance // (NetReliableExec|Native|Event|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	bool DoSteamBind(struct FString URL); // Function LLHSDK.LLHSDKLogin.DoSteamBind // (Net|NetRequest|Exec|Native|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	void DestoryInstance(); // Function LLHSDK.LLHSDKLogin.DestoryInstance // (NetRequest|Exec|Native|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	bool ClearAutoLogin(); // Function LLHSDK.LLHSDKLogin.ClearAutoLogin // (NetReliableExec|Native|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	bool CanContinueLogin(); // Function LLHSDK.LLHSDKLogin.CanContinueLogin // (Exec|Native|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
	void CancelSteamCallBack(); // Function LLHSDK.LLHSDKLogin.CancelSteamCallBack // (Net|Exec|Native|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466dc0
};

// Class LLHSDK.LLHSDKMisc
// Size: 0xc8 (Inherited: 0x28)
struct ULLHSDKMisc : UObject {
	struct FMulticastInlineDelegate OnBrowserClosed; // 0x28(0x10)
	struct FMulticastInlineDelegate OnScreenshotCaptured; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)
	struct FMulticastInlineDelegate OnFacebookPhotoShared; // 0x50(0x10)
	char pad_60[0x8]; // 0x60(0x08)
	struct FMulticastInlineDelegate OnSystemShared; // 0x68(0x10)
	char pad_78[0x8]; // 0x78(0x08)
	struct FMulticastInlineDelegate OnGetFacebookToken; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)
	struct FMulticastInlineDelegate OnQueryThirdPartyUserInfo; // 0x98(0x10)
	char pad_A8[0x8]; // 0xa8(0x08)
	struct FMulticastInlineDelegate OnRefreshFirebaseToken; // 0xb0(0x10)
	char pad_C0[0x8]; // 0xc0(0x08)

	void TwitterShareText(struct FString InText); // Function LLHSDK.LLHSDKMisc.TwitterShareText // (Net|NetReliableNetRequest|Native|Event|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466940
	void TwitterSharePhoto(struct FString InText, struct FString InFilePath); // Function LLHSDK.LLHSDKMisc.TwitterSharePhoto // (NetReliableEvent|NetResponse|Static|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
	void TryToEnableAndroidNotification(); // Function LLHSDK.LLHSDKMisc.TryToEnableAndroidNotification // (Exec|Native|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
	void SystemShare(int32_t& ShareType, struct FString Description, struct FString FilePath); // Function LLHSDK.LLHSDKMisc.SystemShare // (NetReliableNative|Event|NetResponse|NetMulticast|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
	void StartIOSFarlightBrowserWithOrientation(struct FString URL, struct FString Title, enum class ELLHSDKScreenOrientation Orientation); // Function LLHSDK.LLHSDKMisc.StartIOSFarlightBrowserWithOrientation // (Net|Exec|Event|NetResponse|NetMulticast|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
	void StartBrowserWithOrientation(struct FString URL, struct FString Title, enum class ELLHSDKScreenOrientation Orientation); // Function LLHSDK.LLHSDKMisc.StartBrowserWithOrientation // (Net|NetRequest|Event|NetResponse|NetMulticast|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810dc0
	void StartBrowser(struct FString URL, struct FString Title); // Function LLHSDK.LLHSDKMisc.StartBrowser // (Net|NetReliableNetRequest|Exec|Native|NetResponse|NetMulticast|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
	void RestartApplication(struct FString IntentString); // Function LLHSDK.LLHSDKMisc.RestartApplication // (Net|NetReliableNetRequest|Native|Event|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
	void RefreshFirebaseMessagingToken(); // Function LLHSDK.LLHSDKMisc.RefreshFirebaseMessagingToken // (Exec|Native|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
	void RefreshAndroidMediaScanner(struct FString InFullFilePath); // Function LLHSDK.LLHSDKMisc.RefreshAndroidMediaScanner // (Net|NetReliableNetRequest|Native|Event|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
	void QueryThirdPartUserInfo(); // Function LLHSDK.LLHSDKMisc.QueryThirdPartUserInfo // (Exec|Native|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
	void OpenSteamPayWebPage(struct FString URL); // Function LLHSDK.LLHSDKMisc.OpenSteamPayWebPage // (NetRequest|Exec|NetMulticast|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
	void OnSystemShared__DelegateSignature(bool bSuccess); // DelegateFunction LLHSDK.LLHSDKMisc.OnSystemShared__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
	void OnScreenshotCapturedEvent__DelegateSignature(struct FString FullPath); // DelegateFunction LLHSDK.LLHSDKMisc.OnScreenshotCapturedEvent__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
	void OnRefreshFirebaseToken__DelegateSignature(struct FString FirebaseToken); // DelegateFunction LLHSDK.LLHSDKMisc.OnRefreshFirebaseToken__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
	void OnQueryThirdPartUserInfo__DelegateSignature(bool Success, int32_t ErrorCode, struct TArray<struct FSDKSocialUserInfo> SocialUserInfoList); // DelegateFunction LLHSDK.LLHSDKMisc.OnQueryThirdPartUserInfo__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810dc0
	void OnGetFacebookToken__DelegateSignature(bool Result, struct FString Token, struct FString ApplicationId, struct FString UserId, struct FString GraphDomain); // DelegateFunction LLHSDK.LLHSDKMisc.OnGetFacebookToken__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
	void OnFacebookPhotoShared__DelegateSignature(struct FString FilePath, bool bSuccess); // DelegateFunction LLHSDK.LLHSDKMisc.OnFacebookPhotoShared__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
	void OnBrowserClosed__DelegateSignature(); // DelegateFunction LLHSDK.LLHSDKMisc.OnBrowserClosed__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
	void JumpToMarket(struct FString InAppPkg, struct FString InMarketPkg); // Function LLHSDK.LLHSDKMisc.JumpToMarket // (NetReliableEvent|NetResponse|Static|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
	void JumpToAppStore(struct FString AppStoreUrl); // Function LLHSDK.LLHSDKMisc.JumpToAppStore // (Net|NetReliableNetRequest|Native|Event|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
	bool IsFacebookShareable(); // Function LLHSDK.LLHSDKMisc.IsFacebookShareable // (Net|NetReliableExec|Native|Event|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
	bool IsAppRooted(); // Function LLHSDK.LLHSDKMisc.IsAppRooted // (Net|NetReliableExec|Native|Event|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
	bool IsAndroidNotificationEnabled(); // Function LLHSDK.LLHSDKMisc.IsAndroidNotificationEnabled // (NetReliableExec|Native|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
	struct ULLHSDKMisc* GetInstance(); // Function LLHSDK.LLHSDKMisc.GetInstance // (Net|NetRequest|Event|NetResponse|Static|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
	struct FString GetFirebaseMessagingToken(); // Function LLHSDK.LLHSDKMisc.GetFirebaseMessagingToken // (Net|NetReliableNetRequest|Exec|Native|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
	void GetFacebookToken(); // Function LLHSDK.LLHSDKMisc.GetFacebookToken // (Exec|Native|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
	void FacebookSharePhotoWithFileAndDescription(struct FString Description, struct FString FilePath); // Function LLHSDK.LLHSDKMisc.FacebookSharePhotoWithFileAndDescription // (NetReliableEvent|NetResponse|Static|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
	void FacebookSharePhotoByPath(struct FString InFilePath); // Function LLHSDK.LLHSDKMisc.FacebookSharePhotoByPath // (Net|NetReliableNetRequest|Native|Event|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
	void FacebookSharePhoto(); // Function LLHSDK.LLHSDKMisc.FacebookSharePhoto // (Exec|Native|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
	void FacebookShareLink(struct FString InLinkURL, struct FString InPreviewURL, struct FString InTitle, struct FString InDesc); // Function LLHSDK.LLHSDKMisc.FacebookShareLink // (NetRequest|Exec|Native|NetResponse|Static|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
	void DestoryInstance(); // Function LLHSDK.LLHSDKMisc.DestoryInstance // (NetReliableExec|Native|NetResponse|Static|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
	bool CheckGyroSensorSupport(); // Function LLHSDK.LLHSDKMisc.CheckGyroSensorSupport // (Net|NetReliableExec|Native|Event|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466b80
};

// Class LLHSDK.LLHSDKPay
// Size: 0xe0 (Inherited: 0x28)
struct ULLHSDKPay : UObject {
	struct FMulticastInlineDelegate OnLSteamQuerySkus; // 0x28(0x10)
	struct FMulticastInlineDelegate OnLSteamSDKPayApplied; // 0x38(0x10)
	struct FMulticastInlineDelegate OnGooglePayFinished; // 0x48(0x10)
	struct FMulticastInlineDelegate OnGoogleQuerySkuItemDetails; // 0x58(0x10)
	struct FMulticastInlineDelegate OnGoogleQuerySkuItemDetailsSubscription; // 0x68(0x10)
	struct FMulticastInlineDelegate OnGetGoogleConsumeGoods; // 0x78(0x10)
	struct FMulticastInlineDelegate OnGetGoogleConsumePointsGoods; // 0x88(0x10)
	struct FMulticastInlineDelegate OnIOSQuerySkus; // 0x98(0x10)
	struct FMulticastInlineDelegate OnIOSLLHPayFinished; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnGetIOSPurchaseExtNull; // 0xb8(0x10)
	char pad_C8[0x18]; // 0xc8(0x18)

	struct FString Test_Google_SkuItemDetailsToString(struct FLLHSDKGenericSkuItemsDetailList InDetails); // Function LLHSDK.LLHSDKPay.Test_Google_SkuItemDetailsToString // (Net|NetReliableNetRequest|Native|Event|NetResponse|NetMulticast|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810dc0
	void SteamQuerySkus(struct FString Params); // Function LLHSDK.LLHSDKPay.SteamQuerySkus // (NetReliableNetRequest|Exec|Event|NetResponse|NetMulticast|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466940
	void Steam_StartPay(struct FString SteamPayInfo); // Function LLHSDK.LLHSDKPay.Steam_StartPay // (Native|Event|NetResponse|NetMulticast|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466940
	void SetPayNotifyUrl(struct FString InNotifyUrl); // Function LLHSDK.LLHSDKPay.SetPayNotifyUrl // (Net|NetReliableNetRequest|Native|Event|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466940
	void OnLLHQuerySkus__DelegateSignature(struct FLLHSDKGenericSkuItemsDetailList ItemsDetailList, struct TArray<struct FString>& InvalidProductIDs); // DelegateFunction LLHSDK.LLHSDKPay.OnLLHQuerySkus__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466940
	void OnLLHPayFinished__DelegateSignature(bool bSuccess, int32_t ErrorCode, struct FString ErrorMsg, int32_t PayValue, struct FString ProductID, enum class ELLHSDKPayType PayType); // DelegateFunction LLHSDK.LLHSDKPay.OnLLHPayFinished__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466940
	void OnGoogleQuerySkuItemDetails__DelegateSignature(bool bSuccess, int32_t ErrorCode, struct FLLHSDKGenericSkuItemsDetailList ItemsDetailList); // DelegateFunction LLHSDK.LLHSDKPay.OnGoogleQuerySkuItemDetails__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810dc0
	void OnGooglePayFinished__DelegateSignature(bool bSuccess, int32_t ErrorCode, int32_t Price, struct FString ItemID, enum class ELLHSDKPayType PayType); // DelegateFunction LLHSDK.LLHSDKPay.OnGooglePayFinished__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810dc0
	void OnGetIOSPurchaseExtNull__DelegateSignature(struct FString AppUid, struct FString ProductID); // DelegateFunction LLHSDK.LLHSDKPay.OnGetIOSPurchaseExtNull__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466940
	void OnGetGoogleConsumeGoods__DelegateSignature(struct TArray<struct FString>& Skus); // DelegateFunction LLHSDK.LLHSDKPay.OnGetGoogleConsumeGoods__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466940
	void LSteamSDKQuerySkus__DelegateSignature(struct FString Datas); // DelegateFunction LLHSDK.LLHSDKPay.LSteamSDKQuerySkus__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466940
	void LSteamSDKPayApplied__DelegateSignature(struct FString Datas); // DelegateFunction LLHSDK.LLHSDKPay.LSteamSDKPayApplied__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466940
	void IOS_SetUserPayExtInCallback(struct FString ProductID, struct FString PayExt); // Function LLHSDK.LLHSDKPay.IOS_SetUserPayExtInCallback // (NetReliableEvent|NetResponse|Static|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466940
	void IOS_SetUserPayExt(struct FString PayExt); // Function LLHSDK.LLHSDKPay.IOS_SetUserPayExt // (Net|NetReliableNetRequest|Native|Event|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466940
	void IOS_SetAutoPayExt(bool bEnabled); // Function LLHSDK.LLHSDKPay.IOS_SetAutoPayExt // (NetReliableExec|NetMulticast|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466940
	void IOS_QuerySkus(struct TArray<struct FString>& ProductIDs); // Function LLHSDK.LLHSDKPay.IOS_QuerySkus // (Net|NetReliableNetRequest|NetMulticast|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466940
	void IOS_LLHPay(struct FString ProductID, struct FString PayExt); // Function LLHSDK.LLHSDKPay.IOS_LLHPay // (NetRequest|NetMulticast|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466940
	bool IOS_GetAutoPayExt(); // Function LLHSDK.LLHSDKPay.IOS_GetAutoPayExt // (Net|NetReliableNetMulticast|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466940
	void Google_StartPaySubscription(struct FString PayItemID, struct FString PayContext); // Function LLHSDK.LLHSDKPay.Google_StartPaySubscription // (NetReliableNetRequest|Exec|Native|Event|NetResponse|Static|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466940
	void Google_StartPay(struct FString PayItemID, struct FString PayContext); // Function LLHSDK.LLHSDKPay.Google_StartPay // (NetReliableNetRequest|Exec|Native|Event|NetResponse|Static|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466940
	void Google_QuerySkuItemDetailsSubscription(struct TArray<struct FString> Items); // Function LLHSDK.LLHSDKPay.Google_QuerySkuItemDetailsSubscription // (Exec|Native|Event|NetResponse|Static|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466940
	void Google_QuerySkuItemDetails(struct TArray<struct FString> Items); // Function LLHSDK.LLHSDKPay.Google_QuerySkuItemDetails // (Net|NetReliableNative|Event|NetResponse|Static|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466940
	bool Google_HasConsumePointsGoods(); // Function LLHSDK.LLHSDKPay.Google_HasConsumePointsGoods // (Net|NetReliableExec|Native|Event|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466940
	bool Google_HasConsumeGoods(); // Function LLHSDK.LLHSDKPay.Google_HasConsumeGoods // (Net|NetReliableExec|Native|Event|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466940
	struct TArray<struct FString> Google_GetConsumePointsGoods(); // Function LLHSDK.LLHSDKPay.Google_GetConsumePointsGoods // (Net|Native|Event|NetResponse|Static|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466940
	struct TArray<struct FString> Google_GetConsumeGoods(); // Function LLHSDK.LLHSDKPay.Google_GetConsumeGoods // (Net|Native|Event|NetResponse|Static|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466940
	void Google_ConsumeGoods(struct TArray<struct FString> Skus, struct TArray<struct FString> Contexts); // Function LLHSDK.LLHSDKPay.Google_ConsumeGoods // (Net|NetReliableNetRequest|Event|NetResponse|Static|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466940
	struct ULLHSDKPay* GetInstance(); // Function LLHSDK.LLHSDKPay.GetInstance // (NetReliableNetRequest|Event|NetResponse|Static|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466940
	void DestoryInstance(); // Function LLHSDK.LLHSDKPay.DestoryInstance // (Net|NetReliableExec|Native|NetResponse|Static|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466940
};

// Class LLHSDK.LLHSDKReport
// Size: 0x28 (Inherited: 0x28)
struct ULLHSDKReport : UObject {

	bool ReportToThirdParty_TwoParams(struct FString EventName, struct FString Parameter1, struct FString Parameter2); // Function LLHSDK.LLHSDKReport.ReportToThirdParty_TwoParams // (NetReliableExec|Native|NetResponse|NetMulticast|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31464c00
	bool ReportToThirdParty_ThreeParams(struct FString EventName, struct FString Parameter1, struct FString Parameter2, struct FString Parameter3); // Function LLHSDK.LLHSDKReport.ReportToThirdParty_ThreeParams // (NetRequest|Native|NetResponse|NetMulticast|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466700
	bool ReportToThirdParty_OneParam(struct FString EventName, struct FString Parameter); // Function LLHSDK.LLHSDKReport.ReportToThirdParty_OneParam // (Net|NetReliableNetRequest|Exec|NetMulticast|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466700
	bool ReportToThirdParty_FourParams(struct FString EventName, struct FString Parameter1, struct FString Parameter2, struct FString Parameter3, struct FString Parameter4); // Function LLHSDK.LLHSDKReport.ReportToThirdParty_FourParams // (Net|NetRequest|Exec|NetResponse|NetMulticast|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466700
	bool ReportToThirdParty_FiveParams(struct FString EventName, struct FString Parameter1, struct FString Parameter2, struct FString Parameter3, struct FString Parameter4, struct FString Parameter5); // Function LLHSDK.LLHSDKReport.ReportToThirdParty_FiveParams // (NetRequest|NetResponse|NetMulticast|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466700
	bool ReportToThirdParty(struct FString EventName); // Function LLHSDK.LLHSDKReport.ReportToThirdParty // (Net|NetResponse|NetMulticast|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466700
	bool ReportRevenueToThirdParty_TwoParams(struct FString EventName, enum class ELLHSDKReportCurrencyType Currency, struct FString Revenue, struct FString Parameter1, struct FString Parameter2); // Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty_TwoParams // (NetReliableExec|Native|Event|NetMulticast|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466700
	bool ReportRevenueToThirdParty_ThreeParams(struct FString EventName, enum class ELLHSDKReportCurrencyType Currency, struct FString Revenue, struct FString Parameter1, struct FString Parameter2, struct FString Parameter3); // Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty_ThreeParams // (NetReliableNative|Event|NetMulticast|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466700
	bool ReportRevenueToThirdParty_OneParam(struct FString EventName, enum class ELLHSDKReportCurrencyType Currency, struct FString Revenue, struct FString Parameter); // Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty_OneParam // (NetRequest|Exec|Event|NetMulticast|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466700
	bool ReportRevenueToThirdParty_FourParams(struct FString EventName, enum class ELLHSDKReportCurrencyType Currency, struct FString Revenue, struct FString Parameter1, struct FString Parameter2, struct FString Parameter3, struct FString Parameter4); // Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty_FourParams // (NetReliableEvent|NetMulticast|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466700
	bool ReportRevenueToThirdParty_FiveParams(struct FString EventName, enum class ELLHSDKReportCurrencyType Currency, struct FString Revenue, struct FString Parameter1, struct FString Parameter2, struct FString Parameter3, struct FString Parameter4, struct FString Parameter5); // Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty_FiveParams // (Net|NetReliableNetRequest|Native|NetMulticast|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466700
	bool ReportRevenueToThirdParty(struct FString EventName, enum class ELLHSDKReportCurrencyType Currency, struct FString Revenue); // Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty // (NetReliableNative|NetMulticast|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466700
	bool ReportJsonToLilithImmediate(struct FString EventName, struct FString JsonContentStr); // Function LLHSDK.LLHSDKReport.ReportJsonToLilithImmediate // (Net|NetReliableNetRequest|Exec|NetMulticast|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466700
	struct ULLHSDKReport* GetInstance(); // Function LLHSDK.LLHSDKReport.GetInstance // (Net|NetReliableNetRequest|Event|NetResponse|Static|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466700
	void DestoryInstance(); // Function LLHSDK.LLHSDKReport.DestoryInstance // (Net|NetReliableExec|Native|NetResponse|Static|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31466700
};

// Class LLHSDK.LLHSDKSettings
// Size: 0x260 (Inherited: 0x38)
struct ULLHSDKSettings : UDeveloperSettings {
	bool bHasFacebook; // 0x38(0x01)
	bool bHasTiktok; // 0x39(0x01)
	bool bHasFirebaseMessaging; // 0x3a(0x01)
	bool bIsSDKDebuggable; // 0x3b(0x01)
	bool bIsGrayRelease; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FString FacebookContentProviderForGrayRelease; // 0x40(0x10)
	struct FString FacebookAppIDForGrayRelease; // 0x50(0x10)
	struct FString SDKAppIdForGrayRelease; // 0x60(0x10)
	struct FString SDKGameIdForGrayRelease; // 0x70(0x10)
	struct FString PspAppIdForGrayRelease; // 0x80(0x10)
	struct FString AndroidDebugParkwayEnvIdForGrayRelease; // 0x90(0x10)
	struct FString AndroidReleaseParkwayEnvIdForGrayRelease; // 0xa0(0x10)
	struct FString FacebookContentProvider; // 0xb0(0x10)
	struct FString FacebookAppID; // 0xc0(0x10)
	struct FString IOSFacebookContentProvider; // 0xd0(0x10)
	struct FString IOSFacebookAppID; // 0xe0(0x10)
	struct FString SDKAppId; // 0xf0(0x10)
	struct FString SDKGameId; // 0x100(0x10)
	struct FString PspAppId; // 0x110(0x10)
	struct FString AndroidDebugParkwayEnvId; // 0x120(0x10)
	struct FString AndroidReleaseParkwayEnvId; // 0x130(0x10)
	struct FString IOSDebugParkwayEnvId; // 0x140(0x10)
	struct FString IOSReleaseParkwayEnvId; // 0x150(0x10)
	struct FString SteamDebugParkwayEnvId; // 0x160(0x10)
	struct FString SteamReleaseParkwayEnvId; // 0x170(0x10)
	struct FString SDKGroupName; // 0x180(0x10)
	struct FString SDKFeatureName; // 0x190(0x10)
	struct FString SDKVersion; // 0x1a0(0x10)
	bool bAndroidXEnabled; // 0x1b0(0x01)
	bool bMultiDexEnabled; // 0x1b1(0x01)
	bool bShouldUseOverridedConfig; // 0x1b2(0x01)
	char pad_1B3[0x5]; // 0x1b3(0x05)
	struct FString FirebaseCoreVersion; // 0x1b8(0x10)
	struct FString FirebaseMessagingVersion; // 0x1c8(0x10)
	struct FString GoogleServicesVersion; // 0x1d8(0x10)
	struct FString PlayServicesBasementVersion; // 0x1e8(0x10)
	enum class ELLHSDKGravity PlayPhoneGravity; // 0x1f8(0x01)
	bool bEnableAndroidScreenshotListener; // 0x1f9(0x01)
	bool bShowLogo; // 0x1fa(0x01)
	enum class ELLHSDKLoginUIStyle LoginUIStyle; // 0x1fb(0x01)
	bool bIOSShouldUseOverridedConfig; // 0x1fc(0x01)
	bool bIOSShowTermsByServer; // 0x1fd(0x01)
	char pad_1FE[0x2]; // 0x1fe(0x02)
	struct FString FacebookDisplayName; // 0x200(0x10)
	struct FString QQAppID; // 0x210(0x10)
	struct FString WechatAppID; // 0x220(0x10)
	struct FString GoogleReversedClientID; // 0x230(0x10)
	struct FString TwitterAPIKey; // 0x240(0x10)
	struct FString DefaultNSUserTrackingUsageDescription; // 0x250(0x10)
};

