﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WindowAutoYaw
struct  WindowAutoYaw_t1835239440  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 WindowAutoYaw::updateOrder
	int32_t ___updateOrder_2;
	// UnityEngine.Camera WindowAutoYaw::uiCamera
	Camera_t3533968274 * ___uiCamera_3;
	// System.Single WindowAutoYaw::yawAmount
	float ___yawAmount_4;
	// UnityEngine.Transform WindowAutoYaw::mTrans
	Transform_t284553113 * ___mTrans_5;

public:
	inline static int32_t get_offset_of_updateOrder_2() { return static_cast<int32_t>(offsetof(WindowAutoYaw_t1835239440, ___updateOrder_2)); }
	inline int32_t get_updateOrder_2() const { return ___updateOrder_2; }
	inline int32_t* get_address_of_updateOrder_2() { return &___updateOrder_2; }
	inline void set_updateOrder_2(int32_t value)
	{
		___updateOrder_2 = value;
	}

	inline static int32_t get_offset_of_uiCamera_3() { return static_cast<int32_t>(offsetof(WindowAutoYaw_t1835239440, ___uiCamera_3)); }
	inline Camera_t3533968274 * get_uiCamera_3() const { return ___uiCamera_3; }
	inline Camera_t3533968274 ** get_address_of_uiCamera_3() { return &___uiCamera_3; }
	inline void set_uiCamera_3(Camera_t3533968274 * value)
	{
		___uiCamera_3 = value;
		Il2CppCodeGenWriteBarrier(&___uiCamera_3, value);
	}

	inline static int32_t get_offset_of_yawAmount_4() { return static_cast<int32_t>(offsetof(WindowAutoYaw_t1835239440, ___yawAmount_4)); }
	inline float get_yawAmount_4() const { return ___yawAmount_4; }
	inline float* get_address_of_yawAmount_4() { return &___yawAmount_4; }
	inline void set_yawAmount_4(float value)
	{
		___yawAmount_4 = value;
	}

	inline static int32_t get_offset_of_mTrans_5() { return static_cast<int32_t>(offsetof(WindowAutoYaw_t1835239440, ___mTrans_5)); }
	inline Transform_t284553113 * get_mTrans_5() const { return ___mTrans_5; }
	inline Transform_t284553113 ** get_address_of_mTrans_5() { return &___mTrans_5; }
	inline void set_mTrans_5(Transform_t284553113 * value)
	{
		___mTrans_5 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
