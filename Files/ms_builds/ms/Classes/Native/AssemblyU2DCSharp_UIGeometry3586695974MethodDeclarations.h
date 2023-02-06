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

// UIGeometry
struct UIGeometry_t3586695974;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t727330505;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t727330504;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t1339084923;
// BetterList`1<UnityEngine.Vector4>
struct BetterList_1_t727330506;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

// System.Void UIGeometry::.ctor()
extern "C"  void UIGeometry__ctor_m3438354485 (UIGeometry_t3586695974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIGeometry::get_hasVertices()
extern "C"  bool UIGeometry_get_hasVertices_m167811977 (UIGeometry_t3586695974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIGeometry::get_hasTransformed()
extern "C"  bool UIGeometry_get_hasTransformed_m4232907805 (UIGeometry_t3586695974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGeometry::Clear()
extern "C"  void UIGeometry_Clear_m844487776 (UIGeometry_t3586695974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGeometry::ApplyTransform(UnityEngine.Matrix4x4)
extern "C"  void UIGeometry_ApplyTransform_m458214797 (UIGeometry_t3586695974 * __this, Matrix4x4_t277289660  ___widgetToPanel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGeometry::WriteToBuffers(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector4>)
extern "C"  void UIGeometry_WriteToBuffers_m3819043362 (UIGeometry_t3586695974 * __this, BetterList_1_t727330505 * ___v, BetterList_1_t727330504 * ___u, BetterList_1_t1339084923 * ___c, BetterList_1_t727330505 * ___n, BetterList_1_t727330506 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
