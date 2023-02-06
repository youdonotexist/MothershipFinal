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
// UnityEngine.Camera
struct Camera_t3533968274;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "AssemblyU2DCSharp_EasyTouch_SwipeType3542103412.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gesture
struct  Gesture_t1589572905  : public Il2CppObject
{
public:
	// System.Int32 Gesture::fingerIndex
	int32_t ___fingerIndex_0;
	// System.Int32 Gesture::touchCount
	int32_t ___touchCount_1;
	// UnityEngine.Vector2 Gesture::startPosition
	Vector2_t3525329788  ___startPosition_2;
	// UnityEngine.Vector2 Gesture::position
	Vector2_t3525329788  ___position_3;
	// UnityEngine.Vector2 Gesture::deltaPosition
	Vector2_t3525329788  ___deltaPosition_4;
	// System.Single Gesture::actionTime
	float ___actionTime_5;
	// System.Single Gesture::deltaTime
	float ___deltaTime_6;
	// EasyTouch/SwipeType Gesture::swipe
	int32_t ___swipe_7;
	// System.Single Gesture::swipeLength
	float ___swipeLength_8;
	// UnityEngine.Vector2 Gesture::swipeVector
	Vector2_t3525329788  ___swipeVector_9;
	// System.Single Gesture::deltaPinch
	float ___deltaPinch_10;
	// System.Single Gesture::twistAngle
	float ___twistAngle_11;
	// System.Single Gesture::twoFingerDistance
	float ___twoFingerDistance_12;
	// UnityEngine.GameObject Gesture::pickObject
	GameObject_t4012695102 * ___pickObject_13;
	// UnityEngine.Camera Gesture::pickCamera
	Camera_t3533968274 * ___pickCamera_14;
	// System.Boolean Gesture::isGuiCamera
	bool ___isGuiCamera_15;
	// UnityEngine.GameObject Gesture::otherReceiver
	GameObject_t4012695102 * ___otherReceiver_16;
	// System.Boolean Gesture::isHoverReservedArea
	bool ___isHoverReservedArea_17;

public:
	inline static int32_t get_offset_of_fingerIndex_0() { return static_cast<int32_t>(offsetof(Gesture_t1589572905, ___fingerIndex_0)); }
	inline int32_t get_fingerIndex_0() const { return ___fingerIndex_0; }
	inline int32_t* get_address_of_fingerIndex_0() { return &___fingerIndex_0; }
	inline void set_fingerIndex_0(int32_t value)
	{
		___fingerIndex_0 = value;
	}

	inline static int32_t get_offset_of_touchCount_1() { return static_cast<int32_t>(offsetof(Gesture_t1589572905, ___touchCount_1)); }
	inline int32_t get_touchCount_1() const { return ___touchCount_1; }
	inline int32_t* get_address_of_touchCount_1() { return &___touchCount_1; }
	inline void set_touchCount_1(int32_t value)
	{
		___touchCount_1 = value;
	}

	inline static int32_t get_offset_of_startPosition_2() { return static_cast<int32_t>(offsetof(Gesture_t1589572905, ___startPosition_2)); }
	inline Vector2_t3525329788  get_startPosition_2() const { return ___startPosition_2; }
	inline Vector2_t3525329788 * get_address_of_startPosition_2() { return &___startPosition_2; }
	inline void set_startPosition_2(Vector2_t3525329788  value)
	{
		___startPosition_2 = value;
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(Gesture_t1589572905, ___position_3)); }
	inline Vector2_t3525329788  get_position_3() const { return ___position_3; }
	inline Vector2_t3525329788 * get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(Vector2_t3525329788  value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_deltaPosition_4() { return static_cast<int32_t>(offsetof(Gesture_t1589572905, ___deltaPosition_4)); }
	inline Vector2_t3525329788  get_deltaPosition_4() const { return ___deltaPosition_4; }
	inline Vector2_t3525329788 * get_address_of_deltaPosition_4() { return &___deltaPosition_4; }
	inline void set_deltaPosition_4(Vector2_t3525329788  value)
	{
		___deltaPosition_4 = value;
	}

	inline static int32_t get_offset_of_actionTime_5() { return static_cast<int32_t>(offsetof(Gesture_t1589572905, ___actionTime_5)); }
	inline float get_actionTime_5() const { return ___actionTime_5; }
	inline float* get_address_of_actionTime_5() { return &___actionTime_5; }
	inline void set_actionTime_5(float value)
	{
		___actionTime_5 = value;
	}

	inline static int32_t get_offset_of_deltaTime_6() { return static_cast<int32_t>(offsetof(Gesture_t1589572905, ___deltaTime_6)); }
	inline float get_deltaTime_6() const { return ___deltaTime_6; }
	inline float* get_address_of_deltaTime_6() { return &___deltaTime_6; }
	inline void set_deltaTime_6(float value)
	{
		___deltaTime_6 = value;
	}

	inline static int32_t get_offset_of_swipe_7() { return static_cast<int32_t>(offsetof(Gesture_t1589572905, ___swipe_7)); }
	inline int32_t get_swipe_7() const { return ___swipe_7; }
	inline int32_t* get_address_of_swipe_7() { return &___swipe_7; }
	inline void set_swipe_7(int32_t value)
	{
		___swipe_7 = value;
	}

	inline static int32_t get_offset_of_swipeLength_8() { return static_cast<int32_t>(offsetof(Gesture_t1589572905, ___swipeLength_8)); }
	inline float get_swipeLength_8() const { return ___swipeLength_8; }
	inline float* get_address_of_swipeLength_8() { return &___swipeLength_8; }
	inline void set_swipeLength_8(float value)
	{
		___swipeLength_8 = value;
	}

	inline static int32_t get_offset_of_swipeVector_9() { return static_cast<int32_t>(offsetof(Gesture_t1589572905, ___swipeVector_9)); }
	inline Vector2_t3525329788  get_swipeVector_9() const { return ___swipeVector_9; }
	inline Vector2_t3525329788 * get_address_of_swipeVector_9() { return &___swipeVector_9; }
	inline void set_swipeVector_9(Vector2_t3525329788  value)
	{
		___swipeVector_9 = value;
	}

	inline static int32_t get_offset_of_deltaPinch_10() { return static_cast<int32_t>(offsetof(Gesture_t1589572905, ___deltaPinch_10)); }
	inline float get_deltaPinch_10() const { return ___deltaPinch_10; }
	inline float* get_address_of_deltaPinch_10() { return &___deltaPinch_10; }
	inline void set_deltaPinch_10(float value)
	{
		___deltaPinch_10 = value;
	}

	inline static int32_t get_offset_of_twistAngle_11() { return static_cast<int32_t>(offsetof(Gesture_t1589572905, ___twistAngle_11)); }
	inline float get_twistAngle_11() const { return ___twistAngle_11; }
	inline float* get_address_of_twistAngle_11() { return &___twistAngle_11; }
	inline void set_twistAngle_11(float value)
	{
		___twistAngle_11 = value;
	}

	inline static int32_t get_offset_of_twoFingerDistance_12() { return static_cast<int32_t>(offsetof(Gesture_t1589572905, ___twoFingerDistance_12)); }
	inline float get_twoFingerDistance_12() const { return ___twoFingerDistance_12; }
	inline float* get_address_of_twoFingerDistance_12() { return &___twoFingerDistance_12; }
	inline void set_twoFingerDistance_12(float value)
	{
		___twoFingerDistance_12 = value;
	}

	inline static int32_t get_offset_of_pickObject_13() { return static_cast<int32_t>(offsetof(Gesture_t1589572905, ___pickObject_13)); }
	inline GameObject_t4012695102 * get_pickObject_13() const { return ___pickObject_13; }
	inline GameObject_t4012695102 ** get_address_of_pickObject_13() { return &___pickObject_13; }
	inline void set_pickObject_13(GameObject_t4012695102 * value)
	{
		___pickObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___pickObject_13, value);
	}

	inline static int32_t get_offset_of_pickCamera_14() { return static_cast<int32_t>(offsetof(Gesture_t1589572905, ___pickCamera_14)); }
	inline Camera_t3533968274 * get_pickCamera_14() const { return ___pickCamera_14; }
	inline Camera_t3533968274 ** get_address_of_pickCamera_14() { return &___pickCamera_14; }
	inline void set_pickCamera_14(Camera_t3533968274 * value)
	{
		___pickCamera_14 = value;
		Il2CppCodeGenWriteBarrier(&___pickCamera_14, value);
	}

	inline static int32_t get_offset_of_isGuiCamera_15() { return static_cast<int32_t>(offsetof(Gesture_t1589572905, ___isGuiCamera_15)); }
	inline bool get_isGuiCamera_15() const { return ___isGuiCamera_15; }
	inline bool* get_address_of_isGuiCamera_15() { return &___isGuiCamera_15; }
	inline void set_isGuiCamera_15(bool value)
	{
		___isGuiCamera_15 = value;
	}

	inline static int32_t get_offset_of_otherReceiver_16() { return static_cast<int32_t>(offsetof(Gesture_t1589572905, ___otherReceiver_16)); }
	inline GameObject_t4012695102 * get_otherReceiver_16() const { return ___otherReceiver_16; }
	inline GameObject_t4012695102 ** get_address_of_otherReceiver_16() { return &___otherReceiver_16; }
	inline void set_otherReceiver_16(GameObject_t4012695102 * value)
	{
		___otherReceiver_16 = value;
		Il2CppCodeGenWriteBarrier(&___otherReceiver_16, value);
	}

	inline static int32_t get_offset_of_isHoverReservedArea_17() { return static_cast<int32_t>(offsetof(Gesture_t1589572905, ___isHoverReservedArea_17)); }
	inline bool get_isHoverReservedArea_17() const { return ___isHoverReservedArea_17; }
	inline bool* get_address_of_isHoverReservedArea_17() { return &___isHoverReservedArea_17; }
	inline void set_isHoverReservedArea_17(bool value)
	{
		___isHoverReservedArea_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
