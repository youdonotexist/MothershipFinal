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

// Ionic.Zip.ZipFile
struct ZipFile_t3698100756;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t180559927;
// System.IO.TextWriter
struct TextWriter_t1689927879;
// System.EventHandler`1<Ionic.Zip.SaveProgressEventArgs>
struct EventHandler_1_t3340276655;
// System.EventHandler`1<Ionic.Zip.ReadProgressEventArgs>
struct EventHandler_1_t3044741302;
// System.EventHandler`1<Ionic.Zip.ExtractProgressEventArgs>
struct EventHandler_1_t919156075;
// System.EventHandler`1<Ionic.Zip.AddProgressEventArgs>
struct EventHandler_1_t2193190219;
// System.EventHandler`1<Ionic.Zip.ZipErrorEventArgs>
struct EventHandler_1_t1109993394;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// Ionic.Zip.ZipEntry
struct ZipEntry_t2226789352;
// System.Collections.Generic.ICollection`1<Ionic.Zip.ZipEntry>
struct ICollection_1_t2692620738;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3840643258;
// System.IO.Stream
struct Stream_t219029575;
// Ionic.Zip.WriteDelegate
struct WriteDelegate_t2087363675;
// Ionic.Zip.OpenDelegate
struct OpenDelegate_t1492450310;
// Ionic.Zip.CloseDelegate
struct CloseDelegate_t890700148;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Exception
struct Exception_t1967233988;
// Ionic.Zip.ReadOptions
struct ReadOptions_t1994441215;
// Ionic.Zip.SelfExtractorSaveOptions
struct SelfExtractorSaveOptions_t3360896288;
// System.Reflection.Assembly
struct Assembly_t1882292308;
// Ionic.Zip.SetCompressionCallback
struct SetCompressionCallback_t2458683936;
// System.Version
struct Version_t497901645;
// System.Collections.Generic.List`1<Ionic.Zip.ZipEntry>
struct List_1_t3023748321;
// System.Collections.Generic.IEnumerator`1<Ionic.Zip.ZipEntry>
struct IEnumerator_1_t3709895800;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Text_Encoding180559927.h"
#include "mscorlib_System_IO_TextWriter1689927879.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "AssemblyU2DCSharp_Ionic_Zip_WriteDelegate2087363675.h"
#include "AssemblyU2DCSharp_Ionic_Zip_OpenDelegate1492450310.h"
#include "AssemblyU2DCSharp_Ionic_Zip_CloseDelegate890700148.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipEntry2226789352.h"
#include "AssemblyU2DCSharp_Ionic_Zip_AddOrUpdateAction3619245754.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipProgressEventType713156157.h"
#include "mscorlib_System_Exception1967233988.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ExtractExistingFileActi788829941.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ReadOptions1994441215.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipFile3698100756.h"
#include "AssemblyU2DCSharp_Ionic_Zip_SelfExtractorFlavor1861780173.h"
#include "AssemblyU2DCSharp_Ionic_Zip_SelfExtractorSaveOptio3360896288.h"
#include "mscorlib_System_Reflection_Assembly1882292308.h"
#include "Ionic_Zlib_Ionic_Zlib_CompressionStrategy2328611910.h"
#include "Ionic_Zlib_Ionic_Zlib_CompressionLevel3940478795.h"
#include "AssemblyU2DCSharp_Ionic_Zip_CompressionMethod2250333118.h"
#include "AssemblyU2DCSharp_Ionic_Zip_Zip64Option669838539.h"
#include "mscorlib_System_Nullable_1_gen3097043249.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipOption4149672141.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipErrorAction570510996.h"
#include "AssemblyU2DCSharp_Ionic_Zip_EncryptionAlgorithm2765650435.h"
#include "AssemblyU2DCSharp_Ionic_Zip_SetCompressionCallback2458683936.h"

// System.Void Ionic.Zip.ZipFile::.ctor(System.String)
extern "C"  void ZipFile__ctor_m2303566267 (ZipFile_t3698100756 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::.ctor(System.String,System.Text.Encoding)
extern "C"  void ZipFile__ctor_m883040310 (ZipFile_t3698100756 * __this, String_t* ___fileName, Encoding_t180559927 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::.ctor()
extern "C"  void ZipFile__ctor_m1116275879 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::.ctor(System.Text.Encoding)
extern "C"  void ZipFile__ctor_m1163425970 (ZipFile_t3698100756 * __this, Encoding_t180559927 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::.ctor(System.String,System.IO.TextWriter)
extern "C"  void ZipFile__ctor_m708268482 (ZipFile_t3698100756 * __this, String_t* ___fileName, TextWriter_t1689927879 * ___statusMessageWriter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::.ctor(System.String,System.IO.TextWriter,System.Text.Encoding)
extern "C"  void ZipFile__ctor_m223251087 (ZipFile_t3698100756 * __this, String_t* ___fileName, TextWriter_t1689927879 * ___statusMessageWriter, Encoding_t180559927 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::.cctor()
extern "C"  void ZipFile__cctor_m4057684966 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::add_SaveProgress(System.EventHandler`1<Ionic.Zip.SaveProgressEventArgs>)
extern "C"  void ZipFile_add_SaveProgress_m732943007 (ZipFile_t3698100756 * __this, EventHandler_1_t3340276655 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::remove_SaveProgress(System.EventHandler`1<Ionic.Zip.SaveProgressEventArgs>)
extern "C"  void ZipFile_remove_SaveProgress_m1568803812 (ZipFile_t3698100756 * __this, EventHandler_1_t3340276655 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::add_ReadProgress(System.EventHandler`1<Ionic.Zip.ReadProgressEventArgs>)
extern "C"  void ZipFile_add_ReadProgress_m3663297023 (ZipFile_t3698100756 * __this, EventHandler_1_t3044741302 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::remove_ReadProgress(System.EventHandler`1<Ionic.Zip.ReadProgressEventArgs>)
extern "C"  void ZipFile_remove_ReadProgress_m204190532 (ZipFile_t3698100756 * __this, EventHandler_1_t3044741302 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::add_ExtractProgress(System.EventHandler`1<Ionic.Zip.ExtractProgressEventArgs>)
extern "C"  void ZipFile_add_ExtractProgress_m555332509 (ZipFile_t3698100756 * __this, EventHandler_1_t919156075 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::remove_ExtractProgress(System.EventHandler`1<Ionic.Zip.ExtractProgressEventArgs>)
extern "C"  void ZipFile_remove_ExtractProgress_m2997560610 (ZipFile_t3698100756 * __this, EventHandler_1_t919156075 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::add_AddProgress(System.EventHandler`1<Ionic.Zip.AddProgressEventArgs>)
extern "C"  void ZipFile_add_AddProgress_m670182621 (ZipFile_t3698100756 * __this, EventHandler_1_t2193190219 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::remove_AddProgress(System.EventHandler`1<Ionic.Zip.AddProgressEventArgs>)
extern "C"  void ZipFile_remove_AddProgress_m4246467426 (ZipFile_t3698100756 * __this, EventHandler_1_t2193190219 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::add_ZipError(System.EventHandler`1<Ionic.Zip.ZipErrorEventArgs>)
extern "C"  void ZipFile_add_ZipError_m3512283775 (ZipFile_t3698100756 * __this, EventHandler_1_t1109993394 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::remove_ZipError(System.EventHandler`1<Ionic.Zip.ZipErrorEventArgs>)
extern "C"  void ZipFile_remove_ZipError_m2699526340 (ZipFile_t3698100756 * __this, EventHandler_1_t1109993394 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Ionic.Zip.ZipFile::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * ZipFile_System_Collections_IEnumerable_GetEnumerator_m1115835098 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipFile::AddItem(System.String)
extern "C"  ZipEntry_t2226789352 * ZipFile_AddItem_m3030486998 (ZipFile_t3698100756 * __this, String_t* ___fileOrDirectoryName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipFile::AddItem(System.String,System.String)
extern "C"  ZipEntry_t2226789352 * ZipFile_AddItem_m1159678354 (ZipFile_t3698100756 * __this, String_t* ___fileOrDirectoryName, String_t* ___directoryPathInArchive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipFile::AddFile(System.String)
extern "C"  ZipEntry_t2226789352 * ZipFile_AddFile_m24368717 (ZipFile_t3698100756 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipFile::AddFile(System.String,System.String)
extern "C"  ZipEntry_t2226789352 * ZipFile_AddFile_m2122150857 (ZipFile_t3698100756 * __this, String_t* ___fileName, String_t* ___directoryPathInArchive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::RemoveEntries(System.Collections.Generic.ICollection`1<Ionic.Zip.ZipEntry>)
extern "C"  void ZipFile_RemoveEntries_m3179330672 (ZipFile_t3698100756 * __this, Il2CppObject* ___entriesToRemove, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::RemoveEntries(System.Collections.Generic.ICollection`1<System.String>)
extern "C"  void ZipFile_RemoveEntries_m3167231456 (ZipFile_t3698100756 * __this, Il2CppObject* ___entriesToRemove, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::AddFiles(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C"  void ZipFile_AddFiles_m1401781736 (ZipFile_t3698100756 * __this, Il2CppObject* ___fileNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::UpdateFiles(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C"  void ZipFile_UpdateFiles_m3987493384 (ZipFile_t3698100756 * __this, Il2CppObject* ___fileNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::AddFiles(System.Collections.Generic.IEnumerable`1<System.String>,System.String)
extern "C"  void ZipFile_AddFiles_m989868068 (ZipFile_t3698100756 * __this, Il2CppObject* ___fileNames, String_t* ___directoryPathInArchive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::AddFiles(System.Collections.Generic.IEnumerable`1<System.String>,System.Boolean,System.String)
extern "C"  void ZipFile_AddFiles_m1865041937 (ZipFile_t3698100756 * __this, Il2CppObject* ___fileNames, bool ___preserveDirHierarchy, String_t* ___directoryPathInArchive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::UpdateFiles(System.Collections.Generic.IEnumerable`1<System.String>,System.String)
extern "C"  void ZipFile_UpdateFiles_m3087617092 (ZipFile_t3698100756 * __this, Il2CppObject* ___fileNames, String_t* ___directoryPathInArchive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipFile::UpdateFile(System.String)
extern "C"  ZipEntry_t2226789352 * ZipFile_UpdateFile_m4018360435 (ZipFile_t3698100756 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipFile::UpdateFile(System.String,System.String)
extern "C"  ZipEntry_t2226789352 * ZipFile_UpdateFile_m226571119 (ZipFile_t3698100756 * __this, String_t* ___fileName, String_t* ___directoryPathInArchive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipFile::UpdateDirectory(System.String)
extern "C"  ZipEntry_t2226789352 * ZipFile_UpdateDirectory_m3799393414 (ZipFile_t3698100756 * __this, String_t* ___directoryName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipFile::UpdateDirectory(System.String,System.String)
extern "C"  ZipEntry_t2226789352 * ZipFile_UpdateDirectory_m1345972802 (ZipFile_t3698100756 * __this, String_t* ___directoryName, String_t* ___directoryPathInArchive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::UpdateItem(System.String)
extern "C"  void ZipFile_UpdateItem_m3564387433 (ZipFile_t3698100756 * __this, String_t* ___itemName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::UpdateItem(System.String,System.String)
extern "C"  void ZipFile_UpdateItem_m1372780773 (ZipFile_t3698100756 * __this, String_t* ___itemName, String_t* ___directoryPathInArchive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipFile::AddEntry(System.String,System.String)
extern "C"  ZipEntry_t2226789352 * ZipFile_AddEntry_m1193012803 (ZipFile_t3698100756 * __this, String_t* ___entryName, String_t* ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipFile::AddEntry(System.String,System.String,System.Text.Encoding)
extern "C"  ZipEntry_t2226789352 * ZipFile_AddEntry_m3993401518 (ZipFile_t3698100756 * __this, String_t* ___entryName, String_t* ___content, Encoding_t180559927 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipFile::AddEntry(System.String,System.IO.Stream)
extern "C"  ZipEntry_t2226789352 * ZipFile_AddEntry_m4193067958 (ZipFile_t3698100756 * __this, String_t* ___entryName, Stream_t219029575 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipFile::AddEntry(System.String,Ionic.Zip.WriteDelegate)
extern "C"  ZipEntry_t2226789352 * ZipFile_AddEntry_m1045046152 (ZipFile_t3698100756 * __this, String_t* ___entryName, WriteDelegate_t2087363675 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipFile::AddEntry(System.String,Ionic.Zip.OpenDelegate,Ionic.Zip.CloseDelegate)
extern "C"  ZipEntry_t2226789352 * ZipFile_AddEntry_m116839839 (ZipFile_t3698100756 * __this, String_t* ___entryName, OpenDelegate_t1492450310 * ___opener, CloseDelegate_t890700148 * ___closer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipFile::_InternalAddEntry(Ionic.Zip.ZipEntry)
extern "C"  ZipEntry_t2226789352 * ZipFile__InternalAddEntry_m355322299 (ZipFile_t3698100756 * __this, ZipEntry_t2226789352 * ___ze, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipFile::UpdateEntry(System.String,System.String)
extern "C"  ZipEntry_t2226789352 * ZipFile_UpdateEntry_m2559583069 (ZipFile_t3698100756 * __this, String_t* ___entryName, String_t* ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipFile::UpdateEntry(System.String,System.String,System.Text.Encoding)
extern "C"  ZipEntry_t2226789352 * ZipFile_UpdateEntry_m642406356 (ZipFile_t3698100756 * __this, String_t* ___entryName, String_t* ___content, Encoding_t180559927 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipFile::UpdateEntry(System.String,Ionic.Zip.WriteDelegate)
extern "C"  ZipEntry_t2226789352 * ZipFile_UpdateEntry_m3338289186 (ZipFile_t3698100756 * __this, String_t* ___entryName, WriteDelegate_t2087363675 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipFile::UpdateEntry(System.String,Ionic.Zip.OpenDelegate,Ionic.Zip.CloseDelegate)
extern "C"  ZipEntry_t2226789352 * ZipFile_UpdateEntry_m2094476229 (ZipFile_t3698100756 * __this, String_t* ___entryName, OpenDelegate_t1492450310 * ___opener, CloseDelegate_t890700148 * ___closer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipFile::UpdateEntry(System.String,System.IO.Stream)
extern "C"  ZipEntry_t2226789352 * ZipFile_UpdateEntry_m3692863580 (ZipFile_t3698100756 * __this, String_t* ___entryName, Stream_t219029575 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::RemoveEntryForUpdate(System.String)
extern "C"  void ZipFile_RemoveEntryForUpdate_m3939962273 (ZipFile_t3698100756 * __this, String_t* ___entryName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipFile::AddEntry(System.String,System.Byte[])
extern "C"  ZipEntry_t2226789352 * ZipFile_AddEntry_m3430174474 (ZipFile_t3698100756 * __this, String_t* ___entryName, ByteU5BU5D_t58506160* ___byteContent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipFile::UpdateEntry(System.String,System.Byte[])
extern "C"  ZipEntry_t2226789352 * ZipFile_UpdateEntry_m501777444 (ZipFile_t3698100756 * __this, String_t* ___entryName, ByteU5BU5D_t58506160* ___byteContent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipFile::AddDirectory(System.String)
extern "C"  ZipEntry_t2226789352 * ZipFile_AddDirectory_m4010882796 (ZipFile_t3698100756 * __this, String_t* ___directoryName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipFile::AddDirectory(System.String,System.String)
extern "C"  ZipEntry_t2226789352 * ZipFile_AddDirectory_m3967406632 (ZipFile_t3698100756 * __this, String_t* ___directoryName, String_t* ___directoryPathInArchive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipFile::AddDirectoryByName(System.String)
extern "C"  ZipEntry_t2226789352 * ZipFile_AddDirectoryByName_m4096816842 (ZipFile_t3698100756 * __this, String_t* ___directoryNameInArchive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipFile::AddOrUpdateDirectoryImpl(System.String,System.String,Ionic.Zip.AddOrUpdateAction)
extern "C"  ZipEntry_t2226789352 * ZipFile_AddOrUpdateDirectoryImpl_m4250718166 (ZipFile_t3698100756 * __this, String_t* ___directoryName, String_t* ___rootDirectoryPathInArchive, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::InternalAddEntry(System.String,Ionic.Zip.ZipEntry)
extern "C"  void ZipFile_InternalAddEntry_m2363768069 (ZipFile_t3698100756 * __this, String_t* ___name, ZipEntry_t2226789352 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipFile::AddOrUpdateDirectoryImpl(System.String,System.String,Ionic.Zip.AddOrUpdateAction,System.Boolean,System.Int32)
extern "C"  ZipEntry_t2226789352 * ZipFile_AddOrUpdateDirectoryImpl_m460746576 (ZipFile_t3698100756 * __this, String_t* ___directoryName, String_t* ___rootDirectoryPathInArchive, int32_t ___action, bool ___recurse, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipFile::CheckZip(System.String)
extern "C"  bool ZipFile_CheckZip_m2259320832 (Il2CppObject * __this /* static, unused */, String_t* ___zipFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipFile::CheckZip(System.String,System.Boolean,System.IO.TextWriter)
extern "C"  bool ZipFile_CheckZip_m4266601792 (Il2CppObject * __this /* static, unused */, String_t* ___zipFileName, bool ___fixIfNecessary, TextWriter_t1689927879 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::FixZipDirectory(System.String)
extern "C"  void ZipFile_FixZipDirectory_m208599868 (Il2CppObject * __this /* static, unused */, String_t* ___zipFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipFile::CheckZipPassword(System.String,System.String)
extern "C"  bool ZipFile_CheckZipPassword_m3210549345 (Il2CppObject * __this /* static, unused */, String_t* ___zipFileName, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipFile::get_Info()
extern "C"  String_t* ZipFile_get_Info_m2316097713 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipFile::get_ArchiveNameForEvent()
extern "C"  String_t* ZipFile_get_ArchiveNameForEvent_m2099421085 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipFile::OnSaveBlock(Ionic.Zip.ZipEntry,System.Int64,System.Int64)
extern "C"  bool ZipFile_OnSaveBlock_m824493952 (ZipFile_t3698100756 * __this, ZipEntry_t2226789352 * ___entry, int64_t ___bytesXferred, int64_t ___totalBytesToXfer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::OnSaveEntry(System.Int32,Ionic.Zip.ZipEntry,System.Boolean)
extern "C"  void ZipFile_OnSaveEntry_m4236883469 (ZipFile_t3698100756 * __this, int32_t ___current, ZipEntry_t2226789352 * ___entry, bool ___before, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::OnSaveEvent(Ionic.Zip.ZipProgressEventType)
extern "C"  void ZipFile_OnSaveEvent_m1080126244 (ZipFile_t3698100756 * __this, int32_t ___eventFlavor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::OnSaveStarted()
extern "C"  void ZipFile_OnSaveStarted_m1439377770 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::OnSaveCompleted()
extern "C"  void ZipFile_OnSaveCompleted_m2032872116 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::OnReadStarted()
extern "C"  void ZipFile_OnReadStarted_m1526898033 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::OnReadCompleted()
extern "C"  void ZipFile_OnReadCompleted_m240498939 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::OnReadBytes(Ionic.Zip.ZipEntry)
extern "C"  void ZipFile_OnReadBytes_m1171563953 (ZipFile_t3698100756 * __this, ZipEntry_t2226789352 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::OnReadEntry(System.Boolean,Ionic.Zip.ZipEntry)
extern "C"  void ZipFile_OnReadEntry_m801120099 (ZipFile_t3698100756 * __this, bool ___before, ZipEntry_t2226789352 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.ZipFile::get_LengthOfReadStream()
extern "C"  int64_t ZipFile_get_LengthOfReadStream_m1469188170 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::OnExtractEntry(System.Int32,System.Boolean,Ionic.Zip.ZipEntry,System.String)
extern "C"  void ZipFile_OnExtractEntry_m1779807417 (ZipFile_t3698100756 * __this, int32_t ___current, bool ___before, ZipEntry_t2226789352 * ___currentEntry, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipFile::OnExtractBlock(Ionic.Zip.ZipEntry,System.Int64,System.Int64)
extern "C"  bool ZipFile_OnExtractBlock_m3624440874 (ZipFile_t3698100756 * __this, ZipEntry_t2226789352 * ___entry, int64_t ___bytesWritten, int64_t ___totalBytesToWrite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipFile::OnSingleEntryExtract(Ionic.Zip.ZipEntry,System.String,System.Boolean)
extern "C"  bool ZipFile_OnSingleEntryExtract_m3424794476 (ZipFile_t3698100756 * __this, ZipEntry_t2226789352 * ___entry, String_t* ___path, bool ___before, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipFile::OnExtractExisting(Ionic.Zip.ZipEntry,System.String)
extern "C"  bool ZipFile_OnExtractExisting_m971525912 (ZipFile_t3698100756 * __this, ZipEntry_t2226789352 * ___entry, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::OnExtractAllCompleted(System.String)
extern "C"  void ZipFile_OnExtractAllCompleted_m3722440561 (ZipFile_t3698100756 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::OnExtractAllStarted(System.String)
extern "C"  void ZipFile_OnExtractAllStarted_m1543329083 (ZipFile_t3698100756 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::OnAddStarted()
extern "C"  void ZipFile_OnAddStarted_m129562588 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::OnAddCompleted()
extern "C"  void ZipFile_OnAddCompleted_m1725899942 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::AfterAddEntry(Ionic.Zip.ZipEntry)
extern "C"  void ZipFile_AfterAddEntry_m507366440 (ZipFile_t3698100756 * __this, ZipEntry_t2226789352 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipFile::OnZipErrorSaving(Ionic.Zip.ZipEntry,System.Exception)
extern "C"  bool ZipFile_OnZipErrorSaving_m3858007799 (ZipFile_t3698100756 * __this, ZipEntry_t2226789352 * ___entry, Exception_t1967233988 * ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::ExtractAll(System.String)
extern "C"  void ZipFile_ExtractAll_m4202334725 (ZipFile_t3698100756 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::ExtractAll(System.String,Ionic.Zip.ExtractExistingFileAction)
extern "C"  void ZipFile_ExtractAll_m3087461484 (ZipFile_t3698100756 * __this, String_t* ___path, int32_t ___extractExistingFile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::_InternalExtractAll(System.String,System.Boolean)
extern "C"  void ZipFile__InternalExtractAll_m3578945372 (ZipFile_t3698100756 * __this, String_t* ___path, bool ___overrideExtractExistingProperty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipFile Ionic.Zip.ZipFile::Read(System.String)
extern "C"  ZipFile_t3698100756 * ZipFile_Read_m2139743582 (Il2CppObject * __this /* static, unused */, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipFile Ionic.Zip.ZipFile::Read(System.String,Ionic.Zip.ReadOptions)
extern "C"  ZipFile_t3698100756 * ZipFile_Read_m2032913147 (Il2CppObject * __this /* static, unused */, String_t* ___fileName, ReadOptions_t1994441215 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipFile Ionic.Zip.ZipFile::Read(System.String,System.IO.TextWriter,System.Text.Encoding,System.EventHandler`1<Ionic.Zip.ReadProgressEventArgs>)
extern "C"  ZipFile_t3698100756 * ZipFile_Read_m3733200789 (Il2CppObject * __this /* static, unused */, String_t* ___fileName, TextWriter_t1689927879 * ___statusMessageWriter, Encoding_t180559927 * ___encoding, EventHandler_1_t3044741302 * ___readProgress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipFile Ionic.Zip.ZipFile::Read(System.IO.Stream)
extern "C"  ZipFile_t3698100756 * ZipFile_Read_m3199472315 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___zipStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipFile Ionic.Zip.ZipFile::Read(System.IO.Stream,Ionic.Zip.ReadOptions)
extern "C"  ZipFile_t3698100756 * ZipFile_Read_m1221256344 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___zipStream, ReadOptions_t1994441215 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipFile Ionic.Zip.ZipFile::Read(System.IO.Stream,System.IO.TextWriter,System.Text.Encoding,System.EventHandler`1<Ionic.Zip.ReadProgressEventArgs>)
extern "C"  ZipFile_t3698100756 * ZipFile_Read_m2838116824 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___zipStream, TextWriter_t1689927879 * ___statusMessageWriter, Encoding_t180559927 * ___encoding, EventHandler_1_t3044741302 * ___readProgress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::ReadIntoInstance(Ionic.Zip.ZipFile)
extern "C"  void ZipFile_ReadIntoInstance_m634196646 (Il2CppObject * __this /* static, unused */, ZipFile_t3698100756 * ___zf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::Zip64SeekToCentralDirectory(Ionic.Zip.ZipFile)
extern "C"  void ZipFile_Zip64SeekToCentralDirectory_m1554897375 (Il2CppObject * __this /* static, unused */, ZipFile_t3698100756 * ___zf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Ionic.Zip.ZipFile::ReadFirstFourBytes(System.IO.Stream)
extern "C"  uint32_t ZipFile_ReadFirstFourBytes_m371311972 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::ReadCentralDirectory(Ionic.Zip.ZipFile)
extern "C"  void ZipFile_ReadCentralDirectory_m2482527587 (Il2CppObject * __this /* static, unused */, ZipFile_t3698100756 * ___zf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::ReadIntoInstance_Orig(Ionic.Zip.ZipFile)
extern "C"  void ZipFile_ReadIntoInstance_Orig_m3146007764 (Il2CppObject * __this /* static, unused */, ZipFile_t3698100756 * ___zf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::ReadCentralDirectoryFooter(Ionic.Zip.ZipFile)
extern "C"  void ZipFile_ReadCentralDirectoryFooter_m745929544 (Il2CppObject * __this /* static, unused */, ZipFile_t3698100756 * ___zf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::ReadZipFileComment(Ionic.Zip.ZipFile)
extern "C"  void ZipFile_ReadZipFileComment_m366920121 (Il2CppObject * __this /* static, unused */, ZipFile_t3698100756 * ___zf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipFile::IsZipFile(System.String)
extern "C"  bool ZipFile_IsZipFile_m2413059094 (Il2CppObject * __this /* static, unused */, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipFile::IsZipFile(System.String,System.Boolean)
extern "C"  bool ZipFile_IsZipFile_m657557671 (Il2CppObject * __this /* static, unused */, String_t* ___fileName, bool ___testExtract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipFile::IsZipFile(System.IO.Stream,System.Boolean)
extern "C"  bool ZipFile_IsZipFile_m1115835418 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___stream, bool ___testExtract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::DeleteFileWithRetry(System.String)
extern "C"  void ZipFile_DeleteFileWithRetry_m2897896322 (ZipFile_t3698100756 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::Save()
extern "C"  void ZipFile_Save_m1093488122 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::NotifyEntriesSaveComplete(System.Collections.Generic.ICollection`1<Ionic.Zip.ZipEntry>)
extern "C"  void ZipFile_NotifyEntriesSaveComplete_m3622990785 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::RemoveTempFile()
extern "C"  void ZipFile_RemoveTempFile_m1175471057 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::CleanupAfterSaveOperation()
extern "C"  void ZipFile_CleanupAfterSaveOperation_m2126580983 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::Save(System.String)
extern "C"  void ZipFile_Save_m4002436936 (ZipFile_t3698100756 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::Save(System.IO.Stream)
extern "C"  void ZipFile_Save_m3719717009 (ZipFile_t3698100756 * __this, Stream_t219029575 * ___outputStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::SaveSelfExtractor(System.String,Ionic.Zip.SelfExtractorFlavor)
extern "C"  void ZipFile_SaveSelfExtractor_m3083943377 (ZipFile_t3698100756 * __this, String_t* ___exeToGenerate, int32_t ___flavor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::SaveSelfExtractor(System.String,Ionic.Zip.SelfExtractorSaveOptions)
extern "C"  void ZipFile_SaveSelfExtractor_m1321436450 (ZipFile_t3698100756 * __this, String_t* ___exeToGenerate, SelfExtractorSaveOptions_t3360896288 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::ExtractResourceToFile(System.Reflection.Assembly,System.String,System.String)
extern "C"  void ZipFile_ExtractResourceToFile_m2605182969 (Il2CppObject * __this /* static, unused */, Assembly_t1882292308 * ___a, String_t* ___resourceName, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::_SaveSfxStub(System.String,Ionic.Zip.SelfExtractorSaveOptions)
extern "C"  void ZipFile__SaveSfxStub_m2203814134 (ZipFile_t3698100756 * __this, String_t* ___exeToGenerate, SelfExtractorSaveOptions_t3360896288 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipFile::GenerateTempPathname(System.String,System.String)
extern "C"  String_t* ZipFile_GenerateTempPathname_m2769978091 (Il2CppObject * __this /* static, unused */, String_t* ___dir, String_t* ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::AddSelectedFiles(System.String)
extern "C"  void ZipFile_AddSelectedFiles_m2336559498 (ZipFile_t3698100756 * __this, String_t* ___selectionCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::AddSelectedFiles(System.String,System.Boolean)
extern "C"  void ZipFile_AddSelectedFiles_m901299379 (ZipFile_t3698100756 * __this, String_t* ___selectionCriteria, bool ___recurseDirectories, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::AddSelectedFiles(System.String,System.String)
extern "C"  void ZipFile_AddSelectedFiles_m22265926 (ZipFile_t3698100756 * __this, String_t* ___selectionCriteria, String_t* ___directoryOnDisk, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::AddSelectedFiles(System.String,System.String,System.Boolean)
extern "C"  void ZipFile_AddSelectedFiles_m3990306423 (ZipFile_t3698100756 * __this, String_t* ___selectionCriteria, String_t* ___directoryOnDisk, bool ___recurseDirectories, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::AddSelectedFiles(System.String,System.String,System.String)
extern "C"  void ZipFile_AddSelectedFiles_m3862689282 (ZipFile_t3698100756 * __this, String_t* ___selectionCriteria, String_t* ___directoryOnDisk, String_t* ___directoryPathInArchive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::AddSelectedFiles(System.String,System.String,System.String,System.Boolean)
extern "C"  void ZipFile_AddSelectedFiles_m1979537723 (ZipFile_t3698100756 * __this, String_t* ___selectionCriteria, String_t* ___directoryOnDisk, String_t* ___directoryPathInArchive, bool ___recurseDirectories, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::UpdateSelectedFiles(System.String,System.String,System.String,System.Boolean)
extern "C"  void ZipFile_UpdateSelectedFiles_m3095079195 (ZipFile_t3698100756 * __this, String_t* ___selectionCriteria, String_t* ___directoryOnDisk, String_t* ___directoryPathInArchive, bool ___recurseDirectories, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipFile::EnsureendInSlash(System.String)
extern "C"  String_t* ZipFile_EnsureendInSlash_m2512768429 (ZipFile_t3698100756 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::_AddOrUpdateSelectedFiles(System.String,System.String,System.String,System.Boolean,System.Boolean)
extern "C"  void ZipFile__AddOrUpdateSelectedFiles_m4282747847 (ZipFile_t3698100756 * __this, String_t* ___selectionCriteria, String_t* ___directoryOnDisk, String_t* ___directoryPathInArchive, bool ___recurseDirectories, bool ___wantUpdate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipFile::ReplaceLeadingDirectory(System.String,System.String,System.String)
extern "C"  String_t* ZipFile_ReplaceLeadingDirectory_m3159203415 (Il2CppObject * __this /* static, unused */, String_t* ___original, String_t* ___pattern, String_t* ___replacement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<Ionic.Zip.ZipEntry> Ionic.Zip.ZipFile::SelectEntries(System.String)
extern "C"  Il2CppObject* ZipFile_SelectEntries_m2855834861 (ZipFile_t3698100756 * __this, String_t* ___selectionCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<Ionic.Zip.ZipEntry> Ionic.Zip.ZipFile::SelectEntries(System.String,System.String)
extern "C"  Il2CppObject* ZipFile_SelectEntries_m2185239145 (ZipFile_t3698100756 * __this, String_t* ___selectionCriteria, String_t* ___directoryPathInArchive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipFile::RemoveSelectedEntries(System.String)
extern "C"  int32_t ZipFile_RemoveSelectedEntries_m527016734 (ZipFile_t3698100756 * __this, String_t* ___selectionCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipFile::RemoveSelectedEntries(System.String,System.String)
extern "C"  int32_t ZipFile_RemoveSelectedEntries_m3229613786 (ZipFile_t3698100756 * __this, String_t* ___selectionCriteria, String_t* ___directoryPathInArchive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::ExtractSelectedEntries(System.String)
extern "C"  void ZipFile_ExtractSelectedEntries_m713440305 (ZipFile_t3698100756 * __this, String_t* ___selectionCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::ExtractSelectedEntries(System.String,Ionic.Zip.ExtractExistingFileAction)
extern "C"  void ZipFile_ExtractSelectedEntries_m276428952 (ZipFile_t3698100756 * __this, String_t* ___selectionCriteria, int32_t ___extractExistingFile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::ExtractSelectedEntries(System.String,System.String)
extern "C"  void ZipFile_ExtractSelectedEntries_m4167416493 (ZipFile_t3698100756 * __this, String_t* ___selectionCriteria, String_t* ___directoryPathInArchive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::ExtractSelectedEntries(System.String,System.String,System.String)
extern "C"  void ZipFile_ExtractSelectedEntries_m412626985 (ZipFile_t3698100756 * __this, String_t* ___selectionCriteria, String_t* ___directoryInArchive, String_t* ___extractDirectory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::ExtractSelectedEntries(System.String,System.String,System.String,Ionic.Zip.ExtractExistingFileAction)
extern "C"  void ZipFile_ExtractSelectedEntries_m1650675856 (ZipFile_t3698100756 * __this, String_t* ___selectionCriteria, String_t* ___directoryPathInArchive, String_t* ___extractDirectory, int32_t ___extractExistingFile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipFile::get_FullScan()
extern "C"  bool ZipFile_get_FullScan_m1148058302 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::set_FullScan(System.Boolean)
extern "C"  void ZipFile_set_FullScan_m3210101085 (ZipFile_t3698100756 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipFile::get_SortEntriesBeforeSaving()
extern "C"  bool ZipFile_get_SortEntriesBeforeSaving_m1713585307 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::set_SortEntriesBeforeSaving(System.Boolean)
extern "C"  void ZipFile_set_SortEntriesBeforeSaving_m2571963434 (ZipFile_t3698100756 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipFile::get_AddDirectoryWillTraverseReparsePoints()
extern "C"  bool ZipFile_get_AddDirectoryWillTraverseReparsePoints_m1062631875 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::set_AddDirectoryWillTraverseReparsePoints(System.Boolean)
extern "C"  void ZipFile_set_AddDirectoryWillTraverseReparsePoints_m2424957266 (ZipFile_t3698100756 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipFile::get_BufferSize()
extern "C"  int32_t ZipFile_get_BufferSize_m3599936089 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::set_BufferSize(System.Int32)
extern "C"  void ZipFile_set_BufferSize_m1100579436 (ZipFile_t3698100756 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipFile::get_CodecBufferSize()
extern "C"  int32_t ZipFile_get_CodecBufferSize_m874505601 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::set_CodecBufferSize(System.Int32)
extern "C"  void ZipFile_set_CodecBufferSize_m1708481104 (ZipFile_t3698100756 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipFile::get_FlattenFoldersOnExtract()
extern "C"  bool ZipFile_get_FlattenFoldersOnExtract_m2128488721 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::set_FlattenFoldersOnExtract(System.Boolean)
extern "C"  void ZipFile_set_FlattenFoldersOnExtract_m2510156320 (ZipFile_t3698100756 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zlib.CompressionStrategy Ionic.Zip.ZipFile::get_Strategy()
extern "C"  int32_t ZipFile_get_Strategy_m1539278046 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::set_Strategy(Ionic.Zlib.CompressionStrategy)
extern "C"  void ZipFile_set_Strategy_m2808092139 (ZipFile_t3698100756 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipFile::get_Name()
extern "C"  String_t* ZipFile_get_Name_m2447436622 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::set_Name(System.String)
extern "C"  void ZipFile_set_Name_m981324573 (ZipFile_t3698100756 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zlib.CompressionLevel Ionic.Zip.ZipFile::get_CompressionLevel()
extern "C"  int32_t ZipFile_get_CompressionLevel_m3773843110 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::set_CompressionLevel(Ionic.Zlib.CompressionLevel)
extern "C"  void ZipFile_set_CompressionLevel_m1423791365 (ZipFile_t3698100756 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.CompressionMethod Ionic.Zip.ZipFile::get_CompressionMethod()
extern "C"  int32_t ZipFile_get_CompressionMethod_m1034372712 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::set_CompressionMethod(Ionic.Zip.CompressionMethod)
extern "C"  void ZipFile_set_CompressionMethod_m3508677013 (ZipFile_t3698100756 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipFile::get_Comment()
extern "C"  String_t* ZipFile_get_Comment_m1838796254 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::set_Comment(System.String)
extern "C"  void ZipFile_set_Comment_m467192987 (ZipFile_t3698100756 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipFile::get_EmitTimesInWindowsFormatWhenSaving()
extern "C"  bool ZipFile_get_EmitTimesInWindowsFormatWhenSaving_m3506462536 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::set_EmitTimesInWindowsFormatWhenSaving(System.Boolean)
extern "C"  void ZipFile_set_EmitTimesInWindowsFormatWhenSaving_m1281075815 (ZipFile_t3698100756 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipFile::get_EmitTimesInUnixFormatWhenSaving()
extern "C"  bool ZipFile_get_EmitTimesInUnixFormatWhenSaving_m2112562107 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::set_EmitTimesInUnixFormatWhenSaving(System.Boolean)
extern "C"  void ZipFile_set_EmitTimesInUnixFormatWhenSaving_m2148737866 (ZipFile_t3698100756 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipFile::get_Verbose()
extern "C"  bool ZipFile_get_Verbose_m1500040402 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipFile::ContainsEntry(System.String)
extern "C"  bool ZipFile_ContainsEntry_m824495670 (ZipFile_t3698100756 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipFile::get_CaseSensitiveRetrieval()
extern "C"  bool ZipFile_get_CaseSensitiveRetrieval_m1470662496 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::set_CaseSensitiveRetrieval(System.Boolean)
extern "C"  void ZipFile_set_CaseSensitiveRetrieval_m3397518463 (ZipFile_t3698100756 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipFile::get_UseUnicodeAsNecessary()
extern "C"  bool ZipFile_get_UseUnicodeAsNecessary_m3813077463 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::set_UseUnicodeAsNecessary(System.Boolean)
extern "C"  void ZipFile_set_UseUnicodeAsNecessary_m3604897382 (ZipFile_t3698100756 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.Zip64Option Ionic.Zip.ZipFile::get_UseZip64WhenSaving()
extern "C"  int32_t ZipFile_get_UseZip64WhenSaving_m1720288410 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::set_UseZip64WhenSaving(Ionic.Zip.Zip64Option)
extern "C"  void ZipFile_set_UseZip64WhenSaving_m1331442833 (ZipFile_t3698100756 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Ionic.Zip.ZipFile::get_RequiresZip64()
extern "C"  Nullable_1_t3097043249  ZipFile_get_RequiresZip64_m3762565814 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Ionic.Zip.ZipFile::get_OutputUsedZip64()
extern "C"  Nullable_1_t3097043249  ZipFile_get_OutputUsedZip64_m3233373958 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Ionic.Zip.ZipFile::get_InputUsesZip64()
extern "C"  Nullable_1_t3097043249  ZipFile_get_InputUsesZip64_m985311334 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding Ionic.Zip.ZipFile::get_ProvisionalAlternateEncoding()
extern "C"  Encoding_t180559927 * ZipFile_get_ProvisionalAlternateEncoding_m504920395 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::set_ProvisionalAlternateEncoding(System.Text.Encoding)
extern "C"  void ZipFile_set_ProvisionalAlternateEncoding_m1468841490 (ZipFile_t3698100756 * __this, Encoding_t180559927 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding Ionic.Zip.ZipFile::get_AlternateEncoding()
extern "C"  Encoding_t180559927 * ZipFile_get_AlternateEncoding_m270608977 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::set_AlternateEncoding(System.Text.Encoding)
extern "C"  void ZipFile_set_AlternateEncoding_m203487264 (ZipFile_t3698100756 * __this, Encoding_t180559927 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipOption Ionic.Zip.ZipFile::get_AlternateEncodingUsage()
extern "C"  int32_t ZipFile_get_AlternateEncodingUsage_m429675396 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::set_AlternateEncodingUsage(Ionic.Zip.ZipOption)
extern "C"  void ZipFile_set_AlternateEncodingUsage_m1140961511 (ZipFile_t3698100756 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding Ionic.Zip.ZipFile::get_DefaultEncoding()
extern "C"  Encoding_t180559927 * ZipFile_get_DefaultEncoding_m940392472 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter Ionic.Zip.ZipFile::get_StatusMessageTextWriter()
extern "C"  TextWriter_t1689927879 * ZipFile_get_StatusMessageTextWriter_m1108352325 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::set_StatusMessageTextWriter(System.IO.TextWriter)
extern "C"  void ZipFile_set_StatusMessageTextWriter_m4202351636 (ZipFile_t3698100756 * __this, TextWriter_t1689927879 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipFile::get_TempFileFolder()
extern "C"  String_t* ZipFile_get_TempFileFolder_m3145432449 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::set_TempFileFolder(System.String)
extern "C"  void ZipFile_set_TempFileFolder_m2277878922 (ZipFile_t3698100756 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::set_Password(System.String)
extern "C"  void ZipFile_set_Password_m2893571469 (ZipFile_t3698100756 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipFile::get_Password()
extern "C"  String_t* ZipFile_get_Password_m1561220702 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ExtractExistingFileAction Ionic.Zip.ZipFile::get_ExtractExistingFile()
extern "C"  int32_t ZipFile_get_ExtractExistingFile_m646260530 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::set_ExtractExistingFile(Ionic.Zip.ExtractExistingFileAction)
extern "C"  void ZipFile_set_ExtractExistingFile_m571271613 (ZipFile_t3698100756 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipErrorAction Ionic.Zip.ZipFile::get_ZipErrorAction()
extern "C"  int32_t ZipFile_get_ZipErrorAction_m3059585020 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::set_ZipErrorAction(Ionic.Zip.ZipErrorAction)
extern "C"  void ZipFile_set_ZipErrorAction_m1331033441 (ZipFile_t3698100756 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.EncryptionAlgorithm Ionic.Zip.ZipFile::get_Encryption()
extern "C"  int32_t ZipFile_get_Encryption_m2602868553 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::set_Encryption(Ionic.Zip.EncryptionAlgorithm)
extern "C"  void ZipFile_set_Encryption_m241965122 (ZipFile_t3698100756 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.SetCompressionCallback Ionic.Zip.ZipFile::get_SetCompression()
extern "C"  SetCompressionCallback_t2458683936 * ZipFile_get_SetCompression_m2981349615 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::set_SetCompression(Ionic.Zip.SetCompressionCallback)
extern "C"  void ZipFile_set_SetCompression_m1860982716 (ZipFile_t3698100756 * __this, SetCompressionCallback_t2458683936 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipFile::get_MaxOutputSegmentSize()
extern "C"  int32_t ZipFile_get_MaxOutputSegmentSize_m3098663623 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::set_MaxOutputSegmentSize(System.Int32)
extern "C"  void ZipFile_set_MaxOutputSegmentSize_m3248198490 (ZipFile_t3698100756 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipFile::get_NumberOfSegmentsForMostRecentSave()
extern "C"  int32_t ZipFile_get_NumberOfSegmentsForMostRecentSave_m3749588366 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::set_ParallelDeflateThreshold(System.Int64)
extern "C"  void ZipFile_set_ParallelDeflateThreshold_m2966497267 (ZipFile_t3698100756 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.ZipFile::get_ParallelDeflateThreshold()
extern "C"  int64_t ZipFile_get_ParallelDeflateThreshold_m537953150 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipFile::get_ParallelDeflateMaxBufferPairs()
extern "C"  int32_t ZipFile_get_ParallelDeflateMaxBufferPairs_m15416803 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::set_ParallelDeflateMaxBufferPairs(System.Int32)
extern "C"  void ZipFile_set_ParallelDeflateMaxBufferPairs_m3173423922 (ZipFile_t3698100756 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipFile::ToString()
extern "C"  String_t* ZipFile_ToString_m1809161702 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version Ionic.Zip.ZipFile::get_LibraryVersion()
extern "C"  Version_t497901645 * ZipFile_get_LibraryVersion_m1155107935 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::NotifyEntryChanged()
extern "C"  void ZipFile_NotifyEntryChanged_m2190076872 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Ionic.Zip.ZipFile::StreamForDiskNumber(System.UInt32)
extern "C"  Stream_t219029575 * ZipFile_StreamForDiskNumber_m1718849874 (ZipFile_t3698100756 * __this, uint32_t ___diskNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::Reset(System.Boolean)
extern "C"  void ZipFile_Reset_m1740095947 (ZipFile_t3698100756 * __this, bool ___whileSaving, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::Initialize(System.String)
extern "C"  void ZipFile_Initialize_m761225685 (ZipFile_t3698100756 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::_initEntriesDictionary()
extern "C"  void ZipFile__initEntriesDictionary_m1309273588 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::_InitInstance(System.String,System.IO.TextWriter)
extern "C"  void ZipFile__InitInstance_m1849730372 (ZipFile_t3698100756 * __this, String_t* ___zipFileName, TextWriter_t1689927879 * ___statusMessageWriter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Ionic.Zip.ZipEntry> Ionic.Zip.ZipFile::get_ZipEntriesAsList()
extern "C"  List_1_t3023748321 * ZipFile_get_ZipEntriesAsList_m3482272616 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipFile::get_Item(System.Int32)
extern "C"  ZipEntry_t2226789352 * ZipFile_get_Item_m1378359351 (ZipFile_t3698100756 * __this, int32_t ___ix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipFile::get_Item(System.String)
extern "C"  ZipEntry_t2226789352 * ZipFile_get_Item_m236165340 (ZipFile_t3698100756 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Ionic.Zip.ZipFile::get_EntryFileNames()
extern "C"  Il2CppObject* ZipFile_get_EntryFileNames_m1173532878 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<Ionic.Zip.ZipEntry> Ionic.Zip.ZipFile::get_Entries()
extern "C"  Il2CppObject* ZipFile_get_Entries_m1315756072 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<Ionic.Zip.ZipEntry> Ionic.Zip.ZipFile::get_EntriesSorted()
extern "C"  Il2CppObject* ZipFile_get_EntriesSorted_m105208453 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipFile::get_Count()
extern "C"  int32_t ZipFile_get_Count_m945862329 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::RemoveEntry(Ionic.Zip.ZipEntry)
extern "C"  void ZipFile_RemoveEntry_m3497265833 (ZipFile_t3698100756 * __this, ZipEntry_t2226789352 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::RemoveEntry(System.String)
extern "C"  void ZipFile_RemoveEntry_m3086764111 (ZipFile_t3698100756 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::Dispose()
extern "C"  void ZipFile_Dispose_m3192546084 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::Dispose(System.Boolean)
extern "C"  void ZipFile_Dispose_m1948436891 (ZipFile_t3698100756 * __this, bool ___disposeManagedResources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Ionic.Zip.ZipFile::get_ReadStream()
extern "C"  Stream_t219029575 * ZipFile_get_ReadStream_m3802385768 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Ionic.Zip.ZipFile::get_WriteStream()
extern "C"  Stream_t219029575 * ZipFile_get_WriteStream_m4078925423 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipFile::set_WriteStream(System.IO.Stream)
extern "C"  void ZipFile_set_WriteStream_m3365102782 (ZipFile_t3698100756 * __this, Stream_t219029575 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<Ionic.Zip.ZipEntry> Ionic.Zip.ZipFile::GetEnumerator()
extern "C"  Il2CppObject* ZipFile_GetEnumerator_m1092833301 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Ionic.Zip.ZipFile::GetNewEnum()
extern "C"  Il2CppObject * ZipFile_GetNewEnum_m3907148608 (ZipFile_t3698100756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
