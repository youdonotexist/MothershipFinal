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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientFinished
struct  TlsClientFinished_t2295380400  : public HandshakeMessage_t276412187
{
public:

public:
};

struct TlsClientFinished_t2295380400_StaticFields
{
public:
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsClientFinished::Ssl3Marker
	ByteU5BU5D_t58506160* ___Ssl3Marker_10;

public:
	inline static int32_t get_offset_of_Ssl3Marker_10() { return static_cast<int32_t>(offsetof(TlsClientFinished_t2295380400_StaticFields, ___Ssl3Marker_10)); }
	inline ByteU5BU5D_t58506160* get_Ssl3Marker_10() const { return ___Ssl3Marker_10; }
	inline ByteU5BU5D_t58506160** get_address_of_Ssl3Marker_10() { return &___Ssl3Marker_10; }
	inline void set_Ssl3Marker_10(ByteU5BU5D_t58506160* value)
	{
		___Ssl3Marker_10 = value;
		Il2CppCodeGenWriteBarrier(&___Ssl3Marker_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
