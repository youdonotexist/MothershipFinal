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

// Mono.Xml.DTDAnyAutomata
struct DTDAnyAutomata_t1202106028;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t709926554;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t933015752;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel709926554.h"
#include "mscorlib_System_String968488902.h"

// System.Void Mono.Xml.DTDAnyAutomata::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDAnyAutomata__ctor_m1701055619 (DTDAnyAutomata_t1202106028 * __this, DTDObjectModel_t709926554 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAnyAutomata::TryEndElement()
extern "C"  DTDAutomata_t933015752 * DTDAnyAutomata_TryEndElement_m498392608 (DTDAnyAutomata_t1202106028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAnyAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t933015752 * DTDAnyAutomata_TryStartElement_m890194089 (DTDAnyAutomata_t1202106028 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDAnyAutomata::get_Emptiable()
extern "C"  bool DTDAnyAutomata_get_Emptiable_m3399048363 (DTDAnyAutomata_t1202106028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
