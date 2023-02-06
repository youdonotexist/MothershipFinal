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

// AIDirective
struct  AIDirective_t3038039303  : public Il2CppObject
{
public:
	// System.String AIDirective::action
	String_t* ___action_0;
	// System.Single AIDirective::waitAfter
	float ___waitAfter_1;
	// System.Boolean AIDirective::sync
	bool ___sync_2;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(AIDirective_t3038039303, ___action_0)); }
	inline String_t* get_action_0() const { return ___action_0; }
	inline String_t** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(String_t* value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier(&___action_0, value);
	}

	inline static int32_t get_offset_of_waitAfter_1() { return static_cast<int32_t>(offsetof(AIDirective_t3038039303, ___waitAfter_1)); }
	inline float get_waitAfter_1() const { return ___waitAfter_1; }
	inline float* get_address_of_waitAfter_1() { return &___waitAfter_1; }
	inline void set_waitAfter_1(float value)
	{
		___waitAfter_1 = value;
	}

	inline static int32_t get_offset_of_sync_2() { return static_cast<int32_t>(offsetof(AIDirective_t3038039303, ___sync_2)); }
	inline bool get_sync_2() const { return ___sync_2; }
	inline bool* get_address_of_sync_2() { return &___sync_2; }
	inline void set_sync_2(bool value)
	{
		___sync_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
