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

// exSpriteAnimation
struct exSpriteAnimation_t1937626380;
// exSpriteAnimState
struct exSpriteAnimState_t1924689544;
// exAtlas
struct exAtlas_t2942648216;
// System.String
struct String_t;
// exSpriteAnimClip/FrameInfo
struct FrameInfo_t2548769691;
// exSpriteAnimClip
struct exSpriteAnimClip_t892886649;

#include "codegen/il2cpp-codegen.h"
#include "ex2D_Runtime_exSpriteAnimState1924689544.h"
#include "ex2D_Runtime_exAtlas2942648216.h"
#include "mscorlib_System_String968488902.h"
#include "ex2D_Runtime_exSpriteAnimClip892886649.h"

// System.Void exSpriteAnimation::.ctor()
extern "C"  void exSpriteAnimation__ctor_m2716729662 (exSpriteAnimation_t1937626380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteAnimation::Init()
extern "C"  void exSpriteAnimation_Init_m454815062 (exSpriteAnimation_t1937626380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteAnimation::Awake()
extern "C"  void exSpriteAnimation_Awake_m2954334881 (exSpriteAnimation_t1937626380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteAnimation::Update()
extern "C"  void exSpriteAnimation_Update_m46135695 (exSpriteAnimation_t1937626380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteAnimation::Step(exSpriteAnimState)
extern "C"  void exSpriteAnimation_Step_m3669819864 (exSpriteAnimation_t1937626380 * __this, exSpriteAnimState_t1924689544 * ____animState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteAnimation::SetDefaultSprite()
extern "C"  void exSpriteAnimation_SetDefaultSprite_m3735422698 (exSpriteAnimation_t1937626380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteAnimation::UpdateDefaultSprite(exAtlas,System.Int32)
extern "C"  void exSpriteAnimation_UpdateDefaultSprite_m4180566710 (exSpriteAnimation_t1937626380 * __this, exAtlas_t2942648216 * ____atlas, int32_t ____index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteAnimation::PlayDefault()
extern "C"  void exSpriteAnimation_PlayDefault_m2170023753 (exSpriteAnimation_t1937626380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteAnimation::Play(System.String)
extern "C"  void exSpriteAnimation_Play_m207608520 (exSpriteAnimation_t1937626380 * __this, String_t* ____name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteAnimation::Play(System.String,System.Int32)
extern "C"  void exSpriteAnimation_Play_m2283472655 (exSpriteAnimation_t1937626380 * __this, String_t* ____name, int32_t ____frame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteAnimation::Play(System.String,System.Single)
extern "C"  void exSpriteAnimation_Play_m2206197677 (exSpriteAnimation_t1937626380 * __this, String_t* ____name, float ____time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteAnimation::Play(exSpriteAnimState,System.Single)
extern "C"  void exSpriteAnimation_Play_m600644437 (exSpriteAnimation_t1937626380 * __this, exSpriteAnimState_t1924689544 * ____animState, float ____time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteAnimation::SetFrame(System.String,System.Int32)
extern "C"  void exSpriteAnimation_SetFrame_m2311738118 (exSpriteAnimation_t1937626380 * __this, String_t* ____name, int32_t ____index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteAnimation::Stop()
extern "C"  void exSpriteAnimation_Stop_m746822600 (exSpriteAnimation_t1937626380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteAnimation::Pause()
extern "C"  void exSpriteAnimation_Pause_m2770855634 (exSpriteAnimation_t1937626380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteAnimation::Resume()
extern "C"  void exSpriteAnimation_Resume_m2682732531 (exSpriteAnimation_t1937626380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean exSpriteAnimation::IsPlaying(System.String)
extern "C"  bool exSpriteAnimation_IsPlaying_m764936108 (exSpriteAnimation_t1937626380 * __this, String_t* ____name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean exSpriteAnimation::IsPaused(System.String)
extern "C"  bool exSpriteAnimation_IsPaused_m2975864730 (exSpriteAnimation_t1937626380 * __this, String_t* ____name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// exSpriteAnimState exSpriteAnimation::GetAnimation(System.String)
extern "C"  exSpriteAnimState_t1924689544 * exSpriteAnimation_GetAnimation_m4175726137 (exSpriteAnimation_t1937626380 * __this, String_t* ____name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// exSpriteAnimState exSpriteAnimation::GetCurrentAnimation()
extern "C"  exSpriteAnimState_t1924689544 * exSpriteAnimation_GetCurrentAnimation_m3777921000 (exSpriteAnimation_t1937626380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// exSpriteAnimClip/FrameInfo exSpriteAnimation::GetCurFrameInfo()
extern "C"  FrameInfo_t2548769691 * exSpriteAnimation_GetCurFrameInfo_m675241895 (exSpriteAnimation_t1937626380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 exSpriteAnimation::GetCurFrameIndex()
extern "C"  int32_t exSpriteAnimation_GetCurFrameIndex_m1494731621 (exSpriteAnimation_t1937626380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// exSpriteAnimState exSpriteAnimation::AddAnimation(exSpriteAnimClip)
extern "C"  exSpriteAnimState_t1924689544 * exSpriteAnimation_AddAnimation_m1804286949 (exSpriteAnimation_t1937626380 * __this, exSpriteAnimClip_t892886649 * ____animClip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// exSpriteAnimState exSpriteAnimation::AddAnimation(System.String,exSpriteAnimClip)
extern "C"  exSpriteAnimState_t1924689544 * exSpriteAnimation_AddAnimation_m1591570729 (exSpriteAnimation_t1937626380 * __this, String_t* ____name, exSpriteAnimClip_t892886649 * ____animClip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteAnimation::RemoveAnimation(exSpriteAnimClip)
extern "C"  void exSpriteAnimation_RemoveAnimation_m1092508323 (exSpriteAnimation_t1937626380 * __this, exSpriteAnimClip_t892886649 * ____animClip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
