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

// System.Security.Permissions.EnvironmentPermission
struct EnvironmentPermission_t2212666137;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t2562055037;
// System.Security.SecurityElement
struct SecurityElement_t2475331585;
// System.Collections.ArrayList
struct ArrayList_t2121638921;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta3569926873.h"
#include "mscorlib_System_Security_Permissions_EnvironmentPe1874139933.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Security_SecurityElement2475331585.h"
#include "mscorlib_System_Collections_ArrayList2121638921.h"

// System.Void System.Security.Permissions.EnvironmentPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void EnvironmentPermission__ctor_m2302671198 (EnvironmentPermission_t2212666137 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.EnvironmentPermission::.ctor(System.Security.Permissions.EnvironmentPermissionAccess,System.String)
extern "C"  void EnvironmentPermission__ctor_m3440824790 (EnvironmentPermission_t2212666137 * __this, int32_t ___flag, String_t* ___pathList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.EnvironmentPermission::AddPathList(System.Security.Permissions.EnvironmentPermissionAccess,System.String)
extern "C"  void EnvironmentPermission_AddPathList_m3469984468 (EnvironmentPermission_t2212666137 * __this, int32_t ___flag, String_t* ___pathList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.EnvironmentPermission::Copy()
extern "C"  Il2CppObject * EnvironmentPermission_Copy_m3843236484 (EnvironmentPermission_t2212666137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.EnvironmentPermission::FromXml(System.Security.SecurityElement)
extern "C"  void EnvironmentPermission_FromXml_m2973932271 (EnvironmentPermission_t2212666137 * __this, SecurityElement_t2475331585 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.EnvironmentPermission::GetPathList(System.Security.Permissions.EnvironmentPermissionAccess)
extern "C"  String_t* EnvironmentPermission_GetPathList_m2187076928 (EnvironmentPermission_t2212666137 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.EnvironmentPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * EnvironmentPermission_Intersect_m2318940247 (EnvironmentPermission_t2212666137 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.EnvironmentPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool EnvironmentPermission_IsSubsetOf_m1313516591 (EnvironmentPermission_t2212666137 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.EnvironmentPermission::IsUnrestricted()
extern "C"  bool EnvironmentPermission_IsUnrestricted_m471759957 (EnvironmentPermission_t2212666137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.EnvironmentPermission::SetPathList(System.Security.Permissions.EnvironmentPermissionAccess,System.String)
extern "C"  void EnvironmentPermission_SetPathList_m3606899955 (EnvironmentPermission_t2212666137 * __this, int32_t ___flag, String_t* ___pathList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.EnvironmentPermission::ToXml()
extern "C"  SecurityElement_t2475331585 * EnvironmentPermission_ToXml_m3243318155 (EnvironmentPermission_t2212666137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.EnvironmentPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * EnvironmentPermission_Union_m424065959 (EnvironmentPermission_t2212666137 * __this, Il2CppObject * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.EnvironmentPermission::IsEmpty()
extern "C"  bool EnvironmentPermission_IsEmpty_m1512355438 (EnvironmentPermission_t2212666137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.EnvironmentPermission System.Security.Permissions.EnvironmentPermission::Cast(System.Security.IPermission)
extern "C"  EnvironmentPermission_t2212666137 * EnvironmentPermission_Cast_m782988155 (EnvironmentPermission_t2212666137 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.EnvironmentPermission::ThrowInvalidFlag(System.Security.Permissions.EnvironmentPermissionAccess,System.Boolean)
extern "C"  void EnvironmentPermission_ThrowInvalidFlag_m2934281518 (EnvironmentPermission_t2212666137 * __this, int32_t ___flag, bool ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.EnvironmentPermission::GetPathList(System.Collections.ArrayList)
extern "C"  String_t* EnvironmentPermission_GetPathList_m1501164902 (EnvironmentPermission_t2212666137 * __this, ArrayList_t2121638921 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
