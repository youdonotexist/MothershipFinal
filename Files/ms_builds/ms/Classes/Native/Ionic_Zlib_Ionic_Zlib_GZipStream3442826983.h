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
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t180559927;

#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_Nullable_1_gen3225071844.h"
#include "mscorlib_System_DateTime339033936.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Zlib.GZipStream
struct  GZipStream_t3442826983  : public Stream_t219029575
{
public:
	// System.Nullable`1<System.DateTime> Ionic.Zlib.GZipStream::LastModified
	Nullable_1_t3225071844  ___LastModified_2;
	// System.Int32 Ionic.Zlib.GZipStream::_headerByteCount
	int32_t ____headerByteCount_3;
	// Ionic.Zlib.ZlibBaseStream Ionic.Zlib.GZipStream::_baseStream
	ZlibBaseStream_t221596009 * ____baseStream_4;
	// System.Boolean Ionic.Zlib.GZipStream::_disposed
	bool ____disposed_5;
	// System.Boolean Ionic.Zlib.GZipStream::_firstReadDone
	bool ____firstReadDone_6;
	// System.String Ionic.Zlib.GZipStream::_FileName
	String_t* ____FileName_7;
	// System.String Ionic.Zlib.GZipStream::_Comment
	String_t* ____Comment_8;
	// System.Int32 Ionic.Zlib.GZipStream::_Crc32
	int32_t ____Crc32_9;

public:
	inline static int32_t get_offset_of_LastModified_2() { return static_cast<int32_t>(offsetof(GZipStream_t3442826983, ___LastModified_2)); }
	inline Nullable_1_t3225071844  get_LastModified_2() const { return ___LastModified_2; }
	inline Nullable_1_t3225071844 * get_address_of_LastModified_2() { return &___LastModified_2; }
	inline void set_LastModified_2(Nullable_1_t3225071844  value)
	{
		___LastModified_2 = value;
	}

	inline static int32_t get_offset_of__headerByteCount_3() { return static_cast<int32_t>(offsetof(GZipStream_t3442826983, ____headerByteCount_3)); }
	inline int32_t get__headerByteCount_3() const { return ____headerByteCount_3; }
	inline int32_t* get_address_of__headerByteCount_3() { return &____headerByteCount_3; }
	inline void set__headerByteCount_3(int32_t value)
	{
		____headerByteCount_3 = value;
	}

	inline static int32_t get_offset_of__baseStream_4() { return static_cast<int32_t>(offsetof(GZipStream_t3442826983, ____baseStream_4)); }
	inline ZlibBaseStream_t221596009 * get__baseStream_4() const { return ____baseStream_4; }
	inline ZlibBaseStream_t221596009 ** get_address_of__baseStream_4() { return &____baseStream_4; }
	inline void set__baseStream_4(ZlibBaseStream_t221596009 * value)
	{
		____baseStream_4 = value;
		Il2CppCodeGenWriteBarrier(&____baseStream_4, value);
	}

	inline static int32_t get_offset_of__disposed_5() { return static_cast<int32_t>(offsetof(GZipStream_t3442826983, ____disposed_5)); }
	inline bool get__disposed_5() const { return ____disposed_5; }
	inline bool* get_address_of__disposed_5() { return &____disposed_5; }
	inline void set__disposed_5(bool value)
	{
		____disposed_5 = value;
	}

	inline static int32_t get_offset_of__firstReadDone_6() { return static_cast<int32_t>(offsetof(GZipStream_t3442826983, ____firstReadDone_6)); }
	inline bool get__firstReadDone_6() const { return ____firstReadDone_6; }
	inline bool* get_address_of__firstReadDone_6() { return &____firstReadDone_6; }
	inline void set__firstReadDone_6(bool value)
	{
		____firstReadDone_6 = value;
	}

	inline static int32_t get_offset_of__FileName_7() { return static_cast<int32_t>(offsetof(GZipStream_t3442826983, ____FileName_7)); }
	inline String_t* get__FileName_7() const { return ____FileName_7; }
	inline String_t** get_address_of__FileName_7() { return &____FileName_7; }
	inline void set__FileName_7(String_t* value)
	{
		____FileName_7 = value;
		Il2CppCodeGenWriteBarrier(&____FileName_7, value);
	}

	inline static int32_t get_offset_of__Comment_8() { return static_cast<int32_t>(offsetof(GZipStream_t3442826983, ____Comment_8)); }
	inline String_t* get__Comment_8() const { return ____Comment_8; }
	inline String_t** get_address_of__Comment_8() { return &____Comment_8; }
	inline void set__Comment_8(String_t* value)
	{
		____Comment_8 = value;
		Il2CppCodeGenWriteBarrier(&____Comment_8, value);
	}

	inline static int32_t get_offset_of__Crc32_9() { return static_cast<int32_t>(offsetof(GZipStream_t3442826983, ____Crc32_9)); }
	inline int32_t get__Crc32_9() const { return ____Crc32_9; }
	inline int32_t* get_address_of__Crc32_9() { return &____Crc32_9; }
	inline void set__Crc32_9(int32_t value)
	{
		____Crc32_9 = value;
	}
};

struct GZipStream_t3442826983_StaticFields
{
public:
	// System.DateTime Ionic.Zlib.GZipStream::_unixEpoch
	DateTime_t339033936  ____unixEpoch_10;
	// System.Text.Encoding Ionic.Zlib.GZipStream::iso8859dash1
	Encoding_t180559927 * ___iso8859dash1_11;

public:
	inline static int32_t get_offset_of__unixEpoch_10() { return static_cast<int32_t>(offsetof(GZipStream_t3442826983_StaticFields, ____unixEpoch_10)); }
	inline DateTime_t339033936  get__unixEpoch_10() const { return ____unixEpoch_10; }
	inline DateTime_t339033936 * get_address_of__unixEpoch_10() { return &____unixEpoch_10; }
	inline void set__unixEpoch_10(DateTime_t339033936  value)
	{
		____unixEpoch_10 = value;
	}

	inline static int32_t get_offset_of_iso8859dash1_11() { return static_cast<int32_t>(offsetof(GZipStream_t3442826983_StaticFields, ___iso8859dash1_11)); }
	inline Encoding_t180559927 * get_iso8859dash1_11() const { return ___iso8859dash1_11; }
	inline Encoding_t180559927 ** get_address_of_iso8859dash1_11() { return &___iso8859dash1_11; }
	inline void set_iso8859dash1_11(Encoding_t180559927 * value)
	{
		___iso8859dash1_11 = value;
		Il2CppCodeGenWriteBarrier(&___iso8859dash1_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
