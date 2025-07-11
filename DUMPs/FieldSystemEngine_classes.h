// Class FieldSystemEngine.FieldSystemActor
// Size: 0x230 (Inherited: 0x228)
struct AFieldSystemActor : AActor {
	struct UFieldSystemComponent* FieldSystemComponent; // 0x228(0x08)
};

// Class FieldSystemEngine.FieldSystem
// Size: 0x38 (Inherited: 0x28)
struct UFieldSystem : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class FieldSystemEngine.FieldSystemComponent
// Size: 0x580 (Inherited: 0x540)
struct UFieldSystemComponent : UPrimitiveComponent {
	struct UFieldSystem* FieldSystem; // 0x540(0x08)
	char pad_548[0x10]; // 0x548(0x10)
	struct TArray<struct TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers; // 0x558(0x10)
	char pad_568[0x18]; // 0x568(0x18)

	void ResetFieldSystem(); // Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem // (Net|NetReliableNative|Event|Static|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317b2140
	void ApplyUniformVectorFalloffForce(bool Enabled, struct FVector Position, struct FVector Direction, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce // (NetRequest|Exec|Event|Static|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317b25c0
	void ApplyStrainField(bool Enabled, struct FVector Position, float Radius, float Magnitude, int32_t Iterations); // Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField // (NetReliableNetRequest|Event|Static|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317b25c0
	void ApplyStayDynamicField(bool Enabled, struct FVector Position, float Radius); // Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField // (Net|Event|Static|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317b25c0
	void ApplyRadialVectorFalloffForce(bool Enabled, struct FVector Position, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce // (Net|NetReliableExec|Native|Static|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317b25c0
	void ApplyRadialForce(bool Enabled, struct FVector Position, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce // (Net|NetReliableNetRequest|Native|Static|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317b25c0
	void ApplyPhysicsField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField // (NetReliableNative|Static|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317b25c0
	void ApplyLinearForce(bool Enabled, struct FVector Direction, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce // (Net|NetRequest|Exec|Static|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317b25c0
	void AddFieldCommand(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand // (Exec|Static|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317b25c0
};

// Class FieldSystemEngine.FieldSystemMetaData
// Size: 0xb0 (Inherited: 0xb0)
struct UFieldSystemMetaData : UActorComponent {
};

// Class FieldSystemEngine.FieldSystemMetaDataIteration
// Size: 0xb8 (Inherited: 0xb0)
struct UFieldSystemMetaDataIteration : UFieldSystemMetaData {
	int32_t Iterations; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)

	struct UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations); // Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration // (NetResponse|Static|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317b1f00
};

// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// Size: 0xb8 (Inherited: 0xb0)
struct UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData {
	enum class EFieldResolutionType ResolutionType; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)

	struct UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(enum class EFieldResolutionType ResolutionType); // Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType // (Net|NetReliableNetResponse|Static|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317b13c0
};

// Class FieldSystemEngine.FieldNodeBase
// Size: 0xb0 (Inherited: 0xb0)
struct UFieldNodeBase : UActorComponent {
};

// Class FieldSystemEngine.FieldNodeInt
// Size: 0xb0 (Inherited: 0xb0)
struct UFieldNodeInt : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeFloat
// Size: 0xb0 (Inherited: 0xb0)
struct UFieldNodeFloat : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeVector
// Size: 0xb0 (Inherited: 0xb0)
struct UFieldNodeVector : UFieldNodeBase {
};

// Class FieldSystemEngine.UniformInteger
// Size: 0xb8 (Inherited: 0xb0)
struct UUniformInteger : UFieldNodeInt {
	int32_t Magnitude; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)

	struct UUniformInteger* SetUniformInteger(int32_t Magnitude); // Function FieldSystemEngine.UniformInteger.SetUniformInteger // (NetResponse|Static|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317b1180
};

// Class FieldSystemEngine.RadialIntMask
// Size: 0xd0 (Inherited: 0xb0)
struct URadialIntMask : UFieldNodeInt {
	float Radius; // 0xb0(0x04)
	struct FVector Position; // 0xb4(0x0c)
	int32_t InteriorValue; // 0xc0(0x04)
	int32_t ExteriorValue; // 0xc4(0x04)
	enum class ESetMaskConditionType SetMaskCondition; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)

	struct URadialIntMask* SetRadialIntMask(float Radius, struct FVector Position, int32_t InteriorValue, int32_t ExteriorValue, enum class ESetMaskConditionType SetMaskConditionIn); // Function FieldSystemEngine.RadialIntMask.SetRadialIntMask // (Net|NetReliableEvent|NetResponse|Static|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317b0f40
};

// Class FieldSystemEngine.UniformScalar
// Size: 0xb8 (Inherited: 0xb0)
struct UUniformScalar : UFieldNodeFloat {
	float Magnitude; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)

	struct UUniformScalar* SetUniformScalar(float Magnitude); // Function FieldSystemEngine.UniformScalar.SetUniformScalar // (Net|NetRequest|Exec|Event|NetResponse|Static|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317b0d00
};

// Class FieldSystemEngine.RadialFalloff
// Size: 0xd8 (Inherited: 0xb0)
struct URadialFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb0(0x04)
	float MinRange; // 0xb4(0x04)
	float MaxRange; // 0xb8(0x04)
	float Default; // 0xbc(0x04)
	float Radius; // 0xc0(0x04)
	struct FVector Position; // 0xc4(0x0c)
	enum class EFieldFalloffType Falloff; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)

	struct URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, struct FVector Position, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.RadialFalloff.SetRadialFalloff // (NetReliableExec|Native|NetResponse|Static|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317b0ac0
};

// Class FieldSystemEngine.PlaneFalloff
// Size: 0xe0 (Inherited: 0xb0)
struct UPlaneFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb0(0x04)
	float MinRange; // 0xb4(0x04)
	float MaxRange; // 0xb8(0x04)
	float Default; // 0xbc(0x04)
	float Distance; // 0xc0(0x04)
	struct FVector Position; // 0xc4(0x0c)
	struct FVector Normal; // 0xd0(0x0c)
	enum class EFieldFalloffType Falloff; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)

	struct UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, struct FVector Position, struct FVector Normal, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff // (Native|NetResponse|Static|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317b0880
};

// Class FieldSystemEngine.BoxFalloff
// Size: 0x100 (Inherited: 0xb0)
struct UBoxFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb0(0x04)
	float MinRange; // 0xb4(0x04)
	float MaxRange; // 0xb8(0x04)
	float Default; // 0xbc(0x04)
	struct FTransform Transform; // 0xc0(0x30)
	enum class EFieldFalloffType Falloff; // 0xf0(0x01)
	char pad_F1[0xf]; // 0xf1(0x0f)

	struct UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, struct FTransform Transform, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.BoxFalloff.SetBoxFalloff // (NetRequest|Native|Event|Static|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317b0640
};

// Class FieldSystemEngine.NoiseField
// Size: 0xf0 (Inherited: 0xb0)
struct UNoiseField : UFieldNodeFloat {
	float MinRange; // 0xb0(0x04)
	float MaxRange; // 0xb4(0x04)
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FTransform Transform; // 0xc0(0x30)

	struct UNoiseField* SetNoiseField(float MinRange, float MaxRange, struct FTransform Transform); // Function FieldSystemEngine.NoiseField.SetNoiseField // (Net|NetRequest|NetResponse|Static|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317b0400
};

// Class FieldSystemEngine.UniformVector
// Size: 0xc0 (Inherited: 0xb0)
struct UUniformVector : UFieldNodeVector {
	float Magnitude; // 0xb0(0x04)
	struct FVector Direction; // 0xb4(0x0c)

	struct UUniformVector* SetUniformVector(float Magnitude, struct FVector Direction); // Function FieldSystemEngine.UniformVector.SetUniformVector // (NetReliableExec|Event|NetResponse|Static|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317b01c0
};

// Class FieldSystemEngine.RadialVector
// Size: 0xc0 (Inherited: 0xb0)
struct URadialVector : UFieldNodeVector {
	float Magnitude; // 0xb0(0x04)
	struct FVector Position; // 0xb4(0x0c)

	struct URadialVector* SetRadialVector(float Magnitude, struct FVector Position); // Function FieldSystemEngine.RadialVector.SetRadialVector // (NetReliableExec|Event|NetResponse|Static|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317b9400
};

// Class FieldSystemEngine.RandomVector
// Size: 0xb8 (Inherited: 0xb0)
struct URandomVector : UFieldNodeVector {
	float Magnitude; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)

	struct URandomVector* SetRandomVector(float Magnitude); // Function FieldSystemEngine.RandomVector.SetRandomVector // (Net|NetRequest|Exec|Event|NetResponse|Static|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317b91c0
};

// Class FieldSystemEngine.OperatorField
// Size: 0xd0 (Inherited: 0xb0)
struct UOperatorField : UFieldNodeBase {
	float Magnitude; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct UFieldNodeBase* RightField; // 0xb8(0x08)
	struct UFieldNodeBase* LeftField; // 0xc0(0x08)
	enum class EFieldOperationType Operation; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)

	struct UOperatorField* SetOperatorField(float Magnitude, struct UFieldNodeBase* RightField, struct UFieldNodeBase* LeftField, enum class EFieldOperationType Operation); // Function FieldSystemEngine.OperatorField.SetOperatorField // (Net|NetReliableExec|NetResponse|Static|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317b8f80
};

// Class FieldSystemEngine.ToIntegerField
// Size: 0xb8 (Inherited: 0xb0)
struct UToIntegerField : UFieldNodeInt {
	struct UFieldNodeFloat* FloatField; // 0xb0(0x08)

	struct UToIntegerField* SetToIntegerField(struct UFieldNodeFloat* FloatField); // Function FieldSystemEngine.ToIntegerField.SetToIntegerField // (Net|NetReliableNetRequest|Exec|Event|NetResponse|Static|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317b8d40
};

// Class FieldSystemEngine.ToFloatField
// Size: 0xb8 (Inherited: 0xb0)
struct UToFloatField : UFieldNodeFloat {
	struct UFieldNodeInt* IntField; // 0xb0(0x08)

	struct UToFloatField* SetToFloatField(struct UFieldNodeInt* IntegerField); // Function FieldSystemEngine.ToFloatField.SetToFloatField // (Net|NetReliableNetRequest|Exec|Event|NetResponse|Static|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317b8b00
};

// Class FieldSystemEngine.CullingField
// Size: 0xc8 (Inherited: 0xb0)
struct UCullingField : UFieldNodeBase {
	struct UFieldNodeBase* Culling; // 0xb0(0x08)
	struct UFieldNodeBase* Field; // 0xb8(0x08)
	enum class EFieldCullingOperationType Operation; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)

	struct UCullingField* SetCullingField(struct UFieldNodeBase* Culling, struct UFieldNodeBase* Field, enum class EFieldCullingOperationType Operation); // Function FieldSystemEngine.CullingField.SetCullingField // (NetRequest|Exec|Native|Event|Static|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317b88c0
};

// Class FieldSystemEngine.ReturnResultsTerminal
// Size: 0xb0 (Inherited: 0xb0)
struct UReturnResultsTerminal : UFieldNodeBase {

	struct UReturnResultsTerminal* SetReturnResultsTerminal(); // Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal // (NetReliableStatic|UbergraphFunction|MulticastDelegate|Private|Protected|NetServer|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317b8680
};

