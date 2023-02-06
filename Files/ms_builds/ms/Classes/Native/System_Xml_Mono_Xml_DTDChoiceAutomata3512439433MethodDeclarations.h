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

// Mono.Xml.DTDChoiceAutomata
struct DTDChoiceAutomata_t3512439433;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t709926554;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t933015752;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel709926554.h"
#include "System_Xml_Mono_Xml_DTDAutomata933015752.h"
#include "mscorlib_System_String968488902.h"

// System.Void Mono.Xml.DTDChoiceAutomata::.ctor(Mono.Xml.DTDObjectModel,Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C"  void DTDChoiceAutomata__ctor_m2508519768 (DTDChoiceAutomata_t3512439433 * __this, DTDObjectModel_t709926554 * ___root, DTDAutomata_t933015752 * ___left, DTDAutomata_t933015752 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDChoiceAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t933015752 * DTDChoiceAutomata_TryStartElement_m1771571836 (DTDChoiceAutomata_t3512439433 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDChoiceAutomata::TryEndElement()
extern "C"  DTDAutomata_t933015752 * DTDChoiceAutomata_TryEndElement_m2807632045 (DTDChoiceAutomata_t3512439433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDChoiceAutomata::get_Emptiable()
extern "C"  bool DTDChoiceAutomata_get_Emptiable_m3452891110 (DTDChoiceAutomata_t3512439433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
