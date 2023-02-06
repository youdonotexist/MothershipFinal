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

// System.Diagnostics.Process/ProcessAsyncReader
struct ProcessAsyncReader_t3864704144;
// System.Diagnostics.Process
struct Process_t209016206;
// System.Threading.WaitHandle
struct WaitHandle_t361062656;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Diagnostics_Process209016206.h"
#include "mscorlib_System_IntPtr676692020.h"

// System.Void System.Diagnostics.Process/ProcessAsyncReader::.ctor(System.Diagnostics.Process,System.IntPtr,System.Boolean)
extern "C"  void ProcessAsyncReader__ctor_m3286923364 (ProcessAsyncReader_t3864704144 * __this, Process_t209016206 * ___process, IntPtr_t ___handle, bool ___err_out, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process/ProcessAsyncReader::AddInput()
extern "C"  void ProcessAsyncReader_AddInput_m3536573140 (ProcessAsyncReader_t3864704144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process/ProcessAsyncReader::FlushLast()
extern "C"  void ProcessAsyncReader_FlushLast_m2030125841 (ProcessAsyncReader_t3864704144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process/ProcessAsyncReader::Flush(System.Boolean)
extern "C"  void ProcessAsyncReader_Flush_m3040520466 (ProcessAsyncReader_t3864704144 * __this, bool ___last, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process/ProcessAsyncReader::get_IsCompleted()
extern "C"  bool ProcessAsyncReader_get_IsCompleted_m2290866373 (ProcessAsyncReader_t3864704144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Diagnostics.Process/ProcessAsyncReader::get_WaitHandle()
extern "C"  WaitHandle_t361062656 * ProcessAsyncReader_get_WaitHandle_m3518133136 (ProcessAsyncReader_t3864704144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process/ProcessAsyncReader::Close()
extern "C"  void ProcessAsyncReader_Close_m3559474383 (ProcessAsyncReader_t3864704144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
