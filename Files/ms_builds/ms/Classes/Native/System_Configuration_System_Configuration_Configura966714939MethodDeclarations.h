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

// System.Configuration.ConfigurationErrorsException
struct ConfigurationErrorsException_t966714939;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Exception
struct Exception_t1967233988;
// System.Xml.XmlNode
struct XmlNode_t3592213601;
// System.Xml.XmlReader
struct XmlReader_t4229084514;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Exception1967233988.h"
#include "System_Xml_System_Xml_XmlNode3592213601.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"

// System.Void System.Configuration.ConfigurationErrorsException::.ctor()
extern "C"  void ConfigurationErrorsException__ctor_m1016638077 (ConfigurationErrorsException_t966714939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String)
extern "C"  void ConfigurationErrorsException__ctor_m1643685797 (ConfigurationErrorsException_t966714939 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConfigurationErrorsException__ctor_m4273575486 (ConfigurationErrorsException_t966714939 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Exception)
extern "C"  void ConfigurationErrorsException__ctor_m3158621233 (ConfigurationErrorsException_t966714939 * __this, String_t* ___message, Exception_t1967233988 * ___inner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Xml.XmlNode)
extern "C"  void ConfigurationErrorsException__ctor_m2049587550 (ConfigurationErrorsException_t966714939 * __this, String_t* ___message, XmlNode_t3592213601 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Xml.XmlReader)
extern "C"  void ConfigurationErrorsException__ctor_m1524630781 (ConfigurationErrorsException_t966714939 * __this, String_t* ___message, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Exception,System.String,System.Int32)
extern "C"  void ConfigurationErrorsException__ctor_m359555914 (ConfigurationErrorsException_t966714939 * __this, String_t* ___message, Exception_t1967233988 * ___inner, String_t* ___filename, int32_t ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::get_BareMessage()
extern "C"  String_t* ConfigurationErrorsException_get_BareMessage_m1481301130 (ConfigurationErrorsException_t966714939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::get_Message()
extern "C"  String_t* ConfigurationErrorsException_get_Message_m1259234588 (ConfigurationErrorsException_t966714939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::GetFilename(System.Xml.XmlReader)
extern "C"  String_t* ConfigurationErrorsException_GetFilename_m3313041207 (Il2CppObject * __this /* static, unused */, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationErrorsException::GetLineNumber(System.Xml.XmlReader)
extern "C"  int32_t ConfigurationErrorsException_GetLineNumber_m411316138 (Il2CppObject * __this /* static, unused */, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::GetFilename(System.Xml.XmlNode)
extern "C"  String_t* ConfigurationErrorsException_GetFilename_m357595672 (Il2CppObject * __this /* static, unused */, XmlNode_t3592213601 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationErrorsException::GetLineNumber(System.Xml.XmlNode)
extern "C"  int32_t ConfigurationErrorsException_GetLineNumber_m3661835083 (Il2CppObject * __this /* static, unused */, XmlNode_t3592213601 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConfigurationErrorsException_GetObjectData_m3080175515 (ConfigurationErrorsException_t966714939 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
