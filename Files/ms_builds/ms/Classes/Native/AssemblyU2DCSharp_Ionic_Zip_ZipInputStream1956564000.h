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
// System.Text.Encoding
struct Encoding_t180559927;
// Ionic.Zip.ZipEntry
struct ZipEntry_t2226789352;
// Ionic.Zip.ZipContainer
struct ZipContainer_t2405009527;
// Ionic.Crc.CrcCalculatorStream
struct CrcCalculatorStream_t87996942;
// System.String
struct String_t;

#include "mscorlib_System_IO_Stream219029575.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Zip.ZipInputStream
struct  ZipInputStream_t1956564000  : public Stream_t219029575
{
public:
	// System.IO.Stream Ionic.Zip.ZipInputStream::_inputStream
	Stream_t219029575 * ____inputStream_2;
	// System.Text.Encoding Ionic.Zip.ZipInputStream::_provisionalAlternateEncoding
	Encoding_t180559927 * ____provisionalAlternateEncoding_3;
	// Ionic.Zip.ZipEntry Ionic.Zip.ZipInputStream::_currentEntry
	ZipEntry_t2226789352 * ____currentEntry_4;
	// System.Boolean Ionic.Zip.ZipInputStream::_firstEntry
	bool ____firstEntry_5;
	// System.Boolean Ionic.Zip.ZipInputStream::_needSetup
	bool ____needSetup_6;
	// Ionic.Zip.ZipContainer Ionic.Zip.ZipInputStream::_container
	ZipContainer_t2405009527 * ____container_7;
	// Ionic.Crc.CrcCalculatorStream Ionic.Zip.ZipInputStream::_crcStream
	CrcCalculatorStream_t87996942 * ____crcStream_8;
	// System.Int64 Ionic.Zip.ZipInputStream::_LeftToRead
	int64_t ____LeftToRead_9;
	// System.String Ionic.Zip.ZipInputStream::_Password
	String_t* ____Password_10;
	// System.Int64 Ionic.Zip.ZipInputStream::_endOfEntry
	int64_t ____endOfEntry_11;
	// System.String Ionic.Zip.ZipInputStream::_name
	String_t* ____name_12;
	// System.Boolean Ionic.Zip.ZipInputStream::_leaveUnderlyingStreamOpen
	bool ____leaveUnderlyingStreamOpen_13;
	// System.Boolean Ionic.Zip.ZipInputStream::_closed
	bool ____closed_14;
	// System.Boolean Ionic.Zip.ZipInputStream::_findRequired
	bool ____findRequired_15;
	// System.Boolean Ionic.Zip.ZipInputStream::_exceptionPending
	bool ____exceptionPending_16;
	// System.Int32 Ionic.Zip.ZipInputStream::<CodecBufferSize>k__BackingField
	int32_t ___U3CCodecBufferSizeU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of__inputStream_2() { return static_cast<int32_t>(offsetof(ZipInputStream_t1956564000, ____inputStream_2)); }
	inline Stream_t219029575 * get__inputStream_2() const { return ____inputStream_2; }
	inline Stream_t219029575 ** get_address_of__inputStream_2() { return &____inputStream_2; }
	inline void set__inputStream_2(Stream_t219029575 * value)
	{
		____inputStream_2 = value;
		Il2CppCodeGenWriteBarrier(&____inputStream_2, value);
	}

	inline static int32_t get_offset_of__provisionalAlternateEncoding_3() { return static_cast<int32_t>(offsetof(ZipInputStream_t1956564000, ____provisionalAlternateEncoding_3)); }
	inline Encoding_t180559927 * get__provisionalAlternateEncoding_3() const { return ____provisionalAlternateEncoding_3; }
	inline Encoding_t180559927 ** get_address_of__provisionalAlternateEncoding_3() { return &____provisionalAlternateEncoding_3; }
	inline void set__provisionalAlternateEncoding_3(Encoding_t180559927 * value)
	{
		____provisionalAlternateEncoding_3 = value;
		Il2CppCodeGenWriteBarrier(&____provisionalAlternateEncoding_3, value);
	}

	inline static int32_t get_offset_of__currentEntry_4() { return static_cast<int32_t>(offsetof(ZipInputStream_t1956564000, ____currentEntry_4)); }
	inline ZipEntry_t2226789352 * get__currentEntry_4() const { return ____currentEntry_4; }
	inline ZipEntry_t2226789352 ** get_address_of__currentEntry_4() { return &____currentEntry_4; }
	inline void set__currentEntry_4(ZipEntry_t2226789352 * value)
	{
		____currentEntry_4 = value;
		Il2CppCodeGenWriteBarrier(&____currentEntry_4, value);
	}

	inline static int32_t get_offset_of__firstEntry_5() { return static_cast<int32_t>(offsetof(ZipInputStream_t1956564000, ____firstEntry_5)); }
	inline bool get__firstEntry_5() const { return ____firstEntry_5; }
	inline bool* get_address_of__firstEntry_5() { return &____firstEntry_5; }
	inline void set__firstEntry_5(bool value)
	{
		____firstEntry_5 = value;
	}

	inline static int32_t get_offset_of__needSetup_6() { return static_cast<int32_t>(offsetof(ZipInputStream_t1956564000, ____needSetup_6)); }
	inline bool get__needSetup_6() const { return ____needSetup_6; }
	inline bool* get_address_of__needSetup_6() { return &____needSetup_6; }
	inline void set__needSetup_6(bool value)
	{
		____needSetup_6 = value;
	}

	inline static int32_t get_offset_of__container_7() { return static_cast<int32_t>(offsetof(ZipInputStream_t1956564000, ____container_7)); }
	inline ZipContainer_t2405009527 * get__container_7() const { return ____container_7; }
	inline ZipContainer_t2405009527 ** get_address_of__container_7() { return &____container_7; }
	inline void set__container_7(ZipContainer_t2405009527 * value)
	{
		____container_7 = value;
		Il2CppCodeGenWriteBarrier(&____container_7, value);
	}

	inline static int32_t get_offset_of__crcStream_8() { return static_cast<int32_t>(offsetof(ZipInputStream_t1956564000, ____crcStream_8)); }
	inline CrcCalculatorStream_t87996942 * get__crcStream_8() const { return ____crcStream_8; }
	inline CrcCalculatorStream_t87996942 ** get_address_of__crcStream_8() { return &____crcStream_8; }
	inline void set__crcStream_8(CrcCalculatorStream_t87996942 * value)
	{
		____crcStream_8 = value;
		Il2CppCodeGenWriteBarrier(&____crcStream_8, value);
	}

	inline static int32_t get_offset_of__LeftToRead_9() { return static_cast<int32_t>(offsetof(ZipInputStream_t1956564000, ____LeftToRead_9)); }
	inline int64_t get__LeftToRead_9() const { return ____LeftToRead_9; }
	inline int64_t* get_address_of__LeftToRead_9() { return &____LeftToRead_9; }
	inline void set__LeftToRead_9(int64_t value)
	{
		____LeftToRead_9 = value;
	}

	inline static int32_t get_offset_of__Password_10() { return static_cast<int32_t>(offsetof(ZipInputStream_t1956564000, ____Password_10)); }
	inline String_t* get__Password_10() const { return ____Password_10; }
	inline String_t** get_address_of__Password_10() { return &____Password_10; }
	inline void set__Password_10(String_t* value)
	{
		____Password_10 = value;
		Il2CppCodeGenWriteBarrier(&____Password_10, value);
	}

	inline static int32_t get_offset_of__endOfEntry_11() { return static_cast<int32_t>(offsetof(ZipInputStream_t1956564000, ____endOfEntry_11)); }
	inline int64_t get__endOfEntry_11() const { return ____endOfEntry_11; }
	inline int64_t* get_address_of__endOfEntry_11() { return &____endOfEntry_11; }
	inline void set__endOfEntry_11(int64_t value)
	{
		____endOfEntry_11 = value;
	}

	inline static int32_t get_offset_of__name_12() { return static_cast<int32_t>(offsetof(ZipInputStream_t1956564000, ____name_12)); }
	inline String_t* get__name_12() const { return ____name_12; }
	inline String_t** get_address_of__name_12() { return &____name_12; }
	inline void set__name_12(String_t* value)
	{
		____name_12 = value;
		Il2CppCodeGenWriteBarrier(&____name_12, value);
	}

	inline static int32_t get_offset_of__leaveUnderlyingStreamOpen_13() { return static_cast<int32_t>(offsetof(ZipInputStream_t1956564000, ____leaveUnderlyingStreamOpen_13)); }
	inline bool get__leaveUnderlyingStreamOpen_13() const { return ____leaveUnderlyingStreamOpen_13; }
	inline bool* get_address_of__leaveUnderlyingStreamOpen_13() { return &____leaveUnderlyingStreamOpen_13; }
	inline void set__leaveUnderlyingStreamOpen_13(bool value)
	{
		____leaveUnderlyingStreamOpen_13 = value;
	}

	inline static int32_t get_offset_of__closed_14() { return static_cast<int32_t>(offsetof(ZipInputStream_t1956564000, ____closed_14)); }
	inline bool get__closed_14() const { return ____closed_14; }
	inline bool* get_address_of__closed_14() { return &____closed_14; }
	inline void set__closed_14(bool value)
	{
		____closed_14 = value;
	}

	inline static int32_t get_offset_of__findRequired_15() { return static_cast<int32_t>(offsetof(ZipInputStream_t1956564000, ____findRequired_15)); }
	inline bool get__findRequired_15() const { return ____findRequired_15; }
	inline bool* get_address_of__findRequired_15() { return &____findRequired_15; }
	inline void set__findRequired_15(bool value)
	{
		____findRequired_15 = value;
	}

	inline static int32_t get_offset_of__exceptionPending_16() { return static_cast<int32_t>(offsetof(ZipInputStream_t1956564000, ____exceptionPending_16)); }
	inline bool get__exceptionPending_16() const { return ____exceptionPending_16; }
	inline bool* get_address_of__exceptionPending_16() { return &____exceptionPending_16; }
	inline void set__exceptionPending_16(bool value)
	{
		____exceptionPending_16 = value;
	}

	inline static int32_t get_offset_of_U3CCodecBufferSizeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(ZipInputStream_t1956564000, ___U3CCodecBufferSizeU3Ek__BackingField_17)); }
	inline int32_t get_U3CCodecBufferSizeU3Ek__BackingField_17() const { return ___U3CCodecBufferSizeU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CCodecBufferSizeU3Ek__BackingField_17() { return &___U3CCodecBufferSizeU3Ek__BackingField_17; }
	inline void set_U3CCodecBufferSizeU3Ek__BackingField_17(int32_t value)
	{
		___U3CCodecBufferSizeU3Ek__BackingField_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
