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

// SpawnSwitcher
struct  SpawnSwitcher_t1596695388  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject SpawnSwitcher::nesObject
	GameObject_t4012695102 * ___nesObject_2;
	// UnityEngine.GameObject SpawnSwitcher::msObject
	GameObject_t4012695102 * ___msObject_3;
	// UnityEngine.GameObject SpawnSwitcher::snesObject
	GameObject_t4012695102 * ___snesObject_4;
	// UnityEngine.GameObject SpawnSwitcher::psObject
	GameObject_t4012695102 * ___psObject_5;

public:
	inline static int32_t get_offset_of_nesObject_2() { return static_cast<int32_t>(offsetof(SpawnSwitcher_t1596695388, ___nesObject_2)); }
	inline GameObject_t4012695102 * get_nesObject_2() const { return ___nesObject_2; }
	inline GameObject_t4012695102 ** get_address_of_nesObject_2() { return &___nesObject_2; }
	inline void set_nesObject_2(GameObject_t4012695102 * value)
	{
		___nesObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___nesObject_2, value);
	}

	inline static int32_t get_offset_of_msObject_3() { return static_cast<int32_t>(offsetof(SpawnSwitcher_t1596695388, ___msObject_3)); }
	inline GameObject_t4012695102 * get_msObject_3() const { return ___msObject_3; }
	inline GameObject_t4012695102 ** get_address_of_msObject_3() { return &___msObject_3; }
	inline void set_msObject_3(GameObject_t4012695102 * value)
	{
		___msObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___msObject_3, value);
	}

	inline static int32_t get_offset_of_snesObject_4() { return static_cast<int32_t>(offsetof(SpawnSwitcher_t1596695388, ___snesObject_4)); }
	inline GameObject_t4012695102 * get_snesObject_4() const { return ___snesObject_4; }
	inline GameObject_t4012695102 ** get_address_of_snesObject_4() { return &___snesObject_4; }
	inline void set_snesObject_4(GameObject_t4012695102 * value)
	{
		___snesObject_4 = value;
		Il2CppCodeGenWriteBarrier(&___snesObject_4, value);
	}

	inline static int32_t get_offset_of_psObject_5() { return static_cast<int32_t>(offsetof(SpawnSwitcher_t1596695388, ___psObject_5)); }
	inline GameObject_t4012695102 * get_psObject_5() const { return ___psObject_5; }
	inline GameObject_t4012695102 ** get_address_of_psObject_5() { return &___psObject_5; }
	inline void set_psObject_5(GameObject_t4012695102 * value)
	{
		___psObject_5 = value;
		Il2CppCodeGenWriteBarrier(&___psObject_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
