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

// Ionic.TypeCriterion
struct TypeCriterion_t3546879773;
// System.String
struct String_t;
// Ionic.Zip.ZipEntry
struct ZipEntry_t2226789352;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipEntry2226789352.h"

// System.Void Ionic.TypeCriterion::.ctor()
extern "C"  void TypeCriterion__ctor_m592034640 (TypeCriterion_t3546879773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.TypeCriterion::get_AttributeString()
extern "C"  String_t* TypeCriterion_get_AttributeString_m3106229749 (TypeCriterion_t3546879773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.TypeCriterion::set_AttributeString(System.String)
extern "C"  void TypeCriterion_set_AttributeString_m1485979172 (TypeCriterion_t3546879773 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.TypeCriterion::ToString()
extern "C"  String_t* TypeCriterion_ToString_m3759259485 (TypeCriterion_t3546879773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.TypeCriterion::Evaluate(System.String)
extern "C"  bool TypeCriterion_Evaluate_m1253262345 (TypeCriterion_t3546879773 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.TypeCriterion::Evaluate(Ionic.Zip.ZipEntry)
extern "C"  bool TypeCriterion_Evaluate_m222778159 (TypeCriterion_t3546879773 * __this, ZipEntry_t2226789352 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
