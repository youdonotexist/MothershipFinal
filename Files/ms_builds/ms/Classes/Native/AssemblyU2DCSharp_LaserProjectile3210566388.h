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
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LaserProjectile
struct  LaserProjectile_t3210566388  : public MonoBehaviour_t3012272455
{
public:
	// System.Single LaserProjectile::damageAmt
	float ___damageAmt_2;
	// UnityEngine.Transform LaserProjectile::_muzzlePoint
	Transform_t284553113 * ____muzzlePoint_3;
	// UnityEngine.Vector3 LaserProjectile::fireForward
	Vector3_t3525329789  ___fireForward_4;
	// UnityEngine.GameObject LaserProjectile::_projectilePrefab
	GameObject_t4012695102 * ____projectilePrefab_5;

public:
	inline static int32_t get_offset_of_damageAmt_2() { return static_cast<int32_t>(offsetof(LaserProjectile_t3210566388, ___damageAmt_2)); }
	inline float get_damageAmt_2() const { return ___damageAmt_2; }
	inline float* get_address_of_damageAmt_2() { return &___damageAmt_2; }
	inline void set_damageAmt_2(float value)
	{
		___damageAmt_2 = value;
	}

	inline static int32_t get_offset_of__muzzlePoint_3() { return static_cast<int32_t>(offsetof(LaserProjectile_t3210566388, ____muzzlePoint_3)); }
	inline Transform_t284553113 * get__muzzlePoint_3() const { return ____muzzlePoint_3; }
	inline Transform_t284553113 ** get_address_of__muzzlePoint_3() { return &____muzzlePoint_3; }
	inline void set__muzzlePoint_3(Transform_t284553113 * value)
	{
		____muzzlePoint_3 = value;
		Il2CppCodeGenWriteBarrier(&____muzzlePoint_3, value);
	}

	inline static int32_t get_offset_of_fireForward_4() { return static_cast<int32_t>(offsetof(LaserProjectile_t3210566388, ___fireForward_4)); }
	inline Vector3_t3525329789  get_fireForward_4() const { return ___fireForward_4; }
	inline Vector3_t3525329789 * get_address_of_fireForward_4() { return &___fireForward_4; }
	inline void set_fireForward_4(Vector3_t3525329789  value)
	{
		___fireForward_4 = value;
	}

	inline static int32_t get_offset_of__projectilePrefab_5() { return static_cast<int32_t>(offsetof(LaserProjectile_t3210566388, ____projectilePrefab_5)); }
	inline GameObject_t4012695102 * get__projectilePrefab_5() const { return ____projectilePrefab_5; }
	inline GameObject_t4012695102 ** get_address_of__projectilePrefab_5() { return &____projectilePrefab_5; }
	inline void set__projectilePrefab_5(GameObject_t4012695102 * value)
	{
		____projectilePrefab_5 = value;
		Il2CppCodeGenWriteBarrier(&____projectilePrefab_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
