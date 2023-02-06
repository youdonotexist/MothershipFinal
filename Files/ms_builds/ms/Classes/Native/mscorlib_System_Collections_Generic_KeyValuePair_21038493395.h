#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4014882752.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Vectrosity_Vector3Pa3261854258.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Vectrosity.Vector3Pair,System.Boolean>
struct  KeyValuePair_2_t1038493395 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Vector3Pair_t3261854258  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1038493395, ___key_0)); }
	inline Vector3Pair_t3261854258  get_key_0() const { return ___key_0; }
	inline Vector3Pair_t3261854258 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Vector3Pair_t3261854258  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1038493395, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
