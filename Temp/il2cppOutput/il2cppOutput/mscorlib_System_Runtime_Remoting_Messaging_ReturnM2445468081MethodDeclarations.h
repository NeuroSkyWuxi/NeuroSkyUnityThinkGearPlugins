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

// System.Runtime.Remoting.Messaging.ReturnMessage
struct ReturnMessage_t2445468081;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t3949483042;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t932376889;
// System.Exception
struct Exception_t3991598821;
// System.String
struct String_t;
// System.Reflection.MethodBase
struct MethodBase_t318515428;
// System.Collections.IDictionary
struct IDictionary_t537317817;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Runtime_Remoting_Messaging_Logical3949483042.h"
#include "mscorlib_System_Exception3991598821.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Object,System.Object[],System.Int32,System.Runtime.Remoting.Messaging.LogicalCallContext,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern "C"  void ReturnMessage__ctor_m1311493117 (ReturnMessage_t2445468081 * __this, Il2CppObject * ___ret0, ObjectU5BU5D_t1108656482* ___outArgs1, int32_t ___outArgsCount2, LogicalCallContext_t3949483042 * ___callCtx3, Il2CppObject * ___mcm4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Exception,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern "C"  void ReturnMessage__ctor_m3758991866 (ReturnMessage_t2445468081 * __this, Exception_t3991598821 * ___e0, Il2CppObject * ___mcm1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
extern "C"  void ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m1208934489 (ReturnMessage_t2445468081 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_Args()
extern "C"  ObjectU5BU5D_t1108656482* ReturnMessage_get_Args_m1415412666 (ReturnMessage_t2445468081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::get_LogicalCallContext()
extern "C"  LogicalCallContext_t3949483042 * ReturnMessage_get_LogicalCallContext_m2558823349 (ReturnMessage_t2445468081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase()
extern "C"  MethodBase_t318515428 * ReturnMessage_get_MethodBase_m1896590733 (ReturnMessage_t2445468081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodName()
extern "C"  String_t* ReturnMessage_get_MethodName_m2648484121 (ReturnMessage_t2445468081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodSignature()
extern "C"  Il2CppObject * ReturnMessage_get_MethodSignature_m2675815582 (ReturnMessage_t2445468081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ReturnMessage::get_Properties()
extern "C"  Il2CppObject * ReturnMessage_get_Properties_m3370534783 (ReturnMessage_t2445468081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_TypeName()
extern "C"  String_t* ReturnMessage_get_TypeName_m3911062450 (ReturnMessage_t2445468081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_Uri()
extern "C"  String_t* ReturnMessage_get_Uri_m1363018977 (ReturnMessage_t2445468081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::set_Uri(System.String)
extern "C"  void ReturnMessage_set_Uri_m4046194808 (ReturnMessage_t2445468081 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::get_Exception()
extern "C"  Exception_t3991598821 * ReturnMessage_get_Exception_m564038940 (ReturnMessage_t2445468081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_OutArgs()
extern "C"  ObjectU5BU5D_t1108656482* ReturnMessage_get_OutArgs_m1555180784 (ReturnMessage_t2445468081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_ReturnValue()
extern "C"  Il2CppObject * ReturnMessage_get_ReturnValue_m4052519528 (ReturnMessage_t2445468081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
