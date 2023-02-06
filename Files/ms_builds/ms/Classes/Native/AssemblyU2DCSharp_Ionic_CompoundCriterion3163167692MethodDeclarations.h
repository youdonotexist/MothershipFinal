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

// Ionic.CompoundCriterion
struct CompoundCriterion_t3163167692;
// Ionic.SelectionCriterion
struct SelectionCriterion_t2928688459;
// System.String
struct String_t;
// Ionic.Zip.ZipEntry
struct ZipEntry_t2226789352;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Ionic_SelectionCriterion2928688459.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipEntry2226789352.h"

// System.Void Ionic.CompoundCriterion::.ctor()
extern "C"  void CompoundCriterion__ctor_m1690943873 (CompoundCriterion_t3163167692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.SelectionCriterion Ionic.CompoundCriterion::get_Right()
extern "C"  SelectionCriterion_t2928688459 * CompoundCriterion_get_Right_m3594233518 (CompoundCriterion_t3163167692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.CompoundCriterion::set_Right(Ionic.SelectionCriterion)
extern "C"  void CompoundCriterion_set_Right_m1855534077 (CompoundCriterion_t3163167692 * __this, SelectionCriterion_t2928688459 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.CompoundCriterion::Evaluate(System.String)
extern "C"  bool CompoundCriterion_Evaluate_m3816508986 (CompoundCriterion_t3163167692 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.CompoundCriterion::ToString()
extern "C"  String_t* CompoundCriterion_ToString_m2591766796 (CompoundCriterion_t3163167692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.CompoundCriterion::Evaluate(Ionic.Zip.ZipEntry)
extern "C"  bool CompoundCriterion_Evaluate_m361955230 (CompoundCriterion_t3163167692 * __this, ZipEntry_t2226789352 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
