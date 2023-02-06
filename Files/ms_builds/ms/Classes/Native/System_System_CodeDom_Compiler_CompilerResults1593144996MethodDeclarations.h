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

// System.CodeDom.Compiler.CompilerResults
struct CompilerResults_t1593144996;
// System.CodeDom.Compiler.TempFileCollection
struct TempFileCollection_t3384596155;
// System.Reflection.Assembly
struct Assembly_t1882292308;
// System.CodeDom.Compiler.CompilerErrorCollection
struct CompilerErrorCollection_t815520884;
// System.Collections.Specialized.StringCollection
struct StringCollection_t604413498;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_CodeDom_Compiler_TempFileCollection3384596155.h"
#include "mscorlib_System_Reflection_Assembly1882292308.h"
#include "System_System_Collections_Specialized_StringCollect604413498.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.CodeDom.Compiler.CompilerResults::.ctor(System.CodeDom.Compiler.TempFileCollection)
extern "C"  void CompilerResults__ctor_m332749765 (CompilerResults_t1593144996 * __this, TempFileCollection_t3384596155 * ___tempFiles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CodeDom.Compiler.CompilerResults::set_CompiledAssembly(System.Reflection.Assembly)
extern "C"  void CompilerResults_set_CompiledAssembly_m1751630340 (CompilerResults_t1593144996 * __this, Assembly_t1882292308 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.CodeDom.Compiler.CompilerErrorCollection System.CodeDom.Compiler.CompilerResults::get_Errors()
extern "C"  CompilerErrorCollection_t815520884 * CompilerResults_get_Errors_m905422283 (CompilerResults_t1593144996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CodeDom.Compiler.CompilerResults::set_NativeCompilerReturnValue(System.Int32)
extern "C"  void CompilerResults_set_NativeCompilerReturnValue_m2233455463 (CompilerResults_t1593144996 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringCollection System.CodeDom.Compiler.CompilerResults::get_Output()
extern "C"  StringCollection_t604413498 * CompilerResults_get_Output_m3578734429 (CompilerResults_t1593144996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CodeDom.Compiler.CompilerResults::set_Output(System.Collections.Specialized.StringCollection)
extern "C"  void CompilerResults_set_Output_m2597686382 (CompilerResults_t1593144996 * __this, StringCollection_t604413498 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CodeDom.Compiler.CompilerResults::set_PathToAssembly(System.String)
extern "C"  void CompilerResults_set_PathToAssembly_m2511889221 (CompilerResults_t1593144996 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
