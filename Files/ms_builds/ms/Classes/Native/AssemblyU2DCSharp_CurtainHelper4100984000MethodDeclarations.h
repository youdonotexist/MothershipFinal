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

// CurtainHelper
struct CurtainHelper_t4100984000;
// CurtainHelper/CurtainChangeCallback
struct CurtainChangeCallback_t728740647;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "AssemblyU2DCSharp_CurtainHelper_CurtainChangeCallba728740647.h"

// System.Void CurtainHelper::.ctor()
extern "C"  void CurtainHelper__ctor_m2561453227 (CurtainHelper_t4100984000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurtainHelper::Awake()
extern "C"  void CurtainHelper_Awake_m2799058446 (CurtainHelper_t4100984000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurtainHelper::AnimateCurtain(System.Boolean,UnityEngine.Color,UnityEngine.Color,System.Single,CurtainHelper/CurtainChangeCallback)
extern "C"  void CurtainHelper_AnimateCurtain_m2389792346 (CurtainHelper_t4100984000 * __this, bool ___open, Color_t1588175760  ___fr, Color_t1588175760  ___to, float ___d, CurtainChangeCallback_t728740647 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator CurtainHelper::AnimateCurtainRoutine(System.Boolean,UnityEngine.Color,UnityEngine.Color,System.Single,CurtainHelper/CurtainChangeCallback)
extern "C"  Il2CppObject * CurtainHelper_AnimateCurtainRoutine_m4183101524 (CurtainHelper_t4100984000 * __this, bool ___open, Color_t1588175760  ___fr, Color_t1588175760  ___to, float ___d, CurtainChangeCallback_t728740647 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
