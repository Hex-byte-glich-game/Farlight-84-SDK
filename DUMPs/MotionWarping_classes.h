// Class MotionWarping.AnimNotifyState_MotionWarping
// Size: 0x38 (Inherited: 0x30)
struct UAnimNotifyState_MotionWarping : UAnimNotifyState {
	struct URootMotionModifier* RootMotionModifier; // 0x30(0x08)

	void OnWarpUpdate(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier); // Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpUpdate // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31455080
	void OnWarpEnd(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier); // Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpEnd // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31455500
	void OnWarpBegin(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier); // Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpBegin // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31455500
	void OnRootMotionModifierUpdate(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier); // Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierUpdate // (Net|NetReliableNetRequest|Native|NetResponse|Static|NetMulticast|MulticastDelegate|Private|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31455500
	void OnRootMotionModifierDeactivate(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier); // Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierDeactivate // (NetRequest|Native|NetResponse|Static|NetMulticast|MulticastDelegate|Private|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31455500
	void OnRootMotionModifierActivate(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier); // Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierActivate // (Net|Native|NetResponse|Static|NetMulticast|MulticastDelegate|Private|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31455500
	struct URootMotionModifier* AddRootMotionModifier(struct UMotionWarpingComponent* MotionWarpingComp, struct UAnimSequenceBase* Animation, float StartTime, float EndTime); // Function MotionWarping.AnimNotifyState_MotionWarping.AddRootMotionModifier // (Net|NetReliableNetRequest|Native|Static|NetMulticast|MulticastDelegate|Private|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31455500
};

// Class MotionWarping.MotionWarpingUtilities
// Size: 0x28 (Inherited: 0x28)
struct UMotionWarpingUtilities : UBlueprintFunctionLibrary {

	void GetMotionWarpingWindowsFromAnimation(struct UAnimSequenceBase* Animation, struct TArray<struct FMotionWarpingWindowData>& OutWindows); // Function MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsFromAnimation // (Net|NetRequest|Exec|NetResponse|Static|NetMulticast|MulticastDelegate|Private|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31454e40
	void GetMotionWarpingWindowsForWarpTargetFromAnimation(struct UAnimSequenceBase* Animation, struct FName WarpTargetName, struct TArray<struct FMotionWarpingWindowData>& OutWindows); // Function MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsForWarpTargetFromAnimation // (Net|Exec|NetResponse|Static|NetMulticast|MulticastDelegate|Private|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31455080
	struct FTransform ExtractRootMotionFromAnimation(struct UAnimSequenceBase* Animation, float StartTime, float EndTime); // Function MotionWarping.MotionWarpingUtilities.ExtractRootMotionFromAnimation // (Net|NetRequest|Exec|Native|Event|Static|NetMulticast|MulticastDelegate|Private|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31455080
};

// Class MotionWarping.MotionWarpingComponent
// Size: 0x148 (Inherited: 0xb0)
struct UMotionWarpingComponent : UActorComponent {
	bool bSearchForWindowsInAnimsWithinMontages; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct FMulticastInlineDelegate OnPreUpdate; // 0xb8(0x10)
	struct TWeakObjectPtr<struct ACharacter> CharacterOwner; // 0xc8(0x08)
	struct TArray<struct URootMotionModifier*> Modifiers; // 0xd0(0x10)
	struct TMap<struct FName, struct FMotionWarpingTarget> WarpTargetMap; // 0xe0(0x50)
	char pad_130[0x18]; // 0x130(0x18)

	int32_t RemoveWarpTarget(struct FName WarpTargetName); // Function MotionWarping.MotionWarpingComponent.RemoveWarpTarget // (NetReliableExec|Native|NetResponse|Static|NetMulticast|MulticastDelegate|Private|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3145d780
	void DisableAllRootMotionModifiers(); // Function MotionWarping.MotionWarpingComponent.DisableAllRootMotionModifiers // (Net|NetRequest|Exec|Native|Event|Static|NetMulticast|MulticastDelegate|Private|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31454e40
	void AddOrUpdateWarpTargetFromTransform(struct FName WarpTargetName, struct FTransform TargetTransform); // Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromTransform // (NetReliableNative|Static|NetMulticast|MulticastDelegate|Private|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31454e40
	void AddOrUpdateWarpTargetFromLocationAndRotation(struct FName WarpTargetName, struct FVector TargetLocation, struct FRotator TargetRotation); // Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocationAndRotation // (NetRequest|Exec|Static|NetMulticast|MulticastDelegate|Private|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31454e40
	void AddOrUpdateWarpTargetFromLocation(struct FName WarpTargetName, struct FVector TargetLocation); // Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocation // (Exec|Static|NetMulticast|MulticastDelegate|Private|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31454e40
	void AddOrUpdateWarpTargetFromComponent(struct FName WarpTargetName, struct USceneComponent* Component, struct FName BoneName, bool bFollowComponent); // Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromComponent // (NetReliableStatic|NetMulticast|MulticastDelegate|Private|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31454e40
	void AddOrUpdateWarpTarget(struct FName WarpTargetName, struct FMotionWarpingTarget& WarpTarget); // Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTarget // (NetReliableNetRequest|Exec|Native|Event|NetResponse|NetMulticast|MulticastDelegate|Private|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31454e40
};

// Class MotionWarping.RootMotionModifier
// Size: 0xc0 (Inherited: 0x28)
struct URootMotionModifier : UObject {
	struct TWeakObjectPtr<struct UAnimSequenceBase> Animation; // 0x28(0x08)
	float StartTime; // 0x30(0x04)
	float EndTime; // 0x34(0x04)
	float PreviousPosition; // 0x38(0x04)
	float CurrentPosition; // 0x3c(0x04)
	float Weight; // 0x40(0x04)
	bool bInLocalSpace; // 0x44(0x01)
	char pad_45[0xb]; // 0x45(0x0b)
	struct FTransform StartTransform; // 0x50(0x30)
	float ActualStartTime; // 0x80(0x04)
	struct FDelegate OnActivateDelegate; // 0x84(0x10)
	struct FDelegate OnUpdateDelegate; // 0x94(0x10)
	struct FDelegate OnDeactivateDelegate; // 0xa4(0x10)
	enum class ERootMotionModifierState State; // 0xb4(0x01)
	char pad_B5[0xb]; // 0xb5(0x0b)
};

// Class MotionWarping.RootMotionModifier_Warp
// Size: 0x1b0 (Inherited: 0xc0)
struct URootMotionModifier_Warp : URootMotionModifier {
	struct FName WarpTargetName; // 0xb8(0x08)
	enum class EWarpPointAnimProvider WarpPointAnimProvider; // 0xc0(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FTransform WarpPointAnimTransform; // 0xd0(0x30)
	struct FName WarpPointAnimBoneName; // 0x100(0x08)
	bool bWarpTranslation; // 0x108(0x01)
	bool bIgnoreZAxis; // 0x109(0x01)
	bool bOnlyZAxis; // 0x10a(0x01)
	bool bWarpRotation; // 0x10b(0x01)
	enum class EMotionWarpRotationType RotationType; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	float WarpRotationTimeMultiplier; // 0x110(0x04)
	char pad_114[0xc]; // 0x114(0x0c)
	struct FTransform CachedTargetTransform; // 0x120(0x30)
	char pad_150[0x60]; // 0x150(0x60)
};

// Class MotionWarping.RootMotionModifier_SimpleWarp
// Size: 0x1b0 (Inherited: 0x1b0)
struct URootMotionModifier_SimpleWarp : URootMotionModifier_Warp {
};

// Class MotionWarping.RootMotionModifier_Scale
// Size: 0xd0 (Inherited: 0xc0)
struct URootMotionModifier_Scale : URootMotionModifier {
	struct FVector Scale; // 0xb8(0x0c)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// Class MotionWarping.RootMotionModifier_AdjustmentBlendWarp
// Size: 0x280 (Inherited: 0x1b0)
struct URootMotionModifier_AdjustmentBlendWarp : URootMotionModifier_Warp {
	bool bWarpIKBones; // 0x1b0(0x01)
	char pad_1B1[0x7]; // 0x1b1(0x07)
	struct TArray<struct FName> IKBones; // 0x1b8(0x10)
	char pad_1C8[0x8]; // 0x1c8(0x08)
	struct FTransform CachedMeshTransform; // 0x1d0(0x30)
	struct FTransform CachedMeshRelativeTransform; // 0x200(0x30)
	struct FTransform CachedRootMotion; // 0x230(0x30)
	struct FAnimSequenceTrackContainer Result; // 0x260(0x20)

	void GetAdjustmentBlendIKBoneTransformAndAlpha(struct ACharacter* Character, struct FName BoneName, struct FTransform& OutTransform, float& OutAlpha); // Function MotionWarping.RootMotionModifier_AdjustmentBlendWarp.GetAdjustmentBlendIKBoneTransformAndAlpha // (NetReliableNetResponse|Static|NetMulticast|MulticastDelegate|Private|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3145d540
	struct URootMotionModifier_AdjustmentBlendWarp* AddRootMotionModifierAdjustmentBlendWarp(struct UMotionWarpingComponent* InMotionWarpingComp, struct UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, struct FName InWarpTargetName, enum class EWarpPointAnimProvider InWarpPointAnimProvider, struct FTransform InWarpPointAnimTransform, struct FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, bool bInWarpIKBones, struct TArray<struct FName>& InIKBones); // Function MotionWarping.RootMotionModifier_AdjustmentBlendWarp.AddRootMotionModifierAdjustmentBlendWarp // (NetRequest|Exec|Native|Static|NetMulticast|MulticastDelegate|Private|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3145d780
};

// Class MotionWarping.RootMotionModifier_SkewWarp
// Size: 0x1c0 (Inherited: 0x1b0)
struct URootMotionModifier_SkewWarp : URootMotionModifier_Warp {
	float MaxWarpDistance; // 0x1b0(0x04)
	char pad_1B4[0xc]; // 0x1b4(0x0c)

	struct URootMotionModifier_SkewWarp* AddRootMotionModifierSkewWarp(struct UMotionWarpingComponent* InMotionWarpingComp, struct UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, struct FName InWarpTargetName, enum class EWarpPointAnimProvider InWarpPointAnimProvider, struct FTransform InWarpPointAnimTransform, struct FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, enum class EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier); // Function MotionWarping.RootMotionModifier_SkewWarp.AddRootMotionModifierSkewWarp // (Net|NetRequest|Exec|Event|Static|NetMulticast|MulticastDelegate|Private|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3145ce80
};

