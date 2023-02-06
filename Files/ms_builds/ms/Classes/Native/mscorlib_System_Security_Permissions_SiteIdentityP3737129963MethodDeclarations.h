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

// System.Security.Permissions.SiteIdentityPermission
struct SiteIdentityPermission_t3737129963;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t2562055037;
// System.Security.SecurityElement
struct SecurityElement_t2475331585;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta3569926873.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Security_SecurityElement2475331585.h"

// System.Void System.Security.Permissions.SiteIdentityPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void SiteIdentityPermission__ctor_m1717631684 (SiteIdentityPermission_t3737129963 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SiteIdentityPermission::.ctor(System.String)
extern "C"  void SiteIdentityPermission__ctor_m1223465725 (SiteIdentityPermission_t3737129963 * __this, String_t* ___site, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SiteIdentityPermission::.cctor()
extern "C"  void SiteIdentityPermission__cctor_m591702056 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SiteIdentityPermission::set_Site(System.String)
extern "C"  void SiteIdentityPermission_set_Site_m3170256479 (SiteIdentityPermission_t3737129963 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.SiteIdentityPermission::Copy()
extern "C"  Il2CppObject * SiteIdentityPermission_Copy_m3074213694 (SiteIdentityPermission_t3737129963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SiteIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C"  void SiteIdentityPermission_FromXml_m1154286549 (SiteIdentityPermission_t3737129963 * __this, SecurityElement_t2475331585 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.SiteIdentityPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * SiteIdentityPermission_Intersect_m462451985 (SiteIdentityPermission_t3737129963 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SiteIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool SiteIdentityPermission_IsSubsetOf_m1134640581 (SiteIdentityPermission_t3737129963 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.SiteIdentityPermission::ToXml()
extern "C"  SecurityElement_t2475331585 * SiteIdentityPermission_ToXml_m1909960345 (SiteIdentityPermission_t3737129963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.SiteIdentityPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * SiteIdentityPermission_Union_m3059639649 (SiteIdentityPermission_t3737129963 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SiteIdentityPermission::IsEmpty()
extern "C"  bool SiteIdentityPermission_IsEmpty_m4093842052 (SiteIdentityPermission_t3737129963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.SiteIdentityPermission System.Security.Permissions.SiteIdentityPermission::Cast(System.Security.IPermission)
extern "C"  SiteIdentityPermission_t3737129963 * SiteIdentityPermission_Cast_m4062532717 (SiteIdentityPermission_t3737129963 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SiteIdentityPermission::IsValid(System.String)
extern "C"  bool SiteIdentityPermission_IsValid_m2164204655 (SiteIdentityPermission_t3737129963 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SiteIdentityPermission::Match(System.String)
extern "C"  bool SiteIdentityPermission_Match_m293398332 (SiteIdentityPermission_t3737129963 * __this, String_t* ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
