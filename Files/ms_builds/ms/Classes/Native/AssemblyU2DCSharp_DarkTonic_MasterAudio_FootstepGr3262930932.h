#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3644373756;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_EventSound1078957005.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.FootstepGroup
struct  FootstepGroup_t3262930932  : public Il2CppObject
{
public:
	// System.Boolean DarkTonic.MasterAudio.FootstepGroup::isExpanded
	bool ___isExpanded_0;
	// System.Boolean DarkTonic.MasterAudio.FootstepGroup::useLayerFilter
	bool ___useLayerFilter_1;
	// System.Boolean DarkTonic.MasterAudio.FootstepGroup::useTagFilter
	bool ___useTagFilter_2;
	// System.Collections.Generic.List`1<System.Int32> DarkTonic.MasterAudio.FootstepGroup::matchingLayers
	List_1_t3644373756 * ___matchingLayers_3;
	// System.Collections.Generic.List`1<System.String> DarkTonic.MasterAudio.FootstepGroup::matchingTags
	List_1_t1765447871 * ___matchingTags_4;
	// System.String DarkTonic.MasterAudio.FootstepGroup::soundType
	String_t* ___soundType_5;
	// DarkTonic.MasterAudio.EventSounds/VariationType DarkTonic.MasterAudio.FootstepGroup::variationType
	int32_t ___variationType_6;
	// System.String DarkTonic.MasterAudio.FootstepGroup::variationName
	String_t* ___variationName_7;
	// System.Single DarkTonic.MasterAudio.FootstepGroup::volume
	float ___volume_8;
	// System.Boolean DarkTonic.MasterAudio.FootstepGroup::useFixedPitch
	bool ___useFixedPitch_9;
	// System.Single DarkTonic.MasterAudio.FootstepGroup::pitch
	float ___pitch_10;
	// System.Single DarkTonic.MasterAudio.FootstepGroup::delaySound
	float ___delaySound_11;

public:
	inline static int32_t get_offset_of_isExpanded_0() { return static_cast<int32_t>(offsetof(FootstepGroup_t3262930932, ___isExpanded_0)); }
	inline bool get_isExpanded_0() const { return ___isExpanded_0; }
	inline bool* get_address_of_isExpanded_0() { return &___isExpanded_0; }
	inline void set_isExpanded_0(bool value)
	{
		___isExpanded_0 = value;
	}

	inline static int32_t get_offset_of_useLayerFilter_1() { return static_cast<int32_t>(offsetof(FootstepGroup_t3262930932, ___useLayerFilter_1)); }
	inline bool get_useLayerFilter_1() const { return ___useLayerFilter_1; }
	inline bool* get_address_of_useLayerFilter_1() { return &___useLayerFilter_1; }
	inline void set_useLayerFilter_1(bool value)
	{
		___useLayerFilter_1 = value;
	}

	inline static int32_t get_offset_of_useTagFilter_2() { return static_cast<int32_t>(offsetof(FootstepGroup_t3262930932, ___useTagFilter_2)); }
	inline bool get_useTagFilter_2() const { return ___useTagFilter_2; }
	inline bool* get_address_of_useTagFilter_2() { return &___useTagFilter_2; }
	inline void set_useTagFilter_2(bool value)
	{
		___useTagFilter_2 = value;
	}

	inline static int32_t get_offset_of_matchingLayers_3() { return static_cast<int32_t>(offsetof(FootstepGroup_t3262930932, ___matchingLayers_3)); }
	inline List_1_t3644373756 * get_matchingLayers_3() const { return ___matchingLayers_3; }
	inline List_1_t3644373756 ** get_address_of_matchingLayers_3() { return &___matchingLayers_3; }
	inline void set_matchingLayers_3(List_1_t3644373756 * value)
	{
		___matchingLayers_3 = value;
		Il2CppCodeGenWriteBarrier(&___matchingLayers_3, value);
	}

	inline static int32_t get_offset_of_matchingTags_4() { return static_cast<int32_t>(offsetof(FootstepGroup_t3262930932, ___matchingTags_4)); }
	inline List_1_t1765447871 * get_matchingTags_4() const { return ___matchingTags_4; }
	inline List_1_t1765447871 ** get_address_of_matchingTags_4() { return &___matchingTags_4; }
	inline void set_matchingTags_4(List_1_t1765447871 * value)
	{
		___matchingTags_4 = value;
		Il2CppCodeGenWriteBarrier(&___matchingTags_4, value);
	}

	inline static int32_t get_offset_of_soundType_5() { return static_cast<int32_t>(offsetof(FootstepGroup_t3262930932, ___soundType_5)); }
	inline String_t* get_soundType_5() const { return ___soundType_5; }
	inline String_t** get_address_of_soundType_5() { return &___soundType_5; }
	inline void set_soundType_5(String_t* value)
	{
		___soundType_5 = value;
		Il2CppCodeGenWriteBarrier(&___soundType_5, value);
	}

	inline static int32_t get_offset_of_variationType_6() { return static_cast<int32_t>(offsetof(FootstepGroup_t3262930932, ___variationType_6)); }
	inline int32_t get_variationType_6() const { return ___variationType_6; }
	inline int32_t* get_address_of_variationType_6() { return &___variationType_6; }
	inline void set_variationType_6(int32_t value)
	{
		___variationType_6 = value;
	}

	inline static int32_t get_offset_of_variationName_7() { return static_cast<int32_t>(offsetof(FootstepGroup_t3262930932, ___variationName_7)); }
	inline String_t* get_variationName_7() const { return ___variationName_7; }
	inline String_t** get_address_of_variationName_7() { return &___variationName_7; }
	inline void set_variationName_7(String_t* value)
	{
		___variationName_7 = value;
		Il2CppCodeGenWriteBarrier(&___variationName_7, value);
	}

	inline static int32_t get_offset_of_volume_8() { return static_cast<int32_t>(offsetof(FootstepGroup_t3262930932, ___volume_8)); }
	inline float get_volume_8() const { return ___volume_8; }
	inline float* get_address_of_volume_8() { return &___volume_8; }
	inline void set_volume_8(float value)
	{
		___volume_8 = value;
	}

	inline static int32_t get_offset_of_useFixedPitch_9() { return static_cast<int32_t>(offsetof(FootstepGroup_t3262930932, ___useFixedPitch_9)); }
	inline bool get_useFixedPitch_9() const { return ___useFixedPitch_9; }
	inline bool* get_address_of_useFixedPitch_9() { return &___useFixedPitch_9; }
	inline void set_useFixedPitch_9(bool value)
	{
		___useFixedPitch_9 = value;
	}

	inline static int32_t get_offset_of_pitch_10() { return static_cast<int32_t>(offsetof(FootstepGroup_t3262930932, ___pitch_10)); }
	inline float get_pitch_10() const { return ___pitch_10; }
	inline float* get_address_of_pitch_10() { return &___pitch_10; }
	inline void set_pitch_10(float value)
	{
		___pitch_10 = value;
	}

	inline static int32_t get_offset_of_delaySound_11() { return static_cast<int32_t>(offsetof(FootstepGroup_t3262930932, ___delaySound_11)); }
	inline float get_delaySound_11() const { return ___delaySound_11; }
	inline float* get_address_of_delaySound_11() { return &___delaySound_11; }
	inline void set_delaySound_11(float value)
	{
		___delaySound_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
