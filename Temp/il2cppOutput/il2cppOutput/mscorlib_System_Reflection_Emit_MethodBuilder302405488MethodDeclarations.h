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

// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t302405488;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t2015293532;
// System.Object
struct Il2CppObject;
// System.Reflection.Binder
struct Binder_t1074302268;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Globalization.CultureInfo
struct CultureInfo_t1065375142;
// System.Exception
struct Exception_t3991598821;
// System.Type[]
struct TypeU5BU5D_t3339007067;
// System.Reflection.Module
struct Module_t1394482686;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_RuntimeMethodHandle2199484343.h"
#include "mscorlib_System_Reflection_MethodAttributes1709777834.h"
#include "mscorlib_System_Reflection_CallingConventions2863034704.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Reflection_BindingFlags1523912596.h"
#include "mscorlib_System_Reflection_Binder1074302268.h"
#include "mscorlib_System_Globalization_CultureInfo1065375142.h"
#include "mscorlib_System_Type2863145774.h"

// System.Boolean System.Reflection.Emit.MethodBuilder::get_ContainsGenericParameters()
extern "C"  bool MethodBuilder_get_ContainsGenericParameters_m3420227972 (MethodBuilder_t302405488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.MethodBuilder::get_MethodHandle()
extern "C"  RuntimeMethodHandle_t2199484343  MethodBuilder_get_MethodHandle_m1281364144 (MethodBuilder_t302405488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_ReturnType()
extern "C"  Type_t * MethodBuilder_get_ReturnType_m1886811394 (MethodBuilder_t302405488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_ReflectedType()
extern "C"  Type_t * MethodBuilder_get_ReflectedType_m3784090528 (MethodBuilder_t302405488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_DeclaringType()
extern "C"  Type_t * MethodBuilder_get_DeclaringType_m258676459 (MethodBuilder_t302405488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.MethodBuilder::get_Name()
extern "C"  String_t* MethodBuilder_get_Name_m3413262028 (MethodBuilder_t302405488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.MethodBuilder::get_Attributes()
extern "C"  int32_t MethodBuilder_get_Attributes_m2121429796 (MethodBuilder_t302405488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.Emit.MethodBuilder::get_CallingConvention()
extern "C"  int32_t MethodBuilder_get_CallingConvention_m3756269872 (MethodBuilder_t302405488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::GetBaseDefinition()
extern "C"  MethodInfo_t * MethodBuilder_GetBaseDefinition_m3625992879 (MethodBuilder_t302405488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.MethodBuilder::GetParameters()
extern "C"  ParameterInfoU5BU5D_t2015293532* MethodBuilder_GetParameters_m1297633455 (MethodBuilder_t302405488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodBuilder::GetParameterCount()
extern "C"  int32_t MethodBuilder_GetParameterCount_m1078755501 (MethodBuilder_t302405488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.MethodBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Il2CppObject * MethodBuilder_Invoke_m1851679456 (MethodBuilder_t302405488 * __this, Il2CppObject * ___obj0, int32_t ___invokeAttr1, Binder_t1074302268 * ___binder2, ObjectU5BU5D_t1108656482* ___parameters3, CultureInfo_t1065375142 * ___culture4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::IsDefined(System.Type,System.Boolean)
extern "C"  bool MethodBuilder_IsDefined_m3379756494 (MethodBuilder_t302405488 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t1108656482* MethodBuilder_GetCustomAttributes_m1111063247 (MethodBuilder_t302405488 * __this, bool ___inherit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t1108656482* MethodBuilder_GetCustomAttributes_m3294549052 (MethodBuilder_t302405488 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.MethodBuilder::check_override()
extern "C"  void MethodBuilder_check_override_m3740987736 (MethodBuilder_t302405488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.MethodBuilder::fixup()
extern "C"  void MethodBuilder_fixup_m526432253 (MethodBuilder_t302405488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.MethodBuilder::ToString()
extern "C"  String_t* MethodBuilder_ToString_m2774987108 (MethodBuilder_t302405488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::Equals(System.Object)
extern "C"  bool MethodBuilder_Equals_m341293246 (MethodBuilder_t302405488 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodBuilder::GetHashCode()
extern "C"  int32_t MethodBuilder_GetHashCode_m2330513698 (MethodBuilder_t302405488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C"  int32_t MethodBuilder_get_next_table_index_m3631261195 (MethodBuilder_t302405488 * __this, Il2CppObject * ___obj0, int32_t ___table1, bool ___inc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.MethodBuilder::NotSupported()
extern "C"  Exception_t3991598821 * MethodBuilder_NotSupported_m538712043 (MethodBuilder_t302405488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::MakeGenericMethod(System.Type[])
extern "C"  MethodInfo_t * MethodBuilder_MakeGenericMethod_m3048833464 (MethodBuilder_t302405488 * __this, TypeU5BU5D_t3339007067* ___typeArguments0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethodDefinition()
extern "C"  bool MethodBuilder_get_IsGenericMethodDefinition_m2676161411 (MethodBuilder_t302405488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethod()
extern "C"  bool MethodBuilder_get_IsGenericMethod_m3124339088 (MethodBuilder_t302405488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.MethodBuilder::GetGenericArguments()
extern "C"  TypeU5BU5D_t3339007067* MethodBuilder_GetGenericArguments_m2521139370 (MethodBuilder_t302405488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.MethodBuilder::get_Module()
extern "C"  Module_t1394482686 * MethodBuilder_get_Module_m2724160805 (MethodBuilder_t302405488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
