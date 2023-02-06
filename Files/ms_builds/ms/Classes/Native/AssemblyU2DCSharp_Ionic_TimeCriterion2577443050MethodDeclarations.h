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

// Ionic.TimeCriterion
struct TimeCriterion_t2577443050;
// System.String
struct String_t;
// Ionic.Zip.ZipEntry
struct ZipEntry_t2226789352;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_DateTime339033936.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipEntry2226789352.h"

// System.Void Ionic.TimeCriterion::.ctor()
extern "C"  void TimeCriterion__ctor_m2731860003 (TimeCriterion_t2577443050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.TimeCriterion::ToString()
extern "C"  String_t* TimeCriterion_ToString_m1097074090 (TimeCriterion_t2577443050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.TimeCriterion::Evaluate(System.String)
extern "C"  bool TimeCriterion_Evaluate_m3011011292 (TimeCriterion_t2577443050 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.TimeCriterion::_Evaluate(System.DateTime)
extern "C"  bool TimeCriterion__Evaluate_m1056702059 (TimeCriterion_t2577443050 * __this, DateTime_t339033936  ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.TimeCriterion::Evaluate(Ionic.Zip.ZipEntry)
extern "C"  bool TimeCriterion_Evaluate_m4044587068 (TimeCriterion_t2577443050 * __this, ZipEntry_t2226789352 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
