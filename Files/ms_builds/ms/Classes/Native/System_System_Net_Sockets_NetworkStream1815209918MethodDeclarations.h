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

// System.Net.Sockets.NetworkStream
struct NetworkStream_t1815209918;
// System.Net.Sockets.Socket
struct Socket_t150013987;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.AsyncCallback
struct AsyncCallback_t1363551830;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_Socket150013987.h"
#include "mscorlib_System_IO_FileAccess995838663.h"
#include "mscorlib_System_AsyncCallback1363551830.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IO_SeekOrigin3506139269.h"

// System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket)
extern "C"  void NetworkStream__ctor_m2753228565 (NetworkStream_t1815209918 * __this, Socket_t150013987 * ___socket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket,System.Boolean)
extern "C"  void NetworkStream__ctor_m520140744 (NetworkStream_t1815209918 * __this, Socket_t150013987 * ___socket, bool ___owns_socket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket,System.IO.FileAccess,System.Boolean)
extern "C"  void NetworkStream__ctor_m1461663701 (NetworkStream_t1815209918 * __this, Socket_t150013987 * ___socket, int32_t ___access, bool ___owns_socket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::System.IDisposable.Dispose()
extern "C"  void NetworkStream_System_IDisposable_Dispose_m4271513331 (NetworkStream_t1815209918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.NetworkStream::get_CanRead()
extern "C"  bool NetworkStream_get_CanRead_m1447813521 (NetworkStream_t1815209918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.NetworkStream::get_CanSeek()
extern "C"  bool NetworkStream_get_CanSeek_m1476568563 (NetworkStream_t1815209918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.NetworkStream::get_CanWrite()
extern "C"  bool NetworkStream_get_CanWrite_m2455199718 (NetworkStream_t1815209918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Sockets.NetworkStream::get_Length()
extern "C"  int64_t NetworkStream_get_Length_m1553131640 (NetworkStream_t1815209918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Sockets.NetworkStream::get_Position()
extern "C"  int64_t NetworkStream_get_Position_m2427355579 (NetworkStream_t1815209918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::set_Position(System.Int64)
extern "C"  void NetworkStream_set_Position_m1068534608 (NetworkStream_t1815209918 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::get_ReadTimeout()
extern "C"  int32_t NetworkStream_get_ReadTimeout_m2947262172 (NetworkStream_t1815209918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::get_WriteTimeout()
extern "C"  int32_t NetworkStream_get_WriteTimeout_m1563094355 (NetworkStream_t1815209918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.NetworkStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * NetworkStream_BeginRead_m601033934 (NetworkStream_t1815209918 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.NetworkStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * NetworkStream_BeginWrite_m3924679355 (NetworkStream_t1815209918 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Finalize()
extern "C"  void NetworkStream_Finalize_m1616600246 (NetworkStream_t1815209918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Dispose(System.Boolean)
extern "C"  void NetworkStream_Dispose_m3111804704 (NetworkStream_t1815209918 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::EndRead(System.IAsyncResult)
extern "C"  int32_t NetworkStream_EndRead_m3536160344 (NetworkStream_t1815209918 * __this, Il2CppObject * ___ar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::EndWrite(System.IAsyncResult)
extern "C"  void NetworkStream_EndWrite_m4284949895 (NetworkStream_t1815209918 * __this, Il2CppObject * ___ar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Flush()
extern "C"  void NetworkStream_Flush_m1627337550 (NetworkStream_t1815209918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t NetworkStream_Read_m945182283 (NetworkStream_t1815209918 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Sockets.NetworkStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t NetworkStream_Seek_m2612975724 (NetworkStream_t1815209918 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::SetLength(System.Int64)
extern "C"  void NetworkStream_SetLength_m3658242692 (NetworkStream_t1815209918 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void NetworkStream_Write_m133161568 (NetworkStream_t1815209918 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::CheckDisposed()
extern "C"  void NetworkStream_CheckDisposed_m3812823127 (NetworkStream_t1815209918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
