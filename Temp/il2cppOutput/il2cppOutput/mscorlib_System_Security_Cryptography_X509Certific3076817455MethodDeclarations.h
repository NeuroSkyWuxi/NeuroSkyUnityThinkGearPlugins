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

// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3076817455;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Security_Cryptography_X509Certific3076817455.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Security_Cryptography_X509Certific3472602339.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Byte[],System.Boolean)
extern "C"  void X509Certificate__ctor_m1909610000 (X509Certificate_t3076817455 * __this, ByteU5BU5D_t4260760469* ___data0, bool ___dates1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Byte[])
extern "C"  void X509Certificate__ctor_m3185150413 (X509Certificate_t3076817455 * __this, ByteU5BU5D_t4260760469* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor()
extern "C"  void X509Certificate__ctor_m2228518780 (X509Certificate_t3076817455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void X509Certificate__ctor_m1187024573 (X509Certificate_t3076817455 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C"  void X509Certificate_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m755168634 (X509Certificate_t3076817455 * __this, Il2CppObject * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void X509Certificate_System_Runtime_Serialization_ISerializable_GetObjectData_m2406201743 (X509Certificate_t3076817455 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::tostr(System.Byte[])
extern "C"  String_t* X509Certificate_tostr_m1883898870 (X509Certificate_t3076817455 * __this, ByteU5BU5D_t4260760469* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::Equals(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  bool X509Certificate_Equals_m2510910421 (X509Certificate_t3076817455 * __this, X509Certificate_t3076817455 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetCertHash()
extern "C"  ByteU5BU5D_t4260760469* X509Certificate_GetCertHash_m2872779852 (X509Certificate_t3076817455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetCertHashString()
extern "C"  String_t* X509Certificate_GetCertHashString_m539795190 (X509Certificate_t3076817455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetEffectiveDateString()
extern "C"  String_t* X509Certificate_GetEffectiveDateString_m523012725 (X509Certificate_t3076817455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetExpirationDateString()
extern "C"  String_t* X509Certificate_GetExpirationDateString_m1866410017 (X509Certificate_t3076817455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate::GetHashCode()
extern "C"  int32_t X509Certificate_GetHashCode_m1423591751 (X509Certificate_t3076817455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetIssuerName()
extern "C"  String_t* X509Certificate_GetIssuerName_m1001053335 (X509Certificate_t3076817455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetName()
extern "C"  String_t* X509Certificate_GetName_m2736019966 (X509Certificate_t3076817455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetPublicKey()
extern "C"  ByteU5BU5D_t4260760469* X509Certificate_GetPublicKey_m3757092702 (X509Certificate_t3076817455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetRawCertData()
extern "C"  ByteU5BU5D_t4260760469* X509Certificate_GetRawCertData_m86483614 (X509Certificate_t3076817455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::ToString()
extern "C"  String_t* X509Certificate_ToString_m2228422065 (X509Certificate_t3076817455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::ToString(System.Boolean)
extern "C"  String_t* X509Certificate_ToString_m2210492776 (X509Certificate_t3076817455 * __this, bool ___fVerbose0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::get_Issuer()
extern "C"  String_t* X509Certificate_get_Issuer_m681285767 (X509Certificate_t3076817455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::get_Subject()
extern "C"  String_t* X509Certificate_get_Subject_m4012979648 (X509Certificate_t3076817455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::Equals(System.Object)
extern "C"  bool X509Certificate_Equals_m2965547631 (X509Certificate_t3076817455 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C"  void X509Certificate_Import_m2045724600 (X509Certificate_t3076817455 * __this, ByteU5BU5D_t4260760469* ___rawData0, String_t* ___password1, int32_t ___keyStorageFlags2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::Reset()
extern "C"  void X509Certificate_Reset_m4169919017 (X509Certificate_t3076817455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
