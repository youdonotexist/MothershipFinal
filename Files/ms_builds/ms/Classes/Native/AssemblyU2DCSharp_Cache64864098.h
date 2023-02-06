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

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cache
struct  Cache_t64864098  : public Il2CppObject
{
public:

public:
};

struct Cache_t64864098_StaticFields
{
public:
	// System.String Cache::DATA_PATH
	String_t* ___DATA_PATH_0;

public:
	inline static int32_t get_offset_of_DATA_PATH_0() { return static_cast<int32_t>(offsetof(Cache_t64864098_StaticFields, ___DATA_PATH_0)); }
	inline String_t* get_DATA_PATH_0() const { return ___DATA_PATH_0; }
	inline String_t** get_address_of_DATA_PATH_0() { return &___DATA_PATH_0; }
	inline void set_DATA_PATH_0(String_t* value)
	{
		___DATA_PATH_0 = value;
		Il2CppCodeGenWriteBarrier(&___DATA_PATH_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
