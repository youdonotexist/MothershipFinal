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

// WaveForm
struct WaveForm_t667898749;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3342907448;
struct AnimationCurve_t3342907448_marshaled_pinvoke;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_WaveForm_Type2622298.h"

// System.Void WaveForm::.ctor()
extern "C"  void WaveForm__ctor_m1360725950 (WaveForm_t667898749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WaveForm WaveForm::Create(WaveForm/Type)
extern "C"  WaveForm_t667898749 * WaveForm_Create_m2899753060 (Il2CppObject * __this /* static, unused */, int32_t ___waveFormType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WaveForm::Sample(System.Single)
extern "C"  float WaveForm_Sample_m2749922735 (WaveForm_t667898749 * __this, float ___phase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WaveForm::SetAs(WaveForm/Type)
extern "C"  void WaveForm_SetAs_m828349046 (WaveForm_t667898749 * __this, int32_t ___waveFormType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationCurve WaveForm::CreateSineCurve()
extern "C"  AnimationCurve_t3342907448 * WaveForm_CreateSineCurve_m34942087 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationCurve WaveForm::CreateSawtoothCurve()
extern "C"  AnimationCurve_t3342907448 * WaveForm_CreateSawtoothCurve_m50252885 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationCurve WaveForm::CreateTriangleCurve()
extern "C"  AnimationCurve_t3342907448 * WaveForm_CreateTriangleCurve_m2923675308 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationCurve WaveForm::CreateSquareCurve()
extern "C"  AnimationCurve_t3342907448 * WaveForm_CreateSquareCurve_m1401149175 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
