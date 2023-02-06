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

// System.Configuration.ConfigurationLockCollection
struct ConfigurationLockCollection_t2592573804;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3905177107;
// System.Array
struct Il2CppArray;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configur3905177107.h"
#include "System_Configuration_System_Configuration_Configur3549183688.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Configuration.ConfigurationLockCollection::.ctor(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationLockType)
extern "C"  void ConfigurationLockCollection__ctor_m4015947913 (ConfigurationLockCollection_t2592573804 * __this, ConfigurationElement_t3905177107 * ___element, int32_t ___lockType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLockCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void ConfigurationLockCollection_System_Collections_ICollection_CopyTo_m3302433448 (ConfigurationLockCollection_t2592573804 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLockCollection::CheckName(System.String)
extern "C"  void ConfigurationLockCollection_CheckName_m2069114485 (ConfigurationLockCollection_t2592573804 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLockCollection::Add(System.String)
extern "C"  void ConfigurationLockCollection_Add_m1108477191 (ConfigurationLockCollection_t2592573804 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLockCollection::Clear()
extern "C"  void ConfigurationLockCollection_Clear_m747601479 (ConfigurationLockCollection_t2592573804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.ConfigurationLockCollection::GetEnumerator()
extern "C"  Il2CppObject * ConfigurationLockCollection_GetEnumerator_m112387898 (ConfigurationLockCollection_t2592573804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLockCollection::SetFromList(System.String)
extern "C"  void ConfigurationLockCollection_SetFromList_m2634028446 (ConfigurationLockCollection_t2592573804 * __this, String_t* ___attributeList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationLockCollection::get_Count()
extern "C"  int32_t ConfigurationLockCollection_get_Count_m2976157856 (ConfigurationLockCollection_t2592573804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationLockCollection::get_IsSynchronized()
extern "C"  bool ConfigurationLockCollection_get_IsSynchronized_m9094773 (ConfigurationLockCollection_t2592573804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationLockCollection::get_SyncRoot()
extern "C"  Il2CppObject * ConfigurationLockCollection_get_SyncRoot_m823312131 (ConfigurationLockCollection_t2592573804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
