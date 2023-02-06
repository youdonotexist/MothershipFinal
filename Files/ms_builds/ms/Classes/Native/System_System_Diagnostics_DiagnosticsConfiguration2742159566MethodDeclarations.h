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

// System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler
struct ElementHandler_t2742159566;
// System.Object
struct Il2CppObject;
// System.Collections.IDictionary
struct IDictionary_t1654916945;
// System.Xml.XmlNode
struct XmlNode_t3592213601;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_Xml_System_Xml_XmlNode3592213601.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ElementHandler__ctor_m132868758 (ElementHandler_t2742159566 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler::Invoke(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C"  void ElementHandler_Invoke_m1252101530 (ElementHandler_t2742159566 * __this, Il2CppObject * ___d, XmlNode_t3592213601 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ElementHandler_t2742159566(Il2CppObject* delegate, Il2CppObject * ___d, XmlNode_t3592213601 * ___node);
// System.IAsyncResult System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler::BeginInvoke(System.Collections.IDictionary,System.Xml.XmlNode,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ElementHandler_BeginInvoke_m1937105431 (ElementHandler_t2742159566 * __this, Il2CppObject * ___d, XmlNode_t3592213601 * ___node, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ElementHandler_EndInvoke_m2694289318 (ElementHandler_t2742159566 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
