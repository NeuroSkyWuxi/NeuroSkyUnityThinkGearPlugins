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

// System.Reflection.MonoProperty
struct MonoProperty_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2824366364;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t2015293532;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t4082266865;
// System.Object
struct Il2CppObject;
// System.Reflection.Binder
struct Binder_t1074302268;
// System.Globalization.CultureInfo
struct CultureInfo_t1065375142;
// System.Type[]
struct TypeU5BU5D_t3339007067;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_PInfo2721197512.h"
#include "mscorlib_System_Reflection_PropertyAttributes1999146654.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Reflection_MethodInfo318736065.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Reflection_BindingFlags1523912596.h"
#include "mscorlib_System_Reflection_Binder1074302268.h"
#include "mscorlib_System_Globalization_CultureInfo1065375142.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

// System.Void System.Reflection.MonoProperty::.ctor()
extern "C"  void MonoProperty__ctor_m1169623126 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::CachePropertyInfo(System.Reflection.PInfo)
extern "C"  void MonoProperty_CachePropertyInfo_m1003517343 (MonoProperty_t * __this, int32_t ___flags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyAttributes System.Reflection.MonoProperty::get_Attributes()
extern "C"  int32_t MonoProperty_get_Attributes_m1446659017 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::get_CanRead()
extern "C"  bool MonoProperty_get_CanRead_m4207249871 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::get_CanWrite()
extern "C"  bool MonoProperty_get_CanWrite_m2098380648 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_PropertyType()
extern "C"  Type_t * MonoProperty_get_PropertyType_m3141941824 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_ReflectedType()
extern "C"  Type_t * MonoProperty_get_ReflectedType_m158519463 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_DeclaringType()
extern "C"  Type_t * MonoProperty_get_DeclaringType_m928072690 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoProperty::get_Name()
extern "C"  String_t* MonoProperty_get_Name_m3886549157 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.MonoProperty::GetAccessors(System.Boolean)
extern "C"  MethodInfoU5BU5D_t2824366364* MonoProperty_GetAccessors_m455294545 (MonoProperty_t * __this, bool ___nonPublic0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetGetMethod(System.Boolean)
extern "C"  MethodInfo_t * MonoProperty_GetGetMethod_m2822601598 (MonoProperty_t * __this, bool ___nonPublic0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoProperty::GetIndexParameters()
extern "C"  ParameterInfoU5BU5D_t2015293532* MonoProperty_GetIndexParameters_m2930895730 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetSetMethod(System.Boolean)
extern "C"  MethodInfo_t * MonoProperty_GetSetMethod_m3665893258 (MonoProperty_t * __this, bool ___nonPublic0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::IsDefined(System.Type,System.Boolean)
extern "C"  bool MonoProperty_IsDefined_m436586773 (MonoProperty_t * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t1108656482* MonoProperty_GetCustomAttributes_m1088918294 (MonoProperty_t * __this, bool ___inherit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t1108656482* MonoProperty_GetCustomAttributes_m2634004995 (MonoProperty_t * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::CreateGetterDelegate(System.Reflection.MethodInfo)
extern "C"  GetterAdapter_t4082266865 * MonoProperty_CreateGetterDelegate_m1512753249 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___method0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Object[])
extern "C"  Il2CppObject * MonoProperty_GetValue_m3005067234 (MonoProperty_t * __this, Il2CppObject * ___obj0, ObjectU5BU5D_t1108656482* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Il2CppObject * MonoProperty_GetValue_m1867887996 (MonoProperty_t * __this, Il2CppObject * ___obj0, int32_t ___invokeAttr1, Binder_t1074302268 * ___binder2, ObjectU5BU5D_t1108656482* ___index3, CultureInfo_t1065375142 * ___culture4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  void MonoProperty_SetValue_m2220407469 (MonoProperty_t * __this, Il2CppObject * ___obj0, Il2CppObject * ___value1, int32_t ___invokeAttr2, Binder_t1074302268 * ___binder3, ObjectU5BU5D_t1108656482* ___index4, CultureInfo_t1065375142 * ___culture5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoProperty::ToString()
extern "C"  String_t* MonoProperty_ToString_m3248274237 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoProperty::GetOptionalCustomModifiers()
extern "C"  TypeU5BU5D_t3339007067* MonoProperty_GetOptionalCustomModifiers_m2413189819 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoProperty::GetRequiredCustomModifiers()
extern "C"  TypeU5BU5D_t3339007067* MonoProperty_GetRequiredCustomModifiers_m487727196 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MonoProperty_GetObjectData_m2931203316 (MonoProperty_t * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
