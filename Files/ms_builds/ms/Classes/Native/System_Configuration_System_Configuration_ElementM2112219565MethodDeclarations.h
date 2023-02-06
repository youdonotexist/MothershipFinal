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

// System.Configuration.ElementMap
struct ElementMap_t2112219565;
// System.Type
struct Type_t;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1125014;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void System.Configuration.ElementMap::.ctor(System.Type)
extern "C"  void ElementMap__ctor_m1892110670 (ElementMap_t2112219565 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ElementMap::.cctor()
extern "C"  void ElementMap__cctor_m2336715714 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ElementMap System.Configuration.ElementMap::GetMap(System.Type)
extern "C"  ElementMap_t2112219565 * ElementMap_GetMap_m3994852502 (Il2CppObject * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ElementMap::get_Properties()
extern "C"  ConfigurationPropertyCollection_t1125014 * ElementMap_get_Properties_m458517592 (ElementMap_t2112219565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
