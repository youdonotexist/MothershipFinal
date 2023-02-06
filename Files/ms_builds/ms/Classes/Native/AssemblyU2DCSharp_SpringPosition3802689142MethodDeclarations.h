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

// SpringPosition
struct SpringPosition_t3802689142;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void SpringPosition::.ctor()
extern "C"  void SpringPosition__ctor_m685982437 (SpringPosition_t3802689142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPosition::Start()
extern "C"  void SpringPosition_Start_m3928087525 (SpringPosition_t3802689142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPosition::Update()
extern "C"  void SpringPosition_Update_m1517481160 (SpringPosition_t3802689142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPosition::NotifyListeners()
extern "C"  void SpringPosition_NotifyListeners_m1211524345 (SpringPosition_t3802689142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpringPosition SpringPosition::Begin(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C"  SpringPosition_t3802689142 * SpringPosition_Begin_m639842037 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, Vector3_t3525329789  ___pos, float ___strength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
