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

// System.Security.NamedPermissionSet
struct NamedPermissionSet_t3555529215;
// System.String
struct String_t;
// System.Security.PermissionSet
struct PermissionSet_t2781735032;
// System.Security.SecurityElement
struct SecurityElement_t2475331585;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Security_Permissions_PermissionSta3569926873.h"
#include "mscorlib_System_Security_NamedPermissionSet3555529215.h"
#include "mscorlib_System_Security_SecurityElement2475331585.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Security.NamedPermissionSet::.ctor()
extern "C"  void NamedPermissionSet__ctor_m263038953 (NamedPermissionSet_t3555529215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.NamedPermissionSet::.ctor(System.String,System.Security.Permissions.PermissionState)
extern "C"  void NamedPermissionSet__ctor_m3259299836 (NamedPermissionSet_t3555529215 * __this, String_t* ___name, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.NamedPermissionSet::.ctor(System.Security.NamedPermissionSet)
extern "C"  void NamedPermissionSet__ctor_m3776015712 (NamedPermissionSet_t3555529215 * __this, NamedPermissionSet_t3555529215 * ___permSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.NamedPermissionSet::get_Name()
extern "C"  String_t* NamedPermissionSet_get_Name_m1991316146 (NamedPermissionSet_t3555529215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.NamedPermissionSet::set_Name(System.String)
extern "C"  void NamedPermissionSet_set_Name_m868725343 (NamedPermissionSet_t3555529215 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.NamedPermissionSet::Copy()
extern "C"  PermissionSet_t2781735032 * NamedPermissionSet_Copy_m1595915871 (NamedPermissionSet_t3555529215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.NamedPermissionSet::FromXml(System.Security.SecurityElement)
extern "C"  void NamedPermissionSet_FromXml_m3714157713 (NamedPermissionSet_t3555529215 * __this, SecurityElement_t2475331585 * ___et, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.NamedPermissionSet::ToXml()
extern "C"  SecurityElement_t2475331585 * NamedPermissionSet_ToXml_m977658461 (NamedPermissionSet_t3555529215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.NamedPermissionSet::Equals(System.Object)
extern "C"  bool NamedPermissionSet_Equals_m1712129368 (NamedPermissionSet_t3555529215 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.NamedPermissionSet::GetHashCode()
extern "C"  int32_t NamedPermissionSet_GetHashCode_m3059829052 (NamedPermissionSet_t3555529215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
