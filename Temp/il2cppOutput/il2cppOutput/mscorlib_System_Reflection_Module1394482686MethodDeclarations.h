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

// System.Reflection.Module
struct Module_t1394482686;
// System.Reflection.Assembly
struct Assembly_t1418687608;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Type[]
struct TypeU5BU5D_t3339007067;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Reflection.Module::.ctor()
extern "C"  void Module__ctor_m1944669826 (Module_t1394482686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Module::.cctor()
extern "C"  void Module__cctor_m3968093547 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Module::get_Assembly()
extern "C"  Assembly_t1418687608 * Module_get_Assembly_m4154223570 (Module_t1394482686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Module::get_ScopeName()
extern "C"  String_t* Module_get_ScopeName_m724946931 (Module_t1394482686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Module::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t1108656482* Module_GetCustomAttributes_m2375287279 (Module_t1394482686 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Module::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Module_GetObjectData_m8314144 (Module_t1394482686 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Module::InternalGetTypes()
extern "C"  TypeU5BU5D_t3339007067* Module_InternalGetTypes_m2940532442 (Module_t1394482686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Module::GetTypes()
extern "C"  TypeU5BU5D_t3339007067* Module_GetTypes_m134489405 (Module_t1394482686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::IsDefined(System.Type,System.Boolean)
extern "C"  bool Module_IsDefined_m3759276225 (Module_t1394482686 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::IsResource()
extern "C"  bool Module_IsResource_m3085935772 (Module_t1394482686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Module::ToString()
extern "C"  String_t* Module_ToString_m2326023121 (Module_t1394482686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::filter_by_type_name(System.Type,System.Object)
extern "C"  bool Module_filter_by_type_name_m1428086970 (Il2CppObject * __this /* static, unused */, Type_t * ___m0, Il2CppObject * ___filterCriteria1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::filter_by_type_name_ignore_case(System.Type,System.Object)
extern "C"  bool Module_filter_by_type_name_ignore_case_m825562172 (Il2CppObject * __this /* static, unused */, Type_t * ___m0, Il2CppObject * ___filterCriteria1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
