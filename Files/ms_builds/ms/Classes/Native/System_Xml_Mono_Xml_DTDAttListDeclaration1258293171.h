#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Collections.ArrayList
struct ArrayList_t2121638921;

#include "System_Xml_Mono_Xml_DTDNode1733424026.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDAttListDeclaration
struct  DTDAttListDeclaration_t1258293171  : public DTDNode_t1733424026
{
public:
	// System.String Mono.Xml.DTDAttListDeclaration::name
	String_t* ___name_5;
	// System.Collections.Hashtable Mono.Xml.DTDAttListDeclaration::attributeOrders
	Hashtable_t3875263730 * ___attributeOrders_6;
	// System.Collections.ArrayList Mono.Xml.DTDAttListDeclaration::attributes
	ArrayList_t2121638921 * ___attributes_7;

public:
	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(DTDAttListDeclaration_t1258293171, ___name_5)); }
	inline String_t* get_name_5() const { return ___name_5; }
	inline String_t** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(String_t* value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier(&___name_5, value);
	}

	inline static int32_t get_offset_of_attributeOrders_6() { return static_cast<int32_t>(offsetof(DTDAttListDeclaration_t1258293171, ___attributeOrders_6)); }
	inline Hashtable_t3875263730 * get_attributeOrders_6() const { return ___attributeOrders_6; }
	inline Hashtable_t3875263730 ** get_address_of_attributeOrders_6() { return &___attributeOrders_6; }
	inline void set_attributeOrders_6(Hashtable_t3875263730 * value)
	{
		___attributeOrders_6 = value;
		Il2CppCodeGenWriteBarrier(&___attributeOrders_6, value);
	}

	inline static int32_t get_offset_of_attributes_7() { return static_cast<int32_t>(offsetof(DTDAttListDeclaration_t1258293171, ___attributes_7)); }
	inline ArrayList_t2121638921 * get_attributes_7() const { return ___attributes_7; }
	inline ArrayList_t2121638921 ** get_address_of_attributes_7() { return &___attributes_7; }
	inline void set_attributes_7(ArrayList_t2121638921 * value)
	{
		___attributes_7 = value;
		Il2CppCodeGenWriteBarrier(&___attributes_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
