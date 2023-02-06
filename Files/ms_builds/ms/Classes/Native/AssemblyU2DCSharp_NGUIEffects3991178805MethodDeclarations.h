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

// NGUIEffects
struct NGUIEffects_t3991178805;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UILabel
struct UILabel_t291504320;
// System.String
struct String_t;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UILabel291504320.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_AudioClip3714538611.h"

// System.Void NGUIEffects::.ctor()
extern "C"  void NGUIEffects__ctor_m364583126 (NGUIEffects_t3991178805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator NGUIEffects::TypewriterSingle(UILabel,System.String,System.Single,System.String)
extern "C"  Il2CppObject * NGUIEffects_TypewriterSingle_m2277693108 (Il2CppObject * __this /* static, unused */, UILabel_t291504320 * ___label, String_t* ___text, float ___durationBetweenCharacters, String_t* ___blipType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIEffects::IsTypewriting(UILabel)
extern "C"  bool NGUIEffects_IsTypewriting_m2400626994 (Il2CppObject * __this /* static, unused */, UILabel_t291504320 * ___label, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIEffects::TypewriterSingleLoop(UILabel,System.String,System.Single,UnityEngine.AudioClip)
extern "C"  void NGUIEffects_TypewriterSingleLoop_m2093172937 (Il2CppObject * __this /* static, unused */, UILabel_t291504320 * ___label, String_t* ___text, float ___durationBetweenCharacters, AudioClip_t3714538611 * ___clip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
