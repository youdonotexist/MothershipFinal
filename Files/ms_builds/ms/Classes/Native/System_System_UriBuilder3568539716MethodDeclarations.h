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

// System.UriBuilder
struct UriBuilder_t3568539716;
// System.Uri
struct Uri_t2776692961;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri2776692961.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.UriBuilder::.ctor(System.Uri)
extern "C"  void UriBuilder__ctor_m101958223 (UriBuilder_t3568539716 * __this, Uri_t2776692961 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriBuilder::set_Host(System.String)
extern "C"  void UriBuilder_set_Host_m3163713877 (UriBuilder_t3568539716 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.UriBuilder::get_Uri()
extern "C"  Uri_t2776692961 * UriBuilder_get_Uri_m1652017167 (UriBuilder_t3568539716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UriBuilder::Equals(System.Object)
extern "C"  bool UriBuilder_Equals_m2032023843 (UriBuilder_t3568539716 * __this, Il2CppObject * ___rparam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UriBuilder::GetHashCode()
extern "C"  int32_t UriBuilder_GetHashCode_m615431547 (UriBuilder_t3568539716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UriBuilder::ToString()
extern "C"  String_t* UriBuilder_ToString_m1248051345 (UriBuilder_t3568539716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
