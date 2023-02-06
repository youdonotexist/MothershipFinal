#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`2<UnityThreading.ThreadBase,System.Collections.IEnumerator>
struct Func_2_t2849578859;

#include "AssemblyU2DCSharp_UnityThreading_ThreadBase3877260268.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityThreading.EnumeratableActionThread
struct  EnumeratableActionThread_t69580396  : public ThreadBase_t3877260268
{
public:
	// System.Func`2<UnityThreading.ThreadBase,System.Collections.IEnumerator> UnityThreading.EnumeratableActionThread::enumeratableAction
	Func_2_t2849578859 * ___enumeratableAction_5;

public:
	inline static int32_t get_offset_of_enumeratableAction_5() { return static_cast<int32_t>(offsetof(EnumeratableActionThread_t69580396, ___enumeratableAction_5)); }
	inline Func_2_t2849578859 * get_enumeratableAction_5() const { return ___enumeratableAction_5; }
	inline Func_2_t2849578859 ** get_address_of_enumeratableAction_5() { return &___enumeratableAction_5; }
	inline void set_enumeratableAction_5(Func_2_t2849578859 * value)
	{
		___enumeratableAction_5 = value;
		Il2CppCodeGenWriteBarrier(&___enumeratableAction_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
