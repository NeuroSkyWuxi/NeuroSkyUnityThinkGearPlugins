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

// System.Security.Cryptography.DESCryptoServiceProvider
struct DESCryptoServiceProvider_t3403271487;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t153068654;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.DESCryptoServiceProvider::.ctor()
extern "C"  void DESCryptoServiceProvider__ctor_m611616238 (DESCryptoServiceProvider_t3403271487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
extern "C"  Il2CppObject * DESCryptoServiceProvider_CreateDecryptor_m803126126 (DESCryptoServiceProvider_t3403271487 * __this, ByteU5BU5D_t4260760469* ___rgbKey0, ByteU5BU5D_t4260760469* ___rgbIV1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
extern "C"  Il2CppObject * DESCryptoServiceProvider_CreateEncryptor_m1108854678 (DESCryptoServiceProvider_t3403271487 * __this, ByteU5BU5D_t4260760469* ___rgbKey0, ByteU5BU5D_t4260760469* ___rgbIV1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateIV()
extern "C"  void DESCryptoServiceProvider_GenerateIV_m3244683960 (DESCryptoServiceProvider_t3403271487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateKey()
extern "C"  void DESCryptoServiceProvider_GenerateKey_m1803326710 (DESCryptoServiceProvider_t3403271487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
