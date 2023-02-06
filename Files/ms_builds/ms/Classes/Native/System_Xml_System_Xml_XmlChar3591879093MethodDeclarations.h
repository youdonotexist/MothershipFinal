﻿#pragma once

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
// System.Char[]
struct CharU5BU5D_t3416858730;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Xml.XmlChar::.cctor()
extern "C"  void XmlChar__cctor_m502262015 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsWhitespace(System.Int32)
extern "C"  bool XmlChar_IsWhitespace_m1427848566 (Il2CppObject * __this /* static, unused */, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsWhitespace(System.String)
extern "C"  bool XmlChar_IsWhitespace_m1770331005 (Il2CppObject * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlChar::IndexOfNonWhitespace(System.String)
extern "C"  int32_t XmlChar_IndexOfNonWhitespace_m3723964425 (Il2CppObject * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsFirstNameChar(System.Int32)
extern "C"  bool XmlChar_IsFirstNameChar_m3587024924 (Il2CppObject * __this /* static, unused */, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsInvalid(System.Int32)
extern "C"  bool XmlChar_IsInvalid_m3338941186 (Il2CppObject * __this /* static, unused */, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlChar::IndexOfInvalid(System.String,System.Boolean)
extern "C"  int32_t XmlChar_IndexOfInvalid_m4168025825 (Il2CppObject * __this /* static, unused */, String_t* ___s, bool ___allowSurrogate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlChar::IndexOfInvalid(System.Char[],System.Int32,System.Int32,System.Boolean)
extern "C"  int32_t XmlChar_IndexOfInvalid_m1770320104 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___s, int32_t ___start, int32_t ___length, bool ___allowSurrogate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsNameChar(System.Int32)
extern "C"  bool XmlChar_IsNameChar_m1569088058 (Il2CppObject * __this /* static, unused */, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsNCNameChar(System.Int32)
extern "C"  bool XmlChar_IsNCNameChar_m304840815 (Il2CppObject * __this /* static, unused */, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsName(System.String)
extern "C"  bool XmlChar_IsName_m2902214767 (Il2CppObject * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsNCName(System.String)
extern "C"  bool XmlChar_IsNCName_m618520154 (Il2CppObject * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsNmToken(System.String)
extern "C"  bool XmlChar_IsNmToken_m218806158 (Il2CppObject * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsPubidChar(System.Int32)
extern "C"  bool XmlChar_IsPubidChar_m2010542809 (Il2CppObject * __this /* static, unused */, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsValidIANAEncoding(System.String)
extern "C"  bool XmlChar_IsValidIANAEncoding_m2400640270 (Il2CppObject * __this /* static, unused */, String_t* ___ianaEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlChar::GetPredefinedEntity(System.String)
extern "C"  int32_t XmlChar_GetPredefinedEntity_m4157892537 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
