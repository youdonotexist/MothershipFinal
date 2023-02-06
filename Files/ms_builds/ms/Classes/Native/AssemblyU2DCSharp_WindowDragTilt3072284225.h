﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WindowDragTilt
struct  WindowDragTilt_t3072284225  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 WindowDragTilt::updateOrder
	int32_t ___updateOrder_2;
	// System.Single WindowDragTilt::degrees
	float ___degrees_3;
	// UnityEngine.Vector3 WindowDragTilt::mLastPos
	Vector3_t3525329789  ___mLastPos_4;
	// UnityEngine.Transform WindowDragTilt::mTrans
	Transform_t284553113 * ___mTrans_5;
	// System.Single WindowDragTilt::mAngle
	float ___mAngle_6;

public:
	inline static int32_t get_offset_of_updateOrder_2() { return static_cast<int32_t>(offsetof(WindowDragTilt_t3072284225, ___updateOrder_2)); }
	inline int32_t get_updateOrder_2() const { return ___updateOrder_2; }
	inline int32_t* get_address_of_updateOrder_2() { return &___updateOrder_2; }
	inline void set_updateOrder_2(int32_t value)
	{
		___updateOrder_2 = value;
	}

	inline static int32_t get_offset_of_degrees_3() { return static_cast<int32_t>(offsetof(WindowDragTilt_t3072284225, ___degrees_3)); }
	inline float get_degrees_3() const { return ___degrees_3; }
	inline float* get_address_of_degrees_3() { return &___degrees_3; }
	inline void set_degrees_3(float value)
	{
		___degrees_3 = value;
	}

	inline static int32_t get_offset_of_mLastPos_4() { return static_cast<int32_t>(offsetof(WindowDragTilt_t3072284225, ___mLastPos_4)); }
	inline Vector3_t3525329789  get_mLastPos_4() const { return ___mLastPos_4; }
	inline Vector3_t3525329789 * get_address_of_mLastPos_4() { return &___mLastPos_4; }
	inline void set_mLastPos_4(Vector3_t3525329789  value)
	{
		___mLastPos_4 = value;
	}

	inline static int32_t get_offset_of_mTrans_5() { return static_cast<int32_t>(offsetof(WindowDragTilt_t3072284225, ___mTrans_5)); }
	inline Transform_t284553113 * get_mTrans_5() const { return ___mTrans_5; }
	inline Transform_t284553113 ** get_address_of_mTrans_5() { return &___mTrans_5; }
	inline void set_mTrans_5(Transform_t284553113 * value)
	{
		___mTrans_5 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_5, value);
	}

	inline static int32_t get_offset_of_mAngle_6() { return static_cast<int32_t>(offsetof(WindowDragTilt_t3072284225, ___mAngle_6)); }
	inline float get_mAngle_6() const { return ___mAngle_6; }
	inline float* get_address_of_mAngle_6() { return &___mAngle_6; }
	inline void set_mAngle_6(float value)
	{
		___mAngle_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
