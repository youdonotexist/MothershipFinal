#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;
// BMSymbol
struct BMSymbol_t1170982339;
// NGUIText/GlyphInfo
struct GlyphInfo_t3083264986;
// BetterList`1<UnityEngine.Color>
struct BetterList_1_t3085143772;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t727330505;
// BetterList`1<System.Int32>
struct BetterList_1_t49415503;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t727330504;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t1339084923;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"

// System.Void NGUIText::.cctor()
extern "C"  void NGUIText__cctor_m4241001676 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::Update()
extern "C"  void NGUIText_Update_m2154992684 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::Update(System.Boolean)
extern "C"  void NGUIText_Update_m511478947 (Il2CppObject * __this /* static, unused */, bool ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::Prepare(System.String)
extern "C"  void NGUIText_Prepare_m1944226012 (Il2CppObject * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMSymbol NGUIText::GetSymbol(System.String,System.Int32,System.Int32)
extern "C"  BMSymbol_t1170982339 * NGUIText_GetSymbol_m685573999 (Il2CppObject * __this /* static, unused */, String_t* ___text, int32_t ___index, int32_t ___textLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIText::GetGlyphWidth(System.Int32,System.Int32)
extern "C"  float NGUIText_GetGlyphWidth_m1345423811 (Il2CppObject * __this /* static, unused */, int32_t ___ch, int32_t ___prev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NGUIText/GlyphInfo NGUIText::GetGlyph(System.Int32,System.Int32)
extern "C"  GlyphInfo_t3083264986 * NGUIText_GetGlyph_m2733977333 (Il2CppObject * __this /* static, unused */, int32_t ___ch, int32_t ___prev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIText::ParseAlpha(System.String,System.Int32)
extern "C"  float NGUIText_ParseAlpha_m3051690159 (Il2CppObject * __this /* static, unused */, String_t* ___text, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUIText::ParseColor(System.String,System.Int32)
extern "C"  Color_t1588175760  NGUIText_ParseColor_m4187765423 (Il2CppObject * __this /* static, unused */, String_t* ___text, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUIText::ParseColor24(System.String,System.Int32)
extern "C"  Color_t1588175760  NGUIText_ParseColor24_m3613562801 (Il2CppObject * __this /* static, unused */, String_t* ___text, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUIText::ParseColor32(System.String,System.Int32)
extern "C"  Color_t1588175760  NGUIText_ParseColor32_m2238675534 (Il2CppObject * __this /* static, unused */, String_t* ___text, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::EncodeColor(UnityEngine.Color)
extern "C"  String_t* NGUIText_EncodeColor_m442325373 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::EncodeAlpha(System.Single)
extern "C"  String_t* NGUIText_EncodeAlpha_m1522859303 (Il2CppObject * __this /* static, unused */, float ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::EncodeColor24(UnityEngine.Color)
extern "C"  String_t* NGUIText_EncodeColor24_m2580621819 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::EncodeColor32(UnityEngine.Color)
extern "C"  String_t* NGUIText_EncodeColor32_m3609621182 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::ParseSymbol(System.String,System.Int32&)
extern "C"  bool NGUIText_ParseSymbol_m3238327233 (Il2CppObject * __this /* static, unused */, String_t* ___text, int32_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::IsHex(System.Char)
extern "C"  bool NGUIText_IsHex_m4275136545 (Il2CppObject * __this /* static, unused */, uint16_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::ParseSymbol(System.String,System.Int32&,BetterList`1<UnityEngine.Color>,System.Boolean,System.Int32&,System.Boolean&,System.Boolean&,System.Boolean&,System.Boolean&,System.Boolean&)
extern "C"  bool NGUIText_ParseSymbol_m1623512607 (Il2CppObject * __this /* static, unused */, String_t* ___text, int32_t* ___index, BetterList_1_t3085143772 * ___colors, bool ___premultiply, int32_t* ___sub, bool* ___bold, bool* ___italic, bool* ___underline, bool* ___strike, bool* ___ignoreColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::StripSymbols(System.String)
extern "C"  String_t* NGUIText_StripSymbols_m1576203641 (Il2CppObject * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::Align(BetterList`1<UnityEngine.Vector3>,System.Int32,System.Single)
extern "C"  void NGUIText_Align_m1118410640 (Il2CppObject * __this /* static, unused */, BetterList_1_t727330505 * ___verts, int32_t ___indexOffset, float ___printedWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIText::GetExactCharacterIndex(BetterList`1<UnityEngine.Vector3>,BetterList`1<System.Int32>,UnityEngine.Vector2)
extern "C"  int32_t NGUIText_GetExactCharacterIndex_m770947195 (Il2CppObject * __this /* static, unused */, BetterList_1_t727330505 * ___verts, BetterList_1_t49415503 * ___indices, Vector2_t3525329788  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIText::GetApproximateCharacterIndex(BetterList`1<UnityEngine.Vector3>,BetterList`1<System.Int32>,UnityEngine.Vector2)
extern "C"  int32_t NGUIText_GetApproximateCharacterIndex_m1823594768 (Il2CppObject * __this /* static, unused */, BetterList_1_t727330505 * ___verts, BetterList_1_t49415503 * ___indices, Vector2_t3525329788  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::IsSpace(System.Int32)
extern "C"  bool NGUIText_IsSpace_m1009034040 (Il2CppObject * __this /* static, unused */, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::EndLine(System.Text.StringBuilder&)
extern "C"  void NGUIText_EndLine_m1861431280 (Il2CppObject * __this /* static, unused */, StringBuilder_t3822575854 ** ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::ReplaceSpaceWithNewline(System.Text.StringBuilder&)
extern "C"  void NGUIText_ReplaceSpaceWithNewline_m1792467677 (Il2CppObject * __this /* static, unused */, StringBuilder_t3822575854 ** ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIText::CalculatePrintedSize(System.String)
extern "C"  Vector2_t3525329788  NGUIText_CalculatePrintedSize_m4220936829 (Il2CppObject * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIText::CalculateOffsetToFit(System.String)
extern "C"  int32_t NGUIText_CalculateOffsetToFit_m24589652 (Il2CppObject * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::GetEndOfLineThatFits(System.String)
extern "C"  String_t* NGUIText_GetEndOfLineThatFits_m3966708227 (Il2CppObject * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::WrapText(System.String,System.String&)
extern "C"  bool NGUIText_WrapText_m2792573820 (Il2CppObject * __this /* static, unused */, String_t* ___text, String_t** ___finalText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::WrapText(System.String,System.String&,System.Boolean)
extern "C"  bool NGUIText_WrapText_m1326784641 (Il2CppObject * __this /* static, unused */, String_t* ___text, String_t** ___finalText, bool ___keepCharCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::Print(System.String,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C"  void NGUIText_Print_m2432746181 (Il2CppObject * __this /* static, unused */, String_t* ___text, BetterList_1_t727330505 * ___verts, BetterList_1_t727330504 * ___uvs, BetterList_1_t1339084923 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::PrintApproximateCharacterPositions(System.String,BetterList`1<UnityEngine.Vector3>,BetterList`1<System.Int32>)
extern "C"  void NGUIText_PrintApproximateCharacterPositions_m1469820659 (Il2CppObject * __this /* static, unused */, String_t* ___text, BetterList_1_t727330505 * ___verts, BetterList_1_t49415503 * ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::PrintExactCharacterPositions(System.String,BetterList`1<UnityEngine.Vector3>,BetterList`1<System.Int32>)
extern "C"  void NGUIText_PrintExactCharacterPositions_m1845339486 (Il2CppObject * __this /* static, unused */, String_t* ___text, BetterList_1_t727330505 * ___verts, BetterList_1_t49415503 * ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::PrintCaretAndSelection(System.String,System.Int32,System.Int32,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector3>)
extern "C"  void NGUIText_PrintCaretAndSelection_m4011742568 (Il2CppObject * __this /* static, unused */, String_t* ___text, int32_t ___start, int32_t ___end, BetterList_1_t727330505 * ___caret, BetterList_1_t727330505 * ___highlight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
