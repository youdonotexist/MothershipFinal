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

// UIOrthoCamera
struct  UIOrthoCamera_t3902783945  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Camera UIOrthoCamera::mCam
	Camera_t3533968274 * ___mCam_2;
	// UnityEngine.Transform UIOrthoCamera::mTrans
	Transform_t284553113 * ___mTrans_3;

public:
	inline static int32_t get_offset_of_mCam_2() { return static_cast<int32_t>(offsetof(UIOrthoCamera_t3902783945, ___mCam_2)); }
	inline Camera_t3533968274 * get_mCam_2() const { return ___mCam_2; }
	inline Camera_t3533968274 ** get_address_of_mCam_2() { return &___mCam_2; }
	inline void set_mCam_2(Camera_t3533968274 * value)
	{
		___mCam_2 = value;
		Il2CppCodeGenWriteBarrier(&___mCam_2, value);
	}

	inline static int32_t get_offset_of_mTrans_3() { return static_cast<int32_t>(offsetof(UIOrthoCamera_t3902783945, ___mTrans_3)); }
	inline Transform_t284553113 * get_mTrans_3() const { return ___mTrans_3; }
	inline Transform_t284553113 ** get_address_of_mTrans_3() { return &___mTrans_3; }
	inline void set_mTrans_3(Transform_t284553113 * value)
	{
		___mTrans_3 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
