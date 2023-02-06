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

// Mono.Xml.DTDInvalidAutomata
struct DTDInvalidAutomata_t784020919;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t709926554;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t933015752;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel709926554.h"
#include "mscorlib_System_String968488902.h"

// System.Void Mono.Xml.DTDInvalidAutomata::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDInvalidAutomata__ctor_m1789707662 (DTDInvalidAutomata_t784020919 * __this, DTDObjectModel_t709926554 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDInvalidAutomata::TryEndElement()
extern "C"  DTDAutomata_t933015752 * DTDInvalidAutomata_TryEndElement_m775889141 (DTDInvalidAutomata_t784020919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDInvalidAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t933015752 * DTDInvalidAutomata_TryStartElement_m148267316 (DTDInvalidAutomata_t784020919 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
