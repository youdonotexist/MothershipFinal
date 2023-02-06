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

// Mono.Xml.DTDContentModel
struct DTDContentModel_t1462496200;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t709926554;
// System.String
struct String_t;
// Mono.Xml.DTDContentModelCollection
struct DTDContentModelCollection_t605667718;
// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t95357814;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t933015752;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel709926554.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_Mono_Xml_DTDOccurence3238327079.h"
#include "System_Xml_Mono_Xml_DTDContentOrderType2313699015.h"
#include "System_Xml_Mono_Xml_DTDAutomata933015752.h"

// System.Void Mono.Xml.DTDContentModel::.ctor(Mono.Xml.DTDObjectModel,System.String)
extern "C"  void DTDContentModel__ctor_m248936723 (DTDContentModel_t1462496200 * __this, DTDObjectModel_t709926554 * ___root, String_t* ___ownerElementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDContentModelCollection Mono.Xml.DTDContentModel::get_ChildModels()
extern "C"  DTDContentModelCollection_t605667718 * DTDContentModel_get_ChildModels_m1642723597 (DTDContentModel_t1462496200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclaration Mono.Xml.DTDContentModel::get_ElementDecl()
extern "C"  DTDElementDeclaration_t95357814 * DTDContentModel_get_ElementDecl_m1388326301 (DTDContentModel_t1462496200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDContentModel::get_ElementName()
extern "C"  String_t* DTDContentModel_get_ElementName_m461002204 (DTDContentModel_t1462496200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDContentModel::set_ElementName(System.String)
extern "C"  void DTDContentModel_set_ElementName_m4279929463 (DTDContentModel_t1462496200 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDOccurence Mono.Xml.DTDContentModel::get_Occurence()
extern "C"  int32_t DTDContentModel_get_Occurence_m3803308929 (DTDContentModel_t1462496200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDContentModel::set_Occurence(Mono.Xml.DTDOccurence)
extern "C"  void DTDContentModel_set_Occurence_m1938639474 (DTDContentModel_t1462496200 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDContentOrderType Mono.Xml.DTDContentModel::get_OrderType()
extern "C"  int32_t DTDContentModel_get_OrderType_m2382989904 (DTDContentModel_t1462496200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDContentModel::set_OrderType(Mono.Xml.DTDContentOrderType)
extern "C"  void DTDContentModel_set_OrderType_m2020937195 (DTDContentModel_t1462496200 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::GetAutomata()
extern "C"  DTDAutomata_t933015752 * DTDContentModel_GetAutomata_m2141566264 (DTDContentModel_t1462496200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::Compile()
extern "C"  DTDAutomata_t933015752 * DTDContentModel_Compile_m3218529797 (DTDContentModel_t1462496200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::CompileInternal()
extern "C"  DTDAutomata_t933015752 * DTDContentModel_CompileInternal_m4110057890 (DTDContentModel_t1462496200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::GetBasicContentAutomata()
extern "C"  DTDAutomata_t933015752 * DTDContentModel_GetBasicContentAutomata_m501448067 (DTDContentModel_t1462496200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::Sequence(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C"  DTDAutomata_t933015752 * DTDContentModel_Sequence_m1958675541 (DTDContentModel_t1462496200 * __this, DTDAutomata_t933015752 * ___l, DTDAutomata_t933015752 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::Choice(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C"  DTDAutomata_t933015752 * DTDContentModel_Choice_m606966453 (DTDContentModel_t1462496200 * __this, DTDAutomata_t933015752 * ___l, DTDAutomata_t933015752 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
