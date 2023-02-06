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

// System.Xml.XmlParserInput
struct XmlParserInput_t3311178812;
// System.IO.TextReader
struct TextReader_t1534522647;
// System.String
struct String_t;
// Mono.Xml.DTDParameterEntityDeclaration
struct DTDParameterEntityDeclaration_t2256150406;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextReader1534522647.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_Mono_Xml_DTDParameterEntityDeclaration2256150406.h"

// System.Void System.Xml.XmlParserInput::.ctor(System.IO.TextReader,System.String)
extern "C"  void XmlParserInput__ctor_m1070676826 (XmlParserInput_t3311178812 * __this, TextReader_t1534522647 * ___reader, String_t* ___baseURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput::.ctor(System.IO.TextReader,System.String,System.Int32,System.Int32)
extern "C"  void XmlParserInput__ctor_m3860804666 (XmlParserInput_t3311178812 * __this, TextReader_t1534522647 * ___reader, String_t* ___baseURI, int32_t ___line, int32_t ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput::Close()
extern "C"  void XmlParserInput_Close_m3764035949 (XmlParserInput_t3311178812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput::PushPEBuffer(Mono.Xml.DTDParameterEntityDeclaration)
extern "C"  void XmlParserInput_PushPEBuffer_m274373084 (XmlParserInput_t3311178812 * __this, DTDParameterEntityDeclaration_t2256150406 * ___pe, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::ReadSourceChar()
extern "C"  int32_t XmlParserInput_ReadSourceChar_m3742986354 (XmlParserInput_t3311178812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::PeekChar()
extern "C"  int32_t XmlParserInput_PeekChar_m455148668 (XmlParserInput_t3311178812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::ReadChar()
extern "C"  int32_t XmlParserInput_ReadChar_m4058223735 (XmlParserInput_t3311178812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserInput::get_BaseURI()
extern "C"  String_t* XmlParserInput_get_BaseURI_m2378535050 (XmlParserInput_t3311178812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlParserInput::get_HasPEBuffer()
extern "C"  bool XmlParserInput_get_HasPEBuffer_m4238977219 (XmlParserInput_t3311178812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::get_LineNumber()
extern "C"  int32_t XmlParserInput_get_LineNumber_m2726813009 (XmlParserInput_t3311178812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::get_LinePosition()
extern "C"  int32_t XmlParserInput_get_LinePosition_m2311843185 (XmlParserInput_t3311178812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlParserInput::get_AllowTextDecl()
extern "C"  bool XmlParserInput_get_AllowTextDecl_m409413236 (XmlParserInput_t3311178812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput::set_AllowTextDecl(System.Boolean)
extern "C"  void XmlParserInput_set_AllowTextDecl_m3757679343 (XmlParserInput_t3311178812 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
