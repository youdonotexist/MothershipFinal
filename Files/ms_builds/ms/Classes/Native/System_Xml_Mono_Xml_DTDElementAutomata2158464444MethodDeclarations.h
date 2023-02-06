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

// Mono.Xml.DTDElementAutomata
struct DTDElementAutomata_t2158464444;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t709926554;
// System.String
struct String_t;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t933015752;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel709926554.h"
#include "mscorlib_System_String968488902.h"

// System.Void Mono.Xml.DTDElementAutomata::.ctor(Mono.Xml.DTDObjectModel,System.String)
extern "C"  void DTDElementAutomata__ctor_m739456143 (DTDElementAutomata_t2158464444 * __this, DTDObjectModel_t709926554 * ___root, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDElementAutomata::get_Name()
extern "C"  String_t* DTDElementAutomata_get_Name_m3002165678 (DTDElementAutomata_t2158464444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDElementAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t933015752 * DTDElementAutomata_TryStartElement_m1218012473 (DTDElementAutomata_t2158464444 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
