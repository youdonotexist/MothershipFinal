#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.WebConnection
struct WebConnection_t1124289692;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebConnection/AbortHelper
struct  AbortHelper_t1460839134  : public Il2CppObject
{
public:
	// System.Net.WebConnection System.Net.WebConnection/AbortHelper::Connection
	WebConnection_t1124289692 * ___Connection_0;

public:
	inline static int32_t get_offset_of_Connection_0() { return static_cast<int32_t>(offsetof(AbortHelper_t1460839134, ___Connection_0)); }
	inline WebConnection_t1124289692 * get_Connection_0() const { return ___Connection_0; }
	inline WebConnection_t1124289692 ** get_address_of_Connection_0() { return &___Connection_0; }
	inline void set_Connection_0(WebConnection_t1124289692 * value)
	{
		___Connection_0 = value;
		Il2CppCodeGenWriteBarrier(&___Connection_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
