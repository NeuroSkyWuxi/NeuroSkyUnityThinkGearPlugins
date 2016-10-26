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

// System.Reflection.Emit.EnumBuilder
struct EnumBuilder_t1579888016;
// System.Reflection.Assembly
struct Assembly_t1418687608;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t1394482686;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t4136801618;
// System.Reflection.Binder
struct Binder_t1074302268;
// System.Type[]
struct TypeU5BU5D_t3339007067;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t3896472559;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t2079826215;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t2567562023;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2824366364;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Il2CppObject;
// System.Globalization.CultureInfo
struct CultureInfo_t1065375142;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Exception
struct Exception_t3991598821;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_RuntimeTypeHandle2669177232.h"
#include "mscorlib_System_Reflection_TypeAttributes1370933187.h"
#include "mscorlib_System_Reflection_BindingFlags1523912596.h"
#include "mscorlib_System_Reflection_Binder1074302268.h"
#include "mscorlib_System_Reflection_CallingConventions2863034704.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Globalization_CultureInfo1065375142.h"

// System.Reflection.Assembly System.Reflection.Emit.EnumBuilder::get_Assembly()
extern "C"  Assembly_t1418687608 * EnumBuilder_get_Assembly_m953263493 (EnumBuilder_t1579888016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_AssemblyQualifiedName()
extern "C"  String_t* EnumBuilder_get_AssemblyQualifiedName_m4073403554 (EnumBuilder_t1579888016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_BaseType()
extern "C"  Type_t * EnumBuilder_get_BaseType_m1867673731 (EnumBuilder_t1579888016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_DeclaringType()
extern "C"  Type_t * EnumBuilder_get_DeclaringType_m2862908939 (EnumBuilder_t1579888016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_FullName()
extern "C"  String_t* EnumBuilder_get_FullName_m1393656155 (EnumBuilder_t1579888016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.EnumBuilder::get_Module()
extern "C"  Module_t1394482686 * EnumBuilder_get_Module_m1719899717 (EnumBuilder_t1579888016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Name()
extern "C"  String_t* EnumBuilder_get_Name_m1759013356 (EnumBuilder_t1579888016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Namespace()
extern "C"  String_t* EnumBuilder_get_Namespace_m467255932 (EnumBuilder_t1579888016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_ReflectedType()
extern "C"  Type_t * EnumBuilder_get_ReflectedType_m2093355712 (EnumBuilder_t1579888016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.EnumBuilder::get_TypeHandle()
extern "C"  RuntimeTypeHandle_t2669177232  EnumBuilder_get_TypeHandle_m4284032752 (EnumBuilder_t1579888016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_UnderlyingSystemType()
extern "C"  Type_t * EnumBuilder_get_UnderlyingSystemType_m546810590 (EnumBuilder_t1579888016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.EnumBuilder::GetAttributeFlagsImpl()
extern "C"  int32_t EnumBuilder_GetAttributeFlagsImpl_m1968787096 (EnumBuilder_t1579888016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.EnumBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  ConstructorInfo_t4136801618 * EnumBuilder_GetConstructorImpl_m2615452525 (EnumBuilder_t1579888016 * __this, int32_t ___bindingAttr0, Binder_t1074302268 * ___binder1, int32_t ___callConvention2, TypeU5BU5D_t3339007067* ___types3, ParameterModifierU5BU5D_t3896472559* ___modifiers4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.EnumBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C"  ConstructorInfoU5BU5D_t2079826215* EnumBuilder_GetConstructors_m3042128809 (EnumBuilder_t1579888016 * __this, int32_t ___bindingAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t1108656482* EnumBuilder_GetCustomAttributes_m513136559 (EnumBuilder_t1579888016 * __this, bool ___inherit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t1108656482* EnumBuilder_GetCustomAttributes_m3216433436 (EnumBuilder_t1579888016 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::GetElementType()
extern "C"  Type_t * EnumBuilder_GetElementType_m2881513647 (EnumBuilder_t1579888016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.EnumBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C"  EventInfo_t * EnumBuilder_GetEvent_m1271024006 (EnumBuilder_t1579888016 * __this, String_t* ___name0, int32_t ___bindingAttr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.EnumBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C"  FieldInfo_t * EnumBuilder_GetField_m1074091398 (EnumBuilder_t1579888016 * __this, String_t* ___name0, int32_t ___bindingAttr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.EnumBuilder::GetFields(System.Reflection.BindingFlags)
extern "C"  FieldInfoU5BU5D_t2567562023* EnumBuilder_GetFields_m1392120169 (EnumBuilder_t1579888016 * __this, int32_t ___bindingAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.EnumBuilder::GetInterfaces()
extern "C"  TypeU5BU5D_t3339007067* EnumBuilder_GetInterfaces_m4245642789 (EnumBuilder_t1579888016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.EnumBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * EnumBuilder_GetMethodImpl_m133610325 (EnumBuilder_t1579888016 * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t1074302268 * ___binder2, int32_t ___callConvention3, TypeU5BU5D_t3339007067* ___types4, ParameterModifierU5BU5D_t3896472559* ___modifiers5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.EnumBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C"  MethodInfoU5BU5D_t2824366364* EnumBuilder_GetMethods_m2248069569 (EnumBuilder_t1579888016 * __this, int32_t ___bindingAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.EnumBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * EnumBuilder_GetPropertyImpl_m457098616 (EnumBuilder_t1579888016 * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t1074302268 * ___binder2, Type_t * ___returnType3, TypeU5BU5D_t3339007067* ___types4, ParameterModifierU5BU5D_t3896472559* ___modifiers5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::HasElementTypeImpl()
extern "C"  bool EnumBuilder_HasElementTypeImpl_m3877283091 (EnumBuilder_t1579888016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.EnumBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C"  Il2CppObject * EnumBuilder_InvokeMember_m4001949930 (EnumBuilder_t1579888016 * __this, String_t* ___name0, int32_t ___invokeAttr1, Binder_t1074302268 * ___binder2, Il2CppObject * ___target3, ObjectU5BU5D_t1108656482* ___args4, ParameterModifierU5BU5D_t3896472559* ___modifiers5, CultureInfo_t1065375142 * ___culture6, StringU5BU5D_t4054002952* ___namedParameters7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsArrayImpl()
extern "C"  bool EnumBuilder_IsArrayImpl_m3702084250 (EnumBuilder_t1579888016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsByRefImpl()
extern "C"  bool EnumBuilder_IsByRefImpl_m1232112317 (EnumBuilder_t1579888016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPointerImpl()
extern "C"  bool EnumBuilder_IsPointerImpl_m2740237182 (EnumBuilder_t1579888016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPrimitiveImpl()
extern "C"  bool EnumBuilder_IsPrimitiveImpl_m3421858472 (EnumBuilder_t1579888016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsValueTypeImpl()
extern "C"  bool EnumBuilder_IsValueTypeImpl_m3904157452 (EnumBuilder_t1579888016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsDefined(System.Type,System.Boolean)
extern "C"  bool EnumBuilder_IsDefined_m2341849838 (EnumBuilder_t1579888016 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.EnumBuilder::CreateNotSupportedException()
extern "C"  Exception_t3991598821 * EnumBuilder_CreateNotSupportedException_m856223562 (EnumBuilder_t1579888016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
