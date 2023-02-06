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
// System.Net.HttpWebRequest
struct HttpWebRequest_t171953869;
// System.Net.HttpWebResponse
struct HttpWebResponse_t2667966807;
// System.IO.Stream
struct Stream_t219029575;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// System.Action`1<CI.Request>
struct Action_1_t240417554;
// CI.Request
struct Request_t91964849;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CI.RequestState
struct  RequestState_t3083088548  : public Il2CppObject
{
public:
	// System.Byte[] CI.RequestState::BufferRead
	ByteU5BU5D_t58506160* ___BufferRead_1;
	// System.Net.HttpWebRequest CI.RequestState::request
	HttpWebRequest_t171953869 * ___request_2;
	// System.Net.HttpWebResponse CI.RequestState::response
	HttpWebResponse_t2667966807 * ___response_3;
	// System.IO.Stream CI.RequestState::streamResponse
	Stream_t219029575 * ___streamResponse_4;
	// System.Boolean CI.RequestState::isDone
	bool ___isDone_5;
	// System.Boolean CI.RequestState::isCachedDataDone
	bool ___isCachedDataDone_6;
	// System.Boolean CI.RequestState::useCache
	bool ___useCache_7;
	// System.String CI.RequestState::requestData
	String_t* ___requestData_8;
	// System.Byte[] CI.RequestState::requestDataBytes
	ByteU5BU5D_t58506160* ___requestDataBytes_9;
	// System.Text.StringBuilder CI.RequestState::responseData
	StringBuilder_t3822575854 * ___responseData_10;
	// System.Action`1<CI.Request> CI.RequestState::callback
	Action_1_t240417554 * ___callback_11;
	// CI.Request CI.RequestState::owningRequest
	Request_t91964849 * ___owningRequest_12;

public:
	inline static int32_t get_offset_of_BufferRead_1() { return static_cast<int32_t>(offsetof(RequestState_t3083088548, ___BufferRead_1)); }
	inline ByteU5BU5D_t58506160* get_BufferRead_1() const { return ___BufferRead_1; }
	inline ByteU5BU5D_t58506160** get_address_of_BufferRead_1() { return &___BufferRead_1; }
	inline void set_BufferRead_1(ByteU5BU5D_t58506160* value)
	{
		___BufferRead_1 = value;
		Il2CppCodeGenWriteBarrier(&___BufferRead_1, value);
	}

	inline static int32_t get_offset_of_request_2() { return static_cast<int32_t>(offsetof(RequestState_t3083088548, ___request_2)); }
	inline HttpWebRequest_t171953869 * get_request_2() const { return ___request_2; }
	inline HttpWebRequest_t171953869 ** get_address_of_request_2() { return &___request_2; }
	inline void set_request_2(HttpWebRequest_t171953869 * value)
	{
		___request_2 = value;
		Il2CppCodeGenWriteBarrier(&___request_2, value);
	}

	inline static int32_t get_offset_of_response_3() { return static_cast<int32_t>(offsetof(RequestState_t3083088548, ___response_3)); }
	inline HttpWebResponse_t2667966807 * get_response_3() const { return ___response_3; }
	inline HttpWebResponse_t2667966807 ** get_address_of_response_3() { return &___response_3; }
	inline void set_response_3(HttpWebResponse_t2667966807 * value)
	{
		___response_3 = value;
		Il2CppCodeGenWriteBarrier(&___response_3, value);
	}

	inline static int32_t get_offset_of_streamResponse_4() { return static_cast<int32_t>(offsetof(RequestState_t3083088548, ___streamResponse_4)); }
	inline Stream_t219029575 * get_streamResponse_4() const { return ___streamResponse_4; }
	inline Stream_t219029575 ** get_address_of_streamResponse_4() { return &___streamResponse_4; }
	inline void set_streamResponse_4(Stream_t219029575 * value)
	{
		___streamResponse_4 = value;
		Il2CppCodeGenWriteBarrier(&___streamResponse_4, value);
	}

	inline static int32_t get_offset_of_isDone_5() { return static_cast<int32_t>(offsetof(RequestState_t3083088548, ___isDone_5)); }
	inline bool get_isDone_5() const { return ___isDone_5; }
	inline bool* get_address_of_isDone_5() { return &___isDone_5; }
	inline void set_isDone_5(bool value)
	{
		___isDone_5 = value;
	}

	inline static int32_t get_offset_of_isCachedDataDone_6() { return static_cast<int32_t>(offsetof(RequestState_t3083088548, ___isCachedDataDone_6)); }
	inline bool get_isCachedDataDone_6() const { return ___isCachedDataDone_6; }
	inline bool* get_address_of_isCachedDataDone_6() { return &___isCachedDataDone_6; }
	inline void set_isCachedDataDone_6(bool value)
	{
		___isCachedDataDone_6 = value;
	}

	inline static int32_t get_offset_of_useCache_7() { return static_cast<int32_t>(offsetof(RequestState_t3083088548, ___useCache_7)); }
	inline bool get_useCache_7() const { return ___useCache_7; }
	inline bool* get_address_of_useCache_7() { return &___useCache_7; }
	inline void set_useCache_7(bool value)
	{
		___useCache_7 = value;
	}

	inline static int32_t get_offset_of_requestData_8() { return static_cast<int32_t>(offsetof(RequestState_t3083088548, ___requestData_8)); }
	inline String_t* get_requestData_8() const { return ___requestData_8; }
	inline String_t** get_address_of_requestData_8() { return &___requestData_8; }
	inline void set_requestData_8(String_t* value)
	{
		___requestData_8 = value;
		Il2CppCodeGenWriteBarrier(&___requestData_8, value);
	}

	inline static int32_t get_offset_of_requestDataBytes_9() { return static_cast<int32_t>(offsetof(RequestState_t3083088548, ___requestDataBytes_9)); }
	inline ByteU5BU5D_t58506160* get_requestDataBytes_9() const { return ___requestDataBytes_9; }
	inline ByteU5BU5D_t58506160** get_address_of_requestDataBytes_9() { return &___requestDataBytes_9; }
	inline void set_requestDataBytes_9(ByteU5BU5D_t58506160* value)
	{
		___requestDataBytes_9 = value;
		Il2CppCodeGenWriteBarrier(&___requestDataBytes_9, value);
	}

	inline static int32_t get_offset_of_responseData_10() { return static_cast<int32_t>(offsetof(RequestState_t3083088548, ___responseData_10)); }
	inline StringBuilder_t3822575854 * get_responseData_10() const { return ___responseData_10; }
	inline StringBuilder_t3822575854 ** get_address_of_responseData_10() { return &___responseData_10; }
	inline void set_responseData_10(StringBuilder_t3822575854 * value)
	{
		___responseData_10 = value;
		Il2CppCodeGenWriteBarrier(&___responseData_10, value);
	}

	inline static int32_t get_offset_of_callback_11() { return static_cast<int32_t>(offsetof(RequestState_t3083088548, ___callback_11)); }
	inline Action_1_t240417554 * get_callback_11() const { return ___callback_11; }
	inline Action_1_t240417554 ** get_address_of_callback_11() { return &___callback_11; }
	inline void set_callback_11(Action_1_t240417554 * value)
	{
		___callback_11 = value;
		Il2CppCodeGenWriteBarrier(&___callback_11, value);
	}

	inline static int32_t get_offset_of_owningRequest_12() { return static_cast<int32_t>(offsetof(RequestState_t3083088548, ___owningRequest_12)); }
	inline Request_t91964849 * get_owningRequest_12() const { return ___owningRequest_12; }
	inline Request_t91964849 ** get_address_of_owningRequest_12() { return &___owningRequest_12; }
	inline void set_owningRequest_12(Request_t91964849 * value)
	{
		___owningRequest_12 = value;
		Il2CppCodeGenWriteBarrier(&___owningRequest_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
