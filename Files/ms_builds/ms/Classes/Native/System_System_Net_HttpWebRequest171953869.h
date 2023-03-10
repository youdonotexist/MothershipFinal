#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Uri
struct Uri_t2776692961;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2200082950;
// System.String
struct String_t;
// System.Net.HttpContinueDelegate
struct HttpContinueDelegate_t835016574;
// System.Net.CookieContainer
struct CookieContainer_t3399784903;
// System.Net.ICredentials
struct ICredentials_t2307785309;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1099177929;
// System.Version
struct Version_t497901645;
// System.Net.IWebProxy
struct IWebProxy_t49946189;
// System.Net.ServicePoint
struct ServicePoint_t28240741;
// System.Net.WebConnectionStream
struct WebConnectionStream_t944986812;
// System.Net.HttpWebResponse
struct HttpWebResponse_t2667966807;
// System.Net.WebAsyncResult
struct WebAsyncResult_t4198106447;
// System.EventHandler
struct EventHandler_t247020293;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Exception
struct Exception_t1967233988;
// System.Object
struct Il2CppObject;
// System.Net.WebConnection
struct WebConnection_t1124289692;

#include "System_System_Net_WebRequest3488810021.h"
#include "System_System_Net_DecompressionMethods2824658231.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpWebRequest
struct  HttpWebRequest_t171953869  : public WebRequest_t3488810021
{
public:
	// System.Uri System.Net.HttpWebRequest::requestUri
	Uri_t2776692961 * ___requestUri_6;
	// System.Uri System.Net.HttpWebRequest::actualUri
	Uri_t2776692961 * ___actualUri_7;
	// System.Boolean System.Net.HttpWebRequest::hostChanged
	bool ___hostChanged_8;
	// System.Boolean System.Net.HttpWebRequest::allowAutoRedirect
	bool ___allowAutoRedirect_9;
	// System.Boolean System.Net.HttpWebRequest::allowBuffering
	bool ___allowBuffering_10;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.HttpWebRequest::certificates
	X509CertificateCollection_t2200082950 * ___certificates_11;
	// System.String System.Net.HttpWebRequest::connectionGroup
	String_t* ___connectionGroup_12;
	// System.Int64 System.Net.HttpWebRequest::contentLength
	int64_t ___contentLength_13;
	// System.Net.HttpContinueDelegate System.Net.HttpWebRequest::continueDelegate
	HttpContinueDelegate_t835016574 * ___continueDelegate_14;
	// System.Net.CookieContainer System.Net.HttpWebRequest::cookieContainer
	CookieContainer_t3399784903 * ___cookieContainer_15;
	// System.Net.ICredentials System.Net.HttpWebRequest::credentials
	Il2CppObject * ___credentials_16;
	// System.Boolean System.Net.HttpWebRequest::haveResponse
	bool ___haveResponse_17;
	// System.Boolean System.Net.HttpWebRequest::haveRequest
	bool ___haveRequest_18;
	// System.Boolean System.Net.HttpWebRequest::requestSent
	bool ___requestSent_19;
	// System.Net.WebHeaderCollection System.Net.HttpWebRequest::webHeaders
	WebHeaderCollection_t1099177929 * ___webHeaders_20;
	// System.Boolean System.Net.HttpWebRequest::keepAlive
	bool ___keepAlive_21;
	// System.Int32 System.Net.HttpWebRequest::maxAutoRedirect
	int32_t ___maxAutoRedirect_22;
	// System.String System.Net.HttpWebRequest::mediaType
	String_t* ___mediaType_23;
	// System.String System.Net.HttpWebRequest::method
	String_t* ___method_24;
	// System.String System.Net.HttpWebRequest::initialMethod
	String_t* ___initialMethod_25;
	// System.Boolean System.Net.HttpWebRequest::pipelined
	bool ___pipelined_26;
	// System.Boolean System.Net.HttpWebRequest::preAuthenticate
	bool ___preAuthenticate_27;
	// System.Boolean System.Net.HttpWebRequest::usedPreAuth
	bool ___usedPreAuth_28;
	// System.Version System.Net.HttpWebRequest::version
	Version_t497901645 * ___version_29;
	// System.Version System.Net.HttpWebRequest::actualVersion
	Version_t497901645 * ___actualVersion_30;
	// System.Net.IWebProxy System.Net.HttpWebRequest::proxy
	Il2CppObject * ___proxy_31;
	// System.Boolean System.Net.HttpWebRequest::sendChunked
	bool ___sendChunked_32;
	// System.Net.ServicePoint System.Net.HttpWebRequest::servicePoint
	ServicePoint_t28240741 * ___servicePoint_33;
	// System.Int32 System.Net.HttpWebRequest::timeout
	int32_t ___timeout_34;
	// System.Net.WebConnectionStream System.Net.HttpWebRequest::writeStream
	WebConnectionStream_t944986812 * ___writeStream_35;
	// System.Net.HttpWebResponse System.Net.HttpWebRequest::webResponse
	HttpWebResponse_t2667966807 * ___webResponse_36;
	// System.Net.WebAsyncResult System.Net.HttpWebRequest::asyncWrite
	WebAsyncResult_t4198106447 * ___asyncWrite_37;
	// System.Net.WebAsyncResult System.Net.HttpWebRequest::asyncRead
	WebAsyncResult_t4198106447 * ___asyncRead_38;
	// System.EventHandler System.Net.HttpWebRequest::abortHandler
	EventHandler_t247020293 * ___abortHandler_39;
	// System.Int32 System.Net.HttpWebRequest::aborted
	int32_t ___aborted_40;
	// System.Boolean System.Net.HttpWebRequest::gotRequestStream
	bool ___gotRequestStream_41;
	// System.Int32 System.Net.HttpWebRequest::redirects
	int32_t ___redirects_42;
	// System.Boolean System.Net.HttpWebRequest::expectContinue
	bool ___expectContinue_43;
	// System.Boolean System.Net.HttpWebRequest::authCompleted
	bool ___authCompleted_44;
	// System.Byte[] System.Net.HttpWebRequest::bodyBuffer
	ByteU5BU5D_t58506160* ___bodyBuffer_45;
	// System.Int32 System.Net.HttpWebRequest::bodyBufferLength
	int32_t ___bodyBufferLength_46;
	// System.Boolean System.Net.HttpWebRequest::getResponseCalled
	bool ___getResponseCalled_47;
	// System.Exception System.Net.HttpWebRequest::saved_exc
	Exception_t1967233988 * ___saved_exc_48;
	// System.Object System.Net.HttpWebRequest::locker
	Il2CppObject * ___locker_49;
	// System.Boolean System.Net.HttpWebRequest::is_ntlm_auth
	bool ___is_ntlm_auth_50;
	// System.Boolean System.Net.HttpWebRequest::finished_reading
	bool ___finished_reading_51;
	// System.Net.WebConnection System.Net.HttpWebRequest::WebConnection
	WebConnection_t1124289692 * ___WebConnection_52;
	// System.Net.DecompressionMethods System.Net.HttpWebRequest::auto_decomp
	int32_t ___auto_decomp_53;
	// System.Int32 System.Net.HttpWebRequest::readWriteTimeout
	int32_t ___readWriteTimeout_55;
	// System.Boolean System.Net.HttpWebRequest::unsafe_auth_blah
	bool ___unsafe_auth_blah_56;

public:
	inline static int32_t get_offset_of_requestUri_6() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___requestUri_6)); }
	inline Uri_t2776692961 * get_requestUri_6() const { return ___requestUri_6; }
	inline Uri_t2776692961 ** get_address_of_requestUri_6() { return &___requestUri_6; }
	inline void set_requestUri_6(Uri_t2776692961 * value)
	{
		___requestUri_6 = value;
		Il2CppCodeGenWriteBarrier(&___requestUri_6, value);
	}

	inline static int32_t get_offset_of_actualUri_7() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___actualUri_7)); }
	inline Uri_t2776692961 * get_actualUri_7() const { return ___actualUri_7; }
	inline Uri_t2776692961 ** get_address_of_actualUri_7() { return &___actualUri_7; }
	inline void set_actualUri_7(Uri_t2776692961 * value)
	{
		___actualUri_7 = value;
		Il2CppCodeGenWriteBarrier(&___actualUri_7, value);
	}

	inline static int32_t get_offset_of_hostChanged_8() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___hostChanged_8)); }
	inline bool get_hostChanged_8() const { return ___hostChanged_8; }
	inline bool* get_address_of_hostChanged_8() { return &___hostChanged_8; }
	inline void set_hostChanged_8(bool value)
	{
		___hostChanged_8 = value;
	}

	inline static int32_t get_offset_of_allowAutoRedirect_9() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___allowAutoRedirect_9)); }
	inline bool get_allowAutoRedirect_9() const { return ___allowAutoRedirect_9; }
	inline bool* get_address_of_allowAutoRedirect_9() { return &___allowAutoRedirect_9; }
	inline void set_allowAutoRedirect_9(bool value)
	{
		___allowAutoRedirect_9 = value;
	}

	inline static int32_t get_offset_of_allowBuffering_10() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___allowBuffering_10)); }
	inline bool get_allowBuffering_10() const { return ___allowBuffering_10; }
	inline bool* get_address_of_allowBuffering_10() { return &___allowBuffering_10; }
	inline void set_allowBuffering_10(bool value)
	{
		___allowBuffering_10 = value;
	}

	inline static int32_t get_offset_of_certificates_11() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___certificates_11)); }
	inline X509CertificateCollection_t2200082950 * get_certificates_11() const { return ___certificates_11; }
	inline X509CertificateCollection_t2200082950 ** get_address_of_certificates_11() { return &___certificates_11; }
	inline void set_certificates_11(X509CertificateCollection_t2200082950 * value)
	{
		___certificates_11 = value;
		Il2CppCodeGenWriteBarrier(&___certificates_11, value);
	}

	inline static int32_t get_offset_of_connectionGroup_12() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___connectionGroup_12)); }
	inline String_t* get_connectionGroup_12() const { return ___connectionGroup_12; }
	inline String_t** get_address_of_connectionGroup_12() { return &___connectionGroup_12; }
	inline void set_connectionGroup_12(String_t* value)
	{
		___connectionGroup_12 = value;
		Il2CppCodeGenWriteBarrier(&___connectionGroup_12, value);
	}

	inline static int32_t get_offset_of_contentLength_13() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___contentLength_13)); }
	inline int64_t get_contentLength_13() const { return ___contentLength_13; }
	inline int64_t* get_address_of_contentLength_13() { return &___contentLength_13; }
	inline void set_contentLength_13(int64_t value)
	{
		___contentLength_13 = value;
	}

	inline static int32_t get_offset_of_continueDelegate_14() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___continueDelegate_14)); }
	inline HttpContinueDelegate_t835016574 * get_continueDelegate_14() const { return ___continueDelegate_14; }
	inline HttpContinueDelegate_t835016574 ** get_address_of_continueDelegate_14() { return &___continueDelegate_14; }
	inline void set_continueDelegate_14(HttpContinueDelegate_t835016574 * value)
	{
		___continueDelegate_14 = value;
		Il2CppCodeGenWriteBarrier(&___continueDelegate_14, value);
	}

	inline static int32_t get_offset_of_cookieContainer_15() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___cookieContainer_15)); }
	inline CookieContainer_t3399784903 * get_cookieContainer_15() const { return ___cookieContainer_15; }
	inline CookieContainer_t3399784903 ** get_address_of_cookieContainer_15() { return &___cookieContainer_15; }
	inline void set_cookieContainer_15(CookieContainer_t3399784903 * value)
	{
		___cookieContainer_15 = value;
		Il2CppCodeGenWriteBarrier(&___cookieContainer_15, value);
	}

	inline static int32_t get_offset_of_credentials_16() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___credentials_16)); }
	inline Il2CppObject * get_credentials_16() const { return ___credentials_16; }
	inline Il2CppObject ** get_address_of_credentials_16() { return &___credentials_16; }
	inline void set_credentials_16(Il2CppObject * value)
	{
		___credentials_16 = value;
		Il2CppCodeGenWriteBarrier(&___credentials_16, value);
	}

	inline static int32_t get_offset_of_haveResponse_17() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___haveResponse_17)); }
	inline bool get_haveResponse_17() const { return ___haveResponse_17; }
	inline bool* get_address_of_haveResponse_17() { return &___haveResponse_17; }
	inline void set_haveResponse_17(bool value)
	{
		___haveResponse_17 = value;
	}

	inline static int32_t get_offset_of_haveRequest_18() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___haveRequest_18)); }
	inline bool get_haveRequest_18() const { return ___haveRequest_18; }
	inline bool* get_address_of_haveRequest_18() { return &___haveRequest_18; }
	inline void set_haveRequest_18(bool value)
	{
		___haveRequest_18 = value;
	}

	inline static int32_t get_offset_of_requestSent_19() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___requestSent_19)); }
	inline bool get_requestSent_19() const { return ___requestSent_19; }
	inline bool* get_address_of_requestSent_19() { return &___requestSent_19; }
	inline void set_requestSent_19(bool value)
	{
		___requestSent_19 = value;
	}

	inline static int32_t get_offset_of_webHeaders_20() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___webHeaders_20)); }
	inline WebHeaderCollection_t1099177929 * get_webHeaders_20() const { return ___webHeaders_20; }
	inline WebHeaderCollection_t1099177929 ** get_address_of_webHeaders_20() { return &___webHeaders_20; }
	inline void set_webHeaders_20(WebHeaderCollection_t1099177929 * value)
	{
		___webHeaders_20 = value;
		Il2CppCodeGenWriteBarrier(&___webHeaders_20, value);
	}

	inline static int32_t get_offset_of_keepAlive_21() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___keepAlive_21)); }
	inline bool get_keepAlive_21() const { return ___keepAlive_21; }
	inline bool* get_address_of_keepAlive_21() { return &___keepAlive_21; }
	inline void set_keepAlive_21(bool value)
	{
		___keepAlive_21 = value;
	}

	inline static int32_t get_offset_of_maxAutoRedirect_22() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___maxAutoRedirect_22)); }
	inline int32_t get_maxAutoRedirect_22() const { return ___maxAutoRedirect_22; }
	inline int32_t* get_address_of_maxAutoRedirect_22() { return &___maxAutoRedirect_22; }
	inline void set_maxAutoRedirect_22(int32_t value)
	{
		___maxAutoRedirect_22 = value;
	}

	inline static int32_t get_offset_of_mediaType_23() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___mediaType_23)); }
	inline String_t* get_mediaType_23() const { return ___mediaType_23; }
	inline String_t** get_address_of_mediaType_23() { return &___mediaType_23; }
	inline void set_mediaType_23(String_t* value)
	{
		___mediaType_23 = value;
		Il2CppCodeGenWriteBarrier(&___mediaType_23, value);
	}

	inline static int32_t get_offset_of_method_24() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___method_24)); }
	inline String_t* get_method_24() const { return ___method_24; }
	inline String_t** get_address_of_method_24() { return &___method_24; }
	inline void set_method_24(String_t* value)
	{
		___method_24 = value;
		Il2CppCodeGenWriteBarrier(&___method_24, value);
	}

	inline static int32_t get_offset_of_initialMethod_25() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___initialMethod_25)); }
	inline String_t* get_initialMethod_25() const { return ___initialMethod_25; }
	inline String_t** get_address_of_initialMethod_25() { return &___initialMethod_25; }
	inline void set_initialMethod_25(String_t* value)
	{
		___initialMethod_25 = value;
		Il2CppCodeGenWriteBarrier(&___initialMethod_25, value);
	}

	inline static int32_t get_offset_of_pipelined_26() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___pipelined_26)); }
	inline bool get_pipelined_26() const { return ___pipelined_26; }
	inline bool* get_address_of_pipelined_26() { return &___pipelined_26; }
	inline void set_pipelined_26(bool value)
	{
		___pipelined_26 = value;
	}

	inline static int32_t get_offset_of_preAuthenticate_27() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___preAuthenticate_27)); }
	inline bool get_preAuthenticate_27() const { return ___preAuthenticate_27; }
	inline bool* get_address_of_preAuthenticate_27() { return &___preAuthenticate_27; }
	inline void set_preAuthenticate_27(bool value)
	{
		___preAuthenticate_27 = value;
	}

	inline static int32_t get_offset_of_usedPreAuth_28() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___usedPreAuth_28)); }
	inline bool get_usedPreAuth_28() const { return ___usedPreAuth_28; }
	inline bool* get_address_of_usedPreAuth_28() { return &___usedPreAuth_28; }
	inline void set_usedPreAuth_28(bool value)
	{
		___usedPreAuth_28 = value;
	}

	inline static int32_t get_offset_of_version_29() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___version_29)); }
	inline Version_t497901645 * get_version_29() const { return ___version_29; }
	inline Version_t497901645 ** get_address_of_version_29() { return &___version_29; }
	inline void set_version_29(Version_t497901645 * value)
	{
		___version_29 = value;
		Il2CppCodeGenWriteBarrier(&___version_29, value);
	}

	inline static int32_t get_offset_of_actualVersion_30() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___actualVersion_30)); }
	inline Version_t497901645 * get_actualVersion_30() const { return ___actualVersion_30; }
	inline Version_t497901645 ** get_address_of_actualVersion_30() { return &___actualVersion_30; }
	inline void set_actualVersion_30(Version_t497901645 * value)
	{
		___actualVersion_30 = value;
		Il2CppCodeGenWriteBarrier(&___actualVersion_30, value);
	}

	inline static int32_t get_offset_of_proxy_31() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___proxy_31)); }
	inline Il2CppObject * get_proxy_31() const { return ___proxy_31; }
	inline Il2CppObject ** get_address_of_proxy_31() { return &___proxy_31; }
	inline void set_proxy_31(Il2CppObject * value)
	{
		___proxy_31 = value;
		Il2CppCodeGenWriteBarrier(&___proxy_31, value);
	}

	inline static int32_t get_offset_of_sendChunked_32() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___sendChunked_32)); }
	inline bool get_sendChunked_32() const { return ___sendChunked_32; }
	inline bool* get_address_of_sendChunked_32() { return &___sendChunked_32; }
	inline void set_sendChunked_32(bool value)
	{
		___sendChunked_32 = value;
	}

	inline static int32_t get_offset_of_servicePoint_33() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___servicePoint_33)); }
	inline ServicePoint_t28240741 * get_servicePoint_33() const { return ___servicePoint_33; }
	inline ServicePoint_t28240741 ** get_address_of_servicePoint_33() { return &___servicePoint_33; }
	inline void set_servicePoint_33(ServicePoint_t28240741 * value)
	{
		___servicePoint_33 = value;
		Il2CppCodeGenWriteBarrier(&___servicePoint_33, value);
	}

	inline static int32_t get_offset_of_timeout_34() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___timeout_34)); }
	inline int32_t get_timeout_34() const { return ___timeout_34; }
	inline int32_t* get_address_of_timeout_34() { return &___timeout_34; }
	inline void set_timeout_34(int32_t value)
	{
		___timeout_34 = value;
	}

	inline static int32_t get_offset_of_writeStream_35() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___writeStream_35)); }
	inline WebConnectionStream_t944986812 * get_writeStream_35() const { return ___writeStream_35; }
	inline WebConnectionStream_t944986812 ** get_address_of_writeStream_35() { return &___writeStream_35; }
	inline void set_writeStream_35(WebConnectionStream_t944986812 * value)
	{
		___writeStream_35 = value;
		Il2CppCodeGenWriteBarrier(&___writeStream_35, value);
	}

	inline static int32_t get_offset_of_webResponse_36() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___webResponse_36)); }
	inline HttpWebResponse_t2667966807 * get_webResponse_36() const { return ___webResponse_36; }
	inline HttpWebResponse_t2667966807 ** get_address_of_webResponse_36() { return &___webResponse_36; }
	inline void set_webResponse_36(HttpWebResponse_t2667966807 * value)
	{
		___webResponse_36 = value;
		Il2CppCodeGenWriteBarrier(&___webResponse_36, value);
	}

	inline static int32_t get_offset_of_asyncWrite_37() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___asyncWrite_37)); }
	inline WebAsyncResult_t4198106447 * get_asyncWrite_37() const { return ___asyncWrite_37; }
	inline WebAsyncResult_t4198106447 ** get_address_of_asyncWrite_37() { return &___asyncWrite_37; }
	inline void set_asyncWrite_37(WebAsyncResult_t4198106447 * value)
	{
		___asyncWrite_37 = value;
		Il2CppCodeGenWriteBarrier(&___asyncWrite_37, value);
	}

	inline static int32_t get_offset_of_asyncRead_38() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___asyncRead_38)); }
	inline WebAsyncResult_t4198106447 * get_asyncRead_38() const { return ___asyncRead_38; }
	inline WebAsyncResult_t4198106447 ** get_address_of_asyncRead_38() { return &___asyncRead_38; }
	inline void set_asyncRead_38(WebAsyncResult_t4198106447 * value)
	{
		___asyncRead_38 = value;
		Il2CppCodeGenWriteBarrier(&___asyncRead_38, value);
	}

	inline static int32_t get_offset_of_abortHandler_39() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___abortHandler_39)); }
	inline EventHandler_t247020293 * get_abortHandler_39() const { return ___abortHandler_39; }
	inline EventHandler_t247020293 ** get_address_of_abortHandler_39() { return &___abortHandler_39; }
	inline void set_abortHandler_39(EventHandler_t247020293 * value)
	{
		___abortHandler_39 = value;
		Il2CppCodeGenWriteBarrier(&___abortHandler_39, value);
	}

	inline static int32_t get_offset_of_aborted_40() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___aborted_40)); }
	inline int32_t get_aborted_40() const { return ___aborted_40; }
	inline int32_t* get_address_of_aborted_40() { return &___aborted_40; }
	inline void set_aborted_40(int32_t value)
	{
		___aborted_40 = value;
	}

	inline static int32_t get_offset_of_gotRequestStream_41() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___gotRequestStream_41)); }
	inline bool get_gotRequestStream_41() const { return ___gotRequestStream_41; }
	inline bool* get_address_of_gotRequestStream_41() { return &___gotRequestStream_41; }
	inline void set_gotRequestStream_41(bool value)
	{
		___gotRequestStream_41 = value;
	}

	inline static int32_t get_offset_of_redirects_42() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___redirects_42)); }
	inline int32_t get_redirects_42() const { return ___redirects_42; }
	inline int32_t* get_address_of_redirects_42() { return &___redirects_42; }
	inline void set_redirects_42(int32_t value)
	{
		___redirects_42 = value;
	}

	inline static int32_t get_offset_of_expectContinue_43() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___expectContinue_43)); }
	inline bool get_expectContinue_43() const { return ___expectContinue_43; }
	inline bool* get_address_of_expectContinue_43() { return &___expectContinue_43; }
	inline void set_expectContinue_43(bool value)
	{
		___expectContinue_43 = value;
	}

	inline static int32_t get_offset_of_authCompleted_44() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___authCompleted_44)); }
	inline bool get_authCompleted_44() const { return ___authCompleted_44; }
	inline bool* get_address_of_authCompleted_44() { return &___authCompleted_44; }
	inline void set_authCompleted_44(bool value)
	{
		___authCompleted_44 = value;
	}

	inline static int32_t get_offset_of_bodyBuffer_45() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___bodyBuffer_45)); }
	inline ByteU5BU5D_t58506160* get_bodyBuffer_45() const { return ___bodyBuffer_45; }
	inline ByteU5BU5D_t58506160** get_address_of_bodyBuffer_45() { return &___bodyBuffer_45; }
	inline void set_bodyBuffer_45(ByteU5BU5D_t58506160* value)
	{
		___bodyBuffer_45 = value;
		Il2CppCodeGenWriteBarrier(&___bodyBuffer_45, value);
	}

	inline static int32_t get_offset_of_bodyBufferLength_46() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___bodyBufferLength_46)); }
	inline int32_t get_bodyBufferLength_46() const { return ___bodyBufferLength_46; }
	inline int32_t* get_address_of_bodyBufferLength_46() { return &___bodyBufferLength_46; }
	inline void set_bodyBufferLength_46(int32_t value)
	{
		___bodyBufferLength_46 = value;
	}

	inline static int32_t get_offset_of_getResponseCalled_47() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___getResponseCalled_47)); }
	inline bool get_getResponseCalled_47() const { return ___getResponseCalled_47; }
	inline bool* get_address_of_getResponseCalled_47() { return &___getResponseCalled_47; }
	inline void set_getResponseCalled_47(bool value)
	{
		___getResponseCalled_47 = value;
	}

	inline static int32_t get_offset_of_saved_exc_48() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___saved_exc_48)); }
	inline Exception_t1967233988 * get_saved_exc_48() const { return ___saved_exc_48; }
	inline Exception_t1967233988 ** get_address_of_saved_exc_48() { return &___saved_exc_48; }
	inline void set_saved_exc_48(Exception_t1967233988 * value)
	{
		___saved_exc_48 = value;
		Il2CppCodeGenWriteBarrier(&___saved_exc_48, value);
	}

	inline static int32_t get_offset_of_locker_49() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___locker_49)); }
	inline Il2CppObject * get_locker_49() const { return ___locker_49; }
	inline Il2CppObject ** get_address_of_locker_49() { return &___locker_49; }
	inline void set_locker_49(Il2CppObject * value)
	{
		___locker_49 = value;
		Il2CppCodeGenWriteBarrier(&___locker_49, value);
	}

	inline static int32_t get_offset_of_is_ntlm_auth_50() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___is_ntlm_auth_50)); }
	inline bool get_is_ntlm_auth_50() const { return ___is_ntlm_auth_50; }
	inline bool* get_address_of_is_ntlm_auth_50() { return &___is_ntlm_auth_50; }
	inline void set_is_ntlm_auth_50(bool value)
	{
		___is_ntlm_auth_50 = value;
	}

	inline static int32_t get_offset_of_finished_reading_51() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___finished_reading_51)); }
	inline bool get_finished_reading_51() const { return ___finished_reading_51; }
	inline bool* get_address_of_finished_reading_51() { return &___finished_reading_51; }
	inline void set_finished_reading_51(bool value)
	{
		___finished_reading_51 = value;
	}

	inline static int32_t get_offset_of_WebConnection_52() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___WebConnection_52)); }
	inline WebConnection_t1124289692 * get_WebConnection_52() const { return ___WebConnection_52; }
	inline WebConnection_t1124289692 ** get_address_of_WebConnection_52() { return &___WebConnection_52; }
	inline void set_WebConnection_52(WebConnection_t1124289692 * value)
	{
		___WebConnection_52 = value;
		Il2CppCodeGenWriteBarrier(&___WebConnection_52, value);
	}

	inline static int32_t get_offset_of_auto_decomp_53() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___auto_decomp_53)); }
	inline int32_t get_auto_decomp_53() const { return ___auto_decomp_53; }
	inline int32_t* get_address_of_auto_decomp_53() { return &___auto_decomp_53; }
	inline void set_auto_decomp_53(int32_t value)
	{
		___auto_decomp_53 = value;
	}

	inline static int32_t get_offset_of_readWriteTimeout_55() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___readWriteTimeout_55)); }
	inline int32_t get_readWriteTimeout_55() const { return ___readWriteTimeout_55; }
	inline int32_t* get_address_of_readWriteTimeout_55() { return &___readWriteTimeout_55; }
	inline void set_readWriteTimeout_55(int32_t value)
	{
		___readWriteTimeout_55 = value;
	}

	inline static int32_t get_offset_of_unsafe_auth_blah_56() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869, ___unsafe_auth_blah_56)); }
	inline bool get_unsafe_auth_blah_56() const { return ___unsafe_auth_blah_56; }
	inline bool* get_address_of_unsafe_auth_blah_56() { return &___unsafe_auth_blah_56; }
	inline void set_unsafe_auth_blah_56(bool value)
	{
		___unsafe_auth_blah_56 = value;
	}
};

struct HttpWebRequest_t171953869_StaticFields
{
public:
	// System.Int32 System.Net.HttpWebRequest::defaultMaxResponseHeadersLength
	int32_t ___defaultMaxResponseHeadersLength_54;

public:
	inline static int32_t get_offset_of_defaultMaxResponseHeadersLength_54() { return static_cast<int32_t>(offsetof(HttpWebRequest_t171953869_StaticFields, ___defaultMaxResponseHeadersLength_54)); }
	inline int32_t get_defaultMaxResponseHeadersLength_54() const { return ___defaultMaxResponseHeadersLength_54; }
	inline int32_t* get_address_of_defaultMaxResponseHeadersLength_54() { return &___defaultMaxResponseHeadersLength_54; }
	inline void set_defaultMaxResponseHeadersLength_54(int32_t value)
	{
		___defaultMaxResponseHeadersLength_54 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
