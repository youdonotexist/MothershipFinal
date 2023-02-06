#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityThreadHelper
struct UnityThreadHelper_t1984380493;
// UnityThreading.Dispatcher
struct Dispatcher_t3850236568;
// UnityThreading.TaskDistributor
struct TaskDistributor_t3607791827;
// System.Collections.Generic.List`1<UnityThreading.ThreadBase>
struct List_1_t379251941;
// System.Func`2<UnityThreading.ThreadBase,System.Boolean>
struct Func_2_t2773377161;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityThreadHelper
struct  UnityThreadHelper_t1984380493  : public MonoBehaviour_t3012272455
{
public:
	// UnityThreading.Dispatcher UnityThreadHelper::dispatcher
	Dispatcher_t3850236568 * ___dispatcher_3;
	// UnityThreading.TaskDistributor UnityThreadHelper::taskDistributor
	TaskDistributor_t3607791827 * ___taskDistributor_4;
	// System.Collections.Generic.List`1<UnityThreading.ThreadBase> UnityThreadHelper::registeredThreads
	List_1_t379251941 * ___registeredThreads_5;

public:
	inline static int32_t get_offset_of_dispatcher_3() { return static_cast<int32_t>(offsetof(UnityThreadHelper_t1984380493, ___dispatcher_3)); }
	inline Dispatcher_t3850236568 * get_dispatcher_3() const { return ___dispatcher_3; }
	inline Dispatcher_t3850236568 ** get_address_of_dispatcher_3() { return &___dispatcher_3; }
	inline void set_dispatcher_3(Dispatcher_t3850236568 * value)
	{
		___dispatcher_3 = value;
		Il2CppCodeGenWriteBarrier(&___dispatcher_3, value);
	}

	inline static int32_t get_offset_of_taskDistributor_4() { return static_cast<int32_t>(offsetof(UnityThreadHelper_t1984380493, ___taskDistributor_4)); }
	inline TaskDistributor_t3607791827 * get_taskDistributor_4() const { return ___taskDistributor_4; }
	inline TaskDistributor_t3607791827 ** get_address_of_taskDistributor_4() { return &___taskDistributor_4; }
	inline void set_taskDistributor_4(TaskDistributor_t3607791827 * value)
	{
		___taskDistributor_4 = value;
		Il2CppCodeGenWriteBarrier(&___taskDistributor_4, value);
	}

	inline static int32_t get_offset_of_registeredThreads_5() { return static_cast<int32_t>(offsetof(UnityThreadHelper_t1984380493, ___registeredThreads_5)); }
	inline List_1_t379251941 * get_registeredThreads_5() const { return ___registeredThreads_5; }
	inline List_1_t379251941 ** get_address_of_registeredThreads_5() { return &___registeredThreads_5; }
	inline void set_registeredThreads_5(List_1_t379251941 * value)
	{
		___registeredThreads_5 = value;
		Il2CppCodeGenWriteBarrier(&___registeredThreads_5, value);
	}
};

struct UnityThreadHelper_t1984380493_StaticFields
{
public:
	// UnityThreadHelper UnityThreadHelper::instance
	UnityThreadHelper_t1984380493 * ___instance_2;
	// System.Func`2<UnityThreading.ThreadBase,System.Boolean> UnityThreadHelper::<>f__am$cache4
	Func_2_t2773377161 * ___U3CU3Ef__amU24cache4_6;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(UnityThreadHelper_t1984380493_StaticFields, ___instance_2)); }
	inline UnityThreadHelper_t1984380493 * get_instance_2() const { return ___instance_2; }
	inline UnityThreadHelper_t1984380493 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(UnityThreadHelper_t1984380493 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_6() { return static_cast<int32_t>(offsetof(UnityThreadHelper_t1984380493_StaticFields, ___U3CU3Ef__amU24cache4_6)); }
	inline Func_2_t2773377161 * get_U3CU3Ef__amU24cache4_6() const { return ___U3CU3Ef__amU24cache4_6; }
	inline Func_2_t2773377161 ** get_address_of_U3CU3Ef__amU24cache4_6() { return &___U3CU3Ef__amU24cache4_6; }
	inline void set_U3CU3Ef__amU24cache4_6(Func_2_t2773377161 * value)
	{
		___U3CU3Ef__amU24cache4_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
