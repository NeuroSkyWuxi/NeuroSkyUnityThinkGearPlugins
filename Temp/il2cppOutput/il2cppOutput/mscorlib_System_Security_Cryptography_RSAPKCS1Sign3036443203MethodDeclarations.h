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

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct RSAPKCS1SignatureDeformatter_t3036443203;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1241690687;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAl1241690687.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor()
extern "C"  void RSAPKCS1SignatureDeformatter__ctor_m535201002 (RSAPKCS1SignatureDeformatter_t3036443203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAPKCS1SignatureDeformatter__ctor_m3465174692 (RSAPKCS1SignatureDeformatter_t3036443203 * __this, AsymmetricAlgorithm_t1241690687 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String)
extern "C"  void RSAPKCS1SignatureDeformatter_SetHashAlgorithm_m4108380169 (RSAPKCS1SignatureDeformatter_t3036443203 * __this, String_t* ___strName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAPKCS1SignatureDeformatter_SetKey_m3568250865 (RSAPKCS1SignatureDeformatter_t3036443203 * __this, AsymmetricAlgorithm_t1241690687 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSAPKCS1SignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C"  bool RSAPKCS1SignatureDeformatter_VerifySignature_m2271699363 (RSAPKCS1SignatureDeformatter_t3036443203 * __this, ByteU5BU5D_t4260760469* ___rgbHash0, ByteU5BU5D_t4260760469* ___rgbSignature1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
