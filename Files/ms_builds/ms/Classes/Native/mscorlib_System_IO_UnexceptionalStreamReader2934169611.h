#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Boolean[]
struct BooleanU5BU5D_t3804927312;

#include "mscorlib_System_IO_StreamReader717565226.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.UnexceptionalStreamReader
struct  UnexceptionalStreamReader_t2934169611  : public StreamReader_t717565226
{
public:

public:
};

struct UnexceptionalStreamReader_t2934169611_StaticFields
{
public:
	// System.Boolean[] System.IO.UnexceptionalStreamReader::newline
	BooleanU5BU5D_t3804927312* ___newline_15;
	// System.Char System.IO.UnexceptionalStreamReader::newlineChar
	uint16_t ___newlineChar_16;

public:
	inline static int32_t get_offset_of_newline_15() { return static_cast<int32_t>(offsetof(UnexceptionalStreamReader_t2934169611_StaticFields, ___newline_15)); }
	inline BooleanU5BU5D_t3804927312* get_newline_15() const { return ___newline_15; }
	inline BooleanU5BU5D_t3804927312** get_address_of_newline_15() { return &___newline_15; }
	inline void set_newline_15(BooleanU5BU5D_t3804927312* value)
	{
		___newline_15 = value;
		Il2CppCodeGenWriteBarrier(&___newline_15, value);
	}

	inline static int32_t get_offset_of_newlineChar_16() { return static_cast<int32_t>(offsetof(UnexceptionalStreamReader_t2934169611_StaticFields, ___newlineChar_16)); }
	inline uint16_t get_newlineChar_16() const { return ___newlineChar_16; }
	inline uint16_t* get_address_of_newlineChar_16() { return &___newlineChar_16; }
	inline void set_newlineChar_16(uint16_t value)
	{
		___newlineChar_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
