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

// Ionic.Zip.ReadOptions
struct ReadOptions_t1994441215;
// System.EventHandler`1<Ionic.Zip.ReadProgressEventArgs>
struct EventHandler_1_t3044741302;
// System.IO.TextWriter
struct TextWriter_t1689927879;
// System.Text.Encoding
struct Encoding_t180559927;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextWriter1689927879.h"
#include "mscorlib_System_Text_Encoding180559927.h"

// System.Void Ionic.Zip.ReadOptions::.ctor()
extern "C"  void ReadOptions__ctor_m1881984156 (ReadOptions_t1994441215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.EventHandler`1<Ionic.Zip.ReadProgressEventArgs> Ionic.Zip.ReadOptions::get_ReadProgress()
extern "C"  EventHandler_1_t3044741302 * ReadOptions_get_ReadProgress_m2940434454 (ReadOptions_t1994441215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ReadOptions::set_ReadProgress(System.EventHandler`1<Ionic.Zip.ReadProgressEventArgs>)
extern "C"  void ReadOptions_set_ReadProgress_m634801545 (ReadOptions_t1994441215 * __this, EventHandler_1_t3044741302 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter Ionic.Zip.ReadOptions::get_StatusMessageWriter()
extern "C"  TextWriter_t1689927879 * ReadOptions_get_StatusMessageWriter_m1494695341 (ReadOptions_t1994441215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ReadOptions::set_StatusMessageWriter(System.IO.TextWriter)
extern "C"  void ReadOptions_set_StatusMessageWriter_m3387657852 (ReadOptions_t1994441215 * __this, TextWriter_t1689927879 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding Ionic.Zip.ReadOptions::get_Encoding()
extern "C"  Encoding_t180559927 * ReadOptions_get_Encoding_m236933116 (ReadOptions_t1994441215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ReadOptions::set_Encoding(System.Text.Encoding)
extern "C"  void ReadOptions_set_Encoding_m95495235 (ReadOptions_t1994441215 * __this, Encoding_t180559927 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
