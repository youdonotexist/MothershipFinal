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

// System.Security.Policy.Zone
struct Zone_t1994372263;
// System.Security.IPermission
struct IPermission_t2562055037;
// System.Security.Policy.Evidence
struct Evidence_t2439192402;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_SecurityZone92406705.h"
#include "mscorlib_System_Security_Policy_Evidence2439192402.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Security.Policy.Zone::.ctor(System.Security.SecurityZone)
extern "C"  void Zone__ctor_m1524349632 (Zone_t1994372263 * __this, int32_t ___zone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityZone System.Security.Policy.Zone::get_SecurityZone()
extern "C"  int32_t Zone_get_SecurityZone_m2242251246 (Zone_t1994372263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Policy.Zone::CreateIdentityPermission(System.Security.Policy.Evidence)
extern "C"  Il2CppObject * Zone_CreateIdentityPermission_m584088966 (Zone_t1994372263 * __this, Evidence_t2439192402 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.Zone System.Security.Policy.Zone::CreateFromUrl(System.String)
extern "C"  Zone_t1994372263 * Zone_CreateFromUrl_m2372988358 (Il2CppObject * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Zone::Equals(System.Object)
extern "C"  bool Zone_Equals_m1202010158 (Zone_t1994372263 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Zone::GetHashCode()
extern "C"  int32_t Zone_GetHashCode_m1192602758 (Zone_t1994372263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Zone::ToString()
extern "C"  String_t* Zone_ToString_m2719897874 (Zone_t1994372263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
