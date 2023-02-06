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

#include "AssemblyU2DCSharp_UITweener105489188.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TweenRotation
struct  TweenRotation_t2896252649  : public UITweener_t105489188
{
public:
	// UnityEngine.Vector3 TweenRotation::from
	Vector3_t3525329789  ___from_20;
	// UnityEngine.Vector3 TweenRotation::to
	Vector3_t3525329789  ___to_21;
	// UnityEngine.Transform TweenRotation::mTrans
	Transform_t284553113 * ___mTrans_22;

public:
	inline static int32_t get_offset_of_from_20() { return static_cast<int32_t>(offsetof(TweenRotation_t2896252649, ___from_20)); }
	inline Vector3_t3525329789  get_from_20() const { return ___from_20; }
	inline Vector3_t3525329789 * get_address_of_from_20() { return &___from_20; }
	inline void set_from_20(Vector3_t3525329789  value)
	{
		___from_20 = value;
	}

	inline static int32_t get_offset_of_to_21() { return static_cast<int32_t>(offsetof(TweenRotation_t2896252649, ___to_21)); }
	inline Vector3_t3525329789  get_to_21() const { return ___to_21; }
	inline Vector3_t3525329789 * get_address_of_to_21() { return &___to_21; }
	inline void set_to_21(Vector3_t3525329789  value)
	{
		___to_21 = value;
	}

	inline static int32_t get_offset_of_mTrans_22() { return static_cast<int32_t>(offsetof(TweenRotation_t2896252649, ___mTrans_22)); }
	inline Transform_t284553113 * get_mTrans_22() const { return ___mTrans_22; }
	inline Transform_t284553113 ** get_address_of_mTrans_22() { return &___mTrans_22; }
	inline void set_mTrans_22(Transform_t284553113 * value)
	{
		___mTrans_22 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
