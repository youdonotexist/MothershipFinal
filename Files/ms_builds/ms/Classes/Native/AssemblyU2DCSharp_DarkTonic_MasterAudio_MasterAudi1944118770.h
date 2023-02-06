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
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.MusicSetting>
struct List_1_t3297323827;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudio966283679.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudio767596939.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudio271534284.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.MasterAudio/Playlist
struct  Playlist_t1944118770  : public Il2CppObject
{
public:
	// System.Boolean DarkTonic.MasterAudio.MasterAudio/Playlist::isExpanded
	bool ___isExpanded_0;
	// System.String DarkTonic.MasterAudio.MasterAudio/Playlist::playlistName
	String_t* ___playlistName_1;
	// DarkTonic.MasterAudio.MasterAudio/SongFadeInPosition DarkTonic.MasterAudio.MasterAudio/Playlist::songTransitionType
	int32_t ___songTransitionType_2;
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.MusicSetting> DarkTonic.MasterAudio.MasterAudio/Playlist::MusicSettings
	List_1_t3297323827 * ___MusicSettings_3;
	// DarkTonic.MasterAudio.MasterAudio/AudioLocation DarkTonic.MasterAudio.MasterAudio/Playlist::bulkLocationMode
	int32_t ___bulkLocationMode_4;
	// DarkTonic.MasterAudio.MasterAudio/Playlist/CrossfadeTimeMode DarkTonic.MasterAudio.MasterAudio/Playlist::crossfadeMode
	int32_t ___crossfadeMode_5;
	// System.Single DarkTonic.MasterAudio.MasterAudio/Playlist::crossFadeTime
	float ___crossFadeTime_6;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio/Playlist::fadeInFirstSong
	bool ___fadeInFirstSong_7;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio/Playlist::fadeOutLastSong
	bool ___fadeOutLastSong_8;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio/Playlist::resourceClipsAllLoadAsync
	bool ___resourceClipsAllLoadAsync_9;

public:
	inline static int32_t get_offset_of_isExpanded_0() { return static_cast<int32_t>(offsetof(Playlist_t1944118770, ___isExpanded_0)); }
	inline bool get_isExpanded_0() const { return ___isExpanded_0; }
	inline bool* get_address_of_isExpanded_0() { return &___isExpanded_0; }
	inline void set_isExpanded_0(bool value)
	{
		___isExpanded_0 = value;
	}

	inline static int32_t get_offset_of_playlistName_1() { return static_cast<int32_t>(offsetof(Playlist_t1944118770, ___playlistName_1)); }
	inline String_t* get_playlistName_1() const { return ___playlistName_1; }
	inline String_t** get_address_of_playlistName_1() { return &___playlistName_1; }
	inline void set_playlistName_1(String_t* value)
	{
		___playlistName_1 = value;
		Il2CppCodeGenWriteBarrier(&___playlistName_1, value);
	}

	inline static int32_t get_offset_of_songTransitionType_2() { return static_cast<int32_t>(offsetof(Playlist_t1944118770, ___songTransitionType_2)); }
	inline int32_t get_songTransitionType_2() const { return ___songTransitionType_2; }
	inline int32_t* get_address_of_songTransitionType_2() { return &___songTransitionType_2; }
	inline void set_songTransitionType_2(int32_t value)
	{
		___songTransitionType_2 = value;
	}

	inline static int32_t get_offset_of_MusicSettings_3() { return static_cast<int32_t>(offsetof(Playlist_t1944118770, ___MusicSettings_3)); }
	inline List_1_t3297323827 * get_MusicSettings_3() const { return ___MusicSettings_3; }
	inline List_1_t3297323827 ** get_address_of_MusicSettings_3() { return &___MusicSettings_3; }
	inline void set_MusicSettings_3(List_1_t3297323827 * value)
	{
		___MusicSettings_3 = value;
		Il2CppCodeGenWriteBarrier(&___MusicSettings_3, value);
	}

	inline static int32_t get_offset_of_bulkLocationMode_4() { return static_cast<int32_t>(offsetof(Playlist_t1944118770, ___bulkLocationMode_4)); }
	inline int32_t get_bulkLocationMode_4() const { return ___bulkLocationMode_4; }
	inline int32_t* get_address_of_bulkLocationMode_4() { return &___bulkLocationMode_4; }
	inline void set_bulkLocationMode_4(int32_t value)
	{
		___bulkLocationMode_4 = value;
	}

	inline static int32_t get_offset_of_crossfadeMode_5() { return static_cast<int32_t>(offsetof(Playlist_t1944118770, ___crossfadeMode_5)); }
	inline int32_t get_crossfadeMode_5() const { return ___crossfadeMode_5; }
	inline int32_t* get_address_of_crossfadeMode_5() { return &___crossfadeMode_5; }
	inline void set_crossfadeMode_5(int32_t value)
	{
		___crossfadeMode_5 = value;
	}

	inline static int32_t get_offset_of_crossFadeTime_6() { return static_cast<int32_t>(offsetof(Playlist_t1944118770, ___crossFadeTime_6)); }
	inline float get_crossFadeTime_6() const { return ___crossFadeTime_6; }
	inline float* get_address_of_crossFadeTime_6() { return &___crossFadeTime_6; }
	inline void set_crossFadeTime_6(float value)
	{
		___crossFadeTime_6 = value;
	}

	inline static int32_t get_offset_of_fadeInFirstSong_7() { return static_cast<int32_t>(offsetof(Playlist_t1944118770, ___fadeInFirstSong_7)); }
	inline bool get_fadeInFirstSong_7() const { return ___fadeInFirstSong_7; }
	inline bool* get_address_of_fadeInFirstSong_7() { return &___fadeInFirstSong_7; }
	inline void set_fadeInFirstSong_7(bool value)
	{
		___fadeInFirstSong_7 = value;
	}

	inline static int32_t get_offset_of_fadeOutLastSong_8() { return static_cast<int32_t>(offsetof(Playlist_t1944118770, ___fadeOutLastSong_8)); }
	inline bool get_fadeOutLastSong_8() const { return ___fadeOutLastSong_8; }
	inline bool* get_address_of_fadeOutLastSong_8() { return &___fadeOutLastSong_8; }
	inline void set_fadeOutLastSong_8(bool value)
	{
		___fadeOutLastSong_8 = value;
	}

	inline static int32_t get_offset_of_resourceClipsAllLoadAsync_9() { return static_cast<int32_t>(offsetof(Playlist_t1944118770, ___resourceClipsAllLoadAsync_9)); }
	inline bool get_resourceClipsAllLoadAsync_9() const { return ___resourceClipsAllLoadAsync_9; }
	inline bool* get_address_of_resourceClipsAllLoadAsync_9() { return &___resourceClipsAllLoadAsync_9; }
	inline void set_resourceClipsAllLoadAsync_9(bool value)
	{
		___resourceClipsAllLoadAsync_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
