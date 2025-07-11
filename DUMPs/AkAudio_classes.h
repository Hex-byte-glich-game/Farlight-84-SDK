// Class AkAudio.AkPortalComponent
// Size: 0x3e0 (Inherited: 0x320)
struct UAkPortalComponent : USceneComponent {
	bool bDynamic; // 0x318(0x01)
	enum class AkAcousticPortalState InitialState; // 0x319(0x01)
	float ObstructionRefreshInterval; // 0x31c(0x04)
	enum class ECollisionChannel ObstructionCollisionChannel; // 0x320(0x01)
	char pad_327[0xb9]; // 0x327(0xb9)

	bool PortalPlacementValid(); // Function AkAudio.AkPortalComponent.PortalPlacementValid // (Net|NetRequest|Exec|Native|Event|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a9ac0
	void OpenPortal(); // Function AkAudio.AkPortalComponent.OpenPortal // (NetRequest|Exec|Native|Event|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a9d00
	struct UPrimitiveComponent* GetPrimitiveParent(); // Function AkAudio.AkPortalComponent.GetPrimitiveParent // (Net|NetReliableNetRequest|Native|Event|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a9d00
	enum class AkAcousticPortalState GetCurrentState(); // Function AkAudio.AkPortalComponent.GetCurrentState // (NetRequest|Native|Event|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a9d00
	void ClosePortal(); // Function AkAudio.AkPortalComponent.ClosePortal // (Net|NetReliableNetRequest|Exec|Event|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a9d00
};

// Class AkAudio.AkAcousticPortal
// Size: 0x270 (Inherited: 0x260)
struct AAkAcousticPortal : AVolume {
	struct UAkPortalComponent* Portal; // 0x260(0x08)
	enum class AkAcousticPortalState InitialState; // 0x268(0x01)
	bool bRequiresStateMigration; // 0x269(0x01)
	char pad_26A[0x6]; // 0x26a(0x06)

	void OpenPortal(); // Function AkAudio.AkAcousticPortal.OpenPortal // (NetRequest|Exec|Native|Event|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314af700
	enum class AkAcousticPortalState GetCurrentState(); // Function AkAudio.AkAcousticPortal.GetCurrentState // (Net|NetReliableNative|Event|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a9ac0
	void ClosePortal(); // Function AkAudio.AkAcousticPortal.ClosePortal // (NetReliableNetRequest|Exec|Event|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a9ac0
};

// Class AkAudio.AkAudioType
// Size: 0x40 (Inherited: 0x28)
struct UAkAudioType : UObject {
	uint32_t ShortID; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct UObject*> UserData; // 0x30(0x10)
};

// Class AkAudio.AkAcousticTexture
// Size: 0x40 (Inherited: 0x40)
struct UAkAcousticTexture : UAkAudioType {
};

// Class AkAudio.AkAcousticTextureSetComponent
// Size: 0x330 (Inherited: 0x320)
struct UAkAcousticTextureSetComponent : USceneComponent {
	char pad_320[0x10]; // 0x320(0x10)
};

// Class AkAudio.AkAmbientSound
// Size: 0x268 (Inherited: 0x228)
struct AAkAmbientSound : AActor {
	struct UAkAudioEvent* AkAudioEvent; // 0x228(0x08)
	struct UAkComponent* AkComponent; // 0x230(0x08)
	bool StopWhenOwnerIsDestroyed; // 0x238(0x01)
	bool AutoPost; // 0x239(0x01)
	char pad_23A[0x2e]; // 0x23a(0x2e)

	void StopAmbientSound(); // Function AkAudio.AkAmbientSound.StopAmbientSound // (Net|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314af4c0
	void StartAmbientSound(); // Function AkAudio.AkAmbientSound.StartAmbientSound // (Net|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314af700
};

// Class AkAudio.AkAndroidInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkAndroidInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkAndroidAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering // (NetReliableExec|Native|Event|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c4780
};

// Class AkAudio.AkPlatformInfo
// Size: 0x70 (Inherited: 0x28)
struct UAkPlatformInfo : UObject {
	char pad_28[0x48]; // 0x28(0x48)
};

// Class AkAudio.AkAndroidPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkAndroidPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkAssetData
// Size: 0x60 (Inherited: 0x28)
struct UAkAssetData : UObject {
	uint32_t CachedHash; // 0x28(0x04)
	char pad_2C[0x34]; // 0x2c(0x34)
};

// Class AkAudio.AkAssetDataWithMedia
// Size: 0x70 (Inherited: 0x60)
struct UAkAssetDataWithMedia : UAkAssetData {
	struct TArray<struct UAkMediaAsset*> MediaList; // 0x60(0x10)
};

// Class AkAudio.AkAssetPlatformData
// Size: 0x30 (Inherited: 0x28)
struct UAkAssetPlatformData : UObject {
	struct UAkAssetData* CurrentAssetData; // 0x28(0x08)
};

// Class AkAudio.AkAssetBase
// Size: 0x50 (Inherited: 0x40)
struct UAkAssetBase : UAkAudioType {
	struct UAkAssetPlatformData* PlatformAssetData; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
};

// Class AkAudio.AkAudioBank
// Size: 0x128 (Inherited: 0x50)
struct UAkAudioBank : UAkAssetBase {
	bool AutoLoad; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TMap<struct FString, struct TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap; // 0x58(0x50)
	struct TSet<struct TSoftObjectPtr<UAkAudioEvent>> LinkedAkEvents; // 0xa8(0x50)
	struct UAkAssetPlatformData* CurrentLocalizedPlatformAssetData; // 0xf8(0x08)
	char pad_100[0x28]; // 0x100(0x28)
};

// Class AkAudio.AkAssetDataSwitchContainerData
// Size: 0x78 (Inherited: 0x28)
struct UAkAssetDataSwitchContainerData : UObject {
	struct TSoftObjectPtr<UAkGroupValue> GroupValue; // 0x28(0x28)
	struct UAkGroupValue* DefaultGroupValue; // 0x50(0x08)
	struct TArray<struct UAkMediaAsset*> MediaList; // 0x58(0x10)
	struct TArray<struct UAkAssetDataSwitchContainerData*> Children; // 0x68(0x10)
};

// Class AkAudio.AkAssetDataSwitchContainer
// Size: 0x88 (Inherited: 0x70)
struct UAkAssetDataSwitchContainer : UAkAssetDataWithMedia {
	struct TArray<struct UAkAssetDataSwitchContainerData*> SwitchContainers; // 0x70(0x10)
	struct UAkGroupValue* DefaultGroupValue; // 0x80(0x08)
};

// Class AkAudio.AkAudioEventData
// Size: 0x250 (Inherited: 0x88)
struct UAkAudioEventData : UAkAssetDataSwitchContainer {
	float MaxAttenuationRadius; // 0x88(0x04)
	bool IsInfinite; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	float MinimumDuration; // 0x90(0x04)
	float MaximumDuration; // 0x94(0x04)
	struct TMap<struct FString, struct UAkAssetDataSwitchContainer*> LocalizedMedia; // 0x98(0x50)
	struct TSet<struct UAkAudioEvent*> PostedEvents; // 0xe8(0x50)
	struct TSet<struct UAkAuxBus*> UserDefinedSends; // 0x138(0x50)
	struct TSet<struct UAkTrigger*> PostedTriggers; // 0x188(0x50)
	struct TSet<struct UAkGroupValue*> GroupValues; // 0x1d8(0x50)
	char pad_228[0x28]; // 0x228(0x28)
};

// Class AkAudio.AkAudioEvent
// Size: 0xe0 (Inherited: 0x50)
struct UAkAudioEvent : UAkAssetBase {
	struct TMap<struct FString, struct TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap; // 0x50(0x50)
	struct UAkAudioBank* RequiredBank; // 0xa0(0x08)
	char pad_A8[0x8]; // 0xa8(0x08)
	struct UAkAssetPlatformData* CurrentLocalizedPlatformData; // 0xb0(0x08)
	float MaxAttenuationRadius; // 0xb8(0x04)
	bool IsInfinite; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	float MinimumDuration; // 0xc0(0x04)
	float MaximumDuration; // 0xc4(0x04)
	char pad_C8[0x18]; // 0xc8(0x18)

	float GetMinimumDuration(); // Function AkAudio.AkAudioEvent.GetMinimumDuration // (Net|NetReliableNetRequest|Native|Event|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c40c0
	float GetMaximumDuration(); // Function AkAudio.AkAudioEvent.GetMaximumDuration // (NetReliableNetRequest|Native|Event|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c4780
	float GetMaxAttenuationRadius(); // Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius // (Net|NetRequest|Native|Event|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c4780
	bool GetIsInfinite(); // Function AkAudio.AkAudioEvent.GetIsInfinite // (NetRequest|Native|Event|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c4780
};

// Class AkAudio.AkGameObject
// Size: 0x340 (Inherited: 0x320)
struct UAkGameObject : USceneComponent {
	struct UAkAudioEvent* AkAudioEvent; // 0x318(0x08)
	struct FString EventName; // 0x320(0x10)
	char pad_338[0x8]; // 0x338(0x08)

	void Stop(); // Function AkAudio.AkGameObject.Stop // (NetReliableNative|NetResponse|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c4300
	void SetRTPCValue(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct FString RTPC); // Function AkAudio.AkGameObject.SetRTPCValue // (NetReliableNetRequest|Native|Event|NetResponse|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c40c0
	void PostAssociatedAkEventAsync(struct UObject* WorldContextObject, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo, int32_t& PlayingID); // Function AkAudio.AkGameObject.PostAssociatedAkEventAsync // (NetReliableNetRequest|Exec|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c40c0
	int32_t PostAssociatedAkEvent(int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources); // Function AkAudio.AkGameObject.PostAssociatedAkEvent // (Exec|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c40c0
	void PostAkEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, int32_t& PlayingID, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameObject.PostAkEventAsync // (NetReliableExec|Event|NetResponse|Static|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c40c0
	int32_t PostAkEvent(struct UAkAudioEvent* AkEvent, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FString in_EventName); // Function AkAudio.AkGameObject.PostAkEvent // (NetReliableEvent|NetResponse|Static|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c40c0
	void GetRTPCValue(struct UAkRtpc* RTPCValue, enum class ERTPCValueType InputValueType, float& Value, enum class ERTPCValueType& OutputValueType, struct FString RTPC, int32_t PlayingID); // Function AkAudio.AkGameObject.GetRTPCValue // (Native|Static|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c40c0
};

// Class AkAudio.AkComponent
// Size: 0x500 (Inherited: 0x340)
struct UAkComponent : UAkGameObject {
	bool bUseSpatialAudio; // 0x338(0x01)
	enum class ECollisionChannel OcclusionCollisionChannel; // 0x340(0x01)
	char pad_342[0x2]; // 0x342(0x02)
	char EnableSpotReflectors : 1; // 0x344(0x01)
	char pad_344_1 : 7; // 0x344(0x01)
	char pad_345[0x3]; // 0x345(0x03)
	float OuterRadius; // 0x348(0x04)
	float InnerRadius; // 0x34c(0x04)
	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x350(0x08)
	struct FString EarlyReflectionAuxBusName; // 0x358(0x10)
	int32_t EarlyReflectionOrder; // 0x368(0x04)
	float EarlyReflectionBusSendGain; // 0x36c(0x04)
	float EarlyReflectionMaxPathLength; // 0x370(0x04)
	float roomReverbAuxBusGain; // 0x374(0x04)
	int32_t diffractionMaxEdges; // 0x378(0x04)
	int32_t diffractionMaxPaths; // 0x37c(0x04)
	float diffractionMaxPathLength; // 0x380(0x04)
	char DrawFirstOrderReflections : 1; // 0x384(0x01)
	char DrawSecondOrderReflections : 1; // 0x384(0x01)
	char DrawHigherOrderReflections : 1; // 0x384(0x01)
	char DrawDiffraction : 1; // 0x384(0x01)
	char pad_384_4 : 4; // 0x384(0x01)
	char pad_385[0x3]; // 0x385(0x03)
	bool StopWhenOwnerDestroyed; // 0x388(0x01)
	char pad_389[0x3]; // 0x389(0x03)
	float AttenuationScalingFactor; // 0x38c(0x04)
	float OcclusionRefreshInterval; // 0x390(0x04)
	bool bUseReverbVolumes; // 0x394(0x01)
	char pad_395[0x16b]; // 0x395(0x16b)

	void UseReverbVolumes(bool inUseReverbVolumes); // Function AkAudio.AkComponent.UseReverbVolumes // (Net|Exec|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c4540
	void UseEarlyReflections(struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName); // Function AkAudio.AkComponent.UseEarlyReflections // (NetReliableNetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c4300
	void SetSwitch(struct UAkSwitchValue* SwitchValue, struct FString SwitchGroup, struct FString SwitchState); // Function AkAudio.AkComponent.SetSwitch // (NetReliableExec|Native|Event|NetResponse|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c4300
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed); // Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed // (Exec|Native|Event|NetResponse|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c4300
	void SetOutputBusVolume(float BusVolume); // Function AkAudio.AkComponent.SetOutputBusVolume // (NetReliableNetRequest|Native|Event|NetResponse|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c4300
	void SetListeners(struct TArray<struct UAkComponent*>& Listeners); // Function AkAudio.AkComponent.SetListeners // (Net|NetReliableNative|Event|NetResponse|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c4300
	void SetGameObjectRadius(float in_outerRadius, float in_innerRadius); // Function AkAudio.AkComponent.SetGameObjectRadius // (NetReliableNetRequest|Exec|Event|NetResponse|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c4300
	void SetEarlyReflectionsVolume(float SendVolume); // Function AkAudio.AkComponent.SetEarlyReflectionsVolume // (NetRequest|Exec|Event|NetResponse|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c4300
	void SetEarlyReflectionsAuxBus(struct FString AuxBusName); // Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus // (NetReliableExec|Event|NetResponse|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c4300
	void SetAttenuationScalingFactor(float Value); // Function AkAudio.AkComponent.SetAttenuationScalingFactor // (NetReliableNetRequest|Event|NetResponse|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c4300
	void PostTrigger(struct UAkTrigger* TriggerValue, struct FString Trigger); // Function AkAudio.AkComponent.PostTrigger // (NetRequest|Exec|Native|NetResponse|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c4300
	void PostAssociatedAkEventAndWaitForEndAsync(int32_t& PlayingID, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync // (Net|NetRequest|Native|NetResponse|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c4300
	int32_t PostAssociatedAkEventAndWaitForEnd(struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd // (Native|NetResponse|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c4300
	int32_t PostAkEventByName(struct FString in_EventName); // Function AkAudio.AkComponent.PostAkEventByName // (Net|NetRequest|Exec|NetResponse|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c4300
	void PostAkEventAndWaitForEndAsync(struct UAkAudioEvent* AkEvent, int32_t& PlayingID, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync // (NetReliableNetRequest|NetResponse|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c4300
	int32_t PostAkEventAndWaitForEnd(struct UAkAudioEvent* AkEvent, struct FString in_EventName, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAkEventAndWaitForEnd // (NetReliableNetRequest|Exec|Native|Event|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c4300
	float GetAttenuationRadius(); // Function AkAudio.AkComponent.GetAttenuationRadius // (Net|Native|Event|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c4300
};

// Class AkAudio.AkAudioInputComponent
// Size: 0x530 (Inherited: 0x500)
struct UAkAudioInputComponent : UAkComponent {
	char pad_500[0x30]; // 0x500(0x30)

	int32_t PostAssociatedAudioInputEvent(); // Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent // (Net|NetReliableExec|Native|NetResponse|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3c40
};

// Class AkAudio.AkAuxBus
// Size: 0x58 (Inherited: 0x50)
struct UAkAuxBus : UAkAssetBase {
	struct UAkAudioBank* RequiredBank; // 0x50(0x08)
};

// Class AkAudio.AkCheckBox
// Size: 0xb98 (Inherited: 0x150)
struct UAkCheckBox : UContentWidget {
	char pad_150[0x348]; // 0x150(0x348)
	enum class ECheckBoxState CheckedState; // 0x498(0x01)
	char pad_499[0x3]; // 0x499(0x03)
	struct FDelegate CheckedStateDelegate; // 0x49c(0x10)
	char pad_4AC[0x4]; // 0x4ac(0x04)
	struct FCheckBoxStyle WidgetStyle; // 0x4b0(0x610)
	enum class EHorizontalAlignment HorizontalAlignment; // 0xac0(0x01)
	bool IsFocusable; // 0xac1(0x01)
	char pad_AC2[0x6]; // 0xac2(0x06)
	struct FAkBoolPropertyToControl ThePropertyToControl; // 0xac8(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0xad8(0x40)
	struct FMulticastInlineDelegate AkOnCheckStateChanged; // 0xb18(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0xb28(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0xb38(0x10)
	char pad_B48[0x50]; // 0xb48(0x50)

	void SetIsChecked(bool InIsChecked); // Function AkAudio.AkCheckBox.SetIsChecked // (Net|Native|Event|NetResponse|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void SetCheckedState(enum class ECheckBoxState InCheckedState); // Function AkAudio.AkCheckBox.SetCheckedState // (Exec|Event|NetResponse|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3c40
	void SetAkItemId(struct FGuid& ItemID); // Function AkAudio.AkCheckBox.SetAkItemId // (Net|NetReliableEvent|NetResponse|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3c40
	void SetAkBoolProperty(struct FString ItemProperty); // Function AkAudio.AkCheckBox.SetAkBoolProperty // (Net|Event|NetResponse|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3c40
	bool IsPressed(); // Function AkAudio.AkCheckBox.IsPressed // (Net|Exec|Native|Event|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3c40
	bool IsChecked(); // Function AkAudio.AkCheckBox.IsChecked // (Exec|Native|Event|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3c40
	enum class ECheckBoxState GetCheckedState(); // Function AkAudio.AkCheckBox.GetCheckedState // (NetReliableNative|Event|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3c40
	struct FString GetAkProperty(); // Function AkAudio.AkCheckBox.GetAkProperty // (Native|Event|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3c40
	struct FGuid GetAkItemId(); // Function AkAudio.AkCheckBox.GetAkItemId // (Net|NetReliableNetRequest|Exec|Event|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3c40
};

// Class AkAudio.DrawPortalComponent
// Size: 0x540 (Inherited: 0x540)
struct UDrawPortalComponent : UPrimitiveComponent {
};

// Class AkAudio.DrawRoomComponent
// Size: 0x540 (Inherited: 0x540)
struct UDrawRoomComponent : UPrimitiveComponent {
};

// Class AkAudio.AkFolder
// Size: 0xb8 (Inherited: 0x40)
struct UAkFolder : UAkAudioType {
	struct FString UnrealFolderPath; // 0x40(0x10)
	struct FString WwiseFolderPath; // 0x50(0x10)
	char pad_60[0x58]; // 0x60(0x58)
};

// Class AkAudio.AkGameplayStatics
// Size: 0x28 (Inherited: 0x28)
struct UAkGameplayStatics : UBlueprintFunctionLibrary {

	void WakeupFromSuspend(); // Function AkAudio.AkGameplayStatics.WakeupFromSuspend // (NetRequest|Exec|NetMulticast|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c2c80
	void UseReverbVolumes(bool inUseReverbVolumes, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.UseReverbVolumes // (Net|Exec|NetMulticast|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void UseEarlyReflections(struct AActor* Actor, struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName); // Function AkAudio.AkGameplayStatics.UseEarlyReflections // (Net|NetMulticast|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void UpdatePostedEventMultiPositions(struct UAkComponent* AkComponent, struct TArray<struct FTransform>& Positions); // Function AkAudio.AkGameplayStatics.UpdatePostedEventMultiPositions // (Net|NetRequest|Exec|Native|Event|NetResponse|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void UnloadBankByNameAsync(struct FString BankName, struct FDelegate& BankUnloadedCallback); // Function AkAudio.AkGameplayStatics.UnloadBankByNameAsync // (NetReliableExec|Native|Event|NetResponse|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void UnloadBankByName(struct FString BankName); // Function AkAudio.AkGameplayStatics.UnloadBankByName // (Net|NetReliableNetRequest|Native|Event|NetResponse|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void UnloadBankAsync(struct UAkAudioBank* Bank, struct FDelegate& BankUnloadedCallback); // Function AkAudio.AkGameplayStatics.UnloadBankAsync // (NetRequest|Native|Event|NetResponse|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void UnloadBank(struct UAkAudioBank* Bank, struct FString BankName, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.UnloadBank // (NetReliableNetRequest|Exec|Event|NetResponse|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void Suspend(bool in_bRenderAnyway); // Function AkAudio.AkGameplayStatics.Suspend // (NetRequest|Exec|Event|NetResponse|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	int32_t StopSoundOnComponentbyname(struct FString SoundName, struct UActorComponent* Component); // Function AkAudio.AkGameplayStatics.StopSoundOnComponentbyname // (Net|NetReliableEvent|NetResponse|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	int32_t StopSoundOnComponent(struct UAkAudioEvent* AkEvent, struct UActorComponent* Component); // Function AkAudio.AkGameplayStatics.StopSoundOnComponent // (Event|NetResponse|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	int32_t StopSoundbyname(struct FString SoundName, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.StopSoundbyname // (Exec|Event|NetResponse|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	int32_t StopSound2Dbyname(struct FString SoundName); // Function AkAudio.AkGameplayStatics.StopSound2Dbyname // (NetReliableExec|Native|NetResponse|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	int32_t StopSound2D(struct UAkAudioEvent* AkEvent); // Function AkAudio.AkGameplayStatics.StopSound2D // (Exec|Native|NetResponse|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	int32_t StopSound(struct UAkAudioEvent* AkEvent, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.StopSound // (Net|NetRequest|Exec|Native|NetResponse|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void StopProfilerCapture(); // Function AkAudio.AkGameplayStatics.StopProfilerCapture // (Net|NetReliableNetRequest|Native|NetResponse|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void StopOutputCapture(); // Function AkAudio.AkGameplayStatics.StopOutputCapture // (Net|NetReliableNetRequest|Native|NetResponse|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void StopAllAmbientSounds(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.StopAllAmbientSounds // (Net|NetRequest|Native|NetResponse|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void StopAll(); // Function AkAudio.AkGameplayStatics.StopAll // (Net|NetRequest|Native|NetResponse|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void StopActor(struct AActor* Actor); // Function AkAudio.AkGameplayStatics.StopActor // (Net|NetReliableNative|NetResponse|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void StartProfilerCapture(struct FString Filename); // Function AkAudio.AkGameplayStatics.StartProfilerCapture // (Native|NetResponse|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void StartOutputCapture(struct FString Filename); // Function AkAudio.AkGameplayStatics.StartOutputCapture // (NetReliableNetRequest|Exec|NetResponse|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void StartAllAmbientSounds(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.StartAllAmbientSounds // (NetRequest|Exec|NetResponse|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	struct UAkComponent* SpawnAkComponentAtLocation(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation, bool AutoPost, struct FString EventName, bool AutoDestroy); // Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation // (NetRequest|NetResponse|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void SetSwitchToListenerbyname(struct FString SwitchGroup, struct FString SwitchState); // Function AkAudio.AkGameplayStatics.SetSwitchToListenerbyname // (Exec|Native|Event|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void SetSwitchToListener(struct UAkSwitchValue* SwitchValue); // Function AkAudio.AkGameplayStatics.SetSwitchToListener // (NetReliableNetRequest|Native|Event|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void SetSwitchToComponentbyname(struct UActorComponent* Component, struct FString SwitchGroup, struct FString SwitchState); // Function AkAudio.AkGameplayStatics.SetSwitchToComponentbyname // (Native|Event|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void SetSwitchToComponent(struct UAkSwitchValue* SwitchValue, struct UActorComponent* Component); // Function AkAudio.AkGameplayStatics.SetSwitchToComponent // (Net|NetRequest|Exec|Event|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void SetSwitchbyname(struct AActor* Actor, struct FString SwitchGroup, struct FString SwitchState); // Function AkAudio.AkGameplayStatics.SetSwitchbyname // (Net|NetRequest|Exec|Native|Event|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void SetSwitch(struct UAkSwitchValue* SwitchValue, struct AActor* Actor, struct FName SwitchGroup, struct FName SwitchState); // Function AkAudio.AkGameplayStatics.SetSwitch // (Exec|Event|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void SetState(struct UAkStateValue* StateValue, struct FName StateGroup, struct FName State); // Function AkAudio.AkGameplayStatics.SetState // (Net|NetRequest|Event|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void SetSpeakerAngles(struct TArray<float>& SpeakerAngles, float HeightAngle, struct FString DeviceShareset); // Function AkAudio.AkGameplayStatics.SetSpeakerAngles // (Event|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void SetRTPCValueToListenerbyname(struct FString RTPC, float Value, int32_t InterpolationTimeMs); // Function AkAudio.AkGameplayStatics.SetRTPCValueToListenerbyname // (Net|Native|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void SetRTPCValueToListener(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs); // Function AkAudio.AkGameplayStatics.SetRTPCValueToListener // (Net|NetRequest|Exec|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void SetRTPCValueToComponentbyname(struct FString RTPC, float Value, int32_t InterpolationTimeMs, struct UActorComponent* Component); // Function AkAudio.AkGameplayStatics.SetRTPCValueToComponentbyname // (Net|NetReliableNetRequest|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void SetRTPCValueToComponent(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct UActorComponent* Component); // Function AkAudio.AkGameplayStatics.SetRTPCValueToComponent // (NetReliableStatic|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void SetRTPCValuebyname(struct FString RTPC, float Value, int32_t InterpolationTimeMs, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.SetRTPCValuebyname // (Net|NetReliableNetRequest|Native|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void SetRTPCValue(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct AActor* Actor, struct FName RTPC); // Function AkAudio.AkGameplayStatics.SetRTPCValue // (NetRequest|Exec|Native|Event|NetResponse|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void SetReflectionsOrder(int32_t Order, bool RefreshPaths); // Function AkAudio.AkGameplayStatics.SetReflectionsOrder // (Net|NetRequest|Exec|Native|Static|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void SetPortalToPortalObstruction(struct UAkPortalComponent* PortalComponent0, struct UAkPortalComponent* PortalComponent1, float ObstructionValue); // Function AkAudio.AkGameplayStatics.SetPortalToPortalObstruction // (NetReliableNative|Event|NetResponse|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void SetPortalObstructionAndOcclusion(struct UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue); // Function AkAudio.AkGameplayStatics.SetPortalObstructionAndOcclusion // (NetReliableNetRequest|Exec|Event|NetResponse|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void SetPanningRule(enum class PanningRule PanRule); // Function AkAudio.AkGameplayStatics.SetPanningRule // (Net|NetRequest|Exec|Event|NetResponse|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void SetOutputBusVolume(float BusVolume, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.SetOutputBusVolume // (NetReliableExec|Event|NetResponse|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void SetOcclusionScalingFactor(float ScalingFactor); // Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor // (Exec|Event|NetResponse|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void SetOcclusionRefreshInterval(float RefreshInterval, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval // (Net|NetRequest|Event|NetResponse|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void SetMultiplePositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultiplePositions // (Event|NetResponse|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void SetMultipleChannelMaskEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FAkChannelMask> ChannelMasks, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions // (Exec|Native|NetResponse|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void SetMultipleChannelEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<enum class AkChannelConfiguration> ChannelMasks, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions // (Net|Native|NetResponse|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void SetGameObjectToPortalObstruction(struct UAkComponent* GameObjectAkComponent, struct UAkPortalComponent* PortalComponent, float ObstructionValue); // Function AkAudio.AkGameplayStatics.SetGameObjectToPortalObstruction // (Net|NetRequest|Exec|NetResponse|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void SetCurrentAudioCultureAsync(struct FString AudioCulture, struct FDelegate& Completed); // Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync // (NetReliableExec|NetResponse|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void SetCurrentAudioCulture(struct FString AudioCulture, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture // (Net|NetRequest|NetResponse|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void SetBusConfig(struct FString BusName, enum class AkChannelConfiguration ChannelConfiguration); // Function AkAudio.AkGameplayStatics.SetBusConfig // (Net|NetResponse|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void ReplaceMainOutput(struct FAkOutputSettings& MainOutputSettings); // Function AkAudio.AkGameplayStatics.ReplaceMainOutput // (Net|NetReliableNetRequest|Exec|Native|Event|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void PostTrigger(struct UAkTrigger* TriggerValue, struct AActor* Actor, struct FName Trigger); // Function AkAudio.AkGameplayStatics.PostTrigger // (Net|NetReliableExec|Native|Event|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void PostEventByName(struct FString EventName, struct AActor* Actor, bool bStopWhenAttachedToDestroyed); // Function AkAudio.AkGameplayStatics.PostEventByName // (Net|NetReliableNetRequest|Native|Event|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	int32_t PostEventAttached(struct UAkAudioEvent* AkEvent, struct AActor* Actor, struct FName AttachPointName, bool bStopWhenAttachedToDestroyed, struct FString EventName); // Function AkAudio.AkGameplayStatics.PostEventAttached // (Native|Event|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void PostEventAtLocationByName(struct FString EventName, struct FVector Location, struct FRotator Orientation, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.PostEventAtLocationByName // (NetReliableExec|Event|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	int32_t PostEventAtLocation(struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation, struct FString EventName, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.PostEventAtLocation // (NetRequest|Event|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	int32_t PostEvent(struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed, struct FString EventName); // Function AkAudio.AkGameplayStatics.PostEvent // (Exec|Native|UbergraphFunction|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void PostAndWaitForEndOfEventAsync(struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t& PlayingID, bool bStopWhenAttachedToDestroyed, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync // (Net|NetReliableNetRequest|Exec|Native|Event|NetResponse|Static|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	int32_t PostAndWaitForEndOfEvent(struct UAkAudioEvent* AkEvent, struct AActor* Actor, bool bStopWhenAttachedToDestroyed, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FString EventName, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent // (Net|NetRequest|Native|Event|NetResponse|Static|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	int32_t PlaySoundToComponentbyname(struct FString SoundName, struct UActorComponent* Component, bool bStopWhenAttachedToDestroyed); // Function AkAudio.AkGameplayStatics.PlaySoundToComponentbyname // (Net|NetReliableNetRequest|Native|NetResponse|Static|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	int32_t PlaySoundToComponent(struct UAkAudioEvent* AkEvent, struct UActorComponent* Component, bool bStopWhenAttachedToDestroyed); // Function AkAudio.AkGameplayStatics.PlaySoundToComponent // (Net|NetReliableNative|NetResponse|Static|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	int32_t PlaySoundbyname(struct FString SoundName, struct AActor* Actor, bool bStopWhenAttachedToDestroyed); // Function AkAudio.AkGameplayStatics.PlaySoundbyname // (NetRequest|Exec|Native|NetResponse|Static|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	int32_t PlaySoundAtLocationbyname(struct FString SoundName, struct FVector Location, struct FRotator Orientation, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.PlaySoundAtLocationbyname // (Net|NetRequest|Exec|NetResponse|Static|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	int32_t PlaySoundAtLocation(struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.PlaySoundAtLocation // (Net|NetReliableNetRequest|NetResponse|Static|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	int32_t PlaySound2Dbyname(struct FString SoundName, bool bStopWhenAttachedToDestroyed); // Function AkAudio.AkGameplayStatics.PlaySound2Dbyname // (Net|NetReliableNetRequest|Exec|Native|Event|Static|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	int32_t PlaySound2D(struct UAkAudioEvent* AkEvent, bool bStopWhenAttachedToDestroyed); // Function AkAudio.AkGameplayStatics.PlaySound2D // (NetRequest|Exec|Native|Event|Static|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	int32_t PlaySound(struct UAkAudioEvent* AkEvent, struct AActor* Actor, bool bStopWhenAttachedToDestroyed); // Function AkAudio.AkGameplayStatics.PlaySound // (NetRequest|NetResponse|Static|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void LoadInitBank(); // Function AkAudio.AkGameplayStatics.LoadInitBank // (NetRequest|Exec|Native|Event|Static|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void LoadBanks(struct TArray<struct UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks); // Function AkAudio.AkGameplayStatics.LoadBanks // (Exec|Native|Event|Static|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void LoadBankByNameAsync(struct FString BankName, struct FDelegate& BankLoadedCallback); // Function AkAudio.AkGameplayStatics.LoadBankByNameAsync // (NetRequest|Native|Event|Static|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void LoadBankByName(struct FString BankName); // Function AkAudio.AkGameplayStatics.LoadBankByName // (NetReliableNative|Event|Static|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void LoadBankAsync(struct UAkAudioBank* Bank, struct FDelegate& BankLoadedCallback); // Function AkAudio.AkGameplayStatics.LoadBankAsync // (NetReliableNetRequest|Exec|Event|Static|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void LoadBank(struct UAkAudioBank* Bank, struct FString BankName, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.LoadBank // (Net|Exec|Event|Static|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	bool IsGame(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.IsGame // (Net|NetReliableNetRequest|Event|Static|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	bool IsEditor(); // Function AkAudio.AkGameplayStatics.IsEditor // (Net|NetReliableNetRequest|Native|NetResponse|MulticastDelegate|Protected|Delegate|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void GetSpeakerAngles(struct TArray<float>& SpeakerAngles, float& HeightAngle, struct FString DeviceShareset); // Function AkAudio.AkGameplayStatics.GetSpeakerAngles // (Net|Event|Static|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void GetRTPCValue(struct UAkRtpc* RTPCValue, int32_t PlayingID, enum class ERTPCValueType InputValueType, float& Value, enum class ERTPCValueType& OutputValueType, struct AActor* Actor, struct FName RTPC); // Function AkAudio.AkGameplayStatics.GetRTPCValue // (Net|Exec|Native|Static|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	float GetOcclusionScalingFactor(); // Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor // (Net|NetReliableNetRequest|Exec|Static|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	struct FString GetCurrentAudioCulture(); // Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture // (Net|NetRequest|Exec|Static|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	struct TArray<struct FString> GetAvailableAudioCultures(); // Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures // (NetReliableExec|Static|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	struct UObject* GetAkMediaAssetUserData(struct UAkMediaAsset* Instance, struct UObject* Type); // Function AkAudio.AkGameplayStatics.GetAkMediaAssetUserData // (Static|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	struct UAkComponent* GetAkComponent(struct USceneComponent* AttachToComponent, bool& ComponentCreated, struct FName AttachPointName, struct FVector Location, enum class EAttachLocation LocationType); // Function AkAudio.AkGameplayStatics.GetAkComponent // (Net|NetReliableStatic|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	struct UObject* GetAkAudioTypeUserData(struct UAkAudioType* Instance, struct UObject* Type); // Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData // (Static|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void ExecuteActionOnPlayingID(enum class AkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, enum class EAkCurveInterpolation FadeCurve); // Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID // (NetRequest|Exec|Native|Event|NetResponse|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void ExecuteActionOnEvent(struct UAkAudioEvent* AkEvent, enum class AkActionOnEventType ActionType, struct AActor* Actor, int32_t TransitionDuration, enum class EAkCurveInterpolation FadeCurve, int32_t PlayingID); // Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent // (Net|NetRequest|Native|Event|NetResponse|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void ClearBanks(); // Function AkAudio.AkGameplayStatics.ClearBanks // (NetRequest|Native|Event|NetResponse|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void CancelEventCallback(struct FDelegate& PostEventCallback); // Function AkAudio.AkGameplayStatics.CancelEventCallback // (NetReliableNative|Event|NetResponse|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
	void AddOutputCaptureMarker(struct FString MarkerText); // Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker // (Native|Event|NetResponse|NetMulticast|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c3340
};

// Class AkAudio.AkCallbackInfo
// Size: 0x30 (Inherited: 0x28)
struct UAkCallbackInfo : UObject {
	struct UAkComponent* AkComponent; // 0x28(0x08)
};

// Class AkAudio.AkEventCallbackInfo
// Size: 0x38 (Inherited: 0x30)
struct UAkEventCallbackInfo : UAkCallbackInfo {
	int32_t PlayingID; // 0x30(0x04)
	int32_t EventId; // 0x34(0x04)
};

// Class AkAudio.AkMIDIEventCallbackInfo
// Size: 0x48 (Inherited: 0x38)
struct UAkMIDIEventCallbackInfo : UAkEventCallbackInfo {
	char pad_38[0x10]; // 0x38(0x10)

	enum class EAkMidiEventType GetType(); // Function AkAudio.AkMIDIEventCallbackInfo.GetType // (Event|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c2380
	bool GetProgramChange(struct FAkMidiProgramChange& AsProgramChange); // Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange // (Net|NetRequest|Exec|Native|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c2c80
	bool GetPitchBend(struct FAkMidiPitchBend& AsPitchBend); // Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend // (Net|NetReliableExec|Native|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c2c80
	bool GetNoteOn(struct FAkMidiNoteOnOff& AsNoteOn); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn // (Exec|Native|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c2c80
	bool GetNoteOff(struct FAkMidiNoteOnOff& AsNoteOff); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff // (Net|NetRequest|Native|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c2c80
	bool GetNoteAftertouch(struct FAkMidiNoteAftertouch& AsNoteAftertouch); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch // (NetReliableNative|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c2c80
	bool GetGeneric(struct FAkMidiGeneric& AsGeneric); // Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric // (Native|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c2c80
	bool GetChannelAftertouch(struct FAkMidiChannelAftertouch& AsChannelAftertouch); // Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch // (Net|NetRequest|Exec|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c2c80
	char GetChannel(); // Function AkAudio.AkMIDIEventCallbackInfo.GetChannel // (NetRequest|Exec|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c2c80
	bool GetCc(struct FAkMidiCc& AsCc); // Function AkAudio.AkMIDIEventCallbackInfo.GetCc // (Net|Exec|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c2c80
};

// Class AkAudio.AkMarkerCallbackInfo
// Size: 0x50 (Inherited: 0x38)
struct UAkMarkerCallbackInfo : UAkEventCallbackInfo {
	int32_t Identifier; // 0x38(0x04)
	int32_t Position; // 0x3c(0x04)
	struct FString Label; // 0x40(0x10)
};

// Class AkAudio.AkDurationCallbackInfo
// Size: 0x50 (Inherited: 0x38)
struct UAkDurationCallbackInfo : UAkEventCallbackInfo {
	float Duration; // 0x38(0x04)
	float EstimatedDuration; // 0x3c(0x04)
	int32_t AudioNodeID; // 0x40(0x04)
	int32_t MediaID; // 0x44(0x04)
	bool bStreaming; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class AkAudio.AkMusicSyncCallbackInfo
// Size: 0x70 (Inherited: 0x30)
struct UAkMusicSyncCallbackInfo : UAkCallbackInfo {
	int32_t PlayingID; // 0x30(0x04)
	struct FAkSegmentInfo SegmentInfo; // 0x34(0x24)
	enum class EAkCallbackType MusicSyncType; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FString UserCueName; // 0x60(0x10)
};

// Class AkAudio.AkGeometryComponent
// Size: 0x4c0 (Inherited: 0x330)
struct UAkGeometryComponent : UAkAcousticTextureSetComponent {
	enum class AkMeshType MeshType; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	int32_t LOD; // 0x334(0x04)
	float WeldingThreshold; // 0x338(0x04)
	char pad_33C[0x4]; // 0x33c(0x04)
	struct TMap<struct UMaterialInterface*, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride; // 0x340(0x50)
	struct FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride; // 0x390(0x18)
	char bEnableDiffraction : 1; // 0x3a8(0x01)
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x3a8(0x01)
	char pad_3A8_2 : 6; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct AActor* AssociatedRoom; // 0x3b0(0x08)
	char pad_3B8[0x10]; // 0x3b8(0x10)
	struct FAkGeometryData GeometryData; // 0x3c8(0x50)
	struct TMap<int32_t, float> SurfaceAreas; // 0x418(0x50)
	char pad_468[0x58]; // 0x468(0x58)

	void UpdateGeometry(); // Function AkAudio.AkGeometryComponent.UpdateGeometry // (NetReliableEvent|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c1f00
	void SendGeometry(); // Function AkAudio.AkGeometryComponent.SendGeometry // (Net|Event|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c2380
	void RemoveGeometry(); // Function AkAudio.AkGeometryComponent.RemoveGeometry // (Net|Event|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c2380
	void ConvertMesh(); // Function AkAudio.AkGeometryComponent.ConvertMesh // (Net|Exec|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c2380
};

// Class AkAudio.AkGroupValue
// Size: 0x68 (Inherited: 0x40)
struct UAkGroupValue : UAkAudioType {
	struct TArray<struct TSoftObjectPtr<UAkMediaAsset>> MediaDependencies; // 0x40(0x10)
	uint32_t GroupShortID; // 0x50(0x04)
	char pad_54[0x14]; // 0x54(0x14)
};

// Class AkAudio.AkHololensInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkHololensInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkHololensAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x34)
	char pad_F4[0x4]; // 0xf4(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering // (NetReliableExec|Native|Event|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c1180
};

// Class AkAudio.AkHololensPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkHololensPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkInitBankAssetData
// Size: 0x80 (Inherited: 0x70)
struct UAkInitBankAssetData : UAkAssetDataWithMedia {
	struct TArray<struct FAkPluginInfo> PluginInfos; // 0x70(0x10)
};

// Class AkAudio.AkInitBank
// Size: 0x70 (Inherited: 0x50)
struct UAkInitBank : UAkAssetBase {
	struct TArray<struct FString> AvailableAudioCultures; // 0x50(0x10)
	struct FString DefaultLanguage; // 0x60(0x10)
};

// Class AkAudio.AkIOSInitializationSettings
// Size: 0x100 (Inherited: 0x28)
struct UAkIOSInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkAudioSession AudioSession; // 0x98(0x0c)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa8(0x28)
	struct FAkAdvancedInitializationSettings AdvancedSettings; // 0xd0(0x2c)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// Class AkAudio.AkIOSPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkIOSPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkItemBoolPropertiesConv
// Size: 0x28 (Inherited: 0x28)
struct UAkItemBoolPropertiesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkBoolPropertyToControlToText(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl); // Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText // (NetReliableExec|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c0f40
	struct FString Conv_FAkBoolPropertyToControlToString(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl); // Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString // (NetReliableNetRequest|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c1180
};

// Class AkAudio.AkItemBoolProperties
// Size: 0x178 (Inherited: 0x138)
struct UAkItemBoolProperties : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x138(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x148(0x10)
	char pad_158[0x20]; // 0x158(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemBoolProperties.SetSearchText // (Net|NetReliableEvent|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c0d00
	struct FString GetSelectedProperty(); // Function AkAudio.AkItemBoolProperties.GetSelectedProperty // (Net|NetReliableNative|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c0f40
	struct FString GetSearchText(); // Function AkAudio.AkItemBoolProperties.GetSearchText // (Net|Native|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c0f40
};

// Class AkAudio.AkItemPropertiesConv
// Size: 0x28 (Inherited: 0x28)
struct UAkItemPropertiesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkPropertyToControlToText(struct FAkPropertyToControl& INAkPropertyToControl); // Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText // (NetReliableExec|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c0ac0
	struct FString Conv_FAkPropertyToControlToString(struct FAkPropertyToControl& INAkPropertyToControl); // Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString // (NetReliableNetRequest|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c0d00
};

// Class AkAudio.AkItemProperties
// Size: 0x178 (Inherited: 0x138)
struct UAkItemProperties : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x138(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x148(0x10)
	char pad_158[0x20]; // 0x158(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemProperties.SetSearchText // (Net|NetReliableEvent|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c0880
	struct FString GetSelectedProperty(); // Function AkAudio.AkItemProperties.GetSelectedProperty // (Net|NetRequest|Native|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c0ac0
	struct FString GetSearchText(); // Function AkAudio.AkItemProperties.GetSearchText // (Net|Native|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c0ac0
};

// Class AkAudio.AkLateReverbComponent
// Size: 0x3a0 (Inherited: 0x320)
struct UAkLateReverbComponent : USceneComponent {
	char bEnable : 1; // 0x318(0x01)
	float SendLevel; // 0x31c(0x04)
	float FadeRate; // 0x320(0x04)
	float Priority; // 0x324(0x04)
	bool AutoAssignAuxBus; // 0x328(0x01)
	char pad_32D_1 : 7; // 0x32d(0x01)
	char pad_32E[0x2]; // 0x32e(0x02)
	struct UAkAuxBus* AuxBus; // 0x330(0x08)
	struct FString AuxBusName; // 0x338(0x10)
	char pad_348[0x8]; // 0x348(0x08)
	struct UAkAuxBus* AuxBusManual; // 0x350(0x08)
	char pad_358[0x48]; // 0x358(0x48)

	void AssociateAkTextureSetComponent(struct UAkAcousticTextureSetComponent* textureSetComponent); // Function AkAudio.AkLateReverbComponent.AssociateAkTextureSetComponent // (NetRequest|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c0640
};

// Class AkAudio.AkLinuxInitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkLinuxInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0(0x30)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering // (NetReliableExec|Native|Event|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c01c0
};

// Class AkAudio.AkLinuxPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkLinuxPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkMacInitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkMacInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0(0x30)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering // (NetReliableExec|Native|Event|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c8680
};

// Class AkAudio.AkMacPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkMacPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkMediaAssetData
// Size: 0x60 (Inherited: 0x28)
struct UAkMediaAssetData : UObject {
	bool IsStreamed; // 0x28(0x01)
	bool UseDeviceMemory; // 0x29(0x01)
	char pad_2A[0x36]; // 0x2a(0x36)
};

// Class AkAudio.AkMediaAsset
// Size: 0x58 (Inherited: 0x28)
struct UAkMediaAsset : UObject {
	uint32_t ID; // 0x28(0x04)
	bool AutoLoad; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct TArray<struct UObject*> UserData; // 0x30(0x10)
	struct UAkMediaAssetData* CurrentMediaAssetData; // 0x40(0x08)
	char pad_48[0x10]; // 0x48(0x10)
};

// Class AkAudio.AkLocalizedMediaAsset
// Size: 0x58 (Inherited: 0x58)
struct UAkLocalizedMediaAsset : UAkMediaAsset {
};

// Class AkAudio.AkExternalMediaAsset
// Size: 0xb8 (Inherited: 0x58)
struct UAkExternalMediaAsset : UAkMediaAsset {
	char pad_58[0x60]; // 0x58(0x60)
};

// Class AkAudio.AkPlatformInitialisationSettingsBase
// Size: 0x28 (Inherited: 0x28)
struct UAkPlatformInitialisationSettingsBase : UInterface {
};

// Class AkAudio.AkPS4InitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkPS4InitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettings CommonSettings; // 0x30(0x60)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkPS4AdvancedInitializationSettings AdvancedSettings; // 0xb8(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering // (Exec|Native|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c7fc0
};

// Class AkAudio.AkPS4PlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkPS4PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkReverbVolume
// Size: 0x298 (Inherited: 0x260)
struct AAkReverbVolume : AVolume {
	char bEnabled : 1; // 0x260(0x01)
	char pad_260_1 : 7; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
	struct UAkAuxBus* AuxBus; // 0x268(0x08)
	struct FString AuxBusName; // 0x270(0x10)
	float SendLevel; // 0x280(0x04)
	float FadeRate; // 0x284(0x04)
	float Priority; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct UAkLateReverbComponent* LateReverbComponent; // 0x290(0x08)
};

// Class AkAudio.AkRoomComponent
// Size: 0x370 (Inherited: 0x340)
struct UAkRoomComponent : UAkGameObject {
	char bEnable : 1; // 0x338(0x01)
	bool bDynamic; // 0x33c(0x01)
	float Priority; // 0x340(0x04)
	float WallOcclusion; // 0x344(0x04)
	float AuxSendLevel; // 0x348(0x04)
	bool AutoPost; // 0x34c(0x01)
	char pad_34E_1 : 7; // 0x34e(0x01)
	char pad_34F[0x9]; // 0x34f(0x09)
	struct UAkAcousticTextureSetComponent* GeometryComponent; // 0x358(0x08)
	char pad_360[0x10]; // 0x360(0x10)

	struct UPrimitiveComponent* GetPrimitiveParent(); // Function AkAudio.AkRoomComponent.GetPrimitiveParent // (Native|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c76c0
};

// Class AkAudio.AkRtpc
// Size: 0x40 (Inherited: 0x40)
struct UAkRtpc : UAkAudioType {
};

// Class AkAudio.AkSettings
// Size: 0x2b8 (Inherited: 0x28)
struct UAkSettings : UObject {
	char MaxSimultaneousReverbVolumes; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FFilePath WwiseProjectPath; // 0x30(0x10)
	struct FDirectoryPath WwiseSoundDataFolder; // 0x40(0x10)
	bool bAutoConnectToWAAPI; // 0x50(0x01)
	enum class ECollisionChannel DefaultOcclusionCollisionChannel; // 0x51(0x01)
	enum class ECollisionChannel DefaultFitToGeometryCollisionChannel; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
	struct TMap<struct TSoftObjectPtr<UPhysicalMaterial>, struct FAkGeometrySurfacePropertiesToMap> AkGeometryMap; // 0x58(0x50)
	float GlobalDecayAbsorption; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TSoftObjectPtr<UAkAuxBus> DefaultReverbAuxBus; // 0xb0(0x28)
	struct TMap<float, struct TSoftObjectPtr<UAkAuxBus>> EnvironmentDecayAuxBusMap; // 0xd8(0x50)
	struct FString HFDampingName; // 0x128(0x10)
	struct FString DecayEstimateName; // 0x138(0x10)
	struct FString TimeToFirstReflectionName; // 0x148(0x10)
	struct TSoftObjectPtr<UAkRtpc> HFDampingRTPC; // 0x158(0x28)
	struct TSoftObjectPtr<UAkRtpc> DecayEstimateRTPC; // 0x180(0x28)
	struct TSoftObjectPtr<UAkRtpc> TimeToFirstReflectionRTPC; // 0x1a8(0x28)
	struct TMap<struct FGuid, struct FAkAcousticTextureParams> AcousticTextureParamsMap; // 0x1d0(0x50)
	bool SplitSwitchContainerMedia; // 0x220(0x01)
	bool SplitMediaPerFolder; // 0x221(0x01)
	bool UseEventBasedPackaging; // 0x222(0x01)
	bool EnableAutomaticAssetSynchronization; // 0x223(0x01)
	char pad_224[0x4]; // 0x224(0x04)
	struct FString CommandletCommitMessage; // 0x228(0x10)
	struct TMap<struct FString, struct FString> UnrealCultureToWwiseCulture; // 0x238(0x50)
	bool AskedToUseNewAssetManagement; // 0x288(0x01)
	bool bEnableMultiCoreRendering; // 0x289(0x01)
	bool MigratedEnableMultiCoreRendering; // 0x28a(0x01)
	bool FixupRedirectorsDuringMigration; // 0x28b(0x01)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x290(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x2a0(0x10)
	char pad_2B0[0x8]; // 0x2b0(0x08)
};

// Class AkAudio.AkSettingsPerUser
// Size: 0x80 (Inherited: 0x28)
struct UAkSettingsPerUser : UObject {
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x28(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x38(0x10)
	bool EnableAutomaticAssetSynchronization; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FString WaapiIPAddress; // 0x50(0x10)
	uint32_t WaapiPort; // 0x60(0x04)
	bool bAutoConnectToWAAPI; // 0x64(0x01)
	bool AutoSyncSelection; // 0x65(0x01)
	bool SuppressWwiseProjectPathWarnings; // 0x66(0x01)
	bool SoundDataGenerationSkipLanguage; // 0x67(0x01)
	char pad_68[0x18]; // 0x68(0x18)
};

// Class AkAudio.AkSlider
// Size: 0x5c0 (Inherited: 0x138)
struct UAkSlider : UWidget {
	float Value; // 0x138(0x04)
	struct FDelegate ValueDelegate; // 0x13c(0x10)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct FSliderStyle WidgetStyle; // 0x150(0x3a0)
	enum class EOrientation Orientation; // 0x4f0(0x01)
	char pad_4F1[0x3]; // 0x4f1(0x03)
	struct FLinearColor SliderBarColor; // 0x4f4(0x10)
	struct FLinearColor SliderHandleColor; // 0x504(0x10)
	bool IndentHandle; // 0x514(0x01)
	bool Locked; // 0x515(0x01)
	char pad_516[0x2]; // 0x516(0x02)
	float StepSize; // 0x518(0x04)
	bool IsFocusable; // 0x51c(0x01)
	char pad_51D[0x3]; // 0x51d(0x03)
	struct FAkPropertyToControl ThePropertyToControl; // 0x520(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0x530(0x40)
	struct FMulticastInlineDelegate OnValueChanged; // 0x570(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0x580(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0x590(0x10)
	char pad_5A0[0x20]; // 0x5a0(0x20)

	void SetValue(float InValue); // Function AkAudio.AkSlider.SetValue // (NetRequest|Exec|Event|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c6dc0
	void SetStepSize(float InValue); // Function AkAudio.AkSlider.SetStepSize // (NetReliableExec|Event|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c76c0
	void SetSliderHandleColor(struct FLinearColor InValue); // Function AkAudio.AkSlider.SetSliderHandleColor // (Exec|Event|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c76c0
	void SetSliderBarColor(struct FLinearColor InValue); // Function AkAudio.AkSlider.SetSliderBarColor // (NetReliableNetRequest|Event|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c76c0
	void SetLocked(bool InValue); // Function AkAudio.AkSlider.SetLocked // (Net|Event|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c76c0
	void SetIndentHandle(bool InValue); // Function AkAudio.AkSlider.SetIndentHandle // (Net|NetReliableNetRequest|Exec|Native|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c76c0
	void SetAkSliderItemProperty(struct FString ItemProperty); // Function AkAudio.AkSlider.SetAkSliderItemProperty // (NetRequest|Exec|Native|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c76c0
	void SetAkSliderItemId(struct FGuid& ItemID); // Function AkAudio.AkSlider.SetAkSliderItemId // (NetReliableExec|Native|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c76c0
	float GetValue(); // Function AkAudio.AkSlider.GetValue // (Net|NetReliableNetRequest|Native|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c76c0
	struct FString GetAkSliderItemProperty(); // Function AkAudio.AkSlider.GetAkSliderItemProperty // (Net|NetReliableNetRequest|Exec|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c76c0
	struct FGuid GetAkSliderItemId(); // Function AkAudio.AkSlider.GetAkSliderItemId // (NetReliableNetRequest|Exec|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c76c0
};

// Class AkAudio.AkSpatialAudioVolume
// Size: 0x278 (Inherited: 0x260)
struct AAkSpatialAudioVolume : AVolume {
	struct UAkSurfaceReflectorSetComponent* SurfaceReflectorSet; // 0x260(0x08)
	struct UAkLateReverbComponent* LateReverb; // 0x268(0x08)
	struct UAkRoomComponent* Room; // 0x270(0x08)
};

// Class AkAudio.AkSpotReflector
// Size: 0x250 (Inherited: 0x228)
struct AAkSpotReflector : AActor {
	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x228(0x08)
	struct FString EarlyReflectionAuxBusName; // 0x230(0x10)
	struct UAkAcousticTexture* AcousticTexture; // 0x240(0x08)
	float DistanceScalingFactor; // 0x248(0x04)
	float Level; // 0x24c(0x04)
};

// Class AkAudio.AkStateValue
// Size: 0x68 (Inherited: 0x68)
struct UAkStateValue : UAkGroupValue {
};

// Class AkAudio.AkSurfaceReflectorSetComponent
// Size: 0x360 (Inherited: 0x330)
struct UAkSurfaceReflectorSetComponent : UAkAcousticTextureSetComponent {
	char bEnableSurfaceReflectors : 1; // 0x330(0x01)
	char pad_330_1 : 7; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct TArray<struct FAkPoly> AcousticPolys; // 0x338(0x10)
	char bEnableDiffraction : 1; // 0x348(0x01)
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x348(0x01)
	char pad_348_2 : 6; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct AActor* AssociatedRoom; // 0x350(0x08)
	char pad_358[0x8]; // 0x358(0x08)

	void UpdateSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet // (Net|NetRequest|Exec|Static|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c6b80
	void SendSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet // (Net|NetRequest|Exec|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c6dc0
	void RemoveSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet // (NetRequest|Exec|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c6dc0
};

// Class AkAudio.AkSwitchInitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkSwitchInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithCommSelection CommunicationSettings; // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0(0x30)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering // (NetReliableExec|Native|Event|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c5e00
};

// Class AkAudio.AkSwitchPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkSwitchPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkSwitchValue
// Size: 0x68 (Inherited: 0x68)
struct UAkSwitchValue : UAkGroupValue {
};

// Class AkAudio.AkTrigger
// Size: 0x40 (Inherited: 0x40)
struct UAkTrigger : UAkAudioType {
};

// Class AkAudio.AkTVOSInitializationSettings
// Size: 0x100 (Inherited: 0x28)
struct UAkTVOSInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkAudioSession AudioSession; // 0x98(0x0c)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa8(0x28)
	struct FAkAdvancedInitializationSettings AdvancedSettings; // 0xd0(0x2c)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// Class AkAudio.AkTVOSPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkTVOSPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWaapiCalls
// Size: 0x28 (Inherited: 0x28)
struct UAkWaapiCalls : UBlueprintFunctionLibrary {

	struct FAKWaapiJsonObject Unsubscribe(struct FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone); // Function AkAudio.AkWaapiCalls.Unsubscribe // (Exec|Static|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c5980
	struct FAKWaapiJsonObject SubscribeToWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiOptions, struct FDelegate& Callback, struct FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone); // Function AkAudio.AkWaapiCalls.SubscribeToWaapi // (Net|NetReliableNetRequest|Exec|Native|Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c5e00
	void SetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription, int32_t ID); // Function AkAudio.AkWaapiCalls.SetSubscriptionID // (Net|NetReliableExec|Native|Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c5e00
	bool RegisterWaapiProjectLoadedCallback(struct FDelegate& Callback); // Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback // (Net|Exec|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c5e00
	bool RegisterWaapiConnectionLostCallback(struct FDelegate& Callback); // Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback // (Net|NetReliableNetRequest|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c5e00
	int32_t GetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription); // Function AkAudio.AkWaapiCalls.GetSubscriptionID // (NetRequest|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c5e00
	struct FText Conv_FAkWaapiSubscriptionIdToText(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId); // Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText // (Exec|Native|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c5e00
	struct FString Conv_FAkWaapiSubscriptionIdToString(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId); // Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString // (Net|NetRequest|Native|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c5e00
	struct FAKWaapiJsonObject CallWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiArgs, struct FAKWaapiJsonObject& WaapiOptions); // Function AkAudio.AkWaapiCalls.CallWaapi // (NetRequest|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c5e00
};

// Class AkAudio.SAkWaapiFieldNamesConv
// Size: 0x28 (Inherited: 0x28)
struct USAkWaapiFieldNamesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkWaapiFieldNamesToText(struct FAkWaapiFieldNames& INAkWaapiFieldNames); // Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText // (NetReliableExec|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c5740
	struct FString Conv_FAkWaapiFieldNamesToString(struct FAkWaapiFieldNames& INAkWaapiFieldNames); // Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString // (NetReliableNetRequest|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c5980
};

// Class AkAudio.AkWaapiJsonManager
// Size: 0x28 (Inherited: 0x28)
struct UAkWaapiJsonManager : UBlueprintFunctionLibrary {

	struct FAKWaapiJsonObject SetStringField(struct FAkWaapiFieldNames& FieldName, struct FString FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetStringField // (NetRequest|Native|Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c5500
	struct FAKWaapiJsonObject SetObjectField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetObjectField // (NetRequest|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c5740
	struct FAKWaapiJsonObject SetNumberField(struct FAkWaapiFieldNames& FieldName, float FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetNumberField // (Net|NetRequest|Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c5740
	struct FAKWaapiJsonObject SetBoolField(struct FAkWaapiFieldNames& FieldName, bool FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetBoolField // (NetReliableNetRequest|Exec|Native|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c5740
	struct FAKWaapiJsonObject SetArrayStringFields(struct FAkWaapiFieldNames& FieldName, struct TArray<struct FString>& FieldStringValues, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetArrayStringFields // (NetReliableNetRequest|Native|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c5740
	struct FAKWaapiJsonObject SetArrayObjectFields(struct FAkWaapiFieldNames& FieldName, struct TArray<struct FAKWaapiJsonObject>& FieldObjectValues, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields // (Net|NetRequest|Exec|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c5740
	struct FString GetStringField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetStringField // (NetReliableNetRequest|Exec|Native|Event|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c5740
	struct FAKWaapiJsonObject GetObjectField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetObjectField // (NetRequest|Native|Event|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c5740
	float GetNumberField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetNumberField // (Net|NetReliableNetRequest|Exec|Event|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c5740
	int32_t GetIntegerField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetIntegerField // (NetReliableExec|Event|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c5740
	bool GetBoolField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetBoolField // (Net|NetRequest|Event|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c5740
	struct TArray<struct FAKWaapiJsonObject> GetArrayField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetArrayField // (NetRequest|Exec|Native|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c5740
	struct FText Conv_FAKWaapiJsonObjectToText(struct FAKWaapiJsonObject INAKWaapiJsonObject); // Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText // (Native|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c5740
	struct FString Conv_FAKWaapiJsonObjectToString(struct FAKWaapiJsonObject INAKWaapiJsonObject); // Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString // (NetRequest|Exec|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c5740
};

// Class AkAudio.AkWaapiUriConv
// Size: 0x28 (Inherited: 0x28)
struct UAkWaapiUriConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkWaapiUriToText(struct FAkWaapiUri& INAkWaapiUri); // Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText // (NetReliableExec|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c52c0
	struct FString Conv_FAkWaapiUriToString(struct FAkWaapiUri& INAkWaapiUri); // Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString // (NetReliableNetRequest|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c5500
};

// Class AkAudio.AkWindowsInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkWindowsInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkWindowsAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering // (NetReliableExec|Native|Event|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314cde40
};

// Class AkAudio.AkWin32PlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkWin32PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWin64PlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkWin64PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWindowsPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkWindowsPlatformInfo : UAkWin64PlatformInfo {
};

// Class AkAudio.AkWwiseTree
// Size: 0x178 (Inherited: 0x138)
struct UAkWwiseTree : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x138(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x148(0x10)
	char pad_158[0x20]; // 0x158(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkWwiseTree.SetSearchText // (Net|NetReliableEvent|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314cd9c0
	struct FAkWwiseObjectDetails GetSelectedItem(); // Function AkAudio.AkWwiseTree.GetSelectedItem // (NetReliableExec|Native|Event|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314cde40
	struct FString GetSearchText(); // Function AkAudio.AkWwiseTree.GetSearchText // (Net|Native|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314cde40
};

// Class AkAudio.AkWwiseTreeSelector
// Size: 0x198 (Inherited: 0x138)
struct UAkWwiseTreeSelector : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x138(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x148(0x10)
	char pad_158[0x40]; // 0x158(0x40)
};

// Class AkAudio.AkXboxOneInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkXboxOneInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettings CommonSettings; // 0x30(0x60)
	struct FAkXboxOneApuHeapInitializationSettings ApuHeapSettings; // 0x90(0x08)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkXboxOneAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x34)
	char pad_F4[0x4]; // 0xf4(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering // (NetReliableExec|Native|Event|Static|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314cb800
};

// Class AkAudio.AkXboxOnePlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkXboxOnePlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.InterpTrackAkAudioEvent
// Size: 0xa8 (Inherited: 0x90)
struct UInterpTrackAkAudioEvent : UInterpTrackVectorBase {
	struct TArray<struct FAkAudioEventTrackKey> Events; // 0x90(0x10)
	char bContinueEventOnMatineeEnd : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class AkAudio.InterpTrackAkAudioRTPC
// Size: 0xa8 (Inherited: 0x90)
struct UInterpTrackAkAudioRTPC : UInterpTrackFloatBase {
	struct FString Param; // 0x90(0x10)
	char bPlayOnReverse : 1; // 0xa0(0x01)
	char bContinueRTPCOnMatineeEnd : 1; // 0xa0(0x01)
	char pad_A0_2 : 6; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class AkAudio.InterpTrackInstAkAudioEvent
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstAkAudioEvent : UInterpTrackInst {
	float LastUpdatePosition; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class AkAudio.InterpTrackInstAkAudioRTPC
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstAkAudioRTPC : UInterpTrackInst {
	float LastUpdatePosition; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class AkAudio.MovieSceneAkAudioEventSection
// Size: 0x1c8 (Inherited: 0xe0)
struct UMovieSceneAkAudioEventSection : UMovieSceneSection {
	char pad_E0[0x40]; // 0xe0(0x40)
	struct UAkAudioEvent* Event; // 0x120(0x08)
	bool RetriggerEvent; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	int32_t ScrubTailLengthMs; // 0x12c(0x04)
	bool StopAtSectionEnd; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct FString EventName; // 0x138(0x10)
	char pad_148[0x20]; // 0x148(0x20)
	float MaxSourceDuration; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct FString MaxDurationSourceID; // 0x170(0x10)
	char pad_180[0x48]; // 0x180(0x48)
};

// Class AkAudio.MovieSceneAkTrack
// Size: 0x70 (Inherited: 0x58)
struct UMovieSceneAkTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
	char bIsAMasterTrack : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class AkAudio.MovieSceneAkAudioEventTrack
// Size: 0x70 (Inherited: 0x70)
struct UMovieSceneAkAudioEventTrack : UMovieSceneAkTrack {
};

// Class AkAudio.MovieSceneAkAudioRTPCSection
// Size: 0x248 (Inherited: 0xe0)
struct UMovieSceneAkAudioRTPCSection : UMovieSceneSection {
	struct UAkRtpc* RTPC; // 0xe0(0x08)
	struct FString Name; // 0xe8(0x10)
	struct FRichCurve FloatCurve; // 0xf8(0x80)
	struct FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper; // 0x178(0x30)
	struct FMovieSceneFloatChannel RTPCChannel; // 0x1a8(0xa0)
};

// Class AkAudio.MovieSceneAkAudioRTPCTrack
// Size: 0x70 (Inherited: 0x70)
struct UMovieSceneAkAudioRTPCTrack : UMovieSceneAkTrack {
};

// Class AkAudio.PostEventAsync
// Size: 0xa0 (Inherited: 0x30)
struct UPostEventAsync : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Completed; // 0x30(0x10)
	char pad_40[0x60]; // 0x40(0x60)

	struct UPostEventAsync* PostEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed); // Function AkAudio.PostEventAsync.PostEventAsync // (Net|NetRequest|Exec|Native|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314cb5c0
	void PollPostEventFuture(); // Function AkAudio.PostEventAsync.PollPostEventFuture // (NetRequest|Exec|Native|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314cb800
};

// Class AkAudio.PostEventAtLocationAsync
// Size: 0x80 (Inherited: 0x30)
struct UPostEventAtLocationAsync : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Completed; // 0x30(0x10)
	char pad_40[0x40]; // 0x40(0x40)

	struct UPostEventAtLocationAsync* PostEventAtLocationAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation); // Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync // (Net|NetReliableNetRequest|Event|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9f40
	void PollPostEventFuture(); // Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture // (Net|NetRequest|Exec|Native|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314cb5c0
};

// Class AkAudio.WwiseDataQuery
// Size: 0x28 (Inherited: 0x28)
struct UWwiseDataQuery : UObject {
};

