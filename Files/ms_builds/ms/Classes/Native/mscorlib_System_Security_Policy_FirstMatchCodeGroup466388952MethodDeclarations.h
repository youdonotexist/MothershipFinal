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

// System.Security.Policy.FirstMatchCodeGroup
struct FirstMatchCodeGroup_t466388952;
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

// System.Void System.Security.Policy.FirstMatchCodeGroup::.ctor(System.Security.Policy.IMembershipCondition,System.Security.Policy.PolicyStatement)
extern "C"  void FirstMatchCodeGroup__ctor_m842302031 (FirstMatchCodeGroup_t466388952 * __this, Il2CppObject * ___membershipCondition, PolicyStatement_t1206202648 * ___policy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.FirstMatchCodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void FirstMatchCodeGroup__ctor_m3518427102 (FirstMatchCodeGroup_t466388952 * __this, SecurityElement_t2475331585 * ___e, PolicyLevel_t1512127021 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.FirstMatchCodeGroup::Copy()
extern "C"  CodeGroup_t2846310733 * FirstMatchCodeGroup_Copy_m3316016893 (FirstMatchCodeGroup_t466388952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.FirstMatchCodeGroup::Resolve(System.Security.Policy.Evidence)
extern "C"  PolicyStatement_t1206202648 * FirstMatchCodeGroup_Resolve_m707000573 (FirstMatchCodeGroup_t466388952 * __this, Evidence_t2439192402 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.FirstMatchCodeGroup System.Security.Policy.FirstMatchCodeGroup::CopyNoChildren()
extern "C"  FirstMatchCodeGroup_t466388952 * FirstMatchCodeGroup_CopyNoChildren_m2107878674 (FirstMatchCodeGroup_t466388952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
