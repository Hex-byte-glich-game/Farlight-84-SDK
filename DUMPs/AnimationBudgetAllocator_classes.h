// Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAnimationBudgetBlueprintLibrary : UBlueprintFunctionLibrary {

	void SetAnimationBudgetParameters(struct UObject* WorldContextObject, struct FAnimationBudgetAllocatorParameters& InParameters); // Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters // (Net|NetReliableNetRequest|Exec|Native|Event|NetResponse|NetMulticast|UbergraphFunction|Public|Private|Protected|NetServer|HasOutParms|HasDefaults|NetClient|DLLImport|BlueprintEvent|NetValidate) // @ game+0xffff822f2db8ba40
	void EnableAnimationBudget(struct UObject* WorldContextObject, bool bEnabled); // Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget // (NetRequest|Exec|Native|Event|NetResponse|NetMulticast|UbergraphFunction|Public|Private|Protected|NetServer|HasOutParms|HasDefaults|NetClient|DLLImport|BlueprintEvent|NetValidate) // @ game+0xffff822f2db8c340
};

// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// Size: 0xc40 (Inherited: 0xc20)
struct USkeletalMeshComponentBudgeted : USkeletalMeshComponent {
	char pad_C20[0x18]; // 0xc20(0x18)
	char bAutoRegisterWithBudgetAllocator : 1; // 0xc38(0x01)
	char bAutoCalculateSignificance : 1; // 0xc38(0x01)
	char bShouldUseActorRenderedFlag : 1; // 0xc38(0x01)
	char pad_C38_3 : 5; // 0xc38(0x01)
	char pad_C39[0x7]; // 0xc39(0x07)

	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator); // Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator // (NetReliableNetRequest|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|NetServer|HasOutParms|HasDefaults|NetClient|DLLImport|BlueprintEvent|NetValidate) // @ game+0xffff822f2db8af00
};

