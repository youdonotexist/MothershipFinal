﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t437523947;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityThreading.TaskExtension/<WhenSucceeded>c__AnonStorey94
struct  U3CWhenSucceededU3Ec__AnonStorey94_t2680458831  : public Il2CppObject
{
public:
	// System.Action UnityThreading.TaskExtension/<WhenSucceeded>c__AnonStorey94::action
	Action_t437523947 * ___action_0;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CWhenSucceededU3Ec__AnonStorey94_t2680458831, ___action_0)); }
	inline Action_t437523947 * get_action_0() const { return ___action_0; }
	inline Action_t437523947 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(Action_t437523947 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier(&___action_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
