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
// System.IO.FileStream
struct FileStream_t1527309539;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1099177929;

#include "System_System_Net_WebResponse2411292415.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FileWebResponse
struct  FileWebResponse_t1846354915  : public WebResponse_t2411292415
{
public:
	// System.Uri System.Net.FileWebResponse::responseUri
	Uri_t2776692961 * ___responseUri_1;
	// System.IO.FileStream System.Net.FileWebResponse::fileStream
	FileStream_t1527309539 * ___fileStream_2;
	// System.Int64 System.Net.FileWebResponse::contentLength
	int64_t ___contentLength_3;
	// System.Net.WebHeaderCollection System.Net.FileWebResponse::webHeaders
	WebHeaderCollection_t1099177929 * ___webHeaders_4;
	// System.Boolean System.Net.FileWebResponse::disposed
	bool ___disposed_5;

public:
	inline static int32_t get_offset_of_responseUri_1() { return static_cast<int32_t>(offsetof(FileWebResponse_t1846354915, ___responseUri_1)); }
	inline Uri_t2776692961 * get_responseUri_1() const { return ___responseUri_1; }
	inline Uri_t2776692961 ** get_address_of_responseUri_1() { return &___responseUri_1; }
	inline void set_responseUri_1(Uri_t2776692961 * value)
	{
		___responseUri_1 = value;
		Il2CppCodeGenWriteBarrier(&___responseUri_1, value);
	}

	inline static int32_t get_offset_of_fileStream_2() { return static_cast<int32_t>(offsetof(FileWebResponse_t1846354915, ___fileStream_2)); }
	inline FileStream_t1527309539 * get_fileStream_2() const { return ___fileStream_2; }
	inline FileStream_t1527309539 ** get_address_of_fileStream_2() { return &___fileStream_2; }
	inline void set_fileStream_2(FileStream_t1527309539 * value)
	{
		___fileStream_2 = value;
		Il2CppCodeGenWriteBarrier(&___fileStream_2, value);
	}

	inline static int32_t get_offset_of_contentLength_3() { return static_cast<int32_t>(offsetof(FileWebResponse_t1846354915, ___contentLength_3)); }
	inline int64_t get_contentLength_3() const { return ___contentLength_3; }
	inline int64_t* get_address_of_contentLength_3() { return &___contentLength_3; }
	inline void set_contentLength_3(int64_t value)
	{
		___contentLength_3 = value;
	}

	inline static int32_t get_offset_of_webHeaders_4() { return static_cast<int32_t>(offsetof(FileWebResponse_t1846354915, ___webHeaders_4)); }
	inline WebHeaderCollection_t1099177929 * get_webHeaders_4() const { return ___webHeaders_4; }
	inline WebHeaderCollection_t1099177929 ** get_address_of_webHeaders_4() { return &___webHeaders_4; }
	inline void set_webHeaders_4(WebHeaderCollection_t1099177929 * value)
	{
		___webHeaders_4 = value;
		Il2CppCodeGenWriteBarrier(&___webHeaders_4, value);
	}

	inline static int32_t get_offset_of_disposed_5() { return static_cast<int32_t>(offsetof(FileWebResponse_t1846354915, ___disposed_5)); }
	inline bool get_disposed_5() const { return ___disposed_5; }
	inline bool* get_address_of_disposed_5() { return &___disposed_5; }
	inline void set_disposed_5(bool value)
	{
		___disposed_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
