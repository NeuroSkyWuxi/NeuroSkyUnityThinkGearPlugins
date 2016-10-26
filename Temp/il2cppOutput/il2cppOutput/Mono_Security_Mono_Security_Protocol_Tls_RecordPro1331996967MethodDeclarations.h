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

// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t1331996967;
// System.IO.Stream
struct Stream_t1561764144;
// Mono.Security.Protocol.Tls.Context
struct Context_t658806145;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t2623608376;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// Mono.Security.Protocol.Tls.Alert
struct Alert_t2013630382;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t580420223;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context658806145.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake3359671455.h"
#include "mscorlib_System_AsyncCallback1369114871.h"
#include "mscorlib_System_Object4170816371.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertLeve3033872806.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDesc4238799518.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Alert2013630382.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentTy2370127397.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityP1707327472.h"
#include "mscorlib_System_String7231557.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.Context)
extern "C"  void RecordProtocol__ctor_m680122215 (RecordProtocol_t1331996967 * __this, Stream_t1561764144 * ___innerStream0, Context_t658806145 * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::.cctor()
extern "C"  void RecordProtocol__cctor_m1295387214 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.RecordProtocol::get_Context()
extern "C"  Context_t658806145 * RecordProtocol_get_Context_m1960772337 (RecordProtocol_t1331996967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C"  void RecordProtocol_SendRecord_m2691441258 (RecordProtocol_t1331996967 * __this, uint8_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessChangeCipherSpec()
extern "C"  void RecordProtocol_ProcessChangeCipherSpec_m1060708066 (RecordProtocol_t1331996967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.RecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C"  HandshakeMessage_t2623608376 * RecordProtocol_GetMessage_m2989532828 (RecordProtocol_t1331996967 * __this, uint8_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginReceiveRecord(System.IO.Stream,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * RecordProtocol_BeginReceiveRecord_m2484464879 (RecordProtocol_t1331996967 * __this, Stream_t1561764144 * ___record0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___state2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::InternalReceiveRecordCallback(System.IAsyncResult)
extern "C"  void RecordProtocol_InternalReceiveRecordCallback_m1163093802 (RecordProtocol_t1331996967 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EndReceiveRecord(System.IAsyncResult)
extern "C"  ByteU5BU5D_t4260760469* RecordProtocol_EndReceiveRecord_m2844703599 (RecordProtocol_t1331996967 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReceiveRecord(System.IO.Stream)
extern "C"  ByteU5BU5D_t4260760469* RecordProtocol_ReceiveRecord_m1131958450 (RecordProtocol_t1331996967 * __this, Stream_t1561764144 * ___record0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadRecordBuffer(System.Int32,System.IO.Stream)
extern "C"  ByteU5BU5D_t4260760469* RecordProtocol_ReadRecordBuffer_m1367596554 (RecordProtocol_t1331996967 * __this, int32_t ___contentType0, Stream_t1561764144 * ___record1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadClientHelloV2(System.IO.Stream)
extern "C"  ByteU5BU5D_t4260760469* RecordProtocol_ReadClientHelloV2_m4124663563 (RecordProtocol_t1331996967 * __this, Stream_t1561764144 * ___record0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadStandardRecordBuffer(System.IO.Stream)
extern "C"  ByteU5BU5D_t4260760469* RecordProtocol_ReadStandardRecordBuffer_m1386517462 (RecordProtocol_t1331996967 * __this, Stream_t1561764144 * ___record0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessAlert(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
extern "C"  void RecordProtocol_ProcessAlert_m4015528952 (RecordProtocol_t1331996967 * __this, uint8_t ___alertLevel0, uint8_t ___alertDesc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.AlertDescription)
extern "C"  void RecordProtocol_SendAlert_m2514944891 (RecordProtocol_t1331996967 * __this, uint8_t ___description0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
extern "C"  void RecordProtocol_SendAlert_m1748450521 (RecordProtocol_t1331996967 * __this, uint8_t ___level0, uint8_t ___description1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.Alert)
extern "C"  void RecordProtocol_SendAlert_m1661652283 (RecordProtocol_t1331996967 * __this, Alert_t2013630382 * ___alert0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendChangeCipherSpec()
extern "C"  void RecordProtocol_SendChangeCipherSpec_m1492403331 (RecordProtocol_t1331996967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginSendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * RecordProtocol_BeginSendRecord_m4074660131 (RecordProtocol_t1331996967 * __this, uint8_t ___handshakeType0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___state2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::InternalSendRecordCallback(System.IAsyncResult)
extern "C"  void RecordProtocol_InternalSendRecordCallback_m396863619 (RecordProtocol_t1331996967 * __this, Il2CppObject * ___ar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginSendRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * RecordProtocol_BeginSendRecord_m284507289 (RecordProtocol_t1331996967 * __this, uint8_t ___contentType0, ByteU5BU5D_t4260760469* ___recordData1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___state3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::EndSendRecord(System.IAsyncResult)
extern "C"  void RecordProtocol_EndSendRecord_m1779126194 (RecordProtocol_t1331996967 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C"  void RecordProtocol_SendRecord_m1964683252 (RecordProtocol_t1331996967 * __this, uint8_t ___contentType0, ByteU5BU5D_t4260760469* ___recordData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EncodeRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* RecordProtocol_EncodeRecord_m3527606936 (RecordProtocol_t1331996967 * __this, uint8_t ___contentType0, ByteU5BU5D_t4260760469* ___recordData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EncodeRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t4260760469* RecordProtocol_EncodeRecord_m1123568120 (RecordProtocol_t1331996967 * __this, uint8_t ___contentType0, ByteU5BU5D_t4260760469* ___recordData1, int32_t ___offset2, int32_t ___count3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::encryptRecordFragment(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* RecordProtocol_encryptRecordFragment_m3671059907 (RecordProtocol_t1331996967 * __this, uint8_t ___contentType0, ByteU5BU5D_t4260760469* ___fragment1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::decryptRecordFragment(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* RecordProtocol_decryptRecordFragment_m3106472171 (RecordProtocol_t1331996967 * __this, uint8_t ___contentType0, ByteU5BU5D_t4260760469* ___fragment1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol::Compare(System.Byte[],System.Byte[])
extern "C"  bool RecordProtocol_Compare_m2180772028 (RecordProtocol_t1331996967 * __this, ByteU5BU5D_t4260760469* ___array10, ByteU5BU5D_t4260760469* ___array21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessCipherSpecV2Buffer(Mono.Security.Protocol.Tls.SecurityProtocolType,System.Byte[])
extern "C"  void RecordProtocol_ProcessCipherSpecV2Buffer_m572218255 (RecordProtocol_t1331996967 * __this, int32_t ___protocol0, ByteU5BU5D_t4260760469* ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.RecordProtocol::MapV2CipherCode(System.String,System.Int32)
extern "C"  CipherSuite_t580420223 * RecordProtocol_MapV2CipherCode_m3065399538 (RecordProtocol_t1331996967 * __this, String_t* ___prefix0, int32_t ___code1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
