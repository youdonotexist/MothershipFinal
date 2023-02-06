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

// JuggernautHeroDirectives
struct JuggernautHeroDirectives_t3789385032;
// AIDirective
struct AIDirective_t3038039303;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// SpatialNode
struct SpatialNode_t3293136134;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_HeroAIManager_DirectiveState1409446306.h"
#include "AssemblyU2DCSharp_AIDirective3038039303.h"

// System.Void JuggernautHeroDirectives::.ctor()
extern "C"  void JuggernautHeroDirectives__ctor_m1641452115 (JuggernautHeroDirectives_t3789385032 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JuggernautHeroDirectives::Start()
extern "C"  void JuggernautHeroDirectives_Start_m588589907 (JuggernautHeroDirectives_t3789385032 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JuggernautHeroDirectives::FixedUpdate()
extern "C"  void JuggernautHeroDirectives_FixedUpdate_m1943020942 (JuggernautHeroDirectives_t3789385032 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HeroAIManager/DirectiveState JuggernautHeroDirectives::handleDirective(AIDirective)
extern "C"  int32_t JuggernautHeroDirectives_handleDirective_m2796128522 (JuggernautHeroDirectives_t3789385032 * __this, AIDirective_t3038039303 * ___directive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JuggernautHeroDirectives::OnHeroReady()
extern "C"  void JuggernautHeroDirectives_OnHeroReady_m2303828891 (JuggernautHeroDirectives_t3789385032 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JuggernautHeroDirectives::OnHeroWin()
extern "C"  void JuggernautHeroDirectives_OnHeroWin_m918875476 (JuggernautHeroDirectives_t3789385032 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JuggernautHeroDirectives::OpenArm()
extern "C"  bool JuggernautHeroDirectives_OpenArm_m2642783087 (JuggernautHeroDirectives_t3789385032 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator JuggernautHeroDirectives::WaitForLaserMissile(AIDirective)
extern "C"  Il2CppObject * JuggernautHeroDirectives_WaitForLaserMissile_m3668963155 (JuggernautHeroDirectives_t3789385032 * __this, AIDirective_t3038039303 * ___directive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator JuggernautHeroDirectives::WaitForArms(AIDirective)
extern "C"  Il2CppObject * JuggernautHeroDirectives_WaitForArms_m3192087319 (JuggernautHeroDirectives_t3789385032 * __this, AIDirective_t3038039303 * ___directive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator JuggernautHeroDirectives::MoveToLaneForFun(AIDirective)
extern "C"  Il2CppObject * JuggernautHeroDirectives_MoveToLaneForFun_m1521640900 (JuggernautHeroDirectives_t3789385032 * __this, AIDirective_t3038039303 * ___directive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator JuggernautHeroDirectives::MoveToLane(AIDirective)
extern "C"  Il2CppObject * JuggernautHeroDirectives_MoveToLane_m3697023514 (JuggernautHeroDirectives_t3789385032 * __this, AIDirective_t3038039303 * ___directive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator JuggernautHeroDirectives::MoveToLaneBasic(System.Int32,AIDirective)
extern "C"  Il2CppObject * JuggernautHeroDirectives_MoveToLaneBasic_m984609237 (JuggernautHeroDirectives_t3789385032 * __this, int32_t ___slot, AIDirective_t3038039303 * ___directive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpatialNode JuggernautHeroDirectives::FindOpenMoveSpot()
extern "C"  SpatialNode_t3293136134 * JuggernautHeroDirectives_FindOpenMoveSpot_m2261419028 (JuggernautHeroDirectives_t3789385032 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
