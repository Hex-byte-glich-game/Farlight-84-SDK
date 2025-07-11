// Class SolarlandResUpdate.DownloadFileTask
// Size: 0xd8 (Inherited: 0x28)
struct UDownloadFileTask : UObject {
	struct FMulticastInlineDelegate OnDownloadComplete; // 0x28(0x10)
	struct FMulticastInlineDelegate OnDownloadProgress; // 0x38(0x10)
	struct FMulticastInlineDelegate OnDownloadFailed; // 0x48(0x10)
	char pad_58[0x80]; // 0x58(0x80)

	void StartDownload(); // Function SolarlandResUpdate.DownloadFileTask.StartDownload // (NetRequest|Native|Event|NetMulticast|MulticastDelegate|Delegate|NetServer|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316debc0
	void SetSaveToFile(bool InSet); // Function SolarlandResUpdate.DownloadFileTask.SetSaveToFile // (NetReliableNative|Event|NetMulticast|MulticastDelegate|Delegate|NetServer|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316d0640
	void SetNeedDecode(bool InNeedDecode); // Function SolarlandResUpdate.DownloadFileTask.SetNeedDecode // (Native|Event|NetMulticast|MulticastDelegate|Delegate|NetServer|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316d0640
	void SetForceRedownload(bool inForceRedownload); // Function SolarlandResUpdate.DownloadFileTask.SetForceRedownload // (NetReliableNetRequest|Exec|Event|NetMulticast|MulticastDelegate|Delegate|NetServer|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316d0640
	struct FString GetUrl(); // Function SolarlandResUpdate.DownloadFileTask.GetUrl // (NetRequest|Exec|Event|NetMulticast|MulticastDelegate|Delegate|NetServer|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316d0640
	struct UDownloadFileTask* CreateNoFile(struct FString URL, bool bByChunk); // Function SolarlandResUpdate.DownloadFileTask.CreateNoFile // (Exec|Event|NetMulticast|MulticastDelegate|Delegate|NetServer|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316d0640
	struct UDownloadFileTask* Create(struct FString URL, struct FString FileDirectory, struct FString Filename, bool bByChunk, bool bForceWrite); // Function SolarlandResUpdate.DownloadFileTask.Create // (Net|Event|NetMulticast|MulticastDelegate|Delegate|NetServer|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316d0640
};

// Class SolarlandResUpdate.SolarlandResUpdater
// Size: 0x100 (Inherited: 0x28)
struct USolarlandResUpdater : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct FPakFileEntry> ToDownloadPakList; // 0x30(0x10)
	struct FDelegate OnPatchPrompt; // 0x40(0x10)
	struct FDelegate OnPatchComplete; // 0x50(0x10)
	struct FDelegate OnPatchFailed; // 0x60(0x10)
	struct FDelegate OnCDNDownloadFailed; // 0x70(0x10)
	struct FDelegate OnPatchProgress; // 0x80(0x10)
	struct FDelegate OnDownloadServerList; // 0x90(0x10)
	struct FDelegate OnServerClose; // 0xa0(0x10)
	struct FDelegate OnBackdoorComplete; // 0xb0(0x10)
	struct FDelegate OnBackdoorFaild; // 0xc0(0x10)
	struct FDelegate OnBackdoorProgress; // 0xd0(0x10)
	struct FDelegate OnAnnouncementGet; // 0xe0(0x10)
	struct FDelegate OnAnnouncementGetFail; // 0xf0(0x10)
};

