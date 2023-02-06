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

// UnityEngine.ParticleSystem
struct ParticleSystem_t56787138;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_t2043625475;
// UnityEngine.ParticleSystem/IteratorDelegate
struct IteratorDelegate_t3855630387;
// UnityEngine.Transform
struct Transform_t284553113;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ParticleSystemSimulationSp2206756439.h"
#include "UnityEngine_UnityEngine_ParticleSystem56787138.h"
#include "UnityEngine_UnityEngine_ParticleSystem_IteratorDel3855630387.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"

// System.Boolean UnityEngine.ParticleSystem::get_isPlaying()
extern "C"  bool ParticleSystem_get_isPlaying_m184625675 (ParticleSystem_t56787138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_startSpeed(System.Single)
extern "C"  void ParticleSystem_set_startSpeed_m1808614589 (ParticleSystem_t56787138 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.ParticleSystem::get_maxParticles()
extern "C"  int32_t ParticleSystem_get_maxParticles_m949592158 (ParticleSystem_t56787138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_simulationSpace(UnityEngine.ParticleSystemSimulationSpace)
extern "C"  void ParticleSystem_set_simulationSpace_m694030503 (ParticleSystem_t56787138 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::SetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32)
extern "C"  void ParticleSystem_SetParticles_m3124832583 (ParticleSystem_t56787138 * __this, ParticleU5BU5D_t2043625475* ___particles, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[])
extern "C"  int32_t ParticleSystem_GetParticles_m2308921348 (ParticleSystem_t56787138 * __this, ParticleU5BU5D_t2043625475* ___particles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::Internal_Play(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_Internal_Play_m594025146 (Il2CppObject * __this /* static, unused */, ParticleSystem_t56787138 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::Internal_IsAlive(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_Internal_IsAlive_m3898640007 (Il2CppObject * __this /* static, unused */, ParticleSystem_t56787138 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play()
extern "C"  void ParticleSystem_Play_m1237476160 (ParticleSystem_t56787138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
extern "C"  void ParticleSystem_Play_m1637509303 (ParticleSystem_t56787138 * __this, bool ___withChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IsAlive()
extern "C"  bool ParticleSystem_IsAlive_m3733722867 (ParticleSystem_t56787138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IsAlive(System.Boolean)
extern "C"  bool ParticleSystem_IsAlive_m2723817258 (ParticleSystem_t56787138 * __this, bool ___withChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Emit(System.Int32)
extern "C"  void ParticleSystem_Emit_m1128282864 (ParticleSystem_t56787138 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::INTERNAL_CALL_Emit(UnityEngine.ParticleSystem,System.Int32)
extern "C"  void ParticleSystem_INTERNAL_CALL_Emit_m2738975429 (Il2CppObject * __this /* static, unused */, ParticleSystem_t56787138 * ___self, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IterateParticleSystems(System.Boolean,UnityEngine.ParticleSystem/IteratorDelegate)
extern "C"  bool ParticleSystem_IterateParticleSystems_m2232250723 (ParticleSystem_t56787138 * __this, bool ___recurse, IteratorDelegate_t3855630387 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IterateParticleSystemsRecursive(UnityEngine.Transform,UnityEngine.ParticleSystem/IteratorDelegate)
extern "C"  bool ParticleSystem_IterateParticleSystemsRecursive_m389741621 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___transform, IteratorDelegate_t3855630387 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::<Play>m__1(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_U3CPlayU3Em__1_m745236472 (Il2CppObject * __this /* static, unused */, ParticleSystem_t56787138 * ___ps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::<IsAlive>m__5(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_U3CIsAliveU3Em__5_m576010307 (Il2CppObject * __this /* static, unused */, ParticleSystem_t56787138 * ___ps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
