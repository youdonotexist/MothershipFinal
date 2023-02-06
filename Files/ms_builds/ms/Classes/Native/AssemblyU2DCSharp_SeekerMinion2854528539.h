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
// MinionBaseVehicle
struct MinionBaseVehicle_t3259673765;

#include "AssemblyU2DCSharp_MinionTypeBase2690101217.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SeekerMinion
struct  SeekerMinion_t2854528539  : public MinionTypeBase_t2690101217
{
public:
	// UnityEngine.LayerMask SeekerMinion::seekLayers
	LayerMask_t1862190090  ___seekLayers_6;
	// UnityEngine.Transform SeekerMinion::_target
	Transform_t284553113 * ____target_7;
	// UnityEngine.Transform SeekerMinion::_cachedTransform
	Transform_t284553113 * ____cachedTransform_8;
	// MinionBaseVehicle SeekerMinion::_cachedVehicle
	MinionBaseVehicle_t3259673765 * ____cachedVehicle_9;
	// UnityEngine.Vector3 SeekerMinion::lastDirection
	Vector3_t3525329789  ___lastDirection_10;
	// System.Single SeekerMinion::launchElapsed
	float ___launchElapsed_11;
	// System.Single SeekerMinion::launchWait
	float ___launchWait_12;
	// System.Boolean SeekerMinion::keepFollowing
	bool ___keepFollowing_13;

public:
	inline static int32_t get_offset_of_seekLayers_6() { return static_cast<int32_t>(offsetof(SeekerMinion_t2854528539, ___seekLayers_6)); }
	inline LayerMask_t1862190090  get_seekLayers_6() const { return ___seekLayers_6; }
	inline LayerMask_t1862190090 * get_address_of_seekLayers_6() { return &___seekLayers_6; }
	inline void set_seekLayers_6(LayerMask_t1862190090  value)
	{
		___seekLayers_6 = value;
	}

	inline static int32_t get_offset_of__target_7() { return static_cast<int32_t>(offsetof(SeekerMinion_t2854528539, ____target_7)); }
	inline Transform_t284553113 * get__target_7() const { return ____target_7; }
	inline Transform_t284553113 ** get_address_of__target_7() { return &____target_7; }
	inline void set__target_7(Transform_t284553113 * value)
	{
		____target_7 = value;
		Il2CppCodeGenWriteBarrier(&____target_7, value);
	}

	inline static int32_t get_offset_of__cachedTransform_8() { return static_cast<int32_t>(offsetof(SeekerMinion_t2854528539, ____cachedTransform_8)); }
	inline Transform_t284553113 * get__cachedTransform_8() const { return ____cachedTransform_8; }
	inline Transform_t284553113 ** get_address_of__cachedTransform_8() { return &____cachedTransform_8; }
	inline void set__cachedTransform_8(Transform_t284553113 * value)
	{
		____cachedTransform_8 = value;
		Il2CppCodeGenWriteBarrier(&____cachedTransform_8, value);
	}

	inline static int32_t get_offset_of__cachedVehicle_9() { return static_cast<int32_t>(offsetof(SeekerMinion_t2854528539, ____cachedVehicle_9)); }
	inline MinionBaseVehicle_t3259673765 * get__cachedVehicle_9() const { return ____cachedVehicle_9; }
	inline MinionBaseVehicle_t3259673765 ** get_address_of__cachedVehicle_9() { return &____cachedVehicle_9; }
	inline void set__cachedVehicle_9(MinionBaseVehicle_t3259673765 * value)
	{
		____cachedVehicle_9 = value;
		Il2CppCodeGenWriteBarrier(&____cachedVehicle_9, value);
	}

	inline static int32_t get_offset_of_lastDirection_10() { return static_cast<int32_t>(offsetof(SeekerMinion_t2854528539, ___lastDirection_10)); }
	inline Vector3_t3525329789  get_lastDirection_10() const { return ___lastDirection_10; }
	inline Vector3_t3525329789 * get_address_of_lastDirection_10() { return &___lastDirection_10; }
	inline void set_lastDirection_10(Vector3_t3525329789  value)
	{
		___lastDirection_10 = value;
	}

	inline static int32_t get_offset_of_launchElapsed_11() { return static_cast<int32_t>(offsetof(SeekerMinion_t2854528539, ___launchElapsed_11)); }
	inline float get_launchElapsed_11() const { return ___launchElapsed_11; }
	inline float* get_address_of_launchElapsed_11() { return &___launchElapsed_11; }
	inline void set_launchElapsed_11(float value)
	{
		___launchElapsed_11 = value;
	}

	inline static int32_t get_offset_of_launchWait_12() { return static_cast<int32_t>(offsetof(SeekerMinion_t2854528539, ___launchWait_12)); }
	inline float get_launchWait_12() const { return ___launchWait_12; }
	inline float* get_address_of_launchWait_12() { return &___launchWait_12; }
	inline void set_launchWait_12(float value)
	{
		___launchWait_12 = value;
	}

	inline static int32_t get_offset_of_keepFollowing_13() { return static_cast<int32_t>(offsetof(SeekerMinion_t2854528539, ___keepFollowing_13)); }
	inline bool get_keepFollowing_13() const { return ___keepFollowing_13; }
	inline bool* get_address_of_keepFollowing_13() { return &___keepFollowing_13; }
	inline void set_keepFollowing_13(bool value)
	{
		___keepFollowing_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
