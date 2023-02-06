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

// System.Security.Permissions.UrlIdentityPermission
struct UrlIdentityPermission_t366371795;
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

// System.Void System.Security.Permissions.UrlIdentityPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void UrlIdentityPermission__ctor_m2399451416 (UrlIdentityPermission_t366371795 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UrlIdentityPermission::.ctor(System.String)
extern "C"  void UrlIdentityPermission__ctor_m104096849 (UrlIdentityPermission_t366371795 * __this, String_t* ___site, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UrlIdentityPermission::set_Url(System.String)
extern "C"  void UrlIdentityPermission_set_Url_m700312865 (UrlIdentityPermission_t366371795 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.UrlIdentityPermission::Copy()
extern "C"  Il2CppObject * UrlIdentityPermission_Copy_m74944830 (UrlIdentityPermission_t366371795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UrlIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C"  void UrlIdentityPermission_FromXml_m3548830505 (UrlIdentityPermission_t366371795 * __this, SecurityElement_t2475331585 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.UrlIdentityPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * UrlIdentityPermission_Intersect_m992165649 (UrlIdentityPermission_t366371795 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.UrlIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool UrlIdentityPermission_IsSubsetOf_m3133177013 (UrlIdentityPermission_t366371795 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.UrlIdentityPermission::ToXml()
extern "C"  SecurityElement_t2475331585 * UrlIdentityPermission_ToXml_m2390393873 (UrlIdentityPermission_t366371795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.UrlIdentityPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * UrlIdentityPermission_Union_m1390817121 (UrlIdentityPermission_t366371795 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.UrlIdentityPermission::IsEmpty()
extern "C"  bool UrlIdentityPermission_IsEmpty_m2190873972 (UrlIdentityPermission_t366371795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.UrlIdentityPermission System.Security.Permissions.UrlIdentityPermission::Cast(System.Security.IPermission)
extern "C"  UrlIdentityPermission_t366371795 * UrlIdentityPermission_Cast_m955596807 (UrlIdentityPermission_t366371795 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.UrlIdentityPermission::Match(System.String)
extern "C"  bool UrlIdentityPermission_Match_m1390390860 (UrlIdentityPermission_t366371795 * __this, String_t* ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
