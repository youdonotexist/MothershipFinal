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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1539766221;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3161373071;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t2715432008;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2144708406;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2511403967;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1541724277;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t3863041501;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t3461903315;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21028297519.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E1306794162.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C"  void Dictionary_2__ctor_m491177976_gshared (Dictionary_2_t1539766221 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m491177976(__this, method) ((  void (*) (Dictionary_2_t1539766221 *, const MethodInfo*))Dictionary_2__ctor_m491177976_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1817203311_gshared (Dictionary_2_t1539766221 * __this, Il2CppObject* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1817203311(__this, ___comparer, method) ((  void (*) (Dictionary_2_t1539766221 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m1817203311_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m1674594633_gshared (Dictionary_2_t1539766221 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1674594633(__this, ___capacity, method) ((  void (*) (Dictionary_2_t1539766221 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1674594633_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m315044701_gshared (Dictionary_2_t1539766221 * __this, Il2CppObject* ___dictionary, Il2CppObject* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m315044701(__this, ___dictionary, ___comparer, method) ((  void (*) (Dictionary_2_t1539766221 *, Il2CppObject*, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m315044701_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m2167907641_gshared (Dictionary_2_t1539766221 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m2167907641(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t1539766221 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2__ctor_m2167907641_gshared)(__this, ___info, ___context, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Keys_m3986342454_gshared (Dictionary_2_t1539766221 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m3986342454(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1539766221 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m3986342454_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Values()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Values_m2131825060_gshared (Dictionary_2_t1539766221 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m2131825060(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1539766221 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m2131825060_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m2597111558_gshared (Dictionary_2_t1539766221 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m2597111558(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t1539766221 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m2597111558_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m3733623861_gshared (Dictionary_2_t1539766221 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m3733623861(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t1539766221 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m3733623861_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m3361938684_gshared (Dictionary_2_t1539766221 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m3361938684(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t1539766221 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m3361938684_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m1847490614_gshared (Dictionary_2_t1539766221 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1847490614(__this, ___key, method) ((  bool (*) (Dictionary_2_t1539766221 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1847490614_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m3876460659_gshared (Dictionary_2_t1539766221 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m3876460659(__this, ___key, method) ((  void (*) (Dictionary_2_t1539766221 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m3876460659_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2797802206_gshared (Dictionary_2_t1539766221 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2797802206(__this, method) ((  bool (*) (Dictionary_2_t1539766221 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2797802206_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1202758096_gshared (Dictionary_2_t1539766221 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1202758096(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1539766221 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1202758096_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m703863202_gshared (Dictionary_2_t1539766221 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m703863202(__this, method) ((  bool (*) (Dictionary_2_t1539766221 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m703863202_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3410014089_gshared (Dictionary_2_t1539766221 * __this, KeyValuePair_2_t1028297519  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3410014089(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t1539766221 *, KeyValuePair_2_t1028297519 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3410014089_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3668741661_gshared (Dictionary_2_t1539766221 * __this, KeyValuePair_2_t1028297519  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3668741661(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t1539766221 *, KeyValuePair_2_t1028297519 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3668741661_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3512610605_gshared (Dictionary_2_t1539766221 * __this, KeyValuePair_2U5BU5D_t2144708406* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3512610605(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t1539766221 *, KeyValuePair_2U5BU5D_t2144708406*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3512610605_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m827431042_gshared (Dictionary_2_t1539766221 * __this, KeyValuePair_2_t1028297519  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m827431042(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t1539766221 *, KeyValuePair_2_t1028297519 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m827431042_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m1936628812_gshared (Dictionary_2_t1539766221 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1936628812(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t1539766221 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1936628812_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1911592795_gshared (Dictionary_2_t1539766221 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1911592795(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1539766221 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1911592795_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m3224923602_gshared (Dictionary_2_t1539766221 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m3224923602(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t1539766221 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m3224923602_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m339784735_gshared (Dictionary_2_t1539766221 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m339784735(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1539766221 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m339784735_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m1783486488_gshared (Dictionary_2_t1539766221 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1783486488(__this, method) ((  int32_t (*) (Dictionary_2_t1539766221 *, const MethodInfo*))Dictionary_2_get_Count_m1783486488_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C"  int32_t Dictionary_2_get_Item_m757075567_gshared (Dictionary_2_t1539766221 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m757075567(__this, ___key, method) ((  int32_t (*) (Dictionary_2_t1539766221 *, Il2CppObject *, const MethodInfo*))Dictionary_2_get_Item_m757075567_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m3873549240_gshared (Dictionary_2_t1539766221 * __this, Il2CppObject * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m3873549240(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t1539766221 *, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m3873549240_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m2034229104_gshared (Dictionary_2_t1539766221 * __this, int32_t ___capacity, Il2CppObject* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m2034229104(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t1539766221 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m2034229104_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m2987213383_gshared (Dictionary_2_t1539766221 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m2987213383(__this, ___size, method) ((  void (*) (Dictionary_2_t1539766221 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m2987213383_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m3759085059_gshared (Dictionary_2_t1539766221 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m3759085059(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t1539766221 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m3759085059_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t1028297519  Dictionary_2_make_pair_m1135832215_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1135832215(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t1028297519  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m1135832215_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_key_m2048703303_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m2048703303(__this /* static, unused */, ___key, ___value, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m2048703303_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C"  int32_t Dictionary_2_pick_value_m2663229155_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m2663229155(__this /* static, unused */, ___key, ___value, method) ((  int32_t (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m2663229155_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m3472347244_gshared (Dictionary_2_t1539766221 * __this, KeyValuePair_2U5BU5D_t2144708406* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m3472347244(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t1539766221 *, KeyValuePair_2U5BU5D_t2144708406*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m3472347244_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C"  void Dictionary_2_Resize_m2399412032_gshared (Dictionary_2_t1539766221 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m2399412032(__this, method) ((  void (*) (Dictionary_2_t1539766221 *, const MethodInfo*))Dictionary_2_Resize_m2399412032_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m2610291645_gshared (Dictionary_2_t1539766221 * __this, Il2CppObject * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m2610291645(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t1539766221 *, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_Add_m2610291645_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C"  void Dictionary_2_Clear_m2192278563_gshared (Dictionary_2_t1539766221 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m2192278563(__this, method) ((  void (*) (Dictionary_2_t1539766221 *, const MethodInfo*))Dictionary_2_Clear_m2192278563_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m1452964877_gshared (Dictionary_2_t1539766221 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1452964877(__this, ___key, method) ((  bool (*) (Dictionary_2_t1539766221 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsKey_m1452964877_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m1108279693_gshared (Dictionary_2_t1539766221 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1108279693(__this, ___value, method) ((  bool (*) (Dictionary_2_t1539766221 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m1108279693_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m4181762966_gshared (Dictionary_2_t1539766221 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m4181762966(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t1539766221 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2_GetObjectData_m4181762966_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m2476966030_gshared (Dictionary_2_t1539766221 * __this, Il2CppObject * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m2476966030(__this, ___sender, method) ((  void (*) (Dictionary_2_t1539766221 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m2476966030_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m778152131_gshared (Dictionary_2_t1539766221 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m778152131(__this, ___key, method) ((  bool (*) (Dictionary_2_t1539766221 *, Il2CppObject *, const MethodInfo*))Dictionary_2_Remove_m778152131_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m3647240038_gshared (Dictionary_2_t1539766221 * __this, Il2CppObject * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m3647240038(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t1539766221 *, Il2CppObject *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m3647240038_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C"  KeyCollection_t3863041501 * Dictionary_2_get_Keys_m1386140917_gshared (Dictionary_2_t1539766221 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1386140917(__this, method) ((  KeyCollection_t3863041501 * (*) (Dictionary_2_t1539766221 *, const MethodInfo*))Dictionary_2_get_Keys_m1386140917_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C"  ValueCollection_t3461903315 * Dictionary_2_get_Values_m2409722577_gshared (Dictionary_2_t1539766221 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m2409722577(__this, method) ((  ValueCollection_t3461903315 * (*) (Dictionary_2_t1539766221 *, const MethodInfo*))Dictionary_2_get_Values_m2409722577_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTKey_m1498562210_gshared (Dictionary_2_t1539766221 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1498562210(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t1539766221 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m1498562210_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C"  int32_t Dictionary_2_ToTValue_m975543294_gshared (Dictionary_2_t1539766221 * __this, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m975543294(__this, ___value, method) ((  int32_t (*) (Dictionary_2_t1539766221 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m975543294_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m3357228710_gshared (Dictionary_2_t1539766221 * __this, KeyValuePair_2_t1028297519  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m3357228710(__this, ___pair, method) ((  bool (*) (Dictionary_2_t1539766221 *, KeyValuePair_2_t1028297519 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m3357228710_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C"  Enumerator_t1306794163  Dictionary_2_GetEnumerator_m1793528067_gshared (Dictionary_2_t1539766221 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1793528067(__this, method) ((  Enumerator_t1306794163  (*) (Dictionary_2_t1539766221 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1793528067_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__2(TKey,TValue)
extern "C"  DictionaryEntry_t130027246  Dictionary_2_U3CCopyToU3Em__2_m3057667576_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m3057667576(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t130027246  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m3057667576_gshared)(__this /* static, unused */, ___key, ___value, method)
