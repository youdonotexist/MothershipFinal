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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WorldSwipe
struct  WorldSwipe_t2440461032  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject WorldSwipe::worldContainer
	GameObject_t4012695102 * ___worldContainer_2;
	// System.Boolean WorldSwipe::down
	bool ___down_3;
	// System.Single WorldSwipe::velocity
	float ___velocity_4;

public:
	inline static int32_t get_offset_of_worldContainer_2() { return static_cast<int32_t>(offsetof(WorldSwipe_t2440461032, ___worldContainer_2)); }
	inline GameObject_t4012695102 * get_worldContainer_2() const { return ___worldContainer_2; }
	inline GameObject_t4012695102 ** get_address_of_worldContainer_2() { return &___worldContainer_2; }
	inline void set_worldContainer_2(GameObject_t4012695102 * value)
	{
		___worldContainer_2 = value;
		Il2CppCodeGenWriteBarrier(&___worldContainer_2, value);
	}

	inline static int32_t get_offset_of_down_3() { return static_cast<int32_t>(offsetof(WorldSwipe_t2440461032, ___down_3)); }
	inline bool get_down_3() const { return ___down_3; }
	inline bool* get_address_of_down_3() { return &___down_3; }
	inline void set_down_3(bool value)
	{
		___down_3 = value;
	}

	inline static int32_t get_offset_of_velocity_4() { return static_cast<int32_t>(offsetof(WorldSwipe_t2440461032, ___velocity_4)); }
	inline float get_velocity_4() const { return ___velocity_4; }
	inline float* get_address_of_velocity_4() { return &___velocity_4; }
	inline void set_velocity_4(float value)
	{
		___velocity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
