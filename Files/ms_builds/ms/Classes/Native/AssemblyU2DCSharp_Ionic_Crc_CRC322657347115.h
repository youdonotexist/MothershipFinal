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

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Crc.CRC32
struct  CRC32_t2657347115  : public Il2CppObject
{
public:
	// System.UInt32 Ionic.Crc.CRC32::dwPolynomial
	uint32_t ___dwPolynomial_1;
	// System.Int64 Ionic.Crc.CRC32::_TotalBytesRead
	int64_t ____TotalBytesRead_2;
	// System.Boolean Ionic.Crc.CRC32::reverseBits
	bool ___reverseBits_3;
	// System.UInt32[] Ionic.Crc.CRC32::crc32Table
	UInt32U5BU5D_t2133601851* ___crc32Table_4;
	// System.UInt32 Ionic.Crc.CRC32::_register
	uint32_t ____register_5;

public:
	inline static int32_t get_offset_of_dwPolynomial_1() { return static_cast<int32_t>(offsetof(CRC32_t2657347115, ___dwPolynomial_1)); }
	inline uint32_t get_dwPolynomial_1() const { return ___dwPolynomial_1; }
	inline uint32_t* get_address_of_dwPolynomial_1() { return &___dwPolynomial_1; }
	inline void set_dwPolynomial_1(uint32_t value)
	{
		___dwPolynomial_1 = value;
	}

	inline static int32_t get_offset_of__TotalBytesRead_2() { return static_cast<int32_t>(offsetof(CRC32_t2657347115, ____TotalBytesRead_2)); }
	inline int64_t get__TotalBytesRead_2() const { return ____TotalBytesRead_2; }
	inline int64_t* get_address_of__TotalBytesRead_2() { return &____TotalBytesRead_2; }
	inline void set__TotalBytesRead_2(int64_t value)
	{
		____TotalBytesRead_2 = value;
	}

	inline static int32_t get_offset_of_reverseBits_3() { return static_cast<int32_t>(offsetof(CRC32_t2657347115, ___reverseBits_3)); }
	inline bool get_reverseBits_3() const { return ___reverseBits_3; }
	inline bool* get_address_of_reverseBits_3() { return &___reverseBits_3; }
	inline void set_reverseBits_3(bool value)
	{
		___reverseBits_3 = value;
	}

	inline static int32_t get_offset_of_crc32Table_4() { return static_cast<int32_t>(offsetof(CRC32_t2657347115, ___crc32Table_4)); }
	inline UInt32U5BU5D_t2133601851* get_crc32Table_4() const { return ___crc32Table_4; }
	inline UInt32U5BU5D_t2133601851** get_address_of_crc32Table_4() { return &___crc32Table_4; }
	inline void set_crc32Table_4(UInt32U5BU5D_t2133601851* value)
	{
		___crc32Table_4 = value;
		Il2CppCodeGenWriteBarrier(&___crc32Table_4, value);
	}

	inline static int32_t get_offset_of__register_5() { return static_cast<int32_t>(offsetof(CRC32_t2657347115, ____register_5)); }
	inline uint32_t get__register_5() const { return ____register_5; }
	inline uint32_t* get_address_of__register_5() { return &____register_5; }
	inline void set__register_5(uint32_t value)
	{
		____register_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
