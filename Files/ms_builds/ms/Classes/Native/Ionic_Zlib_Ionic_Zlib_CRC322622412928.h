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

// Ionic.Zlib.CRC32
struct  CRC32_t2622412928  : public Il2CppObject
{
public:
	// System.Int64 Ionic.Zlib.CRC32::_TotalBytesRead
	int64_t ____TotalBytesRead_0;
	// System.UInt32 Ionic.Zlib.CRC32::_RunningCrc32Result
	uint32_t ____RunningCrc32Result_2;

public:
	inline static int32_t get_offset_of__TotalBytesRead_0() { return static_cast<int32_t>(offsetof(CRC32_t2622412928, ____TotalBytesRead_0)); }
	inline int64_t get__TotalBytesRead_0() const { return ____TotalBytesRead_0; }
	inline int64_t* get_address_of__TotalBytesRead_0() { return &____TotalBytesRead_0; }
	inline void set__TotalBytesRead_0(int64_t value)
	{
		____TotalBytesRead_0 = value;
	}

	inline static int32_t get_offset_of__RunningCrc32Result_2() { return static_cast<int32_t>(offsetof(CRC32_t2622412928, ____RunningCrc32Result_2)); }
	inline uint32_t get__RunningCrc32Result_2() const { return ____RunningCrc32Result_2; }
	inline uint32_t* get_address_of__RunningCrc32Result_2() { return &____RunningCrc32Result_2; }
	inline void set__RunningCrc32Result_2(uint32_t value)
	{
		____RunningCrc32Result_2 = value;
	}
};

struct CRC32_t2622412928_StaticFields
{
public:
	// System.UInt32[] Ionic.Zlib.CRC32::crc32Table
	UInt32U5BU5D_t2133601851* ___crc32Table_1;

public:
	inline static int32_t get_offset_of_crc32Table_1() { return static_cast<int32_t>(offsetof(CRC32_t2622412928_StaticFields, ___crc32Table_1)); }
	inline UInt32U5BU5D_t2133601851* get_crc32Table_1() const { return ___crc32Table_1; }
	inline UInt32U5BU5D_t2133601851** get_address_of_crc32Table_1() { return &___crc32Table_1; }
	inline void set_crc32Table_1(UInt32U5BU5D_t2133601851* value)
	{
		___crc32Table_1 = value;
		Il2CppCodeGenWriteBarrier(&___crc32Table_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
