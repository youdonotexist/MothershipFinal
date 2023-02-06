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

// UnityEngine.Object[]
struct ObjectU5BU5D_t3051965477;
// System.Type
struct Type_t;
// UnityEngine.Object
struct Object_t3878351788;
struct Object_t3878351788_marshaled_pinvoke;
// System.String
struct String_t;
// UnityEngine.ResourceRequest
struct ResourceRequest_t2256525006;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Object3878351788.h"

// UnityEngine.Object[] UnityEngine.Resources::FindObjectsOfTypeAll(System.Type)
extern "C"  ObjectU5BU5D_t3051965477* Resources_FindObjectsOfTypeAll_m1346325355 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
extern "C"  Object_t3878351788 * Resources_Load_m2187391845 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C"  Object_t3878351788 * Resources_Load_m3601699608 (Il2CppObject * __this /* static, unused */, String_t* ___path, Type_t * ___systemTypeInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ResourceRequest UnityEngine.Resources::LoadAsync(System.String,System.Type)
extern "C"  ResourceRequest_t2256525006 * Resources_LoadAsync_m3762650532 (Il2CppObject * __this /* static, unused */, String_t* ___path, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Resources::UnloadAsset(UnityEngine.Object)
extern "C"  void Resources_UnloadAsset_m3142802605 (Il2CppObject * __this /* static, unused */, Object_t3878351788 * ___assetToUnload, const MethodInfo* method) IL2CPP_METHOD_ATTR;
