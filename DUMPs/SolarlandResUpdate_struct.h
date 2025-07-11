// Enum SolarlandResUpdate.EDownloadTaskError
enum class EDownloadTaskError : uint8 {
	ConnectFailed = 0,
	RequestHeadFailed = 1,
	CreateFileFailed = 2,
	DownloadFailed = 3,
	WriteFailed = 4,
	DeleteOldFailed = 5,
	MoveFailed = 6,
	CreateDownloadTaskFail = 7,
	GetPlatformFileFail = 8,
	GetWrongJsonFormat = 9,
	EDownloadTaskError_MAX = 10
};

// Enum SolarlandResUpdate.ELoginAnnouncement
enum class ELoginAnnouncement : uint8 {
	ServerCloseAnnounce = 0,
	UpdateAnnounce = 1,
	Unknown = 2,
	ELoginAnnouncement_MAX = 3
};

// ScriptStruct SolarlandResUpdate.ServerInfo_Dep
// Size: 0x50 (Inherited: 0x00)
struct FServerInfo_Dep {
	struct TArray<struct FGateAddress_Dep> GateList; // 0x00(0x10)
	struct TArray<struct FString> CDNList; // 0x10(0x10)
	struct FString LatestBuildVersion; // 0x20(0x10)
	struct FString SourceBuildVersion; // 0x30(0x10)
	struct FString Name; // 0x40(0x10)
};

// ScriptStruct SolarlandResUpdate.GateAddress_Dep
// Size: 0x20 (Inherited: 0x00)
struct FGateAddress_Dep {
	struct FString GateTCPAddr; // 0x00(0x10)
	struct FString GateUDPAddr; // 0x10(0x10)
};

// ScriptStruct SolarlandResUpdate.PakFileEntry
// Size: 0x38 (Inherited: 0x00)
struct FPakFileEntry {
	struct FString Filename; // 0x00(0x10)
	struct FString Hash; // 0x10(0x10)
	int32_t Order; // 0x20(0x04)
	int32_t FileSize; // 0x24(0x04)
	struct FString Version; // 0x28(0x10)
};

