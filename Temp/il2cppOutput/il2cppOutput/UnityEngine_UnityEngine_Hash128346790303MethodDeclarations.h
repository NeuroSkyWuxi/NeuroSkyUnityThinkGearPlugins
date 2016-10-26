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

// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UnityEngine.Hash128
struct Hash128_t346790303;
struct Hash128_t346790303_marshaled_pinvoke;
struct Hash128_t346790303_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Hash128346790303.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void UnityEngine.Hash128::.ctor(System.UInt32,System.UInt32,System.UInt32,System.UInt32)
extern "C"  void Hash128__ctor_m425960966 (Hash128_t346790303 * __this, uint32_t ___u32_00, uint32_t ___u32_11, uint32_t ___u32_22, uint32_t ___u32_33, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Hash128::ToString()
extern "C"  String_t* Hash128_ToString_m1757027933 (Hash128_t346790303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Hash128::Internal_Hash128ToString(System.UInt32,System.UInt32,System.UInt32,System.UInt32)
extern "C"  String_t* Hash128_Internal_Hash128ToString_m956268818 (Il2CppObject * __this /* static, unused */, uint32_t ___d00, uint32_t ___d11, uint32_t ___d22, uint32_t ___d33, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Hash128::Equals(System.Object)
extern "C"  bool Hash128_Equals_m3805193063 (Hash128_t346790303 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Hash128::GetHashCode()
extern "C"  int32_t Hash128_GetHashCode_m3551754047 (Hash128_t346790303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Hash128::op_Equality(UnityEngine.Hash128,UnityEngine.Hash128)
extern "C"  bool Hash128_op_Equality_m784872782 (Il2CppObject * __this /* static, unused */, Hash128_t346790303  ___hash10, Hash128_t346790303  ___hash21, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Hash128_t346790303;
struct Hash128_t346790303_marshaled_pinvoke;

extern "C" void Hash128_t346790303_marshal_pinvoke(const Hash128_t346790303& unmarshaled, Hash128_t346790303_marshaled_pinvoke& marshaled);
extern "C" void Hash128_t346790303_marshal_pinvoke_back(const Hash128_t346790303_marshaled_pinvoke& marshaled, Hash128_t346790303& unmarshaled);
extern "C" void Hash128_t346790303_marshal_pinvoke_cleanup(Hash128_t346790303_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Hash128_t346790303;
struct Hash128_t346790303_marshaled_com;

extern "C" void Hash128_t346790303_marshal_com(const Hash128_t346790303& unmarshaled, Hash128_t346790303_marshaled_com& marshaled);
extern "C" void Hash128_t346790303_marshal_com_back(const Hash128_t346790303_marshaled_com& marshaled, Hash128_t346790303& unmarshaled);
extern "C" void Hash128_t346790303_marshal_com_cleanup(Hash128_t346790303_marshaled_com& marshaled);
