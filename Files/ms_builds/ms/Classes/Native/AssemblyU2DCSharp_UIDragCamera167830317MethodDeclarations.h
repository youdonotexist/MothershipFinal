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

// UIDragCamera
struct UIDragCamera_t167830317;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Void UIDragCamera::.ctor()
extern "C"  void UIDragCamera__ctor_m3456061966 (UIDragCamera_t167830317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragCamera::Awake()
extern "C"  void UIDragCamera_Awake_m3693667185 (UIDragCamera_t167830317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragCamera::OnPress(System.Boolean)
extern "C"  void UIDragCamera_OnPress_m661787271 (UIDragCamera_t167830317 * __this, bool ___isPressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragCamera::OnDrag(UnityEngine.Vector2)
extern "C"  void UIDragCamera_OnDrag_m898041329 (UIDragCamera_t167830317 * __this, Vector2_t3525329788  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragCamera::OnScroll(System.Single)
extern "C"  void UIDragCamera_OnScroll_m1675680617 (UIDragCamera_t167830317 * __this, float ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
