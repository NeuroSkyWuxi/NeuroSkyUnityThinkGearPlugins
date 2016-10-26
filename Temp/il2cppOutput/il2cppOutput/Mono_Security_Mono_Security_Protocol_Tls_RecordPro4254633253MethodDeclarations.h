#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t4254633253;
// System.AsyncCallback
struct AsyncCallback_t1369114871;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.IO.Stream
struct Stream_t1561764144;
// System.Exception
struct Exception_t3991598821;
// System.Threading.WaitHandle
struct WaitHandle_t1661568373;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_AsyncCallback1369114871.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "mscorlib_System_Exception3991598821.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C"  void ReceiveRecordAsyncResult__ctor_m2998582075 (ReceiveRecordAsyncResult_t4254633253 * __this, AsyncCallback_t1369114871 * ___userCallback0, Il2CppObject * ___userState1, ByteU5BU5D_t4260760469* ___initialBuffer2, Stream_t1561764144 * ___record3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C"  Stream_t1561764144 * ReceiveRecordAsyncResult_get_Record_m871815161 (ReceiveRecordAsyncResult_t4254633253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C"  ByteU5BU5D_t4260760469* ReceiveRecordAsyncResult_get_ResultingBuffer_m3820567043 (ReceiveRecordAsyncResult_t4254633253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C"  ByteU5BU5D_t4260760469* ReceiveRecordAsyncResult_get_InitialBuffer_m2778078946 (ReceiveRecordAsyncResult_t4254633253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C"  Il2CppObject * ReceiveRecordAsyncResult_get_AsyncState_m3272189028 (ReceiveRecordAsyncResult_t4254633253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C"  Exception_t3991598821 * ReceiveRecordAsyncResult_get_AsyncException_m3323094132 (ReceiveRecordAsyncResult_t4254633253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C"  bool ReceiveRecordAsyncResult_get_CompletedWithError_m3317022751 (ReceiveRecordAsyncResult_t4254633253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t1661568373 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m1089809952 (ReceiveRecordAsyncResult_t4254633253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C"  bool ReceiveRecordAsyncResult_get_IsCompleted_m736891099 (ReceiveRecordAsyncResult_t4254633253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C"  void ReceiveRecordAsyncResult_SetComplete_m3955953983 (ReceiveRecordAsyncResult_t4254633253 * __this, Exception_t3991598821 * ___ex0, ByteU5BU5D_t4260760469* ___resultingBuffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C"  void ReceiveRecordAsyncResult_SetComplete_m1288331580 (ReceiveRecordAsyncResult_t4254633253 * __this, Exception_t3991598821 * ___ex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C"  void ReceiveRecordAsyncResult_SetComplete_m652335805 (ReceiveRecordAsyncResult_t4254633253 * __this, ByteU5BU5D_t4260760469* ___resultingBuffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
