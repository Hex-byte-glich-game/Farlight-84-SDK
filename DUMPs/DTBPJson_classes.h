// Class DTBPJson.DTBPJsonBPLib
// Size: 0x28 (Inherited: 0x28)
struct UDTBPJsonBPLib : UBlueprintFunctionLibrary {

	void StructToJson(struct FDTStruct& Struct, struct FString& Json, bool PrettyPrint); // Function DTBPJson.DTBPJsonBPLib.StructToJson // (Net|NetRequest|Exec|Native|NetResponse|Static|NetMulticast|MulticastDelegate|Protected|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d25c0
	void JsonToStruct(struct FDTStruct& Struct, struct FString Json); // Function DTBPJson.DTBPJsonBPLib.JsonToStruct // (Net|Exec|Native|NetResponse|Static|NetMulticast|MulticastDelegate|Protected|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d2800
};

