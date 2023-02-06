#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Ionic.Zlib.ZlibBaseStream
struct ZlibBaseStream_t221596009;
// System.IO.Stream
struct Stream_t219029575;

#include "mscorlib_System_IO_Stream219029575.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Zlib.DeflateStream
struct  DeflateStream_t293426392  : public Stream_t219029575
{
public:
	// Ionic.Zlib.ZlibBaseStream Ionic.Zlib.DeflateStream::_baseStream
	ZlibBaseStream_t221596009 * ____baseStream_2;
	// System.IO.Stream Ionic.Zlib.DeflateStream::_innerStream
	Stream_t219029575 * ____innerStream_3;
	// System.Boolean Ionic.Zlib.DeflateStream::_disposed
	bool ____disposed_4;

public:
	inline static int32_t get_offset_of__baseStream_2() { return static_cast<int32_t>(offsetof(DeflateStream_t293426392, ____baseStream_2)); }
	inline ZlibBaseStream_t221596009 * get__baseStream_2() const { return ____baseStream_2; }
	inline ZlibBaseStream_t221596009 ** get_address_of__baseStream_2() { return &____baseStream_2; }
	inline void set__baseStream_2(ZlibBaseStream_t221596009 * value)
	{
		____baseStream_2 = value;
		Il2CppCodeGenWriteBarrier(&____baseStream_2, value);
	}

	inline static int32_t get_offset_of__innerStream_3() { return static_cast<int32_t>(offsetof(DeflateStream_t293426392, ____innerStream_3)); }
	inline Stream_t219029575 * get__innerStream_3() const { return ____innerStream_3; }
	inline Stream_t219029575 ** get_address_of__innerStream_3() { return &____innerStream_3; }
	inline void set__innerStream_3(Stream_t219029575 * value)
	{
		____innerStream_3 = value;
		Il2CppCodeGenWriteBarrier(&____innerStream_3, value);
	}

	inline static int32_t get_offset_of__disposed_4() { return static_cast<int32_t>(offsetof(DeflateStream_t293426392, ____disposed_4)); }
	inline bool get__disposed_4() const { return ____disposed_4; }
	inline bool* get_address_of__disposed_4() { return &____disposed_4; }
	inline void set__disposed_4(bool value)
	{
		____disposed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
