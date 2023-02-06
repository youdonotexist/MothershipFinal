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

// PoolingSystem`1<System.Object>
struct PoolingSystem_1_t3879287311;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Transform
struct Transform_t284553113;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "mscorlib_System_Object837106420.h"

// System.Void PoolingSystem`1<System.Object>::.ctor(UnityEngine.GameObject,System.Int32)
extern "C"  void PoolingSystem_1__ctor_m2624701690_gshared (PoolingSystem_1_t3879287311 * __this, GameObject_t4012695102 * ___prefab, int32_t ___initialSize, const MethodInfo* method);
#define PoolingSystem_1__ctor_m2624701690(__this, ___prefab, ___initialSize, method) ((  void (*) (PoolingSystem_1_t3879287311 *, GameObject_t4012695102 *, int32_t, const MethodInfo*))PoolingSystem_1__ctor_m2624701690_gshared)(__this, ___prefab, ___initialSize, method)
// System.Void PoolingSystem`1<System.Object>::.ctor(UnityEngine.GameObject,System.Int32,UnityEngine.Transform)
extern "C"  void PoolingSystem_1__ctor_m2311482353_gshared (PoolingSystem_1_t3879287311 * __this, GameObject_t4012695102 * ___prefab, int32_t ___initialSize, Transform_t284553113 * ___ootwParent, const MethodInfo* method);
#define PoolingSystem_1__ctor_m2311482353(__this, ___prefab, ___initialSize, ___ootwParent, method) ((  void (*) (PoolingSystem_1_t3879287311 *, GameObject_t4012695102 *, int32_t, Transform_t284553113 *, const MethodInfo*))PoolingSystem_1__ctor_m2311482353_gshared)(__this, ___prefab, ___initialSize, ___ootwParent, method)
// System.Void PoolingSystem`1<System.Object>::.cctor()
extern "C"  void PoolingSystem_1__cctor_m3378288392_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define PoolingSystem_1__cctor_m3378288392(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))PoolingSystem_1__cctor_m3378288392_gshared)(__this /* static, unused */, method)
// System.Void PoolingSystem`1<System.Object>::CleanUp()
extern "C"  void PoolingSystem_1_CleanUp_m2080646055_gshared (PoolingSystem_1_t3879287311 * __this, const MethodInfo* method);
#define PoolingSystem_1_CleanUp_m2080646055(__this, method) ((  void (*) (PoolingSystem_1_t3879287311 *, const MethodInfo*))PoolingSystem_1_CleanUp_m2080646055_gshared)(__this, method)
// System.Int32 PoolingSystem`1<System.Object>::get_InUse()
extern "C"  int32_t PoolingSystem_1_get_InUse_m486769742_gshared (PoolingSystem_1_t3879287311 * __this, const MethodInfo* method);
#define PoolingSystem_1_get_InUse_m486769742(__this, method) ((  int32_t (*) (PoolingSystem_1_t3879287311 *, const MethodInfo*))PoolingSystem_1_get_InUse_m486769742_gshared)(__this, method)
// System.Int32 PoolingSystem`1<System.Object>::get_Available()
extern "C"  int32_t PoolingSystem_1_get_Available_m3798057397_gshared (PoolingSystem_1_t3879287311 * __this, const MethodInfo* method);
#define PoolingSystem_1_get_Available_m3798057397(__this, method) ((  int32_t (*) (PoolingSystem_1_t3879287311 *, const MethodInfo*))PoolingSystem_1_get_Available_m3798057397_gshared)(__this, method)
// System.Void PoolingSystem`1<System.Object>::ReleaseElement(T,System.Boolean)
extern "C"  void PoolingSystem_1_ReleaseElement_m3684865011_gshared (PoolingSystem_1_t3879287311 * __this, Il2CppObject * ___element, bool ___SetOutOfTheWay, const MethodInfo* method);
#define PoolingSystem_1_ReleaseElement_m3684865011(__this, ___element, ___SetOutOfTheWay, method) ((  void (*) (PoolingSystem_1_t3879287311 *, Il2CppObject *, bool, const MethodInfo*))PoolingSystem_1_ReleaseElement_m3684865011_gshared)(__this, ___element, ___SetOutOfTheWay, method)
// T PoolingSystem`1<System.Object>::GetElement()
extern "C"  Il2CppObject * PoolingSystem_1_GetElement_m590659364_gshared (PoolingSystem_1_t3879287311 * __this, const MethodInfo* method);
#define PoolingSystem_1_GetElement_m590659364(__this, method) ((  Il2CppObject * (*) (PoolingSystem_1_t3879287311 *, const MethodInfo*))PoolingSystem_1_GetElement_m590659364_gshared)(__this, method)
