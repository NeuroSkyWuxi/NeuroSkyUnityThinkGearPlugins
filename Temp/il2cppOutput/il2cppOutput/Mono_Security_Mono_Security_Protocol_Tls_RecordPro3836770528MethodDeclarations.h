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

// Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult
struct SendRecordAsyncResult_t3836770528;
// System.AsyncCallback
struct AsyncCallback_t1369114871;
// System.Object
struct Il2CppObject;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t2623608376;
// System.Exception
struct Exception_t3991598821;
// System.Threading.WaitHandle
struct WaitHandle_t1661568373;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_AsyncCallback1369114871.h"
#include "mscorlib_System_Object4170816371.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake2623608376.h"
#include "mscorlib_System_Exception3991598821.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,Mono.Security.Protocol.Tls.Handshake.HandshakeMessage)
extern "C"  void SendRecordAsyncResult__ctor_m1199829305 (SendRecordAsyncResult_t3836770528 * __this, AsyncCallback_t1369114871 * ___userCallback0, Il2CppObject * ___userState1, HandshakeMessage_t2623608376 * ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_Message()
extern "C"  HandshakeMessage_t2623608376 * SendRecordAsyncResult_get_Message_m2765274544 (SendRecordAsyncResult_t3836770528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncState()
extern "C"  Il2CppObject * SendRecordAsyncResult_get_AsyncState_m2665400351 (SendRecordAsyncResult_t3836770528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncException()
extern "C"  Exception_t3991598821 * SendRecordAsyncResult_get_AsyncException_m776645195 (SendRecordAsyncResult_t3836770528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_CompletedWithError()
extern "C"  bool SendRecordAsyncResult_get_CompletedWithError_m771666376 (SendRecordAsyncResult_t3836770528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t1661568373 * SendRecordAsyncResult_get_AsyncWaitHandle_m1260948317 (SendRecordAsyncResult_t3836770528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_IsCompleted()
extern "C"  bool SendRecordAsyncResult_get_IsCompleted_m775666514 (SendRecordAsyncResult_t3836770528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::SetComplete(System.Exception)
extern "C"  void SendRecordAsyncResult_SetComplete_m323449559 (SendRecordAsyncResult_t3836770528 * __this, Exception_t3991598821 * ___ex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::SetComplete()
extern "C"  void SendRecordAsyncResult_SetComplete_m1807552551 (SendRecordAsyncResult_t3836770528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
