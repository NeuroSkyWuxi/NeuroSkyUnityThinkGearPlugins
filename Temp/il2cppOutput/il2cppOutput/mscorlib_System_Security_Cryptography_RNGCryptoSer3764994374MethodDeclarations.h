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

// System.Security.Cryptography.RNGCryptoServiceProvider
struct RNGCryptoServiceProvider_t3764994374;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"

// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::.ctor()
extern "C"  void RNGCryptoServiceProvider__ctor_m3574180295 (RNGCryptoServiceProvider_t3764994374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::.cctor()
extern "C"  void RNGCryptoServiceProvider__cctor_m2943310534 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::Check()
extern "C"  void RNGCryptoServiceProvider_Check_m865849837 (RNGCryptoServiceProvider_t3764994374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RNGCryptoServiceProvider::RngOpen()
extern "C"  bool RNGCryptoServiceProvider_RngOpen_m645048892 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::RngInitialize(System.Byte[])
extern "C"  IntPtr_t RNGCryptoServiceProvider_RngInitialize_m3158968500 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___seed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::RngGetBytes(System.IntPtr,System.Byte[])
extern "C"  IntPtr_t RNGCryptoServiceProvider_RngGetBytes_m213562877 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, ByteU5BU5D_t4260760469* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::RngClose(System.IntPtr)
extern "C"  void RNGCryptoServiceProvider_RngClose_m837396522 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::GetBytes(System.Byte[])
extern "C"  void RNGCryptoServiceProvider_GetBytes_m3639238391 (RNGCryptoServiceProvider_t3764994374 * __this, ByteU5BU5D_t4260760469* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::GetNonZeroBytes(System.Byte[])
extern "C"  void RNGCryptoServiceProvider_GetNonZeroBytes_m909979576 (RNGCryptoServiceProvider_t3764994374 * __this, ByteU5BU5D_t4260760469* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::Finalize()
extern "C"  void RNGCryptoServiceProvider_Finalize_m1973439803 (RNGCryptoServiceProvider_t3764994374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
