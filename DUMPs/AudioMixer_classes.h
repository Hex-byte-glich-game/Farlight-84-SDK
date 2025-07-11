// Class AudioMixer.SynthComponent
// Size: 0x7f0 (Inherited: 0x320)
struct USynthComponent : USceneComponent {
	char bAutoDestroy : 1; // 0x318(0x01)
	char bStopWhenOwnerDestroyed : 1; // 0x318(0x01)
	char bAllowSpatialization : 1; // 0x318(0x01)
	char bOverrideAttenuation : 1; // 0x318(0x01)
	char bOutputToBusOnly : 1; // 0x31c(0x01)
	struct USoundAttenuation* AttenuationSettings; // 0x320(0x08)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x328(0x3a0)
	struct USoundConcurrency* ConcurrencySettings; // 0x6c8(0x08)
	struct TSet<struct USoundConcurrency*> ConcurrencySet; // 0x6d0(0x50)
	struct USoundClass* SoundClass; // 0x720(0x08)
	struct USoundEffectSourcePresetChain* SourceEffectChain; // 0x728(0x08)
	struct USoundSubmixBase* SoundSubmix; // 0x730(0x08)
	struct TArray<struct FSoundSubmixSendInfo> SoundSubmixSends; // 0x738(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> BusSends; // 0x748(0x10)
	struct FSoundModulation Modulation; // 0x758(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> PreEffectBusSends; // 0x768(0x10)
	char bIsUISound : 1; // 0x778(0x01)
	char bIsPreviewSound : 1; // 0x778(0x01)
	char pad_778_7 : 1; // 0x778(0x01)
	char pad_779[0x3]; // 0x779(0x03)
	int32_t EnvelopeFollowerAttackTime; // 0x77c(0x04)
	int32_t EnvelopeFollowerReleaseTime; // 0x780(0x04)
	char pad_784[0x4]; // 0x784(0x04)
	struct FMulticastInlineDelegate OnAudioEnvelopeValue; // 0x788(0x10)
	char pad_798[0x20]; // 0x798(0x20)
	struct USynthSound* Synth; // 0x7b8(0x08)
	struct UAudioComponent* AudioComponent; // 0x7c0(0x08)
	char pad_7C8[0x28]; // 0x7c8(0x28)

	void Stop(); // Function AudioMixer.SynthComponent.Stop // (Net|NetReliableNetRequest|Exec|Event|NetResponse|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3146e740
	void Start(); // Function AudioMixer.SynthComponent.Start // (Net|NetReliableEvent|NetResponse|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3146e500
	void SetVolumeMultiplier(float VolumeMultiplier); // Function AudioMixer.SynthComponent.SetVolumeMultiplier // (Net|Event|NetResponse|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3146e500
	void SetSubmixSend(struct USoundSubmixBase* Submix, float SendLevel); // Function AudioMixer.SynthComponent.SetSubmixSend // (NetReliableNetRequest|Exec|Native|NetResponse|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3146e500
	bool IsPlaying(); // Function AudioMixer.SynthComponent.IsPlaying // (Net|NetReliableNetRequest|Event|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3146e500
};

// Class AudioMixer.AudioGenerator
// Size: 0xa8 (Inherited: 0x28)
struct UAudioGenerator : UObject {
	char pad_28[0x80]; // 0x28(0x80)
};

// Class AudioMixer.AudioMixerBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAudioMixerBlueprintLibrary : UBlueprintFunctionLibrary {

	float TrimAudioCache(float InMegabytesToFree); // Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache // (NetReliableExec|Native|Event|NetResponse|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31704e40
	struct USoundWave* StopRecordingOutput(struct UObject* WorldContextObject, enum class EAudioRecordingExportType ExportType, struct FString Name, struct FString Path, struct USoundSubmix* SubmixToRecord, struct USoundWave* ExistingSoundWaveToOverwrite); // Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput // (NetReliableNative|Event|NetResponse|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31705080
	void StopAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToStopAnalyzing); // Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput // (Net|NetReliableNetRequest|Exec|Event|NetResponse|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31705080
	void StartRecordingOutput(struct UObject* WorldContextObject, float ExpectedDuration, struct USoundSubmix* SubmixToRecord); // Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput // (Net|NetReliableExec|Event|NetResponse|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31705080
	void StartAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToAnalyze, enum class EFFTSize FFTSize, enum class EFFTPeakInterpolationMethod InterpolationMethod, enum class EFFTWindowType WindowType, float HopSize); // Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput // (NetRequest|Event|NetResponse|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31705080
	void SetBypassSourceEffectChainEntry(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed); // Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry // (Net|NetRequest|NetResponse|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31705080
	void ResumeRecordingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToPause); // Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput // (NetReliableNetResponse|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31705080
	void ReplaceSoundEffectSubmix(struct UObject* WorldContextObject, struct USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix // (NetReliableNetRequest|Exec|Native|Event|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31705080
	void RemoveSubmixEffectPresetAtIndex(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, int32_t SubmixChainIndex); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex // (NetReliableExec|Native|Event|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31705080
	void RemoveSubmixEffectPreset(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset // (NetReliableNetRequest|Native|Event|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31705080
	void RemoveSourceEffectFromPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain // (NetReliableNative|Event|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31705080
	void RemoveMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect // (Native|Event|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31705080
	void PrimeSoundForPlayback(struct USoundWave* SoundWave, struct FDelegate OnLoadCompletion); // Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback // (NetRequest|Exec|Event|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31705080
	void PrimeSoundCueForPlayback(struct USoundCue* SoundCue); // Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback // (Net|NetReliableExec|Event|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31705080
	void PauseRecordingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToPause); // Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput // (Exec|Event|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31705080
	void GetPhaseForFrequencies(struct UObject* WorldContextObject, struct TArray<float>& Frequencies, struct TArray<float>& Phases, struct USoundSubmix* SubmixToAnalyze); // Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies // (Net|Event|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31705080
	int32_t GetNumberOfEntriesInSourceEffectChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain); // Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain // (NetReliableNetRequest|Exec|Native|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31705080
	void GetMagnitudeForFrequencies(struct UObject* WorldContextObject, struct TArray<float>& Frequencies, struct TArray<float>& Magnitudes, struct USoundSubmix* SubmixToAnalyze); // Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies // (Exec|Native|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31705080
	void ClearSubmixEffects(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix); // Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects // (Net|NetRequest|Native|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31705080
	void ClearMasterSubmixEffects(struct UObject* WorldContextObject); // Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects // (NetRequest|Native|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31705080
	int32_t AddSubmixEffect(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect // (Native|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31705080
	void AddSourceEffectToPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, struct FSourceEffectChainEntry Entry); // Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain // (NetRequest|Exec|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31705080
	void AddMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect // (Net|Exec|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31705080
};

// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// Size: 0x108 (Inherited: 0x40)
struct USubmixEffectDynamicsProcessorPreset : USoundEffectSubmixPreset {
	char pad_40[0x78]; // 0x40(0x78)
	struct FSubmixEffectDynamicsProcessorSettings Settings; // 0xb8(0x50)

	void SetSettings(struct FSubmixEffectDynamicsProcessorSettings& Settings); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings // (NetRequest|Exec|NetResponse|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31704c00
	void SetExternalSubmix(struct USoundSubmix* Submix); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix // (NetReliableExec|NetResponse|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31704e40
};

// Class AudioMixer.SubmixEffectSubmixEQPreset
// Size: 0x88 (Inherited: 0x40)
struct USubmixEffectSubmixEQPreset : USoundEffectSubmixPreset {
	char pad_40[0x38]; // 0x40(0x38)
	struct FSubmixEffectSubmixEQSettings Settings; // 0x78(0x10)

	void SetSettings(struct FSubmixEffectSubmixEQSettings& InSettings); // Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings // (Net|Native|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170de40
};

// Class AudioMixer.SubmixEffectReverbPreset
// Size: 0xd0 (Inherited: 0x40)
struct USubmixEffectReverbPreset : USoundEffectSubmixPreset {
	char pad_40[0x5c]; // 0x40(0x5c)
	struct FSubmixEffectReverbSettings Settings; // 0x9c(0x34)

	void SetSettingsWithReverbEffect(struct UReverbEffect* InReverbEffect, float WetLevel, float DryLevel); // Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect // (NetReliableExec|Native|NetResponse|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170dc00
	void SetSettings(struct FSubmixEffectReverbSettings& InSettings); // Function AudioMixer.SubmixEffectReverbPreset.SetSettings // (Net|NetReliableNative|NetResponse|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170de40
};

// Class AudioMixer.SubmixEffectReverbFastPreset
// Size: 0xd8 (Inherited: 0x40)
struct USubmixEffectReverbFastPreset : USoundEffectSubmixPreset {
	char pad_40[0x60]; // 0x40(0x60)
	struct FSubmixEffectReverbFastSettings Settings; // 0xa0(0x38)

	void SetSettingsWithReverbEffect(struct UReverbEffect* InReverbEffect, float WetLevel, float DryLevel); // Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect // (NetReliableNetRequest|Native|NetResponse|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170cc40
	void SetSettings(struct FSubmixEffectReverbFastSettings& InSettings); // Function AudioMixer.SubmixEffectReverbFastPreset.SetSettings // (Native|NetResponse|Static|NetMulticast|Public|Private|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3170dc00
};

// Class AudioMixer.SynthSound
// Size: 0x380 (Inherited: 0x360)
struct USynthSound : USoundWaveProcedural {
	struct USynthComponent* OwningSynthComponent; // 0x360(0x08)
	char pad_368[0x18]; // 0x368(0x18)
};

