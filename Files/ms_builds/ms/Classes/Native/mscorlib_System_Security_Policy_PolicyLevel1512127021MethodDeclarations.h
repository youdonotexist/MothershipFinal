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

// System.Security.Policy.PolicyLevel
struct PolicyLevel_t1512127021;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t2475331585;
// System.Security.NamedPermissionSet
struct NamedPermissionSet_t3555529215;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t1206202648;
// System.Security.Policy.Evidence
struct Evidence_t2439192402;
// System.Reflection.Assembly
struct Assembly_t1882292308;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Security_PolicyLevelType3058198577.h"
#include "mscorlib_System_Security_SecurityElement2475331585.h"
#include "mscorlib_System_Security_Policy_Evidence2439192402.h"
#include "mscorlib_System_Reflection_Assembly1882292308.h"

// System.Void System.Security.Policy.PolicyLevel::.ctor(System.String,System.Security.PolicyLevelType)
extern "C"  void PolicyLevel__ctor_m221530596 (PolicyLevel_t1512127021 * __this, String_t* ___label, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::LoadFromFile(System.String)
extern "C"  void PolicyLevel_LoadFromFile_m4071455775 (PolicyLevel_t1512127021 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.PolicyLevel::FromString(System.String)
extern "C"  SecurityElement_t2475331585 * PolicyLevel_FromString_m22120426 (PolicyLevel_t1512127021 * __this, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::FromXml(System.Security.SecurityElement)
extern "C"  void PolicyLevel_FromXml_m3676269261 (PolicyLevel_t1512127021 * __this, SecurityElement_t2475331585 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.PolicyLevel::GetNamedPermissionSet(System.String)
extern "C"  NamedPermissionSet_t3555529215 * PolicyLevel_GetNamedPermissionSet_m4173094665 (PolicyLevel_t1512127021 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.PolicyLevel::Resolve(System.Security.Policy.Evidence)
extern "C"  PolicyStatement_t1206202648 * PolicyLevel_Resolve_m3093143570 (PolicyLevel_t1512127021 * __this, Evidence_t2439192402 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.PolicyLevel::ToXml()
extern "C"  SecurityElement_t2475331585 * PolicyLevel_ToXml_m1771003041 (PolicyLevel_t1512127021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::Save()
extern "C"  void PolicyLevel_Save_m2338482100 (PolicyLevel_t1512127021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::CreateDefaultLevel(System.Security.PolicyLevelType)
extern "C"  void PolicyLevel_CreateDefaultLevel_m3158048351 (PolicyLevel_t1512127021 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::CreateDefaultFullTrustAssemblies()
extern "C"  void PolicyLevel_CreateDefaultFullTrustAssemblies_m1776753535 (PolicyLevel_t1512127021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::CreateDefaultNamedPermissionSets()
extern "C"  void PolicyLevel_CreateDefaultNamedPermissionSets_m3629254635 (PolicyLevel_t1512127021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.PolicyLevel::ResolveClassName(System.String)
extern "C"  String_t* PolicyLevel_ResolveClassName_m1530237105 (PolicyLevel_t1512127021 * __this, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.PolicyLevel::IsFullTrustAssembly(System.Reflection.Assembly)
extern "C"  bool PolicyLevel_IsFullTrustAssembly_m2315033764 (PolicyLevel_t1512127021 * __this, Assembly_t1882292308 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
