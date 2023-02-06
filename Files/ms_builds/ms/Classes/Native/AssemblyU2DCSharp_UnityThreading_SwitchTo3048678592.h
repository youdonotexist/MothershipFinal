#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityThreading.SwitchTo
struct SwitchTo_t3048678592;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_UnityThreading_SwitchTo_TargetTy2480087179.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityThreading.SwitchTo
struct  SwitchTo_t3048678592  : public Il2CppObject
{
public:
	// UnityThreading.SwitchTo/TargetType UnityThreading.SwitchTo::<Target>k__BackingField
	int32_t ___U3CTargetU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CTargetU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SwitchTo_t3048678592, ___U3CTargetU3Ek__BackingField_2)); }
	inline int32_t get_U3CTargetU3Ek__BackingField_2() const { return ___U3CTargetU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CTargetU3Ek__BackingField_2() { return &___U3CTargetU3Ek__BackingField_2; }
	inline void set_U3CTargetU3Ek__BackingField_2(int32_t value)
	{
		___U3CTargetU3Ek__BackingField_2 = value;
	}
};

struct SwitchTo_t3048678592_StaticFields
{
public:
	// UnityThreading.SwitchTo UnityThreading.SwitchTo::MainThread
	SwitchTo_t3048678592 * ___MainThread_0;
	// UnityThreading.SwitchTo UnityThreading.SwitchTo::Thread
	SwitchTo_t3048678592 * ___Thread_1;

public:
	inline static int32_t get_offset_of_MainThread_0() { return static_cast<int32_t>(offsetof(SwitchTo_t3048678592_StaticFields, ___MainThread_0)); }
	inline SwitchTo_t3048678592 * get_MainThread_0() const { return ___MainThread_0; }
	inline SwitchTo_t3048678592 ** get_address_of_MainThread_0() { return &___MainThread_0; }
	inline void set_MainThread_0(SwitchTo_t3048678592 * value)
	{
		___MainThread_0 = value;
		Il2CppCodeGenWriteBarrier(&___MainThread_0, value);
	}

	inline static int32_t get_offset_of_Thread_1() { return static_cast<int32_t>(offsetof(SwitchTo_t3048678592_StaticFields, ___Thread_1)); }
	inline SwitchTo_t3048678592 * get_Thread_1() const { return ___Thread_1; }
	inline SwitchTo_t3048678592 ** get_address_of_Thread_1() { return &___Thread_1; }
	inline void set_Thread_1(SwitchTo_t3048678592 * value)
	{
		___Thread_1 = value;
		Il2CppCodeGenWriteBarrier(&___Thread_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
