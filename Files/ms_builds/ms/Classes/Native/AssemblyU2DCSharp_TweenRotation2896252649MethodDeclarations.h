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

// TweenRotation
struct TweenRotation_t2896252649;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"

// System.Void TweenRotation::.ctor()
extern "C"  void TweenRotation__ctor_m2525546658 (TweenRotation_t2896252649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform TweenRotation::get_cachedTransform()
extern "C"  Transform_t284553113 * TweenRotation_get_cachedTransform_m1896190527 (TweenRotation_t2896252649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion TweenRotation::get_rotation()
extern "C"  Quaternion_t1891715979  TweenRotation_get_rotation_m2493550017 (TweenRotation_t2896252649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::set_rotation(UnityEngine.Quaternion)
extern "C"  void TweenRotation_set_rotation_m1772030792 (TweenRotation_t2896252649 * __this, Quaternion_t1891715979  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion TweenRotation::get_value()
extern "C"  Quaternion_t1891715979  TweenRotation_get_value_m1627399344 (TweenRotation_t2896252649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::set_value(UnityEngine.Quaternion)
extern "C"  void TweenRotation_set_value_m1681479039 (TweenRotation_t2896252649 * __this, Quaternion_t1891715979  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::OnUpdate(System.Single,System.Boolean)
extern "C"  void TweenRotation_OnUpdate_m2949284060 (TweenRotation_t2896252649 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenRotation TweenRotation::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Quaternion)
extern "C"  TweenRotation_t2896252649 * TweenRotation_Begin_m3094108993 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, float ___duration, Quaternion_t1891715979  ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::SetStartToCurrentValue()
extern "C"  void TweenRotation_SetStartToCurrentValue_m3916033077 (TweenRotation_t2896252649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::SetEndToCurrentValue()
extern "C"  void TweenRotation_SetEndToCurrentValue_m724273774 (TweenRotation_t2896252649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::SetCurrentValueToStart()
extern "C"  void TweenRotation_SetCurrentValueToStart_m3161735983 (TweenRotation_t2896252649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::SetCurrentValueToEnd()
extern "C"  void TweenRotation_SetCurrentValueToEnd_m3730960488 (TweenRotation_t2896252649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
