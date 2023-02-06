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
// UnityEngine.Transform
struct Transform_t284553113;
// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,UnityEngine.Vector3>
struct Dictionary_2_t1592530030;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.ButtonClicker
struct  ButtonClicker_t1395250738  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean DarkTonic.MasterAudio.ButtonClicker::resizeOnClick
	bool ___resizeOnClick_4;
	// System.Boolean DarkTonic.MasterAudio.ButtonClicker::resizeClickAllSiblings
	bool ___resizeClickAllSiblings_5;
	// System.Boolean DarkTonic.MasterAudio.ButtonClicker::resizeOnHover
	bool ___resizeOnHover_6;
	// System.Boolean DarkTonic.MasterAudio.ButtonClicker::resizeHoverAllSiblings
	bool ___resizeHoverAllSiblings_7;
	// System.String DarkTonic.MasterAudio.ButtonClicker::mouseDownSound
	String_t* ___mouseDownSound_8;
	// System.String DarkTonic.MasterAudio.ButtonClicker::mouseUpSound
	String_t* ___mouseUpSound_9;
	// System.String DarkTonic.MasterAudio.ButtonClicker::mouseClickSound
	String_t* ___mouseClickSound_10;
	// System.String DarkTonic.MasterAudio.ButtonClicker::mouseOverSound
	String_t* ___mouseOverSound_11;
	// System.String DarkTonic.MasterAudio.ButtonClicker::mouseOutSound
	String_t* ___mouseOutSound_12;
	// UnityEngine.Vector3 DarkTonic.MasterAudio.ButtonClicker::_originalSize
	Vector3_t3525329789  ____originalSize_13;
	// UnityEngine.Vector3 DarkTonic.MasterAudio.ButtonClicker::_smallerSize
	Vector3_t3525329789  ____smallerSize_14;
	// UnityEngine.Vector3 DarkTonic.MasterAudio.ButtonClicker::_largerSize
	Vector3_t3525329789  ____largerSize_15;
	// UnityEngine.Transform DarkTonic.MasterAudio.ButtonClicker::_trans
	Transform_t284553113 * ____trans_16;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,UnityEngine.Vector3> DarkTonic.MasterAudio.ButtonClicker::_siblingClickScaleByTransform
	Dictionary_2_t1592530030 * ____siblingClickScaleByTransform_17;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,UnityEngine.Vector3> DarkTonic.MasterAudio.ButtonClicker::_siblingHoverScaleByTransform
	Dictionary_2_t1592530030 * ____siblingHoverScaleByTransform_18;

public:
	inline static int32_t get_offset_of_resizeOnClick_4() { return static_cast<int32_t>(offsetof(ButtonClicker_t1395250738, ___resizeOnClick_4)); }
	inline bool get_resizeOnClick_4() const { return ___resizeOnClick_4; }
	inline bool* get_address_of_resizeOnClick_4() { return &___resizeOnClick_4; }
	inline void set_resizeOnClick_4(bool value)
	{
		___resizeOnClick_4 = value;
	}

	inline static int32_t get_offset_of_resizeClickAllSiblings_5() { return static_cast<int32_t>(offsetof(ButtonClicker_t1395250738, ___resizeClickAllSiblings_5)); }
	inline bool get_resizeClickAllSiblings_5() const { return ___resizeClickAllSiblings_5; }
	inline bool* get_address_of_resizeClickAllSiblings_5() { return &___resizeClickAllSiblings_5; }
	inline void set_resizeClickAllSiblings_5(bool value)
	{
		___resizeClickAllSiblings_5 = value;
	}

	inline static int32_t get_offset_of_resizeOnHover_6() { return static_cast<int32_t>(offsetof(ButtonClicker_t1395250738, ___resizeOnHover_6)); }
	inline bool get_resizeOnHover_6() const { return ___resizeOnHover_6; }
	inline bool* get_address_of_resizeOnHover_6() { return &___resizeOnHover_6; }
	inline void set_resizeOnHover_6(bool value)
	{
		___resizeOnHover_6 = value;
	}

	inline static int32_t get_offset_of_resizeHoverAllSiblings_7() { return static_cast<int32_t>(offsetof(ButtonClicker_t1395250738, ___resizeHoverAllSiblings_7)); }
	inline bool get_resizeHoverAllSiblings_7() const { return ___resizeHoverAllSiblings_7; }
	inline bool* get_address_of_resizeHoverAllSiblings_7() { return &___resizeHoverAllSiblings_7; }
	inline void set_resizeHoverAllSiblings_7(bool value)
	{
		___resizeHoverAllSiblings_7 = value;
	}

	inline static int32_t get_offset_of_mouseDownSound_8() { return static_cast<int32_t>(offsetof(ButtonClicker_t1395250738, ___mouseDownSound_8)); }
	inline String_t* get_mouseDownSound_8() const { return ___mouseDownSound_8; }
	inline String_t** get_address_of_mouseDownSound_8() { return &___mouseDownSound_8; }
	inline void set_mouseDownSound_8(String_t* value)
	{
		___mouseDownSound_8 = value;
		Il2CppCodeGenWriteBarrier(&___mouseDownSound_8, value);
	}

	inline static int32_t get_offset_of_mouseUpSound_9() { return static_cast<int32_t>(offsetof(ButtonClicker_t1395250738, ___mouseUpSound_9)); }
	inline String_t* get_mouseUpSound_9() const { return ___mouseUpSound_9; }
	inline String_t** get_address_of_mouseUpSound_9() { return &___mouseUpSound_9; }
	inline void set_mouseUpSound_9(String_t* value)
	{
		___mouseUpSound_9 = value;
		Il2CppCodeGenWriteBarrier(&___mouseUpSound_9, value);
	}

	inline static int32_t get_offset_of_mouseClickSound_10() { return static_cast<int32_t>(offsetof(ButtonClicker_t1395250738, ___mouseClickSound_10)); }
	inline String_t* get_mouseClickSound_10() const { return ___mouseClickSound_10; }
	inline String_t** get_address_of_mouseClickSound_10() { return &___mouseClickSound_10; }
	inline void set_mouseClickSound_10(String_t* value)
	{
		___mouseClickSound_10 = value;
		Il2CppCodeGenWriteBarrier(&___mouseClickSound_10, value);
	}

	inline static int32_t get_offset_of_mouseOverSound_11() { return static_cast<int32_t>(offsetof(ButtonClicker_t1395250738, ___mouseOverSound_11)); }
	inline String_t* get_mouseOverSound_11() const { return ___mouseOverSound_11; }
	inline String_t** get_address_of_mouseOverSound_11() { return &___mouseOverSound_11; }
	inline void set_mouseOverSound_11(String_t* value)
	{
		___mouseOverSound_11 = value;
		Il2CppCodeGenWriteBarrier(&___mouseOverSound_11, value);
	}

	inline static int32_t get_offset_of_mouseOutSound_12() { return static_cast<int32_t>(offsetof(ButtonClicker_t1395250738, ___mouseOutSound_12)); }
	inline String_t* get_mouseOutSound_12() const { return ___mouseOutSound_12; }
	inline String_t** get_address_of_mouseOutSound_12() { return &___mouseOutSound_12; }
	inline void set_mouseOutSound_12(String_t* value)
	{
		___mouseOutSound_12 = value;
		Il2CppCodeGenWriteBarrier(&___mouseOutSound_12, value);
	}

	inline static int32_t get_offset_of__originalSize_13() { return static_cast<int32_t>(offsetof(ButtonClicker_t1395250738, ____originalSize_13)); }
	inline Vector3_t3525329789  get__originalSize_13() const { return ____originalSize_13; }
	inline Vector3_t3525329789 * get_address_of__originalSize_13() { return &____originalSize_13; }
	inline void set__originalSize_13(Vector3_t3525329789  value)
	{
		____originalSize_13 = value;
	}

	inline static int32_t get_offset_of__smallerSize_14() { return static_cast<int32_t>(offsetof(ButtonClicker_t1395250738, ____smallerSize_14)); }
	inline Vector3_t3525329789  get__smallerSize_14() const { return ____smallerSize_14; }
	inline Vector3_t3525329789 * get_address_of__smallerSize_14() { return &____smallerSize_14; }
	inline void set__smallerSize_14(Vector3_t3525329789  value)
	{
		____smallerSize_14 = value;
	}

	inline static int32_t get_offset_of__largerSize_15() { return static_cast<int32_t>(offsetof(ButtonClicker_t1395250738, ____largerSize_15)); }
	inline Vector3_t3525329789  get__largerSize_15() const { return ____largerSize_15; }
	inline Vector3_t3525329789 * get_address_of__largerSize_15() { return &____largerSize_15; }
	inline void set__largerSize_15(Vector3_t3525329789  value)
	{
		____largerSize_15 = value;
	}

	inline static int32_t get_offset_of__trans_16() { return static_cast<int32_t>(offsetof(ButtonClicker_t1395250738, ____trans_16)); }
	inline Transform_t284553113 * get__trans_16() const { return ____trans_16; }
	inline Transform_t284553113 ** get_address_of__trans_16() { return &____trans_16; }
	inline void set__trans_16(Transform_t284553113 * value)
	{
		____trans_16 = value;
		Il2CppCodeGenWriteBarrier(&____trans_16, value);
	}

	inline static int32_t get_offset_of__siblingClickScaleByTransform_17() { return static_cast<int32_t>(offsetof(ButtonClicker_t1395250738, ____siblingClickScaleByTransform_17)); }
	inline Dictionary_2_t1592530030 * get__siblingClickScaleByTransform_17() const { return ____siblingClickScaleByTransform_17; }
	inline Dictionary_2_t1592530030 ** get_address_of__siblingClickScaleByTransform_17() { return &____siblingClickScaleByTransform_17; }
	inline void set__siblingClickScaleByTransform_17(Dictionary_2_t1592530030 * value)
	{
		____siblingClickScaleByTransform_17 = value;
		Il2CppCodeGenWriteBarrier(&____siblingClickScaleByTransform_17, value);
	}

	inline static int32_t get_offset_of__siblingHoverScaleByTransform_18() { return static_cast<int32_t>(offsetof(ButtonClicker_t1395250738, ____siblingHoverScaleByTransform_18)); }
	inline Dictionary_2_t1592530030 * get__siblingHoverScaleByTransform_18() const { return ____siblingHoverScaleByTransform_18; }
	inline Dictionary_2_t1592530030 ** get_address_of__siblingHoverScaleByTransform_18() { return &____siblingHoverScaleByTransform_18; }
	inline void set__siblingHoverScaleByTransform_18(Dictionary_2_t1592530030 * value)
	{
		____siblingHoverScaleByTransform_18 = value;
		Il2CppCodeGenWriteBarrier(&____siblingHoverScaleByTransform_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
