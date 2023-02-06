﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t709926554;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t933015752;
// System.String
struct String_t;
// Mono.Xml.DTDContentModelCollection
struct DTDContentModelCollection_t605667718;

#include "System_Xml_Mono_Xml_DTDNode1733424026.h"
#include "System_Xml_Mono_Xml_DTDContentOrderType2313699015.h"
#include "System_Xml_Mono_Xml_DTDOccurence3238327079.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDContentModel
struct  DTDContentModel_t1462496200  : public DTDNode_t1733424026
{
public:
	// Mono.Xml.DTDObjectModel Mono.Xml.DTDContentModel::root
	DTDObjectModel_t709926554 * ___root_5;
	// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::compiledAutomata
	DTDAutomata_t933015752 * ___compiledAutomata_6;
	// System.String Mono.Xml.DTDContentModel::ownerElementName
	String_t* ___ownerElementName_7;
	// System.String Mono.Xml.DTDContentModel::elementName
	String_t* ___elementName_8;
	// Mono.Xml.DTDContentOrderType Mono.Xml.DTDContentModel::orderType
	int32_t ___orderType_9;
	// Mono.Xml.DTDContentModelCollection Mono.Xml.DTDContentModel::childModels
	DTDContentModelCollection_t605667718 * ___childModels_10;
	// Mono.Xml.DTDOccurence Mono.Xml.DTDContentModel::occurence
	int32_t ___occurence_11;

public:
	inline static int32_t get_offset_of_root_5() { return static_cast<int32_t>(offsetof(DTDContentModel_t1462496200, ___root_5)); }
	inline DTDObjectModel_t709926554 * get_root_5() const { return ___root_5; }
	inline DTDObjectModel_t709926554 ** get_address_of_root_5() { return &___root_5; }
	inline void set_root_5(DTDObjectModel_t709926554 * value)
	{
		___root_5 = value;
		Il2CppCodeGenWriteBarrier(&___root_5, value);
	}

	inline static int32_t get_offset_of_compiledAutomata_6() { return static_cast<int32_t>(offsetof(DTDContentModel_t1462496200, ___compiledAutomata_6)); }
	inline DTDAutomata_t933015752 * get_compiledAutomata_6() const { return ___compiledAutomata_6; }
	inline DTDAutomata_t933015752 ** get_address_of_compiledAutomata_6() { return &___compiledAutomata_6; }
	inline void set_compiledAutomata_6(DTDAutomata_t933015752 * value)
	{
		___compiledAutomata_6 = value;
		Il2CppCodeGenWriteBarrier(&___compiledAutomata_6, value);
	}

	inline static int32_t get_offset_of_ownerElementName_7() { return static_cast<int32_t>(offsetof(DTDContentModel_t1462496200, ___ownerElementName_7)); }
	inline String_t* get_ownerElementName_7() const { return ___ownerElementName_7; }
	inline String_t** get_address_of_ownerElementName_7() { return &___ownerElementName_7; }
	inline void set_ownerElementName_7(String_t* value)
	{
		___ownerElementName_7 = value;
		Il2CppCodeGenWriteBarrier(&___ownerElementName_7, value);
	}

	inline static int32_t get_offset_of_elementName_8() { return static_cast<int32_t>(offsetof(DTDContentModel_t1462496200, ___elementName_8)); }
	inline String_t* get_elementName_8() const { return ___elementName_8; }
	inline String_t** get_address_of_elementName_8() { return &___elementName_8; }
	inline void set_elementName_8(String_t* value)
	{
		___elementName_8 = value;
		Il2CppCodeGenWriteBarrier(&___elementName_8, value);
	}

	inline static int32_t get_offset_of_orderType_9() { return static_cast<int32_t>(offsetof(DTDContentModel_t1462496200, ___orderType_9)); }
	inline int32_t get_orderType_9() const { return ___orderType_9; }
	inline int32_t* get_address_of_orderType_9() { return &___orderType_9; }
	inline void set_orderType_9(int32_t value)
	{
		___orderType_9 = value;
	}

	inline static int32_t get_offset_of_childModels_10() { return static_cast<int32_t>(offsetof(DTDContentModel_t1462496200, ___childModels_10)); }
	inline DTDContentModelCollection_t605667718 * get_childModels_10() const { return ___childModels_10; }
	inline DTDContentModelCollection_t605667718 ** get_address_of_childModels_10() { return &___childModels_10; }
	inline void set_childModels_10(DTDContentModelCollection_t605667718 * value)
	{
		___childModels_10 = value;
		Il2CppCodeGenWriteBarrier(&___childModels_10, value);
	}

	inline static int32_t get_offset_of_occurence_11() { return static_cast<int32_t>(offsetof(DTDContentModel_t1462496200, ___occurence_11)); }
	inline int32_t get_occurence_11() const { return ___occurence_11; }
	inline int32_t* get_address_of_occurence_11() { return &___occurence_11; }
	inline void set_occurence_11(int32_t value)
	{
		___occurence_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
