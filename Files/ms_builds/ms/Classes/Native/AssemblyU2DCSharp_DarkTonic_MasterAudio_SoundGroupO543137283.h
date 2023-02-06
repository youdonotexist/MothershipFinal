#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DarkTonic.MasterAudio.CustomEvent
struct CustomEvent_t2640437048;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.SoundGroupOrganizer/CustomEventSelection
struct  CustomEventSelection_t543137283  : public Il2CppObject
{
public:
	// DarkTonic.MasterAudio.CustomEvent DarkTonic.MasterAudio.SoundGroupOrganizer/CustomEventSelection::Event
	CustomEvent_t2640437048 * ___Event_0;
	// System.Boolean DarkTonic.MasterAudio.SoundGroupOrganizer/CustomEventSelection::IsSelected
	bool ___IsSelected_1;

public:
	inline static int32_t get_offset_of_Event_0() { return static_cast<int32_t>(offsetof(CustomEventSelection_t543137283, ___Event_0)); }
	inline CustomEvent_t2640437048 * get_Event_0() const { return ___Event_0; }
	inline CustomEvent_t2640437048 ** get_address_of_Event_0() { return &___Event_0; }
	inline void set_Event_0(CustomEvent_t2640437048 * value)
	{
		___Event_0 = value;
		Il2CppCodeGenWriteBarrier(&___Event_0, value);
	}

	inline static int32_t get_offset_of_IsSelected_1() { return static_cast<int32_t>(offsetof(CustomEventSelection_t543137283, ___IsSelected_1)); }
	inline bool get_IsSelected_1() const { return ___IsSelected_1; }
	inline bool* get_address_of_IsSelected_1() { return &___IsSelected_1; }
	inline void set_IsSelected_1(bool value)
	{
		___IsSelected_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
