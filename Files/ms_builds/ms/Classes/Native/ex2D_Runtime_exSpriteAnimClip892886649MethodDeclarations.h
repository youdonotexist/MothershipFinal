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

// exSpriteAnimClip
struct exSpriteAnimClip_t892886649;
// exSpriteAnimClip/EventInfo
struct EventInfo_t2035060296;
// exSpriteAnimation
struct exSpriteAnimation_t1937626380;
// exSpriteAnimState
struct exSpriteAnimState_t1924689544;

#include "codegen/il2cpp-codegen.h"
#include "ex2D_Runtime_exSpriteAnimClip_EventInfo2035060296.h"
#include "UnityEngine_UnityEngine_WrapMode3802599802.h"
#include "ex2D_Runtime_exSpriteAnimation1937626380.h"
#include "ex2D_Runtime_exSpriteAnimState1924689544.h"

// System.Void exSpriteAnimClip::.ctor()
extern "C"  void exSpriteAnimClip__ctor_m1921080579 (exSpriteAnimClip_t892886649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single exSpriteAnimClip::get_sampleRate()
extern "C"  float exSpriteAnimClip_get_sampleRate_m3524434752 (exSpriteAnimClip_t892886649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteAnimClip::set_sampleRate(System.Single)
extern "C"  void exSpriteAnimClip_set_sampleRate_m3133177603 (exSpriteAnimClip_t892886649 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteAnimClip::AddEvent(exSpriteAnimClip/EventInfo)
extern "C"  void exSpriteAnimClip_AddEvent_m4110441704 (exSpriteAnimClip_t892886649 * __this, EventInfo_t2035060296 * ____e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteAnimClip::RemoveEvent(exSpriteAnimClip/EventInfo)
extern "C"  void exSpriteAnimClip_RemoveEvent_m3639610277 (exSpriteAnimClip_t892886649 * __this, EventInfo_t2035060296 * ____e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single exSpriteAnimClip::WrapSeconds(System.Single,UnityEngine.WrapMode)
extern "C"  float exSpriteAnimClip_WrapSeconds_m4224338721 (exSpriteAnimClip_t892886649 * __this, float ____seconds, int32_t ____wrapMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 exSpriteAnimClip::GetForwardEventIndex(System.Single)
extern "C"  int32_t exSpriteAnimClip_GetForwardEventIndex_m1749389971 (exSpriteAnimClip_t892886649 * __this, float ____time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 exSpriteAnimClip::GetBackwardEventIndex(System.Single)
extern "C"  int32_t exSpriteAnimClip_GetBackwardEventIndex_m3771884073 (exSpriteAnimClip_t892886649 * __this, float ____time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 exSpriteAnimClip::TriggerEvents(exSpriteAnimation,exSpriteAnimState,System.Int32,System.Single,System.Single,UnityEngine.WrapMode)
extern "C"  int32_t exSpriteAnimClip_TriggerEvents_m1801071145 (exSpriteAnimClip_t892886649 * __this, exSpriteAnimation_t1937626380 * ____spAnim, exSpriteAnimState_t1924689544 * ____lastAnim, int32_t ____lastIndex, float ____start, float ____delta, int32_t ____wrapMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 exSpriteAnimClip::ForwardTriggerEvents(exSpriteAnimation,exSpriteAnimState,System.Int32,System.Single,System.Single,System.Boolean)
extern "C"  int32_t exSpriteAnimClip_ForwardTriggerEvents_m3184049961 (exSpriteAnimClip_t892886649 * __this, exSpriteAnimation_t1937626380 * ____spAnim, exSpriteAnimState_t1924689544 * ____lastAnim, int32_t ____index, float ____start, float ____end, bool ____includeStart, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 exSpriteAnimClip::BackwardTriggerEvents(exSpriteAnimation,exSpriteAnimState,System.Int32,System.Single,System.Single,System.Boolean)
extern "C"  int32_t exSpriteAnimClip_BackwardTriggerEvents_m3608608231 (exSpriteAnimClip_t892886649 * __this, exSpriteAnimation_t1937626380 * ____spAnim, exSpriteAnimState_t1924689544 * ____lastAnim, int32_t ____index, float ____start, float ____end, bool ____includeStart, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteAnimClip::Trigger(exSpriteAnimation,exSpriteAnimClip/EventInfo)
extern "C"  void exSpriteAnimClip_Trigger_m2123981127 (exSpriteAnimClip_t892886649 * __this, exSpriteAnimation_t1937626380 * ____spAnim, EventInfo_t2035060296 * ____eventInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
