﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.TextWriter
struct TextWriter_t1689927879;

#include "mscorlib_System_IO_TextWriter1689927879.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.SynchronizedWriter
struct  SynchronizedWriter_t1696569198  : public TextWriter_t1689927879
{
public:
	// System.IO.TextWriter System.IO.SynchronizedWriter::writer
	TextWriter_t1689927879 * ___writer_4;
	// System.Boolean System.IO.SynchronizedWriter::neverClose
	bool ___neverClose_5;

public:
	inline static int32_t get_offset_of_writer_4() { return static_cast<int32_t>(offsetof(SynchronizedWriter_t1696569198, ___writer_4)); }
	inline TextWriter_t1689927879 * get_writer_4() const { return ___writer_4; }
	inline TextWriter_t1689927879 ** get_address_of_writer_4() { return &___writer_4; }
	inline void set_writer_4(TextWriter_t1689927879 * value)
	{
		___writer_4 = value;
		Il2CppCodeGenWriteBarrier(&___writer_4, value);
	}

	inline static int32_t get_offset_of_neverClose_5() { return static_cast<int32_t>(offsetof(SynchronizedWriter_t1696569198, ___neverClose_5)); }
	inline bool get_neverClose_5() const { return ___neverClose_5; }
	inline bool* get_address_of_neverClose_5() { return &___neverClose_5; }
	inline void set_neverClose_5(bool value)
	{
		___neverClose_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
