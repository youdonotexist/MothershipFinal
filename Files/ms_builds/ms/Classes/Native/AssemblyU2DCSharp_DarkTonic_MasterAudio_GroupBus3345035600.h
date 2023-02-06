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
// UnityEngine.Audio.AudioMixerGroup
struct AudioMixerGroup_t1736867953;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3644373756;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.GroupBus
struct  GroupBus_t3345035600  : public Il2CppObject
{
public:
	// System.String DarkTonic.MasterAudio.GroupBus::busName
	String_t* ___busName_0;
	// System.Single DarkTonic.MasterAudio.GroupBus::volume
	float ___volume_1;
	// System.Boolean DarkTonic.MasterAudio.GroupBus::isSoloed
	bool ___isSoloed_2;
	// System.Boolean DarkTonic.MasterAudio.GroupBus::isMuted
	bool ___isMuted_3;
	// System.Int32 DarkTonic.MasterAudio.GroupBus::voiceLimit
	int32_t ___voiceLimit_4;
	// System.Boolean DarkTonic.MasterAudio.GroupBus::stopOldest
	bool ___stopOldest_5;
	// System.Boolean DarkTonic.MasterAudio.GroupBus::isExisting
	bool ___isExisting_6;
	// UnityEngine.Audio.AudioMixerGroup DarkTonic.MasterAudio.GroupBus::mixerChannel
	AudioMixerGroup_t1736867953 * ___mixerChannel_7;
	// System.Collections.Generic.List`1<System.Int32> DarkTonic.MasterAudio.GroupBus::_activeAudioSourcesIds
	List_1_t3644373756 * ____activeAudioSourcesIds_8;

public:
	inline static int32_t get_offset_of_busName_0() { return static_cast<int32_t>(offsetof(GroupBus_t3345035600, ___busName_0)); }
	inline String_t* get_busName_0() const { return ___busName_0; }
	inline String_t** get_address_of_busName_0() { return &___busName_0; }
	inline void set_busName_0(String_t* value)
	{
		___busName_0 = value;
		Il2CppCodeGenWriteBarrier(&___busName_0, value);
	}

	inline static int32_t get_offset_of_volume_1() { return static_cast<int32_t>(offsetof(GroupBus_t3345035600, ___volume_1)); }
	inline float get_volume_1() const { return ___volume_1; }
	inline float* get_address_of_volume_1() { return &___volume_1; }
	inline void set_volume_1(float value)
	{
		___volume_1 = value;
	}

	inline static int32_t get_offset_of_isSoloed_2() { return static_cast<int32_t>(offsetof(GroupBus_t3345035600, ___isSoloed_2)); }
	inline bool get_isSoloed_2() const { return ___isSoloed_2; }
	inline bool* get_address_of_isSoloed_2() { return &___isSoloed_2; }
	inline void set_isSoloed_2(bool value)
	{
		___isSoloed_2 = value;
	}

	inline static int32_t get_offset_of_isMuted_3() { return static_cast<int32_t>(offsetof(GroupBus_t3345035600, ___isMuted_3)); }
	inline bool get_isMuted_3() const { return ___isMuted_3; }
	inline bool* get_address_of_isMuted_3() { return &___isMuted_3; }
	inline void set_isMuted_3(bool value)
	{
		___isMuted_3 = value;
	}

	inline static int32_t get_offset_of_voiceLimit_4() { return static_cast<int32_t>(offsetof(GroupBus_t3345035600, ___voiceLimit_4)); }
	inline int32_t get_voiceLimit_4() const { return ___voiceLimit_4; }
	inline int32_t* get_address_of_voiceLimit_4() { return &___voiceLimit_4; }
	inline void set_voiceLimit_4(int32_t value)
	{
		___voiceLimit_4 = value;
	}

	inline static int32_t get_offset_of_stopOldest_5() { return static_cast<int32_t>(offsetof(GroupBus_t3345035600, ___stopOldest_5)); }
	inline bool get_stopOldest_5() const { return ___stopOldest_5; }
	inline bool* get_address_of_stopOldest_5() { return &___stopOldest_5; }
	inline void set_stopOldest_5(bool value)
	{
		___stopOldest_5 = value;
	}

	inline static int32_t get_offset_of_isExisting_6() { return static_cast<int32_t>(offsetof(GroupBus_t3345035600, ___isExisting_6)); }
	inline bool get_isExisting_6() const { return ___isExisting_6; }
	inline bool* get_address_of_isExisting_6() { return &___isExisting_6; }
	inline void set_isExisting_6(bool value)
	{
		___isExisting_6 = value;
	}

	inline static int32_t get_offset_of_mixerChannel_7() { return static_cast<int32_t>(offsetof(GroupBus_t3345035600, ___mixerChannel_7)); }
	inline AudioMixerGroup_t1736867953 * get_mixerChannel_7() const { return ___mixerChannel_7; }
	inline AudioMixerGroup_t1736867953 ** get_address_of_mixerChannel_7() { return &___mixerChannel_7; }
	inline void set_mixerChannel_7(AudioMixerGroup_t1736867953 * value)
	{
		___mixerChannel_7 = value;
		Il2CppCodeGenWriteBarrier(&___mixerChannel_7, value);
	}

	inline static int32_t get_offset_of__activeAudioSourcesIds_8() { return static_cast<int32_t>(offsetof(GroupBus_t3345035600, ____activeAudioSourcesIds_8)); }
	inline List_1_t3644373756 * get__activeAudioSourcesIds_8() const { return ____activeAudioSourcesIds_8; }
	inline List_1_t3644373756 ** get_address_of__activeAudioSourcesIds_8() { return &____activeAudioSourcesIds_8; }
	inline void set__activeAudioSourcesIds_8(List_1_t3644373756 * value)
	{
		____activeAudioSourcesIds_8 = value;
		Il2CppCodeGenWriteBarrier(&____activeAudioSourcesIds_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
