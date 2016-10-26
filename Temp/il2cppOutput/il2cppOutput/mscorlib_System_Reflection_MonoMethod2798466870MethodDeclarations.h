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

// System.Reflection.MonoMethod
struct MonoMethod_t;
// System.String
struct String_t;
// System.Reflection.MethodBase
struct MethodBase_t318515428;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
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
// System.Runtime.InteropServices.DllImportAttribute
struct DllImportAttribute_t1934708125;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Type[]
struct TypeU5BU5D_t3339007067;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MethodBase318515428.h"
#include "mscorlib_System_Reflection_MonoMethod2798466870.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Exception3991598821.h"
#include "mscorlib_System_Reflection_BindingFlags1523912596.h"
#include "mscorlib_System_Reflection_Binder1074302268.h"
#include "mscorlib_System_Globalization_CultureInfo1065375142.h"
#include "mscorlib_System_RuntimeMethodHandle2199484343.h"
#include "mscorlib_System_Reflection_MethodAttributes1709777834.h"
#include "mscorlib_System_Reflection_CallingConventions2863034704.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

// System.Void System.Reflection.MonoMethod::.ctor()
extern "C"  void MonoMethod__ctor_m370255050 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoMethod::get_name(System.Reflection.MethodBase)
extern "C"  String_t* MonoMethod_get_name_m439428219 (Il2CppObject * __this /* static, unused */, MethodBase_t318515428 * ___method0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoMethod System.Reflection.MonoMethod::get_base_definition(System.Reflection.MonoMethod)
extern "C"  MonoMethod_t * MonoMethod_get_base_definition_m1389391157 (Il2CppObject * __this /* static, unused */, MonoMethod_t * ___method0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::GetBaseDefinition()
extern "C"  MethodInfo_t * MonoMethod_GetBaseDefinition_m3877450154 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethod::get_ReturnType()
extern "C"  Type_t * MonoMethod_get_ReturnType_m2366628327 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethod::GetParameters()
extern "C"  ParameterInfoU5BU5D_t2015293532* MonoMethod_GetParameters_m1957703466 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
extern "C"  Il2CppObject * MonoMethod_InternalInvoke_m4222289618 (MonoMethod_t * __this, Il2CppObject * ___obj0, ObjectU5BU5D_t1108656482* ___parameters1, Exception_t3991598821 ** ___exc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Il2CppObject * MonoMethod_Invoke_m240151045 (MonoMethod_t * __this, Il2CppObject * ___obj0, int32_t ___invokeAttr1, Binder_t1074302268 * ___binder2, ObjectU5BU5D_t1108656482* ___parameters3, CultureInfo_t1065375142 * ___culture4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.MonoMethod::get_MethodHandle()
extern "C"  RuntimeMethodHandle_t2199484343  MonoMethod_get_MethodHandle_m3375732565 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoMethod::get_Attributes()
extern "C"  int32_t MonoMethod_get_Attributes_m3567797513 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoMethod::get_CallingConvention()
extern "C"  int32_t MonoMethod_get_CallingConvention_m1596053931 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethod::get_ReflectedType()
extern "C"  Type_t * MonoMethod_get_ReflectedType_m64213147 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethod::get_DeclaringType()
extern "C"  Type_t * MonoMethod_get_DeclaringType_m833766374 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoMethod::get_Name()
extern "C"  String_t* MonoMethod_get_Name_m3300938865 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::IsDefined(System.Type,System.Boolean)
extern "C"  bool MonoMethod_IsDefined_m1598659081 (MonoMethod_t * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t1108656482* MonoMethod_GetCustomAttributes_m534554826 (MonoMethod_t * __this, bool ___inherit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t1108656482* MonoMethod_GetCustomAttributes_m673046967 (MonoMethod_t * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.DllImportAttribute System.Reflection.MonoMethod::GetDllImportAttribute(System.IntPtr)
extern "C"  DllImportAttribute_t1934708125 * MonoMethod_GetDllImportAttribute_m3397930907 (Il2CppObject * __this /* static, unused */, IntPtr_t ___mhandle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoMethod::GetPseudoCustomAttributes()
extern "C"  ObjectU5BU5D_t1108656482* MonoMethod_GetPseudoCustomAttributes_m4233716593 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::ShouldPrintFullName(System.Type)
extern "C"  bool MonoMethod_ShouldPrintFullName_m401880127 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoMethod::ToString()
extern "C"  String_t* MonoMethod_ToString_m2662663945 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MonoMethod_GetObjectData_m1160867688 (MonoMethod_t * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod(System.Type[])
extern "C"  MethodInfo_t * MonoMethod_MakeGenericMethod_m2250506909 (MonoMethod_t * __this, TypeU5BU5D_t3339007067* ___methodInstantiation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod_impl(System.Type[])
extern "C"  MethodInfo_t * MonoMethod_MakeGenericMethod_impl_m2160588496 (MonoMethod_t * __this, TypeU5BU5D_t3339007067* ___types0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoMethod::GetGenericArguments()
extern "C"  TypeU5BU5D_t3339007067* MonoMethod_GetGenericArguments_m978560229 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethodDefinition()
extern "C"  bool MonoMethod_get_IsGenericMethodDefinition_m279322622 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethod()
extern "C"  bool MonoMethod_get_IsGenericMethod_m1007555531 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::get_ContainsGenericParameters()
extern "C"  bool MonoMethod_get_ContainsGenericParameters_m1023389183 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
