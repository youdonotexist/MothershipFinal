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
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.CustomEvent>
struct List_1_t3437396017;
// System.String
struct String_t;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.DuckGroupInfo>
struct List_1_t2181280156;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.GroupBus>
struct List_1_t4141994569;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.MasterAudio/Playlist>
struct List_1_t2741077739;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t1081512082;
// UnityEngine.Transform
struct Transform_t284553113;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.DynamicSoundGroup>
struct List_1_t3160959703;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_SystemLanguage1674836756.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi2603092430.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_DynamicSou4004231518.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudio767596939.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.DynamicSoundGroupCreator
struct  DynamicSoundGroupCreator_t2871987884  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.SystemLanguage DarkTonic.MasterAudio.DynamicSoundGroupCreator::previewLanguage
	int32_t ___previewLanguage_3;
	// DarkTonic.MasterAudio.MasterAudio/DragGroupMode DarkTonic.MasterAudio.DynamicSoundGroupCreator::curDragGroupMode
	int32_t ___curDragGroupMode_4;
	// UnityEngine.GameObject DarkTonic.MasterAudio.DynamicSoundGroupCreator::groupTemplate
	GameObject_t4012695102 * ___groupTemplate_5;
	// UnityEngine.GameObject DarkTonic.MasterAudio.DynamicSoundGroupCreator::variationTemplate
	GameObject_t4012695102 * ___variationTemplate_6;
	// System.Boolean DarkTonic.MasterAudio.DynamicSoundGroupCreator::errorOnDuplicates
	bool ___errorOnDuplicates_7;
	// System.Boolean DarkTonic.MasterAudio.DynamicSoundGroupCreator::createOnAwake
	bool ___createOnAwake_8;
	// System.Boolean DarkTonic.MasterAudio.DynamicSoundGroupCreator::soundGroupsAreExpanded
	bool ___soundGroupsAreExpanded_9;
	// System.Boolean DarkTonic.MasterAudio.DynamicSoundGroupCreator::removeGroupsOnSceneChange
	bool ___removeGroupsOnSceneChange_10;
	// DarkTonic.MasterAudio.DynamicSoundGroupCreator/CreateItemsWhen DarkTonic.MasterAudio.DynamicSoundGroupCreator::reUseMode
	int32_t ___reUseMode_11;
	// System.Boolean DarkTonic.MasterAudio.DynamicSoundGroupCreator::showCustomEvents
	bool ___showCustomEvents_12;
	// DarkTonic.MasterAudio.MasterAudio/AudioLocation DarkTonic.MasterAudio.DynamicSoundGroupCreator::bulkVariationMode
	int32_t ___bulkVariationMode_13;
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.CustomEvent> DarkTonic.MasterAudio.DynamicSoundGroupCreator::customEventsToCreate
	List_1_t3437396017 * ___customEventsToCreate_14;
	// System.String DarkTonic.MasterAudio.DynamicSoundGroupCreator::newEventName
	String_t* ___newEventName_15;
	// System.Boolean DarkTonic.MasterAudio.DynamicSoundGroupCreator::showMusicDucking
	bool ___showMusicDucking_16;
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.DuckGroupInfo> DarkTonic.MasterAudio.DynamicSoundGroupCreator::musicDuckingSounds
	List_1_t2181280156 * ___musicDuckingSounds_17;
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.GroupBus> DarkTonic.MasterAudio.DynamicSoundGroupCreator::groupBuses
	List_1_t4141994569 * ___groupBuses_18;
	// System.Boolean DarkTonic.MasterAudio.DynamicSoundGroupCreator::playListExpanded
	bool ___playListExpanded_19;
	// System.Boolean DarkTonic.MasterAudio.DynamicSoundGroupCreator::playlistEditorExp
	bool ___playlistEditorExp_20;
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.MasterAudio/Playlist> DarkTonic.MasterAudio.DynamicSoundGroupCreator::musicPlaylists
	List_1_t2741077739 * ___musicPlaylists_21;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> DarkTonic.MasterAudio.DynamicSoundGroupCreator::audioSourceTemplates
	List_1_t514686775 * ___audioSourceTemplates_22;
	// System.String DarkTonic.MasterAudio.DynamicSoundGroupCreator::audioSourceTemplateName
	String_t* ___audioSourceTemplateName_23;
	// System.Boolean DarkTonic.MasterAudio.DynamicSoundGroupCreator::itemsCreatedEventExpanded
	bool ___itemsCreatedEventExpanded_24;
	// System.String DarkTonic.MasterAudio.DynamicSoundGroupCreator::itemsCreatedCustomEvent
	String_t* ___itemsCreatedCustomEvent_25;
	// System.Boolean DarkTonic.MasterAudio.DynamicSoundGroupCreator::showUnityMixerGroupAssignment
	bool ___showUnityMixerGroupAssignment_26;
	// System.Boolean DarkTonic.MasterAudio.DynamicSoundGroupCreator::_hasCreated
	bool ____hasCreated_27;
	// System.Collections.Generic.List`1<UnityEngine.Transform> DarkTonic.MasterAudio.DynamicSoundGroupCreator::_groupsToRemove
	List_1_t1081512082 * ____groupsToRemove_28;
	// UnityEngine.Transform DarkTonic.MasterAudio.DynamicSoundGroupCreator::_trans
	Transform_t284553113 * ____trans_29;
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.DynamicSoundGroup> DarkTonic.MasterAudio.DynamicSoundGroupCreator::_groupsToCreate
	List_1_t3160959703 * ____groupsToCreate_30;

public:
	inline static int32_t get_offset_of_previewLanguage_3() { return static_cast<int32_t>(offsetof(DynamicSoundGroupCreator_t2871987884, ___previewLanguage_3)); }
	inline int32_t get_previewLanguage_3() const { return ___previewLanguage_3; }
	inline int32_t* get_address_of_previewLanguage_3() { return &___previewLanguage_3; }
	inline void set_previewLanguage_3(int32_t value)
	{
		___previewLanguage_3 = value;
	}

	inline static int32_t get_offset_of_curDragGroupMode_4() { return static_cast<int32_t>(offsetof(DynamicSoundGroupCreator_t2871987884, ___curDragGroupMode_4)); }
	inline int32_t get_curDragGroupMode_4() const { return ___curDragGroupMode_4; }
	inline int32_t* get_address_of_curDragGroupMode_4() { return &___curDragGroupMode_4; }
	inline void set_curDragGroupMode_4(int32_t value)
	{
		___curDragGroupMode_4 = value;
	}

	inline static int32_t get_offset_of_groupTemplate_5() { return static_cast<int32_t>(offsetof(DynamicSoundGroupCreator_t2871987884, ___groupTemplate_5)); }
	inline GameObject_t4012695102 * get_groupTemplate_5() const { return ___groupTemplate_5; }
	inline GameObject_t4012695102 ** get_address_of_groupTemplate_5() { return &___groupTemplate_5; }
	inline void set_groupTemplate_5(GameObject_t4012695102 * value)
	{
		___groupTemplate_5 = value;
		Il2CppCodeGenWriteBarrier(&___groupTemplate_5, value);
	}

	inline static int32_t get_offset_of_variationTemplate_6() { return static_cast<int32_t>(offsetof(DynamicSoundGroupCreator_t2871987884, ___variationTemplate_6)); }
	inline GameObject_t4012695102 * get_variationTemplate_6() const { return ___variationTemplate_6; }
	inline GameObject_t4012695102 ** get_address_of_variationTemplate_6() { return &___variationTemplate_6; }
	inline void set_variationTemplate_6(GameObject_t4012695102 * value)
	{
		___variationTemplate_6 = value;
		Il2CppCodeGenWriteBarrier(&___variationTemplate_6, value);
	}

	inline static int32_t get_offset_of_errorOnDuplicates_7() { return static_cast<int32_t>(offsetof(DynamicSoundGroupCreator_t2871987884, ___errorOnDuplicates_7)); }
	inline bool get_errorOnDuplicates_7() const { return ___errorOnDuplicates_7; }
	inline bool* get_address_of_errorOnDuplicates_7() { return &___errorOnDuplicates_7; }
	inline void set_errorOnDuplicates_7(bool value)
	{
		___errorOnDuplicates_7 = value;
	}

	inline static int32_t get_offset_of_createOnAwake_8() { return static_cast<int32_t>(offsetof(DynamicSoundGroupCreator_t2871987884, ___createOnAwake_8)); }
	inline bool get_createOnAwake_8() const { return ___createOnAwake_8; }
	inline bool* get_address_of_createOnAwake_8() { return &___createOnAwake_8; }
	inline void set_createOnAwake_8(bool value)
	{
		___createOnAwake_8 = value;
	}

	inline static int32_t get_offset_of_soundGroupsAreExpanded_9() { return static_cast<int32_t>(offsetof(DynamicSoundGroupCreator_t2871987884, ___soundGroupsAreExpanded_9)); }
	inline bool get_soundGroupsAreExpanded_9() const { return ___soundGroupsAreExpanded_9; }
	inline bool* get_address_of_soundGroupsAreExpanded_9() { return &___soundGroupsAreExpanded_9; }
	inline void set_soundGroupsAreExpanded_9(bool value)
	{
		___soundGroupsAreExpanded_9 = value;
	}

	inline static int32_t get_offset_of_removeGroupsOnSceneChange_10() { return static_cast<int32_t>(offsetof(DynamicSoundGroupCreator_t2871987884, ___removeGroupsOnSceneChange_10)); }
	inline bool get_removeGroupsOnSceneChange_10() const { return ___removeGroupsOnSceneChange_10; }
	inline bool* get_address_of_removeGroupsOnSceneChange_10() { return &___removeGroupsOnSceneChange_10; }
	inline void set_removeGroupsOnSceneChange_10(bool value)
	{
		___removeGroupsOnSceneChange_10 = value;
	}

	inline static int32_t get_offset_of_reUseMode_11() { return static_cast<int32_t>(offsetof(DynamicSoundGroupCreator_t2871987884, ___reUseMode_11)); }
	inline int32_t get_reUseMode_11() const { return ___reUseMode_11; }
	inline int32_t* get_address_of_reUseMode_11() { return &___reUseMode_11; }
	inline void set_reUseMode_11(int32_t value)
	{
		___reUseMode_11 = value;
	}

	inline static int32_t get_offset_of_showCustomEvents_12() { return static_cast<int32_t>(offsetof(DynamicSoundGroupCreator_t2871987884, ___showCustomEvents_12)); }
	inline bool get_showCustomEvents_12() const { return ___showCustomEvents_12; }
	inline bool* get_address_of_showCustomEvents_12() { return &___showCustomEvents_12; }
	inline void set_showCustomEvents_12(bool value)
	{
		___showCustomEvents_12 = value;
	}

	inline static int32_t get_offset_of_bulkVariationMode_13() { return static_cast<int32_t>(offsetof(DynamicSoundGroupCreator_t2871987884, ___bulkVariationMode_13)); }
	inline int32_t get_bulkVariationMode_13() const { return ___bulkVariationMode_13; }
	inline int32_t* get_address_of_bulkVariationMode_13() { return &___bulkVariationMode_13; }
	inline void set_bulkVariationMode_13(int32_t value)
	{
		___bulkVariationMode_13 = value;
	}

	inline static int32_t get_offset_of_customEventsToCreate_14() { return static_cast<int32_t>(offsetof(DynamicSoundGroupCreator_t2871987884, ___customEventsToCreate_14)); }
	inline List_1_t3437396017 * get_customEventsToCreate_14() const { return ___customEventsToCreate_14; }
	inline List_1_t3437396017 ** get_address_of_customEventsToCreate_14() { return &___customEventsToCreate_14; }
	inline void set_customEventsToCreate_14(List_1_t3437396017 * value)
	{
		___customEventsToCreate_14 = value;
		Il2CppCodeGenWriteBarrier(&___customEventsToCreate_14, value);
	}

	inline static int32_t get_offset_of_newEventName_15() { return static_cast<int32_t>(offsetof(DynamicSoundGroupCreator_t2871987884, ___newEventName_15)); }
	inline String_t* get_newEventName_15() const { return ___newEventName_15; }
	inline String_t** get_address_of_newEventName_15() { return &___newEventName_15; }
	inline void set_newEventName_15(String_t* value)
	{
		___newEventName_15 = value;
		Il2CppCodeGenWriteBarrier(&___newEventName_15, value);
	}

	inline static int32_t get_offset_of_showMusicDucking_16() { return static_cast<int32_t>(offsetof(DynamicSoundGroupCreator_t2871987884, ___showMusicDucking_16)); }
	inline bool get_showMusicDucking_16() const { return ___showMusicDucking_16; }
	inline bool* get_address_of_showMusicDucking_16() { return &___showMusicDucking_16; }
	inline void set_showMusicDucking_16(bool value)
	{
		___showMusicDucking_16 = value;
	}

	inline static int32_t get_offset_of_musicDuckingSounds_17() { return static_cast<int32_t>(offsetof(DynamicSoundGroupCreator_t2871987884, ___musicDuckingSounds_17)); }
	inline List_1_t2181280156 * get_musicDuckingSounds_17() const { return ___musicDuckingSounds_17; }
	inline List_1_t2181280156 ** get_address_of_musicDuckingSounds_17() { return &___musicDuckingSounds_17; }
	inline void set_musicDuckingSounds_17(List_1_t2181280156 * value)
	{
		___musicDuckingSounds_17 = value;
		Il2CppCodeGenWriteBarrier(&___musicDuckingSounds_17, value);
	}

	inline static int32_t get_offset_of_groupBuses_18() { return static_cast<int32_t>(offsetof(DynamicSoundGroupCreator_t2871987884, ___groupBuses_18)); }
	inline List_1_t4141994569 * get_groupBuses_18() const { return ___groupBuses_18; }
	inline List_1_t4141994569 ** get_address_of_groupBuses_18() { return &___groupBuses_18; }
	inline void set_groupBuses_18(List_1_t4141994569 * value)
	{
		___groupBuses_18 = value;
		Il2CppCodeGenWriteBarrier(&___groupBuses_18, value);
	}

	inline static int32_t get_offset_of_playListExpanded_19() { return static_cast<int32_t>(offsetof(DynamicSoundGroupCreator_t2871987884, ___playListExpanded_19)); }
	inline bool get_playListExpanded_19() const { return ___playListExpanded_19; }
	inline bool* get_address_of_playListExpanded_19() { return &___playListExpanded_19; }
	inline void set_playListExpanded_19(bool value)
	{
		___playListExpanded_19 = value;
	}

	inline static int32_t get_offset_of_playlistEditorExp_20() { return static_cast<int32_t>(offsetof(DynamicSoundGroupCreator_t2871987884, ___playlistEditorExp_20)); }
	inline bool get_playlistEditorExp_20() const { return ___playlistEditorExp_20; }
	inline bool* get_address_of_playlistEditorExp_20() { return &___playlistEditorExp_20; }
	inline void set_playlistEditorExp_20(bool value)
	{
		___playlistEditorExp_20 = value;
	}

	inline static int32_t get_offset_of_musicPlaylists_21() { return static_cast<int32_t>(offsetof(DynamicSoundGroupCreator_t2871987884, ___musicPlaylists_21)); }
	inline List_1_t2741077739 * get_musicPlaylists_21() const { return ___musicPlaylists_21; }
	inline List_1_t2741077739 ** get_address_of_musicPlaylists_21() { return &___musicPlaylists_21; }
	inline void set_musicPlaylists_21(List_1_t2741077739 * value)
	{
		___musicPlaylists_21 = value;
		Il2CppCodeGenWriteBarrier(&___musicPlaylists_21, value);
	}

	inline static int32_t get_offset_of_audioSourceTemplates_22() { return static_cast<int32_t>(offsetof(DynamicSoundGroupCreator_t2871987884, ___audioSourceTemplates_22)); }
	inline List_1_t514686775 * get_audioSourceTemplates_22() const { return ___audioSourceTemplates_22; }
	inline List_1_t514686775 ** get_address_of_audioSourceTemplates_22() { return &___audioSourceTemplates_22; }
	inline void set_audioSourceTemplates_22(List_1_t514686775 * value)
	{
		___audioSourceTemplates_22 = value;
		Il2CppCodeGenWriteBarrier(&___audioSourceTemplates_22, value);
	}

	inline static int32_t get_offset_of_audioSourceTemplateName_23() { return static_cast<int32_t>(offsetof(DynamicSoundGroupCreator_t2871987884, ___audioSourceTemplateName_23)); }
	inline String_t* get_audioSourceTemplateName_23() const { return ___audioSourceTemplateName_23; }
	inline String_t** get_address_of_audioSourceTemplateName_23() { return &___audioSourceTemplateName_23; }
	inline void set_audioSourceTemplateName_23(String_t* value)
	{
		___audioSourceTemplateName_23 = value;
		Il2CppCodeGenWriteBarrier(&___audioSourceTemplateName_23, value);
	}

	inline static int32_t get_offset_of_itemsCreatedEventExpanded_24() { return static_cast<int32_t>(offsetof(DynamicSoundGroupCreator_t2871987884, ___itemsCreatedEventExpanded_24)); }
	inline bool get_itemsCreatedEventExpanded_24() const { return ___itemsCreatedEventExpanded_24; }
	inline bool* get_address_of_itemsCreatedEventExpanded_24() { return &___itemsCreatedEventExpanded_24; }
	inline void set_itemsCreatedEventExpanded_24(bool value)
	{
		___itemsCreatedEventExpanded_24 = value;
	}

	inline static int32_t get_offset_of_itemsCreatedCustomEvent_25() { return static_cast<int32_t>(offsetof(DynamicSoundGroupCreator_t2871987884, ___itemsCreatedCustomEvent_25)); }
	inline String_t* get_itemsCreatedCustomEvent_25() const { return ___itemsCreatedCustomEvent_25; }
	inline String_t** get_address_of_itemsCreatedCustomEvent_25() { return &___itemsCreatedCustomEvent_25; }
	inline void set_itemsCreatedCustomEvent_25(String_t* value)
	{
		___itemsCreatedCustomEvent_25 = value;
		Il2CppCodeGenWriteBarrier(&___itemsCreatedCustomEvent_25, value);
	}

	inline static int32_t get_offset_of_showUnityMixerGroupAssignment_26() { return static_cast<int32_t>(offsetof(DynamicSoundGroupCreator_t2871987884, ___showUnityMixerGroupAssignment_26)); }
	inline bool get_showUnityMixerGroupAssignment_26() const { return ___showUnityMixerGroupAssignment_26; }
	inline bool* get_address_of_showUnityMixerGroupAssignment_26() { return &___showUnityMixerGroupAssignment_26; }
	inline void set_showUnityMixerGroupAssignment_26(bool value)
	{
		___showUnityMixerGroupAssignment_26 = value;
	}

	inline static int32_t get_offset_of__hasCreated_27() { return static_cast<int32_t>(offsetof(DynamicSoundGroupCreator_t2871987884, ____hasCreated_27)); }
	inline bool get__hasCreated_27() const { return ____hasCreated_27; }
	inline bool* get_address_of__hasCreated_27() { return &____hasCreated_27; }
	inline void set__hasCreated_27(bool value)
	{
		____hasCreated_27 = value;
	}

	inline static int32_t get_offset_of__groupsToRemove_28() { return static_cast<int32_t>(offsetof(DynamicSoundGroupCreator_t2871987884, ____groupsToRemove_28)); }
	inline List_1_t1081512082 * get__groupsToRemove_28() const { return ____groupsToRemove_28; }
	inline List_1_t1081512082 ** get_address_of__groupsToRemove_28() { return &____groupsToRemove_28; }
	inline void set__groupsToRemove_28(List_1_t1081512082 * value)
	{
		____groupsToRemove_28 = value;
		Il2CppCodeGenWriteBarrier(&____groupsToRemove_28, value);
	}

	inline static int32_t get_offset_of__trans_29() { return static_cast<int32_t>(offsetof(DynamicSoundGroupCreator_t2871987884, ____trans_29)); }
	inline Transform_t284553113 * get__trans_29() const { return ____trans_29; }
	inline Transform_t284553113 ** get_address_of__trans_29() { return &____trans_29; }
	inline void set__trans_29(Transform_t284553113 * value)
	{
		____trans_29 = value;
		Il2CppCodeGenWriteBarrier(&____trans_29, value);
	}

	inline static int32_t get_offset_of__groupsToCreate_30() { return static_cast<int32_t>(offsetof(DynamicSoundGroupCreator_t2871987884, ____groupsToCreate_30)); }
	inline List_1_t3160959703 * get__groupsToCreate_30() const { return ____groupsToCreate_30; }
	inline List_1_t3160959703 ** get_address_of__groupsToCreate_30() { return &____groupsToCreate_30; }
	inline void set__groupsToCreate_30(List_1_t3160959703 * value)
	{
		____groupsToCreate_30 = value;
		Il2CppCodeGenWriteBarrier(&____groupsToCreate_30, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
