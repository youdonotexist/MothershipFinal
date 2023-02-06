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
// DarkTonic.MasterAudio.PlaylistController
struct PlaylistController_t2988482781;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.DelayBetweenSongs
struct  DelayBetweenSongs_t1020361096  : public MonoBehaviour_t3012272455
{
public:
	// System.Single DarkTonic.MasterAudio.DelayBetweenSongs::minTimeToWait
	float ___minTimeToWait_2;
	// System.Single DarkTonic.MasterAudio.DelayBetweenSongs::maxTimeToWait
	float ___maxTimeToWait_3;
	// System.String DarkTonic.MasterAudio.DelayBetweenSongs::playlistControllerName
	String_t* ___playlistControllerName_4;
	// DarkTonic.MasterAudio.PlaylistController DarkTonic.MasterAudio.DelayBetweenSongs::_controller
	PlaylistController_t2988482781 * ____controller_5;

public:
	inline static int32_t get_offset_of_minTimeToWait_2() { return static_cast<int32_t>(offsetof(DelayBetweenSongs_t1020361096, ___minTimeToWait_2)); }
	inline float get_minTimeToWait_2() const { return ___minTimeToWait_2; }
	inline float* get_address_of_minTimeToWait_2() { return &___minTimeToWait_2; }
	inline void set_minTimeToWait_2(float value)
	{
		___minTimeToWait_2 = value;
	}

	inline static int32_t get_offset_of_maxTimeToWait_3() { return static_cast<int32_t>(offsetof(DelayBetweenSongs_t1020361096, ___maxTimeToWait_3)); }
	inline float get_maxTimeToWait_3() const { return ___maxTimeToWait_3; }
	inline float* get_address_of_maxTimeToWait_3() { return &___maxTimeToWait_3; }
	inline void set_maxTimeToWait_3(float value)
	{
		___maxTimeToWait_3 = value;
	}

	inline static int32_t get_offset_of_playlistControllerName_4() { return static_cast<int32_t>(offsetof(DelayBetweenSongs_t1020361096, ___playlistControllerName_4)); }
	inline String_t* get_playlistControllerName_4() const { return ___playlistControllerName_4; }
	inline String_t** get_address_of_playlistControllerName_4() { return &___playlistControllerName_4; }
	inline void set_playlistControllerName_4(String_t* value)
	{
		___playlistControllerName_4 = value;
		Il2CppCodeGenWriteBarrier(&___playlistControllerName_4, value);
	}

	inline static int32_t get_offset_of__controller_5() { return static_cast<int32_t>(offsetof(DelayBetweenSongs_t1020361096, ____controller_5)); }
	inline PlaylistController_t2988482781 * get__controller_5() const { return ____controller_5; }
	inline PlaylistController_t2988482781 ** get_address_of__controller_5() { return &____controller_5; }
	inline void set__controller_5(PlaylistController_t2988482781 * value)
	{
		____controller_5 = value;
		Il2CppCodeGenWriteBarrier(&____controller_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
