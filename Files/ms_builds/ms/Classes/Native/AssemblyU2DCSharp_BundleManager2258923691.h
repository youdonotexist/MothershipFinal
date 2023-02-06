#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// PortraitManager
struct PortraitManager_t190476146;
// System.Collections.Hashtable
struct Hashtable_t3875263730;

#include "AssemblyU2DCSharp_Singleton_1_gen2511739084.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BundleManager
struct  BundleManager_t2258923691  : public Singleton_1_t2511739084
{
public:
	// PortraitManager BundleManager::manager
	PortraitManager_t190476146 * ___manager_7;
	// System.Collections.Hashtable BundleManager::_cachedData
	Hashtable_t3875263730 * ____cachedData_8;

public:
	inline static int32_t get_offset_of_manager_7() { return static_cast<int32_t>(offsetof(BundleManager_t2258923691, ___manager_7)); }
	inline PortraitManager_t190476146 * get_manager_7() const { return ___manager_7; }
	inline PortraitManager_t190476146 ** get_address_of_manager_7() { return &___manager_7; }
	inline void set_manager_7(PortraitManager_t190476146 * value)
	{
		___manager_7 = value;
		Il2CppCodeGenWriteBarrier(&___manager_7, value);
	}

	inline static int32_t get_offset_of__cachedData_8() { return static_cast<int32_t>(offsetof(BundleManager_t2258923691, ____cachedData_8)); }
	inline Hashtable_t3875263730 * get__cachedData_8() const { return ____cachedData_8; }
	inline Hashtable_t3875263730 ** get_address_of__cachedData_8() { return &____cachedData_8; }
	inline void set__cachedData_8(Hashtable_t3875263730 * value)
	{
		____cachedData_8 = value;
		Il2CppCodeGenWriteBarrier(&____cachedData_8, value);
	}
};

struct BundleManager_t2258923691_StaticFields
{
public:
	// System.Boolean BundleManager::LOCAL
	bool ___LOCAL_5;
	// System.String BundleManager::LOCAL_BUNDLE
	String_t* ___LOCAL_BUNDLE_6;

public:
	inline static int32_t get_offset_of_LOCAL_5() { return static_cast<int32_t>(offsetof(BundleManager_t2258923691_StaticFields, ___LOCAL_5)); }
	inline bool get_LOCAL_5() const { return ___LOCAL_5; }
	inline bool* get_address_of_LOCAL_5() { return &___LOCAL_5; }
	inline void set_LOCAL_5(bool value)
	{
		___LOCAL_5 = value;
	}

	inline static int32_t get_offset_of_LOCAL_BUNDLE_6() { return static_cast<int32_t>(offsetof(BundleManager_t2258923691_StaticFields, ___LOCAL_BUNDLE_6)); }
	inline String_t* get_LOCAL_BUNDLE_6() const { return ___LOCAL_BUNDLE_6; }
	inline String_t** get_address_of_LOCAL_BUNDLE_6() { return &___LOCAL_BUNDLE_6; }
	inline void set_LOCAL_BUNDLE_6(String_t* value)
	{
		___LOCAL_BUNDLE_6 = value;
		Il2CppCodeGenWriteBarrier(&___LOCAL_BUNDLE_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
