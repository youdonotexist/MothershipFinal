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

#include "mscorlib_System_IO_StreamReader717565226.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.CStreamReader
struct  CStreamReader_t2534400237  : public StreamReader_t717565226
{
public:
	// System.TermInfoDriver System.IO.CStreamReader::driver
	TermInfoDriver_t3671666615 * ___driver_15;

public:
	inline static int32_t get_offset_of_driver_15() { return static_cast<int32_t>(offsetof(CStreamReader_t2534400237, ___driver_15)); }
	inline TermInfoDriver_t3671666615 * get_driver_15() const { return ___driver_15; }
	inline TermInfoDriver_t3671666615 ** get_address_of_driver_15() { return &___driver_15; }
	inline void set_driver_15(TermInfoDriver_t3671666615 * value)
	{
		___driver_15 = value;
		Il2CppCodeGenWriteBarrier(&___driver_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
