// Class ClothingSystemRuntimeInterface.ClothConfigBase
// Size: 0x28 (Inherited: 0x28)
struct UClothConfigBase : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
// Size: 0x28 (Inherited: 0x28)
struct UClothSharedSimConfigBase : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothingAssetBase
// Size: 0x48 (Inherited: 0x28)
struct UClothingAssetBase : UObject {
	struct FString ImportedFilePath; // 0x28(0x10)
	struct FGuid AssetGuid; // 0x38(0x10)
};

// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// Size: 0x28 (Inherited: 0x28)
struct UClothingSimulationFactory : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
// Size: 0x30 (Inherited: 0x28)
struct UClothingSimulationInteractor : UObject {
	char pad_28[0x8]; // 0x28(0x08)

	void SetAnimDriveSpringStiffness(float InStiffness); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness // (NetRequest|Native|Event|NetResponse|NetMulticast|MulticastDelegate|Public|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170f940
	void PhysicsAssetUpdated(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated // (Net|Exec|Native|Event|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|Delegate|NetServer|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170fdc0
	void EnableGravityOverride(struct FVector& InVector); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride // (NetReliableNative|Event|NetResponse|NetMulticast|MulticastDelegate|Public|NetServer|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170fdc0
	void DisableGravityOverride(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride // (NetReliableEvent|NetResponse|Static|UbergraphFunction|Public|Private|Protected|Delegate|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170fdc0
	void ClothConfigUpdated(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated // (NetReliableNetRequest|Exec|Native|Event|NetResponse|Static|UbergraphFunction|Private|Protected|NetServer|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170fdc0
};

// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
// Size: 0xe0 (Inherited: 0x28)
struct UClothPhysicalMeshDataBase_Legacy : UObject {
	struct TArray<struct FVector> Vertices; // 0x28(0x10)
	struct TArray<struct FVector> Normals; // 0x38(0x10)
	struct TArray<uint32_t> Indices; // 0x48(0x10)
	struct TArray<float> InverseMasses; // 0x58(0x10)
	struct TArray<struct FClothVertBoneData> BoneData; // 0x68(0x10)
	int32_t NumFixedVerts; // 0x78(0x04)
	int32_t MaxBoneWeights; // 0x7c(0x04)
	struct TArray<uint32_t> SelfCollisionIndices; // 0x80(0x10)
	char pad_90[0x50]; // 0x90(0x50)
};

