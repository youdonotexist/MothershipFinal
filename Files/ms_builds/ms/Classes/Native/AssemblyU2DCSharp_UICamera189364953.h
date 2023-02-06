#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BetterList`1<UICamera>
struct BetterList_1_t1686332965;
// UICamera/GetKeyStateFunc
struct GetKeyStateFunc_t2362323372;
// UICamera/GetAxisFunc
struct GetAxisFunc_t3240405851;
// UICamera/OnScreenResize
struct OnScreenResize_t3539115999;
// System.String
struct String_t;
// UICamera/OnCustomInput
struct OnCustomInput_t3775009626;
// UICamera
struct UICamera_t189364953;
// UnityEngine.Camera
struct Camera_t3533968274;
// UICamera/MouseOrTouch
struct MouseOrTouch_t908473047;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UICamera/VoidDelegate
struct VoidDelegate_t1986138970;
// UICamera/BoolDelegate
struct BoolDelegate_t945637040;
// UICamera/FloatDelegate
struct FloatDelegate_t4185225186;
// UICamera/VectorDelegate
struct VectorDelegate_t2458450953;
// UICamera/ObjectDelegate
struct ObjectDelegate_t3413901829;
// UICamera/KeyCodeDelegate
struct KeyCodeDelegate_t3737044594;
// UICamera/MoveDelegate
struct MoveDelegate_t757231766;
// UICamera/MouseOrTouch[]
struct MouseOrTouchU5BU5D_t2832174062;
// System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch>
struct Dictionary_2_t1399283830;
// BetterList`1<UICamera/DepthEntry>
struct BetterList_1_t3691665115;
// BetterList`1/CompareFunc<UICamera/DepthEntry>
struct CompareFunc_t41355861;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_UICamera_EventType2035398868.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"
#include "UnityEngine_UnityEngine_KeyCode2371581209.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"
#include "AssemblyU2DCSharp_UICamera_ControlScheme1667267906.h"
#include "AssemblyU2DCSharp_UICamera_DepthEntry2194697103.h"
#include "UnityEngine_UnityEngine_Plane1600081545.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UICamera
struct  UICamera_t189364953  : public MonoBehaviour_t3012272455
{
public:
	// UICamera/EventType UICamera::eventType
	int32_t ___eventType_8;
	// System.Boolean UICamera::eventsGoToColliders
	bool ___eventsGoToColliders_9;
	// UnityEngine.LayerMask UICamera::eventReceiverMask
	LayerMask_t1862190090  ___eventReceiverMask_10;
	// System.Boolean UICamera::debug
	bool ___debug_11;
	// System.Boolean UICamera::useMouse
	bool ___useMouse_12;
	// System.Boolean UICamera::useTouch
	bool ___useTouch_13;
	// System.Boolean UICamera::allowMultiTouch
	bool ___allowMultiTouch_14;
	// System.Boolean UICamera::useKeyboard
	bool ___useKeyboard_15;
	// System.Boolean UICamera::useController
	bool ___useController_16;
	// System.Boolean UICamera::stickyTooltip
	bool ___stickyTooltip_17;
	// System.Single UICamera::tooltipDelay
	float ___tooltipDelay_18;
	// System.Single UICamera::mouseDragThreshold
	float ___mouseDragThreshold_19;
	// System.Single UICamera::mouseClickThreshold
	float ___mouseClickThreshold_20;
	// System.Single UICamera::touchDragThreshold
	float ___touchDragThreshold_21;
	// System.Single UICamera::touchClickThreshold
	float ___touchClickThreshold_22;
	// System.Single UICamera::rangeDistance
	float ___rangeDistance_23;
	// System.String UICamera::scrollAxisName
	String_t* ___scrollAxisName_24;
	// System.String UICamera::verticalAxisName
	String_t* ___verticalAxisName_25;
	// System.String UICamera::horizontalAxisName
	String_t* ___horizontalAxisName_26;
	// UnityEngine.KeyCode UICamera::submitKey0
	int32_t ___submitKey0_27;
	// UnityEngine.KeyCode UICamera::submitKey1
	int32_t ___submitKey1_28;
	// UnityEngine.KeyCode UICamera::cancelKey0
	int32_t ___cancelKey0_29;
	// UnityEngine.KeyCode UICamera::cancelKey1
	int32_t ___cancelKey1_30;
	// UnityEngine.GameObject UICamera::mTooltip
	GameObject_t4012695102 * ___mTooltip_70;
	// UnityEngine.Camera UICamera::mCam
	Camera_t3533968274 * ___mCam_71;
	// System.Single UICamera::mTooltipTime
	float ___mTooltipTime_72;
	// System.Single UICamera::mNextRaycast
	float ___mNextRaycast_73;

public:
	inline static int32_t get_offset_of_eventType_8() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___eventType_8)); }
	inline int32_t get_eventType_8() const { return ___eventType_8; }
	inline int32_t* get_address_of_eventType_8() { return &___eventType_8; }
	inline void set_eventType_8(int32_t value)
	{
		___eventType_8 = value;
	}

	inline static int32_t get_offset_of_eventsGoToColliders_9() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___eventsGoToColliders_9)); }
	inline bool get_eventsGoToColliders_9() const { return ___eventsGoToColliders_9; }
	inline bool* get_address_of_eventsGoToColliders_9() { return &___eventsGoToColliders_9; }
	inline void set_eventsGoToColliders_9(bool value)
	{
		___eventsGoToColliders_9 = value;
	}

	inline static int32_t get_offset_of_eventReceiverMask_10() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___eventReceiverMask_10)); }
	inline LayerMask_t1862190090  get_eventReceiverMask_10() const { return ___eventReceiverMask_10; }
	inline LayerMask_t1862190090 * get_address_of_eventReceiverMask_10() { return &___eventReceiverMask_10; }
	inline void set_eventReceiverMask_10(LayerMask_t1862190090  value)
	{
		___eventReceiverMask_10 = value;
	}

	inline static int32_t get_offset_of_debug_11() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___debug_11)); }
	inline bool get_debug_11() const { return ___debug_11; }
	inline bool* get_address_of_debug_11() { return &___debug_11; }
	inline void set_debug_11(bool value)
	{
		___debug_11 = value;
	}

	inline static int32_t get_offset_of_useMouse_12() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___useMouse_12)); }
	inline bool get_useMouse_12() const { return ___useMouse_12; }
	inline bool* get_address_of_useMouse_12() { return &___useMouse_12; }
	inline void set_useMouse_12(bool value)
	{
		___useMouse_12 = value;
	}

	inline static int32_t get_offset_of_useTouch_13() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___useTouch_13)); }
	inline bool get_useTouch_13() const { return ___useTouch_13; }
	inline bool* get_address_of_useTouch_13() { return &___useTouch_13; }
	inline void set_useTouch_13(bool value)
	{
		___useTouch_13 = value;
	}

	inline static int32_t get_offset_of_allowMultiTouch_14() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___allowMultiTouch_14)); }
	inline bool get_allowMultiTouch_14() const { return ___allowMultiTouch_14; }
	inline bool* get_address_of_allowMultiTouch_14() { return &___allowMultiTouch_14; }
	inline void set_allowMultiTouch_14(bool value)
	{
		___allowMultiTouch_14 = value;
	}

	inline static int32_t get_offset_of_useKeyboard_15() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___useKeyboard_15)); }
	inline bool get_useKeyboard_15() const { return ___useKeyboard_15; }
	inline bool* get_address_of_useKeyboard_15() { return &___useKeyboard_15; }
	inline void set_useKeyboard_15(bool value)
	{
		___useKeyboard_15 = value;
	}

	inline static int32_t get_offset_of_useController_16() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___useController_16)); }
	inline bool get_useController_16() const { return ___useController_16; }
	inline bool* get_address_of_useController_16() { return &___useController_16; }
	inline void set_useController_16(bool value)
	{
		___useController_16 = value;
	}

	inline static int32_t get_offset_of_stickyTooltip_17() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___stickyTooltip_17)); }
	inline bool get_stickyTooltip_17() const { return ___stickyTooltip_17; }
	inline bool* get_address_of_stickyTooltip_17() { return &___stickyTooltip_17; }
	inline void set_stickyTooltip_17(bool value)
	{
		___stickyTooltip_17 = value;
	}

	inline static int32_t get_offset_of_tooltipDelay_18() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___tooltipDelay_18)); }
	inline float get_tooltipDelay_18() const { return ___tooltipDelay_18; }
	inline float* get_address_of_tooltipDelay_18() { return &___tooltipDelay_18; }
	inline void set_tooltipDelay_18(float value)
	{
		___tooltipDelay_18 = value;
	}

	inline static int32_t get_offset_of_mouseDragThreshold_19() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___mouseDragThreshold_19)); }
	inline float get_mouseDragThreshold_19() const { return ___mouseDragThreshold_19; }
	inline float* get_address_of_mouseDragThreshold_19() { return &___mouseDragThreshold_19; }
	inline void set_mouseDragThreshold_19(float value)
	{
		___mouseDragThreshold_19 = value;
	}

	inline static int32_t get_offset_of_mouseClickThreshold_20() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___mouseClickThreshold_20)); }
	inline float get_mouseClickThreshold_20() const { return ___mouseClickThreshold_20; }
	inline float* get_address_of_mouseClickThreshold_20() { return &___mouseClickThreshold_20; }
	inline void set_mouseClickThreshold_20(float value)
	{
		___mouseClickThreshold_20 = value;
	}

	inline static int32_t get_offset_of_touchDragThreshold_21() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___touchDragThreshold_21)); }
	inline float get_touchDragThreshold_21() const { return ___touchDragThreshold_21; }
	inline float* get_address_of_touchDragThreshold_21() { return &___touchDragThreshold_21; }
	inline void set_touchDragThreshold_21(float value)
	{
		___touchDragThreshold_21 = value;
	}

	inline static int32_t get_offset_of_touchClickThreshold_22() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___touchClickThreshold_22)); }
	inline float get_touchClickThreshold_22() const { return ___touchClickThreshold_22; }
	inline float* get_address_of_touchClickThreshold_22() { return &___touchClickThreshold_22; }
	inline void set_touchClickThreshold_22(float value)
	{
		___touchClickThreshold_22 = value;
	}

	inline static int32_t get_offset_of_rangeDistance_23() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___rangeDistance_23)); }
	inline float get_rangeDistance_23() const { return ___rangeDistance_23; }
	inline float* get_address_of_rangeDistance_23() { return &___rangeDistance_23; }
	inline void set_rangeDistance_23(float value)
	{
		___rangeDistance_23 = value;
	}

	inline static int32_t get_offset_of_scrollAxisName_24() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___scrollAxisName_24)); }
	inline String_t* get_scrollAxisName_24() const { return ___scrollAxisName_24; }
	inline String_t** get_address_of_scrollAxisName_24() { return &___scrollAxisName_24; }
	inline void set_scrollAxisName_24(String_t* value)
	{
		___scrollAxisName_24 = value;
		Il2CppCodeGenWriteBarrier(&___scrollAxisName_24, value);
	}

	inline static int32_t get_offset_of_verticalAxisName_25() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___verticalAxisName_25)); }
	inline String_t* get_verticalAxisName_25() const { return ___verticalAxisName_25; }
	inline String_t** get_address_of_verticalAxisName_25() { return &___verticalAxisName_25; }
	inline void set_verticalAxisName_25(String_t* value)
	{
		___verticalAxisName_25 = value;
		Il2CppCodeGenWriteBarrier(&___verticalAxisName_25, value);
	}

	inline static int32_t get_offset_of_horizontalAxisName_26() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___horizontalAxisName_26)); }
	inline String_t* get_horizontalAxisName_26() const { return ___horizontalAxisName_26; }
	inline String_t** get_address_of_horizontalAxisName_26() { return &___horizontalAxisName_26; }
	inline void set_horizontalAxisName_26(String_t* value)
	{
		___horizontalAxisName_26 = value;
		Il2CppCodeGenWriteBarrier(&___horizontalAxisName_26, value);
	}

	inline static int32_t get_offset_of_submitKey0_27() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___submitKey0_27)); }
	inline int32_t get_submitKey0_27() const { return ___submitKey0_27; }
	inline int32_t* get_address_of_submitKey0_27() { return &___submitKey0_27; }
	inline void set_submitKey0_27(int32_t value)
	{
		___submitKey0_27 = value;
	}

	inline static int32_t get_offset_of_submitKey1_28() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___submitKey1_28)); }
	inline int32_t get_submitKey1_28() const { return ___submitKey1_28; }
	inline int32_t* get_address_of_submitKey1_28() { return &___submitKey1_28; }
	inline void set_submitKey1_28(int32_t value)
	{
		___submitKey1_28 = value;
	}

	inline static int32_t get_offset_of_cancelKey0_29() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___cancelKey0_29)); }
	inline int32_t get_cancelKey0_29() const { return ___cancelKey0_29; }
	inline int32_t* get_address_of_cancelKey0_29() { return &___cancelKey0_29; }
	inline void set_cancelKey0_29(int32_t value)
	{
		___cancelKey0_29 = value;
	}

	inline static int32_t get_offset_of_cancelKey1_30() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___cancelKey1_30)); }
	inline int32_t get_cancelKey1_30() const { return ___cancelKey1_30; }
	inline int32_t* get_address_of_cancelKey1_30() { return &___cancelKey1_30; }
	inline void set_cancelKey1_30(int32_t value)
	{
		___cancelKey1_30 = value;
	}

	inline static int32_t get_offset_of_mTooltip_70() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___mTooltip_70)); }
	inline GameObject_t4012695102 * get_mTooltip_70() const { return ___mTooltip_70; }
	inline GameObject_t4012695102 ** get_address_of_mTooltip_70() { return &___mTooltip_70; }
	inline void set_mTooltip_70(GameObject_t4012695102 * value)
	{
		___mTooltip_70 = value;
		Il2CppCodeGenWriteBarrier(&___mTooltip_70, value);
	}

	inline static int32_t get_offset_of_mCam_71() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___mCam_71)); }
	inline Camera_t3533968274 * get_mCam_71() const { return ___mCam_71; }
	inline Camera_t3533968274 ** get_address_of_mCam_71() { return &___mCam_71; }
	inline void set_mCam_71(Camera_t3533968274 * value)
	{
		___mCam_71 = value;
		Il2CppCodeGenWriteBarrier(&___mCam_71, value);
	}

	inline static int32_t get_offset_of_mTooltipTime_72() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___mTooltipTime_72)); }
	inline float get_mTooltipTime_72() const { return ___mTooltipTime_72; }
	inline float* get_address_of_mTooltipTime_72() { return &___mTooltipTime_72; }
	inline void set_mTooltipTime_72(float value)
	{
		___mTooltipTime_72 = value;
	}

	inline static int32_t get_offset_of_mNextRaycast_73() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___mNextRaycast_73)); }
	inline float get_mNextRaycast_73() const { return ___mNextRaycast_73; }
	inline float* get_address_of_mNextRaycast_73() { return &___mNextRaycast_73; }
	inline void set_mNextRaycast_73(float value)
	{
		___mNextRaycast_73 = value;
	}
};

struct UICamera_t189364953_StaticFields
{
public:
	// BetterList`1<UICamera> UICamera::list
	BetterList_1_t1686332965 * ___list_2;
	// UICamera/GetKeyStateFunc UICamera::GetKeyDown
	GetKeyStateFunc_t2362323372 * ___GetKeyDown_3;
	// UICamera/GetKeyStateFunc UICamera::GetKeyUp
	GetKeyStateFunc_t2362323372 * ___GetKeyUp_4;
	// UICamera/GetKeyStateFunc UICamera::GetKey
	GetKeyStateFunc_t2362323372 * ___GetKey_5;
	// UICamera/GetAxisFunc UICamera::GetAxis
	GetAxisFunc_t3240405851 * ___GetAxis_6;
	// UICamera/OnScreenResize UICamera::onScreenResize
	OnScreenResize_t3539115999 * ___onScreenResize_7;
	// UICamera/OnCustomInput UICamera::onCustomInput
	OnCustomInput_t3775009626 * ___onCustomInput_31;
	// System.Boolean UICamera::showTooltips
	bool ___showTooltips_32;
	// UnityEngine.Vector2 UICamera::lastTouchPosition
	Vector2_t3525329788  ___lastTouchPosition_33;
	// UnityEngine.Vector3 UICamera::lastWorldPosition
	Vector3_t3525329789  ___lastWorldPosition_34;
	// UnityEngine.RaycastHit UICamera::lastHit
	RaycastHit_t46221527  ___lastHit_35;
	// UICamera UICamera::current
	UICamera_t189364953 * ___current_36;
	// UnityEngine.Camera UICamera::currentCamera
	Camera_t3533968274 * ___currentCamera_37;
	// UICamera/ControlScheme UICamera::currentScheme
	int32_t ___currentScheme_38;
	// System.Int32 UICamera::currentTouchID
	int32_t ___currentTouchID_39;
	// UnityEngine.KeyCode UICamera::currentKey
	int32_t ___currentKey_40;
	// UICamera/MouseOrTouch UICamera::currentTouch
	MouseOrTouch_t908473047 * ___currentTouch_41;
	// System.Boolean UICamera::inputHasFocus
	bool ___inputHasFocus_42;
	// UnityEngine.GameObject UICamera::mGenericHandler
	GameObject_t4012695102 * ___mGenericHandler_43;
	// UnityEngine.GameObject UICamera::fallThrough
	GameObject_t4012695102 * ___fallThrough_44;
	// UICamera/VoidDelegate UICamera::onClick
	VoidDelegate_t1986138970 * ___onClick_45;
	// UICamera/VoidDelegate UICamera::onDoubleClick
	VoidDelegate_t1986138970 * ___onDoubleClick_46;
	// UICamera/BoolDelegate UICamera::onHover
	BoolDelegate_t945637040 * ___onHover_47;
	// UICamera/BoolDelegate UICamera::onPress
	BoolDelegate_t945637040 * ___onPress_48;
	// UICamera/BoolDelegate UICamera::onSelect
	BoolDelegate_t945637040 * ___onSelect_49;
	// UICamera/FloatDelegate UICamera::onScroll
	FloatDelegate_t4185225186 * ___onScroll_50;
	// UICamera/VectorDelegate UICamera::onDrag
	VectorDelegate_t2458450953 * ___onDrag_51;
	// UICamera/VoidDelegate UICamera::onDragStart
	VoidDelegate_t1986138970 * ___onDragStart_52;
	// UICamera/ObjectDelegate UICamera::onDragOver
	ObjectDelegate_t3413901829 * ___onDragOver_53;
	// UICamera/ObjectDelegate UICamera::onDragOut
	ObjectDelegate_t3413901829 * ___onDragOut_54;
	// UICamera/VoidDelegate UICamera::onDragEnd
	VoidDelegate_t1986138970 * ___onDragEnd_55;
	// UICamera/ObjectDelegate UICamera::onDrop
	ObjectDelegate_t3413901829 * ___onDrop_56;
	// UICamera/KeyCodeDelegate UICamera::onKey
	KeyCodeDelegate_t3737044594 * ___onKey_57;
	// UICamera/BoolDelegate UICamera::onTooltip
	BoolDelegate_t945637040 * ___onTooltip_58;
	// UICamera/MoveDelegate UICamera::onMouseMove
	MoveDelegate_t757231766 * ___onMouseMove_59;
	// UnityEngine.GameObject UICamera::mCurrentSelection
	GameObject_t4012695102 * ___mCurrentSelection_60;
	// UnityEngine.GameObject UICamera::mNextSelection
	GameObject_t4012695102 * ___mNextSelection_61;
	// UICamera/ControlScheme UICamera::mNextScheme
	int32_t ___mNextScheme_62;
	// UICamera/MouseOrTouch[] UICamera::mMouse
	MouseOrTouchU5BU5D_t2832174062* ___mMouse_63;
	// UnityEngine.GameObject UICamera::mHover
	GameObject_t4012695102 * ___mHover_64;
	// UICamera/MouseOrTouch UICamera::controller
	MouseOrTouch_t908473047 * ___controller_65;
	// System.Single UICamera::mNextEvent
	float ___mNextEvent_66;
	// System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch> UICamera::mTouches
	Dictionary_2_t1399283830 * ___mTouches_67;
	// System.Int32 UICamera::mWidth
	int32_t ___mWidth_68;
	// System.Int32 UICamera::mHeight
	int32_t ___mHeight_69;
	// System.Boolean UICamera::isDragging
	bool ___isDragging_74;
	// UnityEngine.GameObject UICamera::hoveredObject
	GameObject_t4012695102 * ___hoveredObject_75;
	// UICamera/DepthEntry UICamera::mHit
	DepthEntry_t2194697103  ___mHit_76;
	// BetterList`1<UICamera/DepthEntry> UICamera::mHits
	BetterList_1_t3691665115 * ___mHits_77;
	// UnityEngine.Plane UICamera::m2DPlane
	Plane_t1600081545  ___m2DPlane_78;
	// System.Boolean UICamera::mNotifying
	bool ___mNotifying_79;
	// System.Boolean UICamera::mUsingTouchEvents
	bool ___mUsingTouchEvents_80;
	// BetterList`1/CompareFunc<UICamera/DepthEntry> UICamera::<>f__am$cache4F
	CompareFunc_t41355861 * ___U3CU3Ef__amU24cache4F_81;
	// BetterList`1/CompareFunc<UICamera/DepthEntry> UICamera::<>f__am$cache50
	CompareFunc_t41355861 * ___U3CU3Ef__amU24cache50_82;

public:
	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___list_2)); }
	inline BetterList_1_t1686332965 * get_list_2() const { return ___list_2; }
	inline BetterList_1_t1686332965 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(BetterList_1_t1686332965 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier(&___list_2, value);
	}

	inline static int32_t get_offset_of_GetKeyDown_3() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___GetKeyDown_3)); }
	inline GetKeyStateFunc_t2362323372 * get_GetKeyDown_3() const { return ___GetKeyDown_3; }
	inline GetKeyStateFunc_t2362323372 ** get_address_of_GetKeyDown_3() { return &___GetKeyDown_3; }
	inline void set_GetKeyDown_3(GetKeyStateFunc_t2362323372 * value)
	{
		___GetKeyDown_3 = value;
		Il2CppCodeGenWriteBarrier(&___GetKeyDown_3, value);
	}

	inline static int32_t get_offset_of_GetKeyUp_4() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___GetKeyUp_4)); }
	inline GetKeyStateFunc_t2362323372 * get_GetKeyUp_4() const { return ___GetKeyUp_4; }
	inline GetKeyStateFunc_t2362323372 ** get_address_of_GetKeyUp_4() { return &___GetKeyUp_4; }
	inline void set_GetKeyUp_4(GetKeyStateFunc_t2362323372 * value)
	{
		___GetKeyUp_4 = value;
		Il2CppCodeGenWriteBarrier(&___GetKeyUp_4, value);
	}

	inline static int32_t get_offset_of_GetKey_5() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___GetKey_5)); }
	inline GetKeyStateFunc_t2362323372 * get_GetKey_5() const { return ___GetKey_5; }
	inline GetKeyStateFunc_t2362323372 ** get_address_of_GetKey_5() { return &___GetKey_5; }
	inline void set_GetKey_5(GetKeyStateFunc_t2362323372 * value)
	{
		___GetKey_5 = value;
		Il2CppCodeGenWriteBarrier(&___GetKey_5, value);
	}

	inline static int32_t get_offset_of_GetAxis_6() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___GetAxis_6)); }
	inline GetAxisFunc_t3240405851 * get_GetAxis_6() const { return ___GetAxis_6; }
	inline GetAxisFunc_t3240405851 ** get_address_of_GetAxis_6() { return &___GetAxis_6; }
	inline void set_GetAxis_6(GetAxisFunc_t3240405851 * value)
	{
		___GetAxis_6 = value;
		Il2CppCodeGenWriteBarrier(&___GetAxis_6, value);
	}

	inline static int32_t get_offset_of_onScreenResize_7() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onScreenResize_7)); }
	inline OnScreenResize_t3539115999 * get_onScreenResize_7() const { return ___onScreenResize_7; }
	inline OnScreenResize_t3539115999 ** get_address_of_onScreenResize_7() { return &___onScreenResize_7; }
	inline void set_onScreenResize_7(OnScreenResize_t3539115999 * value)
	{
		___onScreenResize_7 = value;
		Il2CppCodeGenWriteBarrier(&___onScreenResize_7, value);
	}

	inline static int32_t get_offset_of_onCustomInput_31() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onCustomInput_31)); }
	inline OnCustomInput_t3775009626 * get_onCustomInput_31() const { return ___onCustomInput_31; }
	inline OnCustomInput_t3775009626 ** get_address_of_onCustomInput_31() { return &___onCustomInput_31; }
	inline void set_onCustomInput_31(OnCustomInput_t3775009626 * value)
	{
		___onCustomInput_31 = value;
		Il2CppCodeGenWriteBarrier(&___onCustomInput_31, value);
	}

	inline static int32_t get_offset_of_showTooltips_32() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___showTooltips_32)); }
	inline bool get_showTooltips_32() const { return ___showTooltips_32; }
	inline bool* get_address_of_showTooltips_32() { return &___showTooltips_32; }
	inline void set_showTooltips_32(bool value)
	{
		___showTooltips_32 = value;
	}

	inline static int32_t get_offset_of_lastTouchPosition_33() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___lastTouchPosition_33)); }
	inline Vector2_t3525329788  get_lastTouchPosition_33() const { return ___lastTouchPosition_33; }
	inline Vector2_t3525329788 * get_address_of_lastTouchPosition_33() { return &___lastTouchPosition_33; }
	inline void set_lastTouchPosition_33(Vector2_t3525329788  value)
	{
		___lastTouchPosition_33 = value;
	}

	inline static int32_t get_offset_of_lastWorldPosition_34() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___lastWorldPosition_34)); }
	inline Vector3_t3525329789  get_lastWorldPosition_34() const { return ___lastWorldPosition_34; }
	inline Vector3_t3525329789 * get_address_of_lastWorldPosition_34() { return &___lastWorldPosition_34; }
	inline void set_lastWorldPosition_34(Vector3_t3525329789  value)
	{
		___lastWorldPosition_34 = value;
	}

	inline static int32_t get_offset_of_lastHit_35() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___lastHit_35)); }
	inline RaycastHit_t46221527  get_lastHit_35() const { return ___lastHit_35; }
	inline RaycastHit_t46221527 * get_address_of_lastHit_35() { return &___lastHit_35; }
	inline void set_lastHit_35(RaycastHit_t46221527  value)
	{
		___lastHit_35 = value;
	}

	inline static int32_t get_offset_of_current_36() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___current_36)); }
	inline UICamera_t189364953 * get_current_36() const { return ___current_36; }
	inline UICamera_t189364953 ** get_address_of_current_36() { return &___current_36; }
	inline void set_current_36(UICamera_t189364953 * value)
	{
		___current_36 = value;
		Il2CppCodeGenWriteBarrier(&___current_36, value);
	}

	inline static int32_t get_offset_of_currentCamera_37() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___currentCamera_37)); }
	inline Camera_t3533968274 * get_currentCamera_37() const { return ___currentCamera_37; }
	inline Camera_t3533968274 ** get_address_of_currentCamera_37() { return &___currentCamera_37; }
	inline void set_currentCamera_37(Camera_t3533968274 * value)
	{
		___currentCamera_37 = value;
		Il2CppCodeGenWriteBarrier(&___currentCamera_37, value);
	}

	inline static int32_t get_offset_of_currentScheme_38() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___currentScheme_38)); }
	inline int32_t get_currentScheme_38() const { return ___currentScheme_38; }
	inline int32_t* get_address_of_currentScheme_38() { return &___currentScheme_38; }
	inline void set_currentScheme_38(int32_t value)
	{
		___currentScheme_38 = value;
	}

	inline static int32_t get_offset_of_currentTouchID_39() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___currentTouchID_39)); }
	inline int32_t get_currentTouchID_39() const { return ___currentTouchID_39; }
	inline int32_t* get_address_of_currentTouchID_39() { return &___currentTouchID_39; }
	inline void set_currentTouchID_39(int32_t value)
	{
		___currentTouchID_39 = value;
	}

	inline static int32_t get_offset_of_currentKey_40() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___currentKey_40)); }
	inline int32_t get_currentKey_40() const { return ___currentKey_40; }
	inline int32_t* get_address_of_currentKey_40() { return &___currentKey_40; }
	inline void set_currentKey_40(int32_t value)
	{
		___currentKey_40 = value;
	}

	inline static int32_t get_offset_of_currentTouch_41() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___currentTouch_41)); }
	inline MouseOrTouch_t908473047 * get_currentTouch_41() const { return ___currentTouch_41; }
	inline MouseOrTouch_t908473047 ** get_address_of_currentTouch_41() { return &___currentTouch_41; }
	inline void set_currentTouch_41(MouseOrTouch_t908473047 * value)
	{
		___currentTouch_41 = value;
		Il2CppCodeGenWriteBarrier(&___currentTouch_41, value);
	}

	inline static int32_t get_offset_of_inputHasFocus_42() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___inputHasFocus_42)); }
	inline bool get_inputHasFocus_42() const { return ___inputHasFocus_42; }
	inline bool* get_address_of_inputHasFocus_42() { return &___inputHasFocus_42; }
	inline void set_inputHasFocus_42(bool value)
	{
		___inputHasFocus_42 = value;
	}

	inline static int32_t get_offset_of_mGenericHandler_43() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mGenericHandler_43)); }
	inline GameObject_t4012695102 * get_mGenericHandler_43() const { return ___mGenericHandler_43; }
	inline GameObject_t4012695102 ** get_address_of_mGenericHandler_43() { return &___mGenericHandler_43; }
	inline void set_mGenericHandler_43(GameObject_t4012695102 * value)
	{
		___mGenericHandler_43 = value;
		Il2CppCodeGenWriteBarrier(&___mGenericHandler_43, value);
	}

	inline static int32_t get_offset_of_fallThrough_44() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___fallThrough_44)); }
	inline GameObject_t4012695102 * get_fallThrough_44() const { return ___fallThrough_44; }
	inline GameObject_t4012695102 ** get_address_of_fallThrough_44() { return &___fallThrough_44; }
	inline void set_fallThrough_44(GameObject_t4012695102 * value)
	{
		___fallThrough_44 = value;
		Il2CppCodeGenWriteBarrier(&___fallThrough_44, value);
	}

	inline static int32_t get_offset_of_onClick_45() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onClick_45)); }
	inline VoidDelegate_t1986138970 * get_onClick_45() const { return ___onClick_45; }
	inline VoidDelegate_t1986138970 ** get_address_of_onClick_45() { return &___onClick_45; }
	inline void set_onClick_45(VoidDelegate_t1986138970 * value)
	{
		___onClick_45 = value;
		Il2CppCodeGenWriteBarrier(&___onClick_45, value);
	}

	inline static int32_t get_offset_of_onDoubleClick_46() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onDoubleClick_46)); }
	inline VoidDelegate_t1986138970 * get_onDoubleClick_46() const { return ___onDoubleClick_46; }
	inline VoidDelegate_t1986138970 ** get_address_of_onDoubleClick_46() { return &___onDoubleClick_46; }
	inline void set_onDoubleClick_46(VoidDelegate_t1986138970 * value)
	{
		___onDoubleClick_46 = value;
		Il2CppCodeGenWriteBarrier(&___onDoubleClick_46, value);
	}

	inline static int32_t get_offset_of_onHover_47() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onHover_47)); }
	inline BoolDelegate_t945637040 * get_onHover_47() const { return ___onHover_47; }
	inline BoolDelegate_t945637040 ** get_address_of_onHover_47() { return &___onHover_47; }
	inline void set_onHover_47(BoolDelegate_t945637040 * value)
	{
		___onHover_47 = value;
		Il2CppCodeGenWriteBarrier(&___onHover_47, value);
	}

	inline static int32_t get_offset_of_onPress_48() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onPress_48)); }
	inline BoolDelegate_t945637040 * get_onPress_48() const { return ___onPress_48; }
	inline BoolDelegate_t945637040 ** get_address_of_onPress_48() { return &___onPress_48; }
	inline void set_onPress_48(BoolDelegate_t945637040 * value)
	{
		___onPress_48 = value;
		Il2CppCodeGenWriteBarrier(&___onPress_48, value);
	}

	inline static int32_t get_offset_of_onSelect_49() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onSelect_49)); }
	inline BoolDelegate_t945637040 * get_onSelect_49() const { return ___onSelect_49; }
	inline BoolDelegate_t945637040 ** get_address_of_onSelect_49() { return &___onSelect_49; }
	inline void set_onSelect_49(BoolDelegate_t945637040 * value)
	{
		___onSelect_49 = value;
		Il2CppCodeGenWriteBarrier(&___onSelect_49, value);
	}

	inline static int32_t get_offset_of_onScroll_50() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onScroll_50)); }
	inline FloatDelegate_t4185225186 * get_onScroll_50() const { return ___onScroll_50; }
	inline FloatDelegate_t4185225186 ** get_address_of_onScroll_50() { return &___onScroll_50; }
	inline void set_onScroll_50(FloatDelegate_t4185225186 * value)
	{
		___onScroll_50 = value;
		Il2CppCodeGenWriteBarrier(&___onScroll_50, value);
	}

	inline static int32_t get_offset_of_onDrag_51() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onDrag_51)); }
	inline VectorDelegate_t2458450953 * get_onDrag_51() const { return ___onDrag_51; }
	inline VectorDelegate_t2458450953 ** get_address_of_onDrag_51() { return &___onDrag_51; }
	inline void set_onDrag_51(VectorDelegate_t2458450953 * value)
	{
		___onDrag_51 = value;
		Il2CppCodeGenWriteBarrier(&___onDrag_51, value);
	}

	inline static int32_t get_offset_of_onDragStart_52() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onDragStart_52)); }
	inline VoidDelegate_t1986138970 * get_onDragStart_52() const { return ___onDragStart_52; }
	inline VoidDelegate_t1986138970 ** get_address_of_onDragStart_52() { return &___onDragStart_52; }
	inline void set_onDragStart_52(VoidDelegate_t1986138970 * value)
	{
		___onDragStart_52 = value;
		Il2CppCodeGenWriteBarrier(&___onDragStart_52, value);
	}

	inline static int32_t get_offset_of_onDragOver_53() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onDragOver_53)); }
	inline ObjectDelegate_t3413901829 * get_onDragOver_53() const { return ___onDragOver_53; }
	inline ObjectDelegate_t3413901829 ** get_address_of_onDragOver_53() { return &___onDragOver_53; }
	inline void set_onDragOver_53(ObjectDelegate_t3413901829 * value)
	{
		___onDragOver_53 = value;
		Il2CppCodeGenWriteBarrier(&___onDragOver_53, value);
	}

	inline static int32_t get_offset_of_onDragOut_54() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onDragOut_54)); }
	inline ObjectDelegate_t3413901829 * get_onDragOut_54() const { return ___onDragOut_54; }
	inline ObjectDelegate_t3413901829 ** get_address_of_onDragOut_54() { return &___onDragOut_54; }
	inline void set_onDragOut_54(ObjectDelegate_t3413901829 * value)
	{
		___onDragOut_54 = value;
		Il2CppCodeGenWriteBarrier(&___onDragOut_54, value);
	}

	inline static int32_t get_offset_of_onDragEnd_55() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onDragEnd_55)); }
	inline VoidDelegate_t1986138970 * get_onDragEnd_55() const { return ___onDragEnd_55; }
	inline VoidDelegate_t1986138970 ** get_address_of_onDragEnd_55() { return &___onDragEnd_55; }
	inline void set_onDragEnd_55(VoidDelegate_t1986138970 * value)
	{
		___onDragEnd_55 = value;
		Il2CppCodeGenWriteBarrier(&___onDragEnd_55, value);
	}

	inline static int32_t get_offset_of_onDrop_56() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onDrop_56)); }
	inline ObjectDelegate_t3413901829 * get_onDrop_56() const { return ___onDrop_56; }
	inline ObjectDelegate_t3413901829 ** get_address_of_onDrop_56() { return &___onDrop_56; }
	inline void set_onDrop_56(ObjectDelegate_t3413901829 * value)
	{
		___onDrop_56 = value;
		Il2CppCodeGenWriteBarrier(&___onDrop_56, value);
	}

	inline static int32_t get_offset_of_onKey_57() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onKey_57)); }
	inline KeyCodeDelegate_t3737044594 * get_onKey_57() const { return ___onKey_57; }
	inline KeyCodeDelegate_t3737044594 ** get_address_of_onKey_57() { return &___onKey_57; }
	inline void set_onKey_57(KeyCodeDelegate_t3737044594 * value)
	{
		___onKey_57 = value;
		Il2CppCodeGenWriteBarrier(&___onKey_57, value);
	}

	inline static int32_t get_offset_of_onTooltip_58() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onTooltip_58)); }
	inline BoolDelegate_t945637040 * get_onTooltip_58() const { return ___onTooltip_58; }
	inline BoolDelegate_t945637040 ** get_address_of_onTooltip_58() { return &___onTooltip_58; }
	inline void set_onTooltip_58(BoolDelegate_t945637040 * value)
	{
		___onTooltip_58 = value;
		Il2CppCodeGenWriteBarrier(&___onTooltip_58, value);
	}

	inline static int32_t get_offset_of_onMouseMove_59() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onMouseMove_59)); }
	inline MoveDelegate_t757231766 * get_onMouseMove_59() const { return ___onMouseMove_59; }
	inline MoveDelegate_t757231766 ** get_address_of_onMouseMove_59() { return &___onMouseMove_59; }
	inline void set_onMouseMove_59(MoveDelegate_t757231766 * value)
	{
		___onMouseMove_59 = value;
		Il2CppCodeGenWriteBarrier(&___onMouseMove_59, value);
	}

	inline static int32_t get_offset_of_mCurrentSelection_60() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mCurrentSelection_60)); }
	inline GameObject_t4012695102 * get_mCurrentSelection_60() const { return ___mCurrentSelection_60; }
	inline GameObject_t4012695102 ** get_address_of_mCurrentSelection_60() { return &___mCurrentSelection_60; }
	inline void set_mCurrentSelection_60(GameObject_t4012695102 * value)
	{
		___mCurrentSelection_60 = value;
		Il2CppCodeGenWriteBarrier(&___mCurrentSelection_60, value);
	}

	inline static int32_t get_offset_of_mNextSelection_61() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mNextSelection_61)); }
	inline GameObject_t4012695102 * get_mNextSelection_61() const { return ___mNextSelection_61; }
	inline GameObject_t4012695102 ** get_address_of_mNextSelection_61() { return &___mNextSelection_61; }
	inline void set_mNextSelection_61(GameObject_t4012695102 * value)
	{
		___mNextSelection_61 = value;
		Il2CppCodeGenWriteBarrier(&___mNextSelection_61, value);
	}

	inline static int32_t get_offset_of_mNextScheme_62() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mNextScheme_62)); }
	inline int32_t get_mNextScheme_62() const { return ___mNextScheme_62; }
	inline int32_t* get_address_of_mNextScheme_62() { return &___mNextScheme_62; }
	inline void set_mNextScheme_62(int32_t value)
	{
		___mNextScheme_62 = value;
	}

	inline static int32_t get_offset_of_mMouse_63() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mMouse_63)); }
	inline MouseOrTouchU5BU5D_t2832174062* get_mMouse_63() const { return ___mMouse_63; }
	inline MouseOrTouchU5BU5D_t2832174062** get_address_of_mMouse_63() { return &___mMouse_63; }
	inline void set_mMouse_63(MouseOrTouchU5BU5D_t2832174062* value)
	{
		___mMouse_63 = value;
		Il2CppCodeGenWriteBarrier(&___mMouse_63, value);
	}

	inline static int32_t get_offset_of_mHover_64() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mHover_64)); }
	inline GameObject_t4012695102 * get_mHover_64() const { return ___mHover_64; }
	inline GameObject_t4012695102 ** get_address_of_mHover_64() { return &___mHover_64; }
	inline void set_mHover_64(GameObject_t4012695102 * value)
	{
		___mHover_64 = value;
		Il2CppCodeGenWriteBarrier(&___mHover_64, value);
	}

	inline static int32_t get_offset_of_controller_65() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___controller_65)); }
	inline MouseOrTouch_t908473047 * get_controller_65() const { return ___controller_65; }
	inline MouseOrTouch_t908473047 ** get_address_of_controller_65() { return &___controller_65; }
	inline void set_controller_65(MouseOrTouch_t908473047 * value)
	{
		___controller_65 = value;
		Il2CppCodeGenWriteBarrier(&___controller_65, value);
	}

	inline static int32_t get_offset_of_mNextEvent_66() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mNextEvent_66)); }
	inline float get_mNextEvent_66() const { return ___mNextEvent_66; }
	inline float* get_address_of_mNextEvent_66() { return &___mNextEvent_66; }
	inline void set_mNextEvent_66(float value)
	{
		___mNextEvent_66 = value;
	}

	inline static int32_t get_offset_of_mTouches_67() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mTouches_67)); }
	inline Dictionary_2_t1399283830 * get_mTouches_67() const { return ___mTouches_67; }
	inline Dictionary_2_t1399283830 ** get_address_of_mTouches_67() { return &___mTouches_67; }
	inline void set_mTouches_67(Dictionary_2_t1399283830 * value)
	{
		___mTouches_67 = value;
		Il2CppCodeGenWriteBarrier(&___mTouches_67, value);
	}

	inline static int32_t get_offset_of_mWidth_68() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mWidth_68)); }
	inline int32_t get_mWidth_68() const { return ___mWidth_68; }
	inline int32_t* get_address_of_mWidth_68() { return &___mWidth_68; }
	inline void set_mWidth_68(int32_t value)
	{
		___mWidth_68 = value;
	}

	inline static int32_t get_offset_of_mHeight_69() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mHeight_69)); }
	inline int32_t get_mHeight_69() const { return ___mHeight_69; }
	inline int32_t* get_address_of_mHeight_69() { return &___mHeight_69; }
	inline void set_mHeight_69(int32_t value)
	{
		___mHeight_69 = value;
	}

	inline static int32_t get_offset_of_isDragging_74() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___isDragging_74)); }
	inline bool get_isDragging_74() const { return ___isDragging_74; }
	inline bool* get_address_of_isDragging_74() { return &___isDragging_74; }
	inline void set_isDragging_74(bool value)
	{
		___isDragging_74 = value;
	}

	inline static int32_t get_offset_of_hoveredObject_75() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___hoveredObject_75)); }
	inline GameObject_t4012695102 * get_hoveredObject_75() const { return ___hoveredObject_75; }
	inline GameObject_t4012695102 ** get_address_of_hoveredObject_75() { return &___hoveredObject_75; }
	inline void set_hoveredObject_75(GameObject_t4012695102 * value)
	{
		___hoveredObject_75 = value;
		Il2CppCodeGenWriteBarrier(&___hoveredObject_75, value);
	}

	inline static int32_t get_offset_of_mHit_76() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mHit_76)); }
	inline DepthEntry_t2194697103  get_mHit_76() const { return ___mHit_76; }
	inline DepthEntry_t2194697103 * get_address_of_mHit_76() { return &___mHit_76; }
	inline void set_mHit_76(DepthEntry_t2194697103  value)
	{
		___mHit_76 = value;
	}

	inline static int32_t get_offset_of_mHits_77() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mHits_77)); }
	inline BetterList_1_t3691665115 * get_mHits_77() const { return ___mHits_77; }
	inline BetterList_1_t3691665115 ** get_address_of_mHits_77() { return &___mHits_77; }
	inline void set_mHits_77(BetterList_1_t3691665115 * value)
	{
		___mHits_77 = value;
		Il2CppCodeGenWriteBarrier(&___mHits_77, value);
	}

	inline static int32_t get_offset_of_m2DPlane_78() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___m2DPlane_78)); }
	inline Plane_t1600081545  get_m2DPlane_78() const { return ___m2DPlane_78; }
	inline Plane_t1600081545 * get_address_of_m2DPlane_78() { return &___m2DPlane_78; }
	inline void set_m2DPlane_78(Plane_t1600081545  value)
	{
		___m2DPlane_78 = value;
	}

	inline static int32_t get_offset_of_mNotifying_79() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mNotifying_79)); }
	inline bool get_mNotifying_79() const { return ___mNotifying_79; }
	inline bool* get_address_of_mNotifying_79() { return &___mNotifying_79; }
	inline void set_mNotifying_79(bool value)
	{
		___mNotifying_79 = value;
	}

	inline static int32_t get_offset_of_mUsingTouchEvents_80() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mUsingTouchEvents_80)); }
	inline bool get_mUsingTouchEvents_80() const { return ___mUsingTouchEvents_80; }
	inline bool* get_address_of_mUsingTouchEvents_80() { return &___mUsingTouchEvents_80; }
	inline void set_mUsingTouchEvents_80(bool value)
	{
		___mUsingTouchEvents_80 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4F_81() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___U3CU3Ef__amU24cache4F_81)); }
	inline CompareFunc_t41355861 * get_U3CU3Ef__amU24cache4F_81() const { return ___U3CU3Ef__amU24cache4F_81; }
	inline CompareFunc_t41355861 ** get_address_of_U3CU3Ef__amU24cache4F_81() { return &___U3CU3Ef__amU24cache4F_81; }
	inline void set_U3CU3Ef__amU24cache4F_81(CompareFunc_t41355861 * value)
	{
		___U3CU3Ef__amU24cache4F_81 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4F_81, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache50_82() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___U3CU3Ef__amU24cache50_82)); }
	inline CompareFunc_t41355861 * get_U3CU3Ef__amU24cache50_82() const { return ___U3CU3Ef__amU24cache50_82; }
	inline CompareFunc_t41355861 ** get_address_of_U3CU3Ef__amU24cache50_82() { return &___U3CU3Ef__amU24cache50_82; }
	inline void set_U3CU3Ef__amU24cache50_82(CompareFunc_t41355861 * value)
	{
		___U3CU3Ef__amU24cache50_82 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache50_82, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
