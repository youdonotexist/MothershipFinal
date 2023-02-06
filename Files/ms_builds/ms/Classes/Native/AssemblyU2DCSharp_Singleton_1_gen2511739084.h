#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BundleManager
struct BundleManager_t2258923691;
// System.Object
struct Il2CppObject;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Singleton`1<BundleManager>
struct  Singleton_1_t2511739084  : public MonoBehaviour_t3012272455
{
public:

public:
};

struct Singleton_1_t2511739084_StaticFields
{
public:
	// T Singleton`1::_instance
	BundleManager_t2258923691 * ____instance_2;
	// System.Object Singleton`1::_lock
	Il2CppObject * ____lock_3;
	// System.Boolean Singleton`1::applicationIsQuitting
	bool ___applicationIsQuitting_4;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(Singleton_1_t2511739084_StaticFields, ____instance_2)); }
	inline BundleManager_t2258923691 * get__instance_2() const { return ____instance_2; }
	inline BundleManager_t2258923691 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(BundleManager_t2258923691 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier(&____instance_2, value);
	}

	inline static int32_t get_offset_of__lock_3() { return static_cast<int32_t>(offsetof(Singleton_1_t2511739084_StaticFields, ____lock_3)); }
	inline Il2CppObject * get__lock_3() const { return ____lock_3; }
	inline Il2CppObject ** get_address_of__lock_3() { return &____lock_3; }
	inline void set__lock_3(Il2CppObject * value)
	{
		____lock_3 = value;
		Il2CppCodeGenWriteBarrier(&____lock_3, value);
	}

	inline static int32_t get_offset_of_applicationIsQuitting_4() { return static_cast<int32_t>(offsetof(Singleton_1_t2511739084_StaticFields, ___applicationIsQuitting_4)); }
	inline bool get_applicationIsQuitting_4() const { return ___applicationIsQuitting_4; }
	inline bool* get_address_of_applicationIsQuitting_4() { return &___applicationIsQuitting_4; }
	inline void set_applicationIsQuitting_4(bool value)
	{
		___applicationIsQuitting_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
