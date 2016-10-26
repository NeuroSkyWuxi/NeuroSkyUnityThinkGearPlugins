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

// System.Reflection.Emit.FieldBuilder
struct FieldBuilder_t1754069893;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Object
struct Il2CppObject;
// System.Reflection.Binder
struct Binder_t1074302268;
// System.Globalization.CultureInfo
struct CultureInfo_t1065375142;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t224089244;
// System.Exception
struct Exception_t3991598821;
// System.Reflection.Module
struct Module_t1394482686;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_FieldAttributes3975817083.h"
#include "mscorlib_System_RuntimeFieldHandle2347752062.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Reflection_BindingFlags1523912596.h"
#include "mscorlib_System_Reflection_Binder1074302268.h"
#include "mscorlib_System_Globalization_CultureInfo1065375142.h"

// System.Reflection.FieldAttributes System.Reflection.Emit.FieldBuilder::get_Attributes()
extern "C"  int32_t FieldBuilder_get_Attributes_m3921109250 (FieldBuilder_t1754069893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.FieldBuilder::get_DeclaringType()
extern "C"  Type_t * FieldBuilder_get_DeclaringType_m1725909420 (FieldBuilder_t1754069893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeFieldHandle System.Reflection.Emit.FieldBuilder::get_FieldHandle()
extern "C"  RuntimeFieldHandle_t2347752062  FieldBuilder_get_FieldHandle_m1219776477 (FieldBuilder_t1754069893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.FieldBuilder::get_FieldType()
extern "C"  Type_t * FieldBuilder_get_FieldType_m1219556799 (FieldBuilder_t1754069893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.FieldBuilder::get_Name()
extern "C"  String_t* FieldBuilder_get_Name_m819487801 (FieldBuilder_t1754069893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.FieldBuilder::get_ReflectedType()
extern "C"  Type_t * FieldBuilder_get_ReflectedType_m956356193 (FieldBuilder_t1754069893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.FieldBuilder::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t1108656482* FieldBuilder_GetCustomAttributes_m2903117794 (FieldBuilder_t1754069893 * __this, bool ___inherit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.FieldBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t1108656482* FieldBuilder_GetCustomAttributes_m1840342223 (FieldBuilder_t1754069893 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.FieldBuilder::GetValue(System.Object)
extern "C"  Il2CppObject * FieldBuilder_GetValue_m1365484742 (FieldBuilder_t1754069893 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.FieldBuilder::IsDefined(System.Type,System.Boolean)
extern "C"  bool FieldBuilder_IsDefined_m1233219871 (FieldBuilder_t1754069893 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.FieldBuilder::GetFieldOffset()
extern "C"  int32_t FieldBuilder_GetFieldOffset_m849516803 (FieldBuilder_t1754069893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.FieldBuilder::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
extern "C"  void FieldBuilder_SetValue_m668442259 (FieldBuilder_t1754069893 * __this, Il2CppObject * ___obj0, Il2CppObject * ___val1, int32_t ___invokeAttr2, Binder_t1074302268 * ___binder3, CultureInfo_t1065375142 * ___culture4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.FieldBuilder::get_UMarshal()
extern "C"  UnmanagedMarshal_t224089244 * FieldBuilder_get_UMarshal_m2685231318 (FieldBuilder_t1754069893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.FieldBuilder::CreateNotSupportedException()
extern "C"  Exception_t3991598821 * FieldBuilder_CreateNotSupportedException_m2418755853 (FieldBuilder_t1754069893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.FieldBuilder::get_Module()
extern "C"  Module_t1394482686 * FieldBuilder_get_Module_m3744550626 (FieldBuilder_t1754069893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
