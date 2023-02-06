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

// Ionic.Crc.CRC32
struct CRC32_t2657347115;
// System.IO.Stream
struct Stream_t219029575;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.UInt32[]
struct UInt32U5BU5D_t2133601851;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"

// System.Void Ionic.Crc.CRC32::.ctor()
extern "C"  void CRC32__ctor_m4287895454 (CRC32_t2657347115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Crc.CRC32::.ctor(System.Boolean)
extern "C"  void CRC32__ctor_m1525817493 (CRC32_t2657347115 * __this, bool ___reverseBits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Crc.CRC32::.ctor(System.Int32,System.Boolean)
extern "C"  void CRC32__ctor_m917587886 (CRC32_t2657347115 * __this, int32_t ___polynomial, bool ___reverseBits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Crc.CRC32::get_TotalBytesRead()
extern "C"  int64_t CRC32_get_TotalBytesRead_m1646654781 (CRC32_t2657347115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Crc.CRC32::get_Crc32Result()
extern "C"  int32_t CRC32_get_Crc32Result_m1718241681 (CRC32_t2657347115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Crc.CRC32::GetCrc32(System.IO.Stream)
extern "C"  int32_t CRC32_GetCrc32_m3941060460 (CRC32_t2657347115 * __this, Stream_t219029575 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Crc.CRC32::GetCrc32AndCopy(System.IO.Stream,System.IO.Stream)
extern "C"  int32_t CRC32_GetCrc32AndCopy_m3120560397 (CRC32_t2657347115 * __this, Stream_t219029575 * ___input, Stream_t219029575 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Crc.CRC32::ComputeCrc32(System.Int32,System.Byte)
extern "C"  int32_t CRC32_ComputeCrc32_m49489482 (CRC32_t2657347115 * __this, int32_t ___W, uint8_t ___B, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Crc.CRC32::_InternalComputeCrc32(System.UInt32,System.Byte)
extern "C"  int32_t CRC32__InternalComputeCrc32_m1775077085 (CRC32_t2657347115 * __this, uint32_t ___W, uint8_t ___B, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Crc.CRC32::SlurpBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  void CRC32_SlurpBlock_m2960426032 (CRC32_t2657347115 * __this, ByteU5BU5D_t58506160* ___block, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Crc.CRC32::UpdateCRC(System.Byte)
extern "C"  void CRC32_UpdateCRC_m2495285316 (CRC32_t2657347115 * __this, uint8_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Crc.CRC32::UpdateCRC(System.Byte,System.Int32)
extern "C"  void CRC32_UpdateCRC_m259957523 (CRC32_t2657347115 * __this, uint8_t ___b, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Ionic.Crc.CRC32::ReverseBits(System.UInt32)
extern "C"  uint32_t CRC32_ReverseBits_m3168668411 (Il2CppObject * __this /* static, unused */, uint32_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Ionic.Crc.CRC32::ReverseBits(System.Byte)
extern "C"  uint8_t CRC32_ReverseBits_m595099099 (Il2CppObject * __this /* static, unused */, uint8_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Crc.CRC32::GenerateLookupTable()
extern "C"  void CRC32_GenerateLookupTable_m2542594939 (CRC32_t2657347115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Ionic.Crc.CRC32::gf2_matrix_times(System.UInt32[],System.UInt32)
extern "C"  uint32_t CRC32_gf2_matrix_times_m1140107277 (CRC32_t2657347115 * __this, UInt32U5BU5D_t2133601851* ___matrix, uint32_t ___vec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Crc.CRC32::gf2_matrix_square(System.UInt32[],System.UInt32[])
extern "C"  void CRC32_gf2_matrix_square_m683777183 (CRC32_t2657347115 * __this, UInt32U5BU5D_t2133601851* ___square, UInt32U5BU5D_t2133601851* ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Crc.CRC32::Combine(System.Int32,System.Int32)
extern "C"  void CRC32_Combine_m1356431371 (CRC32_t2657347115 * __this, int32_t ___crc, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Crc.CRC32::Reset()
extern "C"  void CRC32_Reset_m1934328395 (CRC32_t2657347115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
