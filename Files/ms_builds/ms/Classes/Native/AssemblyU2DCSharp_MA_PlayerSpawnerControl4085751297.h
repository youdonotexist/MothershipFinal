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

// MA_PlayerSpawnerControl
struct  MA_PlayerSpawnerControl_t4085751297  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject MA_PlayerSpawnerControl::Player
	GameObject_t4012695102 * ___Player_2;
	// System.Single MA_PlayerSpawnerControl::nextSpawnTime
	float ___nextSpawnTime_3;

public:
	inline static int32_t get_offset_of_Player_2() { return static_cast<int32_t>(offsetof(MA_PlayerSpawnerControl_t4085751297, ___Player_2)); }
	inline GameObject_t4012695102 * get_Player_2() const { return ___Player_2; }
	inline GameObject_t4012695102 ** get_address_of_Player_2() { return &___Player_2; }
	inline void set_Player_2(GameObject_t4012695102 * value)
	{
		___Player_2 = value;
		Il2CppCodeGenWriteBarrier(&___Player_2, value);
	}

	inline static int32_t get_offset_of_nextSpawnTime_3() { return static_cast<int32_t>(offsetof(MA_PlayerSpawnerControl_t4085751297, ___nextSpawnTime_3)); }
	inline float get_nextSpawnTime_3() const { return ___nextSpawnTime_3; }
	inline float* get_address_of_nextSpawnTime_3() { return &___nextSpawnTime_3; }
	inline void set_nextSpawnTime_3(float value)
	{
		___nextSpawnTime_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
