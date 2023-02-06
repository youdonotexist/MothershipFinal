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

// DarkTonic.MasterAudio.PlaylistController/<QueuePlaylistClip>c__AnonStorey77
struct  U3CQueuePlaylistClipU3Ec__AnonStorey77_t3127838656  : public Il2CppObject
{
public:
	// System.String DarkTonic.MasterAudio.PlaylistController/<QueuePlaylistClip>c__AnonStorey77::clipName
	String_t* ___clipName_0;

public:
	inline static int32_t get_offset_of_clipName_0() { return static_cast<int32_t>(offsetof(U3CQueuePlaylistClipU3Ec__AnonStorey77_t3127838656, ___clipName_0)); }
	inline String_t* get_clipName_0() const { return ___clipName_0; }
	inline String_t** get_address_of_clipName_0() { return &___clipName_0; }
	inline void set_clipName_0(String_t* value)
	{
		___clipName_0 = value;
		Il2CppCodeGenWriteBarrier(&___clipName_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
