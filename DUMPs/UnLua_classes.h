// Class UnLua.UnLuaInterface
// Size: 0x28 (Inherited: 0x28)
struct UUnLuaInterface : UInterface {

	struct FString GetModuleName(); // Function UnLua.UnLuaInterface.GetModuleName // (NetReliableNetRequest|NetResponse|NetMulticast|Public|Private|Protected|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3146e080
};

// Class UnLua.UnLuaManager
// Size: 0x518 (Inherited: 0x28)
struct UUnLuaManager : UObject {
	char pad_28[0x4f0]; // 0x28(0x4f0)

	void TriggerAnimNotify(); // Function UnLua.UnLuaManager.TriggerAnimNotify // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a49c0
	void OnLatentActionCompleted(int32_t LinkID); // Function UnLua.UnLuaManager.OnLatentActionCompleted // (NetRequest|Exec|NetResponse|NetMulticast|Public|Private|Protected|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3146e080
	void OnActorDestroyed(struct AActor* Actor); // Function UnLua.UnLuaManager.OnActorDestroyed // (NetReliableExec|NetResponse|NetMulticast|Public|Private|Protected|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3146e080
	void InputVectorAxis(struct FVector& AxisValue); // Function UnLua.UnLuaManager.InputVectorAxis // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3146e080
	void InputTouch(enum class ETouchIndex FingerIndex, struct FVector& Location); // Function UnLua.UnLuaManager.InputTouch // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3146e080
	void InputGesture(float Value); // Function UnLua.UnLuaManager.InputGesture // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3146e080
	void InputAxis(float AxisValue); // Function UnLua.UnLuaManager.InputAxis // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3146e080
	void InputAction(struct FKey Key); // Function UnLua.UnLuaManager.InputAction // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3146e080
};

// Class UnLua.UnLuaPerformanceTestProxy
// Size: 0x288 (Inherited: 0x228)
struct AUnLuaPerformanceTestProxy : AActor {
	char pad_228[0x8]; // 0x228(0x08)
	int32_t MeshID; // 0x230(0x04)
	char pad_234[0x4]; // 0x234(0x04)
	struct FString MeshName; // 0x238(0x10)
	struct FVector COM; // 0x248(0x0c)
	char pad_254[0x4]; // 0x254(0x04)
	struct TArray<int32_t> Indices; // 0x258(0x10)
	struct TArray<struct FVector> Positions; // 0x268(0x10)
	struct TArray<struct FVector> PredictedPositions; // 0x278(0x10)

	void UpdatePositions(struct TArray<struct FVector>& NewPositions); // Function UnLua.UnLuaPerformanceTestProxy.UpdatePositions // (NetReliableNetRequest|Native|Event|NetMulticast|Public|Private|Protected|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32811220
	struct FString UpdateMeshName(struct FString NewName); // Function UnLua.UnLuaPerformanceTestProxy.UpdateMeshName // (NetReliableNetRequest|Native|NetResponse|NetMulticast|Public|Private|Protected|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a49c0
	int32_t UpdateMeshID(int32_t NewID); // Function UnLua.UnLuaPerformanceTestProxy.UpdateMeshID // (NetRequest|Native|NetResponse|NetMulticast|Public|Private|Protected|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a49c0
	void UpdateIndices(struct TArray<int32_t>& NewIndices); // Function UnLua.UnLuaPerformanceTestProxy.UpdateIndices // (NetReliableNetRequest|Native|Event|NetMulticast|Public|Private|Protected|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a49c0
	void Simulate(float DeltaTime); // Function UnLua.UnLuaPerformanceTestProxy.Simulate // (NetReliableNative|NetResponse|NetMulticast|Public|Private|Protected|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a49c0
	bool Raycast(struct FVector& Origin, struct FVector& Direction); // Function UnLua.UnLuaPerformanceTestProxy.Raycast // (NetReliableNetRequest|Exec|NetResponse|NetMulticast|Public|Private|Protected|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a49c0
	void NOP(); // Function UnLua.UnLuaPerformanceTestProxy.NOP // (NetReliableNetRequest|Exec|Native|NetResponse|Static|NetMulticast|MulticastDelegate|Public|Protected|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a49c0
	struct TArray<struct FVector> GetPredictedPositions(); // Function UnLua.UnLuaPerformanceTestProxy.GetPredictedPositions // (Exec|NetResponse|NetMulticast|Public|Private|Protected|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a49c0
	void GetPositions(struct TArray<struct FVector>& OutPositions); // Function UnLua.UnLuaPerformanceTestProxy.GetPositions // (NetReliableNetRequest|Native|Event|NetMulticast|Public|Private|Protected|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a49c0
	struct FString GetMeshName(); // Function UnLua.UnLuaPerformanceTestProxy.GetMeshName // (Net|NetReliableNetResponse|NetMulticast|Public|Private|Protected|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a49c0
	bool GetMeshInfo(int32_t& OutMeshID, struct FString& OutMeshName, struct FVector& OutCOM, struct TArray<int32_t>& OutIndices, struct TArray<struct FVector>& OutPositions, struct TArray<struct FVector>& OutPredictedPositions); // Function UnLua.UnLuaPerformanceTestProxy.GetMeshInfo // (Net|Exec|Native|Event|NetMulticast|Public|Private|Protected|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a49c0
	int32_t GetMeshID(); // Function UnLua.UnLuaPerformanceTestProxy.GetMeshID // (Net|Exec|Native|Event|NetMulticast|Public|Private|Protected|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a49c0
	void GetIndices(struct TArray<int32_t>& OutIndices); // Function UnLua.UnLuaPerformanceTestProxy.GetIndices // (NetReliableNetRequest|Native|Event|NetMulticast|Public|Private|Protected|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a49c0
	struct FVector GetCOM(); // Function UnLua.UnLuaPerformanceTestProxy.GetCOM // (Net|NetRequest|Native|Event|NetMulticast|Public|Private|Protected|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a49c0
};

