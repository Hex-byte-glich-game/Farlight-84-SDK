// Class CinematicCamera.CineCameraActor
// Size: 0x860 (Inherited: 0x800)
struct ACineCameraActor : ACameraActor {
	struct FCameraLookatTrackingSettings LookatTrackingSettings; // 0x800(0x50)
	char pad_850[0x10]; // 0x850(0x10)

	struct UCineCameraComponent* GetCineCameraComponent(); // Function CinematicCamera.CineCameraActor.GetCineCameraComponent // (Net|NetReliableNetRequest|Exec|Native|NetResponse|UbergraphFunction|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31641f00
};

// Class CinematicCamera.CameraRig_Crane
// Size: 0x258 (Inherited: 0x228)
struct ACameraRig_Crane : AActor {
	float CranePitch; // 0x228(0x04)
	float CraneYaw; // 0x22c(0x04)
	float CraneArmLength; // 0x230(0x04)
	bool bLockMountPitch; // 0x234(0x01)
	bool bLockMountYaw; // 0x235(0x01)
	char pad_236[0x2]; // 0x236(0x02)
	struct USceneComponent* TransformComponent; // 0x238(0x08)
	struct USceneComponent* CraneYawControl; // 0x240(0x08)
	struct USceneComponent* CranePitchControl; // 0x248(0x08)
	struct USceneComponent* CraneCameraMount; // 0x250(0x08)
};

// Class CinematicCamera.CameraRig_Rail
// Size: 0x248 (Inherited: 0x228)
struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x228(0x04)
	bool bLockOrientationToRail; // 0x22c(0x01)
	char pad_22D[0x3]; // 0x22d(0x03)
	struct USceneComponent* TransformComponent; // 0x230(0x08)
	struct USplineComponent* RailSplineComponent; // 0x238(0x08)
	struct USceneComponent* RailCameraMount; // 0x240(0x08)

	struct USplineComponent* GetRailSplineComponent(); // Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent // (NetReliableExec|Event|NetResponse|UbergraphFunction|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31706700
};

// Class CinematicCamera.CineCameraComponent
// Size: 0xa30 (Inherited: 0x930)
struct UCineCameraComponent : UCameraComponent {
	struct FCameraFilmbackSettings FilmbackSettings; // 0x930(0x0c)
	struct FCameraFilmbackSettings Filmback; // 0x93c(0x0c)
	struct FCameraLensSettings LensSettings; // 0x948(0x18)
	struct FCameraFocusSettings FocusSettings; // 0x960(0x58)
	float CurrentFocalLength; // 0x9b8(0x04)
	float CurrentAperture; // 0x9bc(0x04)
	float CurrentFocusDistance; // 0x9c0(0x04)
	char pad_9C4[0xc]; // 0x9c4(0x0c)
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets; // 0x9d0(0x10)
	struct TArray<struct FNamedLensPreset> LensPresets; // 0x9e0(0x10)
	struct FString DefaultFilmbackPresetName; // 0x9f0(0x10)
	struct FString DefaultFilmbackPreset; // 0xa00(0x10)
	struct FString DefaultLensPresetName; // 0xa10(0x10)
	float DefaultLensFocalLength; // 0xa20(0x04)
	float DefaultLensFStop; // 0xa24(0x04)
	char pad_A28[0x8]; // 0xa28(0x08)

	void SetLensPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetLensPresetByName // (Net|Native|Event|NetResponse|UbergraphFunction|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31705080
	void SetFilmbackPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName // (NetReliableNetRequest|Exec|Event|NetResponse|UbergraphFunction|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31706700
	void SetCurrentFocalLength(float& InFocalLength); // Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength // (NetRequest|Exec|Event|NetResponse|UbergraphFunction|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31706700
	float GetVerticalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView // (Net|NetReliableExec|Event|NetResponse|UbergraphFunction|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31706700
	struct TArray<struct FNamedLensPreset> GetLensPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy // (Net|NetReliableNetRequest|Event|NetResponse|UbergraphFunction|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31706700
	struct FString GetLensPresetName(); // Function CinematicCamera.CineCameraComponent.GetLensPresetName // (Net|NetRequest|Event|NetResponse|UbergraphFunction|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31706700
	float GetHorizontalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView // (NetRequest|Event|NetResponse|UbergraphFunction|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31706700
	struct FString GetFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName // (NetReliableEvent|NetResponse|UbergraphFunction|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31706700
	struct FString GetDefaultFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName // (Net|NetReliableNetRequest|Exec|Native|NetResponse|UbergraphFunction|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31706700
};

