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

// System.Configuration.DefaultValidator
struct DefaultValidator_t3696444158;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Configuration.DefaultValidator::.ctor()
extern "C"  void DefaultValidator__ctor_m3297457434 (DefaultValidator_t3696444158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.DefaultValidator::CanValidate(System.Type)
extern "C"  bool DefaultValidator_CanValidate_m1533904277 (DefaultValidator_t3696444158 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultValidator::Validate(System.Object)
extern "C"  void DefaultValidator_Validate_m2731197844 (DefaultValidator_t3696444158 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
