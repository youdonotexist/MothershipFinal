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

// Mono.CSharp.CSharpCodeCompiler
struct CSharpCodeCompiler_t1399085817;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t3781852593;
// System.CodeDom.Compiler.CompilerResults
struct CompilerResults_t1593144996;
// System.CodeDom.Compiler.CompilerParameters
struct CompilerParameters_t1819198582;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Object
struct Il2CppObject;
// System.Diagnostics.DataReceivedEventArgs
struct DataReceivedEventArgs_t977397323;
// System.String
struct String_t;
// System.CodeDom.Compiler.CompilerError
struct CompilerError_t3379341558;
// System.CodeDom.Compiler.TempFileCollection
struct TempFileCollection_t3384596155;

#include "codegen/il2cpp-codegen.h"
#include "System_System_CodeDom_Compiler_CompilerParameters1819198582.h"
#include "mscorlib_System_Object837106420.h"
#include "System_System_Diagnostics_DataReceivedEventArgs977397323.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_CodeDom_Compiler_TempFileCollection3384596155.h"

// System.Void Mono.CSharp.CSharpCodeCompiler::.ctor()
extern "C"  void CSharpCodeCompiler__ctor_m3766342733 (CSharpCodeCompiler_t1399085817 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.CSharp.CSharpCodeCompiler::.ctor(System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern "C"  void CSharpCodeCompiler__ctor_m1384065473 (CSharpCodeCompiler_t1399085817 * __this, Il2CppObject* ___providerOptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.CSharp.CSharpCodeCompiler::.cctor()
extern "C"  void CSharpCodeCompiler__cctor_m310411520 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.CodeDom.Compiler.CompilerResults Mono.CSharp.CSharpCodeCompiler::CompileAssemblyFromSourceBatch(System.CodeDom.Compiler.CompilerParameters,System.String[])
extern "C"  CompilerResults_t1593144996 * CSharpCodeCompiler_CompileAssemblyFromSourceBatch_m1761993536 (CSharpCodeCompiler_t1399085817 * __this, CompilerParameters_t1819198582 * ___options, StringU5BU5D_t2956870243* ___sources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.CodeDom.Compiler.CompilerResults Mono.CSharp.CSharpCodeCompiler::CompileFromFileBatch(System.CodeDom.Compiler.CompilerParameters,System.String[])
extern "C"  CompilerResults_t1593144996 * CSharpCodeCompiler_CompileFromFileBatch_m1715672261 (CSharpCodeCompiler_t1399085817 * __this, CompilerParameters_t1819198582 * ___options, StringU5BU5D_t2956870243* ___fileNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.CSharp.CSharpCodeCompiler::McsStderrDataReceived(System.Object,System.Diagnostics.DataReceivedEventArgs)
extern "C"  void CSharpCodeCompiler_McsStderrDataReceived_m4115997788 (CSharpCodeCompiler_t1399085817 * __this, Il2CppObject * ___sender, DataReceivedEventArgs_t977397323 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.CSharp.CSharpCodeCompiler::BuildArgs(System.CodeDom.Compiler.CompilerParameters,System.String[],System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern "C"  String_t* CSharpCodeCompiler_BuildArgs_m2817781269 (Il2CppObject * __this /* static, unused */, CompilerParameters_t1819198582 * ___options, StringU5BU5D_t2956870243* ___fileNames, Il2CppObject* ___providerOptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.CodeDom.Compiler.CompilerError Mono.CSharp.CSharpCodeCompiler::CreateErrorFromString(System.String)
extern "C"  CompilerError_t3379341558 * CSharpCodeCompiler_CreateErrorFromString_m2137094737 (Il2CppObject * __this /* static, unused */, String_t* ___error_string, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.CSharp.CSharpCodeCompiler::GetTempFileNameWithExtension(System.CodeDom.Compiler.TempFileCollection,System.String,System.Boolean)
extern "C"  String_t* CSharpCodeCompiler_GetTempFileNameWithExtension_m1191727428 (Il2CppObject * __this /* static, unused */, TempFileCollection_t3384596155 * ___temp_files, String_t* ___extension, bool ___keepFile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.CSharp.CSharpCodeCompiler::GetTempFileNameWithExtension(System.CodeDom.Compiler.TempFileCollection,System.String)
extern "C"  String_t* CSharpCodeCompiler_GetTempFileNameWithExtension_m3529182489 (Il2CppObject * __this /* static, unused */, TempFileCollection_t3384596155 * ___temp_files, String_t* ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.CodeDom.Compiler.CompilerResults Mono.CSharp.CSharpCodeCompiler::CompileFromSourceBatch(System.CodeDom.Compiler.CompilerParameters,System.String[])
extern "C"  CompilerResults_t1593144996 * CSharpCodeCompiler_CompileFromSourceBatch_m966888198 (CSharpCodeCompiler_t1399085817 * __this, CompilerParameters_t1819198582 * ___options, StringU5BU5D_t2956870243* ___sources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
