// Class WebBrowserWidget.WebBrowser
// Size: 0x180 (Inherited: 0x138)
struct UWebBrowser : UWidget {
	struct FMulticastInlineDelegate OnUrlChanged; // 0x138(0x10)
	struct FMulticastInlineDelegate OnBeforePopup; // 0x148(0x10)
	struct FString InitialURL; // 0x158(0x10)
	bool bSupportsTransparency; // 0x168(0x01)
	char pad_169[0x17]; // 0x169(0x17)

	void OnUrlChanged__DelegateSignature(struct FText& Text); // DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314aacc0
	void OnBeforePopup__DelegateSignature(struct FString URL, struct FString Frame); // DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ab140
	void LoadURL(struct FString NewURL); // Function WebBrowserWidget.WebBrowser.LoadURL // (Event|UbergraphFunction|Public|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ab140
	void LoadString(struct FString Contents, struct FString DummyURL); // Function WebBrowserWidget.WebBrowser.LoadString // (NetReliableExec|Native|UbergraphFunction|Public|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ab140
	struct FString GetUrl(); // Function WebBrowserWidget.WebBrowser.GetUrl // (Exec|Native|UbergraphFunction|Public|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ab140
	struct FText GetTitleText(); // Function WebBrowserWidget.WebBrowser.GetTitleText // (NetReliableNetRequest|Native|UbergraphFunction|Public|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ab140
	void ExecuteJavascript(struct FString ScriptText); // Function WebBrowserWidget.WebBrowser.ExecuteJavascript // (Net|NetReliableNative|UbergraphFunction|Public|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ab140
	void CloseSelf(); // Function WebBrowserWidget.WebBrowser.CloseSelf // (Net|NetReliableNative|UbergraphFunction|Public|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ab140
	void BindUObject(struct FString Name, struct UObject* Object, bool bIsPermanent); // Function WebBrowserWidget.WebBrowser.BindUObject // (NetReliableNetRequest|Exec|UbergraphFunction|Public|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ab140
};

// Class WebBrowserWidget.WebBrowserAssetManager
// Size: 0x78 (Inherited: 0x28)
struct UWebBrowserAssetManager : UObject {
	struct TSoftObjectPtr<UMaterial> DefaultMaterial; // 0x28(0x28)
	char pad_50[0x28]; // 0x50(0x28)
};

