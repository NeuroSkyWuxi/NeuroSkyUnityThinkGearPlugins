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

// Mono.Security.Cryptography.HMAC
struct HMAC_t2066897019;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void Mono.Security.Cryptography.HMAC::.ctor(System.String,System.Byte[])
extern "C"  void HMAC__ctor_m3969743837 (HMAC_t2066897019 * __this, String_t* ___hashName0, ByteU5BU5D_t4260760469* ___rgbKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.HMAC::get_Key()
extern "C"  ByteU5BU5D_t4260760469* HMAC_get_Key_m2760207782 (HMAC_t2066897019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::set_Key(System.Byte[])
extern "C"  void HMAC_set_Key_m1481428161 (HMAC_t2066897019 * __this, ByteU5BU5D_t4260760469* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::Initialize()
extern "C"  void HMAC_Initialize_m1123559404 (HMAC_t2066897019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.HMAC::HashFinal()
extern "C"  ByteU5BU5D_t4260760469* HMAC_HashFinal_m3498276984 (HMAC_t2066897019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C"  void HMAC_HashCore_m3652556320 (HMAC_t2066897019 * __this, ByteU5BU5D_t4260760469* ___array0, int32_t ___ibStart1, int32_t ___cbSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::initializePad()
extern "C"  void HMAC_initializePad_m2313790985 (HMAC_t2066897019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
