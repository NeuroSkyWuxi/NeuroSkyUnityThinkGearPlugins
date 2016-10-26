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

// System.Reflection.MonoCMethod
struct MonoCMethod_t2855206475;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t2015293532;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Exception
struct Exception_t3991598821;
// System.Reflection.Binder
struct Binder_t1074302268;
// System.Globalization.CultureInfo
struct CultureInfo_t1065375142;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Exception3991598821.h"
#include "mscorlib_System_Reflection_BindingFlags1523912596.h"
#include "mscorlib_System_Reflection_Binder1074302268.h"
#include "mscorlib_System_Globalization_CultureInfo1065375142.h"
#include "mscorlib_System_RuntimeMethodHandle2199484343.h"
#include "mscorlib_System_Reflection_MethodAttributes1709777834.h"
#include "mscorlib_System_Reflection_CallingConventions2863034704.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

// System.Void System.Reflection.MonoCMethod::.ctor()
extern "C"  void MonoCMethod__ctor_m1949313751 (MonoCMethod_t2855206475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoCMethod::GetParameters()
extern "C"  ParameterInfoU5BU5D_t2015293532* MonoCMethod_GetParameters_m993439667 (MonoCMethod_t2855206475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
extern "C"  Il2CppObject * MonoCMethod_InternalInvoke_m1703330793 (MonoCMethod_t2855206475 * __this, Il2CppObject * ___obj0, ObjectU5BU5D_t1108656482* ___parameters1, Exception_t3991598821 ** ___exc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Il2CppObject * MonoCMethod_Invoke_m3483919886 (MonoCMethod_t2855206475 * __this, Il2CppObject * ___obj0, int32_t ___invokeAttr1, Binder_t1074302268 * ___binder2, ObjectU5BU5D_t1108656482* ___parameters3, CultureInfo_t1065375142 * ___culture4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Il2CppObject * MonoCMethod_Invoke_m2473345692 (MonoCMethod_t2855206475 * __this, int32_t ___invokeAttr0, Binder_t1074302268 * ___binder1, ObjectU5BU5D_t1108656482* ___parameters2, CultureInfo_t1065375142 * ___culture3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.MonoCMethod::get_MethodHandle()
extern "C"  RuntimeMethodHandle_t2199484343  MonoCMethod_get_MethodHandle_m1736599926 (MonoCMethod_t2855206475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoCMethod::get_Attributes()
extern "C"  int32_t MonoCMethod_get_Attributes_m2492640542 (MonoCMethod_t2855206475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoCMethod::get_CallingConvention()
extern "C"  int32_t MonoCMethod_get_CallingConvention_m3412315242 (MonoCMethod_t2855206475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoCMethod::get_ReflectedType()
extern "C"  Type_t * MonoCMethod_get_ReflectedType_m3209895836 (MonoCMethod_t2855206475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoCMethod::get_DeclaringType()
extern "C"  Type_t * MonoCMethod_get_DeclaringType_m3979449063 (MonoCMethod_t2855206475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoCMethod::get_Name()
extern "C"  String_t* MonoCMethod_get_Name_m2330810846 (MonoCMethod_t2855206475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoCMethod::IsDefined(System.Type,System.Boolean)
extern "C"  bool MonoCMethod_IsDefined_m2679410586 (MonoCMethod_t2855206475 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t1108656482* MonoCMethod_GetCustomAttributes_m3440607709 (MonoCMethod_t2855206475 * __this, bool ___inherit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t1108656482* MonoCMethod_GetCustomAttributes_m2022749770 (MonoCMethod_t2855206475 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoCMethod::ToString()
extern "C"  String_t* MonoCMethod_ToString_m1692535926 (MonoCMethod_t2855206475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoCMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MonoCMethod_GetObjectData_m3949447925 (MonoCMethod_t2855206475 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
