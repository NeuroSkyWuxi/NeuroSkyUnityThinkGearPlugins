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

// UnityEngine.Mathf
struct Mathf_t4203372500;
struct Mathf_t4203372500_marshaled_pinvoke;
struct Mathf_t4203372500_marshaled_com;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Mathf::.cctor()
extern "C"  void Mathf__cctor_m1875403730 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Abs(System.Single)
extern "C"  float Mathf_Abs_m3641135540 (Il2CppObject * __this /* static, unused */, float ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
extern "C"  float Mathf_Min_m2322067385 (Il2CppObject * __this /* static, unused */, float ___a0, float ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
extern "C"  int32_t Mathf_Min_m2413438171 (Il2CppObject * __this /* static, unused */, int32_t ___a0, int32_t ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C"  float Mathf_Max_m3923796455 (Il2CppObject * __this /* static, unused */, float ___a0, float ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
extern "C"  int32_t Mathf_Max_m2911193737 (Il2CppObject * __this /* static, unused */, int32_t ___a0, int32_t ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Ceil(System.Single)
extern "C"  float Mathf_Ceil_m3793305609 (Il2CppObject * __this /* static, unused */, float ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Round(System.Single)
extern "C"  float Mathf_Round_m2677810712 (Il2CppObject * __this /* static, unused */, float ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_Clamp_m3872743893 (Il2CppObject * __this /* static, unused */, float ___value0, float ___min1, float ___max2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
extern "C"  float Mathf_Clamp01_m2272733930 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_Lerp_m3257777633 (Il2CppObject * __this /* static, unused */, float ___a0, float ___b1, float ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
extern "C"  bool Mathf_Approximately_m1395529776 (Il2CppObject * __this /* static, unused */, float ___a0, float ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Mathf_t4203372500;
struct Mathf_t4203372500_marshaled_pinvoke;

extern "C" void Mathf_t4203372500_marshal_pinvoke(const Mathf_t4203372500& unmarshaled, Mathf_t4203372500_marshaled_pinvoke& marshaled);
extern "C" void Mathf_t4203372500_marshal_pinvoke_back(const Mathf_t4203372500_marshaled_pinvoke& marshaled, Mathf_t4203372500& unmarshaled);
extern "C" void Mathf_t4203372500_marshal_pinvoke_cleanup(Mathf_t4203372500_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Mathf_t4203372500;
struct Mathf_t4203372500_marshaled_com;

extern "C" void Mathf_t4203372500_marshal_com(const Mathf_t4203372500& unmarshaled, Mathf_t4203372500_marshaled_com& marshaled);
extern "C" void Mathf_t4203372500_marshal_com_back(const Mathf_t4203372500_marshaled_com& marshaled, Mathf_t4203372500& unmarshaled);
extern "C" void Mathf_t4203372500_marshal_com_cleanup(Mathf_t4203372500_marshaled_com& marshaled);
