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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t3198324071;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3161373071;
// System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>
struct IDictionary_2_t79022562;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t4139652596;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t4169961817;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1541724277;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t1226632055;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t825493869;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22686855369.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E2965352012.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C"  void Dictionary_2__ctor_m2192340946_gshared (Dictionary_2_t3198324071 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m2192340946(__this, method) ((  void (*) (Dictionary_2_t3198324071 *, const MethodInfo*))Dictionary_2__ctor_m2192340946_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m3163007305_gshared (Dictionary_2_t3198324071 * __this, Il2CppObject* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m3163007305(__this, ___comparer, method) ((  void (*) (Dictionary_2_t3198324071 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3163007305_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m2260402723_gshared (Dictionary_2_t3198324071 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m2260402723(__this, ___capacity, method) ((  void (*) (Dictionary_2_t3198324071 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m2260402723_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m976396983_gshared (Dictionary_2_t3198324071 * __this, Il2CppObject* ___dictionary, Il2CppObject* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m976396983(__this, ___dictionary, ___comparer, method) ((  void (*) (Dictionary_2_t3198324071 *, Il2CppObject*, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m976396983_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m2638584339_gshared (Dictionary_2_t3198324071 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m2638584339(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t3198324071 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2__ctor_m2638584339_gshared)(__this, ___info, ___context, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Keys_m2416766096_gshared (Dictionary_2_t3198324071 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m2416766096(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3198324071 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m2416766096_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Values()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Values_m1302465918_gshared (Dictionary_2_t3198324071 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m1302465918(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3198324071 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m1302465918_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m1767874860_gshared (Dictionary_2_t3198324071 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1767874860(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t3198324071 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1767874860_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m2394837659_gshared (Dictionary_2_t3198324071 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m2394837659(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3198324071 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m2394837659_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m3976165078_gshared (Dictionary_2_t3198324071 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m3976165078(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3198324071 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m3976165078_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m2368981404_gshared (Dictionary_2_t3198324071 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m2368981404(__this, ___key, method) ((  bool (*) (Dictionary_2_t3198324071 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m2368981404_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m728195801_gshared (Dictionary_2_t3198324071 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m728195801(__this, ___key, method) ((  void (*) (Dictionary_2_t3198324071 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m728195801_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1030728504_gshared (Dictionary_2_t3198324071 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1030728504(__this, method) ((  bool (*) (Dictionary_2_t3198324071 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1030728504_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m4188447978_gshared (Dictionary_2_t3198324071 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m4188447978(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3198324071 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m4188447978_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m2736565628_gshared (Dictionary_2_t3198324071 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m2736565628(__this, method) ((  bool (*) (Dictionary_2_t3198324071 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m2736565628_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m225251055_gshared (Dictionary_2_t3198324071 * __this, KeyValuePair_2_t2686855369  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m225251055(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t3198324071 *, KeyValuePair_2_t2686855369 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m225251055_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m40912375_gshared (Dictionary_2_t3198324071 * __this, KeyValuePair_2_t2686855369  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m40912375(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t3198324071 *, KeyValuePair_2_t2686855369 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m40912375_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2360590611_gshared (Dictionary_2_t3198324071 * __this, KeyValuePair_2U5BU5D_t4139652596* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2360590611(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3198324071 *, KeyValuePair_2U5BU5D_t4139652596*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2360590611_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m309690076_gshared (Dictionary_2_t3198324071 * __this, KeyValuePair_2_t2686855369  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m309690076(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t3198324071 *, KeyValuePair_2_t2686855369 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m309690076_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m3797777842_gshared (Dictionary_2_t3198324071 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m3797777842(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3198324071 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m3797777842_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3635471297_gshared (Dictionary_2_t3198324071 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3635471297(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3198324071 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3635471297_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2013500536_gshared (Dictionary_2_t3198324071 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2013500536(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t3198324071 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2013500536_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3976846085_gshared (Dictionary_2_t3198324071 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3976846085(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3198324071 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3976846085_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m2429776882_gshared (Dictionary_2_t3198324071 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m2429776882(__this, method) ((  int32_t (*) (Dictionary_2_t3198324071 *, const MethodInfo*))Dictionary_2_get_Count_m2429776882_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C"  bool Dictionary_2_get_Item_m3848440021_gshared (Dictionary_2_t3198324071 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m3848440021(__this, ___key, method) ((  bool (*) (Dictionary_2_t3198324071 *, Il2CppObject *, const MethodInfo*))Dictionary_2_get_Item_m3848440021_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m4194407954_gshared (Dictionary_2_t3198324071 * __this, Il2CppObject * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m4194407954(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3198324071 *, Il2CppObject *, bool, const MethodInfo*))Dictionary_2_set_Item_m4194407954_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m1320795978_gshared (Dictionary_2_t3198324071 * __this, int32_t ___capacity, Il2CppObject* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1320795978(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t3198324071 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m1320795978_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m1091961261_gshared (Dictionary_2_t3198324071 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1091961261(__this, ___size, method) ((  void (*) (Dictionary_2_t3198324071 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1091961261_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m46787305_gshared (Dictionary_2_t3198324071 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m46787305(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3198324071 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m46787305_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t2686855369  Dictionary_2_make_pair_m1491903613_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1491903613(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t2686855369  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, bool, const MethodInfo*))Dictionary_2_make_pair_m1491903613_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_key(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_key_m2978846113_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m2978846113(__this /* static, unused */, ___key, ___value, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, bool, const MethodInfo*))Dictionary_2_pick_key_m2978846113_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C"  bool Dictionary_2_pick_value_m1709670205_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1709670205(__this /* static, unused */, ___key, ___value, method) ((  bool (*) (Il2CppObject * /* static, unused */, Il2CppObject *, bool, const MethodInfo*))Dictionary_2_pick_value_m1709670205_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m2136794310_gshared (Dictionary_2_t3198324071 * __this, KeyValuePair_2U5BU5D_t4139652596* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m2136794310(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3198324071 *, KeyValuePair_2U5BU5D_t4139652596*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m2136794310_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C"  void Dictionary_2_Resize_m3595856550_gshared (Dictionary_2_t3198324071 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m3595856550(__this, method) ((  void (*) (Dictionary_2_t3198324071 *, const MethodInfo*))Dictionary_2_Resize_m3595856550_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m2997840163_gshared (Dictionary_2_t3198324071 * __this, Il2CppObject * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m2997840163(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3198324071 *, Il2CppObject *, bool, const MethodInfo*))Dictionary_2_Add_m2997840163_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C"  void Dictionary_2_Clear_m3893441533_gshared (Dictionary_2_t3198324071 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m3893441533(__this, method) ((  void (*) (Dictionary_2_t3198324071 *, const MethodInfo*))Dictionary_2_Clear_m3893441533_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m2707901159_gshared (Dictionary_2_t3198324071 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m2707901159(__this, ___key, method) ((  bool (*) (Dictionary_2_t3198324071 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsKey_m2707901159_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m2848248679_gshared (Dictionary_2_t3198324071 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m2848248679(__this, ___value, method) ((  bool (*) (Dictionary_2_t3198324071 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m2848248679_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m878780016_gshared (Dictionary_2_t3198324071 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m878780016(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t3198324071 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2_GetObjectData_m878780016_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m3166796276_gshared (Dictionary_2_t3198324071 * __this, Il2CppObject * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m3166796276(__this, ___sender, method) ((  void (*) (Dictionary_2_t3198324071 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m3166796276_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m1836153257_gshared (Dictionary_2_t3198324071 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1836153257(__this, ___key, method) ((  bool (*) (Dictionary_2_t3198324071 *, Il2CppObject *, const MethodInfo*))Dictionary_2_Remove_m1836153257_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m3955870784_gshared (Dictionary_2_t3198324071 * __this, Il2CppObject * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m3955870784(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t3198324071 *, Il2CppObject *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m3955870784_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Keys()
extern "C"  KeyCollection_t1226632055 * Dictionary_2_get_Keys_m1566835675_gshared (Dictionary_2_t3198324071 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1566835675(__this, method) ((  KeyCollection_t1226632055 * (*) (Dictionary_2_t3198324071 *, const MethodInfo*))Dictionary_2_get_Keys_m1566835675_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C"  ValueCollection_t825493869 * Dictionary_2_get_Values_m73313463_gshared (Dictionary_2_t3198324071 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m73313463(__this, method) ((  ValueCollection_t825493869 * (*) (Dictionary_2_t3198324071 *, const MethodInfo*))Dictionary_2_get_Values_m73313463_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTKey_m2428705020_gshared (Dictionary_2_t3198324071 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m2428705020(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t3198324071 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m2428705020_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C"  bool Dictionary_2_ToTValue_m21984344_gshared (Dictionary_2_t3198324071 * __this, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m21984344(__this, ___value, method) ((  bool (*) (Dictionary_2_t3198324071 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m21984344_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m2058411916_gshared (Dictionary_2_t3198324071 * __this, KeyValuePair_2_t2686855369  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m2058411916(__this, ___pair, method) ((  bool (*) (Dictionary_2_t3198324071 *, KeyValuePair_2_t2686855369 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m2058411916_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C"  Enumerator_t2965352013  Dictionary_2_GetEnumerator_m3747816989_gshared (Dictionary_2_t3198324071 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m3747816989(__this, method) ((  Enumerator_t2965352013  (*) (Dictionary_2_t3198324071 *, const MethodInfo*))Dictionary_2_GetEnumerator_m3747816989_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__2(TKey,TValue)
extern "C"  DictionaryEntry_t130027246  Dictionary_2_U3CCopyToU3Em__2_m2706449810_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m2706449810(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t130027246  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m2706449810_gshared)(__this /* static, unused */, ___key, ___value, method)
