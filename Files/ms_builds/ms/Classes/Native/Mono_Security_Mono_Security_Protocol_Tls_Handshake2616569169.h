#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3336811651;

#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_276412187.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
struct  TlsServerCertificate_t2616569169  : public HandshakeMessage_t276412187
{
public:
	// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::certificates
	X509CertificateCollection_t3336811651 * ___certificates_10;

public:
	inline static int32_t get_offset_of_certificates_10() { return static_cast<int32_t>(offsetof(TlsServerCertificate_t2616569169, ___certificates_10)); }
	inline X509CertificateCollection_t3336811651 * get_certificates_10() const { return ___certificates_10; }
	inline X509CertificateCollection_t3336811651 ** get_address_of_certificates_10() { return &___certificates_10; }
	inline void set_certificates_10(X509CertificateCollection_t3336811651 * value)
	{
		___certificates_10 = value;
		Il2CppCodeGenWriteBarrier(&___certificates_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
