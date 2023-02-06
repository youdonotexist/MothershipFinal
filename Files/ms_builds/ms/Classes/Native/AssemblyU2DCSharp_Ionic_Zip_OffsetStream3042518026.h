#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Stream
struct Stream_t219029575;

#include "mscorlib_System_IO_Stream219029575.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Zip.OffsetStream
struct  OffsetStream_t3042518026  : public Stream_t219029575
{
public:
	// System.Int64 Ionic.Zip.OffsetStream::_originalPosition
	int64_t ____originalPosition_2;
	// System.IO.Stream Ionic.Zip.OffsetStream::_innerStream
	Stream_t219029575 * ____innerStream_3;

public:
	inline static int32_t get_offset_of__originalPosition_2() { return static_cast<int32_t>(offsetof(OffsetStream_t3042518026, ____originalPosition_2)); }
	inline int64_t get__originalPosition_2() const { return ____originalPosition_2; }
	inline int64_t* get_address_of__originalPosition_2() { return &____originalPosition_2; }
	inline void set__originalPosition_2(int64_t value)
	{
		____originalPosition_2 = value;
	}

	inline static int32_t get_offset_of__innerStream_3() { return static_cast<int32_t>(offsetof(OffsetStream_t3042518026, ____innerStream_3)); }
	inline Stream_t219029575 * get__innerStream_3() const { return ____innerStream_3; }
	inline Stream_t219029575 ** get_address_of__innerStream_3() { return &____innerStream_3; }
	inline void set__innerStream_3(Stream_t219029575 * value)
	{
		____innerStream_3 = value;
		Il2CppCodeGenWriteBarrier(&____innerStream_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
