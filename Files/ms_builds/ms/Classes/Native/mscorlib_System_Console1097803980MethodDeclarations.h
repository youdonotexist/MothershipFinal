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

// System.Text.Encoding
struct Encoding_t180559927;
// System.IO.TextWriter
struct TextWriter_t1689927879;
// System.IO.Stream
struct Stream_t219029575;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t11523773;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_Encoding180559927.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_IO_FileAccess995838663.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_ConsoleKeyInfo93518347.h"

// System.Void System.Console::.cctor()
extern "C"  void Console__cctor_m3994882451 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::SetEncodings(System.Text.Encoding,System.Text.Encoding)
extern "C"  void Console_SetEncodings_m3783235582 (Il2CppObject * __this /* static, unused */, Encoding_t180559927 * ___inputEncoding, Encoding_t180559927 * ___outputEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.Console::get_Error()
extern "C"  TextWriter_t1689927879 * Console_get_Error_m3008907509 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.Console::get_Out()
extern "C"  TextWriter_t1689927879 * Console_get_Out_m3780048827 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::Open(System.IntPtr,System.IO.FileAccess,System.Int32)
extern "C"  Stream_t219029575 * Console_Open_m1728401432 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, int32_t ___access, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardError(System.Int32)
extern "C"  Stream_t219029575 * Console_OpenStandardError_m1760848776 (Il2CppObject * __this /* static, unused */, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardInput(System.Int32)
extern "C"  Stream_t219029575 * Console_OpenStandardInput_m3911497162 (Il2CppObject * __this /* static, unused */, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardOutput(System.Int32)
extern "C"  Stream_t219029575 * Console_OpenStandardOutput_m51663653 (Il2CppObject * __this /* static, unused */, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::Write(System.String,System.Object)
extern "C"  void Console_Write_m1986883929 (Il2CppObject * __this /* static, unused */, String_t* ___format, Il2CppObject * ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::WriteLine(System.String)
extern "C"  void Console_WriteLine_m2829201975 (Il2CppObject * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::WriteLine(System.String,System.Object)
extern "C"  void Console_WriteLine_m733794501 (Il2CppObject * __this /* static, unused */, String_t* ___format, Il2CppObject * ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::WriteLine(System.String,System.Object[])
extern "C"  void Console_WriteLine_m801929891 (Il2CppObject * __this /* static, unused */, String_t* ___format, ObjectU5BU5D_t11523773* ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::WriteLine(System.String,System.Object,System.Object)
extern "C"  void Console_WriteLine_m2090852051 (Il2CppObject * __this /* static, unused */, String_t* ___format, Il2CppObject * ___arg0, Il2CppObject * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::WriteLine(System.String,System.Object,System.Object,System.Object)
extern "C"  void Console_WriteLine_m3994172513 (Il2CppObject * __this /* static, unused */, String_t* ___format, Il2CppObject * ___arg0, Il2CppObject * ___arg1, Il2CppObject * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Console::get_InputEncoding()
extern "C"  Encoding_t180559927 * Console_get_InputEncoding_m1670761974 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Console::get_OutputEncoding()
extern "C"  Encoding_t180559927 * Console_get_OutputEncoding_m2816412541 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.Console::ReadKey()
extern "C"  ConsoleKeyInfo_t93518347  Console_ReadKey_m838968291 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.Console::ReadKey(System.Boolean)
extern "C"  ConsoleKeyInfo_t93518347  Console_ReadKey_m2162053146 (Il2CppObject * __this /* static, unused */, bool ___intercept, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::DoConsoleCancelEvent()
extern "C"  void Console_DoConsoleCancelEvent_m3111092222 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
