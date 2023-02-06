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

// Ionic.Zlib.ZlibCodec
struct ZlibCodec_t3910383704;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "Ionic_Zlib_Ionic_Zlib_FlushType3984958891.h"
#include "Ionic_Zlib_Ionic_Zlib_CompressionLevel3940478795.h"

// System.Void Ionic.Zlib.ZlibCodec::.ctor()
extern "C"  void ZlibCodec__ctor_m4203770000 (ZlibCodec_t3910383704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.ZlibCodec::InitializeInflate(System.Boolean)
extern "C"  int32_t ZlibCodec_InitializeInflate_m704908860 (ZlibCodec_t3910383704 * __this, bool ___expectRfc1950Header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.ZlibCodec::InitializeInflate(System.Int32,System.Boolean)
extern "C"  int32_t ZlibCodec_InitializeInflate_m3600220519 (ZlibCodec_t3910383704 * __this, int32_t ___windowBits, bool ___expectRfc1950Header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.ZlibCodec::Inflate(Ionic.Zlib.FlushType)
extern "C"  int32_t ZlibCodec_Inflate_m659046382 (ZlibCodec_t3910383704 * __this, int32_t ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.ZlibCodec::EndInflate()
extern "C"  int32_t ZlibCodec_EndInflate_m528339296 (ZlibCodec_t3910383704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.ZlibCodec::InitializeDeflate(Ionic.Zlib.CompressionLevel,System.Boolean)
extern "C"  int32_t ZlibCodec_InitializeDeflate_m3271505993 (ZlibCodec_t3910383704 * __this, int32_t ___level, bool ___wantRfc1950Header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.ZlibCodec::_InternalInitializeDeflate(System.Boolean)
extern "C"  int32_t ZlibCodec__InternalInitializeDeflate_m748063658 (ZlibCodec_t3910383704 * __this, bool ___wantRfc1950Header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.ZlibCodec::Deflate(Ionic.Zlib.FlushType)
extern "C"  int32_t ZlibCodec_Deflate_m3781134098 (ZlibCodec_t3910383704 * __this, int32_t ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.ZlibCodec::EndDeflate()
extern "C"  int32_t ZlibCodec_EndDeflate_m2470253188 (ZlibCodec_t3910383704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.ZlibCodec::ResetDeflate()
extern "C"  void ZlibCodec_ResetDeflate_m129646736 (ZlibCodec_t3910383704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.ZlibCodec::flush_pending()
extern "C"  void ZlibCodec_flush_pending_m2565529898 (ZlibCodec_t3910383704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.ZlibCodec::read_buf(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ZlibCodec_read_buf_m150050827 (ZlibCodec_t3910383704 * __this, ByteU5BU5D_t58506160* ___buf, int32_t ___start, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
