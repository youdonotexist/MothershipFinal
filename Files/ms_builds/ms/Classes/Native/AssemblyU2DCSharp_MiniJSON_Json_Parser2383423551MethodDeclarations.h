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

// MiniJSON.Json/Parser
struct Parser_t2383423552;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2474804324;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t1634065389;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_MiniJSON_Json_Parser_TOKEN80003545.h"

// System.Void MiniJSON.Json/Parser::.ctor(System.String)
extern "C"  void Parser__ctor_m4150425246 (Parser_t2383423552 * __this, String_t* ___jsonString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MiniJSON.Json/Parser::Parse(System.String)
extern "C"  Il2CppObject * Parser_Parse_m4289381794 (Il2CppObject * __this /* static, unused */, String_t* ___jsonString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MiniJSON.Json/Parser::Dispose()
extern "C"  void Parser_Dispose_m831110689 (Parser_t2383423552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> MiniJSON.Json/Parser::ParseObject()
extern "C"  Dictionary_2_t2474804324 * Parser_ParseObject_m2356282232 (Parser_t2383423552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> MiniJSON.Json/Parser::ParseArray()
extern "C"  List_1_t1634065389 * Parser_ParseArray_m558728805 (Parser_t2383423552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MiniJSON.Json/Parser::ParseValue()
extern "C"  Il2CppObject * Parser_ParseValue_m817916179 (Parser_t2383423552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MiniJSON.Json/Parser::ParseByToken(MiniJSON.Json/Parser/TOKEN)
extern "C"  Il2CppObject * Parser_ParseByToken_m2731340803 (Parser_t2383423552 * __this, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MiniJSON.Json/Parser::ParseString()
extern "C"  String_t* Parser_ParseString_m3005927907 (Parser_t2383423552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MiniJSON.Json/Parser::ParseNumber()
extern "C"  Il2CppObject * Parser_ParseNumber_m3404342089 (Parser_t2383423552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MiniJSON.Json/Parser::EatWhitespace()
extern "C"  void Parser_EatWhitespace_m876876215 (Parser_t2383423552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char MiniJSON.Json/Parser::get_PeekChar()
extern "C"  uint16_t Parser_get_PeekChar_m2879475192 (Parser_t2383423552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char MiniJSON.Json/Parser::get_NextChar()
extern "C"  uint16_t Parser_get_NextChar_m1423758736 (Parser_t2383423552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MiniJSON.Json/Parser::get_NextWord()
extern "C"  String_t* Parser_get_NextWord_m2308079977 (Parser_t2383423552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MiniJSON.Json/Parser/TOKEN MiniJSON.Json/Parser::get_NextToken()
extern "C"  int32_t Parser_get_NextToken_m3970705443 (Parser_t2383423552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
