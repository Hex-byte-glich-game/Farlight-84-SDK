// Class VariantManagerContent.LevelVariantSets
// Size: 0x90 (Inherited: 0x28)
struct ULevelVariantSets : UObject {
	struct UObject* DirectorClass; // 0x28(0x08)
	struct TArray<struct UVariantSet*> VariantSets; // 0x30(0x10)
	char pad_40[0x50]; // 0x40(0x50)

	struct UVariantSet* GetVariantSetByName(struct FString VariantSetName); // Function VariantManagerContent.LevelVariantSets.GetVariantSetByName // (Net|NetRequest|Event|Static|UbergraphFunction|Public|Private|Protected|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314625c0
	struct UVariantSet* GetVariantSet(int32_t VariantSetIndex); // Function VariantManagerContent.LevelVariantSets.GetVariantSet // (Net|NetReliableEvent|Static|UbergraphFunction|Public|Private|Protected|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31462800
	int32_t GetNumVariantSets(); // Function VariantManagerContent.LevelVariantSets.GetNumVariantSets // (NetReliableNetRequest|Native|Static|UbergraphFunction|Public|Private|Protected|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31462800
};

// Class VariantManagerContent.LevelVariantSetsActor
// Size: 0x240 (Inherited: 0x228)
struct ALevelVariantSetsActor : AActor {
	struct FSoftObjectPath LevelVariantSets; // 0x228(0x18)

	bool SwitchOnVariantByName(struct FString VariantSetName, struct FString VariantName); // Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName // (Net|NetRequest|Native|Event|Static|UbergraphFunction|Public|Private|Protected|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31462140
	bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex); // Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex // (NetReliableNative|Event|Static|UbergraphFunction|Public|Private|Protected|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314625c0
	void SetLevelVariantSets(struct ULevelVariantSets* InVariantSets); // Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets // (Native|Event|Static|UbergraphFunction|Public|Private|Protected|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314625c0
	struct ULevelVariantSets* GetLevelVariantSets(bool bLoad); // Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets // (NetReliableNative|Static|UbergraphFunction|Public|Private|Protected|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314625c0
};

// Class VariantManagerContent.LevelVariantSetsFunctionDirector
// Size: 0x40 (Inherited: 0x28)
struct ULevelVariantSetsFunctionDirector : UObject {
	char pad_28[0x18]; // 0x28(0x18)
};

// Class VariantManagerContent.PropertyValue
// Size: 0x1b8 (Inherited: 0x28)
struct UPropertyValue : UObject {
	char pad_28[0x60]; // 0x28(0x60)
	struct TArray<struct TFieldPath<FProperty>> Properties; // 0x88(0x10)
	struct TArray<int32_t> PropertyIndices; // 0x98(0x10)
	struct TArray<struct FCapturedPropSegment> CapturedPropSegments; // 0xa8(0x10)
	struct FString FullDisplayString; // 0xb8(0x10)
	struct FName PropertySetterName; // 0xc8(0x08)
	struct TMap<struct FString, struct FString> PropertySetterParameterDefaults; // 0xd0(0x50)
	bool bHasRecordedData; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct UObject* LeafPropertyClass; // 0x128(0x08)
	char pad_130[0x8]; // 0x130(0x08)
	struct TArray<char> ValueBytes; // 0x138(0x10)
	enum class EPropertyValueCategory PropCategory; // 0x148(0x01)
	char pad_149[0x6f]; // 0x149(0x6f)

	bool HasRecordedData(); // Function VariantManagerContent.PropertyValue.HasRecordedData // (Net|Exec|Event|Static|UbergraphFunction|Public|Private|Protected|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31461180
	struct FText GetPropertyTooltip(); // Function VariantManagerContent.PropertyValue.GetPropertyTooltip // (Net|Exec|Native|Static|UbergraphFunction|Public|Private|Protected|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31462140
	struct FString GetFullDisplayString(); // Function VariantManagerContent.PropertyValue.GetFullDisplayString // (Net|Native|Static|UbergraphFunction|Public|Private|Protected|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31462140
};

// Class VariantManagerContent.PropertyValueTransform
// Size: 0x1b8 (Inherited: 0x1b8)
struct UPropertyValueTransform : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueVisibility
// Size: 0x1b8 (Inherited: 0x1b8)
struct UPropertyValueVisibility : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueColor
// Size: 0x1b8 (Inherited: 0x1b8)
struct UPropertyValueColor : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueMaterial
// Size: 0x1b8 (Inherited: 0x1b8)
struct UPropertyValueMaterial : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueOption
// Size: 0x1b8 (Inherited: 0x1b8)
struct UPropertyValueOption : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueSoftObject
// Size: 0x1b8 (Inherited: 0x1b8)
struct UPropertyValueSoftObject : UPropertyValue {
};

// Class VariantManagerContent.SwitchActor
// Size: 0x250 (Inherited: 0x228)
struct ASwitchActor : AActor {
	char pad_228[0x18]; // 0x228(0x18)
	struct USceneComponent* SceneComponent; // 0x240(0x08)
	int32_t LastSelectedOption; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)

	void SelectOption(int32_t OptionIndex); // Function VariantManagerContent.SwitchActor.SelectOption // (Net|NetReliableExec|Event|Static|UbergraphFunction|Public|Private|Protected|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460f40
	int32_t GetSelectedOption(); // Function VariantManagerContent.SwitchActor.GetSelectedOption // (NetRequest|Exec|Native|Static|UbergraphFunction|Public|Private|Protected|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31461180
	struct TArray<struct AActor*> GetOptions(); // Function VariantManagerContent.SwitchActor.GetOptions // (Net|NetReliableNetRequest|Native|Static|UbergraphFunction|Public|Private|Protected|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31461180
};

// Class VariantManagerContent.Variant
// Size: 0x70 (Inherited: 0x28)
struct UVariant : UObject {
	struct FText DisplayText; // 0x28(0x18)
	char pad_40[0x18]; // 0x40(0x18)
	struct TArray<struct UVariantObjectBinding*> ObjectBindings; // 0x58(0x10)
	struct UTexture2D* Thumbnail; // 0x68(0x08)

	void SwitchOn(); // Function VariantManagerContent.Variant.SwitchOn // (NetReliableNative|Event|Static|UbergraphFunction|Public|Private|Protected|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460ac0
	void SetDisplayText(struct FText& NewDisplayText); // Function VariantManagerContent.Variant.SetDisplayText // (Net|NetRequest|Exec|Event|Static|UbergraphFunction|Public|Private|Protected|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460f40
	bool IsActive(); // Function VariantManagerContent.Variant.IsActive // (NetReliableExec|Event|Static|UbergraphFunction|Public|Private|Protected|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460f40
	struct UTexture2D* GetThumbnail(); // Function VariantManagerContent.Variant.GetThumbnail // (NetRequest|Exec|Native|Static|UbergraphFunction|Public|Private|Protected|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460f40
	int32_t GetNumActors(); // Function VariantManagerContent.Variant.GetNumActors // (Net|NetRequest|Native|Static|UbergraphFunction|Public|Private|Protected|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460f40
	struct FText GetDisplayText(); // Function VariantManagerContent.Variant.GetDisplayText // (Net|NetReliableNetRequest|Exec|Static|UbergraphFunction|Public|Private|Protected|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460f40
	struct AActor* GetActor(int32_t ActorIndex); // Function VariantManagerContent.Variant.GetActor // (Net|NetRequest|Exec|Static|UbergraphFunction|Public|Private|Protected|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460f40
};

// Class VariantManagerContent.VariantObjectBinding
// Size: 0x90 (Inherited: 0x28)
struct UVariantObjectBinding : UObject {
	struct FString CachedActorLabel; // 0x28(0x10)
	struct FSoftObjectPath ObjectPtr; // 0x38(0x18)
	LazyObjectProperty LazyObjectPtr; // 0x50(0x1c)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct UPropertyValue*> CapturedProperties; // 0x70(0x10)
	struct TArray<struct FFunctionCaller> FunctionCallers; // 0x80(0x10)
};

// Class VariantManagerContent.VariantSet
// Size: 0x70 (Inherited: 0x28)
struct UVariantSet : UObject {
	struct FText DisplayText; // 0x28(0x18)
	char pad_40[0x18]; // 0x40(0x18)
	bool bExpanded; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct TArray<struct UVariant*> Variants; // 0x60(0x10)

	void SetDisplayText(struct FText& NewDisplayText); // Function VariantManagerContent.VariantSet.SetDisplayText // (Net|NetRequest|Exec|Event|Static|UbergraphFunction|Public|Private|Protected|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31467d80
	struct UVariant* GetVariantByName(struct FString VariantName); // Function VariantManagerContent.VariantSet.GetVariantByName // (Net|NetReliableNetRequest|Exec|Native|Static|UbergraphFunction|Public|Private|Protected|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460ac0
	struct UVariant* GetVariant(int32_t VariantIndex); // Function VariantManagerContent.VariantSet.GetVariant // (Net|NetRequest|Exec|Native|Static|UbergraphFunction|Public|Private|Protected|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460ac0
	int32_t GetNumVariants(); // Function VariantManagerContent.VariantSet.GetNumVariants // (NetReliableNetRequest|Native|Static|UbergraphFunction|Public|Private|Protected|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460ac0
	struct FText GetDisplayText(); // Function VariantManagerContent.VariantSet.GetDisplayText // (Net|NetReliableNetRequest|Exec|Static|UbergraphFunction|Public|Private|Protected|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31460ac0
};

