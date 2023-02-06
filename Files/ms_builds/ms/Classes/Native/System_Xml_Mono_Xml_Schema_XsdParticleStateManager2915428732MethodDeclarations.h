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

// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t2915428732;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t707140448;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t2900481284;
// Mono.Xml.Schema.XsdElementValidationState
struct XsdElementValidationState_t3540038838;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t471922321;
// Mono.Xml.Schema.XsdSequenceValidationState
struct XsdSequenceValidationState_t204585567;
// System.Xml.Schema.XmlSchemaSequence
struct XmlSchemaSequence_t3857081222;
// Mono.Xml.Schema.XsdChoiceValidationState
struct XsdChoiceValidationState_t578794047;
// System.Xml.Schema.XmlSchemaChoice
struct XmlSchemaChoice_t2562625382;
// Mono.Xml.Schema.XsdAllValidationState
struct XsdAllValidationState_t298485745;
// System.Xml.Schema.XmlSchemaAll
struct XmlSchemaAll_t3827156278;
// Mono.Xml.Schema.XsdAnyValidationState
struct XsdAnyValidationState_t663128134;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t3827156353;
// Mono.Xml.Schema.XsdEmptyValidationState
struct XsdEmptyValidationState_t1149120645;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProce2298884609.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject2900481284.h"
#include "System_Xml_Mono_Xml_Schema_XsdValidationState707140448.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaElement471922321.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSequence3857081222.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaChoice2562625382.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAll3827156278.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAny3827156353.h"

// System.Void Mono.Xml.Schema.XsdParticleStateManager::.ctor()
extern "C"  void XsdParticleStateManager__ctor_m2534515617 (XsdParticleStateManager_t2915428732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing Mono.Xml.Schema.XsdParticleStateManager::get_ProcessContents()
extern "C"  int32_t XsdParticleStateManager_get_ProcessContents_m3414670437 (XsdParticleStateManager_t2915428732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdParticleStateManager::PushContext()
extern "C"  void XsdParticleStateManager_PushContext_m3162445364 (XsdParticleStateManager_t2915428732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdParticleStateManager::PopContext()
extern "C"  void XsdParticleStateManager_PopContext_m3702761121 (XsdParticleStateManager_t2915428732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdParticleStateManager::SetProcessContents(System.Xml.Schema.XmlSchemaContentProcessing)
extern "C"  void XsdParticleStateManager_SetProcessContents_m1180669823 (XsdParticleStateManager_t2915428732 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdParticleStateManager::Create(System.Xml.Schema.XmlSchemaObject)
extern "C"  XsdValidationState_t707140448 * XsdParticleStateManager_Create_m2399089610 (XsdParticleStateManager_t2915428732 * __this, XmlSchemaObject_t2900481284 * ___xsobj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdParticleStateManager::MakeSequence(Mono.Xml.Schema.XsdValidationState,Mono.Xml.Schema.XsdValidationState)
extern "C"  XsdValidationState_t707140448 * XsdParticleStateManager_MakeSequence_m4091517547 (XsdParticleStateManager_t2915428732 * __this, XsdValidationState_t707140448 * ___head, XsdValidationState_t707140448 * ___rest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdElementValidationState Mono.Xml.Schema.XsdParticleStateManager::AddElement(System.Xml.Schema.XmlSchemaElement)
extern "C"  XsdElementValidationState_t3540038838 * XsdParticleStateManager_AddElement_m3637166506 (XsdParticleStateManager_t2915428732 * __this, XmlSchemaElement_t471922321 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdSequenceValidationState Mono.Xml.Schema.XsdParticleStateManager::AddSequence(System.Xml.Schema.XmlSchemaSequence)
extern "C"  XsdSequenceValidationState_t204585567 * XsdParticleStateManager_AddSequence_m155029943 (XsdParticleStateManager_t2915428732 * __this, XmlSchemaSequence_t3857081222 * ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdChoiceValidationState Mono.Xml.Schema.XsdParticleStateManager::AddChoice(System.Xml.Schema.XmlSchemaChoice)
extern "C"  XsdChoiceValidationState_t578794047 * XsdParticleStateManager_AddChoice_m2779935447 (XsdParticleStateManager_t2915428732 * __this, XmlSchemaChoice_t2562625382 * ___choice, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAllValidationState Mono.Xml.Schema.XsdParticleStateManager::AddAll(System.Xml.Schema.XmlSchemaAll)
extern "C"  XsdAllValidationState_t298485745 * XsdParticleStateManager_AddAll_m1560994821 (XsdParticleStateManager_t2915428732 * __this, XmlSchemaAll_t3827156278 * ___all, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAnyValidationState Mono.Xml.Schema.XsdParticleStateManager::AddAny(System.Xml.Schema.XmlSchemaAny)
extern "C"  XsdAnyValidationState_t663128134 * XsdParticleStateManager_AddAny_m21270458 (XsdParticleStateManager_t2915428732 * __this, XmlSchemaAny_t3827156353 * ___any, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdEmptyValidationState Mono.Xml.Schema.XsdParticleStateManager::AddEmpty()
extern "C"  XsdEmptyValidationState_t1149120645 * XsdParticleStateManager_AddEmpty_m219182213 (XsdParticleStateManager_t2915428732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
