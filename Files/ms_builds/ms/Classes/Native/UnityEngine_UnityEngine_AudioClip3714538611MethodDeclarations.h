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

// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// System.String
struct String_t;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t749510018;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t2977871350;
// System.Single[]
struct SingleU5BU5D_t1219431280;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioClipLoadType1811161043.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallback749510018.h"
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCa2977871350.h"

// System.Single UnityEngine.AudioClip::get_length()
extern "C"  float AudioClip_get_length_m1976537364 (AudioClip_t3714538611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AudioClip::get_frequency()
extern "C"  int32_t AudioClip_get_frequency_m3651052548 (AudioClip_t3714538611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClipLoadType UnityEngine.AudioClip::get_loadType()
extern "C"  int32_t AudioClip_get_loadType_m304759318 (AudioClip_t3714538611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.AudioClip::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean,UnityEngine.AudioClip/PCMReaderCallback,UnityEngine.AudioClip/PCMSetPositionCallback)
extern "C"  AudioClip_t3714538611 * AudioClip_Create_m1635594760 (Il2CppObject * __this /* static, unused */, String_t* ___name, int32_t ___lengthSamples, int32_t ___channels, int32_t ___frequency, bool ____3D, bool ___stream, PCMReaderCallback_t749510018 * ___pcmreadercallback, PCMSetPositionCallback_t2977871350 * ___pcmsetpositioncallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.AudioClip::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.AudioClip/PCMReaderCallback,UnityEngine.AudioClip/PCMSetPositionCallback)
extern "C"  AudioClip_t3714538611 * AudioClip_Create_m3999204423 (Il2CppObject * __this /* static, unused */, String_t* ___name, int32_t ___lengthSamples, int32_t ___channels, int32_t ___frequency, bool ___stream, PCMReaderCallback_t749510018 * ___pcmreadercallback, PCMSetPositionCallback_t2977871350 * ___pcmsetpositioncallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
extern "C"  void AudioClip_InvokePCMReaderCallback_Internal_m963695910 (AudioClip_t3714538611 * __this, SingleU5BU5D_t1219431280* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
extern "C"  void AudioClip_InvokePCMSetPositionCallback_Internal_m194702160 (AudioClip_t3714538611 * __this, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.AudioClip::Construct_Internal()
extern "C"  AudioClip_t3714538611 * AudioClip_Construct_Internal_m4167029778 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip::Init_Internal(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  void AudioClip_Init_Internal_m3875816683 (AudioClip_t3714538611 * __this, String_t* ___name, int32_t ___lengthSamples, int32_t ___channels, int32_t ___frequency, bool ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
