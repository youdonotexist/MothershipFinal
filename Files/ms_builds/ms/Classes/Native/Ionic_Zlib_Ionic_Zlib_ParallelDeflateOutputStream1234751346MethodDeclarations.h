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

// Ionic.Zlib.ParallelDeflateOutputStream
struct ParallelDeflateOutputStream_t1234751346;
// System.IO.Stream
struct Stream_t219029575;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Object
struct Il2CppObject;
// Ionic.Zlib.WorkItem
struct WorkItem_t2657194833;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "Ionic_Zlib_Ionic_Zlib_CompressionLevel3940478795.h"
#include "Ionic_Zlib_Ionic_Zlib_CompressionStrategy2328611910.h"
#include "mscorlib_System_Object837106420.h"
#include "Ionic_Zlib_Ionic_Zlib_WorkItem2657194833.h"
#include "mscorlib_System_IO_SeekOrigin3506139269.h"

// System.Void Ionic.Zlib.ParallelDeflateOutputStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionLevel,Ionic.Zlib.CompressionStrategy,System.Boolean)
extern "C"  void ParallelDeflateOutputStream__ctor_m4148638781 (ParallelDeflateOutputStream_t1234751346 * __this, Stream_t219029575 * ___stream, int32_t ___level, int32_t ___strategy, bool ___leaveOpen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zlib.CompressionStrategy Ionic.Zlib.ParallelDeflateOutputStream::get_Strategy()
extern "C"  int32_t ParallelDeflateOutputStream_get_Strategy_m3228482231 (ParallelDeflateOutputStream_t1234751346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::set_Strategy(Ionic.Zlib.CompressionStrategy)
extern "C"  void ParallelDeflateOutputStream_set_Strategy_m1747748668 (ParallelDeflateOutputStream_t1234751346 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.ParallelDeflateOutputStream::get_BuffersPerCore()
extern "C"  int32_t ParallelDeflateOutputStream_get_BuffersPerCore_m3246176384 (ParallelDeflateOutputStream_t1234751346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::set_BuffersPerCore(System.Int32)
extern "C"  void ParallelDeflateOutputStream_set_BuffersPerCore_m1594174725 (ParallelDeflateOutputStream_t1234751346 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::set_BufferSize(System.Int32)
extern "C"  void ParallelDeflateOutputStream_set_BufferSize_m2876028349 (ParallelDeflateOutputStream_t1234751346 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::_InitializePoolOfWorkItems()
extern "C"  void ParallelDeflateOutputStream__InitializePoolOfWorkItems_m635876027 (ParallelDeflateOutputStream_t1234751346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::_KickoffWriter()
extern "C"  void ParallelDeflateOutputStream__KickoffWriter_m4062490443 (ParallelDeflateOutputStream_t1234751346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void ParallelDeflateOutputStream_Write_m1235566230 (ParallelDeflateOutputStream_t1234751346 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::Flush()
extern "C"  void ParallelDeflateOutputStream_Flush_m1867132888 (ParallelDeflateOutputStream_t1234751346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::_Flush(System.Boolean)
extern "C"  void ParallelDeflateOutputStream__Flush_m3405331274 (ParallelDeflateOutputStream_t1234751346 * __this, bool ___lastInput, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::Close()
extern "C"  void ParallelDeflateOutputStream_Close_m3494045132 (ParallelDeflateOutputStream_t1234751346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::Dispose()
extern "C"  void ParallelDeflateOutputStream_Dispose_m4142651251 (ParallelDeflateOutputStream_t1234751346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::Dispose(System.Boolean)
extern "C"  void ParallelDeflateOutputStream_Dispose_m2782857130 (ParallelDeflateOutputStream_t1234751346 * __this, bool ___disposeManagedResources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::Reset(System.IO.Stream)
extern "C"  void ParallelDeflateOutputStream_Reset_m1071369210 (ParallelDeflateOutputStream_t1234751346 * __this, Stream_t219029575 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::_PerpetualWriterMethod(System.Object)
extern "C"  void ParallelDeflateOutputStream__PerpetualWriterMethod_m1525434131 (ParallelDeflateOutputStream_t1234751346 * __this, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::_DeflateOne(System.Object)
extern "C"  void ParallelDeflateOutputStream__DeflateOne_m2771451686 (ParallelDeflateOutputStream_t1234751346 * __this, Il2CppObject * ___wi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zlib.ParallelDeflateOutputStream::DeflateOneSegment(Ionic.Zlib.WorkItem)
extern "C"  bool ParallelDeflateOutputStream_DeflateOneSegment_m1510690705 (ParallelDeflateOutputStream_t1234751346 * __this, WorkItem_t2657194833 * ___workitem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zlib.ParallelDeflateOutputStream::get_CanSeek()
extern "C"  bool ParallelDeflateOutputStream_get_CanSeek_m2278764653 (ParallelDeflateOutputStream_t1234751346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zlib.ParallelDeflateOutputStream::get_CanRead()
extern "C"  bool ParallelDeflateOutputStream_get_CanRead_m2250009611 (ParallelDeflateOutputStream_t1234751346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zlib.ParallelDeflateOutputStream::get_CanWrite()
extern "C"  bool ParallelDeflateOutputStream_get_CanWrite_m1553474732 (ParallelDeflateOutputStream_t1234751346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zlib.ParallelDeflateOutputStream::get_Length()
extern "C"  int64_t ParallelDeflateOutputStream_get_Length_m1571043454 (ParallelDeflateOutputStream_t1234751346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zlib.ParallelDeflateOutputStream::get_Position()
extern "C"  int64_t ParallelDeflateOutputStream_get_Position_m2460739649 (ParallelDeflateOutputStream_t1234751346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::set_Position(System.Int64)
extern "C"  void ParallelDeflateOutputStream_set_Position_m2506727046 (ParallelDeflateOutputStream_t1234751346 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.ParallelDeflateOutputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ParallelDeflateOutputStream_Read_m39133765 (ParallelDeflateOutputStream_t1234751346 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zlib.ParallelDeflateOutputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t ParallelDeflateOutputStream_Seek_m1866577062 (ParallelDeflateOutputStream_t1234751346 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::SetLength(System.Int64)
extern "C"  void ParallelDeflateOutputStream_SetLength_m3329295118 (ParallelDeflateOutputStream_t1234751346 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.ParallelDeflateOutputStream::.cctor()
extern "C"  void ParallelDeflateOutputStream__cctor_m3257049527 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
