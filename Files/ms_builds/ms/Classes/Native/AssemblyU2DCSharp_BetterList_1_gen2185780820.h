#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIToggle[]
struct UIToggleU5BU5D_t2046261209;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BetterList`1<UIToggle>
struct  BetterList_1_t2185780820  : public Il2CppObject
{
public:
	// T[] BetterList`1::buffer
	UIToggleU5BU5D_t2046261209* ___buffer_0;
	// System.Int32 BetterList`1::size
	int32_t ___size_1;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(BetterList_1_t2185780820, ___buffer_0)); }
	inline UIToggleU5BU5D_t2046261209* get_buffer_0() const { return ___buffer_0; }
	inline UIToggleU5BU5D_t2046261209** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(UIToggleU5BU5D_t2046261209* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_0, value);
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(BetterList_1_t2185780820, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
