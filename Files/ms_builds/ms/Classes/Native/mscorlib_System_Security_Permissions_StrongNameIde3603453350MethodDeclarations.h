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

// System.Security.Permissions.StrongNameIdentityPermission
struct StrongNameIdentityPermission_t3603453350;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t2864573480;
// System.String
struct String_t;
// System.Version
struct Version_t497901645;
// System.Security.IPermission
struct IPermission_t2562055037;
// System.Security.SecurityElement
struct SecurityElement_t2475331585;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta3569926873.h"
#include "mscorlib_System_Security_Permissions_StrongNamePub2864573480.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Version497901645.h"
#include "mscorlib_System_Security_Permissions_StrongNameIde3603453350.h"
#include "mscorlib_System_Security_SecurityElement2475331585.h"
#include "mscorlib_System_Security_Permissions_StrongNameIdenti2549954.h"

// System.Void System.Security.Permissions.StrongNameIdentityPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void StrongNameIdentityPermission__ctor_m1585978751 (StrongNameIdentityPermission_t3603453350 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.StrongNameIdentityPermission::.ctor(System.Security.Permissions.StrongNamePublicKeyBlob,System.String,System.Version)
extern "C"  void StrongNameIdentityPermission__ctor_m373253377 (StrongNameIdentityPermission_t3603453350 * __this, StrongNamePublicKeyBlob_t2864573480 * ___blob, String_t* ___name, Version_t497901645 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.StrongNameIdentityPermission::.ctor(System.Security.Permissions.StrongNameIdentityPermission)
extern "C"  void StrongNameIdentityPermission__ctor_m2700203362 (StrongNameIdentityPermission_t3603453350 * __this, StrongNameIdentityPermission_t3603453350 * ___snip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.StrongNameIdentityPermission::.cctor()
extern "C"  void StrongNameIdentityPermission__cctor_m3340932259 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.StrongNameIdentityPermission::get_Name()
extern "C"  String_t* StrongNameIdentityPermission_get_Name_m1169073777 (StrongNameIdentityPermission_t3603453350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Permissions.StrongNameIdentityPermission::get_PublicKey()
extern "C"  StrongNamePublicKeyBlob_t2864573480 * StrongNameIdentityPermission_get_PublicKey_m3395278810 (StrongNameIdentityPermission_t3603453350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Security.Permissions.StrongNameIdentityPermission::get_Version()
extern "C"  Version_t497901645 * StrongNameIdentityPermission_get_Version_m756233413 (StrongNameIdentityPermission_t3603453350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.StrongNameIdentityPermission::Copy()
extern "C"  Il2CppObject * StrongNameIdentityPermission_Copy_m2924906233 (StrongNameIdentityPermission_t3603453350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.StrongNameIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C"  void StrongNameIdentityPermission_FromXml_m2359444560 (StrongNameIdentityPermission_t3603453350 * __this, SecurityElement_t2475331585 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNameIdentityPermission/SNIP System.Security.Permissions.StrongNameIdentityPermission::FromSecurityElement(System.Security.SecurityElement)
extern "C"  SNIP_t2549954  StrongNameIdentityPermission_FromSecurityElement_m1843625365 (StrongNameIdentityPermission_t3603453350 * __this, SecurityElement_t2475331585 * ___se, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.StrongNameIdentityPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * StrongNameIdentityPermission_Intersect_m1350863052 (StrongNameIdentityPermission_t3603453350 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool StrongNameIdentityPermission_IsSubsetOf_m659635050 (StrongNameIdentityPermission_t3603453350 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.StrongNameIdentityPermission::ToXml()
extern "C"  SecurityElement_t2475331585 * StrongNameIdentityPermission_ToXml_m741921598 (StrongNameIdentityPermission_t3603453350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.StrongNameIdentityPermission::ToSecurityElement(System.Security.SecurityElement,System.Security.Permissions.StrongNameIdentityPermission/SNIP)
extern "C"  void StrongNameIdentityPermission_ToSecurityElement_m4288897919 (StrongNameIdentityPermission_t3603453350 * __this, SecurityElement_t2475331585 * ___se, SNIP_t2549954  ___snip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.StrongNameIdentityPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * StrongNameIdentityPermission_Union_m1188007580 (StrongNameIdentityPermission_t3603453350 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::IsUnrestricted()
extern "C"  bool StrongNameIdentityPermission_IsUnrestricted_m660845434 (StrongNameIdentityPermission_t3603453350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::Contains(System.Security.Permissions.StrongNameIdentityPermission/SNIP)
extern "C"  bool StrongNameIdentityPermission_Contains_m2100415886 (StrongNameIdentityPermission_t3603453350 * __this, SNIP_t2549954  ___snip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::IsEmpty(System.Security.Permissions.StrongNameIdentityPermission/SNIP)
extern "C"  bool StrongNameIdentityPermission_IsEmpty_m1650442496 (StrongNameIdentityPermission_t3603453350 * __this, SNIP_t2549954  ___snip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::IsEmpty()
extern "C"  bool StrongNameIdentityPermission_IsEmpty_m3430747881 (StrongNameIdentityPermission_t3603453350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNameIdentityPermission System.Security.Permissions.StrongNameIdentityPermission::Cast(System.Security.IPermission)
extern "C"  StrongNameIdentityPermission_t3603453350 * StrongNameIdentityPermission_Cast_m2158221389 (StrongNameIdentityPermission_t3603453350 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::Match(System.String)
extern "C"  bool StrongNameIdentityPermission_Match_m1262725559 (StrongNameIdentityPermission_t3603453350 * __this, String_t* ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
