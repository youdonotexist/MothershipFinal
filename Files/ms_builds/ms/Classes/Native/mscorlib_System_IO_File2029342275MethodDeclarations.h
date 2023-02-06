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
// System.IO.FileStream
struct FileStream_t1527309539;
// System.IO.StreamReader
struct StreamReader_t717565226;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Text.Encoding
struct Encoding_t180559927;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_IO_FileAttributes2606923962.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_IO_FileMode1356058118.h"
#include "mscorlib_System_IO_FileAccess995838663.h"
#include "mscorlib_System_IO_FileShare2703391818.h"
#include "mscorlib_System_Text_Encoding180559927.h"

// System.Void System.IO.File::Copy(System.String,System.String)
extern "C"  void File_Copy_m4182716978 (Il2CppObject * __this /* static, unused */, String_t* ___sourceFileName, String_t* ___destFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::Copy(System.String,System.String,System.Boolean)
extern "C"  void File_Copy_m4125374219 (Il2CppObject * __this /* static, unused */, String_t* ___sourceFileName, String_t* ___destFileName, bool ___overwrite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::Create(System.String)
extern "C"  FileStream_t1527309539 * File_Create_m3497726217 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::Create(System.String,System.Int32)
extern "C"  FileStream_t1527309539 * File_Create_m2847392366 (Il2CppObject * __this /* static, unused */, String_t* ___path, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::Delete(System.String)
extern "C"  void File_Delete_m760984832 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.File::Exists(System.String)
extern "C"  bool File_Exists_m1326262381 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileAttributes System.IO.File::GetAttributes(System.String)
extern "C"  int32_t File_GetAttributes_m1646191705 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.IO.File::GetCreationTime(System.String)
extern "C"  DateTime_t339033936  File_GetCreationTime_m4247736334 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.IO.File::GetLastAccessTime(System.String)
extern "C"  DateTime_t339033936  File_GetLastAccessTime_m731398451 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.IO.File::GetLastWriteTime(System.String)
extern "C"  DateTime_t339033936  File_GetLastWriteTime_m3623250546 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::Move(System.String,System.String)
extern "C"  void File_Move_m1404293974 (Il2CppObject * __this /* static, unused */, String_t* ___sourceFileName, String_t* ___destFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
extern "C"  FileStream_t1527309539 * File_Open_m1918038371 (Il2CppObject * __this /* static, unused */, String_t* ___path, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
extern "C"  FileStream_t1527309539 * File_Open_m3723338220 (Il2CppObject * __this /* static, unused */, String_t* ___path, int32_t ___mode, int32_t ___access, int32_t ___share, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
extern "C"  FileStream_t1527309539 * File_OpenRead_m3104031109 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.StreamReader System.IO.File::OpenText(System.String)
extern "C"  StreamReader_t717565226 * File_OpenText_m396847893 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::OpenWrite(System.String)
extern "C"  FileStream_t1527309539 * File_OpenWrite_m23896808 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::SetAttributes(System.String,System.IO.FileAttributes)
extern "C"  void File_SetAttributes_m2359825740 (Il2CppObject * __this /* static, unused */, String_t* ___path, int32_t ___fileAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::SetCreationTime(System.String,System.DateTime)
extern "C"  void File_SetCreationTime_m3400682971 (Il2CppObject * __this /* static, unused */, String_t* ___path, DateTime_t339033936  ___creationTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::SetCreationTimeUtc(System.String,System.DateTime)
extern "C"  void File_SetCreationTimeUtc_m866354247 (Il2CppObject * __this /* static, unused */, String_t* ___path, DateTime_t339033936  ___creationTimeUtc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::SetLastAccessTime(System.String,System.DateTime)
extern "C"  void File_SetLastAccessTime_m40471104 (Il2CppObject * __this /* static, unused */, String_t* ___path, DateTime_t339033936  ___lastAccessTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::SetLastAccessTimeUtc(System.String,System.DateTime)
extern "C"  void File_SetLastAccessTimeUtc_m3892359618 (Il2CppObject * __this /* static, unused */, String_t* ___path, DateTime_t339033936  ___lastAccessTimeUtc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::SetLastWriteTime(System.String,System.DateTime)
extern "C"  void File_SetLastWriteTime_m3432397289 (Il2CppObject * __this /* static, unused */, String_t* ___path, DateTime_t339033936  ___lastWriteTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::SetLastWriteTimeUtc(System.String,System.DateTime)
extern "C"  void File_SetLastWriteTimeUtc_m774796665 (Il2CppObject * __this /* static, unused */, String_t* ___path, DateTime_t339033936  ___lastWriteTimeUtc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::CheckPathExceptions(System.String)
extern "C"  void File_CheckPathExceptions_m1390322214 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
extern "C"  ByteU5BU5D_t58506160* File_ReadAllBytes_m621899937 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.File::ReadAllText(System.String)
extern "C"  String_t* File_ReadAllText_m3411439778 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.File::ReadAllText(System.String,System.Text.Encoding)
extern "C"  String_t* File_ReadAllText_m108099503 (Il2CppObject * __this /* static, unused */, String_t* ___path, Encoding_t180559927 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.IO.File::get_DefaultLocalFileTime()
extern "C"  DateTime_t339033936  File_get_DefaultLocalFileTime_m2149273196 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
