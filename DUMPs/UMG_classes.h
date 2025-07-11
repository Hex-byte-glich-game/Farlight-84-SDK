// Class UMG.Visual
// Size: 0x28 (Inherited: 0x28)
struct UVisual : UObject {
};

// Class UMG.Widget
// Size: 0x138 (Inherited: 0x28)
struct UWidget : UVisual {
	struct UPanelSlot* Slot; // 0x28(0x08)
	struct FDelegate bIsEnabledDelegate; // 0x30(0x10)
	struct FText ToolTipText; // 0x40(0x18)
	struct FDelegate ToolTipTextDelegate; // 0x58(0x10)
	struct UWidget* ToolTipWidget; // 0x68(0x08)
	struct FDelegate ToolTipWidgetDelegate; // 0x70(0x10)
	struct FDelegate VisibilityDelegate; // 0x80(0x10)
	struct FWidgetTransform RenderTransform; // 0x90(0x1c)
	struct FVector2D RenderTransformPivot; // 0xac(0x08)
	char bIsVariable : 1; // 0xb4(0x01)
	char bCreatedByConstructionScript : 1; // 0xb4(0x01)
	char bIsEnabled : 1; // 0xb4(0x01)
	char bOverride_Cursor : 1; // 0xb4(0x01)
	char pad_B4_4 : 4; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	struct USlateAccessibleWidgetData* AccessibleWidgetData; // 0xb8(0x08)
	char bIsVolatile : 1; // 0xc0(0x01)
	char pad_C0_1 : 7; // 0xc0(0x01)
	enum class EMouseCursor Cursor; // 0xc1(0x01)
	enum class EWidgetClipping Clipping; // 0xc2(0x01)
	enum class ESlateVisibility Visibility; // 0xc3(0x01)
	float RenderOpacity; // 0xc4(0x04)
	enum class ESlateDetailMode DetailMode; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	int32_t WidthDivisor; // 0xcc(0x04)
	int32_t HeightDivisor; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct UWidgetNavigation* Navigation; // 0xd8(0x08)
	enum class EFlowDirectionPreference FlowDirectionPreference; // 0xe0(0x01)
	char pad_E1[0x47]; // 0xe1(0x47)
	struct TArray<struct UPropertyBinding*> NativeBindings; // 0x128(0x10)

	void SetWidthHeightDivisors(int32_t InWidthDivisor, int32_t InHeightDivisor); // Function UMG.Widget.SetWidthHeightDivisors // (NetReliableExec|Native|NetResponse|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32813730
	void SetVisibility(enum class ESlateVisibility InVisibility); // Function UMG.Widget.SetVisibility // (Exec|Native|NetResponse|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	void SetUserFocus(struct APlayerController* PlayerController); // Function UMG.Widget.SetUserFocus // (Net|NetReliableNetRequest|Exec|NetResponse|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	void SetToolTipText(struct FText& InToolTipText); // Function UMG.Widget.SetToolTipText // (NetRequest|Exec|NetResponse|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	void SetToolTip(struct UWidget* Widget); // Function UMG.Widget.SetToolTip // (NetReliableExec|NetResponse|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	void SetRenderTranslation(struct FVector2D Translation); // Function UMG.Widget.SetRenderTranslation // (NetReliableNetRequest|NetResponse|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	void SetRenderTransformPivot(struct FVector2D Pivot); // Function UMG.Widget.SetRenderTransformPivot // (NetRequest|NetResponse|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	void SetRenderTransformAngle(float Angle); // Function UMG.Widget.SetRenderTransformAngle // (NetReliableNetResponse|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	void SetRenderTransform(struct FWidgetTransform InTransform); // Function UMG.Widget.SetRenderTransform // (NetReliableNetRequest|Exec|Native|Event|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810460
	void SetRenderShear(struct FVector2D Shear); // Function UMG.Widget.SetRenderShear // (NetRequest|Exec|Native|Event|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	void SetRenderScale(struct FVector2D Scale); // Function UMG.Widget.SetRenderScale // (NetReliableExec|Native|Event|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	void SetRenderOpacity(float InOpacity); // Function UMG.Widget.SetRenderOpacity // (Exec|Native|Event|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	void SetNavigationRuleExplicit(enum class EUINavigation Direction, struct UWidget* InWidget); // Function UMG.Widget.SetNavigationRuleExplicit // (Net|NetReliableNative|Event|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	void SetNavigationRuleCustomBoundary(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustomBoundary // (Net|NetReliableNetRequest|Exec|Event|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	void SetNavigationRuleCustom(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustom // (NetRequest|Exec|Event|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	void SetNavigationRuleBase(enum class EUINavigation Direction, enum class EUINavigationRule Rule); // Function UMG.Widget.SetNavigationRuleBase // (Net|Exec|Event|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	void SetNavigationRule(enum class EUINavigation Direction, enum class EUINavigationRule Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetNavigationRule // (Net|NetRequest|Event|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus // (NetRequest|Event|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	void SetIsEnabled(bool bInIsEnabled); // Function UMG.Widget.SetIsEnabled // (NetReliableEvent|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	void SetFocus(); // Function UMG.Widget.SetFocus // (Net|NetReliableNetRequest|Exec|Native|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	void SetDetailMode(enum class ESlateDetailMode InDetailMode); // Function UMG.Widget.SetDetailMode // (Net|NetReliableExec|Native|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32813730
	void SetCursor(enum class EMouseCursor InCursor); // Function UMG.Widget.SetCursor // (Net|Exec|Native|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	void SetClipping(enum class EWidgetClipping InClipping); // Function UMG.Widget.SetClipping // (Net|NetReliableNetRequest|Native|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	void SetAllNavigationRules(enum class EUINavigationRule Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetAllNavigationRules // (NetRequest|Native|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32813730
	void ResetCursor(); // Function UMG.Widget.ResetCursor // (NetRequest|Native|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent // (NetReliableNetRequest|Exec|Event|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|Delegate|NetServer|HasOutParms|HasDefaults|NetClient|DLLImport|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	struct FEventReply OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	struct FEventReply OnPointerEvent__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810460
	bool IsVisible(); // Function UMG.Widget.IsVisible // (Net|NetReliableNative|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	bool IsHovered(); // Function UMG.Widget.IsHovered // (Net|NetRequest|Exec|Native|Event|Private|Protected|HasOutParms|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility // (Net|NetReliableNative|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	bool HasUserFocusedDescendants(struct APlayerController* PlayerController); // Function UMG.Widget.HasUserFocusedDescendants // (Native|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	bool HasUserFocus(struct APlayerController* PlayerController); // Function UMG.Widget.HasUserFocus // (NetReliableNetRequest|Exec|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex); // Function UMG.Widget.HasMouseCaptureByUser // (Net|NetReliableExec|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	bool HasMouseCapture(); // Function UMG.Widget.HasMouseCapture // (NetReliableExec|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	bool HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus // (NetReliableExec|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	bool HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants // (Net|Exec|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	bool HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus // (Exec|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	struct UWidget* GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	enum class ESlateVisibility GetVisibility(); // Function UMG.Widget.GetVisibility // (Net|NetReliableNetRequest|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	struct FGeometry GetTickSpaceGeometry(); // Function UMG.Widget.GetTickSpaceGeometry // (Net|NetReliableStatic|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	struct FText GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	enum class ESlateVisibility GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810460
	struct FSlateColor GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	struct FSlateBrush GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32813730
	float GetRenderTransformAngle(); // Function UMG.Widget.GetRenderTransformAngle // (Net|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	float GetRenderOpacity(); // Function UMG.Widget.GetRenderOpacity // (Net|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	struct UPanelWidget* GetParent(); // Function UMG.Widget.GetParent // (Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	struct FGeometry GetPaintSpaceGeometry(); // Function UMG.Widget.GetPaintSpaceGeometry // (Net|NetReliableNetRequest|Exec|Native|Event|NetResponse|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	struct APlayerController* GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer // (NetReliableNetRequest|Exec|Native|Event|NetResponse|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	struct ULocalPlayer* GetOwningLocalPlayer(); // Function UMG.Widget.GetOwningLocalPlayer // (Net|NetRequest|Exec|Native|Event|NetResponse|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	enum class EMouseCursor GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810000
	struct FLinearColor GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	bool GetIsEnabled(); // Function UMG.Widget.GetIsEnabled // (Net|NetRequest|Exec|Native|Event|NetResponse|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	int32_t GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	struct UGameInstance* GetGameInstance(); // Function UMG.Widget.GetGameInstance // (NetRequest|Exec|Native|Event|NetResponse|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	float GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	struct FVector2D GetDesiredSize(); // Function UMG.Widget.GetDesiredSize // (NetReliableExec|Native|Event|NetResponse|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	enum class EWidgetClipping GetClipping(); // Function UMG.Widget.GetClipping // (Net|Exec|Native|Event|NetResponse|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32813730
	enum class ECheckBoxState GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32813730
	struct FGeometry GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry // (Exec|Native|Event|NetResponse|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32813730
	bool GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	struct UWidget* GenerateWidgetForString__DelegateSignature(struct FString Item); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	struct UWidget* GenerateWidgetForObject__DelegateSignature(struct UObject* Item); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	void ForceVolatile(bool bForce); // Function UMG.Widget.ForceVolatile // (NetReliableNetRequest|Native|Event|NetResponse|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass // (NetReliableNetRequest|Native|Event|NetResponse|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144ce80
};

// Class UMG.UserWidget
// Size: 0x260 (Inherited: 0x138)
struct UUserWidget : UWidget {
	char pad_138[0x8]; // 0x138(0x08)
	struct FLinearColor ColorAndOpacity; // 0x140(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x150(0x10)
	struct FSlateColor ForegroundColor; // 0x160(0x28)
	struct FDelegate ForegroundColorDelegate; // 0x188(0x10)
	struct FMargin Padding; // 0x198(0x10)
	struct TArray<struct UUMGSequencePlayer*> ActiveSequencePlayers; // 0x1a8(0x10)
	struct TArray<struct UUMGSequencePlayer*> StoppedSequencePlayers; // 0x1b8(0x10)
	struct TArray<struct FNamedSlotBinding> NamedSlotBindings; // 0x1c8(0x10)
	struct UWidgetTree* WidgetTree; // 0x1d8(0x08)
	int32_t Priority; // 0x1e0(0x04)
	char bSupportsKeyboardFocus : 1; // 0x1e4(0x01)
	char bIsFocusable : 1; // 0x1e4(0x01)
	char bStopAction : 1; // 0x1e4(0x01)
	char bHasScriptImplementedTick : 1; // 0x1e4(0x01)
	char bHasScriptImplementedPaint : 1; // 0x1e4(0x01)
	char pad_1E4_5 : 3; // 0x1e4(0x01)
	char pad_1E5[0xb]; // 0x1e5(0x0b)
	enum class EWidgetTickFrequency TickFrequency; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct UInputComponent* InputComponent; // 0x1f8(0x08)
	struct TArray<struct FAnimationEventBinding> AnimationCallbacks; // 0x200(0x10)
	char pad_210[0x50]; // 0x210(0x50)

	void UnregisterInputComponent(); // Function UMG.UserWidget.UnregisterInputComponent // (Net|Exec|Native|Event|NetResponse|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810460
	void UnbindFromAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationStarted // (Net|NetRequest|Native|Event|NetResponse|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void UnbindFromAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationFinished // (NetReliableNative|Event|NetResponse|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void UnbindAllFromAnimationStarted(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.UnbindAllFromAnimationStarted // (Native|Event|NetResponse|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void UnbindAllFromAnimationFinished(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.UnbindAllFromAnimationFinished // (NetReliableNetRequest|Exec|Event|NetResponse|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG.UserWidget.Tick // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void StopListeningForInputAction(struct FName ActionName, enum class EInputEvent EventType); // Function UMG.UserWidget.StopListeningForInputAction // (Net|NetReliableExec|Event|NetResponse|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void StopListeningForAllInputActions(); // Function UMG.UserWidget.StopListeningForAllInputActions // (NetReliableExec|Event|NetResponse|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void StopAnimationsAndLatentActions(); // Function UMG.UserWidget.StopAnimationsAndLatentActions // (NetReliableExec|Event|NetResponse|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void StopAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.StopAnimation // (Exec|Event|NetResponse|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void StopAllAnimations(); // Function UMG.UserWidget.StopAllAnimations // (Net|NetReliableNetRequest|Event|NetResponse|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void SetPositionInViewport(struct FVector2D Position, bool bRemoveDPIScale); // Function UMG.UserWidget.SetPositionInViewport // (NetRequest|Exec|Native|NetResponse|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void SetPlaybackSpeed(struct UWidgetAnimation* InAnimation, float PlaybackSpeed); // Function UMG.UserWidget.SetPlaybackSpeed // (Net|Exec|Native|NetResponse|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void SetPadding(struct FMargin InPadding); // Function UMG.UserWidget.SetPadding // (NetReliableNetRequest|Native|NetResponse|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void SetOwningPlayer(struct APlayerController* LocalPlayerController); // Function UMG.UserWidget.SetOwningPlayer // (NetRequest|Native|NetResponse|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void SetNumLoopsToPlay(struct UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay); // Function UMG.UserWidget.SetNumLoopsToPlay // (Net|Native|NetResponse|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void SetInputActionPriority(int32_t NewPriority); // Function UMG.UserWidget.SetInputActionPriority // (Exec|NetResponse|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void SetInputActionBlocking(bool bShouldBlock); // Function UMG.UserWidget.SetInputActionBlocking // (NetReliableNetRequest|NetResponse|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.UserWidget.SetForegroundColor // (NetResponse|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void SetDesiredSizeInViewport(struct FVector2D Size); // Function UMG.UserWidget.SetDesiredSizeInViewport // (NetReliableExec|Native|Event|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.UserWidget.SetColorAndOpacity // (NetReliableNetRequest|Native|Event|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void SetAnchorsInViewport(struct FAnchors Anchors); // Function UMG.UserWidget.SetAnchorsInViewport // (NetRequest|Native|Event|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void SetAlignmentInViewport(struct FVector2D Alignment); // Function UMG.UserWidget.SetAlignmentInViewport // (NetReliableNative|Event|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void ReverseAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.ReverseAnimation // (Native|Event|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void RemoveFromViewport(); // Function UMG.UserWidget.RemoveFromViewport // (Net|NetReliableNetRequest|Exec|Event|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void RegisterInputComponent(); // Function UMG.UserWidget.RegisterInputComponent // (Net|NetReliableNetRequest|Exec|Event|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void PreConstruct(bool IsDesignTime); // Function UMG.UserWidget.PreConstruct // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void PlaySound(struct USoundBase* SoundToPlay); // Function UMG.UserWidget.PlaySound // (Net|NetRequest|Exec|Event|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void PlayEnterAnim(); // Function UMG.UserWidget.PlayEnterAnim // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	struct UUMGSequencePlayer* PlayAnimationTimeRange(struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationTimeRange // (Net|NetRequest|Event|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	struct UUMGSequencePlayer* PlayAnimationReverse(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationReverse // (Net|Event|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	struct UUMGSequencePlayer* PlayAnimationForward(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationForward // (Net|NetRequest|Exec|Native|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	struct UUMGSequencePlayer* PlayAnimation(struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimation // (NetReliableNetRequest|Native|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810460
	float PauseAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.PauseAnimation // (Net|NetReliableNative|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchStarted // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchMoved // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	struct FEventReply OnTouchGesture(struct FGeometry MyGeometry, struct FPointerEvent& GestureEvent); // Function UMG.UserWidget.OnTouchGesture // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	struct FEventReply OnTouchForceChanged(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchForceChanged // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchEnded // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnRemovedFromFocusPath // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnPreviewMouseButtonDown // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnPreviewKeyDown // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void OnPaint(struct FPaintContext& Context); // Function UMG.UserWidget.OnPaint // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseWheel // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseMove // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseLeave // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseEnter // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void OnMouseCaptureLost(); // Function UMG.UserWidget.OnMouseCaptureLost // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseButtonUp // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseButtonDown // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent); // Function UMG.UserWidget.OnMouseButtonDoubleClick // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	struct FEventReply OnMotionDetected(struct FGeometry MyGeometry, struct FMotionEvent InMotionEvent); // Function UMG.UserWidget.OnMotionDetected // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32813730
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyUp // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyDown // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	struct FEventReply OnKeyChar(struct FGeometry MyGeometry, struct FCharacterEvent InCharacterEvent); // Function UMG.UserWidget.OnKeyChar // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void OnInitialized(); // Function UMG.UserWidget.OnInitialized // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusReceived // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusLost // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDrop // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	bool OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragOver // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragLeave // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragEnter // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Function UMG.UserWidget.OnDragDetected // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragCancelled // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void OnAnimationStarted(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.OnAnimationStarted // (NetReliableNetResponse|Static|UbergraphFunction|Public|Private|Delegate|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.OnAnimationFinished // (Net|Native|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // Function UMG.UserWidget.OnAnalogValueChanged // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnAddedToFocusPath // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32813730
	void ListenForInputAction(struct FName ActionName, enum class EInputEvent EventType, bool bConsume, struct FDelegate Callback); // Function UMG.UserWidget.ListenForInputAction // (Net|NetReliableExec|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f328100a0
	bool IsPlayingAnimation(); // Function UMG.UserWidget.IsPlayingAnimation // (NetReliableExec|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	bool IsListeningForInputAction(struct FName ActionName); // Function UMG.UserWidget.IsListeningForInputAction // (Exec|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	bool IsInViewport(); // Function UMG.UserWidget.IsInViewport // (Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	bool IsInteractable(); // Function UMG.UserWidget.IsInteractable // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	bool IsAnyAnimationPlaying(); // Function UMG.UserWidget.IsAnyAnimationPlaying // (Net|NetReliableNetRequest|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	bool IsAnimationPlayingForward(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.IsAnimationPlayingForward // (Net|NetRequest|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	bool IsAnimationPlaying(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.IsAnimationPlaying // (Net|NetReliableStatic|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	struct APawn* GetOwningPlayerPawn(); // Function UMG.UserWidget.GetOwningPlayerPawn // (Net|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	struct AHUD* GetOwningHUD(); // Function UMG.UserWidget.GetOwningHUD // (Net|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	bool GetIsVisible(); // Function UMG.UserWidget.GetIsVisible // (Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	float GetAnimationCurrentTime(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.GetAnimationCurrentTime // (Net|NetRequest|Exec|Native|Event|NetResponse|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	struct FAnchors GetAnchorsInViewport(); // Function UMG.UserWidget.GetAnchorsInViewport // (NetRequest|Exec|Native|Event|NetResponse|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f328137d0
	struct FVector2D GetAlignmentInViewport(); // Function UMG.UserWidget.GetAlignmentInViewport // (Net|NetReliableExec|Native|Event|NetResponse|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void DoPlayEnterAnim(bool InPlayFlag); // Function UMG.UserWidget.DoPlayEnterAnim // (Net|Exec|Native|Event|NetResponse|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void Destruct(); // Function UMG.UserWidget.Destruct // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void Construct(); // Function UMG.UserWidget.Construct // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void CancelLatentActions(); // Function UMG.UserWidget.CancelLatentActions // (Exec|Native|Event|NetResponse|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void BindToAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationStarted // (NetRequest|Native|Event|NetResponse|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void BindToAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationFinished // (Net|Native|Event|NetResponse|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	void BindToAnimationEvent(struct UWidgetAnimation* Animation, struct FDelegate Delegate, enum class EWidgetAnimationEvent AnimationEvent, struct FName UserTag); // Function UMG.UserWidget.BindToAnimationEvent // (Net|NetReliableExec|Event|NetResponse|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810460
	void AddToViewport(int32_t ZOrder); // Function UMG.UserWidget.AddToViewport // (Net|Exec|Event|NetResponse|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
	bool AddToPlayerScreen(int32_t ZOrder); // Function UMG.UserWidget.AddToPlayerScreen // (Net|NetReliableNetRequest|Event|NetResponse|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3144acc0
};

// Class UMG.Slider
// Size: 0x598 (Inherited: 0x138)
struct USlider : UWidget {
	float Value; // 0x138(0x04)
	struct FDelegate ValueDelegate; // 0x13c(0x10)
	float MinValue; // 0x14c(0x04)
	float MaxValue; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FSliderStyle WidgetStyle; // 0x158(0x3a0)
	enum class EOrientation Orientation; // 0x4f8(0x01)
	char pad_4F9[0x3]; // 0x4f9(0x03)
	struct FLinearColor SliderBarColor; // 0x4fc(0x10)
	struct FLinearColor SliderHandleColor; // 0x50c(0x10)
	struct FVector2D SliderHandleOffset; // 0x51c(0x08)
	bool CommitTouchStartValue; // 0x524(0x01)
	bool IndentHandle; // 0x525(0x01)
	bool Locked; // 0x526(0x01)
	bool MouseUsesStep; // 0x527(0x01)
	bool RequiresControllerLock; // 0x528(0x01)
	char pad_529[0x3]; // 0x529(0x03)
	float StepSize; // 0x52c(0x04)
	bool IsFocusable; // 0x530(0x01)
	char pad_531[0x7]; // 0x531(0x07)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x538(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x548(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x558(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x568(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x578(0x10)
	char pad_588[0x10]; // 0x588(0x10)

	void SetValue(float InValue); // Function UMG.Slider.SetValue // (Net|NetResponse|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a3580
	void SetStepSize(float InValue); // Function UMG.Slider.SetStepSize // (Net|NetReliableNative|Event|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a3c40
	void SetSliderHandleOffset(struct FVector2D InValue); // Function UMG.Slider.SetSliderHandleOffset // (Net|Native|Event|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a3c40
	void SetSliderHandleColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderHandleColor // (Net|NetReliableNetRequest|Exec|Event|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a3c40
	void SetSliderBarColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderBarColor // (Net|NetRequest|Exec|Event|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a3c40
	void SetNormalBarImage(struct FSlateBrush& InImage); // Function UMG.Slider.SetNormalBarImage // (NetRequest|Exec|Native|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a3c40
	void SetMinValue(float InValue); // Function UMG.Slider.SetMinValue // (Exec|Native|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a3c40
	void SetMaxValue(float InValue); // Function UMG.Slider.SetMaxValue // (NetReliableNetRequest|Exec|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a3c40
	void SetLocked(bool InValue); // Function UMG.Slider.SetLocked // (Exec|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a3c40
	void SetIndentHandle(bool InValue); // Function UMG.Slider.SetIndentHandle // (NetRequest|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a3c40
	void SetHoveredBarImage(struct FSlateBrush& InImage); // Function UMG.Slider.SetHoveredBarImage // (Net|NetRequest|Exec|Native|Event|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a3c40
	void SetBarThickness(float InValue); // Function UMG.Slider.SetBarThickness // (Net|NetRequest|Exec|Event|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a3c40
	float GetValue(); // Function UMG.Slider.GetValue // (Net|Event|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a3c40
	float GetNormalizedValue(); // Function UMG.Slider.GetNormalizedValue // (Net|Exec|Native|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a3c40
};

// Class UMG.PanelWidget
// Size: 0x150 (Inherited: 0x138)
struct UPanelWidget : UWidget {
	struct TArray<struct UPanelSlot*> Slots; // 0x138(0x10)
	char pad_148[0x8]; // 0x148(0x08)

	bool RemoveChildAt(int32_t Index); // Function UMG.PanelWidget.RemoveChildAt // (NetReliableNetRequest|Native|Event|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1a80
	bool RemoveChild(struct UWidget* Content); // Function UMG.PanelWidget.RemoveChild // (Net|NetReliableNative|Event|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a2380
	bool HasChild(struct UWidget* Content); // Function UMG.PanelWidget.HasChild // (Net|NetRequest|Exec|Event|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a2380
	bool HasAnyChildren(); // Function UMG.PanelWidget.HasAnyChildren // (NetReliableNetRequest|Exec|Native|Event|NetResponse|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a2380
	int32_t GetChildrenCount(); // Function UMG.PanelWidget.GetChildrenCount // (Event|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a2380
	int32_t GetChildIndex(struct UWidget* Content); // Function UMG.PanelWidget.GetChildIndex // (NetReliableNetRequest|Exec|Native|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a2380
	struct UWidget* GetChildAt(int32_t Index); // Function UMG.PanelWidget.GetChildAt // (NetRequest|Exec|Native|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a2380
	struct TArray<struct UWidget*> GetAllChildren(); // Function UMG.PanelWidget.GetAllChildren // (NetReliableExec|Native|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a2380
	void ClearChildren(); // Function UMG.PanelWidget.ClearChildren // (NetReliableNetRequest|Native|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a2380
	struct UPanelSlot* AddChild(struct UWidget* Content); // Function UMG.PanelWidget.AddChild // (NetReliableNative|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a2380
};

// Class UMG.WidgetSwitcher
// Size: 0x168 (Inherited: 0x150)
struct UWidgetSwitcher : UPanelWidget {
	int32_t ActiveWidgetIndex; // 0x150(0x04)
	char pad_154[0x14]; // 0x154(0x14)

	void SetActiveWidgetIndex(int32_t Index); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex // (Net|NetReliableExec|Native|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a2800
	void SetActiveWidget(struct UWidget* Widget); // Function UMG.WidgetSwitcher.SetActiveWidget // (Net|NetReliableNetRequest|Native|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a25c0
	struct UWidget* GetWidgetAtIndex(int32_t Index); // Function UMG.WidgetSwitcher.GetWidgetAtIndex // (NetReliableNetRequest|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a25c0
	int32_t GetNumWidgets(); // Function UMG.WidgetSwitcher.GetNumWidgets // (NetReliableExec|Native|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a25c0
	int32_t GetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.GetActiveWidgetIndex // (Native|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a25c0
	struct UWidget* GetActiveWidget(); // Function UMG.WidgetSwitcher.GetActiveWidget // (Net|NetReliableNetRequest|Exec|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a25c0
};

// Class UMG.ContentWidget
// Size: 0x150 (Inherited: 0x150)
struct UContentWidget : UPanelWidget {

	struct UPanelSlot* SetContent(struct UWidget* Content); // Function UMG.ContentWidget.SetContent // (NetReliableNetRequest|Exec|Native|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1cc0
	struct UPanelSlot* GetContentSlot(); // Function UMG.ContentWidget.GetContentSlot // (Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1a80
	struct UWidget* GetContent(); // Function UMG.ContentWidget.GetContent // (Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1a80
};

// Class UMG.Border
// Size: 0x2b0 (Inherited: 0x150)
struct UBorder : UContentWidget {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x150(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x151(0x01)
	char bShowEffectWhenDisabled : 1; // 0x152(0x01)
	char pad_152_1 : 7; // 0x152(0x01)
	char pad_153[0x1]; // 0x153(0x01)
	struct FLinearColor ContentColorAndOpacity; // 0x154(0x10)
	struct FDelegate ContentColorAndOpacityDelegate; // 0x164(0x10)
	struct FMargin Padding; // 0x174(0x10)
	char pad_184[0x4]; // 0x184(0x04)
	struct FSlateBrush Background; // 0x188(0x98)
	struct FDelegate BackgroundDelegate; // 0x220(0x10)
	struct FLinearColor BrushColor; // 0x230(0x10)
	struct FDelegate BrushColorDelegate; // 0x240(0x10)
	struct FVector2D DesiredSizeScale; // 0x250(0x08)
	bool bFlipForRightToLeftFlowDirection; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	struct FDelegate OnMouseButtonDownEvent; // 0x25c(0x10)
	struct FDelegate OnMouseButtonUpEvent; // 0x26c(0x10)
	struct FDelegate OnMouseMoveEvent; // 0x27c(0x10)
	struct FDelegate OnMouseDoubleClickEvent; // 0x28c(0x10)
	char pad_29C[0x14]; // 0x29c(0x14)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.Border.SetVerticalAlignment // (NetReliableExec|Native|Event|Static|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32813730
	void SetPadding(struct FMargin InPadding); // Function UMG.Border.SetPadding // (NetRequest|Exec|Native|Static|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1cc0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.Border.SetHorizontalAlignment // (Static|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32813730
	void SetDesiredSizeScale(struct FVector2D InScale); // Function UMG.Border.SetDesiredSizeScale // (NetReliableExec|Native|Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1cc0
	void SetContentColorAndOpacity(struct FLinearColor InContentColorAndOpacity); // Function UMG.Border.SetContentColorAndOpacity // (Exec|Native|Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1cc0
	void SetBrushFromTexture(struct UTexture2D* Texture); // Function UMG.Border.SetBrushFromTexture // (NetReliableNetRequest|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1cc0
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Function UMG.Border.SetBrushFromMaterial // (NetReliableNetRequest|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1cc0
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Function UMG.Border.SetBrushFromAsset // (NetRequest|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1cc0
	void SetBrushColor(struct FLinearColor InBrushColor); // Function UMG.Border.SetBrushColor // (NetReliableExec|Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1cc0
	void SetBrush(struct FSlateBrush& InBrush); // Function UMG.Border.SetBrush // (NetRequest|Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1cc0
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Border.GetDynamicMaterial // (Exec|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1cc0
};

// Class UMG.DynamicEntryBoxBase
// Size: 0x1f8 (Inherited: 0x138)
struct UDynamicEntryBoxBase : UWidget {
	enum class EDynamicBoxType EntryBoxType; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	struct FVector2D EntrySpacing; // 0x13c(0x08)
	char pad_144[0x4]; // 0x144(0x04)
	struct TArray<struct FVector2D> SpacingPattern; // 0x148(0x10)
	struct FSlateChildSize EntrySizeRule; // 0x158(0x08)
	enum class EHorizontalAlignment EntryHorizontalAlignment; // 0x160(0x01)
	enum class EVerticalAlignment EntryVerticalAlignment; // 0x161(0x01)
	char pad_162[0x2]; // 0x162(0x02)
	int32_t MaxElementSize; // 0x164(0x04)
	char pad_168[0x10]; // 0x168(0x10)
	struct FUserWidgetPool EntryWidgetPool; // 0x178(0x80)

	void SetEntrySpacing(struct FVector2D& InEntrySpacing); // Function UMG.DynamicEntryBoxBase.SetEntrySpacing // (Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1840
	int32_t GetNumEntries(); // Function UMG.DynamicEntryBoxBase.GetNumEntries // (Net|NetReliableEvent|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1600
	struct TArray<struct UUserWidget*> GetAllEntries(); // Function UMG.DynamicEntryBoxBase.GetAllEntries // (Net|NetRequest|Exec|Native|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1600
};

// Class UMG.Button
// Size: 0x498 (Inherited: 0x150)
struct UButton : UContentWidget {
	struct USlateWidgetStyleAsset* Style; // 0x150(0x08)
	struct FButtonStyle WidgetStyle; // 0x158(0x2b8)
	struct FLinearColor ColorAndOpacity; // 0x410(0x10)
	struct FLinearColor BackgroundColor; // 0x420(0x10)
	enum class EButtonClickMethod ClickMethod; // 0x430(0x01)
	enum class EButtonTouchMethod TouchMethod; // 0x431(0x01)
	enum class EButtonPressMethod PressMethod; // 0x432(0x01)
	bool IsFocusable; // 0x433(0x01)
	char pad_434[0x4]; // 0x434(0x04)
	struct FMulticastInlineDelegate OnClicked; // 0x438(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x448(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x458(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x468(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x478(0x10)
	char pad_488[0x10]; // 0x488(0x10)

	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function UMG.Button.SetTouchMethod // (NetReliableNative|Event|Static|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0640
	void SetStyle(struct FButtonStyle& InStyle); // Function UMG.Button.SetStyle // (Net|NetReliableNetRequest|Exec|Event|Static|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0ac0
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // Function UMG.Button.SetPressMethod // (Net|NetReliableNetRequest|Event|Static|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0ac0
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Button.SetColorAndOpacity // (NetReliableNetRequest|Native|Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0ac0
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Function UMG.Button.SetClickMethod // (NetReliableNative|Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0ac0
	void SetBackgroundColor(struct FLinearColor InBackgroundColor); // Function UMG.Button.SetBackgroundColor // (Net|NetRequest|Exec|Native|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0ac0
	bool IsPressed(); // Function UMG.Button.IsPressed // (NetReliableNative|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0ac0
};

// Class UMG.TextLayoutWidget
// Size: 0x160 (Inherited: 0x138)
struct UTextLayoutWidget : UWidget {
	struct FShapedTextOptions ShapedTextOptions; // 0x138(0x03)
	enum class ETextJustify Justification; // 0x13b(0x01)
	enum class ETextWrappingPolicy WrappingPolicy; // 0x13c(0x01)
	char AutoWrapText : 1; // 0x13d(0x01)
	char pad_13D_1 : 7; // 0x13d(0x01)
	char pad_13E[0x2]; // 0x13e(0x02)
	float WrapTextAt; // 0x140(0x04)
	struct FMargin Margin; // 0x144(0x10)
	float LineHeightPercentage; // 0x154(0x04)
	char AlwaysKeepJustification : 1; // 0x158(0x01)
	char pad_158_1 : 7; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)

	void SetJustification(enum class ETextJustify InJustification); // Function UMG.TextLayoutWidget.SetJustification // (NetReliableNetRequest|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f328137d0
};

// Class UMG.TextBlock
// Size: 0x2f0 (Inherited: 0x160)
struct UTextBlock : UTextLayoutWidget {
	struct FText Text; // 0x160(0x18)
	struct FDelegate TextDelegate; // 0x178(0x10)
	struct FSlateColor ColorAndOpacity; // 0x188(0x28)
	struct FDelegate ColorAndOpacityDelegate; // 0x1b0(0x10)
	struct FSlateFontInfo Font; // 0x1c0(0x58)
	struct FSlateBrush StrikeBrush; // 0x218(0x98)
	struct FVector2D ShadowOffset; // 0x2b0(0x08)
	struct FLinearColor ShadowColorAndOpacity; // 0x2b8(0x10)
	struct FDelegate ShadowColorAndOpacityDelegate; // 0x2c8(0x10)
	float MinDesiredWidth; // 0x2d8(0x04)
	bool bWrapWithInvalidationPanel; // 0x2dc(0x01)
	bool bAutoWrapText; // 0x2dd(0x01)
	enum class ETextTransformPolicy TextTransformPolicy; // 0x2de(0x01)
	bool bSimpleTextMode; // 0x2df(0x01)
	char pad_2E0[0x10]; // 0x2e0(0x10)

	void SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy); // Function UMG.TextBlock.SetTextTransformPolicy // (Net|NetReliableNetRequest|Exec|Native|Event|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f328137d0
	void SetText(struct FText InText); // Function UMG.TextBlock.SetText // (Net|NetReliableExec|Native|Event|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a91c0
	void SetStrikeBrush(struct FSlateBrush InStrikeBrush); // Function UMG.TextBlock.SetStrikeBrush // (Net|NetRequest|Native|Event|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a91c0
	void SetShadowOffset(struct FVector2D InShadowOffset); // Function UMG.TextBlock.SetShadowOffset // (Net|Exec|Event|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a91c0
	void SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.TextBlock.SetShadowColorAndOpacity // (Net|NetReliableNetRequest|Event|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a91c0
	void SetOpacity(float InOpacity); // Function UMG.TextBlock.SetOpacity // (Net|NetRequest|Event|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a91c0
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.TextBlock.SetMinDesiredWidth // (NetReliableNative|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a91c0
	void SetFont(struct FSlateFontInfo InFontInfo); // Function UMG.TextBlock.SetFont // (Net|NetRequest|Native|Event|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a91c0
	void SetColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.TextBlock.SetColorAndOpacity // (Net|NetReliableNetRequest|Exec|Event|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a91c0
	void SetAutoWrapText(bool InAutoTextWrap); // Function UMG.TextBlock.SetAutoWrapText // (Net|NetReliableExec|Event|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a91c0
	struct FText GetText(); // Function UMG.TextBlock.GetText // (NetRequest|Exec|Native|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a91c0
	struct UMaterialInstanceDynamic* GetDynamicOutlineMaterial(); // Function UMG.TextBlock.GetDynamicOutlineMaterial // (NetRequest|Native|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a91c0
	struct UMaterialInstanceDynamic* GetDynamicFontMaterial(); // Function UMG.TextBlock.GetDynamicFontMaterial // (Net|NetReliableNative|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a91c0
};

// Class UMG.ScrollBox
// Size: 0x980 (Inherited: 0x150)
struct UScrollBox : UPanelWidget {
	struct FScrollBoxStyle WidgetStyle; // 0x150(0x268)
	struct FScrollBarStyle WidgetBarStyle; // 0x3b8(0x560)
	struct USlateWidgetStyleAsset* Style; // 0x918(0x08)
	struct USlateWidgetStyleAsset* BarStyle; // 0x920(0x08)
	enum class EOrientation Orientation; // 0x928(0x01)
	enum class ESlateVisibility ScrollBarVisibility; // 0x929(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x92a(0x01)
	char pad_92B[0x1]; // 0x92b(0x01)
	struct FVector2D ScrollbarThickness; // 0x92c(0x08)
	struct FMargin ScrollbarPadding; // 0x934(0x10)
	bool AlwaysShowScrollbar; // 0x944(0x01)
	bool AlwaysShowScrollbarTrack; // 0x945(0x01)
	bool AllowOverscroll; // 0x946(0x01)
	bool bAnimateWheelScrolling; // 0x947(0x01)
	enum class EDescendantScrollDestination NavigationDestination; // 0x948(0x01)
	char pad_949[0x3]; // 0x949(0x03)
	float NavigationScrollPadding; // 0x94c(0x04)
	enum class EScrollWhenFocusChanges ScrollWhenFocusChanges; // 0x950(0x01)
	bool bAllowRightClickDragScrolling; // 0x951(0x01)
	char pad_952[0x2]; // 0x952(0x02)
	float WheelScrollMultiplier; // 0x954(0x04)
	struct FMulticastInlineDelegate OnUserScrolled; // 0x958(0x10)
	char pad_968[0x18]; // 0x968(0x18)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ScrollBox.SetWheelScrollMultiplier // (NetReliableNative|Event|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7d80
	void SetScrollOffset(float NewScrollOffset); // Function UMG.ScrollBox.SetScrollOffset // (Net|NetRequest|Native|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a8200
	void SetScrollBarVisibility(enum class ESlateVisibility NewScrollBarVisibility); // Function UMG.ScrollBox.SetScrollBarVisibility // (Net|NetReliableNative|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a8200
	void SetScrollbarThickness(struct FVector2D& NewScrollbarThickness); // Function UMG.ScrollBox.SetScrollbarThickness // (Net|Exec|Native|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a8200
	void SetScrollbarPadding(struct FMargin& NewScrollbarPadding); // Function UMG.ScrollBox.SetScrollbarPadding // (Net|NetReliableNetRequest|Native|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a8200
	void SetOrientation(enum class EOrientation NewOrientation); // Function UMG.ScrollBox.SetOrientation // (NetReliableExec|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a8200
	void SetConsumeMouseWheel(enum class EConsumeMouseWheel NewConsumeMouseWheel); // Function UMG.ScrollBox.SetConsumeMouseWheel // (Net|NetRequest|Exec|Native|NetResponse|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a8200
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling); // Function UMG.ScrollBox.SetAnimateWheelScrolling // (Exec|Native|NetResponse|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a8200
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar); // Function UMG.ScrollBox.SetAlwaysShowScrollbar // (NetReliableNetRequest|Native|NetResponse|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a8200
	void SetAllowOverscroll(bool NewAllowOverscroll); // Function UMG.ScrollBox.SetAllowOverscroll // (NetRequest|Native|NetResponse|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a8200
	void ScrollWidgetIntoView(struct UWidget* WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDestination, float Padding); // Function UMG.ScrollBox.ScrollWidgetIntoView // (NetReliableNetRequest|Exec|NetResponse|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a8200
	void ScrollToStart(); // Function UMG.ScrollBox.ScrollToStart // (NetReliableNetRequest|Exec|NetResponse|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a8200
	void ScrollToEnd(); // Function UMG.ScrollBox.ScrollToEnd // (Net|NetRequest|Exec|NetResponse|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a8200
	float GetViewOffsetFraction(); // Function UMG.ScrollBox.GetViewOffsetFraction // (Net|NetRequest|Exec|Event|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a8200
	float GetScrollOffsetOfEnd(); // Function UMG.ScrollBox.GetScrollOffsetOfEnd // (Net|Exec|Event|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a8200
	float GetScrollOffset(); // Function UMG.ScrollBox.GetScrollOffset // (Net|Exec|Event|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a8200
	void EndInertialScrolling(); // Function UMG.ScrollBox.EndInertialScrolling // (Net|Native|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a8200
};

// Class UMG.Image
// Size: 0x250 (Inherited: 0x138)
struct UImage : UWidget {
	struct FSlateBrush Brush; // 0x138(0x98)
	struct FDelegate BrushDelegate; // 0x1d0(0x10)
	struct FLinearColor ColorAndOpacity; // 0x1e0(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x1f0(0x10)
	bool bFlipForRightToLeftFlowDirection; // 0x200(0x01)
	char pad_201[0x3]; // 0x201(0x03)
	struct FDelegate OnMouseButtonDownEvent; // 0x204(0x10)
	char pad_214[0x3c]; // 0x214(0x3c)

	void SetOpacity(float InOpacity); // Function UMG.Image.SetOpacity // (Net|NetReliableExec|Event|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7fc0
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Image.SetColorAndOpacity // (Net|NetRequest|Exec|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7d80
	void SetBrushTintColor(struct FSlateColor TintColor); // Function UMG.Image.SetBrushTintColor // (Net|NetReliableNetRequest|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7d80
	void SetBrushSize(struct FVector2D DesiredSize); // Function UMG.Image.SetBrushSize // (Net|NetRequest|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7d80
	void SetBrushResourceObject(struct UObject* ResourceObject); // Function UMG.Image.SetBrushResourceObject // (Net|NetReliableStatic|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7d80
	void SetBrushFromTextureDynamic(struct UTexture2DDynamic* Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTextureDynamic // (Exec|Event|NetResponse|Static|UbergraphFunction|Public|Private|Delegate|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7d80
	void SetBrushFromTexture(struct UTexture2D* Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTexture // (Net|Event|NetResponse|Static|UbergraphFunction|Public|Private|Delegate|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7d80
	void SetBrushFromSoftTexture(struct TSoftObjectPtr<UTexture2D> SoftTexture, bool bMatchSize); // Function UMG.Image.SetBrushFromSoftTexture // (Net|NetReliableNetRequest|Native|NetResponse|Static|UbergraphFunction|Public|Private|Delegate|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7d80
	void SetBrushFromSoftMaterial(struct TSoftObjectPtr<UMaterialInterface> SoftMaterial); // Function UMG.Image.SetBrushFromSoftMaterial // (NetReliableNetRequest|Exec|NetResponse|Static|UbergraphFunction|Public|Private|Delegate|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7d80
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Function UMG.Image.SetBrushFromMaterial // (Net|NetReliableNetRequest|Native|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7d80
	void SetBrushFromAtlasInterface(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, bool bMatchSize); // Function UMG.Image.SetBrushFromAtlasInterface // (Net|NetRequest|NetResponse|Static|UbergraphFunction|Public|Private|Delegate|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7d80
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Function UMG.Image.SetBrushFromAsset // (NetResponse|Static|UbergraphFunction|Public|Private|Delegate|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7d80
	void SetBrush(struct FSlateBrush& InBrush); // Function UMG.Image.SetBrush // (Net|NetReliableNative|Event|Static|UbergraphFunction|Public|Private|Delegate|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7d80
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Image.GetDynamicMaterial // (Net|Event|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7d80
};

// Class UMG.ListViewBase
// Size: 0x7c8 (Inherited: 0x138)
struct UListViewBase : UWidget {
	struct UUserWidget* EntryWidgetClass; // 0x138(0x08)
	float WheelScrollMultiplier; // 0x140(0x04)
	bool bEnableScrollAnimation; // 0x144(0x01)
	bool bEnableFixedLineOffset; // 0x145(0x01)
	bool bClampScroll; // 0x146(0x01)
	bool bDisableScroll; // 0x147(0x01)
	float FixedLineScrollOffset; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct FMulticastInlineDelegate BP_OnEntryGenerated; // 0x150(0x10)
	struct FMulticastInlineDelegate BP_OnEntryReleased; // 0x160(0x10)
	struct FUserWidgetPool EntryWidgetPool; // 0x170(0x80)
	struct FScrollBarStyle WidgetBarStyle; // 0x1f0(0x560)
	enum class ESlateVisibility ScrollBarVisibility; // 0x750(0x01)
	char pad_751[0x3]; // 0x751(0x03)
	struct FVector2D ScrollbarThickness; // 0x754(0x08)
	struct FMargin ScrollbarPadding; // 0x75c(0x10)
	bool AlwaysShowScrollbar; // 0x76c(0x01)
	bool AlwaysShowScrollbarTrack; // 0x76d(0x01)
	char pad_76E[0x5a]; // 0x76e(0x5a)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ListViewBase.SetWheelScrollMultiplier // (NetReliableNetRequest|Exec|NetResponse|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a76c0
	void SetScrollOffset(float InScrollOffset); // Function UMG.ListViewBase.SetScrollOffset // (Net|NetRequest|Native|Event|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7480
	void SetScrollBarVisibility(enum class ESlateVisibility InVisibility); // Function UMG.ListViewBase.SetScrollBarVisibility // (NetRequest|Exec|Native|Event|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7480
	void SetScrollbarThickness(struct FVector2D& NewScrollbarThickness); // Function UMG.ListViewBase.SetScrollbarThickness // (NetReliableExec|Native|Event|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7480
	void SetScrollbarPadding(struct FMargin& NewScrollbarPadding); // Function UMG.ListViewBase.SetScrollbarPadding // (Net|NetReliableNetRequest|Native|Event|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7480
	void SetEnableScrollAnimation(bool bNewEnableScrollAnimation); // Function UMG.ListViewBase.SetEnableScrollAnimation // (NetReliableNetRequest|Native|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7480
	void SetDisableScroll(bool bInDisableScroll); // Function UMG.ListViewBase.SetDisableScroll // (Net|NetReliableNative|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7480
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar); // Function UMG.ListViewBase.SetAlwaysShowScrollbar // (Net|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7480
	void ScrollToTop(); // Function UMG.ListViewBase.ScrollToTop // (NetRequest|Exec|Native|Event|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7480
	void ScrollToBottom(); // Function UMG.ListViewBase.ScrollToBottom // (NetRequest|Exec|Native|Event|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7480
	void RequestRefresh(); // Function UMG.ListViewBase.RequestRefresh // (Net|Exec|Native|Event|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7480
	void RegenerateAllEntries(); // Function UMG.ListViewBase.RegenerateAllEntries // (Net|NetReliableNetRequest|Native|Event|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7480
	float GetScrollOffset(); // Function UMG.ListViewBase.GetScrollOffset // (Net|NetRequest|Exec|Event|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7480
	struct TArray<struct UUserWidget*> GetDisplayedEntryWidgets(); // Function UMG.ListViewBase.GetDisplayedEntryWidgets // (Net|NetReliableNetRequest|Exec|Native|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7480
	bool GetDisableScroll(); // Function UMG.ListViewBase.GetDisableScroll // (NetReliableNetRequest|Exec|Native|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7480
};

// Class UMG.ListView
// Size: 0x950 (Inherited: 0x7c8)
struct UListView : UListViewBase {
	char pad_7C8[0xc0]; // 0x7c8(0xc0)
	enum class EOrientation Orientation; // 0x888(0x01)
	enum class ESelectionMode SelectionMode; // 0x889(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x88a(0x01)
	bool bClearSelectionOnClick; // 0x88b(0x01)
	bool bIsFocusable; // 0x88c(0x01)
	char pad_88D[0x3]; // 0x88d(0x03)
	float EntrySpacing; // 0x890(0x04)
	bool bReturnFocusToSelection; // 0x894(0x01)
	char pad_895[0x3]; // 0x895(0x03)
	float ListItemStartPosOffset; // 0x898(0x04)
	char pad_89C[0x4]; // 0x89c(0x04)
	struct TArray<struct UObject*> ListItems; // 0x8a0(0x10)
	char pad_8B0[0x10]; // 0x8b0(0x10)
	bool EnableDelayAdd; // 0x8c0(0x01)
	char pad_8C1[0x3]; // 0x8c1(0x03)
	float DelayAddInterval; // 0x8c4(0x04)
	int32_t NumInPanel; // 0x8c8(0x04)
	char pad_8CC[0x4]; // 0x8cc(0x04)
	struct TArray<struct UObject*> DelayAddedListItems; // 0x8d0(0x10)
	bool DelayAddAnimFlag; // 0x8e0(0x01)
	char pad_8E1[0x7]; // 0x8e1(0x07)
	struct FMulticastInlineDelegate BP_OnEntryInitialized; // 0x8e8(0x10)
	struct FMulticastInlineDelegate BP_OnItemClicked; // 0x8f8(0x10)
	struct FMulticastInlineDelegate BP_OnItemDoubleClicked; // 0x908(0x10)
	struct FMulticastInlineDelegate BP_OnItemIsHoveredChanged; // 0x918(0x10)
	struct FMulticastInlineDelegate BP_OnItemSelectionChanged; // 0x928(0x10)
	struct FMulticastInlineDelegate BP_OnItemScrolledIntoView; // 0x938(0x10)
	char pad_948[0x8]; // 0x948(0x08)

	void SetSelectionMode(enum class ESelectionMode SelectionMode); // Function UMG.ListView.SetSelectionMode // (NetRequest|NetResponse|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7900
	void SetSelectedIndex(int32_t Index); // Function UMG.ListView.SetSelectedIndex // (NetReliableNetRequest|Exec|Native|Event|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a76c0
	void ScrollIndexIntoView(int32_t Index); // Function UMG.ListView.ScrollIndexIntoView // (NetReliableExec|Native|Event|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a76c0
	void RemoveItem(struct UObject* Item); // Function UMG.ListView.RemoveItem // (Net|NetReliableNetRequest|Native|Event|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a76c0
	void NavigateToIndex(int32_t Index); // Function UMG.ListView.NavigateToIndex // (Net|NetRequest|Native|Event|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a76c0
	bool IsRefreshPending(); // Function UMG.ListView.IsRefreshPending // (NetRequest|Native|Event|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a76c0
	int32_t GetNumItems(); // Function UMG.ListView.GetNumItems // (NetReliableExec|Event|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a76c0
	struct TArray<struct UObject*> GetListItems(); // Function UMG.ListView.GetListItems // (Net|Exec|Event|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a76c0
	struct UObject* GetItemAt(int32_t Index); // Function UMG.ListView.GetItemAt // (Net|NetRequest|Event|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a76c0
	int32_t GetIndexForItem(struct UObject* Item); // Function UMG.ListView.GetIndexForItem // (NetReliableEvent|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a76c0
	struct TArray<struct UObject*> GetDelayAddedListItems(); // Function UMG.ListView.GetDelayAddedListItems // (Net|NetRequest|Exec|Native|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a76c0
	void ClearListItems(); // Function UMG.ListView.ClearListItems // (NetRequest|Exec|Native|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a76c0
	void BP_SetSelectedItem(struct UObject* Item); // Function UMG.ListView.BP_SetSelectedItem // (NetReliableExec|Native|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a76c0
	void BP_SetListItems(struct TArray<struct UObject*>& InListItems); // Function UMG.ListView.BP_SetListItems // (Net|NetReliableNetRequest|Native|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a76c0
	void BP_SetItemSelection(struct UObject* Item, bool bSelected); // Function UMG.ListView.BP_SetItemSelection // (NetRequest|Native|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a76c0
	void BP_SetDelayAddListItems(struct TArray<struct UObject*>& InListItems); // Function UMG.ListView.BP_SetDelayAddListItems // (Net|Native|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a76c0
	void BP_ScrollItemIntoView(struct UObject* Item); // Function UMG.ListView.BP_ScrollItemIntoView // (Net|NetReliableNetRequest|Exec|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a76c0
	void BP_NavigateToItem(struct UObject* Item); // Function UMG.ListView.BP_NavigateToItem // (Net|NetRequest|Exec|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a76c0
	bool BP_IsItemVisible(struct UObject* Item); // Function UMG.ListView.BP_IsItemVisible // (Net|NetReliableExec|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a76c0
	bool BP_GetSelectedItems(struct TArray<struct UObject*>& Items); // Function UMG.ListView.BP_GetSelectedItems // (Exec|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a76c0
	struct UObject* BP_GetSelectedItem(); // Function UMG.ListView.BP_GetSelectedItem // (Net|NetReliableNetRequest|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a76c0
	int32_t BP_GetNumItemsSelected(); // Function UMG.ListView.BP_GetNumItemsSelected // (NetReliableNetRequest|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a76c0
	void BP_DoDelayAddTick(float DeltaTime); // Function UMG.ListView.BP_DoDelayAddTick // (NetRequest|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a76c0
	void BP_ClearSelection(); // Function UMG.ListView.BP_ClearSelection // (NetRequest|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a76c0
	void BP_CancelScrollIntoView(); // Function UMG.ListView.BP_CancelScrollIntoView // (Net|NetReliableNetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a76c0
	void AddItem(struct UObject* Item); // Function UMG.ListView.AddItem // (Net|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a76c0
};

// Class UMG.PanelSlot
// Size: 0x38 (Inherited: 0x28)
struct UPanelSlot : UVisual {
	struct UPanelWidget* Parent; // 0x28(0x08)
	struct UWidget* Content; // 0x30(0x08)
};

// Class UMG.RichTextBlock
// Size: 0x710 (Inherited: 0x160)
struct URichTextBlock : UTextLayoutWidget {
	struct FText Text; // 0x160(0x18)
	struct UDataTable* TextStyleSet; // 0x178(0x08)
	struct TArray<struct URichTextBlockDecorator*> DecoratorClasses; // 0x180(0x10)
	bool bOverrideDefaultStyle; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct FTextBlockStyle DefaultTextStyleOverride; // 0x198(0x2a0)
	float MinDesiredWidth; // 0x438(0x04)
	enum class ETextTransformPolicy TextTransformPolicy; // 0x43c(0x01)
	char pad_43D[0x3]; // 0x43d(0x03)
	struct FTextBlockStyle DefaultTextStyle; // 0x440(0x2a0)
	struct TArray<struct URichTextBlockDecorator*> InstanceDecorators; // 0x6e0(0x10)
	char pad_6F0[0x20]; // 0x6f0(0x20)

	void SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy); // Function UMG.RichTextBlock.SetTextTransformPolicy // (NetReliableExec|Event|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6280
	void SetTextStyleSet(struct UDataTable* NewTextStyleSet); // Function UMG.RichTextBlock.SetTextStyleSet // (Exec|Event|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a64c0
	void SetText(struct FText& InText); // Function UMG.RichTextBlock.SetText // (Net|NetReliableNative|Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|Delegate|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a64c0
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.RichTextBlock.SetMinDesiredWidth // (NetReliableNetRequest|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a64c0
	void SetDefaultTextStyle(struct FTextBlockStyle& InDefaultTextStyle); // Function UMG.RichTextBlock.SetDefaultTextStyle // (Net|Native|Event|NetResponse|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a64c0
	void SetDefaultStrikeBrush(struct FSlateBrush& InStrikeBrush); // Function UMG.RichTextBlock.SetDefaultStrikeBrush // (Net|NetReliableExec|Event|NetResponse|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a64c0
	void SetDefaultShadowOffset(struct FVector2D InShadowOffset); // Function UMG.RichTextBlock.SetDefaultShadowOffset // (Net|Exec|Event|NetResponse|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a64c0
	void SetDefaultShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity // (Net|NetReliableNetRequest|Event|NetResponse|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a64c0
	void SetDefaultFont(struct FSlateFontInfo InFontInfo); // Function UMG.RichTextBlock.SetDefaultFont // (NetReliableEvent|NetResponse|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a64c0
	void SetDefaultColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultColorAndOpacity // (Net|NetReliableNetRequest|Exec|Native|NetResponse|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a64c0
	void SetAutoWrapText(bool InAutoTextWrap); // Function UMG.RichTextBlock.SetAutoWrapText // (NetReliableExec|Native|NetResponse|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a64c0
	struct FText GetText(); // Function UMG.RichTextBlock.GetText // (NetReliableExec|Event|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a64c0
	struct URichTextBlockDecorator* GetDecoratorByClass(struct URichTextBlockDecorator* DecoratorClass); // Function UMG.RichTextBlock.GetDecoratorByClass // (Event|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a64c0
	void ClearAllDefaultStyleOverrides(); // Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides // (Net|NetRequest|Exec|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a64c0
};

// Class UMG.TileView
// Size: 0x970 (Inherited: 0x950)
struct UTileView : UListView {
	float EntryHeight; // 0x950(0x04)
	float EntryWidth; // 0x954(0x04)
	enum class EListItemAlignment TileAlignment; // 0x958(0x01)
	bool bWrapHorizontalNavigation; // 0x959(0x01)
	char pad_95A[0x16]; // 0x95a(0x16)

	void SetEntryWidth(float NewWidth); // Function UMG.TileView.SetEntryWidth // (NetReliableNetRequest|Exec|Native|Event|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a52c0
	void SetEntryHeight(float NewHeight); // Function UMG.TileView.SetEntryHeight // (NetRequest|Exec|Native|Event|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a5740
};

// Class UMG.TreeView
// Size: 0x9a8 (Inherited: 0x950)
struct UTreeView : UListView {
	char pad_950[0x10]; // 0x950(0x10)
	struct FDelegate BP_OnGetItemChildren; // 0x960(0x10)
	struct FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0x970(0x10)
	char pad_980[0x28]; // 0x980(0x28)

	void SetItemExpansion(struct UObject* Item, bool bExpandItem); // Function UMG.TreeView.SetItemExpansion // (NetReliableExec|NetResponse|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ad9c0
	void ExpandAll(); // Function UMG.TreeView.ExpandAll // (Net|NetReliableExec|Native|Event|NetResponse|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a52c0
	void CollapseAll(); // Function UMG.TreeView.CollapseAll // (Exec|Native|Event|NetResponse|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a52c0
};

// Class UMG.Overlay
// Size: 0x160 (Inherited: 0x150)
struct UOverlay : UPanelWidget {
	char pad_150[0x10]; // 0x150(0x10)

	struct UOverlaySlot* AddChildToOverlay(struct UWidget* Content); // Function UMG.Overlay.AddChildToOverlay // (NetRequest|Native|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ace80
};

// Class UMG.OverlaySlot
// Size: 0x58 (Inherited: 0x38)
struct UOverlaySlot : UPanelSlot {
	char pad_38[0x8]; // 0x38(0x08)
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.OverlaySlot.SetVerticalAlignment // (Net|NetReliableNetRequest|Event|NetResponse|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ac580
	void SetPadding(struct FMargin InPadding); // Function UMG.OverlaySlot.SetPadding // (Native|NetResponse|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ac7c0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.OverlaySlot.SetHorizontalAlignment // (Net|NetReliableNetRequest|NetResponse|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ac7c0
};

// Class UMG.SizeBox
// Size: 0x188 (Inherited: 0x150)
struct USizeBox : UContentWidget {
	char pad_150[0x10]; // 0x150(0x10)
	float WidthOverride; // 0x160(0x04)
	float HeightOverride; // 0x164(0x04)
	float MinDesiredWidth; // 0x168(0x04)
	float MinDesiredHeight; // 0x16c(0x04)
	float MaxDesiredWidth; // 0x170(0x04)
	float MaxDesiredHeight; // 0x174(0x04)
	float MinAspectRatio; // 0x178(0x04)
	float MaxAspectRatio; // 0x17c(0x04)
	char bOverride_WidthOverride : 1; // 0x180(0x01)
	char bOverride_HeightOverride : 1; // 0x180(0x01)
	char bOverride_MinDesiredWidth : 1; // 0x180(0x01)
	char bOverride_MinDesiredHeight : 1; // 0x180(0x01)
	char bOverride_MaxDesiredWidth : 1; // 0x180(0x01)
	char bOverride_MaxDesiredHeight : 1; // 0x180(0x01)
	char bOverride_MinAspectRatio : 1; // 0x180(0x01)
	char bOverride_MaxAspectRatio : 1; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)

	void SetWidthOverride(float InWidthOverride); // Function UMG.SizeBox.SetWidthOverride // (NetRequest|Native|Event|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314abec0
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.SizeBox.SetMinDesiredWidth // (Exec|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ac100
	void SetMinDesiredHeight(float InMinDesiredHeight); // Function UMG.SizeBox.SetMinDesiredHeight // (NetRequest|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ac100
	void SetMinAspectRatio(float InMinAspectRatio); // Function UMG.SizeBox.SetMinAspectRatio // (NetReliableNetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ac100
	void SetMaxDesiredWidth(float InMaxDesiredWidth); // Function UMG.SizeBox.SetMaxDesiredWidth // (NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ac100
	void SetMaxDesiredHeight(float InMaxDesiredHeight); // Function UMG.SizeBox.SetMaxDesiredHeight // (NetReliableNetRequest|Exec|Native|Event|NetResponse|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ac100
	void SetMaxAspectRatio(float InMaxAspectRatio); // Function UMG.SizeBox.SetMaxAspectRatio // (NetRequest|Exec|Native|Event|NetResponse|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ac100
	void SetHeightOverride(float InHeightOverride); // Function UMG.SizeBox.SetHeightOverride // (NetRequest|Native|Event|NetResponse|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ac100
	void ClearWidthOverride(); // Function UMG.SizeBox.ClearWidthOverride // (Net|Native|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ac100
	void ClearMinDesiredWidth(); // Function UMG.SizeBox.ClearMinDesiredWidth // (Native|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ac100
	void ClearMinDesiredHeight(); // Function UMG.SizeBox.ClearMinDesiredHeight // (Native|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ac100
	void ClearMinAspectRatio(); // Function UMG.SizeBox.ClearMinAspectRatio // (Net|NetReliableNetRequest|Exec|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ac100
	void ClearMaxDesiredWidth(); // Function UMG.SizeBox.ClearMaxDesiredWidth // (Net|NetReliableNetRequest|Exec|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ac100
	void ClearMaxDesiredHeight(); // Function UMG.SizeBox.ClearMaxDesiredHeight // (NetReliableNetRequest|Exec|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ac100
	void ClearMaxAspectRatio(); // Function UMG.SizeBox.ClearMaxAspectRatio // (NetReliableNetRequest|Exec|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ac100
	void ClearHeightOverride(); // Function UMG.SizeBox.ClearHeightOverride // (Net|NetRequest|Exec|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ac100
};

// Class UMG.NamedSlot
// Size: 0x160 (Inherited: 0x150)
struct UNamedSlot : UContentWidget {
	char pad_150[0x10]; // 0x150(0x10)
};

// Class UMG.CanvasPanel
// Size: 0x168 (Inherited: 0x150)
struct UCanvasPanel : UPanelWidget {
	int32_t ReservedLayerSpace; // 0x150(0x04)
	char pad_154[0x14]; // 0x154(0x14)

	struct UCanvasPanelSlot* AddChildToCanvas(struct UWidget* Content); // Function UMG.CanvasPanel.AddChildToCanvas // (NetReliableNetRequest|Exec|Native|Event|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f3156af00
};

// Class UMG.RichTextBlockDecorator
// Size: 0x28 (Inherited: 0x28)
struct URichTextBlockDecorator : UObject {
};

// Class UMG.CheckBox
// Size: 0x830 (Inherited: 0x150)
struct UCheckBox : UContentWidget {
	enum class ECheckBoxState CheckedState; // 0x150(0x01)
	char pad_151[0x3]; // 0x151(0x03)
	struct FDelegate CheckedStateDelegate; // 0x154(0x10)
	char pad_164[0x4]; // 0x164(0x04)
	struct FCheckBoxStyle WidgetStyle; // 0x168(0x610)
	struct USlateWidgetStyleAsset* Style; // 0x778(0x08)
	struct USlateBrushAsset* UncheckedImage; // 0x780(0x08)
	struct USlateBrushAsset* UncheckedHoveredImage; // 0x788(0x08)
	struct USlateBrushAsset* UncheckedPressedImage; // 0x790(0x08)
	struct USlateBrushAsset* CheckedImage; // 0x798(0x08)
	struct USlateBrushAsset* CheckedHoveredImage; // 0x7a0(0x08)
	struct USlateBrushAsset* CheckedPressedImage; // 0x7a8(0x08)
	struct USlateBrushAsset* UndeterminedImage; // 0x7b0(0x08)
	struct USlateBrushAsset* UndeterminedHoveredImage; // 0x7b8(0x08)
	struct USlateBrushAsset* UndeterminedPressedImage; // 0x7c0(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x7c8(0x01)
	char pad_7C9[0x3]; // 0x7c9(0x03)
	struct FMargin Padding; // 0x7cc(0x10)
	char pad_7DC[0x4]; // 0x7dc(0x04)
	struct FSlateColor BorderBackgroundColor; // 0x7e0(0x28)
	enum class EButtonClickMethod ClickMethod; // 0x808(0x01)
	enum class EButtonTouchMethod TouchMethod; // 0x809(0x01)
	enum class EButtonPressMethod PressMethod; // 0x80a(0x01)
	bool IsFocusable; // 0x80b(0x01)
	char pad_80C[0x4]; // 0x80c(0x04)
	struct FMulticastInlineDelegate OnCheckStateChanged; // 0x810(0x10)
	char pad_820[0x10]; // 0x820(0x10)

	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function UMG.CheckBox.SetTouchMethod // (NetRequest|Native|Event|Static|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f315b9880
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // Function UMG.CheckBox.SetPressMethod // (Net|Exec|Event|Static|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f315b9640
	void SetIsChecked(bool InIsChecked); // Function UMG.CheckBox.SetIsChecked // (NetRequest|Static|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f315b9640
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Function UMG.CheckBox.SetClickMethod // (NetRequest|Native|Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f315b9640
	void SetCheckedState(enum class ECheckBoxState InCheckedState); // Function UMG.CheckBox.SetCheckedState // (Native|Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f315b9640
	bool IsPressed(); // Function UMG.CheckBox.IsPressed // (Net|NetReliableNative|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f315b9640
	bool IsChecked(); // Function UMG.CheckBox.IsChecked // (NetReliableNative|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f315b9640
	enum class ECheckBoxState GetCheckedState(); // Function UMG.CheckBox.GetCheckedState // (Net|NetReliableNetRequest|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f315b9640
};

// Class UMG.DragDropOperation
// Size: 0x88 (Inherited: 0x28)
struct UDragDropOperation : UObject {
	struct FString Tag; // 0x28(0x10)
	struct UObject* Payload; // 0x38(0x08)
	struct UWidget* DefaultDragVisual; // 0x40(0x08)
	enum class EDragPivot Pivot; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FVector2D Offset; // 0x4c(0x08)
	char pad_54[0x4]; // 0x54(0x04)
	struct FMulticastInlineDelegate OnDrop; // 0x58(0x10)
	struct FMulticastInlineDelegate OnDragCancelled; // 0x68(0x10)
	struct FMulticastInlineDelegate OnDragged; // 0x78(0x10)

	void Drop(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.Drop // (NetReliableNetRequest|Native|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f315c1f00
	void Dragged(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.Dragged // (Net|Native|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f315c2140
	void DragCancelled(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.DragCancelled // (NetRequest|Exec|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f315c2140
};

// Class UMG.WidgetComponent
// Size: 0x6a0 (Inherited: 0x580)
struct UWidgetComponent : UMeshComponent {
	enum class EWidgetSpace Space; // 0x578(0x01)
	enum class EWidgetTimingPolicy TimingPolicy; // 0x579(0x01)
	struct UUserWidget* WidgetClass; // 0x580(0x08)
	struct FIntPoint DrawSize; // 0x588(0x08)
	bool bManuallyRedraw; // 0x590(0x01)
	bool bRedrawRequested; // 0x591(0x01)
	float RedrawTime; // 0x594(0x04)
	char pad_598[0x8]; // 0x598(0x08)
	struct FIntPoint CurrentDrawSize; // 0x5a0(0x08)
	bool bDrawAtDesiredSize; // 0x5a8(0x01)
	char pad_5A9[0x3]; // 0x5a9(0x03)
	struct FVector2D Pivot; // 0x5ac(0x08)
	bool bReceiveHardwareInput; // 0x5b4(0x01)
	bool bWindowFocusable; // 0x5b5(0x01)
	enum class EWindowVisibility WindowVisibility; // 0x5b6(0x01)
	bool bApplyGammaCorrection; // 0x5b7(0x01)
	struct ULocalPlayer* OwnerPlayer; // 0x5b8(0x08)
	struct FLinearColor BackgroundColor; // 0x5c0(0x10)
	struct FLinearColor TintColorAndOpacity; // 0x5d0(0x10)
	float OpacityFromTexture; // 0x5e0(0x04)
	enum class EWidgetBlendMode BlendMode; // 0x5e4(0x01)
	bool bIsTwoSided; // 0x5e5(0x01)
	bool TickWhenOffscreen; // 0x5e6(0x01)
	char pad_5E7[0x1]; // 0x5e7(0x01)
	struct UUserWidget* Widget; // 0x5e8(0x08)
	char pad_5F0[0x20]; // 0x5f0(0x20)
	struct UBodySetup* BodySetup; // 0x610(0x08)
	struct UMaterialInterface* TranslucentMaterial; // 0x618(0x08)
	struct UMaterialInterface* TranslucentMaterial_OneSided; // 0x620(0x08)
	struct UMaterialInterface* OpaqueMaterial; // 0x628(0x08)
	struct UMaterialInterface* OpaqueMaterial_OneSided; // 0x630(0x08)
	struct UMaterialInterface* MaskedMaterial; // 0x638(0x08)
	struct UMaterialInterface* MaskedMaterial_OneSided; // 0x640(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0x648(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x650(0x08)
	bool bAddedToScreen; // 0x658(0x01)
	bool bEditTimeUsable; // 0x659(0x01)
	char pad_65A[0x2]; // 0x65a(0x02)
	struct FName SharedLayerName; // 0x65c(0x08)
	int32_t LayerZOrder; // 0x664(0x04)
	enum class EWidgetGeometryMode GeometryMode; // 0x668(0x01)
	char pad_669[0x3]; // 0x669(0x03)
	float CylinderArcAngle; // 0x66c(0x04)
	char pad_670[0x30]; // 0x670(0x30)

	void SetWindowVisibility(enum class EWindowVisibility InVisibility); // Function UMG.WidgetComponent.SetWindowVisibility // (Exec|Native|Static|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316576c0
	void SetWindowFocusable(bool bInWindowFocusable); // Function UMG.WidgetComponent.SetWindowFocusable // (Net|NetReliableExec|Static|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	void SetWidgetSpace(enum class EWidgetSpace NewSpace); // Function UMG.WidgetComponent.SetWidgetSpace // (Net|Exec|Static|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	void SetWidget(struct UUserWidget* Widget); // Function UMG.WidgetComponent.SetWidget // (Net|NetReliableNetRequest|Static|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	void SetTwoSided(bool bWantTwoSided); // Function UMG.WidgetComponent.SetTwoSided // (Net|NetRequest|Static|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	void SetTintColorAndOpacity(struct FLinearColor NewTintColorAndOpacity); // Function UMG.WidgetComponent.SetTintColorAndOpacity // (Net|NetReliableStatic|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen); // Function UMG.WidgetComponent.SetTickWhenOffscreen // (Net|Static|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	void SetRedrawTime(float InRedrawTime); // Function UMG.WidgetComponent.SetRedrawTime // (Net|NetReliableNetRequest|Exec|Native|Event|NetResponse|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	void SetPivot(struct FVector2D& InPivot); // Function UMG.WidgetComponent.SetPivot // (Net|NetRequest|Exec|Native|Event|NetResponse|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	void SetOwnerPlayer(struct ULocalPlayer* LocalPlayer); // Function UMG.WidgetComponent.SetOwnerPlayer // (Net|NetReliableExec|Native|Event|NetResponse|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	void SetManuallyRedraw(bool bUseManualRedraw); // Function UMG.WidgetComponent.SetManuallyRedraw // (NetRequest|Native|Event|NetResponse|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	void SetGeometryMode(enum class EWidgetGeometryMode InGeometryMode); // Function UMG.WidgetComponent.SetGeometryMode // (NetReliableExec|Native|NetResponse|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	void SetDrawSize(struct FVector2D Size); // Function UMG.WidgetComponent.SetDrawSize // (Net|NetReliableNetRequest|Native|NetResponse|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize); // Function UMG.WidgetComponent.SetDrawAtDesiredSize // (Net|NetRequest|Native|NetResponse|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	void SetCylinderArcAngle(float InCylinderArcAngle); // Function UMG.WidgetComponent.SetCylinderArcAngle // (Net|NetReliableNative|NetResponse|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	void SetBackgroundColor(struct FLinearColor NewBackgroundColor); // Function UMG.WidgetComponent.SetBackgroundColor // (Net|NetRequest|NetResponse|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	void RequestRedraw(); // Function UMG.WidgetComponent.RequestRedraw // (NetReliableNetRequest|Exec|Static|NetMulticast|UbergraphFunction|Public|NetServer|HasDefaults|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	enum class EWindowVisibility GetWindowVisiblility(); // Function UMG.WidgetComponent.GetWindowVisiblility // (Net|NetRequest|Event|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	bool GetWindowFocusable(); // Function UMG.WidgetComponent.GetWindowFocusable // (Net|NetRequest|Event|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	enum class EWidgetSpace GetWidgetSpace(); // Function UMG.WidgetComponent.GetWidgetSpace // (NetRequest|Event|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	struct UUserWidget* GetUserWidgetObject(); // Function UMG.WidgetComponent.GetUserWidgetObject // (NetRequest|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Delegate|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	bool GetTwoSided(); // Function UMG.WidgetComponent.GetTwoSided // (Net|NetReliableEvent|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	bool GetTickWhenOffscreen(); // Function UMG.WidgetComponent.GetTickWhenOffscreen // (NetReliableEvent|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	struct UTextureRenderTarget2D* GetRenderTarget(); // Function UMG.WidgetComponent.GetRenderTarget // (Net|NetRequest|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Delegate|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	float GetRedrawTime(); // Function UMG.WidgetComponent.GetRedrawTime // (NetRequest|Exec|Native|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	struct FVector2D GetPivot(); // Function UMG.WidgetComponent.GetPivot // (Net|NetReliableExec|Native|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	struct ULocalPlayer* GetOwnerPlayer(); // Function UMG.WidgetComponent.GetOwnerPlayer // (Net|NetReliableExec|Native|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	struct UMaterialInstanceDynamic* GetMaterialInstance(); // Function UMG.WidgetComponent.GetMaterialInstance // (NetReliableExec|Native|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	bool GetManuallyRedraw(); // Function UMG.WidgetComponent.GetManuallyRedraw // (Net|Exec|Native|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	enum class EWidgetGeometryMode GetGeometryMode(); // Function UMG.WidgetComponent.GetGeometryMode // (NetReliableDelegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	struct FVector2D GetDrawSize(); // Function UMG.WidgetComponent.GetDrawSize // (Net|NetReliableExec|Native|Event|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	bool GetDrawAtDesiredSize(); // Function UMG.WidgetComponent.GetDrawAtDesiredSize // (NetReliableExec|Native|Event|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	float GetCylinderArcAngle(); // Function UMG.WidgetComponent.GetCylinderArcAngle // (Net|Exec|Native|Event|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
	struct FVector2D GetCurrentDrawSize(); // Function UMG.WidgetComponent.GetCurrentDrawSize // (Exec|Native|Event|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31657900
};

// Class UMG.AsyncTaskDownloadImage
// Size: 0x50 (Inherited: 0x30)
struct UAsyncTaskDownloadImage : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)

	struct UAsyncTaskDownloadImage* DownloadImage(struct FString URL); // Function UMG.AsyncTaskDownloadImage.DownloadImage // (Net|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fba40
};

// Class UMG.BackgroundBlur
// Size: 0x228 (Inherited: 0x150)
struct UBackgroundBlur : UContentWidget {
	struct FMargin Padding; // 0x150(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x160(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x161(0x01)
	bool bBlurOnce; // 0x162(0x01)
	bool bBlurState; // 0x163(0x01)
	bool bApplyAlphaToBlur; // 0x164(0x01)
	char pad_165[0x3]; // 0x165(0x03)
	float BlurStrength; // 0x168(0x04)
	bool bOverrideAutoRadiusCalculation; // 0x16c(0x01)
	char pad_16D[0x3]; // 0x16d(0x03)
	int32_t BlurRadius; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct FSlateBrush LowQualityFallbackBrush; // 0x178(0x98)
	char pad_210[0x18]; // 0x210(0x18)

	void StopOnFirstBlur(); // Function UMG.BackgroundBlur.StopOnFirstBlur // (NetResponse|Static|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fb800
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BackgroundBlur.SetVerticalAlignment // (NetReliableNetRequest|Native|Event|Static|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fba40
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlur.SetPadding // (Net|NetReliableNetRequest|Native|Static|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fba40
	void SetLowQualityFallbackBrush(struct FSlateBrush& InBrush); // Function UMG.BackgroundBlur.SetLowQualityFallbackBrush // (Net|Exec|Static|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fba40
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BackgroundBlur.SetHorizontalAlignment // (NetRequest|Exec|Native|Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fba40
	void SetBlurStrength(float InStrength); // Function UMG.BackgroundBlur.SetBlurStrength // (Net|NetRequest|NetResponse|UbergraphFunction|Protected|NetServer|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fba40
	void SetBlurState(bool BlurState, bool RefreshCount); // Function UMG.BackgroundBlur.SetBlurState // (Net|Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fba40
	void SetBlurRadius(int32_t InBlurRadius); // Function UMG.BackgroundBlur.SetBlurRadius // (Net|NetReliableNetRequest|Exec|Native|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fba40
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur); // Function UMG.BackgroundBlur.SetApplyAlphaToBlur // (Exec|Native|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fba40
};

// Class UMG.BackgroundBlurSlot
// Size: 0x60 (Inherited: 0x38)
struct UBackgroundBlurSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BackgroundBlurSlot.SetVerticalAlignment // (Exec|Native|Event|Static|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fb5c0
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlurSlot.SetPadding // (NetReliableExec|Native|Static|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fb800
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BackgroundBlurSlot.SetHorizontalAlignment // (NetReliableNetRequest|Exec|Native|Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fb800
};

// Class UMG.PropertyBinding
// Size: 0x60 (Inherited: 0x28)
struct UPropertyBinding : UObject {
	struct TWeakObjectPtr<struct UObject> SourceObject; // 0x28(0x08)
	struct FDynamicPropertyPath SourcePath; // 0x30(0x28)
	struct FName DestinationProperty; // 0x58(0x08)
};

// Class UMG.BoolBinding
// Size: 0x60 (Inherited: 0x60)
struct UBoolBinding : UPropertyBinding {

	bool GetValue(); // Function UMG.BoolBinding.GetValue // (Net|NetRequest|Exec|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fb140
};

// Class UMG.BorderSlot
// Size: 0x60 (Inherited: 0x38)
struct UBorderSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BorderSlot.SetVerticalAlignment // (NetRequest|Exec|Native|Event|Static|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316faf00
	void SetPadding(struct FMargin InPadding); // Function UMG.BorderSlot.SetPadding // (NetReliableNetRequest|Exec|Native|Static|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fb140
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BorderSlot.SetHorizontalAlignment // (NetReliableStatic|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fb140
};

// Class UMG.BrushBinding
// Size: 0x68 (Inherited: 0x60)
struct UBrushBinding : UPropertyBinding {
	char pad_60[0x8]; // 0x60(0x08)

	struct FSlateBrush GetValue(); // Function UMG.BrushBinding.GetValue // (Net|NetRequest|Exec|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316facc0
};

// Class UMG.ButtonSlot
// Size: 0x60 (Inherited: 0x38)
struct UButtonSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ButtonSlot.SetVerticalAlignment // (Net|NetRequest|Native|Event|NetResponse|Static|MulticastDelegate|Private|Protected|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316faa80
	void SetPadding(struct FMargin InPadding); // Function UMG.ButtonSlot.SetPadding // (Event|Static|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316facc0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ButtonSlot.SetHorizontalAlignment // (Exec|Event|NetResponse|Static|MulticastDelegate|Private|Protected|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316facc0
};

// Class UMG.CanvasPanelSlot
// Size: 0x78 (Inherited: 0x38)
struct UCanvasPanelSlot : UPanelSlot {
	struct FAnchorData LayoutData; // 0x38(0x2c)
	bool bAutoSize; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	int32_t ZOrder; // 0x68(0x04)
	char pad_6C[0xc]; // 0x6c(0x0c)

	void SetZOrder(int32_t InZOrder); // Function UMG.CanvasPanelSlot.SetZOrder // (NetReliableNetRequest|Exec|Native|Event|Static|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fa840
	void SetSize(struct FVector2D InSize); // Function UMG.CanvasPanelSlot.SetSize // (Net|NetRequest|Exec|Event|Static|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316faa80
	void SetPosition(struct FVector2D InPosition); // Function UMG.CanvasPanelSlot.SetPosition // (Net|NetRequest|Event|Static|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316faa80
	void SetOffsets(struct FMargin InOffset); // Function UMG.CanvasPanelSlot.SetOffsets // (Net|NetRequest|Native|Static|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316faa80
	void SetMinimum(struct FVector2D InMinimumAnchors); // Function UMG.CanvasPanelSlot.SetMinimum // (Net|Native|Static|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316faa80
	void SetMaximum(struct FVector2D InMaximumAnchors); // Function UMG.CanvasPanelSlot.SetMaximum // (Net|NetReliableNetRequest|Exec|Static|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316faa80
	void SetLayout(struct FAnchorData& InLayoutData); // Function UMG.CanvasPanelSlot.SetLayout // (NetReliableNetRequest|Static|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316faa80
	void SetAutoSize(bool InbAutoSize); // Function UMG.CanvasPanelSlot.SetAutoSize // (NetReliableExec|Native|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316faa80
	void SetAnchors(struct FAnchors InAnchors); // Function UMG.CanvasPanelSlot.SetAnchors // (NetReliableNetRequest|Native|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316faa80
	void SetAlignment(struct FVector2D InAlignment); // Function UMG.CanvasPanelSlot.SetAlignment // (NetRequest|Native|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316faa80
	int32_t GetZOrder(); // Function UMG.CanvasPanelSlot.GetZOrder // (Net|Native|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316faa80
	struct FVector2D GetSize(); // Function UMG.CanvasPanelSlot.GetSize // (NetRequest|Exec|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316faa80
	struct FVector2D GetPosition(); // Function UMG.CanvasPanelSlot.GetPosition // (Net|NetReliableExec|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316faa80
	struct FMargin GetOffsets(); // Function UMG.CanvasPanelSlot.GetOffsets // (NetReliableExec|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316faa80
	struct FAnchorData GetLayout(); // Function UMG.CanvasPanelSlot.GetLayout // (Exec|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316faa80
	bool GetAutoSize(); // Function UMG.CanvasPanelSlot.GetAutoSize // (NetReliableNetRequest|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316faa80
	struct FAnchors GetAnchors(); // Function UMG.CanvasPanelSlot.GetAnchors // (Net|NetRequest|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316faa80
	struct FVector2D GetAlignment(); // Function UMG.CanvasPanelSlot.GetAlignment // (NetRequest|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316faa80
};

// Class UMG.CheckedStateBinding
// Size: 0x68 (Inherited: 0x60)
struct UCheckedStateBinding : UPropertyBinding {
	char pad_60[0x8]; // 0x60(0x08)

	enum class ECheckBoxState GetValue(); // Function UMG.CheckedStateBinding.GetValue // (Native|NetResponse|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fa600
};

// Class UMG.CircularThrobber
// Size: 0x200 (Inherited: 0x138)
struct UCircularThrobber : UWidget {
	int32_t NumberOfPieces; // 0x138(0x04)
	float Period; // 0x13c(0x04)
	float Radius; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	struct USlateBrushAsset* PieceImage; // 0x148(0x08)
	struct FSlateBrush Image; // 0x150(0x98)
	bool bEnableRadius; // 0x1e8(0x01)
	char pad_1E9[0x17]; // 0x1e9(0x17)

	void SetRadius(float InRadius); // Function UMG.CircularThrobber.SetRadius // (Net|NetReliableExec|Event|Static|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fa3c0
	void SetPeriod(float InPeriod); // Function UMG.CircularThrobber.SetPeriod // (Net|NetReliableEvent|Static|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fa600
	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.CircularThrobber.SetNumberOfPieces // (Net|NetReliableNative|Static|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fa600
};

// Class UMG.ColorBinding
// Size: 0x68 (Inherited: 0x60)
struct UColorBinding : UPropertyBinding {
	char pad_60[0x8]; // 0x60(0x08)

	struct FSlateColor GetSlateValue(); // Function UMG.ColorBinding.GetSlateValue // (NetReliableExec|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9d00
	struct FLinearColor GetLinearValue(); // Function UMG.ColorBinding.GetLinearValue // (NetReliableEvent|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fa3c0
};

// Class UMG.ComboBox
// Size: 0x170 (Inherited: 0x138)
struct UComboBox : UWidget {
	struct TArray<struct UObject*> Items; // 0x138(0x10)
	struct FDelegate OnGenerateWidgetEvent; // 0x148(0x10)
	bool bIsFocusable; // 0x158(0x01)
	char pad_159[0x17]; // 0x159(0x17)
};

// Class UMG.ComboBoxString
// Size: 0xf70 (Inherited: 0x138)
struct UComboBoxString : UWidget {
	struct TArray<struct FString> DefaultOptions; // 0x138(0x10)
	struct FString SelectedOption; // 0x148(0x10)
	struct FComboBoxStyle WidgetStyle; // 0x158(0x450)
	struct FTableRowStyle ItemStyle; // 0x5a8(0x8a8)
	struct FMargin ContentPadding; // 0xe50(0x10)
	float MaxListHeight; // 0xe60(0x04)
	bool HasDownArrow; // 0xe64(0x01)
	bool EnableGamepadNavigationMode; // 0xe65(0x01)
	char pad_E66[0x2]; // 0xe66(0x02)
	struct FSlateFontInfo Font; // 0xe68(0x58)
	struct FSlateColor ForegroundColor; // 0xec0(0x28)
	bool bIsFocusable; // 0xee8(0x01)
	char pad_EE9[0x3]; // 0xee9(0x03)
	struct FDelegate OnGenerateWidgetEvent; // 0xeec(0x10)
	char pad_EFC[0x4]; // 0xefc(0x04)
	struct FMulticastInlineDelegate OnSelectionChanged; // 0xf00(0x10)
	struct FMulticastInlineDelegate OnOpening; // 0xf10(0x10)
	char pad_F20[0x50]; // 0xf20(0x50)

	void SetSelectedOption(struct FString Option); // Function UMG.ComboBoxString.SetSelectedOption // (NetRequest|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32813730
	void SetSelectedIndex(int32_t Index); // Function UMG.ComboBoxString.SetSelectedIndex // (NetReliableEvent|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9f40
	bool RemoveOption(struct FString Option); // Function UMG.ComboBoxString.RemoveOption // (NetReliableNetRequest|Native|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9f40
	void RefreshOptions(); // Function UMG.ComboBoxString.RefreshOptions // (Net|NetReliableNative|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9f40
	void OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32813730
	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9f40
	bool IsOpen(); // Function UMG.ComboBoxString.IsOpen // (Net|NetReliableNative|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9f40
	struct FString GetSelectedOption(); // Function UMG.ComboBoxString.GetSelectedOption // (Exec|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9f40
	int32_t GetSelectedIndex(); // Function UMG.ComboBoxString.GetSelectedIndex // (Exec|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9f40
	int32_t GetOptionCount(); // Function UMG.ComboBoxString.GetOptionCount // (Net|NetReliableNetRequest|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9f40
	struct FString GetOptionAtIndex(int32_t Index); // Function UMG.ComboBoxString.GetOptionAtIndex // (NetRequest|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9f40
	int32_t FindOptionIndex(struct FString Option); // Function UMG.ComboBoxString.FindOptionIndex // (Net|NetReliableExec|Native|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9f40
	void ClearSelection(); // Function UMG.ComboBoxString.ClearSelection // (NetRequest|Exec|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9f40
	void ClearOptions(); // Function UMG.ComboBoxString.ClearOptions // (Net|NetReliableExec|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9f40
	void AddOption(struct FString Option); // Function UMG.ComboBoxString.AddOption // (Net|NetRequest|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9f40
};

// Class UMG.DynamicEntryBox
// Size: 0x200 (Inherited: 0x1f8)
struct UDynamicEntryBox : UDynamicEntryBoxBase {
	struct UUserWidget* EntryWidgetClass; // 0x1f8(0x08)

	void Reset(bool bDeleteWidgets); // Function UMG.DynamicEntryBox.Reset // (Net|Exec|Native|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9640
	void RemoveEntry(struct UUserWidget* EntryWidget); // Function UMG.DynamicEntryBox.RemoveEntry // (NetRequest|Native|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9d00
	struct UUserWidget* BP_CreateEntryOfClass(struct UUserWidget* EntryClass); // Function UMG.DynamicEntryBox.BP_CreateEntryOfClass // (Net|Exec|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9d00
	struct UUserWidget* BP_CreateEntry(); // Function UMG.DynamicEntryBox.BP_CreateEntry // (Exec|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9d00
};

// Class UMG.EditableText
// Size: 0x4c0 (Inherited: 0x138)
struct UEditableText : UWidget {
	struct FText Text; // 0x138(0x18)
	struct FDelegate TextDelegate; // 0x150(0x10)
	struct FText HintText; // 0x160(0x18)
	struct FDelegate HintTextDelegate; // 0x178(0x10)
	struct FEditableTextStyle WidgetStyle; // 0x188(0x250)
	struct USlateWidgetStyleAsset* Style; // 0x3d8(0x08)
	struct USlateBrushAsset* BackgroundImageSelected; // 0x3e0(0x08)
	struct USlateBrushAsset* BackgroundImageComposing; // 0x3e8(0x08)
	struct USlateBrushAsset* CaretImage; // 0x3f0(0x08)
	struct FSlateFontInfo Font; // 0x3f8(0x58)
	struct FSlateColor ColorAndOpacity; // 0x450(0x28)
	bool IsReadOnly; // 0x478(0x01)
	bool IsPassword; // 0x479(0x01)
	char pad_47A[0x2]; // 0x47a(0x02)
	float MinimumDesiredWidth; // 0x47c(0x04)
	bool IsCaretMovedWhenGainFocus; // 0x480(0x01)
	bool SelectAllTextWhenFocused; // 0x481(0x01)
	bool RevertTextOnEscape; // 0x482(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x483(0x01)
	bool SelectAllTextOnCommit; // 0x484(0x01)
	bool AllowContextMenu; // 0x485(0x01)
	enum class EVirtualKeyboardType KeyboardType; // 0x486(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x487(0x01)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x488(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x489(0x01)
	enum class ETextJustify Justification; // 0x48a(0x01)
	struct FShapedTextOptions ShapedTextOptions; // 0x48b(0x03)
	char pad_48E[0x2]; // 0x48e(0x02)
	struct FMulticastInlineDelegate OnTextChanged; // 0x490(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x4a0(0x10)
	char pad_4B0[0x10]; // 0x4b0(0x10)

	void SetText(struct FText InText); // Function UMG.EditableText.SetText // (Net|NetReliableNetRequest|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810460
	void SetJustification(enum class ETextJustify InJustification); // Function UMG.EditableText.SetJustification // (Net|NetReliableExec|Native|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f328137d0
	void SetIsReadOnly(bool InbIsReadyOnly); // Function UMG.EditableText.SetIsReadOnly // (NetReliableNetRequest|Native|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9ac0
	void SetIsPassword(bool InbIsPassword); // Function UMG.EditableText.SetIsPassword // (NetReliableNative|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9ac0
	void SetHintText(struct FText InHintText); // Function UMG.EditableText.SetHintText // (NetReliableNetRequest|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9ac0
	void OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32813730
	void OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9ac0
	struct FText GetText(); // Function UMG.EditableText.GetText // (NetRequest|Exec|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9ac0
};

// Class UMG.EditableTextBox
// Size: 0xb38 (Inherited: 0x138)
struct UEditableTextBox : UWidget {
	struct FText Text; // 0x138(0x18)
	struct FDelegate TextDelegate; // 0x150(0x10)
	struct FEditableTextBoxStyle WidgetStyle; // 0x160(0x8c8)
	struct USlateWidgetStyleAsset* Style; // 0xa28(0x08)
	struct FText HintText; // 0xa30(0x18)
	struct FDelegate HintTextDelegate; // 0xa48(0x10)
	struct FSlateFontInfo Font; // 0xa58(0x58)
	struct FLinearColor ForegroundColor; // 0xab0(0x10)
	struct FLinearColor BackgroundColor; // 0xac0(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xad0(0x10)
	bool IsReadOnly; // 0xae0(0x01)
	bool IsPassword; // 0xae1(0x01)
	char pad_AE2[0x2]; // 0xae2(0x02)
	float MinimumDesiredWidth; // 0xae4(0x04)
	struct FMargin Padding; // 0xae8(0x10)
	bool IsCaretMovedWhenGainFocus; // 0xaf8(0x01)
	bool SelectAllTextWhenFocused; // 0xaf9(0x01)
	bool RevertTextOnEscape; // 0xafa(0x01)
	bool ClearKeyboardFocusOnCommit; // 0xafb(0x01)
	bool SelectAllTextOnCommit; // 0xafc(0x01)
	bool AllowContextMenu; // 0xafd(0x01)
	enum class EVirtualKeyboardType KeyboardType; // 0xafe(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xaff(0x01)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0xb00(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xb01(0x01)
	enum class ETextJustify Justification; // 0xb02(0x01)
	struct FShapedTextOptions ShapedTextOptions; // 0xb03(0x03)
	char pad_B06[0x2]; // 0xb06(0x02)
	struct FMulticastInlineDelegate OnTextChanged; // 0xb08(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xb18(0x10)
	char pad_B28[0x10]; // 0xb28(0x10)

	void SetText(struct FText InText); // Function UMG.EditableTextBox.SetText // (Net|NetReliableExec|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32813730
	void SetJustification(enum class ETextJustify InJustification); // Function UMG.EditableTextBox.SetJustification // (Net|NetRequest|Exec|Native|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9880
	void SetIsReadOnly(bool bReadOnly); // Function UMG.EditableTextBox.SetIsReadOnly // (Exec|Native|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9880
	void SetIsPassword(bool bIsPassword); // Function UMG.EditableTextBox.SetIsPassword // (NetRequest|Native|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9880
	void SetHintText(struct FText InText); // Function UMG.EditableTextBox.SetHintText // (NetReliableExec|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9880
	void SetError(struct FText InError); // Function UMG.EditableTextBox.SetError // (Net|NetReliableStatic|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9880
	void OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9880
	void OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9880
	bool HasError(); // Function UMG.EditableTextBox.HasError // (NetReliableNative|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9880
	struct FText GetText(); // Function UMG.EditableTextBox.GetText // (Net|NetReliableNetRequest|Exec|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9880
	void ClearError(); // Function UMG.EditableTextBox.ClearError // (Net|NetReliableExec|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9880
};

// Class UMG.ExpandableArea
// Size: 0x398 (Inherited: 0x138)
struct UExpandableArea : UWidget {
	char pad_138[0x8]; // 0x138(0x08)
	struct FExpandableAreaStyle Style; // 0x140(0x140)
	struct FSlateBrush BorderBrush; // 0x280(0x98)
	struct FSlateColor BorderColor; // 0x318(0x28)
	bool bIsExpanded; // 0x340(0x01)
	char pad_341[0x3]; // 0x341(0x03)
	float MaxHeight; // 0x344(0x04)
	struct FMargin HeaderPadding; // 0x348(0x10)
	struct FMargin AreaPadding; // 0x358(0x10)
	struct FMulticastInlineDelegate OnExpansionChanged; // 0x368(0x10)
	struct UWidget* HeaderContent; // 0x378(0x08)
	struct UWidget* BodyContent; // 0x380(0x08)
	char pad_388[0x10]; // 0x388(0x10)

	void SetIsExpanded_Animated(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded_Animated // (Net|NetReliableNetRequest|Exec|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ffdc0
	void SetIsExpanded(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded // (Net|NetRequest|Exec|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9640
	bool GetIsExpanded(); // Function UMG.ExpandableArea.GetIsExpanded // (Net|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316f9640
};

// Class UMG.FloatBinding
// Size: 0x60 (Inherited: 0x60)
struct UFloatBinding : UPropertyBinding {

	float GetValue(); // Function UMG.FloatBinding.GetValue // (Net|Native|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ffb80
};

// Class UMG.GridPanel
// Size: 0x180 (Inherited: 0x150)
struct UGridPanel : UPanelWidget {
	struct TArray<float> ColumnFill; // 0x150(0x10)
	struct TArray<float> RowFill; // 0x160(0x10)
	char pad_170[0x10]; // 0x170(0x10)

	void SetRowFill(int32_t ColumnIndex, float Coefficient); // Function UMG.GridPanel.SetRowFill // (Net|NetReliableNetRequest|Exec|Native|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ff940
	void SetColumnFill(int32_t ColumnIndex, float Coefficient); // Function UMG.GridPanel.SetColumnFill // (Net|NetReliableExec|Native|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ffb80
	struct UGridSlot* AddChildToGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn); // Function UMG.GridPanel.AddChildToGrid // (Net|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ffb80
};

// Class UMG.GridSlot
// Size: 0x70 (Inherited: 0x38)
struct UGridSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	int32_t Row; // 0x4c(0x04)
	int32_t RowSpan; // 0x50(0x04)
	int32_t Column; // 0x54(0x04)
	int32_t ColumnSpan; // 0x58(0x04)
	int32_t Layer; // 0x5c(0x04)
	struct FVector2D Nudge; // 0x60(0x08)
	char pad_68[0x8]; // 0x68(0x08)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.GridSlot.SetVerticalAlignment // (NetReliableExec|NetResponse|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ff700
	void SetRowSpan(int32_t InRowSpan); // Function UMG.GridSlot.SetRowSpan // (Net|NetReliableNative|Event|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ff940
	void SetRow(int32_t InRow); // Function UMG.GridSlot.SetRow // (Net|Native|Event|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ff940
	void SetPadding(struct FMargin InPadding); // Function UMG.GridSlot.SetPadding // (Net|NetRequest|Exec|Event|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ff940
	void SetNudge(struct FVector2D InNudge); // Function UMG.GridSlot.SetNudge // (Net|Exec|Event|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ff940
	void SetLayer(int32_t InLayer); // Function UMG.GridSlot.SetLayer // (Net|NetReliableEvent|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ff940
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.GridSlot.SetHorizontalAlignment // (NetRequest|Exec|Native|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ff940
	void SetColumnSpan(int32_t InColumnSpan); // Function UMG.GridSlot.SetColumnSpan // (Net|Native|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ff940
	void SetColumn(int32_t InColumn); // Function UMG.GridSlot.SetColumn // (Net|NetReliableNetRequest|Exec|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ff940
};

// Class UMG.HorizontalBox
// Size: 0x160 (Inherited: 0x150)
struct UHorizontalBox : UPanelWidget {
	char pad_150[0x10]; // 0x150(0x10)

	struct UHorizontalBoxSlot* AddChildToHorizontalBox(struct UWidget* Content); // Function UMG.HorizontalBox.AddChildToHorizontalBox // (Net|NetReliableNetRequest|Exec|Native|Event|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ff4c0
};

// Class UMG.HorizontalBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UHorizontalBoxSlot : UPanelSlot {
	char pad_38[0x8]; // 0x38(0x08)
	struct FMargin Padding; // 0x40(0x10)
	struct FSlateChildSize Size; // 0x50(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.HorizontalBoxSlot.SetVerticalAlignment // (NetRequest|Exec|NetResponse|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ff040
	void SetSize(struct FSlateChildSize InSize); // Function UMG.HorizontalBoxSlot.SetSize // (NetReliableNetRequest|NetResponse|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ff4c0
	void SetPadding(struct FMargin InPadding); // Function UMG.HorizontalBoxSlot.SetPadding // (Net|NetReliableNetRequest|Exec|Event|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ff4c0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.HorizontalBoxSlot.SetHorizontalAlignment // (NetReliableNetRequest|Exec|Native|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ff4c0
};

// Class UMG.InputKeySelector
// Size: 0x7a0 (Inherited: 0x138)
struct UInputKeySelector : UWidget {
	struct FButtonStyle WidgetStyle; // 0x138(0x2b8)
	struct FTextBlockStyle TextStyle; // 0x3f0(0x2a0)
	struct FInputChord SelectedKey; // 0x690(0x20)
	struct FSlateFontInfo Font; // 0x6b0(0x58)
	struct FMargin Margin; // 0x708(0x10)
	struct FLinearColor ColorAndOpacity; // 0x718(0x10)
	struct FText KeySelectionText; // 0x728(0x18)
	struct FText NoKeySpecifiedText; // 0x740(0x18)
	bool bAllowModifierKeys; // 0x758(0x01)
	bool bAllowGamepadKeys; // 0x759(0x01)
	char pad_75A[0x6]; // 0x75a(0x06)
	struct TArray<struct FKey> EscapeKeys; // 0x760(0x10)
	struct FMulticastInlineDelegate OnKeySelected; // 0x770(0x10)
	struct FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x780(0x10)
	char pad_790[0x10]; // 0x790(0x10)

	void SetTextBlockVisibility(enum class ESlateVisibility InVisibility); // Function UMG.InputKeySelector.SetTextBlockVisibility // (Exec|NetResponse|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32813730
	void SetSelectedKey(struct FInputChord& InSelectedKey); // Function UMG.InputKeySelector.SetSelectedKey // (NetResponse|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ff280
	void SetNoKeySpecifiedText(struct FText InNoKeySpecifiedText); // Function UMG.InputKeySelector.SetNoKeySpecifiedText // (Net|NetRequest|Event|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ff280
	void SetKeySelectionText(struct FText InKeySelectionText); // Function UMG.InputKeySelector.SetKeySelectionText // (Event|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ff280
	void SetEscapeKeys(struct TArray<struct FKey>& InKeys); // Function UMG.InputKeySelector.SetEscapeKeys // (Exec|Native|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ff280
	void SetAllowModifierKeys(bool bInAllowModifierKeys); // Function UMG.InputKeySelector.SetAllowModifierKeys // (Net|NetReliableNetRequest|Exec|Native|Event|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ff280
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys); // Function UMG.InputKeySelector.SetAllowGamepadKeys // (Net|NetRequest|Exec|Native|Event|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ff280
	void OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f328137d0
	void OnIsSelectingKeyChanged__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ff280
	bool GetIsSelectingKey(); // Function UMG.InputKeySelector.GetIsSelectingKey // (NetRequest|Event|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316ff280
};

// Class UMG.Int32Binding
// Size: 0x60 (Inherited: 0x60)
struct UInt32Binding : UPropertyBinding {

	int32_t GetValue(); // Function UMG.Int32Binding.GetValue // (NetReliableNetRequest|Exec|Event|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fee00
};

// Class UMG.InvalidationBox
// Size: 0x168 (Inherited: 0x150)
struct UInvalidationBox : UContentWidget {
	bool bCanCache; // 0x150(0x01)
	bool CacheRelativeTransforms; // 0x151(0x01)
	char pad_152[0x16]; // 0x152(0x16)

	void SetCanCache(bool CanCache); // Function UMG.InvalidationBox.SetCanCache // (Net|NetReliableExec|Static|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316febc0
	void InvalidateCache(); // Function UMG.InvalidationBox.InvalidateCache // (NetReliableNetRequest|Exec|Native|NetResponse|Static|NetMulticast|MulticastDelegate|Public|Protected|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fee00
	bool GetCanCache(); // Function UMG.InvalidationBox.GetCanCache // (NetRequest|Exec|Native|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fee00
};

// Class UMG.UserListEntry
// Size: 0x28 (Inherited: 0x28)
struct UUserListEntry : UInterface {

	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UMG.UserListEntry.BP_OnItemSelectionChanged // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fe980
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UMG.UserListEntry.BP_OnItemExpansionChanged // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316febc0
	void BP_OnEntryReleased(); // Function UMG.UserListEntry.BP_OnEntryReleased // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316febc0
};

// Class UMG.UserListEntryLibrary
// Size: 0x28 (Inherited: 0x28)
struct UUserListEntryLibrary : UBlueprintFunctionLibrary {

	bool IsListItemSelected(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.IsListItemSelected // (Net|Native|Event|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fe740
	bool IsListItemExpanded(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.IsListItemExpanded // (Net|NetReliableNetRequest|Exec|Event|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fe980
	struct UListViewBase* GetOwningListView(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.GetOwningListView // (Net|NetReliableExec|Event|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fe980
};

// Class UMG.UserObjectListEntry
// Size: 0x28 (Inherited: 0x28)
struct UUserObjectListEntry : UUserListEntry {

	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UMG.UserObjectListEntry.OnListItemObjectSet // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fe500
};

// Class UMG.UserObjectListEntryLibrary
// Size: 0x28 (Inherited: 0x28)
struct UUserObjectListEntryLibrary : UBlueprintFunctionLibrary {

	struct UObject* GetListItemObject(struct TScriptInterface<IUserObjectListEntry> UserObjectListEntry); // Function UMG.UserObjectListEntryLibrary.GetListItemObject // (Net|NetReliableNetRequest|Event|NetResponse|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fe080
};

// Class UMG.ListViewDesignerPreviewItem
// Size: 0x28 (Inherited: 0x28)
struct UListViewDesignerPreviewItem : UObject {
};

// Class UMG.MenuAnchor
// Size: 0x190 (Inherited: 0x150)
struct UMenuAnchor : UContentWidget {
	struct UUserWidget* MenuClass; // 0x150(0x08)
	struct FDelegate OnGetMenuContentEvent; // 0x158(0x10)
	enum class EMenuPlacement Placement; // 0x168(0x01)
	bool bFitInWindow; // 0x169(0x01)
	bool ShouldDeferPaintingAfterWindowContent; // 0x16a(0x01)
	bool UseApplicationMenuStack; // 0x16b(0x01)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct FMulticastInlineDelegate OnMenuOpenChanged; // 0x170(0x10)
	char pad_180[0x10]; // 0x180(0x10)

	void ToggleOpen(bool bFocusOnOpen); // Function UMG.MenuAnchor.ToggleOpen // (NetRequest|Exec|Event|NetResponse|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317049c0
	bool ShouldOpenDueToClick(); // Function UMG.MenuAnchor.ShouldOpenDueToClick // (NetRequest|Exec|Event|NetResponse|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fe080
	void SetPlacement(enum class EMenuPlacement InPlacement); // Function UMG.MenuAnchor.SetPlacement // (NetRequest|Native|NetResponse|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fe080
	void Open(bool bFocusMenu); // Function UMG.MenuAnchor.Open // (Net|Native|Event|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fe080
	bool IsOpen(); // Function UMG.MenuAnchor.IsOpen // (Native|Event|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fe080
	bool HasOpenSubMenus(); // Function UMG.MenuAnchor.HasOpenSubMenus // (Native|Event|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fe080
	struct FVector2D GetMenuPosition(); // Function UMG.MenuAnchor.GetMenuPosition // (Net|NetReliableNetRequest|Event|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fe080
	void FitInWindow(bool bFit); // Function UMG.MenuAnchor.FitInWindow // (Net|NetReliableNetRequest|Native|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fe080
	void Close(); // Function UMG.MenuAnchor.Close // (Net|NetReliableNetRequest|Native|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f316fe080
};

// Class UMG.MouseCursorBinding
// Size: 0x60 (Inherited: 0x60)
struct UMouseCursorBinding : UPropertyBinding {

	enum class EMouseCursor GetValue(); // Function UMG.MouseCursorBinding.GetValue // (Net|NetRequest|Exec|Event|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31703340
};

// Class UMG.MovieScene2DTransformSection
// Size: 0x550 (Inherited: 0xe0)
struct UMovieScene2DTransformSection : UMovieSceneSection {
	struct FMovieScene2DTransformMask TransformMask; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FMovieSceneFloatChannel Translation[0x2]; // 0xe8(0x140)
	struct FMovieSceneFloatChannel Rotation; // 0x228(0xa0)
	struct FMovieSceneFloatChannel Scale[0x2]; // 0x2c8(0x140)
	struct FMovieSceneFloatChannel Shear[0x2]; // 0x408(0x140)
	char pad_548[0x8]; // 0x548(0x08)
};

// Class UMG.MovieScene2DTransformTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieScene2DTransformTrack : UMovieScenePropertyTrack {
};

// Class UMG.MovieSceneMarginSection
// Size: 0x360 (Inherited: 0xe0)
struct UMovieSceneMarginSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel TopCurve; // 0xe0(0xa0)
	struct FMovieSceneFloatChannel LeftCurve; // 0x180(0xa0)
	struct FMovieSceneFloatChannel RightCurve; // 0x220(0xa0)
	struct FMovieSceneFloatChannel BottomCurve; // 0x2c0(0xa0)
};

// Class UMG.MovieSceneMarginTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneMarginTrack : UMovieScenePropertyTrack {
};

// Class UMG.MovieSceneWidgetMaterialTrack
// Size: 0x80 (Inherited: 0x68)
struct UMovieSceneWidgetMaterialTrack : UMovieSceneMaterialTrack {
	struct TArray<struct FName> BrushPropertyNamePath; // 0x68(0x10)
	struct FName TrackName; // 0x78(0x08)
};

// Class UMG.MultiLineEditableText
// Size: 0x4d8 (Inherited: 0x160)
struct UMultiLineEditableText : UTextLayoutWidget {
	struct FText Text; // 0x160(0x18)
	struct FText HintText; // 0x178(0x18)
	struct FDelegate HintTextDelegate; // 0x190(0x10)
	struct FTextBlockStyle WidgetStyle; // 0x1a0(0x2a0)
	bool bIsReadOnly; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct FSlateFontInfo Font; // 0x448(0x58)
	bool SelectAllTextWhenFocused; // 0x4a0(0x01)
	bool ClearTextSelectionOnFocusLoss; // 0x4a1(0x01)
	bool RevertTextOnEscape; // 0x4a2(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x4a3(0x01)
	bool AllowContextMenu; // 0x4a4(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x4a5(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x4a6(0x01)
	char pad_4A7[0x1]; // 0x4a7(0x01)
	struct FMulticastInlineDelegate OnTextChanged; // 0x4a8(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x4b8(0x10)
	char pad_4C8[0x10]; // 0x4c8(0x10)

	void SetWidgetStyle(struct FTextBlockStyle& InWidgetStyle); // Function UMG.MultiLineEditableText.SetWidgetStyle // (Net|Exec|Event|NetResponse|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31703a00
	void SetText(struct FText InText); // Function UMG.MultiLineEditableText.SetText // (Net|NetReliableExec|Native|NetResponse|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31703c40
	void SetIsReadOnly(bool bReadOnly); // Function UMG.MultiLineEditableText.SetIsReadOnly // (Net|NetReliableExec|NetResponse|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31703c40
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableText.SetHintText // (NetResponse|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31703c40
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31703c40
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31703c40
	struct FText GetText(); // Function UMG.MultiLineEditableText.GetText // (Exec|Event|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31703c40
	struct FText GetHintText(); // Function UMG.MultiLineEditableText.GetHintText // (NetReliableEvent|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31703c40
};

// Class UMG.MultiLineEditableTextBox
// Size: 0xdd0 (Inherited: 0x160)
struct UMultiLineEditableTextBox : UTextLayoutWidget {
	struct FText Text; // 0x160(0x18)
	struct FText HintText; // 0x178(0x18)
	struct FDelegate HintTextDelegate; // 0x190(0x10)
	struct FEditableTextBoxStyle WidgetStyle; // 0x1a0(0x8c8)
	struct FTextBlockStyle TextStyle; // 0xa68(0x2a0)
	bool bIsReadOnly; // 0xd08(0x01)
	bool AllowContextMenu; // 0xd09(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xd0a(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xd0b(0x01)
	char pad_D0C[0x4]; // 0xd0c(0x04)
	struct USlateWidgetStyleAsset* Style; // 0xd10(0x08)
	struct FSlateFontInfo Font; // 0xd18(0x58)
	struct FLinearColor ForegroundColor; // 0xd70(0x10)
	struct FLinearColor BackgroundColor; // 0xd80(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xd90(0x10)
	struct FMulticastInlineDelegate OnTextChanged; // 0xda0(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xdb0(0x10)
	char pad_DC0[0x10]; // 0xdc0(0x10)

	void SetTextStyle(struct FTextBlockStyle& InTextStyle); // Function UMG.MultiLineEditableTextBox.SetTextStyle // (NetReliableEvent|NetResponse|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810460
	void SetText(struct FText InText); // Function UMG.MultiLineEditableTextBox.SetText // (Net|NetReliableNetRequest|Exec|Native|NetResponse|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31703a00
	void SetIsReadOnly(bool bReadOnly); // Function UMG.MultiLineEditableTextBox.SetIsReadOnly // (Net|NetRequest|Exec|NetResponse|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31703a00
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableTextBox.SetHintText // (Net|NetReliableNetResponse|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31703a00
	void SetError(struct FText InError); // Function UMG.MultiLineEditableTextBox.SetError // (NetReliableExec|Native|Event|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31703a00
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31703a00
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31703a00
	struct FText GetText(); // Function UMG.MultiLineEditableTextBox.GetText // (NetReliableExec|Event|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31703a00
	struct FText GetHintText(); // Function UMG.MultiLineEditableTextBox.GetHintText // (NetRequest|Event|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31703a00
};

// Class UMG.NamedSlotInterface
// Size: 0x28 (Inherited: 0x28)
struct UNamedSlotInterface : UInterface {
};

// Class UMG.NativeWidgetHost
// Size: 0x148 (Inherited: 0x138)
struct UNativeWidgetHost : UWidget {
	char pad_138[0x10]; // 0x138(0x10)
};

// Class UMG.ProgressBar
// Size: 0x378 (Inherited: 0x138)
struct UProgressBar : UWidget {
	struct FProgressBarStyle WidgetStyle; // 0x138(0x1d0)
	struct USlateWidgetStyleAsset* Style; // 0x308(0x08)
	struct USlateBrushAsset* BackgroundImage; // 0x310(0x08)
	struct USlateBrushAsset* FillImage; // 0x318(0x08)
	struct USlateBrushAsset* MarqueeImage; // 0x320(0x08)
	float Percent; // 0x328(0x04)
	enum class EProgressBarFillType BarFillType; // 0x32c(0x01)
	bool bIsMarquee; // 0x32d(0x01)
	char pad_32E[0x2]; // 0x32e(0x02)
	struct FVector2D BorderPadding; // 0x330(0x08)
	struct FDelegate PercentDelegate; // 0x338(0x10)
	struct FLinearColor FillColorAndOpacity; // 0x348(0x10)
	struct FDelegate FillColorAndOpacityDelegate; // 0x358(0x10)
	char pad_368[0x10]; // 0x368(0x10)

	void SetPercent(float InPercent); // Function UMG.ProgressBar.SetPercent // (NetReliableNative|NetResponse|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31703100
	void SetIsMarquee(bool InbIsMarquee); // Function UMG.ProgressBar.SetIsMarquee // (Net|Exec|NetResponse|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31703340
	void SetFillColorAndOpacity(struct FLinearColor InColor); // Function UMG.ProgressBar.SetFillColorAndOpacity // (NetReliableNetRequest|Exec|Native|Event|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31703340
};

// Class UMG.RetainerBox
// Size: 0x180 (Inherited: 0x150)
struct URetainerBox : UContentWidget {
	bool bRetainRender; // 0x150(0x01)
	bool RenderOnInvalidation; // 0x151(0x01)
	bool RenderOnPhase; // 0x152(0x01)
	char pad_153[0x1]; // 0x153(0x01)
	int32_t Phase; // 0x154(0x04)
	int32_t PhaseCount; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct UMaterialInterface* EffectMaterial; // 0x160(0x08)
	struct FName TextureParameter; // 0x168(0x08)
	char pad_170[0x10]; // 0x170(0x10)

	void SetTextureParameter(struct FName TextureParameter); // Function UMG.RetainerBox.SetTextureParameter // (Net|NetRequest|Event|NetResponse|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31702c80
	void SetRetainRendering(bool bInRetainRendering); // Function UMG.RetainerBox.SetRetainRendering // (Net|Exec|Native|NetResponse|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31703100
	void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases); // Function UMG.RetainerBox.SetRenderingPhase // (NetReliableNetRequest|Native|NetResponse|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31703100
	void SetEffectMaterial(struct UMaterialInterface* EffectMaterial); // Function UMG.RetainerBox.SetEffectMaterial // (Exec|Native|Event|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31703100
	void RequestRender(); // Function UMG.RetainerBox.RequestRender // (Exec|Native|Event|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31703100
	struct UMaterialInstanceDynamic* GetEffectMaterial(); // Function UMG.RetainerBox.GetEffectMaterial // (Net|Event|Static|NetMulticast|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31703100
};

// Class UMG.RichTextBlockImageDecorator
// Size: 0x30 (Inherited: 0x28)
struct URichTextBlockImageDecorator : URichTextBlockDecorator {
	struct UDataTable* ImageSet; // 0x28(0x08)
};

// Class UMG.SafeZone
// Size: 0x168 (Inherited: 0x150)
struct USafeZone : UContentWidget {
	bool PadLeft; // 0x150(0x01)
	bool PadRight; // 0x151(0x01)
	bool PadTop; // 0x152(0x01)
	bool PadBottom; // 0x153(0x01)
	char pad_154[0x14]; // 0x154(0x14)

	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom); // Function UMG.SafeZone.SetSidesToPad // (Net|NetReliableExec|Native|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31702800
};

// Class UMG.SafeZoneSlot
// Size: 0x60 (Inherited: 0x38)
struct USafeZoneSlot : UPanelSlot {
	bool bIsTitleSafe; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FMargin SafeAreaScale; // 0x3c(0x10)
	enum class EHorizontalAlignment HAlign; // 0x4c(0x01)
	enum class EVerticalAlignment VAlign; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
	struct FMargin Padding; // 0x50(0x10)
};

// Class UMG.ScaleBox
// Size: 0x170 (Inherited: 0x150)
struct UScaleBox : UContentWidget {
	enum class EStretch Stretch; // 0x150(0x01)
	enum class EStretchDirection StretchDirection; // 0x151(0x01)
	char pad_152[0x2]; // 0x152(0x02)
	float UserSpecifiedScale; // 0x154(0x04)
	bool IgnoreInheritedScale; // 0x158(0x01)
	char pad_159[0x3]; // 0x159(0x03)
	float IgnoreSlightScaleModificationPercent; // 0x15c(0x04)
	char pad_160[0x10]; // 0x160(0x10)

	void SetUserSpecifiedScale(float InUserSpecifiedScale); // Function UMG.ScaleBox.SetUserSpecifiedScale // (NetRequest|Exec|Event|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317025c0
	void SetStretchDirection(enum class EStretchDirection InStretchDirection); // Function UMG.ScaleBox.SetStretchDirection // (NetReliableNetRequest|Event|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31702800
	void SetStretch(enum class EStretch InStretch); // Function UMG.ScaleBox.SetStretch // (NetRequest|Event|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31702800
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale); // Function UMG.ScaleBox.SetIgnoreInheritedScale // (NetReliableExec|Native|Event|NetResponse|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31702800
};

// Class UMG.ScaleBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UScaleBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ScaleBoxSlot.SetVerticalAlignment // (Net|NetRequest|Native|Event|NetResponse|Static|MulticastDelegate|Private|Protected|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31702380
	void SetPadding(struct FMargin InPadding); // Function UMG.ScaleBoxSlot.SetPadding // (NetRequest|Exec|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317025c0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ScaleBoxSlot.SetHorizontalAlignment // (Exec|Event|NetResponse|Static|MulticastDelegate|Private|Protected|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317025c0
};

// Class UMG.ScrollBar
// Size: 0x6d0 (Inherited: 0x138)
struct UScrollBar : UWidget {
	struct FScrollBarStyle WidgetStyle; // 0x138(0x560)
	struct USlateWidgetStyleAsset* Style; // 0x698(0x08)
	bool bAlwaysShowScrollbar; // 0x6a0(0x01)
	bool bAlwaysShowScrollbarTrack; // 0x6a1(0x01)
	enum class EOrientation Orientation; // 0x6a2(0x01)
	char pad_6A3[0x1]; // 0x6a3(0x01)
	struct FVector2D Thickness; // 0x6a4(0x08)
	struct FMargin Padding; // 0x6ac(0x10)
	char pad_6BC[0x14]; // 0x6bc(0x14)

	void SetState(float InOffsetFraction, float InThumbSizeFraction); // Function UMG.ScrollBar.SetState // (Net|Event|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31702140
};

// Class UMG.ScrollBoxSlot
// Size: 0x58 (Inherited: 0x38)
struct UScrollBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0xe]; // 0x4a(0x0e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ScrollBoxSlot.SetVerticalAlignment // (NetReliableNetRequest|Exec|Event|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31701f00
	void SetPadding(struct FMargin InPadding); // Function UMG.ScrollBoxSlot.SetPadding // (NetReliableNetRequest|Exec|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31702140
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ScrollBoxSlot.SetHorizontalAlignment // (NetReliableNetRequest|Native|Event|NetResponse|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31702140
};

// Class UMG.SizeBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct USizeBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.SizeBoxSlot.SetVerticalAlignment // (Native|Event|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31701cc0
	void SetPadding(struct FMargin InPadding); // Function UMG.SizeBoxSlot.SetPadding // (Native|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31701f00
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.SizeBoxSlot.SetHorizontalAlignment // (Exec|Native|Event|NetResponse|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31701f00
};

// Class UMG.SlateBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct USlateBlueprintLibrary : UBlueprintFunctionLibrary {

	void WidgetGlobalPostionToSubWidgetLocal(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D ScreenUIPosition, struct FVector2D& OutLocalUIPostion); // Function UMG.SlateBlueprintLibrary.WidgetGlobalPostionToSubWidgetLocal // (NetReliableNetRequest|NetResponse|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31701600
	struct FVector2D TransformVectorLocalToAbsolute(struct FGeometry& Geometry, struct FVector2D LocalVector); // Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute // (NetReliableNetResponse|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31701cc0
	struct FVector2D TransformVectorAbsoluteToLocal(struct FGeometry& Geometry, struct FVector2D AbsoluteVector); // Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal // (NetReliableNetRequest|Exec|Native|Event|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31701cc0
	float TransformScalarLocalToAbsolute(struct FGeometry& Geometry, float LocalScalar); // Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute // (NetReliableExec|Native|Event|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31701cc0
	float TransformScalarAbsoluteToLocal(struct FGeometry& Geometry, float AbsoluteScalar); // Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal // (NetReliableNetRequest|Native|Event|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31701cc0
	void ScreenToWidgetLocal(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D ScreenPosition, struct FVector2D& LocalCoordinate, bool bIncludeWindowPosition); // Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal // (NetReliableNetRequest|NetResponse|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31701cc0
	void ScreenToWidgetAbsolute(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& AbsoluteCoordinate, bool bIncludeWindowPosition); // Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute // (Net|NetResponse|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31701cc0
	void ScreenToViewport(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& ViewportPosition); // Function UMG.SlateBlueprintLibrary.ScreenToViewport // (Net|NetRequest|Exec|Native|Event|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31701cc0
	void LocalToViewport(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D LocalCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition); // Function UMG.SlateBlueprintLibrary.LocalToViewport // (Net|NetRequest|Native|Event|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31701cc0
	struct FVector2D LocalToAbsolute(struct FGeometry& Geometry, struct FVector2D LocalCoordinate); // Function UMG.SlateBlueprintLibrary.LocalToAbsolute // (Net|Native|Event|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31701cc0
	bool IsUnderLocation(struct FGeometry& Geometry, struct FVector2D& AbsoluteCoordinate); // Function UMG.SlateBlueprintLibrary.IsUnderLocation // (Net|NetRequest|Exec|Event|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31701cc0
	struct FVector2D GetLocalTopLeft(struct FGeometry& Geometry); // Function UMG.SlateBlueprintLibrary.GetLocalTopLeft // (NetReliableNetRequest|Event|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31701cc0
	struct FVector2D GetLocalSize(struct FGeometry& Geometry); // Function UMG.SlateBlueprintLibrary.GetLocalSize // (Net|NetReliableEvent|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31701cc0
	struct FVector2D GetAbsoluteSize(struct FGeometry& Geometry); // Function UMG.SlateBlueprintLibrary.GetAbsoluteSize // (Net|NetRequest|Exec|Native|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31701cc0
	bool EqualEqual_SlateBrush(struct FSlateBrush& A, struct FSlateBrush& B); // Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush // (NetReliableNative|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31701cc0
	void AbsoluteToViewport(struct UObject* WorldContextObject, struct FVector2D AbsoluteDesktopCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition); // Function UMG.SlateBlueprintLibrary.AbsoluteToViewport // (Exec|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31701cc0
	struct FVector2D AbsoluteToLocal(struct FGeometry& Geometry, struct FVector2D AbsoluteCoordinate); // Function UMG.SlateBlueprintLibrary.AbsoluteToLocal // (NetRequest|Static|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31701cc0
};

// Class UMG.SlateVectorArtData
// Size: 0x60 (Inherited: 0x28)
struct USlateVectorArtData : UObject {
	struct TArray<struct FSlateMeshVertex> VertexData; // 0x28(0x10)
	struct TArray<uint32_t> IndexData; // 0x38(0x10)
	struct UMaterialInterface* Material; // 0x48(0x08)
	struct FVector2D ExtentMin; // 0x50(0x08)
	struct FVector2D ExtentMax; // 0x58(0x08)
};

// Class UMG.SlateAccessibleWidgetData
// Size: 0x80 (Inherited: 0x28)
struct USlateAccessibleWidgetData : UObject {
	bool bCanChildrenBeAccessible; // 0x28(0x01)
	enum class ESlateAccessibleBehavior AccessibleBehavior; // 0x29(0x01)
	enum class ESlateAccessibleBehavior AccessibleSummaryBehavior; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
	struct FText AccessibleText; // 0x30(0x18)
	struct FDelegate AccessibleTextDelegate; // 0x48(0x10)
	struct FText AccessibleSummaryText; // 0x58(0x18)
	struct FDelegate AccessibleSummaryTextDelegate; // 0x70(0x10)
};

// Class UMG.Spacer
// Size: 0x150 (Inherited: 0x138)
struct USpacer : UWidget {
	struct FVector2D Size; // 0x138(0x08)
	char pad_140[0x10]; // 0x140(0x10)

	void SetSize(struct FVector2D InSize); // Function UMG.Spacer.SetSize // (Net|NetReliableExec|Event|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31701180
};

// Class UMG.SpinBox
// Size: 0x5a0 (Inherited: 0x138)
struct USpinBox : UWidget {
	float Value; // 0x138(0x04)
	struct FDelegate ValueDelegate; // 0x13c(0x10)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct FSpinBoxStyle WidgetStyle; // 0x150(0x338)
	struct USlateWidgetStyleAsset* Style; // 0x488(0x08)
	int32_t MinFractionalDigits; // 0x490(0x04)
	int32_t MaxFractionalDigits; // 0x494(0x04)
	bool bAlwaysUsesDeltaSnap; // 0x498(0x01)
	char pad_499[0x3]; // 0x499(0x03)
	float Delta; // 0x49c(0x04)
	float SliderExponent; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct FSlateFontInfo Font; // 0x4a8(0x58)
	enum class ETextJustify Justification; // 0x500(0x01)
	char pad_501[0x3]; // 0x501(0x03)
	float MinDesiredWidth; // 0x504(0x04)
	bool ClearKeyboardFocusOnCommit; // 0x508(0x01)
	bool SelectAllTextOnCommit; // 0x509(0x01)
	char pad_50A[0x6]; // 0x50a(0x06)
	struct FSlateColor ForegroundColor; // 0x510(0x28)
	struct FMulticastInlineDelegate OnValueChanged; // 0x538(0x10)
	struct FMulticastInlineDelegate OnValueCommitted; // 0x548(0x10)
	struct FMulticastInlineDelegate OnBeginSliderMovement; // 0x558(0x10)
	struct FMulticastInlineDelegate OnEndSliderMovement; // 0x568(0x10)
	char bOverride_MinValue : 1; // 0x578(0x01)
	char bOverride_MaxValue : 1; // 0x578(0x01)
	char bOverride_MinSliderValue : 1; // 0x578(0x01)
	char bOverride_MaxSliderValue : 1; // 0x578(0x01)
	char pad_578_4 : 4; // 0x578(0x01)
	char pad_579[0x3]; // 0x579(0x03)
	float MinValue; // 0x57c(0x04)
	float MaxValue; // 0x580(0x04)
	float MinSliderValue; // 0x584(0x04)
	float MaxSliderValue; // 0x588(0x04)
	char pad_58C[0x14]; // 0x58c(0x14)

	void SetValue(float NewValue); // Function UMG.SpinBox.SetValue // (Net|NetReliableNetResponse|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32813730
	void SetMinValue(float NewValue); // Function UMG.SpinBox.SetMinValue // (NetReliableExec|Native|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317013c0
	void SetMinSliderValue(float NewValue); // Function UMG.SpinBox.SetMinSliderValue // (NetReliableNetRequest|Native|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317013c0
	void SetMinFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMinFractionalDigits // (NetRequest|Native|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317013c0
	void SetMaxValue(float NewValue); // Function UMG.SpinBox.SetMaxValue // (Native|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317013c0
	void SetMaxSliderValue(float NewValue); // Function UMG.SpinBox.SetMaxSliderValue // (NetRequest|Exec|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317013c0
	void SetMaxFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMaxFractionalDigits // (NetReliableExec|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317013c0
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.SpinBox.SetForegroundColor // (Net|Exec|Native|Event|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317013c0
	void SetDelta(float NewValue); // Function UMG.SpinBox.SetDelta // (Net|NetReliableNative|Event|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317013c0
	void SetAlwaysUsesDeltaSnap(bool bNewValue); // Function UMG.SpinBox.SetAlwaysUsesDeltaSnap // (NetReliableEvent|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317013c0
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod); // DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317013c0
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue); // DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317013c0
	void OnSpinBoxBeginSliderMovement__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317013c0
	float GetValue(); // Function UMG.SpinBox.GetValue // (Net|Event|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317013c0
	float GetMinValue(); // Function UMG.SpinBox.GetMinValue // (Exec|Native|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317013c0
	float GetMinSliderValue(); // Function UMG.SpinBox.GetMinSliderValue // (Net|NetReliableNetRequest|Native|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317013c0
	int32_t GetMinFractionalDigits(); // Function UMG.SpinBox.GetMinFractionalDigits // (Net|NetReliableNetRequest|Native|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317013c0
	float GetMaxValue(); // Function UMG.SpinBox.GetMaxValue // (NetReliableNetRequest|Native|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317013c0
	float GetMaxSliderValue(); // Function UMG.SpinBox.GetMaxSliderValue // (Net|NetRequest|Native|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317013c0
	int32_t GetMaxFractionalDigits(); // Function UMG.SpinBox.GetMaxFractionalDigits // (NetRequest|Native|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317013c0
	float GetDelta(); // Function UMG.SpinBox.GetDelta // (NetReliableNative|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317013c0
	bool GetAlwaysUsesDeltaSnap(); // Function UMG.SpinBox.GetAlwaysUsesDeltaSnap // (Net|Native|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317013c0
	void ClearMinValue(); // Function UMG.SpinBox.ClearMinValue // (Net|Native|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317013c0
	void ClearMinSliderValue(); // Function UMG.SpinBox.ClearMinSliderValue // (Native|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317013c0
	void ClearMaxValue(); // Function UMG.SpinBox.ClearMaxValue // (Native|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317013c0
	void ClearMaxSliderValue(); // Function UMG.SpinBox.ClearMaxSliderValue // (Net|NetReliableNetRequest|Exec|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317013c0
};

// Class UMG.TextBinding
// Size: 0x68 (Inherited: 0x60)
struct UTextBinding : UPropertyBinding {
	char pad_60[0x8]; // 0x60(0x08)

	struct FText GetTextValue(); // Function UMG.TextBinding.GetTextValue // (NetReliableNetRequest|Exec|Native|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31700f40
	struct FString GetStringValue(); // Function UMG.TextBinding.GetStringValue // (NetReliableExec|Native|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31701180
};

// Class UMG.Throbber
// Size: 0x1f0 (Inherited: 0x138)
struct UThrobber : UWidget {
	int32_t NumberOfPieces; // 0x138(0x04)
	bool bAnimateHorizontally; // 0x13c(0x01)
	bool bAnimateVertically; // 0x13d(0x01)
	bool bAnimateOpacity; // 0x13e(0x01)
	char pad_13F[0x1]; // 0x13f(0x01)
	struct USlateBrushAsset* PieceImage; // 0x140(0x08)
	struct FSlateBrush Image; // 0x148(0x98)
	char pad_1E0[0x10]; // 0x1e0(0x10)

	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.Throbber.SetNumberOfPieces // (Net|NetReliableEvent|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31700d00
	void SetAnimateVertically(bool bInAnimateVertically); // Function UMG.Throbber.SetAnimateVertically // (Net|Exec|Event|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31700f40
	void SetAnimateOpacity(bool bInAnimateOpacity); // Function UMG.Throbber.SetAnimateOpacity // (Net|NetReliableNetRequest|Event|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31700f40
	void SetAnimateHorizontally(bool bInAnimateHorizontally); // Function UMG.Throbber.SetAnimateHorizontally // (NetRequest|Event|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31700f40
};

// Class UMG.UMGSequencePlayer
// Size: 0x7a8 (Inherited: 0x28)
struct UUMGSequencePlayer : UObject {
	char pad_28[0x3e0]; // 0x28(0x3e0)
	struct UWidgetAnimation* Animation; // 0x408(0x08)
	char pad_410[0x398]; // 0x410(0x398)

	void SetUserTag(struct FName InUserTag); // Function UMG.UMGSequencePlayer.SetUserTag // (Net|NetReliableEvent|NetResponse|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31700ac0
	struct FName GetUserTag(); // Function UMG.UMGSequencePlayer.GetUserTag // (NetReliableStatic|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31700d00
};

// Class UMG.UniformGridPanel
// Size: 0x178 (Inherited: 0x150)
struct UUniformGridPanel : UPanelWidget {
	struct FMargin SlotPadding; // 0x150(0x10)
	float MinDesiredSlotWidth; // 0x160(0x04)
	float MinDesiredSlotHeight; // 0x164(0x04)
	char pad_168[0x10]; // 0x168(0x10)

	void SetSlotPadding(struct FMargin InSlotPadding); // Function UMG.UniformGridPanel.SetSlotPadding // (Net|Event|NetResponse|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31700880
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth); // Function UMG.UniformGridPanel.SetMinDesiredSlotWidth // (Net|NetReliableNetRequest|Exec|NetResponse|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31700ac0
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight); // Function UMG.UniformGridPanel.SetMinDesiredSlotHeight // (Net|NetRequest|Exec|NetResponse|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31700ac0
	struct UUniformGridSlot* AddChildToUniformGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn); // Function UMG.UniformGridPanel.AddChildToUniformGrid // (Net|NetReliableEvent|NetResponse|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31700ac0
};

// Class UMG.UniformGridSlot
// Size: 0x50 (Inherited: 0x38)
struct UUniformGridSlot : UPanelSlot {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x38(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	int32_t Row; // 0x3c(0x04)
	int32_t Column; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.UniformGridSlot.SetVerticalAlignment // (Net|NetRequest|Event|NetResponse|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31700640
	void SetRow(int32_t InRow); // Function UMG.UniformGridSlot.SetRow // (Net|NetReliableNetRequest|Exec|Native|NetResponse|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31700880
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.UniformGridSlot.SetHorizontalAlignment // (NetRequest|NetResponse|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31700880
	void SetColumn(int32_t InColumn); // Function UMG.UniformGridSlot.SetColumn // (Exec|Native|Event|Static|NetMulticast|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31700880
};

// Class UMG.VerticalBox
// Size: 0x160 (Inherited: 0x150)
struct UVerticalBox : UPanelWidget {
	char pad_150[0x10]; // 0x150(0x10)

	struct UVerticalBoxSlot* AddChildToVerticalBox(struct UWidget* Content); // Function UMG.VerticalBox.AddChildToVerticalBox // (NetRequest|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31700400
};

// Class UMG.VerticalBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UVerticalBoxSlot : UPanelSlot {
	struct FSlateChildSize Size; // 0x38(0x08)
	struct FMargin Padding; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.VerticalBoxSlot.SetVerticalAlignment // (Net|Native|NetResponse|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317001c0
	void SetSize(struct FSlateChildSize InSize); // Function UMG.VerticalBoxSlot.SetSize // (Exec|NetResponse|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31700400
	void SetPadding(struct FMargin InPadding); // Function UMG.VerticalBoxSlot.SetPadding // (NetReliableNetRequest|Native|Event|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31700400
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.VerticalBoxSlot.SetHorizontalAlignment // (Event|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31700400
};

// Class UMG.Viewport
// Size: 0x178 (Inherited: 0x150)
struct UViewport : UContentWidget {
	struct FLinearColor BackgroundColor; // 0x150(0x10)
	char pad_160[0x18]; // 0x160(0x18)

	struct AActor* Spawn(struct AActor* ActorClass); // Function UMG.Viewport.Spawn // (Net|NetRequest|Exec|Native|NetResponse|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31709400
	void SetViewRotation(struct FRotator Rotation); // Function UMG.Viewport.SetViewRotation // (Net|NetRequest|Native|NetResponse|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317001c0
	void SetViewLocation(struct FVector Location); // Function UMG.Viewport.SetViewLocation // (Net|NetReliableNative|NetResponse|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317001c0
	struct FRotator GetViewRotation(); // Function UMG.Viewport.GetViewRotation // (NetReliableNetRequest|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317001c0
	struct UWorld* GetViewportWorld(); // Function UMG.Viewport.GetViewportWorld // (Net|NetReliableNetRequest|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317001c0
	struct FVector GetViewLocation(); // Function UMG.Viewport.GetViewLocation // (Net|NetRequest|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317001c0
};

// Class UMG.VisibilityBinding
// Size: 0x60 (Inherited: 0x60)
struct UVisibilityBinding : UPropertyBinding {

	enum class ESlateVisibility GetValue(); // Function UMG.VisibilityBinding.GetValue // (NetRequest|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317091c0
};

// Class UMG.WidgetAnimation
// Size: 0x380 (Inherited: 0x348)
struct UWidgetAnimation : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x348(0x08)
	struct TArray<struct FWidgetAnimationBinding> AnimationBindings; // 0x350(0x10)
	bool bLegacyFinishOnStop; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct FString DisplayLabel; // 0x368(0x10)
	enum class ESlateDetailMode DetailMode; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)

	void UnbindFromAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationStarted // (NetReliableNetRequest|Event|NetResponse|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708b00
	void UnbindFromAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationFinished // (Net|NetReliableEvent|NetResponse|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317091c0
	void UnbindAllFromAnimationStarted(struct UUserWidget* Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted // (Net|Event|NetResponse|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317091c0
	void UnbindAllFromAnimationFinished(struct UUserWidget* Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished // (Net|NetReliableNetRequest|Exec|Native|NetResponse|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317091c0
	void SetDetailMode(enum class ESlateDetailMode InDetailMode); // Function UMG.WidgetAnimation.SetDetailMode // (Net|NetRequest|Exec|Native|Static|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317091c0
	float GetStartTime(); // Function UMG.WidgetAnimation.GetStartTime // (NetReliableStatic|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317091c0
	float GetEndTime(); // Function UMG.WidgetAnimation.GetEndTime // (Net|NetReliableExec|Native|Event|NetResponse|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317091c0
	void BindToAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationStarted // (NetReliableNative|Event|NetResponse|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317091c0
	void BindToAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationFinished // (Net|NetReliableNetRequest|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317091c0
};

// Class UMG.WidgetAnimationDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UWidgetAnimationDelegateBinding : UDynamicBlueprintBinding {
	struct TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x28(0x10)
};

// Class UMG.WidgetAnimationPlayCallbackProxy
// Size: 0x48 (Inherited: 0x28)
struct UWidgetAnimationPlayCallbackProxy : UObject {
	struct FMulticastInlineDelegate Finished; // 0x28(0x10)
	char pad_38[0x10]; // 0x38(0x10)

	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject // (Net|NetReliableNetRequest|Native|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f317088c0
	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject // (Net|NetReliableNetRequest|Exec|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708b00
};

// Class UMG.WidgetBinding
// Size: 0x60 (Inherited: 0x60)
struct UWidgetBinding : UPropertyBinding {

	struct UWidget* GetValue(); // Function UMG.WidgetBinding.GetValue // (Net|NetReliableEvent|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707fc0
};

// Class UMG.WidgetBlueprintGeneratedClass
// Size: 0x368 (Inherited: 0x328)
struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	struct UWidgetTree* WidgetTree; // 0x328(0x08)
	char bClassRequiresNativeTick : 1; // 0x330(0x01)
	char pad_330_1 : 7; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct TArray<struct FDelegateRuntimeBinding> Bindings; // 0x338(0x10)
	struct TArray<struct UWidgetAnimation*> Animations; // 0x348(0x10)
	struct TArray<struct FName> NamedSlots; // 0x358(0x10)
};

// Class UMG.WidgetBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWidgetBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FEventReply UnlockMouse(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.UnlockMouse // (NetRequest|Exec|Native|Static|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810460
	struct FEventReply Unhandled(); // Function UMG.WidgetBlueprintLibrary.Unhandled // (NetReliableExec|Native|Static|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	void SetWindowTitleBarState(struct UWidget* TitleBarContent, enum class EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState // (NetReliableNative|Static|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f328100a0
	void SetWindowTitleBarOnCloseClickedDelegate(struct FDelegate Delegate); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate // (Native|Static|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	void SetWindowTitleBarCloseButtonActive(bool bActive); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive // (NetReliableNetRequest|Exec|Static|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	struct FEventReply SetUserFocus(struct FEventReply& Reply, struct UWidget* FocusWidget, bool bInAllUsers); // Function UMG.WidgetBlueprintLibrary.SetUserFocus // (NetReliableExec|Native|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	struct FEventReply SetMousePosition(struct FEventReply& Reply, struct FVector2D NewMousePosition); // Function UMG.WidgetBlueprintLibrary.SetMousePosition // (NetReliableNetRequest|Native|Event|NetResponse|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	void SetInputMode_UIOnlyEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode); // Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx // (Native|Event|NetResponse|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	void SetInputMode_UIOnly(struct APlayerController* Target, struct UWidget* InWidgetToFocus, bool bLockMouseToViewport); // Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly // (NetRequest|Exec|Event|NetResponse|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	void SetInputMode_GameOnly(struct APlayerController* PlayerController); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly // (NetReliableExec|Event|NetResponse|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	void SetInputMode_GameAndUIEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx // (Net|NetRequest|Event|NetResponse|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f328100a0
	void SetInputMode_GameAndUI(struct APlayerController* Target, struct UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI // (Event|NetResponse|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	bool SetHardwareCursor(struct UObject* WorldContextObject, enum class EMouseCursor CursorShape, struct FName CursorName, struct FVector2D HotSpot); // Function UMG.WidgetBlueprintLibrary.SetHardwareCursor // (NetRequest|Exec|Native|NetResponse|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	void SetFocusToGameViewport(); // Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport // (Net|Exec|Native|NetResponse|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	void SetColorVisionDeficiencyType(enum class EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency); // Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType // (NetReliableNetRequest|Exec|NetResponse|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32813730
	void SetBrushResourceToTexture(struct FSlateBrush& Brush, struct UTexture2D* Texture); // Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture // (Net|NetReliableNetRequest|NetResponse|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	void SetBrushResourceToMaterial(struct FSlateBrush& Brush, struct UMaterialInterface* Material); // Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial // (Net|NetReliableNetRequest|NetResponse|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	void RestorePreviousWindowTitleBarState(); // Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState // (NetRequest|NetResponse|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	struct FEventReply ReleaseMouseCapture(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture // (NetResponse|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	struct FEventReply ReleaseJoystickCapture(struct FEventReply& Reply, bool bInAllJoysticks); // Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture // (Net|NetRequest|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature(); // DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	struct FSlateBrush NoResourceBrush(); // Function UMG.WidgetBlueprintLibrary.NoResourceBrush // (NetReliableNetRequest|Exec|Native|Event|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	struct FSlateBrush MakeBrushFromTexture(struct UTexture2D* Texture, int32_t Width, int32_t Height); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture // (Net|NetReliableNetRequest|Native|Event|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	struct FSlateBrush MakeBrushFromMaterial(struct UMaterialInterface* Material, int32_t Width, int32_t Height); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial // (Net|Native|Event|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	struct FSlateBrush MakeBrushFromAsset(struct USlateBrushAsset* BrushAsset); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset // (Net|NetRequest|Exec|Event|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	struct FEventReply LockMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget); // Function UMG.WidgetBlueprintLibrary.LockMouse // (Exec|Event|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	bool IsDragDropping(); // Function UMG.WidgetBlueprintLibrary.IsDragDropping // (Net|NetReliableNetRequest|Event|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	struct FEventReply Handled(); // Function UMG.WidgetBlueprintLibrary.Handled // (NetReliableNetRequest|Event|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	void GetSafeZonePadding(struct UObject* WorldContextObject, struct FVector4& SafePadding, struct FVector2D& SafePaddingScale, struct FVector4& SpillOverPadding); // Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding // (Net|NetRequest|Exec|Native|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	struct FKeyEvent GetKeyEventFromAnalogInputEvent(struct FAnalogInputEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent // (Net|NetReliableNative|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32813730
	struct FInputEvent GetInputEventFromPointerEvent(struct FPointerEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent // (NetReliableNetRequest|Exec|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	struct FInputEvent GetInputEventFromNavigationEvent(struct FNavigationEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent // (Net|NetReliableExec|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32813730
	struct FInputEvent GetInputEventFromKeyEvent(struct FKeyEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent // (NetReliableNetRequest|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32813730
	struct FInputEvent GetInputEventFromCharacterEvent(struct FCharacterEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent // (Net|NetReliableDelegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32813730
	struct UMaterialInstanceDynamic* GetDynamicMaterial(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial // (NetRequest|Exec|Native|Event|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	struct UDragDropOperation* GetDragDroppingContent(); // Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent // (NetReliableExec|Native|Event|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	struct UTexture2D* GetBrushResourceAsTexture2D(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D // (NetReliableNative|Event|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	struct UMaterialInterface* GetBrushResourceAsMaterial(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial // (NetRequest|Exec|Event|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	struct UObject* GetBrushResource(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResource // (Net|NetRequest|Event|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	void GetAllWidgetsWithInterface(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, struct UInterface* Interface, bool TopLevelOnly); // Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface // (Event|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	void GetAllWidgetsOfClass(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, struct UUserWidget* WidgetClass, bool TopLevelOnly); // Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass // (NetReliableExec|Native|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	struct FEventReply EndDragDrop(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.EndDragDrop // (Net|NetReliableNetRequest|Native|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	void DrawTextFormatted(struct FPaintContext& Context, struct FText& Text, struct FVector2D Position, struct UFont* Font, int32_t FontSize, struct FName FontTypeFace, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawTextFormatted // (Net|NetRequest|Exec|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	void DrawText(struct FPaintContext& Context, struct FString inString, struct FVector2D Position, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawText // (Net|NetReliableNetRequest|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	void DrawLines(struct FPaintContext& Context, struct TArray<struct FVector2D>& Points, struct FLinearColor Tint, bool bAntiAlias, float Thickness); // Function UMG.WidgetBlueprintLibrary.DrawLines // (NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	void DrawLine(struct FPaintContext& Context, struct FVector2D PositionA, struct FVector2D PositionB, struct FLinearColor Tint, bool bAntiAlias, float Thickness); // Function UMG.WidgetBlueprintLibrary.DrawLine // (Exec|Native|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	void DrawBox(struct FPaintContext& Context, struct FVector2D Position, struct FVector2D Size, struct USlateBrushAsset* Brush, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawBox // (Net|Native|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32810460
	void DismissAllMenus(); // Function UMG.WidgetBlueprintLibrary.DismissAllMenus // (Net|Native|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	struct FEventReply DetectDragIfPressed(struct FPointerEvent& PointerEvent, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed // (Net|NetReliableNetRequest|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	struct FEventReply DetectDrag(struct FEventReply& Reply, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // Function UMG.WidgetBlueprintLibrary.DetectDrag // (Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	struct UDragDropOperation* CreateDragDropOperation(struct UDragDropOperation* OperationClass); // Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation // (Net|NetRequest|Exec|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	struct UUserWidget* Create(struct UObject* WorldContextObject, struct UUserWidget* WidgetType, struct APlayerController* OwningPlayer); // Function UMG.WidgetBlueprintLibrary.Create // (Net|Exec|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	struct FEventReply ClearUserFocus(struct FEventReply& Reply, bool bInAllUsers); // Function UMG.WidgetBlueprintLibrary.ClearUserFocus // (Net|NetRequest|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	struct FEventReply CaptureMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget); // Function UMG.WidgetBlueprintLibrary.CaptureMouse // (Static|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	struct FEventReply CaptureJoystick(struct FEventReply& Reply, struct UWidget* CapturingWidget, bool bInAllJoysticks); // Function UMG.WidgetBlueprintLibrary.CaptureJoystick // (NetReliableExec|Native|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
	void CancelDragDrop(); // Function UMG.WidgetBlueprintLibrary.CancelDragDrop // (NetReliableExec|Native|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31708200
};

// Class UMG.WidgetInteractionComponent
// Size: 0x510 (Inherited: 0x320)
struct UWidgetInteractionComponent : USceneComponent {
	struct FMulticastInlineDelegate OnHoveredWidgetChanged; // 0x318(0x10)
	char pad_330[0x8]; // 0x330(0x08)
	int32_t VirtualUserIndex; // 0x338(0x04)
	float PointerIndex; // 0x33c(0x04)
	enum class ECollisionChannel TraceChannel; // 0x340(0x01)
	char pad_341[0x3]; // 0x341(0x03)
	float InteractionDistance; // 0x344(0x04)
	enum class EWidgetInteractionSource InteractionSource; // 0x348(0x01)
	bool bEnableHitTesting; // 0x349(0x01)
	bool bShowDebug; // 0x34a(0x01)
	char pad_34B[0x1]; // 0x34b(0x01)
	struct FLinearColor DebugColor; // 0x34c(0x10)
	char pad_35C[0x7c]; // 0x35c(0x7c)
	struct FHitResult CustomHitResult; // 0x3d8(0x88)
	struct FVector2D LocalHitLocation; // 0x460(0x08)
	struct FVector2D LastLocalHitLocation; // 0x468(0x08)
	struct UWidgetComponent* HoveredWidgetComponent; // 0x470(0x08)
	struct FHitResult LastHitResult; // 0x478(0x88)
	bool bIsHoveredWidgetInteractable; // 0x500(0x01)
	bool bIsHoveredWidgetFocusable; // 0x501(0x01)
	bool bIsHoveredWidgetHitTestVisible; // 0x502(0x01)
	char pad_503[0xd]; // 0x503(0x0d)

	void SetFocus(struct UWidget* FocusWidget); // Function UMG.WidgetInteractionComponent.SetFocus // (Net|Native|NetResponse|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707d80
	void SetCustomHitResult(struct FHitResult& HitResult); // Function UMG.WidgetInteractionComponent.SetCustomHitResult // (Net|Exec|NetResponse|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707fc0
	bool SendKeyChar(struct FString Characters, bool bRepeat); // Function UMG.WidgetInteractionComponent.SendKeyChar // (NetRequest|NetResponse|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707fc0
	void ScrollWheel(float ScrollDelta); // Function UMG.WidgetInteractionComponent.ScrollWheel // (NetReliableNetResponse|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707fc0
	void ReleasePointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleasePointerKey // (Net|NetRequest|Exec|Native|Event|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707fc0
	bool ReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleaseKey // (Net|Exec|Native|Event|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707fc0
	void PressPointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressPointerKey // (Native|Event|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707fc0
	bool PressKey(struct FKey Key, bool bRepeat); // Function UMG.WidgetInteractionComponent.PressKey // (Net|NetReliableExec|Event|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707fc0
	bool PressAndReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressAndReleaseKey // (Net|NetReliableNetRequest|Event|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707fc0
	bool IsOverInteractableWidget(); // Function UMG.WidgetInteractionComponent.IsOverInteractableWidget // (NetReliableNetRequest|Event|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707fc0
	bool IsOverHitTestVisibleWidget(); // Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget // (NetReliableNetRequest|Event|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707fc0
	bool IsOverFocusableWidget(); // Function UMG.WidgetInteractionComponent.IsOverFocusableWidget // (Net|NetRequest|Event|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707fc0
	struct FHitResult GetLastHitResult(); // Function UMG.WidgetInteractionComponent.GetLastHitResult // (Native|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707fc0
	struct UWidgetComponent* GetHoveredWidgetComponent(); // Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent // (Event|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Private|Protected|NetServer|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707fc0
	struct FVector2D Get2DHitLocation(); // Function UMG.WidgetInteractionComponent.Get2DHitLocation // (NetReliableNetRequest|Exec|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707fc0
};

// Class UMG.WidgetLayoutLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWidgetLayoutLibrary : UBlueprintFunctionLibrary {

	struct UWrapBoxSlot* SlotAsWrapBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot // (NetReliableNetRequest|Static|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707900
	struct UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot // (NetRequest|Static|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707d80
	struct UVerticalBoxSlot* SlotAsVerticalBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot // (NetReliableStatic|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707d80
	struct UUniformGridSlot* SlotAsUniformGridSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot // (Static|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707d80
	struct USizeBoxSlot* SlotAsSizeBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot // (NetReliableNetRequest|Exec|Native|Event|NetResponse|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707d80
	struct UScrollBoxSlot* SlotAsScrollBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot // (NetRequest|Exec|Native|Event|NetResponse|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707d80
	struct UScaleBoxSlot* SlotAsScaleBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot // (NetReliableExec|Native|Event|NetResponse|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707d80
	struct USafeZoneSlot* SlotAsSafeBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot // (Exec|Native|Event|NetResponse|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707d80
	struct UOverlaySlot* SlotAsOverlaySlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot // (NetReliableNetRequest|Native|Event|NetResponse|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707d80
	struct UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot // (NetRequest|Native|Event|NetResponse|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707d80
	struct UGridSlot* SlotAsGridSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsGridSlot // (NetReliableNative|Event|NetResponse|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707d80
	struct UCanvasPanelSlot* SlotAsCanvasSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot // (Native|Event|NetResponse|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707d80
	struct UBorderSlot* SlotAsBorderSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot // (NetReliableNetRequest|Exec|Event|NetResponse|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707d80
	void RemoveAllWidgets(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.RemoveAllWidgets // (Net|NetResponse|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707d80
	bool ProjectWorldLocationToWidgetPosition(struct APlayerController* PlayerController, struct FVector WorldLocation, struct FVector2D& ScreenPosition, bool bPlayerViewportRelative); // Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition // (NetRequest|Native|Event|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707d80
	struct FGeometry GetViewportWidgetGeometry(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry // (NetReliableEvent|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707d80
	struct FVector2D GetViewportSize(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportSize // (Event|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707d80
	float GetViewportScale(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportScale // (NetReliableNetRequest|Exec|Native|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707d80
	struct FGeometry GetPlayerScreenWidgetGeometry(struct APlayerController* PlayerController); // Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry // (Net|NetReliableExec|Native|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707d80
	bool GetMousePositionScaledByDPI(struct APlayerController* Player, float& LocationX, float& LocationY); // Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI // (NetReliableNetRequest|Native|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707d80
	struct FVector2D GetMousePositionOnViewport(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport // (Net|NetReliableNative|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707d80
	struct FVector2D GetMousePositionOnPlatform(); // Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform // (NetReliableNative|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707d80
};

// Class UMG.WidgetNavigation
// Size: 0x100 (Inherited: 0x28)
struct UWidgetNavigation : UObject {
	struct FWidgetNavigationData Up; // 0x28(0x24)
	struct FWidgetNavigationData Down; // 0x4c(0x24)
	struct FWidgetNavigationData Left; // 0x70(0x24)
	struct FWidgetNavigationData Right; // 0x94(0x24)
	struct FWidgetNavigationData Next; // 0xb8(0x24)
	struct FWidgetNavigationData Previous; // 0xdc(0x24)
};

// Class UMG.WidgetSwitcherSlot
// Size: 0x58 (Inherited: 0x38)
struct UWidgetSwitcherSlot : UPanelSlot {
	char pad_38[0x8]; // 0x38(0x08)
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WidgetSwitcherSlot.SetVerticalAlignment // (NetReliableNetRequest|Event|NetResponse|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707480
	void SetPadding(struct FMargin InPadding); // Function UMG.WidgetSwitcherSlot.SetPadding // (Net|NetRequest|Exec|Native|NetResponse|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707900
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment // (Net|NetReliableNative|NetResponse|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707900
};

// Class UMG.WidgetTree
// Size: 0x30 (Inherited: 0x28)
struct UWidgetTree : UObject {
	struct UWidget* RootWidget; // 0x28(0x08)
};

// Class UMG.WindowTitleBarArea
// Size: 0x170 (Inherited: 0x150)
struct UWindowTitleBarArea : UContentWidget {
	bool bWindowButtonsEnabled; // 0x150(0x01)
	bool bDoubleClickTogglesFullscreen; // 0x151(0x01)
	char pad_152[0x1e]; // 0x152(0x1e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WindowTitleBarArea.SetVerticalAlignment // (Exec|Event|NetResponse|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707240
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarArea.SetPadding // (Net|NetReliableNetRequest|Exec|Native|NetResponse|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707480
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WindowTitleBarArea.SetHorizontalAlignment // (Net|NetRequest|Native|NetResponse|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707480
};

// Class UMG.WindowTitleBarAreaSlot
// Size: 0x60 (Inherited: 0x38)
struct UWindowTitleBarAreaSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment // (NetReliableExec|Event|NetResponse|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707000
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarAreaSlot.SetPadding // (NetReliableEvent|NetResponse|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707240
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment // (Net|NetReliableNetRequest|Native|NetResponse|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707240
};

// Class UMG.WrapBox
// Size: 0x170 (Inherited: 0x150)
struct UWrapBox : UPanelWidget {
	struct FVector2D InnerSlotPadding; // 0x150(0x08)
	float WrapWidth; // 0x158(0x04)
	bool bExplicitWrapWidth; // 0x15c(0x01)
	char pad_15D[0x13]; // 0x15d(0x13)

	void SetInnerSlotPadding(struct FVector2D InPadding); // Function UMG.WrapBox.SetInnerSlotPadding // (Net|NetReliableExec|Native|NetResponse|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31706dc0
	struct UWrapBoxSlot* AddChildToWrapBox(struct UWidget* Content); // Function UMG.WrapBox.AddChildToWrapBox // (NetRequest|Exec|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31707000
};

// Class UMG.WrapBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UWrapBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	bool bFillEmptySpace; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float FillSpanWhenLessThan; // 0x4c(0x04)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WrapBoxSlot.SetVerticalAlignment // (NetRequest|Exec|Event|NetResponse|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31706940
	void SetPadding(struct FMargin InPadding); // Function UMG.WrapBoxSlot.SetPadding // (NetRequest|Event|NetResponse|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31706dc0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WrapBoxSlot.SetHorizontalAlignment // (Net|Exec|Native|NetResponse|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31706dc0
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan); // Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan // (Net|NetReliableNetRequest|Exec|NetResponse|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31706dc0
	void SetFillEmptySpace(bool InbFillEmptySpace); // Function UMG.WrapBoxSlot.SetFillEmptySpace // (Net|NetRequest|Exec|NetResponse|NetMulticast|Delegate|HasDefaults|DLLImport|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f31706dc0
};

