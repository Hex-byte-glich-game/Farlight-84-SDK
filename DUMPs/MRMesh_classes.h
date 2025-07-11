// Class MRMesh.MeshReconstructorBase
// Size: 0x28 (Inherited: 0x28)
struct UMeshReconstructorBase : UObject {

	void StopReconstruction(); // Function MRMesh.MeshReconstructorBase.StopReconstruction // (NetReliableNetRequest|Exec|Native|Event|NetResponse|Static|UbergraphFunction|Private|Protected|NetServer|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316e3c40
	void StartReconstruction(); // Function MRMesh.MeshReconstructorBase.StartReconstruction // (Net|Exec|Native|Event|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|Delegate|NetServer|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316e40c0
	void PauseReconstruction(); // Function MRMesh.MeshReconstructorBase.PauseReconstruction // (NetReliableNetRequest|Exec|Native|Event|Private|Protected|HasOutParms|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316e40c0
	bool IsReconstructionStarted(); // Function MRMesh.MeshReconstructorBase.IsReconstructionStarted // (Net|NetRequest|Exec|Native|Event|Private|Protected|HasOutParms|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316e40c0
	bool IsReconstructionPaused(); // Function MRMesh.MeshReconstructorBase.IsReconstructionPaused // (Net|NetRequest|Exec|Native|Event|Private|Protected|HasOutParms|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316e40c0
	void DisconnectMRMesh(); // Function MRMesh.MeshReconstructorBase.DisconnectMRMesh // (Net|Exec|Native|Event|Private|Protected|HasOutParms|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316e40c0
	void ConnectMRMesh(struct UMRMeshComponent* Mesh); // Function MRMesh.MeshReconstructorBase.ConnectMRMesh // (Net|NetRequest|Exec|Native|Event|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316e40c0
};

// Class MRMesh.MockDataMeshTrackerComponent
// Size: 0x390 (Inherited: 0x320)
struct UMockDataMeshTrackerComponent : USceneComponent {
	struct FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x318(0x10)
	bool ScanWorld; // 0x328(0x01)
	bool RequestNormals; // 0x329(0x01)
	bool RequestVertexConfidence; // 0x32a(0x01)
	enum class EMeshTrackerVertexColorMode VertexColorMode; // 0x32b(0x01)
	struct TArray<struct FColor> BlockVertexColors; // 0x330(0x10)
	struct FLinearColor VertexColorFromConfidenceZero; // 0x340(0x10)
	struct FLinearColor VertexColorFromConfidenceOne; // 0x350(0x10)
	float UpdateInterval; // 0x360(0x04)
	struct UMRMeshComponent* MRMesh; // 0x368(0x08)
	char pad_370[0x20]; // 0x370(0x20)

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<float>& Confidence); // DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32813a50
	void DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh // (Net|Exec|Native|Event|Private|Protected|HasOutParms|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316e3e80
	void ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh // (Net|NetReliableNetRequest|Native|Event|Private|Protected|HasOutParms|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316e3e80
};

// Class MRMesh.MRMeshComponent
// Size: 0x5c0 (Inherited: 0x540)
struct UMRMeshComponent : UPrimitiveComponent {
	char pad_540[0x8]; // 0x540(0x08)
	struct UMaterialInterface* Material; // 0x548(0x08)
	bool bCreateMeshProxySections; // 0x550(0x01)
	bool bUpdateNavMeshOnMeshUpdate; // 0x551(0x01)
	bool bNeverCreateCollisionMesh; // 0x552(0x01)
	char pad_553[0x5]; // 0x553(0x05)
	struct UBodySetup* CachedBodySetup; // 0x558(0x08)
	struct TArray<struct UBodySetup*> BodySetups; // 0x560(0x10)
	struct UMaterialInterface* WireframeMaterial; // 0x570(0x08)
	char pad_578[0x48]; // 0x578(0x48)

	bool IsConnected(); // Function MRMesh.MRMeshComponent.IsConnected // (NetRequest|Exec|Native|Event|Private|Protected|HasOutParms|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316e3a00
	void ForceNavMeshUpdate(); // Function MRMesh.MRMeshComponent.ForceNavMeshUpdate // (Net|NetReliableExec|Native|Event|Private|Protected|HasOutParms|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316e3c40
	void Clear(); // Function MRMesh.MRMeshComponent.Clear // (NetReliableNetRequest|Native|Event|Private|Protected|HasOutParms|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316e3c40
};

