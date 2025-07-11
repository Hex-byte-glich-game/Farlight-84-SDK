// Class UIParticleSystem.ParticleSystemWidget
// Size: 0x168 (Inherited: 0x138)
struct UParticleSystemWidget : UWidget {
	struct UParticleSystem* ParticleSystemTemplate; // 0x138(0x08)
	bool bReactivate; // 0x140(0x01)
	bool bActiveSysWhenInit; // 0x141(0x01)
	char pad_142[0x6]; // 0x142(0x06)
	struct UParticleSystemComponent* WorldParticleComponent; // 0x148(0x08)
	struct AActor* WorldParticleActor; // 0x150(0x08)
	char pad_158[0x10]; // 0x158(0x10)

	void SetReactivate(bool bActivateAndReset); // Function UIParticleSystem.ParticleSystemWidget.SetReactivate // (Static|NetMulticast|Public|Private|Protected|Delegate|NetServer|HasOutParms|HasDefaults|NetClient|DLLImport|BlueprintEvent|NetValidate) // @ game+0xffff822f3144c580
	void ActivateParticles(bool bActive, bool bReset); // Function UIParticleSystem.ParticleSystemWidget.ActivateParticles // (NetRequest|Exec|Native|Event|NetResponse|NetMulticast|Public|Private|Protected|Delegate|NetServer|HasOutParms|HasDefaults|NetClient|DLLImport|BlueprintEvent|NetValidate) // @ game+0xffff822f3144d0c0
};

// Class UIParticleSystem.UIParticleComponent
// Size: 0x7b0 (Inherited: 0x7b0)
struct UUIParticleComponent : UParticleSystemComponent {
};

// Class UIParticleSystem.UIParticleActor
// Size: 0x228 (Inherited: 0x228)
struct AUIParticleActor : AActor {
};

