#pragma once

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
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LagRotation
struct  LagRotation_t1823804176  : public MonoBehaviour_t3012272455
{
public:
	// System.Single LagRotation::speed
	float ___speed_2;
	// System.Boolean LagRotation::ignoreTimeScale
	bool ___ignoreTimeScale_3;
	// UnityEngine.Transform LagRotation::mTrans
	Transform_t284553113 * ___mTrans_4;
	// UnityEngine.Quaternion LagRotation::mRelative
	Quaternion_t1891715979  ___mRelative_5;
	// UnityEngine.Quaternion LagRotation::mAbsolute
	Quaternion_t1891715979  ___mAbsolute_6;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(LagRotation_t1823804176, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_ignoreTimeScale_3() { return static_cast<int32_t>(offsetof(LagRotation_t1823804176, ___ignoreTimeScale_3)); }
	inline bool get_ignoreTimeScale_3() const { return ___ignoreTimeScale_3; }
	inline bool* get_address_of_ignoreTimeScale_3() { return &___ignoreTimeScale_3; }
	inline void set_ignoreTimeScale_3(bool value)
	{
		___ignoreTimeScale_3 = value;
	}

	inline static int32_t get_offset_of_mTrans_4() { return static_cast<int32_t>(offsetof(LagRotation_t1823804176, ___mTrans_4)); }
	inline Transform_t284553113 * get_mTrans_4() const { return ___mTrans_4; }
	inline Transform_t284553113 ** get_address_of_mTrans_4() { return &___mTrans_4; }
	inline void set_mTrans_4(Transform_t284553113 * value)
	{
		___mTrans_4 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_4, value);
	}

	inline static int32_t get_offset_of_mRelative_5() { return static_cast<int32_t>(offsetof(LagRotation_t1823804176, ___mRelative_5)); }
	inline Quaternion_t1891715979  get_mRelative_5() const { return ___mRelative_5; }
	inline Quaternion_t1891715979 * get_address_of_mRelative_5() { return &___mRelative_5; }
	inline void set_mRelative_5(Quaternion_t1891715979  value)
	{
		___mRelative_5 = value;
	}

	inline static int32_t get_offset_of_mAbsolute_6() { return static_cast<int32_t>(offsetof(LagRotation_t1823804176, ___mAbsolute_6)); }
	inline Quaternion_t1891715979  get_mAbsolute_6() const { return ___mAbsolute_6; }
	inline Quaternion_t1891715979 * get_address_of_mAbsolute_6() { return &___mAbsolute_6; }
	inline void set_mAbsolute_6(Quaternion_t1891715979  value)
	{
		___mAbsolute_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
