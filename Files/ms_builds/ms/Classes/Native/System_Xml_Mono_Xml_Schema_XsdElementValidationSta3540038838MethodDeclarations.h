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

// Mono.Xml.Schema.XsdElementValidationState
struct XsdElementValidationState_t3540038838;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t471922321;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t2915428732;
// System.String
struct String_t;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t707140448;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaElement471922321.h"
#include "System_Xml_Mono_Xml_Schema_XsdParticleStateManager2915428732.h"
#include "mscorlib_System_String968488902.h"

// System.Void Mono.Xml.Schema.XsdElementValidationState::.ctor(System.Xml.Schema.XmlSchemaElement,Mono.Xml.Schema.XsdParticleStateManager)
extern "C"  void XsdElementValidationState__ctor_m2519110744 (XsdElementValidationState_t3540038838 * __this, XmlSchemaElement_t471922321 * ___element, XsdParticleStateManager_t2915428732 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdElementValidationState::get_Name()
extern "C"  String_t* XsdElementValidationState_get_Name_m141511438 (XsdElementValidationState_t3540038838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdElementValidationState::get_NS()
extern "C"  String_t* XsdElementValidationState_get_NS_m666052648 (XsdElementValidationState_t3540038838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdElementValidationState::EvaluateStartElement(System.String,System.String)
extern "C"  XsdValidationState_t707140448 * XsdElementValidationState_EvaluateStartElement_m1126013829 (XsdElementValidationState_t3540038838 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdElementValidationState::CheckOccurence(System.Xml.Schema.XmlSchemaElement)
extern "C"  XsdValidationState_t707140448 * XsdElementValidationState_CheckOccurence_m3735658234 (XsdElementValidationState_t3540038838 * __this, XmlSchemaElement_t471922321 * ___maybeSubstituted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdElementValidationState::EvaluateEndElement()
extern "C"  bool XsdElementValidationState_EvaluateEndElement_m3657590159 (XsdElementValidationState_t3540038838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdElementValidationState::EvaluateIsEmptiable()
extern "C"  bool XsdElementValidationState_EvaluateIsEmptiable_m4139900481 (XsdElementValidationState_t3540038838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
