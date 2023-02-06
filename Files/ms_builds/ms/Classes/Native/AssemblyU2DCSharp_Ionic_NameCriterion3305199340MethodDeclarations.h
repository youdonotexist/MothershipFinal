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

// Ionic.NameCriterion
struct NameCriterion_t3305199340;
// System.String
struct String_t;
// Ionic.Zip.ZipEntry
struct ZipEntry_t2226789352;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipEntry2226789352.h"

// System.Void Ionic.NameCriterion::.ctor()
extern "C"  void NameCriterion__ctor_m384488545 (NameCriterion_t3305199340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.NameCriterion::set_MatchingFileSpec(System.String)
extern "C"  void NameCriterion_set_MatchingFileSpec_m543310 (NameCriterion_t3305199340 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.NameCriterion::ToString()
extern "C"  String_t* NameCriterion_ToString_m1211482284 (NameCriterion_t3305199340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.NameCriterion::Evaluate(System.String)
extern "C"  bool NameCriterion_Evaluate_m3460963098 (NameCriterion_t3305199340 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.NameCriterion::_Evaluate(System.String)
extern "C"  bool NameCriterion__Evaluate_m1623435127 (NameCriterion_t3305199340 * __this, String_t* ___fullpath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.NameCriterion::Evaluate(Ionic.Zip.ZipEntry)
extern "C"  bool NameCriterion_Evaluate_m1449213630 (NameCriterion_t3305199340 * __this, ZipEntry_t2226789352 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
