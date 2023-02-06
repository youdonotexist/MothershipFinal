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

#include "AssemblyU2DCSharp_Ionic_Zip_ZipProgressEventArgs712583136.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Zip.ExtractProgressEventArgs
struct  ExtractProgressEventArgs_t76578432  : public ZipProgressEventArgs_t712583136
{
public:
	// System.Int32 Ionic.Zip.ExtractProgressEventArgs::_entriesExtracted
	int32_t ____entriesExtracted_8;
	// System.String Ionic.Zip.ExtractProgressEventArgs::_target
	String_t* ____target_9;

public:
	inline static int32_t get_offset_of__entriesExtracted_8() { return static_cast<int32_t>(offsetof(ExtractProgressEventArgs_t76578432, ____entriesExtracted_8)); }
	inline int32_t get__entriesExtracted_8() const { return ____entriesExtracted_8; }
	inline int32_t* get_address_of__entriesExtracted_8() { return &____entriesExtracted_8; }
	inline void set__entriesExtracted_8(int32_t value)
	{
		____entriesExtracted_8 = value;
	}

	inline static int32_t get_offset_of__target_9() { return static_cast<int32_t>(offsetof(ExtractProgressEventArgs_t76578432, ____target_9)); }
	inline String_t* get__target_9() const { return ____target_9; }
	inline String_t** get_address_of__target_9() { return &____target_9; }
	inline void set__target_9(String_t* value)
	{
		____target_9 = value;
		Il2CppCodeGenWriteBarrier(&____target_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
