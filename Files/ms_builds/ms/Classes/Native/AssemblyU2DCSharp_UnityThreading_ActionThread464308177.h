#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<UnityThreading.ActionThread>
struct Action_1_t612760882;

#include "AssemblyU2DCSharp_UnityThreading_ThreadBase3877260268.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityThreading.ActionThread
struct  ActionThread_t464308177  : public ThreadBase_t3877260268
{
public:
	// System.Action`1<UnityThreading.ActionThread> UnityThreading.ActionThread::action
	Action_1_t612760882 * ___action_5;

public:
	inline static int32_t get_offset_of_action_5() { return static_cast<int32_t>(offsetof(ActionThread_t464308177, ___action_5)); }
	inline Action_1_t612760882 * get_action_5() const { return ___action_5; }
	inline Action_1_t612760882 ** get_address_of_action_5() { return &___action_5; }
	inline void set_action_5(Action_1_t612760882 * value)
	{
		___action_5 = value;
		Il2CppCodeGenWriteBarrier(&___action_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
