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

// Ionic.Zip.CountingStream
struct  CountingStream_t2437564394  : public Stream_t219029575
{
public:
	// System.IO.Stream Ionic.Zip.CountingStream::_s
	Stream_t219029575 * ____s_2;
	// System.Int64 Ionic.Zip.CountingStream::_bytesWritten
	int64_t ____bytesWritten_3;
	// System.Int64 Ionic.Zip.CountingStream::_bytesRead
	int64_t ____bytesRead_4;
	// System.Int64 Ionic.Zip.CountingStream::_initialOffset
	int64_t ____initialOffset_5;

public:
	inline static int32_t get_offset_of__s_2() { return static_cast<int32_t>(offsetof(CountingStream_t2437564394, ____s_2)); }
	inline Stream_t219029575 * get__s_2() const { return ____s_2; }
	inline Stream_t219029575 ** get_address_of__s_2() { return &____s_2; }
	inline void set__s_2(Stream_t219029575 * value)
	{
		____s_2 = value;
		Il2CppCodeGenWriteBarrier(&____s_2, value);
	}

	inline static int32_t get_offset_of__bytesWritten_3() { return static_cast<int32_t>(offsetof(CountingStream_t2437564394, ____bytesWritten_3)); }
	inline int64_t get__bytesWritten_3() const { return ____bytesWritten_3; }
	inline int64_t* get_address_of__bytesWritten_3() { return &____bytesWritten_3; }
	inline void set__bytesWritten_3(int64_t value)
	{
		____bytesWritten_3 = value;
	}

	inline static int32_t get_offset_of__bytesRead_4() { return static_cast<int32_t>(offsetof(CountingStream_t2437564394, ____bytesRead_4)); }
	inline int64_t get__bytesRead_4() const { return ____bytesRead_4; }
	inline int64_t* get_address_of__bytesRead_4() { return &____bytesRead_4; }
	inline void set__bytesRead_4(int64_t value)
	{
		____bytesRead_4 = value;
	}

	inline static int32_t get_offset_of__initialOffset_5() { return static_cast<int32_t>(offsetof(CountingStream_t2437564394, ____initialOffset_5)); }
	inline int64_t get__initialOffset_5() const { return ____initialOffset_5; }
	inline int64_t* get_address_of__initialOffset_5() { return &____initialOffset_5; }
	inline void set__initialOffset_5(int64_t value)
	{
		____initialOffset_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
