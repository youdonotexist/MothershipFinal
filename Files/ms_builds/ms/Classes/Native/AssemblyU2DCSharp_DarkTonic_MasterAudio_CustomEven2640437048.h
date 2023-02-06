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
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi4230668765.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.CustomEvent
struct  CustomEvent_t2640437048  : public Il2CppObject
{
public:
	// System.String DarkTonic.MasterAudio.CustomEvent::EventName
	String_t* ___EventName_0;
	// System.String DarkTonic.MasterAudio.CustomEvent::ProspectiveName
	String_t* ___ProspectiveName_1;
	// System.Boolean DarkTonic.MasterAudio.CustomEvent::eventExpanded
	bool ___eventExpanded_2;
	// DarkTonic.MasterAudio.MasterAudio/CustomEventReceiveMode DarkTonic.MasterAudio.CustomEvent::eventReceiveMode
	int32_t ___eventReceiveMode_3;
	// System.Single DarkTonic.MasterAudio.CustomEvent::distanceThreshold
	float ___distanceThreshold_4;
	// System.Int32 DarkTonic.MasterAudio.CustomEvent::frameLastFired
	int32_t ___frameLastFired_5;

public:
	inline static int32_t get_offset_of_EventName_0() { return static_cast<int32_t>(offsetof(CustomEvent_t2640437048, ___EventName_0)); }
	inline String_t* get_EventName_0() const { return ___EventName_0; }
	inline String_t** get_address_of_EventName_0() { return &___EventName_0; }
	inline void set_EventName_0(String_t* value)
	{
		___EventName_0 = value;
		Il2CppCodeGenWriteBarrier(&___EventName_0, value);
	}

	inline static int32_t get_offset_of_ProspectiveName_1() { return static_cast<int32_t>(offsetof(CustomEvent_t2640437048, ___ProspectiveName_1)); }
	inline String_t* get_ProspectiveName_1() const { return ___ProspectiveName_1; }
	inline String_t** get_address_of_ProspectiveName_1() { return &___ProspectiveName_1; }
	inline void set_ProspectiveName_1(String_t* value)
	{
		___ProspectiveName_1 = value;
		Il2CppCodeGenWriteBarrier(&___ProspectiveName_1, value);
	}

	inline static int32_t get_offset_of_eventExpanded_2() { return static_cast<int32_t>(offsetof(CustomEvent_t2640437048, ___eventExpanded_2)); }
	inline bool get_eventExpanded_2() const { return ___eventExpanded_2; }
	inline bool* get_address_of_eventExpanded_2() { return &___eventExpanded_2; }
	inline void set_eventExpanded_2(bool value)
	{
		___eventExpanded_2 = value;
	}

	inline static int32_t get_offset_of_eventReceiveMode_3() { return static_cast<int32_t>(offsetof(CustomEvent_t2640437048, ___eventReceiveMode_3)); }
	inline int32_t get_eventReceiveMode_3() const { return ___eventReceiveMode_3; }
	inline int32_t* get_address_of_eventReceiveMode_3() { return &___eventReceiveMode_3; }
	inline void set_eventReceiveMode_3(int32_t value)
	{
		___eventReceiveMode_3 = value;
	}

	inline static int32_t get_offset_of_distanceThreshold_4() { return static_cast<int32_t>(offsetof(CustomEvent_t2640437048, ___distanceThreshold_4)); }
	inline float get_distanceThreshold_4() const { return ___distanceThreshold_4; }
	inline float* get_address_of_distanceThreshold_4() { return &___distanceThreshold_4; }
	inline void set_distanceThreshold_4(float value)
	{
		___distanceThreshold_4 = value;
	}

	inline static int32_t get_offset_of_frameLastFired_5() { return static_cast<int32_t>(offsetof(CustomEvent_t2640437048, ___frameLastFired_5)); }
	inline int32_t get_frameLastFired_5() const { return ___frameLastFired_5; }
	inline int32_t* get_address_of_frameLastFired_5() { return &___frameLastFired_5; }
	inline void set_frameLastFired_5(int32_t value)
	{
		___frameLastFired_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
