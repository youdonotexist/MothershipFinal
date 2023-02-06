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

// UIPopupList/LegacyEvent
struct LegacyEvent_t3762302001;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void UIPopupList/LegacyEvent::.ctor(System.Object,System.IntPtr)
extern "C"  void LegacyEvent__ctor_m611608751 (LegacyEvent_t3762302001 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList/LegacyEvent::Invoke(System.String)
extern "C"  void LegacyEvent_Invoke_m121469913 (LegacyEvent_t3762302001 * __this, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_LegacyEvent_t3762302001(Il2CppObject* delegate, String_t* ___val);
// System.IAsyncResult UIPopupList/LegacyEvent::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * LegacyEvent_BeginInvoke_m1872166886 (LegacyEvent_t3762302001 * __this, String_t* ___val, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList/LegacyEvent::EndInvoke(System.IAsyncResult)
extern "C"  void LegacyEvent_EndInvoke_m486378047 (LegacyEvent_t3762302001 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
