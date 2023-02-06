#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UnityEngine.AudioSource>>
struct Dictionary_2_t1768238631;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioClip>
struct Dictionary_2_t1057269219;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UnityEngine.AudioClip>>
struct Dictionary_2_t1854228188;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.AudioResourceOptimizer
struct  AudioResourceOptimizer_t201100640  : public Il2CppObject
{
public:

public:
};

struct AudioResourceOptimizer_t201100640_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UnityEngine.AudioSource>> DarkTonic.MasterAudio.AudioResourceOptimizer::AudioResourceTargetsByName
	Dictionary_2_t1768238631 * ___AudioResourceTargetsByName_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioClip> DarkTonic.MasterAudio.AudioResourceOptimizer::AudioClipsByName
	Dictionary_2_t1057269219 * ___AudioClipsByName_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UnityEngine.AudioClip>> DarkTonic.MasterAudio.AudioResourceOptimizer::PlaylistClipsByPlaylistName
	Dictionary_2_t1854228188 * ___PlaylistClipsByPlaylistName_2;
	// System.Collections.Generic.List`1<System.String> DarkTonic.MasterAudio.AudioResourceOptimizer::InternetFilesStartedLoading
	List_1_t1765447871 * ___InternetFilesStartedLoading_3;
	// System.String DarkTonic.MasterAudio.AudioResourceOptimizer::_supportedLanguageFolder
	String_t* ____supportedLanguageFolder_4;

public:
	inline static int32_t get_offset_of_AudioResourceTargetsByName_0() { return static_cast<int32_t>(offsetof(AudioResourceOptimizer_t201100640_StaticFields, ___AudioResourceTargetsByName_0)); }
	inline Dictionary_2_t1768238631 * get_AudioResourceTargetsByName_0() const { return ___AudioResourceTargetsByName_0; }
	inline Dictionary_2_t1768238631 ** get_address_of_AudioResourceTargetsByName_0() { return &___AudioResourceTargetsByName_0; }
	inline void set_AudioResourceTargetsByName_0(Dictionary_2_t1768238631 * value)
	{
		___AudioResourceTargetsByName_0 = value;
		Il2CppCodeGenWriteBarrier(&___AudioResourceTargetsByName_0, value);
	}

	inline static int32_t get_offset_of_AudioClipsByName_1() { return static_cast<int32_t>(offsetof(AudioResourceOptimizer_t201100640_StaticFields, ___AudioClipsByName_1)); }
	inline Dictionary_2_t1057269219 * get_AudioClipsByName_1() const { return ___AudioClipsByName_1; }
	inline Dictionary_2_t1057269219 ** get_address_of_AudioClipsByName_1() { return &___AudioClipsByName_1; }
	inline void set_AudioClipsByName_1(Dictionary_2_t1057269219 * value)
	{
		___AudioClipsByName_1 = value;
		Il2CppCodeGenWriteBarrier(&___AudioClipsByName_1, value);
	}

	inline static int32_t get_offset_of_PlaylistClipsByPlaylistName_2() { return static_cast<int32_t>(offsetof(AudioResourceOptimizer_t201100640_StaticFields, ___PlaylistClipsByPlaylistName_2)); }
	inline Dictionary_2_t1854228188 * get_PlaylistClipsByPlaylistName_2() const { return ___PlaylistClipsByPlaylistName_2; }
	inline Dictionary_2_t1854228188 ** get_address_of_PlaylistClipsByPlaylistName_2() { return &___PlaylistClipsByPlaylistName_2; }
	inline void set_PlaylistClipsByPlaylistName_2(Dictionary_2_t1854228188 * value)
	{
		___PlaylistClipsByPlaylistName_2 = value;
		Il2CppCodeGenWriteBarrier(&___PlaylistClipsByPlaylistName_2, value);
	}

	inline static int32_t get_offset_of_InternetFilesStartedLoading_3() { return static_cast<int32_t>(offsetof(AudioResourceOptimizer_t201100640_StaticFields, ___InternetFilesStartedLoading_3)); }
	inline List_1_t1765447871 * get_InternetFilesStartedLoading_3() const { return ___InternetFilesStartedLoading_3; }
	inline List_1_t1765447871 ** get_address_of_InternetFilesStartedLoading_3() { return &___InternetFilesStartedLoading_3; }
	inline void set_InternetFilesStartedLoading_3(List_1_t1765447871 * value)
	{
		___InternetFilesStartedLoading_3 = value;
		Il2CppCodeGenWriteBarrier(&___InternetFilesStartedLoading_3, value);
	}

	inline static int32_t get_offset_of__supportedLanguageFolder_4() { return static_cast<int32_t>(offsetof(AudioResourceOptimizer_t201100640_StaticFields, ____supportedLanguageFolder_4)); }
	inline String_t* get__supportedLanguageFolder_4() const { return ____supportedLanguageFolder_4; }
	inline String_t** get_address_of__supportedLanguageFolder_4() { return &____supportedLanguageFolder_4; }
	inline void set__supportedLanguageFolder_4(String_t* value)
	{
		____supportedLanguageFolder_4 = value;
		Il2CppCodeGenWriteBarrier(&____supportedLanguageFolder_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
