#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Ionic.Zip.ZipCrypto
struct ZipCrypto_t3808125209;
// System.IO.Stream
struct Stream_t219029575;

#include "mscorlib_System_IO_Stream219029575.h"
#include "AssemblyU2DCSharp_Ionic_Zip_CryptoMode2316327963.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Zip.ZipCipherStream
struct  ZipCipherStream_t1849856259  : public Stream_t219029575
{
public:
	// Ionic.Zip.ZipCrypto Ionic.Zip.ZipCipherStream::_cipher
	ZipCrypto_t3808125209 * ____cipher_2;
	// System.IO.Stream Ionic.Zip.ZipCipherStream::_s
	Stream_t219029575 * ____s_3;
	// Ionic.Zip.CryptoMode Ionic.Zip.ZipCipherStream::_mode
	int32_t ____mode_4;

public:
	inline static int32_t get_offset_of__cipher_2() { return static_cast<int32_t>(offsetof(ZipCipherStream_t1849856259, ____cipher_2)); }
	inline ZipCrypto_t3808125209 * get__cipher_2() const { return ____cipher_2; }
	inline ZipCrypto_t3808125209 ** get_address_of__cipher_2() { return &____cipher_2; }
	inline void set__cipher_2(ZipCrypto_t3808125209 * value)
	{
		____cipher_2 = value;
		Il2CppCodeGenWriteBarrier(&____cipher_2, value);
	}

	inline static int32_t get_offset_of__s_3() { return static_cast<int32_t>(offsetof(ZipCipherStream_t1849856259, ____s_3)); }
	inline Stream_t219029575 * get__s_3() const { return ____s_3; }
	inline Stream_t219029575 ** get_address_of__s_3() { return &____s_3; }
	inline void set__s_3(Stream_t219029575 * value)
	{
		____s_3 = value;
		Il2CppCodeGenWriteBarrier(&____s_3, value);
	}

	inline static int32_t get_offset_of__mode_4() { return static_cast<int32_t>(offsetof(ZipCipherStream_t1849856259, ____mode_4)); }
	inline int32_t get__mode_4() const { return ____mode_4; }
	inline int32_t* get_address_of__mode_4() { return &____mode_4; }
	inline void set__mode_4(int32_t value)
	{
		____mode_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
