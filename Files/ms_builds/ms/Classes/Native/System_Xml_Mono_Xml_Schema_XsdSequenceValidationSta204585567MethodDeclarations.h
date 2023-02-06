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

// Mono.Xml.Schema.XsdSequenceValidationState
struct XsdSequenceValidationState_t204585567;
// System.Xml.Schema.XmlSchemaSequence
struct XmlSchemaSequence_t3857081222;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t2915428732;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t707140448;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSequence3857081222.h"
#include "System_Xml_Mono_Xml_Schema_XsdParticleStateManager2915428732.h"
#include "mscorlib_System_String968488902.h"

// System.Void Mono.Xml.Schema.XsdSequenceValidationState::.ctor(System.Xml.Schema.XmlSchemaSequence,Mono.Xml.Schema.XsdParticleStateManager)
extern "C"  void XsdSequenceValidationState__ctor_m1127236464 (XsdSequenceValidationState_t204585567 * __this, XmlSchemaSequence_t3857081222 * ___sequence, XsdParticleStateManager_t2915428732 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdSequenceValidationState::EvaluateStartElement(System.String,System.String)
extern "C"  XsdValidationState_t707140448 * XsdSequenceValidationState_EvaluateStartElement_m3987826236 (XsdSequenceValidationState_t204585567 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdSequenceValidationState::EvaluateEndElement()
extern "C"  bool XsdSequenceValidationState_EvaluateEndElement_m3965605306 (XsdSequenceValidationState_t204585567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdSequenceValidationState::EvaluateIsEmptiable()
extern "C"  bool XsdSequenceValidationState_EvaluateIsEmptiable_m803468150 (XsdSequenceValidationState_t204585567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
