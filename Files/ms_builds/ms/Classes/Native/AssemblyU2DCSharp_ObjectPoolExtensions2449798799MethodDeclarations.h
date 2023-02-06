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

// System.Void ObjectPoolExtensions::CreatePool(UnityEngine.GameObject)
extern "C"  void ObjectPoolExtensions_CreatePool_m1004757576 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPoolExtensions::CreatePool(UnityEngine.GameObject,System.Int32)
extern "C"  void ObjectPoolExtensions_CreatePool_m3383734159 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, int32_t ___initialPoolSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject ObjectPoolExtensions::Spawn(UnityEngine.GameObject,UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  GameObject_t4012695102 * ObjectPoolExtensions_Spawn_m241760095 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, Transform_t284553113 * ___parent, Vector3_t3525329789  ___position, Quaternion_t1891715979  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject ObjectPoolExtensions::Spawn(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  GameObject_t4012695102 * ObjectPoolExtensions_Spawn_m3151383606 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, Vector3_t3525329789  ___position, Quaternion_t1891715979  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject ObjectPoolExtensions::Spawn(UnityEngine.GameObject,UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  GameObject_t4012695102 * ObjectPoolExtensions_Spawn_m2520536114 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, Transform_t284553113 * ___parent, Vector3_t3525329789  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject ObjectPoolExtensions::Spawn(UnityEngine.GameObject,UnityEngine.Vector3)
extern "C"  GameObject_t4012695102 * ObjectPoolExtensions_Spawn_m1277814075 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, Vector3_t3525329789  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject ObjectPoolExtensions::Spawn(UnityEngine.GameObject,UnityEngine.Transform)
extern "C"  GameObject_t4012695102 * ObjectPoolExtensions_Spawn_m2169189407 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, Transform_t284553113 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject ObjectPoolExtensions::Spawn(UnityEngine.GameObject)
extern "C"  GameObject_t4012695102 * ObjectPoolExtensions_Spawn_m1057678248 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPoolExtensions::Recycle(UnityEngine.GameObject)
extern "C"  void ObjectPoolExtensions_Recycle_m782066005 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPoolExtensions::RecycleAll(UnityEngine.GameObject)
extern "C"  void ObjectPoolExtensions_RecycleAll_m3606975262 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ObjectPoolExtensions::CountPooled(UnityEngine.GameObject)
extern "C"  int32_t ObjectPoolExtensions_CountPooled_m245240478 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ObjectPoolExtensions::CountSpawned(UnityEngine.GameObject)
extern "C"  int32_t ObjectPoolExtensions_CountSpawned_m2371615273 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.GameObject> ObjectPoolExtensions::GetSpawned(UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.GameObject>,System.Boolean)
extern "C"  List_1_t514686775 * ObjectPoolExtensions_GetSpawned_m1261074394 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, List_1_t514686775 * ___list, bool ___appendList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.GameObject> ObjectPoolExtensions::GetSpawned(UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.GameObject>)
extern "C"  List_1_t514686775 * ObjectPoolExtensions_GetSpawned_m2803846467 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, List_1_t514686775 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.GameObject> ObjectPoolExtensions::GetSpawned(UnityEngine.GameObject)
extern "C"  List_1_t514686775 * ObjectPoolExtensions_GetSpawned_m1181725583 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.GameObject> ObjectPoolExtensions::GetPooled(UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.GameObject>,System.Boolean)
extern "C"  List_1_t514686775 * ObjectPoolExtensions_GetPooled_m2257474833 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, List_1_t514686775 * ___list, bool ___appendList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.GameObject> ObjectPoolExtensions::GetPooled(UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.GameObject>)
extern "C"  List_1_t514686775 * ObjectPoolExtensions_GetPooled_m1172932844 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, List_1_t514686775 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.GameObject> ObjectPoolExtensions::GetPooled(UnityEngine.GameObject)
extern "C"  List_1_t514686775 * ObjectPoolExtensions_GetPooled_m622498936 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPoolExtensions::DestroyPooled(UnityEngine.GameObject)
extern "C"  void ObjectPoolExtensions_DestroyPooled_m2973635671 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPoolExtensions::DestroyAll(UnityEngine.GameObject)
extern "C"  void ObjectPoolExtensions_DestroyAll_m4028349783 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
