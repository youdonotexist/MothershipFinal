#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Ionic.Zlib.ZlibCodec
struct ZlibCodec_t3910383704;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.IO.Stream
struct Stream_t219029575;
// Ionic.Zlib.CRC32
struct CRC32_t2622412928;
// System.String
struct String_t;

#include "mscorlib_System_IO_Stream219029575.h"
#include "Ionic_Zlib_Ionic_Zlib_ZlibBaseStream_StreamMode798497123.h"
#include "Ionic_Zlib_Ionic_Zlib_FlushType3984958891.h"
#include "Ionic_Zlib_Ionic_Zlib_ZlibStreamFlavor1582004022.h"
#include "Ionic_Zlib_Ionic_Zlib_CompressionMode1632830838.h"
#include "Ionic_Zlib_Ionic_Zlib_CompressionLevel3940478795.h"
#include "Ionic_Zlib_Ionic_Zlib_CompressionStrategy2328611910.h"
#include "mscorlib_System_DateTime339033936.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Zlib.ZlibBaseStream
struct  ZlibBaseStream_t221596009  : public Stream_t219029575
{
public:
	// Ionic.Zlib.ZlibCodec Ionic.Zlib.ZlibBaseStream::_z
	ZlibCodec_t3910383704 * ____z_2;
	// Ionic.Zlib.ZlibBaseStream/StreamMode Ionic.Zlib.ZlibBaseStream::_streamMode
	int32_t ____streamMode_3;
	// Ionic.Zlib.FlushType Ionic.Zlib.ZlibBaseStream::_flushMode
	int32_t ____flushMode_4;
	// Ionic.Zlib.ZlibStreamFlavor Ionic.Zlib.ZlibBaseStream::_flavor
	int32_t ____flavor_5;
	// Ionic.Zlib.CompressionMode Ionic.Zlib.ZlibBaseStream::_compressionMode
	int32_t ____compressionMode_6;
	// Ionic.Zlib.CompressionLevel Ionic.Zlib.ZlibBaseStream::_level
	int32_t ____level_7;
	// System.Boolean Ionic.Zlib.ZlibBaseStream::_leaveOpen
	bool ____leaveOpen_8;
	// System.Byte[] Ionic.Zlib.ZlibBaseStream::_workingBuffer
	ByteU5BU5D_t58506160* ____workingBuffer_9;
	// System.Int32 Ionic.Zlib.ZlibBaseStream::_bufferSize
	int32_t ____bufferSize_10;
	// System.Byte[] Ionic.Zlib.ZlibBaseStream::_buf1
	ByteU5BU5D_t58506160* ____buf1_11;
	// System.IO.Stream Ionic.Zlib.ZlibBaseStream::_stream
	Stream_t219029575 * ____stream_12;
	// Ionic.Zlib.CompressionStrategy Ionic.Zlib.ZlibBaseStream::Strategy
	int32_t ___Strategy_13;
	// Ionic.Zlib.CRC32 Ionic.Zlib.ZlibBaseStream::crc
	CRC32_t2622412928 * ___crc_14;
	// System.String Ionic.Zlib.ZlibBaseStream::_GzipFileName
	String_t* ____GzipFileName_15;
	// System.String Ionic.Zlib.ZlibBaseStream::_GzipComment
	String_t* ____GzipComment_16;
	// System.DateTime Ionic.Zlib.ZlibBaseStream::_GzipMtime
	DateTime_t339033936  ____GzipMtime_17;
	// System.Int32 Ionic.Zlib.ZlibBaseStream::_gzipHeaderByteCount
	int32_t ____gzipHeaderByteCount_18;
	// System.Boolean Ionic.Zlib.ZlibBaseStream::nomoreinput
	bool ___nomoreinput_19;

public:
	inline static int32_t get_offset_of__z_2() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t221596009, ____z_2)); }
	inline ZlibCodec_t3910383704 * get__z_2() const { return ____z_2; }
	inline ZlibCodec_t3910383704 ** get_address_of__z_2() { return &____z_2; }
	inline void set__z_2(ZlibCodec_t3910383704 * value)
	{
		____z_2 = value;
		Il2CppCodeGenWriteBarrier(&____z_2, value);
	}

	inline static int32_t get_offset_of__streamMode_3() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t221596009, ____streamMode_3)); }
	inline int32_t get__streamMode_3() const { return ____streamMode_3; }
	inline int32_t* get_address_of__streamMode_3() { return &____streamMode_3; }
	inline void set__streamMode_3(int32_t value)
	{
		____streamMode_3 = value;
	}

	inline static int32_t get_offset_of__flushMode_4() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t221596009, ____flushMode_4)); }
	inline int32_t get__flushMode_4() const { return ____flushMode_4; }
	inline int32_t* get_address_of__flushMode_4() { return &____flushMode_4; }
	inline void set__flushMode_4(int32_t value)
	{
		____flushMode_4 = value;
	}

	inline static int32_t get_offset_of__flavor_5() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t221596009, ____flavor_5)); }
	inline int32_t get__flavor_5() const { return ____flavor_5; }
	inline int32_t* get_address_of__flavor_5() { return &____flavor_5; }
	inline void set__flavor_5(int32_t value)
	{
		____flavor_5 = value;
	}

	inline static int32_t get_offset_of__compressionMode_6() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t221596009, ____compressionMode_6)); }
	inline int32_t get__compressionMode_6() const { return ____compressionMode_6; }
	inline int32_t* get_address_of__compressionMode_6() { return &____compressionMode_6; }
	inline void set__compressionMode_6(int32_t value)
	{
		____compressionMode_6 = value;
	}

	inline static int32_t get_offset_of__level_7() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t221596009, ____level_7)); }
	inline int32_t get__level_7() const { return ____level_7; }
	inline int32_t* get_address_of__level_7() { return &____level_7; }
	inline void set__level_7(int32_t value)
	{
		____level_7 = value;
	}

	inline static int32_t get_offset_of__leaveOpen_8() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t221596009, ____leaveOpen_8)); }
	inline bool get__leaveOpen_8() const { return ____leaveOpen_8; }
	inline bool* get_address_of__leaveOpen_8() { return &____leaveOpen_8; }
	inline void set__leaveOpen_8(bool value)
	{
		____leaveOpen_8 = value;
	}

	inline static int32_t get_offset_of__workingBuffer_9() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t221596009, ____workingBuffer_9)); }
	inline ByteU5BU5D_t58506160* get__workingBuffer_9() const { return ____workingBuffer_9; }
	inline ByteU5BU5D_t58506160** get_address_of__workingBuffer_9() { return &____workingBuffer_9; }
	inline void set__workingBuffer_9(ByteU5BU5D_t58506160* value)
	{
		____workingBuffer_9 = value;
		Il2CppCodeGenWriteBarrier(&____workingBuffer_9, value);
	}

	inline static int32_t get_offset_of__bufferSize_10() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t221596009, ____bufferSize_10)); }
	inline int32_t get__bufferSize_10() const { return ____bufferSize_10; }
	inline int32_t* get_address_of__bufferSize_10() { return &____bufferSize_10; }
	inline void set__bufferSize_10(int32_t value)
	{
		____bufferSize_10 = value;
	}

	inline static int32_t get_offset_of__buf1_11() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t221596009, ____buf1_11)); }
	inline ByteU5BU5D_t58506160* get__buf1_11() const { return ____buf1_11; }
	inline ByteU5BU5D_t58506160** get_address_of__buf1_11() { return &____buf1_11; }
	inline void set__buf1_11(ByteU5BU5D_t58506160* value)
	{
		____buf1_11 = value;
		Il2CppCodeGenWriteBarrier(&____buf1_11, value);
	}

	inline static int32_t get_offset_of__stream_12() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t221596009, ____stream_12)); }
	inline Stream_t219029575 * get__stream_12() const { return ____stream_12; }
	inline Stream_t219029575 ** get_address_of__stream_12() { return &____stream_12; }
	inline void set__stream_12(Stream_t219029575 * value)
	{
		____stream_12 = value;
		Il2CppCodeGenWriteBarrier(&____stream_12, value);
	}

	inline static int32_t get_offset_of_Strategy_13() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t221596009, ___Strategy_13)); }
	inline int32_t get_Strategy_13() const { return ___Strategy_13; }
	inline int32_t* get_address_of_Strategy_13() { return &___Strategy_13; }
	inline void set_Strategy_13(int32_t value)
	{
		___Strategy_13 = value;
	}

	inline static int32_t get_offset_of_crc_14() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t221596009, ___crc_14)); }
	inline CRC32_t2622412928 * get_crc_14() const { return ___crc_14; }
	inline CRC32_t2622412928 ** get_address_of_crc_14() { return &___crc_14; }
	inline void set_crc_14(CRC32_t2622412928 * value)
	{
		___crc_14 = value;
		Il2CppCodeGenWriteBarrier(&___crc_14, value);
	}

	inline static int32_t get_offset_of__GzipFileName_15() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t221596009, ____GzipFileName_15)); }
	inline String_t* get__GzipFileName_15() const { return ____GzipFileName_15; }
	inline String_t** get_address_of__GzipFileName_15() { return &____GzipFileName_15; }
	inline void set__GzipFileName_15(String_t* value)
	{
		____GzipFileName_15 = value;
		Il2CppCodeGenWriteBarrier(&____GzipFileName_15, value);
	}

	inline static int32_t get_offset_of__GzipComment_16() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t221596009, ____GzipComment_16)); }
	inline String_t* get__GzipComment_16() const { return ____GzipComment_16; }
	inline String_t** get_address_of__GzipComment_16() { return &____GzipComment_16; }
	inline void set__GzipComment_16(String_t* value)
	{
		____GzipComment_16 = value;
		Il2CppCodeGenWriteBarrier(&____GzipComment_16, value);
	}

	inline static int32_t get_offset_of__GzipMtime_17() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t221596009, ____GzipMtime_17)); }
	inline DateTime_t339033936  get__GzipMtime_17() const { return ____GzipMtime_17; }
	inline DateTime_t339033936 * get_address_of__GzipMtime_17() { return &____GzipMtime_17; }
	inline void set__GzipMtime_17(DateTime_t339033936  value)
	{
		____GzipMtime_17 = value;
	}

	inline static int32_t get_offset_of__gzipHeaderByteCount_18() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t221596009, ____gzipHeaderByteCount_18)); }
	inline int32_t get__gzipHeaderByteCount_18() const { return ____gzipHeaderByteCount_18; }
	inline int32_t* get_address_of__gzipHeaderByteCount_18() { return &____gzipHeaderByteCount_18; }
	inline void set__gzipHeaderByteCount_18(int32_t value)
	{
		____gzipHeaderByteCount_18 = value;
	}

	inline static int32_t get_offset_of_nomoreinput_19() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t221596009, ___nomoreinput_19)); }
	inline bool get_nomoreinput_19() const { return ___nomoreinput_19; }
	inline bool* get_address_of_nomoreinput_19() { return &___nomoreinput_19; }
	inline void set_nomoreinput_19(bool value)
	{
		___nomoreinput_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
