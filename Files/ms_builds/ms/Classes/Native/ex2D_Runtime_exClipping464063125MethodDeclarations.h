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

// exClipping
struct exClipping_t464063125;
// exPlane
struct exPlane_t2956252521;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// UnityEngine.Material
struct Material_t1886596500;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "ex2D_Runtime_exPlane2956252521.h"
#include "UnityEngine_UnityEngine_Texture2D2509538522.h"
#include "UnityEngine_UnityEngine_Material1886596500.h"

// System.Void exClipping::.ctor()
extern "C"  void exClipping__ctor_m608298791 (exClipping_t464063125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single exClipping::get_width()
extern "C"  float exClipping_get_width_m1045215286 (exClipping_t464063125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exClipping::set_width(System.Single)
extern "C"  void exClipping_set_width_m1222150301 (exClipping_t464063125 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single exClipping::get_height()
extern "C"  float exClipping_get_height_m2840717145 (exClipping_t464063125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exClipping::set_height(System.Single)
extern "C"  void exClipping_set_height_m1677969546 (exClipping_t464063125 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect exClipping::get_clippedRect()
extern "C"  Rect_t1525428817  exClipping_get_clippedRect_m1838447515 (exClipping_t464063125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exClipping::set_clippedRect(UnityEngine.Rect)
extern "C"  void exClipping_set_clippedRect_m1314152336 (exClipping_t464063125 * __this, Rect_t1525428817  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exClipping::Init()
extern "C"  void exClipping_Init_m2603558477 (exClipping_t464063125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exClipping::Awake()
extern "C"  void exClipping_Awake_m845904010 (exClipping_t464063125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exClipping::OnDestroy()
extern "C"  void exClipping_OnDestroy_m1693307040 (exClipping_t464063125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exClipping::OnEnable()
extern "C"  void exClipping_OnEnable_m3433839359 (exClipping_t464063125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exClipping::OnDisable()
extern "C"  void exClipping_OnDisable_m3810742286 (exClipping_t464063125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean exClipping::HasPlaneInfo(exPlane)
extern "C"  bool exClipping_HasPlaneInfo_m466916166 (exClipping_t464063125 * __this, exPlane_t2956252521 * ____plane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exClipping::AddPlaneInfo(exPlane)
extern "C"  void exClipping_AddPlaneInfo_m3059624163 (exClipping_t464063125 * __this, exPlane_t2956252521 * ____plane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exClipping::InsertPlaneInfo(System.Int32,exPlane)
extern "C"  void exClipping_InsertPlaneInfo_m2933150634 (exClipping_t464063125 * __this, int32_t ____idx, exPlane_t2956252521 * ____plane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean exClipping::RemovePlaneInfo(exPlane)
extern "C"  bool exClipping_RemovePlaneInfo_m4139862548 (exClipping_t464063125 * __this, exPlane_t2956252521 * ____plane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exClipping::UpdatePlane(exPlane)
extern "C"  void exClipping_UpdatePlane_m455038353 (exClipping_t464063125 * __this, exPlane_t2956252521 * ____plane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exClipping::AddPlane(exPlane)
extern "C"  void exClipping_AddPlane_m2632996465 (exClipping_t464063125 * __this, exPlane_t2956252521 * ____plane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exClipping::InsertPlane(System.Int32,exPlane)
extern "C"  void exClipping_InsertPlane_m2458719452 (exClipping_t464063125 * __this, int32_t ____idx, exPlane_t2956252521 * ____plane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean exClipping::RemovePlane(exPlane)
extern "C"  bool exClipping_RemovePlane_m3811424290 (exClipping_t464063125 * __this, exPlane_t2956252521 * ____plane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exClipping::Clear()
extern "C"  void exClipping_Clear_m2309399378 (exClipping_t464063125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exClipping::ApplyClipMaterial(exPlane)
extern "C"  void exClipping_ApplyClipMaterial_m189035711 (exClipping_t464063125 * __this, exPlane_t2956252521 * ____plane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exClipping::CheckAndRemoveClipMaterial(UnityEngine.Texture2D)
extern "C"  void exClipping_CheckAndRemoveClipMaterial_m3634242933 (exClipping_t464063125 * __this, Texture2D_t2509538522 * ____texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exClipping::Commit()
extern "C"  void exClipping_Commit_m1479368116 (exClipping_t464063125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exClipping::AddClipMaterial(UnityEngine.Texture2D,UnityEngine.Material)
extern "C"  void exClipping_AddClipMaterial_m2524436649 (exClipping_t464063125 * __this, Texture2D_t2509538522 * ____texture, Material_t1886596500 * ____mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exClipping::CommitMaterialProperties()
extern "C"  void exClipping_CommitMaterialProperties_m3165859406 (exClipping_t464063125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exClipping::OnDrawGizmos()
extern "C"  void exClipping_OnDrawGizmos_m2876514329 (exClipping_t464063125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
