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

// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t1329997280;
// System.Xml.XmlNode
struct XmlNode_t3592213601;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNode3592213601.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Xml.XmlNamedNodeMap::.ctor(System.Xml.XmlNode)
extern "C"  void XmlNamedNodeMap__ctor_m1242526720 (XmlNamedNodeMap_t1329997280 * __this, XmlNode_t3592213601 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamedNodeMap::.cctor()
extern "C"  void XmlNamedNodeMap__cctor_m659231594 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.XmlNamedNodeMap::get_NodeList()
extern "C"  ArrayList_t2121638921 * XmlNamedNodeMap_get_NodeList_m1546968860 (XmlNamedNodeMap_t1329997280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNamedNodeMap::get_Count()
extern "C"  int32_t XmlNamedNodeMap_get_Count_m73697541 (XmlNamedNodeMap_t1329997280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNamedNodeMap::GetEnumerator()
extern "C"  Il2CppObject * XmlNamedNodeMap_GetEnumerator_m3700763615 (XmlNamedNodeMap_t1329997280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::GetNamedItem(System.String)
extern "C"  XmlNode_t3592213601 * XmlNamedNodeMap_GetNamedItem_m2446113789 (XmlNamedNodeMap_t1329997280 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::GetNamedItem(System.String,System.String)
extern "C"  XmlNode_t3592213601 * XmlNamedNodeMap_GetNamedItem_m2713363833 (XmlNamedNodeMap_t1329997280 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::RemoveNamedItem(System.String)
extern "C"  XmlNode_t3592213601 * XmlNamedNodeMap_RemoveNamedItem_m592184647 (XmlNamedNodeMap_t1329997280 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::RemoveNamedItem(System.String,System.String)
extern "C"  XmlNode_t3592213601 * XmlNamedNodeMap_RemoveNamedItem_m3014845763 (XmlNamedNodeMap_t1329997280 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::SetNamedItem(System.Xml.XmlNode)
extern "C"  XmlNode_t3592213601 * XmlNamedNodeMap_SetNamedItem_m3481645174 (XmlNamedNodeMap_t1329997280 * __this, XmlNode_t3592213601 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::SetNamedItem(System.Xml.XmlNode,System.Int32,System.Boolean)
extern "C"  XmlNode_t3592213601 * XmlNamedNodeMap_SetNamedItem_m4118024508 (XmlNamedNodeMap_t1329997280 * __this, XmlNode_t3592213601 * ___node, int32_t ___pos, bool ___raiseEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.XmlNamedNodeMap::get_Nodes()
extern "C"  ArrayList_t2121638921 * XmlNamedNodeMap_get_Nodes_m3777772791 (XmlNamedNodeMap_t1329997280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
