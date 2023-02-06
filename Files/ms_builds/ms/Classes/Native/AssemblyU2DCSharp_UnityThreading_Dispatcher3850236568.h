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
// UnityThreading.Dispatcher
struct Dispatcher_t3850236568;

#include "AssemblyU2DCSharp_UnityThreading_DispatcherBase1034334729.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityThreading.Dispatcher
struct  Dispatcher_t3850236568  : public DispatcherBase_t1034334729
{
public:

public:
};

struct Dispatcher_t3850236568_StaticFields
{
public:
	// UnityThreading.Dispatcher UnityThreading.Dispatcher::mainDispatcher
	Dispatcher_t3850236568 * ___mainDispatcher_7;

public:
	inline static int32_t get_offset_of_mainDispatcher_7() { return static_cast<int32_t>(offsetof(Dispatcher_t3850236568_StaticFields, ___mainDispatcher_7)); }
	inline Dispatcher_t3850236568 * get_mainDispatcher_7() const { return ___mainDispatcher_7; }
	inline Dispatcher_t3850236568 ** get_address_of_mainDispatcher_7() { return &___mainDispatcher_7; }
	inline void set_mainDispatcher_7(Dispatcher_t3850236568 * value)
	{
		___mainDispatcher_7 = value;
		Il2CppCodeGenWriteBarrier(&___mainDispatcher_7, value);
	}
};

struct Dispatcher_t3850236568_ThreadStaticFields
{
public:
	// UnityThreading.Task UnityThreading.Dispatcher::currentTask
	Task_t3071911286 * ___currentTask_5;
	// UnityThreading.Dispatcher UnityThreading.Dispatcher::currentDispatcher
	Dispatcher_t3850236568 * ___currentDispatcher_6;

public:
	inline static int32_t get_offset_of_currentTask_5() { return static_cast<int32_t>(offsetof(Dispatcher_t3850236568_ThreadStaticFields, ___currentTask_5)); }
	inline Task_t3071911286 * get_currentTask_5() const { return ___currentTask_5; }
	inline Task_t3071911286 ** get_address_of_currentTask_5() { return &___currentTask_5; }
	inline void set_currentTask_5(Task_t3071911286 * value)
	{
		___currentTask_5 = value;
		Il2CppCodeGenWriteBarrier(&___currentTask_5, value);
	}

	inline static int32_t get_offset_of_currentDispatcher_6() { return static_cast<int32_t>(offsetof(Dispatcher_t3850236568_ThreadStaticFields, ___currentDispatcher_6)); }
	inline Dispatcher_t3850236568 * get_currentDispatcher_6() const { return ___currentDispatcher_6; }
	inline Dispatcher_t3850236568 ** get_address_of_currentDispatcher_6() { return &___currentDispatcher_6; }
	inline void set_currentDispatcher_6(Dispatcher_t3850236568 * value)
	{
		___currentDispatcher_6 = value;
		Il2CppCodeGenWriteBarrier(&___currentDispatcher_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
