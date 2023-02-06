#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityThreading.DispatcherBase
struct DispatcherBase_t1034334729;
// System.Action`1<UnityThreading.Task>
struct Action_1_t3220363991;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityThreading.TaskExtension/<WhenSucceeded>c__AnonStorey96
struct  U3CWhenSucceededU3Ec__AnonStorey96_t2680458833  : public Il2CppObject
{
public:
	// UnityThreading.DispatcherBase UnityThreading.TaskExtension/<WhenSucceeded>c__AnonStorey96::actiontargetTarget
	DispatcherBase_t1034334729 * ___actiontargetTarget_0;
	// System.Action`1<UnityThreading.Task> UnityThreading.TaskExtension/<WhenSucceeded>c__AnonStorey96::action
	Action_1_t3220363991 * ___action_1;
	// System.Action`1<UnityThreading.Task> UnityThreading.TaskExtension/<WhenSucceeded>c__AnonStorey96::perform
	Action_1_t3220363991 * ___perform_2;

public:
	inline static int32_t get_offset_of_actiontargetTarget_0() { return static_cast<int32_t>(offsetof(U3CWhenSucceededU3Ec__AnonStorey96_t2680458833, ___actiontargetTarget_0)); }
	inline DispatcherBase_t1034334729 * get_actiontargetTarget_0() const { return ___actiontargetTarget_0; }
	inline DispatcherBase_t1034334729 ** get_address_of_actiontargetTarget_0() { return &___actiontargetTarget_0; }
	inline void set_actiontargetTarget_0(DispatcherBase_t1034334729 * value)
	{
		___actiontargetTarget_0 = value;
		Il2CppCodeGenWriteBarrier(&___actiontargetTarget_0, value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(U3CWhenSucceededU3Ec__AnonStorey96_t2680458833, ___action_1)); }
	inline Action_1_t3220363991 * get_action_1() const { return ___action_1; }
	inline Action_1_t3220363991 ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(Action_1_t3220363991 * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier(&___action_1, value);
	}

	inline static int32_t get_offset_of_perform_2() { return static_cast<int32_t>(offsetof(U3CWhenSucceededU3Ec__AnonStorey96_t2680458833, ___perform_2)); }
	inline Action_1_t3220363991 * get_perform_2() const { return ___perform_2; }
	inline Action_1_t3220363991 ** get_address_of_perform_2() { return &___perform_2; }
	inline void set_perform_2(Action_1_t3220363991 * value)
	{
		___perform_2 = value;
		Il2CppCodeGenWriteBarrier(&___perform_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
