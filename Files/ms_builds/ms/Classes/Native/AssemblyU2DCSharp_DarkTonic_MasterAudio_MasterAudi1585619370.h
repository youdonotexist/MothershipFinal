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

// DarkTonic.MasterAudio.MasterAudio/<CreateBus>c__AnonStorey70
struct  U3CCreateBusU3Ec__AnonStorey70_t1585619370  : public Il2CppObject
{
public:
	// System.String DarkTonic.MasterAudio.MasterAudio/<CreateBus>c__AnonStorey70::busName
	String_t* ___busName_0;

public:
	inline static int32_t get_offset_of_busName_0() { return static_cast<int32_t>(offsetof(U3CCreateBusU3Ec__AnonStorey70_t1585619370, ___busName_0)); }
	inline String_t* get_busName_0() const { return ___busName_0; }
	inline String_t** get_address_of_busName_0() { return &___busName_0; }
	inline void set_busName_0(String_t* value)
	{
		___busName_0 = value;
		Il2CppCodeGenWriteBarrier(&___busName_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
