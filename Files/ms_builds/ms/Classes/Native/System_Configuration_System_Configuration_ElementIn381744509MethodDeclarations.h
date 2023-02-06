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

// System.Configuration.ElementInformation
struct ElementInformation_t381744509;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3905177107;
// System.Configuration.PropertyInformation
struct PropertyInformation_t4091064516;
// System.Configuration.PropertyInformationCollection
struct PropertyInformationCollection_t573960898;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configur3905177107.h"
#include "System_Configuration_System_Configuration_Property4091064516.h"
#include "System_Configuration_System_Configuration_ElementIn381744509.h"

// System.Void System.Configuration.ElementInformation::.ctor(System.Configuration.ConfigurationElement,System.Configuration.PropertyInformation)
extern "C"  void ElementInformation__ctor_m761476204 (ElementInformation_t381744509 * __this, ConfigurationElement_t3905177107 * ___owner, PropertyInformation_t4091064516 * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.PropertyInformationCollection System.Configuration.ElementInformation::get_Properties()
extern "C"  PropertyInformationCollection_t573960898 * ElementInformation_get_Properties_m2638548244 (ElementInformation_t381744509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ElementInformation::Reset(System.Configuration.ElementInformation)
extern "C"  void ElementInformation_Reset_m1439910307 (ElementInformation_t381744509 * __this, ElementInformation_t381744509 * ___parentInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
