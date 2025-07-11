// Class RichtapTools.RichtapController
// Size: 0x90 (Inherited: 0x28)
struct URichtapController : UObject {
	char pad_28[0x18]; // 0x28(0x18)
	struct TMap<struct FString, struct URichtapClip*> HeDataMap; // 0x40(0x50)

	void SetRichtapEnable(bool On); // Function RichtapTools.RichtapController.SetRichtapEnable // (Net|NetReliableNetRequest|Native|Event|UbergraphFunction|Public|Private|Protected|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a3c40
	void SetEnableRichtap(bool bIsEnableRichtap); // Function RichtapTools.RichtapController.SetEnableRichtap // (Net|NetRequest|Native|Event|UbergraphFunction|Public|Private|Protected|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a40c0
};

