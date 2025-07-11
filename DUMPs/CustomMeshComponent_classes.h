// Class CustomMeshComponent.CustomMeshComponent
// Size: 0x590 (Inherited: 0x580)
struct UCustomMeshComponent : UMeshComponent {
	char pad_580[0x10]; // 0x580(0x10)

	bool SetCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle>& Triangles); // Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles // (Net|NetReliableNetRequest|Native|Event|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314dfb80
	void ClearCustomMeshTriangles(); // Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles // (Net|NetReliableNetRequest|Native|Event|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314dfdc0
	void AddCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle>& Triangles); // Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles // (NetRequest|Native|Event|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314dfdc0
};

