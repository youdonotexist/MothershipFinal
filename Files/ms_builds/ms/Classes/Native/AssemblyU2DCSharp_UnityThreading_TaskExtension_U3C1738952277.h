#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityThreading.Task
struct Task_t3071911286;
// UnityThreading.DispatcherBase
struct DispatcherBase_t1034334729;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityThreading.TaskExtension/<Then>c__AnonStoreyA4
struct  U3CThenU3Ec__AnonStoreyA4_t1738952277  : public Il2CppObject
{
public:
	// UnityThreading.Task UnityThreading.TaskExtension/<Then>c__AnonStoreyA4::followingTask
	Task_t3071911286 * ___followingTask_0;
	// UnityThreading.DispatcherBase UnityThreading.TaskExtension/<Then>c__AnonStoreyA4::target
	DispatcherBase_t1034334729 * ___target_1;

public:
	inline static int32_t get_offset_of_followingTask_0() { return static_cast<int32_t>(offsetof(U3CThenU3Ec__AnonStoreyA4_t1738952277, ___followingTask_0)); }
	inline Task_t3071911286 * get_followingTask_0() const { return ___followingTask_0; }
	inline Task_t3071911286 ** get_address_of_followingTask_0() { return &___followingTask_0; }
	inline void set_followingTask_0(Task_t3071911286 * value)
	{
		___followingTask_0 = value;
		Il2CppCodeGenWriteBarrier(&___followingTask_0, value);
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(U3CThenU3Ec__AnonStoreyA4_t1738952277, ___target_1)); }
	inline DispatcherBase_t1034334729 * get_target_1() const { return ___target_1; }
	inline DispatcherBase_t1034334729 ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(DispatcherBase_t1034334729 * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier(&___target_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
