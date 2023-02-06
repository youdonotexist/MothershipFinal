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

// System.Security.Permissions.ZoneIdentityPermission
struct ZoneIdentityPermission_t1781721360;
// System.Security.IPermission
struct IPermission_t2562055037;
// System.Security.SecurityElement
struct SecurityElement_t2475331585;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_SecurityZone92406705.h"
#include "mscorlib_System_Security_SecurityElement2475331585.h"

// System.Void System.Security.Permissions.ZoneIdentityPermission::.ctor(System.Security.SecurityZone)
extern "C"  void ZoneIdentityPermission__ctor_m17979109 (ZoneIdentityPermission_t1781721360 * __this, int32_t ___zone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ZoneIdentityPermission::Copy()
extern "C"  Il2CppObject * ZoneIdentityPermission_Copy_m250521443 (ZoneIdentityPermission_t1781721360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.ZoneIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool ZoneIdentityPermission_IsSubsetOf_m121812544 (ZoneIdentityPermission_t1781721360 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ZoneIdentityPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * ZoneIdentityPermission_Union_m1795968006 (ZoneIdentityPermission_t1781721360 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ZoneIdentityPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * ZoneIdentityPermission_Intersect_m1676706102 (ZoneIdentityPermission_t1781721360 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.ZoneIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C"  void ZoneIdentityPermission_FromXml_m4116355770 (ZoneIdentityPermission_t1781721360 * __this, SecurityElement_t2475331585 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.ZoneIdentityPermission::ToXml()
extern "C"  SecurityElement_t2475331585 * ZoneIdentityPermission_ToXml_m274846484 (ZoneIdentityPermission_t1781721360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.ZoneIdentityPermission::set_SecurityZone(System.Security.SecurityZone)
extern "C"  void ZoneIdentityPermission_set_SecurityZone_m2364940914 (ZoneIdentityPermission_t1781721360 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.ZoneIdentityPermission System.Security.Permissions.ZoneIdentityPermission::Cast(System.Security.IPermission)
extern "C"  ZoneIdentityPermission_t1781721360 * ZoneIdentityPermission_Cast_m1565530253 (ZoneIdentityPermission_t1781721360 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
