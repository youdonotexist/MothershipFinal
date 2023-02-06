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
#include "UnityEngine_UnityEngine_TouchPhase1905076713.h"
#include "AssemblyU2DCSharp_EasyTouch_GestureType1319517187.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Finger
struct  Finger_t2104389513  : public Il2CppObject
{
public:
	// System.Int32 Finger::fingerIndex
	int32_t ___fingerIndex_0;
	// System.Int32 Finger::touchCount
	int32_t ___touchCount_1;
	// UnityEngine.Vector2 Finger::startPosition
	Vector2_t3525329788  ___startPosition_2;
	// UnityEngine.Vector2 Finger::complexStartPosition
	Vector2_t3525329788  ___complexStartPosition_3;
	// UnityEngine.Vector2 Finger::position
	Vector2_t3525329788  ___position_4;
	// UnityEngine.Vector2 Finger::deltaPosition
	Vector2_t3525329788  ___deltaPosition_5;
	// UnityEngine.Vector2 Finger::oldPosition
	Vector2_t3525329788  ___oldPosition_6;
	// System.Int32 Finger::tapCount
	int32_t ___tapCount_7;
	// System.Single Finger::deltaTime
	float ___deltaTime_8;
	// UnityEngine.TouchPhase Finger::phase
	int32_t ___phase_9;
	// EasyTouch/GestureType Finger::gesture
	int32_t ___gesture_10;
	// UnityEngine.GameObject Finger::pickedObject
	GameObject_t4012695102 * ___pickedObject_11;
	// UnityEngine.Camera Finger::pickedCamera
	Camera_t3533968274 * ___pickedCamera_12;
	// System.Boolean Finger::isGuiCamera
	bool ___isGuiCamera_13;

public:
	inline static int32_t get_offset_of_fingerIndex_0() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___fingerIndex_0)); }
	inline int32_t get_fingerIndex_0() const { return ___fingerIndex_0; }
	inline int32_t* get_address_of_fingerIndex_0() { return &___fingerIndex_0; }
	inline void set_fingerIndex_0(int32_t value)
	{
		___fingerIndex_0 = value;
	}

	inline static int32_t get_offset_of_touchCount_1() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___touchCount_1)); }
	inline int32_t get_touchCount_1() const { return ___touchCount_1; }
	inline int32_t* get_address_of_touchCount_1() { return &___touchCount_1; }
	inline void set_touchCount_1(int32_t value)
	{
		___touchCount_1 = value;
	}

	inline static int32_t get_offset_of_startPosition_2() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___startPosition_2)); }
	inline Vector2_t3525329788  get_startPosition_2() const { return ___startPosition_2; }
	inline Vector2_t3525329788 * get_address_of_startPosition_2() { return &___startPosition_2; }
	inline void set_startPosition_2(Vector2_t3525329788  value)
	{
		___startPosition_2 = value;
	}

	inline static int32_t get_offset_of_complexStartPosition_3() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___complexStartPosition_3)); }
	inline Vector2_t3525329788  get_complexStartPosition_3() const { return ___complexStartPosition_3; }
	inline Vector2_t3525329788 * get_address_of_complexStartPosition_3() { return &___complexStartPosition_3; }
	inline void set_complexStartPosition_3(Vector2_t3525329788  value)
	{
		___complexStartPosition_3 = value;
	}

	inline static int32_t get_offset_of_position_4() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___position_4)); }
	inline Vector2_t3525329788  get_position_4() const { return ___position_4; }
	inline Vector2_t3525329788 * get_address_of_position_4() { return &___position_4; }
	inline void set_position_4(Vector2_t3525329788  value)
	{
		___position_4 = value;
	}

	inline static int32_t get_offset_of_deltaPosition_5() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___deltaPosition_5)); }
	inline Vector2_t3525329788  get_deltaPosition_5() const { return ___deltaPosition_5; }
	inline Vector2_t3525329788 * get_address_of_deltaPosition_5() { return &___deltaPosition_5; }
	inline void set_deltaPosition_5(Vector2_t3525329788  value)
	{
		___deltaPosition_5 = value;
	}

	inline static int32_t get_offset_of_oldPosition_6() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___oldPosition_6)); }
	inline Vector2_t3525329788  get_oldPosition_6() const { return ___oldPosition_6; }
	inline Vector2_t3525329788 * get_address_of_oldPosition_6() { return &___oldPosition_6; }
	inline void set_oldPosition_6(Vector2_t3525329788  value)
	{
		___oldPosition_6 = value;
	}

	inline static int32_t get_offset_of_tapCount_7() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___tapCount_7)); }
	inline int32_t get_tapCount_7() const { return ___tapCount_7; }
	inline int32_t* get_address_of_tapCount_7() { return &___tapCount_7; }
	inline void set_tapCount_7(int32_t value)
	{
		___tapCount_7 = value;
	}

	inline static int32_t get_offset_of_deltaTime_8() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___deltaTime_8)); }
	inline float get_deltaTime_8() const { return ___deltaTime_8; }
	inline float* get_address_of_deltaTime_8() { return &___deltaTime_8; }
	inline void set_deltaTime_8(float value)
	{
		___deltaTime_8 = value;
	}

	inline static int32_t get_offset_of_phase_9() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___phase_9)); }
	inline int32_t get_phase_9() const { return ___phase_9; }
	inline int32_t* get_address_of_phase_9() { return &___phase_9; }
	inline void set_phase_9(int32_t value)
	{
		___phase_9 = value;
	}

	inline static int32_t get_offset_of_gesture_10() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___gesture_10)); }
	inline int32_t get_gesture_10() const { return ___gesture_10; }
	inline int32_t* get_address_of_gesture_10() { return &___gesture_10; }
	inline void set_gesture_10(int32_t value)
	{
		___gesture_10 = value;
	}

	inline static int32_t get_offset_of_pickedObject_11() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___pickedObject_11)); }
	inline GameObject_t4012695102 * get_pickedObject_11() const { return ___pickedObject_11; }
	inline GameObject_t4012695102 ** get_address_of_pickedObject_11() { return &___pickedObject_11; }
	inline void set_pickedObject_11(GameObject_t4012695102 * value)
	{
		___pickedObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___pickedObject_11, value);
	}

	inline static int32_t get_offset_of_pickedCamera_12() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___pickedCamera_12)); }
	inline Camera_t3533968274 * get_pickedCamera_12() const { return ___pickedCamera_12; }
	inline Camera_t3533968274 ** get_address_of_pickedCamera_12() { return &___pickedCamera_12; }
	inline void set_pickedCamera_12(Camera_t3533968274 * value)
	{
		___pickedCamera_12 = value;
		Il2CppCodeGenWriteBarrier(&___pickedCamera_12, value);
	}

	inline static int32_t get_offset_of_isGuiCamera_13() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___isGuiCamera_13)); }
	inline bool get_isGuiCamera_13() const { return ___isGuiCamera_13; }
	inline bool* get_address_of_isGuiCamera_13() { return &___isGuiCamera_13; }
	inline void set_isGuiCamera_13(bool value)
	{
		___isGuiCamera_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
