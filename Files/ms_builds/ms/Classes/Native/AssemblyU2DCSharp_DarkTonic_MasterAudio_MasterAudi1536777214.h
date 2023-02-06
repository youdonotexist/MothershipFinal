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
// DarkTonic.MasterAudio.PlaySoundResult
struct PlaySoundResult_t3653206983;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Nullable_1_gen3844246929.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.MasterAudio/<PlaySoundAndWaitUntilFinished>c__Iterator4
struct  U3CPlaySoundAndWaitUntilFinishedU3Ec__Iterator4_t1536777214  : public Il2CppObject
{
public:
	// System.String DarkTonic.MasterAudio.MasterAudio/<PlaySoundAndWaitUntilFinished>c__Iterator4::sType
	String_t* ___sType_0;
	// System.Single DarkTonic.MasterAudio.MasterAudio/<PlaySoundAndWaitUntilFinished>c__Iterator4::volumePercentage
	float ___volumePercentage_1;
	// System.Nullable`1<System.Single> DarkTonic.MasterAudio.MasterAudio/<PlaySoundAndWaitUntilFinished>c__Iterator4::pitch
	Nullable_1_t3844246929  ___pitch_2;
	// System.Single DarkTonic.MasterAudio.MasterAudio/<PlaySoundAndWaitUntilFinished>c__Iterator4::delaySoundTime
	float ___delaySoundTime_3;
	// System.String DarkTonic.MasterAudio.MasterAudio/<PlaySoundAndWaitUntilFinished>c__Iterator4::variationName
	String_t* ___variationName_4;
	// DarkTonic.MasterAudio.PlaySoundResult DarkTonic.MasterAudio.MasterAudio/<PlaySoundAndWaitUntilFinished>c__Iterator4::<sound>__0
	PlaySoundResult_t3653206983 * ___U3CsoundU3E__0_5;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio/<PlaySoundAndWaitUntilFinished>c__Iterator4::<done>__1
	bool ___U3CdoneU3E__1_6;
	// System.Int32 DarkTonic.MasterAudio.MasterAudio/<PlaySoundAndWaitUntilFinished>c__Iterator4::$PC
	int32_t ___U24PC_7;
	// System.Object DarkTonic.MasterAudio.MasterAudio/<PlaySoundAndWaitUntilFinished>c__Iterator4::$current
	Il2CppObject * ___U24current_8;
	// System.String DarkTonic.MasterAudio.MasterAudio/<PlaySoundAndWaitUntilFinished>c__Iterator4::<$>sType
	String_t* ___U3CU24U3EsType_9;
	// System.Single DarkTonic.MasterAudio.MasterAudio/<PlaySoundAndWaitUntilFinished>c__Iterator4::<$>volumePercentage
	float ___U3CU24U3EvolumePercentage_10;
	// System.Nullable`1<System.Single> DarkTonic.MasterAudio.MasterAudio/<PlaySoundAndWaitUntilFinished>c__Iterator4::<$>pitch
	Nullable_1_t3844246929  ___U3CU24U3Epitch_11;
	// System.Single DarkTonic.MasterAudio.MasterAudio/<PlaySoundAndWaitUntilFinished>c__Iterator4::<$>delaySoundTime
	float ___U3CU24U3EdelaySoundTime_12;
	// System.String DarkTonic.MasterAudio.MasterAudio/<PlaySoundAndWaitUntilFinished>c__Iterator4::<$>variationName
	String_t* ___U3CU24U3EvariationName_13;

public:
	inline static int32_t get_offset_of_sType_0() { return static_cast<int32_t>(offsetof(U3CPlaySoundAndWaitUntilFinishedU3Ec__Iterator4_t1536777214, ___sType_0)); }
	inline String_t* get_sType_0() const { return ___sType_0; }
	inline String_t** get_address_of_sType_0() { return &___sType_0; }
	inline void set_sType_0(String_t* value)
	{
		___sType_0 = value;
		Il2CppCodeGenWriteBarrier(&___sType_0, value);
	}

	inline static int32_t get_offset_of_volumePercentage_1() { return static_cast<int32_t>(offsetof(U3CPlaySoundAndWaitUntilFinishedU3Ec__Iterator4_t1536777214, ___volumePercentage_1)); }
	inline float get_volumePercentage_1() const { return ___volumePercentage_1; }
	inline float* get_address_of_volumePercentage_1() { return &___volumePercentage_1; }
	inline void set_volumePercentage_1(float value)
	{
		___volumePercentage_1 = value;
	}

	inline static int32_t get_offset_of_pitch_2() { return static_cast<int32_t>(offsetof(U3CPlaySoundAndWaitUntilFinishedU3Ec__Iterator4_t1536777214, ___pitch_2)); }
	inline Nullable_1_t3844246929  get_pitch_2() const { return ___pitch_2; }
	inline Nullable_1_t3844246929 * get_address_of_pitch_2() { return &___pitch_2; }
	inline void set_pitch_2(Nullable_1_t3844246929  value)
	{
		___pitch_2 = value;
	}

	inline static int32_t get_offset_of_delaySoundTime_3() { return static_cast<int32_t>(offsetof(U3CPlaySoundAndWaitUntilFinishedU3Ec__Iterator4_t1536777214, ___delaySoundTime_3)); }
	inline float get_delaySoundTime_3() const { return ___delaySoundTime_3; }
	inline float* get_address_of_delaySoundTime_3() { return &___delaySoundTime_3; }
	inline void set_delaySoundTime_3(float value)
	{
		___delaySoundTime_3 = value;
	}

	inline static int32_t get_offset_of_variationName_4() { return static_cast<int32_t>(offsetof(U3CPlaySoundAndWaitUntilFinishedU3Ec__Iterator4_t1536777214, ___variationName_4)); }
	inline String_t* get_variationName_4() const { return ___variationName_4; }
	inline String_t** get_address_of_variationName_4() { return &___variationName_4; }
	inline void set_variationName_4(String_t* value)
	{
		___variationName_4 = value;
		Il2CppCodeGenWriteBarrier(&___variationName_4, value);
	}

	inline static int32_t get_offset_of_U3CsoundU3E__0_5() { return static_cast<int32_t>(offsetof(U3CPlaySoundAndWaitUntilFinishedU3Ec__Iterator4_t1536777214, ___U3CsoundU3E__0_5)); }
	inline PlaySoundResult_t3653206983 * get_U3CsoundU3E__0_5() const { return ___U3CsoundU3E__0_5; }
	inline PlaySoundResult_t3653206983 ** get_address_of_U3CsoundU3E__0_5() { return &___U3CsoundU3E__0_5; }
	inline void set_U3CsoundU3E__0_5(PlaySoundResult_t3653206983 * value)
	{
		___U3CsoundU3E__0_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CsoundU3E__0_5, value);
	}

	inline static int32_t get_offset_of_U3CdoneU3E__1_6() { return static_cast<int32_t>(offsetof(U3CPlaySoundAndWaitUntilFinishedU3Ec__Iterator4_t1536777214, ___U3CdoneU3E__1_6)); }
	inline bool get_U3CdoneU3E__1_6() const { return ___U3CdoneU3E__1_6; }
	inline bool* get_address_of_U3CdoneU3E__1_6() { return &___U3CdoneU3E__1_6; }
	inline void set_U3CdoneU3E__1_6(bool value)
	{
		___U3CdoneU3E__1_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CPlaySoundAndWaitUntilFinishedU3Ec__Iterator4_t1536777214, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}

	inline static int32_t get_offset_of_U24current_8() { return static_cast<int32_t>(offsetof(U3CPlaySoundAndWaitUntilFinishedU3Ec__Iterator4_t1536777214, ___U24current_8)); }
	inline Il2CppObject * get_U24current_8() const { return ___U24current_8; }
	inline Il2CppObject ** get_address_of_U24current_8() { return &___U24current_8; }
	inline void set_U24current_8(Il2CppObject * value)
	{
		___U24current_8 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_8, value);
	}

	inline static int32_t get_offset_of_U3CU24U3EsType_9() { return static_cast<int32_t>(offsetof(U3CPlaySoundAndWaitUntilFinishedU3Ec__Iterator4_t1536777214, ___U3CU24U3EsType_9)); }
	inline String_t* get_U3CU24U3EsType_9() const { return ___U3CU24U3EsType_9; }
	inline String_t** get_address_of_U3CU24U3EsType_9() { return &___U3CU24U3EsType_9; }
	inline void set_U3CU24U3EsType_9(String_t* value)
	{
		___U3CU24U3EsType_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3EsType_9, value);
	}

	inline static int32_t get_offset_of_U3CU24U3EvolumePercentage_10() { return static_cast<int32_t>(offsetof(U3CPlaySoundAndWaitUntilFinishedU3Ec__Iterator4_t1536777214, ___U3CU24U3EvolumePercentage_10)); }
	inline float get_U3CU24U3EvolumePercentage_10() const { return ___U3CU24U3EvolumePercentage_10; }
	inline float* get_address_of_U3CU24U3EvolumePercentage_10() { return &___U3CU24U3EvolumePercentage_10; }
	inline void set_U3CU24U3EvolumePercentage_10(float value)
	{
		___U3CU24U3EvolumePercentage_10 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3Epitch_11() { return static_cast<int32_t>(offsetof(U3CPlaySoundAndWaitUntilFinishedU3Ec__Iterator4_t1536777214, ___U3CU24U3Epitch_11)); }
	inline Nullable_1_t3844246929  get_U3CU24U3Epitch_11() const { return ___U3CU24U3Epitch_11; }
	inline Nullable_1_t3844246929 * get_address_of_U3CU24U3Epitch_11() { return &___U3CU24U3Epitch_11; }
	inline void set_U3CU24U3Epitch_11(Nullable_1_t3844246929  value)
	{
		___U3CU24U3Epitch_11 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3EdelaySoundTime_12() { return static_cast<int32_t>(offsetof(U3CPlaySoundAndWaitUntilFinishedU3Ec__Iterator4_t1536777214, ___U3CU24U3EdelaySoundTime_12)); }
	inline float get_U3CU24U3EdelaySoundTime_12() const { return ___U3CU24U3EdelaySoundTime_12; }
	inline float* get_address_of_U3CU24U3EdelaySoundTime_12() { return &___U3CU24U3EdelaySoundTime_12; }
	inline void set_U3CU24U3EdelaySoundTime_12(float value)
	{
		___U3CU24U3EdelaySoundTime_12 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3EvariationName_13() { return static_cast<int32_t>(offsetof(U3CPlaySoundAndWaitUntilFinishedU3Ec__Iterator4_t1536777214, ___U3CU24U3EvariationName_13)); }
	inline String_t* get_U3CU24U3EvariationName_13() const { return ___U3CU24U3EvariationName_13; }
	inline String_t** get_address_of_U3CU24U3EvariationName_13() { return &___U3CU24U3EvariationName_13; }
	inline void set_U3CU24U3EvariationName_13(String_t* value)
	{
		___U3CU24U3EvariationName_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3EvariationName_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
