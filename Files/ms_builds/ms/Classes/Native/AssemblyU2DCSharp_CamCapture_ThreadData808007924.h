#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Color[]
struct ColorU5BU5D_t3477081137;
struct Color_t1588175760_marshaled_pinvoke;
struct Color_t1588175760_marshaled_com;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CamCapture/ThreadData
struct  ThreadData_t808007924 
{
public:
	// System.Int32 CamCapture/ThreadData::width
	int32_t ___width_0;
	// System.Int32 CamCapture/ThreadData::height
	int32_t ___height_1;
	// System.Int32 CamCapture/ThreadData::blockSize
	int32_t ___blockSize_2;
	// System.Int32 CamCapture/ThreadData::totalBlocks
	int32_t ___totalBlocks_3;
	// UnityEngine.Color[] CamCapture/ThreadData::inPixels
	ColorU5BU5D_t3477081137* ___inPixels_4;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(ThreadData_t808007924, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(ThreadData_t808007924, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_blockSize_2() { return static_cast<int32_t>(offsetof(ThreadData_t808007924, ___blockSize_2)); }
	inline int32_t get_blockSize_2() const { return ___blockSize_2; }
	inline int32_t* get_address_of_blockSize_2() { return &___blockSize_2; }
	inline void set_blockSize_2(int32_t value)
	{
		___blockSize_2 = value;
	}

	inline static int32_t get_offset_of_totalBlocks_3() { return static_cast<int32_t>(offsetof(ThreadData_t808007924, ___totalBlocks_3)); }
	inline int32_t get_totalBlocks_3() const { return ___totalBlocks_3; }
	inline int32_t* get_address_of_totalBlocks_3() { return &___totalBlocks_3; }
	inline void set_totalBlocks_3(int32_t value)
	{
		___totalBlocks_3 = value;
	}

	inline static int32_t get_offset_of_inPixels_4() { return static_cast<int32_t>(offsetof(ThreadData_t808007924, ___inPixels_4)); }
	inline ColorU5BU5D_t3477081137* get_inPixels_4() const { return ___inPixels_4; }
	inline ColorU5BU5D_t3477081137** get_address_of_inPixels_4() { return &___inPixels_4; }
	inline void set_inPixels_4(ColorU5BU5D_t3477081137* value)
	{
		___inPixels_4 = value;
		Il2CppCodeGenWriteBarrier(&___inPixels_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: CamCapture/ThreadData
struct ThreadData_t808007924_marshaled_pinvoke
{
	int32_t ___width_0;
	int32_t ___height_1;
	int32_t ___blockSize_2;
	int32_t ___totalBlocks_3;
	Color_t1588175760_marshaled_pinvoke* ___inPixels_4;
};
// Native definition for marshalling of: CamCapture/ThreadData
struct ThreadData_t808007924_marshaled_com
{
	int32_t ___width_0;
	int32_t ___height_1;
	int32_t ___blockSize_2;
	int32_t ___totalBlocks_3;
	Color_t1588175760_marshaled_com* ___inPixels_4;
};
