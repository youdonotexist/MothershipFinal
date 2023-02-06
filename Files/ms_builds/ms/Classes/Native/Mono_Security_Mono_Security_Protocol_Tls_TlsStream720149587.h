﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.MemoryStream
struct MemoryStream_t2881531048;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "mscorlib_System_IO_Stream219029575.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.TlsStream
struct  TlsStream_t720149587  : public Stream_t219029575
{
public:
	// System.Boolean Mono.Security.Protocol.Tls.TlsStream::canRead
	bool ___canRead_2;
	// System.Boolean Mono.Security.Protocol.Tls.TlsStream::canWrite
	bool ___canWrite_3;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.TlsStream::buffer
	MemoryStream_t2881531048 * ___buffer_4;
	// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::temp
	ByteU5BU5D_t58506160* ___temp_5;

public:
	inline static int32_t get_offset_of_canRead_2() { return static_cast<int32_t>(offsetof(TlsStream_t720149587, ___canRead_2)); }
	inline bool get_canRead_2() const { return ___canRead_2; }
	inline bool* get_address_of_canRead_2() { return &___canRead_2; }
	inline void set_canRead_2(bool value)
	{
		___canRead_2 = value;
	}

	inline static int32_t get_offset_of_canWrite_3() { return static_cast<int32_t>(offsetof(TlsStream_t720149587, ___canWrite_3)); }
	inline bool get_canWrite_3() const { return ___canWrite_3; }
	inline bool* get_address_of_canWrite_3() { return &___canWrite_3; }
	inline void set_canWrite_3(bool value)
	{
		___canWrite_3 = value;
	}

	inline static int32_t get_offset_of_buffer_4() { return static_cast<int32_t>(offsetof(TlsStream_t720149587, ___buffer_4)); }
	inline MemoryStream_t2881531048 * get_buffer_4() const { return ___buffer_4; }
	inline MemoryStream_t2881531048 ** get_address_of_buffer_4() { return &___buffer_4; }
	inline void set_buffer_4(MemoryStream_t2881531048 * value)
	{
		___buffer_4 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_4, value);
	}

	inline static int32_t get_offset_of_temp_5() { return static_cast<int32_t>(offsetof(TlsStream_t720149587, ___temp_5)); }
	inline ByteU5BU5D_t58506160* get_temp_5() const { return ___temp_5; }
	inline ByteU5BU5D_t58506160** get_address_of_temp_5() { return &___temp_5; }
	inline void set_temp_5(ByteU5BU5D_t58506160* value)
	{
		___temp_5 = value;
		Il2CppCodeGenWriteBarrier(&___temp_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
