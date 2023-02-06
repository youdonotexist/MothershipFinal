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

// DarkTonic.MasterAudio.SoundGroupVariation
struct SoundGroupVariation_t49693394;
// DarkTonic.MasterAudio.SoundGroupVariation/SoundFinishedEventHandler
struct SoundFinishedEventHandler_t2252829809;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.AudioDistortionFilter
struct AudioDistortionFilter_t311469720;
// UnityEngine.AudioReverbFilter
struct AudioReverbFilter_t1675624205;
// UnityEngine.AudioChorusFilter
struct AudioChorusFilter_t1133144033;
// UnityEngine.AudioEchoFilter
struct AudioEchoFilter_t386626208;
// UnityEngine.AudioLowPassFilter
struct AudioLowPassFilter_t3551826324;
// UnityEngine.AudioHighPassFilter
struct AudioHighPassFilter_t3328821198;
// DarkTonic.MasterAudio.MasterAudioGroup
struct MasterAudioGroup_t1025661466;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// DarkTonic.MasterAudio.SoundGroupVariationUpdater
struct SoundGroupVariationUpdater_t767605717;
// DarkTonic.MasterAudio.SoundGroupVariation/PlaySoundParams
struct PlaySoundParams_t818148225;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_SoundGroup2252829809.h"
#include "mscorlib_System_Nullable_1_gen3844246929.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"

// System.Void DarkTonic.MasterAudio.SoundGroupVariation::.ctor()
extern "C"  void SoundGroupVariation__ctor_m2809339193 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::add_SoundFinished(DarkTonic.MasterAudio.SoundGroupVariation/SoundFinishedEventHandler)
extern "C"  void SoundGroupVariation_add_SoundFinished_m2959809540 (SoundGroupVariation_t49693394 * __this, SoundFinishedEventHandler_t2252829809 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::remove_SoundFinished(DarkTonic.MasterAudio.SoundGroupVariation/SoundFinishedEventHandler)
extern "C"  void SoundGroupVariation_remove_SoundFinished_m1288470381 (SoundGroupVariation_t49693394 * __this, SoundFinishedEventHandler_t2252829809 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::Awake()
extern "C"  void SoundGroupVariation_Awake_m3046944412 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::Start()
extern "C"  void SoundGroupVariation_Start_m1756476985 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::SetSpatialBlend()
extern "C"  void SoundGroupVariation_SetSpatialBlend_m122380870 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::LoadInternetFile()
extern "C"  void SoundGroupVariation_LoadInternetFile_m1242300814 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::SetPriority()
extern "C"  void SoundGroupVariation_SetPriority_m1950503037 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::DisableUpdater()
extern "C"  void SoundGroupVariation_DisableUpdater_m2799484140 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::OnDestroy()
extern "C"  void SoundGroupVariation_OnDestroy_m3784420786 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::OnDisable()
extern "C"  void SoundGroupVariation_OnDisable_m1606888736 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::StopSoundEarly()
extern "C"  void SoundGroupVariation_StopSoundEarly_m4044336161 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::OnDrawGizmos()
extern "C"  void SoundGroupVariation_OnDrawGizmos_m745492935 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::Play(System.Nullable`1<System.Single>,System.Single,System.String,System.Single,System.Single,System.Nullable`1<System.Single>,UnityEngine.Transform,System.Boolean,System.Single,System.Boolean,System.Boolean)
extern "C"  void SoundGroupVariation_Play_m3622889391 (SoundGroupVariation_t49693394 * __this, Nullable_1_t3844246929  ___pitch, float ___maxVolume, String_t* ___gameObjectName, float ___volPercent, float ___targetVol, Nullable_1_t3844246929  ___targetPitch, Transform_t284553113 * ___sourceTrans, bool ___attach, float ___delayTime, bool ___isChaining, bool ___isSingleSubscribedPlay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::InternetFileFailedToLoad()
extern "C"  void SoundGroupVariation_InternetFileFailedToLoad_m2075523782 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::InternetFileLoaded()
extern "C"  void SoundGroupVariation_InternetFileLoaded_m2499806637 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::ResourceFailedToLoad()
extern "C"  void SoundGroupVariation_ResourceFailedToLoad_m563958199 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::FinishSetupToPlay()
extern "C"  void SoundGroupVariation_FinishSetupToPlay_m1194945968 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::JumpToTime(System.Single)
extern "C"  void SoundGroupVariation_JumpToTime_m3586093482 (SoundGroupVariation_t49693394 * __this, float ___timeToJumpTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::AdjustVolume(System.Single)
extern "C"  void SoundGroupVariation_AdjustVolume_m1583863287 (SoundGroupVariation_t49693394 * __this, float ___volumePercentage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::Pause()
extern "C"  void SoundGroupVariation_Pause_m2863465165 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::MaybeUnloadClip()
extern "C"  void SoundGroupVariation_MaybeUnloadClip_m3286930062 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::Stop(System.Boolean)
extern "C"  void SoundGroupVariation_Stop_m1304266532 (SoundGroupVariation_t49693394 * __this, bool ___stopEndDetection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::FadeToVolume(System.Single,System.Single)
extern "C"  void SoundGroupVariation_FadeToVolume_m633724180 (SoundGroupVariation_t49693394 * __this, float ___newVolume, float ___fadeTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::FadeOutNow()
extern "C"  void SoundGroupVariation_FadeOutNow_m2680650415 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::FadeOutNow(System.Single)
extern "C"  void SoundGroupVariation_FadeOutNow_m1471060828 (SoundGroupVariation_t49693394 * __this, float ___fadeTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.SoundGroupVariation::WasTriggeredFromTransform(UnityEngine.Transform)
extern "C"  bool SoundGroupVariation_WasTriggeredFromTransform_m996041854 (SoundGroupVariation_t49693394 * __this, Transform_t284553113 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioDistortionFilter DarkTonic.MasterAudio.SoundGroupVariation::get_DistortionFilter()
extern "C"  AudioDistortionFilter_t311469720 * SoundGroupVariation_get_DistortionFilter_m150686538 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioReverbFilter DarkTonic.MasterAudio.SoundGroupVariation::get_ReverbFilter()
extern "C"  AudioReverbFilter_t1675624205 * SoundGroupVariation_get_ReverbFilter_m1456081460 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioChorusFilter DarkTonic.MasterAudio.SoundGroupVariation::get_ChorusFilter()
extern "C"  AudioChorusFilter_t1133144033 * SoundGroupVariation_get_ChorusFilter_m1748728796 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioEchoFilter DarkTonic.MasterAudio.SoundGroupVariation::get_EchoFilter()
extern "C"  AudioEchoFilter_t386626208 * SoundGroupVariation_get_EchoFilter_m923999834 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioLowPassFilter DarkTonic.MasterAudio.SoundGroupVariation::get_LowPassFilter()
extern "C"  AudioLowPassFilter_t3551826324 * SoundGroupVariation_get_LowPassFilter_m2957463658 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioHighPassFilter DarkTonic.MasterAudio.SoundGroupVariation::get_HighPassFilter()
extern "C"  AudioHighPassFilter_t3328821198 * SoundGroupVariation_get_HighPassFilter_m1869323062 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform DarkTonic.MasterAudio.SoundGroupVariation::get_ObjectToFollow()
extern "C"  Transform_t284553113 * SoundGroupVariation_get_ObjectToFollow_m2473781441 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::set_ObjectToFollow(UnityEngine.Transform)
extern "C"  void SoundGroupVariation_set_ObjectToFollow_m485208010 (SoundGroupVariation_t49693394 * __this, Transform_t284553113 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform DarkTonic.MasterAudio.SoundGroupVariation::get_ObjectToTriggerFrom()
extern "C"  Transform_t284553113 * SoundGroupVariation_get_ObjectToTriggerFrom_m572717844 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::set_ObjectToTriggerFrom(UnityEngine.Transform)
extern "C"  void SoundGroupVariation_set_ObjectToTriggerFrom_m3216518843 (SoundGroupVariation_t49693394 * __this, Transform_t284553113 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.SoundGroupVariation::get_HasActiveFXFilter()
extern "C"  bool SoundGroupVariation_get_HasActiveFXFilter_m3729139788 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DarkTonic.MasterAudio.MasterAudioGroup DarkTonic.MasterAudio.SoundGroupVariation::get_ParentGroup()
extern "C"  MasterAudioGroup_t1025661466 * SoundGroupVariation_get_ParentGroup_m2711554788 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DarkTonic.MasterAudio.SoundGroupVariation::get_OriginalPitch()
extern "C"  float SoundGroupVariation_get_OriginalPitch_m3230572137 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.SoundGroupVariation::get_IsAvailableToPlay()
extern "C"  bool SoundGroupVariation_get_IsAvailableToPlay_m4179496976 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DarkTonic.MasterAudio.SoundGroupVariation::get_LastTimePlayed()
extern "C"  float SoundGroupVariation_get_LastTimePlayed_m4283635870 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::set_LastTimePlayed(System.Single)
extern "C"  void SoundGroupVariation_set_LastTimePlayed_m68960013 (SoundGroupVariation_t49693394 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DarkTonic.MasterAudio.SoundGroupVariation::get_InstanceId()
extern "C"  int32_t SoundGroupVariation_get_InstanceId_m2845889654 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform DarkTonic.MasterAudio.SoundGroupVariation::get_Trans()
extern "C"  Transform_t284553113 * SoundGroupVariation_get_Trans_m2529150452 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject DarkTonic.MasterAudio.SoundGroupVariation::get_GameObj()
extern "C"  GameObject_t4012695102 * SoundGroupVariation_get_GameObj_m2396266056 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource DarkTonic.MasterAudio.SoundGroupVariation::get_VarAudio()
extern "C"  AudioSource_t3628549054 * SoundGroupVariation_get_VarAudio_m4180105834 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.SoundGroupVariation::get_AudioLoops()
extern "C"  bool SoundGroupVariation_get_AudioLoops_m2818790745 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DarkTonic.MasterAudio.SoundGroupVariation::get_ResFileName()
extern "C"  String_t* SoundGroupVariation_get_ResFileName_m4138590840 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DarkTonic.MasterAudio.SoundGroupVariationUpdater DarkTonic.MasterAudio.SoundGroupVariation::get_VariationUpdater()
extern "C"  SoundGroupVariationUpdater_t767605717 * SoundGroupVariation_get_VariationUpdater_m3759542340 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.SoundGroupVariation::get_IsWaitingForDelay()
extern "C"  bool SoundGroupVariation_get_IsWaitingForDelay_m1617517439 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::set_IsWaitingForDelay(System.Boolean)
extern "C"  void SoundGroupVariation_set_IsWaitingForDelay_m3499493902 (SoundGroupVariation_t49693394 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DarkTonic.MasterAudio.SoundGroupVariation/PlaySoundParams DarkTonic.MasterAudio.SoundGroupVariation::get_PlaySoundParm()
extern "C"  PlaySoundParams_t818148225 * SoundGroupVariation_get_PlaySoundParm_m2015148580 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.SoundGroupVariation::get_IsPlaying()
extern "C"  bool SoundGroupVariation_get_IsPlaying_m3042999622 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DarkTonic.MasterAudio.SoundGroupVariation::get_SetGroupVolume()
extern "C"  float SoundGroupVariation_get_SetGroupVolume_m210218463 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::set_SetGroupVolume(System.Single)
extern "C"  void SoundGroupVariation_set_SetGroupVolume_m2064776044 (SoundGroupVariation_t49693394 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.SoundGroupVariation::get_ShouldLoadAsync()
extern "C"  bool SoundGroupVariation_get_ShouldLoadAsync_m2873773541 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation::ClearSubscribers()
extern "C"  void SoundGroupVariation_ClearSubscribers_m4207902441 (SoundGroupVariation_t49693394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
