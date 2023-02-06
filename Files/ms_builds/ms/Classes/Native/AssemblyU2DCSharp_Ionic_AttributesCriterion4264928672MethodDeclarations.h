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

// Ionic.AttributesCriterion
struct AttributesCriterion_t4264928672;
// System.String
struct String_t;
// Ionic.Zip.ZipEntry
struct ZipEntry_t2226789352;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_IO_FileAttributes2606923962.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipEntry2226789352.h"

// System.Void Ionic.AttributesCriterion::.ctor()
extern "C"  void AttributesCriterion__ctor_m170000685 (AttributesCriterion_t4264928672 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.AttributesCriterion::get_AttributeString()
extern "C"  String_t* AttributesCriterion_get_AttributeString_m3214276306 (AttributesCriterion_t4264928672 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.AttributesCriterion::set_AttributeString(System.String)
extern "C"  void AttributesCriterion_set_AttributeString_m640300583 (AttributesCriterion_t4264928672 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.AttributesCriterion::ToString()
extern "C"  String_t* AttributesCriterion_ToString_m483524256 (AttributesCriterion_t4264928672 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.AttributesCriterion::_EvaluateOne(System.IO.FileAttributes,System.IO.FileAttributes)
extern "C"  bool AttributesCriterion__EvaluateOne_m523781461 (AttributesCriterion_t4264928672 * __this, int32_t ___fileAttrs, int32_t ___criterionAttrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.AttributesCriterion::Evaluate(System.String)
extern "C"  bool AttributesCriterion_Evaluate_m1776539878 (AttributesCriterion_t4264928672 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.AttributesCriterion::_Evaluate(System.IO.FileAttributes)
extern "C"  bool AttributesCriterion__Evaluate_m2884697787 (AttributesCriterion_t4264928672 * __this, int32_t ___fileAttrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.AttributesCriterion::Evaluate(Ionic.Zip.ZipEntry)
extern "C"  bool AttributesCriterion_Evaluate_m4067573874 (AttributesCriterion_t4264928672 * __this, ZipEntry_t2226789352 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
