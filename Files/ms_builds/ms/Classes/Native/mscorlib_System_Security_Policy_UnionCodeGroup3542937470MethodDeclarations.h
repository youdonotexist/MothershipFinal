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

// System.Security.Policy.UnionCodeGroup
struct UnionCodeGroup_t3542937470;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t590969783;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t1206202648;
// System.Security.SecurityElement
struct SecurityElement_t2475331585;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t1512127021;
// System.Security.Policy.CodeGroup
struct CodeGroup_t2846310733;
// System.Security.Policy.Evidence
struct Evidence_t2439192402;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Policy_PolicyStatement1206202648.h"
#include "mscorlib_System_Security_SecurityElement2475331585.h"
#include "mscorlib_System_Security_Policy_PolicyLevel1512127021.h"
#include "mscorlib_System_Security_Policy_Evidence2439192402.h"

// System.Void System.Security.Policy.UnionCodeGroup::.ctor(System.Security.Policy.IMembershipCondition,System.Security.Policy.PolicyStatement)
extern "C"  void UnionCodeGroup__ctor_m1956265457 (UnionCodeGroup_t3542937470 * __this, Il2CppObject * ___membershipCondition, PolicyStatement_t1206202648 * ___policy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.UnionCodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void UnionCodeGroup__ctor_m1694248832 (UnionCodeGroup_t3542937470 * __this, SecurityElement_t2475331585 * ___e, PolicyLevel_t1512127021 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.UnionCodeGroup::Copy()
extern "C"  CodeGroup_t2846310733 * UnionCodeGroup_Copy_m1862744463 (UnionCodeGroup_t3542937470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.UnionCodeGroup::Copy(System.Boolean)
extern "C"  CodeGroup_t2846310733 * UnionCodeGroup_Copy_m627476678 (UnionCodeGroup_t3542937470 * __this, bool ___childs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.UnionCodeGroup::Resolve(System.Security.Policy.Evidence)
extern "C"  PolicyStatement_t1206202648 * UnionCodeGroup_Resolve_m1015759173 (UnionCodeGroup_t3542937470 * __this, Evidence_t2439192402 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
