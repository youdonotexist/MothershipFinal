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

// SmoothRandom
struct SmoothRandom_t981803057;
// FractalNoise
struct FractalNoise_t683998921;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void SmoothRandom::.ctor()
extern "C"  void SmoothRandom__ctor_m1125480842 (SmoothRandom_t981803057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 SmoothRandom::GetVector3(System.Single)
extern "C"  Vector3_t3525329789  SmoothRandom_GetVector3_m793452317 (Il2CppObject * __this /* static, unused */, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SmoothRandom::Get(System.Single)
extern "C"  float SmoothRandom_Get_m821646585 (Il2CppObject * __this /* static, unused */, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FractalNoise SmoothRandom::Get()
extern "C"  FractalNoise_t683998921 * SmoothRandom_Get_m4096155946 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
