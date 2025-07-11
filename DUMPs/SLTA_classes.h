// Class SLTA.SLTA_BPL
// Size: 0x28 (Inherited: 0x28)
struct USLTA_BPL : UObject {

	bool WriteTxt(struct FString saveString, struct FString Path); // Function SLTA.SLTA_BPL.WriteTxt // (Net|NetReliableNetRequest|Native|NetResponse|MulticastDelegate|Private|Protected|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d8d40
	void SLTA_SetDetailMode(struct USceneComponent* _sceneComponent); // Function SLTA.SLTA_BPL.SLTA_SetDetailMode // (NetReliableNetRequest|Native|NetResponse|MulticastDelegate|Private|Protected|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d0400
	int32_t SLTA_GetPrimitivesRHI(); // Function SLTA.SLTA_BPL.SLTA_GetPrimitivesRHI // (Net|NetRequest|Native|NetResponse|MulticastDelegate|Private|Protected|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d0400
	int32_t SLTA_GetLightMapIndex(struct UStaticMeshComponent* _ustaticMeshComponent); // Function SLTA.SLTA_BPL.SLTA_GetLightMapIndex // (Net|NetReliableNative|NetResponse|MulticastDelegate|Private|Protected|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d0400
	struct FVector4 SLTA_GetLightMapCoordinateBias(struct UStaticMeshComponent* _ustaticMeshComponent); // Function SLTA.SLTA_BPL.SLTA_GetLightMapCoordinateBias // (Net|Native|NetResponse|MulticastDelegate|Private|Protected|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d0400
	int32_t SLTA_GetDrawcalls(); // Function SLTA.SLTA_BPL.SLTA_GetDrawcalls // (Native|NetResponse|MulticastDelegate|Private|Protected|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d0400
	struct TArray<float> SLTA_GetCustomPrimitiveData(struct UPrimitiveComponent* _primitive); // Function SLTA.SLTA_BPL.SLTA_GetCustomPrimitiveData // (NetRequest|Exec|NetResponse|MulticastDelegate|Private|Protected|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d0400
	bool SLTA_ArrayToCSV(struct FString SaveDirectory, struct FString Filename, struct FString TitleName, struct TArray<struct FString> SaveText, int32_t ArrayIndex, bool AllowOverwriting); // Function SLTA.SLTA_BPL.SLTA_ArrayToCSV // (NetReliableNetRequest|Exec|Native|Event|MulticastDelegate|Private|Protected|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d0400
	struct FString ReadTxt(struct FString Path); // Function SLTA.SLTA_BPL.ReadTxt // (NetReliableExec|Native|Event|MulticastDelegate|Private|Protected|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d0400
};

