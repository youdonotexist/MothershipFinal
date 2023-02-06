#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Explosion
struct Explosion_t2337690357;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Bullet
struct  Bullet_t2000900386  : public MonoBehaviour_t3012272455
{
public:
	// Explosion Bullet::explosionPrefab
	Explosion_t2337690357 * ___explosionPrefab_2;
	// System.Single Bullet::shootDistance
	float ___shootDistance_3;
	// System.Single Bullet::shootSpeed
	float ___shootSpeed_4;

public:
	inline static int32_t get_offset_of_explosionPrefab_2() { return static_cast<int32_t>(offsetof(Bullet_t2000900386, ___explosionPrefab_2)); }
	inline Explosion_t2337690357 * get_explosionPrefab_2() const { return ___explosionPrefab_2; }
	inline Explosion_t2337690357 ** get_address_of_explosionPrefab_2() { return &___explosionPrefab_2; }
	inline void set_explosionPrefab_2(Explosion_t2337690357 * value)
	{
		___explosionPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___explosionPrefab_2, value);
	}

	inline static int32_t get_offset_of_shootDistance_3() { return static_cast<int32_t>(offsetof(Bullet_t2000900386, ___shootDistance_3)); }
	inline float get_shootDistance_3() const { return ___shootDistance_3; }
	inline float* get_address_of_shootDistance_3() { return &___shootDistance_3; }
	inline void set_shootDistance_3(float value)
	{
		___shootDistance_3 = value;
	}

	inline static int32_t get_offset_of_shootSpeed_4() { return static_cast<int32_t>(offsetof(Bullet_t2000900386, ___shootSpeed_4)); }
	inline float get_shootSpeed_4() const { return ___shootSpeed_4; }
	inline float* get_address_of_shootSpeed_4() { return &___shootSpeed_4; }
	inline void set_shootSpeed_4(float value)
	{
		___shootSpeed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
