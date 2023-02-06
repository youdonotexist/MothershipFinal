﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Collider
struct Collider_t955670625;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Bounds3518514978.h"

// System.Boolean UnityEngine.Collider::get_enabled()
extern "C"  bool Collider_get_enabled_m4167357801 (Collider_t955670625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C"  void Collider_set_enabled_m2575670866 (Collider_t955670625 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C"  Rigidbody_t1972007546 * Collider_get_attachedRigidbody_m2821754842 (Collider_t955670625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Collider::get_isTrigger()
extern "C"  bool Collider_get_isTrigger_m3877528150 (Collider_t955670625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
extern "C"  void Collider_set_isTrigger_m2057864191 (Collider_t955670625 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
extern "C"  Bounds_t3518514978  Collider_get_bounds_m1050008332 (Collider_t955670625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::INTERNAL_get_bounds(UnityEngine.Bounds&)
extern "C"  void Collider_INTERNAL_get_bounds_m1269265569 (Collider_t955670625 * __this, Bounds_t3518514978 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
