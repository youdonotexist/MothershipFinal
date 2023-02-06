#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.String
struct String_t;
// System.Random
struct Random_t922188920;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CodeDom.Compiler.TempFileCollection
struct  TempFileCollection_t3384596155  : public Il2CppObject
{
public:
	// System.Collections.Hashtable System.CodeDom.Compiler.TempFileCollection::filehash
	Hashtable_t3875263730 * ___filehash_0;
	// System.String System.CodeDom.Compiler.TempFileCollection::tempdir
	String_t* ___tempdir_1;
	// System.Boolean System.CodeDom.Compiler.TempFileCollection::keepfiles
	bool ___keepfiles_2;
	// System.String System.CodeDom.Compiler.TempFileCollection::basepath
	String_t* ___basepath_3;
	// System.Random System.CodeDom.Compiler.TempFileCollection::rnd
	Random_t922188920 * ___rnd_4;
	// System.String System.CodeDom.Compiler.TempFileCollection::ownTempDir
	String_t* ___ownTempDir_5;

public:
	inline static int32_t get_offset_of_filehash_0() { return static_cast<int32_t>(offsetof(TempFileCollection_t3384596155, ___filehash_0)); }
	inline Hashtable_t3875263730 * get_filehash_0() const { return ___filehash_0; }
	inline Hashtable_t3875263730 ** get_address_of_filehash_0() { return &___filehash_0; }
	inline void set_filehash_0(Hashtable_t3875263730 * value)
	{
		___filehash_0 = value;
		Il2CppCodeGenWriteBarrier(&___filehash_0, value);
	}

	inline static int32_t get_offset_of_tempdir_1() { return static_cast<int32_t>(offsetof(TempFileCollection_t3384596155, ___tempdir_1)); }
	inline String_t* get_tempdir_1() const { return ___tempdir_1; }
	inline String_t** get_address_of_tempdir_1() { return &___tempdir_1; }
	inline void set_tempdir_1(String_t* value)
	{
		___tempdir_1 = value;
		Il2CppCodeGenWriteBarrier(&___tempdir_1, value);
	}

	inline static int32_t get_offset_of_keepfiles_2() { return static_cast<int32_t>(offsetof(TempFileCollection_t3384596155, ___keepfiles_2)); }
	inline bool get_keepfiles_2() const { return ___keepfiles_2; }
	inline bool* get_address_of_keepfiles_2() { return &___keepfiles_2; }
	inline void set_keepfiles_2(bool value)
	{
		___keepfiles_2 = value;
	}

	inline static int32_t get_offset_of_basepath_3() { return static_cast<int32_t>(offsetof(TempFileCollection_t3384596155, ___basepath_3)); }
	inline String_t* get_basepath_3() const { return ___basepath_3; }
	inline String_t** get_address_of_basepath_3() { return &___basepath_3; }
	inline void set_basepath_3(String_t* value)
	{
		___basepath_3 = value;
		Il2CppCodeGenWriteBarrier(&___basepath_3, value);
	}

	inline static int32_t get_offset_of_rnd_4() { return static_cast<int32_t>(offsetof(TempFileCollection_t3384596155, ___rnd_4)); }
	inline Random_t922188920 * get_rnd_4() const { return ___rnd_4; }
	inline Random_t922188920 ** get_address_of_rnd_4() { return &___rnd_4; }
	inline void set_rnd_4(Random_t922188920 * value)
	{
		___rnd_4 = value;
		Il2CppCodeGenWriteBarrier(&___rnd_4, value);
	}

	inline static int32_t get_offset_of_ownTempDir_5() { return static_cast<int32_t>(offsetof(TempFileCollection_t3384596155, ___ownTempDir_5)); }
	inline String_t* get_ownTempDir_5() const { return ___ownTempDir_5; }
	inline String_t** get_address_of_ownTempDir_5() { return &___ownTempDir_5; }
	inline void set_ownTempDir_5(String_t* value)
	{
		___ownTempDir_5 = value;
		Il2CppCodeGenWriteBarrier(&___ownTempDir_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
