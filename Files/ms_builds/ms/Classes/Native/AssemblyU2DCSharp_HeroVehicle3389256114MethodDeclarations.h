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

// HeroVehicle
struct HeroVehicle_t3389256114;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// AIDirective
struct AIDirective_t3038039303;
// exSpriteAnimation
struct exSpriteAnimation_t1937626380;
// Damagable
struct Damagable_t4024817136;
// SpatialNode
struct SpatialNode_t3293136134;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_HeroAIManager_DirectiveState1409446306.h"
#include "AssemblyU2DCSharp_AIDirective3038039303.h"
#include "AssemblyU2DCSharp_SpatialNode3293136134.h"

// System.Void HeroVehicle::.ctor()
extern "C"  void HeroVehicle__ctor_m454513145 (HeroVehicle_t3389256114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroVehicle::Awake()
extern "C"  void HeroVehicle_Awake_m692118364 (HeroVehicle_t3389256114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroVehicle::Start()
extern "C"  void HeroVehicle_Start_m3696618233 (HeroVehicle_t3389256114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroVehicle::OnDamageCallback(System.Single)
extern "C"  void HeroVehicle_OnDamageCallback_m2187314541 (HeroVehicle_t3389256114 * __this, float ___amt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator HeroVehicle::FlashDamage(System.Single)
extern "C"  Il2CppObject * HeroVehicle_FlashDamage_m3451903949 (HeroVehicle_t3389256114 * __this, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroVehicle::Update()
extern "C"  void HeroVehicle_Update_m2931867700 (HeroVehicle_t3389256114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroVehicle::DestroyForReal()
extern "C"  void HeroVehicle_DestroyForReal_m2078182680 (HeroVehicle_t3389256114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroVehicle::OnHeroReady()
extern "C"  void HeroVehicle_OnHeroReady_m1712426689 (HeroVehicle_t3389256114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroVehicle::OnHeroWin()
extern "C"  void HeroVehicle_OnHeroWin_m3702614522 (HeroVehicle_t3389256114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroVehicle::ClearDirectives()
extern "C"  void HeroVehicle_ClearDirectives_m3187483528 (HeroVehicle_t3389256114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HeroAIManager/DirectiveState HeroVehicle::HandleDirective(AIDirective)
extern "C"  int32_t HeroVehicle_HandleDirective_m2860686774 (HeroVehicle_t3389256114 * __this, AIDirective_t3038039303 * ___directive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// exSpriteAnimation HeroVehicle::GetAnimation()
extern "C"  exSpriteAnimation_t1937626380 * HeroVehicle_GetAnimation_m4107371346 (HeroVehicle_t3389256114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Damagable HeroVehicle::GetDamagable()
extern "C"  Damagable_t4024817136 * HeroVehicle_GetDamagable_m990970562 (HeroVehicle_t3389256114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroVehicle::UpdateCurrentNode(SpatialNode)
extern "C"  void HeroVehicle_UpdateCurrentNode_m4161482723 (HeroVehicle_t3389256114 * __this, SpatialNode_t3293136134 * ___newNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroVehicle::OnPooled()
extern "C"  void HeroVehicle_OnPooled_m3729178917 (HeroVehicle_t3389256114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HeroVehicle::IsTutorialHero()
extern "C"  bool HeroVehicle_IsTutorialHero_m188916665 (HeroVehicle_t3389256114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroVehicle::OnDestroy()
extern "C"  void HeroVehicle_OnDestroy_m3398271602 (HeroVehicle_t3389256114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
