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

// Ionic.EnumUtil
struct EnumUtil_t1652931449;
// System.String
struct String_t;
// System.Enum
struct Enum_t2778772662;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Enum2778772662.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"

// System.Void Ionic.EnumUtil::.ctor()
extern "C"  void EnumUtil__ctor_m3730897740 (EnumUtil_t1652931449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.EnumUtil::GetDescription(System.Enum)
extern "C"  String_t* EnumUtil_GetDescription_m731878609 (Il2CppObject * __this /* static, unused */, Enum_t2778772662 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Ionic.EnumUtil::Parse(System.Type,System.String)
extern "C"  Il2CppObject * EnumUtil_Parse_m3509565165 (Il2CppObject * __this /* static, unused */, Type_t * ___enumType, String_t* ___stringRepresentation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Ionic.EnumUtil::Parse(System.Type,System.String,System.Boolean)
extern "C"  Il2CppObject * EnumUtil_Parse_m1576551664 (Il2CppObject * __this /* static, unused */, Type_t * ___enumType, String_t* ___stringRepresentation, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
