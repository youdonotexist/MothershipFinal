#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.CaseInsensitiveHashCodeProvider
struct CaseInsensitiveHashCodeProvider_t4067405951;
// System.Object
struct Il2CppObject;
// System.Globalization.TextInfo
struct TextInfo_t1829318641;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CaseInsensitiveHashCodeProvider
struct  CaseInsensitiveHashCodeProvider_t4067405951  : public Il2CppObject
{
public:
	// System.Globalization.TextInfo System.Collections.CaseInsensitiveHashCodeProvider::m_text
	TextInfo_t1829318641 * ___m_text_3;

public:
	inline static int32_t get_offset_of_m_text_3() { return static_cast<int32_t>(offsetof(CaseInsensitiveHashCodeProvider_t4067405951, ___m_text_3)); }
	inline TextInfo_t1829318641 * get_m_text_3() const { return ___m_text_3; }
	inline TextInfo_t1829318641 ** get_address_of_m_text_3() { return &___m_text_3; }
	inline void set_m_text_3(TextInfo_t1829318641 * value)
	{
		___m_text_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_text_3, value);
	}
};

struct CaseInsensitiveHashCodeProvider_t4067405951_StaticFields
{
public:
	// System.Collections.CaseInsensitiveHashCodeProvider System.Collections.CaseInsensitiveHashCodeProvider::singletonInvariant
	CaseInsensitiveHashCodeProvider_t4067405951 * ___singletonInvariant_0;
	// System.Collections.CaseInsensitiveHashCodeProvider System.Collections.CaseInsensitiveHashCodeProvider::singleton
	CaseInsensitiveHashCodeProvider_t4067405951 * ___singleton_1;
	// System.Object System.Collections.CaseInsensitiveHashCodeProvider::sync
	Il2CppObject * ___sync_2;

public:
	inline static int32_t get_offset_of_singletonInvariant_0() { return static_cast<int32_t>(offsetof(CaseInsensitiveHashCodeProvider_t4067405951_StaticFields, ___singletonInvariant_0)); }
	inline CaseInsensitiveHashCodeProvider_t4067405951 * get_singletonInvariant_0() const { return ___singletonInvariant_0; }
	inline CaseInsensitiveHashCodeProvider_t4067405951 ** get_address_of_singletonInvariant_0() { return &___singletonInvariant_0; }
	inline void set_singletonInvariant_0(CaseInsensitiveHashCodeProvider_t4067405951 * value)
	{
		___singletonInvariant_0 = value;
		Il2CppCodeGenWriteBarrier(&___singletonInvariant_0, value);
	}

	inline static int32_t get_offset_of_singleton_1() { return static_cast<int32_t>(offsetof(CaseInsensitiveHashCodeProvider_t4067405951_StaticFields, ___singleton_1)); }
	inline CaseInsensitiveHashCodeProvider_t4067405951 * get_singleton_1() const { return ___singleton_1; }
	inline CaseInsensitiveHashCodeProvider_t4067405951 ** get_address_of_singleton_1() { return &___singleton_1; }
	inline void set_singleton_1(CaseInsensitiveHashCodeProvider_t4067405951 * value)
	{
		___singleton_1 = value;
		Il2CppCodeGenWriteBarrier(&___singleton_1, value);
	}

	inline static int32_t get_offset_of_sync_2() { return static_cast<int32_t>(offsetof(CaseInsensitiveHashCodeProvider_t4067405951_StaticFields, ___sync_2)); }
	inline Il2CppObject * get_sync_2() const { return ___sync_2; }
	inline Il2CppObject ** get_address_of_sync_2() { return &___sync_2; }
	inline void set_sync_2(Il2CppObject * value)
	{
		___sync_2 = value;
		Il2CppCodeGenWriteBarrier(&___sync_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
