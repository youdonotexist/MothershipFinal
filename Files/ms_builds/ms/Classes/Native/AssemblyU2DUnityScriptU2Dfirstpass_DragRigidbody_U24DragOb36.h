#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t3533968274;
// DragRigidbody
struct DragRigidbody_t2531437401;

#include "Boo_Lang_Boo_Lang_GenericGeneratorEnumerator_1_gen602172848.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragRigidbody/$DragObject$3/$
struct  U24_t36  : public GenericGeneratorEnumerator_1_t602172848
{
public:
	// System.Single DragRigidbody/$DragObject$3/$::$oldDrag$4
	float ___U24oldDragU244_2;
	// System.Single DragRigidbody/$DragObject$3/$::$oldAngularDrag$5
	float ___U24oldAngularDragU245_3;
	// UnityEngine.Camera DragRigidbody/$DragObject$3/$::$mainCamera$6
	Camera_t3533968274 * ___U24mainCameraU246_4;
	// UnityEngine.Ray DragRigidbody/$DragObject$3/$::$ray$7
	Ray_t1522967639  ___U24rayU247_5;
	// System.Single DragRigidbody/$DragObject$3/$::$distance$8
	float ___U24distanceU248_6;
	// DragRigidbody DragRigidbody/$DragObject$3/$::$self_$9
	DragRigidbody_t2531437401 * ___U24self_U249_7;

public:
	inline static int32_t get_offset_of_U24oldDragU244_2() { return static_cast<int32_t>(offsetof(U24_t36, ___U24oldDragU244_2)); }
	inline float get_U24oldDragU244_2() const { return ___U24oldDragU244_2; }
	inline float* get_address_of_U24oldDragU244_2() { return &___U24oldDragU244_2; }
	inline void set_U24oldDragU244_2(float value)
	{
		___U24oldDragU244_2 = value;
	}

	inline static int32_t get_offset_of_U24oldAngularDragU245_3() { return static_cast<int32_t>(offsetof(U24_t36, ___U24oldAngularDragU245_3)); }
	inline float get_U24oldAngularDragU245_3() const { return ___U24oldAngularDragU245_3; }
	inline float* get_address_of_U24oldAngularDragU245_3() { return &___U24oldAngularDragU245_3; }
	inline void set_U24oldAngularDragU245_3(float value)
	{
		___U24oldAngularDragU245_3 = value;
	}

	inline static int32_t get_offset_of_U24mainCameraU246_4() { return static_cast<int32_t>(offsetof(U24_t36, ___U24mainCameraU246_4)); }
	inline Camera_t3533968274 * get_U24mainCameraU246_4() const { return ___U24mainCameraU246_4; }
	inline Camera_t3533968274 ** get_address_of_U24mainCameraU246_4() { return &___U24mainCameraU246_4; }
	inline void set_U24mainCameraU246_4(Camera_t3533968274 * value)
	{
		___U24mainCameraU246_4 = value;
		Il2CppCodeGenWriteBarrier(&___U24mainCameraU246_4, value);
	}

	inline static int32_t get_offset_of_U24rayU247_5() { return static_cast<int32_t>(offsetof(U24_t36, ___U24rayU247_5)); }
	inline Ray_t1522967639  get_U24rayU247_5() const { return ___U24rayU247_5; }
	inline Ray_t1522967639 * get_address_of_U24rayU247_5() { return &___U24rayU247_5; }
	inline void set_U24rayU247_5(Ray_t1522967639  value)
	{
		___U24rayU247_5 = value;
	}

	inline static int32_t get_offset_of_U24distanceU248_6() { return static_cast<int32_t>(offsetof(U24_t36, ___U24distanceU248_6)); }
	inline float get_U24distanceU248_6() const { return ___U24distanceU248_6; }
	inline float* get_address_of_U24distanceU248_6() { return &___U24distanceU248_6; }
	inline void set_U24distanceU248_6(float value)
	{
		___U24distanceU248_6 = value;
	}

	inline static int32_t get_offset_of_U24self_U249_7() { return static_cast<int32_t>(offsetof(U24_t36, ___U24self_U249_7)); }
	inline DragRigidbody_t2531437401 * get_U24self_U249_7() const { return ___U24self_U249_7; }
	inline DragRigidbody_t2531437401 ** get_address_of_U24self_U249_7() { return &___U24self_U249_7; }
	inline void set_U24self_U249_7(DragRigidbody_t2531437401 * value)
	{
		___U24self_U249_7 = value;
		Il2CppCodeGenWriteBarrier(&___U24self_U249_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
