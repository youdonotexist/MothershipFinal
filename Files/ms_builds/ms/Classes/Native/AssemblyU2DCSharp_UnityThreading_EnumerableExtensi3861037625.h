#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`2<System.Object,UnityThreading.Task/Unit>
struct Func_2_t1301318248;
// UnityThreading.TaskDistributor
struct TaskDistributor_t3607791827;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityThreading.EnumerableExtension/<SequentialForEach>c__AnonStorey84`2<UnityThreading.Task/Unit,System.Object>
struct  U3CSequentialForEachU3Ec__AnonStorey84_2_t3861037625  : public Il2CppObject
{
public:
	// System.Func`2<T,TResult> UnityThreading.EnumerableExtension/<SequentialForEach>c__AnonStorey84`2::action
	Func_2_t1301318248 * ___action_0;
	// UnityThreading.TaskDistributor UnityThreading.EnumerableExtension/<SequentialForEach>c__AnonStorey84`2::target
	TaskDistributor_t3607791827 * ___target_1;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CSequentialForEachU3Ec__AnonStorey84_2_t3861037625, ___action_0)); }
	inline Func_2_t1301318248 * get_action_0() const { return ___action_0; }
	inline Func_2_t1301318248 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(Func_2_t1301318248 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier(&___action_0, value);
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(U3CSequentialForEachU3Ec__AnonStorey84_2_t3861037625, ___target_1)); }
	inline TaskDistributor_t3607791827 * get_target_1() const { return ___target_1; }
	inline TaskDistributor_t3607791827 ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(TaskDistributor_t3607791827 * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier(&___target_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
