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

#include "mscorlib_System_IO_Stream219029575.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipSegmentedStream_RwM2459893160.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Zip.ZipSegmentedStream
struct  ZipSegmentedStream_t93606376  : public Stream_t219029575
{
public:
	// Ionic.Zip.ZipSegmentedStream/RwMode Ionic.Zip.ZipSegmentedStream::rwMode
	int32_t ___rwMode_2;
	// System.Boolean Ionic.Zip.ZipSegmentedStream::_exceptionPending
	bool ____exceptionPending_3;
	// System.String Ionic.Zip.ZipSegmentedStream::_baseName
	String_t* ____baseName_4;
	// System.String Ionic.Zip.ZipSegmentedStream::_baseDir
	String_t* ____baseDir_5;
	// System.String Ionic.Zip.ZipSegmentedStream::_currentName
	String_t* ____currentName_6;
	// System.String Ionic.Zip.ZipSegmentedStream::_currentTempName
	String_t* ____currentTempName_7;
	// System.UInt32 Ionic.Zip.ZipSegmentedStream::_currentDiskNumber
	uint32_t ____currentDiskNumber_8;
	// System.UInt32 Ionic.Zip.ZipSegmentedStream::_maxDiskNumber
	uint32_t ____maxDiskNumber_9;
	// System.Int32 Ionic.Zip.ZipSegmentedStream::_maxSegmentSize
	int32_t ____maxSegmentSize_10;
	// System.IO.Stream Ionic.Zip.ZipSegmentedStream::_innerStream
	Stream_t219029575 * ____innerStream_11;
	// System.Boolean Ionic.Zip.ZipSegmentedStream::<ContiguousWrite>k__BackingField
	bool ___U3CContiguousWriteU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_rwMode_2() { return static_cast<int32_t>(offsetof(ZipSegmentedStream_t93606376, ___rwMode_2)); }
	inline int32_t get_rwMode_2() const { return ___rwMode_2; }
	inline int32_t* get_address_of_rwMode_2() { return &___rwMode_2; }
	inline void set_rwMode_2(int32_t value)
	{
		___rwMode_2 = value;
	}

	inline static int32_t get_offset_of__exceptionPending_3() { return static_cast<int32_t>(offsetof(ZipSegmentedStream_t93606376, ____exceptionPending_3)); }
	inline bool get__exceptionPending_3() const { return ____exceptionPending_3; }
	inline bool* get_address_of__exceptionPending_3() { return &____exceptionPending_3; }
	inline void set__exceptionPending_3(bool value)
	{
		____exceptionPending_3 = value;
	}

	inline static int32_t get_offset_of__baseName_4() { return static_cast<int32_t>(offsetof(ZipSegmentedStream_t93606376, ____baseName_4)); }
	inline String_t* get__baseName_4() const { return ____baseName_4; }
	inline String_t** get_address_of__baseName_4() { return &____baseName_4; }
	inline void set__baseName_4(String_t* value)
	{
		____baseName_4 = value;
		Il2CppCodeGenWriteBarrier(&____baseName_4, value);
	}

	inline static int32_t get_offset_of__baseDir_5() { return static_cast<int32_t>(offsetof(ZipSegmentedStream_t93606376, ____baseDir_5)); }
	inline String_t* get__baseDir_5() const { return ____baseDir_5; }
	inline String_t** get_address_of__baseDir_5() { return &____baseDir_5; }
	inline void set__baseDir_5(String_t* value)
	{
		____baseDir_5 = value;
		Il2CppCodeGenWriteBarrier(&____baseDir_5, value);
	}

	inline static int32_t get_offset_of__currentName_6() { return static_cast<int32_t>(offsetof(ZipSegmentedStream_t93606376, ____currentName_6)); }
	inline String_t* get__currentName_6() const { return ____currentName_6; }
	inline String_t** get_address_of__currentName_6() { return &____currentName_6; }
	inline void set__currentName_6(String_t* value)
	{
		____currentName_6 = value;
		Il2CppCodeGenWriteBarrier(&____currentName_6, value);
	}

	inline static int32_t get_offset_of__currentTempName_7() { return static_cast<int32_t>(offsetof(ZipSegmentedStream_t93606376, ____currentTempName_7)); }
	inline String_t* get__currentTempName_7() const { return ____currentTempName_7; }
	inline String_t** get_address_of__currentTempName_7() { return &____currentTempName_7; }
	inline void set__currentTempName_7(String_t* value)
	{
		____currentTempName_7 = value;
		Il2CppCodeGenWriteBarrier(&____currentTempName_7, value);
	}

	inline static int32_t get_offset_of__currentDiskNumber_8() { return static_cast<int32_t>(offsetof(ZipSegmentedStream_t93606376, ____currentDiskNumber_8)); }
	inline uint32_t get__currentDiskNumber_8() const { return ____currentDiskNumber_8; }
	inline uint32_t* get_address_of__currentDiskNumber_8() { return &____currentDiskNumber_8; }
	inline void set__currentDiskNumber_8(uint32_t value)
	{
		____currentDiskNumber_8 = value;
	}

	inline static int32_t get_offset_of__maxDiskNumber_9() { return static_cast<int32_t>(offsetof(ZipSegmentedStream_t93606376, ____maxDiskNumber_9)); }
	inline uint32_t get__maxDiskNumber_9() const { return ____maxDiskNumber_9; }
	inline uint32_t* get_address_of__maxDiskNumber_9() { return &____maxDiskNumber_9; }
	inline void set__maxDiskNumber_9(uint32_t value)
	{
		____maxDiskNumber_9 = value;
	}

	inline static int32_t get_offset_of__maxSegmentSize_10() { return static_cast<int32_t>(offsetof(ZipSegmentedStream_t93606376, ____maxSegmentSize_10)); }
	inline int32_t get__maxSegmentSize_10() const { return ____maxSegmentSize_10; }
	inline int32_t* get_address_of__maxSegmentSize_10() { return &____maxSegmentSize_10; }
	inline void set__maxSegmentSize_10(int32_t value)
	{
		____maxSegmentSize_10 = value;
	}

	inline static int32_t get_offset_of__innerStream_11() { return static_cast<int32_t>(offsetof(ZipSegmentedStream_t93606376, ____innerStream_11)); }
	inline Stream_t219029575 * get__innerStream_11() const { return ____innerStream_11; }
	inline Stream_t219029575 ** get_address_of__innerStream_11() { return &____innerStream_11; }
	inline void set__innerStream_11(Stream_t219029575 * value)
	{
		____innerStream_11 = value;
		Il2CppCodeGenWriteBarrier(&____innerStream_11, value);
	}

	inline static int32_t get_offset_of_U3CContiguousWriteU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(ZipSegmentedStream_t93606376, ___U3CContiguousWriteU3Ek__BackingField_12)); }
	inline bool get_U3CContiguousWriteU3Ek__BackingField_12() const { return ___U3CContiguousWriteU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CContiguousWriteU3Ek__BackingField_12() { return &___U3CContiguousWriteU3Ek__BackingField_12; }
	inline void set_U3CContiguousWriteU3Ek__BackingField_12(bool value)
	{
		___U3CContiguousWriteU3Ek__BackingField_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
