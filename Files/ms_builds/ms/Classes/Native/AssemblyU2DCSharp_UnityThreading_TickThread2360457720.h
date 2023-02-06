#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t437523947;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t2399218676;

#include "AssemblyU2DCSharp_UnityThreading_ThreadBase3877260268.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityThreading.TickThread
struct  TickThread_t2360457720  : public ThreadBase_t3877260268
{
public:
	// System.Action UnityThreading.TickThread::action
	Action_t437523947 * ___action_5;
	// System.Int32 UnityThreading.TickThread::tickLengthInMilliseconds
	int32_t ___tickLengthInMilliseconds_6;
	// System.Threading.ManualResetEvent UnityThreading.TickThread::tickEvent
	ManualResetEvent_t2399218676 * ___tickEvent_7;

public:
	inline static int32_t get_offset_of_action_5() { return static_cast<int32_t>(offsetof(TickThread_t2360457720, ___action_5)); }
	inline Action_t437523947 * get_action_5() const { return ___action_5; }
	inline Action_t437523947 ** get_address_of_action_5() { return &___action_5; }
	inline void set_action_5(Action_t437523947 * value)
	{
		___action_5 = value;
		Il2CppCodeGenWriteBarrier(&___action_5, value);
	}

	inline static int32_t get_offset_of_tickLengthInMilliseconds_6() { return static_cast<int32_t>(offsetof(TickThread_t2360457720, ___tickLengthInMilliseconds_6)); }
	inline int32_t get_tickLengthInMilliseconds_6() const { return ___tickLengthInMilliseconds_6; }
	inline int32_t* get_address_of_tickLengthInMilliseconds_6() { return &___tickLengthInMilliseconds_6; }
	inline void set_tickLengthInMilliseconds_6(int32_t value)
	{
		___tickLengthInMilliseconds_6 = value;
	}

	inline static int32_t get_offset_of_tickEvent_7() { return static_cast<int32_t>(offsetof(TickThread_t2360457720, ___tickEvent_7)); }
	inline ManualResetEvent_t2399218676 * get_tickEvent_7() const { return ___tickEvent_7; }
	inline ManualResetEvent_t2399218676 ** get_address_of_tickEvent_7() { return &___tickEvent_7; }
	inline void set_tickEvent_7(ManualResetEvent_t2399218676 * value)
	{
		___tickEvent_7 = value;
		Il2CppCodeGenWriteBarrier(&___tickEvent_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
