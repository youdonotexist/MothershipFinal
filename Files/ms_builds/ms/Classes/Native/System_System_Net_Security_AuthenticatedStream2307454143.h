﻿#pragma once

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

// System.Net.Security.AuthenticatedStream
struct  AuthenticatedStream_t2307454143  : public Stream_t219029575
{
public:
	// System.IO.Stream System.Net.Security.AuthenticatedStream::innerStream
	Stream_t219029575 * ___innerStream_2;
	// System.Boolean System.Net.Security.AuthenticatedStream::leaveStreamOpen
	bool ___leaveStreamOpen_3;

public:
	inline static int32_t get_offset_of_innerStream_2() { return static_cast<int32_t>(offsetof(AuthenticatedStream_t2307454143, ___innerStream_2)); }
	inline Stream_t219029575 * get_innerStream_2() const { return ___innerStream_2; }
	inline Stream_t219029575 ** get_address_of_innerStream_2() { return &___innerStream_2; }
	inline void set_innerStream_2(Stream_t219029575 * value)
	{
		___innerStream_2 = value;
		Il2CppCodeGenWriteBarrier(&___innerStream_2, value);
	}

	inline static int32_t get_offset_of_leaveStreamOpen_3() { return static_cast<int32_t>(offsetof(AuthenticatedStream_t2307454143, ___leaveStreamOpen_3)); }
	inline bool get_leaveStreamOpen_3() const { return ___leaveStreamOpen_3; }
	inline bool* get_address_of_leaveStreamOpen_3() { return &___leaveStreamOpen_3; }
	inline void set_leaveStreamOpen_3(bool value)
	{
		___leaveStreamOpen_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
