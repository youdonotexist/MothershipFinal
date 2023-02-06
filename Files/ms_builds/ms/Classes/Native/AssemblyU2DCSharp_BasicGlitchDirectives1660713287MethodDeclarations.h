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

// BasicGlitchDirectives
struct BasicGlitchDirectives_t1660713287;
// AIDirective
struct AIDirective_t3038039303;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// SpatialNode
struct SpatialNode_t3293136134;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_HeroAIManager_DirectiveState1409446306.h"
#include "AssemblyU2DCSharp_AIDirective3038039303.h"

// System.Void BasicGlitchDirectives::.ctor()
extern "C"  void BasicGlitchDirectives__ctor_m4072734724 (BasicGlitchDirectives_t1660713287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HeroAIManager/DirectiveState BasicGlitchDirectives::handleDirective(AIDirective)
extern "C"  int32_t BasicGlitchDirectives_handleDirective_m3837528363 (BasicGlitchDirectives_t1660713287 * __this, AIDirective_t3038039303 * ___directive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BasicGlitchDirectives::DeployMine(AIDirective)
extern "C"  Il2CppObject * BasicGlitchDirectives_DeployMine_m1783573241 (BasicGlitchDirectives_t1660713287 * __this, AIDirective_t3038039303 * ___directive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BasicGlitchDirectives::FireMissile(AIDirective)
extern "C"  Il2CppObject * BasicGlitchDirectives_FireMissile_m3108628177 (BasicGlitchDirectives_t1660713287 * __this, AIDirective_t3038039303 * ___directive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BasicGlitchDirectives::DeployShield(AIDirective)
extern "C"  Il2CppObject * BasicGlitchDirectives_DeployShield_m949246755 (BasicGlitchDirectives_t1660713287 * __this, AIDirective_t3038039303 * ___directive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BasicGlitchDirectives::MoveToLane2(AIDirective)
extern "C"  Il2CppObject * BasicGlitchDirectives_MoveToLane2_m4051676199 (BasicGlitchDirectives_t1660713287 * __this, AIDirective_t3038039303 * ___directive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpatialNode BasicGlitchDirectives::FindOpenMoveSpot()
extern "C"  SpatialNode_t3293136134 * BasicGlitchDirectives_FindOpenMoveSpot_m2210756937 (BasicGlitchDirectives_t1660713287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
