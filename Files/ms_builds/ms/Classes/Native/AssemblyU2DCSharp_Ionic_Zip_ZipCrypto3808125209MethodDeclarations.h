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

// Ionic.Zip.ZipCrypto
struct ZipCrypto_t3808125209;
// System.String
struct String_t;
// Ionic.Zip.ZipEntry
struct ZipEntry_t2226789352;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipEntry2226789352.h"

// System.Void Ionic.Zip.ZipCrypto::.ctor()
extern "C"  void ZipCrypto__ctor_m752279298 (ZipCrypto_t3808125209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipCrypto Ionic.Zip.ZipCrypto::ForWrite(System.String)
extern "C"  ZipCrypto_t3808125209 * ZipCrypto_ForWrite_m3367788948 (Il2CppObject * __this /* static, unused */, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipCrypto Ionic.Zip.ZipCrypto::ForRead(System.String,Ionic.Zip.ZipEntry)
extern "C"  ZipCrypto_t3808125209 * ZipCrypto_ForRead_m3673948387 (Il2CppObject * __this /* static, unused */, String_t* ___password, ZipEntry_t2226789352 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Ionic.Zip.ZipCrypto::get_MagicByte()
extern "C"  uint8_t ZipCrypto_get_MagicByte_m3310660056 (ZipCrypto_t3808125209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Ionic.Zip.ZipCrypto::DecryptMessage(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t58506160* ZipCrypto_DecryptMessage_m4014301312 (ZipCrypto_t3808125209 * __this, ByteU5BU5D_t58506160* ___cipherText, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Ionic.Zip.ZipCrypto::EncryptMessage(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t58506160* ZipCrypto_EncryptMessage_m3897301160 (ZipCrypto_t3808125209 * __this, ByteU5BU5D_t58506160* ___plainText, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipCrypto::InitCipher(System.String)
extern "C"  void ZipCrypto_InitCipher_m3626397797 (ZipCrypto_t3808125209 * __this, String_t* ___passphrase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipCrypto::UpdateKeys(System.Byte)
extern "C"  void ZipCrypto_UpdateKeys_m40417708 (ZipCrypto_t3808125209 * __this, uint8_t ___byteValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
