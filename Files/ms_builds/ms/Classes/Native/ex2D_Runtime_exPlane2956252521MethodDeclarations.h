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

// exPlane
struct exPlane_t2956252521;
// UnityEngine.Camera
struct Camera_t3533968274;
// exCollisionHelper
struct exCollisionHelper_t3326075981;
// UnityEngine.MeshFilter
struct MeshFilter_t4177078322;
// exSpriteMng
struct exSpriteMng_t228599406;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "ex2D_Runtime_exPlane_Anchor1965534933.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "ex2D_Runtime_exPlane_UpdateFlags1071088414.h"

// System.Void exPlane::.ctor()
extern "C"  void exPlane__ctor_m2555147841 (exPlane_t2956252521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera exPlane::get_renderCameraForPrefab()
extern "C"  Camera_t3533968274 * exPlane_get_renderCameraForPrefab_m2926482411 (exPlane_t2956252521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera exPlane::get_renderCamera()
extern "C"  Camera_t3533968274 * exPlane_get_renderCamera_m3054059972 (exPlane_t2956252521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exPlane::set_renderCamera(UnityEngine.Camera)
extern "C"  void exPlane_set_renderCamera_m3983957695 (exPlane_t2956252521 * __this, Camera_t3533968274 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// exPlane/Anchor exPlane::get_anchor()
extern "C"  int32_t exPlane_get_anchor_m2735096445 (exPlane_t2956252521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exPlane::set_anchor(exPlane/Anchor)
extern "C"  void exPlane_set_anchor_m2302738970 (exPlane_t2956252521 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 exPlane::get_offset()
extern "C"  Vector2_t3525329788  exPlane_get_offset_m2628576356 (exPlane_t2956252521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exPlane::set_offset(UnityEngine.Vector2)
extern "C"  void exPlane_set_offset_m1984707719 (exPlane_t2956252521 * __this, Vector2_t3525329788  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect exPlane::get_boundingRect()
extern "C"  Rect_t1525428817  exPlane_get_boundingRect_m683202128 (exPlane_t2956252521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exPlane::set_boundingRect(UnityEngine.Rect)
extern "C"  void exPlane_set_boundingRect_m80071341 (exPlane_t2956252521 * __this, Rect_t1525428817  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// exCollisionHelper exPlane::get_collisionHelper()
extern "C"  exCollisionHelper_t3326075981 * exPlane_get_collisionHelper_m393689788 (exPlane_t2956252521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MeshFilter exPlane::get_meshFilter()
extern "C"  MeshFilter_t4177078322 * exPlane_get_meshFilter_m263263438 (exPlane_t2956252521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exPlane::set_updateFlags(exPlane/UpdateFlags)
extern "C"  void exPlane_set_updateFlags_m1622292954 (exPlane_t2956252521 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// exPlane/UpdateFlags exPlane::get_updateFlags()
extern "C"  int32_t exPlane_get_updateFlags_m916130287 (exPlane_t2956252521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// exSpriteMng exPlane::get_spriteMng()
extern "C"  exSpriteMng_t228599406 * exPlane_get_spriteMng_m1630571420 (exPlane_t2956252521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exPlane::Awake()
extern "C"  void exPlane_Awake_m2792753060 (exPlane_t2956252521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exPlane::OnDestroy()
extern "C"  void exPlane_OnDestroy_m2760327866 (exPlane_t2956252521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exPlane::OnEnable()
extern "C"  void exPlane_OnEnable_m2775522725 (exPlane_t2956252521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exPlane::OnDisable()
extern "C"  void exPlane_OnDisable_m582795816 (exPlane_t2956252521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exPlane::Commit()
extern "C"  void exPlane_Commit_m1702146522 (exPlane_t2956252521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
