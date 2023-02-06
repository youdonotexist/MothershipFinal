#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.DuckGroupInfo
struct  DuckGroupInfo_t1384321187  : public Il2CppObject
{
public:
	// System.String DarkTonic.MasterAudio.DuckGroupInfo::soundType
	String_t* ___soundType_0;
	// System.Single DarkTonic.MasterAudio.DuckGroupInfo::riseVolStart
	float ___riseVolStart_1;

public:
	inline static int32_t get_offset_of_soundType_0() { return static_cast<int32_t>(offsetof(DuckGroupInfo_t1384321187, ___soundType_0)); }
	inline String_t* get_soundType_0() const { return ___soundType_0; }
	inline String_t** get_address_of_soundType_0() { return &___soundType_0; }
	inline void set_soundType_0(String_t* value)
	{
		___soundType_0 = value;
		Il2CppCodeGenWriteBarrier(&___soundType_0, value);
	}

	inline static int32_t get_offset_of_riseVolStart_1() { return static_cast<int32_t>(offsetof(DuckGroupInfo_t1384321187, ___riseVolStart_1)); }
	inline float get_riseVolStart_1() const { return ___riseVolStart_1; }
	inline float* get_address_of_riseVolStart_1() { return &___riseVolStart_1; }
	inline void set_riseVolStart_1(float value)
	{
		___riseVolStart_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
