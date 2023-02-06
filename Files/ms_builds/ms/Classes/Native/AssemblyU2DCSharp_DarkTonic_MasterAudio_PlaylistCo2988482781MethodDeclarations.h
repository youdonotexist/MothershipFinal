#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// DarkTonic.MasterAudio.PlaylistController
struct PlaylistController_t2988482781;
// DarkTonic.MasterAudio.PlaylistController/SongChangedEventHandler
struct SongChangedEventHandler_t33399983;
// DarkTonic.MasterAudio.PlaylistController/SongEndedEventHandler
struct SongEndedEventHandler_t1874844277;
// System.String
struct String_t;
// System.Action
struct Action_t437523947;
// DarkTonic.MasterAudio.MusicSetting
struct MusicSetting_t2500364858;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.PlaylistController>
struct List_1_t3785441750;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Audio.AudioMixerGroup
struct AudioMixerGroup_t1736867953;
// DarkTonic.MasterAudio.MasterAudio/Playlist
struct Playlist_t1944118770;
// UnityEngine.Transform
struct Transform_t284553113;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_PlaylistCont33399983.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_PlaylistCo1874844277.h"
#include "mscorlib_System_String968488902.h"
#include "System_Core_System_Action437523947.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_PlaylistCon745328228.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MusicSetti2500364858.h"
#include "UnityEngine_UnityEngine_AudioClip3714538611.h"
#include "UnityEngine_UnityEngine_AudioSource3628549054.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_PlaylistCo2495079060.h"
#include "UnityEngine_UnityEngine_Audio_AudioMixerGroup1736867953.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_PlaylistCo2988482781.h"

// System.Void DarkTonic.MasterAudio.PlaylistController::.ctor()
extern "C"  void PlaylistController__ctor_m2788109180 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::add_SongChanged(DarkTonic.MasterAudio.PlaylistController/SongChangedEventHandler)
extern "C"  void PlaylistController_add_SongChanged_m1183103388 (PlaylistController_t2988482781 * __this, SongChangedEventHandler_t33399983 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::remove_SongChanged(DarkTonic.MasterAudio.PlaylistController/SongChangedEventHandler)
extern "C"  void PlaylistController_remove_SongChanged_m1725327533 (PlaylistController_t2988482781 * __this, SongChangedEventHandler_t33399983 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::add_SongEnded(DarkTonic.MasterAudio.PlaylistController/SongEndedEventHandler)
extern "C"  void PlaylistController_add_SongEnded_m3338710684 (PlaylistController_t2988482781 * __this, SongEndedEventHandler_t1874844277 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::remove_SongEnded(DarkTonic.MasterAudio.PlaylistController/SongEndedEventHandler)
extern "C"  void PlaylistController_remove_SongEnded_m257855021 (PlaylistController_t2988482781 * __this, SongEndedEventHandler_t1874844277 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::Awake()
extern "C"  void PlaylistController_Awake_m3025714399 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::SetSpatialBlend()
extern "C"  void PlaylistController_SetSpatialBlend_m1151908041 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::SetAudiosIfEmpty()
extern "C"  void PlaylistController_SetAudiosIfEmpty_m3737811545 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::SetAudioSpatialBlend(System.Single)
extern "C"  void PlaylistController_SetAudioSpatialBlend_m951356386 (PlaylistController_t2988482781 * __this, float ___blend, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::Start()
extern "C"  void PlaylistController_Start_m1735246972 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::CoUpdate()
extern "C"  void PlaylistController_CoUpdate_m2490734045 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::OnEnable()
extern "C"  void PlaylistController_OnEnable_m2259622538 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::OnDisable()
extern "C"  void PlaylistController_OnDisable_m1769759203 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::OnApplicationPause(System.Boolean)
extern "C"  void PlaylistController_OnApplicationPause_m2965925380 (PlaylistController_t2988482781 * __this, bool ___pauseStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::Update()
extern "C"  void PlaylistController_Update_m2258900753 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DarkTonic.MasterAudio.PlaylistController DarkTonic.MasterAudio.PlaylistController::InstanceByName(System.String,System.Boolean)
extern "C"  PlaylistController_t2988482781 * PlaylistController_InstanceByName_m1708961816 (Il2CppObject * __this /* static, unused */, String_t* ___playlistControllerName, bool ___errorIfNotFound, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::ClearQueue()
extern "C"  void PlaylistController_ClearQueue_m2232650444 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::ToggleMutePlaylist()
extern "C"  void PlaylistController_ToggleMutePlaylist_m1789884103 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::MutePlaylist()
extern "C"  void PlaylistController_MutePlaylist_m2977457043 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::UnmutePlaylist()
extern "C"  void PlaylistController_UnmutePlaylist_m2504653996 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::UpdateDuckedVolumeMultiplier()
extern "C"  void PlaylistController_UpdateDuckedVolumeMultiplier_m3414943268 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::PausePlaylist()
extern "C"  void PlaylistController_PausePlaylist_m350143362 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.PlaylistController::ResumePlaylist()
extern "C"  bool PlaylistController_ResumePlaylist_m4258611355 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::StopPlaylist(System.Boolean)
extern "C"  void PlaylistController_StopPlaylist_m1163765427 (PlaylistController_t2988482781 * __this, bool ___onlyFadingClip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::FadeToVolume(System.Single,System.Single,System.Action)
extern "C"  void PlaylistController_FadeToVolume_m1383175438 (PlaylistController_t2988482781 * __this, float ___targetVolume, float ___fadeTime, Action_t437523947 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::PlayRandomSong()
extern "C"  void PlaylistController_PlayRandomSong_m1272716628 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::PlayARandomSong(DarkTonic.MasterAudio.PlaylistController/AudioPlayType,System.Boolean)
extern "C"  void PlaylistController_PlayARandomSong_m459334770 (PlaylistController_t2988482781 * __this, int32_t ___playType, bool ___isMidsong, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::RemoveRandomClip(System.Int32)
extern "C"  void PlaylistController_RemoveRandomClip_m2594060080 (PlaylistController_t2988482781 * __this, int32_t ___randIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::PlayFirstQueuedSong(DarkTonic.MasterAudio.PlaylistController/AudioPlayType)
extern "C"  void PlaylistController_PlayFirstQueuedSong_m1695012970 (PlaylistController_t2988482781 * __this, int32_t ___playType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::PlayNextSong()
extern "C"  void PlaylistController_PlayNextSong_m806885956 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::PlayTheNextSong(DarkTonic.MasterAudio.PlaylistController/AudioPlayType,System.Boolean)
extern "C"  void PlaylistController_PlayTheNextSong_m1586526706 (PlaylistController_t2988482781 * __this, int32_t ___playType, bool ___isMidsong, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::AdvanceSongCounter()
extern "C"  void PlaylistController_AdvanceSongCounter_m3131547149 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::QueuePlaylistClip(System.String)
extern "C"  void PlaylistController_QueuePlaylistClip_m3694953941 (PlaylistController_t2988482781 * __this, String_t* ___clipName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.PlaylistController::TriggerPlaylistClip(System.String)
extern "C"  bool PlaylistController_TriggerPlaylistClip_m3218469826 (PlaylistController_t2988482781 * __this, String_t* ___clipName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::DuckMusicForTime(System.Single,System.Single,System.Single)
extern "C"  void PlaylistController_DuckMusicForTime_m4293902979 (PlaylistController_t2988482781 * __this, float ___duckLength, float ___pitch, float ___duckedTimePercentage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::InitControllerIfNot()
extern "C"  void PlaylistController_InitControllerIfNot_m2548402532 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::UpdateMasterVolume()
extern "C"  void PlaylistController_UpdateMasterVolume_m116252749 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::StartPlaylist(System.String)
extern "C"  void PlaylistController_StartPlaylist_m3957065428 (PlaylistController_t2988482781 * __this, String_t* ___playlistName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::ChangePlaylist(System.String,System.Boolean)
extern "C"  void PlaylistController_ChangePlaylist_m3578342373 (PlaylistController_t2988482781 * __this, String_t* ___playlistName, bool ___playFirstClip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::FinishPlaylistInit(System.Boolean)
extern "C"  void PlaylistController_FinishPlaylistInit_m924849588 (PlaylistController_t2988482781 * __this, bool ___playFirstClip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::RestartPlaylist()
extern "C"  void PlaylistController_RestartPlaylist_m2879548955 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::FadeOutPlaylist()
extern "C"  void PlaylistController_FadeOutPlaylist_m795410302 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::InitializePlaylist()
extern "C"  void PlaylistController_InitializePlaylist_m2559746826 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::PlayNextOrRandom(DarkTonic.MasterAudio.PlaylistController/AudioPlayType)
extern "C"  void PlaylistController_PlayNextOrRandom_m1406631329 (PlaylistController_t2988482781 * __this, int32_t ___playType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::FillClips()
extern "C"  void PlaylistController_FillClips_m4065763194 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::PlaySong(DarkTonic.MasterAudio.MusicSetting,DarkTonic.MasterAudio.PlaylistController/AudioPlayType)
extern "C"  void PlaylistController_PlaySong_m1099578621 (PlaylistController_t2988482781 * __this, MusicSetting_t2500364858 * ___setting, int32_t ___playType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::FinishLoadingNewSong(UnityEngine.AudioClip,DarkTonic.MasterAudio.PlaylistController/AudioPlayType)
extern "C"  void PlaylistController_FinishLoadingNewSong_m1910813859 (PlaylistController_t2988482781 * __this, AudioClip_t3714538611 * ___clipToPlay, int32_t ___playType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::RemoveScheduledClip()
extern "C"  void PlaylistController_RemoveScheduledClip_m2142158355 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::ScheduleNextSong()
extern "C"  void PlaylistController_ScheduleNextSong_m723781223 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::FadeInScheduledSong()
extern "C"  void PlaylistController_FadeInScheduledSong_m1024088251 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double DarkTonic.MasterAudio.PlaylistController::CalculateNextTrackStartTime()
extern "C"  double PlaylistController_CalculateNextTrackStartTime_m2767442420 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::ScheduleClipPlay(System.Double)
extern "C"  void PlaylistController_ScheduleClipPlay_m97133759 (PlaylistController_t2988482781 * __this, double ___scheduledPlayTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::CrossFadeNow(UnityEngine.AudioSource)
extern "C"  void PlaylistController_CrossFadeNow_m1747645014 (PlaylistController_t2988482781 * __this, AudioSource_t3628549054 * ___audioClip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::CeaseAudioSource(UnityEngine.AudioSource)
extern "C"  void PlaylistController_CeaseAudioSource_m569175792 (PlaylistController_t2988482781 * __this, AudioSource_t3628549054 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::SetDuckProperties()
extern "C"  void PlaylistController_SetDuckProperties_m795032424 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::AudioDucking()
extern "C"  void PlaylistController_AudioDucking_m3990215259 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.PlaylistController::SongShouldLoop(DarkTonic.MasterAudio.MusicSetting)
extern "C"  bool PlaylistController_SongShouldLoop_m4211945932 (PlaylistController_t2988482781 * __this, MusicSetting_t2500364858 * ___setting, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.PlaylistController::get_ShouldLoadAsync()
extern "C"  bool PlaylistController_get_ShouldLoadAsync_m1432315648 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.PlaylistController::get_ControllerIsReady()
extern "C"  bool PlaylistController_get_ControllerIsReady_m2323717146 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::set_ControllerIsReady(System.Boolean)
extern "C"  void PlaylistController_set_ControllerIsReady_m3336934225 (PlaylistController_t2988482781 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DarkTonic.MasterAudio.PlaylistController/PlaylistStates DarkTonic.MasterAudio.PlaylistController::get_PlaylistState()
extern "C"  int32_t PlaylistController_get_PlaylistState_m1903267265 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource DarkTonic.MasterAudio.PlaylistController::get_ActiveAudioSource()
extern "C"  AudioSource_t3628549054 * PlaylistController_get_ActiveAudioSource_m2092532963 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.PlaylistController> DarkTonic.MasterAudio.PlaylistController::get_Instances()
extern "C"  List_1_t3785441750 * PlaylistController_get_Instances_m1103701341 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::set_Instances(System.Collections.Generic.List`1<DarkTonic.MasterAudio.PlaylistController>)
extern "C"  void PlaylistController_set_Instances_m2994474326 (Il2CppObject * __this /* static, unused */, List_1_t3785441750 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject DarkTonic.MasterAudio.PlaylistController::get_PlaylistControllerGameObject()
extern "C"  GameObject_t4012695102 * PlaylistController_get_PlaylistControllerGameObject_m532427461 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource DarkTonic.MasterAudio.PlaylistController::get_CurrentPlaylistSource()
extern "C"  AudioSource_t3628549054 * PlaylistController_get_CurrentPlaylistSource_m1161035870 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip DarkTonic.MasterAudio.PlaylistController::get_CurrentPlaylistClip()
extern "C"  AudioClip_t3714538611 * PlaylistController_get_CurrentPlaylistClip_m3815744648 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip DarkTonic.MasterAudio.PlaylistController::get_FadingPlaylistClip()
extern "C"  AudioClip_t3714538611 * PlaylistController_get_FadingPlaylistClip_m2758697456 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource DarkTonic.MasterAudio.PlaylistController::get_FadingSource()
extern "C"  AudioSource_t3628549054 * PlaylistController_get_FadingSource_m39515486 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.PlaylistController::get_IsCrossFading()
extern "C"  bool PlaylistController_get_IsCrossFading_m3731019596 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::set_IsCrossFading(System.Boolean)
extern "C"  void PlaylistController_set_IsCrossFading_m4003229443 (PlaylistController_t2988482781 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.PlaylistController::get_IsFading()
extern "C"  bool PlaylistController_get_IsFading_m1970729928 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DarkTonic.MasterAudio.PlaylistController::get_PlaylistVolume()
extern "C"  float PlaylistController_get_PlaylistVolume_m1110020137 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::set_PlaylistVolume(System.Single)
extern "C"  void PlaylistController_set_PlaylistVolume_m1873674362 (PlaylistController_t2988482781 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::RouteToMixerChannel(UnityEngine.Audio.AudioMixerGroup)
extern "C"  void PlaylistController_RouteToMixerChannel_m1425570205 (PlaylistController_t2988482781 * __this, AudioMixerGroup_t1736867953 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DarkTonic.MasterAudio.MasterAudio/Playlist DarkTonic.MasterAudio.PlaylistController::get_CurrentPlaylist()
extern "C"  Playlist_t1944118770 * PlaylistController_get_CurrentPlaylist_m3542887037 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.PlaylistController::get_HasPlaylist()
extern "C"  bool PlaylistController_get_HasPlaylist_m2905310345 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DarkTonic.MasterAudio.PlaylistController::get_PlaylistName()
extern "C"  String_t* PlaylistController_get_PlaylistName_m4141678513 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.PlaylistController::get_IsMuted()
extern "C"  bool PlaylistController_get_IsMuted_m3815285022 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController::set_PlaylistIsMuted(System.Boolean)
extern "C"  void PlaylistController_set_PlaylistIsMuted_m2701426467 (PlaylistController_t2988482781 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DarkTonic.MasterAudio.PlaylistController::get_CrossFadeTime()
extern "C"  float PlaylistController_get_CrossFadeTime_m1325637742 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.PlaylistController::get_IsAutoAdvance()
extern "C"  bool PlaylistController_get_IsAutoAdvance_m3100559366 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject DarkTonic.MasterAudio.PlaylistController::get_GameObj()
extern "C"  GameObject_t4012695102 * PlaylistController_get_GameObj_m918746177 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DarkTonic.MasterAudio.PlaylistController::get_ControllerName()
extern "C"  String_t* PlaylistController_get_ControllerName_m459346235 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.PlaylistController::get_CanSchedule()
extern "C"  bool PlaylistController_get_CanSchedule_m1791220164 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform DarkTonic.MasterAudio.PlaylistController::get_Trans()
extern "C"  Transform_t284553113 * PlaylistController_get_Trans_m3684612923 (PlaylistController_t2988482781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.PlaylistController::<FinishLoadingNewSong>m__11(DarkTonic.MasterAudio.PlaylistController)
extern "C"  bool PlaylistController_U3CFinishLoadingNewSongU3Em__11_m2500981534 (PlaylistController_t2988482781 * __this, PlaylistController_t2988482781 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.PlaylistController::<FinishLoadingNewSong>m__12(DarkTonic.MasterAudio.MusicSetting)
extern "C"  bool PlaylistController_U3CFinishLoadingNewSongU3Em__12_m1766117154 (PlaylistController_t2988482781 * __this, MusicSetting_t2500364858 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
