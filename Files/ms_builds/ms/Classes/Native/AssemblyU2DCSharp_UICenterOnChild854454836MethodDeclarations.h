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

// UICenterOnChild
struct UICenterOnChild_t854454836;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Transform
struct Transform_t284553113;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void UICenterOnChild::.ctor()
extern "C"  void UICenterOnChild__ctor_m2780106679 (UICenterOnChild_t854454836 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UICenterOnChild::get_centeredObject()
extern "C"  GameObject_t4012695102 * UICenterOnChild_get_centeredObject_m4162723092 (UICenterOnChild_t854454836 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild::Start()
extern "C"  void UICenterOnChild_Start_m1727244471 (UICenterOnChild_t854454836 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild::OnEnable()
extern "C"  void UICenterOnChild_OnEnable_m80316527 (UICenterOnChild_t854454836 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild::OnDisable()
extern "C"  void UICenterOnChild_OnDisable_m2930749598 (UICenterOnChild_t854454836 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild::OnDragFinished()
extern "C"  void UICenterOnChild_OnDragFinished_m57626546 (UICenterOnChild_t854454836 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild::OnValidate()
extern "C"  void UICenterOnChild_OnValidate_m2234311810 (UICenterOnChild_t854454836 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild::Recenter(System.Boolean)
extern "C"  void UICenterOnChild_Recenter_m2523705260 (UICenterOnChild_t854454836 * __this, bool ___animate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild::CenterOn(UnityEngine.Transform,UnityEngine.Vector3,System.Boolean)
extern "C"  void UICenterOnChild_CenterOn_m3640718062 (UICenterOnChild_t854454836 * __this, Transform_t284553113 * ___target, Vector3_t3525329789  ___panelCenter, bool ___animate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild::CenterOn(UnityEngine.Transform,System.Boolean)
extern "C"  void UICenterOnChild_CenterOn_m116665057 (UICenterOnChild_t854454836 * __this, Transform_t284553113 * ___target, bool ___animate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
