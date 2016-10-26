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

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t2709367816;
// Mono.Security.ASN1
struct ASN1_t3752917377;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t3081670593;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Security_ASN13752917377.h"

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C"  void EncryptedData__ctor_m3201940140 (EncryptedData_t2709367816 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C"  void EncryptedData__ctor_m816185204 (EncryptedData_t2709367816 * __this, ASN1_t3752917377 * ___asn10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C"  ContentInfo_t3081670593 * EncryptedData_get_EncryptionAlgorithm_m2635090815 (EncryptedData_t2709367816 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C"  ByteU5BU5D_t4260760469* EncryptedData_get_EncryptedContent_m1390437900 (EncryptedData_t2709367816 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
