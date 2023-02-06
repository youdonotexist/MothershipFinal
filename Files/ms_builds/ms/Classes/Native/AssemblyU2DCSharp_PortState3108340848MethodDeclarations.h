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

// PortState
struct PortState_t3108340848;
// PortState/MinionTypeDetails[]
struct MinionTypeDetailsU5BU5D_t72434631;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PortState_MinionTypeDetails2901012274.h"
#include "AssemblyU2DCSharp_PortState_MinionTypeLevelDetail70250981.h"

// System.Void PortState::.ctor()
extern "C"  void PortState__ctor_m535531259 (PortState_t3108340848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PortState PortState::NewPortState(System.Int32,System.Boolean,PortState/MinionTypeDetails[],System.Int32)
extern "C"  PortState_t3108340848 * PortState_NewPortState_m251673034 (Il2CppObject * __this /* static, unused */, int32_t ___port, bool ___update, MinionTypeDetailsU5BU5D_t72434631* ___dets, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PortState/MinionTypeDetails PortState::GetCurrentTypeDetails()
extern "C"  MinionTypeDetails_t2901012274  PortState_GetCurrentTypeDetails_m2052212702 (PortState_t3108340848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PortState/MinionTypeDetails PortState::GetTypeDetailsByIndex(System.Int32)
extern "C"  MinionTypeDetails_t2901012274  PortState_GetTypeDetailsByIndex_m2735562419 (PortState_t3108340848 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PortState/MinionTypeLevelDetail PortState::GetCurrentLevelDetails()
extern "C"  MinionTypeLevelDetail_t70250981  PortState_GetCurrentLevelDetails_m2838202685 (PortState_t3108340848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
