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

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "ex2D_Runtime_exPlane2956252521.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "ex2D_Runtime_exPlane_Anchor1965534933.h"

// UnityEngine.Vector3 ex2DExtension::ScreenToWorldPoint(exPlane,UnityEngine.Camera,exPlane/Anchor,System.Single,System.Single)
extern "C"  Vector3_t3525329789  ex2DExtension_ScreenToWorldPoint_m3844182741 (Il2CppObject * __this /* static, unused */, exPlane_t2956252521 * ____plane, Camera_t3533968274 * ____camera, int32_t ____anchor, float ____screen_x, float ____screen_y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ex2DExtension::ViewportToWorldPoint(exPlane,UnityEngine.Camera,System.Single,System.Single)
extern "C"  Vector3_t3525329789  ex2DExtension_ViewportToWorldPoint_m3683286180 (Il2CppObject * __this /* static, unused */, exPlane_t2956252521 * ____plane, Camera_t3533968274 * ____camera, float ____viewport_x, float ____viewport_y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ex2DExtension::Translate(exPlane,System.Single,System.Single)
extern "C"  void ex2DExtension_Translate_m3349802423 (Il2CppObject * __this /* static, unused */, exPlane_t2956252521 * ____plane, float ____dx, float ____dy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ex2DExtension::UpdateColliderSize(exPlane,System.Single)
extern "C"  void ex2DExtension_UpdateColliderSize_m2577989788 (Il2CppObject * __this /* static, unused */, exPlane_t2956252521 * ____plane, float ____length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
