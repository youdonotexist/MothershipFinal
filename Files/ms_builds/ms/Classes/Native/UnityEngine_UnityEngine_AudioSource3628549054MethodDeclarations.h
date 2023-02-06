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

// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.Audio.AudioMixerGroup
struct AudioMixerGroup_t1736867953;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioClip3714538611.h"
#include "UnityEngine_UnityEngine_Audio_AudioMixerGroup1736867953.h"
#include "UnityEngine_UnityEngine_AudioSource3628549054.h"
#include "UnityEngine_UnityEngine_AudioRolloffMode3071838028.h"

// System.Single UnityEngine.AudioSource::get_volume()
extern "C"  float AudioSource_get_volume_m2334326995 (AudioSource_t3628549054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C"  void AudioSource_set_volume_m1410546616 (AudioSource_t3628549054 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AudioSource::get_pitch()
extern "C"  float AudioSource_get_pitch_m3729473033 (AudioSource_t3628549054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
extern "C"  void AudioSource_set_pitch_m1518407234 (AudioSource_t3628549054 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AudioSource::get_time()
extern "C"  float AudioSource_get_time_m4113938886 (AudioSource_t3628549054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_time(System.Single)
extern "C"  void AudioSource_set_time_m264562085 (AudioSource_t3628549054 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AudioSource::get_timeSamples()
extern "C"  int32_t AudioSource_get_timeSamples_m1590595257 (AudioSource_t3628549054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_timeSamples(System.Int32)
extern "C"  void AudioSource_set_timeSamples_m3782237206 (AudioSource_t3628549054 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
extern "C"  AudioClip_t3714538611 * AudioSource_get_clip_m2410835857 (AudioSource_t3628549054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C"  void AudioSource_set_clip_m19502010 (AudioSource_t3628549054 * __this, AudioClip_t3714538611 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_outputAudioMixerGroup(UnityEngine.Audio.AudioMixerGroup)
extern "C"  void AudioSource_set_outputAudioMixerGroup_m1793738433 (AudioSource_t3628549054 * __this, AudioMixerGroup_t1736867953 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
extern "C"  void AudioSource_Play_m3374467819 (AudioSource_t3628549054 * __this, uint64_t ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m1360558992 (AudioSource_t3628549054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayScheduled(System.Double)
extern "C"  void AudioSource_PlayScheduled_m2227094787 (AudioSource_t3628549054 * __this, double ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Stop()
extern "C"  void AudioSource_Stop_m1454243038 (AudioSource_t3628549054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Pause()
extern "C"  void AudioSource_Pause_m3226052732 (AudioSource_t3628549054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_Pause(UnityEngine.AudioSource)
extern "C"  void AudioSource_INTERNAL_CALL_Pause_m3343215099 (Il2CppObject * __this /* static, unused */, AudioSource_t3628549054 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
extern "C"  bool AudioSource_get_isPlaying_m4213444423 (AudioSource_t3628549054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C"  void AudioSource_PlayOneShot_m823779350 (AudioSource_t3628549054 * __this, AudioClip_t3714538611 * ___clip, float ___volumeScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AudioSource::get_loop()
extern "C"  bool AudioSource_get_loop_m2834966979 (AudioSource_t3628549054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
extern "C"  void AudioSource_set_loop_m3617666708 (AudioSource_t3628549054 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AudioSource::get_playOnAwake()
extern "C"  bool AudioSource_get_playOnAwake_m1152519349 (AudioSource_t3628549054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_spatialBlend(System.Single)
extern "C"  void AudioSource_set_spatialBlend_m2546548421 (AudioSource_t3628549054 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_priority(System.Int32)
extern "C"  void AudioSource_set_priority_m3031232686 (AudioSource_t3628549054 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_mute(System.Boolean)
extern "C"  void AudioSource_set_mute_m4040046601 (AudioSource_t3628549054 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AudioSource::get_minDistance()
extern "C"  float AudioSource_get_minDistance_m2837805936 (AudioSource_t3628549054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AudioSource::get_maxDistance()
extern "C"  float AudioSource_get_maxDistance_m1015499778 (AudioSource_t3628549054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioRolloffMode UnityEngine.AudioSource::get_rolloffMode()
extern "C"  int32_t AudioSource_get_rolloffMode_m1560926763 (AudioSource_t3628549054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
