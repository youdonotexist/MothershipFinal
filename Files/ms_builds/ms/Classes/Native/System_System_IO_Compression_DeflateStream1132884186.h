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
// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t1833047712;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "mscorlib_System_IO_Stream219029575.h"
#include "System_System_IO_Compression_CompressionMode2472288632.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Runtime_InteropServices_GCHandle2146430982.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.DeflateStream
struct  DeflateStream_t1132884186  : public Stream_t219029575
{
public:
	// System.IO.Stream System.IO.Compression.DeflateStream::base_stream
	Stream_t219029575 * ___base_stream_2;
	// System.IO.Compression.CompressionMode System.IO.Compression.DeflateStream::mode
	int32_t ___mode_3;
	// System.Boolean System.IO.Compression.DeflateStream::leaveOpen
	bool ___leaveOpen_4;
	// System.Boolean System.IO.Compression.DeflateStream::disposed
	bool ___disposed_5;
	// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite System.IO.Compression.DeflateStream::feeder
	UnmanagedReadOrWrite_t1833047712 * ___feeder_6;
	// System.IntPtr System.IO.Compression.DeflateStream::z_stream
	IntPtr_t ___z_stream_7;
	// System.Byte[] System.IO.Compression.DeflateStream::io_buffer
	ByteU5BU5D_t58506160* ___io_buffer_8;
	// System.Runtime.InteropServices.GCHandle System.IO.Compression.DeflateStream::data
	GCHandle_t2146430982  ___data_9;

public:
	inline static int32_t get_offset_of_base_stream_2() { return static_cast<int32_t>(offsetof(DeflateStream_t1132884186, ___base_stream_2)); }
	inline Stream_t219029575 * get_base_stream_2() const { return ___base_stream_2; }
	inline Stream_t219029575 ** get_address_of_base_stream_2() { return &___base_stream_2; }
	inline void set_base_stream_2(Stream_t219029575 * value)
	{
		___base_stream_2 = value;
		Il2CppCodeGenWriteBarrier(&___base_stream_2, value);
	}

	inline static int32_t get_offset_of_mode_3() { return static_cast<int32_t>(offsetof(DeflateStream_t1132884186, ___mode_3)); }
	inline int32_t get_mode_3() const { return ___mode_3; }
	inline int32_t* get_address_of_mode_3() { return &___mode_3; }
	inline void set_mode_3(int32_t value)
	{
		___mode_3 = value;
	}

	inline static int32_t get_offset_of_leaveOpen_4() { return static_cast<int32_t>(offsetof(DeflateStream_t1132884186, ___leaveOpen_4)); }
	inline bool get_leaveOpen_4() const { return ___leaveOpen_4; }
	inline bool* get_address_of_leaveOpen_4() { return &___leaveOpen_4; }
	inline void set_leaveOpen_4(bool value)
	{
		___leaveOpen_4 = value;
	}

	inline static int32_t get_offset_of_disposed_5() { return static_cast<int32_t>(offsetof(DeflateStream_t1132884186, ___disposed_5)); }
	inline bool get_disposed_5() const { return ___disposed_5; }
	inline bool* get_address_of_disposed_5() { return &___disposed_5; }
	inline void set_disposed_5(bool value)
	{
		___disposed_5 = value;
	}

	inline static int32_t get_offset_of_feeder_6() { return static_cast<int32_t>(offsetof(DeflateStream_t1132884186, ___feeder_6)); }
	inline UnmanagedReadOrWrite_t1833047712 * get_feeder_6() const { return ___feeder_6; }
	inline UnmanagedReadOrWrite_t1833047712 ** get_address_of_feeder_6() { return &___feeder_6; }
	inline void set_feeder_6(UnmanagedReadOrWrite_t1833047712 * value)
	{
		___feeder_6 = value;
		Il2CppCodeGenWriteBarrier(&___feeder_6, value);
	}

	inline static int32_t get_offset_of_z_stream_7() { return static_cast<int32_t>(offsetof(DeflateStream_t1132884186, ___z_stream_7)); }
	inline IntPtr_t get_z_stream_7() const { return ___z_stream_7; }
	inline IntPtr_t* get_address_of_z_stream_7() { return &___z_stream_7; }
	inline void set_z_stream_7(IntPtr_t value)
	{
		___z_stream_7 = value;
	}

	inline static int32_t get_offset_of_io_buffer_8() { return static_cast<int32_t>(offsetof(DeflateStream_t1132884186, ___io_buffer_8)); }
	inline ByteU5BU5D_t58506160* get_io_buffer_8() const { return ___io_buffer_8; }
	inline ByteU5BU5D_t58506160** get_address_of_io_buffer_8() { return &___io_buffer_8; }
	inline void set_io_buffer_8(ByteU5BU5D_t58506160* value)
	{
		___io_buffer_8 = value;
		Il2CppCodeGenWriteBarrier(&___io_buffer_8, value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(DeflateStream_t1132884186, ___data_9)); }
	inline GCHandle_t2146430982  get_data_9() const { return ___data_9; }
	inline GCHandle_t2146430982 * get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(GCHandle_t2146430982  value)
	{
		___data_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
