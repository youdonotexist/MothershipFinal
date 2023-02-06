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
// System.Net.ICredentials
struct ICredentials_t2307785309;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1099177929;
// System.Uri
struct Uri_t2776692961;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3455488335;
// System.Text.Encoding
struct Encoding_t180559927;
// System.Net.IWebProxy
struct IWebProxy_t49946189;
// System.Net.DownloadProgressChangedEventHandler
struct DownloadProgressChangedEventHandler_t3634764377;

#include "System_System_ComponentModel_Component553679750.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebClient
struct  WebClient_t4210428809  : public Component_t553679750
{
public:
	// System.Net.ICredentials System.Net.WebClient::credentials
	Il2CppObject * ___credentials_6;
	// System.Net.WebHeaderCollection System.Net.WebClient::headers
	WebHeaderCollection_t1099177929 * ___headers_7;
	// System.Net.WebHeaderCollection System.Net.WebClient::responseHeaders
	WebHeaderCollection_t1099177929 * ___responseHeaders_8;
	// System.Uri System.Net.WebClient::baseAddress
	Uri_t2776692961 * ___baseAddress_9;
	// System.Collections.Specialized.NameValueCollection System.Net.WebClient::queryString
	NameValueCollection_t3455488335 * ___queryString_10;
	// System.Boolean System.Net.WebClient::is_busy
	bool ___is_busy_11;
	// System.Boolean System.Net.WebClient::async
	bool ___async_12;
	// System.Text.Encoding System.Net.WebClient::encoding
	Encoding_t180559927 * ___encoding_13;
	// System.Net.IWebProxy System.Net.WebClient::proxy
	Il2CppObject * ___proxy_14;
	// System.Net.DownloadProgressChangedEventHandler System.Net.WebClient::DownloadProgressChanged
	DownloadProgressChangedEventHandler_t3634764377 * ___DownloadProgressChanged_15;

public:
	inline static int32_t get_offset_of_credentials_6() { return static_cast<int32_t>(offsetof(WebClient_t4210428809, ___credentials_6)); }
	inline Il2CppObject * get_credentials_6() const { return ___credentials_6; }
	inline Il2CppObject ** get_address_of_credentials_6() { return &___credentials_6; }
	inline void set_credentials_6(Il2CppObject * value)
	{
		___credentials_6 = value;
		Il2CppCodeGenWriteBarrier(&___credentials_6, value);
	}

	inline static int32_t get_offset_of_headers_7() { return static_cast<int32_t>(offsetof(WebClient_t4210428809, ___headers_7)); }
	inline WebHeaderCollection_t1099177929 * get_headers_7() const { return ___headers_7; }
	inline WebHeaderCollection_t1099177929 ** get_address_of_headers_7() { return &___headers_7; }
	inline void set_headers_7(WebHeaderCollection_t1099177929 * value)
	{
		___headers_7 = value;
		Il2CppCodeGenWriteBarrier(&___headers_7, value);
	}

	inline static int32_t get_offset_of_responseHeaders_8() { return static_cast<int32_t>(offsetof(WebClient_t4210428809, ___responseHeaders_8)); }
	inline WebHeaderCollection_t1099177929 * get_responseHeaders_8() const { return ___responseHeaders_8; }
	inline WebHeaderCollection_t1099177929 ** get_address_of_responseHeaders_8() { return &___responseHeaders_8; }
	inline void set_responseHeaders_8(WebHeaderCollection_t1099177929 * value)
	{
		___responseHeaders_8 = value;
		Il2CppCodeGenWriteBarrier(&___responseHeaders_8, value);
	}

	inline static int32_t get_offset_of_baseAddress_9() { return static_cast<int32_t>(offsetof(WebClient_t4210428809, ___baseAddress_9)); }
	inline Uri_t2776692961 * get_baseAddress_9() const { return ___baseAddress_9; }
	inline Uri_t2776692961 ** get_address_of_baseAddress_9() { return &___baseAddress_9; }
	inline void set_baseAddress_9(Uri_t2776692961 * value)
	{
		___baseAddress_9 = value;
		Il2CppCodeGenWriteBarrier(&___baseAddress_9, value);
	}

	inline static int32_t get_offset_of_queryString_10() { return static_cast<int32_t>(offsetof(WebClient_t4210428809, ___queryString_10)); }
	inline NameValueCollection_t3455488335 * get_queryString_10() const { return ___queryString_10; }
	inline NameValueCollection_t3455488335 ** get_address_of_queryString_10() { return &___queryString_10; }
	inline void set_queryString_10(NameValueCollection_t3455488335 * value)
	{
		___queryString_10 = value;
		Il2CppCodeGenWriteBarrier(&___queryString_10, value);
	}

	inline static int32_t get_offset_of_is_busy_11() { return static_cast<int32_t>(offsetof(WebClient_t4210428809, ___is_busy_11)); }
	inline bool get_is_busy_11() const { return ___is_busy_11; }
	inline bool* get_address_of_is_busy_11() { return &___is_busy_11; }
	inline void set_is_busy_11(bool value)
	{
		___is_busy_11 = value;
	}

	inline static int32_t get_offset_of_async_12() { return static_cast<int32_t>(offsetof(WebClient_t4210428809, ___async_12)); }
	inline bool get_async_12() const { return ___async_12; }
	inline bool* get_address_of_async_12() { return &___async_12; }
	inline void set_async_12(bool value)
	{
		___async_12 = value;
	}

	inline static int32_t get_offset_of_encoding_13() { return static_cast<int32_t>(offsetof(WebClient_t4210428809, ___encoding_13)); }
	inline Encoding_t180559927 * get_encoding_13() const { return ___encoding_13; }
	inline Encoding_t180559927 ** get_address_of_encoding_13() { return &___encoding_13; }
	inline void set_encoding_13(Encoding_t180559927 * value)
	{
		___encoding_13 = value;
		Il2CppCodeGenWriteBarrier(&___encoding_13, value);
	}

	inline static int32_t get_offset_of_proxy_14() { return static_cast<int32_t>(offsetof(WebClient_t4210428809, ___proxy_14)); }
	inline Il2CppObject * get_proxy_14() const { return ___proxy_14; }
	inline Il2CppObject ** get_address_of_proxy_14() { return &___proxy_14; }
	inline void set_proxy_14(Il2CppObject * value)
	{
		___proxy_14 = value;
		Il2CppCodeGenWriteBarrier(&___proxy_14, value);
	}

	inline static int32_t get_offset_of_DownloadProgressChanged_15() { return static_cast<int32_t>(offsetof(WebClient_t4210428809, ___DownloadProgressChanged_15)); }
	inline DownloadProgressChangedEventHandler_t3634764377 * get_DownloadProgressChanged_15() const { return ___DownloadProgressChanged_15; }
	inline DownloadProgressChangedEventHandler_t3634764377 ** get_address_of_DownloadProgressChanged_15() { return &___DownloadProgressChanged_15; }
	inline void set_DownloadProgressChanged_15(DownloadProgressChangedEventHandler_t3634764377 * value)
	{
		___DownloadProgressChanged_15 = value;
		Il2CppCodeGenWriteBarrier(&___DownloadProgressChanged_15, value);
	}
};

struct WebClient_t4210428809_StaticFields
{
public:
	// System.String System.Net.WebClient::urlEncodedCType
	String_t* ___urlEncodedCType_4;
	// System.Byte[] System.Net.WebClient::hexBytes
	ByteU5BU5D_t58506160* ___hexBytes_5;

public:
	inline static int32_t get_offset_of_urlEncodedCType_4() { return static_cast<int32_t>(offsetof(WebClient_t4210428809_StaticFields, ___urlEncodedCType_4)); }
	inline String_t* get_urlEncodedCType_4() const { return ___urlEncodedCType_4; }
	inline String_t** get_address_of_urlEncodedCType_4() { return &___urlEncodedCType_4; }
	inline void set_urlEncodedCType_4(String_t* value)
	{
		___urlEncodedCType_4 = value;
		Il2CppCodeGenWriteBarrier(&___urlEncodedCType_4, value);
	}

	inline static int32_t get_offset_of_hexBytes_5() { return static_cast<int32_t>(offsetof(WebClient_t4210428809_StaticFields, ___hexBytes_5)); }
	inline ByteU5BU5D_t58506160* get_hexBytes_5() const { return ___hexBytes_5; }
	inline ByteU5BU5D_t58506160** get_address_of_hexBytes_5() { return &___hexBytes_5; }
	inline void set_hexBytes_5(ByteU5BU5D_t58506160* value)
	{
		___hexBytes_5 = value;
		Il2CppCodeGenWriteBarrier(&___hexBytes_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
