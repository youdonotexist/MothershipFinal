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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Double>
struct ValueCollection_t1149005142;
// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t3521835344;
// System.Collections.Generic.IEnumerator`1<System.Double>
struct IEnumerator_1_t2017623062;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Object
struct Il2CppObject;
// System.Double[]
struct DoubleU5BU5D_t1048280995;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_V3288863285.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Double>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C"  void ValueCollection__ctor_m1004678508_gshared (ValueCollection_t1149005142 * __this, Dictionary_2_t3521835344 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m1004678508(__this, ___dictionary, method) ((  void (*) (ValueCollection_t1149005142 *, Dictionary_2_t3521835344 *, const MethodInfo*))ValueCollection__ctor_m1004678508_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Double>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C"  void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m178958662_gshared (ValueCollection_t1149005142 * __this, double ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m178958662(__this, ___item, method) ((  void (*) (ValueCollection_t1149005142 *, double, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m178958662_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Double>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C"  void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m4261949711_gshared (ValueCollection_t1149005142 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m4261949711(__this, method) ((  void (*) (ValueCollection_t1149005142 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m4261949711_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Double>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C"  bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m2774447776_gshared (ValueCollection_t1149005142 * __this, double ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m2774447776(__this, ___item, method) ((  bool (*) (ValueCollection_t1149005142 *, double, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m2774447776_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Double>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C"  bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m4155832133_gshared (ValueCollection_t1149005142 * __this, double ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m4155832133(__this, ___item, method) ((  bool (*) (ValueCollection_t1149005142 *, double, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m4155832133_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Double>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C"  Il2CppObject* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m463851293_gshared (ValueCollection_t1149005142 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m463851293(__this, method) ((  Il2CppObject* (*) (ValueCollection_t1149005142 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m463851293_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void ValueCollection_System_Collections_ICollection_CopyTo_m3755739987_gshared (ValueCollection_t1149005142 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m3755739987(__this, ___array, ___index, method) ((  void (*) (ValueCollection_t1149005142 *, Il2CppArray *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m3755739987_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m4113533966_gshared (ValueCollection_t1149005142 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m4113533966(__this, method) ((  Il2CppObject * (*) (ValueCollection_t1149005142 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m4113533966_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Double>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C"  bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m1049623635_gshared (ValueCollection_t1149005142 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m1049623635(__this, method) ((  bool (*) (ValueCollection_t1149005142 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m1049623635_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Double>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m1183311539_gshared (ValueCollection_t1149005142 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m1183311539(__this, method) ((  bool (*) (ValueCollection_t1149005142 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m1183311539_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Double>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * ValueCollection_System_Collections_ICollection_get_SyncRoot_m806702175_gshared (ValueCollection_t1149005142 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m806702175(__this, method) ((  Il2CppObject * (*) (ValueCollection_t1149005142 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m806702175_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Double>::CopyTo(TValue[],System.Int32)
extern "C"  void ValueCollection_CopyTo_m3373266611_gshared (ValueCollection_t1149005142 * __this, DoubleU5BU5D_t1048280995* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m3373266611(__this, ___array, ___index, method) ((  void (*) (ValueCollection_t1149005142 *, DoubleU5BU5D_t1048280995*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m3373266611_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Double>::GetEnumerator()
extern "C"  Enumerator_t3288863287  ValueCollection_GetEnumerator_m4058216662_gshared (ValueCollection_t1149005142 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m4058216662(__this, method) ((  Enumerator_t3288863287  (*) (ValueCollection_t1149005142 *, const MethodInfo*))ValueCollection_GetEnumerator_m4058216662_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Double>::get_Count()
extern "C"  int32_t ValueCollection_get_Count_m1236994553_gshared (ValueCollection_t1149005142 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m1236994553(__this, method) ((  int32_t (*) (ValueCollection_t1149005142 *, const MethodInfo*))ValueCollection_get_Count_m1236994553_gshared)(__this, method)
