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

// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t2951978932;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t709926554;
// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t95357814;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel709926554.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_Mono_Xml_DTDElementDeclaration95357814.h"

// System.Void Mono.Xml.DTDElementDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDElementDeclarationCollection__ctor_m879563011 (DTDElementDeclarationCollection_t2951978932 * __this, DTDObjectModel_t709926554 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclaration Mono.Xml.DTDElementDeclarationCollection::get_Item(System.String)
extern "C"  DTDElementDeclaration_t95357814 * DTDElementDeclarationCollection_get_Item_m2338684824 (DTDElementDeclarationCollection_t2951978932 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclaration Mono.Xml.DTDElementDeclarationCollection::Get(System.String)
extern "C"  DTDElementDeclaration_t95357814 * DTDElementDeclarationCollection_Get_m2070883288 (DTDElementDeclarationCollection_t2951978932 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclarationCollection::Add(System.String,Mono.Xml.DTDElementDeclaration)
extern "C"  void DTDElementDeclarationCollection_Add_m2137189962 (DTDElementDeclarationCollection_t2951978932 * __this, String_t* ___name, DTDElementDeclaration_t95357814 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
