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

// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t3521835344;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3161373071;
// System.Collections.Generic.IDictionary`2<System.Object,System.Double>
struct IDictionary_2_t402533835;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>[]
struct KeyValuePair_2U5BU5D_t1383006279;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IEnumerator_1_t198505794;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1541724277;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Double>
struct KeyCollection_t1550143328;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Double>
struct ValueCollection_t1149005142;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23010366642.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E3288863285.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor()
extern "C"  void Dictionary_2__ctor_m904159313_gshared (Dictionary_2_t3521835344 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m904159313(__this, method) ((  void (*) (Dictionary_2_t3521835344 *, const MethodInfo*))Dictionary_2__ctor_m904159313_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1396285512_gshared (Dictionary_2_t3521835344 * __this, Il2CppObject* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1396285512(__this, ___comparer, method) ((  void (*) (Dictionary_2_t3521835344 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m1396285512_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m811017250_gshared (Dictionary_2_t3521835344 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m811017250(__this, ___capacity, method) ((  void (*) (Dictionary_2_t3521835344 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m811017250_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1997603958_gshared (Dictionary_2_t3521835344 * __this, Il2CppObject* ___dictionary, Il2CppObject* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1997603958(__this, ___dictionary, ___comparer, method) ((  void (*) (Dictionary_2_t3521835344 *, Il2CppObject*, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m1997603958_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m3956565522_gshared (Dictionary_2_t3521835344 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m3956565522(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t3521835344 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2__ctor_m3956565522_gshared)(__this, ___info, ___context, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Keys_m2464295895_gshared (Dictionary_2_t3521835344 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m2464295895(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3521835344 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m2464295895_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.get_Values()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Values_m4028929797_gshared (Dictionary_2_t3521835344 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m4028929797(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3521835344 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m4028929797_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m2985921047_gshared (Dictionary_2_t3521835344 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m2985921047(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t3521835344 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m2985921047_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m3607677564_gshared (Dictionary_2_t3521835344 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m3607677564(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3521835344 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m3607677564_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m1540347477_gshared (Dictionary_2_t3521835344 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1540347477(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3521835344 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1540347477_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m3218034433_gshared (Dictionary_2_t3521835344 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m3218034433(__this, ___key, method) ((  bool (*) (Dictionary_2_t3521835344 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m3218034433_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m540523706_gshared (Dictionary_2_t3521835344 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m540523706(__this, ___key, method) ((  void (*) (Dictionary_2_t3521835344 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m540523706_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1079486451_gshared (Dictionary_2_t3521835344 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1079486451(__this, method) ((  bool (*) (Dictionary_2_t3521835344 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1079486451_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1008072607_gshared (Dictionary_2_t3521835344 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1008072607(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3521835344 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1008072607_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m295582327_gshared (Dictionary_2_t3521835344 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m295582327(__this, method) ((  bool (*) (Dictionary_2_t3521835344 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m295582327_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2322220112_gshared (Dictionary_2_t3521835344 * __this, KeyValuePair_2_t3010366642  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2322220112(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t3521835344 *, KeyValuePair_2_t3010366642 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2322220112_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3608400114_gshared (Dictionary_2_t3521835344 * __this, KeyValuePair_2_t3010366642  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3608400114(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t3521835344 *, KeyValuePair_2_t3010366642 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3608400114_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3627860020_gshared (Dictionary_2_t3521835344 * __this, KeyValuePair_2U5BU5D_t1383006279* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3627860020(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3521835344 *, KeyValuePair_2U5BU5D_t1383006279*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3627860020_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1122339991_gshared (Dictionary_2_t3521835344 * __this, KeyValuePair_2_t3010366642  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1122339991(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t3521835344 *, KeyValuePair_2_t3010366642 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1122339991_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m1301876243_gshared (Dictionary_2_t3521835344 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1301876243(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3521835344 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1301876243_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1090890446_gshared (Dictionary_2_t3521835344 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1090890446(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3521835344 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1090890446_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m4171985739_gshared (Dictionary_2_t3521835344 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m4171985739(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t3521835344 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m4171985739_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2665877094_gshared (Dictionary_2_t3521835344 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2665877094(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3521835344 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2665877094_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m4054980409_gshared (Dictionary_2_t3521835344 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m4054980409(__this, method) ((  int32_t (*) (Dictionary_2_t3521835344 *, const MethodInfo*))Dictionary_2_get_Count_m4054980409_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Item(TKey)
extern "C"  double Dictionary_2_get_Item_m3070158482_gshared (Dictionary_2_t3521835344 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m3070158482(__this, ___key, method) ((  double (*) (Dictionary_2_t3521835344 *, Il2CppObject *, const MethodInfo*))Dictionary_2_get_Item_m3070158482_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m2904372305_gshared (Dictionary_2_t3521835344 * __this, Il2CppObject * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m2904372305(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3521835344 *, Il2CppObject *, double, const MethodInfo*))Dictionary_2_set_Item_m2904372305_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m3769511881_gshared (Dictionary_2_t3521835344 * __this, int32_t ___capacity, Il2CppObject* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m3769511881(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t3521835344 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m3769511881_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m1007306510_gshared (Dictionary_2_t3521835344 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1007306510(__this, ___size, method) ((  void (*) (Dictionary_2_t3521835344 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1007306510_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m4068782730_gshared (Dictionary_2_t3521835344 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m4068782730(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3521835344 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m4068782730_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t3010366642  Dictionary_2_make_pair_m2064373206_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m2064373206(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t3010366642  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, double, const MethodInfo*))Dictionary_2_make_pair_m2064373206_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Double>::pick_key(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_key_m4185574240_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m4185574240(__this /* static, unused */, ___key, ___value, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, double, const MethodInfo*))Dictionary_2_pick_key_m4185574240_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::pick_value(TKey,TValue)
extern "C"  double Dictionary_2_pick_value_m2887534112_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m2887534112(__this /* static, unused */, ___key, ___value, method) ((  double (*) (Il2CppObject * /* static, unused */, Il2CppObject *, double, const MethodInfo*))Dictionary_2_pick_value_m2887534112_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m3262429701_gshared (Dictionary_2_t3521835344 * __this, KeyValuePair_2U5BU5D_t1383006279* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m3262429701(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3521835344 *, KeyValuePair_2U5BU5D_t1383006279*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m3262429701_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Resize()
extern "C"  void Dictionary_2_Resize_m2316931591_gshared (Dictionary_2_t3521835344 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m2316931591(__this, method) ((  void (*) (Dictionary_2_t3521835344 *, const MethodInfo*))Dictionary_2_Resize_m2316931591_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m1816895364_gshared (Dictionary_2_t3521835344 * __this, Il2CppObject * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1816895364(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3521835344 *, Il2CppObject *, double, const MethodInfo*))Dictionary_2_Add_m1816895364_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Clear()
extern "C"  void Dictionary_2_Clear_m2605259900_gshared (Dictionary_2_t3521835344 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m2605259900(__this, method) ((  void (*) (Dictionary_2_t3521835344 *, const MethodInfo*))Dictionary_2_Clear_m2605259900_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m1217521250_gshared (Dictionary_2_t3521835344 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1217521250(__this, ___key, method) ((  bool (*) (Dictionary_2_t3521835344 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsKey_m1217521250_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m988756322_gshared (Dictionary_2_t3521835344 * __this, double ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m988756322(__this, ___value, method) ((  bool (*) (Dictionary_2_t3521835344 *, double, const MethodInfo*))Dictionary_2_ContainsValue_m988756322_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m153058159_gshared (Dictionary_2_t3521835344 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m153058159(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t3521835344 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2_GetObjectData_m153058159_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m596561493_gshared (Dictionary_2_t3521835344 * __this, Il2CppObject * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m596561493(__this, ___sender, method) ((  void (*) (Dictionary_2_t3521835344 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m596561493_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m3761003854_gshared (Dictionary_2_t3521835344 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m3761003854(__this, ___key, method) ((  bool (*) (Dictionary_2_t3521835344 *, Il2CppObject *, const MethodInfo*))Dictionary_2_Remove_m3761003854_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m1963637947_gshared (Dictionary_2_t3521835344 * __this, Il2CppObject * ___key, double* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1963637947(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t3521835344 *, Il2CppObject *, double*, const MethodInfo*))Dictionary_2_TryGetValue_m1963637947_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Keys()
extern "C"  KeyCollection_t1550143328 * Dictionary_2_get_Keys_m2161476388_gshared (Dictionary_2_t3521835344 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m2161476388(__this, method) ((  KeyCollection_t1550143328 * (*) (Dictionary_2_t3521835344 *, const MethodInfo*))Dictionary_2_get_Keys_m2161476388_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Values()
extern "C"  ValueCollection_t1149005142 * Dictionary_2_get_Values_m3675886244_gshared (Dictionary_2_t3521835344 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m3675886244(__this, method) ((  ValueCollection_t1149005142 * (*) (Dictionary_2_t3521835344 *, const MethodInfo*))Dictionary_2_get_Values_m3675886244_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ToTKey(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTKey_m3635433147_gshared (Dictionary_2_t3521835344 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m3635433147(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t3521835344 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m3635433147_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ToTValue(System.Object)
extern "C"  double Dictionary_2_ToTValue_m1199848251_gshared (Dictionary_2_t3521835344 * __this, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1199848251(__this, ___value, method) ((  double (*) (Dictionary_2_t3521835344 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m1199848251_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m20716337_gshared (Dictionary_2_t3521835344 * __this, KeyValuePair_2_t3010366642  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m20716337(__this, ___pair, method) ((  bool (*) (Dictionary_2_t3521835344 *, KeyValuePair_2_t3010366642 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m20716337_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::GetEnumerator()
extern "C"  Enumerator_t3288863286  Dictionary_2_GetEnumerator_m2919675734_gshared (Dictionary_2_t3521835344 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m2919675734(__this, method) ((  Enumerator_t3288863286  (*) (Dictionary_2_t3521835344 *, const MethodInfo*))Dictionary_2_GetEnumerator_m2919675734_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Double>::<CopyTo>m__2(TKey,TValue)
extern "C"  DictionaryEntry_t130027246  Dictionary_2_U3CCopyToU3Em__2_m2695622499_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m2695622499(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t130027246  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, double, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m2695622499_gshared)(__this /* static, unused */, ___key, ___value, method)
