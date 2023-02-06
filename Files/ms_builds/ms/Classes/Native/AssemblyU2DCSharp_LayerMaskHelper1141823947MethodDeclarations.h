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

// LayerMaskHelper
struct LayerMaskHelper_t1141823947;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"

// System.Void LayerMaskHelper::.ctor()
extern "C"  void LayerMaskHelper__ctor_m888783360 (LayerMaskHelper_t1141823947 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LayerMaskHelper::OnlyIncluding(System.Int32[])
extern "C"  int32_t LayerMaskHelper_OnlyIncluding_m1667582580 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t1809983122* ___layers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LayerMaskHelper::EverythingBut(System.Int32[])
extern "C"  int32_t LayerMaskHelper_EverythingBut_m3246641705 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t1809983122* ___layers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LayerMaskHelper::MakeMask(System.Int32[])
extern "C"  int32_t LayerMaskHelper_MakeMask_m3207758495 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t1809983122* ___layers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LayerMaskHelper::IsInLayerMask(UnityEngine.GameObject,UnityEngine.LayerMask)
extern "C"  bool LayerMaskHelper_IsInLayerMask_m847645598 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___obj, LayerMask_t1862190090  ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LayerMaskHelper::IsInLayerMask(System.Int32,UnityEngine.LayerMask)
extern "C"  bool LayerMaskHelper_IsInLayerMask_m3075471543 (Il2CppObject * __this /* static, unused */, int32_t ___layer, LayerMask_t1862190090  ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
