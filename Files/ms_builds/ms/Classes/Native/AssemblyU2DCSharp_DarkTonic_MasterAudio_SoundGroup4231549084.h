#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.SoundGroupOrganizer/SoundGroupSelection
struct  SoundGroupSelection_t4231549084  : public Il2CppObject
{
public:
	// UnityEngine.GameObject DarkTonic.MasterAudio.SoundGroupOrganizer/SoundGroupSelection::Go
	GameObject_t4012695102 * ___Go_0;
	// System.Boolean DarkTonic.MasterAudio.SoundGroupOrganizer/SoundGroupSelection::IsSelected
	bool ___IsSelected_1;

public:
	inline static int32_t get_offset_of_Go_0() { return static_cast<int32_t>(offsetof(SoundGroupSelection_t4231549084, ___Go_0)); }
	inline GameObject_t4012695102 * get_Go_0() const { return ___Go_0; }
	inline GameObject_t4012695102 ** get_address_of_Go_0() { return &___Go_0; }
	inline void set_Go_0(GameObject_t4012695102 * value)
	{
		___Go_0 = value;
		Il2CppCodeGenWriteBarrier(&___Go_0, value);
	}

	inline static int32_t get_offset_of_IsSelected_1() { return static_cast<int32_t>(offsetof(SoundGroupSelection_t4231549084, ___IsSelected_1)); }
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
