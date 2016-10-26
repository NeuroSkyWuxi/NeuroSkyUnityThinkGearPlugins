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

// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t2420216138;
// System.Type
struct Type_t;
// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t2516200039;
// System.Object
struct Il2CppObject;
// System.Runtime.Remoting.Identity
struct Identity_t3943038460;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Runtime_Remoting_ClientIdentity2516200039.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type)
extern "C"  void RealProxy__ctor_m1052917757 (RealProxy_t2420216138 * __this, Type_t * ___classToProxy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
extern "C"  void RealProxy__ctor_m353424490 (RealProxy_t2420216138 * __this, Type_t * ___classToProxy0, ClientIdentity_t2516200039 * ___identity1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.IntPtr,System.Object)
extern "C"  void RealProxy__ctor_m3053042265 (RealProxy_t2420216138 * __this, Type_t * ___classToProxy0, IntPtr_t ___stub1, Il2CppObject * ___stubData2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Proxies.RealProxy::InternalGetProxyType(System.Object)
extern "C"  Type_t * RealProxy_InternalGetProxyType_m1321633559 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___transparentProxy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Proxies.RealProxy::GetProxiedType()
extern "C"  Type_t * RealProxy_GetProxiedType_m3786182287 (RealProxy_t2420216138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Identity System.Runtime.Remoting.Proxies.RealProxy::get_ObjectIdentity()
extern "C"  Identity_t3943038460 * RealProxy_get_ObjectIdentity_m347429559 (RealProxy_t2420216138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String)
extern "C"  Il2CppObject * RealProxy_InternalGetTransparentProxy_m1628758334 (RealProxy_t2420216138 * __this, String_t* ___className0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy()
extern "C"  Il2CppObject * RealProxy_GetTransparentProxy_m1295804673 (RealProxy_t2420216138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RealProxy::SetTargetDomain(System.Int32)
extern "C"  void RealProxy_SetTargetDomain_m1954293026 (RealProxy_t2420216138 * __this, int32_t ___domainId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
