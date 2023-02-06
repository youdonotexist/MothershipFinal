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
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3644373756;
// DarkTonic.MasterAudio.MusicSetting
struct MusicSetting_t2500364858;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// DarkTonic.MasterAudio.MasterAudio/Playlist
struct Playlist_t1944118770;
// System.Action
struct Action_t437523947;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.MusicSetting>
struct List_1_t3297323827;
// System.Collections.Generic.Dictionary`2<UnityEngine.AudioSource,System.Double>
struct Dictionary_2_t3734784542;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.PlaylistController>
struct List_1_t3785441750;
// UnityEngine.Transform
struct Transform_t284553113;
// DarkTonic.MasterAudio.PlaylistController/SongChangedEventHandler
struct SongChangedEventHandler_t33399983;
// DarkTonic.MasterAudio.PlaylistController/SongEndedEventHandler
struct SongEndedEventHandler_t1874844277;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi2370136026.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_PlaylistCon596666422.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_PlaylistCon589777503.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.PlaylistController
struct  PlaylistController_t2988482781  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean DarkTonic.MasterAudio.PlaylistController::startPlaylistOnAwake
	bool ___startPlaylistOnAwake_3;
	// System.Boolean DarkTonic.MasterAudio.PlaylistController::isShuffle
	bool ___isShuffle_4;
	// System.Boolean DarkTonic.MasterAudio.PlaylistController::isAutoAdvance
	bool ___isAutoAdvance_5;
	// System.Boolean DarkTonic.MasterAudio.PlaylistController::loopPlaylist
	bool ___loopPlaylist_6;
	// System.Single DarkTonic.MasterAudio.PlaylistController::_playlistVolume
	float ____playlistVolume_7;
	// System.Boolean DarkTonic.MasterAudio.PlaylistController::isMuted
	bool ___isMuted_8;
	// System.String DarkTonic.MasterAudio.PlaylistController::startPlaylistName
	String_t* ___startPlaylistName_9;
	// System.Int32 DarkTonic.MasterAudio.PlaylistController::syncGroupNum
	int32_t ___syncGroupNum_10;
	// UnityEngine.Audio.AudioMixerGroup DarkTonic.MasterAudio.PlaylistController::mixerChannel
	AudioMixerGroup_t1736867953 * ___mixerChannel_11;
	// DarkTonic.MasterAudio.MasterAudio/ItemSpatialBlendType DarkTonic.MasterAudio.PlaylistController::spatialBlendType
	int32_t ___spatialBlendType_12;
	// System.Single DarkTonic.MasterAudio.PlaylistController::spatialBlend
	float ___spatialBlend_13;
	// System.Boolean DarkTonic.MasterAudio.PlaylistController::songChangedEventExpanded
	bool ___songChangedEventExpanded_14;
	// System.String DarkTonic.MasterAudio.PlaylistController::songChangedCustomEvent
	String_t* ___songChangedCustomEvent_15;
	// System.Boolean DarkTonic.MasterAudio.PlaylistController::songEndedEventExpanded
	bool ___songEndedEventExpanded_16;
	// System.String DarkTonic.MasterAudio.PlaylistController::songEndedCustomEvent
	String_t* ___songEndedCustomEvent_17;
	// UnityEngine.AudioSource DarkTonic.MasterAudio.PlaylistController::_activeAudio
	AudioSource_t3628549054 * ____activeAudio_18;
	// UnityEngine.AudioSource DarkTonic.MasterAudio.PlaylistController::_transitioningAudio
	AudioSource_t3628549054 * ____transitioningAudio_19;
	// System.Single DarkTonic.MasterAudio.PlaylistController::_activeAudioEndVolume
	float ____activeAudioEndVolume_20;
	// System.Single DarkTonic.MasterAudio.PlaylistController::_transitioningAudioStartVolume
	float ____transitioningAudioStartVolume_21;
	// System.Single DarkTonic.MasterAudio.PlaylistController::_crossFadeStartTime
	float ____crossFadeStartTime_22;
	// System.Collections.Generic.List`1<System.Int32> DarkTonic.MasterAudio.PlaylistController::_clipsRemaining
	List_1_t3644373756 * ____clipsRemaining_23;
	// System.Int32 DarkTonic.MasterAudio.PlaylistController::_currentSequentialClipIndex
	int32_t ____currentSequentialClipIndex_24;
	// DarkTonic.MasterAudio.PlaylistController/AudioDuckingMode DarkTonic.MasterAudio.PlaylistController::_duckingMode
	int32_t ____duckingMode_25;
	// System.Single DarkTonic.MasterAudio.PlaylistController::_timeToStartUnducking
	float ____timeToStartUnducking_26;
	// System.Single DarkTonic.MasterAudio.PlaylistController::_timeToFinishUnducking
	float ____timeToFinishUnducking_27;
	// System.Single DarkTonic.MasterAudio.PlaylistController::_originalMusicVolume
	float ____originalMusicVolume_28;
	// System.Single DarkTonic.MasterAudio.PlaylistController::_initialDuckVolume
	float ____initialDuckVolume_29;
	// System.Single DarkTonic.MasterAudio.PlaylistController::_duckRange
	float ____duckRange_30;
	// DarkTonic.MasterAudio.MusicSetting DarkTonic.MasterAudio.PlaylistController::_currentSong
	MusicSetting_t2500364858 * ____currentSong_31;
	// UnityEngine.GameObject DarkTonic.MasterAudio.PlaylistController::_go
	GameObject_t4012695102 * ____go_32;
	// System.String DarkTonic.MasterAudio.PlaylistController::_name
	String_t* ____name_33;
	// DarkTonic.MasterAudio.PlaylistController/FadeMode DarkTonic.MasterAudio.PlaylistController::_curFadeMode
	int32_t ____curFadeMode_34;
	// System.Single DarkTonic.MasterAudio.PlaylistController::_slowFadeTargetVolume
	float ____slowFadeTargetVolume_35;
	// System.Single DarkTonic.MasterAudio.PlaylistController::_slowFadeVolStep
	float ____slowFadeVolStep_36;
	// DarkTonic.MasterAudio.MasterAudio/Playlist DarkTonic.MasterAudio.PlaylistController::_currentPlaylist
	Playlist_t1944118770 * ____currentPlaylist_37;
	// System.Single DarkTonic.MasterAudio.PlaylistController::_lastTimeMissingPlaylistLogged
	float ____lastTimeMissingPlaylistLogged_38;
	// System.Action DarkTonic.MasterAudio.PlaylistController::_fadeCompleteCallback
	Action_t437523947 * ____fadeCompleteCallback_39;
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.MusicSetting> DarkTonic.MasterAudio.PlaylistController::_queuedSongs
	List_1_t3297323827 * ____queuedSongs_40;
	// System.Boolean DarkTonic.MasterAudio.PlaylistController::_lostFocus
	bool ____lostFocus_41;
	// UnityEngine.AudioSource DarkTonic.MasterAudio.PlaylistController::_audioClip
	AudioSource_t3628549054 * ____audioClip_42;
	// UnityEngine.AudioSource DarkTonic.MasterAudio.PlaylistController::_transClip
	AudioSource_t3628549054 * ____transClip_43;
	// DarkTonic.MasterAudio.MusicSetting DarkTonic.MasterAudio.PlaylistController::_newSongSetting
	MusicSetting_t2500364858 * ____newSongSetting_44;
	// System.Boolean DarkTonic.MasterAudio.PlaylistController::_nextSongRequested
	bool ____nextSongRequested_45;
	// System.Boolean DarkTonic.MasterAudio.PlaylistController::_nextSongScheduled
	bool ____nextSongScheduled_46;
	// System.Int32 DarkTonic.MasterAudio.PlaylistController::_lastRandomClipIndex
	int32_t ____lastRandomClipIndex_47;
	// System.Collections.Generic.Dictionary`2<UnityEngine.AudioSource,System.Double> DarkTonic.MasterAudio.PlaylistController::_scheduledSongsByAudioSource
	Dictionary_2_t3734784542 * ____scheduledSongsByAudioSource_48;
	// UnityEngine.AudioSource DarkTonic.MasterAudio.PlaylistController::_audio1
	AudioSource_t3628549054 * ____audio1_51;
	// UnityEngine.AudioSource DarkTonic.MasterAudio.PlaylistController::_audio2
	AudioSource_t3628549054 * ____audio2_52;
	// UnityEngine.Transform DarkTonic.MasterAudio.PlaylistController::_trans
	Transform_t284553113 * ____trans_53;
	// DarkTonic.MasterAudio.PlaylistController/SongChangedEventHandler DarkTonic.MasterAudio.PlaylistController::SongChanged
	SongChangedEventHandler_t33399983 * ___SongChanged_54;
	// DarkTonic.MasterAudio.PlaylistController/SongEndedEventHandler DarkTonic.MasterAudio.PlaylistController::SongEnded
	SongEndedEventHandler_t1874844277 * ___SongEnded_55;
	// System.Boolean DarkTonic.MasterAudio.PlaylistController::<ControllerIsReady>k__BackingField
	bool ___U3CControllerIsReadyU3Ek__BackingField_56;
	// System.Boolean DarkTonic.MasterAudio.PlaylistController::<IsCrossFading>k__BackingField
	bool ___U3CIsCrossFadingU3Ek__BackingField_57;

public:
	inline static int32_t get_offset_of_startPlaylistOnAwake_3() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ___startPlaylistOnAwake_3)); }
	inline bool get_startPlaylistOnAwake_3() const { return ___startPlaylistOnAwake_3; }
	inline bool* get_address_of_startPlaylistOnAwake_3() { return &___startPlaylistOnAwake_3; }
	inline void set_startPlaylistOnAwake_3(bool value)
	{
		___startPlaylistOnAwake_3 = value;
	}

	inline static int32_t get_offset_of_isShuffle_4() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ___isShuffle_4)); }
	inline bool get_isShuffle_4() const { return ___isShuffle_4; }
	inline bool* get_address_of_isShuffle_4() { return &___isShuffle_4; }
	inline void set_isShuffle_4(bool value)
	{
		___isShuffle_4 = value;
	}

	inline static int32_t get_offset_of_isAutoAdvance_5() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ___isAutoAdvance_5)); }
	inline bool get_isAutoAdvance_5() const { return ___isAutoAdvance_5; }
	inline bool* get_address_of_isAutoAdvance_5() { return &___isAutoAdvance_5; }
	inline void set_isAutoAdvance_5(bool value)
	{
		___isAutoAdvance_5 = value;
	}

	inline static int32_t get_offset_of_loopPlaylist_6() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ___loopPlaylist_6)); }
	inline bool get_loopPlaylist_6() const { return ___loopPlaylist_6; }
	inline bool* get_address_of_loopPlaylist_6() { return &___loopPlaylist_6; }
	inline void set_loopPlaylist_6(bool value)
	{
		___loopPlaylist_6 = value;
	}

	inline static int32_t get_offset_of__playlistVolume_7() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____playlistVolume_7)); }
	inline float get__playlistVolume_7() const { return ____playlistVolume_7; }
	inline float* get_address_of__playlistVolume_7() { return &____playlistVolume_7; }
	inline void set__playlistVolume_7(float value)
	{
		____playlistVolume_7 = value;
	}

	inline static int32_t get_offset_of_isMuted_8() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ___isMuted_8)); }
	inline bool get_isMuted_8() const { return ___isMuted_8; }
	inline bool* get_address_of_isMuted_8() { return &___isMuted_8; }
	inline void set_isMuted_8(bool value)
	{
		___isMuted_8 = value;
	}

	inline static int32_t get_offset_of_startPlaylistName_9() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ___startPlaylistName_9)); }
	inline String_t* get_startPlaylistName_9() const { return ___startPlaylistName_9; }
	inline String_t** get_address_of_startPlaylistName_9() { return &___startPlaylistName_9; }
	inline void set_startPlaylistName_9(String_t* value)
	{
		___startPlaylistName_9 = value;
		Il2CppCodeGenWriteBarrier(&___startPlaylistName_9, value);
	}

	inline static int32_t get_offset_of_syncGroupNum_10() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ___syncGroupNum_10)); }
	inline int32_t get_syncGroupNum_10() const { return ___syncGroupNum_10; }
	inline int32_t* get_address_of_syncGroupNum_10() { return &___syncGroupNum_10; }
	inline void set_syncGroupNum_10(int32_t value)
	{
		___syncGroupNum_10 = value;
	}

	inline static int32_t get_offset_of_mixerChannel_11() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ___mixerChannel_11)); }
	inline AudioMixerGroup_t1736867953 * get_mixerChannel_11() const { return ___mixerChannel_11; }
	inline AudioMixerGroup_t1736867953 ** get_address_of_mixerChannel_11() { return &___mixerChannel_11; }
	inline void set_mixerChannel_11(AudioMixerGroup_t1736867953 * value)
	{
		___mixerChannel_11 = value;
		Il2CppCodeGenWriteBarrier(&___mixerChannel_11, value);
	}

	inline static int32_t get_offset_of_spatialBlendType_12() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ___spatialBlendType_12)); }
	inline int32_t get_spatialBlendType_12() const { return ___spatialBlendType_12; }
	inline int32_t* get_address_of_spatialBlendType_12() { return &___spatialBlendType_12; }
	inline void set_spatialBlendType_12(int32_t value)
	{
		___spatialBlendType_12 = value;
	}

	inline static int32_t get_offset_of_spatialBlend_13() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ___spatialBlend_13)); }
	inline float get_spatialBlend_13() const { return ___spatialBlend_13; }
	inline float* get_address_of_spatialBlend_13() { return &___spatialBlend_13; }
	inline void set_spatialBlend_13(float value)
	{
		___spatialBlend_13 = value;
	}

	inline static int32_t get_offset_of_songChangedEventExpanded_14() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ___songChangedEventExpanded_14)); }
	inline bool get_songChangedEventExpanded_14() const { return ___songChangedEventExpanded_14; }
	inline bool* get_address_of_songChangedEventExpanded_14() { return &___songChangedEventExpanded_14; }
	inline void set_songChangedEventExpanded_14(bool value)
	{
		___songChangedEventExpanded_14 = value;
	}

	inline static int32_t get_offset_of_songChangedCustomEvent_15() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ___songChangedCustomEvent_15)); }
	inline String_t* get_songChangedCustomEvent_15() const { return ___songChangedCustomEvent_15; }
	inline String_t** get_address_of_songChangedCustomEvent_15() { return &___songChangedCustomEvent_15; }
	inline void set_songChangedCustomEvent_15(String_t* value)
	{
		___songChangedCustomEvent_15 = value;
		Il2CppCodeGenWriteBarrier(&___songChangedCustomEvent_15, value);
	}

	inline static int32_t get_offset_of_songEndedEventExpanded_16() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ___songEndedEventExpanded_16)); }
	inline bool get_songEndedEventExpanded_16() const { return ___songEndedEventExpanded_16; }
	inline bool* get_address_of_songEndedEventExpanded_16() { return &___songEndedEventExpanded_16; }
	inline void set_songEndedEventExpanded_16(bool value)
	{
		___songEndedEventExpanded_16 = value;
	}

	inline static int32_t get_offset_of_songEndedCustomEvent_17() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ___songEndedCustomEvent_17)); }
	inline String_t* get_songEndedCustomEvent_17() const { return ___songEndedCustomEvent_17; }
	inline String_t** get_address_of_songEndedCustomEvent_17() { return &___songEndedCustomEvent_17; }
	inline void set_songEndedCustomEvent_17(String_t* value)
	{
		___songEndedCustomEvent_17 = value;
		Il2CppCodeGenWriteBarrier(&___songEndedCustomEvent_17, value);
	}

	inline static int32_t get_offset_of__activeAudio_18() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____activeAudio_18)); }
	inline AudioSource_t3628549054 * get__activeAudio_18() const { return ____activeAudio_18; }
	inline AudioSource_t3628549054 ** get_address_of__activeAudio_18() { return &____activeAudio_18; }
	inline void set__activeAudio_18(AudioSource_t3628549054 * value)
	{
		____activeAudio_18 = value;
		Il2CppCodeGenWriteBarrier(&____activeAudio_18, value);
	}

	inline static int32_t get_offset_of__transitioningAudio_19() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____transitioningAudio_19)); }
	inline AudioSource_t3628549054 * get__transitioningAudio_19() const { return ____transitioningAudio_19; }
	inline AudioSource_t3628549054 ** get_address_of__transitioningAudio_19() { return &____transitioningAudio_19; }
	inline void set__transitioningAudio_19(AudioSource_t3628549054 * value)
	{
		____transitioningAudio_19 = value;
		Il2CppCodeGenWriteBarrier(&____transitioningAudio_19, value);
	}

	inline static int32_t get_offset_of__activeAudioEndVolume_20() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____activeAudioEndVolume_20)); }
	inline float get__activeAudioEndVolume_20() const { return ____activeAudioEndVolume_20; }
	inline float* get_address_of__activeAudioEndVolume_20() { return &____activeAudioEndVolume_20; }
	inline void set__activeAudioEndVolume_20(float value)
	{
		____activeAudioEndVolume_20 = value;
	}

	inline static int32_t get_offset_of__transitioningAudioStartVolume_21() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____transitioningAudioStartVolume_21)); }
	inline float get__transitioningAudioStartVolume_21() const { return ____transitioningAudioStartVolume_21; }
	inline float* get_address_of__transitioningAudioStartVolume_21() { return &____transitioningAudioStartVolume_21; }
	inline void set__transitioningAudioStartVolume_21(float value)
	{
		____transitioningAudioStartVolume_21 = value;
	}

	inline static int32_t get_offset_of__crossFadeStartTime_22() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____crossFadeStartTime_22)); }
	inline float get__crossFadeStartTime_22() const { return ____crossFadeStartTime_22; }
	inline float* get_address_of__crossFadeStartTime_22() { return &____crossFadeStartTime_22; }
	inline void set__crossFadeStartTime_22(float value)
	{
		____crossFadeStartTime_22 = value;
	}

	inline static int32_t get_offset_of__clipsRemaining_23() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____clipsRemaining_23)); }
	inline List_1_t3644373756 * get__clipsRemaining_23() const { return ____clipsRemaining_23; }
	inline List_1_t3644373756 ** get_address_of__clipsRemaining_23() { return &____clipsRemaining_23; }
	inline void set__clipsRemaining_23(List_1_t3644373756 * value)
	{
		____clipsRemaining_23 = value;
		Il2CppCodeGenWriteBarrier(&____clipsRemaining_23, value);
	}

	inline static int32_t get_offset_of__currentSequentialClipIndex_24() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____currentSequentialClipIndex_24)); }
	inline int32_t get__currentSequentialClipIndex_24() const { return ____currentSequentialClipIndex_24; }
	inline int32_t* get_address_of__currentSequentialClipIndex_24() { return &____currentSequentialClipIndex_24; }
	inline void set__currentSequentialClipIndex_24(int32_t value)
	{
		____currentSequentialClipIndex_24 = value;
	}

	inline static int32_t get_offset_of__duckingMode_25() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____duckingMode_25)); }
	inline int32_t get__duckingMode_25() const { return ____duckingMode_25; }
	inline int32_t* get_address_of__duckingMode_25() { return &____duckingMode_25; }
	inline void set__duckingMode_25(int32_t value)
	{
		____duckingMode_25 = value;
	}

	inline static int32_t get_offset_of__timeToStartUnducking_26() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____timeToStartUnducking_26)); }
	inline float get__timeToStartUnducking_26() const { return ____timeToStartUnducking_26; }
	inline float* get_address_of__timeToStartUnducking_26() { return &____timeToStartUnducking_26; }
	inline void set__timeToStartUnducking_26(float value)
	{
		____timeToStartUnducking_26 = value;
	}

	inline static int32_t get_offset_of__timeToFinishUnducking_27() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____timeToFinishUnducking_27)); }
	inline float get__timeToFinishUnducking_27() const { return ____timeToFinishUnducking_27; }
	inline float* get_address_of__timeToFinishUnducking_27() { return &____timeToFinishUnducking_27; }
	inline void set__timeToFinishUnducking_27(float value)
	{
		____timeToFinishUnducking_27 = value;
	}

	inline static int32_t get_offset_of__originalMusicVolume_28() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____originalMusicVolume_28)); }
	inline float get__originalMusicVolume_28() const { return ____originalMusicVolume_28; }
	inline float* get_address_of__originalMusicVolume_28() { return &____originalMusicVolume_28; }
	inline void set__originalMusicVolume_28(float value)
	{
		____originalMusicVolume_28 = value;
	}

	inline static int32_t get_offset_of__initialDuckVolume_29() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____initialDuckVolume_29)); }
	inline float get__initialDuckVolume_29() const { return ____initialDuckVolume_29; }
	inline float* get_address_of__initialDuckVolume_29() { return &____initialDuckVolume_29; }
	inline void set__initialDuckVolume_29(float value)
	{
		____initialDuckVolume_29 = value;
	}

	inline static int32_t get_offset_of__duckRange_30() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____duckRange_30)); }
	inline float get__duckRange_30() const { return ____duckRange_30; }
	inline float* get_address_of__duckRange_30() { return &____duckRange_30; }
	inline void set__duckRange_30(float value)
	{
		____duckRange_30 = value;
	}

	inline static int32_t get_offset_of__currentSong_31() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____currentSong_31)); }
	inline MusicSetting_t2500364858 * get__currentSong_31() const { return ____currentSong_31; }
	inline MusicSetting_t2500364858 ** get_address_of__currentSong_31() { return &____currentSong_31; }
	inline void set__currentSong_31(MusicSetting_t2500364858 * value)
	{
		____currentSong_31 = value;
		Il2CppCodeGenWriteBarrier(&____currentSong_31, value);
	}

	inline static int32_t get_offset_of__go_32() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____go_32)); }
	inline GameObject_t4012695102 * get__go_32() const { return ____go_32; }
	inline GameObject_t4012695102 ** get_address_of__go_32() { return &____go_32; }
	inline void set__go_32(GameObject_t4012695102 * value)
	{
		____go_32 = value;
		Il2CppCodeGenWriteBarrier(&____go_32, value);
	}

	inline static int32_t get_offset_of__name_33() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____name_33)); }
	inline String_t* get__name_33() const { return ____name_33; }
	inline String_t** get_address_of__name_33() { return &____name_33; }
	inline void set__name_33(String_t* value)
	{
		____name_33 = value;
		Il2CppCodeGenWriteBarrier(&____name_33, value);
	}

	inline static int32_t get_offset_of__curFadeMode_34() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____curFadeMode_34)); }
	inline int32_t get__curFadeMode_34() const { return ____curFadeMode_34; }
	inline int32_t* get_address_of__curFadeMode_34() { return &____curFadeMode_34; }
	inline void set__curFadeMode_34(int32_t value)
	{
		____curFadeMode_34 = value;
	}

	inline static int32_t get_offset_of__slowFadeTargetVolume_35() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____slowFadeTargetVolume_35)); }
	inline float get__slowFadeTargetVolume_35() const { return ____slowFadeTargetVolume_35; }
	inline float* get_address_of__slowFadeTargetVolume_35() { return &____slowFadeTargetVolume_35; }
	inline void set__slowFadeTargetVolume_35(float value)
	{
		____slowFadeTargetVolume_35 = value;
	}

	inline static int32_t get_offset_of__slowFadeVolStep_36() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____slowFadeVolStep_36)); }
	inline float get__slowFadeVolStep_36() const { return ____slowFadeVolStep_36; }
	inline float* get_address_of__slowFadeVolStep_36() { return &____slowFadeVolStep_36; }
	inline void set__slowFadeVolStep_36(float value)
	{
		____slowFadeVolStep_36 = value;
	}

	inline static int32_t get_offset_of__currentPlaylist_37() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____currentPlaylist_37)); }
	inline Playlist_t1944118770 * get__currentPlaylist_37() const { return ____currentPlaylist_37; }
	inline Playlist_t1944118770 ** get_address_of__currentPlaylist_37() { return &____currentPlaylist_37; }
	inline void set__currentPlaylist_37(Playlist_t1944118770 * value)
	{
		____currentPlaylist_37 = value;
		Il2CppCodeGenWriteBarrier(&____currentPlaylist_37, value);
	}

	inline static int32_t get_offset_of__lastTimeMissingPlaylistLogged_38() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____lastTimeMissingPlaylistLogged_38)); }
	inline float get__lastTimeMissingPlaylistLogged_38() const { return ____lastTimeMissingPlaylistLogged_38; }
	inline float* get_address_of__lastTimeMissingPlaylistLogged_38() { return &____lastTimeMissingPlaylistLogged_38; }
	inline void set__lastTimeMissingPlaylistLogged_38(float value)
	{
		____lastTimeMissingPlaylistLogged_38 = value;
	}

	inline static int32_t get_offset_of__fadeCompleteCallback_39() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____fadeCompleteCallback_39)); }
	inline Action_t437523947 * get__fadeCompleteCallback_39() const { return ____fadeCompleteCallback_39; }
	inline Action_t437523947 ** get_address_of__fadeCompleteCallback_39() { return &____fadeCompleteCallback_39; }
	inline void set__fadeCompleteCallback_39(Action_t437523947 * value)
	{
		____fadeCompleteCallback_39 = value;
		Il2CppCodeGenWriteBarrier(&____fadeCompleteCallback_39, value);
	}

	inline static int32_t get_offset_of__queuedSongs_40() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____queuedSongs_40)); }
	inline List_1_t3297323827 * get__queuedSongs_40() const { return ____queuedSongs_40; }
	inline List_1_t3297323827 ** get_address_of__queuedSongs_40() { return &____queuedSongs_40; }
	inline void set__queuedSongs_40(List_1_t3297323827 * value)
	{
		____queuedSongs_40 = value;
		Il2CppCodeGenWriteBarrier(&____queuedSongs_40, value);
	}

	inline static int32_t get_offset_of__lostFocus_41() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____lostFocus_41)); }
	inline bool get__lostFocus_41() const { return ____lostFocus_41; }
	inline bool* get_address_of__lostFocus_41() { return &____lostFocus_41; }
	inline void set__lostFocus_41(bool value)
	{
		____lostFocus_41 = value;
	}

	inline static int32_t get_offset_of__audioClip_42() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____audioClip_42)); }
	inline AudioSource_t3628549054 * get__audioClip_42() const { return ____audioClip_42; }
	inline AudioSource_t3628549054 ** get_address_of__audioClip_42() { return &____audioClip_42; }
	inline void set__audioClip_42(AudioSource_t3628549054 * value)
	{
		____audioClip_42 = value;
		Il2CppCodeGenWriteBarrier(&____audioClip_42, value);
	}

	inline static int32_t get_offset_of__transClip_43() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____transClip_43)); }
	inline AudioSource_t3628549054 * get__transClip_43() const { return ____transClip_43; }
	inline AudioSource_t3628549054 ** get_address_of__transClip_43() { return &____transClip_43; }
	inline void set__transClip_43(AudioSource_t3628549054 * value)
	{
		____transClip_43 = value;
		Il2CppCodeGenWriteBarrier(&____transClip_43, value);
	}

	inline static int32_t get_offset_of__newSongSetting_44() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____newSongSetting_44)); }
	inline MusicSetting_t2500364858 * get__newSongSetting_44() const { return ____newSongSetting_44; }
	inline MusicSetting_t2500364858 ** get_address_of__newSongSetting_44() { return &____newSongSetting_44; }
	inline void set__newSongSetting_44(MusicSetting_t2500364858 * value)
	{
		____newSongSetting_44 = value;
		Il2CppCodeGenWriteBarrier(&____newSongSetting_44, value);
	}

	inline static int32_t get_offset_of__nextSongRequested_45() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____nextSongRequested_45)); }
	inline bool get__nextSongRequested_45() const { return ____nextSongRequested_45; }
	inline bool* get_address_of__nextSongRequested_45() { return &____nextSongRequested_45; }
	inline void set__nextSongRequested_45(bool value)
	{
		____nextSongRequested_45 = value;
	}

	inline static int32_t get_offset_of__nextSongScheduled_46() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____nextSongScheduled_46)); }
	inline bool get__nextSongScheduled_46() const { return ____nextSongScheduled_46; }
	inline bool* get_address_of__nextSongScheduled_46() { return &____nextSongScheduled_46; }
	inline void set__nextSongScheduled_46(bool value)
	{
		____nextSongScheduled_46 = value;
	}

	inline static int32_t get_offset_of__lastRandomClipIndex_47() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____lastRandomClipIndex_47)); }
	inline int32_t get__lastRandomClipIndex_47() const { return ____lastRandomClipIndex_47; }
	inline int32_t* get_address_of__lastRandomClipIndex_47() { return &____lastRandomClipIndex_47; }
	inline void set__lastRandomClipIndex_47(int32_t value)
	{
		____lastRandomClipIndex_47 = value;
	}

	inline static int32_t get_offset_of__scheduledSongsByAudioSource_48() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____scheduledSongsByAudioSource_48)); }
	inline Dictionary_2_t3734784542 * get__scheduledSongsByAudioSource_48() const { return ____scheduledSongsByAudioSource_48; }
	inline Dictionary_2_t3734784542 ** get_address_of__scheduledSongsByAudioSource_48() { return &____scheduledSongsByAudioSource_48; }
	inline void set__scheduledSongsByAudioSource_48(Dictionary_2_t3734784542 * value)
	{
		____scheduledSongsByAudioSource_48 = value;
		Il2CppCodeGenWriteBarrier(&____scheduledSongsByAudioSource_48, value);
	}

	inline static int32_t get_offset_of__audio1_51() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____audio1_51)); }
	inline AudioSource_t3628549054 * get__audio1_51() const { return ____audio1_51; }
	inline AudioSource_t3628549054 ** get_address_of__audio1_51() { return &____audio1_51; }
	inline void set__audio1_51(AudioSource_t3628549054 * value)
	{
		____audio1_51 = value;
		Il2CppCodeGenWriteBarrier(&____audio1_51, value);
	}

	inline static int32_t get_offset_of__audio2_52() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____audio2_52)); }
	inline AudioSource_t3628549054 * get__audio2_52() const { return ____audio2_52; }
	inline AudioSource_t3628549054 ** get_address_of__audio2_52() { return &____audio2_52; }
	inline void set__audio2_52(AudioSource_t3628549054 * value)
	{
		____audio2_52 = value;
		Il2CppCodeGenWriteBarrier(&____audio2_52, value);
	}

	inline static int32_t get_offset_of__trans_53() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ____trans_53)); }
	inline Transform_t284553113 * get__trans_53() const { return ____trans_53; }
	inline Transform_t284553113 ** get_address_of__trans_53() { return &____trans_53; }
	inline void set__trans_53(Transform_t284553113 * value)
	{
		____trans_53 = value;
		Il2CppCodeGenWriteBarrier(&____trans_53, value);
	}

	inline static int32_t get_offset_of_SongChanged_54() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ___SongChanged_54)); }
	inline SongChangedEventHandler_t33399983 * get_SongChanged_54() const { return ___SongChanged_54; }
	inline SongChangedEventHandler_t33399983 ** get_address_of_SongChanged_54() { return &___SongChanged_54; }
	inline void set_SongChanged_54(SongChangedEventHandler_t33399983 * value)
	{
		___SongChanged_54 = value;
		Il2CppCodeGenWriteBarrier(&___SongChanged_54, value);
	}

	inline static int32_t get_offset_of_SongEnded_55() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ___SongEnded_55)); }
	inline SongEndedEventHandler_t1874844277 * get_SongEnded_55() const { return ___SongEnded_55; }
	inline SongEndedEventHandler_t1874844277 ** get_address_of_SongEnded_55() { return &___SongEnded_55; }
	inline void set_SongEnded_55(SongEndedEventHandler_t1874844277 * value)
	{
		___SongEnded_55 = value;
		Il2CppCodeGenWriteBarrier(&___SongEnded_55, value);
	}

	inline static int32_t get_offset_of_U3CControllerIsReadyU3Ek__BackingField_56() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ___U3CControllerIsReadyU3Ek__BackingField_56)); }
	inline bool get_U3CControllerIsReadyU3Ek__BackingField_56() const { return ___U3CControllerIsReadyU3Ek__BackingField_56; }
	inline bool* get_address_of_U3CControllerIsReadyU3Ek__BackingField_56() { return &___U3CControllerIsReadyU3Ek__BackingField_56; }
	inline void set_U3CControllerIsReadyU3Ek__BackingField_56(bool value)
	{
		___U3CControllerIsReadyU3Ek__BackingField_56 = value;
	}

	inline static int32_t get_offset_of_U3CIsCrossFadingU3Ek__BackingField_57() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781, ___U3CIsCrossFadingU3Ek__BackingField_57)); }
	inline bool get_U3CIsCrossFadingU3Ek__BackingField_57() const { return ___U3CIsCrossFadingU3Ek__BackingField_57; }
	inline bool* get_address_of_U3CIsCrossFadingU3Ek__BackingField_57() { return &___U3CIsCrossFadingU3Ek__BackingField_57; }
	inline void set_U3CIsCrossFadingU3Ek__BackingField_57(bool value)
	{
		___U3CIsCrossFadingU3Ek__BackingField_57 = value;
	}
};

struct PlaylistController_t2988482781_StaticFields
{
public:
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.PlaylistController> DarkTonic.MasterAudio.PlaylistController::_instances
	List_1_t3785441750 * ____instances_49;
	// System.Int32 DarkTonic.MasterAudio.PlaylistController::_songsPlayedFromPlaylist
	int32_t ____songsPlayedFromPlaylist_50;

public:
	inline static int32_t get_offset_of__instances_49() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781_StaticFields, ____instances_49)); }
	inline List_1_t3785441750 * get__instances_49() const { return ____instances_49; }
	inline List_1_t3785441750 ** get_address_of__instances_49() { return &____instances_49; }
	inline void set__instances_49(List_1_t3785441750 * value)
	{
		____instances_49 = value;
		Il2CppCodeGenWriteBarrier(&____instances_49, value);
	}

	inline static int32_t get_offset_of__songsPlayedFromPlaylist_50() { return static_cast<int32_t>(offsetof(PlaylistController_t2988482781_StaticFields, ____songsPlayedFromPlaylist_50)); }
	inline int32_t get__songsPlayedFromPlaylist_50() const { return ____songsPlayedFromPlaylist_50; }
	inline int32_t* get_address_of__songsPlayedFromPlaylist_50() { return &____songsPlayedFromPlaylist_50; }
	inline void set__songsPlayedFromPlaylist_50(int32_t value)
	{
		____songsPlayedFromPlaylist_50 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
