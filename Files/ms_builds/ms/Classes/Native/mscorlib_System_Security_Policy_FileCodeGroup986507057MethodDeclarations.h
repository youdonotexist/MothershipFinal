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

// System.Security.Policy.FileCodeGroup
struct FileCodeGroup_t986507057;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t590969783;
// System.Security.SecurityElement
struct SecurityElement_t2475331585;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t1512127021;
// System.Security.Policy.CodeGroup
struct CodeGroup_t2846310733;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t1206202648;
// System.Security.Policy.Evidence
struct Evidence_t2439192402;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_FileIOPermissi416300780.h"
#include "mscorlib_System_Security_SecurityElement2475331585.h"
#include "mscorlib_System_Security_Policy_PolicyLevel1512127021.h"
#include "mscorlib_System_Security_Policy_Evidence2439192402.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Security.Policy.FileCodeGroup::.ctor(System.Security.Policy.IMembershipCondition,System.Security.Permissions.FileIOPermissionAccess)
extern "C"  void FileCodeGroup__ctor_m1371733496 (FileCodeGroup_t986507057 * __this, Il2CppObject * ___membershipCondition, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.FileCodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void FileCodeGroup__ctor_m3408229349 (FileCodeGroup_t986507057 * __this, SecurityElement_t2475331585 * ___e, PolicyLevel_t1512127021 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.FileCodeGroup::Copy()
extern "C"  CodeGroup_t2846310733 * FileCodeGroup_Copy_m1605956822 (FileCodeGroup_t986507057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.FileCodeGroup::Resolve(System.Security.Policy.Evidence)
extern "C"  PolicyStatement_t1206202648 * FileCodeGroup_Resolve_m110064726 (FileCodeGroup_t986507057 * __this, Evidence_t2439192402 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.FileCodeGroup::Equals(System.Object)
extern "C"  bool FileCodeGroup_Equals_m1325977752 (FileCodeGroup_t986507057 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.FileCodeGroup::GetHashCode()
extern "C"  int32_t FileCodeGroup_GetHashCode_m2071225084 (FileCodeGroup_t986507057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.FileCodeGroup::ParseXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void FileCodeGroup_ParseXml_m2264093595 (FileCodeGroup_t986507057 * __this, SecurityElement_t2475331585 * ___e, PolicyLevel_t1512127021 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.FileCodeGroup::CreateXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void FileCodeGroup_CreateXml_m215596670 (FileCodeGroup_t986507057 * __this, SecurityElement_t2475331585 * ___element, PolicyLevel_t1512127021 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
