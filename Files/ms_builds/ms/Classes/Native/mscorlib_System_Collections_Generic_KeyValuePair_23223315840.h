#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.AudioSource,System.Double>
struct  KeyValuePair_2_t3223315840 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	AudioSource_t3628549054 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	double ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3223315840, ___key_0)); }
	inline AudioSource_t3628549054 * get_key_0() const { return ___key_0; }
	inline AudioSource_t3628549054 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(AudioSource_t3628549054 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3223315840, ___value_1)); }
	inline double get_value_1() const { return ___value_1; }
	inline double* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(double value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
