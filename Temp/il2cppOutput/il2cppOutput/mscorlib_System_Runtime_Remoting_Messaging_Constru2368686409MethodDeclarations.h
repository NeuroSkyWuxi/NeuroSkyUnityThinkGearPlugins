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

// System.Runtime.Remoting.Messaging.ConstructionCall
struct ConstructionCall_t2368686409;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.String
struct String_t;
// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t419248690;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Collections.IList
struct IList_t1751339649;
// System.Object
struct Il2CppObject;
// System.Collections.IDictionary
struct IDictionary_t537317817;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Type)
extern "C"  void ConstructionCall__ctor_m1901864150 (ConstructionCall_t2368686409 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConstructionCall__ctor_m2332608900 (ConstructionCall_t2368686409 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitDictionary()
extern "C"  void ConstructionCall_InitDictionary_m600871527 (ConstructionCall_t2368686409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_IsContextOk(System.Boolean)
extern "C"  void ConstructionCall_set_IsContextOk_m1331988764 (ConstructionCall_t2368686409 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationType()
extern "C"  Type_t * ConstructionCall_get_ActivationType_m242799220 (ConstructionCall_t2368686409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationTypeName()
extern "C"  String_t* ConstructionCall_get_ActivationTypeName_m2260379688 (ConstructionCall_t2368686409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Messaging.ConstructionCall::get_Activator()
extern "C"  Il2CppObject * ConstructionCall_get_Activator_m521493960 (ConstructionCall_t2368686409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator)
extern "C"  void ConstructionCall_set_Activator_m1743955147 (ConstructionCall_t2368686409 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ConstructionCall::get_CallSiteActivationAttributes()
extern "C"  ObjectU5BU5D_t1108656482* ConstructionCall_get_CallSiteActivationAttributes_m2779293359 (ConstructionCall_t2368686409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::SetActivationAttributes(System.Object[])
extern "C"  void ConstructionCall_SetActivationAttributes_m3550123778 (ConstructionCall_t2368686409 * __this, ObjectU5BU5D_t1108656482* ___attributes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Runtime.Remoting.Messaging.ConstructionCall::get_ContextProperties()
extern "C"  Il2CppObject * ConstructionCall_get_ContextProperties_m4182550654 (ConstructionCall_t2368686409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitMethodProperty(System.String,System.Object)
extern "C"  void ConstructionCall_InitMethodProperty_m3499598409 (ConstructionCall_t2368686409 * __this, String_t* ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConstructionCall_GetObjectData_m2981776609 (ConstructionCall_t2368686409 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ConstructionCall::get_Properties()
extern "C"  Il2CppObject * ConstructionCall_get_Properties_m690127073 (ConstructionCall_t2368686409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
