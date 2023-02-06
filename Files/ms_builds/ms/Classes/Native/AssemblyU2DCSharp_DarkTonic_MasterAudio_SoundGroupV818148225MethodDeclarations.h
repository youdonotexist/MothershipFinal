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

// DarkTonic.MasterAudio.SoundGroupVariation/PlaySoundParams
struct PlaySoundParams_t818148225;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t284553113;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Nullable_1_gen3844246929.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"

// System.Void DarkTonic.MasterAudio.SoundGroupVariation/PlaySoundParams::.ctor(System.String,System.Single,System.Single,System.Nullable`1<System.Single>,UnityEngine.Transform,System.Boolean,System.Single,System.Boolean,System.Boolean)
extern "C"  void PlaySoundParams__ctor_m1801363532 (PlaySoundParams_t818148225 * __this, String_t* ___soundType, float ___volPercent, float ___groupCalcVolume, Nullable_1_t3844246929  ___pitch, Transform_t284553113 * ___sourceTrans, bool ___attach, float ___delaySoundTime, bool ___isChainLoop, bool ___isSingleSubscribedPlay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
