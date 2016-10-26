#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.AsyncCallback
struct AsyncCallback_t1369114871;
// System.Exception
struct Exception_t3991598821;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t924017833;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.IO.Stream
struct Stream_t1561764144;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct  ReceiveRecordAsyncResult_t4254633253  : public Il2CppObject
{
public:
	// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::locker
	Il2CppObject * ___locker_0;
	// System.AsyncCallback Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_userCallback
	AsyncCallback_t1369114871 * ____userCallback_1;
	// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_userState
	Il2CppObject * ____userState_2;
	// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_asyncException
	Exception_t3991598821 * ____asyncException_3;
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::handle
	ManualResetEvent_t924017833 * ___handle_4;
	// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_resultingBuffer
	ByteU5BU5D_t4260760469* ____resultingBuffer_5;
	// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_record
	Stream_t1561764144 * ____record_6;
	// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::completed
	bool ___completed_7;
	// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_initialBuffer
	ByteU5BU5D_t4260760469* ____initialBuffer_8;

public:
	inline static int32_t get_offset_of_locker_0() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t4254633253, ___locker_0)); }
	inline Il2CppObject * get_locker_0() const { return ___locker_0; }
	inline Il2CppObject ** get_address_of_locker_0() { return &___locker_0; }
	inline void set_locker_0(Il2CppObject * value)
	{
		___locker_0 = value;
		Il2CppCodeGenWriteBarrier(&___locker_0, value);
	}

	inline static int32_t get_offset_of__userCallback_1() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t4254633253, ____userCallback_1)); }
	inline AsyncCallback_t1369114871 * get__userCallback_1() const { return ____userCallback_1; }
	inline AsyncCallback_t1369114871 ** get_address_of__userCallback_1() { return &____userCallback_1; }
	inline void set__userCallback_1(AsyncCallback_t1369114871 * value)
	{
		____userCallback_1 = value;
		Il2CppCodeGenWriteBarrier(&____userCallback_1, value);
	}

	inline static int32_t get_offset_of__userState_2() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t4254633253, ____userState_2)); }
	inline Il2CppObject * get__userState_2() const { return ____userState_2; }
	inline Il2CppObject ** get_address_of__userState_2() { return &____userState_2; }
	inline void set__userState_2(Il2CppObject * value)
	{
		____userState_2 = value;
		Il2CppCodeGenWriteBarrier(&____userState_2, value);
	}

	inline static int32_t get_offset_of__asyncException_3() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t4254633253, ____asyncException_3)); }
	inline Exception_t3991598821 * get__asyncException_3() const { return ____asyncException_3; }
	inline Exception_t3991598821 ** get_address_of__asyncException_3() { return &____asyncException_3; }
	inline void set__asyncException_3(Exception_t3991598821 * value)
	{
		____asyncException_3 = value;
		Il2CppCodeGenWriteBarrier(&____asyncException_3, value);
	}

	inline static int32_t get_offset_of_handle_4() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t4254633253, ___handle_4)); }
	inline ManualResetEvent_t924017833 * get_handle_4() const { return ___handle_4; }
	inline ManualResetEvent_t924017833 ** get_address_of_handle_4() { return &___handle_4; }
	inline void set_handle_4(ManualResetEvent_t924017833 * value)
	{
		___handle_4 = value;
		Il2CppCodeGenWriteBarrier(&___handle_4, value);
	}

	inline static int32_t get_offset_of__resultingBuffer_5() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t4254633253, ____resultingBuffer_5)); }
	inline ByteU5BU5D_t4260760469* get__resultingBuffer_5() const { return ____resultingBuffer_5; }
	inline ByteU5BU5D_t4260760469** get_address_of__resultingBuffer_5() { return &____resultingBuffer_5; }
	inline void set__resultingBuffer_5(ByteU5BU5D_t4260760469* value)
	{
		____resultingBuffer_5 = value;
		Il2CppCodeGenWriteBarrier(&____resultingBuffer_5, value);
	}

	inline static int32_t get_offset_of__record_6() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t4254633253, ____record_6)); }
	inline Stream_t1561764144 * get__record_6() const { return ____record_6; }
	inline Stream_t1561764144 ** get_address_of__record_6() { return &____record_6; }
	inline void set__record_6(Stream_t1561764144 * value)
	{
		____record_6 = value;
		Il2CppCodeGenWriteBarrier(&____record_6, value);
	}

	inline static int32_t get_offset_of_completed_7() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t4254633253, ___completed_7)); }
	inline bool get_completed_7() const { return ___completed_7; }
	inline bool* get_address_of_completed_7() { return &___completed_7; }
	inline void set_completed_7(bool value)
	{
		___completed_7 = value;
	}

	inline static int32_t get_offset_of__initialBuffer_8() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t4254633253, ____initialBuffer_8)); }
	inline ByteU5BU5D_t4260760469* get__initialBuffer_8() const { return ____initialBuffer_8; }
	inline ByteU5BU5D_t4260760469** get_address_of__initialBuffer_8() { return &____initialBuffer_8; }
	inline void set__initialBuffer_8(ByteU5BU5D_t4260760469* value)
	{
		____initialBuffer_8 = value;
		Il2CppCodeGenWriteBarrier(&____initialBuffer_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
