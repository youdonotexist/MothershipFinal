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

// Mono.Xml.DTDSequenceAutomata
struct DTDSequenceAutomata_t4097517481;
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

// System.Void Mono.Xml.DTDSequenceAutomata::.ctor(Mono.Xml.DTDObjectModel,Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C"  void DTDSequenceAutomata__ctor_m4129199992 (DTDSequenceAutomata_t4097517481 * __this, DTDObjectModel_t709926554 * ___root, DTDAutomata_t933015752 * ___left, DTDAutomata_t933015752 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDSequenceAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t933015752 * DTDSequenceAutomata_TryStartElement_m683184348 (DTDSequenceAutomata_t4097517481 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDSequenceAutomata::TryEndElement()
extern "C"  DTDAutomata_t933015752 * DTDSequenceAutomata_TryEndElement_m3754464845 (DTDSequenceAutomata_t4097517481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDSequenceAutomata::get_Emptiable()
extern "C"  bool DTDSequenceAutomata_get_Emptiable_m4164407238 (DTDSequenceAutomata_t4097517481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
