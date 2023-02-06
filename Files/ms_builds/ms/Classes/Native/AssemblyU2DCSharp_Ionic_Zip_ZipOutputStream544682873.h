#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.IO.Stream
struct Stream_t219029575;
// Ionic.Zip.ZipEntry
struct ZipEntry_t2226789352;
// System.Collections.Generic.Dictionary`2<System.String,Ionic.Zip.ZipEntry>
struct Dictionary_2_t3864487256;
// System.Text.Encoding
struct Encoding_t180559927;
// Ionic.Zip.CountingStream
struct CountingStream_t2437564394;
// Ionic.Crc.CrcCalculatorStream
struct CrcCalculatorStream_t87996942;
// Ionic.Zlib.ParallelDeflateOutputStream
struct ParallelDeflateOutputStream_t1234751346;

#include "mscorlib_System_IO_Stream219029575.h"
#include "AssemblyU2DCSharp_Ionic_Zip_EncryptionAlgorithm2765650435.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipEntryTimestamp3546947612.h"
#include "AssemblyU2DCSharp_Ionic_Zip_Zip64Option669838539.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipOption4149672141.h"
#include "Ionic_Zlib_Ionic_Zlib_CompressionStrategy2328611910.h"
#include "Ionic_Zlib_Ionic_Zlib_CompressionLevel3940478795.h"
#include "AssemblyU2DCSharp_Ionic_Zip_CompressionMethod2250333118.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Zip.ZipOutputStream
struct  ZipOutputStream_t544682873  : public Stream_t219029575
{
public:
	// Ionic.Zip.EncryptionAlgorithm Ionic.Zip.ZipOutputStream::_encryption
	int32_t ____encryption_2;
	// Ionic.Zip.ZipEntryTimestamp Ionic.Zip.ZipOutputStream::_timestamp
	int32_t ____timestamp_3;
	// System.String Ionic.Zip.ZipOutputStream::_password
	String_t* ____password_4;
	// System.String Ionic.Zip.ZipOutputStream::_comment
	String_t* ____comment_5;
	// System.IO.Stream Ionic.Zip.ZipOutputStream::_outputStream
	Stream_t219029575 * ____outputStream_6;
	// Ionic.Zip.ZipEntry Ionic.Zip.ZipOutputStream::_currentEntry
	ZipEntry_t2226789352 * ____currentEntry_7;
	// Ionic.Zip.Zip64Option Ionic.Zip.ZipOutputStream::_zip64
	int32_t ____zip64_8;
	// System.Collections.Generic.Dictionary`2<System.String,Ionic.Zip.ZipEntry> Ionic.Zip.ZipOutputStream::_entriesWritten
	Dictionary_2_t3864487256 * ____entriesWritten_9;
	// System.Int32 Ionic.Zip.ZipOutputStream::_entryCount
	int32_t ____entryCount_10;
	// Ionic.Zip.ZipOption Ionic.Zip.ZipOutputStream::_alternateEncodingUsage
	int32_t ____alternateEncodingUsage_11;
	// System.Text.Encoding Ionic.Zip.ZipOutputStream::_alternateEncoding
	Encoding_t180559927 * ____alternateEncoding_12;
	// System.Boolean Ionic.Zip.ZipOutputStream::_leaveUnderlyingStreamOpen
	bool ____leaveUnderlyingStreamOpen_13;
	// System.Boolean Ionic.Zip.ZipOutputStream::_disposed
	bool ____disposed_14;
	// System.Boolean Ionic.Zip.ZipOutputStream::_exceptionPending
	bool ____exceptionPending_15;
	// System.Boolean Ionic.Zip.ZipOutputStream::_anyEntriesUsedZip64
	bool ____anyEntriesUsedZip64_16;
	// System.Boolean Ionic.Zip.ZipOutputStream::_directoryNeededZip64
	bool ____directoryNeededZip64_17;
	// Ionic.Zip.CountingStream Ionic.Zip.ZipOutputStream::_outputCounter
	CountingStream_t2437564394 * ____outputCounter_18;
	// System.IO.Stream Ionic.Zip.ZipOutputStream::_encryptor
	Stream_t219029575 * ____encryptor_19;
	// System.IO.Stream Ionic.Zip.ZipOutputStream::_deflater
	Stream_t219029575 * ____deflater_20;
	// Ionic.Crc.CrcCalculatorStream Ionic.Zip.ZipOutputStream::_entryOutputStream
	CrcCalculatorStream_t87996942 * ____entryOutputStream_21;
	// System.Boolean Ionic.Zip.ZipOutputStream::_needToWriteEntryHeader
	bool ____needToWriteEntryHeader_22;
	// System.String Ionic.Zip.ZipOutputStream::_name
	String_t* ____name_23;
	// System.Boolean Ionic.Zip.ZipOutputStream::_DontIgnoreCase
	bool ____DontIgnoreCase_24;
	// Ionic.Zlib.ParallelDeflateOutputStream Ionic.Zip.ZipOutputStream::ParallelDeflater
	ParallelDeflateOutputStream_t1234751346 * ___ParallelDeflater_25;
	// System.Int64 Ionic.Zip.ZipOutputStream::_ParallelDeflateThreshold
	int64_t ____ParallelDeflateThreshold_26;
	// System.Int32 Ionic.Zip.ZipOutputStream::_maxBufferPairs
	int32_t ____maxBufferPairs_27;
	// System.Int32 Ionic.Zip.ZipOutputStream::<CodecBufferSize>k__BackingField
	int32_t ___U3CCodecBufferSizeU3Ek__BackingField_28;
	// Ionic.Zlib.CompressionStrategy Ionic.Zip.ZipOutputStream::<Strategy>k__BackingField
	int32_t ___U3CStrategyU3Ek__BackingField_29;
	// Ionic.Zlib.CompressionLevel Ionic.Zip.ZipOutputStream::<CompressionLevel>k__BackingField
	int32_t ___U3CCompressionLevelU3Ek__BackingField_30;
	// Ionic.Zip.CompressionMethod Ionic.Zip.ZipOutputStream::<CompressionMethod>k__BackingField
	int32_t ___U3CCompressionMethodU3Ek__BackingField_31;

public:
	inline static int32_t get_offset_of__encryption_2() { return static_cast<int32_t>(offsetof(ZipOutputStream_t544682873, ____encryption_2)); }
	inline int32_t get__encryption_2() const { return ____encryption_2; }
	inline int32_t* get_address_of__encryption_2() { return &____encryption_2; }
	inline void set__encryption_2(int32_t value)
	{
		____encryption_2 = value;
	}

	inline static int32_t get_offset_of__timestamp_3() { return static_cast<int32_t>(offsetof(ZipOutputStream_t544682873, ____timestamp_3)); }
	inline int32_t get__timestamp_3() const { return ____timestamp_3; }
	inline int32_t* get_address_of__timestamp_3() { return &____timestamp_3; }
	inline void set__timestamp_3(int32_t value)
	{
		____timestamp_3 = value;
	}

	inline static int32_t get_offset_of__password_4() { return static_cast<int32_t>(offsetof(ZipOutputStream_t544682873, ____password_4)); }
	inline String_t* get__password_4() const { return ____password_4; }
	inline String_t** get_address_of__password_4() { return &____password_4; }
	inline void set__password_4(String_t* value)
	{
		____password_4 = value;
		Il2CppCodeGenWriteBarrier(&____password_4, value);
	}

	inline static int32_t get_offset_of__comment_5() { return static_cast<int32_t>(offsetof(ZipOutputStream_t544682873, ____comment_5)); }
	inline String_t* get__comment_5() const { return ____comment_5; }
	inline String_t** get_address_of__comment_5() { return &____comment_5; }
	inline void set__comment_5(String_t* value)
	{
		____comment_5 = value;
		Il2CppCodeGenWriteBarrier(&____comment_5, value);
	}

	inline static int32_t get_offset_of__outputStream_6() { return static_cast<int32_t>(offsetof(ZipOutputStream_t544682873, ____outputStream_6)); }
	inline Stream_t219029575 * get__outputStream_6() const { return ____outputStream_6; }
	inline Stream_t219029575 ** get_address_of__outputStream_6() { return &____outputStream_6; }
	inline void set__outputStream_6(Stream_t219029575 * value)
	{
		____outputStream_6 = value;
		Il2CppCodeGenWriteBarrier(&____outputStream_6, value);
	}

	inline static int32_t get_offset_of__currentEntry_7() { return static_cast<int32_t>(offsetof(ZipOutputStream_t544682873, ____currentEntry_7)); }
	inline ZipEntry_t2226789352 * get__currentEntry_7() const { return ____currentEntry_7; }
	inline ZipEntry_t2226789352 ** get_address_of__currentEntry_7() { return &____currentEntry_7; }
	inline void set__currentEntry_7(ZipEntry_t2226789352 * value)
	{
		____currentEntry_7 = value;
		Il2CppCodeGenWriteBarrier(&____currentEntry_7, value);
	}

	inline static int32_t get_offset_of__zip64_8() { return static_cast<int32_t>(offsetof(ZipOutputStream_t544682873, ____zip64_8)); }
	inline int32_t get__zip64_8() const { return ____zip64_8; }
	inline int32_t* get_address_of__zip64_8() { return &____zip64_8; }
	inline void set__zip64_8(int32_t value)
	{
		____zip64_8 = value;
	}

	inline static int32_t get_offset_of__entriesWritten_9() { return static_cast<int32_t>(offsetof(ZipOutputStream_t544682873, ____entriesWritten_9)); }
	inline Dictionary_2_t3864487256 * get__entriesWritten_9() const { return ____entriesWritten_9; }
	inline Dictionary_2_t3864487256 ** get_address_of__entriesWritten_9() { return &____entriesWritten_9; }
	inline void set__entriesWritten_9(Dictionary_2_t3864487256 * value)
	{
		____entriesWritten_9 = value;
		Il2CppCodeGenWriteBarrier(&____entriesWritten_9, value);
	}

	inline static int32_t get_offset_of__entryCount_10() { return static_cast<int32_t>(offsetof(ZipOutputStream_t544682873, ____entryCount_10)); }
	inline int32_t get__entryCount_10() const { return ____entryCount_10; }
	inline int32_t* get_address_of__entryCount_10() { return &____entryCount_10; }
	inline void set__entryCount_10(int32_t value)
	{
		____entryCount_10 = value;
	}

	inline static int32_t get_offset_of__alternateEncodingUsage_11() { return static_cast<int32_t>(offsetof(ZipOutputStream_t544682873, ____alternateEncodingUsage_11)); }
	inline int32_t get__alternateEncodingUsage_11() const { return ____alternateEncodingUsage_11; }
	inline int32_t* get_address_of__alternateEncodingUsage_11() { return &____alternateEncodingUsage_11; }
	inline void set__alternateEncodingUsage_11(int32_t value)
	{
		____alternateEncodingUsage_11 = value;
	}

	inline static int32_t get_offset_of__alternateEncoding_12() { return static_cast<int32_t>(offsetof(ZipOutputStream_t544682873, ____alternateEncoding_12)); }
	inline Encoding_t180559927 * get__alternateEncoding_12() const { return ____alternateEncoding_12; }
	inline Encoding_t180559927 ** get_address_of__alternateEncoding_12() { return &____alternateEncoding_12; }
	inline void set__alternateEncoding_12(Encoding_t180559927 * value)
	{
		____alternateEncoding_12 = value;
		Il2CppCodeGenWriteBarrier(&____alternateEncoding_12, value);
	}

	inline static int32_t get_offset_of__leaveUnderlyingStreamOpen_13() { return static_cast<int32_t>(offsetof(ZipOutputStream_t544682873, ____leaveUnderlyingStreamOpen_13)); }
	inline bool get__leaveUnderlyingStreamOpen_13() const { return ____leaveUnderlyingStreamOpen_13; }
	inline bool* get_address_of__leaveUnderlyingStreamOpen_13() { return &____leaveUnderlyingStreamOpen_13; }
	inline void set__leaveUnderlyingStreamOpen_13(bool value)
	{
		____leaveUnderlyingStreamOpen_13 = value;
	}

	inline static int32_t get_offset_of__disposed_14() { return static_cast<int32_t>(offsetof(ZipOutputStream_t544682873, ____disposed_14)); }
	inline bool get__disposed_14() const { return ____disposed_14; }
	inline bool* get_address_of__disposed_14() { return &____disposed_14; }
	inline void set__disposed_14(bool value)
	{
		____disposed_14 = value;
	}

	inline static int32_t get_offset_of__exceptionPending_15() { return static_cast<int32_t>(offsetof(ZipOutputStream_t544682873, ____exceptionPending_15)); }
	inline bool get__exceptionPending_15() const { return ____exceptionPending_15; }
	inline bool* get_address_of__exceptionPending_15() { return &____exceptionPending_15; }
	inline void set__exceptionPending_15(bool value)
	{
		____exceptionPending_15 = value;
	}

	inline static int32_t get_offset_of__anyEntriesUsedZip64_16() { return static_cast<int32_t>(offsetof(ZipOutputStream_t544682873, ____anyEntriesUsedZip64_16)); }
	inline bool get__anyEntriesUsedZip64_16() const { return ____anyEntriesUsedZip64_16; }
	inline bool* get_address_of__anyEntriesUsedZip64_16() { return &____anyEntriesUsedZip64_16; }
	inline void set__anyEntriesUsedZip64_16(bool value)
	{
		____anyEntriesUsedZip64_16 = value;
	}

	inline static int32_t get_offset_of__directoryNeededZip64_17() { return static_cast<int32_t>(offsetof(ZipOutputStream_t544682873, ____directoryNeededZip64_17)); }
	inline bool get__directoryNeededZip64_17() const { return ____directoryNeededZip64_17; }
	inline bool* get_address_of__directoryNeededZip64_17() { return &____directoryNeededZip64_17; }
	inline void set__directoryNeededZip64_17(bool value)
	{
		____directoryNeededZip64_17 = value;
	}

	inline static int32_t get_offset_of__outputCounter_18() { return static_cast<int32_t>(offsetof(ZipOutputStream_t544682873, ____outputCounter_18)); }
	inline CountingStream_t2437564394 * get__outputCounter_18() const { return ____outputCounter_18; }
	inline CountingStream_t2437564394 ** get_address_of__outputCounter_18() { return &____outputCounter_18; }
	inline void set__outputCounter_18(CountingStream_t2437564394 * value)
	{
		____outputCounter_18 = value;
		Il2CppCodeGenWriteBarrier(&____outputCounter_18, value);
	}

	inline static int32_t get_offset_of__encryptor_19() { return static_cast<int32_t>(offsetof(ZipOutputStream_t544682873, ____encryptor_19)); }
	inline Stream_t219029575 * get__encryptor_19() const { return ____encryptor_19; }
	inline Stream_t219029575 ** get_address_of__encryptor_19() { return &____encryptor_19; }
	inline void set__encryptor_19(Stream_t219029575 * value)
	{
		____encryptor_19 = value;
		Il2CppCodeGenWriteBarrier(&____encryptor_19, value);
	}

	inline static int32_t get_offset_of__deflater_20() { return static_cast<int32_t>(offsetof(ZipOutputStream_t544682873, ____deflater_20)); }
	inline Stream_t219029575 * get__deflater_20() const { return ____deflater_20; }
	inline Stream_t219029575 ** get_address_of__deflater_20() { return &____deflater_20; }
	inline void set__deflater_20(Stream_t219029575 * value)
	{
		____deflater_20 = value;
		Il2CppCodeGenWriteBarrier(&____deflater_20, value);
	}

	inline static int32_t get_offset_of__entryOutputStream_21() { return static_cast<int32_t>(offsetof(ZipOutputStream_t544682873, ____entryOutputStream_21)); }
	inline CrcCalculatorStream_t87996942 * get__entryOutputStream_21() const { return ____entryOutputStream_21; }
	inline CrcCalculatorStream_t87996942 ** get_address_of__entryOutputStream_21() { return &____entryOutputStream_21; }
	inline void set__entryOutputStream_21(CrcCalculatorStream_t87996942 * value)
	{
		____entryOutputStream_21 = value;
		Il2CppCodeGenWriteBarrier(&____entryOutputStream_21, value);
	}

	inline static int32_t get_offset_of__needToWriteEntryHeader_22() { return static_cast<int32_t>(offsetof(ZipOutputStream_t544682873, ____needToWriteEntryHeader_22)); }
	inline bool get__needToWriteEntryHeader_22() const { return ____needToWriteEntryHeader_22; }
	inline bool* get_address_of__needToWriteEntryHeader_22() { return &____needToWriteEntryHeader_22; }
	inline void set__needToWriteEntryHeader_22(bool value)
	{
		____needToWriteEntryHeader_22 = value;
	}

	inline static int32_t get_offset_of__name_23() { return static_cast<int32_t>(offsetof(ZipOutputStream_t544682873, ____name_23)); }
	inline String_t* get__name_23() const { return ____name_23; }
	inline String_t** get_address_of__name_23() { return &____name_23; }
	inline void set__name_23(String_t* value)
	{
		____name_23 = value;
		Il2CppCodeGenWriteBarrier(&____name_23, value);
	}

	inline static int32_t get_offset_of__DontIgnoreCase_24() { return static_cast<int32_t>(offsetof(ZipOutputStream_t544682873, ____DontIgnoreCase_24)); }
	inline bool get__DontIgnoreCase_24() const { return ____DontIgnoreCase_24; }
	inline bool* get_address_of__DontIgnoreCase_24() { return &____DontIgnoreCase_24; }
	inline void set__DontIgnoreCase_24(bool value)
	{
		____DontIgnoreCase_24 = value;
	}

	inline static int32_t get_offset_of_ParallelDeflater_25() { return static_cast<int32_t>(offsetof(ZipOutputStream_t544682873, ___ParallelDeflater_25)); }
	inline ParallelDeflateOutputStream_t1234751346 * get_ParallelDeflater_25() const { return ___ParallelDeflater_25; }
	inline ParallelDeflateOutputStream_t1234751346 ** get_address_of_ParallelDeflater_25() { return &___ParallelDeflater_25; }
	inline void set_ParallelDeflater_25(ParallelDeflateOutputStream_t1234751346 * value)
	{
		___ParallelDeflater_25 = value;
		Il2CppCodeGenWriteBarrier(&___ParallelDeflater_25, value);
	}

	inline static int32_t get_offset_of__ParallelDeflateThreshold_26() { return static_cast<int32_t>(offsetof(ZipOutputStream_t544682873, ____ParallelDeflateThreshold_26)); }
	inline int64_t get__ParallelDeflateThreshold_26() const { return ____ParallelDeflateThreshold_26; }
	inline int64_t* get_address_of__ParallelDeflateThreshold_26() { return &____ParallelDeflateThreshold_26; }
	inline void set__ParallelDeflateThreshold_26(int64_t value)
	{
		____ParallelDeflateThreshold_26 = value;
	}

	inline static int32_t get_offset_of__maxBufferPairs_27() { return static_cast<int32_t>(offsetof(ZipOutputStream_t544682873, ____maxBufferPairs_27)); }
	inline int32_t get__maxBufferPairs_27() const { return ____maxBufferPairs_27; }
	inline int32_t* get_address_of__maxBufferPairs_27() { return &____maxBufferPairs_27; }
	inline void set__maxBufferPairs_27(int32_t value)
	{
		____maxBufferPairs_27 = value;
	}

	inline static int32_t get_offset_of_U3CCodecBufferSizeU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(ZipOutputStream_t544682873, ___U3CCodecBufferSizeU3Ek__BackingField_28)); }
	inline int32_t get_U3CCodecBufferSizeU3Ek__BackingField_28() const { return ___U3CCodecBufferSizeU3Ek__BackingField_28; }
	inline int32_t* get_address_of_U3CCodecBufferSizeU3Ek__BackingField_28() { return &___U3CCodecBufferSizeU3Ek__BackingField_28; }
	inline void set_U3CCodecBufferSizeU3Ek__BackingField_28(int32_t value)
	{
		___U3CCodecBufferSizeU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CStrategyU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(ZipOutputStream_t544682873, ___U3CStrategyU3Ek__BackingField_29)); }
	inline int32_t get_U3CStrategyU3Ek__BackingField_29() const { return ___U3CStrategyU3Ek__BackingField_29; }
	inline int32_t* get_address_of_U3CStrategyU3Ek__BackingField_29() { return &___U3CStrategyU3Ek__BackingField_29; }
	inline void set_U3CStrategyU3Ek__BackingField_29(int32_t value)
	{
		___U3CStrategyU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CCompressionLevelU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(ZipOutputStream_t544682873, ___U3CCompressionLevelU3Ek__BackingField_30)); }
	inline int32_t get_U3CCompressionLevelU3Ek__BackingField_30() const { return ___U3CCompressionLevelU3Ek__BackingField_30; }
	inline int32_t* get_address_of_U3CCompressionLevelU3Ek__BackingField_30() { return &___U3CCompressionLevelU3Ek__BackingField_30; }
	inline void set_U3CCompressionLevelU3Ek__BackingField_30(int32_t value)
	{
		___U3CCompressionLevelU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CCompressionMethodU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(ZipOutputStream_t544682873, ___U3CCompressionMethodU3Ek__BackingField_31)); }
	inline int32_t get_U3CCompressionMethodU3Ek__BackingField_31() const { return ___U3CCompressionMethodU3Ek__BackingField_31; }
	inline int32_t* get_address_of_U3CCompressionMethodU3Ek__BackingField_31() { return &___U3CCompressionMethodU3Ek__BackingField_31; }
	inline void set_U3CCompressionMethodU3Ek__BackingField_31(int32_t value)
	{
		___U3CCompressionMethodU3Ek__BackingField_31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
