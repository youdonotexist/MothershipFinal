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

// LineManager
struct LineManager_t2890171641;
// Vectrosity.VectorLine
struct VectorLine_t3065371647;
// UnityEngine.Transform
struct Transform_t284553113;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Vectrosity_VectorLin3065371647.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"

// System.Void LineManager::.ctor()
extern "C"  void LineManager__ctor_m3463493470 (LineManager_t2890171641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LineManager::.cctor()
extern "C"  void LineManager__cctor_m3806986255 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LineManager::Awake()
extern "C"  void LineManager_Awake_m3701098689 (LineManager_t2890171641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LineManager::Initialize()
extern "C"  void LineManager_Initialize_m3544025590 (LineManager_t2890171641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LineManager::AddLine(Vectrosity.VectorLine,UnityEngine.Transform,System.Single)
extern "C"  void LineManager_AddLine_m3295790160 (LineManager_t2890171641 * __this, VectorLine_t3065371647 * ___vectorLine, Transform_t284553113 * ___thisTransform, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LineManager::DisableLine(Vectrosity.VectorLine,System.Single)
extern "C"  void LineManager_DisableLine_m642799666 (LineManager_t2890171641 * __this, VectorLine_t3065371647 * ___vectorLine, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LineManager::DisableLine(Vectrosity.VectorLine,System.Single,System.Boolean)
extern "C"  Il2CppObject * LineManager_DisableLine_m1044311611 (LineManager_t2890171641 * __this, VectorLine_t3065371647 * ___vectorLine, float ___time, bool ___remove, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LineManager::LateUpdate()
extern "C"  void LineManager_LateUpdate_m396787125 (LineManager_t2890171641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LineManager::RemoveLine(System.Int32)
extern "C"  void LineManager_RemoveLine_m921075535 (LineManager_t2890171641 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LineManager::RemoveLine(Vectrosity.VectorLine)
extern "C"  void LineManager_RemoveLine_m3716301063 (LineManager_t2890171641 * __this, VectorLine_t3065371647 * ___vectorLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LineManager::DisableIfUnused()
extern "C"  void LineManager_DisableIfUnused_m4192512087 (LineManager_t2890171641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LineManager::EnableIfUsed()
extern "C"  void LineManager_EnableIfUsed_m3659191235 (LineManager_t2890171641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LineManager::StartCheckDistance()
extern "C"  void LineManager_StartCheckDistance_m1135020673 (LineManager_t2890171641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LineManager::CheckDistance()
extern "C"  void LineManager_CheckDistance_m845015897 (LineManager_t2890171641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LineManager::OnDestroy()
extern "C"  void LineManager_OnDestroy_m3191582039 (LineManager_t2890171641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LineManager::OnLevelWasLoaded()
extern "C"  void LineManager_OnLevelWasLoaded_m1058775375 (LineManager_t2890171641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
