// Class TimeManagement.FixedFrameRateCustomTimeStep
// Size: 0x30 (Inherited: 0x28)
struct UFixedFrameRateCustomTimeStep : UEngineCustomTimeStep {
	struct FFrameRate FixedFrameRate; // 0x28(0x08)
};

// Class TimeManagement.TimeManagementBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTimeManagementBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FFrameTime TransformTime(struct FFrameTime& SourceTime, struct FFrameRate& SourceRate, struct FFrameRate& DestinationRate); // Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime // (Exec|Event|Static|MulticastDelegate|Delegate|NetServer|HasOutParms|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316eee00
	struct FFrameNumber Subtract_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger // (Net|NetRequest|Event|Static|MulticastDelegate|Delegate|NetServer|HasOutParms|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ef280
	struct FFrameNumber Subtract_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B); // Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber // (Net|NetRequest|Event|Static|MulticastDelegate|Delegate|NetServer|HasOutParms|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ef280
	struct FFrameTime SnapFrameTimeToRate(struct FFrameTime& SourceTime, struct FFrameRate& SourceRate, struct FFrameRate& SnapToRate); // Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate // (Net|NetReliableNetRequest|Exec|Native|Static|MulticastDelegate|Delegate|NetServer|HasOutParms|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ef280
	struct FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, struct FFrameRate& FrameRate); // Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate // (NetRequest|Exec|Native|Static|MulticastDelegate|Delegate|NetServer|HasOutParms|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ef280
	struct FFrameNumber Multiply_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger // (Net|Exec|Native|Static|MulticastDelegate|Delegate|NetServer|HasOutParms|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ef280
	bool IsValid_MultipleOf(struct FFrameRate& InFrameRate, struct FFrameRate& OtherFramerate); // Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf // (Net|NetRequest|Native|Static|MulticastDelegate|Delegate|NetServer|HasOutParms|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ef280
	bool IsValid_Framerate(struct FFrameRate& InFrameRate); // Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate // (NetReliableNative|Static|MulticastDelegate|Delegate|NetServer|HasOutParms|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ef280
	struct FFrameRate GetTimecodeFrameRate(); // Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate // (Net|Native|Static|MulticastDelegate|Delegate|NetServer|HasOutParms|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ef280
	struct FTimecode GetTimecode(); // Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode // (Native|Static|MulticastDelegate|Delegate|NetServer|HasOutParms|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ef280
	struct FFrameNumber Divide_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger // (Net|NetRequest|Exec|Static|MulticastDelegate|Delegate|NetServer|HasOutParms|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ef280
	struct FString Conv_TimecodeToString(struct FTimecode& InTimecode, bool bForceSignDisplay); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString // (Net|Exec|Static|MulticastDelegate|Delegate|NetServer|HasOutParms|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ef280
	float Conv_QualifiedFrameTimeToSeconds(struct FQualifiedFrameTime& InFrameTime); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds // (NetReliableNetRequest|Static|MulticastDelegate|Delegate|NetServer|HasOutParms|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ef280
	float Conv_FrameRateToSeconds(struct FFrameRate& InFrameRate); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds // (Net|NetReliableStatic|MulticastDelegate|Delegate|NetServer|HasOutParms|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ef280
	int32_t Conv_FrameNumberToInteger(struct FFrameNumber& InFrameNumber); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger // (Net|Static|MulticastDelegate|Delegate|NetServer|HasOutParms|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ef280
	struct FFrameNumber Add_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger // (NetReliableNetRequest|Exec|Native|Event|NetResponse|MulticastDelegate|Delegate|NetServer|HasOutParms|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ef280
	struct FFrameNumber Add_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B); // Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber // (NetReliableNetRequest|Exec|Native|Event|NetResponse|MulticastDelegate|Delegate|NetServer|HasOutParms|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ef280
};

// Class TimeManagement.TimeSynchronizationSource
// Size: 0x30 (Inherited: 0x28)
struct UTimeSynchronizationSource : UObject {
	bool bUseForSynchronization; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t FrameOffset; // 0x2c(0x04)
};

