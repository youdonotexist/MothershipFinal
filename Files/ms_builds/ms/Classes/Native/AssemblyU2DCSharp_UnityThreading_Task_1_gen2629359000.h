#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`2<UnityThreading.Task,UnityThreading.Task/Unit>
struct Func_2_t2814503838;

#include "AssemblyU2DCSharp_UnityThreading_Task3071911286.h"
#include "AssemblyU2DCSharp_UnityThreading_Task_Unit2641316.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityThreading.Task`1<UnityThreading.Task/Unit>
struct  Task_1_t2629359000  : public Task_t3071911286
{
public:
	// System.Func`2<UnityThreading.Task,T> UnityThreading.Task`1::function
	Func_2_t2814503838 * ___function_8;
	// T UnityThreading.Task`1::result
	Unit_t2641317  ___result_9;

public:
	inline static int32_t get_offset_of_function_8() { return static_cast<int32_t>(offsetof(Task_1_t2629359000, ___function_8)); }
	inline Func_2_t2814503838 * get_function_8() const { return ___function_8; }
	inline Func_2_t2814503838 ** get_address_of_function_8() { return &___function_8; }
	inline void set_function_8(Func_2_t2814503838 * value)
	{
		___function_8 = value;
		Il2CppCodeGenWriteBarrier(&___function_8, value);
	}

	inline static int32_t get_offset_of_result_9() { return static_cast<int32_t>(offsetof(Task_1_t2629359000, ___result_9)); }
	inline Unit_t2641317  get_result_9() const { return ___result_9; }
	inline Unit_t2641317 * get_address_of_result_9() { return &___result_9; }
	inline void set_result_9(Unit_t2641317  value)
	{
		___result_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
