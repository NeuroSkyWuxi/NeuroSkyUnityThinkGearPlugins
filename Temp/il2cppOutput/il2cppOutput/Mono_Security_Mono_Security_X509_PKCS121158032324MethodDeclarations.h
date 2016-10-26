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

// Mono.Security.X509.PKCS12
struct PKCS12_t1158032325;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t4135795358;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1757673517;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t3097904804;
// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t2709367817;
// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t3021279628;
// Mono.Security.ASN1
struct ASN1_t3752917378;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1623369440;
// System.Collections.IDictionary
struct IDictionary_t537317817;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t3081670594;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "Mono_Security_Mono_Security_PKCS7_EncryptedData2709367816.h"
#include "mscorlib_System_Security_Cryptography_DSAParameter3032565794.h"
#include "Mono_Security_Mono_Security_Cryptography_PKCS8_Pri3021279627.h"
#include "Mono_Security_Mono_Security_ASN13752917377.h"
#include "Mono_Security_Mono_Security_X509_X509Certificate1623369439.h"

// System.Void Mono.Security.X509.PKCS12::.ctor()
extern "C"  void PKCS12__ctor_m2645615037 (PKCS12_t1158032325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[])
extern "C"  void PKCS12__ctor_m1570997648 (PKCS12_t1158032325 * __this, ByteU5BU5D_t4260760469* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[],System.String)
extern "C"  void PKCS12__ctor_m3732648396 (PKCS12_t1158032325 * __this, ByteU5BU5D_t4260760469* ___data0, String_t* ___password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.cctor()
extern "C"  void PKCS12__cctor_m4222558608 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Decode(System.Byte[])
extern "C"  void PKCS12_Decode_m3657725204 (PKCS12_t1158032325 * __this, ByteU5BU5D_t4260760469* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Finalize()
extern "C"  void PKCS12_Finalize_m2970192261 (PKCS12_t1158032325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_Password(System.String)
extern "C"  void PKCS12_set_Password_m255122339 (PKCS12_t1158032325 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_IterationCount()
extern "C"  int32_t PKCS12_get_IterationCount_m1936461050 (PKCS12_t1158032325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_IterationCount(System.Int32)
extern "C"  void PKCS12_set_IterationCount_m4214894503 (PKCS12_t1158032325 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.PKCS12::get_Keys()
extern "C"  ArrayList_t3948406897 * PKCS12_get_Keys_m3197281000 (PKCS12_t1158032325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::get_Certificates()
extern "C"  X509CertificateCollection_t4135795358 * PKCS12_get_Certificates_m425759547 (PKCS12_t1158032325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Security.X509.PKCS12::get_RNG()
extern "C"  RandomNumberGenerator_t1757673517 * PKCS12_get_RNG_m944600768 (PKCS12_t1158032325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.PKCS12::Compare(System.Byte[],System.Byte[])
extern "C"  bool PKCS12_Compare_m1707054334 (PKCS12_t1158032325 * __this, ByteU5BU5D_t4260760469* ___expected0, ByteU5BU5D_t4260760469* ___actual1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.X509.PKCS12::GetSymmetricAlgorithm(System.String,System.Byte[],System.Int32)
extern "C"  SymmetricAlgorithm_t3097904804 * PKCS12_GetSymmetricAlgorithm_m2527458883 (PKCS12_t1158032325 * __this, String_t* ___algorithmOid0, ByteU5BU5D_t4260760469* ___salt1, int32_t ___iterationCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(System.String,System.Byte[],System.Int32,System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* PKCS12_Decrypt_m2583016519 (PKCS12_t1158032325 * __this, String_t* ___algorithmOid0, ByteU5BU5D_t4260760469* ___salt1, int32_t ___iterationCount2, ByteU5BU5D_t4260760469* ___encryptedData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(Mono.Security.PKCS7/EncryptedData)
extern "C"  ByteU5BU5D_t4260760469* PKCS12_Decrypt_m1699029656 (PKCS12_t1158032325 * __this, EncryptedData_t2709367817 * ___ed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Encrypt(System.String,System.Byte[],System.Int32,System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* PKCS12_Encrypt_m3283559711 (PKCS12_t1158032325 * __this, String_t* ___algorithmOid0, ByteU5BU5D_t4260760469* ___salt1, int32_t ___iterationCount2, ByteU5BU5D_t4260760469* ___data3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.X509.PKCS12::GetExistingParameters(System.Boolean&)
extern "C"  DSAParameters_t3032565794  PKCS12_GetExistingParameters_m1851295361 (PKCS12_t1158032325 * __this, bool* ___found0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddPrivateKey(Mono.Security.Cryptography.PKCS8/PrivateKeyInfo)
extern "C"  void PKCS12_AddPrivateKey_m3693882703 (PKCS12_t1158032325 * __this, PrivateKeyInfo_t3021279628 * ___pki0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::ReadSafeBag(Mono.Security.ASN1)
extern "C"  void PKCS12_ReadSafeBag_m4010108072 (PKCS12_t1158032325 * __this, ASN1_t3752917378 * ___safeBag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.PKCS12::CertificateSafeBag(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
extern "C"  ASN1_t3752917378 * PKCS12_CertificateSafeBag_m2143586463 (PKCS12_t1158032325 * __this, X509Certificate_t1623369440 * ___x5090, Il2CppObject * ___attributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::MAC(System.Byte[],System.Byte[],System.Int32,System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* PKCS12_MAC_m1203837730 (PKCS12_t1158032325 * __this, ByteU5BU5D_t4260760469* ___password0, ByteU5BU5D_t4260760469* ___salt1, int32_t ___iterations2, ByteU5BU5D_t4260760469* ___data3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::GetBytes()
extern "C"  ByteU5BU5D_t4260760469* PKCS12_GetBytes_m1971373682 (PKCS12_t1158032325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.X509.PKCS12::EncryptedContentInfo(Mono.Security.ASN1,System.String)
extern "C"  ContentInfo_t3081670594 * PKCS12_EncryptedContentInfo_m722640604 (PKCS12_t1158032325 * __this, ASN1_t3752917378 * ___safeBags0, String_t* ___algorithmOid1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddCertificate(Mono.Security.X509.X509Certificate)
extern "C"  void PKCS12_AddCertificate_m3895304625 (PKCS12_t1158032325 * __this, X509Certificate_t1623369440 * ___cert0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddCertificate(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
extern "C"  void PKCS12_AddCertificate_m710679726 (PKCS12_t1158032325 * __this, X509Certificate_t1623369440 * ___cert0, Il2CppObject * ___attributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::RemoveCertificate(Mono.Security.X509.X509Certificate)
extern "C"  void PKCS12_RemoveCertificate_m2867856866 (PKCS12_t1158032325 * __this, X509Certificate_t1623369440 * ___cert0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::RemoveCertificate(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
extern "C"  void PKCS12_RemoveCertificate_m2039050845 (PKCS12_t1158032325 * __this, X509Certificate_t1623369440 * ___cert0, Il2CppObject * ___attrs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.X509.PKCS12::Clone()
extern "C"  Il2CppObject * PKCS12_Clone_m668285869 (PKCS12_t1158032325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_MaximumPasswordLength()
extern "C"  int32_t PKCS12_get_MaximumPasswordLength_m1083541051 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
