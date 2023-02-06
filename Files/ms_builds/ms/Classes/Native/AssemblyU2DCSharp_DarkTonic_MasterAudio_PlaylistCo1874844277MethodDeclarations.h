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

// DarkTonic.MasterAudio.PlaylistController/SongEndedEventHandler
struct SongEndedEventHandler_t1874844277;
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

// System.Void DarkTonic.MasterAudio.PlaylistController/SongEndedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void SongEndedEventHandler__ctor_m873221772 (SongEndedEventHandler_t1874844277 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController/SongEndedEventHandler::Invoke(System.String)
extern "C"  void SongEndedEventHandler_Invoke_m4115944156 (SongEndedEventHandler_t1874844277 * __this, String_t* ___songName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SongEndedEventHandler_t1874844277(Il2CppObject* delegate, String_t* ___songName);
// System.IAsyncResult DarkTonic.MasterAudio.PlaylistController/SongEndedEventHandler::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SongEndedEventHandler_BeginInvoke_m3062637153 (SongEndedEventHandler_t1874844277 * __this, String_t* ___songName, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController/SongEndedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void SongEndedEventHandler_EndInvoke_m847570588 (SongEndedEventHandler_t1874844277 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
