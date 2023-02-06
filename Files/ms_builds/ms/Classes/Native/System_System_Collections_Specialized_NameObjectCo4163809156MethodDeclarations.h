﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t4163809156;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1661793090;
// System.Collections.IComparer
struct IComparer_t2207526184;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t2093096743;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t3664159698;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.String
struct String_t;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t90023954;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor()
extern "C"  void NameObjectCollectionBase__ctor_m1741929684 (NameObjectCollectionBase_t4163809156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Collections.IEqualityComparer,System.Collections.IComparer,System.Collections.IHashCodeProvider)
extern "C"  void NameObjectCollectionBase__ctor_m2422988573 (NameObjectCollectionBase_t4163809156 * __this, Il2CppObject * ___equalityComparer, Il2CppObject * ___comparer, Il2CppObject * ___hcp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Collections.IEqualityComparer)
extern "C"  void NameObjectCollectionBase__ctor_m1083291668 (NameObjectCollectionBase_t4163809156 * __this, Il2CppObject * ___equalityComparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void NameObjectCollectionBase__ctor_m355604501 (NameObjectCollectionBase_t4163809156 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Int32,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C"  void NameObjectCollectionBase__ctor_m1688066724 (NameObjectCollectionBase_t4163809156 * __this, int32_t ___capacity, Il2CppObject * ___hashProvider, Il2CppObject * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool NameObjectCollectionBase_System_Collections_ICollection_get_IsSynchronized_m4292869198 (NameObjectCollectionBase_t4163809156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * NameObjectCollectionBase_System_Collections_ICollection_get_SyncRoot_m625351596 (NameObjectCollectionBase_t4163809156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void NameObjectCollectionBase_System_Collections_ICollection_CopyTo_m606865136 (NameObjectCollectionBase_t4163809156 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IComparer System.Collections.Specialized.NameObjectCollectionBase::get_Comparer()
extern "C"  Il2CppObject * NameObjectCollectionBase_get_Comparer_m1330669861 (NameObjectCollectionBase_t4163809156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IHashCodeProvider System.Collections.Specialized.NameObjectCollectionBase::get_HashCodeProvider()
extern "C"  Il2CppObject * NameObjectCollectionBase_get_HashCodeProvider_m778027875 (NameObjectCollectionBase_t4163809156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::Init()
extern "C"  void NameObjectCollectionBase_Init_m3194316544 (NameObjectCollectionBase_t4163809156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::get_Keys()
extern "C"  KeysCollection_t3664159698 * NameObjectCollectionBase_get_Keys_m411623033 (NameObjectCollectionBase_t4163809156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator()
extern "C"  Il2CppObject * NameObjectCollectionBase_GetEnumerator_m2097604182 (NameObjectCollectionBase_t4163809156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void NameObjectCollectionBase_GetObjectData_m3614997106 (NameObjectCollectionBase_t4163809156 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count()
extern "C"  int32_t NameObjectCollectionBase_get_Count_m2598648584 (NameObjectCollectionBase_t4163809156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::OnDeserialization(System.Object)
extern "C"  void NameObjectCollectionBase_OnDeserialization_m3096738610 (NameObjectCollectionBase_t4163809156 * __this, Il2CppObject * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::get_IsReadOnly()
extern "C"  bool NameObjectCollectionBase_get_IsReadOnly_m911678543 (NameObjectCollectionBase_t4163809156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseAdd(System.String,System.Object)
extern "C"  void NameObjectCollectionBase_BaseAdd_m915764854 (NameObjectCollectionBase_t4163809156 * __this, String_t* ___name, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseClear()
extern "C"  void NameObjectCollectionBase_BaseClear_m481553478 (NameObjectCollectionBase_t4163809156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.Int32)
extern "C"  Il2CppObject * NameObjectCollectionBase_BaseGet_m1942289941 (NameObjectCollectionBase_t4163809156 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.String)
extern "C"  Il2CppObject * NameObjectCollectionBase_BaseGet_m538144446 (NameObjectCollectionBase_t4163809156 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameObjectCollectionBase::BaseGetKey(System.Int32)
extern "C"  String_t* NameObjectCollectionBase_BaseGetKey_m3433139160 (NameObjectCollectionBase_t4163809156 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseRemove(System.String)
extern "C"  void NameObjectCollectionBase_BaseRemove_m2142355669 (NameObjectCollectionBase_t4163809156 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseSet(System.String,System.Object)
extern "C"  void NameObjectCollectionBase_BaseSet_m3920459349 (NameObjectCollectionBase_t4163809156 * __this, String_t* ___name, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::FindFirstMatchedItem(System.String)
extern "C"  _Item_t90023954 * NameObjectCollectionBase_FindFirstMatchedItem_m3932570092 (NameObjectCollectionBase_t4163809156 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::Equals(System.String,System.String)
extern "C"  bool NameObjectCollectionBase_Equals_m2784985029 (NameObjectCollectionBase_t4163809156 * __this, String_t* ___s1, String_t* ___s2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
