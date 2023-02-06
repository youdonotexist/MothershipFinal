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

// QueueTask
struct QueueTask_t264499734;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// QueueTask/FinishedHandler
struct FinishedHandler_t2586567256;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_QueueTask_FinishedHandler2586567256.h"
#include "mscorlib_System_String968488902.h"

// System.Void QueueTask::.ctor(System.Collections.IEnumerator,System.Boolean)
extern "C"  void QueueTask__ctor_m508583197 (QueueTask_t264499734 * __this, Il2CppObject * ___c, bool ___autoStart, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QueueTask::add_Finished(QueueTask/FinishedHandler)
extern "C"  void QueueTask_add_Finished_m318937524 (QueueTask_t264499734 * __this, FinishedHandler_t2586567256 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QueueTask::remove_Finished(QueueTask/FinishedHandler)
extern "C"  void QueueTask_remove_Finished_m4004557363 (QueueTask_t264499734 * __this, FinishedHandler_t2586567256 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean QueueTask::get_Running()
extern "C"  bool QueueTask_get_Running_m2520157885 (QueueTask_t264499734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean QueueTask::get_Paused()
extern "C"  bool QueueTask_get_Paused_m2326443858 (QueueTask_t264499734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QueueTask::Start()
extern "C"  void QueueTask_Start_m2771760405 (QueueTask_t264499734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QueueTask::Stop()
extern "C"  void QueueTask_Stop_m3692055057 (QueueTask_t264499734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QueueTask::Pause()
extern "C"  void QueueTask_Pause_m3878748585 (QueueTask_t264499734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QueueTask::SetName(System.String)
extern "C"  void QueueTask_SetName_m3882628994 (QueueTask_t264499734 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String QueueTask::GetName()
extern "C"  String_t* QueueTask_GetName_m2760945175 (QueueTask_t264499734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QueueTask::Unpause()
extern "C"  void QueueTask_Unpause_m3834298480 (QueueTask_t264499734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QueueTask::TaskFinished(System.Boolean)
extern "C"  void QueueTask_TaskFinished_m853136093 (QueueTask_t264499734 * __this, bool ___manual, const MethodInfo* method) IL2CPP_METHOD_ATTR;
