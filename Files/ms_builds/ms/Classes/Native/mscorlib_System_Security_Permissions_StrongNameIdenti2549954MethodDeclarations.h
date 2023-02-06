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

// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t2864573480;
// System.String
struct String_t;
// System.Version
struct Version_t497901645;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_StrongNameIdenti2549954.h"
#include "mscorlib_System_Security_Permissions_StrongNamePub2864573480.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Version497901645.h"

// System.Void System.Security.Permissions.StrongNameIdentityPermission/SNIP::.ctor(System.Security.Permissions.StrongNamePublicKeyBlob,System.String,System.Version)
extern "C"  void SNIP__ctor_m3278824834 (SNIP_t2549954 * __this, StrongNamePublicKeyBlob_t2864573480 * ___pk, String_t* ___name, Version_t497901645 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNameIdentityPermission/SNIP System.Security.Permissions.StrongNameIdentityPermission/SNIP::CreateDefault()
extern "C"  SNIP_t2549954  SNIP_CreateDefault_m2821242104 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission/SNIP::IsNameSubsetOf(System.String)
extern "C"  bool SNIP_IsNameSubsetOf_m2053063997 (SNIP_t2549954 * __this, String_t* ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission/SNIP::IsSubsetOf(System.Security.Permissions.StrongNameIdentityPermission/SNIP)
extern "C"  bool SNIP_IsSubsetOf_m1761032335 (SNIP_t2549954 * __this, SNIP_t2549954  ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
