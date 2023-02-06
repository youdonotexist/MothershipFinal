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

// DarkTonic.MasterAudio.PlaylistController/SongChangedEventHandler
struct SongChangedEventHandler_t33399983;
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

// System.Void DarkTonic.MasterAudio.PlaylistController/SongChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void SongChangedEventHandler__ctor_m2300194246 (SongChangedEventHandler_t33399983 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController/SongChangedEventHandler::Invoke(System.String)
extern "C"  void SongChangedEventHandler_Invoke_m3670687074 (SongChangedEventHandler_t33399983 * __this, String_t* ___newSongName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SongChangedEventHandler_t33399983(Il2CppObject* delegate, String_t* ___newSongName);
// System.IAsyncResult DarkTonic.MasterAudio.PlaylistController/SongChangedEventHandler::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SongChangedEventHandler_BeginInvoke_m743620583 (SongChangedEventHandler_t33399983 * __this, String_t* ___newSongName, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PlaylistController/SongChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void SongChangedEventHandler_EndInvoke_m2693231318 (SongChangedEventHandler_t33399983 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
