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

// DarkTonic.MasterAudio.SoundGroupVariationUpdater
struct SoundGroupVariationUpdater_t767605717;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// DarkTonic.MasterAudio.MasterAudioGroup
struct MasterAudioGroup_t1025661466;
// DarkTonic.MasterAudio.SoundGroupVariation
struct SoundGroupVariation_t49693394;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"

// System.Void DarkTonic.MasterAudio.SoundGroupVariationUpdater::.ctor()
extern "C"  void SoundGroupVariationUpdater__ctor_m2106364036 (SoundGroupVariationUpdater_t767605717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariationUpdater::FadeOverTimeToVolume(System.Single,System.Single)
extern "C"  void SoundGroupVariationUpdater_FadeOverTimeToVolume_m3318838110 (SoundGroupVariationUpdater_t767605717 * __this, float ___targetVolume, float ___fadeTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariationUpdater::FadeOutEarly(System.Single)
extern "C"  void SoundGroupVariationUpdater_FadeOutEarly_m2424813818 (SoundGroupVariationUpdater_t767605717 * __this, float ___fadeTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariationUpdater::FadeInOut()
extern "C"  void SoundGroupVariationUpdater_FadeInOut_m2260074671 (SoundGroupVariationUpdater_t767605717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariationUpdater::FollowObject(System.Boolean,UnityEngine.Transform,System.Boolean)
extern "C"  void SoundGroupVariationUpdater_FollowObject_m2591124351 (SoundGroupVariationUpdater_t767605717 * __this, bool ___follow, Transform_t284553113 * ___objToFollow, bool ___clipAgePriority, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariationUpdater::WaitForSoundFinish(System.Single)
extern "C"  void SoundGroupVariationUpdater_WaitForSoundFinish_m2606239517 (SoundGroupVariationUpdater_t767605717 * __this, float ___delaySound, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariationUpdater::StopFading()
extern "C"  void SoundGroupVariationUpdater_StopFading_m3673666843 (SoundGroupVariationUpdater_t767605717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariationUpdater::StopWaitingForFinish()
extern "C"  void SoundGroupVariationUpdater_StopWaitingForFinish_m932446481 (SoundGroupVariationUpdater_t767605717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariationUpdater::StopFollowing()
extern "C"  void SoundGroupVariationUpdater_StopFollowing_m162546065 (SoundGroupVariationUpdater_t767605717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariationUpdater::DisableIfFinished()
extern "C"  void SoundGroupVariationUpdater_DisableIfFinished_m1683733529 (SoundGroupVariationUpdater_t767605717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariationUpdater::UpdateAudioLocationAndPriority(System.Boolean)
extern "C"  void SoundGroupVariationUpdater_UpdateAudioLocationAndPriority_m192452304 (SoundGroupVariationUpdater_t767605717 * __this, bool ___rePrioritize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariationUpdater::PlaySoundAndWait()
extern "C"  void SoundGroupVariationUpdater_PlaySoundAndWait_m1978026673 (SoundGroupVariationUpdater_t767605717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariationUpdater::StopOrChain()
extern "C"  void SoundGroupVariationUpdater_StopOrChain_m3426947614 (SoundGroupVariationUpdater_t767605717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariationUpdater::MaybeChain()
extern "C"  void SoundGroupVariationUpdater_MaybeChain_m1990124025 (SoundGroupVariationUpdater_t767605717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariationUpdater::PerformFading()
extern "C"  void SoundGroupVariationUpdater_PerformFading_m403257628 (SoundGroupVariationUpdater_t767605717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariationUpdater::OnEnable()
extern "C"  void SoundGroupVariationUpdater_OnEnable_m3290380418 (SoundGroupVariationUpdater_t767605717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariationUpdater::LateUpdate()
extern "C"  void SoundGroupVariationUpdater_LateUpdate_m769813583 (SoundGroupVariationUpdater_t767605717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform DarkTonic.MasterAudio.SoundGroupVariationUpdater::get_Trans()
extern "C"  Transform_t284553113 * SoundGroupVariationUpdater_get_Trans_m2344540739 (SoundGroupVariationUpdater_t767605717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource DarkTonic.MasterAudio.SoundGroupVariationUpdater::get_VarAudio()
extern "C"  AudioSource_t3628549054 * SoundGroupVariationUpdater_get_VarAudio_m232637265 (SoundGroupVariationUpdater_t767605717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DarkTonic.MasterAudio.MasterAudioGroup DarkTonic.MasterAudio.SoundGroupVariationUpdater::get_ParentGroup()
extern "C"  MasterAudioGroup_t1025661466 * SoundGroupVariationUpdater_get_ParentGroup_m381871181 (SoundGroupVariationUpdater_t767605717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DarkTonic.MasterAudio.SoundGroupVariation DarkTonic.MasterAudio.SoundGroupVariationUpdater::get_GrpVariation()
extern "C"  SoundGroupVariation_t49693394 * SoundGroupVariationUpdater_get_GrpVariation_m2365627544 (SoundGroupVariationUpdater_t767605717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
