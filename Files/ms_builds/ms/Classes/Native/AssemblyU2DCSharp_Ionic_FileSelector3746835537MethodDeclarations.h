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

// Ionic.FileSelector
struct FileSelector_t3746835537;
// System.String
struct String_t;
// Ionic.SelectionCriterion
struct SelectionCriterion_t2928688459;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct ReadOnlyCollection_1_t4131634250;
// Ionic.Zip.ZipEntry
struct ZipEntry_t2226789352;
// System.Collections.Generic.ICollection`1<Ionic.Zip.ZipEntry>
struct ICollection_1_t2692620738;
// Ionic.Zip.ZipFile
struct ZipFile_t3698100756;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipEntry2226789352.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipFile3698100756.h"

// System.Void Ionic.FileSelector::.ctor(System.String)
extern "C"  void FileSelector__ctor_m2863551502 (FileSelector_t3746835537 * __this, String_t* ___selectionCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.FileSelector::.ctor(System.String,System.Boolean)
extern "C"  void FileSelector__ctor_m563716527 (FileSelector_t3746835537 * __this, String_t* ___selectionCriteria, bool ___traverseDirectoryReparsePoints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.FileSelector::get_SelectionCriteria()
extern "C"  String_t* FileSelector_get_SelectionCriteria_m1797058673 (FileSelector_t3746835537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.FileSelector::set_SelectionCriteria(System.String)
extern "C"  void FileSelector_set_SelectionCriteria_m185228674 (FileSelector_t3746835537 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.FileSelector::get_TraverseReparsePoints()
extern "C"  bool FileSelector_get_TraverseReparsePoints_m2384250822 (FileSelector_t3746835537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.FileSelector::set_TraverseReparsePoints(System.Boolean)
extern "C"  void FileSelector_set_TraverseReparsePoints_m2360746237 (FileSelector_t3746835537 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.FileSelector::NormalizeCriteriaExpression(System.String)
extern "C"  String_t* FileSelector_NormalizeCriteriaExpression_m1966543759 (Il2CppObject * __this /* static, unused */, String_t* ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.SelectionCriterion Ionic.FileSelector::_ParseCriterion(System.String)
extern "C"  SelectionCriterion_t2928688459 * FileSelector__ParseCriterion_m3706192031 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.FileSelector::ToString()
extern "C"  String_t* FileSelector_ToString_m232663583 (FileSelector_t3746835537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.FileSelector::Evaluate(System.String)
extern "C"  bool FileSelector_Evaluate_m2910617669 (FileSelector_t3746835537 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.FileSelector::SelectorTrace(System.String,System.Object[])
extern "C"  void FileSelector_SelectorTrace_m3033608630 (FileSelector_t3746835537 * __this, String_t* ___format, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Ionic.FileSelector::SelectFiles(System.String)
extern "C"  Il2CppObject* FileSelector_SelectFiles_m1923214471 (FileSelector_t3746835537 * __this, String_t* ___directory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> Ionic.FileSelector::SelectFiles(System.String,System.Boolean)
extern "C"  ReadOnlyCollection_1_t4131634250 * FileSelector_SelectFiles_m17252904 (FileSelector_t3746835537 * __this, String_t* ___directory, bool ___recurseDirectories, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.FileSelector::Evaluate(Ionic.Zip.ZipEntry)
extern "C"  bool FileSelector_Evaluate_m3376831603 (FileSelector_t3746835537 * __this, ZipEntry_t2226789352 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<Ionic.Zip.ZipEntry> Ionic.FileSelector::SelectEntries(Ionic.Zip.ZipFile)
extern "C"  Il2CppObject* FileSelector_SelectEntries_m3511917348 (FileSelector_t3746835537 * __this, ZipFile_t3698100756 * ___zip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<Ionic.Zip.ZipEntry> Ionic.FileSelector::SelectEntries(Ionic.Zip.ZipFile,System.String)
extern "C"  Il2CppObject* FileSelector_SelectEntries_m280786016 (FileSelector_t3746835537 * __this, ZipFile_t3698100756 * ___zip, String_t* ___directoryPathInArchive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
