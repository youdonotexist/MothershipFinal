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

// System.Configuration.InternalConfigurationFactory
struct InternalConfigurationFactory_t3086578302;
// System.Configuration.Configuration
struct Configuration_t2274547107;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t11523773;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void System.Configuration.InternalConfigurationFactory::.ctor()
extern "C"  void InternalConfigurationFactory__ctor_m1553217946 (InternalConfigurationFactory_t3086578302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.InternalConfigurationFactory::Create(System.Type,System.Object[])
extern "C"  Configuration_t2274547107 * InternalConfigurationFactory_Create_m1322271343 (InternalConfigurationFactory_t3086578302 * __this, Type_t * ___typeConfigHost, ObjectU5BU5D_t11523773* ___hostInitConfigurationParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
