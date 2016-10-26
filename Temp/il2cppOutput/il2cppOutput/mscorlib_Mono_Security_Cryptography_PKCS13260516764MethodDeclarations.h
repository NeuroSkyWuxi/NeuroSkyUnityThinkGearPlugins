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

// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Security.Cryptography.RSA
struct RSA_t2466814310;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1757673517;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t532578791;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RSA2466814310.h"
#include "mscorlib_System_Security_Cryptography_RandomNumber1757673517.h"
#include "mscorlib_System_Security_Cryptography_HashAlgorithm532578791.h"

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
extern "C"  void PKCS1__cctor_m332300130 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
extern "C"  bool PKCS1_Compare_m2391456096 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___array10, ByteU5BU5D_t4260760469* ___array21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t4260760469* PKCS1_I2OSP_m2501804848 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___x0, int32_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* PKCS1_OS2IP_m2579010453 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAEP(System.Security.Cryptography.RSA,System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* PKCS1_RSAEP_m3602740544 (Il2CppObject * __this /* static, unused */, RSA_t2466814310 * ___rsa0, ByteU5BU5D_t4260760469* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* PKCS1_RSASP1_m4047396749 (Il2CppObject * __this /* static, unused */, RSA_t2466814310 * ___rsa0, ByteU5BU5D_t4260760469* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* PKCS1_RSAVP1_m3152001232 (Il2CppObject * __this /* static, unused */, RSA_t2466814310 * ___rsa0, ByteU5BU5D_t4260760469* ___s1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encrypt_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.RandomNumberGenerator,System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* PKCS1_Encrypt_v15_m1679755779 (Il2CppObject * __this /* static, unused */, RSA_t2466814310 * ___rsa0, RandomNumberGenerator_t1757673517 * ___rng1, ByteU5BU5D_t4260760469* ___M2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* PKCS1_Sign_v15_m3245483309 (Il2CppObject * __this /* static, unused */, RSA_t2466814310 * ___rsa0, HashAlgorithm_t532578791 * ___hash1, ByteU5BU5D_t4260760469* ___hashValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
extern "C"  bool PKCS1_Verify_v15_m2792601436 (Il2CppObject * __this /* static, unused */, RSA_t2466814310 * ___rsa0, HashAlgorithm_t532578791 * ___hash1, ByteU5BU5D_t4260760469* ___hashValue2, ByteU5BU5D_t4260760469* ___signature3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
extern "C"  bool PKCS1_Verify_v15_m2792585377 (Il2CppObject * __this /* static, unused */, RSA_t2466814310 * ___rsa0, HashAlgorithm_t532578791 * ___hash1, ByteU5BU5D_t4260760469* ___hashValue2, ByteU5BU5D_t4260760469* ___signature3, bool ___tryNonStandardEncoding4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t4260760469* PKCS1_Encode_v15_m2534638350 (Il2CppObject * __this /* static, unused */, HashAlgorithm_t532578791 * ___hash0, ByteU5BU5D_t4260760469* ___hashValue1, int32_t ___emLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
