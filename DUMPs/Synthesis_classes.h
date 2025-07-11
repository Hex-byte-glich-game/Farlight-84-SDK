// Class Synthesis.ModularSynthPresetBank
// Size: 0x38 (Inherited: 0x28)
struct UModularSynthPresetBank : UObject {
	struct TArray<struct FModularSynthPresetBankEntry> Presets; // 0x28(0x10)
};

// Class Synthesis.ModularSynthLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModularSynthLibrary : UBlueprintFunctionLibrary {

	void AddModularSynthPresetToBankAsset(struct UModularSynthPresetBank* InBank, struct FModularSynthPreset& Preset, struct FString PresetName); // Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset // (NetRequest|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
};

// Class Synthesis.ModularSynthComponent
// Size: 0xe90 (Inherited: 0x7f0)
struct UModularSynthComponent : USynthComponent {
	int32_t VoiceCount; // 0x7f0(0x04)
	char pad_7F4[0x69c]; // 0x7f4(0x69c)

	void SetSynthPreset(struct FModularSynthPreset& SynthPreset); // Function Synthesis.ModularSynthComponent.SetSynthPreset // (Net|NetReliableExec|Native|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de2c0
	void SetSustainGain(float SustainGain); // Function Synthesis.ModularSynthComponent.SetSustainGain // (Net|Exec|Native|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetStereoDelayWetlevel(float DelayWetlevel); // Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel // (Net|NetReliableNetRequest|Native|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetStereoDelayTime(float DelayTimeMsec); // Function Synthesis.ModularSynthComponent.SetStereoDelayTime // (Net|NetRequest|Native|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetStereoDelayRatio(float DelayRatio); // Function Synthesis.ModularSynthComponent.SetStereoDelayRatio // (Net|NetReliableNative|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetStereoDelayMode(enum class ESynthStereoDelayMode StereoDelayMode); // Function Synthesis.ModularSynthComponent.SetStereoDelayMode // (Net|Native|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled); // Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled // (Net|NetReliableNetRequest|Exec|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetStereoDelayFeedback(float DelayFeedback); // Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback // (Net|NetRequest|Exec|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetSpread(float Spread); // Function Synthesis.ModularSynthComponent.SetSpread // (Net|NetReliableExec|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetReleaseTime(float ReleaseTimeMsec); // Function Synthesis.ModularSynthComponent.SetReleaseTime // (Net|Exec|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetPortamento(float Portamento); // Function Synthesis.ModularSynthComponent.SetPortamento // (Net|NetReliableNetRequest|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetPitchBend(float PitchBend); // Function Synthesis.ModularSynthComponent.SetPitchBend // (Net|NetRequest|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetPan(float Pan); // Function Synthesis.ModularSynthComponent.SetPan // (Net|NetReliableNetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetOscType(int32_t OscIndex, enum class ESynth1OscType OscType); // Function Synthesis.ModularSynthComponent.SetOscType // (NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetOscSync(bool bIsSynced); // Function Synthesis.ModularSynthComponent.SetOscSync // (Net|NetRequest|Exec|Native|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetOscSemitones(int32_t OscIndex, float Semitones); // Function Synthesis.ModularSynthComponent.SetOscSemitones // (NetReliableExec|Native|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth); // Function Synthesis.ModularSynthComponent.SetOscPulsewidth // (Net|NetReliableNetRequest|Native|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetOscOctave(int32_t OscIndex, float Octave); // Function Synthesis.ModularSynthComponent.SetOscOctave // (NetRequest|Native|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetOscGainMod(int32_t OscIndex, float OscGainMod); // Function Synthesis.ModularSynthComponent.SetOscGainMod // (Native|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetOscGain(int32_t OscIndex, float OscGain); // Function Synthesis.ModularSynthComponent.SetOscGain // (Net|NetRequest|Exec|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod); // Function Synthesis.ModularSynthComponent.SetOscFrequencyMod // (NetReliableExec|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetOscCents(int32_t OscIndex, float Cents); // Function Synthesis.ModularSynthComponent.SetOscCents // (Net|NetReliableNetRequest|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetModEnvSustainGain(float SustainGain); // Function Synthesis.ModularSynthComponent.SetModEnvSustainGain // (Net|NetRequest|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetModEnvReleaseTime(float Release); // Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime // (Net|NetReliableEvent|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetModEnvPatch(enum class ESynthModEnvPatch InPatchType); // Function Synthesis.ModularSynthComponent.SetModEnvPatch // (Net|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetModEnvInvert(bool bInvert); // Function Synthesis.ModularSynthComponent.SetModEnvInvert // (NetReliableNetRequest|Exec|Native|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetModEnvDepth(float Depth); // Function Synthesis.ModularSynthComponent.SetModEnvDepth // (NetRequest|Exec|Native|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetModEnvDecayTime(float DecayTimeMsec); // Function Synthesis.ModularSynthComponent.SetModEnvDecayTime // (NetReliableExec|Native|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetModEnvBiasPatch(enum class ESynthModEnvBiasPatch InPatchType); // Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch // (Exec|Native|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetModEnvBiasInvert(bool bInvert); // Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert // (NetReliableNetRequest|Native|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetModEnvAttackTime(float AttackTimeMsec); // Function Synthesis.ModularSynthComponent.SetModEnvAttackTime // (NetRequest|Native|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetLFOType(int32_t LFOIndex, enum class ESynthLFOType LFOType); // Function Synthesis.ModularSynthComponent.SetLFOType // (Net|Native|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetLFOPatch(int32_t LFOIndex, enum class ESynthLFOPatchType LFOPatchType); // Function Synthesis.ModularSynthComponent.SetLFOPatch // (NetReliableNetRequest|Exec|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetLFOMode(int32_t LFOIndex, enum class ESynthLFOMode LFOMode); // Function Synthesis.ModularSynthComponent.SetLFOMode // (Net|NetReliableExec|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetLFOGainMod(int32_t LFOIndex, float GainMod); // Function Synthesis.ModularSynthComponent.SetLFOGainMod // (Exec|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetLFOGain(int32_t LFOIndex, float Gain); // Function Synthesis.ModularSynthComponent.SetLFOGain // (Net|NetRequest|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz); // Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod // (Net|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz); // Function Synthesis.ModularSynthComponent.SetLFOFrequency // (NetReliableNetRequest|Exec|Native|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetGainDb(float GainDb); // Function Synthesis.ModularSynthComponent.SetGainDb // (NetRequest|Exec|Native|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetFilterType(enum class ESynthFilterType FilterType); // Function Synthesis.ModularSynthComponent.SetFilterType // (NetReliableExec|Native|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetFilterQMod(float FilterQ); // Function Synthesis.ModularSynthComponent.SetFilterQMod // (Exec|Native|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetFilterQ(float FilterQ); // Function Synthesis.ModularSynthComponent.SetFilterQ // (NetReliableNetRequest|Native|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetFilterFrequencyMod(float FilterFrequencyHz); // Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod // (NetRequest|Native|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetFilterFrequency(float FilterFrequencyHz); // Function Synthesis.ModularSynthComponent.SetFilterFrequency // (NetReliableNative|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetFilterAlgorithm(enum class ESynthFilterAlgorithm FilterAlgorithm); // Function Synthesis.ModularSynthComponent.SetFilterAlgorithm // (Native|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetEnableUnison(bool EnableUnison); // Function Synthesis.ModularSynthComponent.SetEnableUnison // (NetReliableNetRequest|Exec|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetEnableRetrigger(bool RetriggerEnabled); // Function Synthesis.ModularSynthComponent.SetEnableRetrigger // (NetRequest|Exec|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetEnablePolyphony(bool bEnablePolyphony); // Function Synthesis.ModularSynthComponent.SetEnablePolyphony // (Net|Exec|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	bool SetEnablePatch(struct FPatchId PatchId, bool bIsEnabled); // Function Synthesis.ModularSynthComponent.SetEnablePatch // (NetReliableNetRequest|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetEnableLegato(bool LegatoEnabled); // Function Synthesis.ModularSynthComponent.SetEnableLegato // (NetRequest|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetDecayTime(float DecayTimeMsec); // Function Synthesis.ModularSynthComponent.SetDecayTime // (NetReliableEvent|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetChorusFrequency(float Frequency); // Function Synthesis.ModularSynthComponent.SetChorusFrequency // (Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetChorusFeedback(float Feedback); // Function Synthesis.ModularSynthComponent.SetChorusFeedback // (NetReliableNetRequest|Exec|Native|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetChorusEnabled(bool EnableChorus); // Function Synthesis.ModularSynthComponent.SetChorusEnabled // (NetRequest|Exec|Native|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetChorusDepth(float Depth); // Function Synthesis.ModularSynthComponent.SetChorusDepth // (NetReliableExec|Native|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void SetAttackTime(float AttackTimeMsec); // Function Synthesis.ModularSynthComponent.SetAttackTime // (Exec|Native|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void NoteOn(float Note, int32_t Velocity, float Duration); // Function Synthesis.ModularSynthComponent.NoteOn // (Net|NetReliableNative|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes); // Function Synthesis.ModularSynthComponent.NoteOff // (Net|NetReliableNetRequest|Exec|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
	struct FPatchId CreatePatch(enum class ESynth1PatchSource PatchSource, struct TArray<struct FSynth1PatchCable>& PatchCables, bool bEnableByDefault); // Function Synthesis.ModularSynthComponent.CreatePatch // (NetReliableExec|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314de500
};

// Class Synthesis.SourceEffectBitCrusherPreset
// Size: 0x78 (Inherited: 0x40)
struct USourceEffectBitCrusherPreset : USoundEffectSourcePreset {
	char pad_40[0x30]; // 0x40(0x30)
	struct FSourceEffectBitCrusherSettings Settings; // 0x70(0x08)

	void SetSettings(struct FSourceEffectBitCrusherSettings& InSettings); // Function Synthesis.SourceEffectBitCrusherPreset.SetSettings // (Net|Exec|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31524780
};

// Class Synthesis.SourceEffectChorusPreset
// Size: 0x98 (Inherited: 0x40)
struct USourceEffectChorusPreset : USoundEffectSourcePreset {
	char pad_40[0x40]; // 0x40(0x40)
	struct FSourceEffectChorusSettings Settings; // 0x80(0x18)

	void SetSettings(struct FSourceEffectChorusSettings& InSettings); // Function Synthesis.SourceEffectChorusPreset.SetSettings // (Net|NetReliableExec|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31524540
};

// Class Synthesis.SourceEffectDynamicsProcessorPreset
// Size: 0xb8 (Inherited: 0x40)
struct USourceEffectDynamicsProcessorPreset : USoundEffectSourcePreset {
	char pad_40[0x50]; // 0x40(0x50)
	struct FSourceEffectDynamicsProcessorSettings Settings; // 0x90(0x28)

	void SetSettings(struct FSourceEffectDynamicsProcessorSettings& InSettings); // Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings // (NetReliableNetRequest|Exec|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f315240c0
};

// Class Synthesis.EnvelopeFollowerListener
// Size: 0xd0 (Inherited: 0xb0)
struct UEnvelopeFollowerListener : UActorComponent {
	struct FMulticastInlineDelegate OnEnvelopeFollowerUpdate; // 0xb0(0x10)
	char pad_C0[0x10]; // 0xc0(0x10)
};

// Class Synthesis.SourceEffectEnvelopeFollowerPreset
// Size: 0x80 (Inherited: 0x40)
struct USourceEffectEnvelopeFollowerPreset : USoundEffectSourcePreset {
	char pad_40[0x34]; // 0x40(0x34)
	struct FSourceEffectEnvelopeFollowerSettings Settings; // 0x74(0x0c)

	void UnregisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener // (Net|NetReliableNetRequest|Exec|Event|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31523e80
	void SetSettings(struct FSourceEffectEnvelopeFollowerSettings& InSettings); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings // (NetRequest|Native|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f315240c0
	void RegisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener // (Net|NetRequest|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f315240c0
};

// Class Synthesis.SourceEffectEQPreset
// Size: 0x88 (Inherited: 0x40)
struct USourceEffectEQPreset : USoundEffectSourcePreset {
	char pad_40[0x38]; // 0x40(0x38)
	struct FSourceEffectEQSettings Settings; // 0x78(0x10)

	void SetSettings(struct FSourceEffectEQSettings& InSettings); // Function Synthesis.SourceEffectEQPreset.SetSettings // (Net|Native|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31523c40
};

// Class Synthesis.SourceEffectFilterPreset
// Size: 0x80 (Inherited: 0x40)
struct USourceEffectFilterPreset : USoundEffectSourcePreset {
	char pad_40[0x34]; // 0x40(0x34)
	struct FSourceEffectFilterSettings Settings; // 0x74(0x0c)

	void SetSettings(struct FSourceEffectFilterSettings& InSettings); // Function Synthesis.SourceEffectFilterPreset.SetSettings // (NetReliableNetRequest|Native|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31523a00
};

// Class Synthesis.SourceEffectFoldbackDistortionPreset
// Size: 0x80 (Inherited: 0x40)
struct USourceEffectFoldbackDistortionPreset : USoundEffectSourcePreset {
	char pad_40[0x34]; // 0x40(0x34)
	struct FSourceEffectFoldbackDistortionSettings Settings; // 0x74(0x0c)

	void SetSettings(struct FSourceEffectFoldbackDistortionSettings& InSettings); // Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings // (Net|Exec|Native|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f315237c0
};

// Class Synthesis.SourceEffectMidSideSpreaderPreset
// Size: 0x80 (Inherited: 0x40)
struct USourceEffectMidSideSpreaderPreset : USoundEffectSourcePreset {
	char pad_40[0x34]; // 0x40(0x34)
	struct FSourceEffectMidSideSpreaderSettings Settings; // 0x74(0x0c)

	void SetSettings(struct FSourceEffectMidSideSpreaderSettings& InSettings); // Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings // (NetRequest|Exec|Native|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31523580
};

// Class Synthesis.SourceEffectPannerPreset
// Size: 0x78 (Inherited: 0x40)
struct USourceEffectPannerPreset : USoundEffectSourcePreset {
	char pad_40[0x30]; // 0x40(0x30)
	struct FSourceEffectPannerSettings Settings; // 0x70(0x08)

	void SetSettings(struct FSourceEffectPannerSettings& InSettings); // Function Synthesis.SourceEffectPannerPreset.SetSettings // (Net|NetReliableNetRequest|Exec|Native|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31523340
};

// Class Synthesis.SourceEffectPhaserPreset
// Size: 0x88 (Inherited: 0x40)
struct USourceEffectPhaserPreset : USoundEffectSourcePreset {
	char pad_40[0x38]; // 0x40(0x38)
	struct FSourceEffectPhaserSettings Settings; // 0x78(0x10)

	void SetSettings(struct FSourceEffectPhaserSettings& InSettings); // Function Synthesis.SourceEffectPhaserPreset.SetSettings // (Net|Event|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31523100
};

// Class Synthesis.SourceEffectRingModulationPreset
// Size: 0x90 (Inherited: 0x40)
struct USourceEffectRingModulationPreset : USoundEffectSourcePreset {
	char pad_40[0x3c]; // 0x40(0x3c)
	struct FSourceEffectRingModulationSettings Settings; // 0x7c(0x14)

	void SetSettings(struct FSourceEffectRingModulationSettings& InSettings); // Function Synthesis.SourceEffectRingModulationPreset.SetSettings // (NetRequest|Event|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31522ec0
};

// Class Synthesis.SourceEffectSimpleDelayPreset
// Size: 0x98 (Inherited: 0x40)
struct USourceEffectSimpleDelayPreset : USoundEffectSourcePreset {
	char pad_40[0x40]; // 0x40(0x40)
	struct FSourceEffectSimpleDelaySettings Settings; // 0x80(0x18)

	void SetSettings(struct FSourceEffectSimpleDelaySettings& InSettings); // Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings // (Net|NetReliableNetRequest|Event|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31522c80
};

// Class Synthesis.SourceEffectStereoDelayPreset
// Size: 0x90 (Inherited: 0x40)
struct USourceEffectStereoDelayPreset : USoundEffectSourcePreset {
	char pad_40[0x3c]; // 0x40(0x3c)
	struct FSourceEffectStereoDelaySettings Settings; // 0x7c(0x14)

	void SetSettings(struct FSourceEffectStereoDelaySettings& InSettings); // Function Synthesis.SourceEffectStereoDelayPreset.SetSettings // (NetReliableExec|Event|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31522a40
};

// Class Synthesis.SourceEffectWaveShaperPreset
// Size: 0x78 (Inherited: 0x40)
struct USourceEffectWaveShaperPreset : USoundEffectSourcePreset {
	char pad_40[0x30]; // 0x40(0x30)
	struct FSourceEffectWaveShaperSettings Settings; // 0x70(0x08)

	void SetSettings(struct FSourceEffectWaveShaperSettings& InSettings); // Function Synthesis.SourceEffectWaveShaperPreset.SetSettings // (Net|NetReliableNetRequest|Exec|Native|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f315225c0
};

// Class Synthesis.AudioImpulseResponse
// Size: 0x58 (Inherited: 0x28)
struct UAudioImpulseResponse : UObject {
	struct TArray<float> ImpulseResponse; // 0x28(0x10)
	int32_t NumChannels; // 0x38(0x04)
	int32_t SampleRate; // 0x3c(0x04)
	float NormalizationVolumeDb; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<float> IRData; // 0x48(0x10)
};

// Class Synthesis.SubmixEffectConvolutionReverbPreset
// Size: 0xb8 (Inherited: 0x40)
struct USubmixEffectConvolutionReverbPreset : USoundEffectSubmixPreset {
	struct FSubmixEffectConvolutionReverbSettings Settings; // 0x40(0x20)
	struct UAudioImpulseResponse* ImpulseResponse; // 0x60(0x08)
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0x68(0x01)
	bool bEnableHardwareAcceleration; // 0x69(0x01)
	char pad_6A[0x4e]; // 0x6a(0x4e)

	void SetSettings(struct FSubmixEffectConvolutionReverbSettings& InSettings); // Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings // (NetRequest|Exec|Event|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31522140
	void SetImpulseResponse(struct UAudioImpulseResponse* InImpulseResponse); // Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse // (Net|NetReliableNetRequest|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f315225c0
};

// Class Synthesis.SubmixEffectDelayPreset
// Size: 0x90 (Inherited: 0x40)
struct USubmixEffectDelayPreset : USoundEffectSubmixPreset {
	char pad_40[0x34]; // 0x40(0x34)
	struct FSubmixEffectDelaySettings Settings; // 0x74(0x0c)
	struct FSubmixEffectDelaySettings DynamicSettings; // 0x80(0x0c)
	char pad_8C[0x4]; // 0x8c(0x04)

	void SetSettings(struct FSubmixEffectDelaySettings& InSettings); // Function Synthesis.SubmixEffectDelayPreset.SetSettings // (Net|NetReliableExec|Static|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521f00
	void SetInterpolationTime(float Time); // Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime // (Event|NetResponse|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31522140
	void SetDelay(float Length); // Function Synthesis.SubmixEffectDelayPreset.SetDelay // (Net|NetReliableNetRequest|Event|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31522140
	float GetMaxDelayInMilliseconds(); // Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds // (NetReliableNetRequest|Exec|Event|NetResponse|Static|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31522140
};

// Class Synthesis.SubmixEffectFilterPreset
// Size: 0x80 (Inherited: 0x40)
struct USubmixEffectFilterPreset : USoundEffectSubmixPreset {
	char pad_40[0x34]; // 0x40(0x34)
	struct FSubmixEffectFilterSettings Settings; // 0x74(0x0c)

	void SetSettings(struct FSubmixEffectFilterSettings& InSettings); // Function Synthesis.SubmixEffectFilterPreset.SetSettings // (NetReliableNetRequest|Exec|Static|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521cc0
	void SetFilterType(enum class ESubmixFilterType InType); // Function Synthesis.SubmixEffectFilterPreset.SetFilterType // (NetRequest|NetResponse|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521f00
	void SetFilterQMod(float InQ); // Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod // (NetReliableNetResponse|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521f00
	void SetFilterQ(float InQ); // Function Synthesis.SubmixEffectFilterPreset.SetFilterQ // (NetResponse|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521f00
	void SetFilterCutoffFrequencyMod(float InFrequency); // Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod // (Net|NetRequest|Exec|Event|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521f00
	void SetFilterCutoffFrequency(float InFrequency); // Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency // (Net|NetReliableExec|Event|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521f00
	void SetFilterAlgorithm(enum class ESubmixFilterAlgorithm InAlgorithm); // Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm // (Net|Exec|Event|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521f00
};

// Class Synthesis.SubmixEffectFlexiverbPreset
// Size: 0x88 (Inherited: 0x40)
struct USubmixEffectFlexiverbPreset : USoundEffectSubmixPreset {
	char pad_40[0x38]; // 0x40(0x38)
	struct FSubmixEffectFlexiverbSettings Settings; // 0x78(0x10)

	void SetSettings(struct FSubmixEffectFlexiverbSettings& InSettings); // Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings // (Net|Native|Static|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521a80
};

// Class Synthesis.SubmixEffectTapDelayPreset
// Size: 0xb0 (Inherited: 0x40)
struct USubmixEffectTapDelayPreset : USoundEffectSubmixPreset {
	char pad_40[0x40]; // 0x40(0x40)
	struct FSubmixEffectTapDelaySettings Settings; // 0x80(0x18)
	char pad_98[0x18]; // 0x98(0x18)

	void SetTap(int32_t TapId, struct FTapDelayInfo& TapInfo); // Function Synthesis.SubmixEffectTapDelayPreset.SetTap // (Net|Event|Static|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521840
	void SetSettings(struct FSubmixEffectTapDelaySettings& InSettings); // Function Synthesis.SubmixEffectTapDelayPreset.SetSettings // (NetRequest|Native|Static|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521a80
	void SetInterpolationTime(float Time); // Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime // (NetReliableEvent|NetResponse|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521a80
	void RemoveTap(int32_t TapId); // Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap // (Exec|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521a80
	void GetTapIds(struct TArray<int32_t>& TapIds); // Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds // (Net|NetRequest|Native|Event|NetResponse|Static|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521a80
	void GetTap(int32_t TapId, struct FTapDelayInfo& TapInfo); // Function Synthesis.SubmixEffectTapDelayPreset.GetTap // (Net|Native|Event|NetResponse|Static|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521a80
	float GetMaxDelayInMilliseconds(); // Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds // (NetReliableNetRequest|Exec|Event|NetResponse|Static|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521a80
	void AddTap(int32_t& TapId); // Function Synthesis.SubmixEffectTapDelayPreset.AddTap // (Net|NetRequest|Event|NetResponse|Static|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521a80
};

// Class Synthesis.Synth2DSlider
// Size: 0x4f8 (Inherited: 0x138)
struct USynth2DSlider : UWidget {
	float ValueX; // 0x138(0x04)
	float ValueY; // 0x13c(0x04)
	struct FDelegate ValueXDelegate; // 0x140(0x10)
	struct FDelegate ValueYDelegate; // 0x150(0x10)
	struct FSynth2DSliderStyle WidgetStyle; // 0x160(0x308)
	struct FLinearColor SliderHandleColor; // 0x468(0x10)
	bool IndentHandle; // 0x478(0x01)
	bool Locked; // 0x479(0x01)
	char pad_47A[0x2]; // 0x47a(0x02)
	float StepSize; // 0x47c(0x04)
	bool IsFocusable; // 0x480(0x01)
	char pad_481[0x7]; // 0x481(0x07)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x488(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x498(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x4a8(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x4b8(0x10)
	struct FMulticastInlineDelegate OnValueChangedX; // 0x4c8(0x10)
	struct FMulticastInlineDelegate OnValueChangedY; // 0x4d8(0x10)
	char pad_4E8[0x10]; // 0x4e8(0x10)

	void SetValue(struct FVector2D InValue); // Function Synthesis.Synth2DSlider.SetValue // (NetRequest|Event|Static|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521600
	void SetStepSize(float InValue); // Function Synthesis.Synth2DSlider.SetStepSize // (Net|NetReliableExec|Native|Static|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521840
	void SetSliderHandleColor(struct FLinearColor InValue); // Function Synthesis.Synth2DSlider.SetSliderHandleColor // (Net|NetReliableNetRequest|Native|Static|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521840
	void SetLocked(bool InValue); // Function Synthesis.Synth2DSlider.SetLocked // (NetRequest|Event|NetResponse|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521840
	void SetIndentHandle(bool InValue); // Function Synthesis.Synth2DSlider.SetIndentHandle // (NetReliableNetRequest|Exec|Native|NetResponse|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521840
	struct FVector2D GetValue(); // Function Synthesis.Synth2DSlider.GetValue // (Exec|Native|Event|NetResponse|Static|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521840
};

// Class Synthesis.GranularSynth
// Size: 0xbb0 (Inherited: 0x7f0)
struct UGranularSynth : USynthComponent {
	struct USoundWave* GranulatedSoundWave; // 0x7f0(0x08)
	char pad_7F8[0x3b8]; // 0x7f8(0x3b8)

	void SetSustainGain(float SustainGain); // Function Synthesis.GranularSynth.SetSustainGain // (Net|NetRequest|Exec|Native|Static|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetSoundWave(struct USoundWave* InSoundWave); // Function Synthesis.GranularSynth.SetSoundWave // (Net|Exec|Native|Static|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521600
	void SetScrubMode(bool bScrubMode); // Function Synthesis.GranularSynth.SetScrubMode // (Net|Exec|Static|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521600
	void SetReleaseTimeMsec(float ReleaseTimeMsec); // Function Synthesis.GranularSynth.SetReleaseTimeMsec // (Net|NetReliableNetRequest|Static|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521600
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, enum class EGranularSynthSeekType SeekType); // Function Synthesis.GranularSynth.SetPlayheadTime // (NetRequest|Exec|Event|NetResponse|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521600
	void SetPlaybackSpeed(float InPlayheadRate); // Function Synthesis.GranularSynth.SetPlaybackSpeed // (NetReliableExec|Event|NetResponse|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521600
	void SetGrainVolume(float BaseVolume, struct FVector2D VolumeRange); // Function Synthesis.GranularSynth.SetGrainVolume // (Net|Exec|Native|NetResponse|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521600
	void SetGrainsPerSecond(float InGrainsPerSecond); // Function Synthesis.GranularSynth.SetGrainsPerSecond // (NetRequest|Exec|Native|NetResponse|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521600
	void SetGrainProbability(float InGrainProbability); // Function Synthesis.GranularSynth.SetGrainProbability // (Net|NetReliableNetRequest|Native|NetResponse|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521600
	void SetGrainPitch(float BasePitch, struct FVector2D PitchRange); // Function Synthesis.GranularSynth.SetGrainPitch // (NetRequest|Native|NetResponse|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521600
	void SetGrainPan(float BasePan, struct FVector2D PanRange); // Function Synthesis.GranularSynth.SetGrainPan // (Net|Native|NetResponse|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521600
	void SetGrainEnvelopeType(enum class EGranularSynthEnvelopeType EnvelopeType); // Function Synthesis.GranularSynth.SetGrainEnvelopeType // (Net|NetReliableNetRequest|Exec|NetResponse|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521600
	void SetGrainDuration(float BaseDurationMsec, struct FVector2D DurationRange); // Function Synthesis.GranularSynth.SetGrainDuration // (NetRequest|Exec|NetResponse|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521600
	void SetDecayTime(float DecayTimeMsec); // Function Synthesis.GranularSynth.SetDecayTime // (Net|NetReliableExec|Native|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521600
	void SetAttackTime(float AttackTimeMsec); // Function Synthesis.GranularSynth.SetAttackTime // (Net|NetReliableExec|Native|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521600
	void NoteOn(float Note, int32_t Velocity, float Duration); // Function Synthesis.GranularSynth.NoteOn // (Net|NetReliableNetRequest|Exec|Native|Event|NetResponse|Static|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521600
	void NoteOff(float Note, bool bKill); // Function Synthesis.GranularSynth.NoteOff // (Net|Exec|Native|Event|NetResponse|Static|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521600
	bool IsLoaded(); // Function Synthesis.GranularSynth.IsLoaded // (Net|Exec|Native|Event|NetResponse|Static|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521600
	float GetSampleDuration(); // Function Synthesis.GranularSynth.GetSampleDuration // (Net|Native|Event|NetResponse|Static|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521600
	float GetCurrentPlayheadTime(); // Function Synthesis.GranularSynth.GetCurrentPlayheadTime // (Net|NetReliableNetRequest|Event|NetResponse|Static|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521600
};

// Class Synthesis.MonoWaveTableSynthPreset
// Size: 0x170 (Inherited: 0x28)
struct UMonoWaveTableSynthPreset : UObject {
	struct FString PresetName; // 0x28(0x10)
	char bLockKeyframesToGridBool : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t LockKeyframesToGrid; // 0x3c(0x04)
	int32_t WaveTableResolution; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FRuntimeFloatCurve> WaveTable; // 0x48(0x10)
	char bNormalizeWaveTables : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x117]; // 0x59(0x117)
};

// Class Synthesis.SynthComponentMonoWaveTable
// Size: 0xf30 (Inherited: 0x7f0)
struct USynthComponentMonoWaveTable : USynthComponent {
	struct FMulticastInlineDelegate OnTableAltered; // 0x7f0(0x10)
	struct FMulticastInlineDelegate OnNumTablesChanged; // 0x800(0x10)
	struct UMonoWaveTableSynthPreset* CurrentPreset; // 0x810(0x08)
	char pad_818[0x718]; // 0x818(0x718)

	void SetWaveTablePosition(float InPosition); // Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition // (NetReliableNetRequest|Event|Static|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31520f40
	void SetSustainPedalState(bool InSustainPedalState); // Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState // (Net|NetReliableNetRequest|Exec|Native|Static|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetPosLfoType(enum class ESynthLFOType InLfoType); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType // (NetRequest|Native|Event|NetResponse|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetPosLfoFrequency(float InLfoFrequency); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency // (NetReliableNative|Event|NetResponse|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetPosLfoDepth(float InLfoDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth // (Native|Event|NetResponse|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetPositionEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain // (Net|NetRequest|Static|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime // (Net|NetReliableStatic|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetPositionEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert // (Static|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetPositionEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth // (NetReliableNetRequest|Exec|Native|Event|NetResponse|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetPositionEnvelopeDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime // (NetRequest|Exec|Native|Event|NetResponse|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetPositionEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert // (NetReliableExec|Native|Event|NetResponse|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetPositionEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth // (Exec|Native|Event|NetResponse|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetPositionEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime // (NetReliableNetRequest|Native|Event|NetResponse|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetLowPassFilterResonance(float InNewQ); // Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance // (Exec|Event|NetResponse|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetLowPassFilterFrequency(float InNewFrequency); // Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterFrequency // (NetReliableNetRequest|Event|NetResponse|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetFrequencyWithMidiNote(float InMidiNote); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote // (NetReliableExec|NetResponse|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetFrequencyPitchBend(float FrequencyOffsetCents); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend // (Exec|NetResponse|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetFrequency(float FrequencyHz); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequency // (NetReliableNetRequest|NetResponse|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetFilterEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain // (NetRequest|Exec|Native|Event|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime // (NetReliableExec|Native|Event|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetFilterEnvelopenDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime // (NetReliableNetRequest|Exec|Native|Event|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetFilterEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert // (Net|NetReliableNetRequest|Native|Event|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetFilterEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth // (Net|NetRequest|Native|Event|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetFilterEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert // (Net|NetReliableNative|Event|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetFilterEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth // (Net|Native|Event|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetFilterEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime // (Net|NetReliableNetRequest|Exec|Event|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue // (Net|NetReliableEvent|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	bool SetCurveTangent(int32_t TableIndex, float InNewTangent); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent // (Event|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	bool SetCurveInterpolationType(enum class CurveInterpolationType InterpolationType, int32_t TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType // (Net|NetRequest|Exec|Native|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetAmpEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain // (Net|Exec|Native|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime // (Net|NetReliableNetRequest|Native|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetAmpEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert // (Net|NetRequest|Native|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetAmpEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth // (Net|NetReliableNative|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetAmpEnvelopeDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime // (Net|Native|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetAmpEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert // (NetReliableNetRequest|Exec|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetAmpEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth // (NetRequest|Exec|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void SetAmpEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime // (NetReliableExec|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void RefreshWaveTable(int32_t Index); // Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable // (NetReliableNetRequest|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void RefreshAllWaveTables(); // Function Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables // (NetReliableNetRequest|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void NoteOn(float InMidiNote, float InVelocity); // Function Synthesis.SynthComponentMonoWaveTable.NoteOn // (Net|NetReliableUbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	void NoteOff(float InMidiNote); // Function Synthesis.SynthComponentMonoWaveTable.NoteOff // (Net|NetRequest|Exec|Native|Event|NetResponse|Static|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	int32_t GetNumTableEntries(); // Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries // (Native|Event|NetResponse|Static|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	int32_t GetMaxTableIndex(); // Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex // (Net|NetReliableNetRequest|Exec|Event|NetResponse|Static|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	struct TArray<float> GetKeyFrameValuesForTable(float TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable // (NetReliableExec|Event|NetResponse|Static|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
	float GetCurveTangent(int32_t TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent // (Exec|Event|NetResponse|Static|NetMulticast|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31521180
};

// Class Synthesis.SynthSamplePlayer
// Size: 0x920 (Inherited: 0x7f0)
struct USynthSamplePlayer : USynthComponent {
	struct USoundWave* SoundWave; // 0x7f0(0x08)
	struct FMulticastInlineDelegate OnSampleLoaded; // 0x7f8(0x10)
	struct FMulticastInlineDelegate OnSamplePlaybackProgress; // 0x808(0x10)
	char pad_818[0x108]; // 0x818(0x108)

	void SetSoundWave(struct USoundWave* InSoundWave); // Function Synthesis.SynthSamplePlayer.SetSoundWave // (NetReliableExec|Event|NetResponse|Static|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31520d00
	void SetScrubTimeWidth(float InScrubTimeWidthSec); // Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth // (Exec|Event|NetResponse|Static|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31520f40
	void SetScrubMode(bool bScrubMode); // Function Synthesis.SynthSamplePlayer.SetScrubMode // (NetReliableNetRequest|Event|NetResponse|Static|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31520f40
	void SetPitch(float InPitch, float TimeSec); // Function Synthesis.SynthSamplePlayer.SetPitch // (Net|NetReliableEvent|NetResponse|Static|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31520f40
	void SeekToTime(float TimeSec, enum class ESamplePlayerSeekType SeekType, bool bWrap); // Function Synthesis.SynthSamplePlayer.SeekToTime // (NetRequest|Exec|Native|NetResponse|Static|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31520f40
	bool IsLoaded(); // Function Synthesis.SynthSamplePlayer.IsLoaded // (NetRequest|Exec|Native|NetResponse|Static|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31520f40
	float GetSampleDuration(); // Function Synthesis.SynthSamplePlayer.GetSampleDuration // (NetReliableExec|Native|NetResponse|Static|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31520f40
	float GetCurrentPlaybackProgressTime(); // Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime // (Net|Exec|Native|NetResponse|Static|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31520f40
	float GetCurrentPlaybackProgressPercent(); // Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent // (Net|Exec|Native|NetResponse|Static|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31520f40
};

// Class Synthesis.SynthKnob
// Size: 0x470 (Inherited: 0x138)
struct USynthKnob : UWidget {
	float Value; // 0x138(0x04)
	float StepSize; // 0x13c(0x04)
	float MouseSpeed; // 0x140(0x04)
	float MouseFineTuneSpeed; // 0x144(0x04)
	char ShowTooltipInfo : 1; // 0x148(0x01)
	char pad_148_1 : 7; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct FText ParameterName; // 0x150(0x18)
	struct FText ParameterUnits; // 0x168(0x18)
	struct FDelegate ValueDelegate; // 0x180(0x10)
	struct FSynthKnobStyle WidgetStyle; // 0x190(0x278)
	bool Locked; // 0x408(0x01)
	bool IsFocusable; // 0x409(0x01)
	char pad_40A[0x6]; // 0x40a(0x06)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x410(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x420(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x430(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x440(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x450(0x10)
	char pad_460[0x10]; // 0x460(0x10)

	void SetValue(float InValue); // Function Synthesis.SynthKnob.SetValue // (NetReliableNetRequest|Exec|Event|NetResponse|Static|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31520640
	void SetStepSize(float InValue); // Function Synthesis.SynthKnob.SetStepSize // (NetRequest|Exec|Event|NetResponse|Static|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31520d00
	void SetLocked(bool InValue); // Function Synthesis.SynthKnob.SetLocked // (Net|Event|NetResponse|Static|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31520d00
	float GetValue(); // Function Synthesis.SynthKnob.GetValue // (Net|NetReliableExec|Native|NetResponse|Static|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31520d00
};

