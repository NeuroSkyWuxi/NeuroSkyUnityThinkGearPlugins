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

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct RSAPKCS1KeyExchangeFormatter_t1037641210;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1241690687;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAl1241690687.h"

// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAPKCS1KeyExchangeFormatter__ctor_m2849280717 (RSAPKCS1KeyExchangeFormatter_t1037641210 * __this, AsymmetricAlgorithm_t1241690687 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* RSAPKCS1KeyExchangeFormatter_CreateKeyExchange_m473400456 (RSAPKCS1KeyExchangeFormatter_t1037641210 * __this, ByteU5BU5D_t4260760469* ___rgbData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::SetRSAKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAPKCS1KeyExchangeFormatter_SetRSAKey_m2782488748 (RSAPKCS1KeyExchangeFormatter_t1037641210 * __this, AsymmetricAlgorithm_t1241690687 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
