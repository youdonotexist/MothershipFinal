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

// DarkTonic.MasterAudio.SoundGroupVariation/SoundFinishedEventHandler
struct SoundFinishedEventHandler_t2252829809;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void DarkTonic.MasterAudio.SoundGroupVariation/SoundFinishedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void SoundFinishedEventHandler__ctor_m3765999851 (SoundFinishedEventHandler_t2252829809 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation/SoundFinishedEventHandler::Invoke()
extern "C"  void SoundFinishedEventHandler_Invoke_m2531071237 (SoundFinishedEventHandler_t2252829809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SoundFinishedEventHandler_t2252829809(Il2CppObject* delegate);
// System.IAsyncResult DarkTonic.MasterAudio.SoundGroupVariation/SoundFinishedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SoundFinishedEventHandler_BeginInvoke_m1563603174 (SoundFinishedEventHandler_t2252829809 * __this, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.SoundGroupVariation/SoundFinishedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void SoundFinishedEventHandler_EndInvoke_m674969723 (SoundFinishedEventHandler_t2252829809 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
