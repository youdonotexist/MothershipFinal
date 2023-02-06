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

// System.CodeDom.Compiler.CompilerError
struct CompilerError_t3379341558;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.CodeDom.Compiler.CompilerError::.ctor()
extern "C"  void CompilerError__ctor_m2825428760 (CompilerError_t3379341558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CodeDom.Compiler.CompilerError::.ctor(System.String,System.Int32,System.Int32,System.String,System.String)
extern "C"  void CompilerError__ctor_m2028138562 (CompilerError_t3379341558 * __this, String_t* ___fileName, int32_t ___line, int32_t ___column, String_t* ___errorNumber, String_t* ___errorText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.CodeDom.Compiler.CompilerError::ToString()
extern "C"  String_t* CompilerError_ToString_m4250248469 (CompilerError_t3379341558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.CodeDom.Compiler.CompilerError::get_Line()
extern "C"  int32_t CompilerError_get_Line_m3357392761 (CompilerError_t3379341558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CodeDom.Compiler.CompilerError::set_Line(System.Int32)
extern "C"  void CompilerError_set_Line_m3677761774 (CompilerError_t3379341558 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.CodeDom.Compiler.CompilerError::get_Column()
extern "C"  int32_t CompilerError_get_Column_m3418276187 (CompilerError_t3379341558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CodeDom.Compiler.CompilerError::set_Column(System.Int32)
extern "C"  void CompilerError_set_Column_m65378000 (CompilerError_t3379341558 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.CodeDom.Compiler.CompilerError::get_ErrorNumber()
extern "C"  String_t* CompilerError_get_ErrorNumber_m1168498017 (CompilerError_t3379341558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CodeDom.Compiler.CompilerError::set_ErrorNumber(System.String)
extern "C"  void CompilerError_set_ErrorNumber_m2431955768 (CompilerError_t3379341558 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.CodeDom.Compiler.CompilerError::get_ErrorText()
extern "C"  String_t* CompilerError_get_ErrorText_m1298221061 (CompilerError_t3379341558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CodeDom.Compiler.CompilerError::set_ErrorText(System.String)
extern "C"  void CompilerError_set_ErrorText_m653477076 (CompilerError_t3379341558 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CodeDom.Compiler.CompilerError::get_IsWarning()
extern "C"  bool CompilerError_get_IsWarning_m1293345397 (CompilerError_t3379341558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CodeDom.Compiler.CompilerError::set_IsWarning(System.Boolean)
extern "C"  void CompilerError_set_IsWarning_m2567397282 (CompilerError_t3379341558 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CodeDom.Compiler.CompilerError::set_FileName(System.String)
extern "C"  void CompilerError_set_FileName_m3913107570 (CompilerError_t3379341558 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
