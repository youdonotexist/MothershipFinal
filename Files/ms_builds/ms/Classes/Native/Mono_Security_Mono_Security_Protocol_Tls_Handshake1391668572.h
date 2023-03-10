#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_276412187.h"
#include "mscorlib_System_Security_Cryptography_RSAParameter2711684451.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
struct  TlsServerKeyExchange_t1391668572  : public HandshakeMessage_t276412187
{
public:
	// System.Security.Cryptography.RSAParameters Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::rsaParams
	RSAParameters_t2711684451  ___rsaParams_10;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::signedParams
	ByteU5BU5D_t58506160* ___signedParams_11;

public:
	inline static int32_t get_offset_of_rsaParams_10() { return static_cast<int32_t>(offsetof(TlsServerKeyExchange_t1391668572, ___rsaParams_10)); }
	inline RSAParameters_t2711684451  get_rsaParams_10() const { return ___rsaParams_10; }
	inline RSAParameters_t2711684451 * get_address_of_rsaParams_10() { return &___rsaParams_10; }
	inline void set_rsaParams_10(RSAParameters_t2711684451  value)
	{
		___rsaParams_10 = value;
	}

	inline static int32_t get_offset_of_signedParams_11() { return static_cast<int32_t>(offsetof(TlsServerKeyExchange_t1391668572, ___signedParams_11)); }
	inline ByteU5BU5D_t58506160* get_signedParams_11() const { return ___signedParams_11; }
	inline ByteU5BU5D_t58506160** get_address_of_signedParams_11() { return &___signedParams_11; }
	inline void set_signedParams_11(ByteU5BU5D_t58506160* value)
	{
		___signedParams_11 = value;
		Il2CppCodeGenWriteBarrier(&___signedParams_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
