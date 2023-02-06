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

// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t2806387719;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t709926554;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t2121638921;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel709926554.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_ArrayList2121638921.h"

// System.Void Mono.Xml.DTDEntityDeclaration::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDEntityDeclaration__ctor_m705712862 (DTDEntityDeclaration_t2806387719 * __this, DTDObjectModel_t709926554 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityDeclaration::get_NotationName()
extern "C"  String_t* DTDEntityDeclaration_get_NotationName_m528268507 (DTDEntityDeclaration_t2806387719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclaration::set_NotationName(System.String)
extern "C"  void DTDEntityDeclaration_set_NotationName_m2884802480 (DTDEntityDeclaration_t2806387719 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDEntityDeclaration::get_HasExternalReference()
extern "C"  bool DTDEntityDeclaration_get_HasExternalReference_m850645615 (DTDEntityDeclaration_t2806387719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityDeclaration::get_EntityValue()
extern "C"  String_t* DTDEntityDeclaration_get_EntityValue_m1737901506 (DTDEntityDeclaration_t2806387719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclaration::ScanEntityValue(System.Collections.ArrayList)
extern "C"  void DTDEntityDeclaration_ScanEntityValue_m3595758284 (DTDEntityDeclaration_t2806387719 * __this, ArrayList_t2121638921 * ___refs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
