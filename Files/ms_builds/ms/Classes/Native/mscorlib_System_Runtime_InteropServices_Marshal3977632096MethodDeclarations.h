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

// System.Array
struct Il2CppArray;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.Exception
struct Exception_t1967233988;
// System.Security.SecureString
struct SecureString_t4183656205;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Exception1967233988.h"
#include "mscorlib_System_Guid2778838590.h"
#include "mscorlib_System_Security_SecureString4183656205.h"

// System.Void System.Runtime.InteropServices.Marshal::.cctor()
extern "C"  void Marshal__cctor_m156400721 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocCoTaskMem(System.Int32)
extern "C"  IntPtr_t Marshal_AllocCoTaskMem_m3580890173 (Il2CppObject * __this /* static, unused */, int32_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::copy_to_unmanaged(System.Array,System.Int32,System.IntPtr,System.Int32)
extern "C"  void Marshal_copy_to_unmanaged_m1909563134 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___source, int32_t ___startIndex, IntPtr_t ___destination, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)
extern "C"  void Marshal_copy_from_unmanaged_m1711077603 (Il2CppObject * __this /* static, unused */, IntPtr_t ___source, int32_t ___startIndex, Il2CppArray * ___destination, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
extern "C"  void Marshal_Copy_m2999277726 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___source, int32_t ___startIndex, IntPtr_t ___destination, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern "C"  void Marshal_Copy_m1690250234 (Il2CppObject * __this /* static, unused */, IntPtr_t ___source, ByteU5BU5D_t58506160* ___destination, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Char[],System.Int32,System.Int32)
extern "C"  void Marshal_Copy_m1390445676 (Il2CppObject * __this /* static, unused */, IntPtr_t ___source, CharU5BU5D_t3416858730* ___destination, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::FreeBSTR(System.IntPtr)
extern "C"  void Marshal_FreeBSTR_m1194723729 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::GetHRForException(System.Exception)
extern "C"  int32_t Marshal_GetHRForException_m3933706388 (Il2CppObject * __this /* static, unused */, Exception_t1967233988 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::GetLastWin32Error()
extern "C"  int32_t Marshal_GetLastWin32Error_m701978199 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::QueryInterfaceInternal(System.IntPtr,System.Guid&,System.IntPtr&)
extern "C"  int32_t Marshal_QueryInterfaceInternal_m3960078360 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pUnk, Guid_t2778838590 * ___iid, IntPtr_t* ___ppv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::QueryInterface(System.IntPtr,System.Guid&,System.IntPtr&)
extern "C"  int32_t Marshal_QueryInterface_m257187605 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pUnk, Guid_t2778838590 * ___iid, IntPtr_t* ___ppv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Runtime.InteropServices.Marshal::ReadByte(System.IntPtr,System.Int32)
extern "C"  uint8_t Marshal_ReadByte_m3705434677 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr, int32_t ___ofs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.Marshal::SecureStringToBSTR(System.Security.SecureString)
extern "C"  IntPtr_t Marshal_SecureStringToBSTR_m3211319256 (Il2CppObject * __this /* static, unused */, SecureString_t4183656205 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::ThrowExceptionForHR(System.Int32)
extern "C"  void Marshal_ThrowExceptionForHR_m3396044309 (Il2CppObject * __this /* static, unused */, int32_t ___errorCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::WriteByte(System.IntPtr,System.Int32,System.Byte)
extern "C"  void Marshal_WriteByte_m4239949353 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr, int32_t ___ofs, uint8_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::WriteInt16(System.IntPtr,System.Int32,System.Int16)
extern "C"  void Marshal_WriteInt16_m1649638641 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr, int32_t ___ofs, int16_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::WriteInt32(System.IntPtr,System.Int32,System.Int32)
extern "C"  void Marshal_WriteInt32_m255954173 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr, int32_t ___ofs, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.InteropServices.Marshal::GetExceptionForHR(System.Int32)
extern "C"  Exception_t1967233988 * Marshal_GetExceptionForHR_m165612394 (Il2CppObject * __this /* static, unused */, int32_t ___errorCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.InteropServices.Marshal::GetExceptionForHR(System.Int32,System.IntPtr)
extern "C"  Exception_t1967233988 * Marshal_GetExceptionForHR_m1868068728 (Il2CppObject * __this /* static, unused */, int32_t ___errorCode, IntPtr_t ___errorInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
