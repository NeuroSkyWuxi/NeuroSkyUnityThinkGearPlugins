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

// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Reflection.Binder
struct Binder_t1074302268;
// System.Globalization.CultureInfo
struct CultureInfo_t1065375142;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Reflection_BindingFlags1523912596.h"
#include "mscorlib_System_Reflection_Binder1074302268.h"
#include "mscorlib_System_Globalization_CultureInfo1065375142.h"

// System.Object System.Activator::CreateInstance(System.Type)
extern "C"  Il2CppObject * Activator_CreateInstance_m1399154923 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Object[])
extern "C"  Il2CppObject * Activator_CreateInstance_m2161363287 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, ObjectU5BU5D_t1108656482* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Object[],System.Object[])
extern "C"  Il2CppObject * Activator_CreateInstance_m3442201027 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, ObjectU5BU5D_t1108656482* ___args1, ObjectU5BU5D_t1108656482* ___activationAttributes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo,System.Object[])
extern "C"  Il2CppObject * Activator_CreateInstance_m3273083411 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, int32_t ___bindingAttr1, Binder_t1074302268 * ___binder2, ObjectU5BU5D_t1108656482* ___args3, CultureInfo_t1065375142 * ___culture4, ObjectU5BU5D_t1108656482* ___activationAttributes5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Boolean)
extern "C"  Il2CppObject * Activator_CreateInstance_m876910386 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, bool ___nonPublic1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Activator::CheckType(System.Type)
extern "C"  void Activator_CheckType_m2434998173 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Activator::CheckAbstractType(System.Type)
extern "C"  void Activator_CheckAbstractType_m2181712027 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstanceInternal(System.Type)
extern "C"  Il2CppObject * Activator_CreateInstanceInternal_m3564227118 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
