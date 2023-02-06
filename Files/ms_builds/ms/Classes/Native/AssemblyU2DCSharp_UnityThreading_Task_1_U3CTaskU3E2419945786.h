#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`1<System.Object>
struct Func_1_t1979887667;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityThreading.Task`1/<Task>c__AnonStorey87<System.Object>
struct  U3CTaskU3Ec__AnonStorey87_t2419945786  : public Il2CppObject
{
public:
	// System.Func`1<T> UnityThreading.Task`1/<Task>c__AnonStorey87::function
	Func_1_t1979887667 * ___function_0;

public:
	inline static int32_t get_offset_of_function_0() { return static_cast<int32_t>(offsetof(U3CTaskU3Ec__AnonStorey87_t2419945786, ___function_0)); }
	inline Func_1_t1979887667 * get_function_0() const { return ___function_0; }
	inline Func_1_t1979887667 ** get_address_of_function_0() { return &___function_0; }
	inline void set_function_0(Func_1_t1979887667 * value)
	{
		___function_0 = value;
		Il2CppCodeGenWriteBarrier(&___function_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
