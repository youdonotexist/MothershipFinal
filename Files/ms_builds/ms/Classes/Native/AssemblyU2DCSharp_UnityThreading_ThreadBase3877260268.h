#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityThreading.Dispatcher
struct Dispatcher_t3850236568;
// System.Threading.Thread
struct Thread_t1674723085;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t2399218676;
// UnityThreading.ThreadBase
struct ThreadBase_t3877260268;
// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityThreading.ThreadBase
struct  ThreadBase_t3877260268  : public Il2CppObject
{
public:
	// UnityThreading.Dispatcher UnityThreading.ThreadBase::targetDispatcher
	Dispatcher_t3850236568 * ___targetDispatcher_0;
	// System.Threading.Thread UnityThreading.ThreadBase::thread
	Thread_t1674723085 * ___thread_1;
	// System.Threading.ManualResetEvent UnityThreading.ThreadBase::exitEvent
	ManualResetEvent_t2399218676 * ___exitEvent_2;
	// System.String UnityThreading.ThreadBase::threadName
	String_t* ___threadName_4;

public:
	inline static int32_t get_offset_of_targetDispatcher_0() { return static_cast<int32_t>(offsetof(ThreadBase_t3877260268, ___targetDispatcher_0)); }
	inline Dispatcher_t3850236568 * get_targetDispatcher_0() const { return ___targetDispatcher_0; }
	inline Dispatcher_t3850236568 ** get_address_of_targetDispatcher_0() { return &___targetDispatcher_0; }
	inline void set_targetDispatcher_0(Dispatcher_t3850236568 * value)
	{
		___targetDispatcher_0 = value;
		Il2CppCodeGenWriteBarrier(&___targetDispatcher_0, value);
	}

	inline static int32_t get_offset_of_thread_1() { return static_cast<int32_t>(offsetof(ThreadBase_t3877260268, ___thread_1)); }
	inline Thread_t1674723085 * get_thread_1() const { return ___thread_1; }
	inline Thread_t1674723085 ** get_address_of_thread_1() { return &___thread_1; }
	inline void set_thread_1(Thread_t1674723085 * value)
	{
		___thread_1 = value;
		Il2CppCodeGenWriteBarrier(&___thread_1, value);
	}

	inline static int32_t get_offset_of_exitEvent_2() { return static_cast<int32_t>(offsetof(ThreadBase_t3877260268, ___exitEvent_2)); }
	inline ManualResetEvent_t2399218676 * get_exitEvent_2() const { return ___exitEvent_2; }
	inline ManualResetEvent_t2399218676 ** get_address_of_exitEvent_2() { return &___exitEvent_2; }
	inline void set_exitEvent_2(ManualResetEvent_t2399218676 * value)
	{
		___exitEvent_2 = value;
		Il2CppCodeGenWriteBarrier(&___exitEvent_2, value);
	}

	inline static int32_t get_offset_of_threadName_4() { return static_cast<int32_t>(offsetof(ThreadBase_t3877260268, ___threadName_4)); }
	inline String_t* get_threadName_4() const { return ___threadName_4; }
	inline String_t** get_address_of_threadName_4() { return &___threadName_4; }
	inline void set_threadName_4(String_t* value)
	{
		___threadName_4 = value;
		Il2CppCodeGenWriteBarrier(&___threadName_4, value);
	}
};

struct ThreadBase_t3877260268_ThreadStaticFields
{
public:
	// UnityThreading.ThreadBase UnityThreading.ThreadBase::currentThread
	ThreadBase_t3877260268 * ___currentThread_3;

public:
	inline static int32_t get_offset_of_currentThread_3() { return static_cast<int32_t>(offsetof(ThreadBase_t3877260268_ThreadStaticFields, ___currentThread_3)); }
	inline ThreadBase_t3877260268 * get_currentThread_3() const { return ___currentThread_3; }
	inline ThreadBase_t3877260268 ** get_address_of_currentThread_3() { return &___currentThread_3; }
	inline void set_currentThread_3(ThreadBase_t3877260268 * value)
	{
		___currentThread_3 = value;
		Il2CppCodeGenWriteBarrier(&___currentThread_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
