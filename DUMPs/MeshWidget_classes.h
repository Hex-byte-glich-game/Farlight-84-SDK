// Class MeshWidget.MeshWidgetUWidget
// Size: 0x148 (Inherited: 0x138)
struct UMeshWidgetUWidget : UWidget {
	char pad_138[0x10]; // 0x138(0x10)
};

// Class MeshWidget.ParticleWidget
// Size: 0x188 (Inherited: 0x148)
struct UParticleWidget : UMeshWidgetUWidget {
	struct USlateVectorArtData* TrailMeshAsset; // 0x148(0x08)
	int32_t MaxParticleCount; // 0x150(0x04)
	char pad_154[0x34]; // 0x154(0x34)
};

// Class MeshWidget.MeshRectangleWidget
// Size: 0x170 (Inherited: 0x148)
struct UMeshRectangleWidget : UMeshWidgetUWidget {
	struct UMaterialInterface* BaseMaterial; // 0x148(0x08)
	int32_t NumFloat4PerInstance; // 0x150(0x04)
	char pad_154[0x1c]; // 0x154(0x1c)

	void SetInstanceNum(int32_t NewNum); // Function MeshWidget.MeshRectangleWidget.SetInstanceNum // (Static|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d0400
	void ModifyInstanceNum(int32_t dNum); // Function MeshWidget.MeshRectangleWidget.ModifyInstanceNum // (Static|UbergraphFunction|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d0ac0
	void InitUnitTestProvider(); // Function MeshWidget.MeshRectangleWidget.InitUnitTestProvider // (NetReliableNetRequest|Exec|Native|NetResponse|Static|NetMulticast|MulticastDelegate|Public|Protected|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d0ac0
};

// Class MeshWidget.TextMeshWidget
// Size: 0x178 (Inherited: 0x148)
struct UTextMeshWidget : UMeshWidgetUWidget {
	struct UMaterialInterface* BaseMaterial; // 0x148(0x08)
	char pad_150[0x28]; // 0x150(0x28)
};

// Class MeshWidget.ProgressBarMeshWidget
// Size: 0x178 (Inherited: 0x148)
struct UProgressBarMeshWidget : UMeshWidgetUWidget {
	struct UMaterialInterface* BaseMaterial; // 0x148(0x08)
	char pad_150[0x28]; // 0x150(0x28)
};

