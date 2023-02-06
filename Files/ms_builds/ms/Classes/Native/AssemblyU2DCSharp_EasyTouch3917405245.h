#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// EasyTouch
struct EasyTouch_t3917405245;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Collections.Generic.List`1<ECamera>
struct List_1_t3916253379;
// System.Collections.Generic.List`1<UnityEngine.Camera>
struct List_1_t35959947;
// System.Collections.Generic.List`1<UnityEngine.Rect>
struct List_1_t2322387786;
// EasyTouchInput
struct EasyTouchInput_t733653389;
// Finger[]
struct FingerU5BU5D_t400038964;
// UnityEngine.Texture
struct Texture_t1769722184;
// EasyTouch/TouchCancelHandler
struct TouchCancelHandler_t3136056977;
// EasyTouch/Cancel2FingersHandler
struct Cancel2FingersHandler_t1748880568;
// EasyTouch/TouchStartHandler
struct TouchStartHandler_t3226887495;
// EasyTouch/TouchDownHandler
struct TouchDownHandler_t618663849;
// EasyTouch/TouchUpHandler
struct TouchUpHandler_t399380432;
// EasyTouch/SimpleTapHandler
struct SimpleTapHandler_t3561373081;
// EasyTouch/DoubleTapHandler
struct DoubleTapHandler_t3148000504;
// EasyTouch/LongTapStartHandler
struct LongTapStartHandler_t1240596879;
// EasyTouch/LongTapHandler
struct LongTapHandler_t68117987;
// EasyTouch/LongTapEndHandler
struct LongTapEndHandler_t1010403510;
// EasyTouch/DragStartHandler
struct DragStartHandler_t2772987900;
// EasyTouch/DragHandler
struct DragHandler_t3682527062;
// EasyTouch/DragEndHandler
struct DragEndHandler_t3041046115;
// EasyTouch/SwipeStartHandler
struct SwipeStartHandler_t4071400642;
// EasyTouch/SwipeHandler
struct SwipeHandler_t1297239760;
// EasyTouch/SwipeEndHandler
struct SwipeEndHandler_t3180944553;
// EasyTouch/TouchStart2FingersHandler
struct TouchStart2FingersHandler_t2423371695;
// EasyTouch/TouchDown2FingersHandler
struct TouchDown2FingersHandler_t2414075921;
// EasyTouch/TouchUp2FingersHandler
struct TouchUp2FingersHandler_t1262405944;
// EasyTouch/SimpleTap2FingersHandler
struct SimpleTap2FingersHandler_t2163547649;
// EasyTouch/DoubleTap2FingersHandler
struct DoubleTap2FingersHandler_t4258774624;
// EasyTouch/LongTapStart2FingersHandler
struct LongTapStart2FingersHandler_t3052440567;
// EasyTouch/LongTap2FingersHandler
struct LongTap2FingersHandler_t1692294219;
// EasyTouch/LongTapEnd2FingersHandler
struct LongTapEnd2FingersHandler_t506330142;
// EasyTouch/TwistHandler
struct TwistHandler_t671277635;
// EasyTouch/TwistEndHandler
struct TwistEndHandler_t3891277910;
// EasyTouch/PinchInHandler
struct PinchInHandler_t7450347;
// EasyTouch/PinchOutHandler
struct PinchOutHandler_t1877879894;
// EasyTouch/PinchEndHandler
struct PinchEndHandler_t1495132713;
// EasyTouch/DragStart2FingersHandler
struct DragStart2FingersHandler_t3827055972;
// EasyTouch/Drag2FingersHandler
struct Drag2FingersHandler_t1945811646;
// EasyTouch/DragEnd2FingersHandler
struct DragEnd2FingersHandler_t2491491531;
// EasyTouch/SwipeStart2FingersHandler
struct SwipeStart2FingersHandler_t553274410;
// EasyTouch/Swipe2FingersHandler
struct Swipe2FingersHandler_t2484340792;
// EasyTouch/SwipeEnd2FingersHandler
struct SwipeEnd2FingersHandler_t4110429457;
// EasyTouch/EasyTouchIsReadyHandler
struct EasyTouchIsReadyHandler_t1347646478;
// System.Predicate`1<ECamera>
struct Predicate_1_t3690258308;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"
#include "UnityEngine_UnityEngine_KeyCode2371581209.h"
#include "AssemblyU2DCSharp_EasyTouch_GestureType1319517187.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyTouch
struct  EasyTouch_t3917405245  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean EasyTouch::enable
	bool ___enable_3;
	// System.Boolean EasyTouch::enableRemote
	bool ___enableRemote_4;
	// System.Boolean EasyTouch::useBroadcastMessage
	bool ___useBroadcastMessage_5;
	// UnityEngine.GameObject EasyTouch::receiverObject
	GameObject_t4012695102 * ___receiverObject_6;
	// System.Boolean EasyTouch::isExtension
	bool ___isExtension_7;
	// System.Boolean EasyTouch::enable2FingersGesture
	bool ___enable2FingersGesture_8;
	// System.Boolean EasyTouch::enableTwist
	bool ___enableTwist_9;
	// System.Boolean EasyTouch::enablePinch
	bool ___enablePinch_10;
	// System.Collections.Generic.List`1<ECamera> EasyTouch::touchCameras
	List_1_t3916253379 * ___touchCameras_11;
	// System.Boolean EasyTouch::autoSelect
	bool ___autoSelect_12;
	// UnityEngine.LayerMask EasyTouch::pickableLayers
	LayerMask_t1862190090  ___pickableLayers_13;
	// System.Boolean EasyTouch::enable2D
	bool ___enable2D_14;
	// UnityEngine.LayerMask EasyTouch::pickableLayers2D
	LayerMask_t1862190090  ___pickableLayers2D_15;
	// System.Single EasyTouch::StationnaryTolerance
	float ___StationnaryTolerance_16;
	// System.Single EasyTouch::longTapTime
	float ___longTapTime_17;
	// System.Single EasyTouch::swipeTolerance
	float ___swipeTolerance_18;
	// System.Single EasyTouch::minPinchLength
	float ___minPinchLength_19;
	// System.Single EasyTouch::minTwistAngle
	float ___minTwistAngle_20;
	// System.Boolean EasyTouch::enabledNGuiMode
	bool ___enabledNGuiMode_21;
	// UnityEngine.LayerMask EasyTouch::nGUILayers
	LayerMask_t1862190090  ___nGUILayers_22;
	// System.Collections.Generic.List`1<UnityEngine.Camera> EasyTouch::nGUICameras
	List_1_t35959947 * ___nGUICameras_23;
	// System.Boolean EasyTouch::isStartHoverNGUI
	bool ___isStartHoverNGUI_24;
	// System.Collections.Generic.List`1<UnityEngine.Rect> EasyTouch::reservedAreas
	List_1_t2322387786 * ___reservedAreas_25;
	// System.Collections.Generic.List`1<UnityEngine.Rect> EasyTouch::reservedVirtualAreas
	List_1_t2322387786 * ___reservedVirtualAreas_26;
	// System.Collections.Generic.List`1<UnityEngine.Rect> EasyTouch::reservedGuiAreas
	List_1_t2322387786 * ___reservedGuiAreas_27;
	// System.Boolean EasyTouch::enableReservedArea
	bool ___enableReservedArea_28;
	// UnityEngine.KeyCode EasyTouch::twistKey
	int32_t ___twistKey_29;
	// UnityEngine.KeyCode EasyTouch::swipeKey
	int32_t ___swipeKey_30;
	// System.Boolean EasyTouch::showGeneral
	bool ___showGeneral_31;
	// System.Boolean EasyTouch::showSelect
	bool ___showSelect_32;
	// System.Boolean EasyTouch::showGesture
	bool ___showGesture_33;
	// System.Boolean EasyTouch::showTwoFinger
	bool ___showTwoFinger_34;
	// System.Boolean EasyTouch::showSecondFinger
	bool ___showSecondFinger_35;
	// EasyTouchInput EasyTouch::input
	EasyTouchInput_t733653389 * ___input_36;
	// EasyTouch/GestureType EasyTouch::complexCurrentGesture
	int32_t ___complexCurrentGesture_37;
	// EasyTouch/GestureType EasyTouch::oldGesture
	int32_t ___oldGesture_38;
	// System.Single EasyTouch::startTimeAction
	float ___startTimeAction_39;
	// Finger[] EasyTouch::fingers
	FingerU5BU5D_t400038964* ___fingers_40;
	// UnityEngine.GameObject EasyTouch::pickObject2Finger
	GameObject_t4012695102 * ___pickObject2Finger_41;
	// UnityEngine.GameObject EasyTouch::oldPickObject2Finger
	GameObject_t4012695102 * ___oldPickObject2Finger_42;
	// UnityEngine.Texture EasyTouch::secondFingerTexture
	Texture_t1769722184 * ___secondFingerTexture_43;
	// UnityEngine.Vector2 EasyTouch::startPosition2Finger
	Vector2_t3525329788  ___startPosition2Finger_44;
	// System.Int32 EasyTouch::twoFinger0
	int32_t ___twoFinger0_45;
	// System.Int32 EasyTouch::twoFinger1
	int32_t ___twoFinger1_46;
	// UnityEngine.Vector2 EasyTouch::oldStartPosition2Finger
	Vector2_t3525329788  ___oldStartPosition2Finger_47;
	// System.Single EasyTouch::oldFingerDistance
	float ___oldFingerDistance_48;
	// System.Boolean EasyTouch::twoFingerDragStart
	bool ___twoFingerDragStart_49;
	// System.Boolean EasyTouch::twoFingerSwipeStart
	bool ___twoFingerSwipeStart_50;
	// System.Int32 EasyTouch::oldTouchCount
	int32_t ___oldTouchCount_51;

public:
	inline static int32_t get_offset_of_enable_3() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___enable_3)); }
	inline bool get_enable_3() const { return ___enable_3; }
	inline bool* get_address_of_enable_3() { return &___enable_3; }
	inline void set_enable_3(bool value)
	{
		___enable_3 = value;
	}

	inline static int32_t get_offset_of_enableRemote_4() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___enableRemote_4)); }
	inline bool get_enableRemote_4() const { return ___enableRemote_4; }
	inline bool* get_address_of_enableRemote_4() { return &___enableRemote_4; }
	inline void set_enableRemote_4(bool value)
	{
		___enableRemote_4 = value;
	}

	inline static int32_t get_offset_of_useBroadcastMessage_5() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___useBroadcastMessage_5)); }
	inline bool get_useBroadcastMessage_5() const { return ___useBroadcastMessage_5; }
	inline bool* get_address_of_useBroadcastMessage_5() { return &___useBroadcastMessage_5; }
	inline void set_useBroadcastMessage_5(bool value)
	{
		___useBroadcastMessage_5 = value;
	}

	inline static int32_t get_offset_of_receiverObject_6() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___receiverObject_6)); }
	inline GameObject_t4012695102 * get_receiverObject_6() const { return ___receiverObject_6; }
	inline GameObject_t4012695102 ** get_address_of_receiverObject_6() { return &___receiverObject_6; }
	inline void set_receiverObject_6(GameObject_t4012695102 * value)
	{
		___receiverObject_6 = value;
		Il2CppCodeGenWriteBarrier(&___receiverObject_6, value);
	}

	inline static int32_t get_offset_of_isExtension_7() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___isExtension_7)); }
	inline bool get_isExtension_7() const { return ___isExtension_7; }
	inline bool* get_address_of_isExtension_7() { return &___isExtension_7; }
	inline void set_isExtension_7(bool value)
	{
		___isExtension_7 = value;
	}

	inline static int32_t get_offset_of_enable2FingersGesture_8() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___enable2FingersGesture_8)); }
	inline bool get_enable2FingersGesture_8() const { return ___enable2FingersGesture_8; }
	inline bool* get_address_of_enable2FingersGesture_8() { return &___enable2FingersGesture_8; }
	inline void set_enable2FingersGesture_8(bool value)
	{
		___enable2FingersGesture_8 = value;
	}

	inline static int32_t get_offset_of_enableTwist_9() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___enableTwist_9)); }
	inline bool get_enableTwist_9() const { return ___enableTwist_9; }
	inline bool* get_address_of_enableTwist_9() { return &___enableTwist_9; }
	inline void set_enableTwist_9(bool value)
	{
		___enableTwist_9 = value;
	}

	inline static int32_t get_offset_of_enablePinch_10() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___enablePinch_10)); }
	inline bool get_enablePinch_10() const { return ___enablePinch_10; }
	inline bool* get_address_of_enablePinch_10() { return &___enablePinch_10; }
	inline void set_enablePinch_10(bool value)
	{
		___enablePinch_10 = value;
	}

	inline static int32_t get_offset_of_touchCameras_11() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___touchCameras_11)); }
	inline List_1_t3916253379 * get_touchCameras_11() const { return ___touchCameras_11; }
	inline List_1_t3916253379 ** get_address_of_touchCameras_11() { return &___touchCameras_11; }
	inline void set_touchCameras_11(List_1_t3916253379 * value)
	{
		___touchCameras_11 = value;
		Il2CppCodeGenWriteBarrier(&___touchCameras_11, value);
	}

	inline static int32_t get_offset_of_autoSelect_12() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___autoSelect_12)); }
	inline bool get_autoSelect_12() const { return ___autoSelect_12; }
	inline bool* get_address_of_autoSelect_12() { return &___autoSelect_12; }
	inline void set_autoSelect_12(bool value)
	{
		___autoSelect_12 = value;
	}

	inline static int32_t get_offset_of_pickableLayers_13() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___pickableLayers_13)); }
	inline LayerMask_t1862190090  get_pickableLayers_13() const { return ___pickableLayers_13; }
	inline LayerMask_t1862190090 * get_address_of_pickableLayers_13() { return &___pickableLayers_13; }
	inline void set_pickableLayers_13(LayerMask_t1862190090  value)
	{
		___pickableLayers_13 = value;
	}

	inline static int32_t get_offset_of_enable2D_14() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___enable2D_14)); }
	inline bool get_enable2D_14() const { return ___enable2D_14; }
	inline bool* get_address_of_enable2D_14() { return &___enable2D_14; }
	inline void set_enable2D_14(bool value)
	{
		___enable2D_14 = value;
	}

	inline static int32_t get_offset_of_pickableLayers2D_15() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___pickableLayers2D_15)); }
	inline LayerMask_t1862190090  get_pickableLayers2D_15() const { return ___pickableLayers2D_15; }
	inline LayerMask_t1862190090 * get_address_of_pickableLayers2D_15() { return &___pickableLayers2D_15; }
	inline void set_pickableLayers2D_15(LayerMask_t1862190090  value)
	{
		___pickableLayers2D_15 = value;
	}

	inline static int32_t get_offset_of_StationnaryTolerance_16() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___StationnaryTolerance_16)); }
	inline float get_StationnaryTolerance_16() const { return ___StationnaryTolerance_16; }
	inline float* get_address_of_StationnaryTolerance_16() { return &___StationnaryTolerance_16; }
	inline void set_StationnaryTolerance_16(float value)
	{
		___StationnaryTolerance_16 = value;
	}

	inline static int32_t get_offset_of_longTapTime_17() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___longTapTime_17)); }
	inline float get_longTapTime_17() const { return ___longTapTime_17; }
	inline float* get_address_of_longTapTime_17() { return &___longTapTime_17; }
	inline void set_longTapTime_17(float value)
	{
		___longTapTime_17 = value;
	}

	inline static int32_t get_offset_of_swipeTolerance_18() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___swipeTolerance_18)); }
	inline float get_swipeTolerance_18() const { return ___swipeTolerance_18; }
	inline float* get_address_of_swipeTolerance_18() { return &___swipeTolerance_18; }
	inline void set_swipeTolerance_18(float value)
	{
		___swipeTolerance_18 = value;
	}

	inline static int32_t get_offset_of_minPinchLength_19() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___minPinchLength_19)); }
	inline float get_minPinchLength_19() const { return ___minPinchLength_19; }
	inline float* get_address_of_minPinchLength_19() { return &___minPinchLength_19; }
	inline void set_minPinchLength_19(float value)
	{
		___minPinchLength_19 = value;
	}

	inline static int32_t get_offset_of_minTwistAngle_20() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___minTwistAngle_20)); }
	inline float get_minTwistAngle_20() const { return ___minTwistAngle_20; }
	inline float* get_address_of_minTwistAngle_20() { return &___minTwistAngle_20; }
	inline void set_minTwistAngle_20(float value)
	{
		___minTwistAngle_20 = value;
	}

	inline static int32_t get_offset_of_enabledNGuiMode_21() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___enabledNGuiMode_21)); }
	inline bool get_enabledNGuiMode_21() const { return ___enabledNGuiMode_21; }
	inline bool* get_address_of_enabledNGuiMode_21() { return &___enabledNGuiMode_21; }
	inline void set_enabledNGuiMode_21(bool value)
	{
		___enabledNGuiMode_21 = value;
	}

	inline static int32_t get_offset_of_nGUILayers_22() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___nGUILayers_22)); }
	inline LayerMask_t1862190090  get_nGUILayers_22() const { return ___nGUILayers_22; }
	inline LayerMask_t1862190090 * get_address_of_nGUILayers_22() { return &___nGUILayers_22; }
	inline void set_nGUILayers_22(LayerMask_t1862190090  value)
	{
		___nGUILayers_22 = value;
	}

	inline static int32_t get_offset_of_nGUICameras_23() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___nGUICameras_23)); }
	inline List_1_t35959947 * get_nGUICameras_23() const { return ___nGUICameras_23; }
	inline List_1_t35959947 ** get_address_of_nGUICameras_23() { return &___nGUICameras_23; }
	inline void set_nGUICameras_23(List_1_t35959947 * value)
	{
		___nGUICameras_23 = value;
		Il2CppCodeGenWriteBarrier(&___nGUICameras_23, value);
	}

	inline static int32_t get_offset_of_isStartHoverNGUI_24() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___isStartHoverNGUI_24)); }
	inline bool get_isStartHoverNGUI_24() const { return ___isStartHoverNGUI_24; }
	inline bool* get_address_of_isStartHoverNGUI_24() { return &___isStartHoverNGUI_24; }
	inline void set_isStartHoverNGUI_24(bool value)
	{
		___isStartHoverNGUI_24 = value;
	}

	inline static int32_t get_offset_of_reservedAreas_25() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___reservedAreas_25)); }
	inline List_1_t2322387786 * get_reservedAreas_25() const { return ___reservedAreas_25; }
	inline List_1_t2322387786 ** get_address_of_reservedAreas_25() { return &___reservedAreas_25; }
	inline void set_reservedAreas_25(List_1_t2322387786 * value)
	{
		___reservedAreas_25 = value;
		Il2CppCodeGenWriteBarrier(&___reservedAreas_25, value);
	}

	inline static int32_t get_offset_of_reservedVirtualAreas_26() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___reservedVirtualAreas_26)); }
	inline List_1_t2322387786 * get_reservedVirtualAreas_26() const { return ___reservedVirtualAreas_26; }
	inline List_1_t2322387786 ** get_address_of_reservedVirtualAreas_26() { return &___reservedVirtualAreas_26; }
	inline void set_reservedVirtualAreas_26(List_1_t2322387786 * value)
	{
		___reservedVirtualAreas_26 = value;
		Il2CppCodeGenWriteBarrier(&___reservedVirtualAreas_26, value);
	}

	inline static int32_t get_offset_of_reservedGuiAreas_27() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___reservedGuiAreas_27)); }
	inline List_1_t2322387786 * get_reservedGuiAreas_27() const { return ___reservedGuiAreas_27; }
	inline List_1_t2322387786 ** get_address_of_reservedGuiAreas_27() { return &___reservedGuiAreas_27; }
	inline void set_reservedGuiAreas_27(List_1_t2322387786 * value)
	{
		___reservedGuiAreas_27 = value;
		Il2CppCodeGenWriteBarrier(&___reservedGuiAreas_27, value);
	}

	inline static int32_t get_offset_of_enableReservedArea_28() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___enableReservedArea_28)); }
	inline bool get_enableReservedArea_28() const { return ___enableReservedArea_28; }
	inline bool* get_address_of_enableReservedArea_28() { return &___enableReservedArea_28; }
	inline void set_enableReservedArea_28(bool value)
	{
		___enableReservedArea_28 = value;
	}

	inline static int32_t get_offset_of_twistKey_29() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___twistKey_29)); }
	inline int32_t get_twistKey_29() const { return ___twistKey_29; }
	inline int32_t* get_address_of_twistKey_29() { return &___twistKey_29; }
	inline void set_twistKey_29(int32_t value)
	{
		___twistKey_29 = value;
	}

	inline static int32_t get_offset_of_swipeKey_30() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___swipeKey_30)); }
	inline int32_t get_swipeKey_30() const { return ___swipeKey_30; }
	inline int32_t* get_address_of_swipeKey_30() { return &___swipeKey_30; }
	inline void set_swipeKey_30(int32_t value)
	{
		___swipeKey_30 = value;
	}

	inline static int32_t get_offset_of_showGeneral_31() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___showGeneral_31)); }
	inline bool get_showGeneral_31() const { return ___showGeneral_31; }
	inline bool* get_address_of_showGeneral_31() { return &___showGeneral_31; }
	inline void set_showGeneral_31(bool value)
	{
		___showGeneral_31 = value;
	}

	inline static int32_t get_offset_of_showSelect_32() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___showSelect_32)); }
	inline bool get_showSelect_32() const { return ___showSelect_32; }
	inline bool* get_address_of_showSelect_32() { return &___showSelect_32; }
	inline void set_showSelect_32(bool value)
	{
		___showSelect_32 = value;
	}

	inline static int32_t get_offset_of_showGesture_33() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___showGesture_33)); }
	inline bool get_showGesture_33() const { return ___showGesture_33; }
	inline bool* get_address_of_showGesture_33() { return &___showGesture_33; }
	inline void set_showGesture_33(bool value)
	{
		___showGesture_33 = value;
	}

	inline static int32_t get_offset_of_showTwoFinger_34() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___showTwoFinger_34)); }
	inline bool get_showTwoFinger_34() const { return ___showTwoFinger_34; }
	inline bool* get_address_of_showTwoFinger_34() { return &___showTwoFinger_34; }
	inline void set_showTwoFinger_34(bool value)
	{
		___showTwoFinger_34 = value;
	}

	inline static int32_t get_offset_of_showSecondFinger_35() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___showSecondFinger_35)); }
	inline bool get_showSecondFinger_35() const { return ___showSecondFinger_35; }
	inline bool* get_address_of_showSecondFinger_35() { return &___showSecondFinger_35; }
	inline void set_showSecondFinger_35(bool value)
	{
		___showSecondFinger_35 = value;
	}

	inline static int32_t get_offset_of_input_36() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___input_36)); }
	inline EasyTouchInput_t733653389 * get_input_36() const { return ___input_36; }
	inline EasyTouchInput_t733653389 ** get_address_of_input_36() { return &___input_36; }
	inline void set_input_36(EasyTouchInput_t733653389 * value)
	{
		___input_36 = value;
		Il2CppCodeGenWriteBarrier(&___input_36, value);
	}

	inline static int32_t get_offset_of_complexCurrentGesture_37() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___complexCurrentGesture_37)); }
	inline int32_t get_complexCurrentGesture_37() const { return ___complexCurrentGesture_37; }
	inline int32_t* get_address_of_complexCurrentGesture_37() { return &___complexCurrentGesture_37; }
	inline void set_complexCurrentGesture_37(int32_t value)
	{
		___complexCurrentGesture_37 = value;
	}

	inline static int32_t get_offset_of_oldGesture_38() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___oldGesture_38)); }
	inline int32_t get_oldGesture_38() const { return ___oldGesture_38; }
	inline int32_t* get_address_of_oldGesture_38() { return &___oldGesture_38; }
	inline void set_oldGesture_38(int32_t value)
	{
		___oldGesture_38 = value;
	}

	inline static int32_t get_offset_of_startTimeAction_39() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___startTimeAction_39)); }
	inline float get_startTimeAction_39() const { return ___startTimeAction_39; }
	inline float* get_address_of_startTimeAction_39() { return &___startTimeAction_39; }
	inline void set_startTimeAction_39(float value)
	{
		___startTimeAction_39 = value;
	}

	inline static int32_t get_offset_of_fingers_40() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___fingers_40)); }
	inline FingerU5BU5D_t400038964* get_fingers_40() const { return ___fingers_40; }
	inline FingerU5BU5D_t400038964** get_address_of_fingers_40() { return &___fingers_40; }
	inline void set_fingers_40(FingerU5BU5D_t400038964* value)
	{
		___fingers_40 = value;
		Il2CppCodeGenWriteBarrier(&___fingers_40, value);
	}

	inline static int32_t get_offset_of_pickObject2Finger_41() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___pickObject2Finger_41)); }
	inline GameObject_t4012695102 * get_pickObject2Finger_41() const { return ___pickObject2Finger_41; }
	inline GameObject_t4012695102 ** get_address_of_pickObject2Finger_41() { return &___pickObject2Finger_41; }
	inline void set_pickObject2Finger_41(GameObject_t4012695102 * value)
	{
		___pickObject2Finger_41 = value;
		Il2CppCodeGenWriteBarrier(&___pickObject2Finger_41, value);
	}

	inline static int32_t get_offset_of_oldPickObject2Finger_42() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___oldPickObject2Finger_42)); }
	inline GameObject_t4012695102 * get_oldPickObject2Finger_42() const { return ___oldPickObject2Finger_42; }
	inline GameObject_t4012695102 ** get_address_of_oldPickObject2Finger_42() { return &___oldPickObject2Finger_42; }
	inline void set_oldPickObject2Finger_42(GameObject_t4012695102 * value)
	{
		___oldPickObject2Finger_42 = value;
		Il2CppCodeGenWriteBarrier(&___oldPickObject2Finger_42, value);
	}

	inline static int32_t get_offset_of_secondFingerTexture_43() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___secondFingerTexture_43)); }
	inline Texture_t1769722184 * get_secondFingerTexture_43() const { return ___secondFingerTexture_43; }
	inline Texture_t1769722184 ** get_address_of_secondFingerTexture_43() { return &___secondFingerTexture_43; }
	inline void set_secondFingerTexture_43(Texture_t1769722184 * value)
	{
		___secondFingerTexture_43 = value;
		Il2CppCodeGenWriteBarrier(&___secondFingerTexture_43, value);
	}

	inline static int32_t get_offset_of_startPosition2Finger_44() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___startPosition2Finger_44)); }
	inline Vector2_t3525329788  get_startPosition2Finger_44() const { return ___startPosition2Finger_44; }
	inline Vector2_t3525329788 * get_address_of_startPosition2Finger_44() { return &___startPosition2Finger_44; }
	inline void set_startPosition2Finger_44(Vector2_t3525329788  value)
	{
		___startPosition2Finger_44 = value;
	}

	inline static int32_t get_offset_of_twoFinger0_45() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___twoFinger0_45)); }
	inline int32_t get_twoFinger0_45() const { return ___twoFinger0_45; }
	inline int32_t* get_address_of_twoFinger0_45() { return &___twoFinger0_45; }
	inline void set_twoFinger0_45(int32_t value)
	{
		___twoFinger0_45 = value;
	}

	inline static int32_t get_offset_of_twoFinger1_46() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___twoFinger1_46)); }
	inline int32_t get_twoFinger1_46() const { return ___twoFinger1_46; }
	inline int32_t* get_address_of_twoFinger1_46() { return &___twoFinger1_46; }
	inline void set_twoFinger1_46(int32_t value)
	{
		___twoFinger1_46 = value;
	}

	inline static int32_t get_offset_of_oldStartPosition2Finger_47() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___oldStartPosition2Finger_47)); }
	inline Vector2_t3525329788  get_oldStartPosition2Finger_47() const { return ___oldStartPosition2Finger_47; }
	inline Vector2_t3525329788 * get_address_of_oldStartPosition2Finger_47() { return &___oldStartPosition2Finger_47; }
	inline void set_oldStartPosition2Finger_47(Vector2_t3525329788  value)
	{
		___oldStartPosition2Finger_47 = value;
	}

	inline static int32_t get_offset_of_oldFingerDistance_48() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___oldFingerDistance_48)); }
	inline float get_oldFingerDistance_48() const { return ___oldFingerDistance_48; }
	inline float* get_address_of_oldFingerDistance_48() { return &___oldFingerDistance_48; }
	inline void set_oldFingerDistance_48(float value)
	{
		___oldFingerDistance_48 = value;
	}

	inline static int32_t get_offset_of_twoFingerDragStart_49() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___twoFingerDragStart_49)); }
	inline bool get_twoFingerDragStart_49() const { return ___twoFingerDragStart_49; }
	inline bool* get_address_of_twoFingerDragStart_49() { return &___twoFingerDragStart_49; }
	inline void set_twoFingerDragStart_49(bool value)
	{
		___twoFingerDragStart_49 = value;
	}

	inline static int32_t get_offset_of_twoFingerSwipeStart_50() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___twoFingerSwipeStart_50)); }
	inline bool get_twoFingerSwipeStart_50() const { return ___twoFingerSwipeStart_50; }
	inline bool* get_address_of_twoFingerSwipeStart_50() { return &___twoFingerSwipeStart_50; }
	inline void set_twoFingerSwipeStart_50(bool value)
	{
		___twoFingerSwipeStart_50 = value;
	}

	inline static int32_t get_offset_of_oldTouchCount_51() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245, ___oldTouchCount_51)); }
	inline int32_t get_oldTouchCount_51() const { return ___oldTouchCount_51; }
	inline int32_t* get_address_of_oldTouchCount_51() { return &___oldTouchCount_51; }
	inline void set_oldTouchCount_51(int32_t value)
	{
		___oldTouchCount_51 = value;
	}
};

struct EasyTouch_t3917405245_StaticFields
{
public:
	// EasyTouch EasyTouch::instance
	EasyTouch_t3917405245 * ___instance_2;
	// EasyTouch/TouchCancelHandler EasyTouch::On_Cancel
	TouchCancelHandler_t3136056977 * ___On_Cancel_52;
	// EasyTouch/Cancel2FingersHandler EasyTouch::On_Cancel2Fingers
	Cancel2FingersHandler_t1748880568 * ___On_Cancel2Fingers_53;
	// EasyTouch/TouchStartHandler EasyTouch::On_TouchStart
	TouchStartHandler_t3226887495 * ___On_TouchStart_54;
	// EasyTouch/TouchDownHandler EasyTouch::On_TouchDown
	TouchDownHandler_t618663849 * ___On_TouchDown_55;
	// EasyTouch/TouchUpHandler EasyTouch::On_TouchUp
	TouchUpHandler_t399380432 * ___On_TouchUp_56;
	// EasyTouch/SimpleTapHandler EasyTouch::On_SimpleTap
	SimpleTapHandler_t3561373081 * ___On_SimpleTap_57;
	// EasyTouch/DoubleTapHandler EasyTouch::On_DoubleTap
	DoubleTapHandler_t3148000504 * ___On_DoubleTap_58;
	// EasyTouch/LongTapStartHandler EasyTouch::On_LongTapStart
	LongTapStartHandler_t1240596879 * ___On_LongTapStart_59;
	// EasyTouch/LongTapHandler EasyTouch::On_LongTap
	LongTapHandler_t68117987 * ___On_LongTap_60;
	// EasyTouch/LongTapEndHandler EasyTouch::On_LongTapEnd
	LongTapEndHandler_t1010403510 * ___On_LongTapEnd_61;
	// EasyTouch/DragStartHandler EasyTouch::On_DragStart
	DragStartHandler_t2772987900 * ___On_DragStart_62;
	// EasyTouch/DragHandler EasyTouch::On_Drag
	DragHandler_t3682527062 * ___On_Drag_63;
	// EasyTouch/DragEndHandler EasyTouch::On_DragEnd
	DragEndHandler_t3041046115 * ___On_DragEnd_64;
	// EasyTouch/SwipeStartHandler EasyTouch::On_SwipeStart
	SwipeStartHandler_t4071400642 * ___On_SwipeStart_65;
	// EasyTouch/SwipeHandler EasyTouch::On_Swipe
	SwipeHandler_t1297239760 * ___On_Swipe_66;
	// EasyTouch/SwipeEndHandler EasyTouch::On_SwipeEnd
	SwipeEndHandler_t3180944553 * ___On_SwipeEnd_67;
	// EasyTouch/TouchStart2FingersHandler EasyTouch::On_TouchStart2Fingers
	TouchStart2FingersHandler_t2423371695 * ___On_TouchStart2Fingers_68;
	// EasyTouch/TouchDown2FingersHandler EasyTouch::On_TouchDown2Fingers
	TouchDown2FingersHandler_t2414075921 * ___On_TouchDown2Fingers_69;
	// EasyTouch/TouchUp2FingersHandler EasyTouch::On_TouchUp2Fingers
	TouchUp2FingersHandler_t1262405944 * ___On_TouchUp2Fingers_70;
	// EasyTouch/SimpleTap2FingersHandler EasyTouch::On_SimpleTap2Fingers
	SimpleTap2FingersHandler_t2163547649 * ___On_SimpleTap2Fingers_71;
	// EasyTouch/DoubleTap2FingersHandler EasyTouch::On_DoubleTap2Fingers
	DoubleTap2FingersHandler_t4258774624 * ___On_DoubleTap2Fingers_72;
	// EasyTouch/LongTapStart2FingersHandler EasyTouch::On_LongTapStart2Fingers
	LongTapStart2FingersHandler_t3052440567 * ___On_LongTapStart2Fingers_73;
	// EasyTouch/LongTap2FingersHandler EasyTouch::On_LongTap2Fingers
	LongTap2FingersHandler_t1692294219 * ___On_LongTap2Fingers_74;
	// EasyTouch/LongTapEnd2FingersHandler EasyTouch::On_LongTapEnd2Fingers
	LongTapEnd2FingersHandler_t506330142 * ___On_LongTapEnd2Fingers_75;
	// EasyTouch/TwistHandler EasyTouch::On_Twist
	TwistHandler_t671277635 * ___On_Twist_76;
	// EasyTouch/TwistEndHandler EasyTouch::On_TwistEnd
	TwistEndHandler_t3891277910 * ___On_TwistEnd_77;
	// EasyTouch/PinchInHandler EasyTouch::On_PinchIn
	PinchInHandler_t7450347 * ___On_PinchIn_78;
	// EasyTouch/PinchOutHandler EasyTouch::On_PinchOut
	PinchOutHandler_t1877879894 * ___On_PinchOut_79;
	// EasyTouch/PinchEndHandler EasyTouch::On_PinchEnd
	PinchEndHandler_t1495132713 * ___On_PinchEnd_80;
	// EasyTouch/DragStart2FingersHandler EasyTouch::On_DragStart2Fingers
	DragStart2FingersHandler_t3827055972 * ___On_DragStart2Fingers_81;
	// EasyTouch/Drag2FingersHandler EasyTouch::On_Drag2Fingers
	Drag2FingersHandler_t1945811646 * ___On_Drag2Fingers_82;
	// EasyTouch/DragEnd2FingersHandler EasyTouch::On_DragEnd2Fingers
	DragEnd2FingersHandler_t2491491531 * ___On_DragEnd2Fingers_83;
	// EasyTouch/SwipeStart2FingersHandler EasyTouch::On_SwipeStart2Fingers
	SwipeStart2FingersHandler_t553274410 * ___On_SwipeStart2Fingers_84;
	// EasyTouch/Swipe2FingersHandler EasyTouch::On_Swipe2Fingers
	Swipe2FingersHandler_t2484340792 * ___On_Swipe2Fingers_85;
	// EasyTouch/SwipeEnd2FingersHandler EasyTouch::On_SwipeEnd2Fingers
	SwipeEnd2FingersHandler_t4110429457 * ___On_SwipeEnd2Fingers_86;
	// EasyTouch/EasyTouchIsReadyHandler EasyTouch::On_EasyTouchIsReady
	EasyTouchIsReadyHandler_t1347646478 * ___On_EasyTouchIsReady_87;
	// System.Predicate`1<ECamera> EasyTouch::<>f__am$cache56
	Predicate_1_t3690258308 * ___U3CU3Ef__amU24cache56_88;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___instance_2)); }
	inline EasyTouch_t3917405245 * get_instance_2() const { return ___instance_2; }
	inline EasyTouch_t3917405245 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(EasyTouch_t3917405245 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}

	inline static int32_t get_offset_of_On_Cancel_52() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_Cancel_52)); }
	inline TouchCancelHandler_t3136056977 * get_On_Cancel_52() const { return ___On_Cancel_52; }
	inline TouchCancelHandler_t3136056977 ** get_address_of_On_Cancel_52() { return &___On_Cancel_52; }
	inline void set_On_Cancel_52(TouchCancelHandler_t3136056977 * value)
	{
		___On_Cancel_52 = value;
		Il2CppCodeGenWriteBarrier(&___On_Cancel_52, value);
	}

	inline static int32_t get_offset_of_On_Cancel2Fingers_53() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_Cancel2Fingers_53)); }
	inline Cancel2FingersHandler_t1748880568 * get_On_Cancel2Fingers_53() const { return ___On_Cancel2Fingers_53; }
	inline Cancel2FingersHandler_t1748880568 ** get_address_of_On_Cancel2Fingers_53() { return &___On_Cancel2Fingers_53; }
	inline void set_On_Cancel2Fingers_53(Cancel2FingersHandler_t1748880568 * value)
	{
		___On_Cancel2Fingers_53 = value;
		Il2CppCodeGenWriteBarrier(&___On_Cancel2Fingers_53, value);
	}

	inline static int32_t get_offset_of_On_TouchStart_54() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_TouchStart_54)); }
	inline TouchStartHandler_t3226887495 * get_On_TouchStart_54() const { return ___On_TouchStart_54; }
	inline TouchStartHandler_t3226887495 ** get_address_of_On_TouchStart_54() { return &___On_TouchStart_54; }
	inline void set_On_TouchStart_54(TouchStartHandler_t3226887495 * value)
	{
		___On_TouchStart_54 = value;
		Il2CppCodeGenWriteBarrier(&___On_TouchStart_54, value);
	}

	inline static int32_t get_offset_of_On_TouchDown_55() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_TouchDown_55)); }
	inline TouchDownHandler_t618663849 * get_On_TouchDown_55() const { return ___On_TouchDown_55; }
	inline TouchDownHandler_t618663849 ** get_address_of_On_TouchDown_55() { return &___On_TouchDown_55; }
	inline void set_On_TouchDown_55(TouchDownHandler_t618663849 * value)
	{
		___On_TouchDown_55 = value;
		Il2CppCodeGenWriteBarrier(&___On_TouchDown_55, value);
	}

	inline static int32_t get_offset_of_On_TouchUp_56() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_TouchUp_56)); }
	inline TouchUpHandler_t399380432 * get_On_TouchUp_56() const { return ___On_TouchUp_56; }
	inline TouchUpHandler_t399380432 ** get_address_of_On_TouchUp_56() { return &___On_TouchUp_56; }
	inline void set_On_TouchUp_56(TouchUpHandler_t399380432 * value)
	{
		___On_TouchUp_56 = value;
		Il2CppCodeGenWriteBarrier(&___On_TouchUp_56, value);
	}

	inline static int32_t get_offset_of_On_SimpleTap_57() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_SimpleTap_57)); }
	inline SimpleTapHandler_t3561373081 * get_On_SimpleTap_57() const { return ___On_SimpleTap_57; }
	inline SimpleTapHandler_t3561373081 ** get_address_of_On_SimpleTap_57() { return &___On_SimpleTap_57; }
	inline void set_On_SimpleTap_57(SimpleTapHandler_t3561373081 * value)
	{
		___On_SimpleTap_57 = value;
		Il2CppCodeGenWriteBarrier(&___On_SimpleTap_57, value);
	}

	inline static int32_t get_offset_of_On_DoubleTap_58() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_DoubleTap_58)); }
	inline DoubleTapHandler_t3148000504 * get_On_DoubleTap_58() const { return ___On_DoubleTap_58; }
	inline DoubleTapHandler_t3148000504 ** get_address_of_On_DoubleTap_58() { return &___On_DoubleTap_58; }
	inline void set_On_DoubleTap_58(DoubleTapHandler_t3148000504 * value)
	{
		___On_DoubleTap_58 = value;
		Il2CppCodeGenWriteBarrier(&___On_DoubleTap_58, value);
	}

	inline static int32_t get_offset_of_On_LongTapStart_59() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_LongTapStart_59)); }
	inline LongTapStartHandler_t1240596879 * get_On_LongTapStart_59() const { return ___On_LongTapStart_59; }
	inline LongTapStartHandler_t1240596879 ** get_address_of_On_LongTapStart_59() { return &___On_LongTapStart_59; }
	inline void set_On_LongTapStart_59(LongTapStartHandler_t1240596879 * value)
	{
		___On_LongTapStart_59 = value;
		Il2CppCodeGenWriteBarrier(&___On_LongTapStart_59, value);
	}

	inline static int32_t get_offset_of_On_LongTap_60() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_LongTap_60)); }
	inline LongTapHandler_t68117987 * get_On_LongTap_60() const { return ___On_LongTap_60; }
	inline LongTapHandler_t68117987 ** get_address_of_On_LongTap_60() { return &___On_LongTap_60; }
	inline void set_On_LongTap_60(LongTapHandler_t68117987 * value)
	{
		___On_LongTap_60 = value;
		Il2CppCodeGenWriteBarrier(&___On_LongTap_60, value);
	}

	inline static int32_t get_offset_of_On_LongTapEnd_61() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_LongTapEnd_61)); }
	inline LongTapEndHandler_t1010403510 * get_On_LongTapEnd_61() const { return ___On_LongTapEnd_61; }
	inline LongTapEndHandler_t1010403510 ** get_address_of_On_LongTapEnd_61() { return &___On_LongTapEnd_61; }
	inline void set_On_LongTapEnd_61(LongTapEndHandler_t1010403510 * value)
	{
		___On_LongTapEnd_61 = value;
		Il2CppCodeGenWriteBarrier(&___On_LongTapEnd_61, value);
	}

	inline static int32_t get_offset_of_On_DragStart_62() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_DragStart_62)); }
	inline DragStartHandler_t2772987900 * get_On_DragStart_62() const { return ___On_DragStart_62; }
	inline DragStartHandler_t2772987900 ** get_address_of_On_DragStart_62() { return &___On_DragStart_62; }
	inline void set_On_DragStart_62(DragStartHandler_t2772987900 * value)
	{
		___On_DragStart_62 = value;
		Il2CppCodeGenWriteBarrier(&___On_DragStart_62, value);
	}

	inline static int32_t get_offset_of_On_Drag_63() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_Drag_63)); }
	inline DragHandler_t3682527062 * get_On_Drag_63() const { return ___On_Drag_63; }
	inline DragHandler_t3682527062 ** get_address_of_On_Drag_63() { return &___On_Drag_63; }
	inline void set_On_Drag_63(DragHandler_t3682527062 * value)
	{
		___On_Drag_63 = value;
		Il2CppCodeGenWriteBarrier(&___On_Drag_63, value);
	}

	inline static int32_t get_offset_of_On_DragEnd_64() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_DragEnd_64)); }
	inline DragEndHandler_t3041046115 * get_On_DragEnd_64() const { return ___On_DragEnd_64; }
	inline DragEndHandler_t3041046115 ** get_address_of_On_DragEnd_64() { return &___On_DragEnd_64; }
	inline void set_On_DragEnd_64(DragEndHandler_t3041046115 * value)
	{
		___On_DragEnd_64 = value;
		Il2CppCodeGenWriteBarrier(&___On_DragEnd_64, value);
	}

	inline static int32_t get_offset_of_On_SwipeStart_65() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_SwipeStart_65)); }
	inline SwipeStartHandler_t4071400642 * get_On_SwipeStart_65() const { return ___On_SwipeStart_65; }
	inline SwipeStartHandler_t4071400642 ** get_address_of_On_SwipeStart_65() { return &___On_SwipeStart_65; }
	inline void set_On_SwipeStart_65(SwipeStartHandler_t4071400642 * value)
	{
		___On_SwipeStart_65 = value;
		Il2CppCodeGenWriteBarrier(&___On_SwipeStart_65, value);
	}

	inline static int32_t get_offset_of_On_Swipe_66() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_Swipe_66)); }
	inline SwipeHandler_t1297239760 * get_On_Swipe_66() const { return ___On_Swipe_66; }
	inline SwipeHandler_t1297239760 ** get_address_of_On_Swipe_66() { return &___On_Swipe_66; }
	inline void set_On_Swipe_66(SwipeHandler_t1297239760 * value)
	{
		___On_Swipe_66 = value;
		Il2CppCodeGenWriteBarrier(&___On_Swipe_66, value);
	}

	inline static int32_t get_offset_of_On_SwipeEnd_67() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_SwipeEnd_67)); }
	inline SwipeEndHandler_t3180944553 * get_On_SwipeEnd_67() const { return ___On_SwipeEnd_67; }
	inline SwipeEndHandler_t3180944553 ** get_address_of_On_SwipeEnd_67() { return &___On_SwipeEnd_67; }
	inline void set_On_SwipeEnd_67(SwipeEndHandler_t3180944553 * value)
	{
		___On_SwipeEnd_67 = value;
		Il2CppCodeGenWriteBarrier(&___On_SwipeEnd_67, value);
	}

	inline static int32_t get_offset_of_On_TouchStart2Fingers_68() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_TouchStart2Fingers_68)); }
	inline TouchStart2FingersHandler_t2423371695 * get_On_TouchStart2Fingers_68() const { return ___On_TouchStart2Fingers_68; }
	inline TouchStart2FingersHandler_t2423371695 ** get_address_of_On_TouchStart2Fingers_68() { return &___On_TouchStart2Fingers_68; }
	inline void set_On_TouchStart2Fingers_68(TouchStart2FingersHandler_t2423371695 * value)
	{
		___On_TouchStart2Fingers_68 = value;
		Il2CppCodeGenWriteBarrier(&___On_TouchStart2Fingers_68, value);
	}

	inline static int32_t get_offset_of_On_TouchDown2Fingers_69() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_TouchDown2Fingers_69)); }
	inline TouchDown2FingersHandler_t2414075921 * get_On_TouchDown2Fingers_69() const { return ___On_TouchDown2Fingers_69; }
	inline TouchDown2FingersHandler_t2414075921 ** get_address_of_On_TouchDown2Fingers_69() { return &___On_TouchDown2Fingers_69; }
	inline void set_On_TouchDown2Fingers_69(TouchDown2FingersHandler_t2414075921 * value)
	{
		___On_TouchDown2Fingers_69 = value;
		Il2CppCodeGenWriteBarrier(&___On_TouchDown2Fingers_69, value);
	}

	inline static int32_t get_offset_of_On_TouchUp2Fingers_70() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_TouchUp2Fingers_70)); }
	inline TouchUp2FingersHandler_t1262405944 * get_On_TouchUp2Fingers_70() const { return ___On_TouchUp2Fingers_70; }
	inline TouchUp2FingersHandler_t1262405944 ** get_address_of_On_TouchUp2Fingers_70() { return &___On_TouchUp2Fingers_70; }
	inline void set_On_TouchUp2Fingers_70(TouchUp2FingersHandler_t1262405944 * value)
	{
		___On_TouchUp2Fingers_70 = value;
		Il2CppCodeGenWriteBarrier(&___On_TouchUp2Fingers_70, value);
	}

	inline static int32_t get_offset_of_On_SimpleTap2Fingers_71() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_SimpleTap2Fingers_71)); }
	inline SimpleTap2FingersHandler_t2163547649 * get_On_SimpleTap2Fingers_71() const { return ___On_SimpleTap2Fingers_71; }
	inline SimpleTap2FingersHandler_t2163547649 ** get_address_of_On_SimpleTap2Fingers_71() { return &___On_SimpleTap2Fingers_71; }
	inline void set_On_SimpleTap2Fingers_71(SimpleTap2FingersHandler_t2163547649 * value)
	{
		___On_SimpleTap2Fingers_71 = value;
		Il2CppCodeGenWriteBarrier(&___On_SimpleTap2Fingers_71, value);
	}

	inline static int32_t get_offset_of_On_DoubleTap2Fingers_72() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_DoubleTap2Fingers_72)); }
	inline DoubleTap2FingersHandler_t4258774624 * get_On_DoubleTap2Fingers_72() const { return ___On_DoubleTap2Fingers_72; }
	inline DoubleTap2FingersHandler_t4258774624 ** get_address_of_On_DoubleTap2Fingers_72() { return &___On_DoubleTap2Fingers_72; }
	inline void set_On_DoubleTap2Fingers_72(DoubleTap2FingersHandler_t4258774624 * value)
	{
		___On_DoubleTap2Fingers_72 = value;
		Il2CppCodeGenWriteBarrier(&___On_DoubleTap2Fingers_72, value);
	}

	inline static int32_t get_offset_of_On_LongTapStart2Fingers_73() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_LongTapStart2Fingers_73)); }
	inline LongTapStart2FingersHandler_t3052440567 * get_On_LongTapStart2Fingers_73() const { return ___On_LongTapStart2Fingers_73; }
	inline LongTapStart2FingersHandler_t3052440567 ** get_address_of_On_LongTapStart2Fingers_73() { return &___On_LongTapStart2Fingers_73; }
	inline void set_On_LongTapStart2Fingers_73(LongTapStart2FingersHandler_t3052440567 * value)
	{
		___On_LongTapStart2Fingers_73 = value;
		Il2CppCodeGenWriteBarrier(&___On_LongTapStart2Fingers_73, value);
	}

	inline static int32_t get_offset_of_On_LongTap2Fingers_74() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_LongTap2Fingers_74)); }
	inline LongTap2FingersHandler_t1692294219 * get_On_LongTap2Fingers_74() const { return ___On_LongTap2Fingers_74; }
	inline LongTap2FingersHandler_t1692294219 ** get_address_of_On_LongTap2Fingers_74() { return &___On_LongTap2Fingers_74; }
	inline void set_On_LongTap2Fingers_74(LongTap2FingersHandler_t1692294219 * value)
	{
		___On_LongTap2Fingers_74 = value;
		Il2CppCodeGenWriteBarrier(&___On_LongTap2Fingers_74, value);
	}

	inline static int32_t get_offset_of_On_LongTapEnd2Fingers_75() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_LongTapEnd2Fingers_75)); }
	inline LongTapEnd2FingersHandler_t506330142 * get_On_LongTapEnd2Fingers_75() const { return ___On_LongTapEnd2Fingers_75; }
	inline LongTapEnd2FingersHandler_t506330142 ** get_address_of_On_LongTapEnd2Fingers_75() { return &___On_LongTapEnd2Fingers_75; }
	inline void set_On_LongTapEnd2Fingers_75(LongTapEnd2FingersHandler_t506330142 * value)
	{
		___On_LongTapEnd2Fingers_75 = value;
		Il2CppCodeGenWriteBarrier(&___On_LongTapEnd2Fingers_75, value);
	}

	inline static int32_t get_offset_of_On_Twist_76() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_Twist_76)); }
	inline TwistHandler_t671277635 * get_On_Twist_76() const { return ___On_Twist_76; }
	inline TwistHandler_t671277635 ** get_address_of_On_Twist_76() { return &___On_Twist_76; }
	inline void set_On_Twist_76(TwistHandler_t671277635 * value)
	{
		___On_Twist_76 = value;
		Il2CppCodeGenWriteBarrier(&___On_Twist_76, value);
	}

	inline static int32_t get_offset_of_On_TwistEnd_77() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_TwistEnd_77)); }
	inline TwistEndHandler_t3891277910 * get_On_TwistEnd_77() const { return ___On_TwistEnd_77; }
	inline TwistEndHandler_t3891277910 ** get_address_of_On_TwistEnd_77() { return &___On_TwistEnd_77; }
	inline void set_On_TwistEnd_77(TwistEndHandler_t3891277910 * value)
	{
		___On_TwistEnd_77 = value;
		Il2CppCodeGenWriteBarrier(&___On_TwistEnd_77, value);
	}

	inline static int32_t get_offset_of_On_PinchIn_78() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_PinchIn_78)); }
	inline PinchInHandler_t7450347 * get_On_PinchIn_78() const { return ___On_PinchIn_78; }
	inline PinchInHandler_t7450347 ** get_address_of_On_PinchIn_78() { return &___On_PinchIn_78; }
	inline void set_On_PinchIn_78(PinchInHandler_t7450347 * value)
	{
		___On_PinchIn_78 = value;
		Il2CppCodeGenWriteBarrier(&___On_PinchIn_78, value);
	}

	inline static int32_t get_offset_of_On_PinchOut_79() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_PinchOut_79)); }
	inline PinchOutHandler_t1877879894 * get_On_PinchOut_79() const { return ___On_PinchOut_79; }
	inline PinchOutHandler_t1877879894 ** get_address_of_On_PinchOut_79() { return &___On_PinchOut_79; }
	inline void set_On_PinchOut_79(PinchOutHandler_t1877879894 * value)
	{
		___On_PinchOut_79 = value;
		Il2CppCodeGenWriteBarrier(&___On_PinchOut_79, value);
	}

	inline static int32_t get_offset_of_On_PinchEnd_80() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_PinchEnd_80)); }
	inline PinchEndHandler_t1495132713 * get_On_PinchEnd_80() const { return ___On_PinchEnd_80; }
	inline PinchEndHandler_t1495132713 ** get_address_of_On_PinchEnd_80() { return &___On_PinchEnd_80; }
	inline void set_On_PinchEnd_80(PinchEndHandler_t1495132713 * value)
	{
		___On_PinchEnd_80 = value;
		Il2CppCodeGenWriteBarrier(&___On_PinchEnd_80, value);
	}

	inline static int32_t get_offset_of_On_DragStart2Fingers_81() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_DragStart2Fingers_81)); }
	inline DragStart2FingersHandler_t3827055972 * get_On_DragStart2Fingers_81() const { return ___On_DragStart2Fingers_81; }
	inline DragStart2FingersHandler_t3827055972 ** get_address_of_On_DragStart2Fingers_81() { return &___On_DragStart2Fingers_81; }
	inline void set_On_DragStart2Fingers_81(DragStart2FingersHandler_t3827055972 * value)
	{
		___On_DragStart2Fingers_81 = value;
		Il2CppCodeGenWriteBarrier(&___On_DragStart2Fingers_81, value);
	}

	inline static int32_t get_offset_of_On_Drag2Fingers_82() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_Drag2Fingers_82)); }
	inline Drag2FingersHandler_t1945811646 * get_On_Drag2Fingers_82() const { return ___On_Drag2Fingers_82; }
	inline Drag2FingersHandler_t1945811646 ** get_address_of_On_Drag2Fingers_82() { return &___On_Drag2Fingers_82; }
	inline void set_On_Drag2Fingers_82(Drag2FingersHandler_t1945811646 * value)
	{
		___On_Drag2Fingers_82 = value;
		Il2CppCodeGenWriteBarrier(&___On_Drag2Fingers_82, value);
	}

	inline static int32_t get_offset_of_On_DragEnd2Fingers_83() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_DragEnd2Fingers_83)); }
	inline DragEnd2FingersHandler_t2491491531 * get_On_DragEnd2Fingers_83() const { return ___On_DragEnd2Fingers_83; }
	inline DragEnd2FingersHandler_t2491491531 ** get_address_of_On_DragEnd2Fingers_83() { return &___On_DragEnd2Fingers_83; }
	inline void set_On_DragEnd2Fingers_83(DragEnd2FingersHandler_t2491491531 * value)
	{
		___On_DragEnd2Fingers_83 = value;
		Il2CppCodeGenWriteBarrier(&___On_DragEnd2Fingers_83, value);
	}

	inline static int32_t get_offset_of_On_SwipeStart2Fingers_84() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_SwipeStart2Fingers_84)); }
	inline SwipeStart2FingersHandler_t553274410 * get_On_SwipeStart2Fingers_84() const { return ___On_SwipeStart2Fingers_84; }
	inline SwipeStart2FingersHandler_t553274410 ** get_address_of_On_SwipeStart2Fingers_84() { return &___On_SwipeStart2Fingers_84; }
	inline void set_On_SwipeStart2Fingers_84(SwipeStart2FingersHandler_t553274410 * value)
	{
		___On_SwipeStart2Fingers_84 = value;
		Il2CppCodeGenWriteBarrier(&___On_SwipeStart2Fingers_84, value);
	}

	inline static int32_t get_offset_of_On_Swipe2Fingers_85() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_Swipe2Fingers_85)); }
	inline Swipe2FingersHandler_t2484340792 * get_On_Swipe2Fingers_85() const { return ___On_Swipe2Fingers_85; }
	inline Swipe2FingersHandler_t2484340792 ** get_address_of_On_Swipe2Fingers_85() { return &___On_Swipe2Fingers_85; }
	inline void set_On_Swipe2Fingers_85(Swipe2FingersHandler_t2484340792 * value)
	{
		___On_Swipe2Fingers_85 = value;
		Il2CppCodeGenWriteBarrier(&___On_Swipe2Fingers_85, value);
	}

	inline static int32_t get_offset_of_On_SwipeEnd2Fingers_86() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_SwipeEnd2Fingers_86)); }
	inline SwipeEnd2FingersHandler_t4110429457 * get_On_SwipeEnd2Fingers_86() const { return ___On_SwipeEnd2Fingers_86; }
	inline SwipeEnd2FingersHandler_t4110429457 ** get_address_of_On_SwipeEnd2Fingers_86() { return &___On_SwipeEnd2Fingers_86; }
	inline void set_On_SwipeEnd2Fingers_86(SwipeEnd2FingersHandler_t4110429457 * value)
	{
		___On_SwipeEnd2Fingers_86 = value;
		Il2CppCodeGenWriteBarrier(&___On_SwipeEnd2Fingers_86, value);
	}

	inline static int32_t get_offset_of_On_EasyTouchIsReady_87() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___On_EasyTouchIsReady_87)); }
	inline EasyTouchIsReadyHandler_t1347646478 * get_On_EasyTouchIsReady_87() const { return ___On_EasyTouchIsReady_87; }
	inline EasyTouchIsReadyHandler_t1347646478 ** get_address_of_On_EasyTouchIsReady_87() { return &___On_EasyTouchIsReady_87; }
	inline void set_On_EasyTouchIsReady_87(EasyTouchIsReadyHandler_t1347646478 * value)
	{
		___On_EasyTouchIsReady_87 = value;
		Il2CppCodeGenWriteBarrier(&___On_EasyTouchIsReady_87, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache56_88() { return static_cast<int32_t>(offsetof(EasyTouch_t3917405245_StaticFields, ___U3CU3Ef__amU24cache56_88)); }
	inline Predicate_1_t3690258308 * get_U3CU3Ef__amU24cache56_88() const { return ___U3CU3Ef__amU24cache56_88; }
	inline Predicate_1_t3690258308 ** get_address_of_U3CU3Ef__amU24cache56_88() { return &___U3CU3Ef__amU24cache56_88; }
	inline void set_U3CU3Ef__amU24cache56_88(Predicate_1_t3690258308 * value)
	{
		___U3CU3Ef__amU24cache56_88 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache56_88, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
