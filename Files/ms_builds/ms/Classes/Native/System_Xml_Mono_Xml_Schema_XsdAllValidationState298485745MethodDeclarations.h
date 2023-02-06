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

// Mono.Xml.Schema.XsdAllValidationState
struct XsdAllValidationState_t298485745;
// System.Xml.Schema.XmlSchemaAll
struct XmlSchemaAll_t3827156278;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t2915428732;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t707140448;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAll3827156278.h"
#include "System_Xml_Mono_Xml_Schema_XsdParticleStateManager2915428732.h"
#include "mscorlib_System_String968488902.h"

// System.Void Mono.Xml.Schema.XsdAllValidationState::.ctor(System.Xml.Schema.XmlSchemaAll,Mono.Xml.Schema.XsdParticleStateManager)
extern "C"  void XsdAllValidationState__ctor_m3090670264 (XsdAllValidationState_t298485745 * __this, XmlSchemaAll_t3827156278 * ___all, XsdParticleStateManager_t2915428732 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAllValidationState::EvaluateStartElement(System.String,System.String)
extern "C"  XsdValidationState_t707140448 * XsdAllValidationState_EvaluateStartElement_m49462378 (XsdAllValidationState_t298485745 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAllValidationState::EvaluateEndElement()
extern "C"  bool XsdAllValidationState_EvaluateEndElement_m2165262858 (XsdAllValidationState_t298485745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAllValidationState::EvaluateIsEmptiable()
extern "C"  bool XsdAllValidationState_EvaluateIsEmptiable_m827427110 (XsdAllValidationState_t298485745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
