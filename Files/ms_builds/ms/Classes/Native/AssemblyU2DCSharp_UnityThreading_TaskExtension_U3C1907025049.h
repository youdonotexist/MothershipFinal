#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<System.Object>
struct Action_1_t985559125;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityThreading.TaskExtension/<OnResult>c__AnonStorey8F`1<System.Object>
struct  U3COnResultU3Ec__AnonStorey8F_1_t1907025049  : public Il2CppObject
{
public:
	// System.Action`1<T> UnityThreading.TaskExtension/<OnResult>c__AnonStorey8F`1::action
	Action_1_t985559125 * ___action_0;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3COnResultU3Ec__AnonStorey8F_1_t1907025049, ___action_0)); }
	inline Action_1_t985559125 * get_action_0() const { return ___action_0; }
	inline Action_1_t985559125 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(Action_1_t985559125 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier(&___action_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
