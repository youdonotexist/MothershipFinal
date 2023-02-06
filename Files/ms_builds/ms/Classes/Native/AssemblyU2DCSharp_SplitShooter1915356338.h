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

// SplitShooter
struct  SplitShooter_t1915356338  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject SplitShooter::splitPrefab
	GameObject_t4012695102 * ___splitPrefab_2;
	// UnityEngine.GameObject SplitShooter::shooterTop
	GameObject_t4012695102 * ___shooterTop_3;
	// UnityEngine.GameObject SplitShooter::shooterBottom
	GameObject_t4012695102 * ___shooterBottom_4;

public:
	inline static int32_t get_offset_of_splitPrefab_2() { return static_cast<int32_t>(offsetof(SplitShooter_t1915356338, ___splitPrefab_2)); }
	inline GameObject_t4012695102 * get_splitPrefab_2() const { return ___splitPrefab_2; }
	inline GameObject_t4012695102 ** get_address_of_splitPrefab_2() { return &___splitPrefab_2; }
	inline void set_splitPrefab_2(GameObject_t4012695102 * value)
	{
		___splitPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___splitPrefab_2, value);
	}

	inline static int32_t get_offset_of_shooterTop_3() { return static_cast<int32_t>(offsetof(SplitShooter_t1915356338, ___shooterTop_3)); }
	inline GameObject_t4012695102 * get_shooterTop_3() const { return ___shooterTop_3; }
	inline GameObject_t4012695102 ** get_address_of_shooterTop_3() { return &___shooterTop_3; }
	inline void set_shooterTop_3(GameObject_t4012695102 * value)
	{
		___shooterTop_3 = value;
		Il2CppCodeGenWriteBarrier(&___shooterTop_3, value);
	}

	inline static int32_t get_offset_of_shooterBottom_4() { return static_cast<int32_t>(offsetof(SplitShooter_t1915356338, ___shooterBottom_4)); }
	inline GameObject_t4012695102 * get_shooterBottom_4() const { return ___shooterBottom_4; }
	inline GameObject_t4012695102 ** get_address_of_shooterBottom_4() { return &___shooterBottom_4; }
	inline void set_shooterBottom_4(GameObject_t4012695102 * value)
	{
		___shooterBottom_4 = value;
		Il2CppCodeGenWriteBarrier(&___shooterBottom_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
