// Class ReplicationGraph.ReplicationGraph
// Size: 0x500 (Inherited: 0x28)
struct UReplicationGraph : UReplicationDriver {
	struct UNetReplicationGraphConnection* ReplicationConnectionManagerClass; // 0x28(0x08)
	struct UNetDriver* NetDriver; // 0x30(0x08)
	struct TArray<struct UNetReplicationGraphConnection*> Connections; // 0x38(0x10)
	struct TArray<struct UNetReplicationGraphConnection*> PendingConnections; // 0x48(0x10)
	char pad_58[0x40]; // 0x58(0x40)
	struct TArray<struct UReplicationGraphNode*> GlobalGraphNodes; // 0x98(0x10)
	struct TArray<struct UReplicationGraphNode*> PrepareForReplicationNodes; // 0xa8(0x10)
	struct TArray<struct UReplicationGraphNode*> PostReplicateNodes; // 0xb8(0x10)
	char pad_C8[0x3c0]; // 0xc8(0x3c0)
	struct TMap<struct UNetConnection*, struct FClassExtraReplicatedInfo> ConnectionInfos; // 0x488(0x50)
	char pad_4D8[0x28]; // 0x4d8(0x28)
};

// Class ReplicationGraph.BasicReplicationGraph
// Size: 0x530 (Inherited: 0x500)
struct UBasicReplicationGraph : UReplicationGraph {
	struct UReplicationGraphNode_GridSpatialization2D* GridNode; // 0x4f8(0x08)
	struct UReplicationGraphNode_ActorList* AlwaysRelevantNode; // 0x500(0x08)
	struct TArray<struct FConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList; // 0x508(0x10)
	struct TArray<struct AActor*> ActorsWithoutNetConnection; // 0x518(0x10)
};

// Class ReplicationGraph.ReplicationGraphNode
// Size: 0x50 (Inherited: 0x28)
struct UReplicationGraphNode : UObject {
	struct TArray<struct UReplicationGraphNode*> AllChildNodes; // 0x28(0x10)
	char pad_38[0x18]; // 0x38(0x18)
};

// Class ReplicationGraph.ReplicationGraphNode_ActorList
// Size: 0xd0 (Inherited: 0x50)
struct UReplicationGraphNode_ActorList : UReplicationGraphNode {
	char pad_50[0x80]; // 0x50(0x80)
};

// Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
// Size: 0x108 (Inherited: 0x50)
struct UReplicationGraphNode_ActorListFrequencyBuckets : UReplicationGraphNode {
	char pad_50[0xb8]; // 0x50(0xb8)
};

// Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
// Size: 0x100 (Inherited: 0xd0)
struct UReplicationGraphNode_DynamicSpatialFrequency : UReplicationGraphNode_ActorList {
	char pad_D0[0x30]; // 0xd0(0x30)
};

// Class ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
// Size: 0x148 (Inherited: 0xd0)
struct UReplicationGraphNode_ConnectionDormancyNode : UReplicationGraphNode_ActorList {
	char pad_D0[0x78]; // 0xd0(0x78)
};

// Class ReplicationGraph.ReplicationGraphNode_DormancyNode
// Size: 0xe0 (Inherited: 0xd0)
struct UReplicationGraphNode_DormancyNode : UReplicationGraphNode_ActorList {
	char pad_D0[0x10]; // 0xd0(0x10)
};

// Class ReplicationGraph.ReplicationGraphNode_GridCell
// Size: 0x120 (Inherited: 0xd0)
struct UReplicationGraphNode_GridCell : UReplicationGraphNode_ActorList {
	char pad_D0[0x40]; // 0xd0(0x40)
	struct UReplicationGraphNode* DynamicNode; // 0x110(0x08)
	struct UReplicationGraphNode_DormancyNode* DormancyNode; // 0x118(0x08)
};

// Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
// Size: 0x230 (Inherited: 0x50)
struct UReplicationGraphNode_GridSpatialization2D : UReplicationGraphNode {
	char pad_50[0x1e0]; // 0x50(0x1e0)
};

// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
// Size: 0x68 (Inherited: 0x50)
struct UReplicationGraphNode_AlwaysRelevant : UReplicationGraphNode {
	struct UReplicationGraphNode* ChildNode; // 0x50(0x08)
	char pad_58[0x10]; // 0x58(0x10)
};

// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
// Size: 0xf0 (Inherited: 0xd0)
struct UReplicationGraphNode_AlwaysRelevant_ForConnection : UReplicationGraphNode_ActorList {
	char pad_D0[0x10]; // 0xd0(0x10)
	struct TArray<struct FAlwaysRelevantActorInfo> PastRelevantActors; // 0xe0(0x10)
};

// Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
// Size: 0x70 (Inherited: 0x50)
struct UReplicationGraphNode_TearOff_ForConnection : UReplicationGraphNode {
	struct TArray<struct FTearOffActorInfo> TearOffActors; // 0x50(0x10)
	char pad_60[0x10]; // 0x60(0x10)
};

// Class ReplicationGraph.NetReplicationGraphConnection
// Size: 0x2d8 (Inherited: 0x28)
struct UNetReplicationGraphConnection : UReplicationConnectionDriver {
	struct UNetConnection* NetConnection; // 0x28(0x08)
	char pad_30[0x1e0]; // 0x30(0x1e0)
	struct AReplicationGraphDebugActor* DebugActor; // 0x210(0x08)
	char pad_218[0x10]; // 0x218(0x10)
	struct TArray<struct FLastLocationGatherInfo> LastGatherLocations; // 0x228(0x10)
	char pad_238[0x8]; // 0x238(0x08)
	struct TArray<struct UReplicationGraphNode*> ConnectionGraphNodes; // 0x240(0x10)
	struct UReplicationGraphNode_TearOff_ForConnection* TearOffNode; // 0x250(0x08)
	char pad_258[0x80]; // 0x258(0x80)
};

// Class ReplicationGraph.ReplicationGraphDebugActor
// Size: 0x238 (Inherited: 0x228)
struct AReplicationGraphDebugActor : AActor {
	struct UReplicationGraph* ReplicationGraph; // 0x228(0x08)
	struct UNetReplicationGraphConnection* ConnectionManager; // 0x230(0x08)

	void ServerStopDebugging(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging // (NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|Delegate|NetServer|HasOutParms|HasDefaults|NetClient|DLLImport|BlueprintEvent|NetValidate) // @ game+0xffff822f3144d300
	void ServerStartDebugging(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging // (NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|Delegate|NetServer|HasOutParms|HasDefaults|NetClient|DLLImport|BlueprintEvent|NetValidate) // @ game+0xffff822f3144d540
	void ServerSetPeriodFrameForClass(struct UObject* Class, int32_t PeriodFrame); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass // (Net|NetRequest|Exec|Native|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|Delegate|NetServer|HasOutParms|HasDefaults|NetClient|DLLImport|BlueprintEvent|NetValidate) // @ game+0xffff822f3144d540
	void ServerSetCullDistanceForClass(struct UObject* Class, float CullDistance); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass // (Net|Exec|Native|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|Delegate|NetServer|HasOutParms|HasDefaults|NetClient|DLLImport|BlueprintEvent|NetValidate) // @ game+0xffff822f3144d540
	void ServerSetConditionalActorBreakpoint(struct AActor* Actor); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint // (Net|NetReliableNetRequest|Native|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|Delegate|NetServer|HasOutParms|HasDefaults|NetClient|DLLImport|BlueprintEvent|NetValidate) // @ game+0xffff822f3144d540
	void ServerPrintCullDistances(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances // (Net|NetReliableNetRequest|Native|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|Delegate|NetServer|HasOutParms|HasDefaults|NetClient|DLLImport|BlueprintEvent|NetValidate) // @ game+0xffff822f3144d540
	void ServerPrintAllActorInfo(struct FString str); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo // (NetRequest|Native|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|Delegate|NetServer|HasOutParms|HasDefaults|NetClient|DLLImport|BlueprintEvent|NetValidate) // @ game+0xffff822f3144d540
	void ServerCellInfo(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo // (NetRequest|Native|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|Delegate|NetServer|HasOutParms|HasDefaults|NetClient|DLLImport|BlueprintEvent|NetValidate) // @ game+0xffff822f3144d540
	void ClientCellInfo(struct FVector CellLocation, struct FVector CellExtent, struct TArray<struct AActor*> Actors); // Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo // (Net|NetReliableNetRequest|Exec|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|Delegate|NetServer|HasOutParms|HasDefaults|NetClient|DLLImport|BlueprintEvent|NetValidate) // @ game+0xffff822f3144d540
};

