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
// UnityEngine.YieldInstruction
struct YieldInstruction_t3557331758;
struct YieldInstruction_t3557331758_marshaled_pinvoke;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;
// System.Collections.Generic.List`1<UnityEngine.SystemLanguage>
struct List_1_t2471795725;
// UnityEngine.Transform
struct Transform_t284553113;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.GroupBus>
struct List_1_t4141994569;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.MasterAudio/Playlist>
struct List_1_t2741077739;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.DuckGroupInfo>
struct List_1_t2181280156;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.CustomEvent>
struct List_1_t3437396017;
// System.Collections.Generic.Dictionary`2<System.String,DarkTonic.MasterAudio.DuckGroupInfo>
struct Dictionary_2_t3022019091;
// System.Collections.Generic.Dictionary`2<System.String,DarkTonic.MasterAudio.MasterAudio/AudioGroupInfo>
struct Dictionary_2_t3672244775;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>>
struct Dictionary_2_t987104364;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.MasterAudioGroup>
struct List_1_t1822620435;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.BusFadeInfo>
struct List_1_t2604891762;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.GroupFadeInfo>
struct List_1_t2652639089;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<DarkTonic.MasterAudio.ICustomEventReceiver,UnityEngine.Transform>>
struct Dictionary_2_t3644777345;
// System.Collections.Generic.Dictionary`2<System.String,DarkTonic.MasterAudio.PlaylistController>
struct Dictionary_2_t331213389;
// System.Collections.Generic.Dictionary`2<System.String,DarkTonic.MasterAudio.MasterAudio/SoundGroupRefillInfo>
struct Dictionary_2_t1800653924;
// DarkTonic.MasterAudio.MasterAudio
struct MasterAudio_t1340413987;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.MasterAudio/SoundGroupCommand>
struct List_1_t2620580692;
// System.Predicate`1<DarkTonic.MasterAudio.BusFadeInfo>
struct Predicate_1_t2378896691;
// System.Predicate`1<DarkTonic.MasterAudio.GroupFadeInfo>
struct Predicate_1_t2426644018;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudio767596939.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi2603092430.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi2367236411.h"
#include "UnityEngine_UnityEngine_SystemLanguage1674836756.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi1510236832.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi1322204107.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudio523866543.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi2370136026.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.MasterAudio
struct  MasterAudio_t1340413987  : public MonoBehaviour_t3012272455
{
public:
	// DarkTonic.MasterAudio.MasterAudio/AudioLocation DarkTonic.MasterAudio.MasterAudio::bulkLocationMode
	int32_t ___bulkLocationMode_23;
	// System.String DarkTonic.MasterAudio.MasterAudio::groupTemplateName
	String_t* ___groupTemplateName_24;
	// System.String DarkTonic.MasterAudio.MasterAudio::audioSourceTemplateName
	String_t* ___audioSourceTemplateName_25;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::showGroupCreation
	bool ___showGroupCreation_26;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::useGroupTemplates
	bool ___useGroupTemplates_27;
	// DarkTonic.MasterAudio.MasterAudio/DragGroupMode DarkTonic.MasterAudio.MasterAudio::curDragGroupMode
	int32_t ___curDragGroupMode_28;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> DarkTonic.MasterAudio.MasterAudio::groupTemplates
	List_1_t514686775 * ___groupTemplates_29;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> DarkTonic.MasterAudio.MasterAudio::audioSourceTemplates
	List_1_t514686775 * ___audioSourceTemplates_30;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::mixerMuted
	bool ___mixerMuted_31;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::playlistsMuted
	bool ___playlistsMuted_32;
	// DarkTonic.MasterAudio.MasterAudio/LanguageMode DarkTonic.MasterAudio.MasterAudio::langMode
	int32_t ___langMode_33;
	// UnityEngine.SystemLanguage DarkTonic.MasterAudio.MasterAudio::testLanguage
	int32_t ___testLanguage_34;
	// UnityEngine.SystemLanguage DarkTonic.MasterAudio.MasterAudio::defaultLanguage
	int32_t ___defaultLanguage_35;
	// System.Collections.Generic.List`1<UnityEngine.SystemLanguage> DarkTonic.MasterAudio.MasterAudio::supportedLanguages
	List_1_t2471795725 * ___supportedLanguages_36;
	// System.String DarkTonic.MasterAudio.MasterAudio::busFilter
	String_t* ___busFilter_37;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::useTextGroupFilter
	bool ___useTextGroupFilter_38;
	// System.String DarkTonic.MasterAudio.MasterAudio::textGroupFilter
	String_t* ___textGroupFilter_39;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::resourceClipsPauseDoNotUnload
	bool ___resourceClipsPauseDoNotUnload_40;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::resourceClipsAllLoadAsync
	bool ___resourceClipsAllLoadAsync_41;
	// UnityEngine.Transform DarkTonic.MasterAudio.MasterAudio::playlistControllerPrefab
	Transform_t284553113 * ___playlistControllerPrefab_42;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::persistBetweenScenes
	bool ___persistBetweenScenes_43;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::areGroupsExpanded
	bool ___areGroupsExpanded_44;
	// UnityEngine.Transform DarkTonic.MasterAudio.MasterAudio::soundGroupTemplate
	Transform_t284553113 * ___soundGroupTemplate_45;
	// UnityEngine.Transform DarkTonic.MasterAudio.MasterAudio::soundGroupVariationTemplate
	Transform_t284553113 * ___soundGroupVariationTemplate_46;
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.GroupBus> DarkTonic.MasterAudio.MasterAudio::groupBuses
	List_1_t4141994569 * ___groupBuses_47;
	// DarkTonic.MasterAudio.MasterAudio/MixerWidthMode DarkTonic.MasterAudio.MasterAudio::mixerWidth
	int32_t ___mixerWidth_48;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::busesShownInNarrow
	bool ___busesShownInNarrow_49;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::groupByBus
	bool ___groupByBus_50;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::showGizmos
	bool ___showGizmos_51;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::showAdvancedSettings
	bool ___showAdvancedSettings_52;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::showLocalization
	bool ___showLocalization_53;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::playListExpanded
	bool ___playListExpanded_54;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::playlistsExpanded
	bool ___playlistsExpanded_55;
	// DarkTonic.MasterAudio.MasterAudio/AllMusicSpatialBlendType DarkTonic.MasterAudio.MasterAudio::musicSpatialBlendType
	int32_t ___musicSpatialBlendType_56;
	// System.Single DarkTonic.MasterAudio.MasterAudio::musicSpatialBlend
	float ___musicSpatialBlend_57;
	// DarkTonic.MasterAudio.MasterAudio/AllMixerSpatialBlendType DarkTonic.MasterAudio.MasterAudio::mixerSpatialBlendType
	int32_t ___mixerSpatialBlendType_58;
	// System.Single DarkTonic.MasterAudio.MasterAudio::mixerSpatialBlend
	float ___mixerSpatialBlend_59;
	// DarkTonic.MasterAudio.MasterAudio/ItemSpatialBlendType DarkTonic.MasterAudio.MasterAudio::newGroupSpatialType
	int32_t ___newGroupSpatialType_60;
	// System.Single DarkTonic.MasterAudio.MasterAudio::newGroupSpatialBlend
	float ___newGroupSpatialBlend_61;
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.MasterAudio/Playlist> DarkTonic.MasterAudio.MasterAudio::musicPlaylists
	List_1_t2741077739 * ___musicPlaylists_62;
	// System.Single DarkTonic.MasterAudio.MasterAudio::_masterAudioVolume
	float ____masterAudioVolume_63;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::ignoreTimeScale
	bool ___ignoreTimeScale_64;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::useGaplessPlaylists
	bool ___useGaplessPlaylists_65;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::saveRuntimeChanges
	bool ___saveRuntimeChanges_66;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::prioritizeOnDistance
	bool ___prioritizeOnDistance_67;
	// System.Int32 DarkTonic.MasterAudio.MasterAudio::rePrioritizeEverySecIndex
	int32_t ___rePrioritizeEverySecIndex_68;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::visualAdvancedExpanded
	bool ___visualAdvancedExpanded_69;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::logAdvancedExpanded
	bool ___logAdvancedExpanded_70;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::showFadingSettings
	bool ___showFadingSettings_71;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::stopZeroVolumeVariations
	bool ___stopZeroVolumeVariations_72;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::stopZeroVolumeGroups
	bool ___stopZeroVolumeGroups_73;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::stopZeroVolumeBuses
	bool ___stopZeroVolumeBuses_74;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::stopZeroVolumePlaylists
	bool ___stopZeroVolumePlaylists_75;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::resourceAdvancedExpanded
	bool ___resourceAdvancedExpanded_76;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::useClipAgePriority
	bool ___useClipAgePriority_77;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::LogSounds
	bool ___LogSounds_78;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::logCustomEvents
	bool ___logCustomEvents_79;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::disableLogging
	bool ___disableLogging_80;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::showMusicDucking
	bool ___showMusicDucking_81;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::enableMusicDucking
	bool ___enableMusicDucking_82;
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.DuckGroupInfo> DarkTonic.MasterAudio.MasterAudio::musicDuckingSounds
	List_1_t2181280156 * ___musicDuckingSounds_83;
	// System.Single DarkTonic.MasterAudio.MasterAudio::defaultRiseVolStart
	float ___defaultRiseVolStart_84;
	// System.Single DarkTonic.MasterAudio.MasterAudio::duckedVolumeMultiplier
	float ___duckedVolumeMultiplier_85;
	// System.Single DarkTonic.MasterAudio.MasterAudio::crossFadeTime
	float ___crossFadeTime_86;
	// System.Single DarkTonic.MasterAudio.MasterAudio::_masterPlaylistVolume
	float ____masterPlaylistVolume_87;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::showGroupSelect
	bool ___showGroupSelect_88;
	// System.String DarkTonic.MasterAudio.MasterAudio::newEventName
	String_t* ___newEventName_89;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::showCustomEvents
	bool ___showCustomEvents_90;
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.CustomEvent> DarkTonic.MasterAudio.MasterAudio::customEvents
	List_1_t3437396017 * ___customEvents_91;
	// System.Collections.Generic.Dictionary`2<System.String,DarkTonic.MasterAudio.DuckGroupInfo> DarkTonic.MasterAudio.MasterAudio::duckingBySoundType
	Dictionary_2_t3022019091 * ___duckingBySoundType_92;
	// System.Int32 DarkTonic.MasterAudio.MasterAudio::frames
	int32_t ___frames_93;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::showUnityMixerGroupAssignment
	bool ___showUnityMixerGroupAssignment_95;
	// UnityEngine.Transform DarkTonic.MasterAudio.MasterAudio::_trans
	Transform_t284553113 * ____trans_96;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::_soundsLoaded
	bool ____soundsLoaded_97;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::_warming
	bool ____warming_98;

public:
	inline static int32_t get_offset_of_bulkLocationMode_23() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___bulkLocationMode_23)); }
	inline int32_t get_bulkLocationMode_23() const { return ___bulkLocationMode_23; }
	inline int32_t* get_address_of_bulkLocationMode_23() { return &___bulkLocationMode_23; }
	inline void set_bulkLocationMode_23(int32_t value)
	{
		___bulkLocationMode_23 = value;
	}

	inline static int32_t get_offset_of_groupTemplateName_24() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___groupTemplateName_24)); }
	inline String_t* get_groupTemplateName_24() const { return ___groupTemplateName_24; }
	inline String_t** get_address_of_groupTemplateName_24() { return &___groupTemplateName_24; }
	inline void set_groupTemplateName_24(String_t* value)
	{
		___groupTemplateName_24 = value;
		Il2CppCodeGenWriteBarrier(&___groupTemplateName_24, value);
	}

	inline static int32_t get_offset_of_audioSourceTemplateName_25() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___audioSourceTemplateName_25)); }
	inline String_t* get_audioSourceTemplateName_25() const { return ___audioSourceTemplateName_25; }
	inline String_t** get_address_of_audioSourceTemplateName_25() { return &___audioSourceTemplateName_25; }
	inline void set_audioSourceTemplateName_25(String_t* value)
	{
		___audioSourceTemplateName_25 = value;
		Il2CppCodeGenWriteBarrier(&___audioSourceTemplateName_25, value);
	}

	inline static int32_t get_offset_of_showGroupCreation_26() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___showGroupCreation_26)); }
	inline bool get_showGroupCreation_26() const { return ___showGroupCreation_26; }
	inline bool* get_address_of_showGroupCreation_26() { return &___showGroupCreation_26; }
	inline void set_showGroupCreation_26(bool value)
	{
		___showGroupCreation_26 = value;
	}

	inline static int32_t get_offset_of_useGroupTemplates_27() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___useGroupTemplates_27)); }
	inline bool get_useGroupTemplates_27() const { return ___useGroupTemplates_27; }
	inline bool* get_address_of_useGroupTemplates_27() { return &___useGroupTemplates_27; }
	inline void set_useGroupTemplates_27(bool value)
	{
		___useGroupTemplates_27 = value;
	}

	inline static int32_t get_offset_of_curDragGroupMode_28() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___curDragGroupMode_28)); }
	inline int32_t get_curDragGroupMode_28() const { return ___curDragGroupMode_28; }
	inline int32_t* get_address_of_curDragGroupMode_28() { return &___curDragGroupMode_28; }
	inline void set_curDragGroupMode_28(int32_t value)
	{
		___curDragGroupMode_28 = value;
	}

	inline static int32_t get_offset_of_groupTemplates_29() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___groupTemplates_29)); }
	inline List_1_t514686775 * get_groupTemplates_29() const { return ___groupTemplates_29; }
	inline List_1_t514686775 ** get_address_of_groupTemplates_29() { return &___groupTemplates_29; }
	inline void set_groupTemplates_29(List_1_t514686775 * value)
	{
		___groupTemplates_29 = value;
		Il2CppCodeGenWriteBarrier(&___groupTemplates_29, value);
	}

	inline static int32_t get_offset_of_audioSourceTemplates_30() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___audioSourceTemplates_30)); }
	inline List_1_t514686775 * get_audioSourceTemplates_30() const { return ___audioSourceTemplates_30; }
	inline List_1_t514686775 ** get_address_of_audioSourceTemplates_30() { return &___audioSourceTemplates_30; }
	inline void set_audioSourceTemplates_30(List_1_t514686775 * value)
	{
		___audioSourceTemplates_30 = value;
		Il2CppCodeGenWriteBarrier(&___audioSourceTemplates_30, value);
	}

	inline static int32_t get_offset_of_mixerMuted_31() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___mixerMuted_31)); }
	inline bool get_mixerMuted_31() const { return ___mixerMuted_31; }
	inline bool* get_address_of_mixerMuted_31() { return &___mixerMuted_31; }
	inline void set_mixerMuted_31(bool value)
	{
		___mixerMuted_31 = value;
	}

	inline static int32_t get_offset_of_playlistsMuted_32() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___playlistsMuted_32)); }
	inline bool get_playlistsMuted_32() const { return ___playlistsMuted_32; }
	inline bool* get_address_of_playlistsMuted_32() { return &___playlistsMuted_32; }
	inline void set_playlistsMuted_32(bool value)
	{
		___playlistsMuted_32 = value;
	}

	inline static int32_t get_offset_of_langMode_33() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___langMode_33)); }
	inline int32_t get_langMode_33() const { return ___langMode_33; }
	inline int32_t* get_address_of_langMode_33() { return &___langMode_33; }
	inline void set_langMode_33(int32_t value)
	{
		___langMode_33 = value;
	}

	inline static int32_t get_offset_of_testLanguage_34() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___testLanguage_34)); }
	inline int32_t get_testLanguage_34() const { return ___testLanguage_34; }
	inline int32_t* get_address_of_testLanguage_34() { return &___testLanguage_34; }
	inline void set_testLanguage_34(int32_t value)
	{
		___testLanguage_34 = value;
	}

	inline static int32_t get_offset_of_defaultLanguage_35() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___defaultLanguage_35)); }
	inline int32_t get_defaultLanguage_35() const { return ___defaultLanguage_35; }
	inline int32_t* get_address_of_defaultLanguage_35() { return &___defaultLanguage_35; }
	inline void set_defaultLanguage_35(int32_t value)
	{
		___defaultLanguage_35 = value;
	}

	inline static int32_t get_offset_of_supportedLanguages_36() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___supportedLanguages_36)); }
	inline List_1_t2471795725 * get_supportedLanguages_36() const { return ___supportedLanguages_36; }
	inline List_1_t2471795725 ** get_address_of_supportedLanguages_36() { return &___supportedLanguages_36; }
	inline void set_supportedLanguages_36(List_1_t2471795725 * value)
	{
		___supportedLanguages_36 = value;
		Il2CppCodeGenWriteBarrier(&___supportedLanguages_36, value);
	}

	inline static int32_t get_offset_of_busFilter_37() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___busFilter_37)); }
	inline String_t* get_busFilter_37() const { return ___busFilter_37; }
	inline String_t** get_address_of_busFilter_37() { return &___busFilter_37; }
	inline void set_busFilter_37(String_t* value)
	{
		___busFilter_37 = value;
		Il2CppCodeGenWriteBarrier(&___busFilter_37, value);
	}

	inline static int32_t get_offset_of_useTextGroupFilter_38() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___useTextGroupFilter_38)); }
	inline bool get_useTextGroupFilter_38() const { return ___useTextGroupFilter_38; }
	inline bool* get_address_of_useTextGroupFilter_38() { return &___useTextGroupFilter_38; }
	inline void set_useTextGroupFilter_38(bool value)
	{
		___useTextGroupFilter_38 = value;
	}

	inline static int32_t get_offset_of_textGroupFilter_39() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___textGroupFilter_39)); }
	inline String_t* get_textGroupFilter_39() const { return ___textGroupFilter_39; }
	inline String_t** get_address_of_textGroupFilter_39() { return &___textGroupFilter_39; }
	inline void set_textGroupFilter_39(String_t* value)
	{
		___textGroupFilter_39 = value;
		Il2CppCodeGenWriteBarrier(&___textGroupFilter_39, value);
	}

	inline static int32_t get_offset_of_resourceClipsPauseDoNotUnload_40() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___resourceClipsPauseDoNotUnload_40)); }
	inline bool get_resourceClipsPauseDoNotUnload_40() const { return ___resourceClipsPauseDoNotUnload_40; }
	inline bool* get_address_of_resourceClipsPauseDoNotUnload_40() { return &___resourceClipsPauseDoNotUnload_40; }
	inline void set_resourceClipsPauseDoNotUnload_40(bool value)
	{
		___resourceClipsPauseDoNotUnload_40 = value;
	}

	inline static int32_t get_offset_of_resourceClipsAllLoadAsync_41() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___resourceClipsAllLoadAsync_41)); }
	inline bool get_resourceClipsAllLoadAsync_41() const { return ___resourceClipsAllLoadAsync_41; }
	inline bool* get_address_of_resourceClipsAllLoadAsync_41() { return &___resourceClipsAllLoadAsync_41; }
	inline void set_resourceClipsAllLoadAsync_41(bool value)
	{
		___resourceClipsAllLoadAsync_41 = value;
	}

	inline static int32_t get_offset_of_playlistControllerPrefab_42() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___playlistControllerPrefab_42)); }
	inline Transform_t284553113 * get_playlistControllerPrefab_42() const { return ___playlistControllerPrefab_42; }
	inline Transform_t284553113 ** get_address_of_playlistControllerPrefab_42() { return &___playlistControllerPrefab_42; }
	inline void set_playlistControllerPrefab_42(Transform_t284553113 * value)
	{
		___playlistControllerPrefab_42 = value;
		Il2CppCodeGenWriteBarrier(&___playlistControllerPrefab_42, value);
	}

	inline static int32_t get_offset_of_persistBetweenScenes_43() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___persistBetweenScenes_43)); }
	inline bool get_persistBetweenScenes_43() const { return ___persistBetweenScenes_43; }
	inline bool* get_address_of_persistBetweenScenes_43() { return &___persistBetweenScenes_43; }
	inline void set_persistBetweenScenes_43(bool value)
	{
		___persistBetweenScenes_43 = value;
	}

	inline static int32_t get_offset_of_areGroupsExpanded_44() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___areGroupsExpanded_44)); }
	inline bool get_areGroupsExpanded_44() const { return ___areGroupsExpanded_44; }
	inline bool* get_address_of_areGroupsExpanded_44() { return &___areGroupsExpanded_44; }
	inline void set_areGroupsExpanded_44(bool value)
	{
		___areGroupsExpanded_44 = value;
	}

	inline static int32_t get_offset_of_soundGroupTemplate_45() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___soundGroupTemplate_45)); }
	inline Transform_t284553113 * get_soundGroupTemplate_45() const { return ___soundGroupTemplate_45; }
	inline Transform_t284553113 ** get_address_of_soundGroupTemplate_45() { return &___soundGroupTemplate_45; }
	inline void set_soundGroupTemplate_45(Transform_t284553113 * value)
	{
		___soundGroupTemplate_45 = value;
		Il2CppCodeGenWriteBarrier(&___soundGroupTemplate_45, value);
	}

	inline static int32_t get_offset_of_soundGroupVariationTemplate_46() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___soundGroupVariationTemplate_46)); }
	inline Transform_t284553113 * get_soundGroupVariationTemplate_46() const { return ___soundGroupVariationTemplate_46; }
	inline Transform_t284553113 ** get_address_of_soundGroupVariationTemplate_46() { return &___soundGroupVariationTemplate_46; }
	inline void set_soundGroupVariationTemplate_46(Transform_t284553113 * value)
	{
		___soundGroupVariationTemplate_46 = value;
		Il2CppCodeGenWriteBarrier(&___soundGroupVariationTemplate_46, value);
	}

	inline static int32_t get_offset_of_groupBuses_47() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___groupBuses_47)); }
	inline List_1_t4141994569 * get_groupBuses_47() const { return ___groupBuses_47; }
	inline List_1_t4141994569 ** get_address_of_groupBuses_47() { return &___groupBuses_47; }
	inline void set_groupBuses_47(List_1_t4141994569 * value)
	{
		___groupBuses_47 = value;
		Il2CppCodeGenWriteBarrier(&___groupBuses_47, value);
	}

	inline static int32_t get_offset_of_mixerWidth_48() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___mixerWidth_48)); }
	inline int32_t get_mixerWidth_48() const { return ___mixerWidth_48; }
	inline int32_t* get_address_of_mixerWidth_48() { return &___mixerWidth_48; }
	inline void set_mixerWidth_48(int32_t value)
	{
		___mixerWidth_48 = value;
	}

	inline static int32_t get_offset_of_busesShownInNarrow_49() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___busesShownInNarrow_49)); }
	inline bool get_busesShownInNarrow_49() const { return ___busesShownInNarrow_49; }
	inline bool* get_address_of_busesShownInNarrow_49() { return &___busesShownInNarrow_49; }
	inline void set_busesShownInNarrow_49(bool value)
	{
		___busesShownInNarrow_49 = value;
	}

	inline static int32_t get_offset_of_groupByBus_50() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___groupByBus_50)); }
	inline bool get_groupByBus_50() const { return ___groupByBus_50; }
	inline bool* get_address_of_groupByBus_50() { return &___groupByBus_50; }
	inline void set_groupByBus_50(bool value)
	{
		___groupByBus_50 = value;
	}

	inline static int32_t get_offset_of_showGizmos_51() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___showGizmos_51)); }
	inline bool get_showGizmos_51() const { return ___showGizmos_51; }
	inline bool* get_address_of_showGizmos_51() { return &___showGizmos_51; }
	inline void set_showGizmos_51(bool value)
	{
		___showGizmos_51 = value;
	}

	inline static int32_t get_offset_of_showAdvancedSettings_52() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___showAdvancedSettings_52)); }
	inline bool get_showAdvancedSettings_52() const { return ___showAdvancedSettings_52; }
	inline bool* get_address_of_showAdvancedSettings_52() { return &___showAdvancedSettings_52; }
	inline void set_showAdvancedSettings_52(bool value)
	{
		___showAdvancedSettings_52 = value;
	}

	inline static int32_t get_offset_of_showLocalization_53() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___showLocalization_53)); }
	inline bool get_showLocalization_53() const { return ___showLocalization_53; }
	inline bool* get_address_of_showLocalization_53() { return &___showLocalization_53; }
	inline void set_showLocalization_53(bool value)
	{
		___showLocalization_53 = value;
	}

	inline static int32_t get_offset_of_playListExpanded_54() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___playListExpanded_54)); }
	inline bool get_playListExpanded_54() const { return ___playListExpanded_54; }
	inline bool* get_address_of_playListExpanded_54() { return &___playListExpanded_54; }
	inline void set_playListExpanded_54(bool value)
	{
		___playListExpanded_54 = value;
	}

	inline static int32_t get_offset_of_playlistsExpanded_55() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___playlistsExpanded_55)); }
	inline bool get_playlistsExpanded_55() const { return ___playlistsExpanded_55; }
	inline bool* get_address_of_playlistsExpanded_55() { return &___playlistsExpanded_55; }
	inline void set_playlistsExpanded_55(bool value)
	{
		___playlistsExpanded_55 = value;
	}

	inline static int32_t get_offset_of_musicSpatialBlendType_56() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___musicSpatialBlendType_56)); }
	inline int32_t get_musicSpatialBlendType_56() const { return ___musicSpatialBlendType_56; }
	inline int32_t* get_address_of_musicSpatialBlendType_56() { return &___musicSpatialBlendType_56; }
	inline void set_musicSpatialBlendType_56(int32_t value)
	{
		___musicSpatialBlendType_56 = value;
	}

	inline static int32_t get_offset_of_musicSpatialBlend_57() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___musicSpatialBlend_57)); }
	inline float get_musicSpatialBlend_57() const { return ___musicSpatialBlend_57; }
	inline float* get_address_of_musicSpatialBlend_57() { return &___musicSpatialBlend_57; }
	inline void set_musicSpatialBlend_57(float value)
	{
		___musicSpatialBlend_57 = value;
	}

	inline static int32_t get_offset_of_mixerSpatialBlendType_58() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___mixerSpatialBlendType_58)); }
	inline int32_t get_mixerSpatialBlendType_58() const { return ___mixerSpatialBlendType_58; }
	inline int32_t* get_address_of_mixerSpatialBlendType_58() { return &___mixerSpatialBlendType_58; }
	inline void set_mixerSpatialBlendType_58(int32_t value)
	{
		___mixerSpatialBlendType_58 = value;
	}

	inline static int32_t get_offset_of_mixerSpatialBlend_59() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___mixerSpatialBlend_59)); }
	inline float get_mixerSpatialBlend_59() const { return ___mixerSpatialBlend_59; }
	inline float* get_address_of_mixerSpatialBlend_59() { return &___mixerSpatialBlend_59; }
	inline void set_mixerSpatialBlend_59(float value)
	{
		___mixerSpatialBlend_59 = value;
	}

	inline static int32_t get_offset_of_newGroupSpatialType_60() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___newGroupSpatialType_60)); }
	inline int32_t get_newGroupSpatialType_60() const { return ___newGroupSpatialType_60; }
	inline int32_t* get_address_of_newGroupSpatialType_60() { return &___newGroupSpatialType_60; }
	inline void set_newGroupSpatialType_60(int32_t value)
	{
		___newGroupSpatialType_60 = value;
	}

	inline static int32_t get_offset_of_newGroupSpatialBlend_61() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___newGroupSpatialBlend_61)); }
	inline float get_newGroupSpatialBlend_61() const { return ___newGroupSpatialBlend_61; }
	inline float* get_address_of_newGroupSpatialBlend_61() { return &___newGroupSpatialBlend_61; }
	inline void set_newGroupSpatialBlend_61(float value)
	{
		___newGroupSpatialBlend_61 = value;
	}

	inline static int32_t get_offset_of_musicPlaylists_62() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___musicPlaylists_62)); }
	inline List_1_t2741077739 * get_musicPlaylists_62() const { return ___musicPlaylists_62; }
	inline List_1_t2741077739 ** get_address_of_musicPlaylists_62() { return &___musicPlaylists_62; }
	inline void set_musicPlaylists_62(List_1_t2741077739 * value)
	{
		___musicPlaylists_62 = value;
		Il2CppCodeGenWriteBarrier(&___musicPlaylists_62, value);
	}

	inline static int32_t get_offset_of__masterAudioVolume_63() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ____masterAudioVolume_63)); }
	inline float get__masterAudioVolume_63() const { return ____masterAudioVolume_63; }
	inline float* get_address_of__masterAudioVolume_63() { return &____masterAudioVolume_63; }
	inline void set__masterAudioVolume_63(float value)
	{
		____masterAudioVolume_63 = value;
	}

	inline static int32_t get_offset_of_ignoreTimeScale_64() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___ignoreTimeScale_64)); }
	inline bool get_ignoreTimeScale_64() const { return ___ignoreTimeScale_64; }
	inline bool* get_address_of_ignoreTimeScale_64() { return &___ignoreTimeScale_64; }
	inline void set_ignoreTimeScale_64(bool value)
	{
		___ignoreTimeScale_64 = value;
	}

	inline static int32_t get_offset_of_useGaplessPlaylists_65() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___useGaplessPlaylists_65)); }
	inline bool get_useGaplessPlaylists_65() const { return ___useGaplessPlaylists_65; }
	inline bool* get_address_of_useGaplessPlaylists_65() { return &___useGaplessPlaylists_65; }
	inline void set_useGaplessPlaylists_65(bool value)
	{
		___useGaplessPlaylists_65 = value;
	}

	inline static int32_t get_offset_of_saveRuntimeChanges_66() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___saveRuntimeChanges_66)); }
	inline bool get_saveRuntimeChanges_66() const { return ___saveRuntimeChanges_66; }
	inline bool* get_address_of_saveRuntimeChanges_66() { return &___saveRuntimeChanges_66; }
	inline void set_saveRuntimeChanges_66(bool value)
	{
		___saveRuntimeChanges_66 = value;
	}

	inline static int32_t get_offset_of_prioritizeOnDistance_67() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___prioritizeOnDistance_67)); }
	inline bool get_prioritizeOnDistance_67() const { return ___prioritizeOnDistance_67; }
	inline bool* get_address_of_prioritizeOnDistance_67() { return &___prioritizeOnDistance_67; }
	inline void set_prioritizeOnDistance_67(bool value)
	{
		___prioritizeOnDistance_67 = value;
	}

	inline static int32_t get_offset_of_rePrioritizeEverySecIndex_68() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___rePrioritizeEverySecIndex_68)); }
	inline int32_t get_rePrioritizeEverySecIndex_68() const { return ___rePrioritizeEverySecIndex_68; }
	inline int32_t* get_address_of_rePrioritizeEverySecIndex_68() { return &___rePrioritizeEverySecIndex_68; }
	inline void set_rePrioritizeEverySecIndex_68(int32_t value)
	{
		___rePrioritizeEverySecIndex_68 = value;
	}

	inline static int32_t get_offset_of_visualAdvancedExpanded_69() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___visualAdvancedExpanded_69)); }
	inline bool get_visualAdvancedExpanded_69() const { return ___visualAdvancedExpanded_69; }
	inline bool* get_address_of_visualAdvancedExpanded_69() { return &___visualAdvancedExpanded_69; }
	inline void set_visualAdvancedExpanded_69(bool value)
	{
		___visualAdvancedExpanded_69 = value;
	}

	inline static int32_t get_offset_of_logAdvancedExpanded_70() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___logAdvancedExpanded_70)); }
	inline bool get_logAdvancedExpanded_70() const { return ___logAdvancedExpanded_70; }
	inline bool* get_address_of_logAdvancedExpanded_70() { return &___logAdvancedExpanded_70; }
	inline void set_logAdvancedExpanded_70(bool value)
	{
		___logAdvancedExpanded_70 = value;
	}

	inline static int32_t get_offset_of_showFadingSettings_71() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___showFadingSettings_71)); }
	inline bool get_showFadingSettings_71() const { return ___showFadingSettings_71; }
	inline bool* get_address_of_showFadingSettings_71() { return &___showFadingSettings_71; }
	inline void set_showFadingSettings_71(bool value)
	{
		___showFadingSettings_71 = value;
	}

	inline static int32_t get_offset_of_stopZeroVolumeVariations_72() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___stopZeroVolumeVariations_72)); }
	inline bool get_stopZeroVolumeVariations_72() const { return ___stopZeroVolumeVariations_72; }
	inline bool* get_address_of_stopZeroVolumeVariations_72() { return &___stopZeroVolumeVariations_72; }
	inline void set_stopZeroVolumeVariations_72(bool value)
	{
		___stopZeroVolumeVariations_72 = value;
	}

	inline static int32_t get_offset_of_stopZeroVolumeGroups_73() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___stopZeroVolumeGroups_73)); }
	inline bool get_stopZeroVolumeGroups_73() const { return ___stopZeroVolumeGroups_73; }
	inline bool* get_address_of_stopZeroVolumeGroups_73() { return &___stopZeroVolumeGroups_73; }
	inline void set_stopZeroVolumeGroups_73(bool value)
	{
		___stopZeroVolumeGroups_73 = value;
	}

	inline static int32_t get_offset_of_stopZeroVolumeBuses_74() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___stopZeroVolumeBuses_74)); }
	inline bool get_stopZeroVolumeBuses_74() const { return ___stopZeroVolumeBuses_74; }
	inline bool* get_address_of_stopZeroVolumeBuses_74() { return &___stopZeroVolumeBuses_74; }
	inline void set_stopZeroVolumeBuses_74(bool value)
	{
		___stopZeroVolumeBuses_74 = value;
	}

	inline static int32_t get_offset_of_stopZeroVolumePlaylists_75() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___stopZeroVolumePlaylists_75)); }
	inline bool get_stopZeroVolumePlaylists_75() const { return ___stopZeroVolumePlaylists_75; }
	inline bool* get_address_of_stopZeroVolumePlaylists_75() { return &___stopZeroVolumePlaylists_75; }
	inline void set_stopZeroVolumePlaylists_75(bool value)
	{
		___stopZeroVolumePlaylists_75 = value;
	}

	inline static int32_t get_offset_of_resourceAdvancedExpanded_76() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___resourceAdvancedExpanded_76)); }
	inline bool get_resourceAdvancedExpanded_76() const { return ___resourceAdvancedExpanded_76; }
	inline bool* get_address_of_resourceAdvancedExpanded_76() { return &___resourceAdvancedExpanded_76; }
	inline void set_resourceAdvancedExpanded_76(bool value)
	{
		___resourceAdvancedExpanded_76 = value;
	}

	inline static int32_t get_offset_of_useClipAgePriority_77() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___useClipAgePriority_77)); }
	inline bool get_useClipAgePriority_77() const { return ___useClipAgePriority_77; }
	inline bool* get_address_of_useClipAgePriority_77() { return &___useClipAgePriority_77; }
	inline void set_useClipAgePriority_77(bool value)
	{
		___useClipAgePriority_77 = value;
	}

	inline static int32_t get_offset_of_LogSounds_78() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___LogSounds_78)); }
	inline bool get_LogSounds_78() const { return ___LogSounds_78; }
	inline bool* get_address_of_LogSounds_78() { return &___LogSounds_78; }
	inline void set_LogSounds_78(bool value)
	{
		___LogSounds_78 = value;
	}

	inline static int32_t get_offset_of_logCustomEvents_79() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___logCustomEvents_79)); }
	inline bool get_logCustomEvents_79() const { return ___logCustomEvents_79; }
	inline bool* get_address_of_logCustomEvents_79() { return &___logCustomEvents_79; }
	inline void set_logCustomEvents_79(bool value)
	{
		___logCustomEvents_79 = value;
	}

	inline static int32_t get_offset_of_disableLogging_80() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___disableLogging_80)); }
	inline bool get_disableLogging_80() const { return ___disableLogging_80; }
	inline bool* get_address_of_disableLogging_80() { return &___disableLogging_80; }
	inline void set_disableLogging_80(bool value)
	{
		___disableLogging_80 = value;
	}

	inline static int32_t get_offset_of_showMusicDucking_81() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___showMusicDucking_81)); }
	inline bool get_showMusicDucking_81() const { return ___showMusicDucking_81; }
	inline bool* get_address_of_showMusicDucking_81() { return &___showMusicDucking_81; }
	inline void set_showMusicDucking_81(bool value)
	{
		___showMusicDucking_81 = value;
	}

	inline static int32_t get_offset_of_enableMusicDucking_82() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___enableMusicDucking_82)); }
	inline bool get_enableMusicDucking_82() const { return ___enableMusicDucking_82; }
	inline bool* get_address_of_enableMusicDucking_82() { return &___enableMusicDucking_82; }
	inline void set_enableMusicDucking_82(bool value)
	{
		___enableMusicDucking_82 = value;
	}

	inline static int32_t get_offset_of_musicDuckingSounds_83() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___musicDuckingSounds_83)); }
	inline List_1_t2181280156 * get_musicDuckingSounds_83() const { return ___musicDuckingSounds_83; }
	inline List_1_t2181280156 ** get_address_of_musicDuckingSounds_83() { return &___musicDuckingSounds_83; }
	inline void set_musicDuckingSounds_83(List_1_t2181280156 * value)
	{
		___musicDuckingSounds_83 = value;
		Il2CppCodeGenWriteBarrier(&___musicDuckingSounds_83, value);
	}

	inline static int32_t get_offset_of_defaultRiseVolStart_84() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___defaultRiseVolStart_84)); }
	inline float get_defaultRiseVolStart_84() const { return ___defaultRiseVolStart_84; }
	inline float* get_address_of_defaultRiseVolStart_84() { return &___defaultRiseVolStart_84; }
	inline void set_defaultRiseVolStart_84(float value)
	{
		___defaultRiseVolStart_84 = value;
	}

	inline static int32_t get_offset_of_duckedVolumeMultiplier_85() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___duckedVolumeMultiplier_85)); }
	inline float get_duckedVolumeMultiplier_85() const { return ___duckedVolumeMultiplier_85; }
	inline float* get_address_of_duckedVolumeMultiplier_85() { return &___duckedVolumeMultiplier_85; }
	inline void set_duckedVolumeMultiplier_85(float value)
	{
		___duckedVolumeMultiplier_85 = value;
	}

	inline static int32_t get_offset_of_crossFadeTime_86() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___crossFadeTime_86)); }
	inline float get_crossFadeTime_86() const { return ___crossFadeTime_86; }
	inline float* get_address_of_crossFadeTime_86() { return &___crossFadeTime_86; }
	inline void set_crossFadeTime_86(float value)
	{
		___crossFadeTime_86 = value;
	}

	inline static int32_t get_offset_of__masterPlaylistVolume_87() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ____masterPlaylistVolume_87)); }
	inline float get__masterPlaylistVolume_87() const { return ____masterPlaylistVolume_87; }
	inline float* get_address_of__masterPlaylistVolume_87() { return &____masterPlaylistVolume_87; }
	inline void set__masterPlaylistVolume_87(float value)
	{
		____masterPlaylistVolume_87 = value;
	}

	inline static int32_t get_offset_of_showGroupSelect_88() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___showGroupSelect_88)); }
	inline bool get_showGroupSelect_88() const { return ___showGroupSelect_88; }
	inline bool* get_address_of_showGroupSelect_88() { return &___showGroupSelect_88; }
	inline void set_showGroupSelect_88(bool value)
	{
		___showGroupSelect_88 = value;
	}

	inline static int32_t get_offset_of_newEventName_89() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___newEventName_89)); }
	inline String_t* get_newEventName_89() const { return ___newEventName_89; }
	inline String_t** get_address_of_newEventName_89() { return &___newEventName_89; }
	inline void set_newEventName_89(String_t* value)
	{
		___newEventName_89 = value;
		Il2CppCodeGenWriteBarrier(&___newEventName_89, value);
	}

	inline static int32_t get_offset_of_showCustomEvents_90() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___showCustomEvents_90)); }
	inline bool get_showCustomEvents_90() const { return ___showCustomEvents_90; }
	inline bool* get_address_of_showCustomEvents_90() { return &___showCustomEvents_90; }
	inline void set_showCustomEvents_90(bool value)
	{
		___showCustomEvents_90 = value;
	}

	inline static int32_t get_offset_of_customEvents_91() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___customEvents_91)); }
	inline List_1_t3437396017 * get_customEvents_91() const { return ___customEvents_91; }
	inline List_1_t3437396017 ** get_address_of_customEvents_91() { return &___customEvents_91; }
	inline void set_customEvents_91(List_1_t3437396017 * value)
	{
		___customEvents_91 = value;
		Il2CppCodeGenWriteBarrier(&___customEvents_91, value);
	}

	inline static int32_t get_offset_of_duckingBySoundType_92() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___duckingBySoundType_92)); }
	inline Dictionary_2_t3022019091 * get_duckingBySoundType_92() const { return ___duckingBySoundType_92; }
	inline Dictionary_2_t3022019091 ** get_address_of_duckingBySoundType_92() { return &___duckingBySoundType_92; }
	inline void set_duckingBySoundType_92(Dictionary_2_t3022019091 * value)
	{
		___duckingBySoundType_92 = value;
		Il2CppCodeGenWriteBarrier(&___duckingBySoundType_92, value);
	}

	inline static int32_t get_offset_of_frames_93() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___frames_93)); }
	inline int32_t get_frames_93() const { return ___frames_93; }
	inline int32_t* get_address_of_frames_93() { return &___frames_93; }
	inline void set_frames_93(int32_t value)
	{
		___frames_93 = value;
	}

	inline static int32_t get_offset_of_showUnityMixerGroupAssignment_95() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ___showUnityMixerGroupAssignment_95)); }
	inline bool get_showUnityMixerGroupAssignment_95() const { return ___showUnityMixerGroupAssignment_95; }
	inline bool* get_address_of_showUnityMixerGroupAssignment_95() { return &___showUnityMixerGroupAssignment_95; }
	inline void set_showUnityMixerGroupAssignment_95(bool value)
	{
		___showUnityMixerGroupAssignment_95 = value;
	}

	inline static int32_t get_offset_of__trans_96() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ____trans_96)); }
	inline Transform_t284553113 * get__trans_96() const { return ____trans_96; }
	inline Transform_t284553113 ** get_address_of__trans_96() { return &____trans_96; }
	inline void set__trans_96(Transform_t284553113 * value)
	{
		____trans_96 = value;
		Il2CppCodeGenWriteBarrier(&____trans_96, value);
	}

	inline static int32_t get_offset_of__soundsLoaded_97() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ____soundsLoaded_97)); }
	inline bool get__soundsLoaded_97() const { return ____soundsLoaded_97; }
	inline bool* get_address_of__soundsLoaded_97() { return &____soundsLoaded_97; }
	inline void set__soundsLoaded_97(bool value)
	{
		____soundsLoaded_97 = value;
	}

	inline static int32_t get_offset_of__warming_98() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987, ____warming_98)); }
	inline bool get__warming_98() const { return ____warming_98; }
	inline bool* get_address_of__warming_98() { return &____warming_98; }
	inline void set__warming_98(bool value)
	{
		____warming_98 = value;
	}
};

struct MasterAudio_t1340413987_StaticFields
{
public:
	// UnityEngine.YieldInstruction DarkTonic.MasterAudio.MasterAudio::EndOfFrameDelay
	YieldInstruction_t3557331758 * ___EndOfFrameDelay_22;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::_editMAFolder
	bool ____editMAFolder_94;
	// System.Collections.Generic.Dictionary`2<System.String,DarkTonic.MasterAudio.MasterAudio/AudioGroupInfo> DarkTonic.MasterAudio.MasterAudio::AudioSourcesBySoundType
	Dictionary_2_t3672244775 * ___AudioSourcesBySoundType_99;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>> DarkTonic.MasterAudio.MasterAudio::_randomizer
	Dictionary_2_t987104364 * ____randomizer_100;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>> DarkTonic.MasterAudio.MasterAudio::_randomizerLeftovers
	Dictionary_2_t987104364 * ____randomizerLeftovers_101;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>> DarkTonic.MasterAudio.MasterAudio::_clipsPlayedBySoundTypeOldestFirst
	Dictionary_2_t987104364 * ____clipsPlayedBySoundTypeOldestFirst_102;
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.MasterAudioGroup> DarkTonic.MasterAudio.MasterAudio::SoloedGroups
	List_1_t1822620435 * ___SoloedGroups_103;
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.BusFadeInfo> DarkTonic.MasterAudio.MasterAudio::BusFades
	List_1_t2604891762 * ___BusFades_104;
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.GroupFadeInfo> DarkTonic.MasterAudio.MasterAudio::GroupFades
	List_1_t2652639089 * ___GroupFades_105;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<DarkTonic.MasterAudio.ICustomEventReceiver,UnityEngine.Transform>> DarkTonic.MasterAudio.MasterAudio::ReceiversByEventName
	Dictionary_2_t3644777345 * ___ReceiversByEventName_106;
	// System.Collections.Generic.Dictionary`2<System.String,DarkTonic.MasterAudio.PlaylistController> DarkTonic.MasterAudio.MasterAudio::PlaylistControllersByName
	Dictionary_2_t331213389 * ___PlaylistControllersByName_107;
	// System.Collections.Generic.Dictionary`2<System.String,DarkTonic.MasterAudio.MasterAudio/SoundGroupRefillInfo> DarkTonic.MasterAudio.MasterAudio::LastTimeSoundGroupPlayed
	Dictionary_2_t1800653924 * ___LastTimeSoundGroupPlayed_108;
	// DarkTonic.MasterAudio.MasterAudio DarkTonic.MasterAudio.MasterAudio::_instance
	MasterAudio_t1340413987 * ____instance_109;
	// UnityEngine.AudioSource DarkTonic.MasterAudio.MasterAudio::_previewerInstance
	AudioSource_t3628549054 * ____previewerInstance_110;
	// UnityEngine.Transform DarkTonic.MasterAudio.MasterAudio::_audListenerTrans
	Transform_t284553113 * ____audListenerTrans_111;
	// System.Single DarkTonic.MasterAudio.MasterAudio::_repriTime
	float ____repriTime_112;
	// System.Collections.Generic.List`1<System.String> DarkTonic.MasterAudio.MasterAudio::_groupsToRemove
	List_1_t1765447871 * ____groupsToRemove_113;
	// System.String DarkTonic.MasterAudio.MasterAudio::_prospectiveMAFolder
	String_t* ____prospectiveMAFolder_114;
	// UnityEngine.YieldInstruction DarkTonic.MasterAudio.MasterAudio::_innerLoopDelay
	YieldInstruction_t3557331758 * ____innerLoopDelay_115;
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.MasterAudio/SoundGroupCommand> DarkTonic.MasterAudio.MasterAudio::GroupCommandsWithNoGroupSelector
	List_1_t2620580692 * ___GroupCommandsWithNoGroupSelector_116;
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.MasterAudio/SoundGroupCommand> DarkTonic.MasterAudio.MasterAudio::GroupCommandsWithNoAllGroupSelector
	List_1_t2620580692 * ___GroupCommandsWithNoAllGroupSelector_117;
	// System.Boolean DarkTonic.MasterAudio.MasterAudio::<AppIsShuttingDown>k__BackingField
	bool ___U3CAppIsShuttingDownU3Ek__BackingField_118;
	// System.Predicate`1<DarkTonic.MasterAudio.BusFadeInfo> DarkTonic.MasterAudio.MasterAudio::<>f__am$cache61
	Predicate_1_t2378896691 * ___U3CU3Ef__amU24cache61_119;
	// System.Predicate`1<DarkTonic.MasterAudio.GroupFadeInfo> DarkTonic.MasterAudio.MasterAudio::<>f__am$cache62
	Predicate_1_t2426644018 * ___U3CU3Ef__amU24cache62_120;

public:
	inline static int32_t get_offset_of_EndOfFrameDelay_22() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987_StaticFields, ___EndOfFrameDelay_22)); }
	inline YieldInstruction_t3557331758 * get_EndOfFrameDelay_22() const { return ___EndOfFrameDelay_22; }
	inline YieldInstruction_t3557331758 ** get_address_of_EndOfFrameDelay_22() { return &___EndOfFrameDelay_22; }
	inline void set_EndOfFrameDelay_22(YieldInstruction_t3557331758 * value)
	{
		___EndOfFrameDelay_22 = value;
		Il2CppCodeGenWriteBarrier(&___EndOfFrameDelay_22, value);
	}

	inline static int32_t get_offset_of__editMAFolder_94() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987_StaticFields, ____editMAFolder_94)); }
	inline bool get__editMAFolder_94() const { return ____editMAFolder_94; }
	inline bool* get_address_of__editMAFolder_94() { return &____editMAFolder_94; }
	inline void set__editMAFolder_94(bool value)
	{
		____editMAFolder_94 = value;
	}

	inline static int32_t get_offset_of_AudioSourcesBySoundType_99() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987_StaticFields, ___AudioSourcesBySoundType_99)); }
	inline Dictionary_2_t3672244775 * get_AudioSourcesBySoundType_99() const { return ___AudioSourcesBySoundType_99; }
	inline Dictionary_2_t3672244775 ** get_address_of_AudioSourcesBySoundType_99() { return &___AudioSourcesBySoundType_99; }
	inline void set_AudioSourcesBySoundType_99(Dictionary_2_t3672244775 * value)
	{
		___AudioSourcesBySoundType_99 = value;
		Il2CppCodeGenWriteBarrier(&___AudioSourcesBySoundType_99, value);
	}

	inline static int32_t get_offset_of__randomizer_100() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987_StaticFields, ____randomizer_100)); }
	inline Dictionary_2_t987104364 * get__randomizer_100() const { return ____randomizer_100; }
	inline Dictionary_2_t987104364 ** get_address_of__randomizer_100() { return &____randomizer_100; }
	inline void set__randomizer_100(Dictionary_2_t987104364 * value)
	{
		____randomizer_100 = value;
		Il2CppCodeGenWriteBarrier(&____randomizer_100, value);
	}

	inline static int32_t get_offset_of__randomizerLeftovers_101() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987_StaticFields, ____randomizerLeftovers_101)); }
	inline Dictionary_2_t987104364 * get__randomizerLeftovers_101() const { return ____randomizerLeftovers_101; }
	inline Dictionary_2_t987104364 ** get_address_of__randomizerLeftovers_101() { return &____randomizerLeftovers_101; }
	inline void set__randomizerLeftovers_101(Dictionary_2_t987104364 * value)
	{
		____randomizerLeftovers_101 = value;
		Il2CppCodeGenWriteBarrier(&____randomizerLeftovers_101, value);
	}

	inline static int32_t get_offset_of__clipsPlayedBySoundTypeOldestFirst_102() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987_StaticFields, ____clipsPlayedBySoundTypeOldestFirst_102)); }
	inline Dictionary_2_t987104364 * get__clipsPlayedBySoundTypeOldestFirst_102() const { return ____clipsPlayedBySoundTypeOldestFirst_102; }
	inline Dictionary_2_t987104364 ** get_address_of__clipsPlayedBySoundTypeOldestFirst_102() { return &____clipsPlayedBySoundTypeOldestFirst_102; }
	inline void set__clipsPlayedBySoundTypeOldestFirst_102(Dictionary_2_t987104364 * value)
	{
		____clipsPlayedBySoundTypeOldestFirst_102 = value;
		Il2CppCodeGenWriteBarrier(&____clipsPlayedBySoundTypeOldestFirst_102, value);
	}

	inline static int32_t get_offset_of_SoloedGroups_103() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987_StaticFields, ___SoloedGroups_103)); }
	inline List_1_t1822620435 * get_SoloedGroups_103() const { return ___SoloedGroups_103; }
	inline List_1_t1822620435 ** get_address_of_SoloedGroups_103() { return &___SoloedGroups_103; }
	inline void set_SoloedGroups_103(List_1_t1822620435 * value)
	{
		___SoloedGroups_103 = value;
		Il2CppCodeGenWriteBarrier(&___SoloedGroups_103, value);
	}

	inline static int32_t get_offset_of_BusFades_104() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987_StaticFields, ___BusFades_104)); }
	inline List_1_t2604891762 * get_BusFades_104() const { return ___BusFades_104; }
	inline List_1_t2604891762 ** get_address_of_BusFades_104() { return &___BusFades_104; }
	inline void set_BusFades_104(List_1_t2604891762 * value)
	{
		___BusFades_104 = value;
		Il2CppCodeGenWriteBarrier(&___BusFades_104, value);
	}

	inline static int32_t get_offset_of_GroupFades_105() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987_StaticFields, ___GroupFades_105)); }
	inline List_1_t2652639089 * get_GroupFades_105() const { return ___GroupFades_105; }
	inline List_1_t2652639089 ** get_address_of_GroupFades_105() { return &___GroupFades_105; }
	inline void set_GroupFades_105(List_1_t2652639089 * value)
	{
		___GroupFades_105 = value;
		Il2CppCodeGenWriteBarrier(&___GroupFades_105, value);
	}

	inline static int32_t get_offset_of_ReceiversByEventName_106() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987_StaticFields, ___ReceiversByEventName_106)); }
	inline Dictionary_2_t3644777345 * get_ReceiversByEventName_106() const { return ___ReceiversByEventName_106; }
	inline Dictionary_2_t3644777345 ** get_address_of_ReceiversByEventName_106() { return &___ReceiversByEventName_106; }
	inline void set_ReceiversByEventName_106(Dictionary_2_t3644777345 * value)
	{
		___ReceiversByEventName_106 = value;
		Il2CppCodeGenWriteBarrier(&___ReceiversByEventName_106, value);
	}

	inline static int32_t get_offset_of_PlaylistControllersByName_107() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987_StaticFields, ___PlaylistControllersByName_107)); }
	inline Dictionary_2_t331213389 * get_PlaylistControllersByName_107() const { return ___PlaylistControllersByName_107; }
	inline Dictionary_2_t331213389 ** get_address_of_PlaylistControllersByName_107() { return &___PlaylistControllersByName_107; }
	inline void set_PlaylistControllersByName_107(Dictionary_2_t331213389 * value)
	{
		___PlaylistControllersByName_107 = value;
		Il2CppCodeGenWriteBarrier(&___PlaylistControllersByName_107, value);
	}

	inline static int32_t get_offset_of_LastTimeSoundGroupPlayed_108() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987_StaticFields, ___LastTimeSoundGroupPlayed_108)); }
	inline Dictionary_2_t1800653924 * get_LastTimeSoundGroupPlayed_108() const { return ___LastTimeSoundGroupPlayed_108; }
	inline Dictionary_2_t1800653924 ** get_address_of_LastTimeSoundGroupPlayed_108() { return &___LastTimeSoundGroupPlayed_108; }
	inline void set_LastTimeSoundGroupPlayed_108(Dictionary_2_t1800653924 * value)
	{
		___LastTimeSoundGroupPlayed_108 = value;
		Il2CppCodeGenWriteBarrier(&___LastTimeSoundGroupPlayed_108, value);
	}

	inline static int32_t get_offset_of__instance_109() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987_StaticFields, ____instance_109)); }
	inline MasterAudio_t1340413987 * get__instance_109() const { return ____instance_109; }
	inline MasterAudio_t1340413987 ** get_address_of__instance_109() { return &____instance_109; }
	inline void set__instance_109(MasterAudio_t1340413987 * value)
	{
		____instance_109 = value;
		Il2CppCodeGenWriteBarrier(&____instance_109, value);
	}

	inline static int32_t get_offset_of__previewerInstance_110() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987_StaticFields, ____previewerInstance_110)); }
	inline AudioSource_t3628549054 * get__previewerInstance_110() const { return ____previewerInstance_110; }
	inline AudioSource_t3628549054 ** get_address_of__previewerInstance_110() { return &____previewerInstance_110; }
	inline void set__previewerInstance_110(AudioSource_t3628549054 * value)
	{
		____previewerInstance_110 = value;
		Il2CppCodeGenWriteBarrier(&____previewerInstance_110, value);
	}

	inline static int32_t get_offset_of__audListenerTrans_111() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987_StaticFields, ____audListenerTrans_111)); }
	inline Transform_t284553113 * get__audListenerTrans_111() const { return ____audListenerTrans_111; }
	inline Transform_t284553113 ** get_address_of__audListenerTrans_111() { return &____audListenerTrans_111; }
	inline void set__audListenerTrans_111(Transform_t284553113 * value)
	{
		____audListenerTrans_111 = value;
		Il2CppCodeGenWriteBarrier(&____audListenerTrans_111, value);
	}

	inline static int32_t get_offset_of__repriTime_112() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987_StaticFields, ____repriTime_112)); }
	inline float get__repriTime_112() const { return ____repriTime_112; }
	inline float* get_address_of__repriTime_112() { return &____repriTime_112; }
	inline void set__repriTime_112(float value)
	{
		____repriTime_112 = value;
	}

	inline static int32_t get_offset_of__groupsToRemove_113() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987_StaticFields, ____groupsToRemove_113)); }
	inline List_1_t1765447871 * get__groupsToRemove_113() const { return ____groupsToRemove_113; }
	inline List_1_t1765447871 ** get_address_of__groupsToRemove_113() { return &____groupsToRemove_113; }
	inline void set__groupsToRemove_113(List_1_t1765447871 * value)
	{
		____groupsToRemove_113 = value;
		Il2CppCodeGenWriteBarrier(&____groupsToRemove_113, value);
	}

	inline static int32_t get_offset_of__prospectiveMAFolder_114() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987_StaticFields, ____prospectiveMAFolder_114)); }
	inline String_t* get__prospectiveMAFolder_114() const { return ____prospectiveMAFolder_114; }
	inline String_t** get_address_of__prospectiveMAFolder_114() { return &____prospectiveMAFolder_114; }
	inline void set__prospectiveMAFolder_114(String_t* value)
	{
		____prospectiveMAFolder_114 = value;
		Il2CppCodeGenWriteBarrier(&____prospectiveMAFolder_114, value);
	}

	inline static int32_t get_offset_of__innerLoopDelay_115() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987_StaticFields, ____innerLoopDelay_115)); }
	inline YieldInstruction_t3557331758 * get__innerLoopDelay_115() const { return ____innerLoopDelay_115; }
	inline YieldInstruction_t3557331758 ** get_address_of__innerLoopDelay_115() { return &____innerLoopDelay_115; }
	inline void set__innerLoopDelay_115(YieldInstruction_t3557331758 * value)
	{
		____innerLoopDelay_115 = value;
		Il2CppCodeGenWriteBarrier(&____innerLoopDelay_115, value);
	}

	inline static int32_t get_offset_of_GroupCommandsWithNoGroupSelector_116() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987_StaticFields, ___GroupCommandsWithNoGroupSelector_116)); }
	inline List_1_t2620580692 * get_GroupCommandsWithNoGroupSelector_116() const { return ___GroupCommandsWithNoGroupSelector_116; }
	inline List_1_t2620580692 ** get_address_of_GroupCommandsWithNoGroupSelector_116() { return &___GroupCommandsWithNoGroupSelector_116; }
	inline void set_GroupCommandsWithNoGroupSelector_116(List_1_t2620580692 * value)
	{
		___GroupCommandsWithNoGroupSelector_116 = value;
		Il2CppCodeGenWriteBarrier(&___GroupCommandsWithNoGroupSelector_116, value);
	}

	inline static int32_t get_offset_of_GroupCommandsWithNoAllGroupSelector_117() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987_StaticFields, ___GroupCommandsWithNoAllGroupSelector_117)); }
	inline List_1_t2620580692 * get_GroupCommandsWithNoAllGroupSelector_117() const { return ___GroupCommandsWithNoAllGroupSelector_117; }
	inline List_1_t2620580692 ** get_address_of_GroupCommandsWithNoAllGroupSelector_117() { return &___GroupCommandsWithNoAllGroupSelector_117; }
	inline void set_GroupCommandsWithNoAllGroupSelector_117(List_1_t2620580692 * value)
	{
		___GroupCommandsWithNoAllGroupSelector_117 = value;
		Il2CppCodeGenWriteBarrier(&___GroupCommandsWithNoAllGroupSelector_117, value);
	}

	inline static int32_t get_offset_of_U3CAppIsShuttingDownU3Ek__BackingField_118() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987_StaticFields, ___U3CAppIsShuttingDownU3Ek__BackingField_118)); }
	inline bool get_U3CAppIsShuttingDownU3Ek__BackingField_118() const { return ___U3CAppIsShuttingDownU3Ek__BackingField_118; }
	inline bool* get_address_of_U3CAppIsShuttingDownU3Ek__BackingField_118() { return &___U3CAppIsShuttingDownU3Ek__BackingField_118; }
	inline void set_U3CAppIsShuttingDownU3Ek__BackingField_118(bool value)
	{
		___U3CAppIsShuttingDownU3Ek__BackingField_118 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache61_119() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987_StaticFields, ___U3CU3Ef__amU24cache61_119)); }
	inline Predicate_1_t2378896691 * get_U3CU3Ef__amU24cache61_119() const { return ___U3CU3Ef__amU24cache61_119; }
	inline Predicate_1_t2378896691 ** get_address_of_U3CU3Ef__amU24cache61_119() { return &___U3CU3Ef__amU24cache61_119; }
	inline void set_U3CU3Ef__amU24cache61_119(Predicate_1_t2378896691 * value)
	{
		___U3CU3Ef__amU24cache61_119 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache61_119, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache62_120() { return static_cast<int32_t>(offsetof(MasterAudio_t1340413987_StaticFields, ___U3CU3Ef__amU24cache62_120)); }
	inline Predicate_1_t2426644018 * get_U3CU3Ef__amU24cache62_120() const { return ___U3CU3Ef__amU24cache62_120; }
	inline Predicate_1_t2426644018 ** get_address_of_U3CU3Ef__amU24cache62_120() { return &___U3CU3Ef__amU24cache62_120; }
	inline void set_U3CU3Ef__amU24cache62_120(Predicate_1_t2426644018 * value)
	{
		___U3CU3Ef__amU24cache62_120 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache62_120, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
