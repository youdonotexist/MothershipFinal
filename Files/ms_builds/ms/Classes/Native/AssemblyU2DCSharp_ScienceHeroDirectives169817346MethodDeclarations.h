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

// ScienceHeroDirectives
struct ScienceHeroDirectives_t169817346;
// AIDirective
struct AIDirective_t3038039303;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// SpatialNode
struct SpatialNode_t3293136134;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_HeroAIManager_DirectiveState1409446306.h"
#include "AssemblyU2DCSharp_AIDirective3038039303.h"

// System.Void ScienceHeroDirectives::.ctor()
extern "C"  void ScienceHeroDirectives__ctor_m1227245225 (ScienceHeroDirectives_t169817346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScienceHeroDirectives::Start()
extern "C"  void ScienceHeroDirectives_Start_m174383017 (ScienceHeroDirectives_t169817346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScienceHeroDirectives::Update()
extern "C"  void ScienceHeroDirectives_Update_m1116758404 (ScienceHeroDirectives_t169817346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScienceHeroDirectives::OnHeroReady()
extern "C"  void ScienceHeroDirectives_OnHeroReady_m543309681 (ScienceHeroDirectives_t169817346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScienceHeroDirectives::OnHeroWin()
extern "C"  void ScienceHeroDirectives_OnHeroWin_m3419834026 (ScienceHeroDirectives_t169817346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HeroAIManager/DirectiveState ScienceHeroDirectives::handleDirective(AIDirective)
extern "C"  int32_t ScienceHeroDirectives_handleDirective_m883936166 (ScienceHeroDirectives_t169817346 * __this, AIDirective_t3038039303 * ___directive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ScienceHeroDirectives::Teleport(System.Int32,AIDirective)
extern "C"  Il2CppObject * ScienceHeroDirectives_Teleport_m896308468 (ScienceHeroDirectives_t169817346 * __this, int32_t ___times, AIDirective_t3038039303 * ___directive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ScienceHeroDirectives::MoveToLane(AIDirective)
extern "C"  Il2CppObject * ScienceHeroDirectives_MoveToLane_m3726714880 (ScienceHeroDirectives_t169817346 * __this, AIDirective_t3038039303 * ___directive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ScienceHeroDirectives::MoveToLaneBasic(System.Int32,AIDirective)
extern "C"  Il2CppObject * ScienceHeroDirectives_MoveToLaneBasic_m2738852411 (ScienceHeroDirectives_t169817346 * __this, int32_t ___slot, AIDirective_t3038039303 * ___directive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpatialNode ScienceHeroDirectives::FindOpenMoveSpot()
extern "C"  SpatialNode_t3293136134 * ScienceHeroDirectives_FindOpenMoveSpot_m888670596 (ScienceHeroDirectives_t169817346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ScienceHeroDirectives::DeployMine(AIDirective)
extern "C"  Il2CppObject * ScienceHeroDirectives_DeployMine_m3336865694 (ScienceHeroDirectives_t169817346 * __this, AIDirective_t3038039303 * ___directive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ScienceHeroDirectives::FireMissile(AIDirective)
extern "C"  Il2CppObject * ScienceHeroDirectives_FireMissile_m4016053964 (ScienceHeroDirectives_t169817346 * __this, AIDirective_t3038039303 * ___directive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpatialNode ScienceHeroDirectives::FindOpenTeleportSpot()
extern "C"  SpatialNode_t3293136134 * ScienceHeroDirectives_FindOpenTeleportSpot_m2873061726 (ScienceHeroDirectives_t169817346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ScienceHeroDirectives::DeployShield(AIDirective)
extern "C"  Il2CppObject * ScienceHeroDirectives_DeployShield_m3309642376 (ScienceHeroDirectives_t169817346 * __this, AIDirective_t3038039303 * ___directive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ScienceHeroDirectives::WaitForTeleport(AIDirective,System.Single)
extern "C"  Il2CppObject * ScienceHeroDirectives_WaitForTeleport_m2855596546 (ScienceHeroDirectives_t169817346 * __this, AIDirective_t3038039303 * ___nextDirective, float ___waittime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScienceHeroDirectives::SetCanFire(System.Boolean)
extern "C"  void ScienceHeroDirectives_SetCanFire_m3159068566 (ScienceHeroDirectives_t169817346 * __this, bool ___can, const MethodInfo* method) IL2CPP_METHOD_ATTR;
