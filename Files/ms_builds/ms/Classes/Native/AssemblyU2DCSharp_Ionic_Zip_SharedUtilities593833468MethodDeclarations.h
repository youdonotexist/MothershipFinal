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

// System.String
struct String_t;
// System.IO.Stream
struct Stream_t219029575;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Text.Encoding
struct Encoding_t180559927;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_Text_Encoding180559927.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void Ionic.Zip.SharedUtilities::.cctor()
extern "C"  void SharedUtilities__cctor_m1139887822 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.SharedUtilities::GetFileLength(System.String)
extern "C"  int64_t SharedUtilities_GetFileLength_m4284925790 (Il2CppObject * __this /* static, unused */, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.SharedUtilities::Workaround_Ladybug318918(System.IO.Stream)
extern "C"  void SharedUtilities_Workaround_Ladybug318918_m3300519211 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.SharedUtilities::SimplifyFwdSlashPath(System.String)
extern "C"  String_t* SharedUtilities_SimplifyFwdSlashPath_m1289220072 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.SharedUtilities::NormalizePathForUseInZipFile(System.String)
extern "C"  String_t* SharedUtilities_NormalizePathForUseInZipFile_m3794636696 (Il2CppObject * __this /* static, unused */, String_t* ___pathName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Ionic.Zip.SharedUtilities::StringToByteArray(System.String,System.Text.Encoding)
extern "C"  ByteU5BU5D_t58506160* SharedUtilities_StringToByteArray_m2976291707 (Il2CppObject * __this /* static, unused */, String_t* ___value, Encoding_t180559927 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Ionic.Zip.SharedUtilities::StringToByteArray(System.String)
extern "C"  ByteU5BU5D_t58506160* SharedUtilities_StringToByteArray_m3020752214 (Il2CppObject * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.SharedUtilities::Utf8StringFromBuffer(System.Byte[])
extern "C"  String_t* SharedUtilities_Utf8StringFromBuffer_m3788296091 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___buf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.SharedUtilities::StringFromBuffer(System.Byte[],System.Text.Encoding)
extern "C"  String_t* SharedUtilities_StringFromBuffer_m2025511365 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___buf, Encoding_t180559927 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.SharedUtilities::ReadSignature(System.IO.Stream)
extern "C"  int32_t SharedUtilities_ReadSignature_m516274756 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.SharedUtilities::ReadEntrySignature(System.IO.Stream)
extern "C"  int32_t SharedUtilities_ReadEntrySignature_m652807946 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.SharedUtilities::ReadInt(System.IO.Stream)
extern "C"  int32_t SharedUtilities_ReadInt_m2561638587 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.SharedUtilities::_ReadFourBytes(System.IO.Stream,System.String)
extern "C"  int32_t SharedUtilities__ReadFourBytes_m3776258266 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___s, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.SharedUtilities::FindSignature(System.IO.Stream,System.Int32)
extern "C"  int64_t SharedUtilities_FindSignature_m2338613141 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___stream, int32_t ___SignatureToFind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Ionic.Zip.SharedUtilities::AdjustTime_Reverse(System.DateTime)
extern "C"  DateTime_t339033936  SharedUtilities_AdjustTime_Reverse_m1807526509 (Il2CppObject * __this /* static, unused */, DateTime_t339033936  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Ionic.Zip.SharedUtilities::PackedToDateTime(System.Int32)
extern "C"  DateTime_t339033936  SharedUtilities_PackedToDateTime_m1698317067 (Il2CppObject * __this /* static, unused */, int32_t ___packedDateTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.SharedUtilities::DateTimeToPacked(System.DateTime)
extern "C"  int32_t SharedUtilities_DateTimeToPacked_m839710771 (Il2CppObject * __this /* static, unused */, DateTime_t339033936  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.SharedUtilities::CreateAndOpenUniqueTempFile(System.String,System.IO.Stream&,System.String&)
extern "C"  void SharedUtilities_CreateAndOpenUniqueTempFile_m1217172514 (Il2CppObject * __this /* static, unused */, String_t* ___dir, Stream_t219029575 ** ___fs, String_t** ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.SharedUtilities::InternalGetTempFileName()
extern "C"  String_t* SharedUtilities_InternalGetTempFileName_m363376788 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.SharedUtilities::ReadWithRetry(System.IO.Stream,System.Byte[],System.Int32,System.Int32,System.String)
extern "C"  int32_t SharedUtilities_ReadWithRetry_m3395795373 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___s, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, String_t* ___FileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Ionic.Zip.SharedUtilities::_HRForException(System.Exception)
extern "C"  uint32_t SharedUtilities__HRForException_m966087511 (Il2CppObject * __this /* static, unused */, Exception_t1967233988 * ___ex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
