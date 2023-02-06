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

// PoolManager
struct PoolManager_t620535761;
// PoolingSystem`1<UnityEngine.GameObject>
struct PoolingSystem_1_t2759908697;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

// System.Void PoolManager::.ctor()
extern "C"  void PoolManager__ctor_m384243386 (PoolManager_t620535761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PoolManager PoolManager::Instance()
extern "C"  PoolManager_t620535761 * PoolManager_Instance_m661027325 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PoolManager::Awake()
extern "C"  void PoolManager_Awake_m621848605 (PoolManager_t620535761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PoolManager::AddPool(PoolingSystem`1<UnityEngine.GameObject>,System.String)
extern "C"  void PoolManager_AddPool_m1261737305 (PoolManager_t620535761 * __this, PoolingSystem_1_t2759908697 * ___pool, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PoolManager::Create(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  GameObject_t4012695102 * PoolManager_Create_m48996629 (PoolManager_t620535761 * __this, GameObject_t4012695102 * ___prefab, Vector3_t3525329789  ___pos, Quaternion_t1891715979  ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PoolManager::Create(UnityEngine.GameObject)
extern "C"  GameObject_t4012695102 * PoolManager_Create_m1970546729 (PoolManager_t620535761 * __this, GameObject_t4012695102 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PoolManager::Release(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  void PoolManager_Release_m4263836423 (PoolManager_t620535761 * __this, GameObject_t4012695102 * ___obj, GameObject_t4012695102 * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PoolManager::IsPoolable(UnityEngine.GameObject)
extern "C"  bool PoolManager_IsPoolable_m1515557390 (PoolManager_t620535761 * __this, GameObject_t4012695102 * ___gameObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
