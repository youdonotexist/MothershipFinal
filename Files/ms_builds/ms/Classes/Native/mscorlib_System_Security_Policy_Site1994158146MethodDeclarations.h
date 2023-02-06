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

// System.Security.Policy.Site
struct Site_t1994158146;
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

// System.Void System.Security.Policy.Site::.ctor(System.String)
extern "C"  void Site__ctor_m2168970562 (Site_t1994158146 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.Site System.Security.Policy.Site::CreateFromUrl(System.String)
extern "C"  Site_t1994158146 * Site_CreateFromUrl_m3611663356 (Il2CppObject * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Policy.Site::CreateIdentityPermission(System.Security.Policy.Evidence)
extern "C"  Il2CppObject * Site_CreateIdentityPermission_m1596917003 (Site_t1994158146 * __this, Evidence_t2439192402 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Site::Equals(System.Object)
extern "C"  bool Site_Equals_m3296173619 (Site_t1994158146 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Site::GetHashCode()
extern "C"  int32_t Site_GetHashCode_m4026328971 (Site_t1994158146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Site::ToString()
extern "C"  String_t* Site_ToString_m2804909101 (Site_t1994158146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Site::get_Name()
extern "C"  String_t* Site_get_Name_m3443184021 (Site_t1994158146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Site::IsValid(System.String)
extern "C"  bool Site_IsValid_m3247139504 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Site::UrlToSite(System.String)
extern "C"  String_t* Site_UrlToSite_m2296079504 (Il2CppObject * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
