#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Ionic.Zip.ZipFile/ExtractorSettings[]
struct ExtractorSettingsU5BU5D_t4278450366;
// System.IO.TextWriter
struct TextWriter_t1689927879;
// System.IO.Stream
struct Stream_t219029575;
// System.Collections.Generic.Dictionary`2<System.String,Ionic.Zip.ZipEntry>
struct Dictionary_2_t3864487256;
// System.Collections.Generic.List`1<Ionic.Zip.ZipEntry>
struct List_1_t3023748321;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Text.Encoding
struct Encoding_t180559927;
// Ionic.Zlib.ParallelDeflateOutputStream
struct ParallelDeflateOutputStream_t1234751346;
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
// Ionic.Zip.SetCompressionCallback
struct SetCompressionCallback_t2458683936;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipErrorAction570510996.h"
#include "Ionic_Zlib_Ionic_Zlib_CompressionStrategy2328611910.h"
#include "AssemblyU2DCSharp_Ionic_Zip_CompressionMethod2250333118.h"
#include "AssemblyU2DCSharp_Ionic_Zip_EncryptionAlgorithm2765650435.h"
#include "mscorlib_System_Nullable_1_gen3097043249.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipOption4149672141.h"
#include "AssemblyU2DCSharp_Ionic_Zip_Zip64Option669838539.h"
#include "Ionic_Zlib_Ionic_Zlib_CompressionLevel3940478795.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ExtractExistingFileActi788829941.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Zip.ZipFile
struct  ZipFile_t3698100756  : public Il2CppObject
{
public:
	// System.Int64 Ionic.Zip.ZipFile::_lengthOfReadStream
	int64_t ____lengthOfReadStream_0;
	// System.IO.TextWriter Ionic.Zip.ZipFile::_StatusMessageTextWriter
	TextWriter_t1689927879 * ____StatusMessageTextWriter_2;
	// System.Boolean Ionic.Zip.ZipFile::_CaseSensitiveRetrieval
	bool ____CaseSensitiveRetrieval_3;
	// System.IO.Stream Ionic.Zip.ZipFile::_readstream
	Stream_t219029575 * ____readstream_4;
	// System.IO.Stream Ionic.Zip.ZipFile::_writestream
	Stream_t219029575 * ____writestream_5;
	// System.UInt16 Ionic.Zip.ZipFile::_versionMadeBy
	uint16_t ____versionMadeBy_6;
	// System.UInt16 Ionic.Zip.ZipFile::_versionNeededToExtract
	uint16_t ____versionNeededToExtract_7;
	// System.UInt32 Ionic.Zip.ZipFile::_diskNumberWithCd
	uint32_t ____diskNumberWithCd_8;
	// System.Int32 Ionic.Zip.ZipFile::_maxOutputSegmentSize
	int32_t ____maxOutputSegmentSize_9;
	// System.UInt32 Ionic.Zip.ZipFile::_numberOfSegmentsForMostRecentSave
	uint32_t ____numberOfSegmentsForMostRecentSave_10;
	// Ionic.Zip.ZipErrorAction Ionic.Zip.ZipFile::_zipErrorAction
	int32_t ____zipErrorAction_11;
	// System.Boolean Ionic.Zip.ZipFile::_disposed
	bool ____disposed_12;
	// System.Collections.Generic.Dictionary`2<System.String,Ionic.Zip.ZipEntry> Ionic.Zip.ZipFile::_entries
	Dictionary_2_t3864487256 * ____entries_13;
	// System.Collections.Generic.List`1<Ionic.Zip.ZipEntry> Ionic.Zip.ZipFile::_zipEntriesAsList
	List_1_t3023748321 * ____zipEntriesAsList_14;
	// System.String Ionic.Zip.ZipFile::_name
	String_t* ____name_15;
	// System.String Ionic.Zip.ZipFile::_readName
	String_t* ____readName_16;
	// System.String Ionic.Zip.ZipFile::_Comment
	String_t* ____Comment_17;
	// System.String Ionic.Zip.ZipFile::_Password
	String_t* ____Password_18;
	// System.Boolean Ionic.Zip.ZipFile::_emitNtfsTimes
	bool ____emitNtfsTimes_19;
	// System.Boolean Ionic.Zip.ZipFile::_emitUnixTimes
	bool ____emitUnixTimes_20;
	// Ionic.Zlib.CompressionStrategy Ionic.Zip.ZipFile::_Strategy
	int32_t ____Strategy_21;
	// Ionic.Zip.CompressionMethod Ionic.Zip.ZipFile::_compressionMethod
	int32_t ____compressionMethod_22;
	// System.Boolean Ionic.Zip.ZipFile::_fileAlreadyExists
	bool ____fileAlreadyExists_23;
	// System.String Ionic.Zip.ZipFile::_temporaryFileName
	String_t* ____temporaryFileName_24;
	// System.Boolean Ionic.Zip.ZipFile::_contentsChanged
	bool ____contentsChanged_25;
	// System.Boolean Ionic.Zip.ZipFile::_hasBeenSaved
	bool ____hasBeenSaved_26;
	// System.String Ionic.Zip.ZipFile::_TempFileFolder
	String_t* ____TempFileFolder_27;
	// System.Boolean Ionic.Zip.ZipFile::_ReadStreamIsOurs
	bool ____ReadStreamIsOurs_28;
	// System.Object Ionic.Zip.ZipFile::LOCK
	Il2CppObject * ___LOCK_29;
	// System.Boolean Ionic.Zip.ZipFile::_saveOperationCanceled
	bool ____saveOperationCanceled_30;
	// System.Boolean Ionic.Zip.ZipFile::_extractOperationCanceled
	bool ____extractOperationCanceled_31;
	// System.Boolean Ionic.Zip.ZipFile::_addOperationCanceled
	bool ____addOperationCanceled_32;
	// Ionic.Zip.EncryptionAlgorithm Ionic.Zip.ZipFile::_Encryption
	int32_t ____Encryption_33;
	// System.Boolean Ionic.Zip.ZipFile::_JustSaved
	bool ____JustSaved_34;
	// System.Int64 Ionic.Zip.ZipFile::_locEndOfCDS
	int64_t ____locEndOfCDS_35;
	// System.UInt32 Ionic.Zip.ZipFile::_OffsetOfCentralDirectory
	uint32_t ____OffsetOfCentralDirectory_36;
	// System.Int64 Ionic.Zip.ZipFile::_OffsetOfCentralDirectory64
	int64_t ____OffsetOfCentralDirectory64_37;
	// System.Nullable`1<System.Boolean> Ionic.Zip.ZipFile::_OutputUsesZip64
	Nullable_1_t3097043249  ____OutputUsesZip64_38;
	// System.Boolean Ionic.Zip.ZipFile::_inExtractAll
	bool ____inExtractAll_39;
	// System.Text.Encoding Ionic.Zip.ZipFile::_alternateEncoding
	Encoding_t180559927 * ____alternateEncoding_40;
	// Ionic.Zip.ZipOption Ionic.Zip.ZipFile::_alternateEncodingUsage
	int32_t ____alternateEncodingUsage_41;
	// System.Int32 Ionic.Zip.ZipFile::_BufferSize
	int32_t ____BufferSize_43;
	// Ionic.Zlib.ParallelDeflateOutputStream Ionic.Zip.ZipFile::ParallelDeflater
	ParallelDeflateOutputStream_t1234751346 * ___ParallelDeflater_44;
	// System.Int64 Ionic.Zip.ZipFile::_ParallelDeflateThreshold
	int64_t ____ParallelDeflateThreshold_45;
	// System.Int32 Ionic.Zip.ZipFile::_maxBufferPairs
	int32_t ____maxBufferPairs_46;
	// Ionic.Zip.Zip64Option Ionic.Zip.ZipFile::_zip64
	int32_t ____zip64_47;
	// System.Boolean Ionic.Zip.ZipFile::_SavingSfx
	bool ____SavingSfx_48;
	// System.EventHandler`1<Ionic.Zip.SaveProgressEventArgs> Ionic.Zip.ZipFile::SaveProgress
	EventHandler_1_t3340276655 * ___SaveProgress_50;
	// System.EventHandler`1<Ionic.Zip.ReadProgressEventArgs> Ionic.Zip.ZipFile::ReadProgress
	EventHandler_1_t3044741302 * ___ReadProgress_51;
	// System.EventHandler`1<Ionic.Zip.ExtractProgressEventArgs> Ionic.Zip.ZipFile::ExtractProgress
	EventHandler_1_t919156075 * ___ExtractProgress_52;
	// System.EventHandler`1<Ionic.Zip.AddProgressEventArgs> Ionic.Zip.ZipFile::AddProgress
	EventHandler_1_t2193190219 * ___AddProgress_53;
	// System.EventHandler`1<Ionic.Zip.ZipErrorEventArgs> Ionic.Zip.ZipFile::ZipError
	EventHandler_1_t1109993394 * ___ZipError_54;
	// System.Boolean Ionic.Zip.ZipFile::<FullScan>k__BackingField
	bool ___U3CFullScanU3Ek__BackingField_55;
	// System.Boolean Ionic.Zip.ZipFile::<SortEntriesBeforeSaving>k__BackingField
	bool ___U3CSortEntriesBeforeSavingU3Ek__BackingField_56;
	// System.Boolean Ionic.Zip.ZipFile::<AddDirectoryWillTraverseReparsePoints>k__BackingField
	bool ___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_57;
	// System.Int32 Ionic.Zip.ZipFile::<CodecBufferSize>k__BackingField
	int32_t ___U3CCodecBufferSizeU3Ek__BackingField_58;
	// System.Boolean Ionic.Zip.ZipFile::<FlattenFoldersOnExtract>k__BackingField
	bool ___U3CFlattenFoldersOnExtractU3Ek__BackingField_59;
	// Ionic.Zlib.CompressionLevel Ionic.Zip.ZipFile::<CompressionLevel>k__BackingField
	int32_t ___U3CCompressionLevelU3Ek__BackingField_60;
	// Ionic.Zip.ExtractExistingFileAction Ionic.Zip.ZipFile::<ExtractExistingFile>k__BackingField
	int32_t ___U3CExtractExistingFileU3Ek__BackingField_61;
	// Ionic.Zip.SetCompressionCallback Ionic.Zip.ZipFile::<SetCompression>k__BackingField
	SetCompressionCallback_t2458683936 * ___U3CSetCompressionU3Ek__BackingField_62;

public:
	inline static int32_t get_offset_of__lengthOfReadStream_0() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____lengthOfReadStream_0)); }
	inline int64_t get__lengthOfReadStream_0() const { return ____lengthOfReadStream_0; }
	inline int64_t* get_address_of__lengthOfReadStream_0() { return &____lengthOfReadStream_0; }
	inline void set__lengthOfReadStream_0(int64_t value)
	{
		____lengthOfReadStream_0 = value;
	}

	inline static int32_t get_offset_of__StatusMessageTextWriter_2() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____StatusMessageTextWriter_2)); }
	inline TextWriter_t1689927879 * get__StatusMessageTextWriter_2() const { return ____StatusMessageTextWriter_2; }
	inline TextWriter_t1689927879 ** get_address_of__StatusMessageTextWriter_2() { return &____StatusMessageTextWriter_2; }
	inline void set__StatusMessageTextWriter_2(TextWriter_t1689927879 * value)
	{
		____StatusMessageTextWriter_2 = value;
		Il2CppCodeGenWriteBarrier(&____StatusMessageTextWriter_2, value);
	}

	inline static int32_t get_offset_of__CaseSensitiveRetrieval_3() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____CaseSensitiveRetrieval_3)); }
	inline bool get__CaseSensitiveRetrieval_3() const { return ____CaseSensitiveRetrieval_3; }
	inline bool* get_address_of__CaseSensitiveRetrieval_3() { return &____CaseSensitiveRetrieval_3; }
	inline void set__CaseSensitiveRetrieval_3(bool value)
	{
		____CaseSensitiveRetrieval_3 = value;
	}

	inline static int32_t get_offset_of__readstream_4() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____readstream_4)); }
	inline Stream_t219029575 * get__readstream_4() const { return ____readstream_4; }
	inline Stream_t219029575 ** get_address_of__readstream_4() { return &____readstream_4; }
	inline void set__readstream_4(Stream_t219029575 * value)
	{
		____readstream_4 = value;
		Il2CppCodeGenWriteBarrier(&____readstream_4, value);
	}

	inline static int32_t get_offset_of__writestream_5() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____writestream_5)); }
	inline Stream_t219029575 * get__writestream_5() const { return ____writestream_5; }
	inline Stream_t219029575 ** get_address_of__writestream_5() { return &____writestream_5; }
	inline void set__writestream_5(Stream_t219029575 * value)
	{
		____writestream_5 = value;
		Il2CppCodeGenWriteBarrier(&____writestream_5, value);
	}

	inline static int32_t get_offset_of__versionMadeBy_6() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____versionMadeBy_6)); }
	inline uint16_t get__versionMadeBy_6() const { return ____versionMadeBy_6; }
	inline uint16_t* get_address_of__versionMadeBy_6() { return &____versionMadeBy_6; }
	inline void set__versionMadeBy_6(uint16_t value)
	{
		____versionMadeBy_6 = value;
	}

	inline static int32_t get_offset_of__versionNeededToExtract_7() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____versionNeededToExtract_7)); }
	inline uint16_t get__versionNeededToExtract_7() const { return ____versionNeededToExtract_7; }
	inline uint16_t* get_address_of__versionNeededToExtract_7() { return &____versionNeededToExtract_7; }
	inline void set__versionNeededToExtract_7(uint16_t value)
	{
		____versionNeededToExtract_7 = value;
	}

	inline static int32_t get_offset_of__diskNumberWithCd_8() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____diskNumberWithCd_8)); }
	inline uint32_t get__diskNumberWithCd_8() const { return ____diskNumberWithCd_8; }
	inline uint32_t* get_address_of__diskNumberWithCd_8() { return &____diskNumberWithCd_8; }
	inline void set__diskNumberWithCd_8(uint32_t value)
	{
		____diskNumberWithCd_8 = value;
	}

	inline static int32_t get_offset_of__maxOutputSegmentSize_9() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____maxOutputSegmentSize_9)); }
	inline int32_t get__maxOutputSegmentSize_9() const { return ____maxOutputSegmentSize_9; }
	inline int32_t* get_address_of__maxOutputSegmentSize_9() { return &____maxOutputSegmentSize_9; }
	inline void set__maxOutputSegmentSize_9(int32_t value)
	{
		____maxOutputSegmentSize_9 = value;
	}

	inline static int32_t get_offset_of__numberOfSegmentsForMostRecentSave_10() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____numberOfSegmentsForMostRecentSave_10)); }
	inline uint32_t get__numberOfSegmentsForMostRecentSave_10() const { return ____numberOfSegmentsForMostRecentSave_10; }
	inline uint32_t* get_address_of__numberOfSegmentsForMostRecentSave_10() { return &____numberOfSegmentsForMostRecentSave_10; }
	inline void set__numberOfSegmentsForMostRecentSave_10(uint32_t value)
	{
		____numberOfSegmentsForMostRecentSave_10 = value;
	}

	inline static int32_t get_offset_of__zipErrorAction_11() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____zipErrorAction_11)); }
	inline int32_t get__zipErrorAction_11() const { return ____zipErrorAction_11; }
	inline int32_t* get_address_of__zipErrorAction_11() { return &____zipErrorAction_11; }
	inline void set__zipErrorAction_11(int32_t value)
	{
		____zipErrorAction_11 = value;
	}

	inline static int32_t get_offset_of__disposed_12() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____disposed_12)); }
	inline bool get__disposed_12() const { return ____disposed_12; }
	inline bool* get_address_of__disposed_12() { return &____disposed_12; }
	inline void set__disposed_12(bool value)
	{
		____disposed_12 = value;
	}

	inline static int32_t get_offset_of__entries_13() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____entries_13)); }
	inline Dictionary_2_t3864487256 * get__entries_13() const { return ____entries_13; }
	inline Dictionary_2_t3864487256 ** get_address_of__entries_13() { return &____entries_13; }
	inline void set__entries_13(Dictionary_2_t3864487256 * value)
	{
		____entries_13 = value;
		Il2CppCodeGenWriteBarrier(&____entries_13, value);
	}

	inline static int32_t get_offset_of__zipEntriesAsList_14() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____zipEntriesAsList_14)); }
	inline List_1_t3023748321 * get__zipEntriesAsList_14() const { return ____zipEntriesAsList_14; }
	inline List_1_t3023748321 ** get_address_of__zipEntriesAsList_14() { return &____zipEntriesAsList_14; }
	inline void set__zipEntriesAsList_14(List_1_t3023748321 * value)
	{
		____zipEntriesAsList_14 = value;
		Il2CppCodeGenWriteBarrier(&____zipEntriesAsList_14, value);
	}

	inline static int32_t get_offset_of__name_15() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____name_15)); }
	inline String_t* get__name_15() const { return ____name_15; }
	inline String_t** get_address_of__name_15() { return &____name_15; }
	inline void set__name_15(String_t* value)
	{
		____name_15 = value;
		Il2CppCodeGenWriteBarrier(&____name_15, value);
	}

	inline static int32_t get_offset_of__readName_16() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____readName_16)); }
	inline String_t* get__readName_16() const { return ____readName_16; }
	inline String_t** get_address_of__readName_16() { return &____readName_16; }
	inline void set__readName_16(String_t* value)
	{
		____readName_16 = value;
		Il2CppCodeGenWriteBarrier(&____readName_16, value);
	}

	inline static int32_t get_offset_of__Comment_17() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____Comment_17)); }
	inline String_t* get__Comment_17() const { return ____Comment_17; }
	inline String_t** get_address_of__Comment_17() { return &____Comment_17; }
	inline void set__Comment_17(String_t* value)
	{
		____Comment_17 = value;
		Il2CppCodeGenWriteBarrier(&____Comment_17, value);
	}

	inline static int32_t get_offset_of__Password_18() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____Password_18)); }
	inline String_t* get__Password_18() const { return ____Password_18; }
	inline String_t** get_address_of__Password_18() { return &____Password_18; }
	inline void set__Password_18(String_t* value)
	{
		____Password_18 = value;
		Il2CppCodeGenWriteBarrier(&____Password_18, value);
	}

	inline static int32_t get_offset_of__emitNtfsTimes_19() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____emitNtfsTimes_19)); }
	inline bool get__emitNtfsTimes_19() const { return ____emitNtfsTimes_19; }
	inline bool* get_address_of__emitNtfsTimes_19() { return &____emitNtfsTimes_19; }
	inline void set__emitNtfsTimes_19(bool value)
	{
		____emitNtfsTimes_19 = value;
	}

	inline static int32_t get_offset_of__emitUnixTimes_20() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____emitUnixTimes_20)); }
	inline bool get__emitUnixTimes_20() const { return ____emitUnixTimes_20; }
	inline bool* get_address_of__emitUnixTimes_20() { return &____emitUnixTimes_20; }
	inline void set__emitUnixTimes_20(bool value)
	{
		____emitUnixTimes_20 = value;
	}

	inline static int32_t get_offset_of__Strategy_21() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____Strategy_21)); }
	inline int32_t get__Strategy_21() const { return ____Strategy_21; }
	inline int32_t* get_address_of__Strategy_21() { return &____Strategy_21; }
	inline void set__Strategy_21(int32_t value)
	{
		____Strategy_21 = value;
	}

	inline static int32_t get_offset_of__compressionMethod_22() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____compressionMethod_22)); }
	inline int32_t get__compressionMethod_22() const { return ____compressionMethod_22; }
	inline int32_t* get_address_of__compressionMethod_22() { return &____compressionMethod_22; }
	inline void set__compressionMethod_22(int32_t value)
	{
		____compressionMethod_22 = value;
	}

	inline static int32_t get_offset_of__fileAlreadyExists_23() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____fileAlreadyExists_23)); }
	inline bool get__fileAlreadyExists_23() const { return ____fileAlreadyExists_23; }
	inline bool* get_address_of__fileAlreadyExists_23() { return &____fileAlreadyExists_23; }
	inline void set__fileAlreadyExists_23(bool value)
	{
		____fileAlreadyExists_23 = value;
	}

	inline static int32_t get_offset_of__temporaryFileName_24() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____temporaryFileName_24)); }
	inline String_t* get__temporaryFileName_24() const { return ____temporaryFileName_24; }
	inline String_t** get_address_of__temporaryFileName_24() { return &____temporaryFileName_24; }
	inline void set__temporaryFileName_24(String_t* value)
	{
		____temporaryFileName_24 = value;
		Il2CppCodeGenWriteBarrier(&____temporaryFileName_24, value);
	}

	inline static int32_t get_offset_of__contentsChanged_25() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____contentsChanged_25)); }
	inline bool get__contentsChanged_25() const { return ____contentsChanged_25; }
	inline bool* get_address_of__contentsChanged_25() { return &____contentsChanged_25; }
	inline void set__contentsChanged_25(bool value)
	{
		____contentsChanged_25 = value;
	}

	inline static int32_t get_offset_of__hasBeenSaved_26() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____hasBeenSaved_26)); }
	inline bool get__hasBeenSaved_26() const { return ____hasBeenSaved_26; }
	inline bool* get_address_of__hasBeenSaved_26() { return &____hasBeenSaved_26; }
	inline void set__hasBeenSaved_26(bool value)
	{
		____hasBeenSaved_26 = value;
	}

	inline static int32_t get_offset_of__TempFileFolder_27() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____TempFileFolder_27)); }
	inline String_t* get__TempFileFolder_27() const { return ____TempFileFolder_27; }
	inline String_t** get_address_of__TempFileFolder_27() { return &____TempFileFolder_27; }
	inline void set__TempFileFolder_27(String_t* value)
	{
		____TempFileFolder_27 = value;
		Il2CppCodeGenWriteBarrier(&____TempFileFolder_27, value);
	}

	inline static int32_t get_offset_of__ReadStreamIsOurs_28() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____ReadStreamIsOurs_28)); }
	inline bool get__ReadStreamIsOurs_28() const { return ____ReadStreamIsOurs_28; }
	inline bool* get_address_of__ReadStreamIsOurs_28() { return &____ReadStreamIsOurs_28; }
	inline void set__ReadStreamIsOurs_28(bool value)
	{
		____ReadStreamIsOurs_28 = value;
	}

	inline static int32_t get_offset_of_LOCK_29() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ___LOCK_29)); }
	inline Il2CppObject * get_LOCK_29() const { return ___LOCK_29; }
	inline Il2CppObject ** get_address_of_LOCK_29() { return &___LOCK_29; }
	inline void set_LOCK_29(Il2CppObject * value)
	{
		___LOCK_29 = value;
		Il2CppCodeGenWriteBarrier(&___LOCK_29, value);
	}

	inline static int32_t get_offset_of__saveOperationCanceled_30() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____saveOperationCanceled_30)); }
	inline bool get__saveOperationCanceled_30() const { return ____saveOperationCanceled_30; }
	inline bool* get_address_of__saveOperationCanceled_30() { return &____saveOperationCanceled_30; }
	inline void set__saveOperationCanceled_30(bool value)
	{
		____saveOperationCanceled_30 = value;
	}

	inline static int32_t get_offset_of__extractOperationCanceled_31() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____extractOperationCanceled_31)); }
	inline bool get__extractOperationCanceled_31() const { return ____extractOperationCanceled_31; }
	inline bool* get_address_of__extractOperationCanceled_31() { return &____extractOperationCanceled_31; }
	inline void set__extractOperationCanceled_31(bool value)
	{
		____extractOperationCanceled_31 = value;
	}

	inline static int32_t get_offset_of__addOperationCanceled_32() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____addOperationCanceled_32)); }
	inline bool get__addOperationCanceled_32() const { return ____addOperationCanceled_32; }
	inline bool* get_address_of__addOperationCanceled_32() { return &____addOperationCanceled_32; }
	inline void set__addOperationCanceled_32(bool value)
	{
		____addOperationCanceled_32 = value;
	}

	inline static int32_t get_offset_of__Encryption_33() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____Encryption_33)); }
	inline int32_t get__Encryption_33() const { return ____Encryption_33; }
	inline int32_t* get_address_of__Encryption_33() { return &____Encryption_33; }
	inline void set__Encryption_33(int32_t value)
	{
		____Encryption_33 = value;
	}

	inline static int32_t get_offset_of__JustSaved_34() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____JustSaved_34)); }
	inline bool get__JustSaved_34() const { return ____JustSaved_34; }
	inline bool* get_address_of__JustSaved_34() { return &____JustSaved_34; }
	inline void set__JustSaved_34(bool value)
	{
		____JustSaved_34 = value;
	}

	inline static int32_t get_offset_of__locEndOfCDS_35() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____locEndOfCDS_35)); }
	inline int64_t get__locEndOfCDS_35() const { return ____locEndOfCDS_35; }
	inline int64_t* get_address_of__locEndOfCDS_35() { return &____locEndOfCDS_35; }
	inline void set__locEndOfCDS_35(int64_t value)
	{
		____locEndOfCDS_35 = value;
	}

	inline static int32_t get_offset_of__OffsetOfCentralDirectory_36() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____OffsetOfCentralDirectory_36)); }
	inline uint32_t get__OffsetOfCentralDirectory_36() const { return ____OffsetOfCentralDirectory_36; }
	inline uint32_t* get_address_of__OffsetOfCentralDirectory_36() { return &____OffsetOfCentralDirectory_36; }
	inline void set__OffsetOfCentralDirectory_36(uint32_t value)
	{
		____OffsetOfCentralDirectory_36 = value;
	}

	inline static int32_t get_offset_of__OffsetOfCentralDirectory64_37() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____OffsetOfCentralDirectory64_37)); }
	inline int64_t get__OffsetOfCentralDirectory64_37() const { return ____OffsetOfCentralDirectory64_37; }
	inline int64_t* get_address_of__OffsetOfCentralDirectory64_37() { return &____OffsetOfCentralDirectory64_37; }
	inline void set__OffsetOfCentralDirectory64_37(int64_t value)
	{
		____OffsetOfCentralDirectory64_37 = value;
	}

	inline static int32_t get_offset_of__OutputUsesZip64_38() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____OutputUsesZip64_38)); }
	inline Nullable_1_t3097043249  get__OutputUsesZip64_38() const { return ____OutputUsesZip64_38; }
	inline Nullable_1_t3097043249 * get_address_of__OutputUsesZip64_38() { return &____OutputUsesZip64_38; }
	inline void set__OutputUsesZip64_38(Nullable_1_t3097043249  value)
	{
		____OutputUsesZip64_38 = value;
	}

	inline static int32_t get_offset_of__inExtractAll_39() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____inExtractAll_39)); }
	inline bool get__inExtractAll_39() const { return ____inExtractAll_39; }
	inline bool* get_address_of__inExtractAll_39() { return &____inExtractAll_39; }
	inline void set__inExtractAll_39(bool value)
	{
		____inExtractAll_39 = value;
	}

	inline static int32_t get_offset_of__alternateEncoding_40() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____alternateEncoding_40)); }
	inline Encoding_t180559927 * get__alternateEncoding_40() const { return ____alternateEncoding_40; }
	inline Encoding_t180559927 ** get_address_of__alternateEncoding_40() { return &____alternateEncoding_40; }
	inline void set__alternateEncoding_40(Encoding_t180559927 * value)
	{
		____alternateEncoding_40 = value;
		Il2CppCodeGenWriteBarrier(&____alternateEncoding_40, value);
	}

	inline static int32_t get_offset_of__alternateEncodingUsage_41() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____alternateEncodingUsage_41)); }
	inline int32_t get__alternateEncodingUsage_41() const { return ____alternateEncodingUsage_41; }
	inline int32_t* get_address_of__alternateEncodingUsage_41() { return &____alternateEncodingUsage_41; }
	inline void set__alternateEncodingUsage_41(int32_t value)
	{
		____alternateEncodingUsage_41 = value;
	}

	inline static int32_t get_offset_of__BufferSize_43() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____BufferSize_43)); }
	inline int32_t get__BufferSize_43() const { return ____BufferSize_43; }
	inline int32_t* get_address_of__BufferSize_43() { return &____BufferSize_43; }
	inline void set__BufferSize_43(int32_t value)
	{
		____BufferSize_43 = value;
	}

	inline static int32_t get_offset_of_ParallelDeflater_44() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ___ParallelDeflater_44)); }
	inline ParallelDeflateOutputStream_t1234751346 * get_ParallelDeflater_44() const { return ___ParallelDeflater_44; }
	inline ParallelDeflateOutputStream_t1234751346 ** get_address_of_ParallelDeflater_44() { return &___ParallelDeflater_44; }
	inline void set_ParallelDeflater_44(ParallelDeflateOutputStream_t1234751346 * value)
	{
		___ParallelDeflater_44 = value;
		Il2CppCodeGenWriteBarrier(&___ParallelDeflater_44, value);
	}

	inline static int32_t get_offset_of__ParallelDeflateThreshold_45() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____ParallelDeflateThreshold_45)); }
	inline int64_t get__ParallelDeflateThreshold_45() const { return ____ParallelDeflateThreshold_45; }
	inline int64_t* get_address_of__ParallelDeflateThreshold_45() { return &____ParallelDeflateThreshold_45; }
	inline void set__ParallelDeflateThreshold_45(int64_t value)
	{
		____ParallelDeflateThreshold_45 = value;
	}

	inline static int32_t get_offset_of__maxBufferPairs_46() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____maxBufferPairs_46)); }
	inline int32_t get__maxBufferPairs_46() const { return ____maxBufferPairs_46; }
	inline int32_t* get_address_of__maxBufferPairs_46() { return &____maxBufferPairs_46; }
	inline void set__maxBufferPairs_46(int32_t value)
	{
		____maxBufferPairs_46 = value;
	}

	inline static int32_t get_offset_of__zip64_47() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____zip64_47)); }
	inline int32_t get__zip64_47() const { return ____zip64_47; }
	inline int32_t* get_address_of__zip64_47() { return &____zip64_47; }
	inline void set__zip64_47(int32_t value)
	{
		____zip64_47 = value;
	}

	inline static int32_t get_offset_of__SavingSfx_48() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ____SavingSfx_48)); }
	inline bool get__SavingSfx_48() const { return ____SavingSfx_48; }
	inline bool* get_address_of__SavingSfx_48() { return &____SavingSfx_48; }
	inline void set__SavingSfx_48(bool value)
	{
		____SavingSfx_48 = value;
	}

	inline static int32_t get_offset_of_SaveProgress_50() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ___SaveProgress_50)); }
	inline EventHandler_1_t3340276655 * get_SaveProgress_50() const { return ___SaveProgress_50; }
	inline EventHandler_1_t3340276655 ** get_address_of_SaveProgress_50() { return &___SaveProgress_50; }
	inline void set_SaveProgress_50(EventHandler_1_t3340276655 * value)
	{
		___SaveProgress_50 = value;
		Il2CppCodeGenWriteBarrier(&___SaveProgress_50, value);
	}

	inline static int32_t get_offset_of_ReadProgress_51() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ___ReadProgress_51)); }
	inline EventHandler_1_t3044741302 * get_ReadProgress_51() const { return ___ReadProgress_51; }
	inline EventHandler_1_t3044741302 ** get_address_of_ReadProgress_51() { return &___ReadProgress_51; }
	inline void set_ReadProgress_51(EventHandler_1_t3044741302 * value)
	{
		___ReadProgress_51 = value;
		Il2CppCodeGenWriteBarrier(&___ReadProgress_51, value);
	}

	inline static int32_t get_offset_of_ExtractProgress_52() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ___ExtractProgress_52)); }
	inline EventHandler_1_t919156075 * get_ExtractProgress_52() const { return ___ExtractProgress_52; }
	inline EventHandler_1_t919156075 ** get_address_of_ExtractProgress_52() { return &___ExtractProgress_52; }
	inline void set_ExtractProgress_52(EventHandler_1_t919156075 * value)
	{
		___ExtractProgress_52 = value;
		Il2CppCodeGenWriteBarrier(&___ExtractProgress_52, value);
	}

	inline static int32_t get_offset_of_AddProgress_53() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ___AddProgress_53)); }
	inline EventHandler_1_t2193190219 * get_AddProgress_53() const { return ___AddProgress_53; }
	inline EventHandler_1_t2193190219 ** get_address_of_AddProgress_53() { return &___AddProgress_53; }
	inline void set_AddProgress_53(EventHandler_1_t2193190219 * value)
	{
		___AddProgress_53 = value;
		Il2CppCodeGenWriteBarrier(&___AddProgress_53, value);
	}

	inline static int32_t get_offset_of_ZipError_54() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ___ZipError_54)); }
	inline EventHandler_1_t1109993394 * get_ZipError_54() const { return ___ZipError_54; }
	inline EventHandler_1_t1109993394 ** get_address_of_ZipError_54() { return &___ZipError_54; }
	inline void set_ZipError_54(EventHandler_1_t1109993394 * value)
	{
		___ZipError_54 = value;
		Il2CppCodeGenWriteBarrier(&___ZipError_54, value);
	}

	inline static int32_t get_offset_of_U3CFullScanU3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ___U3CFullScanU3Ek__BackingField_55)); }
	inline bool get_U3CFullScanU3Ek__BackingField_55() const { return ___U3CFullScanU3Ek__BackingField_55; }
	inline bool* get_address_of_U3CFullScanU3Ek__BackingField_55() { return &___U3CFullScanU3Ek__BackingField_55; }
	inline void set_U3CFullScanU3Ek__BackingField_55(bool value)
	{
		___U3CFullScanU3Ek__BackingField_55 = value;
	}

	inline static int32_t get_offset_of_U3CSortEntriesBeforeSavingU3Ek__BackingField_56() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ___U3CSortEntriesBeforeSavingU3Ek__BackingField_56)); }
	inline bool get_U3CSortEntriesBeforeSavingU3Ek__BackingField_56() const { return ___U3CSortEntriesBeforeSavingU3Ek__BackingField_56; }
	inline bool* get_address_of_U3CSortEntriesBeforeSavingU3Ek__BackingField_56() { return &___U3CSortEntriesBeforeSavingU3Ek__BackingField_56; }
	inline void set_U3CSortEntriesBeforeSavingU3Ek__BackingField_56(bool value)
	{
		___U3CSortEntriesBeforeSavingU3Ek__BackingField_56 = value;
	}

	inline static int32_t get_offset_of_U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_57() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_57)); }
	inline bool get_U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_57() const { return ___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_57; }
	inline bool* get_address_of_U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_57() { return &___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_57; }
	inline void set_U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_57(bool value)
	{
		___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_57 = value;
	}

	inline static int32_t get_offset_of_U3CCodecBufferSizeU3Ek__BackingField_58() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ___U3CCodecBufferSizeU3Ek__BackingField_58)); }
	inline int32_t get_U3CCodecBufferSizeU3Ek__BackingField_58() const { return ___U3CCodecBufferSizeU3Ek__BackingField_58; }
	inline int32_t* get_address_of_U3CCodecBufferSizeU3Ek__BackingField_58() { return &___U3CCodecBufferSizeU3Ek__BackingField_58; }
	inline void set_U3CCodecBufferSizeU3Ek__BackingField_58(int32_t value)
	{
		___U3CCodecBufferSizeU3Ek__BackingField_58 = value;
	}

	inline static int32_t get_offset_of_U3CFlattenFoldersOnExtractU3Ek__BackingField_59() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ___U3CFlattenFoldersOnExtractU3Ek__BackingField_59)); }
	inline bool get_U3CFlattenFoldersOnExtractU3Ek__BackingField_59() const { return ___U3CFlattenFoldersOnExtractU3Ek__BackingField_59; }
	inline bool* get_address_of_U3CFlattenFoldersOnExtractU3Ek__BackingField_59() { return &___U3CFlattenFoldersOnExtractU3Ek__BackingField_59; }
	inline void set_U3CFlattenFoldersOnExtractU3Ek__BackingField_59(bool value)
	{
		___U3CFlattenFoldersOnExtractU3Ek__BackingField_59 = value;
	}

	inline static int32_t get_offset_of_U3CCompressionLevelU3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ___U3CCompressionLevelU3Ek__BackingField_60)); }
	inline int32_t get_U3CCompressionLevelU3Ek__BackingField_60() const { return ___U3CCompressionLevelU3Ek__BackingField_60; }
	inline int32_t* get_address_of_U3CCompressionLevelU3Ek__BackingField_60() { return &___U3CCompressionLevelU3Ek__BackingField_60; }
	inline void set_U3CCompressionLevelU3Ek__BackingField_60(int32_t value)
	{
		___U3CCompressionLevelU3Ek__BackingField_60 = value;
	}

	inline static int32_t get_offset_of_U3CExtractExistingFileU3Ek__BackingField_61() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ___U3CExtractExistingFileU3Ek__BackingField_61)); }
	inline int32_t get_U3CExtractExistingFileU3Ek__BackingField_61() const { return ___U3CExtractExistingFileU3Ek__BackingField_61; }
	inline int32_t* get_address_of_U3CExtractExistingFileU3Ek__BackingField_61() { return &___U3CExtractExistingFileU3Ek__BackingField_61; }
	inline void set_U3CExtractExistingFileU3Ek__BackingField_61(int32_t value)
	{
		___U3CExtractExistingFileU3Ek__BackingField_61 = value;
	}

	inline static int32_t get_offset_of_U3CSetCompressionU3Ek__BackingField_62() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756, ___U3CSetCompressionU3Ek__BackingField_62)); }
	inline SetCompressionCallback_t2458683936 * get_U3CSetCompressionU3Ek__BackingField_62() const { return ___U3CSetCompressionU3Ek__BackingField_62; }
	inline SetCompressionCallback_t2458683936 ** get_address_of_U3CSetCompressionU3Ek__BackingField_62() { return &___U3CSetCompressionU3Ek__BackingField_62; }
	inline void set_U3CSetCompressionU3Ek__BackingField_62(SetCompressionCallback_t2458683936 * value)
	{
		___U3CSetCompressionU3Ek__BackingField_62 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSetCompressionU3Ek__BackingField_62, value);
	}
};

struct ZipFile_t3698100756_StaticFields
{
public:
	// Ionic.Zip.ZipFile/ExtractorSettings[] Ionic.Zip.ZipFile::SettingsList
	ExtractorSettingsU5BU5D_t4278450366* ___SettingsList_1;
	// System.Text.Encoding Ionic.Zip.ZipFile::_defaultEncoding
	Encoding_t180559927 * ____defaultEncoding_42;
	// System.Int32 Ionic.Zip.ZipFile::BufferSizeDefault
	int32_t ___BufferSizeDefault_49;

public:
	inline static int32_t get_offset_of_SettingsList_1() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756_StaticFields, ___SettingsList_1)); }
	inline ExtractorSettingsU5BU5D_t4278450366* get_SettingsList_1() const { return ___SettingsList_1; }
	inline ExtractorSettingsU5BU5D_t4278450366** get_address_of_SettingsList_1() { return &___SettingsList_1; }
	inline void set_SettingsList_1(ExtractorSettingsU5BU5D_t4278450366* value)
	{
		___SettingsList_1 = value;
		Il2CppCodeGenWriteBarrier(&___SettingsList_1, value);
	}

	inline static int32_t get_offset_of__defaultEncoding_42() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756_StaticFields, ____defaultEncoding_42)); }
	inline Encoding_t180559927 * get__defaultEncoding_42() const { return ____defaultEncoding_42; }
	inline Encoding_t180559927 ** get_address_of__defaultEncoding_42() { return &____defaultEncoding_42; }
	inline void set__defaultEncoding_42(Encoding_t180559927 * value)
	{
		____defaultEncoding_42 = value;
		Il2CppCodeGenWriteBarrier(&____defaultEncoding_42, value);
	}

	inline static int32_t get_offset_of_BufferSizeDefault_49() { return static_cast<int32_t>(offsetof(ZipFile_t3698100756_StaticFields, ___BufferSizeDefault_49)); }
	inline int32_t get_BufferSizeDefault_49() const { return ___BufferSizeDefault_49; }
	inline int32_t* get_address_of_BufferSizeDefault_49() { return &___BufferSizeDefault_49; }
	inline void set_BufferSizeDefault_49(int32_t value)
	{
		___BufferSizeDefault_49 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
