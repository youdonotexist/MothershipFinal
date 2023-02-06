#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Ionic.Zip.ZipEntry
struct ZipEntry_t2226789352;
// Ionic.Zip.ZipFile
struct ZipFile_t3698100756;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_V3631515197.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Zip.ZipFile/<GetEnumerator>c__Iterator69
struct  U3CGetEnumeratorU3Ec__Iterator69_t2325461108  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,Ionic.Zip.ZipEntry> Ionic.Zip.ZipFile/<GetEnumerator>c__Iterator69::<$s_212>__0
	Enumerator_t3631515197  ___U3CU24s_212U3E__0_0;
	// Ionic.Zip.ZipEntry Ionic.Zip.ZipFile/<GetEnumerator>c__Iterator69::<e>__1
	ZipEntry_t2226789352 * ___U3CeU3E__1_1;
	// System.Int32 Ionic.Zip.ZipFile/<GetEnumerator>c__Iterator69::$PC
	int32_t ___U24PC_2;
	// Ionic.Zip.ZipEntry Ionic.Zip.ZipFile/<GetEnumerator>c__Iterator69::$current
	ZipEntry_t2226789352 * ___U24current_3;
	// Ionic.Zip.ZipFile Ionic.Zip.ZipFile/<GetEnumerator>c__Iterator69::<>f__this
	ZipFile_t3698100756 * ___U3CU3Ef__this_4;

public:
	inline static int32_t get_offset_of_U3CU24s_212U3E__0_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator69_t2325461108, ___U3CU24s_212U3E__0_0)); }
	inline Enumerator_t3631515197  get_U3CU24s_212U3E__0_0() const { return ___U3CU24s_212U3E__0_0; }
	inline Enumerator_t3631515197 * get_address_of_U3CU24s_212U3E__0_0() { return &___U3CU24s_212U3E__0_0; }
	inline void set_U3CU24s_212U3E__0_0(Enumerator_t3631515197  value)
	{
		___U3CU24s_212U3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CeU3E__1_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator69_t2325461108, ___U3CeU3E__1_1)); }
	inline ZipEntry_t2226789352 * get_U3CeU3E__1_1() const { return ___U3CeU3E__1_1; }
	inline ZipEntry_t2226789352 ** get_address_of_U3CeU3E__1_1() { return &___U3CeU3E__1_1; }
	inline void set_U3CeU3E__1_1(ZipEntry_t2226789352 * value)
	{
		___U3CeU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CeU3E__1_1, value);
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator69_t2325461108, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator69_t2325461108, ___U24current_3)); }
	inline ZipEntry_t2226789352 * get_U24current_3() const { return ___U24current_3; }
	inline ZipEntry_t2226789352 ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(ZipEntry_t2226789352 * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator69_t2325461108, ___U3CU3Ef__this_4)); }
	inline ZipFile_t3698100756 * get_U3CU3Ef__this_4() const { return ___U3CU3Ef__this_4; }
	inline ZipFile_t3698100756 ** get_address_of_U3CU3Ef__this_4() { return &___U3CU3Ef__this_4; }
	inline void set_U3CU3Ef__this_4(ZipFile_t3698100756 * value)
	{
		___U3CU3Ef__this_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
