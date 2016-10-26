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

// System.MulticastDelegate
struct MulticastDelegate_t3389745971;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Object
struct Il2CppObject;
// System.Delegate[]
struct DelegateU5BU5D_t2039970308;
// System.Delegate
struct Delegate_t3310234105;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Delegate3310234105.h"
#include "mscorlib_System_MulticastDelegate3389745971.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MulticastDelegate_GetObjectData_m2959136754 (MulticastDelegate_t3389745971 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C"  bool MulticastDelegate_Equals_m1775662595 (MulticastDelegate_t3389745971 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C"  int32_t MulticastDelegate_GetHashCode_m932113511 (MulticastDelegate_t3389745971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C"  DelegateU5BU5D_t2039970308* MulticastDelegate_GetInvocationList_m2228922313 (MulticastDelegate_t3389745971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C"  Delegate_t3310234105 * MulticastDelegate_CombineImpl_m3233588460 (MulticastDelegate_t3389745971 * __this, Delegate_t3310234105 * ___follow0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C"  bool MulticastDelegate_BaseEquals_m3635930564 (MulticastDelegate_t3389745971 * __this, MulticastDelegate_t3389745971 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C"  MulticastDelegate_t3389745971 * MulticastDelegate_KPM_m466375933 (Il2CppObject * __this /* static, unused */, MulticastDelegate_t3389745971 * ___needle0, MulticastDelegate_t3389745971 * ___haystack1, MulticastDelegate_t3389745971 ** ___tail2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C"  Delegate_t3310234105 * MulticastDelegate_RemoveImpl_m112886219 (MulticastDelegate_t3389745971 * __this, Delegate_t3310234105 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
