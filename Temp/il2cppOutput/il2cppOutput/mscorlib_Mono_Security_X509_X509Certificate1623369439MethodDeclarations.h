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

// Mono.Security.X509.X509Certificate
struct X509Certificate_t1623369439;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Security.Cryptography.DSA
struct DSA_t2466800856;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t3752917377;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime4283661327.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_String7231557.h"

// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
extern "C"  void X509Certificate__ctor_m3212421763 (X509Certificate_t1623369439 * __this, ByteU5BU5D_t4260760469* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::.cctor()
extern "C"  void X509Certificate__cctor_m988953959 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
extern "C"  void X509Certificate_Parse_m750702354 (X509Certificate_t1623369439 * __this, ByteU5BU5D_t4260760469* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* X509Certificate_GetUnsignedBigInteger_m2414881990 (X509Certificate_t1623369439 * __this, ByteU5BU5D_t4260760469* ___integer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
extern "C"  DSA_t2466800856 * X509Certificate_get_DSA_m3669842785 (X509Certificate_t1623369439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
extern "C"  String_t* X509Certificate_get_IssuerName_m3431933902 (X509Certificate_t1623369439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
extern "C"  ByteU5BU5D_t4260760469* X509Certificate_get_KeyAlgorithmParameters_m1145471883 (X509Certificate_t1623369439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
extern "C"  ByteU5BU5D_t4260760469* X509Certificate_get_PublicKey_m1256992391 (X509Certificate_t1623369439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
extern "C"  ByteU5BU5D_t4260760469* X509Certificate_get_RawData_m1241414723 (X509Certificate_t1623369439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
extern "C"  String_t* X509Certificate_get_SubjectName_m1718232911 (X509Certificate_t1623369439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
extern "C"  DateTime_t4283661327  X509Certificate_get_ValidFrom_m1301607688 (X509Certificate_t1623369439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
extern "C"  DateTime_t4283661327  X509Certificate_get_ValidUntil_m2012833186 (X509Certificate_t1623369439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
extern "C"  ASN1_t3752917377 * X509Certificate_GetIssuerName_m3616837067 (X509Certificate_t1623369439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
extern "C"  ASN1_t3752917377 * X509Certificate_GetSubjectName_m3155263730 (X509Certificate_t1623369439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void X509Certificate_GetObjectData_m3977767844 (X509Certificate_t1623369439 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* X509Certificate_PEM_m3139059379 (Il2CppObject * __this /* static, unused */, String_t* ___type0, ByteU5BU5D_t4260760469* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
