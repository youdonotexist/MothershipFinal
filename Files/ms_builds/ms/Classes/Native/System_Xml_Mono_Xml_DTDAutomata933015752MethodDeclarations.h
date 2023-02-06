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

// Mono.Xml.DTDAutomata
struct DTDAutomata_t933015752;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t709926554;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel709926554.h"
#include "System_Xml_Mono_Xml_DTDAutomata933015752.h"

// System.Void Mono.Xml.DTDAutomata::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDAutomata__ctor_m4120291351 (DTDAutomata_t933015752 * __this, DTDObjectModel_t709926554 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml.DTDAutomata::get_Root()
extern "C"  DTDObjectModel_t709926554 * DTDAutomata_get_Root_m285994343 (DTDAutomata_t933015752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAutomata::MakeChoice(Mono.Xml.DTDAutomata)
extern "C"  DTDAutomata_t933015752 * DTDAutomata_MakeChoice_m720640605 (DTDAutomata_t933015752 * __this, DTDAutomata_t933015752 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAutomata::MakeSequence(Mono.Xml.DTDAutomata)
extern "C"  DTDAutomata_t933015752 * DTDAutomata_MakeSequence_m2001475901 (DTDAutomata_t933015752 * __this, DTDAutomata_t933015752 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAutomata::TryEndElement()
extern "C"  DTDAutomata_t933015752 * DTDAutomata_TryEndElement_m2876478478 (DTDAutomata_t933015752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDAutomata::get_Emptiable()
extern "C"  bool DTDAutomata_get_Emptiable_m470025351 (DTDAutomata_t933015752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
