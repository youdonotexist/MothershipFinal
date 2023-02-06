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
// UnityEngine.AudioClip
struct AudioClip_t3714538611;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudio767596939.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.MusicSetting
struct  MusicSetting_t2500364858  : public Il2CppObject
{
public:
	// System.String DarkTonic.MasterAudio.MusicSetting::alias
	String_t* ___alias_0;
	// DarkTonic.MasterAudio.MasterAudio/AudioLocation DarkTonic.MasterAudio.MusicSetting::audLocation
	int32_t ___audLocation_1;
	// UnityEngine.AudioClip DarkTonic.MasterAudio.MusicSetting::clip
	AudioClip_t3714538611 * ___clip_2;
	// System.String DarkTonic.MasterAudio.MusicSetting::songName
	String_t* ___songName_3;
	// System.String DarkTonic.MasterAudio.MusicSetting::resourceFileName
	String_t* ___resourceFileName_4;
	// System.Single DarkTonic.MasterAudio.MusicSetting::volume
	float ___volume_5;
	// System.Single DarkTonic.MasterAudio.MusicSetting::pitch
	float ___pitch_6;
	// System.Boolean DarkTonic.MasterAudio.MusicSetting::isExpanded
	bool ___isExpanded_7;
	// System.Boolean DarkTonic.MasterAudio.MusicSetting::isLoop
	bool ___isLoop_8;
	// System.Single DarkTonic.MasterAudio.MusicSetting::customStartTime
	float ___customStartTime_9;
	// System.Int32 DarkTonic.MasterAudio.MusicSetting::lastKnownTimePoint
	int32_t ___lastKnownTimePoint_10;
	// System.Int32 DarkTonic.MasterAudio.MusicSetting::songIndex
	int32_t ___songIndex_11;
	// System.Boolean DarkTonic.MasterAudio.MusicSetting::songStartedEventExpanded
	bool ___songStartedEventExpanded_12;
	// System.String DarkTonic.MasterAudio.MusicSetting::songStartedCustomEvent
	String_t* ___songStartedCustomEvent_13;
	// System.Boolean DarkTonic.MasterAudio.MusicSetting::songChangedEventExpanded
	bool ___songChangedEventExpanded_14;
	// System.String DarkTonic.MasterAudio.MusicSetting::songChangedCustomEvent
	String_t* ___songChangedCustomEvent_15;

public:
	inline static int32_t get_offset_of_alias_0() { return static_cast<int32_t>(offsetof(MusicSetting_t2500364858, ___alias_0)); }
	inline String_t* get_alias_0() const { return ___alias_0; }
	inline String_t** get_address_of_alias_0() { return &___alias_0; }
	inline void set_alias_0(String_t* value)
	{
		___alias_0 = value;
		Il2CppCodeGenWriteBarrier(&___alias_0, value);
	}

	inline static int32_t get_offset_of_audLocation_1() { return static_cast<int32_t>(offsetof(MusicSetting_t2500364858, ___audLocation_1)); }
	inline int32_t get_audLocation_1() const { return ___audLocation_1; }
	inline int32_t* get_address_of_audLocation_1() { return &___audLocation_1; }
	inline void set_audLocation_1(int32_t value)
	{
		___audLocation_1 = value;
	}

	inline static int32_t get_offset_of_clip_2() { return static_cast<int32_t>(offsetof(MusicSetting_t2500364858, ___clip_2)); }
	inline AudioClip_t3714538611 * get_clip_2() const { return ___clip_2; }
	inline AudioClip_t3714538611 ** get_address_of_clip_2() { return &___clip_2; }
	inline void set_clip_2(AudioClip_t3714538611 * value)
	{
		___clip_2 = value;
		Il2CppCodeGenWriteBarrier(&___clip_2, value);
	}

	inline static int32_t get_offset_of_songName_3() { return static_cast<int32_t>(offsetof(MusicSetting_t2500364858, ___songName_3)); }
	inline String_t* get_songName_3() const { return ___songName_3; }
	inline String_t** get_address_of_songName_3() { return &___songName_3; }
	inline void set_songName_3(String_t* value)
	{
		___songName_3 = value;
		Il2CppCodeGenWriteBarrier(&___songName_3, value);
	}

	inline static int32_t get_offset_of_resourceFileName_4() { return static_cast<int32_t>(offsetof(MusicSetting_t2500364858, ___resourceFileName_4)); }
	inline String_t* get_resourceFileName_4() const { return ___resourceFileName_4; }
	inline String_t** get_address_of_resourceFileName_4() { return &___resourceFileName_4; }
	inline void set_resourceFileName_4(String_t* value)
	{
		___resourceFileName_4 = value;
		Il2CppCodeGenWriteBarrier(&___resourceFileName_4, value);
	}

	inline static int32_t get_offset_of_volume_5() { return static_cast<int32_t>(offsetof(MusicSetting_t2500364858, ___volume_5)); }
	inline float get_volume_5() const { return ___volume_5; }
	inline float* get_address_of_volume_5() { return &___volume_5; }
	inline void set_volume_5(float value)
	{
		___volume_5 = value;
	}

	inline static int32_t get_offset_of_pitch_6() { return static_cast<int32_t>(offsetof(MusicSetting_t2500364858, ___pitch_6)); }
	inline float get_pitch_6() const { return ___pitch_6; }
	inline float* get_address_of_pitch_6() { return &___pitch_6; }
	inline void set_pitch_6(float value)
	{
		___pitch_6 = value;
	}

	inline static int32_t get_offset_of_isExpanded_7() { return static_cast<int32_t>(offsetof(MusicSetting_t2500364858, ___isExpanded_7)); }
	inline bool get_isExpanded_7() const { return ___isExpanded_7; }
	inline bool* get_address_of_isExpanded_7() { return &___isExpanded_7; }
	inline void set_isExpanded_7(bool value)
	{
		___isExpanded_7 = value;
	}

	inline static int32_t get_offset_of_isLoop_8() { return static_cast<int32_t>(offsetof(MusicSetting_t2500364858, ___isLoop_8)); }
	inline bool get_isLoop_8() const { return ___isLoop_8; }
	inline bool* get_address_of_isLoop_8() { return &___isLoop_8; }
	inline void set_isLoop_8(bool value)
	{
		___isLoop_8 = value;
	}

	inline static int32_t get_offset_of_customStartTime_9() { return static_cast<int32_t>(offsetof(MusicSetting_t2500364858, ___customStartTime_9)); }
	inline float get_customStartTime_9() const { return ___customStartTime_9; }
	inline float* get_address_of_customStartTime_9() { return &___customStartTime_9; }
	inline void set_customStartTime_9(float value)
	{
		___customStartTime_9 = value;
	}

	inline static int32_t get_offset_of_lastKnownTimePoint_10() { return static_cast<int32_t>(offsetof(MusicSetting_t2500364858, ___lastKnownTimePoint_10)); }
	inline int32_t get_lastKnownTimePoint_10() const { return ___lastKnownTimePoint_10; }
	inline int32_t* get_address_of_lastKnownTimePoint_10() { return &___lastKnownTimePoint_10; }
	inline void set_lastKnownTimePoint_10(int32_t value)
	{
		___lastKnownTimePoint_10 = value;
	}

	inline static int32_t get_offset_of_songIndex_11() { return static_cast<int32_t>(offsetof(MusicSetting_t2500364858, ___songIndex_11)); }
	inline int32_t get_songIndex_11() const { return ___songIndex_11; }
	inline int32_t* get_address_of_songIndex_11() { return &___songIndex_11; }
	inline void set_songIndex_11(int32_t value)
	{
		___songIndex_11 = value;
	}

	inline static int32_t get_offset_of_songStartedEventExpanded_12() { return static_cast<int32_t>(offsetof(MusicSetting_t2500364858, ___songStartedEventExpanded_12)); }
	inline bool get_songStartedEventExpanded_12() const { return ___songStartedEventExpanded_12; }
	inline bool* get_address_of_songStartedEventExpanded_12() { return &___songStartedEventExpanded_12; }
	inline void set_songStartedEventExpanded_12(bool value)
	{
		___songStartedEventExpanded_12 = value;
	}

	inline static int32_t get_offset_of_songStartedCustomEvent_13() { return static_cast<int32_t>(offsetof(MusicSetting_t2500364858, ___songStartedCustomEvent_13)); }
	inline String_t* get_songStartedCustomEvent_13() const { return ___songStartedCustomEvent_13; }
	inline String_t** get_address_of_songStartedCustomEvent_13() { return &___songStartedCustomEvent_13; }
	inline void set_songStartedCustomEvent_13(String_t* value)
	{
		___songStartedCustomEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___songStartedCustomEvent_13, value);
	}

	inline static int32_t get_offset_of_songChangedEventExpanded_14() { return static_cast<int32_t>(offsetof(MusicSetting_t2500364858, ___songChangedEventExpanded_14)); }
	inline bool get_songChangedEventExpanded_14() const { return ___songChangedEventExpanded_14; }
	inline bool* get_address_of_songChangedEventExpanded_14() { return &___songChangedEventExpanded_14; }
	inline void set_songChangedEventExpanded_14(bool value)
	{
		___songChangedEventExpanded_14 = value;
	}

	inline static int32_t get_offset_of_songChangedCustomEvent_15() { return static_cast<int32_t>(offsetof(MusicSetting_t2500364858, ___songChangedCustomEvent_15)); }
	inline String_t* get_songChangedCustomEvent_15() const { return ___songChangedCustomEvent_15; }
	inline String_t** get_address_of_songChangedCustomEvent_15() { return &___songChangedCustomEvent_15; }
	inline void set_songChangedCustomEvent_15(String_t* value)
	{
		___songChangedCustomEvent_15 = value;
		Il2CppCodeGenWriteBarrier(&___songChangedCustomEvent_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
