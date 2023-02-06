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

// System.Security.SecurityElement
struct SecurityElement_t2475331585;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_SecurityElement2475331585.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void System.Security.Policy.MembershipConditionHelper::.cctor()
extern "C"  void MembershipConditionHelper__cctor_m3747434337 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.MembershipConditionHelper::CheckSecurityElement(System.Security.SecurityElement,System.String,System.Int32,System.Int32)
extern "C"  int32_t MembershipConditionHelper_CheckSecurityElement_m1401896825 (Il2CppObject * __this /* static, unused */, SecurityElement_t2475331585 * ___se, String_t* ___parameterName, int32_t ___minimumVersion, int32_t ___maximumVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.MembershipConditionHelper::Element(System.Type,System.Int32)
extern "C"  SecurityElement_t2475331585 * MembershipConditionHelper_Element_m3854492510 (Il2CppObject * __this /* static, unused */, Type_t * ___type, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
