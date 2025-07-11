// Class ImgMedia.ImgMediaSource
// Size: 0xb0 (Inherited: 0x88)
struct UImgMediaSource : UBaseMediaSource {
	struct FFrameRate FrameRateOverride; // 0x88(0x08)
	struct FString ProxyOverride; // 0x90(0x10)
	struct FDirectoryPath SequencePath; // 0xa0(0x10)

	void SetSequencePath(struct FString Path); // Function ImgMedia.ImgMediaSource.SetSequencePath // (NetReliableNetRequest|Exec|Static|UbergraphFunction|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314dcc40
	struct FString GetSequencePath(); // Function ImgMedia.ImgMediaSource.GetSequencePath // (Net|NetReliableExec|Static|UbergraphFunction|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d5500
	void GetProxies(struct TArray<struct FString>& OutProxies); // Function ImgMedia.ImgMediaSource.GetProxies // (Exec|Static|UbergraphFunction|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d5500
};

