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

// System.Security.Policy.StrongNameMembershipCondition
struct StrongNameMembershipCondition_t1915379070;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t2864573480;
// System.String
struct String_t;
// System.Version
struct Version_t497901645;
// System.Security.SecurityElement
struct SecurityElement_t2475331585;
// System.Security.Policy.Evidence
struct Evidence_t2439192402;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t590969783;
// System.Object
struct Il2CppObject;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t1512127021;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_StrongNamePub2864573480.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Version497901645.h"
#include "mscorlib_System_Security_SecurityElement2475331585.h"
#include "mscorlib_System_Security_Policy_Evidence2439192402.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Security_Policy_PolicyLevel1512127021.h"

// System.Void System.Security.Policy.StrongNameMembershipCondition::.ctor(System.Security.Permissions.StrongNamePublicKeyBlob,System.String,System.Version)
extern "C"  void StrongNameMembershipCondition__ctor_m754934707 (StrongNameMembershipCondition_t1915379070 * __this, StrongNamePublicKeyBlob_t2864573480 * ___blob, String_t* ___name, Version_t497901645 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::.ctor(System.Security.SecurityElement)
extern "C"  void StrongNameMembershipCondition__ctor_m1628815593 (StrongNameMembershipCondition_t1915379070 * __this, SecurityElement_t2475331585 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::.ctor()
extern "C"  void StrongNameMembershipCondition__ctor_m2967433980 (StrongNameMembershipCondition_t1915379070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongNameMembershipCondition::get_Name()
extern "C"  String_t* StrongNameMembershipCondition_get_Name_m2614020095 (StrongNameMembershipCondition_t1915379070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Security.Policy.StrongNameMembershipCondition::get_Version()
extern "C"  Version_t497901645 * StrongNameMembershipCondition_get_Version_m2447114487 (StrongNameMembershipCondition_t1915379070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongNameMembershipCondition::get_PublicKey()
extern "C"  StrongNamePublicKeyBlob_t2864573480 * StrongNameMembershipCondition_get_PublicKey_m1184535308 (StrongNameMembershipCondition_t1915379070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.StrongNameMembershipCondition::Check(System.Security.Policy.Evidence)
extern "C"  bool StrongNameMembershipCondition_Check_m585580238 (StrongNameMembershipCondition_t1915379070 * __this, Evidence_t2439192402 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.StrongNameMembershipCondition::Copy()
extern "C"  Il2CppObject * StrongNameMembershipCondition_Copy_m409071111 (StrongNameMembershipCondition_t1915379070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.StrongNameMembershipCondition::Equals(System.Object)
extern "C"  bool StrongNameMembershipCondition_Equals_m4020133803 (StrongNameMembershipCondition_t1915379070 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.StrongNameMembershipCondition::GetHashCode()
extern "C"  int32_t StrongNameMembershipCondition_GetHashCode_m3589122319 (StrongNameMembershipCondition_t1915379070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::FromXml(System.Security.SecurityElement)
extern "C"  void StrongNameMembershipCondition_FromXml_m2687545310 (StrongNameMembershipCondition_t1915379070 * __this, SecurityElement_t2475331585 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void StrongNameMembershipCondition_FromXml_m3118542947 (StrongNameMembershipCondition_t1915379070 * __this, SecurityElement_t2475331585 * ___e, PolicyLevel_t1512127021 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongNameMembershipCondition::ToString()
extern "C"  String_t* StrongNameMembershipCondition_ToString_m1975745175 (StrongNameMembershipCondition_t1915379070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.StrongNameMembershipCondition::ToXml()
extern "C"  SecurityElement_t2475331585 * StrongNameMembershipCondition_ToXml_m616346352 (StrongNameMembershipCondition_t1915379070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.StrongNameMembershipCondition::ToXml(System.Security.Policy.PolicyLevel)
extern "C"  SecurityElement_t2475331585 * StrongNameMembershipCondition_ToXml_m42267883 (StrongNameMembershipCondition_t1915379070 * __this, PolicyLevel_t1512127021 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
