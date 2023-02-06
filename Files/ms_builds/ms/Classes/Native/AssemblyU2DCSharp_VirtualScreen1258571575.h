#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// VirtualScreen/On_ScreenResizeHandler
struct On_ScreenResizeHandler_t3030730890;

#include "AssemblyU2DCSharp_MonoSingleton_1_gen2990693741.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VirtualScreen
struct  VirtualScreen_t1258571575  : public MonoSingleton_1_t2990693741
{
public:
	// System.Single VirtualScreen::virtualWidth
	float ___virtualWidth_3;
	// System.Single VirtualScreen::virtualHeight
	float ___virtualHeight_4;
	// System.Single VirtualScreen::realWidth
	float ___realWidth_9;
	// System.Single VirtualScreen::realHeight
	float ___realHeight_10;
	// System.Single VirtualScreen::oldRealWidth
	float ___oldRealWidth_11;
	// System.Single VirtualScreen::oldRealHeight
	float ___oldRealHeight_12;

public:
	inline static int32_t get_offset_of_virtualWidth_3() { return static_cast<int32_t>(offsetof(VirtualScreen_t1258571575, ___virtualWidth_3)); }
	inline float get_virtualWidth_3() const { return ___virtualWidth_3; }
	inline float* get_address_of_virtualWidth_3() { return &___virtualWidth_3; }
	inline void set_virtualWidth_3(float value)
	{
		___virtualWidth_3 = value;
	}

	inline static int32_t get_offset_of_virtualHeight_4() { return static_cast<int32_t>(offsetof(VirtualScreen_t1258571575, ___virtualHeight_4)); }
	inline float get_virtualHeight_4() const { return ___virtualHeight_4; }
	inline float* get_address_of_virtualHeight_4() { return &___virtualHeight_4; }
	inline void set_virtualHeight_4(float value)
	{
		___virtualHeight_4 = value;
	}

	inline static int32_t get_offset_of_realWidth_9() { return static_cast<int32_t>(offsetof(VirtualScreen_t1258571575, ___realWidth_9)); }
	inline float get_realWidth_9() const { return ___realWidth_9; }
	inline float* get_address_of_realWidth_9() { return &___realWidth_9; }
	inline void set_realWidth_9(float value)
	{
		___realWidth_9 = value;
	}

	inline static int32_t get_offset_of_realHeight_10() { return static_cast<int32_t>(offsetof(VirtualScreen_t1258571575, ___realHeight_10)); }
	inline float get_realHeight_10() const { return ___realHeight_10; }
	inline float* get_address_of_realHeight_10() { return &___realHeight_10; }
	inline void set_realHeight_10(float value)
	{
		___realHeight_10 = value;
	}

	inline static int32_t get_offset_of_oldRealWidth_11() { return static_cast<int32_t>(offsetof(VirtualScreen_t1258571575, ___oldRealWidth_11)); }
	inline float get_oldRealWidth_11() const { return ___oldRealWidth_11; }
	inline float* get_address_of_oldRealWidth_11() { return &___oldRealWidth_11; }
	inline void set_oldRealWidth_11(float value)
	{
		___oldRealWidth_11 = value;
	}

	inline static int32_t get_offset_of_oldRealHeight_12() { return static_cast<int32_t>(offsetof(VirtualScreen_t1258571575, ___oldRealHeight_12)); }
	inline float get_oldRealHeight_12() const { return ___oldRealHeight_12; }
	inline float* get_address_of_oldRealHeight_12() { return &___oldRealHeight_12; }
	inline void set_oldRealHeight_12(float value)
	{
		___oldRealHeight_12 = value;
	}
};

struct VirtualScreen_t1258571575_StaticFields
{
public:
	// System.Single VirtualScreen::width
	float ___width_5;
	// System.Single VirtualScreen::height
	float ___height_6;
	// System.Single VirtualScreen::xRatio
	float ___xRatio_7;
	// System.Single VirtualScreen::yRatio
	float ___yRatio_8;
	// VirtualScreen/On_ScreenResizeHandler VirtualScreen::On_ScreenResize
	On_ScreenResizeHandler_t3030730890 * ___On_ScreenResize_13;

public:
	inline static int32_t get_offset_of_width_5() { return static_cast<int32_t>(offsetof(VirtualScreen_t1258571575_StaticFields, ___width_5)); }
	inline float get_width_5() const { return ___width_5; }
	inline float* get_address_of_width_5() { return &___width_5; }
	inline void set_width_5(float value)
	{
		___width_5 = value;
	}

	inline static int32_t get_offset_of_height_6() { return static_cast<int32_t>(offsetof(VirtualScreen_t1258571575_StaticFields, ___height_6)); }
	inline float get_height_6() const { return ___height_6; }
	inline float* get_address_of_height_6() { return &___height_6; }
	inline void set_height_6(float value)
	{
		___height_6 = value;
	}

	inline static int32_t get_offset_of_xRatio_7() { return static_cast<int32_t>(offsetof(VirtualScreen_t1258571575_StaticFields, ___xRatio_7)); }
	inline float get_xRatio_7() const { return ___xRatio_7; }
	inline float* get_address_of_xRatio_7() { return &___xRatio_7; }
	inline void set_xRatio_7(float value)
	{
		___xRatio_7 = value;
	}

	inline static int32_t get_offset_of_yRatio_8() { return static_cast<int32_t>(offsetof(VirtualScreen_t1258571575_StaticFields, ___yRatio_8)); }
	inline float get_yRatio_8() const { return ___yRatio_8; }
	inline float* get_address_of_yRatio_8() { return &___yRatio_8; }
	inline void set_yRatio_8(float value)
	{
		___yRatio_8 = value;
	}

	inline static int32_t get_offset_of_On_ScreenResize_13() { return static_cast<int32_t>(offsetof(VirtualScreen_t1258571575_StaticFields, ___On_ScreenResize_13)); }
	inline On_ScreenResizeHandler_t3030730890 * get_On_ScreenResize_13() const { return ___On_ScreenResize_13; }
	inline On_ScreenResizeHandler_t3030730890 ** get_address_of_On_ScreenResize_13() { return &___On_ScreenResize_13; }
	inline void set_On_ScreenResize_13(On_ScreenResizeHandler_t3030730890 * value)
	{
		___On_ScreenResize_13 = value;
		Il2CppCodeGenWriteBarrier(&___On_ScreenResize_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
