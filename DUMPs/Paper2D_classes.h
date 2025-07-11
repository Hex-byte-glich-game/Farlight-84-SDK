// Class Paper2D.MaterialExpressionSpriteTextureSampler
// Size: 0x110 (Inherited: 0xf0)
struct UMaterialExpressionSpriteTextureSampler : UMaterialExpressionTextureSampleParameter2D {
	bool bSampleAdditionalTextures; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	int32_t AdditionalSlotIndex; // 0xf4(0x04)
	struct FText SlotDisplayName; // 0xf8(0x18)
};

// Class Paper2D.PaperCharacter
// Size: 0x4d0 (Inherited: 0x4d0)
struct APaperCharacter : ACharacter {
	struct UPaperFlipbookComponent* Sprite; // 0x4c8(0x08)
};

// Class Paper2D.PaperFlipbook
// Size: 0x50 (Inherited: 0x28)
struct UPaperFlipbook : UObject {
	float FramesPerSecond; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FPaperFlipbookKeyFrame> KeyFrames; // 0x30(0x10)
	struct UMaterialInterface* DefaultMaterial; // 0x40(0x08)
	enum class EFlipbookCollisionMode CollisionSource; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)

	bool IsValidKeyFrameIndex(int32_t Index); // Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex // (Native|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9ac0
	float GetTotalDuration(); // Function Paper2D.PaperFlipbook.GetTotalDuration // (Net|NetRequest|Exec|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9f40
	struct UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds); // Function Paper2D.PaperFlipbook.GetSpriteAtTime // (Net|NetRequest|Exec|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9f40
	struct UPaperSprite* GetSpriteAtFrame(int32_t FrameIndex); // Function Paper2D.PaperFlipbook.GetSpriteAtFrame // (NetReliableExec|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9f40
	int32_t GetNumKeyFrames(); // Function Paper2D.PaperFlipbook.GetNumKeyFrames // (Exec|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9f40
	int32_t GetNumFrames(); // Function Paper2D.PaperFlipbook.GetNumFrames // (Net|NetReliableNetRequest|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9f40
	int32_t GetKeyFrameIndexAtTime(float Time, bool bClampToEnds); // Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime // (NetRequest|Exec|Native|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9f40
};

// Class Paper2D.PaperFlipbookActor
// Size: 0x230 (Inherited: 0x228)
struct APaperFlipbookActor : AActor {
	struct UPaperFlipbookComponent* RenderComponent; // 0x228(0x08)
};

// Class Paper2D.PaperFlipbookComponent
// Size: 0x5c0 (Inherited: 0x580)
struct UPaperFlipbookComponent : UMeshComponent {
	struct UPaperFlipbook* SourceFlipbook; // 0x578(0x08)
	struct UMaterialInterface* Material; // 0x580(0x08)
	float PlayRate; // 0x588(0x04)
	char bLooping : 1; // 0x58c(0x01)
	char bReversePlayback : 1; // 0x58c(0x01)
	char bPlaying : 1; // 0x58c(0x01)
	float AccumulatedTime; // 0x590(0x04)
	int32_t CachedFrameIndex; // 0x594(0x04)
	struct FLinearColor SpriteColor; // 0x598(0x10)
	struct UBodySetup* CachedBodySetup; // 0x5a8(0x08)
	struct FMulticastInlineDelegate OnFinishedPlaying; // 0x5b0(0x10)

	void Stop(); // Function Paper2D.PaperFlipbookComponent.Stop // (Exec|Native|Event|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9640
	void SetSpriteColor(struct FLinearColor NewColor); // Function Paper2D.PaperFlipbookComponent.SetSpriteColor // (Exec|Event|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9ac0
	void SetPlayRate(float NewRate); // Function Paper2D.PaperFlipbookComponent.SetPlayRate // (Event|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9ac0
	void SetPlaybackPositionInFrames(int32_t NewFramePosition, bool bFireEvents); // Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames // (Net|NetRequest|Event|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9ac0
	void SetPlaybackPosition(float NewPosition, bool bFireEvents); // Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition // (NetReliableEvent|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9ac0
	void SetNewTime(float NewTime); // Function Paper2D.PaperFlipbookComponent.SetNewTime // (NetReliableNetRequest|Exec|Native|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9ac0
	void SetLooping(bool bNewLooping); // Function Paper2D.PaperFlipbookComponent.SetLooping // (NetRequest|Exec|Native|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9ac0
	bool SetFlipbook(struct UPaperFlipbook* NewFlipbook); // Function Paper2D.PaperFlipbookComponent.SetFlipbook // (NetReliableNetRequest|Exec|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9ac0
	void ReverseFromEnd(); // Function Paper2D.PaperFlipbookComponent.ReverseFromEnd // (NetReliableExec|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9ac0
	void Reverse(); // Function Paper2D.PaperFlipbookComponent.Reverse // (Net|Exec|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9ac0
	void PlayFromStart(); // Function Paper2D.PaperFlipbookComponent.PlayFromStart // (Net|NetReliableNetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9ac0
	void Play(); // Function Paper2D.PaperFlipbookComponent.Play // (NetReliableNetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9ac0
	void OnRep_SourceFlipbook(struct UPaperFlipbook* OldFlipbook); // Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook // (NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9ac0
	bool IsReversing(); // Function Paper2D.PaperFlipbookComponent.IsReversing // (Net|NetReliableNetRequest|Exec|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9ac0
	bool IsPlaying(); // Function Paper2D.PaperFlipbookComponent.IsPlaying // (NetReliableNetRequest|Exec|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9ac0
	bool IsLooping(); // Function Paper2D.PaperFlipbookComponent.IsLooping // (Net|NetRequest|Exec|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9ac0
	float GetPlayRate(); // Function Paper2D.PaperFlipbookComponent.GetPlayRate // (Exec|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9ac0
	int32_t GetPlaybackPositionInFrames(); // Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames // (NetReliableExec|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9ac0
	float GetPlaybackPosition(); // Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition // (Net|Exec|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9ac0
	int32_t GetFlipbookLengthInFrames(); // Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames // (Net|NetRequest|Native|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9ac0
	float GetFlipbookLength(); // Function Paper2D.PaperFlipbookComponent.GetFlipbookLength // (NetRequest|Native|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9ac0
	float GetFlipbookFramerate(); // Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate // (NetRequest|Native|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9ac0
	struct UPaperFlipbook* GetFlipbook(); // Function Paper2D.PaperFlipbookComponent.GetFlipbook // (Net|NetReliableNative|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9ac0
};

// Class Paper2D.PaperGroupedSpriteActor
// Size: 0x230 (Inherited: 0x228)
struct APaperGroupedSpriteActor : AActor {
	struct UPaperGroupedSpriteComponent* RenderComponent; // 0x228(0x08)
};

// Class Paper2D.PaperGroupedSpriteComponent
// Size: 0x5b0 (Inherited: 0x580)
struct UPaperGroupedSpriteComponent : UMeshComponent {
	struct TArray<struct UMaterialInterface*> InstanceMaterials; // 0x578(0x10)
	struct TArray<struct FSpriteInstanceData> PerInstanceSpriteData; // 0x588(0x10)
	char pad_5A0[0x10]; // 0x5a0(0x10)

	bool UpdateInstanceTransform(int32_t InstanceIndex, struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport); // Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform // (Net|NetRequest|Exec|Native|Event|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314cf4c0
	bool UpdateInstanceColor(int32_t InstanceIndex, struct FLinearColor NewInstanceColor, bool bMarkRenderStateDirty); // Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor // (Net|Exec|Native|Event|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9640
	void SortInstancesAlongAxis(struct FVector WorldSpaceSortAxis); // Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis // (NetReliableNetRequest|Native|Event|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9640
	bool RemoveInstance(int32_t InstanceIndex); // Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance // (NetRequest|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9640
	bool GetInstanceTransform(int32_t InstanceIndex, struct FTransform& OutInstanceTransform, bool bWorldSpace); // Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform // (Net|NetReliableNetRequest|Native|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9640
	int32_t GetInstanceCount(); // Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount // (NetReliableNetRequest|Native|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9640
	void ClearInstances(); // Function Paper2D.PaperGroupedSpriteComponent.ClearInstances // (Event|NetResponse|NetMulticast|UbergraphFunction|Public|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9640
	int32_t AddInstance(struct FTransform& Transform, struct UPaperSprite* Sprite, bool bWorldSpace, struct FLinearColor Color); // Function Paper2D.PaperGroupedSpriteComponent.AddInstance // (NetRequest|Exec|Native|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314c9640
};

// Class Paper2D.PaperRuntimeSettings
// Size: 0x30 (Inherited: 0x28)
struct UPaperRuntimeSettings : UObject {
	bool bEnableSpriteAtlasGroups; // 0x28(0x01)
	bool bEnableTerrainSplineEditing; // 0x29(0x01)
	bool bResizeSpriteDataToMatchTextures; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// Class Paper2D.PaperSprite
// Size: 0xa8 (Inherited: 0x28)
struct UPaperSprite : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct TArray<struct UTexture*> AdditionalSourceTextures; // 0x38(0x10)
	struct FVector2D BakedSourceUV; // 0x48(0x08)
	struct FVector2D BakedSourceDimension; // 0x50(0x08)
	struct UTexture2D* BakedSourceTexture; // 0x58(0x08)
	struct UMaterialInterface* DefaultMaterial; // 0x60(0x08)
	struct UMaterialInterface* AlternateMaterial; // 0x68(0x08)
	struct TArray<struct FPaperSpriteSocket> Sockets; // 0x70(0x10)
	enum class ESpriteCollisionMode SpriteCollisionDomain; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float PixelsPerUnrealUnit; // 0x84(0x04)
	struct UBodySetup* BodySetup; // 0x88(0x08)
	int32_t AlternateMaterialSplitIndex; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct TArray<struct FVector4> BakedRenderData; // 0x98(0x10)
};

// Class Paper2D.PaperSpriteActor
// Size: 0x230 (Inherited: 0x228)
struct APaperSpriteActor : AActor {
	struct UPaperSpriteComponent* RenderComponent; // 0x228(0x08)
};

// Class Paper2D.PaperSpriteAtlas
// Size: 0x28 (Inherited: 0x28)
struct UPaperSpriteAtlas : UObject {
};

// Class Paper2D.PaperSpriteBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPaperSpriteBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FSlateBrush MakeBrushFromSprite(struct UPaperSprite* Sprite, int32_t Width, int32_t Height); // Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite // (NetReliableNative|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314cf280
};

// Class Paper2D.PaperSpriteComponent
// Size: 0x5a0 (Inherited: 0x580)
struct UPaperSpriteComponent : UMeshComponent {
	struct UPaperSprite* SourceSprite; // 0x578(0x08)
	struct UMaterialInterface* MaterialOverride; // 0x580(0x08)
	struct FLinearColor SpriteColor; // 0x588(0x10)

	void SetSpriteColor(struct FLinearColor NewColor); // Function Paper2D.PaperSpriteComponent.SetSpriteColor // (NetReliableExec|Event|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314cee00
	bool SetSprite(struct UPaperSprite* NewSprite); // Function Paper2D.PaperSpriteComponent.SetSprite // (NetReliableNetRequest|Exec|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314cf280
	struct UPaperSprite* GetSprite(); // Function Paper2D.PaperSpriteComponent.GetSprite // (Net|NetReliableNative|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314cf280
};

// Class Paper2D.PaperTerrainActor
// Size: 0x240 (Inherited: 0x228)
struct APaperTerrainActor : AActor {
	struct USceneComponent* DummyRoot; // 0x228(0x08)
	struct UPaperTerrainSplineComponent* SplineComponent; // 0x230(0x08)
	struct UPaperTerrainComponent* RenderComponent; // 0x238(0x08)
};

// Class Paper2D.PaperTerrainComponent
// Size: 0x5a0 (Inherited: 0x540)
struct UPaperTerrainComponent : UPrimitiveComponent {
	struct UPaperTerrainMaterial* TerrainMaterial; // 0x540(0x08)
	bool bClosedSpline; // 0x548(0x01)
	bool bFilledSpline; // 0x549(0x01)
	char pad_54A[0x6]; // 0x54a(0x06)
	struct UPaperTerrainSplineComponent* AssociatedSpline; // 0x550(0x08)
	int32_t RandomSeed; // 0x558(0x04)
	float SegmentOverlapAmount; // 0x55c(0x04)
	struct FLinearColor TerrainColor; // 0x560(0x10)
	int32_t ReparamStepsPerSegment; // 0x570(0x04)
	enum class ESpriteCollisionMode SpriteCollisionDomain; // 0x574(0x01)
	char pad_575[0x3]; // 0x575(0x03)
	float CollisionThickness; // 0x578(0x04)
	char pad_57C[0x4]; // 0x57c(0x04)
	struct UBodySetup* CachedBodySetup; // 0x580(0x08)
	char pad_588[0x18]; // 0x588(0x18)

	void SetTerrainColor(struct FLinearColor NewColor); // Function Paper2D.PaperTerrainComponent.SetTerrainColor // (NetRequest|Exec|Event|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ce740
};

// Class Paper2D.PaperTerrainMaterial
// Size: 0x48 (Inherited: 0x30)
struct UPaperTerrainMaterial : UDataAsset {
	struct TArray<struct FPaperTerrainMaterialRule> Rules; // 0x30(0x10)
	struct UPaperSprite* InteriorFill; // 0x40(0x08)
};

// Class Paper2D.PaperTerrainSplineComponent
// Size: 0x640 (Inherited: 0x630)
struct UPaperTerrainSplineComponent : USplineComponent {
	char pad_630[0x10]; // 0x630(0x10)
};

// Class Paper2D.PaperTileLayer
// Size: 0x98 (Inherited: 0x28)
struct UPaperTileLayer : UObject {
	struct FText LayerName; // 0x28(0x18)
	int32_t LayerWidth; // 0x40(0x04)
	int32_t LayerHeight; // 0x44(0x04)
	char bHiddenInGame : 1; // 0x48(0x01)
	char bLayerCollides : 1; // 0x48(0x01)
	char bOverrideCollisionThickness : 1; // 0x48(0x01)
	char bOverrideCollisionOffset : 1; // 0x48(0x01)
	char pad_48_4 : 4; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float CollisionThicknessOverride; // 0x4c(0x04)
	float CollisionOffsetOverride; // 0x50(0x04)
	struct FLinearColor LayerColor; // 0x54(0x10)
	int32_t AllocatedWidth; // 0x64(0x04)
	int32_t AllocatedHeight; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct FPaperTileInfo> AllocatedCells; // 0x70(0x10)
	struct UPaperTileSet* TileSet; // 0x80(0x08)
	struct TArray<int32_t> AllocatedGrid; // 0x88(0x10)
};

// Class Paper2D.PaperTileMap
// Size: 0xa8 (Inherited: 0x28)
struct UPaperTileMap : UObject {
	int32_t MapWidth; // 0x28(0x04)
	int32_t MapHeight; // 0x2c(0x04)
	int32_t TileWidth; // 0x30(0x04)
	int32_t TileHeight; // 0x34(0x04)
	float PixelsPerUnrealUnit; // 0x38(0x04)
	float SeparationPerTileX; // 0x3c(0x04)
	float SeparationPerTileY; // 0x40(0x04)
	float SeparationPerLayer; // 0x44(0x04)
	struct TSoftObjectPtr<UPaperTileSet> SelectedTileSet; // 0x48(0x28)
	struct UMaterialInterface* Material; // 0x70(0x08)
	struct TArray<struct UPaperTileLayer*> TileLayers; // 0x78(0x10)
	float CollisionThickness; // 0x88(0x04)
	enum class ESpriteCollisionMode SpriteCollisionDomain; // 0x8c(0x01)
	enum class ETileMapProjectionMode ProjectionMode; // 0x8d(0x01)
	char pad_8E[0x2]; // 0x8e(0x02)
	int32_t HexSideLength; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct UBodySetup* BodySetup; // 0x98(0x08)
	int32_t LayerNameIndex; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Paper2D.PaperTileMapActor
// Size: 0x230 (Inherited: 0x228)
struct APaperTileMapActor : AActor {
	struct UPaperTileMapComponent* RenderComponent; // 0x228(0x08)
};

// Class Paper2D.PaperTileMapComponent
// Size: 0x5d0 (Inherited: 0x580)
struct UPaperTileMapComponent : UMeshComponent {
	int32_t MapWidth; // 0x578(0x04)
	int32_t MapHeight; // 0x57c(0x04)
	int32_t TileWidth; // 0x580(0x04)
	int32_t TileHeight; // 0x584(0x04)
	struct UPaperTileSet* DefaultLayerTileSet; // 0x588(0x08)
	struct UMaterialInterface* Material; // 0x590(0x08)
	struct TArray<struct UPaperTileLayer*> TileLayers; // 0x598(0x10)
	struct FLinearColor TileMapColor; // 0x5a8(0x10)
	int32_t UseSingleLayerIndex; // 0x5b8(0x04)
	bool bUseSingleLayer; // 0x5bc(0x01)
	struct UPaperTileMap* TileMap; // 0x5c0(0x08)
	char pad_5CD[0x3]; // 0x5cd(0x03)

	void SetTileMapColor(struct FLinearColor NewColor); // Function Paper2D.PaperTileMapComponent.SetTileMapColor // (NetRequest|Native|Event|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d4540
	bool SetTileMap(struct UPaperTileMap* NewTileMap); // Function Paper2D.PaperTileMapComponent.SetTileMap // (NetReliableNetRequest|Exec|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d49c0
	void SetTile(int32_t X, int32_t Y, int32_t Layer, struct FPaperTileInfo NewValue); // Function Paper2D.PaperTileMapComponent.SetTile // (NetReliableNetRequest|Exec|Event|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d49c0
	void SetLayerColor(struct FLinearColor NewColor, int32_t Layer); // Function Paper2D.PaperTileMapComponent.SetLayerColor // (Net|Exec|Native|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d49c0
	void SetLayerCollision(int32_t Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision); // Function Paper2D.PaperTileMapComponent.SetLayerCollision // (Native|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d49c0
	void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision); // Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness // (NetReliableExec|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d49c0
	void ResizeMap(int32_t NewWidthInTiles, int32_t NewHeightInTiles); // Function Paper2D.PaperTileMapComponent.ResizeMap // (NetReliableNetRequest|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d49c0
	void RebuildCollision(); // Function Paper2D.PaperTileMapComponent.RebuildCollision // (Net|NetReliableNetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d49c0
	bool OwnsTileMap(); // Function Paper2D.PaperTileMapComponent.OwnsTileMap // (NetReliableNetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d49c0
	void MakeTileMapEditable(); // Function Paper2D.PaperTileMapComponent.MakeTileMapEditable // (Net|NetReliableNetRequest|Exec|Native|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d49c0
	void GetTilePolygon(int32_t TileX, int32_t TileY, struct TArray<struct FVector>& Points, int32_t LayerIndex, bool bWorldSpace); // Function Paper2D.PaperTileMapComponent.GetTilePolygon // (Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d49c0
	struct FLinearColor GetTileMapColor(); // Function Paper2D.PaperTileMapComponent.GetTileMapColor // (Net|NetReliableNetRequest|Exec|Native|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d49c0
	struct FVector GetTileCornerPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace); // Function Paper2D.PaperTileMapComponent.GetTileCornerPosition // (NetReliableExec|Native|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d49c0
	struct FVector GetTileCenterPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace); // Function Paper2D.PaperTileMapComponent.GetTileCenterPosition // (NetRequest|Native|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d49c0
	struct FPaperTileInfo GetTile(int32_t X, int32_t Y, int32_t Layer); // Function Paper2D.PaperTileMapComponent.GetTile // (Native|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d49c0
	void GetMapSize(int32_t& MapWidth, int32_t& MapHeight, int32_t& NumLayers); // Function Paper2D.PaperTileMapComponent.GetMapSize // (NetReliableStatic|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d49c0
	struct FLinearColor GetLayerColor(int32_t Layer); // Function Paper2D.PaperTileMapComponent.GetLayerColor // (Net|NetReliableNetRequest|Exec|Native|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d49c0
	void CreateNewTileMap(int32_t MapWidth, int32_t MapHeight, int32_t TileWidth, int32_t TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer); // Function Paper2D.PaperTileMapComponent.CreateNewTileMap // (NetRequest|Exec|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d49c0
	struct UPaperTileLayer* AddNewLayer(); // Function Paper2D.PaperTileMapComponent.AddNewLayer // (Net|NetReliableEvent|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d49c0
};

// Class Paper2D.PaperTileSet
// Size: 0xa8 (Inherited: 0x28)
struct UPaperTileSet : UObject {
	struct FIntPoint TileSize; // 0x28(0x08)
	struct UTexture2D* TileSheet; // 0x30(0x08)
	struct TArray<struct UTexture*> AdditionalSourceTextures; // 0x38(0x10)
	struct FIntMargin BorderMargin; // 0x48(0x10)
	struct FIntPoint PerTileSpacing; // 0x58(0x08)
	struct FIntPoint DrawingOffset; // 0x60(0x08)
	int32_t WidthInTiles; // 0x68(0x04)
	int32_t HeightInTiles; // 0x6c(0x04)
	int32_t AllocatedWidth; // 0x70(0x04)
	int32_t AllocatedHeight; // 0x74(0x04)
	struct TArray<struct FPaperTileMetadata> PerTileData; // 0x78(0x10)
	struct TArray<struct FPaperTileSetTerrain> Terrains; // 0x88(0x10)
	int32_t TileWidth; // 0x98(0x04)
	int32_t TileHeight; // 0x9c(0x04)
	int32_t Margin; // 0xa0(0x04)
	int32_t Spacing; // 0xa4(0x04)
};

// Class Paper2D.TileMapBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTileMapBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FPaperTileInfo MakeTile(int32_t TileIndex, struct UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD); // Function Paper2D.TileMapBlueprintLibrary.MakeTile // (Exec|Native|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32811900
	struct FName GetTileUserData(struct FPaperTileInfo Tile); // Function Paper2D.TileMapBlueprintLibrary.GetTileUserData // (NetReliableExec|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d4540
	struct FTransform GetTileTransform(struct FPaperTileInfo Tile); // Function Paper2D.TileMapBlueprintLibrary.GetTileTransform // (Net|NetReliableNetRequest|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d4540
	void BreakTile(struct FPaperTileInfo Tile, int32_t& TileIndex, struct UPaperTileSet*& TileSet, bool& bFlipH, bool& bFlipV, bool& bFlipD); // Function Paper2D.TileMapBlueprintLibrary.BreakTile // (NetRequest|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Delegate|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314d4540
};

