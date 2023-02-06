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

// UnityEngine.Animation
struct Animation_t350396337;
// UnityEngine.AnimationClip
struct AnimationClip_t57566497;
// System.String
struct String_t;
// UnityEngine.AnimationState
struct AnimationState_t3357637594;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Animation350396337.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_PlayMode3466086244.h"

// UnityEngine.AnimationClip UnityEngine.Animation::get_clip()
extern "C"  AnimationClip_t57566497 * Animation_get_clip_m980560434 (Animation_t350396337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::Sample()
extern "C"  void Animation_Sample_m2214901881 (Animation_t350396337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::INTERNAL_CALL_Sample(UnityEngine.Animation)
extern "C"  void Animation_INTERNAL_CALL_Sample_m579220077 (Il2CppObject * __this /* static, unused */, Animation_t350396337 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::get_isPlaying()
extern "C"  bool Animation_get_isPlaying_m3295833780 (Animation_t350396337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::IsPlaying(System.String)
extern "C"  bool Animation_IsPlaying_m1471515685 (Animation_t350396337 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::get_Item(System.String)
extern "C"  AnimationState_t3357637594 * Animation_get_Item_m2669576386 (Animation_t350396337 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play()
extern "C"  bool Animation_Play_m4273654237 (Animation_t350396337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
extern "C"  bool Animation_Play_m2860559471 (Animation_t350396337 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(System.String,UnityEngine.PlayMode)
extern "C"  bool Animation_Play_m1881292147 (Animation_t350396337 * __this, String_t* ___animation, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(System.String)
extern "C"  bool Animation_Play_m900498501 (Animation_t350396337 * __this, String_t* ___animation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single,UnityEngine.PlayMode)
extern "C"  void Animation_CrossFade_m216828000 (Animation_t350396337 * __this, String_t* ___animation, float ___fadeLength, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::CrossFade(System.String)
extern "C"  void Animation_CrossFade_m1762644371 (Animation_t350396337 * __this, String_t* ___animation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
extern "C"  bool Animation_PlayDefaultAnimation_m170678930 (Animation_t350396337 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
extern "C"  Il2CppObject * Animation_GetEnumerator_m3015582503 (Animation_t350396337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetState(System.String)
extern "C"  AnimationState_t3357637594 * Animation_GetState_m528810595 (Animation_t350396337 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
extern "C"  AnimationState_t3357637594 * Animation_GetStateAtIndex_m513456147 (Animation_t350396337 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animation::GetStateCount()
extern "C"  int32_t Animation_GetStateCount_m3537607527 (Animation_t350396337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
