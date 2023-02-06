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

// System.Security.IPermission
struct IPermission_t2562055037;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t2475331585;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Security_Permissions_PermissionSta3569926873.h"
#include "mscorlib_System_Security_SecurityElement2475331585.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void System.Security.PermissionBuilder::.cctor()
extern "C"  void PermissionBuilder__cctor_m105545430 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionBuilder::Create(System.String,System.Security.Permissions.PermissionState)
extern "C"  Il2CppObject * PermissionBuilder_Create_m1757565510 (Il2CppObject * __this /* static, unused */, String_t* ___fullname, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionBuilder::Create(System.Security.SecurityElement)
extern "C"  Il2CppObject * PermissionBuilder_Create_m3105411366 (Il2CppObject * __this /* static, unused */, SecurityElement_t2475331585 * ___se, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionBuilder::Create(System.String,System.Security.SecurityElement)
extern "C"  Il2CppObject * PermissionBuilder_Create_m1777053986 (Il2CppObject * __this /* static, unused */, String_t* ___fullname, SecurityElement_t2475331585 * ___se, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionBuilder::Create(System.Type)
extern "C"  Il2CppObject * PermissionBuilder_Create_m1691674554 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionBuilder::CreatePermission(System.String,System.Security.SecurityElement)
extern "C"  Il2CppObject * PermissionBuilder_CreatePermission_m914144467 (Il2CppObject * __this /* static, unused */, String_t* ___fullname, SecurityElement_t2475331585 * ___se, const MethodInfo* method) IL2CPP_METHOD_ATTR;
