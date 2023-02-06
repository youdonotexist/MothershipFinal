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
// System.Version
struct Version_t497901645;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Ionic_Zip_SelfExtractorFlavor1861780173.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ExtractExistingFileActi788829941.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Zip.SelfExtractorSaveOptions
struct  SelfExtractorSaveOptions_t3360896288  : public Il2CppObject
{
public:
	// Ionic.Zip.SelfExtractorFlavor Ionic.Zip.SelfExtractorSaveOptions::<Flavor>k__BackingField
	int32_t ___U3CFlavorU3Ek__BackingField_0;
	// System.String Ionic.Zip.SelfExtractorSaveOptions::<PostExtractCommandLine>k__BackingField
	String_t* ___U3CPostExtractCommandLineU3Ek__BackingField_1;
	// System.String Ionic.Zip.SelfExtractorSaveOptions::<DefaultExtractDirectory>k__BackingField
	String_t* ___U3CDefaultExtractDirectoryU3Ek__BackingField_2;
	// System.String Ionic.Zip.SelfExtractorSaveOptions::<IconFile>k__BackingField
	String_t* ___U3CIconFileU3Ek__BackingField_3;
	// System.Boolean Ionic.Zip.SelfExtractorSaveOptions::<Quiet>k__BackingField
	bool ___U3CQuietU3Ek__BackingField_4;
	// Ionic.Zip.ExtractExistingFileAction Ionic.Zip.SelfExtractorSaveOptions::<ExtractExistingFile>k__BackingField
	int32_t ___U3CExtractExistingFileU3Ek__BackingField_5;
	// System.Boolean Ionic.Zip.SelfExtractorSaveOptions::<RemoveUnpackedFilesAfterExecute>k__BackingField
	bool ___U3CRemoveUnpackedFilesAfterExecuteU3Ek__BackingField_6;
	// System.Version Ionic.Zip.SelfExtractorSaveOptions::<FileVersion>k__BackingField
	Version_t497901645 * ___U3CFileVersionU3Ek__BackingField_7;
	// System.String Ionic.Zip.SelfExtractorSaveOptions::<ProductVersion>k__BackingField
	String_t* ___U3CProductVersionU3Ek__BackingField_8;
	// System.String Ionic.Zip.SelfExtractorSaveOptions::<Copyright>k__BackingField
	String_t* ___U3CCopyrightU3Ek__BackingField_9;
	// System.String Ionic.Zip.SelfExtractorSaveOptions::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_10;
	// System.String Ionic.Zip.SelfExtractorSaveOptions::<ProductName>k__BackingField
	String_t* ___U3CProductNameU3Ek__BackingField_11;
	// System.String Ionic.Zip.SelfExtractorSaveOptions::<SfxExeWindowTitle>k__BackingField
	String_t* ___U3CSfxExeWindowTitleU3Ek__BackingField_12;
	// System.String Ionic.Zip.SelfExtractorSaveOptions::<AdditionalCompilerSwitches>k__BackingField
	String_t* ___U3CAdditionalCompilerSwitchesU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CFlavorU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SelfExtractorSaveOptions_t3360896288, ___U3CFlavorU3Ek__BackingField_0)); }
	inline int32_t get_U3CFlavorU3Ek__BackingField_0() const { return ___U3CFlavorU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CFlavorU3Ek__BackingField_0() { return &___U3CFlavorU3Ek__BackingField_0; }
	inline void set_U3CFlavorU3Ek__BackingField_0(int32_t value)
	{
		___U3CFlavorU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CPostExtractCommandLineU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SelfExtractorSaveOptions_t3360896288, ___U3CPostExtractCommandLineU3Ek__BackingField_1)); }
	inline String_t* get_U3CPostExtractCommandLineU3Ek__BackingField_1() const { return ___U3CPostExtractCommandLineU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CPostExtractCommandLineU3Ek__BackingField_1() { return &___U3CPostExtractCommandLineU3Ek__BackingField_1; }
	inline void set_U3CPostExtractCommandLineU3Ek__BackingField_1(String_t* value)
	{
		___U3CPostExtractCommandLineU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPostExtractCommandLineU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CDefaultExtractDirectoryU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SelfExtractorSaveOptions_t3360896288, ___U3CDefaultExtractDirectoryU3Ek__BackingField_2)); }
	inline String_t* get_U3CDefaultExtractDirectoryU3Ek__BackingField_2() const { return ___U3CDefaultExtractDirectoryU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CDefaultExtractDirectoryU3Ek__BackingField_2() { return &___U3CDefaultExtractDirectoryU3Ek__BackingField_2; }
	inline void set_U3CDefaultExtractDirectoryU3Ek__BackingField_2(String_t* value)
	{
		___U3CDefaultExtractDirectoryU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDefaultExtractDirectoryU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CIconFileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SelfExtractorSaveOptions_t3360896288, ___U3CIconFileU3Ek__BackingField_3)); }
	inline String_t* get_U3CIconFileU3Ek__BackingField_3() const { return ___U3CIconFileU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CIconFileU3Ek__BackingField_3() { return &___U3CIconFileU3Ek__BackingField_3; }
	inline void set_U3CIconFileU3Ek__BackingField_3(String_t* value)
	{
		___U3CIconFileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CIconFileU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CQuietU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SelfExtractorSaveOptions_t3360896288, ___U3CQuietU3Ek__BackingField_4)); }
	inline bool get_U3CQuietU3Ek__BackingField_4() const { return ___U3CQuietU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CQuietU3Ek__BackingField_4() { return &___U3CQuietU3Ek__BackingField_4; }
	inline void set_U3CQuietU3Ek__BackingField_4(bool value)
	{
		___U3CQuietU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CExtractExistingFileU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SelfExtractorSaveOptions_t3360896288, ___U3CExtractExistingFileU3Ek__BackingField_5)); }
	inline int32_t get_U3CExtractExistingFileU3Ek__BackingField_5() const { return ___U3CExtractExistingFileU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CExtractExistingFileU3Ek__BackingField_5() { return &___U3CExtractExistingFileU3Ek__BackingField_5; }
	inline void set_U3CExtractExistingFileU3Ek__BackingField_5(int32_t value)
	{
		___U3CExtractExistingFileU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CRemoveUnpackedFilesAfterExecuteU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SelfExtractorSaveOptions_t3360896288, ___U3CRemoveUnpackedFilesAfterExecuteU3Ek__BackingField_6)); }
	inline bool get_U3CRemoveUnpackedFilesAfterExecuteU3Ek__BackingField_6() const { return ___U3CRemoveUnpackedFilesAfterExecuteU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CRemoveUnpackedFilesAfterExecuteU3Ek__BackingField_6() { return &___U3CRemoveUnpackedFilesAfterExecuteU3Ek__BackingField_6; }
	inline void set_U3CRemoveUnpackedFilesAfterExecuteU3Ek__BackingField_6(bool value)
	{
		___U3CRemoveUnpackedFilesAfterExecuteU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CFileVersionU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SelfExtractorSaveOptions_t3360896288, ___U3CFileVersionU3Ek__BackingField_7)); }
	inline Version_t497901645 * get_U3CFileVersionU3Ek__BackingField_7() const { return ___U3CFileVersionU3Ek__BackingField_7; }
	inline Version_t497901645 ** get_address_of_U3CFileVersionU3Ek__BackingField_7() { return &___U3CFileVersionU3Ek__BackingField_7; }
	inline void set_U3CFileVersionU3Ek__BackingField_7(Version_t497901645 * value)
	{
		___U3CFileVersionU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CFileVersionU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_U3CProductVersionU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SelfExtractorSaveOptions_t3360896288, ___U3CProductVersionU3Ek__BackingField_8)); }
	inline String_t* get_U3CProductVersionU3Ek__BackingField_8() const { return ___U3CProductVersionU3Ek__BackingField_8; }
	inline String_t** get_address_of_U3CProductVersionU3Ek__BackingField_8() { return &___U3CProductVersionU3Ek__BackingField_8; }
	inline void set_U3CProductVersionU3Ek__BackingField_8(String_t* value)
	{
		___U3CProductVersionU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CProductVersionU3Ek__BackingField_8, value);
	}

	inline static int32_t get_offset_of_U3CCopyrightU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(SelfExtractorSaveOptions_t3360896288, ___U3CCopyrightU3Ek__BackingField_9)); }
	inline String_t* get_U3CCopyrightU3Ek__BackingField_9() const { return ___U3CCopyrightU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CCopyrightU3Ek__BackingField_9() { return &___U3CCopyrightU3Ek__BackingField_9; }
	inline void set_U3CCopyrightU3Ek__BackingField_9(String_t* value)
	{
		___U3CCopyrightU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCopyrightU3Ek__BackingField_9, value);
	}

	inline static int32_t get_offset_of_U3CDescriptionU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(SelfExtractorSaveOptions_t3360896288, ___U3CDescriptionU3Ek__BackingField_10)); }
	inline String_t* get_U3CDescriptionU3Ek__BackingField_10() const { return ___U3CDescriptionU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CDescriptionU3Ek__BackingField_10() { return &___U3CDescriptionU3Ek__BackingField_10; }
	inline void set_U3CDescriptionU3Ek__BackingField_10(String_t* value)
	{
		___U3CDescriptionU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDescriptionU3Ek__BackingField_10, value);
	}

	inline static int32_t get_offset_of_U3CProductNameU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(SelfExtractorSaveOptions_t3360896288, ___U3CProductNameU3Ek__BackingField_11)); }
	inline String_t* get_U3CProductNameU3Ek__BackingField_11() const { return ___U3CProductNameU3Ek__BackingField_11; }
	inline String_t** get_address_of_U3CProductNameU3Ek__BackingField_11() { return &___U3CProductNameU3Ek__BackingField_11; }
	inline void set_U3CProductNameU3Ek__BackingField_11(String_t* value)
	{
		___U3CProductNameU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CProductNameU3Ek__BackingField_11, value);
	}

	inline static int32_t get_offset_of_U3CSfxExeWindowTitleU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(SelfExtractorSaveOptions_t3360896288, ___U3CSfxExeWindowTitleU3Ek__BackingField_12)); }
	inline String_t* get_U3CSfxExeWindowTitleU3Ek__BackingField_12() const { return ___U3CSfxExeWindowTitleU3Ek__BackingField_12; }
	inline String_t** get_address_of_U3CSfxExeWindowTitleU3Ek__BackingField_12() { return &___U3CSfxExeWindowTitleU3Ek__BackingField_12; }
	inline void set_U3CSfxExeWindowTitleU3Ek__BackingField_12(String_t* value)
	{
		___U3CSfxExeWindowTitleU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSfxExeWindowTitleU3Ek__BackingField_12, value);
	}

	inline static int32_t get_offset_of_U3CAdditionalCompilerSwitchesU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(SelfExtractorSaveOptions_t3360896288, ___U3CAdditionalCompilerSwitchesU3Ek__BackingField_13)); }
	inline String_t* get_U3CAdditionalCompilerSwitchesU3Ek__BackingField_13() const { return ___U3CAdditionalCompilerSwitchesU3Ek__BackingField_13; }
	inline String_t** get_address_of_U3CAdditionalCompilerSwitchesU3Ek__BackingField_13() { return &___U3CAdditionalCompilerSwitchesU3Ek__BackingField_13; }
	inline void set_U3CAdditionalCompilerSwitchesU3Ek__BackingField_13(String_t* value)
	{
		___U3CAdditionalCompilerSwitchesU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAdditionalCompilerSwitchesU3Ek__BackingField_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
