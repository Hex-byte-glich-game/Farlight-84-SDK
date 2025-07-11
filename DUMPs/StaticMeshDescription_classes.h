// Class StaticMeshDescription.StaticMeshDescription
// Size: 0x390 (Inherited: 0x390)
struct UStaticMeshDescription : UMeshDescriptionBase {

	void SetVertexInstanceUV(struct FVertexInstanceID VertexInstanceID, struct FVector2D UV, int32_t UVIndex); // Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV // (NetRequest|Native|NetResponse|Public|Private|Protected|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170fdc0
	void SetPolygonGroupMaterialSlotName(struct FPolygonGroupID PolygonGroupID, struct FName& SlotName); // Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName // (Net|Native|NetResponse|Public|Private|Protected|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31709f40
	struct FVector2D GetVertexInstanceUV(struct FVertexInstanceID VertexInstanceID, int32_t UVIndex); // Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV // (NetReliableNetRequest|Exec|NetResponse|Public|Private|Protected|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31709f40
	void CreateCube(struct FVector Center, struct FVector HalfExtents, struct FPolygonGroupID PolygonGroup, struct FPolygonID& PolygonID_PlusX, struct FPolygonID& PolygonID_MinusX, struct FPolygonID& PolygonID_PlusY, struct FPolygonID& PolygonID_MinusY, struct FPolygonID& PolygonID_PlusZ, struct FPolygonID& PolygonID_MinusZ); // Function StaticMeshDescription.StaticMeshDescription.CreateCube // (Net|NetResponse|Public|Private|Protected|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31709f40
};

