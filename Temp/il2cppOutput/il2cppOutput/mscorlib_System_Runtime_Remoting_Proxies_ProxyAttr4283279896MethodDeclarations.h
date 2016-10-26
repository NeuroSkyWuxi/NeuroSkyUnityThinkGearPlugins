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

// System.Runtime.Remoting.Proxies.ProxyAttribute
struct ProxyAttribute_t4283279896;
// System.MarshalByRefObject
struct MarshalByRefObject_t1219038801;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t2420216138;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t2484604634;
// System.Object
struct Il2CppObject;
// System.Runtime.Remoting.Contexts.Context
struct Context_t515654137;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t46526869;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Runtime_Remoting_ObjRef2484604634.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Runtime_Remoting_Contexts_Context515654137.h"

// System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type)
extern "C"  MarshalByRefObject_t1219038801 * ProxyAttribute_CreateInstance_m980921561 (ProxyAttribute_t4283279896 * __this, Type_t * ___serverType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context)
extern "C"  RealProxy_t2420216138 * ProxyAttribute_CreateProxy_m2844329499 (ProxyAttribute_t4283279896 * __this, ObjRef_t2484604634 * ___objRef0, Type_t * ___serverType1, Il2CppObject * ___serverObject2, Context_t515654137 * ___serverContext3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.ProxyAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C"  void ProxyAttribute_GetPropertiesForNewContext_m3270579674 (ProxyAttribute_t4283279896 * __this, Il2CppObject * ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Proxies.ProxyAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C"  bool ProxyAttribute_IsContextOK_m3044902249 (ProxyAttribute_t4283279896 * __this, Context_t515654137 * ___ctx0, Il2CppObject * ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
