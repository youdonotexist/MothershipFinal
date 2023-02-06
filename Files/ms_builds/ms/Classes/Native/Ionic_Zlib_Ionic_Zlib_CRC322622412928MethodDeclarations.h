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

// Ionic.Zlib.CRC32
struct CRC32_t2622412928;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.UInt32[]
struct UInt32U5BU5D_t2133601851;

#include "codegen/il2cpp-codegen.h"

// System.Int64 Ionic.Zlib.CRC32::get_TotalBytesRead()
extern "C"  int64_t CRC32_get_TotalBytesRead_m205389283 (CRC32_t2622412928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.CRC32::get_Crc32Result()
extern "C"  int32_t CRC32_get_Crc32Result_m131064077 (CRC32_t2622412928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.CRC32::SlurpBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  void CRC32_SlurpBlock_m2972610298 (CRC32_t2622412928 * __this, ByteU5BU5D_t58506160* ___block, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.CRC32::.cctor()
extern "C"  void CRC32__cctor_m3836407621 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Ionic.Zlib.CRC32::gf2_matrix_times(System.UInt32[],System.UInt32)
extern "C"  uint32_t CRC32_gf2_matrix_times_m2727527617 (CRC32_t2622412928 * __this, UInt32U5BU5D_t2133601851* ___matrix, uint32_t ___vec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.CRC32::gf2_matrix_square(System.UInt32[],System.UInt32[])
extern "C"  void CRC32_gf2_matrix_square_m1931096213 (CRC32_t2622412928 * __this, UInt32U5BU5D_t2133601851* ___square, UInt32U5BU5D_t2133601851* ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.CRC32::Combine(System.Int32,System.Int32)
extern "C"  void CRC32_Combine_m2689908737 (CRC32_t2622412928 * __this, int32_t ___crc, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.CRC32::.ctor()
extern "C"  void CRC32__ctor_m970590568 (CRC32_t2622412928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
