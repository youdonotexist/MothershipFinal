﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Xml.Schema.XsdAnyValidationState
struct XsdAnyValidationState_t663128134;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t3827156353;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t2915428732;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t707140448;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAny3827156353.h"
#include "System_Xml_Mono_Xml_Schema_XsdParticleStateManager2915428732.h"
#include "mscorlib_System_String968488902.h"

// System.Void Mono.Xml.Schema.XsdAnyValidationState::.ctor(System.Xml.Schema.XmlSchemaAny,Mono.Xml.Schema.XsdParticleStateManager)
extern "C"  void XsdAnyValidationState__ctor_m2943567320 (XsdAnyValidationState_t663128134 * __this, XmlSchemaAny_t3827156353 * ___any, XsdParticleStateManager_t2915428732 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAnyValidationState::EvaluateStartElement(System.String,System.String)
extern "C"  XsdValidationState_t707140448 * XsdAnyValidationState_EvaluateStartElement_m1688337909 (XsdAnyValidationState_t663128134 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAnyValidationState::MatchesNamespace(System.String)
extern "C"  bool XsdAnyValidationState_MatchesNamespace_m353570741 (XsdAnyValidationState_t663128134 * __this, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAnyValidationState::EvaluateEndElement()
extern "C"  bool XsdAnyValidationState_EvaluateEndElement_m71511199 (XsdAnyValidationState_t663128134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAnyValidationState::EvaluateIsEmptiable()
extern "C"  bool XsdAnyValidationState_EvaluateIsEmptiable_m345635121 (XsdAnyValidationState_t663128134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
