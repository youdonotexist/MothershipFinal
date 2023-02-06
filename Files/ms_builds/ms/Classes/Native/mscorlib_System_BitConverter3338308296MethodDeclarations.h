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

// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.BitConverter::.cctor()
extern "C"  void BitConverter__cctor_m2046566571 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.BitConverter::AmILittleEndian()
extern "C"  bool BitConverter_AmILittleEndian_m4037180432 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.BitConverter::DoubleWordsAreSwapped()
extern "C"  bool BitConverter_DoubleWordsAreSwapped_m4219885442 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
extern "C"  int64_t BitConverter_DoubleToInt64Bits_m4106078782 (Il2CppObject * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Byte*,System.Int32)
extern "C"  ByteU5BU5D_t58506160* BitConverter_GetBytes_m223769997 (Il2CppObject * __this /* static, unused */, uint8_t* ___ptr, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
extern "C"  ByteU5BU5D_t58506160* BitConverter_GetBytes_m324200094 (Il2CppObject * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Int64)
extern "C"  ByteU5BU5D_t58506160* BitConverter_GetBytes_m324203039 (Il2CppObject * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.UInt16)
extern "C"  ByteU5BU5D_t58506160* BitConverter_GetBytes_m2457494087 (Il2CppObject * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.UInt32)
extern "C"  ByteU5BU5D_t58506160* BitConverter_GetBytes_m2457495885 (Il2CppObject * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Double)
extern "C"  ByteU5BU5D_t58506160* BitConverter_GetBytes_m1348727701 (Il2CppObject * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.BitConverter::PutBytes(System.Byte*,System.Byte[],System.Int32,System.Int32)
extern "C"  void BitConverter_PutBytes_m189291454 (Il2CppObject * __this /* static, unused */, uint8_t* ___dst, ByteU5BU5D_t58506160* ___src, int32_t ___start_index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.BitConverter::ToInt32(System.Byte[],System.Int32)
extern "C"  int32_t BitConverter_ToInt32_m510821053 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.BitConverter::ToInt64(System.Byte[],System.Int32)
extern "C"  int64_t BitConverter_ToInt64_m3205751581 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.BitConverter::ToUInt16(System.Byte[],System.Int32)
extern "C"  uint16_t BitConverter_ToUInt16_m4082080629 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.BitConverter::ToUInt32(System.Byte[],System.Int32)
extern "C"  uint32_t BitConverter_ToUInt32_m412730473 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.BitConverter::ToUInt64(System.Byte[],System.Int32)
extern "C"  uint64_t BitConverter_ToUInt64_m2696317927 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.BitConverter::ToSingle(System.Byte[],System.Int32)
extern "C"  float BitConverter_ToSingle_m1394719111 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.BitConverter::ToString(System.Byte[])
extern "C"  String_t* BitConverter_ToString_m1865594174 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.BitConverter::ToString(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* BitConverter_ToString_m190732574 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___value, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
