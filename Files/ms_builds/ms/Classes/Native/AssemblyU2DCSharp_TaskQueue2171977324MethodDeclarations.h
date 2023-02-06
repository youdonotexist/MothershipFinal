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

// TaskQueue
struct TaskQueue_t2171977324;
// QueueTask
struct QueueTask_t264499734;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_QueueTask264499734.h"
#include "mscorlib_System_String968488902.h"

// System.Void TaskQueue::.ctor()
extern "C"  void TaskQueue__ctor_m1614205055 (TaskQueue_t2171977324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TaskQueue::Awake()
extern "C"  void TaskQueue_Awake_m1851810274 (TaskQueue_t2171977324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TaskQueue::Start()
extern "C"  void TaskQueue_Start_m561342847 (TaskQueue_t2171977324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TaskQueue::Update()
extern "C"  void TaskQueue_Update_m227611246 (TaskQueue_t2171977324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TaskQueue::TaskFinished(System.Boolean,QueueTask)
extern "C"  void TaskQueue_TaskFinished_m265701897 (TaskQueue_t2171977324 * __this, bool ___manual, QueueTask_t264499734 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TaskQueue::PushTaskFinished(System.Boolean,QueueTask)
extern "C"  void TaskQueue_PushTaskFinished_m3465326531 (TaskQueue_t2171977324 * __this, bool ___manual, QueueTask_t264499734 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TaskQueue::AddTask(QueueTask)
extern "C"  void TaskQueue_AddTask_m112145241 (TaskQueue_t2171977324 * __this, QueueTask_t264499734 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TaskQueue::PushTask(QueueTask)
extern "C"  void TaskQueue_PushTask_m1190964344 (TaskQueue_t2171977324 * __this, QueueTask_t264499734 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TaskQueue::RemoveTask(System.String)
extern "C"  void TaskQueue_RemoveTask_m4184542708 (TaskQueue_t2171977324 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
