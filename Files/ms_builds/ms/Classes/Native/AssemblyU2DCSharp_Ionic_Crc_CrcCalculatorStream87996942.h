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
// Ionic.Crc.CRC32
struct CRC32_t2657347115;

#include "mscorlib_System_IO_Stream219029575.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Crc.CrcCalculatorStream
struct  CrcCalculatorStream_t87996942  : public Stream_t219029575
{
public:
	// System.IO.Stream Ionic.Crc.CrcCalculatorStream::_innerStream
	Stream_t219029575 * ____innerStream_3;
	// Ionic.Crc.CRC32 Ionic.Crc.CrcCalculatorStream::_Crc32
	CRC32_t2657347115 * ____Crc32_4;
	// System.Int64 Ionic.Crc.CrcCalculatorStream::_lengthLimit
	int64_t ____lengthLimit_5;
	// System.Boolean Ionic.Crc.CrcCalculatorStream::_leaveOpen
	bool ____leaveOpen_6;

public:
	inline static int32_t get_offset_of__innerStream_3() { return static_cast<int32_t>(offsetof(CrcCalculatorStream_t87996942, ____innerStream_3)); }
	inline Stream_t219029575 * get__innerStream_3() const { return ____innerStream_3; }
	inline Stream_t219029575 ** get_address_of__innerStream_3() { return &____innerStream_3; }
	inline void set__innerStream_3(Stream_t219029575 * value)
	{
		____innerStream_3 = value;
		Il2CppCodeGenWriteBarrier(&____innerStream_3, value);
	}

	inline static int32_t get_offset_of__Crc32_4() { return static_cast<int32_t>(offsetof(CrcCalculatorStream_t87996942, ____Crc32_4)); }
	inline CRC32_t2657347115 * get__Crc32_4() const { return ____Crc32_4; }
	inline CRC32_t2657347115 ** get_address_of__Crc32_4() { return &____Crc32_4; }
	inline void set__Crc32_4(CRC32_t2657347115 * value)
	{
		____Crc32_4 = value;
		Il2CppCodeGenWriteBarrier(&____Crc32_4, value);
	}

	inline static int32_t get_offset_of__lengthLimit_5() { return static_cast<int32_t>(offsetof(CrcCalculatorStream_t87996942, ____lengthLimit_5)); }
	inline int64_t get__lengthLimit_5() const { return ____lengthLimit_5; }
	inline int64_t* get_address_of__lengthLimit_5() { return &____lengthLimit_5; }
	inline void set__lengthLimit_5(int64_t value)
	{
		____lengthLimit_5 = value;
	}

	inline static int32_t get_offset_of__leaveOpen_6() { return static_cast<int32_t>(offsetof(CrcCalculatorStream_t87996942, ____leaveOpen_6)); }
	inline bool get__leaveOpen_6() const { return ____leaveOpen_6; }
	inline bool* get_address_of__leaveOpen_6() { return &____leaveOpen_6; }
	inline void set__leaveOpen_6(bool value)
	{
		____leaveOpen_6 = value;
	}
};

struct CrcCalculatorStream_t87996942_StaticFields
{
public:
	// System.Int64 Ionic.Crc.CrcCalculatorStream::UnsetLengthLimit
	int64_t ___UnsetLengthLimit_2;

public:
	inline static int32_t get_offset_of_UnsetLengthLimit_2() { return static_cast<int32_t>(offsetof(CrcCalculatorStream_t87996942_StaticFields, ___UnsetLengthLimit_2)); }
	inline int64_t get_UnsetLengthLimit_2() const { return ___UnsetLengthLimit_2; }
	inline int64_t* get_address_of_UnsetLengthLimit_2() { return &___UnsetLengthLimit_2; }
	inline void set_UnsetLengthLimit_2(int64_t value)
	{
		___UnsetLengthLimit_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
