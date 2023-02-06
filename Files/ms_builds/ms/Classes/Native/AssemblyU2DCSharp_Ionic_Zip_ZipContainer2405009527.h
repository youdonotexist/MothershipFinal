#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Ionic.Zip.ZipFile
struct ZipFile_t3698100756;
// Ionic.Zip.ZipOutputStream
struct ZipOutputStream_t544682873;
// Ionic.Zip.ZipInputStream
struct ZipInputStream_t1956564000;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Zip.ZipContainer
struct  ZipContainer_t2405009527  : public Il2CppObject
{
public:
	// Ionic.Zip.ZipFile Ionic.Zip.ZipContainer::_zf
	ZipFile_t3698100756 * ____zf_0;
	// Ionic.Zip.ZipOutputStream Ionic.Zip.ZipContainer::_zos
	ZipOutputStream_t544682873 * ____zos_1;
	// Ionic.Zip.ZipInputStream Ionic.Zip.ZipContainer::_zis
	ZipInputStream_t1956564000 * ____zis_2;

public:
	inline static int32_t get_offset_of__zf_0() { return static_cast<int32_t>(offsetof(ZipContainer_t2405009527, ____zf_0)); }
	inline ZipFile_t3698100756 * get__zf_0() const { return ____zf_0; }
	inline ZipFile_t3698100756 ** get_address_of__zf_0() { return &____zf_0; }
	inline void set__zf_0(ZipFile_t3698100756 * value)
	{
		____zf_0 = value;
		Il2CppCodeGenWriteBarrier(&____zf_0, value);
	}

	inline static int32_t get_offset_of__zos_1() { return static_cast<int32_t>(offsetof(ZipContainer_t2405009527, ____zos_1)); }
	inline ZipOutputStream_t544682873 * get__zos_1() const { return ____zos_1; }
	inline ZipOutputStream_t544682873 ** get_address_of__zos_1() { return &____zos_1; }
	inline void set__zos_1(ZipOutputStream_t544682873 * value)
	{
		____zos_1 = value;
		Il2CppCodeGenWriteBarrier(&____zos_1, value);
	}

	inline static int32_t get_offset_of__zis_2() { return static_cast<int32_t>(offsetof(ZipContainer_t2405009527, ____zis_2)); }
	inline ZipInputStream_t1956564000 * get__zis_2() const { return ____zis_2; }
	inline ZipInputStream_t1956564000 ** get_address_of__zis_2() { return &____zis_2; }
	inline void set__zis_2(ZipInputStream_t1956564000 * value)
	{
		____zis_2 = value;
		Il2CppCodeGenWriteBarrier(&____zis_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
