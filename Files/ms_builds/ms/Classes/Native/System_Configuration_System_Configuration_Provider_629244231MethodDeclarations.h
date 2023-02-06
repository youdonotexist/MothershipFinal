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

// System.Configuration.Provider.ProviderCollection
struct ProviderCollection_t629244231;
// System.Array
struct Il2CppArray;
// System.Configuration.Provider.ProviderBase
struct ProviderBase_t1318101562;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "System_Configuration_System_Configuration_Provider1318101562.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Configuration.Provider.ProviderCollection::.ctor()
extern "C"  void ProviderCollection__ctor_m2854551247 (ProviderCollection_t629244231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Provider.ProviderCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void ProviderCollection_System_Collections_ICollection_CopyTo_m3528429909 (ProviderCollection_t629244231 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Provider.ProviderCollection::Add(System.Configuration.Provider.ProviderBase)
extern "C"  void ProviderCollection_Add_m449126406 (ProviderCollection_t629244231 * __this, ProviderBase_t1318101562 * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.Provider.ProviderCollection::GetEnumerator()
extern "C"  Il2CppObject * ProviderCollection_GetEnumerator_m92979437 (ProviderCollection_t629244231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.Provider.ProviderCollection::get_Count()
extern "C"  int32_t ProviderCollection_get_Count_m3736812499 (ProviderCollection_t629244231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.Provider.ProviderCollection::get_IsSynchronized()
extern "C"  bool ProviderCollection_get_IsSynchronized_m757466274 (ProviderCollection_t629244231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.Provider.ProviderCollection::get_SyncRoot()
extern "C"  Il2CppObject * ProviderCollection_get_SyncRoot_m1238328048 (ProviderCollection_t629244231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Provider.ProviderBase System.Configuration.Provider.ProviderCollection::get_Item(System.String)
extern "C"  ProviderBase_t1318101562 * ProviderCollection_get_Item_m1343934058 (ProviderCollection_t629244231 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
