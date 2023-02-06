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

// System.Security.Permissions.KeyContainerPermission
struct KeyContainerPermission_t398874472;
// System.Security.Permissions.KeyContainerPermissionAccessEntry[]
struct KeyContainerPermissionAccessEntryU5BU5D_t921796989;
// System.Security.IPermission
struct IPermission_t2562055037;
// System.Security.SecurityElement
struct SecurityElement_t2475331585;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta3569926873.h"
#include "mscorlib_System_Security_Permissions_KeyContainerP1391209357.h"
#include "mscorlib_System_Security_SecurityElement2475331585.h"

// System.Void System.Security.Permissions.KeyContainerPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void KeyContainerPermission__ctor_m2592369089 (KeyContainerPermission_t398874472 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.KeyContainerPermission::.ctor(System.Security.Permissions.KeyContainerPermissionFlags)
extern "C"  void KeyContainerPermission__ctor_m4113174669 (KeyContainerPermission_t398874472 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.KeyContainerPermission::.ctor(System.Security.Permissions.KeyContainerPermissionFlags,System.Security.Permissions.KeyContainerPermissionAccessEntry[])
extern "C"  void KeyContainerPermission__ctor_m2706132339 (KeyContainerPermission_t398874472 * __this, int32_t ___flags, KeyContainerPermissionAccessEntryU5BU5D_t921796989* ___accessList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.KeyContainerPermission::Copy()
extern "C"  Il2CppObject * KeyContainerPermission_Copy_m3636084155 (KeyContainerPermission_t398874472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.KeyContainerPermission::FromXml(System.Security.SecurityElement)
extern "C"  void KeyContainerPermission_FromXml_m3879901970 (KeyContainerPermission_t398874472 * __this, SecurityElement_t2475331585 * ___securityElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.KeyContainerPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * KeyContainerPermission_Intersect_m3960256398 (KeyContainerPermission_t398874472 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.KeyContainerPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool KeyContainerPermission_IsSubsetOf_m2192394984 (KeyContainerPermission_t398874472 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.KeyContainerPermission::IsUnrestricted()
extern "C"  bool KeyContainerPermission_IsUnrestricted_m1833417148 (KeyContainerPermission_t398874472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.KeyContainerPermission::ToXml()
extern "C"  SecurityElement_t2475331585 * KeyContainerPermission_ToXml_m2148075452 (KeyContainerPermission_t398874472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.KeyContainerPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * KeyContainerPermission_Union_m3920719454 (KeyContainerPermission_t398874472 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.KeyContainerPermission::SetFlags(System.Security.Permissions.KeyContainerPermissionFlags)
extern "C"  void KeyContainerPermission_SetFlags_m2501633588 (KeyContainerPermission_t398874472 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.KeyContainerPermission System.Security.Permissions.KeyContainerPermission::Cast(System.Security.IPermission)
extern "C"  KeyContainerPermission_t398874472 * KeyContainerPermission_Cast_m3959170957 (KeyContainerPermission_t398874472 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
