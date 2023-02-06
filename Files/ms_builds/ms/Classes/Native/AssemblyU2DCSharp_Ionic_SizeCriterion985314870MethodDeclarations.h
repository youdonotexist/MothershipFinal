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

// Ionic.SizeCriterion
struct SizeCriterion_t985314870;
// System.String
struct String_t;
// Ionic.Zip.ZipEntry
struct ZipEntry_t2226789352;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipEntry2226789352.h"

// System.Void Ionic.SizeCriterion::.ctor()
extern "C"  void SizeCriterion__ctor_m3750168663 (SizeCriterion_t985314870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.SizeCriterion::ToString()
extern "C"  String_t* SizeCriterion_ToString_m2176352502 (SizeCriterion_t985314870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.SizeCriterion::Evaluate(System.String)
extern "C"  bool SizeCriterion_Evaluate_m962306832 (SizeCriterion_t985314870 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.SizeCriterion::_Evaluate(System.Int64)
extern "C"  bool SizeCriterion__Evaluate_m1833950643 (SizeCriterion_t985314870 * __this, int64_t ___Length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.SizeCriterion::Evaluate(Ionic.Zip.ZipEntry)
extern "C"  bool SizeCriterion_Evaluate_m804536456 (SizeCriterion_t985314870 * __this, ZipEntry_t2226789352 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
