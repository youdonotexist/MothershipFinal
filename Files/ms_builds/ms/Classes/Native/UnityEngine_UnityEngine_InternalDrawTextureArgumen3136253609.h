#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t1769722184;
// UnityEngine.Material
struct Material_t1886596500;

#include "mscorlib_System_ValueType4014882752.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_Color324137084207.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.InternalDrawTextureArguments
struct  InternalDrawTextureArguments_t3136253609 
{
public:
	// UnityEngine.Rect UnityEngine.InternalDrawTextureArguments::screenRect
	Rect_t1525428817  ___screenRect_0;
	// UnityEngine.Texture UnityEngine.InternalDrawTextureArguments::texture
	Texture_t1769722184 * ___texture_1;
	// UnityEngine.Rect UnityEngine.InternalDrawTextureArguments::sourceRect
	Rect_t1525428817  ___sourceRect_2;
	// System.Int32 UnityEngine.InternalDrawTextureArguments::leftBorder
	int32_t ___leftBorder_3;
	// System.Int32 UnityEngine.InternalDrawTextureArguments::rightBorder
	int32_t ___rightBorder_4;
	// System.Int32 UnityEngine.InternalDrawTextureArguments::topBorder
	int32_t ___topBorder_5;
	// System.Int32 UnityEngine.InternalDrawTextureArguments::bottomBorder
	int32_t ___bottomBorder_6;
	// UnityEngine.Color32 UnityEngine.InternalDrawTextureArguments::color
	Color32_t4137084207  ___color_7;
	// UnityEngine.Material UnityEngine.InternalDrawTextureArguments::mat
	Material_t1886596500 * ___mat_8;

public:
	inline static int32_t get_offset_of_screenRect_0() { return static_cast<int32_t>(offsetof(InternalDrawTextureArguments_t3136253609, ___screenRect_0)); }
	inline Rect_t1525428817  get_screenRect_0() const { return ___screenRect_0; }
	inline Rect_t1525428817 * get_address_of_screenRect_0() { return &___screenRect_0; }
	inline void set_screenRect_0(Rect_t1525428817  value)
	{
		___screenRect_0 = value;
	}

	inline static int32_t get_offset_of_texture_1() { return static_cast<int32_t>(offsetof(InternalDrawTextureArguments_t3136253609, ___texture_1)); }
	inline Texture_t1769722184 * get_texture_1() const { return ___texture_1; }
	inline Texture_t1769722184 ** get_address_of_texture_1() { return &___texture_1; }
	inline void set_texture_1(Texture_t1769722184 * value)
	{
		___texture_1 = value;
		Il2CppCodeGenWriteBarrier(&___texture_1, value);
	}

	inline static int32_t get_offset_of_sourceRect_2() { return static_cast<int32_t>(offsetof(InternalDrawTextureArguments_t3136253609, ___sourceRect_2)); }
	inline Rect_t1525428817  get_sourceRect_2() const { return ___sourceRect_2; }
	inline Rect_t1525428817 * get_address_of_sourceRect_2() { return &___sourceRect_2; }
	inline void set_sourceRect_2(Rect_t1525428817  value)
	{
		___sourceRect_2 = value;
	}

	inline static int32_t get_offset_of_leftBorder_3() { return static_cast<int32_t>(offsetof(InternalDrawTextureArguments_t3136253609, ___leftBorder_3)); }
	inline int32_t get_leftBorder_3() const { return ___leftBorder_3; }
	inline int32_t* get_address_of_leftBorder_3() { return &___leftBorder_3; }
	inline void set_leftBorder_3(int32_t value)
	{
		___leftBorder_3 = value;
	}

	inline static int32_t get_offset_of_rightBorder_4() { return static_cast<int32_t>(offsetof(InternalDrawTextureArguments_t3136253609, ___rightBorder_4)); }
	inline int32_t get_rightBorder_4() const { return ___rightBorder_4; }
	inline int32_t* get_address_of_rightBorder_4() { return &___rightBorder_4; }
	inline void set_rightBorder_4(int32_t value)
	{
		___rightBorder_4 = value;
	}

	inline static int32_t get_offset_of_topBorder_5() { return static_cast<int32_t>(offsetof(InternalDrawTextureArguments_t3136253609, ___topBorder_5)); }
	inline int32_t get_topBorder_5() const { return ___topBorder_5; }
	inline int32_t* get_address_of_topBorder_5() { return &___topBorder_5; }
	inline void set_topBorder_5(int32_t value)
	{
		___topBorder_5 = value;
	}

	inline static int32_t get_offset_of_bottomBorder_6() { return static_cast<int32_t>(offsetof(InternalDrawTextureArguments_t3136253609, ___bottomBorder_6)); }
	inline int32_t get_bottomBorder_6() const { return ___bottomBorder_6; }
	inline int32_t* get_address_of_bottomBorder_6() { return &___bottomBorder_6; }
	inline void set_bottomBorder_6(int32_t value)
	{
		___bottomBorder_6 = value;
	}

	inline static int32_t get_offset_of_color_7() { return static_cast<int32_t>(offsetof(InternalDrawTextureArguments_t3136253609, ___color_7)); }
	inline Color32_t4137084207  get_color_7() const { return ___color_7; }
	inline Color32_t4137084207 * get_address_of_color_7() { return &___color_7; }
	inline void set_color_7(Color32_t4137084207  value)
	{
		___color_7 = value;
	}

	inline static int32_t get_offset_of_mat_8() { return static_cast<int32_t>(offsetof(InternalDrawTextureArguments_t3136253609, ___mat_8)); }
	inline Material_t1886596500 * get_mat_8() const { return ___mat_8; }
	inline Material_t1886596500 ** get_address_of_mat_8() { return &___mat_8; }
	inline void set_mat_8(Material_t1886596500 * value)
	{
		___mat_8 = value;
		Il2CppCodeGenWriteBarrier(&___mat_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
