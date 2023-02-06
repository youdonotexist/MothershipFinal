#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Stream
struct Stream_t219029575;
// System.Object
struct Il2CppObject;
// Ionic.Zip.ZipCrypto
struct ZipCrypto_t3808125209;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Text.Encoding
struct Encoding_t180559927;
// Ionic.Zip.ZipContainer
struct ZipContainer_t2405009527;
// Ionic.Zip.WriteDelegate
struct WriteDelegate_t2087363675;
// Ionic.Zip.OpenDelegate
struct OpenDelegate_t1492450310;
// Ionic.Zip.CloseDelegate
struct CloseDelegate_t890700148;
// Ionic.Zip.SetCompressionCallback
struct SetCompressionCallback_t2458683936;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_DateTime339033936.h"
#include "Ionic_Zlib_Ionic_Zlib_CompressionLevel3940478795.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipEntrySource1119123299.h"
#include "AssemblyU2DCSharp_Ionic_Zip_EncryptionAlgorithm2765650435.h"
#include "mscorlib_System_Nullable_1_gen1438485494.h"
#include "mscorlib_System_Nullable_1_gen3097043249.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipEntryTimestamp3546947612.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ExtractExistingFileActi788829941.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipErrorAction570510996.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipOption4149672141.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Zip.ZipEntry
struct  ZipEntry_t2226789352  : public Il2CppObject
{
public:
	// System.Int16 Ionic.Zip.ZipEntry::_VersionMadeBy
	int16_t ____VersionMadeBy_0;
	// System.Int16 Ionic.Zip.ZipEntry::_InternalFileAttrs
	int16_t ____InternalFileAttrs_1;
	// System.Int32 Ionic.Zip.ZipEntry::_ExternalFileAttrs
	int32_t ____ExternalFileAttrs_2;
	// System.Int16 Ionic.Zip.ZipEntry::_filenameLength
	int16_t ____filenameLength_3;
	// System.Int16 Ionic.Zip.ZipEntry::_extraFieldLength
	int16_t ____extraFieldLength_4;
	// System.Int16 Ionic.Zip.ZipEntry::_commentLength
	int16_t ____commentLength_5;
	// System.IO.Stream Ionic.Zip.ZipEntry::_inputDecryptorStream
	Stream_t219029575 * ____inputDecryptorStream_6;
	// System.Int32 Ionic.Zip.ZipEntry::_readExtraDepth
	int32_t ____readExtraDepth_7;
	// System.Object Ionic.Zip.ZipEntry::_outputLock
	Il2CppObject * ____outputLock_8;
	// Ionic.Zip.ZipCrypto Ionic.Zip.ZipEntry::_zipCrypto_forExtract
	ZipCrypto_t3808125209 * ____zipCrypto_forExtract_9;
	// Ionic.Zip.ZipCrypto Ionic.Zip.ZipEntry::_zipCrypto_forWrite
	ZipCrypto_t3808125209 * ____zipCrypto_forWrite_10;
	// System.DateTime Ionic.Zip.ZipEntry::_LastModified
	DateTime_t339033936  ____LastModified_11;
	// System.DateTime Ionic.Zip.ZipEntry::_Mtime
	DateTime_t339033936  ____Mtime_12;
	// System.DateTime Ionic.Zip.ZipEntry::_Atime
	DateTime_t339033936  ____Atime_13;
	// System.DateTime Ionic.Zip.ZipEntry::_Ctime
	DateTime_t339033936  ____Ctime_14;
	// System.Boolean Ionic.Zip.ZipEntry::_ntfsTimesAreSet
	bool ____ntfsTimesAreSet_15;
	// System.Boolean Ionic.Zip.ZipEntry::_emitNtfsTimes
	bool ____emitNtfsTimes_16;
	// System.Boolean Ionic.Zip.ZipEntry::_emitUnixTimes
	bool ____emitUnixTimes_17;
	// System.Boolean Ionic.Zip.ZipEntry::_TrimVolumeFromFullyQualifiedPaths
	bool ____TrimVolumeFromFullyQualifiedPaths_18;
	// System.String Ionic.Zip.ZipEntry::_LocalFileName
	String_t* ____LocalFileName_19;
	// System.String Ionic.Zip.ZipEntry::_FileNameInArchive
	String_t* ____FileNameInArchive_20;
	// System.Int16 Ionic.Zip.ZipEntry::_VersionNeeded
	int16_t ____VersionNeeded_21;
	// System.Int16 Ionic.Zip.ZipEntry::_BitField
	int16_t ____BitField_22;
	// System.Int16 Ionic.Zip.ZipEntry::_CompressionMethod
	int16_t ____CompressionMethod_23;
	// System.Int16 Ionic.Zip.ZipEntry::_CompressionMethod_FromZipFile
	int16_t ____CompressionMethod_FromZipFile_24;
	// Ionic.Zlib.CompressionLevel Ionic.Zip.ZipEntry::_CompressionLevel
	int32_t ____CompressionLevel_25;
	// System.String Ionic.Zip.ZipEntry::_Comment
	String_t* ____Comment_26;
	// System.Boolean Ionic.Zip.ZipEntry::_IsDirectory
	bool ____IsDirectory_27;
	// System.Byte[] Ionic.Zip.ZipEntry::_CommentBytes
	ByteU5BU5D_t58506160* ____CommentBytes_28;
	// System.Int64 Ionic.Zip.ZipEntry::_CompressedSize
	int64_t ____CompressedSize_29;
	// System.Int64 Ionic.Zip.ZipEntry::_CompressedFileDataSize
	int64_t ____CompressedFileDataSize_30;
	// System.Int64 Ionic.Zip.ZipEntry::_UncompressedSize
	int64_t ____UncompressedSize_31;
	// System.Int32 Ionic.Zip.ZipEntry::_TimeBlob
	int32_t ____TimeBlob_32;
	// System.Boolean Ionic.Zip.ZipEntry::_crcCalculated
	bool ____crcCalculated_33;
	// System.Int32 Ionic.Zip.ZipEntry::_Crc32
	int32_t ____Crc32_34;
	// System.Byte[] Ionic.Zip.ZipEntry::_Extra
	ByteU5BU5D_t58506160* ____Extra_35;
	// System.Boolean Ionic.Zip.ZipEntry::_metadataChanged
	bool ____metadataChanged_36;
	// System.Boolean Ionic.Zip.ZipEntry::_restreamRequiredOnSave
	bool ____restreamRequiredOnSave_37;
	// System.Boolean Ionic.Zip.ZipEntry::_sourceIsEncrypted
	bool ____sourceIsEncrypted_38;
	// System.Boolean Ionic.Zip.ZipEntry::_skippedDuringSave
	bool ____skippedDuringSave_39;
	// System.UInt32 Ionic.Zip.ZipEntry::_diskNumber
	uint32_t ____diskNumber_40;
	// System.Text.Encoding Ionic.Zip.ZipEntry::_actualEncoding
	Encoding_t180559927 * ____actualEncoding_42;
	// Ionic.Zip.ZipContainer Ionic.Zip.ZipEntry::_container
	ZipContainer_t2405009527 * ____container_43;
	// System.Int64 Ionic.Zip.ZipEntry::__FileDataPosition
	int64_t _____FileDataPosition_44;
	// System.Byte[] Ionic.Zip.ZipEntry::_EntryHeader
	ByteU5BU5D_t58506160* ____EntryHeader_45;
	// System.Int64 Ionic.Zip.ZipEntry::_RelativeOffsetOfLocalHeader
	int64_t ____RelativeOffsetOfLocalHeader_46;
	// System.Int64 Ionic.Zip.ZipEntry::_future_ROLH
	int64_t ____future_ROLH_47;
	// System.Int64 Ionic.Zip.ZipEntry::_TotalEntrySize
	int64_t ____TotalEntrySize_48;
	// System.Int32 Ionic.Zip.ZipEntry::_LengthOfHeader
	int32_t ____LengthOfHeader_49;
	// System.Int32 Ionic.Zip.ZipEntry::_LengthOfTrailer
	int32_t ____LengthOfTrailer_50;
	// System.Boolean Ionic.Zip.ZipEntry::_InputUsesZip64
	bool ____InputUsesZip64_51;
	// System.UInt32 Ionic.Zip.ZipEntry::_UnsupportedAlgorithmId
	uint32_t ____UnsupportedAlgorithmId_52;
	// System.String Ionic.Zip.ZipEntry::_Password
	String_t* ____Password_53;
	// Ionic.Zip.ZipEntrySource Ionic.Zip.ZipEntry::_Source
	int32_t ____Source_54;
	// Ionic.Zip.EncryptionAlgorithm Ionic.Zip.ZipEntry::_Encryption
	int32_t ____Encryption_55;
	// Ionic.Zip.EncryptionAlgorithm Ionic.Zip.ZipEntry::_Encryption_FromZipFile
	int32_t ____Encryption_FromZipFile_56;
	// System.Byte[] Ionic.Zip.ZipEntry::_WeakEncryptionHeader
	ByteU5BU5D_t58506160* ____WeakEncryptionHeader_57;
	// System.IO.Stream Ionic.Zip.ZipEntry::_archiveStream
	Stream_t219029575 * ____archiveStream_58;
	// System.IO.Stream Ionic.Zip.ZipEntry::_sourceStream
	Stream_t219029575 * ____sourceStream_59;
	// System.Nullable`1<System.Int64> Ionic.Zip.ZipEntry::_sourceStreamOriginalPosition
	Nullable_1_t1438485494  ____sourceStreamOriginalPosition_60;
	// System.Boolean Ionic.Zip.ZipEntry::_sourceWasJitProvided
	bool ____sourceWasJitProvided_61;
	// System.Boolean Ionic.Zip.ZipEntry::_ioOperationCanceled
	bool ____ioOperationCanceled_62;
	// System.Boolean Ionic.Zip.ZipEntry::_presumeZip64
	bool ____presumeZip64_63;
	// System.Nullable`1<System.Boolean> Ionic.Zip.ZipEntry::_entryRequiresZip64
	Nullable_1_t3097043249  ____entryRequiresZip64_64;
	// System.Nullable`1<System.Boolean> Ionic.Zip.ZipEntry::_OutputUsesZip64
	Nullable_1_t3097043249  ____OutputUsesZip64_65;
	// System.Boolean Ionic.Zip.ZipEntry::_IsText
	bool ____IsText_66;
	// Ionic.Zip.ZipEntryTimestamp Ionic.Zip.ZipEntry::_timestamp
	int32_t ____timestamp_67;
	// Ionic.Zip.WriteDelegate Ionic.Zip.ZipEntry::_WriteDelegate
	WriteDelegate_t2087363675 * ____WriteDelegate_71;
	// Ionic.Zip.OpenDelegate Ionic.Zip.ZipEntry::_OpenDelegate
	OpenDelegate_t1492450310 * ____OpenDelegate_72;
	// Ionic.Zip.CloseDelegate Ionic.Zip.ZipEntry::_CloseDelegate
	CloseDelegate_t890700148 * ____CloseDelegate_73;
	// Ionic.Zip.ExtractExistingFileAction Ionic.Zip.ZipEntry::<ExtractExistingFile>k__BackingField
	int32_t ___U3CExtractExistingFileU3Ek__BackingField_74;
	// Ionic.Zip.ZipErrorAction Ionic.Zip.ZipEntry::<ZipErrorAction>k__BackingField
	int32_t ___U3CZipErrorActionU3Ek__BackingField_75;
	// Ionic.Zip.SetCompressionCallback Ionic.Zip.ZipEntry::<SetCompression>k__BackingField
	SetCompressionCallback_t2458683936 * ___U3CSetCompressionU3Ek__BackingField_76;
	// System.Text.Encoding Ionic.Zip.ZipEntry::<ProvisionalAlternateEncoding>k__BackingField
	Encoding_t180559927 * ___U3CProvisionalAlternateEncodingU3Ek__BackingField_77;
	// System.Text.Encoding Ionic.Zip.ZipEntry::<AlternateEncoding>k__BackingField
	Encoding_t180559927 * ___U3CAlternateEncodingU3Ek__BackingField_78;
	// Ionic.Zip.ZipOption Ionic.Zip.ZipEntry::<AlternateEncodingUsage>k__BackingField
	int32_t ___U3CAlternateEncodingUsageU3Ek__BackingField_79;

public:
	inline static int32_t get_offset_of__VersionMadeBy_0() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____VersionMadeBy_0)); }
	inline int16_t get__VersionMadeBy_0() const { return ____VersionMadeBy_0; }
	inline int16_t* get_address_of__VersionMadeBy_0() { return &____VersionMadeBy_0; }
	inline void set__VersionMadeBy_0(int16_t value)
	{
		____VersionMadeBy_0 = value;
	}

	inline static int32_t get_offset_of__InternalFileAttrs_1() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____InternalFileAttrs_1)); }
	inline int16_t get__InternalFileAttrs_1() const { return ____InternalFileAttrs_1; }
	inline int16_t* get_address_of__InternalFileAttrs_1() { return &____InternalFileAttrs_1; }
	inline void set__InternalFileAttrs_1(int16_t value)
	{
		____InternalFileAttrs_1 = value;
	}

	inline static int32_t get_offset_of__ExternalFileAttrs_2() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____ExternalFileAttrs_2)); }
	inline int32_t get__ExternalFileAttrs_2() const { return ____ExternalFileAttrs_2; }
	inline int32_t* get_address_of__ExternalFileAttrs_2() { return &____ExternalFileAttrs_2; }
	inline void set__ExternalFileAttrs_2(int32_t value)
	{
		____ExternalFileAttrs_2 = value;
	}

	inline static int32_t get_offset_of__filenameLength_3() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____filenameLength_3)); }
	inline int16_t get__filenameLength_3() const { return ____filenameLength_3; }
	inline int16_t* get_address_of__filenameLength_3() { return &____filenameLength_3; }
	inline void set__filenameLength_3(int16_t value)
	{
		____filenameLength_3 = value;
	}

	inline static int32_t get_offset_of__extraFieldLength_4() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____extraFieldLength_4)); }
	inline int16_t get__extraFieldLength_4() const { return ____extraFieldLength_4; }
	inline int16_t* get_address_of__extraFieldLength_4() { return &____extraFieldLength_4; }
	inline void set__extraFieldLength_4(int16_t value)
	{
		____extraFieldLength_4 = value;
	}

	inline static int32_t get_offset_of__commentLength_5() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____commentLength_5)); }
	inline int16_t get__commentLength_5() const { return ____commentLength_5; }
	inline int16_t* get_address_of__commentLength_5() { return &____commentLength_5; }
	inline void set__commentLength_5(int16_t value)
	{
		____commentLength_5 = value;
	}

	inline static int32_t get_offset_of__inputDecryptorStream_6() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____inputDecryptorStream_6)); }
	inline Stream_t219029575 * get__inputDecryptorStream_6() const { return ____inputDecryptorStream_6; }
	inline Stream_t219029575 ** get_address_of__inputDecryptorStream_6() { return &____inputDecryptorStream_6; }
	inline void set__inputDecryptorStream_6(Stream_t219029575 * value)
	{
		____inputDecryptorStream_6 = value;
		Il2CppCodeGenWriteBarrier(&____inputDecryptorStream_6, value);
	}

	inline static int32_t get_offset_of__readExtraDepth_7() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____readExtraDepth_7)); }
	inline int32_t get__readExtraDepth_7() const { return ____readExtraDepth_7; }
	inline int32_t* get_address_of__readExtraDepth_7() { return &____readExtraDepth_7; }
	inline void set__readExtraDepth_7(int32_t value)
	{
		____readExtraDepth_7 = value;
	}

	inline static int32_t get_offset_of__outputLock_8() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____outputLock_8)); }
	inline Il2CppObject * get__outputLock_8() const { return ____outputLock_8; }
	inline Il2CppObject ** get_address_of__outputLock_8() { return &____outputLock_8; }
	inline void set__outputLock_8(Il2CppObject * value)
	{
		____outputLock_8 = value;
		Il2CppCodeGenWriteBarrier(&____outputLock_8, value);
	}

	inline static int32_t get_offset_of__zipCrypto_forExtract_9() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____zipCrypto_forExtract_9)); }
	inline ZipCrypto_t3808125209 * get__zipCrypto_forExtract_9() const { return ____zipCrypto_forExtract_9; }
	inline ZipCrypto_t3808125209 ** get_address_of__zipCrypto_forExtract_9() { return &____zipCrypto_forExtract_9; }
	inline void set__zipCrypto_forExtract_9(ZipCrypto_t3808125209 * value)
	{
		____zipCrypto_forExtract_9 = value;
		Il2CppCodeGenWriteBarrier(&____zipCrypto_forExtract_9, value);
	}

	inline static int32_t get_offset_of__zipCrypto_forWrite_10() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____zipCrypto_forWrite_10)); }
	inline ZipCrypto_t3808125209 * get__zipCrypto_forWrite_10() const { return ____zipCrypto_forWrite_10; }
	inline ZipCrypto_t3808125209 ** get_address_of__zipCrypto_forWrite_10() { return &____zipCrypto_forWrite_10; }
	inline void set__zipCrypto_forWrite_10(ZipCrypto_t3808125209 * value)
	{
		____zipCrypto_forWrite_10 = value;
		Il2CppCodeGenWriteBarrier(&____zipCrypto_forWrite_10, value);
	}

	inline static int32_t get_offset_of__LastModified_11() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____LastModified_11)); }
	inline DateTime_t339033936  get__LastModified_11() const { return ____LastModified_11; }
	inline DateTime_t339033936 * get_address_of__LastModified_11() { return &____LastModified_11; }
	inline void set__LastModified_11(DateTime_t339033936  value)
	{
		____LastModified_11 = value;
	}

	inline static int32_t get_offset_of__Mtime_12() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____Mtime_12)); }
	inline DateTime_t339033936  get__Mtime_12() const { return ____Mtime_12; }
	inline DateTime_t339033936 * get_address_of__Mtime_12() { return &____Mtime_12; }
	inline void set__Mtime_12(DateTime_t339033936  value)
	{
		____Mtime_12 = value;
	}

	inline static int32_t get_offset_of__Atime_13() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____Atime_13)); }
	inline DateTime_t339033936  get__Atime_13() const { return ____Atime_13; }
	inline DateTime_t339033936 * get_address_of__Atime_13() { return &____Atime_13; }
	inline void set__Atime_13(DateTime_t339033936  value)
	{
		____Atime_13 = value;
	}

	inline static int32_t get_offset_of__Ctime_14() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____Ctime_14)); }
	inline DateTime_t339033936  get__Ctime_14() const { return ____Ctime_14; }
	inline DateTime_t339033936 * get_address_of__Ctime_14() { return &____Ctime_14; }
	inline void set__Ctime_14(DateTime_t339033936  value)
	{
		____Ctime_14 = value;
	}

	inline static int32_t get_offset_of__ntfsTimesAreSet_15() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____ntfsTimesAreSet_15)); }
	inline bool get__ntfsTimesAreSet_15() const { return ____ntfsTimesAreSet_15; }
	inline bool* get_address_of__ntfsTimesAreSet_15() { return &____ntfsTimesAreSet_15; }
	inline void set__ntfsTimesAreSet_15(bool value)
	{
		____ntfsTimesAreSet_15 = value;
	}

	inline static int32_t get_offset_of__emitNtfsTimes_16() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____emitNtfsTimes_16)); }
	inline bool get__emitNtfsTimes_16() const { return ____emitNtfsTimes_16; }
	inline bool* get_address_of__emitNtfsTimes_16() { return &____emitNtfsTimes_16; }
	inline void set__emitNtfsTimes_16(bool value)
	{
		____emitNtfsTimes_16 = value;
	}

	inline static int32_t get_offset_of__emitUnixTimes_17() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____emitUnixTimes_17)); }
	inline bool get__emitUnixTimes_17() const { return ____emitUnixTimes_17; }
	inline bool* get_address_of__emitUnixTimes_17() { return &____emitUnixTimes_17; }
	inline void set__emitUnixTimes_17(bool value)
	{
		____emitUnixTimes_17 = value;
	}

	inline static int32_t get_offset_of__TrimVolumeFromFullyQualifiedPaths_18() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____TrimVolumeFromFullyQualifiedPaths_18)); }
	inline bool get__TrimVolumeFromFullyQualifiedPaths_18() const { return ____TrimVolumeFromFullyQualifiedPaths_18; }
	inline bool* get_address_of__TrimVolumeFromFullyQualifiedPaths_18() { return &____TrimVolumeFromFullyQualifiedPaths_18; }
	inline void set__TrimVolumeFromFullyQualifiedPaths_18(bool value)
	{
		____TrimVolumeFromFullyQualifiedPaths_18 = value;
	}

	inline static int32_t get_offset_of__LocalFileName_19() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____LocalFileName_19)); }
	inline String_t* get__LocalFileName_19() const { return ____LocalFileName_19; }
	inline String_t** get_address_of__LocalFileName_19() { return &____LocalFileName_19; }
	inline void set__LocalFileName_19(String_t* value)
	{
		____LocalFileName_19 = value;
		Il2CppCodeGenWriteBarrier(&____LocalFileName_19, value);
	}

	inline static int32_t get_offset_of__FileNameInArchive_20() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____FileNameInArchive_20)); }
	inline String_t* get__FileNameInArchive_20() const { return ____FileNameInArchive_20; }
	inline String_t** get_address_of__FileNameInArchive_20() { return &____FileNameInArchive_20; }
	inline void set__FileNameInArchive_20(String_t* value)
	{
		____FileNameInArchive_20 = value;
		Il2CppCodeGenWriteBarrier(&____FileNameInArchive_20, value);
	}

	inline static int32_t get_offset_of__VersionNeeded_21() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____VersionNeeded_21)); }
	inline int16_t get__VersionNeeded_21() const { return ____VersionNeeded_21; }
	inline int16_t* get_address_of__VersionNeeded_21() { return &____VersionNeeded_21; }
	inline void set__VersionNeeded_21(int16_t value)
	{
		____VersionNeeded_21 = value;
	}

	inline static int32_t get_offset_of__BitField_22() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____BitField_22)); }
	inline int16_t get__BitField_22() const { return ____BitField_22; }
	inline int16_t* get_address_of__BitField_22() { return &____BitField_22; }
	inline void set__BitField_22(int16_t value)
	{
		____BitField_22 = value;
	}

	inline static int32_t get_offset_of__CompressionMethod_23() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____CompressionMethod_23)); }
	inline int16_t get__CompressionMethod_23() const { return ____CompressionMethod_23; }
	inline int16_t* get_address_of__CompressionMethod_23() { return &____CompressionMethod_23; }
	inline void set__CompressionMethod_23(int16_t value)
	{
		____CompressionMethod_23 = value;
	}

	inline static int32_t get_offset_of__CompressionMethod_FromZipFile_24() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____CompressionMethod_FromZipFile_24)); }
	inline int16_t get__CompressionMethod_FromZipFile_24() const { return ____CompressionMethod_FromZipFile_24; }
	inline int16_t* get_address_of__CompressionMethod_FromZipFile_24() { return &____CompressionMethod_FromZipFile_24; }
	inline void set__CompressionMethod_FromZipFile_24(int16_t value)
	{
		____CompressionMethod_FromZipFile_24 = value;
	}

	inline static int32_t get_offset_of__CompressionLevel_25() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____CompressionLevel_25)); }
	inline int32_t get__CompressionLevel_25() const { return ____CompressionLevel_25; }
	inline int32_t* get_address_of__CompressionLevel_25() { return &____CompressionLevel_25; }
	inline void set__CompressionLevel_25(int32_t value)
	{
		____CompressionLevel_25 = value;
	}

	inline static int32_t get_offset_of__Comment_26() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____Comment_26)); }
	inline String_t* get__Comment_26() const { return ____Comment_26; }
	inline String_t** get_address_of__Comment_26() { return &____Comment_26; }
	inline void set__Comment_26(String_t* value)
	{
		____Comment_26 = value;
		Il2CppCodeGenWriteBarrier(&____Comment_26, value);
	}

	inline static int32_t get_offset_of__IsDirectory_27() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____IsDirectory_27)); }
	inline bool get__IsDirectory_27() const { return ____IsDirectory_27; }
	inline bool* get_address_of__IsDirectory_27() { return &____IsDirectory_27; }
	inline void set__IsDirectory_27(bool value)
	{
		____IsDirectory_27 = value;
	}

	inline static int32_t get_offset_of__CommentBytes_28() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____CommentBytes_28)); }
	inline ByteU5BU5D_t58506160* get__CommentBytes_28() const { return ____CommentBytes_28; }
	inline ByteU5BU5D_t58506160** get_address_of__CommentBytes_28() { return &____CommentBytes_28; }
	inline void set__CommentBytes_28(ByteU5BU5D_t58506160* value)
	{
		____CommentBytes_28 = value;
		Il2CppCodeGenWriteBarrier(&____CommentBytes_28, value);
	}

	inline static int32_t get_offset_of__CompressedSize_29() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____CompressedSize_29)); }
	inline int64_t get__CompressedSize_29() const { return ____CompressedSize_29; }
	inline int64_t* get_address_of__CompressedSize_29() { return &____CompressedSize_29; }
	inline void set__CompressedSize_29(int64_t value)
	{
		____CompressedSize_29 = value;
	}

	inline static int32_t get_offset_of__CompressedFileDataSize_30() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____CompressedFileDataSize_30)); }
	inline int64_t get__CompressedFileDataSize_30() const { return ____CompressedFileDataSize_30; }
	inline int64_t* get_address_of__CompressedFileDataSize_30() { return &____CompressedFileDataSize_30; }
	inline void set__CompressedFileDataSize_30(int64_t value)
	{
		____CompressedFileDataSize_30 = value;
	}

	inline static int32_t get_offset_of__UncompressedSize_31() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____UncompressedSize_31)); }
	inline int64_t get__UncompressedSize_31() const { return ____UncompressedSize_31; }
	inline int64_t* get_address_of__UncompressedSize_31() { return &____UncompressedSize_31; }
	inline void set__UncompressedSize_31(int64_t value)
	{
		____UncompressedSize_31 = value;
	}

	inline static int32_t get_offset_of__TimeBlob_32() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____TimeBlob_32)); }
	inline int32_t get__TimeBlob_32() const { return ____TimeBlob_32; }
	inline int32_t* get_address_of__TimeBlob_32() { return &____TimeBlob_32; }
	inline void set__TimeBlob_32(int32_t value)
	{
		____TimeBlob_32 = value;
	}

	inline static int32_t get_offset_of__crcCalculated_33() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____crcCalculated_33)); }
	inline bool get__crcCalculated_33() const { return ____crcCalculated_33; }
	inline bool* get_address_of__crcCalculated_33() { return &____crcCalculated_33; }
	inline void set__crcCalculated_33(bool value)
	{
		____crcCalculated_33 = value;
	}

	inline static int32_t get_offset_of__Crc32_34() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____Crc32_34)); }
	inline int32_t get__Crc32_34() const { return ____Crc32_34; }
	inline int32_t* get_address_of__Crc32_34() { return &____Crc32_34; }
	inline void set__Crc32_34(int32_t value)
	{
		____Crc32_34 = value;
	}

	inline static int32_t get_offset_of__Extra_35() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____Extra_35)); }
	inline ByteU5BU5D_t58506160* get__Extra_35() const { return ____Extra_35; }
	inline ByteU5BU5D_t58506160** get_address_of__Extra_35() { return &____Extra_35; }
	inline void set__Extra_35(ByteU5BU5D_t58506160* value)
	{
		____Extra_35 = value;
		Il2CppCodeGenWriteBarrier(&____Extra_35, value);
	}

	inline static int32_t get_offset_of__metadataChanged_36() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____metadataChanged_36)); }
	inline bool get__metadataChanged_36() const { return ____metadataChanged_36; }
	inline bool* get_address_of__metadataChanged_36() { return &____metadataChanged_36; }
	inline void set__metadataChanged_36(bool value)
	{
		____metadataChanged_36 = value;
	}

	inline static int32_t get_offset_of__restreamRequiredOnSave_37() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____restreamRequiredOnSave_37)); }
	inline bool get__restreamRequiredOnSave_37() const { return ____restreamRequiredOnSave_37; }
	inline bool* get_address_of__restreamRequiredOnSave_37() { return &____restreamRequiredOnSave_37; }
	inline void set__restreamRequiredOnSave_37(bool value)
	{
		____restreamRequiredOnSave_37 = value;
	}

	inline static int32_t get_offset_of__sourceIsEncrypted_38() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____sourceIsEncrypted_38)); }
	inline bool get__sourceIsEncrypted_38() const { return ____sourceIsEncrypted_38; }
	inline bool* get_address_of__sourceIsEncrypted_38() { return &____sourceIsEncrypted_38; }
	inline void set__sourceIsEncrypted_38(bool value)
	{
		____sourceIsEncrypted_38 = value;
	}

	inline static int32_t get_offset_of__skippedDuringSave_39() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____skippedDuringSave_39)); }
	inline bool get__skippedDuringSave_39() const { return ____skippedDuringSave_39; }
	inline bool* get_address_of__skippedDuringSave_39() { return &____skippedDuringSave_39; }
	inline void set__skippedDuringSave_39(bool value)
	{
		____skippedDuringSave_39 = value;
	}

	inline static int32_t get_offset_of__diskNumber_40() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____diskNumber_40)); }
	inline uint32_t get__diskNumber_40() const { return ____diskNumber_40; }
	inline uint32_t* get_address_of__diskNumber_40() { return &____diskNumber_40; }
	inline void set__diskNumber_40(uint32_t value)
	{
		____diskNumber_40 = value;
	}

	inline static int32_t get_offset_of__actualEncoding_42() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____actualEncoding_42)); }
	inline Encoding_t180559927 * get__actualEncoding_42() const { return ____actualEncoding_42; }
	inline Encoding_t180559927 ** get_address_of__actualEncoding_42() { return &____actualEncoding_42; }
	inline void set__actualEncoding_42(Encoding_t180559927 * value)
	{
		____actualEncoding_42 = value;
		Il2CppCodeGenWriteBarrier(&____actualEncoding_42, value);
	}

	inline static int32_t get_offset_of__container_43() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____container_43)); }
	inline ZipContainer_t2405009527 * get__container_43() const { return ____container_43; }
	inline ZipContainer_t2405009527 ** get_address_of__container_43() { return &____container_43; }
	inline void set__container_43(ZipContainer_t2405009527 * value)
	{
		____container_43 = value;
		Il2CppCodeGenWriteBarrier(&____container_43, value);
	}

	inline static int32_t get_offset_of___FileDataPosition_44() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, _____FileDataPosition_44)); }
	inline int64_t get___FileDataPosition_44() const { return _____FileDataPosition_44; }
	inline int64_t* get_address_of___FileDataPosition_44() { return &_____FileDataPosition_44; }
	inline void set___FileDataPosition_44(int64_t value)
	{
		_____FileDataPosition_44 = value;
	}

	inline static int32_t get_offset_of__EntryHeader_45() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____EntryHeader_45)); }
	inline ByteU5BU5D_t58506160* get__EntryHeader_45() const { return ____EntryHeader_45; }
	inline ByteU5BU5D_t58506160** get_address_of__EntryHeader_45() { return &____EntryHeader_45; }
	inline void set__EntryHeader_45(ByteU5BU5D_t58506160* value)
	{
		____EntryHeader_45 = value;
		Il2CppCodeGenWriteBarrier(&____EntryHeader_45, value);
	}

	inline static int32_t get_offset_of__RelativeOffsetOfLocalHeader_46() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____RelativeOffsetOfLocalHeader_46)); }
	inline int64_t get__RelativeOffsetOfLocalHeader_46() const { return ____RelativeOffsetOfLocalHeader_46; }
	inline int64_t* get_address_of__RelativeOffsetOfLocalHeader_46() { return &____RelativeOffsetOfLocalHeader_46; }
	inline void set__RelativeOffsetOfLocalHeader_46(int64_t value)
	{
		____RelativeOffsetOfLocalHeader_46 = value;
	}

	inline static int32_t get_offset_of__future_ROLH_47() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____future_ROLH_47)); }
	inline int64_t get__future_ROLH_47() const { return ____future_ROLH_47; }
	inline int64_t* get_address_of__future_ROLH_47() { return &____future_ROLH_47; }
	inline void set__future_ROLH_47(int64_t value)
	{
		____future_ROLH_47 = value;
	}

	inline static int32_t get_offset_of__TotalEntrySize_48() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____TotalEntrySize_48)); }
	inline int64_t get__TotalEntrySize_48() const { return ____TotalEntrySize_48; }
	inline int64_t* get_address_of__TotalEntrySize_48() { return &____TotalEntrySize_48; }
	inline void set__TotalEntrySize_48(int64_t value)
	{
		____TotalEntrySize_48 = value;
	}

	inline static int32_t get_offset_of__LengthOfHeader_49() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____LengthOfHeader_49)); }
	inline int32_t get__LengthOfHeader_49() const { return ____LengthOfHeader_49; }
	inline int32_t* get_address_of__LengthOfHeader_49() { return &____LengthOfHeader_49; }
	inline void set__LengthOfHeader_49(int32_t value)
	{
		____LengthOfHeader_49 = value;
	}

	inline static int32_t get_offset_of__LengthOfTrailer_50() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____LengthOfTrailer_50)); }
	inline int32_t get__LengthOfTrailer_50() const { return ____LengthOfTrailer_50; }
	inline int32_t* get_address_of__LengthOfTrailer_50() { return &____LengthOfTrailer_50; }
	inline void set__LengthOfTrailer_50(int32_t value)
	{
		____LengthOfTrailer_50 = value;
	}

	inline static int32_t get_offset_of__InputUsesZip64_51() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____InputUsesZip64_51)); }
	inline bool get__InputUsesZip64_51() const { return ____InputUsesZip64_51; }
	inline bool* get_address_of__InputUsesZip64_51() { return &____InputUsesZip64_51; }
	inline void set__InputUsesZip64_51(bool value)
	{
		____InputUsesZip64_51 = value;
	}

	inline static int32_t get_offset_of__UnsupportedAlgorithmId_52() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____UnsupportedAlgorithmId_52)); }
	inline uint32_t get__UnsupportedAlgorithmId_52() const { return ____UnsupportedAlgorithmId_52; }
	inline uint32_t* get_address_of__UnsupportedAlgorithmId_52() { return &____UnsupportedAlgorithmId_52; }
	inline void set__UnsupportedAlgorithmId_52(uint32_t value)
	{
		____UnsupportedAlgorithmId_52 = value;
	}

	inline static int32_t get_offset_of__Password_53() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____Password_53)); }
	inline String_t* get__Password_53() const { return ____Password_53; }
	inline String_t** get_address_of__Password_53() { return &____Password_53; }
	inline void set__Password_53(String_t* value)
	{
		____Password_53 = value;
		Il2CppCodeGenWriteBarrier(&____Password_53, value);
	}

	inline static int32_t get_offset_of__Source_54() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____Source_54)); }
	inline int32_t get__Source_54() const { return ____Source_54; }
	inline int32_t* get_address_of__Source_54() { return &____Source_54; }
	inline void set__Source_54(int32_t value)
	{
		____Source_54 = value;
	}

	inline static int32_t get_offset_of__Encryption_55() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____Encryption_55)); }
	inline int32_t get__Encryption_55() const { return ____Encryption_55; }
	inline int32_t* get_address_of__Encryption_55() { return &____Encryption_55; }
	inline void set__Encryption_55(int32_t value)
	{
		____Encryption_55 = value;
	}

	inline static int32_t get_offset_of__Encryption_FromZipFile_56() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____Encryption_FromZipFile_56)); }
	inline int32_t get__Encryption_FromZipFile_56() const { return ____Encryption_FromZipFile_56; }
	inline int32_t* get_address_of__Encryption_FromZipFile_56() { return &____Encryption_FromZipFile_56; }
	inline void set__Encryption_FromZipFile_56(int32_t value)
	{
		____Encryption_FromZipFile_56 = value;
	}

	inline static int32_t get_offset_of__WeakEncryptionHeader_57() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____WeakEncryptionHeader_57)); }
	inline ByteU5BU5D_t58506160* get__WeakEncryptionHeader_57() const { return ____WeakEncryptionHeader_57; }
	inline ByteU5BU5D_t58506160** get_address_of__WeakEncryptionHeader_57() { return &____WeakEncryptionHeader_57; }
	inline void set__WeakEncryptionHeader_57(ByteU5BU5D_t58506160* value)
	{
		____WeakEncryptionHeader_57 = value;
		Il2CppCodeGenWriteBarrier(&____WeakEncryptionHeader_57, value);
	}

	inline static int32_t get_offset_of__archiveStream_58() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____archiveStream_58)); }
	inline Stream_t219029575 * get__archiveStream_58() const { return ____archiveStream_58; }
	inline Stream_t219029575 ** get_address_of__archiveStream_58() { return &____archiveStream_58; }
	inline void set__archiveStream_58(Stream_t219029575 * value)
	{
		____archiveStream_58 = value;
		Il2CppCodeGenWriteBarrier(&____archiveStream_58, value);
	}

	inline static int32_t get_offset_of__sourceStream_59() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____sourceStream_59)); }
	inline Stream_t219029575 * get__sourceStream_59() const { return ____sourceStream_59; }
	inline Stream_t219029575 ** get_address_of__sourceStream_59() { return &____sourceStream_59; }
	inline void set__sourceStream_59(Stream_t219029575 * value)
	{
		____sourceStream_59 = value;
		Il2CppCodeGenWriteBarrier(&____sourceStream_59, value);
	}

	inline static int32_t get_offset_of__sourceStreamOriginalPosition_60() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____sourceStreamOriginalPosition_60)); }
	inline Nullable_1_t1438485494  get__sourceStreamOriginalPosition_60() const { return ____sourceStreamOriginalPosition_60; }
	inline Nullable_1_t1438485494 * get_address_of__sourceStreamOriginalPosition_60() { return &____sourceStreamOriginalPosition_60; }
	inline void set__sourceStreamOriginalPosition_60(Nullable_1_t1438485494  value)
	{
		____sourceStreamOriginalPosition_60 = value;
	}

	inline static int32_t get_offset_of__sourceWasJitProvided_61() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____sourceWasJitProvided_61)); }
	inline bool get__sourceWasJitProvided_61() const { return ____sourceWasJitProvided_61; }
	inline bool* get_address_of__sourceWasJitProvided_61() { return &____sourceWasJitProvided_61; }
	inline void set__sourceWasJitProvided_61(bool value)
	{
		____sourceWasJitProvided_61 = value;
	}

	inline static int32_t get_offset_of__ioOperationCanceled_62() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____ioOperationCanceled_62)); }
	inline bool get__ioOperationCanceled_62() const { return ____ioOperationCanceled_62; }
	inline bool* get_address_of__ioOperationCanceled_62() { return &____ioOperationCanceled_62; }
	inline void set__ioOperationCanceled_62(bool value)
	{
		____ioOperationCanceled_62 = value;
	}

	inline static int32_t get_offset_of__presumeZip64_63() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____presumeZip64_63)); }
	inline bool get__presumeZip64_63() const { return ____presumeZip64_63; }
	inline bool* get_address_of__presumeZip64_63() { return &____presumeZip64_63; }
	inline void set__presumeZip64_63(bool value)
	{
		____presumeZip64_63 = value;
	}

	inline static int32_t get_offset_of__entryRequiresZip64_64() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____entryRequiresZip64_64)); }
	inline Nullable_1_t3097043249  get__entryRequiresZip64_64() const { return ____entryRequiresZip64_64; }
	inline Nullable_1_t3097043249 * get_address_of__entryRequiresZip64_64() { return &____entryRequiresZip64_64; }
	inline void set__entryRequiresZip64_64(Nullable_1_t3097043249  value)
	{
		____entryRequiresZip64_64 = value;
	}

	inline static int32_t get_offset_of__OutputUsesZip64_65() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____OutputUsesZip64_65)); }
	inline Nullable_1_t3097043249  get__OutputUsesZip64_65() const { return ____OutputUsesZip64_65; }
	inline Nullable_1_t3097043249 * get_address_of__OutputUsesZip64_65() { return &____OutputUsesZip64_65; }
	inline void set__OutputUsesZip64_65(Nullable_1_t3097043249  value)
	{
		____OutputUsesZip64_65 = value;
	}

	inline static int32_t get_offset_of__IsText_66() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____IsText_66)); }
	inline bool get__IsText_66() const { return ____IsText_66; }
	inline bool* get_address_of__IsText_66() { return &____IsText_66; }
	inline void set__IsText_66(bool value)
	{
		____IsText_66 = value;
	}

	inline static int32_t get_offset_of__timestamp_67() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____timestamp_67)); }
	inline int32_t get__timestamp_67() const { return ____timestamp_67; }
	inline int32_t* get_address_of__timestamp_67() { return &____timestamp_67; }
	inline void set__timestamp_67(int32_t value)
	{
		____timestamp_67 = value;
	}

	inline static int32_t get_offset_of__WriteDelegate_71() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____WriteDelegate_71)); }
	inline WriteDelegate_t2087363675 * get__WriteDelegate_71() const { return ____WriteDelegate_71; }
	inline WriteDelegate_t2087363675 ** get_address_of__WriteDelegate_71() { return &____WriteDelegate_71; }
	inline void set__WriteDelegate_71(WriteDelegate_t2087363675 * value)
	{
		____WriteDelegate_71 = value;
		Il2CppCodeGenWriteBarrier(&____WriteDelegate_71, value);
	}

	inline static int32_t get_offset_of__OpenDelegate_72() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____OpenDelegate_72)); }
	inline OpenDelegate_t1492450310 * get__OpenDelegate_72() const { return ____OpenDelegate_72; }
	inline OpenDelegate_t1492450310 ** get_address_of__OpenDelegate_72() { return &____OpenDelegate_72; }
	inline void set__OpenDelegate_72(OpenDelegate_t1492450310 * value)
	{
		____OpenDelegate_72 = value;
		Il2CppCodeGenWriteBarrier(&____OpenDelegate_72, value);
	}

	inline static int32_t get_offset_of__CloseDelegate_73() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ____CloseDelegate_73)); }
	inline CloseDelegate_t890700148 * get__CloseDelegate_73() const { return ____CloseDelegate_73; }
	inline CloseDelegate_t890700148 ** get_address_of__CloseDelegate_73() { return &____CloseDelegate_73; }
	inline void set__CloseDelegate_73(CloseDelegate_t890700148 * value)
	{
		____CloseDelegate_73 = value;
		Il2CppCodeGenWriteBarrier(&____CloseDelegate_73, value);
	}

	inline static int32_t get_offset_of_U3CExtractExistingFileU3Ek__BackingField_74() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ___U3CExtractExistingFileU3Ek__BackingField_74)); }
	inline int32_t get_U3CExtractExistingFileU3Ek__BackingField_74() const { return ___U3CExtractExistingFileU3Ek__BackingField_74; }
	inline int32_t* get_address_of_U3CExtractExistingFileU3Ek__BackingField_74() { return &___U3CExtractExistingFileU3Ek__BackingField_74; }
	inline void set_U3CExtractExistingFileU3Ek__BackingField_74(int32_t value)
	{
		___U3CExtractExistingFileU3Ek__BackingField_74 = value;
	}

	inline static int32_t get_offset_of_U3CZipErrorActionU3Ek__BackingField_75() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ___U3CZipErrorActionU3Ek__BackingField_75)); }
	inline int32_t get_U3CZipErrorActionU3Ek__BackingField_75() const { return ___U3CZipErrorActionU3Ek__BackingField_75; }
	inline int32_t* get_address_of_U3CZipErrorActionU3Ek__BackingField_75() { return &___U3CZipErrorActionU3Ek__BackingField_75; }
	inline void set_U3CZipErrorActionU3Ek__BackingField_75(int32_t value)
	{
		___U3CZipErrorActionU3Ek__BackingField_75 = value;
	}

	inline static int32_t get_offset_of_U3CSetCompressionU3Ek__BackingField_76() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ___U3CSetCompressionU3Ek__BackingField_76)); }
	inline SetCompressionCallback_t2458683936 * get_U3CSetCompressionU3Ek__BackingField_76() const { return ___U3CSetCompressionU3Ek__BackingField_76; }
	inline SetCompressionCallback_t2458683936 ** get_address_of_U3CSetCompressionU3Ek__BackingField_76() { return &___U3CSetCompressionU3Ek__BackingField_76; }
	inline void set_U3CSetCompressionU3Ek__BackingField_76(SetCompressionCallback_t2458683936 * value)
	{
		___U3CSetCompressionU3Ek__BackingField_76 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSetCompressionU3Ek__BackingField_76, value);
	}

	inline static int32_t get_offset_of_U3CProvisionalAlternateEncodingU3Ek__BackingField_77() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ___U3CProvisionalAlternateEncodingU3Ek__BackingField_77)); }
	inline Encoding_t180559927 * get_U3CProvisionalAlternateEncodingU3Ek__BackingField_77() const { return ___U3CProvisionalAlternateEncodingU3Ek__BackingField_77; }
	inline Encoding_t180559927 ** get_address_of_U3CProvisionalAlternateEncodingU3Ek__BackingField_77() { return &___U3CProvisionalAlternateEncodingU3Ek__BackingField_77; }
	inline void set_U3CProvisionalAlternateEncodingU3Ek__BackingField_77(Encoding_t180559927 * value)
	{
		___U3CProvisionalAlternateEncodingU3Ek__BackingField_77 = value;
		Il2CppCodeGenWriteBarrier(&___U3CProvisionalAlternateEncodingU3Ek__BackingField_77, value);
	}

	inline static int32_t get_offset_of_U3CAlternateEncodingU3Ek__BackingField_78() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ___U3CAlternateEncodingU3Ek__BackingField_78)); }
	inline Encoding_t180559927 * get_U3CAlternateEncodingU3Ek__BackingField_78() const { return ___U3CAlternateEncodingU3Ek__BackingField_78; }
	inline Encoding_t180559927 ** get_address_of_U3CAlternateEncodingU3Ek__BackingField_78() { return &___U3CAlternateEncodingU3Ek__BackingField_78; }
	inline void set_U3CAlternateEncodingU3Ek__BackingField_78(Encoding_t180559927 * value)
	{
		___U3CAlternateEncodingU3Ek__BackingField_78 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAlternateEncodingU3Ek__BackingField_78, value);
	}

	inline static int32_t get_offset_of_U3CAlternateEncodingUsageU3Ek__BackingField_79() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352, ___U3CAlternateEncodingUsageU3Ek__BackingField_79)); }
	inline int32_t get_U3CAlternateEncodingUsageU3Ek__BackingField_79() const { return ___U3CAlternateEncodingUsageU3Ek__BackingField_79; }
	inline int32_t* get_address_of_U3CAlternateEncodingUsageU3Ek__BackingField_79() { return &___U3CAlternateEncodingUsageU3Ek__BackingField_79; }
	inline void set_U3CAlternateEncodingUsageU3Ek__BackingField_79(int32_t value)
	{
		___U3CAlternateEncodingUsageU3Ek__BackingField_79 = value;
	}
};

struct ZipEntry_t2226789352_StaticFields
{
public:
	// System.Text.Encoding Ionic.Zip.ZipEntry::ibm437
	Encoding_t180559927 * ___ibm437_41;
	// System.DateTime Ionic.Zip.ZipEntry::_unixEpoch
	DateTime_t339033936  ____unixEpoch_68;
	// System.DateTime Ionic.Zip.ZipEntry::_win32Epoch
	DateTime_t339033936  ____win32Epoch_69;
	// System.DateTime Ionic.Zip.ZipEntry::_zeroHour
	DateTime_t339033936  ____zeroHour_70;

public:
	inline static int32_t get_offset_of_ibm437_41() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352_StaticFields, ___ibm437_41)); }
	inline Encoding_t180559927 * get_ibm437_41() const { return ___ibm437_41; }
	inline Encoding_t180559927 ** get_address_of_ibm437_41() { return &___ibm437_41; }
	inline void set_ibm437_41(Encoding_t180559927 * value)
	{
		___ibm437_41 = value;
		Il2CppCodeGenWriteBarrier(&___ibm437_41, value);
	}

	inline static int32_t get_offset_of__unixEpoch_68() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352_StaticFields, ____unixEpoch_68)); }
	inline DateTime_t339033936  get__unixEpoch_68() const { return ____unixEpoch_68; }
	inline DateTime_t339033936 * get_address_of__unixEpoch_68() { return &____unixEpoch_68; }
	inline void set__unixEpoch_68(DateTime_t339033936  value)
	{
		____unixEpoch_68 = value;
	}

	inline static int32_t get_offset_of__win32Epoch_69() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352_StaticFields, ____win32Epoch_69)); }
	inline DateTime_t339033936  get__win32Epoch_69() const { return ____win32Epoch_69; }
	inline DateTime_t339033936 * get_address_of__win32Epoch_69() { return &____win32Epoch_69; }
	inline void set__win32Epoch_69(DateTime_t339033936  value)
	{
		____win32Epoch_69 = value;
	}

	inline static int32_t get_offset_of__zeroHour_70() { return static_cast<int32_t>(offsetof(ZipEntry_t2226789352_StaticFields, ____zeroHour_70)); }
	inline DateTime_t339033936  get__zeroHour_70() const { return ____zeroHour_70; }
	inline DateTime_t339033936 * get_address_of__zeroHour_70() { return &____zeroHour_70; }
	inline void set__zeroHour_70(DateTime_t339033936  value)
	{
		____zeroHour_70 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
