// Class AssetTags.AssetTagsSubsystem
// Size: 0x30 (Inherited: 0x30)
struct UAssetTagsSubsystem : UEngineSubsystem {

	struct TArray<struct FName> GetCollectionsContainingAssetPtr(struct UObject* AssetPtr); // Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr // (NetReliableNetRequest|Native|NetResponse|UbergraphFunction|Public|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d9640
	struct TArray<struct FName> GetCollectionsContainingAssetData(struct FAssetData& AssetData); // Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData // (Net|Native|NetResponse|UbergraphFunction|Public|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d9f40
	struct TArray<struct FName> GetCollectionsContainingAsset(struct FName AssetPathName); // Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset // (Net|NetRequest|Exec|NetResponse|UbergraphFunction|Public|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d9f40
	struct TArray<struct FName> GetCollections(); // Function AssetTags.AssetTagsSubsystem.GetCollections // (Net|NetReliableExec|NetResponse|UbergraphFunction|Public|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d9f40
	struct TArray<struct FAssetData> GetAssetsInCollection(struct FName Name); // Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection // (Net|NetRequest|NetResponse|UbergraphFunction|Public|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d9f40
	bool CollectionExists(struct FName Name); // Function AssetTags.AssetTagsSubsystem.CollectionExists // (Net|NetReliableNetResponse|UbergraphFunction|Public|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d9f40
};

