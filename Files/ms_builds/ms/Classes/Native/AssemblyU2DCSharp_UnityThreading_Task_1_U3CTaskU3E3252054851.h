#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<UnityThreading.Task>
struct Action_1_t3220363991;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityThreading.Task`1/<Task>c__AnonStorey88<UnityThreading.Task/Unit>
struct  U3CTaskU3Ec__AnonStorey88_t3252054851  : public Il2CppObject
{
public:
	// System.Action`1<UnityThreading.Task> UnityThreading.Task`1/<Task>c__AnonStorey88::action
	Action_1_t3220363991 * ___action_0;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CTaskU3Ec__AnonStorey88_t3252054851, ___action_0)); }
	inline Action_1_t3220363991 * get_action_0() const { return ___action_0; }
	inline Action_1_t3220363991 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(Action_1_t3220363991 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier(&___action_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
