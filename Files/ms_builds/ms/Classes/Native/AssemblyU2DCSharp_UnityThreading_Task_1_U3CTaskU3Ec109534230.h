#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t11523773;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityThreading.Task`1/<Task>c__AnonStorey8C<UnityThreading.Task/Unit>
struct  U3CTaskU3Ec__AnonStorey8C_t109534230  : public Il2CppObject
{
public:
	// System.Reflection.MethodInfo UnityThreading.Task`1/<Task>c__AnonStorey8C::methodInfo
	MethodInfo_t * ___methodInfo_0;
	// System.Object UnityThreading.Task`1/<Task>c__AnonStorey8C::that
	Il2CppObject * ___that_1;
	// System.Object[] UnityThreading.Task`1/<Task>c__AnonStorey8C::args
	ObjectU5BU5D_t11523773* ___args_2;

public:
	inline static int32_t get_offset_of_methodInfo_0() { return static_cast<int32_t>(offsetof(U3CTaskU3Ec__AnonStorey8C_t109534230, ___methodInfo_0)); }
	inline MethodInfo_t * get_methodInfo_0() const { return ___methodInfo_0; }
	inline MethodInfo_t ** get_address_of_methodInfo_0() { return &___methodInfo_0; }
	inline void set_methodInfo_0(MethodInfo_t * value)
	{
		___methodInfo_0 = value;
		Il2CppCodeGenWriteBarrier(&___methodInfo_0, value);
	}

	inline static int32_t get_offset_of_that_1() { return static_cast<int32_t>(offsetof(U3CTaskU3Ec__AnonStorey8C_t109534230, ___that_1)); }
	inline Il2CppObject * get_that_1() const { return ___that_1; }
	inline Il2CppObject ** get_address_of_that_1() { return &___that_1; }
	inline void set_that_1(Il2CppObject * value)
	{
		___that_1 = value;
		Il2CppCodeGenWriteBarrier(&___that_1, value);
	}

	inline static int32_t get_offset_of_args_2() { return static_cast<int32_t>(offsetof(U3CTaskU3Ec__AnonStorey8C_t109534230, ___args_2)); }
	inline ObjectU5BU5D_t11523773* get_args_2() const { return ___args_2; }
	inline ObjectU5BU5D_t11523773** get_address_of_args_2() { return &___args_2; }
	inline void set_args_2(ObjectU5BU5D_t11523773* value)
	{
		___args_2 = value;
		Il2CppCodeGenWriteBarrier(&___args_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
