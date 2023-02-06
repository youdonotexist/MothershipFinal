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
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// Mine
struct Mine_t2398323;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_Gravity_GRAVITY_TYPE1093398187.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gravity
struct  Gravity_t1945176622  : public MonoBehaviour_t3012272455
{
public:
	// System.Single Gravity::power
	float ___power_2;
	// UnityEngine.Transform Gravity::target
	Transform_t284553113 * ___target_3;
	// UnityEngine.Rigidbody Gravity::_rigidBody
	Rigidbody_t1972007546 * ____rigidBody_4;
	// Mine Gravity::_mine
	Mine_t2398323 * ____mine_5;
	// Gravity/GRAVITY_TYPE Gravity::gravityType
	int32_t ___gravityType_6;

public:
	inline static int32_t get_offset_of_power_2() { return static_cast<int32_t>(offsetof(Gravity_t1945176622, ___power_2)); }
	inline float get_power_2() const { return ___power_2; }
	inline float* get_address_of_power_2() { return &___power_2; }
	inline void set_power_2(float value)
	{
		___power_2 = value;
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(Gravity_t1945176622, ___target_3)); }
	inline Transform_t284553113 * get_target_3() const { return ___target_3; }
	inline Transform_t284553113 ** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(Transform_t284553113 * value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier(&___target_3, value);
	}

	inline static int32_t get_offset_of__rigidBody_4() { return static_cast<int32_t>(offsetof(Gravity_t1945176622, ____rigidBody_4)); }
	inline Rigidbody_t1972007546 * get__rigidBody_4() const { return ____rigidBody_4; }
	inline Rigidbody_t1972007546 ** get_address_of__rigidBody_4() { return &____rigidBody_4; }
	inline void set__rigidBody_4(Rigidbody_t1972007546 * value)
	{
		____rigidBody_4 = value;
		Il2CppCodeGenWriteBarrier(&____rigidBody_4, value);
	}

	inline static int32_t get_offset_of__mine_5() { return static_cast<int32_t>(offsetof(Gravity_t1945176622, ____mine_5)); }
	inline Mine_t2398323 * get__mine_5() const { return ____mine_5; }
	inline Mine_t2398323 ** get_address_of__mine_5() { return &____mine_5; }
	inline void set__mine_5(Mine_t2398323 * value)
	{
		____mine_5 = value;
		Il2CppCodeGenWriteBarrier(&____mine_5, value);
	}

	inline static int32_t get_offset_of_gravityType_6() { return static_cast<int32_t>(offsetof(Gravity_t1945176622, ___gravityType_6)); }
	inline int32_t get_gravityType_6() const { return ___gravityType_6; }
	inline int32_t* get_address_of_gravityType_6() { return &___gravityType_6; }
	inline void set_gravityType_6(int32_t value)
	{
		___gravityType_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
