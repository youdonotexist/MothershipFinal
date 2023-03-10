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

// System.Security.Policy.ApplicationTrust
struct ApplicationTrust_t1139375075;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t1206202648;
// System.Security.SecurityElement
struct SecurityElement_t2475331585;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_SecurityElement2475331585.h"

// System.Void System.Security.Policy.ApplicationTrust::.ctor()
extern "C"  void ApplicationTrust__ctor_m3384937791 (ApplicationTrust_t1139375075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.ApplicationTrust::get_DefaultGrantSet()
extern "C"  PolicyStatement_t1206202648 * ApplicationTrust_get_DefaultGrantSet_m2813946294 (ApplicationTrust_t1139375075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ApplicationTrust::FromXml(System.Security.SecurityElement)
extern "C"  void ApplicationTrust_FromXml_m3336153595 (ApplicationTrust_t1139375075 * __this, SecurityElement_t2475331585 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.ApplicationTrust::ToXml()
extern "C"  SecurityElement_t2475331585 * ApplicationTrust_ToXml_m1527577215 (ApplicationTrust_t1139375075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.ApplicationTrust::GetDefaultGrantSet()
extern "C"  PolicyStatement_t1206202648 * ApplicationTrust_GetDefaultGrantSet_m787876507 (ApplicationTrust_t1139375075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
