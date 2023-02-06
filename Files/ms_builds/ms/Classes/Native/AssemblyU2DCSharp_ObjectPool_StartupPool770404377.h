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

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectPool/StartupPool
struct  StartupPool_t770404377  : public Il2CppObject
{
public:
	// System.Int32 ObjectPool/StartupPool::size
	int32_t ___size_0;
	// UnityEngine.GameObject ObjectPool/StartupPool::prefab
	GameObject_t4012695102 * ___prefab_1;

public:
	inline static int32_t get_offset_of_size_0() { return static_cast<int32_t>(offsetof(StartupPool_t770404377, ___size_0)); }
	inline int32_t get_size_0() const { return ___size_0; }
	inline int32_t* get_address_of_size_0() { return &___size_0; }
	inline void set_size_0(int32_t value)
	{
		___size_0 = value;
	}

	inline static int32_t get_offset_of_prefab_1() { return static_cast<int32_t>(offsetof(StartupPool_t770404377, ___prefab_1)); }
	inline GameObject_t4012695102 * get_prefab_1() const { return ___prefab_1; }
	inline GameObject_t4012695102 ** get_address_of_prefab_1() { return &___prefab_1; }
	inline void set_prefab_1(GameObject_t4012695102 * value)
	{
		___prefab_1 = value;
		Il2CppCodeGenWriteBarrier(&___prefab_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
