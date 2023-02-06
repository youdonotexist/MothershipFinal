#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.TermInfoDriver
struct TermInfoDriver_t3671666615;

#include "mscorlib_System_IO_StreamWriter872970458.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.CStreamWriter
struct  CStreamWriter_t2689805469  : public StreamWriter_t872970458
{
public:
	// System.TermInfoDriver System.IO.CStreamWriter::driver
	TermInfoDriver_t3671666615 * ___driver_14;

public:
	inline static int32_t get_offset_of_driver_14() { return static_cast<int32_t>(offsetof(CStreamWriter_t2689805469, ___driver_14)); }
	inline TermInfoDriver_t3671666615 * get_driver_14() const { return ___driver_14; }
	inline TermInfoDriver_t3671666615 ** get_address_of_driver_14() { return &___driver_14; }
	inline void set_driver_14(TermInfoDriver_t3671666615 * value)
	{
		___driver_14 = value;
		Il2CppCodeGenWriteBarrier(&___driver_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
