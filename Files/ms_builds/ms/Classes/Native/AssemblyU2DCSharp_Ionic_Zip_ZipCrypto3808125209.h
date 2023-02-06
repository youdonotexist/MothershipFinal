#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.UInt32[]
struct UInt32U5BU5D_t2133601851;
// Ionic.Crc.CRC32
struct CRC32_t2657347115;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Zip.ZipCrypto
struct  ZipCrypto_t3808125209  : public Il2CppObject
{
public:
	// System.UInt32[] Ionic.Zip.ZipCrypto::_Keys
	UInt32U5BU5D_t2133601851* ____Keys_0;
	// Ionic.Crc.CRC32 Ionic.Zip.ZipCrypto::crc32
	CRC32_t2657347115 * ___crc32_1;

public:
	inline static int32_t get_offset_of__Keys_0() { return static_cast<int32_t>(offsetof(ZipCrypto_t3808125209, ____Keys_0)); }
	inline UInt32U5BU5D_t2133601851* get__Keys_0() const { return ____Keys_0; }
	inline UInt32U5BU5D_t2133601851** get_address_of__Keys_0() { return &____Keys_0; }
	inline void set__Keys_0(UInt32U5BU5D_t2133601851* value)
	{
		____Keys_0 = value;
		Il2CppCodeGenWriteBarrier(&____Keys_0, value);
	}

	inline static int32_t get_offset_of_crc32_1() { return static_cast<int32_t>(offsetof(ZipCrypto_t3808125209, ___crc32_1)); }
	inline CRC32_t2657347115 * get_crc32_1() const { return ___crc32_1; }
	inline CRC32_t2657347115 ** get_address_of_crc32_1() { return &___crc32_1; }
	inline void set_crc32_1(CRC32_t2657347115 * value)
	{
		___crc32_1 = value;
		Il2CppCodeGenWriteBarrier(&___crc32_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
