﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Threading.WaitHandle
struct WaitHandle_t361062656;
// System.Threading.WaitHandle[]
struct WaitHandleU5BU5D_t2323380993;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan763862892.h"
#include "mscorlib_System_IntPtr676692020.h"

// System.Void System.Threading.WaitHandle::.ctor()
extern "C"  void WaitHandle__ctor_m4240939554 (WaitHandle_t361062656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::.cctor()
extern "C"  void WaitHandle__cctor_m2138011083 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::System.IDisposable.Dispose()
extern "C"  void WaitHandle_System_IDisposable_Dispose_m2431205053 (WaitHandle_t361062656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::CheckArray(System.Threading.WaitHandle[],System.Boolean)
extern "C"  void WaitHandle_CheckArray_m2379645074 (Il2CppObject * __this /* static, unused */, WaitHandleU5BU5D_t2323380993* ___handles, bool ___waitAll, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.WaitHandle::WaitAny_internal(System.Threading.WaitHandle[],System.Int32,System.Boolean)
extern "C"  int32_t WaitHandle_WaitAny_internal_m1172254617 (Il2CppObject * __this /* static, unused */, WaitHandleU5BU5D_t2323380993* ___handles, int32_t ___ms, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.WaitHandle::WaitAny(System.Threading.WaitHandle[])
extern "C"  int32_t WaitHandle_WaitAny_m3612180107 (Il2CppObject * __this /* static, unused */, WaitHandleU5BU5D_t2323380993* ___waitHandles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.WaitHandle::WaitAny(System.Threading.WaitHandle[],System.Int32,System.Boolean)
extern "C"  int32_t WaitHandle_WaitAny_m3391659473 (Il2CppObject * __this /* static, unused */, WaitHandleU5BU5D_t2323380993* ___waitHandles, int32_t ___millisecondsTimeout, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.WaitHandle::WaitAny(System.Threading.WaitHandle[],System.Int32)
extern "C"  int32_t WaitHandle_WaitAny_m3919501356 (Il2CppObject * __this /* static, unused */, WaitHandleU5BU5D_t2323380993* ___waitHandles, int32_t ___millisecondsTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.WaitHandle::WaitAny(System.Threading.WaitHandle[],System.TimeSpan,System.Boolean)
extern "C"  int32_t WaitHandle_WaitAny_m2033275004 (Il2CppObject * __this /* static, unused */, WaitHandleU5BU5D_t2323380993* ___waitHandles, TimeSpan_t763862892  ___timeout, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::Close()
extern "C"  void WaitHandle_Close_m1656831800 (WaitHandle_t361062656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.WaitHandle::get_Handle()
extern "C"  IntPtr_t WaitHandle_get_Handle_m383799166 (WaitHandle_t361062656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::set_Handle(System.IntPtr)
extern "C"  void WaitHandle_set_Handle_m2872485421 (WaitHandle_t361062656 * __this, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne_internal(System.IntPtr,System.Int32,System.Boolean)
extern "C"  bool WaitHandle_WaitOne_internal_m2364279439 (WaitHandle_t361062656 * __this, IntPtr_t ___handle, int32_t ___ms, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::Dispose(System.Boolean)
extern "C"  void WaitHandle_Dispose_m2452949270 (WaitHandle_t361062656 * __this, bool ___explicitDisposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne()
extern "C"  bool WaitHandle_WaitOne_m1178289523 (WaitHandle_t361062656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32,System.Boolean)
extern "C"  bool WaitHandle_WaitOne_m467737785 (WaitHandle_t361062656 * __this, int32_t ___millisecondsTimeout, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne(System.TimeSpan,System.Boolean)
extern "C"  bool WaitHandle_WaitOne_m1713997972 (WaitHandle_t361062656 * __this, TimeSpan_t763862892  ___timeout, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::CheckDisposed()
extern "C"  void WaitHandle_CheckDisposed_m3718910029 (WaitHandle_t361062656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::Finalize()
extern "C"  void WaitHandle_Finalize_m1174780672 (WaitHandle_t361062656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
