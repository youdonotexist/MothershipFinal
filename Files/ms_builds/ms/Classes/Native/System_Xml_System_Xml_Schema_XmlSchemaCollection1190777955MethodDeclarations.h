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

// System.Xml.Schema.XmlSchemaCollection
struct XmlSchemaCollection_t1190777955;
// System.Xml.XmlNameTable
struct XmlNameTable_t3232213908;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t3827173367;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Object
struct Il2CppObject;
// System.Xml.Schema.XmlSchemaCollectionEnumerator
struct XmlSchemaCollectionEnumerator_t4002806983;
// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t1700465963;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNameTable3232213908.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet3827173367.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_Schema_ValidationEventArgs1700465963.h"

// System.Void System.Xml.Schema.XmlSchemaCollection::.ctor(System.Xml.XmlNameTable)
extern "C"  void XmlSchemaCollection__ctor_m1218368366 (XmlSchemaCollection_t1190777955 * __this, XmlNameTable_t3232213908 * ___nameTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::.ctor(System.Xml.Schema.XmlSchemaSet)
extern "C"  void XmlSchemaCollection__ctor_m717772417 (XmlSchemaCollection_t1190777955 * __this, XmlSchemaSet_t3827173367 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.get_Count()
extern "C"  int32_t XmlSchemaCollection_System_Collections_ICollection_get_Count_m2435524583 (XmlSchemaCollection_t1190777955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void XmlSchemaCollection_System_Collections_ICollection_CopyTo_m146759330 (XmlSchemaCollection_t1190777955 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool XmlSchemaCollection_System_Collections_ICollection_get_IsSynchronized_m832654286 (XmlSchemaCollection_t1190777955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.Schema.XmlSchemaCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * XmlSchemaCollection_System_Collections_IEnumerable_GetEnumerator_m3765302123 (XmlSchemaCollection_t1190777955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * XmlSchemaCollection_System_Collections_ICollection_get_SyncRoot_m1719580346 (XmlSchemaCollection_t1190777955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchemaCollection::get_SchemaSet()
extern "C"  XmlSchemaSet_t3827173367 * XmlSchemaCollection_get_SchemaSet_m3650114568 (XmlSchemaCollection_t1190777955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaCollection::get_Count()
extern "C"  int32_t XmlSchemaCollection_get_Count_m1461156680 (XmlSchemaCollection_t1190777955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaCollectionEnumerator System.Xml.Schema.XmlSchemaCollection::GetEnumerator()
extern "C"  XmlSchemaCollectionEnumerator_t4002806983 * XmlSchemaCollection_GetEnumerator_m4098478378 (XmlSchemaCollection_t1190777955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::OnValidationError(System.Object,System.Xml.Schema.ValidationEventArgs)
extern "C"  void XmlSchemaCollection_OnValidationError_m1289440393 (XmlSchemaCollection_t1190777955 * __this, Il2CppObject * ___o, ValidationEventArgs_t1700465963 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
