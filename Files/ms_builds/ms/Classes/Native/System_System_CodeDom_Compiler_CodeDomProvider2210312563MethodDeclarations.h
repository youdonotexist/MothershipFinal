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

// System.CodeDom.Compiler.CodeDomProvider
struct CodeDomProvider_t2210312563;
// System.CodeDom.Compiler.CompilerResults
struct CompilerResults_t1593144996;
// System.CodeDom.Compiler.CompilerParameters
struct CompilerParameters_t1819198582;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "System_System_CodeDom_Compiler_CompilerParameters1819198582.h"

// System.Void System.CodeDom.Compiler.CodeDomProvider::.ctor()
extern "C"  void CodeDomProvider__ctor_m2638252987 (CodeDomProvider_t2210312563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.CodeDom.Compiler.CompilerResults System.CodeDom.Compiler.CodeDomProvider::CompileAssemblyFromSource(System.CodeDom.Compiler.CompilerParameters,System.String[])
extern "C"  CompilerResults_t1593144996 * CodeDomProvider_CompileAssemblyFromSource_m51731556 (CodeDomProvider_t2210312563 * __this, CompilerParameters_t1819198582 * ___options, StringU5BU5D_t2956870243* ___fileNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.CodeDom.Compiler.CodeDomProvider::GetNotImplemented()
extern "C"  Exception_t1967233988 * CodeDomProvider_GetNotImplemented_m550000717 (CodeDomProvider_t2210312563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
