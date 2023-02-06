#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ScreenshotHelper/ScreenChange
struct ScreenChange_t2310935388;
// System.Collections.Generic.List`1<ShotSize>
struct List_1_t519972660;
// ShotSize
struct ShotSize_t4017980987;
// System.String
struct String_t;
// ScreenshotHelper
struct ScreenshotHelper_t273981652;
// ScreenshotHelper/PathChangeDelegate
struct PathChangeDelegate_t2571562234;
// ScreenshotHelper/DefaultsSetDelegate
struct DefaultsSetDelegate_t3097145909;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_SSHOrientation3338050248.h"
#include "mscorlib_System_Environment_SpecialFolder3826993767.h"
#include "UnityEngine_UnityEngine_KeyCode2371581209.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenshotHelper
struct  ScreenshotHelper_t273981652  : public MonoBehaviour_t3012272455
{
public:
	// ScreenshotHelper/ScreenChange ScreenshotHelper::OnScreenChanged
	ScreenChange_t2310935388 * ___OnScreenChanged_2;
	// System.Boolean ScreenshotHelper::useRenderTexture
	bool ___useRenderTexture_3;
	// SSHOrientation ScreenshotHelper::orientation
	int32_t ___orientation_4;
	// System.Collections.Generic.List`1<ShotSize> ScreenshotHelper::shotInfo
	List_1_t519972660 * ___shotInfo_5;
	// ShotSize ScreenshotHelper::maxRes
	ShotSize_t4017980987 * ___maxRes_6;
	// System.String ScreenshotHelper::savePath
	String_t* ___savePath_7;
	// System.Environment/SpecialFolder ScreenshotHelper::buildSavePathRoot
	int32_t ___buildSavePathRoot_8;
	// System.String ScreenshotHelper::buildSavePathExtra
	String_t* ___buildSavePathExtra_9;
	// System.String ScreenshotHelper::configFile
	String_t* ___configFile_10;
	// UnityEngine.KeyCode ScreenshotHelper::keyToHold
	int32_t ___keyToHold_11;
	// UnityEngine.KeyCode ScreenshotHelper::keyToPress
	int32_t ___keyToPress_12;
	// ScreenshotHelper/PathChangeDelegate ScreenshotHelper::PathChange
	PathChangeDelegate_t2571562234 * ___PathChange_14;
	// System.Boolean ScreenshotHelper::isTakingShots
	bool ___isTakingShots_15;
	// ScreenshotHelper/DefaultsSetDelegate ScreenshotHelper::DefaultsSet
	DefaultsSetDelegate_t3097145909 * ___DefaultsSet_16;

public:
	inline static int32_t get_offset_of_OnScreenChanged_2() { return static_cast<int32_t>(offsetof(ScreenshotHelper_t273981652, ___OnScreenChanged_2)); }
	inline ScreenChange_t2310935388 * get_OnScreenChanged_2() const { return ___OnScreenChanged_2; }
	inline ScreenChange_t2310935388 ** get_address_of_OnScreenChanged_2() { return &___OnScreenChanged_2; }
	inline void set_OnScreenChanged_2(ScreenChange_t2310935388 * value)
	{
		___OnScreenChanged_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnScreenChanged_2, value);
	}

	inline static int32_t get_offset_of_useRenderTexture_3() { return static_cast<int32_t>(offsetof(ScreenshotHelper_t273981652, ___useRenderTexture_3)); }
	inline bool get_useRenderTexture_3() const { return ___useRenderTexture_3; }
	inline bool* get_address_of_useRenderTexture_3() { return &___useRenderTexture_3; }
	inline void set_useRenderTexture_3(bool value)
	{
		___useRenderTexture_3 = value;
	}

	inline static int32_t get_offset_of_orientation_4() { return static_cast<int32_t>(offsetof(ScreenshotHelper_t273981652, ___orientation_4)); }
	inline int32_t get_orientation_4() const { return ___orientation_4; }
	inline int32_t* get_address_of_orientation_4() { return &___orientation_4; }
	inline void set_orientation_4(int32_t value)
	{
		___orientation_4 = value;
	}

	inline static int32_t get_offset_of_shotInfo_5() { return static_cast<int32_t>(offsetof(ScreenshotHelper_t273981652, ___shotInfo_5)); }
	inline List_1_t519972660 * get_shotInfo_5() const { return ___shotInfo_5; }
	inline List_1_t519972660 ** get_address_of_shotInfo_5() { return &___shotInfo_5; }
	inline void set_shotInfo_5(List_1_t519972660 * value)
	{
		___shotInfo_5 = value;
		Il2CppCodeGenWriteBarrier(&___shotInfo_5, value);
	}

	inline static int32_t get_offset_of_maxRes_6() { return static_cast<int32_t>(offsetof(ScreenshotHelper_t273981652, ___maxRes_6)); }
	inline ShotSize_t4017980987 * get_maxRes_6() const { return ___maxRes_6; }
	inline ShotSize_t4017980987 ** get_address_of_maxRes_6() { return &___maxRes_6; }
	inline void set_maxRes_6(ShotSize_t4017980987 * value)
	{
		___maxRes_6 = value;
		Il2CppCodeGenWriteBarrier(&___maxRes_6, value);
	}

	inline static int32_t get_offset_of_savePath_7() { return static_cast<int32_t>(offsetof(ScreenshotHelper_t273981652, ___savePath_7)); }
	inline String_t* get_savePath_7() const { return ___savePath_7; }
	inline String_t** get_address_of_savePath_7() { return &___savePath_7; }
	inline void set_savePath_7(String_t* value)
	{
		___savePath_7 = value;
		Il2CppCodeGenWriteBarrier(&___savePath_7, value);
	}

	inline static int32_t get_offset_of_buildSavePathRoot_8() { return static_cast<int32_t>(offsetof(ScreenshotHelper_t273981652, ___buildSavePathRoot_8)); }
	inline int32_t get_buildSavePathRoot_8() const { return ___buildSavePathRoot_8; }
	inline int32_t* get_address_of_buildSavePathRoot_8() { return &___buildSavePathRoot_8; }
	inline void set_buildSavePathRoot_8(int32_t value)
	{
		___buildSavePathRoot_8 = value;
	}

	inline static int32_t get_offset_of_buildSavePathExtra_9() { return static_cast<int32_t>(offsetof(ScreenshotHelper_t273981652, ___buildSavePathExtra_9)); }
	inline String_t* get_buildSavePathExtra_9() const { return ___buildSavePathExtra_9; }
	inline String_t** get_address_of_buildSavePathExtra_9() { return &___buildSavePathExtra_9; }
	inline void set_buildSavePathExtra_9(String_t* value)
	{
		___buildSavePathExtra_9 = value;
		Il2CppCodeGenWriteBarrier(&___buildSavePathExtra_9, value);
	}

	inline static int32_t get_offset_of_configFile_10() { return static_cast<int32_t>(offsetof(ScreenshotHelper_t273981652, ___configFile_10)); }
	inline String_t* get_configFile_10() const { return ___configFile_10; }
	inline String_t** get_address_of_configFile_10() { return &___configFile_10; }
	inline void set_configFile_10(String_t* value)
	{
		___configFile_10 = value;
		Il2CppCodeGenWriteBarrier(&___configFile_10, value);
	}

	inline static int32_t get_offset_of_keyToHold_11() { return static_cast<int32_t>(offsetof(ScreenshotHelper_t273981652, ___keyToHold_11)); }
	inline int32_t get_keyToHold_11() const { return ___keyToHold_11; }
	inline int32_t* get_address_of_keyToHold_11() { return &___keyToHold_11; }
	inline void set_keyToHold_11(int32_t value)
	{
		___keyToHold_11 = value;
	}

	inline static int32_t get_offset_of_keyToPress_12() { return static_cast<int32_t>(offsetof(ScreenshotHelper_t273981652, ___keyToPress_12)); }
	inline int32_t get_keyToPress_12() const { return ___keyToPress_12; }
	inline int32_t* get_address_of_keyToPress_12() { return &___keyToPress_12; }
	inline void set_keyToPress_12(int32_t value)
	{
		___keyToPress_12 = value;
	}

	inline static int32_t get_offset_of_PathChange_14() { return static_cast<int32_t>(offsetof(ScreenshotHelper_t273981652, ___PathChange_14)); }
	inline PathChangeDelegate_t2571562234 * get_PathChange_14() const { return ___PathChange_14; }
	inline PathChangeDelegate_t2571562234 ** get_address_of_PathChange_14() { return &___PathChange_14; }
	inline void set_PathChange_14(PathChangeDelegate_t2571562234 * value)
	{
		___PathChange_14 = value;
		Il2CppCodeGenWriteBarrier(&___PathChange_14, value);
	}

	inline static int32_t get_offset_of_isTakingShots_15() { return static_cast<int32_t>(offsetof(ScreenshotHelper_t273981652, ___isTakingShots_15)); }
	inline bool get_isTakingShots_15() const { return ___isTakingShots_15; }
	inline bool* get_address_of_isTakingShots_15() { return &___isTakingShots_15; }
	inline void set_isTakingShots_15(bool value)
	{
		___isTakingShots_15 = value;
	}

	inline static int32_t get_offset_of_DefaultsSet_16() { return static_cast<int32_t>(offsetof(ScreenshotHelper_t273981652, ___DefaultsSet_16)); }
	inline DefaultsSetDelegate_t3097145909 * get_DefaultsSet_16() const { return ___DefaultsSet_16; }
	inline DefaultsSetDelegate_t3097145909 ** get_address_of_DefaultsSet_16() { return &___DefaultsSet_16; }
	inline void set_DefaultsSet_16(DefaultsSetDelegate_t3097145909 * value)
	{
		___DefaultsSet_16 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultsSet_16, value);
	}
};

struct ScreenshotHelper_t273981652_StaticFields
{
public:
	// ScreenshotHelper ScreenshotHelper::_instance
	ScreenshotHelper_t273981652 * ____instance_13;

public:
	inline static int32_t get_offset_of__instance_13() { return static_cast<int32_t>(offsetof(ScreenshotHelper_t273981652_StaticFields, ____instance_13)); }
	inline ScreenshotHelper_t273981652 * get__instance_13() const { return ____instance_13; }
	inline ScreenshotHelper_t273981652 ** get_address_of__instance_13() { return &____instance_13; }
	inline void set__instance_13(ScreenshotHelper_t273981652 * value)
	{
		____instance_13 = value;
		Il2CppCodeGenWriteBarrier(&____instance_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
