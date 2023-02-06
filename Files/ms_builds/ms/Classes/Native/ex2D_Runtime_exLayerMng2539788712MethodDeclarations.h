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

// exLayerMng
struct exLayerMng_t2539788712;
// exLayer
struct exLayer_t2952253534;
// UnityEngine.Transform
struct Transform_t284553113;
// System.Collections.Generic.List`1<exLayer>
struct List_1_t3749212503;

#include "codegen/il2cpp-codegen.h"
#include "ex2D_Runtime_exLayer2952253534.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"

// System.Void exLayerMng::.ctor()
extern "C"  void exLayerMng__ctor_m935140724 (exLayerMng_t2539788712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 exLayerMng::CompareByIndentLevel(exLayer,exLayer)
extern "C"  int32_t exLayerMng_CompareByIndentLevel_m2971737702 (Il2CppObject * __this /* static, unused */, exLayer_t2952253534 * ____a, exLayer_t2952253534 * ____b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exLayerMng::Awake()
extern "C"  void exLayerMng_Awake_m1172745943 (exLayerMng_t2539788712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exLayerMng::OnPreRender()
extern "C"  void exLayerMng_OnPreRender_m1846727244 (exLayerMng_t2539788712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exLayerMng::UpdateLayers()
extern "C"  void exLayerMng_UpdateLayers_m3552289531 (exLayerMng_t2539788712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exLayerMng::RecursivelyUpdateLayer(UnityEngine.Transform,System.Boolean)
extern "C"  void exLayerMng_RecursivelyUpdateLayer_m670680761 (exLayerMng_t2539788712 * __this, Transform_t284553113 * ____trans, bool ____force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 exLayerMng::AddLayerRecursively(exLayer,System.Boolean,System.Single&,System.Collections.Generic.List`1<exLayer>&)
extern "C"  int32_t exLayerMng_AddLayerRecursively_m2752487857 (exLayerMng_t2539788712 * __this, exLayer_t2952253534 * ____curLayer, bool ____doCount, float* ____totalDepth, List_1_t3749212503 ** ____layerList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exLayerMng::SetLayerDepthRecursively(exLayer,System.Single)
extern "C"  void exLayerMng_SetLayerDepthRecursively_m1114182366 (exLayerMng_t2539788712 * __this, exLayer_t2952253534 * ____curLayer, float ____depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<exLayer> exLayerMng::CalculateDepthForDynamicLayer(exLayer)
extern "C"  List_1_t3749212503 * exLayerMng_CalculateDepthForDynamicLayer_m1132272581 (exLayerMng_t2539788712 * __this, exLayer_t2952253534 * ____curLayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<exLayer> exLayerMng::CalculateDepthForAbstractLayer(exLayer)
extern "C"  List_1_t3749212503 * exLayerMng_CalculateDepthForAbstractLayer_m1223386784 (exLayerMng_t2539788712 * __this, exLayer_t2952253534 * ____curLayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exLayerMng::AddDirtyLayer(exLayer)
extern "C"  void exLayerMng_AddDirtyLayer_m2099851746 (exLayerMng_t2539788712 * __this, exLayer_t2952253534 * ____layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
