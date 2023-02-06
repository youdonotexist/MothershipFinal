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

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityThreading.EnumerableExtension/<ParallelForEach>c__AnonStorey81`2<UnityThreading.Task/Unit,System.Object>
struct  U3CParallelForEachU3Ec__AnonStorey81_2_t259947768  : public Il2CppObject
{
public:
	// System.Func`2<T,TResult> UnityThreading.EnumerableExtension/<ParallelForEach>c__AnonStorey81`2::action
	Func_2_t1301318248 * ___action_0;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CParallelForEachU3Ec__AnonStorey81_2_t259947768, ___action_0)); }
	inline Func_2_t1301318248 * get_action_0() const { return ___action_0; }
	inline Func_2_t1301318248 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(Func_2_t1301318248 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier(&___action_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
