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

// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t3919018054;
// System.Security.IPermission
struct IPermission_t2562055037;
// System.Security.SecurityElement
struct SecurityElement_t2475331585;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta3569926873.h"
#include "mscorlib_System_Security_Permissions_SecurityPermi1437051986.h"
#include "mscorlib_System_Security_SecurityElement2475331585.h"

// System.Void System.Security.Permissions.SecurityPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void SecurityPermission__ctor_m864427167 (SecurityPermission_t3919018054 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SecurityPermission::.ctor(System.Security.Permissions.SecurityPermissionFlag)
extern "C"  void SecurityPermission__ctor_m3042719510 (SecurityPermission_t3919018054 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SecurityPermission::set_Flags(System.Security.Permissions.SecurityPermissionFlag)
extern "C"  void SecurityPermission_set_Flags_m3479431326 (SecurityPermission_t3919018054 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsUnrestricted()
extern "C"  bool SecurityPermission_IsUnrestricted_m113825050 (SecurityPermission_t3919018054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.SecurityPermission::Copy()
extern "C"  Il2CppObject * SecurityPermission_Copy_m4246051481 (SecurityPermission_t3919018054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.SecurityPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * SecurityPermission_Intersect_m2366446700 (SecurityPermission_t3919018054 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.SecurityPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * SecurityPermission_Union_m3505582652 (SecurityPermission_t3919018054 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool SecurityPermission_IsSubsetOf_m2058372554 (SecurityPermission_t3919018054 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SecurityPermission::FromXml(System.Security.SecurityElement)
extern "C"  void SecurityPermission_FromXml_m3961432944 (SecurityPermission_t3919018054 * __this, SecurityElement_t2475331585 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.SecurityPermission::ToXml()
extern "C"  SecurityElement_t2475331585 * SecurityPermission_ToXml_m258336926 (SecurityPermission_t3919018054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsEmpty()
extern "C"  bool SecurityPermission_IsEmpty_m3718545737 (SecurityPermission_t3919018054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.SecurityPermission System.Security.Permissions.SecurityPermission::Cast(System.Security.IPermission)
extern "C"  SecurityPermission_t3919018054 * SecurityPermission_Cast_m644352077 (SecurityPermission_t3919018054 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
