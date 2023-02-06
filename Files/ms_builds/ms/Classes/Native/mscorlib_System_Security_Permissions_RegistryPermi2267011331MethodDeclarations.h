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

// System.Security.Permissions.RegistryPermission
struct RegistryPermission_t2267011331;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t2562055037;
// System.Security.SecurityElement
struct SecurityElement_t2475331585;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Collections.IList
struct IList_t1612618265;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta3569926873.h"
#include "mscorlib_System_Security_Permissions_RegistryPermi2277687687.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Security_SecurityElement2475331585.h"
#include "mscorlib_System_Collections_ArrayList2121638921.h"

// System.Void System.Security.Permissions.RegistryPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void RegistryPermission__ctor_m3824388316 (RegistryPermission_t2267011331 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.RegistryPermission::AddPathList(System.Security.Permissions.RegistryPermissionAccess,System.String)
extern "C"  void RegistryPermission_AddPathList_m2020722274 (RegistryPermission_t2267011331 * __this, int32_t ___access, String_t* ___pathList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.RegistryPermission::GetPathList(System.Security.Permissions.RegistryPermissionAccess)
extern "C"  String_t* RegistryPermission_GetPathList_m3978435352 (RegistryPermission_t2267011331 * __this, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.RegistryPermission::SetPathList(System.Security.Permissions.RegistryPermissionAccess,System.String)
extern "C"  void RegistryPermission_SetPathList_m523954339 (RegistryPermission_t2267011331 * __this, int32_t ___access, String_t* ___pathList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.RegistryPermission::Copy()
extern "C"  Il2CppObject * RegistryPermission_Copy_m2999184982 (RegistryPermission_t2267011331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.RegistryPermission::FromXml(System.Security.SecurityElement)
extern "C"  void RegistryPermission_FromXml_m3934113773 (RegistryPermission_t2267011331 * __this, SecurityElement_t2475331585 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.RegistryPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * RegistryPermission_Intersect_m3841276969 (RegistryPermission_t2267011331 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.RegistryPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool RegistryPermission_IsSubsetOf_m533470637 (RegistryPermission_t2267011331 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.RegistryPermission::IsUnrestricted()
extern "C"  bool RegistryPermission_IsUnrestricted_m230908055 (RegistryPermission_t2267011331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.RegistryPermission::ToXml()
extern "C"  SecurityElement_t2475331585 * RegistryPermission_ToXml_m260181121 (RegistryPermission_t2267011331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.RegistryPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * RegistryPermission_Union_m3165812857 (RegistryPermission_t2267011331 * __this, Il2CppObject * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.RegistryPermission::IsEmpty()
extern "C"  bool RegistryPermission_IsEmpty_m1195849836 (RegistryPermission_t2267011331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.RegistryPermission System.Security.Permissions.RegistryPermission::Cast(System.Security.IPermission)
extern "C"  RegistryPermission_t2267011331 * RegistryPermission_Cast_m122710509 (RegistryPermission_t2267011331 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.RegistryPermission::ThrowInvalidFlag(System.Security.Permissions.RegistryPermissionAccess,System.Boolean)
extern "C"  void RegistryPermission_ThrowInvalidFlag_m660966962 (RegistryPermission_t2267011331 * __this, int32_t ___flag, bool ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.RegistryPermission::GetPathList(System.Collections.ArrayList)
extern "C"  String_t* RegistryPermission_GetPathList_m2799800386 (RegistryPermission_t2267011331 * __this, ArrayList_t2121638921 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.RegistryPermission::KeyIsSubsetOf(System.Collections.IList,System.Collections.IList)
extern "C"  bool RegistryPermission_KeyIsSubsetOf_m65028091 (RegistryPermission_t2267011331 * __this, Il2CppObject * ___local, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.RegistryPermission::AddWithUnionKey(System.Collections.IList,System.String)
extern "C"  void RegistryPermission_AddWithUnionKey_m1394235407 (RegistryPermission_t2267011331 * __this, Il2CppObject * ___list, String_t* ___pathList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.RegistryPermission::IntersectKeys(System.Collections.IList,System.Collections.IList,System.Collections.IList)
extern "C"  void RegistryPermission_IntersectKeys_m3383300911 (RegistryPermission_t2267011331 * __this, Il2CppObject * ___local, Il2CppObject * ___target, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
