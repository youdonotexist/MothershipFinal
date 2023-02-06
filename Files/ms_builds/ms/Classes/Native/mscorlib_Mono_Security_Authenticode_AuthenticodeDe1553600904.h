﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3336811650;
// Mono.Security.ASN1
struct ASN1_t1254135646;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t273828612;
// Mono.Security.X509.X509Chain
struct X509Chain_t3968320430;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "mscorlib_Mono_Security_Authenticode_AuthenticodeBas941507254.h"
#include "mscorlib_System_DateTime339033936.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Authenticode.AuthenticodeDeformatter
struct  AuthenticodeDeformatter_t1553600904  : public AuthenticodeBase_t941507254
{
public:
	// System.String Mono.Security.Authenticode.AuthenticodeDeformatter::filename
	String_t* ___filename_8;
	// System.Byte[] Mono.Security.Authenticode.AuthenticodeDeformatter::hash
	ByteU5BU5D_t58506160* ___hash_9;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.Authenticode.AuthenticodeDeformatter::coll
	X509CertificateCollection_t3336811650 * ___coll_10;
	// Mono.Security.ASN1 Mono.Security.Authenticode.AuthenticodeDeformatter::signedHash
	ASN1_t1254135646 * ___signedHash_11;
	// System.DateTime Mono.Security.Authenticode.AuthenticodeDeformatter::timestamp
	DateTime_t339033936  ___timestamp_12;
	// Mono.Security.X509.X509Certificate Mono.Security.Authenticode.AuthenticodeDeformatter::signingCertificate
	X509Certificate_t273828612 * ___signingCertificate_13;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeDeformatter::reason
	int32_t ___reason_14;
	// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::trustedRoot
	bool ___trustedRoot_15;
	// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::trustedTimestampRoot
	bool ___trustedTimestampRoot_16;
	// System.Byte[] Mono.Security.Authenticode.AuthenticodeDeformatter::entry
	ByteU5BU5D_t58506160* ___entry_17;
	// Mono.Security.X509.X509Chain Mono.Security.Authenticode.AuthenticodeDeformatter::signerChain
	X509Chain_t3968320430 * ___signerChain_18;
	// Mono.Security.X509.X509Chain Mono.Security.Authenticode.AuthenticodeDeformatter::timestampChain
	X509Chain_t3968320430 * ___timestampChain_19;

public:
	inline static int32_t get_offset_of_filename_8() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t1553600904, ___filename_8)); }
	inline String_t* get_filename_8() const { return ___filename_8; }
	inline String_t** get_address_of_filename_8() { return &___filename_8; }
	inline void set_filename_8(String_t* value)
	{
		___filename_8 = value;
		Il2CppCodeGenWriteBarrier(&___filename_8, value);
	}

	inline static int32_t get_offset_of_hash_9() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t1553600904, ___hash_9)); }
	inline ByteU5BU5D_t58506160* get_hash_9() const { return ___hash_9; }
	inline ByteU5BU5D_t58506160** get_address_of_hash_9() { return &___hash_9; }
	inline void set_hash_9(ByteU5BU5D_t58506160* value)
	{
		___hash_9 = value;
		Il2CppCodeGenWriteBarrier(&___hash_9, value);
	}

	inline static int32_t get_offset_of_coll_10() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t1553600904, ___coll_10)); }
	inline X509CertificateCollection_t3336811650 * get_coll_10() const { return ___coll_10; }
	inline X509CertificateCollection_t3336811650 ** get_address_of_coll_10() { return &___coll_10; }
	inline void set_coll_10(X509CertificateCollection_t3336811650 * value)
	{
		___coll_10 = value;
		Il2CppCodeGenWriteBarrier(&___coll_10, value);
	}

	inline static int32_t get_offset_of_signedHash_11() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t1553600904, ___signedHash_11)); }
	inline ASN1_t1254135646 * get_signedHash_11() const { return ___signedHash_11; }
	inline ASN1_t1254135646 ** get_address_of_signedHash_11() { return &___signedHash_11; }
	inline void set_signedHash_11(ASN1_t1254135646 * value)
	{
		___signedHash_11 = value;
		Il2CppCodeGenWriteBarrier(&___signedHash_11, value);
	}

	inline static int32_t get_offset_of_timestamp_12() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t1553600904, ___timestamp_12)); }
	inline DateTime_t339033936  get_timestamp_12() const { return ___timestamp_12; }
	inline DateTime_t339033936 * get_address_of_timestamp_12() { return &___timestamp_12; }
	inline void set_timestamp_12(DateTime_t339033936  value)
	{
		___timestamp_12 = value;
	}

	inline static int32_t get_offset_of_signingCertificate_13() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t1553600904, ___signingCertificate_13)); }
	inline X509Certificate_t273828612 * get_signingCertificate_13() const { return ___signingCertificate_13; }
	inline X509Certificate_t273828612 ** get_address_of_signingCertificate_13() { return &___signingCertificate_13; }
	inline void set_signingCertificate_13(X509Certificate_t273828612 * value)
	{
		___signingCertificate_13 = value;
		Il2CppCodeGenWriteBarrier(&___signingCertificate_13, value);
	}

	inline static int32_t get_offset_of_reason_14() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t1553600904, ___reason_14)); }
	inline int32_t get_reason_14() const { return ___reason_14; }
	inline int32_t* get_address_of_reason_14() { return &___reason_14; }
	inline void set_reason_14(int32_t value)
	{
		___reason_14 = value;
	}

	inline static int32_t get_offset_of_trustedRoot_15() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t1553600904, ___trustedRoot_15)); }
	inline bool get_trustedRoot_15() const { return ___trustedRoot_15; }
	inline bool* get_address_of_trustedRoot_15() { return &___trustedRoot_15; }
	inline void set_trustedRoot_15(bool value)
	{
		___trustedRoot_15 = value;
	}

	inline static int32_t get_offset_of_trustedTimestampRoot_16() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t1553600904, ___trustedTimestampRoot_16)); }
	inline bool get_trustedTimestampRoot_16() const { return ___trustedTimestampRoot_16; }
	inline bool* get_address_of_trustedTimestampRoot_16() { return &___trustedTimestampRoot_16; }
	inline void set_trustedTimestampRoot_16(bool value)
	{
		___trustedTimestampRoot_16 = value;
	}

	inline static int32_t get_offset_of_entry_17() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t1553600904, ___entry_17)); }
	inline ByteU5BU5D_t58506160* get_entry_17() const { return ___entry_17; }
	inline ByteU5BU5D_t58506160** get_address_of_entry_17() { return &___entry_17; }
	inline void set_entry_17(ByteU5BU5D_t58506160* value)
	{
		___entry_17 = value;
		Il2CppCodeGenWriteBarrier(&___entry_17, value);
	}

	inline static int32_t get_offset_of_signerChain_18() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t1553600904, ___signerChain_18)); }
	inline X509Chain_t3968320430 * get_signerChain_18() const { return ___signerChain_18; }
	inline X509Chain_t3968320430 ** get_address_of_signerChain_18() { return &___signerChain_18; }
	inline void set_signerChain_18(X509Chain_t3968320430 * value)
	{
		___signerChain_18 = value;
		Il2CppCodeGenWriteBarrier(&___signerChain_18, value);
	}

	inline static int32_t get_offset_of_timestampChain_19() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t1553600904, ___timestampChain_19)); }
	inline X509Chain_t3968320430 * get_timestampChain_19() const { return ___timestampChain_19; }
	inline X509Chain_t3968320430 ** get_address_of_timestampChain_19() { return &___timestampChain_19; }
	inline void set_timestampChain_19(X509Chain_t3968320430 * value)
	{
		___timestampChain_19 = value;
		Il2CppCodeGenWriteBarrier(&___timestampChain_19, value);
	}
};

struct AuthenticodeDeformatter_t1553600904_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Authenticode.AuthenticodeDeformatter::<>f__switch$map7
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map7_20;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Authenticode.AuthenticodeDeformatter::<>f__switch$map8
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map8_21;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Authenticode.AuthenticodeDeformatter::<>f__switch$map9
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map9_22;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map7_20() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t1553600904_StaticFields, ___U3CU3Ef__switchU24map7_20)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map7_20() const { return ___U3CU3Ef__switchU24map7_20; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map7_20() { return &___U3CU3Ef__switchU24map7_20; }
	inline void set_U3CU3Ef__switchU24map7_20(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map7_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map7_20, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map8_21() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t1553600904_StaticFields, ___U3CU3Ef__switchU24map8_21)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map8_21() const { return ___U3CU3Ef__switchU24map8_21; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map8_21() { return &___U3CU3Ef__switchU24map8_21; }
	inline void set_U3CU3Ef__switchU24map8_21(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map8_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map8_21, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map9_22() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t1553600904_StaticFields, ___U3CU3Ef__switchU24map9_22)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map9_22() const { return ___U3CU3Ef__switchU24map9_22; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map9_22() { return &___U3CU3Ef__switchU24map9_22; }
	inline void set_U3CU3Ef__switchU24map9_22(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map9_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map9_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
