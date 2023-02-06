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

// System.Diagnostics.DiagnosticsConfigurationHandler
struct DiagnosticsConfigurationHandler_t3378507871;
// System.Object
struct Il2CppObject;
// System.Xml.XmlNode
struct XmlNode_t3592213601;
// System.Collections.IDictionary
struct IDictionary_t1654916945;
// System.String
struct String_t;
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t4109843382;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t571717291;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_XmlNode3592213601.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Hashtable3875263730.h"
#include "System_System_Diagnostics_TraceListenerCollection4109843382.h"
#include "System_Xml_System_Xml_XmlAttributeCollection571717291.h"

// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::.ctor()
extern "C"  void DiagnosticsConfigurationHandler__ctor_m1711073693 (DiagnosticsConfigurationHandler_t3378507871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Diagnostics.DiagnosticsConfigurationHandler::Create(System.Object,System.Object,System.Xml.XmlNode)
extern "C"  Il2CppObject * DiagnosticsConfigurationHandler_Create_m2222398073 (DiagnosticsConfigurationHandler_t3378507871 * __this, Il2CppObject * ___parent, Il2CppObject * ___configContext, XmlNode_t3592213601 * ___section, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddAssertNode(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_AddAssertNode_m1324010022 (DiagnosticsConfigurationHandler_t3378507871 * __this, Il2CppObject * ___d, XmlNode_t3592213601 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddSwitchesNode(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_AddSwitchesNode_m3673133514 (DiagnosticsConfigurationHandler_t3378507871 * __this, Il2CppObject * ___d, XmlNode_t3592213601 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Diagnostics.DiagnosticsConfigurationHandler::GetSwitchValue(System.String,System.String)
extern "C"  Il2CppObject * DiagnosticsConfigurationHandler_GetSwitchValue_m1393522491 (Il2CppObject * __this /* static, unused */, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceNode(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_AddTraceNode_m364428253 (DiagnosticsConfigurationHandler_t3378507871 * __this, Il2CppObject * ___d, XmlNode_t3592213601 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceAttributes(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_AddTraceAttributes_m2866631144 (DiagnosticsConfigurationHandler_t3378507871 * __this, Il2CppObject * ___d, XmlNode_t3592213601 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceListenerCollection System.Diagnostics.DiagnosticsConfigurationHandler::GetSharedListeners(System.Collections.IDictionary)
extern "C"  TraceListenerCollection_t4109843382 * DiagnosticsConfigurationHandler_GetSharedListeners_m4292923085 (DiagnosticsConfigurationHandler_t3378507871 * __this, Il2CppObject * ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddSourcesNode(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_AddSourcesNode_m3465787722 (DiagnosticsConfigurationHandler_t3378507871 * __this, Il2CppObject * ___d, XmlNode_t3592213601 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceSource(System.Collections.IDictionary,System.Collections.Hashtable,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_AddTraceSource_m4273765700 (DiagnosticsConfigurationHandler_t3378507871 * __this, Il2CppObject * ___d, Hashtable_t3875263730 * ___sources, XmlNode_t3592213601 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceListeners(System.Collections.IDictionary,System.Xml.XmlNode,System.Diagnostics.TraceListenerCollection)
extern "C"  void DiagnosticsConfigurationHandler_AddTraceListeners_m1161991740 (DiagnosticsConfigurationHandler_t3378507871 * __this, Il2CppObject * ___d, XmlNode_t3592213601 * ___listenersNode, TraceListenerCollection_t4109843382 * ___listeners, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceListener(System.Collections.IDictionary,System.Xml.XmlNode,System.Xml.XmlAttributeCollection,System.Diagnostics.TraceListenerCollection)
extern "C"  void DiagnosticsConfigurationHandler_AddTraceListener_m2681893202 (DiagnosticsConfigurationHandler_t3378507871 * __this, Il2CppObject * ___d, XmlNode_t3592213601 * ___child, XmlAttributeCollection_t571717291 * ___attributes, TraceListenerCollection_t4109843382 * ___listeners, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::RemoveTraceListener(System.String)
extern "C"  void DiagnosticsConfigurationHandler_RemoveTraceListener_m1501878802 (DiagnosticsConfigurationHandler_t3378507871 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.DiagnosticsConfigurationHandler::GetAttribute(System.Xml.XmlAttributeCollection,System.String,System.Boolean,System.Xml.XmlNode)
extern "C"  String_t* DiagnosticsConfigurationHandler_GetAttribute_m3634657355 (DiagnosticsConfigurationHandler_t3378507871 * __this, XmlAttributeCollection_t571717291 * ___attrs, String_t* ___attr, bool ___required, XmlNode_t3592213601 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ValidateAttribute(System.String,System.String,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_ValidateAttribute_m1258132294 (DiagnosticsConfigurationHandler_t3378507871 * __this, String_t* ___attribute, String_t* ___value, XmlNode_t3592213601 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ValidateInvalidAttributes(System.Xml.XmlAttributeCollection,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_ValidateInvalidAttributes_m1133717085 (DiagnosticsConfigurationHandler_t3378507871 * __this, XmlAttributeCollection_t571717291 * ___c, XmlNode_t3592213601 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ThrowMissingAttribute(System.String,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_ThrowMissingAttribute_m3927037304 (DiagnosticsConfigurationHandler_t3378507871 * __this, String_t* ___attribute, XmlNode_t3592213601 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ThrowUnrecognizedNode(System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_ThrowUnrecognizedNode_m3274381615 (DiagnosticsConfigurationHandler_t3378507871 * __this, XmlNode_t3592213601 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ThrowUnrecognizedElement(System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_ThrowUnrecognizedElement_m2533946411 (DiagnosticsConfigurationHandler_t3378507871 * __this, XmlNode_t3592213601 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ThrowUnrecognizedAttribute(System.String,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_ThrowUnrecognizedAttribute_m3096698831 (DiagnosticsConfigurationHandler_t3378507871 * __this, String_t* ___attribute, XmlNode_t3592213601 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
