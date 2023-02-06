#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_Ionic_Zip_ZipProgressEventArgs712583136.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Zip.SaveProgressEventArgs
struct  SaveProgressEventArgs_t2497699012  : public ZipProgressEventArgs_t712583136
{
public:
	// System.Int32 Ionic.Zip.SaveProgressEventArgs::_entriesSaved
	int32_t ____entriesSaved_8;

public:
	inline static int32_t get_offset_of__entriesSaved_8() { return static_cast<int32_t>(offsetof(SaveProgressEventArgs_t2497699012, ____entriesSaved_8)); }
	inline int32_t get__entriesSaved_8() const { return ____entriesSaved_8; }
	inline int32_t* get_address_of__entriesSaved_8() { return &____entriesSaved_8; }
	inline void set__entriesSaved_8(int32_t value)
	{
		____entriesSaved_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
