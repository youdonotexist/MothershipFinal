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

// MA_EnemyOne
struct  MA_EnemyOne_t1107618857  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject MA_EnemyOne::ExplosionParticlePrefab
	GameObject_t4012695102 * ___ExplosionParticlePrefab_2;
	// UnityEngine.Transform MA_EnemyOne::trans
	Transform_t284553113 * ___trans_3;
	// System.Single MA_EnemyOne::speed
	float ___speed_4;
	// System.Single MA_EnemyOne::horizSpeed
	float ___horizSpeed_5;

public:
	inline static int32_t get_offset_of_ExplosionParticlePrefab_2() { return static_cast<int32_t>(offsetof(MA_EnemyOne_t1107618857, ___ExplosionParticlePrefab_2)); }
	inline GameObject_t4012695102 * get_ExplosionParticlePrefab_2() const { return ___ExplosionParticlePrefab_2; }
	inline GameObject_t4012695102 ** get_address_of_ExplosionParticlePrefab_2() { return &___ExplosionParticlePrefab_2; }
	inline void set_ExplosionParticlePrefab_2(GameObject_t4012695102 * value)
	{
		___ExplosionParticlePrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___ExplosionParticlePrefab_2, value);
	}

	inline static int32_t get_offset_of_trans_3() { return static_cast<int32_t>(offsetof(MA_EnemyOne_t1107618857, ___trans_3)); }
	inline Transform_t284553113 * get_trans_3() const { return ___trans_3; }
	inline Transform_t284553113 ** get_address_of_trans_3() { return &___trans_3; }
	inline void set_trans_3(Transform_t284553113 * value)
	{
		___trans_3 = value;
		Il2CppCodeGenWriteBarrier(&___trans_3, value);
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(MA_EnemyOne_t1107618857, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_horizSpeed_5() { return static_cast<int32_t>(offsetof(MA_EnemyOne_t1107618857, ___horizSpeed_5)); }
	inline float get_horizSpeed_5() const { return ___horizSpeed_5; }
	inline float* get_address_of_horizSpeed_5() { return &___horizSpeed_5; }
	inline void set_horizSpeed_5(float value)
	{
		___horizSpeed_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
