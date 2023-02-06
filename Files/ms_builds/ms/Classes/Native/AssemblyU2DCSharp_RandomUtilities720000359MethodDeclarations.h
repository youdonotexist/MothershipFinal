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

// RandomUtilities
struct RandomUtilities_t720000359;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Camera
struct Camera_t3533968274;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void RandomUtilities::.ctor()
extern "C"  void RandomUtilities__ctor_m4204369380 (RandomUtilities_t720000359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] RandomUtilities::GetColliderVertexPositions(UnityEngine.GameObject,UnityEngine.Camera,UnityEngine.Camera,UnityEngine.Vector3)
extern "C"  Vector3U5BU5D_t3227571696* RandomUtilities_GetColliderVertexPositions_m4165249775 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, Camera_t3533968274 * ___gameCamera, Camera_t3533968274 * ___uiCamera, Vector3_t3525329789  ___closest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
