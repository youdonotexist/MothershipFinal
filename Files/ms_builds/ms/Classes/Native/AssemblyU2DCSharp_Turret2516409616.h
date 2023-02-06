#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Bullet
struct Bullet_t2000900386;
// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Turret
struct  Turret_t2516409616  : public MonoBehaviour_t3012272455
{
public:
	// Bullet Turret::bulletPrefab
	Bullet_t2000900386 * ___bulletPrefab_2;
	// UnityEngine.Transform Turret::gun
	Transform_t284553113 * ___gun_3;

public:
	inline static int32_t get_offset_of_bulletPrefab_2() { return static_cast<int32_t>(offsetof(Turret_t2516409616, ___bulletPrefab_2)); }
	inline Bullet_t2000900386 * get_bulletPrefab_2() const { return ___bulletPrefab_2; }
	inline Bullet_t2000900386 ** get_address_of_bulletPrefab_2() { return &___bulletPrefab_2; }
	inline void set_bulletPrefab_2(Bullet_t2000900386 * value)
	{
		___bulletPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___bulletPrefab_2, value);
	}

	inline static int32_t get_offset_of_gun_3() { return static_cast<int32_t>(offsetof(Turret_t2516409616, ___gun_3)); }
	inline Transform_t284553113 * get_gun_3() const { return ___gun_3; }
	inline Transform_t284553113 ** get_address_of_gun_3() { return &___gun_3; }
	inline void set_gun_3(Transform_t284553113 * value)
	{
		___gun_3 = value;
		Il2CppCodeGenWriteBarrier(&___gun_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
