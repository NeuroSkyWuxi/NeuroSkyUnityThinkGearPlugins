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

// Mono.Security.Protocol.Tls.ClientRecordProtocol
struct ClientRecordProtocol_t3260910930;
// System.IO.Stream
struct Stream_t1561764144;
// Mono.Security.Protocol.Tls.ClientContext
struct ClientContext_t3745725366;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t2623608376;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t89550253;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientCon3745725366.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake3359671455.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStream89550253.h"

// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.ClientContext)
extern "C"  void ClientRecordProtocol__ctor_m3035494461 (ClientRecordProtocol_t3260910930 * __this, Stream_t1561764144 * ___innerStream0, ClientContext_t3745725366 * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C"  HandshakeMessage_t2623608376 * ClientRecordProtocol_GetMessage_m2518248327 (ClientRecordProtocol_t3260910930 * __this, uint8_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream)
extern "C"  void ClientRecordProtocol_ProcessHandshakeMessage_m3106137596 (ClientRecordProtocol_t3260910930 * __this, TlsStream_t89550253 * ___handMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createClientHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C"  HandshakeMessage_t2623608376 * ClientRecordProtocol_createClientHandshakeMessage_m3433791085 (ClientRecordProtocol_t3260910930 * __this, uint8_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createServerHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
extern "C"  HandshakeMessage_t2623608376 * ClientRecordProtocol_createServerHandshakeMessage_m2388742696 (ClientRecordProtocol_t3260910930 * __this, uint8_t ___type0, ByteU5BU5D_t4260760469* ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
