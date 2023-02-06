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

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// exAtlas/Element
struct  Element_t1816284  : public Il2CppObject
{
public:
	// System.String exAtlas/Element::name
	String_t* ___name_0;
	// System.Int32 exAtlas/Element::originalWidth
	int32_t ___originalWidth_1;
	// System.Int32 exAtlas/Element::originalHeight
	int32_t ___originalHeight_2;
	// UnityEngine.Rect exAtlas/Element::trimRect
	Rect_t1525428817  ___trimRect_3;
	// UnityEngine.Rect exAtlas/Element::coords
	Rect_t1525428817  ___coords_4;
	// System.Boolean exAtlas/Element::rotated
	bool ___rotated_5;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Element_t1816284, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_originalWidth_1() { return static_cast<int32_t>(offsetof(Element_t1816284, ___originalWidth_1)); }
	inline int32_t get_originalWidth_1() const { return ___originalWidth_1; }
	inline int32_t* get_address_of_originalWidth_1() { return &___originalWidth_1; }
	inline void set_originalWidth_1(int32_t value)
	{
		___originalWidth_1 = value;
	}

	inline static int32_t get_offset_of_originalHeight_2() { return static_cast<int32_t>(offsetof(Element_t1816284, ___originalHeight_2)); }
	inline int32_t get_originalHeight_2() const { return ___originalHeight_2; }
	inline int32_t* get_address_of_originalHeight_2() { return &___originalHeight_2; }
	inline void set_originalHeight_2(int32_t value)
	{
		___originalHeight_2 = value;
	}

	inline static int32_t get_offset_of_trimRect_3() { return static_cast<int32_t>(offsetof(Element_t1816284, ___trimRect_3)); }
	inline Rect_t1525428817  get_trimRect_3() const { return ___trimRect_3; }
	inline Rect_t1525428817 * get_address_of_trimRect_3() { return &___trimRect_3; }
	inline void set_trimRect_3(Rect_t1525428817  value)
	{
		___trimRect_3 = value;
	}

	inline static int32_t get_offset_of_coords_4() { return static_cast<int32_t>(offsetof(Element_t1816284, ___coords_4)); }
	inline Rect_t1525428817  get_coords_4() const { return ___coords_4; }
	inline Rect_t1525428817 * get_address_of_coords_4() { return &___coords_4; }
	inline void set_coords_4(Rect_t1525428817  value)
	{
		___coords_4 = value;
	}

	inline static int32_t get_offset_of_rotated_5() { return static_cast<int32_t>(offsetof(Element_t1816284, ___rotated_5)); }
	inline bool get_rotated_5() const { return ___rotated_5; }
	inline bool* get_address_of_rotated_5() { return &___rotated_5; }
	inline void set_rotated_5(bool value)
	{
		___rotated_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
