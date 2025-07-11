// Class AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy
// Size: 0x88 (Inherited: 0x28)
struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
	struct FAppleImageUtilsImageConversionResult ConversionResult; // 0x60(0x20)
	char pad_80[0x8]; // 0x80(0x08)

	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToTIFF(struct UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF // (NetReliableNetRequest|NetResponse|NetMulticast|Public|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314da3c0
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToPNG(struct UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG // (NetResponse|NetMulticast|Public|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314db140
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToJPEG(struct UTexture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG // (Net|Exec|Native|Event|NetMulticast|Public|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314db140
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToHEIF(struct UTexture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF // (Net|Native|Event|NetMulticast|Public|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314db140
};

// Class AppleImageUtils.AppleImageInterface
// Size: 0x28 (Inherited: 0x28)
struct UAppleImageInterface : UInterface {
};

