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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>
struct Dictionary_2_t280527194;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3161373071;
// System.Collections.Generic.IDictionary`2<System.Object,UnityEngine.Color>
struct IDictionary_2_t1456192981;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color>[]
struct KeyValuePair_2U5BU5D_t3811806421;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color>>
struct IEnumerator_1_t1252164940;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1541724277;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.Color>
struct KeyCollection_t2603802474;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.Color>
struct ValueCollection_t2202664288;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_24064025788.h"
#include "mscorlib_System_Array2840145358.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enu47555135.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::.ctor()
extern "C"  void Dictionary_2__ctor_m3609536365_gshared (Dictionary_2_t280527194 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m3609536365(__this, method) ((  void (*) (Dictionary_2_t280527194 *, const MethodInfo*))Dictionary_2__ctor_m3609536365_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m3873460580_gshared (Dictionary_2_t280527194 * __this, Il2CppObject* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m3873460580(__this, ___comparer, method) ((  void (*) (Dictionary_2_t280527194 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3873460580_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m3791266110_gshared (Dictionary_2_t280527194 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m3791266110(__this, ___capacity, method) ((  void (*) (Dictionary_2_t280527194 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m3791266110_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m3865200786_gshared (Dictionary_2_t280527194 * __this, Il2CppObject* ___dictionary, Il2CppObject* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m3865200786(__this, ___dictionary, ___comparer, method) ((  void (*) (Dictionary_2_t280527194 *, Il2CppObject*, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3865200786_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m2159725358_gshared (Dictionary_2_t280527194 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m2159725358(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t280527194 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2__ctor_m2159725358_gshared)(__this, ___info, ___context, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Keys_m2202585587_gshared (Dictionary_2_t280527194 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m2202585587(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t280527194 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m2202585587_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.IDictionary.get_Values()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Values_m1633426977_gshared (Dictionary_2_t280527194 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m1633426977(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t280527194 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m1633426977_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m587994363_gshared (Dictionary_2_t280527194 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m587994363(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t280527194 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m587994363_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m2103548128_gshared (Dictionary_2_t280527194 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m2103548128(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t280527194 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m2103548128_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m1816172913_gshared (Dictionary_2_t280527194 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1816172913(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t280527194 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1816172913_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m4011952997_gshared (Dictionary_2_t280527194 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m4011952997(__this, ___key, method) ((  bool (*) (Dictionary_2_t280527194 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m4011952997_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m3206664990_gshared (Dictionary_2_t280527194 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m3206664990(__this, ___key, method) ((  void (*) (Dictionary_2_t280527194 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m3206664990_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1758553615_gshared (Dictionary_2_t280527194 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1758553615(__this, method) ((  bool (*) (Dictionary_2_t280527194 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1758553615_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1682234427_gshared (Dictionary_2_t280527194 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1682234427(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t280527194 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1682234427_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3266370963_gshared (Dictionary_2_t280527194 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3266370963(__this, method) ((  bool (*) (Dictionary_2_t280527194 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3266370963_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3980056756_gshared (Dictionary_2_t280527194 * __this, KeyValuePair_2_t4064025788  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3980056756(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t280527194 *, KeyValuePair_2_t4064025788 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3980056756_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3963702286_gshared (Dictionary_2_t280527194 * __this, KeyValuePair_2_t4064025788  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3963702286(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t280527194 *, KeyValuePair_2_t4064025788 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3963702286_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m4263412632_gshared (Dictionary_2_t280527194 * __this, KeyValuePair_2U5BU5D_t3811806421* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m4263412632(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t280527194 *, KeyValuePair_2U5BU5D_t3811806421*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m4263412632_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2217680563_gshared (Dictionary_2_t280527194 * __this, KeyValuePair_2_t4064025788  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2217680563(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t280527194 *, KeyValuePair_2_t4064025788 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2217680563_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m1262530167_gshared (Dictionary_2_t280527194 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1262530167(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t280527194 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1262530167_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3570049330_gshared (Dictionary_2_t280527194 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3570049330(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t280527194 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3570049330_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1483645231_gshared (Dictionary_2_t280527194 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1483645231(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t280527194 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1483645231_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1443401674_gshared (Dictionary_2_t280527194 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1443401674(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t280527194 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1443401674_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m283876949_gshared (Dictionary_2_t280527194 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m283876949(__this, method) ((  int32_t (*) (Dictionary_2_t280527194 *, const MethodInfo*))Dictionary_2_get_Count_m283876949_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::get_Item(TKey)
extern "C"  Color_t1588175760  Dictionary_2_get_Item_m1573601526_gshared (Dictionary_2_t280527194 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1573601526(__this, ___key, method) ((  Color_t1588175760  (*) (Dictionary_2_t280527194 *, Il2CppObject *, const MethodInfo*))Dictionary_2_get_Item_m1573601526_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m2180340333_gshared (Dictionary_2_t280527194 * __this, Il2CppObject * ___key, Color_t1588175760  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m2180340333(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t280527194 *, Il2CppObject *, Color_t1588175760 , const MethodInfo*))Dictionary_2_set_Item_m2180340333_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m3643283173_gshared (Dictionary_2_t280527194 * __this, int32_t ___capacity, Il2CppObject* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m3643283173(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t280527194 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m3643283173_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m696589170_gshared (Dictionary_2_t280527194 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m696589170(__this, ___size, method) ((  void (*) (Dictionary_2_t280527194 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m696589170_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m2419197934_gshared (Dictionary_2_t280527194 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m2419197934(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t280527194 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m2419197934_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t4064025788  Dictionary_2_make_pair_m2211988794_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, Color_t1588175760  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m2211988794(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t4064025788  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Color_t1588175760 , const MethodInfo*))Dictionary_2_make_pair_m2211988794_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::pick_key(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_key_m1525223804_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, Color_t1588175760  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m1525223804(__this /* static, unused */, ___key, ___value, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Color_t1588175760 , const MethodInfo*))Dictionary_2_pick_key_m1525223804_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::pick_value(TKey,TValue)
extern "C"  Color_t1588175760  Dictionary_2_pick_value_m692411452_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, Color_t1588175760  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m692411452(__this /* static, unused */, ___key, ___value, method) ((  Color_t1588175760  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Color_t1588175760 , const MethodInfo*))Dictionary_2_pick_value_m692411452_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m1154735137_gshared (Dictionary_2_t280527194 * __this, KeyValuePair_2U5BU5D_t3811806421* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1154735137(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t280527194 *, KeyValuePair_2U5BU5D_t3811806421*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1154735137_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::Resize()
extern "C"  void Dictionary_2_Resize_m284274283_gshared (Dictionary_2_t280527194 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m284274283(__this, method) ((  void (*) (Dictionary_2_t280527194 *, const MethodInfo*))Dictionary_2_Resize_m284274283_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m33757160_gshared (Dictionary_2_t280527194 * __this, Il2CppObject * ___key, Color_t1588175760  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m33757160(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t280527194 *, Il2CppObject *, Color_t1588175760 , const MethodInfo*))Dictionary_2_Add_m33757160_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::Clear()
extern "C"  void Dictionary_2_Clear_m1015669656_gshared (Dictionary_2_t280527194 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1015669656(__this, method) ((  void (*) (Dictionary_2_t280527194 *, const MethodInfo*))Dictionary_2_Clear_m1015669656_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m387443582_gshared (Dictionary_2_t280527194 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m387443582(__this, ___key, method) ((  bool (*) (Dictionary_2_t280527194 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsKey_m387443582_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m2658488446_gshared (Dictionary_2_t280527194 * __this, Color_t1588175760  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m2658488446(__this, ___value, method) ((  bool (*) (Dictionary_2_t280527194 *, Color_t1588175760 , const MethodInfo*))Dictionary_2_ContainsValue_m2658488446_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m2404189323_gshared (Dictionary_2_t280527194 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m2404189323(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t280527194 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2_GetObjectData_m2404189323_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m2377187001_gshared (Dictionary_2_t280527194 * __this, Il2CppObject * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m2377187001(__this, ___sender, method) ((  void (*) (Dictionary_2_t280527194 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m2377187001_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m1355191986_gshared (Dictionary_2_t280527194 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1355191986(__this, ___key, method) ((  bool (*) (Dictionary_2_t280527194 *, Il2CppObject *, const MethodInfo*))Dictionary_2_Remove_m1355191986_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m3946309079_gshared (Dictionary_2_t280527194 * __this, Il2CppObject * ___key, Color_t1588175760 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m3946309079(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t280527194 *, Il2CppObject *, Color_t1588175760 *, const MethodInfo*))Dictionary_2_TryGetValue_m3946309079_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::get_Keys()
extern "C"  KeyCollection_t2603802474 * Dictionary_2_get_Keys_m188370056_gshared (Dictionary_2_t280527194 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m188370056(__this, method) ((  KeyCollection_t2603802474 * (*) (Dictionary_2_t280527194 *, const MethodInfo*))Dictionary_2_get_Keys_m188370056_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::get_Values()
extern "C"  ValueCollection_t2202664288 * Dictionary_2_get_Values_m1252096520_gshared (Dictionary_2_t280527194 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1252096520(__this, method) ((  ValueCollection_t2202664288 * (*) (Dictionary_2_t280527194 *, const MethodInfo*))Dictionary_2_get_Values_m1252096520_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::ToTKey(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTKey_m975082711_gshared (Dictionary_2_t280527194 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m975082711(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t280527194 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m975082711_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::ToTValue(System.Object)
extern "C"  Color_t1588175760  Dictionary_2_ToTValue_m3299692887_gshared (Dictionary_2_t280527194 * __this, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m3299692887(__this, ___value, method) ((  Color_t1588175760  (*) (Dictionary_2_t280527194 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m3299692887_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m2723755157_gshared (Dictionary_2_t280527194 * __this, KeyValuePair_2_t4064025788  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m2723755157(__this, ___pair, method) ((  bool (*) (Dictionary_2_t280527194 *, KeyValuePair_2_t4064025788 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m2723755157_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::GetEnumerator()
extern "C"  Enumerator_t47555136  Dictionary_2_GetEnumerator_m969376754_gshared (Dictionary_2_t280527194 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m969376754(__this, method) ((  Enumerator_t47555136  (*) (Dictionary_2_t280527194 *, const MethodInfo*))Dictionary_2_GetEnumerator_m969376754_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::<CopyTo>m__2(TKey,TValue)
extern "C"  DictionaryEntry_t130027246  Dictionary_2_U3CCopyToU3Em__2_m1921151743_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, Color_t1588175760  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m1921151743(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t130027246  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Color_t1588175760 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m1921151743_gshared)(__this /* static, unused */, ___key, ___value, method)
