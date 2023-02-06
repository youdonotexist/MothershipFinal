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
// System.String
struct String_t;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.SoundGroupOrganizer/SoundGroupSelection>
struct List_1_t733540757;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.SoundGroupOrganizer/CustomEventSelection>
struct List_1_t1340096252;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.CustomEvent>
struct List_1_t3437396017;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi2603092430.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudio767596939.h"
#include "UnityEngine_UnityEngine_SystemLanguage1674836756.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_SoundGroup2315570254.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_SoundGroup1770084001.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.SoundGroupOrganizer
struct  SoundGroupOrganizer_t2284999662  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject DarkTonic.MasterAudio.SoundGroupOrganizer::dynGroupTemplate
	GameObject_t4012695102 * ___dynGroupTemplate_2;
	// UnityEngine.GameObject DarkTonic.MasterAudio.SoundGroupOrganizer::dynVariationTemplate
	GameObject_t4012695102 * ___dynVariationTemplate_3;
	// UnityEngine.GameObject DarkTonic.MasterAudio.SoundGroupOrganizer::maGroupTemplate
	GameObject_t4012695102 * ___maGroupTemplate_4;
	// UnityEngine.GameObject DarkTonic.MasterAudio.SoundGroupOrganizer::maVariationTemplate
	GameObject_t4012695102 * ___maVariationTemplate_5;
	// DarkTonic.MasterAudio.MasterAudio/DragGroupMode DarkTonic.MasterAudio.SoundGroupOrganizer::curDragGroupMode
	int32_t ___curDragGroupMode_6;
	// DarkTonic.MasterAudio.MasterAudio/AudioLocation DarkTonic.MasterAudio.SoundGroupOrganizer::bulkVariationMode
	int32_t ___bulkVariationMode_7;
	// UnityEngine.SystemLanguage DarkTonic.MasterAudio.SoundGroupOrganizer::previewLanguage
	int32_t ___previewLanguage_8;
	// System.Boolean DarkTonic.MasterAudio.SoundGroupOrganizer::useTextGroupFilter
	bool ___useTextGroupFilter_9;
	// System.String DarkTonic.MasterAudio.SoundGroupOrganizer::textGroupFilter
	String_t* ___textGroupFilter_10;
	// DarkTonic.MasterAudio.SoundGroupOrganizer/TransferMode DarkTonic.MasterAudio.SoundGroupOrganizer::transMode
	int32_t ___transMode_11;
	// UnityEngine.GameObject DarkTonic.MasterAudio.SoundGroupOrganizer::sourceObject
	GameObject_t4012695102 * ___sourceObject_12;
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.SoundGroupOrganizer/SoundGroupSelection> DarkTonic.MasterAudio.SoundGroupOrganizer::selectedSourceSoundGroups
	List_1_t733540757 * ___selectedSourceSoundGroups_13;
	// UnityEngine.GameObject DarkTonic.MasterAudio.SoundGroupOrganizer::destObject
	GameObject_t4012695102 * ___destObject_14;
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.SoundGroupOrganizer/SoundGroupSelection> DarkTonic.MasterAudio.SoundGroupOrganizer::selectedDestSoundGroups
	List_1_t733540757 * ___selectedDestSoundGroups_15;
	// DarkTonic.MasterAudio.SoundGroupOrganizer/MAItemType DarkTonic.MasterAudio.SoundGroupOrganizer::itemType
	int32_t ___itemType_16;
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.SoundGroupOrganizer/CustomEventSelection> DarkTonic.MasterAudio.SoundGroupOrganizer::selectedSourceCustomEvents
	List_1_t1340096252 * ___selectedSourceCustomEvents_17;
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.SoundGroupOrganizer/CustomEventSelection> DarkTonic.MasterAudio.SoundGroupOrganizer::selectedDestCustomEvents
	List_1_t1340096252 * ___selectedDestCustomEvents_18;
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.CustomEvent> DarkTonic.MasterAudio.SoundGroupOrganizer::customEvents
	List_1_t3437396017 * ___customEvents_19;
	// System.String DarkTonic.MasterAudio.SoundGroupOrganizer::newEventName
	String_t* ___newEventName_20;

public:
	inline static int32_t get_offset_of_dynGroupTemplate_2() { return static_cast<int32_t>(offsetof(SoundGroupOrganizer_t2284999662, ___dynGroupTemplate_2)); }
	inline GameObject_t4012695102 * get_dynGroupTemplate_2() const { return ___dynGroupTemplate_2; }
	inline GameObject_t4012695102 ** get_address_of_dynGroupTemplate_2() { return &___dynGroupTemplate_2; }
	inline void set_dynGroupTemplate_2(GameObject_t4012695102 * value)
	{
		___dynGroupTemplate_2 = value;
		Il2CppCodeGenWriteBarrier(&___dynGroupTemplate_2, value);
	}

	inline static int32_t get_offset_of_dynVariationTemplate_3() { return static_cast<int32_t>(offsetof(SoundGroupOrganizer_t2284999662, ___dynVariationTemplate_3)); }
	inline GameObject_t4012695102 * get_dynVariationTemplate_3() const { return ___dynVariationTemplate_3; }
	inline GameObject_t4012695102 ** get_address_of_dynVariationTemplate_3() { return &___dynVariationTemplate_3; }
	inline void set_dynVariationTemplate_3(GameObject_t4012695102 * value)
	{
		___dynVariationTemplate_3 = value;
		Il2CppCodeGenWriteBarrier(&___dynVariationTemplate_3, value);
	}

	inline static int32_t get_offset_of_maGroupTemplate_4() { return static_cast<int32_t>(offsetof(SoundGroupOrganizer_t2284999662, ___maGroupTemplate_4)); }
	inline GameObject_t4012695102 * get_maGroupTemplate_4() const { return ___maGroupTemplate_4; }
	inline GameObject_t4012695102 ** get_address_of_maGroupTemplate_4() { return &___maGroupTemplate_4; }
	inline void set_maGroupTemplate_4(GameObject_t4012695102 * value)
	{
		___maGroupTemplate_4 = value;
		Il2CppCodeGenWriteBarrier(&___maGroupTemplate_4, value);
	}

	inline static int32_t get_offset_of_maVariationTemplate_5() { return static_cast<int32_t>(offsetof(SoundGroupOrganizer_t2284999662, ___maVariationTemplate_5)); }
	inline GameObject_t4012695102 * get_maVariationTemplate_5() const { return ___maVariationTemplate_5; }
	inline GameObject_t4012695102 ** get_address_of_maVariationTemplate_5() { return &___maVariationTemplate_5; }
	inline void set_maVariationTemplate_5(GameObject_t4012695102 * value)
	{
		___maVariationTemplate_5 = value;
		Il2CppCodeGenWriteBarrier(&___maVariationTemplate_5, value);
	}

	inline static int32_t get_offset_of_curDragGroupMode_6() { return static_cast<int32_t>(offsetof(SoundGroupOrganizer_t2284999662, ___curDragGroupMode_6)); }
	inline int32_t get_curDragGroupMode_6() const { return ___curDragGroupMode_6; }
	inline int32_t* get_address_of_curDragGroupMode_6() { return &___curDragGroupMode_6; }
	inline void set_curDragGroupMode_6(int32_t value)
	{
		___curDragGroupMode_6 = value;
	}

	inline static int32_t get_offset_of_bulkVariationMode_7() { return static_cast<int32_t>(offsetof(SoundGroupOrganizer_t2284999662, ___bulkVariationMode_7)); }
	inline int32_t get_bulkVariationMode_7() const { return ___bulkVariationMode_7; }
	inline int32_t* get_address_of_bulkVariationMode_7() { return &___bulkVariationMode_7; }
	inline void set_bulkVariationMode_7(int32_t value)
	{
		___bulkVariationMode_7 = value;
	}

	inline static int32_t get_offset_of_previewLanguage_8() { return static_cast<int32_t>(offsetof(SoundGroupOrganizer_t2284999662, ___previewLanguage_8)); }
	inline int32_t get_previewLanguage_8() const { return ___previewLanguage_8; }
	inline int32_t* get_address_of_previewLanguage_8() { return &___previewLanguage_8; }
	inline void set_previewLanguage_8(int32_t value)
	{
		___previewLanguage_8 = value;
	}

	inline static int32_t get_offset_of_useTextGroupFilter_9() { return static_cast<int32_t>(offsetof(SoundGroupOrganizer_t2284999662, ___useTextGroupFilter_9)); }
	inline bool get_useTextGroupFilter_9() const { return ___useTextGroupFilter_9; }
	inline bool* get_address_of_useTextGroupFilter_9() { return &___useTextGroupFilter_9; }
	inline void set_useTextGroupFilter_9(bool value)
	{
		___useTextGroupFilter_9 = value;
	}

	inline static int32_t get_offset_of_textGroupFilter_10() { return static_cast<int32_t>(offsetof(SoundGroupOrganizer_t2284999662, ___textGroupFilter_10)); }
	inline String_t* get_textGroupFilter_10() const { return ___textGroupFilter_10; }
	inline String_t** get_address_of_textGroupFilter_10() { return &___textGroupFilter_10; }
	inline void set_textGroupFilter_10(String_t* value)
	{
		___textGroupFilter_10 = value;
		Il2CppCodeGenWriteBarrier(&___textGroupFilter_10, value);
	}

	inline static int32_t get_offset_of_transMode_11() { return static_cast<int32_t>(offsetof(SoundGroupOrganizer_t2284999662, ___transMode_11)); }
	inline int32_t get_transMode_11() const { return ___transMode_11; }
	inline int32_t* get_address_of_transMode_11() { return &___transMode_11; }
	inline void set_transMode_11(int32_t value)
	{
		___transMode_11 = value;
	}

	inline static int32_t get_offset_of_sourceObject_12() { return static_cast<int32_t>(offsetof(SoundGroupOrganizer_t2284999662, ___sourceObject_12)); }
	inline GameObject_t4012695102 * get_sourceObject_12() const { return ___sourceObject_12; }
	inline GameObject_t4012695102 ** get_address_of_sourceObject_12() { return &___sourceObject_12; }
	inline void set_sourceObject_12(GameObject_t4012695102 * value)
	{
		___sourceObject_12 = value;
		Il2CppCodeGenWriteBarrier(&___sourceObject_12, value);
	}

	inline static int32_t get_offset_of_selectedSourceSoundGroups_13() { return static_cast<int32_t>(offsetof(SoundGroupOrganizer_t2284999662, ___selectedSourceSoundGroups_13)); }
	inline List_1_t733540757 * get_selectedSourceSoundGroups_13() const { return ___selectedSourceSoundGroups_13; }
	inline List_1_t733540757 ** get_address_of_selectedSourceSoundGroups_13() { return &___selectedSourceSoundGroups_13; }
	inline void set_selectedSourceSoundGroups_13(List_1_t733540757 * value)
	{
		___selectedSourceSoundGroups_13 = value;
		Il2CppCodeGenWriteBarrier(&___selectedSourceSoundGroups_13, value);
	}

	inline static int32_t get_offset_of_destObject_14() { return static_cast<int32_t>(offsetof(SoundGroupOrganizer_t2284999662, ___destObject_14)); }
	inline GameObject_t4012695102 * get_destObject_14() const { return ___destObject_14; }
	inline GameObject_t4012695102 ** get_address_of_destObject_14() { return &___destObject_14; }
	inline void set_destObject_14(GameObject_t4012695102 * value)
	{
		___destObject_14 = value;
		Il2CppCodeGenWriteBarrier(&___destObject_14, value);
	}

	inline static int32_t get_offset_of_selectedDestSoundGroups_15() { return static_cast<int32_t>(offsetof(SoundGroupOrganizer_t2284999662, ___selectedDestSoundGroups_15)); }
	inline List_1_t733540757 * get_selectedDestSoundGroups_15() const { return ___selectedDestSoundGroups_15; }
	inline List_1_t733540757 ** get_address_of_selectedDestSoundGroups_15() { return &___selectedDestSoundGroups_15; }
	inline void set_selectedDestSoundGroups_15(List_1_t733540757 * value)
	{
		___selectedDestSoundGroups_15 = value;
		Il2CppCodeGenWriteBarrier(&___selectedDestSoundGroups_15, value);
	}

	inline static int32_t get_offset_of_itemType_16() { return static_cast<int32_t>(offsetof(SoundGroupOrganizer_t2284999662, ___itemType_16)); }
	inline int32_t get_itemType_16() const { return ___itemType_16; }
	inline int32_t* get_address_of_itemType_16() { return &___itemType_16; }
	inline void set_itemType_16(int32_t value)
	{
		___itemType_16 = value;
	}

	inline static int32_t get_offset_of_selectedSourceCustomEvents_17() { return static_cast<int32_t>(offsetof(SoundGroupOrganizer_t2284999662, ___selectedSourceCustomEvents_17)); }
	inline List_1_t1340096252 * get_selectedSourceCustomEvents_17() const { return ___selectedSourceCustomEvents_17; }
	inline List_1_t1340096252 ** get_address_of_selectedSourceCustomEvents_17() { return &___selectedSourceCustomEvents_17; }
	inline void set_selectedSourceCustomEvents_17(List_1_t1340096252 * value)
	{
		___selectedSourceCustomEvents_17 = value;
		Il2CppCodeGenWriteBarrier(&___selectedSourceCustomEvents_17, value);
	}

	inline static int32_t get_offset_of_selectedDestCustomEvents_18() { return static_cast<int32_t>(offsetof(SoundGroupOrganizer_t2284999662, ___selectedDestCustomEvents_18)); }
	inline List_1_t1340096252 * get_selectedDestCustomEvents_18() const { return ___selectedDestCustomEvents_18; }
	inline List_1_t1340096252 ** get_address_of_selectedDestCustomEvents_18() { return &___selectedDestCustomEvents_18; }
	inline void set_selectedDestCustomEvents_18(List_1_t1340096252 * value)
	{
		___selectedDestCustomEvents_18 = value;
		Il2CppCodeGenWriteBarrier(&___selectedDestCustomEvents_18, value);
	}

	inline static int32_t get_offset_of_customEvents_19() { return static_cast<int32_t>(offsetof(SoundGroupOrganizer_t2284999662, ___customEvents_19)); }
	inline List_1_t3437396017 * get_customEvents_19() const { return ___customEvents_19; }
	inline List_1_t3437396017 ** get_address_of_customEvents_19() { return &___customEvents_19; }
	inline void set_customEvents_19(List_1_t3437396017 * value)
	{
		___customEvents_19 = value;
		Il2CppCodeGenWriteBarrier(&___customEvents_19, value);
	}

	inline static int32_t get_offset_of_newEventName_20() { return static_cast<int32_t>(offsetof(SoundGroupOrganizer_t2284999662, ___newEventName_20)); }
	inline String_t* get_newEventName_20() const { return ___newEventName_20; }
	inline String_t** get_address_of_newEventName_20() { return &___newEventName_20; }
	inline void set_newEventName_20(String_t* value)
	{
		___newEventName_20 = value;
		Il2CppCodeGenWriteBarrier(&___newEventName_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
