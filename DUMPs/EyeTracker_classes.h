// Class EyeTracker.EyeTrackerFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UEyeTrackerFunctionLibrary : UBlueprintFunctionLibrary {

	void SetEyeTrackedPlayer(struct APlayerController* PlayerController); // Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer // (Net|NetReliableNetRequest|Native|Static|NetMulticast|MulticastDelegate|Public|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170f4c0
	bool IsStereoGazeDataAvailable(); // Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable // (NetReliableNetRequest|Native|Static|NetMulticast|MulticastDelegate|Public|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170f940
	bool IsEyeTrackerConnected(); // Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected // (Net|NetRequest|Native|Static|NetMulticast|MulticastDelegate|Public|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170f940
	bool GetStereoGazeData(struct FEyeTrackerStereoGazeData& OutGazeData); // Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData // (Net|NetReliableNative|Static|NetMulticast|MulticastDelegate|Public|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170f940
	bool GetGazeData(struct FEyeTrackerGazeData& OutGazeData); // Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData // (Native|Static|NetMulticast|MulticastDelegate|Public|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170f940
};

