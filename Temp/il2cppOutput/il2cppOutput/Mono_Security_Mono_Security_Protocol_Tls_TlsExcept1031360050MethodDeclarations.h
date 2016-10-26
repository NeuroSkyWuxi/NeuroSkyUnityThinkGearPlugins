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

// Mono.Security.Protocol.Tls.TlsException
struct TlsException_t1031360050;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// Mono.Security.Protocol.Tls.Alert
struct Alert_t2013630382;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertLeve3033872806.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDesc4238799518.h"

// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(System.String)
extern "C"  void TlsException__ctor_m1800218670 (TlsException_t1031360050 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void TlsException__ctor_m3172375189 (TlsException_t1031360050 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
extern "C"  void TlsException__ctor_m1532839414 (TlsException_t1031360050 * __this, uint8_t ___level0, uint8_t ___description1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription,System.String)
extern "C"  void TlsException__ctor_m1100072882 (TlsException_t1031360050 * __this, uint8_t ___level0, uint8_t ___description1, String_t* ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertDescription)
extern "C"  void TlsException__ctor_m314055256 (TlsException_t1031360050 * __this, uint8_t ___description0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertDescription,System.String)
extern "C"  void TlsException__ctor_m761809044 (TlsException_t1031360050 * __this, uint8_t ___description0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Alert Mono.Security.Protocol.Tls.TlsException::get_Alert()
extern "C"  Alert_t2013630382 * TlsException_get_Alert_m2233021222 (TlsException_t1031360050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
