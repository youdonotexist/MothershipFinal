#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Color[]
struct ColorU5BU5D_t3477081137;
// UnityEngine.WebCamTexture
struct WebCamTexture_t3635181805;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// UITexture
struct UITexture_t3903132647;
// System.Threading.Mutex
struct Mutex_t3540010562;

#include "AssemblyU2DCSharp_Singleton_1_gen3946892472.h"
#include "AssemblyU2DCSharp_CamCapture_Palette865742427.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CamCapture
struct  CamCapture_t3694077079  : public Singleton_1_t3946892472
{
public:
	// UnityEngine.Color[] CamCapture::selectedPalette
	ColorU5BU5D_t3477081137* ___selectedPalette_5;
	// UnityEngine.WebCamTexture CamCapture::webcamtex
	WebCamTexture_t3635181805 * ___webcamtex_6;
	// UnityEngine.Texture2D CamCapture::permOutTex
	Texture2D_t2509538522 * ___permOutTex_7;
	// UITexture CamCapture::setMat
	UITexture_t3903132647 * ___setMat_8;
	// System.Boolean CamCapture::doneOnce
	bool ___doneOnce_9;
	// System.Boolean CamCapture::processingDone
	bool ___processingDone_10;
	// System.Threading.Mutex CamCapture::mutex
	Mutex_t3540010562 * ___mutex_11;
	// UnityEngine.Color[] CamCapture::calculatedColors
	ColorU5BU5D_t3477081137* ___calculatedColors_12;
	// UnityEngine.Color[] CamCapture::defaultColors
	ColorU5BU5D_t3477081137* ___defaultColors_13;
	// System.Int32 CamCapture::_blockSize
	int32_t ____blockSize_14;
	// System.Boolean CamCapture::upContrast
	bool ___upContrast_15;
	// System.Single CamCapture::contrastUpper
	float ___contrastUpper_16;
	// System.Boolean CamCapture::upBrightness
	bool ___upBrightness_17;
	// System.Single CamCapture::brightnessUpper
	float ___brightnessUpper_18;
	// System.Boolean CamCapture::invertColors
	bool ___invertColors_19;
	// CamCapture/Palette CamCapture::palette
	int32_t ___palette_20;

public:
	inline static int32_t get_offset_of_selectedPalette_5() { return static_cast<int32_t>(offsetof(CamCapture_t3694077079, ___selectedPalette_5)); }
	inline ColorU5BU5D_t3477081137* get_selectedPalette_5() const { return ___selectedPalette_5; }
	inline ColorU5BU5D_t3477081137** get_address_of_selectedPalette_5() { return &___selectedPalette_5; }
	inline void set_selectedPalette_5(ColorU5BU5D_t3477081137* value)
	{
		___selectedPalette_5 = value;
		Il2CppCodeGenWriteBarrier(&___selectedPalette_5, value);
	}

	inline static int32_t get_offset_of_webcamtex_6() { return static_cast<int32_t>(offsetof(CamCapture_t3694077079, ___webcamtex_6)); }
	inline WebCamTexture_t3635181805 * get_webcamtex_6() const { return ___webcamtex_6; }
	inline WebCamTexture_t3635181805 ** get_address_of_webcamtex_6() { return &___webcamtex_6; }
	inline void set_webcamtex_6(WebCamTexture_t3635181805 * value)
	{
		___webcamtex_6 = value;
		Il2CppCodeGenWriteBarrier(&___webcamtex_6, value);
	}

	inline static int32_t get_offset_of_permOutTex_7() { return static_cast<int32_t>(offsetof(CamCapture_t3694077079, ___permOutTex_7)); }
	inline Texture2D_t2509538522 * get_permOutTex_7() const { return ___permOutTex_7; }
	inline Texture2D_t2509538522 ** get_address_of_permOutTex_7() { return &___permOutTex_7; }
	inline void set_permOutTex_7(Texture2D_t2509538522 * value)
	{
		___permOutTex_7 = value;
		Il2CppCodeGenWriteBarrier(&___permOutTex_7, value);
	}

	inline static int32_t get_offset_of_setMat_8() { return static_cast<int32_t>(offsetof(CamCapture_t3694077079, ___setMat_8)); }
	inline UITexture_t3903132647 * get_setMat_8() const { return ___setMat_8; }
	inline UITexture_t3903132647 ** get_address_of_setMat_8() { return &___setMat_8; }
	inline void set_setMat_8(UITexture_t3903132647 * value)
	{
		___setMat_8 = value;
		Il2CppCodeGenWriteBarrier(&___setMat_8, value);
	}

	inline static int32_t get_offset_of_doneOnce_9() { return static_cast<int32_t>(offsetof(CamCapture_t3694077079, ___doneOnce_9)); }
	inline bool get_doneOnce_9() const { return ___doneOnce_9; }
	inline bool* get_address_of_doneOnce_9() { return &___doneOnce_9; }
	inline void set_doneOnce_9(bool value)
	{
		___doneOnce_9 = value;
	}

	inline static int32_t get_offset_of_processingDone_10() { return static_cast<int32_t>(offsetof(CamCapture_t3694077079, ___processingDone_10)); }
	inline bool get_processingDone_10() const { return ___processingDone_10; }
	inline bool* get_address_of_processingDone_10() { return &___processingDone_10; }
	inline void set_processingDone_10(bool value)
	{
		___processingDone_10 = value;
	}

	inline static int32_t get_offset_of_mutex_11() { return static_cast<int32_t>(offsetof(CamCapture_t3694077079, ___mutex_11)); }
	inline Mutex_t3540010562 * get_mutex_11() const { return ___mutex_11; }
	inline Mutex_t3540010562 ** get_address_of_mutex_11() { return &___mutex_11; }
	inline void set_mutex_11(Mutex_t3540010562 * value)
	{
		___mutex_11 = value;
		Il2CppCodeGenWriteBarrier(&___mutex_11, value);
	}

	inline static int32_t get_offset_of_calculatedColors_12() { return static_cast<int32_t>(offsetof(CamCapture_t3694077079, ___calculatedColors_12)); }
	inline ColorU5BU5D_t3477081137* get_calculatedColors_12() const { return ___calculatedColors_12; }
	inline ColorU5BU5D_t3477081137** get_address_of_calculatedColors_12() { return &___calculatedColors_12; }
	inline void set_calculatedColors_12(ColorU5BU5D_t3477081137* value)
	{
		___calculatedColors_12 = value;
		Il2CppCodeGenWriteBarrier(&___calculatedColors_12, value);
	}

	inline static int32_t get_offset_of_defaultColors_13() { return static_cast<int32_t>(offsetof(CamCapture_t3694077079, ___defaultColors_13)); }
	inline ColorU5BU5D_t3477081137* get_defaultColors_13() const { return ___defaultColors_13; }
	inline ColorU5BU5D_t3477081137** get_address_of_defaultColors_13() { return &___defaultColors_13; }
	inline void set_defaultColors_13(ColorU5BU5D_t3477081137* value)
	{
		___defaultColors_13 = value;
		Il2CppCodeGenWriteBarrier(&___defaultColors_13, value);
	}

	inline static int32_t get_offset_of__blockSize_14() { return static_cast<int32_t>(offsetof(CamCapture_t3694077079, ____blockSize_14)); }
	inline int32_t get__blockSize_14() const { return ____blockSize_14; }
	inline int32_t* get_address_of__blockSize_14() { return &____blockSize_14; }
	inline void set__blockSize_14(int32_t value)
	{
		____blockSize_14 = value;
	}

	inline static int32_t get_offset_of_upContrast_15() { return static_cast<int32_t>(offsetof(CamCapture_t3694077079, ___upContrast_15)); }
	inline bool get_upContrast_15() const { return ___upContrast_15; }
	inline bool* get_address_of_upContrast_15() { return &___upContrast_15; }
	inline void set_upContrast_15(bool value)
	{
		___upContrast_15 = value;
	}

	inline static int32_t get_offset_of_contrastUpper_16() { return static_cast<int32_t>(offsetof(CamCapture_t3694077079, ___contrastUpper_16)); }
	inline float get_contrastUpper_16() const { return ___contrastUpper_16; }
	inline float* get_address_of_contrastUpper_16() { return &___contrastUpper_16; }
	inline void set_contrastUpper_16(float value)
	{
		___contrastUpper_16 = value;
	}

	inline static int32_t get_offset_of_upBrightness_17() { return static_cast<int32_t>(offsetof(CamCapture_t3694077079, ___upBrightness_17)); }
	inline bool get_upBrightness_17() const { return ___upBrightness_17; }
	inline bool* get_address_of_upBrightness_17() { return &___upBrightness_17; }
	inline void set_upBrightness_17(bool value)
	{
		___upBrightness_17 = value;
	}

	inline static int32_t get_offset_of_brightnessUpper_18() { return static_cast<int32_t>(offsetof(CamCapture_t3694077079, ___brightnessUpper_18)); }
	inline float get_brightnessUpper_18() const { return ___brightnessUpper_18; }
	inline float* get_address_of_brightnessUpper_18() { return &___brightnessUpper_18; }
	inline void set_brightnessUpper_18(float value)
	{
		___brightnessUpper_18 = value;
	}

	inline static int32_t get_offset_of_invertColors_19() { return static_cast<int32_t>(offsetof(CamCapture_t3694077079, ___invertColors_19)); }
	inline bool get_invertColors_19() const { return ___invertColors_19; }
	inline bool* get_address_of_invertColors_19() { return &___invertColors_19; }
	inline void set_invertColors_19(bool value)
	{
		___invertColors_19 = value;
	}

	inline static int32_t get_offset_of_palette_20() { return static_cast<int32_t>(offsetof(CamCapture_t3694077079, ___palette_20)); }
	inline int32_t get_palette_20() const { return ___palette_20; }
	inline int32_t* get_address_of_palette_20() { return &___palette_20; }
	inline void set_palette_20(int32_t value)
	{
		___palette_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
