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

// Mono.Security.Protocol.Tls.ClientSessionInfo
struct ClientSessionInfo_t1380030187;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// Mono.Security.Protocol.Tls.Context
struct Context_t658806145;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context658806145.h"

// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::.ctor(System.String,System.Byte[])
extern "C"  void ClientSessionInfo__ctor_m3986042656 (ClientSessionInfo_t1380030187 * __this, String_t* ___hostname0, ByteU5BU5D_t4260760469* ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::.cctor()
extern "C"  void ClientSessionInfo__cctor_m1522715144 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Finalize()
extern "C"  void ClientSessionInfo_Finalize_m2580870141 (ClientSessionInfo_t1380030187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.ClientSessionInfo::get_HostName()
extern "C"  String_t* ClientSessionInfo_get_HostName_m4285397854 (ClientSessionInfo_t1380030187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.ClientSessionInfo::get_Id()
extern "C"  ByteU5BU5D_t4260760469* ClientSessionInfo_get_Id_m277031725 (ClientSessionInfo_t1380030187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ClientSessionInfo::get_Valid()
extern "C"  bool ClientSessionInfo_get_Valid_m3298602216 (ClientSessionInfo_t1380030187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::GetContext(Mono.Security.Protocol.Tls.Context)
extern "C"  void ClientSessionInfo_GetContext_m4271145743 (ClientSessionInfo_t1380030187 * __this, Context_t658806145 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::SetContext(Mono.Security.Protocol.Tls.Context)
extern "C"  void ClientSessionInfo_SetContext_m2955880067 (ClientSessionInfo_t1380030187 * __this, Context_t658806145 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::KeepAlive()
extern "C"  void ClientSessionInfo_KeepAlive_m3111167147 (ClientSessionInfo_t1380030187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Dispose()
extern "C"  void ClientSessionInfo_Dispose_m1917892930 (ClientSessionInfo_t1380030187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Dispose(System.Boolean)
extern "C"  void ClientSessionInfo_Dispose_m3809547065 (ClientSessionInfo_t1380030187 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::CheckDisposed()
extern "C"  void ClientSessionInfo_CheckDisposed_m3528977776 (ClientSessionInfo_t1380030187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
