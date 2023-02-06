#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// System.Xml.XmlWhitespace
struct XmlWhitespace_t2187161500;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t3705263098;
// System.Xml.XmlNode
struct XmlNode_t3592213601;
// System.Xml.XmlWriter
struct XmlWriter_t89522450;
// System.Xml.XmlReader
struct XmlReader_t4229084514;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "System_Xml_System_Xml_XmlWhitespace2187161500.h"
#include "System_Xml_System_Xml_XmlWhitespace2187161500MethodDeclarations.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_XmlDocument3705263098.h"
#include "mscorlib_System_Void2779279689.h"
#include "System_Xml_System_Xml_XmlCharacterData3253358980MethodDeclarations.h"
#include "System_Xml_System_Xml_XmlNodeType3966624571.h"
#include "System_Xml_System_Xml_XmlCharacterData3253358980.h"
#include "System_Xml_System_Xml_XmlChar3591879093MethodDeclarations.h"
#include "mscorlib_System_ArgumentException124305799MethodDeclarations.h"
#include "mscorlib_System_Boolean211005341.h"
#include "mscorlib_System_ArgumentException124305799.h"
#include "System_Xml_System_Xml_XmlNode3592213601.h"
#include "System_Xml_System_Xml_XmlNode3592213601MethodDeclarations.h"
#include "System_Xml_System_Xml_XmlWriter89522450.h"
#include "System_Xml_System_Xml_XmlWriter89522450MethodDeclarations.h"
#include "mscorlib_System_Object837106420MethodDeclarations.h"
#include "System_Xml_System_Xml_XmlSpace3747690775.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_System_Xml_XmlReader4229084514MethodDeclarations.h"
#include "mscorlib_System_String968488902MethodDeclarations.h"
#include "mscorlib_System_Int322847414787.h"
#include "System_Xml_System_Xml_XmlException3490696160MethodDeclarations.h"
#include "System_Xml_System_Xml_ReadState457987651.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_XmlException3490696160.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlWhitespace::.ctor(System.String,System.Xml.XmlDocument)
extern "C"  void XmlWhitespace__ctor_m1787065039 (XmlWhitespace_t2187161500 * __this, String_t* ___strData, XmlDocument_t3705263098 * ___doc, const MethodInfo* method)
{
	{
		String_t* L_0 = ___strData;
		XmlDocument_t3705263098 * L_1 = ___doc;
		XmlCharacterData__ctor_m2021947511(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.XmlWhitespace::get_LocalName()
extern Il2CppCodeGenString* _stringLiteral1808123616;
extern const uint32_t XmlWhitespace_get_LocalName_m1385202671_MetadataUsageId;
extern "C"  String_t* XmlWhitespace_get_LocalName_m1385202671 (XmlWhitespace_t2187161500 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (XmlWhitespace_get_LocalName_m1385202671_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		return _stringLiteral1808123616;
	}
}
// System.String System.Xml.XmlWhitespace::get_Name()
extern Il2CppCodeGenString* _stringLiteral1808123616;
extern const uint32_t XmlWhitespace_get_Name_m3985233396_MetadataUsageId;
extern "C"  String_t* XmlWhitespace_get_Name_m3985233396 (XmlWhitespace_t2187161500 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (XmlWhitespace_get_Name_m3985233396_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		return _stringLiteral1808123616;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlWhitespace::get_NodeType()
extern "C"  int32_t XmlWhitespace_get_NodeType_m3606704758 (XmlWhitespace_t2187161500 * __this, const MethodInfo* method)
{
	{
		return (int32_t)(((int32_t)13));
	}
}
// System.String System.Xml.XmlWhitespace::get_Value()
extern "C"  String_t* XmlWhitespace_get_Value_m1792857610 (XmlWhitespace_t2187161500 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(37 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		return L_0;
	}
}
// System.Void System.Xml.XmlWhitespace::set_Value(System.String)
extern TypeInfo* XmlChar_t3591879093_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t124305799_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral612912714;
extern const uint32_t XmlWhitespace_set_Value_m1818473929_MetadataUsageId;
extern "C"  void XmlWhitespace_set_Value_m1818473929 (XmlWhitespace_t2187161500 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (XmlWhitespace_set_Value_m1818473929_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t3591879093_il2cpp_TypeInfo_var);
		bool L_1 = XmlChar_IsWhitespace_m1770331005(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t124305799 * L_2 = (ArgumentException_t124305799 *)il2cpp_codegen_object_new(ArgumentException_t124305799_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3544856547(L_2, _stringLiteral612912714, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0016:
	{
		String_t* L_3 = ___value;
		VirtActionInvoker1< String_t* >::Invoke(38 /* System.Void System.Xml.XmlCharacterData::set_Data(System.String) */, __this, L_3);
		return;
	}
}
// System.Xml.XmlNode System.Xml.XmlWhitespace::get_ParentNode()
extern "C"  XmlNode_t3592213601 * XmlWhitespace_get_ParentNode_m423937856 (XmlWhitespace_t2187161500 * __this, const MethodInfo* method)
{
	{
		XmlNode_t3592213601 * L_0 = XmlNode_get_ParentNode_m33805637(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Xml.XmlNode System.Xml.XmlWhitespace::CloneNode(System.Boolean)
extern TypeInfo* XmlWhitespace_t2187161500_il2cpp_TypeInfo_var;
extern const uint32_t XmlWhitespace_CloneNode_m1410926029_MetadataUsageId;
extern "C"  XmlNode_t3592213601 * XmlWhitespace_CloneNode_m1410926029 (XmlWhitespace_t2187161500 * __this, bool ___deep, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (XmlWhitespace_CloneNode_m1410926029_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(37 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		XmlDocument_t3705263098 * L_1 = VirtFuncInvoker0< XmlDocument_t3705263098 * >::Invoke(20 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		XmlWhitespace_t2187161500 * L_2 = (XmlWhitespace_t2187161500 *)il2cpp_codegen_object_new(XmlWhitespace_t2187161500_il2cpp_TypeInfo_var);
		XmlWhitespace__ctor_m1787065039(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.Xml.XmlWriter::.ctor()
extern "C"  void XmlWriter__ctor_m2911908785 (XmlWriter_t89522450 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWriter::System.IDisposable.Dispose()
extern "C"  void XmlWriter_System_IDisposable_Dispose_m3193799822 (XmlWriter_t89522450 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(8 /* System.Void System.Xml.XmlWriter::Dispose(System.Boolean) */, __this, (bool)0);
		return;
	}
}
// System.String System.Xml.XmlWriter::get_XmlLang()
extern "C"  String_t* XmlWriter_get_XmlLang_m4143028872 (XmlWriter_t89522450 * __this, const MethodInfo* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.Xml.XmlSpace System.Xml.XmlWriter::get_XmlSpace()
extern "C"  int32_t XmlWriter_get_XmlSpace_m767449337 (XmlWriter_t89522450 * __this, const MethodInfo* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Void System.Xml.XmlWriter::Dispose(System.Boolean)
extern "C"  void XmlWriter_Dispose_m1200530597 (XmlWriter_t89522450 * __this, bool ___disposing, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(7 /* System.Void System.Xml.XmlWriter::Close() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteAttribute(System.Xml.XmlReader,System.Boolean)
extern "C"  void XmlWriter_WriteAttribute_m1597931729 (XmlWriter_t89522450 * __this, XmlReader_t4229084514 * ___reader, bool ___defattr, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = ___defattr;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		XmlReader_t4229084514 * L_1 = ___reader;
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean System.Xml.XmlReader::get_IsDefault() */, L_1);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		XmlReader_t4229084514 * L_3 = ___reader;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String System.Xml.XmlReader::get_Prefix() */, L_3);
		XmlReader_t4229084514 * L_5 = ___reader;
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_5);
		XmlReader_t4229084514 * L_7 = ___reader;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_7);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(19 /* System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String) */, __this, L_4, L_6, L_8);
		goto IL_0071;
	}

IL_002f:
	{
		XmlReader_t4229084514 * L_9 = ___reader;
		NullCheck(L_9);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_9);
		V_0 = L_10;
		int32_t L_11 = V_0;
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 0)
		{
			goto IL_004f;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 1)
		{
			goto IL_0071;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 2)
		{
			goto IL_0060;
		}
	}
	{
		goto IL_0071;
	}

IL_004f:
	{
		XmlReader_t4229084514 * L_12 = ___reader;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_12);
		VirtActionInvoker1< String_t* >::Invoke(21 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_13);
		goto IL_0071;
	}

IL_0060:
	{
		XmlReader_t4229084514 * L_14 = ___reader;
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_Name() */, L_14);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.Xml.XmlWriter::WriteEntityRef(System.String) */, __this, L_15);
		goto IL_0071;
	}

IL_0071:
	{
		XmlReader_t4229084514 * L_16 = ___reader;
		NullCheck(L_16);
		bool L_17 = VirtFuncInvoker0< bool >::Invoke(41 /* System.Boolean System.Xml.XmlReader::ReadAttributeValue() */, L_16);
		if (L_17)
		{
			goto IL_002f;
		}
	}
	{
		VirtActionInvoker0::Invoke(13 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const uint32_t XmlWriter_WriteAttributeString_m1069599196_MetadataUsageId;
extern "C"  void XmlWriter_WriteAttributeString_m1069599196 (XmlWriter_t89522450 * __this, String_t* ___localName, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (XmlWriter_WriteAttributeString_m1069599196_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		String_t* L_1 = ___localName;
		String_t* L_2 = ___value;
		XmlWriter_WriteAttributeString_m1630990645(__this, L_0, L_1, (String_t*)NULL, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String,System.String,System.String)
extern "C"  void XmlWriter_WriteAttributeString_m1630990645 (XmlWriter_t89522450 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___ns, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___prefix;
		String_t* L_1 = ___localName;
		String_t* L_2 = ___ns;
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(19 /* System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String) */, __this, L_0, L_1, L_2);
		String_t* L_3 = ___value;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_4 = ___value;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m2979997331(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_6 = ___value;
		VirtActionInvoker1< String_t* >::Invoke(21 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_6);
	}

IL_0025:
	{
		VirtActionInvoker0::Invoke(13 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteElementString(System.String,System.String)
extern "C"  void XmlWriter_WriteElementString_m3759055996 (XmlWriter_t89522450 * __this, String_t* ___localName, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___localName;
		XmlWriter_WriteStartElement_m2942452795(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___value;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_2 = ___value;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m2979997331(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_4 = ___value;
		VirtActionInvoker1< String_t* >::Invoke(21 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_4);
	}

IL_0020:
	{
		VirtActionInvoker0::Invoke(14 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean)
extern TypeInfo* ArgumentException_t124305799_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t11523773_il2cpp_TypeInfo_var;
extern TypeInfo* XmlNodeType_t3966624571_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* XmlException_t3490696160_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2370872937;
extern Il2CppCodeGenString* _stringLiteral2460968495;
extern Il2CppCodeGenString* _stringLiteral295753199;
extern Il2CppCodeGenString* _stringLiteral3827457213;
extern const uint32_t XmlWriter_WriteNode_m817874929_MetadataUsageId;
extern "C"  void XmlWriter_WriteNode_m817874929 (XmlWriter_t89522450 * __this, XmlReader_t4229084514 * ___reader, bool ___defattr, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (XmlWriter_WriteNode_m817874929_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		XmlReader_t4229084514 * L_0 = ___reader;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		ArgumentException_t124305799 * L_1 = (ArgumentException_t124305799 *)il2cpp_codegen_object_new(ArgumentException_t124305799_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m571182463(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_000c:
	{
		XmlReader_t4229084514 * L_2 = ___reader;
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, L_2);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		XmlReader_t4229084514 * L_4 = ___reader;
		NullCheck(L_4);
		VirtFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Xml.XmlReader::Read() */, L_4);
	}

IL_001e:
	{
		XmlReader_t4229084514 * L_5 = ___reader;
		bool L_6 = ___defattr;
		VirtActionInvoker2< XmlReader_t4229084514 *, bool >::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean) */, __this, L_5, L_6);
		XmlReader_t4229084514 * L_7 = ___reader;
		NullCheck(L_7);
		bool L_8 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.XmlReader::get_EOF() */, L_7);
		if (!L_8)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_0032:
	{
		XmlReader_t4229084514 * L_9 = ___reader;
		NullCheck(L_9);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_9);
		V_2 = L_10;
		int32_t L_11 = V_2;
		if (L_11 == 0)
		{
			goto IL_01db;
		}
		if (L_11 == 1)
		{
			goto IL_008c;
		}
		if (L_11 == 2)
		{
			goto IL_012c;
		}
		if (L_11 == 3)
		{
			goto IL_012d;
		}
		if (L_11 == 4)
		{
			goto IL_013e;
		}
		if (L_11 == 5)
		{
			goto IL_014f;
		}
		if (L_11 == 6)
		{
			goto IL_01e0;
		}
		if (L_11 == 7)
		{
			goto IL_0160;
		}
		if (L_11 == 8)
		{
			goto IL_0177;
		}
		if (L_11 == 9)
		{
			goto IL_01e0;
		}
		if (L_11 == 10)
		{
			goto IL_0188;
		}
		if (L_11 == 11)
		{
			goto IL_01e0;
		}
		if (L_11 == 12)
		{
			goto IL_01e0;
		}
		if (L_11 == 13)
		{
			goto IL_01ba;
		}
		if (L_11 == 14)
		{
			goto IL_01b5;
		}
		if (L_11 == 15)
		{
			goto IL_01cb;
		}
		if (L_11 == 16)
		{
			goto IL_01d6;
		}
		if (L_11 == 17)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_01e0;
	}

IL_008c:
	{
		XmlReader_t4229084514 * L_12 = ___reader;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String System.Xml.XmlReader::get_Prefix() */, L_12);
		XmlReader_t4229084514 * L_14 = ___reader;
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_14);
		XmlReader_t4229084514 * L_16 = ___reader;
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_16);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(20 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, __this, L_13, L_15, L_17);
		XmlReader_t4229084514 * L_18 = ___reader;
		NullCheck(L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Xml.XmlReader::get_HasAttributes() */, L_18);
		if (!L_19)
		{
			goto IL_00dc;
		}
	}
	{
		V_0 = 0;
		goto IL_00c9;
	}

IL_00b6:
	{
		XmlReader_t4229084514 * L_20 = ___reader;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		VirtActionInvoker1< int32_t >::Invoke(33 /* System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32) */, L_20, L_21);
		XmlReader_t4229084514 * L_22 = ___reader;
		bool L_23 = ___defattr;
		XmlWriter_WriteAttribute_m1597931729(__this, L_22, L_23, /*hidden argument*/NULL);
		int32_t L_24 = V_0;
		V_0 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_00c9:
	{
		int32_t L_25 = V_0;
		XmlReader_t4229084514 * L_26 = ___reader;
		NullCheck(L_26);
		int32_t L_27 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, L_26);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_00b6;
		}
	}
	{
		XmlReader_t4229084514 * L_28 = ___reader;
		NullCheck(L_28);
		VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_28);
	}

IL_00dc:
	{
		XmlReader_t4229084514 * L_29 = ___reader;
		NullCheck(L_29);
		bool L_30 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_29);
		if (!L_30)
		{
			goto IL_00f2;
		}
	}
	{
		VirtActionInvoker0::Invoke(14 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, __this);
		goto IL_0127;
	}

IL_00f2:
	{
		XmlReader_t4229084514 * L_31 = ___reader;
		NullCheck(L_31);
		int32_t L_32 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_31);
		V_1 = L_32;
		XmlReader_t4229084514 * L_33 = ___reader;
		NullCheck(L_33);
		VirtFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Xml.XmlReader::Read() */, L_33);
		XmlReader_t4229084514 * L_34 = ___reader;
		NullCheck(L_34);
		int32_t L_35 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_34);
		if ((((int32_t)L_35) == ((int32_t)((int32_t)15))))
		{
			goto IL_0121;
		}
	}

IL_010d:
	{
		XmlReader_t4229084514 * L_36 = ___reader;
		bool L_37 = ___defattr;
		VirtActionInvoker2< XmlReader_t4229084514 *, bool >::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean) */, __this, L_36, L_37);
		int32_t L_38 = V_1;
		XmlReader_t4229084514 * L_39 = ___reader;
		NullCheck(L_39);
		int32_t L_40 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_39);
		if ((((int32_t)L_38) < ((int32_t)L_40)))
		{
			goto IL_010d;
		}
	}

IL_0121:
	{
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteFullEndElement() */, __this);
	}

IL_0127:
	{
		goto IL_0218;
	}

IL_012c:
	{
		return;
	}

IL_012d:
	{
		XmlReader_t4229084514 * L_41 = ___reader;
		NullCheck(L_41);
		String_t* L_42 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_41);
		VirtActionInvoker1< String_t* >::Invoke(21 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_42);
		goto IL_0218;
	}

IL_013e:
	{
		XmlReader_t4229084514 * L_43 = ___reader;
		NullCheck(L_43);
		String_t* L_44 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_43);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.Xml.XmlWriter::WriteCData(System.String) */, __this, L_44);
		goto IL_0218;
	}

IL_014f:
	{
		XmlReader_t4229084514 * L_45 = ___reader;
		NullCheck(L_45);
		String_t* L_46 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_Name() */, L_45);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.Xml.XmlWriter::WriteEntityRef(System.String) */, __this, L_46);
		goto IL_0218;
	}

IL_0160:
	{
		XmlReader_t4229084514 * L_47 = ___reader;
		NullCheck(L_47);
		String_t* L_48 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_Name() */, L_47);
		XmlReader_t4229084514 * L_49 = ___reader;
		NullCheck(L_49);
		String_t* L_50 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_49);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(18 /* System.Void System.Xml.XmlWriter::WriteProcessingInstruction(System.String,System.String) */, __this, L_48, L_50);
		goto IL_0218;
	}

IL_0177:
	{
		XmlReader_t4229084514 * L_51 = ___reader;
		NullCheck(L_51);
		String_t* L_52 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_51);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void System.Xml.XmlWriter::WriteComment(System.String) */, __this, L_52);
		goto IL_0218;
	}

IL_0188:
	{
		XmlReader_t4229084514 * L_53 = ___reader;
		NullCheck(L_53);
		String_t* L_54 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_Name() */, L_53);
		XmlReader_t4229084514 * L_55 = ___reader;
		NullCheck(L_55);
		String_t* L_56 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(14 /* System.String System.Xml.XmlReader::get_Item(System.String) */, L_55, _stringLiteral2370872937);
		XmlReader_t4229084514 * L_57 = ___reader;
		NullCheck(L_57);
		String_t* L_58 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(14 /* System.String System.Xml.XmlReader::get_Item(System.String) */, L_57, _stringLiteral2460968495);
		XmlReader_t4229084514 * L_59 = ___reader;
		NullCheck(L_59);
		String_t* L_60 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_59);
		VirtActionInvoker4< String_t*, String_t*, String_t*, String_t* >::Invoke(12 /* System.Void System.Xml.XmlWriter::WriteDocType(System.String,System.String,System.String,System.String) */, __this, L_54, L_56, L_58, L_60);
		goto IL_0218;
	}

IL_01b5:
	{
		goto IL_01ba;
	}

IL_01ba:
	{
		XmlReader_t4229084514 * L_61 = ___reader;
		NullCheck(L_61);
		String_t* L_62 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_61);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Xml.XmlWriter::WriteWhitespace(System.String) */, __this, L_62);
		goto IL_0218;
	}

IL_01cb:
	{
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteFullEndElement() */, __this);
		goto IL_0218;
	}

IL_01d6:
	{
		goto IL_0218;
	}

IL_01db:
	{
		goto IL_0218;
	}

IL_01e0:
	{
		ObjectU5BU5D_t11523773* L_63 = ((ObjectU5BU5D_t11523773*)SZArrayNew(ObjectU5BU5D_t11523773_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, 0);
		ArrayElementTypeCheck (L_63, _stringLiteral295753199);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral295753199);
		ObjectU5BU5D_t11523773* L_64 = L_63;
		XmlReader_t4229084514 * L_65 = ___reader;
		NullCheck(L_65);
		String_t* L_66 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_Name() */, L_65);
		NullCheck(L_64);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_64, 1);
		ArrayElementTypeCheck (L_64, L_66);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_66);
		ObjectU5BU5D_t11523773* L_67 = L_64;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, 2);
		ArrayElementTypeCheck (L_67, _stringLiteral3827457213);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral3827457213);
		ObjectU5BU5D_t11523773* L_68 = L_67;
		XmlReader_t4229084514 * L_69 = ___reader;
		NullCheck(L_69);
		int32_t L_70 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_69);
		int32_t L_71 = L_70;
		Il2CppObject * L_72 = Box(XmlNodeType_t3966624571_il2cpp_TypeInfo_var, &L_71);
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, 3);
		ArrayElementTypeCheck (L_68, L_72);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_72);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_73 = String_Concat_m3016520001(NULL /*static, unused*/, L_68, /*hidden argument*/NULL);
		XmlException_t3490696160 * L_74 = (XmlException_t3490696160 *)il2cpp_codegen_object_new(XmlException_t3490696160_il2cpp_TypeInfo_var);
		XmlException__ctor_m3226581679(L_74, L_73, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_74);
	}

IL_0218:
	{
		XmlReader_t4229084514 * L_75 = ___reader;
		NullCheck(L_75);
		VirtFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Xml.XmlReader::Read() */, L_75);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteStartElement(System.String)
extern "C"  void XmlWriter_WriteStartElement_m2942452795 (XmlWriter_t89522450 * __this, String_t* ___localName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___localName;
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(20 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, __this, (String_t*)NULL, L_0, (String_t*)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
