// Class CableComponent.CableActor
// Size: 0x230 (Inherited: 0x228)
struct ACableActor : AActor {
	struct UCableComponent* CableComponent; // 0x228(0x08)
};

// Class CableComponent.CableComponent
// Size: 0x610 (Inherited: 0x580)
struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0x578(0x01)
	bool bAttachEnd; // 0x579(0x01)
	struct FComponentReference AttachEndTo; // 0x580(0x28)
	struct FName AttachEndToSocketName; // 0x5a8(0x08)
	struct FVector EndLocation; // 0x5b0(0x0c)
	float CableLength; // 0x5bc(0x04)
	int32_t NumSegments; // 0x5c0(0x04)
	float SubstepTime; // 0x5c4(0x04)
	int32_t SolverIterations; // 0x5c8(0x04)
	bool bEnableStiffness; // 0x5cc(0x01)
	bool bEnableCollision; // 0x5cd(0x01)
	float CollisionFriction; // 0x5d0(0x04)
	struct FVector CableForce; // 0x5d4(0x0c)
	float CableGravityScale; // 0x5e0(0x04)
	float CableWidth; // 0x5e4(0x04)
	int32_t NumSides; // 0x5e8(0x04)
	float TileMaterial; // 0x5ec(0x04)
	char pad_5F0[0x20]; // 0x5f0(0x20)

	void SetAttachEndToComponent(struct USceneComponent* Component, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndToComponent // (Net|NetRequest|Exec|Native|Event|NetResponse|NetMulticast|UbergraphFunction|Public|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314dfdc0
	void SetAttachEndTo(struct AActor* Actor, struct FName ComponentProperty, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndTo // (Net|Exec|Native|Event|NetResponse|NetMulticast|UbergraphFunction|Public|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d9640
	void GetCableParticleLocations(struct TArray<struct FVector>& Locations); // Function CableComponent.CableComponent.GetCableParticleLocations // (NetReliableNetRequest|Native|Event|NetResponse|NetMulticast|UbergraphFunction|Public|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d9640
	struct USceneComponent* GetAttachedComponent(); // Function CableComponent.CableComponent.GetAttachedComponent // (NetReliableNetRequest|Native|Event|NetResponse|NetMulticast|UbergraphFunction|Public|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d9640
	struct AActor* GetAttachedActor(); // Function CableComponent.CableComponent.GetAttachedActor // (Net|NetRequest|Native|Event|NetResponse|NetMulticast|UbergraphFunction|Public|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d9640
};

