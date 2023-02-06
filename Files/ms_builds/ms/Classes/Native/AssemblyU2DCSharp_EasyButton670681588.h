#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// EasyButton/ButtonDownHandler
struct ButtonDownHandler_t1077042582;
// EasyButton/ButtonPressHandler
struct ButtonPressHandler_t3422062073;
// EasyButton/ButtonUpHandler
struct ButtonUpHandler_t3041195261;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_EasyButton_ButtonState4192339039.h"
#include "AssemblyU2DCSharp_EasyButton_ButtonAnchor592673959.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "AssemblyU2DCSharp_EasyButton_InteractionType2240557132.h"
#include "AssemblyU2DCSharp_EasyButton_Broadcast385091745.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyButton
struct  EasyButton_t670681588  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean EasyButton::enable
	bool ___enable_2;
	// System.Boolean EasyButton::isActivated
	bool ___isActivated_3;
	// System.Boolean EasyButton::showDebugArea
	bool ___showDebugArea_4;
	// System.Boolean EasyButton::selected
	bool ___selected_5;
	// System.Boolean EasyButton::isUseGuiLayout
	bool ___isUseGuiLayout_6;
	// EasyButton/ButtonState EasyButton::buttonState
	int32_t ___buttonState_7;
	// EasyButton/ButtonAnchor EasyButton::anchor
	int32_t ___anchor_8;
	// UnityEngine.Vector2 EasyButton::offset
	Vector2_t3525329788  ___offset_9;
	// UnityEngine.Vector2 EasyButton::scale
	Vector2_t3525329788  ___scale_10;
	// System.Boolean EasyButton::isSwipeIn
	bool ___isSwipeIn_11;
	// System.Boolean EasyButton::isSwipeOut
	bool ___isSwipeOut_12;
	// EasyButton/InteractionType EasyButton::interaction
	int32_t ___interaction_13;
	// System.Boolean EasyButton::useBroadcast
	bool ___useBroadcast_14;
	// UnityEngine.GameObject EasyButton::receiverGameObject
	GameObject_t4012695102 * ___receiverGameObject_15;
	// EasyButton/Broadcast EasyButton::messageMode
	int32_t ___messageMode_16;
	// System.Boolean EasyButton::useSpecificalMethod
	bool ___useSpecificalMethod_17;
	// System.String EasyButton::downMethodName
	String_t* ___downMethodName_18;
	// System.String EasyButton::pressMethodName
	String_t* ___pressMethodName_19;
	// System.String EasyButton::upMethodName
	String_t* ___upMethodName_20;
	// System.Int32 EasyButton::guiDepth
	int32_t ___guiDepth_21;
	// UnityEngine.Texture2D EasyButton::normalTexture
	Texture2D_t2509538522 * ___normalTexture_22;
	// UnityEngine.Color EasyButton::buttonNormalColor
	Color_t1588175760  ___buttonNormalColor_23;
	// UnityEngine.Texture2D EasyButton::activeTexture
	Texture2D_t2509538522 * ___activeTexture_24;
	// UnityEngine.Color EasyButton::buttonActiveColor
	Color_t1588175760  ___buttonActiveColor_25;
	// System.Boolean EasyButton::showInspectorProperties
	bool ___showInspectorProperties_26;
	// System.Boolean EasyButton::showInspectorPosition
	bool ___showInspectorPosition_27;
	// System.Boolean EasyButton::showInspectorEvent
	bool ___showInspectorEvent_28;
	// System.Boolean EasyButton::showInspectorTexture
	bool ___showInspectorTexture_29;
	// UnityEngine.Rect EasyButton::buttonRect
	Rect_t1525428817  ___buttonRect_30;
	// System.Int32 EasyButton::buttonFingerIndex
	int32_t ___buttonFingerIndex_31;
	// UnityEngine.Texture2D EasyButton::currentTexture
	Texture2D_t2509538522 * ___currentTexture_32;
	// UnityEngine.Color EasyButton::currentColor
	Color_t1588175760  ___currentColor_33;
	// System.Int32 EasyButton::frame
	int32_t ___frame_34;

public:
	inline static int32_t get_offset_of_enable_2() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___enable_2)); }
	inline bool get_enable_2() const { return ___enable_2; }
	inline bool* get_address_of_enable_2() { return &___enable_2; }
	inline void set_enable_2(bool value)
	{
		___enable_2 = value;
	}

	inline static int32_t get_offset_of_isActivated_3() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___isActivated_3)); }
	inline bool get_isActivated_3() const { return ___isActivated_3; }
	inline bool* get_address_of_isActivated_3() { return &___isActivated_3; }
	inline void set_isActivated_3(bool value)
	{
		___isActivated_3 = value;
	}

	inline static int32_t get_offset_of_showDebugArea_4() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___showDebugArea_4)); }
	inline bool get_showDebugArea_4() const { return ___showDebugArea_4; }
	inline bool* get_address_of_showDebugArea_4() { return &___showDebugArea_4; }
	inline void set_showDebugArea_4(bool value)
	{
		___showDebugArea_4 = value;
	}

	inline static int32_t get_offset_of_selected_5() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___selected_5)); }
	inline bool get_selected_5() const { return ___selected_5; }
	inline bool* get_address_of_selected_5() { return &___selected_5; }
	inline void set_selected_5(bool value)
	{
		___selected_5 = value;
	}

	inline static int32_t get_offset_of_isUseGuiLayout_6() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___isUseGuiLayout_6)); }
	inline bool get_isUseGuiLayout_6() const { return ___isUseGuiLayout_6; }
	inline bool* get_address_of_isUseGuiLayout_6() { return &___isUseGuiLayout_6; }
	inline void set_isUseGuiLayout_6(bool value)
	{
		___isUseGuiLayout_6 = value;
	}

	inline static int32_t get_offset_of_buttonState_7() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___buttonState_7)); }
	inline int32_t get_buttonState_7() const { return ___buttonState_7; }
	inline int32_t* get_address_of_buttonState_7() { return &___buttonState_7; }
	inline void set_buttonState_7(int32_t value)
	{
		___buttonState_7 = value;
	}

	inline static int32_t get_offset_of_anchor_8() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___anchor_8)); }
	inline int32_t get_anchor_8() const { return ___anchor_8; }
	inline int32_t* get_address_of_anchor_8() { return &___anchor_8; }
	inline void set_anchor_8(int32_t value)
	{
		___anchor_8 = value;
	}

	inline static int32_t get_offset_of_offset_9() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___offset_9)); }
	inline Vector2_t3525329788  get_offset_9() const { return ___offset_9; }
	inline Vector2_t3525329788 * get_address_of_offset_9() { return &___offset_9; }
	inline void set_offset_9(Vector2_t3525329788  value)
	{
		___offset_9 = value;
	}

	inline static int32_t get_offset_of_scale_10() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___scale_10)); }
	inline Vector2_t3525329788  get_scale_10() const { return ___scale_10; }
	inline Vector2_t3525329788 * get_address_of_scale_10() { return &___scale_10; }
	inline void set_scale_10(Vector2_t3525329788  value)
	{
		___scale_10 = value;
	}

	inline static int32_t get_offset_of_isSwipeIn_11() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___isSwipeIn_11)); }
	inline bool get_isSwipeIn_11() const { return ___isSwipeIn_11; }
	inline bool* get_address_of_isSwipeIn_11() { return &___isSwipeIn_11; }
	inline void set_isSwipeIn_11(bool value)
	{
		___isSwipeIn_11 = value;
	}

	inline static int32_t get_offset_of_isSwipeOut_12() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___isSwipeOut_12)); }
	inline bool get_isSwipeOut_12() const { return ___isSwipeOut_12; }
	inline bool* get_address_of_isSwipeOut_12() { return &___isSwipeOut_12; }
	inline void set_isSwipeOut_12(bool value)
	{
		___isSwipeOut_12 = value;
	}

	inline static int32_t get_offset_of_interaction_13() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___interaction_13)); }
	inline int32_t get_interaction_13() const { return ___interaction_13; }
	inline int32_t* get_address_of_interaction_13() { return &___interaction_13; }
	inline void set_interaction_13(int32_t value)
	{
		___interaction_13 = value;
	}

	inline static int32_t get_offset_of_useBroadcast_14() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___useBroadcast_14)); }
	inline bool get_useBroadcast_14() const { return ___useBroadcast_14; }
	inline bool* get_address_of_useBroadcast_14() { return &___useBroadcast_14; }
	inline void set_useBroadcast_14(bool value)
	{
		___useBroadcast_14 = value;
	}

	inline static int32_t get_offset_of_receiverGameObject_15() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___receiverGameObject_15)); }
	inline GameObject_t4012695102 * get_receiverGameObject_15() const { return ___receiverGameObject_15; }
	inline GameObject_t4012695102 ** get_address_of_receiverGameObject_15() { return &___receiverGameObject_15; }
	inline void set_receiverGameObject_15(GameObject_t4012695102 * value)
	{
		___receiverGameObject_15 = value;
		Il2CppCodeGenWriteBarrier(&___receiverGameObject_15, value);
	}

	inline static int32_t get_offset_of_messageMode_16() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___messageMode_16)); }
	inline int32_t get_messageMode_16() const { return ___messageMode_16; }
	inline int32_t* get_address_of_messageMode_16() { return &___messageMode_16; }
	inline void set_messageMode_16(int32_t value)
	{
		___messageMode_16 = value;
	}

	inline static int32_t get_offset_of_useSpecificalMethod_17() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___useSpecificalMethod_17)); }
	inline bool get_useSpecificalMethod_17() const { return ___useSpecificalMethod_17; }
	inline bool* get_address_of_useSpecificalMethod_17() { return &___useSpecificalMethod_17; }
	inline void set_useSpecificalMethod_17(bool value)
	{
		___useSpecificalMethod_17 = value;
	}

	inline static int32_t get_offset_of_downMethodName_18() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___downMethodName_18)); }
	inline String_t* get_downMethodName_18() const { return ___downMethodName_18; }
	inline String_t** get_address_of_downMethodName_18() { return &___downMethodName_18; }
	inline void set_downMethodName_18(String_t* value)
	{
		___downMethodName_18 = value;
		Il2CppCodeGenWriteBarrier(&___downMethodName_18, value);
	}

	inline static int32_t get_offset_of_pressMethodName_19() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___pressMethodName_19)); }
	inline String_t* get_pressMethodName_19() const { return ___pressMethodName_19; }
	inline String_t** get_address_of_pressMethodName_19() { return &___pressMethodName_19; }
	inline void set_pressMethodName_19(String_t* value)
	{
		___pressMethodName_19 = value;
		Il2CppCodeGenWriteBarrier(&___pressMethodName_19, value);
	}

	inline static int32_t get_offset_of_upMethodName_20() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___upMethodName_20)); }
	inline String_t* get_upMethodName_20() const { return ___upMethodName_20; }
	inline String_t** get_address_of_upMethodName_20() { return &___upMethodName_20; }
	inline void set_upMethodName_20(String_t* value)
	{
		___upMethodName_20 = value;
		Il2CppCodeGenWriteBarrier(&___upMethodName_20, value);
	}

	inline static int32_t get_offset_of_guiDepth_21() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___guiDepth_21)); }
	inline int32_t get_guiDepth_21() const { return ___guiDepth_21; }
	inline int32_t* get_address_of_guiDepth_21() { return &___guiDepth_21; }
	inline void set_guiDepth_21(int32_t value)
	{
		___guiDepth_21 = value;
	}

	inline static int32_t get_offset_of_normalTexture_22() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___normalTexture_22)); }
	inline Texture2D_t2509538522 * get_normalTexture_22() const { return ___normalTexture_22; }
	inline Texture2D_t2509538522 ** get_address_of_normalTexture_22() { return &___normalTexture_22; }
	inline void set_normalTexture_22(Texture2D_t2509538522 * value)
	{
		___normalTexture_22 = value;
		Il2CppCodeGenWriteBarrier(&___normalTexture_22, value);
	}

	inline static int32_t get_offset_of_buttonNormalColor_23() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___buttonNormalColor_23)); }
	inline Color_t1588175760  get_buttonNormalColor_23() const { return ___buttonNormalColor_23; }
	inline Color_t1588175760 * get_address_of_buttonNormalColor_23() { return &___buttonNormalColor_23; }
	inline void set_buttonNormalColor_23(Color_t1588175760  value)
	{
		___buttonNormalColor_23 = value;
	}

	inline static int32_t get_offset_of_activeTexture_24() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___activeTexture_24)); }
	inline Texture2D_t2509538522 * get_activeTexture_24() const { return ___activeTexture_24; }
	inline Texture2D_t2509538522 ** get_address_of_activeTexture_24() { return &___activeTexture_24; }
	inline void set_activeTexture_24(Texture2D_t2509538522 * value)
	{
		___activeTexture_24 = value;
		Il2CppCodeGenWriteBarrier(&___activeTexture_24, value);
	}

	inline static int32_t get_offset_of_buttonActiveColor_25() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___buttonActiveColor_25)); }
	inline Color_t1588175760  get_buttonActiveColor_25() const { return ___buttonActiveColor_25; }
	inline Color_t1588175760 * get_address_of_buttonActiveColor_25() { return &___buttonActiveColor_25; }
	inline void set_buttonActiveColor_25(Color_t1588175760  value)
	{
		___buttonActiveColor_25 = value;
	}

	inline static int32_t get_offset_of_showInspectorProperties_26() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___showInspectorProperties_26)); }
	inline bool get_showInspectorProperties_26() const { return ___showInspectorProperties_26; }
	inline bool* get_address_of_showInspectorProperties_26() { return &___showInspectorProperties_26; }
	inline void set_showInspectorProperties_26(bool value)
	{
		___showInspectorProperties_26 = value;
	}

	inline static int32_t get_offset_of_showInspectorPosition_27() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___showInspectorPosition_27)); }
	inline bool get_showInspectorPosition_27() const { return ___showInspectorPosition_27; }
	inline bool* get_address_of_showInspectorPosition_27() { return &___showInspectorPosition_27; }
	inline void set_showInspectorPosition_27(bool value)
	{
		___showInspectorPosition_27 = value;
	}

	inline static int32_t get_offset_of_showInspectorEvent_28() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___showInspectorEvent_28)); }
	inline bool get_showInspectorEvent_28() const { return ___showInspectorEvent_28; }
	inline bool* get_address_of_showInspectorEvent_28() { return &___showInspectorEvent_28; }
	inline void set_showInspectorEvent_28(bool value)
	{
		___showInspectorEvent_28 = value;
	}

	inline static int32_t get_offset_of_showInspectorTexture_29() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___showInspectorTexture_29)); }
	inline bool get_showInspectorTexture_29() const { return ___showInspectorTexture_29; }
	inline bool* get_address_of_showInspectorTexture_29() { return &___showInspectorTexture_29; }
	inline void set_showInspectorTexture_29(bool value)
	{
		___showInspectorTexture_29 = value;
	}

	inline static int32_t get_offset_of_buttonRect_30() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___buttonRect_30)); }
	inline Rect_t1525428817  get_buttonRect_30() const { return ___buttonRect_30; }
	inline Rect_t1525428817 * get_address_of_buttonRect_30() { return &___buttonRect_30; }
	inline void set_buttonRect_30(Rect_t1525428817  value)
	{
		___buttonRect_30 = value;
	}

	inline static int32_t get_offset_of_buttonFingerIndex_31() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___buttonFingerIndex_31)); }
	inline int32_t get_buttonFingerIndex_31() const { return ___buttonFingerIndex_31; }
	inline int32_t* get_address_of_buttonFingerIndex_31() { return &___buttonFingerIndex_31; }
	inline void set_buttonFingerIndex_31(int32_t value)
	{
		___buttonFingerIndex_31 = value;
	}

	inline static int32_t get_offset_of_currentTexture_32() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___currentTexture_32)); }
	inline Texture2D_t2509538522 * get_currentTexture_32() const { return ___currentTexture_32; }
	inline Texture2D_t2509538522 ** get_address_of_currentTexture_32() { return &___currentTexture_32; }
	inline void set_currentTexture_32(Texture2D_t2509538522 * value)
	{
		___currentTexture_32 = value;
		Il2CppCodeGenWriteBarrier(&___currentTexture_32, value);
	}

	inline static int32_t get_offset_of_currentColor_33() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___currentColor_33)); }
	inline Color_t1588175760  get_currentColor_33() const { return ___currentColor_33; }
	inline Color_t1588175760 * get_address_of_currentColor_33() { return &___currentColor_33; }
	inline void set_currentColor_33(Color_t1588175760  value)
	{
		___currentColor_33 = value;
	}

	inline static int32_t get_offset_of_frame_34() { return static_cast<int32_t>(offsetof(EasyButton_t670681588, ___frame_34)); }
	inline int32_t get_frame_34() const { return ___frame_34; }
	inline int32_t* get_address_of_frame_34() { return &___frame_34; }
	inline void set_frame_34(int32_t value)
	{
		___frame_34 = value;
	}
};

struct EasyButton_t670681588_StaticFields
{
public:
	// EasyButton/ButtonDownHandler EasyButton::On_ButtonDown
	ButtonDownHandler_t1077042582 * ___On_ButtonDown_35;
	// EasyButton/ButtonPressHandler EasyButton::On_ButtonPress
	ButtonPressHandler_t3422062073 * ___On_ButtonPress_36;
	// EasyButton/ButtonUpHandler EasyButton::On_ButtonUp
	ButtonUpHandler_t3041195261 * ___On_ButtonUp_37;

public:
	inline static int32_t get_offset_of_On_ButtonDown_35() { return static_cast<int32_t>(offsetof(EasyButton_t670681588_StaticFields, ___On_ButtonDown_35)); }
	inline ButtonDownHandler_t1077042582 * get_On_ButtonDown_35() const { return ___On_ButtonDown_35; }
	inline ButtonDownHandler_t1077042582 ** get_address_of_On_ButtonDown_35() { return &___On_ButtonDown_35; }
	inline void set_On_ButtonDown_35(ButtonDownHandler_t1077042582 * value)
	{
		___On_ButtonDown_35 = value;
		Il2CppCodeGenWriteBarrier(&___On_ButtonDown_35, value);
	}

	inline static int32_t get_offset_of_On_ButtonPress_36() { return static_cast<int32_t>(offsetof(EasyButton_t670681588_StaticFields, ___On_ButtonPress_36)); }
	inline ButtonPressHandler_t3422062073 * get_On_ButtonPress_36() const { return ___On_ButtonPress_36; }
	inline ButtonPressHandler_t3422062073 ** get_address_of_On_ButtonPress_36() { return &___On_ButtonPress_36; }
	inline void set_On_ButtonPress_36(ButtonPressHandler_t3422062073 * value)
	{
		___On_ButtonPress_36 = value;
		Il2CppCodeGenWriteBarrier(&___On_ButtonPress_36, value);
	}

	inline static int32_t get_offset_of_On_ButtonUp_37() { return static_cast<int32_t>(offsetof(EasyButton_t670681588_StaticFields, ___On_ButtonUp_37)); }
	inline ButtonUpHandler_t3041195261 * get_On_ButtonUp_37() const { return ___On_ButtonUp_37; }
	inline ButtonUpHandler_t3041195261 ** get_address_of_On_ButtonUp_37() { return &___On_ButtonUp_37; }
	inline void set_On_ButtonUp_37(ButtonUpHandler_t3041195261 * value)
	{
		___On_ButtonUp_37 = value;
		Il2CppCodeGenWriteBarrier(&___On_ButtonUp_37, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
