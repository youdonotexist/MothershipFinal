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

// JSON
struct JSON_t2286824;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"
#include "mscorlib_System_Collections_Hashtable3875263730.h"
#include "mscorlib_System_Collections_ArrayList2121638921.h"

// System.Void JSON::.ctor()
extern "C"  void JSON__ctor_m3471551155 (JSON_t2286824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object JSON::JsonDecode(System.Byte[])
extern "C"  Il2CppObject * JSON_JsonDecode_m774389805 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object JSON::JsonDecode(System.String)
extern "C"  Il2CppObject * JSON_JsonDecode_m2832195430 (Il2CppObject * __this /* static, unused */, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object JSON::JsonDecode(System.String,System.Boolean&)
extern "C"  Il2CppObject * JSON_JsonDecode_m2745855829 (Il2CppObject * __this /* static, unused */, String_t* ___json, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JSON::JsonEncode(System.Object)
extern "C"  String_t* JSON_JsonEncode_m1211332002 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable JSON::ParseObject(System.Char[],System.Int32&,System.Boolean&)
extern "C"  Hashtable_t3875263730 * JSON_ParseObject_m2773781745 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList JSON::ParseArray(System.Char[],System.Int32&,System.Boolean&)
extern "C"  ArrayList_t2121638921 * JSON_ParseArray_m3216175690 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object JSON::ParseValue(System.Char[],System.Int32&,System.Boolean&)
extern "C"  Il2CppObject * JSON_ParseValue_m3884142107 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JSON::ParseString(System.Char[],System.Int32&,System.Boolean&)
extern "C"  String_t* JSON_ParseString_m2473705869 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object JSON::ParseNumber(System.Char[],System.Int32&,System.Boolean&)
extern "C"  Il2CppObject * JSON_ParseNumber_m1072181351 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JSON::GetLastIndexOfNumber(System.Char[],System.Int32)
extern "C"  int32_t JSON_GetLastIndexOfNumber_m59250881 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___json, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSON::EatWhitespace(System.Char[],System.Int32&)
extern "C"  void JSON_EatWhitespace_m3590502154 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___json, int32_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JSON::LookAhead(System.Char[],System.Int32)
extern "C"  int32_t JSON_LookAhead_m1175837473 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___json, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JSON::NextToken(System.Char[],System.Int32&)
extern "C"  int32_t JSON_NextToken_m3025747687 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___json, int32_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSON::SerializeValue(System.Object,System.Text.StringBuilder)
extern "C"  bool JSON_SerializeValue_m3939133410 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value, StringBuilder_t3822575854 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSON::SerializeObject(System.Collections.Hashtable,System.Text.StringBuilder)
extern "C"  bool JSON_SerializeObject_m3039475960 (Il2CppObject * __this /* static, unused */, Hashtable_t3875263730 * ___anObject, StringBuilder_t3822575854 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSON::SerializeArray(System.Collections.ArrayList,System.Text.StringBuilder)
extern "C"  bool JSON_SerializeArray_m4092735971 (Il2CppObject * __this /* static, unused */, ArrayList_t2121638921 * ___anArray, StringBuilder_t3822575854 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSON::SerializeString(System.String,System.Text.StringBuilder)
extern "C"  bool JSON_SerializeString_m564169080 (Il2CppObject * __this /* static, unused */, String_t* ___aString, StringBuilder_t3822575854 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSON::SerializeNumber(System.Double,System.Text.StringBuilder)
extern "C"  bool JSON_SerializeNumber_m1968281984 (Il2CppObject * __this /* static, unused */, double ___number, StringBuilder_t3822575854 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSON::IsNumeric(System.Object)
extern "C"  bool JSON_IsNumeric_m871610420 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
