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

// System.Security.Policy.CodeGroup
struct CodeGroup_t2846310733;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t590969783;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t1206202648;
// System.Security.SecurityElement
struct SecurityElement_t2475331585;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t1512127021;
// System.String
struct String_t;
// System.Collections.IList
struct IList_t1612618265;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Policy_PolicyStatement1206202648.h"
#include "mscorlib_System_Security_SecurityElement2475331585.h"
#include "mscorlib_System_Security_Policy_PolicyLevel1512127021.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Security_Policy_CodeGroup2846310733.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Security.Policy.CodeGroup::.ctor(System.Security.Policy.IMembershipCondition,System.Security.Policy.PolicyStatement)
extern "C"  void CodeGroup__ctor_m2017258170 (CodeGroup_t2846310733 * __this, Il2CppObject * ___membershipCondition, PolicyStatement_t1206202648 * ___policy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void CodeGroup__ctor_m297504329 (CodeGroup_t2846310733 * __this, SecurityElement_t2475331585 * ___e, PolicyLevel_t1512127021 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.CodeGroup::get_PolicyStatement()
extern "C"  PolicyStatement_t1206202648 * CodeGroup_get_PolicyStatement_m2982604484 (CodeGroup_t2846310733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::set_PolicyStatement(System.Security.Policy.PolicyStatement)
extern "C"  void CodeGroup_set_PolicyStatement_m2181039707 (CodeGroup_t2846310733 * __this, PolicyStatement_t1206202648 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.CodeGroup::get_Description()
extern "C"  String_t* CodeGroup_get_Description_m3483375035 (CodeGroup_t2846310733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::set_Description(System.String)
extern "C"  void CodeGroup_set_Description_m3975256248 (CodeGroup_t2846310733 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.CodeGroup::get_MembershipCondition()
extern "C"  Il2CppObject * CodeGroup_get_MembershipCondition_m1069806301 (CodeGroup_t2846310733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.CodeGroup::get_Name()
extern "C"  String_t* CodeGroup_get_Name_m2286683854 (CodeGroup_t2846310733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::set_Name(System.String)
extern "C"  void CodeGroup_set_Name_m3619152003 (CodeGroup_t2846310733 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Security.Policy.CodeGroup::get_Children()
extern "C"  Il2CppObject * CodeGroup_get_Children_m3916364187 (CodeGroup_t2846310733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::AddChild(System.Security.Policy.CodeGroup)
extern "C"  void CodeGroup_AddChild_m1295765677 (CodeGroup_t2846310733 * __this, CodeGroup_t2846310733 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.CodeGroup::Equals(System.Object)
extern "C"  bool CodeGroup_Equals_m3162055676 (CodeGroup_t2846310733 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.CodeGroup::Equals(System.Security.Policy.CodeGroup,System.Boolean)
extern "C"  bool CodeGroup_Equals_m1198507690 (CodeGroup_t2846310733 * __this, CodeGroup_t2846310733 * ___cg, bool ___compareChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.CodeGroup::GetHashCode()
extern "C"  int32_t CodeGroup_GetHashCode_m2557386080 (CodeGroup_t2846310733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void CodeGroup_FromXml_m2137875188 (CodeGroup_t2846310733 * __this, SecurityElement_t2475331585 * ___e, PolicyLevel_t1512127021 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::ParseXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void CodeGroup_ParseXml_m3164368567 (CodeGroup_t2846310733 * __this, SecurityElement_t2475331585 * ___e, PolicyLevel_t1512127021 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.CodeGroup::ToXml()
extern "C"  SecurityElement_t2475331585 * CodeGroup_ToXml_m2549202689 (CodeGroup_t2846310733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.CodeGroup::ToXml(System.Security.Policy.PolicyLevel)
extern "C"  SecurityElement_t2475331585 * CodeGroup_ToXml_m1708899516 (CodeGroup_t2846310733 * __this, PolicyLevel_t1512127021 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::CreateXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void CodeGroup_CreateXml_m2354317026 (CodeGroup_t2846310733 * __this, SecurityElement_t2475331585 * ___element, PolicyLevel_t1512127021 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.CodeGroup::CreateFromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  CodeGroup_t2846310733 * CodeGroup_CreateFromXml_m3390181618 (Il2CppObject * __this /* static, unused */, SecurityElement_t2475331585 * ___se, PolicyLevel_t1512127021 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
