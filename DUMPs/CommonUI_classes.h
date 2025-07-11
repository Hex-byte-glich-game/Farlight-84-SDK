// Class CommonUI.AnalogSlider
// Size: 0x5b8 (Inherited: 0x598)
struct UAnalogSlider : USlider {
	struct FMulticastInlineDelegate OnAnalogCapture; // 0x598(0x10)
	char pad_5A8[0x10]; // 0x5a8(0x10)
};

// Class CommonUI.CommonActionHandlerInterface
// Size: 0x28 (Inherited: 0x28)
struct UCommonActionHandlerInterface : UInterface {
};

// Class CommonUI.CommonActionWidget
// Size: 0x380 (Inherited: 0x138)
struct UCommonActionWidget : UWidget {
	struct FMulticastInlineDelegate OnInputMethodChanged; // 0x138(0x10)
	struct FSlateBrush ProgressMaterialBrush; // 0x148(0x98)
	struct FName ProgressMaterialParam; // 0x1e0(0x08)
	struct FSlateBrush IconRimBrush; // 0x1e8(0x98)
	struct TArray<struct FDataTableRowHandle> InputActions; // 0x280(0x10)
	char pad_290[0x8]; // 0x290(0x08)
	struct UMaterialInstanceDynamic* ProgressDynamicMaterial; // 0x298(0x08)
	char pad_2A0[0xe0]; // 0x2a0(0xe0)

	void SetInputActions(struct TArray<struct FDataTableRowHandle> NewInputActions); // Function CommonUI.CommonActionWidget.SetInputActions // (Net|Event|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32811400
	void SetInputAction(struct FDataTableRowHandle InputActionRow); // Function CommonUI.CommonActionWidget.SetInputAction // (Net|NetReliableNetRequest|Native|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f328100a0
	void SetIconRimBrush(struct FSlateBrush InIconRimBrush); // Function CommonUI.CommonActionWidget.SetIconRimBrush // (Net|Native|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a37c0
	void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // DelegateFunction CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a37c0
	bool IsHeldAction(); // Function CommonUI.CommonActionWidget.IsHeldAction // (Net|NetReliableNetRequest|Exec|Native|Event|NetResponse|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a37c0
	struct FSlateBrush GetIcon(); // Function CommonUI.CommonActionWidget.GetIcon // (NetReliableNetResponse|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a37c0
	struct FText GetDisplayText(); // Function CommonUI.CommonActionWidget.GetDisplayText // (Net|NetReliableNetRequest|Exec|Native|Event|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a37c0
};

// Class CommonUI.CommonUserWidget
// Size: 0x288 (Inherited: 0x260)
struct UCommonUserWidget : UUserWidget {
	bool bConsumePointerInput; // 0x260(0x01)
	char pad_261[0x27]; // 0x261(0x27)

	void SetConsumePointerInput(bool bInConsumePointerInput); // Function CommonUI.CommonUserWidget.SetConsumePointerInput // (Net|NetRequest|Exec|Native|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6040
};

// Class CommonUI.CommonActivatableWidget
// Size: 0x320 (Inherited: 0x288)
struct UCommonActivatableWidget : UCommonUserWidget {
	bool bAutoActivate; // 0x288(0x01)
	bool bIsBackHandler; // 0x289(0x01)
	bool bSupportsActivationFocus; // 0x28a(0x01)
	bool bIsModal; // 0x28b(0x01)
	bool bAutoRestoreFocus; // 0x28c(0x01)
	bool bSetVisibilityOnActivated; // 0x28d(0x01)
	enum class ESlateVisibility ActivatedVisibility; // 0x28e(0x01)
	bool bSetVisibilityOnDeactivated; // 0x28f(0x01)
	enum class ESlateVisibility DeactivatedVisibility; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct FMulticastInlineDelegate BP_OnWidgetActivated; // 0x298(0x10)
	struct FMulticastInlineDelegate BP_OnWidgetDeactivated; // 0x2a8(0x10)
	bool bIsActive; // 0x2b8(0x01)
	char pad_2B9[0x67]; // 0x2b9(0x67)

	bool IsActivated(); // Function CommonUI.CommonActivatableWidget.IsActivated // (Net|NetReliableNetRequest|Exec|Native|Event|NetResponse|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a3100
	void DeactivateWidget(); // Function CommonUI.CommonActivatableWidget.DeactivateWidget // (NetReliableEvent|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a3580
	bool BP_OnHandleBackAction(); // Function CommonUI.CommonActivatableWidget.BP_OnHandleBackAction // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a3580
	void BP_OnDeactivated(); // Function CommonUI.CommonActivatableWidget.BP_OnDeactivated // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a3580
	void BP_OnActivated(); // Function CommonUI.CommonActivatableWidget.BP_OnActivated // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a3580
	struct UWidget* BP_GetDesiredFocusTarget(); // Function CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a3580
	void ActivateWidget(); // Function CommonUI.CommonActivatableWidget.ActivateWidget // (NetReliableNetRequest|Exec|Native|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a3580
};

// Class CommonUI.CommonActivatableWidgetContainerBase
// Size: 0x238 (Inherited: 0x138)
struct UCommonActivatableWidgetContainerBase : UWidget {
	enum class ECommonSwitcherTransition TransitionType; // 0x138(0x01)
	enum class ETransitionCurve TransitionCurveType; // 0x139(0x01)
	char pad_13A[0x2]; // 0x13a(0x02)
	float TransitionDuration; // 0x13c(0x04)
	struct TArray<struct UCommonActivatableWidget*> WidgetList; // 0x140(0x10)
	struct UCommonActivatableWidget* DisplayedWidget; // 0x150(0x08)
	struct FUserWidgetPool GeneratedWidgetsPool; // 0x158(0x80)
	char pad_1D8[0x60]; // 0x1d8(0x60)

	void RemoveWidget(struct UCommonActivatableWidget* WidgetToRemove); // Function CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget // (NetReliableNetRequest|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a25c0
	struct UCommonActivatableWidget* GetActiveWidget(); // Function CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget // (Net|NetRequest|Event|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a3100
	void ClearWidgets(); // Function CommonUI.CommonActivatableWidgetContainerBase.ClearWidgets // (Net|Event|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a3100
	struct UCommonActivatableWidget* BP_AddWidget(struct UCommonActivatableWidget* ActivatableWidgetClass); // Function CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget // (NetReliableNetRequest|Exec|Native|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a3100
};

// Class CommonUI.CommonActivatableWidgetStack
// Size: 0x248 (Inherited: 0x238)
struct UCommonActivatableWidgetStack : UCommonActivatableWidgetContainerBase {
	struct UCommonActivatableWidget* RootContentWidgetClass; // 0x238(0x08)
	struct UCommonActivatableWidget* RootContentWidget; // 0x240(0x08)
};

// Class CommonUI.CommonActivatableWidgetQueue
// Size: 0x238 (Inherited: 0x238)
struct UCommonActivatableWidgetQueue : UCommonActivatableWidgetContainerBase {
};

// Class CommonUI.CommonAnimatedSwitcher
// Size: 0x1c0 (Inherited: 0x168)
struct UCommonAnimatedSwitcher : UWidgetSwitcher {
	char pad_168[0x18]; // 0x168(0x18)
	enum class ECommonSwitcherTransition TransitionType; // 0x180(0x01)
	enum class ETransitionCurve TransitionCurveType; // 0x181(0x01)
	char pad_182[0x2]; // 0x182(0x02)
	float TransitionDuration; // 0x184(0x04)
	char pad_188[0x38]; // 0x188(0x38)

	void SetDisableTransitionAnimation(bool bDisableAnimation); // Function CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation // (NetReliableExec|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a2140
	bool HasWidgets(); // Function CommonUI.CommonAnimatedSwitcher.HasWidgets // (NetReliableNetRequest|Exec|Native|Event|NetResponse|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a2800
	void ActivatePreviousWidget(bool bCanWrap); // Function CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget // (NetRequest|Exec|Native|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a2800
	void ActivateNextWidget(bool bCanWrap); // Function CommonUI.CommonAnimatedSwitcher.ActivateNextWidget // (Net|Exec|Native|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a2800
};

// Class CommonUI.CommonActivatableWidgetSwitcher
// Size: 0x1c0 (Inherited: 0x1c0)
struct UCommonActivatableWidgetSwitcher : UCommonAnimatedSwitcher {
};

// Class CommonUI.CommonBorderStyle
// Size: 0xc0 (Inherited: 0x28)
struct UCommonBorderStyle : UObject {
	struct FSlateBrush Background; // 0x28(0x98)

	void GetBackgroundBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonBorderStyle.GetBackgroundBrush // (NetReliableNetRequest|Event|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1f00
};

// Class CommonUI.CommonBorder
// Size: 0x2d0 (Inherited: 0x2b0)
struct UCommonBorder : UBorder {
	struct UCommonBorderStyle* Style; // 0x2b0(0x08)
	bool bReducePaddingBySafezone; // 0x2b8(0x01)
	char pad_2B9[0x3]; // 0x2b9(0x03)
	struct FMargin MinimumPadding; // 0x2bc(0x10)
	char pad_2CC[0x4]; // 0x2cc(0x04)

	void SetStyle(struct UCommonBorderStyle* InStyle); // Function CommonUI.CommonBorder.SetStyle // (Net|NetReliableNetResponse|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1600
};

// Class CommonUI.CommonBoundActionBar
// Size: 0x208 (Inherited: 0x1f8)
struct UCommonBoundActionBar : UDynamicEntryBoxBase {
	struct UCommonBoundActionButton* ActionButtonClass; // 0x1f8(0x08)
	bool bDisplayOwningPlayerActionsOnly; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)

	void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions); // Function CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly // (NetRequest|Exec|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
};

// Class CommonUI.CommonButtonBase
// Size: 0xc60 (Inherited: 0x288)
struct UCommonButtonBase : UCommonUserWidget {
	int32_t MinWidth; // 0x288(0x04)
	int32_t MinHeight; // 0x28c(0x04)
	struct UCommonButtonStyle* Style; // 0x290(0x08)
	bool bHideInputAction; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct FSlateSound PressedSlateSoundOverride; // 0x2a0(0x18)
	struct FSlateSound HoveredSlateSoundOverride; // 0x2b8(0x18)
	char bApplyAlphaOnDisable : 1; // 0x2d0(0x01)
	char bSelectable : 1; // 0x2d0(0x01)
	char bShouldSelectUponReceivingFocus : 1; // 0x2d0(0x01)
	char bInteractableWhenSelected : 1; // 0x2d0(0x01)
	char bToggleable : 1; // 0x2d0(0x01)
	char bDisplayInputActionWhenNotInteractable : 1; // 0x2d0(0x01)
	char bHideInputActionWithKeyboard : 1; // 0x2d0(0x01)
	char bShouldUseFallbackDefaultInputAction : 1; // 0x2d0(0x01)
	char pad_2D1[0x1]; // 0x2d1(0x01)
	enum class EButtonClickMethod ClickMethod; // 0x2d2(0x01)
	enum class EButtonTouchMethod TouchMethod; // 0x2d3(0x01)
	enum class EButtonPressMethod PressMethod; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)
	int32_t InputPriority; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct FDataTableRowHandle TriggeringInputAction; // 0x2e0(0x10)
	char pad_2F0[0x10]; // 0x2f0(0x10)
	struct FMulticastInlineDelegate OnSelectedChangedBase; // 0x300(0x10)
	struct FMulticastInlineDelegate OnButtonBaseClicked; // 0x310(0x10)
	struct FMulticastInlineDelegate OnButtonBaseDoubleClicked; // 0x320(0x10)
	struct FMulticastInlineDelegate OnButtonBaseHovered; // 0x330(0x10)
	struct FMulticastInlineDelegate OnButtonBaseUnhovered; // 0x340(0x10)
	char pad_350[0x4]; // 0x350(0x04)
	bool bIsPersistentBinding; // 0x354(0x01)
	enum class ECommonInputMode InputModeOverride; // 0x355(0x01)
	char pad_356[0x32]; // 0x356(0x32)
	struct UMaterialInstanceDynamic* SingleMaterialStyleMID; // 0x388(0x08)
	struct FButtonStyle NormalStyle; // 0x390(0x2b8)
	struct FButtonStyle SelectedStyle; // 0x648(0x2b8)
	struct FButtonStyle DisabledStyle; // 0x900(0x2b8)
	char bStopDoubleClickPropagation : 1; // 0xbb8(0x01)
	char pad_BB8_1 : 7; // 0xbb8(0x01)
	char pad_BB9[0x9f]; // 0xbb9(0x9f)
	struct UCommonActionWidget* InputActionWidget; // 0xc58(0x08)

	void StopDoubleClickPropagation(); // Function CommonUI.CommonButtonBase.StopDoubleClickPropagation // (NetReliableNetRequest|Exec|NetResponse|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a13c0
	void SetTriggeringInputAction(struct FDataTableRowHandle& InputActionRow); // Function CommonUI.CommonButtonBase.SetTriggeringInputAction // (NetRequest|Exec|NetResponse|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void SetTriggeredInputAction(struct FDataTableRowHandle& InputActionRow); // Function CommonUI.CommonButtonBase.SetTriggeredInputAction // (Net|Exec|NetResponse|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function CommonUI.CommonButtonBase.SetTouchMethod // (Net|NetReliableNetRequest|NetResponse|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void SetStyle(struct UCommonButtonStyle* InStyle); // Function CommonUI.CommonButtonBase.SetStyle // (Net|NetRequest|NetResponse|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction); // Function CommonUI.CommonButtonBase.SetShouldUseFallbackDefaultInputAction // (Net|NetResponse|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus); // Function CommonUI.CommonButtonBase.SetShouldSelectUponReceivingFocus // (Net|NetReliableNetRequest|Exec|Native|Event|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast); // Function CommonUI.CommonButtonBase.SetSelectedInternal // (NetReliableExec|Native|Event|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // Function CommonUI.CommonButtonBase.SetPressMethod // (NetReliableNetRequest|Native|Event|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void SetPressedSoundOverride(struct USoundBase* Sound); // Function CommonUI.CommonButtonBase.SetPressedSoundOverride // (Exec|Native|Event|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void SetMinDimensions(int32_t InMinWidth, int32_t InMinHeight); // Function CommonUI.CommonButtonBase.SetMinDimensions // (Net|NetReliableNative|Event|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void SetIsToggleable(bool bInIsToggleable); // Function CommonUI.CommonButtonBase.SetIsToggleable // (Net|Native|Event|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void SetIsSelected(bool InSelected, bool bGiveClickFeedback); // Function CommonUI.CommonButtonBase.SetIsSelected // (NetReliableNetRequest|Exec|Event|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void SetIsSelectable(bool bInIsSelectable); // Function CommonUI.CommonButtonBase.SetIsSelectable // (Net|NetReliableExec|Event|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void SetIsInteractionEnabled(bool bInIsInteractionEnabled); // Function CommonUI.CommonButtonBase.SetIsInteractionEnabled // (Net|Exec|Event|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected); // Function CommonUI.CommonButtonBase.SetIsInteractableWhenSelected // (Net|NetReliableNetRequest|Event|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void SetIsFocusable(bool bInIsFocusable); // Function CommonUI.CommonButtonBase.SetIsFocusable // (Net|NetRequest|Event|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void SetInputActionProgressMaterial(struct FSlateBrush& InProgressMaterialBrush, struct FName& InProgressMaterialParam); // Function CommonUI.CommonButtonBase.SetInputActionProgressMaterial // (Net|Exec|Native|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void SetHoveredSoundOverride(struct USoundBase* Sound); // Function CommonUI.CommonButtonBase.SetHoveredSoundOverride // (Net|NetReliableNetRequest|Exec|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Function CommonUI.CommonButtonBase.SetClickMethod // (Exec|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function CommonUI.CommonButtonBase.OnTriggeredInputActionChanged // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType); // Function CommonUI.CommonButtonBase.OnInputMethodChanged // (NetRequest|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void OnCurrentTextStyleChanged(); // Function CommonUI.CommonButtonBase.OnCurrentTextStyleChanged // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void OnActionProgress(float HeldPercent); // Function CommonUI.CommonButtonBase.OnActionProgress // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void OnActionComplete(); // Function CommonUI.CommonButtonBase.OnActionComplete // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void NativeOnActionProgress(float HeldPercent); // Function CommonUI.CommonButtonBase.NativeOnActionProgress // (NetReliableNetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void NativeOnActionComplete(); // Function CommonUI.CommonButtonBase.NativeOnActionComplete // (NetReliableNetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	bool IsPressed(); // Function CommonUI.CommonButtonBase.IsPressed // (Net|NetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	bool IsInteractionEnabled(); // Function CommonUI.CommonButtonBase.IsInteractionEnabled // (NetMulticast|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void HandleTriggeringActionCommited(bool& bPassThrough); // Function CommonUI.CommonButtonBase.HandleTriggeringActionCommited // (NetRequest|Exec|Native|Event|NetResponse|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void HandleFocusReceived(); // Function CommonUI.CommonButtonBase.HandleFocusReceived // (Net|NetReliableExec|Native|Event|NetResponse|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void HandleButtonReleased(); // Function CommonUI.CommonButtonBase.HandleButtonReleased // (Net|NetReliableExec|Native|Event|NetResponse|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void HandleButtonPressed(); // Function CommonUI.CommonButtonBase.HandleButtonPressed // (NetReliableExec|Native|Event|NetResponse|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void HandleButtonClicked(); // Function CommonUI.CommonButtonBase.HandleButtonClicked // (NetReliableExec|Native|Event|NetResponse|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	struct UCommonButtonStyle* GetStyle(); // Function CommonUI.CommonButtonBase.GetStyle // (Net|Exec|Native|Event|NetResponse|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	struct UMaterialInstanceDynamic* GetSingleMaterialStyleMID(); // Function CommonUI.CommonButtonBase.GetSingleMaterialStyleMID // (Exec|Native|Event|NetResponse|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	bool GetShouldSelectUponReceivingFocus(); // Function CommonUI.CommonButtonBase.GetShouldSelectUponReceivingFocus // (Net|NetReliableNetRequest|Native|Event|NetResponse|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	bool GetSelected(); // Function CommonUI.CommonButtonBase.GetSelected // (NetReliableEvent|NetResponse|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	bool GetIsFocusable(); // Function CommonUI.CommonButtonBase.GetIsFocusable // (Net|NetReliableNetRequest|NetResponse|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	bool GetInputAction(struct FDataTableRowHandle& InputActionRow); // Function CommonUI.CommonButtonBase.GetInputAction // (NetRequest|NetResponse|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	struct UCommonTextStyle* GetCurrentTextStyleClass(); // Function CommonUI.CommonButtonBase.GetCurrentTextStyleClass // (Net|NetRequest|Native|Event|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	struct UCommonTextStyle* GetCurrentTextStyle(); // Function CommonUI.CommonButtonBase.GetCurrentTextStyle // (NetRequest|Native|Event|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void GetCurrentCustomPadding(struct FMargin& OutCustomPadding); // Function CommonUI.CommonButtonBase.GetCurrentCustomPadding // (Net|Native|Event|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void GetCurrentButtonPadding(struct FMargin& OutButtonPadding); // Function CommonUI.CommonButtonBase.GetCurrentButtonPadding // (Net|NetReliableNetRequest|Exec|Event|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void DisableButtonWithReason(struct FText& DisabledReason); // Function CommonUI.CommonButtonBase.DisableButtonWithReason // (NetReliableEvent|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void ClearSelection(); // Function CommonUI.CommonButtonBase.ClearSelection // (Net|Event|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void BP_OnUnhovered(); // Function CommonUI.CommonButtonBase.BP_OnUnhovered // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void BP_OnSelected(); // Function CommonUI.CommonButtonBase.BP_OnSelected // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void BP_OnHovered(); // Function CommonUI.CommonButtonBase.BP_OnHovered // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void BP_OnEnabled(); // Function CommonUI.CommonButtonBase.BP_OnEnabled // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void BP_OnDoubleClicked(); // Function CommonUI.CommonButtonBase.BP_OnDoubleClicked // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void BP_OnDisabled(); // Function CommonUI.CommonButtonBase.BP_OnDisabled // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void BP_OnDeselected(); // Function CommonUI.CommonButtonBase.BP_OnDeselected // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
	void BP_OnClicked(); // Function CommonUI.CommonButtonBase.BP_OnClicked // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a1180
};

// Class CommonUI.CommonBoundActionButton
// Size: 0xc70 (Inherited: 0xc60)
struct UCommonBoundActionButton : UCommonButtonBase {
	struct UCommonTextBlock* Text_ActionName; // 0xc60(0x08)
	char pad_C68[0x8]; // 0xc68(0x08)

	void OnUpdateInputAction(); // Function CommonUI.CommonBoundActionButton.OnUpdateInputAction // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0f40
};

// Class CommonUI.CommonButtonStyle
// Size: 0x5f0 (Inherited: 0x28)
struct UCommonButtonStyle : UObject {
	bool bSingleMaterial; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FSlateBrush SingleMaterialBrush; // 0x30(0x98)
	struct FSlateBrush NormalBase; // 0xc8(0x98)
	struct FSlateBrush NormalHovered; // 0x160(0x98)
	struct FSlateBrush NormalPressed; // 0x1f8(0x98)
	struct FSlateBrush SelectedBase; // 0x290(0x98)
	struct FSlateBrush SelectedHovered; // 0x328(0x98)
	struct FSlateBrush SelectedPressed; // 0x3c0(0x98)
	struct FSlateBrush Disabled; // 0x458(0x98)
	struct FMargin ButtonPadding; // 0x4f0(0x10)
	struct FMargin CustomPadding; // 0x500(0x10)
	int32_t MinWidth; // 0x510(0x04)
	int32_t MinHeight; // 0x514(0x04)
	struct UCommonTextStyle* NormalTextStyle; // 0x518(0x08)
	struct UCommonTextStyle* NormalHoveredTextStyle; // 0x520(0x08)
	struct UCommonTextStyle* SelectedTextStyle; // 0x528(0x08)
	struct UCommonTextStyle* SelectedHoveredTextStyle; // 0x530(0x08)
	struct UCommonTextStyle* DisabledTextStyle; // 0x538(0x08)
	struct FSlateSound PressedSlateSound; // 0x540(0x18)
	struct FCommonButtonStyleOptionalSlateSound SelectedPressedSlateSound; // 0x558(0x20)
	struct FCommonButtonStyleOptionalSlateSound DisabledPressedSlateSound; // 0x578(0x20)
	struct FSlateSound HoveredSlateSound; // 0x598(0x18)
	struct FCommonButtonStyleOptionalSlateSound SelectedHoveredSlateSound; // 0x5b0(0x20)
	struct FCommonButtonStyleOptionalSlateSound DisabledHoveredSlateSound; // 0x5d0(0x20)

	struct UCommonTextStyle* GetSelectedTextStyle(); // Function CommonUI.CommonButtonStyle.GetSelectedTextStyle // (Net|NetReliableNetRequest|Native|Event|NetResponse|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0ac0
	void GetSelectedPressedBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetSelectedPressedBrush // (Native|Event|NetResponse|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0f40
	struct UCommonTextStyle* GetSelectedHoveredTextStyle(); // Function CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle // (Native|Event|NetResponse|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0f40
	void GetSelectedHoveredBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetSelectedHoveredBrush // (Net|Exec|Event|NetResponse|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0f40
	void GetSelectedBaseBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetSelectedBaseBrush // (Net|NetReliableEvent|NetResponse|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0f40
	struct UCommonTextStyle* GetNormalTextStyle(); // Function CommonUI.CommonButtonStyle.GetNormalTextStyle // (NetReliableEvent|NetResponse|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0f40
	void GetNormalPressedBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetNormalPressedBrush // (Net|NetReliableExec|Native|NetResponse|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0f40
	struct UCommonTextStyle* GetNormalHoveredTextStyle(); // Function CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle // (Net|NetReliableExec|Native|NetResponse|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0f40
	void GetNormalHoveredBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetNormalHoveredBrush // (NetRequest|Native|NetResponse|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0f40
	void GetNormalBaseBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetNormalBaseBrush // (NetReliableNetRequest|Exec|NetResponse|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0f40
	void GetMaterialBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetMaterialBrush // (Exec|NetResponse|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0f40
	struct UCommonTextStyle* GetDisabledTextStyle(); // Function CommonUI.CommonButtonStyle.GetDisabledTextStyle // (NetReliableNetRequest|Exec|Native|Event|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0f40
	void GetDisabledBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetDisabledBrush // (Exec|Native|Event|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0f40
	void GetCustomPadding(struct FMargin& OutCustomPadding); // Function CommonUI.CommonButtonStyle.GetCustomPadding // (NetReliableNetRequest|Native|Event|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0f40
	void GetButtonPadding(struct FMargin& OutButtonPadding); // Function CommonUI.CommonButtonStyle.GetButtonPadding // (NetRequest|Exec|Event|Static|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0f40
};

// Class CommonUI.CommonButtonInternalBase
// Size: 0x4f8 (Inherited: 0x498)
struct UCommonButtonInternalBase : UButton {
	char pad_498[0x10]; // 0x498(0x10)
	struct FMulticastInlineDelegate OnDoubleClicked; // 0x4a8(0x10)
	char pad_4B8[0x10]; // 0x4b8(0x10)
	int32_t MinWidth; // 0x4c8(0x04)
	int32_t MinHeight; // 0x4cc(0x04)
	bool bButtonEnabled; // 0x4d0(0x01)
	bool bInteractionEnabled; // 0x4d1(0x01)
	char pad_4D2[0x26]; // 0x4d2(0x26)
};

// Class CommonUI.CommonWidgetGroupBase
// Size: 0x28 (Inherited: 0x28)
struct UCommonWidgetGroupBase : UObject {

	void RemoveWidget(struct UWidget* InWidget); // Function CommonUI.CommonWidgetGroupBase.RemoveWidget // (NetReliableNative|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0880
	void RemoveAll(); // Function CommonUI.CommonWidgetGroupBase.RemoveAll // (NetReliableNative|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0640
	void AddWidget(struct UWidget* InWidget); // Function CommonUI.CommonWidgetGroupBase.AddWidget // (Net|NetRequest|Exec|Native|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0640
};

// Class CommonUI.CommonButtonGroupBase
// Size: 0x110 (Inherited: 0x28)
struct UCommonButtonGroupBase : UCommonWidgetGroupBase {
	struct FMulticastInlineDelegate OnSelectedButtonBaseChanged; // 0x28(0x10)
	char pad_38[0x18]; // 0x38(0x18)
	struct FMulticastInlineDelegate OnHoveredButtonBaseChanged; // 0x50(0x10)
	char pad_60[0x18]; // 0x60(0x18)
	struct FMulticastInlineDelegate OnButtonBaseClicked; // 0x78(0x10)
	char pad_88[0x18]; // 0x88(0x18)
	struct FMulticastInlineDelegate OnButtonBaseDoubleClicked; // 0xa0(0x10)
	char pad_B0[0x18]; // 0xb0(0x18)
	struct FMulticastInlineDelegate OnSelectionCleared; // 0xc8(0x10)
	char pad_D8[0x18]; // 0xd8(0x18)
	bool bSelectionRequired; // 0xf0(0x01)
	char pad_F1[0x1f]; // 0xf1(0x1f)

	void SetSelectionRequired(bool bRequireSelection); // Function CommonUI.CommonButtonGroupBase.SetSelectionRequired // (Net|NetReliableExec|Static|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a01c0
	void SelectPreviousButton(bool bAllowWrap); // Function CommonUI.CommonButtonGroupBase.SelectPreviousButton // (NetReliableNetRequest|Native|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0880
	void SelectNextButton(bool bAllowWrap); // Function CommonUI.CommonButtonGroupBase.SelectNextButton // (NetRequest|Native|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0880
	void SelectButtonAtIndex(int32_t ButtonIndex); // Function CommonUI.CommonButtonGroupBase.SelectButtonAtIndex // (NetReliableNative|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0880
	void OnSelectionStateChangedBase(struct UCommonButtonBase* BaseButton, bool bIsSelected); // Function CommonUI.CommonButtonGroupBase.OnSelectionStateChangedBase // (NetReliableNetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0880
	void OnHandleButtonBaseDoubleClicked(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseDoubleClicked // (NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0880
	void OnHandleButtonBaseClicked(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseClicked // (Net|NetRequest|Exec|Native|Event|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0880
	void OnButtonBaseUnhovered(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnButtonBaseUnhovered // (Net|NetReliableExec|Native|Event|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0880
	void OnButtonBaseHovered(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnButtonBaseHovered // (Net|Exec|Native|Event|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0880
	bool HasAnyButtons(); // Function CommonUI.CommonButtonGroupBase.HasAnyButtons // (Net|NetReliableNetRequest|Exec|Event|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0880
	int32_t GetSelectedButtonIndex(); // Function CommonUI.CommonButtonGroupBase.GetSelectedButtonIndex // (Net|NetReliableNetRequest|Native|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0880
	struct UCommonButtonBase* GetSelectedButtonBase(); // Function CommonUI.CommonButtonGroupBase.GetSelectedButtonBase // (NetReliableNetRequest|Native|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0880
	int32_t GetHoveredButtonIndex(); // Function CommonUI.CommonButtonGroupBase.GetHoveredButtonIndex // (NetRequest|Native|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0880
	int32_t GetButtonCount(); // Function CommonUI.CommonButtonGroupBase.GetButtonCount // (NetReliableNative|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0880
	struct UCommonButtonBase* GetButtonBaseAtIndex(int32_t Index); // Function CommonUI.CommonButtonGroupBase.GetButtonBaseAtIndex // (Native|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0880
	int32_t FindButtonIndex(struct UCommonButtonBase* ButtonToFind); // Function CommonUI.CommonButtonGroupBase.FindButtonIndex // (Net|NetRequest|Exec|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0880
	void DeselectAll(); // Function CommonUI.CommonButtonGroupBase.DeselectAll // (Exec|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a0880
};

// Class CommonUI.CommonCustomNavigation
// Size: 0x2c0 (Inherited: 0x2b0)
struct UCommonCustomNavigation : UBorder {
	struct FDelegate OnNavigationEvent; // 0x2b0(0x10)
};

// Class CommonUI.CommonTextBlock
// Size: 0x318 (Inherited: 0x2f0)
struct UCommonTextBlock : UTextBlock {
	struct UCommonTextStyle* Style; // 0x2f0(0x08)
	struct UCommonTextScrollStyle* ScrollStyle; // 0x2f8(0x08)
	bool bDisplayAllCaps; // 0x300(0x01)
	bool bAutoCollapseWithEmptyText; // 0x301(0x01)
	char pad_302[0x2]; // 0x302(0x02)
	float MobileFontSizeMultiplier; // 0x304(0x04)
	char pad_308[0x10]; // 0x308(0x10)

	void SetWrapTextWidth(int32_t InWrapTextAt); // Function CommonUI.CommonTextBlock.SetWrapTextWidth // (NetReliableNetRequest|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6b80
	void SetTextCase(bool bUseAllCaps); // Function CommonUI.CommonTextBlock.SetTextCase // (NetRequest|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a9400
	void SetStyle(struct UCommonTextStyle* InStyle); // Function CommonUI.CommonTextBlock.SetStyle // (NetReliableNetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a9400
	void ResetScrollState(); // Function CommonUI.CommonTextBlock.ResetScrollState // (NetRequest|Native|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a9400
};

// Class CommonUI.CommonDateTimeTextBlock
// Size: 0x358 (Inherited: 0x318)
struct UCommonDateTimeTextBlock : UCommonTextBlock {
	char pad_318[0x40]; // 0x318(0x40)

	void SetTimespanValue(struct FTimespan InTimespan); // Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue // (Net|NetReliableNetRequest|Native|Static|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a88c0
	void SetDateTimeValue(struct FDateTime InDateTime, bool bShowAsCountdown, float InRefreshDelay); // Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue // (Net|NetRequest|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a01c0
	void SetCountDownCompletionText(struct FText InCompletionText); // Function CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText // (Net|NetReliableNetRequest|Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a01c0
	struct FDateTime GetDateTime(); // Function CommonUI.CommonDateTimeTextBlock.GetDateTime // (Net|NetReliableNative|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a01c0
};

// Class CommonUI.CommonGameViewportClient
// Size: 0x370 (Inherited: 0x330)
struct UCommonGameViewportClient : UGameViewportClient {
	char pad_330[0x40]; // 0x330(0x40)
};

// Class CommonUI.CommonHierarchicalScrollBox
// Size: 0x980 (Inherited: 0x980)
struct UCommonHierarchicalScrollBox : UScrollBox {
};

// Class CommonUI.CommonLazyImage
// Size: 0x328 (Inherited: 0x250)
struct UCommonLazyImage : UImage {
	struct FSlateBrush LoadingBackgroundBrush; // 0x250(0x98)
	struct FName MaterialTextureParamName; // 0x2e8(0x08)
	struct FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x2f0(0x10)
	char pad_300[0x28]; // 0x300(0x28)

	void SetMaterialTextureParamName(struct FName TextureParamName); // Function CommonUI.CommonLazyImage.SetMaterialTextureParamName // (Net|NetReliableStatic|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7b40
	void SetBrushFromLazyTexture(struct TSoftObjectPtr<UTexture2D>& LazyTexture, bool bMatchSize); // Function CommonUI.CommonLazyImage.SetBrushFromLazyTexture // (Net|NetReliableEvent|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7fc0
	void SetBrushFromLazyMaterial(struct TSoftObjectPtr<UMaterialInterface>& LazyMaterial); // Function CommonUI.CommonLazyImage.SetBrushFromLazyMaterial // (Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7fc0
	void SetBrushFromLazyDisplayAsset(struct TSoftObjectPtr<UObject>& LazyObject, bool bMatchTextureSize); // Function CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset // (NetRequest|Exec|Native|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7fc0
	bool IsLoading(); // Function CommonUI.CommonLazyImage.IsLoading // (NetReliableNetRequest|Native|Event|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7fc0
};

// Class CommonUI.CommonLazyWidget
// Size: 0x250 (Inherited: 0x138)
struct UCommonLazyWidget : UWidget {
	struct FSlateBrush LoadingBackgroundBrush; // 0x138(0x98)
	struct UUserWidget* Content; // 0x1d0(0x08)
	char pad_1D8[0x28]; // 0x1d8(0x28)
	struct FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x200(0x10)
	char pad_210[0x40]; // 0x210(0x40)

	void SetLazyContent(struct TSoftClassPtr<UObject> SoftWidget); // Function CommonUI.CommonLazyWidget.SetLazyContent // (Net|NetReliableNetRequest|Native|Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7480
	bool IsLoading(); // Function CommonUI.CommonLazyWidget.IsLoading // (Net|NetReliableNetRequest|Native|Event|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7b40
	struct UUserWidget* GetContent(); // Function CommonUI.CommonLazyWidget.GetContent // (Net|NetReliableNative|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7b40
};

// Class CommonUI.CommonListView
// Size: 0x950 (Inherited: 0x950)
struct UCommonListView : UListView {

	void SetEntrySpacing(float InEntrySpacing); // Function CommonUI.CommonListView.SetEntrySpacing // (Net|Native|Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7240
};

// Class CommonUI.LoadGuardSlot
// Size: 0x60 (Inherited: 0x38)
struct ULoadGuardSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function CommonUI.LoadGuardSlot.SetVerticalAlignment // (Net|Exec|Native|Static|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6940
	void SetPadding(struct FMargin InPadding); // Function CommonUI.LoadGuardSlot.SetPadding // (Net|NetReliableNetRequest|Static|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7240
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function CommonUI.LoadGuardSlot.SetHorizontalAlignment // (Net|NetReliableNative|Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a7240
};

// Class CommonUI.CommonLoadGuard
// Size: 0x270 (Inherited: 0x150)
struct UCommonLoadGuard : UContentWidget {
	struct FSlateBrush LoadingBackgroundBrush; // 0x150(0x98)
	enum class EHorizontalAlignment ThrobberAlignment; // 0x1e8(0x01)
	char pad_1E9[0x3]; // 0x1e9(0x03)
	struct FMargin ThrobberPadding; // 0x1ec(0x10)
	char pad_1FC[0x4]; // 0x1fc(0x04)
	struct FText LoadingText; // 0x200(0x18)
	struct UCommonTextStyle* TextStyle; // 0x218(0x08)
	struct FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x220(0x10)
	struct FSoftObjectPath SpinnerMaterialPath; // 0x230(0x18)
	char pad_248[0x28]; // 0x248(0x28)

	void SetLoadingText(struct FText& InLoadingText); // Function CommonUI.CommonLoadGuard.SetLoadingText // (Net|NetReliableNetRequest|Exec|Native|Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a91c0
	void SetIsLoading(bool bInIsLoading); // Function CommonUI.CommonLoadGuard.SetIsLoading // (Net|NetRequest|Native|Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6dc0
	void OnAssetLoaded__DelegateSignature(struct UObject* Object); // DelegateFunction CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6dc0
	bool IsLoading(); // Function CommonUI.CommonLoadGuard.IsLoading // (Exec|Native|Event|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6dc0
	void BP_GuardAndLoadAsset(struct TSoftObjectPtr<UObject>& InLazyAsset, struct FDelegate& OnAssetLoaded); // Function CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset // (NetRequest|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6dc0
};

// Class CommonUI.CommonNumericTextBlock
// Size: 0x3b8 (Inherited: 0x318)
struct UCommonNumericTextBlock : UCommonTextBlock {
	struct FMulticastInlineDelegate OnInterpolationStartedEvent; // 0x318(0x10)
	struct FMulticastInlineDelegate OnInterpolationUpdatedEvent; // 0x328(0x10)
	struct FMulticastInlineDelegate OnOutroEvent; // 0x338(0x10)
	struct FMulticastInlineDelegate OnInterpolationEndedEvent; // 0x348(0x10)
	float CurrentNumericValue; // 0x358(0x04)
	enum class ECommonNumericType NumericType; // 0x35c(0x01)
	char pad_35D[0x3]; // 0x35d(0x03)
	struct FCommonNumberFormattingOptions FormattingSpecification; // 0x360(0x14)
	float EaseOutInterpolationExponent; // 0x374(0x04)
	float InterpolationUpdateInterval; // 0x378(0x04)
	float PostInterpolationShrinkDuration; // 0x37c(0x04)
	bool PerformSizeInterpolation; // 0x380(0x01)
	bool IsPercentage; // 0x381(0x01)
	char pad_382[0x36]; // 0x382(0x36)

	void SetNumericType(enum class ECommonNumericType InNumericType); // Function CommonUI.CommonNumericTextBlock.SetNumericType // (Net|NetRequest|Static|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32811400
	void SetCurrentValue(float NewValue); // Function CommonUI.CommonNumericTextBlock.SetCurrentValue // (Net|NetReliableExec|Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6b80
	void OnOutro__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock); // DelegateFunction CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6b80
	void OnInterpolationUpdated__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue); // DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6b80
	void OnInterpolationStarted__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock); // DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6b80
	void OnInterpolationEnded__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted); // DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6b80
	bool IsInterpolatingNumericValue(); // Function CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue // (Net|NetRequest|Native|Event|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6b80
	void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset); // Function CommonUI.CommonNumericTextBlock.InterpolateToValue // (Native|Event|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6b80
	float GetTargetValue(); // Function CommonUI.CommonNumericTextBlock.GetTargetValue // (Net|Event|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6b80
};

// Class CommonUI.CommonPoolableWidgetInterface
// Size: 0x28 (Inherited: 0x28)
struct UCommonPoolableWidgetInterface : UInterface {

	void OnReleaseToPool(); // Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool // (NetReliableNetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a64c0
	void OnAcquireFromPool(); // Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool // (Exec|Native|Event|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6940
};

// Class CommonUI.CommonRichTextBlock
// Size: 0x748 (Inherited: 0x710)
struct UCommonRichTextBlock : URichTextBlock {
	enum class ERichTextInlineIconDisplayMode InlineIconDisplayMode; // 0x710(0x01)
	bool bTintInlineIcon; // 0x711(0x01)
	char pad_712[0x6]; // 0x712(0x06)
	struct UCommonTextStyle* DefaultTextStyleOverrideClass; // 0x718(0x08)
	float MobileTextBlockScale; // 0x720(0x04)
	char pad_724[0x4]; // 0x724(0x04)
	struct UCommonTextScrollStyle* ScrollStyle; // 0x728(0x08)
	bool bDisplayAllCaps; // 0x730(0x01)
	char pad_731[0x17]; // 0x731(0x17)
};

// Class CommonUI.CommonRotator
// Size: 0xcb8 (Inherited: 0xc60)
struct UCommonRotator : UCommonButtonBase {
	char pad_C60[0x10]; // 0xc60(0x10)
	struct FMulticastInlineDelegate OnRotated; // 0xc70(0x10)
	char pad_C80[0x18]; // 0xc80(0x18)
	struct UCommonTextBlock* MyText; // 0xc98(0x08)
	char pad_CA0[0x18]; // 0xca0(0x18)

	void ShiftTextRight(); // Function CommonUI.CommonRotator.ShiftTextRight // (Net|NetReliableExec|Native|Static|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a5e00
	void ShiftTextLeft(); // Function CommonUI.CommonRotator.ShiftTextLeft // (Net|NetReliableExec|Native|Static|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6280
	void SetSelectedItem(int32_t InValue); // Function CommonUI.CommonRotator.SetSelectedItem // (Net|Exec|Static|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6280
	void PopulateTextLabels(struct TArray<struct FText> Labels); // Function CommonUI.CommonRotator.PopulateTextLabels // (NetReliableNetRequest|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6280
	struct FText GetSelectedText(); // Function CommonUI.CommonRotator.GetSelectedText // (Net|Exec|Native|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6280
	int32_t GetSelectedIndex(); // Function CommonUI.CommonRotator.GetSelectedIndex // (Net|NetReliableNetRequest|Native|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6280
	void BP_OnOptionsPopulated(int32_t count); // Function CommonUI.CommonRotator.BP_OnOptionsPopulated // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6280
	void BP_OnOptionSelected(int32_t Index); // Function CommonUI.CommonRotator.BP_OnOptionSelected // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6280
};

// Class CommonUI.CommonTabListWidgetBase
// Size: 0x358 (Inherited: 0x288)
struct UCommonTabListWidgetBase : UCommonUserWidget {
	struct FMulticastInlineDelegate OnTabSelected; // 0x288(0x10)
	struct FMulticastInlineDelegate OnTabButtonCreation; // 0x298(0x10)
	struct FMulticastInlineDelegate OnTabButtonRemoval; // 0x2a8(0x10)
	struct FDataTableRowHandle NextTabInputActionData; // 0x2b8(0x10)
	struct FDataTableRowHandle PreviousTabInputActionData; // 0x2c8(0x10)
	bool bAutoListenForInput; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	struct TWeakObjectPtr<struct UCommonAnimatedSwitcher> LinkedSwitcher; // 0x2dc(0x08)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct UCommonButtonGroupBase* TabButtonGroup; // 0x2e8(0x08)
	char pad_2F0[0x8]; // 0x2f0(0x08)
	struct TMap<struct FName, struct FCommonRegisteredTabInfo> RegisteredTabsByID; // 0x2f8(0x50)
	char pad_348[0x10]; // 0x348(0x10)

	void SetTabVisibility(struct FName TabNameID, enum class ESlateVisibility NewVisibility); // Function CommonUI.CommonTabListWidgetBase.SetTabVisibility // (NetRequest|Native|Static|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f32811400
	void SetTabInteractionEnabled(struct FName TabNameID, bool bEnable); // Function CommonUI.CommonTabListWidgetBase.SetTabInteractionEnabled // (Net|Native|Static|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6040
	void SetTabEnabled(struct FName TabNameID, bool bEnable); // Function CommonUI.CommonTabListWidgetBase.SetTabEnabled // (Net|NetRequest|Exec|Static|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6040
	void SetListeningForInput(bool bShouldListen); // Function CommonUI.CommonTabListWidgetBase.SetListeningForInput // (Net|NetRequest|Exec|Native|Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6040
	void SetLinkedSwitcher(struct UCommonAnimatedSwitcher* CommonSwitcher); // Function CommonUI.CommonTabListWidgetBase.SetLinkedSwitcher // (Net|NetReliableExec|Native|Event|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6040
	bool SelectTabByID(struct FName TabNameID, bool bSuppressClickFeedback); // Function CommonUI.CommonTabListWidgetBase.SelectTabByID // (Net|Exec|Native|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6040
	bool RemoveTab(struct FName TabNameID); // Function CommonUI.CommonTabListWidgetBase.RemoveTab // (Native|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6040
	void RemoveAllTabs(); // Function CommonUI.CommonTabListWidgetBase.RemoveAllTabs // (Net|NetReliableNetRequest|Exec|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6040
	bool RegisterTab(struct FName TabNameID, struct UCommonButtonBase* ButtonWidgetType, struct UWidget* ContentWidget); // Function CommonUI.CommonTabListWidgetBase.RegisterTab // (Net|NetReliableExec|NetResponse|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6040
	void OnTabSelected__DelegateSignature(struct FName TabId); // DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabSelected__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6040
	void OnTabButtonRemoval__DelegateSignature(struct FName TabId, struct UCommonButtonBase* TabButton); // DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonRemoval__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6040
	void OnTabButtonCreation__DelegateSignature(struct FName TabId, struct UCommonButtonBase* TabButton); // DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonCreation__DelegateSignature // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6040
	void HandleTabRemoval(struct FName TabNameID, struct UCommonButtonBase* TabButton); // Function CommonUI.CommonTabListWidgetBase.HandleTabRemoval // (NetRequest|Exec|Event|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6040
	void HandleTabCreation(struct FName TabNameID, struct UCommonButtonBase* TabButton); // Function CommonUI.CommonTabListWidgetBase.HandleTabCreation // (Net|Exec|Event|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6040
	void HandleTabButtonSelected(struct UCommonButtonBase* SelectedTabButton, int32_t ButtonIndex); // Function CommonUI.CommonTabListWidgetBase.HandleTabButtonSelected // (NetReliableNetRequest|Event|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6040
	void HandlePreviousTabInputAction(bool& bPassThrough); // Function CommonUI.CommonTabListWidgetBase.HandlePreviousTabInputAction // (NetRequest|Event|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6040
	void HandlePreLinkedSwitcherChanged_BP(); // Function CommonUI.CommonTabListWidgetBase.HandlePreLinkedSwitcherChanged_BP // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6040
	void HandlePostLinkedSwitcherChanged_BP(); // Function CommonUI.CommonTabListWidgetBase.HandlePostLinkedSwitcherChanged_BP // (Net|Exec|Event|NetResponse|UbergraphFunction|MulticastDelegate|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6040
	void HandleNextTabInputAction(bool& bPassThrough); // Function CommonUI.CommonTabListWidgetBase.HandleNextTabInputAction // (Net|Event|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6040
	struct FName GetTabIdAtIndex(int32_t Index); // Function CommonUI.CommonTabListWidgetBase.GetTabIdAtIndex // (NetReliableNetRequest|Exec|Native|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6040
	int32_t GetTabCount(); // Function CommonUI.CommonTabListWidgetBase.GetTabCount // (NetReliableNetRequest|Exec|Native|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6040
	struct UCommonButtonBase* GetTabButtonBaseByID(struct FName TabNameID); // Function CommonUI.CommonTabListWidgetBase.GetTabButtonBaseByID // (Net|NetReliableExec|Native|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6040
	struct FName GetSelectedTabId(); // Function CommonUI.CommonTabListWidgetBase.GetSelectedTabId // (Exec|Native|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6040
	struct UCommonAnimatedSwitcher* GetLinkedSwitcher(); // Function CommonUI.CommonTabListWidgetBase.GetLinkedSwitcher // (Net|NetRequest|Native|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6040
	struct FName GetActiveTab(); // Function CommonUI.CommonTabListWidgetBase.GetActiveTab // (Net|NetReliableNetRequest|Exec|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6040
	void DisableTabWithReason(struct FName TabNameID, struct FText& Reason); // Function CommonUI.CommonTabListWidgetBase.DisableTabWithReason // (Net|Exec|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a6040
};

// Class CommonUI.CommonTextStyle
// Size: 0x160 (Inherited: 0x28)
struct UCommonTextStyle : UObject {
	struct FSlateFontInfo Font; // 0x28(0x58)
	struct FLinearColor Color; // 0x80(0x10)
	bool bUsesDropShadow; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FVector2D ShadowOffset; // 0x94(0x08)
	struct FLinearColor ShadowColor; // 0x9c(0x10)
	struct FMargin Margin; // 0xac(0x10)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FSlateBrush StrikeBrush; // 0xc0(0x98)
	float LineHeightPercentage; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)

	void GetStrikeBrush(struct FSlateBrush& OutStrikeBrush); // Function CommonUI.CommonTextStyle.GetStrikeBrush // (Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a5740
	void GetShadowOffset(struct FVector2D& OutShadowOffset); // Function CommonUI.CommonTextStyle.GetShadowOffset // (NetReliableNetRequest|Exec|Native|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a5e00
	void GetShadowColor(struct FLinearColor& OutColor); // Function CommonUI.CommonTextStyle.GetShadowColor // (NetRequest|Exec|Native|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a5e00
	void GetMargin(struct FMargin& OutMargin); // Function CommonUI.CommonTextStyle.GetMargin // (Net|NetReliableNetRequest|Native|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a5e00
	float GetLineHeightPercentage(); // Function CommonUI.CommonTextStyle.GetLineHeightPercentage // (NetReliableNetRequest|Native|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a5e00
	void GetFont(struct FSlateFontInfo& OutFont); // Function CommonUI.CommonTextStyle.GetFont // (NetRequest|Exec|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a5e00
	void GetColor(struct FLinearColor& OutColor); // Function CommonUI.CommonTextStyle.GetColor // (Net|Exec|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314a5e00
};

// Class CommonUI.CommonTextScrollStyle
// Size: 0x40 (Inherited: 0x28)
struct UCommonTextScrollStyle : UObject {
	float Speed; // 0x28(0x04)
	float StartDelay; // 0x2c(0x04)
	float EndDelay; // 0x30(0x04)
	float FadeInDelay; // 0x34(0x04)
	float FadeOutDelay; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class CommonUI.CommonTileView
// Size: 0x970 (Inherited: 0x970)
struct UCommonTileView : UTileView {
};

// Class CommonUI.CommonTreeView
// Size: 0x9a8 (Inherited: 0x9a8)
struct UCommonTreeView : UTreeView {
};

// Class CommonUI.CommonUIActionRouterBase
// Size: 0x100 (Inherited: 0x30)
struct UCommonUIActionRouterBase : ULocalPlayerSubsystem {
	char pad_30[0xd0]; // 0x30(0xd0)
};

// Class CommonUI.CommonUIEditorSettings
// Size: 0xa8 (Inherited: 0x28)
struct UCommonUIEditorSettings : UObject {
	struct TSoftClassPtr<UObject> TemplateTextStyle; // 0x28(0x28)
	struct TSoftClassPtr<UObject> TemplateButtonStyle; // 0x50(0x28)
	struct TSoftClassPtr<UObject> TemplateBorderStyle; // 0x78(0x28)
	char pad_A0[0x8]; // 0xa0(0x08)
};

// Class CommonUI.CommonUIInputSettings
// Size: 0x78 (Inherited: 0x28)
struct UCommonUIInputSettings : UObject {
	bool bLinkCursorToGamepadFocus; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t UIActionProcessingPriority; // 0x2c(0x04)
	struct TArray<struct FUIInputAction> InputActions; // 0x30(0x10)
	struct TArray<struct FUIInputAction> ActionOverrides; // 0x40(0x10)
	struct FCommonAnalogCursorSettings AnalogCursorSettings; // 0x50(0x24)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class CommonUI.CommonUILibrary
// Size: 0x28 (Inherited: 0x28)
struct UCommonUILibrary : UBlueprintFunctionLibrary {

	struct UWidget* FindParentWidgetOfType(struct UWidget* StartingWidget, struct UWidget* Type); // Function CommonUI.CommonUILibrary.FindParentWidgetOfType // (NetRequest|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ad300
};

// Class CommonUI.CommonUIRichTextData
// Size: 0x30 (Inherited: 0x28)
struct UCommonUIRichTextData : UObject {
	struct UDataTable* InlineIconSet; // 0x28(0x08)
};

// Class CommonUI.CommonUISettings
// Size: 0x160 (Inherited: 0x28)
struct UCommonUISettings : UObject {
	bool bAutoLoadData; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TSoftObjectPtr<UObject> DefaultImageResourceObject; // 0x30(0x28)
	struct TSoftObjectPtr<UMaterialInterface> DefaultThrobberMaterial; // 0x58(0x28)
	struct TSoftClassPtr<UObject> DefaultRichTextDataClass; // 0x80(0x28)
	char pad_A8[0x8]; // 0xa8(0x08)
	struct UObject* DefaultImageResourceObjectInstance; // 0xb0(0x08)
	struct UMaterialInterface* DefaultThrobberMaterialInstance; // 0xb8(0x08)
	struct FSlateBrush DefaultThrobberBrush; // 0xc0(0x98)
	struct UCommonUIRichTextData* RichTextDataInstance; // 0x158(0x08)
};

// Class CommonUI.CommonUISubsystemBase
// Size: 0x40 (Inherited: 0x30)
struct UCommonUISubsystemBase : UGameInstanceSubsystem {
	char pad_30[0x10]; // 0x30(0x10)

	struct FSlateBrush GetInputActionButtonIcon(struct FDataTableRowHandle& InputActionRowHandle, enum class ECommonInputType InputType, struct FName& GamepadName); // Function CommonUI.CommonUISubsystemBase.GetInputActionButtonIcon // (Net|NetReliableNetRequest|Exec|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314acc40
};

// Class CommonUI.CommonVideoPlayer
// Size: 0x258 (Inherited: 0x138)
struct UCommonVideoPlayer : UWidget {
	struct UMediaSource* Video; // 0x138(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x140(0x08)
	struct UMediaTexture* MediaTexture; // 0x148(0x08)
	struct UMaterial* VideoMaterial; // 0x150(0x08)
	struct UMediaSoundComponent* SoundComponent; // 0x158(0x08)
	struct FSlateBrush VideoBrush; // 0x160(0x98)
	char pad_1F8[0x60]; // 0x1f8(0x60)
};

// Class CommonUI.CommonVisibilitySwitcher
// Size: 0x188 (Inherited: 0x160)
struct UCommonVisibilitySwitcher : UOverlay {
	enum class ESlateVisibility ShownVisibility; // 0x160(0x01)
	char pad_161[0x3]; // 0x161(0x03)
	int32_t ActiveWidgetIndex; // 0x164(0x04)
	bool bAutoActivateSlot; // 0x168(0x01)
	bool bActivateFirstSlotOnAdding; // 0x169(0x01)
	char pad_16A[0x1e]; // 0x16a(0x1e)

	void SetActiveWidgetIndex(int32_t Index); // Function CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex // (Net|Exec|Native|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ac7c0
	void SetActiveWidget(struct UWidget* Widget); // Function CommonUI.CommonVisibilitySwitcher.SetActiveWidget // (Net|NetRequest|Native|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ace80
	void IncrementActiveWidgetIndex(bool bAllowWrapping); // Function CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex // (Net|NetReliableNetRequest|Exec|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ace80
	int32_t GetActiveWidgetIndex(); // Function CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex // (Exec|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ace80
	struct UWidget* GetActiveWidget(); // Function CommonUI.CommonVisibilitySwitcher.GetActiveWidget // (Net|NetReliableNetRequest|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ace80
	void DecrementActiveWidgetIndex(bool bAllowWrapping); // Function CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex // (NetReliableStatic|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ace80
	void DeactivateVisibleSlot(); // Function CommonUI.CommonVisibilitySwitcher.DeactivateVisibleSlot // (Net|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ace80
	void ActivateVisibleSlot(); // Function CommonUI.CommonVisibilitySwitcher.ActivateVisibleSlot // (Net|NetRequest|Exec|Native|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ace80
};

// Class CommonUI.CommonVisibilitySwitcherSlot
// Size: 0x68 (Inherited: 0x58)
struct UCommonVisibilitySwitcherSlot : UOverlaySlot {
	char pad_58[0x10]; // 0x58(0x10)
};

// Class CommonUI.CommonVisibilityWidgetBase
// Size: 0x328 (Inherited: 0x2d0)
struct UCommonVisibilityWidgetBase : UCommonBorder {
	struct TMap<struct FName, bool> VisibilityControls; // 0x2d0(0x50)
	bool bShowForGamepad; // 0x320(0x01)
	bool bShowForMouseAndKeyboard; // 0x321(0x01)
	bool bShowForTouch; // 0x322(0x01)
	enum class ESlateVisibility VisibleType; // 0x323(0x01)
	enum class ESlateVisibility HiddenType; // 0x324(0x01)
	char pad_325[0x3]; // 0x325(0x03)

	struct TArray<struct FName> GetRegisteredPlatforms(); // Function CommonUI.CommonVisibilityWidgetBase.GetRegisteredPlatforms // (Net|Exec|Native|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ac100
};

// Class CommonUI.CommonVisualAttachment
// Size: 0x1a0 (Inherited: 0x188)
struct UCommonVisualAttachment : USizeBox {
	struct FVector2D ContentAnchor; // 0x188(0x08)
	char pad_190[0x10]; // 0x190(0x10)
};

// Class CommonUI.CommonWidgetCarousel
// Size: 0x190 (Inherited: 0x150)
struct UCommonWidgetCarousel : UPanelWidget {
	int32_t ActiveWidgetIndex; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FMulticastInlineDelegate OnCurrentPageIndexChanged; // 0x158(0x10)
	char pad_168[0x28]; // 0x168(0x28)

	void SetActiveWidgetIndex(int32_t Index); // Function CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex // (Net|NetReliableExec|Native|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314abc80
	void SetActiveWidget(struct UWidget* Widget); // Function CommonUI.CommonWidgetCarousel.SetActiveWidget // (Net|NetReliableNetRequest|Native|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314abec0
	void PreviousPage(); // Function CommonUI.CommonWidgetCarousel.PreviousPage // (Net|Native|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314abec0
	void NextPage(); // Function CommonUI.CommonWidgetCarousel.NextPage // (Net|Native|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314abec0
	struct UWidget* GetWidgetAtIndex(int32_t Index); // Function CommonUI.CommonWidgetCarousel.GetWidgetAtIndex // (NetReliableNetRequest|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314abec0
	int32_t GetActiveWidgetIndex(); // Function CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex // (Net|Exec|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314abec0
	void EndAutoScrolling(); // Function CommonUI.CommonWidgetCarousel.EndAutoScrolling // (NetRequest|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314abec0
	void BeginAutoScrolling(float ScrollInterval); // Function CommonUI.CommonWidgetCarousel.BeginAutoScrolling // (Net|NetReliableNetRequest|Exec|Native|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314abec0
};

// Class CommonUI.CommonWidgetCarouselNavBar
// Size: 0x180 (Inherited: 0x138)
struct UCommonWidgetCarouselNavBar : UWidget {
	struct UCommonButtonBase* ButtonWidgetType; // 0x138(0x08)
	struct FMargin ButtonPadding; // 0x140(0x10)
	char pad_150[0x10]; // 0x150(0x10)
	struct UCommonWidgetCarousel* LinkedCarousel; // 0x160(0x08)
	struct UCommonButtonGroupBase* ButtonGroup; // 0x168(0x08)
	struct TArray<struct UCommonButtonBase*> Buttons; // 0x170(0x10)

	void SetLinkedCarousel(struct UCommonWidgetCarousel* CommonCarousel); // Function CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel // (NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314ab800
	void HandlePageChanged(struct UCommonWidgetCarousel* CommonCarousel, int32_t PageIndex); // Function CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged // (NetRequest|Exec|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314abc80
	void HandleButtonClicked(struct UCommonButtonBase* AssociatedButton, int32_t ButtonIndex); // Function CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked // (Net|Exec|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Delegate|NetServer|BlueprintCallable|BlueprintEvent|NetValidate) // @ game+0xffff822f314abc80
};

