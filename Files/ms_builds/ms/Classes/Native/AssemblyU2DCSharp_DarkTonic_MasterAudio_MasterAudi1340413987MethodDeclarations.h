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

// DarkTonic.MasterAudio.MasterAudio
struct MasterAudio_t1340413987;
// System.String
struct String_t;
// DarkTonic.MasterAudio.PlaySoundResult
struct PlaySoundResult_t3653206983;
// UnityEngine.Transform
struct Transform_t284553113;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// DarkTonic.MasterAudio.MasterAudio/AudioGroupInfo
struct AudioGroupInfo_t2034546871;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3644373756;
// DarkTonic.MasterAudio.MasterAudio/AudioInfo
struct AudioInfo_t2191833476;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.MasterAudio/AudioInfo>
struct List_1_t2988792445;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.SoundGroupVariation>
struct List_1_t846652363;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.Audio.AudioMixerGroup
struct AudioMixerGroup_t1736867953;
// System.Action
struct Action_t437523947;
// DarkTonic.MasterAudio.DynamicSoundGroup
struct DynamicSoundGroup_t2364000734;
// DarkTonic.MasterAudio.MasterAudioGroup
struct MasterAudioGroup_t1025661466;
// DarkTonic.MasterAudio.GroupBus
struct GroupBus_t3345035600;
// DarkTonic.MasterAudio.MasterAudio/Playlist
struct Playlist_t1944118770;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.PlaylistController>
struct List_1_t3785441750;
// DarkTonic.MasterAudio.ICustomEventReceiver
struct ICustomEventReceiver_t2120267102;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t1081512082;
// DarkTonic.MasterAudio.CustomEvent
struct CustomEvent_t2640437048;
// DarkTonic.MasterAudio.PlaylistController
struct PlaylistController_t2988482781;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.MasterAudio/Playlist>
struct List_1_t2741077739;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.GroupBus>
struct List_1_t4141994569;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// UnityEngine.YieldInstruction
struct YieldInstruction_t3557331758;
struct YieldInstruction_t3557331758_marshaled_pinvoke;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// DarkTonic.MasterAudio.BusFadeInfo
struct BusFadeInfo_t1807932793;
// DarkTonic.MasterAudio.GroupFadeInfo
struct GroupFadeInfo_t1855680120;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Nullable_1_gen3844246929.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi2034546871.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi2191833476.h"
#include "UnityEngine_UnityEngine_AudioSource3628549054.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi1476472280.h"
#include "UnityEngine_UnityEngine_AudioClip3714538611.h"
#include "UnityEngine_UnityEngine_Audio_AudioMixerGroup1736867953.h"
#include "System_Core_System_Action437523947.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_DynamicSou2364000734.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi1025661466.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_GroupBus3345035600.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi1944118770.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi4230668765.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi1340413987.h"
#include "UnityEngine_UnityEngine_SystemLanguage1674836756.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_BusFadeInf1807932793.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_GroupFadeI1855680120.h"

// System.Void DarkTonic.MasterAudio.MasterAudio::.ctor()
extern "C"  void MasterAudio__ctor_m574569480 (MasterAudio_t1340413987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::.cctor()
extern "C"  void MasterAudio__cctor_m149688485 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::Awake()
extern "C"  void MasterAudio_Awake_m812174699 (MasterAudio_t1340413987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::Start()
extern "C"  void MasterAudio_Start_m3816674568 (MasterAudio_t1340413987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::Update()
extern "C"  void MasterAudio_Update_m2358646789 (MasterAudio_t1340413987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::UpdateRefillTime(System.String,System.Single)
extern "C"  void MasterAudio_UpdateRefillTime_m3224813791 (Il2CppObject * __this /* static, unused */, String_t* ___sType, float ___inactivePeriodSeconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::RefillInactiveGroupPools()
extern "C"  void MasterAudio_RefillInactiveGroupPools_m2796810933 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::PerformBusFades()
extern "C"  void MasterAudio_PerformBusFades_m986871358 (MasterAudio_t1340413987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::PerformGroupFades()
extern "C"  void MasterAudio_PerformGroupFades_m2062507999 (MasterAudio_t1340413987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::OnApplicationQuit()
extern "C"  void MasterAudio_OnApplicationQuit_m3529891206 (MasterAudio_t1340413987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::PlaySoundAndForget(System.String,System.Single,System.Nullable`1<System.Single>,System.Single,System.String)
extern "C"  void MasterAudio_PlaySoundAndForget_m3928517443 (Il2CppObject * __this /* static, unused */, String_t* ___sType, float ___volumePercentage, Nullable_1_t3844246929  ___pitch, float ___delaySoundTime, String_t* ___variationName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DarkTonic.MasterAudio.PlaySoundResult DarkTonic.MasterAudio.MasterAudio::PlaySound(System.String,System.Single,System.Nullable`1<System.Single>,System.Single,System.String,System.Boolean,System.Boolean)
extern "C"  PlaySoundResult_t3653206983 * MasterAudio_PlaySound_m4110196715 (Il2CppObject * __this /* static, unused */, String_t* ___sType, float ___volumePercentage, Nullable_1_t3844246929  ___pitch, float ___delaySoundTime, String_t* ___variationName, bool ___isChaining, bool ___isSingleSubscribedPlay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::PlaySound3DAtVector3AndForget(System.String,UnityEngine.Vector3,System.Single,System.Nullable`1<System.Single>,System.Single,System.String)
extern "C"  void MasterAudio_PlaySound3DAtVector3AndForget_m2652814564 (Il2CppObject * __this /* static, unused */, String_t* ___sType, Vector3_t3525329789  ___sourcePosition, float ___volumePercentage, Nullable_1_t3844246929  ___pitch, float ___delaySoundTime, String_t* ___variationName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DarkTonic.MasterAudio.PlaySoundResult DarkTonic.MasterAudio.MasterAudio::PlaySound3DAtVector3(System.String,UnityEngine.Vector3,System.Single,System.Nullable`1<System.Single>,System.Single,System.String)
extern "C"  PlaySoundResult_t3653206983 * MasterAudio_PlaySound3DAtVector3_m3261326252 (Il2CppObject * __this /* static, unused */, String_t* ___sType, Vector3_t3525329789  ___sourcePosition, float ___volumePercentage, Nullable_1_t3844246929  ___pitch, float ___delaySoundTime, String_t* ___variationName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::PlaySound3DAtTransformAndForget(System.String,UnityEngine.Transform,System.Single,System.Nullable`1<System.Single>,System.Single,System.String)
extern "C"  void MasterAudio_PlaySound3DAtTransformAndForget_m4088823332 (Il2CppObject * __this /* static, unused */, String_t* ___sType, Transform_t284553113 * ___sourceTrans, float ___volumePercentage, Nullable_1_t3844246929  ___pitch, float ___delaySoundTime, String_t* ___variationName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DarkTonic.MasterAudio.PlaySoundResult DarkTonic.MasterAudio.MasterAudio::PlaySound3DAtTransform(System.String,UnityEngine.Transform,System.Single,System.Nullable`1<System.Single>,System.Single,System.String,System.Boolean,System.Boolean)
extern "C"  PlaySoundResult_t3653206983 * MasterAudio_PlaySound3DAtTransform_m4289507332 (Il2CppObject * __this /* static, unused */, String_t* ___sType, Transform_t284553113 * ___sourceTrans, float ___volumePercentage, Nullable_1_t3844246929  ___pitch, float ___delaySoundTime, String_t* ___variationName, bool ___isChaining, bool ___isSingleSubscribedPlay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::PlaySound3DFollowTransformAndForget(System.String,UnityEngine.Transform,System.Single,System.Nullable`1<System.Single>,System.Single,System.String)
extern "C"  void MasterAudio_PlaySound3DFollowTransformAndForget_m1098835362 (Il2CppObject * __this /* static, unused */, String_t* ___sType, Transform_t284553113 * ___sourceTrans, float ___volumePercentage, Nullable_1_t3844246929  ___pitch, float ___delaySoundTime, String_t* ___variationName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DarkTonic.MasterAudio.PlaySoundResult DarkTonic.MasterAudio.MasterAudio::PlaySound3DFollowTransform(System.String,UnityEngine.Transform,System.Single,System.Nullable`1<System.Single>,System.Single,System.String,System.Boolean,System.Boolean)
extern "C"  PlaySoundResult_t3653206983 * MasterAudio_PlaySound3DFollowTransform_m2173569350 (Il2CppObject * __this /* static, unused */, String_t* ___sType, Transform_t284553113 * ___sourceTrans, float ___volumePercentage, Nullable_1_t3844246929  ___pitch, float ___delaySoundTime, String_t* ___variationName, bool ___isChaining, bool ___isSingleSubscribedPlay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::PlaySound3DAndForget(System.String,UnityEngine.Transform,System.Boolean,System.Single,System.Nullable`1<System.Single>,System.Single,System.String)
extern "C"  void MasterAudio_PlaySound3DAndForget_m1241576040 (Il2CppObject * __this /* static, unused */, String_t* ___sType, Transform_t284553113 * ___sourceTrans, bool ___attachToSource, float ___volumePercentage, Nullable_1_t3844246929  ___pitch, float ___delaySoundTime, String_t* ___variationName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator DarkTonic.MasterAudio.MasterAudio::PlaySoundAndWaitUntilFinished(System.String,System.Single,System.Nullable`1<System.Single>,System.Single,System.String)
extern "C"  Il2CppObject * MasterAudio_PlaySoundAndWaitUntilFinished_m751306955 (Il2CppObject * __this /* static, unused */, String_t* ___sType, float ___volumePercentage, Nullable_1_t3844246929  ___pitch, float ___delaySoundTime, String_t* ___variationName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator DarkTonic.MasterAudio.MasterAudio::PlaySound3DAtTransformAndWaitUntilFinished(System.String,UnityEngine.Transform,System.Single,System.Nullable`1<System.Single>,System.Single,System.String)
extern "C"  Il2CppObject * MasterAudio_PlaySound3DAtTransformAndWaitUntilFinished_m1882924844 (Il2CppObject * __this /* static, unused */, String_t* ___sType, Transform_t284553113 * ___sourceTrans, float ___volumePercentage, Nullable_1_t3844246929  ___pitch, float ___delaySoundTime, String_t* ___variationName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator DarkTonic.MasterAudio.MasterAudio::PlaySound3DFollowTransformAndWaitUntilFinished(System.String,UnityEngine.Transform,System.Single,System.Nullable`1<System.Single>,System.Single,System.String)
extern "C"  Il2CppObject * MasterAudio_PlaySound3DFollowTransformAndWaitUntilFinished_m2986977518 (Il2CppObject * __this /* static, unused */, String_t* ___sType, Transform_t284553113 * ___sourceTrans, float ___volumePercentage, Nullable_1_t3844246929  ___pitch, float ___delaySoundTime, String_t* ___variationName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DarkTonic.MasterAudio.PlaySoundResult DarkTonic.MasterAudio.MasterAudio::PlaySoundAtVolume(System.String,System.Single,UnityEngine.Vector3,System.Nullable`1<System.Single>,UnityEngine.Transform,System.String,System.Boolean,System.Single,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  PlaySoundResult_t3653206983 * MasterAudio_PlaySoundAtVolume_m985816210 (Il2CppObject * __this /* static, unused */, String_t* ___sType, float ___volumePercentage, Vector3_t3525329789  ___sourcePosition, Nullable_1_t3844246929  ___pitch, Transform_t284553113 * ___sourceTrans, String_t* ___variationName, bool ___attachToSource, float ___delaySoundTime, bool ___useVector3, bool ___makePlaySoundResult, bool ___isChaining, bool ___isSingleSubscribedPlay, bool ___triggeredAsChildGroup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::SetLastPlayed(DarkTonic.MasterAudio.MasterAudio/AudioGroupInfo)
extern "C"  void MasterAudio_SetLastPlayed_m1369652558 (Il2CppObject * __this /* static, unused */, AudioGroupInfo_t2034546871 * ___grp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::RemoveClipAndRefillIfEmpty(DarkTonic.MasterAudio.MasterAudio/AudioGroupInfo,System.Boolean,System.Nullable`1<System.Int32>,System.Collections.Generic.List`1<System.Int32>,System.String,System.Int32,System.Boolean)
extern "C"  void MasterAudio_RemoveClipAndRefillIfEmpty_m2740923538 (Il2CppObject * __this /* static, unused */, AudioGroupInfo_t2034546871 * ___grp, bool ___isNonSpecific, Nullable_1_t1438485399  ___randomIndex, List_1_t3644373756 * ___choices, String_t* ___sType, int32_t ___pickedChoice, bool ___loggingEnabledForGrp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DarkTonic.MasterAudio.PlaySoundResult DarkTonic.MasterAudio.MasterAudio::PlaySoundIfAvailable(DarkTonic.MasterAudio.MasterAudio/AudioInfo,UnityEngine.Vector3,System.Single,System.Boolean&,System.Nullable`1<System.Single>,DarkTonic.MasterAudio.MasterAudio/AudioGroupInfo,UnityEngine.Transform,System.Boolean,System.Single,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  PlaySoundResult_t3653206983 * MasterAudio_PlaySoundIfAvailable_m1383311148 (Il2CppObject * __this /* static, unused */, AudioInfo_t2191833476 * ___info, Vector3_t3525329789  ___sourcePosition, float ___volumePercentage, bool* ___forgetSoundPlayed, Nullable_1_t3844246929  ___pitch, AudioGroupInfo_t2034546871 * ___audioGroup, Transform_t284553113 * ___sourceTrans, bool ___attachToSource, float ___delaySoundTime, bool ___useVector3, bool ___makePlaySoundResult, bool ___isChaining, bool ___isSingleSubscribedPlay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::DuckSoundGroup(System.String,UnityEngine.AudioSource)
extern "C"  void MasterAudio_DuckSoundGroup_m1709016079 (Il2CppObject * __this /* static, unused */, String_t* ___soundGroupName, AudioSource_t3628549054 * ___aSource, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::StopPauseOrUnpauseSoundsOfTransform(UnityEngine.Transform,System.Collections.Generic.List`1<DarkTonic.MasterAudio.MasterAudio/AudioInfo>,DarkTonic.MasterAudio.MasterAudio/VariationCommand)
extern "C"  void MasterAudio_StopPauseOrUnpauseSoundsOfTransform_m867660268 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___trans, List_1_t2988792445 * ___varList, int32_t ___varCmd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::StopAllSoundsOfTransform(UnityEngine.Transform)
extern "C"  void MasterAudio_StopAllSoundsOfTransform_m321013967 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::StopSoundGroupOfTransform(UnityEngine.Transform,System.String)
extern "C"  void MasterAudio_StopSoundGroupOfTransform_m2742987920 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___trans, String_t* ___sType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::PauseAllSoundsOfTransform(UnityEngine.Transform)
extern "C"  void MasterAudio_PauseAllSoundsOfTransform_m1254439089 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::PauseSoundGroupOfTransform(UnityEngine.Transform,System.String)
extern "C"  void MasterAudio_PauseSoundGroupOfTransform_m1149615214 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___trans, String_t* ___sType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::UnpauseAllSoundsOfTransform(UnityEngine.Transform)
extern "C"  void MasterAudio_UnpauseAllSoundsOfTransform_m3578781322 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::UnpauseSoundGroupOfTransform(UnityEngine.Transform,System.String)
extern "C"  void MasterAudio_UnpauseSoundGroupOfTransform_m1298237813 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___trans, String_t* ___sType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::FadeOutSoundGroupOfTransform(UnityEngine.Transform,System.String,System.Single)
extern "C"  void MasterAudio_FadeOutSoundGroupOfTransform_m3409077967 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___trans, String_t* ___sType, float ___fadeTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::StopAllOfSound(System.String)
extern "C"  void MasterAudio_StopAllOfSound_m2863796909 (Il2CppObject * __this /* static, unused */, String_t* ___sType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::FadeOutAllOfSound(System.String,System.Single)
extern "C"  void MasterAudio_FadeOutAllOfSound_m787006520 (Il2CppObject * __this /* static, unused */, String_t* ___sType, float ___fadeTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::TriggerParticleEmission(UnityEngine.Transform,System.Int32)
extern "C"  void MasterAudio_TriggerParticleEmission_m2038066853 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___trans, int32_t ___particleCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.SoundGroupVariation> DarkTonic.MasterAudio.MasterAudio::GetAllPlayingVariations()
extern "C"  List_1_t846652363 * MasterAudio_GetAllPlayingVariations_m2768802748 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.GameObject> DarkTonic.MasterAudio.MasterAudio::GetAllPlayingVariationsInBus(System.String)
extern "C"  List_1_t514686775 * MasterAudio_GetAllPlayingVariationsInBus_m3654519529 (Il2CppObject * __this /* static, unused */, String_t* ___busName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::CreateGroupVariationFromClip(System.String,UnityEngine.AudioClip,System.String,System.Single,System.Single)
extern "C"  void MasterAudio_CreateGroupVariationFromClip_m2543180607 (Il2CppObject * __this /* static, unused */, String_t* ___sType, AudioClip_t3714538611 * ___clip, String_t* ___variationName, float ___volume, float ___pitch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::ChangeVariationPitch(System.String,System.Boolean,System.String,System.Single)
extern "C"  void MasterAudio_ChangeVariationPitch_m1201816725 (Il2CppObject * __this /* static, unused */, String_t* ___sType, bool ___changeAllVariations, String_t* ___variationName, float ___pitch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::ChangeVariationVolume(System.String,System.Boolean,System.String,System.Single)
extern "C"  void MasterAudio_ChangeVariationVolume_m2783417343 (Il2CppObject * __this /* static, unused */, String_t* ___sType, bool ___changeAllVariations, String_t* ___variationName, float ___volume, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::ChangeVariationClipFromResources(System.String,System.Boolean,System.String,System.String)
extern "C"  void MasterAudio_ChangeVariationClipFromResources_m53924631 (Il2CppObject * __this /* static, unused */, String_t* ___sType, bool ___changeAllVariations, String_t* ___variationName, String_t* ___resourceFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::ChangeVariationClip(System.String,System.Boolean,System.String,UnityEngine.AudioClip)
extern "C"  void MasterAudio_ChangeVariationClip_m1117820077 (Il2CppObject * __this /* static, unused */, String_t* ___sType, bool ___changeAllVariations, String_t* ___variationName, AudioClip_t3714538611 * ___clip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DarkTonic.MasterAudio.MasterAudio::GetVariationLength(System.String,System.String)
extern "C"  float MasterAudio_GetVariationLength_m2225437003 (Il2CppObject * __this /* static, unused */, String_t* ___sType, String_t* ___variationName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::RefillSoundGroupPool(System.String)
extern "C"  void MasterAudio_RefillSoundGroupPool_m3458391876 (Il2CppObject * __this /* static, unused */, String_t* ___sType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.MasterAudio::SoundGroupExists(System.String)
extern "C"  bool MasterAudio_SoundGroupExists_m4031039950 (Il2CppObject * __this /* static, unused */, String_t* ___sType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::PauseSoundGroup(System.String)
extern "C"  void MasterAudio_PauseSoundGroup_m4007003094 (Il2CppObject * __this /* static, unused */, String_t* ___sType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::SetGroupSpatialBlend(System.String)
extern "C"  void MasterAudio_SetGroupSpatialBlend_m2149479292 (Il2CppObject * __this /* static, unused */, String_t* ___sType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::RouteGroupToUnityMixerGroup(System.String,UnityEngine.Audio.AudioMixerGroup)
extern "C"  void MasterAudio_RouteGroupToUnityMixerGroup_m553666833 (MasterAudio_t1340413987 * __this, String_t* ___sType, AudioMixerGroup_t1736867953 * ___mixerGroup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::UnpauseSoundGroup(System.String)
extern "C"  void MasterAudio_UnpauseSoundGroup_m1764728303 (Il2CppObject * __this /* static, unused */, String_t* ___sType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::FadeSoundGroupToVolume(System.String,System.Single,System.Single,System.Action)
extern "C"  void MasterAudio_FadeSoundGroupToVolume_m787737350 (Il2CppObject * __this /* static, unused */, String_t* ___sType, float ___newVolume, float ___fadeTime, Action_t437523947 * ___completionCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::RemoveSoundGroup(UnityEngine.Transform)
extern "C"  void MasterAudio_RemoveSoundGroup_m2547548205 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___groupTrans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform DarkTonic.MasterAudio.MasterAudio::CreateNewSoundGroup(DarkTonic.MasterAudio.DynamicSoundGroup,System.String,System.Boolean)
extern "C"  Transform_t284553113 * MasterAudio_CreateNewSoundGroup_m1203640805 (Il2CppObject * __this /* static, unused */, DynamicSoundGroup_t2364000734 * ___aGroup, String_t* ___creatorObjectName, bool ___errorOnExisting, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DarkTonic.MasterAudio.MasterAudio::GetGroupVolume(System.String)
extern "C"  float MasterAudio_GetGroupVolume_m642875183 (Il2CppObject * __this /* static, unused */, String_t* ___sType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::SetGroupVolume(System.String,System.Single)
extern "C"  void MasterAudio_SetGroupVolume_m2318472468 (Il2CppObject * __this /* static, unused */, String_t* ___sType, float ___volumeLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::MuteGroup(System.String)
extern "C"  void MasterAudio_MuteGroup_m1014690166 (Il2CppObject * __this /* static, unused */, String_t* ___sType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::UnmuteGroup(System.String)
extern "C"  void MasterAudio_UnmuteGroup_m4164178511 (Il2CppObject * __this /* static, unused */, String_t* ___sType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::SetGroupMuteStatus(DarkTonic.MasterAudio.MasterAudioGroup,System.String,System.Boolean)
extern "C"  void MasterAudio_SetGroupMuteStatus_m1332341625 (Il2CppObject * __this /* static, unused */, MasterAudioGroup_t1025661466 * ___aGroup, String_t* ___sType, bool ___isMute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::SoloGroup(System.String)
extern "C"  void MasterAudio_SoloGroup_m2972087612 (Il2CppObject * __this /* static, unused */, String_t* ___sType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::UnsoloGroup(System.String)
extern "C"  void MasterAudio_UnsoloGroup_m1826608661 (Il2CppObject * __this /* static, unused */, String_t* ___sType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DarkTonic.MasterAudio.MasterAudioGroup DarkTonic.MasterAudio.MasterAudio::GrabGroup(System.String,System.Boolean)
extern "C"  MasterAudioGroup_t1025661466 * MasterAudio_GrabGroup_m186769141 (Il2CppObject * __this /* static, unused */, String_t* ___sType, bool ___logIfMissing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.MasterAudio/AudioInfo> DarkTonic.MasterAudio.MasterAudio::GetAllVariationsOfGroup(System.String,System.Boolean)
extern "C"  List_1_t2988792445 * MasterAudio_GetAllVariationsOfGroup_m3233576055 (Il2CppObject * __this /* static, unused */, String_t* ___sType, bool ___logIfMissing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DarkTonic.MasterAudio.MasterAudio/AudioGroupInfo DarkTonic.MasterAudio.MasterAudio::GetGroupInfo(System.String)
extern "C"  AudioGroupInfo_t2034546871 * MasterAudio_GetGroupInfo_m2019071081 (Il2CppObject * __this /* static, unused */, String_t* ___sType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::SetSpatialBlendForMixer()
extern "C"  void MasterAudio_SetSpatialBlendForMixer_m2119452469 (MasterAudio_t1340413987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::PauseMixer()
extern "C"  void MasterAudio_PauseMixer_m3515799279 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::UnpauseMixer()
extern "C"  void MasterAudio_UnpauseMixer_m1551365448 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::StopMixer()
extern "C"  void MasterAudio_StopMixer_m1196989965 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::UnsubscribeFromAllVariations()
extern "C"  void MasterAudio_UnsubscribeFromAllVariations_m2560220322 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::StopEverything()
extern "C"  void MasterAudio_StopEverything_m4171077009 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::PauseEverything()
extern "C"  void MasterAudio_PauseEverything_m1899076079 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::UnpauseEverything()
extern "C"  void MasterAudio_UnpauseEverything_m422218550 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::MuteEverything()
extern "C"  void MasterAudio_MuteEverything_m851539240 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::UnmuteEverything()
extern "C"  void MasterAudio_UnmuteEverything_m3436297985 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DarkTonic.MasterAudio.MasterAudio::GetBusIndex(System.String,System.Boolean)
extern "C"  int32_t MasterAudio_GetBusIndex_m743082839 (Il2CppObject * __this /* static, unused */, String_t* ___busName, bool ___alertMissing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DarkTonic.MasterAudio.GroupBus DarkTonic.MasterAudio.MasterAudio::GetBusByIndex(System.Int32)
extern "C"  GroupBus_t3345035600 * MasterAudio_GetBusByIndex_m2183270163 (Il2CppObject * __this /* static, unused */, int32_t ___busIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::ChangeBusPitch(System.String,System.Single)
extern "C"  void MasterAudio_ChangeBusPitch_m2070558715 (Il2CppObject * __this /* static, unused */, String_t* ___busName, float ___pitch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::MuteBus(System.String)
extern "C"  void MasterAudio_MuteBus_m1104299093 (Il2CppObject * __this /* static, unused */, String_t* ___busName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::UnmuteBus(System.String)
extern "C"  void MasterAudio_UnmuteBus_m2381317998 (Il2CppObject * __this /* static, unused */, String_t* ___busName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::ToggleMuteBus(System.String)
extern "C"  void MasterAudio_ToggleMuteBus_m1163238537 (Il2CppObject * __this /* static, unused */, String_t* ___busName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::PauseBus(System.String)
extern "C"  void MasterAudio_PauseBus_m1804564444 (Il2CppObject * __this /* static, unused */, String_t* ___busName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::SoloBus(System.String)
extern "C"  void MasterAudio_SoloBus_m3908567451 (Il2CppObject * __this /* static, unused */, String_t* ___busName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::UnsoloBus(System.String)
extern "C"  void MasterAudio_UnsoloBus_m890619060 (Il2CppObject * __this /* static, unused */, String_t* ___busName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::RouteBusToUnityMixerGroup(System.String,UnityEngine.Audio.AudioMixerGroup)
extern "C"  void MasterAudio_RouteBusToUnityMixerGroup_m4049518930 (MasterAudio_t1340413987 * __this, String_t* ___busName, AudioMixerGroup_t1736867953 * ___mixerGroup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::StopOldestSoundOnBus(DarkTonic.MasterAudio.GroupBus)
extern "C"  void MasterAudio_StopOldestSoundOnBus_m1072260445 (Il2CppObject * __this /* static, unused */, GroupBus_t3345035600 * ___bus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::StopBus(System.String)
extern "C"  void MasterAudio_StopBus_m2894377470 (Il2CppObject * __this /* static, unused */, String_t* ___busName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::UnpauseBus(System.String)
extern "C"  void MasterAudio_UnpauseBus_m2737444835 (Il2CppObject * __this /* static, unused */, String_t* ___busName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.MasterAudio::CreateBus(System.String,System.Boolean)
extern "C"  bool MasterAudio_CreateBus_m381635705 (Il2CppObject * __this /* static, unused */, String_t* ___busName, bool ___errorOnExisting, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::DeleteBusByName(System.String)
extern "C"  void MasterAudio_DeleteBusByName_m1551162437 (Il2CppObject * __this /* static, unused */, String_t* ___busName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::DeleteBus(System.Int32)
extern "C"  void MasterAudio_DeleteBus_m1910863628 (Il2CppObject * __this /* static, unused */, int32_t ___busIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DarkTonic.MasterAudio.MasterAudio::GetBusVolume(DarkTonic.MasterAudio.MasterAudioGroup)
extern "C"  float MasterAudio_GetBusVolume_m1280597944 (Il2CppObject * __this /* static, unused */, MasterAudioGroup_t1025661466 * ___maGroup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::FadeBusToVolume(System.String,System.Single,System.Single,System.Action)
extern "C"  void MasterAudio_FadeBusToVolume_m2140063556 (Il2CppObject * __this /* static, unused */, String_t* ___busName, float ___newVolume, float ___fadeTime, Action_t437523947 * ___completionCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::SetBusVolumeByName(System.String,System.Single)
extern "C"  void MasterAudio_SetBusVolumeByName_m3345413393 (Il2CppObject * __this /* static, unused */, String_t* ___busName, float ___newVolume, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::SetBusVolume(DarkTonic.MasterAudio.GroupBus,System.Single)
extern "C"  void MasterAudio_SetBusVolume_m3999229799 (Il2CppObject * __this /* static, unused */, GroupBus_t3345035600 * ___bus, float ___newVolume, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DarkTonic.MasterAudio.GroupBus DarkTonic.MasterAudio.MasterAudio::GrabBusByName(System.String)
extern "C"  GroupBus_t3345035600 * MasterAudio_GrabBusByName_m3338685883 (Il2CppObject * __this /* static, unused */, String_t* ___busName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::AddSoundGroupToDuckList(System.String,System.Single)
extern "C"  void MasterAudio_AddSoundGroupToDuckList_m2221793790 (Il2CppObject * __this /* static, unused */, String_t* ___sType, float ___riseVolumeStart, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::RemoveSoundGroupFromDuckList(System.String)
extern "C"  void MasterAudio_RemoveSoundGroupFromDuckList_m3209834865 (Il2CppObject * __this /* static, unused */, String_t* ___sType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DarkTonic.MasterAudio.MasterAudio/Playlist DarkTonic.MasterAudio.MasterAudio::GrabPlaylist(System.String,System.Boolean)
extern "C"  Playlist_t1944118770 * MasterAudio_GrabPlaylist_m3475367958 (Il2CppObject * __this /* static, unused */, String_t* ___playlistName, bool ___logErrorIfNotFound, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::ChangePlaylistPitch(System.String,System.Single,System.String)
extern "C"  void MasterAudio_ChangePlaylistPitch_m3710978879 (Il2CppObject * __this /* static, unused */, String_t* ___playlistName, float ___pitch, String_t* ___songName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::MutePlaylist()
extern "C"  void MasterAudio_MutePlaylist_m1700453767 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::MutePlaylist(System.String)
extern "C"  void MasterAudio_MutePlaylist_m105592027 (Il2CppObject * __this /* static, unused */, String_t* ___playlistControllerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::MuteAllPlaylists()
extern "C"  void MasterAudio_MuteAllPlaylists_m859529845 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::MutePlaylists(System.Collections.Generic.List`1<DarkTonic.MasterAudio.PlaylistController>)
extern "C"  void MasterAudio_MutePlaylists_m1656938691 (Il2CppObject * __this /* static, unused */, List_1_t3785441750 * ___playlists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::UnmutePlaylist()
extern "C"  void MasterAudio_UnmutePlaylist_m3665152416 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::UnmutePlaylist(System.String)
extern "C"  void MasterAudio_UnmutePlaylist_m2952296802 (Il2CppObject * __this /* static, unused */, String_t* ___playlistControllerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::UnmuteAllPlaylists()
extern "C"  void MasterAudio_UnmuteAllPlaylists_m2321586702 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::UnmutePlaylists(System.Collections.Generic.List`1<DarkTonic.MasterAudio.PlaylistController>)
extern "C"  void MasterAudio_UnmutePlaylists_m2712020828 (Il2CppObject * __this /* static, unused */, List_1_t3785441750 * ___playlists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::ToggleMutePlaylist()
extern "C"  void MasterAudio_ToggleMutePlaylist_m1787013563 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::ToggleMutePlaylist(System.String)
extern "C"  void MasterAudio_ToggleMutePlaylist_m1071308071 (Il2CppObject * __this /* static, unused */, String_t* ___playlistControllerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::ToggleMuteAllPlaylists()
extern "C"  void MasterAudio_ToggleMuteAllPlaylists_m2717578409 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::ToggleMutePlaylists(System.Collections.Generic.List`1<DarkTonic.MasterAudio.PlaylistController>)
extern "C"  void MasterAudio_ToggleMutePlaylists_m1655398135 (Il2CppObject * __this /* static, unused */, List_1_t3785441750 * ___playlists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::PausePlaylist()
extern "C"  void MasterAudio_PausePlaylist_m3712714766 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::PausePlaylist(System.String)
extern "C"  void MasterAudio_PausePlaylist_m1479810484 (Il2CppObject * __this /* static, unused */, String_t* ___playlistControllerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::PauseAllPlaylists()
extern "C"  void MasterAudio_PauseAllPlaylists_m2520084860 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::PausePlaylists(System.Collections.Generic.List`1<DarkTonic.MasterAudio.PlaylistController>)
extern "C"  void MasterAudio_PausePlaylists_m2140750026 (Il2CppObject * __this /* static, unused */, List_1_t3785441750 * ___playlists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::ResumePlaylist()
extern "C"  void MasterAudio_ResumePlaylist_m576759771 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::ResumePlaylist(System.String)
extern "C"  void MasterAudio_ResumePlaylist_m2000933639 (Il2CppObject * __this /* static, unused */, String_t* ___playlistControllerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::ResumeAllPlaylists()
extern "C"  void MasterAudio_ResumeAllPlaylists_m149676745 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::ResumePlaylists(System.Collections.Generic.List`1<DarkTonic.MasterAudio.PlaylistController>)
extern "C"  void MasterAudio_ResumePlaylists_m1272655127 (Il2CppObject * __this /* static, unused */, List_1_t3785441750 * ___controllers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::StopPlaylist()
extern "C"  void MasterAudio_StopPlaylist_m23462960 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::StopPlaylist(System.String)
extern "C"  void MasterAudio_StopPlaylist_m2608326866 (Il2CppObject * __this /* static, unused */, String_t* ___playlistControllerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::StopAllPlaylists()
extern "C"  void MasterAudio_StopAllPlaylists_m4069592222 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::StopPlaylists(System.Collections.Generic.List`1<DarkTonic.MasterAudio.PlaylistController>)
extern "C"  void MasterAudio_StopPlaylists_m2640742892 (Il2CppObject * __this /* static, unused */, List_1_t3785441750 * ___playlists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::TriggerNextPlaylistClip()
extern "C"  void MasterAudio_TriggerNextPlaylistClip_m4236435283 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::TriggerNextPlaylistClip(System.String)
extern "C"  void MasterAudio_TriggerNextPlaylistClip_m715751055 (Il2CppObject * __this /* static, unused */, String_t* ___playlistControllerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::TriggerNextClipAllPlaylists()
extern "C"  void MasterAudio_TriggerNextClipAllPlaylists_m2998974273 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::NextPlaylistClips(System.Collections.Generic.List`1<DarkTonic.MasterAudio.PlaylistController>)
extern "C"  void MasterAudio_NextPlaylistClips_m58535309 (Il2CppObject * __this /* static, unused */, List_1_t3785441750 * ___playlists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::TriggerRandomPlaylistClip()
extern "C"  void MasterAudio_TriggerRandomPlaylistClip_m4062679523 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::TriggerRandomPlaylistClip(System.String)
extern "C"  void MasterAudio_TriggerRandomPlaylistClip_m3262608895 (Il2CppObject * __this /* static, unused */, String_t* ___playlistControllerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::TriggerRandomClipAllPlaylists()
extern "C"  void MasterAudio_TriggerRandomClipAllPlaylists_m178889169 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::RandomPlaylistClips(System.Collections.Generic.List`1<DarkTonic.MasterAudio.PlaylistController>)
extern "C"  void MasterAudio_RandomPlaylistClips_m91406493 (Il2CppObject * __this /* static, unused */, List_1_t3785441750 * ___playlists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::RestartPlaylist()
extern "C"  void MasterAudio_RestartPlaylist_m200294311 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::RestartPlaylist(System.String)
extern "C"  void MasterAudio_RestartPlaylist_m2629715643 (Il2CppObject * __this /* static, unused */, String_t* ___playlistControllerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::RestartAllPlaylists()
extern "C"  void MasterAudio_RestartAllPlaylists_m3994203285 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::RestartPlaylists(System.Collections.Generic.List`1<DarkTonic.MasterAudio.PlaylistController>)
extern "C"  void MasterAudio_RestartPlaylists_m3491042019 (Il2CppObject * __this /* static, unused */, List_1_t3785441750 * ___playlists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::StartPlaylist(System.String)
extern "C"  void MasterAudio_StartPlaylist_m2258109896 (Il2CppObject * __this /* static, unused */, String_t* ___playlistName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::StartPlaylist(System.String,System.String)
extern "C"  void MasterAudio_StartPlaylist_m2844749828 (Il2CppObject * __this /* static, unused */, String_t* ___playlistControllerName, String_t* ___playlistName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::QueuePlaylistClip(System.String)
extern "C"  void MasterAudio_QueuePlaylistClip_m2855791305 (Il2CppObject * __this /* static, unused */, String_t* ___clipName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::QueuePlaylistClip(System.String,System.String)
extern "C"  void MasterAudio_QueuePlaylistClip_m718667589 (Il2CppObject * __this /* static, unused */, String_t* ___playlistControllerName, String_t* ___clipName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.MasterAudio::TriggerPlaylistClip(System.String)
extern "C"  bool MasterAudio_TriggerPlaylistClip_m2853489870 (Il2CppObject * __this /* static, unused */, String_t* ___clipName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.MasterAudio::TriggerPlaylistClip(System.String,System.String)
extern "C"  bool MasterAudio_TriggerPlaylistClip_m2932372618 (Il2CppObject * __this /* static, unused */, String_t* ___playlistControllerName, String_t* ___clipName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::ChangePlaylistByName(System.String,System.Boolean)
extern "C"  void MasterAudio_ChangePlaylistByName_m966268219 (Il2CppObject * __this /* static, unused */, String_t* ___playlistName, bool ___playFirstClip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::ChangePlaylistByName(System.String,System.String,System.Boolean)
extern "C"  void MasterAudio_ChangePlaylistByName_m1754073343 (Il2CppObject * __this /* static, unused */, String_t* ___playlistControllerName, String_t* ___playlistName, bool ___playFirstClip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::FadePlaylistToVolume(System.Single,System.Single)
extern "C"  void MasterAudio_FadePlaylistToVolume_m2344605809 (Il2CppObject * __this /* static, unused */, float ___targetVolume, float ___fadeTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::FadePlaylistToVolume(System.String,System.Single,System.Single)
extern "C"  void MasterAudio_FadePlaylistToVolume_m767692397 (Il2CppObject * __this /* static, unused */, String_t* ___playlistControllerName, float ___targetVolume, float ___fadeTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::FadeAllPlaylistsToVolume(System.Single,System.Single)
extern "C"  void MasterAudio_FadeAllPlaylistsToVolume_m3417880131 (Il2CppObject * __this /* static, unused */, float ___targetVolume, float ___fadeTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::FadePlaylists(System.Collections.Generic.List`1<DarkTonic.MasterAudio.PlaylistController>,System.Single,System.Single)
extern "C"  void MasterAudio_FadePlaylists_m317783280 (Il2CppObject * __this /* static, unused */, List_1_t3785441750 * ___playlists, float ___targetVolume, float ___fadeTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::CreatePlaylist(DarkTonic.MasterAudio.MasterAudio/Playlist,System.Boolean)
extern "C"  void MasterAudio_CreatePlaylist_m191941457 (Il2CppObject * __this /* static, unused */, Playlist_t1944118770 * ___playlist, bool ___errorOnDuplicate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::DeletePlaylist(System.String)
extern "C"  void MasterAudio_DeletePlaylist_m594200521 (Il2CppObject * __this /* static, unused */, String_t* ___playlistName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::AddSongToPlaylist(System.String,UnityEngine.AudioClip,System.Boolean,System.Single,System.Single)
extern "C"  void MasterAudio_AddSongToPlaylist_m881788881 (Il2CppObject * __this /* static, unused */, String_t* ___playlistName, AudioClip_t3714538611 * ___song, bool ___loopSong, float ___songPitch, float ___songVolume, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DarkTonic.MasterAudio.MasterAudio::get_PlaylistMasterVolume()
extern "C"  float MasterAudio_get_PlaylistMasterVolume_m1383335431 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::set_PlaylistMasterVolume(System.Single)
extern "C"  void MasterAudio_set_PlaylistMasterVolume_m397846596 (Il2CppObject * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::ReDownloadAllInternetFiles()
extern "C"  void MasterAudio_ReDownloadAllInternetFiles_m1952435084 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::AddCustomEventReceiver(DarkTonic.MasterAudio.ICustomEventReceiver,UnityEngine.Transform)
extern "C"  void MasterAudio_AddCustomEventReceiver_m3543242122 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___receiver, Transform_t284553113 * ___receiverTrans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::RemoveCustomEventReceiver(DarkTonic.MasterAudio.ICustomEventReceiver)
extern "C"  void MasterAudio_RemoveCustomEventReceiver_m3250366394 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___receiver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Transform> DarkTonic.MasterAudio.MasterAudio::ReceiversForEvent(System.String)
extern "C"  List_1_t1081512082 * MasterAudio_ReceiversForEvent_m496660945 (Il2CppObject * __this /* static, unused */, String_t* ___customEventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::CreateCustomEvent(System.String,DarkTonic.MasterAudio.MasterAudio/CustomEventReceiveMode,System.Single,System.Boolean)
extern "C"  void MasterAudio_CreateCustomEvent_m1369371722 (Il2CppObject * __this /* static, unused */, String_t* ___customEventName, int32_t ___eventReceiveMode, float ___distanceThreshold, bool ___errorOnDuplicate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::DeleteCustomEvent(System.String)
extern "C"  void MasterAudio_DeleteCustomEvent_m699850846 (Il2CppObject * __this /* static, unused */, String_t* ___customEventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DarkTonic.MasterAudio.CustomEvent DarkTonic.MasterAudio.MasterAudio::GetCustomEventByName(System.String)
extern "C"  CustomEvent_t2640437048 * MasterAudio_GetCustomEventByName_m419586060 (Il2CppObject * __this /* static, unused */, String_t* ___customEventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::FireCustomEvent(System.String,UnityEngine.Vector3)
extern "C"  void MasterAudio_FireCustomEvent_m4079182588 (Il2CppObject * __this /* static, unused */, String_t* ___customEventName, Vector3_t3525329789  ___originPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.MasterAudio::CustomEventExists(System.String)
extern "C"  bool MasterAudio_CustomEventExists_m3907429859 (Il2CppObject * __this /* static, unused */, String_t* ___customEventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.MasterAudio::LoggingEnabledForGroup(DarkTonic.MasterAudio.MasterAudioGroup)
extern "C"  bool MasterAudio_LoggingEnabledForGroup_m4009788740 (Il2CppObject * __this /* static, unused */, MasterAudioGroup_t1025661466 * ___grp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::LogMessage(System.String)
extern "C"  void MasterAudio_LogMessage_m1601181187 (Il2CppObject * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.MasterAudio::get_LogSoundsEnabled()
extern "C"  bool MasterAudio_get_LogSoundsEnabled_m1725026250 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::set_LogSoundsEnabled(System.Boolean)
extern "C"  void MasterAudio_set_LogSoundsEnabled_m949829993 (Il2CppObject * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::LogWarning(System.String)
extern "C"  void MasterAudio_LogWarning_m2661788110 (Il2CppObject * __this /* static, unused */, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::LogError(System.String)
extern "C"  void MasterAudio_LogError_m3592134690 (Il2CppObject * __this /* static, unused */, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::LogNoPlaylist(System.String,System.String)
extern "C"  void MasterAudio_LogNoPlaylist_m2526934561 (Il2CppObject * __this /* static, unused */, String_t* ___playlistControllerName, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.MasterAudio::IsOkToCallOnlyPlaylistMethod(System.Collections.Generic.List`1<DarkTonic.MasterAudio.PlaylistController>,System.String)
extern "C"  bool MasterAudio_IsOkToCallOnlyPlaylistMethod_m1468539367 (Il2CppObject * __this /* static, unused */, List_1_t3785441750 * ___pcs, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform DarkTonic.MasterAudio.MasterAudio::get_AudioListenerTransform()
extern "C"  Transform_t284553113 * MasterAudio_get_AudioListenerTransform_m4070269449 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DarkTonic.MasterAudio.PlaylistController DarkTonic.MasterAudio.MasterAudio::get_OnlyPlaylistController()
extern "C"  PlaylistController_t2988482781 * MasterAudio_get_OnlyPlaylistController_m3502124481 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.MasterAudio::get_IsWarming()
extern "C"  bool MasterAudio_get_IsWarming_m2731619428 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.MasterAudio::get_MixerMuted()
extern "C"  bool MasterAudio_get_MixerMuted_m1270712307 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::set_MixerMuted(System.Boolean)
extern "C"  void MasterAudio_set_MixerMuted_m3143785426 (Il2CppObject * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.MasterAudio::get_PlaylistsMuted()
extern "C"  bool MasterAudio_get_PlaylistsMuted_m1379332123 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::set_PlaylistsMuted(System.Boolean)
extern "C"  void MasterAudio_set_PlaylistsMuted_m2396277242 (Il2CppObject * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.MasterAudio::get_EnableMusicDucking()
extern "C"  bool MasterAudio_get_EnableMusicDucking_m4114738072 (MasterAudio_t1340413987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::set_EnableMusicDucking(System.Boolean)
extern "C"  void MasterAudio_set_EnableMusicDucking_m3558789815 (MasterAudio_t1340413987 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DarkTonic.MasterAudio.MasterAudio::get_DuckedVolumeMultiplier()
extern "C"  float MasterAudio_get_DuckedVolumeMultiplier_m895734636 (MasterAudio_t1340413987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::set_DuckedVolumeMultiplier(System.Single)
extern "C"  void MasterAudio_set_DuckedVolumeMultiplier_m3194435327 (MasterAudio_t1340413987 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DarkTonic.MasterAudio.MasterAudio::get_MasterCrossFadeTime()
extern "C"  float MasterAudio_get_MasterCrossFadeTime_m3534744400 (MasterAudio_t1340413987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.MasterAudio/Playlist> DarkTonic.MasterAudio.MasterAudio::get_MusicPlaylists()
extern "C"  List_1_t2741077739 * MasterAudio_get_MusicPlaylists_m4039090448 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.GroupBus> DarkTonic.MasterAudio.MasterAudio::get_GroupBuses()
extern "C"  List_1_t4141994569 * MasterAudio_get_GroupBuses_m471019151 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> DarkTonic.MasterAudio.MasterAudio::get_RuntimeSoundGroupNames()
extern "C"  List_1_t1765447871 * MasterAudio_get_RuntimeSoundGroupNames_m857796148 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> DarkTonic.MasterAudio.MasterAudio::get_RuntimeBusNames()
extern "C"  List_1_t1765447871 * MasterAudio_get_RuntimeBusNames_m165994318 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DarkTonic.MasterAudio.MasterAudio DarkTonic.MasterAudio.MasterAudio::get_SafeInstance()
extern "C"  MasterAudio_t1340413987 * MasterAudio_get_SafeInstance_m1420160919 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DarkTonic.MasterAudio.MasterAudio DarkTonic.MasterAudio.MasterAudio::get_Instance()
extern "C"  MasterAudio_t1340413987 * MasterAudio_get_Instance_m4223117866 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::set_Instance(DarkTonic.MasterAudio.MasterAudio)
extern "C"  void MasterAudio_set_Instance_m2681277441 (Il2CppObject * __this /* static, unused */, MasterAudio_t1340413987 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.MasterAudio::get_SoundsReady()
extern "C"  bool MasterAudio_get_SoundsReady_m3279617392 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.MasterAudio::get_AppIsShuttingDown()
extern "C"  bool MasterAudio_get_AppIsShuttingDown_m1341008352 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::set_AppIsShuttingDown(System.Boolean)
extern "C"  void MasterAudio_set_AppIsShuttingDown_m1105307311 (Il2CppObject * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> DarkTonic.MasterAudio.MasterAudio::get_GroupNames()
extern "C"  List_1_t1765447871 * MasterAudio_get_GroupNames_m2341505277 (MasterAudio_t1340413987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> DarkTonic.MasterAudio.MasterAudio::get_BusNames()
extern "C"  List_1_t1765447871 * MasterAudio_get_BusNames_m3162971804 (MasterAudio_t1340413987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> DarkTonic.MasterAudio.MasterAudio::get_PlaylistNames()
extern "C"  List_1_t1765447871 * MasterAudio_get_PlaylistNames_m310158596 (MasterAudio_t1340413987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform DarkTonic.MasterAudio.MasterAudio::get_Trans()
extern "C"  Transform_t284553113 * MasterAudio_get_Trans_m994878275 (MasterAudio_t1340413987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.MasterAudio::get_ShouldShowUnityAudioMixerGroupAssignments()
extern "C"  bool MasterAudio_get_ShouldShowUnityAudioMixerGroupAssignments_m1998036944 (MasterAudio_t1340413987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> DarkTonic.MasterAudio.MasterAudio::get_CustomEventNames()
extern "C"  List_1_t1765447871 * MasterAudio_get_CustomEventNames_m3922777171 (MasterAudio_t1340413987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DarkTonic.MasterAudio.MasterAudio::get_MasterVolumeLevel()
extern "C"  float MasterAudio_get_MasterVolumeLevel_m62890321 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::set_MasterVolumeLevel(System.Single)
extern "C"  void MasterAudio_set_MasterVolumeLevel_m1801120442 (Il2CppObject * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.MasterAudio::get_SceneHasMasterAudio()
extern "C"  bool MasterAudio_get_SceneHasMasterAudio_m189189175 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.MasterAudio::get_IgnoreTimeScale()
extern "C"  bool MasterAudio_get_IgnoreTimeScale_m650953852 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.YieldInstruction DarkTonic.MasterAudio.MasterAudio::get_InnerLoopDelay()
extern "C"  YieldInstruction_t3557331758 * MasterAudio_get_InnerLoopDelay_m3605104937 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SystemLanguage DarkTonic.MasterAudio.MasterAudio::get_DynamicLanguage()
extern "C"  int32_t MasterAudio_get_DynamicLanguage_m434776915 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::set_DynamicLanguage(UnityEngine.SystemLanguage)
extern "C"  void MasterAudio_set_DynamicLanguage_m3948429858 (Il2CppObject * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.MasterAudio::get_UseDbScaleForVolume()
extern "C"  bool MasterAudio_get_UseDbScaleForVolume_m2631620047 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::set_UseDbScaleForVolume(System.Boolean)
extern "C"  void MasterAudio_set_UseDbScaleForVolume_m3591982686 (Il2CppObject * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.MasterAudio::get_UseCentsForPitch()
extern "C"  bool MasterAudio_get_UseCentsForPitch_m1275006316 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::set_UseCentsForPitch(System.Boolean)
extern "C"  void MasterAudio_set_UseCentsForPitch_m808778635 (Il2CppObject * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.MasterAudio::get_HideLogoNav()
extern "C"  bool MasterAudio_get_HideLogoNav_m3168931015 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::set_HideLogoNav(System.Boolean)
extern "C"  void MasterAudio_set_HideLogoNav_m3904064342 (Il2CppObject * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DarkTonic.MasterAudio.MasterAudio::get_ReprioritizeTime()
extern "C"  float MasterAudio_get_ReprioritizeTime_m757638872 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.MasterAudio::HasAsyncResourceLoaderFeature()
extern "C"  bool MasterAudio_HasAsyncResourceLoaderFeature_m1723439661 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DarkTonic.MasterAudio.MasterAudio::get_ProspectiveMAPath()
extern "C"  String_t* MasterAudio_get_ProspectiveMAPath_m1322809989 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::set_ProspectiveMAPath(System.String)
extern "C"  void MasterAudio_set_ProspectiveMAPath_m2678327444 (Il2CppObject * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DarkTonic.MasterAudio.MasterAudio::get_MasterAudioFolderPath()
extern "C"  String_t* MasterAudio_get_MasterAudioFolderPath_m3624140615 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.MasterAudio::set_MasterAudioFolderPath(System.String)
extern "C"  void MasterAudio_set_MasterAudioFolderPath_m835779474 (Il2CppObject * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DarkTonic.MasterAudio.MasterAudio::get_GroupTemplateFolder()
extern "C"  String_t* MasterAudio_get_GroupTemplateFolder_m1548260743 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DarkTonic.MasterAudio.MasterAudio::get_AudioSourceTemplateFolder()
extern "C"  String_t* MasterAudio_get_AudioSourceTemplateFolder_m2338615129 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject DarkTonic.MasterAudio.MasterAudio::CreateMasterAudio()
extern "C"  GameObject_t4012695102 * MasterAudio_CreateMasterAudio_m1081103507 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject DarkTonic.MasterAudio.MasterAudio::CreatePlaylistController()
extern "C"  GameObject_t4012695102 * MasterAudio_CreatePlaylistController_m1189448913 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject DarkTonic.MasterAudio.MasterAudio::CreateDynamicSoundGroupCreator()
extern "C"  GameObject_t4012695102 * MasterAudio_CreateDynamicSoundGroupCreator_m2116460896 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject DarkTonic.MasterAudio.MasterAudio::CreateSoundGroupOrganizer()
extern "C"  GameObject_t4012695102 * MasterAudio_CreateSoundGroupOrganizer_m3644640158 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.MasterAudio::<PerformBusFades>m__0(DarkTonic.MasterAudio.BusFadeInfo)
extern "C"  bool MasterAudio_U3CPerformBusFadesU3Em__0_m3503543898 (Il2CppObject * __this /* static, unused */, BusFadeInfo_t1807932793 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.MasterAudio::<PerformGroupFades>m__1(DarkTonic.MasterAudio.GroupFadeInfo)
extern "C"  bool MasterAudio_U3CPerformGroupFadesU3Em__1_m1863868987 (Il2CppObject * __this /* static, unused */, GroupFadeInfo_t1855680120 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
