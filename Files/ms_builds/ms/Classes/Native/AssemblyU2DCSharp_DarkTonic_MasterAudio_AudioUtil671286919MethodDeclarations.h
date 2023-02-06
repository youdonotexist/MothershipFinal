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

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioSource3628549054.h"
#include "UnityEngine_UnityEngine_AudioClip3714538611.h"

// System.Single DarkTonic.MasterAudio.AudioUtil::FrameTime()
extern "C"  float AudioUtil_FrameTime_m3331654440 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DarkTonic.MasterAudio.AudioUtil::GetSemitonesFromPitch(System.Single)
extern "C"  float AudioUtil_GetSemitonesFromPitch_m2162048164 (Il2CppObject * __this /* static, unused */, float ___pitch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DarkTonic.MasterAudio.AudioUtil::GetPitchFromSemitones(System.Single)
extern "C"  float AudioUtil_GetPitchFromSemitones_m4158513566 (Il2CppObject * __this /* static, unused */, float ___semitones, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DarkTonic.MasterAudio.AudioUtil::GetDbFromFloatVolume(System.Single)
extern "C"  float AudioUtil_GetDbFromFloatVolume_m934535583 (Il2CppObject * __this /* static, unused */, float ___vol, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DarkTonic.MasterAudio.AudioUtil::GetFloatVolumeFromDb(System.Single)
extern "C"  float AudioUtil_GetFloatVolumeFromDb_m1921198031 (Il2CppObject * __this /* static, unused */, float ___db, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DarkTonic.MasterAudio.AudioUtil::GetAudioPlayedPercentage(UnityEngine.AudioSource)
extern "C"  float AudioUtil_GetAudioPlayedPercentage_m2699329335 (Il2CppObject * __this /* static, unused */, AudioSource_t3628549054 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.AudioUtil::IsAudioPaused(UnityEngine.AudioSource)
extern "C"  bool AudioUtil_IsAudioPaused_m1738556392 (Il2CppObject * __this /* static, unused */, AudioSource_t3628549054 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.AudioUtil::IsClipReadyToPlay(UnityEngine.AudioClip)
extern "C"  bool AudioUtil_IsClipReadyToPlay_m2377305045 (Il2CppObject * __this /* static, unused */, AudioClip_t3714538611 * ___clip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
