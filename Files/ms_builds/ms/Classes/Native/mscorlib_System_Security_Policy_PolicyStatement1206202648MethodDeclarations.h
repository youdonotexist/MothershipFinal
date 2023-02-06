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

// System.Security.Policy.PolicyStatement
struct PolicyStatement_t1206202648;
// System.Security.PermissionSet
struct PermissionSet_t2781735032;
// System.Security.SecurityElement
struct SecurityElement_t2475331585;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t1512127021;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_PermissionSet2781735032.h"
#include "mscorlib_System_Security_Policy_PolicyStatementAtt1712670650.h"
#include "mscorlib_System_Security_SecurityElement2475331585.h"
#include "mscorlib_System_Security_Policy_PolicyLevel1512127021.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Security.Policy.PolicyStatement::.ctor(System.Security.PermissionSet)
extern "C"  void PolicyStatement__ctor_m2437901676 (PolicyStatement_t1206202648 * __this, PermissionSet_t2781735032 * ___permSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyStatement::.ctor(System.Security.PermissionSet,System.Security.Policy.PolicyStatementAttribute)
extern "C"  void PolicyStatement__ctor_m316175084 (PolicyStatement_t1206202648 * __this, PermissionSet_t2781735032 * ___permSet, int32_t ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.PolicyStatement::get_PermissionSet()
extern "C"  PermissionSet_t2781735032 * PolicyStatement_get_PermissionSet_m1663906971 (PolicyStatement_t1206202648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyStatement::set_PermissionSet(System.Security.PermissionSet)
extern "C"  void PolicyStatement_set_PermissionSet_m3180190168 (PolicyStatement_t1206202648 * __this, PermissionSet_t2781735032 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatementAttribute System.Security.Policy.PolicyStatement::get_Attributes()
extern "C"  int32_t PolicyStatement_get_Attributes_m500929513 (PolicyStatement_t1206202648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.PolicyStatement::Copy()
extern "C"  PolicyStatement_t1206202648 * PolicyStatement_Copy_m3141635922 (PolicyStatement_t1206202648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyStatement::FromXml(System.Security.SecurityElement)
extern "C"  void PolicyStatement_FromXml_m47483384 (PolicyStatement_t1206202648 * __this, SecurityElement_t2475331585 * ___et, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyStatement::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void PolicyStatement_FromXml_m2697646089 (PolicyStatement_t1206202648 * __this, SecurityElement_t2475331585 * ___et, PolicyLevel_t1512127021 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.PolicyStatement::ToXml()
extern "C"  SecurityElement_t2475331585 * PolicyStatement_ToXml_m4214772502 (PolicyStatement_t1206202648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.PolicyStatement::ToXml(System.Security.Policy.PolicyLevel)
extern "C"  SecurityElement_t2475331585 * PolicyStatement_ToXml_m910494609 (PolicyStatement_t1206202648 * __this, PolicyLevel_t1512127021 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.PolicyStatement::Equals(System.Object)
extern "C"  bool PolicyStatement_Equals_m248618065 (PolicyStatement_t1206202648 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.PolicyStatement::GetHashCode()
extern "C"  int32_t PolicyStatement_GetHashCode_m3804980789 (PolicyStatement_t1206202648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.PolicyStatement::Empty()
extern "C"  PolicyStatement_t1206202648 * PolicyStatement_Empty_m324143730 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
