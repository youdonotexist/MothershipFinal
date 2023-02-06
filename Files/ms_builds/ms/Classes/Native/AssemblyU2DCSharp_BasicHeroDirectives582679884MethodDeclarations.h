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

// BasicHeroDirectives
struct BasicHeroDirectives_t582679884;
// AIDirective
struct AIDirective_t3038039303;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_HeroAIManager_DirectiveState1409446306.h"
#include "AssemblyU2DCSharp_AIDirective3038039303.h"

// System.Void BasicHeroDirectives::.ctor()
extern "C"  void BasicHeroDirectives__ctor_m188566431 (BasicHeroDirectives_t582679884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BasicHeroDirectives::Start()
extern "C"  void BasicHeroDirectives_Start_m3430671519 (BasicHeroDirectives_t582679884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BasicHeroDirectives::Update()
extern "C"  void BasicHeroDirectives_Update_m3277454158 (BasicHeroDirectives_t582679884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BasicHeroDirectives::OnHeroReady()
extern "C"  void BasicHeroDirectives_OnHeroReady_m593703911 (BasicHeroDirectives_t582679884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BasicHeroDirectives::OnHeroWin()
extern "C"  void BasicHeroDirectives_OnHeroWin_m4032176288 (BasicHeroDirectives_t582679884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HeroAIManager/DirectiveState BasicHeroDirectives::handleDirective(AIDirective)
extern "C"  int32_t BasicHeroDirectives_handleDirective_m2373491376 (BasicHeroDirectives_t582679884 * __this, AIDirective_t3038039303 * ___directive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BasicHeroDirectives::MoveToLane(System.Int32,AIDirective)
extern "C"  Il2CppObject * BasicHeroDirectives_MoveToLane_m2919255563 (BasicHeroDirectives_t582679884 * __this, int32_t ___slot, AIDirective_t3038039303 * ___directive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BasicHeroDirectives::DeployMine(AIDirective)
extern "C"  Il2CppObject * BasicHeroDirectives_DeployMine_m3966915220 (BasicHeroDirectives_t582679884 * __this, AIDirective_t3038039303 * ___directive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BasicHeroDirectives::DeployShield(AIDirective)
extern "C"  Il2CppObject * BasicHeroDirectives_DeployShield_m3196848126 (BasicHeroDirectives_t582679884 * __this, AIDirective_t3038039303 * ___directive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BasicHeroDirectives::FireMissile(AIDirective)
extern "C"  Il2CppObject * BasicHeroDirectives_FireMissile_m2072752790 (BasicHeroDirectives_t582679884 * __this, AIDirective_t3038039303 * ___directive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
