#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`1<System.Collections.IEnumerator>
struct Func_1_t1429988286;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityThreadHelper/<CreateThread>c__AnonStoreyAD
struct  U3CCreateThreadU3Ec__AnonStoreyAD_t3149439086  : public Il2CppObject
{
public:
	// System.Func`1<System.Collections.IEnumerator> UnityThreadHelper/<CreateThread>c__AnonStoreyAD::action
	Func_1_t1429988286 * ___action_0;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CCreateThreadU3Ec__AnonStoreyAD_t3149439086, ___action_0)); }
	inline Func_1_t1429988286 * get_action_0() const { return ___action_0; }
	inline Func_1_t1429988286 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(Func_1_t1429988286 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier(&___action_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
