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

// MathUtils
struct MathUtils_t2744540777;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void MathUtils::.ctor()
extern "C"  void MathUtils__ctor_m2884492578 (MathUtils_t2744540777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtils::SimplifyAngle(System.Single)
extern "C"  float MathUtils_SimplifyAngle_m1040740757 (Il2CppObject * __this /* static, unused */, float ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtils::SimplifyAngleDeg(System.Single)
extern "C"  float MathUtils_SimplifyAngleDeg_m2646638201 (Il2CppObject * __this /* static, unused */, float ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtils::ClosestAngle(System.Single,System.Single)
extern "C"  float MathUtils_ClosestAngle_m3096204352 (Il2CppObject * __this /* static, unused */, float ___target, float ___current, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtils::AngleDir(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float MathUtils_AngleDir_m3919091247 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___fwd, Vector3_t3525329789  ___targetDir, Vector3_t3525329789  ___up, const MethodInfo* method) IL2CPP_METHOD_ATTR;
