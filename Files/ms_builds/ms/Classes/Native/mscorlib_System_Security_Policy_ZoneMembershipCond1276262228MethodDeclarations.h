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

// System.Security.Policy.ZoneMembershipCondition
struct ZoneMembershipCondition_t1276262228;
// System.Security.Policy.Evidence
struct Evidence_t2439192402;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t590969783;
// System.Object
struct Il2CppObject;
// System.Security.SecurityElement
struct SecurityElement_t2475331585;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t1512127021;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_SecurityZone92406705.h"
#include "mscorlib_System_Security_Policy_Evidence2439192402.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Security_SecurityElement2475331585.h"
#include "mscorlib_System_Security_Policy_PolicyLevel1512127021.h"

// System.Void System.Security.Policy.ZoneMembershipCondition::.ctor()
extern "C"  void ZoneMembershipCondition__ctor_m3645163238 (ZoneMembershipCondition_t1276262228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ZoneMembershipCondition::.ctor(System.Security.SecurityZone)
extern "C"  void ZoneMembershipCondition__ctor_m4245048363 (ZoneMembershipCondition_t1276262228 * __this, int32_t ___zone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityZone System.Security.Policy.ZoneMembershipCondition::get_SecurityZone()
extern "C"  int32_t ZoneMembershipCondition_get_SecurityZone_m2808075587 (ZoneMembershipCondition_t1276262228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ZoneMembershipCondition::set_SecurityZone(System.Security.SecurityZone)
extern "C"  void ZoneMembershipCondition_set_SecurityZone_m3371844972 (ZoneMembershipCondition_t1276262228 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.ZoneMembershipCondition::Check(System.Security.Policy.Evidence)
extern "C"  bool ZoneMembershipCondition_Check_m3548157732 (ZoneMembershipCondition_t1276262228 * __this, Evidence_t2439192402 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.ZoneMembershipCondition::Copy()
extern "C"  Il2CppObject * ZoneMembershipCondition_Copy_m2572321885 (ZoneMembershipCondition_t1276262228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.ZoneMembershipCondition::Equals(System.Object)
extern "C"  bool ZoneMembershipCondition_Equals_m2514270357 (ZoneMembershipCondition_t1276262228 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ZoneMembershipCondition::FromXml(System.Security.SecurityElement)
extern "C"  void ZoneMembershipCondition_FromXml_m67830068 (ZoneMembershipCondition_t1276262228 * __this, SecurityElement_t2475331585 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ZoneMembershipCondition::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void ZoneMembershipCondition_FromXml_m2245668685 (ZoneMembershipCondition_t1276262228 * __this, SecurityElement_t2475331585 * ___e, PolicyLevel_t1512127021 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.ZoneMembershipCondition::GetHashCode()
extern "C"  int32_t ZoneMembershipCondition_GetHashCode_m3796009081 (ZoneMembershipCondition_t1276262228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.ZoneMembershipCondition::ToString()
extern "C"  String_t* ZoneMembershipCondition_ToString_m3588820141 (ZoneMembershipCondition_t1276262228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.ZoneMembershipCondition::ToXml()
extern "C"  SecurityElement_t2475331585 * ZoneMembershipCondition_ToXml_m2190195290 (ZoneMembershipCondition_t1276262228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.ZoneMembershipCondition::ToXml(System.Security.Policy.PolicyLevel)
extern "C"  SecurityElement_t2475331585 * ZoneMembershipCondition_ToXml_m2945556949 (ZoneMembershipCondition_t1276262228 * __this, PolicyLevel_t1512127021 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
