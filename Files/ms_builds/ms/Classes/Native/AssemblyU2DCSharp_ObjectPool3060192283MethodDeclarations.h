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

// ObjectPool
struct ObjectPool_t3060192283;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Transform
struct Transform_t284553113;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

// System.Void ObjectPool::.ctor()
extern "C"  void ObjectPool__ctor_m1301426912 (ObjectPool_t3060192283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPool::.cctor()
extern "C"  void ObjectPool__cctor_m1207432397 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPool::Awake()
extern "C"  void ObjectPool_Awake_m1539032131 (ObjectPool_t3060192283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPool::Start()
extern "C"  void ObjectPool_Start_m248564704 (ObjectPool_t3060192283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPool::CreateStartupPools()
extern "C"  void ObjectPool_CreateStartupPools_m2610809370 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPool::CreatePool(UnityEngine.GameObject,System.Int32)
extern "C"  void ObjectPool_CreatePool_m1688963459 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, int32_t ___initialPoolSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject ObjectPool::Spawn(UnityEngine.GameObject,UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  GameObject_t4012695102 * ObjectPool_Spawn_m3887109419 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, Transform_t284553113 * ___parent, Vector3_t3525329789  ___position, Quaternion_t1891715979  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject ObjectPool::Spawn(UnityEngine.GameObject,UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  GameObject_t4012695102 * ObjectPool_Spawn_m2007452646 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, Transform_t284553113 * ___parent, Vector3_t3525329789  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject ObjectPool::Spawn(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  GameObject_t4012695102 * ObjectPool_Spawn_m130697986 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, Vector3_t3525329789  ___position, Quaternion_t1891715979  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject ObjectPool::Spawn(UnityEngine.GameObject,UnityEngine.Transform)
extern "C"  GameObject_t4012695102 * ObjectPool_Spawn_m1762659795 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, Transform_t284553113 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject ObjectPool::Spawn(UnityEngine.GameObject,UnityEngine.Vector3)
extern "C"  GameObject_t4012695102 * ObjectPool_Spawn_m2332138479 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, Vector3_t3525329789  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject ObjectPool::Spawn(UnityEngine.GameObject)
extern "C"  GameObject_t4012695102 * ObjectPool_Spawn_m4107402332 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPool::Recycle(UnityEngine.GameObject)
extern "C"  void ObjectPool_Recycle_m4065567561 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPool::Recycle(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  void ObjectPool_Recycle_m1991467541 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___obj, GameObject_t4012695102 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPool::RecycleAll(UnityEngine.GameObject)
extern "C"  void ObjectPool_RecycleAll_m226696362 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPool::RecycleAll()
extern "C"  void ObjectPool_RecycleAll_m1609211570 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ObjectPool::IsSpawned(UnityEngine.GameObject)
extern "C"  bool ObjectPool_IsSpawned_m3342678290 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ObjectPool::CountPooled(UnityEngine.GameObject)
extern "C"  int32_t ObjectPool_CountPooled_m696602898 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ObjectPool::CountSpawned(UnityEngine.GameObject)
extern "C"  int32_t ObjectPool_CountSpawned_m3478948405 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ObjectPool::CountAllPooled()
extern "C"  int32_t ObjectPool_CountAllPooled_m3312172767 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.GameObject> ObjectPool::GetPooled(UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.GameObject>,System.Boolean)
extern "C"  List_1_t514686775 * ObjectPool_GetPooled_m2881706077 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, List_1_t514686775 * ___list, bool ___appendList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.GameObject> ObjectPool::GetSpawned(UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.GameObject>,System.Boolean)
extern "C"  List_1_t514686775 * ObjectPool_GetSpawned_m3432373774 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, List_1_t514686775 * ___list, bool ___appendList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPool::DestroyPooled(UnityEngine.GameObject)
extern "C"  void ObjectPool_DestroyPooled_m888147787 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPool::DestroyAll(UnityEngine.GameObject)
extern "C"  void ObjectPool_DestroyAll_m648070883 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ObjectPool ObjectPool::get_instance()
extern "C"  ObjectPool_t3060192283 * ObjectPool_get_instance_m1397110628 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
