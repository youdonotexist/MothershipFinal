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

// Mono.Xml.DTDOneOrMoreAutomata
struct DTDOneOrMoreAutomata_t2952526750;
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

// System.Void Mono.Xml.DTDOneOrMoreAutomata::.ctor(Mono.Xml.DTDObjectModel,Mono.Xml.DTDAutomata)
extern "C"  void DTDOneOrMoreAutomata__ctor_m1844217423 (DTDOneOrMoreAutomata_t2952526750 * __this, DTDObjectModel_t709926554 * ___root, DTDAutomata_t933015752 * ___children, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDOneOrMoreAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t933015752 * DTDOneOrMoreAutomata_TryStartElement_m708739547 (DTDOneOrMoreAutomata_t2952526750 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDOneOrMoreAutomata::TryEndElement()
extern "C"  DTDAutomata_t933015752 * DTDOneOrMoreAutomata_TryEndElement_m601138990 (DTDOneOrMoreAutomata_t2952526750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
