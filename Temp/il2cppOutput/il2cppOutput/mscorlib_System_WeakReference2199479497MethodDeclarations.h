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

// System.WeakReference
struct WeakReference_t2199479497;
// System.Object
struct Il2CppObject;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

// System.Void System.WeakReference::.ctor()
extern "C"  void WeakReference__ctor_m2482272510 (WeakReference_t2199479497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::.ctor(System.Object)
extern "C"  void WeakReference__ctor_m1824216406 (WeakReference_t2199479497 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
extern "C"  void WeakReference__ctor_m1724966759 (WeakReference_t2199479497 * __this, Il2CppObject * ___target0, bool ___trackResurrection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WeakReference__ctor_m1465778495 (WeakReference_t2199479497 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::AllocateHandle(System.Object)
extern "C"  void WeakReference_AllocateHandle_m3300556457 (WeakReference_t2199479497 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.WeakReference::get_Target()
extern "C"  Il2CppObject * WeakReference_get_Target_m2183973397 (WeakReference_t2199479497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.WeakReference::get_TrackResurrection()
extern "C"  bool WeakReference_get_TrackResurrection_m2498111523 (WeakReference_t2199479497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::Finalize()
extern "C"  void WeakReference_Finalize_m3030916772 (WeakReference_t2199479497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WeakReference_GetObjectData_m1524996508 (WeakReference_t2199479497 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
