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

// System.Security.Policy.Url
struct Url_t1991666218;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t2562055037;
// System.Security.Policy.Evidence
struct Evidence_t2439192402;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Security_Policy_Evidence2439192402.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Security.Policy.Url::.ctor(System.String)
extern "C"  void Url__ctor_m977245746 (Url_t1991666218 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Url::.ctor(System.String,System.Boolean)
extern "C"  void Url__ctor_m2980008715 (Url_t1991666218 * __this, String_t* ___name, bool ___validated, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Policy.Url::CreateIdentityPermission(System.Security.Policy.Evidence)
extern "C"  Il2CppObject * Url_CreateIdentityPermission_m3350332871 (Url_t1991666218 * __this, Evidence_t2439192402 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Url::Equals(System.Object)
extern "C"  bool Url_Equals_m3565614591 (Url_t1991666218 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Url::GetHashCode()
extern "C"  int32_t Url_GetHashCode_m801986275 (Url_t1991666218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Url::ToString()
extern "C"  String_t* Url_ToString_m1945462787 (Url_t1991666218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Url::get_Value()
extern "C"  String_t* Url_get_Value_m1296164211 (Url_t1991666218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Url::Prepare(System.String)
extern "C"  String_t* Url_Prepare_m2474259024 (Url_t1991666218 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
