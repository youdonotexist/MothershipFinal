#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.StringBuilder
struct StringBuilder_t3822575854;

#include "mscorlib_System_IO_TextWriter1689927879.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StringWriter
struct  StringWriter_t2384730283  : public TextWriter_t1689927879
{
public:
	// System.Text.StringBuilder System.IO.StringWriter::internalString
	StringBuilder_t3822575854 * ___internalString_4;
	// System.Boolean System.IO.StringWriter::disposed
	bool ___disposed_5;

public:
	inline static int32_t get_offset_of_internalString_4() { return static_cast<int32_t>(offsetof(StringWriter_t2384730283, ___internalString_4)); }
	inline StringBuilder_t3822575854 * get_internalString_4() const { return ___internalString_4; }
	inline StringBuilder_t3822575854 ** get_address_of_internalString_4() { return &___internalString_4; }
	inline void set_internalString_4(StringBuilder_t3822575854 * value)
	{
		___internalString_4 = value;
		Il2CppCodeGenWriteBarrier(&___internalString_4, value);
	}

	inline static int32_t get_offset_of_disposed_5() { return static_cast<int32_t>(offsetof(StringWriter_t2384730283, ___disposed_5)); }
	inline bool get_disposed_5() const { return ___disposed_5; }
	inline bool* get_address_of_disposed_5() { return &___disposed_5; }
	inline void set_disposed_5(bool value)
	{
		___disposed_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
