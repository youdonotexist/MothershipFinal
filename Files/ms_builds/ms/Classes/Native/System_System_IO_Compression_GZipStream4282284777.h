#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Compression.DeflateStream
struct DeflateStream_t1132884186;

#include "mscorlib_System_IO_Stream219029575.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.GZipStream
struct  GZipStream_t4282284777  : public Stream_t219029575
{
public:
	// System.IO.Compression.DeflateStream System.IO.Compression.GZipStream::deflateStream
	DeflateStream_t1132884186 * ___deflateStream_2;

public:
	inline static int32_t get_offset_of_deflateStream_2() { return static_cast<int32_t>(offsetof(GZipStream_t4282284777, ___deflateStream_2)); }
	inline DeflateStream_t1132884186 * get_deflateStream_2() const { return ___deflateStream_2; }
	inline DeflateStream_t1132884186 ** get_address_of_deflateStream_2() { return &___deflateStream_2; }
	inline void set_deflateStream_2(DeflateStream_t1132884186 * value)
	{
		___deflateStream_2 = value;
		Il2CppCodeGenWriteBarrier(&___deflateStream_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
