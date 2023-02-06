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

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityThreadHelper/<CreateThread>c__AnonStoreyAA
struct  U3CCreateThreadU3Ec__AnonStoreyAA_t3149439083  : public Il2CppObject
{
public:
	// System.Action`1<UnityThreading.ActionThread> UnityThreadHelper/<CreateThread>c__AnonStoreyAA::action
	Action_1_t612760882 * ___action_0;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CCreateThreadU3Ec__AnonStoreyAA_t3149439083, ___action_0)); }
	inline Action_1_t612760882 * get_action_0() const { return ___action_0; }
	inline Action_1_t612760882 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(Action_1_t612760882 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier(&___action_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
