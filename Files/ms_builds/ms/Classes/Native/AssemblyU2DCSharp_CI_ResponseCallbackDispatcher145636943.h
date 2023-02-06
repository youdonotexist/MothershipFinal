#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CI.ResponseCallbackDispatcher
struct ResponseCallbackDispatcher_t145636943;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Object
struct Il2CppObject;
// System.Collections.Queue
struct Queue_t1621224067;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CI.ResponseCallbackDispatcher
struct  ResponseCallbackDispatcher_t145636943  : public MonoBehaviour_t3012272455
{
public:
	// System.Collections.Queue CI.ResponseCallbackDispatcher::requests
	Queue_t1621224067 * ___requests_5;

public:
	inline static int32_t get_offset_of_requests_5() { return static_cast<int32_t>(offsetof(ResponseCallbackDispatcher_t145636943, ___requests_5)); }
	inline Queue_t1621224067 * get_requests_5() const { return ___requests_5; }
	inline Queue_t1621224067 ** get_address_of_requests_5() { return &___requests_5; }
	inline void set_requests_5(Queue_t1621224067 * value)
	{
		___requests_5 = value;
		Il2CppCodeGenWriteBarrier(&___requests_5, value);
	}
};

struct ResponseCallbackDispatcher_t145636943_StaticFields
{
public:
	// CI.ResponseCallbackDispatcher CI.ResponseCallbackDispatcher::singleton
	ResponseCallbackDispatcher_t145636943 * ___singleton_2;
	// UnityEngine.GameObject CI.ResponseCallbackDispatcher::singletonGameObject
	GameObject_t4012695102 * ___singletonGameObject_3;
	// System.Object CI.ResponseCallbackDispatcher::singletonLock
	Il2CppObject * ___singletonLock_4;

public:
	inline static int32_t get_offset_of_singleton_2() { return static_cast<int32_t>(offsetof(ResponseCallbackDispatcher_t145636943_StaticFields, ___singleton_2)); }
	inline ResponseCallbackDispatcher_t145636943 * get_singleton_2() const { return ___singleton_2; }
	inline ResponseCallbackDispatcher_t145636943 ** get_address_of_singleton_2() { return &___singleton_2; }
	inline void set_singleton_2(ResponseCallbackDispatcher_t145636943 * value)
	{
		___singleton_2 = value;
		Il2CppCodeGenWriteBarrier(&___singleton_2, value);
	}

	inline static int32_t get_offset_of_singletonGameObject_3() { return static_cast<int32_t>(offsetof(ResponseCallbackDispatcher_t145636943_StaticFields, ___singletonGameObject_3)); }
	inline GameObject_t4012695102 * get_singletonGameObject_3() const { return ___singletonGameObject_3; }
	inline GameObject_t4012695102 ** get_address_of_singletonGameObject_3() { return &___singletonGameObject_3; }
	inline void set_singletonGameObject_3(GameObject_t4012695102 * value)
	{
		___singletonGameObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___singletonGameObject_3, value);
	}

	inline static int32_t get_offset_of_singletonLock_4() { return static_cast<int32_t>(offsetof(ResponseCallbackDispatcher_t145636943_StaticFields, ___singletonLock_4)); }
	inline Il2CppObject * get_singletonLock_4() const { return ___singletonLock_4; }
	inline Il2CppObject ** get_address_of_singletonLock_4() { return &___singletonLock_4; }
	inline void set_singletonLock_4(Il2CppObject * value)
	{
		___singletonLock_4 = value;
		Il2CppCodeGenWriteBarrier(&___singletonLock_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
