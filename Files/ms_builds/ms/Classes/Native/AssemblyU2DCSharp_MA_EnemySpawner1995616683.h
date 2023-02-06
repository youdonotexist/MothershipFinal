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
// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MA_EnemySpawner
struct  MA_EnemySpawner_t1995616683  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject MA_EnemySpawner::Enemy
	GameObject_t4012695102 * ___Enemy_2;
	// System.Boolean MA_EnemySpawner::spawnerEnabled
	bool ___spawnerEnabled_3;
	// UnityEngine.Transform MA_EnemySpawner::trans
	Transform_t284553113 * ___trans_4;
	// System.Single MA_EnemySpawner::nextSpawnTime
	float ___nextSpawnTime_5;

public:
	inline static int32_t get_offset_of_Enemy_2() { return static_cast<int32_t>(offsetof(MA_EnemySpawner_t1995616683, ___Enemy_2)); }
	inline GameObject_t4012695102 * get_Enemy_2() const { return ___Enemy_2; }
	inline GameObject_t4012695102 ** get_address_of_Enemy_2() { return &___Enemy_2; }
	inline void set_Enemy_2(GameObject_t4012695102 * value)
	{
		___Enemy_2 = value;
		Il2CppCodeGenWriteBarrier(&___Enemy_2, value);
	}

	inline static int32_t get_offset_of_spawnerEnabled_3() { return static_cast<int32_t>(offsetof(MA_EnemySpawner_t1995616683, ___spawnerEnabled_3)); }
	inline bool get_spawnerEnabled_3() const { return ___spawnerEnabled_3; }
	inline bool* get_address_of_spawnerEnabled_3() { return &___spawnerEnabled_3; }
	inline void set_spawnerEnabled_3(bool value)
	{
		___spawnerEnabled_3 = value;
	}

	inline static int32_t get_offset_of_trans_4() { return static_cast<int32_t>(offsetof(MA_EnemySpawner_t1995616683, ___trans_4)); }
	inline Transform_t284553113 * get_trans_4() const { return ___trans_4; }
	inline Transform_t284553113 ** get_address_of_trans_4() { return &___trans_4; }
	inline void set_trans_4(Transform_t284553113 * value)
	{
		___trans_4 = value;
		Il2CppCodeGenWriteBarrier(&___trans_4, value);
	}

	inline static int32_t get_offset_of_nextSpawnTime_5() { return static_cast<int32_t>(offsetof(MA_EnemySpawner_t1995616683, ___nextSpawnTime_5)); }
	inline float get_nextSpawnTime_5() const { return ___nextSpawnTime_5; }
	inline float* get_address_of_nextSpawnTime_5() { return &___nextSpawnTime_5; }
	inline void set_nextSpawnTime_5(float value)
	{
		___nextSpawnTime_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
