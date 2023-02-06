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

// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3905177107;
// System.Configuration.Configuration
struct Configuration_t2274547107;
// System.Configuration.PropertyInformation
struct PropertyInformation_t4091064516;
// System.Configuration.ElementInformation
struct ElementInformation_t381744509;
// System.String
struct String_t;
// System.Configuration.ConfigurationLockCollection
struct ConfigurationLockCollection_t2592573804;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t646701464;
// System.Object
struct Il2CppObject;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1125014;
// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t1006530897;
// System.Xml.XmlReader
struct XmlReader_t4229084514;
// System.Xml.XmlWriter
struct XmlWriter_t89522450;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configur2274547107.h"
#include "System_Configuration_System_Configuration_Property4091064516.h"
#include "mscorlib_System_String968488902.h"
#include "System_Configuration_System_Configuration_Configura646701464.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_System_Xml_XmlWriter89522450.h"
#include "System_Configuration_System_Configuration_Configur3905177107.h"
#include "System_Configuration_System_Configuration_Configur3861998723.h"

// System.Void System.Configuration.ConfigurationElement::.ctor()
extern "C"  void ConfigurationElement__ctor_m3297756581 (ConfigurationElement_t3905177107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.ConfigurationElement::get_Configuration()
extern "C"  Configuration_t2274547107 * ConfigurationElement_get_Configuration_m1316584128 (ConfigurationElement_t3905177107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_Configuration(System.Configuration.Configuration)
extern "C"  void ConfigurationElement_set_Configuration_m857039325 (ConfigurationElement_t3905177107 * __this, Configuration_t2274547107 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::InitFromProperty(System.Configuration.PropertyInformation)
extern "C"  void ConfigurationElement_InitFromProperty_m2203023118 (ConfigurationElement_t3905177107 * __this, PropertyInformation_t4091064516 * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ElementInformation System.Configuration.ConfigurationElement::get_ElementInformation()
extern "C"  ElementInformation_t381744509 * ConfigurationElement_get_ElementInformation_m4113648876 (ConfigurationElement_t3905177107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationElement::get_RawXml()
extern "C"  String_t* ConfigurationElement_get_RawXml_m3970578068 (ConfigurationElement_t3905177107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_RawXml(System.String)
extern "C"  void ConfigurationElement_set_RawXml_m109833751 (ConfigurationElement_t3905177107 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::Init()
extern "C"  void ConfigurationElement_Init_m1720483855 (ConfigurationElement_t3905177107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockAllAttributesExcept()
extern "C"  ConfigurationLockCollection_t2592573804 * ConfigurationElement_get_LockAllAttributesExcept_m2414336519 (ConfigurationElement_t3905177107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockAllElementsExcept()
extern "C"  ConfigurationLockCollection_t2592573804 * ConfigurationElement_get_LockAllElementsExcept_m3498886951 (ConfigurationElement_t3905177107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockAttributes()
extern "C"  ConfigurationLockCollection_t2592573804 * ConfigurationElement_get_LockAttributes_m2630006979 (ConfigurationElement_t3905177107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockElements()
extern "C"  ConfigurationLockCollection_t2592573804 * ConfigurationElement_get_LockElements_m606566179 (ConfigurationElement_t3905177107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_LockItem(System.Boolean)
extern "C"  void ConfigurationElement_set_LockItem_m1659220049 (ConfigurationElement_t3905177107 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::SetPropertyValue(System.Configuration.ConfigurationProperty,System.Object,System.Boolean)
extern "C"  void ConfigurationElement_SetPropertyValue_m4010493258 (ConfigurationElement_t3905177107 * __this, ConfigurationProperty_t646701464 * ___prop, Il2CppObject * ___value, bool ___ignoreLocks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::GetKeyProperties()
extern "C"  ConfigurationPropertyCollection_t1125014 * ConfigurationElement_GetKeyProperties_m2426273982 (ConfigurationElement_t3905177107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElementCollection System.Configuration.ConfigurationElement::GetDefaultCollection()
extern "C"  ConfigurationElementCollection_t1006530897 * ConfigurationElement_GetDefaultCollection_m2655648688 (ConfigurationElement_t3905177107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElement::get_Item(System.Configuration.ConfigurationProperty)
extern "C"  Il2CppObject * ConfigurationElement_get_Item_m882145330 (ConfigurationElement_t3905177107 * __this, ConfigurationProperty_t646701464 * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_Item(System.Configuration.ConfigurationProperty,System.Object)
extern "C"  void ConfigurationElement_set_Item_m4074765769 (ConfigurationElement_t3905177107 * __this, ConfigurationProperty_t646701464 * ___property, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElement::get_Item(System.String)
extern "C"  Il2CppObject * ConfigurationElement_get_Item_m3549593916 (ConfigurationElement_t3905177107 * __this, String_t* ___property_name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_Item(System.String,System.Object)
extern "C"  void ConfigurationElement_set_Item_m3440149537 (ConfigurationElement_t3905177107 * __this, String_t* ___property_name, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::get_Properties()
extern "C"  ConfigurationPropertyCollection_t1125014 * ConfigurationElement_get_Properties_m1602766206 (ConfigurationElement_t3905177107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::Equals(System.Object)
extern "C"  bool ConfigurationElement_Equals_m4009897148 (ConfigurationElement_t3905177107 * __this, Il2CppObject * ___compareTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationElement::GetHashCode()
extern "C"  int32_t ConfigurationElement_GetHashCode_m3384464916 (ConfigurationElement_t3905177107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::HasValues()
extern "C"  bool ConfigurationElement_HasValues_m2077527173 (ConfigurationElement_t3905177107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::HasLocalModifications()
extern "C"  bool ConfigurationElement_HasLocalModifications_m1860323983 (ConfigurationElement_t3905177107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern "C"  void ConfigurationElement_DeserializeElement_m2582807237 (ConfigurationElement_t3905177107 * __this, XmlReader_t4229084514 * ___reader, bool ___serializeCollectionKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::OnDeserializeUnrecognizedAttribute(System.String,System.String)
extern "C"  bool ConfigurationElement_OnDeserializeUnrecognizedAttribute_m1006639416 (ConfigurationElement_t3905177107 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::OnDeserializeUnrecognizedElement(System.String,System.Xml.XmlReader)
extern "C"  bool ConfigurationElement_OnDeserializeUnrecognizedElement_m3859474854 (ConfigurationElement_t3905177107 * __this, String_t* ___element, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElement::OnRequiredPropertyNotFound(System.String)
extern "C"  Il2CppObject * ConfigurationElement_OnRequiredPropertyNotFound_m2624097014 (ConfigurationElement_t3905177107 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::PreSerialize(System.Xml.XmlWriter)
extern "C"  void ConfigurationElement_PreSerialize_m1216817032 (ConfigurationElement_t3905177107 * __this, XmlWriter_t89522450 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::PostDeserialize()
extern "C"  void ConfigurationElement_PostDeserialize_m3152016194 (ConfigurationElement_t3905177107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::InitializeDefault()
extern "C"  void ConfigurationElement_InitializeDefault_m838875156 (ConfigurationElement_t3905177107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::IsModified()
extern "C"  bool ConfigurationElement_IsModified_m903236908 (ConfigurationElement_t3905177107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::SetReadOnly()
extern "C"  void ConfigurationElement_SetReadOnly_m1427536167 (ConfigurationElement_t3905177107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::IsReadOnly()
extern "C"  bool ConfigurationElement_IsReadOnly_m3380673157 (ConfigurationElement_t3905177107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::Reset(System.Configuration.ConfigurationElement)
extern "C"  void ConfigurationElement_Reset_m3054563939 (ConfigurationElement_t3905177107 * __this, ConfigurationElement_t3905177107 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::ResetModified()
extern "C"  void ConfigurationElement_ResetModified_m666869755 (ConfigurationElement_t3905177107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::SerializeElement(System.Xml.XmlWriter,System.Boolean)
extern "C"  bool ConfigurationElement_SerializeElement_m3532590780 (ConfigurationElement_t3905177107 * __this, XmlWriter_t89522450 * ___writer, bool ___serializeCollectionKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::SerializeToXmlElement(System.Xml.XmlWriter,System.String)
extern "C"  bool ConfigurationElement_SerializeToXmlElement_m432706353 (ConfigurationElement_t3905177107 * __this, XmlWriter_t89522450 * ___writer, String_t* ___elementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode)
extern "C"  void ConfigurationElement_Unmerge_m3329480837 (ConfigurationElement_t3905177107 * __this, ConfigurationElement_t3905177107 * ___source, ConfigurationElement_t3905177107 * ___parent, int32_t ___updateMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::HasValue(System.String)
extern "C"  bool ConfigurationElement_HasValue_m560998898 (ConfigurationElement_t3905177107 * __this, String_t* ___propName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::ValidateValue(System.Configuration.ConfigurationProperty,System.String)
extern "C"  void ConfigurationElement_ValidateValue_m4188540262 (ConfigurationElement_t3905177107 * __this, ConfigurationProperty_t646701464 * ___p, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
