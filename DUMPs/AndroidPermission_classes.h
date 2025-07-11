// Class AndroidPermission.AndroidPermissionCallbackProxy
// Size: 0x48 (Inherited: 0x28)
struct UAndroidPermissionCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnPermissionsGrantedDynamicDelegate; // 0x28(0x10)
	char pad_38[0x10]; // 0x38(0x10)
};

// Class AndroidPermission.AndroidPermissionFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAndroidPermissionFunctionLibrary : UBlueprintFunctionLibrary {

	bool CheckPermission(struct FString permission); // Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission // (Net|NetReliableNetRequest|Native|Event|Static|NetMulticast|Public|Private|Protected|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a40c0
	struct UAndroidPermissionCallbackProxy* AcquirePermissions(struct TArray<struct FString>& Permissions); // Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions // (Net|NetReliableNative|Event|Static|NetMulticast|Public|Private|Protected|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a4540
};

