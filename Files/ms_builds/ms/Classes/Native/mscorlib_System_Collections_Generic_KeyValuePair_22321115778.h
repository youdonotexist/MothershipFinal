#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// UnityEngine.Material
struct Material_t1886596500;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Texture2D,UnityEngine.Material>
struct  KeyValuePair_2_t2321115778 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Texture2D_t2509538522 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Material_t1886596500 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2321115778, ___key_0)); }
	inline Texture2D_t2509538522 * get_key_0() const { return ___key_0; }
	inline Texture2D_t2509538522 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Texture2D_t2509538522 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2321115778, ___value_1)); }
	inline Material_t1886596500 * get_value_1() const { return ___value_1; }
	inline Material_t1886596500 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Material_t1886596500 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
