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

// Mono.Xml.DTDAutomataFactory
struct DTDAutomataFactory_t2001760042;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t709926554;
// Mono.Xml.DTDChoiceAutomata
struct DTDChoiceAutomata_t3512439433;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t933015752;
// Mono.Xml.DTDSequenceAutomata
struct DTDSequenceAutomata_t4097517481;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel709926554.h"
#include "System_Xml_Mono_Xml_DTDAutomata933015752.h"

// System.Void Mono.Xml.DTDAutomataFactory::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDAutomataFactory__ctor_m2953278209 (DTDAutomataFactory_t2001760042 * __this, DTDObjectModel_t709926554 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDChoiceAutomata Mono.Xml.DTDAutomataFactory::Choice(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C"  DTDChoiceAutomata_t3512439433 * DTDAutomataFactory_Choice_m3290007144 (DTDAutomataFactory_t2001760042 * __this, DTDAutomata_t933015752 * ___left, DTDAutomata_t933015752 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDSequenceAutomata Mono.Xml.DTDAutomataFactory::Sequence(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C"  DTDSequenceAutomata_t4097517481 * DTDAutomataFactory_Sequence_m812875240 (DTDAutomataFactory_t2001760042 * __this, DTDAutomata_t933015752 * ___left, DTDAutomata_t933015752 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
