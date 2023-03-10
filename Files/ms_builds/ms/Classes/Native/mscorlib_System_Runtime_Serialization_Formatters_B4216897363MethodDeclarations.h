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

// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct ObjectWriter_t4216897363;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1640433287;
// System.IO.BinaryWriter
struct BinaryWriter_t2314211483;
// System.Object
struct Il2CppObject;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t3833532446;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct TypeMetadata_t1707658058;
// System.Type
struct Type_t;
// System.Array
struct Il2CppArray;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t1882292308;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_F3852587989.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Fo125002241.h"
#include "mscorlib_System_IO_BinaryWriter2314211483.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B1707658058.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Reflection_Assembly1882292308.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B1738289281.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.Formatters.FormatterTypeStyle)
extern "C"  void ObjectWriter__ctor_m381946506 (ObjectWriter_t4216897363 * __this, Il2CppObject * ___surrogateSelector, StreamingContext_t986364934  ___context, int32_t ___assemblyFormat, int32_t ___typeFormat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::.cctor()
extern "C"  void ObjectWriter__cctor_m3965119238 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectGraph(System.IO.BinaryWriter,System.Object,System.Runtime.Remoting.Messaging.Header[])
extern "C"  void ObjectWriter_WriteObjectGraph_m1495072729 (ObjectWriter_t4216897363 * __this, BinaryWriter_t2314211483 * ___writer, Il2CppObject * ___obj, HeaderU5BU5D_t3833532446* ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::QueueObject(System.Object)
extern "C"  void ObjectWriter_QueueObject_m2473573471 (ObjectWriter_t4216897363 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteQueuedObjects(System.IO.BinaryWriter)
extern "C"  void ObjectWriter_WriteQueuedObjects_m2511231202 (ObjectWriter_t4216897363 * __this, BinaryWriter_t2314211483 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectInstance(System.IO.BinaryWriter,System.Object,System.Boolean)
extern "C"  void ObjectWriter_WriteObjectInstance_m971580148 (ObjectWriter_t4216897363 * __this, BinaryWriter_t2314211483 * ___writer, Il2CppObject * ___obj, bool ___isValueObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteSerializationEnd(System.IO.BinaryWriter)
extern "C"  void ObjectWriter_WriteSerializationEnd_m1314927090 (Il2CppObject * __this /* static, unused */, BinaryWriter_t2314211483 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObject(System.IO.BinaryWriter,System.Int64,System.Object)
extern "C"  void ObjectWriter_WriteObject_m3567310656 (ObjectWriter_t4216897363 * __this, BinaryWriter_t2314211483 * ___writer, int64_t ___id, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetObjectData(System.Object,System.Runtime.Serialization.Formatters.Binary.TypeMetadata&,System.Object&)
extern "C"  void ObjectWriter_GetObjectData_m2156431818 (ObjectWriter_t4216897363 * __this, Il2CppObject * ___obj, TypeMetadata_t1707658058 ** ___metadata, Il2CppObject ** ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata System.Runtime.Serialization.Formatters.Binary.ObjectWriter::CreateMemberTypeMetadata(System.Type)
extern "C"  TypeMetadata_t1707658058 * ObjectWriter_CreateMemberTypeMetadata_m2890061644 (ObjectWriter_t4216897363 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C"  void ObjectWriter_WriteArray_m1513238702 (ObjectWriter_t4216897363 * __this, BinaryWriter_t2314211483 * ___writer, int64_t ___id, Il2CppArray * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteGenericArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C"  void ObjectWriter_WriteGenericArray_m621377085 (ObjectWriter_t4216897363 * __this, BinaryWriter_t2314211483 * ___writer, int64_t ___id, Il2CppArray * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C"  void ObjectWriter_WriteObjectArray_m120109231 (ObjectWriter_t4216897363 * __this, BinaryWriter_t2314211483 * ___writer, int64_t ___id, Il2CppArray * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteStringArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C"  void ObjectWriter_WriteStringArray_m2755688349 (ObjectWriter_t4216897363 * __this, BinaryWriter_t2314211483 * ___writer, int64_t ___id, Il2CppArray * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WritePrimitiveTypeArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C"  void ObjectWriter_WritePrimitiveTypeArray_m360539603 (ObjectWriter_t4216897363 * __this, BinaryWriter_t2314211483 * ___writer, int64_t ___id, Il2CppArray * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::BlockWrite(System.IO.BinaryWriter,System.Array,System.Int32)
extern "C"  void ObjectWriter_BlockWrite_m817303837 (ObjectWriter_t4216897363 * __this, BinaryWriter_t2314211483 * ___writer, Il2CppArray * ___array, int32_t ___dataSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteSingleDimensionArrayElements(System.IO.BinaryWriter,System.Array,System.Type)
extern "C"  void ObjectWriter_WriteSingleDimensionArrayElements_m2757598982 (ObjectWriter_t4216897363 * __this, BinaryWriter_t2314211483 * ___writer, Il2CppArray * ___array, Type_t * ___elementType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteNullFiller(System.IO.BinaryWriter,System.Int32)
extern "C"  void ObjectWriter_WriteNullFiller_m518213209 (ObjectWriter_t4216897363 * __this, BinaryWriter_t2314211483 * ___writer, int32_t ___numNulls, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectReference(System.IO.BinaryWriter,System.Int64)
extern "C"  void ObjectWriter_WriteObjectReference_m2251958827 (ObjectWriter_t4216897363 * __this, BinaryWriter_t2314211483 * ___writer, int64_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteValue(System.IO.BinaryWriter,System.Type,System.Object)
extern "C"  void ObjectWriter_WriteValue_m2747102579 (ObjectWriter_t4216897363 * __this, BinaryWriter_t2314211483 * ___writer, Type_t * ___valueType, Il2CppObject * ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteString(System.IO.BinaryWriter,System.Int64,System.String)
extern "C"  void ObjectWriter_WriteString_m3827047068 (ObjectWriter_t4216897363 * __this, BinaryWriter_t2314211483 * ___writer, int64_t ___id, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteAssembly(System.IO.BinaryWriter,System.Reflection.Assembly)
extern "C"  int32_t ObjectWriter_WriteAssembly_m2789424019 (ObjectWriter_t4216897363 * __this, BinaryWriter_t2314211483 * ___writer, Assembly_t1882292308 * ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteAssemblyName(System.IO.BinaryWriter,System.String)
extern "C"  int32_t ObjectWriter_WriteAssemblyName_m1777729680 (ObjectWriter_t4216897363 * __this, BinaryWriter_t2314211483 * ___writer, String_t* ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetAssemblyId(System.Reflection.Assembly)
extern "C"  int32_t ObjectWriter_GetAssemblyId_m1900776174 (ObjectWriter_t4216897363 * __this, Assembly_t1882292308 * ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetAssemblyNameId(System.String)
extern "C"  int32_t ObjectWriter_GetAssemblyNameId_m218712095 (ObjectWriter_t4216897363 * __this, String_t* ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::RegisterAssembly(System.String,System.Boolean&)
extern "C"  int32_t ObjectWriter_RegisterAssembly_m3637201543 (ObjectWriter_t4216897363 * __this, String_t* ___assembly, bool* ___firstTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WritePrimitiveValue(System.IO.BinaryWriter,System.Object)
extern "C"  void ObjectWriter_WritePrimitiveValue_m2267947199 (Il2CppObject * __this /* static, unused */, BinaryWriter_t2314211483 * ___writer, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteTypeCode(System.IO.BinaryWriter,System.Type)
extern "C"  void ObjectWriter_WriteTypeCode_m2289062049 (Il2CppObject * __this /* static, unused */, BinaryWriter_t2314211483 * ___writer, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.Binary.TypeTag System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetTypeTag(System.Type)
extern "C"  uint8_t ObjectWriter_GetTypeTag_m835100856 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteTypeSpec(System.IO.BinaryWriter,System.Type)
extern "C"  void ObjectWriter_WriteTypeSpec_m4250094447 (ObjectWriter_t4216897363 * __this, BinaryWriter_t2314211483 * ___writer, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
