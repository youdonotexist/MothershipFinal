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

// System.Security.Policy.AllMembershipCondition
struct AllMembershipCondition_t1188413311;
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
#include "mscorlib_System_Security_Policy_Evidence2439192402.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Security_SecurityElement2475331585.h"
#include "mscorlib_System_Security_Policy_PolicyLevel1512127021.h"

// System.Void System.Security.Policy.AllMembershipCondition::.ctor()
extern "C"  void AllMembershipCondition__ctor_m4134794787 (AllMembershipCondition_t1188413311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.AllMembershipCondition::Check(System.Security.Policy.Evidence)
extern "C"  bool AllMembershipCondition_Check_m1130693891 (AllMembershipCondition_t1188413311 * __this, Evidence_t2439192402 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.AllMembershipCondition::Copy()
extern "C"  Il2CppObject * AllMembershipCondition_Copy_m3388237612 (AllMembershipCondition_t1188413311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.AllMembershipCondition::Equals(System.Object)
extern "C"  bool AllMembershipCondition_Equals_m3819320534 (AllMembershipCondition_t1188413311 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.AllMembershipCondition::FromXml(System.Security.SecurityElement)
extern "C"  void AllMembershipCondition_FromXml_m3998182807 (AllMembershipCondition_t1188413311 * __this, SecurityElement_t2475331585 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.AllMembershipCondition::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void AllMembershipCondition_FromXml_m4115730442 (AllMembershipCondition_t1188413311 * __this, SecurityElement_t2475331585 * ___e, PolicyLevel_t1512127021 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.AllMembershipCondition::GetHashCode()
extern "C"  int32_t AllMembershipCondition_GetHashCode_m2478415534 (AllMembershipCondition_t1188413311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.AllMembershipCondition::ToString()
extern "C"  String_t* AllMembershipCondition_ToString_m2654753706 (AllMembershipCondition_t1188413311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.AllMembershipCondition::ToXml()
extern "C"  SecurityElement_t2475331585 * AllMembershipCondition_ToXml_m455976675 (AllMembershipCondition_t1188413311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.AllMembershipCondition::ToXml(System.Security.Policy.PolicyLevel)
extern "C"  SecurityElement_t2475331585 * AllMembershipCondition_ToXml_m3132566558 (AllMembershipCondition_t1188413311 * __this, PolicyLevel_t1512127021 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
