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

// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t2623608376;
// Mono.Security.Protocol.Tls.Context
struct Context_t658806145;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context658806145.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake3359671455.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentTy2370127397.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::.ctor(Mono.Security.Protocol.Tls.Context,Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C"  void HandshakeMessage__ctor_m1474937626 (HandshakeMessage_t2623608376 * __this, Context_t658806145 * ___context0, uint8_t ___handshakeType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::.ctor(Mono.Security.Protocol.Tls.Context,Mono.Security.Protocol.Tls.Handshake.HandshakeType,Mono.Security.Protocol.Tls.ContentType)
extern "C"  void HandshakeMessage__ctor_m3955100159 (HandshakeMessage_t2623608376 * __this, Context_t658806145 * ___context0, uint8_t ___handshakeType1, uint8_t ___contentType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::.ctor(Mono.Security.Protocol.Tls.Context,Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
extern "C"  void HandshakeMessage__ctor_m2754795165 (HandshakeMessage_t2623608376 * __this, Context_t658806145 * ___context0, uint8_t ___handshakeType1, ByteU5BU5D_t4260760469* ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::get_Context()
extern "C"  Context_t658806145 * HandshakeMessage_get_Context_m3519080307 (HandshakeMessage_t2623608376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::get_HandshakeType()
extern "C"  uint8_t HandshakeMessage_get_HandshakeType_m1324026282 (HandshakeMessage_t2623608376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ContentType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::get_ContentType()
extern "C"  uint8_t HandshakeMessage_get_ContentType_m3318987123 (HandshakeMessage_t2623608376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Process()
extern "C"  void HandshakeMessage_Process_m1242505358 (HandshakeMessage_t2623608376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Update()
extern "C"  void HandshakeMessage_Update_m566705900 (HandshakeMessage_t2623608376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::EncodeMessage()
extern "C"  ByteU5BU5D_t4260760469* HandshakeMessage_EncodeMessage_m1406146266 (HandshakeMessage_t2623608376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Compare(System.Byte[],System.Byte[])
extern "C"  bool HandshakeMessage_Compare_m1246403066 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___buffer10, ByteU5BU5D_t4260760469* ___buffer21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
