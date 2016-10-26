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

// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t1918497079;
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
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Reflection.Emit.ConstructorBuilder
struct ConstructorBuilder_t3217839941;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t2708692954;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t2079826215;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t2567562023;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2824366364;
// System.Reflection.MethodInfo
struct MethodInfo_t;
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
#include "mscorlib_System_Reflection_TypeAttributes1370933187.h"
#include "mscorlib_System_Reflection_Emit_TypeBuilder1918497079.h"
#include "mscorlib_System_Reflection_BindingFlags1523912596.h"
#include "mscorlib_System_Reflection_Binder1074302268.h"
#include "mscorlib_System_Reflection_CallingConventions2863034704.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Reflection_MethodAttributes1709777834.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Globalization_CultureInfo1065375142.h"
#include "mscorlib_System_RuntimeTypeHandle2669177232.h"

// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::GetAttributeFlagsImpl()
extern "C"  int32_t TypeBuilder_GetAttributeFlagsImpl_m2415994065 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::setup_internal_class(System.Reflection.Emit.TypeBuilder)
extern "C"  void TypeBuilder_setup_internal_class_m1841540458 (TypeBuilder_t1918497079 * __this, TypeBuilder_t1918497079 * ___tb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::create_generic_class()
extern "C"  void TypeBuilder_create_generic_class_m1633445577 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.TypeBuilder::get_Assembly()
extern "C"  Assembly_t1418687608 * TypeBuilder_get_Assembly_m870988588 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_AssemblyQualifiedName()
extern "C"  String_t* TypeBuilder_get_AssemblyQualifiedName_m750470747 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_BaseType()
extern "C"  Type_t * TypeBuilder_get_BaseType_m1785398826 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_DeclaringType()
extern "C"  Type_t * TypeBuilder_get_DeclaringType_m1033527492 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_UnderlyingSystemType()
extern "C"  Type_t * TypeBuilder_get_UnderlyingSystemType_m301071877 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_FullName()
extern "C"  String_t* TypeBuilder_get_FullName_m1311381250 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module()
extern "C"  Module_t1394482686 * TypeBuilder_get_Module_m1380149676 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Name()
extern "C"  String_t* TypeBuilder_get_Name_m225700627 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Namespace()
extern "C"  String_t* TypeBuilder_get_Namespace_m2211701173 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_ReflectedType()
extern "C"  Type_t * TypeBuilder_get_ReflectedType_m263974265 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.TypeBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  ConstructorInfo_t4136801618 * TypeBuilder_GetConstructorImpl_m4034724308 (TypeBuilder_t1918497079 * __this, int32_t ___bindingAttr0, Binder_t1074302268 * ___binder1, int32_t ___callConvention2, TypeU5BU5D_t3339007067* ___types3, ParameterModifierU5BU5D_t3896472559* ___modifiers4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsDefined(System.Type,System.Boolean)
extern "C"  bool TypeBuilder_IsDefined_m3802777959 (TypeBuilder_t1918497079 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t1108656482* TypeBuilder_GetCustomAttributes_m425271400 (TypeBuilder_t1918497079 * __this, bool ___inherit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t1108656482* TypeBuilder_GetCustomAttributes_m3833453653 (TypeBuilder_t1918497079 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ConstructorBuilder System.Reflection.Emit.TypeBuilder::DefineConstructor(System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type[])
extern "C"  ConstructorBuilder_t3217839941 * TypeBuilder_DefineConstructor_m2901130055 (TypeBuilder_t1918497079 * __this, int32_t ___attributes0, int32_t ___callingConvention1, TypeU5BU5D_t3339007067* ___parameterTypes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ConstructorBuilder System.Reflection.Emit.TypeBuilder::DefineConstructor(System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type[],System.Type[][],System.Type[][])
extern "C"  ConstructorBuilder_t3217839941 * TypeBuilder_DefineConstructor_m467278373 (TypeBuilder_t1918497079 * __this, int32_t ___attributes0, int32_t ___callingConvention1, TypeU5BU5D_t3339007067* ___parameterTypes2, TypeU5BU5DU5BU5D_t2708692954* ___requiredCustomModifiers3, TypeU5BU5DU5BU5D_t2708692954* ___optionalCustomModifiers4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ConstructorBuilder System.Reflection.Emit.TypeBuilder::DefineDefaultConstructor(System.Reflection.MethodAttributes)
extern "C"  ConstructorBuilder_t3217839941 * TypeBuilder_DefineDefaultConstructor_m4180060431 (TypeBuilder_t1918497079 * __this, int32_t ___attributes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::create_runtime_class(System.Reflection.Emit.TypeBuilder)
extern "C"  Type_t * TypeBuilder_create_runtime_class_m3021676378 (TypeBuilder_t1918497079 * __this, TypeBuilder_t1918497079 * ___tb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::is_nested_in(System.Type)
extern "C"  bool TypeBuilder_is_nested_in_m2129219235 (TypeBuilder_t1918497079 * __this, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::has_ctor_method()
extern "C"  bool TypeBuilder_has_ctor_method_m2530448875 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::CreateType()
extern "C"  Type_t * TypeBuilder_CreateType_m1359739084 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C"  ConstructorInfoU5BU5D_t2079826215* TypeBuilder_GetConstructors_m3659149026 (TypeBuilder_t1918497079 * __this, int32_t ___bindingAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructorsInternal(System.Reflection.BindingFlags)
extern "C"  ConstructorInfoU5BU5D_t2079826215* TypeBuilder_GetConstructorsInternal_m731270847 (TypeBuilder_t1918497079 * __this, int32_t ___bindingAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetElementType()
extern "C"  Type_t * TypeBuilder_GetElementType_m1124741270 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.TypeBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C"  EventInfo_t * TypeBuilder_GetEvent_m1147005997 (TypeBuilder_t1918497079 * __this, String_t* ___name0, int32_t ___bindingAttr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.TypeBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C"  FieldInfo_t * TypeBuilder_GetField_m950073389 (TypeBuilder_t1918497079 * __this, String_t* ___name0, int32_t ___bindingAttr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.TypeBuilder::GetFields(System.Reflection.BindingFlags)
extern "C"  FieldInfoU5BU5D_t2567562023* TypeBuilder_GetFields_m3934792546 (TypeBuilder_t1918497079 * __this, int32_t ___bindingAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetInterfaces()
extern "C"  TypeU5BU5D_t3339007067* TypeBuilder_GetInterfaces_m1695120734 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern "C"  MethodInfoU5BU5D_t2824366364* TypeBuilder_GetMethodsByName_m2328060642 (TypeBuilder_t1918497079 * __this, String_t* ___name0, int32_t ___bindingAttr1, bool ___ignoreCase2, Type_t * ___reflected_type3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C"  MethodInfoU5BU5D_t2824366364* TypeBuilder_GetMethods_m3761501928 (TypeBuilder_t1918497079 * __this, int32_t ___bindingAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.TypeBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * TypeBuilder_GetMethodImpl_m2675220686 (TypeBuilder_t1918497079 * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t1074302268 * ___binder2, int32_t ___callConvention3, TypeU5BU5D_t3339007067* ___types4, ParameterModifierU5BU5D_t3896472559* ___modifiers5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.TypeBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * TypeBuilder_GetPropertyImpl_m2672120863 (TypeBuilder_t1918497079 * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t1074302268 * ___binder2, Type_t * ___returnType3, TypeU5BU5D_t3339007067* ___types4, ParameterModifierU5BU5D_t3896472559* ___modifiers5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::HasElementTypeImpl()
extern "C"  bool TypeBuilder_HasElementTypeImpl_m3001033082 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.TypeBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C"  Il2CppObject * TypeBuilder_InvokeMember_m1599102929 (TypeBuilder_t1918497079 * __this, String_t* ___name0, int32_t ___invokeAttr1, Binder_t1074302268 * ___binder2, Il2CppObject * ___target3, ObjectU5BU5D_t1108656482* ___args4, ParameterModifierU5BU5D_t3896472559* ___modifiers5, CultureInfo_t1065375142 * ___culture6, StringU5BU5D_t4054002952* ___namedParameters7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsArrayImpl()
extern "C"  bool TypeBuilder_IsArrayImpl_m1759767571 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsByRefImpl()
extern "C"  bool TypeBuilder_IsByRefImpl_m3584762934 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPointerImpl()
extern "C"  bool TypeBuilder_IsPointerImpl_m189715127 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPrimitiveImpl()
extern "C"  bool TypeBuilder_IsPrimitiveImpl_m501522337 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsValueTypeImpl()
extern "C"  bool TypeBuilder_IsValueTypeImpl_m983821317 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::MakeGenericType(System.Type[])
extern "C"  Type_t * TypeBuilder_MakeGenericType_m740236136 (TypeBuilder_t1918497079 * __this, TypeU5BU5D_t3339007067* ___typeArguments0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.TypeBuilder::get_TypeHandle()
extern "C"  RuntimeTypeHandle_t2669177232  TypeBuilder_get_TypeHandle_m2527260375 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::SetParent(System.Type)
extern "C"  void TypeBuilder_SetParent_m2226876871 (TypeBuilder_t1918497079 * __this, Type_t * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.TypeBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C"  int32_t TypeBuilder_get_next_table_index_m2109425124 (TypeBuilder_t1918497079 * __this, Il2CppObject * ___obj0, int32_t ___table1, bool ___inc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsCompilerContext()
extern "C"  bool TypeBuilder_get_IsCompilerContext_m432935841 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_is_created()
extern "C"  bool TypeBuilder_get_is_created_m695624602 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.TypeBuilder::not_supported()
extern "C"  Exception_t3991598821 * TypeBuilder_not_supported_m2004582477 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::check_not_created()
extern "C"  void TypeBuilder_check_not_created_m4283406443 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::check_created()
extern "C"  void TypeBuilder_check_created_m3022374359 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::ToString()
extern "C"  String_t* TypeBuilder_ToString_m3882393003 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableFrom(System.Type)
extern "C"  bool TypeBuilder_IsAssignableFrom_m2834740190 (TypeBuilder_t1918497079 * __this, Type_t * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsSubclassOf(System.Type)
extern "C"  bool TypeBuilder_IsSubclassOf_m919862466 (TypeBuilder_t1918497079 * __this, Type_t * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableTo(System.Type)
extern "C"  bool TypeBuilder_IsAssignableTo_m3927127213 (TypeBuilder_t1918497079 * __this, Type_t * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetGenericArguments()
extern "C"  TypeU5BU5D_t3339007067* TypeBuilder_GetGenericArguments_m1892425923 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetGenericTypeDefinition()
extern "C"  Type_t * TypeBuilder_GetGenericTypeDefinition_m4229681124 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_ContainsGenericParameters()
extern "C"  bool TypeBuilder_get_ContainsGenericParameters_m446053341 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()
extern "C"  bool TypeBuilder_get_IsGenericParameter_m78451587 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericTypeDefinition()
extern "C"  bool TypeBuilder_get_IsGenericTypeDefinition_m582825077 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericType()
extern "C"  bool TypeBuilder_get_IsGenericType_m226951426 (TypeBuilder_t1918497079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
