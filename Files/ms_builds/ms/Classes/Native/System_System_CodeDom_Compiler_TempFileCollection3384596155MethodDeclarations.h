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

// System.CodeDom.Compiler.TempFileCollection
struct TempFileCollection_t3384596155;
// System.String
struct String_t;
// System.Array
struct Il2CppArray;
// System.Object
struct Il2CppObject;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Array2840145358.h"

// System.Void System.CodeDom.Compiler.TempFileCollection::.ctor()
extern "C"  void TempFileCollection__ctor_m3815248823 (TempFileCollection_t3384596155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CodeDom.Compiler.TempFileCollection::.ctor(System.String,System.Boolean)
extern "C"  void TempFileCollection__ctor_m2418703218 (TempFileCollection_t3384596155 * __this, String_t* ___tempDir, bool ___keepFiles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.CodeDom.Compiler.TempFileCollection::System.Collections.ICollection.get_Count()
extern "C"  int32_t TempFileCollection_System_Collections_ICollection_get_Count_m1707225284 (TempFileCollection_t3384596155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CodeDom.Compiler.TempFileCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void TempFileCollection_System_Collections_ICollection_CopyTo_m51900781 (TempFileCollection_t3384596155 * __this, Il2CppArray * ___array, int32_t ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.CodeDom.Compiler.TempFileCollection::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * TempFileCollection_System_Collections_ICollection_get_SyncRoot_m127347653 (TempFileCollection_t3384596155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CodeDom.Compiler.TempFileCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool TempFileCollection_System_Collections_ICollection_get_IsSynchronized_m2603732933 (TempFileCollection_t3384596155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CodeDom.Compiler.TempFileCollection::System.IDisposable.Dispose()
extern "C"  void TempFileCollection_System_IDisposable_Dispose_m2404648008 (TempFileCollection_t3384596155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.CodeDom.Compiler.TempFileCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * TempFileCollection_System_Collections_IEnumerable_GetEnumerator_m3367937212 (TempFileCollection_t3384596155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.CodeDom.Compiler.TempFileCollection::get_BasePath()
extern "C"  String_t* TempFileCollection_get_BasePath_m474369263 (TempFileCollection_t3384596155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.CodeDom.Compiler.TempFileCollection::GetOwnTempDir()
extern "C"  String_t* TempFileCollection_GetOwnTempDir_m298879995 (TempFileCollection_t3384596155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.CodeDom.Compiler.TempFileCollection::get_Count()
extern "C"  int32_t TempFileCollection_get_Count_m419781131 (TempFileCollection_t3384596155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.CodeDom.Compiler.TempFileCollection::AddExtension(System.String)
extern "C"  String_t* TempFileCollection_AddExtension_m3261170004 (TempFileCollection_t3384596155 * __this, String_t* ___fileExtension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.CodeDom.Compiler.TempFileCollection::AddExtension(System.String,System.Boolean)
extern "C"  String_t* TempFileCollection_AddExtension_m2674491305 (TempFileCollection_t3384596155 * __this, String_t* ___fileExtension, bool ___keepFile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CodeDom.Compiler.TempFileCollection::AddFile(System.String,System.Boolean)
extern "C"  void TempFileCollection_AddFile_m721339277 (TempFileCollection_t3384596155 * __this, String_t* ___fileName, bool ___keepFile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CodeDom.Compiler.TempFileCollection::Delete()
extern "C"  void TempFileCollection_Delete_m3532575384 (TempFileCollection_t3384596155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.CodeDom.Compiler.TempFileCollection::GetEnumerator()
extern "C"  Il2CppObject * TempFileCollection_GetEnumerator_m4068193701 (TempFileCollection_t3384596155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CodeDom.Compiler.TempFileCollection::Dispose(System.Boolean)
extern "C"  void TempFileCollection_Dispose_m1973532843 (TempFileCollection_t3384596155 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CodeDom.Compiler.TempFileCollection::Finalize()
extern "C"  void TempFileCollection_Finalize_m2460638539 (TempFileCollection_t3384596155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.CodeDom.Compiler.TempFileCollection::mkdir(System.String,System.UInt32)
extern "C"  int32_t TempFileCollection_mkdir_m384874498 (Il2CppObject * __this /* static, unused */, String_t* ___olpath, uint32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
