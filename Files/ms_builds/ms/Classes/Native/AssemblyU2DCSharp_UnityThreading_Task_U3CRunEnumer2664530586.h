#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityThreading.Task
struct Task_t3071911286;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityThreading.Task/<RunEnumerator>c__AnonStorey86
struct  U3CRunEnumeratorU3Ec__AnonStorey86_t2664530586  : public Il2CppObject
{
public:
	// System.Collections.IEnumerator UnityThreading.Task/<RunEnumerator>c__AnonStorey86::enumerator
	Il2CppObject * ___enumerator_0;
	// UnityThreading.Task UnityThreading.Task/<RunEnumerator>c__AnonStorey86::<>f__this
	Task_t3071911286 * ___U3CU3Ef__this_1;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(U3CRunEnumeratorU3Ec__AnonStorey86_t2664530586, ___enumerator_0)); }
	inline Il2CppObject * get_enumerator_0() const { return ___enumerator_0; }
	inline Il2CppObject ** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(Il2CppObject * value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier(&___enumerator_0, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_1() { return static_cast<int32_t>(offsetof(U3CRunEnumeratorU3Ec__AnonStorey86_t2664530586, ___U3CU3Ef__this_1)); }
	inline Task_t3071911286 * get_U3CU3Ef__this_1() const { return ___U3CU3Ef__this_1; }
	inline Task_t3071911286 ** get_address_of_U3CU3Ef__this_1() { return &___U3CU3Ef__this_1; }
	inline void set_U3CU3Ef__this_1(Task_t3071911286 * value)
	{
		___U3CU3Ef__this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
