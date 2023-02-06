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
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.CharacterController
struct CharacterController_t2029520850;
// UnityEngine.Texture
struct Texture_t1769722184;
// EasyJoystick/JoystickMoveStartHandler
struct JoystickMoveStartHandler_t2105815157;
// EasyJoystick/JoystickMoveHandler
struct JoystickMoveHandler_t2267610941;
// EasyJoystick/JoystickMoveEndHandler
struct JoystickMoveEndHandler_t2083928348;
// EasyJoystick/JoystickTouchStartHandler
struct JoystickTouchStartHandler_t587946859;
// EasyJoystick/JoystickTapHandler
struct JoystickTapHandler_t2112530595;
// EasyJoystick/JoystickDoubleTapHandler
struct JoystickDoubleTapHandler_t153379412;
// EasyJoystick/JoystickTouchUpHandler
struct JoystickTouchUpHandler_t1102408748;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "AssemblyU2DCSharp_EasyJoystick_DynamicArea1408636236.h"
#include "AssemblyU2DCSharp_EasyJoystick_JoystickAnchor2037327665.h"
#include "AssemblyU2DCSharp_EasyJoystick_InteractionType2240557132.h"
#include "AssemblyU2DCSharp_EasyJoystick_Broadcast385091745.h"
#include "AssemblyU2DCSharp_EasyJoystick_PropertiesInfluence2029107650.h"
#include "AssemblyU2DCSharp_EasyJoystick_AxisInfluenced300939952.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyJoystick
struct  EasyJoystick_t449807230  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Vector2 EasyJoystick::joystickAxis
	Vector2_t3525329788  ___joystickAxis_2;
	// UnityEngine.Vector2 EasyJoystick::joystickTouch
	Vector2_t3525329788  ___joystickTouch_3;
	// UnityEngine.Vector2 EasyJoystick::joystickValue
	Vector2_t3525329788  ___joystickValue_4;
	// System.Boolean EasyJoystick::enable
	bool ___enable_5;
	// System.Boolean EasyJoystick::visible
	bool ___visible_6;
	// System.Boolean EasyJoystick::isActivated
	bool ___isActivated_7;
	// System.Boolean EasyJoystick::showDebugRadius
	bool ___showDebugRadius_8;
	// System.Boolean EasyJoystick::selected
	bool ___selected_9;
	// System.Boolean EasyJoystick::useFixedUpdate
	bool ___useFixedUpdate_10;
	// System.Boolean EasyJoystick::isUseGuiLayout
	bool ___isUseGuiLayout_11;
	// System.Boolean EasyJoystick::dynamicJoystick
	bool ___dynamicJoystick_12;
	// EasyJoystick/DynamicArea EasyJoystick::area
	int32_t ___area_13;
	// EasyJoystick/JoystickAnchor EasyJoystick::joyAnchor
	int32_t ___joyAnchor_14;
	// UnityEngine.Vector2 EasyJoystick::joystickPositionOffset
	Vector2_t3525329788  ___joystickPositionOffset_15;
	// System.Single EasyJoystick::zoneRadius
	float ___zoneRadius_16;
	// System.Single EasyJoystick::touchSize
	float ___touchSize_17;
	// System.Single EasyJoystick::deadZone
	float ___deadZone_18;
	// System.Boolean EasyJoystick::restrictArea
	bool ___restrictArea_19;
	// System.Boolean EasyJoystick::resetFingerExit
	bool ___resetFingerExit_20;
	// EasyJoystick/InteractionType EasyJoystick::interaction
	int32_t ___interaction_21;
	// System.Boolean EasyJoystick::useBroadcast
	bool ___useBroadcast_22;
	// EasyJoystick/Broadcast EasyJoystick::messageMode
	int32_t ___messageMode_23;
	// UnityEngine.GameObject EasyJoystick::receiverGameObject
	GameObject_t4012695102 * ___receiverGameObject_24;
	// UnityEngine.Vector2 EasyJoystick::speed
	Vector2_t3525329788  ___speed_25;
	// System.Boolean EasyJoystick::enableXaxis
	bool ___enableXaxis_26;
	// UnityEngine.Transform EasyJoystick::xAxisTransform
	Transform_t284553113 * ___xAxisTransform_27;
	// UnityEngine.CharacterController EasyJoystick::xAxisCharacterController
	CharacterController_t2029520850 * ___xAxisCharacterController_28;
	// System.Single EasyJoystick::xAxisGravity
	float ___xAxisGravity_29;
	// EasyJoystick/PropertiesInfluenced EasyJoystick::xTI
	int32_t ___xTI_30;
	// EasyJoystick/AxisInfluenced EasyJoystick::xAI
	int32_t ___xAI_31;
	// System.Boolean EasyJoystick::inverseXAxis
	bool ___inverseXAxis_32;
	// System.Boolean EasyJoystick::enableXClamp
	bool ___enableXClamp_33;
	// System.Single EasyJoystick::clampXMax
	float ___clampXMax_34;
	// System.Single EasyJoystick::clampXMin
	float ___clampXMin_35;
	// System.Boolean EasyJoystick::enableXAutoStab
	bool ___enableXAutoStab_36;
	// System.Single EasyJoystick::thresholdX
	float ___thresholdX_37;
	// System.Single EasyJoystick::stabSpeedX
	float ___stabSpeedX_38;
	// System.Boolean EasyJoystick::enableYaxis
	bool ___enableYaxis_39;
	// UnityEngine.Transform EasyJoystick::yAxisTransform
	Transform_t284553113 * ___yAxisTransform_40;
	// UnityEngine.CharacterController EasyJoystick::yAxisCharacterController
	CharacterController_t2029520850 * ___yAxisCharacterController_41;
	// System.Single EasyJoystick::yAxisGravity
	float ___yAxisGravity_42;
	// EasyJoystick/PropertiesInfluenced EasyJoystick::yTI
	int32_t ___yTI_43;
	// EasyJoystick/AxisInfluenced EasyJoystick::yAI
	int32_t ___yAI_44;
	// System.Boolean EasyJoystick::inverseYAxis
	bool ___inverseYAxis_45;
	// System.Boolean EasyJoystick::enableYClamp
	bool ___enableYClamp_46;
	// System.Single EasyJoystick::clampYMax
	float ___clampYMax_47;
	// System.Single EasyJoystick::clampYMin
	float ___clampYMin_48;
	// System.Boolean EasyJoystick::enableYAutoStab
	bool ___enableYAutoStab_49;
	// System.Single EasyJoystick::thresholdY
	float ___thresholdY_50;
	// System.Single EasyJoystick::stabSpeedY
	float ___stabSpeedY_51;
	// System.Boolean EasyJoystick::enableSmoothing
	bool ___enableSmoothing_52;
	// UnityEngine.Vector2 EasyJoystick::smoothing
	Vector2_t3525329788  ___smoothing_53;
	// System.Boolean EasyJoystick::enableInertia
	bool ___enableInertia_54;
	// UnityEngine.Vector2 EasyJoystick::inertia
	Vector2_t3525329788  ___inertia_55;
	// System.Int32 EasyJoystick::guiDepth
	int32_t ___guiDepth_56;
	// System.Boolean EasyJoystick::showZone
	bool ___showZone_57;
	// System.Boolean EasyJoystick::showTouch
	bool ___showTouch_58;
	// System.Boolean EasyJoystick::showDeadZone
	bool ___showDeadZone_59;
	// UnityEngine.Texture EasyJoystick::areaTexture
	Texture_t1769722184 * ___areaTexture_60;
	// UnityEngine.Color EasyJoystick::areaColor
	Color_t1588175760  ___areaColor_61;
	// UnityEngine.Texture EasyJoystick::touchTexture
	Texture_t1769722184 * ___touchTexture_62;
	// UnityEngine.Color EasyJoystick::touchColor
	Color_t1588175760  ___touchColor_63;
	// UnityEngine.Texture EasyJoystick::deadTexture
	Texture_t1769722184 * ___deadTexture_64;
	// System.Boolean EasyJoystick::showProperties
	bool ___showProperties_65;
	// System.Boolean EasyJoystick::showInteraction
	bool ___showInteraction_66;
	// System.Boolean EasyJoystick::showAppearance
	bool ___showAppearance_67;
	// System.Boolean EasyJoystick::showPosition
	bool ___showPosition_68;
	// UnityEngine.Vector2 EasyJoystick::joystickCenter
	Vector2_t3525329788  ___joystickCenter_69;
	// UnityEngine.Rect EasyJoystick::areaRect
	Rect_t1525428817  ___areaRect_70;
	// UnityEngine.Rect EasyJoystick::deadRect
	Rect_t1525428817  ___deadRect_71;
	// UnityEngine.Vector2 EasyJoystick::anchorPosition
	Vector2_t3525329788  ___anchorPosition_72;
	// System.Boolean EasyJoystick::virtualJoystick
	bool ___virtualJoystick_73;
	// System.Int32 EasyJoystick::joystickIndex
	int32_t ___joystickIndex_74;
	// System.Single EasyJoystick::touchSizeCoef
	float ___touchSizeCoef_75;
	// System.Boolean EasyJoystick::sendEnd
	bool ___sendEnd_76;
	// System.Single EasyJoystick::startXLocalAngle
	float ___startXLocalAngle_77;
	// System.Single EasyJoystick::startYLocalAngle
	float ___startYLocalAngle_78;

public:
	inline static int32_t get_offset_of_joystickAxis_2() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___joystickAxis_2)); }
	inline Vector2_t3525329788  get_joystickAxis_2() const { return ___joystickAxis_2; }
	inline Vector2_t3525329788 * get_address_of_joystickAxis_2() { return &___joystickAxis_2; }
	inline void set_joystickAxis_2(Vector2_t3525329788  value)
	{
		___joystickAxis_2 = value;
	}

	inline static int32_t get_offset_of_joystickTouch_3() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___joystickTouch_3)); }
	inline Vector2_t3525329788  get_joystickTouch_3() const { return ___joystickTouch_3; }
	inline Vector2_t3525329788 * get_address_of_joystickTouch_3() { return &___joystickTouch_3; }
	inline void set_joystickTouch_3(Vector2_t3525329788  value)
	{
		___joystickTouch_3 = value;
	}

	inline static int32_t get_offset_of_joystickValue_4() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___joystickValue_4)); }
	inline Vector2_t3525329788  get_joystickValue_4() const { return ___joystickValue_4; }
	inline Vector2_t3525329788 * get_address_of_joystickValue_4() { return &___joystickValue_4; }
	inline void set_joystickValue_4(Vector2_t3525329788  value)
	{
		___joystickValue_4 = value;
	}

	inline static int32_t get_offset_of_enable_5() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___enable_5)); }
	inline bool get_enable_5() const { return ___enable_5; }
	inline bool* get_address_of_enable_5() { return &___enable_5; }
	inline void set_enable_5(bool value)
	{
		___enable_5 = value;
	}

	inline static int32_t get_offset_of_visible_6() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___visible_6)); }
	inline bool get_visible_6() const { return ___visible_6; }
	inline bool* get_address_of_visible_6() { return &___visible_6; }
	inline void set_visible_6(bool value)
	{
		___visible_6 = value;
	}

	inline static int32_t get_offset_of_isActivated_7() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___isActivated_7)); }
	inline bool get_isActivated_7() const { return ___isActivated_7; }
	inline bool* get_address_of_isActivated_7() { return &___isActivated_7; }
	inline void set_isActivated_7(bool value)
	{
		___isActivated_7 = value;
	}

	inline static int32_t get_offset_of_showDebugRadius_8() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___showDebugRadius_8)); }
	inline bool get_showDebugRadius_8() const { return ___showDebugRadius_8; }
	inline bool* get_address_of_showDebugRadius_8() { return &___showDebugRadius_8; }
	inline void set_showDebugRadius_8(bool value)
	{
		___showDebugRadius_8 = value;
	}

	inline static int32_t get_offset_of_selected_9() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___selected_9)); }
	inline bool get_selected_9() const { return ___selected_9; }
	inline bool* get_address_of_selected_9() { return &___selected_9; }
	inline void set_selected_9(bool value)
	{
		___selected_9 = value;
	}

	inline static int32_t get_offset_of_useFixedUpdate_10() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___useFixedUpdate_10)); }
	inline bool get_useFixedUpdate_10() const { return ___useFixedUpdate_10; }
	inline bool* get_address_of_useFixedUpdate_10() { return &___useFixedUpdate_10; }
	inline void set_useFixedUpdate_10(bool value)
	{
		___useFixedUpdate_10 = value;
	}

	inline static int32_t get_offset_of_isUseGuiLayout_11() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___isUseGuiLayout_11)); }
	inline bool get_isUseGuiLayout_11() const { return ___isUseGuiLayout_11; }
	inline bool* get_address_of_isUseGuiLayout_11() { return &___isUseGuiLayout_11; }
	inline void set_isUseGuiLayout_11(bool value)
	{
		___isUseGuiLayout_11 = value;
	}

	inline static int32_t get_offset_of_dynamicJoystick_12() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___dynamicJoystick_12)); }
	inline bool get_dynamicJoystick_12() const { return ___dynamicJoystick_12; }
	inline bool* get_address_of_dynamicJoystick_12() { return &___dynamicJoystick_12; }
	inline void set_dynamicJoystick_12(bool value)
	{
		___dynamicJoystick_12 = value;
	}

	inline static int32_t get_offset_of_area_13() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___area_13)); }
	inline int32_t get_area_13() const { return ___area_13; }
	inline int32_t* get_address_of_area_13() { return &___area_13; }
	inline void set_area_13(int32_t value)
	{
		___area_13 = value;
	}

	inline static int32_t get_offset_of_joyAnchor_14() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___joyAnchor_14)); }
	inline int32_t get_joyAnchor_14() const { return ___joyAnchor_14; }
	inline int32_t* get_address_of_joyAnchor_14() { return &___joyAnchor_14; }
	inline void set_joyAnchor_14(int32_t value)
	{
		___joyAnchor_14 = value;
	}

	inline static int32_t get_offset_of_joystickPositionOffset_15() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___joystickPositionOffset_15)); }
	inline Vector2_t3525329788  get_joystickPositionOffset_15() const { return ___joystickPositionOffset_15; }
	inline Vector2_t3525329788 * get_address_of_joystickPositionOffset_15() { return &___joystickPositionOffset_15; }
	inline void set_joystickPositionOffset_15(Vector2_t3525329788  value)
	{
		___joystickPositionOffset_15 = value;
	}

	inline static int32_t get_offset_of_zoneRadius_16() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___zoneRadius_16)); }
	inline float get_zoneRadius_16() const { return ___zoneRadius_16; }
	inline float* get_address_of_zoneRadius_16() { return &___zoneRadius_16; }
	inline void set_zoneRadius_16(float value)
	{
		___zoneRadius_16 = value;
	}

	inline static int32_t get_offset_of_touchSize_17() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___touchSize_17)); }
	inline float get_touchSize_17() const { return ___touchSize_17; }
	inline float* get_address_of_touchSize_17() { return &___touchSize_17; }
	inline void set_touchSize_17(float value)
	{
		___touchSize_17 = value;
	}

	inline static int32_t get_offset_of_deadZone_18() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___deadZone_18)); }
	inline float get_deadZone_18() const { return ___deadZone_18; }
	inline float* get_address_of_deadZone_18() { return &___deadZone_18; }
	inline void set_deadZone_18(float value)
	{
		___deadZone_18 = value;
	}

	inline static int32_t get_offset_of_restrictArea_19() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___restrictArea_19)); }
	inline bool get_restrictArea_19() const { return ___restrictArea_19; }
	inline bool* get_address_of_restrictArea_19() { return &___restrictArea_19; }
	inline void set_restrictArea_19(bool value)
	{
		___restrictArea_19 = value;
	}

	inline static int32_t get_offset_of_resetFingerExit_20() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___resetFingerExit_20)); }
	inline bool get_resetFingerExit_20() const { return ___resetFingerExit_20; }
	inline bool* get_address_of_resetFingerExit_20() { return &___resetFingerExit_20; }
	inline void set_resetFingerExit_20(bool value)
	{
		___resetFingerExit_20 = value;
	}

	inline static int32_t get_offset_of_interaction_21() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___interaction_21)); }
	inline int32_t get_interaction_21() const { return ___interaction_21; }
	inline int32_t* get_address_of_interaction_21() { return &___interaction_21; }
	inline void set_interaction_21(int32_t value)
	{
		___interaction_21 = value;
	}

	inline static int32_t get_offset_of_useBroadcast_22() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___useBroadcast_22)); }
	inline bool get_useBroadcast_22() const { return ___useBroadcast_22; }
	inline bool* get_address_of_useBroadcast_22() { return &___useBroadcast_22; }
	inline void set_useBroadcast_22(bool value)
	{
		___useBroadcast_22 = value;
	}

	inline static int32_t get_offset_of_messageMode_23() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___messageMode_23)); }
	inline int32_t get_messageMode_23() const { return ___messageMode_23; }
	inline int32_t* get_address_of_messageMode_23() { return &___messageMode_23; }
	inline void set_messageMode_23(int32_t value)
	{
		___messageMode_23 = value;
	}

	inline static int32_t get_offset_of_receiverGameObject_24() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___receiverGameObject_24)); }
	inline GameObject_t4012695102 * get_receiverGameObject_24() const { return ___receiverGameObject_24; }
	inline GameObject_t4012695102 ** get_address_of_receiverGameObject_24() { return &___receiverGameObject_24; }
	inline void set_receiverGameObject_24(GameObject_t4012695102 * value)
	{
		___receiverGameObject_24 = value;
		Il2CppCodeGenWriteBarrier(&___receiverGameObject_24, value);
	}

	inline static int32_t get_offset_of_speed_25() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___speed_25)); }
	inline Vector2_t3525329788  get_speed_25() const { return ___speed_25; }
	inline Vector2_t3525329788 * get_address_of_speed_25() { return &___speed_25; }
	inline void set_speed_25(Vector2_t3525329788  value)
	{
		___speed_25 = value;
	}

	inline static int32_t get_offset_of_enableXaxis_26() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___enableXaxis_26)); }
	inline bool get_enableXaxis_26() const { return ___enableXaxis_26; }
	inline bool* get_address_of_enableXaxis_26() { return &___enableXaxis_26; }
	inline void set_enableXaxis_26(bool value)
	{
		___enableXaxis_26 = value;
	}

	inline static int32_t get_offset_of_xAxisTransform_27() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___xAxisTransform_27)); }
	inline Transform_t284553113 * get_xAxisTransform_27() const { return ___xAxisTransform_27; }
	inline Transform_t284553113 ** get_address_of_xAxisTransform_27() { return &___xAxisTransform_27; }
	inline void set_xAxisTransform_27(Transform_t284553113 * value)
	{
		___xAxisTransform_27 = value;
		Il2CppCodeGenWriteBarrier(&___xAxisTransform_27, value);
	}

	inline static int32_t get_offset_of_xAxisCharacterController_28() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___xAxisCharacterController_28)); }
	inline CharacterController_t2029520850 * get_xAxisCharacterController_28() const { return ___xAxisCharacterController_28; }
	inline CharacterController_t2029520850 ** get_address_of_xAxisCharacterController_28() { return &___xAxisCharacterController_28; }
	inline void set_xAxisCharacterController_28(CharacterController_t2029520850 * value)
	{
		___xAxisCharacterController_28 = value;
		Il2CppCodeGenWriteBarrier(&___xAxisCharacterController_28, value);
	}

	inline static int32_t get_offset_of_xAxisGravity_29() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___xAxisGravity_29)); }
	inline float get_xAxisGravity_29() const { return ___xAxisGravity_29; }
	inline float* get_address_of_xAxisGravity_29() { return &___xAxisGravity_29; }
	inline void set_xAxisGravity_29(float value)
	{
		___xAxisGravity_29 = value;
	}

	inline static int32_t get_offset_of_xTI_30() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___xTI_30)); }
	inline int32_t get_xTI_30() const { return ___xTI_30; }
	inline int32_t* get_address_of_xTI_30() { return &___xTI_30; }
	inline void set_xTI_30(int32_t value)
	{
		___xTI_30 = value;
	}

	inline static int32_t get_offset_of_xAI_31() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___xAI_31)); }
	inline int32_t get_xAI_31() const { return ___xAI_31; }
	inline int32_t* get_address_of_xAI_31() { return &___xAI_31; }
	inline void set_xAI_31(int32_t value)
	{
		___xAI_31 = value;
	}

	inline static int32_t get_offset_of_inverseXAxis_32() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___inverseXAxis_32)); }
	inline bool get_inverseXAxis_32() const { return ___inverseXAxis_32; }
	inline bool* get_address_of_inverseXAxis_32() { return &___inverseXAxis_32; }
	inline void set_inverseXAxis_32(bool value)
	{
		___inverseXAxis_32 = value;
	}

	inline static int32_t get_offset_of_enableXClamp_33() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___enableXClamp_33)); }
	inline bool get_enableXClamp_33() const { return ___enableXClamp_33; }
	inline bool* get_address_of_enableXClamp_33() { return &___enableXClamp_33; }
	inline void set_enableXClamp_33(bool value)
	{
		___enableXClamp_33 = value;
	}

	inline static int32_t get_offset_of_clampXMax_34() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___clampXMax_34)); }
	inline float get_clampXMax_34() const { return ___clampXMax_34; }
	inline float* get_address_of_clampXMax_34() { return &___clampXMax_34; }
	inline void set_clampXMax_34(float value)
	{
		___clampXMax_34 = value;
	}

	inline static int32_t get_offset_of_clampXMin_35() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___clampXMin_35)); }
	inline float get_clampXMin_35() const { return ___clampXMin_35; }
	inline float* get_address_of_clampXMin_35() { return &___clampXMin_35; }
	inline void set_clampXMin_35(float value)
	{
		___clampXMin_35 = value;
	}

	inline static int32_t get_offset_of_enableXAutoStab_36() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___enableXAutoStab_36)); }
	inline bool get_enableXAutoStab_36() const { return ___enableXAutoStab_36; }
	inline bool* get_address_of_enableXAutoStab_36() { return &___enableXAutoStab_36; }
	inline void set_enableXAutoStab_36(bool value)
	{
		___enableXAutoStab_36 = value;
	}

	inline static int32_t get_offset_of_thresholdX_37() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___thresholdX_37)); }
	inline float get_thresholdX_37() const { return ___thresholdX_37; }
	inline float* get_address_of_thresholdX_37() { return &___thresholdX_37; }
	inline void set_thresholdX_37(float value)
	{
		___thresholdX_37 = value;
	}

	inline static int32_t get_offset_of_stabSpeedX_38() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___stabSpeedX_38)); }
	inline float get_stabSpeedX_38() const { return ___stabSpeedX_38; }
	inline float* get_address_of_stabSpeedX_38() { return &___stabSpeedX_38; }
	inline void set_stabSpeedX_38(float value)
	{
		___stabSpeedX_38 = value;
	}

	inline static int32_t get_offset_of_enableYaxis_39() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___enableYaxis_39)); }
	inline bool get_enableYaxis_39() const { return ___enableYaxis_39; }
	inline bool* get_address_of_enableYaxis_39() { return &___enableYaxis_39; }
	inline void set_enableYaxis_39(bool value)
	{
		___enableYaxis_39 = value;
	}

	inline static int32_t get_offset_of_yAxisTransform_40() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___yAxisTransform_40)); }
	inline Transform_t284553113 * get_yAxisTransform_40() const { return ___yAxisTransform_40; }
	inline Transform_t284553113 ** get_address_of_yAxisTransform_40() { return &___yAxisTransform_40; }
	inline void set_yAxisTransform_40(Transform_t284553113 * value)
	{
		___yAxisTransform_40 = value;
		Il2CppCodeGenWriteBarrier(&___yAxisTransform_40, value);
	}

	inline static int32_t get_offset_of_yAxisCharacterController_41() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___yAxisCharacterController_41)); }
	inline CharacterController_t2029520850 * get_yAxisCharacterController_41() const { return ___yAxisCharacterController_41; }
	inline CharacterController_t2029520850 ** get_address_of_yAxisCharacterController_41() { return &___yAxisCharacterController_41; }
	inline void set_yAxisCharacterController_41(CharacterController_t2029520850 * value)
	{
		___yAxisCharacterController_41 = value;
		Il2CppCodeGenWriteBarrier(&___yAxisCharacterController_41, value);
	}

	inline static int32_t get_offset_of_yAxisGravity_42() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___yAxisGravity_42)); }
	inline float get_yAxisGravity_42() const { return ___yAxisGravity_42; }
	inline float* get_address_of_yAxisGravity_42() { return &___yAxisGravity_42; }
	inline void set_yAxisGravity_42(float value)
	{
		___yAxisGravity_42 = value;
	}

	inline static int32_t get_offset_of_yTI_43() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___yTI_43)); }
	inline int32_t get_yTI_43() const { return ___yTI_43; }
	inline int32_t* get_address_of_yTI_43() { return &___yTI_43; }
	inline void set_yTI_43(int32_t value)
	{
		___yTI_43 = value;
	}

	inline static int32_t get_offset_of_yAI_44() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___yAI_44)); }
	inline int32_t get_yAI_44() const { return ___yAI_44; }
	inline int32_t* get_address_of_yAI_44() { return &___yAI_44; }
	inline void set_yAI_44(int32_t value)
	{
		___yAI_44 = value;
	}

	inline static int32_t get_offset_of_inverseYAxis_45() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___inverseYAxis_45)); }
	inline bool get_inverseYAxis_45() const { return ___inverseYAxis_45; }
	inline bool* get_address_of_inverseYAxis_45() { return &___inverseYAxis_45; }
	inline void set_inverseYAxis_45(bool value)
	{
		___inverseYAxis_45 = value;
	}

	inline static int32_t get_offset_of_enableYClamp_46() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___enableYClamp_46)); }
	inline bool get_enableYClamp_46() const { return ___enableYClamp_46; }
	inline bool* get_address_of_enableYClamp_46() { return &___enableYClamp_46; }
	inline void set_enableYClamp_46(bool value)
	{
		___enableYClamp_46 = value;
	}

	inline static int32_t get_offset_of_clampYMax_47() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___clampYMax_47)); }
	inline float get_clampYMax_47() const { return ___clampYMax_47; }
	inline float* get_address_of_clampYMax_47() { return &___clampYMax_47; }
	inline void set_clampYMax_47(float value)
	{
		___clampYMax_47 = value;
	}

	inline static int32_t get_offset_of_clampYMin_48() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___clampYMin_48)); }
	inline float get_clampYMin_48() const { return ___clampYMin_48; }
	inline float* get_address_of_clampYMin_48() { return &___clampYMin_48; }
	inline void set_clampYMin_48(float value)
	{
		___clampYMin_48 = value;
	}

	inline static int32_t get_offset_of_enableYAutoStab_49() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___enableYAutoStab_49)); }
	inline bool get_enableYAutoStab_49() const { return ___enableYAutoStab_49; }
	inline bool* get_address_of_enableYAutoStab_49() { return &___enableYAutoStab_49; }
	inline void set_enableYAutoStab_49(bool value)
	{
		___enableYAutoStab_49 = value;
	}

	inline static int32_t get_offset_of_thresholdY_50() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___thresholdY_50)); }
	inline float get_thresholdY_50() const { return ___thresholdY_50; }
	inline float* get_address_of_thresholdY_50() { return &___thresholdY_50; }
	inline void set_thresholdY_50(float value)
	{
		___thresholdY_50 = value;
	}

	inline static int32_t get_offset_of_stabSpeedY_51() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___stabSpeedY_51)); }
	inline float get_stabSpeedY_51() const { return ___stabSpeedY_51; }
	inline float* get_address_of_stabSpeedY_51() { return &___stabSpeedY_51; }
	inline void set_stabSpeedY_51(float value)
	{
		___stabSpeedY_51 = value;
	}

	inline static int32_t get_offset_of_enableSmoothing_52() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___enableSmoothing_52)); }
	inline bool get_enableSmoothing_52() const { return ___enableSmoothing_52; }
	inline bool* get_address_of_enableSmoothing_52() { return &___enableSmoothing_52; }
	inline void set_enableSmoothing_52(bool value)
	{
		___enableSmoothing_52 = value;
	}

	inline static int32_t get_offset_of_smoothing_53() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___smoothing_53)); }
	inline Vector2_t3525329788  get_smoothing_53() const { return ___smoothing_53; }
	inline Vector2_t3525329788 * get_address_of_smoothing_53() { return &___smoothing_53; }
	inline void set_smoothing_53(Vector2_t3525329788  value)
	{
		___smoothing_53 = value;
	}

	inline static int32_t get_offset_of_enableInertia_54() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___enableInertia_54)); }
	inline bool get_enableInertia_54() const { return ___enableInertia_54; }
	inline bool* get_address_of_enableInertia_54() { return &___enableInertia_54; }
	inline void set_enableInertia_54(bool value)
	{
		___enableInertia_54 = value;
	}

	inline static int32_t get_offset_of_inertia_55() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___inertia_55)); }
	inline Vector2_t3525329788  get_inertia_55() const { return ___inertia_55; }
	inline Vector2_t3525329788 * get_address_of_inertia_55() { return &___inertia_55; }
	inline void set_inertia_55(Vector2_t3525329788  value)
	{
		___inertia_55 = value;
	}

	inline static int32_t get_offset_of_guiDepth_56() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___guiDepth_56)); }
	inline int32_t get_guiDepth_56() const { return ___guiDepth_56; }
	inline int32_t* get_address_of_guiDepth_56() { return &___guiDepth_56; }
	inline void set_guiDepth_56(int32_t value)
	{
		___guiDepth_56 = value;
	}

	inline static int32_t get_offset_of_showZone_57() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___showZone_57)); }
	inline bool get_showZone_57() const { return ___showZone_57; }
	inline bool* get_address_of_showZone_57() { return &___showZone_57; }
	inline void set_showZone_57(bool value)
	{
		___showZone_57 = value;
	}

	inline static int32_t get_offset_of_showTouch_58() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___showTouch_58)); }
	inline bool get_showTouch_58() const { return ___showTouch_58; }
	inline bool* get_address_of_showTouch_58() { return &___showTouch_58; }
	inline void set_showTouch_58(bool value)
	{
		___showTouch_58 = value;
	}

	inline static int32_t get_offset_of_showDeadZone_59() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___showDeadZone_59)); }
	inline bool get_showDeadZone_59() const { return ___showDeadZone_59; }
	inline bool* get_address_of_showDeadZone_59() { return &___showDeadZone_59; }
	inline void set_showDeadZone_59(bool value)
	{
		___showDeadZone_59 = value;
	}

	inline static int32_t get_offset_of_areaTexture_60() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___areaTexture_60)); }
	inline Texture_t1769722184 * get_areaTexture_60() const { return ___areaTexture_60; }
	inline Texture_t1769722184 ** get_address_of_areaTexture_60() { return &___areaTexture_60; }
	inline void set_areaTexture_60(Texture_t1769722184 * value)
	{
		___areaTexture_60 = value;
		Il2CppCodeGenWriteBarrier(&___areaTexture_60, value);
	}

	inline static int32_t get_offset_of_areaColor_61() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___areaColor_61)); }
	inline Color_t1588175760  get_areaColor_61() const { return ___areaColor_61; }
	inline Color_t1588175760 * get_address_of_areaColor_61() { return &___areaColor_61; }
	inline void set_areaColor_61(Color_t1588175760  value)
	{
		___areaColor_61 = value;
	}

	inline static int32_t get_offset_of_touchTexture_62() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___touchTexture_62)); }
	inline Texture_t1769722184 * get_touchTexture_62() const { return ___touchTexture_62; }
	inline Texture_t1769722184 ** get_address_of_touchTexture_62() { return &___touchTexture_62; }
	inline void set_touchTexture_62(Texture_t1769722184 * value)
	{
		___touchTexture_62 = value;
		Il2CppCodeGenWriteBarrier(&___touchTexture_62, value);
	}

	inline static int32_t get_offset_of_touchColor_63() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___touchColor_63)); }
	inline Color_t1588175760  get_touchColor_63() const { return ___touchColor_63; }
	inline Color_t1588175760 * get_address_of_touchColor_63() { return &___touchColor_63; }
	inline void set_touchColor_63(Color_t1588175760  value)
	{
		___touchColor_63 = value;
	}

	inline static int32_t get_offset_of_deadTexture_64() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___deadTexture_64)); }
	inline Texture_t1769722184 * get_deadTexture_64() const { return ___deadTexture_64; }
	inline Texture_t1769722184 ** get_address_of_deadTexture_64() { return &___deadTexture_64; }
	inline void set_deadTexture_64(Texture_t1769722184 * value)
	{
		___deadTexture_64 = value;
		Il2CppCodeGenWriteBarrier(&___deadTexture_64, value);
	}

	inline static int32_t get_offset_of_showProperties_65() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___showProperties_65)); }
	inline bool get_showProperties_65() const { return ___showProperties_65; }
	inline bool* get_address_of_showProperties_65() { return &___showProperties_65; }
	inline void set_showProperties_65(bool value)
	{
		___showProperties_65 = value;
	}

	inline static int32_t get_offset_of_showInteraction_66() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___showInteraction_66)); }
	inline bool get_showInteraction_66() const { return ___showInteraction_66; }
	inline bool* get_address_of_showInteraction_66() { return &___showInteraction_66; }
	inline void set_showInteraction_66(bool value)
	{
		___showInteraction_66 = value;
	}

	inline static int32_t get_offset_of_showAppearance_67() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___showAppearance_67)); }
	inline bool get_showAppearance_67() const { return ___showAppearance_67; }
	inline bool* get_address_of_showAppearance_67() { return &___showAppearance_67; }
	inline void set_showAppearance_67(bool value)
	{
		___showAppearance_67 = value;
	}

	inline static int32_t get_offset_of_showPosition_68() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___showPosition_68)); }
	inline bool get_showPosition_68() const { return ___showPosition_68; }
	inline bool* get_address_of_showPosition_68() { return &___showPosition_68; }
	inline void set_showPosition_68(bool value)
	{
		___showPosition_68 = value;
	}

	inline static int32_t get_offset_of_joystickCenter_69() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___joystickCenter_69)); }
	inline Vector2_t3525329788  get_joystickCenter_69() const { return ___joystickCenter_69; }
	inline Vector2_t3525329788 * get_address_of_joystickCenter_69() { return &___joystickCenter_69; }
	inline void set_joystickCenter_69(Vector2_t3525329788  value)
	{
		___joystickCenter_69 = value;
	}

	inline static int32_t get_offset_of_areaRect_70() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___areaRect_70)); }
	inline Rect_t1525428817  get_areaRect_70() const { return ___areaRect_70; }
	inline Rect_t1525428817 * get_address_of_areaRect_70() { return &___areaRect_70; }
	inline void set_areaRect_70(Rect_t1525428817  value)
	{
		___areaRect_70 = value;
	}

	inline static int32_t get_offset_of_deadRect_71() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___deadRect_71)); }
	inline Rect_t1525428817  get_deadRect_71() const { return ___deadRect_71; }
	inline Rect_t1525428817 * get_address_of_deadRect_71() { return &___deadRect_71; }
	inline void set_deadRect_71(Rect_t1525428817  value)
	{
		___deadRect_71 = value;
	}

	inline static int32_t get_offset_of_anchorPosition_72() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___anchorPosition_72)); }
	inline Vector2_t3525329788  get_anchorPosition_72() const { return ___anchorPosition_72; }
	inline Vector2_t3525329788 * get_address_of_anchorPosition_72() { return &___anchorPosition_72; }
	inline void set_anchorPosition_72(Vector2_t3525329788  value)
	{
		___anchorPosition_72 = value;
	}

	inline static int32_t get_offset_of_virtualJoystick_73() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___virtualJoystick_73)); }
	inline bool get_virtualJoystick_73() const { return ___virtualJoystick_73; }
	inline bool* get_address_of_virtualJoystick_73() { return &___virtualJoystick_73; }
	inline void set_virtualJoystick_73(bool value)
	{
		___virtualJoystick_73 = value;
	}

	inline static int32_t get_offset_of_joystickIndex_74() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___joystickIndex_74)); }
	inline int32_t get_joystickIndex_74() const { return ___joystickIndex_74; }
	inline int32_t* get_address_of_joystickIndex_74() { return &___joystickIndex_74; }
	inline void set_joystickIndex_74(int32_t value)
	{
		___joystickIndex_74 = value;
	}

	inline static int32_t get_offset_of_touchSizeCoef_75() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___touchSizeCoef_75)); }
	inline float get_touchSizeCoef_75() const { return ___touchSizeCoef_75; }
	inline float* get_address_of_touchSizeCoef_75() { return &___touchSizeCoef_75; }
	inline void set_touchSizeCoef_75(float value)
	{
		___touchSizeCoef_75 = value;
	}

	inline static int32_t get_offset_of_sendEnd_76() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___sendEnd_76)); }
	inline bool get_sendEnd_76() const { return ___sendEnd_76; }
	inline bool* get_address_of_sendEnd_76() { return &___sendEnd_76; }
	inline void set_sendEnd_76(bool value)
	{
		___sendEnd_76 = value;
	}

	inline static int32_t get_offset_of_startXLocalAngle_77() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___startXLocalAngle_77)); }
	inline float get_startXLocalAngle_77() const { return ___startXLocalAngle_77; }
	inline float* get_address_of_startXLocalAngle_77() { return &___startXLocalAngle_77; }
	inline void set_startXLocalAngle_77(float value)
	{
		___startXLocalAngle_77 = value;
	}

	inline static int32_t get_offset_of_startYLocalAngle_78() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230, ___startYLocalAngle_78)); }
	inline float get_startYLocalAngle_78() const { return ___startYLocalAngle_78; }
	inline float* get_address_of_startYLocalAngle_78() { return &___startYLocalAngle_78; }
	inline void set_startYLocalAngle_78(float value)
	{
		___startYLocalAngle_78 = value;
	}
};

struct EasyJoystick_t449807230_StaticFields
{
public:
	// EasyJoystick/JoystickMoveStartHandler EasyJoystick::On_JoystickMoveStart
	JoystickMoveStartHandler_t2105815157 * ___On_JoystickMoveStart_79;
	// EasyJoystick/JoystickMoveHandler EasyJoystick::On_JoystickMove
	JoystickMoveHandler_t2267610941 * ___On_JoystickMove_80;
	// EasyJoystick/JoystickMoveEndHandler EasyJoystick::On_JoystickMoveEnd
	JoystickMoveEndHandler_t2083928348 * ___On_JoystickMoveEnd_81;
	// EasyJoystick/JoystickTouchStartHandler EasyJoystick::On_JoystickTouchStart
	JoystickTouchStartHandler_t587946859 * ___On_JoystickTouchStart_82;
	// EasyJoystick/JoystickTapHandler EasyJoystick::On_JoystickTap
	JoystickTapHandler_t2112530595 * ___On_JoystickTap_83;
	// EasyJoystick/JoystickDoubleTapHandler EasyJoystick::On_JoystickDoubleTap
	JoystickDoubleTapHandler_t153379412 * ___On_JoystickDoubleTap_84;
	// EasyJoystick/JoystickTouchUpHandler EasyJoystick::On_JoystickTouchUp
	JoystickTouchUpHandler_t1102408748 * ___On_JoystickTouchUp_85;

public:
	inline static int32_t get_offset_of_On_JoystickMoveStart_79() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230_StaticFields, ___On_JoystickMoveStart_79)); }
	inline JoystickMoveStartHandler_t2105815157 * get_On_JoystickMoveStart_79() const { return ___On_JoystickMoveStart_79; }
	inline JoystickMoveStartHandler_t2105815157 ** get_address_of_On_JoystickMoveStart_79() { return &___On_JoystickMoveStart_79; }
	inline void set_On_JoystickMoveStart_79(JoystickMoveStartHandler_t2105815157 * value)
	{
		___On_JoystickMoveStart_79 = value;
		Il2CppCodeGenWriteBarrier(&___On_JoystickMoveStart_79, value);
	}

	inline static int32_t get_offset_of_On_JoystickMove_80() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230_StaticFields, ___On_JoystickMove_80)); }
	inline JoystickMoveHandler_t2267610941 * get_On_JoystickMove_80() const { return ___On_JoystickMove_80; }
	inline JoystickMoveHandler_t2267610941 ** get_address_of_On_JoystickMove_80() { return &___On_JoystickMove_80; }
	inline void set_On_JoystickMove_80(JoystickMoveHandler_t2267610941 * value)
	{
		___On_JoystickMove_80 = value;
		Il2CppCodeGenWriteBarrier(&___On_JoystickMove_80, value);
	}

	inline static int32_t get_offset_of_On_JoystickMoveEnd_81() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230_StaticFields, ___On_JoystickMoveEnd_81)); }
	inline JoystickMoveEndHandler_t2083928348 * get_On_JoystickMoveEnd_81() const { return ___On_JoystickMoveEnd_81; }
	inline JoystickMoveEndHandler_t2083928348 ** get_address_of_On_JoystickMoveEnd_81() { return &___On_JoystickMoveEnd_81; }
	inline void set_On_JoystickMoveEnd_81(JoystickMoveEndHandler_t2083928348 * value)
	{
		___On_JoystickMoveEnd_81 = value;
		Il2CppCodeGenWriteBarrier(&___On_JoystickMoveEnd_81, value);
	}

	inline static int32_t get_offset_of_On_JoystickTouchStart_82() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230_StaticFields, ___On_JoystickTouchStart_82)); }
	inline JoystickTouchStartHandler_t587946859 * get_On_JoystickTouchStart_82() const { return ___On_JoystickTouchStart_82; }
	inline JoystickTouchStartHandler_t587946859 ** get_address_of_On_JoystickTouchStart_82() { return &___On_JoystickTouchStart_82; }
	inline void set_On_JoystickTouchStart_82(JoystickTouchStartHandler_t587946859 * value)
	{
		___On_JoystickTouchStart_82 = value;
		Il2CppCodeGenWriteBarrier(&___On_JoystickTouchStart_82, value);
	}

	inline static int32_t get_offset_of_On_JoystickTap_83() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230_StaticFields, ___On_JoystickTap_83)); }
	inline JoystickTapHandler_t2112530595 * get_On_JoystickTap_83() const { return ___On_JoystickTap_83; }
	inline JoystickTapHandler_t2112530595 ** get_address_of_On_JoystickTap_83() { return &___On_JoystickTap_83; }
	inline void set_On_JoystickTap_83(JoystickTapHandler_t2112530595 * value)
	{
		___On_JoystickTap_83 = value;
		Il2CppCodeGenWriteBarrier(&___On_JoystickTap_83, value);
	}

	inline static int32_t get_offset_of_On_JoystickDoubleTap_84() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230_StaticFields, ___On_JoystickDoubleTap_84)); }
	inline JoystickDoubleTapHandler_t153379412 * get_On_JoystickDoubleTap_84() const { return ___On_JoystickDoubleTap_84; }
	inline JoystickDoubleTapHandler_t153379412 ** get_address_of_On_JoystickDoubleTap_84() { return &___On_JoystickDoubleTap_84; }
	inline void set_On_JoystickDoubleTap_84(JoystickDoubleTapHandler_t153379412 * value)
	{
		___On_JoystickDoubleTap_84 = value;
		Il2CppCodeGenWriteBarrier(&___On_JoystickDoubleTap_84, value);
	}

	inline static int32_t get_offset_of_On_JoystickTouchUp_85() { return static_cast<int32_t>(offsetof(EasyJoystick_t449807230_StaticFields, ___On_JoystickTouchUp_85)); }
	inline JoystickTouchUpHandler_t1102408748 * get_On_JoystickTouchUp_85() const { return ___On_JoystickTouchUp_85; }
	inline JoystickTouchUpHandler_t1102408748 ** get_address_of_On_JoystickTouchUp_85() { return &___On_JoystickTouchUp_85; }
	inline void set_On_JoystickTouchUp_85(JoystickTouchUpHandler_t1102408748 * value)
	{
		___On_JoystickTouchUp_85 = value;
		Il2CppCodeGenWriteBarrier(&___On_JoystickTouchUp_85, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
