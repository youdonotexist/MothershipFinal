#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<exBitmapFont/PageInfo>
struct List_1_t1720738038;
// System.Collections.Generic.List`1<exBitmapFont/CharInfo>
struct List_1_t2296829501;
// System.Collections.Generic.List`1<exBitmapFont/KerningInfo>
struct List_1_t1286014643;
// System.Collections.Generic.Dictionary`2<System.Int32,exBitmapFont/CharInfo>
struct Dictionary_2_t1990681315;

#include "UnityEngine_UnityEngine_ScriptableObject184905905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// exBitmapFont
struct  exBitmapFont_t3811321649  : public ScriptableObject_t184905905
{
public:
	// System.Int32 exBitmapFont::lineHeight
	int32_t ___lineHeight_2;
	// System.Int32 exBitmapFont::size
	int32_t ___size_3;
	// System.Collections.Generic.List`1<exBitmapFont/PageInfo> exBitmapFont::pageInfos
	List_1_t1720738038 * ___pageInfos_4;
	// System.Collections.Generic.List`1<exBitmapFont/CharInfo> exBitmapFont::charInfos
	List_1_t2296829501 * ___charInfos_5;
	// System.Collections.Generic.List`1<exBitmapFont/KerningInfo> exBitmapFont::kernings
	List_1_t1286014643 * ___kernings_6;
	// System.Boolean exBitmapFont::inAtlas
	bool ___inAtlas_7;
	// System.Boolean exBitmapFont::editorNeedRebuild
	bool ___editorNeedRebuild_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,exBitmapFont/CharInfo> exBitmapFont::idToCharInfo
	Dictionary_2_t1990681315 * ___idToCharInfo_9;

public:
	inline static int32_t get_offset_of_lineHeight_2() { return static_cast<int32_t>(offsetof(exBitmapFont_t3811321649, ___lineHeight_2)); }
	inline int32_t get_lineHeight_2() const { return ___lineHeight_2; }
	inline int32_t* get_address_of_lineHeight_2() { return &___lineHeight_2; }
	inline void set_lineHeight_2(int32_t value)
	{
		___lineHeight_2 = value;
	}

	inline static int32_t get_offset_of_size_3() { return static_cast<int32_t>(offsetof(exBitmapFont_t3811321649, ___size_3)); }
	inline int32_t get_size_3() const { return ___size_3; }
	inline int32_t* get_address_of_size_3() { return &___size_3; }
	inline void set_size_3(int32_t value)
	{
		___size_3 = value;
	}

	inline static int32_t get_offset_of_pageInfos_4() { return static_cast<int32_t>(offsetof(exBitmapFont_t3811321649, ___pageInfos_4)); }
	inline List_1_t1720738038 * get_pageInfos_4() const { return ___pageInfos_4; }
	inline List_1_t1720738038 ** get_address_of_pageInfos_4() { return &___pageInfos_4; }
	inline void set_pageInfos_4(List_1_t1720738038 * value)
	{
		___pageInfos_4 = value;
		Il2CppCodeGenWriteBarrier(&___pageInfos_4, value);
	}

	inline static int32_t get_offset_of_charInfos_5() { return static_cast<int32_t>(offsetof(exBitmapFont_t3811321649, ___charInfos_5)); }
	inline List_1_t2296829501 * get_charInfos_5() const { return ___charInfos_5; }
	inline List_1_t2296829501 ** get_address_of_charInfos_5() { return &___charInfos_5; }
	inline void set_charInfos_5(List_1_t2296829501 * value)
	{
		___charInfos_5 = value;
		Il2CppCodeGenWriteBarrier(&___charInfos_5, value);
	}

	inline static int32_t get_offset_of_kernings_6() { return static_cast<int32_t>(offsetof(exBitmapFont_t3811321649, ___kernings_6)); }
	inline List_1_t1286014643 * get_kernings_6() const { return ___kernings_6; }
	inline List_1_t1286014643 ** get_address_of_kernings_6() { return &___kernings_6; }
	inline void set_kernings_6(List_1_t1286014643 * value)
	{
		___kernings_6 = value;
		Il2CppCodeGenWriteBarrier(&___kernings_6, value);
	}

	inline static int32_t get_offset_of_inAtlas_7() { return static_cast<int32_t>(offsetof(exBitmapFont_t3811321649, ___inAtlas_7)); }
	inline bool get_inAtlas_7() const { return ___inAtlas_7; }
	inline bool* get_address_of_inAtlas_7() { return &___inAtlas_7; }
	inline void set_inAtlas_7(bool value)
	{
		___inAtlas_7 = value;
	}

	inline static int32_t get_offset_of_editorNeedRebuild_8() { return static_cast<int32_t>(offsetof(exBitmapFont_t3811321649, ___editorNeedRebuild_8)); }
	inline bool get_editorNeedRebuild_8() const { return ___editorNeedRebuild_8; }
	inline bool* get_address_of_editorNeedRebuild_8() { return &___editorNeedRebuild_8; }
	inline void set_editorNeedRebuild_8(bool value)
	{
		___editorNeedRebuild_8 = value;
	}

	inline static int32_t get_offset_of_idToCharInfo_9() { return static_cast<int32_t>(offsetof(exBitmapFont_t3811321649, ___idToCharInfo_9)); }
	inline Dictionary_2_t1990681315 * get_idToCharInfo_9() const { return ___idToCharInfo_9; }
	inline Dictionary_2_t1990681315 ** get_address_of_idToCharInfo_9() { return &___idToCharInfo_9; }
	inline void set_idToCharInfo_9(Dictionary_2_t1990681315 * value)
	{
		___idToCharInfo_9 = value;
		Il2CppCodeGenWriteBarrier(&___idToCharInfo_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
