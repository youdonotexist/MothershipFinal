#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.MasterAudio/SoundGroupRefillInfo
struct  SoundGroupRefillInfo_t162956020  : public Il2CppObject
{
public:
	// System.Single DarkTonic.MasterAudio.MasterAudio/SoundGroupRefillInfo::LastTimePlayed
	float ___LastTimePlayed_0;
	// System.Single DarkTonic.MasterAudio.MasterAudio/SoundGroupRefillInfo::InactivePeriodSeconds
	float ___InactivePeriodSeconds_1;

public:
	inline static int32_t get_offset_of_LastTimePlayed_0() { return static_cast<int32_t>(offsetof(SoundGroupRefillInfo_t162956020, ___LastTimePlayed_0)); }
	inline float get_LastTimePlayed_0() const { return ___LastTimePlayed_0; }
	inline float* get_address_of_LastTimePlayed_0() { return &___LastTimePlayed_0; }
	inline void set_LastTimePlayed_0(float value)
	{
		___LastTimePlayed_0 = value;
	}

	inline static int32_t get_offset_of_InactivePeriodSeconds_1() { return static_cast<int32_t>(offsetof(SoundGroupRefillInfo_t162956020, ___InactivePeriodSeconds_1)); }
	inline float get_InactivePeriodSeconds_1() const { return ___InactivePeriodSeconds_1; }
	inline float* get_address_of_InactivePeriodSeconds_1() { return &___InactivePeriodSeconds_1; }
	inline void set_InactivePeriodSeconds_1(float value)
	{
		___InactivePeriodSeconds_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
