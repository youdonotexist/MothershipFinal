#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<DarkTonic.MasterAudio.MasterAudio/AudioInfo>
struct List_1_t2988792445;
// DarkTonic.MasterAudio.MasterAudioGroup
struct MasterAudioGroup_t1025661466;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.MasterAudio/AudioGroupInfo
struct  AudioGroupInfo_t2034546871  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.MasterAudio/AudioInfo> DarkTonic.MasterAudio.MasterAudio/AudioGroupInfo::Sources
	List_1_t2988792445 * ___Sources_0;
	// System.Int32 DarkTonic.MasterAudio.MasterAudio/AudioGroupInfo::LastFramePlayed
	int32_t ___LastFramePlayed_1;
	// System.Single DarkTonic.MasterAudio.MasterAudio/AudioGroupInfo::LastTimePlayed
	float ___LastTimePlayed_2;
	// DarkTonic.MasterAudio.MasterAudioGroup DarkTonic.MasterAudio.MasterAudio/AudioGroupInfo::Group
	MasterAudioGroup_t1025661466 * ___Group_3;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio/AudioGroupInfo::PlayedForWarming
	bool ___PlayedForWarming_4;

public:
	inline static int32_t get_offset_of_Sources_0() { return static_cast<int32_t>(offsetof(AudioGroupInfo_t2034546871, ___Sources_0)); }
	inline List_1_t2988792445 * get_Sources_0() const { return ___Sources_0; }
	inline List_1_t2988792445 ** get_address_of_Sources_0() { return &___Sources_0; }
	inline void set_Sources_0(List_1_t2988792445 * value)
	{
		___Sources_0 = value;
		Il2CppCodeGenWriteBarrier(&___Sources_0, value);
	}

	inline static int32_t get_offset_of_LastFramePlayed_1() { return static_cast<int32_t>(offsetof(AudioGroupInfo_t2034546871, ___LastFramePlayed_1)); }
	inline int32_t get_LastFramePlayed_1() const { return ___LastFramePlayed_1; }
	inline int32_t* get_address_of_LastFramePlayed_1() { return &___LastFramePlayed_1; }
	inline void set_LastFramePlayed_1(int32_t value)
	{
		___LastFramePlayed_1 = value;
	}

	inline static int32_t get_offset_of_LastTimePlayed_2() { return static_cast<int32_t>(offsetof(AudioGroupInfo_t2034546871, ___LastTimePlayed_2)); }
	inline float get_LastTimePlayed_2() const { return ___LastTimePlayed_2; }
	inline float* get_address_of_LastTimePlayed_2() { return &___LastTimePlayed_2; }
	inline void set_LastTimePlayed_2(float value)
	{
		___LastTimePlayed_2 = value;
	}

	inline static int32_t get_offset_of_Group_3() { return static_cast<int32_t>(offsetof(AudioGroupInfo_t2034546871, ___Group_3)); }
	inline MasterAudioGroup_t1025661466 * get_Group_3() const { return ___Group_3; }
	inline MasterAudioGroup_t1025661466 ** get_address_of_Group_3() { return &___Group_3; }
	inline void set_Group_3(MasterAudioGroup_t1025661466 * value)
	{
		___Group_3 = value;
		Il2CppCodeGenWriteBarrier(&___Group_3, value);
	}

	inline static int32_t get_offset_of_PlayedForWarming_4() { return static_cast<int32_t>(offsetof(AudioGroupInfo_t2034546871, ___PlayedForWarming_4)); }
	inline bool get_PlayedForWarming_4() const { return ___PlayedForWarming_4; }
	inline bool* get_address_of_PlayedForWarming_4() { return &___PlayedForWarming_4; }
	inline void set_PlayedForWarming_4(bool value)
	{
		___PlayedForWarming_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
