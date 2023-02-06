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
// System.Threading.Mutex
struct Mutex_t3540010562;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextureScale
struct  TextureScale_t2944241935  : public Il2CppObject
{
public:

public:
};

struct TextureScale_t2944241935_StaticFields
{
public:
	// UnityEngine.Color[] TextureScale::texColors
	ColorU5BU5D_t3477081137* ___texColors_0;
	// UnityEngine.Color[] TextureScale::newColors
	ColorU5BU5D_t3477081137* ___newColors_1;
	// System.Int32 TextureScale::w
	int32_t ___w_2;
	// System.Single TextureScale::ratioX
	float ___ratioX_3;
	// System.Single TextureScale::ratioY
	float ___ratioY_4;
	// System.Int32 TextureScale::w2
	int32_t ___w2_5;
	// System.Int32 TextureScale::finishCount
	int32_t ___finishCount_6;
	// System.Threading.Mutex TextureScale::mutex
	Mutex_t3540010562 * ___mutex_7;

public:
	inline static int32_t get_offset_of_texColors_0() { return static_cast<int32_t>(offsetof(TextureScale_t2944241935_StaticFields, ___texColors_0)); }
	inline ColorU5BU5D_t3477081137* get_texColors_0() const { return ___texColors_0; }
	inline ColorU5BU5D_t3477081137** get_address_of_texColors_0() { return &___texColors_0; }
	inline void set_texColors_0(ColorU5BU5D_t3477081137* value)
	{
		___texColors_0 = value;
		Il2CppCodeGenWriteBarrier(&___texColors_0, value);
	}

	inline static int32_t get_offset_of_newColors_1() { return static_cast<int32_t>(offsetof(TextureScale_t2944241935_StaticFields, ___newColors_1)); }
	inline ColorU5BU5D_t3477081137* get_newColors_1() const { return ___newColors_1; }
	inline ColorU5BU5D_t3477081137** get_address_of_newColors_1() { return &___newColors_1; }
	inline void set_newColors_1(ColorU5BU5D_t3477081137* value)
	{
		___newColors_1 = value;
		Il2CppCodeGenWriteBarrier(&___newColors_1, value);
	}

	inline static int32_t get_offset_of_w_2() { return static_cast<int32_t>(offsetof(TextureScale_t2944241935_StaticFields, ___w_2)); }
	inline int32_t get_w_2() const { return ___w_2; }
	inline int32_t* get_address_of_w_2() { return &___w_2; }
	inline void set_w_2(int32_t value)
	{
		___w_2 = value;
	}

	inline static int32_t get_offset_of_ratioX_3() { return static_cast<int32_t>(offsetof(TextureScale_t2944241935_StaticFields, ___ratioX_3)); }
	inline float get_ratioX_3() const { return ___ratioX_3; }
	inline float* get_address_of_ratioX_3() { return &___ratioX_3; }
	inline void set_ratioX_3(float value)
	{
		___ratioX_3 = value;
	}

	inline static int32_t get_offset_of_ratioY_4() { return static_cast<int32_t>(offsetof(TextureScale_t2944241935_StaticFields, ___ratioY_4)); }
	inline float get_ratioY_4() const { return ___ratioY_4; }
	inline float* get_address_of_ratioY_4() { return &___ratioY_4; }
	inline void set_ratioY_4(float value)
	{
		___ratioY_4 = value;
	}

	inline static int32_t get_offset_of_w2_5() { return static_cast<int32_t>(offsetof(TextureScale_t2944241935_StaticFields, ___w2_5)); }
	inline int32_t get_w2_5() const { return ___w2_5; }
	inline int32_t* get_address_of_w2_5() { return &___w2_5; }
	inline void set_w2_5(int32_t value)
	{
		___w2_5 = value;
	}

	inline static int32_t get_offset_of_finishCount_6() { return static_cast<int32_t>(offsetof(TextureScale_t2944241935_StaticFields, ___finishCount_6)); }
	inline int32_t get_finishCount_6() const { return ___finishCount_6; }
	inline int32_t* get_address_of_finishCount_6() { return &___finishCount_6; }
	inline void set_finishCount_6(int32_t value)
	{
		___finishCount_6 = value;
	}

	inline static int32_t get_offset_of_mutex_7() { return static_cast<int32_t>(offsetof(TextureScale_t2944241935_StaticFields, ___mutex_7)); }
	inline Mutex_t3540010562 * get_mutex_7() const { return ___mutex_7; }
	inline Mutex_t3540010562 ** get_address_of_mutex_7() { return &___mutex_7; }
	inline void set_mutex_7(Mutex_t3540010562 * value)
	{
		___mutex_7 = value;
		Il2CppCodeGenWriteBarrier(&___mutex_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
