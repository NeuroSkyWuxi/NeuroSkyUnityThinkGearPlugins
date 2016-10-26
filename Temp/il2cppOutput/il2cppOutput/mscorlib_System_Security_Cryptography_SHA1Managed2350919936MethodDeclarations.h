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

// System.Security.Cryptography.SHA1Managed
struct SHA1Managed_t2350919936;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.SHA1Managed::.ctor()
extern "C"  void SHA1Managed__ctor_m3952187979 (SHA1Managed_t2350919936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Managed::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C"  void SHA1Managed_HashCore_m2755230979 (SHA1Managed_t2350919936 * __this, ByteU5BU5D_t4260760469* ___rgb0, int32_t ___ibStart1, int32_t ___cbSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA1Managed::HashFinal()
extern "C"  ByteU5BU5D_t4260760469* SHA1Managed_HashFinal_m2842242055 (SHA1Managed_t2350919936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Managed::Initialize()
extern "C"  void SHA1Managed_Initialize_m633762601 (SHA1Managed_t2350919936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
