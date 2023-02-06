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

// ShotSize
struct  ShotSize_t4017980987  : public Il2CppObject
{
public:
	// System.Int32 ShotSize::width
	int32_t ___width_0;
	// System.Int32 ShotSize::height
	int32_t ___height_1;
	// System.String ShotSize::label
	String_t* ___label_2;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(ShotSize_t4017980987, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(ShotSize_t4017980987, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_label_2() { return static_cast<int32_t>(offsetof(ShotSize_t4017980987, ___label_2)); }
	inline String_t* get_label_2() const { return ___label_2; }
	inline String_t** get_address_of_label_2() { return &___label_2; }
	inline void set_label_2(String_t* value)
	{
		___label_2 = value;
		Il2CppCodeGenWriteBarrier(&___label_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
