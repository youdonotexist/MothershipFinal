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

// Tasharen.DataNode
struct DataNode_t1435852608;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IO.StreamWriter
struct StreamWriter_t872970458;
// System.IO.StreamReader
struct StreamReader_t717565226;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IO_StreamWriter872970458.h"
#include "mscorlib_System_IO_StreamReader717565226.h"

// System.Void Tasharen.DataNode::.ctor()
extern "C"  void DataNode__ctor_m158632397 (DataNode_t1435852608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tasharen.DataNode::.cctor()
extern "C"  void DataNode__cctor_m140540800 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Tasharen.DataNode::get_type()
extern "C"  Type_t * DataNode_get_type_m3583549344 (DataNode_t1435852608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Tasharen.DataNode::Get(System.Type)
extern "C"  Il2CppObject * DataNode_Get_m2250385603 (DataNode_t1435852608 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Tasharen.DataNode Tasharen.DataNode::AddChild()
extern "C"  DataNode_t1435852608 * DataNode_AddChild_m2489868157 (DataNode_t1435852608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Tasharen.DataNode Tasharen.DataNode::AddChild(System.String)
extern "C"  DataNode_t1435852608 * DataNode_AddChild_m1108808357 (DataNode_t1435852608 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Tasharen.DataNode Tasharen.DataNode::AddChild(System.String,System.Object)
extern "C"  DataNode_t1435852608 * DataNode_AddChild_m3278985395 (DataNode_t1435852608 * __this, String_t* ___name, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Tasharen.DataNode Tasharen.DataNode::SetChild(System.String,System.Object)
extern "C"  DataNode_t1435852608 * DataNode_SetChild_m118058036 (DataNode_t1435852608 * __this, String_t* ___name, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Tasharen.DataNode Tasharen.DataNode::GetChild(System.String)
extern "C"  DataNode_t1435852608 * DataNode_GetChild_m1331018970 (DataNode_t1435852608 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tasharen.DataNode::Write(System.IO.StreamWriter)
extern "C"  void DataNode_Write_m1213154670 (DataNode_t1435852608 * __this, StreamWriter_t872970458 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tasharen.DataNode::Read(System.IO.StreamReader)
extern "C"  void DataNode_Read_m3116840385 (DataNode_t1435852608 * __this, StreamReader_t717565226 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tasharen.DataNode::Clear()
extern "C"  void DataNode_Clear_m1859732984 (DataNode_t1435852608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Tasharen.DataNode::GetValueDataString()
extern "C"  String_t* DataNode_GetValueDataString_m1841590474 (DataNode_t1435852608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Tasharen.DataNode::GetValueString()
extern "C"  String_t* DataNode_GetValueString_m483175936 (DataNode_t1435852608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Tasharen.DataNode::SetValue(System.String,System.Type,System.String[])
extern "C"  bool DataNode_SetValue_m987153085 (DataNode_t1435852608 * __this, String_t* ___text, Type_t * ___type, StringU5BU5D_t2956870243* ___parts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Tasharen.DataNode::ToString()
extern "C"  String_t* DataNode_ToString_m4119936768 (DataNode_t1435852608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tasharen.DataNode::Write(System.String&,System.Int32)
extern "C"  void DataNode_Write_m3007052483 (DataNode_t1435852608 * __this, String_t** ___data, int32_t ___tab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tasharen.DataNode::Write(System.IO.StreamWriter,System.Int32)
extern "C"  void DataNode_Write_m3017316905 (DataNode_t1435852608 * __this, StreamWriter_t872970458 * ___writer, int32_t ___tab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Tasharen.DataNode::Read(System.IO.StreamReader,System.String,System.Int32&)
extern "C"  String_t* DataNode_Read_m3992895823 (DataNode_t1435852608 * __this, StreamReader_t717565226 * ___reader, String_t* ___line, int32_t* ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Tasharen.DataNode::Set(System.String,System.Int32)
extern "C"  bool DataNode_Set_m63971798 (DataNode_t1435852608 * __this, String_t* ___line, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Tasharen.DataNode::GetNextLine(System.IO.StreamReader)
extern "C"  String_t* DataNode_GetNextLine_m2257579679 (Il2CppObject * __this /* static, unused */, StreamReader_t717565226 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Tasharen.DataNode::CalculateTabs(System.String)
extern "C"  int32_t DataNode_CalculateTabs_m2133800869 (Il2CppObject * __this /* static, unused */, String_t* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Tasharen.DataNode::Escape(System.String)
extern "C"  String_t* DataNode_Escape_m1544074381 (Il2CppObject * __this /* static, unused */, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Tasharen.DataNode::Unescape(System.String)
extern "C"  String_t* DataNode_Unescape_m880754772 (Il2CppObject * __this /* static, unused */, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Tasharen.DataNode::NameToType(System.String)
extern "C"  Type_t * DataNode_NameToType_m4209080421 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Tasharen.DataNode::TypeToName(System.Type)
extern "C"  String_t* DataNode_TypeToName_m1040839845 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Tasharen.DataNode::ConvertValue(System.Object,System.Type)
extern "C"  Il2CppObject * DataNode_ConvertValue_m275679495 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
