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

// TweenTransform
struct TweenTransform_t1891506529;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Transform
struct Transform_t284553113;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"

// System.Void TweenTransform::.ctor()
extern "C"  void TweenTransform__ctor_m2801250394 (TweenTransform_t1891506529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenTransform::OnUpdate(System.Single,System.Boolean)
extern "C"  void TweenTransform_OnUpdate_m2112660004 (TweenTransform_t1891506529 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenTransform TweenTransform::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Transform)
extern "C"  TweenTransform_t1891506529 * TweenTransform_Begin_m549320569 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, float ___duration, Transform_t284553113 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenTransform TweenTransform::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Transform,UnityEngine.Transform)
extern "C"  TweenTransform_t1891506529 * TweenTransform_Begin_m194782512 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, float ___duration, Transform_t284553113 * ___from, Transform_t284553113 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
